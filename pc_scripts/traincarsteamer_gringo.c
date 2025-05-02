//Decompiled with MagicRDR v1.0
//Function Count : 34
//Statics Count : 80
//Natives Count : 113
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 1;
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
	var uLocal_47 = 0;
	int iLocal_48 = 0;
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
	int iLocal_62 = 3;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	bool bLocal_76 = false;
	int iLocal_77 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	char* cVar3[32];
	var uVar14;
	var uVar15;
	
	bLocal_76 = true;
	iLocal_77 = 0;
	uScriptParam_0 = &uScriptParam_0;
	iVar1 = 0;
	bVar2 = false;
	if (Function_33(16384))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		Function_32(&iLocal_48, 1);
	}
	Function_31(&iLocal_62, 201, 3, 0);
	while (IS_GRINGO_ACTIVE() && !IS_EXITFLAG_SET())
	{
		if (Function_27(&iLocal_62))
		{
			if (bVar0)
			{
				Function_13(&iLocal_48, GET_OBJECT_OWNER(GRINGO_GET_MY_OBJECT_REF()), 1, "ped_traveller", 0x43160000);
			}
			if (bVar0)
			{
				if (IS_LAYOUTREF_VALID(&iLocal_48 + 8))
				{
					if (!Function_12(&iLocal_48 + 8, &iLocal_48 + 32))
					{
						iLocal_77++;
						if (iLocal_77 > 10)
						{
							iLocal_77 = 0;
						}
						if (!bVar2 && iLocal_77 != 0)
						{
							uVar14 = GET_OBJECT_OWNER(GRINGO_GET_MY_OBJECT_REF());
							if (DECOR_CHECK_EXIST(&uVar14, "EngieAllowed"))
							{
								bLocal_76 = DECOR_GET_BOOL(&uVar14, "EngieAllowed");
							}
							if (bLocal_76)
							{
								if (!IS_ACTOR_VALID(&uLocal_46))
								{
									strcpy(&cVar3, "AMB_ENG", 32);
									cVar3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_10(&cVar3) };
									uLocal_46 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_48 + 8, &cVar3, 201, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
									if (IS_ACTOR_VALID(&uLocal_46))
									{
										bVar2 = true;
										SET_ACTOR_FACTION(&uLocal_46, 21);
										TASK_STAND_STILL(&uLocal_46, -1.0f, 0, 0);
										TASK_PRIORITY_SET(&uLocal_46, true);
										DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(&uLocal_46), "CanBeLasso", false);
										if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&iLocal_0 + 176)))
										{
											SNAP_ACTOR_TO_GRINGO(&uLocal_46, &iLocal_0 + 176, "UseCase1", true, 0, 0);
											TASK_USE_GRINGO(&uLocal_46, GET_GRINGO_FROM_OBJECT(&iLocal_0 + 176), "UseCase1", 4294967295, 1);
											TASK_PRIORITY_SET(&uLocal_46, true);
										}
									}
									else
									{
										bVar2 = false;
									}
								}
							}
						}
						else if ((bVar2 && !Global_6623) && iLocal_77 != 0)
						{
							uVar15 = GET_OBJECT_OWNER(GRINGO_GET_MY_OBJECT_REF());
							if (DECOR_CHECK_EXIST(&uVar15, "EngieAllowed"))
							{
								bLocal_76 = DECOR_GET_BOOL(&uVar15, "EngieAllowed");
							}
							if (bLocal_76)
							{
								if (IS_ACTOR_VALID(&uLocal_46))
								{
									if (IS_ACTOR_ALIVE(&uLocal_46))
									{
										if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&iLocal_0 + 176)))
										{
											SNAP_ACTOR_TO_GRINGO(&uLocal_46, &iLocal_0 + 176, "UseCase1", true, 0, 0);
											TASK_USE_GRINGO(&uLocal_46, GET_GRINGO_FROM_OBJECT(&iLocal_0 + 176), "UseCase1", 4294967295, 1);
											TASK_PRIORITY_SET(&uLocal_46, true);
										}
									}
								}
							}
						}
					}
				}
			}
		}
		GRINGO_WAIT(250);
	}
	if (IS_ACTOR_VALID(&uLocal_46))
	{
		TASK_CLEAR(&uLocal_46);
		DESTROY_ACTOR(&uLocal_46);
	}
	if (bVar0)
	{
		Function_5(&iLocal_48, 1);
	}
	Function_1(&iLocal_62);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x28C / 652
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

void Function_2(struct<2>[] Param0, int iParam1) //Position: 0x2B4 / 692
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

void Function_3(struct<13> Param0) //Position: 0x3FF / 1023
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_4(struct<13> Param0) //Position: 0x41C / 1052
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(int iParam0, int iParam1) //Position: 0x43A / 1082
{
	iParam1 = &iParam1;
	if (IS_ZONE_VALID(&iParam0 + 40))
	{
		DESTROY_ZONE(&iParam0 + 40);
	}
	if (IS_ITERATOR_VALID(&iParam0 + 16))
	{
		DESTROY_ITERATOR(&iParam0 + 16);
	}
	if (IS_VOLUME_VALID(&iParam0 + 32))
	{
		DESTROY_VOLUME(&iParam0 + 32);
	}
	if (SQUAD_IS_VALID(&iParam0 + 48))
	{
		Function_9(&iParam0 + 48);
	}
	Function_7();
	RELEASE_LAYOUT_REF(&iParam0 + 8);
	Function_6(&iParam0);
	return;
}

void Function_6(int iParam0) //Position: 0x4AB / 1195
{
	if (IS_VOLUME_VALID(&iParam0 + 32))
	{
		DESTROY_VOLUME(&iParam0 + 32);
	}
	if (IS_LAYOUTREF_VALID(&iParam0 + 8))
	{
		RELEASE_LAYOUT_REF(&iParam0 + 8);
	}
	return;
}

void Function_7() //Position: 0x4DB / 1243
{
	Function_8();
	return;
}

void Function_8() //Position: 0x4E4 / 1252
{
	Function_1(&iLocal_0 + 8);
	RELEASE_LAYOUT_REF(&iLocal_0);
	return;
}

void Function_9(int iParam0) //Position: 0x4F7 / 1271
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&iParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SQUAD_LEAVE(&uVar1);
			DESTROY_ACTOR(&uVar1);
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

struct<32> Function_10(char* cParam0) //Position: 0x545 / 1349
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_11("0", &cVar8, ""), 4);
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

struct<32> Function_11(char* cParam0) //Position: 0x5B1 / 1457
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_12(bool bParam0, int iParam1) //Position: 0x5D3 / 1491
{
	var uVar0;
	int iVar1;
	var uVar2;
	
	if (IS_LAYOUTREF_VALID(&bParam0))
	{
		if (IS_VOLUME_VALID(&iParam1))
		{
			uVar0 = CREATE_OBJECT_ITERATOR(&bParam0);
			ITERATE_IN_VOLUME(&uVar0, &iParam1);
			ITERATE_ON_OBJECT_TYPE(&uVar0, 15);
			iVar1 = START_OBJECT_ITERATOR(&uVar0);
			while (IS_OBJECT_VALID(&iVar1))
			{
				uVar2 = GET_OBJECT_NAME(&iVar1);
				if (STRING_CONTAINS_STRING(&uVar2, "amb_eng"))
				{
					DESTROY_ITERATOR(&uVar0);
					return 1;
				}
				iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
			}
			if (IS_ITERATOR_VALID(&uVar0))
			{
				DESTROY_ITERATOR(&uVar0);
			}
		}
	}
	return 0;
}

var Function_13(int iParam0, var uParam1, bool bParam2, var uParam3, float fParam4) //Position: 0x657 / 1623
{
	var uVar0;
	var uVar1;
	struct<2> Var2;
	int iVar4;
	
	GET_OBJECT_POSITION(&uParam1, &Var2);
	iVar4 = 600;
	if (IS_OBJECT_VALID(&uParam1))
	{
		switch (iParam0)
		{
			case 0x00000000:
				iParam0 = 1;
				iVar4 = 0;
				break;
			
			case 0x00000001:
				GET_POSITION(&Global_54076, &Global_54078);
				if (VDIST(Var2, Global_54078) > &fParam4)
				{
					iParam0 = 2;
					iVar4 = 0;
				}
				break;
			
			case 0x00000002:
				iVar4 = 250;
				if (Function_15(&iParam0, &uParam1))
				{
					DECOR_SET_INT(&uParam1, "mylayout", &iParam0 + 8);
					DECOR_SET_OBJECT(&uParam1, "myLayoutObj", &iParam0 + 8);
					iParam0 = 4;
					iVar4 = 0;
				}
				break;
			
			case 0x00000003:
				break;
			
			case 0x00000004:
				if (Function_33(32768))
				{
					if (IS_VOLUME_VALID(&iParam0 + 32))
					{
						if (!IS_POPSET_VALID(&iParam0 + 24))
						{
							*(&iParam0 + 24) = FIND_NAMED_POPULATION_SET(&uParam3);
							if (IS_POPSET_VALID(&iParam0 + 24))
							{
								if (IS_ZONE_VALID(&iParam0 + 40))
								{
									DESTROY_ZONE(&iParam0 + 40);
								}
							}
						}
						if (!IS_ZONE_VALID(&iParam0 + 40) && IS_POPSET_VALID(&iParam0 + 24))
						{
							*(&iParam0 + 40) = CREATE_ZONE_VOLUME(&iParam0 + 32);
							SET_ZONE_POPULATION_TYPE(&iParam0 + 40, &iParam0 + 24);
							SET_ZONE_POPULATION_COUNT(&iParam0 + 40, bParam2);
							SET_ZONE_POPULATION_ANIMAL_DOMESTICATION(&iParam0 + 40, 0);
						}
						uVar1 = CREATE_OBJECT_ITERATOR(&iParam0 + 8);
						ITERATE_IN_LAYOUT(&uVar1, GET_AMBIENT_LAYOUT());
						ITERATE_ON_OBJECT_TYPE(&uVar1, 15);
						ITERATE_IN_VOLUME(&uVar1, GET_OBJECT_FROM_VOLUME(&iParam0 + 32));
						uVar0 = START_OBJECT_ITERATOR(&uVar1);
						while (IS_OBJECT_VALID(&uVar0))
						{
							if (GET_ACTOR_FROM_OBJECT(&uVar0) != GET_PLAYER_ACTOR(0))
							{
								if (!DECOR_CHECK_EXIST(&uVar0, "nNO_TARGET"))
								{
									DECOR_SET_BOOL(&uVar0, "nNO_TARGET", false);
									SET_ACTOR_CAN_BE_TARGETED(GET_ACTOR_FROM_OBJECT(&uVar0), false);
								}
							}
							uVar0 = OBJECT_ITERATOR_NEXT(&uVar1);
						}
						if (IS_ITERATOR_VALID(&uVar1))
						{
							DESTROY_ITERATOR(&uVar1);
						}
					}
				}
				if (VDIST(Var2, Global_54078) < (&fParam4 + 30.0f))
				{
					iParam0 = 5;
				}
				break;
			
			case 0x00000005:
				Function_7();
				iParam0 = 1;
				iVar4 = 0;
				break;
		}
		Function_14(&iParam0);
	}
	return iVar4;
}

void Function_14(int iParam0) //Position: 0x892 / 2194
{
	if (IS_LAYOUTREF_VALID(&iParam0 + 8))
	{
		if (Function_33(32768))
		{
			if (!IS_VOLUME_VALID(&iParam0 + 32))
			{
				*(&iParam0 + 32) = &iLocal_0 + 32;
			}
			if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&iLocal_0 + 176)))
			{
				GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_0 + 176), 0);
			}
		}
		else
		{
			if (IS_VOLUME_VALID(&iParam0 + 32))
			{
				DESTROY_VOLUME(&iParam0 + 32);
			}
			if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&iLocal_0 + 176)))
			{
				GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_0 + 176), 0);
			}
		}
	}
	return;
}

bool Function_15(int iParam0, int iParam1) //Position: 0x914 / 2324
{
	if (Function_16(&iParam1))
	{
		*(&iParam0 + 8) = &iLocal_0;
		return 1;
	}
	return 0;
}

bool Function_16(var uParam0) //Position: 0x92F / 2351
{
	var uVar0;
	
	Function_26(3, 2);
	uVar0 = &uVar0;
	Function_23(&iLocal_0 + 8, "$/content/scripting/gringo/simplegringo/train_engineer", 1, 0);
	if (!Function_27(&iLocal_0 + 8))
	{
		return 0;
	}
	iLocal_0 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_22()));
	*(&iLocal_0 + 32) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "TrainCarSteamer_pop", 2,802597E-45f, Vector(0.0f, 2,07893f, 4,06201f), Vector(0.0f, 0.0f, 0.0f), Vector(1,751237f, 1,956251f, 2,196033f));
	*(&iLocal_0 + 40) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_collision", 2,802597E-45f, Vector(0.0f, 0,7040083f, -4,30831f), Vector(0.0f, 0.0f, 0.0f), Vector(2,061226f, 1.0f, 1,432657f));
	*(&iLocal_0 + 48) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_body", 4,203895E-45f, Vector(0.0f, 2,058589f, -0,6215568f), Vector(90.0f, 0.0f, 0.0f), Vector(0,8470065f, 3,11252f, 0,8470065f));
	*(&iLocal_0 + 56) = Vector(0.0f, 2,809686f, -0,540985f);
	*(&iLocal_0 + 56 + 12) = Vector(0.0f, 0.0f, 0.0f);
	Function_18(&uParam0, &iLocal_0 + 56);
	*(&iLocal_0 + 80) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_explodeCenter", Vector(0.0f, 2,809686f, -0,540985f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 88) = Vector(0,9049232f, 3,265046f, -2,436195f);
	*(&iLocal_0 + 88 + 12) = Vector(0.0f, 0.0f, 0.0f);
	Function_18(&uParam0, &iLocal_0 + 88);
	*(&iLocal_0 + 112) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_frontcamerapos", Vector(0,9049232f, 3,265046f, -2,436195f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 120) = Vector(0.0f, 0,323201f, -9,766208f);
	*(&iLocal_0 + 120 + 12) = Vector(0.0f, 0.0f, 0.0f);
	Function_18(&uParam0, &iLocal_0 + 120);
	*(&iLocal_0 + 144) = Vector(-1,593886f, 3,654323f, -0,705147f);
	*(&iLocal_0 + 144 + 12) = Vector(0.0f, 0.0f, 0.0f);
	Function_18(&uParam0, &iLocal_0 + 144);
	*(&iLocal_0 + 168) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_frontcamerapos1", Vector(-1,593886f, 3,654323f, -0,705147f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 176) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "train_engineer", "train_engineer", Vector(-0,374f, 1,143f, 3,992f), Vector(0.0f, 0.0f, 0.0f));
	Function_17(&iLocal_0, &uParam0);
	return 1;
}

void Function_17(int iParam0, var uParam1) //Position: 0xBCA / 3018
{
	int iVar0;
	
	if (IS_LAYOUTREF_VALID(&iParam0))
	{
		if (GET_OBJECT_TYPE(&iParam0) == 13)
		{
			iVar0 = ATTACH_OBJECTS(StackVal, StackVal, &iParam0, &uParam1, Function_22(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
			if (IS_ATTACHMENT_VALID(&iVar0))
			{
				UNK_0x000079CB(GET_MOBILE_LAYOUT_FROM_OBJECT(&iParam0));
			}
		}
	}
	return;
}

void Function_18(var uParam0, int iParam1) //Position: 0xC15 / 3093
{
	Function_19(&uParam0, 1, &iParam1, &iParam1 + 12);
	return;
}

void Function_19(var uParam0, bool bParam1, struct<2> Param2) //Position: 0xC2A / 3114
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (GET_OBJECT_RELATIVE_POSITION(&uParam0, Param2, &Var0))
	{
		if (bParam1)
		{
			if (!Function_20(&Var0, &Param2))
			{
				Param2 = Var0;
			}
		}
		else
		{
			Param2 = Var0;
		}
	}
	else
	{
		LOG_ERROR("Failed to get object relative position - perhaps the object type does not support transformations");
	}
	if (!GET_OBJECT_RELATIVE_ORIENTATION(&uParam0, Param3, &Var0))
	{
		LOG_ERROR("Failed to get object relative rotation - perhaps the object type does not support transformations");
		Param3 = Var0;
	}
}

bool Function_20(vector3 vParam0) //Position: 0xD57 / 3415
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(vParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(&vParam0, 50.0f, &Param1, &uVar0))
	{
		if (!Function_21(StackVal, Param1))
		{
			return 1;
		}
	}
	vParam0 = (vParam0 + 0,01f);
	vParam0.f_8 = (vParam0.z + 0,01f);
	if (FIND_GROUND_INTERSECTION(&vParam0, 50.0f, &Param1, &uVar0))
	{
		if (!Function_21(StackVal, Param1))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_21(vector3 vParam0) //Position: 0xDCD / 3533
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

var Function_22() //Position: 0xDE5 / 3557
{
	int iVar0;
	
	return &iVar0;
}

var Function_23(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0xDEE / 3566
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_25(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_24(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

void Function_24(struct<13> Param0) //Position: 0xE2C / 3628
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

var Function_25(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0xE3F / 3647
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_4(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_24(&(Param0[iVar02]), 4);
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

void Function_26(int iParam0, int iParam1) //Position: 0xF0E / 3854
{
	switch (&iParam1)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			if (!iParam0 != 4)
			{
			}
			break;
		
		case 0x00000002:
			if (!iParam0 != 3)
			{
			}
			break;
		
		case 0x00000003:
			if (!iParam0 != 3)
			{
			}
			break;
	}
	return;
}

bool Function_27(struct<2>[] Param0) //Position: 0xF58 / 3928
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_30();
	iVar1 = 0;
	if (!Function_4(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_24(&(Param0[iVar02]), 8);
		}
		else if (Function_29())
		{
			iVar1 = 1;
			Function_24(&(Param0[iVar02]), 8);
		}
		Function_24(&(Param0[iVar02]), 16);
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
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), true, (Function_4(&(Param0[02]), 8) || iVar1));
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
				Function_24(&(Param0[iVar02]), 1);
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
							Function_24(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_24(&(Param0[iVar02]), 2);
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
							Function_24(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_24(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_24(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_24(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_24(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_24(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_24(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_24(&(Param0[iVar02]), 2);
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
	Function_28();
	return 1;
}

void Function_28() //Position: 0x131A / 4890
{
	if (!Function_33(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_29() //Position: 0x135A / 4954
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

void Function_30() //Position: 0x1388 / 5000
{
	if (!Function_33(128))
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

var Function_31(struct<2>[] Param0, int iParam1, var uParam2, bool bParam3) //Position: 0x13CA / 5066
{
	int iVar0;
	
	uParam2 = &uParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_4(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = iParam1;
			Param0[iVar02].f_8 = 3;
			Function_24(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_24(&(Param0[iVar02]), 8);
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

void Function_32(var uParam0, int iParam1) //Position: 0x14A6 / 5286
{
	iParam1 = &iParam1;
	uParam0 = 0;
	return;
}

bool Function_33(int iParam0) //Position: 0x14B7 / 5303
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

