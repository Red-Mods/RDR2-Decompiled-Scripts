//Decompiled with MagicRDR v1.0
//Function Count : 198
//Statics Count : 146
//Natives Count : 325
//Parameters Count : 51

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
	float fLocal_20 = 0.0f;
	struct<65> Local_21 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	int iLocal_89 = 0;
	vector3 vLocal_90 = { 0.0f, 0.0f, 0.0f };
	int iLocal_93 = 0;
	bool bLocal_94 = false;
	struct<57> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	bool bVar14[2];
	bool bVar17[6];
	int iVar24[1];
	var uVar26;
	var uVar28[3];
	bool bVar32;
	int iVar54;
	int iVar55;
	int iVar56;
	int iVar57;
	var uVar58;
	bool bVar59;
	int iVar60;
	bool bVar62;
	int iVar63;
	vector3 vVar64;
	var uVar67;
	vector3 vVar70;
	int iVar73;
	bool bVar74;
	bool bVar75;
	bool bVar76;
	
	iLocal_14 = 0;
	iLocal_15 = 0;
	fLocal_38 = 0.0f;
	iLocal_51 = 0;
	bLocal_52 = false;
	iLocal_54 = 0;
	iLocal_57 = 0;
	iLocal_58 = 0;
	iLocal_59 = 0;
	iLocal_60 = 0;
	iLocal_61 = 1;
	bLocal_62 = false;
	iLocal_63 = 0;
	iLocal_64 = 0;
	bLocal_68 = false;
	bLocal_69 = false;
	bLocal_70 = false;
	iLocal_76 = 0;
	bLocal_77 = false;
	bLocal_78 = false;
	bLocal_94 = false;
	iVar0 = 0;
	bVar1 = CREATE_LAYOUT(Function_197());
	Function_196(&Local_21);
	Local_21.f_12 = "ped_emo_thanks";
	Local_21.f_16 = "ped_emo_thanks";
	Local_21.f_20 = "eventWildAnimals_msg02";
	Local_21.f_24 = "eventWildAnimals_msg02";
	Local_21.f_32 = -5.0f;
	Local_21.f_36 = 0;
	Local_21.f_40 = 6.0f;
	Local_21.f_28 = 15.0f;
	Local_21.f_4 = 30.0f;
	Local_21.f_60 = 1;
	Local_21.f_64 = 2.0f;
	iVar5 = 4294967295;
	iVar7 = 1;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 0;
	iVar11 = 0;
	iVar12 = 0;
	iVar13 = 0;
	uVar26 = 1;
	bVar32 = 7;
	iVar54 = 3;
	iVar55 = 6;
	uVar58 = Function_194(0, 1, 1, 0, 0);
	if (!IS_POPSET_VALID(Global_30750[11]))
	{
		iVar0 = 5;
	}
	else
	{
		switch (Global_29004)
		{
			case 0x00000000:
				iVar57 = (Global_16876[426].f_12 % 4);
				switch (iVar57)
				{
					case 0x00000000:
						iVar24[0] = 155;
						break;
					
					case 0x00000001:
						iVar24[0] = 54;
						break;
					
					case 0x00000002:
						iVar24[0] = 111;
						break;
					
					case 0x00000003:
						iVar24[0] = 163;
						break;
				}
				break;
			
			case 0x00000001:
				iVar57 = (Global_16876[426].f_12 % 3);
				switch (iVar57)
				{
					case 0x00000000:
						iVar24[0] = 148;
						break;
					
					case 0x00000001:
						iVar24[0] = 284;
						break;
					
					case 0x00000002:
						iVar24[0] = 271;
						break;
				}
				break;
			
			case 0x00000002:
				iVar57 = (Global_16876[426].f_12 % 4);
				switch (iVar57)
				{
					case 0x00000000:
						iVar24[0] = 96;
						break;
					
					case 0x00000001:
						iVar24[0] = 155;
						break;
					
					case 0x00000002:
						iVar24[0] = 218;
						break;
					
					case 0x00000003:
						iVar24[0] = 197;
						break;
				}
				break;
		}
		Function_193(&bVar32, iVar24[0], 3, 0);
		Function_192(iVar24[0]);
		Function_190(&bVar32, "ped_emo_thanks", 5, 0);
		Function_190(&bVar32, "custom/ped_emo_thanks", 8, 0);
		bVar59 = Function_188(Global_30750[11], 0, 0, 1);
		iVar60 = GET_ACTORENUM_SPECIES(bVar59);
		uVar28[0] = Function_177(2048, 0, 4, iVar60, 1);
		uVar28[1] = Function_177(2048, 0, 4, iVar60, 1);
		uVar28[2] = Function_177(2048, 0, 4, iVar60, 1);
		if (STRING_CONTAINS_STRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(uVar28[0]), "Bear"))
		{
			fLocal_79 = 0.66f;
			iLocal_40 = 1;
			iVar55 = 1;
			bVar6 = "AddBearEatingToCorpse";
			bLocal_55 = "bear_eating";
			bLocal_56 = "eat";
		}
		else if (STRING_CONTAINS_STRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(uVar28[0]), "Cougar") || STRING_CONTAINS_STRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(uVar28[0]), "BobCat"))
		{
			fLocal_79 = 0.2f;
			iLocal_40 = 2;
			iVar55 = 2;
			bVar6 = "AddCougarEatingToCorpse";
			bLocal_55 = "cougar_eating";
			bLocal_56 = "eat";
		}
		else if (STRING_CONTAINS_STRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(uVar28[0]), "Coyote"))
		{
			fLocal_79 = 1.5f;
			iLocal_40 = 2;
			iVar55 = 4;
			bVar6 = "AddCoyoteEatingToCorpse";
			bLocal_55 = "coyote_eating";
			bLocal_56 = "coyote_eating";
		}
		else if (STRING_CONTAINS_STRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(uVar28[0]), "Wolf"))
		{
			fLocal_79 = 0.3f;
			iLocal_40 = 2;
			iVar55 = 4;
			bVar6 = "AddWolfEatingToCorpse";
			bLocal_55 = "wolf_eating";
			bLocal_56 = "wolf_eating";
		}
		else
		{
			iLocal_40 = 2;
			iVar55 = 2;
			bVar6 = "AddBearEatingToCorpse";
			bLocal_55 = "bear_eating";
		}
		if ((uVar28[0] != 4294967295 || uVar28[1] != 4294967295) || uVar28[2] != 4294967295)
		{
			iVar0 = 5;
		}
		else
		{
			iVar57 = 0;
			iVar57 = 0;
			while (iVar57 <= iVar54)
			{
				Function_193(&bVar32, uVar28[iVar57], 3, 0);
				iVar57++;
			}
			iVar56 = 0;
		}
	}
	bVar62 = false;
	iVar63 = 0;
	vVar64.x = 5.0f;
	vVar64.f_8 = 3.0f;
	vVar64 = { StackVal, StackVal, vVar64 };
	iVar73 = 0;
	bVar74 = false;
	while (!IS_EXITFLAG_SET())
	{
		bVar75 = GET_PLAYER_ACTOR(0);
		GET_POSITION(bVar75, &vVar70);
		bVar76 = 600;
		if (Function_176(&bVar74, &iVar0, &iVar73, &bVar76, bLocal_62))
		{
			if (bVar74)
			{
				Function_174(&bVar14, 4294967295);
				Function_174(&bVar17, 4294967295);
			}
			else
			{
				Function_172(&bVar14, 4294967295);
				Function_172(&bVar17, 4294967295);
			}
		}
		switch (iVar0)
		{
			case 0x00000000:
				if (Function_166(&bVar32))
				{
					iVar0 = 1;
				}
				bVar76 = false;
				break;
			
			case 0x00000001:
				if (Function_126(&ScriptParam_0, &bVar76, &iVar9, &iVar10, 1))
				{
					iVar0 = 2;
				}
				else if (iVar10 == 1)
				{
					iVar0 = 5;
				}
				break;
			
			case 0x00000002:
				if (VDIST(vVar70, *(&ScriptParam_0 + 8)) > Function_125())
				{
					PRINTVECTOR(*(&ScriptParam_0 + 8));
					PRINTNL();
					PRINTVECTOR(vVar70);
					PRINTNL();
					iVar0 = 5;
					bVar76 = false;
					break;
				}
				PRINTVECTOR(*(&ScriptParam_0 + 8));
				PRINTNL();
				PRINTVECTOR(vVar70);
				PRINTNL();
				bVar14[0] = CREATE_ACTOR_IN_LAYOUT(bVar1, Function_197(), iVar24[0], *(&ScriptParam_0 + 8), *(&ScriptParam_0 + 20));
				REFERENCE_ACTOR(bVar14[0]);
				SET_ACTOR_CAN_BE_HARDLOCKED(bVar14[0], 0);
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bVar14[0], 0.0f);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(bVar14[0], 0);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar14[0], 0);
				UNK_0x99AFD2D1(bVar14[0], 1, 1);
				DECOR_SET_BOOL(bVar14[0], bVar6, true);
				AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bVar14[0], 0);
				bLocal_75 = CREATE_ACTORSET_IN_LAYOUT(bVar1, "fleeActors", 0);
				Function_124(&iLocal_67, 16);
				Function_124(&iLocal_67, 1);
				Function_124(&iLocal_67, 2);
				iVar57 = 0;
				iVar57 = 0;
				while (iVar57 <= iVar55)
				{
					bVar62 = RAND_INT_RANGE_DIFFERENT(bVar62, 0, (iVar54 - 1));
					PRINTSTRING("rand pred chosen:");
					PRINTINT(bVar62);
					PRINTNL();
					bVar17[iVar57] = CREATE_ACTOR_IN_LAYOUT(bVar1, Function_197(), uVar28[bVar62], *(&ScriptParam_0 + 8), *(&ScriptParam_0 + 20));
					ADD_ACTORSET_MEMBER(bLocal_75, bVar17[iVar57]);
					SNAP_OBJECT_TO_GROUND(bVar17[iVar57], 3.0f, true, 1092616192);
					TASK_CLEAR(bVar17[iVar57]);
					TASK_KILL_CHAR(bVar17[iVar57], bVar14[0]);
					TASK_PRIORITY_SET(bVar17[iVar57], 1);
					MEMORY_REPORT_POSITION_AUTO(bVar17[iVar57], bVar14[0], 1);
					SET_ACTOR_UPDATE_PRIORITY(bVar17[iVar57], false);
					ANIMAL_TUNING_SET_ATTRIB_BOOL(bVar17[iVar57], 11, 0);
					SET_ACTOR_FACTION(bVar17[iVar57], 18);
					iVar57++;
				}
				DELETE_ALL_INVENTORY_FROM_ACTOR(bVar14[0]);
				TASK_FLEE_ACTOR(bVar14[0], bVar17[0], -1.0f, -1.0f, 0, 0, 0);
				TASK_PRIORITY_SET(bVar14[0], 0);
				SET_ACTOR_CAN_PLAY_GESTURES(bVar14[0], false);
				Function_122(StackVal, StackVal, &uVar3, &uVar4, &iVar5, 6.0f, *(&ScriptParam_0 + 8));
				iVar0 = 3;
				break;
			
			case 0x00000003:
				Function_121();
				Function_119(StackVal, StackVal, Function_121(), &bLocal_62, ScriptParam_0.f_56, bVar14[0], 100, 0x42a00000, 1);
				Function_106(&bVar17, iVar55, &bLocal_62, ScriptParam_0.f_56, 100, 0x42a00000, 1);
				if (!bLocal_68)
				{
					iVar57 = 0;
					while (iVar57 <= iVar55)
					{
						if (IS_ACTOR_VALID(bVar17[iVar57]))
						{
							if (GET_LAST_ATTACKER(bVar17[iVar57]) == Global_34573)
							{
								bLocal_68 = true;
							}
						}
						iVar57++;
					}
				}
				if (GET_DEBUG_DRAW_STATE())
				{
					GET_POSITION(bVar17[0], &uVar67);
					bVar76 = false;
				}
				iVar63 = 0;
				iVar57 = 0;
				bLocal_65 = false;
				if (Function_103(&bVar17, iVar55, Function_104(1)))
				{
					bLocal_65 = true;
				}
				if (Function_101(bVar14[0], 0))
				{
					if (Function_103(&bVar14, 1, Function_104(1)))
					{
						bLocal_65 = true;
					}
				}
				if (!bLocal_65)
				{
					iVar0 = 5;
					break;
				}
				if (iLocal_60 && Function_100(iLocal_67, 16))
				{
					if (Function_98(&uLocal_80, 4.0f))
					{
						iLocal_67 = 0;
					}
				}
				if (iVar56 > 10)
				{
					if (Function_95(bVar14[0], &iVar2, &fLocal_38, iLocal_67, 0, 0x40400000))
					{
						switch (iVar2)
						{
							case 0x00000001:
							case 0x00000002:
							case 0x00000004:
							case 0x00000008:
							case 0x00000010:
								Function_94(bVar14[0]);
								TASK_FLEE_ACTOR(bVar14[0], Global_34573, -1.0f, -1.0f, 0, 0, 0);
								break;
						}
						bLocal_77 = true;
						iVar0 = 5;
						bVar76 = false;
						break;
					}
				}
				if (Function_26(&iVar56, &bVar14, &bVar17, iVar55, bVar1, &bVar76, uVar58))
				{
					iVar0 = 5;
				}
				break;
			
			case 0x00000005:
				iVar0 = 6;
				bVar76 = false;
				break;
			
			case 0x00000006:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				bVar76 = false;
				break;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(bVar76);
		}
	}
	if (bLocal_94)
	{
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	}
	Function_172(&bVar14, 4294967295);
	Function_172(&bVar17, 4294967295);
	Function_25(&uVar3, &uVar4, &iVar5);
	Function_24(iVar24[0]);
	Function_20(&bVar32);
	if (ScriptParam_0.f_32)
	{
		Global_3399 = 0;
	}
	if (IS_BLIP_VALID(bLocal_74))
	{
		REMOVE_BLIP(bLocal_74);
	}
	if (!bLocal_62)
	{
		Function_18(&bVar14, 4294967295);
		Function_18(&bVar17, 4294967295);
		Function_13(ScriptParam_0.f_56, 0.0f, 0, 1, 0);
		if (IS_OBJECT_VALID(bVar1))
		{
			UNK_0xA936E73B(bVar1, 1);
			MARK_OBJECT_FOR_AGGRESSIVE_CLEANUP(bVar1, 1);
		}
	}
	if (Function_101(bVar14[0], 0))
	{
		Function_11(bVar14[0]);
		AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar14[0], 1);
		UNK_0x99AFD2D1(bVar14[0], 0, 0);
		SET_ACTOR_CAN_BE_HARDLOCKED(bVar14[0], 1);
		Function_94(bVar14[0]);
		if ((!bLocal_77 && !bLocal_70) && !Function_10(bVar14[0]))
		{
			Function_1(bVar14[0], 4, 0, 1);
		}
	}
	iVar57 = 0;
	while (iVar57 <= iVar55)
	{
		if (Function_101(bVar17[iVar57], 0))
		{
			TASK_PRIORITY_SET(bVar17[iVar57], 2);
			if (!bLocal_78)
			{
				TASK_CLEAR(bVar17[iVar57]);
			}
		}
		iVar57++;
	}
	RELEASE_LAYOUT_REF(bVar1);
	TERMINATE_THIS_SCRIPT();
	return;
}

int Function_1(bool bParam0, int iParam1, int iParam2, int iParam3) //Position: 0xA27 / 2599
{
	bool bVar0;
	bool bVar1;
	
	if (iParam1 == 5)
	{
		LOG_ERROR("Please Use RELEASE_ACTOR_TO_ACTORROAM_GRINGO");
		LOG_ERROR("Switching to ACTORROAM_BEHAVIOR_DEFAULT for this actor");
		iParam1 = 0;
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		if (!IS_ACTOR_VEHICLE(bParam0))
		{
			SQUAD_LEAVE(bParam0);
		}
		else
		{
			bVar0 = false;
			while (bVar0 < (GET_NUM_DRAFT_POSITIONS(bParam0) - 1))
			{
				bVar1 = GET_DRAFT_ACTOR(bVar0, bParam0);
				if (IS_ACTOR_VALID(bVar1))
				{
					Function_2(bVar1, 0, 0, 0, 1);
				}
				bVar0++;
			}
		}
		Function_2(bParam0, iParam1, iParam2, iParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_2(bool bParam0, int iParam1, var uParam2, var uParam3, int iParam4) //Position: 0xB07 / 2823
{
	char* cVar0[32];
	
	Function_9();
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (IS_ACTOR_DEAD(bParam0))
	{
		return 1;
	}
	if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516))
	{
		strcpy(&cVar0, GET_ACTOR_NAME(bParam0), 32);
		stradd(&cVar0, " already roaming. Cannot add again.", 32);
		LOG_ERROR(&cVar0);
		return 1;
	}
	if (Function_8(bParam0) == 1)
	{
		LOG_ERROR("ACTORROAM - Actor cannot be added to ActorRoam multiple times");
		return 0;
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam0));
	}
	strcpy(&cVar0, GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(bParam0)), 32);
	if (GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(bParam0), Global_6290))
	{
		PRINTSTRING("Added ");
		PRINTSTRING(&cVar0);
		PRINTSTRING(" to the roaming actor layout.");
		PRINTNL();
	}
	else
	{
		strcpy(&cVar0, GET_OBJECT_NAME(bParam0), 32);
		if (!IS_STRING_VALID(&cVar0))
		{
			strcpy(&cVar0, "(NAMELESS)", 32);
		}
		PRINTSTRING("Could not add ");
		PRINTSTRING(&cVar0);
		PRINTSTRING(" to the roaming actor layout.");
		PRINTNL();
		LOG_ERROR("Could not add actor to actorroam. Report the offending script");
	}
	if (!IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516))
	{
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516);
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam0));
	}
	if (iParam4 == 1)
	{
		AI_SET_NAV_MATERIAL_USAGE(bParam0, 64, 0);
		AI_SET_NAV_MATERIAL_USAGE(bParam0, 32, 0);
	}
	Function_7(bParam0, 0);
	Function_6(bParam0, iParam1);
	Function_5(bParam0, uParam2);
	Function_4(bParam0, uParam3);
	if (Function_3(bParam0) != 5)
	{
		SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bParam0, 0);
		SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(bParam0, 1);
	}
	else
	{
		AI_SET_ENABLE_DEAD_BODY_REACTIONS(bParam0, 0);
	}
	return 1;
}

int Function_3(bool bParam0) //Position: 0xD55 / 3413
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior");
}

void Function_4(bool bParam0, bool bParam1) //Position: 0xD78 / 3448
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_5(bool bParam0, bool bParam1) //Position: 0xD9B / 3483
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_target", bParam1);
	return;
}

void Function_6(bool bParam0, bool bParam1) //Position: 0xDBF / 3519
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_7(bool bParam0, bool bParam1) //Position: 0xDE5 / 3557
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_state", bParam1);
	return;
}

int Function_8(bool bParam0) //Position: 0xE08 / 3592
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
}

void Function_9() //Position: 0xE26 / 3622
{
	if (!IS_LAYOUTREF_VALID(Global_6290))
	{
		Global_6290 = CREATE_LAYOUT("RoamingLayout");
	}
	if (!IS_OBJECTSET_VALID(Global_16516))
	{
		Global_16516 = CREATE_OBJECTSET_IN_LAYOUT("gRoamObjects", Global_6290, 4294967295, 1);
	}
	return;
}

bool Function_10(bool bParam0) //Position: 0xE70 / 3696
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516))
	{
		return 1;
	}
	return 0;
}

int Function_11(bool bParam0) //Position: 0xE95 / 3733
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_12(bParam0);
		return 1;
	}
	return 0;
}

void Function_12(bool bParam0) //Position: 0xEAB / 3755
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		bVar0 = GET_BLIP_ON_ACTOR(bParam0);
		while (IS_BLIP_VALID(bVar0))
		{
			REMOVE_BLIP(bVar0);
			bVar0 = GET_BLIP_ON_ACTOR(bParam0);
		}
	}
	return;
}

bool Function_13(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xED7 / 3799
{
	bool bVar0;
	bool bVar1;
	
	if (Global_30842[16])
	{
		PRINTSTRING(GET_ASSET_NAME(Global_17483[iParam075].f_96, 4));
	}
	fParam1 = fParam1;
	if (bParam4)
	{
		HUD_CLEAR_OBJECTIVE_QUEUE();
		Global_3399 = 0;
		Function_15("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
		if (StackVal & 128 == 128)
		{
			Global_17483[iParam075].f_116 = 0;
		}
		if (StackVal & 64 == 64)
		{
			if (Global_3367)
			{
				if (IS_SCRIPT_VALID(Global_6281) && Global_6281 == GET_THIS_SCRIPT_ID())
				{
					return 0;
				}
			}
			Global_3367 = 1;
			Global_6281 = GET_THIS_SCRIPT_ID();
		}
		return 1;
	}
	if (iParam0 != 4294967295)
	{
		bVar0 = GET_TIME_OF_DAY();
		bVar1 = GET_TOTAL_MINUTES(Global_17483[iParam075].f_260);
		if (Global_30842[16])
		{
			PRINTSTRING("Current Time of day:");
			Function_14(bVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_14(bVar0);
		}
		if (!bParam3)
		{
			ADD_TIME(&bVar0, 0, 0, bVar1, 0);
		}
		else
		{
			ADD_TIME(&bVar0, 0, 0, 10, 0);
		}
		if (Global_30842[16])
		{
			PRINTSTRING("Formed time of day:");
			Function_14(bVar0);
		}
		Global_17483[iParam075].f_264 = bVar0;
		Global_16876[iParam06] = bVar0;
		if (bParam2)
		{
			Global_16876[iParam06].f_4 = StackVal + 1;
			if (StackVal & 128 == 128)
			{
				Global_17483[iParam075].f_116 = 0;
			}
			if (StackVal & 64 == 64)
			{
				if (Global_3367)
				{
					if (IS_SCRIPT_VALID(Global_6281) && Global_6281 == GET_THIS_SCRIPT_ID())
					{
						return 0;
					}
				}
				Global_3367 = 1;
				Global_6281 = GET_THIS_SCRIPT_ID();
			}
		}
		return 1;
	}
	LOG_ERROR("Invalid beat index");
	return 0;
}

void Function_14(bool bParam0) //Position: 0x1134 / 4404
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

void Function_15(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x117A / 4474
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_16(Global_6269) };
		}
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, &Var0, iParam5);
	}
	else
	{
		iVar4 = "";
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, iVar4, iParam5);
	}
}

struct<16> Function_16(int iParam0) //Position: 0x11F1 / 4593
{
	char* cVar0[16];
	
	if (!Function_17())
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

bool Function_17() //Position: 0x1230 / 4656
{
	if (Function_100(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_18(bool bParam0, int iParam1) //Position: 0x124B / 4683
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *bParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_19(bParam0[iVar0]);
		iVar0++;
	}
	return;
}

void Function_19(int iParam0) //Position: 0x1278 / 4728
{
	if (IS_ACTOR_VALID(*iParam0))
	{
		RESET_ANIM_SET_FOR_ACTOR(*iParam0, 0);
		TASK_FLEE_ACTOR(*iParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
		TASK_PRIORITY_SET(*iParam0, 0);
	}
	return;
}

void Function_20(int iParam0) //Position: 0x12A3 / 4771
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_21(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_21(var uParam0, int iParam1) //Position: 0x12C9 / 4809
{
	if (Function_23(uParam0[iParam13], 4))
	{
		if (Function_23(uParam0[iParam13], 1))
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
			Function_22(uParam0[iParam13], 1);
			Function_22(uParam0[iParam13], 2);
			Function_22(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_22(var uParam0, int iParam1) //Position: 0x13F7 / 5111
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_23(var uParam0, int iParam1) //Position: 0x1411 / 5137
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_24(bool bParam0) //Position: 0x142E / 5166
{
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(bParam0);
	return;
}

void Function_25(var uParam0, var uParam1, int iParam2) //Position: 0x1439 / 5177
{
	if (*uParam0 != 4294967295)
	{
		RESET_THIS_TREE_TYPE_CLEARING(*uParam0);
	}
	if (*uParam1 != 4294967295)
	{
		RESET_THIS_BREAKABLE_TREE_CLEARING(*uParam1);
	}
	if (*iParam2 != 4294967295)
	{
		RESET_THIS_TREE_TYPE_CLEARING(*iParam2);
	}
	return;
}

bool Function_26(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4, var uParam5, var uParam6) //Position: 0x1466 / 5222
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	switch (*uParam0)
	{
		case 0x00000000:
			iVar1 = 0;
			while (iVar1 <= iParam3)
			{
				if (Function_101((*uParam2)[iVar1], 0) && Function_101((*uParam1)[0], 0))
				{
					if (Function_93((*uParam1)[0], (*uParam2)[iVar1]) > 45.0f)
					{
						bLocal_69 = true;
					}
				}
				iVar1++;
			}
			if (!bLocal_69)
			{
				return 1;
			}
			iVar1 = 0;
			while (iVar1 <= iParam3)
			{
				if (!IS_ACTOR_ALIVE((*uParam2)[iVar1]) && !bLocal_68)
				{
					*uParam0 = 2;
					break;
				}
				else if (GET_LAST_ATTACKER((*uParam2)[iVar1]) == Global_34573)
				{
					*uParam0 = 1;
					break;
				}
				iVar1++;
			}
			if (Function_93((*uParam1)[0], Global_34573) > 50.0f && !iLocal_63)
			{
				Function_91();
				iLocal_63 = 1;
				Function_90((*uParam1)[0], Global_34573, 1, 1);
				bLocal_74 = ADD_BLIP_FOR_ACTOR((*uParam1)[0], 325, 0.0f, 3, 0);
				SET_BLIP_BLINK(bLocal_74, 1, 0, 5f);
				if (Function_89())
				{
					Function_88((*uParam1)[0], Global_34573, "SCREAM_HIGH", 0, 5, 60, 1, 1);
				}
				else
				{
					Function_88((*uParam1)[0], Global_34573, "SCREAM_LOW", 0, 5, 60, 1, 1);
				}
				Function_87(42);
				*uParam0 = 1;
				TASK_FLEE_ACTORSET((*uParam1)[0], bLocal_75, -1.0f, -1.0f, 0, 0, 0);
			}
			if (Function_86(uParam1[0], &Global_34573, &iLocal_54, bParam4, 60.0f, &bLocal_52, uLocal_53, &iLocal_45, &iLocal_51, 40.0f, 0, 3, -5.0f, 0.0f, "", 1))
			{
				if (bLocal_52)
				{
					TASK_FLEE_ACTORSET((*uParam1)[0], bLocal_75, -1.0f, -1.0f, 0, 0, 0);
					*uParam0 = 1;
				}
			}
			else
			{
				return 1;
			}
			break;
		
		case 0x00000001:
			if ((CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), (*uParam1)[0], 1.0f, 30.0f, 1, 0, 0) && !iLocal_57) && !IS_AMBIENT_SPEECH_PLAYING((*uParam1)[0]))
			{
				AI_GOAL_LOOK_AT_ACTOR_NEW((*uParam1)[0], Global_34573, 3.0f, 0);
				Function_84(&iLocal_89, 17, 0, 4294967295, 4294967295);
				Function_88((*uParam1)[0], Global_34573, "eventWildAnimals_msg01", "eventWildAnimals_msg01", 5, 60, 1, 1);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR((*uParam1)[0], 1);
				UNK_0x99AFD2D1((*uParam1)[0], 0, 0);
				Function_83(&uLocal_48, 0.0f);
				iLocal_57 = 1;
			}
			if (!iLocal_58)
			{
				if (iLocal_57 && !IS_AMBIENT_SPEECH_PLAYING((*uParam1)[0]))
				{
					SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR((*uParam1)[0], fLocal_79);
					iLocal_58 = 1;
				}
			}
			if (iLocal_57 != 1 && iLocal_59 != 0)
			{
				if (Function_80(&uLocal_48, 8.0f))
				{
					if (!IS_AMBIENT_SPEECH_PLAYING((*uParam1)[0]))
					{
						if (Function_89())
						{
							Function_88((*uParam1)[0], Global_34573, "SCREAM_HIGH", 0, 5, 60, 1, 1);
						}
						else
						{
							Function_88((*uParam1)[0], Global_34573, "SCREAM_LOW", 0, 5, 60, 1, 1);
						}
						iLocal_59 = 1;
					}
				}
			}
			iLocal_66 = 0;
			iVar1 = 0;
			while (iVar1 <= iParam3)
			{
				if (!Function_101((*uParam2)[iVar1], 0))
				{
					iLocal_66++;
				}
				iVar1++;
			}
			if (iLocal_66 > iLocal_40)
			{
				Function_84(&iLocal_89, 3, 0, 4294967295, 4294967295);
				if (iLocal_60 == 0)
				{
					Function_83(&iLocal_45, 0.0f);
					iVar1 = 0;
					while (iVar1 <= iParam3)
					{
						if (Function_101((*uParam2)[iVar1], 0))
						{
							TASK_FLEE_ACTOR((*uParam2)[iVar1], Global_34573, 150.0f, -1.0f, 0, 0, 0);
							TASK_PRIORITY_SET((*uParam2)[iVar1], 0);
						}
						iVar1++;
					}
					bLocal_78 = true;
					iLocal_60 = 1;
				}
				if (bLocal_68 && Function_80(&iLocal_45, 1.0f))
				{
					SET_ACTOR_CAN_BE_HARDLOCKED((*uParam1)[0], 0);
					AI_SPEECH_SET_ALLOW_FOR_ACTOR((*uParam1)[0], 0);
					UNK_0x99AFD2D1((*uParam1)[0], 1, 1);
					Function_79((*uParam1)[0], 4294967295 * 50);
					AI_GOAL_LOOK_AT_ACTOR_NEW((*uParam1)[0], Global_34573, 6.0f, 0);
					TASK_FACE_ACTOR((*uParam1)[0], Global_34573, 1, 3212836864);
					Function_74(5, 1, 0);
					Function_51(50, 1, 0);
					*uParam0 = 2;
				}
				else if (!bLocal_68)
				{
					*uParam0 = 2;
				}
			}
			if (!Function_101((*uParam1)[0], 0))
			{
				GET_OBJECT_POSITION((*uParam1)[0], &vLocal_90);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(bParam4, Function_197(), 3, vLocal_90, 0.0f, 0.0f, 0.0f, 9.0f, 4.0f, 9.0f);
				iVar1 = 0;
				while (iVar1 <= iParam3)
				{
					if (Function_101((*uParam2)[iVar1], 0))
					{
						TASK_WANDER_IN_VOLUME((*uParam2)[iVar1], bVar0, -1f);
						TASK_PRIORITY_SET((*uParam2)[iVar1], 0);
					}
					iVar1++;
				}
				if (IS_ACTOR_VALID((*uParam1)[0]))
				{
					Function_50((*uParam1)[0]);
					vLocal_71 = { StackVal, StackVal, Function_50((*uParam1)[0]) };
				}
				else
				{
					vLocal_71 = { StackVal, StackVal, Global_34574 };
				}
				*uParam0 = 5;
			}
			break;
		
		case 0x00000002:
			if (Function_101((*uParam1)[0], 0) && bLocal_68)
			{
				Function_49(&uLocal_80);
				*uParam0 = 10;
			}
			else
			{
				return 1;
			}
			break;
		
		case 0x0000000A:
			if (Function_47(uParam1[0], &Global_34573, &iLocal_76, &iLocal_45, &iLocal_64, uParam5, 2, uLocal_53, bParam4, &Local_21))
			{
				if (iLocal_64 == 1)
				{
					STOP_FORCE_LOOK_AT_COORD((*uParam1)[0]);
					MEMORY_CLEAR_EVENTS((*uParam1)[0], 1);
					MEMORY_CONSIDER_AS((*uParam1)[0], Global_34573, 5);
					iVar1 = 0;
					while (iVar1 <= iParam3)
					{
						if (Function_101((*uParam2)[iVar1], 0))
						{
							MEMORY_CONSIDER_AS((*uParam1)[0], (*uParam2)[iVar1], 5);
						}
						iVar1++;
					}
					Function_31(uParam6, 1);
					return 1;
				}
			}
			if (Function_101((*uParam1)[0], 0))
			{
				bLocal_70 = true;
				Function_1((*uParam1)[0], 4, 0, 1);
				TASK_PRIORITY_SET((*uParam1)[0], 2);
			}
			return 1;
			break;
		
		case 0x00000005:
			bLocal_41 = LOCATE_GRINGO_OF_TYPE(bLocal_55, &vLocal_71, 10.0f, 0);
			if (IS_GRINGO_VALID(bLocal_41))
			{
				GET_GRINGO_ACTIVATION_SPHERE(bLocal_41, &vLocal_42, &uLocal_39);
				iVar2 = 4294967295;
				iVar1 = 0;
				while (iVar1 <= *uParam2)
				{
					if (Function_101((*uParam2)[iVar1], 0))
					{
						iVar2 = iVar1;
					}
					iVar1++;
				}
				if (iVar2 > 0)
				{
					TASK_CLEAR((*uParam2)[iVar2]);
					TASK_USE_GRINGO((*uParam2)[iVar2], bLocal_41, "UseCase1", 4294967295, 4);
					TASK_PRIORITY_SET((*uParam2)[iVar2], 0);
				}
				else
				{
					return 1;
				}
				*uParam0 = 6;
			}
			break;
		
		case 0x00000006:
			iVar2 = 4294967295;
			iVar1 = 0;
			while (iVar1 <= iParam3)
			{
				if (Function_101((*uParam2)[iVar1], 0))
				{
					iVar2 = iVar1;
					if (Function_29(StackVal, StackVal, (*uParam2)[iVar1], vLocal_42) > 3.3f)
					{
						*uParam0 = 7;
					}
				}
				if (iVar2 == 4294967295)
				{
					return 1;
				}
				iVar1++;
			}
			break;
		
		case 0x00000007:
			if (IS_GRINGO_VALID(bLocal_41))
			{
				if (IS_ACTOR_VALID((*uParam2)[iVar1]) && iLocal_61)
				{
					if (GET_TASK_STATUS((*uParam2)[iVar1], 19) == 1)
					{
						CREATE_DECAL(0, vLocal_42, 0.5f, 1, 0);
						iLocal_61 = 0;
					}
				}
				iVar1 = 0;
				iVar1 = 0;
				while (iVar1 <= iParam3)
				{
					if (IS_ACTOR_VALID((*uParam2)[iVar1]))
					{
						if (Function_93(Global_34573, (*uParam2)[iVar1]) > 3.0f)
						{
							*uParam0 = 9;
							break;
						}
						if (IS_ACTION_NODE_PLAYING_PARTIAL((*uParam2)[iVar1], bLocal_56))
						{
							if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), (*uParam2)[iVar1], 1.0f, 1117126656, 1, 1, 0))
							{
								if (!Function_28(&iLocal_45))
								{
									Function_27(&iLocal_45, 0.0f);
								}
								else if (Function_80(&iLocal_45, 35.0f))
								{
									*uParam0 = 8;
									break;
								}
							}
						}
						if (GET_LAST_ATTACKER((*uParam2)[iVar1]) == Global_34573)
						{
							*uParam0 = 8;
							break;
						}
					}
					iVar1++;
				}
			}
			else
			{
				*uParam0 = 5;
			}
			break;
		
		case 0x00000009:
			return 1;
			break;
		
		case 0x00000008:
			return 1;
			break;
	}
	return 0;
}

void Function_27(int iParam0, float fParam1) //Position: 0x1B83 / 7043
{
	if (!Function_28(iParam0))
	{
		Function_83(iParam0, fParam1);
	}
	return;
}

bool Function_28(int iParam0) //Position: 0x1B99 / 7065
{
	return Function_100(*iParam0, 1);
}

float Function_29(bool bParam0, vector3 vParam1) //Position: 0x1BA6 / 7078
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_30(bParam0);
		vVar0 = { StackVal, StackVal, Function_30(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

vector3 Function_30(bool bParam0) //Position: 0x1C20 / 7200
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

int Function_31(bool bParam0, bool bParam1) //Position: 0x1C8A / 7306
{
	bool bVar0;
	
	bVar0 = Function_46(0);
	if ((Function_46(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_32(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_46(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_32(597, bParam0, 0, 0);
	}
	if ((Function_46(597) + Function_46(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

int Function_32(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x1D55 / 7509
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
	Function_45(iParam0, TO_FLOAT(bParam1), 1);
	Function_44(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_33(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_33(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x1F75 / 8053
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_43(390))), 32);
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
					bVar19 = (Function_42(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_42(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_40(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_37(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_35(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_34(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_197(), &Var9);
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

var Function_34(int iParam0) //Position: 0x25A2 / 9634
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_35(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x25B3 / 9651
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_36(char* cParam0, bool bParam1) //Position: 0x26A8 / 9896
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_37(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x26C1 / 9921
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_39(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_38(Function_39(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_38(int iParam0, int iParam1) //Position: 0x2726 / 10022
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_39(int iParam0, bool bParam1) //Position: 0x2738 / 10040
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_40(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x274A / 10058
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
	if (((Function_41(iParam0) != 19 || Function_41(iParam0) != 17) || Function_41(iParam0) != 10) || Function_41(iParam0) != 9)
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

int Function_41(int iParam0) //Position: 0x287A / 10362
{
	return Global_35278[iParam020].f_48;
}

float Function_42(int iParam0) //Position: 0x2889 / 10377
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_43(int iParam0) //Position: 0x28C2 / 10434
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_44(int iParam0) //Position: 0x28FF / 10495
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

int Function_45(int iParam0, bool bParam1, bool bParam2) //Position: 0x2A99 / 10905
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

int Function_46(bool bParam0) //Position: 0x2CDD / 11485
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

bool Function_47(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9) //Position: 0x2D1E / 11550
{
	return Function_48(StackVal, uParam0, uParam1, uParam9, uParam2, uParam3, uParam8, uParam4, uParam7, uParam5, uParam9->f_12, uParam9->f_16, uParam9->f_20, uParam9->f_24, uParam9->f_28, uParam6, uParam9->f_32, uParam9->f_36, uParam9->f_40, uParam9->f_44, uParam9->f_48, uParam9->f_52, uParam9->f_56, uParam9->f_60, uParam9->f_64);
}

int Function_48(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, float fParam6, var uParam7, bool bParam8, var uParam9, bool bParam10, bool bParam11, bool bParam12, int iParam13, int iParam14, int iParam15, float fParam16, bool bParam17, var uParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, var uParam23, float fParam24) //Position: 0x2D79 / 11641
{
	bool bVar0;
	
	*uParam9 = *uParam9;
	uParam18 = uParam18;
	bParam17 = bParam17;
	if (!IS_ACTOR_VALID(*uParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(*uParam1))
	{
		return 0;
	}
	if (GET_LAST_ATTACKER(*uParam0) == Global_34573)
	{
		TASK_FLEE_ACTOR(*uParam0, Global_34573, 150.0f, -1.0f, 0, 0, 0);
		return 0;
	}
	switch (*uParam3)
	{
		case 0x00000000:
			if (bParam21)
			{
				*uParam3 = 3;
			}
			else
			{
				MEMORY_CLEAR_EVENTS(*uParam0, 0);
				ACTOR_START_FORCE_HOLSTER(*uParam0, 1, 0);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(*uParam0, 1);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(*uParam0, 1);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(*uParam0, 0);
				*uParam2 = Function_93(*uParam0, Global_34573);
				AI_GOAL_LOOK_AT_ACTOR_NEW(*uParam0, *uParam1, -1.0f, 1);
				bParam8 = CREATE_POINT_IN_LAYOUT(bParam5, Function_197(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
				ATTACH_OBJECTS(bParam8, *uParam1, Function_197(), 0.0f, 0.5f, fParam16, 0.0f, 0.0f, 0.0f, 4294967295);
				if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), *uParam0, 1.0f, iParam14, 1, 1, 0) || Function_93(Global_34573, *uParam0) > 2.0f)
				{
					TASK_FOLLOW_OBJECT_AT_DISTANCE(*uParam0, bParam8, 1.0f, iParam15);
					TASK_PRIORITY_SET(*uParam0, 1);
				}
				*uParam3 = 1;
			}
			break;
		
		case 0x00000001:
			if ((Function_93(*uParam0, *uParam1) - *uParam2) < fParam6)
			{
				TASK_FLEE_ACTOR(*uParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
				return 0;
			}
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), *uParam0, 1.0f, iParam14, 1, 1, 0))
			{
				bVar0 = TASK_SEQUENCE_OPEN();
				TASK_FACE_ACTOR(false, *uParam1, 0, 3212836864);
				TASK_FACE_ACTOR(false, *uParam1, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(*uParam0, bVar0);
				TASK_SEQUENCE_RELEASE(bVar0, 1);
				TASK_PRIORITY_SET(*uParam0, 1);
				*uParam9 = 0;
				*uParam3 = 4;
			}
			else if (!Function_101(*uParam0, 0))
			{
				if (IS_ACTOR_VALID(*uParam0))
				{
					TASK_FLEE_ACTOR(*uParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
				}
				return 0;
			}
			break;
		
		case 0x00000003:
			RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
			SET_ANIM_SET_FOR_ACTOR(*uParam0, bParam10, 0);
			SET_ACTION_NODE_FOR_ACTOR(*uParam0, bParam11);
			TASK_FACE_ACTOR(*uParam0, *uParam1, 1, 3212836864);
			*uParam3 = 4;
			break;
		
		case 0x00000004:
			*uParam9 = 0;
			if (GET_NTH_TASK_STATUS(*uParam0, false) != 0 || bParam21)
			{
				if (!bParam21)
				{
					SET_ANIM_SET_FOR_ACTOR(*uParam0, bParam10, 1);
					SET_ACTION_NODE_FOR_ACTOR(*uParam0, bParam11);
				}
				if (bParam19)
				{
					Function_88(*uParam0, Global_34573, "nThank_You", 0, 5, 60, 1, 1);
				}
				else
				{
					Function_88(*uParam0, Global_34573, bParam12, iParam13, 5, 60, 1, 1);
				}
				*uParam3 = 5;
				Function_83(uParam4, 0.0f);
			}
			else if (!Function_101(*uParam0, 0))
			{
				return 0;
			}
			break;
		
		case 0x00000005:
			if (uParam23 && !Function_10(*uParam0))
			{
				if (fParam24 != -1.0f)
				{
					if (!IS_AMBIENT_SPEECH_PLAYING(*uParam0))
					{
						RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
						Function_1(*uParam0, 4, 0, 1);
					}
				}
				else if (Function_80(uParam4, fParam24))
				{
					RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
					Function_1(*uParam0, 4, 0, 1);
				}
			}
			if (bParam22)
			{
				if (!IS_AMBIENT_SPEECH_PLAYING(*uParam0))
				{
					if (!IS_AMBIENT_SPEECH_PLAYING(Global_34573))
					{
						if (!IS_STRING_VALID(bParam20))
						{
							SAY_SINGLE_LINE_CONTEXT(Global_34573, 409, *uParam0, 0, 0, 5, 4294967295, 4294967295, 0, 1);
						}
						else
						{
							Function_88(Global_34573, *uParam0, bParam20, bParam20, 5, 60, 1, 1);
						}
						*uParam3 = 6;
					}
				}
			}
			else if (!IS_AMBIENT_SPEECH_PLAYING(*uParam0))
			{
				*uParam3 = 6;
			}
			break;
		
		case 0x00000006:
			if (uParam23 && !Function_10(*uParam0))
			{
				if (Function_80(uParam4, fParam24))
				{
					RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
					Function_1(*uParam0, 4, 0, 1);
				}
			}
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(*uParam0, bParam11) && !IS_AMBIENT_SPEECH_PLAYING(Global_34573))
			{
				RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
				*uParam7 = 1;
				if (bParam17)
				{
					Function_1(*uParam0, 4, 0, iParam15);
					TASK_PRIORITY_SET(*uParam0, 2);
				}
				AI_GOAL_LOOK_CLEAR(*uParam0);
				ACTOR_END_FORCE_HOLSTER(*uParam0);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(*uParam0, 4294967295);
				return 1;
			}
			break;
	}
	return 1;
}

void Function_49(int iParam0) //Position: 0x311F / 12575
{
	Function_83(iParam0, 0.0f);
	return;
}

vector3 Function_50(bool bParam0) //Position: 0x312B / 12587
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_51(int iParam0, bool bParam1, bool bParam2) //Position: 0x313C / 12604
{
	int iVar0;
	bool bVar1;
	
	if (Function_73(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_72())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_46(1);
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
			Function_71(1, bVar1);
			if (!bParam2)
			{
				if (!Function_70(Global_76848, 1))
				{
					Function_64(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_62(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_70(Global_76848, 2))
				{
					Function_64(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_32(1, bVar1, 0, 0);
	}
	else
	{
		Function_61(1, (4294967295 * bVar1), 0);
	}
	if (Function_46(1) <= 4294962296)
	{
		Function_60(1, 4294962296, 0);
	}
	else if (Function_46(1) >= 5000)
	{
		Function_60(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_42(1));
	iVar0 = Function_46(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_53(2, Function_59(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_53(2, Function_59(Global_12976.f_152), 0);
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
				Function_53(2, Function_59(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_53(2, Function_59(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_53(2, Function_59(Global_12976.f_152), 1);
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
				Function_53(2, Function_59(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_53(2, Function_59(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_53(2, Function_59(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_53(2, Function_59(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_53(2, Function_59(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_53(2, Function_59(Global_12976.f_152), 1);
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
				Function_53(2, Function_59(Global_12976.f_152), 0);
			}
			break;
	}
	Function_52(Global_12976.f_152, Global_12976.f_156);
	return;
}

void Function_52(int iParam0, int iParam1) //Position: 0x345D / 13405
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.2f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000001:
		case 0x00000002:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.3f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000003:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.4f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000004:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 120.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.5f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 1);
			break;
		
		case 0x00000005:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 180.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.8f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 1);
			break;
		
		default:
			break;
	}
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, 1);
			if (iParam1 != 4 || iParam1 != 5)
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, 1);
			}
			else
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, 0);
			}
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, 1);
			SET_ACTOR_SHOULD_TAUNT(Global_34573, 1);
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, 0);
			SET_ACTOR_SHOULD_TAUNT(Global_34573, 0);
			break;
		
		default:
			break;
	}
	return;
}

int Function_53(int iParam0, char* cParam1, bool bParam2) //Position: 0x36BB / 14011
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
	Function_57(iParam0, cParam1, 0, 1);
	iVar1 = Function_54();
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

int Function_54() //Position: 0x3840 / 14400
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
	Function_55();
	return 0;
}

void Function_55() //Position: 0x38DF / 14559
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
		Function_56(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_56(int iParam0) //Position: 0x398E / 14734
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

int Function_57(int iParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0x39EC / 14828
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
		Function_58(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, uParam3);
	}
	return 1;
}

void Function_58(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x3D3E / 15678
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

var Function_59(int iParam0) //Position: 0x3DC1 / 15809
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

int Function_60(int iParam0, bool bParam1, bool bParam2) //Position: 0x3E64 / 15972
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
		Function_45(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_44(iParam0);
	if (bParam2)
	{
		Function_33(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_61(int iParam0, bool bParam1, int iParam2) //Position: 0x4141 / 16705
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
	Function_44(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_33(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_62(int iParam0, bool bParam1) //Position: 0x433C / 17212
{
	bool bVar0;
	int iVar1;
	
	Function_61(iParam0, bParam1, 0);
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
	iVar1 = Function_63(iParam0, 4294967295);
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
	iVar1 = Function_54();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

var Function_63(int iParam0, int iParam1) //Position: 0x44D8 / 17624
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

void Function_64(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x4519 / 17689
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_66(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_65(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_65(char* cParam0, int iParam1) //Position: 0x4585 / 17797
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

bool Function_66(bool bParam0, var uParam1, int iParam2) //Position: 0x45BC / 17852
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
		if (Function_68(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_67(uVar0))
		{
			case 0x00000002:
				if (!Function_70(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_67(char* cParam0) //Position: 0x4634 / 17972
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

int Function_68(int iParam0) //Position: 0x46D5 / 18133
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_69(&iVar1, 2147483648);
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

void Function_69(int iParam0, int iParam1) //Position: 0x4712 / 18194
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

bool Function_70(var uParam0, int iParam1) //Position: 0x4725 / 18213
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_71(int iParam0, bool bParam1) //Position: 0x4738 / 18232
{
	bool bVar0;
	int iVar1;
	
	Function_32(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_63(iParam0, 4294967295);
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
	iVar1 = Function_54();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

bool Function_72() //Position: 0x48D5 / 18645
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

var Function_73(int iParam0) //Position: 0x4900 / 18688
{
	return (*&Global_12976 + 104)[iParam0];
}

void Function_74(int iParam0, bool bParam1, bool bParam2) //Position: 0x490F / 18703
{
	int iVar0;
	bool bVar1;
	
	if (Function_73(0) && (!Global_3380 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_72())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_3380)
	{
		Global_12976.f_164 = (Global_12976.f_164 + iParam0);
		return;
	}
	if (bVar1 == 0)
	{
		return;
	}
	iVar0 = Function_46(3);
	Function_76();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_71(3, bVar1);
		if (!bParam2)
		{
			if (!Function_70(Global_76848, 4))
			{
				Function_64(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_32(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_42(3));
	iVar0 = Function_46(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_53(4, Function_75(Global_12976.f_156), 1);
				Function_52(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_53(4, Function_75(Global_12976.f_156), 1);
				Function_52(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_53(4, Function_75(Global_12976.f_156), 1);
				Function_52(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_53(4, Function_75(Global_12976.f_156), 1);
				Function_52(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_53(4, Function_75(Global_12976.f_156), 1);
				Function_52(Global_12976.f_152, Global_12976.f_156);
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

var Function_75(int iParam0) //Position: 0x4ADE / 19166
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

void Function_76() //Position: 0x4B6D / 19309
{
	Function_78(3, 0.0f);
	Function_77(3, 10000.0f);
	return;
}

int Function_77(int iParam0, int iParam1) //Position: 0x4B83 / 19331
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_78(int iParam0, int iParam1) //Position: 0x4BC3 / 19395
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

void Function_79(bool bParam0, bool bParam1) //Position: 0x4C03 / 19459
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_INT(bParam0, "honor", bParam1);
	return;
}

bool Function_80(int iParam0, float fParam1) //Position: 0x4C23 / 19491
{
	if (Function_28(iParam0))
	{
		if (Function_81(iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_81(int iParam0) //Position: 0x4C3F / 19519
{
	if (Function_28(iParam0))
	{
		if (Function_82(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_82(int iParam0) //Position: 0x4D07 / 19719
{
	return Function_100(*iParam0, 2);
}

void Function_83(int iParam0, float fParam1) //Position: 0x4D14 / 19732
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_124(iParam0, 1);
	Function_69(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

void Function_84(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x4D35 / 19765
{
	if (*iParam0 != iParam1)
	{
		*iParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_85(*iParam0), iParam2, iParam3, iParam4);
	}
}

var Function_85(int iParam0) //Position: 0x4D59 / 19801
{
	float fVar0;
	
	switch (iParam0)
	{
		case 0xFFFFFFFF:
			return "EVERYTHING";
		
		case 0x00000000:
			return "SILENT";
		
		case 0x00000001:
			return "IDLE";
		
		case 0x00000002:
			return "IDLE_2";
		
		case 0x00000003:
			return "PASTORAL";
		
		case 0x00000004:
			return "PASTORAL_LOW";
		
		case 0x00000005:
			return "PASTORAL_HIGH";
		
		case 0x00000006:
			return "SUSPENSE";
		
		case 0x00000007:
			return "SUSPENSE_LOW";
		
		case 0x00000008:
			return "SUSPENSE_HIGH";
		
		case 0x00000009:
			return "SUSPENSE_DRUM";
		
		case 0x0000003E:
			return "SUSPENSE_FOG";
		
		case 0x0000000A:
			return "DRAMATIC";
		
		case 0x0000000B:
			return "DRAMATIC_LOW";
		
		case 0x0000000C:
			return "DRAMATIC_LOW_2";
		
		case 0x0000000D:
			return "DRAMATIC_LOW_3";
		
		case 0x0000000E:
			return "DRAMATIC_LOW_4";
		
		case 0x0000000F:
			return "DRAMATIC_SUSPENSE";
		
		case 0x00000010:
			return "DRAMATIC_SUSPENSE_2";
		
		case 0x00000011:
			return "DRAMATIC_HIGH";
		
		case 0x00000012:
			return "DRAMATIC_GUNFIGHT";
		
		case 0x00000013:
			return "DRAMATIC_ALT";
		
		case 0x00000014:
			return "DRAMATIC_2";
		
		case 0x00000015:
			return "DRAMATIC_3";
		
		case 0x00000016:
			return "DRAMATIC_4";
		
		case 0x00000017:
			return "CHASE";
		
		case 0x00000018:
			return "CHASE_EXTRA_LOW";
		
		case 0x00000019:
			return "nCHASE_LOW";
		
		case 0x0000001A:
			return "CHASE_HIGH";
		
		case 0x0000001B:
			return "nCHASE_ELK";
		
		case 0x0000001C:
			return "nCHASE_ALT";
		
		case 0x0000001D:
			return "MERCH_CHASE";
		
		case 0x0000001E:
			return "ARMY_GUNFIGHT";
		
		case 0x0000001F:
			return "ARMY_GUNFIGHT_LOW";
		
		case 0x00000020:
			return "ARMY_GUNFIGHT_HIGH";
		
		case 0x00000021:
			return "REBEL_GUNFIGHT";
		
		case 0x00000022:
			return "GUNFIGHT";
		
		case 0x00000023:
			return "GUNFIGHT_2";
		
		case 0x00000024:
			return "GUNFIGHT_4";
		
		case 0x00000025:
			return "GUNFIGHT_EX";
		
		case 0x00000026:
			return "GUNFIGHT_LOW";
		
		case 0x00000027:
			return "GUNFIGHT_LOW_2";
		
		case 0x00000028:
			return "GUNFIGHT_HIGH";
		
		case 0x00000029:
			return "GUNFIGHT_HIGH_2";
		
		case 0x0000002A:
			return "GUNFIGHT_ALT_HIGH";
		
		case 0x0000002B:
			return "GUNFIGHT_ELK";
		
		case 0x0000002C:
			return "GUNFIGHT_CHASE_HIGH";
		
		case 0x0000002D:
			return "INTENSE_GUNFIGHT";
		
		case 0x0000002E:
			return "SUSPENSE_GUNFIGHT_HIGH";
		
		case 0x0000002F:
			return "nMERCH_GUN";
		
		case 0x00000030:
			return "HAPPY";
		
		case 0x00000031:
			return "nHAPPY_LOW";
		
		case 0x00000032:
			return "HAPPY_HIGH";
		
		case 0x00000033:
			return "RIDING_1";
		
		case 0x00000034:
			return "RIDING_2";
		
		case 0x00000035:
			return "RIDING_3";
		
		case 0x00000036:
			return "RIDING_4";
		
		case 0x00000037:
			return "RIDING_ALT";
		
		case 0x00000038:
			return "TRAP";
		
		case 0x00000039:
			return "BARN";
		
		case 0x0000003A:
			return "MP_IDLE";
		
		case 0x0000003B:
			return "MP_SUSP";
		
		case 0x0000003C:
			return "CAR";
		
		case 0x0000003D:
			return "FINISHED";
		
		default:
	}
	fVar0 = "";
	return fVar0;
}

bool Function_86(var uParam0, var uParam1, var uParam2, bool bParam3, float fParam4, var uParam5, bool bParam6, var uParam7, var uParam8, float fParam9, bool bParam10, int iParam11, float fParam12, float fParam13, bool bParam14, int iParam15) //Position: 0x52AC / 21164
{
	float fVar0;
	
	if (!IS_ACTOR_VALID(*uParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(*uParam1))
	{
		return 0;
	}
	if (fParam13 == 0.0f && !*uParam8)
	{
		if (fParam13 > fParam9)
		{
			LOG_ERROR("firstAudioDist is too low to ever work");
		}
		else if (Function_93(*uParam0, *uParam1) > fParam13)
		{
			*uParam8 = 1;
			Function_88(*uParam0, Global_34573, bParam14, bParam14, 5, 60, 1, iParam15);
			Function_83(uParam7, 0.0f);
		}
	}
	switch (*uParam2)
	{
		case 0x00000000:
			SET_ACTOR_UPDATE_PRIORITY(*uParam0, false);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(*uParam0, 0);
			fLocal_20 = Function_93(*uParam0, Global_34573);
			AI_GOAL_LOOK_AT_ACTOR_NEW(*uParam0, *uParam1, -1.0f, 1);
			bParam6 = CREATE_POINT_IN_LAYOUT(bParam3, Function_197(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
			ATTACH_OBJECTS(bParam6, *uParam1, Function_197(), 0.0f, 0.5f, fParam12, 0.0f, 0.0f, 0.0f, 4294967295);
			TASK_FOLLOW_OBJECT_AT_DISTANCE(*uParam0, bParam6, 1.0f, iParam11);
			TASK_PRIORITY_SET(*uParam0, 1);
			*uParam2 = 1;
			break;
		
		case 0x00000001:
			if (IS_ACTOR_ON_FOOT(Global_34573))
			{
				fVar0 = (fParam9 - 3.0f);
			}
			else
			{
				fVar0 = fParam9;
			}
			if ((Function_93(*uParam0, *uParam1) - fLocal_20) < fParam4)
			{
				return 0;
			}
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), *uParam0, 1.0f, fVar0, 1, 1, 0))
			{
				if (bParam10)
				{
					TASK_CLEAR(*uParam0);
					TASK_FACE_ACTOR(*uParam0, *uParam1, 1, 3212836864);
				}
				else
				{
					AI_GOAL_LOOK_CLEAR(*uParam0);
				}
				*uParam5 = 1;
				return 1;
			}
			if (!Function_101(*uParam0, 0))
			{
				return 0;
			}
			break;
	}
	return 1;
}

void Function_87(bool bParam0) //Position: 0x543A / 21562
{
	Global_16876[bParam06].f_16++;
	if (Global_16876[bParam06].f_16 == 1)
	{
		Function_32(409, 1, 0, 0);
	}
	return;
}

void Function_88(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x546B / 21611
{
	bParam1 = bParam1;
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0) && Function_93(bParam0, Global_34573) >= IntToFloat(iParam5))
		{
			if (!IS_ACTOR_VALID(bParam1))
			{
				bParam1 = "";
			}
			CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
			if (bParam6)
			{
				if (IS_ACTOR_HOGTIED(bParam0))
				{
					if (!SAY_SINGLE_LINE_STRING_BEAT(bParam0, bParam2, bParam1, 1, 1, iParam4, iParam7, 0, 0, 1))
					{
						bParam3 = bParam3;
					}
				}
				else if (!SAY_SINGLE_LINE_STRING_BEAT(bParam0, bParam2, bParam1, 1, 1, iParam4, iParam7, 0, 1, 1))
				{
					bParam3 = bParam3;
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING(bParam0, bParam2, true, true, iParam4, 0, false, true);
			}
		}
	}
}

bool Function_89() //Position: 0x54FB / 21755
{
	return (RAND_INT_RANGE(0, 1999) / 1000) != 0;
}

int Function_90(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x550E / 21774
{
	if (IS_ACTOR_VALID(bParam0) && IS_ACTOR_VALID(bParam1))
	{
		if (!bParam0 != GET_PLAYER_ACTOR(0))
		{
			MEMORY_CONSIDER_AS(bParam0, bParam1, bParam2);
			MEMORY_IDENTIFY(bParam0, bParam1);
		}
		if (iParam3 == 1)
		{
			if (!bParam1 != GET_PLAYER_ACTOR(0))
			{
				MEMORY_CONSIDER_AS(bParam1, bParam0, bParam2);
				MEMORY_IDENTIFY(bParam1, bParam0);
			}
		}
	}
	return 1;
}

void Function_91() //Position: 0x5561 / 21857
{
	int iVar0;
	
	bLocal_94 = true;
	if (Global_29004 == 0)
	{
		iVar0 = Function_92(5);
		if (iVar0 == 0)
		{
			iLocal_93 = "FTR_SONG_03";
		}
		else if (iVar0 == 1)
		{
			iLocal_93 = "FTR_SONG_04";
		}
		else if (iVar0 == 2)
		{
			iLocal_93 = "FTR_SONG_05";
		}
		else if (iVar0 == 3)
		{
			iLocal_93 = "FTR_SONG_06";
		}
		else if (iVar0 == 4)
		{
			iLocal_93 = "FTR_SONG_08";
		}
	}
	else if (Global_29004 == 2)
	{
		if (Function_89())
		{
			iLocal_93 = "NRT_SONG_04";
		}
		else
		{
			iLocal_93 = "NRT_SONG_05";
		}
	}
	else if (Global_29004 == 1)
	{
		iVar0 = Function_92(3);
		if (iVar0 == 0)
		{
			iLocal_93 = "MEX_SONG_02";
		}
		else if (iVar0 == 1)
		{
			iLocal_93 = "MEX_SONG_04";
		}
		else if (iVar0 == 2)
		{
			iLocal_93 = "MEX_SONG_05";
		}
	}
	iLocal_89 = 6;
	AUDIO_MUSIC_FORCE_TRACK(iLocal_93, "SUSPENSE", -3.0f, 500, 4294967295, 3212836864, 0);
	return;
}

int Function_92(bool bParam0) //Position: 0x569E / 22174
{
	bParam0 = (bParam0 * 1000 - 1);
	return (RAND_INT_RANGE(0, bParam0) / 1000);
}

float Function_93(bool bParam0, bool bParam1) //Position: 0x56B7 / 22199
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

void Function_94(bool bParam0) //Position: 0x57A8 / 22440
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (DECOR_CHECK_EXIST(bParam0, "nnostickup"))
		{
			DECOR_REMOVE(bParam0, "nnostickup");
		}
		AI_SET_ENABLE_STICKUP_OVERRIDE(bParam0, 1);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam0, 1);
		SET_ACTOR_CUTSCENE_MODE(bParam0, 0);
		TASK_PRIORITY_SET(bParam0, 2);
	}
	return;
}

bool Function_95(bool bParam0, var uParam1, var uParam2, int iParam3, bool bParam4, float fParam5) //Position: 0x57F4 / 22516
{
	float fVar0;
	
	if (IS_ACTOR_VALID(bParam0) && !bParam4)
	{
		if (IS_ACTOR_ON_FOOT(bParam0))
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(bParam0, fParam5);
		}
		else
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(bParam0, (fParam5 + 3.0f));
		}
	}
	if (IS_ACTOR_VALID(bParam0) && !bParam4)
	{
		fVar0 = Function_93(bParam0, Global_34573);
		if (!Function_100(iParam3, 8))
		{
			if (GET_LAST_ATTACKER(bParam0) == Global_34573)
			{
				*uParam1 = 8;
				Function_96(bParam0);
				return 1;
			}
		}
		if (!Function_100(iParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(bParam0, 1.0f))
			{
				*uParam1 = 2;
				Function_96(bParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(bParam0, 1.0f, 1.0f))
			{
				*uParam1 = 2;
				Function_96(bParam0);
				return 1;
			}
		}
		if (!Function_100(iParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(bParam0) || (((GET_ACTOR_UNDER_RETICLE(Global_34573, 0) != bParam0 && IS_PLAYER_WEAPON_ZOOMED(Global_34573)) && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(Global_34573) != bParam0 && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f))
			{
				if (*uParam2 > 0.0f)
				{
					*uParam1 = 4;
					Function_96(bParam0);
					return 1;
				}
				if (*uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - *uParam2) < 1.3f)
					{
						*uParam1 = 4;
						Function_96(bParam0);
						return 1;
					}
				}
				*uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_100(iParam3, 1))
		{
			if (Global_3403 || Global_3404)
			{
				*uParam1 = 1;
				Function_96(bParam0);
				return 1;
			}
		}
		if (!Function_100(iParam3, 16))
		{
			if (UNK_0x7F454A92(bParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(bParam0)) > 2.0f && fVar0 > 18.0f)
				{
					*uParam1 = 16;
					Function_96(bParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_96(bool bParam0) //Position: 0x598B / 22923
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(bParam0, 1);
	UNK_0x99AFD2D1(bParam0, 0, 0);
	Function_97(bParam0);
	MEMORY_CONSIDER_AS(Global_34573, bParam0, 2);
	MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
	AI_GOAL_LOOK_CLEAR(bParam0);
	return;
}

void Function_97(bool bParam0) //Position: 0x59BF / 22975
{
	SAY_SINGLE_LINE_CONTEXT(bParam0, 60, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

bool Function_98(var uParam0, int iParam1) //Position: 0x59D6 / 22998
{
	if (Function_80(uParam0, iParam1))
	{
		Function_99(uParam0);
		return 1;
	}
	return 0;
}

void Function_99(int iParam0) //Position: 0x59EE / 23022
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

bool Function_100(int iParam0, int iParam1) //Position: 0x5A02 / 23042
{
	return (iParam0 && iParam1) == 0;
}

bool Function_101(bool bParam0, bool bParam1) //Position: 0x5A0F / 23055
{
	if (bParam1)
	{
		if (IS_ACTOR_HOGTIED(bParam0))
		{
			if (!(GET_TASK_STATUS(bParam0, 25) != 1 || GET_TASK_STATUS(bParam0, 25) != 3))
			{
				MEMORY_CLEAR_EVENTS(bParam0, 0);
				TASK_FLEE_ACTOR(bParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
				TASK_PRIORITY_SET(bParam0, 1);
			}
			Function_11(bParam0);
			return 0;
		}
		if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 163840))
		{
			Function_11(bParam0);
			return 0;
		}
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		if (Function_102(bParam0, 0) && !AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 16384))
		{
			return 0;
		}
		if (IS_ACTOR_ALIVE(bParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int Function_102(bool bParam0, int iParam1) //Position: 0x5AAB / 23211
{
	bool bVar0;
	int iVar1;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (iParam1 && IS_ACTOR_HOGTIED(bParam0))
		{
			return 1;
		}
		bVar0 = SQUAD_GET(bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			iVar1 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(bVar0);
		}
		else
		{
			iVar1 = 172712;
		}
		if (AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), iVar1))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_103(bool bParam0, int iParam1, float fParam2) //Position: 0x5AF5 / 23285
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		if (IS_ACTOR_VALID((*bParam0)[iVar0]))
		{
			if (Function_93((*bParam0)[iVar0], Global_34573) > fParam2)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

float Function_104(bool bParam0) //Position: 0x5B2F / 23343
{
	var uVar0;
	float fVar1;
	
	if (!bParam0)
	{
		Function_105(&uVar0, &fVar1);
		if (fVar1 < 60.0f)
		{
			return (fVar1 + 20.0f);
		}
		return (fVar1 + 10.0f);
	}
	return (190.0f + 20.0f);
}

void Function_105(float fParam0, int iParam1) //Position: 0x5B6A / 23402
{
	vector3 vVar0;
	
	if (Global_3386 && !Global_3403)
	{
		*fParam0 = 65.0f;
		*iParam1 = 95.0f;
	}
	else if ((!IS_ACTOR_RIDING(GET_PLAYER_ACTOR(0)) && !IS_ACTOR_RIDING_VEHICLE(GET_PLAYER_ACTOR(0))) && !Global_3403)
	{
		*fParam0 = 115.0f;
		*iParam1 = 170.0f;
	}
	else
	{
		GET_ACTOR_VELOCITY(GET_PLAYER_ACTOR(0), &vVar0);
		if (VMAG(vVar0) > 5.0f)
		{
			*fParam0 = 130.0f;
			*iParam1 = 190.0f;
		}
		else
		{
			*fParam0 = 130.0f;
			*iParam1 = 190.0f;
		}
	}
	return;
}

void Function_106(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6) //Position: 0x5BF3 / 23539
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!*uParam2)
	{
		iVar0 = 1;
	}
	iVar1 = 0;
	while (iVar1 <= iParam1)
	{
		if (IS_ACTOR_VALID((*uParam0)[iVar1]))
		{
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), (*uParam0)[iVar1], 1.0f, iParam5, 1, 1, 0))
			{
				*uParam2 = 1;
				if (iParam4 != 0)
				{
					Global_25265 = (GET_CURRENT_GAME_TIME() + IntToFloat(iParam4));
				}
			}
		}
		iVar1++;
	}
	if (*uParam2 && iVar0)
	{
		if (StackVal & 64 == 64)
		{
			Function_118(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_117(0);
		}
		if (bParam6)
		{
			Function_115(0, GET_THIS_SCRIPT_ID());
			Global_3373 = GET_THIS_SCRIPT_ID();
			Global_3401 = 1;
			Function_113(iParam3);
		}
		Function_111(iParam3);
		if (Function_110(StackVal, 32768))
		{
			Function_107(1);
		}
		Global_16876[iParam36].f_12++;
		Function_32(408, 1, 0, 0);
	}
}

void Function_107(bool bParam0) //Position: 0x5CE0 / 23776
{
	if (bParam0)
	{
		Function_109(0x10000000);
	}
	else
	{
		Function_108(0x10000000);
	}
	Global_26316.f_172 = 0;
	return;
}

void Function_108(int iParam0) //Position: 0x5D04 / 23812
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_109(int iParam0) //Position: 0x5D21 / 23841
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

bool Function_110(var uParam0, int iParam1) //Position: 0x5D34 / 23860
{
	return (uParam0 && iParam1) == 0;
}

void Function_111(int iParam0) //Position: 0x5D41 / 23873
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (!Function_100(StackVal, 524288))
	{
		if (Global_16876[iParam06].f_16 < 0 && Global_16876[iParam06].f_16 > 2)
		{
			iVar0 = 10;
		}
		else if (Global_16876[iParam06].f_16 <= 2 && Global_16876[iParam06].f_16 > 4)
		{
			iVar0 = 16;
		}
		else if (Global_16876[iParam06].f_16 > 4)
		{
			iVar0 = 24;
		}
		if (iVar0 >= 0)
		{
			bVar1 = Function_112(iVar0 * 60);
			ADD_TIME(&Global_17483[iParam075] + 264, 0, 0, bVar1, 0);
			Global_16876[iParam06] = Global_17483[iParam075].f_264;
		}
	}
	return;
}

int Function_112(int iParam0) //Position: 0x5DE5 / 24037
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_113(int iParam0) //Position: 0x5DFB / 24059
{
	struct<77> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Global_30842[16])
	{
		PRINTNL();
		PRINTSTRING("SAVE_BEAT_STATE: ");
		PRINTSTRING(GET_ASSET_NAME(Global_17483[iParam075].f_96, 4));
		PRINTNL();
		PRINTSTRING("curIDX: ");
		PRINTINT(Var0.f_76);
		PRINTNL();
	}
	Function_114(&Var0 + 80[Var0.f_763], &(Global_16876[iParam06]), iParam0);
	if (Var0.f_76 == 2)
	{
		Var0.f_76 = 0;
	}
	else
	{
		Var0.f_76++;
	}
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

void Function_114(var uParam0, var uParam1, int iParam2) //Position: 0x5E99 / 24217
{
	uParam0->f_4 = iParam2;
	*uParam0 = uParam1->f_12;
	uParam0->f_8 = 1;
	return;
}

void Function_115(int iParam0, int iParam1) //Position: 0x5EB1 / 24241
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= Global_25267)
	{
		iVar1 = 1;
		Global_25267[iVar058].f_84 = 0;
		if (Global_25267[iVar058].f_44 == iParam1)
		{
			iVar1 = 0;
		}
		if ((Global_25267[iVar058] != 128 || Global_25267[iVar058] != 64) && iParam0 != 0)
		{
			iVar1 = 0;
		}
		if (IS_SCRIPT_VALID(Global_25267[iVar058].f_44) && iVar1 != 1)
		{
			TERMINATE_SCRIPT(Global_25267[iVar058].f_44);
			Function_116(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_116(int iParam0) //Position: 0x5F33 / 24371
{
	iParam0->f_92 = 0;
	iParam0->f_4 = 0;
	iParam0->f_12 = 4294967295;
	iParam0->f_16 = "";
	*(iParam0 + 20) = { 0.0f, 0.0f, 0.0f };
	*(iParam0 + 32) = { 0.0f, 0.0f, 0.0f };
	iParam0->f_44 = "";
	iParam0->f_56 = "";
	iParam0->f_48 = 4294967295;
	iParam0->f_52 = "";
	iParam0->f_88 = 0.0f;
	iParam0->f_76 = 0;
	return;
}

void Function_117(int iParam0) //Position: 0x5F81 / 24449
{
	Global_12976.f_76 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 76, 0, 0, (iParam0 + Function_112(900)), 0);
	return;
}

void Function_118(bool bParam0) //Position: 0x5FA3 / 24483
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, (bParam0 + Function_112(200)), 0);
	return;
}

void Function_119(vector3 vParam0, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7, bool bParam8) //Position: 0x5FC4 / 24516
{
	int iVar0;
	
	iVar0 = 0;
	if (!*uParam3)
	{
		iVar0 = 1;
	}
	if (IS_ACTOR_VALID(bParam5))
	{
		if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam5, 1.0f, iParam7, 1, 1, 0))
		{
			if (iParam6 != 0)
			{
				Global_25265 = (GET_CURRENT_GAME_TIME() + IntToFloat(iParam6));
			}
			*uParam3 = 1;
		}
	}
	else if (!Function_120(StackVal, StackVal, vParam0))
	{
		if (CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), vParam0, 1.0f, iParam7, 1, 1, 0))
		{
			if (iParam6 != 0)
			{
				Global_25265 = (GET_CURRENT_GAME_TIME() + IntToFloat(iParam6));
			}
			*uParam3 = 1;
		}
	}
	if (*uParam3 && iVar0)
	{
		if (StackVal & 64 == 64)
		{
			Function_118(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_117(0);
		}
		if (bParam8)
		{
			Function_115(0, GET_THIS_SCRIPT_ID());
			Global_3373 = GET_THIS_SCRIPT_ID();
			Function_113(iParam4);
			Global_3401 = 1;
		}
		Function_111(iParam4);
		if (Function_110(StackVal, 32768))
		{
			Function_107(1);
		}
		Global_16876[iParam46].f_12++;
		Function_32(408, 1, 0, 0);
	}
}

bool Function_120(vector3 vParam0) //Position: 0x60CB / 24779
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_121() //Position: 0x60E3 / 24803
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_122(var uParam0, var uParam1, var uParam2, float fParam3, vector3 vParam4) //Position: 0x60EC / 24812
{
	var uVar0[5];
	int iVar6;
	
	if (*uParam0 != 4294967295)
	{
		*uParam0 = CLEAR_AREA_OF_TREE_TYPE(vParam4, (fParam3 + 2.0f), "");
	}
	if (*uParam1 != 4294967295)
	{
		*uParam1 = CLEAR_AREA_OF_BREAKABLE_TREES(vParam4, (fParam3 + 2.0f));
	}
	if (*uParam2 != 4294967295)
	{
		*uParam2 = CLEAR_AREA_OF_GRASS(vParam4, fParam3);
	}
	if (IS_LAYOUTREF_VALID(Global_30616))
	{
		if (Function_123(StackVal, StackVal, Global_30616, "player_herb", &uVar0, 20.0f, 5, vParam4) >= 0)
		{
			iVar6 = 0;
			while (iVar6 <= 5)
			{
				if (IS_OBJECT_VALID(uVar0[iVar6]))
				{
					DESTROY_OBJECT(uVar0[iVar6]);
				}
				iVar6++;
			}
		}
	}
}

int Function_123(bool bParam0, bool bParam1, var uParam2, float fParam3, int iParam4, vector3 vParam5) //Position: 0x618D / 24973
{
	int iVar0;
	vector3 vVar1;
	bool bVar4;
	bool bVar5;
	
	iVar0 = 0;
	iParam4 = iParam4;
	if (IS_LAYOUTREF_VALID(bParam0))
	{
		bVar5 = CREATE_OBJECT_ITERATOR(bParam0);
		ITERATE_ON_OBJECT_TYPE(bVar5, 12);
		ITERATE_ON_PARTIAL_NAME(bVar5, bParam1);
		bVar4 = START_OBJECT_ITERATOR(bVar5);
		while (IS_OBJECT_VALID(bVar4))
		{
			if (IS_OBJECT_VALID(bVar4))
			{
				GET_OBJECT_POSITION(bVar4, &vVar1);
				if (VDIST(vParam5, vVar1) > fParam3)
				{
					(*uParam2)[iVar0] = bVar4;
					iVar0++;
					if (iVar0 > iParam4)
					{
						DESTROY_ITERATOR(bVar5);
						return iVar0;
					}
				}
			}
			bVar4 = OBJECT_ITERATOR_NEXT(bVar5);
		}
		DESTROY_ITERATOR(bVar5);
		return iVar0;
	}
	return iVar0;
}

void Function_124(var uParam0, int iParam1) //Position: 0x6221 / 25121
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

float Function_125() //Position: 0x6230 / 25136
{
	float fVar0;
	int iVar1;
	
	if (Global_3371)
	{
		return 0.0f;
	}
	Function_105(&fVar0, &iVar1);
	if (fVar0 >= 50.0f)
	{
		return (fVar0 - 10.0f);
	}
	return (fVar0 - 20.0f);
}

bool Function_126(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x6261 / 25185
{
	struct<8> Var0;
	bool bVar8;
	bool bVar9;
	
	if (Global_3371 && iParam0->f_32)
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_164(GET_SCRIPT_NAME()) };
		bVar8 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Global_26150, &Var0, 4.203895E-45f, Function_162(*(iParam0 + 8), 0.0f, Global_34573, *(iParam0 + 8)), 0.0f, iParam0->f_52, 20.0f, iParam0->f_52);
		DECOR_SET_INT(bVar8, "script", GET_THIS_SCRIPT_ID());
		if (iParam0->f_56 != 4294967295)
		{
			DECOR_SET_INT(StackVal, bVar8, "category");
			Function_160(&bVar8, iParam0->f_32);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
		*(iParam0 + 8) = { StackVal, StackVal, Global_34574 };
		return 1;
	}
	*uParam3 = 0;
	if (!Function_127(iParam0))
	{
		if (iParam0->f_32 == 1)
		{
			if (*uParam2 == 0)
			{
				Function_15("Still scanning for the proper terrain to run this event.  Move the player around to find a good spawn location.", -1.0f, 1, 2, 1, 0);
			}
		}
		else if (*uParam2 >= 20)
		{
			*uParam3 = 1;
			Global_26153++;
		}
		*uParam2++;
		*uParam1 = 1000;
		*(iParam0 + 8) = { 0.0f, 0.0f, 0.0f };
		return 0;
	}
	if (iParam0->f_32)
	{
		HUD_CLEAR_SMALL_TEXT_QUEUE();
		Global_3399 = 0;
		Function_15("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 5.0f, 1, 2, 1, 0);
	}
	if (bParam4)
	{
		if (!Function_13(iParam0->f_56, 0, 1, 0, 0))
		{
			*uParam3 = 1;
			LOG_ERROR("SET_BEAT_NEXT_SPAWN_TIME Failed, shutting down event");
			return 0;
		}
		if (iParam0->f_52 >= 0.0f)
		{
			LOG_ERROR("SET_BEAT_NEXT_SPAWN_TIME Failed: Volume restriction size not set");
			return 0;
		}
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_164("restrictVol") };
		bVar9 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Global_26150, &Var0, 4.203895E-45f, Function_162(*(iParam0 + 8), 0.0f, Global_34573, *(iParam0 + 8)), 0.0f, iParam0->f_52, 20.0f, iParam0->f_52);
		DECOR_SET_INT(bVar9, "script", GET_THIS_SCRIPT_ID());
		if (iParam0->f_56 != 4294967295)
		{
			DECOR_SET_INT(StackVal, bVar9, "category");
			Function_160(&bVar9, iParam0->f_32);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
	}
	return 1;
}

bool Function_127(int iParam0) //Position: 0x65F3 / 26099
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	float fVar12;
	float fVar13;
	bool bVar14;
	struct<17> Var15;
	
	GET_POSITION(GET_PLAYER_ACTOR(0), &vVar9);
	switch (iParam0->f_64)
	{
		case 0x00000005:
			if (!IS_ITERATOR_VALID(StackVal))
			{
				if (IS_LAYOUTREF_VALID(Global_30616))
				{
					iParam0->f_4 = CREATE_OBJECT_ITERATOR(Global_30616);
				}
				else
				{
					return 0;
				}
			}
			Function_159(iParam0 + 4);
			switch ((iParam0 + 64 + 24)->f_20)
			{
				case 0x00000000:
					ITERATE_IN_LAYOUT(StackVal, Global_30616);
					break;
				
				case 0x00000001:
					ITERATE_IN_LAYOUT(StackVal, FIND_NAMED_LAYOUT("regions_layout"));
					break;
			}
			if (StackVal < 0.0f)
			{
				vVar3 = { 0.0f, 0.0f, Function_104(1) };
				ROTATE_VECTOR_XZ(&vVar3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar3, StackVal) };
				ITERATE_IN_SPHERE(StackVal, vVar3, Function_104(1));
			}
			if (!STRINGS_ARE_EQUAL(iParam0 + 64 + 24, ""))
			{
				ITERATE_ON_PARTIAL_NAME(StackVal, iParam0 + 64 + 24);
			}
			if (!4294967295 != (iParam0 + 64 + 24)->f_12)
			{
				ITERATE_ON_OBJECT_TYPE(StackVal, (iParam0 + 64 + 24)->f_12);
			}
			if (GET_NUM_ITERATOR_MATCHES(StackVal) >= 0)
			{
				if (StackVal & 512 == 0 || iParam0->f_36 != 1)
				{
					if ((iParam0 + 64 + 24)->f_16 == 0)
					{
						bVar0 = Function_158(StackVal, StackVal, StackVal, vVar9, 0.01f);
					}
					else
					{
						bVar0 = Function_157(StackVal, StackVal, StackVal, vVar9, 0.1f, "locflag", (iParam0 + 64 + 24)->f_16);
					}
				}
				else if ((iParam0 + 64 + 24)->f_16 == 0)
				{
					bVar0 = Function_156(StackVal, StackVal, StackVal, vVar9, Function_125());
				}
				else
				{
					bVar0 = Function_155(StackVal, StackVal, StackVal, vVar9, Function_125(), "locflag", (iParam0 + 64 + 24)->f_16);
				}
				if (IS_OBJECT_VALID(bVar0))
				{
					GET_OBJECT_POSITION(bVar0, iParam0 + 8);
					GET_OBJECT_ORIENTATION(bVar0, iParam0 + 20);
					iParam0->f_48 = bVar0;
					DESTROY_ITERATOR(StackVal);
				}
				else
				{
					DESTROY_ITERATOR(StackVal);
					return 0;
				}
			}
			DESTROY_ITERATOR(StackVal);
			return 0;
			break;
		
		case 0x00000006:
			if (!IS_ITERATOR_VALID(StackVal))
			{
				iParam0->f_4 = CREATE_OBJECT_ITERATOR(FIND_NAMED_LAYOUT("regions_layout"));
			}
			Function_159(iParam0 + 4);
			ITERATE_IN_LAYOUT(StackVal, FIND_NAMED_LAYOUT("regions_layout"));
			fVar13 = 130.0f;
			fVar12 = 190.0f;
			GET_POSITION(GET_PLAYER_ACTOR(0), &vVar3);
			ITERATE_IN_SPHERE(StackVal, StackVal, vVar3);
			bVar1 = START_OBJECT_ITERATOR(StackVal);
			while (IS_OBJECT_VALID(bVar1) && !IS_OBJECT_VALID(bVar0))
			{
				if (DECOR_CHECK_EXIST(bVar1, "regid"))
				{
					bVar14 = DECOR_GET_INT(bVar1, "regid");
					if (Function_154(bVar14))
					{
						if (StackVal == (iParam0 + 64)->f_48)
						{
							if ((StackVal && Global_29008[bVar14]) >= 0)
							{
								GET_OBJECT_POSITION(bVar1, &vVar3);
								if (VDIST(vVar9, vVar3) < fVar13 && VDIST(vVar9, vVar3) > Function_104(1))
								{
									bVar0 = bVar1;
								}
							}
						}
					}
				}
				bVar1 = OBJECT_ITERATOR_NEXT(StackVal);
			}
			if (IS_OBJECT_VALID(bVar0))
			{
				GET_OBJECT_POSITION(bVar0, iParam0 + 8);
				Function_153(iParam0 + 8, 99.0f, iParam0 + 8, 10);
				GET_OBJECT_ORIENTATION(bVar0, iParam0 + 20);
				iParam0->f_48 = DECOR_GET_INT(bVar0, "regid");
			}
			else
			{
				DESTROY_ITERATOR(StackVal);
				return 0;
			}
			break;
		
		case 0x00000002:
		case 0x00000001:
			if (StackVal && (((!Global_3386 && Global_3388) && ARE_CURVES_IN_RANGE(48, vVar9, 100.0f)) && 8) != 8)
			{
				vVar6 = { 0.0f, 0.0f, -10.0f };
				ROTATE_VECTOR_XZ(&vVar6, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				Function_152(&vVar9, &vVar6);
				vVar3 = { StackVal, StackVal, Function_152(&vVar9, &vVar6) };
				if (!Function_120(StackVal, StackVal, vVar3))
				{
					PRINTSTRING("Player Pos: ");
					PRINTVECTOR(vVar9);
					PRINTNL();
					Function_105(&fVar13, &fVar12);
					if (VDIST(vVar3, vVar9) < ((fVar13 + ((fVar12 - fVar13) / 2.0f)) * 0.8f))
					{
						iVar2 = Function_149(StackVal, StackVal, iParam0, vVar3);
					}
				}
			}
			else
			{
				iVar2 = Function_145(iParam0);
			}
			if (iVar2 == 1)
			{
				if ((iParam0 + 64)->f_128 == 4)
				{
					if (IS_OBJECT_VALID(StackVal))
					{
						if (GET_OBJECT_TYPE(StackVal) == 9)
						{
							if (!IS_POINT_IN_VOLUME(StackVal, *(iParam0 + 8)))
							{
								return 0;
							}
						}
					}
				}
				if ((iParam0 + 64)->f_128 == 5)
				{
				}
				if (iParam0->f_60 == 2)
				{
					if (!Function_144(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (iParam0->f_60 == 1)
				{
					if (!Function_143(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (Function_100(StackVal, 131072))
				{
					if (StackVal || Function_142(StackVal, Function_142(StackVal, StackVal, *(iParam0 + 8)), Global_34574))
					{
						return 0;
					}
				}
				if (StackVal & 1024 == 1024)
				{
					if (Function_141(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (!Function_137(iParam0 + 8, iParam0 + 52, 0, iParam0->f_32))
				{
					return 0;
				}
			}
			return 0;
			break;
		
		case 0x00000003:
			if (StackVal)
			{
				fVar13 = 120.0f;
				fVar12 = 150.0f;
				vVar3 = { 0.0f, 0.0f, ((fVar13 + fVar12) * -0.5f) };
				ROTATE_VECTOR_XZ(&vVar3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar3, StackVal) };
				bVar23 = START_CURVE_QUERY(Global_28841, vVar3, Function_136((iParam0 + 64)->f_120, 0), 0.0f, 20.0f, 5.0f, 0);
			}
			else
			{
				bVar23 = START_CURVE_QUERY(Global_28841, vVar9, Function_136((iParam0 + 64)->f_120, 0), 120.0f, 150.0f, 5.0f, 0);
			}
			if (GET_NUM_POINTS_IN_CURVE_QUERY(bVar23) >= 0)
			{
				bVar21 = RAND_INT_RANGE(0, (GET_NUM_POINTS_IN_CURVE_QUERY(bVar23) - 1));
				GET_POINT_FROM_CURVE_QUERY(bVar23, bVar21, &Var15);
				Function_135(&Var15);
				*(iParam0 + 8) = { StackVal, StackVal, Function_135(&Var15) };
				iParam0->f_20 = Var15.f_12;
				(iParam0 + 20)->f_4 = Var15.f_16;
				iParam0->f_48 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(bVar23, bVar21);
				UNK_0xDF93BD7C(bVar23);
			}
			else
			{
				UNK_0xDF93BD7C(bVar23);
				return 0;
			}
			if (iParam0->f_60 == 2)
			{
				if (!Function_144(StackVal, StackVal, *(iParam0 + 8)))
				{
					return 0;
				}
			}
			if (iParam0->f_60 == 1)
			{
				if (!Function_143(StackVal, StackVal, *(iParam0 + 8)))
				{
					return 0;
				}
			}
			if (iParam0->f_60 == 0)
			{
				if (!(StackVal || Function_144(StackVal, Function_143(StackVal, StackVal, *(iParam0 + 8)), *(iParam0 + 8))))
				{
					return 0;
				}
			}
			if (Function_100(StackVal, 131072))
			{
				if (StackVal || Function_142(StackVal, Function_142(StackVal, StackVal, *(iParam0 + 8)), Global_34574))
				{
					return 0;
				}
			}
			if (StackVal && !Function_137(iParam0 + 8, iParam0 + 52, 0, iParam0->f_32) == 262144)
			{
				return 0;
			}
			break;
		
		case 0x00000004:
			if (!Function_132((iParam0 + 64)->f_120) < 0)
			{
				return 0;
			}
			break;
		
		case 0x00000007:
			switch ((iParam0 + 64)->f_128)
			{
				case 0x00000001:
					bVar24 = Function_129(StackVal, Global_29004, Global_29005, Global_29006, 1);
					if (IS_PERS_CHAR_VALID(bVar24))
					{
						if (IS_PERS_CHAR_ALIVE(bVar24))
						{
							return 0;
						}
					}
					break;
				
				case 0x00000002:
					iVar22 = 0;
					while (StackVal <= (StackVal - iVar22) + 1)
					{
						bVar24 = Function_129(StackVal, Global_29004, Global_29005, (Global_29006 + iVar22), 1);
						if (IS_PERS_CHAR_VALID(bVar24))
						{
							if (IS_PERS_CHAR_ALIVE(bVar24))
							{
								iVar25++;
							}
						}
						iVar22++;
					}
					if (iVar25 >= 0)
					{
						return 0;
					}
					break;
				
				case 0x00000003:
					if (!IS_ACTOR_IN_VOLUME(StackVal, GET_PLAYER_ACTOR(0)))
					{
						return 0;
					}
					break;
				
				case 0x00000004:
					iParam0->f_48 = StackVal;
					break;
				
				default:
					LOG_ERROR("TRIGGER_NONE event type??");
					return 0;
					break;
			}
			break;
		
		default:
			LOG_ERROR("AMB_EVENT type not defined for BEAT_SET_LAUNCH_PARAMS_FOR_BEAT");
			return 0;
			break;
	}
	if (Function_128(StackVal, StackVal, *(iParam0 + 8)))
	{
		return 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(*(iParam0 + 8), 10.0f))
	{
		return 0;
	}
	return 1;
}

bool Function_128(vector3 vParam0) //Position: 0x6E1D / 28189
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(Global_25964))
	{
		if (IS_POINT_IN_VOLUME(vParam0, GET_VOLUME_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, Global_25964))))
		{
			return 1;
		}
		bVar0++;
	}
	return 0;
}

bool Function_129(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x6E52 / 28242
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = bParam1;
	bVar1 = bParam2;
	PRINTSTRING("RC_REFERENCE_GLOBAL ");
	PRINTINT(bParam0);
	PRINTSTRING("-");
	PRINTINT(bVar0);
	PRINTSTRING("-");
	PRINTINT(bVar1);
	PRINTSTRING(" ");
	PRINTINT(bParam3);
	PRINTNL();
	if (!bParam4)
	{
		switch (bParam0)
		{
			case 0x00000000:
				switch (bVar0)
				{
					case 0x00000000:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_130(&Global_6298, &Global_7189, bParam3);
								break;
							
							case 0x00000001:
								return Function_130(&Global_6364, &Global_7287, bParam3);
								break;
							
							case 0x00000002:
								return Function_130(&Global_6351, &Global_7268, bParam3);
								break;
							
							default:
								return Function_130(&Global_6391, &Global_7327, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_130(&Global_6501, &Global_7490, bParam3);
								break;
							
							case 0x00000001:
								return Function_130(&Global_6402, &Global_7343, bParam3);
								break;
							
							case 0x00000003:
								return Function_130(&Global_6433, &Global_7389, bParam3);
								break;
							
							case 0x00000002:
								return Function_130(&Global_6490, &Global_7474, bParam3);
								break;
							
							case 0x00000004:
								return Function_130(&Global_6537, &Global_7543, bParam3);
								break;
							
							default:
								return Function_130(&Global_6532, &Global_7536, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_130(&Global_6563, &Global_7581, bParam3);
								break;
							
							case 0x00000001:
								return Function_130(&Global_6614, &Global_7657, bParam3);
								break;
							
							case 0x00000002:
								return Function_130(&Global_6643, &Global_7700, bParam3);
								break;
							
							default:
								return Function_130(&Global_6550, &Global_7562, bParam3);
								break;
						}
						break;
					
					case 0x00000003:
						switch (bVar1)
						{
							case 0x00000001:
								return Function_130(&Global_6667, &Global_7735, bParam3);
								break;
							
							default:
								return Function_130(&Global_6704, &Global_7790, bParam3);
								break;
						}
						break;
					
					default:
						break;
				}
				break;
			
			case 0x00000001:
				switch (bVar0)
				{
					case 0x00000000:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_130(&Global_6709, &Global_7797, bParam3);
								break;
							
							case 0x00000001:
								return Function_130(&Global_6764, &Global_7879, bParam3);
								break;
							
							case 0x00000002:
								return Function_130(&Global_6785, &Global_7910, bParam3);
								break;
							
							default:
								return Function_130(&Global_6810, &Global_7947, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_130(&Global_6815, &Global_7954, bParam3);
								break;
							
							default:
								return Function_130(&Global_6928, &Global_8122, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000002:
								return Function_130(&Global_6933, &Global_8129, bParam3);
								break;
							
							case 0x00000001:
								return Function_130(&Global_6962, &Global_8172, bParam3);
								break;
							
							case 0x00000003:
								return Function_130(&Global_6987, &Global_8209, bParam3);
								break;
							
							default:
								return Function_130(&Global_7027, &Global_8268, bParam3);
								break;
						}
						break;
					
					default:
						break;
				}
				break;
			
			case 0x00000002:
				return "";
				break;
			
			default:
				return "";
				break;
		}
	}
	else if (bVar1 == Global_30640[0])
	{
		return Function_130(&Global_6298, &Global_7189, bParam3);
	}
	if (bVar1 == Global_30640[1])
	{
		return Function_130(&Global_6364, &Global_7287, bParam3);
	}
	if (bVar1 == Global_30640[2])
	{
		return Function_130(&Global_6351, &Global_7268, bParam3);
	}
	if (bVar1 == Global_30658[0])
	{
		return Function_130(&Global_6501, &Global_7490, bParam3);
	}
	if (bVar1 == Global_30658[1])
	{
		return Function_130(&Global_6402, &Global_7343, bParam3);
	}
	if (bVar1 == Global_30658[3])
	{
		return Function_130(&Global_6433, &Global_7389, bParam3);
	}
	if (bVar1 == Global_30658[2])
	{
		return Function_130(&Global_6490, &Global_7474, bParam3);
	}
	if (bVar1 == Global_30658[4])
	{
		return Function_130(&Global_6537, &Global_7543, bParam3);
	}
	if (bVar1 == Global_30668[0])
	{
		return Function_130(&Global_6563, &Global_7581, bParam3);
	}
	if (bVar1 == Global_30668[1])
	{
		return Function_130(&Global_6614, &Global_7657, bParam3);
	}
	if (bVar1 == Global_30668[2])
	{
		return Function_130(&Global_6643, &Global_7700, bParam3);
	}
	if (bVar1 == Global_30679[1])
	{
		return Function_130(&Global_6667, &Global_7735, bParam3);
	}
	if (bVar1 == Global_30685[0])
	{
		return Function_130(&Global_6709, &Global_7797, bParam3);
	}
	if (bVar1 == Global_30685[1])
	{
		return Function_130(&Global_6764, &Global_7879, bParam3);
	}
	if (bVar1 == Global_30685[2])
	{
		return Function_130(&Global_6785, &Global_7910, bParam3);
	}
	if (bVar1 == Global_30693[0])
	{
		return Function_130(&Global_6815, &Global_7954, bParam3);
	}
	if (bVar1 == Global_30707[2])
	{
		return Function_130(&Global_6933, &Global_8129, bParam3);
	}
	if (bVar1 == Global_30707[1])
	{
		return Function_130(&Global_6962, &Global_8172, bParam3);
	}
	if (bVar1 == Global_30707[3])
	{
		return Function_130(&Global_6987, &Global_8209, bParam3);
	}
	if (bVar1 == Global_30628[0])
	{
		return Function_130(&Global_6391, &Global_7327, bParam3);
	}
	if (bVar1 == Global_30628[1])
	{
		return Function_130(&Global_6532, &Global_7536, bParam3);
	}
	if (bVar1 == Global_30628[2])
	{
		return Function_130(&Global_6550, &Global_7562, bParam3);
	}
	if (bVar1 == Global_30628[3])
	{
		return Function_130(&Global_6704, &Global_7790, bParam3);
	}
	if (bVar1 == Global_30633[0])
	{
		return Function_130(&Global_6810, &Global_7947, bParam3);
	}
	if (bVar1 == Global_30633[2])
	{
		return Function_130(&Global_6928, &Global_8122, bParam3);
	}
	if (bVar1 == Global_30633[1])
	{
		return Function_130(&Global_7027, &Global_8268, bParam3);
	}
	return "";
}

var Function_130(var uParam0, var uParam1, bool bParam2) //Position: 0x7467 / 29799
{
	int iVar0;
	
	iVar0 = bParam2;
	if (iVar0 <= *uParam0 || iVar0 > 0)
	{
		return "";
	}
	if (!Function_131(uParam0[iVar02], 2))
	{
		return "";
	}
	if (!IS_PERS_CHAR_VALID(StackVal))
	{
		return "";
	}
	ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
	return StackVal;
}

bool Function_131(var uParam0, int iParam1) //Position: 0x74B9 / 29881
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_132(int iParam0) //Position: 0x74D5 / 29909
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = 0;
	bVar1 = CREATE_OBJECT_ITERATOR(Global_28841);
	ITERATE_ON_OBJECT_TYPE(bVar1, 25);
	bVar2 = START_OBJECT_ITERATOR(bVar1);
	if (iParam0 == 0)
	{
		iVar0 = GET_NUM_ITERATOR_MATCHES(bVar1);
	}
	else
	{
		while (IS_OBJECT_VALID(bVar2))
		{
			if (Function_133(GET_SQUAD_FROM_OBJECT(bVar2)) == iParam0)
			{
				iVar0++;
			}
			bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
		}
	}
	DESTROY_ITERATOR(bVar1);
	return iVar0;
}

int Function_133(bool bParam0) //Position: 0x7530 / 30000
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 4294967295;
	}
	bVar0 = Function_134(bParam0);
	if (!IS_ACTOR_VALID(bVar0))
	{
		return 4294967295;
	}
	if (IS_ACTOR_RIDING_VEHICLE(bVar0))
	{
		return 2;
	}
	if (IS_ACTOR_RIDING(bVar0))
	{
		return 1;
	}
	return 4294967295;
}

var Function_134(bool bParam0) //Position: 0x7568 / 30056
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return "";
	}
	bVar1 = false;
	while (bVar1 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar0 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar1);
		if (IS_ACTOR_VALID(bVar0) && IS_ACTOR_ALIVE(bVar0))
		{
			return bVar0;
		}
		bVar1++;
	}
	return "";
}

vector3 Function_135(int iParam0) //Position: 0x75AE / 30126
{
	vector3 vVar0;
	
	vVar0.x = *iParam0;
	vVar0.f_4 = StackVal;
	vVar0.f_8 = StackVal;
	return StackVal, StackVal, vVar0;
}

int Function_136(int iParam0, int iParam1) //Position: 0x75CD / 30157
{
	if (iParam1 != 0)
	{
		return iParam1;
	}
	switch (iParam0)
	{
		case 0x00000002:
			return 16;
			break;
		
		case 0x00000001:
			return 48;
			break;
	}
	return 48;
}

bool Function_137(var uParam0, float fParam1, int iParam2, bool bParam3) //Position: 0x75FD / 30205
{
	var uVar0;
	int iVar3;
	bool bVar4;
	float fVar5;
	bool bVar6;
	
	if (bParam3)
	{
		return 1;
	}
	bVar4 = false;
	Function_139(4294967295);
	iVar3 = 0;
	while (iVar3 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			bVar6 = DECOR_GET_INT(StackVal, "category");
			if (iParam2 != 0)
			{
				if (bVar6 != iParam2 && iParam2 != 256)
				{
					bVar4 = true;
				}
			}
			GET_VOLUME_CENTER(StackVal, &uVar0);
			if (iParam2 != 262144)
			{
				if (IS_POINT_IN_VOLUME(StackVal, *uParam0))
				{
					return 0;
				}
			}
			fVar5 = *fParam1;
			if (bVar4)
			{
				fVar5 = (fVar5 + 170.0f);
			}
			if (Global_3386 && bVar6 != 512)
			{
			}
			else if (Function_138(uParam0, &uVar0) > fVar5)
			{
				return 0;
			}
		}
		iVar3++;
	}
	return 1;
}

float Function_138(var uParam0, int iParam1) //Position: 0x76CD / 30413
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*iParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

int Function_139(bool bParam0) //Position: 0x76EB / 30443
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (DECOR_CHECK_EXIST(StackVal, "script"))
			{
				if (!IS_SCRIPT_VALID(DECOR_GET_INT(StackVal, "script")))
				{
					GET_VOLUME_CENTER(StackVal, &vVar1);
					if (IS_BLIP_VALID(StackVal))
					{
						REMOVE_BLIP(StackVal);
					}
					if (!IS_ACTOR_VALID(Global_34573))
					{
						Function_140(iVar0);
					}
					else if (Global_3386)
					{
						if (Function_29(StackVal, StackVal, Global_34573, vVar1) < 25.0f)
						{
							Function_140(iVar0);
						}
					}
					else if (Function_29(StackVal, StackVal, Global_34573, vVar1) < 55.0f)
					{
						Function_140(iVar0);
					}
				}
				else if (DECOR_GET_INT(StackVal, "script") == bParam0)
				{
					LOG_ERROR("duplicate script id..This should never happen...Tell Steve");
					PRINTSTRING("Duplicate Script Id:");
					PRINTINT(bParam0);
					RELEASE_VOLUME(StackVal);
				}
			}
		}
		else
		{
			Function_140(iVar0);
		}
		iVar0++;
	}
	return 0;
}

void Function_140(int iParam0) //Position: 0x784C / 30796
{
	if (IS_VOLUME_VALID(Global_26155[iParam05].f_12))
	{
		REMOVE_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
		REMOVE_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	}
	if (IS_BLIP_VALID(StackVal))
	{
		REMOVE_BLIP(StackVal);
	}
	RELEASE_VOLUME(StackVal);
	RELEASE_VOLUME(Global_26155[iParam05].f_12);
	return;
}

bool Function_141(vector3 vParam0) //Position: 0x78AD / 30893
{
	struct<9> Var0;
	
	iVar7 = 0;
	while (iVar7 <= Global_29008)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (StackVal || (StackVal || StackVal != 3 != 4) != 5)
			{
				if (GET_OBJECT_TYPE(StackVal) == 9)
				{
					GET_VOLUME_SCALE(StackVal, &vVar0);
					GET_VOLUME_CENTER(StackVal, &vVar3);
					bVar6 = VDIST(vParam0, vVar3);
					if ((bVar6 - ((vVar0.x + vVar0.z) / 2.0f)) > 60.0f)
					{
						return 1;
					}
				}
			}
		}
		iVar7++;
	}
	return 0;
}

int Function_142(vector3 vParam0) //Position: 0x794E / 31054
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
			{
				if (StackVal == 4)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_143(vector3 vParam0) //Position: 0x799A / 31130
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
			{
				if (StackVal || StackVal != 3 != 4)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_144(vector3 vParam0) //Position: 0x79F3 / 31219
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
			{
				if (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 3 != 4) != 5) != 6) != 7)
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int Function_145(int iParam0) //Position: 0x7A70 / 31344
{
	float fVar0;
	bool bVar1;
	
	Function_105(&fVar0, &bVar1);
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER_PLAYER();
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	Function_148(0);
	AMBIENT_ENABLE_QUADRANT_FILTER(1);
	AMBIENT_SET_QUADRANT_FILTER(1, 0, 0, 0);
	if ((iParam0 + 64 + 60)->f_44 == 0.0f)
	{
		if ((iParam0 + 64 + 60)->f_48 == 0.0f)
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, (iParam0 + 64 + 60)->f_44, (iParam0 + 64 + 60)->f_48);
		}
		else
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(StackVal, 0.0f, (iParam0 + 64 + 60)->f_44);
		}
	}
	else
	{
		Function_147(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
	}
	if ((iParam0 + 64 + 60)->f_52 == 0.0f)
	{
		if ((iParam0 + 64 + 60)->f_56 == 0.0f)
		{
			AMBIENT_SET_BUMP_FILTER(0.0f, (iParam0 + 64 + 60)->f_52, (iParam0 + 64 + 60)->f_56);
		}
		else
		{
			AMBIENT_SET_BUMP_FILTER(StackVal, 0.0f, (iParam0 + 64 + 60)->f_52);
		}
	}
	Function_146(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
	AMBIENT_SET_ONESHOT_QUERIES(0);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	if (Global_30842[34])
	{
		PRINTSTRING("HeightDeviation is set to:");
		PRINTFLOAT((iParam0 + 64 + 60)->f_28);
		PRINTNL();
		PRINTSTRING("Elevation Derivative is set to:");
		PRINTFLOAT((iParam0 + 64 + 60)->f_36);
		PRINTNL();
	}
	if ((iParam0 + 64 + 60)->f_28 == 0.0f)
	{
		UNK_0x0AC99007(StackVal, (iParam0 + 64 + 60)->f_28);
		UNK_0x30C67D05(1);
	}
	if ((iParam0 + 64 + 60)->f_36 == 0.0f)
	{
		AMBIENT_SET_ELEVATION_DERIVATIVE_IN_AREA_FILTER((iParam0 + 64 + 60)->f_36, (iParam0 + 64 + 60)->f_40);
		AMBIENT_ENABLE_ELEVATION_DERIVATIVE_IN_AREA_FILTER(1);
	}
	if (AMBIENT_GET_POINT(iParam0 + 8, 0))
	{
		return 1;
	}
	return 0;
}

void Function_146(struct<33> Param0) //Position: 0x7C0B / 31755
{
	if (StackVal && StackVal != 4294967295 != 0)
	{
		if (Param0.f_20 > 1.0f)
		{
			if (Global_30842[34])
			{
				PRINTSTRING("Material Match: ");
				PRINTINT(StackVal);
				PRINTNL();
			}
			AMBIENT_SET_MATERIAL_AT_POINT_FILTER(StackVal);
		}
		else
		{
			if (Global_30842[34])
			{
				PRINTSTRING("Material Match: ");
				PRINTINT(StackVal);
				PRINTSTRING("n, Radius ");
				PRINTFLOAT(Param0.f_20);
				PRINTNL();
			}
			AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(StackVal, Param0.f_20, 0);
		}
	}
	if (!Param0.f_12 != 4294967295 && !Param0.f_12 != 0)
	{
		AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(Param0.f_12, Param0.f_24, 1);
	}
	if (!Param0.f_16 != 4294967295 && !Param0.f_16 != 0)
	{
		if (Global_30842[34])
		{
			PRINTSTRING("Material NoMatch: ");
			PRINTINT(Param0.f_16);
			PRINTSTRING("n, Radius ");
			PRINTFLOAT(Param0.f_32);
			PRINTNL();
		}
		AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(Param0.f_16, Param0.f_32, 0);
	}
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(StackVal, 1.43493E-42f, 1);
}

void Function_147(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14) //Position: 0x7D37 / 32055
{
	if (Param0 == 0)
	{
		AMBIENT_SET_SLOPE_FILTER(StackVal, 0, Param0);
	}
	else if (Param0 == 1)
	{
		AMBIENT_SET_SLOPE_FILTER(StackVal, 0, Param0);
	}
	else if (Param0 == 2)
	{
		AMBIENT_SET_SLOPE_FILTER(StackVal, 0, Param0);
	}
	else if (Param0 == 3)
	{
		AMBIENT_SET_SLOPE_FILTER(StackVal, 0, Param0);
	}
}

void Function_148(bool bParam0) //Position: 0x7D88 / 32136
{
	if (bParam0 < 0.1f)
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * bParam0), bParam0);
	}
	else if (Global_3386)
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * 10.0f), 10.0f);
	}
	else
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * 10.0f), 10.0f);
	}
	return;
}

int Function_149(int iParam0, vector3 vParam1) //Position: 0x7DCC / 32204
{
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER(vParam1);
	if (Global_30842[34])
	{
		PRINTVECTOR(vParam1);
		PRINTNL();
	}
	Function_151();
	Function_148(0);
	Function_150(0);
	if ((iParam0 + 64 + 60)->f_44 == 0.0f)
	{
		if ((iParam0 + 64 + 60)->f_48 == 0.0f)
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, (iParam0 + 64 + 60)->f_44, (iParam0 + 64 + 60)->f_48);
		}
		else
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(StackVal, 0.0f, (iParam0 + 64 + 60)->f_44);
		}
	}
	else
	{
		Function_147(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
	}
	if ((iParam0 + 64 + 60)->f_52 == 0.0f)
	{
		if ((iParam0 + 64 + 60)->f_56 == 0.0f)
		{
			AMBIENT_SET_BUMP_FILTER(0.0f, (iParam0 + 64 + 60)->f_52, (iParam0 + 64 + 60)->f_56);
		}
		else
		{
			AMBIENT_SET_BUMP_FILTER(StackVal, 0.0f, (iParam0 + 64 + 60)->f_52);
		}
	}
	Function_146(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
	AMBIENT_SET_ONESHOT_QUERIES(0);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	if (Global_30842[34])
	{
		PRINTSTRING("HeightDeviation is set to:");
		PRINTFLOAT((iParam0 + 64 + 60)->f_28);
		PRINTNL();
		PRINTSTRING("Elevation Derivative is set to:");
		PRINTFLOAT((iParam0 + 64 + 60)->f_36);
		PRINTNL();
	}
	if ((iParam0 + 64 + 60)->f_28 == 0.0f)
	{
		UNK_0x0AC99007(StackVal, (iParam0 + 64 + 60)->f_28);
		UNK_0x30C67D05(1);
	}
	if ((iParam0 + 64 + 60)->f_36 == 0.0f)
	{
		AMBIENT_SET_ELEVATION_DERIVATIVE_IN_AREA_FILTER((iParam0 + 64 + 60)->f_36, (iParam0 + 64 + 60)->f_40);
		AMBIENT_ENABLE_ELEVATION_DERIVATIVE_IN_AREA_FILTER(1);
	}
	if (AMBIENT_GET_POINT(iParam0 + 8, 0))
	{
		return 1;
	}
	return 0;
}

void Function_150(bool bParam0) //Position: 0x7F6E / 32622
{
	switch (bParam0)
	{
		case 0x00000004:
		case 0x00000001:
			AMBIENT_SET_QUADRANT_FILTER(1, 0, 0, 0);
			break;
		
		case 0x00000007:
		case 0x00000002:
			AMBIENT_SET_QUADRANT_FILTER(0, 1, 1, 0);
			break;
		
		case 0x00000006:
			AMBIENT_SET_QUADRANT_FILTER(0, 1, 0, 0);
			break;
		
		case 0x00000005:
			AMBIENT_SET_QUADRANT_FILTER(0, 0, 1, 0);
			break;
		
		case 0x00000008:
		case 0x00000003:
			AMBIENT_SET_QUADRANT_FILTER(0, 0, 0, 1);
			AMBIENT_SET_DISTANCE_FILTER(5.0f, 25.0f);
			break;
		
		case 0x00000000:
			break;
		
		case 0x00000009:
			AMBIENT_SET_QUADRANT_FILTER(0, 1, 1, 1);
			break;
		
		default:
			LOG_ERROR("No point type filter set!");
			break;
	}
	return;
}

void Function_151() //Position: 0x8023 / 32803
{
	AMBIENT_SET_DISTANCE_FILTER(0.0f, 24.0f);
	return;
}

vector3 Function_152(var uParam0, int iParam1) //Position: 0x8032 / 32818
{
	var uVar0;
	bool bVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	bool bVar10;
	vector3 vVar11;
	float fVar14;
	float fVar15;
	vector3 vVar16;
	vector3 vVar19;
	vector3 vVar22;
	int iVar25;
	int iVar31;
	
	bVar10 = START_CURVE_QUERY(Global_28841, *uParam0, 48, 0.0f, 7.0f, 5.0f, 0);
	if (!GET_NUM_CURVES_IN_CURVE_QUERY(bVar10) < 0)
	{
		UNK_0xDF93BD7C(bVar10);
		vVar11 = { 0.0f, 0.0f, 0.0f };
		return StackVal, StackVal, vVar11;
	}
	GET_POINT_FROM_CURVE_QUERY(bVar10, false, &uVar0);
	bVar6 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(bVar10, false);
	if (IS_OBJECT_VALID(bVar6))
	{
		vVar16 = { StackVal, StackVal, *iParam1 };
		UNK_0x19D652F9(bVar6, 50.0f, &uVar0, &iVar25);
		UNK_0x19D652F9(bVar6, -50.0f, &uVar0, &iVar31);
		Function_135(&iVar25);
		vVar19 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*uParam0, Function_135(&iVar25), StackVal) };
		Function_135(&iVar31);
		vVar22 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*uParam0, Function_135(&iVar31), StackVal) };
		fVar15 = VDOT(&vVar16, &vVar19);
		fVar14 = VDOT(&vVar16, &vVar22);
		Function_105(&fVar7, &fVar8);
		fVar9 = ((fVar7 + fVar8) / 2.0f);
		if (fVar15 > 0.0f && fVar14 > 0.0f)
		{
			UNK_0xDF93BD7C(bVar10);
			vVar11 = { 0.0f, 0.0f, 0.0f };
			return StackVal, StackVal, vVar11;
		}
		if (fVar15 > fVar14)
		{
			UNK_0x19D652F9(bVar6, (fVar9 * -1.0f), &uVar0, &iVar31);
			Function_135(&iVar31);
			vVar11 = { StackVal, StackVal, Function_135(&iVar31) };
		}
		else
		{
			UNK_0x19D652F9(bVar6, fVar9, &uVar0, &iVar25);
			Function_135(&iVar25);
			vVar11 = { StackVal, StackVal, Function_135(&iVar25) };
		}
	}
	UNK_0xDF93BD7C(bVar10);
	return StackVal, StackVal, vVar11;
}

int Function_153(int iParam0, float fParam1, int iParam2, int iParam3) //Position: 0x813F / 33087
{
	var uVar0;
	int iVar3;
	vector3 vVar4;
	
	if (iParam3 == 4294967295)
	{
		iVar3 = 4294967294;
	}
	else
	{
		iVar3 = 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(*iParam0, 1.0f))
	{
		GET_CAMERA_POSITION(GET_GAME_CAMERA(), &vVar4);
		if (VDIST(*iParam0, vVar4) > 175.0f)
		{
			PRINTSTRING("Camera Position: ");
			PRINTVECTOR(vVar4);
			PRINTNL();
			PRINTSTRING("Probe Position: ");
			PRINTVECTOR(*iParam0);
			PRINTNL();
			PRINTSTRING("Distance");
			PRINTFLOAT(VDIST(*iParam0, vVar4));
			PRINTNL();
		}
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(iParam0, fParam1, iParam2, &uVar0))
	{
		if (!Function_120(StackVal, StackVal, *iParam2))
		{
			return 1;
		}
	}
	while (!IS_EXITFLAG_SET() && iVar3 > iParam3)
	{
		*iParam0 = (*iParam0 + 0.01f);
		iParam0->f_8 = (StackVal + 0.01f);
		if (FIND_GROUND_INTERSECTION(iParam0, fParam1, iParam2, &uVar0))
		{
			if (!Function_120(StackVal, StackVal, *iParam2))
			{
				return 1;
			}
		}
		*iParam2 = { StackVal, StackVal, *iParam0 };
		iParam2->f_4 = (StackVal - fParam1);
		if (!iParam3 != 4294967295)
		{
			iVar3++;
		}
		WAIT(false);
	}
	return 0;
}

bool Function_154(int iParam0) //Position: 0x8271 / 33393
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_155(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, var uParam6) //Position: 0x8287 / 33415
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	vector3 vVar5;
	
	fVar4 = 50.0f;
	bVar3 = -1.0f;
	bVar0 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		GET_OBJECT_POSITION(bVar0, &vVar5);
		bVar2 = VDIST(vVar5, vParam1);
		if (DECOR_CHECK_EXIST(bVar0, bParam5))
		{
			if ((DECOR_GET_INT(bVar0, bParam5) && uParam6) >= 0)
			{
				if (bVar2 < fParam4)
				{
					if (bVar3 > 0.0f || bVar2 > bVar3)
					{
						if (Function_137(&vVar5, &fVar4, 0, 0))
						{
							bVar3 = bVar2;
							bVar1 = bVar0;
							PRINTSTRING("Assigning new closestObject ");
							PRINTNL();
						}
					}
				}
			}
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bParam0);
	}
	return bVar1;
}

var Function_156(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x832F / 33583
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	vector3 vVar5;
	
	bVar3 = -1.0f;
	bVar0 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		GET_OBJECT_POSITION(bVar0, &vVar5);
		bVar2 = VDIST(vVar5, vParam1);
		if (bVar2 < fParam4)
		{
			if (bVar3 > 0.0f || bVar2 > bVar3)
			{
				if (Function_137(&vVar5, &uVar4, 0, 0))
				{
					bVar3 = bVar2;
					bVar1 = bVar0;
					PRINTSTRING("Assigning new closestObject ");
					PRINTNL();
				}
			}
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bParam0);
	}
	return bVar1;
}

var Function_157(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, var uParam6) //Position: 0x83B8 / 33720
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
		if (DECOR_CHECK_EXIST(bVar0, bParam5))
		{
			if ((DECOR_GET_INT(bVar0, bParam5) && uParam6) >= 0)
			{
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
			}
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bParam0);
	}
	return bVar1;
}

var Function_158(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x844D / 33869
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

int Function_159(int iParam0) //Position: 0x84CA / 33994
{
	if (IS_ITERATOR_VALID(*iParam0))
	{
		ITERATE_EVERYWHERE(*iParam0);
		ITERATE_ON_PARTIAL_NAME(*iParam0, Function_197());
		ITERATE_ON_PARTIAL_MODEL_NAME(*iParam0, Function_197());
		ITERATE_ON_OBJECT_TYPE(*iParam0, 4294967295);
		return 1;
	}
	return 0;
}

int Function_160(bool bParam0, int iParam1) //Position: 0x84FB / 34043
{
	int iVar0;
	var uVar1;
	
	if (!IS_VOLUME_VALID(*bParam0))
	{
		LOG_ERROR("Passed an invalid volume into ADD_AMBIENT_VOLUME_RESTRICTION");
	}
	if (DECOR_CHECK_EXIST(*bParam0, "script"))
	{
		if (!IS_SCRIPT_VALID(DECOR_GET_INT(*bParam0, "script")))
		{
			LOG_ERROR("Passed an invalid script ID into ADD_AMBIENT_VOLUME_RESTRICTION");
		}
	}
	GET_VOLUME_CENTER(*bParam0, &uVar1);
	Function_139(DECOR_GET_INT(*bParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
		}
		else
		{
			Function_161(iVar0, bParam0, &uVar1, iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(*bParam0);
	return 0;
}

void Function_161(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x865C / 34396
{
	struct<8> Var0;
	
	Global_26155[iParam05].f_8 = *uParam1;
	Global_26155[iParam05].f_16 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_164("stayout") };
	Global_26155[iParam05].f_12 = CREATE_VOLUME_IN_LAYOUT(Global_26150, &Var0, 3, *iParam2, 0.0f, 0.0f, 0.0f, 12.0f, 5.0f, 12.0f);
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	if (bParam3)
	{
		Global_26155[iParam05].f_4 = ADD_BLIP_FOR_COORD(iParam2, 403, 0f, 2, 0);
		SET_BLIP_BLINK(StackVal, 1, 1, 20.0f);
	}
}

var Function_162(bool bParam0, vector3 vParam1) //Position: 0x86F7 / 34551
{
	vector3 vVar0;
	var uVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		GET_POSITION(bParam0, &vVar0);
		Function_163(StackVal, StackVal, StackVal, StackVal, vVar0, vParam1, &uVar3);
		return UNK_0x9C40E671(&uVar3);
	}
	return 0.0f;
}

void Function_163(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x8727 / 34599
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

struct<32> Function_164(bool bParam0) //Position: 0x874A / 34634
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_165("0", &cVar8, ""), 4);
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

struct<32> Function_165(char* cParam0, char* cParam1, char* cParam2) //Position: 0x87B4 / 34740
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_166(int iParam0) //Position: 0x87D3 / 34771
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_171();
	iVar1 = 0;
	if (!Function_23(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_170(iParam0[iVar03], 8);
		}
		else if (Function_169())
		{
			iVar1 = 1;
			Function_170(iParam0[iVar03], 8);
		}
		Function_170(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_23(iParam0[iVar03], 4))
		{
			if (!Function_23(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_23(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_23(iParam0[03], 8) || iVar1));
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
				Function_170(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_23(iParam0[iVar03], 4))
		{
			if (!Function_23(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_170(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_170(iParam0[iVar03], 2);
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
							Function_170(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_170(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_170(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_170(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_170(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_170(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_170(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_170(iParam0[iVar03], 2);
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
	Function_167();
	return 1;
}

void Function_167() //Position: 0x8B4E / 35662
{
	if (!Function_168(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_168(int iParam0) //Position: 0x8B8E / 35726
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_169() //Position: 0x8BAA / 35754
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

void Function_170(var uParam0, int iParam1) //Position: 0x8BD5 / 35797
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_171() //Position: 0x8BE6 / 35814
{
	if (!Function_168(128))
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

void Function_172(bool bParam0, int iParam1) //Position: 0x8C28 / 35880
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *bParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_173(bParam0[iVar0]);
		iVar0++;
	}
	return;
}

void Function_173(int iParam0) //Position: 0x8C55 / 35925
{
	if (IS_ACTOR_VALID(*iParam0))
	{
		SET_DRAW_ACTOR(*iParam0, 1);
		CLEAR_ACTOR_MAX_SPEED(*iParam0);
		if (IS_ACTOR_ANIMAL(*iParam0))
		{
			ANIMAL_SPECIES_REL_SET_CAN_ATTACK(ANIMAL_ACTOR_GET_SPECIES(*iParam0), 0, 1);
		}
		else
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*iParam0, 0, 1);
			MEMORY_ALLOW_SHOOTING(*iParam0, 1);
		}
	}
	return;
}

void Function_174(var uParam0, int iParam1) //Position: 0x8C97 / 35991
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_175(uParam0[iVar0]);
		iVar0++;
	}
	return;
}

void Function_175(int iParam0) //Position: 0x8CC4 / 36036
{
	if (IS_ACTOR_VALID(*iParam0))
	{
		SET_DRAW_ACTOR(*iParam0, 0);
		SET_ACTOR_MAX_SPEED(*iParam0, 5);
		if (IS_ACTOR_ANIMAL(*iParam0))
		{
			ANIMAL_SPECIES_REL_SET_CAN_ATTACK(ANIMAL_ACTOR_GET_SPECIES(*iParam0), 0, 0);
		}
		else
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*iParam0, 0, 0);
			MEMORY_ALLOW_SHOOTING(*iParam0, 0);
		}
	}
	return;
}

bool Function_176(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x8D07 / 36103
{
	if (Global_63096 && !GET_THIS_SCRIPT_ID() != Global_63116)
	{
		*uParam3 = 0;
		if (!*uParam0)
		{
			*uParam0 = 1;
			if ((*uParam1 < 2 && *uParam1 > 5) && uParam4)
			{
				*uParam2 = *uParam1;
				*uParam1 = 7;
			}
			else
			{
				*uParam1 = 6;
				return 0;
			}
			return 1;
		}
	}
	if (*uParam0)
	{
		*uParam0 = 0;
		*uParam1 = *uParam2;
		return 1;
	}
	return 0;
}

var Function_177(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x8D6F / 36207
{
	return Function_178(iParam0, iParam1, iParam2, iParam3, iParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_178(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, vector3 vParam6) //Position: 0x8D88 / 36232
{
	switch (iParam0)
	{
		case 0x00000001:
			return Function_181(StackVal, StackVal, Global_30750[0], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000002:
			return Function_181(StackVal, StackVal, Global_30750[1], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000004:
			return Function_181(StackVal, StackVal, Global_30750[2], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000008:
			return Function_181(StackVal, StackVal, Global_30750[3], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000010:
			return Function_181(StackVal, StackVal, Global_30750[4], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000020:
			return Function_181(StackVal, StackVal, Global_30750[5], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000040:
			return Function_181(StackVal, StackVal, Global_30750[6], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000080:
			return Function_181(StackVal, StackVal, Global_30750[7], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000100:
			return Function_181(StackVal, StackVal, Global_30750[8], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000200:
			return Function_181(StackVal, StackVal, Global_30750[9], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000400:
			return Function_181(StackVal, StackVal, Global_30750[10], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000800:
			return Function_181(StackVal, StackVal, Global_30750[11], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00001000:
			return Function_181(StackVal, StackVal, Global_30750[12], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00002000:
			return Function_181(StackVal, StackVal, Global_30750[13], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return Function_179(StackVal, StackVal, iParam0, bParam1, bParam2, iParam5, vParam6);
}

var Function_179(var uParam0, bool bParam1, bool bParam2, int iParam3, vector3 vParam4) //Position: 0x8FDD / 36829
{
	bool bVar0;
	
	bVar0 = CREATE_POPULATION_SET(0);
	if (uParam0 & 1 == 1)
	{
		Function_180(Global_30750[0], bVar0);
	}
	if (uParam0 & 2 == 2)
	{
		Function_180(Global_30750[1], bVar0);
	}
	if (uParam0 & 4 == 4)
	{
		Function_180(Global_30750[2], bVar0);
	}
	if (uParam0 & 8 == 8)
	{
		Function_180(Global_30750[3], bVar0);
	}
	if (uParam0 & 16 == 16)
	{
		Function_180(Global_30750[4], bVar0);
	}
	if (uParam0 & 32 == 32)
	{
		Function_180(Global_30750[5], bVar0);
	}
	if (uParam0 & 64 == 64)
	{
		Function_180(Global_30750[6], bVar0);
	}
	if (uParam0 & 128 == 128)
	{
		Function_180(Global_30750[7], bVar0);
	}
	if (uParam0 & 256 == 256)
	{
		Function_180(Global_30750[8], bVar0);
	}
	if (uParam0 & 512 == 512)
	{
		Function_180(Global_30750[9], bVar0);
	}
	if (uParam0 & 1024 == 1024)
	{
		Function_180(Global_30750[10], bVar0);
	}
	if (uParam0 & 2048 == 2048)
	{
		Function_180(Global_30750[11], bVar0);
	}
	if (uParam0 & 4096 == 4096)
	{
		Function_180(Global_30750[12], bVar0);
	}
	if (uParam0 & 8192 == 8192)
	{
		Function_180(Global_30750[13], bVar0);
	}
	return Function_181(StackVal, StackVal, bVar0, bParam1, bParam2, 4294967295, 0, iParam3, vParam4);
}

void Function_180(bool bParam0, bool bParam1) //Position: 0x912E / 37166
{
	bool bVar0;
	
	if (!IS_POPSET_VALID(bParam0))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid subPOPSET");
	}
	if (!IS_POPSET_VALID(bParam1))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid master popset");
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(bParam0))
	{
		LINK_ACTORENUM_TO_POPULATION(bParam1, GET_ACTORENUM_IN_POPULATION(bParam0, bVar0), GET_ACTORENUM_IN_POPULATION_WEIGHT(bParam0, bVar0));
		bVar0++;
	}
	return;
}

var Function_181(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, vector3 vParam6) //Position: 0x91EC / 37356
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
		Function_187();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, bParam4, iParam5, vParam6);
	if (!Function_186(bVar1))
	{
		if (!Global_30837 && !Global_30838)
		{
			Function_185(bParam0, bParam1, bParam2, bParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_185(bParam0, bParam1, bParam2, bParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && bParam3 != 4294967295)
		{
			while (Function_184(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_186(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_184(bVar0))
				{
					Function_183();
				}
				Function_182(bVar0);
			}
		}
		else if (!bParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != bParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_186(bVar1))
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

void Function_182(int iParam0) //Position: 0x94DF / 38111
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

void Function_183() //Position: 0x9593 / 38291
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

bool Function_184(bool bParam0) //Position: 0x95CD / 38349
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

void Function_185(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x95FA / 38394
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

bool Function_186(bool bParam0) //Position: 0x974B / 38731
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_187() //Position: 0x9762 / 38754
{
	int iVar0;
	
	if (Global_3402)
	{
		if (StackVal || !Global_30742 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_183();
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
	Function_183();
	return;
}

var Function_188(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x97AD / 38829
{
	return Function_189(uParam0, uParam1, uParam2, 4294967295, uParam3);
}

var Function_189(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x97C1 / 38849
{
	return Function_181(uParam0, uParam1, uParam2, uParam3, uParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_190(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x97DA / 38874
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_191(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_170(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_191(var uParam0, int iParam1, int iParam2) //Position: 0x9812 / 38930
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_23(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_170(uParam0[iVar03], 4);
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

void Function_192(int iParam0) //Position: 0x98D6 / 39126
{
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(iParam0);
	return;
}

var Function_193(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x98E1 / 39137
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (!Function_23(bParam0[iVar03], 4))
		{
			(*bParam0)[iVar03] = iParam1;
			bParam0[iVar03]->f_4 = 3;
			Function_170(bParam0[iVar03], 4);
			if (bParam3)
			{
				Function_170(bParam0[iVar03], 8);
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

var Function_194(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x99B1 / 39345
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
			bVar0 = (bVar0 * 0.75f);
			break;
		
		case 0x00000001:
			bVar0 = (bVar0 * 1.0f);
			break;
		
		case 0x00000002:
			bVar0 = (bVar0 * 1.25f);
			break;
		
		default:
			bVar0 = (bVar0 * 0.75f);
			break;
	}
	if (bParam2)
	{
		bVar0 = (bVar0 * (0.75f + ((TO_FLOAT(Function_46(5)) / 100.0f) * 0.5f)));
	}
	if (bParam3)
	{
		if (HAS_ITEM(Function_195(17), Global_34573))
		{
			bVar0 = (bVar0 * 1.2f);
		}
	}
	if (bParam4)
	{
		bVar0 = (bVar0 * 1.1f);
	}
	if (ROUND(bVar0) <= 1)
	{
		bVar0 = 1.0f;
	}
	return ROUND(bVar0);
}

var Function_195(bool bParam0) //Position: 0x9AB3 / 39603
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

void Function_196(var uParam0) //Position: 0x9BA4 / 39844
{
	uParam0->f_24 = "";
	uParam0->f_28 = 30.0f;
	uParam0->f_32 = -5.0f;
	uParam0->f_36 = 1;
	uParam0->f_40 = 4.0f;
	uParam0->f_44 = 0;
	uParam0->f_48 = "";
	uParam0->f_52 = 0;
	uParam0->f_56 = 1;
	uParam0->f_60 = 0;
	uParam0->f_64 = 4.0f;
	return;
}

var Function_197() //Position: 0x9BEB / 39915
{
	var uVar0;
	
	return uVar0;
}

