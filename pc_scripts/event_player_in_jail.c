//Decompiled with MagicRDR v1.0
//Function Count : 217
//Statics Count : 149
//Natives Count : 314
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
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	bool bLocal_15 = false;
	bool bLocal_16 = false;
	struct<2> Local_17 = { 0, 0 } ;
	var uLocal_19 = 0;
	struct<5> Local_20 = { 0, 0, 0, 0, 0 } ;
	var uLocal_25 = 0;
	struct<2> Local_26 = { 0, 0 } ;
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
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	var uLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	int iLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	int iLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	int iLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	float fLocal_63 = 0.0f;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	int iLocal_67 = 6;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
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
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	int iLocal_93 = 2;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	bool bLocal_103 = false;
	bool bLocal_104 = false;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	bool bLocal_107 = false;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	bool bLocal_111 = false;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	bool bLocal_115 = false;
	bool bLocal_116 = false;
	int iLocal_117 = 0;
	bool bLocal_118 = false;
	bool bLocal_119 = false;
	int iLocal_120 = 0;
	bool bLocal_121 = false;
	int iLocal_122 = 0;
	bool bLocal_123 = false;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	float fLocal_126 = 0.0f;
	float fLocal_127 = 0.0f;
	float fLocal_128 = 0.0f;
	float fLocal_129 = 0.0f;
	float fLocal_130 = 0.0f;
	float fLocal_131 = 0.0f;
	float fLocal_132 = 0.0f;
	float fLocal_133 = 0.0f;
	struct<2> Local_134 = { 0, 0 } ;
	var uLocal_136 = 0;
	int iLocal_137 = 0;
	bool bLocal_138 = false;
	float fLocal_139 = 0.0f;
	int iLocal_140 = 0;
	struct<25> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	
	iLocal_13 = 0;
	iLocal_140 = 0;
	iLocal_14 = 0;
	iLocal_56 = ScriptParam_0;
	Global_6650 = 1;
	Function_216();
	iVar0 = 0;
	iLocal_124 = GET_DAY(0);
	iLocal_125 = GET_HOUR(0);
	bLocal_16 = Function_215(2, CEIL((IntToFloat(ScriptParam_0.f_20) / 250.0f)));
	bLocal_103 = Function_205(iLocal_56);
	Function_204(&iLocal_93, bLocal_103, 3, 0);
	Function_202(&iLocal_93, "revolver_cattleman01x", 0, 0);
	bLocal_104 = RAND_INT_RANGE(0, 2);
	bLocal_104 = false;
	bLocal_111 = ScriptParam_0.f_24;
	if (bLocal_111)
	{
		if (!Global_39248[0])
		{
			(*&Global_40060 + 32)[Global_40060.f_4424] = 0;
			bLocal_111 = false;
		}
	}
	bLocal_15 = 250;
	uLocal_54 = CREATE_LAYOUT(Function_201());
	while (!IS_EXITFLAG_SET())
	{
		switch (iLocal_14)
		{
			case 0x00000000:
				if (HUD_IS_FADED())
				{
					iLocal_14 = 1;
					Function_200();
					HUD_FADE_OUT(0.0f, 1f, 1);
					UNK_0xEF270DC9();
					MEMORY_EVERYBODY_FORGET_ABOUT_EVERYTHING();
					Function_198(Function_199());
					DEEQUIP_ACCESSORY(&Global_54076, 0);
					if (UNK_0xE094DB31(&Global_54076, 1))
					{
						DEEQUIP_ACCESSORY(&Global_54076, 1);
						bLocal_123 = true;
					}
					Function_197(4, 0);
					Function_197(3, 0);
					UI_EXIT("WantedMeter");
					UI_EXIT("BountyAmount");
					_HUD_WANTED_METER(0);
					_HUD_WANTED_CRIME(0.0f);
					Global_42252 = 0.0f;
					UNK_0x598815BD(Global_42252);
					Function_196(StackVal, *(&ScriptParam_0 + 4), ScriptParam_0, "", "", 0, 0);
					Global_6634 = 1;
					Function_202(&iLocal_67, "sit_bed", 5, 0);
					Function_202(&iLocal_67, "custom/sit_bed", 8, 0);
					Function_202(&iLocal_67, "Marston_Prison_idle_01", 5, 0);
					Function_202(&iLocal_67, "custom/Marston_Prison_idle_01", 8, 0);
					Function_202(&iLocal_67, "jail_release", 5, 0);
					Function_202(&iLocal_67, "custom/jail_release", 8, 0);
					bLocal_15 = 500;
				}
				break;
			
			case 0x00000001:
				if ((Function_195(ScriptParam_0) && STREAMING_IS_WORLD_LOADED()) && Function_190(&iLocal_67))
				{
					Global_6634 = 0;
					iLocal_38 = Function_189("jail_sit");
					iLocal_40 = Function_189("jail_leave_start");
					iLocal_42 = Function_189("jail_leave_end");
					iLocal_44 = Function_189("cell_leave_end");
					uLocal_46 = Function_189("cell_leave_cop");
					if ((IS_OBJECT_VALID(&iLocal_38) && IS_OBJECT_VALID(&iLocal_40)) && IS_OBJECT_VALID(&iLocal_42))
					{
						GET_OBJECT_POSITION(&iLocal_38, &Local_17);
						GET_OBJECT_ORIENTATION(&iLocal_38, &Local_20);
						GET_OBJECT_POSITION(&iLocal_40, &Local_23);
						GET_OBJECT_POSITION(&iLocal_42, &Local_26);
						GET_OBJECT_POSITION(&iLocal_44, &uLocal_29);
						GET_OBJECT_POSITION(&uLocal_46, &uLocal_32);
						GET_OBJECT_ORIENTATION(&uLocal_46, &uLocal_35);
						uLocal_61 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uLocal_54, Function_201(), 4,203895E-45f, Local_17, Vector(0.0f, 0.0f, 0.0f), Vector(10.0f, 10.0f, 10.0f));
						fLocal_63 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uLocal_54, Function_201(), 4,203895E-45f, Local_23, Vector(0.0f, 0.0f, 0.0f), Vector(5.0f, 10.0f, 5.0f));
						ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_61);
						ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_61);
						ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&fLocal_63);
						ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&fLocal_63);
						CLEAR_AMBIENT_OBJECTS_VOLUME(&uLocal_61, 15);
						CLEAR_AMBIENT_OBJECTS_VOLUME(&uLocal_61, 24);
						CLEAR_AMBIENT_OBJECTS_VOLUME(&fLocal_63, 15);
						CLEAR_AMBIENT_OBJECTS_VOLUME(&fLocal_63, 24);
						if (iLocal_56 == Global_46760[0])
						{
							Local_17.f_8 = (StackVal + 0,56f);
						}
						else if (iLocal_56 == Global_46816[0])
						{
							Local_17 = (Local_17 - 0,15f);
							Local_17.f_8 = (StackVal + 0,3f);
						}
						else if (iLocal_56 == Global_46850[0])
						{
							Local_17 = (Local_17 - 0,11f);
						}
						else if (iLocal_56 == Global_46914[0])
						{
							Local_26 = (Local_26 - 1,75f);
						}
						iLocal_14 = 2;
					}
					else
					{
						if (!IS_OBJECT_VALID(&iLocal_38))
						{
							LOG_ERROR("Jail Object for current town not FOUND! ARGGGGH");
						}
						if (!IS_OBJECT_VALID(&iLocal_40))
						{
							LOG_ERROR("Start Leave Jail Object for current town not FOUND! ARGGGGH");
						}
						if (!IS_OBJECT_VALID(&iLocal_42))
						{
							LOG_ERROR("End Leave Jail Object for current town not FOUND! ARGGGGH");
						}
					}
				}
				bLocal_15 = 100;
				break;
			
			case 0x00000002:
				if (!iLocal_117)
				{
					if (Function_190(&iLocal_93))
					{
						iLocal_117 = 1;
					}
				}
				bLocal_15 = Function_102(&iVar0);
				break;
			
			case 0x00000003:
				bLocal_15 = false;
				iLocal_14 = 4;
				break;
			
			case 0x00000004:
				if (bLocal_111)
				{
					if (Function_65() || !Global_39248[0])
					{
						TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
					}
				}
				else
				{
					TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				}
				bLocal_15 = false;
				break;
			
			default:
				break;
		}
		WAIT(bLocal_15);
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
		if (!Function_64(StackVal, Local_26))
		{
			TELEPORT_ACTOR(Function_199(), &Local_26, 1, 1, 0);
		}
	}
	Function_62(225, bLocal_16, 0, 0);
	Function_60(Function_199());
	Function_58(1);
	if (!IS_GAME_RESETTING())
	{
		Function_57(Function_199());
	}
	SET_ACTOR_TO_SEAT(Function_199(), 1.0f);
	Global_6650 = 0;
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Function_53(&iLocal_67);
	Function_53(&iLocal_93);
	if (IS_OBJECT_VALID(&uLocal_57))
	{
		DESTROY_OBJECT(&uLocal_57);
	}
	if (IS_OBJECT_VALID(&uLocal_59))
	{
		DESTROY_OBJECT(&uLocal_59);
	}
	if (bLocal_138)
	{
		UI_POP("CutsceneWithMessages");
		Function_49(1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1);
	}
	if (bLocal_118)
	{
		if (IS_ACTOR_VALID(&uLocal_65))
		{
			TASK_STAND_STILL(&uLocal_65, 10.0f, 0, 0);
		}
	}
	if (IS_OBJECT_VALID(&iLocal_50))
	{
		DESTROY_OBJECT(&iLocal_50);
	}
	if (IS_ACTOR_VALID(&uLocal_65))
	{
		if (bLocal_121)
		{
			RELEASE_ACTOR(&uLocal_65);
		}
	}
	Function_48();
	if (!ScriptParam_0.f_24)
	{
		Function_47(8388608);
	}
	Function_46();
	Function_43();
	Global_6649 = 1;
	Function_42(0x20000000);
	DESTROY_VOLUME(&uLocal_61);
	DESTROY_OBJECT(&fLocal_63);
	strcpy(&Global_21543, "", 64);
	if (!IS_GAME_RESETTING())
	{
		Function_1(1);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(bool bParam0) //Position: 0x662 / 1634
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_30();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_3();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_2(&Global_99144, 1);
		Function_2(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_2(var uParam0, int iParam1) //Position: 0x6B7 / 1719
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

void Function_3() //Position: 0x6CD / 1741
{
	Function_28();
	Function_27();
	Function_27();
	Function_26();
	Function_26();
	Function_25();
	Function_25();
	Function_10(0);
	Function_10(0);
	Function_8();
	Function_7();
	Function_6();
	Function_5();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_4();
	return;
}

void Function_4() //Position: 0x718 / 1816
{
	Global_54086[372] = GET_SAGPLAYER_STAT_FLOAT(0);
	Global_54086[373] = GET_SAGPLAYER_STAT_FLOAT(1);
	Global_54086[374] = GET_SAGPLAYER_STAT_FLOAT(2);
	Global_54086[375] = GET_SAGPLAYER_STAT_FLOAT(3);
	Global_54086[376] = GET_SAGPLAYER_STAT_FLOAT(4);
	Global_54086[377] = GET_SAGPLAYER_STAT_FLOAT(5);
	Global_54086[378] = GET_SAGPLAYER_STAT_FLOAT(6);
	Global_54086[379] = GET_SAGPLAYER_STAT_INT(1);
	Global_54086[380] = GET_SAGPLAYER_STAT_INT(2);
	Global_54086[381] = GET_SAGPLAYER_STAT_FLOAT(7);
	Global_54086[382] = GET_SAGPLAYER_STAT_FLOAT(8);
	Global_54086[383] = GET_SAGPLAYER_STAT_FLOAT(9);
	Global_54086[385] = GET_SAGPLAYER_STAT_INT(0);
	Global_54086[387] = GET_SAGPLAYER_STAT_FLOAT(10);
	Global_54086[388] = GET_SAGPLAYER_STAT_FLOAT(11);
	Global_54086[394] = GET_SAGPLAYER_STAT_FLOAT(12);
	Global_54086[44] = GET_SAGPLAYER_STAT_INT(3);
	Global_54086[392] = GET_SAGPLAYER_STAT_INT(4);
	Global_54086[391] = GET_SAGPLAYER_STAT_INT(6);
	Global_54086[393] = GET_SAGPLAYER_STAT_INT(5);
	Global_54086[395] = GET_SAGPLAYER_STAT_INT(7);
	return;
}

void Function_5() //Position: 0x81E / 2078
{
	float fVar0;
	
	fVar0 = GET_PLAYER_DEADEYE_POINTS(0);
	if (Global_39290[1])
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
	Global_131716 = fVar0;
	return;
}

void Function_6() //Position: 0x851 / 2129
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
					Global_119632[iVar23] = iVar3;
					*(&Global_119632[iVar23] + 8) = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					*(&Global_119632[iVar23] + 16) = IS_JOURNAL_ENTRY_UPDATED(iVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_119632[iVar13] = 4294967295;
		*(&Global_119632[iVar13] + 8) = 4294967295;
		iVar1++;
	}
	return;
}

void Function_7() //Position: 0x9E4 / 2532
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
					Global_119329[iVar23] = iVar3;
					*(&Global_119329[iVar23] + 8) = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					*(&Global_119329[iVar23] + 16) = IS_JOURNAL_ENTRY_UPDATED(iVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_119329[iVar13] = 4294967295;
		*(&Global_119329[iVar13] + 8) = 4294967295;
		iVar1++;
	}
	Global_119631 = GET_TARGETED_JOURNAL_ENTRY();
	if (Global_119631 == 4294967295 && Global_119631 == 0)
	{
		if (!GET_JOURNAL_ENTRY_TYPE(Global_119631) != 2)
		{
			Global_119631 = 4294967295;
		}
	}
	return;
}

void Function_8() //Position: 0xB9D / 2973
{
	Function_9(&Global_42918, 1, 0);
	return;
}

void Function_9(struct<2317> Param0) //Position: 0xBAB / 2987
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	
	uVar0 = Function_199();
	if (IS_ACTOR_VALID(&uVar0))
	{
		Param0.f_1060 = GET_NUM_WEAPONS_IN_INVENTORY(&uVar0);
		iVar7 = 4294967294;
		iVar8 = GET_WEAPON_IN_HAND(&uVar0);
		if (iVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(&uVar0, iVar8) || iParam2)
			{
				iVar7 = GET_WEAPON_IN_HAND_CRC(&uVar0);
			}
		}
		iVar1 = 0;
		while (iVar1 < (Param0.f_1060 - 1))
		{
			iVar9 = ACTOR_GET_ITEM_CRC_AT_INDEX(iVar1, &uVar0);
			if (iVar9 != iVar7)
			{
				(*&Param0 + 92)[iVar1] = iVar9;
				(&Param0 + 92[iVar1])->f_4 = GET_ITEM_COUNT_BY_CRC((*&Param0 + 92)[iVar1], &uVar0);
			}
			iVar1++;
		}
		if (bParam1)
		{
			Param0.f_88 = GET_NUM_ACCESSORIES_IN_INVENTORY(&uVar0);
			iVar2 = 0;
			while (iVar2 < (Param0.f_88 - 1))
			{
				Param0[iVar2] = ACTOR_GET_ACCESSORY_CRC_AT_INDEX(iVar2, &uVar0);
				iVar2++;
			}
		}
		bVar3 = false;
		while (bVar3 < (17 - 1))
		{
			(*&Param0 + 1064)[bVar3] = _GET_AMMO_AMOUNT(&uVar0, bVar3, 0);
			bVar3++;
		}
		Param0.f_1272 = 4294967295;
		iVar4 = 0;
		while (iVar4 < (7 - 1))
		{
			iVar10 = iVar4;
			(*&Param0 + 1208)[iVar4] = GET_WEAPON_EQUIPPED(&uVar0, iVar10);
			if ((*&Param0 + 1208)[iVar4] == 4294967295)
			{
				if (GET_ITEM_EQUIPSLOT(iVar8) == iVar10)
				{
					(*&Param0 + 1208)[iVar4] = iVar8;
					Param0.f_1272 = iVar8;
				}
			}
			iVar4++;
		}
		Param0.f_2316 = GET_NUM_COLLECTABLES_IN_INVENTORY(&uVar0);
		iVar1 = 0;
		while (iVar1 < (Param0.f_2316 - 1))
		{
			uVar11 = ACTOR_GET_COLLECTABLE_CRC_AT_INDEX(iVar1, &uVar0);
			(*&Param0 + 1284)[iVar1] = uVar11;
			(&Param0 + 1284[iVar1])->f_4 = GET_ITEM_COUNT_BY_CRC((*&Param0 + 1284)[iVar1], &uVar0);
			iVar1++;
		}
		iVar12 = ACTOR_GET_NEXT_EQUIP_SLOT(&uVar0);
		if (iVar12 != 4294967295)
		{
			Param0.f_1276 = GET_WEAPON_EQUIPPED(&uVar0, iVar12);
		}
		else
		{
			Param0.f_1276 = 4294967295;
		}
		iVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(&uVar0);
		if (iVar13 != 4294967295)
		{
			Param0.f_1280 = GET_WEAPON_EQUIPPED(&uVar0, iVar13);
		}
		else
		{
			Param0.f_1280 = 4294967295;
		}
		bVar5 = false;
		while (bVar5 < (39 - 1))
		{
			(*&Param0 + 2320)[bVar5] = IS_WEAPONENUM_LOCKED(bVar5);
			bVar5++;
		}
	}
	return;
}

struct<8> Function_10(int iParam0) //Position: 0xDC8 / 3528
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
					iVar2 = ((Function_24((50 + iVar4)) + Function_24((183 + iVar4))) + Function_24((90 + iVar4)));
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
	Function_11(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_11(int iParam0, bool bParam1, bool bParam2) //Position: 0xE6F / 3695
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_54086[iParam0] > TO_FLOAT(bParam1))
	{
		Function_23(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_22(iParam0);
	if (&bParam2)
	{
		Function_12(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_12(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x110B / 4363
{
	char* cVar0[32];
	bool bVar8;
	struct<8> Var9;
	int iVar17;
	int iVar18;
	float fVar19;
	float fVar20;
	int iVar21;
	
	if (bParam3)
	{
		cVar0 = I2STR(ROUND(fParam2));
	}
	else
	{
		cVar0 = F2STR(fParam2, 6, 2);
	}
	strcpy(&Global_55480[iParam016] + 32, "", 32);
	if (&bParam4)
	{
		if (bParam1)
		{
			strcpy(&cVar1, "+", 4);
		}
		else
		{
			strcpy(&cVar1, "-", 4);
		}
		stradd(&Global_55480[iParam016] + 32, &cVar1, 32);
	}
	if (bParam1)
	{
		iVar2 = 0;
	}
	else
	{
		iVar2 = 1;
	}
	if (Global_55480[iParam016].f_124 != 3 || Global_55480[iParam016].f_96 != 21)
	{
		stradd(&Global_55480[iParam016] + 32, "$", 32);
	}
	stradd(&Global_55480[iParam016] + 32, &cVar0, 32);
	switch (Global_55480[iParam016].f_96)
	{
		case 0x00000010:
		case 0x00000011:
			strcpy(&Global_55480[iParam016] + 32, "", 32);
			break;
		
		case 0x00000016:
			if (fParam2 > 2000.0f)
			{
				stradd(&Global_55480[iParam016] + 32, " lbs", 32);
			}
			else
			{
				fParam2 = (fParam2 / 2000.0f);
				memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
				stradd(&Global_55480[iParam016] + 32, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
			if (fParam2 <= 60.0f)
			{
				bVar7 = false;
				bVar5 = (FLOOR(fParam2) / 60);
				if (bVar5 > 60)
				{
					bVar4 = (bVar5 / 60);
					bVar5 = (bVar5 - bVar4 * 60);
					bVar6 = FLOOR(((fParam2 - TO_FLOAT(bVar4 * 60 * 60)) - TO_FLOAT(bVar5 * 60)));
					if (bVar4 > 24)
					{
						bVar3 = (bVar4 / 24);
						bVar4 = (bVar4 - bVar3 * 24);
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar3), 32);
						if (bVar3 >= 1)
						{
							stradd(&Global_55480[iParam016] + 32, " days", 32);
						}
						else
						{
							stradd(&Global_55480[iParam016] + 32, " day", 32);
						}
						bVar7 = true;
					}
					if (bVar4 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_55480[iParam016] + 32, " ", 32);
						}
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar4), 32);
						stradd(&Global_55480[iParam016] + 32, " hr", 32);
						bVar7 = true;
					}
					if (bVar5 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_55480[iParam016] + 32, " ", 32);
						}
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar5), 32);
						stradd(&Global_55480[iParam016] + 32, " min", 32);
						bVar7 = true;
					}
					if (bVar6 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_55480[iParam016] + 32, " ", 32);
						}
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar6), 32);
						stradd(&Global_55480[iParam016] + 32, " sec", 32);
						bVar7 = false;
					}
				}
				else
				{
					stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar5), 32);
					stradd(&Global_55480[iParam016] + 32, " min", 32);
					bVar6 = FLOOR((fParam2 - TO_FLOAT(bVar5 * 60)));
					if (bVar6 >= 0)
					{
						stradd(&Global_55480[iParam016] + 32, " ", 32);
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar6), 32);
						stradd(&Global_55480[iParam016] + 32, " sec", 32);
					}
				}
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, &cVar0, 32);
				stradd(&Global_55480[iParam016] + 32, " sec", 32);
			}
			break;
		
		case 0x00000018:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
			fParam2 = (fParam2 * 3,28084f);
			if (fParam2 > 5280.0f)
			{
				bVar8 = false;
			}
			else
			{
				fParam2 = (fParam2 / 5280.0f);
				bVar8 = true;
			}
			if ((fParam2 - IntToFloat(FLOOR(fParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(fParam2)), 32);
			}
			if (bVar8)
			{
				stradd(&Global_55480[iParam016] + 32, " mi", 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, " ft", 32);
			}
			break;
		
		case 0x00000019:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
			if ((fParam2 - IntToFloat(FLOOR(fParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(fParam2)), 32);
			}
			if (fParam2 < 1.0f)
			{
				stradd(&Global_55480[iParam016] + 32, " days", 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, " day", 32);
			}
			break;
		
		case 0x0000000F:
			if (iParam0 == 390)
			{
				stradd(&Global_55480[iParam016] + 32, UI_GET_STRING("stat_of"), 32);
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_21(390))), 32);
			}
			break;
	}
	CLEAR_STAT_MESSAGE();
	if (!Global_77928)
	{
		iVar21 = 0;
		switch (Global_55480[iParam016].f_96)
		{
			case 0x00000010:
			case 0x00000011:
			case 0x00000008:
			case 0x0000000C:
			case 0x00000009:
			case 0x0000000A:
			case 0x00000006:
				if (&bParam6)
				{
					fVar19 = fParam2;
					fVar20 = 0.0f;
				}
				else if (bParam1)
				{
					fVar19 = (Function_20(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_20(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_18(iParam0, fVar19, fVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_16(fVar19, fParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_13(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_201(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_13(int iParam0) //Position: 0x1749 / 5961
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_14(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x175A / 5978
{
	char* cVar0[32];
	
	if (&bParam3)
	{
		if (iParam1 < 0)
		{
			strcpy(&cVar0, "lvl_", 32);
			straddi(&cVar0, iParam0 + 1, 32);
			stradd(&cVar0, "_icon", 32);
			return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
		}
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_15(char* cParam0) //Position: 0x1851 / 6225
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_16(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x186C / 6252
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_17(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_215(Function_17(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

int Function_17(int iParam0, bool bParam1) //Position: 0x18D3 / 6355
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_18(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x18E5 / 6373
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
	if (Global_55480[iParam016].f_112 != 0.0f)
	{
		fVar0 = 100.0f;
	}
	else
	{
		fVar0 = Global_55480[iParam016].f_112;
	}
	fVar1 = Global_55480[iParam016].f_108;
	if (((Function_19(iParam0) != 19 || Function_19(iParam0) != 17) || Function_19(iParam0) != 10) || Function_19(iParam0) != 9)
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
		uParam3 = ROUND((fVar2 * 100.0f));
		uParam4 = ROUND((fVar3 * 100.0f));
	}
	else
	{
		uParam3 = ROUND(((fParam1 * 100.0f) / fVar0));
		uParam4 = ROUND(((fParam2 * 100.0f) / fVar0));
	}
}

int Function_19(int iParam0) //Position: 0x1A19 / 6681
{
	return Global_55480[iParam016].f_96;
}

float Function_20(int iParam0) //Position: 0x1A28 / 6696
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_21(int iParam0) //Position: 0x1A61 / 6753
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_22(int iParam0) //Position: 0x1A9E / 6814
{
	if (Global_55480[iParam016].f_112 == 0.0f)
	{
		if (Global_54086[iParam0] < Global_55480[iParam016].f_112)
		{
			PRINTSTRING("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMaxRange - ");
			PRINTSTRING(&(Global_55480[iParam016]));
			PRINTNL();
			LOG_WARNING("STAT_CHECK_RANGES: Attempting to increment a STAT out of its fMaxRange");
		}
	}
	if (Global_55480[iParam016].f_108 == 0.0f)
	{
		if (Global_54086[iParam0] > Global_55480[iParam016].f_108)
		{
			PRINTSTRING("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMinRange - ");
			PRINTSTRING(&(Global_55480[iParam016]));
			PRINTNL();
			LOG_ERROR("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMinRange");
		}
	}
	return;
}

int Function_23(int iParam0, float fParam1, bool bParam2) //Position: 0x1C38 / 7224
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	iVar1 = Global_55480[iParam016].f_100;
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
			Global_54086[iVar1] = (Global_54086[iVar1] + 1.0f);
		}
		else
		{
			Global_54086[iVar1] = (Global_54086[iVar1] + fParam1);
		}
	}
	else
	{
		Global_54086[iVar1] = fParam1;
	}
	if (Global_55480[iVar116].f_112 == 0.0f)
	{
		if (Global_54086[iVar1] < Global_55480[iVar116].f_112)
		{
			LOG_WARNING("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to increment a LifetimeStat out of its fMaxRange.");
			Global_54086[iVar1] = Global_55480[iVar116].f_112;
		}
	}
	if (Global_55480[iVar116].f_108 == 0.0f)
	{
		if (Global_54086[iVar1] > Global_55480[iVar116].f_108)
		{
			LOG_WARNING("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to decrement a LifetimeStat out of its fMinRange.");
			Global_54086[iVar1] = Global_55480[iVar116].f_108;
		}
	}
	return 1;
}

int Function_24(bool bParam0) //Position: 0x1E7C / 7804
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_25() //Position: 0x1EBD / 7869
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
		iVar2 = ((Function_24((50 + iVar3) + 15) + Function_24((183 + iVar3) + 15)) + Function_24((90 + iVar3) + 15));
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
	Function_11(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_26() //Position: 0x1F46 / 8006
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
			iVar2 = ((Function_24((50 + iVar3) + 8) + Function_24((183 + iVar3) + 8)) + Function_24((90 + iVar3) + 8));
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
	Function_11(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_27() //Position: 0x1FDD / 8157
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
		iVar2 = ((Function_24((50 + iVar3)) + Function_24((183 + iVar3))) + Function_24((90 + iVar3)));
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
	Function_11(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_28() //Position: 0x205C / 8284
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_29(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_11(8, (GET_DAY(0) - 2), 0);
	return;
}

int Function_29(int iParam0, float fParam1, int iParam2) //Position: 0x2099 / 8345
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_INCREASE_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (fParam1 > 0.0f)
	{
		LOG_ERROR("\STAT_INCREASE_NOW: fIncreaseValue < 0.0 - I am turning this into a positive number for you!");
		fParam1 = FABS(fParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] + fParam1);
	Function_23(iParam0, fParam1, 1);
	Function_22(iParam0);
	if (iParam2 && fParam1 == 0.0f)
	{
		Function_12(iParam0, 1, fParam1, 0, 1, 0x40400000, 0, 0);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= ROUND(fParam1))
		{
			ADD_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_30() //Position: 0x22A5 / 8869
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_41())
	{
		Function_37(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_37(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_31(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_31(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_64(StackVal, Var0))
	{
		Var0 = Global_54078;
		Var0.f_4 = (StackVal + 0,5f);
		FIND_GROUND_INTERSECTION(&Var0, 100.0f, &Global_53524, &uVar2);
	}
	else
	{
		Global_53524 = Var0;
	}
	Global_53524.f_208 = Global_53524.f_12;
	*(&Global_53524 + 196) = Global_53524;
	Global_53524.f_212 = Global_53524.f_16;
	Global_53524.f_28 = 0;
	Global_53524.f_36 = 0;
	Global_53524.f_40 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_140631 = 1;
	return;
}

struct<8> Function_31(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x235C / 9052
{
	int iVar0;
	
	iVar0 = Function_35(&uParam2, &uParam3);
	if (Function_34(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_33(&Global_99144, 1);
			Function_2(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_33(&Global_99144, 2);
			Function_2(&Global_99144, 1);
			if ((iVar0 != 13 || iVar0 != 14) || iVar0 != 4)
			{
				uParam1 = 0;
			}
			else
			{
				uParam1 = 1;
			}
		}
		if (iVar0 == 1)
		{
			uParam0 = 89,88f;
			return StackVal, Vector(-2158,348f, 19,944f, 2597,452f);
		}
		uParam0 = Global_26200[iVar014].f_12;
		return StackVal, Global_26200[iVar014];
	}
	if (Global_26651)
	{
		Function_33(&Global_99144, 2);
		Function_2(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_32();
	return StackVal, Function_32();
}

struct<8> Function_32() //Position: 0x2454 / 9300
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_33(var uParam0, int iParam1) //Position: 0x245E / 9310
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_34(int iParam0) //Position: 0x246F / 9327
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_35(bool bParam0, bool bParam1) //Position: 0x2485 / 9349
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = 4294967295;
	fVar1 = 1E+09.0f;
	iVar3 = 0;
	while (iVar3 <= Global_26200)
	{
		if (((Global_26200[iVar314].f_40 != 3 || Global_26200[iVar314].f_40 != 4) || (iVar3 != 15 && !&bParam0)) && (Global_26200[iVar314].f_52 != Global_43787 || bParam1))
		{
			if (Global_6606 || iVar3 == 6)
			{
				fVar2 = Function_36(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
				if (fVar2 > fVar1)
				{
					fVar1 = fVar2;
					iVar0 = iVar3;
				}
			}
		}
		iVar3++;
	}
	if (Global_26651)
	{
		fVar2 = Function_36(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_34(iVar0) && !&bParam1)
	{
		iVar0 = Function_35(&bParam0, 1);
	}
	return iVar0;
}

float Function_36(struct<2> Param0, struct<2> Param2) //Position: 0x2551 / 9553
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_37(float fParam0, int iParam1) //Position: 0x256E / 9582
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_40(&Global_54076, &Var3);
	if (!Function_38(Global_46760[0]))
	{
		Var5 = Vector(-2158,996f, 19,93287f, 2597,94f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_38(Global_46760[2]))
	{
		Var5 = Vector(-2424,093f, 26,36347f, 2122,362f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -130,87f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_38(Global_46760[1]))
	{
		Var5 = Vector(-3242,193f, 19,4623f, 2725,147f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_38(Global_46796[1]))
	{
		Var5 = Vector(-3658,131f, 42,81397f, 2092,973f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -135,09f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_38(Global_46796[3]))
	{
		Var5 = Vector(-4454,145f, 9,204829f, 3220,642f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 206,26f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_38(Global_46796[2]))
	{
		GET_VOLUME_CENTER(&Global_44085[Global_46796[2]9] + 8, &Var5);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 0.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_38(Global_46796[4]))
	{
		Var5 = Vector(-3669,226f, 8,477426f, 3491,648f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 106,17f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_38(Global_46816[0]))
	{
		Var5 = Vector(-821,1879f, 93,8091f, 2435,436f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 343,64f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_38(Global_46816[1]))
	{
		Var5 = Vector(124,6513f, 76,73672f, 2235,506f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 165,38f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_38(Global_46816[2]))
	{
		GET_VOLUME_CENTER(&Global_44085[Global_46816[2]9] + 8, &Var5);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 0.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_38(Global_46838[0]))
	{
		Var5 = Vector(-3195,612f, 41,29269f, 3752,929f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -97,3f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_38(Global_46850[0]))
	{
		Var5 = Vector(-4287,014f, 18,13315f, 4453,605f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -6,71f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_38(Global_46850[1]))
	{
		Var5 = Vector(-4708,083f, 3,172676f, 3968,105f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_38(Global_46850[2]))
	{
		Var5 = Vector(-3245,478f, 39,28797f, 4563,465f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_38(Global_46866[0]))
	{
		Var5 = Vector(-2687,509f, 31,4827f, 4295,249f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_38(Global_46866[1]))
	{
		Var5 = Vector(-1719,171f, 11,29226f, 4214,298f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -180.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_38(Global_46866[2]))
	{
		Var5 = Vector(-1462,607f, 16,54457f, 3952,801f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 22,55f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_38(Global_46894[2]))
	{
		Var5 = Vector(-819,4399f, 13,11084f, 3712,137f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -135.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_38(Global_46894[3]))
	{
		Var5 = Vector(343,2535f, 79,47575f, 3448,062f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -104,45f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_38(Global_46894[0]))
	{
		Var5 = Vector(-465,2258f, 20,61027f, 3913,855f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_38(Global_46914[0]))
	{
		Var5 = Vector(757,22f, 86,90343f, 1271,724f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 270.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_38(Global_46926[2]))
	{
		Var5 = Vector(-298,7082f, 84,35147f, 2134,708f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 59,3f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_38(Global_46926[1]))
	{
		Var5 = Vector(-448,9981f, 153,3878f, 1631,183f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 20,74f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_38(Global_46926[0]))
	{
		Var5 = Vector(-884,3423f, 202,5276f, 1006,602f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 94,65f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_38(Global_46838[1]))
	{
		Var5 = Vector(-2679,319f, 71,65485f, 3424,564f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -135.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_38(Global_46894[1]))
	{
		Var5 = Vector(-720,3301f, 67,5125f, 3293,269f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -39,9f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	Var5 = Vector(-63,861f, 116,861f, 1414,684f);
	bVar7 = VDIST(Var3, Var5);
	if (bVar7 > bVar0)
	{
		bVar0 = bVar7;
		Var1 = Var5;
	}
	Function_33(&Global_99144, 2);
	Function_2(&Global_99144, 1);
	iParam1 = 0;
	if (Function_64(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_38(int iParam0) //Position: 0x2D9A / 11674
{
	var uVar0;
	
	uVar0 = Global_43791[iParam0];
	return (((Function_39(uVar0, 0x1000000) || Function_39(uVar0, 0x2000000)) || Function_39(uVar0, 0x4000000)) || !Function_39(uVar0, 0x10000000));
}

bool Function_39(var uParam0, int iParam1) //Position: 0x2DD5 / 11733
{
	return (uParam0 && iParam1) == 0;
}

void Function_40(var uParam0, var uParam1) //Position: 0x2DE2 / 11746
{
	GET_POSITION(&uParam0, &uParam1);
	return;
}

bool Function_41() //Position: 0x2DF1 / 11761
{
	if (Function_39(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_42(var uParam0) //Position: 0x2E0C / 11788
{
	Global_39922.f_88 = (Global_39922.f_88 || uParam0);
	return;
}

void Function_43() //Position: 0x2E1F / 11807
{
	int iVar0;
	
	Global_41176 = Function_44(StackVal);
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (Global_41252[iVar011] != 0)
		{
			(*&Global_41176 + 4)[iVar0] = (*&Global_40060 + 68[iVar0181][35])[StackVal];
		}
		iVar0++;
	}
	return;
}

int Function_44(int iParam0) //Position: 0x2E6D / 11885
{
	if (!Function_45(iParam0))
	{
		return 0;
	}
	return Global_40060[iParam0];
}

bool Function_45(int iParam0) //Position: 0x2E85 / 11909
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_46() //Position: 0x2E9A / 11930
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 36)
	{
		(*&Global_40060 + 68[iVar0181][35])[0] = StackVal;
		iVar0++;
	}
	return;
}

void Function_47(var uParam0) //Position: 0x2EC7 / 11975
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && uParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_48() //Position: 0x2EE4 / 12004
{
	if (IS_DOOR_VALID(&uLocal_52))
	{
		CLOSE_DOOR_FAST(&uLocal_52);
	}
	return;
}

void Function_49(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10) //Position: 0x2EF9 / 12025
{
	var uVar0;
	
	bParam1 = &bParam1;
	if (&bParam6)
	{
		CAMERA_RESET(0);
	}
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		if (&bParam3)
		{
			SET_PLAYER_CONTROL(0, 1, 0, 0);
		}
		uVar0 = Function_199();
		if (IS_ACTOR_VALID(&uVar0))
		{
			if (&bParam2)
			{
				TASK_CLEAR(&uVar0);
			}
			if (!&bParam1)
			{
				if (HUD_IS_FADED())
				{
					RESET_ANIM_SET_FOR_ACTOR(&uVar0, 0);
				}
				else
				{
					RESET_ANIM_SET_FOR_ACTOR(&uVar0, 1);
				}
			}
			ACTOR_END_FORCE_HOLSTER(&uVar0);
			SET_ACTOR_INVULNERABILITY(&uVar0, 0);
			if (Global_53410[0])
			{
				Global_53410[0] = 0;
				UI_CHEAT_SET_VALUE(0, 0);
			}
		}
		Function_62(21, 1, 0, 0);
	}
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (&bParam7)
	{
		Function_52();
	}
	if (&bParam4)
	{
		ENABLE_USE_CONTEXTS(1);
	}
	if (&bParam8)
	{
		UI_POP("nCutscenes");
	}
	AUDIO_ENABLE_PLAYER_TAUNTS();
	Function_50(&iParam9, &iParam10);
}

void Function_50(var uParam0, bool bParam1) //Position: 0x2FC8 / 12232
{
	uParam0 = &uParam0;
	HUD_ENABLE(&uParam0);
	if (&bParam1)
	{
		HUD_CLEAR_SMALL_TEXT_QUEUE();
		PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	}
	SET_TIME_ACCELERATION(Global_99471);
	STREAMING_UNLOAD_SCENE();
	AI_STOP_IGNORING_ACTORS();
	if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol")))
	{
		DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol"));
	}
	if (!Global_6623)
	{
		Function_51();
	}
	ACTOR_DATA_GRAVITY_LIMIT(0);
	Global_99146 = 0;
	Global_99147 = 0;
	if (IS_VOLUME_VALID(&Global_99170))
	{
		if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&Global_99170))
		{
			REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Global_99170);
		}
		if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&Global_99170))
		{
			REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Global_99170);
		}
	}
	SET_TREE_COST_MODIFIER(1.0f);
	SET_USES_QUAD_IK_FIX(0);
	return;
}

void Function_51() //Position: 0x3097 / 12439
{
	int iVar0;
	
	iVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		if (GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(&Global_21369 + 72)) != &iVar0)
		{
			LOG_ERROR("PLAYERHORSE NOT IN PLAYER HORSE! WHY? FIXING");
			GIVE_OBJECT_TO_LAYOUT(&Global_21369 + 72, &iVar0);
		}
	}
	return;
}

void Function_52() //Position: 0x310F / 12559
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_53(int iParam0) //Position: 0x3124 / 12580
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_54(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_54(struct<2>[] Param0, int iParam1) //Position: 0x314C / 12620
{
	if (Function_56(&(Param0[iParam12]), 4))
	{
		if (Function_56(&(Param0[iParam12]), 1))
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
			Function_55(&(Param0[iParam12]), 1);
			Function_55(&(Param0[iParam12]), 2);
			Function_55(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_55(struct<13> Param0) //Position: 0x3297 / 12951
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_56(struct<13> Param0) //Position: 0x32B4 / 12980
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_57(int iParam0) //Position: 0x32D2 / 13010
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (7 - 1))
	{
		ACTOR_DISABLE_WEAPON_RENDER(&iParam0, iVar0, 0);
		iVar0++;
	}
	return;
}

void Function_58(bool bParam0) //Position: 0x32F8 / 13048
{
	if (iLocal_56 == Global_46816[0])
	{
		Function_59(&Global_13580[23] + 16, bParam0);
	}
	else if (iLocal_56 == Global_46850[0])
	{
		Function_59(&Global_14012[253] + 16, bParam0);
		Function_59(&Global_14012[263] + 16, bParam0);
	}
	else if (iLocal_56 == Global_46894[1])
	{
		Function_59(&Global_14762[103] + 16, bParam0);
	}
	return;
}

void Function_59(var uParam0, bool bParam1) //Position: 0x3360 / 13152
{
	int iVar0;
	
	if (IS_PERS_CHAR_VALID(&uParam0))
	{
		SET_PERS_CHAR_ENABLED(&uParam0, bParam1);
		if (bParam1)
		{
			if (!IS_PERS_CHAR_ALIVE(&uParam0))
			{
				REVIVE_PERS_CHAR(&uParam0, 0);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(&uParam0);
		}
		else
		{
			iVar0 = GET_ACTOR_FROM_PERS_CHAR(&uParam0);
			if (IS_ACTOR_VALID(&iVar0))
			{
				DESTROY_ACTOR(&iVar0);
			}
		}
	}
	return;
}

void Function_60(int iParam0) //Position: 0x33B0 / 13232
{
	char* cVar0[16];
	
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return;
	}
	strcpy(&cVar0, "tutorial", 16);
	Function_61(&cVar0, 1);
	if (DECOR_CHECK_EXIST(&iParam0, &cVar0))
	{
		DECOR_REMOVE(&iParam0, &cVar0);
	}
	strcpy(&cVar0, "tutorial", 16);
	Function_61(&cVar0, 2);
	if (DECOR_CHECK_EXIST(&iParam0, &cVar0))
	{
		DECOR_REMOVE(&iParam0, &cVar0);
	}
	strcpy(&cVar0, "tutorial", 16);
	Function_61(&cVar0, 3);
	if (DECOR_CHECK_EXIST(&iParam0, &cVar0))
	{
		DECOR_REMOVE(&iParam0, &cVar0);
	}
	strcpy(&cVar0, "tutorial", 16);
	Function_61(&cVar0, 4);
	if (DECOR_CHECK_EXIST(&iParam0, &cVar0))
	{
		DECOR_REMOVE(&iParam0, &cVar0);
	}
	return;
}

void Function_61(char* cParam0) //Position: 0x3471 / 13425
{
	if (iParam1 == 1)
	{
		return;
	}
	if (iParam1 == 2)
	{
		stradd(&cParam0, "2", 16);
	}
	if (iParam1 == 3)
	{
		stradd(&cParam0, "3", 16);
	}
	if (iParam1 == 4)
	{
		stradd(&cParam0, "4", 16);
	}
	return;
}

int Function_62(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x34AB / 13483
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_INCREASE_INT_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_INT_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: iIncreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] + TO_FLOAT(bParam1));
	Function_23(iParam0, TO_FLOAT(bParam1), 1);
	Function_22(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_12(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			ADD_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076, 0);
			iVar1++;
		}
	}
	Function_63(iParam0);
	return 1;
}

void Function_63(int iParam0) //Position: 0x36D3 / 14035
{
	switch (iParam0)
	{
		case 0x00000009:
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x000001C9:
		case 0x000001CA:
		case 0x0000016B:
		case 0x0000016C:
		case 0x0000016D:
		case 0x000001D5:
		case 0x00000190:
		case 0x0000019A:
		case 0x000001DA:
		case 0x000001DB:
		case 0x000001DC:
		case 0x00000197:
		case 0x000001D4:
		case 0x00000199:
		case 0x00000291:
		case 0x00000292:
		case 0x00000293:
		case 0x00000290:
			Global_6662 = 1;
			break;
	}
	return;
}

bool Function_64(vector3 vParam0) //Position: 0x3771 / 14193
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

int Function_65() //Position: 0x3789 / 14217
{
	int iVar0;
	
	Function_77(&Global_39906, Function_100(), 4294967294, 0, 0, 1);
	if (Global_39906.f_24 == 4294967295)
	{
		return 0;
	}
	*(&iVar0 + 28) = 1;
	Function_32();
	Function_32();
	if (Function_72(StackVal, StackVal, 128, 1, GET_ASSET_ID("$/content/Ambient/PointOfInterest/event_bountyhunter", 4), Function_32(), Function_32(), 0, 0, 0, Global_39906.f_24, 0, 0, 0, &iVar0, 1, 1, 0x40a00000, 4294967295, 0, 0))
	{
		Function_71(1);
		Function_66(Global_40060.f_4424, 0);
	}
	else
	{
		LOG_ERROR("Problem setting bounty hunter beat from jail");
		return 0;
	}
	return 1;
}

void Function_66(int iParam0, bool bParam1) //Position: 0x385A / 14426
{
	int iVar0;
	
	if (&bParam1)
	{
		if (IS_EARLIER_THAN(&Global_39922 + 148[iParam0], 0))
		{
			iVar0 = RAND_INT_RANGE(60, 180);
		}
		else
		{
			return;
		}
	}
	iVar0 = RAND_INT_RANGE(1800, 2400);
	if (Function_70() > 3)
	{
		iVar0 *= 2;
	}
	if (0 && !&bParam1)
	{
		Function_68(iParam0, 0, 0, 300, 0);
	}
	else
	{
		Function_68(iParam0, 0, 0, Function_67(iVar0), 0);
	}
	return;
}

var Function_67(int iParam0) //Position: 0x38C2 / 14530
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_68(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4) //Position: 0x38D9 / 14553
{
	var uVar0;
	
	uVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&uVar0, &uParam1, &uParam2, &uParam3, &iParam4);
	if (IS_EARLIER_THAN(&Global_39922 + 148[iParam0], &uVar0) || Function_69(&Global_39922 + 148[iParam0]))
	{
		*(&Global_39922 + 148[iParam0]) = &uVar0;
	}
}

var Function_69(bool bParam0) //Position: 0x3929 / 14633
{
	return (((GET_DAY(&bParam0) != 0 && GET_HOUR(&bParam0) != 0) && GET_MINUTE(&bParam0) != 0) && GET_SECOND(&bParam0) != 1);
}

int Function_70() //Position: 0x3952 / 14674
{
	return Global_21369.f_248;
}

void Function_71(bool bParam0) //Position: 0x395D / 14685
{
	if (bParam0 == 1)
	{
		Function_33(&Global_39906 + 8, 1);
	}
	else
	{
		Function_2(&Global_39906 + 8, 1);
	}
	return;
}

bool Function_72(int iParam0, var uParam1, var uParam2, struct<2> Param3, struct<2> Param5, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20) //Position: 0x397E / 14718
{
	int iVar0;
	
	uParam11 = uParam11;
	uParam12 = uParam12;
	uParam13 = uParam13;
	iVar0 = 0;
	while (iVar0 <= Global_38380)
	{
		if (Global_38380[iVar036] != iParam0 || iParam0 != 4096)
		{
			if (Function_76(&(Global_38380[iVar036]), 4))
			{
				if (!IS_SCRIPT_VALID(&Global_38380[iVar036] + 48))
				{
					Global_38380[iVar036].f_4 = uParam7;
					Global_38380[iVar036].f_88 = &uParam19;
					Global_38380[iVar036].f_104 = &uParam20;
					Global_38380[iVar036].f_84 = &uParam17;
					Global_38380[iVar036].f_92 = &uParam18;
					Global_38380[iVar036].f_12 = 4294967295;
					*(&Global_38380[iVar036] + 16) = &uParam2;
					*(&Global_38380[iVar036] + 24) = Param3;
					*(&Global_38380[iVar036] + 36) = Param5;
					*(&Global_38380[iVar036] + 72) = &uParam8;
					Global_38380[iVar036].f_56 = uParam10;
					*(&Global_38380[iVar036] + 64) = &uParam9;
					Global_38380[iVar036].f_96 = &uParam15;
					Global_38380[iVar036].f_100 = &uParam16;
					Global_38380[iVar036].f_108 = 0.0f;
					Function_75(&uParam14, &Global_38380[iVar036] + 112);
					Global_38380[iVar036].f_112 = uParam1;
					Function_74(&(Global_38380[iVar036]), 1);
					Function_73(&(Global_38380[iVar036]), 4);
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_73(vector3 vParam0) //Position: 0x3ACC / 15052
{
	int iVar0;
	
	iVar0 = (vParam0.z && iParam1);
	vParam0.f_8 = (vParam0.z - iVar0);
	return;
}

void Function_74(vector3 vParam0) //Position: 0x3AE9 / 15081
{
	vParam0.f_8 = (vParam0.z || iParam1);
	return;
}

void Function_75(struct<157> Param0) //Position: 0x3AFC / 15100
{
	Param1 = Param0;
	Param1.f_24 = Param0.f_24;
	*(&Param1 + 28) = &Param0 + 28;
	Param1.f_4 = StackVal;
	Param1.f_8 = StackVal;
	*(&Param1 + 36) = { StackVal, *(&Param0 + 36) };
	(&Param1 + 36)->f_16 = (&Param0 + 36)->f_16;
	(&Param1 + 36)->f_20 = (&Param0 + 36)->f_20;
	(&Param1 + 36)->f_24 = (&Param0 + 36)->f_24;
	(&Param1 + 36)->f_28 = (&Param0 + 36)->f_28;
	Param1.f_68 = Param0.f_68;
	(&Param1 + 68)->f_4 = StackVal;
	(&Param1 + 68)->f_8 = StackVal;
	Param1.f_84 = Param0.f_84;
	(&Param1 + 84)->f_4 = StackVal;
	(&Param1 + 84)->f_8 = StackVal;
	(&Param1 + 84)->f_12 = (&Param0 + 84)->f_12;
	(&Param1 + 84)->f_16 = (&Param0 + 84)->f_16;
	(&Param1 + 84)->f_20 = (&Param0 + 84)->f_20;
	(&Param1 + 84)->f_24 = (&Param0 + 84)->f_24;
	(&Param1 + 84)->f_32 = (&Param0 + 84)->f_32;
	(&Param1 + 84)->f_36 = (&Param0 + 84)->f_36;
	(&Param1 + 84)->f_40 = (&Param0 + 84)->f_40;
	(&Param1 + 84)->f_44 = (&Param0 + 84)->f_44;
	(&Param1 + 84)->f_52 = (&Param0 + 84)->f_52;
	(&Param1 + 84)->f_48 = (&Param0 + 84)->f_48;
	(&Param1 + 84)->f_56 = (&Param0 + 84)->f_56;
	(&Param1 + 84)->f_28 = (&Param0 + 84)->f_28;
	Param1.f_148 = Param0.f_148;
	(&Param1 + 148)->f_4 = StackVal;
	Param1.f_156 = Param0.f_156;
	(&Param1 + 156)->f_4 = StackVal;
	(&Param1 + 156)->f_8 = StackVal;
	return;
}

bool Function_76(vector3 vParam0) //Position: 0x3CAC / 15532
{
	int iVar0;
	
	iVar0 = (vParam0.z && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_77(struct<25> Param0) //Position: 0x3CCA / 15562
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
	Param0.f_16 = Function_98(&iParam1);
	if (&iParam3 == 0)
	{
		iParam3 = 0;
	}
	if (&iParam1 == 4294967295)
	{
		iParam1 = Function_100();
	}
	if (&iParam4 > 0 || &iParam4 < 8)
	{
		iParam4 = 0;
	}
	Global_39906.f_12 = &iParam1;
	iVar1 = 0;
	while (iVar1 < (45 - 1))
	{
		if (Function_97(&Var96, iVar1) == 1)
		{
			if (Function_95(Var96.f_24) == Global_46722[Global_43787])
			{
				if (Var96.f_32 == &iParam3)
				{
					if (((&iParam1 != 4294967295 || &iParam1 <= Var96.f_12) || (&iParam1 != 0 && Var96.f_12 != 3)) || (&iParam1 != 0 && Var96.f_12 != 4))
					{
						if (&iParam4 != 0 || &iParam4 != Function_94(Var96.f_20))
						{
							iVar4[iVar2] = iVar1;
							iVar2++;
							if (&iParam5 == 1)
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
		if (Function_97(&Param0, iVar1))
		{
			PRINTSTRING("BOUNTYHUNTER_FILL_DATA_BY_DIFFICULTY found actor");
			PRINTSTRING("With ActorEnum: ");
			PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(Param0.f_20));
			PRINTNL();
			Param0.f_24 = Function_78(&Param0, &iParam4, 80, 20000, Param0.f_12);
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
	if (&iParam2 != 4294967294)
	{
		Param0.f_24 = &iParam2;
	}
	return iVar0;
}

var Function_78(struct<25> Param0) //Position: 0x3F4F / 16207
{
	var uVar0;
	var uVar1;
	
	uVar0 = Param0.f_24;
	uParam3 = &uParam3;
	uParam2 = &uParam2;
	if (StackVal || Param0.f_24 != 4294967295 != 1)
	{
		uVar1 = Function_79(uVar0, 80.0f, 20000.0f, &uParam1, 1, &uParam4);
	}
	else if (StackVal != 6)
	{
		LOG_ERROR("Unhandled Bounty Hunter Landmark type");
	}
	else
	{
		uVar1 = Param0.f_24;
	}
	return uVar1;
}

var Function_79(int iParam0, float fParam1, float fParam2, int iParam3, int iParam4, int iParam5) //Position: 0x3FE5 / 16357
{
	int iVar0;
	int iVar1[146];
	int iVar148[146];
	int iVar295;
	struct<2> Var296;
	struct<2> Var298;
	bool bVar300;
	bool bVar301;
	bool bVar302[146];
	bool bVar449[146];
	int iVar596;
	int iVar597;
	int iVar598;
	bool bVar599;
	bool bVar600;
	int iVar601;
	struct<8> Var602;
	
	iVar0 = 4294967295;
	bVar301 = 1,001638E+07.0f;
	bVar599 = false;
	bVar600 = false;
	iVar601 = 0;
	iVar596 = 0;
	while (iVar596 < 145)
	{
		iVar1[iVar596] = 4294967295;
		iVar148[iVar596] = 4294967295;
		iVar596++;
	}
	if (!Function_92(iParam0))
	{
		iParam0 = Global_43788;
	}
	iVar295 = Function_95(iParam0);
	PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - Checking Regions for a bountyhunter landmark: ");
	PRINTNL();
	GET_POSITION(GET_PLAYER_ACTOR(0), &Var298);
	iVar596 = 0;
	while (iVar596 < 145)
	{
		Function_91(&Global_44085[iVar5969] + 8);
		Var296 = Function_91(&Global_44085[iVar5969] + 8);
		bVar300 = VDIST(Var298, Var296);
		if (&iParam3 == 0)
		{
			iParam3 = 0;
		}
		if (((StackVal && !(IS_VOLUME_VALID(&Global_44085[iVar5969] + 8) && (iVar295 != Function_95(Global_44085[iVar5969]) || iParam0 != 4294967295)) != 1) && Function_90(&(Global_43791[iVar596]), 8192)) && iVar596 == 0)
		{
			if (iVar596 == 146)
			{
				LOG_ERROR("The bountyhunter region count is screwy. Tell Ben.");
				return 4294967294;
			}
			if (bVar300 > bVar301)
			{
				bVar301 = bVar300;
				iVar598 = iVar596;
			}
			if (bVar300 < &fParam1 && bVar300 > &fParam2)
			{
				iVar1[bVar599] = iVar596;
				bVar302[bVar599] = bVar300;
				bVar599++;
				if (Function_83(Function_85(iVar596, 0, 2)) == 0)
				{
					PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - This location is NOT FINISHED.");
					PRINTNL();
					iVar148[bVar600] = iVar596;
					bVar449[bVar600] = bVar300;
					bVar600++;
				}
				else
				{
					PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - This location is FINISHED. ");
					PRINTNL();
				}
			}
		}
		if (bVar599 == iVar1)
		{
			iVar596 = 146;
			LOG_ERROR("Reached regCount max? Tell Ben.");
		}
		iVar596++;
	}
	if (&iParam5 != 4294967295)
	{
		Function_82(&iVar1, &bVar302, bVar599);
		Function_82(&iVar148, &bVar449, bVar600);
	}
	if (bVar600 < 0 && &iParam4 != 1)
	{
		switch (&iParam5)
		{
			case 0x00000001:
			case 0x00000002:
				iVar601 = Function_17(3, bVar600);
				break;
			
			case 0x00000000:
			case 0x00000003:
				iVar601 = Function_17(5, bVar600);
				break;
			
			case 0x00000004:
				iVar601 = Function_17(7, bVar600);
				break;
			
			case 0x00000005:
				iVar601 = Function_17(10, bVar600);
				break;
			
			case 0xFFFFFFFF:
			default:
				iVar601 = Function_17(5, bVar600);
		}
		RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
		iVar597 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 99.0f)) % iVar601);
		iVar0 = iVar148[iVar597];
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
		Var602 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_80(iVar0) };
		PRINTSTRING(&Var602);
		PRINTSTRING(" with a distance of ");
		Function_91(&Global_44085[iVar09] + 8);
		Var296 = Function_91(&Global_44085[iVar09] + 8);
		bVar300 = VDIST(Var298, Var296);
		PRINTFLOAT(bVar300);
		PRINTNL();
	}
	else if (bVar599 >= 0)
	{
		switch (&iParam5)
		{
			case 0x00000001:
			case 0x00000002:
				iVar601 = Function_17(3, bVar599);
				break;
			
			case 0x00000000:
			case 0x00000003:
				iVar601 = Function_17(5, bVar599);
				break;
			
			case 0x00000004:
				iVar601 = Function_17(7, bVar599);
				break;
			
			case 0x00000005:
			case 0x00000006:
				iVar601 = Function_17(10, bVar599);
				break;
			
			case 0xFFFFFFFF:
			default:
				iVar601 = Function_17(5, bVar599);
		}
		RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
		iVar597 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 99.0f)) % iVar601);
		iVar0 = iVar1[iVar597];
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
		Var602 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_80(iVar0) };
		PRINTSTRING(&Var602);
		PRINTSTRING(" with a distance of ");
		Function_91(&Global_44085[iVar09] + 8);
		Var296 = Function_91(&Global_44085[iVar09] + 8);
		bVar300 = VDIST(Var298, Var296);
		PRINTFLOAT(bVar300);
		PRINTNL();
	}
	else
	{
		LOG_ERROR("No valid landmark picked");
		PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK found no valid landmarks");
		PRINTNL();
		return iVar598;
	}
	return iVar0;
}

struct<32> Function_80(int iParam0) //Position: 0x4699 / 18073
{
	char* cVar0[32];
	
	strcpy(&cVar0, "INVALID REGION", 32);
	if (!Function_92(iParam0))
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	if (IS_VOLUME_VALID(&Global_44085[iParam09] + 8))
	{
		strcpy(&cVar0, GET_OBJECT_NAME(&Global_44085[iParam09] + 8), 32);
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	switch (StackVal)
	{
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
			memcpy(&cVar0, &Global_44085[iParam09] + 32, 8);
			stradd(&cVar0, "v_region", 32);
			break;
		
		default:
			if (IS_VOLUME_VALID(&Global_44085[iParam09] + 8))
			{
				strcpy(&cVar0, GET_OBJECT_NAME(&Global_44085[iParam09] + 8), 32);
			}
			break;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_81() //Position: 0x475B / 18267
{
	if (Global_43787 == 0)
	{
		return Global_46760[6];
	}
	if (Global_43787 == 1)
	{
		return Global_46866[3];
	}
	return Global_46926[5];
}

void Function_82(int[] iParam0, bool[] bParam1, int iParam2) //Position: 0x4789 / 18313
{
	int iVar0;
	int iVar1;
	var uVar2;
	float fVar3;
	int iVar4;
	
	iVar0 = 1;
	while (iVar0 < (iParam2 - 1))
	{
		fVar3 = bParam1[iVar0];
		uVar2 = iParam0[iVar0];
		iVar1 = (iVar0 - 1);
		iVar4 = 0;
		while (iVar4 == 0)
		{
			if (bParam1[iVar1] < fVar3)
			{
				bParam1[iVar1 + 1] = bParam1[iVar1];
				iParam0[iVar1 + 1] = iParam0[iVar1];
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
		iParam0[iVar1 + 1] = uVar2;
		bParam1[iVar1 + 1] = fVar3;
		iVar0++;
	}
	return;
}

int Function_83(int iParam0) //Position: 0x4820 / 18464
{
	if (!Function_84(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_12;
}

bool Function_84(int iParam0) //Position: 0x483A / 18490
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_85(bool bParam0, bool bParam1, bool bParam2) //Position: 0x4851 / 18513
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_89(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_86(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_86(bParam0, bParam1, bParam2, 4294967295);
}

int Function_86(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x48AF / 18607
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
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_87(uVar0);
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

var Function_87(int iParam0) //Position: 0x4A13 / 18963
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

bool Function_88(int iParam0) //Position: 0x4A51 / 19025
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_89(int iParam0, int iParam1, int iParam2) //Position: 0x4A66 / 19046
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

int Function_90(var uParam0, int iParam1) //Position: 0x4A86 / 19078
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

struct<8> Function_91(int iParam0) //Position: 0x4AA3 / 19107
{
	struct<2> Var0;
	
	GET_VOLUME_CENTER(&iParam0, &Var0);
	return StackVal, Var0;
}

bool Function_92(int iParam0) //Position: 0x4AB5 / 19125
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

bool Function_93(bool bParam0) //Position: 0x4ACB / 19147
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	bVar0 = true;
	if (bParam0 <= 32)
	{
		bVar1 = SHIFT_LEFT(bVar0, bParam0);
		if ((Global_39906 && bVar1) >= 0)
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

int Function_94(int iParam0) //Position: 0x4B1D / 19229
{
	int iVar0;
	int iVar1;
	
	iVar0 = GET_ACTOR_ENUM_FACTION(iParam0);
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

int Function_95(int iParam0) //Position: 0x4BCC / 19404
{
	return Function_96(iParam0);
}

int Function_96(int iParam0) //Position: 0x4BD7 / 19415
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
			iVar0 = Global_44085[iParam09];
		}
		else
		{
			iVar0 = Global_44085[iParam09];
			iVar0 = Global_44085[iVar09];
		}
	}
	return iVar0;
}

bool Function_97(struct<41> Param0) //Position: 0x4C2F / 19503
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam1)
	{
		case 0x00000000:
			Param0.f_12 = 3;
			Param0.f_20 = 415;
			Param0.f_24 = Global_46722[2];
			Param0.f_32 = 0;
			Param0.f_40 = 26;
			break;
		
		case 0x00000001:
			Param0.f_12 = 3;
			Param0.f_20 = 416;
			Param0.f_24 = Global_46722[2];
			Param0.f_32 = 0;
			Param0.f_40 = 27;
			break;
		
		case 0x00000002:
			Param0.f_12 = 5;
			Param0.f_20 = 422;
			Param0.f_24 = Global_46722[2];
			Param0.f_32 = 0;
			Param0.f_40 = 28;
			break;
		
		case 0x00000003:
			Param0.f_12 = 5;
			Param0.f_20 = 423;
			Param0.f_24 = Global_46722[2];
			Param0.f_32 = 0;
			Param0.f_40 = 29;
			break;
		
		case 0x00000004:
			Param0.f_12 = 4;
			Param0.f_20 = 418;
			Param0.f_24 = Global_46722[2];
			Param0.f_32 = 0;
			Param0.f_40 = 30;
			break;
		
		case 0x00000005:
			Param0.f_12 = 4;
			Param0.f_20 = 419;
			Param0.f_24 = Global_46722[2];
			Param0.f_32 = 0;
			Param0.f_40 = 31;
			break;
		
		case 0x00000006:
			Param0.f_12 = 2;
			Param0.f_20 = 397;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 12;
			break;
		
		case 0x00000007:
			Param0.f_12 = 4;
			Param0.f_20 = 398;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 32;
			break;
		
		case 0x00000008:
			Param0.f_12 = 5;
			Param0.f_20 = 403;
			Param0.f_24 = Global_46722[2];
			Param0.f_32 = 0;
			Param0.f_40 = 33;
			break;
		
		case 0x00000009:
			Param0.f_12 = 5;
			Param0.f_20 = 404;
			Param0.f_24 = Global_46722[2];
			Param0.f_32 = 0;
			Param0.f_40 = 34;
			break;
		
		case 0x0000000A:
			Param0.f_12 = 4;
			Param0.f_20 = 400;
			Param0.f_24 = Global_46722[2];
			Param0.f_32 = 0;
			Param0.f_40 = 35;
			break;
		
		case 0x0000000B:
			Param0.f_12 = 5;
			Param0.f_20 = 401;
			Param0.f_24 = Global_46722[2];
			Param0.f_32 = 0;
			Param0.f_40 = 36;
			break;
		
		case 0x0000000C:
			Param0.f_12 = 2;
			Param0.f_20 = 496;
			Param0.f_24 = Global_46722[1];
			Param0.f_32 = 0;
			Param0.f_40 = 13;
			break;
		
		case 0x0000000D:
			Param0.f_12 = 2;
			Param0.f_20 = 497;
			Param0.f_24 = Global_46722[1];
			Param0.f_32 = 0;
			Param0.f_40 = 14;
			break;
		
		case 0x0000000E:
			Param0.f_12 = 4;
			Param0.f_20 = 502;
			Param0.f_24 = Global_46722[1];
			Param0.f_32 = 0;
			Param0.f_40 = 17;
			break;
		
		case 0x0000000F:
			Param0.f_12 = 4;
			Param0.f_20 = 503;
			Param0.f_24 = Global_46722[1];
			Param0.f_32 = 0;
			Param0.f_40 = 5;
			break;
		
		case 0x00000010:
			Param0.f_12 = 3;
			Param0.f_20 = 499;
			Param0.f_24 = Global_46722[1];
			Param0.f_32 = 0;
			Param0.f_40 = 18;
			break;
		
		case 0x00000011:
			Param0.f_12 = 3;
			Param0.f_20 = 500;
			Param0.f_24 = Global_46722[1];
			Param0.f_32 = 0;
			Param0.f_40 = 19;
			break;
		
		case 0x00000012:
			Param0.f_12 = 1;
			Param0.f_20 = 477;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 1;
			break;
		
		case 0x00000013:
			Param0.f_12 = 1;
			Param0.f_20 = 478;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 42;
			break;
		
		case 0x00000014:
			Param0.f_12 = 3;
			Param0.f_20 = 483;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 41;
			break;
		
		case 0x00000015:
			Param0.f_12 = 3;
			Param0.f_20 = 484;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 2;
			break;
		
		case 0x00000016:
			Param0.f_12 = 2;
			Param0.f_20 = 480;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 3;
			break;
		
		case 0x00000017:
			Param0.f_12 = 2;
			Param0.f_20 = 481;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 4;
			break;
		
		case 0x00000018:
			Param0.f_12 = 1;
			Param0.f_20 = 505;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 43;
			break;
		
		case 0x00000019:
			Param0.f_12 = 1;
			Param0.f_20 = 506;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 44;
			break;
		
		case 0x0000001A:
			Param0.f_12 = 3;
			Param0.f_20 = 513;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 15;
			break;
		
		case 0x0000001B:
			Param0.f_12 = 3;
			Param0.f_20 = 514;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 6;
			break;
		
		case 0x0000001C:
			Param0.f_12 = 2;
			Param0.f_20 = 508;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 16;
			break;
		
		case 0x0000001D:
			Param0.f_12 = 2;
			Param0.f_20 = 509;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 7;
			break;
		
		case 0x0000001E:
			Param0.f_12 = 1;
			Param0.f_20 = 486;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 45;
			break;
		
		case 0x0000001F:
			Param0.f_12 = 1;
			Param0.f_20 = 487;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 46;
			break;
		
		case 0x00000020:
			Param0.f_12 = 3;
			Param0.f_20 = 492;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 8;
			break;
		
		case 0x00000021:
			Param0.f_12 = 3;
			Param0.f_20 = 493;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 9;
			break;
		
		case 0x00000022:
			Param0.f_12 = 2;
			Param0.f_20 = 489;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 10;
			break;
		
		case 0x00000023:
			Param0.f_12 = 2;
			Param0.f_20 = 490;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 11;
			break;
		
		case 0x00000024:
			Param0.f_12 = 3;
			Param0.f_20 = 467;
			Param0.f_24 = Global_46722[2];
			Param0.f_32 = 0;
			Param0.f_40 = 47;
			break;
		
		case 0x00000025:
			Param0.f_12 = 3;
			Param0.f_20 = 468;
			Param0.f_24 = Global_46722[2];
			Param0.f_32 = 0;
			Param0.f_40 = 48;
			break;
		
		case 0x00000026:
			Param0.f_12 = 2;
			Param0.f_20 = 406;
			Param0.f_24 = Global_46722[1];
			Param0.f_32 = 0;
			Param0.f_40 = 20;
			break;
		
		case 0x00000027:
			Param0.f_12 = 3;
			Param0.f_20 = 407;
			Param0.f_24 = Global_46722[1];
			Param0.f_32 = 0;
			Param0.f_40 = 21;
			break;
		
		case 0x00000028:
			Param0.f_12 = 4;
			Param0.f_20 = 412;
			Param0.f_24 = Global_46722[1];
			Param0.f_32 = 0;
			Param0.f_40 = 22;
			break;
		
		case 0x00000029:
			Param0.f_12 = 4;
			Param0.f_20 = 413;
			Param0.f_24 = Global_46722[1];
			Param0.f_32 = 0;
			Param0.f_40 = 23;
			break;
		
		case 0x0000002A:
			Param0.f_12 = 3;
			Param0.f_20 = 410;
			Param0.f_24 = Global_46722[1];
			Param0.f_32 = 0;
			Param0.f_40 = 24;
			break;
		
		case 0x0000002B:
			Param0.f_12 = 3;
			Param0.f_20 = 411;
			Param0.f_24 = Global_46722[1];
			Param0.f_32 = 0;
			Param0.f_40 = 25;
			break;
		
		case 0x0000002C:
			Param0.f_12 = 2;
			Param0.f_20 = 787;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 60;
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

var Function_98(int iParam0) //Position: 0x5483 / 21635
{
	int iVar0;
	
	switch (&iParam0)
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

bool Function_99() //Position: 0x5552 / 21842
{
	return Function_39(StackVal, 1);
}

var Function_100() //Position: 0x5561 / 21857
{
	int iVar0;
	
	iVar0 = Function_101(0);
	return iVar0;
}

var Function_101(int iParam0) //Position: 0x556F / 21871
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = (Function_24(358) + Function_24(359));
	if (&iParam0 == 1)
	{
		iVar2 = Function_17(iVar1, 7);
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
		if (Global_43787 == 0)
		{
			iVar0 = iVar0;
		}
		else if (Global_43787 == 1)
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

int Function_102(int iParam0) //Position: 0x55F4 / 22004
{
	int iVar0;
	int iVar1;
	
	iVar0 = 250;
	switch (iParam0)
	{
		case 0x00000000:
			Function_188("UPDATE_JAIL_CUTSCENE: JAIL_INIT_JAIL", 11);
			Function_187("law_submit_cutscene", 5.0f, 0, 2, 1, 0);
			iParam0 = 1;
			if (bLocal_118)
			{
				Function_185();
				Function_184();
				if (((iLocal_56 != Global_46760[0] || iLocal_56 != Global_46866[0]) || iLocal_56 != Global_46816[0]) || iLocal_56 != Global_46914[0])
				{
					Function_183(fLocal_130);
				}
			}
			else if (iLocal_56 == Global_46894[1])
			{
				Function_185();
				Function_184();
			}
			TELEPORT_ACTOR(Function_199(), &Local_17, 1, 1, 0);
			Function_58(0);
			iVar0 = 250;
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && Function_190(&iLocal_67))
			{
				UNK_0x0920DB21(1);
				Function_179(1, 0, 0, 0, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
				UI_PUSH("CutsceneWithMessages");
				bLocal_138 = true;
				if (iLocal_56 == Global_46760[0])
				{
					uLocal_57 = Function_175(&uLocal_54, 0, 1, 0, 0);
				}
				else if (iLocal_56 == Global_46816[0])
				{
					uLocal_57 = Function_171(&uLocal_54, 0, 1, 0, 0);
				}
				else if (iLocal_56 == Global_46850[0])
				{
					uLocal_57 = Function_167(&uLocal_54, 0, 1, 0, 0);
				}
				else if (iLocal_56 == Global_46866[0])
				{
					uLocal_57 = Function_163(&uLocal_54, 0, 1, 0, 0);
				}
				else if (iLocal_56 == Global_46894[1])
				{
					uLocal_57 = Function_159(&uLocal_54, 0, 1, 0, 0);
				}
				else if (iLocal_56 == Global_46914[0])
				{
					uLocal_57 = Function_155(&uLocal_54, 0, 1, 0, 0);
				}
				SET_ACTOR_HEADING(StackVal, Function_199(), 1);
				iParam0 = 2;
				SET_ACTOR_TO_SEAT(Function_199(), 0.0f);
				switch (bLocal_104)
				{
					case 0x00000000:
						SET_ANIM_SET_FOR_ACTOR(Function_199(), "sit_bed", 0);
						uLocal_105 = "sit_bed/idle";
						break;
					
					case 0x00000001:
						SET_ANIM_SET_FOR_ACTOR(Function_199(), "Marston_Prison_idle_01", 0);
						uLocal_105 = "Marston_Prison_idle_01/Idle01";
						break;
					
					case 0x00000002:
						SET_ANIM_SET_FOR_ACTOR(Function_199(), "Marston_Prison_idle_01", 0);
						uLocal_105 = "Marston_Prison_idle_01/Idle02";
						break;
				}
				SET_ACTION_NODE_FOR_ACTOR(Function_199(), &uLocal_105);
				iVar0 = 0;
			}
			break;
		
		case 0x00000002:
			Function_188("UPDATE_JAIL_CUTSCENE: JAIL_RUN_JAIL", 11);
			PLAY_CUTSCENEOBJECT(&uLocal_57, false, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
			TASK_STAND_STILL(Function_199(), -1.0f, 0, 0);
			Function_154(&bLocal_107);
			SET_TIME_ACCELERATION(8640.0f);
			Global_6652 = 1;
			WAIT(false);
			if (HUD_IS_FADED() && !HUD_IS_FADING())
			{
				if (!IS_GAME_RESETTING())
				{
					HUD_FADE_IN_NOW(0.0f, 1065353216);
				}
			}
			iParam0 = 3;
		
		case 0x00000003:
			if (!iLocal_137)
			{
				STREAMING_RELEASE_MAIN_POI();
				iLocal_137 = 1;
			}
			if (!HUD_IS_FADED())
			{
				Function_150();
			}
			if (VDIST(Global_54078, Local_17) < 5.0f)
			{
				LOG_ERROR("Why is player not at the jail??");
			}
			else if (VDIST(Global_54078, Local_17) < 1.0f)
			{
			}
			if (!bLocal_116)
			{
				if ((UNK_0xDA674AE0("@UI.ACCEPT", 1, 0) && Function_146(&bLocal_107, 2.0f)) && iParam0 == 15)
				{
					bLocal_116 = true;
					HUD_FADE_OUT(1.0f, 1f, 1);
				}
			}
			if (!IS_ACTION_NODE_PLAYING(&Global_54076, &uLocal_105) || (bLocal_116 && HUD_IS_FADED()))
			{
				if (!IS_ACTION_NODE_PLAYING(&Global_54076, "sit_bed/released_from_prison"))
				{
					RESET_ANIM_SET_FOR_ACTOR(Function_199(), 0);
					SET_ANIM_SET_FOR_ACTOR(Function_199(), "sit_bed", 0);
					SET_ACTION_NODE_FOR_ACTOR(Function_199(), "sit_bed/released_from_prison");
				}
				if (bLocal_116)
				{
					if (!IS_GAME_RESETTING())
					{
						HUD_FADE_IN_NOW(1.0f, 1065353216);
					}
				}
				SET_TIME_ACCELERATION(Global_99471);
				Global_6652 = 0;
				Function_188("UPDATE_JAIL_CUTSCENE: JAIL_CLEANUP_JAIL", 11);
				Function_144(&bLocal_107);
				DESTROY_OBJECT(&uLocal_57);
				DESTROY_OBJECT(&uLocal_59);
				if (iLocal_56 == Global_46760[0])
				{
					uLocal_59 = Function_139(&uLocal_54, 0, 0, 0, 0);
				}
				else if (iLocal_56 == Global_46816[0])
				{
					uLocal_59 = Function_134(&uLocal_54, 0, 0, 0, 0);
				}
				else if (iLocal_56 == Global_46850[0])
				{
					uLocal_59 = Function_129(&uLocal_54, 0, 1, 0, 0);
				}
				else if (iLocal_56 == Global_46866[0])
				{
					uLocal_59 = Function_124(&uLocal_54, 0, 1, 0, 0);
				}
				else if (iLocal_56 == Global_46894[1])
				{
					uLocal_59 = Function_119(&uLocal_54, 0, 1, 0, 0);
				}
				else if (iLocal_56 == Global_46914[0])
				{
					uLocal_59 = Function_114(&uLocal_54, 0, 1, 0, 0);
				}
				if (bLocal_111)
				{
					Function_112("community_service_1", 0x41200000, 1, 0, 2, 1, 0);
				}
				iParam0 = 15;
				iVar0 = 0;
			}
			iVar0 = 0;
			break;
		
		case 0x0000000F:
			if (!iLocal_112)
			{
				if (!iLocal_113)
				{
					if (Function_146(&bLocal_107, 2,5f))
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(0,5f, 1f, 1);
						}
						iLocal_113 = 1;
					}
				}
				else if (HUD_IS_FADED() && !IS_ACTION_NODE_PLAYING(&Global_54076, "sit_bed/released_from_prison"))
				{
					iLocal_112 = 1;
				}
			}
			else if (!iLocal_114)
			{
				CLEAR_AMBIENT_OBJECTS_SPHERE(Local_26, 15.0f, 15);
				Function_107();
				if (!IS_GAME_RESETTING())
				{
					HUD_FADE_IN_NOW(0,5f, 1065353216);
				}
				SET_DAY((iLocal_124 + bLocal_16));
				SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(10, 0, 0));
				iVar1 = (iLocal_125 - 10);
				Function_105((bLocal_16 * 24 - iVar1));
				RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
				if (bLocal_118)
				{
					if (iLocal_56 == Global_46760[0])
					{
						Local_23 = Vector(-2086,76f, 16,96f, 2603,85f);
					}
					else if (iLocal_56 == Global_46866[0])
					{
						Local_23 = Vector(-2661,58f, 31,39f, 4255,59f);
					}
					else if (iLocal_56 == Global_46816[0])
					{
						Local_23 = Vector(-823,85f, 93,78f, 2428,42f);
					}
					else if (iLocal_56 == Global_46914[0])
					{
						Local_23 = Vector(763,83f, 79,45f, 1235,2f);
					}
					if (IS_ACTOR_VALID(&uLocal_65))
					{
						if (iLocal_56 == Global_46760[0])
						{
							TELEPORT_ACTOR_WITH_HEADING(StackVal, &uLocal_65, Vector(-2085,44f, 16,96f, 2603,18f), 116,28f, 1, 1, 1);
						}
						else if (iLocal_56 == Global_46914[0])
						{
							TELEPORT_ACTOR_WITH_HEADING(StackVal, &uLocal_65, Vector(764,55f, 79,45f, 1235,2f), 90.0f, 1, 1, 1);
						}
						ACTOR_RESET_ANIMS(&uLocal_65, 1);
						RESET_ANIM_SET_FOR_ACTOR(&uLocal_65, 0);
						TASK_STAND_STILL(&uLocal_65, -1.0f, 0, 0);
						if (iLocal_56 == Global_46914[0])
						{
							SET_ACTOR_HEADING(&uLocal_65, 90.0f, 1);
						}
						else if (iLocal_56 == Global_46760[0])
						{
							SET_ACTOR_HEADING(&uLocal_65, 116,28f, 1);
						}
					}
				}
				else if (iLocal_56 == Global_46894[1])
				{
					Local_23 = Vector(-718,18f, 63,26f, 3288,94f);
				}
				RESET_ANIM_SET_FOR_ACTOR(Function_199(), 0);
				TASK_CLEAR(Function_199());
				TELEPORT_ACTOR(Function_199(), &Local_23, 1, 1, 0);
				SET_ACTOR_TO_SEAT(Function_199(), 1.0f);
				if (iLocal_56 == Global_46760[0])
				{
					SET_ACTOR_HEADING(Function_199(), 116,28f, 1);
				}
				else if (iLocal_56 == Global_46816[0])
				{
					SET_ACTOR_HEADING(Function_199(), -13,71f, 1);
				}
				else if (iLocal_56 == Global_46850[0])
				{
					SET_ACTOR_HEADING(Function_199(), -179,38f, 1);
				}
				else if (iLocal_56 == Global_46866[0])
				{
					SET_ACTOR_HEADING(Function_199(), 81,35f, 1);
				}
				else if (iLocal_56 == Global_46894[1])
				{
					SET_ACTOR_HEADING(Function_199(), 52,74f, 1);
				}
				else if (iLocal_56 == Global_46914[0])
				{
					SET_ACTOR_HEADING(Function_199(), 90.0f, 1);
				}
				Function_57(Function_199());
				Function_197(3, 1);
				EQUIP_ACCESSORY(&Global_54076, 0, 1);
				if (bLocal_123)
				{
					EQUIP_ACCESSORY(&Global_54076, 1, 1);
				}
				Function_197(4, 1);
				if (!bLocal_118)
				{
					TASK_GO_NEAR_COORD(Function_199(), &Local_26, 1.0f, 1);
				}
				else
				{
					SET_ANIM_SET_FOR_ACTOR(Function_199(), "jail_release", 0);
					SET_ACTION_NODE_FOR_ACTOR(Function_199(), "jail_release/Marston");
					SET_LINKED_ANIM_TARGET(&uLocal_65, Function_199());
					SET_ANIM_SET_FOR_ACTOR(&uLocal_65, "jail_release", 0);
					SET_ACTION_NODE_FOR_ACTOR(&uLocal_65, "jail_release/Guard");
					if (iLocal_56 == Global_46760[0])
					{
						fLocal_126 = (GET_CURRENT_GAME_TIME() + 2,1f);
						fLocal_127 = (GET_CURRENT_GAME_TIME() + 7,94f);
						fLocal_132 = 130.0f;
						fLocal_133 = 80.0f;
					}
					else if (iLocal_56 == Global_46914[0])
					{
						fLocal_126 = (GET_CURRENT_GAME_TIME() + 2,23f);
						fLocal_127 = (GET_CURRENT_GAME_TIME() + 7,88f);
						fLocal_132 = 120.0f;
						fLocal_133 = 90.0f;
					}
					else
					{
						fLocal_126 = (GET_CURRENT_GAME_TIME() + 2,18f);
						fLocal_127 = (GET_CURRENT_GAME_TIME() + 8,1f);
						fLocal_132 = 120.0f;
						fLocal_133 = 94.0f;
					}
					if (iLocal_56 == Global_46816[0])
					{
						fLocal_131 = (GET_CURRENT_GAME_TIME() + 7.0f);
					}
					else if (iLocal_56 == Global_46914[0])
					{
						fLocal_131 = (GET_CURRENT_GAME_TIME() + 6.0f);
					}
				}
				iLocal_114 = 1;
			}
			else
			{
				if (bLocal_118)
				{
					Function_104();
					if (!iLocal_122)
					{
						if (iLocal_56 != Global_46816[0] || iLocal_56 != Global_46914[0])
						{
							if (GET_CURRENT_GAME_TIME() <= fLocal_131)
							{
								Function_103(Function_199());
								SET_OBJECT_POSITION_ON_GROUND(GET_OBJECT_FROM_ACTOR(Function_199()), Function_103(Function_199()));
								iLocal_122 = 1;
							}
						}
					}
				}
				if (!IS_OBJECT_VALID(&uLocal_59))
				{
					UI_POP("CutsceneWithMessages");
					Function_49(1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1);
					UNK_0x0920DB21(0);
					bLocal_138 = false;
					DESTROY_OBJECT(&uLocal_57);
					DESTROY_OBJECT(&uLocal_59);
					iParam0 = 16;
				}
			}
			iVar0 = 0;
			break;
		
		case 0x00000010:
			Function_188("UPDATE_JAIL_CUTSCENE: JAIL_CLEANUP_LEAVE_JAIL", 11);
			iLocal_14 = 3;
			iParam0 = 17;
			iVar0 = 0;
		
		case 0x00000011:
			break;
	}
	return iVar0;
}

struct<8> Function_103(var uParam0) //Position: 0x607E / 24702
{
	struct<2> Var0;
	
	GET_POSITION(&uParam0, &Var0);
	return StackVal, Var0;
}

void Function_104() //Position: 0x6090 / 24720
{
	float fVar0;
	
	if (IS_OBJECT_VALID(&iLocal_48))
	{
		if (fLocal_128 < 0.0f)
		{
			fVar0 = (GET_CURRENT_GAME_TIME() - fLocal_128);
			if (!bLocal_119)
			{
				if (GET_CURRENT_GAME_TIME() <= fLocal_126)
				{
					Local_134.f_4 = (StackVal - (fVar0 * fLocal_132));
					if (StackVal >= fLocal_129)
					{
						Local_134.f_4 = fLocal_129;
						bLocal_119 = true;
					}
				}
			}
			if (!iLocal_120)
			{
				if (bLocal_119)
				{
					if (GET_CURRENT_GAME_TIME() <= fLocal_127)
					{
						Local_134.f_4 = (StackVal + (fVar0 * fLocal_133));
						if (StackVal <= fLocal_130)
						{
							Local_134.f_4 = fLocal_130;
							iLocal_120 = 1;
						}
					}
				}
			}
			SET_OBJECT_ORIENTATION(&iLocal_48, Local_134);
			fLocal_128 = GET_CURRENT_GAME_TIME();
		}
		else
		{
			fLocal_128 = GET_CURRENT_GAME_TIME();
		}
	}
	return;
}

void Function_105(int iParam0) //Position: 0x612B / 24875
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
		if (Global_47151[16])
		{
			PRINTNL();
			PRINTNL();
			PRINTSTRING("CUR time of day delay: ");
			Function_106(&(Global_26652[iVar04]));
		}
		if (GET_DAY(&(Global_26652[iVar04])) == 0)
		{
			iVar2 = 1;
		}
		ADD_TIME(&(Global_26652[iVar04]), iVar2, &iParam0, false, 0);
		*(&Global_27462[iVar052] + 376) = &Global_26652[iVar04];
		if (Global_47151[16])
		{
			PRINTNL();
			PRINTSTRING("NEW time of day delay: ");
			Function_106(&(Global_26652[iVar04]));
		}
		iVar0++;
	}
	return;
}

void Function_106(var uParam0) //Position: 0x61F1 / 25073
{
	PRINTSTRING("Day ");
	PRINTINT(GET_DAY(&uParam0));
	PRINTSTRING(": ");
	PRINTINT(GET_HOUR(&uParam0));
	PRINTSTRING(":");
	PRINTINT(GET_MINUTE(&uParam0));
	PRINTSTRING(":");
	PRINTINT(GET_SECOND(&uParam0));
	return;
}

void Function_107() //Position: 0x623B / 25147
{
	bool bVar0;
	struct<2> Var1;
	float fVar3;
	
	bVar0 = false;
	if (iLocal_56 == Global_46760[0])
	{
		Var1 = Vector(-2086,58f, 16,96f, 2601,84f);
		fVar3 = 141.0f;
		bVar0 = true;
	}
	else if (iLocal_56 == Global_46816[0])
	{
		Var1 = Vector(-827,34f, 93,81f, 2429,02f);
		fVar3 = -54.0f;
		bVar0 = true;
	}
	else if (iLocal_56 == Global_46914[0])
	{
		Var1 = Vector(764,55f, 79,45f, 1235,2f);
		fVar3 = 90.0f;
		bVar0 = true;
	}
	else if (iLocal_56 == Global_46866[0])
	{
		Var1 = Vector(-2661,3f, 31,39f, 4255,57f);
		fVar3 = 82,88f;
		bVar0 = true;
	}
	if (bVar0)
	{
		uLocal_65 = Function_111(StackVal, Var1);
		if (IS_ACTOR_VALID(&uLocal_65))
		{
			if (Function_109(StackVal, &uLocal_65, Var1) <= 5.0f)
			{
				if (!bLocal_118)
				{
					TELEPORT_ACTOR(&uLocal_65, &Var1, 1, 0, 1);
					SET_ACTOR_HEADING(&uLocal_65, fVar3, 1);
					TASK_STAND_STILL(&uLocal_65, 15.0f, 0, 0);
				}
			}
		}
		else
		{
			uLocal_65 = CREATE_ACTOR_IN_LAYOUT(StackVal, &uLocal_54, Function_201(), bLocal_103, Var1, Vector(0.0f, 0.0f, 0.0f));
			if (IS_ACTOR_VALID(&uLocal_65))
			{
				bLocal_121 = true;
				SET_ACTOR_HEADING(&uLocal_65, fVar3, 1);
				Function_108(&uLocal_65, 0);
				SET_ACTOR_UPDATE_PRIORITY(&uLocal_65, false);
				if (!bLocal_118)
				{
					TASK_STAND_STILL(&uLocal_65, 15.0f, 0, 0);
				}
			}
		}
		if (IS_ACTOR_VALID(&uLocal_65))
		{
			Function_103(&uLocal_65);
			Function_32();
			iLocal_50 = CREATE_PROP_IN_LAYOUT(&uLocal_54, Function_201(), "revolver_cattleman01x", Function_103(&uLocal_65), Function_32(), 0);
			ATTACH_OBJECTS(StackVal, StackVal, &iLocal_50, GET_OBJECT_FROM_ACTOR(&uLocal_65), "wrist_l_attachment", Vector(0,03f, -0,1275f, -0,031f), Vector(-90.0f, 0.0f, 0.0f), 4294967295);
		}
	}
	return;
}

int Function_108(int iParam0, int iParam1) //Position: 0x63FD / 25597
{
	var uVar0;
	var uVar1;
	
	if (!IS_OBJECTSET_VALID(&uVar0))
	{
		uVar1 = CREATE_OBJECT_ITERATOR(&Global_39918);
		ITERATE_EVERYWHERE(&uVar1);
		ITERATE_ON_OBJECT_TYPE(&uVar1, 2);
		ITERATE_ON_PARTIAL_NAME(&uVar1, "nSharedLaw");
		uVar0 = GET_OBJECTSET_FROM_OBJECT(START_OBJECT_ITERATOR(&uVar1));
		DESTROY_ITERATOR(&uVar1);
	}
	else
	{
		uVar0 = &iParam1;
	}
	if (!IS_OBJECTSET_VALID(&uVar0))
	{
		return 0;
	}
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return 0;
	}
	if (IS_OBJECT_IN_OBJECTSET(&iParam0, &uVar0))
	{
		return 0;
	}
	ADD_OBJECT_TO_OBJECTSET(&iParam0, &uVar0);
	CLEAN_OBJECTSET(&uVar0);
	return 1;
}

float Function_109(var uParam0, struct<2> Param1) //Position: 0x6488 / 25736
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_110(&uParam0);
		Var0 = Function_110(&uParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

struct<8> Function_110(int iParam0) //Position: 0x64FF / 25855
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		GET_POSITION(&iParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID actor. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

var Function_111(struct<2> Param0) //Position: 0x656B / 25963
{
	bool bVar0;
	struct<2> Var1;
	bool bVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	var uVar7;
	
	bVar3 = 1E+08.0f;
	if (IS_OBJECTSET_VALID(&Global_98981))
	{
		bVar0 = false;
		while (bVar0 <= GET_OBJECTSET_SIZE(&Global_98981))
		{
			uVar5 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &Global_98981);
			GET_OBJECT_POSITION(&uVar5, &Var1);
			if (VDIST(Param0, Var1) > bVar3)
			{
				bVar3 = VDIST(Param0, Var1);
				uVar4 = &uVar5;
			}
			bVar0++;
		}
	}
	if (GET_OBJECT_TYPE(&uVar4) == 15)
	{
		iVar6 = GET_ACTOR_FROM_OBJECT(&uVar4);
		if (IS_ACTOR_VALID(&iVar6))
		{
			REFERENCE_ACTOR(&iVar6);
			TASK_CLEAR(&iVar6);
			TASK_OVERRIDE_CLEAR_MOVETYPE(&iVar6);
		}
	}
	else if (GET_OBJECT_TYPE(&uVar4) == 24)
	{
		uVar7 = GET_PERS_CHAR_FROM_OBJECT(&uVar4);
		ACTIVATE_ACTOR_FOR_PERS_CHAR(&uVar7);
		iVar6 = GET_ACTOR_FROM_PERS_CHAR(&uVar7);
		if (IS_ACTOR_VALID(&iVar6))
		{
			REFERENCE_ACTOR(&iVar6);
			TASK_CLEAR(&iVar6);
			TASK_OVERRIDE_CLEAR_MOVETYPE(&iVar6);
		}
	}
	if (IS_ACTOR_VALID(&iVar6))
	{
		DECOR_SET_BOOL(&iVar6, "nsharedlaw", 1);
	}
	return &iVar6;
}

void Function_112(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x6667 / 26215
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_113(Global_10966) };
		}
		PRINT_HELP_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5, &Var0, &uParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5, &uVar4, &uParam6);
	}
}

struct<16> Function_113(int iParam0) //Position: 0x66F2 / 26354
{
	char* cVar0[16];
	
	if (!Function_41())
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

var Function_114(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x6731 / 26417
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_201(), 3, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "blk_jail_exit", 3, 1);
	}
	Function_115(&uVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_115(int iParam0) //Position: 0x67B8 / 26552
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_118(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_117(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 2);
	Function_116(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 0, 3,5f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 1, 2, 10,5f, 1, 0);
	return;
}

void Function_116(int iParam0) //Position: 0x6816 / 26646
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 24,6192f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(759,774f, 80,95641f, 1233,783f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-3,251785f, -132,8951f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_117(int iParam0) //Position: 0x688B / 26763
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 24,6192f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(758,674f, 80,95641f, 1233,603f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,2817846f, -128,8447f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_118(int iParam0) //Position: 0x6900 / 26880
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 35,0001f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(770,9526f, 83,39214f, 1241,146f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,982271f, -2,661452f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

var Function_119(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x6975 / 26997
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_201(), 3, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "fod_jail_exit", 3, 1);
	}
	Function_120(&uVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_120(int iParam0) //Position: 0x69FC / 27132
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_123(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_122(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 2);
	Function_121(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 0, 3,5f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 1, 2, 9.0f, 1, 0);
	return;
}

void Function_121(int iParam0) //Position: 0x6A5A / 27226
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 41,27919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-724,032f, 64,42379f, 3283,254f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,0546288f, -2,575407f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_122(int iParam0) //Position: 0x6ACF / 27343
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 41,27919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-721,9219f, 64,42379f, 3282,354f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,2185152f, -2,976659f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_123(int iParam0) //Position: 0x6B44 / 27460
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-722,1326f, 64,73214f, 3300,116f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,055013f, 0,441531f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

var Function_124(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x6BB9 / 27577
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_201(), 3, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "chu_jail_exit", 3, 1);
	}
	Function_125(&uVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_125(int iParam0) //Position: 0x6C40 / 27712
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_128(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_127(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 2);
	Function_126(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 0, 3,5f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 1, 2, 11,5f, 1, 0);
	return;
}

void Function_126(int iParam0) //Position: 0x6C9E / 27806
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 26,53919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2671,777f, 32,76976f, 4259,368f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,066497f, -0,322885f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_127(int iParam0) //Position: 0x6D13 / 27923
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 26,53919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2673,607f, 32,76976f, 4259,228f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,0305432f, -1,121723f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_128(int iParam0) //Position: 0x6D88 / 28040
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 30,0092f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2652,903f, 31,63214f, 4248,676f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,149575f, -1,176352f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

var Function_129(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x6DFD / 28157
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_201(), 3, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "esc_jail_exit", 3, 1);
	}
	Function_130(&uVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_130(int iParam0) //Position: 0x6E84 / 28292
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_133(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_132(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 2);
	Function_131(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 0, 3,5f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 1, 2, 6,5f, 1, 0);
	return;
}

void Function_131(int iParam0) //Position: 0x6EE2 / 28386
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 44,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-4340,766f, 31,25712f, 4383,407f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,00139626f, 0,9880309f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_132(int iParam0) //Position: 0x6F57 / 28503
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 44,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-4340,576f, 31,90712f, 4383,337f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,2864085f, 0,8600982f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_133(int iParam0) //Position: 0x6FCC / 28620
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 30.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-4359,153f, 33,24214f, 4380,416f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-24,78057f, -134,246f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

var Function_134(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x7041 / 28737
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_201(), 3, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "JailLeavingMac", 3, 1);
	}
	Function_135(&uVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_135(int iParam0) //Position: 0x70C9 / 28873
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_138(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_137(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 2);
	Function_136(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 0, 3,5f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 1, 2, 9,5f, 1, 0);
	return;
}

void Function_136(int iParam0) //Position: 0x7127 / 28967
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 41,38f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-823,9387f, 95,26263f, 2423,118f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,111352f, -1,53013f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_137(int iParam0) //Position: 0x719C / 29084
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 41,38f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-824,7288f, 95,30263f, 2423,748f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,03159f, -2,273989f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_138(int iParam0) //Position: 0x7211 / 29201
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 33.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-822,071f, 94,35816f, 2434,316f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,102343f, -2,472404f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

var Function_139(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x7286 / 29318
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_201(), 3, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "JailLeavingArm", 3, 1);
	}
	Function_140(&uVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_140(int iParam0) //Position: 0x730E / 29454
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_143(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_142(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 2);
	Function_141(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 0, 3,5f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 1, 2, 11,5f, 1, 0);
	return;
}

void Function_141(int iParam0) //Position: 0x736C / 29548
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 41,38f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2091,688f, 18,28384f, 2608,718f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,05777f, -0,3771656f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_142(int iParam0) //Position: 0x73E1 / 29665
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 41,38f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2090,198f, 18,29384f, 2609,338f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,05777f, -0,184481f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_143(int iParam0) //Position: 0x7456 / 29782
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 26.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2088,679f, 18,43556f, 2602,515f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,092153f, -1,852318f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_144(int iParam0) //Position: 0x74CB / 29899
{
	Function_145(&iParam0, 0.0f);
	return;
}

void Function_145(vector3 vParam0) //Position: 0x74D8 / 29912
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_33(&vParam0, 1);
	Function_2(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

bool Function_146(bool bParam0, float fParam1) //Position: 0x74FD / 29949
{
	if (Function_149(&bParam0))
	{
		if (Function_147(&bParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_147(vector3 vParam0) //Position: 0x751B / 29979
{
	if (Function_149(&vParam0))
	{
		if (Function_148(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_148(int iParam0) //Position: 0x75E8 / 30184
{
	return Function_39(iParam0, 2);
}

bool Function_149(bool bParam0) //Position: 0x75F6 / 30198
{
	return Function_39(bParam0, 1);
}

void Function_150() //Position: 0x7604 / 30212
{
	bool bVar0;
	char* cVar1[64];
	
	if (!bLocal_115)
	{
		if ((fLocal_139 + 2.0f) > GET_CURRENT_GAME_TIME() && !HUD_IS_FADED())
		{
			bVar0 = false;
			while (!bVar0 && !bLocal_115)
			{
				iLocal_140++;
				if (iLocal_140 != 0)
				{
					if ((*&Global_40060 + 68[Global_43787181][Function_153(iLocal_140)5])[3] >= 0)
					{
						bVar0 = true;
					}
				}
				if (iLocal_140 > 35)
				{
					bLocal_115 = true;
				}
			}
			if (!bLocal_115)
			{
				strcpy(&cVar1, "law_crime_rapsheet_multi", 64);
				if ((*&Global_40060 + 68[Global_43787181][Function_153(iLocal_140)5])[3] == 1)
				{
					strcpy(&cVar1, "law_crime_rapsheet_single", 64);
				}
				PRINT_BIG_FORMAT(2.0f, &cVar1, Function_151((*&Global_40060 + 68[Global_43787181][Function_153(iLocal_140)5])[3]), &Global_41252[Function_153(iLocal_140)11] + 4, 0, 0, 2, 0);
				fLocal_139 = GET_CURRENT_GAME_TIME();
			}
		}
	}
	return;
}

var Function_151(bool bParam0) //Position: 0x76F0 / 30448
{
	bool bVar0;
	
	bVar0 = Function_152();
	UI_SET_STRING(&bVar0, I2STR(bParam0));
	return &bVar0;
}

var Function_152() //Position: 0x770A / 30474
{
	Global_10990 = (Global_10990 + 1 % 10);
	switch (Global_10990)
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

int Function_153(int iParam0) //Position: 0x77C6 / 30662
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

void Function_154(int iParam0) //Position: 0x797C / 31100
{
	if (!Function_149(&iParam0))
	{
		Function_145(&iParam0, 0.0f);
	}
	return;
}

var Function_155(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x7993 / 31123
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_201(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "blk_jail", 2, 1);
	}
	Function_156(&uVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_156(int iParam0) //Position: 0x7A15 / 31253
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_158(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_157(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 0, 1, 23.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 60.0f, 1);
	return;
}

void Function_157(int iParam0) //Position: 0x7A63 / 31331
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 22.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(771,0601f, 80,5f, 1232,41f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,019548f, -3,064449f, 0.0f), 1);
	return;
}

void Function_158(int iParam0) //Position: 0x7AC9 / 31433
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 22.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(771,84f, 80,61f, 1238,88f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,008377f, -3,10337f, 0.0f), 1);
	return;
}

var Function_159(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x7B2F / 31535
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_201(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "fod_jail", 2, 1);
	}
	Function_160(&uVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_160(int iParam0) //Position: 0x7BB1 / 31665
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_162(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_161(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 0, 1, 23.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 60.0f, 1);
	return;
}

void Function_161(int iParam0) //Position: 0x7BFF / 31743
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 36.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-725,51f, 64,25f, 3296,49f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,14251f, -2,504373f, 0.0f), 1);
	return;
}

void Function_162(int iParam0) //Position: 0x7C65 / 31845
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 36.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-726,24f, 64,2f, 3296,77f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,170241f, -2,076593f, 0.0f), 1);
	return;
}

var Function_163(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x7CCB / 31947
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_201(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "chu_jail", 2, 1);
	}
	Function_164(&uVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_164(int iParam0) //Position: 0x7D4D / 32077
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_166(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_165(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 0, 1, 23.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 60.0f, 1);
	return;
}

void Function_165(int iParam0) //Position: 0x7D9B / 32155
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 22.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2650,84f, 31,81f, 4253,959f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,042062f, -0,349066f, 0.0f), 1);
	return;
}

void Function_166(int iParam0) //Position: 0x7E01 / 32257
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 22.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2653,83f, 31,81f, 4253,71f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,037175f, -0,691499f, 0.0f), 1);
	return;
}

var Function_167(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x7E67 / 32359
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_201(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "esc_jail", 2, 1);
	}
	Function_168(&uVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_168(int iParam0) //Position: 0x7EE9 / 32489
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_170(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_169(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 0, 1, 23.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 60.0f, 1);
	return;
}

void Function_169(int iParam0) //Position: 0x7F37 / 32567
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 40.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-4355,88f, 31,166f, 4383,21f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(2,99f, -144,18f, 0.0f), 0);
	return;
}

void Function_170(int iParam0) //Position: 0x7F9D / 32669
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 40.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-4354,43f, 31,17534f, 4383,22f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,009774f, 2,701421f, 0.0f), 1);
	return;
}

var Function_171(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x8004 / 32772
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_201(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "jailsittingmac", 2, 1);
	}
	Function_172(&uVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_172(int iParam0) //Position: 0x808C / 32908
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_174(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_173(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 0, 1, 23.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 60.0f, 1);
	return;
}

void Function_173(int iParam0) //Position: 0x80DA / 32986
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 26.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-819,5601f, 94,95f, 2434,78f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,0090757f, -3,06951f, 0.0f), 1);
	return;
}

void Function_174(int iParam0) //Position: 0x8140 / 33088
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 26.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-821,32f, 94,95f, 2435,85f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,008552f, -1,999972f, 0.0f), 1);
	return;
}

var Function_175(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x81A6 / 33190
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_201(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "jailsittingarm", 2, 1);
	}
	Function_176(&uVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_176(int iParam0) //Position: 0x822E / 33326
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_178(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_177(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 0, 1, 23.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 60.0f, 1);
	return;
}

void Function_177(int iParam0) //Position: 0x827C / 33404
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 18.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2082,94f, 16,92f, 2599,576f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,19617f, -2,5864f, 0.0f), 1);
	return;
}

void Function_178(float fParam0) //Position: 0x82E2 / 33506
{
	SET_CAMERASHOT_PERSPECTIVE(&fParam0, 1);
	SET_CAMERASHOT_FOV(&fParam0, 18.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&fParam0, 0,15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&fParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&fParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &fParam0, Vector(-2084,46f, 16,95f, 2601,42f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &fParam0, Vector(0,203854f, -1,967684f, 0.0f), 1);
	return;
}

void Function_179(bool bParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, var uParam7, bool bParam8, bool bParam9, var uParam10, bool bParam11, var uParam12, var uParam13) //Position: 0x8348 / 33608
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	uParam1 = &uParam1;
	if (&bParam6)
	{
		UI_PUSH("nCutscenes");
	}
	HUD_CLEAR_HELP();
	UI_DUMP_MESSAGE_QUEUE_TO_NOTES(1);
	HUD_ENABLE(0);
	Function_52();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(&Global_54076, "iDrunk", false);
	if (&bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		uVar1 = Function_199();
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (GET_WEAPON_IN_HAND(&uVar1) != 4294967295)
			{
				Global_119938 = 1;
			}
			else
			{
				Global_119938 = 0;
			}
			if (&bParam3)
			{
				TASK_CLEAR(&uVar1);
			}
			if (&bParam11)
			{
				uVar2 = GET_ATTACHED_HOGTIE_VICTIM(&uVar1);
				if (IS_ACTOR_VALID(&uVar2))
				{
					FREE_FROM_HOGTIE(&uVar2);
					HOGTIE_ACTOR(&uVar2);
				}
			}
			if (bParam0)
			{
				ACTOR_START_FORCE_HOLSTER(&uVar1, 0, 0);
			}
			if (&bParam2)
			{
				SET_PLAYER_POSTURE(0, 0, 0);
				TASK_OVERRIDE_SET_POSTURE(&uVar1, 0);
			}
			SET_ACTOR_HEALTH(&uVar1, GET_ACTOR_MAX_HEALTH(&uVar1));
			SET_ACTOR_INVULNERABILITY(&uVar1, 1);
			AI_IGNORE_ACTOR(&uVar1);
		}
		SET_PLAYER_CONTROL(0, 0, 0, 0);
		if (IS_PLAYER_DEADEYE(0))
		{
			CANCEL_DEADEYE();
			CANCEL_TIME_WARP(1);
		}
		if (&bParam8)
		{
			if (IS_VOLUME_VALID(&uParam7))
			{
				FIRE_STOP_FLAMES_IN_VOLUME(&uParam7);
				DELETE_PROJECTILES_IN_VOLUME(&uParam7);
			}
			else
			{
				FIRE_STOP_ALL_FIRES();
				Function_103(&uVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_201(), 2,802597E-45f, Function_103(&uVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
				DELETE_PROJECTILES_IN_VOLUME(&uVar0);
			}
		}
		Function_62(19, 1, 0, 0);
	}
	SET_TIME_ACCELERATION(0.0f);
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(1);
	}
	if (&bParam4)
	{
		ENABLE_USE_CONTEXTS(0);
	}
	AI_GLOBAL_CLEAR_ALL_DANGER();
	if (uParam10 && !Function_41())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_182()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_182()));
		DECOR_SET_BOOL(&Global_54076, "nquitBinos", 1);
		UNK_0xE6C1DBD9(0);
		SET_DRAW_ACTOR(&Global_54076, 1);
		SHOW_PHYSINST(GET_PHYSINST_FROM_ACTOR(&Global_54076));
		if (UI_ISACTIVE("BinocularsUI"))
		{
			UI_POP("BinocularsUI");
		}
	}
	ACTOR_DATA_GRAVITY_LIMIT(1);
	ENABLE_PIP(0, 0, 1);
	Global_99146 = 1;
	Global_99168 = GET_THIS_SCRIPT_ID();
	Global_99170 = "";
	if (IS_VOLUME_VALID(&uVar0))
	{
		DESTROY_VOLUME(&uVar0);
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
	SET_TREE_COST_MODIFIER(&uParam12);
	SET_USES_QUAD_IK_FIX(&uParam13);
}

void Function_180(int iParam0) //Position: 0x85FA / 34298
{
	int iVar0;
	
	if (Function_39(iParam0, 1) && Function_39(Global_39556, 1))
	{
	}
	iVar0 = (Global_39556 && iParam0);
	Global_39556 = (Global_39556 - iVar0);
	Global_39556 |= 1073741824;
	return;
}

bool Function_181(int iParam0) //Position: 0x862E / 34350
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_182() //Position: 0x864A / 34378
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	uVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_LAYOUTREF_VALID(&uVar0))
	{
		uVar1 = CREATE_OBJECT_ITERATOR(&uVar0);
		iVar2 = START_OBJECT_ITERATOR(&uVar1);
		ITERATE_ON_OBJECT_TYPE(&uVar1, 42);
		if (IS_OBJECT_VALID(&iVar2))
		{
			while (IS_OBJECT_VALID(&iVar2))
			{
				PRINTSTRING(GET_OBJECT_NAME(&iVar2));
				PRINTNL();
				if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(&iVar2), "bino_camera"))
				{
					return &iVar2;
				}
				iVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
			}
		}
		DESTROY_ITERATOR(&uVar1);
	}
	return "";
}

void Function_183(var uParam0) //Position: 0x86D8 / 34520
{
	Local_134 = Vector(180.0f, uParam0, 180.0f);
	SET_OBJECT_ORIENTATION(&iLocal_48, Local_134);
	return;
}

void Function_184() //Position: 0x86F9 / 34553
{
	var uVar0;
	
	if (IS_DOOR_VALID(&uLocal_52))
	{
		OPEN_DOOR_FAST(&uLocal_52, &uVar0);
	}
	return;
}

void Function_185() //Position: 0x8710 / 34576
{
	struct<2> Var0;
	var uVar2;
	
	if (iLocal_56 == Global_46760[0])
	{
		Var0 = Vector(-2088,95f, 17,6f, 2604,89f);
		fLocal_129 = -35,514f;
		fLocal_130 = 65,689f;
	}
	else if (iLocal_56 == Global_46894[1])
	{
		Var0 = Vector(-719,22f, 63,37f, 3286,4f);
	}
	else if (iLocal_56 == Global_46866[0])
	{
		Var0 = Vector(-2664,54f, 31,5f, 4255,69f);
		fLocal_129 = 0.0f;
		fLocal_130 = 89.0f;
	}
	else if (iLocal_56 == Global_46816[0])
	{
		Var0 = Vector(-823,34f, 93,83f, 2425,55f);
		fLocal_129 = -265.0f;
		fLocal_130 = -170.0f;
	}
	else if (iLocal_56 == Global_46914[0])
	{
		Var0 = Vector(760,95f, 79,52f, 1235,95f);
		fLocal_129 = 0.0f;
		fLocal_130 = 89.0f;
	}
	uVar2 = CREATE_OBJECT_ITERATOR(GET_AMBIENT_LAYOUT());
	ITERATE_ON_OBJECT_TYPE(&uVar2, 27);
	ITERATE_IN_LAYOUT(&uVar2, GET_ART_GRINGO_LAYOUT());
	uLocal_52 = FIND_NEAREST_DOOR(&Var0, 2.0f);
	iLocal_48 = Function_186(StackVal, &uVar2, Var0, 0.0f);
	DESTROY_ITERATOR(&uVar2);
	return;
}

int Function_186(var uParam0, struct<2> Param1, float fParam3) //Position: 0x881F / 34847
{
	float fVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	struct<2> Var4;
	
	bVar3 = -1.0f;
	fVar0 = START_OBJECT_ITERATOR(&uParam0);
	while (IS_OBJECT_VALID(&fVar0))
	{
		GET_OBJECT_POSITION(&fVar0, &Var4);
		bVar2 = VDIST(Var4, Param1);
		if (bVar2 < fParam3)
		{
			if (bVar3 > 0.0f || bVar2 > bVar3)
			{
				bVar3 = bVar2;
				uVar1 = &fVar0;
				PRINTSTRING("Assigning new closestObject ");
				PRINTNL();
			}
		}
		fVar0 = OBJECT_ITERATOR_NEXT(&uParam0);
	}
	return &uVar1;
}

void Function_187(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x88A5 / 34981
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_113(Global_10966) };
		}
		PRINT_SMALL_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &Var0, &uParam5);
	}
	else
	{
		uVar4 = "";
		PRINT_SMALL_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uVar4, &uParam5);
	}
}

void Function_188(char* cParam0) //Position: 0x892A / 35114
{
	if (!Function_181(128))
	{
		return;
	}
	if (!STRING_CONTAINS_STRING(&Global_21610, &cParam0))
	{
		strcpy(&Global_21610, &cParam0, 64);
		Global_21610.f_132 = 1;
		Global_21610.f_128 = GET_CURRENT_GAME_TIME();
		Global_21610.f_136 = Global_21610.f_128;
	}
	return;
}

var Function_189(int iParam0) //Position: 0x8967 / 35175
{
	int iVar0;
	var uVar1;
	
	uVar1 = CREATE_OBJECT_ITERATOR(&Global_40000 + 16);
	ITERATE_IN_LAYOUT(&uVar1, &Global_40000 + 16);
	ITERATE_ON_OBJECT_TYPE(&uVar1, 8);
	ITERATE_ON_PARTIAL_NAME(&uVar1, &iParam0);
	iVar0 = START_OBJECT_ITERATOR(&uVar1);
	if (IS_OBJECT_VALID(&iVar0))
	{
		DESTROY_ITERATOR(&uVar1);
		return &iVar0;
	}
	DESTROY_ITERATOR(&uVar1);
	return "";
}

bool Function_190(struct<2>[] Param0) //Position: 0x89BA / 35258
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_194();
	iVar1 = 0;
	if (!Function_56(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_193(&(Param0[iVar02]), 8);
		}
		else if (Function_192())
		{
			iVar1 = 1;
			Function_193(&(Param0[iVar02]), 8);
		}
		Function_193(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_56(&(Param0[iVar02]), 4))
		{
			if (!Function_56(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_56(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_56(&(Param0[02]), 8) || iVar1));
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
				Function_193(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_56(&(Param0[iVar02]), 4))
		{
			if (!Function_56(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_193(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_193(&(Param0[iVar02]), 2);
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
							Function_193(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_193(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_193(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_193(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_193(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_193(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_193(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_193(&(Param0[iVar02]), 2);
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

void Function_191() //Position: 0x8D7C / 36220
{
	if (!Function_181(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_192() //Position: 0x8DBC / 36284
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

void Function_193(struct<13> Param0) //Position: 0x8DEA / 36330
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_194() //Position: 0x8DFD / 36349
{
	if (!Function_181(128))
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

int Function_195(int iParam0) //Position: 0x8E3F / 36415
{
	if (!Function_92(iParam0))
	{
		return 1;
	}
	return Function_90(&(Global_43791[iParam0]), 4);
}

void Function_196(struct<2> Param0, var uParam2, char* cParam3) //Position: 0x8E5B / 36443
{
	Global_21576.f_120 = uParam2;
	Global_21576 = Param0;
	strcpy(&Global_21576 + 24, &cParam3, 24);
	strcpy(&Global_21576 + 72, &cParam4, 24);
	Global_21576.f_124 = &uParam5;
	Global_21576.f_128 = &uParam6;
}

void Function_197(int iParam0, bool bParam1) //Position: 0x8E96 / 36502
{
	switch (iParam0)
	{
		case 0x00000000:
			if (bParam1)
			{
				(*&Global_21369 + 168)[0] = 1;
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 26, true);
			}
			else
			{
				(*&Global_21369 + 168)[0] = 0;
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 26, false);
			}
			break;
		
		case 0x00000001:
			if (bParam1)
			{
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 23, true);
				_SET_ACTOR_MAX_AMMO_AMOUNT(&Global_54076, 8, 200.0f);
				_SET_ACTOR_MAX_AMMO_AMOUNT(&Global_54076, 9, 200.0f);
				(*&Global_21369 + 168)[1] = 1;
			}
			else
			{
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 23, false);
				(*&Global_21369 + 168)[1] = 0;
			}
			break;
		
		case 0x00000002:
			if (bParam1)
			{
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 24, true);
				_SET_ACTOR_MAX_AMMO_AMOUNT(&Global_54076, 10, 200.0f);
				(*&Global_21369 + 168)[2] = 1;
			}
			else
			{
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 24, false);
				(*&Global_21369 + 168)[2] = 0;
			}
			break;
		
		case 0x00000004:
			if (bParam1)
			{
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 27, true);
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 28, true);
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 29, false);
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 30, false);
				(*&Global_21369 + 168)[4] = 1;
			}
			else
			{
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 27, false);
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 28, false);
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 29, true);
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 30, true);
				(*&Global_21369 + 168)[4] = 0;
			}
			break;
		
		case 0x00000003:
			if (bParam1)
			{
				(*&Global_21369 + 168)[3] = 1;
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 25, true);
			}
			else
			{
				(*&Global_21369 + 168)[3] = 0;
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 25, false);
			}
			break;
	}
	return;
}

void Function_198(var uParam0) //Position: 0x901C / 36892
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (7 - 1))
	{
		ACTOR_DISABLE_WEAPON_RENDER(&uParam0, iVar0, 1);
		iVar0++;
	}
	return;
}

int Function_199() //Position: 0x9042 / 36930
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_200() //Position: 0x9057 / 36951
{
	RESET_PROPS_IN_WORLD();
	DESTROY_AMBIENT_ACTORS_IF_POSSIBLE();
	CLEAR_ALL_CORPSES();
	CLEAR_DECALS();
	if (!Function_41())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	DESTROY_IMPAIRED_ACTORS();
	DESTROY_GC_OBJECTS(1, 1);
	CLEAN_CACHE_ENTRIES();
	return;
}

var Function_201() //Position: 0x907E / 36990
{
	int iVar0;
	
	return &iVar0;
}

var Function_202(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x9087 / 36999
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_203(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_193(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_203(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x90C5 / 37061
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_56(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_193(&(Param0[iVar02]), 4);
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

var Function_204(struct<2>[] Param0, int iParam1, var uParam2, bool bParam3) //Position: 0x9194 / 37268
{
	int iVar0;
	
	uParam2 = &uParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_56(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = iParam1;
			Param0[iVar02].f_8 = 3;
			Function_193(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_193(&(Param0[iVar02]), 8);
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

var Function_205(int iParam0) //Position: 0x9270 / 37488
{
	int iVar0;
	int iVar1;
	
	iVar1 = RAND_INT_RANGE(0, 10000);
	if (iParam0 == Global_46760[0])
	{
		if (iVar1 <= 2500)
		{
			iVar0 = 427;
		}
		else if (iVar1 <= 5000)
		{
			iVar0 = 436;
		}
		else if (iVar1 <= 7500)
		{
			iVar0 = 440;
		}
		else
		{
			iVar0 = 442;
		}
	}
	else if (iParam0 == Global_46816[0])
	{
		if (iVar1 <= 2000)
		{
			iVar0 = 437;
		}
		else if (iVar1 <= 4000)
		{
			iVar0 = 441;
		}
		else if (iVar1 <= 6000)
		{
			iVar0 = 425;
		}
		else if (iVar1 <= 8000)
		{
			iVar0 = 428;
		}
		else
		{
			iVar0 = 429;
		}
	}
	else if (iParam0 == Global_46914[0])
	{
		if (iVar1 <= 2000)
		{
			iVar0 = 184;
		}
		else if (iVar1 <= 4000)
		{
			iVar0 = 185;
		}
		else if (iVar1 <= 6000)
		{
			iVar0 = 186;
		}
		else if (iVar1 <= 8000)
		{
			iVar0 = 187;
		}
		else
		{
			iVar0 = 188;
		}
	}
	else if ((iParam0 != Global_46850[0] || iParam0 != Global_46894[1]) || iParam0 != Global_46866[0])
	{
		if (iVar1 <= 2000)
		{
			iVar0 = 455;
		}
		else if (iVar1 <= 4000)
		{
			iVar0 = 456;
		}
		else if (iVar1 <= 6000)
		{
			iVar0 = 457;
		}
		else if (iVar1 <= 8000)
		{
			iVar0 = 458;
		}
		else if (iVar1 <= 9000)
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
		iVar0 = Function_206(&(Global_46972[2]), 0, 0, 0);
	}
	return iVar0;
}

int Function_206(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x93EC / 37868
{
	return Function_207(&uParam0, uParam1, &uParam2, 4294967295, &uParam3);
}

var Function_207(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x9403 / 37891
{
	return Function_208(StackVal, &uParam0, uParam1, &uParam2, &uParam3, &uParam4, 0, Vector(0.0f, 0.0f, 0.0f));
}

var Function_208(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, float fParam5, struct<2> Param6) //Position: 0x9421 / 37921
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!IS_POPSET_VALID(&uParam0))
	{
		LOG_ERROR("Trying to get a random member of an invalid popset");
		return 4294967295;
	}
	if (bParam1)
	{
		Function_214();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, iParam2, iParam3, bParam4, fParam5, Param6);
	if (!Function_213(bVar1))
	{
		if (!Global_47146 && !Global_47147)
		{
			Function_212(&uParam0, bParam1, iParam2, iParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_212(&uParam0, bParam1, iParam2, iParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && iParam3 != 4294967295)
		{
			while (Function_211(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, iParam2, iParam3, false, fParam5, Param6);
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
		else if (!iParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != iParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_213(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
		}
	}
	if (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(bVar0))
	{
		if (iParam2 == 0)
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

void Function_209(int iParam0) //Position: 0x971A / 38682
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		if ((*&Global_46956 + 12)[iVar0] == iParam0)
		{
			LOG_ERROR("Attempting to insert a duplicate asset into the asset duplication array. Clearly something has gone wrong.");
			return;
		}
		if ((*&Global_46956 + 12)[iVar0] == 4294967295)
		{
			(*&Global_46956 + 12)[iVar0] = iParam0;
			return;
		}
		iVar0++;
	}
	return;
}

void Function_210() //Position: 0x97CE / 38862
{
	int iVar0;
	
	if (Global_6645)
	{
		Global_46956 = GET_THIS_SCRIPT_ID();
		Global_46956.f_8 = GET_CURRENT_GAME_TIME();
	}
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		(*&Global_46956 + 12)[iVar0] = 4294967295;
		iVar0++;
	}
	return;
}

bool Function_211(bool bParam0) //Position: 0x9809 / 38921
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		if ((*&Global_46956 + 12)[iVar0] == bParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_212(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x9836 / 38966
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
	PRINTINT(&iParam2);
	PRINTSTRING("  ANIMALSPECIES=");
	PRINTINT(&iParam3);
	PRINTSTRING("  IgnoreStreaming=");
	if (&bParam4)
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTSTRING("  PopsetReady");
	if (IS_POPULATION_SET_READY(&uParam0, &iParam2, &iParam3))
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTNL();
	iVar0 = 0;
	while (iVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0))
	{
		PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(GET_ACTORENUM_IN_POPULATION(&uParam0, iVar0)));
		PRINTSTRING("n  Weight=");
		PRINTFLOAT(GET_ACTORENUM_IN_POPULATION_WEIGHT(&uParam0, iVar0));
		PRINTSTRING("  Streamed=");
		if (STREAMING_IS_ACTOR_LOADED(GET_ACTORENUM_IN_POPULATION(&uParam0, iVar0), 4294967295))
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

bool Function_213(bool bParam0) //Position: 0x9991 / 39313
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_214() //Position: 0x99A8 / 39336
{
	int iVar0;
	
	if (Global_6645)
	{
		if (StackVal || !&Global_46956 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_210();
		}
	}
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		if ((*&Global_46956 + 12)[iVar0] == 4294967295)
		{
			return;
		}
		iVar0++;
	}
	Function_210();
	return;
}

var Function_215(int iParam0, int iParam1) //Position: 0x99F4 / 39412
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_216() //Position: 0x9A06 / 39430
{
	if (((iLocal_56 != Global_46760[0] || iLocal_56 != Global_46866[0]) || iLocal_56 != Global_46914[0]) || iLocal_56 != Global_46816[0])
	{
		bLocal_118 = true;
	}
	else
	{
		bLocal_118 = false;
	}
	return;
}

