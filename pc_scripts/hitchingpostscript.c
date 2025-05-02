//Decompiled with MagicRDR v1.0
//Function Count : 94
//Statics Count : 54
//Natives Count : 202
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	struct<2> Local_1 = { 0, 0 } ;
	var uLocal_3 = 0;
	float fLocal_4 = 0.0f;
	float fLocal_5 = 0.0f;
	int iLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	struct<25> Local_10 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_47 = 0;
	bool bLocal_48 = false;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	struct<8> Var6;
	struct<2> Var14;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	var uVar19;
	float fVar21;
	struct<5> Var22;
	var uVar27;
	int iVar29;
	int iVar30;
	struct<2> Var31;
	var uVar33;
	
	iLocal_0 = 100;
	fLocal_4 = 0.0f;
	fLocal_5 = 0.0f;
	iLocal_18 = 0;
	iLocal_47 = 0;
	bLocal_48 = false;
	iLocal_49 = 0;
	iLocal_50 = 0;
	iLocal_51 = 0;
	uScriptParam_0 = &uScriptParam_0;
	while (IS_GRINGO_ACTIVE())
	{
		if (!UI_ISACTIVE("SaveGame_DoNotInterruptMe"))
		{
			if (iLocal_50)
			{
				Function_92("HorseHitch_Help_SavedHorse", 0x41200000, 1, 0, 2, 1, 0);
				iLocal_50 = 0;
			}
		}
		if (iLocal_18 != 3 && Function_91((&Global_21369 + 72)->f_32, 4))
		{
			if (IS_ACTOR_RIDING(&Global_54076))
			{
				if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_33))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&uLocal_33);
				}
			}
			if (IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
			{
				uVar0 = GET_MOUNT(&Global_54076);
				if ((((IS_ACTION_NODE_PLAYING_PARTIAL(&Global_54076, "item_binoculars") || IS_ACTOR_JUMPING(&Global_54076)) || IS_ACTOR_JUMPING(&uVar0)) || !IS_ACTOR_ALIVE(&uVar0)) || !IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
				{
					if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_31))
					{
						RELEASE_SCRIPT_USE_CONTEXT(&uLocal_31);
					}
				}
				else
				{
					bVar1 = false;
					vLocal_29 = Function_89(&uVar0);
					if (IS_GRINGO_VALID(&vLocal_29))
					{
						if (GRINGO_IS_ACTIVATION_ALLOWED(&vLocal_29))
						{
							if (!Function_88(&vLocal_29, &uVar0))
							{
								if (!IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_31))
								{
									uLocal_31 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("hitchHorse", &uLocal_39, 10, "@GENERIC.USE2", "", "", "", "", 32, 0);
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
						if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_31))
						{
							RELEASE_SCRIPT_USE_CONTEXT(&uLocal_31);
						}
					}
				}
			}
			else
			{
				if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_31))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&uLocal_31);
				}
				bVar2 = true;
				iVar4 = "";
				bVar3 = Function_86(&iVar4, 1);
				if (!bVar3 || !IS_ACTOR_VALID(&iVar4))
				{
					bVar2 = false;
				}
				if (bVar2)
				{
					if ((((((!IS_ACTOR_ALIVE(&iVar4) || IS_ACTION_NODE_PLAYING_PARTIAL(&Global_54076, "item_binoculars")) || IS_ACTOR_JUMPING(&Global_54076)) || IS_ACTOR_JUMPING(&iVar4)) || IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(&Global_54076))) || IS_ACTOR_USING_COVER(&Global_54076)) || IS_ACTOR_RIDING(&Global_54076))
					{
						bVar2 = false;
					}
				}
				if (bVar2)
				{
					bVar5 = false;
					vLocal_29 = Function_89(&iVar4);
					if (IS_GRINGO_VALID(&vLocal_29))
					{
						if (GRINGO_IS_ACTIVATION_ALLOWED(&vLocal_29))
						{
							if (!Function_88(&vLocal_29, &iVar4))
							{
								if (!IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_33))
								{
									uLocal_33 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("hitchHorse", &uLocal_39, 10, "@GENERIC.USE2", "", "", "", "", 4, 0);
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
						if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_33))
						{
							RELEASE_SCRIPT_USE_CONTEXT(&uLocal_33);
						}
					}
				}
				else if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_33))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&uLocal_33);
				}
			}
		}
		else if (!Function_91((&Global_21369 + 72)->f_32, 4))
		{
			if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_33))
			{
				RELEASE_SCRIPT_USE_CONTEXT(&uLocal_33);
			}
			if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_31))
			{
				RELEASE_SCRIPT_USE_CONTEXT(&uLocal_31);
			}
		}
		if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_31) || IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_33))
		{
			DECOR_SET_BOOL(&Global_54076, "Hitch_BlockJump", 1);
		}
		else if (DECOR_CHECK_EXIST(&Global_54076, "Hitch_BlockJump"))
		{
			DECOR_REMOVE(&Global_54076, "Hitch_BlockJump");
		}
		switch (iLocal_18)
		{
			case 0x00000000:
				Function_84(&uLocal_19, "custom/horse_tend", 8, 0);
				Function_84(&uLocal_19, "horse_tend", 5, 0);
				iLocal_18 = 1;
				break;
			
			case 0x00000001:
				if (Function_78(&uLocal_19))
				{
					iLocal_18 = 2;
				}
				break;
			
			case 0x00000002:
				if (!IS_VOLUME_VALID(&uLocal_39))
				{
					Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_76("HitchLayout_") };
					uLocal_41 = CREATE_LAYOUT(&Var6);
					Function_75(GRINGO_GET_MY_OBJECT_REF());
					Var14 = Function_75(GRINGO_GET_MY_OBJECT_REF());
					uLocal_39 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uLocal_41, Function_74(), 4,203895E-45f, Var14, Vector(0.0f, 0.0f, 0.0f), Vector(5,75f, 3.0f, 5,75f));
					iLocal_0 = 0;
					iLocal_18 = 3;
				}
				break;
			
			case 0x00000003:
				bVar17 = false;
				bVar18 = false;
				if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_31))
				{
					if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(&uLocal_31))
					{
						RELEASE_SCRIPT_USE_CONTEXT(&uLocal_31);
						if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_33))
						{
							RELEASE_SCRIPT_USE_CONTEXT(&uLocal_33);
						}
						bVar17 = true;
						bVar18 = true;
						bVar16 = GET_MOUNT(&Global_54076);
					}
				}
				if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_33))
				{
					if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(&uLocal_33))
					{
						RELEASE_SCRIPT_USE_CONTEXT(&uLocal_33);
						if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_31))
						{
							RELEASE_SCRIPT_USE_CONTEXT(&uLocal_31);
						}
						bVar17 = true;
						Function_86(&bVar16, 1);
					}
				}
				if (bVar17)
				{
					Function_71(0, 0x40400000);
					DECOR_SET_BOOL(&Global_54076, "TempDisableRespawn", 1);
					iLocal_47 = 0;
					SET_PLAYER_CONTROL(0, 0, 0, 0);
					Function_69(&bVar16, 0);
					RESET_ANIM_SET_FOR_ACTOR(&bVar16, 1);
					GRINGO_ENABLE_SPAWN(&vLocal_29, 0);
					TASK_STAND_STILL(&bVar16, -1.0f, 0, 0);
					ENABLE_USE_CONTEXTS(0);
					Function_67(&uLocal_43);
					uVar19 = Vector(0.0f, 0.0f, 0.0f);
					GRINGO_GET_USE_COMPONENT_POSITION_EXT(&vLocal_29, "UseCase1", &uVar19);
					fVar21 = GRINGO_GET_USE_COMPONENT_HEADING_EXT(&vLocal_29, "UseCase1");
					Var22 = Vector(0.0f, 0.0f, 0.0f);
					GET_OBJECT_ORIENTATION(&bVar16, &Var22);
					bVar24 = fVar21;
					if (StackVal && StackVal <= (fVar21 - 5.0f) >= (fVar21 + 5.0f))
					{
						bVar24 = StackVal;
					}
					else if (StackVal < (fVar21 + 5.0f))
					{
						bVar24 = (fVar21 + 5.0f);
					}
					else if (StackVal > (fVar21 - 5.0f))
					{
						bVar24 = (fVar21 - 5.0f);
					}
					Var25 = Vector(0.0f, 0.0f, 0.0f);
					uVar27 = Vector(0.0f, 0.0f, 0.0f);
					FIND_GROUND_INTERSECTION(&uVar19, 5.0f, &Var25, &uVar27);
					TELEPORT_ACTOR_WITH_HEADING(&bVar16, Var25, bVar24, 1, 1, 1);
					Function_75(&bVar16);
					(&Local_10 + 12) = Function_75(&bVar16);
					Function_66(&bVar16);
					Local_10 = Function_66(&bVar16);
					Local_10.f_24 = 0;
					if (!bVar18)
					{
						if (Function_64(GET_OBJECT_FROM_GRINGO(&vLocal_29), &Global_54076))
						{
							bLocal_48 = false;
						}
						else
						{
							bLocal_48 = true;
						}
						uLocal_37 = CREATE_LEASH_OBJECT(&bVar16, Function_74(), 1,55f, 10, 0, 0,006f, 10.0f, 10000.0f, 200.0f, 8.0f, 100.0f, 1.0f, 0, 0, 1);
						LEASH_ATTACH_TO_OBJECT_BONE(StackVal, StackVal, &uLocal_37, &bVar16, "LowLip1", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0, 1, 0);
						if (bLocal_48)
						{
							GRINGO_GET_USE_COMPONENT_OFFSET_POSITION_EXT(StackVal, &vLocal_29, "UseCase1", Vector(-0,5f, 0.0f, -1,5f), &Local_1);
							SET_OBJECT_POSITION_ON_GROUND(&Global_54076, Local_1);
							fVar21 = (GET_OBJECT_HEADING(GET_OBJECT_FROM_GRINGO(&vLocal_29)) - 120.0f);
							SET_OBJECT_ORIENTATION(StackVal, &Global_54076, Vector(0.0f, fVar21, 0.0f));
							LEASH_ATTACH_TO_OBJECT_BONE(StackVal, StackVal, &uLocal_37, &Global_54076, "finger_22_l", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1, 1, 0);
						}
						else
						{
							GRINGO_GET_USE_COMPONENT_OFFSET_POSITION_EXT(StackVal, &vLocal_29, "UseCase1", Vector(0,5f, 0.0f, -1,5f), &Local_1);
							SET_OBJECT_POSITION_ON_GROUND(&Global_54076, Local_1);
							fVar21 = (GET_OBJECT_HEADING(GET_OBJECT_FROM_GRINGO(&vLocal_29)) + 120.0f);
							SET_OBJECT_ORIENTATION(StackVal, &Global_54076, Vector(0.0f, fVar21, 0.0f));
							LEASH_ATTACH_TO_OBJECT_BONE(StackVal, StackVal, &uLocal_37, &Global_54076, "finger_13_r", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1, 1, 0);
						}
						uLocal_35 = Function_60(&Global_46715, 0, &Local_10, &Global_54076, 1, 0, 0);
					}
					else
					{
						uLocal_35 = Function_56(&Global_46715, 0, &Local_10, &Global_54076, 1, 0, 0);
					}
					SET_ANIM_SET_FOR_ACTOR(&Global_54076, "horse_tend", 0);
					if (GET_MOUNT(&Global_54076) != &bVar16 && IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
					{
						SET_ANIM_SET_FOR_ACTOR(&bVar16, "horse_tend", 0);
						SET_ACTION_NODE_FOR_ACTOR(&bVar16, "horse_tend/horse");
					}
					iLocal_0 = 0;
					iLocal_18 = 4;
				}
				break;
			
			case 0x00000004:
				SET_ANIM_SET_FOR_ACTOR(&Global_54076, "horse_tend", 0);
				iVar29 = (StackVal + 976);
				iLocal_51 = 0;
				if (GET_ACTOR_ENUM(&bVar16) != iVar29)
				{
					if (Global_6623)
					{
						iVar30 = GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(&bVar16));
						if ((GET_GC_LAYOUT() != &iVar30 || GET_AMBIENT_LAYOUT() != &iVar30) || FIND_NAMED_LAYOUT("PlayerLayout") != &iVar30)
						{
							Function_55(&Global_21369 + 72 + 32, 2);
							Function_54(&bVar16, 1);
							iLocal_51 = 1;
						}
					}
					else
					{
						Function_55(&Global_21369 + 72 + 32, 2);
						Function_54(&bVar16, 1);
						iLocal_49 = 1;
						iLocal_51 = 1;
					}
				}
				if (GET_MOUNT(&Global_54076) != &bVar16 && IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
				{
					uLocal_37 = CREATE_LEASH_OBJECT(&bVar16, Function_74(), 1,55f, 10, 0, 0,006f, 10.0f, 10000.0f, 200.0f, 8.0f, 100.0f, 1.0f, 0, 0, 1);
					LEASH_ATTACH_TO_OBJECT_BONE(StackVal, StackVal, &uLocal_37, &bVar16, "LowLip1", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0, 1, 0);
					LEASH_ATTACH_TO_OBJECT_BONE(StackVal, StackVal, &uLocal_37, &Global_54076, "finger_22_l", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1, 1, 0);
					fLocal_4 = 3.0f;
					fLocal_5 = 3.0f;
					SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "horse_tend/player");
				}
				else
				{
					fLocal_4 = 1.0f;
					fLocal_5 = 1.0f;
					if (bLocal_48)
					{
						SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "horse_tend/player_standing_left");
					}
					else
					{
						SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "horse_tend/player_standing_right");
					}
				}
				iLocal_0 = 200;
				iLocal_18 = 5;
				break;
			
			case 0x00000005:
				if (Function_52(&uLocal_43) <= fLocal_4)
				{
					if (!DECOR_CHECK_EXIST(&bVar16, "HorseLeash"))
					{
						uVar33 = Vector(0.0f, 0.0f, 0.0f);
						Function_75(GET_OBJECT_FROM_GRINGO(&vLocal_29));
						Var31 = Function_75(GET_OBJECT_FROM_GRINGO(&vLocal_29));
						LEASH_ATTACH_TO_WORLD(StackVal, &uLocal_37, Var31, Vector(0.0f, 0.0f, 0.0f), 1);
						DECOR_SET_OBJECT(&bVar16, "HorseLeash", &uLocal_37);
						LEASH_CONSTRAIN(&uLocal_37);
						LEASH_SET_CONSTRAINT_LENGTH(&uLocal_37, 1,55f);
					}
					Function_51(&uLocal_43);
					iLocal_18 = 6;
				}
				break;
			
			case 0x00000006:
				RESET_ANIM_SET_FOR_ACTOR(&bVar16, 1);
				TASK_PRIORITY_SET(&bVar16, true);
				TASK_USE_GRINGO(&bVar16, &vLocal_29, "UseCase1", 1, 1);
				iLocal_18 = 7;
				break;
			
			case 0x00000007:
				vLocal_29 = "";
				bVar16 = "";
				if (!Function_50(&iLocal_6))
				{
					Function_67(&iLocal_6);
				}
				else if (!iLocal_47)
				{
					iLocal_47 = 1;
					SET_PLAYER_CONTROL(0, 1, 0, 0);
					ENABLE_USE_CONTEXTS(1);
					DECOR_REMOVE(&Global_54076, "TempDisableRespawn");
					ACTOR_DISMOUNT_NOW(&Global_54076);
					if (iLocal_49)
					{
						if (!Function_49(0, 0, 1, 1))
						{
							Function_7(1);
							Function_6(1, 9);
						}
						else
						{
							Function_5();
						}
					}
					iLocal_49 = 0;
					if (!DECOR_CHECK_EXIST(&Global_54076, "BlockHitchHelp") && iLocal_51)
					{
						iLocal_50 = 1;
					}
				}
				else if (Function_52(&iLocal_6) < fLocal_5 && iLocal_47)
				{
					DESTROY_OBJECT(&uLocal_35);
					Function_51(&iLocal_6);
					iLocal_18 = 3;
				}
				break;
		}
		GRINGO_WAIT(iLocal_0);
	}
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "Hitch_BlockJump"))
		{
			DECOR_REMOVE(&Global_54076, "Hitch_BlockJump");
		}
	}
	Function_1(&uLocal_19);
	if (IS_LAYOUTREF_VALID(&uLocal_41))
	{
		DESTROY_LAYOUT(&uLocal_41);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_33))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_33);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_31))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_31);
	}
	return;
}

void Function_1(int iParam0) //Position: 0xB52 / 2898
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_2(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_2(struct<2>[] Param0, int iParam1) //Position: 0xB7A / 2938
{
	if (Function_4(&(Param0[iParam12]), 4))
	{
		if (Function_4(&(Param0[iParam12]), 1))
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
			Function_3(&(Param0[iParam12]), 1);
			Function_3(&(Param0[iParam12]), 2);
			Function_3(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_3(struct<13> Param0) //Position: 0xCC5 / 3269
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_4(struct<13> Param0) //Position: 0xCE2 / 3298
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5() //Position: 0xD00 / 3328
{
	return;
}

void Function_6(var uParam0, int iParam1) //Position: 0xD06 / 3334
{
	if (Global_6624)
	{
		return;
	}
	Global_6655 = uParam0;
	Global_6659 = iParam1;
	if (!Global_6606 && 1)
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", 1);
	return;
}

void Function_7(bool bParam0) //Position: 0xD45 / 3397
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_38();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_9();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_8(&Global_99144, 1);
		Function_8(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_8(var uParam0, int iParam1) //Position: 0xD9A / 3482
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

void Function_9() //Position: 0xDB0 / 3504
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
	Function_14();
	Function_13();
	Function_12();
	Function_11();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_10();
	return;
}

void Function_10() //Position: 0xDFB / 3579
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

void Function_11() //Position: 0xF01 / 3841
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

void Function_12() //Position: 0xF34 / 3892
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

void Function_13() //Position: 0x10C7 / 4295
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

void Function_14() //Position: 0x1280 / 4736
{
	Function_15(&Global_42918, 1, 0);
	return;
}

void Function_15(struct<2317> Param0) //Position: 0x128E / 4750
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
	
	uVar0 = Function_16();
	if (IS_ACTOR_VALID(&uVar0))
	{
		Param0.f_1060 = GET_NUM_WEAPONS_IN_INVENTORY(&uVar0);
		iVar7 = 4294967294;
		iVar8 = GET_WEAPON_IN_HAND(&uVar0);
		if (iVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(&uVar0, iVar8) || uParam2)
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

var Function_16() //Position: 0x14AB / 5291
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_17(int iParam0) //Position: 0x14C0 / 5312
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
					iVar2 = ((Function_32((50 + iVar4)) + Function_32((183 + iVar4))) + Function_32((90 + iVar4)));
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

int Function_18(int iParam0, bool bParam1, bool bParam2) //Position: 0x1567 / 5479
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
		Function_31(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_30(iParam0);
	if (&bParam2)
	{
		Function_19(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_19(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x1803 / 6147
{
	char* cVar0[32];
	bool bVar8;
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
			if (bParam2 > 2000.0f)
			{
				stradd(&Global_55480[iParam016] + 32, " lbs", 32);
			}
			else
			{
				bParam2 = (bParam2 / 2000.0f);
				memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
				stradd(&Global_55480[iParam016] + 32, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
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
					bVar6 = FLOOR((bParam2 - TO_FLOAT(bVar5 * 60)));
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
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(bParam2)), 32);
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
			if ((bParam2 - IntToFloat(FLOOR(bParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(bParam2)), 32);
			}
			if (bParam2 < 1.0f)
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_29(390))), 32);
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
					bVar19 = bParam2;
					bVar20 = 0.0f;
				}
				else if (bParam1)
				{
					bVar19 = (Function_28(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_28(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_26(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_23(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_21(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_20(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_74(), &Var9);
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

var Function_20(int iParam0) //Position: 0x1E41 / 7745
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_21(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1E52 / 7762
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_22("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_22("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_22("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_22(char* cParam0) //Position: 0x1F49 / 8009
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_23(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1F64 / 8036
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_25(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_24(Function_25(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_24(int iParam0, int iParam1) //Position: 0x1FCB / 8139
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_25(int iParam0, bool bParam1) //Position: 0x1FDD / 8157
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_26(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1FEF / 8175
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
	if (((Function_27(iParam0) != 19 || Function_27(iParam0) != 17) || Function_27(iParam0) != 10) || Function_27(iParam0) != 9)
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

int Function_27(int iParam0) //Position: 0x2123 / 8483
{
	return Global_55480[iParam016].f_96;
}

float Function_28(int iParam0) //Position: 0x2132 / 8498
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_29(int iParam0) //Position: 0x216B / 8555
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_30(int iParam0) //Position: 0x21A8 / 8616
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

int Function_31(int iParam0, bool bParam1, bool bParam2) //Position: 0x2342 / 9026
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
			Global_54086[iVar1] = (Global_54086[iVar1] + bParam1);
		}
	}
	else
	{
		Global_54086[iVar1] = bParam1;
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

int Function_32(bool bParam0) //Position: 0x2586 / 9606
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_33() //Position: 0x25C7 / 9671
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
		iVar2 = ((Function_32((50 + iVar3) + 15) + Function_32((183 + iVar3) + 15)) + Function_32((90 + iVar3) + 15));
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

struct<8> Function_34() //Position: 0x2650 / 9808
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
			iVar2 = ((Function_32((50 + iVar3) + 8) + Function_32((183 + iVar3) + 8)) + Function_32((90 + iVar3) + 8));
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

struct<8> Function_35() //Position: 0x26E7 / 9959
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
		iVar2 = ((Function_32((50 + iVar3)) + Function_32((183 + iVar3))) + Function_32((90 + iVar3)));
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

void Function_36() //Position: 0x2766 / 10086
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_37(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_18(8, (GET_DAY(0) - 2), 0);
	return;
}

int Function_37(int iParam0, bool bParam1, int iParam2) //Position: 0x27A3 / 10147
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
	if (bParam1 > 0.0f)
	{
		LOG_ERROR("\STAT_INCREASE_NOW: fIncreaseValue < 0.0 - I am turning this into a positive number for you!");
		bParam1 = FABS(bParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] + bParam1);
	Function_31(iParam0, bParam1, 1);
	Function_30(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_19(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= ROUND(bParam1))
		{
			ADD_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_38() //Position: 0x29AF / 10671
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_48())
	{
		Function_45(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_45(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_40(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_40(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_39(StackVal, Var0))
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
	(&Global_53524 + 196) = Global_53524;
	Global_53524.f_212 = Global_53524.f_16;
	Global_53524.f_28 = 0;
	Global_53524.f_36 = 0;
	Global_53524.f_40 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_140631 = 1;
	return;
}

bool Function_39(vector3 vParam0) //Position: 0x2A66 / 10854
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

struct<8> Function_40(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0x2A7E / 10878
{
	int iVar0;
	
	iVar0 = Function_43(&uParam2, &fParam3);
	if (Function_42(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_55(&Global_99144, 1);
			Function_8(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_55(&Global_99144, 2);
			Function_8(&Global_99144, 1);
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
		Function_55(&Global_99144, 2);
		Function_8(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_41();
	return StackVal, Function_41();
}

struct<8> Function_41() //Position: 0x2B76 / 11126
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

bool Function_42(int iParam0) //Position: 0x2B80 / 11136
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_43(bool bParam0, bool bParam1) //Position: 0x2B96 / 11158
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
				fVar2 = Function_44(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
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
		fVar2 = Function_44(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_42(iVar0) && !&bParam1)
	{
		iVar0 = Function_43(&bParam0, 1);
	}
	return iVar0;
}

float Function_44(struct<2> Param0, struct<2> Param2) //Position: 0x2C62 / 11362
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_45(float fParam0, int iParam1) //Position: 0x2C7F / 11391
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_47(&Global_54076, &Var3);
	if (!Function_46(Global_46760[0]))
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
	if (!Function_46(Global_46760[2]))
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
	if (!Function_46(Global_46760[1]))
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
	if (!Function_46(Global_46796[1]))
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
	if (!Function_46(Global_46796[3]))
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
	if (!Function_46(Global_46796[2]))
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
	if (!Function_46(Global_46796[4]))
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
	if (!Function_46(Global_46816[0]))
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
	if (!Function_46(Global_46816[1]))
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
	if (!Function_46(Global_46816[2]))
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
	if (!Function_46(Global_46838[0]))
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
	if (!Function_46(Global_46850[0]))
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
	if (!Function_46(Global_46850[1]))
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
	if (!Function_46(Global_46850[2]))
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
	if (!Function_46(Global_46866[0]))
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
	if (!Function_46(Global_46866[1]))
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
	if (!Function_46(Global_46866[2]))
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
	if (!Function_46(Global_46894[2]))
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
	if (!Function_46(Global_46894[3]))
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
	if (!Function_46(Global_46894[0]))
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
	if (!Function_46(Global_46914[0]))
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
	if (!Function_46(Global_46926[2]))
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
	if (!Function_46(Global_46926[1]))
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
	if (!Function_46(Global_46926[0]))
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
	if (!Function_46(Global_46838[1]))
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
	if (!Function_46(Global_46894[1]))
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
	Function_55(&Global_99144, 2);
	Function_8(&Global_99144, 1);
	iParam1 = 0;
	if (Function_39(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_46(int iParam0) //Position: 0x34AB / 13483
{
	var uVar0;
	
	uVar0 = Global_43791[iParam0];
	return (((Function_91(uVar0, 0x1000000) || Function_91(uVar0, 0x2000000)) || Function_91(uVar0, 0x4000000)) || !Function_91(uVar0, 0x10000000));
}

void Function_47(var uParam0, var uParam1) //Position: 0x34E6 / 13542
{
	GET_POSITION(&uParam0, &uParam1);
	return;
}

bool Function_48() //Position: 0x34F5 / 13557
{
	if (Function_91(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_49(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x3510 / 13584
{
	uParam0 = &uParam0;
	if (Global_6623 && !&iParam1 != 1)
	{
		return 1;
	}
	if (Global_6625 && !&iParam1 != 2)
	{
		return 1;
	}
	if (Global_6635 && !&iParam1 != 6)
	{
		return 1;
	}
	if (Global_6627 && !&iParam1 != 4)
	{
		return 1;
	}
	if (Global_6636 && uParam2)
	{
		return 1;
	}
	if (Global_6638 || Global_6639)
	{
		return 1;
	}
	if (Global_6628 && !&iParam1 != 3)
	{
		return 1;
	}
	if (Global_93258 && uParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

bool Function_50(int iParam0) //Position: 0x35BF / 13759
{
	return Function_91(iParam0, 1);
}

void Function_51(vector3 vParam0) //Position: 0x35CD / 13773
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

float Function_52(vector3 vParam0) //Position: 0x35E4 / 13796
{
	if (Function_50(&vParam0))
	{
		if (Function_53(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_53(int iParam0) //Position: 0x36B1 / 14001
{
	return Function_91(iParam0, 2);
}

void Function_54(bool bParam0, int iParam1) //Position: 0x36BF / 14015
{
	DECOR_SET_OBJECT(&Global_54076, "SettingPlayerHorse", &bParam0);
	DECOR_SET_BOOL(&Global_54076, "NewPlayerHorse_Wipe", &iParam1);
	return;
}

void Function_55(var uParam0, int iParam1) //Position: 0x3706 / 14086
{
	uParam0 = (uParam0 || iParam1);
	return;
}

var Function_56(var uParam0, bool bParam1, var uParam2, float fParam3, bool bParam4, bool bParam5, var uParam6) //Position: 0x3717 / 14103
{
	var uVar0;
	
	if (&bParam4)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_74(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "HorseHitching", 2, 1);
	}
	Function_57(&uVar0, &uParam2, &fParam3);
	if (uParam6 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam5)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam5);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_57(var uParam0, float fParam1, var uParam2) //Position: 0x37A4 / 14244
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_59(&uVar0, &fParam1, &uParam2);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_58(&uVar0, &fParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 4,5f, 0, 1);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESET(&iVar1, 1000.0f, 1, 0);
	return;
}

void Function_58(float fParam0, struct<25> Param1) //Position: 0x37FB / 14331
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(&fParam0, 1);
	SET_CAMERASHOT_FOV(&fParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&fParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&fParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&fParam0, 0);
	Var0 = Vector(-1,819618f, 1,897174f, 1,448807f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(*(&Param1 + 12), Var0, StackVal);
	SET_CAMERASHOT_POSITION(&fParam0, Var0);
	Var0 = Vector(-0,60174f, 0,213054f, 0,769752f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	SET_CAMERASHOT_DIRECTION(&fParam0, Var0, 0);
	RESET_CAMERASHOT_TARGET(&fParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&fParam0);
	return;
}

void Function_59(var uParam0, struct<25> Param1) //Position: 0x38B4 / 14516
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	Var0 = Vector(1,386795f, 1,647651f, 2,115284f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(*(&Param1 + 12), Var0, StackVal);
	SET_CAMERASHOT_POSITION(&uParam0, Var0);
	Var0 = Vector(0,643825f, 0,022311f, 0,764847f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	SET_CAMERASHOT_DIRECTION(&uParam0, Var0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &iParam2, 30);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &iParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(-0,157772f, 0,559703f, -0,033479f), Vector(0.0f, 0.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&uParam0);
	return;
}

var Function_60(var uParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, float fParam6) //Position: 0x3998 / 14744
{
	var uVar0;
	
	if (&bParam4)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_74(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "HorseHitching_NoHrs", 2, 1);
	}
	Function_61(&uVar0, &uParam2, &uParam3);
	if (fParam6 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam5)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam5);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_61(var uParam0, Vector3 vParam1, var uParam2) //Position: 0x3A2B / 14891
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_63(&uVar0, &vParam1, &uParam2);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_62(&uVar0, &vParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 2,5f, 0, 1);
	return;
}

void Function_62(float fParam0, struct<25> Param1) //Position: 0x3A73 / 14963
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(&fParam0, 1);
	SET_CAMERASHOT_FOV(&fParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&fParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&fParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&fParam0, 0);
	Var0 = Vector(-1,730289f, 2,17187f, 0,418655f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(*(&Param1 + 12), Var0, StackVal);
	SET_CAMERASHOT_POSITION(&fParam0, Var0);
	Var0 = Vector(-0,673478f, 0,436256f, 0,596748f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	SET_CAMERASHOT_DIRECTION(&fParam0, Var0, 0);
	RESET_CAMERASHOT_TARGET(&fParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&fParam0);
	return;
}

void Function_63(int iParam0, struct<25> Param1) //Position: 0x3B2C / 15148
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	Var0 = Vector(-0,720963f, 2,045398f, 1,269505f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(*(&Param1 + 12), Var0, StackVal);
	SET_CAMERASHOT_POSITION(&iParam0, Var0);
	Var0 = Vector(-0,435482f, 0,280604f, 0,855346f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	SET_CAMERASHOT_DIRECTION(&iParam0, Var0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&iParam0, &uParam2, 30);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &uParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(0,294135f, 1,20993f, -0,913264f), Vector(0.0f, 0.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

bool Function_64(var uParam0, int iParam1) //Position: 0x3C10 / 15376
{
	struct<2> Var0;
	
	GET_OBJECT_POSITION(&iParam1, &Var0);
	return Function_65(StackVal, &uParam0, Var0);
}

int Function_65(var uParam0, struct<2> Param1) //Position: 0x3C29 / 15401
{
	struct<2> Var0;
	var uVar2;
	var uVar4;
	float fVar6;
	
	GET_OBJECT_POSITION(&uParam0, &Var0);
	uVar2 = Vector(StackVal, StackVal, StackVal) - Vector(Var0, Param1, StackVal);
	GET_OBJECT_AXIS(&uParam0, &uVar4, 0);
	fVar6 = VDOT(&uVar2, &uVar4);
	if (fVar6 < 0.0f)
	{
		return 1;
	}
	return 0;
}

struct<8> Function_66(int iParam0) //Position: 0x3C64 / 15460
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_ORIENTATION(&iParam0, &Var0);
	return StackVal, Var0;
}

void Function_67(int iParam0) //Position: 0x3C8D / 15501
{
	Function_68(&iParam0, 0.0f);
	return;
}

void Function_68(vector3 vParam0) //Position: 0x3C9A / 15514
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_55(&vParam0, 1);
	Function_8(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_69(var uParam0, bool bParam1) //Position: 0x3CBF / 15551
{
	var uVar0;
	var uVar1;
	
	if (IS_ACTOR_RIDING(&uParam0))
	{
		uVar0 = GET_MOUNT(&uParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			RESET_ACTOR_GAITS(&uVar0, 1);
		}
	}
	else if (IS_ACTOR_INSIDE_VEHICLE(&uParam0))
	{
		uVar1 = GET_VEHICLE(&uParam0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			STOP_VEHICLE(&uVar1);
		}
	}
	else if (!&bParam1 || Function_70(&uParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(&uParam0, 1);
	}
	return;
}

float Function_70(var uParam0, bool bParam1) //Position: 0x3D29 / 15657
{
	struct<2> Var0;
	
	GET_ACTOR_VELOCITY(&uParam0, &Var0);
	if (&bParam1)
	{
		Var0.f_4 = 0.0f;
	}
	return VMAG(Var0);
}

void Function_71(float fParam0, float fParam1) //Position: 0x3D4A / 15690
{
	*(&Global_21369 + 72 + 44) = 0;
	Global_21369.f_396 = 0;
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		if (GET_TASK_STATUS(&Global_21369 + 72, 86) != 2)
		{
			TASK_CLEAR(&Global_21369 + 72);
		}
		if (&fParam0 == 0.0f)
		{
			TASK_PRIORITY_SET(&Global_21369 + 72, true);
			TASK_STAND_STILL(&Global_21369 + 72, &fParam0, 0, 0);
		}
	}
	if (IS_BLIP_VALID(&Global_21369 + 400))
	{
		REMOVE_BLIP(&Global_21369 + 400);
	}
	Function_73();
	Function_72();
	if (DECOR_CHECK_EXIST(&Global_54076, "Player_SimWhistle"))
	{
		DECOR_REMOVE(&Global_54076, "Player_SimWhistle");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleTimeWaited"))
	{
		DECOR_REMOVE(&Global_54076, "WhistleTimeWaited");
	}
	DECOR_SET_FLOAT(&Global_54076, "Player_IgnoreWhistle", (GET_CURRENT_GAME_TIME() + &fParam1));
	return;
}

void Function_72() //Position: 0x3E5B / 15963
{
	if (DECOR_CHECK_EXIST(&Global_54076, "HorseStolen"))
	{
		DECOR_REMOVE(&Global_54076, "HorseStolen");
	}
	return;
}

void Function_73() //Position: 0x3E8F / 16015
{
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleNavQuery"))
	{
		DESTROY_OBJECT(DECOR_GET_OBJECT(&Global_54076, "WhistleNavQuery"));
		DECOR_REMOVE(&Global_54076, "WhistleNavQuery");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleNavQueryPos"))
	{
		DECOR_REMOVE(&Global_54076, "WhistleNavQueryPos");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistlePosProbed"))
	{
		DECOR_REMOVE(&Global_54076, "WhistlePosProbed");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleTimeWaited"))
	{
		DECOR_REMOVE(&Global_54076, "WhistleTimeWaited");
	}
	return;
}

var Function_74() //Position: 0x3F95 / 16277
{
	int iVar0;
	
	return &iVar0;
}

struct<8> Function_75(bool bParam0) //Position: 0x3F9E / 16286
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

struct<32> Function_76(char* cParam0) //Position: 0x3FC7 / 16327
{
	char* cVar0[32];
	char* cVar8[16];
	
	if (!IS_STRING_VALID(&cParam0))
	{
	}
	else
	{
		Global_10985 = (Global_10985 % 10000);
		strcpy(&cVar8, I2STR(Global_10985), 16);
		while (STRING_LENGTH(&cVar8) <= 4)
		{
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_77("0", &cVar8, ""), 4);
		}
		if (IS_STRING_VALID(&cVar8))
		{
			strcpy(&cVar0, &cParam0, 32);
			stradd(&cVar0, &cVar8, 32);
			Global_10985++;
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_77(char* cParam0) //Position: 0x4034 / 16436
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_78(struct<2>[] Param0) //Position: 0x4056 / 16470
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_83();
	iVar1 = 0;
	if (!Function_4(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_82(&(Param0[iVar02]), 8);
		}
		else if (Function_81())
		{
			iVar1 = 1;
			Function_82(&(Param0[iVar02]), 8);
		}
		Function_82(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_4(&(Param0[iVar02]), 4))
		{
			if (!Function_4(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_4(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_4(&(Param0[02]), 8) || iVar1));
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
				Function_82(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_4(&(Param0[iVar02]), 4))
		{
			if (!Function_4(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_82(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_82(&(Param0[iVar02]), 2);
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
							Function_82(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_82(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_82(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_82(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_82(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_82(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_82(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_82(&(Param0[iVar02]), 2);
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
	Function_79();
	return 1;
}

void Function_79() //Position: 0x4418 / 17432
{
	if (!Function_80(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_80(int iParam0) //Position: 0x4458 / 17496
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_81() //Position: 0x4474 / 17524
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

void Function_82(struct<13> Param0) //Position: 0x44A2 / 17570
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_83() //Position: 0x44B5 / 17589
{
	if (!Function_80(128))
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

var Function_84(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x44F7 / 17655
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_85(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_82(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_85(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x4535 / 17717
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_4(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_82(&(Param0[iVar02]), 4);
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

int Function_86(var uParam0, bool bParam1) //Position: 0x4604 / 17924
{
	struct<2> Var0;
	float fVar2;
	var uVar3;
	
	if (IS_ACTOR_MOUNTED(&Global_54076) || IS_ACTOR_RIDING_VEHICLE(&Global_54076))
	{
		return 0;
	}
	Function_87(&Global_54076);
	Var0 = Function_87(&Global_54076);
	if (&bParam1)
	{
		fVar2 = 1,1f;
	}
	else
	{
		fVar2 = 0,95f;
	}
	uVar3 = LOCATE_ACTOR_OF_TYPE(Var0, fVar2, 23, 4294967295);
	if (IS_ACTOR_VALID(&uVar3))
	{
		if (IS_ACTOR_ALIVE(&uVar3))
		{
			if (ANIMAL_ACTOR_GET_DOMESTICATION(&uVar3) != 1)
			{
				if (!DECOR_CHECK_EXIST(&uVar3, "HorseLeash"))
				{
					if (!IS_ACTOR_VALID(GET_RIDER(&uVar3)))
					{
						if (!IS_ACTOR_DRAFTED(&uVar3))
						{
							uParam0 = &uVar3;
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

struct<8> Function_87(int iParam0) //Position: 0x46A2 / 18082
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

bool Function_88(Vector3 vParam0, int iParam1) //Position: 0x46B4 / 18100
{
	var uVar0;
	struct<2> Var1;
	struct<2> Var3;
	
	uVar0 = GET_OBJECT_FROM_GRINGO(&vParam0);
	GET_OBJECT_AXIS(&uVar0, &Var1, 2);
	GET_OBJECT_POSITION(&uVar0, &Var3);
	Var3 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var1, Var3, StackVal) * Vector(1,75f, 1,75f, 1,75f), StackVal, StackVal);
	return IS_AREA_OBSTRUCTED2(Var3, 0,5f, GET_PHYSINST_FROM_ACTOR(&Global_54076), GET_PHYSINST_FROM_ACTOR(&iParam1), 0);
}

var Function_89(int iParam0) //Position: 0x4703 / 18179
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	bool bVar6;
	var uVar7;
	struct<2> Var8;
	int iVar10;
	int iVar11;
	struct<2> Var12;
	var uVar14;
	int iVar16;
	struct<2> Var17;
	var uVar19;
	int iVar21;
	
	Function_87(&Global_54076);
	Var4 = Function_87(&Global_54076);
	bVar6 = 3,25f;
	if (IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
	{
		bVar6 = 5.0f;
	}
	uVar7 = LOCATE_GRINGO_OF_TYPE("hitchingPost", &Var4, bVar6, 0);
	if (IS_GRINGO_VALID(&uVar7))
	{
		GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(&uVar7), &Var8);
		if (!Function_39(StackVal, Var8))
		{
			Function_90(StackVal, Var8, &iVar10, &iVar11);
			if (IS_GRINGO_VALID(&iVar10))
			{
				if (IS_OBJECT_VALID(GRINGO_QUERY_NAMED_COMPONENT_USER(&iVar10, "UseCase1")))
				{
					iVar10 = "";
				}
				else if (!GRINGO_IS_ACTIVATION_ALLOWED(&iVar10))
				{
					iVar10 = "";
				}
				else
				{
					Function_75(GET_OBJECT_FROM_GRINGO(&iVar10));
					Var0 = Function_75(GET_OBJECT_FROM_GRINGO(&iVar10));
					GET_OBJECT_NAMED_BONE_POSITION(&Global_54076, "head", &Var12);
					if (CAMERA_PROBE(&uVar14, Var12, Var0, &Global_54076, 6))
					{
						iVar10 = "";
					}
					if (IS_GRINGO_VALID(&iVar10))
					{
						iVar16 = LOCATE_ACTOR_OF_TYPE(Var0, 0,33f, 23, 4294967295);
						if (!IS_ACTOR_VALID(&iVar16))
						{
							iVar16 = LOCATE_ACTOR_OF_TYPE(Var2, 0,33f, 24, 4294967295);
						}
						if (!IS_ACTOR_VALID(&iVar16))
						{
							iVar16 = LOCATE_ACTOR_OF_TYPE(Var2, 0,33f, 9, 4294967295);
						}
						if (IS_ACTOR_VALID(&iVar16) && &iVar16 == &iParam0)
						{
							if (!IS_ACTOR_MOUNTED(&iVar16))
							{
								iVar10 = "";
							}
						}
					}
				}
			}
			if (IS_GRINGO_VALID(&iVar11))
			{
				if (IS_OBJECT_VALID(GRINGO_QUERY_NAMED_COMPONENT_USER(&iVar11, "UseCase1")))
				{
					iVar11 = "";
				}
				else if (!GRINGO_IS_ACTIVATION_ALLOWED(&iVar11))
				{
					iVar11 = "";
				}
				else
				{
					Function_75(GET_OBJECT_FROM_GRINGO(&iVar11));
					Var2 = Function_75(GET_OBJECT_FROM_GRINGO(&iVar11));
					GET_OBJECT_NAMED_BONE_POSITION(&Global_54076, "head", &Var17);
					if (CAMERA_PROBE(&uVar19, Var17, Var2, &Global_54076, 6))
					{
						iVar11 = "";
					}
					if (IS_GRINGO_VALID(&iVar11))
					{
						iVar21 = LOCATE_ACTOR_OF_TYPE(Var2, 0,33f, 23, 4294967295);
						if (!IS_ACTOR_VALID(&iVar21))
						{
							iVar21 = LOCATE_ACTOR_OF_TYPE(Var2, 0,33f, 24, 4294967295);
						}
						if (!IS_ACTOR_VALID(&iVar21))
						{
							iVar21 = LOCATE_ACTOR_OF_TYPE(Var2, 0,33f, 9, 4294967295);
						}
						if (IS_ACTOR_VALID(&iVar21) && &iVar21 == &iParam0)
						{
							if (!IS_ACTOR_MOUNTED(&iVar21))
							{
								iVar11 = "";
							}
						}
					}
				}
			}
			if (IS_GRINGO_VALID(&iVar11) && IS_GRINGO_VALID(&iVar10))
			{
				bVar6 = VDIST(Var4, Var0);
				if (VDIST(Var4, Var2) > bVar6)
				{
					return &iVar11;
				}
				return &iVar10;
			}
			if (IS_GRINGO_VALID(&iVar11))
			{
				return &iVar11;
			}
			if (IS_GRINGO_VALID(&iVar10))
			{
				return &iVar10;
			}
		}
	}
	iLocal_0 = 100;
	return "";
}

void Function_90(int iParam0, int iParam1, int iParam2, var uParam3) //Position: 0x4990 / 18832
{
	var uVar0;
	
	uVar0 = LOCATE_GRINGO_OF_TYPE("hitchingPost", &iParam0, 2.0f, 1);
	if (IS_GRINGO_VALID(&uVar0))
	{
		GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(&uVar0), &iParam0);
		if (!Function_48())
		{
			uParam3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &iParam0, 2.0f, 0);
			iParam2 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch2", &iParam0, 2.0f, 0);
		}
		else
		{
			uParam3 = LOCATE_GRINGO_OF_TYPE("$/content/DLC/ZombiePack/Gringos/ZombiePack_horseHitch", &iParam0, 2.0f, 0);
			iParam2 = LOCATE_GRINGO_OF_TYPE("$/content/DLC/ZombiePack/Gringos/ZombiePack_horseHitch2", &iParam0, 2.0f, 0);
		}
	}
}

bool Function_91(var uParam0, int iParam1) //Position: 0x4ADA / 19162
{
	return (uParam0 && iParam1) == 0;
}

void Function_92(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x4AE7 / 19175
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_93(Global_10966) };
		}
		PRINT_HELP_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5, &Var0, &uParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5, &uVar4, &uParam6);
	}
}

struct<16> Function_93(int iParam0) //Position: 0x4B72 / 19314
{
	char* cVar0[16];
	
	if (!Function_48())
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

