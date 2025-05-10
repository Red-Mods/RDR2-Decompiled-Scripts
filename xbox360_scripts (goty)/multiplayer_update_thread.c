//Decompiled with MagicRDR v1.0
//Function Count : 352
//Statics Count : 138
//Natives Count : 262
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
	var uLocal_9 = 0;
	bool bLocal_10 = false;
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
	var uLocal_27 = 11;
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
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 11;
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
	int iLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	int iLocal_86 = 12;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	bool bLocal_123 = false;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	var uLocal_131 = 0;
	int iLocal_132 = 0;
	bool bLocal_133 = false;
	bool bLocal_134 = false;
	var uLocal_135 = 0;
	bool bLocal_136 = false;
	float fLocal_137 = 0.0f;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	char* cVar14[8];
	
	iLocal_65 = 0;
	iLocal_69 = 0;
	iLocal_130 = 0;
	iLocal_132 = 0;
	fLocal_137 = 0.0f;
	iLocal_129 = 0;
	Global_79340 = 0;
	iVar5 = 0;
	bVar7 = false;
	bVar8 = false;
	Function_351();
	Function_308();
	UI_SEND_EVENT("net.StartOnline");
	while (!Function_307() && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	if (Function_307())
	{
		Function_306(1);
	}
	iVar9 = 5;
	if (NET_GET_NAT_TYPE() != 3 && !(UI_ISACTIVE("NetAlert_FailedInviteJoin_NoPlaylist") || UI_ISACTIVE("SG_AutoSaveDisabled")))
	{
		UI_ENTER("NetAlert_NatWarning");
	}
	Function_299();
	Function_293();
	while (!IS_EXITFLAG_SET() && Function_307())
	{
		Global_78617.f_60 = GET_CURRENT_GAME_TIME();
		Function_292();
		Function_289();
		Function_284();
		switch (iLocal_129)
		{
			case 0x00000000:
				if (Function_283(1))
				{
					iLocal_129 = 1;
				}
				break;
			
			case 0x00000001:
				uLocal_135 = Function_282("multiplayerUpdateThread");
				Function_280();
				Function_214();
				Function_212();
				Function_205();
				Global_79959 = 0;
				iLocal_132 = GET_AMBIENT_MAX_NUM_TOTAL_ACTORS();
				SET_AMBIENT_MAX_NUM_TOTAL_ACTORS(30);
				if (!Function_204())
				{
					Function_203("FREEROAM");
				}
				Function_202(1);
				Function_201(2);
				iVar6 = 0;
				while (iVar6 < (Global_76943 - 1))
				{
					Function_197(&(Global_76943[iVar696]));
					iVar6++;
				}
				Function_197(&Global_78480);
				Function_195();
				REGISTER_CLIENT_BROADCAST_VARIABLES(&Global_76943, 1537);
				REGISTER_HOST_BROADCAST_VARIABLES(&Global_78578, 39);
				Global_78576 = CREATE_ACTORSET_IN_LAYOUT(Function_194(), "playersInSession", 1);
				if (Function_193())
				{
					Function_192(4096);
				}
				else
				{
					Function_191(4096);
				}
				Function_190(128);
				Function_183(Function_194(), 26925);
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
						Function_182(1572864, 0);
						break;
					
					case 0x00000001:
						Function_182(524288, 0);
						Function_182(1048576, 1);
						break;
					
					case 0x00000002:
						Function_182(524288, 1);
						Function_182(1048576, 0);
						break;
				}
				Global_63096 = 0;
				if (Global_84364.f_776 >= 0)
				{
					Function_181();
				}
				iLocal_129 = 2;
				break;
			
			case 0x00000002:
				if (Function_176(&iLocal_86) && Function_175(256))
				{
					Function_174();
					Function_173();
					Function_169();
					Function_306(131072);
					iLocal_129 = 3;
				}
				break;
			
			case 0x00000003:
				if (Function_283(1))
				{
					Global_79340 = Function_168(16384, 1);
					if (NET_IS_IN_SESSION())
					{
						Global_76943[GET_LOCAL_SLOT()96] = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_78480 };
						Function_166(Function_194());
						bVar11 = false;
						bVar11 = false;
						while (bVar11 <= 16)
						{
							if (IS_SLOT_VALID(bVar11))
							{
								bVar12 = GET_SLOT_ACTOR(bVar11);
								if (IS_ACTOR_VALID(bVar12))
								{
									if (IS_ACTORSET_VALID(Global_78576))
									{
										if (!IS_ACTOR_IN_ACTORSET(Global_78576, bVar12))
										{
											ADD_ACTORSET_MEMBER(Global_78576, bVar12);
										}
									}
								}
							}
							bVar11++;
						}
						Function_163();
						if (Function_161())
						{
							Function_149(&Global_50170[5422] + 8, &Global_50170[5422] + 12);
							if (!IS_SCRIPT_VALID(Global_79344))
							{
								Function_148();
							}
						}
						if (!iLocal_130)
						{
							iLocal_130 = 1;
							Function_173();
							Function_147(0);
							Function_146(0);
							Function_145(0);
							Function_144(0.0f);
						}
						if (Global_78480 != Global_29006)
						{
							bVar10 = true;
						}
						else if (!Function_143(Global_78480))
						{
							bVar10 = true;
						}
						else if (!Function_141(Global_78480))
						{
							bVar10 = true;
						}
						if (bVar10)
						{
							if (Function_143(Global_29006))
							{
								if (Function_141(Global_29006))
								{
									Function_140();
									bVar10 = false;
								}
							}
						}
						Function_135(Global_29006, Global_29005);
						Function_134();
						Function_128();
					}
					else if (iLocal_130)
					{
						Function_147(0);
						Function_146(0);
						Function_145(0);
						Function_195();
						iLocal_130 = 0;
					}
					Function_174();
					Function_182(2, !IS_ACTOR_ALIVE(Function_127()));
					if (!bVar8)
					{
						if (IS_STRING_VALID(UI_GET_STRING("HAS_GLOBAL_TU2")))
						{
							if (ARE_ACHIEVEMENTS_READY())
							{
								PRINTSTRING("Achievements are ready... checking if we're viral.");
								PRINTNL();
								bVar8 = true;
								if (HAS_ACHIEVEMENT_BEEN_PASSED(48))
								{
									Function_182(262144, 1);
									PRINTSTRING("Yep, we have the viral achievement (Red Dead Rockstar)");
									PRINTNL();
								}
							}
						}
						else if (HAS_ACHIEVEMENT_BEEN_PASSED(48))
						{
							Function_182(262144, 1);
							PRINTSTRING("Yep, we have the viral achievement (Red Dead Rockstar)");
							PRINTNL();
						}
					}
					Function_117();
					Function_108();
					if (Function_106(16384))
					{
						Function_60();
					}
					if (Function_58(64))
					{
						if (iVar9 != NET_GET_PLAYMODE())
						{
							iVar9 = NET_GET_PLAYMODE();
							if (iVar9 == 0)
							{
								UI_SET_STRING("nMPDollars", I2STR(Function_57(599)));
								UI_SET_STRING("MPBalance2", UI_GET_STRING("nMPBalance"));
							}
							else
							{
								UI_SET_STRING("MPBalance2", "");
							}
						}
					}
					Function_54();
					if (NET_IS_IN_SESSION())
					{
						Global_76943[GET_LOCAL_SLOT()96] = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_78480 };
					}
					Function_48();
					if (IS_ACTOR_VALID(Function_127()))
					{
						bVar13 = FIND_NAMED_LAYOUT("bearWilderness");
						if (IS_LAYOUTREF_VALID(bVar13))
						{
							if (!IS_ACTOR_IN_VOLUME(StackVal, Function_127()))
							{
								if (!UNK_0x4417C9F2("$/content/Multiplayer/Action_Areas/Wilderness/bearWildernessAA"))
								{
									RELEASE_LAYOUT_REF(bVar13);
								}
							}
						}
						bVar13 = FIND_NAMED_LAYOUT("boarWilderness");
						if (IS_LAYOUTREF_VALID(bVar13))
						{
							if (!IS_ACTOR_IN_VOLUME(StackVal, Function_127()))
							{
								if (!UNK_0x4417C9F2("$/content/Multiplayer/Action_Areas/Wilderness/boarWildernessAA"))
								{
									RELEASE_LAYOUT_REF(bVar13);
								}
							}
						}
						bVar13 = FIND_NAMED_LAYOUT("cougarWilderness");
						if (IS_LAYOUTREF_VALID(bVar13))
						{
							if (!IS_ACTOR_IN_VOLUME(StackVal, Function_127()))
							{
								if (!UNK_0x4417C9F2("$/content/Multiplayer/Action_Areas/Wilderness/cougarWildernessAA"))
								{
									RELEASE_LAYOUT_REF(bVar13);
								}
							}
						}
						bVar13 = FIND_NAMED_LAYOUT("wolfWilderness");
						if (IS_LAYOUTREF_VALID(bVar13))
						{
							if (!IS_ACTOR_IN_VOLUME(StackVal, Function_127()))
							{
								if (!UNK_0x4417C9F2("$/content/Multiplayer/Action_Areas/Wilderness/wolfWildernessAA"))
								{
									RELEASE_LAYOUT_REF(bVar13);
								}
							}
						}
					}
				}
				Function_47(uLocal_135);
				break;
			
			default:
				break;
		}
		WAIT(false);
	}
	Function_44(1);
	Function_43();
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
	Function_42();
	Function_38();
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
		SET_AMBIENT_MAX_NUM_TOTAL_ACTORS(iLocal_132);
	}
	if (HUD_IS_FADED())
	{
		if (HUD_IS_FADED())
		{
			strcpy(&cVar14, "LS_", 8);
			straddi(&cVar14, RAND_INT_RANGE(true, 13), 8);
			UI_TEXTURE_SET_NAME("LoadingScreenTexture", &cVar14);
		}
	}
	else
	{
		UNK_0xEF270DC9();
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

int Function_1(bool bParam0) //Position: 0xC77 / 3191
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

bool Function_2(bool bParam0) //Position: 0xC96 / 3222
{
	if (IS_OBJECT_VALID(bParam0))
	{
		DESTROY_OBJECT(bParam0);
		return 1;
	}
	return 0;
}

var Function_3() //Position: 0xCAC / 3244
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("NetEventLayout");
	if (!IS_OBJECT_VALID(bVar0))
	{
		return CREATE_LAYOUT("NetEventLayout");
	}
	return bVar0;
}

int Function_4() //Position: 0xCE8 / 3304
{
	Function_5(&iLocal_86);
	return 1;
}

void Function_5(int iParam0) //Position: 0xCF4 / 3316
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

void Function_6(var uParam0, int iParam1) //Position: 0xD1A / 3354
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

void Function_7(var uParam0, int iParam1) //Position: 0xE48 / 3656
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_8(int iParam0, int iParam1) //Position: 0xE62 / 3682
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_9() //Position: 0xE7F / 3711
{
	Function_36();
	Function_35();
	Function_35();
	Function_34();
	Function_34();
	Function_33();
	Function_33();
	Function_17(0);
	Function_17(0);
	if (!Function_16())
	{
		Function_14();
		Function_13();
		Function_12();
		Function_11();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_10();
	return;
}

void Function_10() //Position: 0xED1 / 3793
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

void Function_11() //Position: 0xFD7 / 4055
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

void Function_12() //Position: 0x100A / 4106
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

void Function_13() //Position: 0x1198 / 4504
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

void Function_14() //Position: 0x134C / 4940
{
	Function_15(&Global_28260, 1, 0);
	return;
}

void Function_15(int iParam0, bool bParam1, var uParam2) //Position: 0x135A / 4954
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
	
	bVar0 = Function_127();
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

bool Function_16() //Position: 0x154B / 5451
{
	return NET_IS_MANAGER_INITIALIZED();
}

struct<8> Function_17(int iParam0) //Position: 0x1554 / 5460
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
					iVar2 = ((Function_57((50 + iVar4)) + Function_57((183 + iVar4))) + Function_57((90 + iVar4)));
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
	Function_18(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_18(int iParam0, bool bParam1, bool bParam2) //Position: 0x15FA / 5626
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

void Function_19(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x1895 / 6293
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

var Function_20() //Position: 0x1EC2 / 7874
{
	int iVar0;
	
	return iVar0;
}

var Function_21(int iParam0) //Position: 0x1ECA / 7882
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_22(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1EDB / 7899
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

struct<32> Function_23(char* cParam0, bool bParam1) //Position: 0x1FD0 / 8144
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_24(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1FE9 / 8169
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_26(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_25(Function_26(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_25(int iParam0, int iParam1) //Position: 0x204E / 8270
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_26(int iParam0, bool bParam1) //Position: 0x2060 / 8288
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_27(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2072 / 8306
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

int Function_28(int iParam0) //Position: 0x21A2 / 8610
{
	return Global_35278[iParam020].f_48;
}

float Function_29(int iParam0) //Position: 0x21B1 / 8625
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_30(int iParam0) //Position: 0x21EA / 8682
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_31(int iParam0) //Position: 0x2227 / 8743
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

int Function_32(int iParam0, bool bParam1, bool bParam2) //Position: 0x23C1 / 9153
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

struct<8> Function_33() //Position: 0x2605 / 9733
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
		iVar2 = ((Function_57((50 + iVar3) + 15) + Function_57((183 + iVar3) + 15)) + Function_57((90 + iVar3) + 15));
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

struct<8> Function_34() //Position: 0x268E / 9870
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
			iVar2 = ((Function_57((50 + iVar3) + 8) + Function_57((183 + iVar3) + 8)) + Function_57((90 + iVar3) + 8));
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

struct<8> Function_35() //Position: 0x2725 / 10021
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
		iVar2 = ((Function_57((50 + iVar3)) + Function_57((183 + iVar3))) + Function_57((90 + iVar3)));
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

void Function_36() //Position: 0x27A4 / 10148
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_37(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_18(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_37(int iParam0, bool bParam1, int iParam2) //Position: 0x27DD / 10205
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

void Function_38() //Position: 0x29E7 / 10727
{
	Function_41();
	Function_40();
	Function_39();
	return;
}

void Function_39() //Position: 0x29F6 / 10742
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

void Function_40() //Position: 0x2A21 / 10785
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

void Function_41() //Position: 0x2A4C / 10828
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

void Function_42() //Position: 0x2A77 / 10871
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_43() //Position: 0x2A89 / 10889
{
	bool bVar0;
	
	bVar0 = Function_3();
	DESTROY_LAYOUT_OBJECTS(bVar0);
	return;
}

void Function_44(int iParam0) //Position: 0x2A99 / 10905
{
	Function_45(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_45(var uParam0, int iParam1) //Position: 0x2AD2 / 10962
{
	Function_46(uParam0, iParam1);
	return;
}

void Function_46(var uParam0, int iParam1) //Position: 0x2ADF / 10975
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_47(bool bParam0) //Position: 0x2AF2 / 10994
{
	if (IS_OBJECTSET_VALID(bParam0))
	{
		DISBAND_OBJECTSET(bParam0);
	}
	return;
}

void Function_48() //Position: 0x2B05 / 11013
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3;
	
	if ((IS_ACTOR_VALID(Function_127()) && Function_16()) && GET_CURRENT_GAME_TIME() < (fLocal_137 + 1.0f))
	{
		fLocal_137 = GET_CURRENT_GAME_TIME();
		bVar0 = Function_161();
		iVar1 = Function_53();
		bVar2 = GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0));
		Function_52(bVar2);
		vVar3 = { StackVal, StackVal, Function_52(bVar2) };
		if (Function_51(&bVar2, &vVar3, -1418.14f, 149.401f, 1935.608f, 0.0f, 0.0f, 0.0f, 31.0f, 31.0f, 31.0f, 1))
		{
			Function_49(bVar0, -1003.794f, 107.889f, 2167.442f, "Frontier Region, Hennigan's Stead", "Player attempting to fall through hole north of Hennigan's in a canyon by a tree");
		}
		if (Function_51(&bVar2, &vVar3, -1768.83f, 71.354f, 1836.689f, 0.0f, 0.0f, 0.0f, 15.0f, 15.0f, 15.0f, 1))
		{
			Function_49(bVar0, -1917.874f, 28.416f, 2251.366f, "Frontier Region, Cholla Springs", "Player attempting to fall through world near train tracks in tunnel north of Armadillo");
		}
		if (Function_51(&bVar2, &vVar3, -2016.314f, 43.353f, 3009.644f, 0.0f, 11.594f, 0.0f, 9.0f, 4.0f, 4.4f, 2))
		{
			Function_49(bVar0, -2014.073f, 42.042f, 3029.9f, "Frontier Region, Cholla Springs", "Player attempting to get into house at Venter's Place");
		}
		if (iVar1 == Global_30685[0])
		{
			if (Function_51(&bVar2, &vVar3, -4349.966f, 39.502f, 4331.834f, 0.0f, 0.0f, 0.0f, 30.0f, 4.0f, 20.0f, 2))
			{
				Function_49(bVar0, -4273.545f, 18.426f, 4467.387f, "Punta Orgullo, Escalera", "Player attempting to get underneath the mansion");
			}
		}
		else if (iVar1 != Global_30723[0] || iVar1 != Global_30723[3])
		{
			if (Function_51(&bVar2, &vVar3, -810.729f, 191.678f, 1138.451f, 0.0f, -13.013f, 0.0f, 2.225f, 4.0f, 1.0f, 2))
			{
				Function_49(bVar0, -811.162f, 191.912f, 1139.323f, "Tall Trees, Nekoti Rock", "Player attempting to get between wall and ledge");
			}
		}
		else if (iVar1 == Global_30693[0])
		{
			if (Function_51(&bVar2, &vVar3, -2723.107f, 34.001f, 4235.032f, 0.0f, 32.243f, 0.0f, 8.0f, 6.0f, 8.0f, 2))
			{
				Function_49(bVar0, -2761.542f, 32.126f, 4278.813f, "Perdido, Chupa Rosa", "Player attempting to get into the inn");
			}
		}
		else if (iVar1 == Global_30717[0])
		{
			if (Function_51(&bVar2, &vVar3, 689.255f, 81.412f, 1228.921f, 0.0f, 0.0f, 0.0f, 7.5f, 7.0f, 5.0f, 2) || Function_51(&bVar2, &vVar3, 689.331f, 81.412f, 1240.835f, 0.0f, 0.0f, 0.0f, 7.5f, 7.0f, 5.0f, 2))
			{
				Function_49(bVar0, 681.873f, 78.306f, 1344.04f, "Great Plains, Blackwater", "Player attempting to get into the bank");
			}
			else if (Function_51(&bVar2, &vVar3, 721.744f, 79.509f, 1364.265f, 0.0f, 0.0f, 0.0f, 8.0f, 4.0f, 6.0f, 2))
			{
				Function_49(bVar0, 681.873f, 78.306f, 1344.04f, "Great Plains, Blackwater", "Player attempting to get into the doctor's office");
			}
			else if (Function_51(&bVar2, &vVar3, 727.356f, 98.8f, 1497.872f, 0.0f, -10.315f, 0.0f, 3.0f, 4.0f, 3.0f, 2) || Function_51(&bVar2, &vVar3, 727.751f, 98.8f, 1501.265f, 0.0f, -10.315f, 0.0f, 3.0f, 4.0f, 3.0f, 2))
			{
				Function_49(bVar0, 681.873f, 78.306f, 1344.04f, "Great Plains, Blackwater", "Player attempting to get into house at edge of town");
			}
			else if (Function_51(&bVar2, &vVar3, 750.307f, 81.922f, 1196.096f, 0.0f, 0.0f, 0.0f, 15.692f, 7.0f, 16.18f, 2) || Function_51(&bVar2, &vVar3, 723.148f, 81.922f, 1197.204f, 0.0f, 0.0f, 0.0f, 15.692f, 7.0f, 14.372f, 2))
			{
				Function_49(bVar0, 681.873f, 78.306f, 1344.04f, "Great Plains, Blackwater", "Player attempting to get into town hall");
			}
		}
		else if (iVar1 != Global_30717[1] && !UNK_0x4417C9F2("/content/DLC/MPFreePack/AD_Instances/AD_BEC/ad_bec"))
		{
			if (Function_51(&bVar2, &vVar3, -106.088f, 120.604f, 1367.872f, 0.0f, -32.35f, 0.0f, 5.033f, 2.79f, 3.602f, 2))
			{
				Function_49(bVar0, -116.388f, 118.102f, 1432.045f, "Great Plains, Beecher's Hope", "Player attempting to get into John's House");
			}
		}
		else if (iVar1 == Global_30693[2])
		{
			if (Function_51(&bVar2, &vVar3, -1487.507f, 18.3f, 3908.882f, 0.0f, -9.988f, 0.0f, 5.9f, 5.0f, 20.0f, 2) || Function_51(&bVar2, &vVar3, -1494.332f, 18.3f, 3909.815f, 0.0f, -9.988f, 0.0f, 8.5f, 5.0f, 15.0f, 2))
			{
				Function_49(bVar0, -1589.915f, 16.212f, 3919.906f, "Perdidio, Agave Viejo", "Player attempting to get into the side window of the large house");
			}
		}
		else if (iVar1 == Global_30668[1])
		{
			if (Function_51(&bVar2, &vVar3, 103.45f, 74.576f, 2271.752f, 0.0f, -9.909f, 0.0f, 15.781f, 4.086f, 10.704f, 2))
			{
				Function_49(bVar0, 107.32f, 73.215f, 2318.506f, "Hennigan's Stead, Thieves' Landing", "Player attempting to get into the sailor's hostel");
			}
			else if (Function_51(&bVar2, &vVar3, 157.056f, 74.703f, 2240.083f, 0.0f, -29.684f, 0.0f, 3.39f, 3.488f, 5.432f, 2) || Function_51(&bVar2, &vVar3, 149.202f, 78.191f, 2244.951f, 0.0f, -30.405f, 0.0f, 9.623f, 3.0f, 5.234f, 2))
			{
				Function_49(bVar0, 148.582f, 73.036f, 2205.177f, "Hennigan's Stead, Thieves' Landing", "Player attempting to get into the Dixie Rose");
			}
			else if (Function_51(&bVar2, &vVar3, 174.778f, 74.073f, 2233.695f, 0.0f, -30.37f, 0.0f, 2.706f, 3.682f, 12.03f, 2))
			{
				Function_49(bVar0, 148.582f, 73.036f, 2205.177f, "Hennigan's Stead, Thieves' Landing", "Player attempting to get into the Saloon back room");
			}
		}
	}
	return;
}

void Function_49(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5) //Position: 0x3559 / 13657
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(Function_127()))
	{
		Function_50(Function_127());
		vVar0 = { StackVal, StackVal, Function_50(Function_127()) };
		if (bParam0)
		{
			Global_76888[03] = { StackVal, StackVal, vParam1 };
			Global_76888[13] = { StackVal, StackVal, vParam1 };
			Function_190(20);
			PRINTSTRING("MUT - Bounds violation detected at ");
			PRINTSTRING(V2STR(&vVar0));
			PRINTNL();
			PRINTSTRING("MUT - Location : ");
			PRINTSTRING(bParam4);
			PRINTNL();
			PRINTSTRING("MUT - Description : ");
			PRINTSTRING(bParam5);
			PRINTNL();
			PRINTSTRING("MUT - Resolution : Attempting teleport to ");
			PRINTSTRING(V2STR(&vParam1));
			PRINTNL();
		}
		else
		{
			KILL_ACTOR(Function_127());
			PRINTSTRING("MUT - Bounds violation detected at ");
			PRINTSTRING(V2STR(&vVar0));
			PRINTNL();
			PRINTSTRING("MUT - Location : ");
			PRINTSTRING(bParam4);
			PRINTNL();
			PRINTSTRING("MUT - Description : ");
			PRINTSTRING(bParam5);
			PRINTNL();
			PRINTSTRING("MUT - Resolution : Not in free mode, will kill the player now.");
			PRINTNL();
		}
	}
}

vector3 Function_50(bool bParam0) //Position: 0x370D / 14093
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

bool Function_51(bool bParam0, var uParam1, vector3 vParam2, vector3 vParam5, vector3 vParam8, bool bParam11) //Position: 0x371E / 14110
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = CREATE_VOLUME_IN_LAYOUT(*bParam0, Function_20(), bParam11, vParam2, vParam5, vParam8);
	bVar1 = IS_POINT_IN_VOLUME(*uParam1, bVar0);
	DESTROY_VOLUME(bVar0);
	return bVar1;
}

vector3 Function_52(bool bParam0) //Position: 0x3751 / 14161
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

var Function_53() //Position: 0x3778 / 14200
{
	return Global_78480;
}

void Function_54() //Position: 0x3782 / 14210
{
	float fVar0;
	float fVar1;
	
	fVar0 = Function_29(487);
	fVar1 = Function_56(1);
	if (FABS((fVar1 - fVar0)) < 0.1f)
	{
		Function_55(1, fVar0);
	}
	return;
}

void Function_55(int iParam0, int iParam1) //Position: 0x37AD / 14253
{
	(*&Global_78480 + 176)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 176)[iParam0] = iParam1;
	}
	return;
}

var Function_56(int iParam0) //Position: 0x37D6 / 14294
{
	return (*&Global_78480 + 176)[iParam0];
}

int Function_57(int iParam0) //Position: 0x37E6 / 14310
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

bool Function_58(bool bParam0) //Position: 0x3827 / 14375
{
	return Function_59(Global_83864.f_1252, bParam0);
}

bool Function_59(var uParam0, bool bParam1) //Position: 0x3839 / 14393
{
	return (uParam0 && bParam1) == 0;
}

void Function_60() //Position: 0x3846 / 14406
{
	if (StackVal == 10 && Global_83864.f_1264 <= 33)
	{
		if (PPP_GET_ELEMENT_MAGNITUDE(0) <= 0.75f)
		{
			Global_56352[20] = 1;
		}
		else if (!IS_ACTOR_ALIVE(Function_127()) && Global_56352[20] == 4294967295)
		{
			Global_56352[20] = 4294967295;
		}
		if (Global_56352[20] == 1)
		{
			Function_61(&Global_50170[2022] + 4, &Global_50170[2022] + 8, &Global_50170[2022] + 12);
		}
	}
	return;
}

void Function_61(var uParam0, var uParam1, bool bParam2) //Position: 0x38C3 / 14531
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 33)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_105(20);
				if (PPP_GET_ELEMENT_MAGNITUDE(0) != 0.0f)
				{
					Global_56352[20] = 4294967295;
					Global_56092[20]++;
				}
				bVar0 = Global_56092[20];
				if (bVar0 > 5)
				{
					*uParam0 = 2;
					Function_69(20, 50, Function_104(), 3037);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_68(bParam2, bVar0, 5);
					if (*bParam2 == fVar1)
					{
						Function_62(20, *bParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
	return;
}

void Function_62(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x3954 / 14676
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_67(iParam0), fParam1, true, 0);
	if (bParam2)
	{
		memcpy(&cVar0, StackVal, StackVal, StackVal, Function_66(iParam0), 6);
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
		APPEND_JOURNAL_ENTRY_DETAIL(Function_67(iParam0), &cVar0, 2, 2, true);
	}
	if (Function_64(iParam0, 4))
	{
		Function_63(Function_67(iParam0), 0);
	}
}

void Function_63(char* cParam0, bool bParam1) //Position: 0x3A0B / 14859
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

bool Function_64(int iParam0, int iParam1) //Position: 0x3A30 / 14896
{
	return Function_65(Global_50170[iParam022].f_32, iParam1);
}

bool Function_65(var uParam0, int iParam1) //Position: 0x3A44 / 14916
{
	return (uParam0 && iParam1) == 0;
}

struct<16> Function_66(int iParam0) //Position: 0x3A51 / 14929
{
	char* cVar0[16];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 4);
	stradd(&cVar0, "_", 16);
	stradd(&cVar0, INT_TO_STRING(StackVal), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_67(int iParam0) //Position: 0x3A85 / 14981
{
	return Global_50170[iParam022].f_24;
}

void Function_68(var uParam0, bool bParam1, int iParam2) //Position: 0x3A94 / 14996
{
	*uParam0 = TO_FLOAT(bParam1);
	*uParam0 = (*uParam0 / IntToFloat(iParam2));
	return;
}

void Function_69(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x3AAC / 15020
{
	Function_102(iParam0, 1);
	Global_50170[iParam022].f_8 = 10;
	SET_JOURNAL_ENTRY_PROGRESS(Function_67(iParam0), 1.0f, false, 0);
	Function_98(iParam0, 0);
	if (!IS_STRING_VALID(bParam2))
	{
		bParam2 = "challenge_01_128";
	}
	if (iParam3 != 4294967295)
	{
		Function_95(iParam3);
	}
	Function_90(&Global_50170[iParam022] + 16, bParam1, bParam2);
	Function_70();
}

void Function_70() //Position: 0x3B12 / 15122
{
	if (!Function_16())
	{
		if (!Function_89(1, 3, 1, 1))
		{
			Function_77(1);
			Function_76(1, 8);
		}
	}
	else
	{
		Function_71(0);
	}
	return;
}

void Function_71(bool bParam0) //Position: 0x3B3B / 15163
{
	NET_LOG(true, "SaveLoad", "Multiplayer Save Triggered, will be picked up by Multiplayer_update_thread soon enough", false, false, false, false);
	Function_73(2);
	if (bParam0)
	{
		Function_73(1);
	}
	else
	{
		Function_72(1);
	}
	Function_9();
	return;
}

void Function_72(int iParam0) //Position: 0x3BC4 / 15300
{
	Function_45(&Global_79338, iParam0);
	return;
}

void Function_73(int iParam0) //Position: 0x3BD3 / 15315
{
	Function_74(&Global_79338, iParam0);
	return;
}

void Function_74(var uParam0, int iParam1) //Position: 0x3BE2 / 15330
{
	Function_75(uParam0, iParam1);
	return;
}

void Function_75(var uParam0, bool bParam1) //Position: 0x3BEF / 15343
{
	*uParam0 = (*uParam0 || bParam1);
	return;
}

void Function_76(var uParam0, int iParam1) //Position: 0x3BFE / 15358
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

void Function_77(bool bParam0) //Position: 0x3C40 / 15424
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_78();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_9();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_46(&Global_63095, 1);
		Function_46(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_78() //Position: 0x3C91 / 15505
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_88())
	{
		Function_85(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_85(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_80(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_80(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_79(StackVal, StackVal, vVar0))
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

bool Function_79(vector3 vParam0) //Position: 0x3D4C / 15692
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_80(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x3D64 / 15716
{
	int iVar0;
	
	iVar0 = Function_83(uParam2, uParam3);
	if (Function_82(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_75(&Global_63095, 1);
			Function_46(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_75(&Global_63095, 2);
			Function_46(&Global_63095, 1);
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
		Function_75(&Global_63095, 2);
		Function_46(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_81();
	return StackVal, StackVal, Function_81();
}

vector3 Function_81() //Position: 0x3E4B / 15947
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_82(int iParam0) //Position: 0x3E54 / 15956
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_83(bool bParam0, bool bParam1) //Position: 0x3E6A / 15978
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
				fVar2 = Function_84(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_84(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_82(bVar0) && !bParam1)
	{
		bVar0 = Function_83(bParam0, 1);
	}
	return bVar0;
}

float Function_84(vector3 vParam0, vector3 vParam3) //Position: 0x3F31 / 16177
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_85(var uParam0, int iParam1) //Position: 0x3F4E / 16206
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_87(Global_34573, &vVar4);
	if (!Function_86(Global_30640[0]))
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
	if (!Function_86(Global_30640[2]))
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
	if (!Function_86(Global_30640[1]))
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
	if (!Function_86(Global_30658[1]))
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
	if (!Function_86(Global_30658[3]))
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
	if (!Function_86(Global_30658[2]))
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
	if (!Function_86(Global_30658[4]))
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
	if (!Function_86(Global_30668[0]))
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
	if (!Function_86(Global_30668[1]))
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
	if (!Function_86(Global_30668[2]))
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
	if (!Function_86(Global_30679[0]))
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
	if (!Function_86(Global_30685[0]))
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
	if (!Function_86(Global_30685[1]))
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
	if (!Function_86(Global_30685[2]))
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
	if (!Function_86(Global_30693[0]))
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
	if (!Function_86(Global_30693[1]))
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
	if (!Function_86(Global_30693[2]))
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
	if (!Function_86(Global_30707[2]))
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
	if (!Function_86(Global_30707[3]))
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
	if (!Function_86(Global_30707[0]))
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
	if (!Function_86(Global_30717[0]))
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
	if (!Function_86(Global_30723[2]))
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
	if (!Function_86(Global_30723[1]))
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
	if (!Function_86(Global_30723[0]))
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
	if (!Function_86(Global_30679[1]))
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
	if (!Function_86(Global_30707[1]))
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
	Function_75(&Global_63095, 2);
	Function_46(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_79(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_86(int iParam0) //Position: 0x4775 / 18293
{
	var uVar0;
	
	uVar0 = Global_29008[iParam0];
	return (((Function_65(uVar0, 0x1000000) || Function_65(uVar0, 0x2000000)) || Function_65(uVar0, 0x4000000)) || !Function_65(uVar0, 0x10000000));
}

void Function_87(bool bParam0, bool bParam1) //Position: 0x47B0 / 18352
{
	GET_POSITION(bParam0, bParam1);
	return;
}

bool Function_88() //Position: 0x47BD / 18365
{
	if (Function_65(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_89(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x47D8 / 18392
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

void Function_90(bool bParam0, bool bParam1, bool bParam2) //Position: 0x487C / 18556
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	
	bVar0 = Function_194();
	iVar1 = 0;
	if (DECOR_GET_INT_VERBOSE(bVar0, Function_94(), &iVar1))
	{
		iVar2 = iVar1 & 1023;
	}
	Var3 = { StackVal, StackVal, StackVal, Function_93(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam0));
	Var3 = { StackVal, StackVal, StackVal, Function_92(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam2));
	Var3 = { StackVal, StackVal, StackVal, Function_91(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, bParam1);
	DECOR_SET_INT(bVar0, Function_94(), iVar1 + 1);
	return;
}

struct<16> Function_91(int iParam0) //Position: 0x48EE / 18670
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_X", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_92(int iParam0) //Position: 0x490F / 18703
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_T", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_93(int iParam0) //Position: 0x4930 / 18736
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_H", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_94() //Position: 0x4951 / 18769
{
	return "CQueue_Count";
}

void Function_95(int iParam0) //Position: 0x4966 / 18790
{
	Function_96(iParam0, 1);
	return;
}

void Function_96(int iParam0, bool bParam1) //Position: 0x4972 / 18802
{
	int iVar0;
	
	iVar0 = (iParam0 % 1000);
	if (bParam1)
	{
		Function_75(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_97((iVar0 % 32)));
	}
	else
	{
		Function_46(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_97((iVar0 % 32)));
	}
	return;
}

int Function_97(bool bParam0) //Position: 0x49C8 / 18888
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_98(int iParam0, int iParam1) //Position: 0x49D4 / 18900
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	
	if (((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_101(iParam0)) && iParam1)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		CLEAR_JOURNAL_ENTRY(Function_67(iParam0));
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_100(iParam0) };
		Var7 = { StackVal, StackVal, StackVal, Function_66(iParam0) };
		UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
		Var7 = { StackVal, StackVal, StackVal, Function_99(iParam0) };
		APPEND_JOURNAL_ENTRY_DETAIL(Function_67(iParam0), &Var7, 0, 2, false);
		PREPEND_JOURNAL_ENTRY(Function_67(iParam0), true);
		SET_JOURNAL_ENTRY_PROGRESS(Function_67(iParam0), 1.0f, false, 0);
	}
	return;
}

struct<16> Function_99(int iParam0) //Position: 0x4A56 / 19030
{
	char* cVar0[16];
	
	cVar0 = { StackVal, StackVal, StackVal, Function_66(iParam0) };
	stradd(&cVar0, "_des", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_100(int iParam0) //Position: 0x4A76 / 19062
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_101(int iParam0) //Position: 0x4AA7 / 19111
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

void Function_102(bool bParam0, bool bParam1) //Position: 0x4C25 / 19493
{
	bool bVar0;
	bool bVar1;
	char* cVar2[16];
	
	bVar0 = false;
	bVar1 = Function_103();
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

var Function_103() //Position: 0x4D71 / 19825
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return bVar0;
}

bool Function_104() //Position: 0x4DBE / 19902
{
	return "MP_Revenge_Icon_128";
}

var Function_105(int iParam0) //Position: 0x4DDA / 19930
{
	return Global_50170[iParam022].f_12;
}

bool Function_106(int iParam0) //Position: 0x4DE9 / 19945
{
	return Function_107(&Global_79349, iParam0);
}

int Function_107(var uParam0, bool bParam1) //Position: 0x4DF8 / 19960
{
	return Function_65(uParam0->f_44, bParam1);
}

void Function_108() //Position: 0x4E07 / 19975
{
	if (Function_58(8))
	{
		Function_109();
		Function_192(256);
		Function_191(8);
	}
	return;
}

void Function_109() //Position: 0x4E23 / 20003
{
	Function_116(1, 9);
	Function_116(1, 5);
	Function_116(1, 6);
	Function_116(1, 7);
	Function_116(1, 8);
	Function_116(9, 1);
	Function_116(5, 1);
	Function_116(6, 1);
	Function_116(7, 1);
	Function_116(8, 1);
	if (Function_58(64))
	{
		Function_116(13, 1);
		Function_116(1, 13);
	}
	Function_110(900);
	return;
}

void Function_110(int iParam0) //Position: 0x4E79 / 20089
{
	bool bVar0;
	
	bVar0 = 837;
	while (bVar0 < 971)
	{
		if (Function_115(bVar0) == iParam0)
		{
			Function_111(bVar0);
		}
		bVar0++;
	}
	bVar0 = 1287;
	while (bVar0 < 1310)
	{
		if (Function_115(bVar0) == iParam0)
		{
			Function_111(bVar0);
		}
		bVar0++;
	}
	return;
}

void Function_111(bool bParam0) //Position: 0x4EC9 / 20169
{
	Function_75(&Global_83864 + 1976[Function_114(bParam0)], Function_112(bParam0));
	return;
}

int Function_112(int iParam0) //Position: 0x4EE5 / 20197
{
	return Function_97((Function_113(iParam0) % 32));
}

int Function_113(int iParam0) //Position: 0x4EF6 / 20214
{
	if (iParam0 > 1287)
	{
		return (iParam0 - 1287) + 134 + 1;
	}
	return (iParam0 - 837);
}

int Function_114(int iParam0) //Position: 0x4F15 / 20245
{
	return (Function_113(iParam0) / 32);
}

int Function_115(bool bParam0) //Position: 0x4F23 / 20259
{
	return (ABS(GET_ACTORENUM_AVATAR_GROUP(bParam0)) % 1000);
}

void Function_116(bool bParam0, int iParam1) //Position: 0x4F35 / 20277
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
	Function_75(&Global_78617 + 2652[bParam0], 1);
	Function_75(&Global_78617 + 2652[iParam1], 1);
	Function_75(&Global_78617 + 2652[bParam0], Function_97(iParam1));
	Function_75(&Global_78617 + 2652[iParam1], Function_97(bParam0));
	return;
}

void Function_117() //Position: 0x4FA9 / 20393
{
	if (!HAS_ACHIEVEMENT_BEEN_PASSED(47))
	{
		if (NET_GET_PLAYMODE() == 0)
		{
			if (Function_168(131072, 1) && !Function_168(0x2000000, 1))
			{
				if (!Function_126(&bLocal_123))
				{
					Function_124(&bLocal_123);
				}
				else if (!Function_122(Global_34573, 0))
				{
					Function_121(&bLocal_123);
				}
				else if (Function_118(&bLocal_123, 600.0f) && !Global_3403)
				{
					AWARD_ACHIEVEMENT(47);
					Function_121(&bLocal_123);
				}
			}
			else
			{
				Function_121(&bLocal_123);
			}
		}
		else
		{
			Function_121(&bLocal_123);
		}
	}
	return;
}

bool Function_118(bool bParam0, float fParam1) //Position: 0x5026 / 20518
{
	if (Function_126(bParam0))
	{
		if (Function_119(bParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_119(bool bParam0) //Position: 0x5042 / 20546
{
	if (Function_126(bParam0))
	{
		if (Function_120(bParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_120(int iParam0) //Position: 0x510A / 20746
{
	return Function_65(*iParam0, 2);
}

void Function_121(bool bParam0) //Position: 0x5117 / 20759
{
	bParam0->f_4 = 0.0f;
	bParam0->f_8 = 0.0f;
	*bParam0 = 0;
	return;
}

bool Function_122(bool bParam0, int iParam1) //Position: 0x512B / 20779
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (Function_123(iParam1, 1))
			{
				if (IS_ACTOR_CRIPPLED(bParam0, 3) || IS_ACTOR_CRIPPLED(bParam0, 4))
				{
					return 0;
				}
			}
			if (Function_123(iParam1, 2))
			{
				if (IS_ACTOR_HOGTIED(bParam0))
				{
					return 0;
				}
			}
			if (Function_123(iParam1, 4))
			{
				if (IS_ACTOR_BEING_DRAGGED(bParam0, 1.0f))
				{
					return 0;
				}
			}
			if (Function_123(iParam1, 8))
			{
				if (UNK_0x7A207FFE(bParam0))
				{
					return 0;
				}
			}
			if (Function_123(iParam1, 1024))
			{
				if (!IS_ACTOR_RIDING(bParam0) && !IS_ACTOR_RIDING_VEHICLE(bParam0))
				{
					return 0;
				}
			}
			if (Function_123(iParam1, 16))
			{
				if (IS_ACTOR_RAGDOLL(bParam0))
				{
					return 0;
				}
			}
			if (Function_123(iParam1, 32))
			{
				if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
				{
					return 0;
				}
			}
			if (Function_123(iParam1, 64))
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

bool Function_123(var uParam0, int iParam1) //Position: 0x5204 / 20996
{
	return (uParam0 && iParam1) == 0;
}

void Function_124(bool bParam0) //Position: 0x5211 / 21009
{
	if (!Function_126(bParam0))
	{
		Function_125(bParam0, 0.0f);
	}
	return;
}

void Function_125(bool bParam0, float fParam1) //Position: 0x5226 / 21030
{
	bParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_75(bParam0, 1);
	Function_46(bParam0, 2);
	bParam0->f_8 = 0.0f;
	return;
}

bool Function_126(bool bParam0) //Position: 0x5247 / 21063
{
	return Function_65(*bParam0, 1);
}

var Function_127() //Position: 0x5254 / 21076
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

int Function_128() //Position: 0x5269 / 21097
{
	int iVar0;
	
	iVar0 = Function_129(Function_133(), 0);
	if (iVar0 == 4294967295)
	{
		Function_145(1);
		return 1;
	}
	if (iVar0 == GET_LOCAL_SLOT())
	{
		Function_145(1);
		return 1;
	}
	Function_145(0);
	return 0;
	return 0;
}

var Function_129(int iParam0, int iParam1) //Position: 0x529F / 21151
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	bVar1 = GET_LOCAL_SLOT();
	bVar0 = false;
	while (bVar0 <= Global_76943)
	{
		if (Function_132(bVar0))
		{
			if (iParam1 && bVar0 != bVar1)
			{
				if (Global_78480.f_96 != iParam0 && Function_168(64, 1))
				{
					return bVar0;
				}
			}
			if (Global_76943[bVar096].f_96 == iParam0)
			{
				if (Function_130(bVar0, 64, 1))
				{
					return bVar0;
				}
			}
		}
		bVar0++;
	}
	return 4294967295;
}

bool Function_130(bool bParam0, bool bParam1, bool bParam2) //Position: 0x530C / 21260
{
	char* cVar0[64];
	bool bVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_168(bParam1, bParam2);
	}
	if (!Function_132(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_131(bParam1), 64);
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

var Function_131(int iParam0) //Position: 0x538D / 21389
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
		
		case 0x01000000:
			return "FREE_MODE_DEFENSE_ACTIVE";
			break;
		
		case 0x02000000:
			return "PLAYER_IS_GRIEFER";
			break;
		
		case 0x04000000:
			return "CANNOT_AFFORD_MINIGAME";
			break;
		
		case 0x08000000:
			return "FREE_MODE_DEFENSE_SPOONHOLDER";
			break;
	}
	return "UNKNOWN";
}

bool Function_132(bool bParam0) //Position: 0x56A6 / 22182
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

var Function_133() //Position: 0x5747 / 22343
{
	return Global_78480.f_96;
}

void Function_134() //Position: 0x5753 / 22355
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
				Function_75(&Global_79297, SHIFT_LEFT(true, bVar0));
			}
		}
		bVar0++;
	}
	return;
}

void Function_135(int iParam0, int iParam1) //Position: 0x5791 / 22417
{
	int iVar0;
	int iVar1;
	
	if (Global_78480 != iParam0)
	{
		Function_147(0);
	}
	if (StackVal != iParam1)
	{
		Function_146(0);
	}
	Global_78480 = iParam0;
	Global_78480.f_4 = iParam1;
	if (((HUD_IS_FADED() || Global_3391) || iParam0 > 0) || iParam1 > 0)
	{
		Function_147(0);
		Function_146(0);
		return;
	}
	iVar0 = 4294967295;
	iVar1 = 4294967295;
	Function_136(iParam0, &iVar0, iParam1, &iVar1, 0);
	if (iVar0 == 4294967295)
	{
		Function_147(1);
	}
	else if (iVar0 == GET_LOCAL_SLOT())
	{
		Function_147(1);
	}
	else
	{
		Function_147(0);
	}
	if (iVar1 == 4294967295)
	{
		Function_146(1);
	}
	else if (iVar1 == GET_LOCAL_SLOT())
	{
		Function_146(1);
	}
	else
	{
		Function_146(0);
	}
	return;
}

void Function_136(int iParam0, var uParam1, int iParam2, var uParam3, bool bParam4) //Position: 0x5830 / 22576
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
		if (Function_132(bVar0))
		{
			if (bVar0 == bVar1)
			{
				if (bParam4)
				{
					if (Global_78480 != iParam0 && Function_168(32, 1))
					{
						*uParam1 = bVar0;
					}
					if (StackVal != iParam2 && Function_168(32768, 1))
					{
						*uParam3 = bVar0;
					}
				}
			}
			else
			{
				if (Function_139(bVar0) != iParam0 && Function_130(bVar0, 32, 1))
				{
					*uParam1 = bVar0;
				}
				if (Function_137(bVar0) != iParam2 && Function_130(bVar0, 32768, 1))
				{
					*uParam3 = bVar0;
				}
			}
		}
		bVar0++;
	}
}

int Function_137(bool bParam0) //Position: 0x58D8 / 22744
{
	if (!Function_132(bParam0))
	{
		return 4294967295;
	}
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_138();
	}
	return StackVal;
}

bool Function_138() //Position: 0x58FF / 22783
{
	return StackVal;
}

int Function_139(bool bParam0) //Position: 0x590B / 22795
{
	if (!Function_132(bParam0))
	{
		return 4294967295;
	}
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_53();
	}
	return Global_76943[bParam096];
}

void Function_140() //Position: 0x5930 / 22832
{
	bool bVar0;
	bool bVar1;
	
	if (IS_LAYOUTREF_VALID(Global_30616))
	{
		bVar0 = CREATE_NAMED_OBJECT_ITERATOR(Global_30616, "nBoxKiller");
		ITERATE_IN_LAYOUT(bVar0, Global_30616);
		ITERATE_ON_OBJECT_TYPE(bVar0, 12);
		ITERATE_ON_PARTIAL_MODEL_NAME(bVar0, "locked_footlocker");
		bVar1 = START_OBJECT_ITERATOR(bVar0);
		while (IS_OBJECT_VALID(bVar1))
		{
			DESTROY_OBJECT(bVar1);
			bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
		}
		DESTROY_ITERATOR(bVar0);
	}
	return;
}

bool Function_141(int iParam0) //Position: 0x59A1 / 22945
{
	if (!Function_143(iParam0))
	{
		return 1;
	}
	return Function_142(&(Global_29008[iParam0]), 4);
}

int Function_142(var uParam0, int iParam1) //Position: 0x59BD / 22973
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_143(int iParam0) //Position: 0x59D9 / 23001
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_144(int iParam0) //Position: 0x59EF / 23023
{
	Global_78480.f_104 = iParam0;
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_104 = iParam0;
	}
	return;
}

void Function_145(bool bParam0) //Position: 0x5A10 / 23056
{
	Function_182(64, bParam0);
	return;
}

void Function_146(bool bParam0) //Position: 0x5A1D / 23069
{
	Function_182(32768, bParam0);
	return;
}

void Function_147(bool bParam0) //Position: 0x5A2C / 23084
{
	Function_182(32, bParam0);
	return;
}

void Function_148() //Position: 0x5A39 / 23097
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = GET_AMBIENT_LAYOUT();
	bVar1 = CREATE_OBJECT_ITERATOR(bVar0);
	ITERATE_IN_LAYOUT(bVar1, bVar0);
	ITERATE_ON_OBJECT_TYPE(bVar1, 17);
	ITERATE_ON_PARTIAL_NAME(bVar1, "CTFBag_");
	bVar2 = START_OBJECT_ITERATOR(bVar1);
	while (IS_OBJECT_VALID(bVar2))
	{
		RELEASE_OBJECT_REF(bVar2);
		bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
	}
	DESTROY_ITERATOR(bVar1);
	return;
}

void Function_149(var uParam0, int iParam1) //Position: 0x5A8B / 23179
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
		if (Function_126(&bLocal_6))
		{
			if (!Global_3403)
			{
				Function_121(&bLocal_6);
			}
			else if (Function_118(&bLocal_6, fVar1))
			{
				if (iVar0 == 10)
				{
					*iParam1 = 1.0f;
					Function_69(54, 50, Function_160(), iVar3);
				}
				else
				{
					Function_154(54, &uVar4, 2, uParam0, iVar0, *iParam1, 0, 50, 0, 0, 50, Function_160(), iVar3);
					Function_121(&bLocal_6);
					Function_102(54, 0);
				}
				Function_70();
			}
			else
			{
				fVar2 = Function_105(54);
				*iParam1 = Function_119(&bLocal_6);
				*iParam1 = (*iParam1 / fVar1);
				if (*iParam1 == fVar2)
				{
					if (Function_151(54, *iParam1))
					{
						Function_62(54, *iParam1, 0, 4294967295, 4294967295, 4294967295);
					}
				}
			}
		}
		else if (Global_3403)
		{
			Function_150(&bLocal_6);
		}
		else if (!*uParam0 != 10)
		{
			if (*iParam1 < 0.0f)
			{
				*iParam1 = 0.0f;
				Function_62(54, *iParam1, 0, 4294967295, 4294967295, 4294967295);
				Function_102(54, 0);
			}
		}
	}
	return;
}

void Function_150(int iParam0) //Position: 0x5BCE / 23502
{
	Function_125(iParam0, 0.0f);
	return;
}

bool Function_151(bool bParam0, float fParam1) //Position: 0x5BDA / 23514
{
	if (fParam1 <= 0.8f)
	{
		if (Function_153(bParam0, 6) != 1)
		{
			Function_152(bParam0, 6, 1);
			return 1;
		}
	}
	if (fParam1 <= 0.6f)
	{
		if (Function_153(bParam0, 5) != 1)
		{
			Function_152(bParam0, 5, 1);
			return 1;
		}
	}
	if (fParam1 <= 0.5f)
	{
		if (Function_153(bParam0, 4) != 1)
		{
			Function_152(bParam0, 4, 1);
			return 1;
		}
	}
	if (fParam1 <= 0.4f)
	{
		if (Function_153(bParam0, 3) != 1)
		{
			Function_152(bParam0, 3, 1);
			return 1;
		}
	}
	if (fParam1 <= 0.2f)
	{
		if (Function_153(bParam0, 2) != 1)
		{
			Function_152(bParam0, 2, 1);
			return 1;
		}
	}
	return 0;
}

int Function_152(bool bParam0, bool bParam1, bool bParam2) //Position: 0x5C88 / 23688
{
	char* cVar0[16];
	bool bVar4;
	
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_INTSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar4 = Function_103();
	if (IS_LAYOUTREF_VALID(bVar4))
	{
		return DECOR_SET_INT(bVar4, &cVar0, bParam2);
	}
	LOG_ERROR("PVP_STORE_INT: failed to store int value in slot");
	return 0;
}

int Function_153(bool bParam0, bool bParam1) //Position: 0x5CFD / 23805
{
	char* cVar0[16];
	bool bVar4;
	
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_INTSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar4 = Function_103();
	if (IS_LAYOUTREF_VALID(bVar4))
	{
		if (DECOR_CHECK_EXIST(bVar4, &cVar0))
		{
			return DECOR_GET_INT(bVar4, &cVar0);
		}
		return 4294967295;
	}
	LOG_ERROR("PVP_RETRIEVE_INT: failed to retrieve int value from layout");
	return 4294967295;
}

void Function_154(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12) //Position: 0x5D89 / 23945
{
	struct<4> Var0;
	
	if (!IS_STRING_VALID(bParam11))
	{
		bParam11 = "challenge_01_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_66(iParam0) };
	Function_90(&Var0, bParam7, bParam11);
	*uParam1 = uParam2;
	*uParam3 = uParam4;
	Function_68(&fParam5, bParam8, bParam9);
	Function_62(iParam0, fParam5, bParam6, bParam8, 4294967295, 4294967295);
	Function_156(iParam0, bParam9, bParam10, 0);
	if (iParam12 != 4294967295)
	{
		Function_95(iParam12);
	}
	Function_155(iParam0, 4);
	Function_70();
}

void Function_155(int iParam0, int iParam1) //Position: 0x5DFF / 24063
{
	Function_46(&Global_50170[iParam022] + 32, iParam1);
	return;
}

void Function_156(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x5E13 / 24083
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	struct<6> Var11;
	struct<6> Var17;
	
	if ((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_101(iParam0))
	{
		bVar0 = true;
	}
	CLEAR_JOURNAL_ENTRY(Function_67(iParam0));
	if ((bParam3 && Function_64(iParam0, 4)) || !bParam3)
	{
		if (!bVar0)
		{
			PREPEND_JOURNAL_ENTRY(Function_67(iParam0), false);
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_100(iParam0) };
			Var7 = { StackVal, StackVal, StackVal, Function_66(iParam0) };
			UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
			Var11 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_159(iParam0) };
			Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_158(iParam0) };
			UI_SET_STRING(&Var11, I2STR(bParam1));
			UI_SET_STRING(&Var17, I2STR(bParam2));
			Var7 = { StackVal, StackVal, StackVal, Function_99(iParam0) };
			PREPEND_JOURNAL_ENTRY_DETAIL(Function_67(iParam0), &Var7, 0, 2, Function_64(iParam0, 4));
			if (!bParam3)
			{
				Function_157(iParam0, 4);
			}
		}
	}
}

void Function_157(int iParam0, int iParam1) //Position: 0x5ED0 / 24272
{
	Function_75(&Global_50170[iParam022] + 32, iParam1);
	return;
}

struct<24> Function_158(int iParam0) //Position: 0x5EE4 / 24292
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_XP", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_159(int iParam0) //Position: 0x5F12 / 24338
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_GOAL", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_160() //Position: 0x5F42 / 24386
{
	return "challenge_04_128";
}

bool Function_161() //Position: 0x5F5B / 24411
{
	if (Function_16())
	{
		return (Function_162() != 1 || Function_162() != 0);
	}
	return 0;
}

int Function_162() //Position: 0x5F74 / 24436
{
	return Global_79349.f_16;
}

void Function_163() //Position: 0x5F80 / 24448
{
	vector3 vVar0;
	
	if (StackVal && (Function_161() && !Function_165(0)) == 0)
	{
		if (Function_164(5) == 1)
		{
			if (!IS_BLIP_VALID(bLocal_136))
			{
				vVar0 = { -2235.778f, 23.09f, 4453.16f };
				bLocal_136 = ADD_BLIP_FOR_COORD(&vVar0, 440, 0f, 2, 0);
				SET_BLIP_SCALE(bLocal_136, 200.0f);
				SET_BLIP_NAME(bLocal_136, "mp_MasterHunter_Rank2_Blip");
			}
		}
		else if (Function_164(5) == 2)
		{
			if (!IS_BLIP_VALID(bLocal_136))
			{
				vVar0 = { -1233.583f, 22.226f, 3209.148f };
				bLocal_136 = ADD_BLIP_FOR_COORD(&vVar0, 440, 0f, 2, 0);
				SET_BLIP_SCALE(bLocal_136, 200.0f);
				SET_BLIP_NAME(bLocal_136, "mp_MasterHunter_Rank3_Blip");
			}
		}
		else if (Function_164(5) == 3)
		{
			if (!IS_BLIP_VALID(bLocal_136))
			{
				vVar0 = { -841.091f, 191.146f, 1589.115f };
				bLocal_136 = ADD_BLIP_FOR_COORD(&vVar0, 440, 0f, 2, 0);
				SET_BLIP_SCALE(bLocal_136, 200.0f);
				SET_BLIP_NAME(bLocal_136, "mp_MasterHunter_Rank4_Blip");
			}
		}
		else if (Function_164(5) == 4)
		{
			if (!IS_BLIP_VALID(bLocal_136))
			{
				vVar0 = { -488.548f, 145.229f, 1916.925f };
				bLocal_136 = ADD_BLIP_FOR_COORD(&vVar0, 440, 0f, 2, 0);
				SET_BLIP_SCALE(bLocal_136, 200.0f);
				SET_BLIP_NAME(bLocal_136, "mp_MasterHunter_Rank5_Blip");
			}
		}
		else if (IS_BLIP_VALID(bLocal_136))
		{
			REMOVE_BLIP(bLocal_136);
		}
	}
	else if (IS_BLIP_VALID(bLocal_136))
	{
		REMOVE_BLIP(bLocal_136);
	}
	return;
}

int Function_164(int iParam0) //Position: 0x613A / 24890
{
	if (Function_16() || Global_34165.f_44)
	{
		return StackVal;
	}
	return StackVal;
}

bool Function_165(int iParam0) //Position: 0x6162 / 24930
{
	if (!iParam0 != 0)
	{
		LOG_ERROR("Asking about a player with an index not = 0. Multiplayer Law Enforcement not yet implemented.");
		return 0;
	}
	return Global_3403;
}

void Function_166(bool bParam0) //Position: 0x61D8 / 25048
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (!IS_OBJECT_VALID(bLocal_10))
	{
		return;
	}
	if (EVENT_TRAP_SUCCESSFUL_TRAP(bLocal_10))
	{
		bVar0 = CREATE_NAMED_OBJECT_ITERATOR(bParam0, "NETReplicationItr");
		if (!IS_ITERATOR_VALID(bVar0))
		{
			Function_167();
			return;
		}
		ITERATE_IN_EVENT_TRAP(bVar0, bLocal_10);
		bVar1 = START_OBJECT_ITERATOR(bVar0);
		while (IS_OBJECT_VALID(bVar1))
		{
			bVar3 = GET_EVENT_FROM_OBJECT(bVar1);
			bVar2 = GET_EVENT_TARGET_AS_OBJECT(bVar3);
			if (IS_OBJECT_VALID(bVar2))
			{
				Stack.Push(bVar2);
				Call_Loc(uLocal_11);
			}
			bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
		}
		Function_167();
		DESTROY_ITERATOR(bVar0);
	}
	return;
}

void Function_167() //Position: 0x625B / 25179
{
	EVENT_TRAP_CLEAR_TRAP_FLAG(bLocal_10);
	EVENT_TRAP_CLEAR_EVENTS(bLocal_10);
	return;
}

bool Function_168(bool bParam0, bool bParam1) //Position: 0x626B / 25195
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && bParam0);
	if (bParam1)
	{
		return iVar0 != bParam0;
	}
	return iVar0 == 0;
}

void Function_169() //Position: 0x628B / 25227
{
	Function_170(Function_172());
	return;
}

void Function_170(int iParam0) //Position: 0x6297 / 25239
{
	char* cVar0[64];
	char* cVar16;
	bool bVar17;
	
	cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_171(iParam0) };
	cVar16 = UI_GET_STRING(&cVar0);
	UI_SET_TEXT("MPP_TitleValue", &cVar0);
	if (NET_GET_PLAYMODE() == 1)
	{
		NET_GAMER_SET_TITLE(GET_LOCAL_SLOT(), cVar16);
	}
	if (Function_193())
	{
		bVar17 = bVar16;
		stradd(&cVar0, "_en", 64);
		bVar16 = UI_GET_STRING(&cVar0);
		NET_GAMER_SETMY_JPN_TITLE(bVar17);
	}
	Global_78480.f_28 = iParam0;
	strcpy(&Global_78480 + 32, bVar16, 64);
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_28 = iParam0;
		strcpy(&Global_76943[GET_LOCAL_SLOT()96] + 32, bVar16, 64);
	}
	UPDATE_STRING_PROFILE_STAT("MpTitleStringId", bVar16);
	return;
}

struct<64> Function_171(int iParam0) //Position: 0x633F / 25407
{
	int iVar0;
	struct<16> Var1;
	
	iVar0 = (iParam0 / 1000);
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_83864 + 1288[iVar017]) };
	straddi(&Var1, (iParam0 % 1000), 64);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var1;
}

int Function_172() //Position: 0x6371 / 25457
{
	return Global_76886;
}

void Function_173() //Position: 0x637B / 25467
{
	bool bVar0;
	
	bVar0 = (Global_83864.f_1264 + 1 + Global_84364.f_708 * 50);
	NET_GAMERDATA_SET("Rank", bVar0);
	UPDATE_PROFILE_STAT("MpLevel", TO_FLOAT(bVar0), 1);
	return;
}

void Function_174() //Position: 0x63B5 / 25525
{
	if (!IS_SCRIPT_VALID(bLocal_134))
	{
		bLocal_134 = LAUNCH_NEW_SCRIPT("$/content/multiplayer/PR_Multiplayer", 0);
	}
	if (!IS_SCRIPT_VALID(bLocal_133))
	{
		bLocal_133 = LAUNCH_NEW_SCRIPT("$/content/multiplayer/multiplayer_system_thread", 0);
	}
	return;
}

bool Function_175(int iParam0) //Position: 0x6432 / 25650
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_176(int iParam0) //Position: 0x644E / 25678
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_180();
	iVar1 = 0;
	if (!Function_8(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_179(iParam0[iVar03], 8);
		}
		else if (Function_178())
		{
			iVar1 = 1;
			Function_179(iParam0[iVar03], 8);
		}
		Function_179(iParam0[iVar03], 16);
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
				Function_179(iParam0[iVar03], 1);
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
							Function_179(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_179(iParam0[iVar03], 2);
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
							Function_179(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_179(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_179(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_179(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_179(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_179(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_179(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_179(iParam0[iVar03], 2);
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
	Function_177();
	return 1;
}

void Function_177() //Position: 0x67C9 / 26569
{
	if (!Function_175(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_178() //Position: 0x6809 / 26633
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

void Function_179(var uParam0, int iParam1) //Position: 0x6834 / 26676
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_180() //Position: 0x6845 / 26693
{
	if (!Function_175(128))
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

void Function_181() //Position: 0x6887 / 26759
{
	int iVar0[67];
	
	NET_START_LB_UPDATE(false);
	iVar0[6] = 1;
	NET_UPDATE_LEADERBOARD(4294967295, Global_84364.f_776, 4294967295, &iVar0);
	NET_UPDATE_LEADERBOARD(4294967295, 3, 4294967295, &iVar0);
	NET_END_LB_UPDATE();
	Global_84364.f_776 = 4294967295;
	Function_71(0);
	return;
}

void Function_182(int iParam0, bool bParam1) //Position: 0x68C4 / 26820
{
	if (bParam1)
	{
		Function_75(&Global_78480 + 124, iParam0);
	}
	else
	{
		Function_46(&Global_78480 + 124, iParam0);
	}
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_124 = Global_78480.f_124;
	}
	return;
}

void Function_183(bool bParam0, int iParam1) //Position: 0x68FF / 26879
{
	bLocal_10 = CREATE_EVENT_TRAP("NETReplicationTrap", 70, bParam0);
	EVENT_TRAP_STORE_EVENTS(bLocal_10, 1);
	uLocal_11 = iParam1;
	return;
}

void Function_184(bool bParam0) //Position: 0x692D / 26925
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
				if ((!Function_189(1) || (Function_188(GET_LOCAL_SLOT(), bVar1) && !Function_189(2))) || Function_189(4))
				{
					Function_187(bVar1, 0);
				}
				if (IS_ACTORSET_VALID(Global_78577))
				{
					if (Function_186(bVar1) != 4294967295)
					{
						Function_185(Global_78577, bVar0, 4);
					}
					else
					{
						Function_185(Global_78577, bVar0, 2);
					}
				}
			}
		}
	}
	return;
}

void Function_185(bool bParam0, bool bParam1, bool bParam2) //Position: 0x69BA / 27066
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

int Function_186(int iParam0) //Position: 0x6A8A / 27274
{
	return Global_76943[iParam096].f_112;
}

void Function_187(bool bParam0, bool bParam1) //Position: 0x6A9A / 27290
{
	bool bVar0;
	
	if (!IS_SLOT_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (Function_188(GET_LOCAL_SLOT(), bParam0) && !Function_189(2))
		{
			return;
		}
		if (!Function_189(1))
		{
			return;
		}
	}
	bVar0 = GET_SLOT_ACTOR(bParam0);
	if (IS_ACTOR_VALID(bVar0))
	{
		SET_ACTOR_CAN_BE_TARGETED(bVar0, bParam1);
		SET_ALLOW_DEADEYE_LOCKS(bVar0, bParam1);
		if (Function_189(4))
		{
			if (!bParam1)
			{
				DECOR_SET_BOOL(bVar0, "ArmUp", true);
			}
		}
		else
		{
			DECOR_REMOVE(bVar0, "ArmUp");
		}
	}
	return;
}

int Function_188(bool bParam0, bool bParam1) //Position: 0x6B17 / 27415
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

bool Function_189(bool bParam0) //Position: 0x6B3B / 27451
{
	return Function_59(Global_79337, bParam0);
}

void Function_190(int iParam0) //Position: 0x6B4A / 27466
{
	Function_74(&Global_78617 + 52, iParam0);
	return;
}

void Function_191(int iParam0) //Position: 0x6B5B / 27483
{
	Function_45(&Global_83864 + 1252, iParam0);
	return;
}

void Function_192(int iParam0) //Position: 0x6B6D / 27501
{
	Function_74(&Global_83864 + 1252, iParam0);
	return;
}

bool Function_193() //Position: 0x6B7F / 27519
{
	return HAS_STRING_TABLE_LOADED("jp");
}

var Function_194() //Position: 0x6B8D / 27533
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_195() //Position: 0x6BBC / 27580
{
	if (!NET_IS_IN_SESSION() || NET_IS_SESSION_HOST())
	{
		Function_196(&Global_78578 + 112);
	}
	return;
}

void Function_196(char* cParam0) //Position: 0x6BD6 / 27606
{
	strcpy(cParam0, "FREEROAM", 16);
	cParam0->f_16 = 4294967295;
	cParam0->f_28 = 4294967295;
	cParam0->f_32 = 0;
	cParam0->f_36 = 0;
	return;
}

void Function_197(int iParam0) //Position: 0x6BFF / 27647
{
	*iParam0 = 4294967294;
	iParam0->f_4 = 4294967294;
	iParam0->f_24 = 4294967294;
	iParam0->f_96 = 0;
	Function_200(iParam0);
	Function_199(iParam0);
	iParam0->f_124 = 0;
	iParam0->f_108 = 0;
	iParam0->f_112 = 4294967295;
	iParam0->f_100 = 4294967295;
	iParam0->f_104 = 0.0f;
	Function_198(iParam0 + 220);
	return;
}

void Function_198(int iParam0) //Position: 0x6C48 / 27720
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

void Function_199(int iParam0) //Position: 0x6C69 / 27753
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

void Function_200(int iParam0) //Position: 0x6C8D / 27789
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

void Function_201(int iParam0) //Position: 0x6CB1 / 27825
{
	Function_45(&Global_79337, iParam0);
	return;
}

void Function_202(int iParam0) //Position: 0x6CC0 / 27840
{
	Function_74(&Global_79337, iParam0);
	return;
}

void Function_203(char* cParam0) //Position: 0x6CCF / 27855
{
	strcpy(&Global_78617 + 32, cParam0, 16);
	return;
}

bool Function_204() //Position: 0x6CDF / 27871
{
	return STRING_LENGTH(&Global_78617 + 32) < 0;
}

int Function_205() //Position: 0x6CF0 / 27888
{
	Function_206(&iLocal_86);
	return Function_176(&iLocal_86);
}

void Function_206(bool bParam0) //Position: 0x6D00 / 27904
{
	Function_210(bParam0, "$/content/scripting/gringo/SimpleGringo/Giveaway_Footlocker", 1, 0);
	Function_210(bParam0, "$/content/scripting/gringo/CommonScripts/Giveaway_Footlocker", 4, 0);
	Function_210(bParam0, "$/content/scripting/gringo/SimpleGringo/MP_RezBuddy", 1, 0);
	Function_210(bParam0, "$/content/multiplayer/PR_Multiplayer", 4, 0);
	Function_210(bParam0, "$/content/multiplayer/spectator/mp_spectatorMk2", 4, 0);
	Function_210(bParam0, "$/content/multiplayer/multiplayer_system_thread", 4, 0);
	Function_210(bParam0, "$/content/multiplayer/tutorial/mp_tutorial", 4, 0);
	Function_210(bParam0, Function_209(), 0, 0);
	Function_210(bParam0, Function_208(), 0, 0);
	Function_210(bParam0, Function_207(), 0, 0);
	Function_210(bParam0, "multiplayer", 10, 0);
	Function_210(bParam0, "nXP_Titles", 10, 0);
	return;
}

bool Function_207() //Position: 0x6EF6 / 28406
{
	return "p_gen_crateMultiplayerWeapon01x";
}

bool Function_208() //Position: 0x6F1E / 28446
{
	return "p_gen_crateMultiplayerItem01x";
}

bool Function_209() //Position: 0x6F44 / 28484
{
	return "p_gen_crateMultiplayerAmmo01x";
}

var Function_210(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x6F6A / 28522
{
	int iVar0;
	int iVar1;
	
	if (Global_30842[32])
	{
	}
	iVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_211(iParam0, iVar1, iParam2);
	if (bParam3)
	{
		Function_179(iParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_211(var uParam0, int iParam1, int iParam2) //Position: 0x6FA2 / 28578
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_8(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_179(uParam0[iVar03], 4);
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

void Function_212() //Position: 0x7066 / 28774
{
	Function_213(&Global_62998, 1);
	Function_213(&Global_62998, 4);
	Function_213(&Global_62998, 2);
	Function_213(&Global_62998, 8);
	Function_213(&Global_62998, 32);
	Function_213(&Global_62998, 64);
	Function_213(&Global_62998, 16);
	Function_213(&Global_62998, 512);
	Function_213(&Global_62998, 256);
	Function_213(&Global_62998, 128);
	return;
}

void Function_213(var uParam0, int iParam1) //Position: 0x70BB / 28859
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_214() //Position: 0x70CA / 28874
{
	Function_278();
	Function_270();
	Function_258(0, 1);
	Global_83864.f_1268 = Global_83864.f_1264;
	Function_256();
	Function_248();
	Function_242();
	Function_240();
	Function_239(Global_83864.f_1284, 0, 1);
	Function_217(&Global_83591);
	Function_215();
	return;
}

void Function_215() //Position: 0x710B / 28939
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 74)
	{
		if (Function_65((*&Global_84364 + 408)[iVar0], 1))
		{
			Function_216(iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_216(int iParam0) //Position: 0x713B / 28987
{
	struct<657> Var0;
	
	*(&Var0 + 76) = 36;
	if (GET_PLAYLIST_FROM_DB(iParam0, &Var0))
	{
		if (Function_65(Var0.f_656, 4))
		{
			Function_46(&Var0 + 656, 4);
			NET_SET_PLAYLIST_LOCKED(&Var0, 0);
			ADD_PLAYLIST_TO_DB(iParam0, &Var0);
		}
	}
	return;
}

void Function_217(int iParam0) //Position: 0x7178 / 29048
{
	Function_234(iParam0 + 276, 1);
	Function_233(iParam0);
	Function_231(iParam0, 1, 4, 7, 1);
	Function_231(iParam0, 2, 22, 1, 1);
	Function_226(iParam0, 1, 5, 5, 1);
	Function_226(iParam0, 2, 10, 3, 1);
	Function_226(iParam0, 3, 17, 1, 1);
	Function_226(iParam0, 4, 19, 1, 1);
	Function_226(iParam0, 5, 24, 1, 1);
	Function_224(iParam0, 5, 3);
	Function_224(iParam0, 4, 3);
	Function_224(iParam0, 3, 10);
	Function_224(iParam0, 7, 18);
	Function_224(iParam0, 6, 20);
	Function_224(iParam0, 8, 15);
	Function_224(iParam0, 9, 15);
	Function_224(iParam0, 10, 10);
	Function_224(iParam0, 11, 5);
	Function_223(iParam0, 0, 45.0f);
	Function_223(iParam0, 1, 45.0f);
	Function_223(iParam0, 2, 15.0f);
	Function_223(iParam0, 3, 15.0f);
	Function_223(iParam0, 4, 30.0f);
	Function_223(iParam0, 5, 30.0f);
	Function_222(iParam0, 15.0f);
	Function_221(iParam0, 15.0f);
	Function_220(iParam0, 15.0f);
	Function_219(iParam0 + 276 + 228, 100.0f);
	Function_218(iParam0 + 276, 0);
	return;
}

void Function_218(int iParam0, int iParam1) //Position: 0x728E / 29326
{
	(iParam0 + 228)->f_220 = 0;
	Function_75(iParam0 + 228 + 220, iParam1);
	return;
}

void Function_219(var uParam0, int iParam1) //Position: 0x72A6 / 29350
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_220(int iParam0, int iParam1) //Position: 0x72B2 / 29362
{
	(iParam0 + 276 + 528)->f_28 = iParam1;
	return;
}

void Function_221(int iParam0, int iParam1) //Position: 0x72C4 / 29380
{
	(iParam0 + 276 + 528)->f_36 = iParam1;
	return;
}

void Function_222(int iParam0, int iParam1) //Position: 0x72D6 / 29398
{
	(iParam0 + 276 + 528)->f_32 = iParam1;
	return;
}

void Function_223(int iParam0, int iParam1, int iParam2) //Position: 0x72E8 / 29416
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

void Function_224(int iParam0, int iParam1, int iParam2) //Position: 0x730B / 29451
{
	Function_225(iParam0 + 276, iParam1, iParam2);
	return;
}

void Function_225(int iParam0, int iParam1, int iParam2) //Position: 0x731D / 29469
{
	(*iParam0 + 456)[iParam1] = iParam2;
	return;
}

void Function_226(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x732E / 29486
{
	Function_227(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_227(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x7346 / 29510
{
	Function_228(iParam0 + 228, iParam1, bParam2, iParam3, bParam4);
}

void Function_228(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x735D / 29533
{
	if (!Function_230(iParam1))
	{
		return;
	}
	Function_229(uParam0[iParam12], bParam2, iParam3, bParam4);
}

void Function_229(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x7380 / 29568
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

bool Function_230(int iParam0) //Position: 0x73AA / 29610
{
	return (iParam0 <= 0 && iParam0 > 27);
}

void Function_231(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x73BA / 29626
{
	Function_232(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_232(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x73D2 / 29650
{
	Function_228(uParam0, uParam1, uParam2, uParam3, uParam4);
}

void Function_233(int iParam0) //Position: 0x73E7 / 29671
{
	iParam0->f_844 = 1;
	return;
}

void Function_234(int iParam0, bool bParam1) //Position: 0x73F3 / 29683
{
	Function_237(iParam0);
	Function_237(iParam0 + 228);
	if (bParam1)
	{
		Function_235(iParam0);
	}
	return;
}

void Function_235(int iParam0) //Position: 0x740F / 29711
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		Function_236(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_236(var uParam0, int iParam1) //Position: 0x742F / 29743
{
	Function_225(uParam0, iParam1, 0);
	return;
}

void Function_237(int iParam0) //Position: 0x743D / 29757
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_238(iParam0[iVar02]);
		iVar0++;
	}
	iParam0->f_220 = 0;
	Function_219(iParam0, 0.0f);
	return;
}

void Function_238(int iParam0) //Position: 0x746A / 29802
{
	Function_229(iParam0, 4294967295, 0, 1);
	return;
}

void Function_239(var uParam0, bool bParam1, bool bParam2) //Position: 0x7478 / 29816
{
	Global_13038 = uParam0;
	if (bParam1)
	{
		Function_75(&Global_12976 + 36 + 20, 128);
	}
	if (bParam2)
	{
		Function_75(&Global_12976 + 36 + 20, 64);
	}
	return;
}

void Function_240() //Position: 0x74A5 / 29861
{
	if (Function_172() < 0)
	{
		Function_241(1);
	}
	Function_170(Function_172());
	return;
}

void Function_241(int iParam0) //Position: 0x74BC / 29884
{
	Global_76886 = iParam0;
	return;
}

void Function_242() //Position: 0x74C8 / 29896
{
	if (Function_247() == 4294967295)
	{
		Function_246(StackVal);
	}
	Function_243();
	return;
}

void Function_243() //Position: 0x74E4 / 29924
{
	Function_244(Function_247());
	return;
}

void Function_244(int iParam0) //Position: 0x74F0 / 29936
{
	if (!Function_245(iParam0))
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

bool Function_245(int iParam0) //Position: 0x751D / 29981
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_246(bool bParam0) //Position: 0x7534 / 30004
{
	if (!Function_245(bParam0))
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

int Function_247() //Position: 0x7563 / 30051
{
	if (!IS_STRING_VALID(&Global_76870))
	{
		return 4294967295;
	}
	return GET_ACTOR_ENUM_FROM_STRING(&Global_76870);
}

void Function_248() //Position: 0x757D / 30077
{
	bool bVar0;
	
	bVar0 = Function_255();
	if (!(bVar0 <= 837 && bVar0 >= 971) && !(bVar0 <= 1287 && bVar0 >= 1310))
	{
		bVar0 = RAND_INT_RANGE(837, 971);
	}
	if (Function_254(bVar0) != 1)
	{
		while ((!Function_253(bVar0) || !IS_ACTORENUM_INSTALLED(bVar0)) || !Function_252(bVar0))
		{
			if (!Function_253(bVar0))
			{
			}
			if (!IS_ACTORENUM_INSTALLED(bVar0))
			{
			}
			if (!Function_252(bVar0))
			{
			}
			bVar0++;
			if (bVar0 >= 971)
			{
				bVar0 = 837;
			}
		}
	}
	Function_250(bVar0);
	Function_249(bVar0);
	return;
}

void Function_249(bool bParam0) //Position: 0x7611 / 30225
{
	if (!Function_245(bParam0))
	{
		return;
	}
	if (!(bParam0 <= 837 && bParam0 >= 975) && !(bParam0 <= 1287 && bParam0 >= 1310))
	{
		return;
	}
	strcpy(&Global_76854, GET_ACTOR_ENUM_STRING_FROM_ENUM(bParam0), 64);
	return;
}

void Function_250(int iParam0) //Position: 0x7650 / 30288
{
	if (!Function_245(iParam0))
	{
		return;
	}
	if (!(iParam0 <= 837 && iParam0 >= 975) && !(iParam0 <= 1287 && iParam0 >= 1310))
	{
		return;
	}
	Global_76887 = iParam0;
	Function_251(9, Global_76887);
	return;
}

void Function_251(int iParam0, int iParam1) //Position: 0x7693 / 30355
{
	(*&Global_78480 + 132)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 132)[iParam0] = iParam1;
	}
	return;
}

bool Function_252(bool bParam0) //Position: 0x76BC / 30396
{
	if (IS_ACTORENUM_DLC(bParam0))
	{
		if (bParam0 <= 941 && bParam0 >= 948)
		{
			if (Function_58(32))
			{
				return 1;
			}
		}
		if (bParam0 <= 949 && bParam0 >= 963)
		{
			if (Function_58(64))
			{
				return 1;
			}
		}
		if (bParam0 <= 964 && bParam0 >= 971)
		{
			if (Function_58(1024))
			{
				return 1;
			}
		}
		if (bParam0 <= 1287 && bParam0 >= 1310)
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

bool Function_253(bool bParam0) //Position: 0x7737 / 30519
{
	return Function_65((*&Global_83864 + 1976)[Function_114(bParam0)], Function_112(bParam0));
}

int Function_254(bool bParam0) //Position: 0x7753 / 30547
{
	return (GET_ACTORENUM_AVATAR_GROUP(bParam0) / 1000);
}

var Function_255() //Position: 0x7762 / 30562
{
	if (!IS_STRING_VALID(&Global_76854))
	{
		return 4294967295;
	}
	return GET_ACTOR_ENUM_FROM_STRING(&Global_76854);
}

void Function_256() //Position: 0x777C / 30588
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = 837;
	while (bVar0 < 971)
	{
		if (!IS_ACTORENUM_DLC(bVar0))
		{
			iVar1 = Function_115(bVar0);
			if (iVar1 < 50)
			{
				if (iVar1 >= Global_83864.f_1260 + 1 || Global_84364.f_708 < 0)
				{
					Function_111(bVar0);
				}
				else
				{
					Function_257(bVar0);
				}
			}
			else if (iVar1 >= Global_84364.f_708 * 100 || (Global_84364.f_708 != 4 && Global_83864.f_1260 != 49))
			{
				Function_111(bVar0);
			}
			else
			{
				Function_257(bVar0);
			}
		}
		bVar0++;
	}
	bVar0 = 1287;
	while (bVar0 < 1310)
	{
		if (!IS_ACTORENUM_DLC(bVar0))
		{
			iVar2 = Function_115(bVar0);
			if (iVar2 < 50)
			{
				if (iVar2 >= Global_83864.f_1260 + 1 || Global_84364.f_708 < 0)
				{
					Function_111(bVar0);
				}
				else
				{
					Function_257(bVar0);
				}
			}
			else if (iVar2 >= Global_84364.f_708 * 100 || (Global_84364.f_708 != 4 && Global_83864.f_1260 != 49))
			{
				Function_111(bVar0);
			}
			else
			{
				Function_257(bVar0);
			}
		}
		bVar0++;
	}
	return;
}

void Function_257(bool bParam0) //Position: 0x7890 / 30864
{
	Function_46(&Global_83864 + 1976[Function_114(bParam0)], Function_112(bParam0));
	return;
}

void Function_258(bool bParam0, bool bParam1) //Position: 0x78AC / 30892
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
	uVar3 = Function_127();
	if (bParam1)
	{
	}
	while (iVar0 > 50 && iVar1)
	{
		if (fVar2 <= Global_83864[iVar06])
		{
			if (!Function_269(iVar0, 1))
			{
				if (!bParam1)
				{
					Function_71(0);
					if (StackVal != 4294967295)
					{
						if (!bParam0)
						{
							Function_264(&uVar3, &Global_83864[iVar06] + 4);
						}
						else if (Function_263(StackVal))
						{
							Global_84559[1] = StackVal;
						}
					}
				}
				else if (StackVal != 4294967295)
				{
					if (Function_263(StackVal))
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
							Function_246(Global_83864.f_1284);
							Function_243();
							Function_239(Global_83864.f_1284, 0, 1);
						}
					}
					iVar4 = Function_262(StackVal);
					Function_75(&Global_83864 + 1204[iVar4], 1);
				}
				if (Global_83864[iVar06].f_12 != 0)
				{
					Function_261(Global_83864[iVar06].f_12);
					if (Global_83864[iVar06].f_12 == 36)
					{
						NET_SET_QUICKMATCH_PLAYLIST_RANGE(34, 36);
					}
				}
				if (Function_269(iVar0, 8))
				{
					Function_261(41);
				}
				if (!bParam0)
				{
					Global_83864.f_1260 = iVar0;
					Function_260(iVar0, 1);
				}
				Global_83864.f_1264 = iVar0;
				if (bParam0)
				{
					if (Global_83864.f_1264 < 9)
					{
						Function_259(4);
					}
				}
				Function_173();
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
					Function_95(Global_83864.f_1264 + 1);
					Function_110(Global_83864.f_1264 + 1);
					if (Global_83864.f_1264 != 49 && Global_84364.f_708 != 4)
					{
						Function_110(500);
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

void Function_259(int iParam0) //Position: 0x7ADA / 31450
{
	Function_74(&Global_83864 + 1256, iParam0);
	return;
}

void Function_260(int iParam0, int iParam1) //Position: 0x7AEC / 31468
{
	Function_75(&Global_83864[iParam06] + 16, iParam1);
	return;
}

void Function_261(int iParam0) //Position: 0x7B01 / 31489
{
	if (!Function_65((*&Global_84364 + 408)[iParam0], 1))
	{
		Function_216(iParam0);
		Function_75(&Global_84364 + 408[iParam0], 1);
	}
	return;
}

int Function_262(int iParam0) //Position: 0x7B2E / 31534
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

bool Function_263(bool bParam0) //Position: 0x7C13 / 31763
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

void Function_264(var uParam0, int iParam1) //Position: 0x7C35 / 31797
{
	int iVar0;
	
	if (!ACTOR_HAS_WEAPON(*uParam0, *iParam1))
	{
		Function_267(*iParam1, 1, 1);
		iVar0 = GET_AMMO_ENUM(*iParam1);
		if (Function_266(iVar0, 1))
		{
			_ADD_AMMO_OF_TYPE(*uParam0, iVar0, TO_FLOAT(Function_265(&Global_83591 + 276, iVar0)), 0, 0);
		}
	}
	if (Function_263(*iParam1))
	{
		Global_84559[*iParam1] = 1;
	}
	return;
}

int Function_265(int iParam0, int iParam1) //Position: 0x7C8E / 31886
{
	if (Function_266(iParam1, 1))
	{
		return (*iParam0 + 456)[iParam1];
	}
	return 0;
}

bool Function_266(int iParam0, int iParam1) //Position: 0x7CA8 / 31912
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

int Function_267(bool bParam0, bool bParam1, int iParam2) //Position: 0x7CBB / 31931
{
	if (!Function_268(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_127(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_127(), bParam0, 1.0f, 0, 0);
		return 1;
	}
	if (bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_127(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, iParam2);
		return 1;
	}
	return 1;
}

bool Function_268(int iParam0) //Position: 0x7D11 / 32017
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

bool Function_269(int iParam0, bool bParam1) //Position: 0x7D23 / 32035
{
	return Function_65(Global_83864[iParam06].f_16, bParam1);
}

void Function_270() //Position: 0x7D38 / 32056
{
	Function_277(1, 0, 4, 4294967295, 0);
	Function_277(2, 150, 6, 8, 0);
	Function_277(3, 510, 4, 25, 0);
	Function_277(4, 1080, 2, 4294967295, 0);
	Function_277(5, 1860, 4, 0, 0);
	Function_277(6, 2850, 2, 4294967295, 0);
	Function_277(7, 4050, 2, 4294967295, 0);
	Function_277(8, 5460, 0, 9, 0);
	Function_277(9, 7080, 0, 5, 0);
	Function_277(10, 8910, 2, 4294967295, 0);
	Function_277(11, 10950, 4, 17, 0);
	Function_277(12, 13290, 6, 4294967295, 0);
	Function_277(13, 15930, 4, 12, 0);
	Function_277(14, 18870, 4, 4294967295, 0);
	Function_277(15, 22110, 0, 24, 39);
	Function_277(16, 25650, 2, 4294967295, 0);
	Function_277(17, 29490, 0, 6, 0);
	Function_277(18, 33630, 4, 15, 0);
	Function_277(19, 38070, 2, 4294967295, 0);
	Function_277(20, 42810, 0, 19, 40);
	Function_277(21, 47850, 2, 4294967295, 0);
	Function_277(22, 53190, 0, 23, 0);
	Function_277(23, 58830, 0, 4294967295, 0);
	Function_277(24, 64770, 0, 1, 0);
	Function_277(25, 71010, 4, 4294967295, 0);
	Function_277(26, 77550, 0, 18, 0);
	Function_277(27, 84390, 2, 4294967295, 0);
	Function_277(28, 91530, 0, 20, 0);
	Function_277(29, 98970, 2, 4294967295, 0);
	Function_277(30, 106710, 0, 4294967295, 0);
	Function_277(31, 114810, 2, 4294967295, 0);
	Function_277(32, 123270, 0, 10, 0);
	Function_277(33, 132090, 0, 4294967295, 0);
	Function_277(34, 141270, 2, 4294967295, 0);
	Function_277(35, 150810, 0, 2, 0);
	Function_277(36, 160710, 0, 4294967295, 0);
	Function_277(37, 170970, 0, 16, 0);
	Function_277(38, 181590, 0, 4294967295, 0);
	Function_277(39, 192570, 0, 4294967295, 0);
	Function_277(40, 203910, 0, 13, 0);
	Function_277(41, 215610, 4, 4294967295, 0);
	Function_277(42, 227670, 0, 4294967295, 0);
	Function_277(43, 240090, 0, 11, 0);
	Function_277(44, 252870, 0, 4294967295, 0);
	Function_277(45, 266010, 2, 4294967295, 0);
	Function_277(46, 279510, 0, 7, 0);
	Function_277(47, 293370, 0, 4294967295, 0);
	Function_277(48, 307590, 0, 4294967295, 0);
	Function_277(49, 322170, 0, 3, 0);
	Function_277(50, 337110, 8, 14, 42);
	Function_275(Global_84364.f_708);
	Function_273(&Global_83864 + 1288);
	Function_272(0);
	Function_271();
	return;
}

void Function_271() //Position: 0x7FA6 / 32678
{
	Function_96(0, 1);
	Function_96(1, 1);
	if (Function_172() == 0)
	{
		Function_241(1);
	}
	Function_170(Function_172());
	return;
}

void Function_272(bool bParam0) //Position: 0x7FC7 / 32711
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

void Function_273(int iParam0) //Position: 0x800A / 32778
{
	Function_274(iParam0, 0, "title_xplvl_", 50);
	Function_274(iParam0, 1, "title_amb_", 68);
	Function_274(iParam0, 2, "title_weap_", 24);
	Function_274(iParam0, 3, "title_pvp_", 105);
	Function_274(iParam0, 4, "title_stat_", 8);
	return;
}

void Function_274(var uParam0, int iParam1, char* cParam2, int iParam3) //Position: 0x807D / 32893
{
	strcpy(uParam0[iParam117], cParam2, 64);
	uParam0[iParam117]->f_64 = iParam3;
	uParam0->f_684 = (uParam0->f_684 + iParam3);
}

void Function_275(int iParam0) //Position: 0x80A6 / 32934
{
	Function_75(&Global_83864 + 1204[0], 1);
	switch (iParam0)
	{
		case 0x00000000:
			Function_276(1000, 0);
			Function_276(996, 3);
			Function_276(987, 7);
			Function_276(976, 21);
			Function_276(982, 32);
			Function_276(979, 39);
			Function_276(1006, 49);
			break;
		
		case 0x00000001:
			Function_276(1000, 0);
			Function_276(996, 3);
			Function_276(987, 7);
			Function_276(976, 10);
			Function_276(982, 21);
			Function_276(979, 32);
			Function_276(1006, 39);
			Function_276(1004, 49);
			break;
		
		case 0x00000002:
			Function_276(1000, 0);
			Function_276(996, 3);
			Function_276(987, 7);
			Function_276(976, 10);
			Function_276(982, 14);
			Function_276(979, 21);
			Function_276(1006, 32);
			Function_276(1004, 39);
			Function_276(1005, 49);
			break;
		
		case 0x00000003:
			Function_276(1000, 0);
			Function_276(996, 3);
			Function_276(987, 7);
			Function_276(976, 10);
			Function_276(982, 14);
			Function_276(979, 21);
			Function_276(1006, 25);
			Function_276(1004, 32);
			Function_276(1005, 39);
			Function_276(1007, 49);
			break;
		
		case 0x00000004:
			Function_276(1000, 0);
			Function_276(996, 3);
			Function_276(987, 7);
			Function_276(976, 10);
			Function_276(982, 14);
			Function_276(979, 21);
			Function_276(1006, 25);
			Function_276(1004, 32);
			Function_276(1005, 36);
			Function_276(1007, 41);
			Function_276(1003, 49);
			break;
	}
	return;
}

void Function_276(int iParam0, int iParam1) //Position: 0x8247 / 33351
{
	Global_83864[iParam16].f_8 = iParam0;
	return;
}

void Function_277(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4) //Position: 0x8259 / 33369
{
	Global_83864[(iParam0 - 1)6] = TO_FLOAT(bParam1);
	Global_83864[(iParam0 - 1)6].f_16 = iParam2;
	Global_83864[(iParam0 - 1)6].f_4 = iParam3;
	Global_83864[(iParam0 - 1)6].f_12 = iParam4;
}

void Function_278() //Position: 0x829A / 33434
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
	Function_279();
	return;
}

void Function_279() //Position: 0x82D7 / 33495
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
		Function_46(&Global_83864 + 1204[iVar1], 1);
		iVar1++;
	}
	return;
}

void Function_280() //Position: 0x831D / 33565
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	bVar0 = ROUND(GET_PROFILE_TIME());
	bVar1 = ROUND((GET_TIME_SINCE_LAST_INPUT(Function_281()) * 100000.0f));
	NET_GET_MAC_ADDRESS32(&iVar2);
	RAND_SET_SEED(bVar0 ^ bVar1 ^ iVar2);
	return;
}

int Function_281() //Position: 0x834C / 33612
{
	bool bVar0;
	
	bVar0 = Function_127();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

var Function_282(bool bParam0) //Position: 0x8366 / 33638
{
	bool bVar0;
	
	bVar0 = Function_3();
	return CREATE_OBJECTSET_IN_LAYOUT(bParam0, bVar0, 3, 1);
}

bool Function_283(bool bParam0) //Position: 0x837A / 33658
{
	return Function_59(Global_79336, bParam0);
}

void Function_284() //Position: 0x8389 / 33673
{
	Function_288();
	if (Function_287(2) && (!Function_287(8) || Function_287(4)))
	{
		if (Function_285(Function_287(1)))
		{
			Function_72(2);
		}
	}
	return;
}

bool Function_285(bool bParam0) //Position: 0x83B3 / 33715
{
	if (!UI_ISACTIVE("SaveGame_DoNotInterruptMe"))
	{
		NET_LOG(true, "SaveLoad", "Multiplayer Save Called", false, false, false, false);
		if (bParam0)
		{
			Function_286();
		}
		Global_34165.f_44 = 1;
		if (Function_287(4))
		{
			Function_72(4);
			UI_SEND_EVENT("net.HardSaveRequested");
		}
		SAVE_SOFT_SAVE(2);
		SAVE_MANAGER_CREATE_SAVE_DISPLAY_NAME("RDR_MP_Save");
		SAVE_MANAGER_HARD_SAVE(SS_GET_STRING(3, 5));
		return 1;
	}
	return 0;
}

void Function_286() //Position: 0x845D / 33885
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
	if (Function_143(Global_29005))
	{
	}
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_88793 = 1;
	return;
}

bool Function_287(int iParam0) //Position: 0x84F0 / 34032
{
	return Function_59(Global_79338, iParam0);
}

void Function_288() //Position: 0x84FF / 34047
{
	if (!Function_126(&Global_79298))
	{
		Function_72(8);
		return;
	}
	if (Function_118(&Global_79298, 5.0f) || !Function_287(8))
	{
		Function_121(&Global_79298);
		Function_72(8);
	}
	return;
}

void Function_289() //Position: 0x8534 / 34100
{
	if ((Global_56688[776].f_292 || Global_56688[876].f_292) || Global_56688[976].f_292)
	{
		if (Function_290())
		{
			Global_56612.f_296 = 1;
			Global_56688[776].f_296 = 1;
			Global_56688[876].f_296 = 1;
			Global_56688[976].f_296 = 1;
		}
		else if (!Function_290() && Global_56612.f_296)
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

bool Function_290() //Position: 0x85E8 / 34280
{
	return Function_291(16384);
}

int Function_291(bool bParam0) //Position: 0x85F4 / 34292
{
	return Function_65(Global_76905.f_132, bParam0);
}

void Function_292() //Position: 0x8605 / 34309
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
				Function_43();
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

void Function_293() //Position: 0x86CE / 34510
{
	Function_295(12, 1, 12, 2, 12, 4, 4294967295, 4294967295, 4294967295, 0, 5, 0);
	Function_295(12, 8, 12, 16, 12, 32, 4294967295, 4294967295, 4294967295, 4, 5, 0);
	Function_295(12, 64, 12, 128, 12, 256, 4294967295, 4294967295, 4294967295, 1, 5, 0);
	Function_295(12, 512, 12, 1024, 12, 2048, 4294967295, 4294967295, 4294967295, 5, 5, 0);
	Function_295(12, 4096, 12, 8192, 12, 16384, 4294967295, 4294967295, 4294967295, 2, 5, 0);
	Function_295(12, 32768, 12, 65536, 12, 131072, 4294967295, 4294967295, 4294967295, 6, 5, 0);
	Function_295(12, 262144, 12, 524288, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 20, 3, 0);
	Function_295(12, 1048576, 12, 2097152, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 21, 3, 0);
	Function_295(12, 4194304, 12, 8388608, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 18, 3, 0);
	Function_295(12, 0x1000000, 12, 0x2000000, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 19, 3, 0);
	Function_295(12, 0x4000000, 12, 0x8000000, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 14, 3, 0);
	Function_295(12, 0x10000000, 12, 0x20000000, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 15, 3, 0);
	Function_295(12, 0x40000000, 13, 1, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 16, 3, 0);
	Function_295(13, 2, 13, 4, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 17, 3, 0);
	Function_295(13, 8, 13, 16, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 23, 3, 0);
	Function_295(13, 32, 13, 64, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 24, 3, 0);
	Function_295(13, 128, 13, 256, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 22, 3, 0);
	Function_295(13, 512, 13, 1024, 4294967295, 4294967295, 4294967295, 4294967295, 55, 4294967295, 3, 0);
	Function_295(13, 2048, 13, 4096, 4294967295, 4294967295, 4294967295, 4294967295, 56, 4294967295, 3, 0);
	Function_295(13, 8192, 13, 16384, 4294967295, 4294967295, 4294967295, 4294967295, 54, 4294967295, 3, 0);
	Function_295(13, 32768, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 57, 4294967295, 1, 0);
	Function_295(13, 65536, 13, 131072, 13, 262144, 13, 524288, 4294967295, 7, 8, 0);
	Function_295(13, 1048576, 13, 2097152, 13, 4194304, 4294967295, 4294967295, 4294967295, 8, 6, 0);
	Function_295(13, 8388608, 13, 0x1000000, 8, 8192, 4294967295, 4294967295, 4294967295, 9, 4, 0);
	Function_295(13, 0x2000000, 13, 0x4000000, 4294967295, 4294967295, 4294967295, 4294967295, 5, 4294967295, 3, 0);
	Function_295(13, 0x8000000, 13, 0x10000000, 4294967295, 4294967295, 4294967295, 4294967295, 6, 4294967295, 3, 0);
	Function_295(13, 0x20000000, 13, 0x40000000, 4294967295, 4294967295, 4294967295, 4294967295, 7, 4294967295, 2, 0);
	Function_295(14, 1, 14, 2, 4294967295, 4294967295, 4294967295, 4294967295, 8, 4294967295, 2, 0);
	Function_295(14, 4, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 9, 4294967295, 1, 0);
	Function_295(14, 8, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 10, 4294967295, 1, 0);
	Function_295(14, 16, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 11, 4294967295, 1, 0);
	Function_295(14, 32, 14, 64, 4294967295, 4294967295, 4294967295, 4294967295, 0, 4294967295, 3, 0);
	Function_295(14, 128, 14, 256, 4294967295, 4294967295, 4294967295, 4294967295, 1, 4294967295, 3, 0);
	Function_295(14, 512, 14, 1024, 4294967295, 4294967295, 4294967295, 4294967295, 2, 4294967295, 3, 0);
	Function_295(14, 2048, 14, 4096, 4294967295, 4294967295, 4294967295, 4294967295, 3, 4294967295, 3, 0);
	Function_295(14, 8192, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4, 4294967295, 1, 0);
	Function_295(14, 16384, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 12, 4294967295, 1, 0);
	Function_295(14, 32768, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 13, 4294967295, 1, 0);
	Function_295(14, 65536, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 14, 4294967295, 1, 0);
	Function_295(14, 131072, 14, 262144, 4294967295, 4294967295, 4294967295, 4294967295, 31, 4294967295, 3, 0);
	Function_295(14, 524288, 14, 1048576, 4294967295, 4294967295, 4294967295, 4294967295, 32, 4294967295, 3, 0);
	Function_295(14, 2097152, 14, 4194304, 14, 8388608, 4294967295, 4294967295, 33, 4294967295, 5, 0);
	Function_295(14, 0x1000000, 14, 0x2000000, 4294967295, 4294967295, 4294967295, 4294967295, 34, 4294967295, 3, 0);
	Function_295(14, 0x4000000, 14, 0x8000000, 4294967295, 4294967295, 4294967295, 4294967295, 35, 4294967295, 3, 0);
	Function_295(14, 0x10000000, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 36, 4294967295, 1, 0);
	Function_295(14, 0x20000000, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 37, 4294967295, 1, 0);
	Function_295(14, 0x40000000, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 38, 4294967295, 1, 0);
	Function_295(15, 1, 15, 2, 4294967295, 4294967295, 4294967295, 4294967295, 39, 4294967295, 3, 0);
	Function_295(15, 4, 15, 8, 4294967295, 4294967295, 4294967295, 4294967295, 40, 4294967295, 3, 0);
	Function_295(15, 16, 15, 32, 15, 64, 4294967295, 4294967295, 41, 4294967295, 5, 0);
	Function_295(15, 128, 15, 256, 4294967295, 4294967295, 4294967295, 4294967295, 42, 4294967295, 3, 0);
	Function_295(15, 512, 15, 1024, 4294967295, 4294967295, 4294967295, 4294967295, 43, 4294967295, 3, 0);
	Function_295(15, 2048, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 44, 4294967295, 1, 0);
	Function_295(15, 4096, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 45, 4294967295, 1, 0);
	Function_295(15, 8192, 15, 16384, 4294967295, 4294967295, 4294967295, 4294967295, 46, 4294967295, 3, 0);
	Function_295(15, 32768, 15, 65536, 4294967295, 4294967295, 4294967295, 4294967295, 47, 4294967295, 3, 0);
	Function_295(15, 131072, 15, 262144, 15, 524288, 4294967295, 4294967295, 48, 4294967295, 5, 0);
	Function_295(15, 1048576, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 15, 4294967295, 1, 0);
	Function_295(15, 2097152, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 16, 4294967295, 1, 0);
	Function_295(15, 4194304, 15, 8388608, 4294967295, 4294967295, 4294967295, 4294967295, 17, 4294967295, 3, 0);
	Function_295(15, 0x1000000, 15, 0x2000000, 4294967295, 4294967295, 4294967295, 4294967295, 19, 4294967295, 2, 0);
	Function_295(15, 0x4000000, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 20, 4294967295, 1, 0);
	Function_295(15, 0x8000000, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 21, 4294967295, 1, 0);
	Function_295(15, 0x10000000, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 22, 4294967295, 1, 0);
	Function_295(15, 0x20000000, 15, 0x40000000, 4294967295, 4294967295, 4294967295, 4294967295, 25, 4294967295, 2, 0);
	Function_295(0, 1, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 26, 4294967295, 1, 0);
	Function_295(0, 2, 0, 4, 4294967295, 4294967295, 4294967295, 4294967295, 23, 4294967295, 3, 0);
	Function_295(0, 8, 0, 16, 4294967295, 4294967295, 4294967295, 4294967295, 49, 4294967295, 3, 0);
	Function_295(0, 32, 0, 64, 4294967295, 4294967295, 4294967295, 4294967295, 50, 4294967295, 3, 0);
	Function_295(0, 128, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 52, 4294967295, 1, 0);
	Function_295(0, 256, 0, 512, 4294967295, 4294967295, 4294967295, 4294967295, 51, 4294967295, 3, 0);
	Function_295(8, 1024, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 58, 4294967295, 1, 0);
	Function_295(0, 1024, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 59, 4294967295, 1, 0);
	Function_295(0, 2048, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 60, 4294967295, 1, 0);
	Function_295(0, 4096, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 61, 4294967295, 1, 0);
	Function_295(0, 8192, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 62, 4294967295, 1, 0);
	Function_295(0, 16384, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 63, 4294967295, 1, 0);
	Function_295(0, 32768, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 64, 4294967295, 1, 0);
	Function_295(0, 65536, 0, 131072, 0, 262144, 4294967295, 4294967295, 4294967295, 4294967295, 5, Function_294(65, 66, 67, 68));
	Function_295(0, 524288, 0, 1048576, 0, 2097152, 4294967295, 4294967295, 4294967295, 4294967295, 5, Function_294(69, 70, 71, 72));
	Function_295(0, 4194304, 0, 8388608, 0, 0x1000000, 4294967295, 4294967295, 4294967295, 4294967295, 5, Function_294(73, 74, 75, 76));
	Function_295(0, 0x2000000, 0, 0x4000000, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 3, Function_294(77, 78, 79, 4294967295));
	Function_295(0, 0x8000000, 0, 0x10000000, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 3, Function_294(80, 81, 82, 4294967295));
	Function_295(0, 0x20000000, 0, 0x40000000, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 3, Function_294(83, 84, 85, 4294967295));
	Function_295(1, 1, 1, 2, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 3, Function_294(88, 89, 90, 4294967295));
	Function_295(1, 4, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 86, 4294967295, 1, 0);
	Function_295(1, 8, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 87, 4294967295, 1, 0);
	Function_295(1, 16, 1, 32, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 3, Function_294(91, 92, 93, 4294967295));
	Function_295(1, 64, 1, 128, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 3, Function_294(94, 95, 96, 4294967295));
	Function_295(1, 256, 1, 512, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 3, Function_294(97, 98, 99, 4294967295));
	Function_295(1, 1024, 1, 2048, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 3, Function_294(102, 103, 104, 4294967295));
	Function_295(1, 4096, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 100, 4294967295, 1, 0);
	Function_295(1, 8192, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 101, 4294967295, 1, 0);
	Function_295(1, 16384, 1, 32768, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 3, Function_294(105, 106, 107, 4294967295));
	Function_295(1, 65536, 1, 131072, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 3, Function_294(108, 109, 110, 4294967295));
	Function_295(1, 262144, 1, 524288, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 3, Function_294(111, 112, 113, 4294967295));
	Function_295(1, 1048576, 2, 2097152, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 3, Function_294(116, 117, 118, 4294967295));
	Function_295(1, 4194304, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 114, 4294967295, 1, 0);
	Function_295(1, 8388608, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 115, 4294967295, 1, 0);
	Function_295(1, 0x1000000, 1, 0x2000000, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 3, Function_294(119, 120, 121, 4294967295));
	Function_295(1, 0x4000000, 1, 0x8000000, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 3, Function_294(122, 123, 124, 4294967295));
	Function_295(1, 0x10000000, 1, 0x20000000, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 3, Function_294(125, 126, 127, 4294967295));
	Function_295(1, 0x40000000, 2, 1, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 3, Function_294(130, 131, 132, 4294967295));
	Function_295(2, 2, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 128, 4294967295, 1, 0);
	Function_295(2, 4, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 129, 4294967295, 1, 0);
	Function_295(2, 8, 2, 16, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 3, Function_294(133, 134, 135, 4294967295));
	Function_295(2, 32, 2, 64, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 3, Function_294(136, 137, 138, 4294967295));
	Function_295(2, 128, 2, 256, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 3, Function_294(139, 140, 141, 4294967295));
	Function_295(2, 512, 2, 1024, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 3, Function_294(144, 145, 146, 4294967295));
	Function_295(2, 2048, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 142, 4294967295, 1, 0);
	Function_295(2, 4096, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 143, 4294967295, 1, 0);
	Function_295(2, 8192, 2, 16384, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 3, Function_294(147, 148, 149, 4294967295));
	Function_295(2, 32768, 2, 65536, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 3, Function_294(150, 151, 152, 4294967295));
	Function_295(2, 131072, 2, 262144, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 3, Function_294(153, 154, 155, 4294967295));
	Function_295(2, 524288, 2, 1048576, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 3, Function_294(158, 159, 160, 4294967295));
	Function_295(2, 2097152, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 156, 4294967295, 1, 0);
	Function_295(2, 4194304, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 157, 4294967295, 1, 0);
	Function_295(2, 8388608, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 161, 4294967295, 1, 0);
	Function_295(2, 0x1000000, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 162, 4294967295, 1, 0);
	Function_295(2, 0x2000000, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 163, 4294967295, 1, 0);
	Function_295(2, 0x4000000, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 164, 4294967295, 1, 0);
	Function_295(2, 0x8000000, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 165, 4294967295, 1, 0);
	Function_295(2, 0x10000000, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 166, 4294967295, 1, 0);
	Function_295(2, 0x20000000, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 167, 4294967295, 1, 0);
	Function_295(2, 0x40000000, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 168, 4294967295, 1, 0);
	Function_295(3, 1, 3, 2, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 3, Function_294(169, 170, 171, 4294967295));
	Function_295(3, 4, 3, 8, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 3, Function_294(172, 173, 174, 4294967295));
	Function_295(3, 16, 3, 32, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 3, Function_294(175, 176, 177, 4294967295));
	Function_295(3, 64, 3, 128, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 3, Function_294(178, 179, 180, 4294967295));
	Function_295(3, 256, 3, 512, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 3, Function_294(181, 182, 183, 4294967295));
	Function_295(3, 1024, 3, 2048, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 3, Function_294(184, 185, 186, 4294967295));
	Function_295(3, 4096, 3, 8192, 4294967295, 4294967295, 4294967295, 4294967295, 187, 4294967295, 3, 0);
	Function_295(3, 16384, 3, 32768, 4294967295, 4294967295, 4294967295, 4294967295, 207, 4294967295, 3, 0);
	Function_295(3, 65536, 3, 131072, 4294967295, 4294967295, 4294967295, 4294967295, 188, 4294967295, 3, 0);
	Function_295(3, 262144, 3, 524288, 4294967295, 4294967295, 4294967295, 4294967295, 208, 4294967295, 3, 0);
	Function_295(3, 1048576, 3, 2097152, 4294967295, 4294967295, 4294967295, 4294967295, 189, 4294967295, 3, 0);
	Function_295(3, 4194304, 3, 8388608, 4294967295, 4294967295, 4294967295, 4294967295, 209, 4294967295, 3, 0);
	Function_295(3, 0x1000000, 3, 0x2000000, 4294967295, 4294967295, 4294967295, 4294967295, 190, 4294967295, 3, 0);
	Function_295(3, 0x4000000, 3, 0x8000000, 4294967295, 4294967295, 4294967295, 4294967295, 210, 4294967295, 3, 0);
	Function_295(3, 0x10000000, 3, 0x20000000, 4294967295, 4294967295, 4294967295, 4294967295, 191, 4294967295, 3, 0);
	Function_295(3, 0x40000000, 4, 1, 4294967295, 4294967295, 4294967295, 4294967295, 211, 4294967295, 3, 0);
	Function_295(4, 2, 4, 4, 4294967295, 4294967295, 4294967295, 4294967295, 192, 4294967295, 3, 0);
	Function_295(4, 8, 4, 16, 4294967295, 4294967295, 4294967295, 4294967295, 212, 4294967295, 3, 0);
	Function_295(4, 32, 4, 64, 4294967295, 4294967295, 4294967295, 4294967295, 193, 4294967295, 3, 0);
	Function_295(4, 128, 4, 256, 4294967295, 4294967295, 4294967295, 4294967295, 213, 4294967295, 3, 0);
	Function_295(4, 512, 4, 1024, 4294967295, 4294967295, 4294967295, 4294967295, 194, 4294967295, 3, 0);
	Function_295(4, 2048, 4, 4096, 4294967295, 4294967295, 4294967295, 4294967295, 214, 4294967295, 3, 0);
	Function_295(4, 8192, 4, 16384, 4294967295, 4294967295, 4294967295, 4294967295, 195, 4294967295, 3, 0);
	Function_295(4, 32768, 4, 65536, 4294967295, 4294967295, 4294967295, 4294967295, 215, 4294967295, 3, 0);
	Function_295(4, 131072, 4, 262144, 4294967295, 4294967295, 4294967295, 4294967295, 196, 4294967295, 3, 0);
	Function_295(4, 524288, 4, 1048576, 4294967295, 4294967295, 4294967295, 4294967295, 216, 4294967295, 3, 0);
	Function_295(4, 2097152, 4, 4194304, 4294967295, 4294967295, 4294967295, 4294967295, 197, 4294967295, 3, 0);
	Function_295(4, 8388608, 4, 0x1000000, 4294967295, 4294967295, 4294967295, 4294967295, 217, 4294967295, 3, 0);
	Function_295(4, 0x2000000, 4, 0x4000000, 4294967295, 4294967295, 4294967295, 4294967295, 198, 4294967295, 3, 0);
	Function_295(4, 0x8000000, 4, 0x10000000, 4294967295, 4294967295, 4294967295, 4294967295, 218, 4294967295, 3, 0);
	Function_295(4, 0x20000000, 4, 0x40000000, 4294967295, 4294967295, 4294967295, 4294967295, 199, 4294967295, 3, 0);
	Function_295(5, 1, 5, 2, 4294967295, 4294967295, 4294967295, 4294967295, 219, 4294967295, 3, 0);
	Function_295(5, 4, 5, 8, 4294967295, 4294967295, 4294967295, 4294967295, 200, 4294967295, 3, 0);
	Function_295(5, 16, 5, 32, 4294967295, 4294967295, 4294967295, 4294967295, 220, 4294967295, 3, 0);
	Function_295(5, 64, 5, 128, 4294967295, 4294967295, 4294967295, 4294967295, 201, 4294967295, 3, 0);
	Function_295(5, 256, 5, 512, 4294967295, 4294967295, 4294967295, 4294967295, 221, 4294967295, 3, 0);
	Function_295(5, 1024, 5, 2048, 4294967295, 4294967295, 4294967295, 4294967295, 202, 4294967295, 3, 0);
	Function_295(5, 4096, 5, 8192, 4294967295, 4294967295, 4294967295, 4294967295, 222, 4294967295, 3, 0);
	Function_295(5, 16384, 5, 32768, 4294967295, 4294967295, 4294967295, 4294967295, 203, 4294967295, 3, 0);
	Function_295(5, 65536, 5, 131072, 4294967295, 4294967295, 4294967295, 4294967295, 223, 4294967295, 3, 0);
	Function_295(5, 262144, 5, 524288, 4294967295, 4294967295, 4294967295, 4294967295, 204, 4294967295, 3, 0);
	Function_295(5, 1048576, 5, 2097152, 4294967295, 4294967295, 4294967295, 4294967295, 224, 4294967295, 3, 0);
	Function_295(5, 4194304, 5, 8388608, 4294967295, 4294967295, 4294967295, 4294967295, 205, 4294967295, 3, 0);
	Function_295(5, 0x1000000, 5, 0x2000000, 4294967295, 4294967295, 4294967295, 4294967295, 225, 4294967295, 3, 0);
	Function_295(5, 0x4000000, 5, 0x8000000, 4294967295, 4294967295, 4294967295, 4294967295, 206, 4294967295, 3, 0);
	Function_295(5, 0x10000000, 5, 0x20000000, 4294967295, 4294967295, 4294967295, 4294967295, 226, 4294967295, 3, 0);
	Function_295(5, 0x40000000, 6, 1, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 10, 3, 0);
	Function_295(6, 2, 6, 4, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 11, 3, 0);
	Function_295(6, 8, 6, 16, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 12, 3, 0);
	Function_295(6, 32, 6, 64, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 13, 3, 0);
	Function_295(6, 128, 6, 256, 4294967295, 4294967295, 4294967295, 4294967295, 228, 4294967295, 3, 0);
	Function_295(6, 512, 6, 1024, 4294967295, 4294967295, 4294967295, 4294967295, 229, 4294967295, 3, 0);
	Function_295(6, 2048, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 230, 4294967295, 1, 0);
	Function_295(6, 4096, 6, 8192, 4294967295, 4294967295, 4294967295, 4294967295, 231, 4294967295, 2, 0);
	Function_295(6, 16384, 6, 32768, 4294967295, 4294967295, 4294967295, 4294967295, 232, 4294967295, 3, 0);
	Function_295(6, 65536, 6, 131072, 4294967295, 4294967295, 4294967295, 4294967295, 233, 4294967295, 3, 0);
	Function_295(6, 262144, 6, 524288, 6, 1048576, 4294967295, 4294967295, 236, 4294967295, 7, 0);
	Function_295(6, 2097152, 6, 4194304, 6, 8388608, 4294967295, 4294967295, 237, 4294967295, 6, 0);
	Function_295(6, 0x1000000, 6, 0x2000000, 6, 0x4000000, 4294967295, 4294967295, 238, 4294967295, 7, 0);
	Function_295(6, 0x8000000, 6, 0x10000000, 6, 0x20000000, 4294967295, 4294967295, 239, 4294967295, 6, 0);
	Function_295(6, 0x40000000, 7, 1, 4294967295, 4294967295, 4294967295, 4294967295, 240, 4294967295, 3, 0);
	Function_295(7, 2, 7, 4, 4294967295, 4294967295, 4294967295, 4294967295, 241, 4294967295, 3, 0);
	Function_295(7, 8, 7, 16, 7, 32, 4294967295, 4294967295, 242, 4294967295, 6, 0);
	Function_295(7, 64, 7, 128, 7, 256, 4294967295, 4294967295, 243, 4294967295, 5, 0);
	Function_295(7, 512, 7, 1024, 7, 2048, 4294967295, 4294967295, 244, 4294967295, 5, 0);
	Function_295(7, 4096, 7, 8192, 7, 16384, 4294967295, 4294967295, 245, 4294967295, 5, 0);
	Function_295(7, 32768, 7, 65536, 4294967295, 4294967295, 4294967295, 4294967295, 246, 4294967295, 3, 0);
	Function_295(7, 131072, 7, 262144, 4294967295, 4294967295, 4294967295, 4294967295, 247, 4294967295, 3, 0);
	Function_295(7, 524288, 7, 1048576, 4294967295, 4294967295, 4294967295, 4294967295, 248, 4294967295, 3, 0);
	Function_295(7, 2097152, 7, 4194304, 4294967295, 4294967295, 4294967295, 4294967295, 249, 4294967295, 3, 0);
	Function_295(7, 8388608, 7, 0x1000000, 4294967295, 4294967295, 4294967295, 4294967295, 250, 4294967295, 3, 0);
	Function_295(7, 0x2000000, 7, 0x4000000, 4294967295, 4294967295, 4294967295, 4294967295, 251, 4294967295, 2, 0);
	Function_295(7, 0x8000000, 7, 0x10000000, 4294967295, 4294967295, 4294967295, 4294967295, 252, 4294967295, 2, 0);
	Function_295(7, 0x20000000, 7, 0x40000000, 8, 1, 4294967295, 4294967295, 253, 4294967295, 5, 0);
	Function_295(8, 2, 7, 4, 8, 8, 4294967295, 4294967295, 254, 4294967295, 5, 0);
	Function_295(8, 16, 8, 32, 8, 64, 4294967295, 4294967295, 255, 4294967295, 5, 0);
	Function_295(8, 128, 8, 256, 8, 512, 4294967295, 4294967295, 256, 4294967295, 5, 0);
	return;
}

int Function_294(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x981B / 38939
{
	if (iParam3 == 4294967295)
	{
		if (StackVal && (StackVal && StackVal != 0 != 0) != 0)
		{
			return 0;
		}
		if (StackVal && (StackVal && StackVal != 10 != 1) != 0)
		{
			return 1;
		}
		if (StackVal && (StackVal && StackVal != 10 != 10) != 1)
		{
			return 2;
		}
		if (StackVal && (StackVal && StackVal != 10 != 10) != 10)
		{
			return 3;
		}
	}
	if (StackVal && (StackVal && (StackVal && StackVal != 0 != 0) != 0) != 0)
	{
		return 0;
	}
	if (StackVal && (StackVal && (StackVal && StackVal != 10 != 1) != 0) != 0)
	{
		return 1;
	}
	if (StackVal && (StackVal && (StackVal && StackVal != 10 != 10) != 1) != 0)
	{
		return 2;
	}
	if (StackVal && (StackVal && (StackVal && StackVal != 10 != 10) != 10) != 1)
	{
		return 3;
	}
	if (StackVal && (StackVal && (StackVal && StackVal != 10 != 10) != 10) != 10)
	{
		return 4;
	}
	return 0;
}

void Function_295(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11) //Position: 0x9A08 / 39432
{
	int iVar0;
	
	if (iParam8 != 4294967295)
	{
		iVar0 = StackVal;
	}
	else if (iParam9 != 4294967295)
	{
		iVar0 = StackVal;
	}
	else if (iParam8 != 4294967295 && iParam9 != 4294967295)
	{
		iVar0 = iParam11;
	}
	switch (iVar0)
	{
		case 0x00000000:
			Function_298(iParam0, iParam1);
			break;
		
		case 0x00000001:
			Function_297(iParam0, iParam1);
			break;
		
		case 0x00000002:
			Function_297(iParam0, iParam1);
			Function_298(iParam2, iParam3);
			break;
		
		case 0x00000003:
			Function_297(iParam0, iParam1);
			Function_297(iParam2, iParam3);
			break;
		
		case 0x00000004:
			Function_297(iParam0, iParam1);
			Function_298(iParam2, iParam3);
			Function_298(iParam4, iParam5);
			break;
		
		case 0x00000005:
			Function_297(iParam0, iParam1);
			Function_298(iParam2, iParam3);
			Function_297(iParam4, iParam5);
			break;
		
		case 0x00000006:
			Function_297(iParam0, iParam1);
			Function_297(iParam2, iParam3);
			Function_298(iParam4, iParam5);
			break;
		
		case 0x00000007:
			Function_297(iParam0, iParam1);
			Function_297(iParam2, iParam3);
			Function_297(iParam4, iParam5);
			break;
		
		case 0x00000008:
			Function_297(iParam0, iParam1);
			Function_298(iParam2, iParam3);
			Function_298(iParam4, iParam5);
			Function_298(iParam6, iParam7);
			break;
		
		case 0x00000009:
			Function_297(iParam0, iParam1);
			Function_298(iParam2, iParam3);
			Function_298(iParam4, iParam5);
			Function_297(iParam6, iParam7);
			break;
		
		case 0x0000000A:
			Function_296(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam10);
			break;
	}
}

void Function_296(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) //Position: 0x9B7D / 39805
{
	switch (iParam8)
	{
		case 0x00000001:
			Function_297(iParam0, iParam1);
			break;
		
		case 0x00000002:
			Function_297(iParam0, iParam1);
			Function_298(iParam2, iParam3);
			break;
		
		case 0x00000003:
			Function_297(iParam0, iParam1);
			Function_297(iParam2, iParam3);
			break;
		
		case 0x00000004:
			Function_297(iParam0, iParam1);
			Function_298(iParam2, iParam3);
			Function_298(iParam4, iParam5);
			break;
		
		case 0x00000005:
			Function_297(iParam0, iParam1);
			Function_298(iParam2, iParam3);
			Function_297(iParam4, iParam5);
			break;
		
		case 0x00000006:
			Function_297(iParam0, iParam1);
			Function_297(iParam2, iParam3);
			Function_298(iParam4, iParam5);
			break;
		
		case 0x00000007:
			Function_297(iParam0, iParam1);
			Function_297(iParam2, iParam3);
			Function_297(iParam4, iParam5);
			break;
		
		case 0x00000008:
			Function_297(iParam0, iParam1);
			Function_298(iParam2, iParam3);
			Function_298(iParam4, iParam5);
			Function_298(iParam6, iParam7);
			break;
		
		case 0x00000009:
			Function_297(iParam0, iParam1);
			Function_298(iParam2, iParam3);
			Function_298(iParam4, iParam5);
			Function_297(iParam6, iParam7);
			break;
		
		case 0x0000000A:
			Function_297(iParam0, iParam1);
			Function_298(iParam2, iParam3);
			Function_297(iParam4, iParam5);
			Function_298(iParam6, iParam7);
			break;
	}
}

void Function_297(int iParam0, int iParam1) //Position: 0x9CB1 / 40113
{
	if (iParam0 < 16 || iParam0 != 4294967295)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	if (iParam1 > 0)
	{
		(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || iParam1);
	}
	return;
	return;
}

void Function_298(int iParam0, int iParam1) //Position: 0x9D1C / 40220
{
	if (iParam0 < 16 || iParam0 != 4294967295)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	if (iParam1 > 0)
	{
		Function_46(&Global_12976 + 168[iParam0], iParam1);
	}
	return;
	return;
}

void Function_299() //Position: 0x9D80 / 40320
{
	Function_300(&Global_50170, 58, 0, 0, 250.0f, 5);
	Function_300(&Global_50170, 60, 2, 0, 500.0f, 5);
	Function_300(&Global_50170, 59, 1, 0, 500.0f, 5);
	Function_300(&Global_50170, 62, 3, 0, 250.0f, 5);
	Function_300(&Global_50170, 61, 4, 0, 250.0f, 5);
	Function_300(&Global_50170, 63, 5, 0, 250.0f, 5);
	Function_300(&Global_50170, 64, 6, 0, 250.0f, 5);
	Function_300(&Global_50170, 161, 0, 1, 250.0f, 5);
	Function_300(&Global_50170, 163, 2, 1, 500.0f, 5);
	Function_300(&Global_50170, 162, 1, 1, 500.0f, 5);
	Function_300(&Global_50170, 165, 3, 1, 250.0f, 5);
	Function_300(&Global_50170, 164, 4, 1, 250.0f, 5);
	Function_300(&Global_50170, 166, 5, 1, 250.0f, 5);
	Function_300(&Global_50170, 167, 6, 1, 250.0f, 5);
	Function_300(&Global_50170, 168, 7, 1, 250.0f, 5);
	return;
}

void Function_300(var uParam0, int iParam1, int iParam2, bool bParam3, float fParam4, int iParam5) //Position: 0x9E76 / 40566
{
	var uVar0;
	var uVar1[260];
	int iVar262;
	
	switch (StackVal)
	{
		case 0x00000000:
			iVar262 = 0;
			while (iVar262 <= 6)
			{
				if (Function_305(iVar262, 0, iParam2) && !bParam3)
				{
					if (Function_304(iVar262, 0, iParam2))
					{
						uVar1[iParam1]++;
						uParam0[iParam122]->f_28 = uVar1[iParam1];
					}
					else
					{
						Function_46(&Global_55869[iVar26237][018] + 36[iParam2], 1);
					}
				}
				else if (Function_305(iVar262, 1, iParam2) && bParam3)
				{
					if (Function_304(iVar262, 1, iParam2))
					{
						uVar1[iParam1]++;
						uParam0[iParam122]->f_28 = uVar1[iParam1];
					}
					else
					{
						Function_46(&Global_55869[iVar26237][118] + 36[iParam2], 1);
					}
				}
				iVar262++;
			}
			uVar0 = uParam0[iParam122]->f_28;
			Function_301(iParam1, uParam0[iParam122] + 4, uParam0[iParam122] + 8, uParam0[iParam122] + 12, uVar0, 6, fParam4, iParam5, 0);
			break;
	}
}

void Function_301(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, int iParam5, var uParam6, var uParam7, var uParam8) //Position: 0x9F82 / 40834
{
	float fVar0;
	var uVar1;
	
	fVar0 = Function_105(iParam0);
	if (bParam4 > iParam5)
	{
		uVar1 = Function_303(iParam0);
		Function_302(iParam0, uParam1, uParam2, uParam3, uParam6, uParam7, uVar1);
	}
	else if (bParam4 >= 4294967295)
	{
		*uParam3 = TO_FLOAT(bParam4);
		*uParam3 = (*uParam3 / IntToFloat(iParam5));
		if (*uParam3 == fVar0)
		{
			Function_62(iParam0, *uParam3, (uParam8 && Function_64(iParam0, 4)), bParam4, 4294967295, 4294967295);
		}
	}
}

void Function_302(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, int iParam5, bool bParam6) //Position: 0x9FE9 / 40937
{
	int iVar0;
	
	*uParam2 = 10;
	*uParam1 = 2;
	*uParam3 = 1.0f;
	if (!IS_STRING_VALID(bParam6))
	{
		bParam6 = "challenge_01_128";
	}
	Function_90(&Global_50170[iParam022] + 16, CEIL(bParam4), bParam6);
	if (iParam5 != 5)
	{
		iVar0 = iParam0 + 1;
		Function_156(iVar0, 0, 0, 0);
		CLEAR_JOURNAL_ENTRY(Function_67(iParam0));
		REMOVE_JOURNAL_ENTRY(Function_67(iParam0), false);
		Function_155(iParam0, 4);
	}
	else
	{
		Function_98(iParam0, 0);
	}
	Function_70();
}

var Function_303(int iParam0) //Position: 0xA066 / 41062
{
	int iVar0;
	
	iVar0 = "COOP_icon_128";
	switch (iParam0)
	{
		case 0x0000004D:
		case 0x0000004E:
		case 0x0000004F:
		case 0x00000050:
		case 0x00000051:
		case 0x00000052:
		case 0x00000053:
		case 0x00000054:
		case 0x00000055:
		case 0x00000056:
		case 0x00000057:
		case 0x00000058:
		case 0x00000059:
		case 0x0000005A:
		case 0x000000A9:
		case 0x000000AA:
		case 0x000000AB:
			iVar0 = "SC_AA_Pikes_Icon_128";
			break;
		
		case 0x0000005B:
		case 0x0000005C:
		case 0x0000005D:
		case 0x0000005E:
		case 0x0000005F:
		case 0x00000060:
		case 0x00000061:
		case 0x00000062:
		case 0x00000063:
		case 0x00000064:
		case 0x00000065:
		case 0x00000066:
		case 0x00000067:
		case 0x00000068:
		case 0x000000AC:
		case 0x000000AD:
		case 0x000000AE:
			iVar0 = "SC_AA_Mercer_Icon_128";
			break;
		
		case 0x00000069:
		case 0x0000006A:
		case 0x0000006B:
		case 0x0000006C:
		case 0x0000006D:
		case 0x0000006E:
		case 0x0000006F:
		case 0x00000070:
		case 0x00000071:
		case 0x00000072:
		case 0x00000073:
		case 0x00000074:
		case 0x00000075:
		case 0x00000076:
		case 0x000000AF:
		case 0x000000B0:
		case 0x000000B1:
			iVar0 = "SC_AA_Tesoro_Icon_128";
			break;
		
		case 0x00000077:
		case 0x00000078:
		case 0x00000079:
		case 0x0000007A:
		case 0x0000007B:
		case 0x0000007C:
		case 0x0000007D:
		case 0x0000007E:
		case 0x0000007F:
		case 0x00000080:
		case 0x00000081:
		case 0x00000082:
		case 0x00000083:
		case 0x00000084:
		case 0x000000B2:
		case 0x000000B3:
		case 0x000000B4:
			iVar0 = "SC_AA_Gaptooth_Icon_128";
			break;
		
		case 0x00000085:
		case 0x00000086:
		case 0x00000087:
		case 0x00000088:
		case 0x00000089:
		case 0x0000008A:
		case 0x0000008B:
		case 0x0000008C:
		case 0x0000008D:
		case 0x0000008E:
		case 0x0000008F:
		case 0x00000090:
		case 0x00000091:
		case 0x00000092:
		case 0x000000B5:
		case 0x000000B6:
		case 0x000000B7:
			iVar0 = "SC_AA_TwinRocks_Icon_128";
			break;
		
		case 0x00000093:
		case 0x00000094:
		case 0x00000095:
		case 0x00000096:
		case 0x00000097:
		case 0x00000098:
		case 0x00000099:
		case 0x0000009A:
		case 0x0000009B:
		case 0x0000009C:
		case 0x0000009D:
		case 0x0000009E:
		case 0x0000009F:
		case 0x000000A0:
		case 0x000000B8:
		case 0x000000B9:
		case 0x000000BA:
			iVar0 = "SC_AA_Nosalida_Icon_128";
			break;
		
		default:
			iVar0 = "COOP_icon_128";
			break;
	}
	return iVar0;
}

bool Function_304(int iParam0, int iParam1, int iParam2) //Position: 0xA3B4 / 41908
{
	return Function_65(Global_55869[iParam037][iParam118][iParam2], 1);
}

bool Function_305(int iParam0, int iParam1, int iParam2) //Position: 0xA3CD / 41933
{
	return Function_65((*&Global_55869[iParam037][iParam118] + 36)[iParam2], 1);
}

void Function_306(int iParam0) //Position: 0xA3E8 / 41960
{
	Function_74(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		if (DECOR_CHECK_EXIST(Global_34573, "DISABLE_HORSE_WHISTLE"))
		{
			DECOR_REMOVE(Global_34573, "DISABLE_HORSE_WHISTLE");
		}
	}
	return;
}

bool Function_307() //Position: 0xA441 / 42049
{
	return (NET_IS_CONNECTED_FOR_PLAY() && NET_IS_MANAGER_INITIALIZED());
}

void Function_308() //Position: 0xA44E / 42062
{
	Function_349();
	Function_319();
	Function_309();
	return;
}

void Function_309() //Position: 0xA45D / 42077
{
	Function_318(187, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_318(188, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_318(189, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_318(190, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_318(191, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_318(192, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_318(193, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_318(194, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_318(195, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_318(196, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_318(197, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_318(198, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_318(199, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_318(200, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_318(201, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_318(202, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_318(203, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_318(204, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_318(205, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_318(206, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_318(207, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_318(208, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_318(209, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_318(210, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_318(211, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_318(212, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_318(213, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_318(214, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_318(215, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_318(216, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_318(217, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_318(218, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_318(219, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_318(220, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_318(221, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_318(222, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_318(223, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_318(224, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_318(225, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_318(226, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_310(10, &Global_49399, 5, 25, 50);
	Function_310(12, &Global_49399, 5, 25, 50);
	Function_318(0, &Global_50170, 1, TO_FLOAT(50), 5, TO_FLOAT(100), 20, TO_FLOAT(150), 0, 0, 0, 0);
	Function_318(1, &Global_50170, 1, TO_FLOAT(50), 5, TO_FLOAT(100), 20, TO_FLOAT(150), 0, 0, 0, 0);
	Function_318(2, &Global_50170, 1, TO_FLOAT(50), 5, TO_FLOAT(100), 20, TO_FLOAT(150), 0, 0, 0, 0);
	Function_318(3, &Global_50170, 1, TO_FLOAT(50), 5, TO_FLOAT(100), 20, TO_FLOAT(150), 0, 0, 0, 0);
	Function_318(4, &Global_50170, 1, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_318(5, &Global_50170, 3, TO_FLOAT(50), 5, TO_FLOAT(100), 7, TO_FLOAT(150), 0, 0, 0, 0);
	Function_318(6, &Global_50170, 5, TO_FLOAT(50), 10, TO_FLOAT(100), 15, TO_FLOAT(150), 0, 0, 0, 0);
	Function_318(7, &Global_50170, 3, TO_FLOAT(50), 5, TO_FLOAT(100), 0, 0, 0, 0, 0, 0);
	Function_318(8, &Global_50170, 3, TO_FLOAT(50), 5, TO_FLOAT(100), 0, 0, 0, 0, 0, 0);
	Function_318(9, &Global_50170, 3, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_318(10, &Global_50170, 10, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_318(11, &Global_50170, 20, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_318(12, &Global_50170, 5, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_318(13, &Global_50170, 5, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_318(14, &Global_50170, 5, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_318(15, &Global_50170, 1, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_318(16, &Global_50170, 1, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_318(17, &Global_50170, 1, TO_FLOAT(50), 5, TO_FLOAT(100), 50, TO_FLOAT(150), 0, 0, 0, 0);
	Function_318(19, &Global_50170, 1, TO_FLOAT(50), 3, TO_FLOAT(100), 0, 0, 0, 0, 0, 0);
	Function_318(21, &Global_50170, 1, TO_FLOAT(50), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_318(20, &Global_50170, 5, TO_FLOAT(50), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_318(22, &Global_50170, 1, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_318(25, &Global_50170, 25, TO_FLOAT(50), 100, TO_FLOAT(100), 0, 0, 0, 0, 0, 0);
	Function_318(26, &Global_50170, 1, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_318(27, &Global_50170, 10, TO_FLOAT(50), 50, TO_FLOAT(100), 100, TO_FLOAT(150), 0, 0, 0, 0);
	Function_318(31, &Global_50170, 1, TO_FLOAT(50), 15, TO_FLOAT(100), 50, TO_FLOAT(150), 0, 0, 0, 0);
	Function_318(32, &Global_50170, 1, TO_FLOAT(50), 5, TO_FLOAT(100), 20, TO_FLOAT(150), 0, 0, 0, 0);
	Function_318(33, &Global_50170, 10, TO_FLOAT(50), 25, TO_FLOAT(100), 50, TO_FLOAT(150), 75, TO_FLOAT(200), 100, TO_FLOAT(250));
	Function_318(34, &Global_50170, 5, TO_FLOAT(50), 25, TO_FLOAT(100), 75, TO_FLOAT(150), 0, 0, 0, 0);
	Function_318(35, &Global_50170, 1, TO_FLOAT(50), 2, TO_FLOAT(100), 3, TO_FLOAT(150), 0, 0, 0, 0);
	Function_318(36, &Global_50170, 1, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_318(37, &Global_50170, 1, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_318(38, &Global_50170, 1, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_318(39, &Global_50170, 1, TO_FLOAT(50), 15, TO_FLOAT(100), 50, TO_FLOAT(150), 0, 0, 0, 0);
	Function_318(40, &Global_50170, 1, TO_FLOAT(50), 5, TO_FLOAT(100), 20, TO_FLOAT(150), 0, 0, 0, 0);
	Function_318(41, &Global_50170, 10, TO_FLOAT(50), 25, TO_FLOAT(100), 50, TO_FLOAT(150), 75, TO_FLOAT(200), 100, TO_FLOAT(250));
	Function_318(42, &Global_50170, 5, TO_FLOAT(50), 25, TO_FLOAT(100), 75, TO_FLOAT(150), 0, 0, 0, 0);
	Function_318(43, &Global_50170, 3, TO_FLOAT(50), 5, TO_FLOAT(100), 7, TO_FLOAT(150), 0, 0, 0, 0);
	Function_318(44, &Global_50170, 1, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_318(45, &Global_50170, 1, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_318(46, &Global_50170, 1, TO_FLOAT(50), 15, TO_FLOAT(100), 50, TO_FLOAT(150), 0, 0, 0, 0);
	Function_318(47, &Global_50170, 1, TO_FLOAT(50), 5, TO_FLOAT(100), 20, TO_FLOAT(150), 0, 0, 0, 0);
	Function_318(48, &Global_50170, 10, TO_FLOAT(50), 25, TO_FLOAT(100), 50, TO_FLOAT(150), 75, TO_FLOAT(200), 100, TO_FLOAT(250));
	Function_318(49, &Global_50170, 10, TO_FLOAT(50), 50, TO_FLOAT(100), 100, TO_FLOAT(150), 0, 0, 0, 0);
	Function_318(50, &Global_50170, 10, TO_FLOAT(50), 50, TO_FLOAT(100), 100, TO_FLOAT(150), 0, 0, 0, 0);
	Function_318(51, &Global_50170, 2, TO_FLOAT(50), 3, TO_FLOAT(100), 5, TO_FLOAT(150), 0, 0, 0, 0);
	Function_318(52, &Global_50170, 1, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_318(54, &Global_50170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Function_318(55, &Global_50170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Function_318(56, &Global_50170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Function_318(57, &Global_50170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return;
}

void Function_310(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xAED5 / 44757
{
	switch (StackVal)
	{
		case 0x00000000:
			uParam1[iParam022]->f_12 = Function_317(1.0f, (TO_FLOAT(uParam1[iParam022]->f_28) / TO_FLOAT(bParam2)));
			break;
		
		case 0x00000001:
			uParam1[iParam022]->f_12 = Function_317(1.0f, (TO_FLOAT(uParam1[iParam022]->f_28) / TO_FLOAT(bParam3)));
			break;
		
		case 0x00000002:
			uParam1[iParam022]->f_12 = Function_317(1.0f, (TO_FLOAT(uParam1[iParam022]->f_28) / TO_FLOAT(bParam4)));
			break;
		
		case 0x0000000A:
			Function_314(iParam0);
			return;
			break;
	}
	Function_311(iParam0, uParam1[iParam022]->f_12, 0, 4294967295, 4294967295, 4294967295, 0);
}

void Function_311(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6) //Position: 0xAF7F / 44927
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	char* cVar20[24];
	char* cVar26[24];
	char* cVar32[24];
	char* cVar38[24];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_313(iParam0), fParam1, true, 0);
	if (bParam2)
	{
		if (((iParam0 != 12 || iParam0 != 13) || iParam0 != 10) || iParam0 != 11)
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_312(iParam0) };
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
			APPEND_JOURNAL_ENTRY_DETAIL(Function_313(iParam0), &cVar0, 2, 2, false);
			Function_63(Function_313(iParam0), 0);
		}
		else
		{
			cVar20 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_312(iParam0) };
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
			APPEND_JOURNAL_ENTRY_DETAIL(Function_313(iParam0), &cVar20, 2, 2, true);
			Function_63(Function_313(iParam0), 0);
		}
	}
}

struct<24> Function_312(int iParam0) //Position: 0xB10A / 45322
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

var Function_313(int iParam0) //Position: 0xB17C / 45436
{
	if (Function_16() || Global_34165.f_44)
	{
		return Global_49399[iParam022].f_24;
	}
	return Global_49310[iParam022].f_24;
}

void Function_314(int iParam0) //Position: 0xB1A4 / 45476
{
	struct<6> Var0;
	struct<6> Var6;
	
	CLEAR_JOURNAL_ENTRY(Function_313(iParam0));
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_316(iParam0) };
	if (Function_16() || Global_34165.f_44)
	{
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_312(iParam0) };
	}
	else
	{
		memcpy(&Var6, StackVal, *(&Global_49310[iParam022] + 16), 6);
	}
	UI_SET_STRING(&Var0, UI_GET_STRING(&Var6));
	Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_315(iParam0) };
	APPEND_JOURNAL_ENTRY_DETAIL(Function_313(iParam0), &Var6, 0, 2, false);
	PREPEND_JOURNAL_ENTRY(Function_313(iParam0), true);
	SET_JOURNAL_ENTRY_PROGRESS(Function_313(iParam0), 1.0f, false, 0);
	return;
}

struct<24> Function_315(int iParam0) //Position: 0xB217 / 45591
{
	char* cVar0[24];
	
	cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_312(iParam0) };
	if (Global_34165.f_44 || Function_16())
	{
		stradd(&cVar0, "_mp_des", 24);
		if (!IS_STRING_VALID(UI_GET_STRING(&cVar0)))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_312(iParam0) };
			stradd(&cVar0, "_des", 24);
		}
	}
	else
	{
		stradd(&cVar0, "_des", 24);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_316(int iParam0) //Position: 0xB274 / 45684
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

var Function_317(int iParam0, bool bParam1) //Position: 0xB2E0 / 45792
{
	if (iParam0 > bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_318(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, bool bParam9, int iParam10, bool bParam11) //Position: 0xB2F3 / 45811
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
			Function_98(iParam0, 0);
			return;
			break;
		
		default:
			LOG_ERROR("we should have a goal at this point");
			bVar0 = iParam2;
			bVar1 = bParam3;
			break;
	}
	if (Function_65(uParam1[iParam022]->f_32, 4) || Function_65(uParam1[iParam022]->f_32, 2))
	{
		Function_156(iParam0, bVar0, CEIL(bVar1), 0);
		if (uParam1[iParam022]->f_28 >= 0)
		{
			Function_62(iParam0, uParam1[iParam022]->f_12, 1, uParam1[iParam022]->f_28, 4294967295, 4294967295);
		}
	}
}

void Function_319() //Position: 0xB3F0 / 46064
{
	Function_344(0, &Global_50170, "PVDM_1", 1, 6, Function_348());
	Function_344(1, &Global_50170, "PVDM_2", 1, 6, Function_348());
	Function_344(2, &Global_50170, "PVTD_1", 1, 6, Function_343());
	Function_344(3, &Global_50170, "PVTD_2", 1, 6, Function_343());
	Function_344(4, &Global_50170, "PVTD_3", 1, 6, Function_343());
	Function_344(5, &Global_50170, "PVKS_1", 1, 6, Function_342());
	Function_344(6, &Global_50170, "PVKS_2", 1, 6, Function_342());
	Function_344(7, &Global_50170, "PVKS2_1", 1, 6, Function_341());
	Function_344(8, &Global_50170, "PVKS2_2", 1, 6, Function_341());
	Function_344(9, &Global_50170, "PVKS2_3", 1, 6, Function_341());
	Function_344(10, &Global_50170, "PVKS2_4", 1, 6, Function_341());
	Function_344(11, &Global_50170, "PVKS2_5", 1, 6, Function_341());
	Function_344(12, &Global_50170, "PVKD_1", 1, 6, Function_340());
	Function_344(13, &Global_50170, "PVKD_2", 1, 6, Function_340());
	Function_344(14, &Global_50170, "PVKD_3", 1, 6, Function_340());
	Function_344(15, &Global_50170, "PVUS1_1", 1, 6, Function_339());
	Function_344(16, &Global_50170, "PVUS1_2", 1, 6, Function_339());
	Function_344(17, &Global_50170, "PVUS1_3", 1, 6, Function_339());
	Function_344(18, &Global_50170, "PVUS2", 1, 6, Function_339());
	Function_344(19, &Global_50170, "PVRV_1", 1, 6, Function_338());
	Function_344(20, &Global_50170, "PVRV_2", 1, 6, Function_338());
	Function_344(21, &Global_50170, "PVRV_3", 1, 6, Function_338());
	Function_344(22, &Global_50170, "PVTS1_1", 1, 6, Function_337());
	Function_344(25, &Global_50170, "PVTS1_4", 1, 6, Function_337());
	Function_344(26, &Global_50170, "PVTS1_5", 1, 6, Function_337());
	Function_344(27, &Global_50170, "PVTS2_1", 1, 6, Function_337());
	Function_344(31, &Global_50170, "PVHYD_1", 1, 6, Function_336());
	Function_344(32, &Global_50170, "PVHYW_1", 1, 6, Function_336());
	Function_344(33, &Global_50170, "PVHYG_1", 1, 6, Function_336());
	Function_344(34, &Global_50170, "PVHYS_1", 1, 6, Function_336());
	Function_344(35, &Global_50170, "PVHYO_1", 1, 6, Function_336());
	Function_344(36, &Global_50170, "PVHYM_1", 1, 6, Function_336());
	Function_344(37, &Global_50170, "PVHYC_1", 1, 6, Function_336());
	Function_344(38, &Global_50170, "PVHYK_1", 1, 6, Function_336());
	Function_344(39, &Global_50170, "PVGTD_1", 1, 6, Function_335());
	Function_344(40, &Global_50170, "PVGTW_1", 1, 6, Function_335());
	Function_344(41, &Global_50170, "PVGTG_1", 1, 6, Function_335());
	Function_344(42, &Global_50170, "PVGTS_1", 1, 6, Function_334());
	Function_344(43, &Global_50170, "PVGTO_1", 1, 6, Function_334());
	Function_344(44, &Global_50170, "PVGTM_1", 1, 6, Function_334());
	Function_344(45, &Global_50170, "PVGTC_1", 1, 6, Function_334());
	Function_344(46, &Global_50170, "PVFFD_1", 1, 6, Function_333());
	Function_344(47, &Global_50170, "PVFFW_1", 1, 6, Function_333());
	Function_344(48, &Global_50170, "PVFFG_1", 1, 6, Function_333());
	Function_344(49, &Global_50170, "PVHWC", 1, 6, Function_332());
	Function_344(50, &Global_50170, "PVHWG", 1, 6, Function_332());
	Function_344(51, &Global_50170, "PVHMC", 1, 6, Function_332());
	Function_344(52, &Global_50170, "PVHCC", 1, 6, Function_332());
	Function_344(54, &Global_50170, "OC_SU", 1, 3, Function_331());
	Function_344(55, &Global_50170, "OC_W2_1", 1, 3, Function_330());
	Function_344(56, &Global_50170, "OC_W2_2", 1, 3, Function_330());
	Function_344(57, &Global_50170, "OC_W2_3", 1, 3, Function_330());
	Function_344(58, &Global_50170, "CA", 1, 7, Function_329());
	Function_344(59, &Global_50170, "CAKD", 1, 7, Function_329());
	Function_344(60, &Global_50170, "CAND", 1, 7, Function_329());
	Function_344(62, &Global_50170, "CASL", 1, 7, Function_329());
	Function_344(61, &Global_50170, "CAMK", 1, 7, Function_329());
	Function_344(63, &Global_50170, "CAMN", 1, 7, Function_329());
	Function_344(64, &Global_50170, "CAGN", 1, 7, Function_329());
	Function_344(65, &Global_50170, "COR1", 1, 7, Function_329());
	Function_344(66, &Global_50170, "COR10", 1, 7, Function_329());
	Function_344(67, &Global_50170, "COR50", 1, 7, Function_329());
	Function_344(68, &Global_50170, "COR250", 1, 7, Function_329());
	Function_344(69, &Global_50170, "COD1", 1, 7, Function_329());
	Function_344(70, &Global_50170, "COD10", 1, 7, Function_329());
	Function_344(71, &Global_50170, "COD50", 1, 7, Function_329());
	Function_344(72, &Global_50170, "COD250", 1, 7, Function_329());
	Function_344(73, &Global_50170, "COA1", 1, 7, Function_329());
	Function_344(74, &Global_50170, "COA10", 1, 7, Function_329());
	Function_344(75, &Global_50170, "COA50", 1, 7, Function_329());
	Function_344(76, &Global_50170, "COA250", 1, 7, Function_329());
	Function_344(77, &Global_50170, "CSPKTM1", 1, 7, Function_328());
	Function_344(78, &Global_50170, "CSPKTM2", 1, 7, Function_328());
	Function_344(79, &Global_50170, "CSPKTM3", 1, 7, Function_328());
	Function_344(80, &Global_50170, "CSPKKS1", 1, 7, Function_328());
	Function_344(81, &Global_50170, "CSPKKS2", 1, 7, Function_328());
	Function_344(82, &Global_50170, "CSPKKS3", 1, 7, Function_328());
	Function_344(83, &Global_50170, "CSPKKL1", 1, 7, Function_328());
	Function_344(84, &Global_50170, "CSPKKL2", 1, 7, Function_328());
	Function_344(85, &Global_50170, "CSPKKL3", 1, 7, Function_328());
	Function_344(86, &Global_50170, "CSPKND", 1, 7, Function_328());
	Function_344(87, &Global_50170, "CSPKNN", 1, 7, Function_328());
	Function_344(88, &Global_50170, "CSPKCW1", 1, 7, Function_328());
	Function_344(89, &Global_50170, "CSPKCW2", 1, 7, Function_328());
	Function_344(90, &Global_50170, "CSPKCW3", 1, 7, Function_328());
	Function_344(91, &Global_50170, "CSFMTM1", 1, 7, Function_327());
	Function_344(92, &Global_50170, "CSFMTM2", 1, 7, Function_327());
	Function_344(93, &Global_50170, "CSFMTM3", 1, 7, Function_327());
	Function_344(94, &Global_50170, "CSFMKS1", 1, 7, Function_327());
	Function_344(95, &Global_50170, "CSFMKS2", 1, 7, Function_327());
	Function_344(96, &Global_50170, "CSFMKS3", 1, 7, Function_327());
	Function_344(97, &Global_50170, "CSFMKL1", 1, 7, Function_327());
	Function_344(98, &Global_50170, "CSFMKL2", 1, 7, Function_327());
	Function_344(99, &Global_50170, "CSFMKL3", 1, 7, Function_327());
	Function_344(100, &Global_50170, "CSFMND", 1, 7, Function_327());
	Function_344(101, &Global_50170, "CSFMNN", 1, 7, Function_327());
	Function_344(102, &Global_50170, "CSFMGT1", 1, 7, Function_327());
	Function_344(103, &Global_50170, "CSFMGT2", 1, 7, Function_327());
	Function_344(104, &Global_50170, "CSFMGT3", 1, 7, Function_327());
	Function_344(105, &Global_50170, "CSTSTM1", 1, 7, Function_326());
	Function_344(106, &Global_50170, "CSTSTM2", 1, 7, Function_326());
	Function_344(107, &Global_50170, "CSTSTM3", 1, 7, Function_326());
	Function_344(108, &Global_50170, "CSTSKS1", 1, 7, Function_326());
	Function_344(109, &Global_50170, "CSTSKS2", 1, 7, Function_326());
	Function_344(110, &Global_50170, "CSTSKS3", 1, 7, Function_326());
	Function_344(111, &Global_50170, "CSTSKL1", 1, 7, Function_326());
	Function_344(112, &Global_50170, "CSTSKL2", 1, 7, Function_326());
	Function_344(113, &Global_50170, "CSTSKL3", 1, 7, Function_326());
	Function_344(114, &Global_50170, "CSTSND", 1, 7, Function_326());
	Function_344(115, &Global_50170, "CSTSNN", 1, 7, Function_326());
	Function_344(116, &Global_50170, "CSTSGT1", 1, 7, Function_326());
	Function_344(117, &Global_50170, "CSTSGT2", 1, 7, Function_326());
	Function_344(118, &Global_50170, "CSTSGT3", 1, 7, Function_326());
	Function_344(119, &Global_50170, "CSGPTM1", 1, 7, Function_325());
	Function_344(120, &Global_50170, "CSGPTM2", 1, 7, Function_325());
	Function_344(121, &Global_50170, "CSGPTM3", 1, 7, Function_325());
	Function_344(122, &Global_50170, "CSGPKS1", 1, 7, Function_325());
	Function_344(123, &Global_50170, "CSGPKS2", 1, 7, Function_325());
	Function_344(124, &Global_50170, "CSGPKS3", 1, 7, Function_325());
	Function_344(125, &Global_50170, "CSGPKL1", 1, 7, Function_325());
	Function_344(126, &Global_50170, "CSGPKL2", 1, 7, Function_325());
	Function_344(127, &Global_50170, "CSGPKL3", 1, 7, Function_325());
	Function_344(128, &Global_50170, "CSGPND", 1, 7, Function_325());
	Function_344(129, &Global_50170, "CSGPNN", 1, 7, Function_325());
	Function_344(130, &Global_50170, "CSGPBG1", 1, 7, Function_325());
	Function_344(131, &Global_50170, "CSGPBG2", 1, 7, Function_325());
	Function_344(132, &Global_50170, "CSGPBG3", 1, 7, Function_325());
	Function_344(133, &Global_50170, "CSTMTM1", 1, 7, Function_324());
	Function_344(134, &Global_50170, "CSTMTM2", 1, 7, Function_324());
	Function_344(135, &Global_50170, "CSTMTM3", 1, 7, Function_324());
	Function_344(136, &Global_50170, "CSTMKS1", 1, 7, Function_324());
	Function_344(137, &Global_50170, "CSTMKS2", 1, 7, Function_324());
	Function_344(138, &Global_50170, "CSTMKS3", 1, 7, Function_324());
	Function_344(139, &Global_50170, "CSTMKL1", 1, 7, Function_324());
	Function_344(140, &Global_50170, "CSTMKL2", 1, 7, Function_324());
	Function_344(141, &Global_50170, "CSTMKL3", 1, 7, Function_324());
	Function_344(142, &Global_50170, "CSTMND", 1, 7, Function_324());
	Function_344(143, &Global_50170, "CSTMNN", 1, 7, Function_324());
	Function_344(144, &Global_50170, "CSTMCK1", 1, 7, Function_324());
	Function_344(145, &Global_50170, "CSTMCK2", 1, 7, Function_324());
	Function_344(146, &Global_50170, "CSTMCK3", 1, 7, Function_324());
	Function_344(147, &Global_50170, "CSNSTM1", 1, 7, Function_323());
	Function_344(148, &Global_50170, "CSNSTM2", 1, 7, Function_323());
	Function_344(149, &Global_50170, "CSNSTM3", 1, 7, Function_323());
	Function_344(150, &Global_50170, "CSNSKS1", 1, 7, Function_323());
	Function_344(151, &Global_50170, "CSNSKS2", 1, 7, Function_323());
	Function_344(152, &Global_50170, "CSNSKS3", 1, 7, Function_323());
	Function_344(153, &Global_50170, "CSNSKL1", 1, 7, Function_323());
	Function_344(154, &Global_50170, "CSNSKL2", 1, 7, Function_323());
	Function_344(155, &Global_50170, "CSNSKL3", 1, 7, Function_323());
	Function_344(156, &Global_50170, "CSNSND", 1, 7, Function_323());
	Function_344(157, &Global_50170, "CSNSNN", 1, 7, Function_323());
	Function_344(158, &Global_50170, "CSNSHT1", 1, 7, Function_323());
	Function_344(159, &Global_50170, "CSNSHT2", 1, 7, Function_323());
	Function_344(160, &Global_50170, "CSNSHT3", 1, 7, Function_323());
	Function_344(161, &Global_50170, "CAA", 1, 7, Function_322());
	Function_344(162, &Global_50170, "CAAKD", 1, 7, Function_322());
	Function_344(163, &Global_50170, "CAAND", 1, 7, Function_322());
	Function_344(164, &Global_50170, "CAAMK", 1, 7, Function_322());
	Function_344(165, &Global_50170, "CAASL", 1, 7, Function_322());
	Function_344(166, &Global_50170, "CAAMN", 1, 7, Function_322());
	Function_344(167, &Global_50170, "CAAGN", 1, 7, Function_322());
	Function_344(168, &Global_50170, "CAACU", 1, 7, Function_322());
	Function_344(169, &Global_50170, "CAPKTM1", 1, 7, Function_322());
	Function_344(170, &Global_50170, "CAPKTM2", 1, 7, Function_322());
	Function_344(171, &Global_50170, "CAPKTM3", 1, 7, Function_322());
	Function_344(172, &Global_50170, "CAFMTM1", 1, 7, Function_322());
	Function_344(173, &Global_50170, "CAFMTM2", 1, 7, Function_322());
	Function_344(174, &Global_50170, "CAFMTM3", 1, 7, Function_322());
	Function_344(175, &Global_50170, "CATSTM1", 1, 7, Function_322());
	Function_344(176, &Global_50170, "CATSTM2", 1, 7, Function_322());
	Function_344(177, &Global_50170, "CATSTM3", 1, 7, Function_322());
	Function_344(178, &Global_50170, "CAGPTM1", 1, 7, Function_322());
	Function_344(179, &Global_50170, "CAGPTM2", 1, 7, Function_322());
	Function_344(180, &Global_50170, "CAGPTM3", 1, 7, Function_322());
	Function_344(181, &Global_50170, "CATMTM1", 1, 7, Function_322());
	Function_344(182, &Global_50170, "CATMTM2", 1, 7, Function_322());
	Function_344(183, &Global_50170, "CATMTM3", 1, 7, Function_322());
	Function_344(184, &Global_50170, "CANSTM1", 1, 7, Function_322());
	Function_344(185, &Global_50170, "CANSTM2", 1, 7, Function_322());
	Function_344(186, &Global_50170, "CANSTM3", 1, 7, Function_322());
	Function_344(187, &Global_50170, "WP_REP", 1, 5, Function_321());
	Function_344(188, &Global_50170, "WP_VOL", 1, 5, Function_321());
	Function_344(189, &Global_50170, "WP_WIN", 1, 5, Function_321());
	Function_344(190, &Global_50170, "WP_SCH", 1, 5, Function_321());
	Function_344(191, &Global_50170, "WP_PMP", 1, 5, Function_321());
	Function_344(192, &Global_50170, "WP_SPR", 1, 5, Function_321());
	Function_344(193, &Global_50170, "WP_DBL", 1, 5, Function_321());
	Function_344(194, &Global_50170, "WP_SAW", 1, 5, Function_321());
	Function_344(195, &Global_50170, "WP_ROL", 1, 5, Function_321());
	Function_344(196, &Global_50170, "WP_SEMP", 1, 5, Function_321());
	Function_344(197, &Global_50170, "WP_SEMS", 1, 5, Function_321());
	Function_344(198, &Global_50170, "WP_CAR", 1, 5, Function_321());
	Function_344(199, &Global_50170, "WP_BUF", 1, 5, Function_321());
	Function_344(200, &Global_50170, "WP_HEN", 1, 5, Function_321());
	Function_344(201, &Global_50170, "WP_HPW", 1, 5, Function_321());
	Function_344(202, &Global_50170, "WP_DBB", 1, 5, Function_321());
	Function_344(203, &Global_50170, "WP_BLT", 1, 5, Function_321());
	Function_344(204, &Global_50170, "WP_EVN", 1, 5, Function_321());
	Function_344(205, &Global_50170, "WP_LMT", 1, 5, Function_321());
	Function_344(206, &Global_50170, "WP_MSR", 1, 5, Function_321());
	Function_344(207, &Global_50170, "WP_REP2", 1, 5, Function_320());
	Function_344(208, &Global_50170, "WP_VOL2", 1, 5, Function_320());
	Function_344(209, &Global_50170, "WP_WIN2", 1, 5, Function_320());
	Function_344(210, &Global_50170, "WP_SCH2", 1, 5, Function_320());
	Function_344(211, &Global_50170, "WP_PMP2", 1, 5, Function_320());
	Function_344(212, &Global_50170, "WP_SPR2", 1, 5, Function_320());
	Function_344(213, &Global_50170, "WP_DBL2", 1, 5, Function_320());
	Function_344(214, &Global_50170, "WP_SAW2", 1, 5, Function_320());
	Function_344(215, &Global_50170, "WP_ROL2", 1, 5, Function_320());
	Function_344(216, &Global_50170, "WP_SAP2", 1, 5, Function_320());
	Function_344(217, &Global_50170, "WP_SAS2", 1, 5, Function_320());
	Function_344(218, &Global_50170, "WP_CAR2", 1, 5, Function_320());
	Function_344(219, &Global_50170, "WP_BUF2", 1, 5, Function_320());
	Function_344(220, &Global_50170, "WP_HEN2", 1, 5, Function_320());
	Function_344(221, &Global_50170, "WP_HPW2", 1, 5, Function_320());
	Function_344(222, &Global_50170, "WP_DBB2", 1, 5, Function_320());
	Function_344(223, &Global_50170, "WP_BLT2", 1, 5, Function_320());
	Function_344(224, &Global_50170, "WP_EVN2", 1, 5, Function_320());
	Function_344(225, &Global_50170, "WP_LMT2", 1, 5, Function_320());
	Function_344(226, &Global_50170, "WP_MSR2", 1, 5, Function_320());
	return;
}

bool Function_320() //Position: 0xC753 / 51027
{
	return "challenge_01lvl2";
}

bool Function_321() //Position: 0xC76C / 51052
{
	return "challenge_01";
}

bool Function_322() //Position: 0xC781 / 51073
{
	return "COOP_advanced_icon";
}

bool Function_323() //Position: 0xC79C / 51100
{
	return "SC_AA_Nosalida_Icon";
}

bool Function_324() //Position: 0xC7B8 / 51128
{
	return "SC_AA_TwinRocks_Icon";
}

bool Function_325() //Position: 0xC7D5 / 51157
{
	return "SC_AA_Gaptooth_Icon";
}

bool Function_326() //Position: 0xC7F1 / 51185
{
	return "SC_AA_Tesoro_Icon";
}

bool Function_327() //Position: 0xC80B / 51211
{
	return "SC_AA_Mercer_Icon";
}

bool Function_328() //Position: 0xC825 / 51237
{
	return "SC_AA_Pikes_Icon";
}

bool Function_329() //Position: 0xC83E / 51262
{
	return "nCOOP_icon";
}

bool Function_330() //Position: 0xC850 / 51280
{
	return "challenge_04lvl2";
}

bool Function_331() //Position: 0xC869 / 51305
{
	return "challenge_04";
}

bool Function_332() //Position: 0xC87E / 51326
{
	return "MP_HeavyWeapons_Icon";
}

bool Function_333() //Position: 0xC89B / 51355
{
	return "MP_Goldrush_icon";
}

bool Function_334() //Position: 0xC8B4 / 51380
{
	return "MP_GrabTheBagII_icon";
}

bool Function_335() //Position: 0xC8D1 / 51409
{
	return "MP_GrabTheBag_Icon";
}

bool Function_336() //Position: 0xC8EC / 51436
{
	return "MP_HoldYourOwn_Icon";
}

bool Function_337() //Position: 0xC908 / 51464
{
	return "MP_TrickShot_Icon";
}

bool Function_338() //Position: 0xC922 / 51490
{
	return "MP_Revenge_Icon";
}

bool Function_339() //Position: 0xC93A / 51514
{
	return "MP_Unstoppable_Icon";
}

bool Function_340() //Position: 0xC956 / 51542
{
	return "MP_KDR_Icon";
}

bool Function_341() //Position: 0xC96A / 51562
{
	return "KillStreakII_Icon";
}

bool Function_342() //Position: 0xC984 / 51588
{
	return "MP_KillStreak_Icon";
}

bool Function_343() //Position: 0xC99F / 51615
{
	return "MP_TDM_Icon";
}

void Function_344(int iParam0, int iParam1, char* cParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0xC9B3 / 51635
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
		Function_155(iParam0, 4);
		Function_155(iParam0, 2);
		Function_347(iParam0, 0);
		iParam1[iParam022]->f_12 = 0.0f;
		SET_JOURNAL_ENTRY_PROGRESS(Function_67(iParam0), iParam1[iParam022]->f_12, false, 0);
		REMOVE_JOURNAL_ENTRY(Function_67(iParam0), true);
	}
	if (!IS_STRING_VALID(bParam5))
	{
		bParam5 = Function_346();
	}
	Function_345(iParam0, bParam4, bParam5);
	Function_156(iParam0, 0, 0, 1);
	if (StackVal && StackVal != 2 != 10)
	{
		Function_98(iParam0, 1);
	}
	else
	{
		iParam1[iParam022]->f_4 = 0;
		SET_JOURNAL_ENTRY_PROGRESS(Function_67(iParam0), iParam1[iParam022]->f_12, false, 0);
	}
}

var Function_345(int iParam0, int iParam1, int iParam2) //Position: 0xCAC3 / 51907
{
	struct<6> Var0;
	struct<4> Var6;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_100(iParam0) };
	Global_50170[iParam022].f_24 = CREATE_JOURNAL_ENTRY(&Var0, iParam1, false, iParam2);
	Var6 = { StackVal, StackVal, StackVal, Function_66(iParam0) };
	UI_SET_STRING(&Var0, UI_GET_STRING(&Var6));
	return Global_50170[iParam022].f_24;
}

bool Function_346() //Position: 0xCB01 / 51969
{
	return "SC_Travel_Icon";
}

void Function_347(int iParam0, bool bParam1) //Position: 0xCB18 / 51992
{
	REMOVE_JOURNAL_ENTRY(Global_50170[iParam022].f_24, bParam1);
	return;
}

bool Function_348() //Position: 0xCB2C / 52012
{
	return "MP_DM_Icon";
}

void Function_349() //Position: 0xCB3F / 52031
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (Global_63041 - 1))
	{
		Function_350(iVar0);
		iVar0++;
	}
	return;
}

void Function_350(int iParam0) //Position: 0xCB63 / 52067
{
	Global_63041[iParam08] = 4294967295;
	Global_63041[iParam08].f_4 = 4294967295;
	strcpy(&Global_63041[iParam08] + 8, "NHIL", 16);
	strcpy(&Global_63041[iParam08] + 24, "NHIL", 8);
	return;
}

void Function_351() //Position: 0xCB9F / 52127
{
	Function_116(2, 9);
	Function_116(2, 6);
	Function_116(2, 7);
	Function_116(2, 8);
	Function_116(9, 2);
	Function_116(9, 4);
	Function_116(9, 5);
	Function_116(9, 7);
	Function_116(9, 8);
	Function_116(4, 9);
	Function_116(4, 5);
	Function_116(4, 6);
	Function_116(4, 7);
	Function_116(4, 8);
	Function_116(5, 9);
	Function_116(5, 4);
	Function_116(5, 7);
	Function_116(5, 8);
	Function_116(6, 2);
	Function_116(6, 4);
	Function_116(6, 8);
	Function_116(7, 2);
	Function_116(7, 9);
	Function_116(7, 4);
	Function_116(7, 5);
	Function_116(7, 8);
	Function_116(8, 2);
	Function_116(8, 9);
	Function_116(8, 4);
	Function_116(8, 5);
	Function_116(8, 6);
	Function_116(8, 7);
	return;
}

