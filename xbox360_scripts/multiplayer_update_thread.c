//Decompiled with MagicRDR v1.0
//Function Count : 321
//Statics Count : 86
//Natives Count : 236
//Parameters Count : 0

#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	bool bLocal_6 = false;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	bool bLocal_9 = false;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
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
	var uLocal_33 = 0;
	float fLocal_34 = 0.0f;
	int iLocal_35 = 12;
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
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	bool bLocal_72 = false;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	var uLocal_80 = 0;
	int iLocal_81 = 0;
	bool bLocal_82 = false;
	bool bLocal_83 = false;
	var uLocal_84 = 0;
	bool bLocal_85 = false;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	char* cVar10[8];
	
	iLocal_19 = 0;
	iLocal_20 = 0;
	fLocal_34 = 1.0f;
	iLocal_79 = 0;
	iLocal_81 = 0;
	iLocal_78 = 0;
	Global_79340 = 0;
	iVar5 = 0;
	bVar7 = false;
	Function_320();
	Function_277();
	UI_SEND_EVENT("net.StartOnline");
	while (!Function_276() && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	if (Function_276())
	{
		Function_275(1);
	}
	while (!IS_EXITFLAG_SET() && Function_276())
	{
		Global_78617.f_60 = GET_CURRENT_GAME_TIME();
		Function_274();
		Function_271();
		Function_265();
		switch (iLocal_78)
		{
			case 0x00000000:
				if (Function_264(1))
				{
					iLocal_78 = 1;
				}
				break;
			
			case 0x00000001:
				uLocal_84 = Function_263("multiplayerUpdateThread");
				Function_261();
				Function_196();
				Function_194();
				Function_187();
				Global_79959 = 0;
				iLocal_81 = GET_AMBIENT_MAX_NUM_TOTAL_ACTORS();
				SET_AMBIENT_MAX_NUM_TOTAL_ACTORS(30);
				if (!Function_186())
				{
					Function_185("FREEROAM");
				}
				Function_184(1);
				Function_183(2);
				iVar6 = 0;
				while (iVar6 < (Global_76943 - 1))
				{
					Function_179(&(Global_76943[iVar696]));
					iVar6++;
				}
				Function_179(&Global_78480);
				Function_177();
				REGISTER_CLIENT_BROADCAST_VARIABLES(&Global_76943, 1537);
				REGISTER_HOST_BROADCAST_VARIABLES(&Global_78578, 39);
				Global_78576 = CREATE_ACTORSET_IN_LAYOUT(Function_176(), "playersInSession", 1);
				if (HAS_ACHIEVEMENT_BEEN_PASSED(48))
				{
					Function_175(262144, 1);
				}
				Function_174(128);
				Function_167(Function_176(), 19252);
				bVar7 = true;
				Global_13111 = 4294967295;
				GRINGO_DISABLE_TYPE("rand_idle_sit_ground_player");
				GRINGO_DISABLE_TYPE("locked_footlocker");
				GRINGO_DISABLE_TYPE("nold_winch");
				GRINGO_DISABLE_TYPE("stand_open_chest");
				GRINGO_DISABLE_TYPE("horsehitch");
				GRINGO_DISABLE_TYPE("horsehitch2");
				GRINGO_DISABLE_TYPE("hitchingpost");
				GRINGO_DISABLE_TYPE("treasure_hunting_1");
				GRINGO_DISABLE_TYPE("treasure_hunting_2");
				GRINGO_DISABLE_TYPE("treasure_hunting_3");
				GRINGO_DISABLE_TYPE("treasure_hunting_4");
				GRINGO_DISABLE_TYPE("treasure_hunting_5");
				GRINGO_DISABLE_TYPE("treasure_hunting_6");
				GRINGO_DISABLE_TYPE("treasure_hunting_7");
				GRINGO_DISABLE_TYPE("treasure_hunting_8");
				GRINGO_DISABLE_TYPE("treasure_hunting_final");
				GRINGO_DISABLE_TYPE("open_big_door");
				GRINGO_DISABLE_TYPE("horse_tend_camp");
				GRINGO_DISABLE_TYPE("horse_stay");
				GRINGO_DISABLE_TYPE("fake_horseshoe");
				GRINGO_DISABLE_TYPE("get_ransom_note");
				GRINGO_DISABLE_TYPE("skin_animal");
				GRINGO_DISABLE_TYPE("pickup_tnt");
				switch (GET_PLAYER_COMBATMODE())
				{
					case 0x00000000:
						Function_175(1572864, 0);
						break;
					
					case 0x00000001:
						Function_175(524288, 0);
						Function_175(1048576, 1);
						break;
					
					case 0x00000002:
						Function_175(524288, 1);
						Function_175(1048576, 0);
						break;
				}
				Global_63096 = 0;
				if (Global_84364.f_776 >= 0)
				{
					Function_166();
				}
				iLocal_78 = 2;
				break;
			
			case 0x00000002:
				if (Function_161(&iLocal_35) && Function_160(256))
				{
					Function_159();
					Function_158();
					Function_154();
					Function_275(131072);
					iLocal_78 = 3;
				}
				break;
			
			case 0x00000003:
				if (Function_264(1))
				{
					Global_79340 = Function_153(16384, 1);
					if (NET_IS_IN_SESSION())
					{
						Global_76943[GET_LOCAL_SLOT()96] = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_78480 };
						Function_151(Function_176());
						bVar8 = false;
						bVar8 = false;
						while (bVar8 <= 16)
						{
							if (IS_SLOT_VALID(bVar8))
							{
								bVar9 = GET_SLOT_ACTOR(bVar8);
								if (IS_ACTOR_VALID(bVar9))
								{
									if (IS_ACTORSET_VALID(Global_78576))
									{
										if (!IS_ACTOR_IN_ACTORSET(Global_78576, bVar9))
										{
											ADD_ACTORSET_MEMBER(Global_78576, bVar9);
										}
									}
								}
							}
							bVar8++;
						}
						if (Function_149())
						{
							Function_146();
							Function_136(&Global_50170[5422] + 8, &Global_50170[5422] + 12);
						}
						if (!iLocal_79)
						{
							iLocal_79 = 1;
							Function_158();
							Function_135(0);
							Function_134(0);
							Function_133(0);
							Function_132(0.0f);
						}
						Function_126(Global_29006, Global_29005);
						Function_125();
						Function_119();
					}
					else if (iLocal_79)
					{
						Function_135(0);
						Function_134(0);
						Function_133(0);
						Function_177();
						iLocal_79 = 0;
					}
					Function_159();
					Function_175(2, !IS_ACTOR_ALIVE(Function_118()));
					Function_108();
					Function_95();
					if (Function_92(16384))
					{
						Function_52();
					}
					Function_49();
					if (NET_IS_IN_SESSION())
					{
						Global_76943[GET_LOCAL_SLOT()96] = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_78480 };
					}
				}
				Function_48(uLocal_84);
				break;
			
			default:
				break;
		}
		WAIT(false);
	}
	Function_45(1);
	Function_44();
	Global_83822 = 0;
	Global_79340 = 0;
	GRINGO_ENABLE_TYPE("treasure_hunting_1");
	GRINGO_ENABLE_TYPE("treasure_hunting_2");
	GRINGO_ENABLE_TYPE("treasure_hunting_3");
	GRINGO_ENABLE_TYPE("treasure_hunting_4");
	GRINGO_ENABLE_TYPE("treasure_hunting_5");
	GRINGO_ENABLE_TYPE("treasure_hunting_6");
	GRINGO_ENABLE_TYPE("treasure_hunting_7");
	GRINGO_ENABLE_TYPE("treasure_hunting_8");
	GRINGO_ENABLE_TYPE("treasure_hunting_final");
	GRINGO_ENABLE_TYPE("rand_idle_sit_ground_player");
	GRINGO_ENABLE_TYPE("locked_footlocker");
	GRINGO_ENABLE_TYPE("nold_winch");
	GRINGO_ENABLE_TYPE("stand_open_chest");
	GRINGO_ENABLE_TYPE("horseHitch");
	GRINGO_ENABLE_TYPE("horseHitch2");
	GRINGO_ENABLE_TYPE("hitchingPost");
	GRINGO_ENABLE_TYPE("open_big_door");
	GRINGO_ENABLE_TYPE("horse_tend_camp");
	GRINGO_ENABLE_TYPE("horse_stay");
	GRINGO_ENABLE_TYPE("fake_horseshoe");
	GRINGO_ENABLE_TYPE("get_ransom_note");
	GRINGO_ENABLE_TYPE("skin_animal");
	GRINGO_ENABLE_TYPE("pickup_tnt");
	UI_EXIT("MPSplash");
	UI_POP("MPSplash");
	UI_EXIT("MPReward");
	UI_EXIT("MPScoringDisplays");
	UI_EXIT("HudMPNoFun");
	UI_EXIT("RacePosition");
	Function_43();
	Function_39();
	if (bVar7)
	{
		Function_9();
		SAVE_SOFT_SAVE(2);
		Function_4();
		UNREGISTER_CLIENT_BROADCAST_VARIABLES();
		UNREGISTER_HOST_BROADCAST_VARIABLES();
		if (IS_LAYOUTREF_VALID(Global_79342))
		{
			DESTROY_LAYOUT(Global_79342);
		}
		Function_1("multiplayerUpdateThread");
		SET_AMBIENT_MAX_NUM_TOTAL_ACTORS(iLocal_81);
	}
	if (HUD_IS_FADED())
	{
		if (HUD_IS_FADED())
		{
			strcpy(&cVar10, "LS_", 8);
			straddi(&cVar10, RAND_INT_RANGE(true, 13), 8);
			UI_TEXTURE_SET_NAME("LoadingScreenTexture", &cVar10);
		}
	}
	else
	{
		UNK_0xEF270DC9();
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

int Function_1(bool bParam0) //Position: 0x820 / 2080
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = Function_3();
	bVar1 = FIND_OBJECT_IN_LAYOUT(bVar0, bParam0);
	if (Function_2(bVar1))
	{
		return 1;
	}
	return 0;
}

bool Function_2(bool bParam0) //Position: 0x83F / 2111
{
	if (IS_OBJECT_VALID(bParam0))
	{
		DESTROY_OBJECT(bParam0);
		return 1;
	}
	return 0;
}

var Function_3() //Position: 0x855 / 2133
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("NetEventLayout");
	if (!IS_OBJECT_VALID(bVar0))
	{
		return CREATE_LAYOUT("NetEventLayout");
	}
	return bVar0;
}

int Function_4() //Position: 0x891 / 2193
{
	Function_5(&iLocal_35);
	return 1;
}

void Function_5(int iParam0) //Position: 0x89D / 2205
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_6(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_6(var uParam0, int iParam1) //Position: 0x8C3 / 2243
{
	if (Function_8(uParam0[iParam13], 4))
	{
		if (Function_8(uParam0[iParam13], 1))
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
			Function_7(uParam0[iParam13], 1);
			Function_7(uParam0[iParam13], 2);
			Function_7(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_7(var uParam0, int iParam1) //Position: 0x9F1 / 2545
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_8(int iParam0, int iParam1) //Position: 0xA0B / 2571
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_9() //Position: 0xA28 / 2600
{
	Function_37();
	Function_36();
	Function_36();
	Function_35();
	Function_35();
	Function_34();
	Function_34();
	Function_17();
	Function_17();
	if (!Function_16())
	{
		Function_14();
		Function_13();
		Function_12();
		Function_11();
	}
	Function_10();
	return;
}

void Function_10() //Position: 0xA5B / 2651
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

void Function_11() //Position: 0xB61 / 2913
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

void Function_12() //Position: 0xB94 / 2964
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

void Function_13() //Position: 0xD22 / 3362
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

void Function_14() //Position: 0xED6 / 3798
{
	Function_15(&Global_28260, 1, 0);
	return;
}

void Function_15(int iParam0, bool bParam1, var uParam2) //Position: 0xEE4 / 3812
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
	
	bVar0 = Function_118();
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

bool Function_16() //Position: 0x10D5 / 4309
{
	return NET_IS_MANAGER_INITIALIZED();
}

struct<8> Function_17() //Position: 0x10DE / 4318
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
				iVar2 = ((Function_33((50 + iVar4)) + Function_33((183 + iVar4))) + Function_33((90 + iVar4)));
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
	Function_18(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_18(int iParam0, bool bParam1, bool bParam2) //Position: 0x1179 / 4473
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
		Function_32(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_31(iParam0);
	if (bParam2)
	{
		Function_19(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_19(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x1414 / 5140
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_30(390))), 32);
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
					bVar19 = (Function_29(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_29(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_27(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_24(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_22(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_21(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_20(), &Var9);
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

var Function_20() //Position: 0x1A41 / 6721
{
	int iVar0;
	
	return iVar0;
}

var Function_21(int iParam0) //Position: 0x1A49 / 6729
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_22(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1A5A / 6746
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_23("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_23("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_23("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_23(char* cParam0, char* cParam1) //Position: 0x1B4F / 6991
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_24(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1B68 / 7016
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_26(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_25(Function_26(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_25(int iParam0, int iParam1) //Position: 0x1BCD / 7117
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_26(int iParam0, bool bParam1) //Position: 0x1BDF / 7135
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_27(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1BF1 / 7153
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
	if (((Function_28(iParam0) != 19 || Function_28(iParam0) != 17) || Function_28(iParam0) != 10) || Function_28(iParam0) != 9)
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

int Function_28(int iParam0) //Position: 0x1D21 / 7457
{
	return Global_35278[iParam020].f_48;
}

float Function_29(int iParam0) //Position: 0x1D30 / 7472
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_30(int iParam0) //Position: 0x1D69 / 7529
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_31(int iParam0) //Position: 0x1DA6 / 7590
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

int Function_32(int iParam0, bool bParam1, bool bParam2) //Position: 0x1F40 / 8000
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

int Function_33(bool bParam0) //Position: 0x215A / 8538
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_34() //Position: 0x219B / 8603
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
		iVar2 = ((Function_33((50 + iVar3) + 15) + Function_33((183 + iVar3) + 15)) + Function_33((90 + iVar3) + 15));
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
	Function_18(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_35() //Position: 0x2224 / 8740
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
			iVar2 = ((Function_33((50 + iVar3) + 8) + Function_33((183 + iVar3) + 8)) + Function_33((90 + iVar3) + 8));
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
	Function_18(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_36() //Position: 0x22BB / 8891
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
		iVar2 = ((Function_33((50 + iVar3)) + Function_33((183 + iVar3))) + Function_33((90 + iVar3)));
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
	Function_18(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_37() //Position: 0x233A / 9018
{
	Function_38(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_18(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_38(int iParam0, bool bParam1, int iParam2) //Position: 0x2360 / 9056
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
	Function_32(iParam0, bParam1, 1);
	Function_31(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_19(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_39() //Position: 0x256A / 9578
{
	Function_42();
	Function_41();
	Function_40();
	return;
}

void Function_40() //Position: 0x2579 / 9593
{
	if (Global_28235 == 3)
	{
		Global_28235.f_4 = 3;
	}
	*(&Global_28235 + 24) = { 0.0f, 0.0f, 0.0f };
	*(&Global_28235 + 36) = { 0.0f, 0.0f, 0.0f };
	CLEAR_GPS_PATH(2);
	return;
}

void Function_41() //Position: 0x25A4 / 9636
{
	if (Global_28210 == 1)
	{
		Global_28210.f_4 = 3;
	}
	*(&Global_28210 + 24) = { 0.0f, 0.0f, 0.0f };
	*(&Global_28210 + 36) = { 0.0f, 0.0f, 0.0f };
	CLEAR_GPS_PATH(0);
	return;
}

void Function_42() //Position: 0x25CF / 9679
{
	if (Global_28185 == 2)
	{
		Global_28185.f_4 = 3;
	}
	*(&Global_28185 + 24) = { 0.0f, 0.0f, 0.0f };
	*(&Global_28185 + 36) = { 0.0f, 0.0f, 0.0f };
	CLEAR_GPS_PATH(1);
	return;
}

void Function_43() //Position: 0x25FA / 9722
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_44() //Position: 0x260C / 9740
{
	bool bVar0;
	
	bVar0 = Function_3();
	DESTROY_LAYOUT_OBJECTS(bVar0);
	return;
}

void Function_45(int iParam0) //Position: 0x261C / 9756
{
	Function_46(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_46(var uParam0, int iParam1) //Position: 0x2655 / 9813
{
	Function_47(uParam0, iParam1);
	return;
}

void Function_47(var uParam0, int iParam1) //Position: 0x2662 / 9826
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_48(bool bParam0) //Position: 0x2675 / 9845
{
	if (IS_OBJECTSET_VALID(bParam0))
	{
		DISBAND_OBJECTSET(bParam0);
	}
	return;
}

void Function_49() //Position: 0x2688 / 9864
{
	float fVar0;
	float fVar1;
	
	fVar0 = Function_29(487);
	fVar1 = Function_51(1);
	if (FABS((fVar1 - fVar0)) < 0,1f)
	{
		Function_50(1, fVar0);
	}
	return;
}

void Function_50(int iParam0, int iParam1) //Position: 0x26B3 / 9907
{
	(*&Global_78480 + 176)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 176)[iParam0] = iParam1;
	}
	return;
}

var Function_51(int iParam0) //Position: 0x26DC / 9948
{
	return (*&Global_78480 + 176)[iParam0];
}

void Function_52() //Position: 0x26EC / 9964
{
	if (StackVal == 10 && Global_83864.f_1264 <= 34)
	{
		if (PPP_GET_ELEMENT_MAGNITUDE(0) <= 0,75f)
		{
			Global_56352[20] = 1;
		}
		else if (!IS_ACTOR_ALIVE(Function_118()) && Global_56352[20] == 4294967295)
		{
			Global_56352[20] = 4294967295;
		}
		if (Global_56352[20] == 1)
		{
			Function_53(&Global_50170[2022] + 4, &Global_50170[2022] + 8, &Global_50170[2022] + 12);
		}
	}
	return;
}

void Function_53(var uParam0, var uParam1, bool bParam2) //Position: 0x2769 / 10089
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 33)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_91(20);
				if (PPP_GET_ELEMENT_MAGNITUDE(0) != 0.0f)
				{
					Global_56352[20] = 4294967295;
					Global_56092[20]++;
				}
				bVar0 = Global_56092[20];
				if (bVar0 > 5)
				{
					*uParam0 = 2;
					Function_59(20, 50, Function_90(), 3037);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_58(bParam2, bVar0, 5);
					if (*bParam2 == fVar1)
					{
						Function_54(20, *bParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
	return;
}

void Function_54(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x27FA / 10234
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_57(iParam0), fParam1, true, 0);
	if (bParam2)
	{
		memcpy(&cVar0, StackVal, StackVal, StackVal, Function_56(iParam0), 6);
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
		APPEND_JOURNAL_ENTRY_DETAIL(Function_57(iParam0), &cVar0, 2, 2, true);
		Function_55(Function_57(iParam0), 0);
	}
}

void Function_55(bool bParam0, bool bParam1) //Position: 0x28A8 / 10408
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

struct<16> Function_56(int iParam0) //Position: 0x28CD / 10445
{
	char* cVar0[16];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 4);
	stradd(&cVar0, "_", 16);
	stradd(&cVar0, INT_TO_STRING(StackVal), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_57(int iParam0) //Position: 0x2901 / 10497
{
	return Global_50170[iParam022].f_24;
}

void Function_58(var uParam0, bool bParam1, int iParam2) //Position: 0x2910 / 10512
{
	*uParam0 = TO_FLOAT(bParam1);
	*uParam0 = (*uParam0 / IntToFloat(iParam2));
	return;
}

void Function_59(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x2928 / 10536
{
	Function_88(iParam0, 1);
	Global_50170[iParam022].f_8 = 10;
	SET_JOURNAL_ENTRY_PROGRESS(Function_57(iParam0), 1.0f, false, 0);
	Function_84(iParam0, 0);
	if (!IS_STRING_VALID(bParam2))
	{
		bParam2 = "challenge_01_128";
	}
	if (iParam3 != 4294967295)
	{
		Function_81(iParam3);
	}
	Function_76(&Global_50170[iParam022] + 16, iParam1, bParam2);
	Function_60();
}

void Function_60() //Position: 0x298E / 10638
{
	if (!Function_16())
	{
		if (!Function_75(1, 3, 1, 1))
		{
			Function_67(1);
			Function_66(1, 8);
		}
	}
	else
	{
		Function_61(0);
	}
	return;
}

void Function_61(bool bParam0) //Position: 0x29B7 / 10679
{
	NET_LOG(true, "SaveLoad", "Multiplayer Save Triggered, will be picked up by Multiplayer_update_thread soon enough", 0, 0, false, 0);
	Function_63(2);
	if (bParam0)
	{
		Function_63(1);
	}
	else
	{
		Function_62(1);
	}
	Function_9();
	return;
}

void Function_62(int iParam0) //Position: 0x2A40 / 10816
{
	Function_46(&Global_79338, iParam0);
	return;
}

void Function_63(int iParam0) //Position: 0x2A4F / 10831
{
	Function_64(&Global_79338, iParam0);
	return;
}

void Function_64(var uParam0, int iParam1) //Position: 0x2A5E / 10846
{
	Function_65(uParam0, iParam1);
	return;
}

void Function_65(var uParam0, bool bParam1) //Position: 0x2A6B / 10859
{
	*uParam0 = (*uParam0 || bParam1);
	return;
}

void Function_66(var uParam0, int iParam1) //Position: 0x2A7A / 10874
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = uParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_16())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_67(bool bParam0) //Position: 0x2ABC / 10940
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_68();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_9();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_47(&Global_63095, 1);
		Function_47(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_68() //Position: 0x2B0D / 11021
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	Function_70(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
	vVar0 = { StackVal, StackVal, Function_70(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	if (Function_69(StackVal, StackVal, vVar0))
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

bool Function_69(vector3 vParam0) //Position: 0x2BAE / 11182
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_70(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x2BC6 / 11206
{
	int iVar0;
	
	iVar0 = Function_73(uParam2, uParam3);
	if (Function_72(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_65(&Global_63095, 1);
			Function_47(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_65(&Global_63095, 2);
			Function_47(&Global_63095, 1);
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
		Function_65(&Global_63095, 2);
		Function_47(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833,843f, 50,332f, 2418,003f;
	}
	Function_71();
	return StackVal, StackVal, Function_71();
}

vector3 Function_71() //Position: 0x2CAD / 11437
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_72(int iParam0) //Position: 0x2CB6 / 11446
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_73(bool bParam0, bool bParam1) //Position: 0x2CCC / 11468
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
				fVar2 = Function_74(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_74(StackVal, StackVal, Global_34574, -2833,843f, 50,332f, 2418,003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_72(bVar0) && !bParam1)
	{
		bVar0 = Function_73(bParam0, 1);
	}
	return bVar0;
}

float Function_74(vector3 vParam0, vector3 vParam3) //Position: 0x2D93 / 11667
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

bool Function_75(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x2DB0 / 11696
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

void Function_76(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2E54 / 11860
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	
	bVar0 = Function_176();
	iVar1 = 0;
	if (DECOR_GET_INT_VERBOSE(bVar0, Function_80(), &iVar1))
	{
		iVar2 = iVar1 & 1023;
	}
	Var3 = { StackVal, StackVal, StackVal, Function_79(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam0));
	Var3 = { StackVal, StackVal, StackVal, Function_78(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam2));
	Var3 = { StackVal, StackVal, StackVal, Function_77(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, bParam1);
	DECOR_SET_INT(bVar0, Function_80(), iVar1 + 1);
	return;
}

struct<16> Function_77(int iParam0) //Position: 0x2EC6 / 11974
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_X", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_78(int iParam0) //Position: 0x2EE7 / 12007
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_T", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_79(int iParam0) //Position: 0x2F08 / 12040
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_H", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_80() //Position: 0x2F29 / 12073
{
	return "CQueue_Count";
}

void Function_81(int iParam0) //Position: 0x2F3E / 12094
{
	Function_82(iParam0, 1);
	return;
}

void Function_82(int iParam0, bool bParam1) //Position: 0x2F4A / 12106
{
	int iVar0;
	
	iVar0 = (iParam0 % 1000);
	if (bParam1)
	{
		Function_65(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_83((iVar0 % 32)));
	}
	else
	{
		Function_47(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_83((iVar0 % 32)));
	}
	return;
}

int Function_83(bool bParam0) //Position: 0x2FA0 / 12192
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_84(int iParam0, int iParam1) //Position: 0x2FAC / 12204
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	
	if (((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_87(iParam0)) && iParam1)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		CLEAR_JOURNAL_ENTRY(Function_57(iParam0));
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_86(iParam0) };
		Var7 = { StackVal, StackVal, StackVal, Function_56(iParam0) };
		UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
		Var7 = { StackVal, StackVal, StackVal, Function_85(iParam0) };
		APPEND_JOURNAL_ENTRY_DETAIL(Function_57(iParam0), &Var7, 0, 2, false);
		PREPEND_JOURNAL_ENTRY(Function_57(iParam0), true);
		SET_JOURNAL_ENTRY_PROGRESS(Function_57(iParam0), 1.0f, false, 0);
	}
	return;
}

struct<16> Function_85(int iParam0) //Position: 0x302E / 12334
{
	char* cVar0[16];
	
	cVar0 = { StackVal, StackVal, StackVal, Function_56(iParam0) };
	stradd(&cVar0, "_des", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_86(int iParam0) //Position: 0x304E / 12366
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_87(int iParam0) //Position: 0x307F / 12415
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

void Function_88(bool bParam0, bool bParam1) //Position: 0x31FD / 12797
{
	bool bVar0;
	bool bVar1;
	char* cVar2[16];
	
	bVar0 = false;
	bVar1 = Function_89();
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

var Function_89() //Position: 0x3349 / 13129
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return bVar0;
}

bool Function_90() //Position: 0x3396 / 13206
{
	return "MP_Revenge_Icon_128";
}

var Function_91(int iParam0) //Position: 0x33B2 / 13234
{
	return Global_50170[iParam022].f_12;
}

bool Function_92(int iParam0) //Position: 0x33C1 / 13249
{
	return Function_93(&Global_79349, iParam0);
}

int Function_93(var uParam0, bool bParam1) //Position: 0x33D0 / 13264
{
	return Function_94(uParam0->f_44, bParam1);
}

bool Function_94(var uParam0, bool bParam1) //Position: 0x33DF / 13279
{
	return (uParam0 && bParam1) == 0;
}

void Function_95() //Position: 0x33EC / 13292
{
	if (Function_106(8))
	{
		Function_98();
		Function_97(256);
		Function_96(8);
	}
	return;
}

void Function_96(int iParam0) //Position: 0x3408 / 13320
{
	Function_46(&Global_83864 + 1252, iParam0);
	return;
}

void Function_97(int iParam0) //Position: 0x341A / 13338
{
	Function_64(&Global_83864 + 1252, iParam0);
	return;
}

void Function_98() //Position: 0x342C / 13356
{
	Function_105(1, 9);
	Function_105(1, 5);
	Function_105(1, 6);
	Function_105(1, 7);
	Function_105(1, 8);
	Function_105(9, 1);
	Function_105(5, 1);
	Function_105(6, 1);
	Function_105(7, 1);
	Function_105(8, 1);
	Function_99(900);
	return;
}

void Function_99(int iParam0) //Position: 0x346E / 13422
{
	int iVar0;
	
	iVar0 = 837;
	while (iVar0 < 971)
	{
		if (Function_104(iVar0) == iParam0)
		{
			Function_100(iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_100(bool bParam0) //Position: 0x3499 / 13465
{
	Function_65(&Global_83864 + 1976[Function_103(bParam0)], Function_101(bParam0));
	return;
}

bool Function_101(int iParam0) //Position: 0x34B5 / 13493
{
	return Function_83((Function_102(iParam0) % 32));
}

int Function_102(int iParam0) //Position: 0x34C6 / 13510
{
	return (iParam0 - 837);
}

int Function_103(int iParam0) //Position: 0x34D2 / 13522
{
	return (Function_102(iParam0) / 32);
}

int Function_104(bool bParam0) //Position: 0x34E0 / 13536
{
	return (ABS(GET_ACTORENUM_AVATAR_GROUP(bParam0)) % 1000);
}

void Function_105(bool bParam0, int iParam1) //Position: 0x34F2 / 13554
{
	if (bParam0 > 0 || bParam0 <= 16)
	{
		return;
	}
	if (iParam1 > 0 || iParam1 <= 16)
	{
		return;
	}
	if (bParam0 == iParam1)
	{
		return;
	}
	Function_65(&Global_78617 + 2652[bParam0], 1);
	Function_65(&Global_78617 + 2652[iParam1], 1);
	Function_65(&Global_78617 + 2652[bParam0], Function_83(iParam1));
	Function_65(&Global_78617 + 2652[iParam1], Function_83(bParam0));
	return;
}

bool Function_106(bool bParam0) //Position: 0x3566 / 13670
{
	return Function_107(Global_83864.f_1252, bParam0);
}

bool Function_107(var uParam0, bool bParam1) //Position: 0x3578 / 13688
{
	return (uParam0 && bParam1) == 0;
}

void Function_108() //Position: 0x3585 / 13701
{
	if (!HAS_ACHIEVEMENT_BEEN_PASSED(47))
	{
		if (NET_GET_PLAYMODE() == 0)
		{
			if (Function_153(131072, 1))
			{
				if (!Function_117(&bLocal_72))
				{
					Function_115(&bLocal_72);
				}
				else if (!Function_113(Global_34573, 0))
				{
					Function_112(&bLocal_72);
				}
				else if (Function_109(&bLocal_72, 600.0f) && !Global_3403)
				{
					AWARD_ACHIEVEMENT(47);
					Function_112(&bLocal_72);
				}
			}
			else
			{
				Function_112(&bLocal_72);
			}
		}
		else
		{
			Function_112(&bLocal_72);
		}
	}
	return;
}

bool Function_109(bool bParam0, float fParam1) //Position: 0x35F7 / 13815
{
	if (Function_117(bParam0))
	{
		if (Function_110(bParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_110(bool bParam0) //Position: 0x3613 / 13843
{
	if (Function_117(bParam0))
	{
		if (Function_111(bParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_111(int iParam0) //Position: 0x36DB / 14043
{
	return Function_94(*iParam0, 2);
}

void Function_112(bool bParam0) //Position: 0x36E8 / 14056
{
	bParam0->f_4 = 0.0f;
	bParam0->f_8 = 0.0f;
	*bParam0 = 0;
	return;
}

bool Function_113(bool bParam0, int iParam1) //Position: 0x36FC / 14076
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (Function_114(iParam1, 1))
			{
				if (IS_ACTOR_CRIPPLED(bParam0, 3) || IS_ACTOR_CRIPPLED(bParam0, 4))
				{
					return 0;
				}
			}
			if (Function_114(iParam1, 2))
			{
				if (IS_ACTOR_HOGTIED(bParam0))
				{
					return 0;
				}
			}
			if (Function_114(iParam1, 4))
			{
				if (IS_ACTOR_BEING_DRAGGED(bParam0, 1.0f))
				{
					return 0;
				}
			}
			if (Function_114(iParam1, 8))
			{
				if (UNK_0x7A207FFE(bParam0))
				{
					return 0;
				}
			}
			if (Function_114(iParam1, 1024))
			{
				if (!IS_ACTOR_RIDING(bParam0) && !IS_ACTOR_RIDING_VEHICLE(bParam0))
				{
					return 0;
				}
			}
			if (Function_114(iParam1, 16))
			{
				if (IS_ACTOR_RAGDOLL(bParam0))
				{
					return 0;
				}
			}
			if (Function_114(iParam1, 32))
			{
				if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
				{
					return 0;
				}
			}
			if (Function_114(iParam1, 64))
			{
				if (GET_ACTOR_INCAPACITATED(bParam0))
				{
					return 0;
				}
			}
			if (AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0) & 16384 == 16384)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

bool Function_114(var uParam0, int iParam1) //Position: 0x37D5 / 14293
{
	return (uParam0 && iParam1) == 0;
}

void Function_115(bool bParam0) //Position: 0x37E2 / 14306
{
	if (!Function_117(bParam0))
	{
		Function_116(bParam0, 0.0f);
	}
	return;
}

void Function_116(bool bParam0, float fParam1) //Position: 0x37F7 / 14327
{
	bParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_65(bParam0, 1);
	Function_47(bParam0, 2);
	bParam0->f_8 = 0.0f;
	return;
}

bool Function_117(bool bParam0) //Position: 0x3818 / 14360
{
	return Function_94(*bParam0, 1);
}

var Function_118() //Position: 0x3825 / 14373
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

int Function_119() //Position: 0x383A / 14394
{
	int iVar0;
	
	iVar0 = Function_120(Function_124(), 0);
	if (iVar0 == 4294967295)
	{
		Function_133(1);
		return 1;
	}
	if (iVar0 == GET_LOCAL_SLOT())
	{
		Function_133(1);
		return 1;
	}
	Function_133(0);
	return 0;
	return 0;
}

var Function_120(int iParam0, int iParam1) //Position: 0x3870 / 14448
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	bVar1 = GET_LOCAL_SLOT();
	bVar0 = false;
	while (bVar0 <= Global_76943)
	{
		if (Function_123(bVar0))
		{
			if (iParam1 && bVar0 != bVar1)
			{
				if (Global_78480.f_96 != iParam0 && Function_153(64, 1))
				{
					return bVar0;
				}
			}
			if (Global_76943[bVar096].f_96 == iParam0)
			{
				if (Function_121(bVar0, 64, 1))
				{
					return bVar0;
				}
			}
		}
		bVar0++;
	}
	return 4294967295;
}

bool Function_121(bool bParam0, bool bParam1, bool bParam2) //Position: 0x38DD / 14557
{
	char* cVar0[64];
	bool bVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_153(bParam1, bParam2);
	}
	if (!Function_123(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_122(bParam1), 64);
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

var Function_122(int iParam0) //Position: 0x395E / 14686
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
	}
	return "UNKNOWN";
}

bool Function_123(bool bParam0) //Position: 0x3BE7 / 15335
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

var Function_124() //Position: 0x3C88 / 15496
{
	return Global_78480.f_96;
}

void Function_125() //Position: 0x3C94 / 15508
{
	bool bVar0;
	
	Global_79297 = 0;
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			if (IS_ACTOR_VALID(GET_SLOT_ACTOR(bVar0)))
			{
				Function_65(&Global_79297, SHIFT_LEFT(true, bVar0));
			}
		}
		bVar0++;
	}
	return;
}

void Function_126(int iParam0, int iParam1) //Position: 0x3CD2 / 15570
{
	int iVar0;
	int iVar1;
	
	if (Global_78480 != iParam0)
	{
		Function_135(0);
	}
	if (StackVal != iParam1)
	{
		Function_134(0);
	}
	Global_78480 = iParam0;
	Global_78480.f_4 = iParam1;
	if (((HUD_IS_FADED() || Global_3391) || iParam0 > 0) || iParam1 > 0)
	{
		Function_135(0);
		Function_134(0);
		return;
	}
	iVar0 = 4294967295;
	iVar1 = 4294967295;
	Function_127(iParam0, &iVar0, iParam1, &iVar1, 0);
	if (iVar0 == 4294967295)
	{
		Function_135(1);
	}
	else if (iVar0 == GET_LOCAL_SLOT())
	{
		Function_135(1);
	}
	else
	{
		Function_135(0);
	}
	if (iVar1 == 4294967295)
	{
		Function_134(1);
	}
	else if (iVar1 == GET_LOCAL_SLOT())
	{
		Function_134(1);
	}
	else
	{
		Function_134(0);
	}
	return;
}

void Function_127(int iParam0, var uParam1, int iParam2, var uParam3, bool bParam4) //Position: 0x3D71 / 15729
{
	bool bVar0;
	bool bVar1;
	
	*uParam1 = 4294967295;
	*uParam3 = 4294967295;
	bVar0 = false;
	bVar1 = GET_LOCAL_SLOT();
	bVar0 = false;
	while (bVar0 <= Global_76943)
	{
		if (Function_123(bVar0))
		{
			if (bVar0 == bVar1)
			{
				if (bParam4)
				{
					if (Global_78480 != iParam0 && Function_153(32, 1))
					{
						*uParam1 = bVar0;
					}
					if (StackVal != iParam2 && Function_153(32768, 1))
					{
						*uParam3 = bVar0;
					}
				}
			}
			else
			{
				if (Function_130(bVar0) != iParam0 && Function_121(bVar0, 32, 1))
				{
					*uParam1 = bVar0;
				}
				if (Function_128(bVar0) != iParam2 && Function_121(bVar0, 32768, 1))
				{
					*uParam3 = bVar0;
				}
			}
		}
		bVar0++;
	}
}

int Function_128(bool bParam0) //Position: 0x3E19 / 15897
{
	if (!Function_123(bParam0))
	{
		return 4294967295;
	}
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_129();
	}
	return StackVal;
}

bool Function_129() //Position: 0x3E40 / 15936
{
	return StackVal;
}

int Function_130(bool bParam0) //Position: 0x3E4C / 15948
{
	if (!Function_123(bParam0))
	{
		return 4294967295;
	}
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_131();
	}
	return Global_76943[bParam096];
}

var Function_131() //Position: 0x3E71 / 15985
{
	return Global_78480;
}

void Function_132(int iParam0) //Position: 0x3E7B / 15995
{
	Global_78480.f_104 = iParam0;
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_104 = iParam0;
	}
	return;
}

void Function_133(bool bParam0) //Position: 0x3E9C / 16028
{
	Function_175(64, bParam0);
	return;
}

void Function_134(bool bParam0) //Position: 0x3EA9 / 16041
{
	Function_175(32768, bParam0);
	return;
}

void Function_135(bool bParam0) //Position: 0x3EB8 / 16056
{
	Function_175(32, bParam0);
	return;
}

void Function_136(var uParam0, int iParam1) //Position: 0x3EC5 / 16069
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	var uVar4;
	
	if (Global_83864.f_1264 <= 10 && !*uParam0 != 10)
	{
		switch (*uParam0)
		{
			case 0x00000000:
				iVar0 = 1;
				fVar1 = 180.0f;
				iVar3 = 1048;
				break;
			
			case 0x00000001:
				iVar0 = 2;
				fVar1 = 300.0f;
				iVar3 = 1049;
				break;
			
			case 0x00000002:
				iVar0 = 10;
				fVar1 = 420.0f;
				iVar3 = 1050;
				break;
		}
		if (Function_117(&bLocal_6))
		{
			if (!Global_3403)
			{
				Function_112(&bLocal_6);
			}
			else if (Function_109(&bLocal_6, fVar1))
			{
				if (iVar0 == 10)
				{
					*iParam1 = 1.0f;
					Function_59(54, 50, Function_145(), iVar3);
				}
				else
				{
					Function_138(54, &uVar4, 2, uParam0, iVar0, *iParam1, 0, 50, 0, 0, 50, Function_145(), iVar3);
					Function_112(&bLocal_6);
				}
				Function_60();
			}
			else
			{
				fVar2 = Function_91(54);
				*iParam1 = Function_110(&bLocal_6);
				*iParam1 = (*iParam1 / 600.0f);
				if (*iParam1 == fVar2)
				{
					Function_54(54, *iParam1, 0, 4294967295, 4294967295, 4294967295);
				}
			}
		}
		else if (Global_3403)
		{
			Function_137(&bLocal_6);
		}
	}
	return;
}

void Function_137(bool bParam0) //Position: 0x3FCF / 16335
{
	Function_116(bParam0, 0.0f);
	return;
}

void Function_138(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12) //Position: 0x3FDB / 16347
{
	struct<4> Var0;
	
	if (!IS_STRING_VALID(bParam11))
	{
		bParam11 = "challenge_01_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_56(iParam0) };
	Function_76(&Var0, bParam7, bParam11);
	*uParam1 = uParam2;
	*uParam3 = uParam4;
	Function_58(&fParam5, bParam8, bParam9);
	Function_54(iParam0, fParam5, bParam6, bParam8, 4294967295, 4294967295);
	Function_140(iParam0, bParam9, bParam10, 0);
	if (iParam12 != 4294967295)
	{
		Function_81(iParam12);
	}
	Function_139(iParam0, 4);
	Function_60();
}

void Function_139(int iParam0, int iParam1) //Position: 0x4053 / 16467
{
	Function_47(&Global_50170[iParam022] + 32, iParam1);
	return;
}

void Function_140(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x4067 / 16487
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	struct<6> Var11;
	struct<6> Var17;
	
	if ((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_87(iParam0))
	{
		bVar0 = true;
	}
	CLEAR_JOURNAL_ENTRY(Function_57(iParam0));
	if ((bParam3 && Function_144(iParam0, 4)) || !bParam3)
	{
		if (!bVar0)
		{
			PREPEND_JOURNAL_ENTRY(Function_57(iParam0), false);
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_86(iParam0) };
			Var7 = { StackVal, StackVal, StackVal, Function_56(iParam0) };
			UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
			Var11 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_143(iParam0) };
			Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_142(iParam0) };
			UI_SET_STRING(&Var11, I2STR(bParam1));
			UI_SET_STRING(&Var17, I2STR(bParam2));
			Var7 = { StackVal, StackVal, StackVal, Function_85(iParam0) };
			PREPEND_JOURNAL_ENTRY_DETAIL(Function_57(iParam0), &Var7, 0, 2, Function_144(iParam0, 4));
			if (!bParam3)
			{
				Function_141(iParam0, 4);
			}
		}
	}
}

void Function_141(int iParam0, int iParam1) //Position: 0x4124 / 16676
{
	Function_65(&Global_50170[iParam022] + 32, iParam1);
	return;
}

struct<24> Function_142(int iParam0) //Position: 0x4138 / 16696
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_XP", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_143(int iParam0) //Position: 0x4166 / 16742
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_GOAL", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_144(int iParam0, int iParam1) //Position: 0x4196 / 16790
{
	return Function_94(Global_50170[iParam022].f_32, iParam1);
}

var Function_145() //Position: 0x41AA / 16810
{
	return "challenge_04_128";
}

void Function_146() //Position: 0x41C3 / 16835
{
	vector3 vVar0;
	
	if (StackVal && (Function_149() && !Function_148(0)) == 0)
	{
		if (Function_147(5) == 1)
		{
			if (!IS_BLIP_VALID(bLocal_85))
			{
				vVar0 = { -2235,778f, 23,09f, 4453,16f };
				bLocal_85 = ADD_BLIP_FOR_COORD(&vVar0, 440, 0, 2, 0);
				SET_BLIP_SCALE(bLocal_85, 200.0f);
				SET_BLIP_NAME(bLocal_85, "mp_MasterHunter_Rank2_Blip");
			}
		}
		else if (Function_147(5) == 2)
		{
			if (!IS_BLIP_VALID(bLocal_85))
			{
				vVar0 = { -1233,583f, 22,226f, 3209,148f };
				bLocal_85 = ADD_BLIP_FOR_COORD(&vVar0, 440, 0, 2, 0);
				SET_BLIP_SCALE(bLocal_85, 200.0f);
				SET_BLIP_NAME(bLocal_85, "mp_MasterHunter_Rank3_Blip");
			}
		}
		else if (Function_147(5) == 3)
		{
			if (!IS_BLIP_VALID(bLocal_85))
			{
				vVar0 = { -841,091f, 191,146f, 1589,115f };
				bLocal_85 = ADD_BLIP_FOR_COORD(&vVar0, 440, 0, 2, 0);
				SET_BLIP_SCALE(bLocal_85, 200.0f);
				SET_BLIP_NAME(bLocal_85, "mp_MasterHunter_Rank4_Blip");
			}
		}
		else if (Function_147(5) == 4)
		{
			if (!IS_BLIP_VALID(bLocal_85))
			{
				vVar0 = { -488,548f, 145,229f, 1916,925f };
				bLocal_85 = ADD_BLIP_FOR_COORD(&vVar0, 440, 0, 2, 0);
				SET_BLIP_SCALE(bLocal_85, 200.0f);
				SET_BLIP_NAME(bLocal_85, "mp_MasterHunter_Rank5_Blip");
			}
		}
		else if (IS_BLIP_VALID(bLocal_85))
		{
			REMOVE_BLIP(bLocal_85);
		}
	}
	else if (IS_BLIP_VALID(bLocal_85))
	{
		REMOVE_BLIP(bLocal_85);
	}
	return;
}

int Function_147(int iParam0) //Position: 0x437D / 17277
{
	if (Function_16() || Global_34165.f_44)
	{
		return StackVal;
	}
	return StackVal;
}

bool Function_148(int iParam0) //Position: 0x43A5 / 17317
{
	if (!iParam0 != 0)
	{
		LOG_ERROR("Asking about a player with an index not = 0. Multiplayer Law Enforcement not yet implemented.");
		return 0;
	}
	return Global_3403;
}

bool Function_149() //Position: 0x441B / 17435
{
	if (Function_16())
	{
		return (Function_150() != 1 || Function_150() != 0);
	}
	return 0;
}

int Function_150() //Position: 0x4434 / 17460
{
	return Global_79349.f_16;
}

void Function_151(bool bParam0) //Position: 0x4440 / 17472
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (!IS_OBJECT_VALID(bLocal_9))
	{
		return;
	}
	if (EVENT_TRAP_SUCCESSFUL_TRAP(bLocal_9))
	{
		bVar0 = CREATE_NAMED_OBJECT_ITERATOR(bParam0, "NETReplicationItr");
		if (!IS_ITERATOR_VALID(bVar0))
		{
			Function_152();
			return;
		}
		ITERATE_IN_EVENT_TRAP(bVar0, bLocal_9);
		bVar1 = START_OBJECT_ITERATOR(bVar0);
		while (IS_OBJECT_VALID(bVar1))
		{
			bVar3 = GET_EVENT_FROM_OBJECT(bVar1);
			bVar2 = GET_EVENT_TARGET_AS_OBJECT(bVar3);
			if (IS_OBJECT_VALID(bVar2))
			{
				Stack.Push(bVar2);
				Call_Loc(uLocal_10);
			}
			bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
		}
		Function_152();
		DESTROY_ITERATOR(bVar0);
	}
	return;
}

void Function_152() //Position: 0x44C3 / 17603
{
	EVENT_TRAP_CLEAR_TRAP_FLAG(bLocal_9);
	EVENT_TRAP_CLEAR_EVENTS(bLocal_9);
	return;
}

bool Function_153(bool bParam0, bool bParam1) //Position: 0x44D3 / 17619
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && bParam0);
	if (bParam1)
	{
		return iVar0 != bParam0;
	}
	return iVar0 == 0;
}

void Function_154() //Position: 0x44F3 / 17651
{
	Function_155(Function_157());
	return;
}

void Function_155(int iParam0) //Position: 0x44FF / 17663
{
	char* cVar0[64];
	
	cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_156(iParam0) };
	UI_SET_TEXT("MPP_TitleValue", &cVar0);
	strcpy(&cVar0, UI_GET_STRING(&cVar0), 64);
	Global_78480.f_28 = iParam0;
	*(&Global_78480 + 32) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_28 = iParam0;
		*(&Global_76943[GET_LOCAL_SLOT()96] + 32) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
	}
	UPDATE_STRING_PROFILE_STAT("MpTitleStringId", &cVar0);
	return;
}

struct<64> Function_156(int iParam0) //Position: 0x4581 / 17793
{
	int iVar0;
	struct<16> Var1;
	
	iVar0 = (iParam0 / 1000);
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_83864 + 1288[iVar017]) };
	straddi(&Var1, (iParam0 % 1000), 64);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var1;
}

int Function_157() //Position: 0x45B3 / 17843
{
	return Global_76886;
}

void Function_158() //Position: 0x45BD / 17853
{
	bool bVar0;
	
	bVar0 = (Global_83864.f_1264 + 1 + Global_84364.f_708 * 50);
	NET_GAMERDATA_SET("Rank", bVar0);
	UPDATE_PROFILE_STAT("MpLevel", TO_FLOAT(bVar0), 1);
	return;
}

void Function_159() //Position: 0x45F7 / 17911
{
	if (!IS_SCRIPT_VALID(iLocal_83))
	{
		bLocal_83 = LAUNCH_NEW_SCRIPT("$/content/multiplayer/PR_Multiplayer", 0);
	}
	if (!IS_SCRIPT_VALID(iLocal_82))
	{
		bLocal_82 = LAUNCH_NEW_SCRIPT("$/content/multiplayer/multiplayer_system_thread", 0);
	}
	return;
}

bool Function_160(int iParam0) //Position: 0x4674 / 18036
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_161(int iParam0) //Position: 0x4690 / 18064
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_165();
	iVar1 = 0;
	if (!Function_8(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_164(iParam0[iVar03], 8);
		}
		else if (Function_163())
		{
			iVar1 = 1;
			Function_164(iParam0[iVar03], 8);
		}
		Function_164(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_8(iParam0[iVar03], 4))
		{
			if (!Function_8(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_8(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_8(iParam0[03], 8) || iVar1));
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
				Function_164(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_8(iParam0[iVar03], 4))
		{
			if (!Function_8(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_164(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_164(iParam0[iVar03], 2);
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
							Function_164(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_164(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_164(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_164(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_164(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_164(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_164(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_164(iParam0[iVar03], 2);
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
	Function_162();
	return 1;
}

void Function_162() //Position: 0x4A0B / 18955
{
	if (!Function_160(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_163() //Position: 0x4A4B / 19019
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

void Function_164(var uParam0, int iParam1) //Position: 0x4A76 / 19062
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_165() //Position: 0x4A87 / 19079
{
	if (!Function_160(128))
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

void Function_166() //Position: 0x4AC9 / 19145
{
	int iVar0[67];
	
	NET_START_LB_UPDATE(false);
	iVar0[6] = 1;
	NET_UPDATE_LEADERBOARD(4294967295, Global_84364.f_776, 4294967295, &iVar0);
	NET_UPDATE_LEADERBOARD(4294967295, 3, 4294967295, &iVar0);
	NET_END_LB_UPDATE();
	Global_84364.f_776 = 4294967295;
	Function_61(0);
	return;
}

void Function_167(bool bParam0, int iParam1) //Position: 0x4B06 / 19206
{
	bLocal_9 = CREATE_EVENT_TRAP("NETReplicationTrap", 70, bParam0);
	EVENT_TRAP_STORE_EVENTS(bLocal_9, 1);
	uLocal_10 = iParam1;
	return;
}

void Function_168(bool bParam0) //Position: 0x4B34 / 19252
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	if (GET_OBJECT_TYPE(bParam0) != 15)
	{
		return;
	}
	bVar0 = GET_ACTOR_FROM_OBJECT(bParam0);
	if (IS_ACTOR_VALID(bVar0))
	{
		if (IS_ACTOR_PLAYER(bVar0))
		{
			bVar1 = GET_ACTOR_SLOT(bVar0);
			if (IS_SLOT_VALID(bVar1))
			{
				if (!Function_173(1) || (Function_172(GET_LOCAL_SLOT(), bVar1) && !Function_173(2)))
				{
					Function_171(bVar1, 0);
				}
				if (IS_ACTORSET_VALID(Global_78577))
				{
					if (Function_170(bVar1) != 4294967295)
					{
						Function_169(Global_78577, bVar0, 4);
					}
					else
					{
						Function_169(Global_78577, bVar0, 2);
					}
				}
			}
		}
	}
	return;
}

void Function_169(bool bParam0, bool bParam1, bool bParam2) //Position: 0x4BBC / 19388
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_ACTORSET_VALID(bParam0))
	{
		LOG_ERROR("Attempting to set relationship on invalid ACTORSET (first param).");
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		LOG_ERROR("Attempting to set relationship on invalid ACTOR.");
	}
	bVar0 = false;
	while (bVar0 < (GET_ACTORSET_SIZE(bParam0) - 1))
	{
		bVar1 = GET_ACTOR_FROM_ACTORSET(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			MEMORY_CONSIDER_AS(bVar1, bParam1, bParam2);
			MEMORY_CONSIDER_AS(bParam1, bVar1, bParam2);
		}
		bVar0++;
	}
	return;
}

int Function_170(int iParam0) //Position: 0x4C8C / 19596
{
	return Global_76943[iParam096].f_112;
}

void Function_171(bool bParam0, bool bParam1) //Position: 0x4C9C / 19612
{
	bool bVar0;
	
	if (!IS_SLOT_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (Function_172(GET_LOCAL_SLOT(), bParam0) && !Function_173(2))
		{
			return;
		}
		if (!Function_173(1))
		{
			return;
		}
	}
	bVar0 = GET_SLOT_ACTOR(bParam0);
	if (IS_ACTOR_VALID(bVar0))
	{
		SET_ACTOR_CAN_BE_TARGETED(bVar0, bParam1);
		SET_ALLOW_DEADEYE_LOCKS(bVar0, bParam1);
	}
	return;
}

int Function_172(bool bParam0, bool bParam1) //Position: 0x4CE9 / 19689
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = NET_GET_GAMER_POSSE_LEADER(bParam0);
	bVar1 = NET_GET_GAMER_POSSE_LEADER(bParam1);
	if (bVar0 != bVar1 && bVar0 < 4294967295)
	{
		return 1;
	}
	return 0;
}

bool Function_173(bool bParam0) //Position: 0x4D0D / 19725
{
	return Function_107(Global_79337, bParam0);
}

void Function_174(int iParam0) //Position: 0x4D1C / 19740
{
	Function_64(&Global_78617 + 52, iParam0);
	return;
}

void Function_175(int iParam0, bool bParam1) //Position: 0x4D2D / 19757
{
	if (bParam1)
	{
		Function_65(&Global_78480 + 124, iParam0);
	}
	else
	{
		Function_47(&Global_78480 + 124, iParam0);
	}
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_124 = Global_78480.f_124;
	}
	return;
}

var Function_176() //Position: 0x4D68 / 19816
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_177() //Position: 0x4D97 / 19863
{
	if (!NET_IS_IN_SESSION() || NET_IS_SESSION_HOST())
	{
		Function_178(&Global_78578 + 112);
	}
	return;
}

void Function_178(char* cParam0) //Position: 0x4DB1 / 19889
{
	strcpy(cParam0, "FREEROAM", 16);
	cParam0->f_16 = 4294967295;
	cParam0->f_28 = 4294967295;
	cParam0->f_32 = 0;
	cParam0->f_36 = 0;
	return;
}

void Function_179(int iParam0) //Position: 0x4DDA / 19930
{
	*iParam0 = 4294967294;
	iParam0->f_4 = 4294967294;
	iParam0->f_24 = 4294967294;
	iParam0->f_96 = 0;
	Function_182(iParam0);
	Function_181(iParam0);
	iParam0->f_124 = 0;
	iParam0->f_108 = 0;
	iParam0->f_112 = 4294967295;
	iParam0->f_100 = 4294967295;
	iParam0->f_104 = 0.0f;
	Function_180(iParam0 + 220);
	return;
}

void Function_180(int iParam0) //Position: 0x4E23 / 20003
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		(*iParam0)[iVar0] = 0;
		iVar0++;
	}
	return;
}

void Function_181(int iParam0) //Position: 0x4E44 / 20036
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (10 - 5))
	{
		(*iParam0 + 132)[iVar0] = 0;
		iVar0++;
	}
	return;
}

void Function_182(int iParam0) //Position: 0x4E68 / 20072
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (10 - 5))
	{
		(*iParam0 + 176)[iVar0] = 0.0f;
		iVar0++;
	}
	return;
}

void Function_183(int iParam0) //Position: 0x4E8C / 20108
{
	Function_46(&Global_79337, iParam0);
	return;
}

void Function_184(int iParam0) //Position: 0x4E9B / 20123
{
	Function_64(&Global_79337, iParam0);
	return;
}

void Function_185(char* cParam0) //Position: 0x4EAA / 20138
{
	strcpy(&Global_78617 + 32, cParam0, 16);
	return;
}

bool Function_186() //Position: 0x4EBA / 20154
{
	return STRING_LENGTH(&Global_78617 + 32) < 0;
}

int Function_187() //Position: 0x4ECB / 20171
{
	Function_188(&iLocal_35);
	return Function_161(&iLocal_35);
}

void Function_188(bool bParam0) //Position: 0x4EDB / 20187
{
	Function_192(bParam0, "$/content/scripting/gringo/SimpleGringo/Giveaway_Footlocker", 1, 0);
	Function_192(bParam0, "$/content/scripting/gringo/CommonScripts/Giveaway_Footlocker", 4, 0);
	Function_192(bParam0, "$/content/scripting/gringo/SimpleGringo/MP_RezBuddy", 1, 0);
	Function_192(bParam0, "$/content/multiplayer/PR_Multiplayer", 4, 0);
	Function_192(bParam0, "$/content/multiplayer/spectator/mp_spectatorMk2", 4, 0);
	Function_192(bParam0, "$/content/multiplayer/multiplayer_system_thread", 4, 0);
	Function_192(bParam0, "$/content/multiplayer/tutorial/mp_tutorial", 4, 0);
	Function_192(bParam0, Function_191(), 0, 0);
	Function_192(bParam0, Function_190(), 0, 0);
	Function_192(bParam0, Function_189(), 0, 0);
	Function_192(bParam0, "multiplayer", 10, 0);
	Function_192(bParam0, "nXP_Titles", 10, 0);
	return;
}

bool Function_189() //Position: 0x50D1 / 20689
{
	return "p_gen_crateMultiplayerWeapon01x";
}

bool Function_190() //Position: 0x50F9 / 20729
{
	return "p_gen_crateMultiplayerItem01x";
}

bool Function_191() //Position: 0x511F / 20767
{
	return "p_gen_crateMultiplayerAmmo01x";
}

var Function_192(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x5145 / 20805
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_193(iParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_164(iParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_193(var uParam0, int iParam1, int iParam2) //Position: 0x517D / 20861
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_8(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_164(uParam0[iVar03], 4);
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

void Function_194() //Position: 0x5241 / 21057
{
	Function_195(&Global_62998, 1);
	Function_195(&Global_62998, 4);
	Function_195(&Global_62998, 2);
	Function_195(&Global_62998, 8);
	Function_195(&Global_62998, 32);
	Function_195(&Global_62998, 64);
	Function_195(&Global_62998, 16);
	Function_195(&Global_62998, 512);
	Function_195(&Global_62998, 256);
	Function_195(&Global_62998, 128);
	return;
}

void Function_195(var uParam0, int iParam1) //Position: 0x5296 / 21142
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_196() //Position: 0x52A5 / 21157
{
	Function_259();
	Function_251();
	Function_239(0, 1);
	Global_83864.f_1268 = Global_83864.f_1264;
	Function_237();
	Function_230();
	Function_224();
	Function_222();
	Function_221(Global_83864.f_1284, 0, 1);
	Function_199(&Global_83591);
	Function_197();
	return;
}

void Function_197() //Position: 0x52E6 / 21222
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 74)
	{
		if (Function_94((*&Global_84364 + 408)[iVar0], 1))
		{
			Function_198(iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_198(int iParam0) //Position: 0x5316 / 21270
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_3361)
	{
		if (Global_0[iVar0168].f_64 == iParam0)
		{
			if (Function_94(Global_0[iVar0168].f_656, 4))
			{
				Function_47(&Global_0[iVar0168] + 656, 4);
				NET_SET_PLAYLIST_LOCKED(&(Global_0[iVar0168]), 0);
			}
			return;
		}
		iVar0++;
	}
	return;
}

void Function_199(int iParam0) //Position: 0x5369 / 21353
{
	Function_216(iParam0 + 276, 1);
	Function_215(iParam0);
	Function_213(iParam0, 1, 4, 7, 1);
	Function_213(iParam0, 2, 22, 1, 1);
	Function_208(iParam0, 1, 5, 5, 1);
	Function_208(iParam0, 2, 10, 3, 1);
	Function_208(iParam0, 3, 17, 1, 1);
	Function_208(iParam0, 4, 19, 1, 1);
	Function_208(iParam0, 5, 24, 1, 1);
	Function_206(iParam0, 5, 3);
	Function_206(iParam0, 4, 3);
	Function_206(iParam0, 3, 10);
	Function_206(iParam0, 7, 18);
	Function_206(iParam0, 6, 20);
	Function_206(iParam0, 8, 15);
	Function_206(iParam0, 9, 15);
	Function_206(iParam0, 10, 10);
	Function_206(iParam0, 11, 5);
	Function_205(iParam0, 0, 45.0f);
	Function_205(iParam0, 1, 45.0f);
	Function_205(iParam0, 2, 15.0f);
	Function_205(iParam0, 3, 15.0f);
	Function_205(iParam0, 4, 30.0f);
	Function_205(iParam0, 5, 30.0f);
	Function_204(iParam0, 15.0f);
	Function_203(iParam0, 15.0f);
	Function_202(iParam0, 15.0f);
	Function_201(iParam0 + 276 + 228, 100.0f);
	Function_200(iParam0 + 276, 0);
	return;
}

void Function_200(int iParam0, int iParam1) //Position: 0x547F / 21631
{
	(iParam0 + 228)->f_220 = 0;
	Function_65(iParam0 + 228 + 220, iParam1);
	return;
}

void Function_201(var uParam0, int iParam1) //Position: 0x5497 / 21655
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_202(int iParam0, int iParam1) //Position: 0x54A3 / 21667
{
	(iParam0 + 276 + 528)->f_28 = iParam1;
	return;
}

void Function_203(int iParam0, int iParam1) //Position: 0x54B5 / 21685
{
	(iParam0 + 276 + 528)->f_36 = iParam1;
	return;
}

void Function_204(int iParam0, int iParam1) //Position: 0x54C7 / 21703
{
	(iParam0 + 276 + 528)->f_32 = iParam1;
	return;
}

void Function_205(int iParam0, int iParam1, int iParam2) //Position: 0x54D9 / 21721
{
	if (iParam1 <= 0)
	{
	}
	else if (iParam1 >= 6)
	{
	}
	(*iParam0 + 276 + 528)[iParam1] = iParam2;
	return;
}

void Function_206(int iParam0, int iParam1, int iParam2) //Position: 0x54FC / 21756
{
	Function_207(iParam0 + 276, iParam1, iParam2);
	return;
}

void Function_207(int iParam0, int iParam1, int iParam2) //Position: 0x550E / 21774
{
	(*iParam0 + 456)[iParam1] = iParam2;
	return;
}

void Function_208(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x551F / 21791
{
	Function_209(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_209(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x5537 / 21815
{
	Function_210(iParam0 + 228, iParam1, bParam2, iParam3, bParam4);
}

void Function_210(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x554E / 21838
{
	if (!Function_212(iParam1))
	{
		return;
	}
	Function_211(uParam0[iParam12], bParam2, iParam3, bParam4);
}

void Function_211(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x5571 / 21873
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

bool Function_212(int iParam0) //Position: 0x559B / 21915
{
	return (iParam0 <= 0 && iParam0 > 27);
}

void Function_213(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x55AB / 21931
{
	Function_214(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_214(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x55C3 / 21955
{
	Function_210(uParam0, uParam1, uParam2, uParam3, uParam4);
}

void Function_215(int iParam0) //Position: 0x55D8 / 21976
{
	iParam0->f_844 = 1;
	return;
}

void Function_216(int iParam0, bool bParam1) //Position: 0x55E4 / 21988
{
	Function_219(iParam0);
	Function_219(iParam0 + 228);
	if (bParam1)
	{
		Function_217(iParam0);
	}
	return;
}

void Function_217(int iParam0) //Position: 0x5600 / 22016
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		Function_218(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_218(var uParam0, int iParam1) //Position: 0x5620 / 22048
{
	Function_207(uParam0, iParam1, 0);
	return;
}

void Function_219(int iParam0) //Position: 0x562E / 22062
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_220(iParam0[iVar02]);
		iVar0++;
	}
	iParam0->f_220 = 0;
	Function_201(iParam0, 0.0f);
	return;
}

void Function_220(int iParam0) //Position: 0x565B / 22107
{
	Function_211(iParam0, 4294967295, 0, 1);
	return;
}

void Function_221(var uParam0, bool bParam1, bool bParam2) //Position: 0x5669 / 22121
{
	Global_13038 = uParam0;
	if (bParam1)
	{
		Function_65(&Global_12976 + 36 + 20, 128);
	}
	if (bParam2)
	{
		Function_65(&Global_12976 + 36 + 20, 64);
	}
	return;
}

void Function_222() //Position: 0x5696 / 22166
{
	if (Function_157() < 0)
	{
		Function_223(1);
	}
	Function_155(Function_157());
	return;
}

void Function_223(int iParam0) //Position: 0x56AD / 22189
{
	Global_76886 = iParam0;
	return;
}

void Function_224() //Position: 0x56B9 / 22201
{
	if (Function_229() == 4294967295)
	{
		Function_228(StackVal);
	}
	Function_225();
	return;
}

void Function_225() //Position: 0x56D5 / 22229
{
	Function_226(Function_229());
	return;
}

void Function_226(int iParam0) //Position: 0x56E1 / 22241
{
	if (!Function_227(iParam0))
	{
		return;
	}
	if (iParam0 > 976 || iParam0 < 1007)
	{
		return;
	}
	Global_83864.f_1284 = iParam0;
	return;
}

bool Function_227(int iParam0) //Position: 0x570E / 22286
{
	if (iParam0 > 0 || iParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

void Function_228(bool bParam0) //Position: 0x5725 / 22309
{
	if (!Function_227(bParam0))
	{
		return;
	}
	if (bParam0 > 976 || bParam0 < 1007)
	{
		return;
	}
	strcpy(&Global_76870, GET_ACTOR_ENUM_STRING_FROM_ENUM(bParam0), 64);
	return;
}

int Function_229() //Position: 0x5754 / 22356
{
	if (!IS_STRING_VALID(&Global_76870))
	{
		return 4294967295;
	}
	return GET_ACTOR_ENUM_FROM_STRING(&Global_76870);
}

void Function_230() //Position: 0x576E / 22382
{
	bool bVar0;
	
	bVar0 = Function_236();
	if (bVar0 > 837 || bVar0 < 971)
	{
		bVar0 = RAND_INT_RANGE(837, 971);
	}
	if (Function_235(bVar0) != 1)
	{
		while (!Function_234(bVar0) || !IS_ACTORENUM_INSTALLED(bVar0))
		{
			bVar0++;
			if (bVar0 >= 971)
			{
				bVar0 = 837;
			}
		}
	}
	Function_232(bVar0);
	Function_231(bVar0);
	return;
}

void Function_231(bool bParam0) //Position: 0x57D0 / 22480
{
	if (!Function_227(bParam0))
	{
		return;
	}
	if (bParam0 > 837 || bParam0 < 975)
	{
		return;
	}
	strcpy(&Global_76854, GET_ACTOR_ENUM_STRING_FROM_ENUM(bParam0), 64);
	return;
}

void Function_232(int iParam0) //Position: 0x57FF / 22527
{
	if (!Function_227(iParam0))
	{
		return;
	}
	if (iParam0 > 837 || iParam0 < 975)
	{
		return;
	}
	Global_76887 = iParam0;
	Function_233(9, Global_76887);
	return;
}

void Function_233(int iParam0, int iParam1) //Position: 0x5832 / 22578
{
	(*&Global_78480 + 132)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 132)[iParam0] = iParam1;
	}
	return;
}

bool Function_234(int iParam0) //Position: 0x585B / 22619
{
	return Function_94((*&Global_83864 + 1976)[Function_103(iParam0)], Function_101(iParam0));
}

int Function_235(bool bParam0) //Position: 0x5877 / 22647
{
	return (GET_ACTORENUM_AVATAR_GROUP(bParam0) / 1000);
}

var Function_236() //Position: 0x5886 / 22662
{
	if (!IS_STRING_VALID(&Global_76854))
	{
		return 4294967295;
	}
	return GET_ACTOR_ENUM_FROM_STRING(&Global_76854);
}

void Function_237() //Position: 0x58A0 / 22688
{
	bool bVar0;
	int iVar1;
	
	bVar0 = 837;
	while (bVar0 < 971)
	{
		if (!IS_ACTORENUM_DLC(bVar0))
		{
			iVar1 = Function_104(bVar0);
			if (iVar1 < 50)
			{
				if (iVar1 >= Global_83864.f_1260 + 1 || Global_84364.f_708 < 0)
				{
					Function_100(bVar0);
				}
				else
				{
					Function_238(bVar0);
				}
			}
			else if (iVar1 >= Global_84364.f_708 * 100 || (Global_84364.f_708 != 4 && Global_83864.f_1260 != 49))
			{
				Function_100(bVar0);
			}
			else
			{
				Function_238(bVar0);
			}
		}
		bVar0++;
	}
	return;
}

void Function_238(bool bParam0) //Position: 0x592D / 22829
{
	Function_47(&Global_83864 + 1976[Function_103(bParam0)], Function_101(bParam0));
	return;
}

void Function_239(bool bParam0, bool bParam1) //Position: 0x5949 / 22857
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	int iVar4;
	
	if (bParam0)
	{
		iVar0 = Global_83864.f_1264 + 1;
	}
	else
	{
		iVar0 = Global_83864.f_1260 + 1;
	}
	iVar1 = 1;
	fVar2 = Function_29(487);
	uVar3 = Function_118();
	if (bParam1)
	{
	}
	while (iVar0 > 50 && iVar1)
	{
		if (fVar2 <= Global_83864[iVar06])
		{
			if (!Function_250(iVar0, 1))
			{
				if (!bParam1)
				{
					Function_61(0);
					if (StackVal != 4294967295)
					{
						if (!bParam0)
						{
							Function_245(&uVar3, &Global_83864[iVar06] + 4);
						}
						else if (Function_244(StackVal))
						{
							Global_84559[1] = StackVal;
						}
					}
				}
				else if (StackVal != 4294967295)
				{
					if (Function_244(StackVal))
					{
						Global_84559[1] = StackVal;
					}
				}
				if (StackVal != 4294967295)
				{
					if (!bParam1)
					{
						Global_83864.f_1284 = StackVal;
					}
					if (!bParam0)
					{
						if (!bParam1)
						{
							Function_228(Global_83864.f_1284);
							Function_225();
							Function_221(Global_83864.f_1284, 0, 1);
						}
					}
					iVar4 = Function_243(StackVal);
					Function_65(&Global_83864 + 1204[iVar4], 1);
				}
				if (Global_83864[iVar06].f_12 != 0)
				{
					Function_242(Global_83864[iVar06].f_12);
					if (Global_83864[iVar06].f_12 == 36)
					{
						NET_SET_QUICKMATCH_PLAYLIST_RANGE(34, 36);
					}
				}
				if (Function_250(iVar0, 8))
				{
					Function_242(41);
				}
				if (!bParam0)
				{
					Global_83864.f_1260 = iVar0;
					Function_241(iVar0, 1);
				}
				Global_83864.f_1264 = iVar0;
				if (bParam0)
				{
					if (Global_83864.f_1264 < 9)
					{
						Function_240(4);
					}
				}
				Function_158();
				if (Global_83864.f_1264 == 49)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(45))
					{
						AWARD_ACHIEVEMENT(45);
					}
				}
				if (!bParam1)
				{
					Global_83864.f_1272 = 1;
					Function_81(Global_83864.f_1264 + 1);
					Function_99(Global_83864.f_1264 + 1);
					if (Global_83864.f_1264 != 49 && Global_84364.f_708 != 4)
					{
						Function_99(500);
					}
				}
			}
			iVar0++;
		}
		else
		{
			iVar1 = 0;
		}
	}
	if (bParam1)
	{
	}
	return;
}

void Function_240(int iParam0) //Position: 0x5B77 / 23415
{
	Function_64(&Global_83864 + 1256, iParam0);
	return;
}

void Function_241(int iParam0, int iParam1) //Position: 0x5B89 / 23433
{
	Function_65(&Global_83864[iParam06] + 16, iParam1);
	return;
}

void Function_242(int iParam0) //Position: 0x5B9E / 23454
{
	if (!Function_94((*&Global_84364 + 408)[iParam0], 1))
	{
		Function_198(iParam0);
		Function_65(&Global_84364 + 408[iParam0], 1);
	}
	return;
}

int Function_243(int iParam0) //Position: 0x5BCB / 23499
{
	switch (iParam0)
	{
		case 0x000003E8:
			return 0;
			break;
		
		case 0x000003E4:
			return 1;
			break;
		
		case 0x000003DB:
			return 2;
			break;
		
		case 0x000003D0:
			return 3;
			break;
		
		case 0x000003D6:
			return 4;
			break;
		
		case 0x000003D3:
			return 5;
			break;
		
		case 0x000003EE:
			return 6;
			break;
		
		case 0x000003EC:
			return 7;
			break;
		
		case 0x000003ED:
			return 8;
			break;
		
		case 0x000003EF:
			return 9;
			break;
		
		case 0x000003EB:
			return 10;
			break;
		
		default:
			LOG_ERROR("INVALID HORSE PASSED IN TO GET_MOUNT_INDEX! GIVING AE_RIDEABLE_ANIMAL_MEX_Mule01");
			return 0;
			break;
	}
	return 0;
}

bool Function_244(bool bParam0) //Position: 0x5CB0 / 23728
{
	switch (UNK_0xDB679ED9(bParam0))
	{
		case 0x00000030:
		case 0x0000002F:
			return 1;
			break;
	}
	return 0;
}

void Function_245(var uParam0, int iParam1) //Position: 0x5CD2 / 23762
{
	int iVar0;
	
	if (!ACTOR_HAS_WEAPON(*uParam0, *iParam1))
	{
		Function_248(*iParam1, 1, 1);
		iVar0 = GET_AMMO_ENUM(*iParam1);
		if (Function_247(iVar0, 1))
		{
			_ADD_AMMO_OF_TYPE(*uParam0, iVar0, TO_FLOAT(Function_246(&Global_83591 + 276, iVar0)), 0, 0);
		}
	}
	if (Function_244(*iParam1))
	{
		Global_84559[*iParam1] = 1;
	}
	return;
}

int Function_246(int iParam0, int iParam1) //Position: 0x5D2B / 23851
{
	if (Function_247(iParam1, 1))
	{
		return (*iParam0 + 456)[iParam1];
	}
	return 0;
}

bool Function_247(int iParam0, int iParam1) //Position: 0x5D45 / 23877
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

int Function_248(bool bParam0, bool bParam1, int iParam2) //Position: 0x5D58 / 23896
{
	if (!Function_249(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_118(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_118(), bParam0, 1.0f, 0, 0);
		return 1;
	}
	if (bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_118(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, iParam2);
		return 1;
	}
	return 1;
}

bool Function_249(int iParam0) //Position: 0x5DAE / 23982
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

bool Function_250(int iParam0, bool bParam1) //Position: 0x5DC0 / 24000
{
	return Function_94(Global_83864[iParam06].f_16, bParam1);
}

void Function_251() //Position: 0x5DD5 / 24021
{
	Function_258(1, 0, 4, 4294967295, 0);
	Function_258(2, 150, 6, 8, 0);
	Function_258(3, 510, 4, 25, 0);
	Function_258(4, 1080, 2, 4294967295, 0);
	Function_258(5, 1860, 4, 0, 0);
	Function_258(6, 2850, 2, 4294967295, 0);
	Function_258(7, 4050, 2, 4294967295, 0);
	Function_258(8, 5460, 0, 9, 0);
	Function_258(9, 7080, 0, 5, 0);
	Function_258(10, 8910, 2, 4294967295, 0);
	Function_258(11, 10950, 4, 17, 0);
	Function_258(12, 13290, 6, 4294967295, 0);
	Function_258(13, 15930, 4, 12, 0);
	Function_258(14, 18870, 4, 4294967295, 0);
	Function_258(15, 22110, 0, 24, 39);
	Function_258(16, 25650, 2, 4294967295, 0);
	Function_258(17, 29490, 0, 6, 0);
	Function_258(18, 33630, 4, 15, 0);
	Function_258(19, 38070, 2, 4294967295, 0);
	Function_258(20, 42810, 0, 19, 40);
	Function_258(21, 47850, 2, 4294967295, 0);
	Function_258(22, 53190, 0, 23, 0);
	Function_258(23, 58830, 0, 4294967295, 0);
	Function_258(24, 64770, 0, 1, 0);
	Function_258(25, 71010, 4, 4294967295, 0);
	Function_258(26, 77550, 0, 18, 0);
	Function_258(27, 84390, 2, 4294967295, 0);
	Function_258(28, 91530, 0, 20, 0);
	Function_258(29, 98970, 2, 4294967295, 0);
	Function_258(30, 106710, 0, 4294967295, 0);
	Function_258(31, 114810, 2, 4294967295, 0);
	Function_258(32, 123270, 0, 10, 0);
	Function_258(33, 132090, 0, 4294967295, 0);
	Function_258(34, 141270, 2, 4294967295, 0);
	Function_258(35, 150810, 0, 2, 0);
	Function_258(36, 160710, 0, 4294967295, 0);
	Function_258(37, 170970, 0, 16, 0);
	Function_258(38, 181590, 0, 4294967295, 0);
	Function_258(39, 192570, 0, 4294967295, 0);
	Function_258(40, 203910, 0, 13, 0);
	Function_258(41, 215610, 4, 4294967295, 0);
	Function_258(42, 227670, 0, 4294967295, 0);
	Function_258(43, 240090, 0, 11, 0);
	Function_258(44, 252870, 0, 4294967295, 0);
	Function_258(45, 266010, 2, 4294967295, 0);
	Function_258(46, 279510, 0, 7, 0);
	Function_258(47, 293370, 0, 4294967295, 0);
	Function_258(48, 307590, 0, 4294967295, 0);
	Function_258(49, 322170, 0, 3, 0);
	Function_258(50, 337110, 8, 14, 42);
	Function_256(Global_84364.f_708);
	Function_254(&Global_83864 + 1288);
	Function_253(0);
	Function_252();
	return;
}

void Function_252() //Position: 0x6043 / 24643
{
	Function_82(0, 1);
	Function_82(1, 1);
	if (Function_157() == 0)
	{
		Function_223(1);
	}
	Function_155(Function_157());
	return;
}

void Function_253(bool bParam0) //Position: 0x6064 / 24676
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 <= 10)
		{
			iVar1 = 0;
			while (iVar1 <= 4)
			{
				(*&Global_84364 + 4[iVar010])[iVar1] = 0;
				iVar1++;
			}
			iVar0++;
		}
	}
	return;
}

void Function_254(int iParam0) //Position: 0x60A6 / 24742
{
	Function_255(iParam0, 0, "title_xplvl_", 50);
	Function_255(iParam0, 1, "title_amb_", 68);
	Function_255(iParam0, 2, "title_weap_", 24);
	Function_255(iParam0, 3, "title_pvp_", 105);
	Function_255(iParam0, 4, "title_stat_", 8);
	return;
}

void Function_255(var uParam0, int iParam1, char* cParam2, int iParam3) //Position: 0x6119 / 24857
{
	strcpy(uParam0[iParam117], cParam2, 64);
	uParam0[iParam117]->f_64 = iParam3;
	uParam0->f_684 = (uParam0->f_684 + iParam3);
}

void Function_256(int iParam0) //Position: 0x6142 / 24898
{
	Function_65(&Global_83864 + 1204[0], 1);
	switch (iParam0)
	{
		case 0x00000000:
			Function_257(1000, 0);
			Function_257(996, 3);
			Function_257(987, 7);
			Function_257(976, 21);
			Function_257(982, 32);
			Function_257(979, 39);
			Function_257(1006, 49);
			break;
		
		case 0x00000001:
			Function_257(1000, 0);
			Function_257(996, 3);
			Function_257(987, 7);
			Function_257(976, 10);
			Function_257(982, 21);
			Function_257(979, 32);
			Function_257(1006, 39);
			Function_257(1004, 49);
			break;
		
		case 0x00000002:
			Function_257(1000, 0);
			Function_257(996, 3);
			Function_257(987, 7);
			Function_257(976, 10);
			Function_257(982, 14);
			Function_257(979, 21);
			Function_257(1006, 32);
			Function_257(1004, 39);
			Function_257(1005, 49);
			break;
		
		case 0x00000003:
			Function_257(1000, 0);
			Function_257(996, 3);
			Function_257(987, 7);
			Function_257(976, 10);
			Function_257(982, 14);
			Function_257(979, 21);
			Function_257(1006, 25);
			Function_257(1004, 32);
			Function_257(1005, 39);
			Function_257(1007, 49);
			break;
		
		case 0x00000004:
			Function_257(1000, 0);
			Function_257(996, 3);
			Function_257(987, 7);
			Function_257(976, 10);
			Function_257(982, 14);
			Function_257(979, 21);
			Function_257(1006, 25);
			Function_257(1004, 32);
			Function_257(1005, 36);
			Function_257(1007, 41);
			Function_257(1003, 49);
			break;
	}
	return;
}

void Function_257(int iParam0, int iParam1) //Position: 0x62E3 / 25315
{
	Global_83864[iParam16].f_8 = iParam0;
	return;
}

void Function_258(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4) //Position: 0x62F5 / 25333
{
	Global_83864[(iParam0 - 1)6] = TO_FLOAT(bParam1);
	Global_83864[(iParam0 - 1)6].f_16 = iParam2;
	Global_83864[(iParam0 - 1)6].f_4 = iParam3;
	Global_83864[(iParam0 - 1)6].f_12 = iParam4;
}

void Function_259() //Position: 0x6336 / 25398
{
	int iVar0;
	
	iVar0 = 1;
	while (iVar0 <= 50)
	{
		Global_83864[iVar06].f_4 = 4294967295;
		Global_83864[iVar06].f_12 = 0;
		Global_83864[iVar06].f_16 = 0;
		iVar0++;
	}
	Function_260();
	return;
}

void Function_260() //Position: 0x6373 / 25459
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar0 <= 50)
	{
		Global_83864[iVar06].f_8 = 4294967295;
		iVar0++;
	}
	while (iVar1 <= 11)
	{
		Function_47(&Global_83864 + 1204[iVar1], 1);
		iVar1++;
	}
	return;
}

void Function_261() //Position: 0x63B9 / 25529
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	bVar0 = ROUND(GET_PROFILE_TIME());
	bVar1 = ROUND((GET_TIME_SINCE_LAST_INPUT(Function_262()) * 100000.0f));
	NET_GET_MAC_ADDRESS32(&iVar2);
	RAND_SET_SEED(bVar0 ^ bVar1 ^ iVar2);
	return;
}

int Function_262() //Position: 0x63E8 / 25576
{
	bool bVar0;
	
	bVar0 = Function_118();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

var Function_263(bool bParam0) //Position: 0x6402 / 25602
{
	bool bVar0;
	
	bVar0 = Function_3();
	return CREATE_OBJECTSET_IN_LAYOUT(bParam0, bVar0, 3, 1);
}

bool Function_264(bool bParam0) //Position: 0x6416 / 25622
{
	return Function_107(Global_79336, bParam0);
}

void Function_265() //Position: 0x6425 / 25637
{
	Function_270();
	if (Function_269(2) && (!Function_269(8) || Function_269(4)))
	{
		if (Function_266(Function_269(1)))
		{
			Function_62(2);
		}
	}
	return;
}

bool Function_266(bool bParam0) //Position: 0x644F / 25679
{
	if (!UI_ISACTIVE("SaveGame_DoNotInterruptMe"))
	{
		NET_LOG(true, "SaveLoad", "Multiplayer Save Called", 0, 0, false, 0);
		if (bParam0)
		{
			Function_267();
		}
		Global_34165.f_44 = 1;
		if (Function_269(4))
		{
			Function_62(4);
			UI_SEND_EVENT("net.HardSaveRequested");
		}
		SAVE_SOFT_SAVE(2);
		SAVE_MANAGER_CREATE_SAVE_DISPLAY_NAME("RDR_MP_Save");
		SAVE_MANAGER_HARD_SAVE(SS_GET_STRING(3, 5));
		return 1;
	}
	return 0;
}

void Function_267() //Position: 0x64F9 / 25849
{
	struct<5> Var0;
	
	if (Function_16())
	{
		Global_34165 = { StackVal, StackVal, Global_76888[03] };
		Global_34165.f_12 = StackVal;
	}
	else
	{
		GET_POSITION(GET_PLAYER_ACTOR(0), &Var0);
		Var0.f_4 = (StackVal + 1.0f);
		FIND_GROUND_INTERSECTION(&Var0, 100.0f, &Global_34165, &uVar3);
		Global_34165.f_12 = GET_HEADING(GET_PLAYER_ACTOR(0));
	}
	Global_34165.f_28 = 0;
	Global_34165.f_36 = 0;
	Global_34165.f_40 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_24 = Global_29005;
	if (Function_268(Global_29005))
	{
	}
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_88793 = 1;
	return;
}

bool Function_268(int iParam0) //Position: 0x658C / 25996
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

bool Function_269(int iParam0) //Position: 0x65A2 / 26018
{
	return Function_107(Global_79338, iParam0);
}

void Function_270() //Position: 0x65B1 / 26033
{
	if (!Function_117(&Global_79298))
	{
		Function_62(8);
		return;
	}
	if (Function_109(&Global_79298, 5.0f) || !Function_269(8))
	{
		Function_112(&Global_79298);
		Function_62(8);
	}
	return;
}

void Function_271() //Position: 0x65E6 / 26086
{
	if ((Global_56688[776].f_292 || Global_56688[876].f_292) || Global_56688[976].f_292)
	{
		if (Function_272())
		{
			Global_56612.f_296 = 1;
			Global_56688[776].f_296 = 1;
			Global_56688[876].f_296 = 1;
			Global_56688[976].f_296 = 1;
		}
		else if (!Function_272() && Global_56612.f_296)
		{
			Global_56612.f_296 = 0;
			Global_56688[776].f_296 = 0;
			Global_56688[876].f_296 = 0;
			Global_56688[976].f_296 = 0;
			Global_56612.f_300 = 1;
			Global_56688[776].f_300 = 1;
			Global_56688[876].f_300 = 1;
			Global_56688[976].f_300 = 1;
		}
	}
	return;
}

bool Function_272() //Position: 0x669A / 26266
{
	return Function_273(16384);
}

int Function_273(bool bParam0) //Position: 0x66A6 / 26278
{
	return Function_94(Global_76905.f_132, bParam0);
}

void Function_274() //Position: 0x66B7 / 26295
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	bVar0 = Function_3();
	bVar4 = CREATE_OBJECT_ITERATOR(bVar0);
	if (!IS_ITERATOR_VALID(bVar4))
	{
	}
	else
	{
		bVar5 = CREATE_OBJECT_ITERATOR(bVar0);
		if (!IS_ITERATOR_VALID(bVar5))
		{
		}
		else
		{
			ITERATE_ON_OBJECT_TYPE(bVar4, 2);
			ITERATE_IN_LAYOUT(bVar4, bVar0);
			if (GET_NUM_ITERATOR_MATCHES(bVar4) == 0)
			{
				Function_44();
				return;
			}
			ITERATE_ON_OBJECT_TYPE(bVar5, 3);
			ITERATE_IN_LAYOUT(bVar5, bVar0);
			bVar1 = START_OBJECT_ITERATOR(bVar5);
			bVar2 = "";
			bVar3 = false;
			while (IS_OBJECT_VALID(bVar1))
			{
				bVar3 = false;
				bVar2 = START_OBJECT_ITERATOR(bVar4);
				while (IS_OBJECT_VALID(bVar2) && !bVar3)
				{
					bVar3 = IS_OBJECT_IN_OBJECTSET(bVar1, GET_OBJECTSET_FROM_OBJECT(bVar2));
					bVar2 = OBJECT_ITERATOR_NEXT(bVar4);
				}
				if (!bVar3)
				{
					DESTROY_OBJECT(bVar1);
				}
				bVar1 = OBJECT_ITERATOR_NEXT(bVar5);
			}
		}
	}
	if (IS_ITERATOR_VALID(bVar5))
	{
		DESTROY_ITERATOR(bVar5);
	}
	if (IS_ITERATOR_VALID(bVar4))
	{
		DESTROY_ITERATOR(bVar4);
	}
	return;
}

void Function_275(int iParam0) //Position: 0x6780 / 26496
{
	Function_64(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		if (DECOR_CHECK_EXIST(Global_34573, "DISABLE_HORSE_WHISTLE"))
		{
			DECOR_REMOVE(Global_34573, "DISABLE_HORSE_WHISTLE");
		}
	}
	return;
}

bool Function_276() //Position: 0x67D9 / 26585
{
	return (NET_IS_CONNECTED_FOR_PLAY() && NET_IS_MANAGER_INITIALIZED());
}

void Function_277() //Position: 0x67E6 / 26598
{
	Function_318();
	Function_288();
	Function_278();
	return;
}

void Function_278() //Position: 0x67F5 / 26613
{
	Function_287(187, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_287(188, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_287(189, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_287(190, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_287(191, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_287(192, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_287(193, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_287(194, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_287(195, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_287(196, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_287(197, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_287(198, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_287(199, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_287(200, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_287(201, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_287(202, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_287(203, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_287(204, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_287(205, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_287(206, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_287(207, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_287(208, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_287(209, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_287(210, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_287(211, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_287(212, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_287(213, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_287(214, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_287(215, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_287(216, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_287(217, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_287(218, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_287(219, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_287(220, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_287(221, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_287(222, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_287(223, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_287(224, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_287(225, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_287(226, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_279(10, &Global_49399, 5, 25, 50);
	Function_279(12, &Global_49399, 5, 25, 50);
	Function_287(0, &Global_50170, 1, TO_FLOAT(50), 5, TO_FLOAT(100), 20, TO_FLOAT(150), 0, 0, 0, 0);
	Function_287(1, &Global_50170, 1, TO_FLOAT(50), 5, TO_FLOAT(100), 20, TO_FLOAT(150), 0, 0, 0, 0);
	Function_287(2, &Global_50170, 1, TO_FLOAT(50), 5, TO_FLOAT(100), 20, TO_FLOAT(150), 0, 0, 0, 0);
	Function_287(3, &Global_50170, 1, TO_FLOAT(50), 5, TO_FLOAT(100), 20, TO_FLOAT(150), 0, 0, 0, 0);
	Function_287(4, &Global_50170, 1, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_287(5, &Global_50170, 3, TO_FLOAT(50), 5, TO_FLOAT(100), 7, TO_FLOAT(150), 0, 0, 0, 0);
	Function_287(6, &Global_50170, 5, TO_FLOAT(50), 10, TO_FLOAT(100), 15, TO_FLOAT(150), 0, 0, 0, 0);
	Function_287(7, &Global_50170, 3, TO_FLOAT(50), 5, TO_FLOAT(100), 0, 0, 0, 0, 0, 0);
	Function_287(8, &Global_50170, 3, TO_FLOAT(50), 5, TO_FLOAT(100), 0, 0, 0, 0, 0, 0);
	Function_287(9, &Global_50170, 3, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_287(10, &Global_50170, 10, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_287(11, &Global_50170, 20, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_287(12, &Global_50170, 5, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_287(13, &Global_50170, 5, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_287(14, &Global_50170, 5, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_287(15, &Global_50170, 1, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_287(16, &Global_50170, 1, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_287(17, &Global_50170, 1, TO_FLOAT(50), 5, TO_FLOAT(100), 50, TO_FLOAT(150), 0, 0, 0, 0);
	Function_287(19, &Global_50170, 1, TO_FLOAT(50), 3, TO_FLOAT(100), 0, 0, 0, 0, 0, 0);
	Function_287(21, &Global_50170, 1, TO_FLOAT(50), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_287(20, &Global_50170, 5, TO_FLOAT(50), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_287(22, &Global_50170, 1, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_287(25, &Global_50170, 25, TO_FLOAT(50), 100, TO_FLOAT(100), 0, 0, 0, 0, 0, 0);
	Function_287(26, &Global_50170, 1, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_287(27, &Global_50170, 10, TO_FLOAT(50), 50, TO_FLOAT(100), 100, TO_FLOAT(150), 0, 0, 0, 0);
	Function_287(31, &Global_50170, 1, TO_FLOAT(50), 15, TO_FLOAT(100), 50, TO_FLOAT(150), 0, 0, 0, 0);
	Function_287(32, &Global_50170, 1, TO_FLOAT(50), 5, TO_FLOAT(100), 20, TO_FLOAT(150), 0, 0, 0, 0);
	Function_287(33, &Global_50170, 10, TO_FLOAT(50), 25, TO_FLOAT(100), 50, TO_FLOAT(150), 75, TO_FLOAT(200), 100, TO_FLOAT(250));
	Function_287(34, &Global_50170, 5, TO_FLOAT(50), 25, TO_FLOAT(100), 75, TO_FLOAT(150), 0, 0, 0, 0);
	Function_287(35, &Global_50170, 1, TO_FLOAT(50), 2, TO_FLOAT(100), 3, TO_FLOAT(150), 0, 0, 0, 0);
	Function_287(36, &Global_50170, 1, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_287(37, &Global_50170, 1, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_287(38, &Global_50170, 1, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_287(39, &Global_50170, 1, TO_FLOAT(50), 15, TO_FLOAT(100), 50, TO_FLOAT(150), 0, 0, 0, 0);
	Function_287(40, &Global_50170, 1, TO_FLOAT(50), 5, TO_FLOAT(100), 20, TO_FLOAT(150), 0, 0, 0, 0);
	Function_287(41, &Global_50170, 10, TO_FLOAT(50), 25, TO_FLOAT(100), 50, TO_FLOAT(150), 75, TO_FLOAT(200), 100, TO_FLOAT(250));
	Function_287(42, &Global_50170, 5, TO_FLOAT(50), 25, TO_FLOAT(100), 75, TO_FLOAT(150), 0, 0, 0, 0);
	Function_287(43, &Global_50170, 3, TO_FLOAT(50), 5, TO_FLOAT(100), 7, TO_FLOAT(150), 0, 0, 0, 0);
	Function_287(44, &Global_50170, 1, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_287(45, &Global_50170, 1, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_287(46, &Global_50170, 1, TO_FLOAT(50), 15, TO_FLOAT(100), 50, TO_FLOAT(150), 0, 0, 0, 0);
	Function_287(47, &Global_50170, 1, TO_FLOAT(50), 5, TO_FLOAT(100), 20, TO_FLOAT(150), 0, 0, 0, 0);
	Function_287(48, &Global_50170, 10, TO_FLOAT(50), 25, TO_FLOAT(100), 50, TO_FLOAT(150), 75, TO_FLOAT(200), 100, TO_FLOAT(250));
	Function_287(49, &Global_50170, 10, TO_FLOAT(50), 50, TO_FLOAT(100), 100, TO_FLOAT(150), 0, 0, 0, 0);
	Function_287(50, &Global_50170, 10, TO_FLOAT(50), 50, TO_FLOAT(100), 100, TO_FLOAT(150), 0, 0, 0, 0);
	Function_287(51, &Global_50170, 2, TO_FLOAT(50), 3, TO_FLOAT(100), 5, TO_FLOAT(150), 0, 0, 0, 0);
	Function_287(52, &Global_50170, 1, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_287(54, &Global_50170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Function_287(55, &Global_50170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Function_287(56, &Global_50170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Function_287(57, &Global_50170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return;
}

void Function_279(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x726D / 29293
{
	switch (StackVal)
	{
		case 0x00000000:
			uParam1[iParam022]->f_12 = Function_286(1.0f, (TO_FLOAT(uParam1[iParam022]->f_28) / TO_FLOAT(bParam2)));
			break;
		
		case 0x00000001:
			uParam1[iParam022]->f_12 = Function_286(1.0f, (TO_FLOAT(uParam1[iParam022]->f_28) / TO_FLOAT(bParam3)));
			break;
		
		case 0x00000002:
			uParam1[iParam022]->f_12 = Function_286(1.0f, (TO_FLOAT(uParam1[iParam022]->f_28) / TO_FLOAT(bParam4)));
			break;
		
		case 0x0000000A:
			Function_283(iParam0);
			return;
			break;
	}
	Function_280(iParam0, uParam1[iParam022]->f_12, 0, 4294967295, 4294967295, 4294967295, 0);
}

void Function_280(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6) //Position: 0x7317 / 29463
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	char* cVar20[24];
	char* cVar26[24];
	char* cVar32[24];
	char* cVar38[24];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_282(iParam0), fParam1, true, 0);
	if (bParam2)
	{
		if (((iParam0 != 12 || iParam0 != 13) || iParam0 != 10) || iParam0 != 11)
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_281(iParam0) };
			stradd(&cVar0, "_info", 24);
			memcpy(&cVar6, StackVal, *(&Global_49399[iParam022] + 16), 6);
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
			APPEND_JOURNAL_ENTRY_DETAIL(Function_282(iParam0), &cVar0, 2, 2, false);
			Function_55(Function_282(iParam0), 0);
		}
		else
		{
			cVar20 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_281(iParam0) };
			if (Function_16() || Global_34165.f_44)
			{
				stradd(&cVar20, "_info_mp", 24);
			}
			else
			{
				stradd(&cVar20, "_info", 24);
			}
			if (bParam3 >= 4294967295)
			{
				strcpy(&cVar26, "AM_num", 24);
				stradd(&cVar26, INT_TO_STRING((1 + iParam6)), 24);
				UI_SET_STRING(&cVar26, INT_TO_STRING(bParam3));
			}
			if (bParam4 >= 4294967295)
			{
				strcpy(&cVar32, "AM_num", 24);
				stradd(&cVar32, INT_TO_STRING((2 + iParam6)), 24);
				UI_SET_STRING(&cVar32, INT_TO_STRING(bParam4));
			}
			if (bParam5 >= 4294967295)
			{
				strcpy(&cVar38, "AM_num", 24);
				stradd(&cVar38, INT_TO_STRING((3 + iParam6)), 24);
				UI_SET_STRING(&cVar38, INT_TO_STRING(bParam5));
			}
			APPEND_JOURNAL_ENTRY_DETAIL(Function_282(iParam0), &cVar20, 2, 2, true);
			Function_55(Function_282(iParam0), 0);
		}
	}
}

struct<24> Function_281(int iParam0) //Position: 0x74A2 / 29858
{
	char* cVar0[24];
	
	if (Function_16() || Global_34165.f_44)
	{
		memcpy(&cVar0, StackVal, *(&Global_49399[iParam022] + 16), 6);
		stradd(&cVar0, "_", 24);
		stradd(&cVar0, INT_TO_STRING(StackVal), 24);
		return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	memcpy(&cVar0, StackVal, *(&Global_49310[iParam022] + 16), 6);
	stradd(&cVar0, "_", 24);
	stradd(&cVar0, INT_TO_STRING(StackVal), 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_282(int iParam0) //Position: 0x7514 / 29972
{
	if (Function_16() || Global_34165.f_44)
	{
		return Global_49399[iParam022].f_24;
	}
	return Global_49310[iParam022].f_24;
}

void Function_283(int iParam0) //Position: 0x753C / 30012
{
	struct<6> Var0;
	struct<6> Var6;
	
	CLEAR_JOURNAL_ENTRY(Function_282(iParam0));
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_285(iParam0) };
	if (Function_16() || Global_34165.f_44)
	{
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_281(iParam0) };
	}
	else
	{
		memcpy(&Var6, StackVal, *(&Global_49310[iParam022] + 16), 6);
	}
	UI_SET_STRING(&Var0, UI_GET_STRING(&Var6));
	Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_284(iParam0) };
	APPEND_JOURNAL_ENTRY_DETAIL(Function_282(iParam0), &Var6, 0, 2, false);
	PREPEND_JOURNAL_ENTRY(Function_282(iParam0), true);
	SET_JOURNAL_ENTRY_PROGRESS(Function_282(iParam0), 1.0f, false, 0);
	return;
}

struct<24> Function_284(int iParam0) //Position: 0x75AF / 30127
{
	char* cVar0[24];
	
	cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_281(iParam0) };
	if (Global_34165.f_44 || Function_16())
	{
		stradd(&cVar0, "_mp_des", 24);
		if (!IS_STRING_VALID(UI_GET_STRING(&cVar0)))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_281(iParam0) };
			stradd(&cVar0, "_des", 24);
		}
	}
	else
	{
		stradd(&cVar0, "_des", 24);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_285(int iParam0) //Position: 0x760C / 30220
{
	char* cVar0[24];
	
	if (Function_16() || Global_34165.f_44)
	{
		memcpy(&cVar0, StackVal, *(&Global_49399[iParam022] + 16), 6);
		stradd(&cVar0, "_DYNAMIC_TITLE", 24);
		return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	memcpy(&cVar0, StackVal, *(&Global_49310[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_286(int iParam0, bool bParam1) //Position: 0x7678 / 30328
{
	if (iParam0 > bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_287(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, bool bParam9, int iParam10, bool bParam11) //Position: 0x768B / 30347
{
	bool bVar0;
	bool bVar1;
	
	switch (StackVal)
	{
		case 0x00000000:
			bVar0 = iParam2;
			bVar1 = bParam3;
			break;
		
		case 0x00000001:
			bVar0 = iParam4;
			bVar1 = bParam5;
			break;
		
		case 0x00000002:
			bVar0 = iParam6;
			bVar1 = bParam7;
			break;
		
		case 0x00000003:
			bVar0 = iParam8;
			bVar1 = bParam9;
			break;
		
		case 0x00000004:
			bVar0 = iParam10;
			bVar1 = bParam11;
			break;
		
		case 0x0000000A:
			Function_84(iParam0, 0);
			return;
			break;
		
		default:
			LOG_ERROR("we should have a goal at this point");
			bVar0 = iParam2;
			bVar1 = bParam3;
			break;
	}
	if (Function_94(uParam1[iParam022]->f_32, 4) || Function_94(uParam1[iParam022]->f_32, 2))
	{
		Function_140(iParam0, bVar0, CEIL(bVar1), 0);
		if (uParam1[iParam022]->f_28 >= 0)
		{
			Function_54(iParam0, uParam1[iParam022]->f_12, 1, uParam1[iParam022]->f_28, 4294967295, 4294967295);
		}
	}
}

void Function_288() //Position: 0x7788 / 30600
{
	Function_313(0, &Global_50170, "PVDM_1", 1, 6, Function_317());
	Function_313(1, &Global_50170, "PVDM_2", 1, 6, Function_317());
	Function_313(2, &Global_50170, "PVTD_1", 1, 6, Function_312());
	Function_313(3, &Global_50170, "PVTD_2", 1, 6, Function_312());
	Function_313(4, &Global_50170, "PVTD_3", 1, 6, Function_312());
	Function_313(5, &Global_50170, "PVKS_1", 1, 6, Function_311());
	Function_313(6, &Global_50170, "PVKS_2", 1, 6, Function_311());
	Function_313(7, &Global_50170, "PVKS2_1", 1, 6, Function_310());
	Function_313(8, &Global_50170, "PVKS2_2", 1, 6, Function_310());
	Function_313(9, &Global_50170, "PVKS2_3", 1, 6, Function_310());
	Function_313(10, &Global_50170, "PVKS2_4", 1, 6, Function_310());
	Function_313(11, &Global_50170, "PVKS2_5", 1, 6, Function_310());
	Function_313(12, &Global_50170, "PVKD_1", 1, 6, Function_309());
	Function_313(13, &Global_50170, "PVKD_2", 1, 6, Function_309());
	Function_313(14, &Global_50170, "PVKD_3", 1, 6, Function_309());
	Function_313(15, &Global_50170, "PVUS1_1", 1, 6, Function_308());
	Function_313(16, &Global_50170, "PVUS1_2", 1, 6, Function_308());
	Function_313(17, &Global_50170, "PVUS1_3", 1, 6, Function_308());
	Function_313(18, &Global_50170, "PVUS2", 1, 6, Function_308());
	Function_313(19, &Global_50170, "PVRV_1", 1, 6, Function_307());
	Function_313(20, &Global_50170, "PVRV_2", 1, 6, Function_307());
	Function_313(21, &Global_50170, "PVRV_3", 1, 6, Function_307());
	Function_313(22, &Global_50170, "PVTS1_1", 1, 6, Function_306());
	Function_313(25, &Global_50170, "PVTS1_4", 1, 6, Function_306());
	Function_313(26, &Global_50170, "PVTS1_5", 1, 6, Function_306());
	Function_313(27, &Global_50170, "PVTS2_1", 1, 6, Function_306());
	Function_313(31, &Global_50170, "PVHYD_1", 1, 6, Function_305());
	Function_313(32, &Global_50170, "PVHYW_1", 1, 6, Function_305());
	Function_313(33, &Global_50170, "PVHYG_1", 1, 6, Function_305());
	Function_313(34, &Global_50170, "PVHYS_1", 1, 6, Function_305());
	Function_313(35, &Global_50170, "PVHYO_1", 1, 6, Function_305());
	Function_313(36, &Global_50170, "PVHYM_1", 1, 6, Function_305());
	Function_313(37, &Global_50170, "PVHYC_1", 1, 6, Function_305());
	Function_313(38, &Global_50170, "PVHYK_1", 1, 6, Function_305());
	Function_313(39, &Global_50170, "PVGTD_1", 1, 6, Function_304());
	Function_313(40, &Global_50170, "PVGTW_1", 1, 6, Function_304());
	Function_313(41, &Global_50170, "PVGTG_1", 1, 6, Function_304());
	Function_313(42, &Global_50170, "PVGTS_1", 1, 6, Function_303());
	Function_313(43, &Global_50170, "PVGTO_1", 1, 6, Function_303());
	Function_313(44, &Global_50170, "PVGTM_1", 1, 6, Function_303());
	Function_313(45, &Global_50170, "PVGTC_1", 1, 6, Function_303());
	Function_313(46, &Global_50170, "PVFFD_1", 1, 6, Function_302());
	Function_313(47, &Global_50170, "PVFFW_1", 1, 6, Function_302());
	Function_313(48, &Global_50170, "PVFFG_1", 1, 6, Function_302());
	Function_313(49, &Global_50170, "PVHWC", 1, 6, Function_301());
	Function_313(50, &Global_50170, "PVHWG", 1, 6, Function_301());
	Function_313(51, &Global_50170, "PVHMC", 1, 6, Function_301());
	Function_313(52, &Global_50170, "PVHCC", 1, 6, Function_301());
	Function_313(54, &Global_50170, "OC_SU", 1, 3, Function_300());
	Function_313(55, &Global_50170, "OC_W2_1", 1, 3, Function_299());
	Function_313(56, &Global_50170, "OC_W2_2", 1, 3, Function_299());
	Function_313(57, &Global_50170, "OC_W2_3", 1, 3, Function_299());
	Function_313(58, &Global_50170, "CA", 1, 7, Function_298());
	Function_313(59, &Global_50170, "CAKD", 1, 7, Function_298());
	Function_313(60, &Global_50170, "CAND", 1, 7, Function_298());
	Function_313(62, &Global_50170, "CASL", 1, 7, Function_298());
	Function_313(61, &Global_50170, "CAMK", 1, 7, Function_298());
	Function_313(63, &Global_50170, "CAMN", 1, 7, Function_298());
	Function_313(64, &Global_50170, "CAGN", 1, 7, Function_298());
	Function_313(65, &Global_50170, "COR1", 1, 7, Function_298());
	Function_313(66, &Global_50170, "COR10", 1, 7, Function_298());
	Function_313(67, &Global_50170, "COR50", 1, 7, Function_298());
	Function_313(68, &Global_50170, "COR250", 1, 7, Function_298());
	Function_313(69, &Global_50170, "COD1", 1, 7, Function_298());
	Function_313(70, &Global_50170, "COD10", 1, 7, Function_298());
	Function_313(71, &Global_50170, "COD50", 1, 7, Function_298());
	Function_313(72, &Global_50170, "COD250", 1, 7, Function_298());
	Function_313(73, &Global_50170, "COA1", 1, 7, Function_298());
	Function_313(74, &Global_50170, "COA10", 1, 7, Function_298());
	Function_313(75, &Global_50170, "COA50", 1, 7, Function_298());
	Function_313(76, &Global_50170, "COA250", 1, 7, Function_298());
	Function_313(77, &Global_50170, "CSPKTM1", 1, 7, Function_297());
	Function_313(78, &Global_50170, "CSPKTM2", 1, 7, Function_297());
	Function_313(79, &Global_50170, "CSPKTM3", 1, 7, Function_297());
	Function_313(80, &Global_50170, "CSPKKS1", 1, 7, Function_297());
	Function_313(81, &Global_50170, "CSPKKS2", 1, 7, Function_297());
	Function_313(82, &Global_50170, "CSPKKS3", 1, 7, Function_297());
	Function_313(83, &Global_50170, "CSPKKL1", 1, 7, Function_297());
	Function_313(84, &Global_50170, "CSPKKL2", 1, 7, Function_297());
	Function_313(85, &Global_50170, "CSPKKL3", 1, 7, Function_297());
	Function_313(86, &Global_50170, "CSPKND", 1, 7, Function_297());
	Function_313(87, &Global_50170, "CSPKNN", 1, 7, Function_297());
	Function_313(88, &Global_50170, "CSPKCW1", 1, 7, Function_297());
	Function_313(89, &Global_50170, "CSPKCW2", 1, 7, Function_297());
	Function_313(90, &Global_50170, "CSPKCW3", 1, 7, Function_297());
	Function_313(91, &Global_50170, "CSFMTM1", 1, 7, Function_296());
	Function_313(92, &Global_50170, "CSFMTM2", 1, 7, Function_296());
	Function_313(93, &Global_50170, "CSFMTM3", 1, 7, Function_296());
	Function_313(94, &Global_50170, "CSFMKS1", 1, 7, Function_296());
	Function_313(95, &Global_50170, "CSFMKS2", 1, 7, Function_296());
	Function_313(96, &Global_50170, "CSFMKS3", 1, 7, Function_296());
	Function_313(97, &Global_50170, "CSFMKL1", 1, 7, Function_296());
	Function_313(98, &Global_50170, "CSFMKL2", 1, 7, Function_296());
	Function_313(99, &Global_50170, "CSFMKL3", 1, 7, Function_296());
	Function_313(100, &Global_50170, "CSFMND", 1, 7, Function_296());
	Function_313(101, &Global_50170, "CSFMNN", 1, 7, Function_296());
	Function_313(102, &Global_50170, "CSFMGT1", 1, 7, Function_296());
	Function_313(103, &Global_50170, "CSFMGT2", 1, 7, Function_296());
	Function_313(104, &Global_50170, "CSFMGT3", 1, 7, Function_296());
	Function_313(105, &Global_50170, "CSTSTM1", 1, 7, Function_295());
	Function_313(106, &Global_50170, "CSTSTM2", 1, 7, Function_295());
	Function_313(107, &Global_50170, "CSTSTM3", 1, 7, Function_295());
	Function_313(108, &Global_50170, "CSTSKS1", 1, 7, Function_295());
	Function_313(109, &Global_50170, "CSTSKS2", 1, 7, Function_295());
	Function_313(110, &Global_50170, "CSTSKS3", 1, 7, Function_295());
	Function_313(111, &Global_50170, "CSTSKL1", 1, 7, Function_295());
	Function_313(112, &Global_50170, "CSTSKL2", 1, 7, Function_295());
	Function_313(113, &Global_50170, "CSTSKL3", 1, 7, Function_295());
	Function_313(114, &Global_50170, "CSTSND", 1, 7, Function_295());
	Function_313(115, &Global_50170, "CSTSNN", 1, 7, Function_295());
	Function_313(116, &Global_50170, "CSTSGT1", 1, 7, Function_295());
	Function_313(117, &Global_50170, "CSTSGT2", 1, 7, Function_295());
	Function_313(118, &Global_50170, "CSTSGT3", 1, 7, Function_295());
	Function_313(119, &Global_50170, "CSGPTM1", 1, 7, Function_294());
	Function_313(120, &Global_50170, "CSGPTM2", 1, 7, Function_294());
	Function_313(121, &Global_50170, "CSGPTM3", 1, 7, Function_294());
	Function_313(122, &Global_50170, "CSGPKS1", 1, 7, Function_294());
	Function_313(123, &Global_50170, "CSGPKS2", 1, 7, Function_294());
	Function_313(124, &Global_50170, "CSGPKS3", 1, 7, Function_294());
	Function_313(125, &Global_50170, "CSGPKL1", 1, 7, Function_294());
	Function_313(126, &Global_50170, "CSGPKL2", 1, 7, Function_294());
	Function_313(127, &Global_50170, "CSGPKL3", 1, 7, Function_294());
	Function_313(128, &Global_50170, "CSGPND", 1, 7, Function_294());
	Function_313(129, &Global_50170, "CSGPNN", 1, 7, Function_294());
	Function_313(130, &Global_50170, "CSGPBG1", 1, 7, Function_294());
	Function_313(131, &Global_50170, "CSGPBG2", 1, 7, Function_294());
	Function_313(132, &Global_50170, "CSGPBG3", 1, 7, Function_294());
	Function_313(133, &Global_50170, "CSTMTM1", 1, 7, Function_293());
	Function_313(134, &Global_50170, "CSTMTM2", 1, 7, Function_293());
	Function_313(135, &Global_50170, "CSTMTM3", 1, 7, Function_293());
	Function_313(136, &Global_50170, "CSTMKS1", 1, 7, Function_293());
	Function_313(137, &Global_50170, "CSTMKS2", 1, 7, Function_293());
	Function_313(138, &Global_50170, "CSTMKS3", 1, 7, Function_293());
	Function_313(139, &Global_50170, "CSTMKL1", 1, 7, Function_293());
	Function_313(140, &Global_50170, "CSTMKL2", 1, 7, Function_293());
	Function_313(141, &Global_50170, "CSTMKL3", 1, 7, Function_293());
	Function_313(142, &Global_50170, "CSTMND", 1, 7, Function_293());
	Function_313(143, &Global_50170, "CSTMNN", 1, 7, Function_293());
	Function_313(144, &Global_50170, "CSTMCK1", 1, 7, Function_293());
	Function_313(145, &Global_50170, "CSTMCK2", 1, 7, Function_293());
	Function_313(146, &Global_50170, "CSTMCK3", 1, 7, Function_293());
	Function_313(147, &Global_50170, "CSNSTM1", 1, 7, Function_292());
	Function_313(148, &Global_50170, "CSNSTM2", 1, 7, Function_292());
	Function_313(149, &Global_50170, "CSNSTM3", 1, 7, Function_292());
	Function_313(150, &Global_50170, "CSNSKS1", 1, 7, Function_292());
	Function_313(151, &Global_50170, "CSNSKS2", 1, 7, Function_292());
	Function_313(152, &Global_50170, "CSNSKS3", 1, 7, Function_292());
	Function_313(153, &Global_50170, "CSNSKL1", 1, 7, Function_292());
	Function_313(154, &Global_50170, "CSNSKL2", 1, 7, Function_292());
	Function_313(155, &Global_50170, "CSNSKL3", 1, 7, Function_292());
	Function_313(156, &Global_50170, "CSNSND", 1, 7, Function_292());
	Function_313(157, &Global_50170, "CSNSNN", 1, 7, Function_292());
	Function_313(158, &Global_50170, "CSNSHT1", 1, 7, Function_292());
	Function_313(159, &Global_50170, "CSNSHT2", 1, 7, Function_292());
	Function_313(160, &Global_50170, "CSNSHT3", 1, 7, Function_292());
	Function_313(161, &Global_50170, "CAA", 1, 7, Function_291());
	Function_313(162, &Global_50170, "CAAKD", 1, 7, Function_291());
	Function_313(163, &Global_50170, "CAAND", 1, 7, Function_291());
	Function_313(164, &Global_50170, "CAAMK", 1, 7, Function_291());
	Function_313(165, &Global_50170, "CAASL", 1, 7, Function_291());
	Function_313(166, &Global_50170, "CAAMN", 1, 7, Function_291());
	Function_313(167, &Global_50170, "CAAGN", 1, 7, Function_291());
	Function_313(168, &Global_50170, "CAACU", 1, 7, Function_291());
	Function_313(169, &Global_50170, "CAPKTM1", 1, 7, Function_291());
	Function_313(170, &Global_50170, "CAPKTM2", 1, 7, Function_291());
	Function_313(171, &Global_50170, "CAPKTM3", 1, 7, Function_291());
	Function_313(172, &Global_50170, "CAFMTM1", 1, 7, Function_291());
	Function_313(173, &Global_50170, "CAFMTM2", 1, 7, Function_291());
	Function_313(174, &Global_50170, "CAFMTM3", 1, 7, Function_291());
	Function_313(175, &Global_50170, "CATSTM1", 1, 7, Function_291());
	Function_313(176, &Global_50170, "CATSTM2", 1, 7, Function_291());
	Function_313(177, &Global_50170, "CATSTM3", 1, 7, Function_291());
	Function_313(178, &Global_50170, "CAGPTM1", 1, 7, Function_291());
	Function_313(179, &Global_50170, "CAGPTM2", 1, 7, Function_291());
	Function_313(180, &Global_50170, "CAGPTM3", 1, 7, Function_291());
	Function_313(181, &Global_50170, "CATMTM1", 1, 7, Function_291());
	Function_313(182, &Global_50170, "CATMTM2", 1, 7, Function_291());
	Function_313(183, &Global_50170, "CATMTM3", 1, 7, Function_291());
	Function_313(184, &Global_50170, "CANSTM1", 1, 7, Function_291());
	Function_313(185, &Global_50170, "CANSTM2", 1, 7, Function_291());
	Function_313(186, &Global_50170, "CANSTM3", 1, 7, Function_291());
	Function_313(187, &Global_50170, "WP_REP", 1, 5, Function_290());
	Function_313(188, &Global_50170, "WP_VOL", 1, 5, Function_290());
	Function_313(189, &Global_50170, "WP_WIN", 1, 5, Function_290());
	Function_313(190, &Global_50170, "WP_SCH", 1, 5, Function_290());
	Function_313(191, &Global_50170, "WP_PMP", 1, 5, Function_290());
	Function_313(192, &Global_50170, "WP_SPR", 1, 5, Function_290());
	Function_313(193, &Global_50170, "WP_DBL", 1, 5, Function_290());
	Function_313(194, &Global_50170, "WP_SAW", 1, 5, Function_290());
	Function_313(195, &Global_50170, "WP_ROL", 1, 5, Function_290());
	Function_313(196, &Global_50170, "WP_SEMP", 1, 5, Function_290());
	Function_313(197, &Global_50170, "WP_SEMS", 1, 5, Function_290());
	Function_313(198, &Global_50170, "WP_CAR", 1, 5, Function_290());
	Function_313(199, &Global_50170, "WP_BUF", 1, 5, Function_290());
	Function_313(200, &Global_50170, "WP_HEN", 1, 5, Function_290());
	Function_313(201, &Global_50170, "WP_HPW", 1, 5, Function_290());
	Function_313(202, &Global_50170, "WP_DBB", 1, 5, Function_290());
	Function_313(203, &Global_50170, "WP_BLT", 1, 5, Function_290());
	Function_313(204, &Global_50170, "WP_EVN", 1, 5, Function_290());
	Function_313(205, &Global_50170, "WP_LMT", 1, 5, Function_290());
	Function_313(206, &Global_50170, "WP_MSR", 1, 5, Function_290());
	Function_313(207, &Global_50170, "WP_REP2", 1, 5, Function_289());
	Function_313(208, &Global_50170, "WP_VOL2", 1, 5, Function_289());
	Function_313(209, &Global_50170, "WP_WIN2", 1, 5, Function_289());
	Function_313(210, &Global_50170, "WP_SCH2", 1, 5, Function_289());
	Function_313(211, &Global_50170, "WP_PMP2", 1, 5, Function_289());
	Function_313(212, &Global_50170, "WP_SPR2", 1, 5, Function_289());
	Function_313(213, &Global_50170, "WP_DBL2", 1, 5, Function_289());
	Function_313(214, &Global_50170, "WP_SAW2", 1, 5, Function_289());
	Function_313(215, &Global_50170, "WP_ROL2", 1, 5, Function_289());
	Function_313(216, &Global_50170, "WP_SAP2", 1, 5, Function_289());
	Function_313(217, &Global_50170, "WP_SAS2", 1, 5, Function_289());
	Function_313(218, &Global_50170, "WP_CAR2", 1, 5, Function_289());
	Function_313(219, &Global_50170, "WP_BUF2", 1, 5, Function_289());
	Function_313(220, &Global_50170, "WP_HEN2", 1, 5, Function_289());
	Function_313(221, &Global_50170, "WP_HPW2", 1, 5, Function_289());
	Function_313(222, &Global_50170, "WP_DBB2", 1, 5, Function_289());
	Function_313(223, &Global_50170, "WP_BLT2", 1, 5, Function_289());
	Function_313(224, &Global_50170, "WP_EVN2", 1, 5, Function_289());
	Function_313(225, &Global_50170, "WP_LMT2", 1, 5, Function_289());
	Function_313(226, &Global_50170, "WP_MSR2", 1, 5, Function_289());
	return;
}

bool Function_289() //Position: 0x8AEA / 35562
{
	return "challenge_01lvl2";
}

bool Function_290() //Position: 0x8B03 / 35587
{
	return "challenge_01";
}

bool Function_291() //Position: 0x8B18 / 35608
{
	return "COOP_advanced_icon";
}

bool Function_292() //Position: 0x8B33 / 35635
{
	return "SC_AA_Nosalida_Icon";
}

bool Function_293() //Position: 0x8B4F / 35663
{
	return "SC_AA_TwinRocks_Icon";
}

bool Function_294() //Position: 0x8B6C / 35692
{
	return "SC_AA_Gaptooth_Icon";
}

bool Function_295() //Position: 0x8B88 / 35720
{
	return "SC_AA_Tesoro_Icon";
}

bool Function_296() //Position: 0x8BA2 / 35746
{
	return "SC_AA_Mercer_Icon";
}

bool Function_297() //Position: 0x8BBC / 35772
{
	return "SC_AA_Pikes_Icon";
}

bool Function_298() //Position: 0x8BD5 / 35797
{
	return "nCOOP_icon";
}

bool Function_299() //Position: 0x8BE7 / 35815
{
	return "challenge_04lvl2";
}

bool Function_300() //Position: 0x8C00 / 35840
{
	return "challenge_04";
}

bool Function_301() //Position: 0x8C15 / 35861
{
	return "MP_HeavyWeapons_Icon";
}

bool Function_302() //Position: 0x8C32 / 35890
{
	return "MP_Goldrush_icon";
}

bool Function_303() //Position: 0x8C4B / 35915
{
	return "MP_GrabTheBagII_icon";
}

bool Function_304() //Position: 0x8C68 / 35944
{
	return "MP_GrabTheBag_Icon";
}

bool Function_305() //Position: 0x8C83 / 35971
{
	return "MP_HoldYourOwn_Icon";
}

bool Function_306() //Position: 0x8C9F / 35999
{
	return "MP_TrickShot_Icon";
}

bool Function_307() //Position: 0x8CB9 / 36025
{
	return "MP_Revenge_Icon";
}

bool Function_308() //Position: 0x8CD1 / 36049
{
	return "MP_Unstoppable_Icon";
}

bool Function_309() //Position: 0x8CED / 36077
{
	return "MP_KDR_Icon";
}

bool Function_310() //Position: 0x8D01 / 36097
{
	return "KillStreakII_Icon";
}

bool Function_311() //Position: 0x8D1B / 36123
{
	return "MP_KillStreak_Icon";
}

bool Function_312() //Position: 0x8D36 / 36150
{
	return "MP_TDM_Icon";
}

void Function_313(int iParam0, int iParam1, char* cParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x8D4A / 36170
{
	strcpy(iParam1[iParam022] + 16, cParam2, 8);
	(*iParam1)[iParam022] = iParam0;
	iParam1[iParam022]->f_84 = bParam3;
	if (Global_3364 || Global_83864.f_1276)
	{
		iParam1[iParam022]->f_8 = 0;
		Global_50170[iParam022].f_28 = 0;
	}
	if (bParam3)
	{
		if (!Global_34165.f_44)
		{
			iParam1[iParam022]->f_4 = 1;
			iParam1[iParam022]->f_8 = 0;
			iParam1[iParam022]->f_12 = 0.0f;
			return;
		}
	}
	if (Global_83864.f_1276)
	{
		Function_139(iParam0, 4);
		Function_139(iParam0, 2);
		Function_316(iParam0, 0);
		iParam1[iParam022]->f_12 = 0.0f;
		SET_JOURNAL_ENTRY_PROGRESS(Function_57(iParam0), iParam1[iParam022]->f_12, false, 0);
		REMOVE_JOURNAL_ENTRY(Function_57(iParam0), true);
	}
	if (!IS_STRING_VALID(bParam5))
	{
		bParam5 = Function_315();
	}
	Function_314(iParam0, bParam4, bParam5);
	Function_140(iParam0, 0, 0, 1);
	if (StackVal && StackVal != 2 != 10)
	{
		Function_84(iParam0, 1);
	}
	else
	{
		iParam1[iParam022]->f_4 = 0;
		SET_JOURNAL_ENTRY_PROGRESS(Function_57(iParam0), iParam1[iParam022]->f_12, false, 0);
	}
}

var Function_314(int iParam0, int iParam1, int iParam2) //Position: 0x8E5A / 36442
{
	struct<6> Var0;
	struct<4> Var6;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_86(iParam0) };
	Global_50170[iParam022].f_24 = CREATE_JOURNAL_ENTRY(&Var0, iParam1, false, iParam2);
	Var6 = { StackVal, StackVal, StackVal, Function_56(iParam0) };
	UI_SET_STRING(&Var0, UI_GET_STRING(&Var6));
	return Global_50170[iParam022].f_24;
}

bool Function_315() //Position: 0x8E98 / 36504
{
	return "SC_Travel_Icon";
}

void Function_316(int iParam0, bool bParam1) //Position: 0x8EAF / 36527
{
	REMOVE_JOURNAL_ENTRY(Global_50170[iParam022].f_24, bParam1);
	return;
}

bool Function_317() //Position: 0x8EC3 / 36547
{
	return "MP_DM_Icon";
}

void Function_318() //Position: 0x8ED6 / 36566
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (Global_63041 - 1))
	{
		Function_319(iVar0);
		iVar0++;
	}
	return;
}

void Function_319(int iParam0) //Position: 0x8EFA / 36602
{
	Global_63041[iParam08] = 4294967295;
	Global_63041[iParam08].f_4 = 4294967295;
	strcpy(&Global_63041[iParam08] + 8, "NHIL", 16);
	strcpy(&Global_63041[iParam08] + 24, "NHIL", 8);
	return;
}

void Function_320() //Position: 0x8F36 / 36662
{
	Function_105(2, 9);
	Function_105(2, 6);
	Function_105(2, 7);
	Function_105(2, 8);
	Function_105(9, 2);
	Function_105(9, 4);
	Function_105(9, 5);
	Function_105(9, 7);
	Function_105(9, 8);
	Function_105(4, 9);
	Function_105(4, 5);
	Function_105(4, 6);
	Function_105(4, 7);
	Function_105(4, 8);
	Function_105(5, 9);
	Function_105(5, 4);
	Function_105(5, 7);
	Function_105(5, 8);
	Function_105(6, 2);
	Function_105(6, 4);
	Function_105(6, 8);
	Function_105(7, 2);
	Function_105(7, 9);
	Function_105(7, 4);
	Function_105(7, 5);
	Function_105(7, 8);
	Function_105(8, 2);
	Function_105(8, 9);
	Function_105(8, 4);
	Function_105(8, 5);
	Function_105(8, 6);
	Function_105(8, 7);
	return;
}

