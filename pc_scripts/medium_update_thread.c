//Decompiled with MagicRDR v1.0
//Function Count : 468
//Statics Count : 233
//Natives Count : 350
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
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	int iLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	struct<141> Local_21 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	int iLocal_230 = 0;
	bool bLocal_231 = false;
	float fLocal_232 = 0.0f;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	
	iLocal_95 = 31;
	iLocal_96 = 33;
	iLocal_97 = 1;
	fLocal_98 = 2.0f;
	Function_254(&(Local_100[08]));
	Function_244(&(Local_100[18]));
	Function_231(&(Local_100[28]));
	Function_188(&(Local_100[38]));
	Function_66(&(Local_100[48]));
	Function_54(&(Local_100[58]));
	Function_38(&(Local_100[68]));
	Function_2(&(Local_100[78]));
	iVar0 = 0;
	while (iVar0 <= Local_100)
	{
		if (Local_100[iVar08].f_56 || !Global_53524.f_44)
		{
			Call_Loc(Local_100[iVar08]);
			Local_100[iVar08].f_60 = 1;
		}
		else
		{
			Local_100[iVar08].f_60 = 0;
		}
		iVar0++;
	}
	while (!Function_1(256) && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	while (!IS_EXITFLAG_SET())
	{
		iLocal_230 = 100;
		SET_DEBUG_DRAW((Global_47267[8] || Global_47267[9]));
		if (GET_DEBUG_DRAW_STATE())
		{
			iLocal_230 = 0;
		}
		iVar0 = 0;
		while (iVar0 <= Local_100)
		{
			if (Local_100[iVar08].f_56 | 1)
			{
				if (bLocal_231)
				{
					PRINTSTRING("Time for Exec ");
					PRINTSTRING(&Local_100[iVar08] + 24);
					PRINTSTRING(": ");
					fLocal_232 = GET_PROFILE_TIME();
				}
				Call_Loc(&Local_100[iVar08] + 8);
				if (StackVal)
				{
					iLocal_230 = 0;
				}
				if (bLocal_231)
				{
					PRINTFLOAT((GET_PROFILE_TIME() - fLocal_232));
					PRINTNL();
				}
				if (!IS_EXITFLAG_SET() && !iLocal_230 != 0)
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
	while (iVar0 <= Local_100)
	{
		if (Local_100[iVar08].f_60)
		{
			Call_Loc(Local_100[iVar08].f_16);
		}
		iVar0++;
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

bool Function_1(int iParam0) //Position: 0x18C / 396
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_2(struct<57> Param0) //Position: 0x1A8 / 424
{
	strcpy(&Param0 + 24, "nACTORROAM", 16);
	Param0 = 4918;
	*(&Param0 + 8) = 523;
	*(&Param0 + 16) = 483;
	Param0.f_56 = 1;
	return;
}

void Function_3() //Position: 0x1E3 / 483
{
	if (IS_OBJECTSET_VALID(&Global_26172))
	{
		DESTROY_OBJECTSET(&Global_26172);
	}
	if (IS_LAYOUTREF_VALID(&Global_10998))
	{
		RELEASE_LAYOUT_REF(&Global_10998);
	}
	return;
}

int Function_4() //Position: 0x20B / 523
{
	struct<2> Var0;
	struct<2> Var2;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	var uVar14;
	bool bVar15;
	int iVar16;
	var uVar17;
	
	bVar15 = -1.0f;
	Function_36();
	if (!IS_OBJECTSET_VALID(&Global_26172))
	{
		return 0;
	}
	uVar8 = CREATE_OBJECTSET_IN_LAYOUT("roamRemoveSet", &Global_10998, 4294967295, 0);
	CLEAN_OBJECTSET(&Global_26172);
	iVar16 = GET_OBJECTSET_SIZE(&Global_26172);
	bVar4 = false;
	while (bVar4 < (iVar16 - 1))
	{
		iVar5 = 0;
		iVar11 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar4, &Global_26172));
		if (IS_ACTOR_VALID(&iVar11))
		{
			if (GET_OBJECT_TYPE(&iVar11) == 15)
			{
				iVar6 = Function_35(&iVar11);
				iVar7 = Function_34(&iVar11);
				uVar9 = Function_33(&iVar11);
				uVar17 = Function_32(&iVar11);
				iVar13 = Function_31(&iVar11);
				if (IS_OBJECT_VALID(&uVar9))
				{
					iVar10 = GET_OBJECT_TYPE(&uVar9);
				}
				else
				{
					iVar10 = 0;
				}
				GET_POSITION(&iVar11, &Var0);
				switch (iVar6)
				{
					case 0x00000000:
						Function_30(&iVar11);
						Function_29(&iVar11, 1);
						if (iVar7 == 5)
						{
							PRINTSTRING("ActorRoam - ");
							PRINTSTRING(GET_ACTOR_NAME(&iVar11));
							PRINTSTRING(" will ignore ambient restrictions while using gringo");
							SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&iVar11, 1);
							SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(&iVar11, 0);
						}
					
					case 0x00000001:
						if (IS_ACTOR_VEHICLE(&iVar11))
						{
							Function_29(&iVar11, 8);
						}
						else if (IS_ACTOR_VALID(GET_VEHICLE(&iVar11)))
						{
							SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iVar11, 1);
							TASK_CLEAR(&iVar11);
							TASK_VEHICLE_LEAVE(&iVar11);
							TASK_PRIORITY_SET(&iVar11, 2);
							Function_29(&iVar11, 6);
						}
						else
						{
							SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iVar11, 1);
							switch (iVar7)
							{
								case 0x00000000:
								case 0x00000001:
									if (iVar10 == 9)
									{
										TASK_CLEAR(&iVar11);
										TASK_WANDER_IN_VOLUME(&iVar11, GET_VOLUME_FROM_OBJECT(&uVar9), -1f);
										TASK_PRIORITY_SET(&iVar11, 2);
									}
									else
									{
										TASK_CLEAR(&iVar11);
										TASK_WANDER(&iVar11, 3212836864);
										TASK_PRIORITY_SET(&iVar11, 2);
									}
									Function_29(&iVar11, 5);
									break;
								
								case 0x00000002:
									if (iVar10 != 15)
									{
										uVar9 = GET_OBJECT_FROM_ACTOR(Function_28());
									}
									TASK_CLEAR(&iVar11);
									TASK_FLEE_ACTOR(&iVar11, GET_ACTOR_FROM_OBJECT(&uVar9), -1.0f, -1.0f, 0, 0, 0);
									TASK_PRIORITY_SET(&iVar11, false);
									Function_29(&iVar11, 3);
									break;
								
								case 0x00000003:
									if (iVar10 != 15)
									{
										uVar9 = GET_OBJECT_FROM_ACTOR(Function_28());
									}
									Function_27(&iVar11, &bVar15);
									if (Function_23(&iVar11, &uVar14, &bVar15, 0, 0, 0x40400000))
									{
										RESET_ANIM_SET_FOR_ACTOR(&iVar11, 1);
										TASK_CLEAR(&iVar11);
										TASK_FLEE_ACTOR(&iVar11, GET_ACTOR_FROM_OBJECT(&uVar9), -1.0f, -1.0f, 0, 0, 0);
										TASK_PRIORITY_SET(&iVar11, false);
										Function_29(&iVar11, 3);
									}
									Function_22(&iVar11, bVar15);
									break;
								
								case 0x00000004:
									TASK_CLEAR(&iVar11);
									switch (iVar10)
									{
										case 0x00000000:
											iVar12 = Function_18(StackVal, Var0, 0x42200000, 1);
											if (Function_17(iVar12))
											{
												Function_16(&iVar11, GET_OBJECT_FROM_VOLUME(&Global_44085[iVar129] + 8));
												uVar9 = Function_33(&iVar11);
												iVar10 = GET_OBJECT_TYPE(&uVar9);
												Function_15(&iVar11, GET_VOLUME_FROM_OBJECT(&uVar9), 2, 60.0f, iVar13);
											}
											else
											{
												TASK_CLEAR(&iVar11);
												TASK_FLEE_ACTOR(&iVar11, GET_ACTOR_FROM_OBJECT(Function_28()), -1.0f, -1.0f, 0, 0, 0);
												TASK_PRIORITY_SET(&iVar11, 2);
											}
											break;
										
										case 0x0000000F:
											TASK_FOLLOW_OBJECT_AT_DISTANCE(&iVar11, GET_ACTOR_FROM_OBJECT(&uVar9), 3.0f, iVar13);
											TASK_PRIORITY_SET(&iVar11, 2);
											break;
										
										case 0x00000009:
											Function_15(&iVar11, GET_VOLUME_FROM_OBJECT(&uVar9), 2, 60.0f, iVar13);
											break;
										
										default:
											LOG_ERROR("Invalid Object type passed to ActorRoam");
											break;
									}
									Function_29(&iVar11, 4);
									break;
								
								case 0x00000005:
									Function_27(&iVar11, &bVar15);
									if (Function_23(&iVar11, &uVar14, &bVar15, 0, 0, 0x40400000))
									{
										RESET_ANIM_SET_FOR_ACTOR(&iVar11, 1);
										TASK_CLEAR(&iVar11);
										TASK_FLEE_ACTOR(&iVar11, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
										TASK_PRIORITY_SET(&iVar11, false);
										SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&iVar11, 0);
										SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(&iVar11, 1);
										Function_29(&iVar11, 3);
									}
									else if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(&iVar11)))
									{
										if (!(GET_TASK_STATUS(&iVar11, 19) != 1 || GET_TASK_STATUS(&iVar11, 19) != 3))
										{
											if (Function_14(&iVar11))
											{
												PRINTSTRING("ACTORROAM - Actor ");
												PRINTSTRING(GET_ACTOR_NAME(&iVar11));
												PRINTSTRING(" failing on use of gringo ");
												PRINTSTRING(GET_OBJECT_NAME(&uVar9));
												PRINTSTRING("n of type ");
												GET_OBJECT_MODEL_NAME(&uVar9);
												PRINTNL();
												DESTROY_OBJECT(&uVar9);
												SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&iVar11, 0);
												SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(&iVar11, 1);
												Function_13(&iVar11, 1);
												Function_29(&iVar11, 0);
											}
										}
									}
									Function_22(&iVar11, bVar15);
									break;
								
								default:
									break;
								}
						}
						break;
					
					case 0x00000006:
						if (GET_TASK_STATUS(&iVar11, 55) != 0 || !IS_ACTOR_VALID(GET_VEHICLE(&iVar11)))
						{
							Function_29(&iVar11, 0);
						}
						break;
					
					case 0x00000003:
						if (GET_TASK_STATUS(&iVar11, 25) == 0)
						{
							Function_29(&iVar11, 7);
						}
						break;
					
					case 0x00000004:
						switch (iVar10)
						{
							case 0x00000000:
							case 0x0000000F:
								if (GET_TASK_STATUS(&iVar11, 67) == 0)
								{
									Function_29(&iVar11, 7);
								}
								break;
							
							case 0x00000009:
								GET_VOLUME_CENTER(GET_VOLUME_FROM_OBJECT(&uVar9), &Var2);
								Function_12(StackVal, StackVal, Var2, Var0, &Var2);
								if (VMAG(Var2) > 20.0f)
								{
									SET_ACTOR_STAY_WITHIN_VOLUME(&iVar11, GET_VOLUME_FROM_OBJECT(&uVar9), 1, 3);
									Function_29(&iVar11, 7);
								}
								break;
							
							default:
								PRINTSTRING("ActorRoam got an invalid object named: ");
								PRINTSTRING(GET_OBJECT_NAME(&uVar9));
								PRINTNL();
								LOG_ERROR("Invalid Object in ActorRoam update");
								break;
						}
						break;
					
					case 0x00000002:
					case 0x00000005:
					case 0x00000007:
						if (GET_TASK_STATUS(&iVar11, 10) == 1 && GET_TASK_STATUS(&iVar11, 10) == 3)
						{
							TASK_CLEAR(&iVar11);
							TASK_WANDER(&iVar11, 3212836864);
							Function_29(&iVar11, 8);
						}
						else if ((GET_TASK_STATUS(&iVar11, 57) == 1 && GET_TASK_STATUS(&iVar11, 57) == 3) && iVar10 != 9)
						{
							TASK_CLEAR(&iVar11);
							TASK_WANDER_IN_VOLUME(&iVar11, GET_VOLUME_FROM_OBJECT(&uVar9), -1f);
							Function_29(&iVar11, 8);
						}
						break;
					
					case 0x00000008:
						break;
					
					default:
						break;
				}
				if (VDIST(Global_54078, Var0) < Function_10(1) && !Function_9(&iVar11, 0x3f800000, 0x42960000, 1, 1, 0))
				{
					iVar5 = 1;
				}
				else if (iVar16 >= 100)
				{
					iVar5 = 1;
				}
				else if (HUD_IS_FADED() && Function_8(uVar17, 1))
				{
					iVar5 = 1;
				}
				if (iVar5 == 1)
				{
					ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_ACTOR(&iVar11), &uVar8);
					if (iVar7 != 5 && IS_OBJECT_VALID(&uVar9))
					{
						DESTROY_OBJECT(&uVar9);
					}
				}
			}
		}
		bVar4++;
	}
	if (IS_OBJECTSET_VALID(&uVar8))
	{
		iVar16 = GET_OBJECTSET_SIZE(&uVar8);
		bVar4 = false;
		while (bVar4 < (iVar16 - 1))
		{
			iVar11 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uVar8));
			TASK_CLEAR(&iVar11);
			TASK_WANDER(&iVar11, -1.0f);
			Function_6(&iVar11);
			CLEAN_OBJECTSET(&uVar8);
			bVar4++;
		}
		DESTROY_OBJECTSET(&uVar8);
	}
	if (IS_EXITFLAG_SET())
	{
		if (IS_OBJECTSET_VALID(&Global_26172))
		{
			Function_5(&Global_26172);
			DESTROY_OBJECTSET(&Global_26172);
		}
		if (IS_LAYOUTREF_VALID(&Global_10998))
		{
			DESTROY_LAYOUT(&Global_10998);
		}
	}
	return 0;
}

void Function_5(var uParam0) //Position: 0x976 / 2422
{
	int iVar0;
	
	if (!IS_OBJECTSET_VALID(&uParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(&uParam0) >= 0)
	{
		iVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uParam0);
		if (IS_OBJECT_VALID(&iVar0))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(&iVar0, &uParam0);
		}
		CLEAN_OBJECTSET(&uParam0);
		if (IS_OBJECT_VALID(&iVar0))
		{
			RELEASE_OBJECT_REF(&iVar0);
		}
	}
	return;
}

void Function_6(int iParam0) //Position: 0x9C5 / 2501
{
	char* cVar0[32];
	
	strcpy(&cVar0, GET_OBJECT_NAME(&iParam0), 32);
	if (STRING_LENGTH(&cVar0) < 0)
	{
		strcpy(&cVar0, "n(Unnamed)", 32);
	}
	Function_7(&iParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(&iParam0), &Global_26172);
	RELEASE_ACTOR(&iParam0);
	return;
}

void Function_7(int iParam0) //Position: 0xA07 / 2567
{
	DEREFERENCE_ACTOR(&iParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_ref");
	return;
}

bool Function_8(bool bParam0, bool bParam1) //Position: 0xA2D / 2605
{
	return (bParam0 && bParam1) == 0;
}

bool Function_9(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0xA3A / 2618
{
	return CAMERA_IS_VISIBLE_OBJECT(GET_GAME_CAMERA(), &uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5);
}

float Function_10(bool bParam0) //Position: 0xA5A / 2650
{
	var uVar0;
	float fVar1;
	
	if (!&bParam0)
	{
		Function_11(&uVar0, &fVar1);
		if (fVar1 < 60.0f)
		{
			return (fVar1 + 20.0f);
		}
		return (fVar1 + 10.0f);
	}
	return (190.0f + 20.0f);
}

void Function_11(var uParam0, int iParam1) //Position: 0xA96 / 2710
{
	struct<2> Var0;
	
	if (Global_6629 && !Global_6646)
	{
		uParam0 = 65.0f;
		iParam1 = 95.0f;
	}
	else if ((!IS_ACTOR_RIDING(GET_PLAYER_ACTOR(0)) && !IS_ACTOR_RIDING_VEHICLE(GET_PLAYER_ACTOR(0))) && !Global_6646)
	{
		uParam0 = 115.0f;
		iParam1 = 170.0f;
	}
	else
	{
		GET_ACTOR_VELOCITY(GET_PLAYER_ACTOR(0), &Var0);
		if (VMAG(Var0) > 5.0f)
		{
			uParam0 = 130.0f;
			iParam1 = 190.0f;
		}
		else
		{
			uParam0 = 130.0f;
			iParam1 = 190.0f;
		}
	}
	return;
}

void Function_12(var uParam0, float fParam1, float fParam2, float fParam3, var uParam4) //Position: 0xB27 / 2855
{
	uParam4 = Vector((GET_X(&fParam2) - GET_X(&uParam0)), 0.0f, (GET_Z(&fParam2) - GET_Z(&uParam0)));
}

void Function_13(var uParam0, bool bParam1) //Position: 0xB4B / 2891
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_behavior", bParam1);
	return;
}

bool Function_14(int iParam0) //Position: 0xB72 / 2930
{
	bool bVar0;
	
	if (!DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_gringoFail"))
	{
		DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_gringoFail", false);
	}
	else
	{
		bVar0 = DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_gringoFail");
		if (bVar0 >= 20)
		{
			return 1;
		}
		DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_gringoFail", bVar0 + 1);
	}
	return 0;
}

void Function_15(int iParam0, float fParam1, bool bParam2, float fParam3, int iParam4) //Position: 0xC15 / 3093
{
	var uVar0;
	var uVar2;
	var uVar4;
	
	if (IS_VOLUME_VALID(&fParam1))
	{
		GET_VOLUME_CENTER(&fParam1, &uVar0);
		if (FIND_GROUND_INTERSECTION(&uVar0, 100.0f, &uVar2, &uVar4))
		{
			TASK_GO_NEAR_COORD(&iParam0, &uVar2, fParam3, iParam4);
		}
		else
		{
			TASK_GO_NEAR_COORD(&iParam0, &uVar0, fParam3, iParam4);
		}
		TASK_PRIORITY_SET(&iParam0, bParam2);
	}
	else
	{
		LOG_ERROR("GO_NEAR_VOLUME - Invalid Volume");
	}
}

void Function_16(var uParam0, int iParam1) //Position: 0xC8A / 3210
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_target", &iParam1);
	return;
}

bool Function_17(int iParam0) //Position: 0xCB0 / 3248
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_18(struct<2> Param0, float fParam2, int iParam3) //Position: 0xCC6 / 3270
{
	int iVar0;
	struct<2> Var1;
	bool bVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = 4294967295;
	bVar3 = 99999.0f;
	iVar4 = 0;
	if (Function_21(StackVal, Param0))
	{
		return 4294967295;
	}
	iVar5 = 0;
	while (iVar5 < 145)
	{
		if ((StackVal && (StackVal || IS_VOLUME_VALID(&Global_44085[iVar59] + 8) != 3 != 4)) && !Function_20(iVar5))
		{
			iVar4 = 0;
			if (&iParam3 == 0)
			{
				iVar4 = 1;
			}
			else if (Function_19(Global_43789) == Global_46722[Global_43787])
			{
				iVar4 = 1;
			}
			if (iVar4 == 1)
			{
				GET_VOLUME_CENTER(&Global_44085[iVar59] + 8, &Var1);
				if (VDIST(Param0, Var1) > bVar3 && VDIST(Param0, Var1) < &fParam2)
				{
					iVar0 = iVar5;
					bVar3 = VDIST(Param0, Var1);
				}
			}
		}
		iVar5++;
	}
	if (Function_17(iVar0))
	{
	}
	else
	{
		iVar0 = 4294967295;
	}
	return iVar0;
}

int Function_19(int iParam0) //Position: 0xDA6 / 3494
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_17(iParam0))
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

bool Function_20(int iParam0) //Position: 0xDFE / 3582
{
	if ((((iParam0 != Global_46894[1] || iParam0 != Global_46838[1]) || iParam0 != Global_46816[1]) || iParam0 != Global_46760[4]) || iParam0 != Global_46866[1])
	{
		return 1;
	}
	return 0;
}

bool Function_21(char* cParam0) //Position: 0xE3E / 3646
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

void Function_22(int iParam0, bool bParam1) //Position: 0xE56 / 3670
{
	DECOR_SET_FLOAT(GET_OBJECT_FROM_ACTOR(&iParam0), "actorroam_lockon", bParam1);
	return;
}

bool Function_23(int iParam0, var uParam1, float fParam2, int iParam3, bool bParam4, float fParam5) //Position: 0xE7B / 3707
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
		fVar0 = Function_26(&iParam0, &Global_54076);
		if (!Function_8(&iParam3, 8))
		{
			if (GET_LAST_ATTACKER(&iParam0) == &Global_54076)
			{
				uParam1 = 8;
				Function_24(&iParam0);
				return 1;
			}
		}
		if (!Function_8(&iParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(&iParam0, 1.0f))
			{
				uParam1 = 2;
				Function_24(&iParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(&iParam0, 1.0f, 1.0f))
			{
				uParam1 = 2;
				Function_24(&iParam0);
				return 1;
			}
		}
		if (!Function_8(&iParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(&iParam0) || (((GET_ACTOR_UNDER_RETICLE(&Global_54076, 0) != &iParam0 && IS_PLAYER_WEAPON_ZOOMED(&Global_54076)) && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(&Global_54076) != &iParam0 && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f))
			{
				if (fParam2 > 0.0f)
				{
					uParam1 = 4;
					Function_24(&iParam0);
					return 1;
				}
				if (fParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - fParam2) < 1,3f)
					{
						uParam1 = 4;
						Function_24(&iParam0);
						return 1;
					}
				}
				fParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_8(&iParam3, 1))
		{
			if (Global_6646 || Global_6647)
			{
				uParam1 = 1;
				Function_24(&iParam0);
				return 1;
			}
		}
		if (!Function_8(&iParam3, 16))
		{
			if (UNK_0x7F454A92(&iParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(&iParam0)) > 2.0f && fVar0 > 18.0f)
				{
					uParam1 = 16;
					Function_24(&iParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_24(int iParam0) //Position: 0x1044 / 4164
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&iParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(&iParam0, 1);
	UNK_0x99AFD2D1(&iParam0, 0, 0);
	Function_25(&iParam0);
	MEMORY_CONSIDER_AS(&Global_54076, &iParam0, 2);
	MEMORY_CONSIDER_AS(&iParam0, &Global_54076, 2);
	AI_GOAL_LOOK_CLEAR(&iParam0);
	return;
}

void Function_25(int iParam0) //Position: 0x1081 / 4225
{
	SAY_SINGLE_LINE_CONTEXT(&iParam0, 60, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

var Function_26(var uParam0, int iParam1) //Position: 0x109A / 4250
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!IS_ACTOR_VALID(&uParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(&uParam0, &Var0);
	GET_POSITION(&iParam1, &Var2);
	return VDIST(Var0, Var2);
}

void Function_27(int iParam0, float fParam1) //Position: 0x118F / 4495
{
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&iParam0), "actorroam_lockon"))
	{
		fParam1 = DECOR_GET_FLOAT(GET_OBJECT_FROM_ACTOR(&iParam0), "actorroam_lockon");
	}
	else
	{
		fParam1 = 0.0f;
	}
	return;
}

var Function_28() //Position: 0x11DC / 4572
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_29(int iParam0, bool bParam1) //Position: 0x11F1 / 4593
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_state", bParam1);
	return;
}

void Function_30(int iParam0) //Position: 0x1215 / 4629
{
	REFERENCE_ACTOR(&iParam0);
	DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_ref", 1);
	return;
}

var Function_31(int iParam0) //Position: 0x123C / 4668
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_speed");
}

var Function_32(int iParam0) //Position: 0x125D / 4701
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_options");
}

var Function_33(int iParam0) //Position: 0x1280 / 4736
{
	return DECOR_GET_OBJECT(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_target");
}

var Function_34(int iParam0) //Position: 0x12A2 / 4770
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_behavior");
}

var Function_35(bool bParam0) //Position: 0x12C6 / 4806
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&bParam0), "actorRoam_state");
}

void Function_36() //Position: 0x12E7 / 4839
{
	if (!IS_LAYOUTREF_VALID(&Global_10998))
	{
		Global_10998 = CREATE_LAYOUT("RoamingLayout");
	}
	if (!IS_OBJECTSET_VALID(&Global_26172))
	{
		Global_26172 = CREATE_OBJECTSET_IN_LAYOUT("gRoamObjects", &Global_10998, 4294967295, 1);
	}
	return;
}

void Function_37() //Position: 0x1336 / 4918
{
	Function_36();
	return;
}

void Function_38(struct<57> Param0) //Position: 0x133F / 4927
{
	strcpy(&Param0 + 24, "GPS_MANAGER", 16);
	Param0 = 6862;
	(&Param0 + 8) = 5243;
	*(&Param0 + 16) = 4988;
	Param0.f_56 = 1;
	return;
}

void Function_39() //Position: 0x137C / 4988
{
	if (IS_OBJECTSET_VALID(&Global_42862 + 16))
	{
		Function_40(&Global_42862 + 16);
		DESTROY_OBJECTSET(&Global_42862 + 16);
	}
	if (IS_LAYOUTREF_VALID(&Global_42862 + 8))
	{
		DESTROY_LAYOUT(&Global_42862 + 8);
	}
	if (IS_OBJECTSET_VALID(&Global_42834 + 16))
	{
		Function_40(&Global_42834 + 16);
		DESTROY_OBJECTSET(&Global_42834 + 16);
	}
	if (IS_LAYOUTREF_VALID(&Global_42834 + 8))
	{
		DESTROY_LAYOUT(&Global_42834 + 8);
	}
	if (IS_OBJECTSET_VALID(&Global_42890 + 16))
	{
		Function_40(&Global_42890 + 16);
		DESTROY_OBJECTSET(&Global_42890 + 16);
	}
	if (IS_LAYOUTREF_VALID(&Global_42890 + 8))
	{
		DESTROY_LAYOUT(&Global_42890 + 8);
	}
	if (IS_GAME_RESETTING() && !Global_6638)
	{
		CLEAR_GPS_PATH(0);
	}
	CLEAR_GPS_PATH(1);
	CLEAR_GPS_PATH(2);
	return;
}

void Function_40(var uParam0) //Position: 0x1432 / 5170
{
	var uVar0;
	
	if (!IS_OBJECTSET_VALID(&uParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(&uParam0) >= 0)
	{
		uVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uParam0);
		REMOVE_OBJECT_FROM_OBJECTSET(&uVar0, &uParam0);
		CLEAN_OBJECTSET(&uParam0);
		if (IS_OBJECT_VALID(&uVar0))
		{
			RELEASE_CURVE(GET_CURVE_FROM_OBJECT(&uVar0));
		}
	}
	return;
}

int Function_41() //Position: 0x147B / 5243
{
	if (Function_42(&Global_42862))
	{
		return 1;
	}
	if (Function_42(&Global_42834))
	{
		return 1;
	}
	if (Function_42(&Global_42890))
	{
		return 1;
	}
	return 0;
}

bool Function_42(struct<105> Param0) //Position: 0x14A9 / 5289
{
	var uVar0;
	var uVar1;
	var uVar2;
	vector3 vVar3;
	
	switch (StackVal)
	{
		case 0x00000000:
			if ((Param0 != 1 || Param0 != 2) || Param0 != 3)
			{
				Param0.f_4 = 1;
			}
			break;
		
		case 0x00000001:
			if (Param0 == 3)
			{
				if (StackVal != 0)
				{
					Param0.f_24 = Global_42834.f_24;
				}
				else
				{
					Param0.f_24 = 393264;
				}
			}
			else if (Param0 == 1)
			{
				Param0.f_24 = 393264;
			}
			if (GET_OBJECTSET_SIZE(&Param0 + 16) >= 0)
			{
				Function_40(&Param0 + 16);
				CLEAN_OBJECTSET(&Param0 + 16);
			}
			if (FIND_TRAFFIC_PATH(&Param0 + 8, &Param0 + 16, &Global_54078, &Param0 + 32, Param0.f_24, &Param0 + 28))
			{
				*(&Param0 + 88) = Global_54078;
				Function_49(StackVal, GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, &Param0 + 16)), *(&Param0 + 32), 0x41200000, 0, 0x3f800000, 1);
				vVar3 = { StackVal, StackVal, Function_49(StackVal, GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, &Param0 + 16)), *(&Param0 + 32), 0x41200000, 0, 0x3f800000, 1) };
				Function_48(&vVar3);
				*(&Param0 + 56) = Function_48(&vVar3);
				Function_47(Param0.f_68, &uVar0, &uVar1, &uVar2);
				if (Param0 == 1)
				{
					SET_GPS_PATH(0, Param0.f_28, &Param0 + 16, uVar0, uVar1, uVar2, 1.0f, &Param0 + 32, 1);
				}
				else if (Param0 == 2)
				{
					SET_GPS_PATH(1, Param0.f_28, &Param0 + 16, uVar0, uVar1, uVar2, 1.0f, &Param0 + 32, Param0.f_100);
				}
				else
				{
					SET_GPS_PATH(2, Param0.f_28, &Param0 + 16, uVar0, uVar1, uVar2, 1.0f, &Param0 + 32, Param0.f_100);
				}
				Param0.f_84 = GET_CURRENT_GAME_TIME();
				Param0.f_4 = 2;
				REGISTER_GPS_CURVE_OBJECTSET(&Param0 + 16);
			}
			else
			{
				LOG_ERROR("Cannot find a path from here to there - check output for locations");
				CLEAR_GPS_PATH(2);
				Param0.f_4 = 3;
			}
		
		case 0x00000002:
			if ((Param0 != 2 || Param0 != 1) || Param0 != 3)
			{
				if (Param0.f_104 || Param0 != 3)
				{
					if (StackVal || Function_46(StackVal, (StackVal || Function_46(StackVal, Function_46(StackVal, StackVal, *(&Param0 + 32), Global_54078) > 15.0f, *(&Param0 + 56), Global_54078) > 15.0f), *(&Param0 + 44), Global_54078) > 15.0f)
					{
						if (Param0 == 1)
						{
							CLEAR_GPS_PATH(0);
						}
						else if (Param0 == 2)
						{
							CLEAR_GPS_PATH(1);
						}
						else
						{
							CLEAR_GPS_PATH(2);
						}
						Param0.f_4 = 3;
						return 0;
					}
				}
				if (Param0 == 1)
				{
					if (IS_GPS_RECOMPUTE(0))
					{
						Param0.f_4 = 1;
						return 0;
					}
				}
				if (Param0 == 2)
				{
					if (IS_GPS_RECOMPUTE(1))
					{
						Param0.f_4 = 1;
						return 0;
					}
				}
				if (IS_GPS_RECOMPUTE(2))
				{
					Param0.f_4 = 1;
					return 0;
				}
			}
			break;
		
		case 0x00000003:
			if (Param0 == 1)
			{
				Function_45();
			}
			else if (Param0 == 2)
			{
				Function_44();
			}
			else
			{
				Function_43();
			}
			if (IS_OBJECTSET_VALID(&Param0 + 16))
			{
				Function_40(&Param0 + 16);
				CLEAN_OBJECTSET(&Param0 + 16);
			}
			Param0.f_4 = 0;
			Param0 = 0;
			break;
	}
	return 0;
}

void Function_43() //Position: 0x17BE / 6078
{
	if (Global_42890 == 3)
	{
		Global_42890.f_4 = 3;
	}
	*(&Global_42890 + 32) = Vector(0.0f, 0.0f, 0.0f);
	*(&Global_42890 + 44) = Vector(0.0f, 0.0f, 0.0f);
	CLEAR_GPS_PATH(2);
	return;
}

void Function_44() //Position: 0x17E9 / 6121
{
	if (Global_42834 == 2)
	{
		Global_42834.f_4 = 3;
	}
	*(&Global_42834 + 32) = Vector(0.0f, 0.0f, 0.0f);
	*(&Global_42834 + 44) = Vector(0.0f, 0.0f, 0.0f);
	CLEAR_GPS_PATH(1);
	return;
}

void Function_45() //Position: 0x1814 / 6164
{
	if (Global_42862 == 1)
	{
		Global_42862.f_4 = 3;
	}
	*(&Global_42862 + 32) = Vector(0.0f, 0.0f, 0.0f);
	*(&Global_42862 + 44) = Vector(0.0f, 0.0f, 0.0f);
	CLEAR_GPS_PATH(0);
	return;
}

float Function_46(struct<2> Param0, struct<2> Param2) //Position: 0x183F / 6207
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

void Function_47(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x185C / 6236
{
	switch (iParam0)
	{
		case 0x00000001:
			uParam1 = 0,64f;
			uParam2 = 0,22f;
			uParam3 = 0,26f;
			break;
		
		case 0x00000002:
			uParam1 = 0,34f;
			uParam2 = 0,58f;
			uParam3 = 0,74f;
			break;
		
		case 0x00000000:
			uParam1 = 0,83f;
			uParam2 = 0,65f;
			uParam3 = 0,36f;
			break;
		
		case 0x00000003:
			uParam1 = 0,41f;
			uParam2 = 0,57f;
			uParam3 = 0,23f;
			break;
		
		case 0x00000005:
			uParam1 = Global_42834.f_72;
			uParam2 = Global_42834.f_76;
			uParam3 = Global_42834.f_80;
			break;
		
		case 0x00000004:
			uParam1 = Global_42890.f_72;
			uParam2 = Global_42890.f_76;
			uParam3 = Global_42890.f_80;
			break;
		
		default:
			uParam1 = 0,71f;
			uParam2 = 0,64f;
			uParam3 = 0,57f;
			break;
	}
}

struct<8> Function_48(vector3 vParam0) //Position: 0x1961 / 6497
{
	struct<2> Var0;
	
	Var0 = vParam0;
	Var0.f_4 = vParam0.y;
	Var0.f_8 = vParam0.z;
	return StackVal, Var0;
}

vector3 Function_49(var uParam0, struct<2> Param1, float fParam3, float fParam4, float fParam5, int iParam6) //Position: 0x1983 / 6531
{
	bool bVar0;
	struct<13> Var1;
	
	if (!&fParam5 <= &fParam4)
	{
		fVar10 = &fParam5;
		fParam5 = &fParam4;
		fParam4 = fVar10;
	}
	GET_CURVE_POINT(&uParam0, &fParam4, &Var1, 0);
	Function_48(&Var1);
	bVar11 = VDIST(Function_48(&Var1), Param1);
	vVar7 = { StackVal, StackVal, Var1 };
	while (Var1.f_12 >= &fParam5 && !bVar0)
	{
		Var4 = { StackVal, StackVal, Var1 };
		UNK_0x19D652F9(&uParam0, FABS(&fParam3), &Var4, &Var1);
		Function_48(&Var1);
		bVar12 = VDIST(Function_48(&Var1), Param1);
		if (bVar12 > bVar11)
		{
			bVar11 = bVar12;
			vVar7 = { StackVal, StackVal, Var1 };
		}
		if (Function_52(&Var1))
		{
			bVar0 = true;
		}
	}
	if (&iParam6 < 1 && &fParam3 < 1.0f)
	{
		UNK_0x19D652F9(&uParam0, (&fParam3 / 2.0f), &vVar7, &Var1);
		UNK_0x19D652F9(&uParam0, (-1.0f * (&fParam3 / 2.0f)), &vVar7, &Var4);
		Function_49(StackVal, &uParam0, Param1, (&fParam3 / 10.0f), Function_51(Var4.f_12, Var1.f_12), Function_50(Var4.f_12, Var1.f_12), (&iParam6 - 1));
		return StackVal, StackVal, Function_49(StackVal, &uParam0, Param1, (&fParam3 / 10.0f), Function_51(Var4.f_12, Var1.f_12), Function_50(Var4.f_12, Var1.f_12), (&iParam6 - 1));
	}
	return StackVal, StackVal, vVar7;
}

var Function_50(int iParam0, int iParam1) //Position: 0x1A85 / 6789
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

float Function_51(int iParam0, int iParam1) //Position: 0x1A98 / 6808
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool Function_52(struct<13> Param0) //Position: 0x1AAB / 6827
{
	if (Param0.f_12 > 0,001f || Param0.f_12 < 0,999f)
	{
		return 1;
	}
	return 0;
}

void Function_53() //Position: 0x1ACE / 6862
{
	*(&Global_42862 + 8) = CREATE_LAYOUT("UserGPS");
	*(&Global_42862 + 16) = CREATE_OBJECTSET_IN_LAYOUT("UserGPSPath", &Global_42862 + 8, 36, 1);
	*(&Global_42834 + 8) = CREATE_LAYOUT("MissionGPS");
	*(&Global_42834 + 16) = CREATE_OBJECTSET_IN_LAYOUT("MissionGPSPath", &Global_42834 + 8, 36, 1);
	*(&Global_42890 + 8) = CREATE_LAYOUT("PosseGPS");
	*(&Global_42890 + 16) = CREATE_OBJECTSET_IN_LAYOUT("PosseGPSPath", &Global_42890 + 8, 36, 1);
	return;
}

void Function_54(struct<57> Param0) //Position: 0x1B75 / 7029
{
	strcpy(&Param0 + 24, "QUEUED_MESSAGE", 16);
	Param0 = 8549;
	*(&Param0 + 8) = 7099;
	*(&Param0 + 16) = 7093;
	Param0.f_56 = 1;
	return;
}

void Function_55() //Position: 0x1BB5 / 7093
{
	return;
}

int Function_56() //Position: 0x1BBB / 7099
{
	struct<2> Var0;
	struct<2> Var2;
	float fVar4;
	
	if (Global_99485.f_920 < GET_CURRENT_GAME_TIME() || Function_64())
	{
		return 0;
	}
	if ((StackVal || !Function_63(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, IS_OBJECT_VALID(&Global_99485[019] + 64), Global_99485[019])) && Global_99485[019].f_80)
	{
		if (GET_OBJECT_TYPE(&Global_99485[019] + 64) == 15)
		{
			if (!IS_ACTOR_ALIVE(GET_ACTOR_FROM_OBJECT(&Global_99485[019] + 64)))
			{
				Function_62(0);
				return 0;
			}
		}
		GET_POSITION(&Global_54076, &Var0);
		GET_OBJECT_POSITION(&Global_99485[019] + 64, &Var2);
		if (VDIST(Var2, Var0) > Global_99485[019].f_72 || Global_99485[019].f_72 >= 0.0f)
		{
			fVar4 = 0.0f;
			if (STRING_LENGTH(&(Global_99485[019])) == 0 && Global_99485[019].f_80)
			{
				switch (Global_99485[019].f_76)
				{
					case 0x00000000:
						Function_61(&(Global_99485[019]), 4.0f, 0, 2, 1, 0);
						fVar4 = 4.0f;
						break;
					
					case 0x00000003:
						PRINT_SMALL_FORMAT(4.0f, &(Global_99485[019]), &Global_99485[019] + 84, "", "", "", 2, 0, 0);
						fVar4 = 4.0f;
						break;
					
					case 0x00000001:
						Function_60(&(Global_99485[019]), 10.0f, 1, 0, 2, 1, 0);
						fVar4 = 10.0f;
						break;
					
					case 0x00000004:
						PRINT_HELP_FORMAT(10.0f, &(Global_99485[019]), &Global_99485[019] + 84, "", "", "", 2, 0, 0);
						fVar4 = 10.0f;
						break;
					
					case 0x00000002:
						Function_57(&(Global_99485[019]), 7,5f, 1, 2, 0, 0, 0, 0);
						fVar4 = 7,5f;
						break;
					
					case 0x00000005:
						PRINT_OBJECTIVE_FORMAT(7,5f, &(Global_99485[019]), &Global_99485[019] + 84, "", "", "", 0, 2, 0, 0, 0);
						fVar4 = 7,5f;
						break;
				}
				Global_99485.f_920 = ((GET_CURRENT_GAME_TIME() + 0,5f) + fVar4);
				Function_62(0);
			}
		}
		else if (VDIST(Var2, Var0) <= Global_99485[019].f_72 && Global_99485[019].f_148)
		{
			Function_62(0);
		}
	}
	else if (Global_99485[019].f_80)
	{
		Function_62(0);
	}
	return 0;
}

void Function_57(char* cParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x1DDF / 7647
{
	struct<4> Var0;
	var uVar4;
	
	if (&bParam4)
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_58(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&cParam0, &iParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&cParam0, &iParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

struct<16> Function_58(int iParam0) //Position: 0x1E74 / 7796
{
	char* cVar0[16];
	
	if (!Function_59())
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

bool Function_59() //Position: 0x1EB3 / 7859
{
	if (Function_8(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_60(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x1ECE / 7886
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_58(Global_10966) };
		}
		PRINT_HELP_B(&cParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&cParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

void Function_61(char* cParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1F59 / 8025
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_58(Global_10966) };
		}
		PRINT_SMALL_B(&cParam0, &uParam1, &iParam2, &iParam3, &iParam4, &Var0, &iParam5);
	}
	else
	{
		uVar4 = "";
		PRINT_SMALL_B(&cParam0, &uParam1, &iParam2, &iParam3, &iParam4, &uVar4, &iParam5);
	}
}

void Function_62(int iParam0) //Position: 0x1FDE / 8158
{
	while (iParam0 <= (Global_99485 - 1))
	{
		Global_99485[iParam019] = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_99485[iParam0 + 119] };
		Global_99485[iParam019].f_76 = Global_99485[iParam0 + 119].f_76;
		*(&Global_99485[iParam019] + 84) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, (&Global_99485[iParam0 + 119] + 84) };
		Global_99485[iParam019].f_80 = Global_99485[iParam0 + 119].f_80;
		Global_99485[iParam019].f_148 = Global_99485[iParam0 + 119].f_148;
		Global_99485[iParam019].f_72 = Global_99485[iParam0 + 119].f_72;
		*(&Global_99485[iParam019] + 64) = &Global_99485[iParam0 + 119] + 64;
		iParam0++;
	}
	Global_99485[(Global_99485 - 1)19].f_76 = 0;
	strcpy(&Global_99485[(Global_99485 - 1)19] + 84, "", 32);
	Global_99485[(Global_99485 - 1)19].f_72 = 1.0f;
	(&Global_99485[(Global_99485 - 1)19] + 64) = "";
	strcpy(&(Global_99485[(Global_99485 - 1)19]), "", 32);
	Global_99485[(Global_99485 - 1)19].f_80 = 0;
	Global_99485[(Global_99485 - 1)19].f_148 = 0;
	return;
}

bool Function_63(struct<77> Param0) //Position: 0x210D / 8461
{
	if (((Param0.f_76 != 1 || Param0.f_76 != 4) || Param0.f_76 != 2) || Param0.f_76 != 5)
	{
		return 0;
	}
	return 1;
}

bool Function_64() //Position: 0x2138 / 8504
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_65() //Position: 0x2165 / 8549
{
	return;
}

void Function_66(struct<57> Param0) //Position: 0x216B / 8555
{
	strcpy(&Param0 + 24, "OUTFIT-MANAGER", 16);
	Param0 = 34559;
	*(&Param0 + 8) = 8625;
	*(&Param0 + 16) = 8619;
	Param0.f_56 = 0;
	return;
}

void Function_67() //Position: 0x21AB / 8619
{
	return;
}

int Function_68() //Position: 0x21B1 / 8625
{
	char* cVar0[32];
	bool bVar8;
	bool bVar9;
	var uVar10;
	
	if (!IS_ACTOR_VALID(&Global_54076))
	{
		return 0;
	}
	if (!IS_ACTOR_ALIVE(&Global_54076))
	{
		return 0;
	}
	Function_184();
	Function_180();
	if (!Function_179(13, 4))
	{
		if (Global_21369.f_244 == 5)
		{
			Function_178(13, 1, 0, 0, 0);
			Function_167(13, 1, 0, 0, 1);
		}
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "outfitScrap"))
	{
		if ((((!Global_6623 && !Global_6635) && !Global_6627) && !Function_64()) && Function_166() != 0)
		{
			bVar8 = DECOR_GET_INT(&Global_54076, "outfitScrap");
			strcpy(&cVar0, "OUT_", 32);
			stradd(&cVar0, &Global_42265[bVar89] + 32, 32);
			DECOR_REMOVE(&Global_54076, "outfitScrap");
			PRINT_OBJECTIVE_FORMAT(7,5f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "outfitDisc"))
	{
		if ((!Global_6623 && !Function_64()) && Function_166() != 0)
		{
			bVar8 = DECOR_GET_INT(&Global_54076, "outfitDisc");
			strcpy(&cVar0, "OUT_", 32);
			stradd(&cVar0, &Global_42265[bVar89] + 32, 32);
			DECOR_REMOVE(&Global_54076, "outfitDisc");
			PRINT_OBJECTIVE_FORMAT(7,5f, "out_Journal_Add", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
	}
	if (!Global_42826 != Global_42825)
	{
		bVar9 = GET_ACTOR_ENUM(&Global_54076);
		if (bVar9 != 0 && ((Global_42826 != 10 || Global_42826 != 9) || Global_42826 != 12))
		{
			LOG_ERROR("John cannot switch to US Marhsal, Military, or Bureau outfits");
			Global_42826 = Global_42825;
		}
		else
		{
			if (!Function_179(Global_42826, 1024))
			{
				STREAMING_REQUEST_ACTOR(bVar9, SHIFT_LEFT(true, Global_42265[Global_428269].f_20), false);
				STREAMING_EVICT_ACTOR(bVar9, SHIFT_LEFT(true, Global_42265[Global_428259].f_20));
				Function_165(Global_42826, 1024);
				Function_164(Global_42825, 1024);
				Function_164(Global_42825, 2048);
				Function_163(Global_42825);
			}
			if (!Function_179(Global_42826, 4096) && HUD_IS_FADED())
			{
				SWITCH_ACTOR_ENUM_VARIATION(&Global_54076, Global_42265[Global_428269].f_20);
				Function_165(Global_42826, 4096);
				Function_164(Global_42825, 4096);
			}
			if (!Function_179(Global_42826, 2048))
			{
				if (STREAMING_IS_ACTOR_LOADED(bVar9, 4294967295))
				{
					Function_165(Global_42826, 2048);
				}
			}
			if (!HUD_IS_FADED())
			{
				if (!HUD_IS_FADING())
				{
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
			}
			if ((HUD_IS_FADED() && Function_179(Global_42826, 2048)) && Function_179(Global_42826, 4096))
			{
				if (Global_42826 != 1 || Global_42825 != 1)
				{
					if (Global_43789 == Global_46914[0])
					{
						Function_157(0, 1, 0);
					}
				}
				Global_42825 = Global_42826;
				Function_149(Global_42826);
				if (Function_179(Global_42826, 8192))
				{
					Function_164(Global_42826, 8192);
					DECOR_SET_BOOL(&Global_54076, "OutfitChanged", 1);
					HUD_FADE_IN(0,25f, 1065353216);
				}
			}
		}
	}
	if (Function_1(0x1000000))
	{
		if (!Function_1(0x2000000))
		{
			STREAMING_REQUEST_ACTOR(true, SHIFT_LEFT(true, Global_42265[Global_428269].f_20), false);
			Function_148(0x2000000);
		}
		else if ((Function_1(0x2000000) && HUD_IS_FADED()) && GET_ACTOR_ENUM(&Global_54076) == 1)
		{
			uVar10 = Function_147(&Global_54076);
			Function_145();
			Global_54076 = RESPAWN_PLAYER_ACTOR_IN_LAYOUT(StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), &Global_54076, "player", 1, Global_54078, Vector(0.0f, uVar10, 0.0f), 0);
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
			SET_CAMERA_FOLLOW_ACTOR(&Global_54076);
			CAMERA_RESET(0);
			SET_AMBIENT_VOICE_NAME(&Global_54076, "PLAYER_JACK");
			ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 27, true);
			ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 28, true);
			Function_134(0x1000000);
			Function_134(0x2000000);
			HUD_FADE_IN(0,5f, 1065353216);
		}
	}
	bVar8 = false;
	while (bVar8 <= Global_42265)
	{
		if (Global_42265[bVar89] != 4294967295)
		{
			Function_88(bVar8);
			if (Function_70(bVar8))
			{
				if (Global_42265[bVar89].f_64 >= 0)
				{
					SET_JOURNAL_ENTRY_DISALLOW_TRACKING(Global_42265[bVar89].f_64, 0);
				}
			}
			else
			{
				if (Global_42265[bVar89].f_64 >= 0)
				{
					SET_JOURNAL_ENTRY_DISALLOW_TRACKING(Global_42265[bVar89].f_64, 1);
				}
				if (Global_42827 == bVar8)
				{
					Function_69();
				}
			}
		}
		bVar8++;
	}
	return 0;
}

void Function_69() //Position: 0x265B / 9819
{
	Global_42827 = 4294967295;
	if (IS_BLIP_VALID(&Global_42827 + 8))
	{
		REMOVE_BLIP(&Global_42827 + 8);
	}
	Global_42827.f_16 = 1;
	return;
}

bool Function_70(int iParam0) //Position: 0x2680 / 9856
{
	int iVar0;
	
	if (Function_87(iParam0))
	{
		if (Function_86(iParam0) && !Function_85(iParam0))
		{
			iVar0 = Function_84(iParam0);
			switch (iParam0)
			{
				case 0x00000004:
					switch (iVar0)
					{
						case 0x00000001:
							return 1;
							break;
						
						case 0x00000002:
							if (Function_81(6, 0) || Function_81(12, 0))
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
							if (Function_80(13))
							{
								if (Function_72(&(Global_99725[1443]), 14, 1, 1) && !Function_71(14))
								{
									return 1;
								}
								return 0;
							}
							if (Function_80(12))
							{
								if ((Function_72(&(Global_99725[1343]), 13, 1, 1) && !Function_71(13)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), &Global_99725[1343] + 240))
								{
									return 1;
								}
								return 0;
							}
							if (Function_80(11))
							{
								if ((Function_72(&(Global_99725[1243]), 12, 1, 1) && !Function_71(12)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), &Global_99725[1243] + 240))
								{
									return 1;
								}
								return 0;
							}
							if (Function_80(10))
							{
								if ((Function_72(&(Global_99725[1143]), 11, 1, 1) && !Function_71(11)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), &Global_99725[1143] + 240))
								{
									return 1;
								}
								return 0;
							}
							if (Function_81(5, 0))
							{
								if (Function_72(&(Global_99725[1043]), 10, 1, 1) && !Function_71(10))
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
							if (Function_80(26))
							{
								if (Function_72(&(Global_99725[2743]), 27, 1, 1) && !Function_71(27))
								{
									return 1;
								}
								return 0;
							}
							if (Function_80(25))
							{
								if (Function_72(&(Global_99725[2643]), 26, 1, 1) && !Function_71(26))
								{
									return 1;
								}
								return 0;
							}
							if (Function_80(24))
							{
								if (Function_72(&(Global_99725[2543]), 25, 1, 1) && !Function_71(25))
								{
									return 1;
								}
								return 0;
							}
							if (Function_80(23))
							{
								if (Function_72(&(Global_99725[2443]), 24, 1, 1) && !Function_71(24))
								{
									return 1;
								}
								return 0;
							}
							if (Function_81(26, 0))
							{
								if (Function_72(&(Global_99725[2343]), 23, 1, 1) && !Function_71(23))
								{
									return 1;
								}
								return 0;
							}
							return 0;
							break;
						
						case 0x00000008:
							if (Function_80(55))
							{
								if ((Function_72(&(Global_99725[5643]), 56, 1, 1) && !Function_71(56)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), &Global_99725[5643] + 240))
								{
									return 1;
								}
								return 0;
							}
							if (Function_80(54))
							{
								if ((Function_72(&(Global_99725[5543]), 55, 1, 1) && !Function_71(55)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), &Global_99725[5543] + 240))
								{
									return 1;
								}
								return 0;
							}
							if (Function_80(27))
							{
								if (Function_72(&(Global_99725[5443]), 54, 1, 1) && !Function_71(54))
								{
									return 1;
								}
								return 0;
							}
							return 0;
							break;
						
						case 0x00000020:
							if (Function_81(41, 0))
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
							if (Function_80(52))
							{
								if ((Function_72(&(Global_99725[5343]), 53, 1, 1) && !Function_71(53)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), &Global_99725[5343] + 240))
								{
									return 1;
								}
								return 0;
							}
							if (Function_80(51))
							{
								if (Function_72(&(Global_99725[5243]), 52, 1, 1) && !Function_71(52))
								{
									return 1;
								}
								return 0;
							}
							if (Function_80(50))
							{
								if (Function_72(&(Global_99725[5143]), 51, 1, 1) && !Function_71(51))
								{
									return 1;
								}
								return 0;
							}
							if (Function_80(49))
							{
								if (Function_72(&(Global_99725[5043]), 50, 1, 1) && !Function_71(50))
								{
									return 1;
								}
								return 0;
							}
							if (Function_81(17, 0))
							{
								if (Function_72(&(Global_99725[4943]), 49, 1, 1) && !Function_71(49))
								{
									return 1;
								}
								return 0;
							}
							return 0;
							break;
						
						case 0x00000020:
							if (Function_81(57, 0))
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
							if (Function_80(19))
							{
								if (Function_72(&(Global_99725[2043]), 20, 1, 1) && !Function_71(20))
								{
									return 1;
								}
								return 0;
							}
							if (Function_80(18))
							{
								if ((Function_72(&(Global_99725[1943]), 19, 1, 1) && !Function_71(19)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), &Global_99725[1943] + 240))
								{
									return 1;
								}
								return 0;
							}
							if (Function_80(17))
							{
								if (Function_72(&(Global_99725[1843]), 18, 1, 1) && !Function_71(18))
								{
									return 1;
								}
								return 0;
							}
							if (Function_80(16))
							{
								if ((Function_72(&(Global_99725[1743]), 17, 1, 1) && !Function_71(17)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), &Global_99725[1743] + 240))
								{
									return 1;
								}
								return 0;
							}
							if (Function_80(15))
							{
								if (Function_72(&(Global_99725[1643]), 16, 1, 1) && !Function_71(16))
								{
									return 1;
								}
								return 0;
							}
							if (Function_81(8, 0))
							{
								if (Function_72(&(Global_99725[1543]), 15, 1, 1) && !Function_71(15))
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

bool Function_71(int iParam0) //Position: 0x2C7A / 11386
{
	if (Global_116927[iParam06] == 7)
	{
		return 1;
	}
	return 0;
}

int Function_72(struct<265> Param0) //Position: 0x2C8F / 11407
{
	if (!Param0.f_260 != 0)
	{
		if (Function_79(&Param0 + 260, 4))
		{
			if (!Function_78(iParam1))
			{
				return 0;
			}
		}
		if (Function_79(&Param0 + 260, 1))
		{
			if (&Global_99725[Param0.f_25643] + 36 != &Global_99725[iParam143] + 36 || iParam3)
			{
				if (!Function_80(Param0.f_256))
				{
					return 0;
				}
			}
		}
		if (Function_79(&Param0 + 260, 2) && Global_6606)
		{
			if (!Function_81(Param0.f_264, 0))
			{
				return 0;
			}
		}
		if (Function_79(&Param0 + 260, 8) && Global_6606)
		{
			if (!Function_74(Param0.f_252, 0))
			{
				return 0;
			}
		}
		if (!&bParam2)
		{
			return 1;
		}
		return Function_73(&Param0);
	}
	return 1;
}

int Function_73(struct<261> Param0) //Position: 0x2D5B / 11611
{
	if (!Param0.f_260 != 0)
	{
		switch (Global_99472)
		{
			case 0x00000001:
				if (!Function_79(&Param0 + 260, 32))
				{
					return 0;
				}
				break;
			
			case 0x00000002:
				if (!Function_79(&Param0 + 260, 64))
				{
					return 0;
				}
				break;
			
			case 0x00000004:
				if (!Function_79(&Param0 + 260, 128))
				{
					return 0;
				}
				break;
			
			case 0x00000008:
				if (!Function_79(&Param0 + 260, 256))
				{
					return 0;
				}
				break;
			
			case 0x00000010:
				if (!Function_79(&Param0 + 260, 512))
				{
					return 0;
				}
				break;
			
			case 0x00000020:
				if (!Function_79(&Param0 + 260, 1024))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_74(int iParam0, bool bParam1) //Position: 0x2E16 / 11798
{
	if (!Function_75(iParam0))
	{
		return 0;
	}
	if (StackVal == 3)
	{
		return 1;
	}
	if (!&bParam1)
	{
		if (StackVal == 4)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_75(int iParam0) //Position: 0x2E4D / 11853
{
	if (!Function_77(iParam0))
	{
		return 0;
	}
	if (!Function_76(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_76(int iParam0) //Position: 0x2E71 / 11889
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_77(int iParam0) //Position: 0x2E86 / 11910
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

bool Function_78(int iParam0) //Position: 0x2E9D / 11933
{
	return Global_116927[iParam06].f_16;
}

bool Function_79(var uParam0, int iParam1) //Position: 0x2EAD / 11949
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_80(int iParam0) //Position: 0x2ECA / 11978
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

bool Function_81(int iParam0, bool bParam1) //Position: 0x2EDF / 11999
{
	int iVar0;
	
	iVar0 = Function_82(iParam0);
	if (!Function_77(iVar0))
	{
		return 0;
	}
	if (StackVal == 3)
	{
		return 1;
	}
	if (!&bParam1)
	{
		if (StackVal == 4)
		{
			return 1;
		}
	}
	return 0;
}

int Function_82(int iParam0) //Position: 0x2F1D / 12061
{
	if (!Function_83(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_83(int iParam0) //Position: 0x2F37 / 12087
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

int Function_84(int iParam0) //Position: 0x2F4D / 12109
{
	int iVar0;
	int iVar1;
	
	if (!Function_87(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_42265[iParam09].f_28)
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

bool Function_85(int iParam0) //Position: 0x2F9C / 12188
{
	if (!Function_87(iParam0))
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

bool Function_86(int iParam0) //Position: 0x2FED / 12269
{
	if (!Function_87(iParam0))
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

bool Function_87(int iParam0) //Position: 0x303F / 12351
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

void Function_88(int iParam0) //Position: 0x3055 / 12373
{
	int iVar0;
	
	if (!Function_87(iParam0))
	{
		return;
	}
	if (Function_85(iParam0))
	{
		return;
	}
	if (!Function_179(iParam0, 1048576))
	{
		return;
	}
	iVar0 = Function_133(iParam0);
	if (iVar0 >= Global_42265[iParam09].f_24)
	{
		Global_42265[iParam09].f_24 = iVar0;
		if (Global_42265[iParam09].f_24 == Global_42265[iParam09].f_28)
		{
			Function_89(iParam0, 0, 1);
		}
	}
	return;
}

void Function_89(bool bParam0, bool bParam1, bool bParam2) //Position: 0x30B8 / 12472
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_87(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_85(bParam0))
	{
		if (!Function_86(bParam0))
		{
			Function_178(bParam0, 1, 0, 0, 1);
		}
		strcpy(&cVar0, "OUT_", 32);
		strcpy(&cVar8, "out_", 32);
		stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
		stradd(&cVar8, &Global_42265[bParam09] + 32, 32);
		stradd(&cVar8, "_desc", 32);
		if (Global_42265[bParam09].f_64 != 4294967295 || (Global_42265[bParam09].f_64 != 0 && Global_42265[bParam09].f_28 < 0))
		{
			Global_42265[bParam09].f_64 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		}
		if (Global_42265[bParam09].f_64 == 4294967295 && Global_42265[bParam09].f_64 == 0)
		{
			CLEAR_JOURNAL_ENTRY(Global_42265[bParam09].f_64);
			PREPEND_JOURNAL_ENTRY(Global_42265[bParam09].f_64, true);
			PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &cVar8, 0, 2, false);
			SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, -1.0f, false, 0);
			if (!&bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
			}
		}
		Function_131(457, 1, 0, 0);
		Function_165(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (&bParam2)
		{
			if (!Function_130(0, 0, 1, 1))
			{
				Function_92(1);
				Function_91(1, 0);
			}
			else
			{
				Function_90();
			}
		}
	}
	return;
}

void Function_90() //Position: 0x3259 / 12889
{
	return;
}

void Function_91(int iParam0, int iParam1) //Position: 0x325F / 12895
{
	if (Global_6624)
	{
		return;
	}
	Global_6655 = iParam0;
	Global_6659 = iParam1;
	if (!Global_6606 && 1)
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", 1);
	return;
}

void Function_92(bool bParam0) //Position: 0x329E / 12958
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_121();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_94();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_93(&Global_99144, 1);
		Function_93(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_93(int iParam0, int iParam1) //Position: 0x32F3 / 13043
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
	return;
}

void Function_94() //Position: 0x3309 / 13065
{
	Function_119();
	Function_118();
	Function_118();
	Function_117();
	Function_117();
	Function_116();
	Function_116();
	Function_99(0);
	Function_99(0);
	Function_145();
	Function_98();
	Function_97();
	Function_96();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_95();
	return;
}

void Function_95() //Position: 0x3354 / 13140
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

void Function_96() //Position: 0x345A / 13402
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

void Function_97() //Position: 0x348D / 13453
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

void Function_98() //Position: 0x3620 / 13856
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

struct<8> Function_99(int iParam0) //Position: 0x37D9 / 14297
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
					iVar2 = ((Function_115((50 + iVar4)) + Function_115((183 + iVar4))) + Function_115((90 + iVar4)));
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
	Function_100(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_100(int iParam0, bool bParam1, bool bParam2) //Position: 0x3880 / 14464
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
		Function_114(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_113(iParam0);
	if (&bParam2)
	{
		Function_101(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_101(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x3B1C / 15132
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_112(390))), 32);
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
					bVar19 = (Function_111(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_111(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_109(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_106(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_104(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_103(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_102(), &Var9);
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

var Function_102() //Position: 0x415B / 16731
{
	int iVar0;
	
	return &iVar0;
}

var Function_103(int iParam0) //Position: 0x4164 / 16740
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_104(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x4175 / 16757
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_105("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_105("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_105("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_105(char* cParam0) //Position: 0x426C / 17004
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_106(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x4287 / 17031
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_108(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_107(Function_108(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_107(int iParam0, int iParam1) //Position: 0x42EE / 17134
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_108(int iParam0, bool bParam1) //Position: 0x4300 / 17152
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_109(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x4312 / 17170
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
	if (((Function_110(iParam0) != 19 || Function_110(iParam0) != 17) || Function_110(iParam0) != 10) || Function_110(iParam0) != 9)
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

int Function_110(int iParam0) //Position: 0x4446 / 17478
{
	return Global_55480[iParam016].f_96;
}

bool Function_111(int iParam0) //Position: 0x4455 / 17493
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_112(int iParam0) //Position: 0x448E / 17550
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_113(int iParam0) //Position: 0x44CB / 17611
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

int Function_114(int iParam0, bool bParam1, bool bParam2) //Position: 0x4665 / 18021
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

int Function_115(bool bParam0) //Position: 0x48A9 / 18601
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_116() //Position: 0x48EA / 18666
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
		iVar2 = ((Function_115((50 + iVar3) + 15) + Function_115((183 + iVar3) + 15)) + Function_115((90 + iVar3) + 15));
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
	Function_100(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_117() //Position: 0x4973 / 18803
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
			iVar2 = ((Function_115((50 + iVar3) + 8) + Function_115((183 + iVar3) + 8)) + Function_115((90 + iVar3) + 8));
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
	Function_100(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_118() //Position: 0x4A0A / 18954
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
		iVar2 = ((Function_115((50 + iVar3)) + Function_115((183 + iVar3))) + Function_115((90 + iVar3)));
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
	Function_100(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_119() //Position: 0x4A89 / 19081
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_120(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_100(8, (GET_DAY(0) - 2), 0);
	return;
}

int Function_120(int iParam0, bool bParam1, int iParam2) //Position: 0x4AC6 / 19142
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
	Function_114(iParam0, bParam1, 1);
	Function_113(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_101(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_121() //Position: 0x4CD2 / 19666
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_59())
	{
		Function_127(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_127(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_122(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_122(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_21(StackVal, Var0))
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

struct<8> Function_122(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0x4D89 / 19849
{
	int iVar0;
	
	iVar0 = Function_126(&uParam2, &fParam3);
	if (Function_125(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_124(&Global_99144, 1);
			Function_93(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_124(&Global_99144, 2);
			Function_93(&Global_99144, 1);
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
		Function_124(&Global_99144, 2);
		Function_93(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_123();
	return StackVal, Function_123();
}

struct<8> Function_123() //Position: 0x4E81 / 20097
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_124(var uParam0, int iParam1) //Position: 0x4E8B / 20107
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_125(int iParam0) //Position: 0x4E9C / 20124
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_126(bool bParam0, bool bParam1) //Position: 0x4EB2 / 20146
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
				fVar2 = Function_46(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
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
		fVar2 = Function_46(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_125(iVar0) && !&bParam1)
	{
		iVar0 = Function_126(&bParam0, 1);
	}
	return iVar0;
}

struct<8> Function_127(float fParam0, int iParam1) //Position: 0x4F7E / 20350
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_129(&Global_54076, &Var3);
	if (!Function_128(Global_46760[0]))
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
	if (!Function_128(Global_46760[2]))
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
	if (!Function_128(Global_46760[1]))
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
	if (!Function_128(Global_46796[1]))
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
	if (!Function_128(Global_46796[3]))
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
	if (!Function_128(Global_46796[2]))
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
	if (!Function_128(Global_46796[4]))
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
	if (!Function_128(Global_46816[0]))
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
	if (!Function_128(Global_46816[1]))
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
	if (!Function_128(Global_46816[2]))
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
	if (!Function_128(Global_46838[0]))
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
	if (!Function_128(Global_46850[0]))
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
	if (!Function_128(Global_46850[1]))
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
	if (!Function_128(Global_46850[2]))
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
	if (!Function_128(Global_46866[0]))
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
	if (!Function_128(Global_46866[1]))
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
	if (!Function_128(Global_46866[2]))
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
	if (!Function_128(Global_46894[2]))
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
	if (!Function_128(Global_46894[3]))
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
	if (!Function_128(Global_46894[0]))
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
	if (!Function_128(Global_46914[0]))
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
	if (!Function_128(Global_46926[2]))
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
	if (!Function_128(Global_46926[1]))
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
	if (!Function_128(Global_46926[0]))
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
	if (!Function_128(Global_46838[1]))
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
	if (!Function_128(Global_46894[1]))
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
	Function_124(&Global_99144, 2);
	Function_93(&Global_99144, 1);
	iParam1 = 0;
	if (Function_21(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_128(int iParam0) //Position: 0x57AA / 22442
{
	bool bVar0;
	
	bVar0 = Global_43791[iParam0];
	return (((Function_8(bVar0, 0x1000000) || Function_8(bVar0, 0x2000000)) || Function_8(bVar0, 0x4000000)) || !Function_8(bVar0, 0x10000000));
}

void Function_129(var uParam0, int iParam1) //Position: 0x57E5 / 22501
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

bool Function_130(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x57F4 / 22516
{
	iParam0 = &iParam0;
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
	if (Global_6636 && iParam2)
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
	if (Global_93258 && iParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

int Function_131(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x58A3 / 22691
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
	Function_114(iParam0, TO_FLOAT(bParam1), 1);
	Function_113(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_101(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_132(iParam0);
	return 1;
}

void Function_132(int iParam0) //Position: 0x5ACB / 23243
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

var Function_133(int iParam0) //Position: 0x5B69 / 23401
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_87(iParam0))
	{
		return 4294967295;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_42265[iParam09].f_28)
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

void Function_134(bool bParam0) //Position: 0x5BBF / 23487
{
	bool bVar0;
	
	if (Function_8(bParam0, 1) && Function_8(Global_39556, 1))
	{
	}
	bVar0 = (Global_39556 && bParam0);
	Global_39556 = (Global_39556 - bVar0);
	Global_39556 |= 1073741824;
	return;
}

void Function_135() //Position: 0x5BF3 / 23539
{
	Function_136(&Global_42918);
	return;
}

void Function_136(struct<2317> Param0) //Position: 0x5BFF / 23551
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	var uVar5;
	bool bVar6;
	int iVar7;
	
	bVar4 = false;
	while (bVar4 < (39 - 1))
	{
		SET_WEAPONENUM_LOCKED(bVar4, (*&Param0 + 2320)[bVar4]);
		bVar4++;
	}
	uVar5 = Function_28();
	if (IS_ACTOR_VALID(&uVar5))
	{
		iVar0 = 0;
		while (iVar0 < (Param0.f_1060 - 1))
		{
			bVar6 = IS_ITEM_WEAPON_BY_CRC((*&Param0 + 92)[iVar0]);
			if (bVar6)
			{
				iVar7 = GET_WEAPON_ENUM_FROM_CRC((*&Param0 + 92)[iVar0]);
				if (iVar7 == 31)
				{
					if (Function_8(Global_131807.f_1304, 64))
					{
						ADD_ITEM_BY_CRC((*&Param0 + 92)[iVar0], &uVar5, 0);
					}
				}
				else if (iVar7 == 29)
				{
					if (Function_8(Global_131807.f_1304, 32))
					{
						ADD_ITEM_BY_CRC((*&Param0 + 92)[iVar0], &uVar5, 0);
					}
				}
				else
				{
					ADD_ITEM_BY_CRC((*&Param0 + 92)[iVar0], &uVar5, 0);
				}
			}
			else
			{
				ADD_ITEM_BY_CRC((*&Param0 + 92)[iVar0], &uVar5, 0);
			}
			if (StackVal && bVar6 < 0)
			{
				ACTOR_SET_WEAPON_AMMO_BY_CRC(StackVal, &uVar5, TO_FLOAT((*&Param0 + 92)[iVar0]));
			}
			else
			{
				bVar4 = false;
				while (StackVal < (bVar4 - 2))
				{
					ADD_ITEM_BY_CRC((*&Param0 + 92)[iVar0], &uVar5, 0);
					bVar4++;
				}
			}
			iVar0++;
		}
		iVar1 = (Param0.f_88 - 1);
		while (iVar1 > 0)
		{
			ADD_ACCESSORY_BY_CRC(Param0[iVar1], &uVar5, 0);
			iVar1 = (iVar1 - 1);
		}
		Function_142(1);
		if (Function_59())
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
			_ADD_AMMO_OF_TYPE(&uVar5, bVar2, (*&Param0 + 1064)[bVar2], 0, 0);
			bVar2++;
		}
		iVar3 = 0;
		while (iVar3 < (7 - 1))
		{
			if ((*&Param0 + 1208)[iVar3] != 4294967295)
			{
				if ((*&Param0 + 1208)[iVar3] == 31)
				{
					if (Function_8(Global_131807.f_1304, 64))
					{
						ACTOR_SET_NEXT_WEAPON(&uVar5, (*&Param0 + 1208)[iVar3]);
					}
				}
				else if ((*&Param0 + 1208)[iVar3] == 29)
				{
					if (Function_8(Global_131807.f_1304, 32))
					{
						ACTOR_SET_NEXT_WEAPON(&uVar5, (*&Param0 + 1208)[iVar3]);
					}
				}
				else
				{
					ACTOR_SET_NEXT_WEAPON(&uVar5, (*&Param0 + 1208)[iVar3]);
				}
			}
			iVar3++;
		}
		iVar0 = (Param0.f_2316 - 1);
		while (iVar0 > 0)
		{
			ADD_ITEM_BY_CRC((*&Param0 + 1284)[iVar0], &uVar5, 0);
			bVar4 = false;
			while (StackVal < (bVar4 - 2))
			{
				ADD_ITEM_BY_CRC((*&Param0 + 1284)[iVar0], &uVar5, 0);
				bVar4++;
			}
			iVar0 = (iVar0 - 1);
		}
		if (Param0.f_1276 != 4294967295)
		{
			if (Param0.f_1276 == 31)
			{
				if (!Function_8(Global_131807.f_1304, 64))
				{
					Param0.f_1276 = 8;
				}
			}
			ACTOR_SET_NEXT_WEAPON(&uVar5, Param0.f_1280);
		}
		else if (Param0.f_1280 != 4294967295)
		{
			if (Param0.f_1280 == 31)
			{
				if (!Function_8(Global_131807.f_1304, 64))
				{
					Param0.f_1280 = 8;
				}
			}
			ACTOR_SET_NEXT_WEAPON(&uVar5, Param0.f_1280);
		}
		if (Param0.f_1272 == 4294967295 && Global_53524.f_28)
		{
			ACTOR_PUT_WEAPON_IN_HAND(&uVar5, Param0.f_1272, 0);
		}
	}
	return;
}

void Function_137() //Position: 0x5F3F / 24383
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

void Function_138(bool bParam0, float fParam1) //Position: 0x5F6F / 24431
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
	if (ACTOR_HAS_WEAPON(&Global_54076, bParam0))
	{
		_SET_ACTOR_MAX_AMMO_AMOUNT(&Global_54076, bVar0, (_GET_MAX_AMMO_AMOUNT(&Global_54076, bVar0) * fParam1));
	}
	return;
}

void Function_139() //Position: 0x6002 / 24578
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	if (Function_141(3) == 10)
	{
		iVar0 = 2;
	}
	iVar1 = Function_140(3);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_140(6);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_140(0);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_140(1);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_140(8);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_140(4);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_140(12);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_140(5);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_140(2);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_140(30);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_140(31);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_140(32);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_140(33);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_140(34);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_140(35);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_140(36);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_140(37);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_140(38);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_140(39);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_140(40);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_140(41);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_140(42);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_140(43);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_140(44);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_140(45);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_140(46);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_140(47);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_140(48);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_140(49);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_140(50);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_140(51);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_140(7);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_140(9);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	return;
}

int Function_140(bool bParam0) //Position: 0x6261 / 25185
{
	int iVar0;
	
	iVar0 = SS_GET_STRING(1, bParam0);
	if (!IS_STRING_VALID(&iVar0))
	{
		PRINTSTRING("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value:");
		PRINTINT(bParam0);
		PRINTNL();
		LOG_ERROR("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value! Ask Christian to add it");
	}
	return &iVar0;
}

int Function_141(int iParam0) //Position: 0x6355 / 25429
{
	if (0 | Global_53524.f_44)
	{
		return StackVal;
	}
	return StackVal;
}

void Function_142(int iParam0) //Position: 0x637D / 25469
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	
	uVar0 = Function_28();
	if (!Function_144(1) || iParam0)
	{
		if (HAS_ITEM(Function_140(20), &uVar0))
		{
			Function_143(1, 1);
		}
	}
	bVar2 = GET_WEAPON_EQUIPPED(&uVar0, 5);
	if (GET_ITEM_IN_HAND_EQUIPSLOT(&uVar0) == 5)
	{
		bVar2 = GET_WEAPON_IN_HAND(&uVar0);
	}
	bVar3 = GET_WEAPON_EQUIPPED(&uVar0, 6);
	if (bVar3 == 4294967295)
	{
		if (GET_ITEM_IN_HAND_EQUIPSLOT(&uVar0) == 6)
		{
			bVar3 = GET_WEAPON_IN_HAND(&uVar0);
		}
	}
	bVar4 = GET_WEAPON_EQUIPPED(&uVar0, true);
	if (GET_ITEM_IN_HAND_EQUIPSLOT(&uVar0) == 1)
	{
		bVar4 = GET_WEAPON_IN_HAND(&uVar0);
	}
	bVar5 = GET_AMMOENUM_FOR_WEAPONENUM(bVar2);
	bVar6 = GET_AMMOENUM_FOR_WEAPONENUM(bVar4);
	if (!Function_144(1))
	{
		iVar1 = 0;
		while (iVar1 <= 7)
		{
			ACTOR_ENABLE_VARIABLE_MESH(&uVar0, iVar1, false);
			iVar1++;
		}
	}
	else if (bVar2 != 4294967295)
	{
		bVar7 = CEIL(_GET_AMMO_AMOUNT(&uVar0, bVar5, 0));
		if (bVar7 == Global_21369.f_148 || bVar5 == Global_21369.f_152)
		{
			Global_21369.f_148 = bVar7;
			Global_21369.f_152 = bVar5;
			iVar1 = 0;
			while (iVar1 <= 7)
			{
				if (iVar1 <= (Global_21369.f_148 / 7))
				{
					ACTOR_ENABLE_VARIABLE_MESH(&uVar0, iVar1, true);
				}
				else
				{
					ACTOR_ENABLE_VARIABLE_MESH(&uVar0, iVar1, false);
				}
				iVar1++;
			}
		}
	}
	iVar1 = 0;
	while (iVar1 <= 10)
	{
		ACTOR_ENABLE_VARIABLE_MESH(&uVar0, iVar1 + 7, false);
		iVar1++;
	}
	if (bVar4 != 4294967295)
	{
		bVar8 = CEIL(_GET_AMMO_AMOUNT(&uVar0, bVar6, 0));
		if (bVar8 == Global_21369.f_156 || bVar6 == Global_21369.f_160)
		{
			Global_21369.f_156 = bVar8;
			Global_21369.f_160 = bVar6;
			iVar1 = 0;
			while (iVar1 <= 5)
			{
				if (iVar1 <= (Global_21369.f_156 / 6))
				{
					ACTOR_ENABLE_VARIABLE_MESH(&uVar0, iVar1 + 17, true);
				}
				else
				{
					ACTOR_ENABLE_VARIABLE_MESH(&uVar0, iVar1 + 17, false);
				}
				iVar1++;
			}
		}
	}
	return;
}

void Function_143(int iParam0, bool bParam1) //Position: 0x652D / 25901
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

bool Function_144(int iParam0) //Position: 0x66B3 / 26291
{
	return (*&Global_21369 + 168)[iParam0];
}

void Function_145() //Position: 0x66C2 / 26306
{
	Function_146(&Global_42918, 1, 0);
	return;
}

void Function_146(struct<2317> Param0) //Position: 0x66D0 / 26320
{
	var uVar0;
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
	
	uVar0 = Function_28();
	if (IS_ACTOR_VALID(&uVar0))
	{
		Param0.f_1060 = GET_NUM_WEAPONS_IN_INVENTORY(&uVar0);
		iVar7 = 4294967294;
		bVar8 = GET_WEAPON_IN_HAND(&uVar0);
		if (bVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(&uVar0, bVar8) || iParam2)
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
			bVar10 = iVar4;
			(*&Param0 + 1208)[iVar4] = GET_WEAPON_EQUIPPED(&uVar0, bVar10);
			if ((*&Param0 + 1208)[iVar4] == 4294967295)
			{
				if (GET_ITEM_EQUIPSLOT(bVar8) == bVar10)
				{
					(*&Param0 + 1208)[iVar4] = bVar8;
					Param0.f_1272 = bVar8;
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
		bVar12 = ACTOR_GET_NEXT_EQUIP_SLOT(&uVar0);
		if (bVar12 != 4294967295)
		{
			Param0.f_1276 = GET_WEAPON_EQUIPPED(&uVar0, bVar12);
		}
		else
		{
			Param0.f_1276 = 4294967295;
		}
		bVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(&uVar0);
		if (bVar13 != 4294967295)
		{
			Param0.f_1280 = GET_WEAPON_EQUIPPED(&uVar0, bVar13);
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

var Function_147(int iParam0) //Position: 0x68ED / 26861
{
	return GET_HEADING(&iParam0);
}

void Function_148(bool bParam0) //Position: 0x68F9 / 26873
{
	if (Function_8(bParam0, 1) && !Function_8(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || bParam0);
	Global_39556 |= 1073741824;
	return;
}

void Function_149(int iParam0) //Position: 0x6926 / 26918
{
	int iVar0;
	int iVar1;
	
	if (!Function_87(iParam0))
	{
		LOG_ERROR("Attempting to do the SpecialEffects for an invalid outfit");
		return;
	}
	if (Global_42265[iParam09].f_12 & 1 >= 0)
	{
		SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, Global_42265[iParam09].f_16, true);
		iVar0 = GET_ACTOR_FACTION(&Global_54076);
	}
	if (Global_42265[iParam09].f_12 & 2 >= 0)
	{
		Function_156(78, 1, 1);
		if (!Function_155(Global_119935, 64))
		{
			Function_150(&Global_54076, 64, 2, 0);
		}
	}
	if (Global_42265[iParam09].f_12 & 32 >= 0)
	{
		SET_DEADEYE_REGENERATION_RATE_MULTIPLIER(0, 2.0f);
		SET_DEADEYE_POINT_MODIFIER(0, 2.0f);
	}
	if (Global_42265[iParam09].f_12 & 64 >= 0)
	{
		SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, Global_42265[iParam09].f_16, 3);
		iVar1 = GET_ACTOR_FACTION(&Global_54076);
		DECOR_SET_BOOL(&Global_54076, "zMarston", 1);
		DECOR_SET_BOOL(&Global_54076, "zombie", 1);
		RESET_ACTIONTREE_FOR_ACTOR(&Global_54076);
	}
	if (Global_42265[iParam09].f_12 & 128 >= 0)
	{
		ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 23, true);
		ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 25, true);
	}
	return;
}

void Function_150(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x6A5C / 27228
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_152(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_151(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_151(char* cParam0) //Position: 0x6AD1 / 27345
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

bool Function_152(int iParam0, var uParam1, int iParam2) //Position: 0x6B0B / 27403
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
		if (Function_154(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_153(uVar0))
		{
			case 0x00000002:
				if (!Function_155(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_153(char* cParam0) //Position: 0x6B87 / 27527
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

int Function_154(int iParam0) //Position: 0x6C28 / 27688
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_93(&iVar1, 2147483648);
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

bool Function_155(var uParam0, int iParam1) //Position: 0x6C65 / 27749
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_156(bool bParam0, bool bParam1, int iParam2) //Position: 0x6C78 / 27768
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_140(bParam0), Function_28()) == 0)
		{
			ADD_ITEM(Function_140(bParam0), Function_28(), &iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_140(bParam0), Function_28(), &iParam2);
	return 1;
}

void Function_157(var uParam0, bool bParam1, int iParam2) //Position: 0x6CC6 / 27846
{
	int iVar0;
	
	iVar0 = 0;
	if (IS_SCRIPT_VALID(&Global_46717))
	{
		TERMINATE_SCRIPT(&Global_46717);
	}
	if (IS_GAME_RESETTING())
	{
		bParam1 = 0;
	}
	if (&bParam1)
	{
		if (Function_17(Global_43789))
		{
			Function_162(&(Global_43791[Global_43789]), 131072);
			Function_161(&(Global_43791[Global_43789]), 2097152);
			Function_159(Global_43789);
		}
		else
		{
			bParam1 = 0;
		}
	}
	if (!&bParam1)
	{
		if (!HUD_IS_FADED())
		{
		}
		iVar0 = 0;
		while (iVar0 <= 146)
		{
			if (!StackVal != 1)
			{
				if (Function_158(&(Global_43791[iVar0]), 4) || Function_158(&(Global_43791[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(&Global_44085[iVar09] + 40))
					{
						TERMINATE_SCRIPT(&Global_44085[iVar09] + 40);
					}
					Function_161(&(Global_43791[iVar0]), 2097155);
					Function_162(&(Global_43791[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_6629 = 0;
		Global_6630 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			WAIT(false);
		}
		if (uParam0 & 1)
		{
			DESTROY_GC_OBJECTS(0, 1);
		}
		CLEAN_CACHE_ENTRIES();
		ENABLE_AMBIENT_SPAWNING(false);
	}
	return;
}

bool Function_158(var uParam0, int iParam1) //Position: 0x6DD2 / 28114
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_159(int iParam0) //Position: 0x6DEF / 28143
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_6629))
	{
		if (StackVal == 2)
		{
			if (Function_160())
			{
				return;
			}
		}
		if (!Function_158(&(Global_43791[iParam0]), 2048))
		{
			Global_46719 = iParam0;
		}
		Global_43790 = StackVal;
	}
	else if (Global_6629)
	{
	}
	return;
}

bool Function_160() //Position: 0x6E6E / 28270
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_158(&(Global_43791[iVar0]), 4) || Function_158(&(Global_43791[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_161(var uParam0, int iParam1) //Position: 0x6ED7 / 28375
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_162(var uParam0, int iParam1) //Position: 0x6EF1 / 28401
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_163(int iParam0) //Position: 0x6F02 / 28418
{
	if (!Function_87(iParam0))
	{
		LOG_ERROR("Attempting to undo the SpecialEffects for an invalid outfit");
		return;
	}
	if (Global_42265[iParam09].f_12 & 1 >= 0)
	{
		RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, Global_42265[iParam09].f_16);
	}
	if (Global_42265[iParam09].f_12 & 2 >= 0)
	{
	}
	if (Global_42265[iParam09].f_12 & 32 >= 0)
	{
		SET_DEADEYE_REGENERATION_RATE_MULTIPLIER(0, 1.0f);
		SET_DEADEYE_POINT_MODIFIER(0, 1.0f);
	}
	if (Global_42265[iParam09].f_12 & 64 >= 0)
	{
	}
	if (Global_42265[iParam09].f_12 & 128 >= 0)
	{
	}
	return;
}

void Function_164(int iParam0, int iParam1) //Position: 0x6FB8 / 28600
{
	int iVar0;
	
	if (!Function_87(iParam0))
	{
		LOG_ERROR("Attempting to unset status on invalid outfit");
		return;
	}
	iVar0 = (StackVal && iParam1);
	Global_42265[iParam09].f_8 = (StackVal - iVar0);
	return;
}

void Function_165(bool bParam0, int iParam1) //Position: 0x701D / 28701
{
	if (!Function_87(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

int Function_166() //Position: 0x7072 / 28786
{
	return Function_8(StackVal, 1);
}

void Function_167(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x7081 / 28801
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	if (!Function_87(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_177(3) || iParam3)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_179(bParam0, 2))
	{
		Function_131(456, 1, 0, 0);
		Function_165(bParam0, 2);
		if (!&bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_60(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = &bParam2;
	if (!Function_176(bParam0, bParam1))
	{
		Global_42265[bParam09].f_4 = (StackVal || bParam1);
		Function_165(bParam0, 1048576);
		if (&bParam4)
		{
			if (!Function_130(0, 0, 1, 1))
			{
				Function_92(1);
				Function_91(1, 0);
			}
			else
			{
				Function_90();
			}
		}
		Function_172(bParam0);
		if (StackVal && !Function_8(((((!Function_64() && !Global_6623) && !Global_6635) && !Global_6627) && !&bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_8((((Function_64() || Global_6623) || Global_6635) || Global_6627), 1))
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitScrap"))
			{
				DECOR_SET_INT(&Global_54076, "outfitScrap", bParam0);
			}
		}
		if (!Function_59())
		{
			if (!Function_155(Global_119934, 2))
			{
				Function_150(&Global_54076, 2, 1, 0);
			}
		}
		if (Global_42827 == bParam0)
		{
			Global_42827.f_16 = 1;
			Function_170();
		}
		Global_42827.f_16 = 1;
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

void Function_168(int iParam0, int iParam1) //Position: 0x7320 / 29472
{
	bool bVar0;
	
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	bVar0 = SHIFT_LEFT(true, &iParam1);
	(*&Global_21369 + 260)[iParam0] = ((*&Global_21369 + 260)[iParam0] || bVar0);
	return;
	return;
}

void Function_169(int iParam0, bool bParam1) //Position: 0x738A / 29578
{
	if (iParam0 < 16 || iParam0 != 4294967295)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	if (&bParam1 > 0)
	{
		(*&Global_21369 + 260)[iParam0] = ((*&Global_21369 + 260)[iParam0] || bParam1);
	}
	return;
	return;
}

void Function_170() //Position: 0x73F9 / 29689
{
	if (Function_87(Global_42827))
	{
		if (Global_42827.f_16)
		{
			if (IS_BLIP_VALID(&Global_42827 + 8))
			{
				REMOVE_BLIP(&Global_42827 + 8);
			}
			Global_42827.f_4 = Function_84(Global_42827);
			*(&Global_42827 + 8) = Function_171(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
		else if (!IS_BLIP_VALID(&Global_42827 + 8))
		{
			Global_42827.f_4 = Function_84(Global_42827);
			*(&Global_42827 + 8) = Function_171(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
	}
	return;
}

int Function_171(int iParam0, int iParam1) //Position: 0x7479 / 29817
{
	struct<2> Var0;
	struct<9> Var2;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	
	iVar13 = 1;
	iVar14 = 1;
	iVar15 = 1;
	iVar16 = 1;
	iVar17 = 1;
	switch (iParam0)
	{
		case 0x00000000:
			break;
		
		case 0x00000004:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46796[2]9] + 8;
					strcpy(&cVar5, "out_dnd_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_81(6, 0) || Function_81(12, 0))
					{
						cVar4 = &Global_44085[Global_46760[1]9] + 8;
					}
					strcpy(&cVar5, "out_dnd_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_dnd_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_dnd_blip4", 32);
					break;
				
				case 0x00000010:
					Var0 = Vector(-2177,057f, 16,426f, 2626,285f);
					vVar2 = Vector(400.0f, 400.0f, 400.0f);
					strcpy(&cVar5, "out_dnd_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_dnd_blip6", 32);
					break;
			}
			break;
		
		case 0x00000005:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_rustler_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46816[0]9] + 8;
					strcpy(&cVar5, "out_rustler_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46816[0]9] + 8;
					strcpy(&cVar5, "out_rustler_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46816[0]9] + 8;
					strcpy(&cVar5, "out_rustler_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46736[2]9] + 8;
					vVar2 = Vector(400.0f, 400.0f, 400.0f);
					strcpy(&cVar5, "out_rustler_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_rustler_blip6", 32);
					break;
			}
			break;
		
		case 0x00000006:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46796[7]9] + 8;
					strcpy(&cVar5, "out_treasur_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_80(13) && iVar14)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar14 = 0;
					}
					else if (iVar14 && Function_81(5, 0))
					{
						Var0 = Vector(-4120,147f, 18,356f, 3039,531f);
						vVar2 = Vector(500.0f, 500.0f, 500.0f);
						iVar14 = 0;
					}
					strcpy(&cVar5, "out_treasur_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46796[1]9] + 8;
					strcpy(&cVar5, "out_treasur_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46796[1]9] + 8;
					strcpy(&cVar5, "out_treasur_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46796[3]9] + 8;
					strcpy(&cVar5, "out_treasur_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_treasur_blip6", 32);
					break;
			}
			break;
		
		case 0x00000007:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46850[3]9] + 8;
					strcpy(&cVar5, "out_bandito_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_bandito_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46894[2]9] + 8;
					strcpy(&cVar5, "out_bandito_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_bandito_blip4", 32);
					break;
				
				case 0x00000010:
					Var0 = Vector(-4178,186f, 32,616f, 4582,207f);
					vVar2 = Vector(500.0f, 500.0f, 500.0f);
					strcpy(&cVar5, "out_bandito_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_bandito_blip6", 32);
					break;
			}
			break;
		
		case 0x00000008:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46866[4]9] + 8;
					strcpy(&cVar5, "out_rebel_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_80(26) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_80(25) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_80(24) && iVar15)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_80(23) && iVar15)
					{
						cVar4 = &Global_44085[Global_46850[1]9] + 8;
						iVar15 = 0;
					}
					else if (iVar15 && Function_81(26, 0))
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					strcpy(&cVar5, "out_rebel_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_rebel_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_80(55) && iVar16)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_80(54) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_80(27) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					strcpy(&cVar5, "out_rebel_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46894[3]9] + 8;
					strcpy(&cVar5, "out_rebel_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46850[0]9] + 8;
					strcpy(&cVar5, "out_rebel_blip6", 32);
					break;
			}
			break;
		
		case 0x00000009:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46926[5]9] + 8;
					strcpy(&cVar5, "out_military_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46926[2]9] + 8;
					strcpy(&cVar5, "out_military_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46914[0]9] + 8;
					strcpy(&cVar5, "out_military_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_80(52) && iVar13)
					{
						cVar4 = &Global_44085[Global_46926[2]9] + 8;
						iVar13 = 0;
					}
					else if (Function_80(51) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					else if (Function_80(50) && iVar13)
					{
						cVar4 = &Global_44085[Global_46796[4]9] + 8;
						iVar13 = 0;
					}
					else if (Function_80(49) && iVar13)
					{
						cVar4 = &Global_44085[Global_46816[1]9] + 8;
						iVar13 = 0;
					}
					else if (Function_81(17, 0) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					strcpy(&cVar5, "out_military_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46914[0]9] + 8;
					strcpy(&cVar5, "out_military_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46914[0]9] + 8;
					strcpy(&cVar5, "out_military_blip6", 32);
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46760[4]9] + 8;
					strcpy(&cVar5, "out_gun_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46760[2]9] + 8;
					strcpy(&cVar5, "out_gun_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_gun_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_gun_blip4", 32);
					break;
				
				case 0x00000010:
					if (Function_80(19) && iVar17)
					{
						Var0 = Vector(-1708,36f, 46,18f, 2175,89f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_81(6, 0) && Function_80(18)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_80(17) && iVar17)
					{
						Var0 = Vector(-1687,208f, 53,208f, 2140,491f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_81(9, 0) && Function_80(16)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_80(15) && iVar17)
					{
						Var0 = Vector(-1709,084f, 55,216f, 2104,631f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if (Function_81(8, 0) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					strcpy(&cVar5, "out_gun_blip5", 32);
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_suit_blip1", 32);
					break;
			}
			break;
		
		default:
			break;
	}
	if (Function_21(StackVal, Var0))
	{
		if (IS_OBJECT_VALID(&cVar4))
		{
			GET_OBJECT_POSITION(&cVar4, &Var0);
			if (Function_21(StackVal, vVar2))
			{
				if (GET_OBJECT_TYPE(&cVar4) == 9)
				{
					GET_VOLUME_SCALE(&cVar4, &vVar2);
				}
				else
				{
					vVar2 = Vector(200.0f, 200.0f, 200.0f);
				}
			}
		}
	}
	if (!Function_21(StackVal, vVar2))
	{
		iVar18 = ADD_BLIP_FOR_COORD(&Var0, 440, 0, 2, 0);
		SET_BLIP_SCALE(&iVar18, ((vVar2.x + vVar2.z) / 2.0f));
		SET_BLIP_COLOR(&iVar18, 0,58f, 0,35f, 0,72f, 0,5f);
		SET_BLIP_PRIORITY(&iVar18, 3);
		SET_BLIP_NAME(&iVar18, &cVar5);
		return &iVar18;
	}
	return "";
}

void Function_172(bool bParam0) //Position: 0x80E1 / 32993
{
	char* cVar0[32];
	char* cVar8[32];
	struct<8> Var16;
	bool bVar24;
	
	strcpy(&cVar0, "OUT_", 32);
	strcpy(&cVar8, "out_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	stradd(&cVar8, &Global_42265[bParam09] + 32, 32);
	stradd(&cVar8, "_hint", 32);
	if (!IS_JOURNAL_ENTRY_IN_LIST(Global_42265[bParam09].f_64, 0) && !IS_JOURNAL_ENTRY_IN_LIST(Global_42265[bParam09].f_64, 1))
	{
		Global_42265[bParam09].f_64 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		APPEND_JOURNAL_ENTRY(Global_42265[bParam09].f_64, 0);
		bVar24 = false;
		while (bVar24 <= Global_42265[bParam09].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_176(bParam0, Function_175(bVar24)))
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &Var16, 0, 4, false);
			}
			else
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &Var16, 0, 3, false);
			}
			bVar24++;
		}
	}
	else if (IS_JOURNAL_ENTRY_IN_LIST(Global_42265[bParam09].f_64, 0))
	{
		bVar24 = false;
		while (bVar24 <= Global_42265[bParam09].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_176(bParam0, Function_175(bVar24)))
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_42265[bParam09].f_64, &Var16, 4, 0);
			}
			else
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_42265[bParam09].f_64, &Var16, 3, 0);
			}
			bVar24++;
		}
	}
	if (Global_42265[bParam09].f_64 == 4294967295 && Global_42265[bParam09].f_64 == 0)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, (TO_FLOAT(Function_133(bParam0)) / TO_FLOAT(Global_42265[bParam09].f_28)), false, 0);
		Function_174(Global_42265[bParam09].f_64, 0);
		straddi(&cVar8, Function_173(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[bParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_173(int iParam0) //Position: 0x8291 / 33425
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_87(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 <= Global_42265[iParam09].f_28)
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

void Function_174(char* cParam0, bool bParam1) //Position: 0x82E8 / 33512
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

int Function_175(bool bParam0) //Position: 0x830D / 33549
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_176(bool bParam0, int iParam1) //Position: 0x8319 / 33561
{
	int iVar0;
	
	if (!Function_87(bParam0))
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

bool Function_177(int iParam0) //Position: 0x8378 / 33656
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

void Function_178(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x8394 / 33684
{
	char* cVar0[32];
	
	if (!Function_87(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_177(3) && !&bParam4)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_86(bParam0))
	{
		Function_131(456, 1, 0, 0);
		Function_165(bParam0, 2);
		if (&bParam2)
		{
			if (!Function_130(0, 0, 1, 1))
			{
				Function_92(1);
				Function_91(1, 5);
			}
			else
			{
				Function_90();
			}
		}
		Function_172(bParam0);
		strcpy(&cVar0, "OUT_", 32);
		stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
		if ((!Function_64() && !&bParam1) && !Global_6623)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_64() || Global_6623)
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitDisc"))
			{
				DECOR_SET_INT(&Global_54076, "outfitDisc", bParam0);
			}
		}
		if (&bParam3)
		{
			stradd(&cVar0, "_tip", 32);
			Function_60(&cVar0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_59())
		{
			if (!Function_155(Global_119934, 2))
			{
				Function_150(&Global_54076, 2, 1, 0);
			}
		}
	}
}

bool Function_179(int iParam0, int iParam1) //Position: 0x84F0 / 34032
{
	int iVar0;
	
	if (!Function_87(iParam0))
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

void Function_180() //Position: 0x851D / 34077
{
	if (!Function_182(512) && !Function_181())
	{
		return;
	}
	if (Function_85(16))
	{
		return;
	}
	if (!Function_176(16, 1))
	{
		if (Function_111(348) <= 5000.0f)
		{
			Function_167(16, 1, 0, 0, 1);
		}
	}
	if (!Function_176(16, 2))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "CougarOutfitKill"))
		{
			Function_167(16, 2, 0, 0, 1);
			DECOR_REMOVE(&Global_54076, "CougarOutfitKill");
		}
	}
	if (!Function_176(16, 4))
	{
		if (Function_111(344) <= 8.0f && Function_111(308) <= 8.0f)
		{
			Function_167(16, 4, 0, 0, 1);
		}
	}
	if (!Function_176(16, 8))
	{
		if (Function_111(349) <= 1.0f)
		{
			Function_167(16, 8, 0, 0, 1);
		}
	}
	if (!Function_176(16, 16))
	{
		if (Function_80(37))
		{
			Function_167(16, 16, 0, 0, 1);
		}
	}
	return;
}

bool Function_181() //Position: 0x8611 / 34321
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_8(GET_GAME_EDITION(), 16);
	}
	return 0;
}

bool Function_182(int iParam0) //Position: 0x8641 / 34369
{
	return Function_183(Global_131807.f_1304, iParam0);
}

int Function_183(var uParam0, bool bParam1) //Position: 0x8653 / 34387
{
	return (uParam0 && bParam1) == 0;
}

void Function_184() //Position: 0x8660 / 34400
{
	if (!Function_182(512) && !Function_181())
	{
		return;
	}
	if (Function_85(17))
	{
		return;
	}
	if (!Function_176(17, 1))
	{
		if (Function_111(450) <= 1000.0f)
		{
			Function_167(17, 1, 1, 0, 1);
		}
	}
	if (!Function_176(17, 4))
	{
		if (Function_111(273) <= 200.0f)
		{
			Function_167(17, 4, 0, 0, 1);
		}
	}
	if (!Function_176(17, 8))
	{
		if (Function_111(44) <= 20.0f)
		{
			Function_167(17, 8, 1, 0, 1);
		}
	}
	if (!Function_176(17, 16))
	{
		if (Function_80(63))
		{
			Function_167(17, 16, 1, 0, 1);
		}
	}
	return;
}

void Function_185() //Position: 0x86FF / 34559
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_42265)
	{
		Global_42265[iVar09] = 4294967295;
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
		if (!Function_85(16) && !Function_86(16))
		{
			Function_178(16, 0, 0, 0, 1);
		}
		if (!Function_85(17) && !Function_86(17))
		{
			Function_178(17, 0, 0, 0, 1);
		}
	}
	Function_178(0, 1, 0, 0, 1);
	Function_89(0, 1, 0);
	if (Global_6605)
	{
		Global_42827 = 4294967295;
	}
	(&Global_42827 + 8) = "";
	Function_186();
	return;
}

void Function_186() //Position: 0x88DA / 35034
{
	if (Function_85(1))
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

void Function_187(bool bParam0, char* cParam1, int iParam5, int iParam6) //Position: 0x89CB / 35275
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
	Global_42265[bParam09] = bParam0;
	strcpy(&Global_42265[bParam09] + 32, &cParam1, 16);
	if (Global_6605)
	{
		Global_42265[bParam09].f_4 = 0;
		Global_42265[bParam09].f_8 = 1;
	}
	if (&iParam6 == 0)
	{
		Function_165(bParam0, 8);
	}
	Global_42265[bParam09].f_28 = iParam2;
	Global_42265[bParam09].f_16 = iParam4;
	Global_42265[bParam09].f_20 = iParam3;
	Global_42265[bParam09].f_12 = iParam5;
	strcpy(&cVar0, "out_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
	stradd(&cVar8, "_desc", 32);
	SATCHEL_CREATE_OUTFIT(&cVar0, &cVar8, &iParam6);
}

void Function_188(struct<57> Param0) //Position: 0x8B15 / 35605
{
	strcpy(&Param0 + 24, "AMBIENT-UNLOCK", 16);
	Param0 = 46474;
	*(&Param0 + 8) = 35675;
	*(&Param0 + 16) = 35669;
	Param0.f_56 = 1;
	return;
}

void Function_189() //Position: 0x8B55 / 35669
{
	return;
}

int Function_190() //Position: 0x8B5B / 35675
{
	if (0 || !Global_6607)
	{
		return 0;
	}
	Function_202();
	Function_196(1);
	Function_194();
	if ((Function_64() || HUD_IS_FADED()) || HUD_IS_FADING())
	{
		return 0;
	}
	if (!Function_1(8192))
	{
		return 0;
	}
	if ((((Global_6623 || Global_99146) || Global_6638) || Global_6637) || Global_6639)
	{
		return 0;
	}
	if (Global_39873 + 5.0f) < GET_CURRENT_GAME_TIME()
	{
		return 0;
	}
	Function_193();
	Function_192();
	Function_191();
	return 0;
}

void Function_191() //Position: 0x8BC3 / 35779
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= Global_39248)
	{
		if (!Global_39248[bVar0])
		{
			switch (bVar0)
			{
				case 0x00000000:
					if (Function_81(8, 0))
					{
						Global_39248[bVar0] = 1;
					}
					break;
				
				case 0x00000001:
					if (Function_81(16, 0))
					{
						Global_39248[bVar0] = 1;
					}
					break;
				
				case 0x00000002:
					if (Function_81(13, 0))
					{
						Global_39248[bVar0] = 1;
					}
					break;
				
				case 0x00000003:
					if (Function_81(34, 0))
					{
						Global_39248[bVar0] = 1;
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

void Function_192() //Position: 0x8C93 / 35987
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= Global_39266)
	{
		if (!Global_39266[bVar0])
		{
			switch (bVar0)
			{
				case 0x00000000:
					if (Function_81(3, 0))
					{
						Global_39266[bVar0] = 1;
					}
					break;
				
				case 0x00000001:
					if (Function_85(1))
					{
						Global_39266[bVar0] = 1;
					}
					break;
				
				case 0x00000002:
					if (Function_81(4, 0))
					{
						Global_39266[bVar0] = 1;
					}
					break;
				
				case 0x00000003:
					Global_39266[bVar0] = 1;
					break;
				
				case 0x00000004:
					if (Function_81(25, 0))
					{
						Global_39266[bVar0] = 1;
					}
					break;
				
				case 0x00000005:
					if (Function_81(5, 0))
					{
						Global_39266[bVar0] = 1;
					}
					break;
				
				case 0x00000006:
					break;
				
				case 0x00000007:
					if (Function_81(10, 0))
					{
						Global_39266[bVar0] = 1;
					}
					break;
				
				case 0x00000008:
					if (Function_81(3, 0))
					{
						Global_39266[bVar0] = 1;
					}
					break;
				
				case 0x00000009:
					Global_39266[bVar0] = 1;
					break;
				
				case 0x0000000A:
					if (Function_81(37, 0))
					{
						Global_39266[bVar0] = 1;
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

void Function_193() //Position: 0x8DF3 / 36339
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= Global_39258)
	{
		if (!Global_39258[bVar0])
		{
			switch (bVar0)
			{
				case 0x00000000:
					break;
				
				case 0x00000001:
					if (Function_81(2, 0))
					{
						Global_39258[bVar0] = 1;
					}
					break;
				
				case 0x00000002:
					if (Function_81(6, 0))
					{
						Global_39258[bVar0] = 1;
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

void Function_194() //Position: 0x8E94 / 36500
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_39324)
	{
		if (!Global_39324[iVar0])
		{
			switch (iVar0)
			{
				case 0x00000000:
					if (Function_81(25, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_WORLD_SECTOR("ramitaBayaBefore");
						ENABLE_WORLD_SECTOR("ramitaBayaAfter");
						ENABLE_CURVE("rsdROAD_frb_road", true);
						ENABLE_CURVE("rsdROAD_fom_frb_road", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve221", true);
					}
					break;
				
				case 0x00000001:
					if (Function_81(25, 0) && !Function_81(26, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_WORLD_SECTOR("butterBridgeA");
						DISABLE_WORLD_SECTOR("butterBridgeC");
						DISABLE_WORLD_SECTOR("butterBridgeD");
						ENABLE_WORLD_SECTOR("butterBridgeB");
						ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", true);
					}
					break;
				
				case 0x00000002:
					if ((Function_81(25, 0) && Function_81(26, 0)) && !Function_81(29, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_WORLD_SECTOR("butterBridgeB");
						DISABLE_WORLD_SECTOR("butterBridgeA");
						DISABLE_WORLD_SECTOR("butterBridgeC");
						ENABLE_WORLD_SECTOR("butterBridgeD");
						ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", false);
					}
					break;
				
				case 0x00000003:
					if ((Function_81(25, 0) && Function_81(26, 0)) && Function_81(29, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_WORLD_SECTOR("butterBridgeA");
						DISABLE_WORLD_SECTOR("butterBridgeD");
						DISABLE_WORLD_SECTOR("butterBridgeC");
						ENABLE_WORLD_SECTOR("butterBridgeB");
						ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", true);
					}
					break;
				
				case 0x00000004:
					if (Function_81(41, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_WORLD_SECTOR("tannersSpanBefore");
						ENABLE_WORLD_SECTOR("tannersSpanAfter");
					}
					break;
				
				case 0x00000005:
					if (Function_81(41, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_WORLD_SECTOR("dixonCrossingBefore");
						ENABLE_WORLD_SECTOR("dixonCrossingAfter");
						ENABLE_CURVE("rsdROAD_thi_blk_road", true);
						ENABLE_CURVE("rsdROAD_thi_blk_roaddetachedCurve2", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve124", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve132", true);
					}
					break;
				
				case 0x00000006:
					if (Function_81(22, 0) && !Function_81(41, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_CHILD_SECTOR("hen_barn01x");
						DISABLE_CHILD_SECTOR("hen_barn01props01x");
						DISABLE_CHILD_SECTOR("hen_barn01props02x");
						ENABLE_CHILD_SECTOR("hen_barn02x");
						ENABLE_CHILD_SECTOR("hen_barn02props01x");
					}
					break;
				
				case 0x00000007:
					if (Function_81(22, 0) && Function_81(41, 0))
					{
						Global_39324[iVar0] = 1;
						ENABLE_CHILD_SECTOR("hen_barn01x");
						ENABLE_CHILD_SECTOR("hen_barn01props01x");
						ENABLE_CHILD_SECTOR("hen_barn01props02x");
						DISABLE_CHILD_SECTOR("hen_barn02x");
						DISABLE_CHILD_SECTOR("hen_barn02props01x");
					}
					break;
				
				case 0x00000008:
					if (Function_81(34, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_WORLD_SECTOR("campoMiradaBefore");
						ENABLE_WORLD_SECTOR("campoMiradaAfter");
					}
					break;
				
				case 0x00000009:
					if (Function_81(26, 0) || Function_81(30, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_WORLD_SECTOR("fronteraBridgeBefore");
						ENABLE_WORLD_SECTOR("fronteraBridgeAfter");
					}
					break;
				
				case 0x0000000A:
					if (Function_81(40, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_CHILD_SECTOR("fod_gates01x");
						ENABLE_CHILD_SECTOR("fod_gates02x");
						ENABLE_CHILD_SECTOR("fod_gates02Doors01x");
					}
					break;
				
				case 0x0000000B:
					if (Function_81(48, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_CHILD_SECTOR("coc_fence01x");
						ENABLE_CHILD_SECTOR("coc_fence01bx");
						ENABLE_CHILD_SECTOR("coc_gates02x");
						DISABLE_CHILD_SECTOR("coc_gates01x");
					}
					break;
				
				case 0x0000000C:
					if (Function_81(41, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_WORLD_SECTOR("masonBridgeBefore");
						ENABLE_WORLD_SECTOR("masonBridgeAfter");
					}
					break;
				
				case 0x0000000D:
					if (Function_81(41, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_CHILD_SECTOR("lmf_troughBefore01x");
						ENABLE_CHILD_SECTOR("lmf_troughAfter01x");
					}
					break;
				
				case 0x0000000E:
					break;
				
				case 0x0000000F:
					if (Function_81(21, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_CHILD_SECTOR("rwf_barn01xprops02x");
						ENABLE_CHILD_SECTOR("rwf_barn01xprops01x");
					}
					break;
				
				case 0x00000010:
					if (Function_81(57, 0) || Function_195(57))
					{
						Global_39324[iVar0] = 1;
						DISABLE_CHILD_SECTOR("beh_silo02x");
						ENABLE_CHILD_SECTOR("beh_silo01x");
					}
					break;
				
				case 0x00000011:
					if (Function_81(48, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_CHILD_SECTOR("beh_house02x");
						DISABLE_CHILD_SECTOR("beh_house02props01x");
						ENABLE_CHILD_SECTOR("beh_house01x");
						ENABLE_CHILD_SECTOR("beh_house01props01x");
					}
					break;
				
				case 0x00000012:
					if (Function_81(28, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_CHILD_SECTOR("tor_militaryCamp01x");
						ENABLE_CHILD_SECTOR("tor_militaryCamp02x");
					}
					break;
				
				case 0x00000013:
					if (Function_81(41, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_CHILD_SECTOR("esc_villaWall04x");
						ENABLE_CHILD_SECTOR("esc_villaWall05x");
					}
					break;
				
				case 0x00000014:
					if (Function_80(37))
					{
						Global_39324[iVar0] = 1;
						ENABLE_CHILD_SECTOR("icarus");
					}
					break;
				
				case 0x00000015:
					break;
				
				case 0x00000016:
					break;
				
				case 0x00000017:
					if (Function_81(57, 0))
					{
						Global_39324[iVar0] = 1;
						ENABLE_CHILD_SECTOR("beh_grave02x");
						ENABLE_CHILD_SECTOR("beh_grave03x");
						DISABLE_CHILD_SECTOR("beh_grave01x");
					}
					break;
				
				case 0x00000018:
					if (Function_81(25, 0))
					{
						Global_39324[iVar0] = 1;
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
					if (Function_81(32, 0))
					{
						Global_39324[iVar0] = 1;
						ENABLE_CHILD_SECTOR("emt_caveDoor02x");
						DISABLE_CHILD_SECTOR("emt_caveDoor01x");
					}
					break;
				
				case 0x0000001A:
					if (Function_81(20, 0))
					{
						Global_39324[iVar0] = 1;
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

bool Function_195(int iParam0) //Position: 0xA669 / 42601
{
	int iVar0;
	
	if (!Function_83(iParam0))
	{
		return 0;
	}
	iVar0 = Function_82(iParam0);
	if (!Function_75(Function_82(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

void Function_196(bool bParam0) //Position: 0xA69F / 42655
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	char* cVar3[32];
	char* cVar11[32];
	
	iVar0 = 0;
	while (iVar0 <= Global_39290)
	{
		if ((!Global_39290[iVar0] && (!&bParam0 || !Function_64())) && !bVar1)
		{
			switch (iVar0)
			{
				case 0x00000000:
					if (Function_81(2, 0))
					{
						bVar1 = false;
						Global_39290[iVar0] = 1;
						SET_DISABLE_DEADEYE(0, 0);
						SET_DEADEYE_MULTILOCK_ENABLE(0, false);
						SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
						Function_201(390, 3.0f);
						Function_100(390, 1, &bParam0);
					}
					break;
				
				case 0x00000001:
					if (Function_81(11, 0))
					{
						bVar1 = false;
						Global_39290[iVar0] = 1;
						SET_DISABLE_DEADEYE(0, 0);
						SET_DEADEYE_MULTILOCK_ENABLE(0, true);
						SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
						Function_201(390, 3.0f);
						Function_100(390, 2, &bParam0);
					}
					break;
				
				case 0x00000002:
					if (Function_81(30, 0))
					{
						bVar1 = false;
						Global_39290[iVar0] = 1;
						SET_DISABLE_DEADEYE(0, 0);
						SET_DEADEYE_MULTILOCK_ENABLE(0, true);
						SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
						Function_201(390, 3.0f);
						Function_100(390, 3, &bParam0);
					}
					break;
				
				case 0x00000003:
					Global_39290[iVar0] = 1;
					break;
				
				case 0x00000004:
					if (Function_81(4, 0))
					{
						Global_39290[iVar0] = 1;
						bVar1 = true;
						strcpy(&cVar3, "taxi_coach", 32);
					}
					break;
				
				case 0x00000005:
					Global_39290[iVar0] = 1;
					break;
				
				case 0x00000009:
					if (Function_81(2, 0))
					{
						Global_39290[iVar0] = 1;
						bVar1 = true;
						bVar2 = true;
						strcpy(&cVar3, "shop_feature_1", 32);
						strcpy(&cVar11, "shop_feature_2", 32);
					}
					break;
				
				case 0x00000006:
					if (Function_81(2, 0))
					{
						Global_39290[iVar0] = 1;
						bVar1 = false;
					}
					break;
				
				case 0x00000007:
					if (Function_81(2, 0))
					{
						Global_39290[iVar0] = 1;
						bVar1 = false;
					}
					break;
				
				case 0x00000008:
					if (Function_81(37, 0))
					{
						Global_39290[iVar0] = 1;
					}
					break;
				
				case 0x0000000A:
					if (Function_81(2, 0) && !Function_200("npressDemo"))
					{
						Global_39290[iVar0] = 1;
						bVar1 = false;
					}
					break;
				
				case 0x0000000B:
					if (Function_81(4, 0))
					{
						Global_39290[iVar0] = 1;
						bVar1 = true;
						bVar2 = true;
						strcpy(&cVar3, "house_feature_1", 32);
						strcpy(&cVar11, "house_feature_2", 32);
					}
					break;
				
				case 0x0000000C:
					if (!Function_195(1))
					{
						Function_199(1);
						Global_39290[iVar0] = 1;
					}
					else
					{
						Function_199(0);
						Global_39290[iVar0] = 0;
					}
					break;
				
				case 0x0000000D:
					if (Function_141(0) == 10)
					{
						Global_39290[iVar0] = 1;
						bVar1 = true;
						strcpy(&cVar3, "nAM_SS_RW2", 32);
						SET_DEADEYE_POINT_MODIFIER(0, 2.0f);
					}
					break;
				
				case 0x0000000E:
					if (Function_141(1) > 5)
					{
						Global_39290[iVar0] = 1;
						bVar1 = true;
						strcpy(&cVar3, "nAM_MH_RW1", 32);
						SET_WEAPONENUM_LOCKED(14, 0);
						Function_197(14, 1);
					}
					break;
				
				case 0x0000000F:
					if (((Function_141(0) != 10 && Function_141(1) != 10) && Function_141(2) != 10) && Function_141(3) != 10)
					{
						Global_39290[iVar0] = 1;
						bVar1 = true;
						strcpy(&cVar3, "AM_LOTW_RW1", 32);
						SET_MAX_DEADEYE_POINTS(0, 150.0f);
						Function_89(11, 0, 1);
					}
					break;
				
				default:
					LOG_ERROR("Found a FeatureType that is not enabled for unlocking");
					break;
			}
			if (bVar1 && !&bParam0)
			{
				bVar1 = false;
			}
		}
		iVar0++;
	}
	if (bVar1 && bParam0)
	{
		stradd(&cVar3, "_help", 32);
		Function_60(&cVar3, 0x41200000, 1, 0, 2, 1, 0);
		if (bVar2)
		{
			stradd(&cVar11, "_help", 32);
			Function_60(&cVar11, 0x41200000, 1, 0, 2, 1, 0);
		}
	}
	return;
}

int Function_197(int iParam0, int iParam1) //Position: 0xAA75 / 43637
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_93259[iParam05].f_32 = iParam1;
	Function_198(iParam0, iParam1);
	Function_150(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_198(int iParam0, int iParam1) //Position: 0xAAEA / 43754
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_97968[iParam0] = iParam1;
	return 1;
}

void Function_199(bool bParam0) //Position: 0xAB47 / 43847
{
	if (DECOR_CHECK_EXIST(&Global_54076, "DISABLE_HORSE_WHISTLE"))
	{
		if (bParam0)
		{
			DECOR_REMOVE(&Global_54076, "DISABLE_HORSE_WHISTLE");
		}
	}
	else if (!bParam0)
	{
		DECOR_SET_BOOL(&Global_54076, "DISABLE_HORSE_WHISTLE", 1);
	}
	return;
}

bool Function_200(int iParam0) //Position: 0xABBE / 43966
{
	var uVar0;
	
	uVar0 = _GET_PARAM_VALUE(&iParam0, "blah");
	if (IS_STRING_VALID(&uVar0))
	{
		return 1;
	}
	return 0;
}

int Function_201(int iParam0, int iParam1) //Position: 0xABE0 / 44000
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

void Function_202() //Position: 0xAC20 / 44064
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
	fVar0 = (fVar0 + (24.0f * Function_51(1.0f, (IntToFloat(Function_115(12)) / 24.0f))));
	fVar0 = (fVar0 + (17.0f * Function_51(1.0f, (IntToFloat(Function_115(13)) / 17.0f))));
	fVar0 = (fVar0 + (7.0f * Function_51(1.0f, (IntToFloat(Function_115(14)) / 7.0f))));
	fVar0 = (fVar0 + (9.0f * Function_51(1.0f, (IntToFloat(Function_115(15)) / 9.0f))));
	fVar0 = (fVar0 + (4,5f * Function_51(1.0f, (IntToFloat(iVar1) / 9.0f))));
	fVar0 = (fVar0 + (3,5f * Function_51(1.0f, (IntToFloat(iVar3) / 7.0f))));
	fVar0 = (fVar0 + (2.0f * Function_51(1.0f, (IntToFloat(((Function_115(363) + Function_115(364)) + Function_115(365))) / 20.0f))));
	fVar0 = (fVar0 + (2,5f * Function_51(1.0f, (IntToFloat(Function_115(469)) / 5.0f))));
	fVar0 = (fVar0 + (2,5f * Function_51(1.0f, (IntToFloat(Function_115(400)) / 5.0f))));
	fVar0 = (fVar0 + (3.0f * Function_51(1.0f, (IntToFloat(Function_115(410)) / 6.0f))));
	fVar0 = (fVar0 + (3.0f * Function_51(1.0f, (Function_111(474) / Function_112(474)))));
	fVar0 = (fVar0 + (2.0f * Function_51(1.0f, (Function_111(475) / Function_112(475)))));
	fVar0 = (fVar0 + (1.0f * Function_51(1.0f, (Function_111(476) / Function_112(476)))));
	fVar0 = (fVar0 + (9.0f * Function_51(1.0f, (IntToFloat(iVar2) / 18.0f))));
	fVar0 = (fVar0 + (2.0f * Function_51(1.0f, (Function_111(468) / 13.0f))));
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
	if (Global_47151[7])
	{
		Function_204(iVar1, iVar2, iVar3);
	}
	if (fVar0 < Function_111(5))
	{
		Function_203(5, fVar0, 0);
		Function_204(iVar1, iVar2, iVar3);
	}
	if (fVar0 <= 100.0f && Global_6662)
	{
		if (!Function_85(12))
		{
			Function_89(12, 0, 1);
		}
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(32))
		{
			AWARD_ACHIEVEMENT(32);
		}
	}
	else if (fVar0 <= 75.0f)
	{
		if (!Function_86(12))
		{
			Function_178(12, 0, 1, 1, 0);
		}
	}
	bVar4 = (bVar4 + Function_115(12));
	bVar4 = (bVar4 + Function_115(13));
	bVar4 = (bVar4 + Function_115(14));
	bVar4 = (bVar4 + Function_115(15));
	bVar4 = (bVar4 + Function_115(457));
	bVar4 = (bVar4 + Function_115(458));
	bVar4 = (bVar4 + Function_115(363));
	bVar4 = (bVar4 + Function_115(364));
	bVar4 = (bVar4 + Function_115(365));
	bVar4 = (bVar4 + Function_115(469));
	bVar4 = (bVar4 + Function_115(400));
	bVar4 = (bVar4 + Function_115(410));
	bVar4 = (bVar4 + Function_115(474));
	bVar4 = (bVar4 + Function_115(475));
	bVar4 = (bVar4 + Function_115(476));
	bVar4 = (bVar4 + Function_115(407));
	bVar4 = (bVar4 + Function_115(468));
	bVar4 = (bVar4 + Function_115(409));
	bVar4 = (bVar4 + Function_141(3));
	bVar4 = (bVar4 + Function_141(0));
	bVar4 = (bVar4 + Function_141(2));
	bVar4 = (bVar4 + Function_141(1));
	if (bVar4 >= Function_115(6))
	{
		Function_100(6, bVar4, 0);
	}
	return;
}

int Function_203(int iParam0, bool bParam1, bool bParam2) //Position: 0xAF9E / 44958
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_54086[iParam0] > bParam1)
	{
		Function_114(iParam0, bParam1, 0);
	}
	Global_54086[iParam0] = bParam1;
	Function_113(iParam0);
	if (&bParam2)
	{
		Function_101(iParam0, 1, bParam1, 0, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_204(int iParam0, int iParam1, int iParam2) //Position: 0xB20B / 45579
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

void Function_205() //Position: 0xB261 / 45665
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

int Function_206(int iParam0, int iParam1) //Position: 0xB2B8 / 45752
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

var Function_207() //Position: 0xB2E5 / 45797
{
	int iVar0;
	
	if (Function_208(Global_46948) >= 0)
	{
		iVar0++;
	}
	if (Function_208(Global_46950) >= 0)
	{
		iVar0++;
	}
	if (Function_208(Global_46952) >= 0)
	{
		iVar0++;
	}
	if (Function_208(Global_46951) >= 0)
	{
		iVar0++;
	}
	if (Function_208(Global_46953) >= 0)
	{
		iVar0++;
	}
	if (Function_208(Global_46955) >= 0)
	{
		iVar0++;
	}
	if (Function_208(Global_46954) >= 0)
	{
		iVar0++;
	}
	return iVar0;
}

int Function_208(int iParam0) //Position: 0xB35D / 45917
{
	if (!Function_77(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_12;
}

var Function_209() //Position: 0xB377 / 45943
{
	int iVar0;
	bool bVar1;
	
	if (Function_80(3))
	{
		bVar1 = (bVar1 || 1);
		iVar0++;
	}
	if (Function_80(9))
	{
		bVar1 = (bVar1 || 2);
		iVar0++;
	}
	if (Function_80(14))
	{
		bVar1 = (bVar1 || 4);
		iVar0++;
	}
	if (Function_80(20))
	{
		bVar1 = (bVar1 || 8);
		iVar0++;
	}
	if (Function_80(22))
	{
		bVar1 = (bVar1 || 16);
		iVar0++;
	}
	if (Function_80(27))
	{
		bVar1 = (bVar1 || 32);
		iVar0++;
	}
	if (Function_80(31))
	{
		bVar1 = (bVar1 || 64);
		iVar0++;
	}
	if (Function_80(34))
	{
		bVar1 = (bVar1 || 128);
		iVar0++;
	}
	if (Function_80(37))
	{
		bVar1 = (bVar1 || 256);
		iVar0++;
	}
	if (Function_80(44))
	{
		bVar1 = (bVar1 || 512);
		iVar0++;
	}
	if (Function_80(48))
	{
		bVar1 = (bVar1 || 1024);
		iVar0++;
	}
	if (Function_80(53))
	{
		bVar1 = (bVar1 || 2048);
		iVar0++;
	}
	if (Function_80(56))
	{
		bVar1 = (bVar1 || 4096);
		iVar0++;
	}
	if (Function_80(59))
	{
		bVar1 = (bVar1 || 8192);
		iVar0++;
	}
	if (Function_80(63))
	{
		bVar1 = (bVar1 || 16384);
		iVar0++;
	}
	if (Function_80(67))
	{
		bVar1 = (bVar1 || 32768);
		iVar0++;
	}
	if (Function_80(71))
	{
		bVar1 = (bVar1 || 65536);
		iVar0++;
	}
	if (Function_80(76))
	{
		bVar1 = (bVar1 || 131072);
		iVar0++;
	}
	Function_169(7, bVar1);
	return iVar0;
}

var Function_210() //Position: 0xB508 / 46344
{
	int iVar0;
	
	if (Function_85(9))
	{
		iVar0++;
	}
	if (Function_85(10))
	{
		iVar0++;
	}
	if (Function_85(3))
	{
		iVar0++;
	}
	if (Function_85(15))
	{
		iVar0++;
	}
	if (Function_85(14))
	{
		iVar0++;
	}
	if (Function_85(5))
	{
		iVar0++;
	}
	if (Function_85(6))
	{
		iVar0++;
	}
	if (Function_85(7))
	{
		iVar0++;
	}
	if (Function_85(8))
	{
		iVar0++;
	}
	return iVar0;
}

void Function_211() //Position: 0xB58A / 46474
{
	if (!Global_6606)
	{
		Function_230();
		Function_229();
		Function_228();
		Function_227();
	}
	Function_226();
	Function_213();
	Function_212();
	return;
}

void Function_212() //Position: 0xB5AC / 46508
{
	int iVar0;
	
	if (!Global_6606)
	{
		iVar0 = 0;
		while (iVar0 <= Global_39380)
		{
			Global_39380[iVar0] = 1;
			iVar0++;
		}
	}
	return;
}

void Function_213() //Position: 0xB5D5 / 46549
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_39428)
	{
		if (Global_39428[iVar0])
		{
			Function_214(iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_214(int iParam0) //Position: 0xB5FE / 46590
{
	int iVar0;
	
	if (!Function_225(iParam0) && 0)
	{
		return;
	}
	iVar0 = 1;
	switch (iParam0)
	{
		case 0x00000001:
			if (Function_177(3))
			{
				if (!Function_85(1))
				{
					if (!Function_81(2, 0))
					{
						return;
					}
					Function_89(1, 0, 0);
				}
			}
			break;
		
		case 0x00000004:
			if (Function_177(3))
			{
				if (!Function_85(2) && !Function_86(2))
				{
					Function_178(2, 0, 1, 1, 1);
					Function_219(2, 1);
					iVar0 = 0;
				}
			}
			break;
		
		case 0x00000009:
			if (!Global_39428[iParam0])
			{
				Function_218(992, 0, 1);
				Function_156(52, 1, 0);
			}
			break;
		
		case 0x0000000A:
			break;
		
		case 0x0000000D:
			UI_CHEAT_SET_STATE(4, 1);
			Function_216(4);
			break;
		
		case 0x0000000E:
			UI_CHEAT_SET_STATE(25, 1);
			Function_216(4);
			break;
		
		case 0x0000000F:
			UI_CHEAT_SET_STATE(7, 1);
			Function_216(4);
			break;
		
		case 0x00000010:
			UI_CHEAT_SET_STATE(11, 1);
			Function_216(4);
			break;
		
		case 0x00000011:
			UI_CHEAT_SET_STATE(13, 1);
			Function_216(4);
			break;
		
		case 0x00000012:
			UI_CHEAT_SET_STATE(16, 1);
			Function_216(4);
			break;
		
		case 0x00000013:
			UI_CHEAT_SET_STATE(17, 1);
			Function_216(4);
			break;
		
		case 0x00000014:
			UI_CHEAT_SET_STATE(18, 1);
			Function_216(4);
			break;
		
		case 0x00000015:
			UI_CHEAT_SET_STATE(24, 1);
			Function_216(4);
			break;
		
		case 0x00000016:
			UI_CHEAT_SET_STATE(26, 1);
			Function_216(4);
			break;
		
		case 0x00000017:
			UI_CHEAT_SET_STATE(22, 1);
			Function_216(4);
			break;
		
		case 0x00000018:
			UI_CHEAT_SET_STATE(28, 1);
			Function_216(4);
			break;
		
		case 0x00000019:
			UI_CHEAT_SET_STATE(35, 1);
			Function_216(4);
			break;
		
		case 0x0000001A:
			UI_CHEAT_SET_STATE(36, 1);
			Function_216(4);
			break;
		
		case 0x0000001B:
			UI_CHEAT_SET_STATE(37, 1);
			Function_216(4);
			break;
		
		case 0x0000001C:
			UI_CHEAT_SET_STATE(38, 1);
			Function_216(4);
			break;
		
		case 0x0000001D:
			UI_CHEAT_SET_STATE(39, 1);
			Function_216(4);
			break;
		
		case 0x0000001E:
			UI_CHEAT_SET_STATE(23, 1);
			Function_216(4);
			break;
		
		case 0x00000023:
			if (Function_130(0, 0, 1, 1))
			{
				return;
			}
			break;
		
		case 0x00000028:
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(60))
			{
				AWARD_ACHIEVEMENT(60);
			}
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
			iVar0 = 0;
			break;
		
		case 0x00000008:
			if (!Function_81(2, 0))
			{
				return;
			}
			Function_215(11);
			break;
		
		case 0x00000000:
			if (!Function_81(2, 0))
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
			iVar0 = 0;
			LOG_ERROR("Unimplemented Net Unlock - please do!");
			break;
	}
	iVar0 = iVar0;
	Global_39428[iParam0] = 1;
	return;
}

void Function_215(int iParam0) //Position: 0xB8ED / 47341
{
	if (AWARD_AVATAR(iParam0))
	{
		if (IS_PS3())
		{
			Function_60("avunlock_help", 0x41200000, 1, 0, 2, 1, 0);
		}
	}
	return;
}

int Function_216(bool bParam0) //Position: 0xB924 / 47396
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
		if (Function_59())
		{
			Var0 = { StackVal, StackVal, StackVal, Function_217() };
			SAVE_MANAGER_CREATE_SAVE_DISPLAY_NAME(&Var0);
		}
		else
		{
			SAVE_MANAGER_CREATE_SAVE_DISPLAY_NAME(&Global_6667[Global_1096628] + 16);
		}
	}
	if (bParam0 != 4)
	{
		Function_94();
	}
	SAVE_MANAGER_HARD_SAVE(SS_GET_STRING(3, bParam0));
	return 1;
}

struct<16> Function_217() //Position: 0xB98B / 47499
{
	int iVar0;
	int iVar1;
	
	iVar1 = 4294967295;
	iVar0 = 0;
	while (iVar0 <= 38)
	{
		if (Function_80(iVar0))
		{
			if (iVar1 == 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (Global_116927[iVar06].f_40 < Global_116927[iVar16].f_40)
			{
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 == 4294967295)
	{
		return StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16);
	}
	if (Global_21684[Function_82(Global_10966)7].f_32 < Global_116927[iVar16].f_40)
	{
		return StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16);
	}
	return StackVal, StackVal, StackVal, *(&Global_99725[iVar143] + 4);
}

void Function_218(var uParam0, bool bParam1, bool bParam2) //Position: 0xBA28 / 47656
{
	Global_21473 = uParam0;
	if (&bParam1)
	{
		Function_124(&Global_21369 + 72 + 32, 128);
	}
	if (&bParam2)
	{
		Function_124(&Global_21369 + 72 + 32, 64);
	}
	return;
}

void Function_219(bool bParam0, bool bParam1) //Position: 0xBA57 / 47703
{
	int iVar0;
	int iVar1;
	
	if (Function_80(20))
	{
		Function_167(bParam0, 16, 1, 0, &bParam1);
	}
	iVar0 = Function_220(0, Global_46760[2], 3);
	iVar1 = Function_208(iVar0);
	if (iVar1 >= 0)
	{
		Function_167(bParam0, 2, 1, 0, &bParam1);
	}
	return;
}

int Function_220(bool bParam0, bool bParam1, bool bParam2) //Position: 0xBA96 / 47766
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_224(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_221(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_221(bParam0, bParam1, bParam2, 4294967295);
}

int Function_221(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0xBAF4 / 47860
{
	var uVar0;
	
	if (!Function_223(bParam2))
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
	uVar0 = Function_224(bParam0, bParam1, bParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_222(uVar0);
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

var Function_222(int iParam0) //Position: 0xBC58 / 48216
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

bool Function_223(int iParam0) //Position: 0xBC96 / 48278
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_224(int iParam0, int iParam1, int iParam2) //Position: 0xBCAB / 48299
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

bool Function_225(int iParam0) //Position: 0xBCCB / 48331
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

void Function_226() //Position: 0xBCEF / 48367
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
	while (iVar0 <= Global_39324)
	{
		Global_39324[iVar0] = !Global_6606;
		switch (iVar0)
		{
			case 0x00000000:
				if (Global_6606)
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
				if (Global_6606)
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
				if (Global_6606)
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
				if (Global_6606)
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
				if (Global_6606)
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
				if (Global_6606)
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
				if (Global_6606)
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
				if (Global_6606)
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
				if (Global_6606)
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
				if (Global_6606)
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
				ENABLE_CURVE("rsdGPSTRAIL_elm_cas_path", !Global_6606);
				ENABLE_CURVE("rsdGPSTRAIL_curve495", !Global_6606);
				ENABLE_CURVE("rsdGPSTRAIL_elm_cas_pathdetachedCurve12", !Global_6606);
				ENABLE_CURVE("rsdGPSTRAIL_elm_cas_pathdetachedCurve13", !Global_6606);
				ENABLE_CURVE("rsdGPSTRAIL_elm_cas_loop1", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve10", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve8", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve6", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_las_nos_pathdetachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve10detachedCurve1", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_curve44", !Global_6606);
				ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve18", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve4detachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdROAD_las_roaddetachedCurve4", !Global_6606);
				ENABLE_CURVE("rsdROAD_las_roaddetachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdROAD_curve69", !Global_6606);
				ENABLE_CURVE("rsdROAD_las_road", !Global_6606);
				ENABLE_CURVE("rsdROAD_frb_road", !Global_6606);
				ENABLE_CURVE("rsdGPSTRAIL_curve98", !Global_6606);
				ENABLE_CURVE("rsdGPSROAD_elm_cas_roaddetachedCurve4detachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdGPSROAD_elm_cas_roaddetachedCurve4", !Global_6606);
				ENABLE_CURVE("rsdGPSTRAIL_elm_loop01_pathdetachedCurve2detachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdGPSTRAIL_curve634", !Global_6606);
				ENABLE_CURVE("rsdGPSTRAIL_curve635", !Global_6606);
				ENABLE_CURVE("rsdGPSTRAIL_curve636", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_curve637", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_curve638", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop04_pathdetachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_curve70", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop04_path", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop05_pathdetachedCurve4", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop05_pathdetachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop01_pathdetachedCurve2detachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve2detachedCurve2detachedCurve2detachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve2detachedCurve2detachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve2detachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve4", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve10", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve8", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop03_path1", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop03_path", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve6", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve4", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop02_path", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop01_path1", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop01_path", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop03_path1detachedCurve4", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop03_pathdetachedCurve4", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop03_pathdetachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop03_path1detachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_chu_loop01_path3detachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_chu_loop01_path3", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop09_path", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop06__path", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop01_path1detachedCurve4", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop01_pathdetachedCurve4", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop01_path1detachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop01_path1detachedCurve6", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop07_pathdetachedCurve2detachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop07_pathdetachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop07_path", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop02_path1", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve4", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop02_path1detachedCurve4", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop02_path1detachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve20detachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve16", !Global_6606);
				ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve12", !Global_6606);
				ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve14", !Global_6606);
				ENABLE_CURVE("rsdGPSTRAIL_curve163", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_curve297", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_curve71", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_curve72", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_ram_path", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop04_pathdetachedCurve2detachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop05_path", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop08_path", !Global_6606);
				ENABLE_CURVE("rsdGPSTRAIL_curve77", !Global_6606);
				ENABLE_CURVE("rsdGPSTRAIL_curve78", !Global_6606);
				ENABLE_CURVE("rsdGPSTRAIL_curve78", !Global_6606);
				ENABLE_CURVE("rsdGPSTRAIL_curve79", !Global_6606);
				ENABLE_CURVE("rsdGPSTRAIL_elm_loop01_pathdetachedCurve2detachedCurve4", !Global_6606);
				ENABLE_CURVE("rsdGPSTRAIL_elm_loop01_pathdetachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdGPSTRAIL_elm_loop01_path", !Global_6606);
				ENABLE_CURVE("rsdGPSTRAIL_elm_loop02_path", !Global_6606);
				ENABLE_CURVE("rsdROAD_elm_cas_roaddetachedCurve8", !Global_6606);
				ENABLE_CURVE("rsdROAD_elm_cas_roaddetachedCurve6", !Global_6606);
				ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve20", !Global_6606);
				break;
			
			case 0x00000019:
				if (Global_6606)
				{
					ENABLE_CHILD_SECTOR("emt_caveDoor01x");
					DISABLE_CHILD_SECTOR("emt_caveDoor02x");
				}
				break;
			
			case 0x0000001A:
				if (Global_6606)
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
	if (Global_6606)
	{
		Function_194();
	}
	return;
}

void Function_227() //Position: 0xF16F / 61807
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= Global_39290)
	{
		Global_39290[bVar0] = !Global_6606;
		switch (bVar0)
		{
			case 0x00000000:
				if (IS_ACTOR_VALID(&Global_54076))
				{
					if (Global_6606)
					{
					}
					SET_DISABLE_DEADEYE(0, Global_6606);
					SET_DEADEYE_MULTILOCK_ENABLE(0, !Global_6606);
				}
				break;
			
			case 0x00000001:
				if (IS_ACTOR_VALID(&Global_54076))
				{
					if (Global_6606)
					{
					}
					SET_DISABLE_DEADEYE(0, Global_6606);
					SET_DEADEYE_MULTILOCK_ENABLE(0, !Global_6606);
				}
				break;
			
			case 0x00000002:
				if (IS_ACTOR_VALID(&Global_54076))
				{
					if (Global_6606)
					{
					}
					SET_DISABLE_DEADEYE(0, Global_6606);
					SET_DEADEYE_MULTILOCK_ENABLE(0, !Global_6606);
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
				if (Global_6666)
				{
					Global_39290[bVar0] = 0;
				}
				break;
			
			case 0x0000000C:
				Function_199(1);
				break;
			
			case 0x0000000A:
				if (Global_6664 || Global_6666)
				{
					Global_39290[bVar0] = 0;
				}
				break;
			
			case 0x0000000D:
				if (Global_6605)
				{
					Global_39290[bVar0] = 0;
				}
				break;
			
			case 0x0000000E:
				if (Global_6605)
				{
					Global_39290[bVar0] = 0;
					SET_WEAPONENUM_LOCKED(14, 0);
				}
				break;
			
			case 0x0000000F:
				if (Global_6605)
				{
					Global_39290[bVar0] = 0;
				}
				break;
			
			default:
				LOG_ERROR("Found a FeatureType that is not enabled for unlocking");
				break;
		}
		bVar0++;
	}
	if (Global_6606)
	{
		Function_196(0);
	}
	return;
}

void Function_228() //Position: 0xF324 / 62244
{
	int iVar0;
	int iVar1;
	
	if (Global_6606)
	{
		Function_192();
	}
	else if (Global_6666)
	{
		iVar0 = 0;
		while (iVar0 <= Global_39266)
		{
			Global_39266[iVar0] = 0;
			iVar0++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 <= Global_39266)
		{
			Global_39266[iVar1] = 1;
			iVar1++;
		}
	}
	return;
}

void Function_229() //Position: 0xF377 / 62327
{
	int iVar0;
	
	if (Global_6606)
	{
		Function_193();
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= Global_39258)
		{
			Global_39258[iVar0] = 1;
			iVar0++;
		}
	}
	return;
}

void Function_230() //Position: 0xF3A5 / 62373
{
	int iVar0;
	int iVar1;
	
	if (Global_6606)
	{
		Function_191();
	}
	else if (Global_6666)
	{
		iVar0 = 0;
		while (iVar0 <= Global_39248)
		{
			Global_39248[iVar0] = 0;
			iVar0++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 <= Global_39248)
		{
			Global_39248[iVar1] = 1;
			iVar1++;
		}
	}
	return;
}

void Function_231(struct<57> Param0) //Position: 0xF3F8 / 62456
{
	strcpy(&Param0 + 24, "nTUTORIALS", 16);
	Param0 = 71771;
	*(&Param0 + 8) = 62521;
	*(&Param0 + 16) = 62515;
	Param0.f_56 = 1;
	return;
}

void Function_232() //Position: 0xF433 / 62515
{
	return;
}

int Function_233() //Position: 0xF439 / 62521
{
	return Function_234(0);
}

int Function_234(bool bParam0) //Position: 0xF443 / 62531
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	char* cVar6[32];
	struct<4> Var14;
	
	if (!IS_OBJECT_VALID(&Global_54076))
	{
		return 0;
	}
	fVar0 = 1800.0f;
	if (!&bParam0 && !Function_1(8192))
	{
		return 0;
	}
	bVar1 = DECOR_GET_INT(&Global_54076, "tutorial");
	bVar2 = DECOR_GET_INT(&Global_54076, "ntutorial2");
	bVar3 = DECOR_GET_INT(&Global_54076, "ntutorial3");
	bVar4 = DECOR_GET_INT(&Global_54076, "ntutorial4");
	if (!Function_155(Global_119937, 4))
	{
		if (Function_242(bVar4, 4))
		{
			Function_241(&Global_119937, 4);
			Function_240(&Global_54076, 4, 4);
			if (!&bParam0)
			{
				Function_60("tutorial_camp_fast_travel", 30.0f, 1, 0, 2, 1, 0);
				return 0;
			}
		}
	}
	if (!Function_155(Global_119934, 0x4000000) && !(((((((Global_6623 || Global_6637) || Global_6625) || Global_6610) || Global_6608) || Global_99146) || Global_6638) || Global_6639))
	{
		if (Function_242(bVar1, 0x4000000))
		{
			Function_241(&Global_119934, 0x4000000);
			if (!&bParam0)
			{
				Function_60("tutorial_rare_horse", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
		}
	}
	if ((Global_6606 && !Function_155(Global_119937, 8)) && !((((Global_6610 || Global_99146) || Global_6627) || Global_6638) || Global_6639))
	{
		if (((GET_ACTOR_HEALTH(&Global_54076) > (GET_ACTOR_MAX_HEALTH(&Global_54076) * 0,3f) && HAS_ITEM(Function_140(3), &Global_54076)) && IS_ACTOR_ALIVE(&Global_54076)) && !IS_ACTOR_IN_WATER(&Global_54076))
		{
			Function_241(&Global_119937, 8);
			if (!&bParam0)
			{
				Function_60("tutorial_first_health", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
		}
	}
	if (!&bParam0 && ((((((((((Global_93258 || Global_6623) || Global_6625) || Global_6608) || Global_99146) || Global_6638) || Global_6637) || Global_6627) || Global_6610) || Global_6639) || !IS_ACTOR_ALIVE(&Global_54076)))
	{
		return 0;
	}
	if (!&bParam0 && ((Function_64() || HUD_IS_FADED()) || HUD_IS_FADING()))
	{
		return 0;
	}
	if (!&bParam0 && (Global_39873 + 5.0f) < GET_CURRENT_GAME_TIME())
	{
		return 0;
	}
	if (!&bParam0)
	{
		iVar5 = 0;
		while (iVar5 <= Global_6667)
		{
			if (Function_79(&Global_6667[iVar528] + 184, 16))
			{
				if (((Global_10966 != Global_6667[iVar528].f_188 || Global_10966 != Global_6667[iVar528].f_192) || Global_10966 != Global_6667[iVar528].f_196) || Global_10966 != Global_6667[iVar528].f_200)
				{
					if (Global_6667[iVar528].f_180)
					{
						if (IS_BLIP_VALID(&Global_6667[iVar528] + 144))
						{
							SET_BLIP_BLINK(&Global_6667[iVar528] + 144, 1, 0, 5f);
						}
						Var14 = { StackVal, StackVal, StackVal, Function_239(iVar5) };
						strcpy(&cVar6, "comp_intro_", 32);
						stradd(&cVar6, UI_GET_STRING(&Var14), 32);
						if (iVar5 == 49)
						{
							Function_57(&cVar6, 0x40f00000, 1, 2, 0, 0, 0, 0);
						}
						else
						{
							Function_60(&cVar6, 0x41200000, 1, 0, 2, 1, 0);
						}
						Function_238(&Global_6667[iVar528] + 184, 16);
						return 0;
					}
				}
			}
			iVar5++;
		}
	}
	switch (iLocal_99)
	{
		case 0x00000000:
			if (!Function_155(Global_119935, 0x10000000))
			{
				if (Function_242(bVar2, 0x10000000))
				{
					Function_241(&Global_119935, 0x10000000);
					Function_240(&Global_54076, 0x10000000, 2);
					if (!&bParam0)
					{
						Function_60("tutorial_aggro_ped", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119935, 1))
			{
				if (Function_242(bVar2, 1))
				{
					Function_241(&Global_119935, 1);
					Function_240(&Global_54076, 1, 2);
					if (!&bParam0)
					{
						Function_60("tutorial_eyewitness_1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119935, 2))
			{
				if (Function_242(bVar2, 2))
				{
					Function_241(&Global_119935, 2);
					Function_240(&Global_54076, 2, 2);
					if (!&bParam0)
					{
						Function_60("tutorial_eyewitness_2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119935, 4))
			{
				if (Function_242(bVar2, 4))
				{
					Function_241(&Global_119935, 4);
					Function_240(&Global_54076, 4, 2);
					if (!&bParam0)
					{
						Function_60("tutorial_eyewitness_3", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119935, 4194304))
			{
				if (Function_242(bVar2, 4194304))
				{
					Function_241(&Global_119935, 4194304);
					Function_240(&Global_54076, 4194304, 2);
					if (!&bParam0)
					{
						Function_60("tutorial_eyewitness_delayed", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119935, 0x2000000))
			{
				if (Function_242(bVar2, 0x2000000))
				{
					Function_241(&Global_119935, 0x2000000);
					Function_240(&Global_54076, 0x2000000, 2);
					if (!&bParam0)
					{
						Function_60("tutorial_wanted_2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119935, 0x4000000))
			{
				if (Function_155(Global_119935, 0x2000000))
				{
					Function_241(&Global_119935, 0x4000000);
					if (!&bParam0)
					{
						Function_60("tutorial_law_lost_awareness", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119935, 0x8000000))
			{
				if (Function_242(bVar2, 0x8000000))
				{
					Function_241(&Global_119935, 0x8000000);
					Function_240(&Global_54076, 0x8000000, 2);
					if (!&bParam0)
					{
						Function_60("tutorial_rcm_wanted", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (Function_242(bVar2, 32768))
			{
				Function_241(&Global_119935, 32768);
				Function_240(&Global_54076, 32768, 2);
				Function_60("tutorial_law_local_spawn", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
			if (Function_242(bVar2, 128))
			{
				if (Function_155(Global_119935, 65536))
				{
					Function_241(&Global_119935, 128);
					Function_240(&Global_54076, 128, 2);
					Function_60("tutorial_law_posse_spawn", 0x41200000, 1, 0, 2, 1, 0);
					return 0;
				}
			}
			if (Function_242(bVar2, 256))
			{
				if (Function_155(Global_119935, 131072))
				{
					Function_241(&Global_119935, 256);
					Function_240(&Global_54076, 256, 2);
					Function_60("tutorial_law_marshal_spawn", 0x41200000, 1, 0, 2, 1, 0);
					return 0;
				}
			}
			if (Function_242(bVar2, 512))
			{
				if (Function_155(Global_119935, 262144))
				{
					Function_241(&Global_119935, 512);
					Function_240(&Global_54076, 512, 2);
					Function_60("tutorial_law_bounty_spawn", 0x41200000, 1, 0, 2, 1, 0);
					return 0;
				}
			}
			if (Function_242(bVar2, 1024))
			{
				if (Function_155(Global_119935, 131072))
				{
					Function_241(&Global_119935, 1024);
					Function_240(&Global_54076, 1024, 2);
					Function_60("tutorial_law_army_spawn", 0x41200000, 1, 0, 2, 1, 0);
					return 0;
				}
			}
			if (!Function_155(Global_119935, 64))
			{
				if (Function_242(bVar2, 64))
				{
					Function_241(&Global_119935, 64);
					Function_240(&Global_54076, 64, 2);
					if (!&bParam0)
					{
						Function_60("tutorial_player_arrested", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119935, 16384))
			{
				if (Function_242(bVar2, 16384))
				{
					Function_241(&Global_119935, 16384);
					Function_240(&Global_54076, 16384, 2);
					if (!&bParam0)
					{
						Function_60("tutorial_law_captured", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119935, 0x1000000))
			{
				if (Function_242(bVar2, 0x1000000))
				{
					Function_241(&Global_119935, 0x1000000);
					Function_240(&Global_54076, 0x1000000, 2);
					if (!&bParam0)
					{
						Function_60("tutorial_law_rewanted", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119935, 8))
			{
				if (Global_6646 && Global_39922.f_308)
				{
					Function_241(&Global_119935, 8);
					if (!&bParam0)
					{
						Function_60("tutorial_wanted_1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119935, 8388608))
			{
				if (Function_242(bVar2, 8388608))
				{
					Function_241(&Global_119935, 8388608);
					if (!&bParam0)
					{
						Function_60("tutorial_law_lost_awareness2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119935, 32))
			{
				if (Function_242(bVar2, 32))
				{
					Function_241(&Global_119935, 32);
					Function_240(&Global_54076, 32, 2);
					if (!&bParam0)
					{
						Function_60("tutorial_law_near", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119935, 4096))
			{
				if (Function_242(bVar2, 4096))
				{
					Function_241(&Global_119935, 4096);
					Function_240(&Global_54076, 4096, 2);
					if (!&bParam0)
					{
						Function_60("tutorial_law_losing_track", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119935, 16) && Function_155(Global_119935, 8))
			{
				if (Function_242(bVar2, 16))
				{
					Function_241(&Global_119935, 16);
					Function_240(&Global_54076, 16, 2);
					if (!&bParam0)
					{
						Function_60("tutorial_civilian_awareness", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119935, 2048))
			{
				if (Function_242(bVar2, 2048))
				{
					Function_241(&Global_119935, 2048);
					Function_240(&Global_54076, 2048, 2);
					if (!&bParam0)
					{
						Function_60("tutorial_law_difficulty_increase", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119935, 8192))
			{
				if (Function_242(bVar2, 8192))
				{
					Function_241(&Global_119935, 8192);
					Function_240(&Global_54076, 8192, 2);
					if (!&bParam0)
					{
						return 0;
					}
				}
			}
			break;
		
		case 0x00000001:
			if (!Function_155(Global_119936, 16384))
			{
				if (Function_242(bVar3, 16384))
				{
					Function_241(&Global_119936, 16384);
					Function_240(&Global_54076, 16384, 3);
					if (!&bParam0)
					{
						Function_60("tutorial_law_bribe", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119936, 32768))
			{
				if (Function_242(bVar3, 32768))
				{
					Function_241(&Global_119936, 32768);
					Function_240(&Global_54076, 32768, 3);
					if (!&bParam0)
					{
						Function_60("tutorial_law_surrender", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119936, 65536))
			{
				if (Function_242(bVar3, 65536))
				{
					Function_241(&Global_119936, 65536);
					Function_240(&Global_54076, 65536, 3);
					if (!&bParam0)
					{
						Function_60("tutorial_law_extra_cops1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119936, 131072))
			{
				if (Function_242(bVar3, 131072))
				{
					Function_241(&Global_119936, 131072);
					Function_240(&Global_54076, 131072, 3);
					if (!&bParam0)
					{
						Function_60("tutorial_law_extra_cops2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119936, 262144))
			{
				if (Function_242(bVar3, 262144))
				{
					Function_241(&Global_119936, 262144);
					Function_240(&Global_54076, 262144, 3);
					if (!&bParam0)
					{
						Function_60("tutorial_law_less_cops", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (Function_242(bVar2, 524288))
			{
				Function_241(&Global_119935, 524288);
				Function_240(&Global_54076, 524288, 2);
				Function_60("tutorial_law_local_end1", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
			if (!Function_155(Global_119935, 1048576))
			{
				if (Function_155(Global_119935, 524288))
				{
					Function_241(&Global_119935, 1048576);
					if (!&bParam0)
					{
						return 0;
					}
				}
			}
			if (Function_242(bVar2, 2097152))
			{
				Function_241(&Global_119935, 2097152);
				Function_240(&Global_54076, 2097152, 2);
				Function_60("tutorial_law_pursuit_end", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
			if (Function_242(bVar2, 65536))
			{
				Function_241(&Global_119935, 65536);
				Function_240(&Global_54076, 65536, 2);
				Function_60("tutorial_law_posse_generated", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
			if (Function_242(bVar2, 131072))
			{
				Function_241(&Global_119935, 131072);
				Function_240(&Global_54076, 131072, 2);
				Function_60("tutorial_law_marshal_generated", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
			if (Function_242(bVar2, 262144))
			{
				Function_241(&Global_119935, 262144);
				Function_240(&Global_54076, 262144, 2);
				Function_60("tutorial_law_bounty_generated", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
			if (!Function_155(Global_119936, 0x2000000))
			{
				if (Function_242(bVar3, 0x2000000))
				{
					Function_241(&Global_119936, 0x2000000);
					Function_240(&Global_54076, 0x2000000, 3);
					Function_60("whistle_GotEvilHorse", 0x41200000, 1, 0, 2, 1, 0);
					return 0;
				}
			}
			break;
		
		case 0x00000002:
			if (Global_6646 || Global_6647)
			{
				break;
			}
			if (!Function_155(Global_119934, 0x20000000))
			{
				if (Function_81(8, 0))
				{
					Function_241(&Global_119934, 0x20000000);
					if (!&bParam0)
					{
						Function_60("tutorial_first_camp_M1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119934, 0x4000000))
			{
				if (Function_81(8, 0))
				{
					Function_241(&Global_119934, 0x4000000);
					if (!&bParam0)
					{
						Function_60("tutorial_loot", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119936, 0x8000000))
			{
				if (Function_242(bVar3, 0x8000000))
				{
					Function_241(&Global_119936, 0x8000000);
					if (!&bParam0)
					{
						Function_60("Old_News_Avail", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119934, 8))
			{
				if (Function_242(bVar1, 8))
				{
					Function_241(&Global_119934, 8);
					if (!&bParam0)
					{
						Function_60("tutorial_road_to_armadillo", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119934, 1))
			{
				if (IS_ACTOR_DRIVING_VEHICLE(&Global_54076) && !(Function_81(4, 0) || Function_81(10, 0)))
				{
					if (IS_ACTOR_DRAFT_VEHICLE(GET_VEHICLE(&Global_54076)))
					{
						Function_241(&Global_119934, 1);
						if (!&bParam0)
						{
							Function_60("tutorial_first_drive_coach", 0x41200000, 1, 0, 2, 1, 0);
							return 0;
						}
					}
				}
			}
			if (!Function_155(Global_119934, 64))
			{
				if (Function_242(bVar1, 64))
				{
					Function_241(&Global_119934, 64);
					Function_240(&Global_54076, 64, 1);
					if (!&bParam0)
					{
						Function_60("tutorial_first_see_coach", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119934, 256))
			{
				if (Function_242(bVar1, 256))
				{
					Function_241(&Global_119934, 256);
					Function_240(&Global_54076, 256, 1);
					if (!&bParam0)
					{
						Function_60("tutorial_first_passenger_coach", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119934, 128))
			{
				if (Function_242(bVar1, 128))
				{
					Function_237(5.0f);
					Function_241(&Global_119934, 128);
					Function_240(&Global_54076, 128, 1);
					if (!&bParam0)
					{
						Function_60("tutorial_first_horse_agitated", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119934, 2097152))
			{
				if (Function_242(bVar1, 2097152))
				{
					Function_241(&Global_119934, 2097152);
					Function_240(&Global_54076, 2097152, 1);
					if (!&bParam0)
					{
						Function_60("tutorial_rcm_1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119934, 4194304))
			{
				if (Function_155(Global_119934, 2097152))
				{
					Function_241(&Global_119934, 4194304);
					Function_240(&Global_54076, 4194304, 1);
					if (!&bParam0)
					{
						Function_60("tutorial_rcm_2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119934, 8388608))
			{
				if (Function_155(Global_119934, 4194304))
				{
					Function_241(&Global_119934, 8388608);
					Function_240(&Global_54076, 8388608, 1);
					if (!&bParam0)
					{
						Function_60("tutorial_rcm_3", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119934, 2))
			{
				if (Function_242(bVar1, 2))
				{
					Function_241(&Global_119934, 2);
					Function_240(&Global_54076, 2, 1);
					if (!&bParam0)
					{
						Function_60("tutorial_first_outfit1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119934, 4))
			{
				if (Function_155(Global_119934, 2))
				{
					Function_241(&Global_119934, 4);
					if (!&bParam0)
					{
						Function_60("tutorial_first_outfit2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_85(3))
			{
				if (!Function_155(Global_119934, 512))
				{
					if (Function_242(bVar1, 512))
					{
						Function_241(&Global_119934, 512);
						Function_240(&Global_54076, 512, 1);
						if (!&bParam0)
						{
							Function_60("tutorial_lost_cards", 0x41200000, 1, 0, 2, 1, 0);
						}
						Function_178(3, 0, 1, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119934, 4096))
			{
				if ((Global_43790 != 2 && !Global_6631) && !Function_130(0, 0, 1, 6))
				{
					Function_241(&Global_119934, 4096);
					if (!&bParam0)
					{
						Function_60("tutorial_first_camp", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119934, 8192))
			{
				if (Function_155(Global_119934, 4096))
				{
					Function_241(&Global_119934, 8192);
					if (!&bParam0)
					{
						Function_60("tutorial_first_camp2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119934, 1024))
			{
				if (((Global_43790 != 2 && !Global_6631) && !Function_130(0, 0, 1, 1)) && Function_81(4, 0))
				{
					Function_241(&Global_119934, 1024);
					if (!&bParam0)
					{
						Function_60("tutorial_first_wilderness1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119934, 2048))
			{
				if (Function_155(Global_119934, 1024))
				{
					Function_241(&Global_119934, 2048);
					if (!&bParam0)
					{
						Function_60("tutorial_first_wilderness2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119934, 16))
			{
				if (Function_242(bVar1, 16) && !Global_6623)
				{
					Function_241(&Global_119934, 16);
					Function_240(&Global_54076, 16, 1);
					if (!&bParam0)
					{
						Function_60("tutorial_first_action_area1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119934, 32))
			{
				if (Function_155(Global_119934, 16))
				{
					Function_241(&Global_119934, 32);
					if (!&bParam0)
					{
						Function_60("tutorial_first_action_area2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119934, 32768))
			{
				if (Function_242(bVar1, 32768))
				{
					Function_241(&Global_119934, 32768);
					if (!&bParam0)
					{
						Function_60("tutorial_kill_job", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119934, 65536))
			{
				if (Function_242(bVar1, 65536))
				{
					Function_240(&Global_54076, 65536, 1);
					if (!&bParam0)
					{
						Function_60("tutorial_kill_shop", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119934, 131072))
			{
				if (Function_242(bVar1, 131072))
				{
					Function_241(&Global_119934, 131072);
					if (!&bParam0)
					{
						Function_60("tutorial_first_headshot_bonus", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119934, 524288))
			{
				if (Function_242(bVar1, 524288))
				{
					Function_241(&Global_119934, 524288);
					if (!&bParam0)
					{
						Function_60("tutorial_first_robbery", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119934, 1048576))
			{
				if (Function_242(bVar1, 1048576))
				{
					Function_241(&Global_119934, 1048576);
					if (!&bParam0)
					{
						Function_60("tutorial_first_robbery_denial", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119934, 0x1000000))
			{
				if (Function_242(bVar1, 0x1000000))
				{
					Function_241(&Global_119934, 0x1000000);
					if (!&bParam0)
					{
						Function_60("tutorial_second_weapon1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119934, 0x2000000))
			{
				if (Function_155(Global_119934, 0x1000000))
				{
					Function_241(&Global_119934, 0x2000000);
					if (!&bParam0)
					{
						Function_60("tutorial_second_weapon2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119936, 4194304))
			{
				if (Function_242(bVar3, 4194304))
				{
					Function_241(&Global_119936, 4194304);
					if (!&bParam0)
					{
						Function_60("tutorial_random_char", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119936, 524288))
			{
				if (Function_242(bVar3, 524288))
				{
					Function_241(&Global_119936, 524288);
					if (!&bParam0)
					{
						Function_60("tutorial_skinning_1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119936, 1048576))
			{
				if (Function_155(Global_119936, 524288))
				{
					Function_241(&Global_119936, 1048576);
					if (!&bParam0)
					{
						Function_60("tutorial_skinning_2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119936, 2097152))
			{
				if (Function_242(bVar3, 2097152))
				{
					Function_241(&Global_119936, 2097152);
					if (!&bParam0)
					{
						Function_60("tutorial_skinning_3", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			break;
		
		case 0x00000003:
			if (Global_6646 || Global_6647)
			{
				break;
			}
			if (!Function_155(Global_119934, 262144))
			{
				if (Function_242(bVar1, 262144))
				{
					Function_241(&Global_119934, 262144);
					if (!&bParam0)
					{
						Function_60("tutorial_bounty_no_money_first", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119936, 1))
			{
				if (Function_242(bVar3, 1))
				{
					Function_241(&Global_119936, 1);
					Function_240(&Global_54076, 1, 3);
					if (!&bParam0)
					{
						Function_60("tutorial_first_honor_positive", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119936, 2))
			{
				if (Function_242(bVar3, 2))
				{
					Function_241(&Global_119936, 2);
					Function_240(&Global_54076, 2, 3);
					if (!&bParam0)
					{
						Function_60("tutorial_first_honor_negative", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119936, 4))
			{
				if (Function_242(bVar3, 4))
				{
					Function_241(&Global_119936, 4);
					Function_240(&Global_54076, 4, 3);
					if (!&bParam0)
					{
						Function_60("tutorial_first_notoriety_positive", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119936, 8))
			{
				if (Function_236() == 0)
				{
					Function_241(&Global_119936, 8);
					if (!&bParam0)
					{
						Function_60("tutorial_very_low_honor", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119936, 16))
			{
				if (Function_236() == 1)
				{
					Function_241(&Global_119936, 16);
					if (!&bParam0)
					{
						Function_60("tutorial_low_honor", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119936, 32))
			{
				if (Function_236() == 2)
				{
					Function_241(&Global_119936, 32);
					if (!&bParam0)
					{
						Function_60("tutorial_medium_low_honor", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119936, 64))
			{
				if (Function_236() == 4)
				{
					Function_241(&Global_119936, 64);
					if (!&bParam0)
					{
						Function_60("tutorial_medium_high_honor", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119936, 128))
			{
				if (Function_236() == 5)
				{
					Function_241(&Global_119936, 128);
					if (!&bParam0)
					{
						Function_60("tutorial_high_honor", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119936, 256))
			{
				if (Function_236() == 6)
				{
					Function_241(&Global_119936, 256);
					if (!&bParam0)
					{
						Function_60("tutorial_very_high_honor", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119936, 512))
			{
				if (Function_235() == 1)
				{
					Function_241(&Global_119936, 512);
					if (!&bParam0)
					{
						Function_60("tutorial_low_notoriety", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119936, 1024))
			{
				if (Function_235() == 2)
				{
					Function_241(&Global_119936, 1024);
					if (!&bParam0)
					{
						Function_60("tutorial_medium_low_notoriety", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119936, 2048))
			{
				if (Function_235() == 3)
				{
					Function_241(&Global_119936, 2048);
					if (!&bParam0)
					{
						Function_60("tutorial_medium_notoriety", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119936, 4096))
			{
				if (Function_235() == 4)
				{
					Function_241(&Global_119936, 4096);
					if (!&bParam0)
					{
						Function_60("tutorial_medium_high_notoriety", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119936, 8192))
			{
				if (Function_235() == 5)
				{
					Function_241(&Global_119936, 8192);
					if (!&bParam0)
					{
						Function_60("tutorial_high_notoriety", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119936, 8388608))
			{
				if (Function_242(bVar3, 8388608))
				{
					Function_241(&Global_119936, 8388608);
					Function_240(&Global_54076, 8388608, 3);
					if (!&bParam0)
					{
						Function_60("tutorial_first_minigame_in_rain", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119936, 0x1000000))
			{
				if (Function_242(bVar3, 0x1000000))
				{
					Function_241(&Global_119936, 0x1000000);
					Function_240(&Global_54076, 0x1000000, 3);
					if (!&bParam0)
					{
						Function_60("tutorial_first_missed_achievement", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119934, 0x8000000))
			{
				if (Function_242(bVar1, 0x8000000))
				{
					Function_241(&Global_119934, 0x8000000);
					Function_240(&Global_54076, 0x8000000, 1);
					if (!&bParam0)
					{
						Function_60("tutorial_first_on_donkey", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (Function_242(bVar4, 1) && Function_81(4, 0))
			{
				Function_240(&Global_54076, 1, 4);
				if (!&bParam0)
				{
					Function_60("tutorial_new_item_in_shops", 0x41200000, 1, 0, 2, 1, 0);
					return 0;
				}
			}
			if (!Function_155(Global_119935, 0x20000000))
			{
				if ((((((HAS_ITEM(Function_140(53), &Global_54076) || HAS_ITEM(Function_140(54), &Global_54076)) || HAS_ITEM(Function_140(55), &Global_54076)) || HAS_ITEM(Function_140(56), &Global_54076)) || HAS_ITEM(Function_140(57), &Global_54076)) || HAS_ITEM(Function_140(58), &Global_54076)) || HAS_ITEM(Function_140(10), &Global_54076))
				{
					Function_241(&Global_119935, 0x20000000);
					if (!&bParam0)
					{
						Function_60("tutorial_outfit_scrap", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_242(bVar4, 2) && Function_81(4, 0))
			{
				if (Function_155(Global_119937, 2))
				{
					if (GET_CURRENT_GAME_TIME() < Global_21369.f_224)
					{
						if (!&bParam0)
						{
							Function_60("tutorial_gunsmith", 0x41200000, 1, 0, 2, 1, 0);
							Global_21369.f_224 = (GET_CURRENT_GAME_TIME() + fVar0);
							return 0;
						}
					}
				}
				if (!Function_155(Global_119937, 2))
				{
					if (!&bParam0)
					{
						Function_241(&Global_119937, 2);
						Function_60("tutorial_gunsmith", 0x41200000, 1, 0, 2, 1, 0);
						Global_21369.f_224 = (GET_CURRENT_GAME_TIME() + fVar0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119937, 16))
			{
				if (Function_81(9, 0))
				{
					Function_241(&Global_119937, 16);
					if (!&bParam0)
					{
						Function_60("tutorial_place_waypoint", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_155(Global_119937, 32))
			{
				if (Function_242(bVar4, 32))
				{
					Function_241(&Global_119937, 32);
					Function_240(&Global_54076, 32, 4);
					if (!&bParam0)
					{
						Function_60("tutorial_bait_1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			break;
	}
	iLocal_99++;
	if (iLocal_99 >= 3)
	{
		iLocal_99 = 0;
	}
	return 0;
}

int Function_235() //Position: 0x116F1 / 71409
{
	return Global_21369.f_248;
}

int Function_236() //Position: 0x116FC / 71420
{
	return Global_21369.f_244;
}

void Function_237(float fParam0) //Position: 0x11707 / 71431
{
	if (fParam0 < 0.0f)
	{
		FLASH_SET_FLOAT("testInventory", "staminaBlinking", fParam0);
	}
	else
	{
		LOG_ERROR("RADAR_BLINK_HORSE_STAMINA_BAR: called with a negative or zero duration!");
	}
	return;
}

void Function_238(var uParam0, int iParam1) //Position: 0x1178C / 71564
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

struct<16> Function_239(int iParam0) //Position: 0x117A6 / 71590
{
	char* cVar0[16];
	
	if (!Function_59())
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

void Function_240(var uParam0, int iParam1, int iParam2) //Position: 0x117E0 / 71648
{
	var uVar0;
	char* cVar1[16];
	bool bVar5;
	
	uVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	Function_151(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		return;
	}
	bVar5 = DECOR_GET_INT(&uParam0, &cVar1);
	DECOR_SET_INT(&uParam0, &cVar1, (bVar5 - (bVar5 && uVar0)));
	return;
}

void Function_241(var uParam0, int iParam1) //Position: 0x11834 / 71732
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_242(bool bParam0, int iParam1) //Position: 0x11845 / 71749
{
	var uVar0;
	
	uVar0 = iParam1;
	if ((bParam0 && uVar0) >= 0)
	{
		return 1;
	}
	return 0;
}

void Function_243() //Position: 0x1185B / 71771
{
	return;
}

void Function_244(struct<57> Param0) //Position: 0x11861 / 71777
{
	strcpy(&Param0 + 24, "nLAW-PRINT", 16);
	Param0 = 72866;
	*(&Param0 + 8) = 71842;
	*(&Param0 + 16) = 71836;
	Param0.f_56 = 1;
	return;
}

void Function_245() //Position: 0x1189C / 71836
{
	return;
}

int Function_246() //Position: 0x118A2 / 71842
{
	Function_247();
	return 0;
}

void Function_247() //Position: 0x118AC / 71852
{
	struct<2> Var0;
	struct<2> Var2;
	int iVar4;
	
	if (Global_42046.f_808 < GET_CURRENT_GAME_TIME())
	{
		return;
	}
	if (!IS_ACTOR_VALID(&Global_54076))
	{
		return;
	}
	GET_POSITION(&Global_54076, &Var0);
	iVar4 = 0;
	while (iVar4 <= Global_42046)
	{
		if (Global_42046[iVar420].f_128 < 0.0f)
		{
			if (IS_OBJECT_VALID(&Global_42046[iVar420] + 144))
			{
				switch (GET_OBJECT_TYPE(&Global_42046[iVar420] + 144))
				{
					case 0x0000000F:
						GET_OBJECT_POSITION(&Global_42046[iVar420] + 144, &Var2);
						if (VDIST(Var0, Var2) > Global_42046[iVar420].f_132)
						{
							if (Global_42046[iVar420].f_136)
							{
								if (CAN_ANYONE_OF_FACTION_SEE_OBJECT(GET_ACTOR_FACTION(GET_ACTOR_FROM_OBJECT(&Global_42046[iVar420] + 144)), GET_PLAYER_ACTOR(0)))
								{
									Global_42046.f_808 = (GET_CURRENT_GAME_TIME() + Global_42046[iVar420].f_128);
									Function_252(iVar4);
									Function_251(iVar4);
									return;
								}
							}
							Global_42046.f_808 = (GET_CURRENT_GAME_TIME() + Global_42046[iVar420].f_128);
							Function_252(iVar4);
							Function_251(iVar4);
							return;
						}
						break;
					
					case 0x00000019:
						if (Function_249(GET_SQUAD_FROM_OBJECT(&Global_42046[iVar420] + 144), GET_PLAYER_ACTOR(0), Global_42046[iVar420].f_132, 1))
						{
							if (Global_42046[iVar420].f_136)
							{
								if (CAN_ANYONE_OF_FACTION_SEE_OBJECT(GET_ACTOR_FACTION(Function_248(GET_SQUAD_FROM_OBJECT(&Global_42046[iVar420] + 144))), GET_PLAYER_ACTOR(0)))
								{
									Global_42046.f_808 = (GET_CURRENT_GAME_TIME() + Global_42046[iVar420].f_128);
									Function_252(iVar4);
									Function_251(iVar4);
									return;
								}
							}
							Global_42046.f_808 = (GET_CURRENT_GAME_TIME() + Global_42046[iVar420].f_128);
							Function_252(iVar4);
							Function_251(iVar4);
							return;
						}
						break;
				}
				iVar4++;
			}
			else
			{
				Function_251(iVar4);
			}
		}
		else
		{
			return;
		}
	}
	return;
}

var Function_248(int iParam0) //Position: 0x11A4D / 72269
{
	int iVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return "";
	}
	bVar1 = false;
	while (bVar1 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		iVar0 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar1);
		if (IS_ACTOR_VALID(&iVar0) && IS_ACTOR_ALIVE(&iVar0))
		{
			return &iVar0;
		}
		bVar1++;
	}
	return "";
}

bool Function_249(var uParam0, var uParam1, bool bParam2, var uParam3) //Position: 0x11A9A / 72346
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
					if (!Function_250(&uVar1, 1) || uParam3)
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

bool Function_250(int iParam0, int iParam1) //Position: 0x11B3F / 72511
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

void Function_251(int iParam0) //Position: 0x11B91 / 72593
{
	while (iParam0 <= (Global_42046 - 1))
	{
		Global_42046[iParam020] = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_42046[iParam0 + 120] };
		Global_42046[iParam020].f_128 = Global_42046[iParam0 + 120].f_128;
		Global_42046[iParam020].f_152 = Global_42046[iParam0 + 120].f_152;
		Global_42046[iParam020].f_132 = Global_42046[iParam0 + 120].f_132;
		Global_42046[iParam020].f_136 = Global_42046[iParam0 + 120].f_136;
		(&Global_42046[iParam020] + 144) = &Global_42046[iParam0 + 120] + 144;
		Global_42046[iParam020].f_140 = Global_42046[iParam0 + 120].f_140;
		iParam0++;
	}
	Global_42046[(Global_42046 - 1)20].f_128 = 0.0f;
	return;
}

void Function_252(int iParam0) //Position: 0x11C47 / 72775
{
	char* cVar0[64];
	
	cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_42046[iParam020] };
	switch (Global_42046[iParam020].f_152)
	{
		case 0x00000000:
			stradd(&cVar0, "_en", 64);
			break;
		
		case 0x00000001:
			stradd(&cVar0, "_sp", 64);
			break;
	}
	Function_61(&cVar0, Global_42046[iParam020].f_128, 0, 2, 1, 0);
	return;
}

void Function_253() //Position: 0x11CA2 / 72866
{
	return;
}

void Function_254(struct<57> Param0) //Position: 0x11CA8 / 72872
{
	strcpy(&Param0 + 24, "AMBIENT-CHALL", 16);
	Param0 = 132884;
	*(&Param0 + 8) = 73028;
	*(&Param0 + 16) = 72935;
	Param0.f_56 = 1;
	return;
}

void Function_255() //Position: 0x11CE7 / 72935
{
	RELEASE_LAYOUT_REF(Function_256());
	return;
}

bool Function_256() //Position: 0x11CF3 / 72947
{
	var uVar0;
	
	uVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(&uVar0))
	{
		uVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return &uVar0;
}

int Function_257() //Position: 0x11D44 / 73028
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
	bVar1 = Function_8(Global_124175.f_72, 16384);
	uVar2 = Function_446();
	bVar3 = 0 | Global_53524.f_44;
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (IS_ACTOR_ON_TRAIN(&Global_54076, 1) && !Global_6623)
		{
			uVar4 = NET_MAILBOX_GET_CHALLENGE_BY_ID("sc_challenge_aa_09");
			if (Function_444(&uVar4))
			{
				iVar5 = Function_443(&uVar4);
				if (iVar5 >= 4294967295)
				{
					if (!Global_132987[iVar5125].f_116)
					{
						SC_CHALLENGE_LAUNCH(&uVar4);
						Global_132987[iVar5125].f_116 = 1;
					}
				}
			}
		}
		else
		{
			iVar6 = NET_MAILBOX_GET_CHALLENGE_BY_ID("sc_challenge_aa_09");
			iVar7 = Function_443(&iVar6);
			if (iVar7 >= 4294967295)
			{
				if (Function_444(&iVar6) && Global_132987[iVar7125].f_116)
				{
					Global_132987[iVar7125].f_116 = 0;
				}
			}
		}
	}
	if (bVar3)
	{
		while (bVar0 >= 24 && !Global_131807.f_1332)
		{
			if (!Function_351(&Global_78078, bVar0, bVar1, uVar2))
			{
				PRINTSTRING("AMBIENT_MISSIONS_UPDATE: WARNING - failed to update mission of index: ");
				PRINTINT(bVar0);
				PRINTNL();
			}
			bVar0++;
		}
	}
	else if (!Global_6624)
	{
		while (bVar0 <= Global_77932)
		{
			if (!Function_316(&Global_77932, bVar0))
			{
				PRINTSTRING("AMBIENT_MISSIONS_UPDATE: WARNING - failed to update mission of index: ");
				PRINTINT(bVar0);
				PRINTNL();
			}
			bVar0++;
		}
		if (Function_182(32))
		{
			Function_302();
		}
		if (Function_182(64))
		{
			Function_260();
		}
	}
	Function_258();
	return 0;
}

void Function_258() //Position: 0x11F39 / 73529
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	uVar0 = Function_256();
	uVar1 = Function_259();
	if (IS_LAYOUTREF_VALID(&uVar0))
	{
		if (GET_NUM_ITERATOR_MATCHES(&uVar1) >= 0)
		{
			uVar2 = START_OBJECT_ITERATOR(&uVar1);
			while (IS_OBJECT_VALID(&uVar2))
			{
				if (DECOR_CHECK_EXIST(&uVar2, "AM_NO_PURGE"))
				{
					if (DECOR_GET_INT(&uVar2, "AM_NO_PURGE") < 0)
					{
						DESTROY_OBJECT(&uVar2);
					}
				}
				else
				{
					DESTROY_OBJECT(&uVar2);
				}
				uVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
			}
		}
	}
	return;
}

var Function_259() //Position: 0x11FBA / 73658
{
	var uVar0;
	int iVar1;
	
	uVar0 = Function_256();
	iVar1 = GET_ITERATOR_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&uVar0, "AmbientMissions_Iterator"));
	if (!IS_ITERATOR_VALID(&iVar1))
	{
		iVar1 = CREATE_NAMED_OBJECT_ITERATOR(&uVar0, "AmbientMissions_Iterator");
	}
	return &iVar1;
}

void Function_260() //Position: 0x1201E / 73758
{
	bool bVar0;
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
	bVar0 = Function_301("ER_SP");
	iVar10 = 8872;
	switch (StackVal)
	{
		case 0x00000000:
			switch (StackVal)
			{
				case 0x00000000:
					if ((!Global_6661 && Function_81(41, 0)) || (Global_6661 && Function_80(5)))
					{
						Function_300();
						SET_JOURNAL_ENTRY_PROGRESS(Local_57.f_32, -1.0f, true, 0);
						Local_57.f_40 = 1;
					}
					Local_57.f_4 = 1;
					break;
				
				case 0x00000001:
					if (ACTOR_HAS_WEAPON(&Global_54076, 31))
					{
						Local_57.f_4 = 2;
					}
					else if ((!Global_6661 && Function_81(41, 0)) || (Global_6661 && Function_80(5)))
					{
						if (Local_57.f_40 != 1)
						{
							Local_57.f_40 = 1;
							Function_300();
							SET_JOURNAL_ENTRY_PROGRESS(Local_57.f_32, -1.0f, true, 0);
						}
					}
					break;
				
				case 0x00000002:
					if (((Global_6618 && !Global_99146) && !Global_93258) && Function_296())
					{
						Function_295(&bVar0);
						Function_294(1, "AM_ER");
						Function_280(20, 1, 0);
						Function_278();
						Local_57.f_8 = 1;
						Local_57.f_4 = 0;
						Local_57.f_12 = 0.0f;
						Local_57.f_40 = 0;
						Function_277();
						Function_276();
						memcpy(&uVar6, StackVal, StackVal, StackVal, StackVal, StackVal, Function_275(), 4);
						Local_57.f_32 = CREATE_JOURNAL_ENTRY(&uVar6, 3, false, "challenge_01");
					}
					break;
			}
			break;
		
		case 0x00000001:
			switch (StackVal)
			{
				case 0x00000000:
					Function_300();
					SET_JOURNAL_ENTRY_PROGRESS(Local_57.f_32, Local_57.f_12, true, 0);
					(*&Local_57 + 44)[0] = GET_CURRENT_GAME_TIME();
					Local_57.f_4 = 1;
					break;
				
				case 0x00000001:
					if (GET_LAST_ATTACK_TIME(&Global_54076) < ((*&Local_57 + 44)[0] + 0,3f))
					{
						(*&Local_57 + 44)[0] = GET_LAST_ATTACK_TIME(&Global_54076);
					}
					if (!Global_6661)
					{
						bVar3 = Function_274(2, &bVar0, 1);
						if (bVar3 >= 0)
						{
							iVar2 = 0;
							while (Function_273(&bVar0, &iVar2, &bVar4))
							{
								if ((GET_EVENT_TIME(GET_EVENT_FROM_OBJECT(&bVar4)) + 0,3f) <= (*&Local_57 + 44)[0])
								{
									if (Function_272(&bVar4) == 31)
									{
										bVar1 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&bVar4)));
										if (IS_ACTOR_VALID(&bVar1))
										{
											if (IS_ACTOR_HUMAN(&bVar1))
											{
												if (Function_271(&bVar1))
												{
													if (DECOR_CHECK_EXIST(&bVar4, "AM_InCover"))
													{
														if (!DECOR_CHECK_EXIST(&bVar1, "AM_ERcounted"))
														{
															Local_57.f_36++;
															DECOR_SET_BOOL(&bVar1, "AM_ERcounted", 1);
														}
													}
												}
											}
										}
									}
								}
							}
							if (Local_57.f_36 > 5)
							{
								Local_57.f_4 = 2;
								Local_57.f_36 = 0;
								break;
							}
							else
							{
								Function_295(&bVar0);
							}
						}
						bVar3 = Function_274(91, &bVar0, 1);
						if (bVar3 >= 0)
						{
							iVar2 = 0;
							while (Function_273(&bVar0, &iVar2, &bVar4))
							{
								if ((GET_EVENT_TIME(GET_EVENT_FROM_OBJECT(&bVar4)) + 0,3f) <= (*&Local_57 + 44)[0])
								{
									if (Function_272(&bVar4) == 31)
									{
										bVar1 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&bVar4)));
										if (IS_ACTOR_VALID(&bVar1))
										{
											if (IS_ACTOR_HUMAN(&bVar1))
											{
												if (Function_271(&bVar1))
												{
													if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&bVar1), iVar10))
													{
														if (DECOR_CHECK_EXIST(&bVar4, "AM_InCover"))
														{
															if (!DECOR_CHECK_EXIST(&bVar1, "AM_ERcounted"))
															{
																Local_57.f_36++;
																DECOR_SET_BOOL(&bVar1, "AM_ERcounted", 1);
															}
														}
													}
												}
											}
										}
									}
								}
							}
							if (Local_57.f_36 > 5)
							{
								Local_57.f_4 = 2;
								Local_57.f_36 = 0;
								break;
							}
							else
							{
								Function_295(&bVar0);
							}
						}
						fVar5 = Local_57.f_12;
						Local_57.f_12 = (IntToFloat(Local_57.f_36) / 5.0f);
						if (Local_57.f_12 == fVar5)
						{
							Function_270(Local_57.f_12, Local_57.f_36, 30);
							Function_277();
						}
					}
					else
					{
						bVar3 = Function_274(2, &bVar0, 1);
						if (bVar3 >= 0)
						{
							iVar2 = 0;
							while (Function_273(&bVar0, &iVar2, &bVar4))
							{
								if ((GET_EVENT_TIME(GET_EVENT_FROM_OBJECT(&bVar4)) + 0,3f) <= (*&Local_57 + 44)[0])
								{
									if (Function_272(&bVar4) == 31)
									{
										bVar1 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&bVar4)));
										if (IS_ACTOR_VALID(&bVar1))
										{
											iVar11 = Function_263(&bVar1);
											if (((iVar11 != 0 || iVar11 != 1) || iVar11 != 2) || iVar11 != 3)
											{
												if (!DECOR_CHECK_EXIST(&bVar1, "AM_ERcounted"))
												{
													DECOR_SET_BOOL(&bVar1, "AM_ERcounted", 1);
													switch (iVar11)
													{
														case 0x00000000:
															Function_124(&Local_57 + 40, 1);
															break;
														
														case 0x00000001:
															Function_124(&Local_57 + 40, 2);
															break;
														
														case 0x00000002:
															Function_124(&Local_57 + 40, 4);
															break;
														
														case 0x00000003:
															Function_124(&Local_57 + 40, 8);
															break;
														}
													}
												}
											}
									}
								}
							}
							if (((Function_8(Local_57.f_40, 1) && Function_8(Local_57.f_40, 2)) && Function_8(Local_57.f_40, 4)) && Function_8(Local_57.f_40, 8))
							{
								Local_57.f_4 = 2;
								Local_57.f_36 = 0;
								Local_57.f_40 = 0;
								break;
							}
							else
							{
								Function_295(&bVar0);
							}
						}
						bVar3 = Function_274(91, &bVar0, 1);
						if (bVar3 >= 0)
						{
							iVar2 = 0;
							while (Function_273(&bVar0, &iVar2, &bVar4))
							{
								if ((GET_EVENT_TIME(GET_EVENT_FROM_OBJECT(&bVar4)) + 0,3f) <= (*&Local_57 + 44)[0])
								{
									if (Function_272(&bVar4) == 31)
									{
										bVar1 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&bVar4)));
										if (IS_ACTOR_VALID(&bVar1))
										{
											iVar11 = Function_263(&bVar1);
											if (((iVar11 != 0 || iVar11 != 1) || iVar11 != 2) || iVar11 != 3)
											{
												if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&bVar1), iVar10))
												{
													if (!DECOR_CHECK_EXIST(&bVar1, "AM_ERcounted"))
													{
														DECOR_SET_BOOL(&bVar1, "AM_ERcounted", 1);
														switch (iVar11)
														{
															case 0x00000000:
																Function_124(&Local_57 + 40, 1);
																break;
															
															case 0x00000001:
																Function_124(&Local_57 + 40, 2);
																break;
															
															case 0x00000002:
																Function_124(&Local_57 + 40, 4);
																break;
															
															case 0x00000003:
																Function_124(&Local_57 + 40, 8);
																break;
															}
														}
													}
												}
											}
									}
								}
							}
							if (((Function_8(Local_57.f_40, 1) && Function_8(Local_57.f_40, 2)) && Function_8(Local_57.f_40, 4)) && Function_8(Local_57.f_40, 8))
							{
								Local_57.f_4 = 2;
								Local_57.f_36 = 0;
								Local_57.f_40 = 0;
								break;
							}
							else
							{
								Function_295(&bVar0);
							}
						}
						bVar3 = false;
						fVar5 = Local_57.f_12;
						if (Function_8(Local_57.f_40, 1))
						{
							bVar3++;
						}
						if (Function_8(Local_57.f_40, 2))
						{
							bVar3++;
						}
						if (Function_8(Local_57.f_40, 4))
						{
							bVar3++;
						}
						if (Function_8(Local_57.f_40, 8))
						{
							bVar3++;
						}
						Local_57.f_12 = (IntToFloat(bVar3) / 4.0f);
						if (Local_57.f_12 == fVar5)
						{
							SET_JOURNAL_ENTRY_PROGRESS(Local_57.f_32, Local_57.f_12, true, 0);
							Function_277();
						}
					}
					break;
				
				case 0x00000002:
					if (Function_296())
					{
						Function_294(2, "AM_ER");
						Function_295(&bVar0);
						Function_280(20, 1, 0);
						Function_278();
						Local_57.f_8 = 2;
						Local_57.f_4 = 0;
						Local_57.f_12 = 0.0f;
						Function_277();
						if (Global_6661 && _GET_AMMO_AMOUNT(&Global_54076, 13, 1) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 13))
						{
							_ADD_AMMO_OF_TYPE(&Global_54076, 13, 2.0f, 1, 1);
						}
						Function_276();
						memcpy(&uVar6, StackVal, StackVal, StackVal, StackVal, StackVal, Function_275(), 4);
						Local_57.f_32 = CREATE_JOURNAL_ENTRY(&uVar6, 3, false, "challenge_01");
					}
					break;
			}
			break;
		
		case 0x00000002:
			switch (StackVal)
			{
				case 0x00000000:
					Function_300();
					SET_JOURNAL_ENTRY_PROGRESS(Local_57.f_32, -1.0f, true, 0);
					(*&Local_57 + 44)[0] = GET_CURRENT_GAME_TIME();
					Local_57.f_4 = 1;
					break;
				
				case 0x00000001:
					if (GET_LAST_ATTACK_TIME(&Global_54076) < ((*&Local_57 + 44)[0] + 0,3f))
					{
						(*&Local_57 + 44)[0] = GET_LAST_ATTACK_TIME(&Global_54076);
						Local_57.f_36 = 0;
					}
					bVar3 = Function_274(2, &bVar0, 1);
					if (bVar3 >= 0)
					{
						iVar2 = 0;
						while (Function_273(&bVar0, &iVar2, &bVar4))
						{
							if ((GET_EVENT_TIME(GET_EVENT_FROM_OBJECT(&bVar4)) + 0,3f) <= (*&Local_57 + 44)[0])
							{
								if (Function_272(&bVar4) == 31)
								{
									bVar1 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&bVar4)));
									if (IS_ACTOR_VALID(&bVar1))
									{
										if (IS_ACTOR_HUMAN(&bVar1))
										{
											if ((!Global_6661 && Function_271(&bVar1)) || (Global_6661 && Function_263(&bVar1) == 4294967295))
											{
												if (!DECOR_CHECK_EXIST(&bVar1, "AM_ERcounted"))
												{
													Local_57.f_36++;
													DECOR_SET_BOOL(&bVar1, "AM_ERcounted", 1);
												}
											}
										}
									}
								}
							}
						}
						if (Local_57.f_36 > 3)
						{
							Local_57.f_4 = 2;
							Local_57.f_36 = 0;
							break;
						}
						else
						{
							Function_295(&bVar0);
						}
					}
					bVar3 = Function_274(91, &bVar0, 1);
					if (bVar3 >= 0)
					{
						iVar2 = 0;
						while (Function_273(&bVar0, &iVar2, &bVar4))
						{
							if ((GET_EVENT_TIME(GET_EVENT_FROM_OBJECT(&bVar4)) + 0,3f) <= (*&Local_57 + 44)[0])
							{
								if (Function_272(&bVar4) == 31)
								{
									bVar1 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&bVar4)));
									if (IS_ACTOR_VALID(&bVar1))
									{
										if (IS_ACTOR_HUMAN(&bVar1))
										{
											if ((!Global_6661 && Function_271(&bVar1)) || (Global_6661 && Function_263(&bVar1) == 4294967295))
											{
												if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&bVar1), iVar10))
												{
													if (!DECOR_CHECK_EXIST(&bVar1, "AM_ERcounted"))
													{
														Local_57.f_36++;
														DECOR_SET_BOOL(&bVar1, "AM_ERcounted", 1);
													}
												}
											}
										}
									}
								}
							}
						}
						if (Local_57.f_36 > 3)
						{
							Local_57.f_4 = 2;
							Local_57.f_36 = 0;
							break;
						}
						else
						{
							Function_295(&bVar0);
						}
					}
					break;
				
				case 0x00000002:
					if (Function_296())
					{
						Function_294(3, "AM_ER");
						Function_295(&bVar0);
						Function_280(20, 1, 0);
						Function_278();
						Local_57.f_8 = 3;
						Local_57.f_4 = 0;
						Local_57.f_12 = 0.0f;
						Function_277();
						if (Global_6661 && _GET_AMMO_AMOUNT(&Global_54076, 13, 1) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 13))
						{
							_ADD_AMMO_OF_TYPE(&Global_54076, 13, 2.0f, 1, 1);
						}
						Function_276();
						memcpy(&uVar6, StackVal, StackVal, StackVal, StackVal, StackVal, Function_275(), 4);
						Local_57.f_32 = CREATE_JOURNAL_ENTRY(&uVar6, 3, false, "challenge_01");
					}
					break;
			}
			break;
		
		case 0x00000003:
			switch (StackVal)
			{
				case 0x00000000:
					Function_300();
					SET_JOURNAL_ENTRY_PROGRESS(Local_57.f_32, -1.0f, true, 0);
					(*&Local_57 + 44)[0] = GET_CURRENT_GAME_TIME();
					Local_57.f_4 = 1;
					break;
				
				case 0x00000001:
					if (GET_LAST_ATTACK_TIME(&Global_54076) < ((*&Local_57 + 44)[0] + 0,3f))
					{
						(*&Local_57 + 44)[0] = GET_LAST_ATTACK_TIME(&Global_54076);
						Local_57.f_36 = 0;
					}
					bVar3 = Function_262(2, "ANIMAL", &bVar0, 1, 0);
					if (bVar3 >= 0)
					{
						iVar2 = 0;
						while (Function_273(&bVar0, &iVar2, &bVar4))
						{
							if ((GET_EVENT_TIME(GET_EVENT_FROM_OBJECT(&bVar4)) + 0,3f) <= (*&Local_57 + 44)[0])
							{
								if (Function_272(&bVar4) == 31)
								{
									bVar1 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&bVar4)));
									if (IS_ACTOR_VALID(&bVar1))
									{
										if (IS_ACTOR_ANIMAL(&bVar1))
										{
											if (ANIMAL_ACTOR_GET_DOMESTICATION(&bVar1) == 1)
											{
												if (!DECOR_CHECK_EXIST(&bVar1, "AM_ERcounted"))
												{
													Local_57.f_36++;
													DECOR_SET_BOOL(&bVar1, "AM_ERcounted", 1);
												}
											}
										}
									}
								}
							}
						}
						if (Local_57.f_36 > 2)
						{
							Local_57.f_4 = 2;
							Local_57.f_36 = 0;
							break;
						}
						else
						{
							Function_295(&bVar0);
						}
					}
					bVar3 = Function_262(91, "ANIMAL", &bVar0, 1, 0);
					if (bVar3 >= 0)
					{
						iVar2 = 0;
						while (Function_273(&bVar0, &iVar2, &bVar4))
						{
							if ((GET_EVENT_TIME(GET_EVENT_FROM_OBJECT(&bVar4)) + 0,3f) <= (*&Local_57 + 44)[0])
							{
								if (Function_272(&bVar4) == 31)
								{
									bVar1 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&bVar4)));
									if (IS_ACTOR_VALID(&bVar1))
									{
										if (IS_ACTOR_ANIMAL(&bVar1))
										{
											if (ANIMAL_ACTOR_GET_DOMESTICATION(&bVar1) == 1)
											{
												if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&bVar1), iVar10))
												{
													if (!DECOR_CHECK_EXIST(&bVar1, "AM_ERcounted"))
													{
														Local_57.f_36++;
														DECOR_SET_BOOL(&bVar1, "AM_ERcounted", 1);
													}
												}
											}
										}
									}
								}
							}
						}
						if (Local_57.f_36 > 2)
						{
							Local_57.f_4 = 2;
							Local_57.f_36 = 0;
							break;
						}
						else
						{
							Function_295(&bVar0);
						}
					}
					break;
				
				case 0x00000002:
					if (Function_296())
					{
						Function_294(4, "AM_ER");
						Function_295(&bVar0);
						Function_280(20, 1, 0);
						Function_278();
						Local_57.f_8 = 4;
						Local_57.f_4 = 0;
						Local_57.f_12 = 0.0f;
						Local_57.f_36 = 0;
						Function_277();
						if (Global_6661 && _GET_AMMO_AMOUNT(&Global_54076, 13, 1) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 13))
						{
							_ADD_AMMO_OF_TYPE(&Global_54076, 13, 2.0f, 1, 1);
						}
						Function_276();
						memcpy(&uVar6, StackVal, StackVal, StackVal, StackVal, StackVal, Function_275(), 4);
						Local_57.f_32 = CREATE_JOURNAL_ENTRY(&uVar6, 3, false, "challenge_01");
					}
					break;
			}
			break;
		
		case 0x00000004:
			switch (StackVal)
			{
				case 0x00000000:
					Function_300();
					SET_JOURNAL_ENTRY_PROGRESS(Local_57.f_32, -1.0f, true, 0);
					(*&Local_57 + 44)[0] = GET_CURRENT_GAME_TIME();
					Local_57.f_4 = 1;
					break;
				
				case 0x00000001:
					if (GET_LAST_ATTACK_TIME(&Global_54076) < ((*&Local_57 + 44)[0] + 0,3f))
					{
						(*&Local_57 + 44)[0] = GET_LAST_ATTACK_TIME(&Global_54076);
					}
					if (Global_6661)
					{
						if (Local_57.f_36 == 0)
						{
							if (Function_81(4, 0))
							{
								Local_57.f_36 = 1;
								Function_300();
							}
						}
					}
					if ((!Global_6661 && Function_261(9)) || (Global_6661 && (Function_261(9) || Function_81(4, 0))))
					{
						bVar3 = Function_274(2, &bVar0, 1);
						if (bVar3 >= 0)
						{
							iVar2 = 0;
							while (Function_273(&bVar0, &iVar2, &bVar4))
							{
								if ((GET_EVENT_TIME(GET_EVENT_FROM_OBJECT(&bVar4)) + 0,3f) <= (*&Local_57 + 44)[0])
								{
									if (Function_272(&bVar4) != 31 && GET_WEAPON_IN_HAND(GET_PLAYER_ACTOR(0)) != 31)
									{
										bVar1 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&bVar4)));
										if (IS_ACTOR_VALID(&bVar1))
										{
											if (IS_ACTOR_HUMAN(&bVar1))
											{
												if ((!Global_6661 && Function_271(&bVar1)) || (Global_6661 && Function_263(&bVar1) == 4294967295))
												{
													Local_57.f_4 = 2;
													break;
												}
											}
										}
									}
								}
							}
							Function_295(&bVar0);
						}
						bVar3 = Function_274(91, &bVar0, 1);
						if (bVar3 >= 0)
						{
							iVar2 = 0;
							while (Function_273(&bVar0, &iVar2, &bVar4))
							{
								if ((GET_EVENT_TIME(GET_EVENT_FROM_OBJECT(&bVar4)) + 0,3f) <= (*&Local_57 + 44)[0])
								{
									if (Function_272(&bVar4) != 31 && GET_WEAPON_IN_HAND(GET_PLAYER_ACTOR(0)) != 31)
									{
										bVar1 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&bVar4)));
										if (IS_ACTOR_VALID(&bVar1))
										{
											if (IS_ACTOR_HUMAN(&bVar1))
											{
												if ((!Global_6661 && Function_271(&bVar1)) || (Global_6661 && Function_263(&bVar1) == 4294967295))
												{
													if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&bVar1), iVar10))
													{
														Local_57.f_4 = 2;
														break;
													}
												}
											}
										}
									}
								}
							}
							Function_295(&bVar0);
						}
					}
					break;
				
				case 0x00000002:
					if ((Global_6618 && !Global_99146) && Function_296())
					{
						if (!HAS_ACHIEVEMENT_BEEN_PASSED(41))
						{
							AWARD_ACHIEVEMENT(41);
						}
						Function_294(10, "AM_ER");
						Function_295(&bVar0);
						Function_280(20, 1, 0);
						Function_278();
						Local_57.f_8 = 10;
						Local_57.f_12 = 0.0f;
						Function_277();
						Function_276();
						Local_57.f_8 = 5;
					}
					break;
			}
			break;
		
		case 0x00000005:
			if (!UI_ISACTIVE("SaveGame_DoNotInterruptMe"))
			{
				if (!Global_6661)
				{
					Function_60("AM_ER_RW1_help", 0x41200000, 1, 0, 2, 1, 0);
				}
				else
				{
					Function_60("AM_ER_RW1_helpz", 0x41200000, 1, 0, 2, 1, 0);
				}
				Local_57.f_8 = 10;
				Local_57.f_4 = 3;
				Function_278();
			}
			break;
	}
	return;
}

int Function_261(int iParam0) //Position: 0x12F7A / 77690
{
	if (Global_42825 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_262(bool bParam0, char* cParam1) //Position: 0x12F8B / 77707
{
	var uVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	char* cVar5[64];
	char* cVar22[64];
	bool bVar38;
	
	if (!IS_OBJECTSET_VALID(&bParam2))
	{
		LOG_ERROR("AM_COLLECT_PLAYER_EVENTS_OF_TYPE_ON_ACTORENUM: invalid objectset passed as EventCollection");
		return 4294967295;
	}
	if (!IS_ACTOR_VALID(Function_28()))
	{
		return 4294967295;
	}
	uVar0 = Function_259();
	iVar1 = 0;
	bVar2 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&bVar2))
	{
		if (!IS_OBJECT_IN_OBJECTSET(&bVar2, &bParam2))
		{
			if (GET_EVENT_TYPE(GET_EVENT_FROM_OBJECT(&bVar2)) == bParam0)
			{
				uVar3 = GET_EVENT_PERPETRATOR(GET_EVENT_FROM_OBJECT(&bVar2));
				if (IS_OBJECT_VALID(&uVar3))
				{
					if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&uVar3)))
					{
						if (IS_ACTOR_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(&uVar3)))
						{
							uVar4 = GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&bVar2));
							if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&uVar4)))
							{
								cVar5 = GET_ACTOR_ENUM_STRING(GET_ACTOR_FROM_OBJECT(&uVar4));
								strcpy(&cVar6, &cVar5, 64);
								STRING_LOWER(&cVar6);
								strcpy(&cVar22, &cParam1, 64);
								STRING_LOWER(&cVar22);
								if (STRING_CONTAINS_STRING(&cVar6, &cVar22))
								{
									if (DECOR_CHECK_EXIST(&bVar2, "AM_NO_PURGE"))
									{
										bVar38 = DECOR_GET_INT(&bVar2, "AM_NO_PURGE");
										bVar38++;
									}
									else
									{
										bVar38 = true;
									}
									DECOR_SET_INT(&bVar2, "AM_NO_PURGE", bVar38);
									if (&bParam3)
									{
										ADD_OBJECT_TO_OBJECTSET(&bVar2, &bParam2);
										if (&bParam4)
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
		bVar2 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	return iVar1;
}

int Function_263(int iParam0) //Position: 0x1313B / 78139
{
	if (Function_269(&iParam0) || Function_268(&iParam0))
	{
		return 0;
	}
	if (Function_267(&iParam0))
	{
		return 1;
	}
	if (Function_266(&iParam0))
	{
		return 2;
	}
	if (Function_265(&iParam0))
	{
		return 3;
	}
	if (Function_264(&iParam0))
	{
		return 4;
	}
	return 4294967295;
}

bool Function_264(int iParam0) //Position: 0x1318C / 78220
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	if (bVar0 <= 1204 && bVar0 >= 1227)
	{
		return 1;
	}
	return 0;
}

bool Function_265(int iParam0) //Position: 0x131AD / 78253
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	if (bVar0 <= 1222 && bVar0 >= 1227)
	{
		return 1;
	}
	return 0;
}

bool Function_266(int iParam0) //Position: 0x131CE / 78286
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	if (bVar0 <= 1214 && bVar0 >= 1221)
	{
		return 1;
	}
	return 0;
}

bool Function_267(int iParam0) //Position: 0x131EF / 78319
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	if (bVar0 <= 1204 && bVar0 >= 1213)
	{
		return 1;
	}
	return 0;
}

int Function_268(int iParam0) //Position: 0x13210 / 78352
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	if (bVar0 <= 1228 && bVar0 >= 1239)
	{
		return 1;
	}
	return 0;
}

int Function_269(int iParam0) //Position: 0x13231 / 78385
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	if (bVar0 <= 3 && bVar0 >= 836)
	{
		if (DECOR_CHECK_EXIST(&iParam0, "Zombie"))
		{
			return DECOR_GET_BOOL(&iParam0, "Zombie");
		}
	}
	return 0;
}

void Function_270(float fParam0, int iParam1, int iParam2) //Position: 0x13270 / 78448
{
	char* cVar0[24];
	char* cVar6[24];
	
	SET_JOURNAL_ENTRY_PROGRESS(Local_57.f_32, fParam0, true, 0);
	strcpy(&cVar0, "AM_ER_1_info", 24);
	if (&iParam1 >= 4294967295)
	{
		strcpy(&cVar6, "AM_num", 24);
		stradd(&cVar6, INT_TO_STRING((&iParam2 + 1)), 24);
		UI_SET_STRING(&cVar6, INT_TO_STRING(&iParam1));
	}
	APPEND_JOURNAL_ENTRY_DETAIL(Local_57.f_32, &cVar0, 2, 2, true);
	Function_174(Local_57.f_32, 0);
	return;
}

bool Function_271(int iParam0) //Position: 0x132D3 / 78547
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return 0;
	}
	if (DECOR_CHECK_EXIST(&iParam0, "honor"))
	{
		if (DECOR_GET_INT(&iParam0, "honor") > 0)
		{
			return 1;
		}
		return 0;
	}
	bVar0 = GET_ACTOR_FACTION(&iParam0);
	switch (bVar0)
	{
		case 0x0000000E:
		case 0x00000019:
		case 0x00000018:
		case 0x0000000C:
		case 0x0000000F:
		case 0x0000001B:
		case 0x0000000D:
		case 0x00000013:
		case 0x00000016:
		case 0x00000020:
			return 1;
			break;
		
		case 0x00000004:
		case 0x00000006:
		case 0x00000003:
		case 0x00000001:
		case 0x00000015:
		case 0x00000000:
		case 0x00000002:
		case 0x00000008:
		case 0x00000007:
		case 0x00000014:
		case 0x00000017:
			return 0;
			break;
		
		case 0x0000000A:
		case 0x00000010:
			if (Global_46720 <= 1)
			{
				return 0;
			}
			return 1;
			break;
		
		case 0x00000011:
		case 0x00000012:
		case 0x0000001F:
		case 0x0000001C:
		case 0x0000001D:
			return 0;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

int Function_272(bool bParam0) //Position: 0x133EC / 78828
{
	if (DECOR_CHECK_EXIST(&bParam0, "nAM_Weapon"))
	{
		return DECOR_GET_INT(&bParam0, "nAM_Weapon");
	}
	return 4294967295;
}

bool Function_273(bool bParam0, int iParam1, bool bParam2) //Position: 0x1341B / 78875
{
	if (iParam1 == 4294967295)
	{
		return 0;
	}
	if (IS_OBJECTSET_VALID(&bParam0))
	{
		if (GET_OBJECTSET_SIZE(&bParam0) >= iParam1)
		{
			bParam2 = GET_INDEXED_OBJECT_IN_OBJECTSET(iParam1, &bParam0);
			iParam1++;
			return 1;
		}
	}
	iParam1 = 4294967295;
	return 0;
}

int Function_274(bool bParam0, bool bParam1, bool bParam2) //Position: 0x13464 / 78948
{
	var uVar0;
	bool bVar1;
	var uVar2;
	var uVar3;
	bool bVar4;
	
	if (!IS_OBJECTSET_VALID(&bParam1))
	{
		LOG_ERROR("AM_COLLECT_PLAYER_EVENTS_OF_TYPE_ON_ACTORENUM: invalid objectset passed as EventCollection");
		return 4294967295;
	}
	if (!IS_ACTOR_VALID(Function_28()))
	{
		return 4294967295;
	}
	uVar0 = Function_259();
	bVar1 = false;
	uVar2 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&uVar2))
	{
		if (!IS_OBJECT_IN_OBJECTSET(&uVar2, &bParam1))
		{
			if (GET_EVENT_TYPE(GET_EVENT_FROM_OBJECT(&uVar2)) == bParam0)
			{
				uVar3 = GET_EVENT_PERPETRATOR(GET_EVENT_FROM_OBJECT(&uVar2));
				if (IS_OBJECT_VALID(&uVar3))
				{
					if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&uVar3)))
					{
						if (IS_ACTOR_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(&uVar3)))
						{
							if (DECOR_CHECK_EXIST(&uVar2, "AM_NO_PURGE"))
							{
								bVar4 = DECOR_GET_INT(&uVar2, "AM_NO_PURGE");
								bVar4++;
							}
							else
							{
								bVar4 = true;
							}
							DECOR_SET_INT(&uVar2, "AM_NO_PURGE", bVar4);
							if (&bParam2)
							{
								ADD_OBJECT_TO_OBJECTSET(&uVar2, &bParam1);
							}
							bVar1++;
						}
					}
				}
			}
		}
		uVar2 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	return bVar1;
}

struct<24> Function_275() //Position: 0x135BC / 79292
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Local_57 + 16), 6);
	stradd(&cVar0, "_", 24);
	stradd(&cVar0, INT_TO_STRING(StackVal), 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_276() //Position: 0x135E6 / 79334
{
	if (!Function_130(0, 0, 1, 1))
	{
		Function_92(1);
		Function_91(1, 8);
	}
	else
	{
		Function_90();
	}
	return;
}

void Function_277() //Position: 0x13607 / 79367
{
	iLocal_94 = Function_220(10, 1, 5);
	Global_21684[iLocal_947].f_20 = StackVal;
	Global_21684[iLocal_947].f_28 = Local_57.f_12;
	Global_21684[iLocal_947].f_24 = Local_57.f_36;
	Global_21684[iLocal_947].f_16 = Local_57.f_40;
	return;
}

void Function_278() //Position: 0x1364A / 79434
{
	struct<6> Var0;
	
	if (Global_6632)
	{
		Global_6662 = 1;
	}
	CLEAR_JOURNAL_ENTRY(Local_57.f_32);
	memcpy(&Var0, StackVal, *(&Local_57 + 16), 6);
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_279() };
	APPEND_JOURNAL_ENTRY_DETAIL(Local_57.f_32, &Var0, 0, 2, false);
	PREPEND_JOURNAL_ENTRY(Local_57.f_32, true);
	SET_JOURNAL_ENTRY_PROGRESS(Local_57.f_32, 1.0f, false, 0);
	return;
}

struct<24> Function_279() //Position: 0x13691 / 79505
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Local_57 + 16), 6);
	stradd(&cVar0, "_", 24);
	stradd(&cVar0, INT_TO_STRING(StackVal), 24);
	stradd(&cVar0, "_des", 24);
	if (Global_6661)
	{
		stradd(&cVar0, "z", 24);
		if (StackVal == 4)
		{
			if (Function_81(4, 0))
			{
				stradd(&cVar0, "2", 24);
			}
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_280(int iParam0, bool bParam1, bool bParam2) //Position: 0x136EC / 79596
{
	int iVar0;
	bool bVar1;
	
	if (Function_144(0) && (!Global_6623 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_293())
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
	iVar0 = Function_115(3);
	Function_291();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (&bParam1)
	{
		Function_289(3, bVar1);
		if (!&bParam2)
		{
			if (!Function_155(Global_119936, 4))
			{
				Function_150(&Global_54076, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_131(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_111(3));
	iVar0 = Function_115(3);
	switch (Global_21369.f_248)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_21369.f_248 = 1;
				Function_282(4, Function_288(Global_21369.f_248), 1);
				Function_281(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_21369.f_248 = 2;
				Function_282(4, Function_288(Global_21369.f_248), 1);
				Function_281(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_21369.f_248 = 3;
				Function_282(4, Function_288(Global_21369.f_248), 1);
				Function_281(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_21369.f_248 = 4;
				Function_282(4, Function_288(Global_21369.f_248), 1);
				Function_281(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_21369.f_248 = 5;
				Function_282(4, Function_288(Global_21369.f_248), 1);
				Function_281(Global_21369.f_244, Global_21369.f_248);
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

void Function_281(int iParam0, int iParam1) //Position: 0x138C0 / 80064
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

int Function_282(int iParam0, char* cParam1) //Position: 0x13B2A / 80682
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
	Function_286(iParam0, &cParam1, 0, 1);
	iVar1 = Function_283();
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

int Function_283() //Position: 0x13CBA / 81082
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
	Function_284();
	return 0;
}

void Function_284() //Position: 0x13D5B / 81243
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
		Function_285(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_285(int iParam0) //Position: 0x13E19 / 81433
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

int Function_286(int iParam0, char* cParam1) //Position: 0x13E7F / 81535
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
		Function_287(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &uParam3);
	}
	return 1;
}

void Function_287(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x14246 / 82502
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

var Function_288(int iParam0) //Position: 0x142CE / 82638
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

int Function_289(int iParam0, bool bParam1) //Position: 0x1435D / 82781
{
	bool bVar0;
	int iVar1;
	
	Function_131(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_290(iParam0, 4294967295);
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
	iVar1 = Function_283();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

var Function_290(int iParam0, int iParam1) //Position: 0x14509 / 83209
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

void Function_291() //Position: 0x1454E / 83278
{
	Function_292(3, 0.0f);
	Function_201(3, 10000.0f);
	return;
}

int Function_292(int iParam0, int iParam1) //Position: 0x14564 / 83300
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

bool Function_293() //Position: 0x145A4 / 83364
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_294(bool bParam0, int iParam1) //Position: 0x145CF / 83407
{
	char* cVar0[16];
	
	switch (bParam0)
	{
		case 0x0000000A:
			strcpy(&cVar0, "AM_MP_rank10", 16);
			break;
		
		default:
			strcpy(&cVar0, "AM_Rank", 16);
			stradd(&cVar0, INT_TO_STRING((bParam0 - 1)), 16);
			break;
	}
	if (!Global_77928)
	{
		SET_STAT_MESSAGE(STRING_TO_HASH(&iParam1), UI_GET_STRING(&cVar0), 3.0f, "", 0, 4294967295, 0, 0, 0, 0, false, 0, 0);
	}
	return;
}

void Function_295(bool bParam0) //Position: 0x14637 / 83511
{
	bool bVar0;
	var uVar1;
	bool bVar2;
	
	if (IS_OBJECTSET_VALID(&bParam0))
	{
		bVar0 = false;
		if (GET_OBJECTSET_SIZE(&bParam0) >= bVar0)
		{
			uVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &bParam0);
			while (IS_OBJECT_VALID(&uVar1))
			{
				if (DECOR_CHECK_EXIST(&uVar1, "AM_NO_PURGE"))
				{
					bVar2 = DECOR_GET_INT(&uVar1, "AM_NO_PURGE");
					bVar2 = (bVar2 - 1);
					DECOR_SET_INT(&uVar1, "AM_NO_PURGE", bVar2);
				}
				bVar0++;
				if (GET_OBJECTSET_SIZE(&bParam0) >= bVar0)
				{
					uVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &bParam0);
				}
				else
				{
					uVar1 = "";
				}
			}
		}
		DISBAND_OBJECTSET(&bParam0);
	}
	else
	{
		LOG_ERROR("AM_PURGE_COLLECTION: attempting to disband an invalid objectset");
	}
	return;
}

bool Function_296() //Position: 0x1472D / 83757
{
	if (Function_297() != (Global_98983 - 1) && UI_IS_MESSAGE_QUEUE_EMPTY(4))
	{
		return 1;
	}
	return 0;
}

int Function_297() //Position: 0x1474B / 83787
{
	int iVar0;
	
	iVar0 = (Global_98983 - 1);
	while (iVar0 >= 0)
	{
		if (Global_98983[iVar07] == 4294967295)
		{
			return iVar0;
		}
		iVar0 = (iVar0 - 1);
	}
	Function_298();
	return 0;
}

void Function_298() //Position: 0x1477B / 83835
{
	int iVar0;
	int iVar1;
	
	iVar0 = (Global_98983 - 1);
	iVar1 = (iVar0 - 1);
	while (iVar1 >= 0)
	{
		Global_98983[iVar07] = Global_98983[iVar17];
		Global_98983[iVar07].f_4 = StackVal;
		*(&Global_98983[iVar07] + 8) = { StackVal, StackVal, StackVal, (&Global_98983[iVar17] + 8) };
		*(&Global_98983[iVar07] + 40) = { StackVal, *(&Global_98983[iVar17] + 40) };
		Function_299(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_299(int iParam0) //Position: 0x147FB / 83963
{
	Global_98983[iParam07] = 4294967295;
	Global_98983[iParam07].f_4 = 4294967295;
	strcpy(&Global_98983[iParam07] + 8, "NHIL", 16);
	strcpy(&Global_98983[iParam07] + 40, "NHIL", 8);
	return;
}

void Function_300() //Position: 0x1483B / 84027
{
	struct<6> Var0;
	
	CLEAR_JOURNAL_ENTRY(Local_57.f_32);
	PREPEND_JOURNAL_ENTRY(Local_57.f_32, false);
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_275() };
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_279() };
	PREPEND_JOURNAL_ENTRY_DETAIL(Local_57.f_32, &Var0, 0, 2, false);
	return;
}

int Function_301(char* cParam0) //Position: 0x1486A / 84074
{
	char[] cVar0[4];
	char* cVar1[16];
	
	cVar1 = Function_256();
	if (IS_LAYOUTREF_VALID(&cVar1))
	{
		strcpy(&cVar2, "nAM_OBJSET", 16);
		stradd(&cVar2, &cParam0, 16);
		cVar0 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&cVar1, &cVar2));
	}
	return &cVar0;
}

void Function_302() //Position: 0x148A7 / 84135
{
	bool bVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	float fVar5;
	var uVar6;
	
	if (StackVal == 3)
	{
		return;
	}
	bVar0 = Function_301("TM_SP");
	switch (StackVal)
	{
		case 0x00000000:
			switch (StackVal)
			{
				case 0x00000000:
					if (!Global_6661)
					{
						if (Function_81(41, 0))
						{
							SET_JOURNAL_ENTRY_PROGRESS(Local_21.f_32, -1.0f, true, 0);
							Local_21.f_40 = 1;
						}
					}
					else if (Function_80(5))
					{
						SET_JOURNAL_ENTRY_PROGRESS(Local_21.f_32, -1.0f, true, 0);
						Local_21.f_40 = 1;
					}
					Local_21.f_4 = 1;
					break;
				
				case 0x00000001:
					if (ACTOR_HAS_WEAPON(&Global_54076, 29))
					{
						Local_21.f_4 = 2;
					}
					else if ((!Global_6661 && Function_81(41, 0)) || (Global_6661 && Function_80(5)))
					{
						if (Local_21.f_40 != 1)
						{
							Local_21.f_40 = 1;
							Function_315();
							SET_JOURNAL_ENTRY_PROGRESS(Local_21.f_32, -1.0f, true, 0);
						}
					}
					break;
				
				case 0x00000002:
					if (((Global_6618 && !Global_99146) && !Global_93258) && Function_296())
					{
						Function_295(&bVar0);
						Function_294(1, "AM_TM");
						Function_280(20, 1, 0);
						Function_313();
						Local_21.f_8 = 1;
						Local_21.f_4 = 0;
						Local_21.f_12 = 0.0f;
						Local_21.f_40 = 0;
						Function_312();
						Function_276();
						memcpy(&uVar6, StackVal, StackVal, StackVal, StackVal, StackVal, Function_311(), 4);
						Local_21.f_32 = CREATE_JOURNAL_ENTRY(&uVar6, 3, false, "challenge_01");
					}
					break;
			}
			break;
		
		case 0x00000001:
			switch (StackVal)
			{
				case 0x00000000:
					Function_315();
					SET_JOURNAL_ENTRY_PROGRESS(Local_21.f_32, Local_21.f_12, true, 0);
					Local_21.f_4 = 1;
					break;
				
				case 0x00000001:
					bVar3 = Function_274(2, &bVar0, 1);
					if (bVar3 >= 0)
					{
						iVar2 = 0;
						while (Function_273(&bVar0, &iVar2, &bVar4))
						{
							if (IS_OBJECT_VALID(&bVar4))
							{
								if (Function_272(&bVar4) == 29)
								{
									uVar1 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&bVar4)));
									if (IS_ACTOR_VALID(&uVar1))
									{
										if (IS_ACTOR_HUMAN(&uVar1))
										{
											if (IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
											{
												Function_124(&Local_21 + 40, 2);
											}
											else if (DECOR_CHECK_EXIST(&bVar4, "nAM_Linked"))
											{
												Function_124(&Local_21 + 40, 4);
											}
											else
											{
												Function_124(&Local_21 + 40, 1);
											}
										}
									}
								}
							}
						}
						Function_295(&bVar0);
						if ((Function_8(Local_21.f_40, 2) && Function_8(Local_21.f_40, 4)) && Function_8(Local_21.f_40, 1))
						{
							Local_21.f_4 = 2;
							Local_21.f_40 = 0;
						}
						else
						{
							bVar3 = false;
							fVar5 = Local_21.f_12;
							if (Function_8(Local_21.f_40, 2))
							{
								bVar3++;
							}
							if (Function_8(Local_21.f_40, 4))
							{
								bVar3++;
							}
							if (Function_8(Local_21.f_40, 1))
							{
								bVar3++;
							}
							Local_21.f_12 = (IntToFloat(bVar3) / 3.0f);
							if (Local_21.f_12 == fVar5)
							{
								SET_JOURNAL_ENTRY_PROGRESS(Local_21.f_32, Local_21.f_12, true, 0);
								Function_312();
							}
						}
					}
					break;
				
				case 0x00000002:
					if (Function_296())
					{
						Function_294(2, "AM_TM");
						Function_295(&bVar0);
						Function_280(20, 1, 0);
						Function_313();
						Local_21.f_8 = 2;
						Local_21.f_4 = 0;
						Local_21.f_12 = 0.0f;
						Function_312();
						if (Global_6661 && _GET_AMMO_AMOUNT(&Global_54076, 12, 1) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 12))
						{
							_ADD_AMMO_OF_TYPE(&Global_54076, 12, 5.0f, 1, 1);
						}
						Function_276();
						memcpy(&uVar6, StackVal, StackVal, StackVal, StackVal, StackVal, Function_311(), 4);
						Local_21.f_32 = CREATE_JOURNAL_ENTRY(&uVar6, 3, false, "challenge_01");
					}
					break;
			}
			break;
		
		case 0x00000002:
			switch (StackVal)
			{
				case 0x00000000:
					Function_315();
					SET_JOURNAL_ENTRY_PROGRESS(Local_21.f_32, -1.0f, true, 0);
					Local_21.f_4 = 1;
					break;
				
				case 0x00000001:
					bVar3 = Function_262(2, "FLYING_ANIMAL", &bVar0, 1, 0);
					if (bVar3 >= 0)
					{
						iVar2 = 0;
						while (Function_273(&bVar0, &iVar2, &bVar4))
						{
							if (IS_OBJECT_VALID(&bVar4))
							{
								if (Function_272(&bVar4) == 29)
								{
									if (Function_310(&bVar4))
									{
										if ((!Global_6661 && !DECOR_CHECK_EXIST(&bVar4, "AM_Deadeye")) || Global_6661)
										{
											Local_21.f_4 = 2;
											break;
										}
									}
								}
							}
						}
					}
					Function_295(&bVar0);
					break;
				
				case 0x00000002:
					if (Function_296())
					{
						Function_294(3, "AM_TM");
						Function_295(&bVar0);
						Function_280(20, 1, 0);
						Function_313();
						Local_21.f_8 = 3;
						Local_21.f_4 = 0;
						Local_21.f_12 = 0.0f;
						Function_312();
						if (Global_6661 && _GET_AMMO_AMOUNT(&Global_54076, 12, 1) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 12))
						{
							_ADD_AMMO_OF_TYPE(&Global_54076, 12, 5.0f, 1, 1);
						}
						Function_276();
						memcpy(&uVar6, StackVal, StackVal, StackVal, StackVal, StackVal, Function_311(), 4);
						Local_21.f_32 = CREATE_JOURNAL_ENTRY(&uVar6, 3, false, "challenge_01");
					}
					break;
			}
			break;
		
		case 0x00000003:
			switch (StackVal)
			{
				case 0x00000000:
					Function_315();
					(*&Local_21 + 44)[0] = Function_309((50 + 29));
					(*&Local_21 + 44)[1] = GET_CURRENT_GAME_TIME();
					SET_JOURNAL_ENTRY_PROGRESS(Local_21.f_32, 0.0f, true, 0);
					Local_21.f_4 = 1;
					break;
				
				case 0x00000001:
					bVar3 = Function_274(6, &bVar0, 1);
					if (bVar3 >= 0)
					{
						iVar2 = 0;
						while (Function_273(&bVar0, &iVar2, &bVar4))
						{
							if (IS_OBJECT_VALID(&bVar4))
							{
								if (Function_272(&bVar4) == 29)
								{
									if (GET_EVENT_TIME(GET_EVENT_FROM_OBJECT(&bVar4)) < (*&Local_21 + 44)[1])
									{
										(*&Local_21 + 44)[1] = GET_EVENT_TIME(GET_EVENT_FROM_OBJECT(&bVar4));
									}
								}
							}
						}
					}
					Function_295(&bVar0);
					if (Function_309((50 + 29)) > (*&Local_21 + 44)[0])
					{
						if ((GET_CURRENT_GAME_TIME() - (*&Local_21 + 44)[1]) < 1,5f)
						{
							Local_21.f_36 = 0;
							(*&Local_21 + 44)[0] = Function_309((50 + 29));
						}
					}
					else
					{
						(*&Local_21 + 44)[0] = Function_309((50 + 29));
					}
					bVar3 = Function_274(2, &bVar0, 1);
					if (bVar3 >= 0)
					{
						iVar2 = 0;
						while (Function_273(&bVar0, &iVar2, &bVar4))
						{
							if (IS_OBJECT_VALID(&bVar4))
							{
								if (Function_272(&bVar4) == 29)
								{
									uVar1 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&bVar4)));
									if (IS_ACTOR_VALID(&uVar1))
									{
										if (IS_ACTOR_HUMAN(&uVar1))
										{
											Local_21.f_36++;
										}
									}
								}
							}
						}
					}
					Function_295(&bVar0);
					if (Local_21.f_36 > 5)
					{
						Local_21.f_4 = 2;
					}
					else
					{
						fVar5 = Local_21.f_12;
						Local_21.f_12 = (IntToFloat(Local_21.f_36) / 5.0f);
						if (Local_21.f_12 == fVar5)
						{
							SET_JOURNAL_ENTRY_PROGRESS(Local_21.f_32, Local_21.f_12, true, 0);
						}
					}
					break;
				
				case 0x00000002:
					if (Function_296())
					{
						Function_294(4, "AM_TM");
						Function_295(&bVar0);
						Function_280(20, 1, 0);
						Function_313();
						Local_21.f_8 = 4;
						Local_21.f_4 = 0;
						Local_21.f_12 = 0.0f;
						Function_312();
						if (Global_6661 && _GET_AMMO_AMOUNT(&Global_54076, 12, 1) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 12))
						{
							_ADD_AMMO_OF_TYPE(&Global_54076, 12, 5.0f, 1, 1);
						}
						Function_276();
						memcpy(&uVar6, StackVal, StackVal, StackVal, StackVal, StackVal, Function_311(), 4);
						Local_21.f_32 = CREATE_JOURNAL_ENTRY(&uVar6, 3, false, "challenge_01");
					}
					break;
			}
			break;
		
		case 0x00000004:
			switch (StackVal)
			{
				case 0x00000000:
					Function_315();
					Local_21.f_40 = 0;
					Local_21.f_36 = 0;
					SET_JOURNAL_ENTRY_PROGRESS(Local_21.f_32, 0.0f, true, 0);
					if (!Global_6661)
					{
						if (Global_6628 || Function_308(Global_46953) != 2)
						{
							(*&Local_21 + 44)[0] = GET_CURRENT_GAME_TIME();
							Function_307();
							SET_JOURNAL_ENTRY_PROGRESS(Local_21.f_32, 0,5f, true, 0);
						}
					}
					else if (UI_ISACTIVE("ZMeter"))
					{
						(*&Local_21 + 44)[0] = GET_CURRENT_GAME_TIME();
						Function_307();
						SET_JOURNAL_ENTRY_PROGRESS(Local_21.f_32, 0,5f, true, 0);
					}
					Local_21.f_4 = 1;
					break;
				
				case 0x00000001:
					if (Function_8(Local_21.f_40, 2))
					{
						if (Function_8(Local_21.f_40, 1))
						{
							bVar3 = Function_274(2, &bVar0, 1);
							if (bVar3 >= 0)
							{
								iVar2 = 0;
								while (Function_273(&bVar0, &iVar2, &bVar4))
								{
									if (IS_OBJECT_VALID(&bVar4))
									{
										if (Function_272(&bVar4) == 29 && Function_272(&bVar4) == 4294967295)
										{
											if (GET_EVENT_TIME(GET_EVENT_FROM_OBJECT(&bVar4)) < (*&Local_21 + 44)[0])
											{
												SET_JOURNAL_ENTRY_PROGRESS(Local_21.f_32, 0.0f, true, 0);
												Function_93(&Local_21 + 40, 1);
											}
										}
									}
								}
							}
							Function_295(&bVar0);
						}
						if (!Global_6661)
						{
							if (!Global_6628 && !Function_308(Global_46953) != 2)
							{
								if (Function_8(Local_21.f_40, 1))
								{
									if (Function_305())
									{
										Local_21.f_4 = 2;
									}
								}
								Local_21.f_40 = 0;
								Local_21.f_36 = 0;
								SET_JOURNAL_ENTRY_PROGRESS(Local_21.f_32, 0.0f, true, 0);
							}
						}
						else if (!Function_303(Local_21.f_36) || Global_43789 == Local_21.f_36)
						{
							if (Function_8(Local_21.f_40, 1))
							{
								if (Function_305())
								{
									Local_21.f_4 = 2;
								}
							}
							Local_21.f_40 = 0;
							Local_21.f_36 = 0;
							SET_JOURNAL_ENTRY_PROGRESS(Local_21.f_32, 0.0f, true, 0);
						}
						if (((!Global_6661 && !Global_6628) && !Function_308(Global_46953) != 2) || (Global_6661 && (!Function_303(Local_21.f_36) || Global_43789 == Local_21.f_36)))
						{
							if (Function_8(Local_21.f_40, 1))
							{
								if (Function_305())
								{
									Local_21.f_4 = 2;
								}
							}
							Local_21.f_40 = 0;
							Local_21.f_36 = 0;
							SET_JOURNAL_ENTRY_PROGRESS(Local_21.f_32, 0.0f, true, 0);
						}
					}
					else if (!Global_6661 && (Global_6628 || Function_308(Global_46953) != 2))
					{
						(*&Local_21 + 44)[0] = GET_CURRENT_GAME_TIME();
						Function_307();
						SET_JOURNAL_ENTRY_PROGRESS(Local_21.f_32, 0,5f, true, 0);
					}
					else if (Global_6661 && UI_ISACTIVE("ZMeter"))
					{
						(*&Local_21 + 44)[0] = GET_CURRENT_GAME_TIME();
						Function_307();
						SET_JOURNAL_ENTRY_PROGRESS(Local_21.f_32, 0,5f, true, 0);
					}
					break;
				
				case 0x00000002:
					if ((Global_6618 && !Global_99146) && Function_296())
					{
						if (!HAS_ACHIEVEMENT_BEEN_PASSED(40))
						{
							AWARD_ACHIEVEMENT(40);
						}
						Function_294(10, "AM_TM");
						Function_295(&bVar0);
						Function_280(20, 1, 0);
						Function_313();
						Local_21.f_8 = 10;
						Local_21.f_12 = 0.0f;
						Function_312();
						Function_276();
						Local_21.f_8 = 5;
					}
					break;
			}
			break;
		
		case 0x00000005:
			if (!UI_ISACTIVE("SaveGame_DoNotInterruptMe"))
			{
				if (!Global_6661)
				{
					Function_60("AM_TM_RW1_help", 0x41200000, 1, 0, 2, 1, 0);
				}
				else
				{
					Function_60("AM_TM_RW1_helpz", 0x41200000, 1, 0, 2, 1, 0);
				}
				Local_21.f_8 = 10;
				Local_21.f_4 = 3;
				Function_313();
			}
			break;
	}
	return;
}

bool Function_303(int iParam0) //Position: 0x15255 / 86613
{
	bool bVar0;
	
	if (StackVal || StackVal != 2 != 1)
	{
		return 0;
	}
	if ((iParam0 != Global_46894[2] || iParam0 != Global_46894[1]) || iParam0 != Global_46838[1])
	{
		return 0;
	}
	bVar0 = Global_43791[iParam0];
	return (((Function_8(bVar0, 0x1000000) || Function_8(bVar0, 0x2000000)) || Function_8(bVar0, 0x4000000)) || Function_304(iParam0));
}

var Function_304(bool bParam0) //Position: 0x152C8 / 86728
{
	var uVar0;
	bool bVar1;
	
	uVar0 = Global_43791[bParam0];
	bVar1 = uVar0 & 268435456 != false;
	return bVar1;
}

bool Function_305() //Position: 0x152E5 / 86757
{
	if (!Global_6661)
	{
		if (Function_8(Local_21.f_40, 4) && Function_306(Global_46948) != 0)
		{
			return 1;
		}
		if (Function_8(Local_21.f_40, 16) && Function_306(Global_46950) != 0)
		{
			return 1;
		}
		if (Function_8(Local_21.f_40, 32) && Function_306(Global_46951) != 0)
		{
			return 1;
		}
		if (Function_8(Local_21.f_40, 64) && Function_306(Global_46952) != 0)
		{
			return 1;
		}
		if (Function_8(Local_21.f_40, 128) && Function_306(Global_46953) != 0)
		{
			if (Function_208(Global_46953) >= Local_21.f_36)
			{
				return 1;
			}
			return 0;
		}
		if (Function_8(Local_21.f_40, 256) && Function_306(Global_46954) != 0)
		{
			return 1;
		}
		if (Function_8(Local_21.f_40, 512) && Function_306(Global_46955) != 0)
		{
			return 1;
		}
		if (Function_8(Local_21.f_40, 8) && Function_306(Global_46949) != 0)
		{
			return 1;
		}
	}
	return !Function_303(Local_21.f_36);
	return 0;
}

int Function_306(int iParam0) //Position: 0x153CA / 86986
{
	if (!Function_75(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_16;
}

void Function_307() //Position: 0x153E4 / 87012
{
	Local_21.f_40 = 0;
	Function_124(&Local_21 + 40, 1);
	Function_124(&Local_21 + 40, 2);
	if (!Global_6661)
	{
		if (Function_308(Global_46948) == 2)
		{
			Function_124(&Local_21 + 40, 4);
		}
		else if (Function_308(Global_46950) == 2)
		{
			Function_124(&Local_21 + 40, 16);
		}
		else if (Function_308(Global_46951) == 2)
		{
			Function_124(&Local_21 + 40, 32);
		}
		else if (Function_308(Global_46952) == 2)
		{
			Function_124(&Local_21 + 40, 64);
		}
		else if (Function_308(Global_46953) == 2)
		{
			Function_124(&Local_21 + 40, 128);
			Local_21.f_36 = Function_208(Global_46953);
		}
		else if (Function_308(Global_46954) == 2)
		{
			Function_124(&Local_21 + 40, 256);
		}
		else if (Function_308(Global_46955) == 2)
		{
			Function_124(&Local_21 + 40, 512);
		}
		else if (Function_308(Global_46949) == 2)
		{
			Function_124(&Local_21 + 40, 8);
		}
	}
	else
	{
		Local_21.f_36 = Global_43789;
	}
	return;
}

int Function_308(int iParam0) //Position: 0x154C8 / 87240
{
	if (!Function_75(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

float Function_309(int iParam0) //Position: 0x154E2 / 87266
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
	if (Global_55480[iParam016].f_112 != 0.0f)
	{
		fVar2 = 100.0f;
	}
	else
	{
		fVar2 = Global_55480[iParam016].f_112;
	}
	fVar3 = Global_55480[iParam016].f_108;
	bVar1 = Function_111(iParam0);
	if (Function_110(iParam0) != 19 || Function_110(iParam0) != 17)
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

bool Function_310(bool bParam0) //Position: 0x155C3 / 87491
{
	return DECOR_CHECK_EXIST(&bParam0, "nAM_Flying");
}

struct<24> Function_311() //Position: 0x155DB / 87515
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Local_21 + 16), 6);
	stradd(&cVar0, "_", 24);
	stradd(&cVar0, INT_TO_STRING(StackVal), 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_312() //Position: 0x15605 / 87557
{
	iLocal_93 = Function_220(9, 1, 5);
	Global_21684[iLocal_937].f_20 = StackVal;
	Global_21684[iLocal_937].f_28 = Local_21.f_12;
	Global_21684[iLocal_937].f_24 = Local_21.f_36;
	Global_21684[iLocal_937].f_16 = Local_21.f_40;
	return;
}

void Function_313() //Position: 0x15648 / 87624
{
	struct<6> Var0;
	
	if (Global_6632)
	{
		Global_6662 = 1;
	}
	CLEAR_JOURNAL_ENTRY(Local_21.f_32);
	memcpy(&Var0, StackVal, *(&Local_21 + 16), 6);
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_314() };
	APPEND_JOURNAL_ENTRY_DETAIL(Local_21.f_32, &Var0, 0, 2, false);
	PREPEND_JOURNAL_ENTRY(Local_21.f_32, true);
	SET_JOURNAL_ENTRY_PROGRESS(Local_21.f_32, 1.0f, false, 0);
	return;
}

struct<24> Function_314() //Position: 0x1568F / 87695
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Local_21 + 16), 6);
	stradd(&cVar0, "_", 24);
	stradd(&cVar0, INT_TO_STRING(StackVal), 24);
	stradd(&cVar0, "_des", 24);
	if (Global_6661)
	{
		stradd(&cVar0, "z", 24);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_315() //Position: 0x156D2 / 87762
{
	struct<6> Var0;
	
	CLEAR_JOURNAL_ENTRY(Local_21.f_32);
	PREPEND_JOURNAL_ENTRY(Local_21.f_32, false);
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_311() };
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_314() };
	PREPEND_JOURNAL_ENTRY_DETAIL(Local_21.f_32, &Var0, 0, 2, false);
	return;
}

bool Function_316(struct<18>[] Param0) //Position: 0x15701 / 87809
{
	var uVar0;
	
	if (iParam1 <= Param0 || iParam1 > 0)
	{
		return 0;
	}
	if (StackVal == 3)
	{
		return 1;
	}
	uVar0 = Function_350(Param0[iParam118]);
	switch (Param0[iParam118])
	{
		case 0x00000000:
			Function_344(&Param0[018] + 4, &Param0[018] + 8, &Param0[018] + 12, &uVar0);
			break;
		
		case 0x00000001:
			Function_339(&Param0[118] + 4, &Param0[118] + 8, &Param0[118] + 12, &uVar0);
			break;
		
		case 0x00000002:
			Function_332(&Param0[218] + 4, &Param0[218] + 8, &Param0[218] + 12, &uVar0);
			break;
		
		case 0x00000003:
			Function_317(&Param0[318] + 4, &Param0[318] + 8, &Param0[318] + 12, &uVar0);
			break;
	}
	return 1;
}

void Function_317(var uParam0, var uParam1, var uParam2, char* cParam3) //Position: 0x157D9 / 88025
{
	switch (uParam1)
	{
		case 0x00000000:
			switch (uParam0)
			{
				case 0x00000000:
					cParam3 = &cParam3;
					uParam2 = uParam2;
					if (GET_ITEM_COUNT(SS_GET_STRING(1, 11), &Global_54076) >= 0)
					{
						Function_331(3, 1);
						uParam0 = 2;
					}
					break;
				
				case 0x00000002:
					if (Global_6618 && !Global_99146)
					{
						Function_60("AM_TH_HLP_1", 0x41200000, 1, 0, 2, 1, 0);
						Function_60("AM_TH_HLP_2", 0x41200000, 1, 0, 2, 1, 0);
						Function_330(3, 1);
						Function_280(20, 1, 0);
						Function_329(3, 4);
						uParam1 = 1;
						uParam0 = 0;
						uParam2 = 0.0f;
						Function_276();
					}
					break;
			}
			break;
		
		case 0x00000001:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(3);
					Function_324(3, 0);
					PREPEND_JOURNAL_ENTRY_DETAIL(Function_323(3), "AM_INTRO_HLP", 0, 2, true);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(3), -1.0f, true, 0);
					cParam3 = &cParam3;
					uParam2 = uParam2;
					uParam0 = 1;
					break;
				
				case 0x00000001:
					if (Function_111(357) < 0.0f)
					{
						Function_331(3, 2);
						uParam0 = 2;
					}
					else
					{
						uParam2 = 0.0f;
					}
					break;
				
				case 0x00000002:
					Function_330(3, 1);
					Function_280(20, 1, 0);
					Function_329(3, 4);
					uParam1 = 2;
					uParam0 = 0;
					uParam2 = 0.0f;
					Function_276();
					break;
			}
			break;
		
		case 0x00000002:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(3);
					Function_324(3, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(3), -1.0f, true, 0);
					cParam3 = &cParam3;
					uParam2 = uParam2;
					uParam0 = 1;
					break;
				
				case 0x00000001:
					if (Function_111(357) < 1.0f)
					{
						Function_331(3, 3);
						uParam0 = 2;
					}
					else
					{
						uParam2 = 0.0f;
					}
					break;
				
				case 0x00000002:
					Function_330(3, 1);
					Function_280(20, 1, 0);
					Function_329(3, 4);
					uParam1 = 3;
					uParam0 = 0;
					uParam2 = 0.0f;
					Function_276();
					break;
			}
			break;
		
		case 0x00000003:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(3);
					Function_324(3, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(3), -1.0f, true, 0);
					cParam3 = &cParam3;
					uParam2 = uParam2;
					uParam0 = 1;
					break;
				
				case 0x00000001:
					if (Function_111(357) < 2.0f)
					{
						Function_331(3, 4);
						uParam0 = 2;
					}
					else
					{
						uParam2 = 0.0f;
					}
					break;
				
				case 0x00000002:
					Function_330(3, 1);
					Function_280(20, 1, 0);
					Function_329(3, 4);
					uParam1 = 4;
					uParam0 = 0;
					uParam2 = 0.0f;
					Function_276();
					break;
			}
			break;
		
		case 0x00000004:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(3);
					Function_324(3, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(3), -1.0f, true, 0);
					cParam3 = &cParam3;
					uParam2 = uParam2;
					uParam0 = 1;
					break;
				
				case 0x00000001:
					if (Function_111(357) < 3.0f)
					{
						Function_331(3, 5);
						uParam0 = 2;
					}
					else
					{
						uParam2 = 0.0f;
					}
					break;
				
				case 0x00000002:
					if (Global_6618 && !Global_99146)
					{
						Function_330(3, 1);
						Function_280(20, 1, 0);
						Function_60("AM_TH_RW1_help", 0x41200000, 1, 0, 2, 1, 0);
						if (!Function_86(11))
						{
							Function_178(11, 0, 1, 1, 0);
						}
						Function_329(3, 4);
						uParam1 = 5;
						uParam0 = 0;
						uParam2 = 0.0f;
						Function_276();
					}
					break;
			}
			break;
		
		case 0x00000005:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(3);
					Function_324(3, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(3), -1.0f, true, 0);
					cParam3 = &cParam3;
					uParam2 = uParam2;
					uParam0 = 1;
					break;
				
				case 0x00000001:
					if (Function_111(357) < 4.0f)
					{
						Function_331(3, 6);
						uParam0 = 2;
					}
					else
					{
						uParam2 = 0.0f;
					}
					break;
				
				case 0x00000002:
					Function_330(3, 1);
					Function_280(20, 1, 0);
					Function_329(3, 4);
					uParam1 = 6;
					uParam0 = 0;
					uParam2 = 0.0f;
					Function_276();
					break;
			}
			break;
		
		case 0x00000006:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(3);
					Function_324(3, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(3), -1.0f, true, 0);
					cParam3 = &cParam3;
					uParam2 = uParam2;
					uParam0 = 1;
					break;
				
				case 0x00000001:
					if (Function_111(357) < 5.0f)
					{
						Function_331(3, 7);
						uParam0 = 2;
					}
					else
					{
						uParam2 = 0.0f;
					}
					break;
				
				case 0x00000002:
					Function_330(3, 1);
					Function_280(20, 1, 0);
					Function_329(3, 4);
					uParam1 = 7;
					uParam0 = 0;
					uParam2 = 0.0f;
					Function_276();
					break;
			}
			break;
		
		case 0x00000007:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(3);
					Function_324(3, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(3), -1.0f, true, 0);
					cParam3 = &cParam3;
					uParam2 = uParam2;
					uParam0 = 1;
					break;
				
				case 0x00000001:
					if (Function_111(357) < 6.0f)
					{
						Function_331(3, 8);
						uParam0 = 2;
					}
					else
					{
						uParam2 = 0.0f;
					}
					break;
				
				case 0x00000002:
					Function_330(3, 1);
					Function_280(20, 1, 0);
					Function_329(3, 4);
					uParam1 = 8;
					uParam0 = 0;
					uParam2 = 0.0f;
					Function_276();
					break;
			}
			break;
		
		case 0x00000008:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(3);
					Function_324(3, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(3), -1.0f, true, 0);
					cParam3 = &cParam3;
					uParam2 = uParam2;
					uParam0 = 1;
					break;
				
				case 0x00000001:
					if (Function_111(357) < 7.0f)
					{
						Function_331(3, 9);
						uParam0 = 2;
					}
					else
					{
						uParam2 = 0.0f;
					}
					break;
				
				case 0x00000002:
					Function_330(3, 1);
					Function_280(20, 1, 0);
					Function_329(3, 4);
					uParam1 = 9;
					uParam0 = 0;
					uParam2 = 0.0f;
					Function_276();
					break;
			}
			break;
		
		case 0x00000009:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(3);
					Function_324(3, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(3), -1.0f, true, 0);
					cParam3 = &cParam3;
					uParam2 = uParam2;
					uParam0 = 1;
					break;
				
				case 0x00000001:
					if (Function_111(357) < 8.0f)
					{
						Function_331(3, 10);
						uParam0 = 2;
					}
					else
					{
						uParam2 = 0.0f;
					}
					break;
				
				case 0x00000002:
					if (Global_6618 && !Global_99146)
					{
						Function_330(3, 1);
						Function_60("AM_TH_RW2_help", 0x41200000, 1, 0, 2, 1, 0);
						Function_60("AM_TH_10_des", 0x41200000, 1, 0, 2, 1, 0);
						Function_280(50, 1, 0);
						if (!HAS_ACHIEVEMENT_BEEN_PASSED(25))
						{
							AWARD_ACHIEVEMENT(25);
						}
						uParam1 = 10;
						uParam0 = 2;
						uParam2 = 1.0f;
						SET_JOURNAL_ENTRY_PROGRESS(Function_323(3), 1.0f, true, 0);
						Function_319(3);
						Function_156(68, 1, 0);
						Function_318(11, 0);
						Function_139();
						Function_276();
					}
					break;
			}
			break;
	}
}

int Function_318(bool bParam0, bool bParam1) //Position: 0x15EB4 / 89780
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_140(bParam0), Function_28()) >= 0)
		{
			DELETE_ITEM(Function_140(bParam0), Function_28(), 0);
			return 1;
		}
	}
	DELETE_ITEM(Function_140(bParam0), Function_28(), 1);
	return 1;
}

void Function_319(bool bParam0) //Position: 0x15EFC / 89852
{
	struct<6> Var0;
	struct<6> Var6;
	
	if (Global_6632)
	{
		Global_6662 = 1;
	}
	CLEAR_JOURNAL_ENTRY(Function_323(bParam0));
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_322(bParam0) };
	if (0 | Global_53524.f_44)
	{
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_321(bParam0) };
	}
	else
	{
		memcpy(&Var6, StackVal, *(&Global_77932[bParam018] + 16), 6);
	}
	UI_SET_STRING(&Var0, UI_GET_STRING(&Var6));
	Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_320(bParam0) };
	APPEND_JOURNAL_ENTRY_DETAIL(Function_323(bParam0), &Var6, 0, 2, false);
	PREPEND_JOURNAL_ENTRY(Function_323(bParam0), true);
	SET_JOURNAL_ENTRY_PROGRESS(Function_323(bParam0), 1.0f, false, 0);
	return;
}

struct<24> Function_320(int iParam0) //Position: 0x15F78 / 89976
{
	char* cVar0[24];
	
	cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_321(iParam0) };
	if (Global_53524.f_44 | 0)
	{
		stradd(&cVar0, "_mp_des", 24);
		if (!IS_STRING_VALID(UI_GET_STRING(&cVar0)))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_321(iParam0) };
			stradd(&cVar0, "_des", 24);
		}
	}
	else
	{
		stradd(&cVar0, "_des", 24);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_321(bool bParam0) //Position: 0x15FD3 / 90067
{
	char* cVar0[24];
	
	if (0 | Global_53524.f_44)
	{
		memcpy(&cVar0, StackVal, *(&Global_78078[bParam018] + 16), 6);
		stradd(&cVar0, "_", 24);
		stradd(&cVar0, INT_TO_STRING(StackVal), 24);
		return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	memcpy(&cVar0, StackVal, *(&Global_77932[bParam018] + 16), 6);
	stradd(&cVar0, "_", 24);
	stradd(&cVar0, INT_TO_STRING(StackVal), 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_322(int iParam0) //Position: 0x16047 / 90183
{
	char* cVar0[24];
	
	if (0 | Global_53524.f_44)
	{
		memcpy(&cVar0, StackVal, *(&Global_78078[iParam018] + 16), 6);
		stradd(&cVar0, "_DYNAMIC_TITLE", 24);
		return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	memcpy(&cVar0, StackVal, *(&Global_77932[iParam018] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_323(bool bParam0) //Position: 0x160B3 / 90291
{
	if (0 | Global_53524.f_44)
	{
		return Global_78078[bParam018].f_32;
	}
	return Global_77932[bParam018].f_32;
}

void Function_324(bool bParam0, bool bParam1) //Position: 0x160DB / 90331
{
	struct<6> Var0;
	struct<6> Var6;
	
	CLEAR_JOURNAL_ENTRY(Function_323(bParam0));
	if ((bParam1 && Function_326(bParam0, 4)) || !&bParam1)
	{
		PREPEND_JOURNAL_ENTRY(Function_323(bParam0), false);
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_322(bParam0) };
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_321(bParam0) };
		UI_SET_STRING(&Var0, UI_GET_STRING(&Var6));
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_320(bParam0) };
		PREPEND_JOURNAL_ENTRY_DETAIL(Function_323(bParam0), &Var6, 0, 2, Function_326(bParam0, 4));
		if (bParam0 == 3)
		{
			PREPEND_JOURNAL_ENTRY_DETAIL(Function_323(bParam0), "nAM_MAPHLP", 0, 2, true);
		}
		if (!&bParam1)
		{
			Function_325(bParam0, 4);
		}
	}
	return;
}

void Function_325(int iParam0, int iParam1) //Position: 0x16165 / 90469
{
	if (0 | Global_53524.f_44)
	{
		Function_124(&Global_78078[iParam018] + 40, iParam1);
	}
	else
	{
		Function_124(&Global_77932[iParam018] + 40, iParam1);
	}
	return;
}

bool Function_326(int iParam0, bool bParam1) //Position: 0x16196 / 90518
{
	if (0 | Global_53524.f_44)
	{
		return Function_8(Global_78078[iParam018].f_40, bParam1);
	}
	return Function_8(Global_77932[iParam018].f_40, bParam1);
}

void Function_327(bool bParam0) //Position: 0x161C8 / 90568
{
	if (0 | Global_53524.f_44)
	{
		Function_328(bParam0, 0, Global_78078[bParam018].f_36);
	}
	else
	{
		Function_328(bParam0, 0, Global_77932[bParam018].f_36);
	}
	return;
}

int Function_328(bool bParam0, bool bParam1, bool bParam2) //Position: 0x161FD / 90621
{
	char* cVar0[16];
	int iVar4;
	
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_INTSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	iVar4 = Function_256();
	if (IS_LAYOUTREF_VALID(&iVar4))
	{
		return DECOR_SET_INT(&iVar4, &cVar0, bParam2);
	}
	LOG_ERROR("AM_STORE_INT: failed to store int value in slot");
	return 0;
}

void Function_329(bool bParam0, int iParam1) //Position: 0x16274 / 90740
{
	if (Global_53524.f_44)
	{
		Function_93(&Global_78078[bParam018] + 40, iParam1);
	}
	else
	{
		Function_93(&Global_77932[bParam018] + 40, iParam1);
	}
	return;
}

void Function_330(bool bParam0, bool bParam1) //Position: 0x162A3 / 90787
{
	bool bVar0;
	char* cVar1[16];
	
	bVar0 = false;
	cVar1 = Function_256();
	if (IS_LAYOUTREF_VALID(&cVar1))
	{
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_INTSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(&cVar1, &cVar2))
			{
				DECOR_REMOVE(&cVar1, &cVar2);
			}
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_FLOATSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(&cVar1, &cVar2))
			{
				DECOR_REMOVE(&cVar1, &cVar2);
			}
			if (0 | Global_53524.f_44)
			{
				(*&Global_78078[bParam018] + 44)[bVar0] = 0.0f;
			}
			else
			{
				(*&Global_77932[bParam018] + 44)[bVar0] = 0.0f;
			}
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_TIMERSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(&cVar1, &cVar2))
			{
				DECOR_REMOVE(&cVar1, &cVar2);
			}
			bVar0++;
		}
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_OBJECTSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(&cVar1, &cVar2))
			{
				DECOR_REMOVE(&cVar1, &cVar2);
			}
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 <= 11)
		{
			if (0 | Global_53524.f_44)
			{
				(*&Global_78078[bParam018] + 44)[bVar0] = 0.0f;
			}
			else
			{
				(*&Global_77932[bParam018] + 44)[bVar0] = 0.0f;
			}
			bVar0++;
		}
	}
	if (&bParam1)
	{
		if (0 | Global_53524.f_44)
		{
			Global_78078[bParam018].f_36 = 0;
		}
		else
		{
			Global_77932[bParam018].f_36 = 0;
		}
	}
	return;
}

int Function_331(int iParam0, int iParam1) //Position: 0x1646E / 91246
{
	int iVar0;
	
	if (0 | Global_53524.f_44)
	{
		if (iParam0 >= Global_78078)
		{
			LOG_ERROR("AM_GUI_SEND_UPDATE_MESSAGE: invalid MissionId");
			return 0;
		}
	}
	if (iParam0 >= Global_77932)
	{
		LOG_ERROR("AM_GUI_SEND_UPDATE_MESSAGE: invalid MissionId");
		return 0;
	}
	iVar0 = Function_297();
	Global_98983[iVar07] = iParam0;
	Global_98983[iVar07].f_4 = iParam1;
	Global_99127 = 0;
	return 1;
}

void Function_332(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x1651E / 91422
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
	
	switch (uParam1)
	{
		case 0x00000000:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(2);
					Function_338(&Global_98980);
					Function_337(&Global_98980, 1023);
					if (!Function_326(2, 1))
					{
						Function_336(2, 1, Function_111(272), 1);
						Function_325(2, 1);
					}
					if (Function_326(2, 4))
					{
						PREPEND_JOURNAL_ENTRY_DETAIL(Function_323(2), "AM_INTRO_HLP", 0, 2, true);
					}
					uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar4 = Function_335(2);
					bVar0 = (Function_111(272) - Function_334(2, 1, 1));
					if (bVar0 <= 6.0f)
					{
						Function_331(2, 1);
						uParam0 = 2;
					}
					else
					{
						if (bVar0 < 0.0f)
						{
							if ((!Function_326(2, 2) && Global_6618) && !Global_99146)
							{
								Function_325(2, 2);
								Function_60("AM_SU_HLP_1", 0x41200000, 1, 0, 2, 1, 0);
								Function_60("AM_SU_HLP_2", 0x41200000, 1, 0, 2, 1, 0);
							}
							if (!Function_326(2, 4))
							{
								Function_324(2, 0);
								PREPEND_JOURNAL_ENTRY_DETAIL(Function_323(2), "AM_INTRO_HLP", 0, 2, false);
							}
						}
						uParam2 = (bVar0 / 6.0f);
						if (uParam2 == fVar4)
						{
							Function_333(2, uParam2, 1, ROUND(bVar0), 4294967295, 4294967295, 0);
						}
					}
					break;
				
				case 0x00000002:
					if (Global_6618 && !Global_99146)
					{
						Function_60("AM_SU_HLP_3", 0x41200000, 1, 0, 2, 1, 0);
						Function_60("AM_SU_HLP_2", 0x41200000, 1, 0, 2, 1, 0);
						Function_295(&bParam3);
						Function_330(2, 1);
						Function_329(2, 1);
						Function_280(20, 1, 0);
						Function_329(2, 4);
						uParam1 = 1;
						uParam0 = 0;
						uParam2 = 0.0f;
						Function_276();
					}
					break;
			}
			break;
		
		case 0x00000001:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(2);
					Function_324(2, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(2), 0.0f, true, 0);
					if (!Function_326(2, 1))
					{
						Function_336(2, 1, Function_111(264), 1);
						Function_325(2, 1);
					}
					uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar4 = Function_335(2);
					bVar0 = (Function_111(264) - Function_334(2, 1, 1));
					if (bVar0 <= 6.0f)
					{
						Function_331(2, 2);
						uParam0 = 2;
					}
					else
					{
						uParam2 = (bVar0 / 6.0f);
						if (uParam2 == fVar4)
						{
							Function_333(2, uParam2, 1, ROUND(bVar0), 4294967295, 4294967295, 0);
						}
					}
					break;
				
				case 0x00000002:
					Function_295(&bParam3);
					Function_330(2, 1);
					Function_329(2, 1);
					Function_280(20, 1, 0);
					uParam1 = 2;
					Function_329(2, 4);
					uParam0 = 0;
					uParam2 = 0.0f;
					Function_276();
					break;
			}
			break;
		
		case 0x00000002:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(2);
					Function_324(2, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(2), 0.0f, true, 0);
					if (!Function_326(2, 1))
					{
						Function_336(2, 1, Function_111(271), 1);
						Function_325(2, 1);
					}
					uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar4 = Function_335(2);
					bVar0 = (Function_111(271) - Function_334(2, 1, 1));
					if (bVar0 <= 4.0f)
					{
						Function_331(2, 3);
						uParam0 = 2;
					}
					else
					{
						uParam2 = (bVar0 / 4.0f);
						if (uParam2 == fVar4)
						{
							Function_333(2, uParam2, 1, ROUND(bVar0), 4294967295, 4294967295, 0);
						}
					}
					break;
				
				case 0x00000002:
					Function_295(&bParam3);
					Function_330(2, 1);
					Function_329(2, 1);
					Function_280(20, 1, 0);
					uParam1 = 3;
					Function_329(2, 4);
					uParam0 = 0;
					uParam2 = 0.0f;
					Function_276();
					break;
			}
			break;
		
		case 0x00000003:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(2);
					Function_324(2, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(2), 0.0f, true, 0);
					if (!Function_326(2, 1))
					{
						Function_336(2, 1, Function_111(263), 1);
						Function_325(2, 1);
					}
					uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar4 = Function_335(2);
					bVar0 = (Function_111(263) - Function_334(2, 1, 1));
					if (bVar0 <= 8.0f)
					{
						Function_331(2, 4);
						uParam0 = 2;
					}
					else
					{
						uParam2 = (bVar0 / 8.0f);
						if (uParam2 == fVar4)
						{
							Function_333(2, uParam2, 1, ROUND(bVar0), 4294967295, 4294967295, 0);
						}
					}
					break;
				
				case 0x00000002:
					Function_295(&bParam3);
					Function_330(2, 1);
					Function_329(2, 1);
					Function_280(20, 1, 0);
					uParam1 = 4;
					Function_329(2, 4);
					uParam0 = 0;
					uParam2 = 0.0f;
					Function_276();
					break;
			}
			break;
		
		case 0x00000004:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(2);
					Function_324(2, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(2), 0.0f, true, 0);
					if (!Function_326(2, 1))
					{
						Function_336(2, 1, Function_111(268), 1);
						Function_325(2, 1);
					}
					uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar4 = Function_335(2);
					bVar0 = (Function_111(268) - Function_334(2, 1, 1));
					if (bVar0 <= 7.0f)
					{
						Function_331(2, 5);
						uParam0 = 2;
					}
					else
					{
						uParam2 = (bVar0 / 7.0f);
						if (uParam2 == fVar4)
						{
							Function_333(2, uParam2, 1, ROUND(bVar0), 4294967295, 4294967295, 0);
						}
					}
					break;
				
				case 0x00000002:
					if (Global_6618 && !Global_99146)
					{
						Function_295(&bParam3);
						Function_330(2, 1);
						Function_329(2, 1);
						Function_280(50, 1, 0);
						Function_60("AM_SU_RW1_help", 0x41200000, 1, 0, 2, 1, 0);
						Function_60("AM_SU_RW1_help1", 0x41200000, 1, 0, 2, 1, 0);
						if (!Function_86(11))
						{
							Function_178(11, 0, 1, 1, 0);
						}
						uParam1 = 5;
						Function_329(2, 4);
						uParam0 = 0;
						uParam2 = 0.0f;
						Function_276();
					}
					break;
			}
			break;
		
		case 0x00000005:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(2);
					Function_324(2, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(2), 0.0f, true, 0);
					if (!Function_326(2, 1))
					{
						Function_336(2, 1, Function_111(265), 1);
						Function_325(2, 1);
					}
					uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar4 = Function_335(2);
					bVar0 = (Function_111(265) - Function_334(2, 1, 1));
					if (bVar0 <= 8.0f)
					{
						Function_331(2, 6);
						uParam0 = 2;
					}
					else
					{
						uParam2 = (bVar0 / 8.0f);
						if (uParam2 == fVar4)
						{
							Function_333(2, uParam2, 1, ROUND(bVar0), 4294967295, 4294967295, 0);
						}
					}
					break;
				
				case 0x00000002:
					Function_295(&bParam3);
					Function_330(2, 1);
					Function_329(2, 1);
					Function_280(20, 1, 0);
					uParam1 = 6;
					Function_329(2, 4);
					uParam0 = 0;
					uParam2 = 0.0f;
					Function_276();
					break;
			}
			break;
		
		case 0x00000006:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(2);
					Function_324(2, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(2), 0.0f, true, 0);
					if (!Function_326(2, 1))
					{
						Function_336(2, 1, Function_111(269), 1);
						Function_325(2, 1);
					}
					uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar4 = Function_335(2);
					bVar0 = (Function_111(269) - Function_334(2, 1, 1));
					if (bVar0 <= 10.0f)
					{
						Function_331(2, 7);
						uParam0 = 2;
					}
					else
					{
						uParam2 = (bVar0 / 10.0f);
						if (uParam2 == fVar4)
						{
							Function_333(2, uParam2, 1, ROUND(bVar0), 4294967295, 4294967295, 0);
						}
					}
					break;
				
				case 0x00000002:
					Function_295(&bParam3);
					Function_330(2, 1);
					Function_329(2, 1);
					Function_280(20, 1, 0);
					uParam1 = 7;
					Function_329(2, 4);
					uParam0 = 0;
					uParam2 = 0.0f;
					Function_276();
					break;
			}
			break;
		
		case 0x00000007:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(2);
					Function_324(2, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(2), 0.0f, true, 0);
					if (!Function_326(2, 1))
					{
						Function_336(2, 1, Function_111(266), 1);
						Function_325(2, 1);
					}
					uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar4 = Function_335(2);
					bVar0 = (Function_111(266) - Function_334(2, 1, 1));
					if (bVar0 <= 12.0f)
					{
						Function_331(2, 8);
						uParam0 = 2;
					}
					else
					{
						uParam2 = (bVar0 / 12.0f);
						if (uParam2 == fVar4)
						{
							Function_333(2, uParam2, 1, ROUND(bVar0), 4294967295, 4294967295, 0);
						}
					}
					break;
				
				case 0x00000002:
					Function_295(&bParam3);
					Function_330(2, 1);
					Function_329(2, 1);
					Function_280(20, 1, 0);
					uParam1 = 8;
					Function_329(2, 4);
					uParam0 = 0;
					uParam2 = 0.0f;
					Function_276();
					break;
			}
			break;
		
		case 0x00000008:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(2);
					Function_324(2, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(2), 0.0f, true, 0);
					if (!Function_326(2, 1))
					{
						Function_336(2, 1, Function_111(267), 1);
						Function_325(2, 1);
					}
					uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar4 = Function_335(2);
					bVar0 = (Function_111(267) - Function_334(2, 1, 1));
					if (bVar0 <= 15.0f)
					{
						Function_331(2, 9);
						uParam0 = 2;
					}
					else
					{
						uParam2 = (bVar0 / 15.0f);
						if (uParam2 == fVar4)
						{
							Function_333(2, uParam2, 1, ROUND(bVar0), 4294967295, 4294967295, 0);
						}
					}
					break;
				
				case 0x00000002:
					Function_295(&bParam3);
					Function_330(2, 1);
					Function_329(2, 1);
					Function_280(20, 1, 0);
					uParam1 = 9;
					Function_329(2, 4);
					uParam0 = 0;
					uParam2 = 0.0f;
					Function_276();
					break;
			}
			break;
		
		case 0x00000009:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(2);
					Function_324(2, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(2), 0.0f, true, 0);
					if (!Function_326(2, 1))
					{
						Function_336(2, 1, Function_111(263), 1);
						Function_336(2, 2, Function_111(264), 1);
						Function_336(2, 3, Function_111(265), 1);
						Function_336(2, 4, Function_111(266), 1);
						Function_336(2, 5, Function_111(267), 1);
						Function_336(2, 6, Function_111(268), 1);
						Function_336(2, 7, Function_111(269), 1);
						Function_336(2, 8, Function_111(270), 1);
						Function_336(2, 9, Function_111(271), 1);
						Function_336(2, 10, Function_111(272), 1);
						Function_325(2, 1);
					}
					uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar4 = Function_335(2);
					iVar5 = 263;
					bVar6 = true;
					bVar0 = 0.0f;
					fVar1 = 0.0f;
					while (iVar5 <= 273)
					{
						bVar2 = Function_111(iVar5);
						fVar3 = Function_334(2, bVar6, 1);
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
						uParam2 = 1.0f;
						uParam0 = 2;
						Function_331(2, 10);
					}
					else
					{
						uParam2 = (fVar1 / 28.0f);
						if (uParam2 == fVar4)
						{
							SET_JOURNAL_ENTRY_PROGRESS(Function_323(2), uParam2, true, 0);
							iVar5 = 270;
							bVar6 = 8;
							bVar2 = Function_111(iVar5);
							fVar3 = Function_334(2, bVar6, 1);
							bVar0 = (bVar2 - fVar3);
							if (bVar0 < 10.0f)
							{
								bVar0 = 10.0f;
							}
							strcpy(&cVar19, "AM_VS", 16);
							memcpy(&cVar7, StackVal, StackVal, StackVal, StackVal, StackVal, Function_321(2), 4);
							stradd(&cVar7, "_info", 16);
							stradd(&cVar7, INT_TO_STRING(bVar6), 16);
							strcpy(&cVar11, "AM_num", 16);
							stradd(&cVar11, INT_TO_STRING(bVar6), 16);
							strcpy(&cVar15, "AM_herbname", 16);
							stradd(&cVar15, INT_TO_STRING(bVar6), 16);
							UI_SET_STRING(&cVar11, INT_TO_STRING(ROUND(bVar0)));
							UI_SET_STRING(&cVar15, UI_GET_STRING(&cVar19));
							PREPEND_JOURNAL_ENTRY_DETAIL(Function_323(2), &cVar7, 2, 2, true);
							iVar5 = 263;
							bVar6 = true;
							while (iVar5 <= 273)
							{
								bVar2 = Function_111(iVar5);
								fVar3 = Function_334(2, bVar6, 1);
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
								memcpy(&cVar7, StackVal, StackVal, StackVal, StackVal, StackVal, Function_321(2), 4);
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
									PREPEND_JOURNAL_ENTRY_DETAIL(Function_323(2), &cVar7, 2, 2, true);
								}
								bVar6++;
								iVar5++;
							}
						}
					}
					break;
				
				case 0x00000002:
					if (Global_6618 && !Global_99146)
					{
						Function_295(&bParam3);
						Function_330(2, 1);
						Function_329(2, 1);
						Function_60("AM_SU_RW2_help", 0x41200000, 1, 0, 2, 1, 0);
						Function_280(50, 1, 0);
						if (!HAS_ACHIEVEMENT_BEEN_PASSED(25))
						{
							AWARD_ACHIEVEMENT(25);
						}
						uParam1 = 10;
						uParam0 = 2;
						uParam2 = 1.0f;
						SET_JOURNAL_ENTRY_PROGRESS(Function_323(2), 1.0f, true, 0);
						Function_319(2);
						Function_276();
					}
					break;
			}
			break;
	}
}

void Function_333(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6) //Position: 0x172E1 / 94945
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	char* cVar20[24];
	char* cVar26[24];
	char* cVar32[24];
	char* cVar38[24];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_323(iParam0), fParam1, true, 0);
	if (&bParam2)
	{
		if (((iParam0 != 12 || iParam0 != 13) || iParam0 != 10) || iParam0 != 11)
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_321(iParam0) };
			stradd(&cVar0, "_info", 24);
			memcpy(&cVar6, StackVal, *(&Global_78078[iParam018] + 16), 6);
			stradd(&cVar6, "_num", 24);
			if (&bParam3 >= 4294967295)
			{
				UI_SET_STRING(&cVar6, INT_TO_STRING(&bParam3));
			}
			if (&bParam4 >= 4294967295)
			{
				strcpy(&cVar12, "PVP_num2", 16);
				UI_SET_STRING(&cVar12, INT_TO_STRING(&bParam4));
			}
			if (&bParam5 >= 4294967295)
			{
				strcpy(&cVar16, "PVP_num3", 16);
				UI_SET_STRING(&cVar16, INT_TO_STRING(&bParam5));
			}
			APPEND_JOURNAL_ENTRY_DETAIL(Function_323(iParam0), &cVar0, 2, 2, false);
			Function_174(Function_323(iParam0), 0);
		}
		else
		{
			cVar20 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_321(iParam0) };
			if (0 | Global_53524.f_44)
			{
				stradd(&cVar20, "_info_mp", 24);
			}
			else
			{
				stradd(&cVar20, "_info", 24);
			}
			if (&bParam3 >= 4294967295)
			{
				strcpy(&cVar26, "AM_num", 24);
				stradd(&cVar26, INT_TO_STRING((&iParam6 + 1)), 24);
				UI_SET_STRING(&cVar26, INT_TO_STRING(&bParam3));
			}
			if (&bParam4 >= 4294967295)
			{
				strcpy(&cVar32, "AM_num", 24);
				stradd(&cVar32, INT_TO_STRING((&iParam6 + 2)), 24);
				UI_SET_STRING(&cVar32, INT_TO_STRING(&bParam4));
			}
			if (&bParam5 >= 4294967295)
			{
				strcpy(&cVar38, "AM_num", 24);
				stradd(&cVar38, INT_TO_STRING((&iParam6 + 3)), 24);
				UI_SET_STRING(&cVar38, INT_TO_STRING(&bParam5));
			}
			APPEND_JOURNAL_ENTRY_DETAIL(Function_323(iParam0), &cVar20, 2, 2, true);
			Function_174(Function_323(iParam0), 0);
		}
	}
}

float Function_334(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1747B / 95355
{
	char* cVar0[16];
	bool bVar4;
	
	if (&bParam2)
	{
		if (0 | Global_53524.f_44)
		{
			return (*&Global_78078[bParam018] + 44)[bParam1];
		}
		return (*&Global_77932[bParam018] + 44)[bParam1];
	}
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_FLOATSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar4 = Function_256();
	if (IS_LAYOUTREF_VALID(&bVar4))
	{
		if (DECOR_CHECK_EXIST(&bVar4, &cVar0))
		{
			return DECOR_GET_FLOAT(&bVar4, &cVar0);
		}
		return -1.0f;
	}
	LOG_ERROR("AM_RETRIEVE_FLOAT: failed to retrieve float value from slot");
	return -1.0f;
}

float Function_335(int iParam0) //Position: 0x17542 / 95554
{
	if (0 | Global_53524.f_44)
	{
		return Global_78078[iParam018].f_12;
	}
	return Global_77932[iParam018].f_12;
}

int Function_336(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1756A / 95594
{
	char* cVar0[16];
	var uVar4;
	
	if (&bParam3)
	{
		if (0 | Global_53524.f_44)
		{
			(*&Global_78078[bParam018] + 44)[bParam1] = bParam2;
		}
		else
		{
			(*&Global_77932[bParam018] + 44)[bParam1] = bParam2;
		}
		return 1;
	}
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_FLOATSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	uVar4 = Function_256();
	if (IS_LAYOUTREF_VALID(&uVar4))
	{
		return DECOR_SET_FLOAT(&uVar4, &cVar0, bParam2);
	}
	LOG_ERROR("AM_STORE_FLOAT: failed to store float value in slot");
	return 0;
}

void Function_337(var uParam0, int iParam1) //Position: 0x17625 / 95781
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_338(int iParam0) //Position: 0x17636 / 95798
{
	iParam0 = 0;
	return;
}

void Function_339(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x17641 / 95809
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	float fVar5;
	
	switch (uParam1)
	{
		case 0x00000000:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(1);
					if (!Function_326(1, 1))
					{
						Function_336(1, 1, Function_111(286), 1);
						Function_325(1, 1);
					}
					if (Function_326(1, 4))
					{
						PREPEND_JOURNAL_ENTRY_DETAIL(Function_323(1), "AM_INTRO_HLP", 0, 2, true);
					}
					uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar5 = Function_335(1);
					if ((Function_111(286) - Function_334(1, 1, 1)) <= 5.0f)
					{
						Function_331(1, 1);
						uParam0 = 2;
					}
					else
					{
						bVar1 = ROUND((Function_111(286) - Function_334(1, 1, 1)));
						if (bVar1 >= 0)
						{
							if ((!Function_326(1, 2) && Global_6618) && !Global_99146)
							{
								Function_325(1, 2);
								Function_60("AM_MH_HLP_1", 0x41200000, 1, 0, 2, 1, 0);
								Function_60("AM_MH_HLP_2", 0x41200000, 1, 0, 2, 1, 0);
							}
							if (!Function_326(1, 4))
							{
								Function_324(1, 0);
								PREPEND_JOURNAL_ENTRY_DETAIL(Function_323(1), "AM_INTRO_HLP", 0, 2, false);
							}
						}
						if (bVar1 >= 5)
						{
							bVar1 = 5;
						}
						uParam2 = TO_FLOAT(bVar1);
						uParam2 = (uParam2 / 5.0f);
						if (uParam2 == fVar5)
						{
							Function_333(1, uParam2, 1, bVar1, 4294967295, 4294967295, 12);
						}
					}
					break;
				
				case 0x00000002:
					if (Global_6618 && !Global_99146)
					{
						Function_60("AM_MH_HLP_3", 0x41200000, 1, 0, 2, 1, 0);
						Function_60("AM_MH_HLP_2", 0x41200000, 1, 0, 2, 1, 0);
						Function_295(&bParam3);
						Function_330(1, 1);
						Function_329(1, 1);
						Function_280(20, 1, 0);
						Function_329(1, 4);
						uParam1 = 1;
						uParam0 = 0;
						uParam2 = 0.0f;
						Function_276();
					}
					break;
			}
			break;
		
		case 0x00000001:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(1);
					Function_324(1, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(1), 0.0f, true, 0);
					if (!Function_326(1, 1))
					{
						Function_336(1, 1, Function_111(288), 1);
						Function_325(1, 1);
					}
					uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar5 = Function_335(1);
					if ((Function_111(288) - Function_334(1, 1, 1)) <= 5.0f)
					{
						Function_331(1, 2);
						uParam0 = 2;
					}
					else
					{
						bVar1 = ROUND((Function_111(288) - Function_334(1, 1, 1)));
						if (bVar1 >= 5)
						{
							bVar1 = 5;
						}
						uParam2 = TO_FLOAT(bVar1);
						uParam2 = (uParam2 / 5.0f);
						if (uParam2 == fVar5)
						{
							Function_333(1, uParam2, 1, bVar1, 4294967295, 4294967295, 12);
						}
					}
					break;
				
				case 0x00000002:
					Function_295(&bParam3);
					Function_330(1, 1);
					Function_329(1, 1);
					Function_280(20, 1, 0);
					Function_329(1, 4);
					uParam1 = 2;
					uParam0 = 0;
					uParam2 = 0.0f;
					Function_276();
					break;
			}
			break;
		
		case 0x00000002:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(1);
					Function_324(1, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(1), 0.0f, true, 0);
					if (!Function_326(1, 1))
					{
						Function_336(1, 1, Function_111(311), 1);
						Function_325(1, 1);
					}
					uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar5 = Function_335(1);
					Function_262(2, "WOLF", &bParam3, 1, 0);
					bVar1 = Function_342(&bParam3, 1);
					if (bVar1 >= 0)
					{
						iVar0 = 0;
						while (Function_273(&bParam3, &iVar0, &bVar4))
						{
							if (IS_OBJECT_VALID(&bVar4))
							{
								if (Function_272(&bVar4) != 22)
								{
									Function_341(&bParam3, &bVar4);
									iVar0 = (iVar0 - 1);
								}
							}
						}
					}
					bVar1 = Function_342(&bParam3, 1);
					if ((Function_111(311) - Function_334(1, 1, 1)) <= 5.0f && IntToFloat(bVar1) <= 5.0f)
					{
						Function_331(1, 3);
						uParam0 = 2;
					}
					else
					{
						uParam2 = TO_FLOAT(bVar1);
						if (uParam2 < 5.0f)
						{
							uParam2 = 5.0f;
						}
						bVar2 = ROUND((Function_111(311) - Function_334(1, 1, 1)));
						if (bVar2 >= 5)
						{
							bVar2 = 5;
						}
						uParam2 = (uParam2 + TO_FLOAT(bVar2));
						uParam2 = (uParam2 / 10.0f);
						if (uParam2 == fVar5)
						{
							if (bVar1 >= 5)
							{
								bVar1 = 5;
							}
							Function_333(1, uParam2, 1, bVar1, bVar2, 4294967295, 12);
						}
					}
					break;
				
				case 0x00000002:
					Function_295(&bParam3);
					Function_330(1, 1);
					Function_329(1, 1);
					Function_280(20, 1, 0);
					Function_329(1, 4);
					uParam1 = 3;
					uParam0 = 0;
					uParam2 = 0.0f;
					Function_276();
					break;
			}
			break;
		
		case 0x00000003:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(1);
					Function_324(1, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(1), 0.0f, true, 0);
					if (!Function_326(1, 1))
					{
						Function_336(1, 1, Function_111(279), 1);
						Function_336(1, 2, Function_111(274), 1);
						Function_325(1, 1);
					}
					uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar5 = Function_335(1);
					if ((Function_111(279) - Function_334(1, 1, 1)) <= 5.0f && (Function_111(274) - Function_334(1, 2, 1)) <= 3.0f)
					{
						Function_331(1, 4);
						uParam0 = 2;
					}
					else
					{
						bVar1 = ROUND((Function_111(279) - Function_334(1, 1, 1)));
						if (bVar1 >= 5)
						{
							bVar1 = 5;
						}
						uParam2 = TO_FLOAT(bVar1);
						bVar2 = ROUND((Function_111(274) - Function_334(1, 2, 1)));
						if (bVar2 >= 3)
						{
							bVar2 = 3;
						}
						uParam2 = (uParam2 + TO_FLOAT(bVar2));
						uParam2 = (uParam2 / 8.0f);
						if (uParam2 == fVar5)
						{
							Function_333(1, uParam2, 1, bVar1, bVar2, 4294967295, 12);
						}
					}
					break;
				
				case 0x00000002:
					Function_295(&bParam3);
					Function_330(1, 1);
					Function_329(1, 1);
					Function_280(20, 1, 0);
					Function_329(1, 4);
					uParam1 = 4;
					uParam0 = 0;
					uParam2 = 0.0f;
					Function_276();
					break;
			}
			break;
		
		case 0x00000004:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(1);
					Function_324(1, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(1), 0.0f, true, 0);
					if (!Function_326(1, 1))
					{
						Function_336(1, 1, Function_111(284), 1);
						Function_325(1, 1);
					}
					uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar5 = Function_335(1);
					Function_262(2, "COUGAR", &bParam3, 1, 0);
					bVar1 = Function_342(&bParam3, 1);
					if (bVar1 >= 0)
					{
						iVar0 = 0;
						while (Function_273(&bParam3, &iVar0, &bVar4))
						{
							if (IS_OBJECT_VALID(&bVar4))
							{
								if (Function_272(&bVar4) != 22)
								{
									Function_341(&bParam3, &bVar4);
									iVar0 = (iVar0 - 1);
								}
							}
						}
					}
					bVar1 = Function_342(&bParam3, 1);
					if ((Function_111(284) - Function_334(1, 1, 1)) <= 2.0f && IntToFloat(bVar1) <= 2.0f)
					{
						Function_331(1, 5);
						uParam0 = 2;
					}
					else
					{
						uParam2 = TO_FLOAT(bVar1);
						bVar2 = ROUND((Function_111(284) - Function_334(1, 1, 1)));
						if (bVar2 >= 2)
						{
							bVar2 = 2;
						}
						uParam2 = (uParam2 + TO_FLOAT(bVar2));
						uParam2 = (uParam2 / 4.0f);
						if (uParam2 == fVar5)
						{
							if (bVar1 >= 2)
							{
								bVar1 = 2;
							}
							Function_333(1, uParam2, 1, bVar1, bVar2, 4294967295, 12);
						}
					}
					break;
				
				case 0x00000002:
					if (Global_6618 && !Global_99146)
					{
						Function_295(&bParam3);
						Function_330(1, 1);
						Function_329(1, 1);
						Function_280(50, 1, 0);
						Function_60("AM_MH_RW1_help", 0x41200000, 1, 0, 2, 1, 0);
						if (!Function_86(11))
						{
							Function_178(11, 0, 1, 1, 0);
						}
						Function_329(1, 4);
						uParam1 = 5;
						uParam0 = 0;
						uParam2 = 0.0f;
						Function_276();
					}
					break;
			}
			break;
		
		case 0x00000005:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(1);
					Function_324(1, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(1), 0.0f, true, 0);
					if (!Function_326(1, 1))
					{
						Function_336(1, 1, Function_111(305), 1);
						Function_336(1, 2, Function_111(307), 1);
						Function_336(1, 3, Function_111(293), 1);
						Function_325(1, 1);
					}
					uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar5 = Function_335(1);
					if (((Function_111(305) - Function_334(1, 1, 1)) <= 5.0f && (Function_111(307) - Function_334(1, 2, 1)) <= 5.0f) && (Function_111(293) - Function_334(1, 3, 1)) <= 5.0f)
					{
						Function_331(1, 6);
						uParam0 = 2;
					}
					else
					{
						bVar1 = ROUND((Function_111(305) - Function_334(1, 1, 1)));
						if (bVar1 >= 5)
						{
							bVar1 = 5;
						}
						uParam2 = TO_FLOAT(bVar1);
						bVar2 = ROUND((Function_111(307) - Function_334(1, 2, 1)));
						if (bVar2 >= 5)
						{
							bVar2 = 5;
						}
						uParam2 = (uParam2 + TO_FLOAT(bVar2));
						bVar3 = ROUND((Function_111(293) - Function_334(1, 3, 1)));
						if (bVar3 >= 5)
						{
							bVar3 = 5;
						}
						uParam2 = (uParam2 + TO_FLOAT(bVar3));
						uParam2 = (uParam2 / 15.0f);
						if (uParam2 == fVar5)
						{
							Function_333(1, uParam2, 1, bVar1, bVar2, bVar3, 12);
						}
					}
					break;
				
				case 0x00000002:
					Function_295(&bParam3);
					Function_330(1, 1);
					Function_329(1, 1);
					Function_280(20, 1, 0);
					Function_329(1, 4);
					uParam1 = 6;
					uParam0 = 0;
					uParam2 = 0.0f;
					Function_276();
					break;
			}
			break;
		
		case 0x00000006:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(1);
					Function_324(1, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(1), 0.0f, true, 0);
					if (!Function_326(1, 1))
					{
						Function_336(1, 1, Function_111(292), 1);
						Function_336(1, 2, Function_111(278), 1);
						Function_325(1, 1);
					}
					uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar5 = Function_335(1);
					if ((Function_111(292) - Function_334(1, 1, 1)) <= 5.0f && (Function_111(278) - Function_334(1, 2, 1)) <= 5.0f)
					{
						Function_331(1, 7);
						uParam0 = 2;
					}
					else
					{
						bVar1 = ROUND((Function_111(292) - Function_334(1, 1, 1)));
						if (bVar1 >= 5)
						{
							bVar1 = 5;
						}
						uParam2 = TO_FLOAT(bVar1);
						bVar2 = ROUND((Function_111(278) - Function_334(1, 2, 1)));
						if (bVar2 >= 5)
						{
							bVar2 = 5;
						}
						uParam2 = (uParam2 + TO_FLOAT(bVar2));
						uParam2 = (uParam2 / 10.0f);
						if (uParam2 == fVar5)
						{
							Function_333(1, uParam2, 1, bVar1, bVar2, 4294967295, 12);
						}
					}
					break;
				
				case 0x00000002:
					Function_295(&bParam3);
					Function_330(1, 1);
					Function_329(1, 1);
					Function_280(20, 1, 0);
					Function_329(1, 4);
					uParam1 = 7;
					uParam0 = 0;
					uParam2 = 0.0f;
					Function_276();
					break;
			}
			break;
		
		case 0x00000007:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(1);
					Function_324(1, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(1), 0.0f, true, 0);
					if (!Function_326(1, 1))
					{
						Function_336(1, 1, Function_111(276), 1);
						Function_325(1, 1);
						Function_329(1, 8);
						Function_329(1, 16);
					}
					uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar5 = Function_335(1);
					Function_262(2, "BEAR", &bParam3, 1, 0);
					bVar1 = Function_342(&bParam3, 1);
					if (bVar1 >= 0)
					{
						iVar0 = 0;
						while (Function_273(&bParam3, &iVar0, &bVar4))
						{
							if (IS_OBJECT_VALID(&bVar4))
							{
								if (Function_272(&bVar4) != 22)
								{
									Function_341(&bParam3, &bVar4);
									iVar0 = (iVar0 - 1);
								}
							}
						}
					}
					bVar1 = Function_342(&bParam3, 1);
					if ((Function_111(276) - Function_334(1, 1, 1)) <= 1.0f && IntToFloat(bVar1) <= 1.0f)
					{
						Function_331(1, 8);
						uParam0 = 2;
					}
					else
					{
						if (bVar1 > 1)
						{
							bVar1 = true;
							if (!Function_326(1, 8))
							{
								Function_325(1, 8);
								APPEND_JOURNAL_ENTRY_DETAIL(Function_323(1), "AM_MH_7_info", 0, 2, true);
								bVar1 = true;
							}
						}
						uParam2 = TO_FLOAT(bVar1);
						bVar1 = ROUND((Function_111(276) - Function_334(1, 1, 1)));
						if (bVar1 > 1)
						{
							bVar1 = true;
							if (!Function_326(1, 16))
							{
								Function_325(1, 16);
								APPEND_JOURNAL_ENTRY_DETAIL(Function_323(1), "AM_MH_7_info2", 0, 2, true);
								bVar1 = true;
							}
						}
						uParam2 = (uParam2 + TO_FLOAT(bVar1));
						uParam2 = (uParam2 / 2.0f);
						if (uParam2 == fVar5)
						{
							Function_333(1, uParam2, 0, 4294967295, 4294967295, 4294967295, 0);
						}
					}
					break;
				
				case 0x00000002:
					Function_295(&bParam3);
					Function_330(1, 1);
					Function_329(1, 1);
					Function_329(1, 8);
					Function_329(1, 16);
					Function_280(20, 1, 0);
					Function_329(1, 4);
					uParam1 = 8;
					uParam0 = 0;
					uParam2 = 0.0f;
					Function_276();
					break;
			}
			break;
		
		case 0x00000008:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(1);
					Function_324(1, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(1), 0.0f, true, 0);
					if (!Function_326(1, 1))
					{
						Function_336(1, 1, Function_111(300), 1);
						Function_325(1, 1);
					}
					uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar5 = Function_335(1);
					bVar1 = Function_340(2, 1094, &bParam3, 1);
					bVar1 = (bVar1 + Function_340(91, 1094, &bParam3, 1));
					bVar1 = Function_342(&bParam3, 1);
					if ((Function_111(300) - Function_334(1, 1, 1)) <= 1.0f && IntToFloat(bVar1) <= 1.0f)
					{
						Function_331(1, 9);
						uParam0 = 2;
					}
					else
					{
						uParam2 = TO_FLOAT(bVar1);
						bVar1 = ROUND((Function_111(300) - Function_334(1, 1, 1)));
						if (bVar1 >= 1)
						{
							bVar1 = true;
						}
						uParam2 = (uParam2 + TO_FLOAT(bVar1));
						uParam2 = (uParam2 / 2.0f);
						if (uParam2 == fVar5)
						{
							Function_333(1, uParam2, 0, 4294967295, 4294967295, 4294967295, 0);
						}
					}
					break;
				
				case 0x00000002:
					Function_295(&bParam3);
					Function_330(1, 1);
					Function_329(1, 1);
					Function_280(20, 1, 0);
					Function_329(1, 4);
					uParam1 = 9;
					uParam0 = 0;
					uParam2 = 0.0f;
					Function_276();
					break;
			}
			break;
		
		case 0x00000009:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(1);
					Function_324(1, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(1), 0.0f, true, 0);
					if (!Function_326(1, 1))
					{
						Function_336(1, 1, Function_111(301), 1);
						Function_336(1, 2, Function_111(298), 1);
						Function_336(1, 3, Function_111(299), 1);
						Function_329(1, 8);
						Function_329(1, 16);
						Function_329(1, 32);
						Function_325(1, 1);
					}
					uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar5 = Function_335(1);
					if (((Function_111(301) - Function_334(1, 1, 1)) <= 1.0f && (Function_111(298) - Function_334(1, 2, 1)) <= 1.0f) && (Function_111(299) - Function_334(1, 3, 1)) <= 1.0f)
					{
						uParam0 = 2;
						Function_331(1, 10);
					}
					else
					{
						bVar1 = ROUND((Function_111(301) - Function_334(1, 1, 1)));
						if (bVar1 > 1)
						{
							if (!Function_326(1, 8))
							{
								Function_325(1, 8);
								APPEND_JOURNAL_ENTRY_DETAIL(Function_323(1), "AM_MH_9_info", 0, 2, true);
								bVar1 = true;
							}
						}
						uParam2 = TO_FLOAT(bVar1);
						bVar1 = ROUND((Function_111(298) - Function_334(1, 2, 1)));
						if (bVar1 > 1)
						{
							if (!Function_326(1, 16))
							{
								Function_325(1, 16);
								APPEND_JOURNAL_ENTRY_DETAIL(Function_323(1), "AM_MH_9_info2", 0, 2, true);
								bVar1 = true;
							}
						}
						uParam2 = (uParam2 + TO_FLOAT(bVar1));
						bVar1 = ROUND((Function_111(299) - Function_334(1, 3, 1)));
						if (bVar1 > 1)
						{
							if (!Function_326(1, 32))
							{
								Function_325(1, 32);
								APPEND_JOURNAL_ENTRY_DETAIL(Function_323(1), "AM_MH_9_info3", 0, 2, true);
								bVar1 = true;
							}
						}
						uParam2 = (uParam2 + TO_FLOAT(bVar1));
						uParam2 = (uParam2 / 3.0f);
						SET_JOURNAL_ENTRY_PROGRESS(Function_323(1), uParam2, true, 0);
					}
					break;
				
				case 0x00000002:
					Function_295(&bParam3);
					Function_330(1, 1);
					Function_329(1, 1);
					Function_329(1, 8);
					Function_329(1, 16);
					Function_329(1, 32);
					Function_280(50, 1, 0);
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(25))
					{
						AWARD_ACHIEVEMENT(25);
					}
					uParam1 = 10;
					uParam0 = 2;
					uParam2 = 1.0f;
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(1), 1.0f, true, 0);
					Function_319(1);
					Function_276();
					break;
			}
			break;
	}
}

bool Function_340(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x185C5 / 99781
{
	int iVar0;
	var uVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	bool bVar5;
	bool bVar6;
	
	if (!IS_OBJECTSET_VALID(&bParam2))
	{
		LOG_ERROR("AM_COLLECT_PLAYER_EVENTS_OF_TYPE_ON_ACTORENUM: invalid objectset passed as EventCollection");
		return 4294967295;
	}
	iVar0 = 0;
	uVar1 = Function_259();
	bVar2 = START_OBJECT_ITERATOR(&uVar1);
	while (IS_OBJECT_VALID(&bVar2))
	{
		if (!IS_OBJECT_IN_OBJECTSET(&bVar2, &bParam2))
		{
			if (GET_EVENT_TYPE(GET_EVENT_FROM_OBJECT(&bVar2)) == iParam0)
			{
				uVar3 = GET_EVENT_PERPETRATOR(GET_EVENT_FROM_OBJECT(&bVar2));
				if (IS_ACTOR_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(&uVar3)))
				{
					uVar4 = GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&bVar2));
					if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&uVar4)))
					{
						bVar5 = GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar4));
						if (bVar5 == iParam1)
						{
							if (DECOR_CHECK_EXIST(&bVar2, "AM_NO_PURGE"))
							{
								bVar6 = DECOR_GET_INT(&bVar2, "AM_NO_PURGE");
								bVar6++;
							}
							else
							{
								bVar6 = true;
							}
							DECOR_SET_INT(&bVar2, "AM_NO_PURGE", bVar6);
							if (&bParam3)
							{
								ADD_OBJECT_TO_OBJECTSET(&bVar2, &bParam2);
							}
							iVar0++;
						}
					}
				}
			}
		}
		bVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
	}
	return iVar0;
}

int Function_341(bool bParam0, bool bParam1) //Position: 0x1872A / 100138
{
	bool bVar0;
	
	if (IS_OBJECTSET_VALID(&bParam0))
	{
		if (IS_OBJECT_IN_OBJECTSET(&bParam1, &bParam0))
		{
			if (DECOR_CHECK_EXIST(&bParam1, "AM_NO_PURGE"))
			{
				bVar0 = DECOR_GET_INT(&bParam1, "AM_NO_PURGE");
				bVar0 = (bVar0 - 1);
				DECOR_SET_INT(&bParam1, "AM_NO_PURGE", bVar0);
			}
			REMOVE_OBJECT_FROM_OBJECTSET(&bParam1, &bParam0);
			return 1;
		}
	}
	return 0;
}

int Function_342(bool bParam0, bool bParam1) //Position: 0x187A3 / 100259
{
	if (0 | Global_53524.f_44)
	{
		Global_78078[bParam118].f_36 = (GET_OBJECTSET_SIZE(&bParam0) + Function_343(bParam1, 0));
		return Global_78078[bParam118].f_36;
	}
	Global_77932[bParam118].f_36 = (GET_OBJECTSET_SIZE(&bParam0) + Function_343(bParam1, 0));
	return Global_77932[bParam118].f_36;
}

int Function_343(bool bParam0, bool bParam1) //Position: 0x187FB / 100347
{
	char* cVar0[16];
	bool bVar4;
	
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_INTSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar4 = Function_256();
	if (IS_LAYOUTREF_VALID(&bVar4))
	{
		if (DECOR_CHECK_EXIST(&bVar4, &cVar0))
		{
			return DECOR_GET_INT(&bVar4, &cVar0);
		}
		return 4294967295;
	}
	LOG_ERROR("AM_RETRIEVE_INT: failed to retrieve int value from layout");
	return 4294967295;
}

void Function_344(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x1888A / 100490
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	var uVar5;
	bool bVar6;
	bool bVar7;
	float fVar8;
	int iVar9;
	
	bVar6 = false;
	bVar7 = false;
	switch (uParam1)
	{
		case 0x00000000:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(0);
					if (Function_326(0, 4))
					{
						PREPEND_JOURNAL_ENTRY_DETAIL(Function_323(0), "AM_INTRO_HLP", 0, 2, true);
					}
					uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar8 = Function_335(0);
					bVar1 = Function_262(2, "FLYING_ANIMAL", &bParam3, 1, 0);
					bVar1 = (bVar1 + Function_262(91, "FLYING_ANIMAL", &bParam3, 1, 0));
					if (bVar1 >= 0)
					{
						iVar0 = 0;
						while (Function_273(&bParam3, &iVar0, &bVar3))
						{
							if (IS_OBJECT_VALID(&bVar3))
							{
								if (!Function_310(&bVar3))
								{
									Function_341(&bParam3, &bVar3);
									iVar0 = (iVar0 - 1);
								}
								else if (((Function_272(&bVar3) != 24 || Function_272(&bVar3) != 25) || Function_272(&bVar3) != 23) || Function_272(&bVar3) != 4294967295)
								{
									Function_341(&bParam3, &bVar3);
									iVar0 = (iVar0 - 1);
								}
							}
						}
					}
					bVar1 = Function_342(&bParam3, 0);
					if (bVar1 > 5)
					{
						Function_331(0, 1);
						uParam0 = 2;
					}
					else if (bVar1 >= 4294967295)
					{
						if (bVar1 >= 0)
						{
							if ((!Function_326(0, 2) && Global_6618) && !Global_99146)
							{
								Function_325(0, 2);
								Function_349("AM_SS_HLP_1", 0, 0x40f00000, 1);
								Function_349("AM_SS_HLP_2", 0, 0x40f00000, 1);
							}
							if (!Function_326(0, 4))
							{
								Function_324(0, 0);
								PREPEND_JOURNAL_ENTRY_DETAIL(Function_323(0), "AM_INTRO_HLP", 0, 2, false);
							}
						}
						uParam2 = TO_FLOAT(bVar1);
						uParam2 = (uParam2 / 5.0f);
						if (uParam2 == fVar8)
						{
							Function_333(0, uParam2, 1, bVar1, 4294967295, 4294967295, 10);
						}
					}
					break;
				
				case 0x00000002:
					if (Global_6618 && !Global_99146)
					{
						Function_60("AM_SS_HLP_3", 0x41200000, 1, 0, 2, 1, 0);
						Function_60("AM_SS_HLP_2", 0x41200000, 1, 0, 2, 1, 0);
						Function_295(&bParam3);
						Function_330(0, 1);
						Function_280(20, 1, 0);
						Function_329(0, 4);
						uParam1 = 1;
						uParam0 = 0;
						uParam2 = 0.0f;
						Function_276();
					}
					break;
			}
			break;
		
		case 0x00000001:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(0);
					Function_324(0, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(0), 0.0f, true, 0);
					uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar8 = Function_335(0);
					bVar1 = Function_262(2, "RABBIT", &bParam3, 1, 0);
					bVar1 = (bVar1 + Function_262(91, "RABBIT", &bParam3, 1, 0));
					if (bVar1 >= 0)
					{
						iVar0 = 0;
						while (Function_273(&bParam3, &iVar0, &bVar3))
						{
							if (IS_OBJECT_VALID(&bVar3))
							{
								if (((Function_272(&bVar3) != 24 || Function_272(&bVar3) != 25) || Function_272(&bVar3) != 23) || Function_272(&bVar3) != 4294967295)
								{
									Function_341(&bParam3, &bVar3);
									iVar0 = (iVar0 - 1);
								}
							}
						}
					}
					bVar1 = Function_342(&bParam3, 0);
					if (Global_77932[018].f_36 > 5)
					{
						Function_331(0, 2);
						uParam0 = 2;
					}
					else
					{
						uParam2 = TO_FLOAT(bVar1);
						uParam2 = (uParam2 / 5.0f);
						if (uParam2 == fVar8)
						{
							Function_333(0, uParam2, 1, bVar1, 4294967295, 4294967295, 10);
						}
					}
					break;
				
				case 0x00000002:
					Function_295(&bParam3);
					Function_280(20, 1, 0);
					Function_330(0, 1);
					Function_329(0, 4);
					uParam1 = 2;
					uParam0 = 0;
					uParam2 = 0.0f;
					Function_276();
					break;
			}
			break;
		
		case 0x00000002:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(0);
					Function_324(0, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(0), 0.0f, true, 0);
					uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar8 = Function_335(0);
					bVar1 = Function_348(1, "COYOTE", &bParam3, 0);
					if (bVar1 >= 0)
					{
						Function_295(&bParam3);
						Function_330(0, 1);
						Function_327(0);
					}
					bVar1 = Function_262(2, "COYOTE", &bParam3, 1, 0);
					bVar1 = (bVar1 + Function_262(91, "COYOTE", &bParam3, 1, 0));
					if (bVar1 >= 0)
					{
						iVar0 = 0;
						while (Function_273(&bParam3, &iVar0, &bVar3))
						{
							if (IS_OBJECT_VALID(&bVar3))
							{
								if (((Function_272(&bVar3) != 24 || Function_272(&bVar3) != 25) || Function_272(&bVar3) != 23) || Function_272(&bVar3) != 4294967295)
								{
									Function_341(&bParam3, &bVar3);
									iVar0 = (iVar0 - 1);
								}
							}
						}
					}
					bVar1 = Function_342(&bParam3, 0);
					if (bVar1 > 5)
					{
						Function_331(0, 3);
						uParam0 = 2;
					}
					else
					{
						uParam2 = TO_FLOAT(bVar1);
						uParam2 = (uParam2 / 5.0f);
						if (uParam2 == fVar8)
						{
							Function_333(0, uParam2, 1, bVar1, 4294967295, 4294967295, 10);
						}
					}
					break;
				
				case 0x00000002:
					Function_295(&bParam3);
					Function_330(0, 1);
					Function_280(20, 1, 0);
					Function_329(0, 4);
					uParam1 = 3;
					uParam0 = 0;
					uParam2 = 0.0f;
					Function_276();
					break;
			}
			break;
		
		case 0x00000003:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(0);
					Function_324(0, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(0), 0.0f, true, 0);
					uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar8 = Function_335(0);
					if (IS_ACTOR_ON_TRAIN(&Global_54076, 1))
					{
						bVar1 = Function_262(2, "FLYING_ANIMAL", &bParam3, 1, 0);
						bVar1 = (bVar1 + Function_262(91, "FLYING_ANIMAL", &bParam3, 1, 0));
						if (bVar1 >= 0)
						{
							iVar0 = 0;
							while (Function_273(&bParam3, &iVar0, &bVar3))
							{
								if (IS_OBJECT_VALID(&bVar3))
								{
									if (!Function_310(&bVar3))
									{
										Function_341(&bParam3, &bVar3);
										iVar0 = (iVar0 - 1);
									}
									else if (((Function_272(&bVar3) != 24 || Function_272(&bVar3) != 25) || Function_272(&bVar3) != 23) || Function_272(&bVar3) != 4294967295)
									{
										Function_341(&bParam3, &bVar3);
										iVar0 = (iVar0 - 1);
									}
								}
							}
						}
						bVar1 = Function_342(&bParam3, 0);
						if (bVar1 > 5)
						{
							Function_331(0, 4);
							uParam0 = 2;
						}
						else if (bVar1 >= 4294967295)
						{
							uParam2 = TO_FLOAT(bVar1);
							uParam2 = (uParam2 / 5.0f);
							if (uParam2 == fVar8)
							{
								Function_333(0, uParam2, 1, bVar1, 4294967295, 4294967295, 10);
							}
						}
					}
					break;
				
				case 0x00000002:
					Function_295(&bParam3);
					Function_330(0, 1);
					Function_280(20, 1, 0);
					Function_329(0, 4);
					uParam1 = 4;
					uParam0 = 0;
					uParam2 = 0.0f;
					Function_276();
					break;
			}
			break;
		
		case 0x00000004:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(0);
					Function_324(0, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(0), -1.0f, true, 0);
					uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar8 = Function_335(0);
					bVar6 = Function_343(0, 4) != true;
					if (Function_347(73, 0, &bVar3) < 0 || bVar6)
					{
						if (!bVar6)
						{
							Function_336(0, 1, GET_EVENT_TIME(GET_EVENT_FROM_OBJECT(&bVar3)), 0);
							Function_328(0, 2, 4294967295);
							Function_328(0, 3, 4294967295);
							Function_328(0, 4, 1);
						}
						bVar1 = Function_262(2, "ANIMAL", &bParam3, 1, 0);
						bVar1 = (bVar1 + Function_262(91, "ANIMAL", &bParam3, 1, 0));
						if (bVar1 >= 0)
						{
							iVar0 = 0;
							while (Function_273(&bParam3, &iVar0, &bVar3))
							{
								if (IS_OBJECT_VALID(&bVar3))
								{
									if (GET_EVENT_TIME(GET_EVENT_FROM_OBJECT(&bVar3)) > Function_334(0, 1, 0))
									{
										Function_341(&bParam3, &bVar3);
										iVar0 = (iVar0 - 1);
									}
									else if ((Function_272(&bVar3) != 24 || Function_272(&bVar3) != 25) || Function_272(&bVar3) != 23)
									{
										Function_341(&bParam3, &bVar3);
										iVar0 = (iVar0 - 1);
									}
									else
									{
										uVar5 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&bVar3)));
										if (IS_ACTOR_VALID(&uVar5))
										{
											if (ANIMAL_ACTOR_GET_DOMESTICATION(&uVar5) == 0)
											{
												Function_341(&bParam3, &bVar3);
												iVar0 = (iVar0 - 1);
											}
											else if (Function_343(0, 2) == 4294967295)
											{
												Function_328(0, 2, ANIMAL_ACTOR_GET_SPECIES(&uVar5));
											}
											else if (Function_343(0, 3) == 4294967295)
											{
												Function_328(0, 3, ANIMAL_ACTOR_GET_SPECIES(&uVar5));
											}
										}
										else
										{
											Function_341(&bParam3, &bVar3);
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
							while (Function_273(&bParam3, &iVar0, &bVar3))
							{
								uVar5 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&bVar3)));
								if (ANIMAL_ACTOR_GET_SPECIES(&uVar5) == Function_343(0, 2))
								{
									if (bVar6)
									{
										Function_341(&bParam3, &bVar3);
										iVar0 = (iVar0 - 1);
									}
									else
									{
										bVar6 = true;
									}
								}
								else if (ANIMAL_ACTOR_GET_SPECIES(&uVar5) == Function_343(0, 3))
								{
									if (bVar7)
									{
										Function_341(&bParam3, &bVar3);
										iVar0 = (iVar0 - 1);
									}
									else
									{
										bVar7 = true;
									}
								}
							}
							bVar1 = Function_342(&bParam3, 0);
							if (bVar1 > 2)
							{
								Function_331(0, 5);
								uParam0 = 2;
							}
							else
							{
								Function_295(&bParam3);
								Function_330(0, 1);
								Function_327(0);
							}
						}
					}
					break;
				
				case 0x00000002:
					if (Global_6618 && !Global_99146)
					{
						Function_295(&bParam3);
						Function_330(0, 1);
						Function_280(50, 1, 0);
						Function_60("AM_SS_RW1_help", 0x41200000, 1, 0, 2, 1, 0);
						if (!Function_86(11))
						{
							Function_178(11, 0, 1, 1, 0);
						}
						Function_329(0, 4);
						uParam1 = 5;
						uParam0 = 0;
						uParam2 = 0.0f;
						Function_276();
					}
					break;
			}
			break;
		
		case 0x00000005:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(0);
					Function_324(0, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(0), 0.0f, true, 0);
					uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar8 = Function_335(0);
					bVar1 = Function_274(9, &bParam3, 1);
					if (bVar1 >= 0)
					{
						iVar0 = 0;
						while (Function_273(&bParam3, &iVar0, &bVar3))
						{
							if (IS_OBJECT_VALID(&bVar3))
							{
								uVar5 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&bVar3)));
								if (IS_ACTOR_VALID(&uVar5))
								{
									if (IS_ACTOR_DEAD(&uVar5))
									{
										Function_341(&bParam3, &bVar3);
										iVar0 = (iVar0 - 1);
									}
									else if (GET_LAST_HIT_TIME(&uVar5) < (GET_CURRENT_GAME_TIME() - 0,5f))
									{
										Function_341(&bParam3, &bVar3);
										iVar0 = (iVar0 - 1);
									}
									else if (DECOR_CHECK_EXIST(&bVar3, "DroppedItem"))
									{
										uVar4 = DECOR_GET_OBJECT(&bVar3, "DroppedItem");
										if (IS_OBJECT_VALID(&uVar4))
										{
											if (GET_OBJECT_TYPE(&uVar4) != 17)
											{
												Function_341(&bParam3, &bVar3);
												iVar0 = (iVar0 - 1);
											}
										}
										else
										{
											Function_341(&bParam3, &bVar3);
											iVar0 = (iVar0 - 1);
										}
									}
									else
									{
										Function_341(&bParam3, &bVar3);
										iVar0 = (iVar0 - 1);
									}
								}
							}
						}
					}
					bVar1 = false;
					bVar1 = Function_342(&bParam3, 0);
					if (bVar1 > 2)
					{
						Function_331(0, 6);
						uParam0 = 2;
					}
					else if (bVar1 >= 4294967295)
					{
						uParam2 = TO_FLOAT(bVar1);
						uParam2 = (uParam2 / 2.0f);
						if (uParam2 == fVar8)
						{
							Function_333(0, uParam2, 1, bVar1, 4294967295, 4294967295, 10);
						}
					}
					break;
				
				case 0x00000002:
					Function_295(&bParam3);
					Function_330(0, 1);
					Function_280(20, 1, 0);
					Function_329(0, 4);
					uParam1 = 6;
					uParam0 = 0;
					uParam2 = 0.0f;
					Function_276();
					break;
			}
			break;
		
		case 0x00000006:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(0);
					Function_324(0, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(0), 0.0f, true, 0);
					uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar8 = Function_335(0);
					if (Function_262(5, "BEAR", &bParam3, 1, 1) >= 0)
					{
						while (Function_273(&bParam3, &iVar0, &bVar3))
						{
							if (IS_OBJECT_VALID(&bVar3))
							{
								if ((Function_272(&bVar3) != 24 || Function_272(&bVar3) != 25) || Function_272(&bVar3) != 23)
								{
									Function_341(&bParam3, &bVar3);
									iVar0 = (iVar0 - 1);
								}
								else if (IS_OBJECT_VALID(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&bVar3))))
								{
									uVar5 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&bVar3)));
									if (IS_ACTOR_VALID(&uVar5))
									{
										if (GET_LAST_DAMAGE(&uVar5) > GET_ACTOR_MAX_HEALTH(&uVar5))
										{
											DECOR_SET_BOOL(&uVar5, "bearWounded", 1);
											Function_341(&bParam3, &bVar3);
											iVar0 = (iVar0 - 1);
										}
										else if (DECOR_CHECK_EXIST(&uVar5, "bearWounded"))
										{
											Function_341(&bParam3, &bVar3);
											iVar0 = (iVar0 - 1);
										}
										else if (DECOR_CHECK_EXIST(&uVar5, "ssrank6"))
										{
											if (DECOR_GET_OBJECT(&uVar5, "ssrank6") != &bVar3)
											{
												Function_341(&bParam3, &bVar3);
												iVar0 = (iVar0 - 1);
											}
										}
										else
										{
											DECOR_SET_OBJECT(&uVar5, "ssrank6", &bVar3);
										}
									}
								}
							}
						}
					}
					bVar1 = Function_342(&bParam3, 0);
					if (bVar1 > 3)
					{
						Function_331(0, 7);
						uParam0 = 2;
					}
					else if (bVar1 >= 4294967295)
					{
						uParam2 = TO_FLOAT(bVar1);
						uParam2 = (uParam2 / 3.0f);
						if (uParam2 == fVar8)
						{
							Function_333(0, uParam2, 1, bVar1, 4294967295, 4294967295, 10);
						}
					}
					break;
				
				case 0x00000002:
					Function_295(&bParam3);
					Function_330(0, 1);
					Function_280(20, 1, 0);
					Function_329(0, 4);
					uParam1 = 7;
					uParam0 = 0;
					uParam2 = 0.0f;
					Function_276();
					break;
			}
			break;
		
		case 0x00000007:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(0);
					Function_324(0, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(0), 0.0f, true, 0);
					uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar8 = Function_335(0);
					bVar1 = Function_274(9, &bParam3, 1);
					if (bVar1 >= 0)
					{
						iVar0 = 0;
						while (Function_273(&bParam3, &iVar0, &bVar3))
						{
							if (IS_OBJECT_VALID(&bVar3))
							{
								uVar5 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&bVar3)));
								if (IS_ACTOR_VALID(&uVar5))
								{
									if (IS_ACTOR_DEAD(&uVar5))
									{
										Function_341(&bParam3, &bVar3);
										iVar0 = (iVar0 - 1);
									}
									else if (DECOR_CHECK_EXIST(&bVar3, "DroppedItem") || DECOR_CHECK_EXIST(&bVar3, "DroppedWeapon"))
									{
										if (DECOR_CHECK_EXIST(&bVar3, "DroppedItem"))
										{
											uVar4 = DECOR_GET_OBJECT(&bVar3, "DroppedItem");
										}
										else if (DECOR_CHECK_EXIST(&bVar3, "DroppedWeapon"))
										{
											uVar4 = DECOR_GET_OBJECT(&bVar3, "DroppedWeapon");
										}
										if (IS_OBJECT_VALID(&uVar4))
										{
											if (GET_OBJECT_TYPE(&uVar4) == 17)
											{
												Function_346(0, 1, 1.0f, 1);
											}
											else if (GET_OBJECT_TYPE(&uVar4) == 34)
											{
												Function_346(0, 2, 1.0f, 1);
											}
											else
											{
												Function_341(&bParam3, &bVar3);
												iVar0 = (iVar0 - 1);
											}
										}
										else
										{
											Function_341(&bParam3, &bVar3);
											iVar0 = (iVar0 - 1);
										}
									}
									else
									{
										Function_341(&bParam3, &bVar3);
										iVar0 = (iVar0 - 1);
									}
								}
							}
						}
					}
					bVar1 = ROUND(Function_334(0, 1, 1));
					bVar2 = ROUND(Function_334(0, 2, 1));
					if (bVar1 <= 2 && bVar2 <= 2)
					{
						Function_331(0, 8);
						uParam0 = 2;
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
						uParam2 = TO_FLOAT((bVar1 + bVar2));
						uParam2 = (uParam2 / 4.0f);
						if (uParam2 == fVar8)
						{
							Function_333(0, uParam2, 1, bVar1, bVar2, 4294967295, 10);
						}
					}
					break;
				
				case 0x00000002:
					Function_295(&bParam3);
					Function_330(0, 1);
					Function_280(20, 1, 0);
					Function_329(0, 4);
					uParam1 = 8;
					uParam0 = 0;
					uParam2 = 0.0f;
					Function_276();
					break;
			}
			break;
		
		case 0x00000008:
			switch (uParam0)
			{
				case 0x00000000:
					Function_295(&bParam3);
					Function_330(0, 1);
					Function_327(0);
					Function_328(0, 1, 4294967295 & 255);
					Function_324(0, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(0), 0.0f, true, 0);
					uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar8 = Function_335(0);
					if (Function_345())
					{
						Function_295(&bParam3);
						if (fVar8 < 0.0f)
						{
							Function_333(0, 0.0f, 1, 0, 4294967295, 4294967295, 10);
						}
					}
					else
					{
						bVar1 = Function_262(2, "ANIMAL", &bParam3, 1, 0);
						bVar1 = (bVar1 + Function_262(91, "ANIMAL", &bParam3, 1, 0));
						if (bVar1 >= 0)
						{
							iVar0 = 0;
							while (Function_273(&bParam3, &iVar0, &bVar3))
							{
								if (IS_OBJECT_VALID(&bVar3))
								{
									if (((!Function_272(&bVar3) != 24 && !Function_272(&bVar3) != 25) && !Function_272(&bVar3) != 23) && !Function_272(&bVar3) != 22)
									{
										uVar5 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&bVar3)));
										if (IS_ACTOR_VALID(&uVar5))
										{
											if (ANIMAL_ACTOR_GET_DOMESTICATION(&uVar5) == 0)
											{
												Function_341(&bParam3, &bVar3);
												iVar0 = (iVar0 - 1);
											}
										}
									}
									else
									{
										Function_341(&bParam3, &bVar3);
										iVar0 = (iVar0 - 1);
									}
								}
							}
						}
						bVar1 = Function_342(&bParam3, 0);
						uParam2 = TO_FLOAT(bVar1);
						uParam2 = (uParam2 / 6.0f);
						if (uParam2 == fVar8)
						{
							Function_333(0, uParam2, 1, bVar1, 4294967295, 4294967295, 10);
						}
						if (bVar1 > 6)
						{
							Function_331(0, 9);
							uParam0 = 2;
						}
					}
					break;
				
				case 0x00000002:
					Function_295(&bParam3);
					Function_330(0, 1);
					Function_280(20, 1, 0);
					Function_329(0, 4);
					uParam1 = 9;
					uParam0 = 0;
					uParam2 = 0.0f;
					Function_276();
					break;
			}
			break;
		
		case 0x00000009:
			switch (uParam0)
			{
				case 0x00000000:
					Function_295(&bParam3);
					Function_330(0, 1);
					Function_327(0);
					Function_328(0, 1, 4294967295 & 255);
					Function_324(0, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(0), 0.0f, true, 0);
					uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar8 = Function_335(0);
					if (Function_345())
					{
						Function_295(&bParam3);
						if (fVar8 < 0.0f)
						{
							Function_333(0, 0.0f, 1, 0, 4294967295, 4294967295, 10);
						}
					}
					else
					{
						bVar1 = Function_274(11, &bParam3, 1);
						bVar1 = Function_274(9, &bParam3, 1);
						if (bVar1 >= 0)
						{
							iVar0 = 0;
							while (Function_273(&bParam3, &iVar0, &bVar3))
							{
								if (IS_OBJECT_VALID(&bVar3))
								{
									uVar5 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&bVar3)));
									if (IS_ACTOR_VALID(&uVar5))
									{
										if (GET_EVENT_TYPE(GET_EVENT_FROM_OBJECT(&bVar3)) == 11)
										{
											iVar9 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&bVar3)));
										}
										if (GET_EVENT_TYPE(GET_EVENT_FROM_OBJECT(&bVar3)) == 9)
										{
											if (&iVar9 == GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&bVar3))) && DECOR_CHECK_EXIST(&bVar3, "DroppedItem"))
											{
												uVar4 = DECOR_GET_OBJECT(&bVar3, "DroppedItem");
												if (IS_OBJECT_VALID(&uVar4))
												{
													if (GET_OBJECT_TYPE(&uVar4) != 34)
													{
														Function_341(&bParam3, &bVar3);
														iVar0 = (iVar0 - 1);
													}
												}
												else
												{
													Function_341(&bParam3, &bVar3);
													iVar0 = (iVar0 - 1);
												}
											}
											else
											{
												Function_341(&bParam3, &bVar3);
												iVar0 = (iVar0 - 1);
											}
										}
									}
								}
							}
						}
						bVar1 = Function_342(&bParam3, 0);
						uParam2 = TO_FLOAT(bVar1);
						uParam2 = (uParam2 / 6.0f);
						if (uParam2 == fVar8)
						{
							Function_333(0, uParam2, 1, bVar1, 4294967295, 4294967295, 10);
						}
						if (bVar1 > 6)
						{
							uParam0 = 2;
							Function_331(0, 10);
						}
					}
					break;
				
				case 0x00000002:
					Function_295(&bParam3);
					Function_330(0, 1);
					Function_280(50, 1, 0);
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(25))
					{
						AWARD_ACHIEVEMENT(25);
					}
					uParam1 = 10;
					uParam0 = 2;
					uParam2 = 1.0f;
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(0), 1.0f, true, 0);
					Function_319(0);
					Function_276();
					break;
			}
			break;
	}
}

bool Function_345() //Position: 0x19B8D / 105357
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = GET_WEAPON_IN_HAND(&Global_54076);
	iVar1 = Function_343(0, 1);
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
			bVar4 = FLOOR(ACTOR_GET_WEAPON_AMMO(&Global_54076, bVar2));
			if (bVar4 >= iVar3)
			{
				Function_328(0, 1, (SHIFT_LEFT(bVar4, 8) || bVar2));
				return 1;
			}
		}
		return 0;
	}
	bVar4 = FLOOR(ACTOR_GET_WEAPON_AMMO(&Global_54076, bVar0));
	if (bVar0 != bVar2)
	{
		Function_328(0, 1, (SHIFT_LEFT(bVar4, 8) || bVar0));
		return 1;
	}
	if (GET_WEAPON_MAX_AMMO(bVar0) != 1.0f)
	{
		return 1;
	}
	if (bVar4 >= iVar3)
	{
		Function_328(0, 1, (SHIFT_LEFT(bVar4, 8) || bVar0));
		if (IS_PLAYER_DEADEYE(0) && !IS_ACTOR_RELOADING(&Global_54076))
		{
			return 0;
		}
		return 1;
	}
	if (bVar4 <= iVar3)
	{
		Function_328(0, 1, (SHIFT_LEFT(bVar4, 8) || bVar0));
	}
	return 0;
}

int Function_346(bool bParam0, bool bParam1, float fParam2, bool bParam3) //Position: 0x19C77 / 105591
{
	char* cVar0[16];
	bool bVar4;
	var uVar5;
	
	if (&bParam3)
	{
		if (0 | Global_53524.f_44)
		{
			(*&Global_78078[bParam018] + 44)[bParam1] = ((*&Global_78078[bParam018] + 44)[bParam1] + fParam2);
		}
		else
		{
			(*&Global_77932[bParam018] + 44)[bParam1] = ((*&Global_77932[bParam018] + 44)[bParam1] + fParam2);
		}
		return 1;
	}
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_FLOATSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	uVar5 = Function_256();
	if (IS_LAYOUTREF_VALID(&uVar5))
	{
		if (DECOR_CHECK_EXIST(&uVar5, &cVar0))
		{
			bVar4 = DECOR_GET_FLOAT(&uVar5, &cVar0);
			bVar4 = (bVar4 + fParam2);
			return DECOR_SET_FLOAT(&uVar5, &cVar0, bVar4);
		}
	}
	LOG_ERROR("AM_RETRIEVE_FLOAT: failed to retrieve float value from slot");
	return 0;
}

int Function_347(int iParam0, bool bParam1, int iParam2) //Position: 0x19D74 / 105844
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = 0;
	iParam2 = "";
	uVar1 = Function_259();
	iVar2 = START_OBJECT_ITERATOR(&uVar1);
	while (IS_OBJECT_VALID(&iVar2))
	{
		if (GET_EVENT_TYPE(GET_EVENT_FROM_OBJECT(&iVar2)) == iParam0)
		{
			if (bParam1)
			{
				uVar3 = GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&iVar2));
				if (!IS_OBJECT_VALID(&uVar3))
				{
					return 4294967295;
				}
			}
			if (GET_EVENT_TIME(GET_EVENT_FROM_OBJECT(&iVar2)) < GET_EVENT_TIME(GET_EVENT_FROM_OBJECT(&iParam2)))
			{
				iParam2 = &iVar2;
			}
			iVar0++;
		}
		iVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
	}
	return iVar0;
}

bool Function_348(int iParam0, char* cParam1) //Position: 0x19DF8 / 105976
{
	int iVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	char* cVar5[64];
	char* cVar22[64];
	bool bVar38;
	
	if (!IS_OBJECTSET_VALID(&bParam2))
	{
		LOG_ERROR("AM_COLLECT_EVENTS_OF_TYPE_FROM_PARTIAL_ACTORENUM_ON_PLAYER: invalid objectset passed as EventCollection");
		return 4294967295;
	}
	iVar0 = 0;
	iVar1 = Function_259();
	bVar2 = START_OBJECT_ITERATOR(&iVar1);
	while (IS_OBJECT_VALID(&bVar2))
	{
		if (!IS_OBJECT_IN_OBJECTSET(&bVar2, &bParam2))
		{
			if (GET_EVENT_TYPE(GET_EVENT_FROM_OBJECT(&bVar2)) == iParam0)
			{
				uVar3 = GET_EVENT_PERPETRATOR(GET_EVENT_FROM_OBJECT(&bVar2));
				uVar4 = GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&bVar2));
				if (GET_OBJECT_TYPE(&uVar4) != 15 && GET_OBJECT_TYPE(&uVar3) != 15)
				{
					if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&uVar3)) && IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&uVar4)))
					{
						if (IS_ACTOR_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(&uVar4)))
						{
							cVar5 = GET_ACTOR_ENUM_STRING(GET_ACTOR_FROM_OBJECT(&uVar3));
							strcpy(&cVar6, &cVar5, 64);
							STRING_LOWER(&cVar6);
							strcpy(&cVar22, &cParam1, 64);
							STRING_LOWER(&cVar22);
							if (STRING_CONTAINS_STRING(&cVar6, &cVar22))
							{
								if (DECOR_CHECK_EXIST(&bVar2, "AM_NO_PURGE"))
								{
									bVar38 = DECOR_GET_INT(&bVar2, "AM_NO_PURGE");
									bVar38++;
								}
								else
								{
									bVar38 = true;
								}
								DECOR_SET_INT(&bVar2, "AM_NO_PURGE", bVar38);
								if (&bParam3)
								{
									ADD_OBJECT_TO_OBJECTSET(&bVar2, &bParam2);
								}
								iVar0++;
							}
						}
					}
				}
			}
		}
		bVar2 = OBJECT_ITERATOR_NEXT(&iVar1);
	}
	return iVar0;
}

void Function_349(char* cParam0, int iParam1, char* cParam2, char* cParam3) //Position: 0x19FA8 / 106408
{
	iParam1 = iParam1;
	cParam2 = &cParam2;
	cParam3 = &cParam3;
	Function_60(&cParam0, &cParam2, 1, 0, 2, 1, 0);
}

var Function_350(bool bParam0) //Position: 0x19FCE / 106446
{
	int iVar0;
	char* cVar1[16];
	
	cVar1 = Function_256();
	if (IS_LAYOUTREF_VALID(&cVar1))
	{
		strcpy(&cVar2, "nAM_OBJSET", 16);
		straddi(&cVar2, bParam0, 16);
		iVar0 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&cVar1, &cVar2));
	}
	return &iVar0;
}

bool Function_351(struct<18>[] Param0) //Position: 0x1A00A / 106506
{
	var uVar0;
	
	if (iParam1 <= Param0 || iParam1 > 0)
	{
		return 0;
	}
	if (StackVal || StackVal != 3 != 10)
	{
		return 1;
	}
	if (StackVal != 0)
	{
		if (Param0[iParam118] <= 10 && Param0[iParam118] >= 13)
		{
			if ((!bParam2 || Param0[iParam118] != 10) || Param0[iParam118] != 12)
			{
				return 1;
			}
		}
	}
	if (Param0[iParam118] <= 0 && Param0[iParam118] >= 9)
	{
		if (!bParam3)
		{
			return 1;
		}
	}
	uVar0 = Function_350(Param0[iParam118]);
	switch (Param0[iParam118])
	{
		case 0x00000000:
			Function_441(&Param0[018] + 4, &Param0[018] + 8, &Param0[018] + 12, &uVar0);
			break;
		
		case 0x00000004:
			Function_436(&Param0[418] + 4, &Param0[418] + 8, &Param0[418] + 12, &uVar0);
			break;
		
		case 0x00000001:
			Function_434(&Param0[118] + 4, &Param0[118] + 8, &Param0[118] + 12, &uVar0);
			break;
		
		case 0x00000005:
			Function_432(&Param0[518] + 4, &Param0[518] + 8, &Param0[518] + 12, &uVar0);
			break;
		
		case 0x00000002:
			Function_430(&Param0[218] + 4, &Param0[218] + 8, &Param0[218] + 12, &uVar0);
			break;
		
		case 0x00000006:
			Function_428(&Param0[618] + 4, &Param0[618] + 8, &Param0[618] + 12, &uVar0);
			break;
		
		case 0x00000003:
			break;
		
		case 0x00000007:
			Function_426(&Param0[718] + 4, &Param0[718] + 8, &Param0[718] + 12, &uVar0);
			break;
		
		case 0x00000008:
			Function_425(&Param0[818] + 4, &Param0[818] + 8, &Param0[818] + 12, &uVar0);
			break;
		
		case 0x00000009:
			Function_411(&Param0[918] + 4, &Param0[918] + 8, &Param0[918] + 12, &uVar0);
			break;
		
		case 0x00000016:
			Function_402(&(Param0[2218]), 10, 1, 50.0f, 10, 100.0f, 50, 150.0f, 1, 1042, 1043, 1044);
			break;
		
		case 0x00000017:
			Function_402(&(Param0[2318]), 10, 500, 50.0f, 1000, 100.0f, 5000, 150.0f, 1, 1045, 1046, 1047);
			break;
		
		case 0x00000018:
			Function_402(&(Param0[2418]), 24, 1000, 50.0f, 2500, 100.0f, 7500, 150.0f, 1, 1051, 1052, 1053);
			break;
		
		case 0x0000000A:
			break;
		
		case 0x0000000B:
			Function_389(&Param0[1118] + 4, &Param0[1118] + 8, &Param0[1118] + 12, &uVar0);
			break;
		
		case 0x0000000C:
			break;
		
		case 0x0000000D:
			Function_371(&Param0[1318] + 4, &Param0[1318] + 8, &Param0[1318] + 12, &uVar0);
			break;
		
		case 0x0000000E:
			Function_352(&(Param0[iParam118]), 372, 0, 16090, 50.0f, 80450, 100.0f, 160900, 150.0f, 1, 4001);
			break;
		
		case 0x0000000F:
			Function_352(&(Param0[iParam118]), 373, 0, 48270, 50.0f, 241350, 100.0f, 482700, 150.0f, 1, 4002);
			break;
		
		case 0x00000010:
			Function_352(&(Param0[iParam118]), 382, 0, 3218, 50.0f, 32180, 100.0f, 321800, 150.0f, 1, 4005);
			break;
		
		case 0x00000011:
			Function_352(&(Param0[iParam118]), 376, 0, 3218, 50.0f, 40225, 100.0f, 402250, 150.0f, 1, 4003);
			break;
		
		case 0x00000012:
			Function_352(&(Param0[iParam118]), 130, 0, 25, 50.0f, 50, 100.0f, 100, 150.0f, 1, 4007);
			break;
		
		case 0x00000013:
			Function_352(&(Param0[iParam118]), 133, 0, 25, 50.0f, 50, 100.0f, 100, 150.0f, 1, 4006);
			break;
		
		case 0x00000015:
			Function_352(&(Param0[iParam118]), 385, 0, 25, 50.0f, 50, 100.0f, 100, 150.0f, 1, 4008);
			break;
		
		case 0x00000014:
			Function_352(&(Param0[iParam118]), 379, 0, 25, 50.0f, 50, 100.0f, 100, 150.0f, 1, 4004);
			break;
		
		default:
			LOG_ERROR("UPDATE_AMBIENT_MISSION: Unhandled ambient mission. You probably need to add this new mission.");
			return 0;
			break;
	}
	return 1;
}

void Function_352(var uParam0, int iParam1, int iParam2, int iParam3, float fParam4, int iParam5, float fParam6, int iParam7, float fParam8, int iParam9, int iParam10) //Position: 0x1A52A / 107818
{
	if (Global_131807.f_1316 > iParam2)
	{
		Function_353(&uParam0, iParam1, iParam3, fParam4, iParam5, fParam6, iParam7, fParam8, &iParam9, &iParam10);
	}
}

void Function_353(vector3 vParam0, int iParam9) //Position: 0x1A558 / 107864
{
	switch (vParam0.z)
	{
		case 0x00000000:
			switch (vParam0.y)
			{
				case 0x00000000:
					Function_369(&vParam0, iParam1);
					break;
				
				case 0x00000001:
					Function_367(&vParam0, iParam1, uParam2);
					break;
				
				case 0x00000002:
					Function_366(&vParam0, 1, bParam3, &bParam8, 4294967295, 0);
					break;
			}
			break;
		
		case 0x00000001:
			switch (vParam0.y)
			{
				case 0x00000000:
					Function_363(&vParam0, 0.0f, iParam1);
					break;
				
				case 0x00000001:
					Function_367(&vParam0, iParam1, iParam4);
					break;
				
				case 0x00000002:
					Function_366(&vParam0, 2, bParam5, &bParam8, 4294967295, 0);
					break;
			}
			break;
		
		case 0x00000002:
			switch (vParam0.y)
			{
				case 0x00000000:
					Function_363(&vParam0, 0.0f, iParam1);
					break;
				
				case 0x00000001:
					Function_367(&vParam0, iParam1, iParam6);
					break;
				
				case 0x00000002:
					Function_354(&vParam0, bParam7, &iParam9, 0);
					break;
			}
			break;
	}
}

void Function_354(struct<13> Param0) //Position: 0x1A654 / 108116
{
	Function_330(Param0, 1);
	Param0.f_8 = 10;
	Param0.f_4 = 2;
	Param0.f_12 = 1.0f;
	SET_JOURNAL_ENTRY_PROGRESS(Function_323(Param0), 1.0f, false, 0);
	Function_319(Param0);
	if (!IS_STRING_VALID(&iParam3))
	{
		iParam3 = "SC_Travel_Icon_128";
	}
	Function_357(&Global_78078[Param018] + 16, CEIL(bParam1), &iParam3);
	if (&iParam2 != 4294967295)
	{
		Function_355(&iParam2);
	}
	Function_276();
}

void Function_355(int iParam0) //Position: 0x1A6D4 / 108244
{
	Function_356(iParam0, 1);
	return;
}

void Function_356(int iParam0, bool bParam1) //Position: 0x1A6E0 / 108256
{
	int iVar0;
	
	iVar0 = (iParam0 % 1000);
	if (&bParam1)
	{
		Function_124(&Global_132499 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_175((iVar0 % 32)));
	}
	else
	{
		Function_93(&Global_132499 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_175((iVar0 % 32)));
	}
	return;
}

void Function_357(var uParam0, bool bParam1, int iParam2) //Position: 0x1A737 / 108343
{
	var uVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	
	uVar0 = Function_362();
	iVar1 = 0;
	if (DECOR_GET_INT_VERBOSE(&uVar0, Function_361(), &iVar1))
	{
		iVar2 = iVar1 & 1023;
	}
	Var3 = { StackVal, StackVal, StackVal, Function_360(iVar2) };
	DECOR_SET_INT(&uVar0, &Var3, STRING_TO_HASH(&uParam0));
	Var3 = { StackVal, StackVal, StackVal, Function_359(iVar2) };
	DECOR_SET_INT(&uVar0, &Var3, STRING_TO_HASH(&iParam2));
	Var3 = { StackVal, StackVal, StackVal, Function_358(iVar2) };
	DECOR_SET_INT(&uVar0, &Var3, bParam1);
	DECOR_SET_INT(&uVar0, Function_361(), iVar1 + 1);
	return;
}

struct<16> Function_358(int iParam0) //Position: 0x1A7B1 / 108465
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_X", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_359(int iParam0) //Position: 0x1A7D2 / 108498
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_T", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_360(int iParam0) //Position: 0x1A7F3 / 108531
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_H", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_361() //Position: 0x1A814 / 108564
{
	return "CQueue_Count";
}

var Function_362() //Position: 0x1A829 / 108585
{
	if (!IS_LAYOUTREF_VALID(&Global_124161))
	{
		Global_124161 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return &Global_124161;
}

void Function_363(struct<5> Param0) //Position: 0x1A85B / 108635
{
	Function_327(Param0);
	Function_324(Param0, 0);
	SET_JOURNAL_ENTRY_PROGRESS(Function_323(Param0), &iParam1, false, 0);
	if (&iParam2 != 4294967295)
	{
		Function_364(Param0, 1, &iParam2);
	}
	Param0.f_4 = 1;
	return;
}

void Function_364(int iParam0, int iParam1, int iParam2) //Position: 0x1A897 / 108695
{
	Function_336(iParam0, iParam1, (Function_111(iParam2) - Function_365(iParam0, iParam1)), 0);
	return;
}

float Function_365(int iParam0, bool bParam1) //Position: 0x1A8B3 / 108723
{
	if (0 | Global_53524.f_44)
	{
		return (*&Global_78078[iParam018] + 44)[bParam1];
	}
	return (*&Global_77932[iParam018] + 44)[bParam1];
}

void Function_366(struct<13> Param0) //Position: 0x1A8E3 / 108771
{
	var uVar0;
	
	if (&bParam3)
	{
	}
	if (!IS_STRING_VALID(&iParam5))
	{
		iParam5 = "SC_Travel_Icon_128";
	}
	memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, Function_321(Param0), 4);
	Function_357(&uVar0, CEIL(bParam2), &iParam5);
	Param0.f_8 = iParam1;
	Param0.f_4 = 0;
	Param0.f_12 = 0.0f;
	if (&iParam4 != 4294967295)
	{
		Function_355(&iParam4);
	}
	Function_276();
}

void Function_367(struct<5> Param0) //Position: 0x1A94F / 108879
{
	bool bVar0;
	char* cVar1;
	float fVar2;
	
	Function_95();
	bVar0 = Function_368((Function_111(iParam1) - Function_334(Param0, 1, 0)), Param0, 1);
	if (bVar0 <= IntToFloat(iParam2))
	{
		Param0.f_4 = 2;
	}
	else
	{
		cVar1 = Function_323(Param0);
		fVar2 = (bVar0 / IntToFloat(iParam2));
		if (fVar2 < GET_JOURNAL_ENTRY_PROGRESS(cVar1))
		{
			SET_JOURNAL_ENTRY_PROGRESS(cVar1, fVar2, Function_326(Param0, 4), 0);
		}
	}
	return;
}

bool Function_368(float fParam0, int iParam1, bool bParam2) //Position: 0x1A9AF / 108975
{
	if (0 | Global_53524.f_44)
	{
		(*&Global_78078[iParam118] + 44)[bParam2] = fParam0;
		return (*&Global_78078[iParam118] + 44)[bParam2];
	}
	(*&Global_77932[iParam118] + 44)[bParam2] = fParam0;
	return (*&Global_77932[iParam118] + 44)[bParam2];
}

void Function_369(struct<5> Param0) //Position: 0x1A9FF / 109055
{
	Function_327(Param0);
	if (Function_370())
	{
		if (!Function_326(Param0, 2))
		{
			if (Param0 == 22)
			{
				Function_325(Param0, 2);
			}
			Function_324(Param0, 0);
			SET_JOURNAL_ENTRY_PROGRESS(Function_323(Param0), 0.0f, false, 0);
			if (&iParam1 != 4294967295)
			{
				Function_364(Param0, 1, &iParam1);
			}
		}
		Param0.f_4 = 1;
	}
	return;
}

bool Function_370() //Position: 0x1AA5C / 109148
{
	if (!HUD_IS_FADING() && !HUD_IS_FADED())
	{
		return 1;
	}
	return 0;
}

void Function_371(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x1AA71 / 109169
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	float fVar4;
	bool bVar5;
	
	switch (uParam1)
	{
		case 0x00000000:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(13);
					if (Function_370() && Global_131807.f_1316 <= 21)
					{
						if (!Function_326(13, 2))
						{
							Function_324(13, 0);
							Function_325(13, 2);
							SET_JOURNAL_ENTRY_PROGRESS(Function_323(13), 0.0f, false, 0);
						}
						uParam0 = 1;
					}
					break;
				
				case 0x00000001:
					if (!Function_446() && Global_131807.f_1316 <= 21)
					{
						bVar1 = Function_388(2, &bParam3, 1);
					}
					if (bVar1 >= 0)
					{
						iVar0 = (GET_OBJECTSET_SIZE(&bParam3) - bVar1);
						while (Function_273(&bParam3, &iVar0, &bVar2))
						{
							if (IS_OBJECT_VALID(&bVar2))
							{
								uVar3 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&bVar2)));
								if (IS_ACTOR_VALID(&uVar3))
								{
									if ((IS_ACTOR_PLAYER(&uVar3) && !IS_ACTOR_LOCAL_PLAYER(&uVar3)) && !Function_382(GET_ACTOR_SLOT(&uVar3)))
									{
										if (Function_381(&Global_132965, FIRE_FIND_HANDLE_FROM_ATTACHED_ACTOR(&uVar3)))
										{
											Function_331(13, 1);
											uParam0 = 2;
										}
										else
										{
											Function_380(&Global_132965, FIRE_FIND_HANDLE_FROM_ATTACHED_ACTOR(&uVar3));
										}
									}
									else
									{
										Function_341(&bParam3, &bVar2);
										iVar0 = (iVar0 - 1);
									}
								}
								else
								{
									Function_341(&bParam3, &bVar2);
									iVar0 = (iVar0 - 1);
								}
							}
						}
					}
					if (Function_379(&Global_132965))
					{
						Function_295(&bParam3);
					}
					break;
				
				case 0x00000002:
					Function_378(&(Global_78078[1318]), 1, 250.0f, 1, 0);
					Function_295(&bParam3);
					break;
			}
			break;
		
		case 0x00000001:
			switch (uParam0)
			{
				case 0x00000000:
					Function_377(&(Global_78078[1318]), 5, 25, 250.0f);
					break;
				
				case 0x00000001:
					if (!Function_446() && Global_131807.f_1316 <= 21)
					{
						bVar1 = Function_388(2, &bParam3, 1);
					}
					if (bVar1 >= 0)
					{
						iVar0 = (GET_OBJECTSET_SIZE(&bParam3) - bVar1);
						while (Function_273(&bParam3, &iVar0, &bVar2))
						{
							if (IS_OBJECT_VALID(&bVar2))
							{
								uVar3 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&bVar2)));
								if (IS_ACTOR_VALID(&uVar3))
								{
									if ((IS_ACTOR_PLAYER(&uVar3) && !IS_ACTOR_LOCAL_PLAYER(&uVar3)) && !Function_382(GET_ACTOR_SLOT(&uVar3)))
									{
										if (Function_381(&Global_132965, FIRE_FIND_HANDLE_FROM_ATTACHED_ACTOR(&uVar3)))
										{
											bVar5 = true;
										}
										else
										{
											Function_380(&Global_132965, FIRE_FIND_HANDLE_FROM_ATTACHED_ACTOR(&uVar3));
										}
									}
									else
									{
										Function_341(&bParam3, &bVar2);
										iVar0 = (iVar0 - 1);
									}
								}
								else
								{
									Function_341(&bParam3, &bVar2);
									iVar0 = (iVar0 - 1);
								}
							}
						}
					}
					if (bVar5)
					{
						bVar1 = Function_342(&bParam3, 13);
						if (bVar1 > 3)
						{
							uParam0 = 2;
						}
					}
					if (Function_379(&Global_132965))
					{
						Function_295(&bParam3);
					}
					break;
				
				case 0x00000002:
					Function_378(&(Global_78078[1318]), 2, 250.0f, 1, 0);
					Function_295(&bParam3);
					break;
			}
			break;
		
		case 0x00000002:
			switch (uParam0)
			{
				case 0x00000000:
					Function_377(&(Global_78078[1318]), 25, 50, 250.0f);
					break;
				
				case 0x00000001:
					fVar4 = Function_335(13);
					if (!Function_446() && Global_131807.f_1316 <= 1)
					{
						bVar1 = Function_274(2, &bParam3, 1);
					}
					if (bVar1 >= 0)
					{
						iVar0 = (GET_OBJECTSET_SIZE(&bParam3) - bVar1);
						while (Function_273(&bParam3, &iVar0, &bVar2))
						{
							if (IS_OBJECT_VALID(&bVar2))
							{
								uVar3 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&bVar2)));
								if (IS_ACTOR_VALID(&uVar3))
								{
									if (!IS_ACTOR_PLAYER(&uVar3) || IS_ACTOR_LOCAL_PLAYER(&uVar3))
									{
										Function_341(&bParam3, &bVar2);
										iVar0 = (iVar0 - 1);
									}
									else if (!Function_272(&bVar2) != 23)
									{
										Function_341(&bParam3, &bVar2);
										iVar0 = (iVar0 - 1);
									}
									else if (!Function_373(GET_ACTOR_SLOT(&uVar3), 1, 1))
									{
										Function_341(&bParam3, &bVar2);
										iVar0 = (iVar0 - 1);
									}
								}
								else
								{
									Function_341(&bParam3, &bVar2);
									iVar0 = (iVar0 - 1);
								}
							}
						}
					}
					bVar1 = Function_342(&bParam3, 13);
					if (bVar1 <= 1 && Function_343(13, 1) == 1)
					{
						Function_328(13, 1, 1);
					}
					else if (bVar1 >= 4294967295)
					{
						if (bVar1 >= 0)
						{
							uParam2 = (TO_FLOAT(bVar1) / 1.0f);
							if (uParam2 == fVar4)
							{
								SET_JOURNAL_ENTRY_PROGRESS(Function_323(13), uParam2, false, 0);
							}
						}
					}
					if (Function_343(13, 1) == 1)
					{
						uParam0 = 2;
					}
					break;
				
				case 0x00000002:
					Function_372(&(Global_78078[1318]), 250.0f, 0);
					Function_295(&bParam3);
					SET_WEAPON_GOLD(Function_28(), 23, 1);
					Global_131725[23] = 1;
					Function_355(2011);
					break;
			}
			break;
	}
}

void Function_372(struct<13> Param0) //Position: 0x1AECD / 110285
{
	Function_330(Param0, 1);
	Param0.f_8 = 10;
	Param0.f_4 = 2;
	Param0.f_12 = 1.0f;
	SET_JOURNAL_ENTRY_PROGRESS(Function_323(Param0), 1.0f, false, 0);
	Function_319(Param0);
	if (!IS_STRING_VALID(&iParam2))
	{
		iParam2 = "challenge_01_128";
	}
	Function_357(&Global_78078[Param018] + 16, CEIL(bParam1), &iParam2);
	Function_276();
	return;
}

bool Function_373(bool bParam0, int iParam1, bool bParam2) //Position: 0x1AF3C / 110396
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_376(iParam1, &bParam2);
	}
	if (!Function_375(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_374(iParam1), 64);
		stradd(&cVar0, " bit from bad slot ", 64);
		stradd(&cVar0, I2STR(bParam0), 64);
	}
	iVar16 = (Global_120101[bParam088].f_196 && iParam1);
	if (&bParam2)
	{
		return iVar16 != iParam1;
	}
	return iVar16 == 0;
}

var Function_374(int iParam0) //Position: 0x1AFBF / 110527
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

bool Function_375(bool bParam0) //Position: 0x1B0B1 / 110769
{
	char* cVar0[64];
	
	if (bParam0 > 0 || bParam0 <= 16)
	{
		strcpy(&cVar0, "TRIED TO USE IS_SLOT_DATA_VALID WITH BAD INDEX ", 64);
		stradd(&cVar0, I2STR(bParam0), 64);
		stradd(&cVar0, "!", 64);
		return 0;
	}
	if ((*&Global_123163 + 96)[bParam0] > Global_123163.f_92)
	{
		(*&Global_123163 + 96)[bParam0] = Global_123163.f_92;
		(&Global_123163 + 96[bParam0])->f_4 = _IS_CLIENT_DATA_VALID_FOR_SLOT(&Global_120101, bParam0);
	}
	return StackVal;
}

var Function_376(int iParam0, bool bParam1) //Position: 0x1B152 / 110930
{
	int iVar0;
	
	iVar0 = (Global_122919.f_196 && iParam0);
	if (&bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

void Function_377(struct<5> Param0) //Position: 0x1B173 / 110963
{
	Function_327(Param0);
	Function_324(Param0, 0);
	if (&iParam2 != 0)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Function_323(Param0), (TO_FLOAT(bParam1) / TO_FLOAT(&iParam2)), false, 0);
	}
	else
	{
		LOG_ERROR("Divide by zero attempt in MP_WEAPON_CHALLENGE_LEVEL_START.... ya thats bad bail out");
		SET_JOURNAL_ENTRY_PROGRESS(Function_323(Param0), 0.0f, false, 0);
	}
	if (&fParam3 != 0.0f)
	{
	}
	Param0.f_4 = 1;
}

void Function_378(struct<13> Param0) //Position: 0x1B220 / 111136
{
	var uVar0;
	
	Function_330(Param0, &bParam3);
	if (!IS_STRING_VALID(&iParam4))
	{
		iParam4 = "challenge_01_128";
	}
	memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, Function_321(Param0), 4);
	Function_357(&uVar0, CEIL(bParam2), &iParam4);
	Param0.f_8 = iParam1;
	Param0.f_4 = 0;
	Param0.f_12 = 0.0f;
	Function_329(Param0, 4);
	Function_276();
}

bool Function_379(int[] iParam0) //Position: 0x1B289 / 111241
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 10)
	{
		if (FIRE_IS_HANDLE_VALID(&(iParam0[iVar0])))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void Function_380(var[] uParam0, int iParam1) //Position: 0x1B2B3 / 111283
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 10)
	{
		if (!FIRE_IS_HANDLE_VALID(&(uParam0[iVar0])))
		{
			uParam0[iVar0] = &iParam1;
			return;
		}
		iVar0++;
	}
	return;
}

bool Function_381(var[] uParam0, int iParam1) //Position: 0x1B2E7 / 111335
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 10)
	{
		if (&uParam0[iVar0] == &iParam1)
		{
			return 1;
		}
		if (FIRE_IS_HANDLE_VALID(&(uParam0[iVar0])))
		{
		}
		iVar0++;
	}
	return 0;
}

bool Function_382(bool bParam0) //Position: 0x1B322 / 111394
{
	if (Function_384(bParam0, 1, 0) != 4294967295 && Function_383() != 4294967295)
	{
		return 0;
	}
	return Function_384(bParam0, 1, 0) != Function_383();
}

int Function_383() //Position: 0x1B34A / 111434
{
	return 4294967295;
	return Function_384(GET_LOCAL_SLOT(), 1, 0);
}

int Function_384(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1B35A / 111450
{
	if (&bParam1)
	{
		if (!IS_SLOT_VALID(bParam0))
		{
			return 4294967295;
		}
		if (&bParam2)
		{
			if (Function_375(bParam0))
			{
				if (!Function_385(bParam0, 2048, 1))
				{
					return 4294967295;
				}
			}
			return 4294967295;
		}
	}
	return (*&Global_123099 + 24)[bParam0];
}

bool Function_385(bool bParam0, int iParam1, bool bParam2) //Position: 0x1B3A0 / 111520
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_387(iParam1, &bParam2);
	}
	if (!Function_375(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_386(iParam1), 64);
		stradd(&cVar0, " bit from bad slot ", 64);
		stradd(&cVar0, I2STR(bParam0), 64);
	}
	iVar16 = (Global_120101[bParam088].f_192 && iParam1);
	if (&bParam2)
	{
		return iVar16 != iParam1;
	}
	return iVar16 == 0;
}

var Function_386(int iParam0) //Position: 0x1B423 / 111651
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

bool Function_387(int iParam0, bool bParam1) //Position: 0x1B73C / 112444
{
	int iVar0;
	
	iVar0 = (Global_122919.f_192 && iParam0);
	if (&bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

int Function_388(int iParam0, bool bParam1, bool bParam2) //Position: 0x1B75D / 112477
{
	var uVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	bool bVar6;
	
	if (!IS_OBJECTSET_VALID(&bParam1))
	{
		LOG_ERROR("AM_COLLECT_PLAYER_EVENTS_OF_TYPE_ON_ACTORENUM: invalid objectset passed as EventCollection");
		return 4294967295;
	}
	if (!IS_ACTOR_VALID(Function_28()))
	{
		return 4294967295;
	}
	uVar0 = Function_259();
	iVar1 = 0;
	iVar2 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar2))
	{
		if (!IS_OBJECT_IN_OBJECTSET(&iVar2, &bParam1))
		{
			if (GET_EVENT_TYPE(GET_EVENT_FROM_OBJECT(&iVar2)) == iParam0)
			{
				uVar3 = GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&iVar2));
				uVar4 = GET_ACTOR_FROM_OBJECT(&uVar3);
				if (IS_ACTOR_VALID(&uVar4))
				{
					if (FIRE_IS_HANDLE_VALID(FIRE_FIND_HANDLE_FROM_ATTACHED_ACTOR(&uVar4)))
					{
						uVar5 = FIRE_GET_OWNER(FIRE_FIND_HANDLE_FROM_ATTACHED_ACTOR(&uVar4));
						if (IS_ACTOR_VALID(&uVar5))
						{
							if (IS_ACTOR_LOCAL_PLAYER(&uVar5))
							{
								if (DECOR_CHECK_EXIST(&iVar2, "AM_NO_PURGE"))
								{
									bVar6 = DECOR_GET_INT(&iVar2, "AM_NO_PURGE");
									bVar6++;
								}
								else
								{
									bVar6 = true;
								}
								DECOR_SET_INT(&iVar2, "AM_NO_PURGE", bVar6);
								if (&bParam2)
								{
									ADD_OBJECT_TO_OBJECTSET(&iVar2, &bParam1);
								}
								iVar1++;
							}
						}
					}
				}
			}
		}
		iVar2 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	return iVar1;
}

void Function_389(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x1B8D6 / 112854
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	var uVar4;
	float fVar5;
	
	switch (uParam1)
	{
		case 0x00000000:
			switch (uParam0)
			{
				case 0x00000000:
					if (Function_370() && Global_131807.f_1316 <= 14)
					{
						if (!Function_326(11, 2))
						{
							Function_324(11, 0);
							Function_325(11, 2);
							SET_JOURNAL_ENTRY_PROGRESS(Function_323(11), 0.0f, false, 0);
						}
						uParam0 = 1;
					}
					break;
				
				case 0x00000001:
					fVar5 = Function_335(11);
					iVar2 = Function_342(&bParam3, 11);
					if (!Function_446() && Global_131807.f_1316 <= 14)
					{
						bVar1 = Function_274(2, &bParam3, 1);
					}
					if (bVar1 >= 0)
					{
						iVar0 = (GET_OBJECTSET_SIZE(&bParam3) - bVar1);
						while (Function_273(&bParam3, &iVar0, &bVar3))
						{
							if (IS_OBJECT_VALID(&bVar3))
							{
								uVar4 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&bVar3)));
								if (IS_ACTOR_VALID(&uVar4))
								{
									if ((IS_ACTOR_PLAYER(&uVar4) && !IS_ACTOR_LOCAL_PLAYER(&uVar4)) && !Function_382(GET_ACTOR_SLOT(&uVar4)))
									{
										if (!Function_272(&bVar3) != 24)
										{
											Function_341(&bParam3, &bVar3);
											iVar0 = (iVar0 - 1);
										}
									}
									else
									{
										Function_341(&bParam3, &bVar3);
										iVar0 = (iVar0 - 1);
									}
								}
								else
								{
									Function_341(&bParam3, &bVar3);
									iVar0 = (iVar0 - 1);
								}
							}
						}
					}
					bVar1 = Function_342(&bParam3, 11);
					if ((bVar1 - iVar2) >= 0)
					{
						Function_399(&iLocal_0, 2.0f);
					}
					if (Function_398(&iLocal_0))
					{
						if (Function_390(&iLocal_0))
						{
							Function_295(&bParam3);
							Function_330(11, 1);
							Function_327(11);
							uParam2 = 0.0f;
							SET_JOURNAL_ENTRY_PROGRESS(Function_323(11), 0.0f, false, 0);
						}
						else if (bVar1 > 2)
						{
							uParam0 = 2;
						}
						else if (bVar1 >= 4294967295)
						{
							uParam2 = (TO_FLOAT(bVar1) / 2.0f);
							if (uParam2 == fVar5)
							{
								SET_JOURNAL_ENTRY_PROGRESS(Function_323(11), uParam2, false, 0);
							}
						}
					}
					break;
				
				case 0x00000002:
					Function_378(&(Global_78078[1118]), 1, 250.0f, 1, 0);
					Function_295(&bParam3);
					break;
			}
			break;
		
		case 0x00000001:
			switch (uParam0)
			{
				case 0x00000000:
					Function_377(&(Global_78078[1118]), 0, 3, 250.0f);
					break;
				
				case 0x00000001:
					fVar5 = Function_335(11);
					iVar2 = Function_342(&bParam3, 11);
					if (!Function_446() && Global_131807.f_1316 <= 14)
					{
						bVar1 = Function_274(2, &bParam3, 1);
					}
					if (bVar1 >= 0)
					{
						iVar0 = (GET_OBJECTSET_SIZE(&bParam3) - bVar1);
						while (Function_273(&bParam3, &iVar0, &bVar3))
						{
							if (IS_OBJECT_VALID(&bVar3))
							{
								uVar4 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&bVar3)));
								if (IS_ACTOR_VALID(&uVar4))
								{
									if ((IS_ACTOR_PLAYER(&uVar4) && !IS_ACTOR_LOCAL_PLAYER(&uVar4)) && !Function_382(GET_ACTOR_SLOT(&uVar4)))
									{
										if (!Function_272(&bVar3) != 24)
										{
											Function_341(&bParam3, &bVar3);
											iVar0 = (iVar0 - 1);
										}
									}
									else
									{
										Function_341(&bParam3, &bVar3);
										iVar0 = (iVar0 - 1);
									}
								}
								else
								{
									Function_341(&bParam3, &bVar3);
									iVar0 = (iVar0 - 1);
								}
							}
						}
					}
					bVar1 = Function_342(&bParam3, 11);
					if ((bVar1 - iVar2) >= 0)
					{
						Function_399(&iLocal_0, 2.0f);
					}
					if (Function_398(&iLocal_0))
					{
						if (Function_390(&iLocal_0))
						{
							Function_295(&bParam3);
							Function_330(11, 1);
							Function_327(11);
							uParam2 = 0.0f;
						}
						else if (bVar1 > 3)
						{
							uParam0 = 2;
						}
						else if (bVar1 >= 4294967295)
						{
							uParam2 = (TO_FLOAT(bVar1) / 3.0f);
							if (uParam2 == fVar5)
							{
								SET_JOURNAL_ENTRY_PROGRESS(Function_323(11), uParam2, false, 0);
							}
						}
					}
					else if (bVar1 >= 4294967295)
					{
						uParam2 = (TO_FLOAT(bVar1) / 3.0f);
						if (uParam2 == fVar5)
						{
							SET_JOURNAL_ENTRY_PROGRESS(Function_323(11), uParam2, false, 0);
						}
					}
					break;
				
				case 0x00000002:
					Function_378(&(Global_78078[1118]), 2, 250.0f, 1, 0);
					Function_295(&bParam3);
					break;
			}
			break;
		
		case 0x00000002:
			switch (uParam0)
			{
				case 0x00000000:
					Function_377(&(Global_78078[1118]), 0, 1, 250.0f);
					break;
				
				case 0x00000001:
					fVar5 = Function_335(11);
					if (!Function_446() && Global_131807.f_1316 <= 14)
					{
						bVar1 = Function_274(2, &bParam3, 1);
					}
					if (bVar1 >= 0)
					{
						iVar0 = (GET_OBJECTSET_SIZE(&bParam3) - bVar1);
						while (Function_273(&bParam3, &iVar0, &bVar3))
						{
							if (IS_OBJECT_VALID(&bVar3))
							{
								uVar4 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&bVar3)));
								if (IS_ACTOR_VALID(&uVar4))
								{
									if (!IS_ACTOR_PLAYER(&uVar4) || IS_ACTOR_LOCAL_PLAYER(&uVar4))
									{
										Function_341(&bParam3, &bVar3);
										iVar0 = (iVar0 - 1);
									}
									else if (!Function_272(&bVar3) != 24)
									{
										Function_341(&bParam3, &bVar3);
										iVar0 = (iVar0 - 1);
									}
									else if (!Function_373(GET_ACTOR_SLOT(&uVar4), 1, 1))
									{
										Function_341(&bParam3, &bVar3);
										iVar0 = (iVar0 - 1);
									}
								}
								else
								{
									Function_341(&bParam3, &bVar3);
									iVar0 = (iVar0 - 1);
								}
							}
						}
					}
					bVar1 = Function_342(&bParam3, 11);
					if (bVar1 <= 1 && Function_343(11, 1) == 1)
					{
						Function_328(11, 1, 1);
					}
					else if (bVar1 >= 4294967295)
					{
						if (bVar1 >= 0)
						{
							uParam2 = (TO_FLOAT(bVar1) / 1.0f);
							if (uParam2 == fVar5)
							{
								SET_JOURNAL_ENTRY_PROGRESS(Function_323(11), uParam2, false, 0);
							}
						}
					}
					if (Function_343(11, 1) == 1)
					{
						uParam0 = 2;
					}
					break;
				
				case 0x00000002:
					Function_372(&(Global_78078[1118]), 250.0f, 0);
					SET_WEAPON_GOLD(Function_28(), 24, 1);
					Global_131725[24] = 1;
					Function_355(2007);
					break;
			}
			break;
	}
}

bool Function_390(int iParam0) //Position: 0x1BE20 / 114208
{
	if (Function_392(&iParam0))
	{
		Function_391(&iParam0);
		return 1;
	}
	return 0;
}

void Function_391(vector3 vParam0) //Position: 0x1BE38 / 114232
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

bool Function_392(int iParam0) //Position: 0x1BE4F / 114255
{
	if (Function_398(&iParam0))
	{
		if (Function_393(&iParam0) >= 0.0f)
		{
			return 1;
		}
	}
	return 0;
}

float Function_393(int iParam0) //Position: 0x1BE6C / 114284
{
	return -Function_394(&iParam0);
}

float Function_394(vector3 vParam0) //Position: 0x1BE79 / 114297
{
	if (Function_398(&vParam0))
	{
		if (Function_397(&vParam0))
		{
			return vParam0.z;
		}
		Function_395();
		return (0.0f - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of NETTIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of NETTIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

void Function_395() //Position: 0x1BF4D / 114509
{
	if (!Function_396())
	{
	}
	return;
}

bool Function_396() //Position: 0x1BF5A / 114522
{
	return 0;
}

bool Function_397(int iParam0) //Position: 0x1BF61 / 114529
{
	return Function_8(iParam0, 2);
}

bool Function_398(int iParam0) //Position: 0x1BF6F / 114543
{
	return Function_8(iParam0, 1);
}

void Function_399(var uParam0, float fParam1) //Position: 0x1BF7D / 114557
{
	Function_400(&uParam0, -fParam1);
	return;
}

void Function_400(var uParam0, float fParam1) //Position: 0x1BF8C / 114572
{
	Function_395();
	Function_401(&uParam0, (0.0f - fParam1));
	return;
}

void Function_401(vector3 vParam0) //Position: 0x1BF9F / 114591
{
	vParam0.y = bParam1;
	Function_124(&vParam0, 1);
	Function_93(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_402(var uParam0, int iParam1, int iParam2, float fParam3, int iParam4, float fParam5, int iParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11) //Position: 0x1BFC0 / 114624
{
	if (Global_131807.f_1316 > iParam1)
	{
		Function_403(&uParam0, iParam2, fParam3, iParam4, fParam5, iParam6, fParam7, &iParam8 != 1, &iParam9, &iParam10, &iParam11);
	}
}

void Function_403(vector3 vParam0, int iParam9, var uParam10) //Position: 0x1BFF4 / 114676
{
	switch (vParam0.z)
	{
		case 0x00000000:
			switch (vParam0.y)
			{
				case 0x00000000:
					Function_369(&vParam0, 4294967295);
					break;
				
				case 0x00000001:
					if (vParam0 == 22)
					{
						Function_410(&vParam0, uParam1);
					}
					else if (vParam0 == 23)
					{
						Function_409(&vParam0, uParam1);
					}
					else if (vParam0 == 24)
					{
						Function_405(&vParam0, uParam1);
					}
					break;
				
				case 0x00000002:
					Function_366(&vParam0, 1, uParam2, &bParam7, &uParam8, Function_404());
					break;
			}
			break;
		
		case 0x00000001:
			switch (vParam0.y)
			{
				case 0x00000000:
					Function_363(&vParam0, 0, 4294967295);
					break;
				
				case 0x00000001:
					if (vParam0 == 22)
					{
						Function_410(&vParam0, bParam3);
					}
					else if (vParam0 == 23)
					{
						Function_409(&vParam0, bParam3);
					}
					else if (vParam0 == 24)
					{
						Function_405(&vParam0, bParam3);
					}
					break;
				
				case 0x00000002:
					Function_366(&vParam0, 2, bParam4, &bParam7, &iParam9, Function_404());
					break;
			}
			break;
		
		case 0x00000002:
			switch (vParam0.y)
			{
				case 0x00000000:
					Function_363(&vParam0, 0, 4294967295);
					break;
				
				case 0x00000001:
					if (vParam0 == 22)
					{
						Function_410(&vParam0, bParam5);
					}
					else if (vParam0 == 23)
					{
						Function_409(&vParam0, bParam5);
					}
					else if (vParam0 == 24)
					{
						Function_405(&vParam0, bParam5);
					}
					break;
				
				case 0x00000002:
					Function_354(&vParam0, uParam6, &uParam10, Function_404());
					break;
			}
			break;
	}
}

int Function_404() //Position: 0x1C186 / 115078
{
	return "challenge_04_128";
}

void Function_405(struct<5> Param0) //Position: 0x1C19F / 115103
{
	bool bVar0;
	bool bVar1;
	
	if (NET_GET_POSSE_COUNT() > 2)
	{
		if (Function_408() > bParam1)
		{
			bVar1 = false;
			bVar0 = false;
			while (bVar0 <= 16)
			{
				if (!bVar1)
				{
					if (IS_SLOT_VALID(bVar0))
					{
						if (Function_407(GET_LOCAL_SLOT(), bVar0))
						{
							if (!Function_406(bVar0) < bParam1)
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
				Param0.f_4 = 2;
			}
		}
	}
	return;
}

int Function_406(bool bParam0) //Position: 0x1C1FE / 115198
{
	return 4294967295;
	if (!IS_SLOT_VALID(bParam0))
	{
		return 4294967295;
	}
	return Global_120101[bParam088].f_172;
}

bool Function_407(int iParam0, int iParam1) //Position: 0x1C21B / 115227
{
	int iVar0;
	int iVar1;
	
	iVar0 = NET_GET_GAMER_POSSE_LEADER(iParam0);
	iVar1 = NET_GET_GAMER_POSSE_LEADER(iParam1);
	if (iVar0 != iVar1 && iVar0 < 4294967295)
	{
		return 1;
	}
	return 0;
}

int Function_408() //Position: 0x1C23F / 115263
{
	return Global_122919.f_172;
}

void Function_409(struct<5> Param0) //Position: 0x1C24B / 115275
{
	char* cVar0;
	float fVar1;
	
	if (Function_408() > bParam1)
	{
		Param0.f_4 = 2;
	}
	else
	{
		cVar0 = Function_323(Param0);
		fVar1 = (TO_FLOAT(Function_408()) / TO_FLOAT(bParam1));
		if (fVar1 == GET_JOURNAL_ENTRY_PROGRESS(cVar0))
		{
			SET_JOURNAL_ENTRY_PROGRESS(cVar0, fVar1, false, 0);
		}
	}
	return;
}

void Function_410(struct<37> Param0) //Position: 0x1C28D / 115341
{
	bool bVar0;
	char* cVar1;
	float fVar2;
	
	bVar0 = Param0.f_36;
	if (bVar0 <= 0)
	{
		bVar0 = false;
	}
	if (bVar0 <= bParam1)
	{
		if (Function_387(131072, 1))
		{
			if (Function_343(Param0, 2) != 1)
			{
				bVar0++;
				Param0.f_36++;
				Function_328(Param0, 1, bVar0);
				Function_328(Param0, 2, 1);
			}
		}
		else if (Function_343(Param0, 2) == 1)
		{
			Function_328(Param0, 2, 0);
		}
		if (bVar0 > bParam1)
		{
			Param0.f_4 = 2;
		}
		else
		{
			cVar1 = Function_323(Param0);
			fVar2 = (TO_FLOAT(bVar0) / TO_FLOAT(bParam1));
			if (fVar2 == GET_JOURNAL_ENTRY_PROGRESS(cVar1))
			{
				SET_JOURNAL_ENTRY_PROGRESS(cVar1, fVar2, false, 0);
			}
		}
	}
	return;
}

void Function_411(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x1C33B / 115515
{
	switch (uParam1)
	{
		case 0x00000000:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(9);
					if (Global_131807.f_1316 > 40)
					{
						uParam0 = 1;
					}
					break;
				
				case 0x00000001:
					if (!Function_424(&iLocal_17))
					{
						if (((Global_90238[943][05].f_20 || Global_90238[943][65].f_20) || Global_90238[943][15].f_20) || Global_90238[943][25].f_20)
						{
							Function_422(&iLocal_17);
						}
					}
					else if (Function_419(&iLocal_17, 86400.0f))
					{
						Function_295(&bParam3);
						Function_330(9, 1);
						Function_327(9);
						Function_258();
						Function_418(9);
						Function_417(&iLocal_17);
						uParam2 = 0.0f;
					}
					else
					{
						if (Global_90238[943][05].f_24 && !Function_343(9, 1) != 1)
						{
							Function_328(9, 1, 1);
							uParam2 = (GET_JOURNAL_ENTRY_PROGRESS(Function_323(9)) + 0,25f);
						}
						if (Global_90238[943][65].f_24 && !Function_343(9, 2) != 1)
						{
							Function_328(9, 2, 1);
							uParam2 = (GET_JOURNAL_ENTRY_PROGRESS(Function_323(9)) + 0,25f);
						}
						if (Global_90238[943][15].f_24 && !Function_343(9, 3) != 1)
						{
							Function_328(9, 3, 1);
							uParam2 = (GET_JOURNAL_ENTRY_PROGRESS(Function_323(9)) + 0,25f);
						}
						if (Global_90238[943][25].f_24 && !Function_343(9, 4) != 1)
						{
							Function_328(9, 4, 1);
							uParam2 = (GET_JOURNAL_ENTRY_PROGRESS(Function_323(9)) + 0,25f);
						}
						if (((Function_343(9, 1) != 1 && Function_343(9, 2) != 1) && Function_343(9, 3) != 1) && Function_343(9, 4) != 1)
						{
							Global_90238[943].f_328 = 1;
							Function_417(&iLocal_17);
						}
						if (Global_90238[943].f_336 && Global_90238[943].f_328)
						{
							uParam0 = 2;
						}
					}
					if (uParam2 == GET_JOURNAL_ENTRY_PROGRESS(Function_323(9)))
					{
						SET_JOURNAL_ENTRY_PROGRESS(Function_323(9), uParam2, false, 0);
					}
					break;
				
				case 0x00000002:
					uParam2 = 0.0f;
					Function_415(&bParam3, 9, &uParam1, 1, &uParam0, 0, 1061, 250.0f, Function_416());
					Function_418(9);
					break;
			}
			break;
		
		case 0x00000001:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(9);
					Function_324(9, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(9), 0.0f, false, 0);
					uParam0 = 1;
					break;
				
				case 0x00000001:
					if (!Function_424(&iLocal_17))
					{
						if (((Global_90238[943][05].f_20 || Global_90238[943][65].f_20) || Global_90238[943][15].f_20) || Global_90238[943][25].f_20)
						{
							Function_422(&iLocal_17);
						}
					}
					else if (Function_419(&iLocal_17, 129600.0f))
					{
						Function_295(&bParam3);
						Function_330(9, 1);
						Function_327(9);
						Function_258();
						Function_418(9);
						uParam2 = 0.0f;
						Function_417(&iLocal_17);
					}
					else
					{
						if ((StackVal && Global_90238[943][05].f_24 != 0) && !Function_343(9, 1) != 1)
						{
							Function_414(0, 9);
							Function_328(9, 1, 1);
							uParam2 = (GET_JOURNAL_ENTRY_PROGRESS(Function_323(9)) + 0,25f);
						}
						if ((StackVal && Global_90238[943][65].f_24 != 0) && !Function_343(9, 2) != 1)
						{
							Function_414(6, 9);
							Function_328(9, 2, 1);
							uParam2 = (GET_JOURNAL_ENTRY_PROGRESS(Function_323(9)) + 0,25f);
						}
						if ((StackVal && Global_90238[943][15].f_24 != 0) && !Function_343(9, 3) != 1)
						{
							Function_414(1, 9);
							Function_328(9, 3, 1);
							uParam2 = (GET_JOURNAL_ENTRY_PROGRESS(Function_323(9)) + 0,25f);
						}
						if ((StackVal && Global_90238[943][25].f_24 != 0) && !Function_343(9, 4) != 1)
						{
							Function_414(6, 9);
							Function_328(9, 4, 1);
							uParam2 = (GET_JOURNAL_ENTRY_PROGRESS(Function_323(9)) + 0,25f);
						}
						if (((Function_343(9, 1) != 1 && Function_343(9, 2) != 1) && Function_343(9, 3) != 1) && Function_343(9, 4) != 1)
						{
							Global_90238[943].f_328 = 1;
						}
						if (Global_90238[943].f_336 && Global_90238[943].f_328)
						{
							uParam0 = 2;
						}
					}
					if (uParam2 == GET_JOURNAL_ENTRY_PROGRESS(Function_323(9)))
					{
						SET_JOURNAL_ENTRY_PROGRESS(Function_323(9), uParam2, false, 0);
					}
					break;
				
				case 0x00000002:
					if (Function_413())
					{
						uParam2 = 0.0f;
						Function_415(&bParam3, 9, &uParam1, 2, &uParam0, 0, 1063, 250.0f, Function_416());
						Function_418(9);
					}
					else
					{
						uParam2 = 1.0f;
						Function_412(&bParam3, 9, &uParam1, &uParam0, 1063, 250.0f, Function_416());
						Function_418(9);
					}
					break;
			}
			break;
		
		case 0x00000002:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(9);
					Function_324(9, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(9), 0.0f, false, 0);
					uParam0 = 1;
					break;
				
				case 0x00000001:
					if (!Function_424(&iLocal_17))
					{
						if (((Global_90238[943][35].f_20 || Global_90238[943][75].f_20) || Global_90238[943][45].f_20) || Global_90238[943][55].f_20)
						{
							Function_422(&iLocal_17);
						}
					}
					else if (Function_419(&iLocal_17, 86400.0f))
					{
						Function_295(&bParam3);
						Function_330(9, 1);
						Function_327(9);
						Function_258();
						Function_418(9);
						uParam2 = 0.0f;
						Function_417(&iLocal_17);
					}
					else
					{
						if (Global_90238[943][35].f_24 && !Function_343(9, 1) != 1)
						{
							Function_328(9, 1, 1);
							uParam2 = (GET_JOURNAL_ENTRY_PROGRESS(Function_323(9)) + 0,25f);
						}
						if (Global_90238[943][75].f_24 && !Function_343(9, 2) != 1)
						{
							Function_328(9, 2, 1);
							uParam2 = (GET_JOURNAL_ENTRY_PROGRESS(Function_323(9)) + 0,25f);
						}
						if (Global_90238[943][45].f_24 && !Function_343(9, 3) != 1)
						{
							Function_328(9, 3, 1);
							uParam2 = (GET_JOURNAL_ENTRY_PROGRESS(Function_323(9)) + 0,25f);
						}
						if (Global_90238[943][55].f_24 && !Function_343(9, 4) != 1)
						{
							Function_328(9, 4, 1);
							uParam2 = (GET_JOURNAL_ENTRY_PROGRESS(Function_323(9)) + 0,25f);
						}
						if (((Function_343(9, 1) != 1 && Function_343(9, 2) != 1) && Function_343(9, 3) != 1) && Function_343(9, 4) != 1)
						{
							Global_90238[943].f_328 = 1;
							Function_417(&iLocal_17);
						}
						if (Global_90238[943].f_336 && Global_90238[943].f_328)
						{
							uParam0 = 2;
						}
					}
					if (uParam2 == GET_JOURNAL_ENTRY_PROGRESS(Function_323(9)))
					{
						SET_JOURNAL_ENTRY_PROGRESS(Function_323(9), uParam2, false, 0);
					}
					break;
				
				case 0x00000002:
					uParam2 = 0.0f;
					Function_415(&bParam3, 9, &uParam1, 3, &uParam0, 0, 1062, 250.0f, Function_416());
					Function_418(9);
					break;
			}
			break;
		
		case 0x00000003:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(9);
					Function_324(9, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(9), 0.0f, false, 0);
					uParam0 = 1;
					break;
				
				case 0x00000001:
					if (!Function_424(&iLocal_17))
					{
						if (((Global_90238[943][35].f_20 || Global_90238[943][75].f_20) || Global_90238[943][45].f_20) || Global_90238[943][55].f_20)
						{
							Function_422(&iLocal_17);
						}
					}
					else
					{
						if (Function_419(&iLocal_17, 129600.0f))
						{
							Function_295(&bParam3);
							Function_330(9, 1);
							Function_327(9);
							Function_258();
							Function_418(9);
							uParam2 = 0.0f;
							Function_417(&iLocal_17);
						}
						else
						{
							if ((StackVal && Global_90238[943][35].f_24 != 0) && !Function_343(9, 1) != 1)
							{
								Function_414(3, 9);
								Function_328(9, 1, 1);
								uParam2 = (GET_JOURNAL_ENTRY_PROGRESS(Function_323(9)) + 0,25f);
							}
							if ((StackVal && Global_90238[943][75].f_24 != 0) && !Function_343(9, 2) != 1)
							{
								Function_414(7, 9);
								Function_328(9, 2, 1);
								uParam2 = (GET_JOURNAL_ENTRY_PROGRESS(Function_323(9)) + 0,25f);
							}
							if ((StackVal && Global_90238[943][45].f_24 != 0) && !Function_343(9, 3) != 1)
							{
								Function_414(4, 9);
								Function_328(9, 3, 1);
								uParam2 = (GET_JOURNAL_ENTRY_PROGRESS(Function_323(9)) + 0,25f);
							}
							if ((StackVal && Global_90238[943][55].f_24 != 0) && !Function_343(9, 4) != 1)
							{
								Function_414(5, 9);
								Function_328(9, 4, 1);
								uParam2 = (GET_JOURNAL_ENTRY_PROGRESS(Function_323(9)) + 0,25f);
							}
							if (((Function_343(9, 1) != 1 && Function_343(9, 2) != 1) && Function_343(9, 3) != 1) && Function_343(9, 4) != 1)
							{
								Global_90238[943].f_328 = 1;
							}
							if (Global_90238[943].f_336 && Global_90238[943].f_328)
							{
								uParam0 = 2;
							}
						}
						if (uParam2 == GET_JOURNAL_ENTRY_PROGRESS(Function_323(9)))
						{
							SET_JOURNAL_ENTRY_PROGRESS(Function_323(9), uParam2, false, 0);
						}
					}
					break;
				
				case 0x00000002:
					uParam2 = 0.0f;
					Function_412(&bParam3, 9, &uParam1, &uParam0, 1064, 250.0f, Function_416());
					Function_418(9);
					break;
			}
			break;
	}
}

void Function_412(bool bParam0, bool bParam1, var uParam2, var uParam3, int iParam4, float fParam5, int iParam6) //Position: 0x1CCD8 / 117976
{
	var uVar0;
	
	Function_295(&bParam0);
	Function_330(bParam1, 1);
	uParam2 = 10;
	uParam3 = 2;
	if (iParam4 != 4294967295)
	{
		Function_355(iParam4);
	}
	Function_319(bParam1);
	if (!IS_STRING_VALID(&iParam6))
	{
		iParam6 = "challenge_04_128";
	}
	memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, Function_321(bParam1), 4);
	Function_357(&uVar0, CEIL(&fParam5), &iParam6);
	Function_329(bParam1, 4);
	Function_276();
}

bool Function_413() //Position: 0x1CD47 / 118087
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_414(int iParam0, bool bParam1) //Position: 0x1CD56 / 118102
{
	Global_90238[bParam143][iParam05] = 4294967294;
	Global_90238[bParam143][iParam05].f_4 = 0.0f;
	Global_90238[bParam143][iParam05].f_8 = 0;
	Global_90238[bParam143][iParam05].f_20 = 0;
	Global_90238[bParam143][iParam05].f_24 = 0;
	return;
}

void Function_415(bool bParam0, int iParam1, var uParam2, int iParam3, var uParam4, int iParam5, int iParam6, float fParam7, int iParam8) //Position: 0x1CDA7 / 118183
{
	var uVar0;
	
	Function_295(&bParam0);
	Function_330(iParam1, 1);
	SET_JOURNAL_ENTRY_PROGRESS(Function_323(iParam1), 0.0f, false, 0);
	Function_324(iParam1, 0);
	if (!IS_STRING_VALID(&iParam8))
	{
		iParam8 = "challenge_04_128";
	}
	memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, Function_321(iParam1), 4);
	Function_357(&uVar0, CEIL(&fParam7), &iParam8);
	uParam2 = iParam3;
	uParam4 = iParam5;
	if (&iParam6 != 4294967295)
	{
		Function_355(&iParam6);
	}
	Function_329(iParam1, 4);
	Function_276();
}

int Function_416() //Position: 0x1CE25 / 118309
{
	return "challenge_05lvl2_128";
}

void Function_417(vector3 vParam0) //Position: 0x1CE42 / 118338
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

void Function_418(int iParam0) //Position: 0x1CE59 / 118361
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Global_90238[iParam043][iVar05] = 4294967294;
		Global_90238[iParam043][iVar05].f_4 = 0.0f;
		Global_90238[iParam043][iVar05].f_8 = 0;
		Global_90238[iParam043][iVar05].f_20 = 0;
		Global_90238[iParam043][iVar05].f_24 = 0;
		iVar0++;
	}
	Global_90238[iParam043].f_332 = 0;
	Global_90238[iParam043].f_336 = 0;
	Global_90238[iParam043].f_328 = 0;
	return;
}

bool Function_419(int iParam0, float fParam1) //Position: 0x1CEE1 / 118497
{
	if (Function_424(&iParam0))
	{
		if (Function_420(&iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_420(vector3 vParam0) //Position: 0x1CEFF / 118527
{
	if (Function_424(&vParam0))
	{
		if (Function_421(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_421(int iParam0) //Position: 0x1CFCC / 118732
{
	return Function_8(iParam0, 2);
}

void Function_422(int iParam0) //Position: 0x1CFDA / 118746
{
	Function_423(&iParam0, 0.0f);
	return;
}

void Function_423(vector3 vParam0) //Position: 0x1CFE7 / 118759
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_124(&vParam0, 1);
	Function_93(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

bool Function_424(int iParam0) //Position: 0x1D00C / 118796
{
	return Function_8(iParam0, 1);
}

void Function_425(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x1D01A / 118810
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	switch (uParam1)
	{
		case 0x00000000:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(8);
					if (Global_131807.f_1316 > 17)
					{
						uParam0 = 1;
					}
					break;
				
				case 0x00000001:
					if (!Function_343(8, 1) != 1)
					{
						if (StackVal && Global_90238[843][05].f_24 != 0)
						{
							if (!Function_343(8, 2) != 1)
							{
								SET_JOURNAL_ENTRY_PROGRESS(Function_323(8), 0,5f, false, 0);
							}
							Function_414(0, 8);
							Function_328(8, 1, 1);
						}
					}
					if (!Function_343(8, 2) != 1)
					{
						if (StackVal && Global_90238[843][65].f_24 != 0)
						{
							if (!Function_343(8, 1) != 1)
							{
								SET_JOURNAL_ENTRY_PROGRESS(Function_323(8), 0,5f, false, 0);
							}
							Function_414(6, 8);
							Function_328(8, 2, 1);
						}
					}
					if (Function_343(8, 1) != 1 && Function_343(8, 2) != 1)
					{
						Global_90238[843].f_328 = 1;
					}
					if (Global_90238[843].f_336 && Global_90238[843].f_328)
					{
						uParam0 = 2;
					}
					break;
				
				case 0x00000002:
					uParam2 = 0.0f;
					Function_415(&bParam3, 8, &uParam1, 1, &uParam0, 0, 1036, 250.0f, Function_416());
					Function_418(8);
					break;
			}
			break;
		
		case 0x00000001:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(8);
					Function_324(8, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(8), 0.0f, false, 0);
					uParam0 = 1;
					break;
				
				case 0x00000001:
					if (!Function_343(8, 1) != 1)
					{
						if (StackVal && Global_90238[843][55].f_24 != 0)
						{
							if (GET_JOURNAL_ENTRY_PROGRESS(Function_323(8)) != 0.0f)
							{
								SET_JOURNAL_ENTRY_PROGRESS(Function_323(8), 0,5f, false, 0);
							}
							Function_414(5, 8);
							Function_328(8, 1, 1);
						}
					}
					if (!Function_343(8, 2) != 1)
					{
						if (StackVal && Global_90238[843][45].f_24 != 0)
						{
							if (GET_JOURNAL_ENTRY_PROGRESS(Function_323(8)) != 0.0f)
							{
								SET_JOURNAL_ENTRY_PROGRESS(Function_323(8), 0,5f, false, 0);
							}
							Function_414(4, 8);
							Function_328(8, 2, 1);
						}
					}
					if (Function_343(8, 1) != 1 && Function_343(8, 2) != 1)
					{
						Global_90238[843].f_328 = 1;
					}
					if (Global_90238[843].f_336 && Global_90238[843].f_328)
					{
						uParam0 = 2;
					}
					break;
				
				case 0x00000002:
					uParam2 = 0.0f;
					Function_415(&bParam3, 8, &uParam1, 2, &uParam0, 0, 1037, 250.0f, Function_416());
					Function_418(8);
					break;
			}
			break;
		
		case 0x00000002:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(8);
					Function_324(8, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(8), 0.0f, false, 0);
					uParam0 = 1;
					break;
				
				case 0x00000001:
					if (!Function_343(8, 1) != 1)
					{
						if (StackVal && Global_90238[843][25].f_24 != 0)
						{
							if (GET_JOURNAL_ENTRY_PROGRESS(Function_323(8)) != 0.0f)
							{
								SET_JOURNAL_ENTRY_PROGRESS(Function_323(8), 0,5f, false, 0);
							}
							Function_414(2, 8);
							Function_328(8, 1, 1);
						}
					}
					if (!Function_343(8, 2) != 1)
					{
						if (StackVal && Global_90238[843][15].f_24 != 0)
						{
							if (GET_JOURNAL_ENTRY_PROGRESS(Function_323(8)) != 0.0f)
							{
								SET_JOURNAL_ENTRY_PROGRESS(Function_323(8), 0,5f, false, 0);
							}
							Function_414(1, 8);
							Function_328(8, 2, 1);
						}
					}
					if (Function_343(8, 1) != 1 && Function_343(8, 2) != 1)
					{
						Global_90238[843].f_328 = 1;
					}
					if (Global_90238[843].f_336 && Global_90238[843].f_328)
					{
						uParam0 = 2;
					}
					break;
				
				case 0x00000002:
					uParam2 = 0.0f;
					Function_415(&bParam3, 8, &uParam1, 3, &uParam0, 0, 1039, 250.0f, Function_416());
					Function_418(8);
					break;
			}
			break;
		
		case 0x00000003:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(8);
					Function_324(8, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(8), 0.0f, false, 0);
					uParam0 = 1;
					break;
				
				case 0x00000001:
					if (Global_90238[843][45].f_20 && Function_343(8, 1) > 1)
					{
						Function_328(8, 1, 1);
					}
					iVar1 = Function_274(2, &bParam3, 1);
					if (iVar1 >= 0)
					{
						iVar0 = 0;
						while (Function_273(&bParam3, &iVar0, &bVar2))
						{
							if (IS_OBJECT_VALID(&bVar2))
							{
								if ((((!Function_272(&bVar2) != 24 && !Function_272(&bVar2) != 23) && !Function_272(&bVar2) != 25) && !Function_272(&bVar2) != 22) && !Function_272(&bVar2) != 29)
								{
									Function_295(&bParam3);
									Function_258();
									Function_330(8, 1);
									Function_418(8);
									Function_327(8);
									uParam2 = 0.0f;
								}
								else
								{
									Function_341(&bParam3, &bVar2);
									iVar0 = (iVar0 - 1);
								}
							}
						}
					}
					if (Global_90238[843][45].f_24)
					{
						Function_414(4, 8);
						Function_328(8, 1, 2);
					}
					if (Function_343(8, 1) == 2)
					{
						Global_90238[843].f_328 = 1;
					}
					if (Global_90238[843].f_336 && Global_90238[843].f_328)
					{
						uParam0 = 2;
					}
					break;
				
				case 0x00000002:
					uParam2 = 0.0f;
					Function_415(&bParam3, 8, &uParam1, 4, &uParam0, 0, 1040, 250.0f, Function_416());
					Function_418(8);
					break;
			}
			break;
		
		case 0x00000004:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(8);
					Function_324(8, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(8), 0.0f, false, 0);
					uParam0 = 1;
					break;
				
				case 0x00000001:
					if (Global_90238[843][35].f_20 && Function_343(8, 1) > 1)
					{
						Function_328(8, 1, 1);
					}
					iVar1 = Function_274(2, &bParam3, 1);
					if (iVar1 >= 0)
					{
						iVar0 = 0;
						while (Function_273(&bParam3, &iVar0, &bVar2))
						{
							if (IS_OBJECT_VALID(&bVar2))
							{
								if ((((!Function_272(&bVar2) != 24 && !Function_272(&bVar2) != 23) && !Function_272(&bVar2) != 25) && !Function_272(&bVar2) != 22) && !Function_272(&bVar2) != 29)
								{
									Function_295(&bParam3);
									Function_258();
									Function_330(8, 1);
									Function_418(8);
									Function_327(8);
									uParam2 = 0.0f;
								}
								else
								{
									Function_341(&bParam3, &bVar2);
									iVar0 = (iVar0 - 1);
								}
							}
						}
					}
					if (Global_90238[843][35].f_24)
					{
						Function_414(4, 8);
						Function_328(8, 1, 2);
					}
					if (Function_343(8, 1) == 2)
					{
						Global_90238[843].f_328 = 1;
					}
					if (Global_90238[843].f_336 && Global_90238[843].f_328)
					{
						uParam0 = 2;
					}
					break;
				
				case 0x00000002:
					if (Function_413())
					{
						uParam2 = 0.0f;
						Function_415(&bParam3, 8, &uParam1, 5, &uParam0, 0, 1041, 250.0f, Function_416());
						Function_418(8);
					}
					else
					{
						uParam2 = 1.0f;
						Function_412(&bParam3, 8, &uParam1, &uParam0, 1041, 250.0f, Function_416());
						Function_418(8);
					}
					break;
			}
			break;
		
		case 0x00000005:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(8);
					Function_324(8, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(8), 0.0f, false, 0);
					uParam0 = 1;
					break;
				
				case 0x00000001:
					if (!Function_343(8, 1) != 1)
					{
						if (StackVal && Global_90238[843][35].f_24 != 0)
						{
							if (GET_JOURNAL_ENTRY_PROGRESS(Function_323(8)) != 0.0f)
							{
								SET_JOURNAL_ENTRY_PROGRESS(Function_323(8), 0,5f, false, 0);
							}
							Function_414(3, 8);
							Function_328(8, 1, 1);
						}
					}
					if (!Function_343(8, 2) != 1)
					{
						if (StackVal && Global_90238[843][75].f_24 != 0)
						{
							if (GET_JOURNAL_ENTRY_PROGRESS(Function_323(8)) != 0.0f)
							{
								SET_JOURNAL_ENTRY_PROGRESS(Function_323(8), 0,5f, false, 0);
							}
							Function_414(7, 8);
							Function_328(8, 2, 1);
						}
					}
					if (Function_343(8, 1) != 1 && Function_343(8, 2) != 1)
					{
						Global_90238[843].f_328 = 1;
					}
					if (Global_90238[843].f_336 && Global_90238[843].f_328)
					{
						uParam0 = 2;
					}
					break;
				
				case 0x00000002:
					uParam2 = 1.0f;
					Function_412(&bParam3, 8, &uParam1, &uParam0, 1038, 250.0f, Function_416());
					Function_418(8);
					break;
			}
			break;
	}
}

void Function_426(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x1D8A1 / 120993
{
	switch (uParam1)
	{
		case 0x00000000:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(7);
					if (Global_131807.f_1316 > 4)
					{
						uParam0 = 1;
					}
					break;
				
				case 0x00000001:
					if (!Global_90238[743].f_328 != 1)
					{
						if (Global_90238[743][05].f_24)
						{
							Global_90238[743].f_328 = 1;
							uParam0 = 2;
						}
					}
					break;
				
				case 0x00000002:
					iParam2 = 0.0f;
					Function_415(&bParam3, 7, &uParam1, 1, &uParam0, 0, 1031, 250.0f, Function_427());
					Function_418(7);
					break;
			}
			break;
		
		case 0x00000001:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(7);
					Function_324(7, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(7), 0.0f, false, 0);
					uParam0 = 1;
					break;
				
				case 0x00000001:
					if (!Global_90238[743].f_328 != 1)
					{
						if (Global_90238[743][15].f_24)
						{
							Global_90238[743].f_328 = 1;
							uParam0 = 2;
						}
					}
					break;
				
				case 0x00000002:
					iParam2 = 0.0f;
					Function_415(&bParam3, 7, &uParam1, 2, &uParam0, 0, 1032, 250.0f, Function_427());
					Function_418(7);
					break;
			}
			break;
		
		case 0x00000002:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(7);
					Function_324(7, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(7), 0.0f, false, 0);
					uParam0 = 1;
					break;
				
				case 0x00000001:
					if (!Global_90238[743].f_328 != 1)
					{
						if (Global_90238[743][25].f_24)
						{
							Global_90238[743].f_328 = 1;
							uParam0 = 2;
						}
					}
					break;
				
				case 0x00000002:
					iParam2 = 0.0f;
					Function_415(&bParam3, 7, &uParam1, 3, &uParam0, 0, 1033, 250.0f, Function_427());
					Function_418(7);
					break;
			}
			break;
		
		case 0x00000003:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(7);
					Function_324(7, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(7), 0.0f, false, 0);
					uParam0 = 1;
					break;
				
				case 0x00000001:
					if (!Global_90238[743].f_328 != 1)
					{
						if (Global_90238[743][35].f_24)
						{
							Global_90238[743].f_328 = 1;
							uParam0 = 2;
						}
					}
					break;
				
				case 0x00000002:
					iParam2 = 0.0f;
					Function_415(&bParam3, 7, &uParam1, 4, &uParam0, 0, 1034, 250.0f, Function_427());
					Function_418(7);
					break;
			}
			break;
		
		case 0x00000004:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(7);
					Function_324(7, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(7), 0.0f, false, 0);
					uParam0 = 1;
					break;
				
				case 0x00000001:
					if (!Global_90238[743].f_328 != 1)
					{
						if (Global_90238[743][45].f_24)
						{
							Global_90238[743].f_328 = 1;
							uParam0 = 2;
						}
					}
					break;
				
				case 0x00000002:
					iParam2 = 0.0f;
					Function_415(&bParam3, 7, &uParam1, 5, &uParam0, 0, 1065, 250.0f, Function_427());
					Function_418(7);
					break;
			}
			break;
		
		case 0x00000005:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(7);
					Function_324(7, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(7), 0.0f, false, 0);
					uParam0 = 1;
					break;
				
				case 0x00000001:
					if (!Global_90238[743].f_328 != 1)
					{
						if (Global_90238[743][65].f_24)
						{
							Global_90238[743].f_328 = 1;
							uParam0 = 2;
						}
					}
					break;
				
				case 0x00000002:
					iParam2 = 0.0f;
					Function_415(&bParam3, 7, &uParam1, 6, &uParam0, 0, 1066, 250.0f, Function_427());
					Function_418(7);
					break;
			}
			break;
		
		case 0x00000006:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(7);
					Function_324(7, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(7), 0.0f, false, 0);
					uParam0 = 1;
					break;
				
				case 0x00000001:
					if (!Global_90238[743].f_328 != 1)
					{
						if (Global_90238[743][55].f_24)
						{
							Global_90238[743].f_328 = 1;
							uParam0 = 2;
						}
					}
					break;
				
				case 0x00000002:
					iParam2 = 0.0f;
					if (Function_413())
					{
						Function_415(&bParam3, 7, &uParam1, 7, &uParam0, 0, 1067, 250.0f, Function_427());
						Function_418(7);
					}
					else
					{
						Function_412(&bParam3, 7, &uParam1, &uParam0, 1067, 250.0f, Function_427());
						Function_418(7);
					}
					Function_355(1035);
					break;
			}
			break;
		
		case 0x00000007:
			if (Function_413())
			{
				switch (uParam0)
				{
					case 0x00000000:
						Function_327(7);
						Function_324(7, 0);
						SET_JOURNAL_ENTRY_PROGRESS(Function_323(7), 0.0f, false, 0);
						uParam0 = 1;
						break;
					
					case 0x00000001:
						if (!Global_90238[743].f_328 != 1)
						{
							if (Global_90238[743][75].f_24)
							{
								Global_90238[743].f_328 = 1;
								uParam0 = 2;
							}
						}
						break;
					
					case 0x00000002:
						iParam2 = 0.0f;
						Function_412(&bParam3, 7, &uParam1, &uParam0, 1068, 250.0f, Function_427());
						Function_418(7);
						break;
					}
			}
			break;
	}
}

int Function_427() //Position: 0x1DD9E / 122270
{
	return "challenge_05_128";
}

void Function_428(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x1DDB7 / 122295
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
	
	switch (uParam1)
	{
		case 0x00000000:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(6);
					if (Global_131807.f_1316 > 13)
					{
						Function_364(6, 1, 265);
						uParam0 = 1;
					}
					break;
				
				case 0x00000001:
					fVar6 = Function_335(6);
					bVar0 = Function_368((Function_111(265) - Function_334(6, 1, 0)), 6, 1);
					if (bVar0 <= 8.0f)
					{
						uParam0 = 2;
					}
					else
					{
						uParam2 = (bVar0 / 8.0f);
						if (uParam2 == fVar6)
						{
							Function_333(6, uParam2, 1, ROUND(bVar0), 4294967295, 4294967295, 21);
						}
					}
					break;
				
				case 0x00000002:
					uParam2 = 0.0f;
					Function_415(&bParam3, 6, &uParam1, 1, &uParam0, 0, 1026, 250.0f, Function_429());
					break;
			}
			break;
		
		case 0x00000001:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(6);
					Function_324(6, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(6), 0.0f, false, 0);
					Function_364(6, 1, 269);
					uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar6 = Function_335(6);
					bVar0 = Function_368((Function_111(269) - Function_334(6, 1, 0)), 6, 1);
					if (bVar0 <= 10.0f)
					{
						uParam0 = 2;
					}
					else
					{
						uParam2 = (bVar0 / 10.0f);
						if (uParam2 == fVar6)
						{
							Function_333(6, uParam2, 1, ROUND(bVar0), 4294967295, 4294967295, 21);
						}
					}
					break;
				
				case 0x00000002:
					uParam2 = 0.0f;
					Function_415(&bParam3, 6, &uParam1, 2, &uParam0, 0, 1027, 250.0f, Function_429());
					break;
			}
			break;
		
		case 0x00000002:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(6);
					Function_324(6, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(6), 0.0f, false, 0);
					Function_364(6, 1, 266);
					uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar6 = Function_335(6);
					bVar0 = Function_368((Function_111(266) - Function_334(6, 1, 0)), 6, 1);
					if (bVar0 <= 12.0f)
					{
						uParam0 = 2;
					}
					else
					{
						uParam2 = (bVar0 / 12.0f);
						if (uParam2 == fVar6)
						{
							Function_333(6, uParam2, 1, ROUND(bVar0), 4294967295, 4294967295, 21);
						}
					}
					break;
				
				case 0x00000002:
					uParam2 = 0.0f;
					Function_415(&bParam3, 6, &uParam1, 3, &uParam0, 0, 1028, 250.0f, Function_429());
					break;
			}
			break;
		
		case 0x00000003:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(6);
					Function_324(6, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(6), 0.0f, false, 0);
					Function_364(6, 1, 267);
					uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar6 = Function_335(6);
					bVar0 = Function_368((Function_111(267) - Function_334(6, 1, 0)), 6, 1);
					if (bVar0 <= 15.0f)
					{
						uParam0 = 2;
					}
					else
					{
						uParam2 = (bVar0 / 15.0f);
						if (uParam2 == fVar6)
						{
							Function_333(6, uParam2, 1, ROUND(bVar0), 4294967295, 4294967295, 21);
						}
					}
					break;
				
				case 0x00000002:
					uParam2 = 0.0f;
					Function_415(&bParam3, 6, &uParam1, 4, &uParam0, 0, 1029, 250.0f, Function_429());
					break;
			}
			break;
		
		case 0x00000004:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(6);
					Function_324(6, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(6), 0.0f, false, 0);
					Function_364(6, 1, 263);
					Function_364(6, 2, 264);
					Function_364(6, 3, 265);
					Function_364(6, 4, 266);
					Function_364(6, 5, 267);
					Function_364(6, 6, 268);
					Function_364(6, 7, 269);
					Function_364(6, 8, 270);
					Function_364(6, 9, 271);
					Function_364(6, 10, 272);
					uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar6 = Function_335(6);
					iVar4 = 263;
					bVar5 = true;
					bVar0 = 0.0f;
					while (iVar4 < 272)
					{
						fVar1 = Function_111(iVar4);
						fVar2 = Function_334(6, bVar5, 0);
						if (iVar4 == 270)
						{
							if (Function_368((fVar1 - fVar2), 6, bVar5) < 0.0f)
							{
								if (Function_368((fVar1 - fVar2), 6, bVar5) >= 10.0f)
								{
									fVar3 = (fVar3 + Function_368((fVar1 - fVar2), 6, bVar5));
								}
								else
								{
									fVar3 = (fVar3 + 10.0f);
								}
							}
						}
						else if (Function_368((fVar1 - fVar2), 6, bVar5) < 0.0f)
						{
							if (Function_368((fVar1 - fVar2), 6, bVar5) >= 2.0f)
							{
								fVar3 = (fVar3 + Function_368((fVar1 - fVar2), 6, bVar5));
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
						uParam2 = 1.0f;
						uParam0 = 2;
					}
					else
					{
						uParam2 = (fVar3 / 28.0f);
						if (uParam2 == fVar6)
						{
							SET_JOURNAL_ENTRY_PROGRESS(Function_323(6), uParam2, false, 0);
							iVar4 = 270;
							bVar5 = 8;
							fVar1 = Function_111(iVar4);
							fVar2 = Function_334(6, bVar5, 1);
							bVar0 = (fVar1 - fVar2);
							if (bVar0 < 10.0f)
							{
								bVar0 = 10.0f;
							}
							strcpy(&cVar25, "AM_VS", 24);
							cVar7 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_321(6) };
							stradd(&cVar7, "_info_mp", 24);
							stradd(&cVar7, INT_TO_STRING(bVar5), 24);
							strcpy(&cVar13, "AM_num", 24);
							stradd(&cVar13, INT_TO_STRING(bVar5 + 21), 24);
							strcpy(&cVar19, "AM_herbname", 24);
							stradd(&cVar19, INT_TO_STRING(bVar5), 24);
							UI_SET_STRING(&cVar13, INT_TO_STRING(ROUND(bVar0)));
							UI_SET_STRING(&cVar19, UI_GET_STRING(&cVar25));
							PREPEND_JOURNAL_ENTRY_DETAIL(Function_323(6), &cVar7, 2, 2, false);
							iVar4 = 263;
							bVar5 = true;
							while (iVar4 <= 273)
							{
								fVar1 = Function_111(iVar4);
								fVar2 = Function_334(6, bVar5, 0);
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
								cVar7 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_321(6) };
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
									PREPEND_JOURNAL_ENTRY_DETAIL(Function_323(6), &cVar7, 2, 2, false);
								}
								bVar5++;
								iVar4++;
							}
						}
					}
					break;
				
				case 0x00000002:
					uParam2 = 0.0f;
					Function_412(&bParam3, 6, &uParam1, &uParam0, 1030, 250.0f, Function_429());
					break;
			}
			break;
	}
}

int Function_429() //Position: 0x1E4E7 / 124135
{
	return "challenge_03lvl2_128";
}

void Function_430(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x1E504 / 124164
{
	bool bVar0;
	float fVar1;
	
	switch (uParam1)
	{
		case 0x00000000:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(2);
					if (Global_131807.f_1316 > 2)
					{
						Function_364(2, 1, 272);
						uParam0 = 1;
					}
					break;
				
				case 0x00000001:
					fVar1 = Function_335(2);
					bVar0 = Function_368((Function_111(272) - Function_334(2, 1, 0)), 2, 1);
					if (bVar0 <= 6.0f)
					{
						uParam0 = 2;
					}
					else
					{
						uParam2 = (bVar0 / 6.0f);
						if (uParam2 == fVar1)
						{
							Function_333(2, uParam2, 1, ROUND(bVar0), 4294967295, 4294967295, 0);
						}
					}
					break;
				
				case 0x00000002:
					uParam2 = 0.0f;
					Function_415(&bParam3, 2, &uParam1, 1, &uParam0, 0, 1021, 250.0f, Function_431());
					break;
			}
			break;
		
		case 0x00000001:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(2);
					Function_324(2, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(2), 0.0f, false, 0);
					Function_364(2, 1, 264);
					uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar1 = Function_335(2);
					bVar0 = Function_368((Function_111(264) - Function_334(2, 1, 0)), 2, 1);
					if (bVar0 <= 6.0f)
					{
						uParam0 = 2;
					}
					else
					{
						uParam2 = (bVar0 / 6.0f);
						if (uParam2 == fVar1)
						{
							Function_333(2, uParam2, 1, ROUND(bVar0), 4294967295, 4294967295, 0);
						}
					}
					break;
				
				case 0x00000002:
					uParam2 = 0.0f;
					Function_415(&bParam3, 2, &uParam1, 2, &uParam0, 0, 1022, 250.0f, Function_431());
					break;
			}
			break;
		
		case 0x00000002:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(2);
					Function_324(2, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(2), 0.0f, false, 0);
					Function_364(2, 1, 271);
					uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar1 = Function_335(2);
					bVar0 = Function_368((Function_111(271) - Function_334(2, 1, 0)), 2, 1);
					if (bVar0 <= 4.0f)
					{
						uParam0 = 2;
					}
					else
					{
						uParam2 = (bVar0 / 4.0f);
						if (uParam2 == fVar1)
						{
							Function_333(2, uParam2, 1, ROUND(bVar0), 4294967295, 4294967295, 0);
						}
					}
					break;
				
				case 0x00000002:
					uParam2 = 0.0f;
					Function_415(&bParam3, 2, &uParam1, 3, &uParam0, 0, 1023, 250.0f, Function_431());
					break;
			}
			break;
		
		case 0x00000003:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(2);
					Function_324(2, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(2), 0.0f, false, 0);
					Function_364(2, 1, 263);
					uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar1 = Function_335(2);
					bVar0 = Function_368((Function_111(263) - Function_334(2, 1, 0)), 2, 1);
					if (bVar0 <= 8.0f)
					{
						uParam0 = 2;
					}
					else
					{
						uParam2 = (bVar0 / 8.0f);
						if (uParam2 == fVar1)
						{
							Function_333(2, uParam2, 1, ROUND(bVar0), 4294967295, 4294967295, 0);
						}
					}
					break;
				
				case 0x00000002:
					uParam2 = 0.0f;
					Function_415(&bParam3, 2, &uParam1, 4, &uParam0, 0, 1024, 250.0f, Function_431());
					break;
			}
			break;
		
		case 0x00000004:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(2);
					Function_324(2, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(2), 0.0f, false, 0);
					Function_364(2, 1, 268);
					uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar1 = Function_335(2);
					bVar0 = Function_368((Function_111(268) - Function_334(2, 1, 0)), 2, 1);
					if (bVar0 <= 7.0f)
					{
						uParam0 = 2;
					}
					else
					{
						uParam2 = (bVar0 / 7.0f);
						if (uParam2 == fVar1)
						{
							Function_333(2, uParam2, 1, ROUND(bVar0), 4294967295, 4294967295, 0);
						}
					}
					break;
				
				case 0x00000002:
					uParam2 = 0.0f;
					Function_412(&bParam3, 2, &uParam1, &uParam0, 1025, 250.0f, Function_431());
					break;
			}
			break;
	}
}

int Function_431() //Position: 0x1E8B4 / 125108
{
	return "challenge_03_128";
}

void Function_432(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x1E8CD / 125133
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	
	switch (uParam1)
	{
		case 0x00000000:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(5);
					if (Global_131807.f_1316 > 11)
					{
						Function_328(5, 2, 0);
						uParam0 = 1;
					}
					break;
				
				case 0x00000001:
					fVar3 = Function_335(5);
					Function_262(2, "BEAR", &bParam3, 1, 0);
					bVar1 = Function_342(&bParam3, 5);
					if (bVar1 >= 0)
					{
						iVar0 = 0;
						while (Function_273(&bParam3, &iVar0, &bVar2))
						{
							if (IS_OBJECT_VALID(&bVar2))
							{
								if (Function_272(&bVar2) != 22 && Function_343(5, 2) != 0)
								{
									Function_328(5, 2, 1);
								}
								else if ((Function_343(5, 2) != 0 && Function_342(&bParam3, 5) != 5) && Function_272(&bVar2) == 22)
								{
									if (iVar0 == 5)
									{
										Function_341(&bParam3, &bVar2);
										iVar0 = (iVar0 - 1);
									}
								}
							}
						}
					}
					bVar1 = Function_342(&bParam3, 5);
					if (IntToFloat(bVar1) <= 5.0f)
					{
						uParam0 = 2;
					}
					else
					{
						uParam2 = TO_FLOAT(bVar1);
						if (uParam2 < 5.0f)
						{
							uParam2 = 5.0f;
						}
						uParam2 = (uParam2 / 5.0f);
						if (uParam2 == fVar3)
						{
							Function_333(5, uParam2, 1, bVar1, 4294967295, 4294967295, 15);
						}
					}
					break;
				
				case 0x00000002:
					uParam2 = 0.0f;
					Function_415(&bParam3, 5, &uParam1, 1, &uParam0, 0, 1016, 250.0f, Function_433());
					break;
			}
			break;
		
		case 0x00000001:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(5);
					Function_324(5, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(5), 0.0f, false, 0);
					uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar3 = Function_335(5);
					bVar1 = Function_340(2, 1072, &bParam3, 1);
					bVar1 = Function_342(&bParam3, 5);
					if (IntToFloat(bVar1) <= 1.0f)
					{
						uParam0 = 2;
					}
					else
					{
						uParam2 = TO_FLOAT(bVar1);
						if (IntToFloat(bVar1) < 1.0f)
						{
							bVar1 = CEIL(1.0f);
						}
						uParam2 = (uParam2 + TO_FLOAT(bVar1));
						uParam2 = (uParam2 / 1.0f);
						if (uParam2 == fVar3)
						{
							SET_JOURNAL_ENTRY_PROGRESS(Function_323(5), uParam2, false, 0);
						}
					}
					break;
				
				case 0x00000002:
					uParam2 = 0.0f;
					Function_415(&bParam3, 5, &uParam1, 2, &uParam0, 0, 1017, 250.0f, Function_433());
					break;
			}
			break;
		
		case 0x00000002:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(5);
					Function_324(5, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(5), 0.0f, false, 0);
					uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar3 = Function_335(5);
					bVar1 = Function_340(2, 1077, &bParam3, 1);
					bVar1 = Function_342(&bParam3, 5);
					if (IntToFloat(bVar1) <= 1.0f)
					{
						uParam0 = 2;
					}
					else
					{
						uParam2 = TO_FLOAT(bVar1);
						if (IntToFloat(bVar1) < 1.0f)
						{
							bVar1 = CEIL(1.0f);
						}
						uParam2 = (uParam2 + TO_FLOAT(bVar1));
						uParam2 = (uParam2 / 1.0f);
						if (uParam2 == fVar3)
						{
							SET_JOURNAL_ENTRY_PROGRESS(Function_323(5), uParam2, false, 0);
						}
					}
					break;
				
				case 0x00000002:
					uParam2 = 0.0f;
					Function_415(&bParam3, 5, &uParam1, 3, &uParam0, 0, 1018, 250.0f, Function_433());
					break;
			}
			break;
		
		case 0x00000003:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(5);
					Function_324(5, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(5), 0.0f, false, 0);
					uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar3 = Function_335(5);
					bVar1 = Function_340(2, 1094, &bParam3, 1);
					bVar1 = Function_342(&bParam3, 5);
					if (IntToFloat(bVar1) <= 1.0f)
					{
						uParam0 = 2;
					}
					else
					{
						uParam2 = TO_FLOAT(bVar1);
						if (IntToFloat(bVar1) < 1.0f)
						{
							bVar1 = CEIL(1.0f);
						}
						uParam2 = (uParam2 + TO_FLOAT(bVar1));
						uParam2 = (uParam2 / 1.0f);
						if (uParam2 == fVar3)
						{
							SET_JOURNAL_ENTRY_PROGRESS(Function_323(5), uParam2, false, 0);
						}
					}
					break;
				
				case 0x00000002:
					uParam2 = 0.0f;
					Function_415(&bParam3, 5, &uParam1, 4, &uParam0, 0, 1019, 250.0f, Function_433());
					break;
			}
			break;
		
		case 0x00000004:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(5);
					Function_324(5, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(5), 0.0f, false, 0);
					uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar3 = Function_335(5);
					bVar1 = Function_340(2, 1105, &bParam3, 1);
					bVar1 = Function_342(&bParam3, 5);
					if (IntToFloat(bVar1) <= 1.0f)
					{
						uParam0 = 2;
					}
					else
					{
						uParam2 = TO_FLOAT(bVar1);
						if (IntToFloat(bVar1) < 1.0f)
						{
							bVar1 = CEIL(1.0f);
						}
						uParam2 = (uParam2 + TO_FLOAT(bVar1));
						uParam2 = (uParam2 / 1.0f);
						if (uParam2 == fVar3)
						{
							SET_JOURNAL_ENTRY_PROGRESS(Function_323(5), uParam2, false, 0);
						}
					}
					break;
				
				case 0x00000002:
					uParam2 = 1.0f;
					Function_412(&bParam3, 5, &uParam1, &uParam0, 1020, 250.0f, Function_433());
					break;
			}
			break;
	}
}

int Function_433() //Position: 0x1ED87 / 126343
{
	return "challenge_02lvl2_128";
}

void Function_434(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x1EDA4 / 126372
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	bool bVar5;
	bool bVar6;
	
	switch (uParam1)
	{
		case 0x00000000:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(1);
					if (Global_131807.f_1316 > 1)
					{
						Function_364(1, 1, 326);
						uParam0 = 1;
					}
					break;
				
				case 0x00000001:
					fVar4 = Function_335(1);
					bVar5 = Function_368((Function_111(326) - Function_334(1, 1, 0)), 1, 1);
					if (bVar5 <= 5.0f)
					{
						uParam0 = 2;
					}
					else
					{
						bVar1 = ROUND(bVar5);
						uParam2 = (bVar5 / 5.0f);
						if (uParam2 == fVar4)
						{
							Function_333(1, uParam2, 1, bVar1, 4294967295, 4294967295, 12);
						}
					}
					break;
				
				case 0x00000002:
					uParam2 = 0.0f;
					Function_415(&bParam3, 1, &uParam1, 1, &uParam0, 0, 1011, 250.0f, Function_435());
					break;
			}
			break;
		
		case 0x00000001:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(1);
					Function_324(1, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(1), 0.0f, false, 0);
					Function_364(1, 1, 324);
					uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar4 = Function_335(1);
					bVar5 = Function_368((Function_111(324) - Function_334(1, 1, 0)), 1, 1);
					if (bVar5 <= 5.0f)
					{
						uParam0 = 2;
					}
					else
					{
						bVar1 = ROUND(bVar5);
						if (IntToFloat(bVar1) < 5.0f)
						{
							bVar1 = CEIL(5.0f);
						}
						uParam2 = TO_FLOAT(bVar1);
						uParam2 = (uParam2 / 5.0f);
						if (uParam2 == fVar4)
						{
							Function_333(1, uParam2, 1, bVar1, 4294967295, 4294967295, 12);
						}
					}
					break;
				
				case 0x00000002:
					uParam2 = 0.0f;
					Function_415(&bParam3, 1, &uParam1, 2, &uParam0, 0, 1012, 250.0f, Function_435());
					break;
			}
			break;
		
		case 0x00000002:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(1);
					Function_324(1, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(1), 0.0f, false, 0);
					Function_328(1, 2, 0);
					uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar4 = Function_335(1);
					Function_262(2, "WOLF", &bParam3, 1, 0);
					bVar1 = Function_342(&bParam3, 1);
					if (bVar1 >= 0)
					{
						iVar0 = 0;
						while (Function_273(&bParam3, &iVar0, &bVar3))
						{
							if (IS_OBJECT_VALID(&bVar3))
							{
								if (Function_272(&bVar3) != 22 && Function_343(1, 2) != 0)
								{
									Function_328(1, 2, 1);
								}
								else if ((Function_343(1, 2) != 0 && Function_342(&bParam3, 1) != 5) && Function_272(&bVar3) == 22)
								{
									if (iVar0 == 5)
									{
										Function_341(&bParam3, &bVar3);
										iVar0 = (iVar0 - 1);
									}
								}
							}
						}
					}
					bVar1 = Function_342(&bParam3, 1);
					if (IntToFloat(bVar1) <= 5.0f)
					{
						uParam0 = 2;
					}
					else
					{
						uParam2 = TO_FLOAT(bVar1);
						if (uParam2 < 5.0f)
						{
							uParam2 = 5.0f;
						}
						uParam2 = (uParam2 / 5.0f);
						if (uParam2 == fVar4)
						{
							Function_333(1, uParam2, 1, bVar1, 4294967295, 4294967295, 12);
						}
					}
					break;
				
				case 0x00000002:
					uParam2 = 0.0f;
					Function_415(&bParam3, 1, &uParam1, 3, &uParam0, 0, 1013, 250.0f, Function_435());
					break;
			}
			break;
		
		case 0x00000003:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(1);
					Function_324(1, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(1), 0.0f, false, 0);
					Function_328(1, 2, 0);
					uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar4 = Function_335(1);
					Function_262(2, "COUGAR", &bParam3, 1, 0);
					bVar1 = Function_342(&bParam3, 1);
					if (bVar1 >= 0)
					{
						iVar0 = 0;
						while (Function_273(&bParam3, &iVar0, &bVar3))
						{
							if (IS_OBJECT_VALID(&bVar3))
							{
								if (Function_272(&bVar3) != 22 && Function_343(1, 2) != 0)
								{
									Function_328(1, 2, 1);
								}
								else if ((Function_343(1, 2) != 0 && Function_342(&bParam3, 1) != 5) && Function_272(&bVar3) == 22)
								{
									if (iVar0 == 5)
									{
										Function_341(&bParam3, &bVar3);
										iVar0 = (iVar0 - 1);
									}
								}
							}
						}
					}
					bVar1 = Function_342(&bParam3, 1);
					if (IntToFloat(bVar1) <= 5.0f)
					{
						uParam0 = 2;
					}
					else
					{
						uParam2 = TO_FLOAT(bVar1);
						if (uParam2 < 5.0f)
						{
							uParam2 = 5.0f;
						}
						uParam2 = (uParam2 / 5.0f);
						if (uParam2 == fVar4)
						{
							Function_333(1, uParam2, 1, bVar1, 4294967295, 4294967295, 12);
						}
					}
					break;
				
				case 0x00000002:
					uParam2 = 0.0f;
					Function_415(&bParam3, 1, &uParam1, 4, &uParam0, 0, 1014, 250.0f, Function_435());
					break;
			}
			break;
		
		case 0x00000004:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(1);
					Function_324(1, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(1), 0.0f, false, 0);
					Function_364(1, 1, 330);
					Function_364(1, 2, 317);
					uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar4 = Function_335(1);
					bVar5 = Function_368((Function_111(330) - Function_334(1, 1, 0)), 1, 1);
					bVar6 = Function_368((Function_111(317) - Function_334(1, 2, 0)), 1, 2);
					if (bVar5 <= 5.0f && bVar6 <= 5.0f)
					{
						uParam0 = 2;
					}
					else
					{
						bVar1 = ROUND(bVar5);
						if (IntToFloat(bVar1) < 5.0f)
						{
							bVar1 = CEIL(5.0f);
						}
						uParam2 = TO_FLOAT(bVar1);
						bVar2 = ROUND(bVar6);
						if (IntToFloat(bVar2) < 5.0f)
						{
							bVar2 = CEIL(5.0f);
						}
						uParam2 = (uParam2 + TO_FLOAT(bVar2));
						uParam2 = (uParam2 / (2.0f * 5.0f));
						if (uParam2 == fVar4)
						{
							Function_333(1, uParam2, 1, bVar1, bVar2, 4294967295, 12);
						}
					}
					break;
				
				case 0x00000002:
					uParam2 = 0.0f;
					Function_412(&bParam3, 1, &uParam1, &uParam0, 1015, 250.0f, Function_435());
					break;
			}
			break;
	}
}

int Function_435() //Position: 0x1F308 / 127752
{
	return "challenge_02_128";
}

void Function_436(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x1F321 / 127777
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	float fVar6;
	
	switch (uParam1)
	{
		case 0x00000000:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(4);
					if (Global_131807.f_1316 > 12)
					{
						uParam0 = 1;
					}
					break;
				
				case 0x00000001:
					fVar6 = Function_335(4);
					bVar1 = Function_274(9, &bParam3, 1);
					if (bVar1 >= 0)
					{
						iVar0 = (GET_OBJECTSET_SIZE(&bParam3) - bVar1);
						while (Function_273(&bParam3, &iVar0, &bVar2))
						{
							if (IS_OBJECT_VALID(&bVar2))
							{
								uVar4 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&bVar2)));
								if (IS_ACTOR_VALID(&uVar4))
								{
									if (IS_ACTOR_DEAD(&uVar4))
									{
										Function_341(&bParam3, &bVar2);
										iVar0 = (iVar0 - 1);
									}
									else if (DECOR_CHECK_EXIST(&bVar2, "DroppedItem"))
									{
										uVar3 = DECOR_GET_OBJECT(&bVar2, "DroppedItem");
										if (IS_OBJECT_VALID(&uVar3))
										{
											if (GET_OBJECT_TYPE(&uVar3) != 17)
											{
												Function_341(&bParam3, &bVar2);
												iVar0 = (iVar0 - 1);
											}
										}
										else
										{
											Function_341(&bParam3, &bVar2);
											iVar0 = (iVar0 - 1);
										}
									}
									else
									{
										Function_341(&bParam3, &bVar2);
										iVar0 = (iVar0 - 1);
									}
								}
							}
						}
					}
					if (bVar1 < 0 && IntToFloat(Function_342(&bParam3, 4)) > 2.0f)
					{
						Function_422(&iLocal_13);
					}
					bVar1 = false;
					bVar1 = Function_342(&bParam3, 4);
					if (Function_424(&iLocal_13))
					{
						if (Function_420(&iLocal_13) > 6.0f)
						{
							if (IntToFloat(bVar1) <= 2.0f)
							{
								uParam0 = 2;
								Function_417(&iLocal_13);
							}
							else
							{
								uParam2 = (TO_FLOAT(bVar1) / 2.0f);
								if (uParam2 == fVar6)
								{
									Function_333(4, uParam2, 0, bVar1, 4294967295, 4294967295, 19);
								}
							}
						}
						else if (Function_419(&iLocal_13, 6.0f))
						{
							Function_295(&bParam3);
							Function_330(4, 1);
							Function_327(4);
							uParam2 = 0.0f;
							bVar1 = false;
							if (uParam2 == fVar6)
							{
								Function_333(4, uParam2, 0, bVar1, 4294967295, 4294967295, 19);
							}
							Function_417(&iLocal_13);
						}
					}
					break;
				
				case 0x00000002:
					uParam2 = 0.0f;
					Function_415(&bParam3, 4, &uParam1, 1, &uParam0, 0, 1006, 250.0f, Function_440());
					break;
			}
			break;
		
		case 0x00000001:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(4);
					Function_324(4, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(4), 0.0f, false, 0);
					uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar6 = Function_335(4);
					bVar1 = (Function_274(9, &bParam3, 1) + Function_274(11, &bParam3, 1));
					if (bVar1 >= 0)
					{
						iVar0 = (GET_OBJECTSET_SIZE(&bParam3) - bVar1);
						while (Function_273(&bParam3, &iVar0, &bVar2))
						{
							if (IS_OBJECT_VALID(&bVar2))
							{
								uVar4 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&bVar2)));
								if (IS_ACTOR_VALID(&uVar4))
								{
									if (IS_ACTOR_DEAD(&uVar4))
									{
										Function_341(&bParam3, &bVar2);
										iVar0 = (iVar0 - 1);
										bVar1 = false;
									}
									else if (DECOR_CHECK_EXIST(&bVar2, "DroppedItem") || DECOR_CHECK_EXIST(&bVar2, "DroppedWeapon"))
									{
										if (DECOR_CHECK_EXIST(&bVar2, "DroppedItem"))
										{
											uVar3 = DECOR_GET_OBJECT(&bVar2, "DroppedItem");
										}
										else if (DECOR_CHECK_EXIST(&bVar2, "DroppedWeapon"))
										{
											uVar3 = DECOR_GET_OBJECT(&bVar2, "DroppedWeapon");
										}
										if (IS_OBJECT_VALID(&uVar3))
										{
											if (GET_OBJECT_TYPE(&uVar3) == 17)
											{
												if (Function_343(4, 1) != 1)
												{
													Function_328(4, 1, 1);
													Global_99128 = GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&bVar2));
												}
												else
												{
													Function_341(&bParam3, &bVar2);
													iVar0 = (iVar0 - 1);
													Function_258();
												}
											}
											else if (GET_OBJECT_TYPE(&uVar3) == 34)
											{
												if (Function_343(4, 1) == 1 || &Global_99128 == GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&bVar2)))
												{
													Function_341(&bParam3, &bVar2);
													iVar0 = (iVar0 - 1);
													bVar1 = false;
													Function_258();
												}
											}
											else
											{
												LOG_ERROR("It's a WHAT???!!!");
												Function_341(&bParam3, &bVar2);
												iVar0 = (iVar0 - 1);
											}
										}
										else
										{
											Function_341(&bParam3, &bVar2);
											iVar0 = (iVar0 - 1);
										}
									}
									else
									{
										Function_341(&bParam3, &bVar2);
										iVar0 = (iVar0 - 1);
									}
								}
								else
								{
									Function_341(&bParam3, &bVar2);
									iVar0 = (iVar0 - 1);
								}
							}
						}
					}
					if (!Function_424(&iLocal_13) && Function_343(4, 1) != 1)
					{
						Function_422(&iLocal_13);
					}
					bVar1 = Function_342(&bParam3, 4);
					if (Function_424(&iLocal_13))
					{
						if (Function_420(&iLocal_13) > 4.0f)
						{
							if (IntToFloat(bVar1) <= 2.0f)
							{
								uParam0 = 2;
								Function_417(&iLocal_13);
							}
							else
							{
								uParam2 = (TO_FLOAT(bVar1) / 2.0f);
								if (uParam2 == fVar6)
								{
									SET_JOURNAL_ENTRY_PROGRESS(Function_323(4), uParam2, false, 0);
								}
							}
						}
						else if (Function_419(&iLocal_13, 4.0f))
						{
							Function_295(&bParam3);
							Function_330(4, 1);
							Function_258();
							uParam2 = 0.0f;
							if (uParam2 == fVar6)
							{
								SET_JOURNAL_ENTRY_PROGRESS(Function_323(4), uParam2, false, 0);
							}
							Function_327(4);
							Function_417(&iLocal_13);
						}
					}
					else if (Function_342(&bParam3, 4) < 0 || Function_343(4, 1) != 1)
					{
						Function_295(&bParam3);
						Function_330(4, 1);
						Function_258();
					}
					break;
				
				case 0x00000002:
					uParam2 = 0.0f;
					Function_415(&bParam3, 4, &uParam1, 2, &uParam0, 0, 1007, 250.0f, Function_440());
					break;
			}
			break;
		
		case 0x00000002:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(4);
					Function_324(4, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(4), 0.0f, false, 0);
					uParam0 = 1;
					break;
				
				case 0x00000001:
					if (Function_262(10, "BEAR", &bParam3, 1, 0) < 0 || Function_262(10, "GrizzlyBear", &bParam3, 1, 0) < 0)
					{
						while (Function_273(&bParam3, &iVar0, &bVar2))
						{
							if (IS_OBJECT_VALID(&bVar2))
							{
								if ((Function_272(&bVar2) != 24 || Function_272(&bVar2) != 25) || Function_272(&bVar2) != 23)
								{
									Function_341(&bParam3, &bVar2);
									iVar0 = (iVar0 - 1);
								}
								else if (IS_OBJECT_VALID(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&bVar2))))
								{
									uVar4 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&bVar2)));
									if (IS_ACTOR_VALID(&uVar4))
									{
										if (GET_LAST_DAMAGE(&uVar4) > GET_ACTOR_MAX_HEALTH(&uVar4))
										{
											DECOR_SET_BOOL(&uVar4, "bearWounded", 1);
											Function_341(&bParam3, &bVar2);
											iVar0 = (iVar0 - 1);
										}
										else if (DECOR_CHECK_EXIST(&uVar4, "bearWounded"))
										{
											Function_341(&bParam3, &bVar2);
											iVar0 = (iVar0 - 1);
										}
										if (GET_LAST_DAMAGE(&uVar4) <= GET_ACTOR_MAX_HEALTH(&uVar4))
										{
											if (!DECOR_CHECK_EXIST(&uVar4, "bearWounded"))
											{
												uParam0 = 2;
											}
										}
									}
								}
							}
						}
					}
					break;
				
				case 0x00000002:
					Function_295(&bParam3);
					uParam2 = 0.0f;
					Function_415(&bParam3, 4, &uParam1, 3, &uParam0, 0, 1008, 250.0f, Function_440());
					break;
			}
			break;
		
		case 0x00000003:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(4);
					Function_324(4, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(4), 0.0f, false, 0);
					uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar6 = Function_335(4);
					bVar1 = Function_274(9, &bParam3, 1);
					if (bVar1 >= 0)
					{
						iVar0 = (GET_OBJECTSET_SIZE(&bParam3) - bVar1);
						while (Function_273(&bParam3, &iVar0, &bVar2))
						{
							if (IS_OBJECT_VALID(&bVar2))
							{
								uVar4 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&bVar2)));
								uVar5 = GET_ACTOR_FROM_OBJECT(GET_EVENT_PERPETRATOR(GET_EVENT_FROM_OBJECT(&bVar2)));
								if (IS_ACTOR_VALID(&uVar4))
								{
									if (IS_ACTOR_DEAD(&uVar4))
									{
										Function_341(&bParam3, &bVar2);
										iVar0 = (iVar0 - 1);
									}
									else if (DECOR_CHECK_EXIST(&bVar2, "DroppedItem"))
									{
										uVar3 = DECOR_GET_OBJECT(&bVar2, "DroppedItem");
										if (IS_OBJECT_VALID(&uVar3))
										{
											if (GET_OBJECT_TYPE(&uVar3) == 17)
											{
												if (IS_ACTOR_VALID(&uVar5))
												{
													if (IS_ACTOR_RIDING(&uVar5))
													{
														if (Function_439(GET_MOUNT(&uVar5), 0) > 2.0f)
														{
															Function_341(&bParam3, &bVar2);
															iVar0 = (iVar0 - 1);
														}
													}
													else
													{
														Function_341(&bParam3, &bVar2);
														iVar0 = (iVar0 - 1);
													}
												}
												else
												{
													Function_341(&bParam3, &bVar2);
													iVar0 = (iVar0 - 1);
												}
											}
											else
											{
												Function_341(&bParam3, &bVar2);
												iVar0 = (iVar0 - 1);
											}
										}
										else
										{
											Function_341(&bParam3, &bVar2);
											iVar0 = (iVar0 - 1);
										}
									}
									else
									{
										Function_341(&bParam3, &bVar2);
										iVar0 = (iVar0 - 1);
									}
								}
							}
							else
							{
								Function_341(&bParam3, &bVar2);
								iVar0 = (iVar0 - 1);
							}
						}
					}
					bVar1 = Function_342(&bParam3, 4);
					if (IntToFloat(bVar1) <= 1.0f)
					{
						uParam0 = 2;
					}
					else
					{
						uParam2 = (TO_FLOAT(bVar1) / 1.0f);
						if (uParam2 == fVar6)
						{
							SET_JOURNAL_ENTRY_PROGRESS(Function_323(4), uParam2, false, 0);
						}
					}
					break;
				
				case 0x00000002:
					uParam2 = 0.0f;
					Function_415(&bParam3, 4, &uParam1, 4, &uParam0, 0, 1009, 250.0f, Function_440());
					break;
			}
			break;
		
		case 0x00000004:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(4);
					Function_324(4, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(4), 0.0f, false, 0);
					Function_328(4, 2, 4294967295);
					Function_328(4, 3, 4294967295);
					Function_328(4, 4, 4294967295);
					uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar6 = Function_335(4);
					bVar1 = Function_262(2, "ANIMAL", &bParam3, 1, 0);
					if (bVar1 >= 0)
					{
						iVar0 = (GET_OBJECTSET_SIZE(&bParam3) - bVar1);
						while (Function_273(&bParam3, &iVar0, &bVar2))
						{
							if (IS_OBJECT_VALID(&bVar2))
							{
								if (Function_272(&bVar2) == 24)
								{
									Function_341(&bParam3, &bVar2);
									iVar0 = (iVar0 - 1);
									bVar1 = false;
								}
								else
								{
									uVar4 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&bVar2)));
									if (IS_ACTOR_VALID(&uVar4))
									{
										if (ANIMAL_ACTOR_GET_DOMESTICATION(&uVar4) == 0)
										{
											Function_341(&bParam3, &bVar2);
											iVar0 = (iVar0 - 1);
											bVar1 = false;
										}
										else if (Function_343(4, 2) == 4294967295)
										{
											if (ANIMAL_ACTOR_GET_SPECIES(&uVar4) == Function_343(4, 3))
											{
												Function_341(&bParam3, &bVar2);
												iVar0 = (iVar0 - 1);
												bVar1 = false;
											}
											else if (ANIMAL_ACTOR_GET_SPECIES(&uVar4) == Function_343(4, 4))
											{
												Function_341(&bParam3, &bVar2);
												iVar0 = (iVar0 - 1);
												bVar1 = false;
											}
											else
											{
												Function_328(4, 2, ANIMAL_ACTOR_GET_SPECIES(&uVar4));
											}
										}
										else if (Function_343(4, 3) == 4294967295)
										{
											if (ANIMAL_ACTOR_GET_SPECIES(&uVar4) == Function_343(4, 2))
											{
												Function_341(&bParam3, &bVar2);
												iVar0 = (iVar0 - 1);
												bVar1 = false;
											}
											else if (ANIMAL_ACTOR_GET_SPECIES(&uVar4) == Function_343(4, 4))
											{
												Function_341(&bParam3, &bVar2);
												iVar0 = (iVar0 - 1);
												bVar1 = false;
											}
											else
											{
												Function_328(4, 3, ANIMAL_ACTOR_GET_SPECIES(&uVar4));
											}
										}
										else if (Function_343(4, 4) == 4294967295)
										{
											if (ANIMAL_ACTOR_GET_SPECIES(&uVar4) == Function_343(4, 3))
											{
												Function_341(&bParam3, &bVar2);
												iVar0 = (iVar0 - 1);
												bVar1 = false;
											}
											else if (ANIMAL_ACTOR_GET_SPECIES(&uVar4) == Function_343(4, 2))
											{
												Function_341(&bParam3, &bVar2);
												iVar0 = (iVar0 - 1);
												bVar1 = false;
											}
											else
											{
												Function_328(4, 4, ANIMAL_ACTOR_GET_SPECIES(&uVar4));
											}
										}
									}
								}
							}
						}
					}
					if (bVar1 >= 0)
					{
						Function_417(&iLocal_13);
						Function_422(&iLocal_13);
					}
					if (Function_419(&iLocal_13, 11.0f))
					{
						Function_328(4, 2, 4294967295);
						Function_328(4, 3, 4294967295);
						Function_328(4, 4, 4294967295);
						Function_295(&bParam3);
						Function_417(&iLocal_13);
					}
					bVar1 = Function_342(&bParam3, 4);
					if (IntToFloat(bVar1) <= 3.0f)
					{
						Function_437(4, 1);
						uParam0 = 2;
						Function_295(&bParam3);
						Function_330(4, 1);
					}
					else
					{
						uParam2 = (TO_FLOAT(bVar1) / 3.0f);
						if (uParam2 == fVar6)
						{
							Function_333(4, uParam2, 1, bVar1, 4294967295, 4294967295, 19);
						}
					}
					break;
				
				case 0x00000002:
					uParam2 = 1.0f;
					Function_412(&bParam3, 4, &uParam1, &uParam0, 1010, 250.0f, Function_440());
					break;
			}
			break;
	}
}

int Function_437(var uParam0, int iParam1) //Position: 0x1FE96 / 130710
{
	return Function_438(uParam0, iParam1, GET_CURRENT_GAME_TIME());
}

int Function_438(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1FEA6 / 130726
{
	char* cVar0[16];
	int iVar4;
	
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_TIMERSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	iVar4 = Function_256();
	if (IS_LAYOUTREF_VALID(&iVar4))
	{
		return DECOR_SET_FLOAT(&iVar4, &cVar0, bParam2);
	}
	LOG_ERROR("AM_STORE_TIMER: failed to store float value in slot");
	return 0;
}

float Function_439(bool bParam0, bool bParam1) //Position: 0x1FF23 / 130851
{
	struct<2> Var0;
	
	GET_ACTOR_VELOCITY(&bParam0, &Var0);
	if (&bParam1)
	{
		Var0.f_4 = 0.0f;
	}
	return VMAG(Var0);
}

int Function_440() //Position: 0x1FF44 / 130884
{
	return "challenge_01lvl2_128";
}

void Function_441(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x1FF61 / 130913
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	float fVar4;
	
	switch (uParam1)
	{
		case 0x00000000:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(0);
					if (Global_131807.f_1316 > 0)
					{
						if (!Function_326(0, 2))
						{
							Function_324(0, 0);
							Function_325(0, 2);
							SET_JOURNAL_ENTRY_PROGRESS(Function_323(0), 0.0f, false, 0);
						}
						uParam0 = 1;
					}
					break;
				
				case 0x00000001:
					fVar4 = Function_335(0);
					bVar1 = Function_262(2, "FLYING_ANIMAL", &bParam3, 1, 0);
					if (bVar1 >= 0)
					{
						iVar0 = 0;
						while (Function_273(&bParam3, &iVar0, &bVar2))
						{
							if (IS_OBJECT_VALID(&bVar2))
							{
								if (!Function_310(&bVar2))
								{
									Function_341(&bParam3, &bVar2);
									iVar0 = (iVar0 - 1);
								}
								else if ((Function_272(&bVar2) != 24 || Function_272(&bVar2) != 25) || Function_272(&bVar2) != 23)
								{
									Function_341(&bParam3, &bVar2);
									iVar0 = (iVar0 - 1);
								}
							}
						}
					}
					bVar1 = Function_342(&bParam3, 0);
					if (bVar1 >= 0)
					{
						if (IntToFloat(bVar1) <= 5.0f)
						{
							uParam0 = 2;
						}
						else
						{
							uParam2 = (TO_FLOAT(bVar1) / 5.0f);
							if (uParam2 == fVar4)
							{
								Function_333(0, uParam2, 1, bVar1, 4294967295, 4294967295, 10);
							}
						}
					}
					break;
				
				case 0x00000002:
					uParam2 = 0.0f;
					Function_415(&bParam3, 0, &uParam1, 1, &uParam0, 0, 1001, 250.0f, Function_442());
					break;
			}
			break;
		
		case 0x00000001:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(0);
					Function_324(0, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(0), 0.0f, false, 0);
					uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar4 = Function_335(0);
					bVar1 = Function_262(2, "RABBIT", &bParam3, 1, 0);
					if (bVar1 >= 0)
					{
						iVar0 = 0;
						while (Function_273(&bParam3, &iVar0, &bVar2))
						{
							if (IS_OBJECT_VALID(&bVar2))
							{
								if ((Function_272(&bVar2) != 24 || Function_272(&bVar2) != 25) || Function_272(&bVar2) != 23)
								{
									Function_341(&bParam3, &bVar2);
									iVar0 = (iVar0 - 1);
								}
							}
						}
					}
					bVar1 = Function_342(&bParam3, 0);
					if (IntToFloat(bVar1) <= 5.0f)
					{
						uParam0 = 2;
					}
					else
					{
						uParam2 = (TO_FLOAT(bVar1) / 5.0f);
						if (uParam2 == fVar4)
						{
							Function_333(0, uParam2, 1, bVar1, 4294967295, 4294967295, 10);
						}
					}
					break;
				
				case 0x00000002:
					uParam2 = 0.0f;
					Function_415(&bParam3, 0, &uParam1, 2, &uParam0, 0, 1002, 250.0f, Function_442());
					break;
			}
			break;
		
		case 0x00000002:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(0);
					Function_324(0, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(0), 0.0f, false, 0);
					uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar4 = Function_335(0);
					bVar1 = Function_262(10, "_", &bParam3, 1, 0);
					if (bVar1 >= 0)
					{
						iVar0 = 0;
						while (Function_273(&bParam3, &iVar0, &bVar2))
						{
							if (IS_OBJECT_VALID(&bVar2))
							{
								uVar3 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&bVar2)));
								if (IS_ACTOR_VALID(&uVar3))
								{
									if (!((GET_ACTOR_FACTION(&uVar3) != 22 || GET_ACTOR_FACTION(&uVar3) != 19) || (Global_6646 && (GET_ACTOR_FACTION(&uVar3) != 8 || GET_ACTOR_FACTION(&uVar3) != 10))))
									{
										Function_341(&bParam3, &bVar2);
										iVar0 = (iVar0 - 1);
									}
								}
							}
						}
					}
					bVar1 = Function_342(&bParam3, 0);
					if (IntToFloat(bVar1) <= 10.0f)
					{
						uParam0 = 2;
					}
					else
					{
						uParam2 = (TO_FLOAT(bVar1) / 10.0f);
						if (uParam2 == fVar4)
						{
							Function_333(0, uParam2, 1, bVar1, 4294967295, 4294967295, 10);
						}
					}
					break;
				
				case 0x00000002:
					uParam2 = 0.0f;
					Function_415(&bParam3, 0, &uParam1, 3, &uParam0, 0, 1003, 250.0f, Function_442());
					break;
			}
			break;
		
		case 0x00000003:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(0);
					Function_324(0, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(0), 0.0f, false, 0);
					uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar4 = Function_335(0);
					bVar1 = Function_262(2, "FLYING_ANIMAL", &bParam3, 1, 0);
					if (bVar1 >= 0)
					{
						iVar0 = (GET_OBJECTSET_SIZE(&bParam3) - bVar1);
						while (Function_273(&bParam3, &iVar0, &bVar2))
						{
							if (IS_OBJECT_VALID(&bVar2))
							{
								uVar3 = GET_ACTOR_FROM_OBJECT(GET_EVENT_PERPETRATOR(GET_EVENT_FROM_OBJECT(&bVar2)));
								if (!Function_310(&bVar2))
								{
									Function_341(&bParam3, &bVar2);
									iVar0 = (iVar0 - 1);
								}
								else if ((Function_272(&bVar2) != 24 || Function_272(&bVar2) != 25) || Function_272(&bVar2) != 23)
								{
									Function_341(&bParam3, &bVar2);
									iVar0 = (iVar0 - 1);
								}
								else if (IS_ACTOR_RIDING_VEHICLE(&uVar3))
								{
									if (Function_439(GET_VEHICLE(&uVar3), 0) > 2.0f)
									{
										Function_341(&bParam3, &bVar2);
										iVar0 = (iVar0 - 1);
									}
								}
								else
								{
									Function_341(&bParam3, &bVar2);
									iVar0 = (iVar0 - 1);
								}
							}
						}
					}
					bVar1 = Function_342(&bParam3, 0);
					if (bVar1 >= 0)
					{
						if (IntToFloat(bVar1) <= 5.0f)
						{
							uParam0 = 2;
						}
						else
						{
							uParam2 = (TO_FLOAT(bVar1) / 5.0f);
							if (uParam2 == fVar4)
							{
								Function_333(0, uParam2, 1, bVar1, 4294967295, 4294967295, 10);
							}
						}
					}
					break;
				
				case 0x00000002:
					uParam2 = 0.0f;
					Function_415(&bParam3, 0, &uParam1, 4, &uParam0, 0, 1004, 250.0f, Function_442());
					break;
			}
			break;
		
		case 0x00000004:
			switch (uParam0)
			{
				case 0x00000000:
					Function_327(0);
					Function_324(0, 0);
					SET_JOURNAL_ENTRY_PROGRESS(Function_323(0), 0.0f, false, 0);
					uParam0 = 1;
					break;
				
				case 0x00000001:
					fVar4 = Function_335(0);
					bVar1 = Function_262(11, "_", &bParam3, 1, 0);
					if (bVar1 >= 0)
					{
						iVar0 = (GET_OBJECTSET_SIZE(&bParam3) - bVar1);
						while (Function_273(&bParam3, &iVar0, &bVar2))
						{
							if (IS_OBJECT_VALID(&bVar2))
							{
								uVar3 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&bVar2)));
								if (IS_ACTOR_VALID(&uVar3))
								{
									if (!(GET_ACTOR_FACTION(&uVar3) != 22 || GET_ACTOR_FACTION(&uVar3) != 19))
									{
										Function_341(&bParam3, &bVar2);
										iVar0 = (iVar0 - 1);
									}
								}
							}
						}
					}
					bVar1 = Function_342(&bParam3, 0);
					if (IntToFloat(bVar1) <= 10.0f)
					{
						uParam0 = 2;
					}
					else
					{
						uParam2 = (TO_FLOAT(bVar1) / 10.0f);
						if (uParam2 == fVar4)
						{
							Function_333(0, uParam2, 1, bVar1, 4294967295, 4294967295, 10);
						}
					}
					break;
				
				case 0x00000002:
					uParam2 = 0.0f;
					Function_412(&bParam3, 0, &uParam1, &uParam0, 1005, 250.0f, Function_442());
					break;
			}
			break;
	}
}

var Function_442() //Position: 0x205B8 / 132536
{
	return "challenge_01_128";
}

var Function_443(int iParam0) //Position: 0x205D1 / 132561
{
	int iVar0;
	int iVar1;
	
	iVar0 = &iParam0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 19)
	{
		if (Global_132987[iVar1125] == iVar0)
		{
			return iVar1;
		}
		iVar1++;
	}
	return 4294967295;
}

bool Function_444(int iParam0) //Position: 0x20604 / 132612
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (SC_CHALLENGE_IS_VAR_VALID(&iParam0, "nAAID"))
	{
		iVar0 = SC_CHALLENGE_GET_VAR_INT(&iParam0, "nAAID");
	}
	switch (iVar0)
	{
		case 0x00000000:
			return Function_111(464) < 0.0f;
			break;
		
		case 0x00000001:
			return Function_111(459) < 0.0f;
			break;
		
		case 0x00000002:
			return Function_111(463) < 0.0f;
			break;
		
		case 0x00000003:
			return Function_111(462) < 0.0f;
			break;
		
		case 0x00000004:
			return Function_111(466) < 0.0f;
			break;
		
		case 0x00000005:
			return Function_111(460) < 0.0f;
			break;
		
		case 0x00000006:
			return Function_111(465) < 0.0f;
			break;
		
		case 0x00000007:
			return Function_111(461) < 0.0f;
			break;
		
		case 0x00000008:
			return Function_445(Global_46914[0]);
			break;
		
		case 0x00000009:
			return StackVal < 3;
			break;
	}
	return iVar1;
}

int Function_445(bool bParam0) //Position: 0x206EF / 132847
{
	if (!Function_17(bParam0))
	{
		return 0;
	}
	return Function_158(&(Global_43791[bParam0]), 4096);
}

bool Function_446() //Position: 0x2070D / 132877
{
	return 0;
}

void Function_447() //Position: 0x20714 / 132884
{
	Function_467();
	Function_449();
	Function_448();
	Global_140633 = 1;
	return;
}

void Function_448() //Position: 0x20728 / 132904
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Global_90152[iVar05] = 4294967294;
		Global_90152[iVar05].f_4 = 0.0f;
		Global_90152[iVar05].f_8 = 0;
		Global_90152[iVar05].f_20 = 0;
		Global_90152[iVar05].f_24 = 0;
		iVar0++;
	}
	Global_90152.f_332 = 0;
	Global_90152.f_336 = 0;
	Global_90152.f_328 = 0;
	return;
}

void Function_449() //Position: 0x20790 / 133008
{
	if (Global_53524.f_44)
	{
		Function_463(0, &Global_78078, "AM_SS", 3, 0, Function_466());
		Function_463(1, &Global_78078, "AM_MH", 3, 0, Function_462());
		Function_463(2, &Global_78078, "AM_SU", 3, 0, Function_461());
		Function_463(3, &Global_78078, "AM_TH", 3, 0, Function_460());
		Function_463(7, &Global_78078, "AM_LB", 3, 1, Function_460());
		Function_463(4, &Global_78078, "AM_SS2", 3, 1, Function_459());
		Function_463(5, &Global_78078, "AM_MH2", 3, 1, Function_458());
		Function_463(6, &Global_78078, "AM_SU2", 3, 1, Function_457());
		Function_463(8, &Global_78078, "AM_LB2", 3, 1, Function_460());
		Function_463(9, &Global_78078, "AM_LB3", 3, 1, Function_460());
		Function_463(22, &Global_78078, "OC_MW", 3, 1, Function_456());
		Function_463(23, &Global_78078, "OC_BO", 3, 1, Function_456());
		Function_463(24, &Global_78078, "OC_B2", 3, 1, Function_455());
		Function_463(10, &Global_78078, "WP_DYN", 5, 1, Function_466());
		Function_463(11, &Global_78078, "WP_DYN2", 5, 1, Function_459());
		Function_463(12, &Global_78078, "WP_PYR", 5, 1, Function_466());
		Function_463(13, &Global_78078, "WP_PYR2", 5, 1, Function_459());
		Function_463(14, &Global_78078, "ST_TF", 8, 1, Function_454());
		Function_463(15, &Global_78078, "ST_TH", 8, 1, Function_454());
		Function_463(16, &Global_78078, "ST_TS", 8, 1, Function_454());
		Function_463(17, &Global_78078, "ST_TW", 8, 1, Function_454());
		Function_463(18, &Global_78078, "ST_RH", 8, 1, Function_454());
		Function_463(19, &Global_78078, "ST_RW", 8, 1, Function_454());
		Function_463(21, &Global_78078, "ST_RC", 8, 1, Function_454());
		Function_463(20, &Global_78078, "ST_FD", 8, 1, Function_454());
	}
	else
	{
		Function_463(0, &Global_77932, "AM_SS", 3, 0, "challenge_01");
		Function_463(1, &Global_77932, "AM_MH", 3, 0, "challenge_02");
		Function_463(2, &Global_77932, "AM_SU", 3, 0, "challenge_03");
		Function_463(3, &Global_77932, "AM_TH", 3, 0, "challenge_04");
		if (Function_182(32))
		{
			Function_452();
		}
		if (Function_182(64))
		{
			Function_450();
		}
	}
	return;
}

void Function_450() //Position: 0x20A6C / 133740
{
	var uVar0;
	var uVar4;
	
	strcpy(&Local_57 + 16, "AM_ER", 8);
	Local_57 = 26;
	Local_57.f_140 = 0;
	Function_451();
	memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, Function_275(), 4);
	Local_57.f_32 = CREATE_JOURNAL_ENTRY(&uVar0, 3, false, "challenge_01");
	if ((!Global_6661 && Function_81(41, 0)) || (Global_6661 && Function_80(5)))
	{
		CLEAR_JOURNAL_ENTRY(Local_57.f_32);
		PREPEND_JOURNAL_ENTRY(Local_57.f_32, false);
		SET_JOURNAL_ENTRY_PROGRESS(Local_57.f_32, 0.0f, false, 0);
		SET_JOURNAL_ENTRY_UPDATED(Local_57.f_32, 0);
		Function_300();
	}
	if (StackVal == 10)
	{
		Function_278();
	}
	else
	{
		Local_57.f_4 = 0;
		SET_JOURNAL_ENTRY_PROGRESS(Local_57.f_32, Local_57.f_12, true, 0);
		uVar4 = Function_256();
		if (IS_LAYOUTREF_VALID(&uVar4))
		{
			CREATE_OBJECTSET_IN_LAYOUT("AM_OBJSETER_SP", &uVar4, 4294967295, 0);
		}
	}
	return;
}

void Function_451() //Position: 0x20B33 / 133939
{
	iLocal_94 = Function_220(10, 1, 5);
	Local_57.f_8 = Global_21684[iLocal_947].f_20;
	Local_57.f_12 = Global_21684[iLocal_947].f_28;
	Local_57.f_36 = Global_21684[iLocal_947].f_24;
	Local_57.f_40 = Global_21684[iLocal_947].f_16;
	return;
}

void Function_452() //Position: 0x20B76 / 134006
{
	var uVar0;
	var uVar4;
	
	strcpy(&Local_21 + 16, "AM_TM", 8);
	Local_21 = 25;
	Local_21.f_140 = 0;
	Function_453();
	memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, Function_311(), 4);
	Local_21.f_32 = CREATE_JOURNAL_ENTRY(&uVar0, 3, false, "challenge_01");
	if ((!Global_6661 && Function_81(41, 0)) || (Global_6661 && Function_80(5)))
	{
		CLEAR_JOURNAL_ENTRY(Local_21.f_32);
		PREPEND_JOURNAL_ENTRY(Local_21.f_32, false);
		SET_JOURNAL_ENTRY_PROGRESS(Local_21.f_32, 0.0f, false, 0);
		SET_JOURNAL_ENTRY_UPDATED(Local_21.f_32, 0);
		Function_315();
	}
	if (StackVal == 10)
	{
		Function_313();
	}
	else
	{
		Local_21.f_4 = 0;
		SET_JOURNAL_ENTRY_PROGRESS(Local_21.f_32, Local_21.f_12, true, 0);
		uVar4 = Function_256();
		if (IS_LAYOUTREF_VALID(&uVar4))
		{
			CREATE_OBJECTSET_IN_LAYOUT("AM_OBJSETTM_SP", &uVar4, 4294967295, 0);
		}
	}
	return;
}

void Function_453() //Position: 0x20C3D / 134205
{
	iLocal_93 = Function_220(9, 1, 5);
	Local_21.f_8 = Global_21684[iLocal_937].f_20;
	Local_21.f_12 = Global_21684[iLocal_937].f_28;
	Local_21.f_36 = Global_21684[iLocal_937].f_24;
	Local_21.f_40 = Global_21684[iLocal_937].f_16;
	return;
}

var Function_454() //Position: 0x20C80 / 134272
{
	return "SC_Travel_Icon";
}

var Function_455() //Position: 0x20C97 / 134295
{
	return "challenge_04lvl2";
}

var Function_456() //Position: 0x20CB0 / 134320
{
	return "challenge_04";
}

var Function_457() //Position: 0x20CC5 / 134341
{
	return "challenge_03lvl2";
}

var Function_458() //Position: 0x20CDE / 134366
{
	return "challenge_02lvl2";
}

var Function_459() //Position: 0x20CF7 / 134391
{
	return "challenge_01lvl2";
}

var Function_460() //Position: 0x20D10 / 134416
{
	return "challenge_05";
}

var Function_461() //Position: 0x20D25 / 134437
{
	return "challenge_03";
}

var Function_462() //Position: 0x20D3A / 134458
{
	return "challenge_02";
}

void Function_463(bool bParam0, struct<18>[] Param1, char* cParam2, bool bParam4, int iParam5) //Position: 0x20D4F / 134479
{
	int iVar0;
	bool bVar1;
	
	strcpy(&Param1[bParam018] + 16, &cParam2, 8);
	Param1[bParam018] = bParam0;
	Param1[bParam018].f_140 = &bParam4;
	if (Global_6605 || Global_131807.f_1332)
	{
		Param1[bParam018].f_8 = 0;
		if (Global_53524.f_44)
		{
			Global_78078[bParam018].f_36 = 0;
			Global_78078[bParam018].f_12 = 0.0f;
			iVar0 = 0;
			while (iVar0 <= 11)
			{
				(*&Global_78078[bParam018] + 44)[iVar0] = 0.0f;
				iVar0++;
			}
		}
		else
		{
			Global_77932[bParam018].f_36 = 0;
			Global_77932[bParam018].f_12 = 0.0f;
			iVar0 = 0;
			while (iVar0 <= 11)
			{
				(*&Global_77932[bParam018] + 44)[iVar0] = 0.0f;
				iVar0++;
			}
		}
	}
	if (Global_131807.f_1332)
	{
		Function_329(bParam0, 4);
		Function_329(bParam0, 2);
		Function_465(bParam0, 0);
		Function_465(bParam0, 1);
		bVar1 = Function_350(bParam0);
		Function_295(&bVar1);
		Function_330(bParam0, 1);
	}
	if (&bParam4)
	{
		if (!Global_53524.f_44)
		{
			Param1[bParam018].f_4 = 1;
			Param1[bParam018].f_8 = 0;
			return;
		}
	}
	if (!IS_STRING_VALID(&iParam5))
	{
		iParam5 = "challenge_04";
	}
	Function_464(bParam0, iParam3, &iParam5);
	Function_324(bParam0, 1);
	if (StackVal && StackVal != 2 != 10)
	{
		Function_319(bParam0);
	}
	else
	{
		Param1[bParam018].f_4 = 0;
		Param1[bParam018].f_12 = 0.0f;
		SET_JOURNAL_ENTRY_PROGRESS(Function_323(bParam0), 0.0f, true, 0);
	}
}

var Function_464(bool bParam0, var uParam1, int iParam2) //Position: 0x20ED7 / 134871
{
	struct<6> Var0;
	var uVar6;
	var uVar10;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_322(bParam0) };
	if (0 | Global_53524.f_44)
	{
		Global_78078[bParam018].f_32 = CREATE_JOURNAL_ENTRY(&Var0, &uParam1, false, &iParam2);
		memcpy(&uVar6, StackVal, StackVal, StackVal, StackVal, StackVal, Function_321(bParam0), 4);
		UI_SET_STRING(&Var0, UI_GET_STRING(&uVar6));
		return Global_78078[bParam018].f_32;
	}
	Global_77932[bParam018].f_32 = CREATE_JOURNAL_ENTRY(&Var0, &uParam1, false, &iParam2);
	memcpy(&uVar10, StackVal, StackVal, StackVal, StackVal, StackVal, Function_321(bParam0), 4);
	UI_SET_STRING(&Var0, UI_GET_STRING(&uVar10));
	return Global_77932[bParam018].f_32;
}

void Function_465(bool bParam0, int iParam1) //Position: 0x20F5C / 135004
{
	if (Global_53524.f_44)
	{
		REMOVE_JOURNAL_ENTRY(Global_78078[bParam018].f_32, &iParam1);
	}
	else
	{
		REMOVE_JOURNAL_ENTRY(Global_77932[bParam018].f_32, &iParam1);
	}
	return;
}

var Function_466() //Position: 0x20F8D / 135053
{
	return "challenge_01";
}

void Function_467() //Position: 0x20FA2 / 135074
{
	bool bVar0;
	var uVar1;
	var uVar2;
	char* cVar3[16];
	char* cVar7[16];
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (Global_98983 - 1))
	{
		Function_299(bVar0);
		bVar0++;
	}
	uVar1 = Function_256();
	uVar2 = Function_259();
	if (Global_53524.f_44)
	{
		bVar0 = false;
		while (bVar0 < 35)
		{
			strcpy(&cVar3, "nAM_OBJSET", 16);
			stradd(&cVar3, INT_TO_STRING(bVar0), 16);
			CREATE_OBJECTSET_IN_LAYOUT(&cVar3, &uVar1, 4294967295, 0);
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
			CREATE_OBJECTSET_IN_LAYOUT(&cVar7, &uVar1, 4294967295, 0);
			bVar0++;
		}
	}
	ITERATE_EVERYWHERE(&uVar2);
	ITERATE_ON_OBJECT_TYPE(&uVar2, 3);
	ITERATE_IN_LAYOUT(&uVar2, &uVar1);
	return;
}

