//Decompiled with MagicRDR v1.0
//Function Count : 423
//Statics Count : 96
//Natives Count : 338
//Parameters Count : 0

#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	int iLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	float fLocal_18 = 0.0f;
	int iLocal_19 = 0;
	struct<9> Local_20[8];
	int iLocal_93 = 0;
	bool bLocal_94 = false;
	float fLocal_95 = 0.0f;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	
	iLocal_15 = 31;
	iLocal_16 = 33;
	iLocal_17 = 1;
	fLocal_18 = 2.0f;
	Function_239(&(vLocal_20[09]));
	Function_229(&(vLocal_20[19]));
	Function_216(&(vLocal_20[29]));
	Function_172(&(vLocal_20[39]));
	Function_65(&(vLocal_20[49]));
	Function_55(&(vLocal_20[59]));
	Function_39(&(vLocal_20[69]));
	Function_3(&(vLocal_20[79]));
	iVar0 = 0;
	while (iVar0 <= vLocal_20)
	{
		if (vLocal_20[iVar09].f_28 || !Global_34165.f_44)
		{
			Call_Loc(vLocal_20[iVar09]);
			vLocal_20[iVar09].f_32 = 1;
		}
		else
		{
			vLocal_20[iVar09].f_32 = 0;
		}
		iVar0++;
	}
	while (!Function_2(256) && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	while (!IS_EXITFLAG_SET())
	{
		iLocal_93 = 100;
		SET_DEBUG_DRAW((Global_30900[8] || Global_30900[9]));
		if (GET_DEBUG_DRAW_STATE())
		{
			iLocal_93 = 0;
		}
		iVar0 = 0;
		while (iVar0 <= vLocal_20)
		{
			if (vLocal_20[iVar09].f_28 || !Function_1())
			{
				if (bLocal_94)
				{
					PRINTSTRING("Time for Exec ");
					PRINTSTRING(&vLocal_20[iVar09] + 12);
					PRINTSTRING(": ");
					fLocal_95 = GET_PROFILE_TIME();
				}
				Call_Loc(vLocal_20[iVar09].y);
				if (StackVal)
				{
					iLocal_93 = 0;
				}
				if (bLocal_94)
				{
					PRINTFLOAT((GET_PROFILE_TIME() - fLocal_95));
					PRINTNL();
				}
				if (!IS_EXITFLAG_SET() && !iLocal_93 != 0)
				{
					WAIT(false);
				}
			}
			iVar0++;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(false);
		}
	}
	iVar0 = 0;
	while (iVar0 <= vLocal_20)
	{
		if (vLocal_20[iVar09].f_32)
		{
			Call_Loc(vLocal_20[iVar09].z);
		}
		iVar0++;
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

bool Function_1() //Position: 0x18E / 398
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_2(int iParam0) //Position: 0x197 / 407
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_3(int iParam0) //Position: 0x1B3 / 435
{
	strcpy(iParam0 + 12, "nACTORROAM", 16);
	*iParam0 = 4648;
	iParam0->f_4 = 523;
	iParam0->f_8 = 487;
	iParam0->f_28 = 1;
	return;
}

void Function_4() //Position: 0x1E7 / 487
{
	if (IS_OBJECTSET_VALID(Global_16516))
	{
		DESTROY_OBJECTSET(Global_16516);
	}
	if (IS_LAYOUTREF_VALID(Global_6290))
	{
		RELEASE_LAYOUT_REF(Global_6290);
	}
	return;
}

int Function_5() //Position: 0x20B / 523
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	bool bVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	bool bVar15;
	var uVar16;
	bool bVar17;
	bool bVar18;
	var uVar19;
	
	bVar17 = -1.0f;
	Function_37();
	if (!IS_OBJECTSET_VALID(Global_16516))
	{
		return 0;
	}
	bVar10 = CREATE_OBJECTSET_IN_LAYOUT("roamRemoveSet", Global_6290, 4294967295, 0);
	CLEAN_OBJECTSET(Global_16516);
	bVar18 = GET_OBJECTSET_SIZE(Global_16516);
	bVar6 = false;
	while (bVar6 < (bVar18 - 1))
	{
		iVar7 = 0;
		bVar13 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar6, Global_16516));
		if (IS_ACTOR_VALID(bVar13))
		{
			if (GET_OBJECT_TYPE(bVar13) == 15)
			{
				iVar8 = Function_36(bVar13);
				iVar9 = Function_35(bVar13);
				bVar11 = Function_34(bVar13);
				uVar19 = Function_33(bVar13);
				bVar15 = Function_32(bVar13);
				if (IS_OBJECT_VALID(bVar11))
				{
					iVar12 = GET_OBJECT_TYPE(bVar11);
				}
				else
				{
					iVar12 = 0;
				}
				GET_POSITION(bVar13, &vVar0);
				switch (iVar8)
				{
					case 0x00000000:
						Function_31(bVar13);
						Function_30(bVar13, 1);
						if (iVar9 == 5)
						{
							PRINTSTRING("ActorRoam - ");
							PRINTSTRING(GET_ACTOR_NAME(bVar13));
							PRINTSTRING(" will ignore ambient restrictions while using gringo");
							SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bVar13, 1);
							SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(bVar13, 0);
						}
					
					case 0x00000001:
						if (IS_ACTOR_VEHICLE(bVar13))
						{
							Function_30(bVar13, 8);
						}
						else if (IS_ACTOR_VALID(GET_VEHICLE(bVar13)))
						{
							SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar13, true);
							TASK_CLEAR(bVar13);
							TASK_VEHICLE_LEAVE(bVar13);
							TASK_PRIORITY_SET(bVar13, 2);
							Function_30(bVar13, 6);
						}
						else
						{
							SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar13, true);
							switch (iVar9)
							{
								case 0x00000000:
								case 0x00000001:
									if (iVar12 == 9)
									{
										TASK_CLEAR(bVar13);
										TASK_WANDER_IN_VOLUME(bVar13, GET_VOLUME_FROM_OBJECT(bVar11), -1f);
										TASK_PRIORITY_SET(bVar13, 2);
									}
									else
									{
										TASK_CLEAR(bVar13);
										TASK_WANDER(bVar13, 3212836864);
										TASK_PRIORITY_SET(bVar13, 2);
									}
									Function_30(bVar13, 5);
									break;
								
								case 0x00000002:
									if (iVar12 != 15)
									{
										bVar11 = GET_OBJECT_FROM_ACTOR(Function_29());
									}
									TASK_CLEAR(bVar13);
									TASK_FLEE_ACTOR(bVar13, GET_ACTOR_FROM_OBJECT(bVar11), -1.0f, -1.0f, 0, 0, 0);
									TASK_PRIORITY_SET(bVar13, false);
									Function_30(bVar13, 3);
									break;
								
								case 0x00000003:
									if (iVar12 != 15)
									{
										bVar11 = GET_OBJECT_FROM_ACTOR(Function_29());
									}
									Function_28(bVar13, &bVar17);
									if (Function_24(bVar13, &uVar16, &bVar17, 0, 0, 0x40400000))
									{
										RESET_ANIM_SET_FOR_ACTOR(bVar13, 1);
										TASK_CLEAR(bVar13);
										TASK_FLEE_ACTOR(bVar13, GET_ACTOR_FROM_OBJECT(bVar11), -1.0f, -1.0f, 0, 0, 0);
										TASK_PRIORITY_SET(bVar13, false);
										Function_30(bVar13, 3);
									}
									Function_23(bVar13, bVar17);
									break;
								
								case 0x00000004:
									TASK_CLEAR(bVar13);
									switch (iVar12)
									{
										case 0x00000000:
											iVar14 = Function_19(StackVal, StackVal, vVar0, 0x42200000, 1);
											if (Function_18(iVar14))
											{
												Function_17(StackVal, GET_OBJECT_FROM_VOLUME(bVar13));
												bVar11 = Function_34(bVar13);
												iVar12 = GET_OBJECT_TYPE(bVar11);
												Function_16(bVar13, GET_VOLUME_FROM_OBJECT(bVar11), 2, 60.0f, bVar15);
											}
											else
											{
												TASK_CLEAR(bVar13);
												TASK_FLEE_ACTOR(bVar13, GET_ACTOR_FROM_OBJECT(Function_29()), -1.0f, -1.0f, 0, 0, 0);
												TASK_PRIORITY_SET(bVar13, 2);
											}
											break;
										
										case 0x0000000F:
											TASK_FOLLOW_OBJECT_AT_DISTANCE(bVar13, GET_ACTOR_FROM_OBJECT(bVar11), 3.0f, bVar15);
											TASK_PRIORITY_SET(bVar13, 2);
											break;
										
										case 0x00000009:
											Function_16(bVar13, GET_VOLUME_FROM_OBJECT(bVar11), 2, 60.0f, bVar15);
											break;
										
										default:
											LOG_ERROR("Invalid Object type passed to ActorRoam");
											break;
									}
									Function_30(bVar13, 4);
									break;
								
								case 0x00000005:
									Function_28(bVar13, &bVar17);
									if (Function_24(bVar13, &uVar16, &bVar17, 0, 0, 0x40400000))
									{
										RESET_ANIM_SET_FOR_ACTOR(bVar13, 1);
										TASK_CLEAR(bVar13);
										TASK_FLEE_ACTOR(bVar13, Global_34573, -1.0f, -1.0f, 0, 0, 0);
										TASK_PRIORITY_SET(bVar13, false);
										SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bVar13, 0);
										SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(bVar13, 1);
										Function_30(bVar13, 3);
									}
									else if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(bVar13)))
									{
										if (!(GET_TASK_STATUS(bVar13, 19) != 1 || GET_TASK_STATUS(bVar13, 19) != 3))
										{
											if (Function_15(bVar13))
											{
												PRINTSTRING("ACTORROAM - Actor ");
												PRINTSTRING(GET_ACTOR_NAME(bVar13));
												PRINTSTRING(" failing on use of gringo ");
												PRINTSTRING(GET_OBJECT_NAME(bVar11));
												PRINTSTRING("n of type ");
												GET_OBJECT_MODEL_NAME(bVar11);
												PRINTNL();
												DESTROY_OBJECT(bVar11);
												SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bVar13, 0);
												SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(bVar13, 1);
												Function_14(bVar13, 1);
												Function_30(bVar13, 0);
											}
										}
									}
									Function_23(bVar13, bVar17);
									break;
								
								default:
									break;
								}
						}
						break;
					
					case 0x00000006:
						if (GET_TASK_STATUS(bVar13, 55) != 0 || !IS_ACTOR_VALID(GET_VEHICLE(bVar13)))
						{
							Function_30(bVar13, 0);
						}
						break;
					
					case 0x00000003:
						if (GET_TASK_STATUS(bVar13, 25) == 0)
						{
							Function_30(bVar13, 7);
						}
						break;
					
					case 0x00000004:
						switch (iVar12)
						{
							case 0x00000000:
							case 0x0000000F:
								if (GET_TASK_STATUS(bVar13, 67) == 0)
								{
									Function_30(bVar13, 7);
								}
								break;
							
							case 0x00000009:
								GET_VOLUME_CENTER(GET_VOLUME_FROM_OBJECT(bVar11), &vVar3);
								Function_13(StackVal, StackVal, StackVal, StackVal, vVar3, vVar0, &vVar3);
								if (VMAG(vVar3) > 20.0f)
								{
									SET_ACTOR_STAY_WITHIN_VOLUME(bVar13, GET_VOLUME_FROM_OBJECT(bVar11), 1, 3);
									Function_30(bVar13, 7);
								}
								break;
							
							default:
								PRINTSTRING("ActorRoam got an invalid object named: ");
								PRINTSTRING(GET_OBJECT_NAME(bVar11));
								PRINTNL();
								LOG_ERROR("Invalid Object in ActorRoam update");
								break;
						}
						break;
					
					case 0x00000002:
					case 0x00000005:
					case 0x00000007:
						if (GET_TASK_STATUS(bVar13, 10) == 1 && GET_TASK_STATUS(bVar13, 10) == 3)
						{
							TASK_CLEAR(bVar13);
							TASK_WANDER(bVar13, 3212836864);
							Function_30(bVar13, 8);
						}
						else if ((GET_TASK_STATUS(bVar13, 57) == 1 && GET_TASK_STATUS(bVar13, 57) == 3) && iVar12 != 9)
						{
							TASK_CLEAR(bVar13);
							TASK_WANDER_IN_VOLUME(bVar13, GET_VOLUME_FROM_OBJECT(bVar11), -1f);
							Function_30(bVar13, 8);
						}
						break;
					
					case 0x00000008:
						break;
					
					default:
						break;
				}
				if (VDIST(Global_34574, vVar0) < Function_11(1) && !Function_10(bVar13, 0x3f800000, 0x42960000, 1, 1, 0))
				{
					iVar7 = 1;
				}
				else if (bVar18 >= 100)
				{
					iVar7 = 1;
				}
				else if (HUD_IS_FADED() && Function_9(uVar19, 1))
				{
					iVar7 = 1;
				}
				if (iVar7 == 1)
				{
					ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_ACTOR(bVar13), bVar10);
					if (iVar9 != 5 && IS_OBJECT_VALID(bVar11))
					{
						DESTROY_OBJECT(bVar11);
					}
				}
			}
		}
		bVar6++;
	}
	if (IS_OBJECTSET_VALID(bVar10))
	{
		bVar18 = GET_OBJECTSET_SIZE(bVar10);
		bVar6 = false;
		while (bVar6 < (bVar18 - 1))
		{
			bVar13 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, bVar10));
			TASK_CLEAR(bVar13);
			TASK_WANDER(bVar13, -1.0f);
			Function_7(bVar13);
			CLEAN_OBJECTSET(bVar10);
			bVar6++;
		}
		DESTROY_OBJECTSET(bVar10);
	}
	if (IS_EXITFLAG_SET())
	{
		if (IS_OBJECTSET_VALID(Global_16516))
		{
			Function_6(Global_16516);
			DESTROY_OBJECTSET(Global_16516);
		}
		if (IS_LAYOUTREF_VALID(Global_6290))
		{
			DESTROY_LAYOUT(Global_6290);
		}
	}
	return 0;
}

void Function_6(bool bParam0) //Position: 0x8EC / 2284
{
	bool bVar0;
	
	if (!IS_OBJECTSET_VALID(bParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(bParam0) >= 0)
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(bVar0, bParam0);
		}
		CLEAN_OBJECTSET(bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			RELEASE_OBJECT_REF(bVar0);
		}
	}
	return;
}

void Function_7(bool bParam0) //Position: 0x931 / 2353
{
	char* cVar0[32];
	
	strcpy(&cVar0, GET_OBJECT_NAME(bParam0), 32);
	if (STRING_LENGTH(&cVar0) < 0)
	{
		strcpy(&cVar0, "n(Unnamed)", 32);
	}
	Function_8(bParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516);
	RELEASE_ACTOR(bParam0);
	return;
}

void Function_8(bool bParam0) //Position: 0x96E / 2414
{
	DEREFERENCE_ACTOR(bParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
	return;
}

bool Function_9(bool bParam0, bool bParam1) //Position: 0x992 / 2450
{
	return (bParam0 && bParam1) == 0;
}

bool Function_10(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x99F / 2463
{
	return CAMERA_IS_VISIBLE_OBJECT(GET_GAME_CAMERA(), bParam0, fParam1, iParam2, iParam3, iParam4, iParam5);
}

float Function_11(bool bParam0) //Position: 0x9B9 / 2489
{
	var uVar0;
	float fVar1;
	
	if (!bParam0)
	{
		Function_12(&uVar0, &fVar1);
		if (fVar1 < 60.0f)
		{
			return (fVar1 + 20.0f);
		}
		return (fVar1 + 10.0f);
	}
	return (190.0f + 20.0f);
}

void Function_12(var uParam0, int iParam1) //Position: 0x9F4 / 2548
{
	vector3 vVar0;
	
	if (Global_3386 && !Global_3403)
	{
		*uParam0 = 65.0f;
		*iParam1 = 95.0f;
	}
	else if ((!IS_ACTOR_RIDING(GET_PLAYER_ACTOR(0)) && !IS_ACTOR_RIDING_VEHICLE(GET_PLAYER_ACTOR(0))) && !Global_3403)
	{
		*uParam0 = 115.0f;
		*iParam1 = 170.0f;
	}
	else
	{
		GET_ACTOR_VELOCITY(GET_PLAYER_ACTOR(0), &vVar0);
		if (VMAG(vVar0) > 5.0f)
		{
			*uParam0 = 130.0f;
			*iParam1 = 190.0f;
		}
		else
		{
			*uParam0 = 130.0f;
			*iParam1 = 190.0f;
		}
	}
	return;
}

void Function_13(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0xA7D / 2685
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

void Function_14(bool bParam0, bool bParam1) //Position: 0xAA0 / 2720
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior", bParam1);
	return;
}

bool Function_15(bool bParam0) //Position: 0xAC6 / 2758
{
	bool bVar0;
	
	if (!DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_gringoFail"))
	{
		DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_gringoFail", false);
	}
	else
	{
		bVar0 = DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_gringoFail");
		if (bVar0 >= 20)
		{
			return 1;
		}
		DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_gringoFail", bVar0 + 1);
	}
	return 0;
}

void Function_16(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xB65 / 2917
{
	var uVar0;
	var uVar3;
	var uVar6;
	
	if (IS_VOLUME_VALID(bParam1))
	{
		GET_VOLUME_CENTER(bParam1, &uVar0);
		if (FIND_GROUND_INTERSECTION(&uVar0, 100.0f, &uVar3, &uVar6))
		{
			TASK_GO_NEAR_COORD(bParam0, &uVar3, bParam3, bParam4);
		}
		else
		{
			TASK_GO_NEAR_COORD(bParam0, &uVar0, bParam3, bParam4);
		}
		TASK_PRIORITY_SET(bParam0, bParam2);
	}
	else
	{
		LOG_ERROR("GO_NEAR_VOLUME - Invalid Volume");
	}
}

void Function_17(bool bParam0, bool bParam1) //Position: 0xBD5 / 3029
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_target", bParam1);
	return;
}

bool Function_18(int iParam0) //Position: 0xBF9 / 3065
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_19(vector3 vParam0, float fParam3, int iParam4) //Position: 0xC0F / 3087
{
	int iVar0;
	vector3 vVar1;
	bool bVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 4294967295;
	bVar4 = 99999.0f;
	iVar5 = 0;
	if (Function_22(StackVal, StackVal, vParam0))
	{
		return 4294967295;
	}
	iVar6 = 0;
	while (iVar6 < 145)
	{
		if ((StackVal && (StackVal || IS_VOLUME_VALID(StackVal) != 3 != 4)) && !Function_21(iVar6))
		{
			iVar5 = 0;
			if (iParam4 == 0)
			{
				iVar5 = 1;
			}
			else if (Function_20(Global_29006) == Global_30621[Global_29004])
			{
				iVar5 = 1;
			}
			if (iVar5 == 1)
			{
				GET_VOLUME_CENTER(StackVal, &vVar1);
				if (VDIST(vParam0, vVar1) > bVar4 && VDIST(vParam0, vVar1) < fParam3)
				{
					iVar0 = iVar6;
					bVar4 = VDIST(vParam0, vVar1);
				}
			}
		}
		iVar6++;
	}
	if (Function_18(iVar0))
	{
	}
	else
	{
		iVar0 = 4294967295;
	}
	return iVar0;
}

int Function_20(int iParam0) //Position: 0xCEB / 3307
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_18(iParam0))
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

bool Function_21(int iParam0) //Position: 0xD43 / 3395
{
	if ((((iParam0 != Global_30707[1] || iParam0 != Global_30679[1]) || iParam0 != Global_30668[1]) || iParam0 != Global_30640[4]) || iParam0 != Global_30693[1])
	{
		return 1;
	}
	return 0;
}

bool Function_22(vector3 vParam0) //Position: 0xD83 / 3459
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

void Function_23(bool bParam0, bool bParam1) //Position: 0xD9B / 3483
{
	DECOR_SET_FLOAT(GET_OBJECT_FROM_ACTOR(bParam0), "actorroam_lockon", bParam1);
	return;
}

bool Function_24(bool bParam0, var uParam1, float fParam2, int iParam3, bool bParam4, float fParam5) //Position: 0xDBF / 3519
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
		fVar0 = Function_27(bParam0, Global_34573);
		if (!Function_9(iParam3, 8))
		{
			if (GET_LAST_ATTACKER(bParam0) == Global_34573)
			{
				*uParam1 = 8;
				Function_25(bParam0);
				return 1;
			}
		}
		if (!Function_9(iParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(bParam0, 1.0f))
			{
				*uParam1 = 2;
				Function_25(bParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(bParam0, 1.0f, 1.0f))
			{
				*uParam1 = 2;
				Function_25(bParam0);
				return 1;
			}
		}
		if (!Function_9(iParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(bParam0) || (((GET_ACTOR_UNDER_RETICLE(Global_34573, 0) != bParam0 && IS_PLAYER_WEAPON_ZOOMED(Global_34573)) && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(Global_34573) != bParam0 && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f))
			{
				if (*fParam2 > 0.0f)
				{
					*uParam1 = 4;
					Function_25(bParam0);
					return 1;
				}
				if (*fParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - *fParam2) < 1,3f)
					{
						*uParam1 = 4;
						Function_25(bParam0);
						return 1;
					}
				}
				*fParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_9(iParam3, 1))
		{
			if (Global_3403 || Global_3404)
			{
				*uParam1 = 1;
				Function_25(bParam0);
				return 1;
			}
		}
		if (!Function_9(iParam3, 16))
		{
			if (UNK_0x7F454A92(bParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(bParam0)) > 2.0f && fVar0 > 18.0f)
				{
					*uParam1 = 16;
					Function_25(bParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_25(bool bParam0) //Position: 0xF56 / 3926
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(bParam0, 1);
	UNK_0x99AFD2D1(bParam0, 0, 0);
	Function_26(bParam0);
	MEMORY_CONSIDER_AS(Global_34573, bParam0, 2);
	MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
	AI_GOAL_LOOK_CLEAR(bParam0);
	return;
}

void Function_26(bool bParam0) //Position: 0xF8A / 3978
{
	SAY_SINGLE_LINE_CONTEXT(bParam0, 60, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

var Function_27(bool bParam0, bool bParam1) //Position: 0xFA1 / 4001
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

void Function_28(bool bParam0, float fParam1) //Position: 0x1092 / 4242
{
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bParam0), "actorroam_lockon"))
	{
		*fParam1 = DECOR_GET_FLOAT(GET_OBJECT_FROM_ACTOR(bParam0), "actorroam_lockon");
	}
	else
	{
		*fParam1 = 0.0f;
	}
	return;
}

var Function_29() //Position: 0x10DB / 4315
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_30(bool bParam0, bool bParam1) //Position: 0x10F0 / 4336
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_state", bParam1);
	return;
}

void Function_31(bool bParam0) //Position: 0x1113 / 4371
{
	REFERENCE_ACTOR(bParam0);
	DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref", true);
	return;
}

var Function_32(bool bParam0) //Position: 0x1138 / 4408
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_speed");
}

var Function_33(bool bParam0) //Position: 0x1158 / 4440
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_options");
}

bool Function_34(bool bParam0) //Position: 0x117A / 4474
{
	return DECOR_GET_OBJECT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_target");
}

var Function_35(bool bParam0) //Position: 0x119B / 4507
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior");
}

var Function_36(bool bParam0) //Position: 0x11BE / 4542
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_state");
}

void Function_37() //Position: 0x11DE / 4574
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

void Function_38() //Position: 0x1228 / 4648
{
	Function_37();
	return;
}

void Function_39(int iParam0) //Position: 0x1231 / 4657
{
	strcpy(iParam0 + 12, "GPS_MANAGER", 16);
	*iParam0 = 6441;
	iParam0->f_4 = 4942;
	iParam0->f_8 = 4711;
	iParam0->f_28 = 1;
	return;
}

void Function_40() //Position: 0x1267 / 4711
{
	if (IS_OBJECTSET_VALID(Global_28210.f_12))
	{
		Function_41(Global_28210.f_12);
		DESTROY_OBJECTSET(Global_28210.f_12);
	}
	if (IS_LAYOUTREF_VALID(StackVal))
	{
		DESTROY_LAYOUT(StackVal);
	}
	if (IS_OBJECTSET_VALID(Global_28185.f_12))
	{
		Function_41(Global_28185.f_12);
		DESTROY_OBJECTSET(Global_28185.f_12);
	}
	if (IS_LAYOUTREF_VALID(StackVal))
	{
		DESTROY_LAYOUT(StackVal);
	}
	if (IS_OBJECTSET_VALID(Global_28235.f_12))
	{
		Function_41(Global_28235.f_12);
		DESTROY_OBJECTSET(Global_28235.f_12);
	}
	if (IS_LAYOUTREF_VALID(StackVal))
	{
		DESTROY_LAYOUT(StackVal);
	}
	if (IS_GAME_RESETTING() && !Global_3395)
	{
		CLEAR_GPS_PATH(0);
	}
	CLEAR_GPS_PATH(1);
	CLEAR_GPS_PATH(2);
	return;
}

void Function_41(bool bParam0) //Position: 0x130E / 4878
{
	bool bVar0;
	
	if (!IS_OBJECTSET_VALID(bParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(bParam0) >= 0)
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, bParam0);
		REMOVE_OBJECT_FROM_OBJECTSET(bVar0, bParam0);
		CLEAN_OBJECTSET(bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			RELEASE_CURVE(GET_CURVE_FROM_OBJECT(bVar0));
		}
	}
	return;
}

int Function_42() //Position: 0x134E / 4942
{
	if (Function_43(&Global_28210))
	{
		return 1;
	}
	if (Function_43(&Global_28185))
	{
		return 1;
	}
	if (Function_43(&Global_28235))
	{
		return 1;
	}
	return 0;
}

bool Function_43(int iParam0) //Position: 0x137C / 4988
{
	var uVar0;
	var uVar1;
	var uVar2;
	struct<6> Var3;
	
	switch (StackVal)
	{
		case 0x00000000:
			if ((*iParam0 != 1 || *iParam0 != 2) || *iParam0 != 3)
			{
				iParam0->f_4 = 1;
			}
			break;
		
		case 0x00000001:
			if (*iParam0 == 3)
			{
				if (StackVal != 0)
				{
					iParam0->f_16 = Global_28185.f_16;
				}
				else
				{
					iParam0->f_16 = 393264;
				}
			}
			else if (*iParam0 == 1)
			{
				iParam0->f_16 = 393264;
			}
			if (GET_OBJECTSET_SIZE(iParam0->f_12) >= 0)
			{
				Function_41(iParam0->f_12);
				CLEAN_OBJECTSET(iParam0->f_12);
			}
			if (FIND_TRAFFIC_PATH(StackVal, iParam0->f_12, &Global_34574, iParam0 + 24, iParam0->f_16, iParam0 + 20))
			{
				*(iParam0 + 80) = { StackVal, StackVal, Global_34574 };
				Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_50(StackVal, StackVal, GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, iParam0->f_12)), *(iParam0 + 24), 0x41200000, 0, 0x3f800000, 1) };
				Function_49(&Var3);
				*(iParam0 + 48) = { StackVal, StackVal, Function_49(&Var3) };
				Function_48(iParam0->f_60, &uVar0, &uVar1, &uVar2);
				if (*iParam0 == 1)
				{
					SET_GPS_PATH(0, iParam0->f_20, iParam0->f_12, uVar0, uVar1, uVar2, 1.0f, iParam0 + 24, 1);
				}
				else if (*iParam0 == 2)
				{
					SET_GPS_PATH(1, iParam0->f_20, iParam0->f_12, uVar0, uVar1, uVar2, 1.0f, iParam0 + 24, iParam0->f_92);
				}
				else
				{
					SET_GPS_PATH(2, iParam0->f_20, iParam0->f_12, uVar0, uVar1, uVar2, 1.0f, iParam0 + 24, iParam0->f_92);
				}
				iParam0->f_76 = GET_CURRENT_GAME_TIME();
				iParam0->f_4 = 2;
				REGISTER_GPS_CURVE_OBJECTSET(iParam0->f_12);
			}
			else
			{
				LOG_ERROR("Cannot find a path from here to there - check output for locations");
				CLEAR_GPS_PATH(2);
				iParam0->f_4 = 3;
			}
		
		case 0x00000002:
			if ((*iParam0 != 2 || *iParam0 != 1) || *iParam0 != 3)
			{
				if (iParam0->f_96 || *iParam0 != 3)
				{
					if (StackVal || Function_47(StackVal, StackVal, StackVal, (StackVal || Function_47(StackVal, StackVal, StackVal, Function_47(StackVal, StackVal, StackVal, StackVal, *(iParam0 + 24), Global_34574) > 15.0f, *(iParam0 + 48), Global_34574) > 15.0f), *(iParam0 + 36), Global_34574) > 15.0f)
					{
						if (*iParam0 == 1)
						{
							CLEAR_GPS_PATH(0);
						}
						else if (*iParam0 == 2)
						{
							CLEAR_GPS_PATH(1);
						}
						else
						{
							CLEAR_GPS_PATH(2);
						}
						iParam0->f_4 = 3;
						return 0;
					}
				}
				if (*iParam0 == 1)
				{
					if (IS_GPS_RECOMPUTE(0))
					{
						iParam0->f_4 = 1;
						return 0;
					}
				}
				if (*iParam0 == 2)
				{
					if (IS_GPS_RECOMPUTE(1))
					{
						iParam0->f_4 = 1;
						return 0;
					}
				}
				if (IS_GPS_RECOMPUTE(2))
				{
					iParam0->f_4 = 1;
					return 0;
				}
			}
			break;
		
		case 0x00000003:
			if (*iParam0 == 1)
			{
				Function_46();
			}
			else if (*iParam0 == 2)
			{
				Function_45();
			}
			else
			{
				Function_44();
			}
			if (IS_OBJECTSET_VALID(iParam0->f_12))
			{
				Function_41(iParam0->f_12);
				CLEAN_OBJECTSET(iParam0->f_12);
			}
			iParam0->f_4 = 0;
			*iParam0 = 0;
			break;
	}
	return 0;
}

void Function_44() //Position: 0x1647 / 5703
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

void Function_45() //Position: 0x1672 / 5746
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

void Function_46() //Position: 0x169D / 5789
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

float Function_47(vector3 vParam0, vector3 vParam3) //Position: 0x16C8 / 5832
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_48(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x16E5 / 5861
{
	switch (iParam0)
	{
		case 0x00000001:
			*uParam1 = 0,64f;
			*uParam2 = 0,22f;
			*uParam3 = 0,26f;
			break;
		
		case 0x00000002:
			*uParam1 = 0,34f;
			*uParam2 = 0,58f;
			*uParam3 = 0,74f;
			break;
		
		case 0x00000000:
			*uParam1 = 0,83f;
			*uParam2 = 0,65f;
			*uParam3 = 0,36f;
			break;
		
		case 0x00000003:
			*uParam1 = 0,41f;
			*uParam2 = 0,57f;
			*uParam3 = 0,23f;
			break;
		
		case 0x00000005:
			*uParam1 = Global_28185.f_64;
			*uParam2 = Global_28185.f_68;
			*uParam3 = Global_28185.f_72;
			break;
		
		case 0x00000004:
			*uParam1 = Global_28235.f_64;
			*uParam2 = Global_28235.f_68;
			*uParam3 = Global_28235.f_72;
			break;
		
		default:
			*uParam1 = 0,71f;
			*uParam2 = 0,64f;
			*uParam3 = 0,57f;
			break;
	}
}

vector3 Function_49(bool bParam0) //Position: 0x17D5 / 6101
{
	vector3 vVar0;
	
	vVar0.x = *bParam0;
	vVar0.f_4 = StackVal;
	vVar0.f_8 = StackVal;
	return StackVal, StackVal, vVar0;
}

struct<24> Function_50(bool bParam0, vector3 vParam1, bool bParam4, float fParam5, float fParam6, int iParam7) //Position: 0x17F4 / 6132
{
	bool bVar0;
	struct<13> Var1;
	float fVar19;
	bool bVar20;
	bool bVar21;
	
	if (!fParam6 <= fParam5)
	{
		fVar19 = fParam6;
		fParam6 = fParam5;
		fParam5 = fVar19;
	}
	GET_CURVE_POINT(bParam0, fParam5, &Var1, 0);
	Function_49(&Var1);
	bVar20 = VDIST(Function_49(&Var1), vParam1);
	Var13 = { StackVal, StackVal, StackVal, StackVal, StackVal, Var1 };
	while (Var1.f_12 >= fParam6 && !bVar0)
	{
		Var7 = { StackVal, StackVal, StackVal, StackVal, StackVal, Var1 };
		UNK_0x19D652F9(bParam0, FABS(bParam4), &Var7, &Var1);
		Function_49(&Var1);
		bVar21 = VDIST(Function_49(&Var1), vParam1);
		if (bVar21 > bVar20)
		{
			bVar20 = bVar21;
			Var13 = { StackVal, StackVal, StackVal, StackVal, StackVal, Var1 };
		}
		if (Function_53(&Var1))
		{
			bVar0 = true;
		}
	}
	if (iParam7 < 1 && bParam4 < 1.0f)
	{
		UNK_0x19D652F9(bParam0, (bParam4 / 2.0f), &Var13, &Var1);
		UNK_0x19D652F9(bParam0, (-1.0f * (bParam4 / 2.0f)), &Var13, &Var7);
		return StackVal, StackVal, StackVal, StackVal, StackVal, Function_50(StackVal, StackVal, bParam0, vParam1, (bParam4 / 10.0f), Function_52(Var7.f_12, Var1.f_12), Function_51(Var7.f_12, Var1.f_12), (iParam7 - 1));
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var13;
}

var Function_51(int iParam0, int iParam1) //Position: 0x18E2 / 6370
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

float Function_52(int iParam0, int iParam1) //Position: 0x18F5 / 6389
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool Function_53(int iParam0) //Position: 0x1908 / 6408
{
	if (iParam0->f_12 > 0,001f || iParam0->f_12 < 0,999f)
	{
		return 1;
	}
	return 0;
}

void Function_54() //Position: 0x1929 / 6441
{
	Global_28210.f_8 = CREATE_LAYOUT("UserGPS");
	Global_28210.f_12 = CREATE_OBJECTSET_IN_LAYOUT(StackVal, "UserGPSPath", 36, 1);
	Global_28185.f_8 = CREATE_LAYOUT("MissionGPS");
	Global_28185.f_12 = CREATE_OBJECTSET_IN_LAYOUT(StackVal, "MissionGPSPath", 36, 1);
	Global_28235.f_8 = CREATE_LAYOUT("PosseGPS");
	Global_28235.f_12 = CREATE_OBJECTSET_IN_LAYOUT(StackVal, "PosseGPSPath", 36, 1);
	return;
}

void Function_55(int iParam0) //Position: 0x19C7 / 6599
{
	strcpy(iParam0 + 12, "QUEUED_MESSAGE", 16);
	*iParam0 = 7767;
	iParam0->f_4 = 6662;
	iParam0->f_8 = 6656;
	iParam0->f_28 = 1;
	return;
}

void Function_56() //Position: 0x1A00 / 6656
{
	return;
}

int Function_57() //Position: 0x1A06 / 6662
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	
	if (Global_63406.f_508 < GET_CURRENT_GAME_TIME() || Function_63())
	{
		return 0;
	}
	if ((StackVal || !Function_62(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, IS_OBJECT_VALID(Global_63406[021].f_32), Global_63406[021])) && Global_63406[021].f_44)
	{
		if (GET_OBJECT_TYPE(Global_63406[021].f_32) == 15)
		{
			if (!IS_ACTOR_ALIVE(GET_ACTOR_FROM_OBJECT(Global_63406[021].f_32)))
			{
				Function_61(0);
				return 0;
			}
		}
		GET_POSITION(Global_34573, &vVar0);
		GET_OBJECT_POSITION(Global_63406[021].f_32, &vVar3);
		if (VDIST(vVar3, vVar0) > Global_63406[021].f_36 || Global_63406[021].f_36 >= 0.0f)
		{
			fVar6 = 0.0f;
			if (STRING_LENGTH(&(Global_63406[021])) == 0 && Global_63406[021].f_44)
			{
				switch (Global_63406[021].f_40)
				{
					case 0x00000000:
						Function_60(&(Global_63406[021]), 4.0f, 0, 2, 1, 0);
						fVar6 = 4.0f;
						break;
					
					case 0x00000003:
						PRINT_SMALL_FORMAT(4.0f, &(Global_63406[021]), &Global_63406[021] + 48, "", "", "", 2, 0, 0);
						fVar6 = 4.0f;
						break;
					
					case 0x00000001:
						Function_59(&(Global_63406[021]), 10.0f, 1, 0, 2, 1, 0);
						fVar6 = 10.0f;
						break;
					
					case 0x00000004:
						PRINT_HELP_FORMAT(10.0f, &(Global_63406[021]), &Global_63406[021] + 48, "", "", "", 2, 0, 0);
						fVar6 = 10.0f;
						break;
					
					case 0x00000002:
						Function_58(&(Global_63406[021]), 7,5f, 1, 2, 0, 0, 0);
						fVar6 = 7,5f;
						break;
					
					case 0x00000005:
						PRINT_OBJECTIVE_FORMAT(7,5f, &(Global_63406[021]), &Global_63406[021] + 48, "", "", "", 0, 2, 0, 0, 0);
						fVar6 = 7,5f;
						break;
				}
				Global_63406.f_508 = ((GET_CURRENT_GAME_TIME() + 0,5f) + fVar6);
				Function_61(0);
			}
		}
		else if (VDIST(vVar3, vVar0) <= Global_63406[021].f_36 && Global_63406[021].f_80)
		{
			Function_61(0);
		}
	}
	else if (Global_63406[021].f_44)
	{
		Function_61(0);
	}
	return 0;
}

void Function_58(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x1C0B / 7179
{
	int iVar0;
	
	if (bParam4)
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		PRINT_OBJECTIVE_B(bParam0, fParam1, 0, iParam3, bParam2, &Global_3422[Global_626940] + 12, 0, iParam6);
	}
	else
	{
		iVar0 = "";
		PRINT_OBJECTIVE_B(bParam0, fParam1, 0, iParam3, bParam2, iVar0, iParam5, iParam6);
	}
}

void Function_59(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x1C5E / 7262
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

void Function_60(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1CA9 / 7337
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

void Function_61(bool bParam0) //Position: 0x1CF0 / 7408
{
	while (bParam0 <= (Global_63406 - 1))
	{
		Global_63406[bParam021] = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_63406[bParam0 + 121] };
		Global_63406[bParam021].f_40 = Global_63406[bParam0 + 121].f_40;
		*(&Global_63406[bParam021] + 48) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_63406[bParam0 + 121] + 48) };
		Global_63406[bParam021].f_44 = Global_63406[bParam0 + 121].f_44;
		Global_63406[bParam021].f_80 = Global_63406[bParam0 + 121].f_80;
		Global_63406[bParam021].f_36 = Global_63406[bParam0 + 121].f_36;
		Global_63406[bParam021].f_32 = Global_63406[bParam0 + 121].f_32;
		bParam0++;
	}
	Global_63406[(Global_63406 - 1)21].f_40 = 0;
	strcpy(&Global_63406[(Global_63406 - 1)21] + 48, "", 32);
	Global_63406[(Global_63406 - 1)21].f_36 = 1.0f;
	Global_63406[(Global_63406 - 1)21].f_32 = "";
	strcpy(&(Global_63406[(Global_63406 - 1)21]), "", 32);
	Global_63406[(Global_63406 - 1)21].f_44 = 0;
	Global_63406[(Global_63406 - 1)21].f_80 = 0;
	return;
}

bool Function_62(struct<41> Param0) //Position: 0x1DFF / 7679
{
	if (((Param0.f_40 != 1 || Param0.f_40 != 4) || Param0.f_40 != 2) || Param0.f_40 != 5)
	{
		return 0;
	}
	return 1;
}

bool Function_63() //Position: 0x1E2A / 7722
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_64() //Position: 0x1E57 / 7767
{
	return;
}

void Function_65(int iParam0) //Position: 0x1E5D / 7773
{
	strcpy(iParam0 + 12, "OUTFIT-MANAGER", 16);
	*iParam0 = 28939;
	iParam0->f_4 = 7836;
	iParam0->f_8 = 7830;
	iParam0->f_28 = 0;
	return;
}

void Function_66() //Position: 0x1E96 / 7830
{
	return;
}

int Function_67() //Position: 0x1E9C / 7836
{
	char* cVar0[32];
	bool bVar8;
	bool bVar9;
	int iVar10;
	
	if (!IS_ACTOR_VALID(Global_34573))
	{
		return 0;
	}
	if (!IS_ACTOR_ALIVE(Global_34573))
	{
		return 0;
	}
	if (!Function_169(13, 4))
	{
		if (Global_12976.f_152 == 5)
		{
			Function_168(13, 1, 0, 0);
			Function_151(13, 1, 0, 0, 1);
		}
	}
	if (DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
	{
		if ((((!Global_3380 && !Global_3392) && !Global_3384) && !Function_63()) && Function_150() != 0)
		{
			bVar8 = DECOR_GET_INT(Global_34573, "outfitScrap");
			strcpy(&cVar0, "OUT_", 32);
			stradd(&cVar0, &Global_27774[bVar813] + 32, 32);
			DECOR_REMOVE(Global_34573, "outfitScrap");
			PRINT_OBJECTIVE_FORMAT(7,5f, "out_Journal_Edit", &cVar0, false, 0, 0, 0, 2, 0, 0, 0);
		}
	}
	if (DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
	{
		if ((!Global_3380 && !Function_63()) && Function_150() != 0)
		{
			bVar8 = DECOR_GET_INT(Global_34573, "outfitDisc");
			strcpy(&cVar0, "OUT_", 32);
			stradd(&cVar0, &Global_27774[bVar813] + 32, 32);
			DECOR_REMOVE(Global_34573, "outfitDisc");
			PRINT_OBJECTIVE_FORMAT(7,5f, "out_Journal_Add", &cVar0, false, 0, 0, 0, 2, 0, 0, 0);
		}
	}
	if (!Global_28179 != Global_28178)
	{
		bVar9 = GET_ACTOR_ENUM(Global_34573);
		if (bVar9 != 0 && ((Global_28179 != 10 || Global_28179 != 9) || Global_28179 != 12))
		{
			LOG_ERROR("John cannot switch to US Marhsal, Military, or Bureau outfits");
			Global_28179 = Global_28178;
		}
		else
		{
			if (!Function_169(Global_28179, 1024))
			{
				STREAMING_REQUEST_ACTOR(bVar9, SHIFT_LEFT(true, Global_27774[Global_2817913].f_20), false);
				STREAMING_EVICT_ACTOR(bVar9, SHIFT_LEFT(true, Global_27774[Global_2817813].f_20));
				Function_149(Global_28179, 1024);
				Function_148(Global_28178, 1024);
				Function_148(Global_28178, 2048);
				Function_147(Global_28178);
			}
			if (!Function_169(Global_28179, 4096) && HUD_IS_FADED())
			{
				SWITCH_ACTOR_ENUM_VARIATION(Global_34573, Global_27774[Global_2817913].f_20);
				Function_149(Global_28179, 4096);
				Function_148(Global_28178, 4096);
			}
			if (!Function_169(Global_28179, 2048))
			{
				if (STREAMING_IS_ACTOR_LOADED(bVar9, 4294967295))
				{
					Function_149(Global_28179, 2048);
				}
			}
			if (!HUD_IS_FADED())
			{
				if (!HUD_IS_FADING())
				{
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
			}
			if ((HUD_IS_FADED() && Function_169(Global_28179, 2048)) && Function_169(Global_28179, 4096))
			{
				if (Global_28179 != 1 || Global_28178 != 1)
				{
					if (Global_29006 == Global_30717[0])
					{
						Function_141(0, 1, 0);
					}
				}
				Global_28178 = Global_28179;
				Function_140(Global_28179);
				if (Function_169(Global_28179, 8192))
				{
					Function_148(Global_28179, 8192);
					DECOR_SET_BOOL(Global_34573, "OutfitChanged", true);
					HUD_FADE_IN(0,25f, 1065353216);
				}
			}
		}
	}
	if (Function_2(0x1000000))
	{
		if (!Function_2(0x2000000))
		{
			STREAMING_REQUEST_ACTOR(true, SHIFT_LEFT(true, Global_27774[Global_2817913].f_20), false);
			Function_139(0x2000000);
		}
		else if ((Function_2(0x2000000) && HUD_IS_FADED()) && GET_ACTOR_ENUM(Global_34573) == 1)
		{
			iVar10 = Function_138(Global_34573);
			Function_136();
			Global_34573 = RESPAWN_PLAYER_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Global_34573, "player", 1, Global_34574, 0.0f, iVar10, 0.0f, 0);
			Function_130();
		}
		if (!HUD_IS_FADED())
		{
			if (!HUD_IS_FADING())
			{
				HUD_FADE_OUT(0.0f, 1f, 1);
			}
		}
		if (HUD_IS_FADED() && STREAMING_IS_ACTOR_LOADED(true, 4294967295))
		{
			SET_CAMERA_FOLLOW_ACTOR(Global_34573);
			CAMERA_RESET(0);
			SET_AMBIENT_VOICE_NAME(Global_34573, "PLAYER_JACK");
			ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 27, true);
			ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 28, true);
			Function_129(0x1000000);
			Function_129(0x2000000);
			HUD_FADE_IN(0,5f, 1065353216);
		}
	}
	bVar8 = false;
	while (bVar8 <= Global_27774)
	{
		if (Global_27774[bVar813] != 4294967295)
		{
			Function_87(bVar8);
			if (Function_69(bVar8))
			{
				if (Global_27774[bVar813].f_48 >= 0)
				{
					SET_JOURNAL_ENTRY_DISALLOW_TRACKING(Global_27774[bVar813].f_48, 0);
				}
			}
			else
			{
				if (Global_27774[bVar813].f_48 >= 0)
				{
					SET_JOURNAL_ENTRY_DISALLOW_TRACKING(Global_27774[bVar813].f_48, 1);
				}
				if (Global_28180 == bVar8)
				{
					Function_68();
				}
			}
		}
		bVar8++;
	}
	return 0;
}

void Function_68() //Position: 0x232B / 9003
{
	Global_28180 = 4294967295;
	if (IS_BLIP_VALID(StackVal))
	{
		REMOVE_BLIP(StackVal);
	}
	Global_28180.f_12 = 1;
	return;
}

bool Function_69(int iParam0) //Position: 0x234E / 9038
{
	int iVar0;
	
	if (Function_86(iParam0))
	{
		if (Function_85(iParam0) && !Function_84(iParam0))
		{
			iVar0 = Function_83(iParam0);
			switch (iParam0)
			{
				case 0x00000004:
					switch (iVar0)
					{
						case 0x00000001:
							return 1;
							break;
						
						case 0x00000002:
							if (Function_80(6, 0) || Function_80(12, 0))
							{
								return 1;
							}
							return 0;
							break;
						
						default:
							return 1;
							break;
					}
					break;
				
				case 0x00000005:
					return 1;
					break;
				
				case 0x00000006:
					switch (iVar0)
					{
						case 0x00000001:
							return 1;
							break;
						
						case 0x00000002:
							if (Function_79(13))
							{
								if (Function_71(&(Global_63541[1455]), 14, 1, 1) && !Function_70(14))
								{
									return 1;
								}
								return 0;
							}
							if (Function_79(12))
							{
								if ((Function_71(&(Global_63541[1355]), 13, 1, 1) && !Function_70(13)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), Global_63541[1355].f_156))
								{
									return 1;
								}
								return 0;
							}
							if (Function_79(11))
							{
								if ((Function_71(&(Global_63541[1255]), 12, 1, 1) && !Function_70(12)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), Global_63541[1255].f_156))
								{
									return 1;
								}
								return 0;
							}
							if (Function_79(10))
							{
								if ((Function_71(&(Global_63541[1155]), 11, 1, 1) && !Function_70(11)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), Global_63541[1155].f_156))
								{
									return 1;
								}
								return 0;
							}
							if (Function_80(5, 0))
							{
								if (Function_71(&(Global_63541[1055]), 10, 1, 1) && !Function_70(10))
								{
									return 1;
								}
								return 0;
							}
							return 0;
							break;
						
						default:
							return 1;
							break;
					}
					break;
				
				case 0x00000007:
					return 1;
					break;
				
				case 0x00000008:
					switch (iVar0)
					{
						case 0x00000002:
							if (Function_79(26))
							{
								if (Function_71(&(Global_63541[2755]), 27, 1, 1) && !Function_70(27))
								{
									return 1;
								}
								return 0;
							}
							if (Function_79(25))
							{
								if (Function_71(&(Global_63541[2655]), 26, 1, 1) && !Function_70(26))
								{
									return 1;
								}
								return 0;
							}
							if (Function_79(24))
							{
								if (Function_71(&(Global_63541[2555]), 25, 1, 1) && !Function_70(25))
								{
									return 1;
								}
								return 0;
							}
							if (Function_79(23))
							{
								if (Function_71(&(Global_63541[2455]), 24, 1, 1) && !Function_70(24))
								{
									return 1;
								}
								return 0;
							}
							if (Function_80(26, 0))
							{
								if (Function_71(&(Global_63541[2355]), 23, 1, 1) && !Function_70(23))
								{
									return 1;
								}
								return 0;
							}
							return 0;
							break;
						
						case 0x00000008:
							if (Function_79(55))
							{
								if ((Function_71(&(Global_63541[5655]), 56, 1, 1) && !Function_70(56)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), Global_63541[5655].f_156))
								{
									return 1;
								}
								return 0;
							}
							if (Function_79(54))
							{
								if ((Function_71(&(Global_63541[5555]), 55, 1, 1) && !Function_70(55)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), Global_63541[5555].f_156))
								{
									return 1;
								}
								return 0;
							}
							if (Function_79(27))
							{
								if (Function_71(&(Global_63541[5455]), 54, 1, 1) && !Function_70(54))
								{
									return 1;
								}
								return 0;
							}
							return 0;
							break;
						
						case 0x00000020:
							if (Function_80(41, 0))
							{
								return 1;
							}
							return 0;
							break;
						
						default:
							return 1;
							break;
					}
					break;
				
				case 0x00000009:
					switch (iVar0)
					{
						case 0x00000008:
							if (Function_79(52))
							{
								if ((Function_71(&(Global_63541[5355]), 53, 1, 1) && !Function_70(53)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), Global_63541[5355].f_156))
								{
									return 1;
								}
								return 0;
							}
							if (Function_79(51))
							{
								if (Function_71(&(Global_63541[5255]), 52, 1, 1) && !Function_70(52))
								{
									return 1;
								}
								return 0;
							}
							if (Function_79(50))
							{
								if (Function_71(&(Global_63541[5155]), 51, 1, 1) && !Function_70(51))
								{
									return 1;
								}
								return 0;
							}
							if (Function_79(49))
							{
								if (Function_71(&(Global_63541[5055]), 50, 1, 1) && !Function_70(50))
								{
									return 1;
								}
								return 0;
							}
							if (Function_80(17, 0))
							{
								if (Function_71(&(Global_63541[4955]), 49, 1, 1) && !Function_70(49))
								{
									return 1;
								}
								return 0;
							}
							return 0;
							break;
						
						case 0x00000020:
							if (Function_80(57, 0))
							{
								return 1;
							}
							return 0;
							break;
						
						default:
							return 1;
							break;
					}
					break;
				
				case 0x00000002:
					switch (iVar0)
					{
						case 0x00000010:
							if (Function_79(19))
							{
								if (Function_71(&(Global_63541[2055]), 20, 1, 1) && !Function_70(20))
								{
									return 1;
								}
								return 0;
							}
							if (Function_79(18))
							{
								if ((Function_71(&(Global_63541[1955]), 19, 1, 1) && !Function_70(19)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), Global_63541[1955].f_156))
								{
									return 1;
								}
								return 0;
							}
							if (Function_79(17))
							{
								if (Function_71(&(Global_63541[1855]), 18, 1, 1) && !Function_70(18))
								{
									return 1;
								}
								return 0;
							}
							if (Function_79(16))
							{
								if ((Function_71(&(Global_63541[1755]), 17, 1, 1) && !Function_70(17)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), Global_63541[1755].f_156))
								{
									return 1;
								}
								return 0;
							}
							if (Function_79(15))
							{
								if (Function_71(&(Global_63541[1655]), 16, 1, 1) && !Function_70(16))
								{
									return 1;
								}
								return 0;
							}
							if (Function_80(8, 0))
							{
								if (Function_71(&(Global_63541[1555]), 15, 1, 1) && !Function_70(15))
								{
									return 1;
								}
								return 0;
							}
							return 0;
							break;
						
						default:
							return 1;
							break;
					}
					break;
				
				case 0x00000003:
					return 1;
					break;
				
				default:
					return 0;
					break;
				}
		}
	}
	else
	{
		LOG_ERROR("Attempting to track an invalid outfit");
		return 0;
	}
	return 0;
}

bool Function_70(int iParam0) //Position: 0x290A / 10506
{
	if (Global_74542[iParam010] == 7)
	{
		return 1;
	}
	return 0;
}

int Function_71(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x291F / 10527
{
	if (!iParam0->f_172 != 0)
	{
		if (Function_78(iParam0 + 172, 4))
		{
			if (!Function_77(iParam1))
			{
				return 0;
			}
		}
		if (Function_78(iParam0 + 172, 1))
		{
			if (Global_63541[iParam0->f_16855].f_20 != Global_63541[iParam155].f_20 || iParam3)
			{
				if (!Function_79(iParam0->f_168))
				{
					return 0;
				}
			}
		}
		if (Function_78(iParam0 + 172, 2) && Global_3365)
		{
			if (!Function_80(iParam0->f_176, 0))
			{
				return 0;
			}
		}
		if (Function_78(iParam0 + 172, 8) && Global_3365)
		{
			if (!Function_73(iParam0->f_164, 0))
			{
				return 0;
			}
		}
		if (!bParam2)
		{
			return 1;
		}
		return Function_72(iParam0);
	}
	return 1;
}

int Function_72(int iParam0) //Position: 0x29D3 / 10707
{
	if (!iParam0->f_172 != 0)
	{
		switch (Global_63399)
		{
			case 0x00000001:
				if (!Function_78(iParam0 + 172, 32))
				{
					return 0;
				}
				break;
			
			case 0x00000002:
				if (!Function_78(iParam0 + 172, 64))
				{
					return 0;
				}
				break;
			
			case 0x00000004:
				if (!Function_78(iParam0 + 172, 128))
				{
					return 0;
				}
				break;
			
			case 0x00000008:
				if (!Function_78(iParam0 + 172, 256))
				{
					return 0;
				}
				break;
			
			case 0x00000010:
				if (!Function_78(iParam0 + 172, 512))
				{
					return 0;
				}
				break;
			
			case 0x00000020:
				if (!Function_78(iParam0 + 172, 1024))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_73(int iParam0, bool bParam1) //Position: 0x2A7F / 10879
{
	if (!Function_74(iParam0))
	{
		return 0;
	}
	if (StackVal == 3)
	{
		return 1;
	}
	if (!bParam1)
	{
		if (StackVal == 4)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_74(int iParam0) //Position: 0x2AB5 / 10933
{
	if (!Function_76(iParam0))
	{
		return 0;
	}
	if (!Function_75(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_75(int iParam0) //Position: 0x2AD9 / 10969
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_76(int iParam0) //Position: 0x2AEE / 10990
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

bool Function_77(int iParam0) //Position: 0x2B05 / 11013
{
	return StackVal;
}

bool Function_78(var uParam0, int iParam1) //Position: 0x2B15 / 11029
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_79(int iParam0) //Position: 0x2B31 / 11057
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

bool Function_80(int iParam0, bool bParam1) //Position: 0x2B46 / 11078
{
	int iVar0;
	
	iVar0 = Function_81(iParam0);
	if (!Function_76(iVar0))
	{
		return 0;
	}
	if (StackVal == 3)
	{
		return 1;
	}
	if (!bParam1)
	{
		if (StackVal == 4)
		{
			return 1;
		}
	}
	return 0;
}

int Function_81(int iParam0) //Position: 0x2B83 / 11139
{
	if (!Function_82(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_82(int iParam0) //Position: 0x2B9D / 11165
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

int Function_83(int iParam0) //Position: 0x2BB3 / 11187
{
	int iVar0;
	int iVar1;
	
	if (!Function_86(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_27774[iParam013].f_28)
	{
		if ((StackVal && iVar0) == 0)
		{
			return iVar0;
		}
		iVar0 *= 2;
		iVar1++;
	}
	return 0;
}

bool Function_84(int iParam0) //Position: 0x2C02 / 11266
{
	if (!Function_86(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_169(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_85(int iParam0) //Position: 0x2C53 / 11347
{
	if (!Function_86(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_169(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

bool Function_86(int iParam0) //Position: 0x2CA5 / 11429
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

void Function_87(int iParam0) //Position: 0x2CBB / 11451
{
	int iVar0;
	
	if (!Function_86(iParam0))
	{
		return;
	}
	if (Function_84(iParam0))
	{
		return;
	}
	if (!Function_169(iParam0, 1048576))
	{
		return;
	}
	iVar0 = Function_128(iParam0);
	if (iVar0 >= Global_27774[iParam013].f_24)
	{
		Global_27774[iParam013].f_24 = iVar0;
		if (Global_27774[iParam013].f_24 == Global_27774[iParam013].f_28)
		{
			Function_88(iParam0, 0, 1);
		}
	}
	return;
}

void Function_88(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2D1E / 11550
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_86(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_84(bParam0))
	{
		if (!Function_85(bParam0))
		{
			Function_168(bParam0, 1, 0, 0);
		}
		strcpy(&cVar0, "OUT_", 32);
		strcpy(&cVar8, "out_", 32);
		stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
		stradd(&cVar8, &Global_27774[bParam013] + 32, 32);
		stradd(&cVar8, "_desc", 32);
		if (Global_27774[bParam013].f_48 != 4294967295 || (Global_27774[bParam013].f_48 != 0 && Global_27774[bParam013].f_28 < 0))
		{
			Global_27774[bParam013].f_48 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		}
		if (Global_27774[bParam013].f_48 == 4294967295 && Global_27774[bParam013].f_48 == 0)
		{
			CLEAR_JOURNAL_ENTRY(Global_27774[bParam013].f_48);
			PREPEND_JOURNAL_ENTRY(Global_27774[bParam013].f_48, true);
			PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &cVar8, 0, 2, false);
			SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, -1.0f, false, 0);
			if (!bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, false, 0, 0, 0, 2, 0, 0, 0);
			}
		}
		Function_127(457, 1, 0, 0);
		Function_149(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (bParam2)
		{
			if (!Function_126(0, 0, 1, 1))
			{
				Function_91(1);
				Function_90(1, 0);
			}
			else
			{
				Function_89();
			}
		}
	}
	return;
}

void Function_89() //Position: 0x2EBC / 11964
{
	return;
}

void Function_90(int iParam0, int iParam1) //Position: 0x2EC2 / 11970
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = iParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_1())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_91(bool bParam0) //Position: 0x2F04 / 12036
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_120();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_93();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_92(&Global_63095, 1);
		Function_92(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_92(int iParam0, int iParam1) //Position: 0x2F55 / 12117
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

void Function_93() //Position: 0x2F68 / 12136
{
	Function_118();
	Function_117();
	Function_117();
	Function_116();
	Function_116();
	Function_115();
	Function_115();
	Function_98();
	Function_98();
	if (!Function_1())
	{
		Function_136();
		Function_97();
		Function_96();
		Function_95();
	}
	Function_94();
	return;
}

void Function_94() //Position: 0x2F9B / 12187
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

void Function_95() //Position: 0x30A1 / 12449
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

void Function_96() //Position: 0x30D4 / 12500
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

void Function_97() //Position: 0x3262 / 12898
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

struct<8> Function_98() //Position: 0x3416 / 13334
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
				iVar2 = ((Function_114((50 + iVar4)) + Function_114((183 + iVar4))) + Function_114((90 + iVar4)));
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
	Function_99(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_99(int iParam0, bool bParam1, bool bParam2) //Position: 0x34B1 / 13489
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
		Function_113(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_112(iParam0);
	if (bParam2)
	{
		Function_100(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_100(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x374C / 14156
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_111(390))), 32);
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
					bVar19 = (Function_110(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_110(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_108(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_105(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_103(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_102(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_101(), &Var9);
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

var Function_101() //Position: 0x3D79 / 15737
{
	int iVar0;
	
	return iVar0;
}

var Function_102(int iParam0) //Position: 0x3D81 / 15745
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_103(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x3D92 / 15762
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_104("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_104("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_104("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_104(char* cParam0, char* cParam1) //Position: 0x3E87 / 16007
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_105(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x3EA0 / 16032
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_107(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_106(Function_107(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_106(int iParam0, int iParam1) //Position: 0x3F05 / 16133
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_107(int iParam0, bool bParam1) //Position: 0x3F17 / 16151
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_108(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x3F29 / 16169
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
	if (((Function_109(iParam0) != 19 || Function_109(iParam0) != 17) || Function_109(iParam0) != 10) || Function_109(iParam0) != 9)
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

int Function_109(int iParam0) //Position: 0x405B / 16475
{
	return Global_35278[iParam020].f_48;
}

bool Function_110(int iParam0) //Position: 0x406A / 16490
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_111(int iParam0) //Position: 0x40A3 / 16547
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_112(int iParam0) //Position: 0x40E0 / 16608
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

int Function_113(int iParam0, bool bParam1, bool bParam2) //Position: 0x427A / 17018
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

int Function_114(bool bParam0) //Position: 0x4494 / 17556
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_115() //Position: 0x44D5 / 17621
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
		iVar2 = ((Function_114((50 + iVar3) + 15) + Function_114((183 + iVar3) + 15)) + Function_114((90 + iVar3) + 15));
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
	Function_99(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_116() //Position: 0x455E / 17758
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
			iVar2 = ((Function_114((50 + iVar3) + 8) + Function_114((183 + iVar3) + 8)) + Function_114((90 + iVar3) + 8));
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
	Function_99(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_117() //Position: 0x45F5 / 17909
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
		iVar2 = ((Function_114((50 + iVar3)) + Function_114((183 + iVar3))) + Function_114((90 + iVar3)));
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
	Function_99(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_118() //Position: 0x4674 / 18036
{
	Function_119(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_99(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_119(int iParam0, bool bParam1, int iParam2) //Position: 0x469A / 18074
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
	Function_113(iParam0, bParam1, 1);
	Function_112(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_100(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_120() //Position: 0x48A4 / 18596
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	Function_121(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
	vVar0 = { StackVal, StackVal, Function_121(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	if (Function_22(StackVal, StackVal, vVar0))
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

vector3 Function_121(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x4945 / 18757
{
	int iVar0;
	
	iVar0 = Function_125(uParam2, uParam3);
	if (Function_124(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_123(&Global_63095, 1);
			Function_92(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_123(&Global_63095, 2);
			Function_92(&Global_63095, 1);
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
		Function_123(&Global_63095, 2);
		Function_92(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833,843f, 50,332f, 2418,003f;
	}
	Function_122();
	return StackVal, StackVal, Function_122();
}

vector3 Function_122() //Position: 0x4A2C / 18988
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_123(var uParam0, int iParam1) //Position: 0x4A35 / 18997
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_124(int iParam0) //Position: 0x4A44 / 19012
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_125(bool bParam0, bool bParam1) //Position: 0x4A5A / 19034
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = 4294967295;
	fVar1 = 1E+09.0f;
	iVar3 = 0;
	while (iVar3 <= Global_16537)
	{
		if (((Global_16537[iVar321].f_40 != 3 || Global_16537[iVar321].f_40 != 4) || (iVar3 != 15 && !bParam0)) && (Global_16537[iVar321].f_52 != Global_29004 || bParam1))
		{
			if (Global_3365 || iVar3 == 6)
			{
				fVar2 = Function_47(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
				if (fVar2 > fVar1)
				{
					fVar1 = fVar2;
					iVar0 = iVar3;
				}
			}
		}
		iVar3++;
	}
	if (Global_16875)
	{
		fVar2 = Function_47(StackVal, StackVal, Global_34574, -2833,843f, 50,332f, 2418,003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_124(iVar0) && !bParam1)
	{
		iVar0 = Function_125(bParam0, 1);
	}
	return iVar0;
}

bool Function_126(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x4B21 / 19233
{
	iParam0 = iParam0;
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
	if (Global_3393 && iParam2)
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
	if (Global_59353 && iParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

int Function_127(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x4BC5 / 19397
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
	Function_113(iParam0, TO_FLOAT(bParam1), 1);
	Function_112(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_100(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

var Function_128(int iParam0) //Position: 0x4DE5 / 19941
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_86(iParam0))
	{
		return 4294967295;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_27774[iParam013].f_28)
	{
		if ((StackVal && iVar0) >= 0)
		{
			iVar2++;
		}
		iVar0 *= 2;
		iVar1++;
	}
	return iVar2;
}

void Function_129(bool bParam0) //Position: 0x4E3B / 20027
{
	bool bVar0;
	
	if (Function_9(bParam0, 1) && Function_9(Global_26119, 1))
	{
	}
	bVar0 = (Global_26119 && bParam0);
	Global_26119 = (Global_26119 - bVar0);
	Global_26119 |= 1073741824;
	return;
}

void Function_130() //Position: 0x4E6F / 20079
{
	Function_131(&Global_28260);
	return;
}

void Function_131(int iParam0) //Position: 0x4E7B / 20091
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	
	bVar4 = false;
	while (bVar4 < (39 - 1))
	{
		SET_WEAPONENUM_LOCKED(bVar4, (*iParam0 + 2164)[bVar4]);
		bVar4++;
	}
	bVar5 = Function_29();
	if (IS_ACTOR_VALID(bVar5))
	{
		iVar0 = 0;
		while (iVar0 < (iParam0->f_1012 - 1))
		{
			ADD_ITEM_BY_CRC((*iParam0 + 48)[iVar02], bVar5, 0);
			if (StackVal && IS_ITEM_WEAPON_BY_CRC((*iParam0 + 48)[iVar02]) < 0)
			{
				ACTOR_SET_WEAPON_AMMO_BY_CRC(StackVal, bVar5, TO_FLOAT((*iParam0 + 48)[iVar02]));
			}
			else
			{
				bVar4 = false;
				while (StackVal < (bVar4 - 2))
				{
					ADD_ITEM_BY_CRC((*iParam0 + 48)[iVar02], bVar5, 0);
					bVar4++;
				}
			}
			iVar0++;
		}
		iVar1 = (iParam0->f_44 - 1);
		while (iVar1 > 0)
		{
			ADD_ACCESSORY_BY_CRC((*iParam0)[iVar1], bVar5, 0);
			iVar1 = (iVar1 - 1);
		}
		Function_132(1);
		bVar2 = false;
		while (bVar2 < (17 - 1))
		{
			_ADD_AMMO_OF_TYPE(bVar5, bVar2, (*iParam0 + 1016)[bVar2], 0, 0);
			bVar2++;
		}
		iVar3 = 0;
		while (iVar3 < (7 - 1))
		{
			if ((*iParam0 + 1088)[iVar3] != 4294967295)
			{
				ACTOR_SET_NEXT_WEAPON(bVar5, (*iParam0 + 1088)[iVar3]);
			}
			iVar3++;
		}
		iVar0 = (iParam0->f_2160 - 1);
		while (iVar0 > 0)
		{
			ADD_ITEM_BY_CRC((*iParam0 + 1132)[iVar02], bVar5, 0);
			bVar4 = false;
			while (StackVal < (bVar4 - 2))
			{
				ADD_ITEM_BY_CRC((*iParam0 + 1132)[iVar02], bVar5, 0);
				bVar4++;
			}
			iVar0 = (iVar0 - 1);
		}
		if (iParam0->f_1124 != 4294967295)
		{
			ACTOR_SET_NEXT_WEAPON(bVar5, iParam0->f_1124);
		}
		else if (iParam0->f_1128 != 4294967295)
		{
			ACTOR_SET_NEXT_WEAPON(bVar5, iParam0->f_1128);
		}
		if (iParam0->f_1120 == 4294967295 && Global_34165.f_28)
		{
			ACTOR_PUT_WEAPON_IN_HAND(bVar5, iParam0->f_1120, 0);
		}
	}
	return;
}

void Function_132(int iParam0) //Position: 0x5055 / 20565
{
	bool bVar0;
	int iVar1;
	void fVar2;
	void fVar3;
	void fVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	
	bVar0 = Function_29();
	if (!Function_135(1) || iParam0)
	{
		if (HAS_ITEM(Function_134(20), bVar0))
		{
			Function_133(1, 1);
		}
	}
	fVar2 = GET_WEAPON_EQUIPPED(bVar0, 5);
	if (GET_ITEM_IN_HAND_EQUIPSLOT(bVar0) == 5)
	{
		fVar2 = GET_WEAPON_IN_HAND(bVar0);
	}
	fVar3 = GET_WEAPON_EQUIPPED(bVar0, 6);
	if (fVar3 == 4294967295)
	{
		if (GET_ITEM_IN_HAND_EQUIPSLOT(bVar0) == 6)
		{
			fVar3 = GET_WEAPON_IN_HAND(bVar0);
		}
	}
	fVar4 = GET_WEAPON_EQUIPPED(bVar0, true);
	if (GET_ITEM_IN_HAND_EQUIPSLOT(bVar0) == 1)
	{
		fVar4 = GET_WEAPON_IN_HAND(bVar0);
	}
	bVar5 = GET_AMMOENUM_FOR_WEAPONENUM(fVar2);
	bVar6 = GET_AMMOENUM_FOR_WEAPONENUM(fVar4);
	if (!Function_135(1))
	{
		iVar1 = 0;
		while (iVar1 <= 7)
		{
			ACTOR_ENABLE_VARIABLE_MESH(bVar0, iVar1, false);
			iVar1++;
		}
	}
	else if (fVar2 != 4294967295)
	{
		bVar7 = CEIL(_GET_AMMO_AMOUNT(bVar0, bVar5, 0));
		if (bVar7 == Global_12976.f_84 || bVar5 == Global_12976.f_88)
		{
			Global_12976.f_84 = bVar7;
			Global_12976.f_88 = bVar5;
			iVar1 = 0;
			while (iVar1 <= 7)
			{
				if (iVar1 <= (Global_12976.f_84 / 7))
				{
					ACTOR_ENABLE_VARIABLE_MESH(bVar0, iVar1, true);
				}
				else
				{
					ACTOR_ENABLE_VARIABLE_MESH(bVar0, iVar1, false);
				}
				iVar1++;
			}
		}
	}
	iVar1 = 0;
	while (iVar1 <= 10)
	{
		ACTOR_ENABLE_VARIABLE_MESH(bVar0, iVar1 + 7, false);
		iVar1++;
	}
	if (fVar4 != 4294967295)
	{
		bVar8 = CEIL(_GET_AMMO_AMOUNT(bVar0, bVar6, 0));
		if (bVar8 == Global_12976.f_92 || bVar6 == Global_12976.f_96)
		{
			Global_12976.f_92 = bVar8;
			Global_12976.f_96 = bVar6;
			iVar1 = 0;
			while (iVar1 <= 5)
			{
				if (iVar1 <= (Global_12976.f_92 / 6))
				{
					ACTOR_ENABLE_VARIABLE_MESH(bVar0, iVar1 + 17, true);
				}
				else
				{
					ACTOR_ENABLE_VARIABLE_MESH(bVar0, iVar1 + 17, false);
				}
				iVar1++;
			}
		}
	}
	return;
}

void Function_133(int iParam0, bool bParam1) //Position: 0x51F1 / 20977
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

var Function_134(bool bParam0) //Position: 0x5364 / 21348
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

bool Function_135(int iParam0) //Position: 0x5455 / 21589
{
	return (*&Global_12976 + 104)[iParam0];
}

void Function_136() //Position: 0x5464 / 21604
{
	Function_137(&Global_28260, 1, 0);
	return;
}

void Function_137(int iParam0, bool bParam1, int iParam2) //Position: 0x5472 / 21618
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
	void fVar13;
	
	bVar0 = Function_29();
	if (IS_ACTOR_VALID(bVar0))
	{
		iParam0->f_1012 = GET_NUM_WEAPONS_IN_INVENTORY(bVar0);
		iVar7 = 4294967294;
		bVar8 = GET_WEAPON_IN_HAND(bVar0);
		if (bVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(bVar0, bVar8) || iParam2)
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
		fVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(bVar0);
		if (fVar13 != 4294967295)
		{
			iParam0->f_1128 = GET_WEAPON_EQUIPPED(bVar0, fVar13);
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

var Function_138(bool bParam0) //Position: 0x5663 / 22115
{
	return GET_HEADING(bParam0);
}

void Function_139(bool bParam0) //Position: 0x566E / 22126
{
	if (Function_9(bParam0, 1) && !Function_9(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || bParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_140(int iParam0) //Position: 0x569B / 22171
{
	int iVar0;
	
	if (!Function_86(iParam0))
	{
		LOG_ERROR("Attempting to do the SpecialEffects for an invalid outfit");
		return;
	}
	if (Global_27774[iParam013].f_12 & 1 >= 0)
	{
		SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, Global_27774[iParam013].f_16, true);
		iVar0 = GET_ACTOR_FACTION(Global_34573);
	}
	if (Global_27774[iParam013].f_12 & 2 >= 0)
	{
	}
	if (Global_27774[iParam013].f_12 & 4 >= 0)
	{
	}
	if (Global_27774[iParam013].f_12 & 8 >= 0)
	{
	}
	if (Global_27774[iParam013].f_12 & 16 >= 0)
	{
	}
	if (Global_27774[iParam013].f_12 & 32 >= 0)
	{
		SET_DEADEYE_REGENERATION_RATE_MULTIPLIER(0, 2.0f);
	}
	return;
}

void Function_141(var uParam0, bool bParam1, int iParam2) //Position: 0x5762 / 22370
{
	int iVar0;
	
	iVar0 = 0;
	if (IS_SCRIPT_VALID(Global_30617))
	{
		TERMINATE_SCRIPT(Global_30617);
	}
	if (IS_GAME_RESETTING())
	{
		bParam1 = false;
	}
	if (bParam1)
	{
		if (Function_18(Global_29006))
		{
			Function_146(&(Global_29008[Global_29006]), 131072);
			Function_145(&(Global_29008[Global_29006]), 2097152);
			Function_143(Global_29006);
		}
		else
		{
			bParam1 = false;
		}
	}
	if (!bParam1)
	{
		if (!HUD_IS_FADED())
		{
		}
		iVar0 = 0;
		while (iVar0 <= 146)
		{
			if (!StackVal != 1)
			{
				if (Function_142(&(Global_29008[iVar0]), 4) || Function_142(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_145(&(Global_29008[iVar0]), 2097155);
					Function_146(&(Global_29008[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_3386 = 0;
		Global_3387 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			if (Function_1())
			{
			}
			WAIT(false);
		}
		if (uParam0 && !NET_IS_IN_SESSION())
		{
			DESTROY_GC_OBJECTS(0, 1);
		}
		CLEAN_CACHE_ENTRIES();
		ENABLE_AMBIENT_SPAWNING(false);
	}
	return;
}

bool Function_142(var uParam0, int iParam1) //Position: 0x586D / 22637
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_143(int iParam0) //Position: 0x5889 / 22665
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_144())
			{
				return;
			}
		}
		if (!Function_142(&(Global_29008[iParam0]), 2048))
		{
			Global_30618 = iParam0;
		}
		Global_29007 = StackVal;
	}
	else if (Global_3386)
	{
	}
	return;
}

bool Function_144() //Position: 0x5908 / 22792
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && StackVal == 2 == 1) == 6)
		{
			if (Function_142(&(Global_29008[iVar0]), 4) || Function_142(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_145(var uParam0, int iParam1) //Position: 0x5965 / 22885
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_146(var uParam0, int iParam1) //Position: 0x597C / 22908
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_147(int iParam0) //Position: 0x598B / 22923
{
	if (!Function_86(iParam0))
	{
		LOG_ERROR("Attempting to undo the SpecialEffects for an invalid outfit");
		return;
	}
	if (Global_27774[iParam013].f_12 & 1 >= 0)
	{
		RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, Global_27774[iParam013].f_16);
	}
	if (Global_27774[iParam013].f_12 & 2 >= 0)
	{
	}
	if (Global_27774[iParam013].f_12 & 4 >= 0)
	{
	}
	if (Global_27774[iParam013].f_12 & 8 >= 0)
	{
	}
	if (Global_27774[iParam013].f_12 & 16 >= 0)
	{
	}
	if (Global_27774[iParam013].f_12 & 32 >= 0)
	{
		SET_DEADEYE_REGENERATION_RATE_MULTIPLIER(0, 1.0f);
	}
	return;
}

void Function_148(int iParam0, int iParam1) //Position: 0x5A4B / 23115
{
	int iVar0;
	
	if (!Function_86(iParam0))
	{
		LOG_ERROR("Attempting to unset status on invalid outfit");
		return;
	}
	iVar0 = (StackVal && iParam1);
	Global_27774[iParam013].f_8 = (StackVal - iVar0);
	return;
}

void Function_149(bool bParam0, int iParam1) //Position: 0x5AB0 / 23216
{
	if (!Function_86(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

int Function_150() //Position: 0x5B05 / 23301
{
	return Function_9(StackVal, 1);
}

void Function_151(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x5B14 / 23316
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_86(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_167(3) || iParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_169(bParam0, 2))
	{
		Function_127(456, 1, 0, 0);
		Function_149(bParam0, 2);
		if (!bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_59(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_166(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_149(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_126(0, 0, 1, 1))
			{
				Function_91(1);
				Function_90(1, 0);
			}
			else
			{
				Function_89();
			}
		}
		Function_162(bParam0);
		if (StackVal && !Function_9(((((!Function_63() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_9((((Function_63() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_161(Global_76846, 2))
		{
			Function_156(Global_34573, 2, 1, 0);
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_154();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_153(3, bParam1);
				break;
			
			case 0x00000005:
				Function_153(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_153(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_153(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_153(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_153(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_152(2, 24);
				break;
			
			case 0x00000003:
				Function_152(2, 25);
				break;
			
			case 0x0000000F:
				Function_152(2, 26);
				break;
			
			case 0x0000000D:
				Function_152(2, 27);
				break;
			
			case 0x0000000E:
				Function_152(2, 28);
				break;
			}
	}
}

void Function_152(int iParam0, bool bParam1) //Position: 0x5DA3 / 23971
{
	bool bVar0;
	
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	bVar0 = SHIFT_LEFT(true, bParam1);
	(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || bVar0);
	return;
	return;
}

void Function_153(int iParam0, bool bParam1) //Position: 0x5E0A / 24074
{
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || bParam1);
	return;
	return;
}

void Function_154() //Position: 0x5E69 / 24169
{
	if (Function_86(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_83(Global_28180);
			Global_28180.f_8 = Function_155(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_83(Global_28180);
			Global_28180.f_8 = Function_155(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_155(int iParam0, int iParam1) //Position: 0x5EE4 / 24292
{
	vector3 vVar0;
	struct<9> Var3;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	
	iVar15 = 1;
	iVar16 = 1;
	iVar17 = 1;
	iVar18 = 1;
	iVar19 = 1;
	switch (iParam0)
	{
		case 0x00000000:
			break;
		
		case 0x00000004:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_80(6, 0) || Function_80(12, 0))
					{
						bVar6 = StackVal;
					}
					strcpy(&cVar7, "out_dnd_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip4", 32);
					break;
				
				case 0x00000010:
					vVar0 = { -2177,057f, 16,426f, 2626,285f };
					vVar3 = { 400.0f, 400.0f, 400.0f };
					strcpy(&cVar7, "out_dnd_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip6", 32);
					break;
			}
			break;
		
		case 0x00000005:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					vVar3 = { 400.0f, 400.0f, 400.0f };
					strcpy(&cVar7, "out_rustler_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip6", 32);
					break;
			}
			break;
		
		case 0x00000006:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_79(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_80(5, 0))
					{
						vVar0 = { -4120,147f, 18,356f, 3039,531f };
						vVar3 = { 500.0f, 500.0f, 500.0f };
						iVar16 = 0;
					}
					strcpy(&cVar7, "out_treasur_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip6", 32);
					break;
			}
			break;
		
		case 0x00000007:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip4", 32);
					break;
				
				case 0x00000010:
					vVar0 = { -4178,186f, 32,616f, 4582,207f };
					vVar3 = { 500.0f, 500.0f, 500.0f };
					strcpy(&cVar7, "out_bandito_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip6", 32);
					break;
			}
			break;
		
		case 0x00000008:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_79(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_79(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_79(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_79(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_80(26, 0))
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					strcpy(&cVar7, "out_rebel_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_79(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_79(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_79(27) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					strcpy(&cVar7, "out_rebel_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip6", 32);
					break;
			}
			break;
		
		case 0x00000009:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_79(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_79(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_79(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_79(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_80(17, 0) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					strcpy(&cVar7, "out_military_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip6", 32);
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip4", 32);
					break;
				
				case 0x00000010:
					if (Function_79(19) && iVar19)
					{
						vVar0 = { -1708,36f, 46,18f, 2175,89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_80(6, 0) && Function_79(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_79(17) && iVar19)
					{
						vVar0 = { -1687,208f, 53,208f, 2140,491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_80(9, 0) && Function_79(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_79(15) && iVar19)
					{
						vVar0 = { -1709,084f, 55,216f, 2104,631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_80(8, 0) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					strcpy(&cVar7, "out_gun_blip5", 32);
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_suit_blip1", 32);
					break;
			}
			break;
		
		default:
			break;
	}
	if (Function_22(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_22(StackVal, StackVal, vVar3))
			{
				if (GET_OBJECT_TYPE(bVar6) == 9)
				{
					GET_VOLUME_SCALE(bVar6, &vVar3);
				}
				else
				{
					vVar3 = { 200.0f, 200.0f, 200.0f };
				}
			}
		}
	}
	if (!Function_22(StackVal, StackVal, vVar3))
	{
		bVar20 = ADD_BLIP_FOR_COORD(&vVar0, 440, 0, 2, 0);
		SET_BLIP_SCALE(bVar20, ((vVar3.x + vVar3.z) / 2.0f));
		SET_BLIP_COLOR(bVar20, 0,58f, 0,35f, 0,72f, 0,5f);
		SET_BLIP_PRIORITY(bVar20, 3);
		SET_BLIP_NAME(bVar20, &cVar7);
		return bVar20;
	}
	return "";
}

void Function_156(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x6AD5 / 27349
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_158(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_157(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_157(char* cParam0, int iParam1) //Position: 0x6B41 / 27457
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

bool Function_158(bool bParam0, var uParam1, int iParam2) //Position: 0x6B78 / 27512
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
		if (Function_160(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_159(uVar0))
		{
			case 0x00000002:
				if (!Function_161(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_159(char* cParam0) //Position: 0x6BF0 / 27632
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

int Function_160(int iParam0) //Position: 0x6C91 / 27793
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_92(&iVar1, 2147483648);
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

bool Function_161(var uParam0, int iParam1) //Position: 0x6CCE / 27854
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

void Function_162(bool bParam0) //Position: 0x6CE1 / 27873
{
	char* cVar0[32];
	char* cVar8[32];
	struct<8> Var16;
	bool bVar24;
	
	strcpy(&cVar0, "OUT_", 32);
	strcpy(&cVar8, "out_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	stradd(&cVar8, &Global_27774[bParam013] + 32, 32);
	stradd(&cVar8, "_hint", 32);
	if (!IS_JOURNAL_ENTRY_IN_LIST(Global_27774[bParam013].f_48, 0) && !IS_JOURNAL_ENTRY_IN_LIST(Global_27774[bParam013].f_48, 1))
	{
		Global_27774[bParam013].f_48 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		APPEND_JOURNAL_ENTRY(Global_27774[bParam013].f_48, 0);
		bVar24 = false;
		while (bVar24 <= Global_27774[bParam013].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_166(bParam0, Function_165(bVar24)))
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &Var16, 0, 4, false);
			}
			else
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &Var16, 0, 3, false);
			}
			bVar24++;
		}
	}
	else if (IS_JOURNAL_ENTRY_IN_LIST(Global_27774[bParam013].f_48, 0))
	{
		bVar24 = false;
		while (bVar24 <= Global_27774[bParam013].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_166(bParam0, Function_165(bVar24)))
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_27774[bParam013].f_48, &Var16, 4, 0);
			}
			else
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_27774[bParam013].f_48, &Var16, 3, 0);
			}
			bVar24++;
		}
	}
	if (Global_27774[bParam013].f_48 == 4294967295 && Global_27774[bParam013].f_48 == 0)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_128(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), false, 0);
		Function_164(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_163(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_163(int iParam0) //Position: 0x6E91 / 28305
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_86(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 <= Global_27774[iParam013].f_28)
	{
		iVar1 = iVar1;
		if ((StackVal && iVar0) == 0)
		{
			return iVar1 + 1;
		}
		iVar0 *= 2;
		iVar1++;
	}
	return iVar2 + 1;
}

void Function_164(bool bParam0, bool bParam1) //Position: 0x6EE8 / 28392
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(bParam0);
	REMOVE_JOURNAL_ENTRY(bParam0, bParam1);
	PREPEND_JOURNAL_ENTRY(bParam0, bParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(bParam0);
	}
	return;
}

int Function_165(bool bParam0) //Position: 0x6F0D / 28429
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_166(bool bParam0, int iParam1) //Position: 0x6F19 / 28441
{
	int iVar0;
	
	if (!Function_86(bParam0))
	{
		LOG_ERROR("Attempting to check scraps on invalid outfit");
		return 0;
	}
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_167(int iParam0) //Position: 0x6F78 / 28536
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

void Function_168(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x6F94 / 28564
{
	struct<8> Var0;
	
	if (!Function_86(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_167(3))
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_85(bParam0))
	{
		Function_127(456, 1, 0, 0);
		Function_149(bParam0, 2);
		if (bParam2)
		{
			if (!Function_126(0, 0, 1, 1))
			{
				Function_91(1);
				Function_90(1, 5);
			}
			else
			{
				Function_89();
			}
		}
		Function_162(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_63() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, false, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_63() || Global_3380)
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
			{
				DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
			}
		}
		if (bParam3)
		{
			stradd(&Var0, "_tip", 32);
			Function_59(&Var0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_161(Global_76846, 2))
		{
			Function_156(Global_34573, 2, 1, 0);
		}
	}
}

bool Function_169(int iParam0, int iParam1) //Position: 0x70DE / 28894
{
	int iVar0;
	
	if (!Function_86(iParam0))
	{
		return 0;
	}
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_170() //Position: 0x710B / 28939
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_27774)
	{
		Global_27774[iVar013] = 4294967295;
		iVar0++;
	}
	Function_171(0, "cowboy", 0, 0, 2, 1, 3);
	Function_171(1, "social", 1, 13, 2, 1, 0);
	Function_171(2, "gun", 5, 18, 2, 32, 0);
	Function_171(3, "suit", 1, 1, 2, 1, 1);
	Function_171(4, "dnd", 6, 4, 25, 1, 0);
	Function_171(5, "rustler", 6, 5, 14, 1, 1);
	Function_171(6, "treasur", 6, 3, 24, 1, 1);
	Function_171(7, "bandito", 6, 6, 12, 1, 1);
	Function_171(8, "rebel", 6, 2, 27, 1, 1);
	Function_171(9, "military", 6, 9, 8, 1, 1);
	Function_171(10, "uslaw", 1, 8, 8, 1, 1);
	Function_171(11, "legend", 1, 11, 2, 1, 1);
	Function_171(12, "fbi", 1, 7, 8, 1, 1);
	Function_171(13, "duster", 1, 16, 2, 1, 1);
	Function_171(14, "poncho", 1, 17, 2, 1, 1);
	Function_171(15, "rancher", 1, 10, 2, 1, 1);
	Function_168(0, 1, 0, 0);
	Function_88(0, 1, 0);
	if (Global_3364)
	{
		Global_28180 = 4294967295;
	}
	Global_28180.f_8 = "";
	return;
}

void Function_171(bool bParam0, char* cParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x727B / 29307
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (bParam0 > 0 || bParam0 < 30)
	{
		LOG_ERROR("Attempting to initialize an outfit that is out of range");
		return;
	}
	if (iParam2 > 0 || iParam2 < 32)
	{
		LOG_ERROR("Attempting to initialize an outfit with invalid scrap count");
		return;
	}
	Global_27774[bParam013] = bParam0;
	strcpy(&Global_27774[bParam013] + 32, cParam1, 16);
	if (Global_3364)
	{
		Global_27774[bParam013].f_4 = 0;
		Global_27774[bParam013].f_8 = 1;
	}
	if (iParam6 == 0)
	{
		Function_149(bParam0, 8);
	}
	Global_27774[bParam013].f_28 = iParam2;
	Global_27774[bParam013].f_16 = iParam4;
	Global_27774[bParam013].f_20 = iParam3;
	Global_27774[bParam013].f_12 = iParam5;
	strcpy(&cVar0, "out_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
	stradd(&cVar8, "_desc", 32);
	SATCHEL_CREATE_OUTFIT(&cVar0, &cVar8, iParam6);
}

void Function_172(int iParam0) //Position: 0x73C2 / 29634
{
	strcpy(iParam0 + 12, "AMBIENT-UNLOCK", 16);
	*iParam0 = 40204;
	iParam0->f_4 = 29697;
	iParam0->f_8 = 29691;
	iParam0->f_28 = 1;
	return;
}

void Function_173() //Position: 0x73FB / 29691
{
	return;
}

int Function_174() //Position: 0x7401 / 29697
{
	if (Function_1() || !Global_3366)
	{
		return 0;
	}
	Function_187();
	Function_180(1);
	Function_178();
	if ((Function_63() || HUD_IS_FADED()) || HUD_IS_FADING())
	{
		return 0;
	}
	if (!Function_2(8192))
	{
		return 0;
	}
	if ((((Global_3380 || Global_63096) || Global_3395) || Global_3394) || Global_3396)
	{
		return 0;
	}
	if (Global_26281 + 5.0f) < GET_CURRENT_GAME_TIME()
	{
		return 0;
	}
	Function_177();
	Function_176();
	Function_175();
	return 0;
}

void Function_175() //Position: 0x746A / 29802
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= Global_25965)
	{
		if (!Global_25965[bVar0])
		{
			switch (bVar0)
			{
				case 0x00000000:
					if (Function_80(8, 0))
					{
						Global_25965[bVar0] = 1;
					}
					break;
				
				case 0x00000001:
					if (Function_80(16, 0))
					{
						Global_25965[bVar0] = 1;
					}
					break;
				
				case 0x00000002:
					if (Function_80(13, 0))
					{
						Global_25965[bVar0] = 1;
					}
					break;
				
				case 0x00000003:
					if (Function_80(34, 0))
					{
						Global_25965[bVar0] = 1;
					}
					break;
				
				default:
					LOG_ERROR("Found a ProcTheme that is not enabled for unlocking");
					break;
				}
		}
		bVar0++;
	}
	return;
}

void Function_176() //Position: 0x753A / 30010
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= Global_25974)
	{
		if (!Global_25974[bVar0])
		{
			switch (bVar0)
			{
				case 0x00000000:
					if (Function_80(3, 0))
					{
						Global_25974[bVar0] = 1;
					}
					break;
				
				case 0x00000001:
					if (Function_84(1))
					{
						Global_25974[bVar0] = 1;
					}
					break;
				
				case 0x00000002:
					if (Function_80(4, 0))
					{
						Global_25974[bVar0] = 1;
					}
					break;
				
				case 0x00000003:
					Global_25974[bVar0] = 1;
					break;
				
				case 0x00000004:
					if (Function_80(25, 0))
					{
						Global_25974[bVar0] = 1;
					}
					break;
				
				case 0x00000005:
					if (Function_80(5, 0))
					{
						Global_25974[bVar0] = 1;
					}
					break;
				
				case 0x00000006:
					break;
				
				case 0x00000007:
					if (Function_80(10, 0))
					{
						Global_25974[bVar0] = 1;
					}
					break;
				
				case 0x00000008:
					if (Function_80(3, 0))
					{
						Global_25974[bVar0] = 1;
					}
					break;
				
				case 0x00000009:
					Global_25974[bVar0] = 1;
					break;
				
				case 0x0000000A:
					if (Function_80(37, 0))
					{
						Global_25974[bVar0] = 1;
					}
					break;
				
				default:
					LOG_ERROR("Found a MinigameType that is not enabled for unlocking");
					break;
				}
		}
		bVar0++;
	}
	return;
}

void Function_177() //Position: 0x769A / 30362
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= Global_25970)
	{
		if (!Global_25970[bVar0])
		{
			switch (bVar0)
			{
				case 0x00000000:
					break;
				
				case 0x00000001:
					if (Function_80(2, 0))
					{
						Global_25970[bVar0] = 1;
					}
					break;
				
				case 0x00000002:
					if (Function_80(6, 0))
					{
						Global_25970[bVar0] = 1;
					}
					break;
				
				default:
					LOG_ERROR("Found a JobType that is not enabled for unlocking");
					break;
				}
		}
		bVar0++;
	}
	return;
}

void Function_178() //Position: 0x773B / 30523
{
	int iVar0;
	
	if (Function_1())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= Global_26003)
	{
		if (!Global_26003[iVar0])
		{
			switch (iVar0)
			{
				case 0x00000000:
					if (Function_80(25, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("ramitaBayaBefore");
						ENABLE_WORLD_SECTOR("ramitaBayaAfter");
						ENABLE_CURVE("rsdROAD_frb_road", true);
						ENABLE_CURVE("rsdROAD_fom_frb_road", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve221", true);
					}
					break;
				
				case 0x00000001:
					if (Function_80(25, 0) && !Function_80(26, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("butterBridgeA");
						DISABLE_WORLD_SECTOR("butterBridgeC");
						DISABLE_WORLD_SECTOR("butterBridgeD");
						ENABLE_WORLD_SECTOR("butterBridgeB");
						ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", true);
					}
					break;
				
				case 0x00000002:
					if ((Function_80(25, 0) && Function_80(26, 0)) && !Function_80(29, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("butterBridgeB");
						DISABLE_WORLD_SECTOR("butterBridgeA");
						DISABLE_WORLD_SECTOR("butterBridgeC");
						ENABLE_WORLD_SECTOR("butterBridgeD");
						ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", false);
					}
					break;
				
				case 0x00000003:
					if ((Function_80(25, 0) && Function_80(26, 0)) && Function_80(29, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("butterBridgeA");
						DISABLE_WORLD_SECTOR("butterBridgeD");
						DISABLE_WORLD_SECTOR("butterBridgeC");
						ENABLE_WORLD_SECTOR("butterBridgeB");
						ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", true);
					}
					break;
				
				case 0x00000004:
					if (Function_80(41, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("tannersSpanBefore");
						ENABLE_WORLD_SECTOR("tannersSpanAfter");
					}
					break;
				
				case 0x00000005:
					if (Function_80(41, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("dixonCrossingBefore");
						ENABLE_WORLD_SECTOR("dixonCrossingAfter");
						ENABLE_CURVE("rsdROAD_thi_blk_road", true);
						ENABLE_CURVE("rsdROAD_thi_blk_roaddetachedCurve2", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve124", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve132", true);
					}
					break;
				
				case 0x00000006:
					if (Function_80(22, 0) && !Function_80(41, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("hen_barn01x");
						DISABLE_CHILD_SECTOR("hen_barn01props01x");
						DISABLE_CHILD_SECTOR("hen_barn01props02x");
						ENABLE_CHILD_SECTOR("hen_barn02x");
						ENABLE_CHILD_SECTOR("hen_barn02props01x");
					}
					break;
				
				case 0x00000007:
					if (Function_80(22, 0) && Function_80(41, 0))
					{
						Global_26003[iVar0] = 1;
						ENABLE_CHILD_SECTOR("hen_barn01x");
						ENABLE_CHILD_SECTOR("hen_barn01props01x");
						ENABLE_CHILD_SECTOR("hen_barn01props02x");
						DISABLE_CHILD_SECTOR("hen_barn02x");
						DISABLE_CHILD_SECTOR("hen_barn02props01x");
					}
					break;
				
				case 0x00000008:
					if (Function_80(34, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("campoMiradaBefore");
						ENABLE_WORLD_SECTOR("campoMiradaAfter");
					}
					break;
				
				case 0x00000009:
					if (Function_80(26, 0) || Function_80(30, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("fronteraBridgeBefore");
						ENABLE_WORLD_SECTOR("fronteraBridgeAfter");
					}
					break;
				
				case 0x0000000A:
					if (Function_80(40, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("fod_gates01x");
						ENABLE_CHILD_SECTOR("fod_gates02x");
						ENABLE_CHILD_SECTOR("fod_gates02Doors01x");
					}
					break;
				
				case 0x0000000B:
					if (Function_80(48, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("coc_fence01x");
						ENABLE_CHILD_SECTOR("coc_fence01bx");
						ENABLE_CHILD_SECTOR("coc_gates02x");
						DISABLE_CHILD_SECTOR("coc_gates01x");
					}
					break;
				
				case 0x0000000C:
					if (Function_80(41, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("masonBridgeBefore");
						ENABLE_WORLD_SECTOR("masonBridgeAfter");
					}
					break;
				
				case 0x0000000D:
					if (Function_80(41, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("lmf_troughBefore01x");
						ENABLE_CHILD_SECTOR("lmf_troughAfter01x");
					}
					break;
				
				case 0x0000000E:
					break;
				
				case 0x0000000F:
					if (Function_80(21, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("rwf_barn01xprops02x");
						ENABLE_CHILD_SECTOR("rwf_barn01xprops01x");
					}
					break;
				
				case 0x00000010:
					if (Function_80(57, 0) || Function_179(57))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("beh_silo02x");
						ENABLE_CHILD_SECTOR("beh_silo01x");
					}
					break;
				
				case 0x00000011:
					if (Function_80(48, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("beh_house02x");
						DISABLE_CHILD_SECTOR("beh_house02props01x");
						ENABLE_CHILD_SECTOR("beh_house01x");
						ENABLE_CHILD_SECTOR("beh_house01props01x");
					}
					break;
				
				case 0x00000012:
					if (Function_80(28, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("tor_militaryCamp01x");
						ENABLE_CHILD_SECTOR("tor_militaryCamp02x");
					}
					break;
				
				case 0x00000013:
					if (Function_80(41, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("esc_villaWall04x");
						ENABLE_CHILD_SECTOR("esc_villaWall05x");
					}
					break;
				
				case 0x00000014:
					if (Function_79(37))
					{
						Global_26003[iVar0] = 1;
						ENABLE_CHILD_SECTOR("icarus");
					}
					break;
				
				case 0x00000015:
					break;
				
				case 0x00000016:
					break;
				
				case 0x00000017:
					if (Function_80(57, 0))
					{
						Global_26003[iVar0] = 1;
						ENABLE_CHILD_SECTOR("beh_grave02x");
						ENABLE_CHILD_SECTOR("beh_grave03x");
						DISABLE_CHILD_SECTOR("beh_grave01x");
					}
					break;
				
				case 0x00000018:
					if (Function_80(25, 0))
					{
						Global_26003[iVar0] = 1;
						ENABLE_CURVE("rsdGPSTRAIL_elm_cas_path", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve495", true);
						ENABLE_CURVE("rsdGPSTRAIL_elm_cas_pathdetachedCurve12", true);
						ENABLE_CURVE("rsdGPSTRAIL_elm_cas_pathdetachedCurve13", true);
						ENABLE_CURVE("rsdGPSTRAIL_elm_cas_loop1", true);
						ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve10", true);
						ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve8", true);
						ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve6", true);
						ENABLE_CURVE("rsdTRAIL_las_nos_pathdetachedCurve2", true);
						ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve10detachedCurve1", true);
						ENABLE_CURVE("rsdTRAIL_curve44", true);
						ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve18", true);
						ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve4detachedCurve2", true);
						ENABLE_CURVE("rsdROAD_las_roaddetachedCurve4", true);
						ENABLE_CURVE("rsdROAD_las_roaddetachedCurve2", true);
						ENABLE_CURVE("rsdROAD_curve69", true);
						ENABLE_CURVE("rsdROAD_las_road", true);
						ENABLE_CURVE("rsdROAD_frb_road", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve98", true);
						ENABLE_CURVE("rsdGPSROAD_elm_cas_roaddetachedCurve4detachedCurve2", true);
						ENABLE_CURVE("rsdGPSROAD_elm_cas_roaddetachedCurve4", true);
						ENABLE_CURVE("rsdGPSTRAIL_elm_loop01_pathdetachedCurve2detachedCurve2", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve634", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve635", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve636", true);
						ENABLE_CURVE("rsdTRAIL_curve637", true);
						ENABLE_CURVE("rsdTRAIL_curve638", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop04_pathdetachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_curve70", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop04_path", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop05_pathdetachedCurve4", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop05_pathdetachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop01_pathdetachedCurve2detachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve2detachedCurve2detachedCurve2detachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve2detachedCurve2detachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve2detachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve4", true);
						ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve10", true);
						ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve8", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop03_path1", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop03_path", true);
						ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve6", true);
						ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve4", true);
						ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop02_path", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop01_path1", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop01_path", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop03_path1detachedCurve4", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop03_pathdetachedCurve4", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop03_pathdetachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop03_path1detachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_chu_loop01_path3detachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_chu_loop01_path3", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop09_path", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop06__path", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop01_path1detachedCurve4", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop01_pathdetachedCurve4", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop01_path1detachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop01_path1detachedCurve6", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop07_pathdetachedCurve2detachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop07_pathdetachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop07_path", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop02_path1", true);
						ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve4", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop02_path1detachedCurve4", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop02_path1detachedCurve2", true);
						ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve20detachedCurve2", true);
						ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve16", true);
						ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve12", true);
						ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve14", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve163", true);
						ENABLE_CURVE("rsdTRAIL_curve297", true);
						ENABLE_CURVE("rsdTRAIL_curve71", true);
						ENABLE_CURVE("rsdTRAIL_curve72", true);
						ENABLE_CURVE("rsdTRAIL_cas_ram_path", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop04_pathdetachedCurve2detachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop05_path", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop08_path", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve77", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve78", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve78", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve79", true);
						ENABLE_CURVE("rsdGPSTRAIL_elm_loop01_pathdetachedCurve2detachedCurve4", true);
						ENABLE_CURVE("rsdGPSTRAIL_elm_loop01_pathdetachedCurve2", true);
						ENABLE_CURVE("rsdGPSTRAIL_elm_loop01_path", true);
						ENABLE_CURVE("rsdGPSTRAIL_elm_loop02_path", true);
						ENABLE_CURVE("rsdROAD_elm_cas_roaddetachedCurve8", true);
						ENABLE_CURVE("rsdROAD_elm_cas_roaddetachedCurve6", true);
					}
					break;
				
				case 0x00000019:
					if (Function_80(32, 0))
					{
						Global_26003[iVar0] = 1;
						ENABLE_CHILD_SECTOR("emt_caveDoor02x");
						DISABLE_CHILD_SECTOR("emt_caveDoor01x");
					}
					break;
				
				case 0x0000001A:
					if (Function_80(20, 0))
					{
						Global_26003[iVar0] = 1;
						ENABLE_CHILD_SECTOR("thi_window02x");
						DISABLE_CHILD_SECTOR("thi_window01x");
					}
					break;
				
				default:
					LOG_ERROR("world state error");
					break;
				}
		}
		iVar0++;
	}
	return;
}

bool Function_179(int iParam0) //Position: 0x8EED / 36589
{
	int iVar0;
	
	if (!Function_82(iParam0))
	{
		return 0;
	}
	iVar0 = Function_81(iParam0);
	if (!Function_74(Function_81(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

void Function_180(bool bParam0) //Position: 0x8F23 / 36643
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	struct<8> Var3;
	struct<8> Var11;
	
	iVar0 = 0;
	while (iVar0 <= Global_25986)
	{
		if ((!Global_25986[iVar0] && (!bParam0 || !Function_63())) && !bVar1)
		{
			switch (iVar0)
			{
				case 0x00000000:
					if (Function_80(2, 0))
					{
						bVar1 = false;
						Global_25986[iVar0] = 1;
						SET_DISABLE_DEADEYE(0, 0);
						SET_DEADEYE_MULTILOCK_ENABLE(0, false);
						SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
						Function_186(390, 3.0f);
						Function_99(390, 1, bParam0);
					}
					break;
				
				case 0x00000001:
					if (Function_80(11, 0))
					{
						bVar1 = false;
						Global_25986[iVar0] = 1;
						SET_DISABLE_DEADEYE(0, 0);
						SET_DEADEYE_MULTILOCK_ENABLE(0, true);
						SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
						Function_186(390, 3.0f);
						Function_99(390, 2, bParam0);
					}
					break;
				
				case 0x00000002:
					if (Function_80(30, 0))
					{
						bVar1 = false;
						Global_25986[iVar0] = 1;
						SET_DISABLE_DEADEYE(0, 0);
						SET_DEADEYE_MULTILOCK_ENABLE(0, true);
						SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
						Function_186(390, 3.0f);
						Function_99(390, 3, bParam0);
					}
					break;
				
				case 0x00000003:
					Global_25986[iVar0] = 1;
					break;
				
				case 0x00000004:
					if (Function_80(4, 0))
					{
						Global_25986[iVar0] = 1;
						bVar1 = true;
						strcpy(&Var3, "taxi_coach", 32);
					}
					break;
				
				case 0x00000005:
					Global_25986[iVar0] = 1;
					break;
				
				case 0x00000009:
					if (Function_80(2, 0))
					{
						Global_25986[iVar0] = 1;
						bVar1 = true;
						bVar2 = true;
						strcpy(&Var3, "shop_feature_1", 32);
						strcpy(&Var11, "shop_feature_2", 32);
					}
					break;
				
				case 0x00000006:
					if (Function_80(2, 0))
					{
						Global_25986[iVar0] = 1;
						bVar1 = false;
					}
					break;
				
				case 0x00000007:
					if (Function_80(2, 0))
					{
						Global_25986[iVar0] = 1;
						bVar1 = false;
					}
					break;
				
				case 0x00000008:
					if (Function_80(37, 0))
					{
						Global_25986[iVar0] = 1;
					}
					break;
				
				case 0x0000000A:
					if (Function_80(2, 0) && !Function_185("npressDemo"))
					{
						Global_25986[iVar0] = 1;
						bVar1 = false;
					}
					break;
				
				case 0x0000000B:
					if (Function_80(4, 0))
					{
						Global_25986[iVar0] = 1;
						bVar1 = true;
						bVar2 = true;
						strcpy(&Var3, "house_feature_1", 32);
						strcpy(&Var11, "house_feature_2", 32);
					}
					break;
				
				case 0x0000000C:
					if (!Function_179(1))
					{
						Function_184(1);
						Global_25986[iVar0] = 1;
					}
					else
					{
						Function_184(0);
						Global_25986[iVar0] = 0;
					}
					break;
				
				case 0x0000000D:
					if (Function_183(0) == 10)
					{
						Global_25986[iVar0] = 1;
						bVar1 = true;
						strcpy(&Var3, "nAM_SS_RW2", 32);
						SET_DEADEYE_POINT_MODIFIER(0, 2.0f);
					}
					break;
				
				case 0x0000000E:
					if (Function_183(1) > 5)
					{
						Global_25986[iVar0] = 1;
						bVar1 = true;
						strcpy(&Var3, "nAM_MH_RW1", 32);
						SET_WEAPONENUM_LOCKED(14, 0);
						Function_181(14, 1);
					}
					break;
				
				case 0x0000000F:
					if (((Function_183(0) != 10 && Function_183(1) != 10) && Function_183(2) != 10) && Function_183(3) != 10)
					{
						Global_25986[iVar0] = 1;
						bVar1 = true;
						strcpy(&Var3, "AM_LOTW_RW1", 32);
						SET_MAX_DEADEYE_POINTS(0, 150.0f);
						Function_88(11, 0, 1);
					}
					break;
				
				default:
					LOG_ERROR("Found a FeatureType that is not enabled for unlocking");
					break;
			}
			if (bVar1 && !bParam0)
			{
				bVar1 = false;
			}
		}
		iVar0++;
	}
	if (bVar1 && bParam0)
	{
		stradd(&Var3, "_help", 32);
		Function_59(&Var3, 0x41200000, 1, 0, 2, 1, 0);
		if (bVar2)
		{
			stradd(&Var11, "_help", 32);
			Function_59(&Var11, 0x41200000, 1, 0, 2, 1, 0);
		}
	}
	return;
}

int Function_181(int iParam0, int iParam1) //Position: 0x92F3 / 37619
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_59354[iParam08].f_24 = iParam1;
	Function_182(iParam0, iParam1);
	Function_156(Global_34573, 1, 4, 1);
	return 1;
}

int Function_182(int iParam0, int iParam1) //Position: 0x9366 / 37734
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_183(int iParam0) //Position: 0x93C2 / 37826
{
	if (Function_1() || Global_34165.f_44)
	{
		return StackVal;
	}
	return StackVal;
}

void Function_184(bool bParam0) //Position: 0x93EA / 37866
{
	if (DECOR_CHECK_EXIST(Global_34573, "DISABLE_HORSE_WHISTLE"))
	{
		if (bParam0)
		{
			DECOR_REMOVE(Global_34573, "DISABLE_HORSE_WHISTLE");
		}
	}
	else if (!bParam0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

bool Function_185(bool bParam0) //Position: 0x945E / 37982
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

int Function_186(int iParam0, int iParam1) //Position: 0x947D / 38013
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

void Function_187() //Position: 0x94BD / 38077
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	
	fVar0 = 0.0f;
	iVar1 = Function_193();
	iVar2 = Function_192();
	iVar3 = Function_190();
	fVar0 = (fVar0 + (24.0f * Function_52(1.0f, (IntToFloat(Function_114(12)) / 24.0f))));
	fVar0 = (fVar0 + (17.0f * Function_52(1.0f, (IntToFloat(Function_114(13)) / 17.0f))));
	fVar0 = (fVar0 + (7.0f * Function_52(1.0f, (IntToFloat(Function_114(14)) / 7.0f))));
	fVar0 = (fVar0 + (9.0f * Function_52(1.0f, (IntToFloat(Function_114(15)) / 9.0f))));
	fVar0 = (fVar0 + (4,5f * Function_52(1.0f, (IntToFloat(iVar1) / 9.0f))));
	fVar0 = (fVar0 + (3,5f * Function_52(1.0f, (IntToFloat(iVar3) / 7.0f))));
	fVar0 = (fVar0 + (2.0f * Function_52(1.0f, (IntToFloat(((Function_114(363) + Function_114(364)) + Function_114(365))) / 20.0f))));
	fVar0 = (fVar0 + (2,5f * Function_52(1.0f, (IntToFloat(Function_114(469)) / 5.0f))));
	fVar0 = (fVar0 + (2,5f * Function_52(1.0f, (IntToFloat(Function_114(400)) / 5.0f))));
	fVar0 = (fVar0 + (3.0f * Function_52(1.0f, (IntToFloat(Function_114(410)) / 6.0f))));
	fVar0 = (fVar0 + (3.0f * Function_52(1.0f, (Function_110(474) / Function_111(474)))));
	fVar0 = (fVar0 + (2.0f * Function_52(1.0f, (Function_110(475) / Function_111(475)))));
	fVar0 = (fVar0 + (1.0f * Function_52(1.0f, (Function_110(476) / Function_111(476)))));
	fVar0 = (fVar0 + (9.0f * Function_52(1.0f, (IntToFloat(iVar2) / 18.0f))));
	fVar0 = (fVar0 + (2.0f * Function_52(1.0f, (Function_110(468) / 13.0f))));
	if (Function_183(3) > 10)
	{
		fVar0 = (fVar0 + 2.0f);
	}
	else if (Function_183(3) > 5)
	{
		fVar0 = (fVar0 + 1.0f);
	}
	if (Function_183(0) > 10)
	{
		fVar0 = (fVar0 + 2.0f);
	}
	else if (Function_183(0) > 5)
	{
		fVar0 = (fVar0 + 1.0f);
	}
	if (Function_183(2) > 10)
	{
		fVar0 = (fVar0 + 2.0f);
	}
	else if (Function_183(2) > 5)
	{
		fVar0 = (fVar0 + 1.0f);
	}
	if (Function_183(1) > 10)
	{
		fVar0 = (fVar0 + 2.0f);
	}
	else if (Function_183(1) > 5)
	{
		fVar0 = (fVar0 + 1.0f);
	}
	if (Global_30842[7])
	{
		Function_189(iVar1, iVar2, iVar3);
	}
	if (fVar0 < Function_110(5))
	{
		Function_188(5, fVar0, 0);
		Function_189(iVar1, iVar2, iVar3);
	}
	if (fVar0 <= 100.0f)
	{
		if (!Function_84(12))
		{
			Function_88(12, 0, 1);
		}
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(32))
		{
			AWARD_ACHIEVEMENT(32);
		}
	}
	else if (fVar0 <= 75.0f)
	{
		if (!Function_85(12))
		{
			Function_168(12, 0, 1, 1);
		}
	}
	bVar4 = (bVar4 + Function_114(12));
	bVar4 = (bVar4 + Function_114(13));
	bVar4 = (bVar4 + Function_114(14));
	bVar4 = (bVar4 + Function_114(15));
	bVar4 = (bVar4 + Function_114(457));
	bVar4 = (bVar4 + Function_114(458));
	bVar4 = (bVar4 + Function_114(363));
	bVar4 = (bVar4 + Function_114(364));
	bVar4 = (bVar4 + Function_114(365));
	bVar4 = (bVar4 + Function_114(469));
	bVar4 = (bVar4 + Function_114(400));
	bVar4 = (bVar4 + Function_114(410));
	bVar4 = (bVar4 + Function_114(474));
	bVar4 = (bVar4 + Function_114(475));
	bVar4 = (bVar4 + Function_114(476));
	bVar4 = (bVar4 + Function_114(407));
	bVar4 = (bVar4 + Function_114(468));
	bVar4 = (bVar4 + Function_114(409));
	bVar4 = (bVar4 + Function_183(3));
	bVar4 = (bVar4 + Function_183(0));
	bVar4 = (bVar4 + Function_183(2));
	bVar4 = (bVar4 + Function_183(1));
	if (bVar4 >= Function_114(6))
	{
		Function_99(6, bVar4, 0);
	}
	return;
}

int Function_188(int iParam0, bool bParam1, bool bParam2) //Position: 0x9833 / 38963
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_34581[iParam0] > bParam1)
	{
		Function_113(iParam0, bParam1, 0);
	}
	Global_34581[iParam0] = bParam1;
	Function_112(iParam0);
	if (bParam2)
	{
		Function_100(iParam0, 1, bParam1, 0, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_189(int iParam0, int iParam1, int iParam2) //Position: 0x9A9F / 39583
{
	if (Function_183(3) > 10)
	{
	}
	else if (Function_183(3) > 5)
	{
	}
	if (Function_183(0) > 10)
	{
	}
	else if (Function_183(0) > 5)
	{
	}
	if (Function_183(2) > 10)
	{
	}
	else if (Function_183(2) > 5)
	{
	}
	if (Function_183(1) > 10)
	{
	}
	else if (Function_183(1) > 5)
	{
	}
	return;
}

var Function_190() //Position: 0x9AF5 / 39669
{
	int iVar0;
	
	if (Function_191(Global_30734) >= 0)
	{
		iVar0++;
	}
	if (Function_191(Global_30736) >= 0)
	{
		iVar0++;
	}
	if (Function_191(Global_30738) >= 0)
	{
		iVar0++;
	}
	if (Function_191(Global_30737) >= 0)
	{
		iVar0++;
	}
	if (Function_191(Global_30739) >= 0)
	{
		iVar0++;
	}
	if (Function_191(Global_30741) >= 0)
	{
		iVar0++;
	}
	if (Function_191(Global_30740) >= 0)
	{
		iVar0++;
	}
	return iVar0;
}

int Function_191(int iParam0) //Position: 0x9B6D / 39789
{
	if (!Function_76(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_12;
}

var Function_192() //Position: 0x9B87 / 39815
{
	int iVar0;
	
	if (Function_79(3))
	{
		iVar0++;
	}
	if (Function_79(9))
	{
		iVar0++;
	}
	if (Function_79(14))
	{
		iVar0++;
	}
	if (Function_79(20))
	{
		iVar0++;
	}
	if (Function_79(22))
	{
		iVar0++;
	}
	if (Function_79(27))
	{
		iVar0++;
	}
	if (Function_79(31))
	{
		iVar0++;
	}
	if (Function_79(34))
	{
		iVar0++;
	}
	if (Function_79(37))
	{
		iVar0++;
	}
	if (Function_79(44))
	{
		iVar0++;
	}
	if (Function_79(48))
	{
		iVar0++;
	}
	if (Function_79(53))
	{
		iVar0++;
	}
	if (Function_79(56))
	{
		iVar0++;
	}
	if (Function_79(59))
	{
		iVar0++;
	}
	if (Function_79(63))
	{
		iVar0++;
	}
	if (Function_79(67))
	{
		iVar0++;
	}
	if (Function_79(71))
	{
		iVar0++;
	}
	if (Function_79(76))
	{
		iVar0++;
	}
	return iVar0;
}

var Function_193() //Position: 0x9C8A / 40074
{
	int iVar0;
	
	if (Function_84(9))
	{
		iVar0++;
	}
	if (Function_84(10))
	{
		iVar0++;
	}
	if (Function_84(3))
	{
		iVar0++;
	}
	if (Function_84(15))
	{
		iVar0++;
	}
	if (Function_84(14))
	{
		iVar0++;
	}
	if (Function_84(5))
	{
		iVar0++;
	}
	if (Function_84(6))
	{
		iVar0++;
	}
	if (Function_84(7))
	{
		iVar0++;
	}
	if (Function_84(8))
	{
		iVar0++;
	}
	return iVar0;
}

void Function_194() //Position: 0x9D0C / 40204
{
	if (!Global_3365)
	{
		Function_215();
		Function_214();
		Function_213();
		Function_212();
	}
	Function_211();
	Function_196();
	Function_195();
	return;
}

void Function_195() //Position: 0x9D2E / 40238
{
	int iVar0;
	
	if (!Global_3365)
	{
		iVar0 = 0;
		while (iVar0 <= Global_26031)
		{
			Global_26031[iVar0] = 1;
			iVar0++;
		}
	}
	return;
}

void Function_196() //Position: 0x9D57 / 40279
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_26055)
	{
		if (Global_26055[iVar0])
		{
			Function_197(iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_197(int iParam0) //Position: 0x9D80 / 40320
{
	bool bVar0;
	struct<4> Var1;
	
	if (!Function_210(iParam0) && NET_IS_IN_SESSION())
	{
		return;
	}
	bVar0 = true;
	switch (iParam0)
	{
		case 0x00000001:
			if (Function_167(3))
			{
				if (!Function_84(1))
				{
					if (!Function_80(2, 0))
					{
						return;
					}
					Function_88(1, 0, 0);
				}
			}
			break;
		
		case 0x00000004:
			if (Function_167(3))
			{
				if (!Function_84(2) && !Function_85(2))
				{
					Function_168(2, 0, 1, 1);
					Function_204(2);
					bVar0 = false;
				}
			}
			break;
		
		case 0x00000009:
			if (!Global_26055[iParam0])
			{
				Function_203(992, 0, 1);
				Function_202(52, 1, 0);
			}
			break;
		
		case 0x0000000A:
			SET_WEAPON_GOLD(Global_34573, 4, true);
			SET_WEAPON_GOLD(Global_34573, 8, true);
			break;
		
		case 0x0000000D:
			UI_CHEAT_SET_STATE(4, 1);
			Function_201(4);
			break;
		
		case 0x0000000E:
			UI_CHEAT_SET_STATE(25, 1);
			Function_201(4);
			break;
		
		case 0x0000000F:
			UI_CHEAT_SET_STATE(7, 1);
			Function_201(4);
			break;
		
		case 0x00000010:
			UI_CHEAT_SET_STATE(11, 1);
			Function_201(4);
			break;
		
		case 0x00000011:
			UI_CHEAT_SET_STATE(13, 1);
			Function_201(4);
			break;
		
		case 0x00000012:
			UI_CHEAT_SET_STATE(16, 1);
			Function_201(4);
			break;
		
		case 0x00000013:
			UI_CHEAT_SET_STATE(17, 1);
			Function_201(4);
			break;
		
		case 0x00000014:
			UI_CHEAT_SET_STATE(18, 1);
			Function_201(4);
			break;
		
		case 0x00000015:
			UI_CHEAT_SET_STATE(24, 1);
			Function_201(4);
			break;
		
		case 0x00000016:
			UI_CHEAT_SET_STATE(26, 1);
			Function_201(4);
			break;
		
		case 0x00000017:
			UI_CHEAT_SET_STATE(22, 1);
			Function_201(4);
			break;
		
		case 0x00000018:
			UI_CHEAT_SET_STATE(28, 1);
			Function_201(4);
			break;
		
		case 0x00000019:
			UI_CHEAT_SET_STATE(35, 1);
			Function_201(4);
			break;
		
		case 0x0000001A:
			UI_CHEAT_SET_STATE(36, 1);
			Function_201(4);
			break;
		
		case 0x0000001B:
			UI_CHEAT_SET_STATE(37, 1);
			Function_201(4);
			break;
		
		case 0x0000001C:
			UI_CHEAT_SET_STATE(38, 1);
			Function_201(4);
			break;
		
		case 0x0000001D:
			UI_CHEAT_SET_STATE(39, 1);
			Function_201(4);
			break;
		
		case 0x0000001E:
			UI_CHEAT_SET_STATE(23, 1);
			Function_201(4);
			break;
		
		case 0x00000023:
			if (Function_126(0, 0, 1, 1))
			{
				return;
			}
			if (NET_IS_IN_SESSION())
			{
				Function_199(8);
				bVar0 = false;
			}
			break;
		
		case 0x00000028:
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(48))
			{
				AWARD_ACHIEVEMENT(48);
			}
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
			bVar0 = false;
			break;
		
		case 0x00000008:
			if (!Function_80(2, 0))
			{
				return;
			}
			Function_198(11);
			break;
		
		case 0x00000000:
			if (!Function_80(2, 0))
			{
				return;
			}
			Function_198(6);
			break;
		
		default:
			bVar0 = false;
			LOG_ERROR("Unimplemented Net Unlock - please do!");
			break;
	}
	if (!Global_26055[iParam0])
	{
		if (bVar0)
		{
			strcpy(&Var1, "unlock_help_", 16);
			straddi(&Var1, iParam0, 16);
			Function_59(&Var1, 0x41200000, 1, 0, 2, 1, 0);
		}
	}
	Global_26055[iParam0] = 1;
	return;
}

void Function_198(int iParam0) //Position: 0xA094 / 41108
{
	if (AWARD_AVATAR(iParam0))
	{
		if (IS_PS3())
		{
			Function_59("avunlock_help", 0x41200000, 1, 0, 2, 1, 0);
		}
	}
	return;
}

void Function_199(int iParam0) //Position: 0xA0CB / 41163
{
	Function_200(&Global_83864 + 1252, iParam0);
	return;
}

void Function_200(var uParam0, int iParam1) //Position: 0xA0DD / 41181
{
	Function_123(uParam0, iParam1);
	return;
}

int Function_201(bool bParam0) //Position: 0xA0EA / 41194
{
	if (bParam0 != 4)
	{
		if (Function_185("xmlsave"))
		{
			if (IS_DEV_BUILD())
			{
				SAVE_GAME(SS_GET_STRING(2, bParam0));
			}
		}
	}
	if (bParam0 <= 4)
	{
		SAVE_MANAGER_CREATE_SAVE_DISPLAY_NAME(&Global_3422[Global_626940] + 12);
	}
	Function_93();
	SAVE_MANAGER_HARD_SAVE(SS_GET_STRING(3, bParam0));
	return 1;
}

int Function_202(bool bParam0, bool bParam1, int iParam2) //Position: 0xA136 / 41270
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (bParam1)
	{
		if (GET_ITEM_COUNT(Function_134(bParam0), Function_29()) == 0)
		{
			ADD_ITEM(Function_134(bParam0), Function_29(), iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_134(bParam0), Function_29(), iParam2);
	return 1;
}

void Function_203(var uParam0, bool bParam1, bool bParam2) //Position: 0xA181 / 41345
{
	Global_13038 = uParam0;
	if (bParam1)
	{
		Function_123(&Global_12976 + 36 + 20, 128);
	}
	if (bParam2)
	{
		Function_123(&Global_12976 + 36 + 20, 64);
	}
	return;
}

void Function_204(bool bParam0) //Position: 0xA1AE / 41390
{
	int iVar0;
	int iVar1;
	
	if (Function_79(20))
	{
		Function_151(bParam0, 16, 1, 0, 1);
	}
	iVar0 = Function_205(0, Global_30640[2], 3);
	iVar1 = Function_191(iVar0);
	if (iVar1 >= 0)
	{
		Function_151(bParam0, 2, 1, 0, 1);
	}
	return;
}

int Function_205(bool bParam0, bool bParam1, bool bParam2) //Position: 0xA1E9 / 41449
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_209(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_206(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_206(bParam0, bParam1, bParam2, 4294967295);
}

int Function_206(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xA247 / 41543
{
	var uVar0;
	
	if (!Function_208(bParam2))
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
	uVar0 = Function_209(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_207(uVar0);
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

int Function_207(int iParam0) //Position: 0xA39C / 41884
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

bool Function_208(int iParam0) //Position: 0xA3DA / 41946
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_209(int iParam0, int iParam1, int iParam2) //Position: 0xA3EF / 41967
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

bool Function_210(int iParam0) //Position: 0xA40F / 41999
{
	switch (iParam0)
	{
		case 0x00000028:
			return 1;
			break;
		
		case 0x00000023:
			return 1;
			break;
	}
	return 0;
}

void Function_211() //Position: 0xA433 / 42035
{
	int iVar0;
	
	DISABLE_CHILD_SECTOR("blk_archeologist01Props01x");
	DISABLE_CHILD_SECTOR("ram_missionProps01x");
	DISABLE_CHILD_SECTOR("tes_wall02x");
	DISABLE_CHILD_SECTOR("mp_tes_coop01ax");
	DISABLE_CHILD_SECTOR("mp_tes_coop01bx");
	DISABLE_CHILD_SECTOR("mp_tes_coop01cx");
	DISABLE_CHILD_SECTOR("mp_tes_coop02x");
	DISABLE_CHILD_SECTOR("mp_tes_base01x");
	DISABLE_CHILD_SECTOR("mp_gap_mineLid01x");
	DISABLE_CHILD_SECTOR("mp_fom_coop01x");
	DISABLE_CHILD_SECTOR("mp_fom_burntDebris01x");
	DISABLE_CHILD_SECTOR("mp_wld_base03x");
	DISABLE_CHILD_SECTOR("mp_nos_coop01ax");
	DISABLE_CHILD_SECTOR("mp_nos_coop01bx");
	DISABLE_CHILD_SECTOR("mp_nos_coop01cx");
	DISABLE_CHILD_SECTOR("mp_nos_coop01dx");
	DISABLE_CHILD_SECTOR("mp_nos_coop01ex");
	DISABLE_CHILD_SECTOR("mp_scr_coop01x");
	DISABLE_CHILD_SECTOR("arm_flags01x");
	DISABLE_CHILD_SECTOR("chu_flags01x");
	DISABLE_CHILD_SECTOR("esc_flags01x");
	DISABLE_CHILD_SECTOR("han_flags01x");
	DISABLE_CHILD_SECTOR("hen_flags01x");
	DISABLE_CHILD_SECTOR("mtp_flags01x");
	DISABLE_CHILD_SECTOR("mp_arm_base01x");
	DISABLE_CHILD_SECTOR("mp_cas_base01x");
	DISABLE_CHILD_SECTOR("mp_pik_base01x");
	DISABLE_CHILD_SECTOR("mp_tes_base01x");
	DISABLE_CHILD_SECTOR("mp_tum_base01x");
	DISABLE_CHILD_SECTOR("mp_arm_ffa01x");
	DISABLE_CHILD_SECTOR("mp_chu_ffa01x");
	DISABLE_CHILD_SECTOR("mp_esc_ffa01x");
	DISABLE_CHILD_SECTOR("mp_hen_ffa01x");
	DISABLE_CHILD_SECTOR("mp_lsh_ffa01x");
	DISABLE_CHILD_SECTOR("mp_pik_ffa01x");
	DISABLE_CHILD_SECTOR("mp_upr_ffa01x");
	DISABLE_CHILD_SECTOR("mp_chu_platforms01x");
	DISABLE_CHILD_SECTOR("mp_mtp_base01x");
	DISABLE_CHILD_SECTOR("mp_fom_base01x");
	DISABLE_CHILD_SECTOR("mp_fom_ffa01x");
	DISABLE_CHILD_SECTOR("mp_wld_base01x");
	DISABLE_CHILD_SECTOR("mp_chu_base01x");
	DISABLE_CHILD_SECTOR("hen_barn03props01x");
	DISABLE_CHILD_SECTOR("hen_beamsEntity01x");
	DISABLE_CHILD_SECTOR("sp_outlaw03x");
	DISABLE_CHILD_SECTOR("sp_grave03x");
	DISABLE_CHILD_SECTOR("sp_marshal02x");
	DISABLE_CHILD_SECTOR("sep_graveEva01x");
	ENABLE_CHILD_SECTOR("sep_graveCoverSingle01x");
	DISABLE_CHILD_SECTOR("sp_marshal03x");
	DISABLE_CHILD_SECTOR("sp_marshal04ax");
	DISABLE_CHILD_SECTOR("sp_marshal04bx");
	DISABLE_CHILD_SECTOR("coc_fence01bx");
	ENABLE_CHILD_SECTOR("coc_fence01x");
	ENABLE_CHILD_SECTOR("coc_gates01x");
	DISABLE_CHILD_SECTOR("coc_gates02x");
	DISABLE_CHILD_SECTOR("coc_fence03x");
	ENABLE_CHILD_SECTOR("coc_fence03bx");
	DISABLE_CHILD_SECTOR("fom_corralBreakProps01x");
	DISABLE_CHILD_SECTOR("gap_caveBlockades01x");
	ENABLE_CHILD_SECTOR("blk_saloon_int_Props01x");
	ENABLE_CHILD_SECTOR("blk_saloon_int_01x");
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve361rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve427", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve366rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve404", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve394", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve104", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve454", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdTRAIL_cas_ram_pathdetachedCurve2", 5)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdTRAIL_cas_ram_pathdetachedCurve4detachedCurve2", 5)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve159rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_but_cas_path", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_but_cas_pathdetachedCurve4detachedCurve2", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve80", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve154detachedCurve2", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve155", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve156", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve156detachedCurve2", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve157", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve158", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve159rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve507", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve154detachedCurve2", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve214", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve219", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve220", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve221", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve163", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve164", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve165", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve166", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve168", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve333rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve334rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve329rebuiltCurve1detachedCurve2", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve330rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve331rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve332rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve206rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve207", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve208", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve209rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve210", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve213", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve460", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve337rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve129", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve128rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve324rebuiltCurve1rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve377rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve325rebuiltCurve1rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve325rebuiltCurve1detachedCurve2rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve326rebuiltCurve1rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve129", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve128rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve127", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve126rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve125", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve124", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve123", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve122", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve121", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve120", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve119", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve118rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve117", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve116", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve112", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve130", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve132", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve131", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve121detachedCurve2rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve217rebuiltCurve1rebuiltCurve1detachedCurve2", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve217rebuiltCurve1rebuiltCurve1rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve218rebuiltCurve1detachedCurve2", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_but_mac_path", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_hen_thi_path", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_butterBridge_path", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve617", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_arm_hen_pathdetachedCurve01detachedCurve2", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_arm_hen_pathdetachedCurve01", 18)), 30);
	iVar0 = 0;
	while (iVar0 <= Global_26003)
	{
		Global_26003[iVar0] = !Global_3365;
		switch (iVar0)
		{
			case 0x00000000:
				if (Global_3365)
				{
					DISABLE_WORLD_SECTOR("ramitaBayaAfter");
					ENABLE_WORLD_SECTOR("ramitaBayaBefore");
					ENABLE_CURVE("rsdROAD_frb_road", false);
					ENABLE_CURVE("rsdROAD_fom_frb_road", false);
					ENABLE_CURVE("rsdGPSTRAIL_curve221", false);
				}
				else
				{
					ENABLE_WORLD_SECTOR("ramitaBayaAfter");
					DISABLE_WORLD_SECTOR("ramitaBayaBefore");
					ENABLE_CURVE("rsdROAD_frb_road", true);
					ENABLE_CURVE("rsdROAD_fom_frb_road", true);
					ENABLE_CURVE("rsdGPSTRAIL_curve221", true);
				}
				break;
			
			case 0x00000001:
				if (Global_3365)
				{
					DISABLE_WORLD_SECTOR("butterBridgeB");
					DISABLE_WORLD_SECTOR("butterBridgeD");
					DISABLE_WORLD_SECTOR("butterBridgeC");
					ENABLE_WORLD_SECTOR("butterBridgeA");
					ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", false);
				}
				else
				{
					ENABLE_WORLD_SECTOR("butterBridgeB");
					DISABLE_WORLD_SECTOR("butterBridgeA");
					DISABLE_WORLD_SECTOR("butterBridgeD");
					DISABLE_WORLD_SECTOR("butterBridgeC");
					ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", true);
				}
				break;
			
			case 0x00000002:
				if (Global_3365)
				{
					DISABLE_WORLD_SECTOR("butterBridgeA");
					DISABLE_WORLD_SECTOR("butterBridgeD");
					DISABLE_WORLD_SECTOR("butterBridgeC");
					ENABLE_WORLD_SECTOR("butterBridgeB");
					ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", false);
				}
				else
				{
					ENABLE_WORLD_SECTOR("butterBridgeB");
					DISABLE_WORLD_SECTOR("butterBridgeA");
					DISABLE_WORLD_SECTOR("butterBridgeC");
					DISABLE_WORLD_SECTOR("butterBridgeD");
					ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", true);
				}
				break;
			
			case 0x00000003:
				if (Global_3365)
				{
					DISABLE_WORLD_SECTOR("butterBridgeB");
					DISABLE_WORLD_SECTOR("butterBridgeD");
					DISABLE_WORLD_SECTOR("butterBridgeC");
					ENABLE_WORLD_SECTOR("butterBridgeA");
					ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", false);
				}
				else
				{
					ENABLE_WORLD_SECTOR("butterBridgeB");
					DISABLE_WORLD_SECTOR("butterBridgeA");
					DISABLE_WORLD_SECTOR("butterBridgeC");
					DISABLE_WORLD_SECTOR("butterBridgeD");
					ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", true);
				}
				break;
			
			case 0x00000004:
				if (Global_3365)
				{
					DISABLE_WORLD_SECTOR("tannersSpanAfter");
					ENABLE_WORLD_SECTOR("tannersSpanBefore");
				}
				else
				{
					ENABLE_WORLD_SECTOR("tannersSpanAfter");
					DISABLE_WORLD_SECTOR("tannersSpanBefore");
				}
				break;
			
			case 0x00000005:
				if (Global_3365)
				{
					DISABLE_WORLD_SECTOR("dixonCrossingAfter");
					ENABLE_WORLD_SECTOR("dixonCrossingBefore");
					ENABLE_CURVE("rsdROAD_thi_blk_road", false);
					ENABLE_CURVE("rsdROAD_thi_blk_roaddetachedCurve2", false);
					ENABLE_CURVE("rsdGPSTRAIL_curve124", false);
					ENABLE_CURVE("rsdGPSTRAIL_curve132", false);
				}
				else
				{
					ENABLE_WORLD_SECTOR("dixonCrossingAfter");
					DISABLE_WORLD_SECTOR("dixonCrossingBefore");
					ENABLE_CURVE("rsdROAD_thi_blk_road", true);
					ENABLE_CURVE("rsdROAD_thi_blk_roaddetachedCurve2", true);
					ENABLE_CURVE("rsdGPSTRAIL_curve124", true);
					ENABLE_CURVE("rsdGPSTRAIL_curve132", true);
				}
				break;
			
			case 0x00000006:
				DISABLE_CHILD_SECTOR("hen_barn02x");
				DISABLE_CHILD_SECTOR("hen_barn02props01x");
				ENABLE_CHILD_SECTOR("hen_barn01x");
				ENABLE_CHILD_SECTOR("hen_barn01props01x");
				break;
			
			case 0x00000007:
				break;
			
			case 0x00000008:
				DISABLE_WORLD_SECTOR("campoMiradaAfter");
				ENABLE_WORLD_SECTOR("campoMiradaBefore");
				break;
			
			case 0x00000009:
				if (Global_3365)
				{
					DISABLE_WORLD_SECTOR("fronteraBridgeAfter");
					ENABLE_WORLD_SECTOR("fronteraBridgeBefore");
				}
				else
				{
					ENABLE_WORLD_SECTOR("fronteraBridgeAfter");
					DISABLE_WORLD_SECTOR("fronteraBridgeBefore");
				}
				break;
			
			case 0x0000000A:
				ENABLE_CHILD_SECTOR("fod_gates01x");
				DISABLE_CHILD_SECTOR("fod_gates02x");
				DISABLE_CHILD_SECTOR("fod_gates02Doors01x");
				break;
			
			case 0x0000000B:
				break;
			
			case 0x0000000C:
				if (Global_3365)
				{
					DISABLE_WORLD_SECTOR("masonBridgeAfter");
					ENABLE_WORLD_SECTOR("masonBridgeBefore");
				}
				else
				{
					ENABLE_WORLD_SECTOR("masonBridgeAfter");
					DISABLE_WORLD_SECTOR("masonBridgeBefore");
				}
				break;
			
			case 0x0000000D:
				if (Global_3365)
				{
					DISABLE_CHILD_SECTOR("lmf_troughAfter01x");
					ENABLE_CHILD_SECTOR("lmf_troughBefore01x");
				}
				else
				{
					ENABLE_CHILD_SECTOR("lmf_troughAfter01x");
					DISABLE_CHILD_SECTOR("lmf_troughBefore01x");
				}
				break;
			
			case 0x0000000E:
				DISABLE_WORLD_SECTOR("morningStar");
				DISABLE_CHILD_SECTOR("blk_barge01Props01x");
				DISABLE_CHILD_SECTOR("blk_barge01x");
				DISABLE_CHILD_SECTOR("blk_theatre_int_Props01x");
				DISABLE_CHILD_SECTOR("blk_theatre_int_01x");
				DISABLE_CHILD_SECTOR("blk_bank01_int_Props02x");
				DISABLE_CHILD_SECTOR("blk_bank_int_02x");
				ENABLE_CHILD_SECTOR("blk_bank_int_shade_02x");
				DISABLE_CHILD_SECTOR("blk_cityHall01_int_Props01x");
				DISABLE_CHILD_SECTOR("blk_cityHall_int_01x");
				DISABLE_CHILD_SECTOR("blk_policeStation01_int_props02x");
				DISABLE_CHILD_SECTOR("blk_policeStation_int_02x");
				ENABLE_CHILD_SECTOR("blk_policeStation01_int_props01x");
				ENABLE_CHILD_SECTOR("blk_policeStation_int_01x");
				ENABLE_CHILD_SECTOR("blk_policeStation_int_shades01x");
				DISABLE_CHILD_SECTOR("blk_blacksmith_int_Props01x");
				DISABLE_CHILD_SECTOR("blk_blacksmith_int_01x");
				DISABLE_CHILD_SECTOR("blk_church_int_Props01x");
				DISABLE_CHILD_SECTOR("blk_church_int_01x");
				DISABLE_CHILD_SECTOR("blk_doctorsOffice_int_Props01x");
				DISABLE_CHILD_SECTOR("blk_doctorsOffice_int_01x");
				DISABLE_CHILD_SECTOR("blk_freightstation01_int_Props01x");
				DISABLE_CHILD_SECTOR("blk_freightstation_int_01x");
				DISABLE_CHILD_SECTOR("blk_generalStore_int_Props01x");
				DISABLE_CHILD_SECTOR("blk_generalStore_int_Props02x");
				DISABLE_CHILD_SECTOR("blk_generalStore_int_01x");
				DISABLE_CHILD_SECTOR("blk_tailor01_int_Props01x");
				DISABLE_CHILD_SECTOR("blk_tailor_int_01x");
				DISABLE_CHILD_SECTOR("blk_trainstation_int_Props01x");
				DISABLE_CHILD_SECTOR("blk_trainstation_int_01x");
				DISABLE_CHILD_SECTOR("blk_gunshop_int_Props01x");
				DISABLE_CHILD_SECTOR("blk_gunshop_int_01x");
				DISABLE_CHILD_SECTOR("blk_theatre_int_shade_01x");
				DISABLE_CHILD_SECTOR("blk_generalStore_int_shade_01x");
				DISABLE_CHILD_SECTOR("blk_tailor_int_shade_01x");
				DISABLE_CHILD_SECTOR("blk_doctorsOffice_int_shade_01x");
				DISABLE_CHILD_SECTOR("blk_forgeMill_int_shade_01x");
				DISABLE_CHILD_SECTOR("blk_sawMill_int_shade_01x");
				DISABLE_CHILD_SECTOR("blk_freightstation_int_shade_01x");
				DISABLE_CHILD_SECTOR("blk_blacksmith_int_shade_01x");
				DISABLE_CHILD_SECTOR("blk_cityHall_int_shade_01x");
				DISABLE_CHILD_SECTOR("blk_bank_int_shade_01x");
				DISABLE_CHILD_SECTOR("mor_morningStar_int_shade_01x");
				DISABLE_CHILD_SECTOR("blk_gunshop_int_shade_01x");
				ENABLE_CHILD_SECTOR("blk_saloon_int_Props01x");
				ENABLE_CHILD_SECTOR("blk_saloon_int_01x");
				ENABLE_CHILD_SECTOR("blk_hotel01_int_Props01x");
				ENABLE_CHILD_SECTOR("blk_hotel_int_01x");
				DISABLE_CHILD_SECTOR("blk_hotel_int_shade_01x");
				ENABLE_CHILD_SECTOR("blk_trainstation_int_Props01x");
				ENABLE_CHILD_SECTOR("blk_trainstation_int_01x");
				ENABLE_CHILD_SECTOR("mor_morningStar01_int_Props01x");
				ENABLE_CHILD_SECTOR("mor_morningStar_int_01x");
				DISABLE_CHILD_SECTOR("mor_morningStar_int_shade_01x");
				break;
			
			case 0x0000000F:
				ENABLE_CHILD_SECTOR("rwf_barn01xprops01x");
				DISABLE_CHILD_SECTOR("rwf_barn01xprops02x");
				ENABLE_CHILD_SECTOR("rwf_livingRoom01props01x");
				DISABLE_CHILD_SECTOR("rwf_livingRoom01props02x");
				break;
			
			case 0x00000010:
				DISABLE_CHILD_SECTOR("beh_silo01x");
				ENABLE_CHILD_SECTOR("beh_silo02x");
				break;
			
			case 0x00000011:
				if (Global_3365)
				{
					ENABLE_CHILD_SECTOR("beh_house02x");
					ENABLE_CHILD_SECTOR("beh_house02props01x");
					DISABLE_CHILD_SECTOR("beh_house01x");
					DISABLE_CHILD_SECTOR("beh_house01props01x");
				}
				else
				{
					DISABLE_CHILD_SECTOR("beh_house02x");
					DISABLE_CHILD_SECTOR("beh_house02props01x");
					ENABLE_CHILD_SECTOR("beh_house01x");
					ENABLE_CHILD_SECTOR("beh_house01props01x");
				}
				break;
			
			case 0x00000012:
				DISABLE_CHILD_SECTOR("tor_militaryCamp01x");
				ENABLE_CHILD_SECTOR("tor_militaryCamp02x");
				DISABLE_CHILD_SECTOR("sp_mexArmy03x");
				break;
			
			case 0x00000013:
				DISABLE_CHILD_SECTOR("esc_villaWall05x");
				ENABLE_CHILD_SECTOR("esc_villaWall04x");
				DISABLE_CHILD_SECTOR("sp_rebel05x");
				break;
			
			case 0x00000014:
				DISABLE_CHILD_SECTOR("icarus");
				break;
			
			case 0x00000015:
				DISABLE_CHILD_SECTOR("chu_gatlingBreakables01x");
				DISABLE_CHILD_SECTOR("lsh_gatlingBreakables01x");
				break;
			
			case 0x00000016:
				DISABLE_CHILD_SECTOR("sp_anthro01x");
				break;
			
			case 0x00000017:
				DISABLE_CHILD_SECTOR("beh_grave01x");
				DISABLE_CHILD_SECTOR("beh_grave02x");
				DISABLE_CHILD_SECTOR("beh_grave03x");
				break;
			
			case 0x00000018:
				ENABLE_CURVE("rsdGPSTRAIL_elm_cas_path", !Global_3365);
				ENABLE_CURVE("rsdGPSTRAIL_curve495", !Global_3365);
				ENABLE_CURVE("rsdGPSTRAIL_elm_cas_pathdetachedCurve12", !Global_3365);
				ENABLE_CURVE("rsdGPSTRAIL_elm_cas_pathdetachedCurve13", !Global_3365);
				ENABLE_CURVE("rsdGPSTRAIL_elm_cas_loop1", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve10", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve8", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve6", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_las_nos_pathdetachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve10detachedCurve1", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_curve44", !Global_3365);
				ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve18", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve4detachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdROAD_las_roaddetachedCurve4", !Global_3365);
				ENABLE_CURVE("rsdROAD_las_roaddetachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdROAD_curve69", !Global_3365);
				ENABLE_CURVE("rsdROAD_las_road", !Global_3365);
				ENABLE_CURVE("rsdROAD_frb_road", !Global_3365);
				ENABLE_CURVE("rsdGPSTRAIL_curve98", !Global_3365);
				ENABLE_CURVE("rsdGPSROAD_elm_cas_roaddetachedCurve4detachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdGPSROAD_elm_cas_roaddetachedCurve4", !Global_3365);
				ENABLE_CURVE("rsdGPSTRAIL_elm_loop01_pathdetachedCurve2detachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdGPSTRAIL_curve634", !Global_3365);
				ENABLE_CURVE("rsdGPSTRAIL_curve635", !Global_3365);
				ENABLE_CURVE("rsdGPSTRAIL_curve636", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_curve637", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_curve638", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop04_pathdetachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_curve70", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop04_path", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop05_pathdetachedCurve4", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop05_pathdetachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop01_pathdetachedCurve2detachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve2detachedCurve2detachedCurve2detachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve2detachedCurve2detachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve2detachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve4", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve10", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve8", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop03_path1", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop03_path", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve6", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve4", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop02_path", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop01_path1", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop01_path", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop03_path1detachedCurve4", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop03_pathdetachedCurve4", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop03_pathdetachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop03_path1detachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_chu_loop01_path3detachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_chu_loop01_path3", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop09_path", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop06__path", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop01_path1detachedCurve4", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop01_pathdetachedCurve4", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop01_path1detachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop01_path1detachedCurve6", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop07_pathdetachedCurve2detachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop07_pathdetachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop07_path", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop02_path1", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve4", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop02_path1detachedCurve4", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop02_path1detachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve20detachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve16", !Global_3365);
				ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve12", !Global_3365);
				ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve14", !Global_3365);
				ENABLE_CURVE("rsdGPSTRAIL_curve163", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_curve297", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_curve71", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_curve72", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_ram_path", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop04_pathdetachedCurve2detachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop05_path", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop08_path", !Global_3365);
				ENABLE_CURVE("rsdGPSTRAIL_curve77", !Global_3365);
				ENABLE_CURVE("rsdGPSTRAIL_curve78", !Global_3365);
				ENABLE_CURVE("rsdGPSTRAIL_curve78", !Global_3365);
				ENABLE_CURVE("rsdGPSTRAIL_curve79", !Global_3365);
				ENABLE_CURVE("rsdGPSTRAIL_elm_loop01_pathdetachedCurve2detachedCurve4", !Global_3365);
				ENABLE_CURVE("rsdGPSTRAIL_elm_loop01_pathdetachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdGPSTRAIL_elm_loop01_path", !Global_3365);
				ENABLE_CURVE("rsdGPSTRAIL_elm_loop02_path", !Global_3365);
				ENABLE_CURVE("rsdROAD_elm_cas_roaddetachedCurve8", !Global_3365);
				ENABLE_CURVE("rsdROAD_elm_cas_roaddetachedCurve6", !Global_3365);
				break;
			
			case 0x00000019:
				if (Global_3365)
				{
					ENABLE_CHILD_SECTOR("emt_caveDoor01x");
					DISABLE_CHILD_SECTOR("emt_caveDoor02x");
				}
				break;
			
			case 0x0000001A:
				if (Global_3365)
				{
					ENABLE_CHILD_SECTOR("thi_window01x");
					DISABLE_CHILD_SECTOR("thi_window02x");
				}
				break;
			
			default:
				LOG_ERROR("world state error!");
				break;
		}
		iVar0++;
	}
	if (Global_3365)
	{
		Function_178();
	}
	return;
}

void Function_212() //Position: 0xD86C / 55404
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= Global_25986)
	{
		Global_25986[bVar0] = !Global_3365;
		switch (bVar0)
		{
			case 0x00000000:
				if (IS_ACTOR_VALID(Global_34573))
				{
					if (Global_3365)
					{
					}
					SET_DISABLE_DEADEYE(0, Global_3365);
					SET_DEADEYE_MULTILOCK_ENABLE(0, !Global_3365);
				}
				break;
			
			case 0x00000001:
				if (IS_ACTOR_VALID(Global_34573))
				{
					if (Global_3365)
					{
					}
					SET_DISABLE_DEADEYE(0, Global_3365);
					SET_DEADEYE_MULTILOCK_ENABLE(0, !Global_3365);
				}
				break;
			
			case 0x00000002:
				if (IS_ACTOR_VALID(Global_34573))
				{
					if (Global_3365)
					{
					}
					SET_DISABLE_DEADEYE(0, Global_3365);
					SET_DEADEYE_MULTILOCK_ENABLE(0, !Global_3365);
				}
				break;
			
			case 0x00000003:
			case 0x00000005:
			case 0x00000004:
			case 0x00000006:
			case 0x00000007:
			case 0x00000008:
				break;
			
			case 0x0000000B:
			case 0x00000009:
				if (Global_3421)
				{
					Global_25986[bVar0] = 0;
				}
				break;
			
			case 0x0000000C:
				Function_184(1);
				break;
			
			case 0x0000000A:
				if (Global_3419 || Global_3421)
				{
					Global_25986[bVar0] = 0;
				}
				break;
			
			case 0x0000000D:
				if (Global_3364)
				{
					Global_25986[bVar0] = 0;
				}
				break;
			
			case 0x0000000E:
				if (Global_3364)
				{
					Global_25986[bVar0] = 0;
					SET_WEAPONENUM_LOCKED(14, 0);
				}
				break;
			
			case 0x0000000F:
				if (Global_3364)
				{
					Global_25986[bVar0] = 0;
				}
				break;
			
			default:
				LOG_ERROR("Found a FeatureType that is not enabled for unlocking");
				break;
		}
		bVar0++;
	}
	if (Global_3365)
	{
		Function_180(0);
	}
	return;
}

void Function_213() //Position: 0xDA1E / 55838
{
	int iVar0;
	int iVar1;
	
	if (Global_3365)
	{
		Function_176();
	}
	else if (Global_3421)
	{
		iVar0 = 0;
		while (iVar0 <= Global_25974)
		{
			Global_25974[iVar0] = 0;
			iVar0++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 <= Global_25974)
		{
			Global_25974[iVar1] = 1;
			iVar1++;
		}
	}
	return;
}

void Function_214() //Position: 0xDA71 / 55921
{
	int iVar0;
	
	if (Global_3365)
	{
		Function_177();
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= Global_25970)
		{
			Global_25970[iVar0] = 1;
			iVar0++;
		}
	}
	return;
}

void Function_215() //Position: 0xDA9F / 55967
{
	int iVar0;
	int iVar1;
	
	if (Global_3365)
	{
		Function_175();
	}
	else if (Global_3421)
	{
		iVar0 = 0;
		while (iVar0 <= Global_25965)
		{
			Global_25965[iVar0] = 0;
			iVar0++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 <= Global_25965)
		{
			Global_25965[iVar1] = 1;
			iVar1++;
		}
	}
	return;
}

void Function_216(int iParam0) //Position: 0xDAF2 / 56050
{
	strcpy(iParam0 + 12, "nTUTORIALS", 16);
	*iParam0 = 65168;
	iParam0->f_4 = 56108;
	iParam0->f_8 = 56102;
	iParam0->f_28 = 1;
	return;
}

void Function_217() //Position: 0xDB26 / 56102
{
	return;
}

int Function_218() //Position: 0xDB2C / 56108
{
	return Function_219(0);
}

int Function_219(bool bParam0) //Position: 0xDB36 / 56118
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	struct<8> Var6;
	struct<4> Var14;
	
	if (Function_1())
	{
		return 1;
	}
	if (!IS_OBJECT_VALID(Global_34573))
	{
		return 0;
	}
	fVar0 = 1800.0f;
	if (!bParam0 && !Function_2(8192))
	{
		return 0;
	}
	bVar1 = DECOR_GET_INT(Global_34573, "tutorial");
	bVar2 = DECOR_GET_INT(Global_34573, "ntutorial2");
	bVar3 = DECOR_GET_INT(Global_34573, "ntutorial3");
	bVar4 = DECOR_GET_INT(Global_34573, "ntutorial4");
	if (!Function_161(Global_76849, 4))
	{
		if (Function_227(bVar4, 4))
		{
			Function_226(&Global_76849, 4);
			Function_225(Global_34573, 4, 4);
			if (!bParam0)
			{
				Function_59("tutorial_camp_fast_travel", 30.0f, 1, 0, 2, 1, 0);
				return 0;
			}
		}
	}
	if (!Function_161(Global_76846, 0x4000000) && !(((((((Global_3380 || Global_3394) || Global_3382) || Global_3369) || Global_3367) || Global_63096) || Global_3395) || Global_3396))
	{
		if (Function_227(bVar1, 0x4000000))
		{
			Function_226(&Global_76846, 0x4000000);
			if (!bParam0)
			{
				Function_59("tutorial_rare_horse", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
		}
	}
	if ((Global_3365 && !Function_161(Global_76849, 8)) && !((((Global_3369 || Global_63096) || Global_3384) || Global_3395) || Global_3396))
	{
		if (((GET_ACTOR_HEALTH(Global_34573) > (GET_ACTOR_MAX_HEALTH(Global_34573) * 0,3f) && HAS_ITEM(Function_134(3), Global_34573)) && IS_ACTOR_ALIVE(Global_34573)) && !IS_ACTOR_IN_WATER(Global_34573))
		{
			Function_226(&Global_76849, 8);
			if (!bParam0)
			{
				Function_59("tutorial_first_health", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
		}
	}
	if (!bParam0 && ((((((((((Global_59353 || Global_3380) || Global_3382) || Global_3367) || Global_63096) || Global_3395) || Global_3394) || Global_3384) || Global_3369) || Global_3396) || !IS_ACTOR_ALIVE(Global_34573)))
	{
		return 0;
	}
	if (!bParam0 && ((Function_63() || HUD_IS_FADED()) || HUD_IS_FADING()))
	{
		return 0;
	}
	if (!bParam0 && (Global_26281 + 5.0f) < GET_CURRENT_GAME_TIME())
	{
		return 0;
	}
	if (!bParam0)
	{
		iVar5 = 0;
		while (iVar5 <= Global_3422)
		{
			if (Function_78(&Global_3422[iVar540] + 128, 16))
			{
				if (((Global_6269 != Global_3422[iVar540].f_132 || Global_6269 != Global_3422[iVar540].f_136) || Global_6269 != Global_3422[iVar540].f_140) || Global_6269 != Global_3422[iVar540].f_144)
				{
					if (Global_3422[iVar540].f_124)
					{
						if (IS_BLIP_VALID(Global_3422[iVar540].f_100))
						{
							SET_BLIP_BLINK(Global_3422[iVar540].f_100, 1, 0, 5f);
						}
						Var14 = { StackVal, StackVal, StackVal, Function_224(iVar5) };
						strcpy(&Var6, "comp_intro_", 32);
						stradd(&Var6, UI_GET_STRING(&Var14), 32);
						if (iVar5 == 49)
						{
							Function_58(&Var6, 0x40f00000, 1, 2, 0, 0, 0);
						}
						else
						{
							Function_59(&Var6, 0x41200000, 1, 0, 2, 1, 0);
						}
						Function_223(&Global_3422[iVar540] + 128, 16);
						return 0;
					}
				}
			}
			iVar5++;
		}
	}
	switch (iLocal_19)
	{
		case 0x00000000:
			if (!Function_161(Global_76847, 0x10000000))
			{
				if (Function_227(bVar2, 0x10000000))
				{
					Function_226(&Global_76847, 0x10000000);
					Function_225(Global_34573, 0x10000000, 2);
					if (!bParam0)
					{
						Function_59("tutorial_aggro_ped", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76847, 1))
			{
				if (Function_227(bVar2, 1))
				{
					Function_226(&Global_76847, 1);
					Function_225(Global_34573, 1, 2);
					if (!bParam0)
					{
						Function_59("tutorial_eyewitness_1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76847, 2))
			{
				if (Function_227(bVar2, 2))
				{
					Function_226(&Global_76847, 2);
					Function_225(Global_34573, 2, 2);
					if (!bParam0)
					{
						Function_59("tutorial_eyewitness_2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76847, 4))
			{
				if (Function_227(bVar2, 4))
				{
					Function_226(&Global_76847, 4);
					Function_225(Global_34573, 4, 2);
					if (!bParam0)
					{
						Function_59("tutorial_eyewitness_3", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76847, 4194304))
			{
				if (Function_227(bVar2, 4194304))
				{
					Function_226(&Global_76847, 4194304);
					Function_225(Global_34573, 4194304, 2);
					if (!bParam0)
					{
						Function_59("tutorial_eyewitness_delayed", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76847, 0x2000000))
			{
				if (Function_227(bVar2, 0x2000000))
				{
					Function_226(&Global_76847, 0x2000000);
					Function_225(Global_34573, 0x2000000, 2);
					if (!bParam0)
					{
						Function_59("tutorial_wanted_2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76847, 0x4000000))
			{
				if (Function_161(Global_76847, 0x2000000))
				{
					Function_226(&Global_76847, 0x4000000);
					if (!bParam0)
					{
						Function_59("tutorial_law_lost_awareness", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76847, 0x8000000))
			{
				if (Function_227(bVar2, 0x8000000))
				{
					Function_226(&Global_76847, 0x8000000);
					Function_225(Global_34573, 0x8000000, 2);
					if (!bParam0)
					{
						Function_59("tutorial_rcm_wanted", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (Function_227(bVar2, 32768))
			{
				Function_226(&Global_76847, 32768);
				Function_225(Global_34573, 32768, 2);
				Function_59("tutorial_law_local_spawn", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
			if (Function_227(bVar2, 128))
			{
				if (Function_161(Global_76847, 65536))
				{
					Function_226(&Global_76847, 128);
					Function_225(Global_34573, 128, 2);
					Function_59("tutorial_law_posse_spawn", 0x41200000, 1, 0, 2, 1, 0);
					return 0;
				}
			}
			if (Function_227(bVar2, 256))
			{
				if (Function_161(Global_76847, 131072))
				{
					Function_226(&Global_76847, 256);
					Function_225(Global_34573, 256, 2);
					Function_59("tutorial_law_marshal_spawn", 0x41200000, 1, 0, 2, 1, 0);
					return 0;
				}
			}
			if (Function_227(bVar2, 512))
			{
				if (Function_161(Global_76847, 262144))
				{
					Function_226(&Global_76847, 512);
					Function_225(Global_34573, 512, 2);
					Function_59("tutorial_law_bounty_spawn", 0x41200000, 1, 0, 2, 1, 0);
					return 0;
				}
			}
			if (Function_227(bVar2, 1024))
			{
				if (Function_161(Global_76847, 131072))
				{
					Function_226(&Global_76847, 1024);
					Function_225(Global_34573, 1024, 2);
					Function_59("tutorial_law_army_spawn", 0x41200000, 1, 0, 2, 1, 0);
					return 0;
				}
			}
			if (!Function_161(Global_76847, 64))
			{
				if (Function_227(bVar2, 64))
				{
					Function_226(&Global_76847, 64);
					Function_225(Global_34573, 64, 2);
					if (!bParam0)
					{
						Function_59("tutorial_player_arrested", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76847, 16384))
			{
				if (Function_227(bVar2, 16384))
				{
					Function_226(&Global_76847, 16384);
					Function_225(Global_34573, 16384, 2);
					if (!bParam0)
					{
						Function_59("tutorial_law_captured", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76847, 0x1000000))
			{
				if (Function_227(bVar2, 0x1000000))
				{
					Function_226(&Global_76847, 0x1000000);
					Function_225(Global_34573, 0x1000000, 2);
					if (!bParam0)
					{
						Function_59("tutorial_law_rewanted", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76847, 8))
			{
				if (Global_3403 && Global_26316.f_176)
				{
					Function_226(&Global_76847, 8);
					if (!bParam0)
					{
						Function_59("tutorial_wanted_1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76847, 8388608))
			{
				if (Function_227(bVar2, 8388608))
				{
					Function_226(&Global_76847, 8388608);
					if (!bParam0)
					{
						Function_59("tutorial_law_lost_awareness2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76847, 32))
			{
				if (Function_227(bVar2, 32))
				{
					Function_226(&Global_76847, 32);
					Function_225(Global_34573, 32, 2);
					if (!bParam0)
					{
						Function_59("tutorial_law_near", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76847, 4096))
			{
				if (Function_227(bVar2, 4096))
				{
					Function_226(&Global_76847, 4096);
					Function_225(Global_34573, 4096, 2);
					if (!bParam0)
					{
						Function_59("tutorial_law_losing_track", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76847, 16) && Function_161(Global_76847, 8))
			{
				if (Function_227(bVar2, 16))
				{
					Function_226(&Global_76847, 16);
					Function_225(Global_34573, 16, 2);
					if (!bParam0)
					{
						Function_59("tutorial_civilian_awareness", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76847, 2048))
			{
				if (Function_227(bVar2, 2048))
				{
					Function_226(&Global_76847, 2048);
					Function_225(Global_34573, 2048, 2);
					if (!bParam0)
					{
						Function_59("tutorial_law_difficulty_increase", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76847, 8192))
			{
				if (Function_227(bVar2, 8192))
				{
					Function_226(&Global_76847, 8192);
					Function_225(Global_34573, 8192, 2);
					if (!bParam0)
					{
						return 0;
					}
				}
			}
			break;
		
		case 0x00000001:
			if (!Function_161(Global_76848, 16384))
			{
				if (Function_227(bVar3, 16384))
				{
					Function_226(&Global_76848, 16384);
					Function_225(Global_34573, 16384, 3);
					if (!bParam0)
					{
						Function_59("tutorial_law_bribe", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76848, 32768))
			{
				if (Function_227(bVar3, 32768))
				{
					Function_226(&Global_76848, 32768);
					Function_225(Global_34573, 32768, 3);
					if (!bParam0)
					{
						Function_59("tutorial_law_surrender", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76848, 65536))
			{
				if (Function_227(bVar3, 65536))
				{
					Function_226(&Global_76848, 65536);
					Function_225(Global_34573, 65536, 3);
					if (!bParam0)
					{
						Function_59("tutorial_law_extra_cops1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76848, 131072))
			{
				if (Function_227(bVar3, 131072))
				{
					Function_226(&Global_76848, 131072);
					Function_225(Global_34573, 131072, 3);
					if (!bParam0)
					{
						Function_59("tutorial_law_extra_cops2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76848, 262144))
			{
				if (Function_227(bVar3, 262144))
				{
					Function_226(&Global_76848, 262144);
					Function_225(Global_34573, 262144, 3);
					if (!bParam0)
					{
						Function_59("tutorial_law_less_cops", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (Function_227(bVar2, 524288))
			{
				Function_226(&Global_76847, 524288);
				Function_225(Global_34573, 524288, 2);
				Function_59("tutorial_law_local_end1", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
			if (!Function_161(Global_76847, 1048576))
			{
				if (Function_161(Global_76847, 524288))
				{
					Function_226(&Global_76847, 1048576);
					if (!bParam0)
					{
						return 0;
					}
				}
			}
			if (Function_227(bVar2, 2097152))
			{
				Function_226(&Global_76847, 2097152);
				Function_225(Global_34573, 2097152, 2);
				Function_59("tutorial_law_pursuit_end", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
			if (Function_227(bVar2, 65536))
			{
				Function_226(&Global_76847, 65536);
				Function_225(Global_34573, 65536, 2);
				Function_59("tutorial_law_posse_generated", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
			if (Function_227(bVar2, 131072))
			{
				Function_226(&Global_76847, 131072);
				Function_225(Global_34573, 131072, 2);
				Function_59("tutorial_law_marshal_generated", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
			if (Function_227(bVar2, 262144))
			{
				Function_226(&Global_76847, 262144);
				Function_225(Global_34573, 262144, 2);
				Function_59("tutorial_law_bounty_generated", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
			if (!Function_161(Global_76848, 0x2000000))
			{
				if (Function_227(bVar3, 0x2000000))
				{
					Function_226(&Global_76848, 0x2000000);
					Function_225(Global_34573, 0x2000000, 3);
					Function_59("whistle_GotEvilHorse", 0x41200000, 1, 0, 2, 1, 0);
					return 0;
				}
			}
			break;
		
		case 0x00000002:
			if (Global_3403 || Global_3404)
			{
				break;
			}
			if (!Function_161(Global_76846, 0x20000000))
			{
				if (Function_80(8, 0))
				{
					Function_226(&Global_76846, 0x20000000);
					if (!bParam0)
					{
						Function_59("tutorial_first_camp_M1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76846, 0x4000000))
			{
				if (Function_80(8, 0))
				{
					Function_226(&Global_76846, 0x4000000);
					if (!bParam0)
					{
						Function_59("tutorial_loot", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76848, 0x8000000))
			{
				if (Function_227(bVar3, 0x8000000))
				{
					Function_226(&Global_76848, 0x8000000);
					if (!bParam0)
					{
						Function_59("Old_News_Avail", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76846, 8))
			{
				if (Function_227(bVar1, 8))
				{
					Function_226(&Global_76846, 8);
					if (!bParam0)
					{
						Function_59("tutorial_road_to_armadillo", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76846, 1))
			{
				if (IS_ACTOR_DRIVING_VEHICLE(Global_34573) && !(Function_80(4, 0) || Function_80(10, 0)))
				{
					if (IS_ACTOR_DRAFT_VEHICLE(GET_VEHICLE(Global_34573)))
					{
						Function_226(&Global_76846, 1);
						if (!bParam0)
						{
							Function_59("tutorial_first_drive_coach", 0x41200000, 1, 0, 2, 1, 0);
							return 0;
						}
					}
				}
			}
			if (!Function_161(Global_76846, 64))
			{
				if (Function_227(bVar1, 64))
				{
					Function_226(&Global_76846, 64);
					Function_225(Global_34573, 64, 1);
					if (!bParam0)
					{
						Function_59("tutorial_first_see_coach", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76846, 256))
			{
				if (Function_227(bVar1, 256))
				{
					Function_226(&Global_76846, 256);
					Function_225(Global_34573, 256, 1);
					if (!bParam0)
					{
						Function_59("tutorial_first_passenger_coach", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76846, 128))
			{
				if (Function_227(bVar1, 128))
				{
					Function_222(5.0f);
					Function_226(&Global_76846, 128);
					Function_225(Global_34573, 128, 1);
					if (!bParam0)
					{
						Function_59("tutorial_first_horse_agitated", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76846, 2097152))
			{
				if (Function_227(bVar1, 2097152))
				{
					Function_226(&Global_76846, 2097152);
					Function_225(Global_34573, 2097152, 1);
					if (!bParam0)
					{
						Function_59("tutorial_rcm_1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76846, 4194304))
			{
				if (Function_161(Global_76846, 2097152))
				{
					Function_226(&Global_76846, 4194304);
					Function_225(Global_34573, 4194304, 1);
					if (!bParam0)
					{
						Function_59("tutorial_rcm_2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76846, 8388608))
			{
				if (Function_161(Global_76846, 4194304))
				{
					Function_226(&Global_76846, 8388608);
					Function_225(Global_34573, 8388608, 1);
					if (!bParam0)
					{
						Function_59("tutorial_rcm_3", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76846, 2))
			{
				if (Function_227(bVar1, 2))
				{
					Function_226(&Global_76846, 2);
					Function_225(Global_34573, 2, 1);
					if (!bParam0)
					{
						Function_59("tutorial_first_outfit1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76846, 4))
			{
				if (Function_161(Global_76846, 2))
				{
					Function_226(&Global_76846, 4);
					if (!bParam0)
					{
						Function_59("tutorial_first_outfit2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_84(3))
			{
				if (!Function_161(Global_76846, 512))
				{
					if (Function_227(bVar1, 512))
					{
						Function_226(&Global_76846, 512);
						Function_225(Global_34573, 512, 1);
						if (!bParam0)
						{
							Function_59("tutorial_lost_cards", 0x41200000, 1, 0, 2, 1, 0);
						}
						Function_168(3, 0, 1, 1);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76846, 4096))
			{
				if ((Global_29007 != 2 && !Global_3388) && !Function_126(0, 0, 1, 6))
				{
					Function_226(&Global_76846, 4096);
					if (!bParam0)
					{
						Function_59("tutorial_first_camp", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76846, 8192))
			{
				if (Function_161(Global_76846, 4096))
				{
					Function_226(&Global_76846, 8192);
					if (!bParam0)
					{
						Function_59("tutorial_first_camp2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76846, 1024))
			{
				if (((Global_29007 != 2 && !Global_3388) && !Function_126(0, 0, 1, 1)) && Function_80(4, 0))
				{
					Function_226(&Global_76846, 1024);
					if (!bParam0)
					{
						Function_59("tutorial_first_wilderness1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76846, 2048))
			{
				if (Function_161(Global_76846, 1024))
				{
					Function_226(&Global_76846, 2048);
					if (!bParam0)
					{
						Function_59("tutorial_first_wilderness2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76846, 16))
			{
				if (Function_227(bVar1, 16) && !Global_3380)
				{
					Function_226(&Global_76846, 16);
					Function_225(Global_34573, 16, 1);
					if (!bParam0)
					{
						Function_59("tutorial_first_action_area1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76846, 32))
			{
				if (Function_161(Global_76846, 16))
				{
					Function_226(&Global_76846, 32);
					if (!bParam0)
					{
						Function_59("tutorial_first_action_area2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76846, 32768))
			{
				if (Function_227(bVar1, 32768))
				{
					Function_226(&Global_76846, 32768);
					if (!bParam0)
					{
						Function_59("tutorial_kill_job", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76846, 65536))
			{
				if (Function_227(bVar1, 65536))
				{
					Function_225(Global_34573, 65536, 1);
					if (!bParam0)
					{
						Function_59("tutorial_kill_shop", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76846, 131072))
			{
				if (Function_227(bVar1, 131072))
				{
					Function_226(&Global_76846, 131072);
					if (!bParam0)
					{
						Function_59("tutorial_first_headshot_bonus", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76846, 524288))
			{
				if (Function_227(bVar1, 524288))
				{
					Function_226(&Global_76846, 524288);
					if (!bParam0)
					{
						Function_59("tutorial_first_robbery", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76846, 1048576))
			{
				if (Function_227(bVar1, 1048576))
				{
					Function_226(&Global_76846, 1048576);
					if (!bParam0)
					{
						Function_59("tutorial_first_robbery_denial", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76846, 0x1000000))
			{
				if (Function_227(bVar1, 0x1000000))
				{
					Function_226(&Global_76846, 0x1000000);
					if (!bParam0)
					{
						Function_59("tutorial_second_weapon1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76846, 0x2000000))
			{
				if (Function_161(Global_76846, 0x1000000))
				{
					Function_226(&Global_76846, 0x2000000);
					if (!bParam0)
					{
						Function_59("tutorial_second_weapon2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76848, 4194304))
			{
				if (Function_227(bVar3, 4194304))
				{
					Function_226(&Global_76848, 4194304);
					if (!bParam0)
					{
						Function_59("tutorial_random_char", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76848, 524288))
			{
				if (Function_227(bVar3, 524288))
				{
					Function_226(&Global_76848, 524288);
					if (!bParam0)
					{
						Function_59("tutorial_skinning_1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76848, 1048576))
			{
				if (Function_161(Global_76848, 524288))
				{
					Function_226(&Global_76848, 1048576);
					if (!bParam0)
					{
						Function_59("tutorial_skinning_2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76848, 2097152))
			{
				if (Function_227(bVar3, 2097152))
				{
					Function_226(&Global_76848, 2097152);
					if (!bParam0)
					{
						Function_59("tutorial_skinning_3", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			break;
		
		case 0x00000003:
			if (Global_3403 || Global_3404)
			{
				break;
			}
			if (!Function_161(Global_76846, 262144))
			{
				if (Function_227(bVar1, 262144))
				{
					Function_226(&Global_76846, 262144);
					if (!bParam0)
					{
						Function_59("tutorial_bounty_no_money_first", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76848, 1))
			{
				if (Function_227(bVar3, 1))
				{
					Function_226(&Global_76848, 1);
					Function_225(Global_34573, 1, 3);
					if (!bParam0)
					{
						Function_59("tutorial_first_honor_positive", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76848, 2))
			{
				if (Function_227(bVar3, 2))
				{
					Function_226(&Global_76848, 2);
					Function_225(Global_34573, 2, 3);
					if (!bParam0)
					{
						Function_59("tutorial_first_honor_negative", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76848, 4))
			{
				if (Function_227(bVar3, 4))
				{
					Function_226(&Global_76848, 4);
					Function_225(Global_34573, 4, 3);
					if (!bParam0)
					{
						Function_59("tutorial_first_notoriety_positive", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76848, 8))
			{
				if (Function_221() == 0)
				{
					Function_226(&Global_76848, 8);
					if (!bParam0)
					{
						Function_59("tutorial_very_low_honor", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76848, 16))
			{
				if (Function_221() == 1)
				{
					Function_226(&Global_76848, 16);
					if (!bParam0)
					{
						Function_59("tutorial_low_honor", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76848, 32))
			{
				if (Function_221() == 2)
				{
					Function_226(&Global_76848, 32);
					if (!bParam0)
					{
						Function_59("tutorial_medium_low_honor", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76848, 64))
			{
				if (Function_221() == 4)
				{
					Function_226(&Global_76848, 64);
					if (!bParam0)
					{
						Function_59("tutorial_medium_high_honor", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76848, 128))
			{
				if (Function_221() == 5)
				{
					Function_226(&Global_76848, 128);
					if (!bParam0)
					{
						Function_59("tutorial_high_honor", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76848, 256))
			{
				if (Function_221() == 6)
				{
					Function_226(&Global_76848, 256);
					if (!bParam0)
					{
						Function_59("tutorial_very_high_honor", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76848, 512))
			{
				if (Function_220() == 1)
				{
					Function_226(&Global_76848, 512);
					if (!bParam0)
					{
						Function_59("tutorial_low_notoriety", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76848, 1024))
			{
				if (Function_220() == 2)
				{
					Function_226(&Global_76848, 1024);
					if (!bParam0)
					{
						Function_59("tutorial_medium_low_notoriety", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76848, 2048))
			{
				if (Function_220() == 3)
				{
					Function_226(&Global_76848, 2048);
					if (!bParam0)
					{
						Function_59("tutorial_medium_notoriety", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76848, 4096))
			{
				if (Function_220() == 4)
				{
					Function_226(&Global_76848, 4096);
					if (!bParam0)
					{
						Function_59("tutorial_medium_high_notoriety", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76848, 8192))
			{
				if (Function_220() == 5)
				{
					Function_226(&Global_76848, 8192);
					if (!bParam0)
					{
						Function_59("tutorial_high_notoriety", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76848, 8388608))
			{
				if (Function_227(bVar3, 8388608))
				{
					Function_226(&Global_76848, 8388608);
					Function_225(Global_34573, 8388608, 3);
					if (!bParam0)
					{
						Function_59("tutorial_first_minigame_in_rain", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76848, 0x1000000))
			{
				if (Function_227(bVar3, 0x1000000))
				{
					Function_226(&Global_76848, 0x1000000);
					Function_225(Global_34573, 0x1000000, 3);
					if (!bParam0)
					{
						Function_59("tutorial_first_missed_achievement", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76846, 0x8000000))
			{
				if (Function_227(bVar1, 0x8000000))
				{
					Function_226(&Global_76846, 0x8000000);
					Function_225(Global_34573, 0x8000000, 1);
					if (!bParam0)
					{
						Function_59("tutorial_first_on_donkey", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (Function_227(bVar4, 1) && Function_80(4, 0))
			{
				Function_225(Global_34573, 1, 4);
				if (!bParam0)
				{
					Function_59("tutorial_new_item_in_shops", 0x41200000, 1, 0, 2, 1, 0);
					return 0;
				}
			}
			if (!Function_161(Global_76847, 0x20000000))
			{
				if ((((((HAS_ITEM(Function_134(53), Global_34573) || HAS_ITEM(Function_134(54), Global_34573)) || HAS_ITEM(Function_134(55), Global_34573)) || HAS_ITEM(Function_134(56), Global_34573)) || HAS_ITEM(Function_134(57), Global_34573)) || HAS_ITEM(Function_134(58), Global_34573)) || HAS_ITEM(Function_134(10), Global_34573))
				{
					Function_226(&Global_76847, 0x20000000);
					if (!bParam0)
					{
						Function_59("tutorial_outfit_scrap", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_227(bVar4, 2) && Function_80(4, 0))
			{
				if (Function_161(Global_76849, 2))
				{
					if (GET_CURRENT_GAME_TIME() < Global_12976.f_132)
					{
						if (!bParam0)
						{
							Function_59("tutorial_gunsmith", 0x41200000, 1, 0, 2, 1, 0);
							Global_12976.f_132 = (GET_CURRENT_GAME_TIME() + fVar0);
							return 0;
						}
					}
				}
				if (!Function_161(Global_76849, 2))
				{
					if (!bParam0)
					{
						Function_226(&Global_76849, 2);
						Function_59("tutorial_gunsmith", 0x41200000, 1, 0, 2, 1, 0);
						Global_12976.f_132 = (GET_CURRENT_GAME_TIME() + fVar0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76849, 16))
			{
				if (Function_80(9, 0))
				{
					Function_226(&Global_76849, 16);
					if (!bParam0)
					{
						Function_59("tutorial_place_waypoint", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_161(Global_76849, 32))
			{
				if (Function_227(bVar4, 32))
				{
					Function_226(&Global_76849, 32);
					Function_225(Global_34573, 32, 4);
					if (!bParam0)
					{
						Function_59("tutorial_bait_1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			break;
	}
	iLocal_19++;
	if (iLocal_19 >= 3)
	{
		iLocal_19 = 0;
	}
	return 0;
}

int Function_220() //Position: 0xFD45 / 64837
{
	return Global_12976.f_156;
}

int Function_221() //Position: 0xFD50 / 64848
{
	return Global_12976.f_152;
}

void Function_222(bool bParam0) //Position: 0xFD5B / 64859
{
	if (bParam0 < 0.0f)
	{
		FLASH_SET_FLOAT("testInventory", "staminaBlinking", bParam0);
	}
	else
	{
		LOG_ERROR("RADAR_BLINK_HORSE_STAMINA_BAR: called with a negative or zero duration!");
	}
	return;
}

void Function_223(var uParam0, int iParam1) //Position: 0xFDE0 / 64992
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

struct<16> Function_224(int iParam0) //Position: 0xFDF7 / 65015
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

void Function_225(bool bParam0, int iParam1, int iParam2) //Position: 0xFE1C / 65052
{
	var uVar0;
	struct<4> Var1;
	bool bVar5;
	
	uVar0 = iParam1;
	strcpy(&Var1, "tutorial", 16);
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	Function_157(&Var1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &Var1))
	{
		return;
	}
	bVar5 = DECOR_GET_INT(bParam0, &Var1);
	DECOR_SET_INT(bParam0, &Var1, (bVar5 - (bVar5 && uVar0)));
	return;
}

void Function_226(var uParam0, int iParam1) //Position: 0xFE6B / 65131
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_227(bool bParam0, int iParam1) //Position: 0xFE7A / 65146
{
	var uVar0;
	
	uVar0 = iParam1;
	if ((bParam0 && uVar0) >= 0)
	{
		return 1;
	}
	return 0;
}

void Function_228() //Position: 0xFE90 / 65168
{
	return;
}

void Function_229(int iParam0) //Position: 0xFE96 / 65174
{
	strcpy(iParam0 + 12, "nLAW-PRINT", 16);
	*iParam0 = 66220;
	iParam0->f_4 = 65232;
	iParam0->f_8 = 65226;
	iParam0->f_28 = 1;
	return;
}

void Function_230() //Position: 0xFECA / 65226
{
	return;
}

int Function_231() //Position: 0xFED0 / 65232
{
	Function_232();
	return 0;
}

void Function_232() //Position: 0xFEDA / 65242
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	
	if (Global_27647.f_444 < GET_CURRENT_GAME_TIME())
	{
		return;
	}
	if (!IS_ACTOR_VALID(Global_34573))
	{
		return;
	}
	GET_POSITION(Global_34573, &vVar0);
	iVar6 = 0;
	while (iVar6 <= Global_27647)
	{
		if (Global_27647[iVar622].f_64 < 0.0f)
		{
			if (IS_OBJECT_VALID(Global_27647[iVar622].f_80))
			{
				switch (GET_OBJECT_TYPE(Global_27647[iVar622].f_80))
				{
					case 0x0000000F:
						GET_OBJECT_POSITION(Global_27647[iVar622].f_80, &vVar3);
						if (VDIST(vVar0, vVar3) > Global_27647[iVar622].f_68)
						{
							if (Global_27647[iVar622].f_72)
							{
								if (CAN_ANYONE_OF_FACTION_SEE_OBJECT(GET_ACTOR_FACTION(GET_ACTOR_FROM_OBJECT(Global_27647[iVar622].f_80)), GET_PLAYER_ACTOR(0)))
								{
									Global_27647.f_444 = (GET_CURRENT_GAME_TIME() + Global_27647[iVar622].f_64);
									Function_237(iVar6);
									Function_236(iVar6);
									return;
								}
							}
							Global_27647.f_444 = (GET_CURRENT_GAME_TIME() + Global_27647[iVar622].f_64);
							Function_237(iVar6);
							Function_236(iVar6);
							return;
						}
						break;
					
					case 0x00000019:
						if (Function_234(GET_SQUAD_FROM_OBJECT(Global_27647[iVar622].f_80), GET_PLAYER_ACTOR(0), Global_27647[iVar622].f_68, 1))
						{
							if (Global_27647[iVar622].f_72)
							{
								if (CAN_ANYONE_OF_FACTION_SEE_OBJECT(GET_ACTOR_FACTION(Function_233(GET_SQUAD_FROM_OBJECT(Global_27647[iVar622].f_80))), GET_PLAYER_ACTOR(0)))
								{
									Global_27647.f_444 = (GET_CURRENT_GAME_TIME() + Global_27647[iVar622].f_64);
									Function_237(iVar6);
									Function_236(iVar6);
									return;
								}
							}
							Global_27647.f_444 = (GET_CURRENT_GAME_TIME() + Global_27647[iVar622].f_64);
							Function_237(iVar6);
							Function_236(iVar6);
							return;
						}
						break;
				}
				iVar6++;
			}
			else
			{
				Function_236(iVar6);
			}
		}
		else
		{
			return;
		}
	}
	return;
}

var Function_233(bool bParam0) //Position: 0x10074 / 65652
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

bool Function_234(bool bParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0x100BA / 65722
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		if (Global_3380)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		if (Global_3380)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_ALIVE(bParam1))
	{
		if (Global_3380)
		{
		}
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				if (ACTORS_IN_RANGE(bVar1, bParam1, bParam2))
				{
					if (!Function_235(bVar1, 1) || uParam3)
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

bool Function_235(bool bParam0, int iParam1) //Position: 0x10153 / 65875
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

void Function_236(int iParam0) //Position: 0x1019D / 65949
{
	while (iParam0 <= (Global_27647 - 1))
	{
		Global_27647[iParam022] = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_27647[iParam0 + 122] };
		Global_27647[iParam022].f_64 = Global_27647[iParam0 + 122].f_64;
		Global_27647[iParam022].f_84 = Global_27647[iParam0 + 122].f_84;
		Global_27647[iParam022].f_68 = Global_27647[iParam0 + 122].f_68;
		Global_27647[iParam022].f_72 = Global_27647[iParam0 + 122].f_72;
		Global_27647[iParam022].f_80 = Global_27647[iParam0 + 122].f_80;
		Global_27647[iParam022].f_76 = Global_27647[iParam0 + 122].f_76;
		iParam0++;
	}
	Global_27647[(Global_27647 - 1)22].f_64 = 0.0f;
	return;
}

void Function_237(int iParam0) //Position: 0x10251 / 66129
{
	struct<16> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_27647[iParam022] };
	switch (Global_27647[iParam022].f_84)
	{
		case 0x00000000:
			stradd(&Var0, "_en", 64);
			break;
		
		case 0x00000001:
			stradd(&Var0, "_sp", 64);
			break;
	}
	Function_60(&Var0, Global_27647[iParam022].f_64, 0, 2, 1, 0);
	return;
}

void Function_238() //Position: 0x102AC / 66220
{
	return;
}

void Function_239(int iParam0) //Position: 0x102B2 / 66226
{
	strcpy(iParam0 + 12, "AMBIENT-CHALL", 16);
	*iParam0 = 115085;
	iParam0->f_4 = 66371;
	iParam0->f_8 = 66282;
	iParam0->f_28 = 1;
	return;
}

void Function_240() //Position: 0x102EA / 66282
{
	RELEASE_LAYOUT_REF(Function_241());
	return;
}

var Function_241() //Position: 0x102F6 / 66294
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return bVar0;
}

int Function_242() //Position: 0x10343 / 66371
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	bool bVar3;
	var uVar4;
	int iVar5;
	char* cVar6;
	int iVar7;
	
	bVar0 = false;
	bVar1 = Function_9(Global_79349.f_44, 16384);
	uVar2 = Function_403();
	bVar3 = (Function_1() || Global_34165.f_44);
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (IS_ACTOR_ON_TRAIN(Global_34573, 1) && !Global_3380)
		{
			uVar4 = NET_MAILBOX_GET_CHALLENGE_BY_ID("sc_challenge_aa_09");
			if (Function_401(uVar4))
			{
				iVar5 = Function_400(&uVar4);
				if (iVar5 >= 4294967295)
				{
					if (!Global_84611[iVar5140].f_64)
					{
						SC_CHALLENGE_LAUNCH(uVar4);
						Global_84611[iVar5140].f_64 = 1;
					}
				}
			}
		}
		else
		{
			cVar6 = NET_MAILBOX_GET_CHALLENGE_BY_ID("sc_challenge_aa_09");
			iVar7 = Function_400(&cVar6);
			if (iVar7 >= 4294967295)
			{
				if (Function_401(cVar6) && Global_84611[iVar7140].f_64)
				{
					Global_84611[iVar7140].f_64 = 0;
				}
			}
		}
	}
	if (bVar3)
	{
		while (bVar0 >= 24 && !Global_83864.f_1276)
		{
			if (!Function_308(&Global_49399, bVar0, bVar1, uVar2))
			{
				PRINTSTRING("AMBIENT_MISSIONS_UPDATE: WARNING - failed to update mission of index: ");
				PRINTINT(bVar0);
				PRINTNL();
			}
			bVar0++;
		}
	}
	else if (!Global_3381)
	{
		while (bVar0 <= Global_49310)
		{
			if (!Function_245(&Global_49310, bVar0))
			{
				PRINTSTRING("AMBIENT_MISSIONS_UPDATE: WARNING - failed to update mission of index: ");
				PRINTINT(bVar0);
				PRINTNL();
			}
			bVar0++;
		}
	}
	Function_243();
	return 0;
}

void Function_243() //Position: 0x1051A / 66842
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = Function_241();
	bVar1 = Function_244();
	if (IS_LAYOUTREF_VALID(bVar0))
	{
		if (GET_NUM_ITERATOR_MATCHES(bVar1) >= 0)
		{
			bVar2 = START_OBJECT_ITERATOR(bVar1);
			while (IS_OBJECT_VALID(bVar2))
			{
				if (DECOR_CHECK_EXIST(bVar2, "AM_NO_PURGE"))
				{
					if (DECOR_GET_INT(bVar2, "AM_NO_PURGE") < 0)
					{
						DESTROY_OBJECT(bVar2);
					}
				}
				else
				{
					DESTROY_OBJECT(bVar2);
				}
				bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
			}
		}
	}
	return;
}

var Function_244() //Position: 0x1058E / 66958
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = Function_241();
	bVar1 = GET_ITERATOR_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bVar0, "AmbientMissions_Iterator"));
	if (!IS_ITERATOR_VALID(bVar1))
	{
		bVar1 = CREATE_NAMED_OBJECT_ITERATOR(bVar0, "AmbientMissions_Iterator");
	}
	return bVar1;
}

bool Function_245(var uParam0, int iParam1) //Position: 0x105EB / 67051
{
	var uVar0;
	
	if (iParam1 <= *uParam0 || iParam1 > 0)
	{
		return 0;
	}
	if (StackVal == 3)
	{
		return 1;
	}
	uVar0 = Function_307((*uParam0)[iParam122]);
	switch ((*uParam0)[iParam122])
	{
		case 0x00000000:
			Function_299(uParam0[022] + 4, uParam0[022] + 8, uParam0[022] + 12, &uVar0);
			break;
		
		case 0x00000001:
			Function_291(uParam0[122] + 4, uParam0[122] + 8, uParam0[122] + 12, &uVar0);
			break;
		
		case 0x00000002:
			Function_283(uParam0[222] + 4, uParam0[222] + 8, uParam0[222] + 12, &uVar0);
			break;
		
		case 0x00000003:
			Function_246(uParam0[322] + 4, uParam0[322] + 8, uParam0[322] + 12, &uVar0);
			break;
	}
	return 1;
}

void Function_246(var uParam0, var uParam1, var uParam2, int iParam3) //Position: 0x106B2 / 67250
{
	switch (*uParam1)
	{
		case 0x00000000:
			switch (*uParam0)
			{
				case 0x00000000:
					*iParam3 = *iParam3;
					*uParam2 = *uParam2;
					if (GET_ITEM_COUNT(SS_GET_STRING(1, 11), Global_34573) >= 0)
					{
						Function_279(3, 1);
						*uParam0 = 2;
					}
					break;
				
				case 0x00000002:
					if (Global_3375 && !Global_63096)
					{
						Function_59("AM_TH_HLP_1", 0x41200000, 1, 0, 2, 1, 0);
						Function_59("AM_TH_HLP_2", 0x41200000, 1, 0, 2, 1, 0);
						Function_278(3, 1);
						Function_265(20, 1, 0);
						Function_264(3, 4);
						*uParam1 = 1;
						*uParam0 = 0;
						*uParam2 = 0.0f;
						Function_259();
					}
					break;
			}
			break;
		
		case 0x00000001:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(3);
					Function_254(3, 0);
					PREPEND_JOURNAL_ENTRY_DETAIL(Function_253(3), "AM_INTRO_HLP", 0, 2, true);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(3), -1.0f, true, 0);
					*iParam3 = *iParam3;
					*uParam2 = *uParam2;
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					if (Function_110(357) < 0.0f)
					{
						Function_279(3, 2);
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = 0.0f;
					}
					break;
				
				case 0x00000002:
					Function_278(3, 1);
					Function_265(20, 1, 0);
					Function_264(3, 4);
					*uParam1 = 2;
					*uParam0 = 0;
					*uParam2 = 0.0f;
					Function_259();
					break;
			}
			break;
		
		case 0x00000002:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(3);
					Function_254(3, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(3), -1.0f, true, 0);
					*iParam3 = *iParam3;
					*uParam2 = *uParam2;
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					if (Function_110(357) < 1.0f)
					{
						Function_279(3, 3);
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = 0.0f;
					}
					break;
				
				case 0x00000002:
					Function_278(3, 1);
					Function_265(20, 1, 0);
					Function_264(3, 4);
					*uParam1 = 3;
					*uParam0 = 0;
					*uParam2 = 0.0f;
					Function_259();
					break;
			}
			break;
		
		case 0x00000003:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(3);
					Function_254(3, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(3), -1.0f, true, 0);
					*iParam3 = *iParam3;
					*uParam2 = *uParam2;
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					if (Function_110(357) < 2.0f)
					{
						Function_279(3, 4);
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = 0.0f;
					}
					break;
				
				case 0x00000002:
					Function_278(3, 1);
					Function_265(20, 1, 0);
					Function_264(3, 4);
					*uParam1 = 4;
					*uParam0 = 0;
					*uParam2 = 0.0f;
					Function_259();
					break;
			}
			break;
		
		case 0x00000004:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(3);
					Function_254(3, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(3), -1.0f, true, 0);
					*iParam3 = *iParam3;
					*uParam2 = *uParam2;
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					if (Function_110(357) < 3.0f)
					{
						Function_279(3, 5);
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = 0.0f;
					}
					break;
				
				case 0x00000002:
					if (Global_3375 && !Global_63096)
					{
						Function_278(3, 1);
						Function_265(20, 1, 0);
						Function_59("AM_TH_RW1_help", 0x41200000, 1, 0, 2, 1, 0);
						if (!Function_85(11))
						{
							Function_168(11, 0, 1, 1);
						}
						Function_264(3, 4);
						*uParam1 = 5;
						*uParam0 = 0;
						*uParam2 = 0.0f;
						Function_259();
					}
					break;
			}
			break;
		
		case 0x00000005:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(3);
					Function_254(3, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(3), -1.0f, true, 0);
					*iParam3 = *iParam3;
					*uParam2 = *uParam2;
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					if (Function_110(357) < 4.0f)
					{
						Function_279(3, 6);
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = 0.0f;
					}
					break;
				
				case 0x00000002:
					Function_278(3, 1);
					Function_265(20, 1, 0);
					Function_264(3, 4);
					*uParam1 = 6;
					*uParam0 = 0;
					*uParam2 = 0.0f;
					Function_259();
					break;
			}
			break;
		
		case 0x00000006:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(3);
					Function_254(3, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(3), -1.0f, true, 0);
					*iParam3 = *iParam3;
					*uParam2 = *uParam2;
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					if (Function_110(357) < 5.0f)
					{
						Function_279(3, 7);
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = 0.0f;
					}
					break;
				
				case 0x00000002:
					Function_278(3, 1);
					Function_265(20, 1, 0);
					Function_264(3, 4);
					*uParam1 = 7;
					*uParam0 = 0;
					*uParam2 = 0.0f;
					Function_259();
					break;
			}
			break;
		
		case 0x00000007:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(3);
					Function_254(3, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(3), -1.0f, true, 0);
					*iParam3 = *iParam3;
					*uParam2 = *uParam2;
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					if (Function_110(357) < 6.0f)
					{
						Function_279(3, 8);
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = 0.0f;
					}
					break;
				
				case 0x00000002:
					Function_278(3, 1);
					Function_265(20, 1, 0);
					Function_264(3, 4);
					*uParam1 = 8;
					*uParam0 = 0;
					*uParam2 = 0.0f;
					Function_259();
					break;
			}
			break;
		
		case 0x00000008:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(3);
					Function_254(3, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(3), -1.0f, true, 0);
					*iParam3 = *iParam3;
					*uParam2 = *uParam2;
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					if (Function_110(357) < 7.0f)
					{
						Function_279(3, 9);
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = 0.0f;
					}
					break;
				
				case 0x00000002:
					Function_278(3, 1);
					Function_265(20, 1, 0);
					Function_264(3, 4);
					*uParam1 = 9;
					*uParam0 = 0;
					*uParam2 = 0.0f;
					Function_259();
					break;
			}
			break;
		
		case 0x00000009:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(3);
					Function_254(3, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(3), -1.0f, true, 0);
					*iParam3 = *iParam3;
					*uParam2 = *uParam2;
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					if (Function_110(357) < 8.0f)
					{
						Function_279(3, 10);
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = 0.0f;
					}
					break;
				
				case 0x00000002:
					if (Global_3375 && !Global_63096)
					{
						Function_278(3, 1);
						Function_59("AM_TH_RW2_help", 0x41200000, 1, 0, 2, 1, 0);
						Function_59("AM_TH_10_des", 0x41200000, 1, 0, 2, 1, 0);
						Function_265(50, 1, 0);
						if (!HAS_ACHIEVEMENT_BEEN_PASSED(25))
						{
							AWARD_ACHIEVEMENT(25);
						}
						*uParam1 = 10;
						*uParam0 = 2;
						*uParam2 = 1.0f;
						SET_JOURNAL_ENTRY_PROGRESS(Function_253(3), 1.0f, true, 0);
						Function_249(3);
						Function_202(68, 1, 0);
						Function_248(11, 0);
						Function_247();
						Function_259();
					}
					break;
			}
			break;
	}
}

void Function_247() //Position: 0x10D1B / 68891
{
	int iVar0;
	var uVar1;
	
	iVar0 = 1;
	if (Function_183(3) == 10)
	{
		iVar0 = 2;
	}
	uVar1 = Function_134(3);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_134(6);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_134(0);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_134(1);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_134(8);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_134(4);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_134(12);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_134(5);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_134(2);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_134(30);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_134(31);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_134(32);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_134(33);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_134(34);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_134(35);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_134(36);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_134(37);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_134(38);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_134(39);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_134(40);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_134(41);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_134(42);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_134(43);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_134(44);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_134(45);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_134(46);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_134(47);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_134(48);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_134(49);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_134(50);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_134(51);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_134(7);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_134(9);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	return;
}

int Function_248(bool bParam0, bool bParam1) //Position: 0x10F38 / 69432
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (bParam1)
	{
		if (GET_ITEM_COUNT(Function_134(bParam0), Function_29()) >= 0)
		{
			DELETE_ITEM(Function_134(bParam0), Function_29(), 0);
			return 1;
		}
	}
	DELETE_ITEM(Function_134(bParam0), Function_29(), 1);
	return 1;
}

void Function_249(bool bParam0) //Position: 0x10F7F / 69503
{
	struct<6> Var0;
	struct<6> Var6;
	
	CLEAR_JOURNAL_ENTRY(Function_253(bParam0));
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_252(bParam0) };
	if (Function_1() || Global_34165.f_44)
	{
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_251(bParam0) };
	}
	else
	{
		memcpy(&Var6, StackVal, *(&Global_49310[bParam022] + 16), 6);
	}
	UI_SET_STRING(&Var0, UI_GET_STRING(&Var6));
	Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_250(bParam0) };
	APPEND_JOURNAL_ENTRY_DETAIL(Function_253(bParam0), &Var6, 0, 2, false);
	PREPEND_JOURNAL_ENTRY(Function_253(bParam0), true);
	SET_JOURNAL_ENTRY_PROGRESS(Function_253(bParam0), 1.0f, false, 0);
	return;
}

struct<24> Function_250(int iParam0) //Position: 0x10FF2 / 69618
{
	char* cVar0[24];
	
	cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_251(iParam0) };
	if (Global_34165.f_44 || Function_1())
	{
		stradd(&cVar0, "_mp_des", 24);
		if (!IS_STRING_VALID(UI_GET_STRING(&cVar0)))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_251(iParam0) };
			stradd(&cVar0, "_des", 24);
		}
	}
	else
	{
		stradd(&cVar0, "_des", 24);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_251(bool bParam0) //Position: 0x1104F / 69711
{
	char* cVar0[24];
	
	if (Function_1() || Global_34165.f_44)
	{
		memcpy(&cVar0, StackVal, *(&Global_49399[bParam022] + 16), 6);
		stradd(&cVar0, "_", 24);
		stradd(&cVar0, INT_TO_STRING(StackVal), 24);
		return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	memcpy(&cVar0, StackVal, *(&Global_49310[bParam022] + 16), 6);
	stradd(&cVar0, "_", 24);
	stradd(&cVar0, INT_TO_STRING(StackVal), 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_252(int iParam0) //Position: 0x110C1 / 69825
{
	char* cVar0[24];
	
	if (Function_1() || Global_34165.f_44)
	{
		memcpy(&cVar0, StackVal, *(&Global_49399[iParam022] + 16), 6);
		stradd(&cVar0, "_DYNAMIC_TITLE", 24);
		return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	memcpy(&cVar0, StackVal, *(&Global_49310[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_253(bool bParam0) //Position: 0x1112D / 69933
{
	if (Function_1() || Global_34165.f_44)
	{
		return Global_49399[bParam022].f_24;
	}
	return Global_49310[bParam022].f_24;
}

void Function_254(bool bParam0, bool bParam1) //Position: 0x11155 / 69973
{
	struct<6> Var0;
	struct<6> Var6;
	
	CLEAR_JOURNAL_ENTRY(Function_253(bParam0));
	if ((bParam1 && Function_256(bParam0, 4)) || !bParam1)
	{
		PREPEND_JOURNAL_ENTRY(Function_253(bParam0), false);
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_252(bParam0) };
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_251(bParam0) };
		UI_SET_STRING(&Var0, UI_GET_STRING(&Var6));
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_250(bParam0) };
		PREPEND_JOURNAL_ENTRY_DETAIL(Function_253(bParam0), &Var6, 0, 2, Function_256(bParam0, 4));
		if (bParam0 == 3)
		{
			PREPEND_JOURNAL_ENTRY_DETAIL(Function_253(bParam0), "nAM_MAPHLP", 0, 2, true);
		}
		if (!bParam1)
		{
			Function_255(bParam0, 4);
		}
	}
	return;
}

void Function_255(int iParam0, int iParam1) //Position: 0x111DC / 70108
{
	if (Function_1() || Global_34165.f_44)
	{
		Function_123(&Global_49399[iParam022] + 32, iParam1);
	}
	else
	{
		Function_123(&Global_49310[iParam022] + 32, iParam1);
	}
	return;
}

bool Function_256(int iParam0, bool bParam1) //Position: 0x1120D / 70157
{
	if (Function_1() || Global_34165.f_44)
	{
		return Function_9(Global_49399[iParam022].f_32, bParam1);
	}
	return Function_9(Global_49310[iParam022].f_32, bParam1);
}

void Function_257(bool bParam0) //Position: 0x1123F / 70207
{
	if (Function_1() || Global_34165.f_44)
	{
		Function_258(bParam0, 0, Global_49399[bParam022].f_28);
	}
	else
	{
		Function_258(bParam0, 0, Global_49310[bParam022].f_28);
	}
	return;
}

int Function_258(bool bParam0, bool bParam1, bool bParam2) //Position: 0x11274 / 70260
{
	char* cVar0[16];
	bool bVar4;
	
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_INTSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar4 = Function_241();
	if (IS_LAYOUTREF_VALID(bVar4))
	{
		return DECOR_SET_INT(bVar4, &cVar0, bParam2);
	}
	LOG_ERROR("AM_STORE_INT: failed to store int value in slot");
	return 0;
}

void Function_259() //Position: 0x112E8 / 70376
{
	if (!Function_1())
	{
		if (!Function_126(0, 0, 1, 1))
		{
			Function_91(1);
			Function_90(1, 8);
		}
		else
		{
			Function_89();
		}
	}
	else
	{
		Function_260(0);
	}
	return;
}

void Function_260(bool bParam0) //Position: 0x11317 / 70423
{
	NET_LOG(true, "SaveLoad", "Multiplayer Save Triggered, will be picked up by Multiplayer_update_thread soon enough", 0, 0, false, 0);
	Function_263(2);
	if (bParam0)
	{
		Function_263(1);
	}
	else
	{
		Function_261(1);
	}
	Function_93();
	return;
}

void Function_261(int iParam0) //Position: 0x113A0 / 70560
{
	Function_262(&Global_79338, iParam0);
	return;
}

void Function_262(int iParam0, int iParam1) //Position: 0x113AF / 70575
{
	Function_92(iParam0, iParam1);
	return;
}

void Function_263(int iParam0) //Position: 0x113BC / 70588
{
	Function_200(&Global_79338, iParam0);
	return;
}

void Function_264(bool bParam0, int iParam1) //Position: 0x113CB / 70603
{
	if (Global_34165.f_44)
	{
		Function_92(&Global_49399[bParam022] + 32, iParam1);
	}
	else
	{
		Function_92(&Global_49310[bParam022] + 32, iParam1);
	}
	return;
}

void Function_265(int iParam0, bool bParam1, bool bParam2) //Position: 0x113F8 / 70648
{
	int iVar0;
	bool bVar1;
	
	if (Function_135(0) && (!Global_3380 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Global_3380)
	{
		Global_12976.f_164 = (Global_12976.f_164 + iParam0);
		return;
	}
	if (bVar1 == 0)
	{
		return;
	}
	iVar0 = Function_114(3);
	Function_276();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_274(3, bVar1);
		if (!bParam2)
		{
			if (!Function_161(Global_76848, 4))
			{
				Function_156(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_127(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_110(3));
	iVar0 = Function_114(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_267(4, Function_273(Global_12976.f_156), 1);
				Function_266(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_267(4, Function_273(Global_12976.f_156), 1);
				Function_266(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_267(4, Function_273(Global_12976.f_156), 1);
				Function_266(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_267(4, Function_273(Global_12976.f_156), 1);
				Function_266(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_267(4, Function_273(Global_12976.f_156), 1);
				Function_266(Global_12976.f_152, Global_12976.f_156);
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

void Function_266(int iParam0, int iParam1) //Position: 0x115BB / 71099
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,2f);
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
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,3f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000003:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,4f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000004:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 120.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,5f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, true);
			break;
		
		case 0x00000005:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 180.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,8f);
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
			SET_ACTOR_SHOULD_TAUNT(Global_34573, 1);
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
			SET_ACTOR_SHOULD_TAUNT(Global_34573, 0);
			break;
		
		default:
			break;
	}
	return;
}

int Function_267(int iParam0, char* cParam1, bool bParam2) //Position: 0x11819 / 71705
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
	Function_271(iParam0, cParam1, 0, 1);
	iVar1 = Function_268();
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

int Function_268() //Position: 0x1199E / 72094
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
	Function_269();
	return 0;
}

void Function_269() //Position: 0x11A3D / 72253
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
		Function_270(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_270(int iParam0) //Position: 0x11AEC / 72428
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

int Function_271(int iParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0x11B4A / 72522
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
		Function_272(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, uParam3);
	}
	return 1;
}

void Function_272(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x11E9C / 73372
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

var Function_273(int iParam0) //Position: 0x11F1F / 73503
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

int Function_274(int iParam0, bool bParam1) //Position: 0x11FAE / 73646
{
	bool bVar0;
	int iVar1;
	
	Function_127(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_275(iParam0, 4294967295);
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
	iVar1 = Function_268();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

var Function_275(int iParam0, int iParam1) //Position: 0x1214B / 74059
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

void Function_276() //Position: 0x1218C / 74124
{
	Function_277(3, 0.0f);
	Function_186(3, 10000.0f);
	return;
}

int Function_277(int iParam0, int iParam1) //Position: 0x121A2 / 74146
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

void Function_278(bool bParam0, bool bParam1) //Position: 0x121E2 / 74210
{
	bool bVar0;
	bool bVar1;
	char* cVar2[16];
	
	bVar0 = false;
	bVar1 = Function_241();
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
			if (Function_1() || Global_34165.f_44)
			{
				(*&Global_49399[bParam022] + 36)[bVar0] = 0.0f;
			}
			else
			{
				(*&Global_49310[bParam022] + 36)[bVar0] = 0.0f;
			}
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
		bVar0 = false;
		while (bVar0 <= 11)
		{
			if (Function_1() || Global_34165.f_44)
			{
				(*&Global_49399[bParam022] + 36)[bVar0] = 0.0f;
			}
			else
			{
				(*&Global_49310[bParam022] + 36)[bVar0] = 0.0f;
			}
			bVar0++;
		}
	}
	if (bParam1)
	{
		if (Function_1() || Global_34165.f_44)
		{
			Global_49399[bParam022].f_28 = 0;
		}
		else
		{
			Global_49310[bParam022].f_28 = 0;
		}
	}
	return;
}

int Function_279(int iParam0, int iParam1) //Position: 0x123A2 / 74658
{
	int iVar0;
	
	if (Function_1() || Global_34165.f_44)
	{
		if (iParam0 >= Global_49399)
		{
			LOG_ERROR("AM_GUI_SEND_UPDATE_MESSAGE: invalid MissionId");
			return 0;
		}
	}
	if (iParam0 >= Global_49310)
	{
		LOG_ERROR("AM_GUI_SEND_UPDATE_MESSAGE: invalid MissionId");
		return 0;
	}
	iVar0 = Function_280();
	Global_63000[iVar08] = iParam0;
	Global_63000[iVar08].f_4 = iParam1;
	Global_63082 = Function_1();
	return 1;
}

int Function_280() //Position: 0x12451 / 74833
{
	int iVar0;
	
	iVar0 = (Global_63000 - 1);
	while (iVar0 >= 0)
	{
		if (Global_63000[iVar08] == 4294967295)
		{
			return iVar0;
		}
		iVar0 = (iVar0 - 1);
	}
	Function_281();
	return 0;
}

void Function_281() //Position: 0x1247F / 74879
{
	int iVar0;
	int iVar1;
	
	iVar0 = (Global_63000 - 1);
	iVar1 = (iVar0 - 1);
	while (iVar1 >= 0)
	{
		Global_63000[iVar08] = Global_63000[iVar18];
		Global_63000[iVar08].f_4 = StackVal;
		*(&Global_63000[iVar08] + 8) = { StackVal, StackVal, StackVal, *(&Global_63000[iVar18] + 8) };
		*(&Global_63000[iVar08] + 24) = { StackVal, *(&Global_63000[iVar18] + 24) };
		Function_282(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_282(int iParam0) //Position: 0x124F6 / 74998
{
	Global_63000[iParam08] = 4294967295;
	Global_63000[iParam08].f_4 = 4294967295;
	strcpy(&Global_63000[iParam08] + 8, "NHIL", 16);
	strcpy(&Global_63000[iParam08] + 24, "NHIL", 8);
	return;
}

void Function_283(var uParam0, var uParam1, var uParam2, int iParam3) //Position: 0x12532 / 75058
{
	bool bVar0;
	float fVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	bool bVar6;
	char* cVar7[16];
	char* cVar11[16];
	char* cVar15[16];
	char* cVar19[16];
	
	switch (*uParam1)
	{
		case 0x00000000:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(2);
					Function_290(&Global_62998);
					Function_289(&Global_62998, 1023);
					if (!Function_256(2, 1))
					{
						Function_288(2, 1, Function_110(272), 1);
						Function_255(2, 1);
					}
					if (Function_256(2, 4))
					{
						PREPEND_JOURNAL_ENTRY_DETAIL(Function_253(2), "AM_INTRO_HLP", 0, 2, true);
					}
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar4 = Function_287(2);
					bVar0 = (Function_110(272) - Function_286(2, 1, 1));
					if (bVar0 <= 6.0f)
					{
						Function_279(2, 1);
						*uParam0 = 2;
					}
					else
					{
						if (bVar0 < 0.0f)
						{
							if ((!Function_256(2, 2) && Global_3375) && !Global_63096)
							{
								Function_255(2, 2);
								Function_59("AM_SU_HLP_1", 0x41200000, 1, 0, 2, 1, 0);
								Function_59("AM_SU_HLP_2", 0x41200000, 1, 0, 2, 1, 0);
							}
							if (!Function_256(2, 4))
							{
								Function_254(2, 0);
								PREPEND_JOURNAL_ENTRY_DETAIL(Function_253(2), "AM_INTRO_HLP", 0, 2, false);
							}
						}
						*uParam2 = (bVar0 / 6.0f);
						if (*uParam2 == fVar4)
						{
							Function_285(2, *uParam2, 1, ROUND(bVar0), 4294967295, 4294967295, 0);
						}
					}
					break;
				
				case 0x00000002:
					if (Global_3375 && !Global_63096)
					{
						Function_59("AM_SU_HLP_3", 0x41200000, 1, 0, 2, 1, 0);
						Function_59("AM_SU_HLP_2", 0x41200000, 1, 0, 2, 1, 0);
						Function_284(iParam3);
						Function_278(2, 1);
						Function_264(2, 1);
						Function_265(20, 1, 0);
						Function_264(2, 4);
						*uParam1 = 1;
						*uParam0 = 0;
						*uParam2 = 0.0f;
						Function_259();
					}
					break;
			}
			break;
		
		case 0x00000001:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(2);
					Function_254(2, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(2), 0.0f, true, 0);
					if (!Function_256(2, 1))
					{
						Function_288(2, 1, Function_110(264), 1);
						Function_255(2, 1);
					}
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar4 = Function_287(2);
					bVar0 = (Function_110(264) - Function_286(2, 1, 1));
					if (bVar0 <= 6.0f)
					{
						Function_279(2, 2);
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = (bVar0 / 6.0f);
						if (*uParam2 == fVar4)
						{
							Function_285(2, *uParam2, 1, ROUND(bVar0), 4294967295, 4294967295, 0);
						}
					}
					break;
				
				case 0x00000002:
					Function_284(iParam3);
					Function_278(2, 1);
					Function_264(2, 1);
					Function_265(20, 1, 0);
					*uParam1 = 2;
					Function_264(2, 4);
					*uParam0 = 0;
					*uParam2 = 0.0f;
					Function_259();
					break;
			}
			break;
		
		case 0x00000002:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(2);
					Function_254(2, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(2), 0.0f, true, 0);
					if (!Function_256(2, 1))
					{
						Function_288(2, 1, Function_110(271), 1);
						Function_255(2, 1);
					}
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar4 = Function_287(2);
					bVar0 = (Function_110(271) - Function_286(2, 1, 1));
					if (bVar0 <= 4.0f)
					{
						Function_279(2, 3);
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = (bVar0 / 4.0f);
						if (*uParam2 == fVar4)
						{
							Function_285(2, *uParam2, 1, ROUND(bVar0), 4294967295, 4294967295, 0);
						}
					}
					break;
				
				case 0x00000002:
					Function_284(iParam3);
					Function_278(2, 1);
					Function_264(2, 1);
					Function_265(20, 1, 0);
					*uParam1 = 3;
					Function_264(2, 4);
					*uParam0 = 0;
					*uParam2 = 0.0f;
					Function_259();
					break;
			}
			break;
		
		case 0x00000003:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(2);
					Function_254(2, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(2), 0.0f, true, 0);
					if (!Function_256(2, 1))
					{
						Function_288(2, 1, Function_110(263), 1);
						Function_255(2, 1);
					}
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar4 = Function_287(2);
					bVar0 = (Function_110(263) - Function_286(2, 1, 1));
					if (bVar0 <= 8.0f)
					{
						Function_279(2, 4);
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = (bVar0 / 8.0f);
						if (*uParam2 == fVar4)
						{
							Function_285(2, *uParam2, 1, ROUND(bVar0), 4294967295, 4294967295, 0);
						}
					}
					break;
				
				case 0x00000002:
					Function_284(iParam3);
					Function_278(2, 1);
					Function_264(2, 1);
					Function_265(20, 1, 0);
					*uParam1 = 4;
					Function_264(2, 4);
					*uParam0 = 0;
					*uParam2 = 0.0f;
					Function_259();
					break;
			}
			break;
		
		case 0x00000004:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(2);
					Function_254(2, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(2), 0.0f, true, 0);
					if (!Function_256(2, 1))
					{
						Function_288(2, 1, Function_110(268), 1);
						Function_255(2, 1);
					}
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar4 = Function_287(2);
					bVar0 = (Function_110(268) - Function_286(2, 1, 1));
					if (bVar0 <= 7.0f)
					{
						Function_279(2, 5);
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = (bVar0 / 7.0f);
						if (*uParam2 == fVar4)
						{
							Function_285(2, *uParam2, 1, ROUND(bVar0), 4294967295, 4294967295, 0);
						}
					}
					break;
				
				case 0x00000002:
					if (Global_3375 && !Global_63096)
					{
						Function_284(iParam3);
						Function_278(2, 1);
						Function_264(2, 1);
						Function_265(50, 1, 0);
						Function_59("AM_SU_RW1_help", 0x41200000, 1, 0, 2, 1, 0);
						Function_59("AM_SU_RW1_help1", 0x41200000, 1, 0, 2, 1, 0);
						if (!Function_85(11))
						{
							Function_168(11, 0, 1, 1);
						}
						*uParam1 = 5;
						Function_264(2, 4);
						*uParam0 = 0;
						*uParam2 = 0.0f;
						Function_259();
					}
					break;
			}
			break;
		
		case 0x00000005:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(2);
					Function_254(2, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(2), 0.0f, true, 0);
					if (!Function_256(2, 1))
					{
						Function_288(2, 1, Function_110(265), 1);
						Function_255(2, 1);
					}
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar4 = Function_287(2);
					bVar0 = (Function_110(265) - Function_286(2, 1, 1));
					if (bVar0 <= 8.0f)
					{
						Function_279(2, 6);
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = (bVar0 / 8.0f);
						if (*uParam2 == fVar4)
						{
							Function_285(2, *uParam2, 1, ROUND(bVar0), 4294967295, 4294967295, 0);
						}
					}
					break;
				
				case 0x00000002:
					Function_284(iParam3);
					Function_278(2, 1);
					Function_264(2, 1);
					Function_265(20, 1, 0);
					*uParam1 = 6;
					Function_264(2, 4);
					*uParam0 = 0;
					*uParam2 = 0.0f;
					Function_259();
					break;
			}
			break;
		
		case 0x00000006:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(2);
					Function_254(2, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(2), 0.0f, true, 0);
					if (!Function_256(2, 1))
					{
						Function_288(2, 1, Function_110(269), 1);
						Function_255(2, 1);
					}
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar4 = Function_287(2);
					bVar0 = (Function_110(269) - Function_286(2, 1, 1));
					if (bVar0 <= 10.0f)
					{
						Function_279(2, 7);
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = (bVar0 / 10.0f);
						if (*uParam2 == fVar4)
						{
							Function_285(2, *uParam2, 1, ROUND(bVar0), 4294967295, 4294967295, 0);
						}
					}
					break;
				
				case 0x00000002:
					Function_284(iParam3);
					Function_278(2, 1);
					Function_264(2, 1);
					Function_265(20, 1, 0);
					*uParam1 = 7;
					Function_264(2, 4);
					*uParam0 = 0;
					*uParam2 = 0.0f;
					Function_259();
					break;
			}
			break;
		
		case 0x00000007:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(2);
					Function_254(2, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(2), 0.0f, true, 0);
					if (!Function_256(2, 1))
					{
						Function_288(2, 1, Function_110(266), 1);
						Function_255(2, 1);
					}
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar4 = Function_287(2);
					bVar0 = (Function_110(266) - Function_286(2, 1, 1));
					if (bVar0 <= 12.0f)
					{
						Function_279(2, 8);
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = (bVar0 / 12.0f);
						if (*uParam2 == fVar4)
						{
							Function_285(2, *uParam2, 1, ROUND(bVar0), 4294967295, 4294967295, 0);
						}
					}
					break;
				
				case 0x00000002:
					Function_284(iParam3);
					Function_278(2, 1);
					Function_264(2, 1);
					Function_265(20, 1, 0);
					*uParam1 = 8;
					Function_264(2, 4);
					*uParam0 = 0;
					*uParam2 = 0.0f;
					Function_259();
					break;
			}
			break;
		
		case 0x00000008:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(2);
					Function_254(2, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(2), 0.0f, true, 0);
					if (!Function_256(2, 1))
					{
						Function_288(2, 1, Function_110(267), 1);
						Function_255(2, 1);
					}
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar4 = Function_287(2);
					bVar0 = (Function_110(267) - Function_286(2, 1, 1));
					if (bVar0 <= 15.0f)
					{
						Function_279(2, 9);
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = (bVar0 / 15.0f);
						if (*uParam2 == fVar4)
						{
							Function_285(2, *uParam2, 1, ROUND(bVar0), 4294967295, 4294967295, 0);
						}
					}
					break;
				
				case 0x00000002:
					Function_284(iParam3);
					Function_278(2, 1);
					Function_264(2, 1);
					Function_265(20, 1, 0);
					*uParam1 = 9;
					Function_264(2, 4);
					*uParam0 = 0;
					*uParam2 = 0.0f;
					Function_259();
					break;
			}
			break;
		
		case 0x00000009:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(2);
					Function_254(2, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(2), 0.0f, true, 0);
					if (!Function_256(2, 1))
					{
						Function_288(2, 1, Function_110(263), 1);
						Function_288(2, 2, Function_110(264), 1);
						Function_288(2, 3, Function_110(265), 1);
						Function_288(2, 4, Function_110(266), 1);
						Function_288(2, 5, Function_110(267), 1);
						Function_288(2, 6, Function_110(268), 1);
						Function_288(2, 7, Function_110(269), 1);
						Function_288(2, 8, Function_110(270), 1);
						Function_288(2, 9, Function_110(271), 1);
						Function_288(2, 10, Function_110(272), 1);
						Function_255(2, 1);
					}
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar4 = Function_287(2);
					iVar5 = 263;
					bVar6 = true;
					bVar0 = 0.0f;
					fVar1 = 0.0f;
					while (iVar5 <= 273)
					{
						bVar2 = Function_110(iVar5);
						fVar3 = Function_286(2, bVar6, 1);
						if (iVar5 == 270)
						{
							if ((bVar2 - fVar3) < 0.0f)
							{
								if ((bVar2 - fVar3) <= 10.0f)
								{
									fVar1 = (fVar1 + 10.0f);
									bVar0 = (bVar0 + 1.0f);
								}
								else
								{
									fVar1 = (fVar1 + (bVar2 - fVar3));
								}
							}
						}
						else if ((bVar2 - fVar3) < 0.0f)
						{
							if ((bVar2 - fVar3) <= 2.0f)
							{
								fVar1 = (fVar1 + 2.0f);
								bVar0 = (bVar0 + 1.0f);
							}
							else
							{
								fVar1 = (fVar1 + (bVar2 - fVar3));
							}
						}
						bVar6++;
						iVar5++;
					}
					if (bVar0 <= 10.0f)
					{
						*uParam2 = 1.0f;
						*uParam0 = 2;
						Function_279(2, 10);
					}
					else
					{
						*uParam2 = (fVar1 / 28.0f);
						if (*uParam2 == fVar4)
						{
							SET_JOURNAL_ENTRY_PROGRESS(Function_253(2), *uParam2, true, 0);
							iVar5 = 270;
							bVar6 = 8;
							bVar2 = Function_110(iVar5);
							fVar3 = Function_286(2, bVar6, 1);
							bVar0 = (bVar2 - fVar3);
							if (bVar0 < 10.0f)
							{
								bVar0 = 10.0f;
							}
							strcpy(&cVar19, "AM_VS", 16);
							memcpy(&cVar7, StackVal, StackVal, StackVal, StackVal, StackVal, Function_251(2), 4);
							stradd(&cVar7, "_info", 16);
							stradd(&cVar7, INT_TO_STRING(bVar6), 16);
							strcpy(&cVar11, "AM_num", 16);
							stradd(&cVar11, INT_TO_STRING(bVar6), 16);
							strcpy(&cVar15, "AM_herbname", 16);
							stradd(&cVar15, INT_TO_STRING(bVar6), 16);
							UI_SET_STRING(&cVar11, INT_TO_STRING(ROUND(bVar0)));
							UI_SET_STRING(&cVar15, UI_GET_STRING(&cVar19));
							PREPEND_JOURNAL_ENTRY_DETAIL(Function_253(2), &cVar7, 2, 2, true);
							iVar5 = 263;
							bVar6 = true;
							while (iVar5 <= 273)
							{
								bVar2 = Function_110(iVar5);
								fVar3 = Function_286(2, bVar6, 1);
								bVar0 = (bVar2 - fVar3);
								if (iVar5 == 270)
								{
									if (bVar0 < 10.0f)
									{
										bVar0 = 10.0f;
									}
								}
								else if (bVar0 < 2.0f)
								{
									bVar0 = 2.0f;
								}
								switch (iVar5)
								{
									case 0x00000107:
										strcpy(&cVar19, "AM_PPS", 16);
										break;
									
									case 0x00000108:
										strcpy(&cVar19, "AM_DS", 16);
										break;
									
									case 0x00000109:
										strcpy(&cVar19, "AM_BW", 16);
										break;
									
									case 0x0000010A:
										strcpy(&cVar19, "AM_PPY", 16);
										break;
									
									case 0x0000010B:
										strcpy(&cVar19, "AM_GC", 16);
										break;
									
									case 0x0000010C:
										strcpy(&cVar19, "AM_WBC", 16);
										break;
									
									case 0x0000010D:
										strcpy(&cVar19, "AM_HS", 16);
										break;
									
									case 0x0000010E:
										strcpy(&cVar19, "AM_VS", 16);
										break;
									
									case 0x0000010F:
										strcpy(&cVar19, "AM_RS", 16);
										break;
									
									case 0x00000110:
										strcpy(&cVar19, "AM_WFF", 16);
										break;
								}
								memcpy(&cVar7, StackVal, StackVal, StackVal, StackVal, StackVal, Function_251(2), 4);
								stradd(&cVar7, "_info", 16);
								stradd(&cVar7, INT_TO_STRING(bVar6), 16);
								strcpy(&cVar11, "AM_num", 16);
								stradd(&cVar11, INT_TO_STRING(bVar6), 16);
								strcpy(&cVar15, "AM_herbname", 16);
								stradd(&cVar15, INT_TO_STRING(bVar6), 16);
								UI_SET_STRING(&cVar11, INT_TO_STRING(ROUND(bVar0)));
								UI_SET_STRING(&cVar15, UI_GET_STRING(&cVar19));
								if (iVar5 != 270)
								{
									PREPEND_JOURNAL_ENTRY_DETAIL(Function_253(2), &cVar7, 2, 2, true);
								}
								bVar6++;
								iVar5++;
							}
						}
					}
					break;
				
				case 0x00000002:
					if (Global_3375 && !Global_63096)
					{
						Function_284(iParam3);
						Function_278(2, 1);
						Function_264(2, 1);
						Function_59("AM_SU_RW2_help", 0x41200000, 1, 0, 2, 1, 0);
						Function_265(50, 1, 0);
						if (!HAS_ACHIEVEMENT_BEEN_PASSED(25))
						{
							AWARD_ACHIEVEMENT(25);
						}
						*uParam1 = 10;
						*uParam0 = 2;
						*uParam2 = 1.0f;
						SET_JOURNAL_ENTRY_PROGRESS(Function_253(2), 1.0f, true, 0);
						Function_249(2);
						Function_259();
					}
					break;
			}
			break;
	}
}

void Function_284(int iParam0) //Position: 0x13288 / 78472
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (IS_OBJECTSET_VALID(*iParam0))
	{
		bVar0 = false;
		if (GET_OBJECTSET_SIZE(*iParam0) >= bVar0)
		{
			bVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, *iParam0);
			while (IS_OBJECT_VALID(bVar1))
			{
				if (DECOR_CHECK_EXIST(bVar1, "AM_NO_PURGE"))
				{
					bVar2 = DECOR_GET_INT(bVar1, "AM_NO_PURGE");
					bVar2 = (bVar2 - 1);
					DECOR_SET_INT(bVar1, "AM_NO_PURGE", bVar2);
				}
				bVar0++;
				if (GET_OBJECTSET_SIZE(*iParam0) >= bVar0)
				{
					bVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, *iParam0);
				}
				else
				{
					bVar1 = "";
				}
			}
		}
		DISBAND_OBJECTSET(*iParam0);
	}
	else
	{
		LOG_ERROR("AM_PURGE_COLLECTION: attempting to disband an invalid objectset");
	}
	return;
}

void Function_285(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6) //Position: 0x13371 / 78705
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	char* cVar20[24];
	char* cVar26[24];
	char* cVar32[24];
	char* cVar38[24];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_253(iParam0), fParam1, true, 0);
	if (bParam2)
	{
		if (((iParam0 != 12 || iParam0 != 13) || iParam0 != 10) || iParam0 != 11)
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_251(iParam0) };
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
			APPEND_JOURNAL_ENTRY_DETAIL(Function_253(iParam0), &cVar0, 2, 2, false);
			Function_164(Function_253(iParam0), 0);
		}
		else
		{
			cVar20 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_251(iParam0) };
			if (Function_1() || Global_34165.f_44)
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
			APPEND_JOURNAL_ENTRY_DETAIL(Function_253(iParam0), &cVar20, 2, 2, true);
			Function_164(Function_253(iParam0), 0);
		}
	}
}

float Function_286(bool bParam0, bool bParam1, bool bParam2) //Position: 0x134FC / 79100
{
	char* cVar0[16];
	bool bVar4;
	
	if (bParam2)
	{
		if (Function_1() || Global_34165.f_44)
		{
			return (*&Global_49399[bParam022] + 36)[bParam1];
		}
		return (*&Global_49310[bParam022] + 36)[bParam1];
	}
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_FLOATSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar4 = Function_241();
	if (IS_LAYOUTREF_VALID(bVar4))
	{
		if (DECOR_CHECK_EXIST(bVar4, &cVar0))
		{
			return DECOR_GET_FLOAT(bVar4, &cVar0);
		}
		return -1.0f;
	}
	LOG_ERROR("AM_RETRIEVE_FLOAT: failed to retrieve float value from slot");
	return -1.0f;
}

float Function_287(int iParam0) //Position: 0x135BE / 79294
{
	if (Function_1() || Global_34165.f_44)
	{
		return Global_49399[iParam022].f_12;
	}
	return Global_49310[iParam022].f_12;
}

int Function_288(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x135E6 / 79334
{
	char* cVar0[16];
	bool bVar4;
	
	if (bParam3)
	{
		if (Function_1() || Global_34165.f_44)
		{
			(*&Global_49399[bParam022] + 36)[bParam1] = bParam2;
		}
		else
		{
			(*&Global_49310[bParam022] + 36)[bParam1] = bParam2;
		}
		return 1;
	}
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_FLOATSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar4 = Function_241();
	if (IS_LAYOUTREF_VALID(bVar4))
	{
		return DECOR_SET_FLOAT(bVar4, &cVar0, bParam2);
	}
	LOG_ERROR("AM_STORE_FLOAT: failed to store float value in slot");
	return 0;
}

void Function_289(var uParam0, int iParam1) //Position: 0x1369D / 79517
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_290(int iParam0) //Position: 0x136AC / 79532
{
	*iParam0 = 0;
	return;
}

void Function_291(var uParam0, var uParam1, var uParam2, int iParam3) //Position: 0x136B6 / 79542
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	float fVar5;
	
	switch (*uParam1)
	{
		case 0x00000000:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(1);
					if (!Function_256(1, 1))
					{
						Function_288(1, 1, Function_110(286), 1);
						Function_255(1, 1);
					}
					if (Function_256(1, 4))
					{
						PREPEND_JOURNAL_ENTRY_DETAIL(Function_253(1), "AM_INTRO_HLP", 0, 2, true);
					}
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar5 = Function_287(1);
					if ((Function_110(286) - Function_286(1, 1, 1)) <= 5.0f)
					{
						Function_279(1, 1);
						*uParam0 = 2;
					}
					else
					{
						bVar1 = ROUND((Function_110(286) - Function_286(1, 1, 1)));
						if (bVar1 >= 0)
						{
							if ((!Function_256(1, 2) && Global_3375) && !Global_63096)
							{
								Function_255(1, 2);
								Function_59("AM_MH_HLP_1", 0x41200000, 1, 0, 2, 1, 0);
								Function_59("AM_MH_HLP_2", 0x41200000, 1, 0, 2, 1, 0);
							}
							if (!Function_256(1, 4))
							{
								Function_254(1, 0);
								PREPEND_JOURNAL_ENTRY_DETAIL(Function_253(1), "AM_INTRO_HLP", 0, 2, false);
							}
						}
						if (bVar1 >= 5)
						{
							bVar1 = 5;
						}
						*uParam2 = TO_FLOAT(bVar1);
						*uParam2 = (*uParam2 / 5.0f);
						if (*uParam2 == fVar5)
						{
							Function_285(1, *uParam2, 1, bVar1, 4294967295, 4294967295, 12);
						}
					}
					break;
				
				case 0x00000002:
					if (Global_3375 && !Global_63096)
					{
						Function_59("AM_MH_HLP_3", 0x41200000, 1, 0, 2, 1, 0);
						Function_59("AM_MH_HLP_2", 0x41200000, 1, 0, 2, 1, 0);
						Function_284(iParam3);
						Function_278(1, 1);
						Function_264(1, 1);
						Function_265(20, 1, 0);
						Function_264(1, 4);
						*uParam1 = 1;
						*uParam0 = 0;
						*uParam2 = 0.0f;
						Function_259();
					}
					break;
			}
			break;
		
		case 0x00000001:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(1);
					Function_254(1, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(1), 0.0f, true, 0);
					if (!Function_256(1, 1))
					{
						Function_288(1, 1, Function_110(288), 1);
						Function_255(1, 1);
					}
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar5 = Function_287(1);
					if ((Function_110(288) - Function_286(1, 1, 1)) <= 5.0f)
					{
						Function_279(1, 2);
						*uParam0 = 2;
					}
					else
					{
						bVar1 = ROUND((Function_110(288) - Function_286(1, 1, 1)));
						if (bVar1 >= 5)
						{
							bVar1 = 5;
						}
						*uParam2 = TO_FLOAT(bVar1);
						*uParam2 = (*uParam2 / 5.0f);
						if (*uParam2 == fVar5)
						{
							Function_285(1, *uParam2, 1, bVar1, 4294967295, 4294967295, 12);
						}
					}
					break;
				
				case 0x00000002:
					Function_284(iParam3);
					Function_278(1, 1);
					Function_264(1, 1);
					Function_265(20, 1, 0);
					Function_264(1, 4);
					*uParam1 = 2;
					*uParam0 = 0;
					*uParam2 = 0.0f;
					Function_259();
					break;
			}
			break;
		
		case 0x00000002:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(1);
					Function_254(1, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(1), 0.0f, true, 0);
					if (!Function_256(1, 1))
					{
						Function_288(1, 1, Function_110(311), 1);
						Function_255(1, 1);
					}
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar5 = Function_287(1);
					Function_298(2, "WOLF", iParam3, 1, 0);
					bVar1 = Function_296(iParam3, 1);
					if (bVar1 >= 0)
					{
						iVar0 = 0;
						while (Function_295(iParam3, &iVar0, &bVar4))
						{
							if (IS_OBJECT_VALID(bVar4))
							{
								if (Function_294(bVar4) != 22)
								{
									Function_293(iParam3, &bVar4);
									iVar0 = (iVar0 - 1);
								}
							}
						}
					}
					bVar1 = Function_296(iParam3, 1);
					if ((Function_110(311) - Function_286(1, 1, 1)) <= 5.0f && IntToFloat(bVar1) <= 5.0f)
					{
						Function_279(1, 3);
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = TO_FLOAT(bVar1);
						if (*uParam2 < 5.0f)
						{
							*uParam2 = 5.0f;
						}
						bVar2 = ROUND((Function_110(311) - Function_286(1, 1, 1)));
						if (bVar2 >= 5)
						{
							bVar2 = 5;
						}
						*uParam2 = (*uParam2 + TO_FLOAT(bVar2));
						*uParam2 = (*uParam2 / 10.0f);
						if (*uParam2 == fVar5)
						{
							if (bVar1 >= 5)
							{
								bVar1 = 5;
							}
							Function_285(1, *uParam2, 1, bVar1, bVar2, 4294967295, 12);
						}
					}
					break;
				
				case 0x00000002:
					Function_284(iParam3);
					Function_278(1, 1);
					Function_264(1, 1);
					Function_265(20, 1, 0);
					Function_264(1, 4);
					*uParam1 = 3;
					*uParam0 = 0;
					*uParam2 = 0.0f;
					Function_259();
					break;
			}
			break;
		
		case 0x00000003:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(1);
					Function_254(1, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(1), 0.0f, true, 0);
					if (!Function_256(1, 1))
					{
						Function_288(1, 1, Function_110(279), 1);
						Function_288(1, 2, Function_110(274), 1);
						Function_255(1, 1);
					}
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar5 = Function_287(1);
					if ((Function_110(279) - Function_286(1, 1, 1)) <= 5.0f && (Function_110(274) - Function_286(1, 2, 1)) <= 3.0f)
					{
						Function_279(1, 4);
						*uParam0 = 2;
					}
					else
					{
						bVar1 = ROUND((Function_110(279) - Function_286(1, 1, 1)));
						if (bVar1 >= 5)
						{
							bVar1 = 5;
						}
						*uParam2 = TO_FLOAT(bVar1);
						bVar2 = ROUND((Function_110(274) - Function_286(1, 2, 1)));
						if (bVar2 >= 3)
						{
							bVar2 = 3;
						}
						*uParam2 = (*uParam2 + TO_FLOAT(bVar2));
						*uParam2 = (*uParam2 / 8.0f);
						if (*uParam2 == fVar5)
						{
							Function_285(1, *uParam2, 1, bVar1, bVar2, 4294967295, 12);
						}
					}
					break;
				
				case 0x00000002:
					Function_284(iParam3);
					Function_278(1, 1);
					Function_264(1, 1);
					Function_265(20, 1, 0);
					Function_264(1, 4);
					*uParam1 = 4;
					*uParam0 = 0;
					*uParam2 = 0.0f;
					Function_259();
					break;
			}
			break;
		
		case 0x00000004:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(1);
					Function_254(1, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(1), 0.0f, true, 0);
					if (!Function_256(1, 1))
					{
						Function_288(1, 1, Function_110(284), 1);
						Function_255(1, 1);
					}
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar5 = Function_287(1);
					Function_298(2, "COUGAR", iParam3, 1, 0);
					bVar1 = Function_296(iParam3, 1);
					if (bVar1 >= 0)
					{
						iVar0 = 0;
						while (Function_295(iParam3, &iVar0, &bVar4))
						{
							if (IS_OBJECT_VALID(bVar4))
							{
								if (Function_294(bVar4) != 22)
								{
									Function_293(iParam3, &bVar4);
									iVar0 = (iVar0 - 1);
								}
							}
						}
					}
					bVar1 = Function_296(iParam3, 1);
					if ((Function_110(284) - Function_286(1, 1, 1)) <= 2.0f && IntToFloat(bVar1) <= 2.0f)
					{
						Function_279(1, 5);
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = TO_FLOAT(bVar1);
						bVar2 = ROUND((Function_110(284) - Function_286(1, 1, 1)));
						if (bVar2 >= 2)
						{
							bVar2 = 2;
						}
						*uParam2 = (*uParam2 + TO_FLOAT(bVar2));
						*uParam2 = (*uParam2 / 4.0f);
						if (*uParam2 == fVar5)
						{
							if (bVar1 >= 2)
							{
								bVar1 = 2;
							}
							Function_285(1, *uParam2, 1, bVar1, bVar2, 4294967295, 12);
						}
					}
					break;
				
				case 0x00000002:
					if (Global_3375 && !Global_63096)
					{
						Function_284(iParam3);
						Function_278(1, 1);
						Function_264(1, 1);
						Function_265(50, 1, 0);
						Function_59("AM_MH_RW1_help", 0x41200000, 1, 0, 2, 1, 0);
						if (!Function_85(11))
						{
							Function_168(11, 0, 1, 1);
						}
						Function_264(1, 4);
						*uParam1 = 5;
						*uParam0 = 0;
						*uParam2 = 0.0f;
						Function_259();
					}
					break;
			}
			break;
		
		case 0x00000005:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(1);
					Function_254(1, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(1), 0.0f, true, 0);
					if (!Function_256(1, 1))
					{
						Function_288(1, 1, Function_110(305), 1);
						Function_288(1, 2, Function_110(307), 1);
						Function_288(1, 3, Function_110(293), 1);
						Function_255(1, 1);
					}
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar5 = Function_287(1);
					if (((Function_110(305) - Function_286(1, 1, 1)) <= 5.0f && (Function_110(307) - Function_286(1, 2, 1)) <= 5.0f) && (Function_110(293) - Function_286(1, 3, 1)) <= 5.0f)
					{
						Function_279(1, 6);
						*uParam0 = 2;
					}
					else
					{
						bVar1 = ROUND((Function_110(305) - Function_286(1, 1, 1)));
						if (bVar1 >= 5)
						{
							bVar1 = 5;
						}
						*uParam2 = TO_FLOAT(bVar1);
						bVar2 = ROUND((Function_110(307) - Function_286(1, 2, 1)));
						if (bVar2 >= 5)
						{
							bVar2 = 5;
						}
						*uParam2 = (*uParam2 + TO_FLOAT(bVar2));
						bVar3 = ROUND((Function_110(293) - Function_286(1, 3, 1)));
						if (bVar3 >= 5)
						{
							bVar3 = 5;
						}
						*uParam2 = (*uParam2 + TO_FLOAT(bVar3));
						*uParam2 = (*uParam2 / 15.0f);
						if (*uParam2 == fVar5)
						{
							Function_285(1, *uParam2, 1, bVar1, bVar2, bVar3, 12);
						}
					}
					break;
				
				case 0x00000002:
					Function_284(iParam3);
					Function_278(1, 1);
					Function_264(1, 1);
					Function_265(20, 1, 0);
					Function_264(1, 4);
					*uParam1 = 6;
					*uParam0 = 0;
					*uParam2 = 0.0f;
					Function_259();
					break;
			}
			break;
		
		case 0x00000006:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(1);
					Function_254(1, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(1), 0.0f, true, 0);
					if (!Function_256(1, 1))
					{
						Function_288(1, 1, Function_110(292), 1);
						Function_288(1, 2, Function_110(278), 1);
						Function_255(1, 1);
					}
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar5 = Function_287(1);
					if ((Function_110(292) - Function_286(1, 1, 1)) <= 5.0f && (Function_110(278) - Function_286(1, 2, 1)) <= 5.0f)
					{
						Function_279(1, 7);
						*uParam0 = 2;
					}
					else
					{
						bVar1 = ROUND((Function_110(292) - Function_286(1, 1, 1)));
						if (bVar1 >= 5)
						{
							bVar1 = 5;
						}
						*uParam2 = TO_FLOAT(bVar1);
						bVar2 = ROUND((Function_110(278) - Function_286(1, 2, 1)));
						if (bVar2 >= 5)
						{
							bVar2 = 5;
						}
						*uParam2 = (*uParam2 + TO_FLOAT(bVar2));
						*uParam2 = (*uParam2 / 10.0f);
						if (*uParam2 == fVar5)
						{
							Function_285(1, *uParam2, 1, bVar1, bVar2, 4294967295, 12);
						}
					}
					break;
				
				case 0x00000002:
					Function_284(iParam3);
					Function_278(1, 1);
					Function_264(1, 1);
					Function_265(20, 1, 0);
					Function_264(1, 4);
					*uParam1 = 7;
					*uParam0 = 0;
					*uParam2 = 0.0f;
					Function_259();
					break;
			}
			break;
		
		case 0x00000007:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(1);
					Function_254(1, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(1), 0.0f, true, 0);
					if (!Function_256(1, 1))
					{
						Function_288(1, 1, Function_110(276), 0);
						Function_255(1, 1);
						Function_264(1, 8);
						Function_264(1, 16);
					}
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar5 = Function_287(1);
					Function_298(2, "BEAR", iParam3, 1, 0);
					bVar1 = Function_296(iParam3, 1);
					if (bVar1 >= 0)
					{
						iVar0 = 0;
						while (Function_295(iParam3, &iVar0, &bVar4))
						{
							if (IS_OBJECT_VALID(bVar4))
							{
								if (Function_294(bVar4) != 22)
								{
									Function_293(iParam3, &bVar4);
									iVar0 = (iVar0 - 1);
								}
							}
						}
					}
					bVar1 = Function_296(iParam3, 1);
					if ((Function_110(276) - Function_286(1, 1, 1)) <= 1.0f && IntToFloat(bVar1) <= 1.0f)
					{
						Function_279(1, 8);
						*uParam0 = 2;
					}
					else
					{
						if (bVar1 > 1)
						{
							bVar1 = true;
							if (!Function_256(1, 8))
							{
								Function_255(1, 8);
								APPEND_JOURNAL_ENTRY_DETAIL(Function_253(1), "AM_MH_7_info", 0, 2, true);
								bVar1 = true;
							}
						}
						*uParam2 = TO_FLOAT(bVar1);
						bVar1 = ROUND((Function_110(276) - Function_286(1, 1, 1)));
						if (bVar1 > 1)
						{
							bVar1 = true;
							if (!Function_256(1, 16))
							{
								Function_255(1, 16);
								APPEND_JOURNAL_ENTRY_DETAIL(Function_253(1), "AM_MH_7_info2", 0, 2, true);
								bVar1 = true;
							}
						}
						*uParam2 = (*uParam2 + TO_FLOAT(bVar1));
						*uParam2 = (*uParam2 / 2.0f);
						if (*uParam2 == fVar5)
						{
							Function_285(1, *uParam2, 0, 4294967295, 4294967295, 4294967295, 0);
						}
					}
					break;
				
				case 0x00000002:
					Function_284(iParam3);
					Function_278(1, 1);
					Function_264(1, 1);
					Function_264(1, 8);
					Function_264(1, 16);
					Function_265(20, 1, 0);
					Function_264(1, 4);
					*uParam1 = 8;
					*uParam0 = 0;
					*uParam2 = 0.0f;
					Function_259();
					break;
			}
			break;
		
		case 0x00000008:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(1);
					Function_254(1, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(1), 0.0f, true, 0);
					if (!Function_256(1, 1))
					{
						Function_288(1, 1, Function_110(300), 1);
						Function_255(1, 1);
					}
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar5 = Function_287(1);
					bVar1 = Function_292(2, 1094, iParam3, 1);
					bVar1 = Function_296(iParam3, 1);
					if ((Function_110(300) - Function_286(1, 1, 1)) <= 1.0f && IntToFloat(bVar1) <= 1.0f)
					{
						Function_279(1, 9);
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = TO_FLOAT(bVar1);
						bVar1 = ROUND((Function_110(300) - Function_286(1, 1, 1)));
						if (bVar1 >= 1)
						{
							bVar1 = true;
						}
						*uParam2 = (*uParam2 + TO_FLOAT(bVar1));
						*uParam2 = (*uParam2 / 2.0f);
						if (*uParam2 == fVar5)
						{
							Function_285(1, *uParam2, 0, 4294967295, 4294967295, 4294967295, 0);
						}
					}
					break;
				
				case 0x00000002:
					Function_284(iParam3);
					Function_278(1, 1);
					Function_264(1, 1);
					Function_265(20, 1, 0);
					Function_264(1, 4);
					*uParam1 = 9;
					*uParam0 = 0;
					*uParam2 = 0.0f;
					Function_259();
					break;
			}
			break;
		
		case 0x00000009:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(1);
					Function_254(1, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(1), 0.0f, true, 0);
					if (!Function_256(1, 1))
					{
						Function_288(1, 1, Function_110(301), 1);
						Function_288(1, 2, Function_110(298), 1);
						Function_288(1, 3, Function_110(299), 1);
						Function_264(1, 8);
						Function_264(1, 16);
						Function_264(1, 32);
						Function_255(1, 1);
					}
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar5 = Function_287(1);
					if (((Function_110(301) - Function_286(1, 1, 1)) <= 1.0f && (Function_110(298) - Function_286(1, 2, 1)) <= 1.0f) && (Function_110(299) - Function_286(1, 3, 1)) <= 1.0f)
					{
						*uParam0 = 2;
						Function_279(1, 10);
					}
					else
					{
						bVar1 = ROUND((Function_110(301) - Function_286(1, 1, 1)));
						if (bVar1 > 1)
						{
							if (!Function_256(1, 8))
							{
								Function_255(1, 8);
								APPEND_JOURNAL_ENTRY_DETAIL(Function_253(1), "AM_MH_9_info", 0, 2, true);
								bVar1 = true;
							}
						}
						*uParam2 = TO_FLOAT(bVar1);
						bVar1 = ROUND((Function_110(298) - Function_286(1, 2, 1)));
						if (bVar1 > 1)
						{
							if (!Function_256(1, 16))
							{
								Function_255(1, 16);
								APPEND_JOURNAL_ENTRY_DETAIL(Function_253(1), "AM_MH_9_info2", 0, 2, true);
								bVar1 = true;
							}
						}
						*uParam2 = (*uParam2 + TO_FLOAT(bVar1));
						bVar1 = ROUND((Function_110(299) - Function_286(1, 3, 1)));
						if (bVar1 > 1)
						{
							if (!Function_256(1, 32))
							{
								Function_255(1, 32);
								APPEND_JOURNAL_ENTRY_DETAIL(Function_253(1), "AM_MH_9_info3", 0, 2, true);
								bVar1 = true;
							}
						}
						*uParam2 = (*uParam2 + TO_FLOAT(bVar1));
						*uParam2 = (*uParam2 / 3.0f);
						SET_JOURNAL_ENTRY_PROGRESS(Function_253(1), *uParam2, true, 0);
					}
					break;
				
				case 0x00000002:
					Function_284(iParam3);
					Function_278(1, 1);
					Function_264(1, 1);
					Function_264(1, 8);
					Function_264(1, 16);
					Function_264(1, 32);
					Function_265(50, 1, 0);
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(25))
					{
						AWARD_ACHIEVEMENT(25);
					}
					*uParam1 = 10;
					*uParam0 = 2;
					*uParam2 = 1.0f;
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(1), 1.0f, true, 0);
					Function_249(1);
					Function_259();
					break;
			}
			break;
	}
}

bool Function_292(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x14581 / 83329
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	if (!IS_OBJECTSET_VALID(*iParam2))
	{
		LOG_ERROR("AM_COLLECT_PLAYER_EVENTS_OF_TYPE_ON_ACTORENUM: invalid objectset passed as EventCollection");
		return 4294967295;
	}
	iVar0 = 0;
	bVar1 = Function_244();
	bVar2 = START_OBJECT_ITERATOR(bVar1);
	while (IS_OBJECT_VALID(bVar2))
	{
		if (!IS_OBJECT_IN_OBJECTSET(bVar2, *iParam2))
		{
			if (GET_EVENT_TYPE(GET_EVENT_FROM_OBJECT(bVar2)) == iParam0)
			{
				bVar3 = GET_EVENT_PERPETRATOR(GET_EVENT_FROM_OBJECT(bVar2));
				if (IS_ACTOR_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(bVar3)))
				{
					bVar4 = GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar2));
					if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar4)))
					{
						bVar5 = GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar4));
						if (bVar5 == iParam1)
						{
							if (DECOR_CHECK_EXIST(bVar2, "AM_NO_PURGE"))
							{
								bVar6 = DECOR_GET_INT(bVar2, "AM_NO_PURGE");
								bVar6++;
							}
							else
							{
								bVar6 = true;
							}
							DECOR_SET_INT(bVar2, "AM_NO_PURGE", bVar6);
							if (bParam3)
							{
								ADD_OBJECT_TO_OBJECTSET(bVar2, *iParam2);
							}
							iVar0++;
						}
					}
				}
			}
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
	}
	return iVar0;
}

int Function_293(int iParam0, bool bParam1) //Position: 0x146CF / 83663
{
	bool bVar0;
	
	if (IS_OBJECTSET_VALID(*iParam0))
	{
		if (IS_OBJECT_IN_OBJECTSET(*bParam1, *iParam0))
		{
			if (DECOR_CHECK_EXIST(*bParam1, "AM_NO_PURGE"))
			{
				bVar0 = DECOR_GET_INT(*bParam1, "AM_NO_PURGE");
				bVar0 = (bVar0 - 1);
				DECOR_SET_INT(*bParam1, "AM_NO_PURGE", bVar0);
			}
			REMOVE_OBJECT_FROM_OBJECTSET(*bParam1, *iParam0);
			return 1;
		}
	}
	return 0;
}

int Function_294(bool bParam0) //Position: 0x14740 / 83776
{
	if (DECOR_CHECK_EXIST(bParam0, "nAM_Weapon"))
	{
		return DECOR_GET_INT(bParam0, "nAM_Weapon");
	}
	return 4294967295;
}

bool Function_295(int iParam0, int iParam1, bool bParam2) //Position: 0x1476D / 83821
{
	if (*iParam1 == 4294967295)
	{
		return 0;
	}
	if (IS_OBJECTSET_VALID(*iParam0))
	{
		if (GET_OBJECTSET_SIZE(*iParam0) >= *iParam1)
		{
			*bParam2 = GET_INDEXED_OBJECT_IN_OBJECTSET(*iParam1, *iParam0);
			*iParam1++;
			return 1;
		}
	}
	*iParam1 = 4294967295;
	return 0;
}

int Function_296(int iParam0, bool bParam1) //Position: 0x147AC / 83884
{
	if (Function_1() || Global_34165.f_44)
	{
		Global_49399[bParam122].f_28 = (GET_OBJECTSET_SIZE(*iParam0) + Function_297(bParam1, 0));
		return Global_49399[bParam122].f_28;
	}
	Global_49310[bParam122].f_28 = (GET_OBJECTSET_SIZE(*iParam0) + Function_297(bParam1, 0));
	return Global_49310[bParam122].f_28;
}

int Function_297(bool bParam0, bool bParam1) //Position: 0x14800 / 83968
{
	char* cVar0[16];
	bool bVar4;
	
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_INTSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar4 = Function_241();
	if (IS_LAYOUTREF_VALID(bVar4))
	{
		if (DECOR_CHECK_EXIST(bVar4, &cVar0))
		{
			return DECOR_GET_INT(bVar4, &cVar0);
		}
		return 4294967295;
	}
	LOG_ERROR("AM_RETRIEVE_INT: failed to retrieve int value from layout");
	return 4294967295;
}

bool Function_298(bool bParam0, char* cParam1, int iParam2, bool bParam3, bool bParam4) //Position: 0x1488B / 84107
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	char* cVar5;
	char* cVar6[64];
	char* cVar22[64];
	bool bVar38;
	
	if (!IS_OBJECTSET_VALID(*iParam2))
	{
		LOG_ERROR("AM_COLLECT_PLAYER_EVENTS_OF_TYPE_ON_ACTORENUM: invalid objectset passed as EventCollection");
		return 4294967295;
	}
	if (!IS_ACTOR_VALID(Function_29()))
	{
		return 4294967295;
	}
	bVar0 = Function_244();
	iVar1 = 0;
	bVar2 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar2))
	{
		if (!IS_OBJECT_IN_OBJECTSET(bVar2, *iParam2))
		{
			if (GET_EVENT_TYPE(GET_EVENT_FROM_OBJECT(bVar2)) == bParam0)
			{
				bVar3 = GET_EVENT_PERPETRATOR(GET_EVENT_FROM_OBJECT(bVar2));
				if (IS_OBJECT_VALID(bVar3))
				{
					if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar3)))
					{
						if (IS_ACTOR_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(bVar3)))
						{
							bVar4 = GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar2));
							if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar4)))
							{
								cVar5 = GET_ACTOR_ENUM_STRING(GET_ACTOR_FROM_OBJECT(bVar4));
								strcpy(&cVar6, cVar5, 64);
								STRING_LOWER(&cVar6);
								strcpy(&cVar22, cParam1, 64);
								STRING_LOWER(&cVar22);
								if (STRING_CONTAINS_STRING(&cVar6, &cVar22))
								{
									if (DECOR_CHECK_EXIST(bVar2, "AM_NO_PURGE"))
									{
										bVar38 = DECOR_GET_INT(bVar2, "AM_NO_PURGE");
										bVar38++;
									}
									else
									{
										bVar38 = true;
									}
									DECOR_SET_INT(bVar2, "AM_NO_PURGE", bVar38);
									if (bParam3)
									{
										ADD_OBJECT_TO_OBJECTSET(bVar2, *iParam2);
										if (bParam4)
										{
											return 1;
										}
									}
									iVar1++;
								}
							}
						}
					}
				}
			}
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	return iVar1;
}

void Function_299(var uParam0, var uParam1, var uParam2, int iParam3) //Position: 0x14A1E / 84510
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	float fVar8;
	bool bVar9;
	
	bVar6 = false;
	bVar7 = false;
	switch (*uParam1)
	{
		case 0x00000000:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(0);
					if (Function_256(0, 4))
					{
						PREPEND_JOURNAL_ENTRY_DETAIL(Function_253(0), "AM_INTRO_HLP", 0, 2, true);
					}
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar8 = Function_287(0);
					bVar1 = Function_298(2, "FLYING_ANIMAL", iParam3, 1, 0);
					if (bVar1 >= 0)
					{
						iVar0 = 0;
						while (Function_295(iParam3, &iVar0, &bVar3))
						{
							if (IS_OBJECT_VALID(bVar3))
							{
								if (!Function_306(bVar3))
								{
									Function_293(iParam3, &bVar3);
									iVar0 = (iVar0 - 1);
								}
								else if (((Function_294(bVar3) != 24 || Function_294(bVar3) != 25) || Function_294(bVar3) != 23) || Function_294(bVar3) != 4294967295)
								{
									Function_293(iParam3, &bVar3);
									iVar0 = (iVar0 - 1);
								}
							}
						}
					}
					bVar1 = Function_296(iParam3, 0);
					if (bVar1 > 5)
					{
						Function_279(0, 1);
						*uParam0 = 2;
					}
					else if (bVar1 >= 4294967295)
					{
						if (bVar1 >= 0)
						{
							if ((!Function_256(0, 2) && Global_3375) && !Global_63096)
							{
								Function_255(0, 2);
								Function_305("AM_SS_HLP_1", 0, 0x40f00000, 1);
								Function_305("AM_SS_HLP_2", 0, 0x40f00000, 1);
							}
							if (!Function_256(0, 4))
							{
								Function_254(0, 0);
								PREPEND_JOURNAL_ENTRY_DETAIL(Function_253(0), "AM_INTRO_HLP", 0, 2, false);
							}
						}
						*uParam2 = TO_FLOAT(bVar1);
						*uParam2 = (*uParam2 / 5.0f);
						if (*uParam2 == fVar8)
						{
							Function_285(0, *uParam2, 1, bVar1, 4294967295, 4294967295, 10);
						}
					}
					break;
				
				case 0x00000002:
					if (Global_3375 && !Global_63096)
					{
						Function_59("AM_SS_HLP_3", 0x41200000, 1, 0, 2, 1, 0);
						Function_59("AM_SS_HLP_2", 0x41200000, 1, 0, 2, 1, 0);
						Function_284(iParam3);
						Function_278(0, 1);
						Function_265(20, 1, 0);
						Function_264(0, 4);
						*uParam1 = 1;
						*uParam0 = 0;
						*uParam2 = 0.0f;
						Function_259();
					}
					break;
			}
			break;
		
		case 0x00000001:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(0);
					Function_254(0, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(0), 0.0f, true, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar8 = Function_287(0);
					bVar1 = Function_298(2, "RABBIT", iParam3, 1, 0);
					if (bVar1 >= 0)
					{
						iVar0 = 0;
						while (Function_295(iParam3, &iVar0, &bVar3))
						{
							if (IS_OBJECT_VALID(bVar3))
							{
								if (((Function_294(bVar3) != 24 || Function_294(bVar3) != 25) || Function_294(bVar3) != 23) || Function_294(bVar3) != 4294967295)
								{
									Function_293(iParam3, &bVar3);
									iVar0 = (iVar0 - 1);
								}
							}
						}
					}
					bVar1 = Function_296(iParam3, 0);
					if (Global_49310[022].f_28 > 5)
					{
						Function_279(0, 2);
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = TO_FLOAT(bVar1);
						*uParam2 = (*uParam2 / 5.0f);
						if (*uParam2 == fVar8)
						{
							Function_285(0, *uParam2, 1, bVar1, 4294967295, 4294967295, 10);
						}
					}
					break;
				
				case 0x00000002:
					Function_284(iParam3);
					Function_265(20, 1, 0);
					Function_278(0, 1);
					Function_264(0, 4);
					*uParam1 = 2;
					*uParam0 = 0;
					*uParam2 = 0.0f;
					Function_259();
					break;
			}
			break;
		
		case 0x00000002:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(0);
					Function_254(0, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(0), 0.0f, true, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar8 = Function_287(0);
					bVar1 = Function_304(1, "COYOTE", iParam3, 0);
					if (bVar1 >= 0)
					{
						Function_284(iParam3);
						Function_278(0, 1);
						Function_257(0);
					}
					bVar1 = Function_298(2, "COYOTE", iParam3, 1, 0);
					if (bVar1 >= 0)
					{
						iVar0 = 0;
						while (Function_295(iParam3, &iVar0, &bVar3))
						{
							if (IS_OBJECT_VALID(bVar3))
							{
								if (((Function_294(bVar3) != 24 || Function_294(bVar3) != 25) || Function_294(bVar3) != 23) || Function_294(bVar3) != 4294967295)
								{
									Function_293(iParam3, &bVar3);
									iVar0 = (iVar0 - 1);
								}
							}
						}
					}
					bVar1 = Function_296(iParam3, 0);
					if (bVar1 > 5)
					{
						Function_279(0, 3);
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = TO_FLOAT(bVar1);
						*uParam2 = (*uParam2 / 5.0f);
						if (*uParam2 == fVar8)
						{
							Function_285(0, *uParam2, 1, bVar1, 4294967295, 4294967295, 10);
						}
					}
					break;
				
				case 0x00000002:
					Function_284(iParam3);
					Function_278(0, 1);
					Function_265(20, 1, 0);
					Function_264(0, 4);
					*uParam1 = 3;
					*uParam0 = 0;
					*uParam2 = 0.0f;
					Function_259();
					break;
			}
			break;
		
		case 0x00000003:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(0);
					Function_254(0, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(0), 0.0f, true, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar8 = Function_287(0);
					if (IS_ACTOR_ON_TRAIN(Global_34573, 1))
					{
						bVar1 = Function_298(2, "FLYING_ANIMAL", iParam3, 1, 0);
						if (bVar1 >= 0)
						{
							iVar0 = 0;
							while (Function_295(iParam3, &iVar0, &bVar3))
							{
								if (IS_OBJECT_VALID(bVar3))
								{
									if (!Function_306(bVar3))
									{
										Function_293(iParam3, &bVar3);
										iVar0 = (iVar0 - 1);
									}
									else if (((Function_294(bVar3) != 24 || Function_294(bVar3) != 25) || Function_294(bVar3) != 23) || Function_294(bVar3) != 4294967295)
									{
										Function_293(iParam3, &bVar3);
										iVar0 = (iVar0 - 1);
									}
								}
							}
						}
						bVar1 = Function_296(iParam3, 0);
						if (bVar1 > 5)
						{
							Function_279(0, 4);
							*uParam0 = 2;
						}
						else if (bVar1 >= 4294967295)
						{
							*uParam2 = TO_FLOAT(bVar1);
							*uParam2 = (*uParam2 / 5.0f);
							if (*uParam2 == fVar8)
							{
								Function_285(0, *uParam2, 1, bVar1, 4294967295, 4294967295, 10);
							}
						}
					}
					break;
				
				case 0x00000002:
					Function_284(iParam3);
					Function_278(0, 1);
					Function_265(20, 1, 0);
					Function_264(0, 4);
					*uParam1 = 4;
					*uParam0 = 0;
					*uParam2 = 0.0f;
					Function_259();
					break;
			}
			break;
		
		case 0x00000004:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(0);
					Function_254(0, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(0), -1.0f, true, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar8 = Function_287(0);
					bVar6 = Function_297(0, 4) != true;
					if (Function_303(73, 0, &bVar3) < 0 || bVar6)
					{
						if (!bVar6)
						{
							Function_288(0, 1, GET_EVENT_TIME(GET_EVENT_FROM_OBJECT(bVar3)), 0);
							Function_258(0, 2, 4294967295);
							Function_258(0, 3, 4294967295);
							Function_258(0, 4, 1);
						}
						bVar1 = Function_298(2, "ANIMAL", iParam3, 1, 0);
						if (bVar1 >= 0)
						{
							iVar0 = 0;
							while (Function_295(iParam3, &iVar0, &bVar3))
							{
								if (IS_OBJECT_VALID(bVar3))
								{
									if (GET_EVENT_TIME(GET_EVENT_FROM_OBJECT(bVar3)) > Function_286(0, 1, 0))
									{
										Function_293(iParam3, &bVar3);
										iVar0 = (iVar0 - 1);
									}
									else if ((Function_294(bVar3) != 24 || Function_294(bVar3) != 25) || Function_294(bVar3) != 23)
									{
										Function_293(iParam3, &bVar3);
										iVar0 = (iVar0 - 1);
									}
									else
									{
										bVar5 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar3)));
										if (IS_ACTOR_VALID(bVar5))
										{
											if (ANIMAL_ACTOR_GET_DOMESTICATION(bVar5) == 0)
											{
												Function_293(iParam3, &bVar3);
												iVar0 = (iVar0 - 1);
											}
											else if (Function_297(0, 2) == 4294967295)
											{
												Function_258(0, 2, ANIMAL_ACTOR_GET_SPECIES(bVar5));
											}
											else if (Function_297(0, 3) == 4294967295)
											{
												Function_258(0, 3, ANIMAL_ACTOR_GET_SPECIES(bVar5));
											}
										}
										else
										{
											Function_293(iParam3, &bVar3);
											iVar0 = (iVar0 - 1);
										}
									}
								}
							}
						}
						if (!IS_PLAYER_DEADEYE(0))
						{
							bVar1 = false;
							bVar6 = false;
							bVar7 = false;
							while (Function_295(iParam3, &iVar0, &bVar3))
							{
								bVar5 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar3)));
								if (ANIMAL_ACTOR_GET_SPECIES(bVar5) == Function_297(0, 2))
								{
									if (bVar6)
									{
										Function_293(iParam3, &bVar3);
										iVar0 = (iVar0 - 1);
									}
									else
									{
										bVar6 = true;
									}
								}
								else if (ANIMAL_ACTOR_GET_SPECIES(bVar5) == Function_297(0, 3))
								{
									if (bVar7)
									{
										Function_293(iParam3, &bVar3);
										iVar0 = (iVar0 - 1);
									}
									else
									{
										bVar7 = true;
									}
								}
							}
							bVar1 = Function_296(iParam3, 0);
							if (bVar1 > 2)
							{
								Function_279(0, 5);
								*uParam0 = 2;
							}
							else
							{
								Function_284(iParam3);
								Function_278(0, 1);
								Function_257(0);
							}
						}
					}
					break;
				
				case 0x00000002:
					if (Global_3375 && !Global_63096)
					{
						Function_284(iParam3);
						Function_278(0, 1);
						Function_265(50, 1, 0);
						Function_59("AM_SS_RW1_help", 0x41200000, 1, 0, 2, 1, 0);
						if (!Function_85(11))
						{
							Function_168(11, 0, 1, 1);
						}
						Function_264(0, 4);
						*uParam1 = 5;
						*uParam0 = 0;
						*uParam2 = 0.0f;
						Function_259();
					}
					break;
			}
			break;
		
		case 0x00000005:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(0);
					Function_254(0, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(0), 0.0f, true, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar8 = Function_287(0);
					bVar1 = Function_302(9, iParam3, 1);
					if (bVar1 >= 0)
					{
						iVar0 = 0;
						while (Function_295(iParam3, &iVar0, &bVar3))
						{
							if (IS_OBJECT_VALID(bVar3))
							{
								bVar5 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar3)));
								if (IS_ACTOR_VALID(bVar5))
								{
									if (IS_ACTOR_DEAD(bVar5))
									{
										Function_293(iParam3, &bVar3);
										iVar0 = (iVar0 - 1);
									}
									else if (GET_LAST_HIT_TIME(bVar5) < (GET_CURRENT_GAME_TIME() - 0,5f))
									{
										Function_293(iParam3, &bVar3);
										iVar0 = (iVar0 - 1);
									}
									else if (DECOR_CHECK_EXIST(bVar3, "DroppedItem"))
									{
										bVar4 = DECOR_GET_OBJECT(bVar3, "DroppedItem");
										if (IS_OBJECT_VALID(bVar4))
										{
											if (GET_OBJECT_TYPE(bVar4) != 17)
											{
												Function_293(iParam3, &bVar3);
												iVar0 = (iVar0 - 1);
											}
										}
										else
										{
											Function_293(iParam3, &bVar3);
											iVar0 = (iVar0 - 1);
										}
									}
									else
									{
										Function_293(iParam3, &bVar3);
										iVar0 = (iVar0 - 1);
									}
								}
							}
						}
					}
					bVar1 = false;
					bVar1 = Function_296(iParam3, 0);
					if (bVar1 > 2)
					{
						Function_279(0, 6);
						*uParam0 = 2;
					}
					else if (bVar1 >= 4294967295)
					{
						*uParam2 = TO_FLOAT(bVar1);
						*uParam2 = (*uParam2 / 2.0f);
						if (*uParam2 == fVar8)
						{
							Function_285(0, *uParam2, 1, bVar1, 4294967295, 4294967295, 10);
						}
					}
					break;
				
				case 0x00000002:
					Function_284(iParam3);
					Function_278(0, 1);
					Function_265(20, 1, 0);
					Function_264(0, 4);
					*uParam1 = 6;
					*uParam0 = 0;
					*uParam2 = 0.0f;
					Function_259();
					break;
			}
			break;
		
		case 0x00000006:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(0);
					Function_254(0, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(0), 0.0f, true, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar8 = Function_287(0);
					if (Function_298(5, "BEAR", iParam3, 1, 1) >= 0)
					{
						while (Function_295(iParam3, &iVar0, &bVar3))
						{
							if (IS_OBJECT_VALID(bVar3))
							{
								if ((Function_294(bVar3) != 24 || Function_294(bVar3) != 25) || Function_294(bVar3) != 23)
								{
									Function_293(iParam3, &bVar3);
									iVar0 = (iVar0 - 1);
								}
								else if (IS_OBJECT_VALID(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar3))))
								{
									bVar5 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar3)));
									if (IS_ACTOR_VALID(bVar5))
									{
										if (GET_LAST_DAMAGE(bVar5) > GET_ACTOR_MAX_HEALTH(bVar5))
										{
											DECOR_SET_BOOL(bVar5, "bearWounded", true);
											Function_293(iParam3, &bVar3);
											iVar0 = (iVar0 - 1);
										}
										else if (DECOR_CHECK_EXIST(bVar5, "bearWounded"))
										{
											Function_293(iParam3, &bVar3);
											iVar0 = (iVar0 - 1);
										}
										else if (DECOR_CHECK_EXIST(bVar5, "ssrank6"))
										{
											if (DECOR_GET_OBJECT(bVar5, "ssrank6") != bVar3)
											{
												Function_293(iParam3, &bVar3);
												iVar0 = (iVar0 - 1);
											}
										}
										else
										{
											DECOR_SET_OBJECT(bVar5, "ssrank6", bVar3);
										}
									}
								}
							}
						}
					}
					bVar1 = Function_296(iParam3, 0);
					if (bVar1 > 3)
					{
						Function_279(0, 7);
						*uParam0 = 2;
					}
					else if (bVar1 >= 4294967295)
					{
						*uParam2 = TO_FLOAT(bVar1);
						*uParam2 = (*uParam2 / 3.0f);
						if (*uParam2 == fVar8)
						{
							Function_285(0, *uParam2, 1, bVar1, 4294967295, 4294967295, 10);
						}
					}
					break;
				
				case 0x00000002:
					Function_284(iParam3);
					Function_278(0, 1);
					Function_265(20, 1, 0);
					Function_264(0, 4);
					*uParam1 = 7;
					*uParam0 = 0;
					*uParam2 = 0.0f;
					Function_259();
					break;
			}
			break;
		
		case 0x00000007:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(0);
					Function_254(0, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(0), 0.0f, true, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar8 = Function_287(0);
					bVar1 = Function_302(9, iParam3, 1);
					if (bVar1 >= 0)
					{
						iVar0 = 0;
						while (Function_295(iParam3, &iVar0, &bVar3))
						{
							if (IS_OBJECT_VALID(bVar3))
							{
								bVar5 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar3)));
								if (IS_ACTOR_VALID(bVar5))
								{
									if (IS_ACTOR_DEAD(bVar5))
									{
										Function_293(iParam3, &bVar3);
										iVar0 = (iVar0 - 1);
									}
									else if (DECOR_CHECK_EXIST(bVar3, "DroppedItem") || DECOR_CHECK_EXIST(bVar3, "DroppedWeapon"))
									{
										if (DECOR_CHECK_EXIST(bVar3, "DroppedItem"))
										{
											bVar4 = DECOR_GET_OBJECT(bVar3, "DroppedItem");
										}
										else if (DECOR_CHECK_EXIST(bVar3, "DroppedWeapon"))
										{
											bVar4 = DECOR_GET_OBJECT(bVar3, "DroppedWeapon");
										}
										if (IS_OBJECT_VALID(bVar4))
										{
											if (GET_OBJECT_TYPE(bVar4) == 17)
											{
												Function_301(0, 1, 1.0f, 1);
											}
											else if (GET_OBJECT_TYPE(bVar4) == 34)
											{
												Function_301(0, 2, 1.0f, 1);
											}
											else
											{
												Function_293(iParam3, &bVar3);
												iVar0 = (iVar0 - 1);
											}
										}
										else
										{
											Function_293(iParam3, &bVar3);
											iVar0 = (iVar0 - 1);
										}
									}
									else
									{
										Function_293(iParam3, &bVar3);
										iVar0 = (iVar0 - 1);
									}
								}
							}
						}
					}
					bVar1 = ROUND(Function_286(0, 1, 1));
					bVar2 = ROUND(Function_286(0, 2, 1));
					if (bVar1 <= 2 && bVar2 <= 2)
					{
						Function_279(0, 8);
						*uParam0 = 2;
					}
					else if (bVar1 < 0 || bVar2 < 0)
					{
						if (bVar1 >= 2)
						{
							bVar1 = 2;
						}
						if (bVar2 >= 2)
						{
							bVar2 = 2;
						}
						*uParam2 = TO_FLOAT((bVar1 + bVar2));
						*uParam2 = (*uParam2 / 4.0f);
						if (*uParam2 == fVar8)
						{
							Function_285(0, *uParam2, 1, bVar1, bVar2, 4294967295, 10);
						}
					}
					break;
				
				case 0x00000002:
					Function_284(iParam3);
					Function_278(0, 1);
					Function_265(20, 1, 0);
					Function_264(0, 4);
					*uParam1 = 8;
					*uParam0 = 0;
					*uParam2 = 0.0f;
					Function_259();
					break;
			}
			break;
		
		case 0x00000008:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_284(iParam3);
					Function_278(0, 1);
					Function_257(0);
					Function_258(0, 1, 4294967295 & 255);
					Function_254(0, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(0), 0.0f, true, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar8 = Function_287(0);
					if (Function_300())
					{
						Function_284(iParam3);
						if (fVar8 < 0.0f)
						{
							Function_285(0, 0.0f, 1, 0, 4294967295, 4294967295, 10);
						}
					}
					else
					{
						bVar1 = Function_298(2, "ANIMAL", iParam3, 1, 0);
						if (bVar1 >= 0)
						{
							iVar0 = 0;
							while (Function_295(iParam3, &iVar0, &bVar3))
							{
								if (IS_OBJECT_VALID(bVar3))
								{
									if (((!Function_294(bVar3) != 24 && !Function_294(bVar3) != 25) && !Function_294(bVar3) != 23) && !Function_294(bVar3) != 22)
									{
										bVar5 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar3)));
										if (IS_ACTOR_VALID(bVar5))
										{
											if (ANIMAL_ACTOR_GET_DOMESTICATION(bVar5) == 0)
											{
												Function_293(iParam3, &bVar3);
												iVar0 = (iVar0 - 1);
											}
										}
									}
									else
									{
										Function_293(iParam3, &bVar3);
										iVar0 = (iVar0 - 1);
									}
								}
							}
						}
						bVar1 = Function_296(iParam3, 0);
						*uParam2 = TO_FLOAT(bVar1);
						*uParam2 = (*uParam2 / 6.0f);
						if (*uParam2 == fVar8)
						{
							Function_285(0, *uParam2, 1, bVar1, 4294967295, 4294967295, 10);
						}
						if (bVar1 > 6)
						{
							Function_279(0, 9);
							*uParam0 = 2;
						}
					}
					break;
				
				case 0x00000002:
					Function_284(iParam3);
					Function_278(0, 1);
					Function_265(20, 1, 0);
					Function_264(0, 4);
					*uParam1 = 9;
					*uParam0 = 0;
					*uParam2 = 0.0f;
					Function_259();
					break;
			}
			break;
		
		case 0x00000009:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_284(iParam3);
					Function_278(0, 1);
					Function_257(0);
					Function_258(0, 1, 4294967295 & 255);
					Function_254(0, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(0), 0.0f, true, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar8 = Function_287(0);
					if (Function_300())
					{
						Function_284(iParam3);
						if (fVar8 < 0.0f)
						{
							Function_285(0, 0.0f, 1, 0, 4294967295, 4294967295, 10);
						}
					}
					else
					{
						bVar1 = Function_302(11, iParam3, 1);
						bVar1 = Function_302(9, iParam3, 1);
						if (bVar1 >= 0)
						{
							iVar0 = 0;
							while (Function_295(iParam3, &iVar0, &bVar3))
							{
								if (IS_OBJECT_VALID(bVar3))
								{
									bVar5 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar3)));
									if (IS_ACTOR_VALID(bVar5))
									{
										if (GET_EVENT_TYPE(GET_EVENT_FROM_OBJECT(bVar3)) == 11)
										{
											bVar9 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar3)));
										}
										if (GET_EVENT_TYPE(GET_EVENT_FROM_OBJECT(bVar3)) == 9)
										{
											if (bVar9 == GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar3))) && DECOR_CHECK_EXIST(bVar3, "DroppedItem"))
											{
												bVar4 = DECOR_GET_OBJECT(bVar3, "DroppedItem");
												if (IS_OBJECT_VALID(bVar4))
												{
													if (GET_OBJECT_TYPE(bVar4) != 34)
													{
														Function_293(iParam3, &bVar3);
														iVar0 = (iVar0 - 1);
													}
												}
												else
												{
													Function_293(iParam3, &bVar3);
													iVar0 = (iVar0 - 1);
												}
											}
											else
											{
												Function_293(iParam3, &bVar3);
												iVar0 = (iVar0 - 1);
											}
										}
									}
								}
							}
						}
						bVar1 = Function_296(iParam3, 0);
						*uParam2 = TO_FLOAT(bVar1);
						*uParam2 = (*uParam2 / 6.0f);
						if (*uParam2 == fVar8)
						{
							Function_285(0, *uParam2, 1, bVar1, 4294967295, 4294967295, 10);
						}
						if (bVar1 > 6)
						{
							*uParam0 = 2;
							Function_279(0, 10);
						}
					}
					break;
				
				case 0x00000002:
					Function_284(iParam3);
					Function_278(0, 1);
					Function_265(50, 1, 0);
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(25))
					{
						AWARD_ACHIEVEMENT(25);
					}
					*uParam1 = 10;
					*uParam0 = 2;
					*uParam2 = 1.0f;
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(0), 1.0f, true, 0);
					Function_249(0);
					Function_259();
					break;
			}
			break;
	}
}

bool Function_300() //Position: 0x15B5B / 88923
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = GET_WEAPON_IN_HAND(Global_34573);
	iVar1 = Function_297(0, 1);
	if (iVar1 & 255 == 255)
	{
		bVar2 = 4294967295;
	}
	else
	{
		bVar2 = iVar1 & 255;
	}
	iVar3 = SHIFT_RIGHT(iVar1, 8) & 255;
	if (bVar0 == 4294967295)
	{
		if (bVar2 != 4294967295)
		{
			bVar4 = FLOOR(ACTOR_GET_WEAPON_AMMO(Global_34573, bVar2));
			if (bVar4 >= iVar3)
			{
				Function_258(0, 1, (SHIFT_LEFT(bVar4, 8) || bVar2));
				return 1;
			}
		}
		return 0;
	}
	bVar4 = FLOOR(ACTOR_GET_WEAPON_AMMO(Global_34573, bVar0));
	if (bVar0 != bVar2)
	{
		Function_258(0, 1, (SHIFT_LEFT(bVar4, 8) || bVar0));
		return 1;
	}
	if (GET_WEAPON_MAX_AMMO(bVar0) != 1.0f)
	{
		return 1;
	}
	if (bVar4 >= iVar3)
	{
		Function_258(0, 1, (SHIFT_LEFT(bVar4, 8) || bVar0));
		if (IS_PLAYER_DEADEYE(0) && !IS_ACTOR_RELOADING(Global_34573))
		{
			return 0;
		}
		return 1;
	}
	if (bVar4 <= iVar3)
	{
		Function_258(0, 1, (SHIFT_LEFT(bVar4, 8) || bVar0));
	}
	return 0;
}

int Function_301(bool bParam0, bool bParam1, float fParam2, bool bParam3) //Position: 0x15C41 / 89153
{
	char* cVar0[16];
	bool bVar4;
	bool bVar5;
	
	if (bParam3)
	{
		if (Function_1() || Global_34165.f_44)
		{
			(*&Global_49399[bParam022] + 36)[bParam1] = ((*&Global_49399[bParam022] + 36)[bParam1] + fParam2);
		}
		else
		{
			(*&Global_49310[bParam022] + 36)[bParam1] = ((*&Global_49310[bParam022] + 36)[bParam1] + fParam2);
		}
		return 1;
	}
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_FLOATSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar5 = Function_241();
	if (IS_LAYOUTREF_VALID(bVar5))
	{
		if (DECOR_CHECK_EXIST(bVar5, &cVar0))
		{
			bVar4 = DECOR_GET_FLOAT(bVar5, &cVar0);
			bVar4 = (bVar4 + fParam2);
			return DECOR_SET_FLOAT(bVar5, &cVar0, bVar4);
		}
	}
	LOG_ERROR("AM_RETRIEVE_FLOAT: failed to retrieve float value from slot");
	return 0;
}

int Function_302(int iParam0, int iParam1, bool bParam2) //Position: 0x15D36 / 89398
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	if (!IS_OBJECTSET_VALID(*iParam1))
	{
		LOG_ERROR("AM_COLLECT_PLAYER_EVENTS_OF_TYPE_ON_ACTORENUM: invalid objectset passed as EventCollection");
		return 4294967295;
	}
	if (!IS_ACTOR_VALID(Function_29()))
	{
		return 4294967295;
	}
	bVar0 = Function_244();
	iVar1 = 0;
	bVar2 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar2))
	{
		if (!IS_OBJECT_IN_OBJECTSET(bVar2, *iParam1))
		{
			if (GET_EVENT_TYPE(GET_EVENT_FROM_OBJECT(bVar2)) == iParam0)
			{
				bVar3 = GET_EVENT_PERPETRATOR(GET_EVENT_FROM_OBJECT(bVar2));
				if (IS_OBJECT_VALID(bVar3))
				{
					if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar3)))
					{
						if (IS_ACTOR_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(bVar3)))
						{
							if (DECOR_CHECK_EXIST(bVar2, "AM_NO_PURGE"))
							{
								bVar4 = DECOR_GET_INT(bVar2, "AM_NO_PURGE");
								bVar4++;
							}
							else
							{
								bVar4 = true;
							}
							DECOR_SET_INT(bVar2, "AM_NO_PURGE", bVar4);
							if (bParam2)
							{
								ADD_OBJECT_TO_OBJECTSET(bVar2, *iParam1);
							}
							iVar1++;
						}
					}
				}
			}
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	return iVar1;
}

int Function_303(int iParam0, bool bParam1, int iParam2) //Position: 0x15E79 / 89721
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	iVar0 = 0;
	*iParam2 = "";
	bVar1 = Function_244();
	bVar2 = START_OBJECT_ITERATOR(bVar1);
	while (IS_OBJECT_VALID(bVar2))
	{
		if (GET_EVENT_TYPE(GET_EVENT_FROM_OBJECT(bVar2)) == iParam0)
		{
			if (bParam1)
			{
				bVar3 = GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar2));
				if (!IS_OBJECT_VALID(bVar3))
				{
					return 4294967295;
				}
			}
			if (GET_EVENT_TIME(GET_EVENT_FROM_OBJECT(bVar2)) < GET_EVENT_TIME(GET_EVENT_FROM_OBJECT(*iParam2)))
			{
				*iParam2 = bVar2;
			}
			iVar0++;
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
	}
	return iVar0;
}

bool Function_304(int iParam0, char* cParam1, var uParam2, bool bParam3) //Position: 0x15EEE / 89838
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	char* cVar5;
	char* cVar6[64];
	char* cVar22[64];
	bool bVar38;
	
	if (!IS_OBJECTSET_VALID(*uParam2))
	{
		LOG_ERROR("AM_COLLECT_EVENTS_OF_TYPE_FROM_PARTIAL_ACTORENUM_ON_PLAYER: invalid objectset passed as EventCollection");
		return 4294967295;
	}
	iVar0 = 0;
	bVar1 = Function_244();
	bVar2 = START_OBJECT_ITERATOR(bVar1);
	while (IS_OBJECT_VALID(bVar2))
	{
		if (!IS_OBJECT_IN_OBJECTSET(bVar2, *uParam2))
		{
			if (GET_EVENT_TYPE(GET_EVENT_FROM_OBJECT(bVar2)) == iParam0)
			{
				bVar3 = GET_EVENT_PERPETRATOR(GET_EVENT_FROM_OBJECT(bVar2));
				bVar4 = GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar2));
				if (GET_OBJECT_TYPE(bVar4) != 15 && GET_OBJECT_TYPE(bVar3) != 15)
				{
					if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar3)) && IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar4)))
					{
						if (IS_ACTOR_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(bVar4)))
						{
							cVar5 = GET_ACTOR_ENUM_STRING(GET_ACTOR_FROM_OBJECT(bVar3));
							strcpy(&cVar6, cVar5, 64);
							STRING_LOWER(&cVar6);
							strcpy(&cVar22, cParam1, 64);
							STRING_LOWER(&cVar22);
							if (STRING_CONTAINS_STRING(&cVar6, &cVar22))
							{
								if (DECOR_CHECK_EXIST(bVar2, "AM_NO_PURGE"))
								{
									bVar38 = DECOR_GET_INT(bVar2, "AM_NO_PURGE");
									bVar38++;
								}
								else
								{
									bVar38 = true;
								}
								DECOR_SET_INT(bVar2, "AM_NO_PURGE", bVar38);
								if (bParam3)
								{
									ADD_OBJECT_TO_OBJECTSET(bVar2, *uParam2);
								}
								iVar0++;
							}
						}
					}
				}
			}
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
	}
	return iVar0;
}

void Function_305(bool bParam0, int iParam1, float fParam2, int iParam3) //Position: 0x16081 / 90241
{
	iParam1 = iParam1;
	fParam2 = fParam2;
	iParam3 = iParam3;
	Function_59(bParam0, fParam2, 1, 0, 2, 1, 0);
}

bool Function_306(bool bParam0) //Position: 0x160A1 / 90273
{
	return DECOR_CHECK_EXIST(bParam0, "nAM_Flying");
}

var Function_307(bool bParam0) //Position: 0x160B8 / 90296
{
	int iVar0;
	bool bVar1;
	char* cVar2[16];
	
	bVar1 = Function_241();
	if (IS_LAYOUTREF_VALID(bVar1))
	{
		strcpy(&cVar2, "nAM_OBJSET", 16);
		straddi(&cVar2, bParam0, 16);
		iVar0 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bVar1, &cVar2));
	}
	return iVar0;
}

bool Function_308(var uParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x160EF / 90351
{
	var uVar0;
	
	if (iParam1 <= *uParam0 || iParam1 > 0)
	{
		return 0;
	}
	if (StackVal || StackVal != 3 != 10)
	{
		return 1;
	}
	if (StackVal != 0)
	{
		if ((*uParam0)[iParam122] <= 10 && (*uParam0)[iParam122] >= 13)
		{
			if ((!bParam2 || (*uParam0)[iParam122] != 10) || (*uParam0)[iParam122] != 12)
			{
				return 1;
			}
		}
	}
	if ((*uParam0)[iParam122] <= 0 && (*uParam0)[iParam122] >= 9)
	{
		if (!bParam3)
		{
			return 1;
		}
	}
	uVar0 = Function_307((*uParam0)[iParam122]);
	switch ((*uParam0)[iParam122])
	{
		case 0x00000000:
			Function_398(uParam0[022] + 4, uParam0[022] + 8, uParam0[022] + 12, &uVar0);
			break;
		
		case 0x00000004:
			Function_393(uParam0[422] + 4, uParam0[422] + 8, uParam0[422] + 12, &uVar0);
			break;
		
		case 0x00000001:
			Function_391(uParam0[122] + 4, uParam0[122] + 8, uParam0[122] + 12, &uVar0);
			break;
		
		case 0x00000005:
			Function_389(uParam0[522] + 4, uParam0[522] + 8, uParam0[522] + 12, &uVar0);
			break;
		
		case 0x00000002:
			Function_387(uParam0[222] + 4, uParam0[222] + 8, uParam0[222] + 12, &uVar0);
			break;
		
		case 0x00000006:
			Function_385(uParam0[622] + 4, uParam0[622] + 8, uParam0[622] + 12, &uVar0);
			break;
		
		case 0x00000003:
			break;
		
		case 0x00000007:
			Function_383(uParam0[722] + 4, uParam0[722] + 8, uParam0[722] + 12, &uVar0);
			break;
		
		case 0x00000008:
			Function_382(uParam0[822] + 4, uParam0[822] + 8, uParam0[822] + 12, &uVar0);
			break;
		
		case 0x00000009:
			Function_368(uParam0[922] + 4, uParam0[922] + 8, uParam0[922] + 12, &uVar0);
			break;
		
		case 0x00000016:
			Function_359(uParam0[2222], 10, 1, 50.0f, 10, 100.0f, 50, 150.0f, 1, 1042, 1043, 1044);
			break;
		
		case 0x00000017:
			Function_359(uParam0[2322], 10, 500, 50.0f, 1000, 100.0f, 5000, 150.0f, 1, 1045, 1046, 1047);
			break;
		
		case 0x00000018:
			Function_359(uParam0[2422], 24, 1000, 50.0f, 2500, 100.0f, 7500, 150.0f, 1, 1051, 1052, 1053);
			break;
		
		case 0x0000000A:
			break;
		
		case 0x0000000B:
			Function_346(uParam0[1122] + 4, uParam0[1122] + 8, uParam0[1122] + 12, &uVar0);
			break;
		
		case 0x0000000C:
			break;
		
		case 0x0000000D:
			Function_328(uParam0[1322] + 4, uParam0[1322] + 8, uParam0[1322] + 12, &uVar0);
			break;
		
		case 0x0000000E:
			Function_309(uParam0[iParam122], 372, 0, 16090, 50.0f, 80450, 100.0f, 160900, 150.0f, 1, 4001);
			break;
		
		case 0x0000000F:
			Function_309(uParam0[iParam122], 373, 0, 48270, 50.0f, 241350, 100.0f, 482700, 150.0f, 1, 4002);
			break;
		
		case 0x00000010:
			Function_309(uParam0[iParam122], 382, 0, 3218, 50.0f, 32180, 100.0f, 321800, 150.0f, 1, 4005);
			break;
		
		case 0x00000011:
			Function_309(uParam0[iParam122], 376, 0, 3218, 50.0f, 40225, 100.0f, 402250, 150.0f, 1, 4003);
			break;
		
		case 0x00000012:
			Function_309(uParam0[iParam122], 130, 0, 25, 50.0f, 50, 100.0f, 100, 150.0f, 1, 4007);
			break;
		
		case 0x00000013:
			Function_309(uParam0[iParam122], 133, 0, 25, 50.0f, 50, 100.0f, 100, 150.0f, 1, 4006);
			break;
		
		case 0x00000015:
			Function_309(uParam0[iParam122], 385, 0, 25, 50.0f, 50, 100.0f, 100, 150.0f, 1, 4008);
			break;
		
		case 0x00000014:
			Function_309(uParam0[iParam122], 379, 0, 25, 50.0f, 50, 100.0f, 100, 150.0f, 1, 4004);
			break;
		
		default:
			LOG_ERROR("UPDATE_AMBIENT_MISSION: Unhandled ambient mission. You probably need to add this new mission.");
			return 0;
			break;
	}
	return 1;
}

void Function_309(var uParam0, int iParam1, int iParam2, int iParam3, float fParam4, int iParam5, float fParam6, int iParam7, float fParam8, int iParam9, int iParam10) //Position: 0x165D6 / 91606
{
	if (Global_83864.f_1264 > iParam2)
	{
		Function_310(uParam0, iParam1, iParam3, fParam4, iParam5, fParam6, iParam7, fParam8, iParam9, iParam10);
	}
}

void Function_310(var uParam0, int iParam1, var uParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, int iParam9) //Position: 0x16601 / 91649
{
	switch (StackVal)
	{
		case 0x00000000:
			switch (StackVal)
			{
				case 0x00000000:
					Function_326(uParam0, iParam1);
					break;
				
				case 0x00000001:
					Function_324(uParam0, iParam1, uParam2);
					break;
				
				case 0x00000002:
					Function_323(uParam0, 1, bParam3, bParam8, 4294967295, 0);
					break;
			}
			break;
		
		case 0x00000001:
			switch (StackVal)
			{
				case 0x00000000:
					Function_320(uParam0, 0.0f, iParam1);
					break;
				
				case 0x00000001:
					Function_324(uParam0, iParam1, iParam4);
					break;
				
				case 0x00000002:
					Function_323(uParam0, 2, bParam5, bParam8, 4294967295, 0);
					break;
			}
			break;
		
		case 0x00000002:
			switch (StackVal)
			{
				case 0x00000000:
					Function_320(uParam0, 0.0f, iParam1);
					break;
				
				case 0x00000001:
					Function_324(uParam0, iParam1, iParam6);
					break;
				
				case 0x00000002:
					Function_311(uParam0, bParam7, iParam9, 0);
					break;
			}
			break;
	}
}

void Function_311(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x166ED / 91885
{
	Function_278(*uParam0, 1);
	uParam0->f_8 = 10;
	uParam0->f_4 = 2;
	uParam0->f_12 = 1.0f;
	SET_JOURNAL_ENTRY_PROGRESS(Function_253(*uParam0), 1.0f, false, 0);
	Function_249(*uParam0);
	if (!IS_STRING_VALID(bParam3))
	{
		bParam3 = "SC_Travel_Icon_128";
	}
	Function_314(&Global_49399[*uParam022] + 16, CEIL(bParam1), bParam3);
	if (iParam2 != 4294967295)
	{
		Function_312(iParam2);
	}
	Function_259();
}

void Function_312(int iParam0) //Position: 0x16760 / 92000
{
	Function_313(iParam0, 1);
	return;
}

void Function_313(int iParam0, bool bParam1) //Position: 0x1676C / 92012
{
	int iVar0;
	
	iVar0 = (iParam0 % 1000);
	if (bParam1)
	{
		Function_123(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_165((iVar0 % 32)));
	}
	else
	{
		Function_92(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_165((iVar0 % 32)));
	}
	return;
}

void Function_314(bool bParam0, bool bParam1, bool bParam2) //Position: 0x167C2 / 92098
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	
	bVar0 = Function_319();
	iVar1 = 0;
	if (DECOR_GET_INT_VERBOSE(bVar0, Function_318(), &iVar1))
	{
		iVar2 = iVar1 & 1023;
	}
	Var3 = { StackVal, StackVal, StackVal, Function_317(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam0));
	Var3 = { StackVal, StackVal, StackVal, Function_316(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam2));
	Var3 = { StackVal, StackVal, StackVal, Function_315(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, bParam1);
	DECOR_SET_INT(bVar0, Function_318(), iVar1 + 1);
	return;
}

struct<16> Function_315(int iParam0) //Position: 0x16834 / 92212
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_X", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_316(int iParam0) //Position: 0x16855 / 92245
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_T", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_317(int iParam0) //Position: 0x16876 / 92278
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_H", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_318() //Position: 0x16897 / 92311
{
	return "CQueue_Count";
}

var Function_319() //Position: 0x168AC / 92332
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_320(var uParam0, float fParam1, int iParam2) //Position: 0x168DB / 92379
{
	Function_257(*uParam0);
	Function_254(*uParam0, 0);
	SET_JOURNAL_ENTRY_PROGRESS(Function_253(*uParam0), fParam1, false, 0);
	if (iParam2 != 4294967295)
	{
		Function_321(*uParam0, 1, iParam2);
	}
	uParam0->f_4 = 1;
	return;
}

void Function_321(int iParam0, int iParam1, int iParam2) //Position: 0x1690F / 92431
{
	Function_288(iParam0, iParam1, (Function_110(iParam2) - Function_322(iParam0, iParam1)), 0);
	return;
}

float Function_322(int iParam0, bool bParam1) //Position: 0x1692B / 92459
{
	if (Function_1() || Global_34165.f_44)
	{
		return (*&Global_49399[iParam022] + 36)[bParam1];
	}
	return (*&Global_49310[iParam022] + 36)[bParam1];
}

void Function_323(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x1695B / 92507
{
	bool bVar0;
	
	if (bParam3)
	{
	}
	if (!IS_STRING_VALID(bParam5))
	{
		bParam5 = "SC_Travel_Icon_128";
	}
	memcpy(&bVar0, StackVal, StackVal, StackVal, StackVal, StackVal, Function_251(*uParam0), 4);
	Function_314(&bVar0, CEIL(bParam2), bParam5);
	uParam0->f_8 = iParam1;
	uParam0->f_4 = 0;
	uParam0->f_12 = 0.0f;
	if (iParam4 != 4294967295)
	{
		Function_312(iParam4);
	}
	Function_259();
}

void Function_324(var uParam0, int iParam1, int iParam2) //Position: 0x169BD / 92605
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	
	Function_94();
	bVar0 = Function_325((Function_110(iParam1) - Function_286(*uParam0, 1, 0)), *uParam0, 1);
	if (bVar0 <= IntToFloat(iParam2))
	{
		uParam0->f_4 = 2;
	}
	else
	{
		bVar1 = Function_253(*uParam0);
		fVar2 = (bVar0 / IntToFloat(iParam2));
		if (fVar2 < GET_JOURNAL_ENTRY_PROGRESS(bVar1))
		{
			SET_JOURNAL_ENTRY_PROGRESS(bVar1, fVar2, Function_256(*uParam0, 4), 0);
		}
	}
	return;
}

bool Function_325(float fParam0, int iParam1, bool bParam2) //Position: 0x16A18 / 92696
{
	if (Function_1() || Global_34165.f_44)
	{
		(*&Global_49399[iParam122] + 36)[bParam2] = fParam0;
		return (*&Global_49399[iParam122] + 36)[bParam2];
	}
	(*&Global_49310[iParam122] + 36)[bParam2] = fParam0;
	return (*&Global_49310[iParam122] + 36)[bParam2];
}

void Function_326(var uParam0, int iParam1) //Position: 0x16A66 / 92774
{
	Function_257(*uParam0);
	if (Function_327())
	{
		if (!Function_256(*uParam0, 2))
		{
			if (*uParam0 == 22)
			{
				Function_255(*uParam0, 2);
			}
			Function_254(*uParam0, 0);
			SET_JOURNAL_ENTRY_PROGRESS(Function_253(*uParam0), 0.0f, false, 0);
			if (iParam1 != 4294967295)
			{
				Function_321(*uParam0, 1, iParam1);
			}
		}
		uParam0->f_4 = 1;
	}
	return;
}

bool Function_327() //Position: 0x16AB9 / 92857
{
	if (!HUD_IS_FADING() && !HUD_IS_FADED())
	{
		return 1;
	}
	return 0;
}

void Function_328(var uParam0, var uParam1, var uParam2, int iParam3) //Position: 0x16ACE / 92878
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	bool bVar5;
	
	switch (*uParam1)
	{
		case 0x00000000:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(13);
					if (Function_327() && Global_83864.f_1264 <= 21)
					{
						if (!Function_256(13, 2))
						{
							Function_254(13, 0);
							Function_255(13, 2);
							SET_JOURNAL_ENTRY_PROGRESS(Function_253(13), 0.0f, false, 0);
						}
						*uParam0 = 1;
					}
					break;
				
				case 0x00000001:
					if (!Function_403() && Global_83864.f_1264 <= 21)
					{
						bVar1 = Function_345(2, iParam3, 1);
					}
					if (bVar1 >= 0)
					{
						iVar0 = (GET_OBJECTSET_SIZE(*iParam3) - bVar1);
						while (Function_295(iParam3, &iVar0, &bVar2))
						{
							if (IS_OBJECT_VALID(bVar2))
							{
								bVar3 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar2)));
								if (IS_ACTOR_VALID(bVar3))
								{
									if ((IS_ACTOR_PLAYER(bVar3) && !IS_ACTOR_LOCAL_PLAYER(bVar3)) && !Function_339(GET_ACTOR_SLOT(bVar3)))
									{
										if (Function_338(&Global_84600, FIRE_FIND_HANDLE_FROM_ATTACHED_ACTOR(bVar3)))
										{
											Function_279(13, 1);
											*uParam0 = 2;
										}
										else
										{
											Function_337(&Global_84600, FIRE_FIND_HANDLE_FROM_ATTACHED_ACTOR(bVar3));
										}
									}
									else
									{
										Function_293(iParam3, &bVar2);
										iVar0 = (iVar0 - 1);
									}
								}
								else
								{
									Function_293(iParam3, &bVar2);
									iVar0 = (iVar0 - 1);
								}
							}
						}
					}
					if (Function_336(&Global_84600))
					{
						Function_284(iParam3);
					}
					break;
				
				case 0x00000002:
					Function_335(&(Global_49399[1322]), 1, 250.0f, 1, 0);
					Function_284(iParam3);
					break;
			}
			break;
		
		case 0x00000001:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_334(&(Global_49399[1322]), 5, 25, 250.0f);
					break;
				
				case 0x00000001:
					if (!Function_403() && Global_83864.f_1264 <= 21)
					{
						bVar1 = Function_345(2, iParam3, 1);
					}
					if (bVar1 >= 0)
					{
						iVar0 = (GET_OBJECTSET_SIZE(*iParam3) - bVar1);
						while (Function_295(iParam3, &iVar0, &bVar2))
						{
							if (IS_OBJECT_VALID(bVar2))
							{
								bVar3 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar2)));
								if (IS_ACTOR_VALID(bVar3))
								{
									if ((IS_ACTOR_PLAYER(bVar3) && !IS_ACTOR_LOCAL_PLAYER(bVar3)) && !Function_339(GET_ACTOR_SLOT(bVar3)))
									{
										if (Function_338(&Global_84600, FIRE_FIND_HANDLE_FROM_ATTACHED_ACTOR(bVar3)))
										{
											bVar5 = true;
										}
										else
										{
											Function_337(&Global_84600, FIRE_FIND_HANDLE_FROM_ATTACHED_ACTOR(bVar3));
										}
									}
									else
									{
										Function_293(iParam3, &bVar2);
										iVar0 = (iVar0 - 1);
									}
								}
								else
								{
									Function_293(iParam3, &bVar2);
									iVar0 = (iVar0 - 1);
								}
							}
						}
					}
					if (bVar5)
					{
						bVar1 = Function_296(iParam3, 13);
						if (bVar1 > 3)
						{
							*uParam0 = 2;
						}
					}
					if (Function_336(&Global_84600))
					{
						Function_284(iParam3);
					}
					break;
				
				case 0x00000002:
					Function_335(&(Global_49399[1322]), 2, 250.0f, 1, 0);
					Function_284(iParam3);
					break;
			}
			break;
		
		case 0x00000002:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_334(&(Global_49399[1322]), 25, 50, 250.0f);
					break;
				
				case 0x00000001:
					fVar4 = Function_287(13);
					if (!Function_403() && Global_83864.f_1264 <= 1)
					{
						bVar1 = Function_302(2, iParam3, 1);
					}
					if (bVar1 >= 0)
					{
						iVar0 = (GET_OBJECTSET_SIZE(*iParam3) - bVar1);
						while (Function_295(iParam3, &iVar0, &bVar2))
						{
							if (IS_OBJECT_VALID(bVar2))
							{
								bVar3 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar2)));
								if (IS_ACTOR_VALID(bVar3))
								{
									if (!IS_ACTOR_PLAYER(bVar3) || IS_ACTOR_LOCAL_PLAYER(bVar3))
									{
										Function_293(iParam3, &bVar2);
										iVar0 = (iVar0 - 1);
									}
									else if (!Function_294(bVar2) != 23)
									{
										Function_293(iParam3, &bVar2);
										iVar0 = (iVar0 - 1);
									}
									else if (!Function_330(GET_ACTOR_SLOT(bVar3), 1, 1))
									{
										Function_293(iParam3, &bVar2);
										iVar0 = (iVar0 - 1);
									}
								}
								else
								{
									Function_293(iParam3, &bVar2);
									iVar0 = (iVar0 - 1);
								}
							}
						}
					}
					bVar1 = Function_296(iParam3, 13);
					if (bVar1 <= 1 && Function_297(13, 1) == 1)
					{
						Function_258(13, 1, 1);
					}
					else if (bVar1 >= 4294967295)
					{
						if (bVar1 >= 0)
						{
							*uParam2 = (TO_FLOAT(bVar1) / 1.0f);
							if (*uParam2 == fVar4)
							{
								SET_JOURNAL_ENTRY_PROGRESS(Function_253(13), *uParam2, false, 0);
							}
						}
					}
					if (Function_297(13, 1) == 1)
					{
						*uParam0 = 2;
					}
					break;
				
				case 0x00000002:
					Function_329(&(Global_49399[1322]), 250.0f, 0);
					Function_284(iParam3);
					SET_WEAPON_GOLD(Function_29(), 23, true);
					Global_83823[23] = 1;
					Function_312(2011);
					break;
			}
			break;
	}
}

void Function_329(var uParam0, bool bParam1, bool bParam2) //Position: 0x16EE8 / 93928
{
	Function_278(*uParam0, 1);
	uParam0->f_8 = 10;
	uParam0->f_4 = 2;
	uParam0->f_12 = 1.0f;
	SET_JOURNAL_ENTRY_PROGRESS(Function_253(*uParam0), 1.0f, false, 0);
	Function_249(*uParam0);
	if (!IS_STRING_VALID(bParam2))
	{
		bParam2 = "challenge_01_128";
	}
	Function_314(&Global_49399[*uParam022] + 16, CEIL(bParam1), bParam2);
	Function_259();
	return;
}

bool Function_330(bool bParam0, int iParam1, bool bParam2) //Position: 0x16F4C / 94028
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_333(iParam1, bParam2);
	}
	if (!Function_332(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_331(iParam1), 64);
		stradd(&cVar0, " bit from bad slot ", 64);
		stradd(&cVar0, I2STR(bParam0), 64);
	}
	iVar16 = (Global_76943[bParam096].f_128 && iParam1);
	if (bParam2)
	{
		return iVar16 != iParam1;
	}
	return iVar16 == 0;
}

var Function_331(int iParam0) //Position: 0x16FCD / 94157
{
	switch (iParam0)
	{
		case 0x00000001:
			return "HAD_FLAG";
			break;
		
		case 0x00100000:
			return "IN_AIR";
			break;
		
		case 0x00200000:
			return "MOUNTED";
			break;
		
		case 0x00400000:
			return "KILLED BY BLINDFIRE";
			break;
		
		case 0x00800000:
			return "KILLED IN COVER";
			break;
	}
	return "UNKNOWN";
}

bool Function_332(bool bParam0) //Position: 0x1705C / 94300
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

var Function_333(int iParam0, bool bParam1) //Position: 0x170FD / 94461
{
	int iVar0;
	
	iVar0 = (Global_78480.f_128 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

void Function_334(var uParam0, bool bParam1, bool bParam2, float fParam3) //Position: 0x1711D / 94493
{
	Function_257(*uParam0);
	Function_254(*uParam0, 0);
	if (bParam2 != 0)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Function_253(*uParam0), (TO_FLOAT(bParam1) / TO_FLOAT(bParam2)), false, 0);
	}
	else
	{
		LOG_ERROR("Divide by zero attempt in MP_WEAPON_CHALLENGE_LEVEL_START.... ya thats bad bail out");
		SET_JOURNAL_ENTRY_PROGRESS(Function_253(*uParam0), 0.0f, false, 0);
	}
	if (fParam3 != 0.0f)
	{
	}
	uParam0->f_4 = 1;
}

void Function_335(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x171C2 / 94658
{
	bool bVar0;
	
	Function_278(*uParam0, bParam3);
	if (!IS_STRING_VALID(bParam4))
	{
		bParam4 = "challenge_01_128";
	}
	memcpy(&bVar0, StackVal, StackVal, StackVal, StackVal, StackVal, Function_251(*uParam0), 4);
	Function_314(&bVar0, CEIL(bParam2), bParam4);
	uParam0->f_8 = iParam1;
	uParam0->f_4 = 0;
	uParam0->f_12 = 0.0f;
	Function_264(*uParam0, 4);
	Function_259();
}

bool Function_336(int iParam0) //Position: 0x17221 / 94753
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 10)
	{
		if (FIRE_IS_HANDLE_VALID((*iParam0)[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void Function_337(var uParam0, int iParam1) //Position: 0x17249 / 94793
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 10)
	{
		if (!FIRE_IS_HANDLE_VALID((*uParam0)[iVar0]))
		{
			(*uParam0)[iVar0] = iParam1;
			return;
		}
		iVar0++;
	}
	return;
}

bool Function_338(var uParam0, int iParam1) //Position: 0x17278 / 94840
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 10)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return 1;
		}
		if (FIRE_IS_HANDLE_VALID((*uParam0)[iVar0]))
		{
		}
		iVar0++;
	}
	return 0;
}

bool Function_339(bool bParam0) //Position: 0x172AE / 94894
{
	if (Function_341(bParam0, 1, 0) != 4294967295 && Function_340() != 4294967295)
	{
		return 0;
	}
	return Function_341(bParam0, 1, 0) != Function_340();
}

int Function_340() //Position: 0x172D6 / 94934
{
	if (!NET_IS_IN_SESSION())
	{
		return 4294967295;
	}
	return Function_341(GET_LOCAL_SLOT(), 1, 0);
}

int Function_341(bool bParam0, bool bParam1, bool bParam2) //Position: 0x172ED / 94957
{
	if (bParam1)
	{
		if (!IS_SLOT_VALID(bParam0))
		{
			return 4294967295;
		}
		if (bParam2)
		{
			if (Function_332(bParam0))
			{
				if (!Function_342(bParam0, 2048, 1))
				{
					return 4294967295;
				}
			}
			return 4294967295;
		}
	}
	return (*&Global_78578 + 20)[bParam0];
}

bool Function_342(bool bParam0, int iParam1, bool bParam2) //Position: 0x17331 / 95025
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_344(iParam1, bParam2);
	}
	if (!Function_332(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_343(iParam1), 64);
		stradd(&cVar0, " bit from bad slot ", 64);
		stradd(&cVar0, I2STR(bParam0), 64);
	}
	iVar16 = (Global_76943[bParam096].f_124 && iParam1);
	if (bParam2)
	{
		return iVar16 != iParam1;
	}
	return iVar16 == 0;
}

var Function_343(int iParam0) //Position: 0x173B2 / 95154
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
	}
	return "UNKNOWN";
}

bool Function_344(int iParam0, bool bParam1) //Position: 0x1763B / 95803
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

int Function_345(int iParam0, int iParam1, bool bParam2) //Position: 0x1765B / 95835
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	if (!IS_OBJECTSET_VALID(*iParam1))
	{
		LOG_ERROR("AM_COLLECT_PLAYER_EVENTS_OF_TYPE_ON_ACTORENUM: invalid objectset passed as EventCollection");
		return 4294967295;
	}
	if (!IS_ACTOR_VALID(Function_29()))
	{
		return 4294967295;
	}
	bVar0 = Function_244();
	iVar1 = 0;
	bVar2 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar2))
	{
		if (!IS_OBJECT_IN_OBJECTSET(bVar2, *iParam1))
		{
			if (GET_EVENT_TYPE(GET_EVENT_FROM_OBJECT(bVar2)) == iParam0)
			{
				bVar3 = GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar2));
				bVar4 = GET_ACTOR_FROM_OBJECT(bVar3);
				if (IS_ACTOR_VALID(bVar4))
				{
					if (FIRE_IS_HANDLE_VALID(FIRE_FIND_HANDLE_FROM_ATTACHED_ACTOR(bVar4)))
					{
						bVar5 = FIRE_GET_OWNER(FIRE_FIND_HANDLE_FROM_ATTACHED_ACTOR(bVar4));
						if (IS_ACTOR_VALID(bVar5))
						{
							if (IS_ACTOR_LOCAL_PLAYER(bVar5))
							{
								if (DECOR_CHECK_EXIST(bVar2, "AM_NO_PURGE"))
								{
									bVar6 = DECOR_GET_INT(bVar2, "AM_NO_PURGE");
									bVar6++;
								}
								else
								{
									bVar6 = true;
								}
								DECOR_SET_INT(bVar2, "AM_NO_PURGE", bVar6);
								if (bParam2)
								{
									ADD_OBJECT_TO_OBJECTSET(bVar2, *iParam1);
								}
								iVar1++;
							}
						}
					}
				}
			}
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	return iVar1;
}

void Function_346(var uParam0, var uParam1, var uParam2, int iParam3) //Position: 0x177BA / 96186
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	float fVar5;
	
	switch (*uParam1)
	{
		case 0x00000000:
			switch (*uParam0)
			{
				case 0x00000000:
					if (Function_327() && Global_83864.f_1264 <= 14)
					{
						if (!Function_256(11, 2))
						{
							Function_254(11, 0);
							Function_255(11, 2);
							SET_JOURNAL_ENTRY_PROGRESS(Function_253(11), 0.0f, false, 0);
						}
						*uParam0 = 1;
					}
					break;
				
				case 0x00000001:
					fVar5 = Function_287(11);
					iVar2 = Function_296(iParam3, 11);
					if (!Function_403() && Global_83864.f_1264 <= 14)
					{
						bVar1 = Function_302(2, iParam3, 1);
					}
					if (bVar1 >= 0)
					{
						iVar0 = (GET_OBJECTSET_SIZE(*iParam3) - bVar1);
						while (Function_295(iParam3, &iVar0, &bVar3))
						{
							if (IS_OBJECT_VALID(bVar3))
							{
								bVar4 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar3)));
								if (IS_ACTOR_VALID(bVar4))
								{
									if ((IS_ACTOR_PLAYER(bVar4) && !IS_ACTOR_LOCAL_PLAYER(bVar4)) && !Function_339(GET_ACTOR_SLOT(bVar4)))
									{
										if (!Function_294(bVar3) != 24)
										{
											Function_293(iParam3, &bVar3);
											iVar0 = (iVar0 - 1);
										}
									}
									else
									{
										Function_293(iParam3, &bVar3);
										iVar0 = (iVar0 - 1);
									}
								}
								else
								{
									Function_293(iParam3, &bVar3);
									iVar0 = (iVar0 - 1);
								}
							}
						}
					}
					bVar1 = Function_296(iParam3, 11);
					if ((bVar1 - iVar2) >= 0)
					{
						Function_356(&iLocal_0, 2.0f);
					}
					if (Function_355(&iLocal_0))
					{
						if (Function_347(&iLocal_0))
						{
							Function_284(iParam3);
							Function_278(11, 1);
							Function_257(11);
							*uParam2 = 0.0f;
							SET_JOURNAL_ENTRY_PROGRESS(Function_253(11), 0.0f, false, 0);
						}
						else if (bVar1 > 2)
						{
							*uParam0 = 2;
						}
						else if (bVar1 >= 4294967295)
						{
							*uParam2 = (TO_FLOAT(bVar1) / 2.0f);
							if (*uParam2 == fVar5)
							{
								SET_JOURNAL_ENTRY_PROGRESS(Function_253(11), *uParam2, false, 0);
							}
						}
					}
					break;
				
				case 0x00000002:
					Function_335(&(Global_49399[1122]), 1, 250.0f, 1, 0);
					Function_284(iParam3);
					break;
			}
			break;
		
		case 0x00000001:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_334(&(Global_49399[1122]), 0, 3, 250.0f);
					break;
				
				case 0x00000001:
					fVar5 = Function_287(11);
					iVar2 = Function_296(iParam3, 11);
					if (!Function_403() && Global_83864.f_1264 <= 14)
					{
						bVar1 = Function_302(2, iParam3, 1);
					}
					if (bVar1 >= 0)
					{
						iVar0 = (GET_OBJECTSET_SIZE(*iParam3) - bVar1);
						while (Function_295(iParam3, &iVar0, &bVar3))
						{
							if (IS_OBJECT_VALID(bVar3))
							{
								bVar4 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar3)));
								if (IS_ACTOR_VALID(bVar4))
								{
									if ((IS_ACTOR_PLAYER(bVar4) && !IS_ACTOR_LOCAL_PLAYER(bVar4)) && !Function_339(GET_ACTOR_SLOT(bVar4)))
									{
										if (!Function_294(bVar3) != 24)
										{
											Function_293(iParam3, &bVar3);
											iVar0 = (iVar0 - 1);
										}
									}
									else
									{
										Function_293(iParam3, &bVar3);
										iVar0 = (iVar0 - 1);
									}
								}
								else
								{
									Function_293(iParam3, &bVar3);
									iVar0 = (iVar0 - 1);
								}
							}
						}
					}
					bVar1 = Function_296(iParam3, 11);
					if ((bVar1 - iVar2) >= 0)
					{
						Function_356(&iLocal_0, 2.0f);
					}
					if (Function_355(&iLocal_0))
					{
						if (Function_347(&iLocal_0))
						{
							Function_284(iParam3);
							Function_278(11, 1);
							Function_257(11);
							*uParam2 = 0.0f;
						}
						else if (bVar1 > 3)
						{
							*uParam0 = 2;
						}
						else if (bVar1 >= 4294967295)
						{
							*uParam2 = (TO_FLOAT(bVar1) / 3.0f);
							if (*uParam2 == fVar5)
							{
								SET_JOURNAL_ENTRY_PROGRESS(Function_253(11), *uParam2, false, 0);
							}
						}
					}
					else if (bVar1 >= 4294967295)
					{
						*uParam2 = (TO_FLOAT(bVar1) / 3.0f);
						if (*uParam2 == fVar5)
						{
							SET_JOURNAL_ENTRY_PROGRESS(Function_253(11), *uParam2, false, 0);
						}
					}
					break;
				
				case 0x00000002:
					Function_335(&(Global_49399[1122]), 2, 250.0f, 1, 0);
					Function_284(iParam3);
					break;
			}
			break;
		
		case 0x00000002:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_334(&(Global_49399[1122]), 0, 1, 250.0f);
					break;
				
				case 0x00000001:
					fVar5 = Function_287(11);
					if (!Function_403() && Global_83864.f_1264 <= 14)
					{
						bVar1 = Function_302(2, iParam3, 1);
					}
					if (bVar1 >= 0)
					{
						iVar0 = (GET_OBJECTSET_SIZE(*iParam3) - bVar1);
						while (Function_295(iParam3, &iVar0, &bVar3))
						{
							if (IS_OBJECT_VALID(bVar3))
							{
								bVar4 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar3)));
								if (IS_ACTOR_VALID(bVar4))
								{
									if (!IS_ACTOR_PLAYER(bVar4) || IS_ACTOR_LOCAL_PLAYER(bVar4))
									{
										Function_293(iParam3, &bVar3);
										iVar0 = (iVar0 - 1);
									}
									else if (!Function_294(bVar3) != 24)
									{
										Function_293(iParam3, &bVar3);
										iVar0 = (iVar0 - 1);
									}
									else if (!Function_330(GET_ACTOR_SLOT(bVar4), 1, 1))
									{
										Function_293(iParam3, &bVar3);
										iVar0 = (iVar0 - 1);
									}
								}
								else
								{
									Function_293(iParam3, &bVar3);
									iVar0 = (iVar0 - 1);
								}
							}
						}
					}
					bVar1 = Function_296(iParam3, 11);
					if (bVar1 <= 1 && Function_297(11, 1) == 1)
					{
						Function_258(11, 1, 1);
					}
					else if (bVar1 >= 4294967295)
					{
						if (bVar1 >= 0)
						{
							*uParam2 = (TO_FLOAT(bVar1) / 1.0f);
							if (*uParam2 == fVar5)
							{
								SET_JOURNAL_ENTRY_PROGRESS(Function_253(11), *uParam2, false, 0);
							}
						}
					}
					if (Function_297(11, 1) == 1)
					{
						*uParam0 = 2;
					}
					break;
				
				case 0x00000002:
					Function_329(&(Global_49399[1122]), 250.0f, 0);
					SET_WEAPON_GOLD(Function_29(), 24, true);
					Global_83823[24] = 1;
					Function_312(2007);
					break;
			}
			break;
	}
}

bool Function_347(int iParam0) //Position: 0x17CB5 / 97461
{
	if (Function_349(iParam0))
	{
		Function_348(iParam0);
		return 1;
	}
	return 0;
}

void Function_348(int iParam0) //Position: 0x17CCB / 97483
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

bool Function_349(int iParam0) //Position: 0x17CDF / 97503
{
	if (Function_355(iParam0))
	{
		if (Function_350(iParam0) >= 0.0f)
		{
			return 1;
		}
	}
	return 0;
}

float Function_350(int iParam0) //Position: 0x17CFA / 97530
{
	return -Function_351(iParam0);
}

float Function_351(int iParam0) //Position: 0x17D06 / 97542
{
	if (Function_355(iParam0))
	{
		if (Function_354(iParam0))
		{
			return StackVal;
		}
		Function_352();
		return (StackVal - NET_GET_NET_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of NETTIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of NETTIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

void Function_352() //Position: 0x17DD7 / 97751
{
	if (!Function_353())
	{
	}
	return;
}

bool Function_353() //Position: 0x17DE4 / 97764
{
	return NET_IS_IN_SESSION();
}

bool Function_354(int iParam0) //Position: 0x17DED / 97773
{
	return Function_9(*iParam0, 2);
}

bool Function_355(int iParam0) //Position: 0x17DFA / 97786
{
	return Function_9(*iParam0, 1);
}

void Function_356(var uParam0, float fParam1) //Position: 0x17E07 / 97799
{
	Function_357(uParam0, -fParam1);
	return;
}

void Function_357(var uParam0, float fParam1) //Position: 0x17E15 / 97813
{
	Function_352();
	Function_358(uParam0, (NET_GET_NET_TIME() - fParam1));
	return;
}

void Function_358(int iParam0, bool bParam1) //Position: 0x17E29 / 97833
{
	iParam0->f_4 = bParam1;
	Function_123(iParam0, 1);
	Function_92(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

void Function_359(var uParam0, int iParam1, int iParam2, float fParam3, int iParam4, float fParam5, int iParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11) //Position: 0x17E46 / 97862
{
	if (Global_83864.f_1264 > iParam1)
	{
		Function_360(uParam0, iParam2, fParam3, iParam4, fParam5, iParam6, fParam7, iParam8 != 1, iParam9, iParam10, iParam11);
	}
}

void Function_360(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, var uParam6, bool bParam7, var uParam8, int iParam9, var uParam10) //Position: 0x17E75 / 97909
{
	switch (StackVal)
	{
		case 0x00000000:
			switch (StackVal)
			{
				case 0x00000000:
					Function_326(uParam0, 4294967295);
					break;
				
				case 0x00000001:
					if (*uParam0 == 22)
					{
						Function_367(uParam0, uParam1);
					}
					else if (*uParam0 == 23)
					{
						Function_366(uParam0, uParam1);
					}
					else if (*uParam0 == 24)
					{
						Function_362(uParam0, uParam1);
					}
					break;
				
				case 0x00000002:
					Function_323(uParam0, 1, uParam2, bParam7, uParam8, Function_361());
					break;
			}
			break;
		
		case 0x00000001:
			switch (StackVal)
			{
				case 0x00000000:
					Function_320(uParam0, 0, 4294967295);
					break;
				
				case 0x00000001:
					if (*uParam0 == 22)
					{
						Function_367(uParam0, bParam3);
					}
					else if (*uParam0 == 23)
					{
						Function_366(uParam0, bParam3);
					}
					else if (*uParam0 == 24)
					{
						Function_362(uParam0, bParam3);
					}
					break;
				
				case 0x00000002:
					Function_323(uParam0, 2, bParam4, bParam7, iParam9, Function_361());
					break;
			}
			break;
		
		case 0x00000002:
			switch (StackVal)
			{
				case 0x00000000:
					Function_320(uParam0, 0, 4294967295);
					break;
				
				case 0x00000001:
					if (*uParam0 == 22)
					{
						Function_367(uParam0, bParam5);
					}
					else if (*uParam0 == 23)
					{
						Function_366(uParam0, bParam5);
					}
					else if (*uParam0 == 24)
					{
						Function_362(uParam0, bParam5);
					}
					break;
				
				case 0x00000002:
					Function_311(uParam0, uParam6, uParam10, Function_361());
					break;
			}
			break;
	}
}

bool Function_361() //Position: 0x17FE4 / 98276
{
	return "challenge_04_128";
}

void Function_362(var uParam0, bool bParam1) //Position: 0x18000 / 98304
{
	bool bVar0;
	bool bVar1;
	
	if (NET_GET_POSSE_COUNT() > 2)
	{
		if (Function_365() > bParam1)
		{
			bVar1 = false;
			bVar0 = false;
			while (bVar0 <= 16)
			{
				if (!bVar1)
				{
					if (IS_SLOT_VALID(bVar0))
					{
						if (Function_364(GET_LOCAL_SLOT(), bVar0))
						{
							if (!Function_363(bVar0) < bParam1)
							{
								bVar1 = true;
							}
						}
					}
				}
				bVar0++;
			}
			if (!bVar1)
			{
				uParam0->f_4 = 2;
			}
		}
	}
	return;
}

int Function_363(bool bParam0) //Position: 0x1805E / 98398
{
	if (!Function_1())
	{
		return 4294967295;
	}
	if (!IS_SLOT_VALID(bParam0))
	{
		return 4294967295;
	}
	return Global_76943[bParam096].f_108;
}

bool Function_364(bool bParam0, bool bParam1) //Position: 0x18082 / 98434
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

int Function_365() //Position: 0x180A6 / 98470
{
	return Global_78480.f_108;
}

void Function_366(var uParam0, bool bParam1) //Position: 0x180B2 / 98482
{
	bool bVar0;
	float fVar1;
	
	if (Function_365() > bParam1)
	{
		uParam0->f_4 = 2;
	}
	else
	{
		bVar0 = Function_253(*uParam0);
		fVar1 = (TO_FLOAT(Function_365()) / TO_FLOAT(bParam1));
		if (fVar1 == GET_JOURNAL_ENTRY_PROGRESS(bVar0))
		{
			SET_JOURNAL_ENTRY_PROGRESS(bVar0, fVar1, false, 0);
		}
	}
	return;
}

void Function_367(var uParam0, bool bParam1) //Position: 0x180F2 / 98546
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	
	bVar0 = uParam0->f_28;
	if (bVar0 <= 0)
	{
		bVar0 = false;
	}
	if (bVar0 <= bParam1)
	{
		if (Function_344(131072, 1))
		{
			if (Function_297(*uParam0, 2) != 1)
			{
				bVar0++;
				uParam0->f_28++;
				Function_258(*uParam0, 1, bVar0);
				Function_258(*uParam0, 2, 1);
			}
		}
		else if (Function_297(*uParam0, 2) == 1)
		{
			Function_258(*uParam0, 2, 0);
		}
		if (bVar0 > bParam1)
		{
			uParam0->f_4 = 2;
		}
		else
		{
			bVar1 = Function_253(*uParam0);
			fVar2 = (TO_FLOAT(bVar0) / TO_FLOAT(bParam1));
			if (fVar2 == GET_JOURNAL_ENTRY_PROGRESS(bVar1))
			{
				SET_JOURNAL_ENTRY_PROGRESS(bVar1, fVar2, false, 0);
			}
		}
	}
	return;
}

void Function_368(var uParam0, var uParam1, var uParam2, int iParam3) //Position: 0x18196 / 98710
{
	switch (*uParam1)
	{
		case 0x00000000:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(9);
					if (Global_83864.f_1264 > 40)
					{
						*uParam0 = 1;
					}
					break;
				
				case 0x00000001:
					if (!Function_381(&iLocal_12))
					{
						if (((Global_56688[976][09].f_20 || Global_56688[976][69].f_20) || Global_56688[976][19].f_20) || Global_56688[976][29].f_20)
						{
							Function_379(&iLocal_12);
						}
					}
					else if (Function_376(&iLocal_12, 86400.0f))
					{
						Function_284(iParam3);
						Function_278(9, 1);
						Function_257(9);
						Function_243();
						Function_375(9);
						Function_374(&iLocal_12);
						*uParam2 = 0.0f;
					}
					else
					{
						if (Global_56688[976][09].f_24 && !Function_297(9, 1) != 1)
						{
							Function_258(9, 1, 1);
							*uParam2 = (GET_JOURNAL_ENTRY_PROGRESS(Function_253(9)) + 0,25f);
						}
						if (Global_56688[976][69].f_24 && !Function_297(9, 2) != 1)
						{
							Function_258(9, 2, 1);
							*uParam2 = (GET_JOURNAL_ENTRY_PROGRESS(Function_253(9)) + 0,25f);
						}
						if (Global_56688[976][19].f_24 && !Function_297(9, 3) != 1)
						{
							Function_258(9, 3, 1);
							*uParam2 = (GET_JOURNAL_ENTRY_PROGRESS(Function_253(9)) + 0,25f);
						}
						if (Global_56688[976][29].f_24 && !Function_297(9, 4) != 1)
						{
							Function_258(9, 4, 1);
							*uParam2 = (GET_JOURNAL_ENTRY_PROGRESS(Function_253(9)) + 0,25f);
						}
						if (((Function_297(9, 1) != 1 && Function_297(9, 2) != 1) && Function_297(9, 3) != 1) && Function_297(9, 4) != 1)
						{
							Global_56688[976].f_292 = 1;
							Function_374(&iLocal_12);
						}
						if (Global_56688[976].f_300 && Global_56688[976].f_292)
						{
							*uParam0 = 2;
						}
					}
					if (*uParam2 == GET_JOURNAL_ENTRY_PROGRESS(Function_253(9)))
					{
						SET_JOURNAL_ENTRY_PROGRESS(Function_253(9), *uParam2, false, 0);
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_372(*iParam3, 9, uParam1, 1, uParam0, 0, 1061, 250.0f, Function_373());
					Function_375(9);
					break;
			}
			break;
		
		case 0x00000001:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(9);
					Function_254(9, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(9), 0.0f, false, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					if (!Function_381(&iLocal_12))
					{
						if (((Global_56688[976][09].f_20 || Global_56688[976][69].f_20) || Global_56688[976][19].f_20) || Global_56688[976][29].f_20)
						{
							Function_379(&iLocal_12);
						}
					}
					else if (Function_376(&iLocal_12, 129600.0f))
					{
						Function_284(iParam3);
						Function_278(9, 1);
						Function_257(9);
						Function_243();
						Function_375(9);
						*uParam2 = 0.0f;
						Function_374(&iLocal_12);
					}
					else
					{
						if ((StackVal && Global_56688[976][09].f_24 != 0) && !Function_297(9, 1) != 1)
						{
							Function_371(0, 9);
							Function_258(9, 1, 1);
							*uParam2 = (GET_JOURNAL_ENTRY_PROGRESS(Function_253(9)) + 0,25f);
						}
						if ((StackVal && Global_56688[976][69].f_24 != 0) && !Function_297(9, 2) != 1)
						{
							Function_371(6, 9);
							Function_258(9, 2, 1);
							*uParam2 = (GET_JOURNAL_ENTRY_PROGRESS(Function_253(9)) + 0,25f);
						}
						if ((StackVal && Global_56688[976][19].f_24 != 0) && !Function_297(9, 3) != 1)
						{
							Function_371(1, 9);
							Function_258(9, 3, 1);
							*uParam2 = (GET_JOURNAL_ENTRY_PROGRESS(Function_253(9)) + 0,25f);
						}
						if ((StackVal && Global_56688[976][29].f_24 != 0) && !Function_297(9, 4) != 1)
						{
							Function_371(6, 9);
							Function_258(9, 4, 1);
							*uParam2 = (GET_JOURNAL_ENTRY_PROGRESS(Function_253(9)) + 0,25f);
						}
						if (((Function_297(9, 1) != 1 && Function_297(9, 2) != 1) && Function_297(9, 3) != 1) && Function_297(9, 4) != 1)
						{
							Global_56688[976].f_292 = 1;
						}
						if (Global_56688[976].f_300 && Global_56688[976].f_292)
						{
							*uParam0 = 2;
						}
					}
					if (*uParam2 == GET_JOURNAL_ENTRY_PROGRESS(Function_253(9)))
					{
						SET_JOURNAL_ENTRY_PROGRESS(Function_253(9), *uParam2, false, 0);
					}
					break;
				
				case 0x00000002:
					if (Function_370())
					{
						*uParam2 = 0.0f;
						Function_372(*iParam3, 9, uParam1, 2, uParam0, 0, 1063, 250.0f, Function_373());
						Function_375(9);
					}
					else
					{
						*uParam2 = 1.0f;
						Function_369(*iParam3, 9, uParam1, uParam0, 1063, 250.0f, Function_373());
						Function_375(9);
					}
					break;
			}
			break;
		
		case 0x00000002:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(9);
					Function_254(9, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(9), 0.0f, false, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					if (!Function_381(&iLocal_12))
					{
						if (((Global_56688[976][39].f_20 || Global_56688[976][79].f_20) || Global_56688[976][49].f_20) || Global_56688[976][59].f_20)
						{
							Function_379(&iLocal_12);
						}
					}
					else if (Function_376(&iLocal_12, 86400.0f))
					{
						Function_284(iParam3);
						Function_278(9, 1);
						Function_257(9);
						Function_243();
						Function_375(9);
						*uParam2 = 0.0f;
						Function_374(&iLocal_12);
					}
					else
					{
						if (Global_56688[976][39].f_24 && !Function_297(9, 1) != 1)
						{
							Function_258(9, 1, 1);
							*uParam2 = (GET_JOURNAL_ENTRY_PROGRESS(Function_253(9)) + 0,25f);
						}
						if (Global_56688[976][79].f_24 && !Function_297(9, 2) != 1)
						{
							Function_258(9, 2, 1);
							*uParam2 = (GET_JOURNAL_ENTRY_PROGRESS(Function_253(9)) + 0,25f);
						}
						if (Global_56688[976][49].f_24 && !Function_297(9, 3) != 1)
						{
							Function_258(9, 3, 1);
							*uParam2 = (GET_JOURNAL_ENTRY_PROGRESS(Function_253(9)) + 0,25f);
						}
						if (Global_56688[976][59].f_24 && !Function_297(9, 4) != 1)
						{
							Function_258(9, 4, 1);
							*uParam2 = (GET_JOURNAL_ENTRY_PROGRESS(Function_253(9)) + 0,25f);
						}
						if (((Function_297(9, 1) != 1 && Function_297(9, 2) != 1) && Function_297(9, 3) != 1) && Function_297(9, 4) != 1)
						{
							Global_56688[976].f_292 = 1;
							Function_374(&iLocal_12);
						}
						if (Global_56688[976].f_300 && Global_56688[976].f_292)
						{
							*uParam0 = 2;
						}
					}
					if (*uParam2 == GET_JOURNAL_ENTRY_PROGRESS(Function_253(9)))
					{
						SET_JOURNAL_ENTRY_PROGRESS(Function_253(9), *uParam2, false, 0);
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_372(*iParam3, 9, uParam1, 3, uParam0, 0, 1062, 250.0f, Function_373());
					Function_375(9);
					break;
			}
			break;
		
		case 0x00000003:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(9);
					Function_254(9, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(9), 0.0f, false, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					if (!Function_381(&iLocal_12))
					{
						if (((Global_56688[976][39].f_20 || Global_56688[976][79].f_20) || Global_56688[976][49].f_20) || Global_56688[976][59].f_20)
						{
							Function_379(&iLocal_12);
						}
					}
					else
					{
						if (Function_376(&iLocal_12, 129600.0f))
						{
							Function_284(iParam3);
							Function_278(9, 1);
							Function_257(9);
							Function_243();
							Function_375(9);
							*uParam2 = 0.0f;
							Function_374(&iLocal_12);
						}
						else
						{
							if ((StackVal && Global_56688[976][39].f_24 != 0) && !Function_297(9, 1) != 1)
							{
								Function_371(3, 9);
								Function_258(9, 1, 1);
								*uParam2 = (GET_JOURNAL_ENTRY_PROGRESS(Function_253(9)) + 0,25f);
							}
							if ((StackVal && Global_56688[976][79].f_24 != 0) && !Function_297(9, 2) != 1)
							{
								Function_371(7, 9);
								Function_258(9, 2, 1);
								*uParam2 = (GET_JOURNAL_ENTRY_PROGRESS(Function_253(9)) + 0,25f);
							}
							if ((StackVal && Global_56688[976][49].f_24 != 0) && !Function_297(9, 3) != 1)
							{
								Function_371(4, 9);
								Function_258(9, 3, 1);
								*uParam2 = (GET_JOURNAL_ENTRY_PROGRESS(Function_253(9)) + 0,25f);
							}
							if ((StackVal && Global_56688[976][59].f_24 != 0) && !Function_297(9, 4) != 1)
							{
								Function_371(5, 9);
								Function_258(9, 4, 1);
								*uParam2 = (GET_JOURNAL_ENTRY_PROGRESS(Function_253(9)) + 0,25f);
							}
							if (((Function_297(9, 1) != 1 && Function_297(9, 2) != 1) && Function_297(9, 3) != 1) && Function_297(9, 4) != 1)
							{
								Global_56688[976].f_292 = 1;
							}
							if (Global_56688[976].f_300 && Global_56688[976].f_292)
							{
								*uParam0 = 2;
							}
						}
						if (*uParam2 == GET_JOURNAL_ENTRY_PROGRESS(Function_253(9)))
						{
							SET_JOURNAL_ENTRY_PROGRESS(Function_253(9), *uParam2, false, 0);
						}
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_369(*iParam3, 9, uParam1, uParam0, 1064, 250.0f, Function_373());
					Function_375(9);
					break;
			}
			break;
	}
}

void Function_369(int iParam0, bool bParam1, var uParam2, var uParam3, int iParam4, bool bParam5, bool bParam6) //Position: 0x18ABE / 101054
{
	bool bVar0;
	
	Function_284(&iParam0);
	Function_278(bParam1, 1);
	*uParam2 = 10;
	*uParam3 = 2;
	if (iParam4 != 4294967295)
	{
		Function_312(iParam4);
	}
	Function_249(bParam1);
	if (!IS_STRING_VALID(bParam6))
	{
		bParam6 = "challenge_04_128";
	}
	memcpy(&bVar0, StackVal, StackVal, StackVal, StackVal, StackVal, Function_251(bParam1), 4);
	Function_314(&bVar0, CEIL(bParam5), bParam6);
	Function_264(bParam1, 4);
	Function_259();
}

bool Function_370() //Position: 0x18B27 / 101159
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_371(int iParam0, bool bParam1) //Position: 0x18B36 / 101174
{
	Global_56688[bParam176][iParam09] = 4294967294;
	Global_56688[bParam176][iParam09].f_4 = 0.0f;
	Global_56688[bParam176][iParam09].f_8 = 0;
	Global_56688[bParam176][iParam09].f_20 = 0;
	Global_56688[bParam176][iParam09].f_24 = 0;
	return;
}

void Function_372(var uParam0, int iParam1, var uParam2, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7, bool bParam8) //Position: 0x18B82 / 101250
{
	var uVar0;
	
	Function_284(&uParam0);
	Function_278(iParam1, 1);
	SET_JOURNAL_ENTRY_PROGRESS(Function_253(iParam1), 0.0f, false, 0);
	Function_254(iParam1, 0);
	if (!IS_STRING_VALID(bParam8))
	{
		bParam8 = "challenge_04_128";
	}
	memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, Function_251(iParam1), 4);
	Function_314(&uVar0, CEIL(bParam7), bParam8);
	*uParam2 = iParam3;
	*uParam4 = iParam5;
	if (iParam6 != 4294967295)
	{
		Function_312(iParam6);
	}
	Function_264(iParam1, 4);
	Function_259();
}

bool Function_373() //Position: 0x18BF8 / 101368
{
	return "challenge_05lvl2_128";
}

void Function_374(int iParam0) //Position: 0x18C15 / 101397
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

void Function_375(int iParam0) //Position: 0x18C29 / 101417
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Global_56688[iParam076][iVar09] = 4294967294;
		Global_56688[iParam076][iVar09].f_4 = 0.0f;
		Global_56688[iParam076][iVar09].f_8 = 0;
		Global_56688[iParam076][iVar09].f_20 = 0;
		Global_56688[iParam076][iVar09].f_24 = 0;
		iVar0++;
	}
	Global_56688[iParam076].f_296 = 0;
	Global_56688[iParam076].f_300 = 0;
	Global_56688[iParam076].f_292 = 0;
	return;
}

bool Function_376(int iParam0, float fParam1) //Position: 0x18CA9 / 101545
{
	if (Function_381(iParam0))
	{
		if (Function_377(iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_377(int iParam0) //Position: 0x18CC5 / 101573
{
	if (Function_381(iParam0))
	{
		if (Function_378(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_378(int iParam0) //Position: 0x18D8D / 101773
{
	return Function_9(*iParam0, 2);
}

void Function_379(int iParam0) //Position: 0x18D9A / 101786
{
	Function_380(iParam0, 0.0f);
	return;
}

void Function_380(int iParam0, float fParam1) //Position: 0x18DA6 / 101798
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_123(iParam0, 1);
	Function_92(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

bool Function_381(int iParam0) //Position: 0x18DC7 / 101831
{
	return Function_9(*iParam0, 1);
}

void Function_382(var uParam0, var uParam1, var uParam2, int iParam3) //Position: 0x18DD4 / 101844
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	switch (*uParam1)
	{
		case 0x00000000:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(8);
					if (Global_83864.f_1264 > 17)
					{
						*uParam0 = 1;
					}
					break;
				
				case 0x00000001:
					if (!Function_297(8, 1) != 1)
					{
						if (StackVal && Global_56688[876][09].f_24 != 0)
						{
							if (!Function_297(8, 2) != 1)
							{
								SET_JOURNAL_ENTRY_PROGRESS(Function_253(8), 0,5f, false, 0);
							}
							Function_371(0, 8);
							Function_258(8, 1, 1);
						}
					}
					if (!Function_297(8, 2) != 1)
					{
						if (StackVal && Global_56688[876][69].f_24 != 0)
						{
							if (!Function_297(8, 1) != 1)
							{
								SET_JOURNAL_ENTRY_PROGRESS(Function_253(8), 0,5f, false, 0);
							}
							Function_371(6, 8);
							Function_258(8, 2, 1);
						}
					}
					if (Function_297(8, 1) != 1 && Function_297(8, 2) != 1)
					{
						Global_56688[876].f_292 = 1;
					}
					if (Global_56688[876].f_300 && Global_56688[876].f_292)
					{
						*uParam0 = 2;
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_372(*iParam3, 8, uParam1, 1, uParam0, 0, 1036, 250.0f, Function_373());
					Function_375(8);
					break;
			}
			break;
		
		case 0x00000001:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(8);
					Function_254(8, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(8), 0.0f, false, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					if (!Function_297(8, 1) != 1)
					{
						if (StackVal && Global_56688[876][59].f_24 != 0)
						{
							if (GET_JOURNAL_ENTRY_PROGRESS(Function_253(8)) != 0.0f)
							{
								SET_JOURNAL_ENTRY_PROGRESS(Function_253(8), 0,5f, false, 0);
							}
							Function_371(5, 8);
							Function_258(8, 1, 1);
						}
					}
					if (!Function_297(8, 2) != 1)
					{
						if (StackVal && Global_56688[876][49].f_24 != 0)
						{
							if (GET_JOURNAL_ENTRY_PROGRESS(Function_253(8)) != 0.0f)
							{
								SET_JOURNAL_ENTRY_PROGRESS(Function_253(8), 0,5f, false, 0);
							}
							Function_371(4, 8);
							Function_258(8, 2, 1);
						}
					}
					if (Function_297(8, 1) != 1 && Function_297(8, 2) != 1)
					{
						Global_56688[876].f_292 = 1;
					}
					if (Global_56688[876].f_300 && Global_56688[876].f_292)
					{
						*uParam0 = 2;
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_372(*iParam3, 8, uParam1, 2, uParam0, 0, 1037, 250.0f, Function_373());
					Function_375(8);
					break;
			}
			break;
		
		case 0x00000002:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(8);
					Function_254(8, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(8), 0.0f, false, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					if (!Function_297(8, 1) != 1)
					{
						if (StackVal && Global_56688[876][29].f_24 != 0)
						{
							if (GET_JOURNAL_ENTRY_PROGRESS(Function_253(8)) != 0.0f)
							{
								SET_JOURNAL_ENTRY_PROGRESS(Function_253(8), 0,5f, false, 0);
							}
							Function_371(2, 8);
							Function_258(8, 1, 1);
						}
					}
					if (!Function_297(8, 2) != 1)
					{
						if (StackVal && Global_56688[876][19].f_24 != 0)
						{
							if (GET_JOURNAL_ENTRY_PROGRESS(Function_253(8)) != 0.0f)
							{
								SET_JOURNAL_ENTRY_PROGRESS(Function_253(8), 0,5f, false, 0);
							}
							Function_371(1, 8);
							Function_258(8, 2, 1);
						}
					}
					if (Function_297(8, 1) != 1 && Function_297(8, 2) != 1)
					{
						Global_56688[876].f_292 = 1;
					}
					if (Global_56688[876].f_300 && Global_56688[876].f_292)
					{
						*uParam0 = 2;
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_372(*iParam3, 8, uParam1, 3, uParam0, 0, 1039, 250.0f, Function_373());
					Function_375(8);
					break;
			}
			break;
		
		case 0x00000003:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(8);
					Function_254(8, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(8), 0.0f, false, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					if (Global_56688[876][49].f_20 && Function_297(8, 1) > 1)
					{
						Function_258(8, 1, 1);
					}
					iVar1 = Function_302(2, iParam3, 1);
					if (iVar1 >= 0)
					{
						iVar0 = 0;
						while (Function_295(iParam3, &iVar0, &bVar2))
						{
							if (IS_OBJECT_VALID(bVar2))
							{
								if (((!Function_294(bVar2) != 24 && !Function_294(bVar2) != 23) && !Function_294(bVar2) != 25) && !Function_294(bVar2) != 22)
								{
									Function_284(iParam3);
									Function_243();
									Function_278(8, 1);
									Function_375(8);
									Function_257(8);
									*uParam2 = 0.0f;
								}
								else
								{
									Function_293(iParam3, &bVar2);
									iVar0 = (iVar0 - 1);
								}
							}
						}
					}
					if (Global_56688[876][49].f_24)
					{
						Function_371(4, 8);
						Function_258(8, 1, 2);
					}
					if (Function_297(8, 1) == 2)
					{
						Global_56688[876].f_292 = 1;
					}
					if (Global_56688[876].f_300 && Global_56688[876].f_292)
					{
						*uParam0 = 2;
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_372(*iParam3, 8, uParam1, 4, uParam0, 0, 1040, 250.0f, Function_373());
					Function_375(8);
					break;
			}
			break;
		
		case 0x00000004:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(8);
					Function_254(8, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(8), 0.0f, false, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					if (Global_56688[876][39].f_20 && Function_297(8, 1) > 1)
					{
						Function_258(8, 1, 1);
					}
					iVar1 = Function_302(2, iParam3, 1);
					if (iVar1 >= 0)
					{
						iVar0 = 0;
						while (Function_295(iParam3, &iVar0, &bVar2))
						{
							if (IS_OBJECT_VALID(bVar2))
							{
								if (((!Function_294(bVar2) != 24 && !Function_294(bVar2) != 23) && !Function_294(bVar2) != 25) && !Function_294(bVar2) != 22)
								{
									Function_284(iParam3);
									Function_243();
									Function_278(8, 1);
									Function_375(8);
									Function_257(8);
									*uParam2 = 0.0f;
								}
								else
								{
									Function_293(iParam3, &bVar2);
									iVar0 = (iVar0 - 1);
								}
							}
						}
					}
					if (Global_56688[876][39].f_24)
					{
						Function_371(4, 8);
						Function_258(8, 1, 2);
					}
					if (Function_297(8, 1) == 2)
					{
						Global_56688[876].f_292 = 1;
					}
					if (Global_56688[876].f_300 && Global_56688[876].f_292)
					{
						*uParam0 = 2;
					}
					break;
				
				case 0x00000002:
					if (Function_370())
					{
						*uParam2 = 0.0f;
						Function_372(*iParam3, 8, uParam1, 5, uParam0, 0, 1041, 250.0f, Function_373());
						Function_375(8);
					}
					else
					{
						*uParam2 = 1.0f;
						Function_369(*iParam3, 8, uParam1, uParam0, 1041, 250.0f, Function_373());
						Function_375(8);
					}
					break;
			}
			break;
		
		case 0x00000005:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(8);
					Function_254(8, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(8), 0.0f, false, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					if (!Function_297(8, 1) != 1)
					{
						if (StackVal && Global_56688[876][39].f_24 != 0)
						{
							if (GET_JOURNAL_ENTRY_PROGRESS(Function_253(8)) != 0.0f)
							{
								SET_JOURNAL_ENTRY_PROGRESS(Function_253(8), 0,5f, false, 0);
							}
							Function_371(3, 8);
							Function_258(8, 1, 1);
						}
					}
					if (!Function_297(8, 2) != 1)
					{
						if (StackVal && Global_56688[876][79].f_24 != 0)
						{
							if (GET_JOURNAL_ENTRY_PROGRESS(Function_253(8)) != 0.0f)
							{
								SET_JOURNAL_ENTRY_PROGRESS(Function_253(8), 0,5f, false, 0);
							}
							Function_371(7, 8);
							Function_258(8, 2, 1);
						}
					}
					if (Function_297(8, 1) != 1 && Function_297(8, 2) != 1)
					{
						Global_56688[876].f_292 = 1;
					}
					if (Global_56688[876].f_300 && Global_56688[876].f_292)
					{
						*uParam0 = 2;
					}
					break;
				
				case 0x00000002:
					*uParam2 = 1.0f;
					Function_369(*iParam3, 8, uParam1, uParam0, 1038, 250.0f, Function_373());
					Function_375(8);
					break;
			}
			break;
	}
}

void Function_383(var uParam0, var uParam1, int iParam2, var uParam3) //Position: 0x195DC / 103900
{
	switch (*uParam1)
	{
		case 0x00000000:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(7);
					if (Global_83864.f_1264 > 4)
					{
						*uParam0 = 1;
					}
					break;
				
				case 0x00000001:
					if (!Global_56688[776].f_292 != 1)
					{
						if (Global_56688[776][09].f_24)
						{
							Global_56688[776].f_292 = 1;
							*uParam0 = 2;
						}
					}
					break;
				
				case 0x00000002:
					*iParam2 = 0.0f;
					Function_372(*uParam3, 7, uParam1, 1, uParam0, 0, 1031, 250.0f, Function_384());
					Function_375(7);
					break;
			}
			break;
		
		case 0x00000001:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(7);
					Function_254(7, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(7), 0.0f, false, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					if (!Global_56688[776].f_292 != 1)
					{
						if (Global_56688[776][19].f_24)
						{
							Global_56688[776].f_292 = 1;
							*uParam0 = 2;
						}
					}
					break;
				
				case 0x00000002:
					*iParam2 = 0.0f;
					Function_372(*uParam3, 7, uParam1, 2, uParam0, 0, 1032, 250.0f, Function_384());
					Function_375(7);
					break;
			}
			break;
		
		case 0x00000002:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(7);
					Function_254(7, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(7), 0.0f, false, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					if (!Global_56688[776].f_292 != 1)
					{
						if (Global_56688[776][29].f_24)
						{
							Global_56688[776].f_292 = 1;
							*uParam0 = 2;
						}
					}
					break;
				
				case 0x00000002:
					*iParam2 = 0.0f;
					Function_372(*uParam3, 7, uParam1, 3, uParam0, 0, 1033, 250.0f, Function_384());
					Function_375(7);
					break;
			}
			break;
		
		case 0x00000003:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(7);
					Function_254(7, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(7), 0.0f, false, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					if (!Global_56688[776].f_292 != 1)
					{
						if (Global_56688[776][39].f_24)
						{
							Global_56688[776].f_292 = 1;
							*uParam0 = 2;
						}
					}
					break;
				
				case 0x00000002:
					*iParam2 = 0.0f;
					Function_372(*uParam3, 7, uParam1, 4, uParam0, 0, 1034, 250.0f, Function_384());
					Function_375(7);
					break;
			}
			break;
		
		case 0x00000004:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(7);
					Function_254(7, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(7), 0.0f, false, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					if (!Global_56688[776].f_292 != 1)
					{
						if (Global_56688[776][49].f_24)
						{
							Global_56688[776].f_292 = 1;
							*uParam0 = 2;
						}
					}
					break;
				
				case 0x00000002:
					*iParam2 = 0.0f;
					Function_372(*uParam3, 7, uParam1, 5, uParam0, 0, 1065, 250.0f, Function_384());
					Function_375(7);
					break;
			}
			break;
		
		case 0x00000005:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(7);
					Function_254(7, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(7), 0.0f, false, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					if (!Global_56688[776].f_292 != 1)
					{
						if (Global_56688[776][69].f_24)
						{
							Global_56688[776].f_292 = 1;
							*uParam0 = 2;
						}
					}
					break;
				
				case 0x00000002:
					*iParam2 = 0.0f;
					Function_372(*uParam3, 7, uParam1, 6, uParam0, 0, 1066, 250.0f, Function_384());
					Function_375(7);
					break;
			}
			break;
		
		case 0x00000006:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(7);
					Function_254(7, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(7), 0.0f, false, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					if (!Global_56688[776].f_292 != 1)
					{
						if (Global_56688[776][59].f_24)
						{
							Global_56688[776].f_292 = 1;
							*uParam0 = 2;
						}
					}
					break;
				
				case 0x00000002:
					*iParam2 = 0.0f;
					if (Function_370())
					{
						Function_372(*uParam3, 7, uParam1, 7, uParam0, 0, 1067, 250.0f, Function_384());
						Function_375(7);
					}
					else
					{
						Function_369(*uParam3, 7, uParam1, uParam0, 1067, 250.0f, Function_384());
						Function_375(7);
					}
					break;
			}
			break;
		
		case 0x00000007:
			if (Function_370())
			{
				switch (*uParam0)
				{
					case 0x00000000:
						Function_257(7);
						Function_254(7, 0);
						SET_JOURNAL_ENTRY_PROGRESS(Function_253(7), 0.0f, false, 0);
						*uParam0 = 1;
						break;
					
					case 0x00000001:
						if (!Global_56688[776].f_292 != 1)
						{
							if (Global_56688[776][79].f_24)
							{
								Global_56688[776].f_292 = 1;
								*uParam0 = 2;
							}
						}
						break;
					
					case 0x00000002:
						*iParam2 = 0.0f;
						Function_369(*uParam3, 7, uParam1, uParam0, 1068, 250.0f, Function_384());
						Function_375(7);
						break;
					}
			}
			break;
	}
}

bool Function_384() //Position: 0x19A7F / 105087
{
	return "challenge_05_128";
}

void Function_385(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x19A98 / 105112
{
	bool bVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	bool bVar5;
	float fVar6;
	char* cVar7[24];
	char* cVar13[24];
	char* cVar19[24];
	char* cVar25[24];
	
	switch (*uParam1)
	{
		case 0x00000000:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(6);
					if (Global_83864.f_1264 > 13)
					{
						Function_321(6, 1, 265);
						*uParam0 = 1;
					}
					break;
				
				case 0x00000001:
					fVar6 = Function_287(6);
					bVar0 = Function_325((Function_110(265) - Function_286(6, 1, 0)), 6, 1);
					if (bVar0 <= 8.0f)
					{
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = (bVar0 / 8.0f);
						if (*uParam2 == fVar6)
						{
							Function_285(6, *uParam2, 1, ROUND(bVar0), 4294967295, 4294967295, 21);
						}
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_372(*uParam3, 6, uParam1, 1, uParam0, 0, 1026, 250.0f, Function_386());
					break;
			}
			break;
		
		case 0x00000001:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(6);
					Function_254(6, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(6), 0.0f, false, 0);
					Function_321(6, 1, 269);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar6 = Function_287(6);
					bVar0 = Function_325((Function_110(269) - Function_286(6, 1, 0)), 6, 1);
					if (bVar0 <= 10.0f)
					{
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = (bVar0 / 10.0f);
						if (*uParam2 == fVar6)
						{
							Function_285(6, *uParam2, 1, ROUND(bVar0), 4294967295, 4294967295, 21);
						}
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_372(*uParam3, 6, uParam1, 2, uParam0, 0, 1027, 250.0f, Function_386());
					break;
			}
			break;
		
		case 0x00000002:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(6);
					Function_254(6, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(6), 0.0f, false, 0);
					Function_321(6, 1, 266);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar6 = Function_287(6);
					bVar0 = Function_325((Function_110(266) - Function_286(6, 1, 0)), 6, 1);
					if (bVar0 <= 12.0f)
					{
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = (bVar0 / 12.0f);
						if (*uParam2 == fVar6)
						{
							Function_285(6, *uParam2, 1, ROUND(bVar0), 4294967295, 4294967295, 21);
						}
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_372(*uParam3, 6, uParam1, 3, uParam0, 0, 1028, 250.0f, Function_386());
					break;
			}
			break;
		
		case 0x00000003:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(6);
					Function_254(6, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(6), 0.0f, false, 0);
					Function_321(6, 1, 267);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar6 = Function_287(6);
					bVar0 = Function_325((Function_110(267) - Function_286(6, 1, 0)), 6, 1);
					if (bVar0 <= 15.0f)
					{
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = (bVar0 / 15.0f);
						if (*uParam2 == fVar6)
						{
							Function_285(6, *uParam2, 1, ROUND(bVar0), 4294967295, 4294967295, 21);
						}
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_372(*uParam3, 6, uParam1, 4, uParam0, 0, 1029, 250.0f, Function_386());
					break;
			}
			break;
		
		case 0x00000004:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(6);
					Function_254(6, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(6), 0.0f, false, 0);
					Function_321(6, 1, 263);
					Function_321(6, 2, 264);
					Function_321(6, 3, 265);
					Function_321(6, 4, 266);
					Function_321(6, 5, 267);
					Function_321(6, 6, 268);
					Function_321(6, 7, 269);
					Function_321(6, 8, 270);
					Function_321(6, 9, 271);
					Function_321(6, 10, 272);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar6 = Function_287(6);
					iVar4 = 263;
					bVar5 = true;
					bVar0 = 0.0f;
					while (iVar4 < 272)
					{
						fVar1 = Function_110(iVar4);
						fVar2 = Function_286(6, bVar5, 0);
						if (iVar4 == 270)
						{
							if (Function_325((fVar1 - fVar2), 6, bVar5) < 0.0f)
							{
								if (Function_325((fVar1 - fVar2), 6, bVar5) >= 10.0f)
								{
									fVar3 = (fVar3 + Function_325((fVar1 - fVar2), 6, bVar5));
								}
								else
								{
									fVar3 = (fVar3 + 10.0f);
								}
							}
						}
						else if (Function_325((fVar1 - fVar2), 6, bVar5) < 0.0f)
						{
							if (Function_325((fVar1 - fVar2), 6, bVar5) >= 2.0f)
							{
								fVar3 = (fVar3 + Function_325((fVar1 - fVar2), 6, bVar5));
							}
							else
							{
								fVar3 = (fVar3 + 2.0f);
							}
						}
						bVar5++;
						iVar4++;
					}
					if (fVar3 <= 28.0f)
					{
						*uParam2 = 1.0f;
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = (fVar3 / 28.0f);
						if (*uParam2 == fVar6)
						{
							SET_JOURNAL_ENTRY_PROGRESS(Function_253(6), *uParam2, false, 0);
							iVar4 = 270;
							bVar5 = 8;
							fVar1 = Function_110(iVar4);
							fVar2 = Function_286(6, bVar5, 1);
							bVar0 = (fVar1 - fVar2);
							if (bVar0 < 10.0f)
							{
								bVar0 = 10.0f;
							}
							strcpy(&cVar25, "AM_VS", 24);
							cVar7 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_251(6) };
							stradd(&cVar7, "_info_mp", 24);
							stradd(&cVar7, INT_TO_STRING(bVar5), 24);
							strcpy(&cVar13, "AM_num", 24);
							stradd(&cVar13, INT_TO_STRING(bVar5 + 21), 24);
							strcpy(&cVar19, "AM_herbname", 24);
							stradd(&cVar19, INT_TO_STRING(bVar5), 24);
							UI_SET_STRING(&cVar13, INT_TO_STRING(ROUND(bVar0)));
							UI_SET_STRING(&cVar19, UI_GET_STRING(&cVar25));
							PREPEND_JOURNAL_ENTRY_DETAIL(Function_253(6), &cVar7, 2, 2, false);
							iVar4 = 263;
							bVar5 = true;
							while (iVar4 <= 273)
							{
								fVar1 = Function_110(iVar4);
								fVar2 = Function_286(6, bVar5, 0);
								bVar0 = (fVar1 - fVar2);
								if (iVar4 == 270)
								{
									if (bVar0 < 10.0f)
									{
										bVar0 = 10.0f;
									}
								}
								else if (bVar0 < 2.0f)
								{
									bVar0 = 2.0f;
								}
								switch (iVar4)
								{
									case 0x00000107:
										strcpy(&cVar25, "AM_PPS", 24);
										break;
									
									case 0x00000108:
										strcpy(&cVar25, "AM_DS", 24);
										break;
									
									case 0x00000109:
										strcpy(&cVar25, "AM_BW", 24);
										break;
									
									case 0x0000010A:
										strcpy(&cVar25, "AM_PPY", 24);
										break;
									
									case 0x0000010B:
										strcpy(&cVar25, "AM_GC", 24);
										break;
									
									case 0x0000010C:
										strcpy(&cVar25, "AM_WBC", 24);
										break;
									
									case 0x0000010D:
										strcpy(&cVar25, "AM_HS", 24);
										break;
									
									case 0x0000010E:
										strcpy(&cVar25, "AM_VS", 24);
										break;
									
									case 0x0000010F:
										strcpy(&cVar25, "AM_RS", 24);
										break;
									
									case 0x00000110:
										strcpy(&cVar25, "AM_WFF", 24);
										break;
								}
								cVar7 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_251(6) };
								stradd(&cVar7, "_info_mp", 24);
								stradd(&cVar7, INT_TO_STRING(bVar5), 24);
								strcpy(&cVar13, "AM_num", 24);
								stradd(&cVar13, INT_TO_STRING(bVar5 + 21), 24);
								strcpy(&cVar19, "AM_herbname", 24);
								stradd(&cVar19, INT_TO_STRING(bVar5), 24);
								UI_SET_STRING(&cVar13, INT_TO_STRING(ROUND(bVar0)));
								UI_SET_STRING(&cVar19, UI_GET_STRING(&cVar25));
								if (iVar4 != 270)
								{
									PREPEND_JOURNAL_ENTRY_DETAIL(Function_253(6), &cVar7, 2, 2, false);
								}
								bVar5++;
								iVar4++;
							}
						}
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_369(*uParam3, 6, uParam1, uParam0, 1030, 250.0f, Function_386());
					break;
			}
			break;
	}
}

bool Function_386() //Position: 0x1A194 / 106900
{
	return "challenge_03lvl2_128";
}

void Function_387(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x1A1B1 / 106929
{
	bool bVar0;
	float fVar1;
	
	switch (*uParam1)
	{
		case 0x00000000:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(2);
					if (Global_83864.f_1264 > 2)
					{
						Function_321(2, 1, 272);
						*uParam0 = 1;
					}
					break;
				
				case 0x00000001:
					fVar1 = Function_287(2);
					bVar0 = Function_325((Function_110(272) - Function_286(2, 1, 0)), 2, 1);
					if (bVar0 <= 6.0f)
					{
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = (bVar0 / 6.0f);
						if (*uParam2 == fVar1)
						{
							Function_285(2, *uParam2, 1, ROUND(bVar0), 4294967295, 4294967295, 0);
						}
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_372(*uParam3, 2, uParam1, 1, uParam0, 0, 1021, 250.0f, Function_388());
					break;
			}
			break;
		
		case 0x00000001:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(2);
					Function_254(2, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(2), 0.0f, false, 0);
					Function_321(2, 1, 264);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar1 = Function_287(2);
					bVar0 = Function_325((Function_110(264) - Function_286(2, 1, 0)), 2, 1);
					if (bVar0 <= 6.0f)
					{
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = (bVar0 / 6.0f);
						if (*uParam2 == fVar1)
						{
							Function_285(2, *uParam2, 1, ROUND(bVar0), 4294967295, 4294967295, 0);
						}
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_372(*uParam3, 2, uParam1, 2, uParam0, 0, 1022, 250.0f, Function_388());
					break;
			}
			break;
		
		case 0x00000002:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(2);
					Function_254(2, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(2), 0.0f, false, 0);
					Function_321(2, 1, 271);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar1 = Function_287(2);
					bVar0 = Function_325((Function_110(271) - Function_286(2, 1, 0)), 2, 1);
					if (bVar0 <= 4.0f)
					{
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = (bVar0 / 4.0f);
						if (*uParam2 == fVar1)
						{
							Function_285(2, *uParam2, 1, ROUND(bVar0), 4294967295, 4294967295, 0);
						}
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_372(*uParam3, 2, uParam1, 3, uParam0, 0, 1023, 250.0f, Function_388());
					break;
			}
			break;
		
		case 0x00000003:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(2);
					Function_254(2, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(2), 0.0f, false, 0);
					Function_321(2, 1, 263);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar1 = Function_287(2);
					bVar0 = Function_325((Function_110(263) - Function_286(2, 1, 0)), 2, 1);
					if (bVar0 <= 8.0f)
					{
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = (bVar0 / 8.0f);
						if (*uParam2 == fVar1)
						{
							Function_285(2, *uParam2, 1, ROUND(bVar0), 4294967295, 4294967295, 0);
						}
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_372(*uParam3, 2, uParam1, 4, uParam0, 0, 1024, 250.0f, Function_388());
					break;
			}
			break;
		
		case 0x00000004:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(2);
					Function_254(2, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(2), 0.0f, false, 0);
					Function_321(2, 1, 268);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar1 = Function_287(2);
					bVar0 = Function_325((Function_110(268) - Function_286(2, 1, 0)), 2, 1);
					if (bVar0 <= 7.0f)
					{
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = (bVar0 / 7.0f);
						if (*uParam2 == fVar1)
						{
							Function_285(2, *uParam2, 1, ROUND(bVar0), 4294967295, 4294967295, 0);
						}
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_369(*uParam3, 2, uParam1, uParam0, 1025, 250.0f, Function_388());
					break;
			}
			break;
	}
}

bool Function_388() //Position: 0x1A52E / 107822
{
	return "challenge_03_128";
}

void Function_389(var uParam0, var uParam1, var uParam2, int iParam3) //Position: 0x1A547 / 107847
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	
	switch (*uParam1)
	{
		case 0x00000000:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(5);
					if (Global_83864.f_1264 > 11)
					{
						Function_258(5, 2, 0);
						*uParam0 = 1;
					}
					break;
				
				case 0x00000001:
					fVar3 = Function_287(5);
					Function_298(2, "BEAR", iParam3, 1, 0);
					bVar1 = Function_296(iParam3, 5);
					if (bVar1 >= 0)
					{
						iVar0 = 0;
						while (Function_295(iParam3, &iVar0, &bVar2))
						{
							if (IS_OBJECT_VALID(bVar2))
							{
								if (Function_294(bVar2) != 22 && Function_297(5, 2) != 0)
								{
									Function_258(5, 2, 1);
								}
								else if ((Function_297(5, 2) != 0 && Function_296(iParam3, 5) != 5) && Function_294(bVar2) == 22)
								{
									if (iVar0 == 5)
									{
										Function_293(iParam3, &bVar2);
										iVar0 = (iVar0 - 1);
									}
								}
							}
						}
					}
					bVar1 = Function_296(iParam3, 5);
					if (IntToFloat(bVar1) <= 5.0f)
					{
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = TO_FLOAT(bVar1);
						if (*uParam2 < 5.0f)
						{
							*uParam2 = 5.0f;
						}
						*uParam2 = (*uParam2 / 5.0f);
						if (*uParam2 == fVar3)
						{
							Function_285(5, *uParam2, 1, bVar1, 4294967295, 4294967295, 15);
						}
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_372(*iParam3, 5, uParam1, 1, uParam0, 0, 1016, 250.0f, Function_390());
					break;
			}
			break;
		
		case 0x00000001:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(5);
					Function_254(5, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(5), 0.0f, false, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar3 = Function_287(5);
					bVar1 = Function_292(2, 1072, iParam3, 1);
					bVar1 = Function_296(iParam3, 5);
					if (IntToFloat(bVar1) <= 1.0f)
					{
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = TO_FLOAT(bVar1);
						if (IntToFloat(bVar1) < 1.0f)
						{
							bVar1 = CEIL(1.0f);
						}
						*uParam2 = (*uParam2 + TO_FLOAT(bVar1));
						*uParam2 = (*uParam2 / 1.0f);
						if (*uParam2 == fVar3)
						{
							SET_JOURNAL_ENTRY_PROGRESS(Function_253(5), *uParam2, false, 0);
						}
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_372(*iParam3, 5, uParam1, 2, uParam0, 0, 1017, 250.0f, Function_390());
					break;
			}
			break;
		
		case 0x00000002:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(5);
					Function_254(5, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(5), 0.0f, false, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar3 = Function_287(5);
					bVar1 = Function_292(2, 1077, iParam3, 1);
					bVar1 = Function_296(iParam3, 5);
					if (IntToFloat(bVar1) <= 1.0f)
					{
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = TO_FLOAT(bVar1);
						if (IntToFloat(bVar1) < 1.0f)
						{
							bVar1 = CEIL(1.0f);
						}
						*uParam2 = (*uParam2 + TO_FLOAT(bVar1));
						*uParam2 = (*uParam2 / 1.0f);
						if (*uParam2 == fVar3)
						{
							SET_JOURNAL_ENTRY_PROGRESS(Function_253(5), *uParam2, false, 0);
						}
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_372(*iParam3, 5, uParam1, 3, uParam0, 0, 1018, 250.0f, Function_390());
					break;
			}
			break;
		
		case 0x00000003:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(5);
					Function_254(5, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(5), 0.0f, false, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar3 = Function_287(5);
					bVar1 = Function_292(2, 1094, iParam3, 1);
					bVar1 = Function_296(iParam3, 5);
					if (IntToFloat(bVar1) <= 1.0f)
					{
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = TO_FLOAT(bVar1);
						if (IntToFloat(bVar1) < 1.0f)
						{
							bVar1 = CEIL(1.0f);
						}
						*uParam2 = (*uParam2 + TO_FLOAT(bVar1));
						*uParam2 = (*uParam2 / 1.0f);
						if (*uParam2 == fVar3)
						{
							SET_JOURNAL_ENTRY_PROGRESS(Function_253(5), *uParam2, false, 0);
						}
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_372(*iParam3, 5, uParam1, 4, uParam0, 0, 1019, 250.0f, Function_390());
					break;
			}
			break;
		
		case 0x00000004:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(5);
					Function_254(5, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(5), 0.0f, false, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar3 = Function_287(5);
					bVar1 = Function_292(2, 1105, iParam3, 1);
					bVar1 = Function_296(iParam3, 5);
					if (IntToFloat(bVar1) <= 1.0f)
					{
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = TO_FLOAT(bVar1);
						if (IntToFloat(bVar1) < 1.0f)
						{
							bVar1 = CEIL(1.0f);
						}
						*uParam2 = (*uParam2 + TO_FLOAT(bVar1));
						*uParam2 = (*uParam2 / 1.0f);
						if (*uParam2 == fVar3)
						{
							SET_JOURNAL_ENTRY_PROGRESS(Function_253(5), *uParam2, false, 0);
						}
					}
					break;
				
				case 0x00000002:
					*uParam2 = 1.0f;
					Function_369(*iParam3, 5, uParam1, uParam0, 1020, 250.0f, Function_390());
					break;
			}
			break;
	}
}

bool Function_390() //Position: 0x1A9A9 / 108969
{
	return "challenge_02lvl2_128";
}

void Function_391(var uParam0, var uParam1, var uParam2, int iParam3) //Position: 0x1A9C6 / 108998
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	bool bVar5;
	bool bVar6;
	
	switch (*uParam1)
	{
		case 0x00000000:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(1);
					if (Global_83864.f_1264 > 1)
					{
						Function_321(1, 1, 326);
						*uParam0 = 1;
					}
					break;
				
				case 0x00000001:
					fVar4 = Function_287(1);
					bVar5 = Function_325((Function_110(326) - Function_286(1, 1, 0)), 1, 1);
					if (bVar5 <= 5.0f)
					{
						*uParam0 = 2;
					}
					else
					{
						bVar1 = ROUND(bVar5);
						*uParam2 = (bVar5 / 5.0f);
						if (*uParam2 == fVar4)
						{
							Function_285(1, *uParam2, 1, bVar1, 4294967295, 4294967295, 12);
						}
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_372(*iParam3, 1, uParam1, 1, uParam0, 0, 1011, 250.0f, Function_392());
					break;
			}
			break;
		
		case 0x00000001:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(1);
					Function_254(1, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(1), 0.0f, false, 0);
					Function_321(1, 1, 324);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar4 = Function_287(1);
					bVar5 = Function_325((Function_110(324) - Function_286(1, 1, 0)), 1, 1);
					if (bVar5 <= 5.0f)
					{
						*uParam0 = 2;
					}
					else
					{
						bVar1 = ROUND(bVar5);
						if (IntToFloat(bVar1) < 5.0f)
						{
							bVar1 = CEIL(5.0f);
						}
						*uParam2 = TO_FLOAT(bVar1);
						*uParam2 = (*uParam2 / 5.0f);
						if (*uParam2 == fVar4)
						{
							Function_285(1, *uParam2, 1, bVar1, 4294967295, 4294967295, 12);
						}
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_372(*iParam3, 1, uParam1, 2, uParam0, 0, 1012, 250.0f, Function_392());
					break;
			}
			break;
		
		case 0x00000002:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(1);
					Function_254(1, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(1), 0.0f, false, 0);
					Function_258(1, 2, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar4 = Function_287(1);
					Function_298(2, "WOLF", iParam3, 1, 0);
					bVar1 = Function_296(iParam3, 1);
					if (bVar1 >= 0)
					{
						iVar0 = 0;
						while (Function_295(iParam3, &iVar0, &bVar3))
						{
							if (IS_OBJECT_VALID(bVar3))
							{
								if (Function_294(bVar3) != 22 && Function_297(1, 2) != 0)
								{
									Function_258(1, 2, 1);
								}
								else if ((Function_297(1, 2) != 0 && Function_296(iParam3, 1) != 5) && Function_294(bVar3) == 22)
								{
									if (iVar0 == 5)
									{
										Function_293(iParam3, &bVar3);
										iVar0 = (iVar0 - 1);
									}
								}
							}
						}
					}
					bVar1 = Function_296(iParam3, 1);
					if (IntToFloat(bVar1) <= 5.0f)
					{
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = TO_FLOAT(bVar1);
						if (*uParam2 < 5.0f)
						{
							*uParam2 = 5.0f;
						}
						*uParam2 = (*uParam2 / 5.0f);
						if (*uParam2 == fVar4)
						{
							Function_285(1, *uParam2, 1, bVar1, 4294967295, 4294967295, 12);
						}
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_372(*iParam3, 1, uParam1, 3, uParam0, 0, 1013, 250.0f, Function_392());
					break;
			}
			break;
		
		case 0x00000003:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(1);
					Function_254(1, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(1), 0.0f, false, 0);
					Function_258(1, 2, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar4 = Function_287(1);
					Function_298(2, "COUGAR", iParam3, 1, 0);
					bVar1 = Function_296(iParam3, 1);
					if (bVar1 >= 0)
					{
						iVar0 = 0;
						while (Function_295(iParam3, &iVar0, &bVar3))
						{
							if (IS_OBJECT_VALID(bVar3))
							{
								if (Function_294(bVar3) != 22 && Function_297(1, 2) != 0)
								{
									Function_258(1, 2, 1);
								}
								else if ((Function_297(1, 2) != 0 && Function_296(iParam3, 1) != 5) && Function_294(bVar3) == 22)
								{
									if (iVar0 == 5)
									{
										Function_293(iParam3, &bVar3);
										iVar0 = (iVar0 - 1);
									}
								}
							}
						}
					}
					bVar1 = Function_296(iParam3, 1);
					if (IntToFloat(bVar1) <= 5.0f)
					{
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = TO_FLOAT(bVar1);
						if (*uParam2 < 5.0f)
						{
							*uParam2 = 5.0f;
						}
						*uParam2 = (*uParam2 / 5.0f);
						if (*uParam2 == fVar4)
						{
							Function_285(1, *uParam2, 1, bVar1, 4294967295, 4294967295, 12);
						}
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_372(*iParam3, 1, uParam1, 4, uParam0, 0, 1014, 250.0f, Function_392());
					break;
			}
			break;
		
		case 0x00000004:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(1);
					Function_254(1, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(1), 0.0f, false, 0);
					Function_321(1, 1, 330);
					Function_321(1, 2, 317);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar4 = Function_287(1);
					bVar5 = Function_325((Function_110(330) - Function_286(1, 1, 0)), 1, 1);
					bVar6 = Function_325((Function_110(317) - Function_286(1, 2, 0)), 1, 2);
					if (bVar5 <= 5.0f && bVar6 <= 5.0f)
					{
						*uParam0 = 2;
					}
					else
					{
						bVar1 = ROUND(bVar5);
						if (IntToFloat(bVar1) < 5.0f)
						{
							bVar1 = CEIL(5.0f);
						}
						*uParam2 = TO_FLOAT(bVar1);
						bVar2 = ROUND(bVar6);
						if (IntToFloat(bVar2) < 5.0f)
						{
							bVar2 = CEIL(5.0f);
						}
						*uParam2 = (*uParam2 + TO_FLOAT(bVar2));
						*uParam2 = (*uParam2 / (2.0f * 5.0f));
						if (*uParam2 == fVar4)
						{
							Function_285(1, *uParam2, 1, bVar1, bVar2, 4294967295, 12);
						}
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_369(*iParam3, 1, uParam1, uParam0, 1015, 250.0f, Function_392());
					break;
			}
			break;
	}
}

bool Function_392() //Position: 0x1AED7 / 110295
{
	return "challenge_02_128";
}

void Function_393(var uParam0, var uParam1, var uParam2, int iParam3) //Position: 0x1AEF0 / 110320
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	float fVar6;
	
	switch (*uParam1)
	{
		case 0x00000000:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(4);
					if (Global_83864.f_1264 > 12)
					{
						*uParam0 = 1;
					}
					break;
				
				case 0x00000001:
					fVar6 = Function_287(4);
					bVar1 = Function_302(9, iParam3, 1);
					if (bVar1 >= 0)
					{
						iVar0 = (GET_OBJECTSET_SIZE(*iParam3) - bVar1);
						while (Function_295(iParam3, &iVar0, &bVar2))
						{
							if (IS_OBJECT_VALID(bVar2))
							{
								bVar4 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar2)));
								if (IS_ACTOR_VALID(bVar4))
								{
									if (IS_ACTOR_DEAD(bVar4))
									{
										Function_293(iParam3, &bVar2);
										iVar0 = (iVar0 - 1);
									}
									else if (DECOR_CHECK_EXIST(bVar2, "DroppedItem"))
									{
										bVar3 = DECOR_GET_OBJECT(bVar2, "DroppedItem");
										if (IS_OBJECT_VALID(bVar3))
										{
											if (GET_OBJECT_TYPE(bVar3) != 17)
											{
												Function_293(iParam3, &bVar2);
												iVar0 = (iVar0 - 1);
											}
										}
										else
										{
											Function_293(iParam3, &bVar2);
											iVar0 = (iVar0 - 1);
										}
									}
									else
									{
										Function_293(iParam3, &bVar2);
										iVar0 = (iVar0 - 1);
									}
								}
							}
						}
					}
					if (bVar1 < 0 && IntToFloat(Function_296(iParam3, 4)) > 2.0f)
					{
						Function_379(&iLocal_9);
					}
					bVar1 = false;
					bVar1 = Function_296(iParam3, 4);
					if (Function_381(&iLocal_9))
					{
						if (Function_377(&iLocal_9) > 6.0f)
						{
							if (IntToFloat(bVar1) <= 2.0f)
							{
								*uParam0 = 2;
								Function_374(&iLocal_9);
							}
							else
							{
								*uParam2 = (TO_FLOAT(bVar1) / 2.0f);
								if (*uParam2 == fVar6)
								{
									Function_285(4, *uParam2, 0, bVar1, 4294967295, 4294967295, 19);
								}
							}
						}
						else if (Function_376(&iLocal_9, 6.0f))
						{
							Function_284(iParam3);
							Function_278(4, 1);
							Function_257(4);
							*uParam2 = 0.0f;
							bVar1 = false;
							if (*uParam2 == fVar6)
							{
								Function_285(4, *uParam2, 0, bVar1, 4294967295, 4294967295, 19);
							}
							Function_374(&iLocal_9);
						}
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_372(*iParam3, 4, uParam1, 1, uParam0, 0, 1006, 250.0f, Function_397());
					break;
			}
			break;
		
		case 0x00000001:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(4);
					Function_254(4, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(4), 0.0f, false, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar6 = Function_287(4);
					bVar1 = (Function_302(9, iParam3, 1) + Function_302(11, iParam3, 1));
					if (bVar1 >= 0)
					{
						iVar0 = (GET_OBJECTSET_SIZE(*iParam3) - bVar1);
						while (Function_295(iParam3, &iVar0, &bVar2))
						{
							if (IS_OBJECT_VALID(bVar2))
							{
								bVar4 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar2)));
								if (IS_ACTOR_VALID(bVar4))
								{
									if (IS_ACTOR_DEAD(bVar4))
									{
										Function_293(iParam3, &bVar2);
										iVar0 = (iVar0 - 1);
										bVar1 = false;
									}
									else if (DECOR_CHECK_EXIST(bVar2, "DroppedItem") || DECOR_CHECK_EXIST(bVar2, "DroppedWeapon"))
									{
										if (DECOR_CHECK_EXIST(bVar2, "DroppedItem"))
										{
											bVar3 = DECOR_GET_OBJECT(bVar2, "DroppedItem");
										}
										else if (DECOR_CHECK_EXIST(bVar2, "DroppedWeapon"))
										{
											bVar3 = DECOR_GET_OBJECT(bVar2, "DroppedWeapon");
										}
										if (IS_OBJECT_VALID(bVar3))
										{
											if (GET_OBJECT_TYPE(bVar3) == 17)
											{
												if (iVar0 >= 1)
												{
													Function_293(iParam3, &bVar2);
													iVar0 = (iVar0 - 1);
													Function_243();
												}
												else
												{
													Global_63083 = GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar2));
												}
											}
											else if (GET_OBJECT_TYPE(bVar3) == 34)
											{
												if (iVar0 > 2 || Global_63083 == GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar2)))
												{
													Function_293(iParam3, &bVar2);
													iVar0 = (iVar0 - 1);
													bVar1 = false;
													Function_243();
												}
											}
											else
											{
												LOG_ERROR("It's a WHAT???!!!");
												Function_293(iParam3, &bVar2);
												iVar0 = (iVar0 - 1);
											}
										}
										else
										{
											Function_293(iParam3, &bVar2);
											iVar0 = (iVar0 - 1);
										}
									}
									else
									{
										Function_293(iParam3, &bVar2);
										iVar0 = (iVar0 - 1);
									}
								}
							}
						}
					}
					if (bVar1 != 1 && Function_296(iParam3, 4) > 2)
					{
						Function_379(&iLocal_9);
					}
					bVar1 = Function_296(iParam3, 4);
					if (Function_381(&iLocal_9))
					{
						if (Function_377(&iLocal_9) > 4.0f)
						{
							if (IntToFloat(bVar1) <= 2.0f)
							{
								*uParam0 = 2;
								Function_374(&iLocal_9);
							}
							else
							{
								*uParam2 = (TO_FLOAT(bVar1) / 2.0f);
								if (*uParam2 == fVar6)
								{
									SET_JOURNAL_ENTRY_PROGRESS(Function_253(4), *uParam2, false, 0);
								}
							}
						}
						else if (Function_376(&iLocal_9, 4.0f))
						{
							Function_284(iParam3);
							Function_278(4, 1);
							Function_243();
							*uParam2 = 0.0f;
							if (*uParam2 == fVar6)
							{
								SET_JOURNAL_ENTRY_PROGRESS(Function_253(4), *uParam2, false, 0);
							}
							Function_257(4);
							Function_374(&iLocal_9);
						}
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_372(*iParam3, 4, uParam1, 2, uParam0, 0, 1007, 250.0f, Function_397());
					break;
			}
			break;
		
		case 0x00000002:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(4);
					Function_254(4, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(4), 0.0f, false, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					if (Function_298(10, "BEAR", iParam3, 1, 0) < 0 || Function_298(10, "GrizzlyBear", iParam3, 1, 0) < 0)
					{
						while (Function_295(iParam3, &iVar0, &bVar2))
						{
							if (IS_OBJECT_VALID(bVar2))
							{
								if ((Function_294(bVar2) != 24 || Function_294(bVar2) != 25) || Function_294(bVar2) != 23)
								{
									Function_293(iParam3, &bVar2);
									iVar0 = (iVar0 - 1);
								}
								else if (IS_OBJECT_VALID(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar2))))
								{
									bVar4 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar2)));
									if (IS_ACTOR_VALID(bVar4))
									{
										if (GET_LAST_DAMAGE(bVar4) > GET_ACTOR_MAX_HEALTH(bVar4))
										{
											DECOR_SET_BOOL(bVar4, "bearWounded", true);
											Function_293(iParam3, &bVar2);
											iVar0 = (iVar0 - 1);
										}
										else if (DECOR_CHECK_EXIST(bVar4, "bearWounded"))
										{
											Function_293(iParam3, &bVar2);
											iVar0 = (iVar0 - 1);
										}
										if (GET_LAST_DAMAGE(bVar4) <= GET_ACTOR_MAX_HEALTH(bVar4))
										{
											if (!DECOR_CHECK_EXIST(bVar4, "bearWounded"))
											{
												*uParam0 = 2;
											}
										}
									}
								}
							}
						}
					}
					break;
				
				case 0x00000002:
					Function_284(iParam3);
					*uParam2 = 0.0f;
					Function_372(*iParam3, 4, uParam1, 3, uParam0, 0, 1008, 250.0f, Function_397());
					break;
			}
			break;
		
		case 0x00000003:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(4);
					Function_254(4, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(4), 0.0f, false, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar6 = Function_287(4);
					bVar1 = Function_302(9, iParam3, 1);
					if (bVar1 >= 0)
					{
						iVar0 = (GET_OBJECTSET_SIZE(*iParam3) - bVar1);
						while (Function_295(iParam3, &iVar0, &bVar2))
						{
							if (IS_OBJECT_VALID(bVar2))
							{
								bVar4 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar2)));
								bVar5 = GET_ACTOR_FROM_OBJECT(GET_EVENT_PERPETRATOR(GET_EVENT_FROM_OBJECT(bVar2)));
								if (IS_ACTOR_VALID(bVar4))
								{
									if (IS_ACTOR_DEAD(bVar4))
									{
										Function_293(iParam3, &bVar2);
										iVar0 = (iVar0 - 1);
									}
									else if (DECOR_CHECK_EXIST(bVar2, "DroppedItem"))
									{
										bVar3 = DECOR_GET_OBJECT(bVar2, "DroppedItem");
										if (IS_OBJECT_VALID(bVar3))
										{
											if (GET_OBJECT_TYPE(bVar3) == 17)
											{
												if (IS_ACTOR_VALID(bVar5))
												{
													if (IS_ACTOR_RIDING(bVar5))
													{
														if (Function_396(GET_MOUNT(bVar5), 0) > 2.0f)
														{
															Function_293(iParam3, &bVar2);
															iVar0 = (iVar0 - 1);
														}
													}
													else
													{
														Function_293(iParam3, &bVar2);
														iVar0 = (iVar0 - 1);
													}
												}
												else
												{
													Function_293(iParam3, &bVar2);
													iVar0 = (iVar0 - 1);
												}
											}
											else
											{
												Function_293(iParam3, &bVar2);
												iVar0 = (iVar0 - 1);
											}
										}
										else
										{
											Function_293(iParam3, &bVar2);
											iVar0 = (iVar0 - 1);
										}
									}
									else
									{
										Function_293(iParam3, &bVar2);
										iVar0 = (iVar0 - 1);
									}
								}
							}
							else
							{
								Function_293(iParam3, &bVar2);
								iVar0 = (iVar0 - 1);
							}
						}
					}
					bVar1 = Function_296(iParam3, 4);
					if (IntToFloat(bVar1) <= 1.0f)
					{
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = (TO_FLOAT(bVar1) / 1.0f);
						if (*uParam2 == fVar6)
						{
							SET_JOURNAL_ENTRY_PROGRESS(Function_253(4), *uParam2, false, 0);
						}
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_372(*iParam3, 4, uParam1, 4, uParam0, 0, 1009, 250.0f, Function_397());
					break;
			}
			break;
		
		case 0x00000004:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(4);
					Function_254(4, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(4), 0.0f, false, 0);
					Function_258(4, 2, 4294967295);
					Function_258(4, 3, 4294967295);
					Function_258(4, 4, 4294967295);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar6 = Function_287(4);
					bVar1 = Function_298(2, "ANIMAL", iParam3, 1, 0);
					if (bVar1 >= 0)
					{
						iVar0 = (GET_OBJECTSET_SIZE(*iParam3) - bVar1);
						while (Function_295(iParam3, &iVar0, &bVar2))
						{
							if (IS_OBJECT_VALID(bVar2))
							{
								if (Function_294(bVar2) == 24)
								{
									Function_293(iParam3, &bVar2);
									iVar0 = (iVar0 - 1);
									bVar1 = false;
								}
								else
								{
									bVar4 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar2)));
									if (IS_ACTOR_VALID(bVar4))
									{
										if (ANIMAL_ACTOR_GET_DOMESTICATION(bVar4) == 0)
										{
											Function_293(iParam3, &bVar2);
											iVar0 = (iVar0 - 1);
											bVar1 = false;
										}
										else if (Function_297(4, 2) == 4294967295)
										{
											if (ANIMAL_ACTOR_GET_SPECIES(bVar4) == Function_297(4, 3))
											{
												Function_293(iParam3, &bVar2);
												iVar0 = (iVar0 - 1);
												bVar1 = false;
											}
											else if (ANIMAL_ACTOR_GET_SPECIES(bVar4) == Function_297(4, 4))
											{
												Function_293(iParam3, &bVar2);
												iVar0 = (iVar0 - 1);
												bVar1 = false;
											}
											else
											{
												Function_258(4, 2, ANIMAL_ACTOR_GET_SPECIES(bVar4));
											}
										}
										else if (Function_297(4, 3) == 4294967295)
										{
											if (ANIMAL_ACTOR_GET_SPECIES(bVar4) == Function_297(4, 2))
											{
												Function_293(iParam3, &bVar2);
												iVar0 = (iVar0 - 1);
												bVar1 = false;
											}
											else if (ANIMAL_ACTOR_GET_SPECIES(bVar4) == Function_297(4, 4))
											{
												Function_293(iParam3, &bVar2);
												iVar0 = (iVar0 - 1);
												bVar1 = false;
											}
											else
											{
												Function_258(4, 3, ANIMAL_ACTOR_GET_SPECIES(bVar4));
											}
										}
										else if (Function_297(4, 4) == 4294967295)
										{
											if (ANIMAL_ACTOR_GET_SPECIES(bVar4) == Function_297(4, 3))
											{
												Function_293(iParam3, &bVar2);
												iVar0 = (iVar0 - 1);
												bVar1 = false;
											}
											else if (ANIMAL_ACTOR_GET_SPECIES(bVar4) == Function_297(4, 2))
											{
												Function_293(iParam3, &bVar2);
												iVar0 = (iVar0 - 1);
												bVar1 = false;
											}
											else
											{
												Function_258(4, 4, ANIMAL_ACTOR_GET_SPECIES(bVar4));
											}
										}
									}
								}
							}
						}
					}
					if (bVar1 >= 0)
					{
						Function_374(&iLocal_9);
						Function_379(&iLocal_9);
					}
					if (Function_376(&iLocal_9, 11.0f))
					{
						Function_258(4, 2, 4294967295);
						Function_258(4, 3, 4294967295);
						Function_258(4, 4, 4294967295);
						Function_284(iParam3);
						Function_374(&iLocal_9);
					}
					bVar1 = Function_296(iParam3, 4);
					if (IntToFloat(bVar1) <= 3.0f)
					{
						Function_394(4, 1);
						*uParam0 = 2;
						Function_284(iParam3);
						Function_278(4, 1);
					}
					else
					{
						*uParam2 = (TO_FLOAT(bVar1) / 3.0f);
						if (*uParam2 == fVar6)
						{
							Function_285(4, *uParam2, 1, bVar1, 4294967295, 4294967295, 19);
						}
					}
					break;
				
				case 0x00000002:
					*uParam2 = 1.0f;
					Function_369(*iParam3, 4, uParam1, uParam0, 1010, 250.0f, Function_397());
					break;
			}
			break;
	}
}

int Function_394(var uParam0, int iParam1) //Position: 0x1B966 / 112998
{
	return Function_395(uParam0, iParam1, GET_CURRENT_GAME_TIME());
}

int Function_395(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1B976 / 113014
{
	char* cVar0[16];
	bool bVar4;
	
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_TIMERSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar4 = Function_241();
	if (IS_LAYOUTREF_VALID(bVar4))
	{
		return DECOR_SET_FLOAT(bVar4, &cVar0, bParam2);
	}
	LOG_ERROR("AM_STORE_TIMER: failed to store float value in slot");
	return 0;
}

float Function_396(bool bParam0, bool bParam1) //Position: 0x1B9F0 / 113136
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

bool Function_397() //Position: 0x1BA0F / 113167
{
	return "challenge_01lvl2_128";
}

void Function_398(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x1BA2C / 113196
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	
	switch (*uParam1)
	{
		case 0x00000000:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(0);
					if (Global_83864.f_1264 > 0)
					{
						if (!Function_256(0, 2))
						{
							Function_254(0, 0);
							Function_255(0, 2);
							SET_JOURNAL_ENTRY_PROGRESS(Function_253(0), 0.0f, false, 0);
						}
						*uParam0 = 1;
					}
					break;
				
				case 0x00000001:
					fVar4 = Function_287(0);
					bVar1 = Function_298(2, "FLYING_ANIMAL", uParam3, 1, 0);
					if (bVar1 >= 0)
					{
						iVar0 = 0;
						while (Function_295(uParam3, &iVar0, &bVar2))
						{
							if (IS_OBJECT_VALID(bVar2))
							{
								if (!Function_306(bVar2))
								{
									Function_293(uParam3, &bVar2);
									iVar0 = (iVar0 - 1);
								}
								else if ((Function_294(bVar2) != 24 || Function_294(bVar2) != 25) || Function_294(bVar2) != 23)
								{
									Function_293(uParam3, &bVar2);
									iVar0 = (iVar0 - 1);
								}
							}
						}
					}
					bVar1 = Function_296(uParam3, 0);
					if (bVar1 >= 0)
					{
						if (IntToFloat(bVar1) <= 5.0f)
						{
							*uParam0 = 2;
						}
						else
						{
							*uParam2 = (TO_FLOAT(bVar1) / 5.0f);
							if (*uParam2 == fVar4)
							{
								Function_285(0, *uParam2, 1, bVar1, 4294967295, 4294967295, 10);
							}
						}
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_372(*uParam3, 0, uParam1, 1, uParam0, 0, 1001, 250.0f, Function_399());
					break;
			}
			break;
		
		case 0x00000001:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(0);
					Function_254(0, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(0), 0.0f, false, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar4 = Function_287(0);
					bVar1 = Function_298(2, "RABBIT", uParam3, 1, 0);
					if (bVar1 >= 0)
					{
						iVar0 = 0;
						while (Function_295(uParam3, &iVar0, &bVar2))
						{
							if (IS_OBJECT_VALID(bVar2))
							{
								if ((Function_294(bVar2) != 24 || Function_294(bVar2) != 25) || Function_294(bVar2) != 23)
								{
									Function_293(uParam3, &bVar2);
									iVar0 = (iVar0 - 1);
								}
							}
						}
					}
					bVar1 = Function_296(uParam3, 0);
					if (IntToFloat(bVar1) <= 5.0f)
					{
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = (TO_FLOAT(bVar1) / 5.0f);
						if (*uParam2 == fVar4)
						{
							Function_285(0, *uParam2, 1, bVar1, 4294967295, 4294967295, 10);
						}
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_372(*uParam3, 0, uParam1, 2, uParam0, 0, 1002, 250.0f, Function_399());
					break;
			}
			break;
		
		case 0x00000002:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(0);
					Function_254(0, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(0), 0.0f, false, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar4 = Function_287(0);
					bVar1 = Function_298(10, "_", uParam3, 1, 0);
					if (bVar1 >= 0)
					{
						iVar0 = 0;
						while (Function_295(uParam3, &iVar0, &bVar2))
						{
							if (IS_OBJECT_VALID(bVar2))
							{
								bVar3 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar2)));
								if (IS_ACTOR_VALID(bVar3))
								{
									if (!((GET_ACTOR_FACTION(bVar3) != 22 || GET_ACTOR_FACTION(bVar3) != 19) || (Global_3403 && (GET_ACTOR_FACTION(bVar3) != 8 || GET_ACTOR_FACTION(bVar3) != 10))))
									{
										Function_293(uParam3, &bVar2);
										iVar0 = (iVar0 - 1);
									}
								}
							}
						}
					}
					bVar1 = Function_296(uParam3, 0);
					if (IntToFloat(bVar1) <= 10.0f)
					{
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = (TO_FLOAT(bVar1) / 10.0f);
						if (*uParam2 == fVar4)
						{
							Function_285(0, *uParam2, 1, bVar1, 4294967295, 4294967295, 10);
						}
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_372(*uParam3, 0, uParam1, 3, uParam0, 0, 1003, 250.0f, Function_399());
					break;
			}
			break;
		
		case 0x00000003:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(0);
					Function_254(0, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(0), 0.0f, false, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar4 = Function_287(0);
					bVar1 = Function_298(2, "FLYING_ANIMAL", uParam3, 1, 0);
					if (bVar1 >= 0)
					{
						iVar0 = (GET_OBJECTSET_SIZE(*uParam3) - bVar1);
						while (Function_295(uParam3, &iVar0, &bVar2))
						{
							if (IS_OBJECT_VALID(bVar2))
							{
								bVar3 = GET_ACTOR_FROM_OBJECT(GET_EVENT_PERPETRATOR(GET_EVENT_FROM_OBJECT(bVar2)));
								if (!Function_306(bVar2))
								{
									Function_293(uParam3, &bVar2);
									iVar0 = (iVar0 - 1);
								}
								else if ((Function_294(bVar2) != 24 || Function_294(bVar2) != 25) || Function_294(bVar2) != 23)
								{
									Function_293(uParam3, &bVar2);
									iVar0 = (iVar0 - 1);
								}
								else if (IS_ACTOR_RIDING_VEHICLE(bVar3))
								{
									if (Function_396(GET_VEHICLE(bVar3), 0) > 2.0f)
									{
										Function_293(uParam3, &bVar2);
										iVar0 = (iVar0 - 1);
									}
								}
								else
								{
									Function_293(uParam3, &bVar2);
									iVar0 = (iVar0 - 1);
								}
							}
						}
					}
					bVar1 = Function_296(uParam3, 0);
					if (bVar1 >= 0)
					{
						if (IntToFloat(bVar1) <= 5.0f)
						{
							*uParam0 = 2;
						}
						else
						{
							*uParam2 = (TO_FLOAT(bVar1) / 5.0f);
							if (*uParam2 == fVar4)
							{
								Function_285(0, *uParam2, 1, bVar1, 4294967295, 4294967295, 10);
							}
						}
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_372(*uParam3, 0, uParam1, 4, uParam0, 0, 1004, 250.0f, Function_399());
					break;
			}
			break;
		
		case 0x00000004:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_257(0);
					Function_254(0, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_253(0), 0.0f, false, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar4 = Function_287(0);
					bVar1 = Function_298(11, "_", uParam3, 1, 0);
					if (bVar1 >= 0)
					{
						iVar0 = (GET_OBJECTSET_SIZE(*uParam3) - bVar1);
						while (Function_295(uParam3, &iVar0, &bVar2))
						{
							if (IS_OBJECT_VALID(bVar2))
							{
								bVar3 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar2)));
								if (IS_ACTOR_VALID(bVar3))
								{
									if (!(GET_ACTOR_FACTION(bVar3) != 22 || GET_ACTOR_FACTION(bVar3) != 19))
									{
										Function_293(uParam3, &bVar2);
										iVar0 = (iVar0 - 1);
									}
								}
							}
						}
					}
					bVar1 = Function_296(uParam3, 0);
					if (IntToFloat(bVar1) <= 10.0f)
					{
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = (TO_FLOAT(bVar1) / 10.0f);
						if (*uParam2 == fVar4)
						{
							Function_285(0, *uParam2, 1, bVar1, 4294967295, 4294967295, 10);
						}
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_369(*uParam3, 0, uParam1, uParam0, 1005, 250.0f, Function_399());
					break;
			}
			break;
	}
}

bool Function_399() //Position: 0x1C017 / 114711
{
	return "challenge_01_128";
}

var Function_400(int iParam0) //Position: 0x1C030 / 114736
{
	int iVar0;
	int iVar1;
	
	iVar0 = *iParam0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 19)
	{
		if (Global_84611[iVar1140] == iVar0)
		{
			return iVar1;
		}
		iVar1++;
	}
	return 4294967295;
}

bool Function_401(char* cParam0) //Position: 0x1C062 / 114786
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (SC_CHALLENGE_IS_VAR_VALID(cParam0, "nAAID"))
	{
		iVar0 = SC_CHALLENGE_GET_VAR_INT(cParam0, "nAAID");
	}
	switch (iVar0)
	{
		case 0x00000000:
			return Function_110(464) < 0.0f;
			break;
		
		case 0x00000001:
			return Function_110(459) < 0.0f;
			break;
		
		case 0x00000002:
			return Function_110(463) < 0.0f;
			break;
		
		case 0x00000003:
			return Function_110(462) < 0.0f;
			break;
		
		case 0x00000004:
			return Function_110(466) < 0.0f;
			break;
		
		case 0x00000005:
			return Function_110(460) < 0.0f;
			break;
		
		case 0x00000006:
			return Function_110(465) < 0.0f;
			break;
		
		case 0x00000007:
			return Function_110(461) < 0.0f;
			break;
		
		case 0x00000008:
			return Function_402(Global_30717[0]);
			break;
		
		case 0x00000009:
			return StackVal < 3;
			break;
	}
	return iVar1;
}

int Function_402(bool bParam0) //Position: 0x1C14A / 115018
{
	if (!Function_18(bParam0))
	{
		return 0;
	}
	return Function_142(&(Global_29008[bParam0]), 4096);
}

bool Function_403() //Position: 0x1C168 / 115048
{
	if (Function_1())
	{
		return (Function_404() != 1 || Function_404() != 0);
	}
	return 0;
}

int Function_404() //Position: 0x1C181 / 115073
{
	return Global_79349.f_16;
}

void Function_405() //Position: 0x1C18D / 115085
{
	Function_422();
	Function_409();
	if (Function_185("npressDemo"))
	{
		Function_408(3, 3, 0);
		Function_407(3, 6);
		Function_202(11, 0, 0);
	}
	Function_406();
	Global_88795 = 1;
	return;
}

void Function_406() //Position: 0x1C1C7 / 115143
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Global_56612[iVar09] = 4294967294;
		Global_56612[iVar09].f_4 = 0.0f;
		Global_56612[iVar09].f_8 = 0;
		Global_56612[iVar09].f_20 = 0;
		Global_56612[iVar09].f_24 = 0;
		iVar0++;
	}
	Global_56612.f_296 = 0;
	Global_56612.f_300 = 0;
	Global_56612.f_292 = 0;
	return;
}

void Function_407(int iParam0, int iParam1) //Position: 0x1C227 / 115239
{
	if (Function_1() || Global_34165.f_44)
	{
		Global_49399[iParam022].f_8 = iParam1;
		Global_49399[iParam022].f_4 = 0;
		Global_49399[iParam022].f_12 = 0.0f;
	}
	else
	{
		Global_49310[iParam022].f_8 = iParam1;
		Global_49310[iParam022].f_4 = 0;
		Global_49310[iParam022].f_12 = 0.0f;
	}
	return;
}

var Function_408(bool bParam0, int iParam1, int iParam2) //Position: 0x1C27A / 115322
{
	struct<6> Var0;
	var uVar6;
	var uVar10;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_252(bParam0) };
	if (Function_1() || Global_34165.f_44)
	{
		Global_49399[bParam022].f_24 = CREATE_JOURNAL_ENTRY(&Var0, iParam1, false, iParam2);
		memcpy(&uVar6, StackVal, StackVal, StackVal, StackVal, StackVal, Function_251(bParam0), 4);
		UI_SET_STRING(&Var0, UI_GET_STRING(&uVar6));
		return Global_49399[bParam022].f_24;
	}
	Global_49310[bParam022].f_24 = CREATE_JOURNAL_ENTRY(&Var0, iParam1, false, iParam2);
	memcpy(&uVar10, StackVal, StackVal, StackVal, StackVal, StackVal, Function_251(bParam0), 4);
	UI_SET_STRING(&Var0, UI_GET_STRING(&uVar10));
	return Global_49310[bParam022].f_24;
}

void Function_409() //Position: 0x1C2F9 / 115449
{
	if (Global_34165.f_44)
	{
		Function_419(0, &Global_49399, "AM_SS", 3, 0, Function_421());
		Function_419(1, &Global_49399, "AM_MH", 3, 0, Function_418());
		Function_419(2, &Global_49399, "AM_SU", 3, 0, Function_417());
		Function_419(3, &Global_49399, "AM_TH", 3, 0, Function_416());
		Function_419(7, &Global_49399, "AM_LB", 3, 1, Function_416());
		Function_419(4, &Global_49399, "AM_SS2", 3, 1, Function_415());
		Function_419(5, &Global_49399, "AM_MH2", 3, 1, Function_414());
		Function_419(6, &Global_49399, "AM_SU2", 3, 1, Function_413());
		Function_419(8, &Global_49399, "AM_LB2", 3, 1, Function_416());
		Function_419(9, &Global_49399, "AM_LB3", 3, 1, Function_416());
		Function_419(22, &Global_49399, "OC_MW", 3, 1, Function_412());
		Function_419(23, &Global_49399, "OC_BO", 3, 1, Function_412());
		Function_419(24, &Global_49399, "OC_B2", 3, 1, Function_411());
		Function_419(10, &Global_49399, "WP_DYN", 5, 1, Function_421());
		Function_419(11, &Global_49399, "WP_DYN2", 5, 1, Function_415());
		Function_419(12, &Global_49399, "WP_PYR", 5, 1, Function_421());
		Function_419(13, &Global_49399, "WP_PYR2", 5, 1, Function_415());
		Function_419(14, &Global_49399, "ST_TF", 8, 1, Function_410());
		Function_419(15, &Global_49399, "ST_TH", 8, 1, Function_410());
		Function_419(16, &Global_49399, "ST_TS", 8, 1, Function_410());
		Function_419(17, &Global_49399, "ST_TW", 8, 1, Function_410());
		Function_419(18, &Global_49399, "ST_RH", 8, 1, Function_410());
		Function_419(19, &Global_49399, "ST_RW", 8, 1, Function_410());
		Function_419(21, &Global_49399, "ST_RC", 8, 1, Function_410());
		Function_419(20, &Global_49399, "ST_FD", 8, 1, Function_410());
	}
	else
	{
		Function_419(0, &Global_49310, "AM_SS", 3, 0, "challenge_01");
		Function_419(1, &Global_49310, "AM_MH", 3, 0, "challenge_02");
		Function_419(2, &Global_49310, "AM_SU", 3, 0, "challenge_03");
		Function_419(3, &Global_49310, "AM_TH", 3, 0, "challenge_04");
	}
	return;
}

bool Function_410() //Position: 0x1C5A2 / 116130
{
	return "SC_Travel_Icon";
}

bool Function_411() //Position: 0x1C5B9 / 116153
{
	return "challenge_04lvl2";
}

bool Function_412() //Position: 0x1C5D2 / 116178
{
	return "challenge_04";
}

bool Function_413() //Position: 0x1C5E7 / 116199
{
	return "challenge_03lvl2";
}

bool Function_414() //Position: 0x1C600 / 116224
{
	return "challenge_02lvl2";
}

bool Function_415() //Position: 0x1C619 / 116249
{
	return "challenge_01lvl2";
}

bool Function_416() //Position: 0x1C632 / 116274
{
	return "challenge_05";
}

bool Function_417() //Position: 0x1C647 / 116295
{
	return "challenge_03";
}

bool Function_418() //Position: 0x1C65C / 116316
{
	return "challenge_02";
}

void Function_419(bool bParam0, int iParam1, char* cParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x1C671 / 116337
{
	int iVar0;
	int iVar1;
	
	strcpy(iParam1[bParam022] + 16, cParam2, 8);
	(*iParam1)[bParam022] = bParam0;
	iParam1[bParam022]->f_84 = bParam4;
	if (Global_3364 || Global_83864.f_1276)
	{
		iParam1[bParam022]->f_8 = 0;
		if (Global_34165.f_44)
		{
			Global_49399[bParam022].f_28 = 0;
			Global_49399[bParam022].f_12 = 0.0f;
			iVar0 = 0;
			while (iVar0 <= 11)
			{
				(*&Global_49399[bParam022] + 36)[iVar0] = 0.0f;
				iVar0++;
			}
		}
		else
		{
			Global_49310[bParam022].f_28 = 0;
			Global_49310[bParam022].f_12 = 0.0f;
			iVar0 = 0;
			while (iVar0 <= 11)
			{
				(*&Global_49310[bParam022] + 36)[iVar0] = 0.0f;
				iVar0++;
			}
		}
	}
	if (Global_83864.f_1276)
	{
		Function_264(bParam0, 4);
		Function_264(bParam0, 2);
		Function_420(bParam0, 0);
		Function_420(bParam0, 1);
		iVar1 = Function_307(bParam0);
		Function_284(&iVar1);
		Function_278(bParam0, 1);
	}
	if (bParam4)
	{
		if (!Global_34165.f_44)
		{
			iParam1[bParam022]->f_4 = 1;
			iParam1[bParam022]->f_8 = 0;
			return;
		}
	}
	if (!IS_STRING_VALID(bParam5))
	{
		bParam5 = "challenge_04";
	}
	Function_408(bParam0, iParam3, bParam5);
	Function_254(bParam0, 1);
	if (StackVal && StackVal != 2 != 10)
	{
		Function_249(bParam0);
	}
	else
	{
		iParam1[bParam022]->f_4 = 0;
		iParam1[bParam022]->f_12 = 0.0f;
		SET_JOURNAL_ENTRY_PROGRESS(Function_253(bParam0), 0.0f, true, 0);
	}
}

void Function_420(bool bParam0, bool bParam1) //Position: 0x1C7E2 / 116706
{
	if (Global_34165.f_44)
	{
		REMOVE_JOURNAL_ENTRY(Global_49399[bParam022].f_24, bParam1);
	}
	else
	{
		REMOVE_JOURNAL_ENTRY(Global_49310[bParam022].f_24, bParam1);
	}
	return;
}

bool Function_421() //Position: 0x1C80F / 116751
{
	return "challenge_01";
}

void Function_422() //Position: 0x1C824 / 116772
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	char* cVar3[16];
	char* cVar7[16];
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (Global_63000 - 1))
	{
		Function_282(bVar0);
		bVar0++;
	}
	bVar1 = Function_241();
	bVar2 = Function_244();
	if (Global_34165.f_44)
	{
		bVar0 = false;
		while (bVar0 < 35)
		{
			strcpy(&cVar3, "nAM_OBJSET", 16);
			stradd(&cVar3, INT_TO_STRING(bVar0), 16);
			CREATE_OBJECTSET_IN_LAYOUT(&cVar3, bVar1, 4294967295, 0);
			bVar0++;
		}
	}
	else
	{
		bVar0 = false;
		while (bVar0 < 3)
		{
			strcpy(&cVar7, "nAM_OBJSET", 16);
			stradd(&cVar7, INT_TO_STRING(bVar0), 16);
			CREATE_OBJECTSET_IN_LAYOUT(&cVar7, bVar1, 4294967295, 0);
			bVar0++;
		}
	}
	ITERATE_EVERYWHERE(bVar2);
	ITERATE_ON_OBJECT_TYPE(bVar2, 3);
	ITERATE_IN_LAYOUT(bVar2, bVar1);
	return;
}

