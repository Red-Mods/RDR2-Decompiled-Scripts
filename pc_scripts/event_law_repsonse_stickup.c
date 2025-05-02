//Decompiled with MagicRDR v1.0
//Function Count : 159
//Statics Count : 513
//Natives Count : 338
//Parameters Count : 36

#region Local Var
	float fLocal_0 = 0.0f;
	var uLocal_1 = 0;
	struct<1869> Local_2 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	float fVar1;
	var uVar2;
	var uVar3;
	
	iVar0 = 0;
	iLocal_476 = 0;
	Function_156(&Local_2);
	Function_154(&Local_2 + 1408, "stand_surrender", 5, 0);
	Function_154(&Local_2 + 1408, "BankRobbery_Cower", 5, 0);
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		uVar3 = Function_144(4, 0, 0, 4294967295, 0);
		Function_143(&Local_2 + 1408, uVar3, 3, 0);
		(*&Local_2 + 1656)[iVar0] = uVar3;
		iVar0++;
	}
	while (!IS_EXITFLAG_SET())
	{
		switch (iLocal_476)
		{
			case 0x00000000:
				if (Function_138(&Local_2 + 1408))
				{
					Function_137(&Local_2);
					Local_2.f_128 = 1;
					Function_136(&Local_2);
					Function_135(&Local_2);
					Function_133(4);
					iLocal_476 = 2;
				}
				break;
			
			case 0x00000001:
				break;
			
			case 0x00000002:
				Function_132(&Local_2);
				Function_130(&Local_2);
				Function_129(&Local_2 + 16, 345, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				Function_129(&Local_2 + 24, 345, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				Function_128(&Local_2 + 1388);
				Function_127(1);
				iLocal_476 = 3;
				break;
			
			case 0x00000003:
				Local_2.f_128 = Function_55(&Local_2);
				switch (Local_2.f_128)
				{
					case 0x00000001:
						break;
					
					case 0x00000003:
						iLocal_476 = 5;
						break;
					
					case 0x00000006:
						break;
					
					case 0x00000008:
						break;
					
					case 0x00000009:
						break;
					
					case 0x0000000A:
						if (!Local_2.f_1868)
						{
							uVar2 = Function_54(&ScriptParam_0);
							if (IS_SCRIPT_VALID(&uVar2))
							{
								Local_2.f_1868 = 1;
							}
						}
						break;
					
					case 0x00000005:
						break;
					
					case 0x00000004:
						break;
					
					case 0x0000000B:
						break;
					
					case 0x0000000C:
						if (!IS_SCRIPT_VALID(&uVar2) && !Local_2.f_1868)
						{
							uVar2 = Function_54(&ScriptParam_0);
							if (IS_SCRIPT_VALID(&uVar2))
							{
								Local_2.f_1868 = 1;
							}
						}
						break;
					
					case 0x0000000D:
						break;
					
					case 0x0000000E:
						if (!IS_SCRIPT_VALID(&uVar2) && !Local_2.f_1868)
						{
							uVar2 = Function_54(&ScriptParam_0);
							if (IS_SCRIPT_VALID(&uVar2))
							{
								Local_2.f_1868 = 1;
							}
						}
						else if (!IS_SCRIPT_VALID(&uVar2) && Local_2.f_1868)
						{
							iLocal_476 = 5;
						}
						break;
					
					case 0x0000000F:
						Function_52(1);
						Local_2.f_128 = 16;
						break;
					
					case 0x00000010:
						Function_45(0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
						Function_44(GET_PLAYER_ACTOR(0));
						ACTOR_HOLSTER_WEAPON(GET_PLAYER_ACTOR(0), 1);
						if (!IS_ACTOR_RIDING(GET_PLAYER_ACTOR(0)))
						{
							SET_ANIM_SET_FOR_ACTOR(GET_PLAYER_ACTOR(0), "stand_surrender", 0);
							SET_ACTION_NODE_FOR_ACTOR(GET_PLAYER_ACTOR(0), "stand_surrender/surrender");
						}
						fVar1 = GET_CURRENT_GAME_TIME();
						Local_2.f_128 = 17;
						break;
					
					case 0x00000011:
						if (fVar1 + 5.0f) > GET_CURRENT_GAME_TIME()
						{
							HUD_FADE_OUT(2,5f, 1f, 1);
							Local_2.f_128 = 18;
						}
						break;
					
					case 0x00000012:
						if (HUD_IS_FADED())
						{
							Function_23(1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1);
							CAMERA_RESET(0);
							RESET_ANIM_SET_FOR_ACTOR(GET_PLAYER_ACTOR(0), 0);
							iLocal_476 = 5;
						}
						break;
					
					case 0x00000013:
						Function_52(1);
						Local_2.f_128 = 20;
						break;
					
					case 0x00000014:
						Function_45(0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
						Function_44(GET_PLAYER_ACTOR(0));
						ACTOR_HOLSTER_WEAPON(GET_PLAYER_ACTOR(0), 1);
						HOGTIE_ACTOR(GET_PLAYER_ACTOR(0));
						fVar1 = GET_CURRENT_GAME_TIME();
						Local_2.f_128 = 21;
						break;
					
					case 0x00000015:
						if (fVar1 + 5.0f) > GET_CURRENT_GAME_TIME()
						{
							HUD_FADE_OUT(2,5f, 1f, 1);
							Local_2.f_128 = 22;
						}
						break;
					
					case 0x00000016:
						if (HUD_IS_FADED())
						{
							Function_23(1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1);
							REMOVE_CAMERA_FROM_CHANNEL(&fLocal_0, 0);
							FREE_FROM_HOGTIE(GET_PLAYER_ACTOR(0));
							iLocal_476 = 5;
						}
						break;
					
					case 0x00000017:
						iLocal_476 = 5;
						break;
					
					case 0x00000018:
						iLocal_476 = 5;
						break;
					
					case 0x00000019:
						break;
					
					case 0x0000001A:
						iLocal_476 = 5;
						break;
					
					default:
						break;
				}
				break;
			
			case 0x00000005:
				if (Local_2.f_1852 || Local_2.f_1860)
				{
					Function_19(0);
					Function_18(1024);
					Function_18(2048);
					Global_40060.f_4424 = ScriptParam_0.f_116;
				}
				iLocal_476 = 6;
				break;
			
			case 0x00000006:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
			
			default:
				break;
		}
		WAIT(500);
	}
	Function_14(&Local_2 + 1408);
	Function_3(&Local_2);
	Function_1(4);
	if (IS_SCRIPT_VALID(&uVar2))
	{
		TERMINATE_SCRIPT(&uVar2);
	}
	TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x47E / 1150
{
	Function_2(&Global_43580, iParam0);
	return;
}

void Function_2(var uParam0, int iParam1) //Position: 0x48C / 1164
{
	uParam0 = (uParam0 || iParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_3(int iParam0) //Position: 0x4AB / 1195
{
	bool bVar0;
	int iVar1;
	
	if (Function_13(&iParam0 + 16) >= 0)
	{
		bVar0 = false;
		while (bVar0 <= Function_13(&iParam0 + 16))
		{
			iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0 + 16, bVar0);
			if (IS_ACTOR_VALID(&iVar1))
			{
				TASK_CLEAR(&iVar1);
				RELEASE_ACTOR(&iVar1);
			}
			bVar0++;
		}
	}
	if (Function_13(&iParam0 + 24) >= 0)
	{
		bVar0 = false;
		while (bVar0 <= Function_13(&iParam0 + 24))
		{
			iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0 + 24, bVar0);
			if (IS_ACTOR_VALID(&iVar1))
			{
				TASK_CLEAR(&iVar1);
				RELEASE_ACTOR(&iVar1);
			}
			bVar0++;
		}
	}
	if (Function_13(&iParam0 + 40) >= 0)
	{
		bVar0 = false;
		while (bVar0 <= 3)
		{
			iVar1 = &iParam0 + 920[bVar05];
			if (IS_ACTOR_VALID(&iVar1))
			{
				TASK_CLEAR(&iVar1);
				RELEASE_ACTOR(&iVar1);
			}
			iVar1 = &iParam0 + 920[bVar05] + 8;
			if (IS_ACTOR_VALID(&iVar1))
			{
				TASK_CLEAR(&iVar1);
				RELEASE_ACTOR(&iVar1);
			}
			bVar0++;
		}
	}
	if (Function_13(&iParam0 + 32) >= 0)
	{
		bVar0 = false;
		while (bVar0 <= Function_13(&iParam0 + 32))
		{
			iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0 + 32, bVar0);
			if (IS_ACTOR_VALID(&iVar1))
			{
				TASK_CLEAR(&iVar1);
				Function_4(&Global_11544, &Global_13580, &iVar1, 0);
			}
			bVar0++;
		}
	}
	bVar0 = false;
	while (bVar0 <= 10)
	{
		iVar1 = &iParam0 + 136[bVar04];
		if (IS_ACTOR_VALID(&iVar1))
		{
			TASK_CLEAR(&iVar1);
			Function_4(&Global_11544, &Global_13580, &iVar1, 0);
		}
		bVar0++;
	}
	if (IS_ACTOR_VALID(&iParam0 + 56))
	{
		TASK_CLEAR(&iParam0 + 56);
		RELEASE_ACTOR(&iParam0 + 56);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&iParam0 + 64))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&iParam0 + 64);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&iParam0 + 72))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&iParam0 + 72);
	}
	RELEASE_LAYOUT_OBJECTS(&iParam0);
	RELEASE_LAYOUT_REF(&iParam0);
	return;
}

void Function_4(var uParam0, vector3[] vParam1, int iParam2, bool bParam3) //Position: 0x68F / 1679
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= uParam0)
	{
		if (IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
		{
			if (GET_ACTOR_FROM_PERS_CHAR(&vParam1[iVar03] + 16) == &iParam2)
			{
				Function_5(&uParam0, &vParam1, iVar0, &bParam3);
			}
		}
		iVar0++;
	}
}

void Function_5(struct<2>[] Param0, vector3[] vParam1, int iParam2, bool bParam3) //Position: 0x6E0 / 1760
{
	int iVar0;
	
	iVar0 = iParam2;
	if (!iVar0 > Param0 && iVar0 <= 0)
	{
		return;
	}
	if (!Function_12(&(Param0[iVar02]), 1))
	{
		return;
	}
	if (!Function_12(&(Param0[iVar02]), 2))
	{
		return;
	}
	if (Function_12(&(Param0[iVar02]), 8))
	{
		STREAMING_EVICT_ACTOR(vParam1[iVar03], 4294967295);
		Function_11(&(Param0[iVar02]), 8);
	}
	Function_11(&(Param0[iVar02]), 1);
	if (!IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
	{
		return;
	}
	Function_10(&vParam1[iVar03] + 16);
	if (&bParam3)
	{
		Function_6(&Param0, &vParam1, iParam2, 0);
	}
}

void Function_6(struct<2>[] Param0, vector3[] vParam1, int iParam2, bool bParam3) //Position: 0x788 / 1928
{
	if (IS_PERS_CHAR_VALID(&vParam1[iParam23] + 16))
	{
		if (!IS_PERS_CHAR_ALIVE(&vParam1[iParam23] + 16))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(&vParam1[iParam23] + 16) > GET_CURRENT_GAME_TIME())
			{
				Function_9(&(Param0[iParam22]), 4);
				*(&Param0[iParam22] + 8) = GET_TIME_OF_DAY();
				ADD_TIME(&Param0[iParam22] + 8, Function_8(Global_43790), Function_7(Global_43790), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_12(&(Param0[iParam22]), 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(&vParam1[iParam23] + 16, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(&vParam1[iParam23] + 16);
			(&vParam1[iParam23] + 16) = "";
		}
	}
	else if (!Function_12(&(Param0[iParam22]), 1) && !&bParam3)
	{
		Function_9(&(Param0[iParam22]), 4);
		*(&Param0[iParam22] + 8) = GET_TIME_OF_DAY();
		ADD_TIME(&Param0[iParam22] + 8, Function_8(Global_43790), Function_7(Global_43790), false, 0);
	}
}

int Function_7(int iParam0) //Position: 0x8EE / 2286
{
	switch (iParam0)
	{
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
			return 0;
			break;
		
		default:
			return 12;
			break;
	}
	return 0;
}

int Function_8(int iParam0) //Position: 0x919 / 2329
{
	switch (iParam0)
	{
		case 0x00000003:
			return 5;
			break;
		
		case 0x00000004:
			return 3;
			break;
		
		case 0x00000005:
			break;
			return 1;
		
		default:
			return 0;
			break;
	}
	return 0;
}

void Function_9(var uParam0, int iParam1) //Position: 0x94D / 2381
{
	uParam0 = (uParam0 || iParam1);
	return;
}

int Function_10(int iParam0) //Position: 0x95E / 2398
{
	var uVar0;
	var uVar1;
	
	if (IS_PERS_CHAR_VALID(&iParam0))
	{
		SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&iParam0, 0);
		uVar0 = GET_ACTOR_FROM_PERS_CHAR(&iParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			TASK_CLEAR(&uVar0);
			DEREFERENCE_ACTOR(&uVar0);
			TASK_PRIORITY_SET(&uVar0, 3);
			SET_ACTOR_UPDATE_PRIORITY(&uVar0, 2);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(&uVar0, 0);
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&uVar0, 1);
		}
		uVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&iParam0), "Persistent_Char_Brain");
		if (IS_OBJECT_VALID(&uVar1))
		{
			return GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(&uVar1), "ScriptStructure", "stolen_flag", 0);
		}
	}
	return 0;
}

void Function_11(var uParam0, int iParam1) //Position: 0xA07 / 2567
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_12(var uParam0, int iParam1) //Position: 0xA21 / 2593
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_13(int iParam0) //Position: 0xA3E / 2622
{
	int iVar0;
	
	iVar0 = 0;
	if (SQUAD_IS_VALID(&iParam0))
	{
		iVar0 = SQUAD_GET_SIZE(&iParam0);
	}
	else
	{
		LOG_ERROR("STICKUP_GetSquadSize: Invalid squad passed in.");
	}
	return iVar0;
}

void Function_14(int iParam0) //Position: 0xA91 / 2705
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_15(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_15(struct<2>[] Param0, int iParam1) //Position: 0xAB9 / 2745
{
	if (Function_17(&(Param0[iParam12]), 4))
	{
		if (Function_17(&(Param0[iParam12]), 1))
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
			Function_16(&(Param0[iParam12]), 1);
			Function_16(&(Param0[iParam12]), 2);
			Function_16(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_16(struct<13> Param0) //Position: 0xC04 / 3076
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_17(struct<13> Param0) //Position: 0xC21 / 3105
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_18(int iParam0) //Position: 0xC3F / 3135
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_19(bool bParam0) //Position: 0xC52 / 3154
{
	if (Global_6646 == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		Global_6646 = 1;
		if (!Global_42250)
		{
			if (IS_FACTION_VALID(Global_40000))
			{
				SET_FACTIONS_STATUS_TWO_WAY(Global_40000, 2, 6);
			}
		}
		Global_21575 = 0;
	}
	else
	{
		Global_6646 = 0;
		Global_6648 = 0;
		Function_20();
		if (IS_FACTION_VALID(Global_40000))
		{
			SET_FACTIONS_STATUS_TWO_WAY(Global_40000, 2, 2);
		}
		SET_FACTIONS_STATUS_TWO_WAY(8, 2, 2);
		SET_FACTIONS_STATUS_TWO_WAY(10, 2, 2);
		if (IS_SCRIPT_VALID(&Global_39922 + 96))
		{
			TERMINATE_SCRIPT(&Global_39922 + 96);
		}
		if (IS_SCRIPT_VALID(&Global_39922 + 104))
		{
			TERMINATE_SCRIPT(&Global_39922 + 104);
		}
		Global_21575 = 4294967295;
	}
	return;
}

void Function_20() //Position: 0xCE1 / 3297
{
	int iVar0;
	
	Global_41176 = Function_21(StackVal);
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

int Function_21(int iParam0) //Position: 0xD2F / 3375
{
	if (!Function_22(iParam0))
	{
		return 0;
	}
	return Global_40060[iParam0];
}

bool Function_22(bool bParam0) //Position: 0xD47 / 3399
{
	if (bParam0 > 0 || bParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_23(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10) //Position: 0xD5C / 3420
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
		uVar0 = Function_43();
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
		Function_27(21, 1, 0, 0);
	}
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (&bParam7)
	{
		Function_26();
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
	Function_24(&iParam9, &iParam10);
}

void Function_24(var uParam0, bool bParam1) //Position: 0xE2B / 3627
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
		Function_25();
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

void Function_25() //Position: 0xEFA / 3834
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

void Function_26() //Position: 0xF72 / 3954
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

int Function_27(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0xF87 / 3975
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
	Function_42(iParam0, TO_FLOAT(bParam1), 1);
	Function_41(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_29(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_28(iParam0);
	return 1;
}

void Function_28(bool bParam0) //Position: 0x11AF / 4527
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

void Function_29(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x124D / 4685
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_40(390))), 32);
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
					fVar19 = (Function_39(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_39(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_37(iParam0, fVar19, fVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_34(fVar19, fParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&uParam7))
							{
								uParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_32(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&uParam7), &Global_55480[iParam016] + 32, Function_31(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_30(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_30() //Position: 0x188B / 6283
{
	int iVar0;
	
	return &iVar0;
}

var Function_31(int iParam0) //Position: 0x1894 / 6292
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_32(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x18A5 / 6309
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_33("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_33("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_33("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_33(char* cParam0) //Position: 0x199C / 6556
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_34(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x19B7 / 6583
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_36(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_35(Function_36(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_35(int iParam0, int iParam1) //Position: 0x1A1E / 6686
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_36(int iParam0, bool bParam1) //Position: 0x1A30 / 6704
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_37(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1A42 / 6722
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
	if (((Function_38(iParam0) != 19 || Function_38(iParam0) != 17) || Function_38(iParam0) != 10) || Function_38(iParam0) != 9)
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

int Function_38(int iParam0) //Position: 0x1B76 / 7030
{
	return Global_55480[iParam016].f_96;
}

float Function_39(int iParam0) //Position: 0x1B85 / 7045
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_40(int iParam0) //Position: 0x1BBE / 7102
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_41(int iParam0) //Position: 0x1BFB / 7163
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

int Function_42(int iParam0, float fParam1, bool bParam2) //Position: 0x1D95 / 7573
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

var Function_43() //Position: 0x1FD9 / 8153
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_44(float fParam0) //Position: 0x1FEE / 8174
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	
	GET_OBJECT_POSITION(&fParam0, &Var2);
	Var2.f_4 = (StackVal + 1.0f);
	Var4 = Vector(2,75f, 2.0f, 2,75f);
	GET_OBJECT_RELATIVE_POSITION(&fParam0, Var4, &Var0);
	fLocal_0 = CREATE_CAMERA_IN_LAYOUT(&Global_39918, Function_30(), 0);
	INIT_CAMERA_FROM_GAME_CAMERA(&fLocal_0);
	SET_CAMERA_POSITION(&fLocal_0, Var0);
	SET_CAMERA_TARGET_POSITION(&fLocal_0, Var2, 0);
	SET_CAMERA_FOV(&fLocal_0, 31.0f);
	SET_CURRENT_CAMERA_ON_CHANNEL(&fLocal_0, 0, 2,5f, 2,5f, 0, 0, 0, 0, 0, 0);
	return;
}

void Function_45(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, int iParam13) //Position: 0x206E / 8302
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	iParam1 = &iParam1;
	if (&bParam6)
	{
		UI_PUSH("nCutscenes");
	}
	HUD_CLEAR_HELP();
	UI_DUMP_MESSAGE_QUEUE_TO_NOTES(1);
	HUD_ENABLE(0);
	Function_26();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(&Global_54076, "iDrunk", false);
	if (&bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		uVar1 = Function_43();
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
			if (IS_VOLUME_VALID(&iParam7))
			{
				FIRE_STOP_FLAMES_IN_VOLUME(&iParam7);
				DELETE_PROJECTILES_IN_VOLUME(&iParam7);
			}
			else
			{
				FIRE_STOP_ALL_FIRES();
				Function_51(&uVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_30(), 2,802597E-45f, Function_51(&uVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
				DELETE_PROJECTILES_IN_VOLUME(&uVar0);
			}
		}
		Function_27(19, 1, 0, 0);
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
	if (iParam10 && !Function_50())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_49()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_49()));
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
	if (Function_48(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_46(0x4000000);
	}
	if (Function_48(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_46(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&iParam12);
	SET_USES_QUAD_IK_FIX(&iParam13);
}

void Function_46(int iParam0) //Position: 0x2320 / 8992
{
	int iVar0;
	
	if (Function_47(iParam0, 1) && Function_47(Global_39556, 1))
	{
	}
	iVar0 = (Global_39556 && iParam0);
	Global_39556 = (Global_39556 - iVar0);
	Global_39556 |= 1073741824;
	return;
}

bool Function_47(var uParam0, int iParam1) //Position: 0x2354 / 9044
{
	return (uParam0 && iParam1) == 0;
}

bool Function_48(int iParam0) //Position: 0x2361 / 9057
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_49() //Position: 0x237D / 9085
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	uVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_LAYOUTREF_VALID(&uVar0))
	{
		uVar1 = CREATE_OBJECT_ITERATOR(&uVar0);
		uVar2 = START_OBJECT_ITERATOR(&uVar1);
		ITERATE_ON_OBJECT_TYPE(&uVar1, 42);
		if (IS_OBJECT_VALID(&uVar2))
		{
			while (IS_OBJECT_VALID(&uVar2))
			{
				PRINTSTRING(GET_OBJECT_NAME(&uVar2));
				PRINTNL();
				if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(&uVar2), "bino_camera"))
				{
					return &uVar2;
				}
				uVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
			}
		}
		DESTROY_ITERATOR(&uVar1);
	}
	return "";
}

bool Function_50() //Position: 0x240B / 9227
{
	if (Function_47(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

struct<8> Function_51(int iParam0) //Position: 0x2426 / 9254
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

void Function_52(int iParam0) //Position: 0x2438 / 9272
{
	if (&iParam0 != 1 && !GET_THIS_SCRIPT_ID() != &Global_15860)
	{
		return;
	}
	if (Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 0;
	}
	if (!Function_53())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_53() //Position: 0x2478 / 9336
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_15852[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var Function_54(int iParam0) //Position: 0x249D / 9373
{
	return LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Ambient/CrimeResponse/event_law_repsonse_local", &iParam0, 36, 0);
}

int Function_55(struct<1889> Param0) //Position: 0x24E5 / 9445
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar4;
	
	Param0.f_1812 = GET_CURRENT_GAME_TIME();
	bVar0 = Param0.f_128;
	if (!Function_126())
	{
		return 26;
	}
	if (Function_125(&Param0) && Function_123(&Param0))
	{
		return 23;
	}
	if (Param0.f_128 > 15)
	{
		return Param0.f_128;
	}
	if ((((!Param0.f_1848 && Param0.f_1256 == 5) && GET_WEAPON_IN_HAND(GET_PLAYER_ACTOR(0)) == 4294967295) && Param0.f_1388) && !Param0.f_1888)
	{
		Param0.f_1888 = 1;
		Function_122(&Param0 + 1388);
		Function_120("stickup_hard_way_en", 2,5f, 0, 2, 1, 0);
		return 4;
	}
	if (Param0.f_1852)
	{
		return 15;
	}
	if (Param0.f_1860)
	{
		return 19;
	}
	Param0.f_1848 = Global_6630;
	if (Param0.f_1848)
	{
		if (!Function_116(&Param0))
		{
		}
	}
	if (Param0.f_1848 && Param0.f_1388)
	{
		if (Function_115(&Param0 + 1388))
		{
			switch (Param0.f_1256)
			{
				case 0x00000000:
					Function_120("stickup_first_warning_en", 2,5f, 0, 2, 1, 0);
					Param0.f_1256 = 1;
					Function_128(&Param0 + 1388);
					break;
				
				case 0x00000001:
					Function_120("stickup_second_warning_en", 2,5f, 0, 2, 1, 0);
					Param0.f_1256 = 2;
					Function_128(&Param0 + 1388);
					break;
				
				case 0x00000002:
					Param0.f_1856 = 1;
					if (!Function_114(&Param0))
					{
					}
					Function_120("stickup_bring_on_heat_en", 2,5f, 0, 2, 1, 0);
					Param0.f_1256 = 5;
					Function_122(&Param0 + 1388);
					return 4;
					break;
				
				default:
					break;
			}
		}
	}
	GET_POSITION(GET_PLAYER_ACTOR(0), &Var2);
	switch (bVar0)
	{
		case 0x00000000:
			AI_DONT_HARM_ACTOR(GET_PLAYER_ACTOR(0));
			break;
		
		case 0x00000001:
			if (!Param0.f_1860 && !Param0.f_1852)
			{
				if (DECOR_CHECK_EXIST(GET_PLAYER_ACTOR(0), "coplasso"))
				{
					DECOR_REMOVE(GET_PLAYER_ACTOR(0), "coplasso");
					Param0.f_1860 = 1;
				}
			}
			if ((Param0.f_132 >= 1 && !Param0.f_1860) && !Param0.f_1856)
			{
				Function_108(&Param0);
				if (Param0.f_132 != 2 || Param0.f_132 != 1)
				{
					return 4;
				}
			}
			iVar1 = Function_107();
			if (IS_ACTOR_VALID(&iVar1))
			{
				iVar4 = Function_106(GET_OBJECT_FROM_ACTOR(&iVar1));
				if (!(iVar4 <= 424 && iVar4 >= 466))
				{
					if (&Param0 + 48 != &iVar1)
					{
						if (!Function_105(&Param0, &Param0 + 48, 7))
						{
						}
						(&Param0 + 48) = &iVar1;
						if (!Function_104(&Param0, &iVar1))
						{
						}
						if (Function_105(&Param0, &iVar1, 2))
						{
							return 6;
						}
					}
				}
			}
			(&Param0 + 48) = "";
			if (Param0.f_1864)
			{
				Param0.f_1864 = 0;
				return 9;
			}
			if (Global_6629)
			{
				if (!Param0.f_1848 && Function_13(&Param0 + 32) > 10)
				{
					if (!Function_100(&Param0))
					{
					}
				}
			}
			if (!Function_98(&Param0))
			{
			}
			if (!Function_87(&Param0))
			{
			}
			if (Param0.f_1856)
			{
				if (!Function_80(&Param0))
				{
				}
			}
			if (!Function_79(&Param0))
			{
			}
			if (Param0.f_1872 && Param0.f_1792 > 3)
			{
				if (!Function_78(&Param0))
				{
					return 13;
				}
			}
			if (Param0.f_1784 < 10 && !Param0.f_1868)
			{
				return 10;
			}
			if (Function_13(&Param0 + 24) != 0 && !Param0.f_1868)
			{
				return 12;
			}
			if (VDIST(Var2, *(&Param0 + 1756)) > 200.0f)
			{
				if (Function_77(&Param0))
				{
					return 5;
				}
			}
			else if (!Global_6629)
			{
				return 14;
			}
			break;
		
		case 0x00000002:
			break;
		
		case 0x00000003:
			break;
		
		case 0x00000006:
			break;
		
		case 0x00000007:
			break;
		
		case 0x00000008:
			break;
		
		case 0x00000004:
			AI_CLEAR_DONT_HARM_ACTOR(GET_PLAYER_ACTOR(0));
			Function_76(&Param0 + 16, GET_PLAYER_ACTOR(0), 4);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Param0 + 16, 0, 1, 1);
			TASK_USE_LASSO(0, GET_PLAYER_ACTOR(0), 0,75f, 30.0f, 1, 0);
			Function_75(&Param0 + 24);
			Function_76(&Param0 + 24, GET_PLAYER_ACTOR(0), 4);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Param0 + 24, 0, 1, 1);
			TASK_USE_LASSO(0, GET_PLAYER_ACTOR(0), 0,75f, 30.0f, 1, 0);
			Param0.f_1888 = 1;
			Param0.f_1856 = 1;
		
		case 0x00000009:
			Function_74(&Param0);
			if (Param0.f_1848)
			{
				if (Function_13(&Param0 + 24) >= 0)
				{
					Function_75(&Param0 + 24);
					Function_70(StackVal, &Param0 + 24, SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 24, false), Var2, 4, 3.0f, 14, 1);
				}
			}
			break;
		
		case 0x00000005:
			if (!Param0.f_1872)
			{
				Function_56(&Param0);
			}
			break;
		
		case 0x0000000A:
			break;
		
		case 0x0000000B:
			break;
		
		case 0x0000000C:
			break;
		
		case 0x0000000D:
			Function_56(&Param0);
			break;
		
		case 0x0000000E:
			if (!Global_6629)
			{
				return 14;
			}
			break;
		
		case 0x0000000F:
			break;
		
		case 0x00000018:
			break;
		
		case 0x00000019:
			break;
		
		default:
			break;
	}
	return 1;
}

int Function_56(struct<1873> Param0) //Position: 0x2A39 / 10809
{
	var uVar0;
	char* cVar1[32];
	char* cVar9[32];
	struct<2> Var17;
	struct<2> Var19;
	var uVar21;
	var uVar22;
	
	uVar0 = (*&Param0 + 1656)[RAND_INT_RANGE(0, 7)];
	strcpy(&cVar1, "stickupHorseMan", 32);
	strcpy(&cVar9, "stickupHorse", 32);
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_68(&cVar1) };
	cVar9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_68(&cVar9) };
	GET_POSITION(GET_PLAYER_ACTOR(0), &Var17);
	Function_67(StackVal, &Param0 + 1324, 0, Var17, 0.0f, 20.0f, 30.0f, 0, 0x40a00000, 0);
	Function_60(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 8, *(&Param0 + 1260), &Var19, 1);
	uVar21 = Function_58(StackVal, StackVal, &Param0, &cVar1, uVar0, &cVar9, Function_144(64, 0, 0, 4294967295, 0), Var19, Vector(0.0f, 0.0f, 0.0f));
	if (IS_ACTOR_VALID(&uVar21))
	{
		AI_SET_NAV_MATERIAL_USAGE(&uVar21, 96, 0);
		AI_SET_NAV_ACTOR_WIDTH(GET_MOUNT(&uVar21), 1,5f);
		TASK_GO_NEAR_COORD(&uVar21, &Var17, 10.0f, 3);
		SQUAD_JOIN(&uVar21, &Param0 + 40);
		SET_ACTOR_UPDATE_PRIORITY(&uVar21, false);
		MEMORY_CONSIDER_AS_ENEMY(&uVar21, GET_PLAYER_ACTOR(0));
		GIVE_WEAPON_TO_ACTOR(&uVar21, 21, 0f, 1, 1);
		ADD_BLIP_FOR_ACTOR(&uVar21, 345, 0, 2, 0);
		uVar22 = GET_MOUNT(&uVar21);
		Param0.f_1872 = 1;
		Param0.f_1792++;
		if (!Function_57(&Param0, &uVar21, &uVar22))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

bool Function_57(int iParam0, int iParam1, bool bParam2) //Position: 0x2B7C / 11132
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (!(IS_ACTOR_VALID(&iParam1) || IS_ACTOR_VALID(&bParam2)))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (&iParam0 + 920[iVar15] == &iParam1)
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	if (iVar0 == 1)
	{
		bVar2 = false;
		iVar1 = 0;
		while (iVar1 > 3 && !bVar2)
		{
			if (&iParam0 + 920[iVar15] == "")
			{
				bVar2 = true;
			}
			else
			{
				iVar1++;
			}
		}
		if (bVar2)
		{
			(&iParam0 + 920[iVar15]) = &iParam1;
			*(&iParam0 + 920[iVar15] + 8) = &bParam2;
			(&iParam0 + 920[iVar15])->f_32 = 1;
			(&iParam0 + 920[iVar15])->f_28 = iVar1;
			return 1;
		}
		return 0;
	}
	return 0;
}

var Function_58(var uParam0, var uParam1, bool bParam2, var uParam3, bool bParam4, struct<2> Param5, struct<2> Param7) //Position: 0x2C3D / 11325
{
	var uVar0;
	var uVar1;
	
	if (!IS_LAYOUTREF_VALID(&uParam0))
	{
		LOG_ERROR("Layout is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_59(bParam2))
	{
		LOG_ERROR("riderTypeName is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_59(bParam4))
	{
		bParam4 = 976;
	}
	uVar1 = CREATE_ACTOR_IN_LAYOUT(&uParam0, &uParam3, bParam4, Param5, Param7);
	if (!IS_ACTOR_VALID(&uVar1))
	{
		uVar0 = &uVar1;
		return "";
	}
	uVar0 = CREATE_ACTOR_IN_LAYOUT(&uParam0, &uParam1, bParam2, Param5, Param7);
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

bool Function_59(bool bParam0) //Position: 0x2D75 / 11637
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

int Function_60(int iParam0, struct<41> Param1) //Position: 0x2D8C / 11660
{
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER_PLAYER();
	Function_65();
	Function_64(0);
	Function_63(iParam0);
	Function_62(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param1);
	Function_61(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param1);
	AMBIENT_ENABLE_OFFSCREEN_FILTER(iParam10);
	if (Param1.f_28 == 0.0f)
	{
		UNK_0x0AC99007(StackVal, Param1.f_28);
		UNK_0x30C67D05(1);
	}
	if (Param1.f_36 == 0.0f)
	{
		AMBIENT_SET_ELEVATION_DERIVATIVE_IN_AREA_FILTER(Param1.f_36, Param1.f_40);
		AMBIENT_ENABLE_ELEVATION_DERIVATIVE_IN_AREA_FILTER(1);
	}
	if (AMBIENT_GET_POINT(&uParam9, 0))
	{
		return 1;
	}
	return 0;
}

void Function_61(struct<33> Param0) //Position: 0x2DFB / 11771
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

void Function_62(struct<5> Param0, var uParam5, var uParam6, var uParam7) //Position: 0x2F27 / 12071
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

void Function_63(bool bParam0) //Position: 0x2F78 / 12152
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

void Function_64(float fParam0) //Position: 0x302B / 12331
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

void Function_65() //Position: 0x3072 / 12402
{
	float fVar0;
	bool bVar1;
	
	Function_66(&fVar0, &bVar1);
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	return;
}

void Function_66(var uParam0, bool bParam1) //Position: 0x3086 / 12422
{
	struct<2> Var0;
	
	if (Global_6629 && !Global_6646)
	{
		uParam0 = 65.0f;
		bParam1 = 95.0f;
	}
	else if ((!IS_ACTOR_RIDING(GET_PLAYER_ACTOR(0)) && !IS_ACTOR_RIDING_VEHICLE(GET_PLAYER_ACTOR(0))) && !Global_6646)
	{
		uParam0 = 115.0f;
		bParam1 = 170.0f;
	}
	else
	{
		GET_ACTOR_VELOCITY(GET_PLAYER_ACTOR(0), &Var0);
		if (VMAG(Var0) > 5.0f)
		{
			uParam0 = 130.0f;
			bParam1 = 190.0f;
		}
		else
		{
			uParam0 = 130.0f;
			bParam1 = 190.0f;
		}
	}
	return;
}

void Function_67(struct<45> Param0) //Position: 0x3117 / 12567
{
	Param0.f_24 = iParam1;
	(&Param0 + 8) = Param2;
	Param0.f_20 = fParam4;
	Param0.f_28 = fParam5;
	Param0.f_32 = fParam6;
	Param0.f_36 = &iParam9;
	Param0.f_40 = &iParam7;
	Param0.f_44 = &iParam8;
}

struct<32> Function_68(char* cParam0) //Position: 0x315D / 12637
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_69("0", &cVar8, ""), 4);
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

struct<32> Function_69(char* cParam0) //Position: 0x31C9 / 12745
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_70(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, var uParam6, bool bParam7) //Position: 0x31EB / 12779
{
	bool bVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	struct<2> Var5;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		iParam1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, false);
	}
	iVar1 = SQUAD_GET_SIZE(&uParam0);
	Function_73(uParam5, uParam6);
	Var5 = { StackVal, Function_73(uParam5, uParam6) };
	bVar0 = false;
	while (bVar0 < (iVar1 - 1))
	{
		iVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&iVar2))
		{
			if (&iVar2 == &iParam1)
			{
				TASK_GO_TO_COORD(&iVar2, &uParam2, iParam4);
				TASK_PRIORITY_SET(&iVar2, bParam7);
			}
			else
			{
				Function_71(&Var5, bVar0 + 1);
				uVar3 = Function_71(&Var5, bVar0 + 1);
				TASK_FOLLOW_OBJECT(&iVar2, GET_OBJECT_FROM_ACTOR(&iParam1), &uVar3, 3.0f, 2.0f, 0,1f, 1.0f, 0, 0, 1);
				TASK_PRIORITY_SET(&iVar2, bParam7);
			}
		}
		bVar0++;
	}
}

struct<8> Function_71(vector3 vParam0) //Position: 0x329B / 12955
{
	struct<2> Var0;
	
	if (!Function_72(&vParam0))
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

bool Function_72(int iParam0) //Position: 0x33E8 / 13288
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

struct<8> Function_73(var uParam0, int iParam1) //Position: 0x340C / 13324
{
	struct<2> Var0;
	
	Var0.f_8 = uParam0;
	Var0 = &Global_39559[iParam1];
	return StackVal, Var0;
}

void Function_74(struct<1785> Param0) //Position: 0x3427 / 13351
{
	Param0.f_1784++;
	return;
}

void Function_75(int iParam0) //Position: 0x343B / 13371
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		TASK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0));
		bVar0++;
	}
	return;
}

void Function_76(var uParam0, int iParam1, bool bParam2) //Position: 0x3470 / 13424
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			MEMORY_CONSIDER_AS(&uVar1, &iParam1, bParam2);
		}
		bVar0++;
	}
	return;
}

bool Function_77(int iParam0) //Position: 0x34BC / 13500
{
	GET_POSITION(GET_PLAYER_ACTOR(0), &iParam0 + 1768);
	if (VDIST(*(&iParam0 + 1768), *(&iParam0 + 1756)) < 50.0f)
	{
		return 1;
	}
	return 0;
}

bool Function_78(int iParam0) //Position: 0x34EE / 13550
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	uVar0 = &iParam0 + 40;
	if (SQUAD_GET_SIZE(&uVar0) >= 0)
	{
		bVar1 = false;
		while (bVar1 <= SQUAD_GET_SIZE(&uVar0))
		{
			iVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uVar0, bVar1);
			if (IS_ACTOR_ALIVE(&iVar2))
			{
				return 1;
			}
			bVar1++;
		}
	}
	return 0;
}

bool Function_79(int iParam0) //Position: 0x3535 / 13621
{
	var uVar0;
	var uVar1;
	var uVar3;
	struct<2> Var5;
	
	uVar0 = &iParam0 + 8;
	GET_POSITION(GET_PLAYER_ACTOR(0), &uVar3);
	if (!IS_VOLUME_VALID(&uVar0))
	{
		return 0;
	}
	GET_OBJECT_POSITION(GET_OBJECT_FROM_VOLUME(&uVar0), &Var5);
	if (IS_ACTOR_VALID(&iParam0 + 56))
	{
		GET_POSITION(&iParam0 + 56, &uVar1);
		if (GET_TASK_STATUS(&iParam0 + 56, 61) == 0)
		{
			TASK_CLEAR(&iParam0 + 56);
			TASK_STAND_STILL(&iParam0 + 56, 1.0f, 0, 0);
			TASK_SHOOT_AT_COORD(&iParam0 + 56, &uVar3, 10.0f);
		}
		if (GET_TASK_STATUS(&iParam0 + 56, 24) == 0)
		{
			TASK_CLEAR(&iParam0 + 56);
			TASK_FLEE_ACTOR(&iParam0 + 56, GET_PLAYER_ACTOR(0), 20.0f, -1.0f, 1, 0, 0);
			CREATE_FIRE_IN_VOLUME(&iParam0, &uVar0, CREATE_FIRE_PROPERTY(), 10, 25, Var5, 1, 0);
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

bool Function_80(struct<1885> Param0) //Position: 0x35FB / 13819
{
	int iVar0;
	var uVar1;
	var uVar3;
	
	uVar3 = "";
	GET_POSITION(GET_PLAYER_ACTOR(0), &uVar1);
	Param0.f_1884 = Function_86(&Param0 + 16, GET_PLAYER_ACTOR(0), 0);
	Param0.f_1880 = Function_86(&Param0 + 24, GET_PLAYER_ACTOR(0), 0);
	if (Function_13(&Param0 + 16) >= 0)
	{
		if (Param0.f_1856)
		{
			iVar0 = 0;
			while (iVar0 <= Function_13(&Param0 + 16))
			{
				uVar3 = &Param0 + 464[iVar07];
				if (IS_ACTOR_VALID(&uVar3))
				{
					COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&uVar3, 13, !Param0.f_1884);
					Function_82(&Param0, &Param0 + 464[iVar07]);
				}
				iVar0++;
			}
		}
	}
	if (Function_13(&Param0 + 40) >= 0)
	{
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uVar3 = &Param0 + 920[iVar05];
			if (IS_ACTOR_VALID(&uVar3))
			{
				Function_81(&Param0 + 920[iVar05]);
			}
			iVar0++;
		}
	}
	return 1;
}

int Function_81(struct<33> Param0) //Position: 0x36E3 / 14051
{
	struct<2> Var0;
	struct<2> Var2;
	
	GET_POSITION(GET_PLAYER_ACTOR(0), &Var0);
	GET_POSITION(&Param0, &Var2);
	if (!IS_ACTOR_VALID(&Param0))
	{
		Param0.f_32 = 0;
		return 0;
	}
	if (!IS_ACTOR_ALIVE(&Param0))
	{
		Param0.f_32 = 7;
		return 7;
	}
	switch (Param0.f_32)
	{
		case 0x00000001:
			if (VDIST(Var0, Var2) > 15.0f)
			{
				Param0.f_32 = 5;
			}
			else if (GET_TASK_STATUS(&Param0, 1) != 0 || GET_TASK_STATUS(&Param0, 7) != 0)
			{
				TASK_FOLLOW_ACTOR(&Param0, GET_PLAYER_ACTOR(0));
			}
			break;
		
		case 0x00000002:
			if (VDIST(Var0, Var2) < 30.0f)
			{
				TASK_CLEAR(&Param0);
				TASK_MOUNT(&Param0, &Param0 + 8, 0, 1, 2, 2147483647);
				Param0.f_32 = 3;
			}
			else if (VDIST(Var0, Var2) > 10.0f)
			{
				TASK_CLEAR(&Param0);
				TASK_USE_LASSO(&Param0, GET_PLAYER_ACTOR(0), 0,75f, 30.0f, 1, 0);
			}
			break;
		
		case 0x00000003:
			TASK_CLEAR(&Param0);
			TASK_MOUNT(&Param0, &Param0 + 8, 0, 1, 2, 2147483647);
			Param0.f_32 = 4;
			break;
		
		case 0x00000004:
			if (GET_TASK_STATUS(&Param0, 11) == 0)
			{
				TASK_CLEAR(&Param0);
				TASK_FOLLOW_ACTOR(&Param0, GET_PLAYER_ACTOR(0));
				Param0.f_32 = 1;
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_MOUNTED(&Param0 + 8))
			{
				TASK_CLEAR(&Param0);
				TASK_DISMOUNT(&Param0, 1);
				Param0.f_32 = 6;
			}
			break;
		
		case 0x00000006:
			if (GET_TASK_STATUS(&Param0, 12) == 0)
			{
				TASK_CLEAR(&Param0 + 8);
				TASK_STAND_STILL(&Param0 + 8, -1.0f, 0, 0);
				Param0.f_32 = 2;
			}
			break;
		
		default:
			LOG_ERROR("STICKUP_UPDATE_HORSEMAN_AI: AI State Error...should never reach DEFAULT.");
			break;
	}
	return Param0.f_32;
}

int Function_82(struct<1861> Param0) //Position: 0x38FE / 14590
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	var uVar6;
	int iVar8;
	
	GET_POSITION(GET_PLAYER_ACTOR(0), &Var0);
	GET_POSITION(&Param1, &Var2);
	if (!IS_ACTOR_VALID(&Param1))
	{
		Param1.f_52 = 0;
		return 0;
	}
	if (!IS_ACTOR_ALIVE(&Param1))
	{
		Param1.f_52 = 10;
		return 10;
	}
	switch (Param1.f_52)
	{
		case 0x00000001:
			if (Param0.f_1860 || Param0.f_1852)
			{
				TASK_CLEAR(&Param1);
				TASK_STAND_STILL(&Param1, -1.0f, 0, 0);
				Param1.f_52 = 3;
			}
			if (Param0.f_1856)
			{
				Function_67(StackVal, &Param0 + 1324, 0, Var0, 0.0f, 1.0f, 2.0f, 0, 0x40a00000, 0);
				iVar8 = RAND_INT_RANGE(0, 100);
				if (iVar8 < 40)
				{
					Var4 = Var0;
				}
				else
				{
					Function_84(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, (&Param0 + 1324), *(&Param0 + 1260));
					Var4 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, 1.0f, 0.0f), Function_84(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, (&Param0 + 1324), *(&Param0 + 1260)), StackVal);
					FIND_INTERSECTION(&Var2, &Var4, &Var4, &uVar6, 0, 4294967295, 4194304);
					if (Function_83(StackVal, Var4))
					{
					}
				}
				TASK_CLEAR(&Param1);
				TASK_STAND_STILL(&Param1, -1.0f, 0, 0);
				TASK_SHOOT_AT_COORD_FROM_POSITION(&Param1, &Var4, &Var2, -1.0f);
				TASK_PRIORITY_SET(&Param1, true);
			}
			break;
		
		case 0x00000003:
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000007:
			break;
		
		case 0x00000005:
			if (VDIST(Var0, Var2) > 10.0f)
			{
				TASK_CLEAR(&Param1);
				TASK_USE_LASSO(&Param1, GET_PLAYER_ACTOR(0), 0,75f, 30.0f, 1, 0);
				Param1.f_52 = 6;
			}
			else if (IS_ACTOR_RELOADING(&Param1))
			{
				TASK_CLEAR(&Param1);
				TASK_SEEK_COVER_FROM_ACTOR(&Param1, GET_PLAYER_ACTOR(0));
				Param1.f_52 = 9;
			}
			break;
		
		case 0x00000006:
			if (VDIST(Var0, Var2) > (10.0f + 5.0f))
			{
				TASK_CLEAR(&Param1);
				TASK_KILL_CHAR(&Param1, GET_PLAYER_ACTOR(0));
				Param1.f_52 = 5;
			}
			if (GET_ACTOR_UNDER_RETICLE(GET_PLAYER_ACTOR(0), 0) == &Param1)
			{
				TASK_CLEAR(&Param1);
				TASK_DIVE(&Param1, 0.0f);
				Param1.f_52 = 8;
			}
			break;
		
		case 0x00000008:
			if (GET_TASK_STATUS(&Param1, 30) == 0)
			{
				Param1.f_52 = 5;
			}
			break;
		
		case 0x00000009:
			if (!IS_ACTOR_RELOADING(&Param1))
			{
				Param1.f_52 = 5;
			}
			break;
		
		default:
			break;
	}
	return Param1.f_52;
}

bool Function_83(vector3 vParam0) //Position: 0x3B2E / 15150
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

struct<8> Function_84(struct<41> Param0) //Position: 0x3B46 / 15174
{
	struct<2> Var0;
	
	AMBIENT_RESET_FILTER(0);
	if (IS_OBJECT_VALID(&Param0))
	{
		GET_OBJECT_POSITION(&Param0, &Var0);
		if (Global_47151[34])
		{
			PRINTVECTOR(Var0);
			PRINTNL();
		}
		AMBIENT_SET_SEARCH_CENTER_ACTOR(GET_ACTOR_FROM_OBJECT(&Param0));
	}
	else if (!Function_83(StackVal, *(&Param0 + 8)))
	{
		if (Global_47151[34])
		{
			PRINTVECTOR(*(&Param0 + 8));
			PRINTNL();
		}
		GET_OBJECT_POSITION(GET_PLAYER_ACTOR(0), &Var0);
		if (Global_47151[34])
		{
			PRINTVECTOR(Var0);
			PRINTNL();
		}
		AMBIENT_SET_SEARCH_CENTER(*(&Param0 + 8));
	}
	else
	{
		GET_OBJECT_POSITION(GET_PLAYER_ACTOR(0), &Var0);
		if (Global_47151[34])
		{
			PRINTVECTOR(Var0);
			PRINTNL();
		}
		AMBIENT_SET_SEARCH_CENTER_PLAYER();
	}
	Function_64(Param0.f_40);
	if (Param0.f_28 > 1.0f && Param0.f_32 > 1.0f)
	{
		Function_65();
	}
	else
	{
		AMBIENT_SET_DISTANCE_FILTER(Param0.f_28, Param0.f_32);
	}
	Function_63(Param0.f_24);
	Function_62(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param6);
	Function_61(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param6);
	if (Param0.f_36)
	{
		AMBIENT_ENABLE_OFFSCREEN_FILTER(1);
	}
	if (Param6.f_28 == 0.0f)
	{
		UNK_0x0AC99007(StackVal, Param6.f_28);
	}
	if (Param6.f_36 == 0.0f)
	{
		AMBIENT_SET_ELEVATION_DERIVATIVE_IN_AREA_FILTER(Param6.f_36, Param6.f_40);
	}
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	if (AMBIENT_GET_POINT(&Var0, 0))
	{
		return StackVal, Var0;
	}
	Function_85();
	return StackVal, Function_85();
}

struct<8> Function_85() //Position: 0x3C7B / 15483
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

int Function_86(int iParam0, int iParam1, bool bParam2) //Position: 0x3C85 / 15493
{
	var uVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(&iParam0))
	{
		if (IS_ACTOR_VALID(&iParam1))
		{
			bVar1 = false;
			while (bVar1 <= SQUAD_GET_SIZE(&iParam0))
			{
				uVar0 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar1);
				if (IS_ACTOR_VALID(&uVar0))
				{
					if (MEMORY_GET_IS_VISIBLE(&uVar0, &iParam1))
					{
						if (&bParam2)
						{
							if (MEMORY_GET_IS_IDENTIFIED(&uVar0, &iParam1))
							{
								return 1;
							}
						}
						return 1;
					}
				}
				bVar1++;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
	return 0;
}

bool Function_87(struct<1865> Param0) //Position: 0x3CF8 / 15608
{
	int iVar0;
	int iVar1;
	
	if (Param0.f_1780 >= 0)
	{
		iVar0 = 0;
		while (iVar0 <= 10)
		{
			iVar1 = Function_92(&Param0 + 136[iVar04]);
			if (IS_ACTOR_VALID(&Param0 + 136[iVar04]))
			{
				if (!Function_91(GET_PLAYER_ACTOR(0), &Param0 + 136[iVar04], 0x3f000000))
				{
					(&Param0 + 136[iVar04])->f_28 = 9;
				}
			}
			if (iVar1 != 10 || iVar1 != 8)
			{
				Function_89(&Param0, &Param0 + 136[iVar04]);
				if (iVar1 == 8)
				{
					Param0.f_1864 = 1;
				}
			}
			iVar0++;
		}
	}
	Param0.f_1780 = Function_88(&Param0);
	return 1;
}

var Function_88(int iParam0) //Position: 0x3D99 / 15769
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= 10)
	{
		uVar2 = &iParam0 + 136[iVar14];
		if (IS_ACTOR_VALID(&uVar2))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int Function_89(int iParam0, struct<21> Param1) //Position: 0x3DD3 / 15827
{
	if (IS_ACTOR_VALID(&Param1))
	{
		Function_90(&iParam0 + 136[Param1.f_204]);
		return 1;
	}
	return 0;
}

void Function_90(struct<29> Param0) //Position: 0x3DF5 / 15861
{
	Param0 = "";
	Function_85();
	(&Param0 + 8) = Function_85();
	Param0.f_28 = 0;
	Param0.f_20 = 4294967295;
	Param0.f_24 = 0;
	return;
}

bool Function_91(int iParam0, var uParam1, float fParam2) //Position: 0x3E1C / 15900
{
	struct<2> Var0;
	struct<2> Var2;
	var uVar4;
	var uVar6;
	
	if (IS_ACTOR_VALID(&iParam0) && IS_ACTOR_VALID(&uParam1))
	{
		GET_POSITION(&iParam0, &Var0);
		GET_POSITION(&uParam1, &Var2);
		uVar4 = Vector(StackVal, StackVal, StackVal) - Vector(Var0, Var2, StackVal);
		VNORMALIZE(&uVar4);
		GET_ACTOR_AXIS(&iParam0, &uVar6, 2);
		if (VDOT(&uVar6, &uVar4) >= &fParam2)
		{
			return 1;
		}
		return 0;
	}
	LOG_ERROR("IS_ACTOR_FACING_ACTOR got an invalid Actor(s)! Returning FALSE!");
	return 0;
}

int Function_92(struct<29> Param0) //Position: 0x3EBB / 16059
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	
	bVar0 = "";
	iVar1 = "";
	Function_85();
	Var2 = Function_85();
	GET_POSITION(GET_PLAYER_ACTOR(0), &Var2);
	if (IS_ACTOR_VALID(&Param0))
	{
		if (GET_LAST_ATTACKER(&Param0) == GET_PLAYER_ACTOR(0))
		{
			Param0.f_24 = 1;
		}
	}
	if (!IS_ACTOR_VALID(&Param0))
	{
		Param0.f_28 = 0;
		return 0;
	}
	if (!IS_ACTOR_ALIVE(&Param0))
	{
		Param0.f_28 = 10;
		Function_4(&Global_11544, &Global_13580, &Param0, 0);
		if (Param0.f_24)
		{
			return 8;
		}
		return 10;
	}
	switch (Param0.f_28)
	{
		case 0x00000001:
			Function_4(&Global_11544, &Global_13580, &Param0, 0);
			Function_90(&Param0);
			break;
		
		case 0x00000002:
			bVar0 = GET_PERS_CHAR_FROM_ACTOR(&Param0);
			if (IS_PERS_CHAR_VALID(&bVar0) && GET_OBJECT_TYPE(&bVar0) != 24)
			{
				if (!((Param0.f_28 != 4 || Param0.f_28 != 5) || Param0.f_28 != 7))
				{
					Function_94(&Global_11544, &Global_13580, &bVar0);
					RESET_ANIM_SET_FOR_ACTOR(&Param0, 1);
					SET_ANIM_SET_FOR_ACTOR(&Param0, "stand_surrender", 0);
					SET_ACTION_NODE_FOR_ACTOR(&Param0, "stand_surrender");
					Param0.f_28 = 4;
				}
			}
			break;
		
		case 0x00000004:
			iVar1 = Function_107();
			if (&iVar1 != "" || &iVar1 == &Param0)
			{
				RESET_ANIM_SET_FOR_ACTOR(&Param0, 1);
				SET_ANIM_SET_FOR_ACTOR(&Param0, "BankRobbery_Cower", 0);
				SET_ACTION_NODE_FOR_ACTOR(&Param0, "BankRobbery_Cower");
				Param0.f_28 = 7;
			}
			break;
		
		case 0x00000003:
			RESET_ANIM_SET_FOR_ACTOR(&Param0, 1);
			AMBIENT_SET_SEARCH_CENTER(Var2);
			AMBIENT_SET_DISTANCE_FILTER(10.0f, 15.0f);
			AMBIENT_GET_POINT(&Var2, 0);
			TASK_FLEE_ACTOR(&Param0, GET_PLAYER_ACTOR(0), 50.0f, -1.0f, 0, 0, 0);
			Param0.f_28 = 5;
			break;
		
		case 0x00000005:
			if (GET_TASK_STATUS(&Param0, 1) == 0)
			{
				RESET_ANIM_SET_FOR_ACTOR(&Param0, 1);
				Param0.f_28 = 1;
			}
			break;
		
		case 0x00000006:
			break;
		
		case 0x00000007:
			if (Function_93(&Param0, 8) || !Function_91(GET_PLAYER_ACTOR(0), &Param0, 0x3f000000))
			{
				TASK_CLEAR(&Param0);
				Param0.f_28 = 3;
			}
			break;
		
		case 0x00000009:
			TASK_CLEAR(&Param0);
			SQUAD_LEAVE(&Param0);
			Param0.f_28 = 1;
			break;
		
		default:
			break;
	}
	return Param0.f_28;
}

int Function_93(var uParam0, int iParam1) //Position: 0x412F / 16687
{
	struct<2> Var0;
	struct<2> Var2;
	
	GET_POSITION(GET_PLAYER_ACTOR(0), &Var0);
	GET_POSITION(&uParam0, &Var2);
	if (VDIST(Var0, Var2) < IntToFloat(iParam1))
	{
		return 1;
	}
	return 0;
}

int Function_94(var uParam0, vector3[] vParam1, bool bParam2) //Position: 0x415B / 16731
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= uParam0)
	{
		if (IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
		{
			if (&bParam2 == &vParam1[iVar03] + 16)
			{
				if (IS_ACTOR_VALID(Function_95(&uParam0, &vParam1, iVar0, 0, 0, 1)))
				{
					return 1;
				}
				Function_5(&uParam0, &vParam1, iVar0, 0);
				return 0;
			}
		}
		iVar0++;
	}
	return 0;
}

var Function_95(struct<2>[] Param0, vector3[] vParam1, var uParam2, var uParam3, bool bParam4, bool bParam5) //Position: 0x41BE / 16830
{
	int iVar0;
	var uVar1;
	struct<2> Var2;
	
	iVar0 = uParam2;
	if (!iVar0 > Param0 && iVar0 <= 0)
	{
		return "";
	}
	if (Function_12(&(Param0[iVar02]), 1))
	{
		return "";
	}
	if (!Function_12(&(Param0[iVar02]), 2))
	{
		return "";
	}
	if (IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
	{
		if (IS_PERS_CHAR_ALIVE(&vParam1[iVar03] + 16) || uParam3)
		{
			if (!IS_PERS_CHAR_ALIVE(&vParam1[iVar03] + 16))
			{
				REVIVE_PERS_CHAR(&vParam1[iVar03] + 16, 1);
			}
			if (!Function_12(&(Param0[iVar02]), 8))
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], 1, false);
				Function_9(&(Param0[iVar02]), 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(&vParam1[iVar03] + 16);
			uVar1 = GET_ACTOR_FROM_PERS_CHAR(&vParam1[iVar03] + 16);
		}
	}
	else if (IS_EARLIER_THAN(&Param0[iVar02] + 8, 0) || uParam3)
	{
		GET_POSITION(GET_PLAYER_ACTOR(0), &Var2);
		(&vParam1[iVar03] + 16) = Function_97(StackVal, &Global_10996, Function_30(), vParam1[iVar03], &vParam1[iVar03] + 8, Var2, 0x42700000);
		if (IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
		{
			if (!Function_12(&(Param0[iVar02]), 8))
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], 1, false);
				Function_9(&(Param0[iVar02]), 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(&vParam1[iVar03] + 16);
			uVar1 = GET_ACTOR_FROM_PERS_CHAR(&vParam1[iVar03] + 16);
		}
	}
	if (!IS_ACTOR_VALID(&uVar1))
	{
		return "";
	}
	Function_9(&(Param0[iVar02]), 1);
	Function_96(&vParam1[iVar03] + 16, 1);
	if (&bParam5)
	{
		MAKE_ACTOR_READY_FOR_ACTION(&uVar1, 1);
	}
	if (!&bParam4)
	{
		if (IS_ACTOR_HOGTIED(&uVar1))
		{
			FREE_FROM_HOGTIE(&uVar1);
		}
	}
	return &uVar1;
}

int Function_96(int iParam0, bool bParam1) //Position: 0x4385 / 17285
{
	var uVar0;
	var uVar1;
	
	if (IS_PERS_CHAR_VALID(&iParam0))
	{
		uVar0 = GET_ACTOR_FROM_PERS_CHAR(&iParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			TASK_CLEAR(&uVar0);
			REFERENCE_ACTOR(&uVar0);
			TASK_PRIORITY_SET(&uVar0, true);
			SET_ACTOR_UPDATE_PRIORITY(&uVar0, false);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(&uVar0, 1);
			if (&bParam1)
			{
				if (IS_ACTOR_HOGTIED(&uVar0))
				{
					FREE_FROM_HOGTIE(&uVar0);
				}
			}
		}
		uVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&iParam0), "Persistent_Char_Brain");
		if (GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(&uVar1), "ScriptStructure", "stolen_flag", 1))
		{
			SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&iParam0, 1);
			return 1;
		}
	}
	return 0;
}

var Function_97(var uParam0, var uParam1, var uParam2, var uParam3, struct<2> Param4, float fParam6) //Position: 0x4437 / 17463
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	int iVar4;
	
	if (&fParam6 > 1.0f)
	{
		fParam6 = 60.0f;
	}
	uVar2 = CREATE_PERS_CHAR_IN_LAYOUT(&uParam0, &uParam1, uParam2, Param4, &fParam6);
	if (!IS_PERS_CHAR_VALID(&uVar2))
	{
		return "";
	}
	uVar3 = CREATE_GRINGO_ON_OBJECT_BY_ID(GET_OBJECT_FROM_PERS_CHAR(&uVar2), "Persistent_Char_Brain", &uParam3, Var0, Var0);
	if (IS_OBJECT_VALID(&uVar3))
	{
		ATTACH_OBJECTS(StackVal, StackVal, &uVar3, GET_OBJECT_FROM_PERS_CHAR(&uVar2), Function_30(), Vector(0.0f, 1,5f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
	}
	else
	{
		DESTROY_PERS_CHAR(&uVar2);
		return "";
	}
	(&iVar4 + 36) = Param4;
	iVar4 = *(&iVar4 + 36);
	*(&iVar4 + 12) = *(&iVar4 + 36);
	*(&iVar4 + 24) = *(&iVar4 + 36);
	*(&iVar4 + 48) = *(&iVar4 + 36);
	*(&iVar4 + 60) = *(&iVar4 + 36);
	*(&iVar4 + 72) = &uParam0;
	GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar3), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar4, 22);
	return &uVar2;
}

bool Function_98(int iParam0) //Position: 0x455E / 17758
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	struct<2> Var4;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar6 = Function_13(&iParam0 + 32);
	if (iVar6 >= 0)
	{
		bVar0 = false;
		while (bVar0 <= (iVar6 - 1))
		{
			iVar7 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0 + 32, bVar0);
			if (IS_ACTOR_VALID(&iVar7))
			{
				GET_POSITION(GET_PLAYER_ACTOR(0), &Var2);
				GET_POSITION(&iVar7, &Var4);
				if (VDIST(Var2, Var4) < 20.0f || !Function_91(GET_PLAYER_ACTOR(0), &iVar7, 0x3f000000))
				{
					iVar1 = 0;
					while (iVar1 <= 10)
					{
						iVar8 = &iParam0 + 136[iVar14];
						if (IS_ACTOR_VALID(&iVar8))
						{
							if (&iVar7 == &iVar8)
							{
								Function_90(&iParam0 + 136[iVar14]);
								Function_99(&iVar7);
							}
						}
						iVar1++;
					}
				}
			}
			bVar0++;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_99(int iParam0) //Position: 0x4622 / 17954
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		TASK_CLEAR(&iParam0);
		SQUAD_LEAVE(&iParam0);
		Function_4(&Global_11544, &Global_13580, &iParam0, 0);
	}
	else
	{
		return 0;
	}
	return 1;
}

bool Function_100(int iParam0) //Position: 0x4650 / 18000
{
	struct<2> Var0;
	char* cVar2[32];
	var uVar10;
	var uVar12;
	var uVar14;
	
	if (!IS_LAYOUTREF_VALID(&iParam0))
	{
		return 0;
	}
	strcpy(&cVar2, "panicCiv", 32);
	cVar2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_68(&cVar2) };
	GET_POSITION(GET_PLAYER_ACTOR(0), &Var0);
	Function_67(StackVal, &iParam0 + 1324, 0, Var0, 0.0f, 5.0f, 10.0f, 0, 0x40a00000, 0);
	Function_60(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 8, *(&iParam0 + 1260), &uVar12, 1);
	Function_60(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 0, *(&iParam0 + 1260), &uVar10, 0);
	uVar14 = Function_101(&iParam0);
	if (IS_ACTOR_VALID(&uVar14))
	{
		TELEPORT_ACTOR(&uVar14, &uVar12, 1, 1, 1);
		SQUAD_JOIN(&uVar14, &iParam0 + 32);
		AI_DONT_HARM_ACTOR(GET_PLAYER_ACTOR(0));
		TASK_GO_TO_COORD(&uVar14, &uVar10, 4);
		TASK_PRIORITY_SET(&uVar14, false);
		MEMORY_CONSIDER_AS(&uVar14, GET_PLAYER_ACTOR(0), 2);
		MEMORY_IDENTIFY(&uVar14, GET_PLAYER_ACTOR(0));
	}
	else
	{
		return 0;
	}
	return 1;
}

var Function_101(int iParam0) //Position: 0x471E / 18206
{
	int iVar0;
	var uVar1;
	var uVar2;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	var uVar8;
	int iVar9;
	
	iVar0 = "";
	uVar1 = GET_PLAYER_ACTOR(0);
	uVar2 = "";
	bVar7 = false;
	GET_POSITION(&uVar1, &Var3);
	uVar8 = CREATE_OBJECT_ITERATOR(&iParam0);
	ITERATE_IN_LAYOUT(&uVar8, &Global_10996);
	if (!IS_ITERATOR_VALID(&uVar8))
	{
		LOG_ERROR("STICKUP_GetPersCharCiv: Invalid Iterator created.");
	}
	ITERATE_ON_OBJECT_TYPE(&uVar8, 24);
	iVar9 = START_OBJECT_ITERATOR(&uVar8);
	while (IS_OBJECT_VALID(&iVar9) && !bVar7)
	{
		uVar2 = GET_PERS_CHAR_FROM_OBJECT(&iVar9);
		iVar0 = GET_ACTOR_FROM_PERS_CHAR(&uVar2);
		if (IS_PERS_CHAR_VALID(&uVar2))
		{
			ACTIVATE_ACTOR_FOR_PERS_CHAR(&uVar2);
			Function_102(&Global_11544, &Global_13580, &uVar2);
			GET_POSITION(&iVar0, &Var5);
			if (VDIST(Var3, Var5) < 20.0f)
			{
				Function_94(&Global_11544, &Global_13580, &uVar2);
				TASK_CLEAR(&iVar0);
				bVar7 = true;
			}
			else
			{
				iVar9 = OBJECT_ITERATOR_NEXT(&uVar8);
			}
		}
		else
		{
			iVar9 = OBJECT_ITERATOR_NEXT(&uVar8);
		}
	}
	DESTROY_ITERATOR(&uVar8);
	return &iVar0;
}

var Function_102(var uParam0, vector3[] vParam1, int iParam2) //Position: 0x4838 / 18488
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= uParam0)
	{
		if (IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
		{
			if (&iParam2 == &vParam1[iVar03] + 16)
			{
				return Function_103(&uParam0, &vParam1, iVar0);
			}
		}
		iVar0++;
	}
	return "";
}

var Function_103(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0x4881 / 18561
{
	int iVar0;
	
	iVar0 = iParam2;
	if (iVar0 <= Param0 || iVar0 > 0)
	{
		return "";
	}
	if (!Function_12(&(Param0[iVar02]), 2))
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

bool Function_104(int iParam0, int iParam1) //Position: 0x48DB / 18651
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 <= 10)
	{
		if (&iParam0 + 136[iVar14] == &iParam1)
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	if (iVar0 == 1)
	{
		bVar2 = false;
		iVar1 = 0;
		while (iVar1 > 10 && !bVar2)
		{
			if (&iParam0 + 136[iVar14] == "")
			{
				bVar2 = true;
			}
			else
			{
				iVar1++;
			}
		}
		if (bVar2)
		{
			(&iParam0 + 136[iVar14]) = &iParam1;
			(&iParam0 + 136[iVar14])->f_28 = 2;
			(&iParam0 + 136[iVar14])->f_20 = iVar1;
			return 1;
		}
		return 0;
	}
	return 0;
}

bool Function_105(struct<1781> Param0) //Position: 0x4982 / 18818
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	iVar0 = 0;
	bVar1 = false;
	if (!(IS_ACTOR_VALID(&iParam1) || IS_ACTOR_ALIVE(&iParam1)))
	{
		return 0;
	}
	while (iVar0 > Param0.f_1780 && !bVar1)
	{
		if (&Param0 + 136[iVar04] == &iParam1)
		{
			bVar1 = true;
		}
		else
		{
			iVar0++;
		}
	}
	if (bVar1 == 0)
	{
		return 0;
	}
	iVar2 = (&Param0 + 136[iVar04])->f_28;
	if (!(iVar2 <= 4 && iParam2 != 2))
	{
		(&Param0 + 136[iVar04])->f_28 = iParam2;
	}
	return 1;
}

var Function_106(int iParam0) //Position: 0x4A00 / 18944
{
	if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&iParam0)))
	{
		return GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&iParam0));
	}
	return 4294967295;
}

var Function_107() //Position: 0x4A1D / 18973
{
	int iVar0;
	
	iVar0 = GET_ACTOR_UNDER_RETICLE(GET_PLAYER_ACTOR(0), 0);
	if (IS_ACTOR_VALID(&iVar0))
	{
		return &iVar0;
	}
	return "";
}

void Function_108(struct<1865> Param0) //Position: 0x4A3D / 19005
{
	char* cVar0[16];
	
	if (!Function_113(524288))
	{
		if (Function_111(&Param0 + 24, GET_PLAYER_ACTOR(0), 10.0f, 1))
		{
			if (CAN_ANYONE_OF_FACTION_SEE_OBJECT(Param0.f_1404, GET_PLAYER_ACTOR(0)))
			{
			}
		}
		return;
	}
	if (Param0.f_1864)
	{
		Param0.f_132 = 2;
		Function_110(&Param0);
		Function_120("law_kill_him_en", 2,5f, 0, 2, 1, 0);
		return;
	}
	if (!((Param0.f_1852 || Param0.f_1856) || Param0.f_1860))
	{
		if (Function_109(&Param0 + 24, GET_PLAYER_ACTOR(0), 10.0f, 3.0f))
		{
			if (CAN_ANYONE_OF_FACTION_SEE_OBJECT(Param0.f_1404, GET_PLAYER_ACTOR(0)))
			{
				Global_6651 = 1;
				if (!IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 72))
				{
					(&Param0 + 72) = ADD_SCRIPT_USE_CONTEXT("nlaw_taunt", 1, "@FOOT.INTERACT", 0, 0, 0, 0, 4294967295, 0);
				}
				if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(&Param0 + 72))
				{
					strcpy(&cVar0, "player_taunt_", 16);
					straddi(&cVar0, RAND_INT_RANGE(0, 4), 16);
					Function_120(&cVar0, 2,5f, 0, 2, 1, 0);
					SET_ACTION_NODE_FOR_ACTOR(GET_PLAYER_ACTOR(0), "Main/Default/DefaultGait/Taunt");
					RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 72);
					Param0.f_1856 = 1;
					Param0.f_132 = 1;
				}
				if (!IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 64))
				{
					*(&Param0 + 64) = ADD_SCRIPT_USE_CONTEXT("law_submit", 1, "@GENERIC.USE2", 0, 0, 0, 0, 4294967295, 0);
				}
				if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(&Param0 + 64))
				{
					Function_120("law_player_give_up", 2,5f, 0, 2, 1, 0);
					RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 64);
					RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 72);
					Param0.f_1852 = 1;
					Param0.f_132 = 3;
					Global_6651 = 0;
				}
			}
			else
			{
				if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 64))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 64);
				}
				if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 72))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 72);
				}
				Global_6651 = 0;
			}
		}
		else
		{
			if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 64))
			{
				RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 64);
			}
			if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 72))
			{
				RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 72);
			}
			Global_6651 = 0;
		}
	}
	else if ((Param0.f_1852 || Param0.f_1856) || Param0.f_1860)
	{
		if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 64))
		{
			RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 64);
		}
		if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 72))
		{
			RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 72);
		}
		Global_6651 = 0;
	}
	return;
}

bool Function_109(var uParam0, var uParam1, bool bParam2, float fParam3) //Position: 0x4CCF / 19663
{
	bool bVar0;
	float fVar1;
	struct<5> Var2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&uParam1))
	{
		return 0;
	}
	if (!IS_ACTOR_ALIVE(&uParam1))
	{
		return 0;
	}
	GET_POSITION(GET_PLAYER_ACTOR(0), &Var2);
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		fVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&fVar1))
		{
			if (IS_ACTOR_ALIVE(&fVar1))
			{
				GET_POSITION(&fVar1, &Var4);
				if (FABS((StackVal - StackVal)) > fParam3)
				{
					if (ACTORS_IN_RANGE(&fVar1, &uParam1, bParam2))
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

void Function_110(int iParam0) //Position: 0x4D6D / 19821
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(&iParam0 + 64))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&iParam0 + 64);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&iParam0 + 72))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&iParam0 + 72);
	}
	return;
}

bool Function_111(var uParam0, var uParam1, bool bParam2, var uParam3) //Position: 0x4D9D / 19869
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
					if (!Function_112(&uVar1, 1) || uParam3)
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

bool Function_112(int iParam0, int iParam1) //Position: 0x4E42 / 20034
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

bool Function_113(int iParam0) //Position: 0x4E94 / 20116
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_114(struct<1877> Param0) //Position: 0x4EB2 / 20146
{
	struct<2> Var0;
	struct<2> Var2;
	var uVar4;
	var uVar6;
	bool bVar7;
	var uVar8;
	
	uVar6 = &Param0 + 8;
	if (!IS_VOLUME_VALID(&uVar6))
	{
		return 0;
	}
	if (IS_ACTOR_VALID(&Param0 + 56))
	{
		return 0;
	}
	GET_OBJECT_POSITION(GET_OBJECT_FROM_VOLUME(&uVar6), &uVar4);
	GET_POSITION(GET_PLAYER_ACTOR(0), &Var2);
	Function_67(StackVal, &Param0 + 1324, 0, Var2, 0.0f, 5.0f, 10.0f, 0, 0x40a00000, 0);
	Function_60(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 8, *(&Param0 + 1260), &Var0, 1);
	bVar7 = (*&Param0 + 1656)[RAND_INT_RANGE(0, 7)];
	uVar8 = CREATE_ACTOR_IN_LAYOUT(&Param0, "stickup_torch_carrier", bVar7, Var0, Var2);
	if (!IS_ACTOR_VALID(&uVar8))
	{
		return 0;
	}
	*(&Param0 + 56) = &uVar8;
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Param0 + 56);
	GIVE_WEAPON_TO_ACTOR(&Param0 + 56, 23, 0,999f, 1, 1);
	TASK_GO_NEAR_COORD(&Param0 + 56, &uVar4, 20.0f, 4);
	Param0.f_1876 = 1;
	return 1;
}

bool Function_115(vector3 vParam0) //Position: 0x4FA1 / 20385
{
	vParam0.f_8 = GET_CURRENT_GAME_TIME();
	if (vParam0.z <= vParam0.y && vParam0)
	{
		vParam0 = 0;
		return 1;
	}
	return 0;
}

bool Function_116(struct<1877> Param0) //Position: 0x4FCA / 20426
{
	var uVar0;
	
	if (Param0.f_1848 && !IS_VOLUME_VALID(&Param0 + 8))
	{
		uVar0 = GET_VOLUME_FROM_OBJECT(Function_117(GET_PLAYER_ACTOR(0), 256));
		if (IS_VOLUME_VALID(&uVar0))
		{
			*(&Param0 + 8) = &uVar0;
			if (!Param0.f_1876)
			{
			}
			return 1;
		}
	}
	if (IS_VOLUME_VALID(&Param0 + 8))
	{
		(&Param0 + 8) = "";
	}
	return 0;
}

var Function_117(int iParam0, bool bParam1) //Position: 0x5027 / 20519
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	int iVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	int iVar9;
	
	bVar0 = 99999.0f;
	iVar5 = "";
	iVar6 = "";
	uVar7 = "";
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return "";
	}
	GET_OBJECT_POSITION(&iParam0, &Var1);
	uVar8 = CREATE_OBJECT_ITERATOR(&Global_43578);
	iVar9 = CREATE_OBJECT_ITERATOR(&Global_43578);
	ITERATE_IN_LAYOUT(&uVar8, &Global_46715);
	ITERATE_ON_OBJECT_TYPE(&uVar8, 9);
	iVar6 = START_OBJECT_ITERATOR(&uVar8);
	while (IS_OBJECT_VALID(&iVar6))
	{
		if (DECOR_CHECK_EXIST(&iVar6, "locflag"))
		{
			if (Function_119(GET_VOLUME_FROM_OBJECT(&iVar6), &bParam1))
			{
				GET_VOLUME_CENTER(GET_VOLUME_FROM_OBJECT(&iVar6), &Var3);
				if (VDIST(Var1, Var3) > bVar0)
				{
					iVar5 = &iVar6;
					bVar0 = VDIST(Var1, Var3);
				}
			}
		}
		iVar6 = OBJECT_ITERATOR_NEXT(&uVar8);
	}
	Function_118(&uVar8);
	ITERATE_IN_LAYOUT(&uVar8, &Global_46715);
	ITERATE_ON_OBJECT_TYPE(&uVar8, 10);
	iVar6 = START_OBJECT_ITERATOR(&uVar8);
	while (IS_OBJECT_VALID(&iVar6))
	{
		if (DECOR_CHECK_EXIST(&iVar6, "locflag"))
		{
			if (Function_119(GET_VOLUME_FROM_OBJECT(&iVar6), &bParam1))
			{
				GET_VOLUME_CENTER(GET_VOLUME_FROM_OBJECT(&iVar6), &Var3);
				if (VDIST(Var1, Var3) > bVar0)
				{
					iVar5 = &iVar6;
					bVar0 = VDIST(Var1, Var3);
				}
			}
		}
		Function_118(&iVar9);
		ITERATE_IN_LAYOUT(&iVar9, &Global_46715);
		ITERATE_IN_VOLUME_SET(&iVar9, GET_VOLUME_FROM_OBJECT(&iVar6));
		uVar7 = START_OBJECT_ITERATOR(&iVar9);
		while (IS_OBJECT_VALID(&uVar7))
		{
			if (DECOR_CHECK_EXIST(&uVar7, "locflag"))
			{
				if (Function_119(GET_VOLUME_FROM_OBJECT(&uVar7), &bParam1))
				{
					GET_VOLUME_CENTER(GET_VOLUME_FROM_OBJECT(&uVar7), &Var3);
					if (VDIST(Var1, Var3) > bVar0)
					{
						iVar5 = &uVar7;
						bVar0 = VDIST(Var1, Var3);
					}
				}
			}
			uVar7 = OBJECT_ITERATOR_NEXT(&iVar9);
		}
		iVar6 = OBJECT_ITERATOR_NEXT(&uVar8);
	}
	DESTROY_ITERATOR(&uVar8);
	DESTROY_ITERATOR(&iVar9);
	return &iVar5;
}

int Function_118(int iParam0) //Position: 0x520F / 21007
{
	if (IS_ITERATOR_VALID(&iParam0))
	{
		ITERATE_EVERYWHERE(&iParam0);
		ITERATE_ON_PARTIAL_NAME(&iParam0, Function_30());
		ITERATE_ON_PARTIAL_MODEL_NAME(&iParam0, Function_30());
		ITERATE_ON_OBJECT_TYPE(&iParam0, 4294967295);
		return 1;
	}
	return 0;
}

bool Function_119(float fParam0, bool bParam1) //Position: 0x5245 / 21061
{
	if (!DECOR_CHECK_EXIST(&fParam0, "locflag"))
	{
		return 0;
	}
	return (DECOR_GET_INT(&fParam0, "locflag") && bParam1) < 0;
}

void Function_120(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x5276 / 21110
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_121(Global_10966) };
		}
		PRINT_SMALL_B(&cParam0, &fParam1, &iParam2, &iParam3, &iParam4, &Var0, &iParam5);
	}
	else
	{
		uVar4 = "";
		PRINT_SMALL_B(&cParam0, &fParam1, &iParam2, &iParam3, &iParam4, &uVar4, &iParam5);
	}
}

struct<16> Function_121(int iParam0) //Position: 0x52FB / 21243
{
	char* cVar0[16];
	
	if (!Function_50())
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

void Function_122(int iParam0) //Position: 0x533A / 21306
{
	iParam0 = 0;
	return;
}

int Function_123(int iParam0) //Position: 0x5345 / 21317
{
	var uVar0;
	int iVar2;
	bool bVar3;
	
	GET_POSITION(GET_PLAYER_ACTOR(0), &uVar0);
	if (SQUAD_IS_VALID(&iParam0 + 24))
	{
		bVar3 = false;
		while (bVar3 <= SQUAD_GET_SIZE(&iParam0 + 24))
		{
			iVar2 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0 + 24, bVar3);
			if (Function_124(GET_PLAYER_ACTOR(0), &iVar2) > 50.0f)
			{
				return 0;
			}
			bVar3++;
		}
	}
	if (SQUAD_IS_VALID(&iParam0 + 16))
	{
		bVar3 = false;
		while (bVar3 <= SQUAD_GET_SIZE(&iParam0 + 16))
		{
			iVar2 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0 + 16, bVar3);
			if (Function_124(GET_PLAYER_ACTOR(0), &iVar2) > 50.0f)
			{
				return 0;
			}
			bVar3++;
		}
	}
	if (SQUAD_IS_VALID(&iParam0 + 40))
	{
		bVar3 = false;
		while (bVar3 <= SQUAD_GET_SIZE(&iParam0 + 40))
		{
			iVar2 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0 + 40, bVar3);
			if (Function_124(GET_PLAYER_ACTOR(0), &iVar2) > 50.0f)
			{
				return 0;
			}
			bVar3++;
		}
	}
	return 1;
}

float Function_124(int iParam0, int iParam1) //Position: 0x5430 / 21552
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

int Function_125(int iParam0) //Position: 0x5525 / 21797
{
	struct<2> Var0;
	
	GET_POSITION(GET_PLAYER_ACTOR(0), &Var0);
	if (VDIST(Var0, (&iParam0 + 1756)) < 250.0f)
	{
		return 1;
	}
	return 0;
}

bool Function_126() //Position: 0x554F / 21839
{
	var uVar0;
	
	uVar0 = GET_PLAYER_ACTOR(0);
	if (!(IS_ACTOR_VALID(&uVar0) && IS_ACTOR_ALIVE(&uVar0)))
	{
		return 0;
	}
	return 1;
}

void Function_127(int iParam0) //Position: 0x5570 / 21872
{
	if (!Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 1;
		if (&iParam0 == 1)
		{
			Global_15860 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_53())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_128(struct<13> Param0) //Position: 0x55A9 / 21929
{
	Param0.f_8 = GET_CURRENT_GAME_TIME();
	Param0.f_4 = (StackVal + Param0.f_12);
	Param0 = 1;
	return;
}

void Function_129(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7) //Position: 0x55CC / 21964
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
				if (GET_BLIP_ICON(&uVar1) != iParam1)
				{
					CHANGE_BLIP_ICON(&uVar1, iParam1);
				}
				SET_BLIP_MIN_DISTANCE(&uVar1, &bParam3);
				SET_BLIP_MAX_DISTANCE(&uVar1, &iParam4);
				SET_BLIP_SCALE(&uVar1, &iParam5);
				if (&bParam7)
				{
					SET_BLIP_FLAG(&uVar1, 8192, 0);
				}
			}
			else
			{
				uVar1 = ADD_BLIP_FOR_ACTOR(&uVar2, iParam1, &bParam3, 2, 0);
				SET_BLIP_MAX_DISTANCE(&uVar1, &iParam4);
				SET_BLIP_SCALE(&uVar1, &iParam5);
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
				SET_BLIP_IMPAIRMENT_MASK(&uVar1, (GET_BLIP_IMPAIRMENT_MASK(&uVar1) || iParam6));
			}
		}
		bVar0++;
	}
}

int Function_130(struct<1857> Param0) //Position: 0x56DC / 22236
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	
	bVar4 = (*&Param0 + 1656)[RAND_INT_RANGE(0, 7)];
	iVar0 = CREATE_ACTOR_IN_LAYOUT(&Param0, "stickup_ground_gunman01", bVar4, *(&Param0 + 1048[03]), *(&Param0 + 1048[03] + 12));
	if (IS_ACTOR_VALID(&iVar0))
	{
		SQUAD_JOIN(&iVar0, &Param0 + 24);
		GIVE_WEAPON_TO_ACTOR(&iVar0, 21, 0f, 1, 1);
		TASK_DRAW_HOLSTER_WEAPON(&iVar0, 1);
		TASK_STAND_STILL(&iVar0, -1.0f, 0, 0);
		TASK_POINT_GUN_AT_OBJECT(&iVar0, GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0)), -1.0f, 0);
		Function_131(&Param0, &iVar0);
		if (Param0.f_1856)
		{
			MEMORY_ATTACK_ON_SIGHT(&iVar0, 1);
		}
		else
		{
			SET_ACTOR_FACTION(&iVar0, 1);
		}
	}
	bVar4 = (*&Param0 + 1656)[RAND_INT_RANGE(0, 7)];
	iVar1 = CREATE_ACTOR_IN_LAYOUT(&Param0, "stickup_ground_gunman02", bVar4, *(&Param0 + 1048[13]), *(&Param0 + 1048[13] + 12));
	if (IS_ACTOR_VALID(&iVar1))
	{
		SQUAD_JOIN(&iVar1, &Param0 + 24);
		GIVE_WEAPON_TO_ACTOR(&iVar1, 21, 0f, 1, 1);
		TASK_DRAW_HOLSTER_WEAPON(&iVar1, 1);
		TASK_STAND_STILL(&iVar1, -1.0f, 0, 0);
		TASK_POINT_GUN_AT_OBJECT(&iVar1, GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0)), -1.0f, 0);
		Function_131(&Param0, &iVar1);
		if (Param0.f_1856)
		{
			MEMORY_ATTACK_ON_SIGHT(&iVar1, 1);
		}
		else
		{
			SET_ACTOR_FACTION(&iVar1, 1);
		}
	}
	bVar4 = (*&Param0 + 1656)[RAND_INT_RANGE(0, 7)];
	iVar2 = CREATE_ACTOR_IN_LAYOUT(&Param0, "stickup_ground_gunman03", bVar4, *(&Param0 + 1048[23]), *(&Param0 + 1048[23] + 12));
	if (IS_ACTOR_VALID(&iVar2))
	{
		SQUAD_JOIN(&iVar2, &Param0 + 24);
		GIVE_WEAPON_TO_ACTOR(&iVar2, 21, 0f, 1, 1);
		TASK_DRAW_HOLSTER_WEAPON(&iVar2, 1);
		TASK_STAND_STILL(&iVar2, -1.0f, 0, 0);
		TASK_POINT_GUN_AT_OBJECT(&iVar2, GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0)), -1.0f, 0);
		Function_131(&Param0, &iVar2);
		if (Param0.f_1856)
		{
			MEMORY_ATTACK_ON_SIGHT(&iVar2, 1);
		}
		else
		{
			SET_ACTOR_FACTION(&iVar2, 1);
		}
	}
	bVar4 = (*&Param0 + 1656)[RAND_INT_RANGE(0, 7)];
	iVar3 = CREATE_ACTOR_IN_LAYOUT(&Param0, "stickup_ground_gunman04", bVar4, *(&Param0 + 1048[33]), *(&Param0 + 1048[33] + 12));
	if (IS_ACTOR_VALID(&iVar3))
	{
		SQUAD_JOIN(&iVar3, &Param0 + 24);
		GIVE_WEAPON_TO_ACTOR(&iVar3, 21, 0f, 1, 1);
		TASK_DRAW_HOLSTER_WEAPON(&iVar3, 1);
		TASK_STAND_STILL(&iVar3, -1.0f, 0, 0);
		TASK_POINT_GUN_AT_OBJECT(&iVar3, GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0)), -1.0f, 0);
		Function_131(&Param0, &iVar3);
		if (Param0.f_1856)
		{
			MEMORY_ATTACK_ON_SIGHT(&iVar3, 1);
		}
		else
		{
			SET_ACTOR_FACTION(&iVar3, 1);
		}
	}
	SQUAD_GOAL_ADD_GENERAL_TASK(&Param0 + 24, 0, 1, 1);
	TASK_USE_LASSO(0, GET_PLAYER_ACTOR(0), 0,75f, 30.0f, 1, 0);
	return 1;
}

int Function_131(int iParam0, int iParam1) //Position: 0x59C4 / 22980
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (&iParam0 + 464[iVar17] == &iParam1)
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	if (iVar0 == 1)
	{
		bVar2 = false;
		iVar1 = 0;
		while (iVar1 > 8 && !bVar2)
		{
			if (&iParam0 + 464[iVar17] == "")
			{
				bVar2 = true;
			}
			else
			{
				iVar1++;
			}
		}
		if (bVar2)
		{
			(&iParam0 + 464[iVar17]) = &iParam1;
			GET_POSITION(&iParam1, &iParam0 + 464[iVar17] + 20);
			(&iParam0 + 464[iVar17])->f_52 = 1;
			(&iParam0 + 464[iVar17])->f_32 = iVar1;
			return 1;
		}
		return 0;
	}
	return 0;
}

int Function_132(struct<1857> Param0) //Position: 0x5A81 / 23169
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	
	bVar4 = (*&Param0 + 1656)[RAND_INT_RANGE(0, 7)];
	uVar0 = CREATE_ACTOR_IN_LAYOUT(&Param0, "stickup_rooftop_gunman01", bVar4, *(&Param0 + 1152[03]), *(&Param0 + 1152[03] + 12));
	if (IS_ACTOR_VALID(&uVar0))
	{
		SQUAD_JOIN(&uVar0, &Param0 + 16);
		DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar0);
		GIVE_WEAPON_TO_ACTOR(&uVar0, 41, 0,999f, 1, 1);
		TASK_DRAW_HOLSTER_WEAPON(&uVar0, 1);
		TASK_STAND_STILL(&uVar0, -1.0f, 0, 0);
		TASK_POINT_GUN_AT_OBJECT(&uVar0, GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0)), -1.0f, 0);
		Function_131(&Param0, &uVar0);
		if (Param0.f_1856)
		{
			MEMORY_ATTACK_ON_SIGHT(&uVar0, 1);
		}
		else
		{
			SET_ACTOR_FACTION(&uVar0, 1);
		}
	}
	bVar4 = (*&Param0 + 1656)[RAND_INT_RANGE(0, 7)];
	iVar1 = CREATE_ACTOR_IN_LAYOUT(&Param0, "stickup_rooftop_gunman02", bVar4, *(&Param0 + 1152[13]), *(&Param0 + 1152[13] + 12));
	if (IS_ACTOR_VALID(&iVar1))
	{
		SQUAD_JOIN(&iVar1, &Param0 + 16);
		DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar1);
		GIVE_WEAPON_TO_ACTOR(&iVar1, 41, 0,999f, 1, 1);
		TASK_DRAW_HOLSTER_WEAPON(&iVar1, 1);
		TASK_STAND_STILL(&iVar1, -1.0f, 0, 0);
		TASK_POINT_GUN_AT_OBJECT(&iVar1, GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0)), -1.0f, 0);
		Function_131(&Param0, &iVar1);
		if (Param0.f_1856)
		{
			MEMORY_ATTACK_ON_SIGHT(&iVar1, 1);
		}
		else
		{
			SET_ACTOR_FACTION(&iVar1, 1);
		}
	}
	bVar4 = (*&Param0 + 1656)[RAND_INT_RANGE(0, 7)];
	iVar2 = CREATE_ACTOR_IN_LAYOUT(&Param0, "stickup_rooftop_gunman03", bVar4, *(&Param0 + 1152[23]), *(&Param0 + 1152[23] + 12));
	if (IS_ACTOR_VALID(&iVar2))
	{
		SQUAD_JOIN(&iVar2, &Param0 + 16);
		DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar2);
		GIVE_WEAPON_TO_ACTOR(&iVar2, 41, 0,999f, 1, 1);
		TASK_DRAW_HOLSTER_WEAPON(&iVar2, 1);
		TASK_STAND_STILL(&iVar2, -1.0f, 0, 0);
		TASK_POINT_GUN_AT_OBJECT(&iVar2, GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0)), -1.0f, 0);
		Function_131(&Param0, &iVar2);
		if (Param0.f_1856)
		{
			MEMORY_ATTACK_ON_SIGHT(&iVar2, 1);
		}
		else
		{
			SET_ACTOR_FACTION(&iVar2, 1);
		}
	}
	bVar4 = (*&Param0 + 1656)[RAND_INT_RANGE(0, 7)];
	iVar3 = CREATE_ACTOR_IN_LAYOUT(&Param0, "stickup_rooftop_gunman04", bVar4, *(&Param0 + 1152[33]), *(&Param0 + 1152[33] + 12));
	if (IS_ACTOR_VALID(&iVar3))
	{
		SQUAD_JOIN(&iVar3, &Param0 + 16);
		DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar3);
		GIVE_WEAPON_TO_ACTOR(&iVar3, 41, 0,999f, 1, 1);
		TASK_DRAW_HOLSTER_WEAPON(&iVar3, 1);
		TASK_STAND_STILL(&iVar3, -1.0f, 0, 0);
		TASK_POINT_GUN_AT_OBJECT(&iVar3, GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0)), -1.0f, 0);
		Function_131(&Param0, &iVar3);
		if (Param0.f_1856)
		{
			MEMORY_ATTACK_ON_SIGHT(&iVar3, 1);
		}
		else
		{
			SET_ACTOR_FACTION(&iVar3, 1);
		}
	}
	return 1;
}

void Function_133(int iParam0) //Position: 0x5D74 / 23924
{
	Function_134(&Global_43580, iParam0);
	return;
}

void Function_134(var uParam0, int iParam1) //Position: 0x5D82 / 23938
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	uParam0 |= 1073741824;
	return;
}

void Function_135(int iParam0) //Position: 0x5DAA / 23978
{
	*(&iParam0 + 1152[03]) = Vector(-825,466f, 96,9592f, 2425,84f);
	*(&iParam0 + 1152[03] + 12) = Vector(0.0f, 50,7859f, 0.0f);
	*(&iParam0 + 1152[13]) = Vector(-823,896f, 96,9595f, 2425,88f);
	*(&iParam0 + 1152[13] + 12) = Vector(0.0f, 50,7859f, 0.0f);
	*(&iParam0 + 1152[23]) = Vector(-819,786f, 96,9586f, 2427,1f);
	*(&iParam0 + 1152[23] + 12) = Vector(0.0f, -64,6452f, 0.0f);
	*(&iParam0 + 1152[33]) = Vector(-817,419f, 96,9594f, 2427,61f);
	*(&iParam0 + 1152[33] + 12) = Vector(0.0f, 21,7677f, 0.0f);
	return;
}

void Function_136(int iParam0) //Position: 0x5E68 / 24168
{
	*(&iParam0 + 1048[03]) = Vector(-819,401f, 92,3609f, 2410,17f);
	*(&iParam0 + 1048[03] + 12) = Vector(0.0f, 21,7677f, 0.0f);
	*(&iParam0 + 1048[13]) = Vector(-832,08f, 92,5827f, 2397,9f);
	*(&iParam0 + 1048[13] + 12) = Vector(0.0f, 21,7677f, 0.0f);
	*(&iParam0 + 1048[23]) = Vector(-826,242f, 92,3608f, 2384,88f);
	*(&iParam0 + 1048[23] + 12) = Vector(0.0f, 21,7677f, 0.0f);
	*(&iParam0 + 1048[33]) = Vector(-828,583f, 92,3608f, 2370,58f);
	*(&iParam0 + 1048[33] + 12) = Vector(0.0f, 21,7677f, 0.0f);
	return;
}

void Function_137(struct<1825> Param0) //Position: 0x5F26 / 24358
{
	char* cVar0[32];
	
	if (!IS_LAYOUTREF_VALID(&Param0))
	{
		strcpy(&cVar0, "stickupstructlayout", 32);
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_68(&cVar0) };
		Param0 = CREATE_LAYOUT(&cVar0);
		if (!IS_LAYOUTREF_VALID(&Param0))
		{
			LOG_ERROR("couldn't create internal stickup layout");
		}
		strcpy(&cVar0, "panicCivSquad", 32);
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_68(&cVar0) };
		*(&Param0 + 32) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Param0, &cVar0));
		strcpy(&cVar0, "lawMenSquad", 32);
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_68(&cVar0) };
		*(&Param0 + 16) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Param0, &cVar0));
		strcpy(&cVar0, "lawMenGroundSquad", 32);
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_68(&cVar0) };
		*(&Param0 + 24) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Param0, &cVar0));
		strcpy(&cVar0, "horseMenSquad", 32);
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_68(&cVar0) };
		*(&Param0 + 40) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Param0, &cVar0));
		Param0.f_1824 = 1;
	}
	return;
}

bool Function_138(struct<2>[] Param0) //Position: 0x6068 / 24680
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_142();
	iVar1 = 0;
	if (!Function_17(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_141(&(Param0[iVar02]), 8);
		}
		else if (Function_140())
		{
			iVar1 = 1;
			Function_141(&(Param0[iVar02]), 8);
		}
		Function_141(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_17(&(Param0[iVar02]), 4))
		{
			if (!Function_17(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_17(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_17(&(Param0[02]), 8) || iVar1));
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
				Function_141(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_17(&(Param0[iVar02]), 4))
		{
			if (!Function_17(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_141(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_141(&(Param0[iVar02]), 2);
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
							Function_141(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_141(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_141(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_141(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_141(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_141(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_141(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_141(&(Param0[iVar02]), 2);
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
	Function_139();
	return 1;
}

void Function_139() //Position: 0x642A / 25642
{
	if (!Function_48(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_140() //Position: 0x646A / 25706
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

void Function_141(struct<13> Param0) //Position: 0x6498 / 25752
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_142() //Position: 0x64AB / 25771
{
	if (!Function_48(128))
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

var Function_143(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x64ED / 25837
{
	int iVar0;
	
	bParam2 = &bParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_17(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = bParam1;
			Param0[iVar02].f_8 = 3;
			Function_141(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_141(&(Param0[iVar02]), 8);
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

var Function_144(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x65C9 / 26057
{
	return Function_145(StackVal, iParam0, iParam1, &iParam2, &iParam3, &iParam4, 0, Vector(0.0f, 0.0f, 0.0f));
}

var Function_145(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, float fParam5, struct<2> Param6) //Position: 0x65E6 / 26086
{
	switch (iParam0)
	{
		case 0x00000001:
			return Function_148(StackVal, &(Global_46972[0]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000002:
			return Function_148(StackVal, &(Global_46972[1]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000004:
			return Function_148(StackVal, &(Global_46972[2]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000008:
			return Function_148(StackVal, &(Global_46972[3]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000010:
			return Function_148(StackVal, &(Global_46972[4]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000020:
			return Function_148(StackVal, &(Global_46972[5]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000040:
			return Function_148(StackVal, &(Global_46972[6]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000080:
			return Function_148(StackVal, &(Global_46972[7]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000100:
			return Function_148(StackVal, &(Global_46972[8]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000200:
			return Function_148(StackVal, &(Global_46972[9]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000400:
			return Function_148(StackVal, &(Global_46972[10]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000800:
			return Function_148(StackVal, &(Global_46972[11]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00001000:
			return Function_148(StackVal, &(Global_46972[12]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00002000:
			return Function_148(StackVal, &(Global_46972[13]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return Function_146(StackVal, iParam0, bParam1, iParam2, fParam5, Param6);
}

var Function_146(var uParam0, bool bParam1, int iParam2, float fParam3, struct<2> Param4) //Position: 0x6849 / 26697
{
	bool bVar0;
	
	bVar0 = CREATE_POPULATION_SET(0);
	if (uParam0 & 1 == 1)
	{
		Function_147(&(Global_46972[0]), &bVar0);
	}
	if (uParam0 & 2 == 2)
	{
		Function_147(&(Global_46972[1]), &bVar0);
	}
	if (uParam0 & 4 == 4)
	{
		Function_147(&(Global_46972[2]), &bVar0);
	}
	if (uParam0 & 8 == 8)
	{
		Function_147(&(Global_46972[3]), &bVar0);
	}
	if (uParam0 & 16 == 16)
	{
		Function_147(&(Global_46972[4]), &bVar0);
	}
	if (uParam0 & 32 == 32)
	{
		Function_147(&(Global_46972[5]), &bVar0);
	}
	if (uParam0 & 64 == 64)
	{
		Function_147(&(Global_46972[6]), &bVar0);
	}
	if (uParam0 & 128 == 128)
	{
		Function_147(&(Global_46972[7]), &bVar0);
	}
	if (uParam0 & 256 == 256)
	{
		Function_147(&(Global_46972[8]), &bVar0);
	}
	if (uParam0 & 512 == 512)
	{
		Function_147(&(Global_46972[9]), &bVar0);
	}
	if (uParam0 & 1024 == 1024)
	{
		Function_147(&(Global_46972[10]), &bVar0);
	}
	if (uParam0 & 2048 == 2048)
	{
		Function_147(&(Global_46972[11]), &bVar0);
	}
	if (uParam0 & 4096 == 4096)
	{
		Function_147(&(Global_46972[12]), &bVar0);
	}
	if (uParam0 & 8192 == 8192)
	{
		Function_147(&(Global_46972[13]), &bVar0);
	}
	return Function_148(StackVal, &bVar0, bParam1, iParam2, 4294967295, 0, fParam3, Param4);
}

void Function_147(var uParam0, bool bParam1) //Position: 0x69B8 / 27064
{
	int iVar0;
	
	if (!IS_POPSET_VALID(&uParam0))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid subPOPSET");
	}
	if (!IS_POPSET_VALID(&bParam1))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid master popset");
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0))
	{
		LINK_ACTORENUM_TO_POPULATION(&bParam1, GET_ACTORENUM_IN_POPULATION(&uParam0, iVar0), GET_ACTORENUM_IN_POPULATION_WEIGHT(&uParam0, iVar0));
		iVar0++;
	}
	return;
}

var Function_148(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, float fParam5, struct<2> Param6) //Position: 0x6A7C / 27260
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
		Function_153();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&bParam0, iParam2, iParam3, bParam4, fParam5, Param6);
	if (!Function_59(bVar1))
	{
		if (!Global_47146 && !Global_47147)
		{
			Function_152(&bParam0, bParam1, iParam2, iParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_152(&bParam0, bParam1, iParam2, iParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && iParam3 != 4294967295)
		{
			while (Function_151(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&bParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_59(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_151(bVar0))
				{
					Function_150();
				}
				Function_149(bVar0);
			}
		}
		else if (!iParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != iParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&bParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_59(bVar1))
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

void Function_149(int iParam0) //Position: 0x6D75 / 28021
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

void Function_150() //Position: 0x6E29 / 28201
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

bool Function_151(bool bParam0) //Position: 0x6E64 / 28260
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

void Function_152(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x6E91 / 28305
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

void Function_153() //Position: 0x6FEC / 28652
{
	int iVar0;
	
	if (Global_6645)
	{
		if (StackVal || !&Global_46956 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_150();
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
	Function_150();
	return;
}

var Function_154(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x7038 / 28728
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_155(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_141(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_155(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x7076 / 28790
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_17(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_141(&(Param0[iVar02]), 4);
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

int Function_156(struct<1889> Param0) //Position: 0x7145 / 28997
{
	int iVar0;
	
	Param0 = "";
	(&Param0 + 8) = "";
	(&Param0 + 16) = "";
	(&Param0 + 24) = "";
	(&Param0 + 32) = "";
	(&Param0 + 40) = "";
	(&Param0 + 48) = "";
	(&Param0 + 56) = "";
	GET_POSITION(GET_PLAYER_ACTOR(0), &Param0 + 1756);
	Function_85();
	*(&Param0 + 1744) = Function_85();
	(&Param0 + 8) = "";
	(&Param0 + 32) = "";
	Param0.f_128 = 0;
	Param0.f_132 = 0;
	Param0.f_1780 = 0;
	Param0.f_1784 = 0;
	Param0.f_1788 = 0;
	Param0.f_1792 = 0;
	Param0.f_1796 = 0;
	Param0.f_1800 = 0;
	Param0.f_1804 = 0;
	Param0.f_1812 = GET_CURRENT_GAME_TIME();
	Param0.f_1808 = Param0.f_1812;
	Function_158(&Param0 + 1388, 7,5f);
	Param0.f_1404 = 1;
	Param0.f_1256 = 0;
	Param0.f_1816 = 0;
	Param0.f_1820 = 1;
	Param0.f_1824 = 0;
	Param0.f_1828 = 0;
	Param0.f_1832 = 0;
	Param0.f_1836 = 0;
	Param0.f_1840 = 0;
	Param0.f_1844 = 0;
	Param0.f_1848 = 0;
	Param0.f_1852 = 0;
	Param0.f_1856 = 0;
	Param0.f_1860 = 0;
	Param0.f_1864 = 0;
	Param0.f_1868 = 0;
	Param0.f_1876 = 0;
	Param0.f_1880 = 0;
	Param0.f_1884 = 0;
	Param0.f_1888 = 0;
	Function_157(&Param0 + 1260, 0, 3.0f, 0, 4294967295);
	Function_67(StackVal, &Param0 + 1324, 0, *(&Param0 + 1756), 0.0f, 5.0f, 10.0f, 0, 0x40a00000, 0);
	iVar0 = 0;
	while (iVar0 <= 10)
	{
		(&Param0 + 136[iVar04]) = "";
		(&Param0 + 136[iVar04])->f_28 = 0;
		Function_85();
		*(&Param0 + 136[iVar04] + 8) = Function_85();
		(&Param0 + 136[iVar04])->f_24 = 0;
		(&Param0 + 136[iVar04])->f_20 = 4294967295;
		iVar0++;
	}
	return 1;
}

void Function_157(struct<21> Param0) //Position: 0x731C / 29468
{
	Param0 = uParam1;
	Param0.f_4 = uParam2;
	Param0.f_8 = uParam3;
	Param0.f_16 = uParam4;
	Param0.f_20 = 0.0f;
	Param0.f_12 = 4294967295;
}

void Function_158(struct<13> Param0) //Position: 0x734B / 29515
{
	Param0 = 0;
	Param0.f_8 = GET_CURRENT_GAME_TIME();
	Param0.f_12 = uParam1;
	Param0.f_4 = (StackVal + Param0.f_12);
	return;
}

