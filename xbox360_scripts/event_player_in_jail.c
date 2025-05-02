//Decompiled with MagicRDR v1.0
//Function Count : 211
//Statics Count : 119
//Natives Count : 310
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
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	bool bLocal_11 = false;
	bool bLocal_12 = false;
	vector3 vLocal_13 = { 0.0f, 0.0f, 0.0f };
	struct<5> Local_16 = { 0, 0, 0, 0, 0 } ;
	var uLocal_21 = 0;
	vector3 vLocal_22 = { 0.0f, 0.0f, 0.0f };
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	bool bLocal_34 = false;
	bool bLocal_35 = false;
	bool bLocal_36 = false;
	bool bLocal_37 = false;
	bool bLocal_38 = false;
	bool bLocal_39 = false;
	bool bLocal_40 = false;
	bool bLocal_41 = false;
	bool bLocal_42 = false;
	int iLocal_43 = 0;
	bool bLocal_44 = false;
	bool bLocal_45 = false;
	bool bLocal_46 = false;
	bool bLocal_47 = false;
	bool bLocal_48 = false;
	bool bLocal_49 = true;
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
	int iLocal_68 = 2;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	bool bLocal_75 = false;
	bool bLocal_76 = false;
	bool bLocal_77 = false;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	bool bLocal_81 = false;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	bool bLocal_85 = false;
	bool bLocal_86 = false;
	int iLocal_87 = 0;
	bool bLocal_88 = false;
	bool bLocal_89 = false;
	int iLocal_90 = 0;
	bool bLocal_91 = false;
	int iLocal_92 = 0;
	bool bLocal_93 = false;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	float fLocal_96 = 0.0f;
	float fLocal_97 = 0.0f;
	float fLocal_98 = 0.0f;
	float fLocal_99 = 0.0f;
	float fLocal_100 = 0.0f;
	float fLocal_101 = 0.0f;
	float fLocal_102 = 0.0f;
	float fLocal_103 = 0.0f;
	vector3 vLocal_104 = { 0.0f, 0.0f, 0.0f };
	int iLocal_107 = 0;
	bool bLocal_108 = false;
	float fLocal_109 = 0.0f;
	int iLocal_110 = 0;
	struct<25> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	
	iLocal_9 = 0;
	iLocal_110 = 0;
	iLocal_10 = 0;
	iLocal_43 = ScriptParam_0;
	Global_3407 = 1;
	Function_210();
	iVar0 = 0;
	iLocal_94 = GET_DAY(false);
	iLocal_95 = GET_HOUR(false);
	bLocal_12 = Function_209(2, CEIL((IntToFloat(ScriptParam_0.f_20) / 250.0f)));
	bLocal_75 = Function_199(iLocal_43);
	Function_198(&iLocal_68, bLocal_75, 3, 0);
	Function_196(&iLocal_68, "revolver_cattleman01x", 0, 0);
	bLocal_76 = RAND_INT_RANGE(false, 2);
	bLocal_76 = false;
	bLocal_81 = ScriptParam_0.f_24;
	if (bLocal_81)
	{
		if (!Global_25965[0])
		{
			(*&Global_26401 + 16)[Global_26401.f_2216] = 0;
			bLocal_81 = false;
		}
	}
	bLocal_11 = 250;
	bLocal_42 = CREATE_LAYOUT(Function_195());
	while (!IS_EXITFLAG_SET())
	{
		switch (iLocal_10)
		{
			case 0x00000000:
				if (HUD_IS_FADED())
				{
					iLocal_10 = 1;
					Function_194();
					HUD_FADE_OUT(0.0f, 1f, 1);
					UNK_0xEF270DC9();
					MEMORY_EVERYBODY_FORGET_ABOUT_EVERYTHING();
					Function_192(Function_193());
					DEEQUIP_ACCESSORY(Global_34573, 0);
					if (UNK_0xE094DB31(Global_34573, 1))
					{
						DEEQUIP_ACCESSORY(Global_34573, 1);
						bLocal_93 = true;
					}
					Function_191(4, 0);
					Function_191(3, 0);
					UI_EXIT("WantedMeter");
					UI_EXIT("BountyAmount");
					_HUD_WANTED_METER(0);
					_HUD_WANTED_CRIME(0.0f);
					Global_27761 = 0.0f;
					UNK_0x598815BD(Global_27761);
					Function_190(StackVal, StackVal, *(&ScriptParam_0 + 4), ScriptParam_0, "", "", 0, 0);
					Global_3391 = 1;
					Function_196(&bLocal_49, "sit_bed", 5, 0);
					Function_196(&bLocal_49, "custom/sit_bed", 8, 0);
					Function_196(&bLocal_49, "Marston_Prison_idle_01", 5, 0);
					Function_196(&bLocal_49, "custom/Marston_Prison_idle_01", 8, 0);
					Function_196(&bLocal_49, "jail_release", 5, 0);
					Function_196(&bLocal_49, "custom/jail_release", 8, 0);
					bLocal_11 = 500;
				}
				break;
			
			case 0x00000001:
				if ((Function_189(ScriptParam_0) && STREAMING_IS_WORLD_LOADED()) && Function_184(&bLocal_49))
				{
					Global_3391 = 0;
					bLocal_34 = Function_183("jail_sit");
					bLocal_35 = Function_183("jail_leave_start");
					bLocal_36 = Function_183("jail_leave_end");
					bLocal_37 = Function_183("cell_leave_end");
					bLocal_38 = Function_183("cell_leave_cop");
					if ((IS_OBJECT_VALID(bLocal_34) && IS_OBJECT_VALID(bLocal_35)) && IS_OBJECT_VALID(bLocal_36))
					{
						GET_OBJECT_POSITION(bLocal_34, &vLocal_13);
						GET_OBJECT_ORIENTATION(bLocal_34, &Local_16);
						GET_OBJECT_POSITION(bLocal_35, &vLocal_19);
						GET_OBJECT_POSITION(bLocal_36, &vLocal_22);
						GET_OBJECT_POSITION(bLocal_37, &uLocal_25);
						GET_OBJECT_POSITION(bLocal_38, &uLocal_28);
						GET_OBJECT_ORIENTATION(bLocal_38, &uLocal_31);
						bLocal_46 = CREATE_VOLUME_IN_LAYOUT(bLocal_42, Function_195(), 3, vLocal_13, 0.0f, 0.0f, 0.0f, 10.0f, 10.0f, 10.0f);
						bLocal_47 = CREATE_VOLUME_IN_LAYOUT(bLocal_42, Function_195(), 3, vLocal_19, 0.0f, 0.0f, 0.0f, 5.0f, 10.0f, 5.0f);
						ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_46);
						ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_46);
						ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_47);
						ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_47);
						CLEAR_AMBIENT_OBJECTS_VOLUME(bLocal_46, 15);
						CLEAR_AMBIENT_OBJECTS_VOLUME(bLocal_46, 24);
						CLEAR_AMBIENT_OBJECTS_VOLUME(bLocal_47, 15);
						CLEAR_AMBIENT_OBJECTS_VOLUME(bLocal_47, 24);
						if (iLocal_43 == Global_30640[0])
						{
							vLocal_13.f_8 = (vLocal_13.z + 0,56f);
						}
						else if (iLocal_43 == Global_30668[0])
						{
							vLocal_13.x = (vLocal_13.x - 0,15f);
							vLocal_13.f_8 = (vLocal_13.z + 0,3f);
						}
						else if (iLocal_43 == Global_30685[0])
						{
							vLocal_13.x = (vLocal_13.x - 0,11f);
						}
						else if (iLocal_43 == Global_30717[0])
						{
							vLocal_22.x = (vLocal_22.x - 1,75f);
						}
						iLocal_10 = 2;
					}
					else
					{
						if (!IS_OBJECT_VALID(bLocal_34))
						{
							LOG_ERROR("Jail Object for current town not FOUND! ARGGGGH");
						}
						if (!IS_OBJECT_VALID(bLocal_35))
						{
							LOG_ERROR("Start Leave Jail Object for current town not FOUND! ARGGGGH");
						}
						if (!IS_OBJECT_VALID(bLocal_36))
						{
							LOG_ERROR("End Leave Jail Object for current town not FOUND! ARGGGGH");
						}
					}
				}
				bLocal_11 = 100;
				break;
			
			case 0x00000002:
				if (!iLocal_87)
				{
					if (Function_184(&iLocal_68))
					{
						iLocal_87 = 1;
					}
				}
				bLocal_11 = Function_97(&iVar0);
				break;
			
			case 0x00000003:
				bLocal_11 = false;
				iLocal_10 = 4;
				break;
			
			case 0x00000004:
				if (bLocal_81)
				{
					if (Function_59() || !Global_25965[0])
					{
						TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
					}
				}
				else
				{
					TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				}
				bLocal_11 = false;
				break;
			
			default:
				break;
		}
		WAIT(bLocal_11);
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
		if (!Function_58(StackVal, StackVal, vLocal_22))
		{
			TELEPORT_ACTOR(Function_193(), &vLocal_22, 1, 1, 0);
		}
	}
	Function_57(225, bLocal_12, 0, 0);
	Function_55(Function_193());
	Function_53(1);
	if (!IS_GAME_RESETTING())
	{
		Function_52(Function_193());
	}
	SET_ACTOR_TO_SEAT(Function_193(), 1.0f);
	Global_3407 = 0;
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Function_48(&bLocal_49);
	Function_48(&iLocal_68);
	if (IS_OBJECT_VALID(bLocal_44))
	{
		DESTROY_OBJECT(bLocal_44);
	}
	if (IS_OBJECT_VALID(bLocal_45))
	{
		DESTROY_OBJECT(bLocal_45);
	}
	if (bLocal_108)
	{
		UI_POP("CutsceneWithMessages");
		Function_45(1, 0, 1, 1, 1, 1, 0, 1, 1, 1);
	}
	if (bLocal_88)
	{
		if (IS_ACTOR_VALID(bLocal_48))
		{
			TASK_STAND_STILL(bLocal_48, 10.0f, 0, 0);
		}
	}
	if (IS_OBJECT_VALID(bLocal_40))
	{
		DESTROY_OBJECT(bLocal_40);
	}
	if (IS_ACTOR_VALID(bLocal_48))
	{
		if (bLocal_91)
		{
			RELEASE_ACTOR(bLocal_48);
		}
	}
	Function_44();
	if (!ScriptParam_0.f_24)
	{
		Function_43(8388608);
	}
	Function_42();
	Function_39();
	Global_3406 = 1;
	Function_38(0x20000000);
	DESTROY_VOLUME(bLocal_46);
	DESTROY_OBJECT(bLocal_47);
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
	Function_11();
	Function_11();
	if (!Function_10())
	{
		Function_8();
		Function_7();
		Function_6();
		Function_5();
	}
	Function_4();
	return;
}

void Function_4() //Position: 0x6C6 / 1734
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

void Function_5() //Position: 0x7CC / 1996
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

void Function_6() //Position: 0x7FF / 2047
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

void Function_7() //Position: 0x98D / 2445
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

void Function_8() //Position: 0xB41 / 2881
{
	Function_9(&Global_28260, 1, 0);
	return;
}

void Function_9(int iParam0, bool bParam1, var uParam2) //Position: 0xB4F / 2895
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
	
	bVar0 = Function_193();
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

bool Function_10() //Position: 0xD40 / 3392
{
	return NET_IS_MANAGER_INITIALIZED();
}

struct<8> Function_11() //Position: 0xD49 / 3401
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
				iVar2 = ((Function_25((50 + iVar4)) + Function_25((183 + iVar4))) + Function_25((90 + iVar4)));
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

int Function_12(int iParam0, bool bParam1, bool bParam2) //Position: 0xDE4 / 3556
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

void Function_13(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x107F / 4223
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
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_14(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_195(), &Var9);
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

var Function_14(int iParam0) //Position: 0x16AC / 5804
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_15(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x16BD / 5821
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

struct<32> Function_16(char* cParam0, char* cParam1) //Position: 0x17B2 / 6066
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_17(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x17CB / 6091
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_18(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_209(Function_18(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

int Function_18(int iParam0, bool bParam1) //Position: 0x1830 / 6192
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_19(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1842 / 6210
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

int Function_20(int iParam0) //Position: 0x1972 / 6514
{
	return Global_35278[iParam020].f_48;
}

float Function_21(int iParam0) //Position: 0x1981 / 6529
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_22(int iParam0) //Position: 0x19BA / 6586
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_23(int iParam0) //Position: 0x19F7 / 6647
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

int Function_24(int iParam0, bool bParam1, bool bParam2) //Position: 0x1B91 / 7057
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

int Function_25(bool bParam0) //Position: 0x1DAB / 7595
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_26() //Position: 0x1DEC / 7660
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

struct<8> Function_27() //Position: 0x1E75 / 7797
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

struct<8> Function_28() //Position: 0x1F0C / 7948
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

void Function_29() //Position: 0x1F8B / 8075
{
	Function_30(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_12(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_30(int iParam0, bool bParam1, int iParam2) //Position: 0x1FB1 / 8113
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

void Function_31() //Position: 0x21BB / 8635
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	Function_32(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
	vVar0 = { StackVal, StackVal, Function_32(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	if (Function_58(StackVal, StackVal, vVar0))
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

vector3 Function_32(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x225C / 8796
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
			*uParam0 = 89,88f;
			return -2158,348f, 19,944f, 2597,452f;
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
		return -2833,843f, 50,332f, 2418,003f;
	}
	Function_33();
	return StackVal, StackVal, Function_33();
}

vector3 Function_33() //Position: 0x2343 / 9027
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_34(var uParam0, int iParam1) //Position: 0x234C / 9036
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_35(int iParam0) //Position: 0x235B / 9051
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_36(bool bParam0, bool bParam1) //Position: 0x2371 / 9073
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
		fVar2 = Function_37(StackVal, StackVal, Global_34574, -2833,843f, 50,332f, 2418,003f);
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

float Function_37(vector3 vParam0, vector3 vParam3) //Position: 0x2438 / 9272
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_38(var uParam0) //Position: 0x2455 / 9301
{
	Global_26316.f_56 = (Global_26316.f_56 || uParam0);
	return;
}

void Function_39() //Position: 0x2468 / 9320
{
	int iVar0;
	
	Global_26960 = Function_40(StackVal);
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

int Function_40(int iParam0) //Position: 0x24B6 / 9398
{
	if (!Function_41(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_41(int iParam0) //Position: 0x24CE / 9422
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_42() //Position: 0x24E3 / 9443
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

void Function_43(var uParam0) //Position: 0x2510 / 9488
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && uParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_44() //Position: 0x252D / 9517
{
	if (IS_DOOR_VALID(bLocal_41))
	{
		CLOSE_DOOR_FAST(bLocal_41);
	}
	return;
}

void Function_45(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9) //Position: 0x2540 / 9536
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
		bVar0 = Function_193();
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
			SET_ACTOR_INVULNERABILITY(bVar0, false);
			if (Global_34108[0])
			{
				Global_34108[0] = 0;
				UI_CHEAT_SET_VALUE(0, 0);
			}
		}
		Function_57(21, 1, 0, 0);
	}
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam7)
	{
		Function_47();
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
	Function_46(iParam9);
}

void Function_46(bool bParam0) //Position: 0x2630 / 9776
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

void Function_47() //Position: 0x26D5 / 9941
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_48(int iParam0) //Position: 0x26EA / 9962
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_49(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_49(var uParam0, int iParam1) //Position: 0x2710 / 10000
{
	if (Function_51(uParam0[iParam13], 4))
	{
		if (Function_51(uParam0[iParam13], 1))
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
			Function_50(uParam0[iParam13], 1);
			Function_50(uParam0[iParam13], 2);
			Function_50(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_50(var uParam0, int iParam1) //Position: 0x283E / 10302
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_51(var uParam0, int iParam1) //Position: 0x2858 / 10328
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_52(bool bParam0) //Position: 0x2875 / 10357
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

void Function_53(bool bParam0) //Position: 0x289A / 10394
{
	if (iLocal_43 == Global_30668[0])
	{
		Function_54(StackVal, bParam0);
	}
	else if (iLocal_43 == Global_30685[0])
	{
		Function_54(StackVal, bParam0);
		Function_54(StackVal, bParam0);
	}
	else if (iLocal_43 == Global_30707[1])
	{
		Function_54(StackVal, bParam0);
	}
	return;
}

void Function_54(bool bParam0, bool bParam1) //Position: 0x28FE / 10494
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

void Function_55(bool bParam0) //Position: 0x2945 / 10565
{
	struct<4> Var0;
	
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	strcpy(&Var0, "tutorial", 16);
	Function_56(&Var0, 1);
	if (DECOR_CHECK_EXIST(bParam0, &Var0))
	{
		DECOR_REMOVE(bParam0, &Var0);
	}
	strcpy(&Var0, "tutorial", 16);
	Function_56(&Var0, 2);
	if (DECOR_CHECK_EXIST(bParam0, &Var0))
	{
		DECOR_REMOVE(bParam0, &Var0);
	}
	strcpy(&Var0, "tutorial", 16);
	Function_56(&Var0, 3);
	if (DECOR_CHECK_EXIST(bParam0, &Var0))
	{
		DECOR_REMOVE(bParam0, &Var0);
	}
	strcpy(&Var0, "tutorial", 16);
	Function_56(&Var0, 4);
	if (DECOR_CHECK_EXIST(bParam0, &Var0))
	{
		DECOR_REMOVE(bParam0, &Var0);
	}
	return;
}

void Function_56(char* cParam0, int iParam1) //Position: 0x29FD / 10749
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

int Function_57(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x2A34 / 10804
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

bool Function_58(vector3 vParam0) //Position: 0x2C54 / 11348
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

int Function_59() //Position: 0x2C6C / 11372
{
	int iVar0;
	
	Function_71(&Global_26303, Function_95(), 4294967294, 0, 0, 1);
	if (Global_26303.f_24 == 4294967295)
	{
		return 0;
	}
	*(&iVar0 + 20) = 1;
	Function_33();
	Function_33();
	if (Function_66(StackVal, StackVal, StackVal, StackVal, 128, 1, GET_ASSET_ID("$/content/Ambient/PointOfInterest/event_bountyhunter", 4), Function_33(), Function_33(), 0, 0, 0, Global_26303.f_24, 0, 0, 0, &iVar0, 1, 1, 0x40a00000, 4294967295, 0, 0))
	{
		Function_65(1);
		Function_60(Global_26401.f_2216, 0);
	}
	else
	{
		LOG_ERROR("Problem setting bounty hunter beat from jail");
		return 0;
	}
	return 1;
}

void Function_60(int iParam0, bool bParam1) //Position: 0x2D3D / 11581
{
	bool bVar0;
	
	if (bParam1)
	{
		if (IS_EARLIER_THAN((*&Global_26316 + 88)[iParam0], false))
		{
			bVar0 = RAND_INT_RANGE(60, 180);
		}
		else
		{
			return;
		}
	}
	bVar0 = RAND_INT_RANGE(1800, 2400);
	if (Function_64() > 3)
	{
		bVar0 *= 2;
	}
	if (Function_10() && !bParam1)
	{
		Function_62(iParam0, 0, 0, 300, 0);
	}
	else
	{
		Function_62(iParam0, 0, 0, Function_61(bVar0), 0);
	}
	return;
}

bool Function_61(int iParam0) //Position: 0x2DA4 / 11684
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_62(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x2DBA / 11706
{
	bool bVar0;
	
	bVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&bVar0, iParam1, iParam2, bParam3, iParam4);
	if (IS_EARLIER_THAN((*&Global_26316 + 88)[iParam0], bVar0) || Function_63((*&Global_26316 + 88)[iParam0]))
	{
		(*&Global_26316 + 88)[iParam0] = bVar0;
	}
}

var Function_63(bool bParam0) //Position: 0x2E00 / 11776
{
	return (((GET_DAY(bParam0) != 0 && GET_HOUR(bParam0) != 0) && GET_MINUTE(bParam0) != 0) && GET_SECOND(bParam0) != 1);
}

int Function_64() //Position: 0x2E25 / 11813
{
	return Global_12976.f_156;
}

void Function_65(bool bParam0) //Position: 0x2E30 / 11824
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

bool Function_66(int iParam0, var uParam1, var uParam2, vector3 vParam3, vector3 vParam6, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22) //Position: 0x2E51 / 11857
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
			if (Function_70(&(Global_25267[iVar058]), 4))
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
					Function_69(uParam16, &Global_25267[iVar058] + 92);
					Global_25267[iVar058].f_92 = uParam1;
					Function_68(&(Global_25267[iVar058]), 1);
					Function_67(&(Global_25267[iVar058]), 4);
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_67(var uParam0, int iParam1) //Position: 0x2F93 / 12179
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

void Function_68(var uParam0, int iParam1) //Position: 0x2FAD / 12205
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_69(int iParam0, int iParam1) //Position: 0x2FBE / 12222
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

bool Function_70(int iParam0, bool bParam1) //Position: 0x312A / 12586
{
	int iVar0;
	
	iVar0 = (StackVal && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_71(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x3147 / 12615
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4[45];
	int iVar50[45];
	struct<33> Var96;
	
	iVar0 = 0;
	if (Function_93())
	{
		return 0;
	}
	uParam0->f_16 = Function_92(iParam1);
	if (iParam3 == 0)
	{
		iParam3 = 0;
	}
	if (iParam1 == 4294967295)
	{
		iParam1 = Function_95();
	}
	if (iParam4 > 0 || iParam4 < 8)
	{
		iParam4 = 0;
	}
	Global_26303.f_12 = iParam1;
	iVar1 = 0;
	while (iVar1 < (45 - 1))
	{
		if (Function_91(&Var96, iVar1) == 1)
		{
			if (Function_89(Var96.f_24) == Global_30621[Global_29004])
			{
				if (Var96.f_32 == iParam3)
				{
					if (((iParam1 != 4294967295 || iParam1 >= Var96.f_12) || (iParam1 != 0 && Var96.f_12 != 3)) || (iParam1 != 0 && Var96.f_12 != 4))
					{
						if (iParam4 != 0 || iParam4 != Function_88(Var96.f_20))
						{
							iVar4[iVar2] = iVar1;
							iVar2++;
							if (iParam5 == 1)
							{
								if (!Function_87(iVar1))
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
		if (Function_91(uParam0, iVar1))
		{
			PRINTSTRING("BOUNTYHUNTER_FILL_DATA_BY_DIFFICULTY found actor");
			PRINTSTRING("With ActorEnum: ");
			PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(uParam0->f_20));
			PRINTNL();
			uParam0->f_24 = Function_72(uParam0, iParam4, 80, 20000, uParam0->f_12);
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

var Function_72(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x33B1 / 13233
{
	var uVar0;
	var uVar1;
	
	uVar0 = uParam0->f_24;
	uParam3 = uParam3;
	uParam2 = uParam2;
	if (StackVal || uParam0->f_24 != 4294967295 != 1)
	{
		uVar1 = Function_73(uVar0, 80.0f, 20000.0f, uParam1, 1, uParam4);
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

var Function_73(int iParam0, float fParam1, float fParam2, int iParam3, int iParam4, int iParam5) //Position: 0x343C / 13372
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
	bVar303 = 1,001638E+07.0f;
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
	if (!Function_86(iParam0))
	{
		iParam0 = Global_29005;
	}
	iVar295 = Function_89(iParam0);
	PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - Checking Regions for a bountyhunter landmark: ");
	PRINTNL();
	GET_POSITION(GET_PLAYER_ACTOR(0), &vVar299);
	iVar598 = 0;
	while (iVar598 < 145)
	{
		Function_85(StackVal);
		vVar296 = { StackVal, StackVal, Function_85(StackVal) };
		bVar302 = VDIST(vVar299, vVar296);
		if (iParam3 == 0)
		{
			iParam3 = 0;
		}
		if (((StackVal && !(IS_VOLUME_VALID(StackVal) && (iVar295 != Function_89(Global_29155[iVar59810]) || iParam0 != 4294967295)) != 1) && Function_84(&(Global_29008[iVar598]), 8192)) && iVar598 == 0)
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
				if (Function_77(Function_79(iVar598, 0, 2)) == 0)
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
		Function_76(&iVar1, &bVar304, bVar601);
		Function_76(&iVar148, &bVar451, bVar602);
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
		if (Function_86(iVar0))
		{
			PRINTSTRING("Randomly picked NOT FINISHED Bounty Hunter location ");
		}
		else
		{
			LOG_ERROR("Invalid bountyHunterRegion picked. Using failsafe.");
			iVar0 = Function_75();
			PRINTSTRING("Picked close NOT FINISHED Bounty Hunter location ");
		}
		Var604 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_74(iVar0) };
		PRINTSTRING(&Var604);
		PRINTSTRING(" with a distance of ");
		Function_85(StackVal);
		vVar296 = { StackVal, StackVal, Function_85(StackVal) };
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
		if (Function_86(iVar0))
		{
			PRINTSTRING("Randomly picked FINISHED Bounty Hunter location ");
		}
		else
		{
			LOG_ERROR("Invalid bountyHunterRegion picked. Using failsafe.");
			iVar0 = Function_75();
			PRINTSTRING("Picked close FINISHED Bounty Hunter location ");
		}
		Var604 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_74(iVar0) };
		PRINTSTRING(&Var604);
		PRINTSTRING(" with a distance of ");
		Function_85(StackVal);
		vVar296 = { StackVal, StackVal, Function_85(StackVal) };
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

struct<32> Function_74(int iParam0) //Position: 0x3AE5 / 15077
{
	char* cVar0[32];
	
	strcpy(&cVar0, "INVALID REGION", 32);
	if (!Function_86(iParam0))
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

int Function_75() //Position: 0x3BA2 / 15266
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

void Function_76(int iParam0, bool bParam1, int iParam2) //Position: 0x3BD0 / 15312
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

int Function_77(int iParam0) //Position: 0x3C5E / 15454
{
	if (!Function_78(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_12;
}

bool Function_78(int iParam0) //Position: 0x3C78 / 15480
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_79(bool bParam0, bool bParam1, bool bParam2) //Position: 0x3C8F / 15503
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_83(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_80(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_80(bParam0, bParam1, bParam2, 4294967295);
}

int Function_80(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x3CED / 15597
{
	var uVar0;
	
	if (!Function_82(bParam2))
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
	uVar0 = Function_83(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_81(uVar0);
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

int Function_81(int iParam0) //Position: 0x3E42 / 15938
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

bool Function_82(int iParam0) //Position: 0x3E80 / 16000
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_83(int iParam0, int iParam1, int iParam2) //Position: 0x3E95 / 16021
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

int Function_84(var uParam0, int iParam1) //Position: 0x3EB5 / 16053
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

vector3 Function_85(bool bParam0) //Position: 0x3ED1 / 16081
{
	vector3 vVar0;
	
	GET_VOLUME_CENTER(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

bool Function_86(int iParam0) //Position: 0x3EE2 / 16098
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

bool Function_87(bool bParam0) //Position: 0x3EF8 / 16120
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

int Function_88(bool bParam0) //Position: 0x3F4A / 16202
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

int Function_89(int iParam0) //Position: 0x3FF9 / 16377
{
	return Function_90(iParam0);
}

int Function_90(int iParam0) //Position: 0x4006 / 16390
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_86(iParam0))
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

bool Function_91(var uParam0, int iParam1) //Position: 0x405E / 16478
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

var Function_92(int iParam0) //Position: 0x47D1 / 18385
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

bool Function_93() //Position: 0x489F / 18591
{
	return Function_94(StackVal, 1);
}

int Function_94(var uParam0, bool bParam1) //Position: 0x48AE / 18606
{
	return (uParam0 && bParam1) == 0;
}

int Function_95() //Position: 0x48BB / 18619
{
	int iVar0;
	
	iVar0 = Function_96(0);
	return iVar0;
}

var Function_96(int iParam0) //Position: 0x48C9 / 18633
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

int Function_97(int iParam0) //Position: 0x494D / 18765
{
	int iVar0;
	int iVar1;
	
	iVar0 = 250;
	switch (*iParam0)
	{
		case 0x00000000:
			Function_182("UPDATE_JAIL_CUTSCENE: JAIL_INIT_JAIL", 11);
			Function_181("law_submit_cutscene", 5.0f, 0, 2, 1, 0);
			*iParam0 = 1;
			if (bLocal_88)
			{
				Function_179();
				Function_178();
				if (((iLocal_43 != Global_30640[0] || iLocal_43 != Global_30693[0]) || iLocal_43 != Global_30668[0]) || iLocal_43 != Global_30717[0])
				{
					Function_177(fLocal_100);
				}
			}
			else if (iLocal_43 == Global_30707[1])
			{
				Function_179();
				Function_178();
			}
			TELEPORT_ACTOR(Function_193(), &vLocal_13, 1, 1, 0);
			Function_53(0);
			iVar0 = 250;
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && Function_184(&bLocal_49))
			{
				Function_173(1, 0, 0, 0, 1, 1, 1, 0, 1, 1, 1, 1);
				UI_PUSH("CutsceneWithMessages");
				bLocal_108 = true;
				if (iLocal_43 == Global_30640[0])
				{
					bLocal_44 = Function_169(bLocal_42, 0, 1, 0, 0);
				}
				else if (iLocal_43 == Global_30668[0])
				{
					bLocal_44 = Function_165(bLocal_42, 0, 1, 0, 0);
				}
				else if (iLocal_43 == Global_30685[0])
				{
					bLocal_44 = Function_161(bLocal_42, 0, 1, 0, 0);
				}
				else if (iLocal_43 == Global_30693[0])
				{
					bLocal_44 = Function_157(bLocal_42, 0, 1, 0, 0);
				}
				else if (iLocal_43 == Global_30707[1])
				{
					bLocal_44 = Function_153(bLocal_42, 0, 1, 0, 0);
				}
				else if (iLocal_43 == Global_30717[0])
				{
					bLocal_44 = Function_149(bLocal_42, 0, 1, 0, 0);
				}
				SET_ACTOR_HEADING(StackVal, Function_193(), 1);
				*iParam0 = 2;
				SET_ACTOR_TO_SEAT(Function_193(), 0.0f);
				switch (bLocal_76)
				{
					case 0x00000000:
						SET_ANIM_SET_FOR_ACTOR(Function_193(), "sit_bed", 0);
						bLocal_77 = "sit_bed/idle";
						break;
					
					case 0x00000001:
						SET_ANIM_SET_FOR_ACTOR(Function_193(), "Marston_Prison_idle_01", 0);
						bLocal_77 = "Marston_Prison_idle_01/Idle01";
						break;
					
					case 0x00000002:
						SET_ANIM_SET_FOR_ACTOR(Function_193(), "Marston_Prison_idle_01", 0);
						bLocal_77 = "Marston_Prison_idle_01/Idle02";
						break;
				}
				SET_ACTION_NODE_FOR_ACTOR(Function_193(), bLocal_77);
				iVar0 = 0;
			}
			break;
		
		case 0x00000002:
			Function_182("UPDATE_JAIL_CUTSCENE: JAIL_RUN_JAIL", 11);
			PLAY_CUTSCENEOBJECT(bLocal_44, false, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
			TASK_STAND_STILL(Function_193(), -1.0f, 0, 0);
			Function_148(&uLocal_78);
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
			if (!iLocal_107)
			{
				STREAMING_RELEASE_MAIN_POI();
				iLocal_107 = 1;
			}
			if (!HUD_IS_FADED())
			{
				Function_144();
			}
			if (VDIST(Global_34574, vLocal_13) < 5.0f)
			{
				LOG_ERROR("Why is player not at the jail??");
			}
			else if (VDIST(Global_34574, vLocal_13) < 1.0f)
			{
			}
			if (!bLocal_86)
			{
				if ((IS_BUTTON_PRESSED(GET_PLAYER_PADINDEX(Function_193()), 6, 1, 0) && Function_140(&uLocal_78, 2.0f)) && *iParam0 == 15)
				{
					bLocal_86 = true;
					HUD_FADE_OUT(1.0f, 1f, 1);
				}
			}
			if (!IS_ACTION_NODE_PLAYING(Global_34573, bLocal_77) || (bLocal_86 && HUD_IS_FADED()))
			{
				if (!IS_ACTION_NODE_PLAYING(Global_34573, "sit_bed/released_from_prison"))
				{
					RESET_ANIM_SET_FOR_ACTOR(Function_193(), 0);
					SET_ANIM_SET_FOR_ACTOR(Function_193(), "sit_bed", 0);
					SET_ACTION_NODE_FOR_ACTOR(Function_193(), "sit_bed/released_from_prison");
				}
				if (bLocal_86)
				{
					if (!IS_GAME_RESETTING())
					{
						HUD_FADE_IN_NOW(1.0f, 1065353216);
					}
				}
				SET_TIME_ACCELERATION(Global_63398);
				Global_3409 = 0;
				Function_182("UPDATE_JAIL_CUTSCENE: JAIL_CLEANUP_JAIL", 11);
				Function_138(&uLocal_78);
				DESTROY_OBJECT(bLocal_44);
				DESTROY_OBJECT(bLocal_45);
				if (iLocal_43 == Global_30640[0])
				{
					bLocal_45 = Function_133(bLocal_42, 0, 0, 0, 0);
				}
				else if (iLocal_43 == Global_30668[0])
				{
					bLocal_45 = Function_128(bLocal_42, 0, 0, 0, 0);
				}
				else if (iLocal_43 == Global_30685[0])
				{
					bLocal_45 = Function_123(bLocal_42, 0, 1, 0, 0);
				}
				else if (iLocal_43 == Global_30693[0])
				{
					bLocal_45 = Function_118(bLocal_42, 0, 1, 0, 0);
				}
				else if (iLocal_43 == Global_30707[1])
				{
					bLocal_45 = Function_113(bLocal_42, 0, 1, 0, 0);
				}
				else if (iLocal_43 == Global_30717[0])
				{
					bLocal_45 = Function_108(bLocal_42, 0, 1, 0, 0);
				}
				if (bLocal_81)
				{
					Function_107("community_service_1", 0x41200000, 1, 0, 2, 1, 0);
				}
				*iParam0 = 15;
				iVar0 = 0;
			}
			iVar0 = 0;
			break;
		
		case 0x0000000F:
			if (!iLocal_82)
			{
				if (!iLocal_83)
				{
					if (Function_140(&uLocal_78, 2,5f))
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(0,5f, 1f, 1);
						}
						iLocal_83 = 1;
					}
				}
				else if (HUD_IS_FADED() && !IS_ACTION_NODE_PLAYING(Global_34573, "sit_bed/released_from_prison"))
				{
					iLocal_82 = 1;
				}
			}
			else if (!iLocal_84)
			{
				CLEAR_AMBIENT_OBJECTS_SPHERE(vLocal_22, 15.0f, 15);
				Function_102();
				if (!IS_GAME_RESETTING())
				{
					HUD_FADE_IN_NOW(0,5f, 1065353216);
				}
				SET_DAY((iLocal_94 + bLocal_12));
				SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(10, false, false));
				iVar1 = (iLocal_95 - 10);
				Function_100((bLocal_12 * 24 - iVar1));
				RESET_ANIM_SET_FOR_ACTOR(Global_34573, 0);
				if (bLocal_88)
				{
					if (iLocal_43 == Global_30640[0])
					{
						vLocal_19 = { -2086,76f, 16,96f, 2603,85f };
					}
					else if (iLocal_43 == Global_30693[0])
					{
						vLocal_19 = { -2661,58f, 31,39f, 4255,59f };
					}
					else if (iLocal_43 == Global_30668[0])
					{
						vLocal_19 = { -823,85f, 93,78f, 2428,42f };
					}
					else if (iLocal_43 == Global_30717[0])
					{
						vLocal_19 = { 763,83f, 79,45f, 1235,2f };
					}
					if (IS_ACTOR_VALID(bLocal_48))
					{
						if (iLocal_43 == Global_30640[0])
						{
							TELEPORT_ACTOR_WITH_HEADING(bLocal_48, -2085,44f, 16,96f, 2603,18f, 116,28f, 1, true, 1);
						}
						else if (iLocal_43 == Global_30717[0])
						{
							TELEPORT_ACTOR_WITH_HEADING(bLocal_48, 764,55f, 79,45f, 1235,2f, 90.0f, 1, true, 1);
						}
						ACTOR_RESET_ANIMS(bLocal_48, 1);
						RESET_ANIM_SET_FOR_ACTOR(bLocal_48, 0);
						TASK_STAND_STILL(bLocal_48, -1.0f, 0, 0);
						if (iLocal_43 == Global_30717[0])
						{
							SET_ACTOR_HEADING(bLocal_48, 90.0f, 1);
						}
						else if (iLocal_43 == Global_30640[0])
						{
							SET_ACTOR_HEADING(bLocal_48, 116,28f, 1);
						}
					}
				}
				else if (iLocal_43 == Global_30707[1])
				{
					vLocal_19 = { -718,18f, 63,26f, 3288,94f };
				}
				RESET_ANIM_SET_FOR_ACTOR(Function_193(), 0);
				TASK_CLEAR(Function_193());
				TELEPORT_ACTOR(Function_193(), &vLocal_19, 1, 1, 0);
				SET_ACTOR_TO_SEAT(Function_193(), 1.0f);
				if (iLocal_43 == Global_30640[0])
				{
					SET_ACTOR_HEADING(Function_193(), 116,28f, 1);
				}
				else if (iLocal_43 == Global_30668[0])
				{
					SET_ACTOR_HEADING(Function_193(), -13,71f, 1);
				}
				else if (iLocal_43 == Global_30685[0])
				{
					SET_ACTOR_HEADING(Function_193(), -179,38f, 1);
				}
				else if (iLocal_43 == Global_30693[0])
				{
					SET_ACTOR_HEADING(Function_193(), 81,35f, 1);
				}
				else if (iLocal_43 == Global_30707[1])
				{
					SET_ACTOR_HEADING(Function_193(), 52,74f, 1);
				}
				else if (iLocal_43 == Global_30717[0])
				{
					SET_ACTOR_HEADING(Function_193(), 90.0f, 1);
				}
				Function_52(Function_193());
				Function_191(3, 1);
				EQUIP_ACCESSORY(Global_34573, 0, 1);
				if (bLocal_93)
				{
					EQUIP_ACCESSORY(Global_34573, 1, 1);
				}
				Function_191(4, 1);
				if (!bLocal_88)
				{
					TASK_GO_NEAR_COORD(Function_193(), &vLocal_22, 1.0f, 1);
				}
				else
				{
					SET_ANIM_SET_FOR_ACTOR(Function_193(), "jail_release", 0);
					SET_ACTION_NODE_FOR_ACTOR(Function_193(), "jail_release/Marston");
					SET_LINKED_ANIM_TARGET(bLocal_48, Function_193());
					SET_ANIM_SET_FOR_ACTOR(bLocal_48, "jail_release", 0);
					SET_ACTION_NODE_FOR_ACTOR(bLocal_48, "jail_release/Guard");
					if (iLocal_43 == Global_30640[0])
					{
						fLocal_96 = (GET_CURRENT_GAME_TIME() + 2,1f);
						fLocal_97 = (GET_CURRENT_GAME_TIME() + 7,94f);
						fLocal_102 = 130.0f;
						fLocal_103 = 80.0f;
					}
					else if (iLocal_43 == Global_30717[0])
					{
						fLocal_96 = (GET_CURRENT_GAME_TIME() + 2,23f);
						fLocal_97 = (GET_CURRENT_GAME_TIME() + 7,88f);
						fLocal_102 = 120.0f;
						fLocal_103 = 90.0f;
					}
					else
					{
						fLocal_96 = (GET_CURRENT_GAME_TIME() + 2,18f);
						fLocal_97 = (GET_CURRENT_GAME_TIME() + 8,1f);
						fLocal_102 = 120.0f;
						fLocal_103 = 94.0f;
					}
					if (iLocal_43 == Global_30668[0])
					{
						fLocal_101 = (GET_CURRENT_GAME_TIME() + 7.0f);
					}
					else if (iLocal_43 == Global_30717[0])
					{
						fLocal_101 = (GET_CURRENT_GAME_TIME() + 6.0f);
					}
				}
				iLocal_84 = 1;
			}
			else
			{
				if (bLocal_88)
				{
					Function_99();
					if (!iLocal_92)
					{
						if (iLocal_43 != Global_30668[0] || iLocal_43 != Global_30717[0])
						{
							if (GET_CURRENT_GAME_TIME() <= fLocal_101)
							{
								Function_98(Function_193());
								SET_OBJECT_POSITION_ON_GROUND(GET_OBJECT_FROM_ACTOR(Function_193()), Function_98(Function_193()));
								iLocal_92 = 1;
							}
						}
					}
				}
				if (!IS_OBJECT_VALID(bLocal_45))
				{
					UI_POP("CutsceneWithMessages");
					Function_45(1, 0, 1, 1, 1, 1, 0, 1, 1, 1);
					bLocal_108 = false;
					DESTROY_OBJECT(bLocal_44);
					DESTROY_OBJECT(bLocal_45);
					*iParam0 = 16;
				}
			}
			iVar0 = 0;
			break;
		
		case 0x00000010:
			Function_182("UPDATE_JAIL_CUTSCENE: JAIL_CLEANUP_LEAVE_JAIL", 11);
			iLocal_10 = 3;
			*iParam0 = 17;
			iVar0 = 0;
		
		case 0x00000011:
			break;
	}
	return iVar0;
}

vector3 Function_98(bool bParam0) //Position: 0x5383 / 21379
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_99() //Position: 0x5394 / 21396
{
	float fVar0;
	
	if (IS_OBJECT_VALID(bLocal_39))
	{
		if (fLocal_98 < 0.0f)
		{
			fVar0 = (GET_CURRENT_GAME_TIME() - fLocal_98);
			if (!bLocal_89)
			{
				if (GET_CURRENT_GAME_TIME() <= fLocal_96)
				{
					vLocal_104.f_4 = (vLocal_104.y - (fVar0 * fLocal_102));
					if (vLocal_104.y >= fLocal_99)
					{
						vLocal_104.y = fLocal_99;
						bLocal_89 = true;
					}
				}
			}
			if (!iLocal_90)
			{
				if (bLocal_89)
				{
					if (GET_CURRENT_GAME_TIME() <= fLocal_97)
					{
						vLocal_104.f_4 = (vLocal_104.y + (fVar0 * fLocal_103));
						if (vLocal_104.y <= fLocal_100)
						{
							vLocal_104.y = fLocal_100;
							iLocal_90 = 1;
						}
					}
				}
			}
			SET_OBJECT_ORIENTATION(bLocal_39, vLocal_104);
			fLocal_98 = GET_CURRENT_GAME_TIME();
		}
		else
		{
			fLocal_98 = GET_CURRENT_GAME_TIME();
		}
	}
	return;
}

void Function_100(int iParam0) //Position: 0x542D / 21549
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
			Function_101(Global_16876[iVar06]);
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
			Function_101(Global_16876[iVar06]);
		}
		iVar0++;
	}
	return;
}

void Function_101(bool bParam0) //Position: 0x54ED / 21741
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

void Function_102() //Position: 0x5533 / 21811
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	
	bVar0 = false;
	if (iLocal_43 == Global_30640[0])
	{
		vVar1 = { -2086,58f, 16,96f, 2601,84f };
		bVar4 = 141.0f;
		bVar0 = true;
	}
	else if (iLocal_43 == Global_30668[0])
	{
		vVar1 = { -827,34f, 93,81f, 2429,02f };
		bVar4 = -54.0f;
		bVar0 = true;
	}
	else if (iLocal_43 == Global_30717[0])
	{
		vVar1 = { 764,55f, 79,45f, 1235,2f };
		bVar4 = 90.0f;
		bVar0 = true;
	}
	else if (iLocal_43 == Global_30693[0])
	{
		vVar1 = { -2661,3f, 31,39f, 4255,57f };
		bVar4 = 82,88f;
		bVar0 = true;
	}
	if (bVar0)
	{
		bLocal_48 = Function_106(StackVal, StackVal, vVar1);
		if (IS_ACTOR_VALID(bLocal_48))
		{
			if (Function_104(StackVal, StackVal, bLocal_48, vVar1) <= 5.0f)
			{
				if (!bLocal_88)
				{
					TELEPORT_ACTOR(bLocal_48, &vVar1, 1, 0, 1);
					SET_ACTOR_HEADING(bLocal_48, bVar4, 1);
					TASK_STAND_STILL(bLocal_48, 15.0f, 0, 0);
				}
			}
		}
		else
		{
			bLocal_48 = CREATE_ACTOR_IN_LAYOUT(bLocal_42, Function_195(), bLocal_75, vVar1, 0.0f, 0.0f, 0.0f);
			if (IS_ACTOR_VALID(bLocal_48))
			{
				bLocal_91 = true;
				SET_ACTOR_HEADING(bLocal_48, bVar4, 1);
				Function_103(bLocal_48, 0);
				SET_ACTOR_UPDATE_PRIORITY(bLocal_48, false);
				if (!bLocal_88)
				{
					TASK_STAND_STILL(bLocal_48, 15.0f, 0, 0);
				}
			}
		}
		if (IS_ACTOR_VALID(bLocal_48))
		{
			Function_98(bLocal_48);
			Function_33();
			bLocal_40 = CREATE_PROP_IN_LAYOUT(bLocal_42, Function_195(), "revolver_cattleman01x", Function_98(bLocal_48), Function_33(), 0);
			ATTACH_OBJECTS(bLocal_40, GET_OBJECT_FROM_ACTOR(bLocal_48), "wrist_l_attachment", 0,03f, -0,1275f, -0,031f, -90.0f, 0.0f, 0.0f, 4294967295);
		}
	}
	return;
}

int Function_103(bool bParam0, bool bParam1) //Position: 0x56DF / 22239
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

float Function_104(bool bParam0, vector3 vParam1) //Position: 0x5758 / 22360
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_105(bParam0);
		vVar0 = { StackVal, StackVal, Function_105(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

vector3 Function_105(bool bParam0) //Position: 0x57D2 / 22482
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

var Function_106(vector3 vParam0) //Position: 0x583C / 22588
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

void Function_107(int iParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x591A / 22810
{
	int iVar0;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		PRINT_HELP_B(iParam0, fParam1, iParam2, iParam3, iParam4, iParam5, &Global_3422[Global_626940] + 12, iParam6);
	}
	else
	{
		iVar0 = "";
		PRINT_HELP_B(iParam0, fParam1, iParam2, iParam3, iParam4, iParam5, iVar0, iParam6);
	}
}

bool Function_108(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x5965 / 22885
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_195(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "blk_jail_exit", 3, 1);
	}
	Function_109(&bVar0);
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

void Function_109(int iParam0) //Position: 0x59DE / 23006
{
	int iVar0;
	
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_112(&iVar0);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_111(&iVar0);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_110(&iVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 3,5f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 1, 2, 10,5f, 1, 0);
	return;
}

void Function_110(int iParam0) //Position: 0x5A33 / 23091
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 24,6192f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 759,774f, 80,95641f, 1233,783f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -3,251785f, -132,8951f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_111(int iParam0) //Position: 0x5A9D / 23197
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 24,6192f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 758,674f, 80,95641f, 1233,603f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,2817846f, -128,8447f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_112(int iParam0) //Position: 0x5B07 / 23303
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 35,0001f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 770,9526f, 83,39214f, 1241,146f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,982271f, -2,661452f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

bool Function_113(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x5B71 / 23409
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_195(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "fod_jail_exit", 3, 1);
	}
	Function_114(&bVar0);
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

void Function_114(int iParam0) //Position: 0x5BEA / 23530
{
	int iVar0;
	
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_117(&iVar0);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_116(&iVar0);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_115(&iVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 3,5f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 1, 2, 9.0f, 1, 0);
	return;
}

void Function_115(int iParam0) //Position: 0x5C3F / 23615
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 41,27919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -724,032f, 64,42379f, 3283,254f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,0546288f, -2,575407f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_116(int iParam0) //Position: 0x5CA9 / 23721
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 41,27919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -721,9219f, 64,42379f, 3282,354f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,2185152f, -2,976659f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_117(int iParam0) //Position: 0x5D13 / 23827
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -722,1326f, 64,73214f, 3300,116f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,055013f, 0,441531f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

bool Function_118(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x5D7D / 23933
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_195(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "chu_jail_exit", 3, 1);
	}
	Function_119(&bVar0);
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

void Function_119(int iParam0) //Position: 0x5DF6 / 24054
{
	int iVar0;
	
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_122(&iVar0);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_121(&iVar0);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_120(&iVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 3,5f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 1, 2, 11,5f, 1, 0);
	return;
}

void Function_120(int iParam0) //Position: 0x5E4B / 24139
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 26,53919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2671,777f, 32,76976f, 4259,368f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,066497f, -0,322885f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_121(int iParam0) //Position: 0x5EB5 / 24245
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 26,53919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2673,607f, 32,76976f, 4259,228f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,0305432f, -1,121723f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_122(int iParam0) //Position: 0x5F1F / 24351
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 30,0092f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2652,903f, 31,63214f, 4248,676f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,149575f, -1,176352f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

bool Function_123(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x5F89 / 24457
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_195(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "esc_jail_exit", 3, 1);
	}
	Function_124(&bVar0);
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

void Function_124(int iParam0) //Position: 0x6002 / 24578
{
	int iVar0;
	
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_127(&iVar0);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_126(&iVar0);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_125(&iVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 3,5f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 1, 2, 6,5f, 1, 0);
	return;
}

void Function_125(int iParam0) //Position: 0x6057 / 24663
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 44,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4340,766f, 31,25712f, 4383,407f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,00139626f, 0,9880309f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_126(int iParam0) //Position: 0x60C1 / 24769
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 44,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4340,576f, 31,90712f, 4383,337f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,2864085f, 0,8600982f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_127(int iParam0) //Position: 0x612B / 24875
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 30.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4359,153f, 33,24214f, 4380,416f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -24,78057f, -134,246f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

bool Function_128(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x6195 / 24981
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_195(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "JailLeavingMac", 3, 1);
	}
	Function_129(&bVar0);
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

void Function_129(int iParam0) //Position: 0x620F / 25103
{
	int iVar0;
	
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_132(&iVar0);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_131(&iVar0);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_130(&iVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 3,5f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 1, 2, 9,5f, 1, 0);
	return;
}

void Function_130(int iParam0) //Position: 0x6264 / 25188
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 41,38f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -823,9387f, 95,26263f, 2423,118f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,111352f, -1,53013f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_131(int iParam0) //Position: 0x62CE / 25294
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 41,38f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -824,7288f, 95,30263f, 2423,748f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,03159f, -2,273989f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_132(int iParam0) //Position: 0x6338 / 25400
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 33.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -822,071f, 94,35816f, 2434,316f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,102343f, -2,472404f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

bool Function_133(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x63A2 / 25506
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_195(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "JailLeavingArm", 3, 1);
	}
	Function_134(&bVar0);
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

void Function_134(int iParam0) //Position: 0x641C / 25628
{
	int iVar0;
	
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_137(&iVar0);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_136(&iVar0);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_135(&iVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 3,5f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 1, 2, 11,5f, 1, 0);
	return;
}

void Function_135(int iParam0) //Position: 0x6471 / 25713
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 41,38f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2091,688f, 18,28384f, 2608,718f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,05777f, -0,3771656f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_136(int iParam0) //Position: 0x64DB / 25819
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 41,38f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2090,198f, 18,29384f, 2609,338f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,05777f, -0,184481f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_137(int iParam0) //Position: 0x6545 / 25925
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 26.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2088,679f, 18,43556f, 2602,515f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,092153f, -1,852318f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_138(int iParam0) //Position: 0x65AF / 26031
{
	Function_139(iParam0, 0.0f);
	return;
}

void Function_139(var uParam0, float fParam1) //Position: 0x65BB / 26043
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_34(uParam0, 1);
	Function_2(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

bool Function_140(var uParam0, float fParam1) //Position: 0x65DC / 26076
{
	if (Function_143(uParam0))
	{
		if (Function_141(uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_141(int iParam0) //Position: 0x65F8 / 26104
{
	if (Function_143(iParam0))
	{
		if (Function_142(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_142(int iParam0) //Position: 0x66C0 / 26304
{
	return Function_94(*iParam0, 2);
}

bool Function_143(var uParam0) //Position: 0x66CD / 26317
{
	return Function_94(*uParam0, 1);
}

void Function_144() //Position: 0x66DA / 26330
{
	bool bVar0;
	char* cVar1[64];
	
	if (!bLocal_85)
	{
		if ((fLocal_109 + 2.0f) > GET_CURRENT_GAME_TIME() && !HUD_IS_FADED())
		{
			bVar0 = false;
			while (!bVar0 && !bLocal_85)
			{
				iLocal_110++;
				if (iLocal_110 != 0)
				{
					if ((*&Global_26401 + 36[Global_29004181][Function_147(iLocal_110)5])[3] >= 0)
					{
						bVar0 = true;
					}
				}
				if (iLocal_110 > 35)
				{
					bLocal_85 = true;
				}
			}
			if (!bLocal_85)
			{
				strcpy(&cVar1, "law_crime_rapsheet_multi", 64);
				if ((*&Global_26401 + 36[Global_29004181][Function_147(iLocal_110)5])[3] == 1)
				{
					strcpy(&cVar1, "law_crime_rapsheet_single", 64);
				}
				PRINT_BIG_FORMAT(2.0f, &cVar1, Function_145((*&Global_26401 + 36[Global_29004181][Function_147(iLocal_110)5])[3]), &Global_26998[Function_147(iLocal_110)18] + 4, 0, 0, 2, 0);
				fLocal_109 = GET_CURRENT_GAME_TIME();
			}
		}
	}
	return;
}

var Function_145(bool bParam0) //Position: 0x67C6 / 26566
{
	bool bVar0;
	
	bVar0 = Function_146();
	UI_SET_STRING(bVar0, I2STR(bParam0));
	return bVar0;
}

var Function_146() //Position: 0x67DD / 26589
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

int Function_147(int iParam0) //Position: 0x6899 / 26777
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

void Function_148(int iParam0) //Position: 0x6A4F / 27215
{
	if (!Function_143(iParam0))
	{
		Function_139(iParam0, 0.0f);
	}
	return;
}

var Function_149(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x6A64 / 27236
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_195(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "blk_jail", 2, 1);
	}
	Function_150(&bVar0);
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

void Function_150(int iParam0) //Position: 0x6AD8 / 27352
{
	int iVar0;
	
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_152(&iVar0);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_151(&iVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 23.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 60.0f, 1);
	return;
}

void Function_151(int iParam0) //Position: 0x6B1F / 27423
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 22.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 771,0601f, 80,5f, 1232,41f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,019548f, -3,064449f, 0.0f, 1);
	return;
}

void Function_152(int iParam0) //Position: 0x6B7C / 27516
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 22.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 771,84f, 80,61f, 1238,88f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,008377f, -3,10337f, 0.0f, 1);
	return;
}

var Function_153(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x6BD9 / 27609
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_195(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "fod_jail", 2, 1);
	}
	Function_154(&bVar0);
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

void Function_154(int iParam0) //Position: 0x6C4D / 27725
{
	int iVar0;
	
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_156(&iVar0);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_155(&iVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 23.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 60.0f, 1);
	return;
}

void Function_155(int iParam0) //Position: 0x6C94 / 27796
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 36.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -725,51f, 64,25f, 3296,49f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,14251f, -2,504373f, 0.0f, 1);
	return;
}

void Function_156(int iParam0) //Position: 0x6CF1 / 27889
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 36.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -726,24f, 64,2f, 3296,77f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,170241f, -2,076593f, 0.0f, 1);
	return;
}

var Function_157(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x6D4E / 27982
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_195(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "chu_jail", 2, 1);
	}
	Function_158(&bVar0);
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

void Function_158(int iParam0) //Position: 0x6DC2 / 28098
{
	int iVar0;
	
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_160(&iVar0);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_159(&iVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 23.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 60.0f, 1);
	return;
}

void Function_159(int iParam0) //Position: 0x6E09 / 28169
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 22.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2650,84f, 31,81f, 4253,959f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,042062f, -0,349066f, 0.0f, 1);
	return;
}

void Function_160(int iParam0) //Position: 0x6E66 / 28262
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 22.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2653,83f, 31,81f, 4253,71f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,037175f, -0,691499f, 0.0f, 1);
	return;
}

var Function_161(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x6EC3 / 28355
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_195(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "esc_jail", 2, 1);
	}
	Function_162(&bVar0);
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

void Function_162(int iParam0) //Position: 0x6F37 / 28471
{
	int iVar0;
	
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_164(&iVar0);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_163(&iVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 23.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 60.0f, 1);
	return;
}

void Function_163(int iParam0) //Position: 0x6F7E / 28542
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 40.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4355,88f, 31,166f, 4383,21f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 2,99f, -144,18f, 0.0f, 0);
	return;
}

void Function_164(int iParam0) //Position: 0x6FDB / 28635
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 40.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4354,43f, 31,17534f, 4383,22f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,009774f, 2,701421f, 0.0f, 1);
	return;
}

var Function_165(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x7038 / 28728
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_195(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "jailsittingmac", 2, 1);
	}
	Function_166(&bVar0);
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

void Function_166(int iParam0) //Position: 0x70B2 / 28850
{
	int iVar0;
	
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_168(&iVar0);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_167(&iVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 23.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 60.0f, 1);
	return;
}

void Function_167(int iParam0) //Position: 0x70F9 / 28921
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 26.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -819,5601f, 94,95f, 2434,78f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,0090757f, -3,06951f, 0.0f, 1);
	return;
}

void Function_168(int iParam0) //Position: 0x7156 / 29014
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 26.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -821,32f, 94,95f, 2435,85f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,008552f, -1,999972f, 0.0f, 1);
	return;
}

var Function_169(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x71B3 / 29107
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_195(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "jailsittingarm", 2, 1);
	}
	Function_170(&bVar0);
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

void Function_170(int iParam0) //Position: 0x722D / 29229
{
	int iVar0;
	
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_172(&iVar0);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_171(&iVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 23.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 60.0f, 1);
	return;
}

void Function_171(int iParam0) //Position: 0x7274 / 29300
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 18.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2082,94f, 16,92f, 2599,576f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,19617f, -2,5864f, 0.0f, 1);
	return;
}

void Function_172(bool bParam0) //Position: 0x72D1 / 29393
{
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 18.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 0,15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_POSITION(*bParam0, -2084,46f, 16,95f, 2601,42f);
	SET_CAMERASHOT_ORIENTATION(*bParam0, 0,203854f, -1,967684f, 0.0f, 1);
	return;
}

void Function_173(bool bParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x732E / 29486
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
	HUD_ENABLE(false);
	Function_47();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(Global_34573, "iDrunk", false);
	if (bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_193();
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
				Function_98(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_195(), 2, Function_98(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
				DELETE_PROJECTILES_IN_VOLUME(bVar0);
			}
		}
		Function_57(19, 1, 0, 0);
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
	if ((IS_OBJECT_VALID(Function_176()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_176()));
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
	if (Function_175(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_174(0x4000000);
	}
	if (Function_175(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_174(0x8000000);
	}
}

void Function_174(int iParam0) //Position: 0x75D7 / 30167
{
	int iVar0;
	
	if (Function_94(iParam0, 1) && Function_94(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

bool Function_175(int iParam0) //Position: 0x760B / 30219
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_176() //Position: 0x7627 / 30247
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

void Function_177(var uParam0) //Position: 0x76A6 / 30374
{
	vLocal_104 = { 180.0f, uParam0, 180.0f };
	SET_OBJECT_ORIENTATION(bLocal_39, vLocal_104);
	return;
}

void Function_178() //Position: 0x76C6 / 30406
{
	var uVar0;
	
	if (IS_DOOR_VALID(bLocal_41))
	{
		OPEN_DOOR_FAST(bLocal_41, &uVar0);
	}
	return;
}

void Function_179() //Position: 0x76DB / 30427
{
	vector3 vVar0;
	bool bVar3;
	
	if (iLocal_43 == Global_30640[0])
	{
		vVar0 = { -2088,95f, 17,6f, 2604,89f };
		fLocal_99 = -35,514f;
		fLocal_100 = 65,689f;
	}
	else if (iLocal_43 == Global_30707[1])
	{
		vVar0 = { -719,22f, 63,37f, 3286,4f };
	}
	else if (iLocal_43 == Global_30693[0])
	{
		vVar0 = { -2664,54f, 31,5f, 4255,69f };
		fLocal_99 = 0.0f;
		fLocal_100 = 89.0f;
	}
	else if (iLocal_43 == Global_30668[0])
	{
		vVar0 = { -823,34f, 93,83f, 2425,55f };
		fLocal_99 = -265.0f;
		fLocal_100 = -170.0f;
	}
	else if (iLocal_43 == Global_30717[0])
	{
		vVar0 = { 760,95f, 79,52f, 1235,95f };
		fLocal_99 = 0.0f;
		fLocal_100 = 89.0f;
	}
	bVar3 = CREATE_OBJECT_ITERATOR(GET_AMBIENT_LAYOUT());
	ITERATE_ON_OBJECT_TYPE(bVar3, 27);
	ITERATE_IN_LAYOUT(bVar3, GET_ART_GRINGO_LAYOUT());
	bLocal_41 = FIND_NEAREST_DOOR(&vVar0, 2.0f);
	bLocal_39 = Function_180(StackVal, StackVal, bVar3, vVar0, 0.0f);
	DESTROY_ITERATOR(bVar3);
	return;
}

var Function_180(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x77E3 / 30691
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

void Function_181(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x7860 / 30816
{
	int iVar0;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, &Global_3422[Global_626940] + 12, iParam5);
	}
	else
	{
		iVar0 = "";
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, iVar0, iParam5);
	}
}

void Function_182(bool bParam0, int iParam1) //Position: 0x78A7 / 30887
{
	if (!Function_175(128))
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

var Function_183(bool bParam0) //Position: 0x78E2 / 30946
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

bool Function_184(bool bParam0) //Position: 0x7928 / 31016
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_188();
	iVar1 = 0;
	if (!Function_51(bParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_187(bParam0[iVar03], 8);
		}
		else if (Function_186())
		{
			iVar1 = 1;
			Function_187(bParam0[iVar03], 8);
		}
		Function_187(bParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_51(bParam0[iVar03], 4))
		{
			if (!Function_51(bParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*bParam0)[iVar03], (Function_51(bParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*bParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*bParam0)[iVar03], true, (Function_51(bParam0[03], 8) || iVar1));
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
				Function_187(bParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_51(bParam0[iVar03], 4))
		{
			if (!Function_51(bParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*bParam0)[iVar03]))
						{
							Function_187(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*bParam0)[iVar03]))
						{
							Function_187(bParam0[iVar03], 2);
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
							Function_187(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_187(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*bParam0)[iVar03]))
						{
							Function_187(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_187(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_187(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*bParam0)[iVar03]))
						{
							Function_187(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*bParam0)[iVar03], 6)))
						{
							Function_187(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*bParam0)[iVar03]))
						{
							Function_187(bParam0[iVar03], 2);
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
	Function_185();
	return 1;
}

void Function_185() //Position: 0x7CA3 / 31907
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

bool Function_186() //Position: 0x7CE3 / 31971
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

void Function_187(var uParam0, int iParam1) //Position: 0x7D0E / 32014
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_188() //Position: 0x7D1F / 32031
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

int Function_189(bool bParam0) //Position: 0x7D61 / 32097
{
	if (!Function_86(bParam0))
	{
		return 1;
	}
	return Function_84(&(Global_29008[bParam0]), 4);
}

void Function_190(vector3 vParam0, var uParam3, char* cParam4, char* cParam5, var uParam6, var uParam7) //Position: 0x7D7D / 32125
{
	Global_13112.f_72 = uParam3;
	Global_13112 = { StackVal, StackVal, vParam0 };
	strcpy(&Global_13112 + 24, cParam4, 24);
	strcpy(&Global_13112 + 48, cParam5, 24);
	Global_13112.f_76 = uParam6;
	Global_13112.f_80 = uParam7;
}

void Function_191(int iParam0, bool bParam1) //Position: 0x7DB5 / 32181
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

void Function_192(bool bParam0) //Position: 0x7F28 / 32552
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

bool Function_193() //Position: 0x7F4D / 32589
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_194() //Position: 0x7F62 / 32610
{
	RESET_PROPS_IN_WORLD();
	DESTROY_AMBIENT_ACTORS_IF_POSSIBLE();
	CLEAR_ALL_CORPSES();
	CLEAR_DECALS();
	CLEAR_CHARACTER_BLOOD();
	DESTROY_IMPAIRED_ACTORS();
	DESTROY_GC_OBJECTS(1, 1);
	CLEAN_CACHE_ENTRIES();
	return;
}

var Function_195() //Position: 0x7F82 / 32642
{
	int iVar0;
	
	return iVar0;
}

var Function_196(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x7F8A / 32650
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_197(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_187(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_197(var uParam0, int iParam1, int iParam2) //Position: 0x7FC2 / 32706
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_51(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_187(uParam0[iVar03], 4);
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

var Function_198(var uParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x8088 / 32904
{
	int iVar0;
	
	uParam2 = uParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_51(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_187(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_187(uParam0[iVar03], 8);
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

var Function_199(int iParam0) //Position: 0x8158 / 33112
{
	int iVar0;
	bool bVar1;
	
	bVar1 = RAND_INT_RANGE(false, 10000);
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
		iVar0 = Function_200(Global_30750[2], 0, 0, 0);
	}
	return iVar0;
}

int Function_200(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x82D3 / 33491
{
	return Function_201(uParam0, uParam1, uParam2, 4294967295, uParam3);
}

var Function_201(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x82E7 / 33511
{
	return Function_202(uParam0, uParam1, uParam2, uParam3, uParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_202(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, vector3 vParam6) //Position: 0x8300 / 33536
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
		Function_208();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, bParam4, fParam5, vParam6);
	if (!Function_207(bVar1))
	{
		if (!Global_30837 && !Global_30838)
		{
			Function_206(bParam0, bParam1, bParam2, bParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_206(bParam0, bParam1, bParam2, bParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && bParam3 != 4294967295)
		{
			while (Function_205(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, fParam5, vParam6);
				if (Function_207(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_205(bVar0))
				{
					Function_204();
				}
				Function_203(bVar0);
			}
		}
		else if (!bParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != bParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, fParam5, vParam6);
				if (Function_207(bVar1))
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

void Function_203(int iParam0) //Position: 0x85F3 / 34291
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

void Function_204() //Position: 0x86A7 / 34471
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

bool Function_205(bool bParam0) //Position: 0x86E1 / 34529
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

void Function_206(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x870E / 34574
{
	bool bVar0;
	
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
	bVar0 = false;
	while (bVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(bParam0))
	{
		PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(GET_ACTORENUM_IN_POPULATION(bParam0, bVar0)));
		PRINTSTRING("n  Weight=");
		PRINTFLOAT(GET_ACTORENUM_IN_POPULATION_WEIGHT(bParam0, bVar0));
		PRINTSTRING("  Streamed=");
		if (STREAMING_IS_ACTOR_LOADED(GET_ACTORENUM_IN_POPULATION(bParam0, bVar0), 4294967295))
		{
			PRINTSTRING("TRUE");
		}
		else
		{
			PRINTSTRING("FALSE");
		}
		PRINTNL();
		bVar0++;
	}
}

bool Function_207(bool bParam0) //Position: 0x885F / 34911
{
	if (bParam0 > 0 || bParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

void Function_208() //Position: 0x8876 / 34934
{
	int iVar0;
	
	if (Global_3402)
	{
		if (StackVal || !Global_30742 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_204();
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
	Function_204();
	return;
}

var Function_209(int iParam0, int iParam1) //Position: 0x88C1 / 35009
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_210() //Position: 0x88D3 / 35027
{
	if (((iLocal_43 != Global_30640[0] || iLocal_43 != Global_30693[0]) || iLocal_43 != Global_30717[0]) || iLocal_43 != Global_30668[0])
	{
		bLocal_88 = true;
	}
	else
	{
		bLocal_88 = false;
	}
	return;
}

