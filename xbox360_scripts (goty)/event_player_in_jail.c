//Decompiled with MagicRDR v1.0
//Function Count : 217
//Statics Count : 120
//Natives Count : 316
//Parameters Count : 8

#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	bool bLocal_12 = false;
	bool bLocal_13 = false;
	vector3 vLocal_14 = { 0.0f, 0.0f, 0.0f };
	struct<5> Local_17 = { 0, 0, 0, 0, 0 } ;
	var uLocal_22 = 0;
	vector3 vLocal_23 = { 0.0f, 0.0f, 0.0f };
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	bool bLocal_35 = false;
	bool bLocal_36 = false;
	bool bLocal_37 = false;
	bool bLocal_38 = false;
	bool bLocal_39 = false;
	bool bLocal_40 = false;
	bool bLocal_41 = false;
	bool bLocal_42 = false;
	bool bLocal_43 = false;
	int iLocal_44 = 0;
	bool bLocal_45 = false;
	bool bLocal_46 = false;
	bool bLocal_47 = false;
	bool bLocal_48 = false;
	bool bLocal_49 = false;
	bool bLocal_50 = true;
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
	int iLocal_69 = 2;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	bool bLocal_76 = false;
	bool bLocal_77 = false;
	bool bLocal_78 = false;
	bool bLocal_79 = false;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	bool bLocal_82 = false;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	bool bLocal_86 = false;
	bool bLocal_87 = false;
	int iLocal_88 = 0;
	bool bLocal_89 = false;
	bool bLocal_90 = false;
	int iLocal_91 = 0;
	bool bLocal_92 = false;
	int iLocal_93 = 0;
	bool bLocal_94 = false;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	float fLocal_97 = 0.0f;
	float fLocal_98 = 0.0f;
	float fLocal_99 = 0.0f;
	float fLocal_100 = 0.0f;
	float fLocal_101 = 0.0f;
	float fLocal_102 = 0.0f;
	float fLocal_103 = 0.0f;
	float fLocal_104 = 0.0f;
	vector3 vLocal_105 = { 0.0f, 0.0f, 0.0f };
	int iLocal_108 = 0;
	bool bLocal_109 = false;
	float fLocal_110 = 0.0f;
	int iLocal_111 = 0;
	struct<25> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	
	iLocal_10 = 0;
	iLocal_111 = 0;
	iLocal_11 = 0;
	iLocal_44 = ScriptParam_0;
	Global_3407 = 1;
	Function_216();
	iVar0 = 0;
	iLocal_95 = GET_DAY(false);
	iLocal_96 = GET_HOUR(false);
	bLocal_13 = Function_215(2, CEIL((IntToFloat(ScriptParam_0.f_20) / 250.0f)));
	bLocal_76 = Function_205(iLocal_44);
	Function_204(&iLocal_69, bLocal_76, 3, 0);
	Function_202(&iLocal_69, "revolver_cattleman01x", 0, 0);
	bLocal_77 = RAND_INT_RANGE(0, 2);
	bLocal_77 = false;
	bLocal_82 = ScriptParam_0.f_24;
	if (bLocal_82)
	{
		if (!Global_25965[0])
		{
			(*&Global_26401 + 16)[Global_26401.f_2216] = 0;
			bLocal_82 = false;
		}
	}
	bLocal_12 = 250;
	bLocal_43 = CREATE_LAYOUT(Function_201());
	while (!IS_EXITFLAG_SET())
	{
		switch (iLocal_11)
		{
			case 0x00000000:
				if (HUD_IS_FADED())
				{
					iLocal_11 = 1;
					Function_200();
					HUD_FADE_OUT(0.0f, 1f, 1);
					UNK_0xEF270DC9();
					MEMORY_EVERYBODY_FORGET_ABOUT_EVERYTHING();
					Function_198(Function_199());
					DEEQUIP_ACCESSORY(Global_34573, 0);
					if (UNK_0xE094DB31(Global_34573, 1))
					{
						DEEQUIP_ACCESSORY(Global_34573, 1);
						bLocal_94 = true;
					}
					Function_197(4, 0);
					Function_197(3, 0);
					UI_EXIT("WantedMeter");
					UI_EXIT("BountyAmount");
					_HUD_WANTED_METER(0);
					_HUD_WANTED_CRIME(0.0f);
					Global_27761 = 0.0f;
					UNK_0x598815BD(Global_27761);
					Function_196(StackVal, StackVal, *(&ScriptParam_0 + 4), ScriptParam_0, "", "", 0, 0);
					Global_3391 = 1;
					Function_202(&bLocal_50, "sit_bed", 5, 0);
					Function_202(&bLocal_50, "custom/sit_bed", 8, 0);
					Function_202(&bLocal_50, "Marston_Prison_idle_01", 5, 0);
					Function_202(&bLocal_50, "custom/Marston_Prison_idle_01", 8, 0);
					Function_202(&bLocal_50, "jail_release", 5, 0);
					Function_202(&bLocal_50, "custom/jail_release", 8, 0);
					bLocal_12 = 500;
				}
				break;
			
			case 0x00000001:
				if ((Function_195(ScriptParam_0) && STREAMING_IS_WORLD_LOADED()) && Function_190(&bLocal_50))
				{
					Global_3391 = 0;
					bLocal_35 = Function_189("jail_sit");
					bLocal_36 = Function_189("jail_leave_start");
					bLocal_37 = Function_189("jail_leave_end");
					bLocal_38 = Function_189("cell_leave_end");
					bLocal_39 = Function_189("cell_leave_cop");
					if ((IS_OBJECT_VALID(bLocal_35) && IS_OBJECT_VALID(bLocal_36)) && IS_OBJECT_VALID(bLocal_37))
					{
						GET_OBJECT_POSITION(bLocal_35, &vLocal_14);
						GET_OBJECT_ORIENTATION(bLocal_35, &Local_17);
						GET_OBJECT_POSITION(bLocal_36, &vLocal_20);
						GET_OBJECT_POSITION(bLocal_37, &vLocal_23);
						GET_OBJECT_POSITION(bLocal_38, &uLocal_26);
						GET_OBJECT_POSITION(bLocal_39, &uLocal_29);
						GET_OBJECT_ORIENTATION(bLocal_39, &uLocal_32);
						bLocal_47 = CREATE_VOLUME_IN_LAYOUT(bLocal_43, Function_201(), 3, vLocal_14, 0.0f, 0.0f, 0.0f, 10.0f, 10.0f, 10.0f);
						bLocal_48 = CREATE_VOLUME_IN_LAYOUT(bLocal_43, Function_201(), 3, vLocal_20, 0.0f, 0.0f, 0.0f, 5.0f, 10.0f, 5.0f);
						ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_47);
						ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_47);
						ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_48);
						ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_48);
						CLEAR_AMBIENT_OBJECTS_VOLUME(bLocal_47, 15);
						CLEAR_AMBIENT_OBJECTS_VOLUME(bLocal_47, 24);
						CLEAR_AMBIENT_OBJECTS_VOLUME(bLocal_48, 15);
						CLEAR_AMBIENT_OBJECTS_VOLUME(bLocal_48, 24);
						if (iLocal_44 == Global_30640[0])
						{
							vLocal_14.f_8 = (vLocal_14.z + 0.56f);
						}
						else if (iLocal_44 == Global_30668[0])
						{
							vLocal_14.x = (vLocal_14.x - 0.15f);
							vLocal_14.f_8 = (vLocal_14.z + 0.3f);
						}
						else if (iLocal_44 == Global_30685[0])
						{
							vLocal_14.x = (vLocal_14.x - 0.11f);
						}
						else if (iLocal_44 == Global_30717[0])
						{
							vLocal_23.x = (vLocal_23.x - 1.75f);
						}
						iLocal_11 = 2;
					}
					else
					{
						if (!IS_OBJECT_VALID(bLocal_35))
						{
							LOG_ERROR("Jail Object for current town not FOUND! ARGGGGH");
						}
						if (!IS_OBJECT_VALID(bLocal_36))
						{
							LOG_ERROR("Start Leave Jail Object for current town not FOUND! ARGGGGH");
						}
						if (!IS_OBJECT_VALID(bLocal_37))
						{
							LOG_ERROR("End Leave Jail Object for current town not FOUND! ARGGGGH");
						}
					}
				}
				bLocal_12 = 100;
				break;
			
			case 0x00000002:
				if (!iLocal_88)
				{
					if (Function_190(&iLocal_69))
					{
						iLocal_88 = 1;
					}
				}
				bLocal_12 = Function_102(&iVar0);
				break;
			
			case 0x00000003:
				bLocal_12 = false;
				iLocal_11 = 4;
				break;
			
			case 0x00000004:
				if (bLocal_82)
				{
					if (Function_65() || !Global_25965[0])
					{
						TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
					}
				}
				else
				{
					TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				}
				bLocal_12 = false;
				break;
			
			default:
				break;
		}
		WAIT(bLocal_12);
	}
	if (HUD_IS_FADED() && !HUD_IS_FADING())
	{
		if (!IS_GAME_RESETTING())
		{
			HUD_FADE_IN(1.0f, 1065353216);
		}
	}
	if (!IS_PLAYER_CONTROLLABLE(0))
	{
		if (!Function_64(StackVal, StackVal, vLocal_23))
		{
			TELEPORT_ACTOR(Function_199(), &vLocal_23, 1, 1, 0);
		}
	}
	Function_63(225, bLocal_13, 0, 0);
	Function_61(Function_199());
	Function_59(1);
	if (!IS_GAME_RESETTING())
	{
		Function_58(Function_199());
	}
	SET_ACTOR_TO_SEAT(Function_199(), 1.0f);
	Global_3407 = 0;
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Function_54(&bLocal_50);
	Function_54(&iLocal_69);
	if (IS_OBJECT_VALID(bLocal_45))
	{
		DESTROY_OBJECT(bLocal_45);
	}
	if (IS_OBJECT_VALID(bLocal_46))
	{
		DESTROY_OBJECT(bLocal_46);
	}
	if (bLocal_109)
	{
		UI_POP("CutsceneWithMessages");
		Function_50(1, 0, 1, 1, 1, 1, 0, 1, 1, 1);
	}
	if (bLocal_89)
	{
		if (IS_ACTOR_VALID(bLocal_49))
		{
			TASK_STAND_STILL(bLocal_49, 10.0f, 0, 0);
		}
	}
	if (IS_OBJECT_VALID(bLocal_41))
	{
		DESTROY_OBJECT(bLocal_41);
	}
	if (IS_ACTOR_VALID(bLocal_49))
	{
		if (bLocal_92)
		{
			RELEASE_ACTOR(bLocal_49);
		}
	}
	Function_49();
	if (!ScriptParam_0.f_24)
	{
		Function_48(8388608);
	}
	Function_47();
	Function_44();
	Global_3406 = 1;
	Function_43(0x20000000);
	DESTROY_VOLUME(bLocal_47);
	DESTROY_OBJECT(bLocal_48);
	strcpy(&Global_13095, "", 64);
	if (!IS_GAME_RESETTING())
	{
		Function_1(1);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(bool bParam0) //Position: 0x62F / 1583
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_31();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_3();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_2(&Global_63095, 1);
		Function_2(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_2(var uParam0, int iParam1) //Position: 0x680 / 1664
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_3() //Position: 0x693 / 1683
{
	Function_29();
	Function_28();
	Function_28();
	Function_27();
	Function_27();
	Function_26();
	Function_26();
	Function_11(0);
	Function_11(0);
	if (!Function_10())
	{
		Function_8();
		Function_7();
		Function_6();
		Function_5();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_4();
	return;
}

void Function_4() //Position: 0x6E5 / 1765
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

void Function_5() //Position: 0x7EB / 2027
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

void Function_6() //Position: 0x81E / 2078
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

void Function_7() //Position: 0x9AC / 2476
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

void Function_8() //Position: 0xB60 / 2912
{
	Function_9(&Global_28260, 1, 0);
	return;
}

void Function_9(int iParam0, bool bParam1, var uParam2) //Position: 0xB6E / 2926
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	var uVar11;
	bool bVar12;
	bool bVar13;
	
	bVar0 = Function_199();
	if (IS_ACTOR_VALID(bVar0))
	{
		iParam0->f_1012 = GET_NUM_WEAPONS_IN_INVENTORY(bVar0);
		iVar7 = 4294967294;
		iVar8 = GET_WEAPON_IN_HAND(bVar0);
		if (iVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(bVar0, iVar8) || uParam2)
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
				if (GET_ITEM_EQUIPSLOT(iVar8) == bVar10)
				{
					(*iParam0 + 1088)[iVar4] = iVar8;
					iParam0->f_1120 = iVar8;
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

bool Function_10() //Position: 0xD5F / 3423
{
	return NET_IS_MANAGER_INITIALIZED();
}

struct<8> Function_11(int iParam0) //Position: 0xD68 / 3432
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
					iVar2 = ((Function_25((50 + iVar4)) + Function_25((183 + iVar4))) + Function_25((90 + iVar4)));
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
	Function_12(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_12(int iParam0, bool bParam1, bool bParam2) //Position: 0xE0E / 3598
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
		Function_24(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_23(iParam0);
	if (bParam2)
	{
		Function_13(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_13(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x10A9 / 4265
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_22(390))), 32);
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
					bVar19 = (Function_21(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_21(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_19(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_17(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_14(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_201(), &Var9);
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

var Function_14(int iParam0) //Position: 0x16D6 / 5846
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_15(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x16E7 / 5863
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_16("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_16("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_16("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_16(char* cParam0, bool bParam1) //Position: 0x17DC / 6108
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_17(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x17F5 / 6133
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_18(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_215(Function_18(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

int Function_18(int iParam0, bool bParam1) //Position: 0x185A / 6234
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_19(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x186C / 6252
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
	if (((Function_20(iParam0) != 19 || Function_20(iParam0) != 17) || Function_20(iParam0) != 10) || Function_20(iParam0) != 9)
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

int Function_20(int iParam0) //Position: 0x199C / 6556
{
	return Global_35278[iParam020].f_48;
}

float Function_21(int iParam0) //Position: 0x19AB / 6571
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_22(int iParam0) //Position: 0x19E4 / 6628
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_23(int iParam0) //Position: 0x1A21 / 6689
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

int Function_24(int iParam0, bool bParam1, bool bParam2) //Position: 0x1BBB / 7099
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

int Function_25(bool bParam0) //Position: 0x1DFF / 7679
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_26() //Position: 0x1E40 / 7744
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
		iVar2 = ((Function_25((50 + iVar3) + 15) + Function_25((183 + iVar3) + 15)) + Function_25((90 + iVar3) + 15));
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
	Function_12(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_27() //Position: 0x1EC9 / 7881
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
			iVar2 = ((Function_25((50 + iVar3) + 8) + Function_25((183 + iVar3) + 8)) + Function_25((90 + iVar3) + 8));
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
	Function_12(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_28() //Position: 0x1F60 / 8032
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
		iVar2 = ((Function_25((50 + iVar3)) + Function_25((183 + iVar3))) + Function_25((90 + iVar3)));
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
	Function_12(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_29() //Position: 0x1FDF / 8159
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_30(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_12(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_30(int iParam0, bool bParam1, int iParam2) //Position: 0x2018 / 8216
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
	Function_24(iParam0, bParam1, 1);
	Function_23(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_13(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_31() //Position: 0x2222 / 8738
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_42())
	{
		Function_38(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_38(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_32(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_32(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_64(StackVal, StackVal, vVar0))
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

vector3 Function_32(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x22DD / 8925
{
	int iVar0;
	
	iVar0 = Function_36(uParam2, uParam3);
	if (Function_35(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_34(&Global_63095, 1);
			Function_2(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_34(&Global_63095, 2);
			Function_2(&Global_63095, 1);
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
		Function_34(&Global_63095, 2);
		Function_2(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_33();
	return StackVal, StackVal, Function_33();
}

vector3 Function_33() //Position: 0x23C4 / 9156
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_34(var uParam0, int iParam1) //Position: 0x23CD / 9165
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_35(int iParam0) //Position: 0x23DC / 9180
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_36(bool bParam0, bool bParam1) //Position: 0x23F2 / 9202
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
				fVar2 = Function_37(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_37(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_35(bVar0) && !bParam1)
	{
		bVar0 = Function_36(bParam0, 1);
	}
	return bVar0;
}

float Function_37(vector3 vParam0, vector3 vParam3) //Position: 0x24B9 / 9401
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_38(var uParam0, int iParam1) //Position: 0x24D6 / 9430
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_41(Global_34573, &vVar4);
	if (!Function_39(Global_30640[0]))
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
	if (!Function_39(Global_30640[2]))
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
	if (!Function_39(Global_30640[1]))
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
	if (!Function_39(Global_30658[1]))
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
	if (!Function_39(Global_30658[3]))
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
	if (!Function_39(Global_30658[2]))
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
	if (!Function_39(Global_30658[4]))
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
	if (!Function_39(Global_30668[0]))
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
	if (!Function_39(Global_30668[1]))
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
	if (!Function_39(Global_30668[2]))
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
	if (!Function_39(Global_30679[0]))
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
	if (!Function_39(Global_30685[0]))
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
	if (!Function_39(Global_30685[1]))
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
	if (!Function_39(Global_30685[2]))
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
	if (!Function_39(Global_30693[0]))
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
	if (!Function_39(Global_30693[1]))
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
	if (!Function_39(Global_30693[2]))
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
	if (!Function_39(Global_30707[2]))
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
	if (!Function_39(Global_30707[3]))
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
	if (!Function_39(Global_30707[0]))
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
	if (!Function_39(Global_30717[0]))
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
	if (!Function_39(Global_30723[2]))
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
	if (!Function_39(Global_30723[1]))
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
	if (!Function_39(Global_30723[0]))
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
	if (!Function_39(Global_30679[1]))
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
	if (!Function_39(Global_30707[1]))
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
	Function_34(&Global_63095, 2);
	Function_2(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_64(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_39(int iParam0) //Position: 0x2CFB / 11515
{
	var uVar0;
	
	uVar0 = Global_29008[iParam0];
	return (((Function_40(uVar0, 0x1000000) || Function_40(uVar0, 0x2000000)) || Function_40(uVar0, 0x4000000)) || !Function_40(uVar0, 0x10000000));
}

bool Function_40(var uParam0, int iParam1) //Position: 0x2D36 / 11574
{
	return (uParam0 && iParam1) == 0;
}

void Function_41(bool bParam0, int iParam1) //Position: 0x2D43 / 11587
{
	GET_POSITION(bParam0, iParam1);
	return;
}

bool Function_42() //Position: 0x2D50 / 11600
{
	if (Function_40(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_43(var uParam0) //Position: 0x2D6B / 11627
{
	Global_26316.f_56 = (Global_26316.f_56 || uParam0);
	return;
}

void Function_44() //Position: 0x2D7E / 11646
{
	int iVar0;
	
	Global_26960 = Function_45(StackVal);
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

int Function_45(int iParam0) //Position: 0x2DCC / 11724
{
	if (!Function_46(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_46(int iParam0) //Position: 0x2DE4 / 11748
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_47() //Position: 0x2DF9 / 11769
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 36)
	{
		(*&Global_26401 + 36[iVar0181][35])[0] = StackVal;
		iVar0++;
	}
	return;
}

void Function_48(var uParam0) //Position: 0x2E26 / 11814
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && uParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_49() //Position: 0x2E43 / 11843
{
	if (IS_DOOR_VALID(bLocal_42))
	{
		CLOSE_DOOR_FAST(bLocal_42);
	}
	return;
}

void Function_50(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9) //Position: 0x2E56 / 11862
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
		bVar0 = Function_199();
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
					RESET_ANIM_SET_FOR_ACTOR(bVar0, 0);
				}
				else
				{
					RESET_ANIM_SET_FOR_ACTOR(bVar0, 1);
				}
			}
			if (Function_10())
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
			SET_ACTOR_INVULNERABILITY(bVar0, 0);
			if (Global_34108[0])
			{
				Global_34108[0] = 0;
				UI_CHEAT_SET_VALUE(0, 0);
			}
		}
		Function_63(21, 1, 0, 0);
	}
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam7)
	{
		Function_53();
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
	Function_51(iParam9);
}

void Function_51(int iParam0) //Position: 0x2F46 / 12102
{
	iParam0 = iParam0;
	HUD_ENABLE(iParam0);
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	PRINT_SMALL_B("Common_Null", 0.1f, 0, 2, 1, 0, 0);
	SET_TIME_ACCELERATION(Global_63398);
	STREAMING_UNLOAD_SCENE();
	AI_STOP_IGNORING_ACTORS();
	if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol")))
	{
		DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol"));
	}
	if (!Global_3380)
	{
		Function_52();
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

void Function_52() //Position: 0x2FF5 / 12277
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		if (GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(Global_12976.f_36)) != bVar0)
		{
			LOG_ERROR("PLAYERHORSE NOT IN PLAYER HORSE! WHY? FIXING");
			GIVE_OBJECT_TO_LAYOUT(Global_12976.f_36, bVar0);
		}
	}
	return;
}

void Function_53() //Position: 0x3067 / 12391
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_54(int iParam0) //Position: 0x307C / 12412
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_55(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_55(var uParam0, int iParam1) //Position: 0x30A2 / 12450
{
	if (Function_57(uParam0[iParam13], 4))
	{
		if (Function_57(uParam0[iParam13], 1))
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
			Function_56(uParam0[iParam13], 1);
			Function_56(uParam0[iParam13], 2);
			Function_56(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_56(var uParam0, int iParam1) //Position: 0x31D0 / 12752
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_57(var uParam0, int iParam1) //Position: 0x31EA / 12778
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_58(bool bParam0) //Position: 0x3207 / 12807
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (7 - 1))
	{
		ACTOR_DISABLE_WEAPON_RENDER(bParam0, iVar0, 0);
		iVar0++;
	}
	return;
}

void Function_59(bool bParam0) //Position: 0x322C / 12844
{
	if (iLocal_44 == Global_30668[0])
	{
		Function_60(StackVal, bParam0);
	}
	else if (iLocal_44 == Global_30685[0])
	{
		Function_60(StackVal, bParam0);
		Function_60(StackVal, bParam0);
	}
	else if (iLocal_44 == Global_30707[1])
	{
		Function_60(StackVal, bParam0);
	}
	return;
}

void Function_60(bool bParam0, bool bParam1) //Position: 0x3290 / 12944
{
	bool bVar0;
	
	if (IS_PERS_CHAR_VALID(bParam0))
	{
		SET_PERS_CHAR_ENABLED(bParam0, bParam1);
		if (bParam1)
		{
			if (!IS_PERS_CHAR_ALIVE(bParam0))
			{
				REVIVE_PERS_CHAR(bParam0, 0);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(bParam0);
		}
		else
		{
			bVar0 = GET_ACTOR_FROM_PERS_CHAR(bParam0);
			if (IS_ACTOR_VALID(bVar0))
			{
				DESTROY_ACTOR(bVar0);
			}
		}
	}
	return;
}

void Function_61(bool bParam0) //Position: 0x32D7 / 13015
{
	struct<4> Var0;
	
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	strcpy(&Var0, "tutorial", 16);
	Function_62(&Var0, 1);
	if (DECOR_CHECK_EXIST(bParam0, &Var0))
	{
		DECOR_REMOVE(bParam0, &Var0);
	}
	strcpy(&Var0, "tutorial", 16);
	Function_62(&Var0, 2);
	if (DECOR_CHECK_EXIST(bParam0, &Var0))
	{
		DECOR_REMOVE(bParam0, &Var0);
	}
	strcpy(&Var0, "tutorial", 16);
	Function_62(&Var0, 3);
	if (DECOR_CHECK_EXIST(bParam0, &Var0))
	{
		DECOR_REMOVE(bParam0, &Var0);
	}
	strcpy(&Var0, "tutorial", 16);
	Function_62(&Var0, 4);
	if (DECOR_CHECK_EXIST(bParam0, &Var0))
	{
		DECOR_REMOVE(bParam0, &Var0);
	}
	return;
}

void Function_62(char* cParam0, int iParam1) //Position: 0x338F / 13199
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

int Function_63(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x33C6 / 13254
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
	Function_24(iParam0, TO_FLOAT(bParam1), 1);
	Function_23(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_13(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

bool Function_64(vector3 vParam0) //Position: 0x35E6 / 13798
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

int Function_65() //Position: 0x35FE / 13822
{
	int iVar0;
	
	Function_77(&Global_26303, Function_100(), 4294967294, 0, 0, 1);
	if (Global_26303.f_24 == 4294967295)
	{
		return 0;
	}
	*(&iVar0 + 20) = 1;
	Function_33();
	Function_33();
	if (Function_72(StackVal, StackVal, StackVal, StackVal, 128, 1, GET_ASSET_ID("$/content/Ambient/PointOfInterest/event_bountyhunter", 4), Function_33(), Function_33(), 0, 0, 0, Global_26303.f_24, 0, 0, 0, &iVar0, 1, 1, 0x40a00000, 4294967295, 0, 0))
	{
		Function_71(1);
		Function_66(Global_26401.f_2216, 0);
	}
	else
	{
		LOG_ERROR("Problem setting bounty hunter beat from jail");
		return 0;
	}
	return 1;
}

void Function_66(int iParam0, bool bParam1) //Position: 0x36CF / 14031
{
	bool bVar0;
	
	if (bParam1)
	{
		if (IS_EARLIER_THAN((*&Global_26316 + 88)[iParam0], 0))
		{
			bVar0 = RAND_INT_RANGE(60, 180);
		}
		else
		{
			return;
		}
	}
	bVar0 = RAND_INT_RANGE(1800, 2400);
	if (Function_70() > 3)
	{
		bVar0 *= 2;
	}
	if (Function_10() && !bParam1)
	{
		Function_68(iParam0, 0, 0, 300, 0);
	}
	else
	{
		Function_68(iParam0, 0, 0, Function_67(bVar0), 0);
	}
	return;
}

bool Function_67(int iParam0) //Position: 0x3736 / 14134
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_68(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x374C / 14156
{
	int iVar0;
	
	iVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&iVar0, iParam1, iParam2, bParam3, iParam4);
	if (IS_EARLIER_THAN((*&Global_26316 + 88)[iParam0], iVar0) || Function_69((*&Global_26316 + 88)[iParam0]))
	{
		(*&Global_26316 + 88)[iParam0] = iVar0;
	}
}

var Function_69(bool bParam0) //Position: 0x3792 / 14226
{
	return (((GET_DAY(bParam0) != 0 && GET_HOUR(bParam0) != 0) && GET_MINUTE(bParam0) != 0) && GET_SECOND(bParam0) != 1);
}

int Function_70() //Position: 0x37B7 / 14263
{
	return Global_12976.f_156;
}

void Function_71(bool bParam0) //Position: 0x37C2 / 14274
{
	if (bParam0 == 1)
	{
		Function_34(&Global_26303 + 8, 1);
	}
	else
	{
		Function_2(&Global_26303 + 8, 1);
	}
	return;
}

bool Function_72(int iParam0, var uParam1, var uParam2, vector3 vParam3, vector3 vParam6, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22) //Position: 0x37E3 / 14307
{
	int iVar0;
	
	uParam13 = uParam13;
	uParam14 = uParam14;
	uParam15 = uParam15;
	iVar0 = 0;
	while (iVar0 <= Global_25267)
	{
		if (Global_25267[iVar058] != iParam0 || iParam0 != 4096)
		{
			if (Function_76(&(Global_25267[iVar058]), 4))
			{
				if (!IS_SCRIPT_VALID(Global_25267[iVar058].f_44))
				{
					Global_25267[iVar058].f_4 = uParam9;
					Global_25267[iVar058].f_68 = uParam21;
					Global_25267[iVar058].f_84 = uParam22;
					Global_25267[iVar058].f_64 = uParam19;
					Global_25267[iVar058].f_72 = uParam20;
					Global_25267[iVar058].f_12 = 4294967295;
					Global_25267[iVar058].f_16 = uParam2;
					*(&Global_25267[iVar058] + 20) = { StackVal, StackVal, vParam3 };
					*(&Global_25267[iVar058] + 32) = { StackVal, StackVal, vParam6 };
					Global_25267[iVar058].f_56 = uParam10;
					Global_25267[iVar058].f_48 = uParam12;
					Global_25267[iVar058].f_52 = uParam11;
					Global_25267[iVar058].f_76 = uParam17;
					Global_25267[iVar058].f_80 = uParam18;
					Global_25267[iVar058].f_88 = 0.0f;
					Function_75(uParam16, &Global_25267[iVar058] + 92);
					Global_25267[iVar058].f_92 = uParam1;
					Function_74(&(Global_25267[iVar058]), 1);
					Function_73(&(Global_25267[iVar058]), 4);
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_73(var uParam0, int iParam1) //Position: 0x3925 / 14629
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

void Function_74(var uParam0, int iParam1) //Position: 0x393F / 14655
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_75(int iParam0, int iParam1) //Position: 0x3950 / 14672
{
	*iParam1 = *iParam0;
	iParam1->f_16 = iParam0->f_16;
	iParam1->f_20 = iParam0->f_20;
	iParam1->f_4 = StackVal;
	iParam1->f_8 = StackVal;
	*(iParam1 + 24) = { StackVal, *(iParam0 + 24) };
	(iParam1 + 24)->f_8 = StackVal;
	(iParam1 + 24)->f_12 = (iParam0 + 24)->f_12;
	(iParam1 + 24)->f_16 = (iParam0 + 24)->f_16;
	(iParam1 + 24)->f_20 = (iParam0 + 24)->f_20;
	iParam1->f_48 = iParam0->f_48;
	(iParam1 + 48)->f_4 = StackVal;
	(iParam1 + 48)->f_8 = StackVal;
	iParam1->f_60 = iParam0->f_60;
	(iParam1 + 60)->f_4 = StackVal;
	(iParam1 + 60)->f_8 = StackVal;
	(iParam1 + 60)->f_12 = (iParam0 + 60)->f_12;
	(iParam1 + 60)->f_16 = (iParam0 + 60)->f_16;
	(iParam1 + 60)->f_20 = (iParam0 + 60)->f_20;
	(iParam1 + 60)->f_24 = (iParam0 + 60)->f_24;
	(iParam1 + 60)->f_32 = (iParam0 + 60)->f_32;
	(iParam1 + 60)->f_36 = (iParam0 + 60)->f_36;
	(iParam1 + 60)->f_40 = (iParam0 + 60)->f_40;
	(iParam1 + 60)->f_44 = (iParam0 + 60)->f_44;
	(iParam1 + 60)->f_52 = (iParam0 + 60)->f_52;
	(iParam1 + 60)->f_48 = (iParam0 + 60)->f_48;
	(iParam1 + 60)->f_56 = (iParam0 + 60)->f_56;
	(iParam1 + 60)->f_28 = (iParam0 + 60)->f_28;
	iParam1->f_120 = iParam0->f_120;
	(iParam1 + 120)->f_4 = StackVal;
	iParam1->f_128 = iParam0->f_128;
	(iParam1 + 128)->f_4 = StackVal;
	(iParam1 + 128)->f_8 = StackVal;
	return;
}

bool Function_76(int iParam0, bool bParam1) //Position: 0x3ABC / 15036
{
	int iVar0;
	
	iVar0 = (StackVal && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_77(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x3AD9 / 15065
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4[45];
	int iVar50[45];
	struct<33> Var96;
	
	iVar0 = 0;
	if (Function_99())
	{
		return 0;
	}
	uParam0->f_16 = Function_98(iParam1);
	if (iParam3 == 0)
	{
		iParam3 = 0;
	}
	if (iParam1 == 4294967295)
	{
		iParam1 = Function_100();
	}
	if (iParam4 > 0 || iParam4 < 8)
	{
		iParam4 = 0;
	}
	Global_26303.f_12 = iParam1;
	iVar1 = 0;
	while (iVar1 < (45 - 1))
	{
		if (Function_97(&Var96, iVar1) == 1)
		{
			if (Function_95(Var96.f_24) == Global_30621[Global_29004])
			{
				if (Var96.f_32 == iParam3)
				{
					if (((iParam1 != 4294967295 || iParam1 <= Var96.f_12) || (iParam1 != 0 && Var96.f_12 != 3)) || (iParam1 != 0 && Var96.f_12 != 4))
					{
						if (iParam4 != 0 || iParam4 != Function_94(Var96.f_20))
						{
							iVar4[iVar2] = iVar1;
							iVar2++;
							if (iParam5 == 1)
							{
								if (!Function_93(iVar1))
								{
									iVar50[iVar3] = iVar1;
									iVar3++;
								}
							}
						}
					}
				}
			}
		}
		iVar1++;
	}
	if (iVar2 >= 0)
	{
		if (iVar3 >= 0)
		{
			iVar1 = iVar50[(FLOOR(RAND_FLOAT_RANGE(0.0f, 1000.0f)) % iVar3)];
		}
		else
		{
			iVar1 = iVar4[(FLOOR(RAND_FLOAT_RANGE(0.0f, 1000.0f)) % iVar2)];
		}
		if (Function_97(uParam0, iVar1))
		{
			PRINTSTRING("BOUNTYHUNTER_FILL_DATA_BY_DIFFICULTY found actor");
			PRINTSTRING("With ActorEnum: ");
			PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(uParam0->f_20));
			PRINTNL();
			uParam0->f_24 = Function_78(uParam0, iParam4, 80, 20000, uParam0->f_12);
			iVar0 = 1;
		}
		else
		{
			LOG_ERROR("There's something wrong here");
		}
	}
	else
	{
		iVar0 = 0;
		LOG_ERROR("BOUNTYHUNTER_FILL_DATA_BY_DIFFICULTY did not find a valid actor");
		PRINTSTRING("BOUNTYHUNTER_FILL_DATA_BY_DIFFICULTY did not find an actor");
		PRINTNL();
	}
	if (iParam2 != 4294967294)
	{
		uParam0->f_24 = iParam2;
	}
	return iVar0;
}

var Function_78(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x3D43 / 15683
{
	var uVar0;
	var uVar1;
	
	uVar0 = uParam0->f_24;
	uParam3 = uParam3;
	uParam2 = uParam2;
	if (StackVal || uParam0->f_24 != 4294967295 != 1)
	{
		uVar1 = Function_79(uVar0, 80.0f, 20000.0f, uParam1, 1, uParam4);
	}
	else if (StackVal != 6)
	{
		LOG_ERROR("Unhandled Bounty Hunter Landmark type");
	}
	else
	{
		uVar1 = uParam0->f_24;
	}
	return uVar1;
}

var Function_79(int iParam0, float fParam1, float fParam2, int iParam3, int iParam4, int iParam5) //Position: 0x3DCE / 15822
{
	int iVar0;
	int iVar1[146];
	int iVar148[146];
	int iVar295;
	vector3 vVar296;
	vector3 vVar299;
	bool bVar302;
	bool bVar303;
	bool bVar304[146];
	bool bVar451[146];
	int iVar598;
	int iVar599;
	int iVar600;
	bool bVar601;
	bool bVar602;
	int iVar603;
	struct<8> Var604;
	
	iVar0 = 4294967295;
	bVar303 = 1.001638E+07.0f;
	bVar601 = false;
	bVar602 = false;
	iVar603 = 0;
	iVar598 = 0;
	while (iVar598 < 145)
	{
		iVar1[iVar598] = 4294967295;
		iVar148[iVar598] = 4294967295;
		iVar598++;
	}
	if (!Function_92(iParam0))
	{
		iParam0 = Global_29005;
	}
	iVar295 = Function_95(iParam0);
	PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - Checking Regions for a bountyhunter landmark: ");
	PRINTNL();
	GET_POSITION(GET_PLAYER_ACTOR(0), &vVar299);
	iVar598 = 0;
	while (iVar598 < 145)
	{
		Function_91(StackVal);
		vVar296 = { StackVal, StackVal, Function_91(StackVal) };
		bVar302 = VDIST(vVar299, vVar296);
		if (iParam3 == 0)
		{
			iParam3 = 0;
		}
		if (((StackVal && !(IS_VOLUME_VALID(StackVal) && (iVar295 != Function_95(Global_29155[iVar59810]) || iParam0 != 4294967295)) != 1) && Function_90(&(Global_29008[iVar598]), 8192)) && iVar598 == 0)
		{
			if (iVar598 == 146)
			{
				LOG_ERROR("The bountyhunter region count is screwy. Tell Ben.");
				return 4294967294;
			}
			if (bVar302 > bVar303)
			{
				bVar303 = bVar302;
				iVar600 = iVar598;
			}
			if (bVar302 < fParam1 && bVar302 > fParam2)
			{
				iVar1[bVar601] = iVar598;
				bVar304[bVar601] = bVar302;
				bVar601++;
				if (Function_83(Function_85(iVar598, 0, 2)) == 0)
				{
					PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - This location is NOT FINISHED.");
					PRINTNL();
					iVar148[bVar602] = iVar598;
					bVar451[bVar602] = bVar302;
					bVar602++;
				}
				else
				{
					PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - This location is FINISHED. ");
					PRINTNL();
				}
			}
		}
		if (bVar601 == iVar1)
		{
			iVar598 = 146;
			LOG_ERROR("Reached regCount max? Tell Ben.");
		}
		iVar598++;
	}
	if (iParam5 != 4294967295)
	{
		Function_82(&iVar1, &bVar304, bVar601);
		Function_82(&iVar148, &bVar451, bVar602);
	}
	if (bVar602 < 0 && iParam4 != 1)
	{
		switch (iParam5)
		{
			case 0x00000001:
			case 0x00000002:
				iVar603 = Function_18(3, bVar602);
				break;
			
			case 0x00000000:
			case 0x00000003:
				iVar603 = Function_18(5, bVar602);
				break;
			
			case 0x00000004:
				iVar603 = Function_18(7, bVar602);
				break;
			
			case 0x00000005:
				iVar603 = Function_18(10, bVar602);
				break;
			
			case 0xFFFFFFFF:
			default:
				iVar603 = Function_18(5, bVar602);
		}
		RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
		iVar599 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 99.0f)) % iVar603);
		iVar0 = iVar148[iVar599];
		if (Function_92(iVar0))
		{
			PRINTSTRING("Randomly picked NOT FINISHED Bounty Hunter location ");
		}
		else
		{
			LOG_ERROR("Invalid bountyHunterRegion picked. Using failsafe.");
			iVar0 = Function_81();
			PRINTSTRING("Picked close NOT FINISHED Bounty Hunter location ");
		}
		Var604 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_80(iVar0) };
		PRINTSTRING(&Var604);
		PRINTSTRING(" with a distance of ");
		Function_91(StackVal);
		vVar296 = { StackVal, StackVal, Function_91(StackVal) };
		bVar302 = VDIST(vVar299, vVar296);
		PRINTFLOAT(bVar302);
		PRINTNL();
	}
	else if (bVar601 >= 0)
	{
		switch (iParam5)
		{
			case 0x00000001:
			case 0x00000002:
				iVar603 = Function_18(3, bVar601);
				break;
			
			case 0x00000000:
			case 0x00000003:
				iVar603 = Function_18(5, bVar601);
				break;
			
			case 0x00000004:
				iVar603 = Function_18(7, bVar601);
				break;
			
			case 0x00000005:
			case 0x00000006:
				iVar603 = Function_18(10, bVar601);
				break;
			
			case 0xFFFFFFFF:
			default:
				iVar603 = Function_18(5, bVar601);
		}
		RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
		iVar599 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 99.0f)) % iVar603);
		iVar0 = iVar1[iVar599];
		if (Function_92(iVar0))
		{
			PRINTSTRING("Randomly picked FINISHED Bounty Hunter location ");
		}
		else
		{
			LOG_ERROR("Invalid bountyHunterRegion picked. Using failsafe.");
			iVar0 = Function_81();
			PRINTSTRING("Picked close FINISHED Bounty Hunter location ");
		}
		Var604 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_80(iVar0) };
		PRINTSTRING(&Var604);
		PRINTSTRING(" with a distance of ");
		Function_91(StackVal);
		vVar296 = { StackVal, StackVal, Function_91(StackVal) };
		bVar302 = VDIST(vVar299, vVar296);
		PRINTFLOAT(bVar302);
		PRINTNL();
	}
	else
	{
		LOG_ERROR("No valid landmark picked");
		PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK found no valid landmarks");
		PRINTNL();
		return iVar600;
	}
	return iVar0;
}

struct<32> Function_80(int iParam0) //Position: 0x447A / 17530
{
	char* cVar0[32];
	
	strcpy(&cVar0, "INVALID REGION", 32);
	if (!Function_92(iParam0))
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	if (IS_VOLUME_VALID(StackVal))
	{
		strcpy(&cVar0, GET_OBJECT_NAME(StackVal), 32);
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	switch (StackVal)
	{
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
			memcpy(&cVar0, Global_29155[iParam010].f_20, 8);
			stradd(&cVar0, "v_region", 32);
			break;
		
		default:
			if (IS_VOLUME_VALID(StackVal))
			{
				strcpy(&cVar0, GET_OBJECT_NAME(StackVal), 32);
			}
			break;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_81() //Position: 0x4537 / 17719
{
	if (Global_29004 == 0)
	{
		return Global_30640[6];
	}
	if (Global_29004 == 1)
	{
		return Global_30693[3];
	}
	return Global_30723[5];
}

void Function_82(int iParam0, bool bParam1, int iParam2) //Position: 0x4565 / 17765
{
	int iVar0;
	int iVar1;
	var uVar2;
	float fVar3;
	int iVar4;
	
	iVar0 = 1;
	while (iVar0 < (iParam2 - 1))
	{
		fVar3 = (*bParam1)[iVar0];
		uVar2 = (*iParam0)[iVar0];
		iVar1 = (iVar0 - 1);
		iVar4 = 0;
		while (iVar4 == 0)
		{
			if ((*bParam1)[iVar1] < fVar3)
			{
				(*bParam1)[iVar1 + 1] = (*bParam1)[iVar1];
				(*iParam0)[iVar1 + 1] = (*iParam0)[iVar1];
				iVar1 = (iVar1 - 1);
				if (iVar1 <= 0)
				{
					iVar4 = 1;
				}
			}
			else
			{
				iVar4 = 1;
			}
		}
		(*iParam0)[iVar1 + 1] = uVar2;
		(*bParam1)[iVar1 + 1] = fVar3;
		iVar0++;
	}
	return;
}

int Function_83(int iParam0) //Position: 0x45F3 / 17907
{
	if (!Function_84(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_12;
}

bool Function_84(int iParam0) //Position: 0x460D / 17933
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_85(bool bParam0, bool bParam1, bool bParam2) //Position: 0x4624 / 17956
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_89(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_86(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_86(bParam0, bParam1, bParam2, 4294967295);
}

int Function_86(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x4682 / 18050
{
	var uVar0;
	
	if (!Function_88(bParam2))
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
	uVar0 = Function_89(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_87(uVar0);
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

int Function_87(int iParam0) //Position: 0x47D7 / 18391
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

bool Function_88(int iParam0) //Position: 0x4815 / 18453
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_89(int iParam0, int iParam1, int iParam2) //Position: 0x482A / 18474
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

int Function_90(var uParam0, int iParam1) //Position: 0x484A / 18506
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

vector3 Function_91(bool bParam0) //Position: 0x4866 / 18534
{
	vector3 vVar0;
	
	GET_VOLUME_CENTER(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

bool Function_92(int iParam0) //Position: 0x4877 / 18551
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

bool Function_93(bool bParam0) //Position: 0x488D / 18573
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	bVar0 = true;
	if (bParam0 <= 32)
	{
		bVar1 = SHIFT_LEFT(bVar0, bParam0);
		if ((Global_26303 && bVar1) >= 0)
		{
			iVar2 = 1;
		}
		else
		{
			iVar2 = 0;
		}
	}
	else
	{
		bVar1 = SHIFT_LEFT(bVar0, (bParam0 - 32));
		if ((StackVal && bVar1) >= 0)
		{
			iVar2 = 1;
		}
		else
		{
			iVar2 = 0;
		}
	}
	return iVar2;
}

int Function_94(bool bParam0) //Position: 0x48DF / 18655
{
	int iVar0;
	int iVar1;
	
	iVar0 = GET_ACTOR_ENUM_FACTION(bParam0);
	switch (iVar0)
	{
		case 0x0000000F:
			iVar1 = 1;
			break;
		
		case 0x0000001B:
			iVar1 = 2;
			break;
		
		case 0x00000018:
			iVar1 = 3;
			break;
		
		case 0x0000000C:
			iVar1 = 4;
			break;
		
		case 0x00000019:
			iVar1 = 5;
			break;
		
		case 0x0000000E:
			iVar1 = 6;
			break;
		
		case 0x0000000D:
			iVar1 = 7;
			break;
		
		default:
			LOG_ERROR("BOUNTYHUNTER_GET_GANG_TYPE found an invalid actor faction");
			iVar1 = 7;
			break;
	}
	return iVar1;
}

int Function_95(int iParam0) //Position: 0x498E / 18830
{
	return Function_96(iParam0);
}

int Function_96(int iParam0) //Position: 0x4999 / 18841
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_92(iParam0))
	{
		if (StackVal == 1)
		{
			iVar0 = iParam0;
		}
		else if (StackVal == 2)
		{
			iVar0 = Global_29155[iParam010];
		}
		else
		{
			iVar0 = Global_29155[iParam010];
			iVar0 = Global_29155[iVar010];
		}
	}
	return iVar0;
}

bool Function_97(var uParam0, int iParam1) //Position: 0x49F1 / 18929
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam1)
	{
		case 0x00000000:
			uParam0->f_12 = 3;
			uParam0->f_20 = 415;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 26;
			break;
		
		case 0x00000001:
			uParam0->f_12 = 3;
			uParam0->f_20 = 416;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 27;
			break;
		
		case 0x00000002:
			uParam0->f_12 = 5;
			uParam0->f_20 = 422;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 28;
			break;
		
		case 0x00000003:
			uParam0->f_12 = 5;
			uParam0->f_20 = 423;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 29;
			break;
		
		case 0x00000004:
			uParam0->f_12 = 4;
			uParam0->f_20 = 418;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 30;
			break;
		
		case 0x00000005:
			uParam0->f_12 = 4;
			uParam0->f_20 = 419;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 31;
			break;
		
		case 0x00000006:
			uParam0->f_12 = 2;
			uParam0->f_20 = 397;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 12;
			break;
		
		case 0x00000007:
			uParam0->f_12 = 4;
			uParam0->f_20 = 398;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 32;
			break;
		
		case 0x00000008:
			uParam0->f_12 = 5;
			uParam0->f_20 = 403;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 33;
			break;
		
		case 0x00000009:
			uParam0->f_12 = 5;
			uParam0->f_20 = 404;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 34;
			break;
		
		case 0x0000000A:
			uParam0->f_12 = 4;
			uParam0->f_20 = 400;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 35;
			break;
		
		case 0x0000000B:
			uParam0->f_12 = 5;
			uParam0->f_20 = 401;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 36;
			break;
		
		case 0x0000000C:
			uParam0->f_12 = 2;
			uParam0->f_20 = 496;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 13;
			break;
		
		case 0x0000000D:
			uParam0->f_12 = 2;
			uParam0->f_20 = 497;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 14;
			break;
		
		case 0x0000000E:
			uParam0->f_12 = 4;
			uParam0->f_20 = 502;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 17;
			break;
		
		case 0x0000000F:
			uParam0->f_12 = 4;
			uParam0->f_20 = 503;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 5;
			break;
		
		case 0x00000010:
			uParam0->f_12 = 3;
			uParam0->f_20 = 499;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 18;
			break;
		
		case 0x00000011:
			uParam0->f_12 = 3;
			uParam0->f_20 = 500;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 19;
			break;
		
		case 0x00000012:
			uParam0->f_12 = 1;
			uParam0->f_20 = 477;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 1;
			break;
		
		case 0x00000013:
			uParam0->f_12 = 1;
			uParam0->f_20 = 478;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 42;
			break;
		
		case 0x00000014:
			uParam0->f_12 = 3;
			uParam0->f_20 = 483;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 41;
			break;
		
		case 0x00000015:
			uParam0->f_12 = 3;
			uParam0->f_20 = 484;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 2;
			break;
		
		case 0x00000016:
			uParam0->f_12 = 2;
			uParam0->f_20 = 480;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 3;
			break;
		
		case 0x00000017:
			uParam0->f_12 = 2;
			uParam0->f_20 = 481;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 4;
			break;
		
		case 0x00000018:
			uParam0->f_12 = 1;
			uParam0->f_20 = 505;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 43;
			break;
		
		case 0x00000019:
			uParam0->f_12 = 1;
			uParam0->f_20 = 506;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 44;
			break;
		
		case 0x0000001A:
			uParam0->f_12 = 3;
			uParam0->f_20 = 513;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 15;
			break;
		
		case 0x0000001B:
			uParam0->f_12 = 3;
			uParam0->f_20 = 514;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 6;
			break;
		
		case 0x0000001C:
			uParam0->f_12 = 2;
			uParam0->f_20 = 508;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 16;
			break;
		
		case 0x0000001D:
			uParam0->f_12 = 2;
			uParam0->f_20 = 509;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 7;
			break;
		
		case 0x0000001E:
			uParam0->f_12 = 1;
			uParam0->f_20 = 486;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 45;
			break;
		
		case 0x0000001F:
			uParam0->f_12 = 1;
			uParam0->f_20 = 487;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 46;
			break;
		
		case 0x00000020:
			uParam0->f_12 = 3;
			uParam0->f_20 = 492;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 8;
			break;
		
		case 0x00000021:
			uParam0->f_12 = 3;
			uParam0->f_20 = 493;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 9;
			break;
		
		case 0x00000022:
			uParam0->f_12 = 2;
			uParam0->f_20 = 489;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 10;
			break;
		
		case 0x00000023:
			uParam0->f_12 = 2;
			uParam0->f_20 = 490;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 11;
			break;
		
		case 0x00000024:
			uParam0->f_12 = 3;
			uParam0->f_20 = 467;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 47;
			break;
		
		case 0x00000025:
			uParam0->f_12 = 3;
			uParam0->f_20 = 468;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 48;
			break;
		
		case 0x00000026:
			uParam0->f_12 = 2;
			uParam0->f_20 = 406;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 20;
			break;
		
		case 0x00000027:
			uParam0->f_12 = 3;
			uParam0->f_20 = 407;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 21;
			break;
		
		case 0x00000028:
			uParam0->f_12 = 4;
			uParam0->f_20 = 412;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 22;
			break;
		
		case 0x00000029:
			uParam0->f_12 = 4;
			uParam0->f_20 = 413;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 23;
			break;
		
		case 0x0000002A:
			uParam0->f_12 = 3;
			uParam0->f_20 = 410;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 24;
			break;
		
		case 0x0000002B:
			uParam0->f_12 = 3;
			uParam0->f_20 = 411;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 25;
			break;
		
		case 0x0000002C:
			uParam0->f_12 = 2;
			uParam0->f_20 = 787;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 60;
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

var Function_98(int iParam0) //Position: 0x5164 / 20836
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000001:
			iVar0 = (4 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 2.0f)));
			break;
		
		case 0x00000002:
			iVar0 = (5 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 2.0f)));
			break;
		
		case 0x00000003:
			iVar0 = (6 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 2.0f)));
			break;
		
		case 0x00000004:
			iVar0 = (7 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 2.0f)));
			break;
		
		case 0x00000005:
			iVar0 = (8 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 2.0f)));
			break;
		
		case 0x00000006:
			iVar0 = (8 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 3.0f)));
			break;
		
		case 0x00000000:
		default:
			iVar0 = (4 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 5.0f)));
			break;
	}
	return iVar0;
}

bool Function_99() //Position: 0x5232 / 21042
{
	return Function_40(StackVal, 1);
}

int Function_100() //Position: 0x5241 / 21057
{
	int iVar0;
	
	iVar0 = Function_101(0);
	return iVar0;
}

var Function_101(int iParam0) //Position: 0x524F / 21071
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = (Function_25(358) + Function_25(359));
	if (iParam0 == 1)
	{
		iVar2 = Function_18(iVar1, 7);
		if (iVar2 == 0)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 1000.0f)) % iVar2);
		}
	}
	else
	{
		if (iVar1 <= 2)
		{
			iVar0 = 1;
		}
		else if (iVar1 <= 4)
		{
			iVar0 = 2;
		}
		else
		{
			iVar0 = 3;
		}
		if (Global_29004 == 0)
		{
			iVar0 = iVar0;
		}
		else if (Global_29004 == 1)
		{
			iVar0++;
		}
		else
		{
			iVar0 += 2;
		}
	}
	return iVar0;
}

int Function_102(int iParam0) //Position: 0x52D3 / 21203
{
	int iVar0;
	int iVar1;
	
	iVar0 = 250;
	switch (*iParam0)
	{
		case 0x00000000:
			Function_188("UPDATE_JAIL_CUTSCENE: JAIL_INIT_JAIL", 11);
			Function_187("law_submit_cutscene", 5.0f, 0, 2, 1, 0);
			*iParam0 = 1;
			if (bLocal_89)
			{
				Function_185();
				Function_184();
				if (((iLocal_44 != Global_30640[0] || iLocal_44 != Global_30693[0]) || iLocal_44 != Global_30668[0]) || iLocal_44 != Global_30717[0])
				{
					Function_183(fLocal_101);
				}
			}
			else if (iLocal_44 == Global_30707[1])
			{
				Function_185();
				Function_184();
			}
			TELEPORT_ACTOR(Function_199(), &vLocal_14, 1, 1, 0);
			Function_59(0);
			iVar0 = 250;
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && Function_190(&bLocal_50))
			{
				Function_179(1, 0, 0, 0, 1, 1, 1, 0, 1, 1, 1, 1);
				UI_PUSH("CutsceneWithMessages");
				bLocal_109 = true;
				if (iLocal_44 == Global_30640[0])
				{
					bLocal_45 = Function_175(bLocal_43, 0, 1, 0, 0);
				}
				else if (iLocal_44 == Global_30668[0])
				{
					bLocal_45 = Function_171(bLocal_43, 0, 1, 0, 0);
				}
				else if (iLocal_44 == Global_30685[0])
				{
					bLocal_45 = Function_167(bLocal_43, 0, 1, 0, 0);
				}
				else if (iLocal_44 == Global_30693[0])
				{
					bLocal_45 = Function_163(bLocal_43, 0, 1, 0, 0);
				}
				else if (iLocal_44 == Global_30707[1])
				{
					bLocal_45 = Function_159(bLocal_43, 0, 1, 0, 0);
				}
				else if (iLocal_44 == Global_30717[0])
				{
					bLocal_45 = Function_155(bLocal_43, 0, 1, 0, 0);
				}
				SET_ACTOR_HEADING(StackVal, Function_199(), 1);
				*iParam0 = 2;
				SET_ACTOR_TO_SEAT(Function_199(), 0.0f);
				switch (bLocal_77)
				{
					case 0x00000000:
						SET_ANIM_SET_FOR_ACTOR(Function_199(), "sit_bed", 0);
						bLocal_78 = "sit_bed/idle";
						break;
					
					case 0x00000001:
						SET_ANIM_SET_FOR_ACTOR(Function_199(), "Marston_Prison_idle_01", 0);
						bLocal_78 = "Marston_Prison_idle_01/Idle01";
						break;
					
					case 0x00000002:
						SET_ANIM_SET_FOR_ACTOR(Function_199(), "Marston_Prison_idle_01", 0);
						bLocal_78 = "Marston_Prison_idle_01/Idle02";
						break;
				}
				SET_ACTION_NODE_FOR_ACTOR(Function_199(), bLocal_78);
				iVar0 = 0;
			}
			break;
		
		case 0x00000002:
			Function_188("UPDATE_JAIL_CUTSCENE: JAIL_RUN_JAIL", 11);
			PLAY_CUTSCENEOBJECT(bLocal_45, false, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
			TASK_STAND_STILL(Function_199(), -1.0f, 0, 0);
			Function_154(&bLocal_79);
			SET_TIME_ACCELERATION(8640.0f);
			Global_3409 = 1;
			WAIT(false);
			if (HUD_IS_FADED() && !HUD_IS_FADING())
			{
				if (!IS_GAME_RESETTING())
				{
					HUD_FADE_IN_NOW(0.0f, 1065353216);
				}
			}
			*iParam0 = 3;
		
		case 0x00000003:
			if (!iLocal_108)
			{
				STREAMING_RELEASE_MAIN_POI();
				iLocal_108 = 1;
			}
			if (!HUD_IS_FADED())
			{
				Function_150();
			}
			if (VDIST(Global_34574, vLocal_14) < 5.0f)
			{
				LOG_ERROR("Why is player not at the jail??");
			}
			else if (VDIST(Global_34574, vLocal_14) < 1.0f)
			{
			}
			if (!bLocal_87)
			{
				if ((IS_BUTTON_PRESSED(GET_PLAYER_PADINDEX(Function_199()), 6, 1, 0) && Function_146(&bLocal_79, 2.0f)) && *iParam0 == 15)
				{
					bLocal_87 = true;
					HUD_FADE_OUT(1.0f, 1f, 1);
				}
			}
			if (!IS_ACTION_NODE_PLAYING(Global_34573, bLocal_78) || (bLocal_87 && HUD_IS_FADED()))
			{
				if (!IS_ACTION_NODE_PLAYING(Global_34573, "sit_bed/released_from_prison"))
				{
					RESET_ANIM_SET_FOR_ACTOR(Function_199(), 0);
					SET_ANIM_SET_FOR_ACTOR(Function_199(), "sit_bed", 0);
					SET_ACTION_NODE_FOR_ACTOR(Function_199(), "sit_bed/released_from_prison");
				}
				if (bLocal_87)
				{
					if (!IS_GAME_RESETTING())
					{
						HUD_FADE_IN_NOW(1.0f, 1065353216);
					}
				}
				SET_TIME_ACCELERATION(Global_63398);
				Global_3409 = 0;
				Function_188("UPDATE_JAIL_CUTSCENE: JAIL_CLEANUP_JAIL", 11);
				Function_144(&bLocal_79);
				DESTROY_OBJECT(bLocal_45);
				DESTROY_OBJECT(bLocal_46);
				if (iLocal_44 == Global_30640[0])
				{
					bLocal_46 = Function_139(bLocal_43, 0, 0, 0, 0);
				}
				else if (iLocal_44 == Global_30668[0])
				{
					bLocal_46 = Function_134(bLocal_43, 0, 0, 0, 0);
				}
				else if (iLocal_44 == Global_30685[0])
				{
					bLocal_46 = Function_129(bLocal_43, 0, 1, 0, 0);
				}
				else if (iLocal_44 == Global_30693[0])
				{
					bLocal_46 = Function_124(bLocal_43, 0, 1, 0, 0);
				}
				else if (iLocal_44 == Global_30707[1])
				{
					bLocal_46 = Function_119(bLocal_43, 0, 1, 0, 0);
				}
				else if (iLocal_44 == Global_30717[0])
				{
					bLocal_46 = Function_114(bLocal_43, 0, 1, 0, 0);
				}
				if (bLocal_82)
				{
					Function_112("community_service_1", 0x41200000, 1, 0, 2, 1, 0);
				}
				*iParam0 = 15;
				iVar0 = 0;
			}
			iVar0 = 0;
			break;
		
		case 0x0000000F:
			if (!iLocal_83)
			{
				if (!iLocal_84)
				{
					if (Function_146(&bLocal_79, 2.5f))
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(0.5f, 1f, 1);
						}
						iLocal_84 = 1;
					}
				}
				else if (HUD_IS_FADED() && !IS_ACTION_NODE_PLAYING(Global_34573, "sit_bed/released_from_prison"))
				{
					iLocal_83 = 1;
				}
			}
			else if (!iLocal_85)
			{
				CLEAR_AMBIENT_OBJECTS_SPHERE(vLocal_23, 15.0f, 15);
				Function_107();
				if (!IS_GAME_RESETTING())
				{
					HUD_FADE_IN_NOW(0.5f, 1065353216);
				}
				SET_DAY((iLocal_95 + bLocal_13));
				SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(10, 0, 0));
				iVar1 = (iLocal_96 - 10);
				Function_105((bLocal_13 * 24 - iVar1));
				RESET_ANIM_SET_FOR_ACTOR(Global_34573, 0);
				if (bLocal_89)
				{
					if (iLocal_44 == Global_30640[0])
					{
						vLocal_20 = { -2086.76f, 16.96f, 2603.85f };
					}
					else if (iLocal_44 == Global_30693[0])
					{
						vLocal_20 = { -2661.58f, 31.39f, 4255.59f };
					}
					else if (iLocal_44 == Global_30668[0])
					{
						vLocal_20 = { -823.85f, 93.78f, 2428.42f };
					}
					else if (iLocal_44 == Global_30717[0])
					{
						vLocal_20 = { 763.83f, 79.45f, 1235.2f };
					}
					if (IS_ACTOR_VALID(bLocal_49))
					{
						if (iLocal_44 == Global_30640[0])
						{
							TELEPORT_ACTOR_WITH_HEADING(bLocal_49, -2085.44f, 16.96f, 2603.18f, 116.28f, 1, 1, 1);
						}
						else if (iLocal_44 == Global_30717[0])
						{
							TELEPORT_ACTOR_WITH_HEADING(bLocal_49, 764.55f, 79.45f, 1235.2f, 90.0f, 1, 1, 1);
						}
						ACTOR_RESET_ANIMS(bLocal_49, 1);
						RESET_ANIM_SET_FOR_ACTOR(bLocal_49, 0);
						TASK_STAND_STILL(bLocal_49, -1.0f, 0, 0);
						if (iLocal_44 == Global_30717[0])
						{
							SET_ACTOR_HEADING(bLocal_49, 90.0f, 1);
						}
						else if (iLocal_44 == Global_30640[0])
						{
							SET_ACTOR_HEADING(bLocal_49, 116.28f, 1);
						}
					}
				}
				else if (iLocal_44 == Global_30707[1])
				{
					vLocal_20 = { -718.18f, 63.26f, 3288.94f };
				}
				RESET_ANIM_SET_FOR_ACTOR(Function_199(), 0);
				TASK_CLEAR(Function_199());
				TELEPORT_ACTOR(Function_199(), &vLocal_20, 1, 1, 0);
				SET_ACTOR_TO_SEAT(Function_199(), 1.0f);
				if (iLocal_44 == Global_30640[0])
				{
					SET_ACTOR_HEADING(Function_199(), 116.28f, 1);
				}
				else if (iLocal_44 == Global_30668[0])
				{
					SET_ACTOR_HEADING(Function_199(), -13.71f, 1);
				}
				else if (iLocal_44 == Global_30685[0])
				{
					SET_ACTOR_HEADING(Function_199(), -179.38f, 1);
				}
				else if (iLocal_44 == Global_30693[0])
				{
					SET_ACTOR_HEADING(Function_199(), 81.35f, 1);
				}
				else if (iLocal_44 == Global_30707[1])
				{
					SET_ACTOR_HEADING(Function_199(), 52.74f, 1);
				}
				else if (iLocal_44 == Global_30717[0])
				{
					SET_ACTOR_HEADING(Function_199(), 90.0f, 1);
				}
				Function_58(Function_199());
				Function_197(3, 1);
				EQUIP_ACCESSORY(Global_34573, 0, 1);
				if (bLocal_94)
				{
					EQUIP_ACCESSORY(Global_34573, 1, 1);
				}
				Function_197(4, 1);
				if (!bLocal_89)
				{
					TASK_GO_NEAR_COORD(Function_199(), &vLocal_23, 1.0f, 1);
				}
				else
				{
					SET_ANIM_SET_FOR_ACTOR(Function_199(), "jail_release", 0);
					SET_ACTION_NODE_FOR_ACTOR(Function_199(), "jail_release/Marston");
					SET_LINKED_ANIM_TARGET(bLocal_49, Function_199());
					SET_ANIM_SET_FOR_ACTOR(bLocal_49, "jail_release", 0);
					SET_ACTION_NODE_FOR_ACTOR(bLocal_49, "jail_release/Guard");
					if (iLocal_44 == Global_30640[0])
					{
						fLocal_97 = (GET_CURRENT_GAME_TIME() + 2.1f);
						fLocal_98 = (GET_CURRENT_GAME_TIME() + 7.94f);
						fLocal_103 = 130.0f;
						fLocal_104 = 80.0f;
					}
					else if (iLocal_44 == Global_30717[0])
					{
						fLocal_97 = (GET_CURRENT_GAME_TIME() + 2.23f);
						fLocal_98 = (GET_CURRENT_GAME_TIME() + 7.88f);
						fLocal_103 = 120.0f;
						fLocal_104 = 90.0f;
					}
					else
					{
						fLocal_97 = (GET_CURRENT_GAME_TIME() + 2.18f);
						fLocal_98 = (GET_CURRENT_GAME_TIME() + 8.1f);
						fLocal_103 = 120.0f;
						fLocal_104 = 94.0f;
					}
					if (iLocal_44 == Global_30668[0])
					{
						fLocal_102 = (GET_CURRENT_GAME_TIME() + 7.0f);
					}
					else if (iLocal_44 == Global_30717[0])
					{
						fLocal_102 = (GET_CURRENT_GAME_TIME() + 6.0f);
					}
				}
				iLocal_85 = 1;
			}
			else
			{
				if (bLocal_89)
				{
					Function_104();
					if (!iLocal_93)
					{
						if (iLocal_44 != Global_30668[0] || iLocal_44 != Global_30717[0])
						{
							if (GET_CURRENT_GAME_TIME() <= fLocal_102)
							{
								Function_103(Function_199());
								SET_OBJECT_POSITION_ON_GROUND(GET_OBJECT_FROM_ACTOR(Function_199()), Function_103(Function_199()));
								iLocal_93 = 1;
							}
						}
					}
				}
				if (!IS_OBJECT_VALID(bLocal_46))
				{
					UI_POP("CutsceneWithMessages");
					Function_50(1, 0, 1, 1, 1, 1, 0, 1, 1, 1);
					bLocal_109 = false;
					DESTROY_OBJECT(bLocal_45);
					DESTROY_OBJECT(bLocal_46);
					*iParam0 = 16;
				}
			}
			iVar0 = 0;
			break;
		
		case 0x00000010:
			Function_188("UPDATE_JAIL_CUTSCENE: JAIL_CLEANUP_LEAVE_JAIL", 11);
			iLocal_11 = 3;
			*iParam0 = 17;
			iVar0 = 0;
		
		case 0x00000011:
			break;
	}
	return iVar0;
}

vector3 Function_103(bool bParam0) //Position: 0x5D09 / 23817
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_104() //Position: 0x5D1A / 23834
{
	float fVar0;
	
	if (IS_OBJECT_VALID(bLocal_40))
	{
		if (fLocal_99 < 0.0f)
		{
			fVar0 = (GET_CURRENT_GAME_TIME() - fLocal_99);
			if (!bLocal_90)
			{
				if (GET_CURRENT_GAME_TIME() <= fLocal_97)
				{
					vLocal_105.f_4 = (vLocal_105.y - (fVar0 * fLocal_103));
					if (vLocal_105.y >= fLocal_100)
					{
						vLocal_105.y = fLocal_100;
						bLocal_90 = true;
					}
				}
			}
			if (!iLocal_91)
			{
				if (bLocal_90)
				{
					if (GET_CURRENT_GAME_TIME() <= fLocal_98)
					{
						vLocal_105.f_4 = (vLocal_105.y + (fVar0 * fLocal_104));
						if (vLocal_105.y <= fLocal_101)
						{
							vLocal_105.y = fLocal_101;
							iLocal_91 = 1;
						}
					}
				}
			}
			SET_OBJECT_ORIENTATION(bLocal_40, vLocal_105);
			fLocal_99 = GET_CURRENT_GAME_TIME();
		}
		else
		{
			fLocal_99 = GET_CURRENT_GAME_TIME();
		}
	}
	return;
}

void Function_105(int iParam0) //Position: 0x5DB3 / 23987
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 101;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 <= iVar1)
	{
		iVar2 = 0;
		if (Global_30842[16])
		{
			PRINTNL();
			PRINTNL();
			PRINTSTRING("CUR time of day delay: ");
			Function_106(Global_16876[iVar06]);
		}
		if (GET_DAY(Global_16876[iVar06]) == 0)
		{
			iVar2 = 1;
		}
		ADD_TIME(&(Global_16876[iVar06]), iVar2, iParam0, false, 0);
		Global_17483[iVar075].f_264 = Global_16876[iVar06];
		if (Global_30842[16])
		{
			PRINTNL();
			PRINTSTRING("NEW time of day delay: ");
			Function_106(Global_16876[iVar06]);
		}
		iVar0++;
	}
	return;
}

void Function_106(bool bParam0) //Position: 0x5E73 / 24179
{
	PRINTSTRING("Day ");
	PRINTINT(GET_DAY(bParam0));
	PRINTSTRING(": ");
	PRINTINT(GET_HOUR(bParam0));
	PRINTSTRING(":");
	PRINTINT(GET_MINUTE(bParam0));
	PRINTSTRING(":");
	PRINTINT(GET_SECOND(bParam0));
	return;
}

void Function_107() //Position: 0x5EB9 / 24249
{
	bool bVar0;
	vector3 vVar1;
	float fVar4;
	
	bVar0 = false;
	if (iLocal_44 == Global_30640[0])
	{
		vVar1 = { -2086.58f, 16.96f, 2601.84f };
		fVar4 = 141.0f;
		bVar0 = true;
	}
	else if (iLocal_44 == Global_30668[0])
	{
		vVar1 = { -827.34f, 93.81f, 2429.02f };
		fVar4 = -54.0f;
		bVar0 = true;
	}
	else if (iLocal_44 == Global_30717[0])
	{
		vVar1 = { 764.55f, 79.45f, 1235.2f };
		fVar4 = 90.0f;
		bVar0 = true;
	}
	else if (iLocal_44 == Global_30693[0])
	{
		vVar1 = { -2661.3f, 31.39f, 4255.57f };
		fVar4 = 82.88f;
		bVar0 = true;
	}
	if (bVar0)
	{
		bLocal_49 = Function_111(StackVal, StackVal, vVar1);
		if (IS_ACTOR_VALID(bLocal_49))
		{
			if (Function_109(StackVal, StackVal, bLocal_49, vVar1) <= 5.0f)
			{
				if (!bLocal_89)
				{
					TELEPORT_ACTOR(bLocal_49, &vVar1, 1, 0, 1);
					SET_ACTOR_HEADING(bLocal_49, fVar4, 1);
					TASK_STAND_STILL(bLocal_49, 15.0f, 0, 0);
				}
			}
		}
		else
		{
			bLocal_49 = CREATE_ACTOR_IN_LAYOUT(bLocal_43, Function_201(), bLocal_76, vVar1, 0.0f, 0.0f, 0.0f);
			if (IS_ACTOR_VALID(bLocal_49))
			{
				bLocal_92 = true;
				SET_ACTOR_HEADING(bLocal_49, fVar4, 1);
				Function_108(bLocal_49, 0);
				SET_ACTOR_UPDATE_PRIORITY(bLocal_49, false);
				if (!bLocal_89)
				{
					TASK_STAND_STILL(bLocal_49, 15.0f, 0, 0);
				}
			}
		}
		if (IS_ACTOR_VALID(bLocal_49))
		{
			Function_103(bLocal_49);
			Function_33();
			bLocal_41 = CREATE_PROP_IN_LAYOUT(bLocal_43, Function_201(), "revolver_cattleman01x", Function_103(bLocal_49), Function_33(), 0);
			ATTACH_OBJECTS(bLocal_41, GET_OBJECT_FROM_ACTOR(bLocal_49), "wrist_l_attachment", 0.03f, -0.1275f, -0.031f, -90.0f, 0.0f, 0.0f, 4294967295);
		}
	}
	return;
}

int Function_108(bool bParam0, bool bParam1) //Position: 0x6065 / 24677
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_OBJECTSET_VALID(bVar0))
	{
		bVar1 = CREATE_OBJECT_ITERATOR(Global_26314);
		ITERATE_EVERYWHERE(bVar1);
		ITERATE_ON_OBJECT_TYPE(bVar1, 2);
		ITERATE_ON_PARTIAL_NAME(bVar1, "nSharedLaw");
		bVar0 = GET_OBJECTSET_FROM_OBJECT(START_OBJECT_ITERATOR(bVar1));
		DESTROY_ITERATOR(bVar1);
	}
	else
	{
		bVar0 = bParam1;
	}
	if (!IS_OBJECTSET_VALID(bVar0))
	{
		return 0;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return 0;
	}
	if (IS_OBJECT_IN_OBJECTSET(bParam0, bVar0))
	{
		return 0;
	}
	ADD_OBJECT_TO_OBJECTSET(bParam0, bVar0);
	CLEAN_OBJECTSET(bVar0);
	return 1;
}

float Function_109(bool bParam0, vector3 vParam1) //Position: 0x60DE / 24798
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_110(bParam0);
		vVar0 = { StackVal, StackVal, Function_110(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

vector3 Function_110(bool bParam0) //Position: 0x6158 / 24920
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

var Function_111(vector3 vParam0) //Position: 0x61C2 / 25026
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	
	bVar4 = 1E+08.0f;
	if (IS_OBJECTSET_VALID(Global_62999))
	{
		bVar0 = false;
		while (bVar0 <= GET_OBJECTSET_SIZE(Global_62999))
		{
			bVar6 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, Global_62999);
			GET_OBJECT_POSITION(bVar6, &vVar1);
			if (VDIST(vParam0, vVar1) > bVar4)
			{
				bVar4 = VDIST(vParam0, vVar1);
				bVar5 = bVar6;
			}
			bVar0++;
		}
	}
	if (GET_OBJECT_TYPE(bVar5) == 15)
	{
		bVar7 = GET_ACTOR_FROM_OBJECT(bVar5);
		if (IS_ACTOR_VALID(bVar7))
		{
			REFERENCE_ACTOR(bVar7);
			TASK_CLEAR(bVar7);
			TASK_OVERRIDE_CLEAR_MOVETYPE(bVar7);
		}
	}
	else if (GET_OBJECT_TYPE(bVar5) == 24)
	{
		bVar8 = GET_PERS_CHAR_FROM_OBJECT(bVar5);
		ACTIVATE_ACTOR_FOR_PERS_CHAR(bVar8);
		bVar7 = GET_ACTOR_FROM_PERS_CHAR(bVar8);
		if (IS_ACTOR_VALID(bVar7))
		{
			REFERENCE_ACTOR(bVar7);
			TASK_CLEAR(bVar7);
			TASK_OVERRIDE_CLEAR_MOVETYPE(bVar7);
		}
	}
	if (IS_ACTOR_VALID(bVar7))
	{
		DECOR_SET_BOOL(bVar7, "nsharedlaw", true);
	}
	return bVar7;
}

void Function_112(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x62A0 / 25248
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_113(Global_6269) };
		}
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

struct<16> Function_113(int iParam0) //Position: 0x631B / 25371
{
	char* cVar0[16];
	
	if (!Function_42())
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

bool Function_114(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x635A / 25434
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_201(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "blk_jail_exit", 3, 1);
	}
	Function_115(&bVar0);
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

void Function_115(int iParam0) //Position: 0x63D3 / 25555
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_118(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_117(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_116(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 3.5f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 1, 2, 10.5f, 1, 0);
	return;
}

void Function_116(int iParam0) //Position: 0x6428 / 25640
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 24.6192f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 759.774f, 80.95641f, 1233.783f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -3.251785f, -132.8951f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_117(int iParam0) //Position: 0x6492 / 25746
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 24.6192f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 758.674f, 80.95641f, 1233.603f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.2817846f, -128.8447f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_118(int iParam0) //Position: 0x64FC / 25852
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 35.0001f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 770.9526f, 83.39214f, 1241.146f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.982271f, -2.661452f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

bool Function_119(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x6566 / 25958
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_201(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "fod_jail_exit", 3, 1);
	}
	Function_120(&bVar0);
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

void Function_120(int iParam0) //Position: 0x65DF / 26079
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_123(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_122(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_121(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 3.5f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 1, 2, 9.0f, 1, 0);
	return;
}

void Function_121(int iParam0) //Position: 0x6634 / 26164
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 41.27919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -724.032f, 64.42379f, 3283.254f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.0546288f, -2.575407f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_122(int iParam0) //Position: 0x669E / 26270
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 41.27919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -721.9219f, 64.42379f, 3282.354f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.2185152f, -2.976659f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_123(int iParam0) //Position: 0x6708 / 26376
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -722.1326f, 64.73214f, 3300.116f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.055013f, 0.441531f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

bool Function_124(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x6772 / 26482
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_201(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "chu_jail_exit", 3, 1);
	}
	Function_125(&bVar0);
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

void Function_125(int iParam0) //Position: 0x67EB / 26603
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_128(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_127(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_126(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 3.5f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 1, 2, 11.5f, 1, 0);
	return;
}

void Function_126(int iParam0) //Position: 0x6840 / 26688
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 26.53919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2671.777f, 32.76976f, 4259.368f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.066497f, -0.322885f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_127(int iParam0) //Position: 0x68AA / 26794
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 26.53919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2673.607f, 32.76976f, 4259.228f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.0305432f, -1.121723f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_128(int iParam0) //Position: 0x6914 / 26900
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 30.0092f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2652.903f, 31.63214f, 4248.676f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.149575f, -1.176352f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

bool Function_129(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x697E / 27006
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_201(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "esc_jail_exit", 3, 1);
	}
	Function_130(&bVar0);
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

void Function_130(int iParam0) //Position: 0x69F7 / 27127
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_133(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_132(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_131(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 3.5f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 1, 2, 6.5f, 1, 0);
	return;
}

void Function_131(int iParam0) //Position: 0x6A4C / 27212
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 44.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4340.766f, 31.25712f, 4383.407f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.00139626f, 0.9880309f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_132(int iParam0) //Position: 0x6AB6 / 27318
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 44.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4340.576f, 31.90712f, 4383.337f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.2864085f, 0.8600982f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_133(int iParam0) //Position: 0x6B20 / 27424
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 30.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4359.153f, 33.24214f, 4380.416f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -24.78057f, -134.246f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

bool Function_134(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x6B8A / 27530
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_201(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "JailLeavingMac", 3, 1);
	}
	Function_135(&bVar0);
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

void Function_135(int iParam0) //Position: 0x6C04 / 27652
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_138(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_137(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_136(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 3.5f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 1, 2, 9.5f, 1, 0);
	return;
}

void Function_136(int iParam0) //Position: 0x6C59 / 27737
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 41.38f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -823.9387f, 95.26263f, 2423.118f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.111352f, -1.53013f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_137(int iParam0) //Position: 0x6CC3 / 27843
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 41.38f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -824.7288f, 95.30263f, 2423.748f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.03159f, -2.273989f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_138(int iParam0) //Position: 0x6D2D / 27949
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 33.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -822.071f, 94.35816f, 2434.316f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.102343f, -2.472404f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

bool Function_139(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x6D97 / 28055
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_201(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "JailLeavingArm", 3, 1);
	}
	Function_140(&bVar0);
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

void Function_140(int iParam0) //Position: 0x6E11 / 28177
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_143(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_142(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_141(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 3.5f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 1, 2, 11.5f, 1, 0);
	return;
}

void Function_141(int iParam0) //Position: 0x6E66 / 28262
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 41.38f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2091.688f, 18.28384f, 2608.718f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.05777f, -0.3771656f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_142(int iParam0) //Position: 0x6ED0 / 28368
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 41.38f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2090.198f, 18.29384f, 2609.338f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.05777f, -0.184481f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_143(int iParam0) //Position: 0x6F3A / 28474
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 26.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2088.679f, 18.43556f, 2602.515f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.092153f, -1.852318f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_144(int iParam0) //Position: 0x6FA4 / 28580
{
	Function_145(iParam0, 0.0f);
	return;
}

void Function_145(var uParam0, float fParam1) //Position: 0x6FB0 / 28592
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_34(uParam0, 1);
	Function_2(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

bool Function_146(bool bParam0, float fParam1) //Position: 0x6FD1 / 28625
{
	if (Function_149(bParam0))
	{
		if (Function_147(bParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_147(bool bParam0) //Position: 0x6FED / 28653
{
	if (Function_149(bParam0))
	{
		if (Function_148(bParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_148(int iParam0) //Position: 0x70B5 / 28853
{
	return Function_40(*iParam0, 2);
}

bool Function_149(bool bParam0) //Position: 0x70C2 / 28866
{
	return Function_40(*bParam0, 1);
}

void Function_150() //Position: 0x70CF / 28879
{
	bool bVar0;
	char* cVar1[64];
	
	if (!bLocal_86)
	{
		if ((fLocal_110 + 2.0f) > GET_CURRENT_GAME_TIME() && !HUD_IS_FADED())
		{
			bVar0 = false;
			while (!bVar0 && !bLocal_86)
			{
				iLocal_111++;
				if (iLocal_111 != 0)
				{
					if ((*&Global_26401 + 36[Global_29004181][Function_153(iLocal_111)5])[3] >= 0)
					{
						bVar0 = true;
					}
				}
				if (iLocal_111 > 35)
				{
					bLocal_86 = true;
				}
			}
			if (!bLocal_86)
			{
				strcpy(&cVar1, "law_crime_rapsheet_multi", 64);
				if ((*&Global_26401 + 36[Global_29004181][Function_153(iLocal_111)5])[3] == 1)
				{
					strcpy(&cVar1, "law_crime_rapsheet_single", 64);
				}
				PRINT_BIG_FORMAT(2.0f, &cVar1, Function_151((*&Global_26401 + 36[Global_29004181][Function_153(iLocal_111)5])[3]), &Global_26998[Function_153(iLocal_111)18] + 4, 0, 0, 2, 0);
				fLocal_110 = GET_CURRENT_GAME_TIME();
			}
		}
	}
	return;
}

var Function_151(bool bParam0) //Position: 0x71BB / 29115
{
	bool bVar0;
	
	bVar0 = Function_152();
	UI_SET_STRING(bVar0, I2STR(bParam0));
	return bVar0;
}

var Function_152() //Position: 0x71D2 / 29138
{
	Global_6285 = (Global_6285 + 1 % 10);
	switch (Global_6285)
	{
		case 0x00000001:
			return "POD2ST1";
		
		case 0x00000002:
			return "POD2ST2";
		
		case 0x00000003:
			return "POD2ST3";
		
		case 0x00000004:
			return "POD2ST4";
		
		case 0x00000005:
			return "POD2ST5";
		
		case 0x00000006:
			return "POD2ST6";
		
		case 0x00000007:
			return "POD2ST7";
		
		case 0x00000008:
			return "POD2ST8";
		
		case 0x00000009:
			return "POD2ST9";
		
		default:
	}
	return "POD2ST0";
}

int Function_153(int iParam0) //Position: 0x728E / 29326
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0;
			break;
		
		case 0x00000001:
			return 12;
			break;
		
		case 0x00000002:
			return 11;
			break;
		
		case 0x00000003:
			return 22;
			break;
		
		case 0x00000004:
			return 21;
			break;
		
		case 0x00000005:
			return 7;
			break;
		
		case 0x00000006:
			return 6;
			break;
		
		case 0x00000007:
			return 13;
			break;
		
		case 0x00000008:
			return 8;
			break;
		
		case 0x00000009:
			return 16;
			break;
		
		case 0x0000000A:
			return 17;
			break;
		
		case 0x0000000B:
			return 19;
			break;
		
		case 0x0000000C:
			return 20;
			break;
		
		case 0x0000000D:
			return 14;
			break;
		
		case 0x0000000E:
			return 9;
			break;
		
		case 0x0000000F:
			return 18;
			break;
		
		case 0x00000010:
			return 15;
			break;
		
		case 0x00000011:
			return 10;
			break;
		
		case 0x00000012:
			return 5;
			break;
		
		case 0x00000013:
			return 3;
			break;
		
		case 0x00000014:
			return 4;
			break;
		
		case 0x00000015:
			return 1;
			break;
		
		case 0x00000016:
			return 2;
			break;
		
		case 0x00000017:
			return 28;
			break;
		
		case 0x00000018:
			return 30;
			break;
		
		case 0x00000019:
			return 35;
			break;
		
		case 0x0000001A:
			return 23;
			break;
		
		case 0x0000001B:
			return 24;
			break;
		
		case 0x0000001C:
			return 25;
			break;
		
		case 0x0000001D:
			return 26;
			break;
		
		case 0x0000001E:
			return 27;
			break;
		
		case 0x0000001F:
			return 29;
			break;
		
		case 0x00000020:
			return 31;
			break;
		
		case 0x00000021:
			return 32;
			break;
		
		case 0x00000022:
			return 33;
			break;
		
		case 0x00000023:
			return 34;
			break;
	}
	return 0;
}

void Function_154(int iParam0) //Position: 0x7444 / 29764
{
	if (!Function_149(iParam0))
	{
		Function_145(iParam0, 0.0f);
	}
	return;
}

var Function_155(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x7459 / 29785
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_201(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "blk_jail", 2, 1);
	}
	Function_156(&bVar0);
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

void Function_156(int iParam0) //Position: 0x74CD / 29901
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_158(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_157(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 23.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 60.0f, 1);
	return;
}

void Function_157(int iParam0) //Position: 0x7514 / 29972
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 22.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 771.0601f, 80.5f, 1232.41f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.019548f, -3.064449f, 0.0f, 1);
	return;
}

void Function_158(int iParam0) //Position: 0x7571 / 30065
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 22.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 771.84f, 80.61f, 1238.88f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.008377f, -3.10337f, 0.0f, 1);
	return;
}

var Function_159(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x75CE / 30158
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_201(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "fod_jail", 2, 1);
	}
	Function_160(&bVar0);
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

void Function_160(int iParam0) //Position: 0x7642 / 30274
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_162(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_161(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 23.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 60.0f, 1);
	return;
}

void Function_161(int iParam0) //Position: 0x7689 / 30345
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 36.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -725.51f, 64.25f, 3296.49f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.14251f, -2.504373f, 0.0f, 1);
	return;
}

void Function_162(int iParam0) //Position: 0x76E6 / 30438
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 36.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -726.24f, 64.2f, 3296.77f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.170241f, -2.076593f, 0.0f, 1);
	return;
}

var Function_163(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x7743 / 30531
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_201(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "chu_jail", 2, 1);
	}
	Function_164(&bVar0);
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

void Function_164(int iParam0) //Position: 0x77B7 / 30647
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_166(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_165(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 23.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 60.0f, 1);
	return;
}

void Function_165(int iParam0) //Position: 0x77FE / 30718
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 22.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2650.84f, 31.81f, 4253.959f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.042062f, -0.349066f, 0.0f, 1);
	return;
}

void Function_166(int iParam0) //Position: 0x785B / 30811
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 22.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2653.83f, 31.81f, 4253.71f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.037175f, -0.691499f, 0.0f, 1);
	return;
}

var Function_167(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x78B8 / 30904
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_201(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "esc_jail", 2, 1);
	}
	Function_168(&bVar0);
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

void Function_168(int iParam0) //Position: 0x792C / 31020
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_170(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_169(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 23.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 60.0f, 1);
	return;
}

void Function_169(int iParam0) //Position: 0x7973 / 31091
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 40.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4355.88f, 31.166f, 4383.21f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 2.99f, -144.18f, 0.0f, 0);
	return;
}

void Function_170(int iParam0) //Position: 0x79D0 / 31184
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 40.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4354.43f, 31.17534f, 4383.22f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.009774f, 2.701421f, 0.0f, 1);
	return;
}

var Function_171(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x7A2D / 31277
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_201(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "jailsittingmac", 2, 1);
	}
	Function_172(&bVar0);
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

void Function_172(int iParam0) //Position: 0x7AA7 / 31399
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_174(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_173(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 23.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 60.0f, 1);
	return;
}

void Function_173(int iParam0) //Position: 0x7AEE / 31470
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 26.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -819.5601f, 94.95f, 2434.78f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.0090757f, -3.06951f, 0.0f, 1);
	return;
}

void Function_174(int iParam0) //Position: 0x7B4B / 31563
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 26.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -821.32f, 94.95f, 2435.85f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.008552f, -1.999972f, 0.0f, 1);
	return;
}

var Function_175(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x7BA8 / 31656
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_201(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "jailsittingarm", 2, 1);
	}
	Function_176(&bVar0);
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

void Function_176(int iParam0) //Position: 0x7C22 / 31778
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_178(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_177(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 23.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 60.0f, 1);
	return;
}

void Function_177(int iParam0) //Position: 0x7C69 / 31849
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 18.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2082.94f, 16.92f, 2599.576f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.19617f, -2.5864f, 0.0f, 1);
	return;
}

void Function_178(bool bParam0) //Position: 0x7CC6 / 31942
{
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 18.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 0.15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_POSITION(*bParam0, -2084.46f, 16.95f, 2601.42f);
	SET_CAMERASHOT_ORIENTATION(*bParam0, 0.203854f, -1.967684f, 0.0f, 1);
	return;
}

void Function_179(bool bParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, var uParam10, bool bParam11) //Position: 0x7D23 / 32035
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	uParam1 = uParam1;
	if (bParam6)
	{
		UI_PUSH("nCutscenes");
	}
	HUD_CLEAR_HELP();
	UI_DUMP_MESSAGE_QUEUE_TO_NOTES(1);
	HUD_ENABLE(0);
	Function_53();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(Global_34573, "iDrunk", false);
	if (bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_199();
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
			if (Function_10())
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
						TASK_OVERRIDE_SET_POSTURE(bVar1, 0);
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
					TASK_OVERRIDE_SET_POSTURE(bVar1, 0);
				}
			}
			SET_ACTOR_HEALTH(bVar1, GET_ACTOR_MAX_HEALTH(bVar1));
			SET_ACTOR_INVULNERABILITY(bVar1, 1);
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
				Function_103(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_201(), 2, Function_103(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
				DELETE_PROJECTILES_IN_VOLUME(bVar0);
			}
		}
		Function_63(19, 1, 0, 0);
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
	if (uParam10 && !Function_42())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_182()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_182()));
		DECOR_SET_BOOL(Global_34573, "nquitBinos", true);
		UNK_0xE6C1DBD9(0);
		SET_DRAW_ACTOR(Global_34573, 1);
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
	if (Function_181(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_180(0x4000000);
	}
	if (Function_181(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_180(0x8000000);
	}
}

void Function_180(int iParam0) //Position: 0x7FD1 / 32721
{
	int iVar0;
	
	if (Function_40(iParam0, 1) && Function_40(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

bool Function_181(int iParam0) //Position: 0x800A / 32778
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_182() //Position: 0x8026 / 32806
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

void Function_183(var uParam0) //Position: 0x80A5 / 32933
{
	vLocal_105 = { 180.0f, uParam0, 180.0f };
	SET_OBJECT_ORIENTATION(bLocal_40, vLocal_105);
	return;
}

void Function_184() //Position: 0x80C5 / 32965
{
	var uVar0;
	
	if (IS_DOOR_VALID(bLocal_42))
	{
		OPEN_DOOR_FAST(bLocal_42, &uVar0);
	}
	return;
}

void Function_185() //Position: 0x80DA / 32986
{
	vector3 vVar0;
	bool bVar3;
	
	if (iLocal_44 == Global_30640[0])
	{
		vVar0 = { -2088.95f, 17.6f, 2604.89f };
		fLocal_100 = -35.514f;
		fLocal_101 = 65.689f;
	}
	else if (iLocal_44 == Global_30707[1])
	{
		vVar0 = { -719.22f, 63.37f, 3286.4f };
	}
	else if (iLocal_44 == Global_30693[0])
	{
		vVar0 = { -2664.54f, 31.5f, 4255.69f };
		fLocal_100 = 0.0f;
		fLocal_101 = 89.0f;
	}
	else if (iLocal_44 == Global_30668[0])
	{
		vVar0 = { -823.34f, 93.83f, 2425.55f };
		fLocal_100 = -265.0f;
		fLocal_101 = -170.0f;
	}
	else if (iLocal_44 == Global_30717[0])
	{
		vVar0 = { 760.95f, 79.52f, 1235.95f };
		fLocal_100 = 0.0f;
		fLocal_101 = 89.0f;
	}
	bVar3 = CREATE_OBJECT_ITERATOR(GET_AMBIENT_LAYOUT());
	ITERATE_ON_OBJECT_TYPE(bVar3, 27);
	ITERATE_IN_LAYOUT(bVar3, GET_ART_GRINGO_LAYOUT());
	bLocal_42 = FIND_NEAREST_DOOR(&vVar0, 2.0f);
	bLocal_40 = Function_186(StackVal, StackVal, bVar3, vVar0, 0.0f);
	DESTROY_ITERATOR(bVar3);
	return;
}

var Function_186(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x81E2 / 33250
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	
	bVar3 = -1.0f;
	bVar0 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		GET_OBJECT_POSITION(bVar0, &vVar4);
		bVar2 = VDIST(vVar4, vParam1);
		if (bVar2 < fParam4)
		{
			if (bVar3 > 0.0f || bVar2 > bVar3)
			{
				bVar3 = bVar2;
				bVar1 = bVar0;
				PRINTSTRING("Assigning new closestObject ");
				PRINTNL();
			}
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bParam0);
	}
	return bVar1;
}

void Function_187(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x825F / 33375
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_113(Global_6269) };
		}
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, &Var0, iParam5);
	}
	else
	{
		iVar4 = "";
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, iVar4, iParam5);
	}
}

void Function_188(bool bParam0, int iParam1) //Position: 0x82D6 / 33494
{
	if (!Function_181(128))
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

var Function_189(bool bParam0) //Position: 0x8311 / 33553
{
	bool bVar0;
	bool bVar1;
	
	bVar1 = CREATE_OBJECT_ITERATOR(Global_26361.f_16);
	ITERATE_IN_LAYOUT(bVar1, Global_26361.f_16);
	ITERATE_ON_OBJECT_TYPE(bVar1, 8);
	ITERATE_ON_PARTIAL_NAME(bVar1, bParam0);
	bVar0 = START_OBJECT_ITERATOR(bVar1);
	if (IS_OBJECT_VALID(bVar0))
	{
		DESTROY_ITERATOR(bVar1);
		return bVar0;
	}
	DESTROY_ITERATOR(bVar1);
	return "";
}

bool Function_190(bool bParam0) //Position: 0x8357 / 33623
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_194();
	iVar1 = 0;
	if (!Function_57(bParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_193(bParam0[iVar03], 8);
		}
		else if (Function_192())
		{
			iVar1 = 1;
			Function_193(bParam0[iVar03], 8);
		}
		Function_193(bParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_57(bParam0[iVar03], 4))
		{
			if (!Function_57(bParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*bParam0)[iVar03], (Function_57(bParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*bParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*bParam0)[iVar03], 1, (Function_57(bParam0[03], 8) || iVar1));
						break;
					
					case 0x00000005:
						REQUEST_ANIM_SET(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03]), 0);
						break;
					
					case 0x00000001:
						STREAMING_REQUEST_GRINGO((*bParam0)[iVar03]);
						break;
					
					case 0x00000008:
						REQUEST_ACTION_TREE(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03]));
						break;
					
					case 0x0000000A:
						REQUEST_STRING_TABLE(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03]));
						break;
					
					case 0x00000004:
						STREAMING_REQUEST_SCRIPT((*bParam0)[iVar03]);
						break;
					
					case 0x00000006:
						STREAMING_REQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME((*bParam0)[iVar03], 6));
						break;
					
					case 0x0000000C:
						STREAMING_REQUEST_GRINGO_DICTIONARY((*bParam0)[iVar03]);
						break;
					
					default:
						break;
				}
				Function_193(bParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_57(bParam0[iVar03], 4))
		{
			if (!Function_57(bParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*bParam0)[iVar03]))
						{
							Function_193(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*bParam0)[iVar03]))
						{
							Function_193(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000002:
					case 0x00000003:
						if (STREAMING_IS_ACTOR_LOADED((*bParam0)[iVar03], 4294967295))
						{
							Function_193(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_193(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*bParam0)[iVar03]))
						{
							Function_193(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_193(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_193(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*bParam0)[iVar03]))
						{
							Function_193(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*bParam0)[iVar03], 6)))
						{
							Function_193(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*bParam0)[iVar03]))
						{
							Function_193(bParam0[iVar03], 2);
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
	Function_191();
	return 1;
}

void Function_191() //Position: 0x86D2 / 34514
{
	if (!Function_181(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_192() //Position: 0x8712 / 34578
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

void Function_193(var uParam0, int iParam1) //Position: 0x873D / 34621
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_194() //Position: 0x874E / 34638
{
	if (!Function_181(128))
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

int Function_195(bool bParam0) //Position: 0x8790 / 34704
{
	if (!Function_92(bParam0))
	{
		return 1;
	}
	return Function_90(&(Global_29008[bParam0]), 4);
}

void Function_196(vector3 vParam0, var uParam3, char* cParam4, char* cParam5, var uParam6, var uParam7) //Position: 0x87AC / 34732
{
	Global_13112.f_72 = uParam3;
	Global_13112 = { StackVal, StackVal, vParam0 };
	strcpy(&Global_13112 + 24, cParam4, 24);
	strcpy(&Global_13112 + 48, cParam5, 24);
	Global_13112.f_76 = uParam6;
	Global_13112.f_80 = uParam7;
}

void Function_197(int iParam0, bool bParam1) //Position: 0x87E4 / 34788
{
	switch (iParam0)
	{
		case 0x00000000:
			if (bParam1)
			{
				(*&Global_12976 + 104)[0] = 1;
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 26, true);
			}
			else
			{
				(*&Global_12976 + 104)[0] = 0;
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 26, false);
			}
			break;
		
		case 0x00000001:
			if (bParam1)
			{
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 23, true);
				_SET_ACTOR_MAX_AMMO_AMOUNT(Global_34573, 8, 200.0f);
				_SET_ACTOR_MAX_AMMO_AMOUNT(Global_34573, 9, 200.0f);
				(*&Global_12976 + 104)[1] = 1;
			}
			else
			{
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 23, false);
				(*&Global_12976 + 104)[1] = 0;
			}
			break;
		
		case 0x00000002:
			if (bParam1)
			{
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 24, true);
				_SET_ACTOR_MAX_AMMO_AMOUNT(Global_34573, 10, 200.0f);
				(*&Global_12976 + 104)[2] = 1;
			}
			else
			{
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 24, false);
				(*&Global_12976 + 104)[2] = 0;
			}
			break;
		
		case 0x00000004:
			if (bParam1)
			{
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 27, true);
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 28, true);
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 29, false);
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 30, false);
				(*&Global_12976 + 104)[4] = 1;
			}
			else
			{
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 27, false);
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 28, false);
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 29, true);
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 30, true);
				(*&Global_12976 + 104)[4] = 0;
			}
			break;
		
		case 0x00000003:
			if (bParam1)
			{
				(*&Global_12976 + 104)[3] = 1;
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 25, true);
			}
			else
			{
				(*&Global_12976 + 104)[3] = 0;
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 25, false);
			}
			break;
	}
	return;
}

void Function_198(bool bParam0) //Position: 0x8957 / 35159
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (7 - 1))
	{
		ACTOR_DISABLE_WEAPON_RENDER(uParam0, iVar0, 1);
		iVar0++;
	}
	return;
}

bool Function_199() //Position: 0x897C / 35196
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_200() //Position: 0x8991 / 35217
{
	RESET_PROPS_IN_WORLD();
	DESTROY_AMBIENT_ACTORS_IF_POSSIBLE();
	CLEAR_ALL_CORPSES();
	CLEAR_DECALS();
	if (!Function_42())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	DESTROY_IMPAIRED_ACTORS();
	DESTROY_GC_OBJECTS(1, 1);
	CLEAN_CACHE_ENTRIES();
	return;
}

var Function_201() //Position: 0x89B8 / 35256
{
	int iVar0;
	
	return iVar0;
}

var Function_202(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x89C0 / 35264
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_203(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_193(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_203(var uParam0, int iParam1, int iParam2) //Position: 0x89F8 / 35320
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_57(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_193(uParam0[iVar03], 4);
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

var Function_204(var uParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x8ABC / 35516
{
	int iVar0;
	
	uParam2 = uParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_57(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_193(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_193(uParam0[iVar03], 8);
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

var Function_205(int iParam0) //Position: 0x8B8C / 35724
{
	int iVar0;
	bool bVar1;
	
	bVar1 = RAND_INT_RANGE(0, 10000);
	if (iParam0 == Global_30640[0])
	{
		if (bVar1 <= 2500)
		{
			iVar0 = 427;
		}
		else if (bVar1 <= 5000)
		{
			iVar0 = 436;
		}
		else if (bVar1 <= 7500)
		{
			iVar0 = 440;
		}
		else
		{
			iVar0 = 442;
		}
	}
	else if (iParam0 == Global_30668[0])
	{
		if (bVar1 <= 2000)
		{
			iVar0 = 437;
		}
		else if (bVar1 <= 4000)
		{
			iVar0 = 441;
		}
		else if (bVar1 <= 6000)
		{
			iVar0 = 425;
		}
		else if (bVar1 <= 8000)
		{
			iVar0 = 428;
		}
		else
		{
			iVar0 = 429;
		}
	}
	else if (iParam0 == Global_30717[0])
	{
		if (bVar1 <= 2000)
		{
			iVar0 = 184;
		}
		else if (bVar1 <= 4000)
		{
			iVar0 = 185;
		}
		else if (bVar1 <= 6000)
		{
			iVar0 = 186;
		}
		else if (bVar1 <= 8000)
		{
			iVar0 = 187;
		}
		else
		{
			iVar0 = 188;
		}
	}
	else if ((iParam0 != Global_30685[0] || iParam0 != Global_30707[1]) || iParam0 != Global_30693[0])
	{
		if (bVar1 <= 2000)
		{
			iVar0 = 455;
		}
		else if (bVar1 <= 4000)
		{
			iVar0 = 456;
		}
		else if (bVar1 <= 6000)
		{
			iVar0 = 457;
		}
		else if (bVar1 <= 8000)
		{
			iVar0 = 458;
		}
		else if (bVar1 <= 9000)
		{
			iVar0 = 459;
		}
		else
		{
			iVar0 = 460;
		}
	}
	else
	{
		iVar0 = Function_206(Global_30750[2], 0, 0, 0);
	}
	return iVar0;
}

int Function_206(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x8D07 / 36103
{
	return Function_207(uParam0, uParam1, uParam2, 4294967295, uParam3);
}

var Function_207(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x8D1B / 36123
{
	return Function_208(uParam0, uParam1, uParam2, uParam3, uParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_208(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, vector3 vParam6) //Position: 0x8D34 / 36148
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!IS_POPSET_VALID(bParam0))
	{
		LOG_ERROR("Trying to get a random member of an invalid popset");
		return 4294967295;
	}
	if (bParam1)
	{
		Function_214();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, bParam4, iParam5, vParam6);
	if (!Function_213(bVar1))
	{
		if (!Global_30837 && !Global_30838)
		{
			Function_212(bParam0, bParam1, bParam2, bParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_212(bParam0, bParam1, bParam2, bParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && bParam3 != 4294967295)
		{
			while (Function_211(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_213(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_211(bVar0))
				{
					Function_210();
				}
				Function_209(bVar0);
			}
		}
		else if (!bParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != bParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_213(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
		}
	}
	if (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar0))
	{
		if (bParam2 == 0)
		{
			LOG_ERROR("Did not get a matching species, but RANDACTORFILTER_IGNORE was passed in. Did you really mean RANDACTORFILTER_ONLY_SPECIES_SPECIFIED? Update to use RANDACTORFILTER_ONLY_SPECIES_SPECIFIED or RANDACTORFILTER_IGNORE + ANIMALSPECIES_INVALID");
		}
		else
		{
			LOG_ERROR("We asked for a matching species, and did not get one");
		}
	}
	return bVar0;
}

void Function_209(int iParam0) //Position: 0x9027 / 36903
{
	int iVar0;
	
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if ((*&Global_30742 + 8)[iVar0] == iParam0)
		{
			LOG_ERROR("Attempting to insert a duplicate asset into the asset duplication array. Clearly something has gone wrong.");
			return;
		}
		if ((*&Global_30742 + 8)[iVar0] == 4294967295)
		{
			(*&Global_30742 + 8)[iVar0] = iParam0;
			return;
		}
		iVar0++;
	}
	return;
}

void Function_210() //Position: 0x90DB / 37083
{
	int iVar0;
	
	if (Global_3402)
	{
		Global_30742 = GET_THIS_SCRIPT_ID();
		Global_30742.f_4 = GET_CURRENT_GAME_TIME();
	}
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		(*&Global_30742 + 8)[iVar0] = 4294967295;
		iVar0++;
	}
	return;
}

bool Function_211(bool bParam0) //Position: 0x9115 / 37141
{
	int iVar0;
	
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if ((*&Global_30742 + 8)[iVar0] == bParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_212(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x9142 / 37186
{
	int iVar0;
	
	PRINTSTRING("NoDupes=");
	if (bParam1)
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTSTRING("  RANDACTOR_FILTER=");
	PRINTINT(bParam2);
	PRINTSTRING("  ANIMALSPECIES=");
	PRINTINT(bParam3);
	PRINTSTRING("  IgnoreStreaming=");
	if (bParam4)
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTSTRING("  PopsetReady");
	if (IS_POPULATION_SET_READY(bParam0, bParam2, bParam3))
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTNL();
	iVar0 = 0;
	while (iVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(bParam0))
	{
		PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(GET_ACTORENUM_IN_POPULATION(bParam0, iVar0)));
		PRINTSTRING("n  Weight=");
		PRINTFLOAT(GET_ACTORENUM_IN_POPULATION_WEIGHT(bParam0, iVar0));
		PRINTSTRING("  Streamed=");
		if (STREAMING_IS_ACTOR_LOADED(GET_ACTORENUM_IN_POPULATION(bParam0, iVar0), 4294967295))
		{
			PRINTSTRING("TRUE");
		}
		else
		{
			PRINTSTRING("FALSE");
		}
		PRINTNL();
		iVar0++;
	}
}

bool Function_213(bool bParam0) //Position: 0x9293 / 37523
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_214() //Position: 0x92AA / 37546
{
	int iVar0;
	
	if (Global_3402)
	{
		if (StackVal || !Global_30742 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_210();
		}
	}
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if ((*&Global_30742 + 8)[iVar0] == 4294967295)
		{
			return;
		}
		iVar0++;
	}
	Function_210();
	return;
}

var Function_215(int iParam0, int iParam1) //Position: 0x92F5 / 37621
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_216() //Position: 0x9307 / 37639
{
	if (((iLocal_44 != Global_30640[0] || iLocal_44 != Global_30693[0]) || iLocal_44 != Global_30717[0]) || iLocal_44 != Global_30668[0])
	{
		bLocal_89 = true;
	}
	else
	{
		bLocal_89 = false;
	}
	return;
}

