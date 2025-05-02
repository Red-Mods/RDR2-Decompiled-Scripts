//Decompiled with MagicRDR v1.0
//Function Count : 90
//Statics Count : 37
//Natives Count : 199
//Parameters Count : 1

#region Local Var
	bool bLocal_0 = false;
	vector3 vLocal_1 = { 0.0f, 0.0f, 0.0f };
	float fLocal_4 = 0.0f;
	float fLocal_5 = 0.0f;
	bool bLocal_6 = false;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	struct<25> Local_9 = { 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_34 = 0;
	bool bLocal_35 = false;
	var uScriptParam_0 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	struct<8> Var6;
	vector3 vVar14;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	vector3 vVar20;
	bool bVar23;
	struct<5> Var24;
	vector3 vVar31;
	vector3 vVar34;
	vector3 vVar37;
	int iVar40;
	int iVar41;
	
	bLocal_0 = 100;
	fLocal_4 = 0.0f;
	fLocal_5 = 0.0f;
	iLocal_16 = 0;
	iLocal_34 = 0;
	bLocal_35 = false;
	uScriptParam_0 = uScriptParam_0;
	while (IS_GRINGO_ACTIVE())
	{
		if (iLocal_16 != 3 && Function_89((&Global_12976 + 36)->f_20, 4))
		{
			if (IS_ACTOR_RIDING(Global_34573))
			{
				if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_26))
				{
					RELEASE_SCRIPT_USE_CONTEXT(bLocal_26);
				}
			}
			if (IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
			{
				bVar0 = GET_MOUNT(Global_34573);
				if ((((IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "item_binoculars") || IS_ACTOR_JUMPING(Global_34573)) || IS_ACTOR_JUMPING(bVar0)) || !IS_ACTOR_ALIVE(bVar0)) || !IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
				{
					if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_25))
					{
						RELEASE_SCRIPT_USE_CONTEXT(bLocal_25);
					}
				}
				else
				{
					bVar1 = false;
					bLocal_24 = Function_87(bVar0);
					if (IS_GRINGO_VALID(bLocal_24))
					{
						if (GRINGO_IS_ACTIVATION_ALLOWED(bLocal_24))
						{
							if (!Function_86(bLocal_24, bVar0))
							{
								if (!IS_SCRIPT_USE_CONTEXT_VALID(bLocal_25))
								{
									bLocal_25 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("hitchHorse", fLocal_29, 10, 7, "", "", "", "", 32, 0);
								}
							}
							else
							{
								bVar1 = true;
							}
						}
						else
						{
							bVar1 = true;
						}
					}
					else
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_25))
						{
							RELEASE_SCRIPT_USE_CONTEXT(bLocal_25);
						}
					}
				}
			}
			else
			{
				if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_25))
				{
					RELEASE_SCRIPT_USE_CONTEXT(bLocal_25);
				}
				bVar2 = true;
				bVar4 = "";
				bVar3 = Function_84(&bVar4, 1);
				if (!bVar3 || !IS_ACTOR_VALID(bVar4))
				{
					bVar2 = false;
				}
				if (bVar2)
				{
					if ((((((!IS_ACTOR_ALIVE(bVar4) || IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "item_binoculars")) || IS_ACTOR_JUMPING(Global_34573)) || IS_ACTOR_JUMPING(bVar4)) || IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(Global_34573))) || IS_ACTOR_USING_COVER(Global_34573)) || IS_ACTOR_RIDING(Global_34573))
					{
						bVar2 = false;
					}
				}
				if (bVar2)
				{
					bVar5 = false;
					bLocal_24 = Function_87(bVar4);
					if (IS_GRINGO_VALID(bLocal_24))
					{
						if (GRINGO_IS_ACTIVATION_ALLOWED(bLocal_24))
						{
							if (!Function_86(bLocal_24, bVar4))
							{
								if (!IS_SCRIPT_USE_CONTEXT_VALID(bLocal_26))
								{
									bLocal_26 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("hitchHorse", bLocal_29, 10, 7, "", "", "", "", 4, 0);
								}
							}
							else
							{
								bVar5 = true;
							}
						}
						else
						{
							bVar5 = true;
						}
					}
					else
					{
						bVar5 = true;
					}
					if (bVar5)
					{
						if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_26))
						{
							RELEASE_SCRIPT_USE_CONTEXT(bLocal_26);
						}
					}
				}
				else if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_26))
				{
					RELEASE_SCRIPT_USE_CONTEXT(bLocal_26);
				}
			}
		}
		else if (!Function_89((&Global_12976 + 36)->f_20, 4))
		{
			if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_26))
			{
				RELEASE_SCRIPT_USE_CONTEXT(bLocal_26);
			}
			if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_25))
			{
				RELEASE_SCRIPT_USE_CONTEXT(bLocal_25);
			}
		}
		if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_25) || IS_SCRIPT_USE_CONTEXT_VALID(bLocal_26))
		{
			DECOR_SET_BOOL(Global_34573, "Hitch_BlockJump", true);
		}
		else if (DECOR_CHECK_EXIST(Global_34573, "Hitch_BlockJump"))
		{
			DECOR_REMOVE(Global_34573, "Hitch_BlockJump");
		}
		switch (iLocal_16)
		{
			case 0x00000000:
				Function_82(&bLocal_17, "custom/horse_tend", 8, 0);
				Function_82(&bLocal_17, "horse_tend", 5, 0);
				iLocal_16 = 1;
				break;
			
			case 0x00000001:
				if (Function_76(&bLocal_17))
				{
					iLocal_16 = 2;
				}
				break;
			
			case 0x00000002:
				if (!IS_VOLUME_VALID(bLocal_29))
				{
					Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_74("HitchLayout_") };
					bLocal_30 = CREATE_LAYOUT(&Var6);
					Function_73(GRINGO_GET_MY_OBJECT_REF());
					vVar14 = { StackVal, StackVal, Function_73(GRINGO_GET_MY_OBJECT_REF()) };
					bLocal_29 = CREATE_VOLUME_IN_LAYOUT(bLocal_30, Function_72(), 3, vVar14, 0.0f, 0.0f, 0.0f, 5,75f, 3.0f, 5,75f);
					bLocal_0 = false;
					iLocal_16 = 3;
				}
				break;
			
			case 0x00000003:
				bVar18 = false;
				bVar19 = false;
				if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_25))
				{
					if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(bLocal_25))
					{
						RELEASE_SCRIPT_USE_CONTEXT(bLocal_25);
						if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_26))
						{
							RELEASE_SCRIPT_USE_CONTEXT(bLocal_26);
						}
						bVar18 = true;
						bVar19 = true;
						bVar17 = GET_MOUNT(Global_34573);
					}
				}
				if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_26))
				{
					if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(bLocal_26))
					{
						RELEASE_SCRIPT_USE_CONTEXT(bLocal_26);
						if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_25))
						{
							RELEASE_SCRIPT_USE_CONTEXT(bLocal_25);
						}
						bVar18 = true;
						Function_84(&bVar17, 1);
					}
				}
				if (bVar18)
				{
					Function_69(0, 0x40400000);
					DECOR_SET_BOOL(Global_34573, "TempDisableRespawn", true);
					iLocal_34 = 0;
					SET_PLAYER_CONTROL(0, 0, 0, 0);
					Function_67(bVar17, 0);
					RESET_ANIM_SET_FOR_ACTOR(bVar17, 1);
					GRINGO_ENABLE_SPAWN(bLocal_24, 0);
					TASK_STAND_STILL(bVar17, -1.0f, 0, 0);
					ENABLE_USE_CONTEXTS(0);
					Function_65(&uLocal_31);
					vVar20 = { 0.0f, 0.0f, 0.0f };
					GRINGO_GET_USE_COMPONENT_POSITION_EXT(bLocal_24, "UseCase1", &vVar20);
					bVar23 = GRINGO_GET_USE_COMPONENT_HEADING_EXT(bLocal_24, "UseCase1");
					Var24 = { 0.0f, 0.0f, 0.0f };
					GET_OBJECT_ORIENTATION(bVar17, &Var24);
					bVar27 = bVar23;
					if (StackVal && StackVal <= (bVar23 - 5.0f) >= (bVar23 + 5.0f))
					{
						bVar27 = StackVal;
					}
					else if (StackVal < (bVar23 + 5.0f))
					{
						bVar27 = (bVar23 + 5.0f);
					}
					else if (StackVal > (bVar23 - 5.0f))
					{
						bVar27 = (bVar23 - 5.0f);
					}
					vVar28 = { 0.0f, 0.0f, 0.0f };
					vVar31 = { 0.0f, 0.0f, 0.0f };
					FIND_GROUND_INTERSECTION(&vVar20, 5.0f, &vVar28, &vVar31);
					TELEPORT_ACTOR_WITH_HEADING(bVar17, vVar28, bVar27, 1, true, 1);
					Function_73(bVar17);
					*(&Local_9 + 12) = { StackVal, StackVal, Function_73(bVar17) };
					Function_64(bVar17);
					Local_9 = { StackVal, StackVal, Function_64(bVar17) };
					Local_9.f_24 = 0;
					if (!bVar19)
					{
						if (Function_62(GET_OBJECT_FROM_GRINGO(bLocal_24), Global_34573))
						{
							bLocal_35 = false;
						}
						else
						{
							bLocal_35 = true;
						}
						bLocal_28 = CREATE_LEASH_OBJECT(bVar17, Function_72(), 1,55f, 10, 0, 0,006f, 10.0f, 10000.0f, 200.0f, 8.0f, 100.0f, 1.0f, 0, 0, 1);
						LEASH_ATTACH_TO_OBJECT_BONE(bLocal_28, bVar17, "LowLip1", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0, 1, 0);
						if (bLocal_35)
						{
							GRINGO_GET_USE_COMPONENT_OFFSET_POSITION_EXT(bLocal_24, "UseCase1", -0,5f, 0.0f, -1,5f, &vLocal_1);
							SET_OBJECT_POSITION_ON_GROUND(Global_34573, vLocal_1);
							bVar23 = (GET_OBJECT_HEADING(GET_OBJECT_FROM_GRINGO(bLocal_24)) - 120.0f);
							SET_OBJECT_ORIENTATION(Global_34573, 0.0f, bVar23, 0.0f);
							LEASH_ATTACH_TO_OBJECT_BONE(bLocal_28, Global_34573, "finger_22_l", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1, 1, 0);
						}
						else
						{
							GRINGO_GET_USE_COMPONENT_OFFSET_POSITION_EXT(bLocal_24, "UseCase1", 0,5f, 0.0f, -1,5f, &vLocal_1);
							SET_OBJECT_POSITION_ON_GROUND(Global_34573, vLocal_1);
							bVar23 = (GET_OBJECT_HEADING(GET_OBJECT_FROM_GRINGO(bLocal_24)) + 120.0f);
							SET_OBJECT_ORIENTATION(Global_34573, 0.0f, bVar23, 0.0f);
							LEASH_ATTACH_TO_OBJECT_BONE(bLocal_28, Global_34573, "finger_13_r", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1, 1, 0);
						}
						bLocal_27 = Function_58(Global_30616, 0, &Local_9, Global_34573, 1, 0, 0);
					}
					else
					{
						bLocal_27 = Function_54(Global_30616, 0, &Local_9, Global_34573, 1, 0, 0);
					}
					SET_ANIM_SET_FOR_ACTOR(Global_34573, "horse_tend", 0);
					if (GET_MOUNT(Global_34573) != bVar17 && IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
					{
						SET_ANIM_SET_FOR_ACTOR(bVar17, "horse_tend", 0);
						SET_ACTION_NODE_FOR_ACTOR(bVar17, "horse_tend/horse");
					}
					bLocal_0 = false;
					iLocal_16 = 4;
				}
				break;
			
			case 0x00000004:
				SET_ANIM_SET_FOR_ACTOR(Global_34573, "horse_tend", 0);
				if (GET_MOUNT(Global_34573) != bVar17 && IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
				{
					bLocal_28 = CREATE_LEASH_OBJECT(bVar17, Function_72(), 1,55f, 10, 0, 0,006f, 10.0f, 10000.0f, 200.0f, 8.0f, 100.0f, 1.0f, 0, 0, 1);
					LEASH_ATTACH_TO_OBJECT_BONE(bLocal_28, bVar17, "LowLip1", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0, 1, 0);
					LEASH_ATTACH_TO_OBJECT_BONE(bLocal_28, Global_34573, "finger_22_l", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1, 1, 0);
					fLocal_4 = 3.0f;
					fLocal_5 = 3.0f;
					SET_ACTION_NODE_FOR_ACTOR(Global_34573, "horse_tend/player");
				}
				else
				{
					fLocal_4 = 1.0f;
					fLocal_5 = 1.0f;
					if (bLocal_35)
					{
						SET_ACTION_NODE_FOR_ACTOR(Global_34573, "horse_tend/player_standing_left");
					}
					else
					{
						SET_ACTION_NODE_FOR_ACTOR(Global_34573, "horse_tend/player_standing_right");
					}
				}
				bLocal_0 = 200;
				iLocal_16 = 5;
				break;
			
			case 0x00000005:
				if (Function_52(&uLocal_31) <= fLocal_4)
				{
					if (!DECOR_CHECK_EXIST(bVar17, "HorseLeash"))
					{
						vVar37 = { 0.0f, 0.0f, 0.0f };
						Function_73(GET_OBJECT_FROM_GRINGO(bLocal_24));
						vVar34 = { StackVal, StackVal, Function_73(GET_OBJECT_FROM_GRINGO(bLocal_24)) };
						LEASH_ATTACH_TO_WORLD(bLocal_28, vVar34, 0.0f, 0.0f, 0.0f, 1);
						DECOR_SET_OBJECT(bVar17, "HorseLeash", bLocal_28);
						LEASH_CONSTRAIN(bLocal_28);
						LEASH_SET_CONSTRAINT_LENGTH(bLocal_28, 1,55f);
					}
					Function_51(&uLocal_31);
					iLocal_16 = 6;
				}
				break;
			
			case 0x00000006:
				RESET_ANIM_SET_FOR_ACTOR(bVar17, 1);
				TASK_PRIORITY_SET(bVar17, true);
				TASK_USE_GRINGO(bVar17, bLocal_24, "UseCase1", true, 1);
				iVar40 = (StackVal + 976);
				if (GET_ACTOR_ENUM(bVar17) != iVar40)
				{
					if (!Function_50() && !NET_IS_IN_SESSION())
					{
						if (Global_3380)
						{
							iVar41 = GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(bVar17));
							if ((GET_GC_LAYOUT() != iVar41 || GET_AMBIENT_LAYOUT() != iVar41) || FIND_NAMED_LAYOUT("PlayerLayout") != iVar41)
							{
								Function_49(&Global_12976 + 36 + 20, 2);
								Function_48(bVar17, 1);
								if (!DECOR_CHECK_EXIST(Global_34573, "BlockHitchHelp"))
								{
									Function_47("HorseHitch_Help_SavedHorse", 0x41200000, 1, 0, 2, 1, 0);
								}
							}
						}
						else
						{
							Function_49(&Global_12976 + 36 + 20, 2);
							Function_48(bVar17, 1);
							if (!DECOR_CHECK_EXIST(Global_34573, "BlockHitchHelp"))
							{
								Function_47("HorseHitch_Help_SavedHorse", 0x41200000, 1, 0, 2, 1, 0);
							}
						}
					}
					if ((!Global_3380 && !Function_50()) && !NET_IS_IN_SESSION())
					{
						if (!Function_46(0, 0, 1, 1))
						{
							Function_8(1);
							Function_7(1, 9);
						}
						else
						{
							Function_6();
						}
					}
				}
				iLocal_16 = 7;
				break;
			
			case 0x00000007:
				bLocal_24 = "";
				bVar17 = "";
				if (!Function_5(&bLocal_6))
				{
					Function_65(&bLocal_6);
				}
				else if (!iLocal_34)
				{
					iLocal_34 = 1;
					SET_PLAYER_CONTROL(0, 1, 0, 0);
					ENABLE_USE_CONTEXTS(1);
					DECOR_REMOVE(Global_34573, "TempDisableRespawn");
					ACTOR_DISMOUNT_NOW(Global_34573);
				}
				else if (Function_52(&bLocal_6) < fLocal_5 && iLocal_34)
				{
					DESTROY_OBJECT(bLocal_27);
					Function_51(&bLocal_6);
					iLocal_16 = 3;
				}
				break;
		}
		GRINGO_WAIT(bLocal_0);
	}
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "Hitch_BlockJump"))
		{
			DECOR_REMOVE(Global_34573, "Hitch_BlockJump");
		}
	}
	Function_1(&bLocal_17);
	if (IS_LAYOUTREF_VALID(bLocal_30))
	{
		DESTROY_LAYOUT(bLocal_30);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_26))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_26);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_25))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_25);
	}
	return;
}

void Function_1(int iParam0) //Position: 0xA98 / 2712
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_2(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_2(var uParam0, int iParam1) //Position: 0xABE / 2750
{
	if (Function_4(uParam0[iParam13], 4))
	{
		if (Function_4(uParam0[iParam13], 1))
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
			Function_3(uParam0[iParam13], 1);
			Function_3(uParam0[iParam13], 2);
			Function_3(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_3(var uParam0, int iParam1) //Position: 0xBEC / 3052
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_4(var uParam0, int iParam1) //Position: 0xC06 / 3078
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_5(bool bParam0) //Position: 0xC23 / 3107
{
	return Function_89(*bParam0, 1);
}

void Function_6() //Position: 0xC30 / 3120
{
	return;
}

void Function_7(var uParam0, int iParam1) //Position: 0xC36 / 3126
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = uParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_50())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_8(bool bParam0) //Position: 0xC78 / 3192
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_39();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_10();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_9(&Global_63095, 1);
		Function_9(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_9(var uParam0, int iParam1) //Position: 0xCC9 / 3273
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_10() //Position: 0xCDC / 3292
{
	Function_37();
	Function_36();
	Function_36();
	Function_35();
	Function_35();
	Function_34();
	Function_34();
	Function_18();
	Function_18();
	if (!Function_50())
	{
		Function_15();
		Function_14();
		Function_13();
		Function_12();
	}
	Function_11();
	return;
}

void Function_11() //Position: 0xD0F / 3343
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

void Function_12() //Position: 0xE15 / 3605
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

void Function_13() //Position: 0xE48 / 3656
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

void Function_14() //Position: 0xFD6 / 4054
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

void Function_15() //Position: 0x118A / 4490
{
	Function_16(&Global_28260, 1, 0);
	return;
}

void Function_16(int iParam0, bool bParam1, var uParam2) //Position: 0x1198 / 4504
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
	
	bVar0 = Function_17();
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

var Function_17() //Position: 0x1389 / 5001
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_18() //Position: 0x139E / 5022
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
	Function_19(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_19(int iParam0, bool bParam1, bool bParam2) //Position: 0x1439 / 5177
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
		Function_20(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_20(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x16D4 / 5844
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
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_21(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_72(), &Var9);
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

var Function_21(int iParam0) //Position: 0x1D01 / 7425
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_22(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1D12 / 7442
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

struct<32> Function_23(char* cParam0, char* cParam1) //Position: 0x1E07 / 7687
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_24(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1E20 / 7712
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_26(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_25(Function_26(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_25(int iParam0, int iParam1) //Position: 0x1E85 / 7813
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_26(int iParam0, bool bParam1) //Position: 0x1E97 / 7831
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_27(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1EA9 / 7849
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

int Function_28(int iParam0) //Position: 0x1FD9 / 8153
{
	return Global_35278[iParam020].f_48;
}

float Function_29(int iParam0) //Position: 0x1FE8 / 8168
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_30(int iParam0) //Position: 0x2021 / 8225
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_31(int iParam0) //Position: 0x205E / 8286
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

int Function_32(int iParam0, bool bParam1, bool bParam2) //Position: 0x21F8 / 8696
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

int Function_33(bool bParam0) //Position: 0x2412 / 9234
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_34() //Position: 0x2453 / 9299
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
	Function_19(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_35() //Position: 0x24DC / 9436
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
	Function_19(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_36() //Position: 0x2573 / 9587
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
	Function_19(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_37() //Position: 0x25F2 / 9714
{
	Function_38(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_19(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_38(int iParam0, bool bParam1, int iParam2) //Position: 0x2618 / 9752
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
		Function_20(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_39() //Position: 0x2822 / 10274
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	Function_41(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
	vVar0 = { StackVal, StackVal, Function_41(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	if (Function_40(StackVal, StackVal, vVar0))
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

bool Function_40(vector3 vParam0) //Position: 0x28C3 / 10435
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_41(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x28DB / 10459
{
	int iVar0;
	
	iVar0 = Function_44(uParam2, uParam3);
	if (Function_43(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_49(&Global_63095, 1);
			Function_9(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_49(&Global_63095, 2);
			Function_9(&Global_63095, 1);
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
		Function_49(&Global_63095, 2);
		Function_9(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833,843f, 50,332f, 2418,003f;
	}
	Function_42();
	return StackVal, StackVal, Function_42();
}

vector3 Function_42() //Position: 0x29C2 / 10690
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_43(int iParam0) //Position: 0x29CB / 10699
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_44(bool bParam0, bool bParam1) //Position: 0x29E1 / 10721
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
				fVar2 = Function_45(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_45(StackVal, StackVal, Global_34574, -2833,843f, 50,332f, 2418,003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_43(bVar0) && !bParam1)
	{
		bVar0 = Function_44(bParam0, 1);
	}
	return bVar0;
}

float Function_45(vector3 vParam0, vector3 vParam3) //Position: 0x2AA8 / 10920
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

bool Function_46(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x2AC5 / 10949
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

void Function_47(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x2B69 / 11113
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

void Function_48(bool bParam0, bool bParam1) //Position: 0x2BB4 / 11188
{
	DECOR_SET_OBJECT(Global_34573, "SettingPlayerHorse", bParam0);
	DECOR_SET_BOOL(Global_34573, "NewPlayerHorse_Wipe", bParam1);
	return;
}

void Function_49(var uParam0, int iParam1) //Position: 0x2BF7 / 11255
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_50() //Position: 0x2C06 / 11270
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_51(bool bParam0) //Position: 0x2C0F / 11279
{
	bParam0->f_4 = 0.0f;
	bParam0->f_8 = 0.0f;
	*bParam0 = 0;
	return;
}

float Function_52(bool bParam0) //Position: 0x2C23 / 11299
{
	if (Function_5(bParam0))
	{
		if (Function_53(bParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_53(int iParam0) //Position: 0x2CEB / 11499
{
	return Function_89(*iParam0, 2);
}

var Function_54(bool bParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, var uParam6) //Position: 0x2CF8 / 11512
{
	bool bVar0;
	
	if (bParam4)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_72(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "HorseHitching", 2, 1);
	}
	Function_55(&bVar0, uParam2, uParam3);
	if (uParam6 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam5)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam5);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_55(var uParam0, var uParam1, int iParam2) //Position: 0x2D75 / 11637
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_57(&bVar0, uParam1, iParam2);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_56(&bVar0, uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 4,5f, 0, 1);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESET(bVar1, 1000.0f, 1, 0);
	return;
}

void Function_56(var uParam0, bool bParam1) //Position: 0x2DC1 / 11713
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { -1,819618f, 1,897174f, 1,448807f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { -0,60174f, 0,213054f, 0,769752f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	SET_CAMERASHOT_DIRECTION(*uParam0, vVar0, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_57(var uParam0, bool bParam1, bool bParam2) //Position: 0x2E6D / 11885
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { 1,386795f, 1,647651f, 2,115284f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { 0,643825f, 0,022311f, 0,764847f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	SET_CAMERASHOT_DIRECTION(*uParam0, vVar0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 30);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0,157772f, 0,559703f, -0,033479f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

var Function_58(bool bParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, var uParam6) //Position: 0x2F3E / 12094
{
	bool bVar0;
	
	if (bParam4)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_72(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "HorseHitching_NoHrs", 2, 1);
	}
	Function_59(&bVar0, uParam2, uParam3);
	if (uParam6 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam5)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam5);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_59(var uParam0, var uParam1, int iParam2) //Position: 0x2FC1 / 12225
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_61(&bVar0, uParam1, iParam2);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_60(&bVar0, uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 2,5f, 0, 1);
	return;
}

void Function_60(var uParam0, bool bParam1) //Position: 0x3000 / 12288
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { -1,730289f, 2,17187f, 0,418655f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { -0,673478f, 0,436256f, 0,596748f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	SET_CAMERASHOT_DIRECTION(*uParam0, vVar0, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_61(var uParam0, bool bParam1, bool bParam2) //Position: 0x30AC / 12460
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { -0,720963f, 2,045398f, 1,269505f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { -0,435482f, 0,280604f, 0,855346f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	SET_CAMERASHOT_DIRECTION(*uParam0, vVar0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 30);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0,294135f, 1,20993f, -0,913264f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

bool Function_62(var uParam0, bool bParam1) //Position: 0x317D / 12669
{
	vector3 vVar0;
	
	GET_OBJECT_POSITION(bParam1, &vVar0);
	return Function_63(StackVal, StackVal, uParam0, vVar0);
}

int Function_63(bool bParam0, vector3 vParam1) //Position: 0x3194 / 12692
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	float fVar9;
	
	GET_OBJECT_POSITION(bParam0, &vVar0);
	vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar0, vParam1, StackVal) };
	GET_OBJECT_AXIS(bParam0, &uVar6, 0);
	fVar9 = VDOT(&vVar3, &uVar6);
	if (fVar9 < 0.0f)
	{
		return 1;
	}
	return 0;
}

vector3 Function_64(bool bParam0) //Position: 0x31D2 / 12754
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

void Function_65(bool bParam0) //Position: 0x31F9 / 12793
{
	Function_66(bParam0, 0.0f);
	return;
}

void Function_66(var uParam0, float fParam1) //Position: 0x3205 / 12805
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_49(uParam0, 1);
	Function_9(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_67(bool bParam0, bool bParam1) //Position: 0x3226 / 12838
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
	else if (!bParam1 || Function_68(bParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(bParam0, 1);
	}
	return;
}

float Function_68(bool bParam0, bool bParam1) //Position: 0x3283 / 12931
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

void Function_69(bool bParam0, float fParam1) //Position: 0x32A2 / 12962
{
	(&Global_12976 + 36)->f_28 = 0;
	Global_12976.f_236 = 0;
	if (GET_TASK_STATUS(Global_12976.f_36, 86) != 2)
	{
		TASK_CLEAR(Global_12976.f_36);
	}
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		if (bParam0 == 0.0f)
		{
			TASK_PRIORITY_SET(Global_12976.f_36, true);
			TASK_STAND_STILL(Global_12976.f_36, bParam0, 0, 0);
		}
	}
	if (IS_BLIP_VALID(Global_12976.f_240))
	{
		REMOVE_BLIP(Global_12976.f_240);
	}
	Function_71();
	Function_70();
	if (DECOR_CHECK_EXIST(Global_34573, "Player_SimWhistle"))
	{
		DECOR_REMOVE(Global_34573, "Player_SimWhistle");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "WhistleTimeWaited"))
	{
		DECOR_REMOVE(Global_34573, "WhistleTimeWaited");
	}
	DECOR_SET_FLOAT(Global_34573, "Player_IgnoreWhistle", (GET_CURRENT_GAME_TIME() + fParam1));
	return;
}

void Function_70() //Position: 0x33A0 / 13216
{
	if (DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
	{
		DECOR_REMOVE(Global_34573, "HorseStolen");
	}
	return;
}

void Function_71() //Position: 0x33D2 / 13266
{
	if (DECOR_CHECK_EXIST(Global_34573, "WhistleNavQuery"))
	{
		DESTROY_OBJECT(DECOR_GET_OBJECT(Global_34573, "WhistleNavQuery"));
		DECOR_REMOVE(Global_34573, "WhistleNavQuery");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "WhistleNavQueryPos"))
	{
		DECOR_REMOVE(Global_34573, "WhistleNavQueryPos");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "WhistlePosProbed"))
	{
		DECOR_REMOVE(Global_34573, "WhistlePosProbed");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "WhistleTimeWaited"))
	{
		DECOR_REMOVE(Global_34573, "WhistleTimeWaited");
	}
	return;
}

var Function_72() //Position: 0x34CF / 13519
{
	int iVar0;
	
	return iVar0;
}

vector3 Function_73(bool bParam0) //Position: 0x34D7 / 13527
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

struct<32> Function_74(bool bParam0) //Position: 0x34FE / 13566
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_75("0", &cVar8, ""), 4);
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

struct<32> Function_75(char* cParam0, char* cParam1, char* cParam2) //Position: 0x3568 / 13672
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_76(int iParam0) //Position: 0x3587 / 13703
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_81();
	iVar1 = 0;
	if (!Function_4(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_80(iParam0[iVar03], 8);
		}
		else if (Function_79())
		{
			iVar1 = 1;
			Function_80(iParam0[iVar03], 8);
		}
		Function_80(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_4(iParam0[iVar03], 4))
		{
			if (!Function_4(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_4(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_4(iParam0[03], 8) || iVar1));
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
				Function_80(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_4(iParam0[iVar03], 4))
		{
			if (!Function_4(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_80(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_80(iParam0[iVar03], 2);
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
							Function_80(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_80(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_80(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_80(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_80(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_80(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_80(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_80(iParam0[iVar03], 2);
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
	Function_77();
	return 1;
}

void Function_77() //Position: 0x3902 / 14594
{
	if (!Function_78(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_78(int iParam0) //Position: 0x3942 / 14658
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_79() //Position: 0x395E / 14686
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

void Function_80(var uParam0, int iParam1) //Position: 0x3989 / 14729
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_81() //Position: 0x399A / 14746
{
	if (!Function_78(128))
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

var Function_82(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x39DC / 14812
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_83(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_80(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_83(var uParam0, int iParam1, int iParam2) //Position: 0x3A14 / 14868
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_4(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_80(uParam0[iVar03], 4);
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

int Function_84(bool bParam0, bool bParam1) //Position: 0x3AD8 / 15064
{
	vector3 vVar0;
	float fVar3;
	bool bVar4;
	
	if (IS_ACTOR_MOUNTED(Global_34573) || IS_ACTOR_RIDING_VEHICLE(Global_34573))
	{
		return 0;
	}
	Function_85(Global_34573);
	vVar0 = { StackVal, StackVal, Function_85(Global_34573) };
	if (bParam1)
	{
		fVar3 = 1,1f;
	}
	else
	{
		fVar3 = 0,95f;
	}
	bVar4 = LOCATE_ACTOR_OF_TYPE(vVar0, fVar3, 23, 4294967295);
	if (IS_ACTOR_VALID(bVar4))
	{
		if (IS_ACTOR_ALIVE(bVar4))
		{
			if (ANIMAL_ACTOR_GET_DOMESTICATION(bVar4) != 1)
			{
				if (!DECOR_CHECK_EXIST(bVar4, "HorseLeash"))
				{
					if (!IS_ACTOR_VALID(GET_RIDER(bVar4)))
					{
						if (!IS_ACTOR_DRAFTED(bVar4))
						{
							*bParam0 = bVar4;
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

vector3 Function_85(bool bParam0) //Position: 0x3B6A / 15210
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

bool Function_86(bool bParam0, bool bParam1) //Position: 0x3B7B / 15227
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	
	bVar0 = GET_OBJECT_FROM_GRINGO(bParam0);
	GET_OBJECT_AXIS(bVar0, &vVar1, 2);
	GET_OBJECT_POSITION(bVar0, &vVar4);
	vVar4 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar1, vVar4, StackVal) * Vector(1,75f, 1,75f, 1,75f), StackVal, StackVal) };
	return IS_AREA_OBSTRUCTED2(vVar4, 0,5f, GET_PHYSINST_FROM_ACTOR(Global_34573), GET_PHYSINST_FROM_ACTOR(bParam1), 0);
}

bool Function_87(bool bParam0) //Position: 0x3BC5 / 15301
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	bool bVar10;
	vector3 vVar11;
	bool bVar14;
	bool bVar15;
	vector3 vVar16;
	var uVar19;
	bool bVar22;
	vector3 vVar23;
	var uVar26;
	bool bVar29;
	
	Function_85(Global_34573);
	vVar6 = { StackVal, StackVal, Function_85(Global_34573) };
	bVar9 = 3,25f;
	if (IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
	{
		bVar9 = 5.0f;
	}
	bVar10 = LOCATE_GRINGO_OF_TYPE("hitchingPost", &vVar6, bVar9, 0);
	GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(bVar10), &vVar11);
	Function_88(StackVal, StackVal, vVar11, &bVar14, &bVar15);
	if (IS_GRINGO_VALID(bVar14))
	{
		if (IS_OBJECT_VALID(GRINGO_QUERY_NAMED_COMPONENT_USER(bVar14, "UseCase1")) || !GRINGO_IS_ACTIVATION_ALLOWED(bVar14))
		{
			bVar14 = "";
		}
		else
		{
			Function_73(GET_OBJECT_FROM_GRINGO(bVar14));
			vVar0 = { StackVal, StackVal, Function_73(GET_OBJECT_FROM_GRINGO(bVar14)) };
			GET_OBJECT_NAMED_BONE_POSITION(Global_34573, "head", &vVar16);
			if (CAMERA_PROBE(&uVar19, vVar16, vVar0, Global_34573, 6))
			{
				bVar14 = "";
			}
			if (IS_GRINGO_VALID(bVar14))
			{
				bVar22 = LOCATE_ACTOR_OF_TYPE(vVar0, 0,33f, 23, 4294967295);
				if (!IS_ACTOR_VALID(bVar22))
				{
					bVar22 = LOCATE_ACTOR_OF_TYPE(vVar3, 0,33f, 24, 4294967295);
				}
				if (!IS_ACTOR_VALID(bVar22))
				{
					bVar22 = LOCATE_ACTOR_OF_TYPE(vVar3, 0,33f, 9, 4294967295);
				}
				if (IS_ACTOR_VALID(bVar22) && bVar22 == bParam0)
				{
					if (!IS_ACTOR_MOUNTED(bVar22))
					{
						bVar14 = "";
					}
				}
			}
		}
	}
	if (IS_GRINGO_VALID(bVar15))
	{
		if (IS_OBJECT_VALID(GRINGO_QUERY_NAMED_COMPONENT_USER(bVar15, "UseCase1")) || !GRINGO_IS_ACTIVATION_ALLOWED(bVar15))
		{
			bVar15 = "";
		}
		else
		{
			Function_73(GET_OBJECT_FROM_GRINGO(bVar15));
			vVar3 = { StackVal, StackVal, Function_73(GET_OBJECT_FROM_GRINGO(bVar15)) };
			GET_OBJECT_NAMED_BONE_POSITION(Global_34573, "head", &vVar23);
			if (CAMERA_PROBE(&uVar26, vVar23, vVar3, Global_34573, 6))
			{
				bVar15 = "";
			}
			if (IS_GRINGO_VALID(bVar15))
			{
				bVar29 = LOCATE_ACTOR_OF_TYPE(vVar3, 0,33f, 23, 4294967295);
				if (!IS_ACTOR_VALID(bVar29))
				{
					bVar29 = LOCATE_ACTOR_OF_TYPE(vVar3, 0,33f, 24, 4294967295);
				}
				if (!IS_ACTOR_VALID(bVar29))
				{
					bVar29 = LOCATE_ACTOR_OF_TYPE(vVar3, 0,33f, 9, 4294967295);
				}
				if (IS_ACTOR_VALID(bVar29) && bVar29 == bParam0)
				{
					if (!IS_ACTOR_MOUNTED(bVar29))
					{
						bVar15 = "";
					}
				}
			}
		}
	}
	if (IS_GRINGO_VALID(bVar15) && IS_GRINGO_VALID(bVar14))
	{
		bVar9 = VDIST(vVar6, vVar0);
		if (VDIST(vVar6, vVar3) > bVar9)
		{
			return bVar15;
		}
		return bVar14;
	}
	if (IS_GRINGO_VALID(bVar15))
	{
		return bVar15;
	}
	if (IS_GRINGO_VALID(bVar14))
	{
		return bVar14;
	}
	bLocal_0 = 100;
	return "";
}

void Function_88(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x3DFB / 15867
{
	bool bVar0;
	
	bVar0 = LOCATE_GRINGO_OF_TYPE("hitchingPost", &uParam0, 2.0f, 1);
	GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(bVar0), &uParam0);
	*uParam4 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &uParam0, 2.0f, 0);
	*uParam3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch2", &uParam0, 2.0f, 0);
}

bool Function_89(var uParam0, bool bParam1) //Position: 0x3EA5 / 16037
{
	return (uParam0 && bParam1) == 0;
}

