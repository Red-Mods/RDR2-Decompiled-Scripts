//Decompiled with MagicRDR v1.0
//Function Count : 471
//Statics Count : 143
//Natives Count : 354
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
	var uLocal_9 = 0;
	int iLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	int iLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	struct<85> Local_16 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	int iLocal_140 = 0;
	bool bLocal_141 = false;
	float fLocal_142 = 0.0f;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	
	iLocal_62 = 31;
	iLocal_63 = 33;
	iLocal_64 = 1;
	fLocal_65 = 2.0f;
	Function_256(&(vLocal_67[09]));
	Function_246(&(vLocal_67[19]));
	Function_233(&(vLocal_67[29]));
	Function_188(&(vLocal_67[39]));
	Function_67(&(vLocal_67[49]));
	Function_55(&(vLocal_67[59]));
	Function_39(&(vLocal_67[69]));
	Function_3(&(vLocal_67[79]));
	iVar0 = 0;
	while (iVar0 <= vLocal_67)
	{
		if (vLocal_67[iVar09].f_28 || !Global_34165.f_44)
		{
			Call_Loc(vLocal_67[iVar09]);
			vLocal_67[iVar09].f_32 = 1;
		}
		else
		{
			vLocal_67[iVar09].f_32 = 0;
		}
		iVar0++;
	}
	while (!Function_2(256) && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	while (!IS_EXITFLAG_SET())
	{
		iLocal_140 = 100;
		SET_DEBUG_DRAW((Global_30900[8] || Global_30900[9]));
		if (GET_DEBUG_DRAW_STATE())
		{
			iLocal_140 = 0;
		}
		iVar0 = 0;
		while (iVar0 <= vLocal_67)
		{
			if (vLocal_67[iVar09].f_28 || !Function_1())
			{
				if (bLocal_141)
				{
					PRINTSTRING("Time for Exec ");
					PRINTSTRING(&vLocal_67[iVar09] + 12);
					PRINTSTRING(": ");
					fLocal_142 = GET_PROFILE_TIME();
				}
				Call_Loc(vLocal_67[iVar09].y);
				if (StackVal)
				{
					iLocal_140 = 0;
				}
				if (bLocal_141)
				{
					PRINTFLOAT((GET_PROFILE_TIME() - fLocal_142));
					PRINTNL();
				}
				if (!IS_EXITFLAG_SET() && !iLocal_140 != 0)
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
	while (iVar0 <= vLocal_67)
	{
		if (vLocal_67[iVar09].f_32)
		{
			Call_Loc(vLocal_67[iVar09].z);
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
	int iVar15;
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
				iVar15 = Function_32(bVar13);
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
							SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar13, 1);
							TASK_CLEAR(bVar13);
							TASK_VEHICLE_LEAVE(bVar13);
							TASK_PRIORITY_SET(bVar13, 2);
							Function_30(bVar13, 6);
						}
						else
						{
							SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar13, 1);
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
									TASK_PRIORITY_SET(bVar13, 0);
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
										TASK_PRIORITY_SET(bVar13, 0);
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
												Function_16(bVar13, GET_VOLUME_FROM_OBJECT(bVar11), 2, 60.0f, iVar15);
											}
											else
											{
												TASK_CLEAR(bVar13);
												TASK_FLEE_ACTOR(bVar13, GET_ACTOR_FROM_OBJECT(Function_29()), -1.0f, -1.0f, 0, 0, 0);
												TASK_PRIORITY_SET(bVar13, 2);
											}
											break;
										
										case 0x0000000F:
											TASK_FOLLOW_OBJECT_AT_DISTANCE(bVar13, GET_ACTOR_FROM_OBJECT(bVar11), 3.0f, iVar15);
											TASK_PRIORITY_SET(bVar13, 2);
											break;
										
										case 0x00000009:
											Function_16(bVar13, GET_VOLUME_FROM_OBJECT(bVar11), 2, 60.0f, iVar15);
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
										TASK_PRIORITY_SET(bVar13, 0);
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

bool Function_10(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x99F / 2463
{
	return CAMERA_IS_VISIBLE_OBJECT(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
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

void Function_16(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0xB65 / 2917
{
	var uVar0;
	var uVar3;
	var uVar6;
	
	if (IS_VOLUME_VALID(bParam1))
	{
		GET_VOLUME_CENTER(bParam1, &uVar0);
		if (FIND_GROUND_INTERSECTION(&uVar0, 100.0f, &uVar3, &uVar6))
		{
			TASK_GO_NEAR_COORD(bParam0, &uVar3, bParam3, iParam4);
		}
		else
		{
			TASK_GO_NEAR_COORD(bParam0, &uVar0, bParam3, iParam4);
		}
		TASK_PRIORITY_SET(bParam0, iParam2);
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
					if ((GET_CURRENT_GAME_TIME() - *fParam2) < 1.3f)
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
			*uParam1 = 0.64f;
			*uParam2 = 0.22f;
			*uParam3 = 0.26f;
			break;
		
		case 0x00000002:
			*uParam1 = 0.34f;
			*uParam2 = 0.58f;
			*uParam3 = 0.74f;
			break;
		
		case 0x00000000:
			*uParam1 = 0.83f;
			*uParam2 = 0.65f;
			*uParam3 = 0.36f;
			break;
		
		case 0x00000003:
			*uParam1 = 0.41f;
			*uParam2 = 0.57f;
			*uParam3 = 0.23f;
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
			*uParam1 = 0.71f;
			*uParam2 = 0.64f;
			*uParam3 = 0.57f;
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
	if (iParam0->f_12 > 0.001f || iParam0->f_12 < 0.999f)
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
	*iParam0 = 8004;
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
	
	if (Global_63406.f_508 < GET_CURRENT_GAME_TIME() || Function_65())
	{
		return 0;
	}
	if ((StackVal || !Function_64(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, IS_OBJECT_VALID(Global_63406[021].f_32), Global_63406[021])) && Global_63406[021].f_44)
	{
		if (GET_OBJECT_TYPE(Global_63406[021].f_32) == 15)
		{
			if (!IS_ACTOR_ALIVE(GET_ACTOR_FROM_OBJECT(Global_63406[021].f_32)))
			{
				Function_63(0);
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
						Function_62(&(Global_63406[021]), 4.0f, 0, 2, 1, 0);
						fVar6 = 4.0f;
						break;
					
					case 0x00000003:
						PRINT_SMALL_FORMAT(4.0f, &(Global_63406[021]), &Global_63406[021] + 48, "", "", "", 2, 0, 0);
						fVar6 = 4.0f;
						break;
					
					case 0x00000001:
						Function_61(&(Global_63406[021]), 10.0f, 1, 0, 2, 1, 0);
						fVar6 = 10.0f;
						break;
					
					case 0x00000004:
						PRINT_HELP_FORMAT(10.0f, &(Global_63406[021]), &Global_63406[021] + 48, "", "", "", 2, 0, 0);
						fVar6 = 10.0f;
						break;
					
					case 0x00000002:
						Function_58(&(Global_63406[021]), 7.5f, 1, 2, 0, 0, 0, 0);
						fVar6 = 7.5f;
						break;
					
					case 0x00000005:
						PRINT_OBJECTIVE_FORMAT(7.5f, &(Global_63406[021]), &Global_63406[021] + 48, "", "", "", 0, 2, 0, 0, 0);
						fVar6 = 7.5f;
						break;
				}
				Global_63406.f_508 = ((GET_CURRENT_GAME_TIME() + 0.5f) + fVar6);
				Function_63(0);
			}
		}
		else if (VDIST(vVar3, vVar0) <= Global_63406[021].f_36 && Global_63406[021].f_80)
		{
			Function_63(0);
		}
	}
	else if (Global_63406[021].f_44)
	{
		Function_63(0);
	}
	return 0;
}

void Function_58(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x1C0C / 7180
{
	struct<4> Var0;
	int iVar4;
	
	if (bParam4)
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_59(Global_6269) };
		}
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, &Var0, 0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, iVar4, iParam5, iParam6);
	}
}

struct<16> Function_59(int iParam0) //Position: 0x1C91 / 7313
{
	char* cVar0[16];
	
	if (!Function_60())
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

bool Function_60() //Position: 0x1CD0 / 7376
{
	if (Function_9(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_61(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x1CEB / 7403
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_59(Global_6269) };
		}
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

void Function_62(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1D66 / 7526
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_59(Global_6269) };
		}
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, &Var0, iParam5);
	}
	else
	{
		iVar4 = "";
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, iVar4, iParam5);
	}
}

void Function_63(bool bParam0) //Position: 0x1DDD / 7645
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

bool Function_64(struct<41> Param0) //Position: 0x1EEC / 7916
{
	if (((Param0.f_40 != 1 || Param0.f_40 != 4) || Param0.f_40 != 2) || Param0.f_40 != 5)
	{
		return 0;
	}
	return 1;
}

bool Function_65() //Position: 0x1F17 / 7959
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_66() //Position: 0x1F44 / 8004
{
	return;
}

void Function_67(int iParam0) //Position: 0x1F4A / 8010
{
	strcpy(iParam0 + 12, "OUTFIT-MANAGER", 16);
	*iParam0 = 33260;
	iParam0->f_4 = 8073;
	iParam0->f_8 = 8067;
	iParam0->f_28 = 0;
	return;
}

void Function_68() //Position: 0x1F83 / 8067
{
	return;
}

int Function_69() //Position: 0x1F89 / 8073
{
	char* cVar0[32];
	bool bVar8;
	bool bVar9;
	var uVar10;
	
	if (!IS_ACTOR_VALID(Global_34573))
	{
		return 0;
	}
	if (!IS_ACTOR_ALIVE(Global_34573))
	{
		return 0;
	}
	Function_184();
	Function_180();
	if (!Function_179(13, 4))
	{
		if (Global_12976.f_152 == 5)
		{
			Function_178(13, 1, 0, 0, 0);
			Function_167(13, 1, 0, 0, 1);
		}
	}
	if (DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
	{
		if ((((!Global_3380 && !Global_3392) && !Global_3384) && !Function_65()) && Function_166() != 0)
		{
			bVar8 = DECOR_GET_INT(Global_34573, "outfitScrap");
			strcpy(&cVar0, "OUT_", 32);
			stradd(&cVar0, &Global_27774[bVar813] + 32, 32);
			DECOR_REMOVE(Global_34573, "outfitScrap");
			PRINT_OBJECTIVE_FORMAT(7.5f, "out_Journal_Edit", &cVar0, false, false, false, 0, 2, 0, 0, 0);
		}
	}
	if (DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
	{
		if ((!Global_3380 && !Function_65()) && Function_166() != 0)
		{
			bVar8 = DECOR_GET_INT(Global_34573, "outfitDisc");
			strcpy(&cVar0, "OUT_", 32);
			stradd(&cVar0, &Global_27774[bVar813] + 32, 32);
			DECOR_REMOVE(Global_34573, "outfitDisc");
			PRINT_OBJECTIVE_FORMAT(7.5f, "out_Journal_Add", &cVar0, false, false, false, 0, 2, 0, 0, 0);
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
			if (!Function_179(Global_28179, 1024))
			{
				STREAMING_REQUEST_ACTOR(bVar9, SHIFT_LEFT(true, Global_27774[Global_2817913].f_20), false);
				STREAMING_EVICT_ACTOR(bVar9, SHIFT_LEFT(true, Global_27774[Global_2817813].f_20));
				Function_165(Global_28179, 1024);
				Function_164(Global_28178, 1024);
				Function_164(Global_28178, 2048);
				Function_163(Global_28178);
			}
			if (!Function_179(Global_28179, 4096) && HUD_IS_FADED())
			{
				SWITCH_ACTOR_ENUM_VARIATION(Global_34573, Global_27774[Global_2817913].f_20);
				Function_165(Global_28179, 4096);
				Function_164(Global_28178, 4096);
			}
			if (!Function_179(Global_28179, 2048))
			{
				if (STREAMING_IS_ACTOR_LOADED(bVar9, 4294967295))
				{
					Function_165(Global_28179, 2048);
				}
			}
			if (!HUD_IS_FADED())
			{
				if (!HUD_IS_FADING())
				{
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
			}
			if ((HUD_IS_FADED() && Function_179(Global_28179, 2048)) && Function_179(Global_28179, 4096))
			{
				if (Global_28179 != 1 || Global_28178 != 1)
				{
					if (Global_29006 == Global_30717[0])
					{
						Function_157(0, 1, 0);
					}
				}
				Global_28178 = Global_28179;
				Function_149(Global_28179);
				if (Function_179(Global_28179, 8192))
				{
					Function_164(Global_28179, 8192);
					DECOR_SET_BOOL(Global_34573, "OutfitChanged", true);
					HUD_FADE_IN(0.25f, 1065353216);
				}
			}
		}
	}
	if (Function_2(0x1000000))
	{
		if (!Function_2(0x2000000))
		{
			STREAMING_REQUEST_ACTOR(true, SHIFT_LEFT(true, Global_27774[Global_2817913].f_20), false);
			Function_148(0x2000000);
		}
		else if ((Function_2(0x2000000) && HUD_IS_FADED()) && GET_ACTOR_ENUM(Global_34573) == 1)
		{
			uVar10 = Function_147(Global_34573);
			Function_145();
			Global_34573 = RESPAWN_PLAYER_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Global_34573, "player", 1, Global_34574, 0.0f, uVar10, 0.0f, 0);
			Function_135();
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
			Function_134(0x1000000);
			Function_134(0x2000000);
			HUD_FADE_IN(0.5f, 1065353216);
		}
	}
	bVar8 = false;
	while (bVar8 <= Global_27774)
	{
		if (Global_27774[bVar813] != 4294967295)
		{
			Function_89(bVar8);
			if (Function_71(bVar8))
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
					Function_70();
				}
			}
		}
		bVar8++;
	}
	return 0;
}

void Function_70() //Position: 0x241F / 9247
{
	Global_28180 = 4294967295;
	if (IS_BLIP_VALID(StackVal))
	{
		REMOVE_BLIP(StackVal);
	}
	Global_28180.f_12 = 1;
	return;
}

bool Function_71(int iParam0) //Position: 0x2442 / 9282
{
	int iVar0;
	
	if (Function_88(iParam0))
	{
		if (Function_87(iParam0) && !Function_86(iParam0))
		{
			iVar0 = Function_85(iParam0);
			switch (iParam0)
			{
				case 0x00000004:
					switch (iVar0)
					{
						case 0x00000001:
							return 1;
							break;
						
						case 0x00000002:
							if (Function_82(6, 0) || Function_82(12, 0))
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
							if (Function_81(13))
							{
								if (Function_73(&(Global_63541[1455]), 14, 1, 1) && !Function_72(14))
								{
									return 1;
								}
								return 0;
							}
							if (Function_81(12))
							{
								if ((Function_73(&(Global_63541[1355]), 13, 1, 1) && !Function_72(13)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), Global_63541[1355].f_156))
								{
									return 1;
								}
								return 0;
							}
							if (Function_81(11))
							{
								if ((Function_73(&(Global_63541[1255]), 12, 1, 1) && !Function_72(12)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), Global_63541[1255].f_156))
								{
									return 1;
								}
								return 0;
							}
							if (Function_81(10))
							{
								if ((Function_73(&(Global_63541[1155]), 11, 1, 1) && !Function_72(11)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), Global_63541[1155].f_156))
								{
									return 1;
								}
								return 0;
							}
							if (Function_82(5, 0))
							{
								if (Function_73(&(Global_63541[1055]), 10, 1, 1) && !Function_72(10))
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
							if (Function_81(26))
							{
								if (Function_73(&(Global_63541[2755]), 27, 1, 1) && !Function_72(27))
								{
									return 1;
								}
								return 0;
							}
							if (Function_81(25))
							{
								if (Function_73(&(Global_63541[2655]), 26, 1, 1) && !Function_72(26))
								{
									return 1;
								}
								return 0;
							}
							if (Function_81(24))
							{
								if (Function_73(&(Global_63541[2555]), 25, 1, 1) && !Function_72(25))
								{
									return 1;
								}
								return 0;
							}
							if (Function_81(23))
							{
								if (Function_73(&(Global_63541[2455]), 24, 1, 1) && !Function_72(24))
								{
									return 1;
								}
								return 0;
							}
							if (Function_82(26, 0))
							{
								if (Function_73(&(Global_63541[2355]), 23, 1, 1) && !Function_72(23))
								{
									return 1;
								}
								return 0;
							}
							return 0;
							break;
						
						case 0x00000008:
							if (Function_81(55))
							{
								if ((Function_73(&(Global_63541[5655]), 56, 1, 1) && !Function_72(56)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), Global_63541[5655].f_156))
								{
									return 1;
								}
								return 0;
							}
							if (Function_81(54))
							{
								if ((Function_73(&(Global_63541[5555]), 55, 1, 1) && !Function_72(55)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), Global_63541[5555].f_156))
								{
									return 1;
								}
								return 0;
							}
							if (Function_81(27))
							{
								if (Function_73(&(Global_63541[5455]), 54, 1, 1) && !Function_72(54))
								{
									return 1;
								}
								return 0;
							}
							return 0;
							break;
						
						case 0x00000020:
							if (Function_82(41, 0))
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
							if (Function_81(52))
							{
								if ((Function_73(&(Global_63541[5355]), 53, 1, 1) && !Function_72(53)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), Global_63541[5355].f_156))
								{
									return 1;
								}
								return 0;
							}
							if (Function_81(51))
							{
								if (Function_73(&(Global_63541[5255]), 52, 1, 1) && !Function_72(52))
								{
									return 1;
								}
								return 0;
							}
							if (Function_81(50))
							{
								if (Function_73(&(Global_63541[5155]), 51, 1, 1) && !Function_72(51))
								{
									return 1;
								}
								return 0;
							}
							if (Function_81(49))
							{
								if (Function_73(&(Global_63541[5055]), 50, 1, 1) && !Function_72(50))
								{
									return 1;
								}
								return 0;
							}
							if (Function_82(17, 0))
							{
								if (Function_73(&(Global_63541[4955]), 49, 1, 1) && !Function_72(49))
								{
									return 1;
								}
								return 0;
							}
							return 0;
							break;
						
						case 0x00000020:
							if (Function_82(57, 0))
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
							if (Function_81(19))
							{
								if (Function_73(&(Global_63541[2055]), 20, 1, 1) && !Function_72(20))
								{
									return 1;
								}
								return 0;
							}
							if (Function_81(18))
							{
								if ((Function_73(&(Global_63541[1955]), 19, 1, 1) && !Function_72(19)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), Global_63541[1955].f_156))
								{
									return 1;
								}
								return 0;
							}
							if (Function_81(17))
							{
								if (Function_73(&(Global_63541[1855]), 18, 1, 1) && !Function_72(18))
								{
									return 1;
								}
								return 0;
							}
							if (Function_81(16))
							{
								if ((Function_73(&(Global_63541[1755]), 17, 1, 1) && !Function_72(17)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), Global_63541[1755].f_156))
								{
									return 1;
								}
								return 0;
							}
							if (Function_81(15))
							{
								if (Function_73(&(Global_63541[1655]), 16, 1, 1) && !Function_72(16))
								{
									return 1;
								}
								return 0;
							}
							if (Function_82(8, 0))
							{
								if (Function_73(&(Global_63541[1555]), 15, 1, 1) && !Function_72(15))
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
				
				case 0x00000010:
					return 0;
					break;
				
				case 0x00000011:
					return 0;
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

bool Function_72(int iParam0) //Position: 0x2A14 / 10772
{
	if (Global_74542[iParam010] == 7)
	{
		return 1;
	}
	return 0;
}

int Function_73(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x2A29 / 10793
{
	if (!iParam0->f_172 != 0)
	{
		if (Function_80(iParam0 + 172, 4))
		{
			if (!Function_79(iParam1))
			{
				return 0;
			}
		}
		if (Function_80(iParam0 + 172, 1))
		{
			if (Global_63541[iParam0->f_16855].f_20 != Global_63541[iParam155].f_20 || iParam3)
			{
				if (!Function_81(iParam0->f_168))
				{
					return 0;
				}
			}
		}
		if (Function_80(iParam0 + 172, 2) && Global_3365)
		{
			if (!Function_82(iParam0->f_176, 0))
			{
				return 0;
			}
		}
		if (Function_80(iParam0 + 172, 8) && Global_3365)
		{
			if (!Function_75(iParam0->f_164, 0))
			{
				return 0;
			}
		}
		if (!bParam2)
		{
			return 1;
		}
		return Function_74(iParam0);
	}
	return 1;
}

int Function_74(int iParam0) //Position: 0x2ADD / 10973
{
	if (!iParam0->f_172 != 0)
	{
		switch (Global_63399)
		{
			case 0x00000001:
				if (!Function_80(iParam0 + 172, 32))
				{
					return 0;
				}
				break;
			
			case 0x00000002:
				if (!Function_80(iParam0 + 172, 64))
				{
					return 0;
				}
				break;
			
			case 0x00000004:
				if (!Function_80(iParam0 + 172, 128))
				{
					return 0;
				}
				break;
			
			case 0x00000008:
				if (!Function_80(iParam0 + 172, 256))
				{
					return 0;
				}
				break;
			
			case 0x00000010:
				if (!Function_80(iParam0 + 172, 512))
				{
					return 0;
				}
				break;
			
			case 0x00000020:
				if (!Function_80(iParam0 + 172, 1024))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_75(int iParam0, bool bParam1) //Position: 0x2B89 / 11145
{
	if (!Function_76(iParam0))
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

bool Function_76(int iParam0) //Position: 0x2BBF / 11199
{
	if (!Function_78(iParam0))
	{
		return 0;
	}
	if (!Function_77(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_77(int iParam0) //Position: 0x2BE3 / 11235
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_78(int iParam0) //Position: 0x2BF8 / 11256
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

bool Function_79(int iParam0) //Position: 0x2C0F / 11279
{
	return StackVal;
}

bool Function_80(var uParam0, int iParam1) //Position: 0x2C1F / 11295
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_81(int iParam0) //Position: 0x2C3B / 11323
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

bool Function_82(int iParam0, bool bParam1) //Position: 0x2C50 / 11344
{
	int iVar0;
	
	iVar0 = Function_83(iParam0);
	if (!Function_78(iVar0))
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

int Function_83(int iParam0) //Position: 0x2C8D / 11405
{
	if (!Function_84(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_84(int iParam0) //Position: 0x2CA7 / 11431
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

int Function_85(int iParam0) //Position: 0x2CBD / 11453
{
	int iVar0;
	int iVar1;
	
	if (!Function_88(iParam0))
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

bool Function_86(int iParam0) //Position: 0x2D0C / 11532
{
	if (!Function_88(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_179(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_87(int iParam0) //Position: 0x2D5D / 11613
{
	if (!Function_88(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_179(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

bool Function_88(int iParam0) //Position: 0x2DAF / 11695
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

void Function_89(int iParam0) //Position: 0x2DC5 / 11717
{
	int iVar0;
	
	if (!Function_88(iParam0))
	{
		return;
	}
	if (Function_86(iParam0))
	{
		return;
	}
	if (!Function_179(iParam0, 1048576))
	{
		return;
	}
	iVar0 = Function_133(iParam0);
	if (iVar0 >= Global_27774[iParam013].f_24)
	{
		Global_27774[iParam013].f_24 = iVar0;
		if (Global_27774[iParam013].f_24 == Global_27774[iParam013].f_28)
		{
			Function_90(iParam0, 0, 1);
		}
	}
	return;
}

void Function_90(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2E28 / 11816
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_88(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_86(bParam0))
	{
		if (!Function_87(bParam0))
		{
			Function_178(bParam0, 1, 0, 0, 1);
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
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, false, false, false, 0, 2, 0, 0, 0);
			}
		}
		Function_132(457, 1, 0, 0);
		Function_165(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (bParam2)
		{
			if (!Function_131(0, 0, 1, 1))
			{
				Function_93(1);
				Function_92(1, 0);
			}
			else
			{
				Function_91();
			}
		}
	}
	return;
}

void Function_91() //Position: 0x2FC7 / 12231
{
	return;
}

void Function_92(int iParam0, int iParam1) //Position: 0x2FCD / 12237
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

void Function_93(bool bParam0) //Position: 0x300F / 12303
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_122();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_95();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_94(&Global_63095, 1);
		Function_94(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_94(int iParam0, int iParam1) //Position: 0x3060 / 12384
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

void Function_95() //Position: 0x3073 / 12403
{
	Function_120();
	Function_119();
	Function_119();
	Function_118();
	Function_118();
	Function_117();
	Function_117();
	Function_100(0);
	Function_100(0);
	if (!Function_1())
	{
		Function_145();
		Function_99();
		Function_98();
		Function_97();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_96();
	return;
}

void Function_96() //Position: 0x30C5 / 12485
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

void Function_97() //Position: 0x31CB / 12747
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

void Function_98() //Position: 0x31FE / 12798
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

void Function_99() //Position: 0x338C / 13196
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

struct<8> Function_100(int iParam0) //Position: 0x3540 / 13632
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
					iVar2 = ((Function_116((50 + iVar4)) + Function_116((183 + iVar4))) + Function_116((90 + iVar4)));
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
	Function_101(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_101(int iParam0, bool bParam1, bool bParam2) //Position: 0x35E6 / 13798
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
		Function_115(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_114(iParam0);
	if (bParam2)
	{
		Function_102(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_102(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x3881 / 14465
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_113(390))), 32);
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
					bVar19 = (Function_112(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_112(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_110(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_107(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_105(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_104(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_103(), &Var9);
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

var Function_103() //Position: 0x3EAE / 16046
{
	int iVar0;
	
	return iVar0;
}

var Function_104(int iParam0) //Position: 0x3EB6 / 16054
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_105(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x3EC7 / 16071
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_106("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_106("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_106("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_106(char* cParam0, bool bParam1) //Position: 0x3FBC / 16316
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_107(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x3FD5 / 16341
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_109(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_108(Function_109(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_108(int iParam0, int iParam1) //Position: 0x403D / 16445
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_109(int iParam0, bool bParam1) //Position: 0x404F / 16463
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_110(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x4061 / 16481
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
	if (((Function_111(iParam0) != 19 || Function_111(iParam0) != 17) || Function_111(iParam0) != 10) || Function_111(iParam0) != 9)
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

int Function_111(int iParam0) //Position: 0x4191 / 16785
{
	return Global_35278[iParam020].f_48;
}

bool Function_112(int iParam0) //Position: 0x41A0 / 16800
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_113(int iParam0) //Position: 0x41D9 / 16857
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_114(int iParam0) //Position: 0x4216 / 16918
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

int Function_115(int iParam0, bool bParam1, bool bParam2) //Position: 0x43B0 / 17328
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

int Function_116(bool bParam0) //Position: 0x45F4 / 17908
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_117() //Position: 0x4635 / 17973
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
		iVar2 = ((Function_116((50 + iVar3) + 15) + Function_116((183 + iVar3) + 15)) + Function_116((90 + iVar3) + 15));
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
	Function_101(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_118() //Position: 0x46BE / 18110
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
			iVar2 = ((Function_116((50 + iVar3) + 8) + Function_116((183 + iVar3) + 8)) + Function_116((90 + iVar3) + 8));
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
	Function_101(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_119() //Position: 0x4755 / 18261
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
		iVar2 = ((Function_116((50 + iVar3)) + Function_116((183 + iVar3))) + Function_116((90 + iVar3)));
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
	Function_101(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_120() //Position: 0x47D4 / 18388
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_121(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_101(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_121(int iParam0, bool bParam1, int iParam2) //Position: 0x480D / 18445
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
	Function_115(iParam0, bParam1, 1);
	Function_114(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_102(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_122() //Position: 0x4A17 / 18967
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_60())
	{
		Function_128(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_128(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_123(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_123(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_22(StackVal, StackVal, vVar0))
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

vector3 Function_123(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x4AD2 / 19154
{
	int iVar0;
	
	iVar0 = Function_127(uParam2, uParam3);
	if (Function_126(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_125(&Global_63095, 1);
			Function_94(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_125(&Global_63095, 2);
			Function_94(&Global_63095, 1);
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
		Function_125(&Global_63095, 2);
		Function_94(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_124();
	return StackVal, StackVal, Function_124();
}

vector3 Function_124() //Position: 0x4BB9 / 19385
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_125(var uParam0, int iParam1) //Position: 0x4BC2 / 19394
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_126(int iParam0) //Position: 0x4BD1 / 19409
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_127(bool bParam0, bool bParam1) //Position: 0x4BE7 / 19431
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
		fVar2 = Function_47(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_126(iVar0) && !bParam1)
	{
		iVar0 = Function_127(bParam0, 1);
	}
	return iVar0;
}

vector3 Function_128(var uParam0, int iParam1) //Position: 0x4CAE / 19630
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_130(Global_34573, &vVar4);
	if (!Function_129(Global_30640[0]))
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
	if (!Function_129(Global_30640[2]))
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
	if (!Function_129(Global_30640[1]))
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
	if (!Function_129(Global_30658[1]))
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
	if (!Function_129(Global_30658[3]))
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
	if (!Function_129(Global_30658[2]))
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
	if (!Function_129(Global_30658[4]))
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
	if (!Function_129(Global_30668[0]))
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
	if (!Function_129(Global_30668[1]))
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
	if (!Function_129(Global_30668[2]))
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
	if (!Function_129(Global_30679[0]))
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
	if (!Function_129(Global_30685[0]))
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
	if (!Function_129(Global_30685[1]))
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
	if (!Function_129(Global_30685[2]))
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
	if (!Function_129(Global_30693[0]))
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
	if (!Function_129(Global_30693[1]))
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
	if (!Function_129(Global_30693[2]))
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
	if (!Function_129(Global_30707[2]))
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
	if (!Function_129(Global_30707[3]))
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
	if (!Function_129(Global_30707[0]))
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
	if (!Function_129(Global_30717[0]))
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
	if (!Function_129(Global_30723[2]))
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
	if (!Function_129(Global_30723[1]))
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
	if (!Function_129(Global_30723[0]))
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
	if (!Function_129(Global_30679[1]))
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
	if (!Function_129(Global_30707[1]))
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
	Function_125(&Global_63095, 2);
	Function_94(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_22(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_129(int iParam0) //Position: 0x54D3 / 21715
{
	bool bVar0;
	
	bVar0 = Global_29008[iParam0];
	return (((Function_9(bVar0, 0x1000000) || Function_9(bVar0, 0x2000000)) || Function_9(bVar0, 0x4000000)) || !Function_9(bVar0, 0x10000000));
}

void Function_130(bool bParam0, bool bParam1) //Position: 0x550E / 21774
{
	GET_POSITION(bParam0, bParam1);
	return;
}

bool Function_131(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x551B / 21787
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

int Function_132(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x55BF / 21951
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
	Function_115(iParam0, TO_FLOAT(bParam1), 1);
	Function_114(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_102(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

var Function_133(int iParam0) //Position: 0x57DF / 22495
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_88(iParam0))
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

void Function_134(bool bParam0) //Position: 0x5835 / 22581
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

void Function_135() //Position: 0x5869 / 22633
{
	Function_136(&Global_28260);
	return;
}

void Function_136(int iParam0) //Position: 0x5875 / 22645
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	
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
			bVar6 = IS_ITEM_WEAPON_BY_CRC((*iParam0 + 48)[iVar02]);
			if (bVar6)
			{
				iVar7 = GET_WEAPON_ENUM_FROM_CRC((*iParam0 + 48)[iVar02]);
				if (iVar7 == 31)
				{
					if (Function_9(Global_83864.f_1252, 64))
					{
						ADD_ITEM_BY_CRC((*iParam0 + 48)[iVar02], bVar5, 0);
					}
				}
				else if (iVar7 == 29)
				{
					if (Function_9(Global_83864.f_1252, 32))
					{
						ADD_ITEM_BY_CRC((*iParam0 + 48)[iVar02], bVar5, 0);
					}
				}
				else
				{
					ADD_ITEM_BY_CRC((*iParam0 + 48)[iVar02], bVar5, 0);
				}
			}
			else
			{
				ADD_ITEM_BY_CRC((*iParam0 + 48)[iVar02], bVar5, 0);
			}
			if (StackVal && bVar6 < 0)
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
		Function_142(1);
		if (Function_60())
		{
			if (StackVal == 10)
			{
				Function_139();
				Function_137();
			}
		}
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
				if ((*iParam0 + 1088)[iVar3] == 31)
				{
					if (Function_9(Global_83864.f_1252, 64))
					{
						ACTOR_SET_NEXT_WEAPON(bVar5, (*iParam0 + 1088)[iVar3]);
					}
				}
				else if ((*iParam0 + 1088)[iVar3] == 29)
				{
					if (Function_9(Global_83864.f_1252, 32))
					{
						ACTOR_SET_NEXT_WEAPON(bVar5, (*iParam0 + 1088)[iVar3]);
					}
				}
				else
				{
					ACTOR_SET_NEXT_WEAPON(bVar5, (*iParam0 + 1088)[iVar3]);
				}
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
			if (iParam0->f_1124 == 31)
			{
				if (!Function_9(Global_83864.f_1252, 64))
				{
					iParam0->f_1124 = 8;
				}
			}
			ACTOR_SET_NEXT_WEAPON(bVar5, iParam0->f_1128);
		}
		else if (iParam0->f_1128 != 4294967295)
		{
			if (iParam0->f_1128 == 31)
			{
				if (!Function_9(Global_83864.f_1252, 64))
				{
					iParam0->f_1128 = 8;
				}
			}
			ACTOR_SET_NEXT_WEAPON(bVar5, iParam0->f_1128);
		}
		if (iParam0->f_1120 == 4294967295 && Global_34165.f_28)
		{
			ACTOR_PUT_WEAPON_IN_HAND(bVar5, iParam0->f_1120, 0);
		}
	}
	return;
}

void Function_137() //Position: 0x5B7E / 23422
{
	Function_138(41, 3.0f);
	Function_138(40, 3.0f);
	Function_138(42, 3.0f);
	Function_138(39, 3.0f);
	Function_138(43, 3.0f);
	Function_138(44, 3.0f);
	Function_138(34, 3.0f);
	return;
}

void Function_138(bool bParam0, float fParam1) //Position: 0x5BAE / 23470
{
	bool bVar0;
	
	switch (bParam0)
	{
		case 0x00000029:
			bVar0 = 8;
			break;
		
		case 0x00000028:
			bVar0 = 7;
			break;
		
		case 0x0000002A:
			bVar0 = 9;
			break;
		
		case 0x00000027:
			bVar0 = 6;
			break;
		
		case 0x0000002B:
			bVar0 = 10;
			break;
		
		case 0x0000002C:
			bVar0 = 11;
			break;
		
		case 0x00000022:
			bVar0 = 15;
			break;
		
		case 0x00000030:
			bVar0 = 5;
			break;
	}
	if (ACTOR_HAS_WEAPON(Global_34573, bParam0))
	{
		_SET_ACTOR_MAX_AMMO_AMOUNT(Global_34573, bVar0, (_GET_MAX_AMMO_AMOUNT(Global_34573, bVar0) * fParam1));
	}
	return;
}

void Function_139() //Position: 0x5C3E / 23614
{
	int iVar0;
	var uVar1;
	
	iVar0 = 1;
	if (Function_141(3) == 10)
	{
		iVar0 = 2;
	}
	uVar1 = Function_140(3);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_140(6);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_140(0);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_140(1);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_140(8);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_140(4);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_140(12);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_140(5);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_140(2);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_140(30);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_140(31);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_140(32);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_140(33);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_140(34);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_140(35);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_140(36);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_140(37);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_140(38);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_140(39);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_140(40);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_140(41);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_140(42);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_140(43);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_140(44);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_140(45);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_140(46);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_140(47);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_140(48);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_140(49);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_140(50);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_140(51);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_140(7);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_140(9);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	return;
}

var Function_140(bool bParam0) //Position: 0x5E5B / 24155
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

int Function_141(int iParam0) //Position: 0x5F4C / 24396
{
	if (Function_1() || Global_34165.f_44)
	{
		return StackVal;
	}
	return StackVal;
}

void Function_142(int iParam0) //Position: 0x5F74 / 24436
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	
	bVar0 = Function_29();
	if (!Function_144(1) || iParam0)
	{
		if (HAS_ITEM(Function_140(20), bVar0))
		{
			Function_143(1, 1);
		}
	}
	bVar2 = GET_WEAPON_EQUIPPED(bVar0, 5);
	if (GET_ITEM_IN_HAND_EQUIPSLOT(bVar0) == 5)
	{
		bVar2 = GET_WEAPON_IN_HAND(bVar0);
	}
	bVar3 = GET_WEAPON_EQUIPPED(bVar0, 6);
	if (bVar3 == 4294967295)
	{
		if (GET_ITEM_IN_HAND_EQUIPSLOT(bVar0) == 6)
		{
			bVar3 = GET_WEAPON_IN_HAND(bVar0);
		}
	}
	bVar4 = GET_WEAPON_EQUIPPED(bVar0, true);
	if (GET_ITEM_IN_HAND_EQUIPSLOT(bVar0) == 1)
	{
		bVar4 = GET_WEAPON_IN_HAND(bVar0);
	}
	bVar5 = GET_AMMOENUM_FOR_WEAPONENUM(bVar2);
	bVar6 = GET_AMMOENUM_FOR_WEAPONENUM(bVar4);
	if (!Function_144(1))
	{
		iVar1 = 0;
		while (iVar1 <= 7)
		{
			ACTOR_ENABLE_VARIABLE_MESH(bVar0, iVar1, false);
			iVar1++;
		}
	}
	else if (bVar2 != 4294967295)
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
	if (bVar4 != 4294967295)
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

void Function_143(int iParam0, bool bParam1) //Position: 0x6110 / 24848
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

bool Function_144(int iParam0) //Position: 0x6283 / 25219
{
	return (*&Global_12976 + 104)[iParam0];
}

void Function_145() //Position: 0x6292 / 25234
{
	Function_146(&Global_28260, 1, 0);
	return;
}

void Function_146(int iParam0, bool bParam1, int iParam2) //Position: 0x62A0 / 25248
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

var Function_147(bool bParam0) //Position: 0x6491 / 25745
{
	return GET_HEADING(bParam0);
}

void Function_148(bool bParam0) //Position: 0x649C / 25756
{
	if (Function_9(bParam0, 1) && !Function_9(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || bParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_149(int iParam0) //Position: 0x64C9 / 25801
{
	int iVar0;
	int iVar1;
	
	if (!Function_88(iParam0))
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
		Function_156(78, 1, 1);
		if (!Function_155(Global_76847, 64))
		{
			Function_150(Global_34573, 64, 2, 0);
		}
	}
	if (Global_27774[iParam013].f_12 & 32 >= 0)
	{
		SET_DEADEYE_REGENERATION_RATE_MULTIPLIER(0, 2.0f);
		SET_DEADEYE_POINT_MODIFIER(0, 2.0f);
	}
	if (Global_27774[iParam013].f_12 & 64 >= 0)
	{
		SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, Global_27774[iParam013].f_16, 3);
		iVar1 = GET_ACTOR_FACTION(Global_34573);
		DECOR_SET_BOOL(Global_34573, "zMarston", true);
		DECOR_SET_BOOL(Global_34573, "zombie", true);
		RESET_ACTIONTREE_FOR_ACTOR(Global_34573);
	}
	if (Global_27774[iParam013].f_12 & 128 >= 0)
	{
		ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 23, true);
		ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 25, true);
	}
	return;
}

void Function_150(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x65F7 / 26103
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_152(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_151(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_151(char* cParam0, int iParam1) //Position: 0x6663 / 26211
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

bool Function_152(bool bParam0, var uParam1, int iParam2) //Position: 0x669A / 26266
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
		if (Function_154(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_153(uVar0))
		{
			case 0x00000002:
				if (!Function_155(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_153(char* cParam0) //Position: 0x6712 / 26386
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

int Function_154(int iParam0) //Position: 0x67B3 / 26547
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_94(&iVar1, 2147483648);
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

bool Function_155(var uParam0, int iParam1) //Position: 0x67F0 / 26608
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_156(bool bParam0, bool bParam1, int iParam2) //Position: 0x6803 / 26627
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (bParam1)
	{
		if (GET_ITEM_COUNT(Function_140(bParam0), Function_29()) == 0)
		{
			ADD_ITEM(Function_140(bParam0), Function_29(), iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_140(bParam0), Function_29(), iParam2);
	return 1;
}

void Function_157(var uParam0, bool bParam1, int iParam2) //Position: 0x684E / 26702
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
			Function_162(&(Global_29008[Global_29006]), 131072);
			Function_161(&(Global_29008[Global_29006]), 2097152);
			Function_159(Global_29006);
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
				if (Function_158(&(Global_29008[iVar0]), 4) || Function_158(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_161(&(Global_29008[iVar0]), 2097155);
					Function_162(&(Global_29008[iVar0]), 262144);
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

bool Function_158(var uParam0, int iParam1) //Position: 0x6959 / 26969
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_159(int iParam0) //Position: 0x6975 / 26997
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_160())
			{
				return;
			}
		}
		if (!Function_158(&(Global_29008[iParam0]), 2048))
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

bool Function_160() //Position: 0x69F4 / 27124
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_158(&(Global_29008[iVar0]), 4) || Function_158(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_161(var uParam0, int iParam1) //Position: 0x6A5D / 27229
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_162(var uParam0, int iParam1) //Position: 0x6A74 / 27252
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_163(int iParam0) //Position: 0x6A83 / 27267
{
	if (!Function_88(iParam0))
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
	if (Global_27774[iParam013].f_12 & 32 >= 0)
	{
		SET_DEADEYE_REGENERATION_RATE_MULTIPLIER(0, 1.0f);
		SET_DEADEYE_POINT_MODIFIER(0, 1.0f);
	}
	if (Global_27774[iParam013].f_12 & 64 >= 0)
	{
	}
	if (Global_27774[iParam013].f_12 & 128 >= 0)
	{
	}
	return;
}

void Function_164(int iParam0, int iParam1) //Position: 0x6B39 / 27449
{
	int iVar0;
	
	if (!Function_88(iParam0))
	{
		LOG_ERROR("Attempting to unset status on invalid outfit");
		return;
	}
	iVar0 = (StackVal && iParam1);
	Global_27774[iParam013].f_8 = (StackVal - iVar0);
	return;
}

void Function_165(bool bParam0, int iParam1) //Position: 0x6B9E / 27550
{
	if (!Function_88(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

int Function_166() //Position: 0x6BF3 / 27635
{
	return Function_9(StackVal, 1);
}

void Function_167(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x6C02 / 27650
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_88(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_177(3) || iParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_179(bParam0, 2))
	{
		Function_132(456, 1, 0, 0);
		Function_165(bParam0, 2);
		if (!bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_61(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_176(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_165(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_131(0, 0, 1, 1))
			{
				Function_93(1);
				Function_92(1, 0);
			}
			else
			{
				Function_91();
			}
		}
		Function_172(bParam0);
		if (StackVal && !Function_9(((((!Function_65() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, false, false, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_9((((Function_65() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_60())
		{
			if (!Function_155(Global_76846, 2))
			{
				Function_150(Global_34573, 2, 1, 0);
			}
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_170();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_169(3, bParam1);
				break;
			
			case 0x00000005:
				Function_169(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_169(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_169(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_169(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_169(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_168(2, 24);
				break;
			
			case 0x00000003:
				Function_168(2, 25);
				break;
			
			case 0x0000000F:
				Function_168(2, 26);
				break;
			
			case 0x0000000D:
				Function_168(2, 27);
				break;
			
			case 0x0000000E:
				Function_168(2, 28);
				break;
			}
	}
}

void Function_168(int iParam0, bool bParam1) //Position: 0x6E98 / 28312
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

void Function_169(int iParam0, bool bParam1) //Position: 0x6EFF / 28415
{
	if (iParam0 < 16 || iParam0 != 4294967295)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	if (bParam1 > 0)
	{
		(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || bParam1);
	}
	return;
	return;
}

void Function_170() //Position: 0x6F6A / 28522
{
	if (Function_88(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_85(Global_28180);
			Global_28180.f_8 = Function_171(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_85(Global_28180);
			Global_28180.f_8 = Function_171(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_171(int iParam0, int iParam1) //Position: 0x6FE5 / 28645
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
					if (Function_82(6, 0) || Function_82(12, 0))
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
					vVar0 = { -2177.057f, 16.426f, 2626.285f };
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
					if (Function_81(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_82(5, 0))
					{
						vVar0 = { -4120.147f, 18.356f, 3039.531f };
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
					vVar0 = { -4178.186f, 32.616f, 4582.207f };
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
					if (Function_81(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_81(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_81(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_81(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_82(26, 0))
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
					if (Function_81(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_81(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_81(27) && iVar18)
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
					if (Function_81(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_81(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_81(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_81(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_82(17, 0) && iVar15)
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
					if (Function_81(19) && iVar19)
					{
						vVar0 = { -1708.36f, 46.18f, 2175.89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_82(6, 0) && Function_81(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_81(17) && iVar19)
					{
						vVar0 = { -1687.208f, 53.208f, 2140.491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_82(9, 0) && Function_81(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_81(15) && iVar19)
					{
						vVar0 = { -1709.084f, 55.216f, 2104.631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_82(8, 0) && iVar19)
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
		bVar20 = ADD_BLIP_FOR_COORD(&vVar0, 440, 0f, 2, 0);
		SET_BLIP_SCALE(bVar20, ((vVar3.x + vVar3.z) / 2.0f));
		SET_BLIP_COLOR(bVar20, 0.58f, 0.35f, 0.72f, 0.5f);
		SET_BLIP_PRIORITY(bVar20, 3);
		SET_BLIP_NAME(bVar20, &cVar7);
		return bVar20;
	}
	return "";
}

void Function_172(bool bParam0) //Position: 0x7BD6 / 31702
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
			if (Function_176(bParam0, Function_175(bVar24)))
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
			if (Function_176(bParam0, Function_175(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_133(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), false, 0);
		Function_174(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_173(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_173(int iParam0) //Position: 0x7D86 / 32134
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_88(iParam0))
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

void Function_174(char* cParam0, bool bParam1) //Position: 0x7DDD / 32221
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(cParam0);
	REMOVE_JOURNAL_ENTRY(cParam0, bParam1);
	PREPEND_JOURNAL_ENTRY(cParam0, bParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(cParam0);
	}
	return;
}

int Function_175(bool bParam0) //Position: 0x7E02 / 32258
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_176(bool bParam0, int iParam1) //Position: 0x7E0E / 32270
{
	int iVar0;
	
	if (!Function_88(bParam0))
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

bool Function_177(int iParam0) //Position: 0x7E6D / 32365
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

void Function_178(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x7E89 / 32393
{
	struct<8> Var0;
	
	if (!Function_88(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_177(3) && !bParam4)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_87(bParam0))
	{
		Function_132(456, 1, 0, 0);
		Function_165(bParam0, 2);
		if (bParam2)
		{
			if (!Function_131(0, 0, 1, 1))
			{
				Function_93(1);
				Function_92(1, 5);
			}
			else
			{
				Function_91();
			}
		}
		Function_172(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_65() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, false, false, false, 0, 2, 0, 0, 0);
		}
		else if (Function_65() || Global_3380)
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
			{
				DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
			}
		}
		if (bParam3)
		{
			stradd(&Var0, "_tip", 32);
			Function_61(&Var0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_60())
		{
			if (!Function_155(Global_76846, 2))
			{
				Function_150(Global_34573, 2, 1, 0);
			}
		}
	}
}

bool Function_179(int iParam0, int iParam1) //Position: 0x7FDE / 32734
{
	int iVar0;
	
	if (!Function_88(iParam0))
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

void Function_180() //Position: 0x800C / 32780
{
	if (!Function_182(512) && !Function_181())
	{
		return;
	}
	if (Function_86(16))
	{
		return;
	}
	if (!Function_176(16, 1))
	{
		if (Function_112(348) <= 5000.0f)
		{
			Function_167(16, 1, 0, 0, 1);
		}
	}
	if (!Function_176(16, 2))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "CougarOutfitKill"))
		{
			Function_167(16, 2, 0, 0, 1);
			DECOR_REMOVE(Global_34573, "CougarOutfitKill");
		}
	}
	if (!Function_176(16, 4))
	{
		if (Function_112(344) <= 8.0f && Function_112(308) <= 8.0f)
		{
			Function_167(16, 4, 0, 0, 1);
		}
	}
	if (!Function_176(16, 8))
	{
		if (Function_112(349) <= 1.0f)
		{
			Function_167(16, 8, 0, 0, 1);
		}
	}
	if (!Function_176(16, 16))
	{
		if (Function_81(37))
		{
			Function_167(16, 16, 0, 0, 1);
		}
	}
	return;
}

bool Function_181() //Position: 0x80FE / 33022
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_9(GET_GAME_EDITION(), 16);
	}
	return 0;
}

bool Function_182(int iParam0) //Position: 0x812E / 33070
{
	return Function_183(Global_83864.f_1252, iParam0);
}

int Function_183(var uParam0, bool bParam1) //Position: 0x8140 / 33088
{
	return (uParam0 && bParam1) == 0;
}

void Function_184() //Position: 0x814D / 33101
{
	if (!Function_182(512) && !Function_181())
	{
		return;
	}
	if (Function_86(17))
	{
		return;
	}
	if (!Function_176(17, 1))
	{
		if (Function_112(450) <= 1000.0f)
		{
			Function_167(17, 1, 1, 0, 1);
		}
	}
	if (!Function_176(17, 4))
	{
		if (Function_112(273) <= 200.0f)
		{
			Function_167(17, 4, 0, 0, 1);
		}
	}
	if (!Function_176(17, 8))
	{
		if (Function_112(44) <= 20.0f)
		{
			Function_167(17, 8, 1, 0, 1);
		}
	}
	if (!Function_176(17, 16))
	{
		if (Function_81(63))
		{
			Function_167(17, 16, 1, 0, 1);
		}
	}
	return;
}

void Function_185() //Position: 0x81EC / 33260
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_27774)
	{
		Global_27774[iVar013] = 4294967295;
		iVar0++;
	}
	Function_187(0, "cowboy", 0, 0, 2, 1, 3);
	Function_187(1, "social", 1, 13, 2, 1, 0);
	Function_187(2, "gun", 5, 18, 2, 32, 0);
	Function_187(3, "suit", 1, 1, 2, 1, 1);
	Function_187(4, "dnd", 6, 4, 25, 1, 0);
	Function_187(5, "rustler", 6, 5, 14, 1, 1);
	Function_187(6, "treasur", 6, 3, 24, 1, 1);
	Function_187(7, "bandito", 6, 6, 12, 1, 1);
	Function_187(8, "rebel", 6, 2, 27, 1, 1);
	Function_187(9, "military", 6, 9, 8, 1, 1);
	Function_187(10, "uslaw", 1, 8, 8, 1, 1);
	Function_187(11, "legend", 1, 11, 2, 1, 1);
	Function_187(12, "fbi", 1, 7, 8, 1, 1);
	Function_187(13, "duster", 1, 16, 2, 1, 1);
	Function_187(14, "poncho", 1, 17, 2, 1, 1);
	Function_187(15, "rancher", 1, 10, 2, 1, 1);
	if (Function_182(512) || Function_181())
	{
		Function_187(16, "mount", 5, 19, 2, 1, 1);
		Function_187(17, "bruise", 5, 20, 2, 1, 1);
		if (!Function_86(16) && !Function_87(16))
		{
			Function_178(16, 0, 0, 0, 1);
		}
		if (!Function_86(17) && !Function_87(17))
		{
			Function_178(17, 0, 0, 0, 1);
		}
	}
	Function_178(0, 1, 0, 0, 1);
	Function_90(0, 1, 0);
	if (Global_3364)
	{
		Global_28180 = 4294967295;
	}
	Global_28180.f_8 = "";
	Function_186();
	return;
}

void Function_186() //Position: 0x83C6 / 33734
{
	if (Function_86(1))
	{
		Function_168(11, 0);
	}
	if (Function_176(2, 1))
	{
		Function_168(11, 1);
	}
	if (Function_176(2, 2))
	{
		Function_168(11, 2);
	}
	if (Function_176(2, 4))
	{
		Function_168(11, 3);
	}
	if (Function_176(2, 8))
	{
		Function_168(11, 4);
	}
	if (Function_176(2, 16))
	{
		Function_168(11, 5);
	}
	if (Function_176(16, 1))
	{
		Function_168(11, 6);
	}
	if (Function_176(16, 2))
	{
		Function_168(11, 7);
	}
	if (Function_176(16, 4))
	{
		Function_168(11, 8);
	}
	if (Function_176(16, 8))
	{
		Function_168(11, 9);
	}
	if (Function_176(16, 16))
	{
		Function_168(11, 10);
	}
	if (Function_176(17, 1))
	{
		Function_168(11, 11);
	}
	if (Function_176(17, 2))
	{
		Function_168(11, 12);
	}
	if (Function_176(17, 4))
	{
		Function_168(11, 13);
	}
	if (Function_176(17, 8))
	{
		Function_168(11, 14);
	}
	if (Function_176(17, 16))
	{
		Function_168(11, 15);
	}
	return;
}

void Function_187(bool bParam0, char* cParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x84B7 / 33975
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
		Function_165(bParam0, 8);
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

void Function_188(int iParam0) //Position: 0x85FE / 34302
{
	strcpy(iParam0 + 12, "AMBIENT-UNLOCK", 16);
	*iParam0 = 45152;
	iParam0->f_4 = 34365;
	iParam0->f_8 = 34359;
	iParam0->f_28 = 1;
	return;
}

void Function_189() //Position: 0x8637 / 34359
{
	return;
}

int Function_190() //Position: 0x863D / 34365
{
	if (Function_1() || !Global_3366)
	{
		return 0;
	}
	Function_202();
	Function_196(1);
	Function_194();
	if ((Function_65() || HUD_IS_FADED()) || HUD_IS_FADING())
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
	Function_193();
	Function_192();
	Function_191();
	return 0;
}

void Function_191() //Position: 0x86A6 / 34470
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
					if (Function_82(8, 0))
					{
						Global_25965[bVar0] = 1;
					}
					break;
				
				case 0x00000001:
					if (Function_82(16, 0))
					{
						Global_25965[bVar0] = 1;
					}
					break;
				
				case 0x00000002:
					if (Function_82(13, 0))
					{
						Global_25965[bVar0] = 1;
					}
					break;
				
				case 0x00000003:
					if (Function_82(34, 0))
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

void Function_192() //Position: 0x8776 / 34678
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
					if (Function_82(3, 0))
					{
						Global_25974[bVar0] = 1;
					}
					break;
				
				case 0x00000001:
					if (Function_86(1))
					{
						Global_25974[bVar0] = 1;
					}
					break;
				
				case 0x00000002:
					if (Function_82(4, 0))
					{
						Global_25974[bVar0] = 1;
					}
					break;
				
				case 0x00000003:
					Global_25974[bVar0] = 1;
					break;
				
				case 0x00000004:
					if (Function_82(25, 0))
					{
						Global_25974[bVar0] = 1;
					}
					break;
				
				case 0x00000005:
					if (Function_82(5, 0))
					{
						Global_25974[bVar0] = 1;
					}
					break;
				
				case 0x00000006:
					break;
				
				case 0x00000007:
					if (Function_82(10, 0))
					{
						Global_25974[bVar0] = 1;
					}
					break;
				
				case 0x00000008:
					if (Function_82(3, 0))
					{
						Global_25974[bVar0] = 1;
					}
					break;
				
				case 0x00000009:
					Global_25974[bVar0] = 1;
					break;
				
				case 0x0000000A:
					if (Function_82(37, 0))
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

void Function_193() //Position: 0x88D6 / 35030
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
					if (Function_82(2, 0))
					{
						Global_25970[bVar0] = 1;
					}
					break;
				
				case 0x00000002:
					if (Function_82(6, 0))
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

void Function_194() //Position: 0x8977 / 35191
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
					if (Function_82(25, 0))
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
					if (Function_82(25, 0) && !Function_82(26, 0))
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
					if ((Function_82(25, 0) && Function_82(26, 0)) && !Function_82(29, 0))
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
					if ((Function_82(25, 0) && Function_82(26, 0)) && Function_82(29, 0))
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
					if (Function_82(41, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("tannersSpanBefore");
						ENABLE_WORLD_SECTOR("tannersSpanAfter");
					}
					break;
				
				case 0x00000005:
					if (Function_82(41, 0))
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
					if (Function_82(22, 0) && !Function_82(41, 0))
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
					if (Function_82(22, 0) && Function_82(41, 0))
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
					if (Function_82(34, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("campoMiradaBefore");
						ENABLE_WORLD_SECTOR("campoMiradaAfter");
					}
					break;
				
				case 0x00000009:
					if (Function_82(26, 0) || Function_82(30, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("fronteraBridgeBefore");
						ENABLE_WORLD_SECTOR("fronteraBridgeAfter");
					}
					break;
				
				case 0x0000000A:
					if (Function_82(40, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("fod_gates01x");
						ENABLE_CHILD_SECTOR("fod_gates02x");
						ENABLE_CHILD_SECTOR("fod_gates02Doors01x");
					}
					break;
				
				case 0x0000000B:
					if (Function_82(48, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("coc_fence01x");
						ENABLE_CHILD_SECTOR("coc_fence01bx");
						ENABLE_CHILD_SECTOR("coc_gates02x");
						DISABLE_CHILD_SECTOR("coc_gates01x");
					}
					break;
				
				case 0x0000000C:
					if (Function_82(41, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("masonBridgeBefore");
						ENABLE_WORLD_SECTOR("masonBridgeAfter");
					}
					break;
				
				case 0x0000000D:
					if (Function_82(41, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("lmf_troughBefore01x");
						ENABLE_CHILD_SECTOR("lmf_troughAfter01x");
					}
					break;
				
				case 0x0000000E:
					break;
				
				case 0x0000000F:
					if (Function_82(21, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("rwf_barn01xprops02x");
						ENABLE_CHILD_SECTOR("rwf_barn01xprops01x");
					}
					break;
				
				case 0x00000010:
					if (Function_82(57, 0) || Function_195(57))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("beh_silo02x");
						ENABLE_CHILD_SECTOR("beh_silo01x");
					}
					break;
				
				case 0x00000011:
					if (Function_82(48, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("beh_house02x");
						DISABLE_CHILD_SECTOR("beh_house02props01x");
						ENABLE_CHILD_SECTOR("beh_house01x");
						ENABLE_CHILD_SECTOR("beh_house01props01x");
					}
					break;
				
				case 0x00000012:
					if (Function_82(28, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("tor_militaryCamp01x");
						ENABLE_CHILD_SECTOR("tor_militaryCamp02x");
					}
					break;
				
				case 0x00000013:
					if (Function_82(41, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("esc_villaWall04x");
						ENABLE_CHILD_SECTOR("esc_villaWall05x");
					}
					break;
				
				case 0x00000014:
					if (Function_81(37))
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
					if (Function_82(57, 0))
					{
						Global_26003[iVar0] = 1;
						ENABLE_CHILD_SECTOR("beh_grave02x");
						ENABLE_CHILD_SECTOR("beh_grave03x");
						DISABLE_CHILD_SECTOR("beh_grave01x");
					}
					break;
				
				case 0x00000018:
					if (Function_82(25, 0))
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
						ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve20", true);
					}
					break;
				
				case 0x00000019:
					if (Function_82(32, 0))
					{
						Global_26003[iVar0] = 1;
						ENABLE_CHILD_SECTOR("emt_caveDoor02x");
						DISABLE_CHILD_SECTOR("emt_caveDoor01x");
					}
					break;
				
				case 0x0000001A:
					if (Function_82(20, 0))
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

bool Function_195(int iParam0) //Position: 0xA153 / 41299
{
	int iVar0;
	
	if (!Function_84(iParam0))
	{
		return 0;
	}
	iVar0 = Function_83(iParam0);
	if (!Function_76(Function_83(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

void Function_196(bool bParam0) //Position: 0xA189 / 41353
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	struct<8> Var3;
	struct<8> Var11;
	
	iVar0 = 0;
	while (iVar0 <= Global_25986)
	{
		if ((!Global_25986[iVar0] && (!bParam0 || !Function_65())) && !bVar1)
		{
			switch (iVar0)
			{
				case 0x00000000:
					if (Function_82(2, 0))
					{
						bVar1 = false;
						Global_25986[iVar0] = 1;
						SET_DISABLE_DEADEYE(0, 0);
						SET_DEADEYE_MULTILOCK_ENABLE(0, false);
						SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
						Function_201(390, 3.0f);
						Function_101(390, 1, bParam0);
					}
					break;
				
				case 0x00000001:
					if (Function_82(11, 0))
					{
						bVar1 = false;
						Global_25986[iVar0] = 1;
						SET_DISABLE_DEADEYE(0, 0);
						SET_DEADEYE_MULTILOCK_ENABLE(0, true);
						SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
						Function_201(390, 3.0f);
						Function_101(390, 2, bParam0);
					}
					break;
				
				case 0x00000002:
					if (Function_82(30, 0))
					{
						bVar1 = false;
						Global_25986[iVar0] = 1;
						SET_DISABLE_DEADEYE(0, 0);
						SET_DEADEYE_MULTILOCK_ENABLE(0, true);
						SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
						Function_201(390, 3.0f);
						Function_101(390, 3, bParam0);
					}
					break;
				
				case 0x00000003:
					Global_25986[iVar0] = 1;
					break;
				
				case 0x00000004:
					if (Function_82(4, 0))
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
					if (Function_82(2, 0))
					{
						Global_25986[iVar0] = 1;
						bVar1 = true;
						bVar2 = true;
						strcpy(&Var3, "shop_feature_1", 32);
						strcpy(&Var11, "shop_feature_2", 32);
					}
					break;
				
				case 0x00000006:
					if (Function_82(2, 0))
					{
						Global_25986[iVar0] = 1;
						bVar1 = false;
					}
					break;
				
				case 0x00000007:
					if (Function_82(2, 0))
					{
						Global_25986[iVar0] = 1;
						bVar1 = false;
					}
					break;
				
				case 0x00000008:
					if (Function_82(37, 0))
					{
						Global_25986[iVar0] = 1;
					}
					break;
				
				case 0x0000000A:
					if (Function_82(2, 0) && !Function_200("npressDemo"))
					{
						Global_25986[iVar0] = 1;
						bVar1 = false;
					}
					break;
				
				case 0x0000000B:
					if (Function_82(4, 0))
					{
						Global_25986[iVar0] = 1;
						bVar1 = true;
						bVar2 = true;
						strcpy(&Var3, "house_feature_1", 32);
						strcpy(&Var11, "house_feature_2", 32);
					}
					break;
				
				case 0x0000000C:
					if (!Function_195(1))
					{
						Function_199(1);
						Global_25986[iVar0] = 1;
					}
					else
					{
						Function_199(0);
						Global_25986[iVar0] = 0;
					}
					break;
				
				case 0x0000000D:
					if (Function_141(0) == 10)
					{
						Global_25986[iVar0] = 1;
						bVar1 = true;
						strcpy(&Var3, "nAM_SS_RW2", 32);
						SET_DEADEYE_POINT_MODIFIER(0, 2.0f);
					}
					break;
				
				case 0x0000000E:
					if (Function_141(1) > 5)
					{
						Global_25986[iVar0] = 1;
						bVar1 = true;
						strcpy(&Var3, "nAM_MH_RW1", 32);
						SET_WEAPONENUM_LOCKED(14, 0);
						Function_197(14, 1);
					}
					break;
				
				case 0x0000000F:
					if (((Function_141(0) != 10 && Function_141(1) != 10) && Function_141(2) != 10) && Function_141(3) != 10)
					{
						Global_25986[iVar0] = 1;
						bVar1 = true;
						strcpy(&Var3, "AM_LOTW_RW1", 32);
						SET_MAX_DEADEYE_POINTS(0, 150.0f);
						Function_90(11, 0, 1);
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
		Function_61(&Var3, 0x41200000, 1, 0, 2, 1, 0);
		if (bVar2)
		{
			stradd(&Var11, "_help", 32);
			Function_61(&Var11, 0x41200000, 1, 0, 2, 1, 0);
		}
	}
	return;
}

int Function_197(int iParam0, int iParam1) //Position: 0xA559 / 42329
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_59354[iParam08].f_24 = iParam1;
	Function_198(iParam0, iParam1);
	Function_150(Global_34573, 1, 4, 1);
	return 1;
}

int Function_198(int iParam0, int iParam1) //Position: 0xA5CC / 42444
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

void Function_199(bool bParam0) //Position: 0xA628 / 42536
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

bool Function_200(bool bParam0) //Position: 0xA69C / 42652
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

int Function_201(int iParam0, int iParam1) //Position: 0xA6BB / 42683
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

void Function_202() //Position: 0xA6FB / 42747
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	
	fVar0 = 0.0f;
	iVar1 = Function_210();
	iVar2 = Function_209();
	iVar3 = Function_207();
	fVar0 = (fVar0 + (24.0f * Function_52(1.0f, (IntToFloat(Function_116(12)) / 24.0f))));
	fVar0 = (fVar0 + (17.0f * Function_52(1.0f, (IntToFloat(Function_116(13)) / 17.0f))));
	fVar0 = (fVar0 + (7.0f * Function_52(1.0f, (IntToFloat(Function_116(14)) / 7.0f))));
	fVar0 = (fVar0 + (9.0f * Function_52(1.0f, (IntToFloat(Function_116(15)) / 9.0f))));
	fVar0 = (fVar0 + (4.5f * Function_52(1.0f, (IntToFloat(iVar1) / 9.0f))));
	fVar0 = (fVar0 + (3.5f * Function_52(1.0f, (IntToFloat(iVar3) / 7.0f))));
	fVar0 = (fVar0 + (2.0f * Function_52(1.0f, (IntToFloat(((Function_116(363) + Function_116(364)) + Function_116(365))) / 20.0f))));
	fVar0 = (fVar0 + (2.5f * Function_52(1.0f, (IntToFloat(Function_116(469)) / 5.0f))));
	fVar0 = (fVar0 + (2.5f * Function_52(1.0f, (IntToFloat(Function_116(400)) / 5.0f))));
	fVar0 = (fVar0 + (3.0f * Function_52(1.0f, (IntToFloat(Function_116(410)) / 6.0f))));
	fVar0 = (fVar0 + (3.0f * Function_52(1.0f, (Function_112(474) / Function_113(474)))));
	fVar0 = (fVar0 + (2.0f * Function_52(1.0f, (Function_112(475) / Function_113(475)))));
	fVar0 = (fVar0 + (1.0f * Function_52(1.0f, (Function_112(476) / Function_113(476)))));
	fVar0 = (fVar0 + (9.0f * Function_52(1.0f, (IntToFloat(iVar2) / 18.0f))));
	fVar0 = (fVar0 + (2.0f * Function_52(1.0f, (Function_112(468) / 13.0f))));
	if (Function_141(3) > 10)
	{
		fVar0 = (fVar0 + 2.0f);
	}
	else if (Function_141(3) > 5)
	{
		fVar0 = (fVar0 + 1.0f);
	}
	if (Function_141(0) > 10)
	{
		fVar0 = (fVar0 + 2.0f);
	}
	else if (Function_141(0) > 5)
	{
		fVar0 = (fVar0 + 1.0f);
	}
	if (Function_141(2) > 10)
	{
		fVar0 = (fVar0 + 2.0f);
	}
	else if (Function_141(2) > 5)
	{
		fVar0 = (fVar0 + 1.0f);
	}
	if (Function_141(1) > 10)
	{
		fVar0 = (fVar0 + 2.0f);
	}
	else if (Function_141(1) > 5)
	{
		fVar0 = (fVar0 + 1.0f);
	}
	Function_205();
	if (Global_30842[7])
	{
		Function_204(iVar1, iVar2, iVar3);
	}
	if (fVar0 < Function_112(5))
	{
		Function_203(5, fVar0, 0);
		Function_204(iVar1, iVar2, iVar3);
	}
	if (fVar0 <= 100.0f)
	{
		if (!Function_86(12))
		{
			Function_90(12, 0, 1);
		}
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(32))
		{
			AWARD_ACHIEVEMENT(32);
		}
	}
	else if (fVar0 <= 75.0f)
	{
		if (!Function_87(12))
		{
			Function_178(12, 0, 1, 1, 0);
		}
	}
	bVar4 = (bVar4 + Function_116(12));
	bVar4 = (bVar4 + Function_116(13));
	bVar4 = (bVar4 + Function_116(14));
	bVar4 = (bVar4 + Function_116(15));
	bVar4 = (bVar4 + Function_116(457));
	bVar4 = (bVar4 + Function_116(458));
	bVar4 = (bVar4 + Function_116(363));
	bVar4 = (bVar4 + Function_116(364));
	bVar4 = (bVar4 + Function_116(365));
	bVar4 = (bVar4 + Function_116(469));
	bVar4 = (bVar4 + Function_116(400));
	bVar4 = (bVar4 + Function_116(410));
	bVar4 = (bVar4 + Function_116(474));
	bVar4 = (bVar4 + Function_116(475));
	bVar4 = (bVar4 + Function_116(476));
	bVar4 = (bVar4 + Function_116(407));
	bVar4 = (bVar4 + Function_116(468));
	bVar4 = (bVar4 + Function_116(409));
	bVar4 = (bVar4 + Function_141(3));
	bVar4 = (bVar4 + Function_141(0));
	bVar4 = (bVar4 + Function_141(2));
	bVar4 = (bVar4 + Function_141(1));
	if (bVar4 >= Function_116(6))
	{
		Function_101(6, bVar4, 0);
	}
	return;
}

int Function_203(int iParam0, bool bParam1, bool bParam2) //Position: 0xAA75 / 43637
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
		Function_115(iParam0, bParam1, 0);
	}
	Global_34581[iParam0] = bParam1;
	Function_114(iParam0);
	if (bParam2)
	{
		Function_102(iParam0, 1, bParam1, 0, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_204(int iParam0, int iParam1, int iParam2) //Position: 0xACE1 / 44257
{
	if (Function_141(3) > 10)
	{
	}
	else if (Function_141(3) > 5)
	{
	}
	if (Function_141(0) > 10)
	{
	}
	else if (Function_141(0) > 5)
	{
	}
	if (Function_141(2) > 10)
	{
	}
	else if (Function_141(2) > 5)
	{
	}
	if (Function_141(1) > 10)
	{
	}
	else if (Function_141(1) > 5)
	{
	}
	return;
}

void Function_205() //Position: 0xAD37 / 44343
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	iVar0 = (Function_206(2, Function_141(1)) - 1);
	bVar1 = SHIFT_LEFT((Function_206(2, Function_141(0)) - 1), 10);
	bVar2 = SHIFT_LEFT((Function_206(2, Function_141(2)) - 1), 20);
	bVar3 = SHIFT_LEFT((Function_206(2, Function_141(3)) - 1), 20);
	Function_169(5, ((iVar0 || bVar1) || bVar2));
	Function_169(4, bVar3);
	return;
}

int Function_206(int iParam0, int iParam1) //Position: 0xAD8E / 44430
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 1;
	while (iVar1 < iParam1)
	{
		iVar0 = (iVar0 * iParam0);
		iVar1++;
	}
	return iVar0;
}

var Function_207() //Position: 0xADBB / 44475
{
	int iVar0;
	
	if (Function_208(Global_30734) >= 0)
	{
		iVar0++;
	}
	if (Function_208(Global_30736) >= 0)
	{
		iVar0++;
	}
	if (Function_208(Global_30738) >= 0)
	{
		iVar0++;
	}
	if (Function_208(Global_30737) >= 0)
	{
		iVar0++;
	}
	if (Function_208(Global_30739) >= 0)
	{
		iVar0++;
	}
	if (Function_208(Global_30741) >= 0)
	{
		iVar0++;
	}
	if (Function_208(Global_30740) >= 0)
	{
		iVar0++;
	}
	return iVar0;
}

int Function_208(int iParam0) //Position: 0xAE33 / 44595
{
	if (!Function_78(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_12;
}

var Function_209() //Position: 0xAE4D / 44621
{
	int iVar0;
	bool bVar1;
	
	if (Function_81(3))
	{
		bVar1 = (bVar1 || 1);
		iVar0++;
	}
	if (Function_81(9))
	{
		bVar1 = (bVar1 || 2);
		iVar0++;
	}
	if (Function_81(14))
	{
		bVar1 = (bVar1 || 4);
		iVar0++;
	}
	if (Function_81(20))
	{
		bVar1 = (bVar1 || 8);
		iVar0++;
	}
	if (Function_81(22))
	{
		bVar1 = (bVar1 || 16);
		iVar0++;
	}
	if (Function_81(27))
	{
		bVar1 = (bVar1 || 32);
		iVar0++;
	}
	if (Function_81(31))
	{
		bVar1 = (bVar1 || 64);
		iVar0++;
	}
	if (Function_81(34))
	{
		bVar1 = (bVar1 || 128);
		iVar0++;
	}
	if (Function_81(37))
	{
		bVar1 = (bVar1 || 256);
		iVar0++;
	}
	if (Function_81(44))
	{
		bVar1 = (bVar1 || 512);
		iVar0++;
	}
	if (Function_81(48))
	{
		bVar1 = (bVar1 || 1024);
		iVar0++;
	}
	if (Function_81(53))
	{
		bVar1 = (bVar1 || 2048);
		iVar0++;
	}
	if (Function_81(56))
	{
		bVar1 = (bVar1 || 4096);
		iVar0++;
	}
	if (Function_81(59))
	{
		bVar1 = (bVar1 || 8192);
		iVar0++;
	}
	if (Function_81(63))
	{
		bVar1 = (bVar1 || 16384);
		iVar0++;
	}
	if (Function_81(67))
	{
		bVar1 = (bVar1 || 32768);
		iVar0++;
	}
	if (Function_81(71))
	{
		bVar1 = (bVar1 || 65536);
		iVar0++;
	}
	if (Function_81(76))
	{
		bVar1 = (bVar1 || 131072);
		iVar0++;
	}
	Function_169(7, bVar1);
	return iVar0;
}

var Function_210() //Position: 0xAFDE / 45022
{
	int iVar0;
	
	if (Function_86(9))
	{
		iVar0++;
	}
	if (Function_86(10))
	{
		iVar0++;
	}
	if (Function_86(3))
	{
		iVar0++;
	}
	if (Function_86(15))
	{
		iVar0++;
	}
	if (Function_86(14))
	{
		iVar0++;
	}
	if (Function_86(5))
	{
		iVar0++;
	}
	if (Function_86(6))
	{
		iVar0++;
	}
	if (Function_86(7))
	{
		iVar0++;
	}
	if (Function_86(8))
	{
		iVar0++;
	}
	return iVar0;
}

void Function_211() //Position: 0xB060 / 45152
{
	if (!Global_3365)
	{
		Function_232();
		Function_231();
		Function_230();
		Function_229();
	}
	Function_228();
	Function_213();
	Function_212();
	return;
}

void Function_212() //Position: 0xB082 / 45186
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

void Function_213() //Position: 0xB0AB / 45227
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_26055)
	{
		if (Global_26055[iVar0])
		{
			Function_214(iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_214(int iParam0) //Position: 0xB0D4 / 45268
{
	bool bVar0;
	struct<4> Var1;
	
	if (!Function_227(iParam0) && (NET_IS_IN_SESSION() || Function_1()))
	{
		return;
	}
	bVar0 = true;
	switch (iParam0)
	{
		case 0x00000001:
			if (Function_177(3))
			{
				if (!Function_86(1))
				{
					if (!Function_82(2, 0))
					{
						return;
					}
					Function_90(1, 0, 0);
				}
			}
			break;
		
		case 0x00000004:
			if (Function_177(3))
			{
				if (!Function_86(2) && !Function_87(2))
				{
					Function_178(2, 0, 1, 1, 1);
					Function_221(2, 1);
					bVar0 = false;
				}
			}
			break;
		
		case 0x00000009:
			if (!Global_26055[iParam0])
			{
				Function_220(992, 0, 1);
				Function_156(52, 1, 0);
			}
			break;
		
		case 0x0000000A:
			SET_WEAPON_GOLD(Global_34573, 4, 1);
			SET_WEAPON_GOLD(Global_34573, 8, 1);
			break;
		
		case 0x0000000D:
			UI_CHEAT_SET_STATE(4, 1);
			Function_218(4);
			break;
		
		case 0x0000000E:
			UI_CHEAT_SET_STATE(25, 1);
			Function_218(4);
			break;
		
		case 0x0000000F:
			UI_CHEAT_SET_STATE(7, 1);
			Function_218(4);
			break;
		
		case 0x00000010:
			UI_CHEAT_SET_STATE(11, 1);
			Function_218(4);
			break;
		
		case 0x00000011:
			UI_CHEAT_SET_STATE(13, 1);
			Function_218(4);
			break;
		
		case 0x00000012:
			UI_CHEAT_SET_STATE(16, 1);
			Function_218(4);
			break;
		
		case 0x00000013:
			UI_CHEAT_SET_STATE(17, 1);
			Function_218(4);
			break;
		
		case 0x00000014:
			UI_CHEAT_SET_STATE(18, 1);
			Function_218(4);
			break;
		
		case 0x00000015:
			UI_CHEAT_SET_STATE(24, 1);
			Function_218(4);
			break;
		
		case 0x00000016:
			UI_CHEAT_SET_STATE(26, 1);
			Function_218(4);
			break;
		
		case 0x00000017:
			UI_CHEAT_SET_STATE(22, 1);
			Function_218(4);
			break;
		
		case 0x00000018:
			UI_CHEAT_SET_STATE(28, 1);
			Function_218(4);
			break;
		
		case 0x00000019:
			UI_CHEAT_SET_STATE(35, 1);
			Function_218(4);
			break;
		
		case 0x0000001A:
			UI_CHEAT_SET_STATE(36, 1);
			Function_218(4);
			break;
		
		case 0x0000001B:
			UI_CHEAT_SET_STATE(37, 1);
			Function_218(4);
			break;
		
		case 0x0000001C:
			UI_CHEAT_SET_STATE(38, 1);
			Function_218(4);
			break;
		
		case 0x0000001D:
			UI_CHEAT_SET_STATE(39, 1);
			Function_218(4);
			break;
		
		case 0x0000001E:
			UI_CHEAT_SET_STATE(23, 1);
			Function_218(4);
			break;
		
		case 0x00000023:
			if (Function_131(0, 0, 1, 1))
			{
				return;
			}
			if (NET_IS_IN_SESSION())
			{
				Function_216(8);
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
			if (!Function_82(2, 0))
			{
				return;
			}
			Function_215(11);
			break;
		
		case 0x00000000:
			if (!Function_82(2, 0))
			{
				return;
			}
			Function_215(6);
			break;
		
		case 0x0000000B:
		case 0x0000000C:
		case 0x00000029:
		case 0x0000002A:
		case 0x0000002B:
		case 0x0000002C:
		case 0x0000002D:
			return;
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
			Function_61(&Var1, 0x41200000, 1, 0, 2, 1, 0);
		}
	}
	Global_26055[iParam0] = 1;
	return;
}

void Function_215(int iParam0) //Position: 0xB41C / 46108
{
	if (AWARD_AVATAR(iParam0))
	{
		if (IS_PS3())
		{
			Function_61("avunlock_help", 0x41200000, 1, 0, 2, 1, 0);
		}
	}
	return;
}

void Function_216(int iParam0) //Position: 0xB453 / 46163
{
	Function_217(&Global_83864 + 1252, iParam0);
	return;
}

void Function_217(var uParam0, int iParam1) //Position: 0xB465 / 46181
{
	Function_125(uParam0, iParam1);
	return;
}

int Function_218(bool bParam0) //Position: 0xB472 / 46194
{
	struct<4> Var0;
	
	if (bParam0 != 4)
	{
		if (Function_200("xmlsave"))
		{
			if (IS_DEV_BUILD())
			{
				SAVE_GAME(SS_GET_STRING(2, bParam0));
			}
		}
	}
	if (bParam0 <= 4)
	{
		if (Function_60())
		{
			Var0 = { StackVal, StackVal, StackVal, Function_219() };
			SAVE_MANAGER_CREATE_SAVE_DISPLAY_NAME(&Var0);
		}
		else
		{
			SAVE_MANAGER_CREATE_SAVE_DISPLAY_NAME(&Global_3422[Global_626940] + 12);
		}
	}
	if (bParam0 != 4)
	{
		Function_95();
	}
	SAVE_MANAGER_HARD_SAVE(SS_GET_STRING(3, bParam0));
	return 1;
}

struct<16> Function_219() //Position: 0xB4D9 / 46297
{
	int iVar0;
	int iVar1;
	
	iVar1 = 4294967295;
	iVar0 = 0;
	while (iVar0 <= 38)
	{
		if (Function_81(iVar0))
		{
			if (iVar1 == 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (Global_74542[iVar010].f_32 < Global_74542[iVar110].f_32)
			{
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 == 4294967295)
	{
		return StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12);
	}
	if (Global_13172[Function_83(Global_6269)11].f_32 < Global_74542[iVar110].f_32)
	{
		return StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12);
	}
	return StackVal, StackVal, StackVal, *(&Global_63541[iVar155] + 4);
}

void Function_220(var uParam0, bool bParam1, bool bParam2) //Position: 0xB575 / 46453
{
	Global_13038 = uParam0;
	if (bParam1)
	{
		Function_125(&Global_12976 + 36 + 20, 128);
	}
	if (bParam2)
	{
		Function_125(&Global_12976 + 36 + 20, 64);
	}
	return;
}

void Function_221(bool bParam0, bool bParam1) //Position: 0xB5A2 / 46498
{
	int iVar0;
	int iVar1;
	
	if (Function_81(20))
	{
		Function_167(bParam0, 16, 1, 0, bParam1);
	}
	iVar0 = Function_222(0, Global_30640[2], 3);
	iVar1 = Function_208(iVar0);
	if (iVar1 >= 0)
	{
		Function_167(bParam0, 2, 1, 0, bParam1);
	}
	return;
}

int Function_222(bool bParam0, bool bParam1, bool bParam2) //Position: 0xB5DF / 46559
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_226(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_223(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_223(bParam0, bParam1, bParam2, 4294967295);
}

int Function_223(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xB63D / 46653
{
	var uVar0;
	
	if (!Function_225(bParam2))
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
	uVar0 = Function_226(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_224(uVar0);
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

int Function_224(int iParam0) //Position: 0xB792 / 46994
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

bool Function_225(int iParam0) //Position: 0xB7D0 / 47056
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_226(int iParam0, int iParam1, int iParam2) //Position: 0xB7E5 / 47077
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

bool Function_227(int iParam0) //Position: 0xB805 / 47109
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

void Function_228() //Position: 0xB829 / 47145
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
	ENABLE_CHILD_SECTOR("thi_gates01x");
	ENABLE_CHILD_SECTOR("thi_gates02x");
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
				ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve20", !Global_3365);
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
		Function_194();
	}
	return;
}

void Function_229() //Position: 0xECB1 / 60593
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
				Function_199(1);
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
		Function_196(0);
	}
	return;
}

void Function_230() //Position: 0xEE63 / 61027
{
	int iVar0;
	int iVar1;
	
	if (Global_3365)
	{
		Function_192();
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

void Function_231() //Position: 0xEEB6 / 61110
{
	int iVar0;
	
	if (Global_3365)
	{
		Function_193();
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

void Function_232() //Position: 0xEEE4 / 61156
{
	int iVar0;
	int iVar1;
	
	if (Global_3365)
	{
		Function_191();
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

void Function_233(int iParam0) //Position: 0xEF37 / 61239
{
	strcpy(iParam0 + 12, "nTUTORIALS", 16);
	*iParam0 = 70381;
	iParam0->f_4 = 61297;
	iParam0->f_8 = 61291;
	iParam0->f_28 = 1;
	return;
}

void Function_234() //Position: 0xEF6B / 61291
{
	return;
}

int Function_235() //Position: 0xEF71 / 61297
{
	return Function_236(0);
}

int Function_236(bool bParam0) //Position: 0xEF7B / 61307
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
	if (!Function_155(Global_76849, 4))
	{
		if (Function_244(bVar4, 4))
		{
			Function_243(&Global_76849, 4);
			Function_242(Global_34573, 4, 4);
			if (!bParam0)
			{
				Function_61("tutorial_camp_fast_travel", 30.0f, 1, 0, 2, 1, 0);
				return 0;
			}
		}
	}
	if (!Function_155(Global_76846, 0x4000000) && !(((((((Global_3380 || Global_3394) || Global_3382) || Global_3369) || Global_3367) || Global_63096) || Global_3395) || Global_3396))
	{
		if (Function_244(bVar1, 0x4000000))
		{
			Function_243(&Global_76846, 0x4000000);
			if (!bParam0)
			{
				Function_61("tutorial_rare_horse", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
		}
	}
	if ((Global_3365 && !Function_155(Global_76849, 8)) && !((((Global_3369 || Global_63096) || Global_3384) || Global_3395) || Global_3396))
	{
		if (((GET_ACTOR_HEALTH(Global_34573) > (GET_ACTOR_MAX_HEALTH(Global_34573) * 0.3f) && HAS_ITEM(Function_140(3), Global_34573)) && IS_ACTOR_ALIVE(Global_34573)) && !IS_ACTOR_IN_WATER(Global_34573))
		{
			Function_243(&Global_76849, 8);
			if (!bParam0)
			{
				Function_61("tutorial_first_health", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
		}
	}
	if (!bParam0 && ((((((((((Global_59353 || Global_3380) || Global_3382) || Global_3367) || Global_63096) || Global_3395) || Global_3394) || Global_3384) || Global_3369) || Global_3396) || !IS_ACTOR_ALIVE(Global_34573)))
	{
		return 0;
	}
	if (!bParam0 && ((Function_65() || HUD_IS_FADED()) || HUD_IS_FADING()))
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
			if (Function_80(&Global_3422[iVar540] + 128, 16))
			{
				if (((Global_6269 != Global_3422[iVar540].f_132 || Global_6269 != Global_3422[iVar540].f_136) || Global_6269 != Global_3422[iVar540].f_140) || Global_6269 != Global_3422[iVar540].f_144)
				{
					if (Global_3422[iVar540].f_124)
					{
						if (IS_BLIP_VALID(Global_3422[iVar540].f_100))
						{
							SET_BLIP_BLINK(Global_3422[iVar540].f_100, 1, 0, 5f);
						}
						Var14 = { StackVal, StackVal, StackVal, Function_241(iVar5) };
						strcpy(&Var6, "comp_intro_", 32);
						stradd(&Var6, UI_GET_STRING(&Var14), 32);
						if (iVar5 == 49)
						{
							Function_58(&Var6, 0x40f00000, 1, 2, 0, 0, 0, 0);
						}
						else
						{
							Function_61(&Var6, 0x41200000, 1, 0, 2, 1, 0);
						}
						Function_240(&Global_3422[iVar540] + 128, 16);
						return 0;
					}
				}
			}
			iVar5++;
		}
	}
	switch (iLocal_66)
	{
		case 0x00000000:
			if (!Function_155(Global_76847, 0x10000000))
			{
				if (Function_244(bVar2, 0x10000000))
				{
					Function_243(&Global_76847, 0x10000000);
					Function_242(Global_34573, 0x10000000, 2);
					if (!bParam0)
					{
						Function_61("tutorial_aggro_ped", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76847, 1))
			{
				if (Function_244(bVar2, 1))
				{
					Function_243(&Global_76847, 1);
					Function_242(Global_34573, 1, 2);
					if (!bParam0)
					{
						Function_61("tutorial_eyewitness_1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76847, 2))
			{
				if (Function_244(bVar2, 2))
				{
					Function_243(&Global_76847, 2);
					Function_242(Global_34573, 2, 2);
					if (!bParam0)
					{
						Function_61("tutorial_eyewitness_2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76847, 4))
			{
				if (Function_244(bVar2, 4))
				{
					Function_243(&Global_76847, 4);
					Function_242(Global_34573, 4, 2);
					if (!bParam0)
					{
						Function_61("tutorial_eyewitness_3", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76847, 4194304))
			{
				if (Function_244(bVar2, 4194304))
				{
					Function_243(&Global_76847, 4194304);
					Function_242(Global_34573, 4194304, 2);
					if (!bParam0)
					{
						Function_61("tutorial_eyewitness_delayed", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76847, 0x2000000))
			{
				if (Function_244(bVar2, 0x2000000))
				{
					Function_243(&Global_76847, 0x2000000);
					Function_242(Global_34573, 0x2000000, 2);
					if (!bParam0)
					{
						Function_61("tutorial_wanted_2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76847, 0x4000000))
			{
				if (Function_155(Global_76847, 0x2000000))
				{
					Function_243(&Global_76847, 0x4000000);
					if (!bParam0)
					{
						Function_61("tutorial_law_lost_awareness", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76847, 0x8000000))
			{
				if (Function_244(bVar2, 0x8000000))
				{
					Function_243(&Global_76847, 0x8000000);
					Function_242(Global_34573, 0x8000000, 2);
					if (!bParam0)
					{
						Function_61("tutorial_rcm_wanted", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (Function_244(bVar2, 32768))
			{
				Function_243(&Global_76847, 32768);
				Function_242(Global_34573, 32768, 2);
				Function_61("tutorial_law_local_spawn", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
			if (Function_244(bVar2, 128))
			{
				if (Function_155(Global_76847, 65536))
				{
					Function_243(&Global_76847, 128);
					Function_242(Global_34573, 128, 2);
					Function_61("tutorial_law_posse_spawn", 0x41200000, 1, 0, 2, 1, 0);
					return 0;
				}
			}
			if (Function_244(bVar2, 256))
			{
				if (Function_155(Global_76847, 131072))
				{
					Function_243(&Global_76847, 256);
					Function_242(Global_34573, 256, 2);
					Function_61("tutorial_law_marshal_spawn", 0x41200000, 1, 0, 2, 1, 0);
					return 0;
				}
			}
			if (Function_244(bVar2, 512))
			{
				if (Function_155(Global_76847, 262144))
				{
					Function_243(&Global_76847, 512);
					Function_242(Global_34573, 512, 2);
					Function_61("tutorial_law_bounty_spawn", 0x41200000, 1, 0, 2, 1, 0);
					return 0;
				}
			}
			if (Function_244(bVar2, 1024))
			{
				if (Function_155(Global_76847, 131072))
				{
					Function_243(&Global_76847, 1024);
					Function_242(Global_34573, 1024, 2);
					Function_61("tutorial_law_army_spawn", 0x41200000, 1, 0, 2, 1, 0);
					return 0;
				}
			}
			if (!Function_155(Global_76847, 64))
			{
				if (Function_244(bVar2, 64))
				{
					Function_243(&Global_76847, 64);
					Function_242(Global_34573, 64, 2);
					if (!bParam0)
					{
						Function_61("tutorial_player_arrested", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76847, 16384))
			{
				if (Function_244(bVar2, 16384))
				{
					Function_243(&Global_76847, 16384);
					Function_242(Global_34573, 16384, 2);
					if (!bParam0)
					{
						Function_61("tutorial_law_captured", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76847, 0x1000000))
			{
				if (Function_244(bVar2, 0x1000000))
				{
					Function_243(&Global_76847, 0x1000000);
					Function_242(Global_34573, 0x1000000, 2);
					if (!bParam0)
					{
						Function_61("tutorial_law_rewanted", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76847, 8))
			{
				if (Global_3403 && Global_26316.f_176)
				{
					Function_243(&Global_76847, 8);
					if (!bParam0)
					{
						Function_61("tutorial_wanted_1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76847, 8388608))
			{
				if (Function_244(bVar2, 8388608))
				{
					Function_243(&Global_76847, 8388608);
					if (!bParam0)
					{
						Function_61("tutorial_law_lost_awareness2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76847, 32))
			{
				if (Function_244(bVar2, 32))
				{
					Function_243(&Global_76847, 32);
					Function_242(Global_34573, 32, 2);
					if (!bParam0)
					{
						Function_61("tutorial_law_near", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76847, 4096))
			{
				if (Function_244(bVar2, 4096))
				{
					Function_243(&Global_76847, 4096);
					Function_242(Global_34573, 4096, 2);
					if (!bParam0)
					{
						Function_61("tutorial_law_losing_track", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76847, 16) && Function_155(Global_76847, 8))
			{
				if (Function_244(bVar2, 16))
				{
					Function_243(&Global_76847, 16);
					Function_242(Global_34573, 16, 2);
					if (!bParam0)
					{
						Function_61("tutorial_civilian_awareness", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76847, 2048))
			{
				if (Function_244(bVar2, 2048))
				{
					Function_243(&Global_76847, 2048);
					Function_242(Global_34573, 2048, 2);
					if (!bParam0)
					{
						Function_61("tutorial_law_difficulty_increase", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76847, 8192))
			{
				if (Function_244(bVar2, 8192))
				{
					Function_243(&Global_76847, 8192);
					Function_242(Global_34573, 8192, 2);
					if (!bParam0)
					{
						return 0;
					}
				}
			}
			break;
		
		case 0x00000001:
			if (!Function_155(Global_76848, 16384))
			{
				if (Function_244(bVar3, 16384))
				{
					Function_243(&Global_76848, 16384);
					Function_242(Global_34573, 16384, 3);
					if (!bParam0)
					{
						Function_61("tutorial_law_bribe", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76848, 32768))
			{
				if (Function_244(bVar3, 32768))
				{
					Function_243(&Global_76848, 32768);
					Function_242(Global_34573, 32768, 3);
					if (!bParam0)
					{
						Function_61("tutorial_law_surrender", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76848, 65536))
			{
				if (Function_244(bVar3, 65536))
				{
					Function_243(&Global_76848, 65536);
					Function_242(Global_34573, 65536, 3);
					if (!bParam0)
					{
						Function_61("tutorial_law_extra_cops1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76848, 131072))
			{
				if (Function_244(bVar3, 131072))
				{
					Function_243(&Global_76848, 131072);
					Function_242(Global_34573, 131072, 3);
					if (!bParam0)
					{
						Function_61("tutorial_law_extra_cops2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76848, 262144))
			{
				if (Function_244(bVar3, 262144))
				{
					Function_243(&Global_76848, 262144);
					Function_242(Global_34573, 262144, 3);
					if (!bParam0)
					{
						Function_61("tutorial_law_less_cops", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (Function_244(bVar2, 524288))
			{
				Function_243(&Global_76847, 524288);
				Function_242(Global_34573, 524288, 2);
				Function_61("tutorial_law_local_end1", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
			if (!Function_155(Global_76847, 1048576))
			{
				if (Function_155(Global_76847, 524288))
				{
					Function_243(&Global_76847, 1048576);
					if (!bParam0)
					{
						return 0;
					}
				}
			}
			if (Function_244(bVar2, 2097152))
			{
				Function_243(&Global_76847, 2097152);
				Function_242(Global_34573, 2097152, 2);
				Function_61("tutorial_law_pursuit_end", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
			if (Function_244(bVar2, 65536))
			{
				Function_243(&Global_76847, 65536);
				Function_242(Global_34573, 65536, 2);
				Function_61("tutorial_law_posse_generated", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
			if (Function_244(bVar2, 131072))
			{
				Function_243(&Global_76847, 131072);
				Function_242(Global_34573, 131072, 2);
				Function_61("tutorial_law_marshal_generated", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
			if (Function_244(bVar2, 262144))
			{
				Function_243(&Global_76847, 262144);
				Function_242(Global_34573, 262144, 2);
				Function_61("tutorial_law_bounty_generated", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
			if (!Function_155(Global_76848, 0x2000000))
			{
				if (Function_244(bVar3, 0x2000000))
				{
					Function_243(&Global_76848, 0x2000000);
					Function_242(Global_34573, 0x2000000, 3);
					Function_61("whistle_GotEvilHorse", 0x41200000, 1, 0, 2, 1, 0);
					return 0;
				}
			}
			break;
		
		case 0x00000002:
			if (Global_3403 || Global_3404)
			{
				break;
			}
			if (!Function_155(Global_76846, 0x20000000))
			{
				if (Function_82(8, 0))
				{
					Function_243(&Global_76846, 0x20000000);
					if (!bParam0)
					{
						Function_61("tutorial_first_camp_M1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76846, 0x4000000))
			{
				if (Function_82(8, 0))
				{
					Function_243(&Global_76846, 0x4000000);
					if (!bParam0)
					{
						Function_61("tutorial_loot", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76848, 0x8000000))
			{
				if (Function_244(bVar3, 0x8000000))
				{
					Function_243(&Global_76848, 0x8000000);
					if (!bParam0)
					{
						Function_61("Old_News_Avail", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76846, 8))
			{
				if (Function_244(bVar1, 8))
				{
					Function_243(&Global_76846, 8);
					if (!bParam0)
					{
						Function_61("tutorial_road_to_armadillo", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76846, 1))
			{
				if (IS_ACTOR_DRIVING_VEHICLE(Global_34573) && !(Function_82(4, 0) || Function_82(10, 0)))
				{
					if (IS_ACTOR_DRAFT_VEHICLE(GET_VEHICLE(Global_34573)))
					{
						Function_243(&Global_76846, 1);
						if (!bParam0)
						{
							Function_61("tutorial_first_drive_coach", 0x41200000, 1, 0, 2, 1, 0);
							return 0;
						}
					}
				}
			}
			if (!Function_155(Global_76846, 64))
			{
				if (Function_244(bVar1, 64))
				{
					Function_243(&Global_76846, 64);
					Function_242(Global_34573, 64, 1);
					if (!bParam0)
					{
						Function_61("tutorial_first_see_coach", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76846, 256))
			{
				if (Function_244(bVar1, 256))
				{
					Function_243(&Global_76846, 256);
					Function_242(Global_34573, 256, 1);
					if (!bParam0)
					{
						Function_61("tutorial_first_passenger_coach", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76846, 128))
			{
				if (Function_244(bVar1, 128))
				{
					Function_239(5.0f);
					Function_243(&Global_76846, 128);
					Function_242(Global_34573, 128, 1);
					if (!bParam0)
					{
						Function_61("tutorial_first_horse_agitated", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76846, 2097152))
			{
				if (Function_244(bVar1, 2097152))
				{
					Function_243(&Global_76846, 2097152);
					Function_242(Global_34573, 2097152, 1);
					if (!bParam0)
					{
						Function_61("tutorial_rcm_1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76846, 4194304))
			{
				if (Function_155(Global_76846, 2097152))
				{
					Function_243(&Global_76846, 4194304);
					Function_242(Global_34573, 4194304, 1);
					if (!bParam0)
					{
						Function_61("tutorial_rcm_2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76846, 8388608))
			{
				if (Function_155(Global_76846, 4194304))
				{
					Function_243(&Global_76846, 8388608);
					Function_242(Global_34573, 8388608, 1);
					if (!bParam0)
					{
						Function_61("tutorial_rcm_3", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76846, 2))
			{
				if (Function_244(bVar1, 2))
				{
					Function_243(&Global_76846, 2);
					Function_242(Global_34573, 2, 1);
					if (!bParam0)
					{
						Function_61("tutorial_first_outfit1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76846, 4))
			{
				if (Function_155(Global_76846, 2))
				{
					Function_243(&Global_76846, 4);
					if (!bParam0)
					{
						Function_61("tutorial_first_outfit2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_86(3))
			{
				if (!Function_155(Global_76846, 512))
				{
					if (Function_244(bVar1, 512))
					{
						Function_243(&Global_76846, 512);
						Function_242(Global_34573, 512, 1);
						if (!bParam0)
						{
							Function_61("tutorial_lost_cards", 0x41200000, 1, 0, 2, 1, 0);
						}
						Function_178(3, 0, 1, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76846, 4096))
			{
				if ((Global_29007 != 2 && !Global_3388) && !Function_131(0, 0, 1, 6))
				{
					Function_243(&Global_76846, 4096);
					if (!bParam0)
					{
						Function_61("tutorial_first_camp", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76846, 8192))
			{
				if (Function_155(Global_76846, 4096))
				{
					Function_243(&Global_76846, 8192);
					if (!bParam0)
					{
						Function_61("tutorial_first_camp2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76846, 1024))
			{
				if (((Global_29007 != 2 && !Global_3388) && !Function_131(0, 0, 1, 1)) && Function_82(4, 0))
				{
					Function_243(&Global_76846, 1024);
					if (!bParam0)
					{
						Function_61("tutorial_first_wilderness1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76846, 2048))
			{
				if (Function_155(Global_76846, 1024))
				{
					Function_243(&Global_76846, 2048);
					if (!bParam0)
					{
						Function_61("tutorial_first_wilderness2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76846, 16))
			{
				if (Function_244(bVar1, 16) && !Global_3380)
				{
					Function_243(&Global_76846, 16);
					Function_242(Global_34573, 16, 1);
					if (!bParam0)
					{
						Function_61("tutorial_first_action_area1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76846, 32))
			{
				if (Function_155(Global_76846, 16))
				{
					Function_243(&Global_76846, 32);
					if (!bParam0)
					{
						Function_61("tutorial_first_action_area2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76846, 32768))
			{
				if (Function_244(bVar1, 32768))
				{
					Function_243(&Global_76846, 32768);
					if (!bParam0)
					{
						Function_61("tutorial_kill_job", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76846, 65536))
			{
				if (Function_244(bVar1, 65536))
				{
					Function_242(Global_34573, 65536, 1);
					if (!bParam0)
					{
						Function_61("tutorial_kill_shop", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76846, 131072))
			{
				if (Function_244(bVar1, 131072))
				{
					Function_243(&Global_76846, 131072);
					if (!bParam0)
					{
						Function_61("tutorial_first_headshot_bonus", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76846, 524288))
			{
				if (Function_244(bVar1, 524288))
				{
					Function_243(&Global_76846, 524288);
					if (!bParam0)
					{
						Function_61("tutorial_first_robbery", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76846, 1048576))
			{
				if (Function_244(bVar1, 1048576))
				{
					Function_243(&Global_76846, 1048576);
					if (!bParam0)
					{
						Function_61("tutorial_first_robbery_denial", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76846, 0x1000000))
			{
				if (Function_244(bVar1, 0x1000000))
				{
					Function_243(&Global_76846, 0x1000000);
					if (!bParam0)
					{
						Function_61("tutorial_second_weapon1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76846, 0x2000000))
			{
				if (Function_155(Global_76846, 0x1000000))
				{
					Function_243(&Global_76846, 0x2000000);
					if (!bParam0)
					{
						Function_61("tutorial_second_weapon2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76848, 4194304))
			{
				if (Function_244(bVar3, 4194304))
				{
					Function_243(&Global_76848, 4194304);
					if (!bParam0)
					{
						Function_61("tutorial_random_char", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76848, 524288))
			{
				if (Function_244(bVar3, 524288))
				{
					Function_243(&Global_76848, 524288);
					if (!bParam0)
					{
						Function_61("tutorial_skinning_1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76848, 1048576))
			{
				if (Function_155(Global_76848, 524288))
				{
					Function_243(&Global_76848, 1048576);
					if (!bParam0)
					{
						Function_61("tutorial_skinning_2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76848, 2097152))
			{
				if (Function_244(bVar3, 2097152))
				{
					Function_243(&Global_76848, 2097152);
					if (!bParam0)
					{
						Function_61("tutorial_skinning_3", 0x41200000, 1, 0, 2, 1, 0);
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
			if (!Function_155(Global_76846, 262144))
			{
				if (Function_244(bVar1, 262144))
				{
					Function_243(&Global_76846, 262144);
					if (!bParam0)
					{
						Function_61("tutorial_bounty_no_money_first", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76848, 1))
			{
				if (Function_244(bVar3, 1))
				{
					Function_243(&Global_76848, 1);
					Function_242(Global_34573, 1, 3);
					if (!bParam0)
					{
						Function_61("tutorial_first_honor_positive", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76848, 2))
			{
				if (Function_244(bVar3, 2))
				{
					Function_243(&Global_76848, 2);
					Function_242(Global_34573, 2, 3);
					if (!bParam0)
					{
						Function_61("tutorial_first_honor_negative", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76848, 4))
			{
				if (Function_244(bVar3, 4))
				{
					Function_243(&Global_76848, 4);
					Function_242(Global_34573, 4, 3);
					if (!bParam0)
					{
						Function_61("tutorial_first_notoriety_positive", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76848, 8))
			{
				if (Function_238() == 0)
				{
					Function_243(&Global_76848, 8);
					if (!bParam0)
					{
						Function_61("tutorial_very_low_honor", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76848, 16))
			{
				if (Function_238() == 1)
				{
					Function_243(&Global_76848, 16);
					if (!bParam0)
					{
						Function_61("tutorial_low_honor", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76848, 32))
			{
				if (Function_238() == 2)
				{
					Function_243(&Global_76848, 32);
					if (!bParam0)
					{
						Function_61("tutorial_medium_low_honor", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76848, 64))
			{
				if (Function_238() == 4)
				{
					Function_243(&Global_76848, 64);
					if (!bParam0)
					{
						Function_61("tutorial_medium_high_honor", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76848, 128))
			{
				if (Function_238() == 5)
				{
					Function_243(&Global_76848, 128);
					if (!bParam0)
					{
						Function_61("tutorial_high_honor", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76848, 256))
			{
				if (Function_238() == 6)
				{
					Function_243(&Global_76848, 256);
					if (!bParam0)
					{
						Function_61("tutorial_very_high_honor", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76848, 512))
			{
				if (Function_237() == 1)
				{
					Function_243(&Global_76848, 512);
					if (!bParam0)
					{
						Function_61("tutorial_low_notoriety", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76848, 1024))
			{
				if (Function_237() == 2)
				{
					Function_243(&Global_76848, 1024);
					if (!bParam0)
					{
						Function_61("tutorial_medium_low_notoriety", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76848, 2048))
			{
				if (Function_237() == 3)
				{
					Function_243(&Global_76848, 2048);
					if (!bParam0)
					{
						Function_61("tutorial_medium_notoriety", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76848, 4096))
			{
				if (Function_237() == 4)
				{
					Function_243(&Global_76848, 4096);
					if (!bParam0)
					{
						Function_61("tutorial_medium_high_notoriety", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76848, 8192))
			{
				if (Function_237() == 5)
				{
					Function_243(&Global_76848, 8192);
					if (!bParam0)
					{
						Function_61("tutorial_high_notoriety", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76848, 8388608))
			{
				if (Function_244(bVar3, 8388608))
				{
					Function_243(&Global_76848, 8388608);
					Function_242(Global_34573, 8388608, 3);
					if (!bParam0)
					{
						Function_61("tutorial_first_minigame_in_rain", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76848, 0x1000000))
			{
				if (Function_244(bVar3, 0x1000000))
				{
					Function_243(&Global_76848, 0x1000000);
					Function_242(Global_34573, 0x1000000, 3);
					if (!bParam0)
					{
						Function_61("tutorial_first_missed_achievement", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76846, 0x8000000))
			{
				if (Function_244(bVar1, 0x8000000))
				{
					Function_243(&Global_76846, 0x8000000);
					Function_242(Global_34573, 0x8000000, 1);
					if (!bParam0)
					{
						Function_61("tutorial_first_on_donkey", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (Function_244(bVar4, 1) && Function_82(4, 0))
			{
				Function_242(Global_34573, 1, 4);
				if (!bParam0)
				{
					Function_61("tutorial_new_item_in_shops", 0x41200000, 1, 0, 2, 1, 0);
					return 0;
				}
			}
			if (!Function_155(Global_76847, 0x20000000))
			{
				if ((((((HAS_ITEM(Function_140(53), Global_34573) || HAS_ITEM(Function_140(54), Global_34573)) || HAS_ITEM(Function_140(55), Global_34573)) || HAS_ITEM(Function_140(56), Global_34573)) || HAS_ITEM(Function_140(57), Global_34573)) || HAS_ITEM(Function_140(58), Global_34573)) || HAS_ITEM(Function_140(10), Global_34573))
				{
					Function_243(&Global_76847, 0x20000000);
					if (!bParam0)
					{
						Function_61("tutorial_outfit_scrap", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_244(bVar4, 2) && Function_82(4, 0))
			{
				if (Function_155(Global_76849, 2))
				{
					if (GET_CURRENT_GAME_TIME() < Global_12976.f_132)
					{
						if (!bParam0)
						{
							Function_61("tutorial_gunsmith", 0x41200000, 1, 0, 2, 1, 0);
							Global_12976.f_132 = (GET_CURRENT_GAME_TIME() + fVar0);
							return 0;
						}
					}
				}
				if (!Function_155(Global_76849, 2))
				{
					if (!bParam0)
					{
						Function_243(&Global_76849, 2);
						Function_61("tutorial_gunsmith", 0x41200000, 1, 0, 2, 1, 0);
						Global_12976.f_132 = (GET_CURRENT_GAME_TIME() + fVar0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76849, 16))
			{
				if (Function_82(9, 0))
				{
					Function_243(&Global_76849, 16);
					if (!bParam0)
					{
						Function_61("tutorial_place_waypoint", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_76849, 32))
			{
				if (Function_244(bVar4, 32))
				{
					Function_243(&Global_76849, 32);
					Function_242(Global_34573, 32, 4);
					if (!bParam0)
					{
						Function_61("tutorial_bait_1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			break;
	}
	iLocal_66++;
	if (iLocal_66 >= 3)
	{
		iLocal_66 = 0;
	}
	return 0;
}

int Function_237() //Position: 0x1118D / 70029
{
	return Global_12976.f_156;
}

int Function_238() //Position: 0x11198 / 70040
{
	return Global_12976.f_152;
}

void Function_239(bool bParam0) //Position: 0x111A3 / 70051
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

void Function_240(var uParam0, int iParam1) //Position: 0x11228 / 70184
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

struct<16> Function_241(int iParam0) //Position: 0x1123F / 70207
{
	char* cVar0[16];
	
	if (!Function_60())
	{
		strcpy(&cVar0, "miss", 16);
	}
	else
	{
		strcpy(&cVar0, "ziss", 16);
	}
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

void Function_242(bool bParam0, int iParam1, int iParam2) //Position: 0x11279 / 70265
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
	Function_151(&Var1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &Var1))
	{
		return;
	}
	bVar5 = DECOR_GET_INT(bParam0, &Var1);
	DECOR_SET_INT(bParam0, &Var1, (bVar5 - (bVar5 && uVar0)));
	return;
}

void Function_243(var uParam0, int iParam1) //Position: 0x112C8 / 70344
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_244(bool bParam0, int iParam1) //Position: 0x112D7 / 70359
{
	var uVar0;
	
	uVar0 = iParam1;
	if ((bParam0 && uVar0) >= 0)
	{
		return 1;
	}
	return 0;
}

void Function_245() //Position: 0x112ED / 70381
{
	return;
}

void Function_246(int iParam0) //Position: 0x112F3 / 70387
{
	strcpy(iParam0 + 12, "nLAW-PRINT", 16);
	*iParam0 = 71432;
	iParam0->f_4 = 70445;
	iParam0->f_8 = 70439;
	iParam0->f_28 = 1;
	return;
}

void Function_247() //Position: 0x11327 / 70439
{
	return;
}

int Function_248() //Position: 0x1132D / 70445
{
	Function_249();
	return 0;
}

void Function_249() //Position: 0x11337 / 70455
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
									Function_254(iVar6);
									Function_253(iVar6);
									return;
								}
							}
							Global_27647.f_444 = (GET_CURRENT_GAME_TIME() + Global_27647[iVar622].f_64);
							Function_254(iVar6);
							Function_253(iVar6);
							return;
						}
						break;
					
					case 0x00000019:
						if (Function_251(GET_SQUAD_FROM_OBJECT(Global_27647[iVar622].f_80), GET_PLAYER_ACTOR(0), Global_27647[iVar622].f_68, 1))
						{
							if (Global_27647[iVar622].f_72)
							{
								if (CAN_ANYONE_OF_FACTION_SEE_OBJECT(GET_ACTOR_FACTION(Function_250(GET_SQUAD_FROM_OBJECT(Global_27647[iVar622].f_80))), GET_PLAYER_ACTOR(0)))
								{
									Global_27647.f_444 = (GET_CURRENT_GAME_TIME() + Global_27647[iVar622].f_64);
									Function_254(iVar6);
									Function_253(iVar6);
									return;
								}
							}
							Global_27647.f_444 = (GET_CURRENT_GAME_TIME() + Global_27647[iVar622].f_64);
							Function_254(iVar6);
							Function_253(iVar6);
							return;
						}
						break;
				}
				iVar6++;
			}
			else
			{
				Function_253(iVar6);
			}
		}
		else
		{
			return;
		}
	}
	return;
}

var Function_250(bool bParam0) //Position: 0x114D0 / 70864
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

bool Function_251(bool bParam0, bool bParam1, int iParam2, var uParam3) //Position: 0x11516 / 70934
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
				if (ACTORS_IN_RANGE(bVar1, bParam1, iParam2))
				{
					if (!Function_252(bVar1, 1) || uParam3)
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

bool Function_252(bool bParam0, int iParam1) //Position: 0x115AF / 71087
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

void Function_253(int iParam0) //Position: 0x115F9 / 71161
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

void Function_254(int iParam0) //Position: 0x116AD / 71341
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
	Function_62(&Var0, Global_27647[iParam022].f_64, 0, 2, 1, 0);
	return;
}

void Function_255() //Position: 0x11708 / 71432
{
	return;
}

void Function_256(int iParam0) //Position: 0x1170E / 71438
{
	strcpy(iParam0 + 12, "AMBIENT-CHALL", 16);
	*iParam0 = 127008;
	iParam0->f_4 = 71583;
	iParam0->f_8 = 71494;
	iParam0->f_28 = 1;
	return;
}

void Function_257() //Position: 0x11746 / 71494
{
	RELEASE_LAYOUT_REF(Function_258());
	return;
}

var Function_258() //Position: 0x11752 / 71506
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return bVar0;
}

int Function_259() //Position: 0x1179F / 71583
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	bool bVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	bVar1 = Function_9(Global_79349.f_44, 16384);
	uVar2 = Function_448();
	bVar3 = (Function_1() || Global_34165.f_44);
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (IS_ACTOR_ON_TRAIN(Global_34573, 1) && !Global_3380)
		{
			uVar4 = NET_MAILBOX_GET_CHALLENGE_BY_ID("sc_challenge_aa_09");
			if (Function_446(uVar4))
			{
				iVar5 = Function_445(&uVar4);
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
			iVar6 = NET_MAILBOX_GET_CHALLENGE_BY_ID("sc_challenge_aa_09");
			iVar7 = Function_445(&iVar6);
			if (iVar7 >= 4294967295)
			{
				if (Function_446(iVar6) && Global_84611[iVar7140].f_64)
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
			if (!Function_353(&Global_49399, bVar0, bVar1, uVar2))
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
			if (!Function_318(&Global_49310, bVar0))
			{
				PRINTSTRING("AMBIENT_MISSIONS_UPDATE: WARNING - failed to update mission of index: ");
				PRINTINT(bVar0);
				PRINTNL();
			}
			bVar0++;
		}
		if (Function_182(32))
		{
			Function_306();
		}
		if (Function_182(64))
		{
			Function_262();
		}
	}
	Function_260();
	return 0;
}

void Function_260() //Position: 0x1198C / 72076
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = Function_258();
	bVar1 = Function_261();
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

var Function_261() //Position: 0x11A00 / 72192
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = Function_258();
	bVar1 = GET_ITERATOR_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bVar0, "AmbientMissions_Iterator"));
	if (!IS_ITERATOR_VALID(bVar1))
	{
		bVar1 = CREATE_NAMED_OBJECT_ITERATOR(bVar0, "AmbientMissions_Iterator");
	}
	return bVar1;
}

void Function_262() //Position: 0x11A5D / 72285
{
	var uVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	float fVar5;
	var uVar6;
	int iVar10;
	int iVar11;
	
	if (StackVal == 3)
	{
		return;
	}
	uVar0 = Function_305("ER_SP");
	iVar10 = 8872;
	switch (StackVal)
	{
		case 0x00000000:
			switch (StackVal)
			{
				case 0x00000000:
					if (Function_81(5))
					{
						Function_304();
						SET_JOURNAL_ENTRY_PROGRESS(Local_38.f_24, -1.0f, true, 0);
						Local_38.f_32 = 1;
					}
					Local_38.f_4 = 1;
					break;
				
				case 0x00000001:
					if (ACTOR_HAS_WEAPON(Global_34573, 31))
					{
						Local_38.f_4 = 2;
					}
					else if (Function_81(5))
					{
						if (Local_38.f_32 != 1)
						{
							Local_38.f_32 = 1;
							Function_304();
							SET_JOURNAL_ENTRY_PROGRESS(Local_38.f_24, -1.0f, true, 0);
						}
					}
					break;
				
				case 0x00000002:
					if (((Global_3375 && !Global_63096) && !Global_59353) && Function_300())
					{
						Function_299(&uVar0);
						Function_298(1, "AM_ER");
						Function_284(20, 1, 0);
						Function_282();
						Local_38.f_8 = 1;
						Local_38.f_4 = 0;
						Local_38.f_12 = 0.0f;
						Local_38.f_32 = 0;
						Function_281();
						Function_276();
						memcpy(&uVar6, StackVal, StackVal, StackVal, StackVal, StackVal, Function_275(), 4);
						Local_38.f_24 = CREATE_JOURNAL_ENTRY(&uVar6, 3, false, "challenge_01");
					}
					break;
			}
			break;
		
		case 0x00000001:
			switch (StackVal)
			{
				case 0x00000000:
					Function_304();
					SET_JOURNAL_ENTRY_PROGRESS(Local_38.f_24, Local_38.f_12, true, 0);
					(*&Local_38 + 36)[0] = GET_CURRENT_GAME_TIME();
					Local_38.f_4 = 1;
					break;
				
				case 0x00000001:
					if (GET_LAST_ATTACK_TIME(Global_34573) < ((*&Local_38 + 36)[0] + 0.3f))
					{
						(*&Local_38 + 36)[0] = GET_LAST_ATTACK_TIME(Global_34573);
					}
					bVar3 = Function_274(2, &uVar0, 1);
					if (bVar3 >= 0)
					{
						iVar2 = 0;
						while (Function_273(&uVar0, &iVar2, &bVar4))
						{
							if ((GET_EVENT_TIME(GET_EVENT_FROM_OBJECT(bVar4)) + 0.3f) <= (*&Local_38 + 36)[0])
							{
								if (Function_272(bVar4) == 31)
								{
									bVar1 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar4)));
									if (IS_ACTOR_VALID(bVar1))
									{
										iVar11 = Function_265(bVar1);
										if (((iVar11 != 0 || iVar11 != 1) || iVar11 != 2) || iVar11 != 3)
										{
											if (!DECOR_CHECK_EXIST(bVar1, "AM_ERcounted"))
											{
												DECOR_SET_BOOL(bVar1, "AM_ERcounted", true);
												switch (iVar11)
												{
													case 0x00000000:
														Function_125(&Local_38 + 32, 1);
														break;
													
													case 0x00000001:
														Function_125(&Local_38 + 32, 2);
														break;
													
													case 0x00000002:
														Function_125(&Local_38 + 32, 4);
														break;
													
													case 0x00000003:
														Function_125(&Local_38 + 32, 8);
														break;
													}
												}
											}
										}
								}
							}
						}
						if (((Function_9(Local_38.f_32, 1) && Function_9(Local_38.f_32, 2)) && Function_9(Local_38.f_32, 4)) && Function_9(Local_38.f_32, 8))
						{
							Local_38.f_4 = 2;
							Local_38.f_28 = 0;
							Local_38.f_32 = 0;
							break;
						}
						else
						{
							Function_299(&uVar0);
						}
					}
					bVar3 = Function_274(91, &uVar0, 1);
					if (bVar3 >= 0)
					{
						iVar2 = 0;
						while (Function_273(&uVar0, &iVar2, &bVar4))
						{
							if ((GET_EVENT_TIME(GET_EVENT_FROM_OBJECT(bVar4)) + 0.3f) <= (*&Local_38 + 36)[0])
							{
								if (Function_272(bVar4) == 31)
								{
									bVar1 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar4)));
									if (IS_ACTOR_VALID(bVar1))
									{
										iVar11 = Function_265(bVar1);
										if (((iVar11 != 0 || iVar11 != 1) || iVar11 != 2) || iVar11 != 3)
										{
											if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bVar1), iVar10))
											{
												if (!DECOR_CHECK_EXIST(bVar1, "AM_ERcounted"))
												{
													DECOR_SET_BOOL(bVar1, "AM_ERcounted", true);
													switch (iVar11)
													{
														case 0x00000000:
															Function_125(&Local_38 + 32, 1);
															break;
														
														case 0x00000001:
															Function_125(&Local_38 + 32, 2);
															break;
														
														case 0x00000002:
															Function_125(&Local_38 + 32, 4);
															break;
														
														case 0x00000003:
															Function_125(&Local_38 + 32, 8);
															break;
														}
													}
												}
											}
										}
								}
							}
						}
						if (((Function_9(Local_38.f_32, 1) && Function_9(Local_38.f_32, 2)) && Function_9(Local_38.f_32, 4)) && Function_9(Local_38.f_32, 8))
						{
							Local_38.f_4 = 2;
							Local_38.f_28 = 0;
							Local_38.f_32 = 0;
							break;
						}
						else
						{
							Function_299(&uVar0);
						}
					}
					bVar3 = false;
					fVar5 = Local_38.f_12;
					if (Function_9(Local_38.f_32, 1))
					{
						bVar3++;
					}
					if (Function_9(Local_38.f_32, 2))
					{
						bVar3++;
					}
					if (Function_9(Local_38.f_32, 4))
					{
						bVar3++;
					}
					if (Function_9(Local_38.f_32, 8))
					{
						bVar3++;
					}
					Local_38.f_12 = (IntToFloat(bVar3) / 4.0f);
					if (Local_38.f_12 == fVar5)
					{
						SET_JOURNAL_ENTRY_PROGRESS(Local_38.f_24, Local_38.f_12, true, 0);
						Function_281();
					}
					break;
				
				case 0x00000002:
					if (Function_300())
					{
						Function_298(2, "AM_ER");
						Function_299(&uVar0);
						Function_284(20, 1, 0);
						Function_282();
						Local_38.f_8 = 2;
						Local_38.f_4 = 0;
						Local_38.f_12 = 0.0f;
						Function_281();
						if (_GET_AMMO_AMOUNT(Global_34573, 13, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 13))
						{
							_ADD_AMMO_OF_TYPE(Global_34573, 13, 2.0f, 1, 1);
						}
						Function_276();
						memcpy(&uVar6, StackVal, StackVal, StackVal, StackVal, StackVal, Function_275(), 4);
						Local_38.f_24 = CREATE_JOURNAL_ENTRY(&uVar6, 3, false, "challenge_01");
					}
					break;
			}
			break;
		
		case 0x00000002:
			switch (StackVal)
			{
				case 0x00000000:
					Function_304();
					SET_JOURNAL_ENTRY_PROGRESS(Local_38.f_24, -1.0f, true, 0);
					(*&Local_38 + 36)[0] = GET_CURRENT_GAME_TIME();
					Local_38.f_4 = 1;
					break;
				
				case 0x00000001:
					if (GET_LAST_ATTACK_TIME(Global_34573) < ((*&Local_38 + 36)[0] + 0.3f))
					{
						(*&Local_38 + 36)[0] = GET_LAST_ATTACK_TIME(Global_34573);
						Local_38.f_28 = 0;
					}
					bVar3 = Function_274(2, &uVar0, 1);
					if (bVar3 >= 0)
					{
						iVar2 = 0;
						while (Function_273(&uVar0, &iVar2, &bVar4))
						{
							if ((GET_EVENT_TIME(GET_EVENT_FROM_OBJECT(bVar4)) + 0.3f) <= (*&Local_38 + 36)[0])
							{
								if (Function_272(bVar4) == 31)
								{
									bVar1 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar4)));
									if (IS_ACTOR_VALID(bVar1))
									{
										if (IS_ACTOR_HUMAN(bVar1))
										{
											if (Function_265(bVar1) != 4294967295)
											{
												if (!DECOR_CHECK_EXIST(bVar1, "AM_ERcounted"))
												{
													Local_38.f_28++;
													DECOR_SET_BOOL(bVar1, "AM_ERcounted", true);
												}
											}
										}
									}
								}
							}
						}
						if (Local_38.f_28 > 3)
						{
							Local_38.f_4 = 2;
							Local_38.f_28 = 0;
							break;
						}
						else
						{
							Function_299(&uVar0);
						}
					}
					bVar3 = Function_274(91, &uVar0, 1);
					if (bVar3 >= 0)
					{
						iVar2 = 0;
						while (Function_273(&uVar0, &iVar2, &bVar4))
						{
							if ((GET_EVENT_TIME(GET_EVENT_FROM_OBJECT(bVar4)) + 0.3f) <= (*&Local_38 + 36)[0])
							{
								if (Function_272(bVar4) == 31)
								{
									bVar1 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar4)));
									if (IS_ACTOR_VALID(bVar1))
									{
										if (IS_ACTOR_HUMAN(bVar1))
										{
											if (Function_265(bVar1) != 4294967295)
											{
												if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bVar1), iVar10))
												{
													if (!DECOR_CHECK_EXIST(bVar1, "AM_ERcounted"))
													{
														Local_38.f_28++;
														DECOR_SET_BOOL(bVar1, "AM_ERcounted", true);
													}
												}
											}
										}
									}
								}
							}
						}
						if (Local_38.f_28 > 3)
						{
							Local_38.f_4 = 2;
							Local_38.f_28 = 0;
							break;
						}
						else
						{
							Function_299(&uVar0);
						}
					}
					break;
				
				case 0x00000002:
					if (Function_300())
					{
						Function_298(3, "AM_ER");
						Function_299(&uVar0);
						Function_284(20, 1, 0);
						Function_282();
						Local_38.f_8 = 3;
						Local_38.f_4 = 0;
						Local_38.f_12 = 0.0f;
						Function_281();
						if (_GET_AMMO_AMOUNT(Global_34573, 13, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 13))
						{
							_ADD_AMMO_OF_TYPE(Global_34573, 13, 2.0f, 1, 1);
						}
						Function_276();
						memcpy(&uVar6, StackVal, StackVal, StackVal, StackVal, StackVal, Function_275(), 4);
						Local_38.f_24 = CREATE_JOURNAL_ENTRY(&uVar6, 3, false, "challenge_01");
					}
					break;
			}
			break;
		
		case 0x00000003:
			switch (StackVal)
			{
				case 0x00000000:
					Function_304();
					SET_JOURNAL_ENTRY_PROGRESS(Local_38.f_24, -1.0f, true, 0);
					(*&Local_38 + 36)[0] = GET_CURRENT_GAME_TIME();
					Local_38.f_4 = 1;
					break;
				
				case 0x00000001:
					if (GET_LAST_ATTACK_TIME(Global_34573) < ((*&Local_38 + 36)[0] + 0.3f))
					{
						(*&Local_38 + 36)[0] = GET_LAST_ATTACK_TIME(Global_34573);
						Local_38.f_28 = 0;
					}
					bVar3 = Function_264(2, "ANIMAL", &uVar0, 1, 0);
					if (bVar3 >= 0)
					{
						iVar2 = 0;
						while (Function_273(&uVar0, &iVar2, &bVar4))
						{
							if ((GET_EVENT_TIME(GET_EVENT_FROM_OBJECT(bVar4)) + 0.3f) <= (*&Local_38 + 36)[0])
							{
								if (Function_272(bVar4) == 31)
								{
									bVar1 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar4)));
									if (IS_ACTOR_VALID(bVar1))
									{
										if (IS_ACTOR_ANIMAL(bVar1))
										{
											if (ANIMAL_ACTOR_GET_DOMESTICATION(bVar1) == 1)
											{
												if (!DECOR_CHECK_EXIST(bVar1, "AM_ERcounted"))
												{
													Local_38.f_28++;
													DECOR_SET_BOOL(bVar1, "AM_ERcounted", true);
												}
											}
										}
									}
								}
							}
						}
						if (Local_38.f_28 > 2)
						{
							Local_38.f_4 = 2;
							Local_38.f_28 = 0;
							break;
						}
						else
						{
							Function_299(&uVar0);
						}
					}
					bVar3 = Function_264(91, "ANIMAL", &uVar0, 1, 0);
					if (bVar3 >= 0)
					{
						iVar2 = 0;
						while (Function_273(&uVar0, &iVar2, &bVar4))
						{
							if ((GET_EVENT_TIME(GET_EVENT_FROM_OBJECT(bVar4)) + 0.3f) <= (*&Local_38 + 36)[0])
							{
								if (Function_272(bVar4) == 31)
								{
									bVar1 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar4)));
									if (IS_ACTOR_VALID(bVar1))
									{
										if (IS_ACTOR_ANIMAL(bVar1))
										{
											if (ANIMAL_ACTOR_GET_DOMESTICATION(bVar1) == 1)
											{
												if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bVar1), iVar10))
												{
													if (!DECOR_CHECK_EXIST(bVar1, "AM_ERcounted"))
													{
														Local_38.f_28++;
														DECOR_SET_BOOL(bVar1, "AM_ERcounted", true);
													}
												}
											}
										}
									}
								}
							}
						}
						if (Local_38.f_28 > 2)
						{
							Local_38.f_4 = 2;
							Local_38.f_28 = 0;
							break;
						}
						else
						{
							Function_299(&uVar0);
						}
					}
					break;
				
				case 0x00000002:
					if (Function_300())
					{
						Function_298(4, "AM_ER");
						Function_299(&uVar0);
						Function_284(20, 1, 0);
						Function_282();
						Local_38.f_8 = 4;
						Local_38.f_4 = 0;
						Local_38.f_12 = 0.0f;
						Local_38.f_28 = 0;
						Function_281();
						if (_GET_AMMO_AMOUNT(Global_34573, 13, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 13))
						{
							_ADD_AMMO_OF_TYPE(Global_34573, 13, 2.0f, 1, 1);
						}
						Function_276();
						memcpy(&uVar6, StackVal, StackVal, StackVal, StackVal, StackVal, Function_275(), 4);
						Local_38.f_24 = CREATE_JOURNAL_ENTRY(&uVar6, 3, false, "challenge_01");
					}
					break;
			}
			break;
		
		case 0x00000004:
			switch (StackVal)
			{
				case 0x00000000:
					Function_304();
					SET_JOURNAL_ENTRY_PROGRESS(Local_38.f_24, -1.0f, true, 0);
					(*&Local_38 + 36)[0] = GET_CURRENT_GAME_TIME();
					Local_38.f_4 = 1;
					break;
				
				case 0x00000001:
					if (GET_LAST_ATTACK_TIME(Global_34573) < ((*&Local_38 + 36)[0] + 0.3f))
					{
						(*&Local_38 + 36)[0] = GET_LAST_ATTACK_TIME(Global_34573);
					}
					if (Local_38.f_28 == 0)
					{
						if (Function_82(4, 0))
						{
							Local_38.f_28 = 1;
							Function_304();
						}
					}
					if (Function_263(9) || Function_82(4, 0))
					{
						bVar3 = Function_274(2, &uVar0, 1);
						if (bVar3 >= 0)
						{
							iVar2 = 0;
							while (Function_273(&uVar0, &iVar2, &bVar4))
							{
								if ((GET_EVENT_TIME(GET_EVENT_FROM_OBJECT(bVar4)) + 0.3f) <= (*&Local_38 + 36)[0])
								{
									if (Function_272(bVar4) == 31)
									{
										bVar1 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar4)));
										if (IS_ACTOR_VALID(bVar1))
										{
											if (IS_ACTOR_HUMAN(bVar1))
											{
												if (Function_265(bVar1) != 4294967295)
												{
													Local_38.f_4 = 2;
													break;
												}
											}
										}
									}
								}
							}
							Function_299(&uVar0);
						}
						bVar3 = Function_274(91, &uVar0, 1);
						if (bVar3 >= 0)
						{
							iVar2 = 0;
							while (Function_273(&uVar0, &iVar2, &bVar4))
							{
								if ((GET_EVENT_TIME(GET_EVENT_FROM_OBJECT(bVar4)) + 0.3f) <= (*&Local_38 + 36)[0])
								{
									if (Function_272(bVar4) == 31)
									{
										bVar1 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar4)));
										if (IS_ACTOR_VALID(bVar1))
										{
											if (IS_ACTOR_HUMAN(bVar1))
											{
												if (Function_265(bVar1) != 4294967295)
												{
													if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bVar1), iVar10))
													{
														Local_38.f_4 = 2;
														break;
													}
												}
											}
										}
									}
								}
							}
							Function_299(&uVar0);
						}
					}
					break;
				
				case 0x00000002:
					if ((Global_3375 && !Global_63096) && Function_300())
					{
						if (!HAS_ACHIEVEMENT_BEEN_PASSED(69))
						{
							AWARD_ACHIEVEMENT(69);
						}
						Function_298(10, "AM_ER");
						Function_299(&uVar0);
						Function_284(20, 1, 0);
						Function_282();
						Local_38.f_8 = 10;
						Local_38.f_12 = 0.0f;
						Function_281();
						Function_276();
						Local_38.f_8 = 5;
					}
					break;
			}
			break;
		
		case 0x00000005:
			if (!UI_ISACTIVE("SaveGame_DoNotInterruptMe"))
			{
				Function_61("AM_ER_RW1_helpz", 0x41200000, 1, 0, 2, 1, 0);
				Local_38.f_8 = 10;
				Local_38.f_4 = 3;
				Function_282();
			}
			break;
	}
	return;
}

int Function_263(int iParam0) //Position: 0x12693 / 75411
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_264(bool bParam0, char* cParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0x126A4 / 75428
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
	
	if (!IS_OBJECTSET_VALID(*uParam2))
	{
		LOG_ERROR("AM_COLLECT_PLAYER_EVENTS_OF_TYPE_ON_ACTORENUM: invalid objectset passed as EventCollection");
		return 4294967295;
	}
	if (!IS_ACTOR_VALID(Function_29()))
	{
		return 4294967295;
	}
	bVar0 = Function_261();
	iVar1 = 0;
	bVar2 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar2))
	{
		if (!IS_OBJECT_IN_OBJECTSET(bVar2, *uParam2))
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
										ADD_OBJECT_TO_OBJECTSET(bVar2, *uParam2);
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

int Function_265(bool bParam0) //Position: 0x12837 / 75831
{
	if (Function_271(bParam0) || Function_270(bParam0))
	{
		return 0;
	}
	if (Function_269(bParam0))
	{
		return 1;
	}
	if (Function_268(bParam0))
	{
		return 2;
	}
	if (Function_267(bParam0))
	{
		return 3;
	}
	if (Function_266(bParam0))
	{
		return 4;
	}
	return 4294967295;
}

bool Function_266(bool bParam0) //Position: 0x12882 / 75906
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if (bVar0 <= 1204 && bVar0 >= 1227)
	{
		return 1;
	}
	return 0;
}

bool Function_267(bool bParam0) //Position: 0x128A2 / 75938
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if (bVar0 <= 1222 && bVar0 >= 1227)
	{
		return 1;
	}
	return 0;
}

bool Function_268(bool bParam0) //Position: 0x128C2 / 75970
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if (bVar0 <= 1214 && bVar0 >= 1221)
	{
		return 1;
	}
	return 0;
}

bool Function_269(bool bParam0) //Position: 0x128E2 / 76002
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if (bVar0 <= 1204 && bVar0 >= 1213)
	{
		return 1;
	}
	return 0;
}

int Function_270(bool bParam0) //Position: 0x12902 / 76034
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if (bVar0 <= 1228 && bVar0 >= 1239)
	{
		return 1;
	}
	return 0;
}

int Function_271(bool bParam0) //Position: 0x12922 / 76066
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if (bVar0 <= 3 && bVar0 >= 836)
	{
		if (DECOR_CHECK_EXIST(bParam0, "Zombie"))
		{
			return DECOR_GET_BOOL(bParam0, "Zombie");
		}
	}
	return 0;
}

int Function_272(bool bParam0) //Position: 0x1295E / 76126
{
	if (DECOR_CHECK_EXIST(bParam0, "nAM_Weapon"))
	{
		return DECOR_GET_INT(bParam0, "nAM_Weapon");
	}
	return 4294967295;
}

bool Function_273(var uParam0, int iParam1, bool bParam2) //Position: 0x1298B / 76171
{
	if (*iParam1 == 4294967295)
	{
		return 0;
	}
	if (IS_OBJECTSET_VALID(*uParam0))
	{
		if (GET_OBJECTSET_SIZE(*uParam0) >= *iParam1)
		{
			*bParam2 = GET_INDEXED_OBJECT_IN_OBJECTSET(*iParam1, *uParam0);
			*iParam1++;
			return 1;
		}
	}
	*iParam1 = 4294967295;
	return 0;
}

int Function_274(int iParam0, var uParam1, bool bParam2) //Position: 0x129CA / 76234
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	if (!IS_OBJECTSET_VALID(*uParam1))
	{
		LOG_ERROR("AM_COLLECT_PLAYER_EVENTS_OF_TYPE_ON_ACTORENUM: invalid objectset passed as EventCollection");
		return 4294967295;
	}
	if (!IS_ACTOR_VALID(Function_29()))
	{
		return 4294967295;
	}
	bVar0 = Function_261();
	bVar1 = false;
	bVar2 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar2))
	{
		if (!IS_OBJECT_IN_OBJECTSET(bVar2, *uParam1))
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
								ADD_OBJECT_TO_OBJECTSET(bVar2, *uParam1);
							}
							bVar1++;
						}
					}
				}
			}
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	return bVar1;
}

struct<24> Function_275() //Position: 0x12B0D / 76557
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Local_38 + 16), 6);
	stradd(&cVar0, "_", 24);
	stradd(&cVar0, INT_TO_STRING(StackVal), 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_276() //Position: 0x12B37 / 76599
{
	if (!Function_1())
	{
		if (!Function_131(0, 0, 1, 1))
		{
			Function_93(1);
			Function_92(1, 8);
		}
		else
		{
			Function_91();
		}
	}
	else
	{
		Function_277(0);
	}
	return;
}

void Function_277(bool bParam0) //Position: 0x12B66 / 76646
{
	NET_LOG(true, "SaveLoad", "Multiplayer Save Triggered, will be picked up by Multiplayer_update_thread soon enough", false, false, false, false);
	Function_280(2);
	if (bParam0)
	{
		Function_280(1);
	}
	else
	{
		Function_278(1);
	}
	Function_95();
	return;
}

void Function_278(int iParam0) //Position: 0x12BEF / 76783
{
	Function_279(&Global_79338, iParam0);
	return;
}

void Function_279(int iParam0, int iParam1) //Position: 0x12BFE / 76798
{
	Function_94(iParam0, iParam1);
	return;
}

void Function_280(int iParam0) //Position: 0x12C0B / 76811
{
	Function_217(&Global_79338, iParam0);
	return;
}

void Function_281() //Position: 0x12C1A / 76826
{
	iLocal_61 = Function_222(10, 1, 5);
	Global_13172[iLocal_6111].f_20 = StackVal;
	Global_13172[iLocal_6111].f_28 = Local_38.f_12;
	Global_13172[iLocal_6111].f_24 = Local_38.f_28;
	Global_13172[iLocal_6111].f_16 = Local_38.f_32;
	return;
}

void Function_282() //Position: 0x12C5D / 76893
{
	struct<6> Var0;
	
	CLEAR_JOURNAL_ENTRY(Local_38.f_24);
	memcpy(&Var0, StackVal, *(&Local_38 + 16), 6);
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_283() };
	APPEND_JOURNAL_ENTRY_DETAIL(Local_38.f_24, &Var0, 0, 2, false);
	PREPEND_JOURNAL_ENTRY(Local_38.f_24, true);
	SET_JOURNAL_ENTRY_PROGRESS(Local_38.f_24, 1.0f, false, 0);
	return;
}

struct<24> Function_283() //Position: 0x12C9A / 76954
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Local_38 + 16), 6);
	stradd(&cVar0, "_", 24);
	stradd(&cVar0, INT_TO_STRING(StackVal), 24);
	stradd(&cVar0, "_des", 24);
	stradd(&cVar0, "z", 24);
	if (StackVal == 4)
	{
		if (Function_82(4, 0))
		{
			stradd(&cVar0, "2", 24);
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_284(int iParam0, bool bParam1, bool bParam2) //Position: 0x12CEF / 77039
{
	int iVar0;
	bool bVar1;
	
	if (Function_144(0) && (!Global_3380 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_297())
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
	iVar0 = Function_116(3);
	Function_295();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_293(3, bVar1);
		if (!bParam2)
		{
			if (!Function_155(Global_76848, 4))
			{
				Function_150(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_132(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_112(3));
	iVar0 = Function_116(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_286(4, Function_292(Global_12976.f_156), 1);
				Function_285(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_286(4, Function_292(Global_12976.f_156), 1);
				Function_285(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_286(4, Function_292(Global_12976.f_156), 1);
				Function_285(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_286(4, Function_292(Global_12976.f_156), 1);
				Function_285(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_286(4, Function_292(Global_12976.f_156), 1);
				Function_285(Global_12976.f_152, Global_12976.f_156);
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

void Function_285(int iParam0, int iParam1) //Position: 0x12EBE / 77502
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.2f);
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
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.3f);
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
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.4f);
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
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.5f);
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
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.8f);
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

int Function_286(int iParam0, char* cParam1, bool bParam2) //Position: 0x1311C / 78108
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
	Function_290(iParam0, cParam1, 0, 1);
	iVar1 = Function_287();
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

int Function_287() //Position: 0x132A1 / 78497
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
	Function_288();
	return 0;
}

void Function_288() //Position: 0x13340 / 78656
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
		Function_289(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_289(int iParam0) //Position: 0x133EF / 78831
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

int Function_290(int iParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0x1344D / 78925
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
		Function_291(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, uParam3);
	}
	return 1;
}

void Function_291(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x1379F / 79775
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

var Function_292(int iParam0) //Position: 0x13822 / 79906
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

int Function_293(int iParam0, bool bParam1) //Position: 0x138B1 / 80049
{
	bool bVar0;
	int iVar1;
	
	Function_132(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_294(iParam0, 4294967295);
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
	iVar1 = Function_287();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

var Function_294(int iParam0, int iParam1) //Position: 0x13A4E / 80462
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

void Function_295() //Position: 0x13A8F / 80527
{
	Function_296(3, 0.0f);
	Function_201(3, 10000.0f);
	return;
}

int Function_296(int iParam0, int iParam1) //Position: 0x13AA5 / 80549
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

bool Function_297() //Position: 0x13AE5 / 80613
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_298(int iParam0, bool bParam1) //Position: 0x13B10 / 80656
{
	char* cVar0[16];
	
	switch (iParam0)
	{
		case 0x0000000A:
			strcpy(&cVar0, "AM_MP_rank10", 16);
			break;
		
		default:
			strcpy(&cVar0, "AM_Rank", 16);
			stradd(&cVar0, INT_TO_STRING((iParam0 - 1)), 16);
			break;
	}
	if (!Global_49306)
	{
		SET_STAT_MESSAGE(STRING_TO_HASH(bParam1), UI_GET_STRING(&cVar0), 3.0f, "", 0, 4294967295, 0, 0, 0, 0, false, false, 0);
	}
	return;
}

void Function_299(var uParam0) //Position: 0x13B76 / 80758
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (IS_OBJECTSET_VALID(*uParam0))
	{
		bVar0 = false;
		if (GET_OBJECTSET_SIZE(*uParam0) >= bVar0)
		{
			bVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, *uParam0);
			while (IS_OBJECT_VALID(bVar1))
			{
				if (DECOR_CHECK_EXIST(bVar1, "AM_NO_PURGE"))
				{
					bVar2 = DECOR_GET_INT(bVar1, "AM_NO_PURGE");
					bVar2 = (bVar2 - 1);
					DECOR_SET_INT(bVar1, "AM_NO_PURGE", bVar2);
				}
				bVar0++;
				if (GET_OBJECTSET_SIZE(*uParam0) >= bVar0)
				{
					bVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, *uParam0);
				}
				else
				{
					bVar1 = "";
				}
			}
		}
		DISBAND_OBJECTSET(*uParam0);
	}
	else
	{
		LOG_ERROR("AM_PURGE_COLLECTION: attempting to disband an invalid objectset");
	}
	return;
}

bool Function_300() //Position: 0x13C5F / 80991
{
	if (Function_301() != (Global_63000 - 1) && UI_IS_MESSAGE_QUEUE_EMPTY(4))
	{
		return 1;
	}
	return 0;
}

int Function_301() //Position: 0x13C7C / 81020
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
	Function_302();
	return 0;
}

void Function_302() //Position: 0x13CAA / 81066
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
		Function_303(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_303(int iParam0) //Position: 0x13D21 / 81185
{
	Global_63000[iParam08] = 4294967295;
	Global_63000[iParam08].f_4 = 4294967295;
	strcpy(&Global_63000[iParam08] + 8, "NHIL", 16);
	strcpy(&Global_63000[iParam08] + 24, "NHIL", 8);
	return;
}

void Function_304() //Position: 0x13D5D / 81245
{
	struct<6> Var0;
	
	CLEAR_JOURNAL_ENTRY(Local_38.f_24);
	PREPEND_JOURNAL_ENTRY(Local_38.f_24, false);
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_275() };
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_283() };
	PREPEND_JOURNAL_ENTRY_DETAIL(Local_38.f_24, &Var0, 0, 2, false);
	return;
}

var Function_305(char* cParam0) //Position: 0x13D8C / 81292
{
	char* cVar0;
	bool bVar1;
	char* cVar2[16];
	
	bVar1 = Function_258();
	if (IS_LAYOUTREF_VALID(bVar1))
	{
		strcpy(&cVar2, "nAM_OBJSET", 16);
		stradd(&cVar2, cParam0, 16);
		cVar0 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bVar1, &cVar2));
	}
	return cVar0;
}

void Function_306() //Position: 0x13DC3 / 81347
{
	var uVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	float fVar5;
	var uVar6;
	
	if (StackVal == 3)
	{
		return;
	}
	uVar0 = Function_305("TM_SP");
	switch (StackVal)
	{
		case 0x00000000:
			switch (StackVal)
			{
				case 0x00000000:
					if (Function_81(5))
					{
						Function_317();
						SET_JOURNAL_ENTRY_PROGRESS(Local_16.f_24, -1.0f, true, 0);
						Local_16.f_32 = 1;
					}
					Local_16.f_4 = 1;
					break;
				
				case 0x00000001:
					if (ACTOR_HAS_WEAPON(Global_34573, 29))
					{
						Local_16.f_4 = 2;
					}
					else if (Function_81(5))
					{
						if (Local_16.f_32 != 1)
						{
							Local_16.f_32 = 1;
							Function_317();
							SET_JOURNAL_ENTRY_PROGRESS(Local_16.f_24, -1.0f, true, 0);
						}
					}
					break;
				
				case 0x00000002:
					if (((Global_3375 && !Global_63096) && !Global_59353) && Function_300())
					{
						Function_299(&uVar0);
						Function_298(1, "AM_TM");
						Function_284(20, 1, 0);
						Function_315();
						Local_16.f_8 = 1;
						Local_16.f_4 = 0;
						Local_16.f_12 = 0.0f;
						Local_16.f_32 = 0;
						Function_314();
						Function_276();
						memcpy(&uVar6, StackVal, StackVal, StackVal, StackVal, StackVal, Function_313(), 4);
						Local_16.f_24 = CREATE_JOURNAL_ENTRY(&uVar6, 3, false, "challenge_01");
					}
					break;
			}
			break;
		
		case 0x00000001:
			switch (StackVal)
			{
				case 0x00000000:
					Function_317();
					SET_JOURNAL_ENTRY_PROGRESS(Local_16.f_24, Local_16.f_12, true, 0);
					Local_16.f_4 = 1;
					break;
				
				case 0x00000001:
					bVar3 = Function_274(2, &uVar0, 1);
					if (bVar3 >= 0)
					{
						iVar2 = 0;
						while (Function_273(&uVar0, &iVar2, &bVar4))
						{
							if (IS_OBJECT_VALID(bVar4))
							{
								if (Function_272(bVar4) == 29)
								{
									bVar1 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar4)));
									if (IS_ACTOR_VALID(bVar1))
									{
										if (IS_ACTOR_HUMAN(bVar1))
										{
											if (IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
											{
												Function_125(&Local_16 + 32, 2);
											}
											else if (DECOR_CHECK_EXIST(bVar4, "nAM_Linked"))
											{
												Function_125(&Local_16 + 32, 4);
											}
											else
											{
												Function_125(&Local_16 + 32, 1);
											}
										}
									}
								}
							}
						}
						Function_299(&uVar0);
						if ((Function_9(Local_16.f_32, 2) && Function_9(Local_16.f_32, 4)) && Function_9(Local_16.f_32, 1))
						{
							Local_16.f_4 = 2;
							Local_16.f_32 = 0;
						}
						else
						{
							bVar3 = false;
							fVar5 = Local_16.f_12;
							if (Function_9(Local_16.f_32, 2))
							{
								bVar3++;
							}
							if (Function_9(Local_16.f_32, 4))
							{
								bVar3++;
							}
							if (Function_9(Local_16.f_32, 1))
							{
								bVar3++;
							}
							Local_16.f_12 = (IntToFloat(bVar3) / 3.0f);
							if (Local_16.f_12 == fVar5)
							{
								SET_JOURNAL_ENTRY_PROGRESS(Local_16.f_24, Local_16.f_12, true, 0);
								Function_314();
							}
						}
					}
					break;
				
				case 0x00000002:
					if (Function_300())
					{
						Function_298(2, "AM_TM");
						Function_299(&uVar0);
						Function_284(20, 1, 0);
						Function_315();
						Local_16.f_8 = 2;
						Local_16.f_4 = 0;
						Local_16.f_12 = 0.0f;
						Function_314();
						if (_GET_AMMO_AMOUNT(Global_34573, 12, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 12))
						{
							_ADD_AMMO_OF_TYPE(Global_34573, 12, 5.0f, 1, 1);
						}
						Function_276();
						memcpy(&uVar6, StackVal, StackVal, StackVal, StackVal, StackVal, Function_313(), 4);
						Local_16.f_24 = CREATE_JOURNAL_ENTRY(&uVar6, 3, false, "challenge_01");
					}
					break;
			}
			break;
		
		case 0x00000002:
			switch (StackVal)
			{
				case 0x00000000:
					Function_317();
					SET_JOURNAL_ENTRY_PROGRESS(Local_16.f_24, -1.0f, true, 0);
					Local_16.f_4 = 1;
					break;
				
				case 0x00000001:
					bVar3 = Function_264(2, "FLYING_ANIMAL", &uVar0, 1, 0);
					if (bVar3 >= 0)
					{
						iVar2 = 0;
						while (Function_273(&uVar0, &iVar2, &bVar4))
						{
							if (IS_OBJECT_VALID(bVar4))
							{
								if (Function_272(bVar4) == 29)
								{
									if (Function_312(bVar4))
									{
										Local_16.f_4 = 2;
										break;
									}
								}
							}
						}
					}
					Function_299(&uVar0);
					break;
				
				case 0x00000002:
					if (Function_300())
					{
						Function_298(3, "AM_TM");
						Function_299(&uVar0);
						Function_284(20, 1, 0);
						Function_315();
						Local_16.f_8 = 3;
						Local_16.f_4 = 0;
						Local_16.f_12 = 0.0f;
						Function_314();
						if (_GET_AMMO_AMOUNT(Global_34573, 12, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 12))
						{
							_ADD_AMMO_OF_TYPE(Global_34573, 12, 5.0f, 1, 1);
						}
						Function_276();
						memcpy(&uVar6, StackVal, StackVal, StackVal, StackVal, StackVal, Function_313(), 4);
						Local_16.f_24 = CREATE_JOURNAL_ENTRY(&uVar6, 3, false, "challenge_01");
					}
					break;
			}
			break;
		
		case 0x00000003:
			switch (StackVal)
			{
				case 0x00000000:
					Function_317();
					(*&Local_16 + 36)[0] = Function_311((50 + 29));
					(*&Local_16 + 36)[1] = GET_CURRENT_GAME_TIME();
					SET_JOURNAL_ENTRY_PROGRESS(Local_16.f_24, 0.0f, true, 0);
					Local_16.f_4 = 1;
					break;
				
				case 0x00000001:
					bVar3 = Function_274(6, &uVar0, 1);
					if (bVar3 >= 0)
					{
						iVar2 = 0;
						while (Function_273(&uVar0, &iVar2, &bVar4))
						{
							if (IS_OBJECT_VALID(bVar4))
							{
								if (Function_272(bVar4) == 29)
								{
									if (GET_EVENT_TIME(GET_EVENT_FROM_OBJECT(bVar4)) < (*&Local_16 + 36)[1])
									{
										(*&Local_16 + 36)[1] = GET_EVENT_TIME(GET_EVENT_FROM_OBJECT(bVar4));
									}
								}
							}
						}
					}
					Function_299(&uVar0);
					if (Function_311((50 + 29)) > (*&Local_16 + 36)[0])
					{
						if ((GET_CURRENT_GAME_TIME() - (*&Local_16 + 36)[1]) < 1.5f)
						{
							Local_16.f_28 = 0;
							(*&Local_16 + 36)[0] = Function_311((50 + 29));
						}
					}
					else
					{
						(*&Local_16 + 36)[0] = Function_311((50 + 29));
					}
					bVar3 = Function_274(2, &uVar0, 1);
					if (bVar3 >= 0)
					{
						iVar2 = 0;
						while (Function_273(&uVar0, &iVar2, &bVar4))
						{
							if (IS_OBJECT_VALID(bVar4))
							{
								if (Function_272(bVar4) == 29)
								{
									bVar1 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar4)));
									if (IS_ACTOR_VALID(bVar1))
									{
										if (IS_ACTOR_HUMAN(bVar1))
										{
											Local_16.f_28++;
										}
									}
								}
							}
						}
					}
					Function_299(&uVar0);
					if (Local_16.f_28 > 5)
					{
						Local_16.f_4 = 2;
					}
					else
					{
						fVar5 = Local_16.f_12;
						Local_16.f_12 = (IntToFloat(Local_16.f_28) / 5.0f);
						if (Local_16.f_12 == fVar5)
						{
							SET_JOURNAL_ENTRY_PROGRESS(Local_16.f_24, Local_16.f_12, true, 0);
						}
					}
					break;
				
				case 0x00000002:
					if (Function_300())
					{
						Function_298(4, "AM_TM");
						Function_299(&uVar0);
						Function_284(20, 1, 0);
						Function_315();
						Local_16.f_8 = 4;
						Local_16.f_4 = 0;
						Local_16.f_12 = 0.0f;
						Function_314();
						if (_GET_AMMO_AMOUNT(Global_34573, 12, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 12))
						{
							_ADD_AMMO_OF_TYPE(Global_34573, 12, 5.0f, 1, 1);
						}
						Function_276();
						memcpy(&uVar6, StackVal, StackVal, StackVal, StackVal, StackVal, Function_313(), 4);
						Local_16.f_24 = CREATE_JOURNAL_ENTRY(&uVar6, 3, false, "challenge_01");
					}
					break;
			}
			break;
		
		case 0x00000004:
			switch (StackVal)
			{
				case 0x00000000:
					Function_317();
					Local_16.f_32 = 0;
					Local_16.f_28 = 0;
					SET_JOURNAL_ENTRY_PROGRESS(Local_16.f_24, 0.0f, true, 0);
					if (UI_ISACTIVE("ZMeter"))
					{
						(*&Local_16 + 36)[0] = GET_CURRENT_GAME_TIME();
						Function_310();
						SET_JOURNAL_ENTRY_PROGRESS(Local_16.f_24, 0.5f, true, 0);
					}
					Local_16.f_4 = 1;
					break;
				
				case 0x00000001:
					if (Function_9(Local_16.f_32, 2))
					{
						if (Function_9(Local_16.f_32, 1))
						{
							bVar3 = Function_274(2, &uVar0, 1);
							if (bVar3 >= 0)
							{
								iVar2 = 0;
								while (Function_273(&uVar0, &iVar2, &bVar4))
								{
									if (IS_OBJECT_VALID(bVar4))
									{
										if (Function_272(bVar4) == 29 && Function_272(bVar4) == 4294967295)
										{
											if (GET_EVENT_TIME(GET_EVENT_FROM_OBJECT(bVar4)) < (*&Local_16 + 36)[0])
											{
												SET_JOURNAL_ENTRY_PROGRESS(Local_16.f_24, 0.0f, true, 0);
												Function_94(&Local_16 + 32, 1);
											}
										}
									}
								}
							}
							Function_299(&uVar0);
						}
						if (!Function_308(Local_16.f_28) || Global_29006 == Local_16.f_28)
						{
							if (Function_9(Local_16.f_32, 1))
							{
								if (Function_307())
								{
									Local_16.f_4 = 2;
								}
							}
							Local_16.f_32 = 0;
							Local_16.f_28 = 0;
							SET_JOURNAL_ENTRY_PROGRESS(Local_16.f_24, 0.0f, true, 0);
						}
					}
					else if (UI_ISACTIVE("ZMeter"))
					{
						(*&Local_16 + 36)[0] = GET_CURRENT_GAME_TIME();
						Function_310();
						SET_JOURNAL_ENTRY_PROGRESS(Local_16.f_24, 0.5f, true, 0);
					}
					break;
				
				case 0x00000002:
					if ((Global_3375 && !Global_63096) && Function_300())
					{
						if (!HAS_ACHIEVEMENT_BEEN_PASSED(66))
						{
							AWARD_ACHIEVEMENT(66);
						}
						Function_298(10, "AM_TM");
						Function_299(&uVar0);
						Function_284(20, 1, 0);
						Function_315();
						Local_16.f_8 = 10;
						Local_16.f_12 = 0.0f;
						Function_314();
						Function_276();
						Local_16.f_8 = 5;
					}
					break;
			}
			break;
		
		case 0x00000005:
			if (!UI_ISACTIVE("SaveGame_DoNotInterruptMe"))
			{
				Function_61("AM_TM_RW1_helpz", 0x41200000, 1, 0, 2, 1, 0);
				Local_16.f_8 = 10;
				Local_16.f_4 = 3;
				Function_315();
			}
			break;
	}
	return;
}

bool Function_307() //Position: 0x145C4 / 83396
{
	return !Function_308(Local_16.f_28);
	return 0;
}

bool Function_308(int iParam0) //Position: 0x145D4 / 83412
{
	bool bVar0;
	
	if (StackVal || StackVal != 2 != 1)
	{
		return 0;
	}
	if ((iParam0 != Global_30707[2] || iParam0 != Global_30707[1]) || iParam0 != Global_30679[1])
	{
		return 0;
	}
	bVar0 = Global_29008[iParam0];
	return (((Function_9(bVar0, 0x1000000) || Function_9(bVar0, 0x2000000)) || Function_9(bVar0, 0x4000000)) || Function_309(iParam0));
}

var Function_309(bool bParam0) //Position: 0x14647 / 83527
{
	var uVar0;
	bool bVar1;
	
	uVar0 = Global_29008[bParam0];
	bVar1 = uVar0 & 268435456 != false;
	return bVar1;
}

void Function_310() //Position: 0x14664 / 83556
{
	Local_16.f_32 = 0;
	Function_125(&Local_16 + 32, 1);
	Function_125(&Local_16 + 32, 2);
	Local_16.f_28 = Global_29006;
	return;
}

float Function_311(int iParam0) //Position: 0x14686 / 83590
{
	int iVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0.0f;
	}
	if (Global_35278[iParam020].f_64 != 0.0f)
	{
		fVar2 = 100.0f;
	}
	else
	{
		fVar2 = Global_35278[iParam020].f_64;
	}
	fVar3 = Global_35278[iParam020].f_60;
	bVar1 = Function_112(iParam0);
	if (Function_111(iParam0) != 19 || Function_111(iParam0) != 17)
	{
		if (bVar1 > fVar3)
		{
			bVar1 = fVar3;
		}
		if (bVar1 < fVar2)
		{
			bVar1 = fVar3;
		}
		fVar4 = ((bVar1 - fVar3) / (fVar2 - fVar3));
		iVar0 = (fVar4 * 100.0f);
		return iVar0;
	}
	if (bVar1 <= fVar2)
	{
		return 100.0f;
	}
	iVar0 = ((bVar1 * 100.0f) / fVar2);
	if (iVar0 <= 0.0f)
	{
		return iVar0;
	}
	return 0.0f;
}

bool Function_312(bool bParam0) //Position: 0x14767 / 83815
{
	return DECOR_CHECK_EXIST(bParam0, "nAM_Flying");
}

struct<24> Function_313() //Position: 0x1477E / 83838
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Local_16 + 16), 6);
	stradd(&cVar0, "_", 24);
	stradd(&cVar0, INT_TO_STRING(StackVal), 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_314() //Position: 0x147A8 / 83880
{
	iLocal_60 = Function_222(9, 1, 5);
	Global_13172[iLocal_6011].f_20 = StackVal;
	Global_13172[iLocal_6011].f_28 = Local_16.f_12;
	Global_13172[iLocal_6011].f_24 = Local_16.f_28;
	Global_13172[iLocal_6011].f_16 = Local_16.f_32;
	return;
}

void Function_315() //Position: 0x147EB / 83947
{
	struct<6> Var0;
	
	CLEAR_JOURNAL_ENTRY(Local_16.f_24);
	memcpy(&Var0, StackVal, *(&Local_16 + 16), 6);
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_316() };
	APPEND_JOURNAL_ENTRY_DETAIL(Local_16.f_24, &Var0, 0, 2, false);
	PREPEND_JOURNAL_ENTRY(Local_16.f_24, true);
	SET_JOURNAL_ENTRY_PROGRESS(Local_16.f_24, 1.0f, false, 0);
	return;
}

struct<24> Function_316() //Position: 0x14828 / 84008
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Local_16 + 16), 6);
	stradd(&cVar0, "_", 24);
	stradd(&cVar0, INT_TO_STRING(StackVal), 24);
	stradd(&cVar0, "_des", 24);
	stradd(&cVar0, "z", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_317() //Position: 0x14865 / 84069
{
	struct<6> Var0;
	
	CLEAR_JOURNAL_ENTRY(Local_16.f_24);
	PREPEND_JOURNAL_ENTRY(Local_16.f_24, false);
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_313() };
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_316() };
	PREPEND_JOURNAL_ENTRY_DETAIL(Local_16.f_24, &Var0, 0, 2, false);
	return;
}

bool Function_318(var uParam0, int iParam1) //Position: 0x14894 / 84116
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
	uVar0 = Function_352((*uParam0)[iParam122]);
	switch ((*uParam0)[iParam122])
	{
		case 0x00000000:
			Function_346(uParam0[022] + 4, uParam0[022] + 8, uParam0[022] + 12, &uVar0);
			break;
		
		case 0x00000001:
			Function_341(uParam0[122] + 4, uParam0[122] + 8, uParam0[122] + 12, &uVar0);
			break;
		
		case 0x00000002:
			Function_334(uParam0[222] + 4, uParam0[222] + 8, uParam0[222] + 12, &uVar0);
			break;
		
		case 0x00000003:
			Function_319(uParam0[322] + 4, uParam0[322] + 8, uParam0[322] + 12, &uVar0);
			break;
	}
	return 1;
}

void Function_319(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x1495B / 84315
{
	switch (*uParam1)
	{
		case 0x00000000:
			switch (*uParam0)
			{
				case 0x00000000:
					*uParam3 = *uParam3;
					*uParam2 = *uParam2;
					if (GET_ITEM_COUNT(SS_GET_STRING(1, 11), Global_34573) >= 0)
					{
						Function_333(3, 1);
						*uParam0 = 2;
					}
					break;
				
				case 0x00000002:
					if (Global_3375 && !Global_63096)
					{
						Function_61("AM_TH_HLP_1", 0x41200000, 1, 0, 2, 1, 0);
						Function_61("AM_TH_HLP_2", 0x41200000, 1, 0, 2, 1, 0);
						Function_332(3, 1);
						Function_284(20, 1, 0);
						Function_331(3, 4);
						*uParam1 = 1;
						*uParam0 = 0;
						*uParam2 = 0.0f;
						Function_276();
					}
					break;
			}
			break;
		
		case 0x00000001:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(3);
					Function_326(3, 0);
					PREPEND_JOURNAL_ENTRY_DETAIL(Function_325(3), "AM_INTRO_HLP", 0, 2, true);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(3), -1.0f, true, 0);
					*uParam3 = *uParam3;
					*uParam2 = *uParam2;
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					if (Function_112(357) < 0.0f)
					{
						Function_333(3, 2);
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = 0.0f;
					}
					break;
				
				case 0x00000002:
					Function_332(3, 1);
					Function_284(20, 1, 0);
					Function_331(3, 4);
					*uParam1 = 2;
					*uParam0 = 0;
					*uParam2 = 0.0f;
					Function_276();
					break;
			}
			break;
		
		case 0x00000002:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(3);
					Function_326(3, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(3), -1.0f, true, 0);
					*uParam3 = *uParam3;
					*uParam2 = *uParam2;
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					if (Function_112(357) < 1.0f)
					{
						Function_333(3, 3);
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = 0.0f;
					}
					break;
				
				case 0x00000002:
					Function_332(3, 1);
					Function_284(20, 1, 0);
					Function_331(3, 4);
					*uParam1 = 3;
					*uParam0 = 0;
					*uParam2 = 0.0f;
					Function_276();
					break;
			}
			break;
		
		case 0x00000003:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(3);
					Function_326(3, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(3), -1.0f, true, 0);
					*uParam3 = *uParam3;
					*uParam2 = *uParam2;
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					if (Function_112(357) < 2.0f)
					{
						Function_333(3, 4);
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = 0.0f;
					}
					break;
				
				case 0x00000002:
					Function_332(3, 1);
					Function_284(20, 1, 0);
					Function_331(3, 4);
					*uParam1 = 4;
					*uParam0 = 0;
					*uParam2 = 0.0f;
					Function_276();
					break;
			}
			break;
		
		case 0x00000004:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(3);
					Function_326(3, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(3), -1.0f, true, 0);
					*uParam3 = *uParam3;
					*uParam2 = *uParam2;
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					if (Function_112(357) < 3.0f)
					{
						Function_333(3, 5);
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
						Function_332(3, 1);
						Function_284(20, 1, 0);
						Function_61("AM_TH_RW1_help", 0x41200000, 1, 0, 2, 1, 0);
						if (!Function_87(11))
						{
							Function_178(11, 0, 1, 1, 0);
						}
						Function_331(3, 4);
						*uParam1 = 5;
						*uParam0 = 0;
						*uParam2 = 0.0f;
						Function_276();
					}
					break;
			}
			break;
		
		case 0x00000005:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(3);
					Function_326(3, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(3), -1.0f, true, 0);
					*uParam3 = *uParam3;
					*uParam2 = *uParam2;
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					if (Function_112(357) < 4.0f)
					{
						Function_333(3, 6);
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = 0.0f;
					}
					break;
				
				case 0x00000002:
					Function_332(3, 1);
					Function_284(20, 1, 0);
					Function_331(3, 4);
					*uParam1 = 6;
					*uParam0 = 0;
					*uParam2 = 0.0f;
					Function_276();
					break;
			}
			break;
		
		case 0x00000006:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(3);
					Function_326(3, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(3), -1.0f, true, 0);
					*uParam3 = *uParam3;
					*uParam2 = *uParam2;
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					if (Function_112(357) < 5.0f)
					{
						Function_333(3, 7);
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = 0.0f;
					}
					break;
				
				case 0x00000002:
					Function_332(3, 1);
					Function_284(20, 1, 0);
					Function_331(3, 4);
					*uParam1 = 7;
					*uParam0 = 0;
					*uParam2 = 0.0f;
					Function_276();
					break;
			}
			break;
		
		case 0x00000007:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(3);
					Function_326(3, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(3), -1.0f, true, 0);
					*uParam3 = *uParam3;
					*uParam2 = *uParam2;
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					if (Function_112(357) < 6.0f)
					{
						Function_333(3, 8);
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = 0.0f;
					}
					break;
				
				case 0x00000002:
					Function_332(3, 1);
					Function_284(20, 1, 0);
					Function_331(3, 4);
					*uParam1 = 8;
					*uParam0 = 0;
					*uParam2 = 0.0f;
					Function_276();
					break;
			}
			break;
		
		case 0x00000008:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(3);
					Function_326(3, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(3), -1.0f, true, 0);
					*uParam3 = *uParam3;
					*uParam2 = *uParam2;
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					if (Function_112(357) < 7.0f)
					{
						Function_333(3, 9);
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = 0.0f;
					}
					break;
				
				case 0x00000002:
					Function_332(3, 1);
					Function_284(20, 1, 0);
					Function_331(3, 4);
					*uParam1 = 9;
					*uParam0 = 0;
					*uParam2 = 0.0f;
					Function_276();
					break;
			}
			break;
		
		case 0x00000009:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(3);
					Function_326(3, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(3), -1.0f, true, 0);
					*uParam3 = *uParam3;
					*uParam2 = *uParam2;
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					if (Function_112(357) < 8.0f)
					{
						Function_333(3, 10);
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
						Function_332(3, 1);
						Function_61("AM_TH_RW2_help", 0x41200000, 1, 0, 2, 1, 0);
						Function_61("AM_TH_10_des", 0x41200000, 1, 0, 2, 1, 0);
						Function_284(50, 1, 0);
						if (!HAS_ACHIEVEMENT_BEEN_PASSED(25))
						{
							AWARD_ACHIEVEMENT(25);
						}
						*uParam1 = 10;
						*uParam0 = 2;
						*uParam2 = 1.0f;
						SET_JOURNAL_ENTRY_PROGRESS(Function_325(3), 1.0f, true, 0);
						Function_321(3);
						Function_156(68, 1, 0);
						Function_320(11, 0);
						Function_139();
						Function_276();
					}
					break;
			}
			break;
	}
}

int Function_320(bool bParam0, bool bParam1) //Position: 0x14FC5 / 85957
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (bParam1)
	{
		if (GET_ITEM_COUNT(Function_140(bParam0), Function_29()) >= 0)
		{
			DELETE_ITEM(Function_140(bParam0), Function_29(), 0);
			return 1;
		}
	}
	DELETE_ITEM(Function_140(bParam0), Function_29(), 1);
	return 1;
}

void Function_321(bool bParam0) //Position: 0x1500C / 86028
{
	struct<6> Var0;
	struct<6> Var6;
	
	CLEAR_JOURNAL_ENTRY(Function_325(bParam0));
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_324(bParam0) };
	if (Function_1() || Global_34165.f_44)
	{
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_323(bParam0) };
	}
	else
	{
		memcpy(&Var6, StackVal, *(&Global_49310[bParam022] + 16), 6);
	}
	UI_SET_STRING(&Var0, UI_GET_STRING(&Var6));
	Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_322(bParam0) };
	APPEND_JOURNAL_ENTRY_DETAIL(Function_325(bParam0), &Var6, 0, 2, false);
	PREPEND_JOURNAL_ENTRY(Function_325(bParam0), true);
	SET_JOURNAL_ENTRY_PROGRESS(Function_325(bParam0), 1.0f, false, 0);
	return;
}

struct<24> Function_322(int iParam0) //Position: 0x1507F / 86143
{
	char* cVar0[24];
	
	cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_323(iParam0) };
	if (Global_34165.f_44 || Function_1())
	{
		stradd(&cVar0, "_mp_des", 24);
		if (!IS_STRING_VALID(UI_GET_STRING(&cVar0)))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_323(iParam0) };
			stradd(&cVar0, "_des", 24);
		}
	}
	else
	{
		stradd(&cVar0, "_des", 24);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_323(bool bParam0) //Position: 0x150DC / 86236
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

struct<24> Function_324(int iParam0) //Position: 0x1514E / 86350
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

var Function_325(bool bParam0) //Position: 0x151BA / 86458
{
	if (Function_1() || Global_34165.f_44)
	{
		return Global_49399[bParam022].f_24;
	}
	return Global_49310[bParam022].f_24;
}

void Function_326(bool bParam0, bool bParam1) //Position: 0x151E2 / 86498
{
	struct<6> Var0;
	struct<6> Var6;
	
	CLEAR_JOURNAL_ENTRY(Function_325(bParam0));
	if ((bParam1 && Function_328(bParam0, 4)) || !bParam1)
	{
		PREPEND_JOURNAL_ENTRY(Function_325(bParam0), false);
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_324(bParam0) };
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_323(bParam0) };
		UI_SET_STRING(&Var0, UI_GET_STRING(&Var6));
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_322(bParam0) };
		PREPEND_JOURNAL_ENTRY_DETAIL(Function_325(bParam0), &Var6, 0, 2, Function_328(bParam0, 4));
		if (bParam0 == 3)
		{
			PREPEND_JOURNAL_ENTRY_DETAIL(Function_325(bParam0), "nAM_MAPHLP", 0, 2, true);
		}
		if (!bParam1)
		{
			Function_327(bParam0, 4);
		}
	}
	return;
}

void Function_327(int iParam0, int iParam1) //Position: 0x15269 / 86633
{
	if (Function_1() || Global_34165.f_44)
	{
		Function_125(&Global_49399[iParam022] + 32, iParam1);
	}
	else
	{
		Function_125(&Global_49310[iParam022] + 32, iParam1);
	}
	return;
}

bool Function_328(int iParam0, bool bParam1) //Position: 0x1529A / 86682
{
	if (Function_1() || Global_34165.f_44)
	{
		return Function_9(Global_49399[iParam022].f_32, bParam1);
	}
	return Function_9(Global_49310[iParam022].f_32, bParam1);
}

void Function_329(bool bParam0) //Position: 0x152CC / 86732
{
	if (Function_1() || Global_34165.f_44)
	{
		Function_330(bParam0, 0, Global_49399[bParam022].f_28);
	}
	else
	{
		Function_330(bParam0, 0, Global_49310[bParam022].f_28);
	}
	return;
}

int Function_330(bool bParam0, bool bParam1, bool bParam2) //Position: 0x15301 / 86785
{
	char* cVar0[16];
	bool bVar4;
	
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_INTSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar4 = Function_258();
	if (IS_LAYOUTREF_VALID(bVar4))
	{
		return DECOR_SET_INT(bVar4, &cVar0, bParam2);
	}
	LOG_ERROR("AM_STORE_INT: failed to store int value in slot");
	return 0;
}

void Function_331(bool bParam0, int iParam1) //Position: 0x15375 / 86901
{
	if (Global_34165.f_44)
	{
		Function_94(&Global_49399[bParam022] + 32, iParam1);
	}
	else
	{
		Function_94(&Global_49310[bParam022] + 32, iParam1);
	}
	return;
}

void Function_332(bool bParam0, bool bParam1) //Position: 0x153A2 / 86946
{
	bool bVar0;
	bool bVar1;
	char* cVar2[16];
	
	bVar0 = false;
	bVar1 = Function_258();
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

int Function_333(int iParam0, int iParam1) //Position: 0x15562 / 87394
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
	iVar0 = Function_301();
	Global_63000[iVar08] = iParam0;
	Global_63000[iVar08].f_4 = iParam1;
	Global_63082 = Function_1();
	return 1;
}

void Function_334(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x15611 / 87569
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
					Function_329(2);
					Function_340(&Global_62998);
					Function_339(&Global_62998, 1023);
					if (!Function_328(2, 1))
					{
						Function_338(2, 1, Function_112(272), 1);
						Function_327(2, 1);
					}
					if (Function_328(2, 4))
					{
						PREPEND_JOURNAL_ENTRY_DETAIL(Function_325(2), "AM_INTRO_HLP", 0, 2, true);
					}
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar4 = Function_337(2);
					bVar0 = (Function_112(272) - Function_336(2, 1, 1));
					if (bVar0 <= 6.0f)
					{
						Function_333(2, 1);
						*uParam0 = 2;
					}
					else
					{
						if (bVar0 < 0.0f)
						{
							if ((!Function_328(2, 2) && Global_3375) && !Global_63096)
							{
								Function_327(2, 2);
								Function_61("AM_SU_HLP_1", 0x41200000, 1, 0, 2, 1, 0);
								Function_61("AM_SU_HLP_2", 0x41200000, 1, 0, 2, 1, 0);
							}
							if (!Function_328(2, 4))
							{
								Function_326(2, 0);
								PREPEND_JOURNAL_ENTRY_DETAIL(Function_325(2), "AM_INTRO_HLP", 0, 2, false);
							}
						}
						*uParam2 = (bVar0 / 6.0f);
						if (*uParam2 == fVar4)
						{
							Function_335(2, *uParam2, 1, ROUND(bVar0), 4294967295, 4294967295, 0);
						}
					}
					break;
				
				case 0x00000002:
					if (Global_3375 && !Global_63096)
					{
						Function_61("AM_SU_HLP_3", 0x41200000, 1, 0, 2, 1, 0);
						Function_61("AM_SU_HLP_2", 0x41200000, 1, 0, 2, 1, 0);
						Function_299(uParam3);
						Function_332(2, 1);
						Function_331(2, 1);
						Function_284(20, 1, 0);
						Function_331(2, 4);
						*uParam1 = 1;
						*uParam0 = 0;
						*uParam2 = 0.0f;
						Function_276();
					}
					break;
			}
			break;
		
		case 0x00000001:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(2);
					Function_326(2, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(2), 0.0f, true, 0);
					if (!Function_328(2, 1))
					{
						Function_338(2, 1, Function_112(264), 1);
						Function_327(2, 1);
					}
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar4 = Function_337(2);
					bVar0 = (Function_112(264) - Function_336(2, 1, 1));
					if (bVar0 <= 6.0f)
					{
						Function_333(2, 2);
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = (bVar0 / 6.0f);
						if (*uParam2 == fVar4)
						{
							Function_335(2, *uParam2, 1, ROUND(bVar0), 4294967295, 4294967295, 0);
						}
					}
					break;
				
				case 0x00000002:
					Function_299(uParam3);
					Function_332(2, 1);
					Function_331(2, 1);
					Function_284(20, 1, 0);
					*uParam1 = 2;
					Function_331(2, 4);
					*uParam0 = 0;
					*uParam2 = 0.0f;
					Function_276();
					break;
			}
			break;
		
		case 0x00000002:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(2);
					Function_326(2, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(2), 0.0f, true, 0);
					if (!Function_328(2, 1))
					{
						Function_338(2, 1, Function_112(271), 1);
						Function_327(2, 1);
					}
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar4 = Function_337(2);
					bVar0 = (Function_112(271) - Function_336(2, 1, 1));
					if (bVar0 <= 4.0f)
					{
						Function_333(2, 3);
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = (bVar0 / 4.0f);
						if (*uParam2 == fVar4)
						{
							Function_335(2, *uParam2, 1, ROUND(bVar0), 4294967295, 4294967295, 0);
						}
					}
					break;
				
				case 0x00000002:
					Function_299(uParam3);
					Function_332(2, 1);
					Function_331(2, 1);
					Function_284(20, 1, 0);
					*uParam1 = 3;
					Function_331(2, 4);
					*uParam0 = 0;
					*uParam2 = 0.0f;
					Function_276();
					break;
			}
			break;
		
		case 0x00000003:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(2);
					Function_326(2, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(2), 0.0f, true, 0);
					if (!Function_328(2, 1))
					{
						Function_338(2, 1, Function_112(263), 1);
						Function_327(2, 1);
					}
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar4 = Function_337(2);
					bVar0 = (Function_112(263) - Function_336(2, 1, 1));
					if (bVar0 <= 8.0f)
					{
						Function_333(2, 4);
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = (bVar0 / 8.0f);
						if (*uParam2 == fVar4)
						{
							Function_335(2, *uParam2, 1, ROUND(bVar0), 4294967295, 4294967295, 0);
						}
					}
					break;
				
				case 0x00000002:
					Function_299(uParam3);
					Function_332(2, 1);
					Function_331(2, 1);
					Function_284(20, 1, 0);
					*uParam1 = 4;
					Function_331(2, 4);
					*uParam0 = 0;
					*uParam2 = 0.0f;
					Function_276();
					break;
			}
			break;
		
		case 0x00000004:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(2);
					Function_326(2, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(2), 0.0f, true, 0);
					if (!Function_328(2, 1))
					{
						Function_338(2, 1, Function_112(268), 1);
						Function_327(2, 1);
					}
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar4 = Function_337(2);
					bVar0 = (Function_112(268) - Function_336(2, 1, 1));
					if (bVar0 <= 7.0f)
					{
						Function_333(2, 5);
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = (bVar0 / 7.0f);
						if (*uParam2 == fVar4)
						{
							Function_335(2, *uParam2, 1, ROUND(bVar0), 4294967295, 4294967295, 0);
						}
					}
					break;
				
				case 0x00000002:
					if (Global_3375 && !Global_63096)
					{
						Function_299(uParam3);
						Function_332(2, 1);
						Function_331(2, 1);
						Function_284(50, 1, 0);
						Function_61("AM_SU_RW1_help", 0x41200000, 1, 0, 2, 1, 0);
						Function_61("AM_SU_RW1_help1", 0x41200000, 1, 0, 2, 1, 0);
						if (!Function_87(11))
						{
							Function_178(11, 0, 1, 1, 0);
						}
						*uParam1 = 5;
						Function_331(2, 4);
						*uParam0 = 0;
						*uParam2 = 0.0f;
						Function_276();
					}
					break;
			}
			break;
		
		case 0x00000005:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(2);
					Function_326(2, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(2), 0.0f, true, 0);
					if (!Function_328(2, 1))
					{
						Function_338(2, 1, Function_112(265), 1);
						Function_327(2, 1);
					}
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar4 = Function_337(2);
					bVar0 = (Function_112(265) - Function_336(2, 1, 1));
					if (bVar0 <= 8.0f)
					{
						Function_333(2, 6);
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = (bVar0 / 8.0f);
						if (*uParam2 == fVar4)
						{
							Function_335(2, *uParam2, 1, ROUND(bVar0), 4294967295, 4294967295, 0);
						}
					}
					break;
				
				case 0x00000002:
					Function_299(uParam3);
					Function_332(2, 1);
					Function_331(2, 1);
					Function_284(20, 1, 0);
					*uParam1 = 6;
					Function_331(2, 4);
					*uParam0 = 0;
					*uParam2 = 0.0f;
					Function_276();
					break;
			}
			break;
		
		case 0x00000006:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(2);
					Function_326(2, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(2), 0.0f, true, 0);
					if (!Function_328(2, 1))
					{
						Function_338(2, 1, Function_112(269), 1);
						Function_327(2, 1);
					}
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar4 = Function_337(2);
					bVar0 = (Function_112(269) - Function_336(2, 1, 1));
					if (bVar0 <= 10.0f)
					{
						Function_333(2, 7);
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = (bVar0 / 10.0f);
						if (*uParam2 == fVar4)
						{
							Function_335(2, *uParam2, 1, ROUND(bVar0), 4294967295, 4294967295, 0);
						}
					}
					break;
				
				case 0x00000002:
					Function_299(uParam3);
					Function_332(2, 1);
					Function_331(2, 1);
					Function_284(20, 1, 0);
					*uParam1 = 7;
					Function_331(2, 4);
					*uParam0 = 0;
					*uParam2 = 0.0f;
					Function_276();
					break;
			}
			break;
		
		case 0x00000007:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(2);
					Function_326(2, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(2), 0.0f, true, 0);
					if (!Function_328(2, 1))
					{
						Function_338(2, 1, Function_112(266), 1);
						Function_327(2, 1);
					}
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar4 = Function_337(2);
					bVar0 = (Function_112(266) - Function_336(2, 1, 1));
					if (bVar0 <= 12.0f)
					{
						Function_333(2, 8);
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = (bVar0 / 12.0f);
						if (*uParam2 == fVar4)
						{
							Function_335(2, *uParam2, 1, ROUND(bVar0), 4294967295, 4294967295, 0);
						}
					}
					break;
				
				case 0x00000002:
					Function_299(uParam3);
					Function_332(2, 1);
					Function_331(2, 1);
					Function_284(20, 1, 0);
					*uParam1 = 8;
					Function_331(2, 4);
					*uParam0 = 0;
					*uParam2 = 0.0f;
					Function_276();
					break;
			}
			break;
		
		case 0x00000008:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(2);
					Function_326(2, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(2), 0.0f, true, 0);
					if (!Function_328(2, 1))
					{
						Function_338(2, 1, Function_112(267), 1);
						Function_327(2, 1);
					}
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar4 = Function_337(2);
					bVar0 = (Function_112(267) - Function_336(2, 1, 1));
					if (bVar0 <= 15.0f)
					{
						Function_333(2, 9);
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = (bVar0 / 15.0f);
						if (*uParam2 == fVar4)
						{
							Function_335(2, *uParam2, 1, ROUND(bVar0), 4294967295, 4294967295, 0);
						}
					}
					break;
				
				case 0x00000002:
					Function_299(uParam3);
					Function_332(2, 1);
					Function_331(2, 1);
					Function_284(20, 1, 0);
					*uParam1 = 9;
					Function_331(2, 4);
					*uParam0 = 0;
					*uParam2 = 0.0f;
					Function_276();
					break;
			}
			break;
		
		case 0x00000009:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(2);
					Function_326(2, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(2), 0.0f, true, 0);
					if (!Function_328(2, 1))
					{
						Function_338(2, 1, Function_112(263), 1);
						Function_338(2, 2, Function_112(264), 1);
						Function_338(2, 3, Function_112(265), 1);
						Function_338(2, 4, Function_112(266), 1);
						Function_338(2, 5, Function_112(267), 1);
						Function_338(2, 6, Function_112(268), 1);
						Function_338(2, 7, Function_112(269), 1);
						Function_338(2, 8, Function_112(270), 1);
						Function_338(2, 9, Function_112(271), 1);
						Function_338(2, 10, Function_112(272), 1);
						Function_327(2, 1);
					}
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar4 = Function_337(2);
					iVar5 = 263;
					bVar6 = true;
					bVar0 = 0.0f;
					fVar1 = 0.0f;
					while (iVar5 <= 273)
					{
						bVar2 = Function_112(iVar5);
						fVar3 = Function_336(2, bVar6, 1);
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
						Function_333(2, 10);
					}
					else
					{
						*uParam2 = (fVar1 / 28.0f);
						if (*uParam2 == fVar4)
						{
							SET_JOURNAL_ENTRY_PROGRESS(Function_325(2), *uParam2, true, 0);
							iVar5 = 270;
							bVar6 = 8;
							bVar2 = Function_112(iVar5);
							fVar3 = Function_336(2, bVar6, 1);
							bVar0 = (bVar2 - fVar3);
							if (bVar0 < 10.0f)
							{
								bVar0 = 10.0f;
							}
							strcpy(&cVar19, "AM_VS", 16);
							memcpy(&cVar7, StackVal, StackVal, StackVal, StackVal, StackVal, Function_323(2), 4);
							stradd(&cVar7, "_info", 16);
							stradd(&cVar7, INT_TO_STRING(bVar6), 16);
							strcpy(&cVar11, "AM_num", 16);
							stradd(&cVar11, INT_TO_STRING(bVar6), 16);
							strcpy(&cVar15, "AM_herbname", 16);
							stradd(&cVar15, INT_TO_STRING(bVar6), 16);
							UI_SET_STRING(&cVar11, INT_TO_STRING(ROUND(bVar0)));
							UI_SET_STRING(&cVar15, UI_GET_STRING(&cVar19));
							PREPEND_JOURNAL_ENTRY_DETAIL(Function_325(2), &cVar7, 2, 2, true);
							iVar5 = 263;
							bVar6 = true;
							while (iVar5 <= 273)
							{
								bVar2 = Function_112(iVar5);
								fVar3 = Function_336(2, bVar6, 1);
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
								memcpy(&cVar7, StackVal, StackVal, StackVal, StackVal, StackVal, Function_323(2), 4);
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
									PREPEND_JOURNAL_ENTRY_DETAIL(Function_325(2), &cVar7, 2, 2, true);
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
						Function_299(uParam3);
						Function_332(2, 1);
						Function_331(2, 1);
						Function_61("AM_SU_RW2_help", 0x41200000, 1, 0, 2, 1, 0);
						Function_284(50, 1, 0);
						if (!HAS_ACHIEVEMENT_BEEN_PASSED(25))
						{
							AWARD_ACHIEVEMENT(25);
						}
						*uParam1 = 10;
						*uParam0 = 2;
						*uParam2 = 1.0f;
						SET_JOURNAL_ENTRY_PROGRESS(Function_325(2), 1.0f, true, 0);
						Function_321(2);
						Function_276();
					}
					break;
			}
			break;
	}
}

void Function_335(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6) //Position: 0x16368 / 90984
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	char* cVar20[24];
	char* cVar26[24];
	char* cVar32[24];
	char* cVar38[24];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_325(iParam0), fParam1, true, 0);
	if (bParam2)
	{
		if (((iParam0 != 12 || iParam0 != 13) || iParam0 != 10) || iParam0 != 11)
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_323(iParam0) };
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
			APPEND_JOURNAL_ENTRY_DETAIL(Function_325(iParam0), &cVar0, 2, 2, false);
			Function_174(Function_325(iParam0), 0);
		}
		else
		{
			cVar20 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_323(iParam0) };
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
			APPEND_JOURNAL_ENTRY_DETAIL(Function_325(iParam0), &cVar20, 2, 2, true);
			Function_174(Function_325(iParam0), 0);
		}
	}
}

float Function_336(bool bParam0, bool bParam1, bool bParam2) //Position: 0x164F3 / 91379
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
	bVar4 = Function_258();
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

float Function_337(int iParam0) //Position: 0x165B5 / 91573
{
	if (Function_1() || Global_34165.f_44)
	{
		return Global_49399[iParam022].f_12;
	}
	return Global_49310[iParam022].f_12;
}

int Function_338(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x165DD / 91613
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
	bVar4 = Function_258();
	if (IS_LAYOUTREF_VALID(bVar4))
	{
		return DECOR_SET_FLOAT(bVar4, &cVar0, bParam2);
	}
	LOG_ERROR("AM_STORE_FLOAT: failed to store float value in slot");
	return 0;
}

void Function_339(var uParam0, int iParam1) //Position: 0x16694 / 91796
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_340(int iParam0) //Position: 0x166A3 / 91811
{
	*iParam0 = 0;
	return;
}

void Function_341(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x166AD / 91821
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
					Function_329(1);
					if (!Function_328(1, 1))
					{
						Function_338(1, 1, Function_112(286), 1);
						Function_327(1, 1);
					}
					if (Function_328(1, 4))
					{
						PREPEND_JOURNAL_ENTRY_DETAIL(Function_325(1), "AM_INTRO_HLP", 0, 2, true);
					}
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar5 = Function_337(1);
					if ((Function_112(286) - Function_336(1, 1, 1)) <= 5.0f)
					{
						Function_333(1, 1);
						*uParam0 = 2;
					}
					else
					{
						bVar1 = ROUND((Function_112(286) - Function_336(1, 1, 1)));
						if (bVar1 >= 0)
						{
							if ((!Function_328(1, 2) && Global_3375) && !Global_63096)
							{
								Function_327(1, 2);
								Function_61("AM_MH_HLP_1", 0x41200000, 1, 0, 2, 1, 0);
								Function_61("AM_MH_HLP_2", 0x41200000, 1, 0, 2, 1, 0);
							}
							if (!Function_328(1, 4))
							{
								Function_326(1, 0);
								PREPEND_JOURNAL_ENTRY_DETAIL(Function_325(1), "AM_INTRO_HLP", 0, 2, false);
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
							Function_335(1, *uParam2, 1, bVar1, 4294967295, 4294967295, 12);
						}
					}
					break;
				
				case 0x00000002:
					if (Global_3375 && !Global_63096)
					{
						Function_61("AM_MH_HLP_3", 0x41200000, 1, 0, 2, 1, 0);
						Function_61("AM_MH_HLP_2", 0x41200000, 1, 0, 2, 1, 0);
						Function_299(uParam3);
						Function_332(1, 1);
						Function_331(1, 1);
						Function_284(20, 1, 0);
						Function_331(1, 4);
						*uParam1 = 1;
						*uParam0 = 0;
						*uParam2 = 0.0f;
						Function_276();
					}
					break;
			}
			break;
		
		case 0x00000001:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(1);
					Function_326(1, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(1), 0.0f, true, 0);
					if (!Function_328(1, 1))
					{
						Function_338(1, 1, Function_112(288), 1);
						Function_327(1, 1);
					}
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar5 = Function_337(1);
					if ((Function_112(288) - Function_336(1, 1, 1)) <= 5.0f)
					{
						Function_333(1, 2);
						*uParam0 = 2;
					}
					else
					{
						bVar1 = ROUND((Function_112(288) - Function_336(1, 1, 1)));
						if (bVar1 >= 5)
						{
							bVar1 = 5;
						}
						*uParam2 = TO_FLOAT(bVar1);
						*uParam2 = (*uParam2 / 5.0f);
						if (*uParam2 == fVar5)
						{
							Function_335(1, *uParam2, 1, bVar1, 4294967295, 4294967295, 12);
						}
					}
					break;
				
				case 0x00000002:
					Function_299(uParam3);
					Function_332(1, 1);
					Function_331(1, 1);
					Function_284(20, 1, 0);
					Function_331(1, 4);
					*uParam1 = 2;
					*uParam0 = 0;
					*uParam2 = 0.0f;
					Function_276();
					break;
			}
			break;
		
		case 0x00000002:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(1);
					Function_326(1, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(1), 0.0f, true, 0);
					if (!Function_328(1, 1))
					{
						Function_338(1, 1, Function_112(311), 1);
						Function_327(1, 1);
					}
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar5 = Function_337(1);
					Function_264(2, "WOLF", uParam3, 1, 0);
					bVar1 = Function_344(uParam3, 1);
					if (bVar1 >= 0)
					{
						iVar0 = 0;
						while (Function_273(uParam3, &iVar0, &bVar4))
						{
							if (IS_OBJECT_VALID(bVar4))
							{
								if (Function_272(bVar4) != 22)
								{
									Function_343(uParam3, &bVar4);
									iVar0 = (iVar0 - 1);
								}
							}
						}
					}
					bVar1 = Function_344(uParam3, 1);
					if ((Function_112(311) - Function_336(1, 1, 1)) <= 5.0f && IntToFloat(bVar1) <= 5.0f)
					{
						Function_333(1, 3);
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = TO_FLOAT(bVar1);
						if (*uParam2 < 5.0f)
						{
							*uParam2 = 5.0f;
						}
						bVar2 = ROUND((Function_112(311) - Function_336(1, 1, 1)));
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
							Function_335(1, *uParam2, 1, bVar1, bVar2, 4294967295, 12);
						}
					}
					break;
				
				case 0x00000002:
					Function_299(uParam3);
					Function_332(1, 1);
					Function_331(1, 1);
					Function_284(20, 1, 0);
					Function_331(1, 4);
					*uParam1 = 3;
					*uParam0 = 0;
					*uParam2 = 0.0f;
					Function_276();
					break;
			}
			break;
		
		case 0x00000003:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(1);
					Function_326(1, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(1), 0.0f, true, 0);
					if (!Function_328(1, 1))
					{
						Function_338(1, 1, Function_112(279), 1);
						Function_338(1, 2, Function_112(274), 1);
						Function_327(1, 1);
					}
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar5 = Function_337(1);
					if ((Function_112(279) - Function_336(1, 1, 1)) <= 5.0f && (Function_112(274) - Function_336(1, 2, 1)) <= 3.0f)
					{
						Function_333(1, 4);
						*uParam0 = 2;
					}
					else
					{
						bVar1 = ROUND((Function_112(279) - Function_336(1, 1, 1)));
						if (bVar1 >= 5)
						{
							bVar1 = 5;
						}
						*uParam2 = TO_FLOAT(bVar1);
						bVar2 = ROUND((Function_112(274) - Function_336(1, 2, 1)));
						if (bVar2 >= 3)
						{
							bVar2 = 3;
						}
						*uParam2 = (*uParam2 + TO_FLOAT(bVar2));
						*uParam2 = (*uParam2 / 8.0f);
						if (*uParam2 == fVar5)
						{
							Function_335(1, *uParam2, 1, bVar1, bVar2, 4294967295, 12);
						}
					}
					break;
				
				case 0x00000002:
					Function_299(uParam3);
					Function_332(1, 1);
					Function_331(1, 1);
					Function_284(20, 1, 0);
					Function_331(1, 4);
					*uParam1 = 4;
					*uParam0 = 0;
					*uParam2 = 0.0f;
					Function_276();
					break;
			}
			break;
		
		case 0x00000004:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(1);
					Function_326(1, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(1), 0.0f, true, 0);
					if (!Function_328(1, 1))
					{
						Function_338(1, 1, Function_112(284), 1);
						Function_327(1, 1);
					}
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar5 = Function_337(1);
					Function_264(2, "COUGAR", uParam3, 1, 0);
					bVar1 = Function_344(uParam3, 1);
					if (bVar1 >= 0)
					{
						iVar0 = 0;
						while (Function_273(uParam3, &iVar0, &bVar4))
						{
							if (IS_OBJECT_VALID(bVar4))
							{
								if (Function_272(bVar4) != 22)
								{
									Function_343(uParam3, &bVar4);
									iVar0 = (iVar0 - 1);
								}
							}
						}
					}
					bVar1 = Function_344(uParam3, 1);
					if ((Function_112(284) - Function_336(1, 1, 1)) <= 2.0f && IntToFloat(bVar1) <= 2.0f)
					{
						Function_333(1, 5);
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = TO_FLOAT(bVar1);
						bVar2 = ROUND((Function_112(284) - Function_336(1, 1, 1)));
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
							Function_335(1, *uParam2, 1, bVar1, bVar2, 4294967295, 12);
						}
					}
					break;
				
				case 0x00000002:
					if (Global_3375 && !Global_63096)
					{
						Function_299(uParam3);
						Function_332(1, 1);
						Function_331(1, 1);
						Function_284(50, 1, 0);
						Function_61("AM_MH_RW1_help", 0x41200000, 1, 0, 2, 1, 0);
						if (!Function_87(11))
						{
							Function_178(11, 0, 1, 1, 0);
						}
						Function_331(1, 4);
						*uParam1 = 5;
						*uParam0 = 0;
						*uParam2 = 0.0f;
						Function_276();
					}
					break;
			}
			break;
		
		case 0x00000005:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(1);
					Function_326(1, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(1), 0.0f, true, 0);
					if (!Function_328(1, 1))
					{
						Function_338(1, 1, Function_112(305), 1);
						Function_338(1, 2, Function_112(307), 1);
						Function_338(1, 3, Function_112(293), 1);
						Function_327(1, 1);
					}
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar5 = Function_337(1);
					if (((Function_112(305) - Function_336(1, 1, 1)) <= 5.0f && (Function_112(307) - Function_336(1, 2, 1)) <= 5.0f) && (Function_112(293) - Function_336(1, 3, 1)) <= 5.0f)
					{
						Function_333(1, 6);
						*uParam0 = 2;
					}
					else
					{
						bVar1 = ROUND((Function_112(305) - Function_336(1, 1, 1)));
						if (bVar1 >= 5)
						{
							bVar1 = 5;
						}
						*uParam2 = TO_FLOAT(bVar1);
						bVar2 = ROUND((Function_112(307) - Function_336(1, 2, 1)));
						if (bVar2 >= 5)
						{
							bVar2 = 5;
						}
						*uParam2 = (*uParam2 + TO_FLOAT(bVar2));
						bVar3 = ROUND((Function_112(293) - Function_336(1, 3, 1)));
						if (bVar3 >= 5)
						{
							bVar3 = 5;
						}
						*uParam2 = (*uParam2 + TO_FLOAT(bVar3));
						*uParam2 = (*uParam2 / 15.0f);
						if (*uParam2 == fVar5)
						{
							Function_335(1, *uParam2, 1, bVar1, bVar2, bVar3, 12);
						}
					}
					break;
				
				case 0x00000002:
					Function_299(uParam3);
					Function_332(1, 1);
					Function_331(1, 1);
					Function_284(20, 1, 0);
					Function_331(1, 4);
					*uParam1 = 6;
					*uParam0 = 0;
					*uParam2 = 0.0f;
					Function_276();
					break;
			}
			break;
		
		case 0x00000006:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(1);
					Function_326(1, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(1), 0.0f, true, 0);
					if (!Function_328(1, 1))
					{
						Function_338(1, 1, Function_112(292), 1);
						Function_338(1, 2, Function_112(278), 1);
						Function_327(1, 1);
					}
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar5 = Function_337(1);
					if ((Function_112(292) - Function_336(1, 1, 1)) <= 5.0f && (Function_112(278) - Function_336(1, 2, 1)) <= 5.0f)
					{
						Function_333(1, 7);
						*uParam0 = 2;
					}
					else
					{
						bVar1 = ROUND((Function_112(292) - Function_336(1, 1, 1)));
						if (bVar1 >= 5)
						{
							bVar1 = 5;
						}
						*uParam2 = TO_FLOAT(bVar1);
						bVar2 = ROUND((Function_112(278) - Function_336(1, 2, 1)));
						if (bVar2 >= 5)
						{
							bVar2 = 5;
						}
						*uParam2 = (*uParam2 + TO_FLOAT(bVar2));
						*uParam2 = (*uParam2 / 10.0f);
						if (*uParam2 == fVar5)
						{
							Function_335(1, *uParam2, 1, bVar1, bVar2, 4294967295, 12);
						}
					}
					break;
				
				case 0x00000002:
					Function_299(uParam3);
					Function_332(1, 1);
					Function_331(1, 1);
					Function_284(20, 1, 0);
					Function_331(1, 4);
					*uParam1 = 7;
					*uParam0 = 0;
					*uParam2 = 0.0f;
					Function_276();
					break;
			}
			break;
		
		case 0x00000007:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(1);
					Function_326(1, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(1), 0.0f, true, 0);
					if (!Function_328(1, 1))
					{
						Function_338(1, 1, Function_112(276), 1);
						Function_327(1, 1);
						Function_331(1, 8);
						Function_331(1, 16);
					}
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar5 = Function_337(1);
					Function_264(2, "BEAR", uParam3, 1, 0);
					bVar1 = Function_344(uParam3, 1);
					if (bVar1 >= 0)
					{
						iVar0 = 0;
						while (Function_273(uParam3, &iVar0, &bVar4))
						{
							if (IS_OBJECT_VALID(bVar4))
							{
								if (Function_272(bVar4) != 22)
								{
									Function_343(uParam3, &bVar4);
									iVar0 = (iVar0 - 1);
								}
							}
						}
					}
					bVar1 = Function_344(uParam3, 1);
					if ((Function_112(276) - Function_336(1, 1, 1)) <= 1.0f && IntToFloat(bVar1) <= 1.0f)
					{
						Function_333(1, 8);
						*uParam0 = 2;
					}
					else
					{
						if (bVar1 > 1)
						{
							bVar1 = true;
							if (!Function_328(1, 8))
							{
								Function_327(1, 8);
								APPEND_JOURNAL_ENTRY_DETAIL(Function_325(1), "AM_MH_7_info", 0, 2, true);
								bVar1 = true;
							}
						}
						*uParam2 = TO_FLOAT(bVar1);
						bVar1 = ROUND((Function_112(276) - Function_336(1, 1, 1)));
						if (bVar1 > 1)
						{
							bVar1 = true;
							if (!Function_328(1, 16))
							{
								Function_327(1, 16);
								APPEND_JOURNAL_ENTRY_DETAIL(Function_325(1), "AM_MH_7_info2", 0, 2, true);
								bVar1 = true;
							}
						}
						*uParam2 = (*uParam2 + TO_FLOAT(bVar1));
						*uParam2 = (*uParam2 / 2.0f);
						if (*uParam2 == fVar5)
						{
							Function_335(1, *uParam2, 0, 4294967295, 4294967295, 4294967295, 0);
						}
					}
					break;
				
				case 0x00000002:
					Function_299(uParam3);
					Function_332(1, 1);
					Function_331(1, 1);
					Function_331(1, 8);
					Function_331(1, 16);
					Function_284(20, 1, 0);
					Function_331(1, 4);
					*uParam1 = 8;
					*uParam0 = 0;
					*uParam2 = 0.0f;
					Function_276();
					break;
			}
			break;
		
		case 0x00000008:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(1);
					Function_326(1, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(1), 0.0f, true, 0);
					if (!Function_328(1, 1))
					{
						Function_338(1, 1, Function_112(300), 1);
						Function_327(1, 1);
					}
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar5 = Function_337(1);
					bVar1 = Function_342(2, 1094, uParam3, 1);
					bVar1 = (bVar1 + Function_342(91, 1094, uParam3, 1));
					bVar1 = Function_344(uParam3, 1);
					if ((Function_112(300) - Function_336(1, 1, 1)) <= 1.0f && IntToFloat(bVar1) <= 1.0f)
					{
						Function_333(1, 9);
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = TO_FLOAT(bVar1);
						bVar1 = ROUND((Function_112(300) - Function_336(1, 1, 1)));
						if (bVar1 >= 1)
						{
							bVar1 = true;
						}
						*uParam2 = (*uParam2 + TO_FLOAT(bVar1));
						*uParam2 = (*uParam2 / 2.0f);
						if (*uParam2 == fVar5)
						{
							Function_335(1, *uParam2, 0, 4294967295, 4294967295, 4294967295, 0);
						}
					}
					break;
				
				case 0x00000002:
					Function_299(uParam3);
					Function_332(1, 1);
					Function_331(1, 1);
					Function_284(20, 1, 0);
					Function_331(1, 4);
					*uParam1 = 9;
					*uParam0 = 0;
					*uParam2 = 0.0f;
					Function_276();
					break;
			}
			break;
		
		case 0x00000009:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(1);
					Function_326(1, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(1), 0.0f, true, 0);
					if (!Function_328(1, 1))
					{
						Function_338(1, 1, Function_112(301), 1);
						Function_338(1, 2, Function_112(298), 1);
						Function_338(1, 3, Function_112(299), 1);
						Function_331(1, 8);
						Function_331(1, 16);
						Function_331(1, 32);
						Function_327(1, 1);
					}
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar5 = Function_337(1);
					if (((Function_112(301) - Function_336(1, 1, 1)) <= 1.0f && (Function_112(298) - Function_336(1, 2, 1)) <= 1.0f) && (Function_112(299) - Function_336(1, 3, 1)) <= 1.0f)
					{
						*uParam0 = 2;
						Function_333(1, 10);
					}
					else
					{
						bVar1 = ROUND((Function_112(301) - Function_336(1, 1, 1)));
						if (bVar1 > 1)
						{
							if (!Function_328(1, 8))
							{
								Function_327(1, 8);
								APPEND_JOURNAL_ENTRY_DETAIL(Function_325(1), "AM_MH_9_info", 0, 2, true);
								bVar1 = true;
							}
						}
						*uParam2 = TO_FLOAT(bVar1);
						bVar1 = ROUND((Function_112(298) - Function_336(1, 2, 1)));
						if (bVar1 > 1)
						{
							if (!Function_328(1, 16))
							{
								Function_327(1, 16);
								APPEND_JOURNAL_ENTRY_DETAIL(Function_325(1), "AM_MH_9_info2", 0, 2, true);
								bVar1 = true;
							}
						}
						*uParam2 = (*uParam2 + TO_FLOAT(bVar1));
						bVar1 = ROUND((Function_112(299) - Function_336(1, 3, 1)));
						if (bVar1 > 1)
						{
							if (!Function_328(1, 32))
							{
								Function_327(1, 32);
								APPEND_JOURNAL_ENTRY_DETAIL(Function_325(1), "AM_MH_9_info3", 0, 2, true);
								bVar1 = true;
							}
						}
						*uParam2 = (*uParam2 + TO_FLOAT(bVar1));
						*uParam2 = (*uParam2 / 3.0f);
						SET_JOURNAL_ENTRY_PROGRESS(Function_325(1), *uParam2, true, 0);
					}
					break;
				
				case 0x00000002:
					Function_299(uParam3);
					Function_332(1, 1);
					Function_331(1, 1);
					Function_331(1, 8);
					Function_331(1, 16);
					Function_331(1, 32);
					Function_284(50, 1, 0);
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(25))
					{
						AWARD_ACHIEVEMENT(25);
					}
					*uParam1 = 10;
					*uParam0 = 2;
					*uParam2 = 1.0f;
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(1), 1.0f, true, 0);
					Function_321(1);
					Function_276();
					break;
			}
			break;
	}
}

bool Function_342(int iParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x17587 / 95623
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	if (!IS_OBJECTSET_VALID(*uParam2))
	{
		LOG_ERROR("AM_COLLECT_PLAYER_EVENTS_OF_TYPE_ON_ACTORENUM: invalid objectset passed as EventCollection");
		return 4294967295;
	}
	iVar0 = 0;
	bVar1 = Function_261();
	bVar2 = START_OBJECT_ITERATOR(bVar1);
	while (IS_OBJECT_VALID(bVar2))
	{
		if (!IS_OBJECT_IN_OBJECTSET(bVar2, *uParam2))
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
								ADD_OBJECT_TO_OBJECTSET(bVar2, *uParam2);
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

int Function_343(var uParam0, bool bParam1) //Position: 0x176D5 / 95957
{
	bool bVar0;
	
	if (IS_OBJECTSET_VALID(*uParam0))
	{
		if (IS_OBJECT_IN_OBJECTSET(*bParam1, *uParam0))
		{
			if (DECOR_CHECK_EXIST(*bParam1, "AM_NO_PURGE"))
			{
				bVar0 = DECOR_GET_INT(*bParam1, "AM_NO_PURGE");
				bVar0 = (bVar0 - 1);
				DECOR_SET_INT(*bParam1, "AM_NO_PURGE", bVar0);
			}
			REMOVE_OBJECT_FROM_OBJECTSET(*bParam1, *uParam0);
			return 1;
		}
	}
	return 0;
}

int Function_344(var uParam0, bool bParam1) //Position: 0x17746 / 96070
{
	if (Function_1() || Global_34165.f_44)
	{
		Global_49399[bParam122].f_28 = (GET_OBJECTSET_SIZE(*uParam0) + Function_345(bParam1, 0));
		return Global_49399[bParam122].f_28;
	}
	Global_49310[bParam122].f_28 = (GET_OBJECTSET_SIZE(*uParam0) + Function_345(bParam1, 0));
	return Global_49310[bParam122].f_28;
}

int Function_345(bool bParam0, bool bParam1) //Position: 0x1779A / 96154
{
	char* cVar0[16];
	bool bVar4;
	
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_INTSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar4 = Function_258();
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

void Function_346(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x17825 / 96293
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
					Function_329(0);
					if (Function_328(0, 4))
					{
						PREPEND_JOURNAL_ENTRY_DETAIL(Function_325(0), "AM_INTRO_HLP", 0, 2, true);
					}
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar8 = Function_337(0);
					bVar1 = Function_264(2, "FLYING_ANIMAL", uParam3, 1, 0);
					bVar1 = (bVar1 + Function_264(91, "FLYING_ANIMAL", uParam3, 1, 0));
					if (bVar1 >= 0)
					{
						iVar0 = 0;
						while (Function_273(uParam3, &iVar0, &bVar3))
						{
							if (IS_OBJECT_VALID(bVar3))
							{
								if (!Function_312(bVar3))
								{
									Function_343(uParam3, &bVar3);
									iVar0 = (iVar0 - 1);
								}
								else if (((Function_272(bVar3) != 24 || Function_272(bVar3) != 25) || Function_272(bVar3) != 23) || Function_272(bVar3) != 4294967295)
								{
									Function_343(uParam3, &bVar3);
									iVar0 = (iVar0 - 1);
								}
							}
						}
					}
					bVar1 = Function_344(uParam3, 0);
					if (bVar1 > 5)
					{
						Function_333(0, 1);
						*uParam0 = 2;
					}
					else if (bVar1 >= 4294967295)
					{
						if (bVar1 >= 0)
						{
							if ((!Function_328(0, 2) && Global_3375) && !Global_63096)
							{
								Function_327(0, 2);
								Function_351("AM_SS_HLP_1", 0, 0x40f00000, 1);
								Function_351("AM_SS_HLP_2", 0, 0x40f00000, 1);
							}
							if (!Function_328(0, 4))
							{
								Function_326(0, 0);
								PREPEND_JOURNAL_ENTRY_DETAIL(Function_325(0), "AM_INTRO_HLP", 0, 2, false);
							}
						}
						*uParam2 = TO_FLOAT(bVar1);
						*uParam2 = (*uParam2 / 5.0f);
						if (*uParam2 == fVar8)
						{
							Function_335(0, *uParam2, 1, bVar1, 4294967295, 4294967295, 10);
						}
					}
					break;
				
				case 0x00000002:
					if (Global_3375 && !Global_63096)
					{
						Function_61("AM_SS_HLP_3", 0x41200000, 1, 0, 2, 1, 0);
						Function_61("AM_SS_HLP_2", 0x41200000, 1, 0, 2, 1, 0);
						Function_299(uParam3);
						Function_332(0, 1);
						Function_284(20, 1, 0);
						Function_331(0, 4);
						*uParam1 = 1;
						*uParam0 = 0;
						*uParam2 = 0.0f;
						Function_276();
					}
					break;
			}
			break;
		
		case 0x00000001:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(0);
					Function_326(0, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(0), 0.0f, true, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar8 = Function_337(0);
					bVar1 = Function_264(2, "RABBIT", uParam3, 1, 0);
					bVar1 = (bVar1 + Function_264(91, "RABBIT", uParam3, 1, 0));
					if (bVar1 >= 0)
					{
						iVar0 = 0;
						while (Function_273(uParam3, &iVar0, &bVar3))
						{
							if (IS_OBJECT_VALID(bVar3))
							{
								if (((Function_272(bVar3) != 24 || Function_272(bVar3) != 25) || Function_272(bVar3) != 23) || Function_272(bVar3) != 4294967295)
								{
									Function_343(uParam3, &bVar3);
									iVar0 = (iVar0 - 1);
								}
							}
						}
					}
					bVar1 = Function_344(uParam3, 0);
					if (Global_49310[022].f_28 > 5)
					{
						Function_333(0, 2);
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = TO_FLOAT(bVar1);
						*uParam2 = (*uParam2 / 5.0f);
						if (*uParam2 == fVar8)
						{
							Function_335(0, *uParam2, 1, bVar1, 4294967295, 4294967295, 10);
						}
					}
					break;
				
				case 0x00000002:
					Function_299(uParam3);
					Function_284(20, 1, 0);
					Function_332(0, 1);
					Function_331(0, 4);
					*uParam1 = 2;
					*uParam0 = 0;
					*uParam2 = 0.0f;
					Function_276();
					break;
			}
			break;
		
		case 0x00000002:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(0);
					Function_326(0, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(0), 0.0f, true, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar8 = Function_337(0);
					bVar1 = Function_350(1, "COYOTE", uParam3, 0);
					if (bVar1 >= 0)
					{
						Function_299(uParam3);
						Function_332(0, 1);
						Function_329(0);
					}
					bVar1 = Function_264(2, "COYOTE", uParam3, 1, 0);
					bVar1 = (bVar1 + Function_264(91, "COYOTE", uParam3, 1, 0));
					if (bVar1 >= 0)
					{
						iVar0 = 0;
						while (Function_273(uParam3, &iVar0, &bVar3))
						{
							if (IS_OBJECT_VALID(bVar3))
							{
								if (((Function_272(bVar3) != 24 || Function_272(bVar3) != 25) || Function_272(bVar3) != 23) || Function_272(bVar3) != 4294967295)
								{
									Function_343(uParam3, &bVar3);
									iVar0 = (iVar0 - 1);
								}
							}
						}
					}
					bVar1 = Function_344(uParam3, 0);
					if (bVar1 > 5)
					{
						Function_333(0, 3);
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = TO_FLOAT(bVar1);
						*uParam2 = (*uParam2 / 5.0f);
						if (*uParam2 == fVar8)
						{
							Function_335(0, *uParam2, 1, bVar1, 4294967295, 4294967295, 10);
						}
					}
					break;
				
				case 0x00000002:
					Function_299(uParam3);
					Function_332(0, 1);
					Function_284(20, 1, 0);
					Function_331(0, 4);
					*uParam1 = 3;
					*uParam0 = 0;
					*uParam2 = 0.0f;
					Function_276();
					break;
			}
			break;
		
		case 0x00000003:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(0);
					Function_326(0, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(0), 0.0f, true, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar8 = Function_337(0);
					if (IS_ACTOR_ON_TRAIN(Global_34573, 1))
					{
						bVar1 = Function_264(2, "FLYING_ANIMAL", uParam3, 1, 0);
						bVar1 = (bVar1 + Function_264(91, "FLYING_ANIMAL", uParam3, 1, 0));
						if (bVar1 >= 0)
						{
							iVar0 = 0;
							while (Function_273(uParam3, &iVar0, &bVar3))
							{
								if (IS_OBJECT_VALID(bVar3))
								{
									if (!Function_312(bVar3))
									{
										Function_343(uParam3, &bVar3);
										iVar0 = (iVar0 - 1);
									}
									else if (((Function_272(bVar3) != 24 || Function_272(bVar3) != 25) || Function_272(bVar3) != 23) || Function_272(bVar3) != 4294967295)
									{
										Function_343(uParam3, &bVar3);
										iVar0 = (iVar0 - 1);
									}
								}
							}
						}
						bVar1 = Function_344(uParam3, 0);
						if (bVar1 > 5)
						{
							Function_333(0, 4);
							*uParam0 = 2;
						}
						else if (bVar1 >= 4294967295)
						{
							*uParam2 = TO_FLOAT(bVar1);
							*uParam2 = (*uParam2 / 5.0f);
							if (*uParam2 == fVar8)
							{
								Function_335(0, *uParam2, 1, bVar1, 4294967295, 4294967295, 10);
							}
						}
					}
					break;
				
				case 0x00000002:
					Function_299(uParam3);
					Function_332(0, 1);
					Function_284(20, 1, 0);
					Function_331(0, 4);
					*uParam1 = 4;
					*uParam0 = 0;
					*uParam2 = 0.0f;
					Function_276();
					break;
			}
			break;
		
		case 0x00000004:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(0);
					Function_326(0, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(0), -1.0f, true, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar8 = Function_337(0);
					bVar6 = Function_345(0, 4) != true;
					if (Function_349(73, 0, &bVar3) < 0 || bVar6)
					{
						if (!bVar6)
						{
							Function_338(0, 1, GET_EVENT_TIME(GET_EVENT_FROM_OBJECT(bVar3)), 0);
							Function_330(0, 2, 4294967295);
							Function_330(0, 3, 4294967295);
							Function_330(0, 4, 1);
						}
						bVar1 = Function_264(2, "ANIMAL", uParam3, 1, 0);
						bVar1 = (bVar1 + Function_264(91, "ANIMAL", uParam3, 1, 0));
						if (bVar1 >= 0)
						{
							iVar0 = 0;
							while (Function_273(uParam3, &iVar0, &bVar3))
							{
								if (IS_OBJECT_VALID(bVar3))
								{
									if (GET_EVENT_TIME(GET_EVENT_FROM_OBJECT(bVar3)) > Function_336(0, 1, 0))
									{
										Function_343(uParam3, &bVar3);
										iVar0 = (iVar0 - 1);
									}
									else if ((Function_272(bVar3) != 24 || Function_272(bVar3) != 25) || Function_272(bVar3) != 23)
									{
										Function_343(uParam3, &bVar3);
										iVar0 = (iVar0 - 1);
									}
									else
									{
										bVar5 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar3)));
										if (IS_ACTOR_VALID(bVar5))
										{
											if (ANIMAL_ACTOR_GET_DOMESTICATION(bVar5) == 0)
											{
												Function_343(uParam3, &bVar3);
												iVar0 = (iVar0 - 1);
											}
											else if (Function_345(0, 2) == 4294967295)
											{
												Function_330(0, 2, ANIMAL_ACTOR_GET_SPECIES(bVar5));
											}
											else if (Function_345(0, 3) == 4294967295)
											{
												Function_330(0, 3, ANIMAL_ACTOR_GET_SPECIES(bVar5));
											}
										}
										else
										{
											Function_343(uParam3, &bVar3);
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
							while (Function_273(uParam3, &iVar0, &bVar3))
							{
								bVar5 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar3)));
								if (ANIMAL_ACTOR_GET_SPECIES(bVar5) == Function_345(0, 2))
								{
									if (bVar6)
									{
										Function_343(uParam3, &bVar3);
										iVar0 = (iVar0 - 1);
									}
									else
									{
										bVar6 = true;
									}
								}
								else if (ANIMAL_ACTOR_GET_SPECIES(bVar5) == Function_345(0, 3))
								{
									if (bVar7)
									{
										Function_343(uParam3, &bVar3);
										iVar0 = (iVar0 - 1);
									}
									else
									{
										bVar7 = true;
									}
								}
							}
							bVar1 = Function_344(uParam3, 0);
							if (bVar1 > 2)
							{
								Function_333(0, 5);
								*uParam0 = 2;
							}
							else
							{
								Function_299(uParam3);
								Function_332(0, 1);
								Function_329(0);
							}
						}
					}
					break;
				
				case 0x00000002:
					if (Global_3375 && !Global_63096)
					{
						Function_299(uParam3);
						Function_332(0, 1);
						Function_284(50, 1, 0);
						Function_61("AM_SS_RW1_help", 0x41200000, 1, 0, 2, 1, 0);
						if (!Function_87(11))
						{
							Function_178(11, 0, 1, 1, 0);
						}
						Function_331(0, 4);
						*uParam1 = 5;
						*uParam0 = 0;
						*uParam2 = 0.0f;
						Function_276();
					}
					break;
			}
			break;
		
		case 0x00000005:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(0);
					Function_326(0, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(0), 0.0f, true, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar8 = Function_337(0);
					bVar1 = Function_274(9, uParam3, 1);
					if (bVar1 >= 0)
					{
						iVar0 = 0;
						while (Function_273(uParam3, &iVar0, &bVar3))
						{
							if (IS_OBJECT_VALID(bVar3))
							{
								bVar5 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar3)));
								if (IS_ACTOR_VALID(bVar5))
								{
									if (IS_ACTOR_DEAD(bVar5))
									{
										Function_343(uParam3, &bVar3);
										iVar0 = (iVar0 - 1);
									}
									else if (GET_LAST_HIT_TIME(bVar5) < (GET_CURRENT_GAME_TIME() - 0.5f))
									{
										Function_343(uParam3, &bVar3);
										iVar0 = (iVar0 - 1);
									}
									else if (DECOR_CHECK_EXIST(bVar3, "DroppedItem"))
									{
										bVar4 = DECOR_GET_OBJECT(bVar3, "DroppedItem");
										if (IS_OBJECT_VALID(bVar4))
										{
											if (GET_OBJECT_TYPE(bVar4) != 17)
											{
												Function_343(uParam3, &bVar3);
												iVar0 = (iVar0 - 1);
											}
										}
										else
										{
											Function_343(uParam3, &bVar3);
											iVar0 = (iVar0 - 1);
										}
									}
									else
									{
										Function_343(uParam3, &bVar3);
										iVar0 = (iVar0 - 1);
									}
								}
							}
						}
					}
					bVar1 = false;
					bVar1 = Function_344(uParam3, 0);
					if (bVar1 > 2)
					{
						Function_333(0, 6);
						*uParam0 = 2;
					}
					else if (bVar1 >= 4294967295)
					{
						*uParam2 = TO_FLOAT(bVar1);
						*uParam2 = (*uParam2 / 2.0f);
						if (*uParam2 == fVar8)
						{
							Function_335(0, *uParam2, 1, bVar1, 4294967295, 4294967295, 10);
						}
					}
					break;
				
				case 0x00000002:
					Function_299(uParam3);
					Function_332(0, 1);
					Function_284(20, 1, 0);
					Function_331(0, 4);
					*uParam1 = 6;
					*uParam0 = 0;
					*uParam2 = 0.0f;
					Function_276();
					break;
			}
			break;
		
		case 0x00000006:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(0);
					Function_326(0, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(0), 0.0f, true, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar8 = Function_337(0);
					if (Function_264(5, "BEAR", uParam3, 1, 1) >= 0)
					{
						while (Function_273(uParam3, &iVar0, &bVar3))
						{
							if (IS_OBJECT_VALID(bVar3))
							{
								if ((Function_272(bVar3) != 24 || Function_272(bVar3) != 25) || Function_272(bVar3) != 23)
								{
									Function_343(uParam3, &bVar3);
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
											Function_343(uParam3, &bVar3);
											iVar0 = (iVar0 - 1);
										}
										else if (DECOR_CHECK_EXIST(bVar5, "bearWounded"))
										{
											Function_343(uParam3, &bVar3);
											iVar0 = (iVar0 - 1);
										}
										else if (DECOR_CHECK_EXIST(bVar5, "ssrank6"))
										{
											if (DECOR_GET_OBJECT(bVar5, "ssrank6") != bVar3)
											{
												Function_343(uParam3, &bVar3);
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
					bVar1 = Function_344(uParam3, 0);
					if (bVar1 > 3)
					{
						Function_333(0, 7);
						*uParam0 = 2;
					}
					else if (bVar1 >= 4294967295)
					{
						*uParam2 = TO_FLOAT(bVar1);
						*uParam2 = (*uParam2 / 3.0f);
						if (*uParam2 == fVar8)
						{
							Function_335(0, *uParam2, 1, bVar1, 4294967295, 4294967295, 10);
						}
					}
					break;
				
				case 0x00000002:
					Function_299(uParam3);
					Function_332(0, 1);
					Function_284(20, 1, 0);
					Function_331(0, 4);
					*uParam1 = 7;
					*uParam0 = 0;
					*uParam2 = 0.0f;
					Function_276();
					break;
			}
			break;
		
		case 0x00000007:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(0);
					Function_326(0, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(0), 0.0f, true, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar8 = Function_337(0);
					bVar1 = Function_274(9, uParam3, 1);
					if (bVar1 >= 0)
					{
						iVar0 = 0;
						while (Function_273(uParam3, &iVar0, &bVar3))
						{
							if (IS_OBJECT_VALID(bVar3))
							{
								bVar5 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar3)));
								if (IS_ACTOR_VALID(bVar5))
								{
									if (IS_ACTOR_DEAD(bVar5))
									{
										Function_343(uParam3, &bVar3);
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
												Function_348(0, 1, 1.0f, 1);
											}
											else if (GET_OBJECT_TYPE(bVar4) == 34)
											{
												Function_348(0, 2, 1.0f, 1);
											}
											else
											{
												Function_343(uParam3, &bVar3);
												iVar0 = (iVar0 - 1);
											}
										}
										else
										{
											Function_343(uParam3, &bVar3);
											iVar0 = (iVar0 - 1);
										}
									}
									else
									{
										Function_343(uParam3, &bVar3);
										iVar0 = (iVar0 - 1);
									}
								}
							}
						}
					}
					bVar1 = ROUND(Function_336(0, 1, 1));
					bVar2 = ROUND(Function_336(0, 2, 1));
					if (bVar1 <= 2 && bVar2 <= 2)
					{
						Function_333(0, 8);
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
							Function_335(0, *uParam2, 1, bVar1, bVar2, 4294967295, 10);
						}
					}
					break;
				
				case 0x00000002:
					Function_299(uParam3);
					Function_332(0, 1);
					Function_284(20, 1, 0);
					Function_331(0, 4);
					*uParam1 = 8;
					*uParam0 = 0;
					*uParam2 = 0.0f;
					Function_276();
					break;
			}
			break;
		
		case 0x00000008:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_299(uParam3);
					Function_332(0, 1);
					Function_329(0);
					Function_330(0, 1, 4294967295 & 255);
					Function_326(0, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(0), 0.0f, true, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar8 = Function_337(0);
					if (Function_347())
					{
						Function_299(uParam3);
						if (fVar8 < 0.0f)
						{
							Function_335(0, 0.0f, 1, 0, 4294967295, 4294967295, 10);
						}
					}
					else
					{
						bVar1 = Function_264(2, "ANIMAL", uParam3, 1, 0);
						bVar1 = (bVar1 + Function_264(91, "ANIMAL", uParam3, 1, 0));
						if (bVar1 >= 0)
						{
							iVar0 = 0;
							while (Function_273(uParam3, &iVar0, &bVar3))
							{
								if (IS_OBJECT_VALID(bVar3))
								{
									if (((!Function_272(bVar3) != 24 && !Function_272(bVar3) != 25) && !Function_272(bVar3) != 23) && !Function_272(bVar3) != 22)
									{
										bVar5 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar3)));
										if (IS_ACTOR_VALID(bVar5))
										{
											if (ANIMAL_ACTOR_GET_DOMESTICATION(bVar5) == 0)
											{
												Function_343(uParam3, &bVar3);
												iVar0 = (iVar0 - 1);
											}
										}
									}
									else
									{
										Function_343(uParam3, &bVar3);
										iVar0 = (iVar0 - 1);
									}
								}
							}
						}
						bVar1 = Function_344(uParam3, 0);
						*uParam2 = TO_FLOAT(bVar1);
						*uParam2 = (*uParam2 / 6.0f);
						if (*uParam2 == fVar8)
						{
							Function_335(0, *uParam2, 1, bVar1, 4294967295, 4294967295, 10);
						}
						if (bVar1 > 6)
						{
							Function_333(0, 9);
							*uParam0 = 2;
						}
					}
					break;
				
				case 0x00000002:
					Function_299(uParam3);
					Function_332(0, 1);
					Function_284(20, 1, 0);
					Function_331(0, 4);
					*uParam1 = 9;
					*uParam0 = 0;
					*uParam2 = 0.0f;
					Function_276();
					break;
			}
			break;
		
		case 0x00000009:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_299(uParam3);
					Function_332(0, 1);
					Function_329(0);
					Function_330(0, 1, 4294967295 & 255);
					Function_326(0, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(0), 0.0f, true, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar8 = Function_337(0);
					if (Function_347())
					{
						Function_299(uParam3);
						if (fVar8 < 0.0f)
						{
							Function_335(0, 0.0f, 1, 0, 4294967295, 4294967295, 10);
						}
					}
					else
					{
						bVar1 = Function_274(11, uParam3, 1);
						bVar1 = Function_274(9, uParam3, 1);
						if (bVar1 >= 0)
						{
							iVar0 = 0;
							while (Function_273(uParam3, &iVar0, &bVar3))
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
														Function_343(uParam3, &bVar3);
														iVar0 = (iVar0 - 1);
													}
												}
												else
												{
													Function_343(uParam3, &bVar3);
													iVar0 = (iVar0 - 1);
												}
											}
											else
											{
												Function_343(uParam3, &bVar3);
												iVar0 = (iVar0 - 1);
											}
										}
									}
								}
							}
						}
						bVar1 = Function_344(uParam3, 0);
						*uParam2 = TO_FLOAT(bVar1);
						*uParam2 = (*uParam2 / 6.0f);
						if (*uParam2 == fVar8)
						{
							Function_335(0, *uParam2, 1, bVar1, 4294967295, 4294967295, 10);
						}
						if (bVar1 > 6)
						{
							*uParam0 = 2;
							Function_333(0, 10);
						}
					}
					break;
				
				case 0x00000002:
					Function_299(uParam3);
					Function_332(0, 1);
					Function_284(50, 1, 0);
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(25))
					{
						AWARD_ACHIEVEMENT(25);
					}
					*uParam1 = 10;
					*uParam0 = 2;
					*uParam2 = 1.0f;
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(0), 1.0f, true, 0);
					Function_321(0);
					Function_276();
					break;
			}
			break;
	}
}

bool Function_347() //Position: 0x189FC / 100860
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	bVar0 = GET_WEAPON_IN_HAND(Global_34573);
	bVar1 = Function_345(0, 1);
	if ((bVar1 && 255) == 255)
	{
		bVar2 = 4294967295;
	}
	else
	{
		bVar2 = (bVar1 && 255);
	}
	bVar3 = (SHIFT_RIGHT(bVar1, 8) && 255);
	if (bVar0 == 4294967295)
	{
		if (bVar2 != 4294967295)
		{
			bVar4 = FLOOR(ACTOR_GET_WEAPON_AMMO(Global_34573, bVar2));
			if (bVar4 >= bVar3)
			{
				Function_330(0, 1, (SHIFT_LEFT(bVar4, 8) || bVar2));
				return 1;
			}
		}
		return 0;
	}
	bVar4 = FLOOR(ACTOR_GET_WEAPON_AMMO(Global_34573, bVar0));
	if (bVar0 != bVar2)
	{
		Function_330(0, 1, (SHIFT_LEFT(bVar4, 8) || bVar0));
		return 1;
	}
	if (GET_WEAPON_MAX_AMMO(bVar0) != 1.0f)
	{
		return 1;
	}
	if (bVar4 >= bVar3)
	{
		Function_330(0, 1, (SHIFT_LEFT(bVar4, 8) || bVar0));
		if (IS_PLAYER_DEADEYE(0) && !IS_ACTOR_RELOADING(Global_34573))
		{
			return 0;
		}
		return 1;
	}
	if (bVar4 <= bVar3)
	{
		Function_330(0, 1, (SHIFT_LEFT(bVar4, 8) || bVar0));
	}
	return 0;
}

int Function_348(bool bParam0, bool bParam1, float fParam2, bool bParam3) //Position: 0x18AE2 / 101090
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
	bVar5 = Function_258();
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

int Function_349(int iParam0, bool bParam1, int iParam2) //Position: 0x18BD7 / 101335
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	iVar0 = 0;
	*iParam2 = "";
	bVar1 = Function_261();
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

bool Function_350(int iParam0, char* cParam1, var uParam2, bool bParam3) //Position: 0x18C4C / 101452
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
	bVar1 = Function_261();
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

void Function_351(bool bParam0, int iParam1, int iParam2, int iParam3) //Position: 0x18DDF / 101855
{
	iParam1 = iParam1;
	iParam2 = iParam2;
	iParam3 = iParam3;
	Function_61(bParam0, iParam2, 1, 0, 2, 1, 0);
}

var Function_352(bool bParam0) //Position: 0x18DFF / 101887
{
	int iVar0;
	bool bVar1;
	char* cVar2[16];
	
	bVar1 = Function_258();
	if (IS_LAYOUTREF_VALID(bVar1))
	{
		strcpy(&cVar2, "nAM_OBJSET", 16);
		straddi(&cVar2, bParam0, 16);
		iVar0 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bVar1, &cVar2));
	}
	return iVar0;
}

bool Function_353(var uParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x18E36 / 101942
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
	uVar0 = Function_352((*uParam0)[iParam122]);
	switch ((*uParam0)[iParam122])
	{
		case 0x00000000:
			Function_443(uParam0[022] + 4, uParam0[022] + 8, uParam0[022] + 12, &uVar0);
			break;
		
		case 0x00000004:
			Function_438(uParam0[422] + 4, uParam0[422] + 8, uParam0[422] + 12, &uVar0);
			break;
		
		case 0x00000001:
			Function_436(uParam0[122] + 4, uParam0[122] + 8, uParam0[122] + 12, &uVar0);
			break;
		
		case 0x00000005:
			Function_434(uParam0[522] + 4, uParam0[522] + 8, uParam0[522] + 12, &uVar0);
			break;
		
		case 0x00000002:
			Function_432(uParam0[222] + 4, uParam0[222] + 8, uParam0[222] + 12, &uVar0);
			break;
		
		case 0x00000006:
			Function_430(uParam0[622] + 4, uParam0[622] + 8, uParam0[622] + 12, &uVar0);
			break;
		
		case 0x00000003:
			break;
		
		case 0x00000007:
			Function_428(uParam0[722] + 4, uParam0[722] + 8, uParam0[722] + 12, &uVar0);
			break;
		
		case 0x00000008:
			Function_427(uParam0[822] + 4, uParam0[822] + 8, uParam0[822] + 12, &uVar0);
			break;
		
		case 0x00000009:
			Function_413(uParam0[922] + 4, uParam0[922] + 8, uParam0[922] + 12, &uVar0);
			break;
		
		case 0x00000016:
			Function_404(uParam0[2222], 10, 1, 50.0f, 10, 100.0f, 50, 150.0f, 1, 1042, 1043, 1044);
			break;
		
		case 0x00000017:
			Function_404(uParam0[2322], 10, 500, 50.0f, 1000, 100.0f, 5000, 150.0f, 1, 1045, 1046, 1047);
			break;
		
		case 0x00000018:
			Function_404(uParam0[2422], 24, 1000, 50.0f, 2500, 100.0f, 7500, 150.0f, 1, 1051, 1052, 1053);
			break;
		
		case 0x0000000A:
			break;
		
		case 0x0000000B:
			Function_391(uParam0[1122] + 4, uParam0[1122] + 8, uParam0[1122] + 12, &uVar0);
			break;
		
		case 0x0000000C:
			break;
		
		case 0x0000000D:
			Function_373(uParam0[1322] + 4, uParam0[1322] + 8, uParam0[1322] + 12, &uVar0);
			break;
		
		case 0x0000000E:
			Function_354(uParam0[iParam122], 372, 0, 16090, 50.0f, 80450, 100.0f, 160900, 150.0f, 1, 4001);
			break;
		
		case 0x0000000F:
			Function_354(uParam0[iParam122], 373, 0, 48270, 50.0f, 241350, 100.0f, 482700, 150.0f, 1, 4002);
			break;
		
		case 0x00000010:
			Function_354(uParam0[iParam122], 382, 0, 3218, 50.0f, 32180, 100.0f, 321800, 150.0f, 1, 4005);
			break;
		
		case 0x00000011:
			Function_354(uParam0[iParam122], 376, 0, 3218, 50.0f, 40225, 100.0f, 402250, 150.0f, 1, 4003);
			break;
		
		case 0x00000012:
			Function_354(uParam0[iParam122], 130, 0, 25, 50.0f, 50, 100.0f, 100, 150.0f, 1, 4007);
			break;
		
		case 0x00000013:
			Function_354(uParam0[iParam122], 133, 0, 25, 50.0f, 50, 100.0f, 100, 150.0f, 1, 4006);
			break;
		
		case 0x00000015:
			Function_354(uParam0[iParam122], 385, 0, 25, 50.0f, 50, 100.0f, 100, 150.0f, 1, 4008);
			break;
		
		case 0x00000014:
			Function_354(uParam0[iParam122], 379, 0, 25, 50.0f, 50, 100.0f, 100, 150.0f, 1, 4004);
			break;
		
		default:
			LOG_ERROR("UPDATE_AMBIENT_MISSION: Unhandled ambient mission. You probably need to add this new mission.");
			return 0;
			break;
	}
	return 1;
}

void Function_354(var uParam0, int iParam1, int iParam2, int iParam3, float fParam4, int iParam5, float fParam6, int iParam7, float fParam8, int iParam9, int iParam10) //Position: 0x1931D / 103197
{
	if (Global_83864.f_1264 > iParam2)
	{
		Function_355(uParam0, iParam1, iParam3, fParam4, iParam5, fParam6, iParam7, fParam8, iParam9, iParam10);
	}
}

void Function_355(var uParam0, int iParam1, var uParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, int iParam9) //Position: 0x19348 / 103240
{
	switch (StackVal)
	{
		case 0x00000000:
			switch (StackVal)
			{
				case 0x00000000:
					Function_371(uParam0, iParam1);
					break;
				
				case 0x00000001:
					Function_369(uParam0, iParam1, uParam2);
					break;
				
				case 0x00000002:
					Function_368(uParam0, 1, bParam3, bParam8, 4294967295, 0);
					break;
			}
			break;
		
		case 0x00000001:
			switch (StackVal)
			{
				case 0x00000000:
					Function_365(uParam0, 0.0f, iParam1);
					break;
				
				case 0x00000001:
					Function_369(uParam0, iParam1, iParam4);
					break;
				
				case 0x00000002:
					Function_368(uParam0, 2, bParam5, bParam8, 4294967295, 0);
					break;
			}
			break;
		
		case 0x00000002:
			switch (StackVal)
			{
				case 0x00000000:
					Function_365(uParam0, 0.0f, iParam1);
					break;
				
				case 0x00000001:
					Function_369(uParam0, iParam1, iParam6);
					break;
				
				case 0x00000002:
					Function_356(uParam0, bParam7, iParam9, 0);
					break;
			}
			break;
	}
}

void Function_356(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x19434 / 103476
{
	Function_332(*uParam0, 1);
	uParam0->f_8 = 10;
	uParam0->f_4 = 2;
	uParam0->f_12 = 1.0f;
	SET_JOURNAL_ENTRY_PROGRESS(Function_325(*uParam0), 1.0f, false, 0);
	Function_321(*uParam0);
	if (!IS_STRING_VALID(bParam3))
	{
		bParam3 = "SC_Travel_Icon_128";
	}
	Function_359(&Global_49399[*uParam022] + 16, CEIL(bParam1), bParam3);
	if (iParam2 != 4294967295)
	{
		Function_357(iParam2);
	}
	Function_276();
}

void Function_357(int iParam0) //Position: 0x194A7 / 103591
{
	Function_358(iParam0, 1);
	return;
}

void Function_358(int iParam0, bool bParam1) //Position: 0x194B3 / 103603
{
	int iVar0;
	
	iVar0 = (iParam0 % 1000);
	if (bParam1)
	{
		Function_125(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_175((iVar0 % 32)));
	}
	else
	{
		Function_94(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_175((iVar0 % 32)));
	}
	return;
}

void Function_359(bool bParam0, bool bParam1, bool bParam2) //Position: 0x19509 / 103689
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	
	bVar0 = Function_364();
	iVar1 = 0;
	if (DECOR_GET_INT_VERBOSE(bVar0, Function_363(), &iVar1))
	{
		iVar2 = iVar1 & 1023;
	}
	Var3 = { StackVal, StackVal, StackVal, Function_362(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam0));
	Var3 = { StackVal, StackVal, StackVal, Function_361(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam2));
	Var3 = { StackVal, StackVal, StackVal, Function_360(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, bParam1);
	DECOR_SET_INT(bVar0, Function_363(), iVar1 + 1);
	return;
}

struct<16> Function_360(int iParam0) //Position: 0x1957B / 103803
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_X", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_361(int iParam0) //Position: 0x1959C / 103836
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_T", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_362(int iParam0) //Position: 0x195BD / 103869
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_H", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_363() //Position: 0x195DE / 103902
{
	return "CQueue_Count";
}

var Function_364() //Position: 0x195F3 / 103923
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_365(var uParam0, float fParam1, int iParam2) //Position: 0x19622 / 103970
{
	Function_329(*uParam0);
	Function_326(*uParam0, 0);
	SET_JOURNAL_ENTRY_PROGRESS(Function_325(*uParam0), fParam1, false, 0);
	if (iParam2 != 4294967295)
	{
		Function_366(*uParam0, 1, iParam2);
	}
	uParam0->f_4 = 1;
	return;
}

void Function_366(int iParam0, int iParam1, int iParam2) //Position: 0x19656 / 104022
{
	Function_338(iParam0, iParam1, (Function_112(iParam2) - Function_367(iParam0, iParam1)), 0);
	return;
}

float Function_367(int iParam0, bool bParam1) //Position: 0x19672 / 104050
{
	if (Function_1() || Global_34165.f_44)
	{
		return (*&Global_49399[iParam022] + 36)[bParam1];
	}
	return (*&Global_49310[iParam022] + 36)[bParam1];
}

void Function_368(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x196A2 / 104098
{
	bool bVar0;
	
	if (bParam3)
	{
	}
	if (!IS_STRING_VALID(bParam5))
	{
		bParam5 = "SC_Travel_Icon_128";
	}
	memcpy(&bVar0, StackVal, StackVal, StackVal, StackVal, StackVal, Function_323(*uParam0), 4);
	Function_359(&bVar0, CEIL(bParam2), bParam5);
	uParam0->f_8 = iParam1;
	uParam0->f_4 = 0;
	uParam0->f_12 = 0.0f;
	if (iParam4 != 4294967295)
	{
		Function_357(iParam4);
	}
	Function_276();
}

void Function_369(var uParam0, int iParam1, int iParam2) //Position: 0x19704 / 104196
{
	bool bVar0;
	char* cVar1;
	float fVar2;
	
	Function_96();
	bVar0 = Function_370((Function_112(iParam1) - Function_336(*uParam0, 1, 0)), *uParam0, 1);
	if (bVar0 <= IntToFloat(iParam2))
	{
		uParam0->f_4 = 2;
	}
	else
	{
		cVar1 = Function_325(*uParam0);
		fVar2 = (bVar0 / IntToFloat(iParam2));
		if (fVar2 < GET_JOURNAL_ENTRY_PROGRESS(cVar1))
		{
			SET_JOURNAL_ENTRY_PROGRESS(cVar1, fVar2, Function_328(*uParam0, 4), 0);
		}
	}
	return;
}

bool Function_370(float fParam0, int iParam1, bool bParam2) //Position: 0x1975F / 104287
{
	if (Function_1() || Global_34165.f_44)
	{
		(*&Global_49399[iParam122] + 36)[bParam2] = fParam0;
		return (*&Global_49399[iParam122] + 36)[bParam2];
	}
	(*&Global_49310[iParam122] + 36)[bParam2] = fParam0;
	return (*&Global_49310[iParam122] + 36)[bParam2];
}

void Function_371(var uParam0, int iParam1) //Position: 0x197AD / 104365
{
	Function_329(*uParam0);
	if (Function_372())
	{
		if (!Function_328(*uParam0, 2))
		{
			if (*uParam0 == 22)
			{
				Function_327(*uParam0, 2);
			}
			Function_326(*uParam0, 0);
			SET_JOURNAL_ENTRY_PROGRESS(Function_325(*uParam0), 0.0f, false, 0);
			if (iParam1 != 4294967295)
			{
				Function_366(*uParam0, 1, iParam1);
			}
		}
		uParam0->f_4 = 1;
	}
	return;
}

bool Function_372() //Position: 0x19800 / 104448
{
	if (!HUD_IS_FADING() && !HUD_IS_FADED())
	{
		return 1;
	}
	return 0;
}

void Function_373(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x19815 / 104469
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
					Function_329(13);
					if (Function_372() && Global_83864.f_1264 <= 21)
					{
						if (!Function_328(13, 2))
						{
							Function_326(13, 0);
							Function_327(13, 2);
							SET_JOURNAL_ENTRY_PROGRESS(Function_325(13), 0.0f, false, 0);
						}
						*uParam0 = 1;
					}
					break;
				
				case 0x00000001:
					if (!Function_448() && Global_83864.f_1264 <= 21)
					{
						bVar1 = Function_390(2, uParam3, 1);
					}
					if (bVar1 >= 0)
					{
						iVar0 = (GET_OBJECTSET_SIZE(*uParam3) - bVar1);
						while (Function_273(uParam3, &iVar0, &bVar2))
						{
							if (IS_OBJECT_VALID(bVar2))
							{
								bVar3 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar2)));
								if (IS_ACTOR_VALID(bVar3))
								{
									if ((IS_ACTOR_PLAYER(bVar3) && !IS_ACTOR_LOCAL_PLAYER(bVar3)) && !Function_384(GET_ACTOR_SLOT(bVar3)))
									{
										if (Function_383(&Global_84600, FIRE_FIND_HANDLE_FROM_ATTACHED_ACTOR(bVar3)))
										{
											Function_333(13, 1);
											*uParam0 = 2;
										}
										else
										{
											Function_382(&Global_84600, FIRE_FIND_HANDLE_FROM_ATTACHED_ACTOR(bVar3));
										}
									}
									else
									{
										Function_343(uParam3, &bVar2);
										iVar0 = (iVar0 - 1);
									}
								}
								else
								{
									Function_343(uParam3, &bVar2);
									iVar0 = (iVar0 - 1);
								}
							}
						}
					}
					if (Function_381(&Global_84600))
					{
						Function_299(uParam3);
					}
					break;
				
				case 0x00000002:
					Function_380(&(Global_49399[1322]), 1, 250.0f, 1, 0);
					Function_299(uParam3);
					break;
			}
			break;
		
		case 0x00000001:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_379(&(Global_49399[1322]), 5, 25, 250.0f);
					break;
				
				case 0x00000001:
					if (!Function_448() && Global_83864.f_1264 <= 21)
					{
						bVar1 = Function_390(2, uParam3, 1);
					}
					if (bVar1 >= 0)
					{
						iVar0 = (GET_OBJECTSET_SIZE(*uParam3) - bVar1);
						while (Function_273(uParam3, &iVar0, &bVar2))
						{
							if (IS_OBJECT_VALID(bVar2))
							{
								bVar3 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar2)));
								if (IS_ACTOR_VALID(bVar3))
								{
									if ((IS_ACTOR_PLAYER(bVar3) && !IS_ACTOR_LOCAL_PLAYER(bVar3)) && !Function_384(GET_ACTOR_SLOT(bVar3)))
									{
										if (Function_383(&Global_84600, FIRE_FIND_HANDLE_FROM_ATTACHED_ACTOR(bVar3)))
										{
											bVar5 = true;
										}
										else
										{
											Function_382(&Global_84600, FIRE_FIND_HANDLE_FROM_ATTACHED_ACTOR(bVar3));
										}
									}
									else
									{
										Function_343(uParam3, &bVar2);
										iVar0 = (iVar0 - 1);
									}
								}
								else
								{
									Function_343(uParam3, &bVar2);
									iVar0 = (iVar0 - 1);
								}
							}
						}
					}
					if (bVar5)
					{
						bVar1 = Function_344(uParam3, 13);
						if (bVar1 > 3)
						{
							*uParam0 = 2;
						}
					}
					if (Function_381(&Global_84600))
					{
						Function_299(uParam3);
					}
					break;
				
				case 0x00000002:
					Function_380(&(Global_49399[1322]), 2, 250.0f, 1, 0);
					Function_299(uParam3);
					break;
			}
			break;
		
		case 0x00000002:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_379(&(Global_49399[1322]), 25, 50, 250.0f);
					break;
				
				case 0x00000001:
					fVar4 = Function_337(13);
					if (!Function_448() && Global_83864.f_1264 <= 1)
					{
						bVar1 = Function_274(2, uParam3, 1);
					}
					if (bVar1 >= 0)
					{
						iVar0 = (GET_OBJECTSET_SIZE(*uParam3) - bVar1);
						while (Function_273(uParam3, &iVar0, &bVar2))
						{
							if (IS_OBJECT_VALID(bVar2))
							{
								bVar3 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar2)));
								if (IS_ACTOR_VALID(bVar3))
								{
									if (!IS_ACTOR_PLAYER(bVar3) || IS_ACTOR_LOCAL_PLAYER(bVar3))
									{
										Function_343(uParam3, &bVar2);
										iVar0 = (iVar0 - 1);
									}
									else if (!Function_272(bVar2) != 23)
									{
										Function_343(uParam3, &bVar2);
										iVar0 = (iVar0 - 1);
									}
									else if (!Function_375(GET_ACTOR_SLOT(bVar3), 1, 1))
									{
										Function_343(uParam3, &bVar2);
										iVar0 = (iVar0 - 1);
									}
								}
								else
								{
									Function_343(uParam3, &bVar2);
									iVar0 = (iVar0 - 1);
								}
							}
						}
					}
					bVar1 = Function_344(uParam3, 13);
					if (bVar1 <= 1 && Function_345(13, 1) == 1)
					{
						Function_330(13, 1, 1);
					}
					else if (bVar1 >= 4294967295)
					{
						if (bVar1 >= 0)
						{
							*uParam2 = (TO_FLOAT(bVar1) / 1.0f);
							if (*uParam2 == fVar4)
							{
								SET_JOURNAL_ENTRY_PROGRESS(Function_325(13), *uParam2, false, 0);
							}
						}
					}
					if (Function_345(13, 1) == 1)
					{
						*uParam0 = 2;
					}
					break;
				
				case 0x00000002:
					Function_374(&(Global_49399[1322]), 250.0f, 0);
					Function_299(uParam3);
					SET_WEAPON_GOLD(Function_29(), 23, 1);
					Global_83823[23] = 1;
					Function_357(2011);
					break;
			}
			break;
	}
}

void Function_374(var uParam0, bool bParam1, bool bParam2) //Position: 0x19C2F / 105519
{
	Function_332(*uParam0, 1);
	uParam0->f_8 = 10;
	uParam0->f_4 = 2;
	uParam0->f_12 = 1.0f;
	SET_JOURNAL_ENTRY_PROGRESS(Function_325(*uParam0), 1.0f, false, 0);
	Function_321(*uParam0);
	if (!IS_STRING_VALID(bParam2))
	{
		bParam2 = "challenge_01_128";
	}
	Function_359(&Global_49399[*uParam022] + 16, CEIL(bParam1), bParam2);
	Function_276();
	return;
}

bool Function_375(bool bParam0, int iParam1, bool bParam2) //Position: 0x19C93 / 105619
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_378(iParam1, bParam2);
	}
	if (!Function_377(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_376(iParam1), 64);
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

var Function_376(int iParam0) //Position: 0x19D14 / 105748
{
	switch (iParam0)
	{
		case 0x00000001:
			return "HAD_FLAG";
			break;
		
		case 0x00000002:
			return "nFRD_SPOON";
			break;
		
		case 0x00000004:
			return "FRD_IN_VOL";
			break;
		
		case 0x00000008:
			return "MP_TRANSIENT_BIT_FRD_IN_SPOONHOLDER_POSSE";
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

bool Function_377(bool bParam0) //Position: 0x19E06 / 105990
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

var Function_378(int iParam0, bool bParam1) //Position: 0x19EA7 / 106151
{
	int iVar0;
	
	iVar0 = (Global_78480.f_128 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

void Function_379(var uParam0, bool bParam1, bool bParam2, float fParam3) //Position: 0x19EC7 / 106183
{
	Function_329(*uParam0);
	Function_326(*uParam0, 0);
	if (bParam2 != 0)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Function_325(*uParam0), (TO_FLOAT(bParam1) / TO_FLOAT(bParam2)), false, 0);
	}
	else
	{
		LOG_ERROR("Divide by zero attempt in MP_WEAPON_CHALLENGE_LEVEL_START.... ya thats bad bail out");
		SET_JOURNAL_ENTRY_PROGRESS(Function_325(*uParam0), 0.0f, false, 0);
	}
	if (fParam3 != 0.0f)
	{
	}
	uParam0->f_4 = 1;
}

void Function_380(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x19F6C / 106348
{
	bool bVar0;
	
	Function_332(*uParam0, bParam3);
	if (!IS_STRING_VALID(bParam4))
	{
		bParam4 = "challenge_01_128";
	}
	memcpy(&bVar0, StackVal, StackVal, StackVal, StackVal, StackVal, Function_323(*uParam0), 4);
	Function_359(&bVar0, CEIL(bParam2), bParam4);
	uParam0->f_8 = iParam1;
	uParam0->f_4 = 0;
	uParam0->f_12 = 0.0f;
	Function_331(*uParam0, 4);
	Function_276();
}

bool Function_381(int iParam0) //Position: 0x19FCB / 106443
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

void Function_382(var uParam0, int iParam1) //Position: 0x19FF3 / 106483
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

bool Function_383(var uParam0, int iParam1) //Position: 0x1A022 / 106530
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

bool Function_384(bool bParam0) //Position: 0x1A058 / 106584
{
	if (Function_386(bParam0, 1, 0) != 4294967295 && Function_385() != 4294967295)
	{
		return 0;
	}
	return Function_386(bParam0, 1, 0) != Function_385();
}

int Function_385() //Position: 0x1A080 / 106624
{
	if (!NET_IS_IN_SESSION())
	{
		return 4294967295;
	}
	return Function_386(GET_LOCAL_SLOT(), 1, 0);
}

int Function_386(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1A097 / 106647
{
	if (bParam1)
	{
		if (!IS_SLOT_VALID(bParam0))
		{
			return 4294967295;
		}
		if (bParam2)
		{
			if (Function_377(bParam0))
			{
				if (!Function_387(bParam0, 2048, 1))
				{
					return 4294967295;
				}
			}
			return 4294967295;
		}
	}
	return (*&Global_78578 + 20)[bParam0];
}

bool Function_387(bool bParam0, int iParam1, bool bParam2) //Position: 0x1A0DB / 106715
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_389(iParam1, bParam2);
	}
	if (!Function_377(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_388(iParam1), 64);
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

var Function_388(int iParam0) //Position: 0x1A15C / 106844
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
		
		case 0x01000000:
			return "FREE_MODE_DEFENSE_ACTIVE";
			break;
		
		case 0x02000000:
			return "PLAYER_IS_GRIEFER";
			break;
		
		case 0x04000000:
			return "CANNOT_AFFORD_MINIGAME";
			break;
		
		case 0x08000000:
			return "FREE_MODE_DEFENSE_SPOONHOLDER";
			break;
	}
	return "UNKNOWN";
}

bool Function_389(int iParam0, bool bParam1) //Position: 0x1A475 / 107637
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

int Function_390(int iParam0, var uParam1, bool bParam2) //Position: 0x1A495 / 107669
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	if (!IS_OBJECTSET_VALID(*uParam1))
	{
		LOG_ERROR("AM_COLLECT_PLAYER_EVENTS_OF_TYPE_ON_ACTORENUM: invalid objectset passed as EventCollection");
		return 4294967295;
	}
	if (!IS_ACTOR_VALID(Function_29()))
	{
		return 4294967295;
	}
	bVar0 = Function_261();
	iVar1 = 0;
	bVar2 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar2))
	{
		if (!IS_OBJECT_IN_OBJECTSET(bVar2, *uParam1))
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
									ADD_OBJECT_TO_OBJECTSET(bVar2, *uParam1);
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

void Function_391(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x1A5F4 / 108020
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
					if (Function_372() && Global_83864.f_1264 <= 14)
					{
						if (!Function_328(11, 2))
						{
							Function_326(11, 0);
							Function_327(11, 2);
							SET_JOURNAL_ENTRY_PROGRESS(Function_325(11), 0.0f, false, 0);
						}
						*uParam0 = 1;
					}
					break;
				
				case 0x00000001:
					fVar5 = Function_337(11);
					iVar2 = Function_344(uParam3, 11);
					if (!Function_448() && Global_83864.f_1264 <= 14)
					{
						bVar1 = Function_274(2, uParam3, 1);
					}
					if (bVar1 >= 0)
					{
						iVar0 = (GET_OBJECTSET_SIZE(*uParam3) - bVar1);
						while (Function_273(uParam3, &iVar0, &bVar3))
						{
							if (IS_OBJECT_VALID(bVar3))
							{
								bVar4 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar3)));
								if (IS_ACTOR_VALID(bVar4))
								{
									if ((IS_ACTOR_PLAYER(bVar4) && !IS_ACTOR_LOCAL_PLAYER(bVar4)) && !Function_384(GET_ACTOR_SLOT(bVar4)))
									{
										if (!Function_272(bVar3) != 24)
										{
											Function_343(uParam3, &bVar3);
											iVar0 = (iVar0 - 1);
										}
									}
									else
									{
										Function_343(uParam3, &bVar3);
										iVar0 = (iVar0 - 1);
									}
								}
								else
								{
									Function_343(uParam3, &bVar3);
									iVar0 = (iVar0 - 1);
								}
							}
						}
					}
					bVar1 = Function_344(uParam3, 11);
					if ((bVar1 - iVar2) >= 0)
					{
						Function_401(&iLocal_0, 2.0f);
					}
					if (Function_400(&iLocal_0))
					{
						if (Function_392(&iLocal_0))
						{
							Function_299(uParam3);
							Function_332(11, 1);
							Function_329(11);
							*uParam2 = 0.0f;
							SET_JOURNAL_ENTRY_PROGRESS(Function_325(11), 0.0f, false, 0);
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
								SET_JOURNAL_ENTRY_PROGRESS(Function_325(11), *uParam2, false, 0);
							}
						}
					}
					break;
				
				case 0x00000002:
					Function_380(&(Global_49399[1122]), 1, 250.0f, 1, 0);
					Function_299(uParam3);
					break;
			}
			break;
		
		case 0x00000001:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_379(&(Global_49399[1122]), 0, 3, 250.0f);
					break;
				
				case 0x00000001:
					fVar5 = Function_337(11);
					iVar2 = Function_344(uParam3, 11);
					if (!Function_448() && Global_83864.f_1264 <= 14)
					{
						bVar1 = Function_274(2, uParam3, 1);
					}
					if (bVar1 >= 0)
					{
						iVar0 = (GET_OBJECTSET_SIZE(*uParam3) - bVar1);
						while (Function_273(uParam3, &iVar0, &bVar3))
						{
							if (IS_OBJECT_VALID(bVar3))
							{
								bVar4 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar3)));
								if (IS_ACTOR_VALID(bVar4))
								{
									if ((IS_ACTOR_PLAYER(bVar4) && !IS_ACTOR_LOCAL_PLAYER(bVar4)) && !Function_384(GET_ACTOR_SLOT(bVar4)))
									{
										if (!Function_272(bVar3) != 24)
										{
											Function_343(uParam3, &bVar3);
											iVar0 = (iVar0 - 1);
										}
									}
									else
									{
										Function_343(uParam3, &bVar3);
										iVar0 = (iVar0 - 1);
									}
								}
								else
								{
									Function_343(uParam3, &bVar3);
									iVar0 = (iVar0 - 1);
								}
							}
						}
					}
					bVar1 = Function_344(uParam3, 11);
					if ((bVar1 - iVar2) >= 0)
					{
						Function_401(&iLocal_0, 2.0f);
					}
					if (Function_400(&iLocal_0))
					{
						if (Function_392(&iLocal_0))
						{
							Function_299(uParam3);
							Function_332(11, 1);
							Function_329(11);
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
								SET_JOURNAL_ENTRY_PROGRESS(Function_325(11), *uParam2, false, 0);
							}
						}
					}
					else if (bVar1 >= 4294967295)
					{
						*uParam2 = (TO_FLOAT(bVar1) / 3.0f);
						if (*uParam2 == fVar5)
						{
							SET_JOURNAL_ENTRY_PROGRESS(Function_325(11), *uParam2, false, 0);
						}
					}
					break;
				
				case 0x00000002:
					Function_380(&(Global_49399[1122]), 2, 250.0f, 1, 0);
					Function_299(uParam3);
					break;
			}
			break;
		
		case 0x00000002:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_379(&(Global_49399[1122]), 0, 1, 250.0f);
					break;
				
				case 0x00000001:
					fVar5 = Function_337(11);
					if (!Function_448() && Global_83864.f_1264 <= 14)
					{
						bVar1 = Function_274(2, uParam3, 1);
					}
					if (bVar1 >= 0)
					{
						iVar0 = (GET_OBJECTSET_SIZE(*uParam3) - bVar1);
						while (Function_273(uParam3, &iVar0, &bVar3))
						{
							if (IS_OBJECT_VALID(bVar3))
							{
								bVar4 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar3)));
								if (IS_ACTOR_VALID(bVar4))
								{
									if (!IS_ACTOR_PLAYER(bVar4) || IS_ACTOR_LOCAL_PLAYER(bVar4))
									{
										Function_343(uParam3, &bVar3);
										iVar0 = (iVar0 - 1);
									}
									else if (!Function_272(bVar3) != 24)
									{
										Function_343(uParam3, &bVar3);
										iVar0 = (iVar0 - 1);
									}
									else if (!Function_375(GET_ACTOR_SLOT(bVar4), 1, 1))
									{
										Function_343(uParam3, &bVar3);
										iVar0 = (iVar0 - 1);
									}
								}
								else
								{
									Function_343(uParam3, &bVar3);
									iVar0 = (iVar0 - 1);
								}
							}
						}
					}
					bVar1 = Function_344(uParam3, 11);
					if (bVar1 <= 1 && Function_345(11, 1) == 1)
					{
						Function_330(11, 1, 1);
					}
					else if (bVar1 >= 4294967295)
					{
						if (bVar1 >= 0)
						{
							*uParam2 = (TO_FLOAT(bVar1) / 1.0f);
							if (*uParam2 == fVar5)
							{
								SET_JOURNAL_ENTRY_PROGRESS(Function_325(11), *uParam2, false, 0);
							}
						}
					}
					if (Function_345(11, 1) == 1)
					{
						*uParam0 = 2;
					}
					break;
				
				case 0x00000002:
					Function_374(&(Global_49399[1122]), 250.0f, 0);
					SET_WEAPON_GOLD(Function_29(), 24, 1);
					Global_83823[24] = 1;
					Function_357(2007);
					break;
			}
			break;
	}
}

bool Function_392(int iParam0) //Position: 0x1AAEF / 109295
{
	if (Function_394(iParam0))
	{
		Function_393(iParam0);
		return 1;
	}
	return 0;
}

void Function_393(int iParam0) //Position: 0x1AB05 / 109317
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

bool Function_394(int iParam0) //Position: 0x1AB19 / 109337
{
	if (Function_400(iParam0))
	{
		if (Function_395(iParam0) >= 0.0f)
		{
			return 1;
		}
	}
	return 0;
}

float Function_395(int iParam0) //Position: 0x1AB34 / 109364
{
	return -Function_396(iParam0);
}

float Function_396(int iParam0) //Position: 0x1AB40 / 109376
{
	if (Function_400(iParam0))
	{
		if (Function_399(iParam0))
		{
			return StackVal;
		}
		Function_397();
		return (StackVal - NET_GET_NET_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of NETTIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of NETTIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

void Function_397() //Position: 0x1AC11 / 109585
{
	if (!Function_398())
	{
	}
	return;
}

bool Function_398() //Position: 0x1AC1E / 109598
{
	return NET_IS_IN_SESSION();
}

bool Function_399(int iParam0) //Position: 0x1AC27 / 109607
{
	return Function_9(*iParam0, 2);
}

bool Function_400(int iParam0) //Position: 0x1AC34 / 109620
{
	return Function_9(*iParam0, 1);
}

void Function_401(var uParam0, float fParam1) //Position: 0x1AC41 / 109633
{
	Function_402(uParam0, -fParam1);
	return;
}

void Function_402(var uParam0, float fParam1) //Position: 0x1AC4F / 109647
{
	Function_397();
	Function_403(uParam0, (NET_GET_NET_TIME() - fParam1));
	return;
}

void Function_403(int iParam0, bool bParam1) //Position: 0x1AC63 / 109667
{
	iParam0->f_4 = bParam1;
	Function_125(iParam0, 1);
	Function_94(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

void Function_404(var uParam0, int iParam1, int iParam2, float fParam3, int iParam4, float fParam5, int iParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11) //Position: 0x1AC80 / 109696
{
	if (Global_83864.f_1264 > iParam1)
	{
		Function_405(uParam0, iParam2, fParam3, iParam4, fParam5, iParam6, fParam7, iParam8 != 1, iParam9, iParam10, iParam11);
	}
}

void Function_405(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, var uParam6, bool bParam7, var uParam8, int iParam9, var uParam10) //Position: 0x1ACAF / 109743
{
	switch (StackVal)
	{
		case 0x00000000:
			switch (StackVal)
			{
				case 0x00000000:
					Function_371(uParam0, 4294967295);
					break;
				
				case 0x00000001:
					if (*uParam0 == 22)
					{
						Function_412(uParam0, uParam1);
					}
					else if (*uParam0 == 23)
					{
						Function_411(uParam0, uParam1);
					}
					else if (*uParam0 == 24)
					{
						Function_407(uParam0, uParam1);
					}
					break;
				
				case 0x00000002:
					Function_368(uParam0, 1, uParam2, bParam7, uParam8, Function_406());
					break;
			}
			break;
		
		case 0x00000001:
			switch (StackVal)
			{
				case 0x00000000:
					Function_365(uParam0, 0, 4294967295);
					break;
				
				case 0x00000001:
					if (*uParam0 == 22)
					{
						Function_412(uParam0, bParam3);
					}
					else if (*uParam0 == 23)
					{
						Function_411(uParam0, bParam3);
					}
					else if (*uParam0 == 24)
					{
						Function_407(uParam0, bParam3);
					}
					break;
				
				case 0x00000002:
					Function_368(uParam0, 2, bParam4, bParam7, iParam9, Function_406());
					break;
			}
			break;
		
		case 0x00000002:
			switch (StackVal)
			{
				case 0x00000000:
					Function_365(uParam0, 0, 4294967295);
					break;
				
				case 0x00000001:
					if (*uParam0 == 22)
					{
						Function_412(uParam0, bParam5);
					}
					else if (*uParam0 == 23)
					{
						Function_411(uParam0, bParam5);
					}
					else if (*uParam0 == 24)
					{
						Function_407(uParam0, bParam5);
					}
					break;
				
				case 0x00000002:
					Function_356(uParam0, uParam6, uParam10, Function_406());
					break;
			}
			break;
	}
}

bool Function_406() //Position: 0x1AE1E / 110110
{
	return "challenge_04_128";
}

void Function_407(var uParam0, bool bParam1) //Position: 0x1AE37 / 110135
{
	bool bVar0;
	bool bVar1;
	
	if (NET_GET_POSSE_COUNT() > 2)
	{
		if (Function_410() > bParam1)
		{
			bVar1 = false;
			bVar0 = false;
			while (bVar0 <= 16)
			{
				if (!bVar1)
				{
					if (IS_SLOT_VALID(bVar0))
					{
						if (Function_409(GET_LOCAL_SLOT(), bVar0))
						{
							if (!Function_408(bVar0) < bParam1)
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

int Function_408(bool bParam0) //Position: 0x1AE95 / 110229
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

bool Function_409(bool bParam0, bool bParam1) //Position: 0x1AEB9 / 110265
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

int Function_410() //Position: 0x1AEDD / 110301
{
	return Global_78480.f_108;
}

void Function_411(var uParam0, bool bParam1) //Position: 0x1AEE9 / 110313
{
	char* cVar0;
	float fVar1;
	
	if (Function_410() > bParam1)
	{
		uParam0->f_4 = 2;
	}
	else
	{
		cVar0 = Function_325(*uParam0);
		fVar1 = (TO_FLOAT(Function_410()) / TO_FLOAT(bParam1));
		if (fVar1 == GET_JOURNAL_ENTRY_PROGRESS(cVar0))
		{
			SET_JOURNAL_ENTRY_PROGRESS(cVar0, fVar1, false, 0);
		}
	}
	return;
}

void Function_412(var uParam0, bool bParam1) //Position: 0x1AF29 / 110377
{
	bool bVar0;
	char* cVar1;
	float fVar2;
	
	bVar0 = uParam0->f_28;
	if (bVar0 <= 0)
	{
		bVar0 = false;
	}
	if (bVar0 <= bParam1)
	{
		if (Function_389(131072, 1))
		{
			if (Function_345(*uParam0, 2) != 1)
			{
				bVar0++;
				uParam0->f_28++;
				Function_330(*uParam0, 1, bVar0);
				Function_330(*uParam0, 2, 1);
			}
		}
		else if (Function_345(*uParam0, 2) == 1)
		{
			Function_330(*uParam0, 2, 0);
		}
		if (bVar0 > bParam1)
		{
			uParam0->f_4 = 2;
		}
		else
		{
			cVar1 = Function_325(*uParam0);
			fVar2 = (TO_FLOAT(bVar0) / TO_FLOAT(bParam1));
			if (fVar2 == GET_JOURNAL_ENTRY_PROGRESS(cVar1))
			{
				SET_JOURNAL_ENTRY_PROGRESS(cVar1, fVar2, false, 0);
			}
		}
	}
	return;
}

void Function_413(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x1AFCD / 110541
{
	switch (*uParam1)
	{
		case 0x00000000:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(9);
					if (Global_83864.f_1264 > 40)
					{
						*uParam0 = 1;
					}
					break;
				
				case 0x00000001:
					if (!Function_426(&iLocal_13))
					{
						if (((Global_56688[976][09].f_20 || Global_56688[976][69].f_20) || Global_56688[976][19].f_20) || Global_56688[976][29].f_20)
						{
							Function_424(&iLocal_13);
						}
					}
					else if (Function_421(&iLocal_13, 86400.0f))
					{
						Function_299(uParam3);
						Function_332(9, 1);
						Function_329(9);
						Function_260();
						Function_420(9);
						Function_419(&iLocal_13);
						*uParam2 = 0.0f;
					}
					else
					{
						if (Global_56688[976][09].f_24 && !Function_345(9, 1) != 1)
						{
							Function_330(9, 1, 1);
							*uParam2 = (GET_JOURNAL_ENTRY_PROGRESS(Function_325(9)) + 0.25f);
						}
						if (Global_56688[976][69].f_24 && !Function_345(9, 2) != 1)
						{
							Function_330(9, 2, 1);
							*uParam2 = (GET_JOURNAL_ENTRY_PROGRESS(Function_325(9)) + 0.25f);
						}
						if (Global_56688[976][19].f_24 && !Function_345(9, 3) != 1)
						{
							Function_330(9, 3, 1);
							*uParam2 = (GET_JOURNAL_ENTRY_PROGRESS(Function_325(9)) + 0.25f);
						}
						if (Global_56688[976][29].f_24 && !Function_345(9, 4) != 1)
						{
							Function_330(9, 4, 1);
							*uParam2 = (GET_JOURNAL_ENTRY_PROGRESS(Function_325(9)) + 0.25f);
						}
						if (((Function_345(9, 1) != 1 && Function_345(9, 2) != 1) && Function_345(9, 3) != 1) && Function_345(9, 4) != 1)
						{
							Global_56688[976].f_292 = 1;
							Function_419(&iLocal_13);
						}
						if (Global_56688[976].f_300 && Global_56688[976].f_292)
						{
							*uParam0 = 2;
						}
					}
					if (*uParam2 == GET_JOURNAL_ENTRY_PROGRESS(Function_325(9)))
					{
						SET_JOURNAL_ENTRY_PROGRESS(Function_325(9), *uParam2, false, 0);
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_417(*uParam3, 9, uParam1, 1, uParam0, 0, 1061, 250.0f, Function_418());
					Function_420(9);
					break;
			}
			break;
		
		case 0x00000001:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(9);
					Function_326(9, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(9), 0.0f, false, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					if (!Function_426(&iLocal_13))
					{
						if (((Global_56688[976][09].f_20 || Global_56688[976][69].f_20) || Global_56688[976][19].f_20) || Global_56688[976][29].f_20)
						{
							Function_424(&iLocal_13);
						}
					}
					else if (Function_421(&iLocal_13, 129600.0f))
					{
						Function_299(uParam3);
						Function_332(9, 1);
						Function_329(9);
						Function_260();
						Function_420(9);
						*uParam2 = 0.0f;
						Function_419(&iLocal_13);
					}
					else
					{
						if ((StackVal && Global_56688[976][09].f_24 != 0) && !Function_345(9, 1) != 1)
						{
							Function_416(0, 9);
							Function_330(9, 1, 1);
							*uParam2 = (GET_JOURNAL_ENTRY_PROGRESS(Function_325(9)) + 0.25f);
						}
						if ((StackVal && Global_56688[976][69].f_24 != 0) && !Function_345(9, 2) != 1)
						{
							Function_416(6, 9);
							Function_330(9, 2, 1);
							*uParam2 = (GET_JOURNAL_ENTRY_PROGRESS(Function_325(9)) + 0.25f);
						}
						if ((StackVal && Global_56688[976][19].f_24 != 0) && !Function_345(9, 3) != 1)
						{
							Function_416(1, 9);
							Function_330(9, 3, 1);
							*uParam2 = (GET_JOURNAL_ENTRY_PROGRESS(Function_325(9)) + 0.25f);
						}
						if ((StackVal && Global_56688[976][29].f_24 != 0) && !Function_345(9, 4) != 1)
						{
							Function_416(6, 9);
							Function_330(9, 4, 1);
							*uParam2 = (GET_JOURNAL_ENTRY_PROGRESS(Function_325(9)) + 0.25f);
						}
						if (((Function_345(9, 1) != 1 && Function_345(9, 2) != 1) && Function_345(9, 3) != 1) && Function_345(9, 4) != 1)
						{
							Global_56688[976].f_292 = 1;
						}
						if (Global_56688[976].f_300 && Global_56688[976].f_292)
						{
							*uParam0 = 2;
						}
					}
					if (*uParam2 == GET_JOURNAL_ENTRY_PROGRESS(Function_325(9)))
					{
						SET_JOURNAL_ENTRY_PROGRESS(Function_325(9), *uParam2, false, 0);
					}
					break;
				
				case 0x00000002:
					if (Function_415())
					{
						*uParam2 = 0.0f;
						Function_417(*uParam3, 9, uParam1, 2, uParam0, 0, 1063, 250.0f, Function_418());
						Function_420(9);
					}
					else
					{
						*uParam2 = 1.0f;
						Function_414(*uParam3, 9, uParam1, uParam0, 1063, 250.0f, Function_418());
						Function_420(9);
					}
					break;
			}
			break;
		
		case 0x00000002:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(9);
					Function_326(9, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(9), 0.0f, false, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					if (!Function_426(&iLocal_13))
					{
						if (((Global_56688[976][39].f_20 || Global_56688[976][79].f_20) || Global_56688[976][49].f_20) || Global_56688[976][59].f_20)
						{
							Function_424(&iLocal_13);
						}
					}
					else if (Function_421(&iLocal_13, 86400.0f))
					{
						Function_299(uParam3);
						Function_332(9, 1);
						Function_329(9);
						Function_260();
						Function_420(9);
						*uParam2 = 0.0f;
						Function_419(&iLocal_13);
					}
					else
					{
						if (Global_56688[976][39].f_24 && !Function_345(9, 1) != 1)
						{
							Function_330(9, 1, 1);
							*uParam2 = (GET_JOURNAL_ENTRY_PROGRESS(Function_325(9)) + 0.25f);
						}
						if (Global_56688[976][79].f_24 && !Function_345(9, 2) != 1)
						{
							Function_330(9, 2, 1);
							*uParam2 = (GET_JOURNAL_ENTRY_PROGRESS(Function_325(9)) + 0.25f);
						}
						if (Global_56688[976][49].f_24 && !Function_345(9, 3) != 1)
						{
							Function_330(9, 3, 1);
							*uParam2 = (GET_JOURNAL_ENTRY_PROGRESS(Function_325(9)) + 0.25f);
						}
						if (Global_56688[976][59].f_24 && !Function_345(9, 4) != 1)
						{
							Function_330(9, 4, 1);
							*uParam2 = (GET_JOURNAL_ENTRY_PROGRESS(Function_325(9)) + 0.25f);
						}
						if (((Function_345(9, 1) != 1 && Function_345(9, 2) != 1) && Function_345(9, 3) != 1) && Function_345(9, 4) != 1)
						{
							Global_56688[976].f_292 = 1;
							Function_419(&iLocal_13);
						}
						if (Global_56688[976].f_300 && Global_56688[976].f_292)
						{
							*uParam0 = 2;
						}
					}
					if (*uParam2 == GET_JOURNAL_ENTRY_PROGRESS(Function_325(9)))
					{
						SET_JOURNAL_ENTRY_PROGRESS(Function_325(9), *uParam2, false, 0);
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_417(*uParam3, 9, uParam1, 3, uParam0, 0, 1062, 250.0f, Function_418());
					Function_420(9);
					break;
			}
			break;
		
		case 0x00000003:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(9);
					Function_326(9, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(9), 0.0f, false, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					if (!Function_426(&iLocal_13))
					{
						if (((Global_56688[976][39].f_20 || Global_56688[976][79].f_20) || Global_56688[976][49].f_20) || Global_56688[976][59].f_20)
						{
							Function_424(&iLocal_13);
						}
					}
					else
					{
						if (Function_421(&iLocal_13, 129600.0f))
						{
							Function_299(uParam3);
							Function_332(9, 1);
							Function_329(9);
							Function_260();
							Function_420(9);
							*uParam2 = 0.0f;
							Function_419(&iLocal_13);
						}
						else
						{
							if ((StackVal && Global_56688[976][39].f_24 != 0) && !Function_345(9, 1) != 1)
							{
								Function_416(3, 9);
								Function_330(9, 1, 1);
								*uParam2 = (GET_JOURNAL_ENTRY_PROGRESS(Function_325(9)) + 0.25f);
							}
							if ((StackVal && Global_56688[976][79].f_24 != 0) && !Function_345(9, 2) != 1)
							{
								Function_416(7, 9);
								Function_330(9, 2, 1);
								*uParam2 = (GET_JOURNAL_ENTRY_PROGRESS(Function_325(9)) + 0.25f);
							}
							if ((StackVal && Global_56688[976][49].f_24 != 0) && !Function_345(9, 3) != 1)
							{
								Function_416(4, 9);
								Function_330(9, 3, 1);
								*uParam2 = (GET_JOURNAL_ENTRY_PROGRESS(Function_325(9)) + 0.25f);
							}
							if ((StackVal && Global_56688[976][59].f_24 != 0) && !Function_345(9, 4) != 1)
							{
								Function_416(5, 9);
								Function_330(9, 4, 1);
								*uParam2 = (GET_JOURNAL_ENTRY_PROGRESS(Function_325(9)) + 0.25f);
							}
							if (((Function_345(9, 1) != 1 && Function_345(9, 2) != 1) && Function_345(9, 3) != 1) && Function_345(9, 4) != 1)
							{
								Global_56688[976].f_292 = 1;
							}
							if (Global_56688[976].f_300 && Global_56688[976].f_292)
							{
								*uParam0 = 2;
							}
						}
						if (*uParam2 == GET_JOURNAL_ENTRY_PROGRESS(Function_325(9)))
						{
							SET_JOURNAL_ENTRY_PROGRESS(Function_325(9), *uParam2, false, 0);
						}
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_414(*uParam3, 9, uParam1, uParam0, 1064, 250.0f, Function_418());
					Function_420(9);
					break;
			}
			break;
	}
}

void Function_414(var uParam0, bool bParam1, var uParam2, var uParam3, int iParam4, bool bParam5, bool bParam6) //Position: 0x1B8F5 / 112885
{
	bool bVar0;
	
	Function_299(&uParam0);
	Function_332(bParam1, 1);
	*uParam2 = 10;
	*uParam3 = 2;
	if (iParam4 != 4294967295)
	{
		Function_357(iParam4);
	}
	Function_321(bParam1);
	if (!IS_STRING_VALID(bParam6))
	{
		bParam6 = "challenge_04_128";
	}
	memcpy(&bVar0, StackVal, StackVal, StackVal, StackVal, StackVal, Function_323(bParam1), 4);
	Function_359(&bVar0, CEIL(bParam5), bParam6);
	Function_331(bParam1, 4);
	Function_276();
}

bool Function_415() //Position: 0x1B95E / 112990
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_416(int iParam0, bool bParam1) //Position: 0x1B96D / 113005
{
	Global_56688[bParam176][iParam09] = 4294967294;
	Global_56688[bParam176][iParam09].f_4 = 0.0f;
	Global_56688[bParam176][iParam09].f_8 = 0;
	Global_56688[bParam176][iParam09].f_20 = 0;
	Global_56688[bParam176][iParam09].f_24 = 0;
	return;
}

void Function_417(var uParam0, int iParam1, var uParam2, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7, bool bParam8) //Position: 0x1B9B9 / 113081
{
	var uVar0;
	
	Function_299(&uParam0);
	Function_332(iParam1, 1);
	SET_JOURNAL_ENTRY_PROGRESS(Function_325(iParam1), 0.0f, false, 0);
	Function_326(iParam1, 0);
	if (!IS_STRING_VALID(bParam8))
	{
		bParam8 = "challenge_04_128";
	}
	memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, Function_323(iParam1), 4);
	Function_359(&uVar0, CEIL(bParam7), bParam8);
	*uParam2 = iParam3;
	*uParam4 = iParam5;
	if (iParam6 != 4294967295)
	{
		Function_357(iParam6);
	}
	Function_331(iParam1, 4);
	Function_276();
}

bool Function_418() //Position: 0x1BA2F / 113199
{
	return "challenge_05lvl2_128";
}

void Function_419(int iParam0) //Position: 0x1BA4C / 113228
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

void Function_420(int iParam0) //Position: 0x1BA60 / 113248
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

bool Function_421(int iParam0, float fParam1) //Position: 0x1BAE0 / 113376
{
	if (Function_426(iParam0))
	{
		if (Function_422(iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_422(int iParam0) //Position: 0x1BAFC / 113404
{
	if (Function_426(iParam0))
	{
		if (Function_423(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_423(int iParam0) //Position: 0x1BBC4 / 113604
{
	return Function_9(*iParam0, 2);
}

void Function_424(int iParam0) //Position: 0x1BBD1 / 113617
{
	Function_425(iParam0, 0.0f);
	return;
}

void Function_425(int iParam0, float fParam1) //Position: 0x1BBDD / 113629
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_125(iParam0, 1);
	Function_94(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

bool Function_426(int iParam0) //Position: 0x1BBFE / 113662
{
	return Function_9(*iParam0, 1);
}

void Function_427(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x1BC0B / 113675
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
					Function_329(8);
					if (Global_83864.f_1264 > 17)
					{
						*uParam0 = 1;
					}
					break;
				
				case 0x00000001:
					if (!Function_345(8, 1) != 1)
					{
						if (StackVal && Global_56688[876][09].f_24 != 0)
						{
							if (!Function_345(8, 2) != 1)
							{
								SET_JOURNAL_ENTRY_PROGRESS(Function_325(8), 0.5f, false, 0);
							}
							Function_416(0, 8);
							Function_330(8, 1, 1);
						}
					}
					if (!Function_345(8, 2) != 1)
					{
						if (StackVal && Global_56688[876][69].f_24 != 0)
						{
							if (!Function_345(8, 1) != 1)
							{
								SET_JOURNAL_ENTRY_PROGRESS(Function_325(8), 0.5f, false, 0);
							}
							Function_416(6, 8);
							Function_330(8, 2, 1);
						}
					}
					if (Function_345(8, 1) != 1 && Function_345(8, 2) != 1)
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
					Function_417(*uParam3, 8, uParam1, 1, uParam0, 0, 1036, 250.0f, Function_418());
					Function_420(8);
					break;
			}
			break;
		
		case 0x00000001:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(8);
					Function_326(8, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(8), 0.0f, false, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					if (!Function_345(8, 1) != 1)
					{
						if (StackVal && Global_56688[876][59].f_24 != 0)
						{
							if (GET_JOURNAL_ENTRY_PROGRESS(Function_325(8)) != 0.0f)
							{
								SET_JOURNAL_ENTRY_PROGRESS(Function_325(8), 0.5f, false, 0);
							}
							Function_416(5, 8);
							Function_330(8, 1, 1);
						}
					}
					if (!Function_345(8, 2) != 1)
					{
						if (StackVal && Global_56688[876][49].f_24 != 0)
						{
							if (GET_JOURNAL_ENTRY_PROGRESS(Function_325(8)) != 0.0f)
							{
								SET_JOURNAL_ENTRY_PROGRESS(Function_325(8), 0.5f, false, 0);
							}
							Function_416(4, 8);
							Function_330(8, 2, 1);
						}
					}
					if (Function_345(8, 1) != 1 && Function_345(8, 2) != 1)
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
					Function_417(*uParam3, 8, uParam1, 2, uParam0, 0, 1037, 250.0f, Function_418());
					Function_420(8);
					break;
			}
			break;
		
		case 0x00000002:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(8);
					Function_326(8, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(8), 0.0f, false, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					if (!Function_345(8, 1) != 1)
					{
						if (StackVal && Global_56688[876][29].f_24 != 0)
						{
							if (GET_JOURNAL_ENTRY_PROGRESS(Function_325(8)) != 0.0f)
							{
								SET_JOURNAL_ENTRY_PROGRESS(Function_325(8), 0.5f, false, 0);
							}
							Function_416(2, 8);
							Function_330(8, 1, 1);
						}
					}
					if (!Function_345(8, 2) != 1)
					{
						if (StackVal && Global_56688[876][19].f_24 != 0)
						{
							if (GET_JOURNAL_ENTRY_PROGRESS(Function_325(8)) != 0.0f)
							{
								SET_JOURNAL_ENTRY_PROGRESS(Function_325(8), 0.5f, false, 0);
							}
							Function_416(1, 8);
							Function_330(8, 2, 1);
						}
					}
					if (Function_345(8, 1) != 1 && Function_345(8, 2) != 1)
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
					Function_417(*uParam3, 8, uParam1, 3, uParam0, 0, 1039, 250.0f, Function_418());
					Function_420(8);
					break;
			}
			break;
		
		case 0x00000003:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(8);
					Function_326(8, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(8), 0.0f, false, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					if (Global_56688[876][49].f_20 && Function_345(8, 1) > 1)
					{
						Function_330(8, 1, 1);
					}
					iVar1 = Function_274(2, uParam3, 1);
					if (iVar1 >= 0)
					{
						iVar0 = 0;
						while (Function_273(uParam3, &iVar0, &bVar2))
						{
							if (IS_OBJECT_VALID(bVar2))
							{
								if ((((!Function_272(bVar2) != 24 && !Function_272(bVar2) != 23) && !Function_272(bVar2) != 25) && !Function_272(bVar2) != 22) && !Function_272(bVar2) != 29)
								{
									Function_299(uParam3);
									Function_260();
									Function_332(8, 1);
									Function_420(8);
									Function_329(8);
									*uParam2 = 0.0f;
								}
								else
								{
									Function_343(uParam3, &bVar2);
									iVar0 = (iVar0 - 1);
								}
							}
						}
					}
					if (Global_56688[876][49].f_24)
					{
						Function_416(4, 8);
						Function_330(8, 1, 2);
					}
					if (Function_345(8, 1) == 2)
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
					Function_417(*uParam3, 8, uParam1, 4, uParam0, 0, 1040, 250.0f, Function_418());
					Function_420(8);
					break;
			}
			break;
		
		case 0x00000004:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(8);
					Function_326(8, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(8), 0.0f, false, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					if (Global_56688[876][39].f_20 && Function_345(8, 1) > 1)
					{
						Function_330(8, 1, 1);
					}
					iVar1 = Function_274(2, uParam3, 1);
					if (iVar1 >= 0)
					{
						iVar0 = 0;
						while (Function_273(uParam3, &iVar0, &bVar2))
						{
							if (IS_OBJECT_VALID(bVar2))
							{
								if ((((!Function_272(bVar2) != 24 && !Function_272(bVar2) != 23) && !Function_272(bVar2) != 25) && !Function_272(bVar2) != 22) && !Function_272(bVar2) != 29)
								{
									Function_299(uParam3);
									Function_260();
									Function_332(8, 1);
									Function_420(8);
									Function_329(8);
									*uParam2 = 0.0f;
								}
								else
								{
									Function_343(uParam3, &bVar2);
									iVar0 = (iVar0 - 1);
								}
							}
						}
					}
					if (Global_56688[876][39].f_24)
					{
						Function_416(4, 8);
						Function_330(8, 1, 2);
					}
					if (Function_345(8, 1) == 2)
					{
						Global_56688[876].f_292 = 1;
					}
					if (Global_56688[876].f_300 && Global_56688[876].f_292)
					{
						*uParam0 = 2;
					}
					break;
				
				case 0x00000002:
					if (Function_415())
					{
						*uParam2 = 0.0f;
						Function_417(*uParam3, 8, uParam1, 5, uParam0, 0, 1041, 250.0f, Function_418());
						Function_420(8);
					}
					else
					{
						*uParam2 = 1.0f;
						Function_414(*uParam3, 8, uParam1, uParam0, 1041, 250.0f, Function_418());
						Function_420(8);
					}
					break;
			}
			break;
		
		case 0x00000005:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(8);
					Function_326(8, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(8), 0.0f, false, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					if (!Function_345(8, 1) != 1)
					{
						if (StackVal && Global_56688[876][39].f_24 != 0)
						{
							if (GET_JOURNAL_ENTRY_PROGRESS(Function_325(8)) != 0.0f)
							{
								SET_JOURNAL_ENTRY_PROGRESS(Function_325(8), 0.5f, false, 0);
							}
							Function_416(3, 8);
							Function_330(8, 1, 1);
						}
					}
					if (!Function_345(8, 2) != 1)
					{
						if (StackVal && Global_56688[876][79].f_24 != 0)
						{
							if (GET_JOURNAL_ENTRY_PROGRESS(Function_325(8)) != 0.0f)
							{
								SET_JOURNAL_ENTRY_PROGRESS(Function_325(8), 0.5f, false, 0);
							}
							Function_416(7, 8);
							Function_330(8, 2, 1);
						}
					}
					if (Function_345(8, 1) != 1 && Function_345(8, 2) != 1)
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
					Function_414(*uParam3, 8, uParam1, uParam0, 1038, 250.0f, Function_418());
					Function_420(8);
					break;
			}
			break;
	}
}

void Function_428(var uParam0, var uParam1, int iParam2, var uParam3) //Position: 0x1C429 / 115753
{
	switch (*uParam1)
	{
		case 0x00000000:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(7);
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
					Function_417(*uParam3, 7, uParam1, 1, uParam0, 0, 1031, 250.0f, Function_429());
					Function_420(7);
					break;
			}
			break;
		
		case 0x00000001:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(7);
					Function_326(7, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(7), 0.0f, false, 0);
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
					Function_417(*uParam3, 7, uParam1, 2, uParam0, 0, 1032, 250.0f, Function_429());
					Function_420(7);
					break;
			}
			break;
		
		case 0x00000002:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(7);
					Function_326(7, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(7), 0.0f, false, 0);
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
					Function_417(*uParam3, 7, uParam1, 3, uParam0, 0, 1033, 250.0f, Function_429());
					Function_420(7);
					break;
			}
			break;
		
		case 0x00000003:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(7);
					Function_326(7, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(7), 0.0f, false, 0);
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
					Function_417(*uParam3, 7, uParam1, 4, uParam0, 0, 1034, 250.0f, Function_429());
					Function_420(7);
					break;
			}
			break;
		
		case 0x00000004:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(7);
					Function_326(7, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(7), 0.0f, false, 0);
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
					Function_417(*uParam3, 7, uParam1, 5, uParam0, 0, 1065, 250.0f, Function_429());
					Function_420(7);
					break;
			}
			break;
		
		case 0x00000005:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(7);
					Function_326(7, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(7), 0.0f, false, 0);
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
					Function_417(*uParam3, 7, uParam1, 6, uParam0, 0, 1066, 250.0f, Function_429());
					Function_420(7);
					break;
			}
			break;
		
		case 0x00000006:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(7);
					Function_326(7, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(7), 0.0f, false, 0);
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
					if (Function_415())
					{
						Function_417(*uParam3, 7, uParam1, 7, uParam0, 0, 1067, 250.0f, Function_429());
						Function_420(7);
					}
					else
					{
						Function_414(*uParam3, 7, uParam1, uParam0, 1067, 250.0f, Function_429());
						Function_420(7);
					}
					Function_357(1035);
					break;
			}
			break;
		
		case 0x00000007:
			if (Function_415())
			{
				switch (*uParam0)
				{
					case 0x00000000:
						Function_329(7);
						Function_326(7, 0);
						SET_JOURNAL_ENTRY_PROGRESS(Function_325(7), 0.0f, false, 0);
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
						Function_414(*uParam3, 7, uParam1, uParam0, 1068, 250.0f, Function_429());
						Function_420(7);
						break;
					}
			}
			break;
	}
}

bool Function_429() //Position: 0x1C8D2 / 116946
{
	return "challenge_05_128";
}

void Function_430(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x1C8EB / 116971
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
					Function_329(6);
					if (Global_83864.f_1264 > 13)
					{
						Function_366(6, 1, 265);
						*uParam0 = 1;
					}
					break;
				
				case 0x00000001:
					fVar6 = Function_337(6);
					bVar0 = Function_370((Function_112(265) - Function_336(6, 1, 0)), 6, 1);
					if (bVar0 <= 8.0f)
					{
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = (bVar0 / 8.0f);
						if (*uParam2 == fVar6)
						{
							Function_335(6, *uParam2, 1, ROUND(bVar0), 4294967295, 4294967295, 21);
						}
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_417(*uParam3, 6, uParam1, 1, uParam0, 0, 1026, 250.0f, Function_431());
					break;
			}
			break;
		
		case 0x00000001:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(6);
					Function_326(6, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(6), 0.0f, false, 0);
					Function_366(6, 1, 269);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar6 = Function_337(6);
					bVar0 = Function_370((Function_112(269) - Function_336(6, 1, 0)), 6, 1);
					if (bVar0 <= 10.0f)
					{
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = (bVar0 / 10.0f);
						if (*uParam2 == fVar6)
						{
							Function_335(6, *uParam2, 1, ROUND(bVar0), 4294967295, 4294967295, 21);
						}
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_417(*uParam3, 6, uParam1, 2, uParam0, 0, 1027, 250.0f, Function_431());
					break;
			}
			break;
		
		case 0x00000002:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(6);
					Function_326(6, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(6), 0.0f, false, 0);
					Function_366(6, 1, 266);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar6 = Function_337(6);
					bVar0 = Function_370((Function_112(266) - Function_336(6, 1, 0)), 6, 1);
					if (bVar0 <= 12.0f)
					{
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = (bVar0 / 12.0f);
						if (*uParam2 == fVar6)
						{
							Function_335(6, *uParam2, 1, ROUND(bVar0), 4294967295, 4294967295, 21);
						}
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_417(*uParam3, 6, uParam1, 3, uParam0, 0, 1028, 250.0f, Function_431());
					break;
			}
			break;
		
		case 0x00000003:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(6);
					Function_326(6, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(6), 0.0f, false, 0);
					Function_366(6, 1, 267);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar6 = Function_337(6);
					bVar0 = Function_370((Function_112(267) - Function_336(6, 1, 0)), 6, 1);
					if (bVar0 <= 15.0f)
					{
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = (bVar0 / 15.0f);
						if (*uParam2 == fVar6)
						{
							Function_335(6, *uParam2, 1, ROUND(bVar0), 4294967295, 4294967295, 21);
						}
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_417(*uParam3, 6, uParam1, 4, uParam0, 0, 1029, 250.0f, Function_431());
					break;
			}
			break;
		
		case 0x00000004:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(6);
					Function_326(6, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(6), 0.0f, false, 0);
					Function_366(6, 1, 263);
					Function_366(6, 2, 264);
					Function_366(6, 3, 265);
					Function_366(6, 4, 266);
					Function_366(6, 5, 267);
					Function_366(6, 6, 268);
					Function_366(6, 7, 269);
					Function_366(6, 8, 270);
					Function_366(6, 9, 271);
					Function_366(6, 10, 272);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar6 = Function_337(6);
					iVar4 = 263;
					bVar5 = true;
					bVar0 = 0.0f;
					while (iVar4 < 272)
					{
						fVar1 = Function_112(iVar4);
						fVar2 = Function_336(6, bVar5, 0);
						if (iVar4 == 270)
						{
							if (Function_370((fVar1 - fVar2), 6, bVar5) < 0.0f)
							{
								if (Function_370((fVar1 - fVar2), 6, bVar5) >= 10.0f)
								{
									fVar3 = (fVar3 + Function_370((fVar1 - fVar2), 6, bVar5));
								}
								else
								{
									fVar3 = (fVar3 + 10.0f);
								}
							}
						}
						else if (Function_370((fVar1 - fVar2), 6, bVar5) < 0.0f)
						{
							if (Function_370((fVar1 - fVar2), 6, bVar5) >= 2.0f)
							{
								fVar3 = (fVar3 + Function_370((fVar1 - fVar2), 6, bVar5));
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
							SET_JOURNAL_ENTRY_PROGRESS(Function_325(6), *uParam2, false, 0);
							iVar4 = 270;
							bVar5 = 8;
							fVar1 = Function_112(iVar4);
							fVar2 = Function_336(6, bVar5, 1);
							bVar0 = (fVar1 - fVar2);
							if (bVar0 < 10.0f)
							{
								bVar0 = 10.0f;
							}
							strcpy(&cVar25, "AM_VS", 24);
							cVar7 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_323(6) };
							stradd(&cVar7, "_info_mp", 24);
							stradd(&cVar7, INT_TO_STRING(bVar5), 24);
							strcpy(&cVar13, "AM_num", 24);
							stradd(&cVar13, INT_TO_STRING(bVar5 + 21), 24);
							strcpy(&cVar19, "AM_herbname", 24);
							stradd(&cVar19, INT_TO_STRING(bVar5), 24);
							UI_SET_STRING(&cVar13, INT_TO_STRING(ROUND(bVar0)));
							UI_SET_STRING(&cVar19, UI_GET_STRING(&cVar25));
							PREPEND_JOURNAL_ENTRY_DETAIL(Function_325(6), &cVar7, 2, 2, false);
							iVar4 = 263;
							bVar5 = true;
							while (iVar4 <= 273)
							{
								fVar1 = Function_112(iVar4);
								fVar2 = Function_336(6, bVar5, 0);
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
								cVar7 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_323(6) };
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
									PREPEND_JOURNAL_ENTRY_DETAIL(Function_325(6), &cVar7, 2, 2, false);
								}
								bVar5++;
								iVar4++;
							}
						}
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_414(*uParam3, 6, uParam1, uParam0, 1030, 250.0f, Function_431());
					break;
			}
			break;
	}
}

bool Function_431() //Position: 0x1CFE7 / 118759
{
	return "challenge_03lvl2_128";
}

void Function_432(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x1D004 / 118788
{
	bool bVar0;
	float fVar1;
	
	switch (*uParam1)
	{
		case 0x00000000:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(2);
					if (Global_83864.f_1264 > 2)
					{
						Function_366(2, 1, 272);
						*uParam0 = 1;
					}
					break;
				
				case 0x00000001:
					fVar1 = Function_337(2);
					bVar0 = Function_370((Function_112(272) - Function_336(2, 1, 0)), 2, 1);
					if (bVar0 <= 6.0f)
					{
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = (bVar0 / 6.0f);
						if (*uParam2 == fVar1)
						{
							Function_335(2, *uParam2, 1, ROUND(bVar0), 4294967295, 4294967295, 0);
						}
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_417(*uParam3, 2, uParam1, 1, uParam0, 0, 1021, 250.0f, Function_433());
					break;
			}
			break;
		
		case 0x00000001:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(2);
					Function_326(2, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(2), 0.0f, false, 0);
					Function_366(2, 1, 264);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar1 = Function_337(2);
					bVar0 = Function_370((Function_112(264) - Function_336(2, 1, 0)), 2, 1);
					if (bVar0 <= 6.0f)
					{
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = (bVar0 / 6.0f);
						if (*uParam2 == fVar1)
						{
							Function_335(2, *uParam2, 1, ROUND(bVar0), 4294967295, 4294967295, 0);
						}
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_417(*uParam3, 2, uParam1, 2, uParam0, 0, 1022, 250.0f, Function_433());
					break;
			}
			break;
		
		case 0x00000002:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(2);
					Function_326(2, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(2), 0.0f, false, 0);
					Function_366(2, 1, 271);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar1 = Function_337(2);
					bVar0 = Function_370((Function_112(271) - Function_336(2, 1, 0)), 2, 1);
					if (bVar0 <= 4.0f)
					{
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = (bVar0 / 4.0f);
						if (*uParam2 == fVar1)
						{
							Function_335(2, *uParam2, 1, ROUND(bVar0), 4294967295, 4294967295, 0);
						}
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_417(*uParam3, 2, uParam1, 3, uParam0, 0, 1023, 250.0f, Function_433());
					break;
			}
			break;
		
		case 0x00000003:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(2);
					Function_326(2, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(2), 0.0f, false, 0);
					Function_366(2, 1, 263);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar1 = Function_337(2);
					bVar0 = Function_370((Function_112(263) - Function_336(2, 1, 0)), 2, 1);
					if (bVar0 <= 8.0f)
					{
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = (bVar0 / 8.0f);
						if (*uParam2 == fVar1)
						{
							Function_335(2, *uParam2, 1, ROUND(bVar0), 4294967295, 4294967295, 0);
						}
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_417(*uParam3, 2, uParam1, 4, uParam0, 0, 1024, 250.0f, Function_433());
					break;
			}
			break;
		
		case 0x00000004:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(2);
					Function_326(2, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(2), 0.0f, false, 0);
					Function_366(2, 1, 268);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar1 = Function_337(2);
					bVar0 = Function_370((Function_112(268) - Function_336(2, 1, 0)), 2, 1);
					if (bVar0 <= 7.0f)
					{
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = (bVar0 / 7.0f);
						if (*uParam2 == fVar1)
						{
							Function_335(2, *uParam2, 1, ROUND(bVar0), 4294967295, 4294967295, 0);
						}
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_414(*uParam3, 2, uParam1, uParam0, 1025, 250.0f, Function_433());
					break;
			}
			break;
	}
}

bool Function_433() //Position: 0x1D381 / 119681
{
	return "challenge_03_128";
}

void Function_434(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x1D39A / 119706
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
					Function_329(5);
					if (Global_83864.f_1264 > 11)
					{
						Function_330(5, 2, 0);
						*uParam0 = 1;
					}
					break;
				
				case 0x00000001:
					fVar3 = Function_337(5);
					Function_264(2, "BEAR", uParam3, 1, 0);
					bVar1 = Function_344(uParam3, 5);
					if (bVar1 >= 0)
					{
						iVar0 = 0;
						while (Function_273(uParam3, &iVar0, &bVar2))
						{
							if (IS_OBJECT_VALID(bVar2))
							{
								if (Function_272(bVar2) != 22 && Function_345(5, 2) != 0)
								{
									Function_330(5, 2, 1);
								}
								else if ((Function_345(5, 2) != 0 && Function_344(uParam3, 5) != 5) && Function_272(bVar2) == 22)
								{
									if (iVar0 == 5)
									{
										Function_343(uParam3, &bVar2);
										iVar0 = (iVar0 - 1);
									}
								}
							}
						}
					}
					bVar1 = Function_344(uParam3, 5);
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
							Function_335(5, *uParam2, 1, bVar1, 4294967295, 4294967295, 15);
						}
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_417(*uParam3, 5, uParam1, 1, uParam0, 0, 1016, 250.0f, Function_435());
					break;
			}
			break;
		
		case 0x00000001:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(5);
					Function_326(5, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(5), 0.0f, false, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar3 = Function_337(5);
					bVar1 = Function_342(2, 1072, uParam3, 1);
					bVar1 = Function_344(uParam3, 5);
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
							SET_JOURNAL_ENTRY_PROGRESS(Function_325(5), *uParam2, false, 0);
						}
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_417(*uParam3, 5, uParam1, 2, uParam0, 0, 1017, 250.0f, Function_435());
					break;
			}
			break;
		
		case 0x00000002:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(5);
					Function_326(5, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(5), 0.0f, false, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar3 = Function_337(5);
					bVar1 = Function_342(2, 1077, uParam3, 1);
					bVar1 = Function_344(uParam3, 5);
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
							SET_JOURNAL_ENTRY_PROGRESS(Function_325(5), *uParam2, false, 0);
						}
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_417(*uParam3, 5, uParam1, 3, uParam0, 0, 1018, 250.0f, Function_435());
					break;
			}
			break;
		
		case 0x00000003:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(5);
					Function_326(5, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(5), 0.0f, false, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar3 = Function_337(5);
					bVar1 = Function_342(2, 1094, uParam3, 1);
					bVar1 = Function_344(uParam3, 5);
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
							SET_JOURNAL_ENTRY_PROGRESS(Function_325(5), *uParam2, false, 0);
						}
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_417(*uParam3, 5, uParam1, 4, uParam0, 0, 1019, 250.0f, Function_435());
					break;
			}
			break;
		
		case 0x00000004:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(5);
					Function_326(5, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(5), 0.0f, false, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar3 = Function_337(5);
					bVar1 = Function_342(2, 1105, uParam3, 1);
					bVar1 = Function_344(uParam3, 5);
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
							SET_JOURNAL_ENTRY_PROGRESS(Function_325(5), *uParam2, false, 0);
						}
					}
					break;
				
				case 0x00000002:
					*uParam2 = 1.0f;
					Function_414(*uParam3, 5, uParam1, uParam0, 1020, 250.0f, Function_435());
					break;
			}
			break;
	}
}

bool Function_435() //Position: 0x1D7FC / 120828
{
	return "challenge_02lvl2_128";
}

void Function_436(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x1D819 / 120857
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
					Function_329(1);
					if (Global_83864.f_1264 > 1)
					{
						Function_366(1, 1, 326);
						*uParam0 = 1;
					}
					break;
				
				case 0x00000001:
					fVar4 = Function_337(1);
					bVar5 = Function_370((Function_112(326) - Function_336(1, 1, 0)), 1, 1);
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
							Function_335(1, *uParam2, 1, bVar1, 4294967295, 4294967295, 12);
						}
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_417(*uParam3, 1, uParam1, 1, uParam0, 0, 1011, 250.0f, Function_437());
					break;
			}
			break;
		
		case 0x00000001:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(1);
					Function_326(1, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(1), 0.0f, false, 0);
					Function_366(1, 1, 324);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar4 = Function_337(1);
					bVar5 = Function_370((Function_112(324) - Function_336(1, 1, 0)), 1, 1);
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
							Function_335(1, *uParam2, 1, bVar1, 4294967295, 4294967295, 12);
						}
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_417(*uParam3, 1, uParam1, 2, uParam0, 0, 1012, 250.0f, Function_437());
					break;
			}
			break;
		
		case 0x00000002:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(1);
					Function_326(1, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(1), 0.0f, false, 0);
					Function_330(1, 2, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar4 = Function_337(1);
					Function_264(2, "WOLF", uParam3, 1, 0);
					bVar1 = Function_344(uParam3, 1);
					if (bVar1 >= 0)
					{
						iVar0 = 0;
						while (Function_273(uParam3, &iVar0, &bVar3))
						{
							if (IS_OBJECT_VALID(bVar3))
							{
								if (Function_272(bVar3) != 22 && Function_345(1, 2) != 0)
								{
									Function_330(1, 2, 1);
								}
								else if ((Function_345(1, 2) != 0 && Function_344(uParam3, 1) != 5) && Function_272(bVar3) == 22)
								{
									if (iVar0 == 5)
									{
										Function_343(uParam3, &bVar3);
										iVar0 = (iVar0 - 1);
									}
								}
							}
						}
					}
					bVar1 = Function_344(uParam3, 1);
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
							Function_335(1, *uParam2, 1, bVar1, 4294967295, 4294967295, 12);
						}
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_417(*uParam3, 1, uParam1, 3, uParam0, 0, 1013, 250.0f, Function_437());
					break;
			}
			break;
		
		case 0x00000003:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(1);
					Function_326(1, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(1), 0.0f, false, 0);
					Function_330(1, 2, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar4 = Function_337(1);
					Function_264(2, "COUGAR", uParam3, 1, 0);
					bVar1 = Function_344(uParam3, 1);
					if (bVar1 >= 0)
					{
						iVar0 = 0;
						while (Function_273(uParam3, &iVar0, &bVar3))
						{
							if (IS_OBJECT_VALID(bVar3))
							{
								if (Function_272(bVar3) != 22 && Function_345(1, 2) != 0)
								{
									Function_330(1, 2, 1);
								}
								else if ((Function_345(1, 2) != 0 && Function_344(uParam3, 1) != 5) && Function_272(bVar3) == 22)
								{
									if (iVar0 == 5)
									{
										Function_343(uParam3, &bVar3);
										iVar0 = (iVar0 - 1);
									}
								}
							}
						}
					}
					bVar1 = Function_344(uParam3, 1);
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
							Function_335(1, *uParam2, 1, bVar1, 4294967295, 4294967295, 12);
						}
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_417(*uParam3, 1, uParam1, 4, uParam0, 0, 1014, 250.0f, Function_437());
					break;
			}
			break;
		
		case 0x00000004:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(1);
					Function_326(1, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(1), 0.0f, false, 0);
					Function_366(1, 1, 330);
					Function_366(1, 2, 317);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar4 = Function_337(1);
					bVar5 = Function_370((Function_112(330) - Function_336(1, 1, 0)), 1, 1);
					bVar6 = Function_370((Function_112(317) - Function_336(1, 2, 0)), 1, 2);
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
							Function_335(1, *uParam2, 1, bVar1, bVar2, 4294967295, 12);
						}
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_414(*uParam3, 1, uParam1, uParam0, 1015, 250.0f, Function_437());
					break;
			}
			break;
	}
}

bool Function_437() //Position: 0x1DD2A / 122154
{
	return "challenge_02_128";
}

void Function_438(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x1DD43 / 122179
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
					Function_329(4);
					if (Global_83864.f_1264 > 12)
					{
						*uParam0 = 1;
					}
					break;
				
				case 0x00000001:
					fVar6 = Function_337(4);
					bVar1 = Function_274(9, uParam3, 1);
					if (bVar1 >= 0)
					{
						iVar0 = (GET_OBJECTSET_SIZE(*uParam3) - bVar1);
						while (Function_273(uParam3, &iVar0, &bVar2))
						{
							if (IS_OBJECT_VALID(bVar2))
							{
								bVar4 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar2)));
								if (IS_ACTOR_VALID(bVar4))
								{
									if (IS_ACTOR_DEAD(bVar4))
									{
										Function_343(uParam3, &bVar2);
										iVar0 = (iVar0 - 1);
									}
									else if (DECOR_CHECK_EXIST(bVar2, "DroppedItem"))
									{
										bVar3 = DECOR_GET_OBJECT(bVar2, "DroppedItem");
										if (IS_OBJECT_VALID(bVar3))
										{
											if (GET_OBJECT_TYPE(bVar3) != 17)
											{
												Function_343(uParam3, &bVar2);
												iVar0 = (iVar0 - 1);
											}
										}
										else
										{
											Function_343(uParam3, &bVar2);
											iVar0 = (iVar0 - 1);
										}
									}
									else
									{
										Function_343(uParam3, &bVar2);
										iVar0 = (iVar0 - 1);
									}
								}
							}
						}
					}
					if (bVar1 < 0 && IntToFloat(Function_344(uParam3, 4)) > 2.0f)
					{
						Function_424(&iLocal_10);
					}
					bVar1 = false;
					bVar1 = Function_344(uParam3, 4);
					if (Function_426(&iLocal_10))
					{
						if (Function_422(&iLocal_10) > 6.0f)
						{
							if (IntToFloat(bVar1) <= 2.0f)
							{
								*uParam0 = 2;
								Function_419(&iLocal_10);
							}
							else
							{
								*uParam2 = (TO_FLOAT(bVar1) / 2.0f);
								if (*uParam2 == fVar6)
								{
									Function_335(4, *uParam2, 0, bVar1, 4294967295, 4294967295, 19);
								}
							}
						}
						else if (Function_421(&iLocal_10, 6.0f))
						{
							Function_299(uParam3);
							Function_332(4, 1);
							Function_329(4);
							*uParam2 = 0.0f;
							bVar1 = false;
							if (*uParam2 == fVar6)
							{
								Function_335(4, *uParam2, 0, bVar1, 4294967295, 4294967295, 19);
							}
							Function_419(&iLocal_10);
						}
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_417(*uParam3, 4, uParam1, 1, uParam0, 0, 1006, 250.0f, Function_442());
					break;
			}
			break;
		
		case 0x00000001:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(4);
					Function_326(4, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(4), 0.0f, false, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar6 = Function_337(4);
					bVar1 = (Function_274(9, uParam3, 1) + Function_274(11, uParam3, 1));
					if (bVar1 >= 0)
					{
						iVar0 = (GET_OBJECTSET_SIZE(*uParam3) - bVar1);
						while (Function_273(uParam3, &iVar0, &bVar2))
						{
							if (IS_OBJECT_VALID(bVar2))
							{
								bVar4 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar2)));
								if (IS_ACTOR_VALID(bVar4))
								{
									if (IS_ACTOR_DEAD(bVar4))
									{
										Function_343(uParam3, &bVar2);
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
												if (Function_345(4, 1) != 1)
												{
													Function_330(4, 1, 1);
													Global_63083 = GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar2));
												}
												else
												{
													Function_343(uParam3, &bVar2);
													iVar0 = (iVar0 - 1);
													Function_260();
												}
											}
											else if (GET_OBJECT_TYPE(bVar3) == 34)
											{
												if (Function_345(4, 1) == 1 || Global_63083 == GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar2)))
												{
													Function_343(uParam3, &bVar2);
													iVar0 = (iVar0 - 1);
													bVar1 = false;
													Function_260();
												}
											}
											else
											{
												LOG_ERROR("It's a WHAT???!!!");
												Function_343(uParam3, &bVar2);
												iVar0 = (iVar0 - 1);
											}
										}
										else
										{
											Function_343(uParam3, &bVar2);
											iVar0 = (iVar0 - 1);
										}
									}
									else
									{
										Function_343(uParam3, &bVar2);
										iVar0 = (iVar0 - 1);
									}
								}
								else
								{
									Function_343(uParam3, &bVar2);
									iVar0 = (iVar0 - 1);
								}
							}
						}
					}
					if (!Function_426(&iLocal_10) && Function_345(4, 1) != 1)
					{
						Function_424(&iLocal_10);
					}
					bVar1 = Function_344(uParam3, 4);
					if (Function_426(&iLocal_10))
					{
						if (Function_422(&iLocal_10) > 4.0f)
						{
							if (IntToFloat(bVar1) <= 2.0f)
							{
								*uParam0 = 2;
								Function_419(&iLocal_10);
							}
							else
							{
								*uParam2 = (TO_FLOAT(bVar1) / 2.0f);
								if (*uParam2 == fVar6)
								{
									SET_JOURNAL_ENTRY_PROGRESS(Function_325(4), *uParam2, false, 0);
								}
							}
						}
						else if (Function_421(&iLocal_10, 4.0f))
						{
							Function_299(uParam3);
							Function_332(4, 1);
							Function_260();
							*uParam2 = 0.0f;
							if (*uParam2 == fVar6)
							{
								SET_JOURNAL_ENTRY_PROGRESS(Function_325(4), *uParam2, false, 0);
							}
							Function_329(4);
							Function_419(&iLocal_10);
						}
					}
					else if (Function_344(uParam3, 4) < 0 || Function_345(4, 1) != 1)
					{
						Function_299(uParam3);
						Function_332(4, 1);
						Function_260();
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_417(*uParam3, 4, uParam1, 2, uParam0, 0, 1007, 250.0f, Function_442());
					break;
			}
			break;
		
		case 0x00000002:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(4);
					Function_326(4, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(4), 0.0f, false, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					if (Function_264(10, "BEAR", uParam3, 1, 0) < 0 || Function_264(10, "GrizzlyBear", uParam3, 1, 0) < 0)
					{
						while (Function_273(uParam3, &iVar0, &bVar2))
						{
							if (IS_OBJECT_VALID(bVar2))
							{
								if ((Function_272(bVar2) != 24 || Function_272(bVar2) != 25) || Function_272(bVar2) != 23)
								{
									Function_343(uParam3, &bVar2);
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
											Function_343(uParam3, &bVar2);
											iVar0 = (iVar0 - 1);
										}
										else if (DECOR_CHECK_EXIST(bVar4, "bearWounded"))
										{
											Function_343(uParam3, &bVar2);
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
					Function_299(uParam3);
					*uParam2 = 0.0f;
					Function_417(*uParam3, 4, uParam1, 3, uParam0, 0, 1008, 250.0f, Function_442());
					break;
			}
			break;
		
		case 0x00000003:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(4);
					Function_326(4, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(4), 0.0f, false, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar6 = Function_337(4);
					bVar1 = Function_274(9, uParam3, 1);
					if (bVar1 >= 0)
					{
						iVar0 = (GET_OBJECTSET_SIZE(*uParam3) - bVar1);
						while (Function_273(uParam3, &iVar0, &bVar2))
						{
							if (IS_OBJECT_VALID(bVar2))
							{
								bVar4 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar2)));
								bVar5 = GET_ACTOR_FROM_OBJECT(GET_EVENT_PERPETRATOR(GET_EVENT_FROM_OBJECT(bVar2)));
								if (IS_ACTOR_VALID(bVar4))
								{
									if (IS_ACTOR_DEAD(bVar4))
									{
										Function_343(uParam3, &bVar2);
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
														if (Function_441(GET_MOUNT(bVar5), 0) > 2.0f)
														{
															Function_343(uParam3, &bVar2);
															iVar0 = (iVar0 - 1);
														}
													}
													else
													{
														Function_343(uParam3, &bVar2);
														iVar0 = (iVar0 - 1);
													}
												}
												else
												{
													Function_343(uParam3, &bVar2);
													iVar0 = (iVar0 - 1);
												}
											}
											else
											{
												Function_343(uParam3, &bVar2);
												iVar0 = (iVar0 - 1);
											}
										}
										else
										{
											Function_343(uParam3, &bVar2);
											iVar0 = (iVar0 - 1);
										}
									}
									else
									{
										Function_343(uParam3, &bVar2);
										iVar0 = (iVar0 - 1);
									}
								}
							}
							else
							{
								Function_343(uParam3, &bVar2);
								iVar0 = (iVar0 - 1);
							}
						}
					}
					bVar1 = Function_344(uParam3, 4);
					if (IntToFloat(bVar1) <= 1.0f)
					{
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = (TO_FLOAT(bVar1) / 1.0f);
						if (*uParam2 == fVar6)
						{
							SET_JOURNAL_ENTRY_PROGRESS(Function_325(4), *uParam2, false, 0);
						}
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_417(*uParam3, 4, uParam1, 4, uParam0, 0, 1009, 250.0f, Function_442());
					break;
			}
			break;
		
		case 0x00000004:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(4);
					Function_326(4, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(4), 0.0f, false, 0);
					Function_330(4, 2, 4294967295);
					Function_330(4, 3, 4294967295);
					Function_330(4, 4, 4294967295);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar6 = Function_337(4);
					bVar1 = Function_264(2, "ANIMAL", uParam3, 1, 0);
					if (bVar1 >= 0)
					{
						iVar0 = (GET_OBJECTSET_SIZE(*uParam3) - bVar1);
						while (Function_273(uParam3, &iVar0, &bVar2))
						{
							if (IS_OBJECT_VALID(bVar2))
							{
								if (Function_272(bVar2) == 24)
								{
									Function_343(uParam3, &bVar2);
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
											Function_343(uParam3, &bVar2);
											iVar0 = (iVar0 - 1);
											bVar1 = false;
										}
										else if (Function_345(4, 2) == 4294967295)
										{
											if (ANIMAL_ACTOR_GET_SPECIES(bVar4) == Function_345(4, 3))
											{
												Function_343(uParam3, &bVar2);
												iVar0 = (iVar0 - 1);
												bVar1 = false;
											}
											else if (ANIMAL_ACTOR_GET_SPECIES(bVar4) == Function_345(4, 4))
											{
												Function_343(uParam3, &bVar2);
												iVar0 = (iVar0 - 1);
												bVar1 = false;
											}
											else
											{
												Function_330(4, 2, ANIMAL_ACTOR_GET_SPECIES(bVar4));
											}
										}
										else if (Function_345(4, 3) == 4294967295)
										{
											if (ANIMAL_ACTOR_GET_SPECIES(bVar4) == Function_345(4, 2))
											{
												Function_343(uParam3, &bVar2);
												iVar0 = (iVar0 - 1);
												bVar1 = false;
											}
											else if (ANIMAL_ACTOR_GET_SPECIES(bVar4) == Function_345(4, 4))
											{
												Function_343(uParam3, &bVar2);
												iVar0 = (iVar0 - 1);
												bVar1 = false;
											}
											else
											{
												Function_330(4, 3, ANIMAL_ACTOR_GET_SPECIES(bVar4));
											}
										}
										else if (Function_345(4, 4) == 4294967295)
										{
											if (ANIMAL_ACTOR_GET_SPECIES(bVar4) == Function_345(4, 3))
											{
												Function_343(uParam3, &bVar2);
												iVar0 = (iVar0 - 1);
												bVar1 = false;
											}
											else if (ANIMAL_ACTOR_GET_SPECIES(bVar4) == Function_345(4, 2))
											{
												Function_343(uParam3, &bVar2);
												iVar0 = (iVar0 - 1);
												bVar1 = false;
											}
											else
											{
												Function_330(4, 4, ANIMAL_ACTOR_GET_SPECIES(bVar4));
											}
										}
									}
								}
							}
						}
					}
					if (bVar1 >= 0)
					{
						Function_419(&iLocal_10);
						Function_424(&iLocal_10);
					}
					if (Function_421(&iLocal_10, 11.0f))
					{
						Function_330(4, 2, 4294967295);
						Function_330(4, 3, 4294967295);
						Function_330(4, 4, 4294967295);
						Function_299(uParam3);
						Function_419(&iLocal_10);
					}
					bVar1 = Function_344(uParam3, 4);
					if (IntToFloat(bVar1) <= 3.0f)
					{
						Function_439(4, 1);
						*uParam0 = 2;
						Function_299(uParam3);
						Function_332(4, 1);
					}
					else
					{
						*uParam2 = (TO_FLOAT(bVar1) / 3.0f);
						if (*uParam2 == fVar6)
						{
							Function_335(4, *uParam2, 1, bVar1, 4294967295, 4294967295, 19);
						}
					}
					break;
				
				case 0x00000002:
					*uParam2 = 1.0f;
					Function_414(*uParam3, 4, uParam1, uParam0, 1010, 250.0f, Function_442());
					break;
			}
			break;
	}
}

int Function_439(var uParam0, int iParam1) //Position: 0x1E7FB / 124923
{
	return Function_440(uParam0, iParam1, GET_CURRENT_GAME_TIME());
}

int Function_440(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1E80B / 124939
{
	char* cVar0[16];
	bool bVar4;
	
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_TIMERSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar4 = Function_258();
	if (IS_LAYOUTREF_VALID(bVar4))
	{
		return DECOR_SET_FLOAT(bVar4, &cVar0, bParam2);
	}
	LOG_ERROR("AM_STORE_TIMER: failed to store float value in slot");
	return 0;
}

float Function_441(bool bParam0, bool bParam1) //Position: 0x1E885 / 125061
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

bool Function_442() //Position: 0x1E8A4 / 125092
{
	return "challenge_01lvl2_128";
}

void Function_443(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x1E8C1 / 125121
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
					Function_329(0);
					if (Global_83864.f_1264 > 0)
					{
						if (!Function_328(0, 2))
						{
							Function_326(0, 0);
							Function_327(0, 2);
							SET_JOURNAL_ENTRY_PROGRESS(Function_325(0), 0.0f, false, 0);
						}
						*uParam0 = 1;
					}
					break;
				
				case 0x00000001:
					fVar4 = Function_337(0);
					bVar1 = Function_264(2, "FLYING_ANIMAL", uParam3, 1, 0);
					if (bVar1 >= 0)
					{
						iVar0 = 0;
						while (Function_273(uParam3, &iVar0, &bVar2))
						{
							if (IS_OBJECT_VALID(bVar2))
							{
								if (!Function_312(bVar2))
								{
									Function_343(uParam3, &bVar2);
									iVar0 = (iVar0 - 1);
								}
								else if ((Function_272(bVar2) != 24 || Function_272(bVar2) != 25) || Function_272(bVar2) != 23)
								{
									Function_343(uParam3, &bVar2);
									iVar0 = (iVar0 - 1);
								}
							}
						}
					}
					bVar1 = Function_344(uParam3, 0);
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
								Function_335(0, *uParam2, 1, bVar1, 4294967295, 4294967295, 10);
							}
						}
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_417(*uParam3, 0, uParam1, 1, uParam0, 0, 1001, 250.0f, Function_444());
					break;
			}
			break;
		
		case 0x00000001:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(0);
					Function_326(0, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(0), 0.0f, false, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar4 = Function_337(0);
					bVar1 = Function_264(2, "RABBIT", uParam3, 1, 0);
					if (bVar1 >= 0)
					{
						iVar0 = 0;
						while (Function_273(uParam3, &iVar0, &bVar2))
						{
							if (IS_OBJECT_VALID(bVar2))
							{
								if ((Function_272(bVar2) != 24 || Function_272(bVar2) != 25) || Function_272(bVar2) != 23)
								{
									Function_343(uParam3, &bVar2);
									iVar0 = (iVar0 - 1);
								}
							}
						}
					}
					bVar1 = Function_344(uParam3, 0);
					if (IntToFloat(bVar1) <= 5.0f)
					{
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = (TO_FLOAT(bVar1) / 5.0f);
						if (*uParam2 == fVar4)
						{
							Function_335(0, *uParam2, 1, bVar1, 4294967295, 4294967295, 10);
						}
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_417(*uParam3, 0, uParam1, 2, uParam0, 0, 1002, 250.0f, Function_444());
					break;
			}
			break;
		
		case 0x00000002:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(0);
					Function_326(0, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(0), 0.0f, false, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar4 = Function_337(0);
					bVar1 = Function_264(10, "_", uParam3, 1, 0);
					if (bVar1 >= 0)
					{
						iVar0 = 0;
						while (Function_273(uParam3, &iVar0, &bVar2))
						{
							if (IS_OBJECT_VALID(bVar2))
							{
								bVar3 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar2)));
								if (IS_ACTOR_VALID(bVar3))
								{
									if (!((GET_ACTOR_FACTION(bVar3) != 22 || GET_ACTOR_FACTION(bVar3) != 19) || (Global_3403 && (GET_ACTOR_FACTION(bVar3) != 8 || GET_ACTOR_FACTION(bVar3) != 10))))
									{
										Function_343(uParam3, &bVar2);
										iVar0 = (iVar0 - 1);
									}
								}
							}
						}
					}
					bVar1 = Function_344(uParam3, 0);
					if (IntToFloat(bVar1) <= 10.0f)
					{
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = (TO_FLOAT(bVar1) / 10.0f);
						if (*uParam2 == fVar4)
						{
							Function_335(0, *uParam2, 1, bVar1, 4294967295, 4294967295, 10);
						}
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_417(*uParam3, 0, uParam1, 3, uParam0, 0, 1003, 250.0f, Function_444());
					break;
			}
			break;
		
		case 0x00000003:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(0);
					Function_326(0, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(0), 0.0f, false, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar4 = Function_337(0);
					bVar1 = Function_264(2, "FLYING_ANIMAL", uParam3, 1, 0);
					if (bVar1 >= 0)
					{
						iVar0 = (GET_OBJECTSET_SIZE(*uParam3) - bVar1);
						while (Function_273(uParam3, &iVar0, &bVar2))
						{
							if (IS_OBJECT_VALID(bVar2))
							{
								bVar3 = GET_ACTOR_FROM_OBJECT(GET_EVENT_PERPETRATOR(GET_EVENT_FROM_OBJECT(bVar2)));
								if (!Function_312(bVar2))
								{
									Function_343(uParam3, &bVar2);
									iVar0 = (iVar0 - 1);
								}
								else if ((Function_272(bVar2) != 24 || Function_272(bVar2) != 25) || Function_272(bVar2) != 23)
								{
									Function_343(uParam3, &bVar2);
									iVar0 = (iVar0 - 1);
								}
								else if (IS_ACTOR_RIDING_VEHICLE(bVar3))
								{
									if (Function_441(GET_VEHICLE(bVar3), 0) > 2.0f)
									{
										Function_343(uParam3, &bVar2);
										iVar0 = (iVar0 - 1);
									}
								}
								else
								{
									Function_343(uParam3, &bVar2);
									iVar0 = (iVar0 - 1);
								}
							}
						}
					}
					bVar1 = Function_344(uParam3, 0);
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
								Function_335(0, *uParam2, 1, bVar1, 4294967295, 4294967295, 10);
							}
						}
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_417(*uParam3, 0, uParam1, 4, uParam0, 0, 1004, 250.0f, Function_444());
					break;
			}
			break;
		
		case 0x00000004:
			switch (*uParam0)
			{
				case 0x00000000:
					Function_329(0);
					Function_326(0, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_325(0), 0.0f, false, 0);
					*uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar4 = Function_337(0);
					bVar1 = Function_264(11, "_", uParam3, 1, 0);
					if (bVar1 >= 0)
					{
						iVar0 = (GET_OBJECTSET_SIZE(*uParam3) - bVar1);
						while (Function_273(uParam3, &iVar0, &bVar2))
						{
							if (IS_OBJECT_VALID(bVar2))
							{
								bVar3 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar2)));
								if (IS_ACTOR_VALID(bVar3))
								{
									if (!(GET_ACTOR_FACTION(bVar3) != 22 || GET_ACTOR_FACTION(bVar3) != 19))
									{
										Function_343(uParam3, &bVar2);
										iVar0 = (iVar0 - 1);
									}
								}
							}
						}
					}
					bVar1 = Function_344(uParam3, 0);
					if (IntToFloat(bVar1) <= 10.0f)
					{
						*uParam0 = 2;
					}
					else
					{
						*uParam2 = (TO_FLOAT(bVar1) / 10.0f);
						if (*uParam2 == fVar4)
						{
							Function_335(0, *uParam2, 1, bVar1, 4294967295, 4294967295, 10);
						}
					}
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_414(*uParam3, 0, uParam1, uParam0, 1005, 250.0f, Function_444());
					break;
			}
			break;
	}
}

bool Function_444() //Position: 0x1EEAA / 126634
{
	return "challenge_01_128";
}

var Function_445(int iParam0) //Position: 0x1EEC3 / 126659
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

bool Function_446(int iParam0) //Position: 0x1EEF5 / 126709
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (SC_CHALLENGE_IS_VAR_VALID(iParam0, "nAAID"))
	{
		iVar0 = SC_CHALLENGE_GET_VAR_INT(iParam0, "nAAID");
	}
	switch (iVar0)
	{
		case 0x00000000:
			return Function_112(464) < 0.0f;
			break;
		
		case 0x00000001:
			return Function_112(459) < 0.0f;
			break;
		
		case 0x00000002:
			return Function_112(463) < 0.0f;
			break;
		
		case 0x00000003:
			return Function_112(462) < 0.0f;
			break;
		
		case 0x00000004:
			return Function_112(466) < 0.0f;
			break;
		
		case 0x00000005:
			return Function_112(460) < 0.0f;
			break;
		
		case 0x00000006:
			return Function_112(465) < 0.0f;
			break;
		
		case 0x00000007:
			return Function_112(461) < 0.0f;
			break;
		
		case 0x00000008:
			return Function_447(Global_30717[0]);
			break;
		
		case 0x00000009:
			return StackVal < 3;
			break;
	}
	return iVar1;
}

int Function_447(bool bParam0) //Position: 0x1EFDD / 126941
{
	if (!Function_18(bParam0))
	{
		return 0;
	}
	return Function_158(&(Global_29008[bParam0]), 4096);
}

bool Function_448() //Position: 0x1EFFB / 126971
{
	if (Function_1())
	{
		return (Function_449() != 1 || Function_449() != 0);
	}
	return 0;
}

int Function_449() //Position: 0x1F014 / 126996
{
	return Global_79349.f_16;
}

void Function_450() //Position: 0x1F020 / 127008
{
	Function_470();
	Function_452();
	Function_451();
	Global_88795 = 1;
	return;
}

void Function_451() //Position: 0x1F034 / 127028
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

void Function_452() //Position: 0x1F094 / 127124
{
	if (Global_34165.f_44)
	{
		Function_466(0, &Global_49399, "AM_SS", 3, 0, Function_469());
		Function_466(1, &Global_49399, "AM_MH", 3, 0, Function_465());
		Function_466(2, &Global_49399, "AM_SU", 3, 0, Function_464());
		Function_466(3, &Global_49399, "AM_TH", 3, 0, Function_463());
		Function_466(7, &Global_49399, "AM_LB", 3, 1, Function_463());
		Function_466(4, &Global_49399, "AM_SS2", 3, 1, Function_462());
		Function_466(5, &Global_49399, "AM_MH2", 3, 1, Function_461());
		Function_466(6, &Global_49399, "AM_SU2", 3, 1, Function_460());
		Function_466(8, &Global_49399, "AM_LB2", 3, 1, Function_463());
		Function_466(9, &Global_49399, "AM_LB3", 3, 1, Function_463());
		Function_466(22, &Global_49399, "OC_MW", 3, 1, Function_459());
		Function_466(23, &Global_49399, "OC_BO", 3, 1, Function_459());
		Function_466(24, &Global_49399, "OC_B2", 3, 1, Function_458());
		Function_466(10, &Global_49399, "WP_DYN", 5, 1, Function_469());
		Function_466(11, &Global_49399, "WP_DYN2", 5, 1, Function_462());
		Function_466(12, &Global_49399, "WP_PYR", 5, 1, Function_469());
		Function_466(13, &Global_49399, "WP_PYR2", 5, 1, Function_462());
		Function_466(14, &Global_49399, "ST_TF", 8, 1, Function_457());
		Function_466(15, &Global_49399, "ST_TH", 8, 1, Function_457());
		Function_466(16, &Global_49399, "ST_TS", 8, 1, Function_457());
		Function_466(17, &Global_49399, "ST_TW", 8, 1, Function_457());
		Function_466(18, &Global_49399, "ST_RH", 8, 1, Function_457());
		Function_466(19, &Global_49399, "ST_RW", 8, 1, Function_457());
		Function_466(21, &Global_49399, "ST_RC", 8, 1, Function_457());
		Function_466(20, &Global_49399, "ST_FD", 8, 1, Function_457());
	}
	else
	{
		Function_466(0, &Global_49310, "AM_SS", 3, 0, "challenge_01");
		Function_466(1, &Global_49310, "AM_MH", 3, 0, "challenge_02");
		Function_466(2, &Global_49310, "AM_SU", 3, 0, "challenge_03");
		Function_466(3, &Global_49310, "AM_TH", 3, 0, "challenge_04");
		if (Function_182(32))
		{
			Function_455();
		}
		if (Function_182(64))
		{
			Function_453();
		}
	}
	return;
}

void Function_453() //Position: 0x1F353 / 127827
{
	var uVar0;
	bool bVar4;
	
	strcpy(&Local_38 + 16, "AM_ER", 8);
	Local_38 = 26;
	Local_38.f_84 = 0;
	Function_454();
	memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, Function_275(), 4);
	Local_38.f_24 = CREATE_JOURNAL_ENTRY(&uVar0, 3, false, "challenge_01");
	if (Function_81(5))
	{
		CLEAR_JOURNAL_ENTRY(Local_38.f_24);
		PREPEND_JOURNAL_ENTRY(Local_38.f_24, false);
		SET_JOURNAL_ENTRY_PROGRESS(Local_38.f_24, 0.0f, false, 0);
		SET_JOURNAL_ENTRY_UPDATED(Local_38.f_24, 0);
		Function_304();
	}
	if (StackVal == 10)
	{
		Function_282();
	}
	else
	{
		Local_38.f_4 = 0;
		SET_JOURNAL_ENTRY_PROGRESS(Local_38.f_24, Local_38.f_12, true, 0);
		bVar4 = Function_258();
		if (IS_LAYOUTREF_VALID(bVar4))
		{
			CREATE_OBJECTSET_IN_LAYOUT("AM_OBJSETER_SP", bVar4, 4294967295, 0);
		}
	}
	return;
}

void Function_454() //Position: 0x1F407 / 128007
{
	iLocal_61 = Function_222(10, 1, 5);
	Local_38.f_8 = Global_13172[iLocal_6111].f_20;
	Local_38.f_12 = Global_13172[iLocal_6111].f_28;
	Local_38.f_28 = Global_13172[iLocal_6111].f_24;
	Local_38.f_32 = Global_13172[iLocal_6111].f_16;
	return;
}

void Function_455() //Position: 0x1F44A / 128074
{
	var uVar0;
	bool bVar4;
	
	strcpy(&Local_16 + 16, "AM_TM", 8);
	Local_16 = 25;
	Local_16.f_84 = 0;
	Function_456();
	memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, Function_313(), 4);
	Local_16.f_24 = CREATE_JOURNAL_ENTRY(&uVar0, 3, false, "challenge_01");
	if (Function_81(5))
	{
		CLEAR_JOURNAL_ENTRY(Local_16.f_24);
		PREPEND_JOURNAL_ENTRY(Local_16.f_24, false);
		SET_JOURNAL_ENTRY_PROGRESS(Local_16.f_24, 0.0f, false, 0);
		SET_JOURNAL_ENTRY_UPDATED(Local_16.f_24, 0);
		Function_317();
	}
	if (StackVal == 10)
	{
		Function_315();
	}
	else
	{
		Local_16.f_4 = 0;
		SET_JOURNAL_ENTRY_PROGRESS(Local_16.f_24, Local_16.f_12, true, 0);
		bVar4 = Function_258();
		if (IS_LAYOUTREF_VALID(bVar4))
		{
			CREATE_OBJECTSET_IN_LAYOUT("AM_OBJSETTM_SP", bVar4, 4294967295, 0);
		}
	}
	return;
}

void Function_456() //Position: 0x1F4FE / 128254
{
	iLocal_60 = Function_222(9, 1, 5);
	Local_16.f_8 = Global_13172[iLocal_6011].f_20;
	Local_16.f_12 = Global_13172[iLocal_6011].f_28;
	Local_16.f_28 = Global_13172[iLocal_6011].f_24;
	Local_16.f_32 = Global_13172[iLocal_6011].f_16;
	return;
}

bool Function_457() //Position: 0x1F541 / 128321
{
	return "SC_Travel_Icon";
}

bool Function_458() //Position: 0x1F558 / 128344
{
	return "challenge_04lvl2";
}

bool Function_459() //Position: 0x1F571 / 128369
{
	return "challenge_04";
}

bool Function_460() //Position: 0x1F586 / 128390
{
	return "challenge_03lvl2";
}

bool Function_461() //Position: 0x1F59F / 128415
{
	return "challenge_02lvl2";
}

bool Function_462() //Position: 0x1F5B8 / 128440
{
	return "challenge_01lvl2";
}

bool Function_463() //Position: 0x1F5D1 / 128465
{
	return "challenge_05";
}

bool Function_464() //Position: 0x1F5E6 / 128486
{
	return "challenge_03";
}

bool Function_465() //Position: 0x1F5FB / 128507
{
	return "challenge_02";
}

void Function_466(bool bParam0, int iParam1, char* cParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x1F610 / 128528
{
	int iVar0;
	var uVar1;
	
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
		Function_331(bParam0, 4);
		Function_331(bParam0, 2);
		Function_468(bParam0, 0);
		Function_468(bParam0, 1);
		uVar1 = Function_352(bParam0);
		Function_299(&uVar1);
		Function_332(bParam0, 1);
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
	Function_467(bParam0, iParam3, bParam5);
	Function_326(bParam0, 1);
	if (StackVal && StackVal != 2 != 10)
	{
		Function_321(bParam0);
	}
	else
	{
		iParam1[bParam022]->f_4 = 0;
		iParam1[bParam022]->f_12 = 0.0f;
		SET_JOURNAL_ENTRY_PROGRESS(Function_325(bParam0), 0.0f, true, 0);
	}
}

var Function_467(bool bParam0, int iParam1, int iParam2) //Position: 0x1F781 / 128897
{
	struct<6> Var0;
	var uVar6;
	var uVar10;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_324(bParam0) };
	if (Function_1() || Global_34165.f_44)
	{
		Global_49399[bParam022].f_24 = CREATE_JOURNAL_ENTRY(&Var0, iParam1, false, iParam2);
		memcpy(&uVar6, StackVal, StackVal, StackVal, StackVal, StackVal, Function_323(bParam0), 4);
		UI_SET_STRING(&Var0, UI_GET_STRING(&uVar6));
		return Global_49399[bParam022].f_24;
	}
	Global_49310[bParam022].f_24 = CREATE_JOURNAL_ENTRY(&Var0, iParam1, false, iParam2);
	memcpy(&uVar10, StackVal, StackVal, StackVal, StackVal, StackVal, Function_323(bParam0), 4);
	UI_SET_STRING(&Var0, UI_GET_STRING(&uVar10));
	return Global_49310[bParam022].f_24;
}

void Function_468(bool bParam0, bool bParam1) //Position: 0x1F800 / 129024
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

bool Function_469() //Position: 0x1F82D / 129069
{
	return "challenge_01";
}

void Function_470() //Position: 0x1F842 / 129090
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
		Function_303(bVar0);
		bVar0++;
	}
	bVar1 = Function_258();
	bVar2 = Function_261();
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

