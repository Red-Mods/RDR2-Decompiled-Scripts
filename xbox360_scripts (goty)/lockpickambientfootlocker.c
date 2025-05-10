//Decompiled with MagicRDR v1.0
//Function Count : 201
//Statics Count : 43
//Natives Count : 349
//Parameters Count : 1

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
	int iLocal_10 = 0;
	bool bLocal_11 = false;
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	bool bLocal_15 = false;
	bool bLocal_16 = false;
	int iLocal_17 = 0;
	bool bLocal_18 = false;
	bool bLocal_19 = false;
	char* cLocal_20 = NULL;
	struct<12> Local_21[1];
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	char* cLocal_38 = NULL;
	int iLocal_39 = 0;
	bool bLocal_40 = false;
	bool bLocal_41 = false;
	var uScriptParam_0 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	
	iLocal_10 = 0;
	iLocal_13 = 0;
	iLocal_14 = 0;
	bLocal_15 = false;
	bLocal_16 = false;
	iLocal_17 = 0;
	if (UNK_0xBBB2780E() && GRINGO_DEBUG_IS_SELECTED())
	{
		LOG_ERROR("User requested break (At GenericGringo startup)");
	}
	Function_200("STARTS");
	Function_199(uScriptParam_0);
	iLocal_34 = 0;
	Function_197(uScriptParam_0, &iLocal_34);
	while (IS_GRINGO_ACTIVE())
	{
		Function_196(uScriptParam_0);
		if (UNK_0xBBB2780E() && GRINGO_DEBUG_IS_SELECTED())
		{
			LOG_ERROR("User requested break (During GenericGringo loop)");
		}
		bVar1 = GRINGO_GET_MY_OBJECT_REF();
		if (IS_OBJECT_VALID(bVar1))
		{
			GET_OBJECT_POSITION(bVar1, &uLocal_35);
		}
		iVar2 = 0;
		bLocal_40 = false;
		if (GRINGO_HAS_PENDING_MESSAGE())
		{
			iVar3 = 4294967295;
			iVar0 = 0;
			while (iVar0 < (iLocal_34 - 1))
			{
				if (Local_21[iVar012].f_12 == GRINGO_GET_MSG_COMPONENT_CONTEXT())
				{
					iVar3 = iVar0;
					iVar0 = iLocal_34;
				}
				iVar0++;
			}
			if (iVar3 >= 4294967295)
			{
				bVar4 = false;
				bVar5 = false;
				if (IS_ACTOR_VALID(GRINGO_GET_REQUESTING_ACTOR()))
				{
					bLocal_40 = true;
				}
				switch (GRINGO_GET_MESSAGE_TYPE())
				{
					case 0x00000000:
						if (Function_191(&(Local_21[iVar312]), &bVar4))
						{
							Function_189(GRINGO_GET_REQUESTING_ACTOR(), Local_21[iVar312].f_12);
							bVar5 = true;
						}
						break;
					
					case 0x00000001:
						if (Function_191(&(Local_21[iVar312]), &bVar4))
						{
							Function_189(GRINGO_GET_REQUESTING_ACTOR(), Local_21[iVar312].f_12);
							if (bVar4)
							{
								Function_185(&(Local_21[iVar312]));
							}
							bVar5 = true;
						}
						break;
					
					case 0x00000002:
						if (Local_21[iVar312].f_16 == GRINGO_GET_REQUESTING_ACTOR())
						{
							Function_184("eGRINGO_EndUse: Stop use by request", Local_21[iVar312].f_16);
							Function_183(Local_21[iVar312].f_16, 1);
							if (IS_ACTOR_VALID(Local_21[iVar312].f_16))
							{
								if (IS_ACTOR_LOCAL_PLAYER(Local_21[iVar312].f_16) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(Local_21[iVar312].f_12))
								{
									GRINGO_ENABLE_PLAYER_CONTROL(Local_21[iVar312].f_16, 1);
								}
							}
							if (GRINGO_IS_FORCE_QUITTING())
							{
								Function_80(&(Local_21[iVar312]), 0);
							}
							else if (Local_21[iVar312].f_44 < 8)
							{
								Function_79(&(Local_21[iVar312]));
								Local_21[iVar312].f_44 = 8;
							}
							bVar5 = true;
						}
						else
						{
							Function_200("Stop use request actor mismatch!!");
						}
						break;
				}
				GRINGO_SET_MESSAGE_RETURN(bVar5);
			}
			else
			{
				GRINGO_SET_MESSAGE_RETURN(false);
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < (iLocal_34 - 1))
			{
				if (Function_78(Local_21[iVar012].f_40, 2))
				{
					if (!Function_21(&(Local_21[iVar012])))
					{
						Function_200("Quitting due to update end");
						Function_80(&(Local_21[iVar012]), 1);
					}
				}
				if (Function_20(&(Local_21[iVar012]), 0))
				{
					Function_10(&(Local_21[iVar012]));
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < (iLocal_34 - 1))
		{
			if (Function_78(Local_21[iVar012].f_40, 2))
			{
				iVar2 = 1;
			}
			iVar0++;
		}
		if (iVar2 || Function_4(uScriptParam_0))
		{
			if (bLocal_40)
			{
				GRINGO_WAIT(false);
			}
			else if (GET_DEBUG_DRAW_STATE())
			{
				GRINGO_WAIT(false);
			}
			else
			{
				GRINGO_WAIT(Function_3());
			}
		}
		else
		{
			GRINGO_STOP();
		}
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_41))
	{
		Function_200("Removing quit context at script termination");
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_41);
	}
	iVar0 = 0;
	while (iVar0 < (iLocal_34 - 1))
	{
		if (Function_78(Local_21[iVar012].f_40, 2))
		{
			Function_2("Gringo termination calls StopUse", Local_21[iVar012].f_16);
			Function_80(&(Local_21[iVar012]), 0);
		}
		if (GRINGO_HANDLES_MOVEMENT(Local_21[iVar012].f_12))
		{
			SET_GRINGO_BOOL_ATTR(0, "RandomPointSet", Local_21[iVar012].f_12);
		}
		Function_20(&(Local_21[iVar012]), 1);
		iVar0++;
	}
	Function_1(uScriptParam_0);
	Function_200("QUITS");
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x431 / 1073
{
	iParam0 = iParam0;
	if (IS_OBJECT_ANIMATOR_VALID(cLocal_20))
	{
		DESTROY_OBJECT_ANIMATOR(cLocal_20);
	}
	return;
}

void Function_2(int iParam0, bool bParam1) //Position: 0x448 / 1096
{
	char* cVar0;
	
	cVar0 = "InvalidActor";
	if (IS_OBJECT_VALID(bParam1))
	{
		cVar0 = GET_OBJECT_NAME(bParam1);
	}
	LOG_OBJECT3(GRINGO_GET_MY_OBJECT_REF(), bParam1, GET_TARGET_OBJECT(), cVar0, ": ", iParam0, 0);
	return;
}

int Function_3() //Position: 0x483 / 1155
{
	return 0;
}

int Function_4(int iParam0) //Position: 0x48A / 1162
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	char* cVar8[16];
	
	iParam0 = iParam0;
	bVar0 = GRINGO_GET_MY_OBJECT_REF();
	if (DECOR_CHECK_EXIST(bVar0, "GringoIsDone"))
	{
		if (!bLocal_16)
		{
			Function_9(GRINGO_GET_MY_OBJECT_REF());
			vVar1 = { StackVal, StackVal, Function_9(GRINGO_GET_MY_OBJECT_REF()) };
			bVar4 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(vVar1, 0.66f, "footlocker", 1);
			if (IS_OBJECT_VALID(bVar4))
			{
				cLocal_20 = GET_OBJECT_ANIMATOR_ON_OBJECT(bVar4);
				if (!IS_OBJECT_ANIMATOR_VALID(cLocal_20))
				{
					cLocal_20 = CREATE_OBJECT_ANIMATOR_ON_OBJECT(bVar4, "chest", "$chest", "chest");
				}
				SET_OBJECT_ANIMATOR_NODE(cLocal_20, "/global/chest/stay_open");
			}
		}
		iVar5 = 1;
		if (Function_8())
		{
			if (_GET_AMMO_AMOUNT(Global_34573, 9, 0) < 20.0f)
			{
				iVar5 = 0;
			}
		}
		if (DECOR_CHECK_EXIST(bVar0, "FootlockerReuse") && iVar5)
		{
			if ((Function_5(Global_34573, bVar0) > 1.0f && (GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bVar0, "fLastUsetime")) < 3.0f) && (_GET_MAX_AMMO_AMOUNT(Global_34573, 9) - _GET_AMMO_AMOUNT(Global_34573, 9, 0)) == 0.0f)
			{
				if (!IS_SCRIPT_USE_CONTEXT_VALID(bLocal_19))
				{
					bLocal_19 = ADD_SCRIPT_USE_CONTEXT("ntake_ammo", 20, 4, 0, 0, 0, 0, 4294967295, 0);
				}
				else if (IS_SCRIPT_USE_CONTEXT_PRESSED(bLocal_19))
				{
					RELEASE_SCRIPT_USE_CONTEXT(bLocal_19);
					DECOR_SET_FLOAT(bVar0, "fLastUsetime", GET_CURRENT_GAME_TIME());
					bVar7 = false;
					bVar6 = false;
					while (bVar6 < (17 - 1))
					{
						strcpy(&cVar8, "Ammo_", 16);
						stradd(&cVar8, INT_TO_STRING(bVar6), 16);
						if (DECOR_CHECK_EXIST(bVar0, &cVar8))
						{
							bVar7 = DECOR_GET_INT(bVar0, &cVar8);
							if (bVar7 <= 1)
							{
								if (Function_8())
								{
									bVar7 = RAND_INT_RANGE(FLOOR(2.0f), FLOOR(10.0f));
								}
								else
								{
									bVar7 = RAND_INT_RANGE(6, 20);
								}
							}
							_ADD_AMMO_OF_TYPE(Global_34573, bVar6, TO_FLOAT(bVar7), 1, 1);
						}
						bVar6++;
					}
				}
			}
			else if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_19))
			{
				RELEASE_SCRIPT_USE_CONTEXT(bLocal_19);
			}
		}
	}
	return 0;
}

float Function_5(bool bParam0, bool bParam1) //Position: 0x67F / 1663
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_7(bParam0);
			vVar0 = { StackVal, StackVal, Function_7(bParam0) };
			Function_6(bParam1);
			vVar3 = { StackVal, StackVal, Function_6(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

vector3 Function_6(bool bParam0) //Position: 0x71F / 1823
{
	vector3 vVar0;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		GET_OBJECT_POSITION(bParam0, &vVar0);
		return StackVal, StackVal, vVar0;
	}
	LOG_ERROR("Attempting to get location of INVALID object. Returning << 0,0,0 >>.");
	return StackVal, StackVal, vVar0;
}

vector3 Function_7(bool bParam0) //Position: 0x78B / 1931
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

bool Function_8() //Position: 0x7F5 / 2037
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

vector3 Function_9(bool bParam0) //Position: 0x820 / 2080
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (!IS_OBJECT_VALID(bParam0))
	{
		return StackVal, StackVal, vVar0;
	}
	GET_OBJECT_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_10(int iParam0) //Position: 0x847 / 2119
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!Function_78(iParam0->f_40, 2))
	{
		Function_183(iParam0->f_16, 0);
	}
	else if (UNK_0x0A0E660E() || Function_19(iParam0))
	{
		if (iParam0->f_44 == 6)
		{
			if (Function_17(iParam0) <= Function_15(iParam0->f_12))
			{
				if (IS_ACTOR_VALID(iParam0->f_16))
				{
					if (IS_ACTOR_LOCAL_PLAYER(iParam0->f_16))
					{
						if (UNK_0x0A0E660E() || !Global_3418)
						{
							bVar1 = Function_13(iParam0->f_12, &bVar0);
							if (!bVar0 && UNK_0x0A0E660E())
							{
								bVar1 = "nDisengage";
								bVar0 = true;
							}
							if (bVar0)
							{
								bLocal_40 = true;
								if (!IS_SCRIPT_USE_CONTEXT_VALID(bLocal_41))
								{
									Function_200("ManagePlayerQuit: Create quit context");
									if (Function_12(iParam0->f_12, "UseQuitBOverride", 0))
									{
										bLocal_41 = ADD_SCRIPT_USE_CONTEXT(bVar1, 500, 5, 0, 0, 0, 0, 4294967295, 0);
									}
									else
									{
										bLocal_41 = ADD_SCRIPT_USE_CONTEXT(bVar1, 500, 4, 0, 0, 0, 0, 4294967295, 0);
									}
								}
								if (IS_SCRIPT_USE_CONTEXT_PRESSED(bLocal_41))
								{
									Function_2("USE CONTEXT QUIT", iParam0->f_16);
									Function_79(iParam0);
									iParam0->f_44 = 8;
									if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_41))
									{
										Function_200("ManagePlayerQuit: Release quit context - already pressed");
										RELEASE_SCRIPT_USE_CONTEXT(bLocal_41);
										iVar2 = 0;
										if (GET_GRINGO_BOOL_ATTR("DeactivateChildren", iParam0->f_12, &iVar2))
										{
											GRINGO_SET_CHILD_USE_ACTIVATIONS(iParam0->f_12, 0);
										}
									}
								}
								if (DECOR_CHECK_EXIST(iParam0->f_16, "LobbyGringo"))
								{
									if (Function_11(iParam0->f_16))
									{
										Function_79(iParam0);
										Function_2("STICK QUIT", iParam0->f_16);
										iParam0->f_44 = 8;
										if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_41))
										{
											Function_200("ManagePlayerQuit: Release quit context - used stick");
											RELEASE_SCRIPT_USE_CONTEXT(bLocal_41);
										}
									}
								}
							}
						}
						else if (Global_3418)
						{
							if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_41))
							{
								Function_200("ManagePlayerQuit: Release quit context - due to wrong phase for quit");
								RELEASE_SCRIPT_USE_CONTEXT(bLocal_41);
							}
						}
					}
				}
			}
		}
		else if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_41))
		{
			Function_200("ManagePlayerQuit: Release quit context - due to wrong phase for quit");
			RELEASE_SCRIPT_USE_CONTEXT(bLocal_41);
		}
	}
	return;
}

bool Function_11(bool bParam0) //Position: 0xB31 / 2865
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	bool bVar5;
	float fVar6;
	
	iVar0 = GET_PLAYER_PADINDEX_NO_ACTOR(0);
	bVar1 = GET_CURRENT_GAME_TIME();
	vVar2 = { GET_STICK_X(iVar0, 0, 1), GET_STICK_Y(iVar0, 0, 1), 0.0f };
	bVar5 = VMAG(vVar2);
	if (bVar5 >= 0.2f)
	{
		DECOR_SET_BOOL(bParam0, "StickReset", true);
	}
	else if (bVar5 < 0.75f && DECOR_CHECK_EXIST(bParam0, "StickReset"))
	{
		if (!DECOR_GET_FLOAT_VERBOSE(bParam0, "DisconnectTime", &fVar6))
		{
			DECOR_SET_FLOAT(bParam0, "DisconnectTime", bVar1);
		}
		else if ((bVar1 - fVar6) < 0.15f)
		{
			DECOR_REMOVE(bParam0, "StickReset");
			DECOR_REMOVE(bParam0, "DisconnectTime");
			return 1;
		}
	}
	DECOR_REMOVE(bParam0, "DisconnectTime");
	return 0;
}

bool Function_12(bool bParam0, bool bParam1, int iParam2) //Position: 0xC2B / 3115
{
	int iVar0;
	bool bVar1;
	
	bVar1 = GET_GRINGO_BOOL_ATTR(bParam1, bParam0, &iVar0);
	if (iVar0 >= 0)
	{
		return bVar1;
	}
	return iParam2;
}

bool Function_13(bool bParam0, int iParam1) //Position: 0xC47 / 3143
{
	return Function_14(bParam0, "UseQuit", iParam1);
}

bool Function_14(bool bParam0, bool bParam1, int iParam2) //Position: 0xC5E / 3166
{
	int iVar0;
	bool bVar1;
	
	bVar1 = GET_GRINGO_STRING_ATTR(bParam1, bParam0, &iVar0);
	*iParam2 = iVar0 < 0;
	if (*iParam2)
	{
		if (STRING_LENGTH(bVar1) != 0 || STRINGS_ARE_EQUAL(bVar1, "NoString"))
		{
			*iParam2 = 0;
			return bLocal_11;
		}
		return bVar1;
	}
	return bLocal_11;
}

float Function_15(bool bParam0) //Position: 0xCA3 / 3235
{
	return Function_16(bParam0, "MinimumUseTime", 0.0f);
}

bool Function_16(bool bParam0, bool bParam1, int iParam2) //Position: 0xCC0 / 3264
{
	int iVar0;
	
	iVar0 = iParam2;
	GET_GRINGO_FLOAT_ATTR(&iVar0, bParam1, bParam0);
	return iVar0;
}

float Function_17(int iParam0) //Position: 0xCD6 / 3286
{
	if (Function_19(iParam0))
	{
		if (Function_18(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_18(int iParam0) //Position: 0xD9E / 3486
{
	return Function_78(*iParam0, 2);
}

bool Function_19(int iParam0) //Position: 0xDAB / 3499
{
	return Function_78(*iParam0, 1);
}

bool Function_20(var uParam0, int iParam1) //Position: 0xDB8 / 3512
{
	bool bVar0;
	
	bVar0 = DECOR_CHECK_EXIST(uParam0->f_16, "GringoNoQuit");
	if (!bVar0)
	{
		return 1;
	}
	if (iParam1 && bVar0)
	{
		DECOR_REMOVE(uParam0->f_16, "GringoNoQuit");
		return 0;
	}
	return 0;
}

bool Function_21(int iParam0) //Position: 0xE00 / 3584
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	var uVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	int iVar11;
	bool bVar12;
	bool bVar13;
	var uVar14;
	var uVar15;
	int iVar16;
	vector3 vVar17;
	float fVar20;
	bool bVar21;
	bool bVar22;
	int iVar23;
	float fVar24;
	vector3 vVar25;
	bool bVar28;
	vector3 vVar29;
	int iVar32;
	bool bVar33;
	bool bVar34;
	bool bVar35;
	bool bVar36;
	bool bVar37;
	int iVar38;
	bool bVar39;
	bool bVar40;
	bool bVar41;
	float fVar42;
	int iVar43;
	float fVar44;
	float fVar45;
	int iVar46;
	bool bVar47;
	bool bVar48;
	bool bVar49;
	bool bVar50;
	bool bVar51;
	var uVar52;
	bool bVar53;
	int iVar54;
	int iVar55;
	bool bVar56;
	vector3 vVar57;
	bool bVar60;
	
	bVar12 = Function_77(iParam0->f_12);
	if (!(IS_ACTOR_VALID(iParam0->f_16) && IS_ACTOR_ALIVE(iParam0->f_16)))
	{
		Function_184("UpdateUse with invalid actor", iParam0->f_16);
		return 0;
	}
	if (!Function_12(iParam0->f_12, "DenyDamageTermination", 0))
	{
		if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(iParam0->f_16)) >= 0.5f)
		{
			Function_184("Damage quit", iParam0->f_16);
			return 0;
		}
	}
	if (GET_ACTOR_INCAPACITATED(iParam0->f_16))
	{
		Function_184("Incapacitation quit", iParam0->f_16);
		return 0;
	}
	GET_POSITION(iParam0->f_16, &vVar17);
	bVar21 = true;
	if (iParam0->f_44 < 4)
	{
		iVar23 = STRING_TO_HASH("SharedPropName");
	}
	switch (iParam0->f_44)
	{
		case 0x00000002:
			bLocal_40 = true;
			if (IS_ACTOR_PLAYER(iParam0->f_16))
			{
				if (Function_76(iParam0->f_12, &fVar24))
				{
					GET_OBJECT_POSITION(GRINGO_GET_MY_OBJECT_REF(), &vVar25);
					vVar25.f_4 = (vVar25.y + (fVar24 + 0.1f));
					if (IS_OBJECT_VALID(GET_TARGET_OBJECT()))
					{
						bVar28 = IS_AREA_OBSTRUCTED2(vVar25, fVar24, GET_PHYSINST_FROM_ACTOR(iParam0->f_16), GET_PHYSINST_FROM_OBJECT(GET_TARGET_OBJECT()), 0);
					}
					else
					{
						bVar28 = IS_AREA_OBSTRUCTED(vVar25, fVar24, iParam0->f_16, 0);
					}
					if (IS_ACTOR_ON_TRAIN(iParam0->f_16, 0) || bVar28)
					{
						DECOR_SET_BOOL(GRINGO_GET_MY_OBJECT_REF(), "Obstructed", true);
						iParam0->f_44 = 7;
						Function_2("Skip to eRewarding", iParam0->f_16);
						break;
					}
				}
			}
			if (GRINGO_HANDLES_MOVEMENT(iParam0->f_12))
			{
				if (Function_74(iParam0->f_16, iParam0->f_12))
				{
					Function_2("Navigation complete (going to eStarting)", iParam0->f_16);
					NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 1);
					iParam0->f_44 = 1;
					Function_73(iParam0);
				}
			}
			else
			{
				NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 1);
				iParam0->f_44 = 1;
				Function_73(iParam0);
			}
			if (!Function_72(iParam0->f_12) && iParam0->f_44 != 1)
			{
				Function_2("SET_ACTOR_POSTURE", iParam0->f_16);
				SET_ACTOR_POSTURE(iParam0->f_16, 0);
			}
			break;
		
		case 0x00000001:
			bLocal_40 = true;
			Function_71(iParam0->f_12);
			if (((!Global_63096 && IS_ACTOR_LOCAL_PLAYER(iParam0->f_16)) && !Function_78(iParam0->f_40, 1)) && !DECOR_CHECK_EXIST(iParam0->f_16, "NoGringoCamera"))
			{
				Function_67(iParam0->f_12);
			}
			fVar20 = Function_66(iParam0->f_12);
			if (Function_17(iParam0) < fVar20)
			{
				Function_2("INTRO TIMED OUT - ABORTING", iParam0->f_16);
				return 0;
			}
			if (Function_78(iParam0->f_40, 1))
			{
				Function_61(iParam0->f_12, &vVar3, &uVar6);
				if (!Function_78(iParam0->f_40, 16))
				{
					if (GRINGO_SHOULD_SUSPEND_MOVER(iParam0->f_12))
					{
						Function_2("SUSPEND MOVER", iParam0->f_16);
						SUSPEND_MOVER(iParam0->f_16);
						Function_60(iParam0 + 40, 16);
					}
					if (GRINGO_SHOULD_FIX_MOVER(iParam0->f_12))
					{
						Function_2("nFIX MOVER", iParam0->f_16);
						SET_MOVER_FROZEN(iParam0->f_16, 1);
						Function_60(iParam0 + 40, 16);
					}
				}
				Function_2("MID ACTION TELEPORT", iParam0->f_16);
				vVar29.y = uVar6;
				if (DECOR_CHECK_EXIST(iParam0->f_16, "NoTeleport"))
				{
					SET_OBJECT_POSITION(iParam0->f_16, vVar3);
					SET_OBJECT_ORIENTATION(iParam0->f_16, vVar29);
					DECOR_REMOVE(iParam0->f_16, "NoTeleport");
				}
				else
				{
					TELEPORT_ACTOR_WITH_HEADING(iParam0->f_16, vVar3, uVar6, 1, 1, Function_59());
				}
				if (!Function_78(iParam0->f_40, 1024))
				{
					Function_60(iParam0 + 40, 1024);
					SET_ACTOR_CAN_PLAY_GESTURES(iParam0->f_16, Function_12(iParam0->f_12, "AllowGestures", 1));
				}
				iParam0->f_44 = 3;
			}
			else if (Function_74(iParam0->f_16, iParam0->f_12))
			{
				NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 1);
				Function_2("FINISHED NAVIGATION", iParam0->f_16);
				if (!Function_78(iParam0->f_40, 1024))
				{
					Function_60(iParam0 + 40, 1024);
					SET_ACTOR_CAN_PLAY_GESTURES(iParam0->f_16, Function_12(iParam0->f_12, "AllowGestures", 1));
				}
				iParam0->f_44 = 3;
			}
			if (iParam0->f_44 != 3 && !Function_78(iParam0->f_40, 16))
			{
				if (GRINGO_SHOULD_SUSPEND_MOVER(iParam0->f_12))
				{
					Function_2("SUSPEND MOVER", iParam0->f_16);
					SUSPEND_MOVER(iParam0->f_16);
					Function_60(iParam0 + 40, 16);
				}
				if (GRINGO_SHOULD_FIX_MOVER(iParam0->f_12))
				{
					Function_2("nFIX MOVER", iParam0->f_16);
					SET_MOVER_FROZEN(iParam0->f_16, 1);
					Function_60(iParam0 + 40, 16);
				}
			}
			break;
		
		case 0x00000003:
			if (Function_78(iParam0->f_40, 32))
			{
				bLocal_40 = true;
				if (!ACTOR_IS_HOLSTERED(iParam0->f_16))
				{
					break;
				}
				Function_2("FINISHED HOLSTERING", iParam0->f_16);
			}
			iParam0->f_44 = 4;
		
		case 0x00000004:
			Function_58(iParam0->f_12);
			bLocal_40 = true;
			Function_57(iParam0);
			Function_54(iParam0, Function_56(iParam0->f_12));
			if (DECOR_CHECK_EXIST(iParam0->f_16, "LobbyGringo"))
			{
				SET_FORCED_LOOK_ENABLE(iParam0->f_16, 0);
			}
			bVar33 = !GET_GRINGO_BOOL_ATTR("NoMidActionAnim", iParam0->f_12, &iVar32);
			if (iVar32 == 0)
			{
				bVar33 = Function_78(iParam0->f_40, 1);
			}
			bVar0 = Function_53(iParam0->f_16, iParam0->f_12, bVar33);
			if (!IS_GRINGO_COMPONENT_VALID(bVar0))
			{
				iParam0->f_44 = 5;
				if (IS_ACTOR_LOCAL_PLAYER(iParam0->f_16) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(iParam0->f_12))
				{
					GRINGO_ENABLE_PLAYER_CONTROL(iParam0->f_16, 1);
				}
			}
			else if (bVar12)
			{
				if (GRINGO_PLAY_ANIM_ON_ACTOR(iParam0->f_16, bVar0, bVar33))
				{
					if (IS_ACTOR_LOCAL_PLAYER(iParam0->f_16) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(iParam0->f_12))
					{
						GRINGO_ENABLE_PLAYER_CONTROL(iParam0->f_16, 1);
					}
					iParam0->f_44 = 5;
					iVar11 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, iParam0->f_12, 0);
					while (iVar11 >= 4294967295)
					{
						bVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar11, iParam0->f_12);
						if (GRINGO_ATTACH_PROP_TO_ANIM(iParam0->f_16, bVar1, Function_14(bVar1, "AttachBone", &bVar10), Function_14(bVar1, "AttachLocator", &bVar10), 1))
						{
							Function_52(bVar1, iParam0->f_16);
							if (DECOR_CHECK_EXIST(iParam0->f_16, "LobbyGringo"))
							{
								bVar34 = GRINGO_GET_PROP_FROM_COMPONENT(bVar1);
								if (IS_PHYSINST_VALID(bVar34))
								{
									ADD_CAMERA_COLLISION_EXCLUSION(GET_GAME_CAMERA(), bVar34, 0);
								}
							}
						}
						iVar11 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, iParam0->f_12, iVar11 + 1);
					}
					bVar13 = false;
					uVar15 = GRINGO_GET_ATTRIBUTE(iParam0->f_12, bVar13);
					while (bVar13 <= GRINGO_GET_ATTRIBUTE_COUNT(iParam0->f_12))
					{
						uVar15 = GRINGO_GET_ATTRIBUTE(iParam0->f_12, bVar13);
						if (GRINGO_IS_ATTRIBUTE_VALID(uVar15))
						{
							if (GRINGO_GET_ATTR_TYPE_BY_HANDLE(uVar15) == 2)
							{
								if (iVar23 == GRINGO_GET_ATTRIBUTE_HASH(uVar15))
								{
									iVar16 = GRINGO_GET_STRING_ATTR_BY_HANDLE(uVar15, &uVar14);
									iVar11 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD(iVar16, 1, GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 0), 0);
									while (iVar11 >= 4294967295)
									{
										bVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar11, GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 0));
										if (GRINGO_ATTACH_PROP_TO_ANIM(iParam0->f_16, bVar1, Function_14(bVar1, "AttachBone", &bVar10), Function_14(bVar1, "AttachLocator", &bVar10), 1))
										{
											if (DECOR_CHECK_EXIST(iParam0->f_16, "LobbyGringo"))
											{
												bVar35 = GRINGO_GET_PROP_FROM_COMPONENT(bVar1);
												if (IS_PHYSINST_VALID(bVar35))
												{
													ADD_CAMERA_COLLISION_EXCLUSION(GET_GAME_CAMERA(), bVar35, 0);
												}
											}
											Function_52(bVar1, iParam0->f_16);
										}
										iVar11 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD(iVar16, 1, GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 0), iVar11 + 1);
									}
								}
							}
						}
						bVar13++;
					}
				}
			}
			if (iParam0->f_44 == 5)
			{
				Function_2("KICKED TO DOING START", iParam0->f_16);
				bVar8 = GET_TARGET_OBJECT();
				if (IS_OBJECT_VALID(bVar8))
				{
					Function_43(iParam0, bVar8, &iLocal_39, &cLocal_38);
					if (GET_OBJECT_TYPE(bVar8) != 15)
					{
						bVar22 = GET_PHYSINST_FROM_OBJECT(bVar8);
						if (IS_PHYSINST_VALID(bVar22))
						{
							if (!IS_PROP_FIXED(bVar22))
							{
								Function_60(iParam0 + 40, 256);
								SET_PROP_FIXED(bVar22, 1);
							}
							else
							{
								Function_42(iParam0 + 40, 256);
							}
						}
					}
				}
				GET_POSITION_OBJECT_SPACE(GRINGO_GET_MY_OBJECT_REF(), vVar17, iParam0 + 20);
				if (Function_78(iParam0->f_40, 16))
				{
					if (GRINGO_SHOULD_SUSPEND_MOVER(iParam0->f_12))
					{
						Function_2("SCHEDULE STOP CUSTOM UNSUSPEND", iParam0->f_16);
						UNK_0x4A1D2E25(iParam0->f_16);
					}
					if (GRINGO_SHOULD_FIX_MOVER(iParam0->f_12))
					{
						Function_2("SCHEDULE STOP CUSTOM UNFIX", iParam0->f_16);
						UNK_0x817B6952(iParam0->f_16);
					}
				}
				GRINGO_SET_CHILD_USE_ACTIVATIONS(iParam0->f_12, 1);
				if (Function_41(iParam0->f_12))
				{
					GRINGO_SET_COMMON_LAYER_USE_ACTIVATIONS(iParam0->f_12, 0);
				}
				if (IS_GRINGO_COMPONENT_VALID(bVar0))
				{
					if (Function_40(iParam0->f_12))
					{
						bVar2 = GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 3);
						if (IS_GRINGO_COMPONENT_VALID(bVar2))
						{
							bVar9 = Function_39(bVar2);
							if (IS_ACTOR_VALID(bVar9))
							{
								SET_LINKED_ANIM_TARGET(iParam0->f_16, bVar9);
							}
						}
					}
					else if (Function_38(iParam0->f_12))
					{
						bVar2 = GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 3);
						if (IS_GRINGO_COMPONENT_VALID(bVar2))
						{
							bVar9 = Function_39(bVar2);
							if (IS_ACTOR_VALID(bVar9))
							{
								SET_LINKED_ANIM_TARGET(bVar9, iParam0->f_16);
							}
						}
					}
					bVar10 = false;
					bVar7 = Function_37(iParam0->f_12, &bVar10);
					if (bVar10)
					{
						bVar2 = GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 3);
						if (IS_GRINGO_COMPONENT_VALID(bVar2))
						{
							bVar9 = Function_39(bVar2);
							if (IS_ACTOR_VALID(bVar9))
							{
								SET_ACTION_NODE_FOR_ACTOR(bVar9, bVar7);
							}
						}
					}
				}
				if (Function_36(iParam0->f_12))
				{
					if (!GET_ACTOR_ONE_SHOT_DEATH_STATUS(iParam0->f_16))
					{
						Function_60(iParam0 + 40, 8);
					}
					else
					{
						Function_42(iParam0 + 40, 8);
					}
					if (Function_78(iParam0->f_40, 8))
					{
						SET_ACTOR_ONE_SHOT_DEATH(iParam0->f_16, 1);
					}
				}
				else
				{
					Function_42(iParam0 + 40, 8);
				}
				if (Function_35(iParam0->f_12))
				{
					NET_SET_NODE_REPLICATION(iParam0->f_16, 1, 1);
					UNK_0xC17BAD12(iParam0->f_16);
				}
				bVar37 = Function_14(iParam0->f_12, "CustomReactNode", &bVar36);
				if (bVar36)
				{
					SET_REACT_NODE_FOR_ACTOR(iParam0->f_16, bVar37);
				}
				iVar38 = 1;
				bVar39 = Function_12(iParam0->f_12, "CanAnimalsAttack", iVar38);
				if (!bVar39)
				{
					if (IS_ACTOR_VALID(iParam0->f_16))
					{
						SET_ANIMAL_CAN_ATTACK(iParam0->f_16, 0);
					}
				}
				Function_34(iParam0->f_16, iParam0->f_12);
				bVar40 = Function_12(iParam0->f_12, "AllowTalking", 1);
				if (!bVar40)
				{
					STOP_PED_SPEAKING(iParam0->f_16, 1);
				}
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_LOCAL_PLAYER(iParam0->f_16))
			{
				Function_33();
			}
			iParam0->f_44 = 6;
			if (Function_78(iParam0->f_40, 1))
			{
				if (Function_32(iParam0->f_12))
				{
					Function_2("MID ACTION NODE", iParam0->f_16);
				}
			}
		
		case 0x00000006:
			if (!Function_31(iParam0->f_16, iParam0->f_12))
			{
				Function_2("CUSTOM QUIT DURING USE", iParam0->f_16);
				iParam0->f_44 = 8;
			}
			bVar0 = Function_53(iParam0->f_16, iParam0->f_12, Function_78(iParam0->f_40, 1));
			if (IS_GRINGO_COMPONENT_VALID(bVar0))
			{
				if (!GRINGO_IS_ACTOR_PLAYING_ANIM(iParam0->f_16, bVar0))
				{
					Function_2("ANIMATION QUIT DURING USE", iParam0->f_16);
					if (GRINGO_WAS_USE_SUCCESSFUL(iParam0->f_16))
					{
						iParam0->f_44 = 7;
					}
					else
					{
						iParam0->f_44 = 8;
					}
				}
			}
			if (Function_17(iParam0) <= Function_15(iParam0->f_12))
			{
				GRINGO_SATISFY_MOTIVES_OF_ACTOR(iParam0->f_16, iParam0->f_12);
			}
			if (!IS_ACTOR_PLAYER(iParam0->f_16))
			{
				if (AI_SPEECH_GET_ALLOW_FOR_ACTOR(iParam0->f_16))
				{
					bVar41 = GRINGO_GET_FIRST_NAMED_CHILD("SpeechConts", 4, iParam0->f_12);
					if (IS_GRINGO_COMPONENT_VALID(bVar41))
					{
						if (!DECOR_GET_FLOAT_VERBOSE(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime", &fVar42))
						{
							DECOR_SET_FLOAT(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime", GET_CURRENT_GAME_TIME());
						}
						else
						{
							iVar43 = GRINGO_GET_ATTRIBUTE_COUNT(bVar41);
							if (!GET_GRINGO_FLOAT_ATTR(&fVar45, "MinDelay", bVar41))
							{
								fVar45 = 10.0f;
							}
							else
							{
								iVar43 = (iVar43 - 1);
							}
							if (!GET_GRINGO_FLOAT_ATTR(&fVar44, "MaxDelay", bVar41))
							{
								fVar44 = 30.0f;
							}
							else
							{
								iVar43 = (iVar43 - 1);
							}
							bVar48 = GET_GRINGO_BOOL_ATTR("nForcePlay", bVar41, &iVar46);
							if (iVar46 != 0)
							{
								iVar43 = (iVar43 - 1);
							}
							bVar47 = GET_GRINGO_BOOL_ATTR("AllowRepeat", bVar41, &iVar46);
							if (iVar46 != 0)
							{
								iVar43 = (iVar43 - 1);
							}
							bVar49 = GET_GRINGO_BOOL_ATTR("SubtitlesOn", bVar41, &iVar46);
							if (iVar46 != 0)
							{
								iVar43 = (iVar43 - 1);
							}
							bVar50 = GET_GRINGO_BOOL_ATTR("ForceThruSpeechBlock", bVar41, &iVar46);
							if (iVar46 != 0)
							{
								iVar43 = (iVar43 - 1);
							}
							if (iVar43 >= 0)
							{
								if (GET_CURRENT_GAME_TIME() - fVar42) <= RAND_FLOAT_RANGE(fVar45, fVar44)
								{
									DECOR_SET_FLOAT(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime", GET_CURRENT_GAME_TIME());
									bVar51 = RAND_INT_RANGE(false, (iVar43 - 1));
									uVar52 = GRINGO_GET_ATTRIBUTE(bVar41, bVar51);
									bVar53 = GRINGO_GET_STRING_ATTR_BY_HANDLE(uVar52, &iVar46);
									iVar54 = 1;
									STRING_CLEAR_TOKENIZER();
									iVar55 = SET_OWNERSHIP_STRAGGLER(bVar53, ",");
									if (iVar55 >= 1)
									{
										bVar56 = STRING_GET_TOKEN(1);
										if (STRINGS_ARE_EQUAL("super", bVar56))
										{
											iVar54 = 3;
										}
										else if (STRINGS_ARE_EQUAL("shout", bVar56))
										{
											iVar54 = 2;
										}
										else
										{
											iVar54 = 1;
										}
										bVar53 = STRING_GET_TOKEN(0);
									}
									SAY_SINGLE_LINE_STRING(iParam0->f_16, bVar53, bVar48, bVar47, iVar54, 0, bVar49, bVar50);
								}
							}
						}
					}
				}
			}
			if (iParam0->f_44 == 6)
			{
				bVar60 = Function_30(iParam0->f_12);
				if (bVar60 <= 0.0f)
				{
					GET_POSITION_OBJECT_SPACE(GRINGO_GET_MY_OBJECT_REF(), vVar17, &vVar57);
					if (VDIST(vVar57, *(iParam0 + 20)) < bVar60)
					{
						Function_2("UPDATE USE TOO FAR", iParam0->f_16);
						if (Function_29())
						{
							PRINTSTRING("   Distance was: ");
							PRINTFLOAT(VDIST(vVar57, *(iParam0 + 20)));
							PRINTSTRING(" [Max allowed is: ");
							PRINTFLOAT(bVar60);
							PRINTSTRING(" ] ");
							PRINTNL();
						}
						iParam0->f_44 = 8;
					}
				}
			}
			if (iParam0->f_44 == 6)
			{
				if (NET_IS_IN_SESSION())
				{
					bVar21 = NET_IS_OBJECT_LOCAL(iParam0->f_16);
				}
				if (IS_TASKED_TO_USE_GRINGO_FOREVER(iParam0->f_16, GRINGO_GET_MY_GRINGO_ID()))
				{
					bVar21 = false;
				}
				if (bVar21)
				{
					if (Function_28(iParam0->f_12) <= 0.0f)
					{
						if (Function_17(iParam0) < Function_28(iParam0->f_12))
						{
							Function_2("UPDATE USE USETIME SATISFIED", iParam0->f_16);
							iParam0->f_44 = 7;
						}
					}
				}
			}
			break;
		
		case 0x00000007:
			Function_200("nRewarding");
			Function_27(iParam0->f_16, iParam0->f_12);
			Function_26(iParam0->f_16, iParam0->f_12);
			Function_25(iParam0->f_16, iParam0->f_12);
			SET_GRINGO_OBJECT_REF_ATTR(iParam0->f_16, "LastUserObject", iParam0->f_12);
			Function_60(iParam0 + 40, 64);
			iParam0->f_44 = 8;
			break;
		
		case 0x00000008:
			bLocal_40 = true;
			if (!Global_63096 && IS_ACTOR_LOCAL_PLAYER(iParam0->f_16))
			{
				if (!DECOR_CHECK_EXIST(iParam0->f_16, "NoGringoCamera"))
				{
					if (!Function_12(iParam0->f_12, "GringoCamNoEndCut", 0))
					{
						if (!Function_24())
						{
							Function_67(iParam0->f_12);
						}
					}
				}
				else
				{
					DECOR_REMOVE(iParam0->f_16, "NoGringoCamera");
				}
			}
			if (Function_12(iParam0->f_12, "DoNotCleanUpUserSettings", 0))
			{
				Function_2("Use case quits - no cleapup due to DoNotCleanUpUserSettings attribute", iParam0->f_16);
				return 0;
			}
			Function_2("GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS", iParam0->f_16);
			GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS(iParam0->f_16);
			iParam0->f_44 = 9;
			Function_23(iParam0->f_16, iParam0->f_12);
			break;
		
		case 0x00000009:
			if (Function_78(iParam0->f_40, 1024))
			{
				Function_42(iParam0 + 40, 1024);
				if (!Function_12(iParam0->f_12, "AllowGestures", 0))
				{
					SET_ACTOR_CAN_PLAY_GESTURES(iParam0->f_16, true);
				}
			}
			if (DECOR_CHECK_EXIST(iParam0->f_16, "LobbyGringo"))
			{
				SET_FORCED_LOOK_ENABLE(iParam0->f_16, 1);
			}
			bLocal_40 = true;
			bVar0 = Function_53(iParam0->f_16, iParam0->f_12, Function_78(iParam0->f_40, 1));
			if (IS_GRINGO_COMPONENT_VALID(bVar0))
			{
				if (!GRINGO_IS_ACTOR_PLAYING_ANIM(iParam0->f_16, bVar0))
				{
					Function_2("ANIMATION FINISHED", iParam0->f_16);
					return 0;
				}
			}
			return 0;
			break;
	}
	Function_22(iParam0->f_16, iParam0->f_44);
	return 1;
}

void Function_22(bool bParam0, int iParam1) //Position: 0x1F51 / 8017
{
	if (IS_ACTOR_VALID(bParam0))
	{
		REPORT_GRINGO_USE_PHASE(bParam0, iParam1);
	}
	return;
}

void Function_23(var uParam0, var uParam1) //Position: 0x1F66 / 8038
{
	uParam1 = uParam1;
	uParam0 = uParam0;
	return;
}

bool Function_24() //Position: 0x1F74 / 8052
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(GRINGO_GET_MY_OBJECT_REF()))
	{
		bVar0 = FIND_OBJECT_IN_OBJECT(GRINGO_GET_MY_OBJECT_REF(), "GringoCamera");
		if (IS_OBJECT_VALID(bVar0))
		{
			return 1;
		}
	}
	return 0;
}

void Function_25(var uParam0, bool bParam1) //Position: 0x1FA5 / 8101
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	
	iVar0 = GRINGO_GET_ATTRIBUTE_COUNT(bParam1);
	iVar2 = STRING_TO_HASH("RemoveCapability");
	bVar1 = false;
	while (bVar1 < (iVar0 - 1))
	{
		uVar3 = GRINGO_GET_ATTRIBUTE(bParam1, bVar1);
		iVar4 = GRINGO_GET_ATTRIBUTE_HASH(uVar3);
		if (iVar4 == iVar2)
		{
			iVar5 = 0;
			uVar6 = GRINGO_GET_STRING_ATTR_BY_HANDLE(uVar3, &iVar5);
			if (iVar5 >= 0)
			{
				if (HAS_CAPABILITY(uParam0, uVar6))
				{
					REMOVE_CAPABILITY(uParam0, uVar6);
				}
			}
		}
		bVar1++;
	}
	return;
}

void Function_26(var uParam0, bool bParam1) //Position: 0x2019 / 8217
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	
	iVar0 = GRINGO_GET_ATTRIBUTE_COUNT(bParam1);
	iVar2 = STRING_TO_HASH("AddCapability");
	bVar1 = false;
	while (bVar1 < (iVar0 - 1))
	{
		uVar3 = GRINGO_GET_ATTRIBUTE(bParam1, bVar1);
		iVar4 = GRINGO_GET_ATTRIBUTE_HASH(uVar3);
		if (iVar4 == iVar2)
		{
			iVar5 = 0;
			uVar6 = GRINGO_GET_STRING_ATTR_BY_HANDLE(uVar3, &iVar5);
			if (iVar5 >= 0)
			{
				if (!HAS_CAPABILITY(uParam0, uVar6))
				{
					ADD_CAPABILITY(uParam0, uVar6);
				}
			}
		}
		bVar1++;
	}
	return;
}

void Function_27(var uParam0, int iParam1) //Position: 0x208B / 8331
{
	iParam1 = iParam1;
	uParam0 = uParam0;
	return;
}

float Function_28(bool bParam0) //Position: 0x2099 / 8345
{
	return Function_16(bParam0, "UseTime", 5.0f);
}

bool Function_29() //Position: 0x20AF / 8367
{
	return (GET_DEBUG_DRAW_STATE() && GRINGO_DEBUG_IS_SELECTED());
}

bool Function_30(bool bParam0) //Position: 0x20BC / 8380
{
	return Function_16(bParam0, "MoveAllowance", 1.5f);
}

bool Function_31(var uParam0, int iParam1) //Position: 0x20DC / 8412
{
	iParam1 = iParam1;
	uParam0 = uParam0;
	iLocal_17++;
	if (iLocal_17 > 90)
	{
		return 0;
	}
	return 1;
}

bool Function_32(bool bParam0) //Position: 0x20FA / 8442
{
	return IS_GRINGO_COMPONENT_VALID(GRINGO_GET_FIRST_NAMED_CHILD("PlayerUseAnim", 2, bParam0));
}

void Function_33() //Position: 0x2119 / 8473
{
	return;
}

void Function_34(bool bParam0, int iParam1) //Position: 0x211F / 8479
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	iParam1 = iParam1;
	bVar0 = GRINGO_GET_MY_OBJECT_REF();
	if (IS_OBJECT_ATTACHED(bVar0))
	{
		iVar1 = _GET_OBJECT_ATTACHMENT(bVar0);
		if (IS_ATTACHMENT_VALID(iVar1))
		{
			bVar2 = GET_OBJECT_ATTACHED_TO(iVar1);
			if (IS_OBJECT_VALID(bVar2))
			{
				iLocal_12 = ATTACH_OBJECTS_CONTINUOUS(bParam0, bVar2, 4294967295);
			}
		}
	}
	RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
	return;
}

bool Function_35(int iParam0) //Position: 0x2167 / 8551
{
	iParam0 = iParam0;
	return 1;
}

bool Function_36(bool bParam0) //Position: 0x2172 / 8562
{
	return Function_12(bParam0, "OneShotKill", 0);
}

bool Function_37(bool bParam0, int iParam1) //Position: 0x218C / 8588
{
	return Function_14(bParam0, "ParentAnimNode", iParam1);
}

bool Function_38(bool bParam0) //Position: 0x21AA / 8618
{
	return Function_12(bParam0, "LinkToParentAnim", 0);
}

bool Function_39(bool bParam0) //Position: 0x21C9 / 8649
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < (Local_21 - 1))
	{
		if (Local_21[iVar012].f_12 == bParam0)
		{
			return Local_21[iVar012].f_16;
		}
		iVar0++;
	}
	return iVar1;
}

bool Function_40(bool bParam0) //Position: 0x21FC / 8700
{
	return Function_12(bParam0, "LinkParentToAnim", 0);
}

bool Function_41(bool bParam0) //Position: 0x221B / 8731
{
	return Function_12(bParam0, "SingularUse", 0);
}

void Function_42(int iParam0, int iParam1) //Position: 0x2235 / 8757
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

void Function_43(var uParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x2248 / 8776
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	char* cVar11;
	char* cVar12;
	bool bVar13;
	
	PRINTSTRING("CALLED ManageTargetRelation");
	PRINTNL();
	iVar2 = Function_51(uParam0->f_12, &bVar0);
	uVar3 = Function_50(uParam0->f_12, &bVar1);
	bVar4 = Function_49(uParam0->f_12);
	if (!((bVar0 || bVar1) || IS_GRINGO_COMPONENT_VALID(bVar4)))
	{
		bVar6 = Function_48(uParam0->f_12, &bVar5);
		if (bVar5)
		{
			bVar8 = Function_47(uParam0->f_12, &bVar7);
			if (!bVar7)
			{
				LOG_ERROR("Provided target physical attachment bone with no corresponding user attachment");
				return;
			}
			uParam0->f_32 = ATTACH_OBJECTS_PHYSICAL(bParam1, uParam0->f_16, bVar6, bVar8, 0.02f);
		}
		return;
	}
	bVar9 = true;
	if (bVar0)
	{
		bVar9 = ATTACH_SLOT_FROM_STRING(iVar2);
		if (Function_29())
		{
			Function_46();
			PRINTSTRING(" - got attach slot for target: ");
			PRINTINT(bVar9);
			PRINTNL();
		}
	}
	if (bVar1)
	{
		ATTACH_PROP_TO_ANIM(uParam0->f_16, bParam1, uVar3, Function_45(uParam0->f_12, &bVar10), false, bVar9);
	}
	else
	{
		ATTACH_PROP_TO_ANIM(uParam0->f_16, bParam1, Function_44(), Function_45(uParam0->f_12, &bVar10), false, bVar9);
	}
	if (IS_GRINGO_COMPONENT_VALID(bVar4))
	{
		PRINTSTRING("HAVE TARGET ANIM");
		PRINTNL();
		if (IS_GRINGO_COMPONENT_VALID(*uParam2))
		{
			LOG_ERROR("Cannot set a target skeleton anim while one is already playing");
			return;
		}
		if (IS_OBJECT_ANIMATOR_VALID(*uParam3))
		{
			LOG_ERROR("sTargetSkelAnimator not cleared correctly on previous anim");
			DESTROY_OBJECT_ANIMATOR(*uParam3);
		}
		cVar11 = GRINGO_GET_ACTOR_SPECIFIC_AST_FILENAME(bVar4, uParam0->f_16);
		cVar12 = GRINGO_ANIM_GET_ACT_FILENAME(bVar4);
		bVar13 = GRINGO_ANIM_GET_ACT_ROOTNODE(bVar4);
		*uParam3 = CREATE_OBJECT_ANIMATOR_ON_OBJECT(bParam1, cVar11, cVar12, bVar13);
		if (IS_OBJECT_ANIMATOR_VALID(*uParam3))
		{
			if (Function_12(bVar4, "LinkToUser", 0))
			{
				if (Function_29())
				{
					Function_46();
					PRINTSTRING(" - linking target at slot: ");
					PRINTINT(bVar9);
					PRINTNL();
				}
				LINK_OBJECT_ANIMATOR_TO_ACTOR(*uParam3, uParam0->f_16, bVar9);
			}
		}
		else
		{
			LOG_ERROR("sTargetSkelAnimator not cleared correctly!");
		}
		*uParam2 = uParam0->f_12;
	}
}

var Function_44() //Position: 0x2530 / 9520
{
	int iVar0;
	
	return iVar0;
}

bool Function_45(bool bParam0, bool bParam1) //Position: 0x2538 / 9528
{
	return Function_14(bParam0, "TargetLocator", bParam1);
}

void Function_46() //Position: 0x2555 / 9557
{
	PRINTSTRING(GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF()));
	return;
}

bool Function_47(bool bParam0, int iParam1) //Position: 0x2564 / 9572
{
	return Function_14(bParam0, "UserPhysAttachBone", iParam1);
}

bool Function_48(bool bParam0, int iParam1) //Position: 0x2586 / 9606
{
	return Function_14(bParam0, "TargetPhysAttachBone", iParam1);
}

var Function_49(bool bParam0) //Position: 0x25AA / 9642
{
	return GRINGO_GET_FIRST_NAMED_CHILD("TargetSkelAnim", 2, bParam0);
}

bool Function_50(bool bParam0, int iParam1) //Position: 0x25C7 / 9671
{
	return Function_14(bParam0, "TargetAttachBone", iParam1);
}

bool Function_51(bool bParam0, int iParam1) //Position: 0x25E7 / 9703
{
	return Function_14(bParam0, "TargetAttachSlot", iParam1);
}

void Function_52(bool bParam0, bool bParam1) //Position: 0x2607 / 9735
{
	bool bVar0;
	bool bVar1;
	char* cVar2;
	char* cVar3;
	bool bVar4;
	char* cVar5;
	char* cVar6;
	
	bVar0 = GRINGO_GET_FIRST_CHILD(2, bParam0);
	if (IS_GRINGO_COMPONENT_VALID(bVar0))
	{
		cVar2 = GRINGO_GET_ACTOR_SPECIFIC_AST_FILENAME(bVar0, bParam1);
		cVar3 = GRINGO_ANIM_GET_ACT_FILENAME(bVar0);
		bVar4 = GRINGO_ANIM_GET_ACT_ROOTNODE(bVar0);
		bVar1 = GRINGO_GET_PHYSINST(bParam0);
		if (IS_PHYSINST_VALID(bVar1))
		{
			cVar5 = GET_OBJECT_ANIMATOR_ON_OBJECT(bVar1);
			if (IS_OBJECT_ANIMATOR_VALID(cVar5))
			{
				LOG_ERROR("Previous object animator not cleared - destroying now!");
				DESTROY_OBJECT_ANIMATOR(cVar5);
			}
			cVar6 = CREATE_OBJECT_ANIMATOR_ON_OBJECT(bVar1, cVar2, cVar3, bVar4);
			if (IS_OBJECT_ANIMATOR_VALID(cVar6))
			{
				LINK_OBJECT_ANIMATOR_TO_ACTOR(cVar6, bParam1, GRINGO_GET_PROP_ATTACH_SLOT(bParam0));
			}
		}
	}
	return;
}

bool Function_53(bool bParam0, bool bParam1, bool bParam2) //Position: 0x26B5 / 9909
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = GRINGO_GET_FIRST_NAMED_CHILD("UseAnimMidAction", 2, bParam1);
		if (IS_GRINGO_COMPONENT_VALID(bVar0))
		{
			return bVar0;
		}
	}
	if (IS_ACTOR_PLAYER(bParam0))
	{
		bVar0 = GRINGO_GET_FIRST_NAMED_CHILD("PlayerUseAnim", 2, bParam1);
		if (IS_GRINGO_COMPONENT_VALID(bVar0))
		{
			return bVar0;
		}
	}
	bVar0 = GRINGO_GET_FIRST_NAMED_CHILD("UseAnim", 2, bParam1);
	return bVar0;
}

void Function_54(int iParam0, float fParam1) //Position: 0x2725 / 10021
{
	if (!Function_19(iParam0))
	{
		Function_55(iParam0, fParam1);
	}
	return;
}

void Function_55(int iParam0, float fParam1) //Position: 0x273B / 10043
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_60(iParam0, 1);
	Function_42(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

var Function_56(bool bParam0) //Position: 0x275C / 10076
{
	return (RAND_FLOAT_RANGE(0.0f, 1.0f) * Function_16(bParam0, "RandUseTime", 0.0f));
}

void Function_57(int iParam0) //Position: 0x277C / 10108
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

void Function_58(var uParam0) //Position: 0x2790 / 10128
{
	uParam0 = uParam0;
	return;
}

int Function_59() //Position: 0x279A / 10138
{
	return 1;
}

void Function_60(var uParam0, int iParam1) //Position: 0x27A1 / 10145
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_61(bool bParam0, var uParam1, int iParam2) //Position: 0x27B0 / 10160
{
	float fVar0;
	
	Function_64(bParam0);
	*uParam1 = { StackVal, StackVal, Function_64(bParam0) };
	*iParam2 = Function_63(bParam0);
	fVar0 = Function_62(bParam0);
	if (fVar0 < 180.0f)
	{
		fVar0 = 180.0f;
	}
	*iParam2 = (*iParam2 + RAND_FLOAT_RANGE(-fVar0, fVar0));
	return;
}

bool Function_62(bool bParam0) //Position: 0x27EF / 10223
{
	return Function_16(bParam0, "UseDirectionToleranceDegrees", 0.0f);
}

float Function_63(bool bParam0) //Position: 0x281A / 10266
{
	return GRINGO_GET_USE_COMPONENT_HEADING(bParam0);
}

vector3 Function_64(bool bParam0) //Position: 0x2825 / 10277
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	
	if (Function_65(bParam0))
	{
		bVar3 = GRINGO_GET_PARENT_COMPONENT(bParam0, 3);
		if (IS_GRINGO_COMPONENT_VALID(bVar3))
		{
			bVar4 = GET_ACTOR_FROM_OBJECT(GRINGO_GET_COMPONENT_USER(bVar3));
			if (IS_ACTOR_VALID(bVar4))
			{
				GRINGO_GET_USE_COMPONENT_POSITION_LOCAL(&vVar0, bParam0);
				GET_OBJECT_RELATIVE_POSITION(GET_OBJECT_FROM_ACTOR(bVar4), vVar0, &vVar0);
			}
		}
		else
		{
			LOG_ERROR("Can only use 'UsePosActorRelative' attribute on child use cases");
		}
	}
	else if (!GET_GRINGO_RELATIVE_POSITION_ATTR(&vVar0, "CentreLocator", bParam0))
	{
		if (!GET_GRINGO_RELATIVE_POSITION_ATTR(&vVar0, "UseLocator", bParam0))
		{
			if (!GRINGO_GET_USE_COMPONENT_POSITION(&vVar0, bParam0))
			{
				LOG_ERROR("Failed to find use location!");
			}
		}
	}
	return StackVal, StackVal, vVar0;
}

bool Function_65(bool bParam0) //Position: 0x291B / 10523
{
	return Function_12(bParam0, "UsePosActorRelative", 0);
}

bool Function_66(bool bParam0) //Position: 0x293D / 10557
{
	return Function_16(bParam0, "StartingPhaseTimeout", 10.0f);
}

void Function_67(bool bParam0) //Position: 0x2964 / 10596
{
	bParam0 = bParam0;
	if (iLocal_13 && !iLocal_14)
	{
		iLocal_14 = 1;
		cLocal_18 = CREATE_LAYOUT("Footlocker_Gringo_Layout");
		Function_68(cLocal_18, 0, Global_34573, 1, 0, 1);
	}
	return;
}

var Function_68(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x29A7 / 10663
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_44(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Footlocker", 1, 1);
	}
	Function_69(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_69(var uParam0, int iParam1) //Position: 0x2A1F / 10783
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_70(&bVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 2.5f, 0);
	return;
}

void Function_70(var uParam0, bool bParam1) //Position: 0x2A4A / 10826
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0.547648f, 2.15242f, 0.03383f, -58.11488f, 30.01009f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0225f, 0.464561f, -0.875453f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_71(int iParam0) //Position: 0x2AD6 / 10966
{
	iParam0 = iParam0;
	return;
}

bool Function_72(bool bParam0) //Position: 0x2AE0 / 10976
{
	return Function_12(bParam0, "MaintainPosture", 0);
}

void Function_73(int iParam0) //Position: 0x2AFE / 11006
{
	if (!Function_19(iParam0))
	{
		Function_55(iParam0, 0.0f);
	}
	return;
}

bool Function_74(bool bParam0, bool bParam1) //Position: 0x2B13 / 11027
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	
	Function_64(bParam1);
	vVar0 = { StackVal, StackVal, Function_64(bParam1) };
	bVar3 = Function_63(bParam1);
	TELEPORT_ACTOR_WITH_HEADING(bParam0, vVar0, bVar3, 1, 1, 1);
	if (IS_ATTACHMENT_VALID(iLocal_12))
	{
		REMOVE_OBJECT_ATTACHMENT(iLocal_12);
	}
	if (IS_OBJECT_VALID(GET_TARGET_OBJECT()))
	{
		if (IS_ATTACHMENT_VALID(iLocal_12))
		{
			REMOVE_OBJECT_ATTACHMENT(iLocal_12);
		}
		iLocal_12 = ATTACH_OBJECTS_CONTINUOUS(bParam0, GET_TARGET_OBJECT(), 4294967295);
	}
	else
	{
		bVar4 = GRINGO_GET_MY_OBJECT_REF();
		bVar4 = Function_75(bVar4);
		if (IS_OBJECT_VALID(bVar4))
		{
			if (IS_OBJECT_ATTACHED(bVar4))
			{
				GET_OBJECT_OWNER(bVar4);
				iVar5 = _GET_OBJECT_ATTACHMENT(bVar4);
				if (IS_ATTACHMENT_VALID(iVar5))
				{
					bVar6 = GET_OBJECT_ATTACHED_TO(iVar5);
					if (IS_OBJECT_VALID(bVar6))
					{
						iLocal_12 = ATTACH_OBJECTS_CONTINUOUS(bParam0, bVar6, 4294967295);
					}
				}
			}
		}
	}
	return 1;
}

bool Function_75(bool bParam0) //Position: 0x2BB3 / 11187
{
	bool bVar0;
	
	if (IS_OBJECT_ATTACHED(bParam0))
	{
		return bParam0;
	}
	bVar0 = GET_OBJECT_OWNER(bParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		if (IS_OBJECT_ATTACHED(bVar0))
		{
			return bVar0;
		}
		bVar0 = GET_OBJECT_OWNER(bVar0);
	}
	return "";
}

bool Function_76(bool bParam0, int iParam1) //Position: 0x2BF0 / 11248
{
	*iParam1 = Function_16(bParam0, "AreaClearCheck", -1.0f);
	if (*iParam1 < 0.0f)
	{
		return 1;
	}
	return 0;
}

int Function_77(bool bParam0) //Position: 0x2C1B / 11291
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	
	bVar0 = GET_TARGET_OBJECT();
	if (IS_OBJECT_VALID(bVar0))
	{
		if (!GRINGO_IS_TARGET_OBJECT_READY())
		{
			return 0;
		}
	}
	iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bParam0, 0);
	while (iVar1 >= 4294967295)
	{
		if (!GRINGO_IS_PROP_READY(GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar1, bParam0)))
		{
			return 0;
		}
		iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bParam0, iVar1 + 1);
	}
	bVar2 = false;
	uVar4 = GRINGO_GET_ATTRIBUTE(bParam0, bVar2);
	iVar6 = STRING_TO_HASH("SharedPropName");
	while (bVar2 <= GRINGO_GET_ATTRIBUTE_COUNT(bParam0))
	{
		uVar4 = GRINGO_GET_ATTRIBUTE(bParam0, bVar2);
		if (GRINGO_IS_ATTRIBUTE_VALID(uVar4))
		{
			if (GRINGO_GET_ATTR_TYPE_BY_HANDLE(uVar4) == 2)
			{
				if (iVar6 == GRINGO_GET_ATTRIBUTE_HASH(uVar4))
				{
					iVar5 = GRINGO_GET_STRING_ATTR_BY_HANDLE(uVar4, &uVar3);
					iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD(iVar5, 1, GRINGO_GET_PARENT_COMPONENT(bParam0, 0), 0);
					while (iVar1 >= 4294967295)
					{
						if (!GRINGO_IS_PROP_READY(GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar1, GRINGO_GET_PARENT_COMPONENT(bParam0, 0))))
						{
							return 0;
						}
						iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD(iVar5, 1, GRINGO_GET_PARENT_COMPONENT(bParam0, 0), iVar1 + 1);
					}
				}
			}
		}
		bVar2++;
	}
	return 1;
}

bool Function_78(bool bParam0, int iParam1) //Position: 0x2D20 / 11552
{
	return (bParam0 && iParam1) == 0;
}

void Function_79(int iParam0) //Position: 0x2D2D / 11565
{
	if (Function_78(iParam0->f_40, 16))
	{
		if (iParam0->f_44 > 5 && iParam0->f_44 < 1)
		{
			if (GRINGO_SHOULD_SUSPEND_MOVER(iParam0->f_12))
			{
				Function_2("UNSUSPEND MOVER", iParam0->f_16);
				ENABLE_MOVER(iParam0->f_16);
			}
			if (GRINGO_SHOULD_FIX_MOVER(iParam0->f_12))
			{
				Function_2("UNFIX MOVER", iParam0->f_16);
				SET_MOVER_FROZEN(iParam0->f_16, 0);
			}
		}
	}
	return;
}

void Function_80(int iParam0, bool bParam1) //Position: 0x2DA0 / 11680
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	char* cVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	int iVar13;
	bool bVar14;
	
	if (bParam1)
	{
		Function_2("<<<STOP USE [delay allowed]", iParam0->f_16);
	}
	else
	{
		Function_2("<<<STOP USE [NO delay allowed]", iParam0->f_16);
	}
	Function_14(iParam0->f_12, "CustomReactNode", &bVar0);
	if (bVar0)
	{
		if (IS_ACTOR_VALID(iParam0->f_16))
		{
			RESET_REACT_NODE_FOR_ACTOR(iParam0->f_16);
		}
	}
	iVar1 = 1;
	bVar2 = Function_12(iParam0->f_12, "CanAnimalsAttack", iVar1);
	if (!bVar2)
	{
		if (IS_ACTOR_VALID(iParam0->f_16))
		{
			SET_ANIMAL_CAN_ATTACK(iParam0->f_16, 1);
		}
	}
	bVar3 = Function_12(iParam0->f_12, "AllowTalking", 1);
	if (!bVar3)
	{
		STOP_PED_SPEAKING(iParam0->f_16, 0);
	}
	if (iParam0->f_44 < 8)
	{
		Function_23(iParam0->f_16, iParam0->f_12);
	}
	if ((HAS_INVENTORY_COMPONENT(iParam0->f_16) && Function_78(iParam0->f_40, 32)) && Function_12(iParam0->f_12, "RedrawWeapon", 1))
	{
		ACTOR_DRAW_LAST_WEAPON(iParam0->f_16, 1);
	}
	if (DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime"))
	{
		DECOR_REMOVE(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime");
	}
	Function_86(iParam0->f_16, iParam0->f_12);
	if (IS_ACTOR_VALID(iParam0->f_16))
	{
		GRINGO_REPORT_USE_FINISHED(iParam0->f_16, Function_78(iParam0->f_40, 64));
		Function_22(iParam0->f_16, 0);
		NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 0);
		if (!Function_12(iParam0->f_12, "DoNotCleanUpUserSettings", 0))
		{
			if (Function_78(iParam0->f_40, 128) && Function_12(iParam0->f_12, "RedrawWeapon", 1))
			{
				ACTOR_END_FORCE_HOLSTER(iParam0->f_16);
			}
			GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS(iParam0->f_16);
			if (GRINGO_SHOULD_SUSPEND_MOVER(iParam0->f_12) && IS_OBJECT_VALID(GET_TARGET_OBJECT()))
			{
				bVar4 = GET_PROP_FROM_OBJECT(GET_TARGET_OBJECT());
				if (IS_PHYSINST_VALID(bVar4))
				{
					SUPRESS_MOVER_COLLISIONS(iParam0->f_16, bVar4, 0);
				}
			}
			if (Function_40(iParam0->f_12))
			{
				CLEAR_LINKED_ANIM_TARGET(iParam0->f_16);
			}
			if (Function_78(iParam0->f_40, 16))
			{
				Function_79(iParam0);
				Function_42(iParam0 + 40, 16);
			}
			if (Function_78(iParam0->f_40, 8))
			{
				SET_ACTOR_ONE_SHOT_DEATH(iParam0->f_16, 0);
			}
			if (Function_85(iParam0->f_12) && Function_78(iParam0->f_40, 512))
			{
				Function_42(iParam0 + 40, 512);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(iParam0->f_16, 1);
				Function_2("Allow Bump Reactions", iParam0->f_16);
			}
		}
		if (IS_ACTOR_LOCAL_PLAYER(iParam0->f_16) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(iParam0->f_12))
		{
			GRINGO_ENABLE_PLAYER_CONTROL(iParam0->f_16, 1);
		}
	}
	iVar5 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, iParam0->f_12, 0);
	while (iVar5 >= 4294967295)
	{
		bVar6 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar5, iParam0->f_12);
		bVar7 = GRINGO_GET_PHYSINST(bVar6);
		if (IS_PHYSINST_VALID(bVar7))
		{
			cVar8 = GET_OBJECT_ANIMATOR_ON_OBJECT(GET_OBJECT_FROM_PHYSINST(bVar7));
			if (IS_OBJECT_ANIMATOR_VALID(cVar8))
			{
				RELEASE_OBJECT_REF(GET_OBJECT_FROM_ANIMATOR(cVar8));
			}
			if (!IS_ACTOR_VALID(iParam0->f_16))
			{
				RESET_PROP(bVar7);
			}
		}
		iVar5 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, iParam0->f_12, iVar5 + 1);
	}
	if (Function_38(iParam0->f_12))
	{
		bVar9 = GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 3);
		if (IS_GRINGO_COMPONENT_VALID(bVar9))
		{
			bVar10 = Function_39(bVar9);
			if (IS_ACTOR_VALID(bVar10))
			{
				CLEAR_LINKED_ANIM_TARGET(bVar10);
			}
		}
	}
	Function_84(iParam0->f_12);
	bVar11 = Function_12(iParam0->f_12, "DisableResetProp", 0);
	if (IS_OBJECT_VALID(GET_TARGET_OBJECT()))
	{
		if (!bVar11 || !IS_ACTOR_VALID(iParam0->f_16))
		{
			Function_83(iParam0, GET_TARGET_OBJECT());
		}
		bVar12 = GET_PHYSINST_FROM_OBJECT(GET_TARGET_OBJECT());
		if (IS_PHYSINST_VALID(bVar12))
		{
			if (Function_78(iParam0->f_40, 256))
			{
				Function_42(iParam0 + 40, 256);
				SET_PROP_FIXED(bVar12, 0);
			}
		}
	}
	if (IS_OBJECT_VALID(iParam0->f_36))
	{
		DESTROY_OBJECT(iParam0->f_36);
	}
	if (iParam0->f_12 == iLocal_39)
	{
		RELEASE_OBJECT_REF(GET_OBJECT_FROM_ANIMATOR(cLocal_38));
		iLocal_39 = iVar13;
	}
	GRINGO_SET_CHILD_USE_ACTIVATIONS(iParam0->f_12, 0);
	if (Function_41(iParam0->f_12))
	{
		GRINGO_SET_COMMON_LAYER_USE_ACTIVATIONS(iParam0->f_12, 1);
	}
	if (IS_ATTACHMENT_VALID(iParam0->f_32))
	{
		REMOVE_OBJECT_ATTACHMENT(iParam0->f_32);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_41))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_41);
	}
	SET_GRINGO_OBJECT_REF_ATTR(bVar14, "UserObject", iParam0->f_12);
	Function_57(iParam0);
	Function_73(iParam0);
	GRINGO_CLEAR_COMPONENT_USER(iParam0->f_12);
	if (IS_ACTOR_VALID(iParam0->f_16) && bParam1)
	{
		Function_2("Setting reuse delay", iParam0->f_16);
		GRINGO_SET_REUSE_DELAY(Function_82(iParam0->f_12), iParam0->f_12);
	}
	Function_42(iParam0 + 40, 2);
	if (GRINGO_HANDLES_MOVEMENT(iParam0->f_12))
	{
		SET_GRINGO_BOOL_ATTR(0, "RandomPointSet", iParam0->f_12);
	}
	if (IS_ACTOR_VALID(iParam0->f_16))
	{
		if (IS_ACTOR_LOCAL_PLAYER(iParam0->f_16))
		{
			Function_81();
		}
	}
	else
	{
		Function_81();
	}
	iParam0->f_44 = 0;
	iParam0->f_16 = "";
	return;
}

void Function_81() //Position: 0x329E / 12958
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(GRINGO_GET_MY_OBJECT_REF()))
	{
		bVar0 = FIND_OBJECT_IN_OBJECT(GRINGO_GET_MY_OBJECT_REF(), "GringoCamera");
		if (IS_OBJECT_VALID(bVar0))
		{
			DESTROY_OBJECT(bVar0);
			CAMERA_RESET(0);
		}
	}
	return;
}

bool Function_82(bool bParam0) //Position: 0x32D5 / 13013
{
	return Function_16(bParam0, "ReuseDelay", 15.0f);
}

void Function_83(var uParam0, int iParam1) //Position: 0x32F2 / 13042
{
	var uVar0;
	var uVar1;
	bool bVar2;
	
	Function_51(uParam0->f_12, &uVar0);
	Function_50(uParam0->f_12, &uVar1);
	bVar2 = Function_49(uParam0->f_12);
	if (!((uVar0 || uVar1) || IS_GRINGO_COMPONENT_VALID(bVar2)))
	{
		return;
	}
	GRINGO_PROP_RESET_GRACEFULLY(iParam1);
	return;
}

void Function_84(bool bParam0) //Position: 0x332A / 13098
{
	int iVar0;
	bool bVar1;
	
	iVar0 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bParam0, 0);
	while (iVar0 >= 4294967295)
	{
		bVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar0, bParam0);
		GRINGO_SET_PROP_COLLISIONS(bVar1, 1);
		iVar0 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bParam0, iVar0 + 1);
	}
	return;
}

bool Function_85(bool bParam0) //Position: 0x3377 / 13175
{
	return Function_12(bParam0, "BlockBumpReactions", 0);
}

void Function_86(bool bParam0, int iParam1) //Position: 0x3398 / 13208
{
	if (IS_ATTACHMENT_VALID(iLocal_12))
	{
		REMOVE_OBJECT_ATTACHMENT(iLocal_12);
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		DECOR_REMOVE(bParam0, "iLockerOpen");
		Function_87(&bParam0, &iParam1);
	}
	if (IS_LAYOUTREF_VALID(cLocal_18))
	{
		RELEASE_LAYOUT_OBJECTS(bLocal_18);
		RELEASE_LAYOUT_REF(bLocal_18);
	}
	if (DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "FootlockerReuse"))
	{
		DECOR_SET_FLOAT(GRINGO_GET_MY_OBJECT_REF(), "fLastUsetime", GET_CURRENT_GAME_TIME());
	}
	return;
}

int Function_87(var uParam0, bool bParam1) //Position: 0x3415 / 13333
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	float fVar7;
	float fVar8;
	bool bVar9;
	float fVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	char* cVar14[32];
	char* cVar22[16];
	bool bVar26;
	bool bVar27;
	bool bVar28;
	bool bVar29;
	bool bVar30;
	bool bVar31;
	bool bVar32;
	bool bVar33;
	bool bVar34;
	
	TASK_CLEAR(*uParam0);
	bVar0 = GRINGO_GET_MY_OBJECT_REF();
	SET_GRINGO_OBJECT_REF_ATTR(GET_OBJECT_FROM_ACTOR(*uParam0), "LastUserObject", *bParam1);
	SET_GRINGO_OBJECT_REF_ATTR(bVar1, "UserObject", *bParam1);
	if (Function_8())
	{
		fVar2 = 2.0f;
		fVar3 = 10.0f;
	}
	else
	{
		fVar2 = 5.0f;
		fVar3 = 20.0f;
	}
	if (IS_ACTOR_PLAYER(*uParam0))
	{
		Function_182(467, 1, 0, 0);
		if (DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "PlayerHouseChest"))
		{
			if (Function_181(Global_34573, 40) != 4294967295)
			{
				if ((_GET_MAX_AMMO_AMOUNT(*uParam0, 7) - _GET_AMMO_AMOUNT(*uParam0, 7, 0)) <= 1.0f)
				{
					_ADD_AMMO_OF_TYPE(*uParam0, 7, RAND_FLOAT_RANGE(fVar2, fVar3), 1, 1);
				}
			}
			if (Function_181(Global_34573, 42) != 4294967295)
			{
				if ((_GET_MAX_AMMO_AMOUNT(*uParam0, 9) - _GET_AMMO_AMOUNT(*uParam0, 9, 0)) <= 1.0f)
				{
					_ADD_AMMO_OF_TYPE(*uParam0, 9, RAND_FLOAT_RANGE(fVar2, fVar3), 1, 1);
				}
			}
			if (Function_181(Global_34573, 41) != 4294967295)
			{
				if ((_GET_MAX_AMMO_AMOUNT(*uParam0, 8) - _GET_AMMO_AMOUNT(*uParam0, 8, 0)) <= 1.0f)
				{
					_ADD_AMMO_OF_TYPE(*uParam0, 8, RAND_FLOAT_RANGE(fVar2, fVar3), 1, 1);
				}
			}
			if (Function_181(Global_34573, 43) != 4294967295)
			{
				if ((_GET_MAX_AMMO_AMOUNT(*uParam0, 10) - _GET_AMMO_AMOUNT(*uParam0, 10, 0)) <= 1.0f)
				{
					_ADD_AMMO_OF_TYPE(*uParam0, 10, RAND_FLOAT_RANGE(fVar2, fVar3), 1, 1);
				}
			}
			if (Function_181(Global_34573, 44) != 4294967295)
			{
				if ((_GET_MAX_AMMO_AMOUNT(*uParam0, 11) - _GET_AMMO_AMOUNT(*uParam0, 11, 0)) <= 1.0f)
				{
					_ADD_AMMO_OF_TYPE(*uParam0, 11, RAND_FLOAT_RANGE(fVar2, fVar3), 1, 1);
				}
			}
			if (Function_179(32))
			{
				if (Global_13172[Function_174(9, 1, 5)11].f_20 == 10)
				{
					if ((_GET_MAX_AMMO_AMOUNT(*uParam0, 12) - _GET_AMMO_AMOUNT(*uParam0, 12, 0)) <= 1.0f)
					{
						_ADD_AMMO_OF_TYPE(*uParam0, 12, 10.0f, 1, 1);
					}
				}
			}
			if (DECOR_CHECK_EXIST(bVar0, "scrap"))
			{
				Function_99(Global_29006);
			}
			DECOR_SET_BOOL(bVar0, "GringoIsDone", true);
			return 1;
		}
		if (DECOR_CHECK_EXIST(bVar0, "ActionAreaRewardChest"))
		{
			DECOR_REMOVE(bVar0, "ActionAreaRewardChest");
			iVar4 = (RAND_INT_RANGE(false, 100000) % 100);
			if (iVar4 <= 30)
			{
				DECOR_SET_INT(bVar0, "GringoDollarAmt", RAND_INT_RANGE(5, 20));
			}
			else if ((RAND_INT_RANGE(false, 10000) % 10) <= 5)
			{
				fVar7 = 1.5f;
				if (Function_8())
				{
					fVar7 = 0.8f;
				}
				bVar6 = (GET_WEAPON_MAX_AMMO(GET_WEAPON_EQUIPPED(*uParam0, true)) * fVar7);
				iVar5 = UNK_0xDB679ED9(GET_WEAPON_EQUIPPED(*uParam0, true));
				if (bVar6 >= 0.0f)
				{
					bVar6 = 1.0f;
				}
				if (iVar5 == 39)
				{
					_ADD_AMMO_OF_TYPE(*uParam0, 6, bVar6, 1, 1);
				}
				else if (iVar5 == 40)
				{
					_ADD_AMMO_OF_TYPE(*uParam0, 7, bVar6, 1, 1);
				}
			}
			else
			{
				fVar8 = 1.5f;
				if (Function_8())
				{
					fVar8 = 0.8f;
				}
				bVar6 = (GET_WEAPON_MAX_AMMO(GET_WEAPON_EQUIPPED(*uParam0, 5)) * fVar8);
				iVar5 = UNK_0xDB679ED9(GET_WEAPON_EQUIPPED(*uParam0, 5));
				if (bVar6 >= 0.0f)
				{
					bVar6 = 1.0f;
				}
				if (iVar5 == 41)
				{
					_ADD_AMMO_OF_TYPE(*uParam0, 8, bVar6, 1, 1);
				}
				else if (iVar5 == 42)
				{
					_ADD_AMMO_OF_TYPE(*uParam0, 9, bVar6, 1, 1);
				}
				else if (iVar5 == 43)
				{
					_ADD_AMMO_OF_TYPE(*uParam0, 10, bVar6, 1, 1);
				}
				else if (iVar5 == 44)
				{
					if (bVar6 != 1.0f)
					{
						bVar9 = ROUND(RAND_FLOAT_RANGE(3.0f, 6.0f));
						_ADD_AMMO_OF_TYPE(*uParam0, 11, TO_FLOAT(bVar9), 1, 1);
					}
					else
					{
						_ADD_AMMO_OF_TYPE(*uParam0, 11, bVar6, 1, 1);
					}
				}
			}
			fVar10 = 4.0f;
			if (Function_8())
			{
				fVar10 = 2.0f;
			}
			if (IntToFloat((RAND_INT_RANGE(false, 100000) % 100)) >= fVar10)
			{
				ADD_ITEM(Function_98(9), *uParam0, 1);
				bLocal_15 = true;
			}
			DECOR_SET_BOOL(bVar0, "GringoIsDone", true);
			return 1;
		}
		if (DECOR_CHECK_EXIST(bVar0, "Give_AvatarItem"))
		{
			bVar11 = DECOR_GET_INT(bVar0, "Give_AvatarItem");
			if (bVar11 == 3)
			{
				Function_94(7);
			}
			else if (bVar11 == 4)
			{
				Function_94(8);
			}
			DECOR_SET_BOOL(bVar0, "GringoIsDone", true);
		}
		if (DECOR_CHECK_EXIST(bVar0, "scrap"))
		{
			Function_99(Global_29006);
		}
		bVar12 = DECOR_GET_INT(bVar0, "GringoDollarAmt");
		if (DECOR_CHECK_EXIST(bVar0, "GringoDollarAmt"))
		{
			if (bVar12 != 0)
			{
				bVar12 = (bVar12 + Function_93(1, 0, 1, 1, IS_PLAYER_IN_COMBAT(0)));
				Function_91(bVar12, 1);
				bLocal_15 = true;
			}
			DECOR_REMOVE(bVar0, "GringoDollarAmt");
		}
		else
		{
			if (!DECOR_CHECK_EXIST(bVar0, "bGiveNothing"))
			{
				bVar12 = Function_93(1, 0, 1, 1, IS_PLAYER_IN_COMBAT(0));
				Function_91(bVar12, 1);
			}
			bLocal_15 = true;
		}
		bVar13 = false;
		while (bVar13 < (26 - 1))
		{
			strcpy(&cVar14, "Weapon_", 32);
			stradd(&cVar14, INT_TO_STRING(bVar13), 32);
			if (DECOR_CHECK_EXIST(bVar0, &cVar14))
			{
				if (!ACTOR_HAS_WEAPON(*uParam0, bVar13))
				{
					SET_WEAPONENUM_LOCKED(bVar13, 0);
					GIVE_WEAPON_TO_ACTOR(*uParam0, bVar13, 0, 1, 1);
					bLocal_15 = true;
				}
			}
			bVar13++;
		}
		bVar13 = false;
		while (bVar13 < (17 - 1))
		{
			strcpy(&cVar22, "Ammo_", 16);
			stradd(&cVar22, INT_TO_STRING(bVar13), 16);
			if (DECOR_CHECK_EXIST(bVar0, &cVar22))
			{
				bVar26 = true;
				if (DECOR_CHECK_EXIST(bVar0, "nAmmoCheck"))
				{
					if (_GET_AMMO_AMOUNT(*uParam0, bVar13, 0) < 10.0f)
					{
						bVar26 = false;
					}
				}
				if (bVar26)
				{
					if ((_GET_MAX_AMMO_AMOUNT(*uParam0, bVar13) - _GET_AMMO_AMOUNT(*uParam0, bVar13, 0)) < 0.0f)
					{
						bVar27 = DECOR_GET_INT(bVar0, &cVar22);
						if (bVar27 <= 1)
						{
							bVar27 = RAND_INT_RANGE(6, 20);
						}
						_ADD_AMMO_OF_TYPE(*uParam0, bVar13, TO_FLOAT(bVar27), 1, 1);
						bLocal_15 = true;
					}
				}
			}
			bVar13++;
		}
		bVar28 = false;
		bVar29 = 4294967295;
		bVar28 = DECOR_GET_INT_VERBOSE(bVar0, "GiveItem", &bVar29);
		if (bVar28)
		{
			if (bVar29 <= 0)
			{
				bVar29 = RAND_INT_RANGE(false, 6);
			}
			bVar30 = bVar29;
			ADD_ITEM(Function_98(bVar30), *uParam0, 1);
			bLocal_15 = true;
		}
		else if ((RAND_INT_RANGE(false, 100000) % 100) < 2)
		{
			ADD_ITEM(Function_98(9), *uParam0, 1);
			bLocal_15 = true;
		}
		bVar32 = false;
		if (DECOR_CHECK_EXIST(bVar0, "nboxOwnerA"))
		{
			bVar31 = DECOR_GET_OBJECT(bVar0, "nboxOwnerA");
			DECOR_REMOVE(bVar0, "nboxOwnerA");
			bVar33 = GET_ACTOR_FROM_OBJECT(bVar31);
			if (IS_ACTOR_VALID(bVar33))
			{
				if (!Function_90(bVar33))
				{
					if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(bVar33)))
					{
						AI_QUICK_EXIT_GRINGO(bVar33, 1);
						TASK_CLEAR(bVar33);
					}
					DECOR_SET_BOOL(bVar31, "actorStolen", true);
					Function_88(bVar33, Global_34573, "MINOR_SHOCK", "", 2, 60, 1, 1);
					bVar32 = true;
					COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar33, 28, 0.0f);
					COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar33, 31, -1.0f);
					COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar33, 37, 2.0f);
					COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar33, 38, 0.5f);
					COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(bVar33, 0);
					TASK_KILL_CHAR(bVar33, Global_34573);
				}
			}
		}
		if (DECOR_CHECK_EXIST(bVar0, "nboxOwnerB"))
		{
			bVar31 = DECOR_GET_OBJECT(bVar0, "nboxOwnerB");
			DECOR_REMOVE(bVar0, "nboxOwnerB");
			bVar34 = GET_ACTOR_FROM_OBJECT(bVar31);
			if (IS_ACTOR_VALID(bVar34))
			{
				if (!Function_90(bVar34))
				{
					if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(bVar34)))
					{
						AI_QUICK_EXIT_GRINGO(bVar34, 1);
						TASK_CLEAR(bVar34);
					}
					DECOR_SET_BOOL(bVar31, "actorStolen", true);
					COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar34, 28, 0.0f);
					COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar34, 31, -1.0f);
					COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar34, 37, 2.0f);
					COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar34, 38, 0.5f);
					COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(bVar34, 0);
					TASK_KILL_CHAR(bVar34, Global_34573);
					if (!bVar32)
					{
						Function_88(bVar34, Global_34573, "MINOR_SHOCK", "", 2, 60, 1, 1);
					}
				}
			}
		}
		if (!bLocal_15 && !DECOR_CHECK_EXIST(bVar0, "bGiveNothing"))
		{
			if (RAND_INT_RANGE(false, 100000) <= 50000)
			{
				Function_91(RAND_INT_RANGE(5, 10), 1);
			}
			else
			{
				ADD_ITEM(Function_98(3), *uParam0, 1);
			}
		}
	}
	DECOR_SET_BOOL(bVar0, "GringoIsDone", true);
	return 1;
}

void Function_88(bool bParam0, bool bParam1, bool bParam2, var uParam3, int iParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x3C65 / 15461
{
	bParam1 = bParam1;
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0) && Function_89(bParam0, Global_34573) >= IntToFloat(iParam5))
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
						uParam3 = uParam3;
					}
				}
				else if (!SAY_SINGLE_LINE_STRING_BEAT(bParam0, bParam2, bParam1, 1, 1, iParam4, iParam7, 0, 1, 1))
				{
					uParam3 = uParam3;
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING(bParam0, bParam2, true, true, iParam4, 0, false, true);
			}
		}
	}
}

float Function_89(bool bParam0, bool bParam1) //Position: 0x3CF5 / 15605
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

bool Function_90(bool bParam0) //Position: 0x3DE6 / 15846
{
	return DECOR_CHECK_EXIST(bParam0, "nsharedlaw");
}

int Function_91(bool bParam0, bool bParam1) //Position: 0x3DFD / 15869
{
	bool bVar0;
	
	bVar0 = Function_92(0);
	if ((Function_92(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_182(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_92(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_182(597, bParam0, 0, 0);
	}
	if ((Function_92(597) + Function_92(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

int Function_92(int iParam0) //Position: 0x3EC8 / 16072
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

int Function_93(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x3F09 / 16137
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
		bVar0 = (bVar0 * (0.75f + ((TO_FLOAT(Function_92(5)) / 100.0f) * 0.5f)));
	}
	if (bParam3)
	{
		if (HAS_ITEM(Function_98(17), Global_34573))
		{
			bVar0 = (bVar0 * 1.2f);
		}
	}
	if (bParam4)
	{
		bVar0 = (bVar0 * 1.1f);
	}
	if (ROUND(bVar0) > 1)
	{
		bVar0 = 1.0f;
	}
	return ROUND(bVar0);
}

void Function_94(int iParam0) //Position: 0x400E / 16398
{
	if (AWARD_AVATAR(iParam0))
	{
		if (IS_PS3())
		{
			Function_95("avunlock_help", 0x41200000, 1, 0, 2, 1, 0);
		}
	}
	return;
}

void Function_95(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x4045 / 16453
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_96(Global_6269) };
		}
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

struct<16> Function_96(int iParam0) //Position: 0x40C0 / 16576
{
	char* cVar0[16];
	
	if (!Function_97())
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

bool Function_97() //Position: 0x40FF / 16639
{
	if (Function_78(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

var Function_98(bool bParam0) //Position: 0x411A / 16666
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

void Function_99(int iParam0) //Position: 0x420B / 16907
{
	if (!Function_173(3))
	{
		return;
	}
	if (Function_172())
	{
		return;
	}
	if (Function_97())
	{
		return;
	}
	if (iParam0 == Global_30658[2])
	{
		if (IS_PS3() || Function_171())
		{
			Function_104(4, 1, 0, 0, 1);
		}
	}
	else if (iParam0 == Global_30668[1])
	{
		Function_104(5, 1, 0, 0, 1);
	}
	else if (iParam0 == Global_30628[1])
	{
		Function_104(6, 1, 0, 0, 1);
	}
	else if (iParam0 == Global_30633[0])
	{
		Function_104(7, 1, 0, 0, 1);
	}
	else if (iParam0 == Global_30633[2])
	{
		Function_104(8, 1, 0, 0, 1);
	}
	else if (iParam0 == Global_30637[1])
	{
		Function_104(9, 1, 0, 0, 1);
	}
	else if (iParam0 == Global_30640[4])
	{
		if (Function_103(2) && !Function_100(2))
		{
			Function_104(2, 1, 0, 0, 1);
		}
	}
	return;
}

bool Function_100(int iParam0) //Position: 0x42D8 / 17112
{
	if (!Function_102(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_101(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_101(int iParam0, int iParam1) //Position: 0x4329 / 17193
{
	int iVar0;
	
	if (!Function_102(iParam0))
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

bool Function_102(int iParam0) //Position: 0x4356 / 17238
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

int Function_103(int iParam0) //Position: 0x436C / 17260
{
	if (!Function_102(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_101(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

void Function_104(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x43BE / 17342
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_102(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_173(3) || iParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_101(bParam0, 2))
	{
		Function_182(456, 1, 0, 0);
		Function_170(bParam0, 2);
		if (!bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_95(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_169(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_170(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_168(0, 0, 1, 1))
			{
				Function_130(1);
				Function_129(1, 0);
			}
			else
			{
				Function_128();
			}
		}
		Function_123(bParam0);
		if (StackVal && !Function_78(((((!Function_122() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, false, false, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_78((((Function_122() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_97())
		{
			if (!Function_121(Global_76846, 2))
			{
				Function_116(Global_34573, 2, 1, 0);
			}
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_107();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_106(3, bParam1);
				break;
			
			case 0x00000005:
				Function_106(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_106(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_106(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_106(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_106(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_105(2, 24);
				break;
			
			case 0x00000003:
				Function_105(2, 25);
				break;
			
			case 0x0000000F:
				Function_105(2, 26);
				break;
			
			case 0x0000000D:
				Function_105(2, 27);
				break;
			
			case 0x0000000E:
				Function_105(2, 28);
				break;
			}
	}
}

void Function_105(int iParam0, bool bParam1) //Position: 0x4654 / 18004
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

void Function_106(int iParam0, bool bParam1) //Position: 0x46BB / 18107
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

void Function_107() //Position: 0x4726 / 18214
{
	if (Function_102(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_115(Global_28180);
			Global_28180.f_8 = Function_108(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_115(Global_28180);
			Global_28180.f_8 = Function_108(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_108(int iParam0, int iParam1) //Position: 0x47A1 / 18337
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
					if (Function_111(6, 0) || Function_111(12, 0))
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
					if (Function_110(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_111(5, 0))
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
					if (Function_110(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_110(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_110(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_110(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_111(26, 0))
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
					if (Function_110(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_110(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_110(27) && iVar18)
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
					if (Function_110(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_110(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_110(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_110(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_111(17, 0) && iVar15)
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
					if (Function_110(19) && iVar19)
					{
						vVar0 = { -1708.36f, 46.18f, 2175.89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_111(6, 0) && Function_110(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_110(17) && iVar19)
					{
						vVar0 = { -1687.208f, 53.208f, 2140.491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_111(9, 0) && Function_110(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_110(15) && iVar19)
					{
						vVar0 = { -1709.084f, 55.216f, 2104.631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_111(8, 0) && iVar19)
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
	if (Function_109(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_109(StackVal, StackVal, vVar3))
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
	if (!Function_109(StackVal, StackVal, vVar3))
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

bool Function_109(vector3 vParam0) //Position: 0x5392 / 21394
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

int Function_110(int iParam0) //Position: 0x53AA / 21418
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_111(int iParam0, bool bParam1) //Position: 0x53BF / 21439
{
	int iVar0;
	
	iVar0 = Function_113(iParam0);
	if (!Function_112(iVar0))
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

bool Function_112(int iParam0) //Position: 0x53FC / 21500
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_113(int iParam0) //Position: 0x5413 / 21523
{
	if (!Function_114(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_114(int iParam0) //Position: 0x542D / 21549
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

int Function_115(int iParam0) //Position: 0x5443 / 21571
{
	int iVar0;
	int iVar1;
	
	if (!Function_102(iParam0))
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

void Function_116(bool bParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x5492 / 21650
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_118(bParam0, uParam1, uParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = uParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_117(&cVar1, uParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_117(char* cParam0, int iParam1) //Position: 0x54FE / 21758
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

bool Function_118(bool bParam0, var uParam1, int iParam2) //Position: 0x5535 / 21813
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
		if (Function_120(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_119(uVar0))
		{
			case 0x00000002:
				if (!Function_121(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_119(char* cParam0) //Position: 0x55AD / 21933
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

int Function_120(int iParam0) //Position: 0x564E / 22094
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_42(&iVar1, 2147483648);
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

bool Function_121(int iParam0, int iParam1) //Position: 0x568B / 22155
{
	if ((iParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_122() //Position: 0x569E / 22174
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_123(bool bParam0) //Position: 0x56CB / 22219
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
			if (Function_169(bParam0, Function_127(bVar24)))
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
			if (Function_169(bParam0, Function_127(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_126(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), 0, 0);
		Function_125(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_124(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_124(int iParam0) //Position: 0x587B / 22651
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_102(iParam0))
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

void Function_125(char* cParam0, int iParam1) //Position: 0x58D2 / 22738
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(cParam0);
	REMOVE_JOURNAL_ENTRY(cParam0, iParam1);
	PREPEND_JOURNAL_ENTRY(cParam0, iParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(cParam0);
	}
	return;
}

var Function_126(int iParam0) //Position: 0x58F7 / 22775
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_102(iParam0))
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

int Function_127(bool bParam0) //Position: 0x594D / 22861
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_128() //Position: 0x5959 / 22873
{
	return;
}

void Function_129(var uParam0, int iParam1) //Position: 0x595F / 22879
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = uParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_172())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_130(bool bParam0) //Position: 0x59A1 / 22945
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_159();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_131();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_42(&Global_63095, 1);
		Function_42(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_131() //Position: 0x59F2 / 23026
{
	Function_157();
	Function_156();
	Function_156();
	Function_155();
	Function_155();
	Function_154();
	Function_154();
	Function_139(0);
	Function_139(0);
	if (!Function_172())
	{
		Function_136();
		Function_135();
		Function_134();
		Function_133();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_132();
	return;
}

void Function_132() //Position: 0x5A44 / 23108
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

void Function_133() //Position: 0x5B4A / 23370
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

void Function_134() //Position: 0x5B7D / 23421
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

void Function_135() //Position: 0x5D0B / 23819
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

void Function_136() //Position: 0x5EBF / 24255
{
	Function_137(&Global_28260, 1, 0);
	return;
}

void Function_137(int iParam0, bool bParam1, var uParam2) //Position: 0x5ECD / 24269
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
	
	bVar0 = Function_138();
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

var Function_138() //Position: 0x60BE / 24766
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_139(int iParam0) //Position: 0x60D3 / 24787
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
					iVar2 = ((Function_92((50 + iVar4)) + Function_92((183 + iVar4))) + Function_92((90 + iVar4)));
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
	Function_140(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_140(int iParam0, bool bParam1, bool bParam2) //Position: 0x6179 / 24953
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
		Function_153(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_152(iParam0);
	if (bParam2)
	{
		Function_141(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_141(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x6414 / 25620
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_151(390))), 32);
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
					bVar19 = (Function_150(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_150(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_148(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_145(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_143(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_142(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_44(), &Var9);
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

var Function_142(int iParam0) //Position: 0x6A41 / 27201
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_143(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x6A52 / 27218
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_144("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_144("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_144("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_144(char* cParam0, bool bParam1) //Position: 0x6B47 / 27463
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_145(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x6B60 / 27488
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_147(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_146(Function_147(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_146(int iParam0, int iParam1) //Position: 0x6BC5 / 27589
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_147(int iParam0, bool bParam1) //Position: 0x6BD7 / 27607
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_148(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x6BE9 / 27625
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
	if (((Function_149(iParam0) != 19 || Function_149(iParam0) != 17) || Function_149(iParam0) != 10) || Function_149(iParam0) != 9)
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

int Function_149(int iParam0) //Position: 0x6D19 / 27929
{
	return Global_35278[iParam020].f_48;
}

float Function_150(int iParam0) //Position: 0x6D28 / 27944
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_151(int iParam0) //Position: 0x6D61 / 28001
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_152(int iParam0) //Position: 0x6D9E / 28062
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

int Function_153(int iParam0, bool bParam1, bool bParam2) //Position: 0x6F38 / 28472
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

struct<8> Function_154() //Position: 0x717C / 29052
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
		iVar2 = ((Function_92((50 + iVar3) + 15) + Function_92((183 + iVar3) + 15)) + Function_92((90 + iVar3) + 15));
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
	Function_140(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_155() //Position: 0x7205 / 29189
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
			iVar2 = ((Function_92((50 + iVar3) + 8) + Function_92((183 + iVar3) + 8)) + Function_92((90 + iVar3) + 8));
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
	Function_140(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_156() //Position: 0x729C / 29340
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
		iVar2 = ((Function_92((50 + iVar3)) + Function_92((183 + iVar3))) + Function_92((90 + iVar3)));
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
	Function_140(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_157() //Position: 0x731B / 29467
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_158(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_140(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_158(int iParam0, bool bParam1, int iParam2) //Position: 0x7354 / 29524
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
	Function_153(iParam0, bParam1, 1);
	Function_152(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_141(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_159() //Position: 0x755E / 30046
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_97())
	{
		Function_165(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_165(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_160(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_160(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_109(StackVal, StackVal, vVar0))
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

vector3 Function_160(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x7619 / 30233
{
	int iVar0;
	
	iVar0 = Function_163(uParam2, uParam3);
	if (Function_162(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_60(&Global_63095, 1);
			Function_42(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_60(&Global_63095, 2);
			Function_42(&Global_63095, 1);
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
		Function_60(&Global_63095, 2);
		Function_42(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_161();
	return StackVal, StackVal, Function_161();
}

vector3 Function_161() //Position: 0x7700 / 30464
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_162(int iParam0) //Position: 0x7709 / 30473
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_163(bool bParam0, bool bParam1) //Position: 0x771F / 30495
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
				fVar2 = Function_164(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_164(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_162(bVar0) && !bParam1)
	{
		bVar0 = Function_163(bParam0, 1);
	}
	return bVar0;
}

float Function_164(vector3 vParam0, vector3 vParam3) //Position: 0x77E6 / 30694
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_165(var uParam0, int iParam1) //Position: 0x7803 / 30723
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_167(Global_34573, &vVar4);
	if (!Function_166(Global_30640[0]))
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
	if (!Function_166(Global_30640[2]))
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
	if (!Function_166(Global_30640[1]))
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
	if (!Function_166(Global_30658[1]))
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
	if (!Function_166(Global_30658[3]))
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
	if (!Function_166(Global_30658[2]))
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
	if (!Function_166(Global_30658[4]))
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
	if (!Function_166(Global_30668[0]))
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
	if (!Function_166(Global_30668[1]))
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
	if (!Function_166(Global_30668[2]))
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
	if (!Function_166(Global_30679[0]))
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
	if (!Function_166(Global_30685[0]))
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
	if (!Function_166(Global_30685[1]))
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
	if (!Function_166(Global_30685[2]))
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
	if (!Function_166(Global_30693[0]))
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
	if (!Function_166(Global_30693[1]))
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
	if (!Function_166(Global_30693[2]))
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
	if (!Function_166(Global_30707[2]))
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
	if (!Function_166(Global_30707[3]))
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
	if (!Function_166(Global_30707[0]))
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
	if (!Function_166(Global_30717[0]))
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
	if (!Function_166(Global_30723[2]))
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
	if (!Function_166(Global_30723[1]))
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
	if (!Function_166(Global_30723[0]))
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
	if (!Function_166(Global_30679[1]))
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
	if (!Function_166(Global_30707[1]))
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
	Function_60(&Global_63095, 2);
	Function_42(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_109(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_166(int iParam0) //Position: 0x8041 / 32833
{
	bool bVar0;
	
	bVar0 = Global_29008[iParam0];
	return (((Function_78(bVar0, 0x1000000) || Function_78(bVar0, 0x2000000)) || Function_78(bVar0, 0x4000000)) || !Function_78(bVar0, 0x10000000));
}

void Function_167(bool bParam0, bool bParam1) //Position: 0x807C / 32892
{
	GET_POSITION(bParam0, bParam1);
	return;
}

bool Function_168(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x8089 / 32905
{
	uParam0 = uParam0;
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
	if (Global_3393 && uParam2)
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
	if (Global_59353 && uParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

bool Function_169(bool bParam0, int iParam1) //Position: 0x812D / 33069
{
	int iVar0;
	
	if (!Function_102(bParam0))
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

void Function_170(int iParam0, int iParam1) //Position: 0x818C / 33164
{
	if (!Function_102(iParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[iParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_171() //Position: 0x81E1 / 33249
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_78(GET_GAME_EDITION(), 16);
	}
	return 0;
}

bool Function_172() //Position: 0x8211 / 33297
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_173(int iParam0) //Position: 0x821A / 33306
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

int Function_174(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8236 / 33334
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_178(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_175(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_175(bParam0, bParam1, bParam2, 4294967295);
}

int Function_175(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x8294 / 33428
{
	var uVar0;
	
	if (!Function_177(bParam2))
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
	uVar0 = Function_178(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_176(uVar0);
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

int Function_176(int iParam0) //Position: 0x83E9 / 33769
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

bool Function_177(int iParam0) //Position: 0x8427 / 33831
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_178(int iParam0, int iParam1, int iParam2) //Position: 0x843C / 33852
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

bool Function_179(int iParam0) //Position: 0x845C / 33884
{
	return Function_180(Global_83864.f_1252, iParam0);
}

int Function_180(var uParam0, int iParam1) //Position: 0x846E / 33902
{
	return (uParam0 && iParam1) == 0;
}

int Function_181(bool bParam0, int iParam1) //Position: 0x847B / 33915
{
	int iVar0;
	
	iVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(bParam0, iParam1);
	return iVar0;
}

int Function_182(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x848C / 33932
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
	Function_153(iParam0, TO_FLOAT(bParam1), 1);
	Function_152(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_141(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_183(bool bParam0, bool bParam1) //Position: 0x86AC / 34476
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (bParam1)
		{
			Function_200("CheckRemoveQuitAction: Actor valid!");
		}
		if (IS_ACTOR_LOCAL_PLAYER(bParam0))
		{
			if (bParam1)
			{
				Function_200("CheckRemoveQuitAction: Tested for player!");
			}
			if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_41))
			{
				if (bParam1)
				{
					Function_200("CheckRemoveQuitAction: Release quit context - component no longer in use");
				}
				RELEASE_SCRIPT_USE_CONTEXT(bLocal_41);
			}
		}
	}
	if (bParam1)
	{
		Function_200("CheckRemoveQuitAction: Finished check");
	}
	return;
}

void Function_184(bool bParam0, bool bParam1) //Position: 0x87B4 / 34740
{
	LOG_OBJECT3(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), bParam1, bParam0, 0, 0, 0);
	return;
}

void Function_185(int iParam0) //Position: 0x87CA / 34762
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iParam0->f_16 = GRINGO_GET_REQUESTING_ACTOR();
	if (!IS_ACTOR_VALID(iParam0->f_16))
	{
		LOG_ERROR("Invalid actor in StartDoingRequestedTask");
		return;
	}
	iVar0 = GRINGO_GET_MSG_COMPONENT_CONTEXT();
	iParam0->f_12 = iVar0;
	if (GRINGO_GET_USE_REQUIRES_OBSTACLE(iVar0))
	{
		if (IS_ACTOR_HORSE(iParam0->f_16))
		{
			iParam0->f_36 = CREATE_OBSTACLE_ON_OBJECT(iParam0->f_16, "ngringoObs", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.75f, 2.0f);
		}
		else
		{
			iParam0->f_36 = CREATE_OBSTACLE_ON_OBJECT(iParam0->f_16, "ngringoObs", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.5f, 1.0f, 0.5f);
		}
		ATTACH_OBJECTS(iParam0->f_36, iParam0->f_16, Function_44(), 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
	}
	Function_57(iParam0);
	Function_2("Going to eGringoPositioning", iParam0->f_16);
	iParam0->f_44 = 2;
	Function_60(iParam0 + 40, 2);
	Function_42(iParam0 + 40, 8);
	Function_42(iParam0 + 40, 16);
	Function_42(iParam0 + 40, 64);
	SET_GRINGO_OBJECT_REF_ATTR(iParam0->f_16, "UserObject", iVar0);
	GRINGO_SET_COMPONENT_USER(iParam0->f_16, iVar0);
	if (GRINGO_SHOULD_SUSPEND_MOVER(iParam0->f_12) && IS_OBJECT_VALID(GET_TARGET_OBJECT()))
	{
		bVar1 = GET_PROP_FROM_OBJECT(GET_TARGET_OBJECT());
		if (IS_PHYSINST_VALID(bVar1))
		{
			SUPRESS_MOVER_COLLISIONS(iParam0->f_16, bVar1, 1);
		}
	}
	SET_GRINGO_OBJECT_REF_ATTR(bVar2, "LastUserObject", iParam0->f_12);
	if (!Function_188(iParam0->f_12))
	{
		if (HAS_INVENTORY_COMPONENT(iParam0->f_16))
		{
			if (ACTOR_HOLSTER_WEAPON(iParam0->f_16, 1))
			{
				Function_60(iParam0 + 40, 32);
			}
			else
			{
				Function_42(iParam0 + 40, 32);
			}
		}
		else
		{
			Function_42(iParam0 + 40, 32);
		}
		if (Function_78(iParam0->f_40, 32))
		{
			Function_60(iParam0 + 40, 128);
		}
		else
		{
			Function_42(iParam0 + 40, 128);
		}
	}
	else
	{
		Function_42(iParam0 + 40, 32);
	}
	if (Function_187(iParam0->f_12))
	{
		if (!ACTOR_PUT_WEAPON_IN_HAND(iParam0->f_16, GET_WEAPON_EQUIPPED(iParam0->f_16, 5), 1))
		{
			if (ACTOR_PUT_WEAPON_IN_HAND(iParam0->f_16, GET_WEAPON_EQUIPPED(iParam0->f_16, true), 1))
			{
				Function_60(iParam0 + 40, 128);
			}
		}
		else
		{
			Function_60(iParam0 + 40, 128);
		}
	}
	if (Function_85(iParam0->f_12))
	{
		if (GET_ACTOR_ALLOW_BUMP_REACTIONS(iParam0->f_16))
		{
			Function_60(iParam0 + 40, 512);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(iParam0->f_16, 0);
			Function_2("Block Bump Reactions", iParam0->f_16);
		}
	}
	if (IS_ACTOR_LOCAL_PLAYER(iParam0->f_16) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(iParam0->f_12))
	{
		GRINGO_ENABLE_PLAYER_CONTROL(iParam0->f_16, 0);
	}
	NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 0);
	Function_186(iParam0->f_16, iVar0);
	Function_2("START: ", iParam0->f_16);
	return;
}

void Function_186(bool bParam0, int iParam1) //Position: 0x8A80 / 35456
{
	iParam1 = iParam1;
	bParam0 = bParam0;
	DECOR_SET_INT(bParam0, "iLockerOpen", true);
	if (IS_ACTOR_LOCAL_PLAYER(bParam0))
	{
		iLocal_13 = 1;
	}
	RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
	return;
}

bool Function_187(bool bParam0) //Position: 0x8AB7 / 35511
{
	return Function_12(bParam0, "DrawWeapon", 0);
}

bool Function_188(bool bParam0) //Position: 0x8AD0 / 35536
{
	return Function_12(bParam0, "AllowWeapon", 0);
}

void Function_189(bool bParam0, int iParam1) //Position: 0x8AEA / 35562
{
	bool bVar0;
	char* cVar1;
	
	bParam0 = bParam0;
	cVar1 = Function_190(iParam1, &bVar0);
	if (!bVar0)
	{
		if (IS_ACTOR_VALID(GRINGO_GET_REQUESTING_ACTOR()))
		{
			if (IS_ACTOR_LOCAL_PLAYER(GRINGO_GET_REQUESTING_ACTOR()))
			{
				cVar1 = GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF());
			}
		}
	}
	GRINGO_SET_REQUEST_STRING(cVar1);
	return;
}

bool Function_190(var uParam0, int iParam1) //Position: 0x8B22 / 35618
{
	return Function_14(uParam0, "UseName", iParam1);
}

bool Function_191(int iParam0, int iParam1) //Position: 0x8B39 / 35641
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	bool bVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	vector3 vVar9;
	vector3 vVar12;
	float fVar15;
	bool bVar16;
	char* cVar17[64];
	bool bVar33;
	float fVar34;
	
	bVar0 = GRINGO_GET_MSG_COMPONENT_CONTEXT();
	bVar1 = GRINGO_GET_REQUESTING_ACTOR();
	GRINGO_GET_USER_POS_WITH_OFFSET(&vVar2, bVar1, bVar0);
	if (IS_GRINGO_COMPONENT_VALID(bVar0))
	{
		bVar5 = GRINGO_IS_CHARACTER_BLEND_PAUSED(bVar0);
		if (GET_ACTOR_GAIT_TYPE(bVar1) != 4 && !bVar5)
		{
			return 0;
		}
		if (ACTOR_HAS_ANIM_SET(bVar1, "stand_hostage") && !Function_12(iParam0->f_12, "CutFreeGringo", 0))
		{
			return 0;
		}
		if (IS_ACTOR_LOCAL_PLAYER(bVar1))
		{
			if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(bVar1)))
			{
				iVar6 = 0;
				GET_GRINGO_BOOL_ATTR("IsHogtieFriendly", bVar0, &iVar6);
				if (iVar6 == 0)
				{
					return 0;
				}
			}
		}
		if (Global_3365)
		{
			if (IS_ACTOR_LOCAL_PLAYER(bVar1))
			{
				if (!Function_173(6))
				{
					return 0;
				}
			}
		}
		if (IS_ACTOR_LOCAL_PLAYER(bVar1))
		{
			if (IS_PLAYER_USING_COVER(0))
			{
				return 0;
			}
		}
		if (FIRE_IS_ACTOR_ON_FIRE(bVar1) && !bVar5)
		{
			return 0;
		}
		if (GET_ACTOR_INCAPACITATED(bVar1))
		{
			return 0;
		}
		if (!Function_195(bVar1, iParam0->f_12))
		{
			GRINGO_SET_REQUEST_FAILURE_REASON(1);
			return 0;
		}
		if (IS_OBJECT_VALID(GET_TARGET_OBJECT()))
		{
			if (DECOR_CHECK_EXIST(GET_TARGET_OBJECT(), "Gringo_PropInUse"))
			{
				GRINGO_SET_REQUEST_FAILURE_REASON(2);
				return 0;
			}
		}
		bVar7 = GET_TARGET_OBJECT();
		if (IS_OBJECT_VALID(bVar7))
		{
			bVar8 = GET_PROP_FROM_OBJECT(bVar7);
			if (IS_PHYSINST_VALID(bVar8))
			{
				if (HAS_PHYSINST_BROKEN_APART(bVar8))
				{
					GRINGO_SET_REQUEST_FAILURE_REASON(3);
					return 0;
				}
			}
		}
		if (!Function_78(iParam0->f_40, 2))
		{
			if (GRINGO_GET_REQUEST_MID_ACTION())
			{
				Function_60(iParam0 + 40, 1);
			}
			else
			{
				Function_42(iParam0 + 40, 1);
			}
			if (Function_78(iParam0->f_40, 1))
			{
				Function_184("MIDACTION REQUEST", bVar1);
			}
			else
			{
				Function_64(iParam0->f_12);
				vVar9 = { StackVal, StackVal, Function_64(iParam0->f_12) };
				vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar2, vVar9, StackVal) };
				fVar15 = Function_194(iParam0->f_12);
				bVar16 = VMAG(vVar12);
				if (bVar16 < fVar15 && !GRINGO_HANDLES_MOVEMENT(bVar0))
				{
					strcpy(&cVar17, "nTOO FAR (", 64);
					straddi(&cVar17, FLOOR((bVar16 * 10.0f)), 64);
					stradd(&cVar17, " > ", 64);
					straddi(&cVar17, FLOOR((fVar15 * 10.0f)), 64);
					stradd(&cVar17, ")", 64);
					GRINGO_SET_REQUEST_FAILURE_REASON(5);
					return 0;
				}
				if (!Function_193(bVar1, iParam0->f_12))
				{
					GRINGO_SET_REQUEST_FAILURE_REASON(6);
					return 0;
				}
				bVar33 = Function_192(iParam0->f_12);
				if (!bVar33 != 0.0f)
				{
					if (bVar33 < 0.0f)
					{
						fVar34 = (UNK_0x9C40E671(&vVar12) - Function_63(iParam0->f_12));
					}
					else
					{
						fVar34 = ((180.0f + UNK_0x9C40E671(&vVar12)) - Function_63(iParam0->f_12));
					}
					if (fVar34 < 180.0f)
					{
						fVar34 = (fVar34 - 360.0f);
					}
					else if (fVar34 > -180.0f)
					{
						fVar34 = (fVar34 + 360.0f);
					}
					if (fVar34 < FABS(bVar33))
					{
						GRINGO_SET_REQUEST_FAILURE_REASON(7);
						return 0;
					}
				}
			}
			*iParam1 = 1;
			return 1;
		}
		if (iParam0->f_16 == GRINGO_GET_REQUESTING_ACTOR())
		{
			*iParam1 = 0;
			return 1;
		}
	}
	GRINGO_SET_REQUEST_FAILURE_REASON(8);
	return 0;
}

bool Function_192(bool bParam0) //Position: 0x8E02 / 36354
{
	return Function_16(bParam0, "ActivationCone", 0.0f);
}

bool Function_193(bool bParam0, bool bParam1) //Position: 0x8E1F / 36383
{
	struct<5> Var0;
	float fVar5;
	float fVar6;
	
	fVar3 = GRINGO_GET_USE_COMPONENT_HEADING(bParam1);
	bVar4 = GET_HEADING(bParam0);
	fVar5 = Function_16(bParam1, "HeadingTolerance", -1.0f);
	fVar6 = (fVar3 - bVar4);
	if (fVar5 != -1.0f)
	{
		return 1;
	}
	Function_64(bParam1);
	Var0 = { StackVal, StackVal, Function_64(bParam1) };
	GET_POSITION(bParam0, &Var0);
	Var0.f_4 = (StackVal + 1.5f);
	Function_64(bParam1);
	Var0 = { StackVal, StackVal, Function_64(bParam1) };
	Var0.f_4 = (StackVal + 1.5f);
	if (fVar6 > 0.0f)
	{
		fVar6 = (fVar6 + 360.0f);
	}
	if (fVar6 <= (360.0f - fVar5) || fVar6 >= fVar5)
	{
		return 1;
	}
	return 0;
}

bool Function_194(int iParam0) //Position: 0x8EBB / 36539
{
	return Function_16(iParam0, "ActivationRadius", 2.0f);
}

bool Function_195(bool bParam0, int iParam1) //Position: 0x8EDA / 36570
{
	iParam1 = iParam1;
	bParam0 = bParam0;
	if (DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "GringoIsDone"))
	{
		return 0;
	}
	if (IS_ACTION_NODE_PLAYING_PARTIAL(bParam0, "stand_hostage"))
	{
		return 0;
	}
	return 1;
}

void Function_196(int iParam0) //Position: 0x8F1D / 36637
{
	iParam0 = iParam0;
	return;
}

void Function_197(bool bParam0, int iParam1) //Position: 0x8F27 / 36647
{
	int iVar0;
	int iVar1;
	
	if (GRINGO_IS_COMPONENT_OF_TYPE(3, bParam0))
	{
		Function_198(&(Local_21[iLocal_3412]), bParam0);
		iLocal_34++;
	}
	if (GRINGO_GET_CHILD_COMPONENT_COUNT(bParam0) >= 0)
	{
		iVar0 = 0;
		iVar0 = GRINGO_GET_INDEX_OF_NEXT_CHILD(0, bParam0, iVar0);
		while (iVar0 <= 0 && *iParam1 > 1)
		{
			iVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar0, bParam0);
			Function_197(iVar1, iParam1);
			iVar0 = GRINGO_GET_INDEX_OF_NEXT_CHILD(0, bParam0, iVar0 + 1);
		}
	}
	return;
}

void Function_198(int iParam0, int iParam1) //Position: 0x8F89 / 36745
{
	iParam0->f_12 = iParam1;
	Function_42(iParam0 + 40, 1);
	return;
}

void Function_199(int iParam0) //Position: 0x8F9D / 36765
{
	bool bVar0;
	var uVar1;
	bool bVar4;
	
	iParam0 = iParam0;
	bVar0 = GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF());
	if (STRING_CONTAINS_STRING(bVar0, "locked"))
	{
		GET_OBJECT_POSITION(GRINGO_GET_MY_OBJECT_REF(), &uVar1);
		bVar4 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/stand_open_chest", &uVar1, 1.0f, 0);
		if (IS_GRINGO_VALID(bVar4))
		{
			DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(bVar4));
		}
	}
	return;
}

void Function_200(int iParam0) //Position: 0x901D / 36893
{
	LOG_OBJECT2(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), iParam0, 0, 0, 0);
	return;
}

