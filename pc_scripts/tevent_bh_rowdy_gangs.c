//Decompiled with MagicRDR v1.0
//Function Count : 203
//Statics Count : 110
//Natives Count : 317
//Parameters Count : 62

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
	float fLocal_27 = 0.0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	int iLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	bool bLocal_36 = false;
	bool bLocal_37 = false;
	var uLocal_38 = 0;
	bool bLocal_39 = false;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	struct<65> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<149> Var11;
	
	iLocal_18 = 0;
	iLocal_19 = 0;
	fLocal_27 = 0.0f;
	iLocal_31 = 0;
	bLocal_36 = false;
	bLocal_37 = false;
	bLocal_39 = RAND_INT_RANGE(false, 4);
	bLocal_37 = false;
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	bVar5 = 500;
	iVar6 = 0;
	iVar7 = 0;
	uVar68 = Vector(0.0f, 0.0f, 0.0f);
	bVar80 = false;
	iVar81 = 0;
	iVar82 = 0;
	iVar83 = 0;
	iVar84 = 0;
	iVar85 = 0;
	uVar86 = 14;
	memcpy(&uLocal_40, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_201("bhrdlay"), 4);
	uVar127 = CREATE_LAYOUT(&uLocal_40);
	if (!IS_LAYOUTREF_VALID(&uVar127))
	{
		iVar0 = 5;
	}
	*(&ScriptParam_0 + 72) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_27462[3352] + 188) };
	ScriptParam_0.f_64 = 33;
	if (!Function_200(64) || !IS_POPSET_VALID(&(Global_46972[0])))
	{
		iVar0 = 5;
	}
	else
	{
		RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
		iVar52 = 3;
		Var11.f_148 = 1;
		Function_198(&uVar86, "shooting_air_horse", 5, 0);
		Function_198(&uVar86, "custom/shooting_air_horse", 8, 0);
		if (Global_43787 == 1)
		{
			if (Function_197())
			{
				iVar115[0] = 496;
			}
			else
			{
				iVar115[0] = 497;
			}
			iVar9 = 496;
			iVar10 = 504;
		}
		else if (Global_43787 == 2)
		{
			if (Function_197())
			{
				iVar115[0] = 476;
			}
			else
			{
				iVar115[0] = 470;
			}
			iVar9 = 467;
			iVar10 = 476;
		}
		else if (Global_43788 == Global_46736[0])
		{
			if (Function_197())
			{
				iVar115[0] = 483;
			}
			else
			{
				iVar115[0] = 485;
			}
			iVar9 = 477;
			iVar10 = 485;
		}
		else if (Global_43788 == Global_46736[1])
		{
			if (Function_197())
			{
				iVar115[0] = 514;
			}
			else
			{
				iVar115[0] = 509;
			}
			iVar9 = 505;
			iVar10 = 515;
		}
		else if (Global_43788 == Global_46736[2])
		{
			if (Function_197())
			{
				iVar115[0] = 483;
			}
			else
			{
				iVar115[0] = 485;
			}
			iVar9 = 477;
			iVar10 = 485;
		}
		else if (Global_43788 == Global_46736[3])
		{
			if (Function_197())
			{
				iVar115[0] = 496;
			}
			else
			{
				iVar115[0] = 497;
			}
			iVar9 = 496;
			iVar10 = 504;
		}
		uLocal_38 = iVar115[0];
		Function_196(&uVar86, uLocal_38, 2, 0);
		bVar51 = false;
		while (bVar51 <= (iVar52 - 1))
		{
			iVar115[bVar51 + 1] = Function_195(iVar9, iVar10, uLocal_38, 4294967295, 4294967295);
			Function_196(&uVar86, iVar115[bVar51 + 1], 2, 0);
			bVar51++;
		}
		bVar51 = false;
		while (bVar51 <= iVar52)
		{
			uVar121[bVar51] = Function_194(64, 1, 4, 23, 1);
			Function_196(&uVar86, uVar121[bVar51], 2, 0);
			bVar51++;
		}
		Function_198(&uVar86, "beats", 10, 0);
		if (Function_193(0))
		{
			iVar0 = 5;
		}
		Function_192(&iVar115, 5);
	}
	while (!IS_EXITFLAG_SET())
	{
		bVar5 = 500;
		switch (iVar0)
		{
			case 0x00000000:
				if (Function_186(&uVar86))
				{
					iVar0 = 1;
					bVar5 = false;
				}
				break;
			
			case 0x00000001:
				if (!Global_6629)
				{
					(&ScriptParam_0 + 72 + 148)->f_4 = 1;
				}
				if (Function_146(&ScriptParam_0, &bVar5, &iVar1, &iVar2, 0))
				{
					iVar0 = 2;
				}
				else if (iVar2 == 1)
				{
					iVar0 = 5;
				}
				break;
			
			case 0x00000002:
				Var11.f_4 = 1;
				Function_145(StackVal, &Var11, Global_54078);
				Function_142(StackVal, StackVal, &Var11, *(&ScriptParam_0 + 16), *(&ScriptParam_0 + 28), ScriptParam_0.f_56, 0, 0);
				Var11.f_112 = 4;
				Function_101(&Var11, 1, 0, 0);
				if (VDIST(Global_54078, Var42) > 70.0f)
				{
					iVar0 = 5;
					bVar5 = false;
					break;
				}
				Function_100(1,5f, 10);
				*(&Var11 + 72) = { StackVal, Function_100(1,5f, 10) };
				if (!Function_99(&Var11 + 72))
				{
					iVar0 = 5;
					bVar5 = false;
					break;
				}
				uVar79 = CREATE_POINT_IN_LAYOUT(&uVar127, Function_98(), Var42, *(&Var11 + 220));
				Function_81(&uVar127, &Var11 + 8, iVar52, &iVar115, &uVar79, &Var11 + 72, 23, "bhRowdy", 0);
				iVar77 = SQUAD_GET_SIZE(&Var11 + 8);
				bVar51 = false;
				while (bVar51 <= iVar77)
				{
					iVar78 = SQUAD_GET_ACTOR_BY_INDEX(&Var11 + 8, bVar51);
					uVar57[bVar51] = &iVar78;
					if (bVar51 != 0)
					{
						MEMORY_SHOULD_ALWAYS_PATHFIND_IN_FORMATION(&iVar78, 1);
					}
					MEMORY_PREFER_RIDING(&iVar78, true);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&iVar78, true);
					Function_80(&iVar78);
					SET_ACTOR_UPDATE_PRIORITY(&iVar78, false);
					AI_DONT_HARM_ACTOR(&iVar78);
					TASK_STAND_STILL(&iVar78, -1.0f, 0, 0);
					DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar78);
					if (bVar51 == 0)
					{
						MEMORY_ALLOW_SHOOTING(&iVar78, false);
						uLocal_29 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &uVar127, Function_98(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
						ATTACH_OBJECTS(StackVal, StackVal, &uLocal_29, &iVar78, Function_98(), Vector(0.0f, 0,5f, -7.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
					}
					else if (bVar51 == 1)
					{
						uVar53[0] = &iVar78;
						MEMORY_SET_WEAPON_DRAW_PREFERENCE(&(uVar53[0]), 0);
						GIVE_WEAPON_TO_ACTOR(&iVar78, 40, false, 1, 1);
						ACTOR_PUT_WEAPON_IN_HAND(&iVar78, 40, 1);
						ACTOR_DRAW_WEAPON(&iVar78, 40, 1);
					}
					else if (bVar51 == 2)
					{
						uVar53[1] = &iVar78;
						MEMORY_SET_WEAPON_DRAW_PREFERENCE(&(uVar53[1]), 0);
						GIVE_WEAPON_TO_ACTOR(&iVar78, 40, false, 1, 1);
						ACTOR_PUT_WEAPON_IN_HAND(&iVar78, 40, 1);
						ACTOR_DRAW_WEAPON(&iVar78, 40, 1);
					}
					else if (bVar51 == 4)
					{
						uVar53[2] = &iVar78;
						MEMORY_SET_WEAPON_DRAW_PREFERENCE(&(uVar53[2]), 0);
						GIVE_WEAPON_TO_ACTOR(&iVar78, 40, false, 1, 1);
						ACTOR_PUT_WEAPON_IN_HAND(&iVar78, 40, 1);
						ACTOR_DRAW_WEAPON(&iVar78, 40, 1);
					}
					bVar51++;
				}
				AI_GLOBAL_SET_PERMANENT_DANGER(Function_79(&Var11 + 8), 1);
				ATTACH_OBJECTS(StackVal, StackVal, GET_OBJECT_FROM_VOLUME(&uVar67), Function_79(&Var11 + 8), Function_98(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
				Var42 = (Var42 + 2.0f);
				Function_78(&uLocal_32, 0.0f);
				Function_77(&uVar3, 1);
				iVar0 = 3;
				bVar5 = false;
				break;
			
			case 0x00000003:
				if (!Function_70(ScriptParam_0.f_64, Function_79(&Var11 + 8), &iVar81, &iVar82, 0, 0, 1, 1))
				{
					iVar0 = 5;
					break;
				}
				if (bLocal_37)
				{
					if ((!Function_69(&Var11 + 8, &Global_54076, 60.0f, 1) && iVar7 == 2) && iVar7 == 3)
					{
						iVar7 = 2;
					}
				}
				if (GET_DEBUG_DRAW_STATE())
				{
				}
				if (!Function_68(&Var11 + 8, 0, 1, 0, 0, 0))
				{
					Function_67(&uVar57, 5, &iVar83, &iVar84, 0);
					if (iLocal_31)
					{
						if (iVar83 || iVar84)
						{
							Function_62(500, 1, 0);
						}
						Function_24(150, 1, 0);
					}
					iVar0 = 5;
					bVar5 = false;
					break;
				}
				if (!Function_69(&Var11 + 8, &Global_54076, Function_22(1), 1))
				{
					bVar128 = Function_21(&Global_54076, Function_79(&Var11 + 8));
					PRINTFLOAT(bVar128);
					iVar0 = 5;
					bVar5 = false;
					break;
				}
				else
				{
					iVar8 = Function_101(&Var11, 0, 0, 0);
				}
				if (iVar8 == 7)
				{
					Function_20(&Var11 + 8);
					iVar0 = 5;
					bVar5 = false;
					break;
				}
				if (Function_15(&uVar57, 5, &uVar4, &uLocal_28, &fLocal_27, uVar3, iVar6, 0x40200000))
				{
					iVar6 = 1;
				}
				if ((((Function_14(&Var11 + 8, &Global_54076) || iVar6) || Function_69(&Var11 + 8, &Global_54076, 20.0f, 1)) && iVar7 == 2) && iVar7 == 3)
				{
					iVar7 = 2;
				}
				if (Var11 == 0)
				{
					Function_13(&Var11 + 8, &Global_54076, -1.0f, -1.0f, 0, 0);
					iVar0 = 5;
					bVar5 = false;
					break;
				}
				if (Function_193(0) && !bVar80)
				{
					Function_13(&Var11 + 8, &Global_54076, -1.0f, -1.0f, 0, 0);
					iVar0 = 5;
					bVar5 = false;
					break;
				}
				bVar76 = false;
				while (bVar76 <= 3)
				{
					if (IS_ACTOR_VALID(Function_79(&Var11 + 8)) && IS_ACTOR_VALID(&(uVar53[bVar76])))
					{
						if (Function_21(Function_79(&Var11 + 8), &(uVar53[bVar76])) < 40.0f && iVar63[bVar76] != 1)
						{
							RESET_ANIM_SET_FOR_ACTOR(&(uVar53[bVar76]), 1);
							AI_GOAL_SHOOT_CLEAR(&(uVar53[bVar76]));
							iVar63[bVar76] = 0;
						}
					}
					bVar76++;
				}
				if (Function_11(&iVar7, &Var11 + 8))
				{
					iVar0 = 5;
					bVar5 = false;
					break;
				}
				if (Global_99146)
				{
					iVar0 = 5;
					bVar5 = false;
					break;
				}
				break;
			
			case 0x00000005:
				iVar0 = 6;
				bVar5 = false;
				break;
			
			case 0x00000006:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				bVar5 = false;
				break;
		}
		WAIT(bVar5);
	}
	Function_10(&iVar115, 5);
	bVar76 = false;
	while (bVar76 <= 3)
	{
		if (IS_ACTOR_VALID(&(uVar53[bVar76])))
		{
			RESET_ANIM_SET_FOR_ACTOR(&(uVar53[bVar76]), 1);
			AI_GOAL_SHOOT_CLEAR(&(uVar53[bVar76]));
			iVar63[bVar76] = 0;
		}
		bVar76++;
	}
	iVar77 = SQUAD_GET_SIZE(&Var11 + 8);
	bVar76 = false;
	while (bVar76 < (iVar77 - 1))
	{
		iVar78 = SQUAD_GET_ACTOR_BY_INDEX(&Var11 + 8, bVar76);
		Function_8(&iVar78);
		if (Function_6(&iVar78, 0) && bVar76 == 0)
		{
			MEMORY_ALLOW_SHOOTING(&iVar78, true);
			if (!bLocal_36)
			{
				TASK_FLEE_ACTOR(&iVar78, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
			}
		}
		bVar76++;
	}
	if (ScriptParam_0.f_40)
	{
		Global_6642 = 0;
	}
	Function_5(&Global_39906 + 8, 1024);
	Function_1(&uVar86);
	RELEASE_LAYOUT_REF(&uVar127);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x88E / 2190
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

void Function_2(struct<2>[] Param0, int iParam1) //Position: 0x8B6 / 2230
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

void Function_3(struct<13> Param0) //Position: 0xA01 / 2561
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_4(struct<13> Param0) //Position: 0xA1E / 2590
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(int iParam0, int iParam1) //Position: 0xA3C / 2620
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
	return;
}

bool Function_6(int iParam0, bool bParam1) //Position: 0xA52 / 2642
{
	if (&bParam1)
	{
		if (IS_ACTOR_HOGTIED(&iParam0))
		{
			if (!(GET_TASK_STATUS(&iParam0, 25) != 1 || GET_TASK_STATUS(&iParam0, 25) != 3))
			{
				MEMORY_CLEAR_EVENTS(&iParam0, 0);
				TASK_FLEE_ACTOR(&iParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
				TASK_PRIORITY_SET(&iParam0, true);
			}
			Function_8(&iParam0);
			return 0;
		}
		if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&iParam0), 163840))
		{
			Function_8(&iParam0);
			return 0;
		}
	}
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (Function_7(&iParam0, 0) && !AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&iParam0), 16384))
		{
			return 0;
		}
		if (IS_ACTOR_ALIVE(&iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

bool Function_7(int iParam0, int iParam1) //Position: 0xAFD / 2813
{
	var uVar0;
	int iVar1;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (iParam1 && IS_ACTOR_HOGTIED(&iParam0))
		{
			return 1;
		}
		uVar0 = SQUAD_GET(&iParam0);
		if (IS_OBJECT_VALID(&uVar0))
		{
			iVar1 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&uVar0);
		}
		else
		{
			iVar1 = 172712;
		}
		if (AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&iParam0), iVar1))
		{
			return 0;
		}
	}
	return 1;
}

int Function_8(int iParam0) //Position: 0xB4F / 2895
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		Function_9(&iParam0);
		return 1;
	}
	return 0;
}

void Function_9(var uParam0) //Position: 0xB67 / 2919
{
	int iVar0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		iVar0 = GET_BLIP_ON_ACTOR(&uParam0);
		while (IS_BLIP_VALID(&iVar0))
		{
			REMOVE_BLIP(&iVar0);
			iVar0 = GET_BLIP_ON_ACTOR(&uParam0);
		}
	}
	return;
}

void Function_10(var[] uParam0, int iParam1) //Position: 0xB9A / 2970
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(uParam0[iVar0]);
		iVar0++;
	}
	return;
}

bool Function_11(float fParam0, bool bParam1) //Position: 0xBBD / 3005
{
	int iVar0;
	var uVar1;
	bool bVar3;
	int iVar4;
	
	switch (fParam0)
	{
		case 0x00000000:
			if (IS_WEAPON_DRAWN(Function_79(&bParam1)))
			{
				Function_78(&uLocal_32, 0.0f);
				fParam0 = 1;
			}
			break;
		
		case 0x00000001:
			Function_20(&bParam1);
			fParam0 = 3;
			break;
		
		case 0x00000002:
			iLocal_31 = 1;
			Function_12(&bParam1, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			iVar4 = SQUAD_GET_SIZE(&bParam1);
			bVar3 = false;
			while (bVar3 < (iVar4 - 1))
			{
				iVar0 = SQUAD_GET_ACTOR_BY_INDEX(&bParam1, bVar3);
				if (Function_6(&iVar0, 0) && bVar3 == 0)
				{
					RESET_ANIM_SET_FOR_ACTOR(&iVar0, 1);
					GIVE_WEAPON_TO_ACTOR(&iVar0, 40, false, 1, 1);
					MEMORY_ALLOW_SHOOTING(&iVar0, true);
					AI_GOAL_SHOOT_CLEAR(&iVar0);
					uVar1 = Vector(0.0f, 0.0f, -10.0f);
					TASK_FOLLOW_AND_ATTACK_OBJECT(&iVar0, &Global_54076, &uVar1, 0, 0, 0, 0, 0, 1);
				}
				bVar3++;
			}
			fParam0 = 3;
			break;
		
		case 0x00000003:
			break;
	}
	return 0;
}

void Function_12(var uParam0, bool bParam1, int iParam2, bool bParam3, var uParam4, bool bParam5, var uParam6, bool bParam7) //Position: 0xCA7 / 3239
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar2))
		{
			uVar1 = GET_BLIP_ON_ACTOR(&uVar2);
			if (IS_BLIP_VALID(&uVar1))
			{
				if (GET_BLIP_ICON(&uVar1) != bParam1)
				{
					CHANGE_BLIP_ICON(&uVar1, bParam1);
				}
				SET_BLIP_MIN_DISTANCE(&uVar1, &bParam3);
				SET_BLIP_MAX_DISTANCE(&uVar1, &uParam4);
				SET_BLIP_SCALE(&uVar1, &bParam5);
				if (&bParam7)
				{
					SET_BLIP_FLAG(&uVar1, 8192, 0);
				}
			}
			else
			{
				uVar1 = ADD_BLIP_FOR_ACTOR(&uVar2, bParam1, &bParam3, 2, 0);
				SET_BLIP_MAX_DISTANCE(&uVar1, &uParam4);
				SET_BLIP_SCALE(&uVar1, &bParam5);
				if (&bParam7)
				{
					SET_BLIP_FLAG(&uVar1, 8192, 0);
				}
			}
			if (&iParam2 != 4294967295)
			{
				if (HUD_GET_SHOOT_BLIP_ICON_FOR_ACTOR(&uVar2) != &iParam2)
				{
					HUD_SET_SHOOT_BLIP_ICON_FOR_ACTOR(&uVar2, &iParam2);
				}
			}
			else if (HUD_GET_SHOOT_BLIP_ICON_FOR_ACTOR(&uVar2) != 4294967295)
			{
				HUD_CLEAR_SHOOT_BLIP_ICON_FOR_ACTOR(&uVar2);
			}
			if (GET_BLIP_ICON(&uVar1) == 322)
			{
				SET_BLIP_IMPAIRMENT_MASK(&uVar1, (GET_BLIP_IMPAIRMENT_MASK(&uVar1) || uParam6));
			}
		}
		bVar0++;
	}
}

void Function_13(var uParam0, var uParam1, float fParam2, float fParam3, int iParam4, bool bParam5) //Position: 0xDB7 / 3511
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(&uParam1))
	{
		return;
	}
	if (SQUAD_GET_SIZE(&uParam0) < 0)
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			TASK_CLEAR(&uVar1);
			TASK_FLEE_ACTOR(&uVar1, &uParam1, fParam2, fParam3, iParam4, 0, 0);
			TASK_PRIORITY_SET(&uVar1, bParam5);
		}
		bVar0++;
	}
}

int Function_14(var uParam0, bool bParam1) //Position: 0xE30 / 3632
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&bParam1))
	{
		return 0;
	}
	iVar0 = 0;
	iVar2 = SQUAD_GET_SIZE(&uParam0);
	bVar1 = false;
	while (bVar1 < (iVar2 - 1))
	{
		uVar3 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar1);
		if (IS_ACTOR_VALID(&uVar3))
		{
			if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(&uVar3)) > 1.0f)
			{
				if (GET_LAST_ATTACKER(&uVar3) == &bParam1)
				{
					iVar0 = 1;
				}
			}
		}
		bVar1++;
	}
	return iVar0;
}

bool Function_15(var[] uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, var uParam7) //Position: 0xEA2 / 3746
{
	int iVar0;
	
	uParam7 = &uParam7;
	if (!&bParam6)
	{
		iVar0 = 0;
		while (iVar0 <= iParam1)
		{
			if (Function_16(&(uParam0[iVar0]), &uParam3, &uParam4, &uParam5, &bParam6, 0x40400000))
			{
				uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool Function_16(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, float fParam5) //Position: 0xEF4 / 3828
{
	float fVar0;
	
	if (IS_ACTOR_VALID(&iParam0) && !&bParam4)
	{
		if (IS_ACTOR_ON_FOOT(&iParam0))
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(&iParam0, &fParam5);
		}
		else
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(&iParam0, (&fParam5 + 3.0f));
		}
	}
	if (IS_ACTOR_VALID(&iParam0) && !&bParam4)
	{
		fVar0 = Function_21(&iParam0, &Global_54076);
		if (!Function_19(&iParam3, 8))
		{
			if (GET_LAST_ATTACKER(&iParam0) == &Global_54076)
			{
				uParam1 = 8;
				Function_17(&iParam0);
				return 1;
			}
		}
		if (!Function_19(&iParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(&iParam0, 1.0f))
			{
				uParam1 = 2;
				Function_17(&iParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(&iParam0, 1.0f, 1.0f))
			{
				uParam1 = 2;
				Function_17(&iParam0);
				return 1;
			}
		}
		if (!Function_19(&iParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(&iParam0) || (((GET_ACTOR_UNDER_RETICLE(&Global_54076, 0) != &iParam0 && IS_PLAYER_WEAPON_ZOOMED(&Global_54076)) && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(&Global_54076) != &iParam0 && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f))
			{
				if (uParam2 > 0.0f)
				{
					uParam1 = 4;
					Function_17(&iParam0);
					return 1;
				}
				if (uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - uParam2) < 1,3f)
					{
						uParam1 = 4;
						Function_17(&iParam0);
						return 1;
					}
				}
				uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_19(&iParam3, 1))
		{
			if (Global_6646 || Global_6647)
			{
				uParam1 = 1;
				Function_17(&iParam0);
				return 1;
			}
		}
		if (!Function_19(&iParam3, 16))
		{
			if (UNK_0x7F454A92(&iParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(&iParam0)) > 2.0f && fVar0 > 18.0f)
				{
					uParam1 = 16;
					Function_17(&iParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_17(int iParam0) //Position: 0x10BD / 4285
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&iParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(&iParam0, 1);
	UNK_0x99AFD2D1(&iParam0, 0, 0);
	Function_18(&iParam0);
	MEMORY_CONSIDER_AS(&Global_54076, &iParam0, 2);
	MEMORY_CONSIDER_AS(&iParam0, &Global_54076, 2);
	AI_GOAL_LOOK_CLEAR(&iParam0);
	return;
}

void Function_18(int iParam0) //Position: 0x10FA / 4346
{
	SAY_SINGLE_LINE_CONTEXT(&iParam0, 60, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

bool Function_19(int iParam0, int iParam1) //Position: 0x1113 / 4371
{
	return (iParam0 && iParam1) == 0;
}

void Function_20(int iParam0) //Position: 0x1120 / 4384
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	iVar3 = SQUAD_GET_SIZE(&iParam0);
	bVar1 = false;
	while (bVar1 <= iVar3)
	{
		uVar0 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar1);
		ACTOR_RESET_ANIMS(&uVar0, 1);
		MEMORY_ALLOW_SHOOTING(&uVar0, true);
		bVar2 = TASK_SEQUENCE_OPEN();
		TASK_FLEE_ACTOR(false, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(&uVar0, bVar2);
		TASK_SEQUENCE_RELEASE(bVar2, 1);
		TASK_PRIORITY_SET(&uVar0, false);
		bVar1++;
	}
	bLocal_36 = true;
	return;
}

float Function_21(int iParam0, int iParam1) //Position: 0x1188 / 4488
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!IS_ACTOR_VALID(&iParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(&iParam0, &Var0);
	GET_POSITION(&iParam1, &Var2);
	return VDIST(Var0, Var2);
}

bool Function_22(bool bParam0) //Position: 0x127D / 4733
{
	var uVar0;
	float fVar1;
	
	if (!&bParam0)
	{
		Function_23(&uVar0, &fVar1);
		if (fVar1 < 60.0f)
		{
			return (fVar1 + 20.0f);
		}
		return (fVar1 + 10.0f);
	}
	return (190.0f + 20.0f);
}

void Function_23(float fParam0, int iParam1) //Position: 0x12B9 / 4793
{
	struct<2> Var0;
	
	if (Global_6629 && !Global_6646)
	{
		fParam0 = 65.0f;
		iParam1 = 95.0f;
	}
	else if ((!IS_ACTOR_RIDING(GET_PLAYER_ACTOR(0)) && !IS_ACTOR_RIDING_VEHICLE(GET_PLAYER_ACTOR(0))) && !Global_6646)
	{
		fParam0 = 115.0f;
		iParam1 = 170.0f;
	}
	else
	{
		GET_ACTOR_VELOCITY(GET_PLAYER_ACTOR(0), &Var0);
		if (VMAG(Var0) > 5.0f)
		{
			fParam0 = 130.0f;
			iParam1 = 190.0f;
		}
		else
		{
			fParam0 = 130.0f;
			iParam1 = 190.0f;
		}
	}
	return;
}

void Function_24(int iParam0, bool bParam1, bool bParam2) //Position: 0x134A / 4938
{
	int iVar0;
	bool bVar1;
	
	if (Function_61(0) && (!Global_6623 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_60())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_256 = (Global_21369.f_256 + iParam0);
		return;
	}
	if (bVar1 == 0)
	{
		return;
	}
	iVar0 = Function_59(3);
	Function_56();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (&bParam1)
	{
		Function_54(3, bVar1);
		if (!&bParam2)
		{
			if (!Function_53(Global_119936, 4))
			{
				Function_48(&Global_54076, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_34(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_33(3));
	iVar0 = Function_59(3);
	switch (Global_21369.f_248)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_21369.f_248 = 1;
				Function_26(4, Function_32(Global_21369.f_248), 1);
				Function_25(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_21369.f_248 = 2;
				Function_26(4, Function_32(Global_21369.f_248), 1);
				Function_25(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_21369.f_248 = 3;
				Function_26(4, Function_32(Global_21369.f_248), 1);
				Function_25(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_21369.f_248 = 4;
				Function_26(4, Function_32(Global_21369.f_248), 1);
				Function_25(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_21369.f_248 = 5;
				Function_26(4, Function_32(Global_21369.f_248), 1);
				Function_25(Global_21369.f_244, Global_21369.f_248);
				if (Global_21369.f_244 != 6 || Global_21369.f_244 != 0)
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

void Function_25(int iParam0, int iParam1) //Position: 0x151E / 5406
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,2f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000001:
		case 0x00000002:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,3f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000003:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,4f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000004:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 120.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,5f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, true);
			break;
		
		case 0x00000005:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 180.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,8f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, true);
			break;
		
		default:
			break;
	}
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, true);
			if (iParam1 != 4 || iParam1 != 5)
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, true);
			}
			else
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, false);
			}
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, true);
			SET_ACTOR_SHOULD_TAUNT(&Global_54076, 1);
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, false);
			SET_ACTOR_SHOULD_TAUNT(&Global_54076, 0);
			break;
		
		default:
			break;
	}
	return;
}

int Function_26(int iParam0, char* cParam1) //Position: 0x1788 / 6024
{
	bool bVar0;
	int iVar1;
	
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 20 && Global_55480[iParam016].f_96 == 18)
	{
		PRINTSTRING("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT:");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT.");
		return 0;
	}
	Function_30(iParam0, &cParam1, 0, 1);
	iVar1 = Function_27();
	Global_77754[iVar1] = 0.0f;
	strcpy(&Global_77766[iVar116] + 32, &cParam1, 32);
	strcpy(&Global_77766[iVar116] + 16, "QME=", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	if (&bParam2)
	{
		Global_77766[iVar116].f_120 = 5;
	}
	else
	{
		Global_77766[iVar116].f_120 = 6;
	}
	return 1;
}

int Function_27() //Position: 0x1918 / 6424
{
	int iVar0;
	
	iVar0 = (Global_77754 - 1);
	while (iVar0 > 0)
	{
		if (Global_77766[iVar016].f_96 == 4294967295)
		{
			return iVar0;
		}
		iVar0 = (iVar0 - 1);
	}
	LOG_ERROR("STAT_FIND_FIRST_EMPTY_SLOT_ON_STACK: too many synchronous Stat Updates! Dropping the oldest in the buffer");
	Function_28();
	return 0;
}

void Function_28() //Position: 0x19B9 / 6585
{
	int iVar0;
	int iVar1;
	
	iVar0 = (Global_77754 - 1);
	iVar1 = (iVar0 - 1);
	while (iVar1 > 0)
	{
		Global_77754[iVar0] = Global_77754[iVar1];
		Global_77766[iVar016] = { StackVal, Global_77766[iVar116] };
		*(&Global_77766[iVar016] + 16) = { StackVal, *(&Global_77766[iVar116] + 16) };
		*(&Global_77766[iVar016] + 32) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_77766[iVar116] + 32) };
		Global_77766[iVar016].f_96 = Global_77766[iVar116].f_96;
		Global_77766[iVar016].f_116 = Global_77766[iVar116].f_116;
		Global_77766[iVar016].f_120 = Global_77766[iVar116].f_120;
		Function_29(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_29(int iParam0) //Position: 0x1A77 / 6775
{
	Global_77754[iParam0] = 0.0f;
	strcpy(&(Global_77766[iParam016]), "", 8);
	strcpy(&Global_77766[iParam016] + 16, "", 8);
	strcpy(&Global_77766[iParam016] + 32, "", 32);
	Global_77766[iParam016].f_96 = 4294967295;
	Global_77766[iParam016].f_100 = 4294967295;
	Global_77766[iParam016].f_116 = 4294967295;
	Global_77766[iParam016].f_120 = 4294967295;
	return;
}

int Function_30(int iParam0, char* cParam1) //Position: 0x1ADD / 6877
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 20 && Global_55480[iParam016].f_96 == 18)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING. Use the other functions");
		return 0;
	}
	if (!IS_STRING_VALID(&cParam1))
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed.");
		return 0;
	}
	if (STRING_LENGTH(&cParam1) >= 7)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed.");
		return 0;
	}
	strcpy(&Global_55480[iParam016] + 32, &cParam1, 32);
	if (&bParam2)
	{
		uVar1 = Global_55480[iParam016].f_124;
		Function_31(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &uParam3);
	}
	return 1;
}

void Function_31(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x1E34 / 7732
{
	CLEAR_STAT_MESSAGE();
	if (!Global_77928)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 0, 0, 1, false, 0, 0);
		}
		else if (&bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 0, 0, 0, false, 0, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 1, 0, 0, false, 0, 0);
		}
	}
}

var Function_32(int iParam0) //Position: 0x1EBC / 7868
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

float Function_33(int iParam0) //Position: 0x1F4B / 8011
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

int Function_34(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x1F84 / 8068
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
	Function_47(iParam0, TO_FLOAT(bParam1), 1);
	Function_46(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_36(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_35(iParam0);
	return 1;
}

void Function_35(bool bParam0) //Position: 0x21AC / 8620
{
	switch (bParam0)
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

void Function_36(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x224A / 8778
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_45(390))), 32);
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
					bVar19 = (Function_33(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_33(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_43(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_40(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_37(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_98(), &Var9);
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

var Function_37(int iParam0) //Position: 0x2888 / 10376
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_38(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2899 / 10393
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_39("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_39("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_39("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_39(char* cParam0) //Position: 0x2990 / 10640
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_40(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x29AB / 10667
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_42(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_41(Function_42(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_41(int iParam0, int iParam1) //Position: 0x2A12 / 10770
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_42(int iParam0, bool bParam1) //Position: 0x2A24 / 10788
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_43(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2A36 / 10806
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
	if (((Function_44(iParam0) != 19 || Function_44(iParam0) != 17) || Function_44(iParam0) != 10) || Function_44(iParam0) != 9)
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

int Function_44(int iParam0) //Position: 0x2B6A / 11114
{
	return Global_55480[iParam016].f_96;
}

var Function_45(int iParam0) //Position: 0x2B79 / 11129
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_46(int iParam0) //Position: 0x2BB6 / 11190
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

int Function_47(int iParam0, bool bParam1, bool bParam2) //Position: 0x2D50 / 11600
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

void Function_48(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x2F94 / 12180
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_50(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_49(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_49(char* cParam0) //Position: 0x3009 / 12297
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

bool Function_50(int iParam0, var uParam1, int iParam2) //Position: 0x3043 / 12355
{
	var uVar0;
	char* cVar1[16];
	
	uVar0 = uParam1;
	strcpy(&cVar1, "tutorial", 16);
	if (Global_6623)
	{
		return 0;
	}
	if (DECOR_CHECK_EXIST(&iParam0, &cVar1))
	{
		if (Function_52(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
		{
			return 0;
		}
	}
	if (&iParam2 == 1)
	{
		if (Global_6646 || Global_6647)
		{
			return 0;
		}
	}
	if (&iParam2 == 2)
	{
		switch (Function_51(uVar0))
		{
			case 0x00000002:
				if (!Function_53(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_51(char* cParam0) //Position: 0x30BF / 12479
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

int Function_52(int iParam0) //Position: 0x3160 / 12640
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_5(&iVar1, 2147483648);
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

bool Function_53(var uParam0, int iParam1) //Position: 0x319D / 12701
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_54(int iParam0, bool bParam1) //Position: 0x31B0 / 12720
{
	bool bVar0;
	int iVar1;
	
	Function_34(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_55(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_77766[iVar116].f_120 != 0 || Global_77766[iVar116].f_120 != 1)
		{
			Global_77754[iVar1] = (Global_77754[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_77766[iVar116] + 16, "QME+", 8);
			strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
			Global_77766[iVar116].f_96 = 26;
			Global_77766[iVar116].f_116 = iParam0;
			Global_77766[iVar116].f_120 = 0;
			return 1;
		}
	}
	iVar1 = Function_27();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

var Function_55(int iParam0, int iParam1) //Position: 0x335C / 13148
{
	int iVar0;
	
	iVar0 = (Global_77754 - 1);
	while (iVar0 > 0)
	{
		if (Global_77766[iVar016].f_116 == iParam0)
		{
			if (&iParam1 == 4294967295)
			{
				return iVar0;
			}
			if (iVar0 != &iParam1)
			{
				return iVar0;
			}
		}
		iVar0 = (iVar0 - 1);
	}
	return 4294967295;
}

void Function_56() //Position: 0x33A1 / 13217
{
	Function_58(3, 0.0f);
	Function_57(3, 10000.0f);
	return;
}

int Function_57(int iParam0, int iParam1) //Position: 0x33B7 / 13239
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_58(int iParam0, int iParam1) //Position: 0x33F7 / 13303
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

int Function_59(bool bParam0) //Position: 0x3437 / 13367
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

bool Function_60() //Position: 0x3478 / 13432
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

var Function_61(int iParam0) //Position: 0x34A3 / 13475
{
	return (*&Global_21369 + 168)[iParam0];
}

void Function_62(int iParam0, bool bParam1, bool bParam2) //Position: 0x34B2 / 13490
{
	int iVar0;
	bool bVar1;
	
	if (Function_61(0) && !Global_6623)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_60())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_252 = (Global_21369.f_252 + iParam0);
		return;
	}
	iVar0 = Function_59(1);
	if ((iVar0 + bVar1) >= 5000)
	{
		bVar1 = (5000 - iVar0);
	}
	if ((iVar0 + bVar1) <= 4294962296)
	{
		bVar1 = (4294962296 - iVar0);
	}
	if (&bParam1)
	{
		if (bVar1 >= 0)
		{
			Function_54(1, bVar1);
			if (!&bParam2)
			{
				if (!Function_53(Global_119936, 1))
				{
					Function_48(&Global_54076, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_66(1, (4294967295 * bVar1));
			if (!Global_6623)
			{
				if (!Function_53(Global_119936, 2))
				{
					Function_48(&Global_54076, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_34(1, bVar1, 0, 0);
	}
	else
	{
		Function_65(1, (4294967295 * bVar1), 0);
	}
	if (Function_59(1) <= 4294962296)
	{
		Function_64(1, 4294962296, 0);
	}
	else if (Function_59(1) >= 5000)
	{
		Function_64(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_33(1));
	iVar0 = Function_59(1);
	switch (Global_21369.f_244)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_21369.f_244 = 1;
				Function_26(2, Function_63(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_21369.f_244 = 0;
				Function_26(2, Function_63(Global_21369.f_244), 0);
				if (Global_21369.f_248 == 5)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			else if (iVar0 >= 4294964796)
			{
				Global_21369.f_244 = 2;
				Function_26(2, Function_63(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_21369.f_244 = 1;
				Function_26(2, Function_63(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_21369.f_244 = 3;
				Function_26(2, Function_63(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000003:
			if (HAS_ITEM("HONOR_ROSARY", &Global_54076))
			{
				DELETE_ITEM("HONOR_ROSARY", &Global_54076, 0);
			}
			if (iVar0 < 4294966296)
			{
				Global_21369.f_244 = 2;
				Function_26(2, Function_63(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_21369.f_244 = 4;
				Function_26(2, Function_63(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_21369.f_244 = 3;
				Function_26(2, Function_63(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_21369.f_244 = 5;
				Function_26(2, Function_63(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_21369.f_244 = 4;
				Function_26(2, Function_63(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_21369.f_244 = 6;
				Function_26(2, Function_63(Global_21369.f_244), 1);
				if (Global_21369.f_248 == 5)
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
				Global_21369.f_244 = 5;
				Function_26(2, Function_63(Global_21369.f_244), 0);
			}
			break;
	}
	Function_25(Global_21369.f_244, Global_21369.f_248);
	return;
}

var Function_63(int iParam0) //Position: 0x37D9 / 14297
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

int Function_64(int iParam0, bool bParam1, bool bParam2) //Position: 0x387C / 14460
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
		Function_47(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_46(iParam0);
	if (&bParam2)
	{
		Function_36(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_65(int iParam0, bool bParam1, int iParam2) //Position: 0x3B18 / 15128
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_DECREASE_INT_NOW: You cannot decrease this STAT_TYPE_LIFETIME: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_DECREASE_INT_NOW: You cannot decrease a STAT_TYPE_LIFETIME!");
		return 0;
	}
	if (Global_55480[iParam016].f_96 != 2 && Global_54086[iParam0] >= 0.0f)
	{
		Global_54086[iParam0] = 0.0f;
		return 1;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: iDecreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] - TO_FLOAT(bParam1));
	Function_46(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_36(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			REMOVE_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076);
			iVar1++;
		}
	}
	return 1;
}

int Function_66(int iParam0, bool bParam1) //Position: 0x3D15 / 15637
{
	bool bVar0;
	int iVar1;
	
	Function_65(iParam0, bParam1, 0);
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
	iVar1 = Function_55(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_77766[iVar116].f_120 != 2 || Global_77766[iVar116].f_120 != 3)
		{
			Global_77754[iVar1] = (Global_77754[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_77766[iVar116] + 16, "QME-", 8);
			strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
			Global_77766[iVar116].f_96 = 26;
			Global_77766[iVar116].f_116 = iParam0;
			Global_77766[iVar116].f_120 = 2;
			return 1;
		}
	}
	iVar1 = Function_27();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

void Function_67(var[] uParam0, bool bParam1, var uParam2, int iParam3, int iParam4) //Position: 0x3EC0 / 16064
{
	int iVar0;
	
	uParam2 = 1;
	iParam3 = 0;
	iVar0 = 0;
	while (iVar0 <= bParam1)
	{
		if (Function_6(&(uParam0[iVar0]), &iParam4))
		{
			iParam3 = 1;
		}
		else
		{
			uParam2 = 0;
		}
		iVar0++;
	}
}

bool Function_68(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x3F03 / 16131
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar2))
		{
			if (IS_ACTOR_ALIVE(&uVar2))
			{
				bVar1 = true;
				if (bParam1)
				{
					if (IS_ACTOR_CRIPPLED(&uVar2, 3) || IS_ACTOR_CRIPPLED(&uVar2, 4))
					{
						bVar1 = false;
					}
				}
				if (&bParam2)
				{
					if (IS_ACTOR_HOGTIED(&uVar2))
					{
						bVar1 = false;
					}
				}
				if (&bParam3)
				{
					if (IS_ACTOR_BEING_DRAGGED(&uVar2, 1.0f))
					{
						bVar1 = false;
					}
				}
				if (&bParam4)
				{
					if (UNK_0x7A207FFE(&uVar2))
					{
						bVar1 = false;
					}
				}
				if (&bParam5)
				{
					if (!IS_ACTOR_RIDING(&uVar2) && !IS_ACTOR_RIDING_VEHICLE(&uVar2))
					{
						bVar1 = false;
					}
				}
				if (bVar1)
				{
					return 1;
				}
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_69(var uParam0, var uParam1, bool bParam2, int iParam3) //Position: 0x3FC8 / 16328
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		if (Global_6623)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_VALID(&uParam1))
	{
		if (Global_6623)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_ALIVE(&uParam1))
	{
		if (Global_6623)
		{
		}
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				if (ACTORS_IN_RANGE(&uVar1, &uParam1, bParam2))
				{
					if (!Function_7(&uVar1, 1) || iParam3)
					{
						return 1;
					}
				}
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_70(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x406F / 16495
{
	if (StackVal & 64 == 64)
	{
		if (!uParam2)
		{
			if (IS_ACTOR_VALID(&uParam1))
			{
				if (Function_21(&Global_54076, &uParam1) > 15.0f)
				{
					uParam2 = 1;
				}
			}
		}
		if (Global_6637 && !uParam2)
		{
			return 0;
		}
		if ((Global_6608 && Global_10986 == GET_THIS_SCRIPT_ID()) && !uParam2)
		{
			return 0;
		}
		if (Function_73() && !uParam2)
		{
			return 0;
		}
		if (Function_72(iParam0) && !uParam2)
		{
			return 0;
		}
		if (Global_6630 && !&bParam4)
		{
			return 0;
		}
		if (Global_6653)
		{
			return 0;
		}
		if (Global_6627)
		{
			return 0;
		}
		if (Global_6646 && uParam7)
		{
			uParam3 = 1;
			return 0;
		}
		if (Global_6647 && uParam7)
		{
			uParam3 = 1;
			return 0;
		}
		if (Global_6635 && !uParam2)
		{
			return 0;
		}
		if (Global_6636 && !uParam2)
		{
			return 0;
		}
		if (&bParam6)
		{
			if (Global_99146 && !uParam2)
			{
				return 0;
			}
		}
		if (IS_ACTOR_ON_TRAIN(&Global_54076, 0))
		{
			return 0;
		}
	}
	if (StackVal & 2048 != 2048)
	{
		if (!Function_71(iParam0, &uParam5))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_71(int iParam0, int iParam1) //Position: 0x41B2 / 16818
{
	iParam0 = iParam0;
	if (Global_6625 != 1 && iParam1)
	{
		return 0;
	}
	if (Global_6610 == 1)
	{
		return 0;
	}
	return 1;
}

int Function_72(int iParam0) //Position: 0x41D3 / 16851
{
	bool bVar0;
	
	if (StackVal & 64 == 64)
	{
		bVar0 = GET_LAST_HIT_TIME(&Global_54076);
		if (bVar0 < 0.0f)
		{
			if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(&Global_54076)) > 20.0f)
			{
				return 1;
			}
		}
	}
	return 0;
}

int Function_73() //Position: 0x4213 / 16915
{
	int iVar0;
	int iVar1;
	
	if (Global_6629)
	{
		iVar1 = 9;
	}
	else
	{
		iVar1 = 22;
	}
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
			if (DECOR_CHECK_EXIST(&Global_39621[iVar05] + 16, "script"))
			{
				if (IS_SCRIPT_VALID(DECOR_GET_INT(&Global_39621[iVar05] + 16, "script")))
				{
					if (GET_THIS_SCRIPT_ID() != DECOR_GET_INT(&Global_39621[iVar05] + 16, "script"))
					{
						if (Function_74(&Global_54076, &Global_39621[iVar05] + 16) > IntToFloat(iVar1))
						{
							return 1;
						}
					}
				}
			}
			if (Function_74(&Global_54076, &Global_39621[iVar05] + 16) > IntToFloat(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

float Function_74(int iParam0, var uParam1) //Position: 0x42D6 / 17110
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			Function_76(&iParam0);
			Var0 = Function_76(&iParam0);
			Function_75(&uParam1);
			Var2 = Function_75(&uParam1);
			return VDIST(Var0, Var2);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

struct<8> Function_75(int iParam0) //Position: 0x4378 / 17272
{
	struct<2> Var0;
	
	if (IS_OBJECT_VALID(&iParam0))
	{
		GET_OBJECT_POSITION(&iParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID object. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

struct<8> Function_76(int iParam0) //Position: 0x43E6 / 17382
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

void Function_77(var uParam0, int iParam1) //Position: 0x4452 / 17490
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_78(vector3 vParam0) //Position: 0x4463 / 17507
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_77(&vParam0, 1);
	Function_5(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

int Function_79(var uParam0) //Position: 0x4488 / 17544
{
	int iVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return "";
	}
	bVar1 = false;
	while (bVar1 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		iVar0 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar1);
		if (IS_ACTOR_VALID(&iVar0) && IS_ACTOR_ALIVE(&iVar0))
		{
			return &iVar0;
		}
		bVar1++;
	}
	return "";
}

void Function_80(bool bParam0) //Position: 0x44D5 / 17621
{
	if (!IS_OBJECT_VALID(&bParam0))
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(&bParam0, "nocrime"))
	{
		DECOR_SET_BOOL(&bParam0, "nocrime", true);
	}
	return;
}

int Function_81(var uParam0, var uParam1, int iParam2, var[] uParam3, var uParam4, var uParam5, var uParam6, char* cParam7) //Position: 0x450C / 17676
{
	var uVar0;
	bool bVar1;
	int iVar2[16];
	struct<2> Var19;
	struct<2> Var21;
	struct<2> Var23;
	char* cVar25[32];
	char* cVar33[32];
	int iVar41;
	int iVar42;
	
	if (!SQUAD_IS_VALID(&uParam1))
	{
		return 0;
	}
	if (!IS_LAYOUTREF_VALID(&uParam0))
	{
		return 0;
	}
	if (!IS_OBJECT_VALID(&uParam4))
	{
		return 0;
	}
	if (!Global_47006[23])
	{
		return 0;
	}
	GET_OBJECT_POSITION(&uParam4, &Var19);
	GET_OBJECT_ORIENTATION(&uParam4, &Var21);
	if (Function_97(StackVal, Var19))
	{
		return 0;
	}
	MAKE_NEXT_RAND_ACTORENUMS_UNIQUE(iParam2);
	iVar41 = 0;
	while (iVar41 < (iParam2 - 1))
	{
		iVar42 = Function_87(StackVal, 64, Var19, 4, uParam6, 0);
		if (Function_86(iVar42, &iVar2))
		{
			iVar42 = 976;
		}
		iVar2[iVar41] = iVar42;
		iVar41++;
	}
	iVar41 = 0;
	while (iVar41 < (iParam2 - 1))
	{
		Function_85(&uParam5, iVar41);
		GET_OBJECT_RELATIVE_POSITION(&uParam4, Function_85(&uParam5, iVar41), &Var19);
		if (!Function_84(&Var19, 20.0f, &Var23, 10))
		{
			Var23 = Var19;
		}
		if (Function_83(uParam3[iVar41]) && !uParam3[iVar41] != 0)
		{
			bVar1 = uParam3[iVar41];
		}
		else
		{
			bVar1 = uParam3[RAND_INT_RANGE(false, (uParam3 - 1))];
		}
		if (IS_STRING_VALID(&cParam7))
		{
			if (STRINGS_ARE_EQUAL(&cParam7, ""))
			{
				uVar0 = Function_82(StackVal, StackVal, &uParam0, Function_98(), bVar1, Function_98(), iVar2[iVar41], Var23, Var21);
			}
			else
			{
				cVar25 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_201(&cParam7) };
				strcpy(&cVar33, &cParam7, 32);
				stradd(&cVar33, "H_", 32);
				cVar33 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_201(&cVar25) };
				uVar0 = Function_82(StackVal, StackVal, &uParam0, &cVar25, bVar1, &cVar33, iVar2[iVar41], Var23, Var21);
			}
		}
		else
		{
			uVar0 = Function_82(StackVal, StackVal, &uParam0, Function_98(), bVar1, Function_98(), iVar2[iVar41], Var23, Var21);
		}
		if (IS_ACTOR_VALID(GET_MOUNT(&uVar0)))
		{
			DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(GET_MOUNT(&uVar0)), "bNoInjuryEjection", &uParam8);
		}
		SQUAD_JOIN(&uVar0, &uParam1);
		iVar41++;
	}
	return 1;
}

var Function_82(var uParam0, char* cParam1, bool bParam2, char* cParam3, bool bParam4, struct<2> Param5, struct<2> Param7) //Position: 0x46FC / 18172
{
	var uVar0;
	var uVar1;
	
	if (!IS_LAYOUTREF_VALID(&uParam0))
	{
		LOG_ERROR("Layout is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_83(bParam2))
	{
		LOG_ERROR("riderTypeName is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_83(bParam4))
	{
		bParam4 = 976;
	}
	uVar1 = CREATE_ACTOR_IN_LAYOUT(&uParam0, &cParam3, bParam4, Param5, Param7);
	if (!IS_ACTOR_VALID(&uVar1))
	{
		uVar0 = &uVar1;
		return "";
	}
	uVar0 = CREATE_ACTOR_IN_LAYOUT(&uParam0, &cParam1, bParam2, Param5, Param7);
	if (!IS_ACTOR_VALID(&uVar1))
	{
		uVar0 = &uVar1;
		return "";
	}
	if (!IS_ACTOR_VALID(&uVar0))
	{
		DESTROY_ACTOR(&uVar1);
		return "";
	}
	ACCESSORIZE_HORSE(&uVar1, 3);
	ACTOR_MOUNT_ACTOR(&uVar0, &uVar1);
	return &uVar0;
}

bool Function_83(bool bParam0) //Position: 0x4834 / 18484
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

bool Function_84(struct<2> Param0, struct<5> Param2) //Position: 0x484B / 18507
{
	var uVar0;
	int iVar2;
	struct<2> Var3;
	
	if (iParam3 == 4294967295)
	{
		iVar2 = 4294967294;
	}
	else
	{
		iVar2 = 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(Param0, 1.0f))
	{
		GET_CAMERA_POSITION(GET_GAME_CAMERA(), &Var3);
		if (VDIST(Param0, Var3) > 175.0f)
		{
			PRINTSTRING("Camera Position: ");
			PRINTVECTOR(Var3);
			PRINTNL();
			PRINTSTRING("Probe Position: ");
			PRINTVECTOR(Param0);
			PRINTNL();
			PRINTSTRING("Distance");
			PRINTFLOAT(VDIST(Param0, Var3));
			PRINTNL();
		}
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(&Param0, fParam1, &Param2, &uVar0))
	{
		if (!Function_97(StackVal, Param2))
		{
			return 1;
		}
	}
	while (!IS_EXITFLAG_SET() && iVar2 > iParam3)
	{
		Param0 = (Param0 + 0,01f);
		Param0.f_8 = (StackVal + 0,01f);
		if (FIND_GROUND_INTERSECTION(&Param0, fParam1, &Param2, &uVar0))
		{
			if (!Function_97(StackVal, Param2))
			{
				return 1;
			}
		}
		Param2 = Param0;
		Param2.f_4 = (StackVal - fParam1);
		if (!iParam3 != 4294967295)
		{
			iVar2++;
		}
		WAIT(false);
	}
	return 0;
}

struct<8> Function_85(vector3 vParam0) //Position: 0x498E / 18830
{
	struct<2> Var0;
	
	if (!Function_99(&vParam0))
	{
		LOG_ERROR("Attempting to GET_FORMATION_POSITION with invalid FORMATION");
		return StackVal, Vector(0.0f, 0.0f, 0.0f);
	}
	if (bParam1 <= 0)
	{
		PRINTSTRING(GET_OBJECT_NAME(&vParam0));
		LOG_ERROR("Attempting to get invalid formation index - less than zero");
		return StackVal, Vector(0.0f, 0.0f, 0.0f);
	}
	if (bParam1 >= (GET_NUM_FORMATION_LOCATIONS(&vParam0) - 1))
	{
		PRINTSTRING(GET_OBJECT_NAME(&vParam0));
		PRINTSTRING(" ");
		PRINTINT(GET_NUM_FORMATION_LOCATIONS(&vParam0));
		PRINTNL();
		LOG_ERROR("Attempting to get invalid formation index - too large!");
		return StackVal, Vector(0.0f, 0.0f, 0.0f);
	}
	GET_FORMATION_LOCATION(&vParam0, bParam1, &Var0);
	Var0 = (Var0 * vParam0.z);
	Var0.f_4 = (StackVal * vParam0.z);
	Var0.f_8 = (StackVal * vParam0.z);
	return StackVal, Var0;
}

bool Function_86(int iParam0, bool[] bParam1) //Position: 0x4ADB / 19163
{
	int iVar0;
	
	if (iParam0 == 976)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= bParam1)
	{
		if (bParam1[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var Function_87(int iParam0, struct<2> Param1, int iParam3, int iParam4, bool bParam5) //Position: 0x4B0F / 19215
{
	return Function_88(StackVal, iParam0, 0, &iParam3, &iParam4, &bParam5, 1, Param1);
}

var Function_88(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, float fParam5, struct<2> Param6) //Position: 0x4B2B / 19243
{
	switch (iParam0)
	{
		case 0x00000001:
			return Function_91(StackVal, &(Global_46972[0]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000002:
			return Function_91(StackVal, &(Global_46972[1]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000004:
			return Function_91(StackVal, &(Global_46972[2]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000008:
			return Function_91(StackVal, &(Global_46972[3]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000010:
			return Function_91(StackVal, &(Global_46972[4]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000020:
			return Function_91(StackVal, &(Global_46972[5]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000040:
			return Function_91(StackVal, &(Global_46972[6]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000080:
			return Function_91(StackVal, &(Global_46972[7]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000100:
			return Function_91(StackVal, &(Global_46972[8]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000200:
			return Function_91(StackVal, &(Global_46972[9]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000400:
			return Function_91(StackVal, &(Global_46972[10]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000800:
			return Function_91(StackVal, &(Global_46972[11]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00001000:
			return Function_91(StackVal, &(Global_46972[12]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00002000:
			return Function_91(StackVal, &(Global_46972[13]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return Function_89(StackVal, iParam0, bParam1, iParam2, fParam5, Param6);
}

var Function_89(var uParam0, bool bParam1, int iParam2, float fParam3, struct<2> Param4) //Position: 0x4D8E / 19854
{
	bool bVar0;
	
	bVar0 = CREATE_POPULATION_SET(0);
	if (uParam0 & 1 == 1)
	{
		Function_90(&(Global_46972[0]), &bVar0);
	}
	if (uParam0 & 2 == 2)
	{
		Function_90(&(Global_46972[1]), &bVar0);
	}
	if (uParam0 & 4 == 4)
	{
		Function_90(&(Global_46972[2]), &bVar0);
	}
	if (uParam0 & 8 == 8)
	{
		Function_90(&(Global_46972[3]), &bVar0);
	}
	if (uParam0 & 16 == 16)
	{
		Function_90(&(Global_46972[4]), &bVar0);
	}
	if (uParam0 & 32 == 32)
	{
		Function_90(&(Global_46972[5]), &bVar0);
	}
	if (uParam0 & 64 == 64)
	{
		Function_90(&(Global_46972[6]), &bVar0);
	}
	if (uParam0 & 128 == 128)
	{
		Function_90(&(Global_46972[7]), &bVar0);
	}
	if (uParam0 & 256 == 256)
	{
		Function_90(&(Global_46972[8]), &bVar0);
	}
	if (uParam0 & 512 == 512)
	{
		Function_90(&(Global_46972[9]), &bVar0);
	}
	if (uParam0 & 1024 == 1024)
	{
		Function_90(&(Global_46972[10]), &bVar0);
	}
	if (uParam0 & 2048 == 2048)
	{
		Function_90(&(Global_46972[11]), &bVar0);
	}
	if (uParam0 & 4096 == 4096)
	{
		Function_90(&(Global_46972[12]), &bVar0);
	}
	if (uParam0 & 8192 == 8192)
	{
		Function_90(&(Global_46972[13]), &bVar0);
	}
	return Function_91(StackVal, &bVar0, bParam1, iParam2, 4294967295, 0, fParam3, Param4);
}

void Function_90(var uParam0, bool bParam1) //Position: 0x4EFD / 20221
{
	bool bVar0;
	
	if (!IS_POPSET_VALID(&uParam0))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid subPOPSET");
	}
	if (!IS_POPSET_VALID(&bParam1))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid master popset");
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0))
	{
		LINK_ACTORENUM_TO_POPULATION(&bParam1, GET_ACTORENUM_IN_POPULATION(&uParam0, bVar0), GET_ACTORENUM_IN_POPULATION_WEIGHT(&uParam0, bVar0));
		bVar0++;
	}
	return;
}

var Function_91(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, float fParam5, struct<2> Param6) //Position: 0x4FC1 / 20417
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!IS_POPSET_VALID(&bParam0))
	{
		LOG_ERROR("Trying to get a random member of an invalid popset");
		return 4294967295;
	}
	if (bParam1)
	{
		Function_96();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&bParam0, iParam2, iParam3, bParam4, fParam5, Param6);
	if (!Function_83(bVar1))
	{
		if (!Global_47146 && !Global_47147)
		{
			Function_95(&bParam0, bParam1, iParam2, iParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_95(&bParam0, bParam1, iParam2, iParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && iParam3 != 4294967295)
		{
			while (Function_94(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&bParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_83(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_94(bVar0))
				{
					Function_93();
				}
				Function_92(bVar0);
			}
		}
		else if (!iParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != iParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&bParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_83(bVar1))
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

void Function_92(int iParam0) //Position: 0x52BA / 21178
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

void Function_93() //Position: 0x536E / 21358
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

bool Function_94(bool bParam0) //Position: 0x53A9 / 21417
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

void Function_95(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x53D6 / 21462
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
	bVar0 = false;
	while (bVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0))
	{
		PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(GET_ACTORENUM_IN_POPULATION(&uParam0, bVar0)));
		PRINTSTRING("n  Weight=");
		PRINTFLOAT(GET_ACTORENUM_IN_POPULATION_WEIGHT(&uParam0, bVar0));
		PRINTSTRING("  Streamed=");
		if (STREAMING_IS_ACTOR_LOADED(GET_ACTORENUM_IN_POPULATION(&uParam0, bVar0), 4294967295))
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

void Function_96() //Position: 0x5531 / 21809
{
	int iVar0;
	
	if (Global_6645)
	{
		if (StackVal || !&Global_46956 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_93();
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
	Function_93();
	return;
}

bool Function_97(vector3 vParam0) //Position: 0x557D / 21885
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

var Function_98() //Position: 0x5595 / 21909
{
	int iVar0;
	
	return &iVar0;
}

bool Function_99(int iParam0) //Position: 0x559E / 21918
{
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return 0;
	}
	if (!GET_OBJECT_TYPE(&iParam0) != 30)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_100(var uParam0, int iParam1) //Position: 0x55C2 / 21954
{
	struct<2> Var0;
	
	Var0.f_8 = uParam0;
	Var0 = &Global_39559[iParam1];
	return StackVal, Var0;
}

int Function_101(struct<169> Param0) //Position: 0x55DD / 21981
{
	int iVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	vector3 vVar7;
	bool bVar10;
	bool bVar11;
	
	iVar0 = 0;
	if (!SQUAD_IS_VALID(&Param0 + 8) && !(((Param0 != 0 || Param0 != 18) || Param0 != 16) || Param0 != 17))
	{
		Param0 = 0;
		return 4;
	}
	switch (Param0)
	{
		case 0x00000000:
			iVar0 = 2;
			break;
		
		case 0x00000009:
			iVar0 = 2;
			break;
		
		case 0x0000000A:
			iVar0 = 2;
			break;
		
		case 0x0000000C:
			iVar0 = 2;
			break;
		
		case 0x0000000D:
			iVar0 = 2;
			break;
		
		case 0x00000010:
			iVar0 = 2;
			break;
		
		case 0x00000011:
			iVar0 = 2;
			break;
		
		case 0x00000001:
			Function_141(&Param0 + 36);
			Var1 = Vector(StackVal, StackVal, StackVal) - Vector(Function_141(&Param0 + 36), (&Param0 + 220), StackVal);
			Function_141(&Param0 + 36);
			Var3 = Function_141(&Param0 + 36);
			vVar7 = { StackVal, StackVal, *(&Param0 + 36) };
			Function_139(StackVal, StackVal, StackVal, &Param0, vVar7, &Param0 + 192, Var1);
			*(&Param0 + 36) = { StackVal, StackVal, Function_139(StackVal, StackVal, StackVal, &Param0, vVar7, &Param0 + 192, Var1) };
			if (Function_138(&Param0 + 36))
			{
				Param0 = 16;
				return 3;
			}
			Function_141(&Param0 + 36);
			*(&Param0 + 220) = Vector(StackVal, StackVal, StackVal) - Vector(Var3, Function_141(&Param0 + 36), StackVal);
			*(&Param0 + 220) = Vector(0.0f, UNK_0x9C40E671(&Param0 + 220), 0.0f);
			if (&bParam1)
			{
				Function_130(&Param0, 0);
			}
			Param0 = 2;
			return 1;
			break;
		
		case 0x00000002:
			bVar11 = false;
			while (bVar11 <= SQUAD_GET_SIZE(&Param0 + 8))
			{
				TASK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 8, bVar11));
				bVar11++;
			}
			if (Function_123(&Param0, &bParam1, &bParam3))
			{
				Param0 = 7;
			}
			else
			{
				return 6;
			}
			break;
		
		case 0x00000003:
			if (!SQUAD_IS_VALID(&Param0 + 8))
			{
				Param0 = 16;
				return 4;
			}
			if (!IS_ACTOR_VALID(Function_79(&Param0 + 8)))
			{
				Param0 = 16;
				return 5;
			}
			GET_POSITION(Function_79(&Param0 + 8), &Var3);
			Function_122(StackVal, Var3);
			*(&Param0 + 36) = { StackVal, StackVal, Function_122(StackVal, Var3) };
			GET_ACTOR_VELOCITY(Function_79(&Param0 + 8), &Var1);
			GET_POSITION(Function_79(&Param0 + 8), &Var5);
			if (Function_138(&Param0 + 36))
			{
				Function_121(Function_79(&Param0 + 8));
				*(&Param0 + 36) = { StackVal, StackVal, Function_121(Function_79(&Param0 + 8)) };
				return 7;
			}
			if (Function_123(&Param0, &bParam1, &bParam3))
			{
				Param0 = 7;
			}
			else
			{
				return 6;
			}
			break;
		
		case 0x00000006:
			iParam2 = &iParam2;
			if (Function_123(&Param0, &bParam1, &bParam3))
			{
				Param0 = 7;
			}
			else
			{
				return 6;
			}
			if (!Function_110(&Param0))
			{
				Param0 = 9;
				return 7;
			}
			if (!Function_123(&Param0, &bParam1, &bParam3))
			{
				Param0 = 16;
				return 6;
			}
			Param0 = 7;
		
		case 0x00000008:
			break;
		
		case 0x00000007:
			if (!Function_106(&Param0))
			{
				Param0 = 6;
				return 0;
			}
			if (&bParam1)
			{
				if (Function_104(&Param0))
				{
					bVar10 = true;
				}
				if (Function_103(&Param0 + 8))
				{
					bVar10 = true;
				}
				if (Param0.f_136 && Param0.f_112 < 2)
				{
					bVar10 = true;
				}
				if (Global_6646 && Param0.f_112 == 3)
				{
					bVar10 = true;
				}
				if (bVar10)
				{
					Function_130(&Param0, 0);
				}
			}
			GET_POSITION(Function_79(&Param0 + 8), &Var5);
			if (Param0.f_128)
			{
				if (!Function_97(StackVal, *(&Param0 + 176)))
				{
					if (Function_102(StackVal, StackVal, Var5, *(&Param0 + 176)) > Param0.f_168)
					{
						SQUAD_GOALS_CLEAR(&Param0 + 8);
						TASK_GO_TO_COORD(Function_79(&Param0 + 8), &Param0 + 176, 1);
						Param0 = 8;
						Param0.f_128 = 0;
						return 8;
					}
				}
			}
			break;
	}
	return iVar0;
}

float Function_102(struct<2> Param0, struct<2> Param2) //Position: 0x594F / 22863
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

bool Function_103(int iParam0) //Position: 0x596C / 22892
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&iParam0))
	{
		if (AI_GET_TASK_RETREAT_FLAG(SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0)))
		{
			return 1;
		}
		bVar0++;
	}
	return 0;
}

bool Function_104(struct<137> Param0) //Position: 0x599A / 22938
{
	if (!IS_VOLUME_VALID(&Global_43580 + 40))
	{
		return 0;
	}
	if (StackVal || (StackVal || StackVal != 2 != 4) != 1)
	{
		if (Function_105(&Param0 + 8, &Global_43580 + 40))
		{
			if (!Param0.f_136)
			{
				Param0.f_136 = 1;
				return 1;
			}
		}
		if (Param0.f_136)
		{
			Param0.f_136 = 0;
			return 1;
		}
	}
	if (Param0.f_136)
	{
		Param0.f_136 = 0;
		return 1;
	}
	return 0;
}

bool Function_105(var uParam0, int iParam1) //Position: 0x5A13 / 23059
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		if (Global_6623)
		{
		}
		return 0;
	}
	if (!IS_VOLUME_VALID(&iParam1))
	{
		if (Global_6623)
		{
		}
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (!IS_ACTOR_VEHICLE(&uVar1))
			{
				if (IS_ACTOR_ALIVE(&uVar1))
				{
					if (IS_ACTOR_IN_VOLUME(&uVar1, &iParam1))
					{
						return 1;
					}
				}
			}
			if (IS_ACTOR_IN_VOLUME(&uVar1, &iParam1))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_106(struct<201> Param0) //Position: 0x5AA1 / 23201
{
	struct<2> Var0;
	struct<2> Var2;
	var uVar4;
	
	if (DECOR_CHECK_EXIST(&Param0 + 8, "coachService"))
	{
		return 1;
	}
	Function_141(&Param0 + 36);
	uVar4 = Function_109(StackVal, Function_141(&Param0 + 36), &Param0 + 8);
	GET_POSITION(&uVar4, &Var0);
	Function_141(&Param0 + 36);
	Var2 = Function_141(&Param0 + 36);
	if (Param0.f_200 > 1.0f)
	{
		Param0.f_200 = Function_108(StackVal, Param0.f_112);
	}
	if (StackVal > Function_107(VDIST(Var2, Var0), Function_108(Param0.f_200, Param0.f_112)))
	{
		Param0 = 6;
		return 0;
	}
	return 1;
}

float Function_107(bool bParam0, int iParam1) //Position: 0x5B33 / 23347
{
	if (bParam0 > iParam1)
	{
		return bParam0;
	}
	return iParam1;
}

int Function_108(int iParam0, int iParam1) //Position: 0x5B46 / 23366
{
	float fVar0;
	
	fVar0 = 5.0f;
	if (StackVal == 1)
	{
		fVar0 = 5.0f;
	}
	switch (iParam1)
	{
		case 0x00000001:
		case 0x00000003:
			switch (iParam0)
			{
				case 0x00000005:
				case 0x00000001:
					return (15.0f * fVar0);
					break;
				
				case 0x00000002:
					return (25.0f * fVar0);
					break;
				
				case 0x00000004:
					return (45.0f * fVar0);
					break;
				
				case 0x00000003:
					return (45.0f * fVar0);
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam0)
			{
				case 0x00000005:
				case 0x00000001:
					return (20.0f * fVar0);
					break;
				
				case 0x00000002:
					return (35.0f * fVar0);
					break;
				
				case 0x00000004:
					return (60.0f * fVar0);
					break;
				
				case 0x00000003:
					return (60.0f * fVar0);
					break;
			}
			break;
		
		default:
			LOG_ERROR("Unknown Traffic Type in FlagBuffer");
			break;
	}
	return (45.0f * fVar0);
}

var Function_109(struct<2> Param0, int iParam2) //Position: 0x5C57 / 23639
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	struct<2> Var4;
	
	bVar0 = false;
	bVar1 = 4294967295;
	bVar2 = -1.0f;
	if (Function_97(StackVal, Param0))
	{
		LOG_WARNING("Invalid test vector passed to GET_CLOSEST_SQUAD_MEMBER_TO_VECTOR");
		return "";
	}
	if (!SQUAD_IS_VALID(&iParam2))
	{
		LOG_WARNING("Invalid squad passed to GET_CLOSEST_SQUAD_MEMBER_TO_VECTOR");
		return "";
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam2) - 1))
	{
		uVar3 = GET_OBJECT_FROM_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&iParam2, bVar0));
		GET_OBJECT_POSITION(&uVar3, &Var4);
		if (VDIST(Param0, Var4) > bVar2 || bVar2 > 0.0f)
		{
			bVar2 = VDIST(Param0, Var4);
			bVar1 = bVar0;
		}
		bVar0++;
	}
	if (bVar1 >= 4294967295)
	{
		return SQUAD_GET_ACTOR_BY_INDEX(&iParam2, bVar1);
	}
	LOG_WARNING("Couldn't find a closest sqaud member from 'Them' to 'Me' in GET_CLOSEST_SQUAD_MEMBER_TO_VECTOR!");
	return "";
}

bool Function_110(int iParam0) //Position: 0x5DD6 / 24022
{
	var uVar0;
	var uVar2;
	
	if (DECOR_CHECK_EXIST(&iParam0 + 8, "wasstickup"))
	{
		DECOR_REMOVE(&iParam0 + 8, "wasstickup");
		return 1;
	}
	Function_141(&iParam0 + 36);
	uVar2 = Function_109(StackVal, Function_141(&iParam0 + 36), &iParam0 + 8);
	GET_POSITION(&uVar2, &uVar0);
	Function_111(StackVal, StackVal, &iParam0, (&iParam0 + 36), &iParam0 + 192, 2,5f, 0);
	*(&iParam0 + 36) = { StackVal, StackVal, Function_111(StackVal, StackVal, &iParam0, (&iParam0 + 36), &iParam0 + 192, 2,5f, 0) };
	if (Function_138(&iParam0 + 36))
	{
		return 0;
	}
	return 1;
}

vector3 Function_111(struct<217> Param0) //Position: 0x5E58 / 24152
{
	vector3 vVar0;
	struct<2> Var3;
	bool bVar5;
	bool bVar6;
	var uVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	var uVar11;
	struct<2> Var13;
	var uVar15;
	float fVar17;
	vector3 vVar18;
	var uVar21;
	bool bVar22;
	var uVar23;
	float fVar24;
	struct<17> Var25;
	
	Function_141(&vParam1);
	Var3 = Function_141(&vParam1);
	bVar5 = false;
	uVar7 = Function_120(StackVal, Param0.f_216);
	fVar8 = 0.0f;
	if (IS_OBJECTSET_VALID(&Param0 + 64))
	{
		fVar9 = 5.0f;
	}
	else
	{
		fVar9 = (fParam5 * 2.0f);
	}
	iVar10 = 0;
	GET_OBJECT_POSITION(Function_79(&Param0 + 8), &uVar11);
	Var13 = Vector(0.0f, 0.0f, -1.0f);
	if (!IS_OBJECTSET_VALID(&Param0 + 208))
	{
		*(&Param0 + 208) = CREATE_OBJECTSET_IN_LAYOUT(Function_98(), &Global_43578, 36, 1);
	}
	bVar22 = 4294967295;
	while (!bVar6)
	{
		uVar21 = START_CURVE_QUERY(&Global_43578, Var3, uVar7, fVar8, fVar9, Function_107(Function_119(&Param0), ((fVar9 - fVar8) / 2.0f)), 0);
		if (IS_OBJECT_VALID(&uParam4))
		{
			REMOVE_CURVE_FROM_CURVE_QUERY_USING_CURVE(&uVar21, &uParam4);
			if (!IS_OBJECT_IN_OBJECTSET(&uParam4, &Param0 + 208))
			{
				ADD_OBJECT_TO_OBJECTSET(&uParam4, &Param0 + 208);
			}
		}
		if (IS_OBJECTSET_VALID(&Param0 + 64))
		{
			bVar5 = false;
			while (bVar5 <= GET_NUM_CURVES_IN_CURVE_QUERY(&uVar21))
			{
				uVar23 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(&uVar21, bVar5);
				if (!IS_OBJECT_IN_OBJECTSET(&uVar23, &Param0 + 64))
				{
					REMOVE_CURVE_FROM_CURVE_QUERY_USING_CURVE(&uVar21, &uVar23);
					RELEASE_CURVE(&uVar23);
				}
				bVar5++;
			}
		}
		else
		{
			bVar5 = false;
			while (bVar5 <= GET_NUM_CURVES_IN_CURVE_QUERY(&uVar21))
			{
				uVar23 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(&uVar21, bVar5);
				if (IS_OBJECT_IN_OBJECTSET(&uVar23, &Param0 + 208))
				{
					REMOVE_CURVE_FROM_CURVE_QUERY_USING_CURVE(&uVar21, &uVar23);
					RELEASE_CURVE(&uVar23);
				}
				bVar5++;
			}
		}
		if (!GET_NUM_CURVES_IN_CURVE_QUERY(&uVar21) < 0)
		{
			REMOVE_OBJECT_FROM_OBJECTSET(&uParam4, &Param0 + 208);
			UNK_0xDF93BD7C(&uVar21);
			Function_118(&Param0 + 208);
			ADD_OBJECT_TO_OBJECTSET(&uParam4, &Param0 + 208);
			if (uParam6 || iVar10 > 5)
			{
				fVar8 = fVar9;
				fVar9 = (fVar9 + fParam5);
				iVar10++;
			}
			else
			{
				Function_117();
				return StackVal, StackVal, Function_117();
			}
		}
		fVar24 = -100000.0f;
		bVar22 = 4294967295;
		bVar5 = false;
		if (IS_OBJECTSET_VALID(&Param0 + 64))
		{
			bVar5 = false;
			while (bVar5 <= GET_NUM_CURVES_IN_CURVE_QUERY(&uVar21))
			{
				uVar23 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(&uVar21, bVar5);
				if (IS_OBJECT_IN_OBJECTSET(&uVar23, &Param0 + 64))
				{
					GET_POINT_FROM_CURVE_QUERY(&uVar21, bVar5, &vVar18);
					Function_141(&vVar18);
					Function_141(&vParam1);
					uVar15 = Vector(StackVal, StackVal, StackVal) - Vector(Function_141(&vParam1), Function_141(&vVar18), StackVal);
					fVar17 = VDOT(&uVar15, &Var13);
					if (fVar17 < fVar24)
					{
						fVar24 = fVar17;
						bVar22 = bVar5;
					}
				}
				RELEASE_CURVE(&uVar23);
				bVar5++;
			}
		}
		else if (Function_97(StackVal, Var13))
		{
			bVar22 = ROUND((TO_FLOAT(RAND_INT_RANGE(false, (GET_NUM_CURVES_IN_CURVE_QUERY(&uVar21) - 1000))) / 1000.0f));
		}
		else if (Global_6629)
		{
			Function_141(&vParam1);
			Var13 = Vector(StackVal, StackVal, StackVal) - Vector(Function_141(&vParam1), Global_54078, StackVal);
			VNORMALIZE(&Var13);
			Function_117();
			Var25 = { StackVal, StackVal, Function_117() };
			Function_117();
			Var28 = { StackVal, StackVal, Function_117() };
			bVar5 = false;
			while (bVar5 <= GET_NUM_CURVES_IN_CURVE_QUERY(&uVar21))
			{
				uVar31 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(&uVar21, bVar5);
				GET_CURVE_POINT(&uVar31, 1.0f, &Var25, 0);
				GET_CURVE_POINT(&uVar31, 0.0f, &Var28, 0);
				Function_141(&vParam1);
				Function_141(&Var25);
				Function_141(&vParam1);
				Function_141(&Var28);
				if (StackVal > Function_102(StackVal, Function_102(StackVal, StackVal, Function_141(&vParam1), Function_141(&Var25)), Function_141(&vParam1), Function_141(&Var28)))
				{
					UNK_0x04D89A35(&uVar31, 1.0f, 0.0f, -5.0f, &vVar18);
				}
				else
				{
					UNK_0x04D89A35(&uVar31, 0.0f, 0.0f, 5.0f, &vVar18);
				}
				if (Global_47151[12])
				{
					Function_116(StackVal, StackVal, vVar18);
					PRINTNL();
				}
				Function_141(&vVar18);
				Function_141(&vParam1);
				uVar15 = Vector(StackVal, StackVal, StackVal) - Vector(Function_141(&vParam1), Function_141(&vVar18), StackVal);
				VNORMALIZE(&uVar15);
				fVar17 = VDOT(&uVar15, &Var13);
				fVar17 = (fVar17 * RAND_FLOAT_GAUSSIAN(0,5f, 0,5f));
				if (fVar17 < fVar24)
				{
					fVar24 = fVar17;
					bVar22 = bVar5;
				}
				RELEASE_CURVE(&uVar31);
				bVar5++;
			}
		}
		else
		{
			Function_117();
			Var25 = { StackVal, StackVal, Function_117() };
			Function_117();
			Var28 = { StackVal, StackVal, Function_117() };
			Function_141(&vParam1);
			Var13 = Vector(StackVal, StackVal, StackVal) - Vector(Function_141(&vParam1), Global_54078, StackVal);
			VNORMALIZE(&Var13);
			bVar5 = false;
			while (bVar5 <= GET_NUM_CURVES_IN_CURVE_QUERY(&uVar21))
			{
				uVar31 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(&uVar21, bVar5);
				GET_CURVE_POINT(&uVar31, 1.0f, &Var25, 0);
				GET_CURVE_POINT(&uVar31, 0.0f, &Var28, 0);
				Function_141(&vParam1);
				Function_141(&Var25);
				Function_141(&vParam1);
				Function_141(&Var28);
				if (StackVal > Function_102(StackVal, Function_102(StackVal, StackVal, Function_141(&vParam1), Function_141(&Var25)), Function_141(&vParam1), Function_141(&Var28)))
				{
					UNK_0x04D89A35(&uVar31, 1.0f, Var25.f_16, 5.0f, &vVar18);
				}
				else
				{
					UNK_0x04D89A35(&uVar31, 0.0f, Var28.f_16, 5.0f, &vVar18);
				}
				Function_141(&vVar18);
				Function_141(&vParam1);
				uVar15 = Vector(StackVal, StackVal, StackVal) - Vector(Function_141(&vParam1), Function_141(&vVar18), StackVal);
				VNORMALIZE(&uVar15);
				fVar17 = VDOT(&uVar15, &Var13);
				fVar17 = (fVar17 * RAND_FLOAT_GAUSSIAN(0,25f, 1.0f));
				if (fVar17 < fVar24)
				{
					fVar24 = fVar17;
					bVar22 = bVar5;
				}
				RELEASE_CURVE(&uVar31);
				bVar5++;
			}
		}
		iVar10 = 0;
		if (bVar22 == 4294967295)
		{
			UNK_0xDF93BD7C(&uVar21);
			if (uParam6 || iVar10 > 5)
			{
				fVar8 = fVar9;
				fVar9 = (fVar9 + fParam5);
				iVar10++;
			}
			else
			{
				Function_117();
				return StackVal, StackVal, Function_117();
			}
		}
		bVar6 = true;
	}
	*(&Param0 + 192) = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(&uVar21, bVar22);
	Param0.f_200 = CURVE_CALCULATE_DISTANCE_BY_FORCED_COMPONENT_SUBDIVISION_BOUNDS(&Param0 + 192, 0.0f, 1.0f, 10);
	GET_POINT_FROM_CURVE_QUERY(&uVar21, bVar22, &vVar0);
	Function_141(&vVar0);
	uVar32 = Function_141(&vVar0);
	GET_CURVE_POINT(&Param0 + 192, 1.0f, &vVar34, 0);
	GET_CURVE_POINT(&Param0 + 192, 0.0f, &vVar37, 0);
	if (StackVal < Function_115(StackVal, StackVal, StackVal, Function_115(StackVal, StackVal, StackVal, StackVal, vVar34, vParam1), vVar37, vParam1))
	{
		Param0.f_188 = 1;
		GET_CURVE_POINT(&Param0 + 192, 1.0f, &vVar0, 0);
	}
	else
	{
		Param0.f_188 = 4294967295;
		GET_CURVE_POINT(&Param0 + 192, 0.0f, &vVar0, 0);
	}
	if (Global_47267[1])
	{
		bVar5 = false;
		bVar5 = false;
		while (bVar5 <= GET_NUM_POINTS_IN_CURVE_QUERY(&uVar21))
		{
			GET_POINT_FROM_CURVE_QUERY(&uVar21, bVar5, &vVar18);
			Function_141(&vVar18);
			uVar32 = Function_141(&vVar18);
			bVar5++;
		}
		Function_141(&vVar0);
		uVar32 = Function_141(&vVar0);
	}
	Function_112(&Param0);
	UNK_0xDF93BD7C(&uVar21);
	return StackVal, StackVal, vVar0;
}

void Function_112(struct<33> Param0) //Position: 0x63AD / 25517
{
	if (!Function_114(&Param0))
	{
		return;
	}
	if (!Function_113(StackVal))
	{
		return;
	}
	if (!SQUAD_IS_VALID(&Param0 + 8))
	{
		return;
	}
	if (!IS_OBJECT_VALID(&Param0 + 192))
	{
		return;
	}
	if (!Param0.f_32 < 0)
	{
		return;
	}
	if (!GET_CURVE_TYPE(&Param0 + 192) != 4 && !GET_CURVE_TYPE(&Param0 + 192) != 5)
	{
		LOG_ERROR("Adding a traffic node with a bad pathtype. I thought we filtered this?");
		return;
	}
	return;
}

bool Function_113(int iParam0) //Position: 0x645C / 25692
{
	if (iParam0 > 0 || iParam0 < 3)
	{
		return 0;
	}
	return 1;
}

bool Function_114(bool bParam0) //Position: 0x6471 / 25713
{
	if (bParam0 == 0)
	{
		return 0;
	}
	return 1;
}

float Function_115(bool bParam0, var uParam1, var uParam2, bool bParam3, var uParam4, var uParam5) //Position: 0x6482 / 25730
{
	struct<2> Var0;
	struct<2> Var2;
	
	Function_141(&bParam0);
	Var0 = Function_141(&bParam0);
	Function_141(&bParam3);
	Var2 = Function_141(&bParam3);
	return VDIST(Var0, Var2);
}

void Function_116(struct<17> Param0) //Position: 0x64A5 / 25765
{
	Function_141(&Param0);
	PRINTVECTOR(Function_141(&Param0));
	PRINTSTRING(": t=");
	PRINTFLOAT(Param0.f_12);
	PRINTSTRING(" slope=");
	PRINTFLOAT(Param0.f_16);
	return;
}

vector3 Function_117() //Position: 0x64D8 / 25816
{
	vector3 vVar0;
	
	vVar0.f_20 = 4294967295;
	return StackVal, StackVal, vVar0;
}

void Function_118(var uParam0) //Position: 0x64E7 / 25831
{
	int iVar0;
	
	if (!IS_OBJECTSET_VALID(&uParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(&uParam0) >= 0)
	{
		iVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uParam0);
		REMOVE_OBJECT_FROM_OBJECTSET(&iVar0, &uParam0);
		CLEAN_OBJECTSET(&uParam0);
		if (IS_OBJECT_VALID(&iVar0))
		{
			RELEASE_CURVE(GET_CURVE_FROM_OBJECT(&iVar0));
		}
	}
	return;
}

var Function_119(struct<113> Param0) //Position: 0x6530 / 25904
{
	if (IS_OBJECTSET_VALID(&Param0 + 64))
	{
		return 5.0f;
	}
	switch (StackVal)
	{
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
			switch (Param0.f_112)
			{
				case 0x00000005:
					return 2,5f;
					break;
				
				case 0x00000001:
					return 3,75f;
					break;
				
				case 0x00000002:
					return 6,25f;
					break;
				
				case 0x00000004:
					return 8,75f;
					break;
				
				case 0x00000003:
					return 12,5f;
					break;
			}
			break;
		
		default:
			LOG_ERROR("Unknown Traffic Type in NextTravelFreq");
			break;
	}
	return 6,25f;
}

int Function_120(int iParam0, int iParam1) //Position: 0x65EC / 26092
{
	if (&iParam1 != 0)
	{
		return &iParam1;
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

vector3 Function_121(int iParam0) //Position: 0x661E / 26142
{
	struct<2> Var0;
	struct<2> Var2;
	
	Var0 = Vector(0.0f, -50.0f, 0.0f);
	GET_OBJECT_RELATIVE_POSITION(GET_OBJECT_FROM_ACTOR(&iParam0), Var0, &Var2);
	if (!Function_84(&Var2, 50.0f, &Var0, 10))
	{
		Var0 = Var2;
	}
	Function_122(StackVal, Var0);
	return StackVal, StackVal, Function_122(StackVal, Var0);
}

vector3 Function_122(vector3 vParam0) //Position: 0x665F / 26207
{
	vector3 vVar0;
	
	vVar0.x = vParam0.x;
	vVar0.f_4 = vParam0.y;
	vVar0.f_8 = vParam0.z;
	return StackVal, StackVal, vVar0;
}

bool Function_123(struct<137> Param0) //Position: 0x667D / 26237
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!Function_114(&Param0))
	{
		Function_129(&Param0, 1);
		return 0;
	}
	if (DECOR_CHECK_EXIST(&Param0 + 8, "coachService"))
	{
		return 1;
	}
	AI_CLEAR_NAV_MATERIAL_USAGE(Function_79(&Param0 + 8));
	if (!SQUAD_GOAL_IS_VALID(&Param0 + 16))
	{
		SQUAD_GOALS_CLEAR(&Param0 + 8);
	}
	Function_141(&Param0 + 36);
	Var2 = Function_141(&Param0 + 36);
	Var0 = Var2;
	Function_128(StackVal, Var0, &Param0 + 36);
	if (&bParam1)
	{
		Param0.f_116 = Function_127(StackVal, Param0.f_116, Param0.f_120);
		if (!Param0.f_136 || Param0.f_112 != 4294967295)
		{
			Param0.f_112 = Param0.f_116;
		}
	}
	if (&bParam2)
	{
		AI_SET_NAV_MATERIAL_USAGE(StackVal, Function_126(Function_79(&Param0 + 8)), 0);
	}
	Function_124(&Param0);
	return 1;
}

void Function_124(struct<189> Param0) //Position: 0x674D / 26445
{
	int iVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(&Param0 + 8))
	{
		return;
	}
	iVar1 = 2;
	if (Function_125())
	{
		iVar1 = 0;
	}
	if (Param0.f_188 == 4294967295)
	{
		iVar0 = 1;
	}
	if (Param0.f_148)
	{
		iVar1 = 1;
	}
	if (Param0.f_156)
	{
		if (!Param0.f_136 && GET_CURVE_TYPE(&Param0 + 192) == 5)
		{
			Param0.f_156 = 0;
		}
	}
	else
	{
		if (GET_CURVE_TYPE(&Param0 + 192) == 5)
		{
			Param0.f_156 = 1;
		}
		if (Param0.f_136)
		{
			Param0.f_156 = 1;
		}
	}
	if (!SQUAD_GOAL_IS_VALID(&Param0 + 16))
	{
		*(&Param0 + 16) = SQUAD_GOAL_ADD_FOLLOW_TRAFFIC_CURVE(&Param0 + 8, 0, 4294967295, &Param0 + 192, Param0.f_112, iVar0, iVar1);
		if (Param0.f_156)
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(&Param0 + 8, &Param0 + 16, 2, 0);
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(&Param0 + 8, &Param0 + 16, 1, 1);
		}
		else
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(&Param0 + 8, &Param0 + 16, 2, 1);
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(&Param0 + 8, &Param0 + 16, 1, 0);
		}
		if (Param0.f_124 != 2)
		{
			if (!Param0.f_144)
			{
				Param0.f_124 = 2;
			}
			else
			{
				SQUAD_FOLLOW_TRAFFIC_CURVE_SET_TASK_PRIORITY(&Param0 + 8, &Param0 + 16, Param0.f_124);
			}
		}
		if (StackVal && !Param0.f_152 != 2)
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(&Param0 + 8, &Param0 + 16, 4, 1);
		}
		else
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(&Param0 + 8, &Param0 + 16, 4, 0);
		}
		SQUAD_GOAL_ADD_FACTION_STATUS_WITHIN_GOAL(&Param0 + 8, 1, 0);
		SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Param0 + 8, 1);
	}
	else
	{
		if (!SQUAD_FOLLOW_TRAFFIC_CURVE_IS_CURVE_ALREADY_IN_LIST(&Param0 + 8, &Param0 + 16, &Param0 + 192, iVar0, 0))
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_ENQUEUE_CURVE(&Param0 + 8, &Param0 + 16, &Param0 + 192, iVar0);
		}
		if (Param0.f_156)
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(&Param0 + 8, &Param0 + 16, 2, 0);
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(&Param0 + 8, &Param0 + 16, 1, 1);
		}
		else
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(&Param0 + 8, &Param0 + 16, 2, 1);
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(&Param0 + 8, &Param0 + 16, 1, 0);
		}
	}
	return;
}

bool Function_125() //Position: 0x6948 / 26952
{
	if (Function_19(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

int Function_126(int iParam0) //Position: 0x6963 / 26979
{
	switch (iParam0)
	{
		case 0x00000002:
			return 64;
			break;
		
		case 0x00000001:
			return 96;
			break;
	}
	return 96;
}

int Function_127(int iParam0, int iParam1, int iParam2) //Position: 0x698A / 27018
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_125())
	{
		if (&iParam2 != 0)
		{
			return &iParam2;
		}
		bVar0 = RAND_INT_RANGE(true, 10000);
		iParam1 = &iParam1;
		switch (iParam0)
		{
			case 0x00000001:
				if (bVar0 <= 5000)
				{
					return 2;
				}
				if (bVar0 <= 4000)
				{
					return 4;
				}
				return 3;
				break;
			
			case 0x00000003:
				if (bVar0 <= 5000)
				{
					return 1;
				}
				return 2;
				break;
			
			case 0x00000002:
				if (bVar0 <= 7500)
				{
					return 2;
				}
				return 4;
				break;
			
			default:
				LOG_ERROR("Unknown Traffic Type in WildSpeed");
				break;
		}
		return 2;
	}
	if (&iParam2 != 0)
	{
		return &iParam2;
	}
	bVar1 = RAND_INT_RANGE(true, 10000);
	iParam1 = &iParam1;
	switch (iParam0)
	{
		case 0x00000001:
			if (bVar1 <= 9000)
			{
				return 4;
			}
			return 3;
			break;
		
		case 0x00000003:
			if (bVar1 <= 7500)
			{
				return 2;
			}
			return 4;
			break;
		
		case 0x00000002:
			if (bVar1 <= 7500)
			{
				return 2;
			}
			return 4;
			break;
		
		default:
			LOG_ERROR("Unknown Traffic Type in WildSpeed");
			break;
	}
	return 2;
}

void Function_128(vector3 vParam0) //Position: 0x6AD0 / 27344
{
	vParam2 = vParam0.x;
	vParam2.f_4 = vParam0.y;
	vParam2.f_8 = vParam0.z;
	return;
}

void Function_129(struct<113> Param0) //Position: 0x6AEE / 27374
{
	struct<5> Var0;
	struct<13> Var8;
	
	if (!Global_47267[1] && iParam1)
	{
		return;
	}
	if (!Function_114(&Param0))
	{
		return;
	}
	strcpy(&cVar4, "TRAFFIC NODE", 16);
	switch (Param0.f_112)
	{
		case 0x00000005:
			Var8 = 1.0f;
			Var8.f_4 = 0.0f;
			Var8.f_8 = 0.0f;
			Var8.f_12 = 1.0f;
			break;
		
		case 0x00000001:
			Var8 = 0,9f;
			Var8.f_4 = 0,55f;
			Var8.f_8 = 0,1f;
			Var8.f_12 = 1.0f;
			break;
		
		case 0x00000002:
			Var8 = 0,9f;
			Var8.f_4 = 0,9f;
			Var8.f_8 = 0,1f;
			Var8.f_12 = 1.0f;
			break;
		
		case 0x00000004:
			Var8 = 0,2f;
			Var8.f_4 = 0,8f;
			Var8.f_8 = 0,1f;
			Var8.f_12 = 1.0f;
			break;
		
		case 0x00000003:
			Var8 = 0,1f;
			Var8.f_4 = 0,1f;
			Var8.f_8 = 1.0f;
			Var8.f_12 = 1.0f;
			break;
	}
	GET_POSITION(Function_79(&Param0 + 8), &Var0);
	fVar10 = Vector(0.0f, 1.0f, 0.0f);
	Var0.f_4 = (StackVal + 2,5f);
	Var0.f_4 = (StackVal + 1.0f);
	Var0.f_4 = (StackVal + 0,5f);
	switch (StackVal)
	{
		case 0x00000001:
			break;
		
		case 0x00000002:
			break;
	}
	Function_141(&Param0 + 36);
	iVar2 = Function_141(&Param0 + 36);
	return;
}

void Function_130(struct<137> Param0) //Position: 0x6C40 / 27712
{
	if (!Function_125())
	{
		Function_137(&Param0 + 8);
		if (Global_43580.f_104 != 0)
		{
			Param0.f_112 = Global_43580.f_104;
			Function_136(&Param0 + 8, Param0.f_112);
		}
		else if (Global_6646 || iParam1)
		{
			if (StackVal == 2)
			{
				Param0.f_112 = 4;
			}
			else
			{
				Param0.f_112 = 3;
			}
			Function_136(&Param0 + 8, Param0.f_112);
			if (StackVal == 2)
			{
				Function_135(&Param0 + 8, 1);
			}
		}
		else if ((Global_6647 || Function_133(131072)) || Function_103(&Param0 + 8))
		{
			Param0.f_112 = 4;
			Function_136(&Param0 + 8, Param0.f_112);
			if (StackVal == 2)
			{
				Function_135(&Param0 + 8, 1);
			}
		}
		else if (Param0.f_132)
		{
			Param0.f_112 = Function_132(StackVal, Param0.f_120);
			Function_136(&Param0 + 8, Param0.f_112);
		}
		else if (Param0.f_136)
		{
			Param0.f_112 = Function_131(StackVal, Param0.f_120);
			Function_136(&Param0 + 8, Param0.f_112);
			if (StackVal == 2)
			{
				Function_135(&Param0 + 8, 0);
			}
		}
		else
		{
			Param0.f_112 = Param0.f_116;
			if (StackVal == 2)
			{
				Function_135(&Param0 + 8, 1);
			}
		}
	}
	else
	{
		Function_137(&Param0 + 8);
		if (Global_43580.f_104 != 0)
		{
			Param0.f_112 = Global_43580.f_104;
			Function_136(&Param0 + 8, Param0.f_112);
		}
		else if (Function_133(131072) || Function_103(&Param0 + 8))
		{
			Param0.f_112 = 3;
			Function_136(&Param0 + 8, Param0.f_112);
			if (StackVal == 2)
			{
				Function_135(&Param0 + 8, 1);
			}
		}
		else if (Param0.f_132)
		{
			Param0.f_112 = Function_132(StackVal, Param0.f_120);
			Function_136(&Param0 + 8, Param0.f_112);
		}
		else if (Param0.f_136)
		{
			Param0.f_112 = Function_131(StackVal, Param0.f_120);
			Function_136(&Param0 + 8, Param0.f_112);
			if (StackVal == 2)
			{
				Function_135(&Param0 + 8, 0);
			}
		}
		else
		{
			Param0.f_112 = Param0.f_116;
			if (StackVal == 2)
			{
				Function_135(&Param0 + 8, 1);
			}
		}
	}
	return;
}

int Function_131(int iParam0, int iParam1) //Position: 0x6E7C / 28284
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_125())
	{
		if (iParam1 != 0)
		{
			return iParam1;
		}
		bVar0 = RAND_INT_RANGE(true, 10000);
		switch (iParam0)
		{
			case 0x00000001:
				if (bVar0 <= 9000)
				{
					return 1;
				}
				return 2;
				break;
			
			case 0x00000002:
				return 1;
				break;
			
			default:
				LOG_ERROR("Unknown Traffic Type in TownSpeed");
				break;
		}
		return 1;
	}
	if (iParam1 != 0)
	{
		return iParam1;
	}
	bVar1 = RAND_INT_RANGE(true, 10000);
	switch (iParam0)
	{
		case 0x00000001:
			if (bVar1 <= 9000)
			{
				return 4;
			}
			return 3;
			break;
		
		case 0x00000002:
			if (bVar1 <= 9000)
			{
				return 2;
			}
			return 4;
			break;
		
		default:
			LOG_ERROR("Unknown Traffic Type in TownSpeed");
			break;
	}
	return 2;
}

int Function_132(int iParam0, int iParam1) //Position: 0x6F68 / 28520
{
	if (!Function_125())
	{
		if (iParam1 != 0)
		{
			return iParam1;
		}
		switch (iParam0)
		{
			case 0x00000001:
			case 0x00000003:
				return 1;
				break;
			
			case 0x00000002:
				return 5;
				break;
			
			default:
				LOG_ERROR("Unknown Traffic Type in PlayerNearSpeed");
				break;
		}
		return 5;
	}
	if (iParam1 != 0)
	{
		return iParam1;
	}
	switch (iParam0)
	{
		case 0x00000001:
		case 0x00000003:
			return 4;
			break;
		
		case 0x00000002:
			return 2;
			break;
		
		default:
			LOG_ERROR("Unknown Traffic Type in PlayerNearSpeed");
			break;
	}
	return 2;
}

int Function_133(int iParam0) //Position: 0x7033 / 28723
{
	return Function_134(&Global_43580, iParam0);
}

int Function_134(var uParam0, int iParam1) //Position: 0x7041 / 28737
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_135(var uParam0, int iParam1) //Position: 0x705E / 28766
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		AI_SET_NAV_ACTOR_AVOIDANCE_ALLOW_TURNS(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0), iParam1);
		bVar0++;
	}
	return;
}

void Function_136(var uParam0, bool bParam1) //Position: 0x7088 / 28808
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		TASK_OVERRIDE_SET_MOVETYPE(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0), bParam1);
		bVar0++;
	}
	return;
}

void Function_137(int iParam0) //Position: 0x70B2 / 28850
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&iParam0))
	{
		TASK_OVERRIDE_CLEAR_MOVETYPE(SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0));
		bVar0++;
	}
	return;
}

bool Function_138(struct<21> Param0) //Position: 0x70DA / 28890
{
	return ((((StackVal && (StackVal && Param0 != 0.0f != 0.0f) != 0.0f) && Param0.f_12 != 0.0f) && Param0.f_16 != 0.0f) && Param0.f_20 != 4294967295);
}

vector3 Function_139(struct<189> Param0) //Position: 0x710E / 28942
{
	bool bVar0;
	bool bVar3;
	vector3 vVar6;
	
	if (!IS_OBJECT_VALID(&uParam4))
	{
		return StackVal, StackVal, vVar6;
	}
	Param0.f_188 = Function_140(StackVal, StackVal, StackVal, &uParam4, vParam1, Param5);
	if (Param0.f_188 >= 0)
	{
		GET_CURVE_POINT(&uParam4, 1.0f, &vVar6, 0);
		UNK_0x19D652F9(&uParam4, 1.0f, &vParam1, &bVar0);
		Function_141(&bVar0);
		Function_141(&vParam1);
		*(&Param0 + 220) = Vector(StackVal, StackVal, StackVal) - Vector(Function_141(&vParam1), Function_141(&bVar0), StackVal);
		*(&Param0 + 220) = Vector(0.0f, UNK_0x9C40E671(&Param0 + 220), 0.0f);
	}
	else
	{
		GET_CURVE_POINT(&uParam4, 0.0f, &vVar6, 0);
		UNK_0x19D652F9(&uParam4, -1.0f, &vParam1, &bVar3);
		Function_141(&bVar3);
		Function_141(&vParam1);
		*(&Param0 + 220) = Vector(StackVal, StackVal, StackVal) - Vector(Function_141(&vParam1), Function_141(&bVar3), StackVal);
		*(&Param0 + 220) = Vector(0.0f, UNK_0x9C40E671(&Param0 + 220), 0.0f);
	}
	return StackVal, StackVal, vVar6;
}

int Function_140(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4, Vector3 vParam5) //Position: 0x71B8 / 29112
{
	bool bVar0;
	bool bVar3;
	var uVar6;
	var uVar8;
	float fVar10;
	float fVar11;
	
	UNK_0x19D652F9(&uParam0, 1.0f, &bParam1, &bVar0);
	UNK_0x19D652F9(&uParam0, -1.0f, &bParam1, &bVar3);
	Function_141(&bVar0);
	Function_141(&bParam1);
	uVar6 = Vector(StackVal, StackVal, StackVal) - Vector(Function_141(&bParam1), Function_141(&bVar0), StackVal);
	fVar10 = VDOT(&uParam4, &uVar6);
	Function_141(&bVar3);
	Function_141(&bParam1);
	uVar8 = Vector(StackVal, StackVal, StackVal) - Vector(Function_141(&bParam1), Function_141(&bVar3), StackVal);
	fVar11 = VDOT(&uParam4, &uVar8);
	if (fVar11 > fVar10)
	{
		return 1;
	}
	return 4294967295;
}

struct<8> Function_141(vector3 vParam0) //Position: 0x7211 / 29201
{
	struct<2> Var0;
	
	Var0 = vParam0;
	Var0.f_4 = vParam0.y;
	Var0.f_8 = vParam0.z;
	return StackVal, Var0;
}

void Function_142(struct<157> Param0) //Position: 0x7233 / 29235
{
	Function_122(StackVal, Param1);
	*(&Param0 + 36) = { StackVal, StackVal, Function_122(StackVal, Param1) };
	(&Param0 + 36)->f_12 = Param3;
	(&Param0 + 36)->f_16 = StackVal;
	*(&Param0 + 192) = &uParam5;
	Param0.f_152 = &uParam7;
	Param0.f_156 = &uParam6;
	Function_143(&Param0);
	Param0.f_32 = SQUAD_GET_SIZE(&Param0 + 8);
	Function_112(&Param0);
}

void Function_143(int iParam0) //Position: 0x7290 / 29328
{
	struct<2> Var0;
	
	if (!SQUAD_IS_VALID(&iParam0 + 8))
	{
		Function_144();
		Var0 = { StackVal, Function_144() };
		*(&iParam0 + 8) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Global_43578, &Var0));
	}
	iParam0 = 1;
	return;
}

struct<8> Function_144() //Position: 0x72C1 / 29377
{
	char* cVar0[8];
	
	strcpy(&cVar0, "", 8);
	straddi(&cVar0, RAND_INT_RANGE(false, 9), 8);
	straddi(&cVar0, RAND_INT_RANGE(false, 9), 8);
	straddi(&cVar0, RAND_INT_RANGE(false, 9), 8);
	straddi(&cVar0, RAND_INT_RANGE(false, 9), 8);
	straddi(&cVar0, RAND_INT_RANGE(false, 9), 8);
	straddi(&cVar0, RAND_INT_RANGE(false, 9), 8);
	straddi(&cVar0, RAND_INT_RANGE(false, 9), 8);
	return StackVal, cVar0;
}

void Function_145(int iParam0, struct<2> Param1) //Position: 0x7318 / 29464
{
	*(&iParam0 + 220) = Param1;
	return;
}

bool Function_146(struct<65> Param0) //Position: 0x7328 / 29480
{
	struct<8> Var0;
	var uVar8;
	var uVar9;
	
	if (Global_6612 && Param0.f_40)
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_201(GET_SCRIPT_NAME()) };
		uVar8 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Vector(*(&Param0 + 16), Function_184(0.0f, &Global_54076, *(&Param0 + 16)), 0.0f), Vector(Param0.f_60, 20.0f, Param0.f_60));
		DECOR_SET_INT(&uVar8, "script", GET_THIS_SCRIPT_ID());
		if (Param0.f_64 != 4294967295)
		{
			DECOR_SET_INT(StackVal, &uVar8, "category");
			Function_182(&uVar8, Param0.f_40);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
		*(&Param0 + 16) = Global_54078;
		return 1;
	}
	uParam3 = 0;
	if (!Function_151(&Param0))
	{
		if (Param0.f_40 == 1)
		{
			if (uParam2 == 0)
			{
				Function_149("Still scanning for the proper terrain to run this event.  Move the player around to find a good spawn location.", -1.0f, 1, 2, 1, 0);
			}
		}
		else if (uParam2 >= 20)
		{
			uParam3 = 1;
			Global_39619++;
		}
		uParam2++;
		uParam1 = 1000;
		*(&Param0 + 16) = Vector(0.0f, 0.0f, 0.0f);
		return 0;
	}
	if (Param0.f_40)
	{
		HUD_CLEAR_SMALL_TEXT_QUEUE();
		Global_6642 = 0;
		Function_149("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 5.0f, 1, 2, 1, 0);
	}
	if (&bParam4)
	{
		if (!Function_147(Param0.f_64, 0, 1, 0, 0))
		{
			uParam3 = 1;
			LOG_ERROR("SET_BEAT_NEXT_SPAWN_TIME Failed, shutting down event");
			return 0;
		}
		if (Param0.f_60 >= 0.0f)
		{
			LOG_ERROR("SET_BEAT_NEXT_SPAWN_TIME Failed: Volume restriction size not set");
			return 0;
		}
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_201("restrictVol") };
		uVar9 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Vector(*(&Param0 + 16), Function_184(0.0f, &Global_54076, *(&Param0 + 16)), 0.0f), Vector(Param0.f_60, 20.0f, Param0.f_60));
		DECOR_SET_INT(&uVar9, "script", GET_THIS_SCRIPT_ID());
		if (Param0.f_64 != 4294967295)
		{
			DECOR_SET_INT(StackVal, &uVar9, "category");
			Function_182(&uVar9, Param0.f_40);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
	}
	return 1;
}

bool Function_147(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x76E6 / 30438
{
	bool bVar0;
	bool bVar1;
	
	if (Global_47151[16])
	{
		PRINTSTRING(GET_ASSET_NAME(&Global_27462[iParam052] + 160, 4));
	}
	uParam1 = &uParam1;
	if (&bParam4)
	{
		HUD_CLEAR_OBJECTIVE_QUEUE();
		Global_6642 = 0;
		Function_149("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
		if (StackVal & 128 == 128)
		{
			Global_27462[iParam052].f_184 = 0;
		}
		if (StackVal & 64 == 64)
		{
			if (Global_6608)
			{
				if (IS_SCRIPT_VALID(Global_10986) && Global_10986 == GET_THIS_SCRIPT_ID())
				{
					return 0;
				}
			}
			Global_6608 = 1;
			Global_10986 = GET_THIS_SCRIPT_ID();
		}
		return 1;
	}
	if (iParam0 != 4294967295)
	{
		bVar0 = GET_TIME_OF_DAY();
		bVar1 = GET_TOTAL_MINUTES(&Global_27462[iParam052] + 368);
		if (Global_47151[16])
		{
			PRINTSTRING("Current Time of day:");
			Function_148(&bVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_148(&bVar0);
		}
		if (!&bParam3)
		{
			ADD_TIME(&bVar0, 0, 0, bVar1, 0);
		}
		else
		{
			ADD_TIME(&bVar0, 0, 0, 10, 0);
		}
		if (Global_47151[16])
		{
			PRINTSTRING("Formed time of day:");
			Function_148(&bVar0);
		}
		*(&Global_27462[iParam052] + 376) = &bVar0;
		Global_26652[iParam04] = &bVar0;
		if (&bParam2)
		{
			Global_26652[iParam04].f_8 = StackVal + 1;
			if (StackVal & 128 == 128)
			{
				Global_27462[iParam052].f_184 = 0;
			}
			if (StackVal & 64 == 64)
			{
				if (Global_6608)
				{
					if (IS_SCRIPT_VALID(Global_10986) && Global_10986 == GET_THIS_SCRIPT_ID())
					{
						return 0;
					}
				}
				Global_6608 = 1;
				Global_10986 = GET_THIS_SCRIPT_ID();
			}
		}
		return 1;
	}
	LOG_ERROR("Invalid beat index");
	return 0;
}

void Function_148(bool bParam0) //Position: 0x7952 / 31058
{
	PRINTSTRING("Day ");
	PRINTINT(GET_DAY(&bParam0));
	PRINTSTRING(": ");
	PRINTINT(GET_HOUR(&bParam0));
	PRINTSTRING(":");
	PRINTINT(GET_MINUTE(&bParam0));
	PRINTSTRING(":");
	PRINTINT(GET_SECOND(&bParam0));
	return;
}

void Function_149(var uParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x799C / 31132
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_150(Global_10966) };
		}
		PRINT_SMALL_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &Var0, &iParam5);
	}
	else
	{
		uVar4 = "";
		PRINT_SMALL_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &uVar4, &iParam5);
	}
}

struct<16> Function_150(int iParam0) //Position: 0x7A21 / 31265
{
	char* cVar0[16];
	
	if (!Function_125())
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

bool Function_151(struct<73> Param0) //Position: 0x7A60 / 31328
{
	var uVar0;
	var uVar1;
	int iVar2;
	struct<2> Var3;
	var uVar5;
	struct<2> Var7;
	float fVar9;
	float fVar10;
	bool bVar11;
	struct<17> Var12;
	
	GET_POSITION(GET_PLAYER_ACTOR(0), &Var7);
	switch (Param0.f_72)
	{
		case 0x00000005:
			if (!IS_ITERATOR_VALID(&Param0 + 8))
			{
				if (IS_LAYOUTREF_VALID(&Global_46715))
				{
					(&Param0 + 8) = CREATE_OBJECT_ITERATOR(&Global_46715);
				}
				else
				{
					return 0;
				}
			}
			Function_181(&Param0 + 8);
			switch ((&Param0 + 72 + 36)->f_28)
			{
				case 0x00000000:
					ITERATE_IN_LAYOUT(&Param0 + 8, &Global_46715);
					break;
				
				case 0x00000001:
					ITERATE_IN_LAYOUT(&Param0 + 8, FIND_NAMED_LAYOUT("regions_layout"));
					break;
			}
			if ((&Param0 + 72 + 36)->f_16 < 0.0f)
			{
				Var3 = Vector(0.0f, 0.0f, Function_22(1));
				ROTATE_VECTOR_XZ(&Var3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				Var3 = Vector(StackVal, StackVal, StackVal) + Vector(Var7, Var3, StackVal);
				ITERATE_IN_SPHERE(&Param0 + 8, Var3, Function_22(1));
			}
			if (!STRINGS_ARE_EQUAL(&Param0 + 72 + 36, ""))
			{
				ITERATE_ON_PARTIAL_NAME(&Param0 + 8, &Param0 + 72 + 36);
			}
			if (!4294967295 != (&Param0 + 72 + 36)->f_20)
			{
				ITERATE_ON_OBJECT_TYPE(&Param0 + 8, (&Param0 + 72 + 36)->f_20);
			}
			if (GET_NUM_ITERATOR_MATCHES(&Param0 + 8) >= 0)
			{
				if (StackVal & 512 == 0 || Param0.f_44 != 1)
				{
					if ((&Param0 + 72 + 36)->f_24 == 0)
					{
						uVar0 = Function_180(StackVal, &Param0 + 8, Var7, 0,01f);
					}
					else
					{
						uVar0 = Function_179(StackVal, &Param0 + 8, Var7, 0,1f, "locflag", (&Param0 + 72 + 36)->f_24);
					}
				}
				else if ((&Param0 + 72 + 36)->f_24 == 0)
				{
					uVar0 = Function_177(StackVal, &Param0 + 8, Var7, Function_178());
				}
				else
				{
					uVar0 = Function_176(StackVal, &Param0 + 8, Var7, Function_178(), "locflag", (&Param0 + 72 + 36)->f_24);
				}
				if (IS_OBJECT_VALID(&uVar0))
				{
					GET_OBJECT_POSITION(&uVar0, &Param0 + 16);
					GET_OBJECT_ORIENTATION(&uVar0, &Param0 + 28);
					Param0.f_56 = &uVar0;
					DESTROY_ITERATOR(&Param0 + 8);
				}
				else
				{
					DESTROY_ITERATOR(&Param0 + 8);
					return 0;
				}
			}
			DESTROY_ITERATOR(&Param0 + 8);
			return 0;
			break;
		
		case 0x00000006:
			if (!IS_ITERATOR_VALID(&Param0 + 8))
			{
				*(&Param0 + 8) = CREATE_OBJECT_ITERATOR(FIND_NAMED_LAYOUT("regions_layout"));
			}
			Function_181(&Param0 + 8);
			ITERATE_IN_LAYOUT(&Param0 + 8, FIND_NAMED_LAYOUT("regions_layout"));
			fVar10 = 130.0f;
			fVar9 = 190.0f;
			GET_POSITION(GET_PLAYER_ACTOR(0), &Var3);
			ITERATE_IN_SPHERE(StackVal, &Param0 + 8, Var3);
			uVar1 = START_OBJECT_ITERATOR(&Param0 + 8);
			while (IS_OBJECT_VALID(&uVar1) && !IS_OBJECT_VALID(&uVar0))
			{
				if (DECOR_CHECK_EXIST(&uVar1, "regid"))
				{
					bVar11 = DECOR_GET_INT(&uVar1, "regid");
					if (Function_175(bVar11))
					{
						if (StackVal == (&Param0 + 72)->f_68)
						{
							if ((StackVal && Global_43791[bVar11]) >= 0)
							{
								GET_OBJECT_POSITION(&uVar1, &Var3);
								if (VDIST(Var7, Var3) < fVar10 && VDIST(Var7, Var3) > Function_22(1))
								{
									uVar0 = &uVar1;
								}
							}
						}
					}
				}
				uVar1 = OBJECT_ITERATOR_NEXT(&Param0 + 8);
			}
			if (IS_OBJECT_VALID(&uVar0))
			{
				GET_OBJECT_POSITION(&uVar0, &Param0 + 16);
				Function_84(&Param0 + 16, 99.0f, &Param0 + 16, 10);
				GET_OBJECT_ORIENTATION(&uVar0, &Param0 + 28);
				Param0.f_56 = DECOR_GET_INT(&uVar0, "regid");
			}
			else
			{
				DESTROY_ITERATOR(&Param0 + 8);
				return 0;
			}
			break;
		
		case 0x00000002:
		case 0x00000001:
			if (StackVal && (((!Global_6629 && Global_6631) && ARE_CURVES_IN_RANGE(48, Var7, 100.0f)) && 8) != 8)
			{
				uVar5 = Vector(0.0f, 0.0f, -10.0f);
				ROTATE_VECTOR_XZ(&uVar5, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				Function_174(&Var7, &uVar5);
				Var3 = Function_174(&Var7, &uVar5);
				if (!Function_97(StackVal, Var3))
				{
					PRINTSTRING("Player Pos: ");
					PRINTVECTOR(Var7);
					PRINTNL();
					Function_23(&fVar10, &fVar9);
					if (VDIST(Var3, Var7) < ((fVar10 + ((fVar9 - fVar10) / 2.0f)) * 0,8f))
					{
						iVar2 = Function_171(StackVal, &Param0, Var3);
					}
				}
			}
			else
			{
				iVar2 = Function_167(&Param0);
			}
			if (iVar2 == 1)
			{
				if ((&Param0 + 72)->f_156 == 4)
				{
					if (IS_OBJECT_VALID(StackVal))
					{
						if (GET_OBJECT_TYPE(StackVal) == 9)
						{
							if (!IS_POINT_IN_VOLUME(StackVal, *(&Param0 + 16)))
							{
								return 0;
							}
						}
					}
				}
				if ((&Param0 + 72)->f_156 == 5)
				{
				}
				if (Param0.f_68 == 2)
				{
					if (!Function_166(StackVal, *(&Param0 + 16)))
					{
						return 0;
					}
				}
				if (Param0.f_68 == 1)
				{
					if (!Function_165(StackVal, *(&Param0 + 16)))
					{
						return 0;
					}
				}
				if (Function_19(StackVal, 131072))
				{
					if (StackVal || Function_164(Function_164(StackVal, *(&Param0 + 16)), Global_54078))
					{
						return 0;
					}
				}
				if (StackVal & 1024 == 1024)
				{
					if (Function_163(StackVal, *(&Param0 + 16)))
					{
						return 0;
					}
				}
				if (!Function_158(&Param0 + 16, &Param0 + 60, 0, Param0.f_40))
				{
					return 0;
				}
			}
			return 0;
			break;
		
		case 0x00000003:
			if (*((&Param0 + 72 + 148 + 4)))
			{
				fVar10 = 120.0f;
				fVar9 = 150.0f;
				Var3 = Vector(0.0f, 0.0f, ((fVar10 + fVar9) * -0,5f));
				ROTATE_VECTOR_XZ(&Var3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				Var3 = Vector(StackVal, StackVal, StackVal) + Vector(Var7, Var3, StackVal);
				uVar17 = START_CURVE_QUERY(&Global_43578, Var3, Function_120((&Param0 + 72)->f_148, 0), 0.0f, 20.0f, 5.0f, 0);
			}
			else
			{
				uVar17 = START_CURVE_QUERY(&Global_43578, Var7, Function_120((&Param0 + 72)->f_148, 0), 120.0f, 150.0f, 5.0f, 0);
			}
			if (GET_NUM_POINTS_IN_CURVE_QUERY(&uVar17) >= 0)
			{
				bVar15 = RAND_INT_RANGE(false, (GET_NUM_POINTS_IN_CURVE_QUERY(&uVar17) - 1));
				GET_POINT_FROM_CURVE_QUERY(&uVar17, bVar15, &Var12);
				Function_141(&Var12);
				*(&Param0 + 16) = Function_141(&Var12);
				Param0.f_28 = Var12.f_12;
				(&Param0 + 28)->f_4 = Var12.f_16;
				Param0.f_56 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(&uVar17, bVar15);
				UNK_0xDF93BD7C(&uVar17);
			}
			else
			{
				UNK_0xDF93BD7C(&uVar17);
				return 0;
			}
			if (Param0.f_68 == 2)
			{
				if (!Function_166(StackVal, *(&Param0 + 16)))
				{
					return 0;
				}
			}
			if (Param0.f_68 == 1)
			{
				if (!Function_165(StackVal, *(&Param0 + 16)))
				{
					return 0;
				}
			}
			if (Param0.f_68 == 0)
			{
				if (!(StackVal || Function_166(Function_165(StackVal, *(&Param0 + 16)), *(&Param0 + 16))))
				{
					return 0;
				}
			}
			if (Function_19(StackVal, 131072))
			{
				if (StackVal || Function_164(Function_164(StackVal, *(&Param0 + 16)), Global_54078))
				{
					return 0;
				}
			}
			if (StackVal && !Function_158(&Param0 + 16, &Param0 + 60, 0, Param0.f_40) == 262144)
			{
				return 0;
			}
			break;
		
		case 0x00000004:
			if (!Function_156((&Param0 + 72)->f_148) < 0)
			{
				return 0;
			}
			break;
		
		case 0x00000007:
			switch ((&Param0 + 72)->f_156)
			{
				case 0x00000001:
					iVar18 = Function_153(StackVal, Global_43787, Global_43788, Global_43789, 1);
					if (IS_PERS_CHAR_VALID(&iVar18))
					{
						if (IS_PERS_CHAR_ALIVE(&iVar18))
						{
							return 0;
						}
					}
					break;
				
				case 0x00000002:
					iVar16 = 0;
					while (StackVal <= (StackVal - iVar16) + 1)
					{
						iVar18 = Function_153(StackVal, Global_43787, Global_43788, (Global_43789 + iVar16), 1);
						if (IS_PERS_CHAR_VALID(&iVar18))
						{
							if (IS_PERS_CHAR_ALIVE(&iVar18))
							{
								iVar19++;
							}
						}
						iVar16++;
					}
					if (iVar19 >= 0)
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
					Param0.f_56 = StackVal;
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
	if (Function_152(StackVal, *(&Param0 + 16)))
	{
		return 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(*(&Param0 + 16), 10.0f))
	{
		return 0;
	}
	return 1;
}

bool Function_152(struct<2> Param0) //Position: 0x8329 / 33577
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(&Global_39246))
	{
		if (IS_POINT_IN_VOLUME(Param0, GET_VOLUME_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &Global_39246))))
		{
			return 1;
		}
		bVar0++;
	}
	return 0;
}

int Function_153(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x8360 / 33632
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
	if (!&bParam4)
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
								return Function_154(&Global_11014, &Global_12796, bParam3);
								break;
							
							case 0x00000001:
								return Function_154(&Global_11146, &Global_12992, bParam3);
								break;
							
							case 0x00000002:
								return Function_154(&Global_11120, &Global_12954, bParam3);
								break;
							
							default:
								return Function_154(&Global_11200, &Global_13072, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_154(&Global_11420, &Global_13398, bParam3);
								break;
							
							case 0x00000001:
								return Function_154(&Global_11222, &Global_13104, bParam3);
								break;
							
							case 0x00000003:
								return Function_154(&Global_11284, &Global_13196, bParam3);
								break;
							
							case 0x00000002:
								return Function_154(&Global_11398, &Global_13366, bParam3);
								break;
							
							case 0x00000004:
								return Function_154(&Global_11492, &Global_13504, bParam3);
								break;
							
							default:
								return Function_154(&Global_11482, &Global_13490, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_154(&Global_11544, &Global_13580, bParam3);
								break;
							
							case 0x00000001:
								return Function_154(&Global_11646, &Global_13732, bParam3);
								break;
							
							case 0x00000002:
								return Function_154(&Global_11704, &Global_13818, bParam3);
								break;
							
							default:
								return Function_154(&Global_11518, &Global_13542, bParam3);
								break;
						}
						break;
					
					case 0x00000003:
						switch (bVar1)
						{
							case 0x00000001:
								return Function_154(&Global_11752, &Global_13888, bParam3);
								break;
							
							default:
								return Function_154(&Global_11826, &Global_13998, bParam3);
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
								return Function_154(&Global_11836, &Global_14012, bParam3);
								break;
							
							case 0x00000001:
								return Function_154(&Global_11946, &Global_14176, bParam3);
								break;
							
							case 0x00000002:
								return Function_154(&Global_11988, &Global_14238, bParam3);
								break;
							
							default:
								return Function_154(&Global_12038, &Global_14312, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_154(&Global_12048, &Global_14326, bParam3);
								break;
							
							default:
								return Function_154(&Global_12274, &Global_14662, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000002:
								return Function_154(&Global_12284, &Global_14676, bParam3);
								break;
							
							case 0x00000001:
								return Function_154(&Global_12342, &Global_14762, bParam3);
								break;
							
							case 0x00000003:
								return Function_154(&Global_12392, &Global_14836, bParam3);
								break;
							
							default:
								return Function_154(&Global_12472, &Global_14954, bParam3);
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
	else if (bVar1 == Global_46760[0])
	{
		return Function_154(&Global_11014, &Global_12796, bParam3);
	}
	if (bVar1 == Global_46760[1])
	{
		return Function_154(&Global_11146, &Global_12992, bParam3);
	}
	if (bVar1 == Global_46760[2])
	{
		return Function_154(&Global_11120, &Global_12954, bParam3);
	}
	if (bVar1 == Global_46796[0])
	{
		return Function_154(&Global_11420, &Global_13398, bParam3);
	}
	if (bVar1 == Global_46796[1])
	{
		return Function_154(&Global_11222, &Global_13104, bParam3);
	}
	if (bVar1 == Global_46796[3])
	{
		return Function_154(&Global_11284, &Global_13196, bParam3);
	}
	if (bVar1 == Global_46796[2])
	{
		return Function_154(&Global_11398, &Global_13366, bParam3);
	}
	if (bVar1 == Global_46796[4])
	{
		return Function_154(&Global_11492, &Global_13504, bParam3);
	}
	if (bVar1 == Global_46816[0])
	{
		return Function_154(&Global_11544, &Global_13580, bParam3);
	}
	if (bVar1 == Global_46816[1])
	{
		return Function_154(&Global_11646, &Global_13732, bParam3);
	}
	if (bVar1 == Global_46816[2])
	{
		return Function_154(&Global_11704, &Global_13818, bParam3);
	}
	if (bVar1 == Global_46838[1])
	{
		return Function_154(&Global_11752, &Global_13888, bParam3);
	}
	if (bVar1 == Global_46850[0])
	{
		return Function_154(&Global_11836, &Global_14012, bParam3);
	}
	if (bVar1 == Global_46850[1])
	{
		return Function_154(&Global_11946, &Global_14176, bParam3);
	}
	if (bVar1 == Global_46850[2])
	{
		return Function_154(&Global_11988, &Global_14238, bParam3);
	}
	if (bVar1 == Global_46866[0])
	{
		return Function_154(&Global_12048, &Global_14326, bParam3);
	}
	if (bVar1 == Global_46894[2])
	{
		return Function_154(&Global_12284, &Global_14676, bParam3);
	}
	if (bVar1 == Global_46894[1])
	{
		return Function_154(&Global_12342, &Global_14762, bParam3);
	}
	if (bVar1 == Global_46894[3])
	{
		return Function_154(&Global_12392, &Global_14836, bParam3);
	}
	if (bVar1 == Global_46736[0])
	{
		return Function_154(&Global_11200, &Global_13072, bParam3);
	}
	if (bVar1 == Global_46736[1])
	{
		return Function_154(&Global_11482, &Global_13490, bParam3);
	}
	if (bVar1 == Global_46736[2])
	{
		return Function_154(&Global_11518, &Global_13542, bParam3);
	}
	if (bVar1 == Global_46736[3])
	{
		return Function_154(&Global_11826, &Global_13998, bParam3);
	}
	if (bVar1 == Global_46746[0])
	{
		return Function_154(&Global_12038, &Global_14312, bParam3);
	}
	if (bVar1 == Global_46746[2])
	{
		return Function_154(&Global_12274, &Global_14662, bParam3);
	}
	if (bVar1 == Global_46746[1])
	{
		return Function_154(&Global_12472, &Global_14954, bParam3);
	}
	return "";
}

var Function_154(struct<2>[] Param0, vector3[] vParam1, bool bParam2) //Position: 0x8976 / 35190
{
	int iVar0;
	
	iVar0 = bParam2;
	if (iVar0 <= Param0 || iVar0 > 0)
	{
		return "";
	}
	if (!Function_155(&(Param0[iVar02]), 2))
	{
		return "";
	}
	if (!IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
	{
		return "";
	}
	ACTIVATE_ACTOR_FOR_PERS_CHAR(&vParam1[iVar03] + 16);
	return &vParam1[iVar03] + 16;
}

bool Function_155(var uParam0, int iParam1) //Position: 0x89D0 / 35280
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_156(int iParam0) //Position: 0x89ED / 35309
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	iVar0 = 0;
	uVar1 = CREATE_OBJECT_ITERATOR(&Global_43578);
	ITERATE_ON_OBJECT_TYPE(&uVar1, 25);
	iVar2 = START_OBJECT_ITERATOR(&uVar1);
	if (&iParam0 == 0)
	{
		iVar0 = GET_NUM_ITERATOR_MATCHES(&uVar1);
	}
	else
	{
		while (IS_OBJECT_VALID(&iVar2))
		{
			if (Function_157(GET_SQUAD_FROM_OBJECT(&iVar2)) == &iParam0)
			{
				iVar0++;
			}
			iVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
		}
	}
	DESTROY_ITERATOR(&uVar1);
	return iVar0;
}

int Function_157(int iParam0) //Position: 0x8A55 / 35413
{
	var uVar0;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return 4294967295;
	}
	uVar0 = Function_79(&iParam0);
	if (!IS_ACTOR_VALID(&uVar0))
	{
		return 4294967295;
	}
	if (IS_ACTOR_RIDING_VEHICLE(&uVar0))
	{
		return 2;
	}
	if (IS_ACTOR_RIDING(&uVar0))
	{
		return 1;
	}
	return 4294967295;
}

bool Function_158(struct<2> Param0, int iParam2, bool bParam3) //Position: 0x8A93 / 35475
{
	var uVar0;
	int iVar2;
	bool bVar3;
	float fVar4;
	bool bVar5;
	
	if (&bParam3)
	{
		return 1;
	}
	bVar3 = false;
	Function_160(4294967295);
	iVar2 = 0;
	while (iVar2 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar25] + 16))
		{
			bVar5 = DECOR_GET_INT(&Global_39621[iVar25] + 16, "category");
			if (&iParam2 != 0)
			{
				if (bVar5 != &iParam2 && &iParam2 != 256)
				{
					bVar3 = true;
				}
			}
			GET_VOLUME_CENTER(&Global_39621[iVar25] + 16, &uVar0);
			if (&iParam2 != 262144)
			{
				if (IS_POINT_IN_VOLUME(Param0, &Global_39621[iVar25] + 16))
				{
					return 0;
				}
			}
			fVar4 = fParam1;
			if (bVar3)
			{
				fVar4 = (fVar4 + 170.0f);
			}
			if (Global_6629 && bVar5 != 512)
			{
			}
			else if (Function_159(&Param0, &uVar0) > fVar4)
			{
				return 0;
			}
		}
		iVar2++;
	}
	return 1;
}

float Function_159(struct<2> Param0) //Position: 0x8B6F / 35695
{
	struct<2> Var0;
	bool bVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	bVar2 = VMAG(Var0);
	return bVar2;
}

int Function_160(int iParam0) //Position: 0x8B8E / 35726
{
	int iVar0;
	struct<2> Var1;
	
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
			if (DECOR_CHECK_EXIST(&Global_39621[iVar05] + 16, "script"))
			{
				if (!IS_SCRIPT_VALID(DECOR_GET_INT(&Global_39621[iVar05] + 16, "script")))
				{
					GET_VOLUME_CENTER(&Global_39621[iVar05] + 16, &Var1);
					if (IS_BLIP_VALID(&Global_39621[iVar05] + 8))
					{
						REMOVE_BLIP(&Global_39621[iVar05] + 8);
					}
					if (!IS_ACTOR_VALID(&Global_54076))
					{
						Function_162(iVar0);
					}
					else if (Global_6629)
					{
						if (Function_161(StackVal, &Global_54076, Var1) < 25.0f)
						{
							Function_162(iVar0);
						}
					}
					else if (Function_161(StackVal, &Global_54076, Var1) < 55.0f)
					{
						Function_162(iVar0);
					}
				}
				else if (DECOR_GET_INT(&Global_39621[iVar05] + 16, "script") == &iParam0)
				{
					LOG_ERROR("duplicate script id..This should never happen...Tell Steve");
					PRINTSTRING("Duplicate Script Id:");
					PRINTINT(&iParam0);
					RELEASE_VOLUME(&Global_39621[iVar05] + 16);
				}
			}
		}
		else
		{
			Function_162(iVar0);
		}
		iVar0++;
	}
	return 0;
}

float Function_161(var uParam0, struct<2> Param1) //Position: 0x8CFC / 36092
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_76(&uParam0);
		Var0 = Function_76(&uParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

void Function_162(int iParam0) //Position: 0x8D73 / 36211
{
	if (IS_VOLUME_VALID(&Global_39621[iParam05] + 24))
	{
		REMOVE_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&Global_39621[iParam05] + 24, 0);
		REMOVE_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&Global_39621[iParam05] + 24);
	}
	if (IS_BLIP_VALID(&Global_39621[iParam05] + 8))
	{
		REMOVE_BLIP(&Global_39621[iParam05] + 8);
	}
	RELEASE_VOLUME(&Global_39621[iParam05] + 16);
	RELEASE_VOLUME(&Global_39621[iParam05] + 24);
	return;
}

bool Function_163(struct<2> Param0) //Position: 0x8DDB / 36315
{
	struct<9> Var0;
	
	iVar5 = 0;
	while (iVar5 <= Global_43791)
	{
		if (IS_VOLUME_VALID(&Global_44085[iVar59] + 8))
		{
			if (StackVal || (StackVal || StackVal != 3 != 4) != 5)
			{
				if (GET_OBJECT_TYPE(&Global_44085[iVar59] + 8) == 9)
				{
					GET_VOLUME_SCALE(&Global_44085[iVar59] + 8, &vVar0);
					GET_VOLUME_CENTER(&Global_44085[iVar59] + 8, &Var2);
					bVar4 = VDIST(Param0, Var2);
					if ((bVar4 - ((vVar0.x + vVar0.z) / 2.0f)) > 60.0f)
					{
						return 1;
					}
				}
			}
		}
		iVar5++;
	}
	return 0;
}

int Function_164(struct<2> Param0) //Position: 0x8E80 / 36480
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (IS_VOLUME_VALID(&Global_44085[iVar09] + 8))
		{
			if (IS_POINT_IN_VOLUME(Param0, &Global_44085[iVar09] + 8))
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

bool Function_165(struct<2> Param0) //Position: 0x8ECE / 36558
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (IS_VOLUME_VALID(&Global_44085[iVar09] + 8))
		{
			if (IS_POINT_IN_VOLUME(Param0, &Global_44085[iVar09] + 8))
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

bool Function_166(struct<2> Param0) //Position: 0x8F29 / 36649
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (IS_VOLUME_VALID(&Global_44085[iVar09] + 8))
		{
			if (IS_POINT_IN_VOLUME(Param0, &Global_44085[iVar09] + 8))
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

int Function_167(bool bParam0) //Position: 0x8FA8 / 36776
{
	float fVar0;
	bool bVar1;
	
	Function_23(&fVar0, &bVar1);
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER_PLAYER();
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	Function_170(0);
	AMBIENT_ENABLE_QUADRANT_FILTER(1);
	AMBIENT_SET_QUADRANT_FILTER(1, 0, 0, 0);
	if ((&bParam0 + 72 + 84)->f_44 == 0.0f)
	{
		if ((&bParam0 + 72 + 84)->f_48 == 0.0f)
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, (&bParam0 + 72 + 84)->f_44, (&bParam0 + 72 + 84)->f_48);
		}
		else
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(StackVal, 0.0f, (&bParam0 + 72 + 84)->f_44);
		}
	}
	else
	{
		Function_169(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, (&bParam0 + 72 + 84));
	}
	if ((&bParam0 + 72 + 84)->f_52 == 0.0f)
	{
		if ((&bParam0 + 72 + 84)->f_56 == 0.0f)
		{
			AMBIENT_SET_BUMP_FILTER(0.0f, (&bParam0 + 72 + 84)->f_52, (&bParam0 + 72 + 84)->f_56);
		}
		else
		{
			AMBIENT_SET_BUMP_FILTER(StackVal, 0.0f, (&bParam0 + 72 + 84)->f_52);
		}
	}
	Function_168(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&bParam0 + 72 + 84));
	AMBIENT_SET_ONESHOT_QUERIES(0);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	if (Global_47151[34])
	{
		PRINTSTRING("HeightDeviation is set to:");
		PRINTFLOAT((&bParam0 + 72 + 84)->f_28);
		PRINTNL();
		PRINTSTRING("Elevation Derivative is set to:");
		PRINTFLOAT((&bParam0 + 72 + 84)->f_36);
		PRINTNL();
	}
	if ((&bParam0 + 72 + 84)->f_28 == 0.0f)
	{
		UNK_0x0AC99007(StackVal, (&bParam0 + 72 + 84)->f_28);
		UNK_0x30C67D05(1);
	}
	if ((&bParam0 + 72 + 84)->f_36 == 0.0f)
	{
		AMBIENT_SET_ELEVATION_DERIVATIVE_IN_AREA_FILTER((&bParam0 + 72 + 84)->f_36, (&bParam0 + 72 + 84)->f_40);
		AMBIENT_ENABLE_ELEVATION_DERIVATIVE_IN_AREA_FILTER(1);
	}
	if (AMBIENT_GET_POINT(&bParam0 + 16, 0))
	{
		return 1;
	}
	return 0;
}

void Function_168(struct<33> Param0) //Position: 0x915A / 37210
{
	if (StackVal && StackVal != 4294967295 != 0)
	{
		if (Param0.f_20 > 1.0f)
		{
			if (Global_47151[34])
			{
				PRINTSTRING("Material Match: ");
				PRINTINT(StackVal);
				PRINTNL();
			}
			AMBIENT_SET_MATERIAL_AT_POINT_FILTER(StackVal);
		}
		else
		{
			if (Global_47151[34])
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
		if (Global_47151[34])
		{
			PRINTSTRING("Material NoMatch: ");
			PRINTINT(Param0.f_16);
			PRINTSTRING("n, Radius ");
			PRINTFLOAT(Param0.f_32);
			PRINTNL();
		}
		AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(Param0.f_16, Param0.f_32, 0);
	}
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(StackVal, 1,43493E-42f, 1);
}

void Function_169(struct<5> Param0, var uParam5, var uParam6, var uParam7) //Position: 0x9286 / 37510
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

void Function_170(float fParam0) //Position: 0x92D7 / 37591
{
	if (&fParam0 < 0,1f)
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * &fParam0), &fParam0);
	}
	else if (Global_6629)
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * 10.0f), 10.0f);
	}
	else
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * 10.0f), 10.0f);
	}
	return;
}

int Function_171(int iParam0, struct<2> Param1) //Position: 0x931E / 37662
{
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER(Param1);
	if (Global_47151[34])
	{
		PRINTVECTOR(Param1);
		PRINTNL();
	}
	Function_173();
	Function_170(0);
	Function_172(0);
	if ((&iParam0 + 72 + 84)->f_44 == 0.0f)
	{
		if ((&iParam0 + 72 + 84)->f_48 == 0.0f)
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, (&iParam0 + 72 + 84)->f_44, (&iParam0 + 72 + 84)->f_48);
		}
		else
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(StackVal, 0.0f, (&iParam0 + 72 + 84)->f_44);
		}
	}
	else
	{
		Function_169(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iParam0 + 72 + 84));
	}
	if ((&iParam0 + 72 + 84)->f_52 == 0.0f)
	{
		if ((&iParam0 + 72 + 84)->f_56 == 0.0f)
		{
			AMBIENT_SET_BUMP_FILTER(0.0f, (&iParam0 + 72 + 84)->f_52, (&iParam0 + 72 + 84)->f_56);
		}
		else
		{
			AMBIENT_SET_BUMP_FILTER(StackVal, 0.0f, (&iParam0 + 72 + 84)->f_52);
		}
	}
	Function_168(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iParam0 + 72 + 84));
	AMBIENT_SET_ONESHOT_QUERIES(0);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	if (Global_47151[34])
	{
		PRINTSTRING("HeightDeviation is set to:");
		PRINTFLOAT((&iParam0 + 72 + 84)->f_28);
		PRINTNL();
		PRINTSTRING("Elevation Derivative is set to:");
		PRINTFLOAT((&iParam0 + 72 + 84)->f_36);
		PRINTNL();
	}
	if ((&iParam0 + 72 + 84)->f_28 == 0.0f)
	{
		UNK_0x0AC99007(StackVal, (&iParam0 + 72 + 84)->f_28);
		UNK_0x30C67D05(1);
	}
	if ((&iParam0 + 72 + 84)->f_36 == 0.0f)
	{
		AMBIENT_SET_ELEVATION_DERIVATIVE_IN_AREA_FILTER((&iParam0 + 72 + 84)->f_36, (&iParam0 + 72 + 84)->f_40);
		AMBIENT_ENABLE_ELEVATION_DERIVATIVE_IN_AREA_FILTER(1);
	}
	if (AMBIENT_GET_POINT(&iParam0 + 16, 0))
	{
		return 1;
	}
	return 0;
}

void Function_172(bool bParam0) //Position: 0x94D3 / 38099
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

void Function_173() //Position: 0x9586 / 38278
{
	AMBIENT_SET_DISTANCE_FILTER(0.0f, 24.0f);
	return;
}

struct<8> Function_174(struct<2> Param0) //Position: 0x9595 / 38293
{
	var uVar0;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	var uVar7;
	struct<2> Var8;
	float fVar10;
	float fVar11;
	var uVar12;
	var uVar14;
	var uVar16;
	bool bVar18;
	bool bVar21;
	
	uVar7 = START_CURVE_QUERY(&Global_43578, Param0, 48, 0.0f, 7.0f, 5.0f, 0);
	if (!GET_NUM_CURVES_IN_CURVE_QUERY(&uVar7) < 0)
	{
		UNK_0xDF93BD7C(&uVar7);
		Var8 = Vector(0.0f, 0.0f, 0.0f);
		return StackVal, Var8;
	}
	GET_POINT_FROM_CURVE_QUERY(&uVar7, false, &uVar0);
	uVar3 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(&uVar7, false);
	if (IS_OBJECT_VALID(&uVar3))
	{
		uVar12 = Param1;
		UNK_0x19D652F9(&uVar3, 50.0f, &uVar0, &bVar18);
		UNK_0x19D652F9(&uVar3, -50.0f, &uVar0, &bVar21);
		Function_141(&bVar18);
		uVar14 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Function_141(&bVar18), StackVal);
		Function_141(&bVar21);
		uVar16 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Function_141(&bVar21), StackVal);
		fVar11 = VDOT(&uVar12, &uVar14);
		fVar10 = VDOT(&uVar12, &uVar16);
		Function_23(&fVar4, &fVar5);
		fVar6 = ((fVar4 + fVar5) / 2.0f);
		if (fVar11 > 0.0f && fVar10 > 0.0f)
		{
			UNK_0xDF93BD7C(&uVar7);
			Var8 = Vector(0.0f, 0.0f, 0.0f);
			return StackVal, Var8;
		}
		if (fVar11 > fVar10)
		{
			UNK_0x19D652F9(&uVar3, (fVar6 * -1.0f), &uVar0, &bVar21);
			Function_141(&bVar21);
			Var8 = Function_141(&bVar21);
		}
		else
		{
			UNK_0x19D652F9(&uVar3, fVar6, &uVar0, &bVar18);
			Function_141(&bVar18);
			Var8 = Function_141(&bVar18);
		}
	}
	UNK_0xDF93BD7C(&uVar7);
	return StackVal, Var8;
}

bool Function_175(bool bParam0) //Position: 0x96AF / 38575
{
	if (bParam0 > 0 || bParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_176(var uParam0, struct<2> Param1, float fParam3, bool bParam4, var uParam5) //Position: 0x96C5 / 38597
{
	float fVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	struct<2> Var5;
	
	fVar4 = 50.0f;
	bVar3 = -1.0f;
	fVar0 = START_OBJECT_ITERATOR(&uParam0);
	while (IS_OBJECT_VALID(&fVar0))
	{
		GET_OBJECT_POSITION(&fVar0, &Var5);
		bVar2 = VDIST(Var5, Param1);
		if (DECOR_CHECK_EXIST(&fVar0, &bParam4))
		{
			if ((DECOR_GET_INT(&fVar0, &bParam4) && uParam5) >= 0)
			{
				if (bVar2 < fParam3)
				{
					if (bVar3 > 0.0f || bVar2 > bVar3)
					{
						if (Function_158(&Var5, &fVar4, 0, 0))
						{
							bVar3 = bVar2;
							uVar1 = &fVar0;
							PRINTSTRING("Assigning new closestObject ");
							PRINTNL();
						}
					}
				}
			}
		}
		fVar0 = OBJECT_ITERATOR_NEXT(&uParam0);
	}
	return &uVar1;
}

var Function_177(var uParam0, struct<2> Param1, float fParam3) //Position: 0x977A / 38778
{
	float fVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	struct<2> Var5;
	
	bVar3 = -1.0f;
	fVar0 = START_OBJECT_ITERATOR(&uParam0);
	while (IS_OBJECT_VALID(&fVar0))
	{
		GET_OBJECT_POSITION(&fVar0, &Var5);
		bVar2 = VDIST(Var5, Param1);
		if (bVar2 < fParam3)
		{
			if (bVar3 > 0.0f || bVar2 > bVar3)
			{
				if (Function_158(&Var5, &uVar4, 0, 0))
				{
					bVar3 = bVar2;
					uVar1 = &fVar0;
					PRINTSTRING("Assigning new closestObject ");
					PRINTNL();
				}
			}
		}
		fVar0 = OBJECT_ITERATOR_NEXT(&uParam0);
	}
	return &uVar1;
}

var Function_178() //Position: 0x980C / 38924
{
	float fVar0;
	int iVar1;
	
	if (Global_6612)
	{
		return 0.0f;
	}
	Function_23(&fVar0, &iVar1);
	if (fVar0 >= 50.0f)
	{
		return (fVar0 - 10.0f);
	}
	return (fVar0 - 20.0f);
}

var Function_179(var uParam0, struct<2> Param1, float fParam3, bool bParam4, var uParam5) //Position: 0x983D / 38973
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
		if (DECOR_CHECK_EXIST(&fVar0, &bParam4))
		{
			if ((DECOR_GET_INT(&fVar0, &bParam4) && uParam5) >= 0)
			{
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
			}
		}
		fVar0 = OBJECT_ITERATOR_NEXT(&uParam0);
	}
	return &uVar1;
}

var Function_180(var uParam0, struct<2> Param1, float fParam3) //Position: 0x98DF / 39135
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

int Function_181(int iParam0) //Position: 0x9965 / 39269
{
	if (IS_ITERATOR_VALID(&iParam0))
	{
		ITERATE_EVERYWHERE(&iParam0);
		ITERATE_ON_PARTIAL_NAME(&iParam0, Function_98());
		ITERATE_ON_PARTIAL_MODEL_NAME(&iParam0, Function_98());
		ITERATE_ON_OBJECT_TYPE(&iParam0, 4294967295);
		return 1;
	}
	return 0;
}

int Function_182(var uParam0, int iParam1) //Position: 0x999B / 39323
{
	int iVar0;
	var uVar1;
	
	if (!IS_VOLUME_VALID(&uParam0))
	{
		LOG_ERROR("Passed an invalid volume into ADD_AMBIENT_VOLUME_RESTRICTION");
	}
	if (DECOR_CHECK_EXIST(&uParam0, "script"))
	{
		if (!IS_SCRIPT_VALID(DECOR_GET_INT(&uParam0, "script")))
		{
			LOG_ERROR("Passed an invalid script ID into ADD_AMBIENT_VOLUME_RESTRICTION");
		}
	}
	GET_VOLUME_CENTER(&uParam0, &uVar1);
	Function_160(DECOR_GET_INT(&uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
		}
		else
		{
			Function_183(iVar0, &uParam0, &uVar1, &iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(&uParam0);
	return 0;
}

void Function_183(int iParam0, var uParam1, struct<2> Param2) //Position: 0x9B05 / 39685
{
	struct<8> Var0;
	
	*(&Global_39621[iParam05] + 16) = &uParam1;
	Global_39621[iParam05].f_32 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_201("stayout") };
	*(&Global_39621[iParam05] + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_39615, &Var0, 3, Param2, Vector(0.0f, 0.0f, 0.0f), Vector(12.0f, 5.0f, 12.0f));
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&Global_39621[iParam05] + 24, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&Global_39621[iParam05] + 24);
	if (&bParam3)
	{
		*(&Global_39621[iParam05] + 8) = ADD_BLIP_FOR_COORD(&Param2, 403, 0, 2, 0);
		SET_BLIP_BLINK(&Global_39621[iParam05] + 8, 1, 1, 20.0f);
	}
}

var Function_184(var uParam0, struct<2> Param1) //Position: 0x9BAD / 39853
{
	struct<2> Var0;
	var uVar2;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		GET_POSITION(&uParam0, &Var0);
		Function_185(StackVal, StackVal, Var0, Param1, &uVar2);
		return UNK_0x9C40E671(&uVar2);
	}
	return 0.0f;
}

void Function_185(var uParam0, float fParam1, float fParam2, float fParam3, var uParam4) //Position: 0x9BDB / 39899
{
	uParam4 = Vector((GET_X(&fParam2) - GET_X(&uParam0)), 0.0f, (GET_Z(&fParam2) - GET_Z(&uParam0)));
}

bool Function_186(struct<2>[] Param0) //Position: 0x9BFF / 39935
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_191();
	iVar1 = 0;
	if (!Function_4(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_190(&(Param0[iVar02]), 8);
		}
		else if (Function_189())
		{
			iVar1 = 1;
			Function_190(&(Param0[iVar02]), 8);
		}
		Function_190(&(Param0[iVar02]), 16);
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
				Function_190(&(Param0[iVar02]), 1);
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
							Function_190(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_190(&(Param0[iVar02]), 2);
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
							Function_190(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_190(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_190(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_190(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_190(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_190(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_190(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_190(&(Param0[iVar02]), 2);
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
	Function_187();
	return 1;
}

void Function_187() //Position: 0x9FC1 / 40897
{
	if (!Function_188(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_188(int iParam0) //Position: 0xA001 / 40961
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_189() //Position: 0xA01D / 40989
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

void Function_190(struct<13> Param0) //Position: 0xA04B / 41035
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_191() //Position: 0xA05E / 41054
{
	if (!Function_188(128))
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

void Function_192(var[] uParam0, int iParam1) //Position: 0xA0A0 / 41120
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(uParam0[iVar0]);
		iVar0++;
	}
	return;
}

bool Function_193(int iParam0) //Position: 0xA0C3 / 41155
{
	if (!iParam0 != 0)
	{
		LOG_ERROR("Asking about a player with an index not = 0. Multiplayer Law Enforcement not yet implemented.");
		return 0;
	}
	return Global_6646;
}

var Function_194(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xA139 / 41273
{
	return Function_88(StackVal, uParam0, uParam1, &uParam2, &uParam3, &uParam4, 0, Vector(0.0f, 0.0f, 0.0f));
}

int Function_195(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0xA156 / 41302
{
	int iVar0;
	bool bVar1[40];
	int iVar42;
	bool bVar43;
	int iVar44;
	var uVar45;
	bool bVar46;
	
	if (iParam0 < 4294967295)
	{
		return 4294967295;
	}
	if (iParam1 > 1311)
	{
		return 4294967295;
	}
	if (&iParam2 > 4294967295 || &iParam2 <= 1311)
	{
		return 4294967295;
	}
	iVar0 = (iParam1 - iParam0) + 1;
	if (iVar0 < 40 || iVar0 > 1)
	{
		LOG_ERROR("GET_RANDOM_ACTORENUM_FILTERED passed a range with more than 40 enums or less than 1");
		return 4294967295;
	}
	iVar44 = 0;
	iVar42 = 0;
	while (iVar42 <= iVar0)
	{
		bVar43 = (iParam0 + iVar42);
		if (((bVar43 == &iParam2 && bVar43 == &iParam3) && bVar43 == &iParam4) && !STRING_CONTAINS_STRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(bVar43), "_cs"))
		{
			bVar1[iVar44] = bVar43;
			iVar44++;
		}
		iVar42++;
	}
	if (iVar44 == 0)
	{
		return 4294967295;
	}
	bVar46 = RAND_INT_RANGE(false, (iVar44 - 1));
	uVar45 = bVar1[bVar46];
	return uVar45;
}

var Function_196(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xA271 / 41585
{
	int iVar0;
	
	bParam2 = &bParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_4(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = bParam1;
			Param0[iVar02].f_8 = 3;
			Function_190(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_190(&(Param0[iVar02]), 8);
			}
			return iVar0;
		}
		if (bParam1 == &Param0[iVar02])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

bool Function_197() //Position: 0xA34D / 41805
{
	return (RAND_INT_RANGE(false, 1999) / 1000) != 0;
}

var Function_198(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0xA360 / 41824
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_199(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_190(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_199(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0xA39E / 41886
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_4(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_190(&(Param0[iVar02]), 4);
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

bool Function_200(int iParam0) //Position: 0xA46D / 42093
{
	bool bVar0;
	
	switch (iParam0)
	{
		case 0x00000001:
			bVar0 = IS_POPSET_VALID(&(Global_46972[0]));
			break;
		
		case 0x00000002:
			bVar0 = IS_POPSET_VALID(&(Global_46972[1]));
			break;
		
		case 0x00000004:
			bVar0 = IS_POPSET_VALID(&(Global_46972[2]));
			break;
		
		case 0x00000008:
			bVar0 = IS_POPSET_VALID(&(Global_46972[3]));
			break;
		
		case 0x00000010:
			bVar0 = IS_POPSET_VALID(&(Global_46972[4]));
			break;
		
		case 0x00000020:
			bVar0 = IS_POPSET_VALID(&(Global_46972[5]));
			break;
		
		case 0x00000040:
			bVar0 = IS_POPSET_VALID(&(Global_46972[6]));
			break;
		
		case 0x00000080:
			bVar0 = IS_POPSET_VALID(&(Global_46972[7]));
			break;
		
		case 0x00000100:
			bVar0 = IS_POPSET_VALID(&(Global_46972[8]));
			break;
		
		case 0x00000200:
			bVar0 = IS_POPSET_VALID(&(Global_46972[9]));
			break;
		
		case 0x00000400:
			bVar0 = IS_POPSET_VALID(&(Global_46972[10]));
			break;
		
		case 0x00000800:
			bVar0 = IS_POPSET_VALID(&(Global_46972[11]));
			break;
		
		case 0x00001000:
			bVar0 = IS_POPSET_VALID(&(Global_46972[12]));
			break;
		
		case 0x00002000:
			bVar0 = IS_POPSET_VALID(&(Global_46972[13]));
			break;
		
		case 0x40000000:
			bVar0 = false;
			break;
		
		default:
			LOG_ERROR("Unhandled case in IS_POPSET_TYPES_FLAG_VALID.");
			bVar0 = false;
			break;
	}
	return bVar0;
}

struct<32> Function_201(char* cParam0) //Position: 0xA5ED / 42477
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_202("0", &cVar8, ""), 4);
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

struct<32> Function_202(char* cParam0) //Position: 0xA659 / 42585
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

