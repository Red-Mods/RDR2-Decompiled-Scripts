//Decompiled with MagicRDR v1.0
//Function Count : 163
//Statics Count : 35
//Natives Count : 282
//Parameters Count : 1

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	bool bLocal_3 = false;
	int iLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	bool bLocal_8 = false;
	bool bLocal_9 = false;
	bool bLocal_10 = false;
	bool bLocal_11 = false;
	bool bLocal_12 = false;
	struct<12> Local_13[1];
	int iLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	char* cLocal_30 = NULL;
	int iLocal_31 = 0;
	bool bLocal_32 = false;
	bool bLocal_33 = false;
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
	
	iLocal_0 = 1;
	iLocal_1 = 0;
	iLocal_2 = 0;
	bLocal_3 = false;
	iLocal_4 = 0;
	bLocal_8 = 0.0f;
	bLocal_9 = 0.0f;
	if (UNK_0xBBB2780E() && GRINGO_DEBUG_IS_SELECTED())
	{
		LOG_ERROR("User requested break (At GenericGringo startup)");
	}
	Function_162("STARTS");
	Function_161(uScriptParam_0);
	iLocal_26 = 0;
	Function_159(uScriptParam_0, &iLocal_26);
	while (IS_GRINGO_ACTIVE())
	{
		Function_158(uScriptParam_0);
		if (UNK_0xBBB2780E() && GRINGO_DEBUG_IS_SELECTED())
		{
			LOG_ERROR("User requested break (During GenericGringo loop)");
		}
		bVar1 = GRINGO_GET_MY_OBJECT_REF();
		if (IS_OBJECT_VALID(bVar1))
		{
			GET_OBJECT_POSITION(bVar1, &uLocal_27);
		}
		iVar2 = 0;
		bLocal_32 = false;
		if (GRINGO_HAS_PENDING_MESSAGE())
		{
			iVar3 = 4294967295;
			iVar0 = 0;
			while (iVar0 < (iLocal_26 - 1))
			{
				if (Local_13[iVar012].f_12 == GRINGO_GET_MSG_COMPONENT_CONTEXT())
				{
					iVar3 = iVar0;
					iVar0 = iLocal_26;
				}
				iVar0++;
			}
			if (iVar3 >= 4294967295)
			{
				bVar4 = false;
				bVar5 = false;
				if (IS_ACTOR_VALID(GRINGO_GET_REQUESTING_ACTOR()))
				{
					bLocal_32 = true;
				}
				switch (GRINGO_GET_MESSAGE_TYPE())
				{
					case 0x00000000:
						if (Function_147(&(Local_13[iVar312]), &bVar4))
						{
							Function_145(GRINGO_GET_REQUESTING_ACTOR(), Local_13[iVar312].f_12);
							bVar5 = true;
						}
						break;
					
					case 0x00000001:
						if (Function_147(&(Local_13[iVar312]), &bVar4))
						{
							Function_145(GRINGO_GET_REQUESTING_ACTOR(), Local_13[iVar312].f_12);
							if (bVar4)
							{
								Function_141(&(Local_13[iVar312]));
							}
							bVar5 = true;
						}
						break;
					
					case 0x00000002:
						if (Local_13[iVar312].f_16 == GRINGO_GET_REQUESTING_ACTOR())
						{
							Function_140("eGRINGO_EndUse: Stop use by request", Local_13[iVar312].f_16);
							Function_139(Local_13[iVar312].f_16, 1);
							if (IS_ACTOR_VALID(Local_13[iVar312].f_16))
							{
								if (IS_ACTOR_LOCAL_PLAYER(Local_13[iVar312].f_16) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(Local_13[iVar312].f_12))
								{
									GRINGO_ENABLE_PLAYER_CONTROL(Local_13[iVar312].f_16, 1);
								}
							}
							if (GRINGO_IS_FORCE_QUITTING())
							{
								Function_84(&(Local_13[iVar312]), 0);
							}
							else if (Local_13[iVar312].f_44 < 8)
							{
								Function_83(&(Local_13[iVar312]));
								Local_13[iVar312].f_44 = 8;
							}
							bVar5 = true;
						}
						else
						{
							Function_162("Stop use request actor mismatch!!");
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
			while (iVar0 < (iLocal_26 - 1))
			{
				if (Function_82(Local_13[iVar012].f_40, 2))
				{
					if (!Function_16(&(Local_13[iVar012])))
					{
						Function_162("Quitting due to update end");
						Function_84(&(Local_13[iVar012]), 1);
					}
				}
				if (Function_15(&(Local_13[iVar012]), 0))
				{
					Function_5(&(Local_13[iVar012]));
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < (iLocal_26 - 1))
		{
			if (Function_82(Local_13[iVar012].f_40, 2))
			{
				iVar2 = 1;
			}
			iVar0++;
		}
		if (iVar2 || Function_4(uScriptParam_0))
		{
			if (bLocal_32)
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
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_33))
	{
		Function_162("Removing quit context at script termination");
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_33);
	}
	iVar0 = 0;
	while (iVar0 < (iLocal_26 - 1))
	{
		if (Function_82(Local_13[iVar012].f_40, 2))
		{
			Function_2("Gringo termination calls StopUse", Local_13[iVar012].f_16);
			Function_84(&(Local_13[iVar012]), 0);
		}
		if (GRINGO_HANDLES_MOVEMENT(Local_13[iVar012].f_12))
		{
			SET_GRINGO_BOOL_ATTR(0, "RandomPointSet", Local_13[iVar012].f_12);
		}
		Function_15(&(Local_13[iVar012]), 1);
		iVar0++;
	}
	Function_1(uScriptParam_0);
	Function_162("QUITS");
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x434 / 1076
{
	iParam0 = iParam0;
	return;
}

void Function_2(int iParam0, bool bParam1) //Position: 0x43E / 1086
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

int Function_3() //Position: 0x479 / 1145
{
	return 200;
}

int Function_4(int iParam0) //Position: 0x481 / 1153
{
	iParam0 = iParam0;
	return 0;
}

void Function_5(int iParam0) //Position: 0x48C / 1164
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!Function_82(iParam0->f_40, 2))
	{
		Function_139(iParam0->f_16, 0);
	}
	else if (UNK_0x0A0E660E() || Function_14(iParam0))
	{
		if (iParam0->f_44 == 6)
		{
			if (Function_12(iParam0) <= Function_10(iParam0->f_12))
			{
				if (IS_ACTOR_VALID(iParam0->f_16))
				{
					if (IS_ACTOR_LOCAL_PLAYER(iParam0->f_16))
					{
						if (UNK_0x0A0E660E() || !Global_3418)
						{
							bVar1 = Function_8(iParam0->f_12, &bVar0);
							if (!bVar0 && UNK_0x0A0E660E())
							{
								bVar1 = "nDisengage";
								bVar0 = true;
							}
							if (bVar0)
							{
								bLocal_32 = true;
								if (!IS_SCRIPT_USE_CONTEXT_VALID(bLocal_33))
								{
									Function_162("ManagePlayerQuit: Create quit context");
									if (Function_7(iParam0->f_12, "UseQuitBOverride", 0))
									{
										bLocal_33 = ADD_SCRIPT_USE_CONTEXT(bVar1, 500, 5, false, 0, 0, 0, 4294967295, 0);
									}
									else
									{
										bLocal_33 = ADD_SCRIPT_USE_CONTEXT(bVar1, 500, 4, false, 0, 0, 0, 4294967295, 0);
									}
								}
								if (IS_SCRIPT_USE_CONTEXT_PRESSED(bLocal_33))
								{
									Function_2("USE CONTEXT QUIT", iParam0->f_16);
									Function_83(iParam0);
									iParam0->f_44 = 8;
									if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_33))
									{
										Function_162("ManagePlayerQuit: Release quit context - already pressed");
										RELEASE_SCRIPT_USE_CONTEXT(bLocal_33);
										iVar2 = 0;
										if (GET_GRINGO_BOOL_ATTR("DeactivateChildren", iParam0->f_12, &iVar2))
										{
											GRINGO_SET_CHILD_USE_ACTIVATIONS(iParam0->f_12, 0);
										}
									}
								}
								if (DECOR_CHECK_EXIST(iParam0->f_16, "LobbyGringo"))
								{
									if (Function_6(iParam0->f_16))
									{
										Function_83(iParam0);
										Function_2("STICK QUIT", iParam0->f_16);
										iParam0->f_44 = 8;
										if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_33))
										{
											Function_162("ManagePlayerQuit: Release quit context - used stick");
											RELEASE_SCRIPT_USE_CONTEXT(bLocal_33);
										}
									}
								}
							}
						}
						else if (Global_3418)
						{
							if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_33))
							{
								Function_162("ManagePlayerQuit: Release quit context - due to wrong phase for quit");
								RELEASE_SCRIPT_USE_CONTEXT(bLocal_33);
							}
						}
					}
				}
			}
		}
		else if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_33))
		{
			Function_162("ManagePlayerQuit: Release quit context - due to wrong phase for quit");
			RELEASE_SCRIPT_USE_CONTEXT(bLocal_33);
		}
	}
	return;
}

bool Function_6(bool bParam0) //Position: 0x776 / 1910
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

bool Function_7(bool bParam0, bool bParam1, int iParam2) //Position: 0x870 / 2160
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

bool Function_8(bool bParam0, int iParam1) //Position: 0x88C / 2188
{
	return Function_9(bParam0, "UseQuit", iParam1);
}

bool Function_9(bool bParam0, bool bParam1, int iParam2) //Position: 0x8A3 / 2211
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
			return bLocal_12;
		}
		return bVar1;
	}
	return bLocal_12;
}

float Function_10(bool bParam0) //Position: 0x8E8 / 2280
{
	return Function_11(bParam0, "MinimumUseTime", 0.0f);
}

bool Function_11(bool bParam0, bool bParam1, int iParam2) //Position: 0x905 / 2309
{
	int iVar0;
	
	iVar0 = iParam2;
	GET_GRINGO_FLOAT_ATTR(&iVar0, bParam1, bParam0);
	return iVar0;
}

float Function_12(int iParam0) //Position: 0x91B / 2331
{
	if (Function_14(iParam0))
	{
		if (Function_13(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_13(int iParam0) //Position: 0x9E3 / 2531
{
	return Function_82(*iParam0, 2);
}

bool Function_14(int iParam0) //Position: 0x9F0 / 2544
{
	return Function_82(*iParam0, 1);
}

bool Function_15(var uParam0, int iParam1) //Position: 0x9FD / 2557
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

bool Function_16(int iParam0) //Position: 0xA45 / 2629
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
	bool bVar44;
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
	
	bVar12 = Function_81(iParam0->f_12);
	if (!(IS_ACTOR_VALID(iParam0->f_16) && IS_ACTOR_ALIVE(iParam0->f_16)))
	{
		Function_140("UpdateUse with invalid actor", iParam0->f_16);
		return 0;
	}
	if (!Function_7(iParam0->f_12, "DenyDamageTermination", 0))
	{
		if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(iParam0->f_16)) >= 0.5f)
		{
			Function_140("Damage quit", iParam0->f_16);
			return 0;
		}
	}
	if (GET_ACTOR_INCAPACITATED(iParam0->f_16))
	{
		Function_140("Incapacitation quit", iParam0->f_16);
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
			bLocal_32 = true;
			if (IS_ACTOR_PLAYER(iParam0->f_16))
			{
				if (Function_80(iParam0->f_12, &fVar24))
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
						bLocal_3 = true;
						break;
					}
				}
			}
			if (GRINGO_HANDLES_MOVEMENT(iParam0->f_12))
			{
				if (Function_78(iParam0->f_16, iParam0->f_12))
				{
					Function_2("Navigation complete (going to eStarting)", iParam0->f_16);
					NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 1);
					iParam0->f_44 = 1;
					Function_77(iParam0);
				}
			}
			else
			{
				NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 1);
				iParam0->f_44 = 1;
				Function_77(iParam0);
			}
			if (!Function_76(iParam0->f_12) && iParam0->f_44 != 1)
			{
				Function_2("SET_ACTOR_POSTURE", iParam0->f_16);
				SET_ACTOR_POSTURE(iParam0->f_16, 0);
			}
			break;
		
		case 0x00000001:
			bLocal_32 = true;
			Function_75(iParam0->f_12);
			if (((!Global_63096 && IS_ACTOR_LOCAL_PLAYER(iParam0->f_16)) && !Function_82(iParam0->f_40, 1)) && !DECOR_CHECK_EXIST(iParam0->f_16, "NoGringoCamera"))
			{
				Function_62(iParam0->f_12);
			}
			fVar20 = Function_61(iParam0->f_12);
			if (Function_12(iParam0) < fVar20)
			{
				Function_2("INTRO TIMED OUT - ABORTING", iParam0->f_16);
				return 0;
			}
			if (Function_82(iParam0->f_40, 1))
			{
				Function_56(iParam0->f_12, &vVar3, &uVar6);
				if (!Function_82(iParam0->f_40, 16))
				{
					if (GRINGO_SHOULD_SUSPEND_MOVER(iParam0->f_12))
					{
						Function_2("SUSPEND MOVER", iParam0->f_16);
						SUSPEND_MOVER(iParam0->f_16);
						Function_55(iParam0 + 40, 16);
					}
					if (GRINGO_SHOULD_FIX_MOVER(iParam0->f_12))
					{
						Function_2("nFIX MOVER", iParam0->f_16);
						SET_MOVER_FROZEN(iParam0->f_16, 1);
						Function_55(iParam0 + 40, 16);
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
					TELEPORT_ACTOR_WITH_HEADING(iParam0->f_16, vVar3, uVar6, 1, true, Function_54());
				}
				if (!Function_82(iParam0->f_40, 1024))
				{
					Function_55(iParam0 + 40, 1024);
					SET_ACTOR_CAN_PLAY_GESTURES(iParam0->f_16, Function_7(iParam0->f_12, "AllowGestures", 1));
				}
				iParam0->f_44 = 3;
			}
			else if (Function_78(iParam0->f_16, iParam0->f_12))
			{
				NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 1);
				Function_2("FINISHED NAVIGATION", iParam0->f_16);
				if (!Function_82(iParam0->f_40, 1024))
				{
					Function_55(iParam0 + 40, 1024);
					SET_ACTOR_CAN_PLAY_GESTURES(iParam0->f_16, Function_7(iParam0->f_12, "AllowGestures", 1));
				}
				iParam0->f_44 = 3;
			}
			if (iParam0->f_44 != 3 && !Function_82(iParam0->f_40, 16))
			{
				if (GRINGO_SHOULD_SUSPEND_MOVER(iParam0->f_12))
				{
					Function_2("SUSPEND MOVER", iParam0->f_16);
					SUSPEND_MOVER(iParam0->f_16);
					Function_55(iParam0 + 40, 16);
				}
				if (GRINGO_SHOULD_FIX_MOVER(iParam0->f_12))
				{
					Function_2("nFIX MOVER", iParam0->f_16);
					SET_MOVER_FROZEN(iParam0->f_16, 1);
					Function_55(iParam0 + 40, 16);
				}
			}
			break;
		
		case 0x00000003:
			if (Function_82(iParam0->f_40, 32))
			{
				bLocal_32 = true;
				if (!ACTOR_IS_HOLSTERED(iParam0->f_16))
				{
					break;
				}
				Function_2("FINISHED HOLSTERING", iParam0->f_16);
			}
			iParam0->f_44 = 4;
		
		case 0x00000004:
			Function_53(iParam0->f_12);
			bLocal_32 = true;
			Function_52(iParam0);
			Function_49(iParam0, Function_51(iParam0->f_12));
			if (DECOR_CHECK_EXIST(iParam0->f_16, "LobbyGringo"))
			{
				SET_FORCED_LOOK_ENABLE(iParam0->f_16, 0);
			}
			bVar33 = !GET_GRINGO_BOOL_ATTR("NoMidActionAnim", iParam0->f_12, &iVar32);
			if (iVar32 == 0)
			{
				bVar33 = Function_82(iParam0->f_40, 1);
			}
			bVar0 = Function_48(iParam0->f_16, iParam0->f_12, bVar33);
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
						if (GRINGO_ATTACH_PROP_TO_ANIM(iParam0->f_16, bVar1, Function_9(bVar1, "AttachBone", &bVar10), Function_9(bVar1, "AttachLocator", &bVar10), 1))
						{
							Function_47(bVar1, iParam0->f_16);
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
										if (GRINGO_ATTACH_PROP_TO_ANIM(iParam0->f_16, bVar1, Function_9(bVar1, "AttachBone", &bVar10), Function_9(bVar1, "AttachLocator", &bVar10), 1))
										{
											if (DECOR_CHECK_EXIST(iParam0->f_16, "LobbyGringo"))
											{
												bVar35 = GRINGO_GET_PROP_FROM_COMPONENT(bVar1);
												if (IS_PHYSINST_VALID(bVar35))
												{
													ADD_CAMERA_COLLISION_EXCLUSION(GET_GAME_CAMERA(), bVar35, 0);
												}
											}
											Function_47(bVar1, iParam0->f_16);
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
					Function_38(iParam0, bVar8, &iLocal_31, &cLocal_30);
					if (GET_OBJECT_TYPE(bVar8) != 15)
					{
						bVar22 = GET_PHYSINST_FROM_OBJECT(bVar8);
						if (IS_PHYSINST_VALID(bVar22))
						{
							if (!IS_PROP_FIXED(bVar22))
							{
								Function_55(iParam0 + 40, 256);
								SET_PROP_FIXED(bVar22, 1);
							}
							else
							{
								Function_37(iParam0 + 40, 256);
							}
						}
					}
				}
				GET_POSITION_OBJECT_SPACE(GRINGO_GET_MY_OBJECT_REF(), vVar17, iParam0 + 20);
				if (Function_82(iParam0->f_40, 16))
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
				if (Function_36(iParam0->f_12))
				{
					GRINGO_SET_COMMON_LAYER_USE_ACTIVATIONS(iParam0->f_12, 0);
				}
				if (IS_GRINGO_COMPONENT_VALID(bVar0))
				{
					if (Function_35(iParam0->f_12))
					{
						bVar2 = GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 3);
						if (IS_GRINGO_COMPONENT_VALID(bVar2))
						{
							bVar9 = Function_34(bVar2);
							if (IS_ACTOR_VALID(bVar9))
							{
								SET_LINKED_ANIM_TARGET(iParam0->f_16, bVar9);
							}
						}
					}
					else if (Function_33(iParam0->f_12))
					{
						bVar2 = GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 3);
						if (IS_GRINGO_COMPONENT_VALID(bVar2))
						{
							bVar9 = Function_34(bVar2);
							if (IS_ACTOR_VALID(bVar9))
							{
								SET_LINKED_ANIM_TARGET(bVar9, iParam0->f_16);
							}
						}
					}
					bVar10 = false;
					bVar7 = Function_32(iParam0->f_12, &bVar10);
					if (bVar10)
					{
						bVar2 = GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 3);
						if (IS_GRINGO_COMPONENT_VALID(bVar2))
						{
							bVar9 = Function_34(bVar2);
							if (IS_ACTOR_VALID(bVar9))
							{
								SET_ACTION_NODE_FOR_ACTOR(bVar9, bVar7);
							}
						}
					}
				}
				if (Function_31(iParam0->f_12))
				{
					if (!GET_ACTOR_ONE_SHOT_DEATH_STATUS(iParam0->f_16))
					{
						Function_55(iParam0 + 40, 8);
					}
					else
					{
						Function_37(iParam0 + 40, 8);
					}
					if (Function_82(iParam0->f_40, 8))
					{
						SET_ACTOR_ONE_SHOT_DEATH(iParam0->f_16, true);
					}
				}
				else
				{
					Function_37(iParam0 + 40, 8);
				}
				if (Function_30(iParam0->f_12))
				{
					NET_SET_NODE_REPLICATION(iParam0->f_16, 1, 1);
					UNK_0xC17BAD12(iParam0->f_16);
				}
				bVar37 = Function_9(iParam0->f_12, "CustomReactNode", &bVar36);
				if (bVar36)
				{
					SET_REACT_NODE_FOR_ACTOR(iParam0->f_16, bVar37);
				}
				iVar38 = 1;
				bVar39 = Function_7(iParam0->f_12, "CanAnimalsAttack", iVar38);
				if (!bVar39)
				{
					if (IS_ACTOR_VALID(iParam0->f_16))
					{
						SET_ANIMAL_CAN_ATTACK(iParam0->f_16, 0);
					}
				}
				Function_29(iParam0->f_16, iParam0->f_12);
				bVar40 = Function_7(iParam0->f_12, "AllowTalking", 1);
				if (!bVar40)
				{
					STOP_PED_SPEAKING(iParam0->f_16, 1);
				}
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_LOCAL_PLAYER(iParam0->f_16))
			{
				Function_28();
			}
			iParam0->f_44 = 6;
			if (Function_82(iParam0->f_40, 1))
			{
				if (Function_27(iParam0->f_12))
				{
					Function_2("MID ACTION NODE", iParam0->f_16);
				}
			}
		
		case 0x00000006:
			if (!Function_26(iParam0->f_16, iParam0->f_12))
			{
				Function_2("CUSTOM QUIT DURING USE", iParam0->f_16);
				iParam0->f_44 = 8;
			}
			bVar0 = Function_48(iParam0->f_16, iParam0->f_12, Function_82(iParam0->f_40, 1));
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
			if (Function_12(iParam0) <= Function_10(iParam0->f_12))
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
							if (!GET_GRINGO_FLOAT_ATTR(&bVar44, "MaxDelay", bVar41))
							{
								bVar44 = 30.0f;
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
								if (GET_CURRENT_GAME_TIME() - fVar42) <= RAND_FLOAT_RANGE(fVar45, bVar44)
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
				bVar60 = Function_25(iParam0->f_12);
				if (bVar60 <= 0.0f)
				{
					GET_POSITION_OBJECT_SPACE(GRINGO_GET_MY_OBJECT_REF(), vVar17, &vVar57);
					if (VDIST(vVar57, *(iParam0 + 20)) < bVar60)
					{
						Function_2("UPDATE USE TOO FAR", iParam0->f_16);
						if (Function_24())
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
					if (Function_23(iParam0->f_12) <= 0.0f)
					{
						if (Function_12(iParam0) < Function_23(iParam0->f_12))
						{
							Function_2("UPDATE USE USETIME SATISFIED", iParam0->f_16);
							iParam0->f_44 = 7;
						}
					}
				}
			}
			break;
		
		case 0x00000007:
			Function_162("nRewarding");
			Function_22(iParam0->f_16, iParam0->f_12);
			Function_21(iParam0->f_16, iParam0->f_12);
			Function_20(iParam0->f_16, iParam0->f_12);
			SET_GRINGO_OBJECT_REF_ATTR(iParam0->f_16, "LastUserObject", iParam0->f_12);
			Function_55(iParam0 + 40, 64);
			iParam0->f_44 = 8;
			break;
		
		case 0x00000008:
			bLocal_32 = true;
			if (!Global_63096 && IS_ACTOR_LOCAL_PLAYER(iParam0->f_16))
			{
				if (!DECOR_CHECK_EXIST(iParam0->f_16, "NoGringoCamera"))
				{
					if (!Function_7(iParam0->f_12, "GringoCamNoEndCut", 0))
					{
						if (!Function_19())
						{
							Function_62(iParam0->f_12);
						}
					}
				}
				else
				{
					DECOR_REMOVE(iParam0->f_16, "NoGringoCamera");
				}
			}
			if (Function_7(iParam0->f_12, "DoNotCleanUpUserSettings", 0))
			{
				Function_2("Use case quits - no cleapup due to DoNotCleanUpUserSettings attribute", iParam0->f_16);
				return 0;
			}
			Function_2("GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS", iParam0->f_16);
			GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS(iParam0->f_16);
			iParam0->f_44 = 9;
			Function_18(iParam0->f_16, iParam0->f_12);
			break;
		
		case 0x00000009:
			if (Function_82(iParam0->f_40, 1024))
			{
				Function_37(iParam0 + 40, 1024);
				if (!Function_7(iParam0->f_12, "AllowGestures", 0))
				{
					SET_ACTOR_CAN_PLAY_GESTURES(iParam0->f_16, true);
				}
			}
			if (DECOR_CHECK_EXIST(iParam0->f_16, "LobbyGringo"))
			{
				SET_FORCED_LOOK_ENABLE(iParam0->f_16, 1);
			}
			bLocal_32 = true;
			bVar0 = Function_48(iParam0->f_16, iParam0->f_12, Function_82(iParam0->f_40, 1));
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
	Function_17(iParam0->f_16, iParam0->f_44);
	return 1;
}

void Function_17(bool bParam0, int iParam1) //Position: 0x1B99 / 7065
{
	if (IS_ACTOR_VALID(bParam0))
	{
		REPORT_GRINGO_USE_PHASE(bParam0, iParam1);
	}
	return;
}

void Function_18(bool bParam0, var uParam1) //Position: 0x1BAE / 7086
{
	uParam1 = uParam1;
	if (iLocal_1 && IS_OBJECT_VALID(bLocal_11))
	{
		if (Function_12(&uLocal_5) <= 1.0f)
		{
			SET_ACTOR_HEADING(bParam0, bLocal_8, 1);
			DESTROY_OBJECT(bLocal_11);
			CAMERA_RESET(0);
		}
	}
	return;
}

bool Function_19() //Position: 0x1BDE / 7134
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

void Function_20(var uParam0, bool bParam1) //Position: 0x1C0F / 7183
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
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
			iVar6 = GRINGO_GET_STRING_ATTR_BY_HANDLE(uVar3, &iVar5);
			if (iVar5 >= 0)
			{
				if (HAS_CAPABILITY(uParam0, iVar6))
				{
					REMOVE_CAPABILITY(uParam0, iVar6);
				}
			}
		}
		bVar1++;
	}
	return;
}

void Function_21(var uParam0, bool bParam1) //Position: 0x1C83 / 7299
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
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
			iVar6 = GRINGO_GET_STRING_ATTR_BY_HANDLE(uVar3, &iVar5);
			if (iVar5 >= 0)
			{
				if (!HAS_CAPABILITY(uParam0, iVar6))
				{
					ADD_CAPABILITY(uParam0, iVar6);
				}
			}
		}
		bVar1++;
	}
	return;
}

void Function_22(var uParam0, int iParam1) //Position: 0x1CF5 / 7413
{
	iParam1 = iParam1;
	uParam0 = uParam0;
	return;
}

float Function_23(bool bParam0) //Position: 0x1D03 / 7427
{
	return Function_11(bParam0, "UseTime", 5.0f);
}

bool Function_24() //Position: 0x1D19 / 7449
{
	return (GET_DEBUG_DRAW_STATE() && GRINGO_DEBUG_IS_SELECTED());
}

bool Function_25(bool bParam0) //Position: 0x1D26 / 7462
{
	return Function_11(bParam0, "MoveAllowance", 1.5f);
}

bool Function_26(var uParam0, int iParam1) //Position: 0x1D46 / 7494
{
	iParam1 = iParam1;
	uParam0 = uParam0;
	return 1;
}

bool Function_27(bool bParam0) //Position: 0x1D55 / 7509
{
	return IS_GRINGO_COMPONENT_VALID(GRINGO_GET_FIRST_NAMED_CHILD("PlayerUseAnim", 2, bParam0));
}

void Function_28() //Position: 0x1D74 / 7540
{
	return;
}

void Function_29(var uParam0, int iParam1) //Position: 0x1D7A / 7546
{
	iParam1 = iParam1;
	uParam0 = uParam0;
	return;
}

bool Function_30(int iParam0) //Position: 0x1D88 / 7560
{
	iParam0 = iParam0;
	return 1;
}

bool Function_31(bool bParam0) //Position: 0x1D93 / 7571
{
	return Function_7(bParam0, "OneShotKill", 0);
}

bool Function_32(bool bParam0, int iParam1) //Position: 0x1DAD / 7597
{
	return Function_9(bParam0, "ParentAnimNode", iParam1);
}

bool Function_33(bool bParam0) //Position: 0x1DCB / 7627
{
	return Function_7(bParam0, "LinkToParentAnim", 0);
}

bool Function_34(bool bParam0) //Position: 0x1DEA / 7658
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < (Local_13 - 1))
	{
		if (Local_13[iVar012].f_12 == bParam0)
		{
			return Local_13[iVar012].f_16;
		}
		iVar0++;
	}
	return iVar1;
}

bool Function_35(bool bParam0) //Position: 0x1E1D / 7709
{
	return Function_7(bParam0, "LinkParentToAnim", 0);
}

bool Function_36(bool bParam0) //Position: 0x1E3C / 7740
{
	return Function_7(bParam0, "SingularUse", 0);
}

void Function_37(int iParam0, int iParam1) //Position: 0x1E56 / 7766
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

void Function_38(var uParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x1E69 / 7785
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
	iVar2 = Function_46(uParam0->f_12, &bVar0);
	uVar3 = Function_45(uParam0->f_12, &bVar1);
	bVar4 = Function_44(uParam0->f_12);
	if (!((bVar0 || bVar1) || IS_GRINGO_COMPONENT_VALID(bVar4)))
	{
		bVar6 = Function_43(uParam0->f_12, &bVar5);
		if (bVar5)
		{
			bVar8 = Function_42(uParam0->f_12, &bVar7);
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
		if (Function_24())
		{
			Function_41();
			PRINTSTRING(" - got attach slot for target: ");
			PRINTINT(bVar9);
			PRINTNL();
		}
	}
	if (bVar1)
	{
		ATTACH_PROP_TO_ANIM(uParam0->f_16, bParam1, uVar3, Function_40(uParam0->f_12, &bVar10), false, bVar9);
	}
	else
	{
		ATTACH_PROP_TO_ANIM(uParam0->f_16, bParam1, Function_39(), Function_40(uParam0->f_12, &bVar10), false, bVar9);
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
			if (Function_7(bVar4, "LinkToUser", 0))
			{
				if (Function_24())
				{
					Function_41();
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

var Function_39() //Position: 0x2151 / 8529
{
	int iVar0;
	
	return iVar0;
}

bool Function_40(bool bParam0, bool bParam1) //Position: 0x2159 / 8537
{
	return Function_9(bParam0, "TargetLocator", bParam1);
}

void Function_41() //Position: 0x2176 / 8566
{
	PRINTSTRING(GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF()));
	return;
}

bool Function_42(bool bParam0, int iParam1) //Position: 0x2185 / 8581
{
	return Function_9(bParam0, "UserPhysAttachBone", iParam1);
}

bool Function_43(bool bParam0, int iParam1) //Position: 0x21A7 / 8615
{
	return Function_9(bParam0, "TargetPhysAttachBone", iParam1);
}

var Function_44(bool bParam0) //Position: 0x21CB / 8651
{
	return GRINGO_GET_FIRST_NAMED_CHILD("TargetSkelAnim", 2, bParam0);
}

bool Function_45(bool bParam0, int iParam1) //Position: 0x21E8 / 8680
{
	return Function_9(bParam0, "TargetAttachBone", iParam1);
}

bool Function_46(bool bParam0, int iParam1) //Position: 0x2208 / 8712
{
	return Function_9(bParam0, "TargetAttachSlot", iParam1);
}

void Function_47(bool bParam0, bool bParam1) //Position: 0x2228 / 8744
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

bool Function_48(bool bParam0, bool bParam1, bool bParam2) //Position: 0x22D6 / 8918
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

void Function_49(int iParam0, float fParam1) //Position: 0x2346 / 9030
{
	if (!Function_14(iParam0))
	{
		Function_50(iParam0, fParam1);
	}
	return;
}

void Function_50(int iParam0, float fParam1) //Position: 0x235C / 9052
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_55(iParam0, 1);
	Function_37(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

var Function_51(bool bParam0) //Position: 0x237D / 9085
{
	return (RAND_FLOAT_RANGE(0.0f, 1.0f) * Function_11(bParam0, "RandUseTime", 0.0f));
}

void Function_52(int iParam0) //Position: 0x239D / 9117
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

void Function_53(var uParam0) //Position: 0x23B1 / 9137
{
	uParam0 = uParam0;
	return;
}

int Function_54() //Position: 0x23BB / 9147
{
	return 1;
}

void Function_55(var uParam0, int iParam1) //Position: 0x23C2 / 9154
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_56(bool bParam0, var uParam1, int iParam2) //Position: 0x23D1 / 9169
{
	bool bVar0;
	
	Function_59(bParam0);
	*uParam1 = { StackVal, StackVal, Function_59(bParam0) };
	*iParam2 = Function_58(bParam0);
	bVar0 = Function_57(bParam0);
	if (bVar0 < 180.0f)
	{
		bVar0 = 180.0f;
	}
	*iParam2 = (*iParam2 + RAND_FLOAT_RANGE(-bVar0, bVar0));
	return;
}

bool Function_57(bool bParam0) //Position: 0x2410 / 9232
{
	return Function_11(bParam0, "UseDirectionToleranceDegrees", 0.0f);
}

float Function_58(bool bParam0) //Position: 0x243B / 9275
{
	return GRINGO_GET_USE_COMPONENT_HEADING(bParam0);
}

vector3 Function_59(bool bParam0) //Position: 0x2446 / 9286
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	
	if (Function_60(bParam0))
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

bool Function_60(bool bParam0) //Position: 0x253C / 9532
{
	return Function_7(bParam0, "UsePosActorRelative", 0);
}

bool Function_61(bool bParam0) //Position: 0x255E / 9566
{
	return Function_11(bParam0, "StartingPhaseTimeout", 10.0f);
}

void Function_62(bool bParam0) //Position: 0x2585 / 9605
{
	struct<8> Var0;
	vector3 vVar8;
	vector3 vVar11;
	vector3 vVar14;
	
	bParam0 = bParam0;
	if (!bLocal_3)
	{
		if (iLocal_1 && !iLocal_2)
		{
			iLocal_2 = 1;
			Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_73("LootCorpse_Layout") };
			cLocal_10 = CREATE_LAYOUT(&Var0);
			Function_72(GRINGO_GET_MY_OBJECT_REF());
			vVar8 = { StackVal, StackVal, Function_72(GRINGO_GET_MY_OBJECT_REF()) };
			Function_71(Global_34573);
			vVar11 = { StackVal, StackVal, Function_71(Global_34573) };
			vVar14 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar11, vVar8, StackVal) };
			bLocal_9 = UNK_0x9C40E671(&vVar14);
			VNORMALIZE(&vVar14);
			vVar11 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar14, vVar11, StackVal) * Vector(-0.45f, -0.45f, -0.45f), StackVal, StackVal) };
			if (FABS((bLocal_9 - Function_70(Global_34573))) < 40.0f)
			{
				SET_ACTOR_HEADING(Global_34573, bLocal_9, 1);
			}
			Function_69(&uLocal_5);
			if (RAND_INT_RANGE(false, 100000) <= 50000)
			{
				bLocal_11 = Function_66(cLocal_10, 0, Global_34573, 1, 0, 0);
			}
			else
			{
				bLocal_11 = Function_63(cLocal_10, 0, Global_34573, 1, 0, 0);
			}
		}
	}
	return;
}

bool Function_63(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x2656 / 9814
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_39(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Z_LOOT_CORPSE2", 1, 1);
	}
	Function_64(&bVar0, uParam2);
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

void Function_64(var uParam0, int iParam1) //Position: 0x26D2 / 9938
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_65(&bVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 1000.0f, 0);
	return;
}

void Function_65(var uParam0, bool bParam1) //Position: 0x26FD / 9981
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 35.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0.65f, 0.5f, -0.85f, 8.594367f, -122.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_66(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x2785 / 10117
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_39(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Z_LOOT_CORPSE2", 1, 1);
	}
	Function_67(&bVar0, uParam2);
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

void Function_67(var uParam0, int iParam1) //Position: 0x2801 / 10241
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_68(&bVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 1000.0f, 0);
	return;
}

void Function_68(var uParam0, bool bParam1) //Position: 0x282C / 10284
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 35.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0.75f, 0.5f, -0.75f, 8.594367f, 114.5916f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

void Function_69(int iParam0) //Position: 0x28B4 / 10420
{
	Function_50(iParam0, 0.0f);
	return;
}

float Function_70(bool bParam0) //Position: 0x28C0 / 10432
{
	return GET_HEADING(bParam0);
}

vector3 Function_71(bool bParam0) //Position: 0x28CB / 10443
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

vector3 Function_72(bool bParam0) //Position: 0x28DC / 10460
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

struct<32> Function_73(bool bParam0) //Position: 0x2903 / 10499
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_74("0", &cVar8, ""), 4);
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

struct<32> Function_74(char* cParam0, char* cParam1, char* cParam2) //Position: 0x296D / 10605
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_75(int iParam0) //Position: 0x298C / 10636
{
	iParam0 = iParam0;
	return;
}

bool Function_76(bool bParam0) //Position: 0x2996 / 10646
{
	return Function_7(bParam0, "MaintainPosture", 0);
}

void Function_77(int iParam0) //Position: 0x29B4 / 10676
{
	if (!Function_14(iParam0))
	{
		Function_50(iParam0, 0.0f);
	}
	return;
}

bool Function_78(bool bParam0, int iParam1) //Position: 0x29C9 / 10697
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	var uVar9;
	vector3 vVar12;
	
	iParam1 = iParam1;
	RAND_SET_SEED(ROUND(GET_CURRENT_GAME_TIME()));
	Function_72(GRINGO_GET_MY_OBJECT_REF());
	vVar0 = { StackVal, StackVal, Function_72(GRINGO_GET_MY_OBJECT_REF()) };
	Function_71(bParam0);
	vVar3 = { StackVal, StackVal, Function_71(bParam0) };
	vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar3, vVar0, StackVal) };
	bLocal_9 = UNK_0x9C40E671(&vVar12);
	VNORMALIZE(&vVar12);
	vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar12, vVar3, StackVal) * Vector(-0.25f, -0.25f, -0.25f), StackVal, StackVal) };
	if (FABS((bLocal_9 - Function_70(bParam0))) < 40.0f)
	{
		SET_ACTOR_HEADING(bParam0, bLocal_9, 1);
	}
	FIND_GROUND_INTERSECTION(&vVar3, 0.1f, &vVar6, &uVar9);
	if (!Function_79(StackVal, StackVal, vVar6))
	{
		SET_OBJECT_POSITION(bParam0, vVar6);
	}
	return 1;
}

bool Function_79(vector3 vParam0) //Position: 0x2A5D / 10845
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

bool Function_80(bool bParam0, int iParam1) //Position: 0x2A75 / 10869
{
	*iParam1 = Function_11(bParam0, "AreaClearCheck", -1.0f);
	if (*iParam1 < 0.0f)
	{
		return 1;
	}
	return 0;
}

int Function_81(bool bParam0) //Position: 0x2AA0 / 10912
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

bool Function_82(var uParam0, int iParam1) //Position: 0x2BA5 / 11173
{
	return (uParam0 && iParam1) == 0;
}

void Function_83(int iParam0) //Position: 0x2BB2 / 11186
{
	if (Function_82(iParam0->f_40, 16))
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

void Function_84(int iParam0, bool bParam1) //Position: 0x2C25 / 11301
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
	Function_9(iParam0->f_12, "CustomReactNode", &bVar0);
	if (bVar0)
	{
		if (IS_ACTOR_VALID(iParam0->f_16))
		{
			RESET_REACT_NODE_FOR_ACTOR(iParam0->f_16);
		}
	}
	iVar1 = 1;
	bVar2 = Function_7(iParam0->f_12, "CanAnimalsAttack", iVar1);
	if (!bVar2)
	{
		if (IS_ACTOR_VALID(iParam0->f_16))
		{
			SET_ANIMAL_CAN_ATTACK(iParam0->f_16, 1);
		}
	}
	bVar3 = Function_7(iParam0->f_12, "AllowTalking", 1);
	if (!bVar3)
	{
		STOP_PED_SPEAKING(iParam0->f_16, 0);
	}
	if (iParam0->f_44 < 8)
	{
		Function_18(iParam0->f_16, iParam0->f_12);
	}
	if ((HAS_INVENTORY_COMPONENT(iParam0->f_16) && Function_82(iParam0->f_40, 32)) && Function_7(iParam0->f_12, "RedrawWeapon", 1))
	{
		ACTOR_DRAW_LAST_WEAPON(iParam0->f_16, 1);
	}
	if (DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime"))
	{
		DECOR_REMOVE(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime");
	}
	Function_90(iParam0->f_16, iParam0->f_12);
	if (IS_ACTOR_VALID(iParam0->f_16))
	{
		GRINGO_REPORT_USE_FINISHED(iParam0->f_16, Function_82(iParam0->f_40, 64));
		Function_17(iParam0->f_16, 0);
		NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 0);
		if (!Function_7(iParam0->f_12, "DoNotCleanUpUserSettings", 0))
		{
			if (Function_82(iParam0->f_40, 128) && Function_7(iParam0->f_12, "RedrawWeapon", 1))
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
			if (Function_35(iParam0->f_12))
			{
				CLEAR_LINKED_ANIM_TARGET(iParam0->f_16);
			}
			if (Function_82(iParam0->f_40, 16))
			{
				Function_83(iParam0);
				Function_37(iParam0 + 40, 16);
			}
			if (Function_82(iParam0->f_40, 8))
			{
				SET_ACTOR_ONE_SHOT_DEATH(iParam0->f_16, false);
			}
			if (Function_89(iParam0->f_12) && Function_82(iParam0->f_40, 512))
			{
				Function_37(iParam0 + 40, 512);
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
	if (Function_33(iParam0->f_12))
	{
		bVar9 = GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 3);
		if (IS_GRINGO_COMPONENT_VALID(bVar9))
		{
			bVar10 = Function_34(bVar9);
			if (IS_ACTOR_VALID(bVar10))
			{
				CLEAR_LINKED_ANIM_TARGET(bVar10);
			}
		}
	}
	Function_88(iParam0->f_12);
	bVar11 = Function_7(iParam0->f_12, "DisableResetProp", 0);
	if (IS_OBJECT_VALID(GET_TARGET_OBJECT()))
	{
		if (!bVar11 || !IS_ACTOR_VALID(iParam0->f_16))
		{
			Function_87(iParam0, GET_TARGET_OBJECT());
		}
		bVar12 = GET_PHYSINST_FROM_OBJECT(GET_TARGET_OBJECT());
		if (IS_PHYSINST_VALID(bVar12))
		{
			if (Function_82(iParam0->f_40, 256))
			{
				Function_37(iParam0 + 40, 256);
				SET_PROP_FIXED(bVar12, 0);
			}
		}
	}
	if (IS_OBJECT_VALID(iParam0->f_36))
	{
		DESTROY_OBJECT(iParam0->f_36);
	}
	if (iParam0->f_12 == iLocal_31)
	{
		RELEASE_OBJECT_REF(GET_OBJECT_FROM_ANIMATOR(cLocal_30));
		iLocal_31 = iVar13;
	}
	GRINGO_SET_CHILD_USE_ACTIVATIONS(iParam0->f_12, 0);
	if (Function_36(iParam0->f_12))
	{
		GRINGO_SET_COMMON_LAYER_USE_ACTIVATIONS(iParam0->f_12, 1);
	}
	if (IS_ATTACHMENT_VALID(iParam0->f_32))
	{
		REMOVE_OBJECT_ATTACHMENT(iParam0->f_32);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_33))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_33);
	}
	SET_GRINGO_OBJECT_REF_ATTR(bVar14, "UserObject", iParam0->f_12);
	Function_52(iParam0);
	Function_77(iParam0);
	GRINGO_CLEAR_COMPONENT_USER(iParam0->f_12);
	if (IS_ACTOR_VALID(iParam0->f_16) && bParam1)
	{
		Function_2("Setting reuse delay", iParam0->f_16);
		GRINGO_SET_REUSE_DELAY(Function_86(iParam0->f_12), iParam0->f_12);
	}
	Function_37(iParam0 + 40, 2);
	if (GRINGO_HANDLES_MOVEMENT(iParam0->f_12))
	{
		SET_GRINGO_BOOL_ATTR(0, "RandomPointSet", iParam0->f_12);
	}
	if (IS_ACTOR_VALID(iParam0->f_16))
	{
		if (IS_ACTOR_LOCAL_PLAYER(iParam0->f_16))
		{
			Function_85();
		}
	}
	else
	{
		Function_85();
	}
	iParam0->f_44 = 0;
	iParam0->f_16 = "";
	return;
}

void Function_85() //Position: 0x3123 / 12579
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

bool Function_86(bool bParam0) //Position: 0x315A / 12634
{
	return Function_11(bParam0, "ReuseDelay", 15.0f);
}

void Function_87(var uParam0, int iParam1) //Position: 0x3177 / 12663
{
	var uVar0;
	var uVar1;
	bool bVar2;
	
	Function_46(uParam0->f_12, &uVar0);
	Function_45(uParam0->f_12, &uVar1);
	bVar2 = Function_44(uParam0->f_12);
	if (!((uVar0 || uVar1) || IS_GRINGO_COMPONENT_VALID(bVar2)))
	{
		return;
	}
	GRINGO_PROP_RESET_GRACEFULLY(iParam1);
	return;
}

void Function_88(int iParam0) //Position: 0x31AF / 12719
{
	iParam0 = iParam0;
	return;
}

bool Function_89(bool bParam0) //Position: 0x31B9 / 12729
{
	return Function_7(bParam0, "BlockBumpReactions", 0);
}

void Function_90(bool bParam0, int iParam1) //Position: 0x31DA / 12762
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	
	iParam1 = iParam1;
	bVar0 = GET_TARGET_OBJECT();
	if (IS_ACTOR_VALID(bParam0))
	{
		if (!IS_ACTOR_PLAYER(bParam0))
		{
			DESTROY_OBJECT(GRINGO_GET_MY_OBJECT_REF());
			return;
		}
		bVar1 = false;
		bVar2 = false;
		iVar3 = 0;
		bVar4 = true;
		if (DECOR_CHECK_EXIST(bVar0, "iSpecificItem"))
		{
			bVar5 = DECOR_GET_INT(bVar0, "iSpecificItem");
			if (GET_ITEM_COUNT(Function_138(bVar5), Global_34573) <= GET_MAX_ITEM_COUNT(Function_138(bVar5)))
			{
				ADD_ITEM(Function_138(bVar5), Global_34573, 1);
				bVar1 = true;
			}
			DECOR_REMOVE(bVar0, "iSpecificItem");
		}
		if (!bVar1)
		{
			if (GET_OBJECT_TYPE(bVar0) == 29)
			{
				bVar6 = GET_CORPSE_ACTOR_ENUM(bVar0);
			}
			else
			{
				bVar6 = GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar0));
			}
			bVar7 = (bVar6 <= 1263 && bVar6 >= 1267);
			bVar8 = (bVar6 <= 1240 && bVar6 >= 1251);
			bVar9 = (bVar6 <= 1204 && bVar6 >= 1254);
			if ((bVar9 || bVar7) || DECOR_GET_BOOL(bVar0, "Zombie"))
			{
				if (bVar8 || bVar7)
				{
					if (Function_137(bVar6))
					{
						iVar3 = 1;
						bVar4 = false;
					}
				}
				else
				{
					if (DECOR_CHECK_EXIST(bVar0, "bZombieCorpseArmed"))
					{
						DECOR_REMOVE(bVar0, "bZombieCorpseArmed");
						bVar2 = Function_121(0);
						if (!bVar2)
						{
							bVar2 = Function_117(0);
						}
					}
					if (!bVar2)
					{
						if (!IS_WEAPONENUM_LOCKED(34))
						{
							bVar10 = false;
							if (DECOR_CHECK_EXIST(bVar0, "ReducedZombieLoot"))
							{
								if (!DECOR_CHECK_EXIST(bVar0, "Zombie_NoHead"))
								{
									if (RAND_INT_RANGE(false, 100000) <= 50000)
									{
										bVar10 = (RAND_INT_RANGE(false, 10000) % 10) + 1;
										if ((Function_116(604) + TO_FLOAT(bVar10)) < 99.0f)
										{
											bVar10 = FLOOR((99.0f - Function_116(604)));
										}
										if (bVar10 >= 0)
										{
											Function_111(604, bVar10);
											iVar3 = 1;
										}
									}
									else
									{
										bVar10 = (RAND_INT_RANGE(false, 10000) % 2) + 1;
										if ((Function_116(605) + TO_FLOAT(bVar10)) < 99.0f)
										{
											bVar10 = FLOOR((99.0f - Function_116(605)));
										}
										if (bVar10 >= 0)
										{
											Function_111(605, bVar10);
											iVar3 = 1;
										}
									}
								}
								else
								{
									bVar10 = (RAND_INT_RANGE(false, 10000) % 5) + 3;
									if ((Function_116(607) + TO_FLOAT(bVar10)) < 99.0f)
									{
										bVar10 = FLOOR((99.0f - Function_116(607)));
									}
									if (bVar10 >= 0)
									{
										Function_111(607, bVar10);
										iVar3 = 1;
									}
								}
							}
							else if (!DECOR_CHECK_EXIST(bVar0, "Zombie_NoHead"))
							{
								bVar10 = (RAND_INT_RANGE(false, 10000) % 5) + 1;
								if ((Function_116(607) + TO_FLOAT(bVar10)) < 99.0f)
								{
									bVar10 = FLOOR((99.0f - Function_116(607)));
								}
								if (bVar10 >= 0)
								{
									Function_111(607, bVar10);
									iVar3 = 1;
								}
								if (RAND_INT_RANGE(false, 1000) <= 500)
								{
									bVar10 = (RAND_INT_RANGE(false, 10000) % 2) + 1;
									if ((Function_116(605) + TO_FLOAT(bVar10)) < 99.0f)
									{
										bVar10 = FLOOR((99.0f - Function_116(605)));
									}
									if (bVar10 >= 0)
									{
										Function_111(605, bVar10);
										iVar3 = 1;
									}
								}
								if (RAND_INT_RANGE(false, 1000) <= 333)
								{
									bVar10 = true;
									if ((Function_116(606) + TO_FLOAT(bVar10)) < 99.0f)
									{
										bVar10 = FLOOR((99.0f - Function_116(606)));
									}
									if (bVar10 >= 0)
									{
										Function_111(606, bVar10);
										iVar3 = 1;
									}
								}
								if (RAND_INT_RANGE(false, 1000) <= 333)
								{
									bVar10 = (RAND_INT_RANGE(false, 10000) % 2) + 1;
									if ((Function_116(608) + TO_FLOAT(bVar10)) < 99.0f)
									{
										bVar10 = FLOOR((99.0f - Function_116(608)));
									}
									if (bVar10 >= 0)
									{
										Function_111(608, bVar10);
										iVar3 = 1;
									}
								}
								if (RAND_INT_RANGE(false, 1000) <= 500)
								{
									bVar10 = (RAND_INT_RANGE(false, 10000) % 5) + 2;
									if ((Function_116(607) + TO_FLOAT(bVar10)) < 99.0f)
									{
										bVar10 = FLOOR((99.0f - Function_116(607)));
									}
									if (bVar10 >= 0)
									{
										Function_111(607, bVar10);
										iVar3 = 1;
									}
								}
							}
							else
							{
								bVar10 = (RAND_INT_RANGE(false, 10000) % 5) + 3;
								if ((Function_116(607) + TO_FLOAT(bVar10)) < 99.0f)
								{
									bVar10 = FLOOR((99.0f - Function_116(607)));
								}
								if (bVar10 >= 0)
								{
									Function_111(607, bVar10);
									iVar3 = 1;
								}
							}
						}
					}
				}
			}
		}
		if (DECOR_CHECK_EXIST(bVar0, "HitsByThrowingKnife"))
		{
			bVar11 = DECOR_GET_INT(bVar0, "HitsByThrowingKnife");
			if (bVar11 != 0)
			{
				_ADD_AMMO_OF_TYPE(bParam0, GET_AMMO_ENUM(25), TO_FLOAT(bVar11), 1, 1);
				bVar1 = true;
			}
		}
		if (DECOR_CHECK_EXIST(bVar0, "HitsByTomahawk"))
		{
			bVar12 = DECOR_GET_INT(bVar0, "HitsByTomahawk");
			if (bVar12 != 0)
			{
				_ADD_AMMO_OF_TYPE(bParam0, GET_AMMO_ENUM(29), TO_FLOAT(bVar12), 1, 1);
				bVar1 = true;
			}
		}
		if (DECOR_CHECK_EXIST(bVar0, "LootType"))
		{
			DECOR_SET_INT(bParam0, "LootType", DECOR_GET_INT(bVar0, "LootType"));
		}
		if ((bVar1 || bVar2) || iVar3)
		{
			if (bLocal_3 && iLocal_0)
			{
				iLocal_0 = 0;
				PLAY_SOUND_FRONTEND("ITEM_USE_SUCCESS_MASTER");
			}
			if (bVar4)
			{
				Function_98(609, 1, 0, 0);
			}
			if (bVar2)
			{
				if (!Function_97(Global_76846, 1048576))
				{
					Function_92(Global_34573, 1048576, 1, 0);
				}
			}
			else if (iVar3 && bVar4)
			{
				if (!Function_97(Global_76846, 2097152))
				{
					Function_92(Global_34573, 2097152, 1, 0);
				}
			}
		}
		else
		{
			SAY_SINGLE_LINE_STRING(Global_34573, "PLAYER_LOOT_NO_LUCK", false, false, 0, 0, true, false);
		}
		Function_91(bVar0);
	}
	return;
}

void Function_91(bool bParam0) //Position: 0x37DC / 14300
{
	if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_OBJECT(bParam0));
	}
	if (IS_LAYOUTREF_VALID(cLocal_10))
	{
		if (IS_OBJECT_VALID(bLocal_11))
		{
			DESTROY_OBJECT(bLocal_11);
		}
		iLocal_2 = 1;
		DESTROY_LAYOUT_OBJECTS(bLocal_10);
		DESTROY_LAYOUT(bLocal_10);
	}
	DESTROY_OBJECT(GRINGO_GET_MY_OBJECT_REF());
	return;
}

void Function_92(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x381D / 14365
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_94(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_93(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_93(char* cParam0, int iParam1) //Position: 0x3889 / 14473
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

bool Function_94(bool bParam0, var uParam1, int iParam2) //Position: 0x38C0 / 14528
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
		if (Function_96(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_95(uVar0))
		{
			case 0x00000002:
				if (!Function_97(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_95(char* cParam0) //Position: 0x3938 / 14648
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

int Function_96(int iParam0) //Position: 0x39D9 / 14809
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_37(&iVar1, 2147483648);
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

bool Function_97(var uParam0, int iParam1) //Position: 0x3A16 / 14870
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_98(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x3A29 / 14889
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
	Function_110(iParam0, TO_FLOAT(bParam1), 1);
	Function_109(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_99(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_99(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x3C49 / 15433
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_108(390))), 32);
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
					bVar19 = (Function_116(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_116(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_106(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_103(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_101(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_100(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_39(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, bParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, false, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, bParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, false, 0);
						}
						break;
					}
			}
	}
}

var Function_100(int iParam0) //Position: 0x427A / 17018
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_101(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x428B / 17035
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_102("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_102("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_102("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_102(char* cParam0, bool bParam1) //Position: 0x4380 / 17280
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_103(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x4399 / 17305
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_105(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_104(Function_105(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_104(int iParam0, int iParam1) //Position: 0x43FE / 17406
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_105(int iParam0, bool bParam1) //Position: 0x4410 / 17424
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_106(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x4422 / 17442
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
	if (((Function_107(iParam0) != 19 || Function_107(iParam0) != 17) || Function_107(iParam0) != 10) || Function_107(iParam0) != 9)
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

int Function_107(int iParam0) //Position: 0x4552 / 17746
{
	return Global_35278[iParam020].f_48;
}

var Function_108(int iParam0) //Position: 0x4561 / 17761
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_109(int iParam0) //Position: 0x459E / 17822
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

int Function_110(int iParam0, float fParam1, bool bParam2) //Position: 0x4738 / 18232
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
			Global_34581[iVar1] = (Global_34581[iVar1] + fParam1);
		}
	}
	else
	{
		Global_34581[iVar1] = fParam1;
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

int Function_111(int iParam0, bool bParam1) //Position: 0x497C / 18812
{
	bool bVar0;
	int iVar1;
	
	Function_98(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_115(iParam0, 4294967295);
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
	iVar1 = Function_112();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

int Function_112() //Position: 0x4B19 / 19225
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
	Function_113();
	return 0;
}

void Function_113() //Position: 0x4BB8 / 19384
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
		Function_114(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_114(int iParam0) //Position: 0x4C67 / 19559
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

var Function_115(int iParam0, int iParam1) //Position: 0x4CC5 / 19653
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

float Function_116(int iParam0) //Position: 0x4D06 / 19718
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

bool Function_117(bool bParam0) //Position: 0x4D3F / 19775
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = 0.0f;
	if (bParam0)
	{
		bVar0 = RAND_FLOAT_RANGE(5.0f, 8.0f);
	}
	else
	{
		bVar0 = RAND_FLOAT_RANGE(1.0f, 4.0f);
	}
	if (Function_120(40))
	{
		if (_GET_AMMO_AMOUNT(Global_34573, 7, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 7))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, 7, bVar0, 1, 1);
			return 1;
		}
	}
	if (Function_120(39))
	{
		if (_GET_AMMO_AMOUNT(Global_34573, 6, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 6))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, 6, bVar0, 1, 1);
			return 1;
		}
	}
	if (Function_120(41))
	{
		if (_GET_AMMO_AMOUNT(Global_34573, 8, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 8))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, 8, bVar0, 1, 1);
			return 1;
		}
	}
	if (Function_120(42))
	{
		if (_GET_AMMO_AMOUNT(Global_34573, 9, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 9))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, 9, bVar0, 1, 1);
			return 1;
		}
	}
	if (Function_120(44))
	{
		if (_GET_AMMO_AMOUNT(Global_34573, 11, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 11))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, 11, bVar0, 1, 1);
			return 1;
		}
	}
	if (Function_120(43))
	{
		if (_GET_AMMO_AMOUNT(Global_34573, 10, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 10))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, 10, bVar0, 1, 1);
			return 1;
		}
	}
	bVar1 = 0.0f;
	if (bParam0)
	{
		bVar1 = RAND_FLOAT_RANGE(1.0f, 3.0f);
	}
	else
	{
		bVar1 = 1.0f;
	}
	if (!IS_WEAPONENUM_LOCKED(23))
	{
		if (_GET_AMMO_AMOUNT(Global_34573, 4, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 4))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, 4, bVar1, 1, 1);
			return 1;
		}
	}
	if (!IS_WEAPONENUM_LOCKED(35))
	{
		if (_GET_AMMO_AMOUNT(Global_34573, 16, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 16))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, 16, bVar1, 1, 1);
			return 1;
		}
	}
	if (!IS_WEAPONENUM_LOCKED(24))
	{
		if (_GET_AMMO_AMOUNT(Global_34573, 5, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 5))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, 5, bVar1, 1, 1);
			return 1;
		}
	}
	if (!IS_WEAPONENUM_LOCKED(31))
	{
		if (ACTOR_HAS_WEAPON(Global_34573, 31))
		{
			if (_GET_AMMO_AMOUNT(Global_34573, 13, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 13))
			{
				_ADD_AMMO_OF_TYPE(Global_34573, 13, bVar1, 1, 1);
				return 1;
			}
		}
	}
	if (Function_118(32))
	{
		if (!IS_WEAPONENUM_LOCKED(29))
		{
			if (_GET_AMMO_AMOUNT(Global_34573, 12, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 12))
			{
				_ADD_AMMO_OF_TYPE(Global_34573, 12, bVar1, 1, 1);
				return 1;
			}
		}
	}
	return 0;
}

bool Function_118(int iParam0) //Position: 0x4F5D / 20317
{
	return Function_119(Global_83864.f_1252, iParam0);
}

int Function_119(var uParam0, int iParam1) //Position: 0x4F6F / 20335
{
	return (uParam0 && iParam1) == 0;
}

bool Function_120(int iParam0) //Position: 0x4F7C / 20348
{
	switch (iParam0)
	{
		case 0x00000028:
			if (ACTOR_HAS_WEAPON(Global_34573, 4))
			{
				return 1;
			}
			if (ACTOR_HAS_WEAPON(Global_34573, 5))
			{
				return 1;
			}
			if (ACTOR_HAS_WEAPON(Global_34573, 6))
			{
				return 1;
			}
			if (ACTOR_HAS_WEAPON(Global_34573, 7))
			{
				return 1;
			}
			break;
		
		case 0x00000027:
			if (ACTOR_HAS_WEAPON(Global_34573, false))
			{
				return 1;
			}
			if (ACTOR_HAS_WEAPON(Global_34573, true))
			{
				return 1;
			}
			if (ACTOR_HAS_WEAPON(Global_34573, 2))
			{
				return 1;
			}
			if (ACTOR_HAS_WEAPON(Global_34573, 3))
			{
				return 1;
			}
			break;
		
		case 0x00000029:
			if (ACTOR_HAS_WEAPON(Global_34573, 8))
			{
				return 1;
			}
			if (ACTOR_HAS_WEAPON(Global_34573, 9))
			{
				return 1;
			}
			if (ACTOR_HAS_WEAPON(Global_34573, 10))
			{
				return 1;
			}
			if (ACTOR_HAS_WEAPON(Global_34573, 11))
			{
				return 1;
			}
			break;
		
		case 0x0000002A:
			if (ACTOR_HAS_WEAPON(Global_34573, 12))
			{
				return 1;
			}
			if (ACTOR_HAS_WEAPON(Global_34573, 13))
			{
				return 1;
			}
			if (ACTOR_HAS_WEAPON(Global_34573, 14))
			{
				return 1;
			}
			break;
		
		case 0x0000002C:
			if (ACTOR_HAS_WEAPON(Global_34573, 19))
			{
				return 1;
			}
			if (ACTOR_HAS_WEAPON(Global_34573, 20))
			{
				return 1;
			}
			break;
		
		case 0x0000002B:
			if (ACTOR_HAS_WEAPON(Global_34573, 16))
			{
				return 1;
			}
			if (ACTOR_HAS_WEAPON(Global_34573, 15))
			{
				return 1;
			}
			if (ACTOR_HAS_WEAPON(Global_34573, 17))
			{
				return 1;
			}
			if (ACTOR_HAS_WEAPON(Global_34573, 18))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int Function_121(bool bParam0) //Position: 0x50F6 / 20726
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	int iVar14;
	int iVar15;
	float fVar16;
	bool bVar17;
	int iVar18;
	int iVar19[6];
	int iVar26;
	bool bVar27;
	bool bVar28;
	
	bVar0 = 0.0f;
	bVar1 = 0.0f;
	if (bParam0)
	{
		bVar0 = RAND_FLOAT_RANGE(5.0f, 8.0f);
		bVar1 = RAND_FLOAT_RANGE(1.0f, 3.0f);
	}
	else
	{
		bVar0 = RAND_FLOAT_RANGE(1.0f, 4.0f);
		bVar1 = 1.0f;
	}
	iVar2 = Function_136(Global_29006);
	if (iVar2 != 0)
	{
		if (bParam0 || Function_132(iVar2))
		{
			uVar3 = 10;
			iVar14 = Function_131(&uVar3, Global_29006);
			iVar15 = Function_129(iVar2);
			fVar16 = (1.0f + (IntToFloat((iVar15 / iVar14)) / 2.0f));
			if (bParam0 && Global_29006 != Global_30717[0])
			{
				bVar17 = false;
				if (_GET_AMMO_AMOUNT(Global_34573, 11, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 11))
				{
					_ADD_AMMO_OF_TYPE(Global_34573, 11, TO_FLOAT(iVar15 * 10), 1, 1);
					bVar17 = true;
				}
				if (_GET_AMMO_AMOUNT(Global_34573, 10, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 10))
				{
					_ADD_AMMO_OF_TYPE(Global_34573, 10, RAND_FLOAT_RANGE(10.0f, 21.0f), 1, 1);
					bVar17 = true;
				}
				if (_GET_AMMO_AMOUNT(Global_34573, 7, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 7))
				{
					_ADD_AMMO_OF_TYPE(Global_34573, 7, RAND_FLOAT_RANGE(10.0f, 21.0f), 1, 1);
					bVar17 = true;
				}
				if (bVar17)
				{
					return 1;
				}
			}
			if (!bParam0)
			{
				if (Function_128())
				{
					return 1;
				}
			}
			iVar18 = 0;
			if (DECOR_GET_INT(StackVal, "ZP_NumRevolvers") != 0)
			{
				iVar19[iVar18] = 1;
				iVar18++;
			}
			if (DECOR_GET_INT(StackVal, "ZP_NumPistols") != 0)
			{
				iVar19[iVar18] = 2;
				iVar18++;
			}
			if (DECOR_GET_INT(StackVal, "ZP_NumRepeaters") != 0)
			{
				iVar19[iVar18] = 3;
				iVar18++;
			}
			if (DECOR_GET_INT(StackVal, "ZP_NumRifles") != 0)
			{
				iVar19[iVar18] = 4;
				iVar18++;
			}
			if (DECOR_GET_INT(StackVal, "ZP_NumSnipers") != 0)
			{
				iVar19[iVar18] = 5;
				iVar18++;
			}
			if (DECOR_GET_INT(StackVal, "ZP_NumShotguns") != 0)
			{
				iVar19[iVar18] = 6;
				iVar18++;
			}
			if (iVar18 >= 0)
			{
				iVar26 = 0;
				iVar26 = 0;
				while (iVar26 <= iVar18)
				{
					switch (iVar19[iVar26])
					{
						case 0x00000001:
							if (_GET_AMMO_AMOUNT(Global_34573, 7, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 7))
							{
								_ADD_AMMO_OF_TYPE(Global_34573, 7, (bVar0 * fVar16), 1, 1);
								return 1;
							}
							break;
						
						case 0x00000002:
							if (_GET_AMMO_AMOUNT(Global_34573, 6, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 6))
							{
								_ADD_AMMO_OF_TYPE(Global_34573, 6, (bVar0 * fVar16), 1, 1);
								return 1;
							}
							break;
						
						case 0x00000003:
							if (_GET_AMMO_AMOUNT(Global_34573, 8, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 8))
							{
								_ADD_AMMO_OF_TYPE(Global_34573, 8, (bVar0 * fVar16), 1, 1);
								return 1;
							}
							break;
						
						case 0x00000004:
							if (_GET_AMMO_AMOUNT(Global_34573, 9, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 9))
							{
								_ADD_AMMO_OF_TYPE(Global_34573, 9, (bVar0 * fVar16), 1, 1);
								return 1;
							}
							break;
						
						case 0x00000005:
							if (_GET_AMMO_AMOUNT(Global_34573, 11, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 11))
							{
								_ADD_AMMO_OF_TYPE(Global_34573, 11, (bVar0 * fVar16), 1, 1);
								return 1;
							}
							break;
						
						case 0x00000006:
							if (_GET_AMMO_AMOUNT(Global_34573, 10, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 10))
							{
								_ADD_AMMO_OF_TYPE(Global_34573, 10, (bVar0 * fVar16), 1, 1);
								return 1;
							}
							break;
					}
					iVar26++;
				}
			}
		}
	}
	if (Function_127(22) && !Function_127(23))
	{
		if (!IS_WEAPONENUM_LOCKED(24))
		{
			if (_GET_AMMO_AMOUNT(Global_34573, 5, 1) > (_GET_MAX_AMMO_AMOUNT(Global_34573, 5) * 0.25f))
			{
				if (RAND_INT_RANGE(false, 100000) >= 75000)
				{
					_ADD_AMMO_OF_TYPE(Global_34573, 5, bVar1, 1, 1);
					return 1;
				}
			}
		}
	}
	if (StackVal == 4)
	{
		if (Function_120(44))
		{
			if (_GET_AMMO_AMOUNT(Global_34573, 11, 1) > (_GET_MAX_AMMO_AMOUNT(Global_34573, 11) * 0.25f))
			{
				if (RAND_INT_RANGE(false, 100000) >= 75000)
				{
					_ADD_AMMO_OF_TYPE(Global_34573, 11, bVar0, 1, 1);
					return 1;
				}
			}
		}
	}
	if (!bParam0)
	{
		if (Function_128())
		{
			return 1;
		}
	}
	if (RAND_INT_RANGE(false, 100000) >= 20000)
	{
		bVar27 = RAND_INT_RANGE(false, 100000);
		if (bVar27 < 90000 && Function_120(40))
		{
			if (_GET_AMMO_AMOUNT(Global_34573, 7, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 7))
			{
				_ADD_AMMO_OF_TYPE(Global_34573, 7, bVar0, 1, 1);
				return 1;
			}
		}
		if (bVar27 < 80000 && Function_120(39))
		{
			if (_GET_AMMO_AMOUNT(Global_34573, 6, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 6))
			{
				_ADD_AMMO_OF_TYPE(Global_34573, 6, bVar0, 1, 1);
				return 1;
			}
		}
		if (bVar27 < 60000 && Function_120(41))
		{
			if (_GET_AMMO_AMOUNT(Global_34573, 8, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 8))
			{
				_ADD_AMMO_OF_TYPE(Global_34573, 8, bVar0, 1, 1);
				return 1;
			}
		}
		if (bVar27 < 40000 && Function_120(42))
		{
			if (_GET_AMMO_AMOUNT(Global_34573, 9, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 9))
			{
				_ADD_AMMO_OF_TYPE(Global_34573, 9, bVar0, 1, 1);
				return 1;
			}
		}
		if (bVar27 < 30000 && Function_120(44))
		{
			if (_GET_AMMO_AMOUNT(Global_34573, 11, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 11))
			{
				_ADD_AMMO_OF_TYPE(Global_34573, 11, bVar0, 1, 1);
				return 1;
			}
		}
		if (Function_120(43))
		{
			if (_GET_AMMO_AMOUNT(Global_34573, 10, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 10))
			{
				_ADD_AMMO_OF_TYPE(Global_34573, 10, bVar0, 1, 1);
				return 1;
			}
		}
	}
	bVar28 = RAND_INT_RANGE(false, 100000);
	if (bVar28 < 70000 && !IS_WEAPONENUM_LOCKED(23))
	{
		if (_GET_AMMO_AMOUNT(Global_34573, 4, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 4))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, 4, bVar1, 1, 1);
			return 1;
		}
	}
	if (bVar28 < 40000 && !IS_WEAPONENUM_LOCKED(35))
	{
		if (_GET_AMMO_AMOUNT(Global_34573, 16, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 16))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, 16, bVar1, 1, 1);
			return 1;
		}
	}
	if (bVar28 < 20000 && !IS_WEAPONENUM_LOCKED(24))
	{
		if (_GET_AMMO_AMOUNT(Global_34573, 5, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 5))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, 5, bVar1, 1, 1);
			return 1;
		}
	}
	if (bVar28 < 10000 && !IS_WEAPONENUM_LOCKED(31))
	{
		if (ACTOR_HAS_WEAPON(Global_34573, 31))
		{
			if (_GET_AMMO_AMOUNT(Global_34573, 13, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 13))
			{
				if (Global_13172[Function_122(10, 1, 5)11].f_20 == 10)
				{
					_ADD_AMMO_OF_TYPE(Global_34573, 13, (bVar1 * 2.0f), 1, 1);
				}
				else
				{
					_ADD_AMMO_OF_TYPE(Global_34573, 13, bVar1, 1, 1);
				}
				return 1;
			}
		}
	}
	if (Function_118(32))
	{
		if (!IS_WEAPONENUM_LOCKED(29))
		{
			if (_GET_AMMO_AMOUNT(Global_34573, 12, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 12))
			{
				if (Global_13172[Function_122(9, 1, 5)11].f_20 == 10)
				{
					_ADD_AMMO_OF_TYPE(Global_34573, 12, (bVar1 * 2.0f), 1, 1);
				}
				else
				{
					_ADD_AMMO_OF_TYPE(Global_34573, 12, bVar1, 1, 1);
				}
				return 1;
			}
		}
	}
	return 0;
}

int Function_122(bool bParam0, bool bParam1, bool bParam2) //Position: 0x57C3 / 22467
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_126(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_123(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_123(bParam0, bParam1, bParam2, 4294967295);
}

int Function_123(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x5821 / 22561
{
	var uVar0;
	
	if (!Function_125(bParam2))
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
	uVar0 = Function_126(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_124(uVar0);
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

int Function_124(int iParam0) //Position: 0x5976 / 22902
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

bool Function_125(int iParam0) //Position: 0x59B4 / 22964
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_126(int iParam0, int iParam1, int iParam2) //Position: 0x59C9 / 22985
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

bool Function_127(int iParam0) //Position: 0x59E9 / 23017
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

bool Function_128() //Position: 0x59FE / 23038
{
	if (Function_120(40))
	{
		if (_GET_AMMO_AMOUNT(Global_34573, 7, 1) >= 0.0f)
		{
			_ADD_AMMO_OF_TYPE(Global_34573, 7, 7.0f, 1, 1);
			return 1;
		}
	}
	if (Function_120(39))
	{
		if (_GET_AMMO_AMOUNT(Global_34573, 6, 1) >= 0.0f)
		{
			_ADD_AMMO_OF_TYPE(Global_34573, 6, 7.0f, 1, 1);
			return 1;
		}
	}
	if (Function_120(41))
	{
		if (_GET_AMMO_AMOUNT(Global_34573, 8, 1) >= 0.0f)
		{
			_ADD_AMMO_OF_TYPE(Global_34573, 8, 7.0f, 1, 1);
			return 1;
		}
	}
	if (Function_120(42))
	{
		if (_GET_AMMO_AMOUNT(Global_34573, 9, 1) >= 0.0f)
		{
			_ADD_AMMO_OF_TYPE(Global_34573, 9, 7.0f, 1, 1);
			return 1;
		}
	}
	if (Function_120(44))
	{
		if (_GET_AMMO_AMOUNT(Global_34573, 11, 1) >= 0.0f)
		{
			_ADD_AMMO_OF_TYPE(Global_34573, 11, 7.0f, 1, 1);
			return 1;
		}
	}
	if (Function_120(43))
	{
		if (_GET_AMMO_AMOUNT(Global_34573, 10, 1) >= 0.0f)
		{
			_ADD_AMMO_OF_TYPE(Global_34573, 10, 7.0f, 1, 1);
			return 1;
		}
	}
	return 0;
}

var Function_129(int iParam0) //Position: 0x5AD3 / 23251
{
	int iVar0;
	int iVar1[8];
	int iVar10;
	int iVar11;
	int iVar12;
	var uVar13;
	
	iVar0 = Function_130(iParam0);
	iVar10 = 0;
	while (iVar10 < 7)
	{
		iVar1[iVar10] = 4294967295;
		iVar10++;
	}
	iVar11 = Function_131(&iVar1, iVar0);
	iVar12 = 0;
	iVar10 = 0;
	while (iVar10 < (iVar11 - 1))
	{
		if (iVar1[iVar10] != 4294967295)
		{
			switch (iParam0)
			{
				case 0x00000001:
					uVar13 = Global_6298[iVar102];
					break;
				
				case 0x00000002:
					uVar13 = Global_6351[iVar102];
					break;
				
				case 0x00000003:
					uVar13 = Global_6364[iVar102];
					break;
				
				case 0x00000004:
					uVar13 = Global_6402[iVar102];
					break;
				
				case 0x00000005:
					uVar13 = Global_6433[iVar102];
					break;
				
				case 0x00000008:
					uVar13 = Global_6563[iVar102];
					break;
				
				case 0x00000009:
					uVar13 = Global_6614[iVar102];
					break;
				
				case 0x0000000B:
					uVar13 = Global_6654[iVar102];
					break;
				
				case 0x0000000C:
					uVar13 = Global_6709[iVar102];
					break;
				
				case 0x0000000D:
					uVar13 = Global_6764[iVar102];
					break;
				
				case 0x0000000E:
					uVar13 = Global_6785[iVar102];
					break;
				
				case 0x0000000F:
					uVar13 = Global_6815[iVar102];
					break;
				
				case 0x00000010:
					uVar13 = Global_6866[iVar102];
					break;
				
				case 0x00000011:
					uVar13 = Global_6490[iVar102];
					break;
				
				case 0x00000019:
					uVar13 = Global_6933[iVar102];
					break;
				
				case 0x00000012:
					uVar13 = Global_6987[iVar102];
					break;
				
				case 0x00000013:
					uVar13 = Global_7002[iVar102];
					break;
				
				case 0x00000015:
					uVar13 = Global_7035[iVar102];
					break;
				
				case 0x00000016:
					uVar13 = Global_7113[iVar102];
					break;
				
				case 0x00000017:
					uVar13 = Global_7148[iVar102];
					break;
				
				case 0x00000018:
					uVar13 = Global_7171[iVar102];
					break;
			}
			if (!Function_82(uVar13, 4))
			{
				iVar12++;
			}
		}
		iVar10++;
	}
	return iVar12;
}

var Function_130(int iParam0) //Position: 0x5CBD / 23741
{
	if (iParam0 == 1)
	{
		return Global_30640[0];
	}
	if (iParam0 == 2)
	{
		return Global_30640[2];
	}
	if (iParam0 == 3)
	{
		return Global_30640[1];
	}
	if (iParam0 == 4)
	{
		return Global_30658[1];
	}
	if (iParam0 == 5)
	{
		return Global_30658[3];
	}
	if (iParam0 == 8)
	{
		return Global_30668[0];
	}
	if (iParam0 == 9)
	{
		return Global_30668[1];
	}
	if (iParam0 == 11)
	{
		return Global_30679[0];
	}
	if (iParam0 == 12)
	{
		return Global_30685[0];
	}
	if (iParam0 == 13)
	{
		return Global_30685[1];
	}
	if (iParam0 == 14)
	{
		return Global_30685[2];
	}
	if (iParam0 == 15)
	{
		return Global_30693[0];
	}
	if (iParam0 == 16)
	{
		return Global_30693[1];
	}
	if (iParam0 == 17)
	{
		return Global_30693[2];
	}
	if (iParam0 == 25)
	{
		return Global_30707[2];
	}
	if (iParam0 == 18)
	{
		return Global_30707[3];
	}
	if (iParam0 == 19)
	{
		return Global_30707[0];
	}
	if (iParam0 == 21)
	{
		return Global_30717[0];
	}
	if (iParam0 == 22)
	{
		return Global_30723[2];
	}
	if (iParam0 == 23)
	{
		return Global_30723[1];
	}
	if (iParam0 == 24)
	{
		return Global_30723[0];
	}
	if (iParam0 == 26)
	{
		return Global_30679[1];
	}
	if (iParam0 == 27)
	{
		return Global_30707[1];
	}
	return 4294967295;
}

int Function_131(int iParam0, int iParam1) //Position: 0x5E43 / 24131
{
	iParam1 = iParam1;
	if (iParam1 == Global_30640[0])
	{
		(*iParam0)[0] = 65;
		(*iParam0)[1] = 68;
		(*iParam0)[2] = 435;
		(*iParam0)[3] = 428;
		(*iParam0)[4] = 107;
		(*iParam0)[5] = 140;
		return 6;
	}
	if (iParam1 == Global_30717[0])
	{
		(*iParam0)[0] = 89;
		(*iParam0)[1] = 95;
		(*iParam0)[2] = 146;
		return 3;
	}
	if (iParam1 == Global_30668[1])
	{
		(*iParam0)[0] = 56;
		(*iParam0)[1] = 24;
		(*iParam0)[2] = 138;
		(*iParam0)[3] = 139;
		return 4;
	}
	if (iParam1 == Global_30668[0])
	{
		(*iParam0)[0] = 54;
		(*iParam0)[1] = 420;
		(*iParam0)[2] = 38;
		(*iParam0)[3] = 213;
		(*iParam0)[4] = 55;
		return 5;
	}
	if (iParam1 == Global_30693[0])
	{
		(*iParam0)[0] = 276;
		(*iParam0)[1] = 237;
		(*iParam0)[2] = 290;
		(*iParam0)[3] = 460;
		(*iParam0)[4] = 269;
		(*iParam0)[5] = 283;
		return 6;
	}
	if (iParam1 == Global_30685[0])
	{
		(*iParam0)[0] = 289;
		(*iParam0)[1] = 392;
		(*iParam0)[2] = 268;
		(*iParam0)[3] = 266;
		(*iParam0)[4] = 382;
		(*iParam0)[5] = 245;
		(*iParam0)[6] = 304;
		return 7;
	}
	if (iParam1 == Global_30640[2])
	{
		(*iParam0)[0] = 487;
		(*iParam0)[1] = 491;
		(*iParam0)[2] = 493;
		return 3;
	}
	if (iParam1 == Global_30707[3])
	{
		(*iParam0)[0] = 379;
		(*iParam0)[1] = 380;
		(*iParam0)[2] = 391;
		(*iParam0)[3] = 455;
		return 4;
	}
	if (iParam1 == Global_30685[2])
	{
		(*iParam0)[0] = 410;
		(*iParam0)[1] = 411;
		(*iParam0)[2] = 465;
		return 3;
	}
	if (iParam1 == Global_30640[1])
	{
		(*iParam0)[0] = 152;
		(*iParam0)[1] = 176;
		return 2;
	}
	if (iParam1 == Global_30658[1])
	{
		(*iParam0)[0] = 133;
		(*iParam0)[1] = 144;
		return 2;
	}
	if (iParam1 == Global_30723[2])
	{
		(*iParam0)[0] = 29;
		(*iParam0)[1] = 30;
		(*iParam0)[2] = 28;
		return 3;
	}
	if (iParam1 == Global_30685[1])
	{
		(*iParam0)[0] = 516;
		(*iParam0)[1] = 529;
		return 2;
	}
	if (iParam1 == Global_30723[1])
	{
		(*iParam0)[0] = 169;
		(*iParam0)[1] = 39;
		(*iParam0)[2] = 149;
		return 3;
	}
	if (iParam1 == Global_30693[1])
	{
		(*iParam0)[0] = 62;
		(*iParam0)[1] = 242;
		(*iParam0)[2] = 244;
		(*iParam0)[3] = 296;
		(*iParam0)[4] = 297;
		(*iParam0)[5] = 260;
		(*iParam0)[6] = 295;
		(*iParam0)[7] = 141;
		return 8;
	}
	if (iParam1 == Global_30658[3])
	{
		(*iParam0)[0] = 505;
		(*iParam0)[1] = 506;
		(*iParam0)[2] = 507;
		(*iParam0)[3] = 508;
		(*iParam0)[4] = 510;
		(*iParam0)[5] = 509;
		return 6;
	}
	if (iParam1 == Global_30658[4])
	{
		(*iParam0)[0] = 400;
		return 1;
	}
	if (iParam1 == Global_30707[2])
	{
		(*iParam0)[0] = 281;
		(*iParam0)[1] = 282;
		(*iParam0)[2] = 456;
		return 3;
	}
	if (iParam1 == Global_30707[0])
	{
		(*iParam0)[0] = 396;
		(*iParam0)[1] = 462;
		(*iParam0)[2] = 15;
		(*iParam0)[3] = 11;
		(*iParam0)[4] = 461;
		return 5;
	}
	if (iParam1 == Global_30693[2])
	{
		(*iParam0)[0] = 238;
		(*iParam0)[1] = 530;
		(*iParam0)[2] = 294;
		return 3;
	}
	if (iParam1 == Global_30723[0])
	{
		(*iParam0)[0] = 404;
		return 1;
	}
	if (iParam1 == Global_30679[0])
	{
		(*iParam0)[0] = 168;
		(*iParam0)[1] = 176;
		(*iParam0)[2] = 177;
		return 3;
	}
	return 0;
}

int Function_132(int iParam0) //Position: 0x621F / 25119
{
	int iVar0;
	
	iVar0 = Function_130(iParam0);
	if (iVar0 == 4294967295)
	{
		return 0;
	}
	if (StackVal || StackVal != 2 != 1)
	{
		return 0;
	}
	return (Function_134(iVar0) || Function_133(iParam0));
}

var Function_133(int iParam0) //Position: 0x625E / 25182
{
	int iVar0;
	var uVar1;
	bool bVar2;
	
	iVar0 = Function_130(iParam0);
	uVar1 = Global_29008[iVar0];
	bVar2 = uVar1 & 268435456 != false;
	return bVar2;
}

int Function_134(int iParam0) //Position: 0x6282 / 25218
{
	var uVar0;
	
	if (StackVal || StackVal != 2 != 1)
	{
		return 0;
	}
	if ((iParam0 != Global_30707[2] || iParam0 != Global_30707[1]) || iParam0 != Global_30679[1])
	{
		return 0;
	}
	uVar0 = Global_29008[iParam0];
	return (((Function_82(uVar0, 0x1000000) || Function_82(uVar0, 0x2000000)) || Function_82(uVar0, 0x4000000)) || Function_135(iParam0));
}

var Function_135(int iParam0) //Position: 0x62F5 / 25333
{
	var uVar0;
	bool bVar1;
	
	uVar0 = Global_29008[iParam0];
	bVar1 = uVar0 & 268435456 != false;
	return bVar1;
}

int Function_136(int iParam0) //Position: 0x6312 / 25362
{
	if (iParam0 == Global_30640[0])
	{
		return 1;
	}
	if (iParam0 == Global_30640[2])
	{
		return 2;
	}
	if (iParam0 == Global_30640[1])
	{
		return 3;
	}
	if (iParam0 == Global_30658[1])
	{
		return 4;
	}
	if (iParam0 == Global_30658[3])
	{
		return 5;
	}
	if (iParam0 == Global_30668[0])
	{
		return 8;
	}
	if (iParam0 == Global_30668[1])
	{
		return 9;
	}
	if (iParam0 == Global_30679[0])
	{
		return 11;
	}
	if (iParam0 == Global_30685[0])
	{
		return 12;
	}
	if (iParam0 == Global_30685[1])
	{
		return 13;
	}
	if (iParam0 == Global_30685[2])
	{
		return 14;
	}
	if (iParam0 == Global_30693[0])
	{
		return 15;
	}
	if (iParam0 == Global_30693[1])
	{
		return 16;
	}
	if (iParam0 == Global_30693[2])
	{
		return 17;
	}
	if (iParam0 == Global_30707[2])
	{
		return 25;
	}
	if (iParam0 == Global_30707[3])
	{
		return 18;
	}
	if (iParam0 == Global_30707[0])
	{
		return 19;
	}
	if (iParam0 == Global_30717[0])
	{
		return 21;
	}
	if (iParam0 == Global_30723[2])
	{
		return 22;
	}
	if (iParam0 == Global_30723[1])
	{
		return 23;
	}
	if (iParam0 == Global_30723[0])
	{
		return 24;
	}
	if (iParam0 == Global_30679[1])
	{
		return 26;
	}
	if (iParam0 == Global_30707[1])
	{
		return 27;
	}
	return 0;
}

bool Function_137(int iParam0) //Position: 0x6498 / 25752
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	bVar0 = false;
	iVar1 = 0;
	bVar2 = RAND_INT_RANGE(false, 10000);
	bVar3 = RAND_INT_RANGE(false, 10000);
	bVar4 = RAND_INT_RANGE(false, 10000);
	if (iParam0 == 1244)
	{
		bVar0 = (RAND_INT_RANGE(false, 1000) % 8) + 1;
		if ((Function_116(616) + TO_FLOAT(bVar0)) < 99.0f)
		{
			bVar0 = FLOOR((99.0f - Function_116(616)));
		}
		if (bVar0 >= 0)
		{
			Function_111(616, bVar0);
			iVar1 = 1;
		}
		if (bVar2 <= 5000)
		{
			bVar0 = (RAND_INT_RANGE(false, 1000) % 2);
			if ((Function_116(615) + TO_FLOAT(bVar0)) < 99.0f)
			{
				bVar0 = FLOOR((99.0f - Function_116(615)));
			}
			if (bVar0 >= 0)
			{
				Function_111(615, bVar0);
				iVar1 = 1;
			}
		}
		if (bVar3 <= 3333)
		{
			bVar0 = (RAND_INT_RANGE(false, 1000) % 5) + 1;
			if ((Function_116(617) + TO_FLOAT(bVar0)) < 99.0f)
			{
				bVar0 = FLOOR((99.0f - Function_116(617)));
			}
			if (bVar0 >= 0)
			{
				Function_111(617, bVar0);
				iVar1 = 1;
			}
		}
		if (bVar4 <= 2500)
		{
			bVar0 = true;
			if ((Function_116(618) + TO_FLOAT(bVar0)) < 99.0f)
			{
				bVar0 = FLOOR((99.0f - Function_116(618)));
			}
			if (bVar0 >= 0)
			{
				Function_111(618, bVar0);
				iVar1 = 1;
			}
		}
		Function_98(619, 1, 0, 0);
	}
	else if (iParam0 == 1241)
	{
		bVar0 = (RAND_INT_RANGE(false, 1000) % 8) + 1;
		if ((Function_116(621) + TO_FLOAT(bVar0)) < 99.0f)
		{
			bVar0 = FLOOR((99.0f - Function_116(621)));
		}
		if (bVar0 >= 0)
		{
			Function_111(621, bVar0);
			iVar1 = 1;
		}
		if (bVar2 <= 5000)
		{
			bVar0 = (RAND_INT_RANGE(false, 1000) % 2);
			if ((Function_116(620) + TO_FLOAT(bVar0)) < 99.0f)
			{
				bVar0 = FLOOR((99.0f - Function_116(620)));
			}
			if (bVar0 >= 0)
			{
				Function_111(620, bVar0);
				iVar1 = 1;
			}
		}
		if (bVar3 <= 3333)
		{
			bVar0 = (RAND_INT_RANGE(false, 1000) % 5) + 1;
			if ((Function_116(622) + TO_FLOAT(bVar0)) < 99.0f)
			{
				bVar0 = FLOOR((99.0f - Function_116(622)));
			}
			if (bVar0 >= 0)
			{
				Function_111(622, bVar0);
				iVar1 = 1;
			}
		}
		if (bVar4 <= 2500)
		{
			bVar0 = true;
			if ((Function_116(623) + TO_FLOAT(bVar0)) < 99.0f)
			{
				bVar0 = FLOOR((99.0f - Function_116(623)));
			}
			if (bVar0 >= 0)
			{
				Function_111(623, bVar0);
				iVar1 = 1;
			}
		}
		Function_98(624, 1, 0, 0);
	}
	else if (iParam0 == 1242)
	{
		bVar0 = (RAND_INT_RANGE(false, 1000) % 8) + 1;
		if ((Function_116(626) + TO_FLOAT(bVar0)) < 99.0f)
		{
			bVar0 = FLOOR((99.0f - Function_116(626)));
		}
		if (bVar0 >= 0)
		{
			Function_111(626, bVar0);
			iVar1 = 1;
		}
		if (bVar2 <= 5000)
		{
			bVar0 = (RAND_INT_RANGE(false, 1000) % 2);
			if ((Function_116(625) + TO_FLOAT(bVar0)) < 99.0f)
			{
				bVar0 = FLOOR((99.0f - Function_116(625)));
			}
			if (bVar0 >= 0)
			{
				Function_111(625, bVar0);
				iVar1 = 1;
			}
		}
		if (bVar3 <= 3333)
		{
			bVar0 = (RAND_INT_RANGE(false, 1000) % 5) + 1;
			if ((Function_116(627) + TO_FLOAT(bVar0)) < 99.0f)
			{
				bVar0 = FLOOR((99.0f - Function_116(627)));
			}
			if (bVar0 >= 0)
			{
				Function_111(627, bVar0);
				iVar1 = 1;
			}
		}
		if (bVar4 <= 2500)
		{
			bVar0 = true;
			if ((Function_116(628) + TO_FLOAT(bVar0)) < 99.0f)
			{
				bVar0 = FLOOR((99.0f - Function_116(628)));
			}
			if (bVar0 >= 0)
			{
				Function_111(628, bVar0);
				iVar1 = 1;
			}
		}
		Function_98(629, 1, 0, 0);
	}
	else if (iParam0 == 1246)
	{
		bVar0 = (RAND_INT_RANGE(false, 1000) % 8) + 1;
		if ((Function_116(611) + TO_FLOAT(bVar0)) < 99.0f)
		{
			bVar0 = FLOOR((99.0f - Function_116(611)));
		}
		if (bVar0 >= 0)
		{
			Function_111(611, bVar0);
			iVar1 = 1;
		}
		if (bVar2 <= 5000)
		{
			bVar0 = (RAND_INT_RANGE(false, 1000) % 2);
			if ((Function_116(610) + TO_FLOAT(bVar0)) < 99.0f)
			{
				bVar0 = FLOOR((99.0f - Function_116(610)));
			}
			if (bVar0 >= 0)
			{
				Function_111(610, bVar0);
				iVar1 = 1;
			}
		}
		if (bVar3 <= 3333)
		{
			bVar0 = (RAND_INT_RANGE(false, 1000) % 5) + 1;
			if ((Function_116(612) + TO_FLOAT(bVar0)) < 99.0f)
			{
				bVar0 = FLOOR((99.0f - Function_116(612)));
			}
			if (bVar0 >= 0)
			{
				Function_111(612, bVar0);
				iVar1 = 1;
			}
		}
		if (bVar4 <= 2500)
		{
			bVar0 = true;
			if ((Function_116(613) + TO_FLOAT(bVar0)) < 99.0f)
			{
				bVar0 = FLOOR((99.0f - Function_116(613)));
			}
			if (bVar0 >= 0)
			{
				Function_111(613, bVar0);
				iVar1 = 1;
			}
		}
		Function_98(614, 1, 0, 0);
	}
	else if (iParam0 == 1247)
	{
		bVar0 = (RAND_INT_RANGE(false, 1000) % 2) + 1;
		if ((Function_116(645) + TO_FLOAT(bVar0)) < 99.0f)
		{
			bVar0 = FLOOR((99.0f - Function_116(645)));
		}
		if (bVar0 >= 0)
		{
			Function_111(645, bVar0);
			iVar1 = 1;
		}
		Function_98(646, 1, 0, 0);
	}
	else if (iParam0 <= 1248 && iParam0 >= 1251)
	{
		bVar0 = (RAND_INT_RANGE(false, 1000) % 2) + 1;
		if ((Function_116(630) + TO_FLOAT(bVar0)) < 99.0f)
		{
			bVar0 = FLOOR((99.0f - Function_116(630)));
		}
		if (bVar0 >= 0)
		{
			Function_111(630, bVar0);
			iVar1 = 1;
		}
		if (bVar2 <= 5000)
		{
			bVar0 = true;
			if ((Function_116(631) + TO_FLOAT(bVar0)) < 99.0f)
			{
				bVar0 = FLOOR((99.0f - Function_116(631)));
			}
			if (bVar0 >= 0)
			{
				Function_111(631, bVar0);
				iVar1 = 1;
			}
		}
		Function_98(632, 1, 0, 0);
	}
	else if (iParam0 == 1240)
	{
		bVar0 = (RAND_INT_RANGE(false, 1000) % 8) + 1;
		if ((Function_116(647) + TO_FLOAT(bVar0)) < 99.0f)
		{
			bVar0 = FLOOR((99.0f - Function_116(647)));
		}
		if (bVar0 >= 0)
		{
			Function_111(647, bVar0);
			iVar1 = 1;
		}
		if (bVar3 <= 5000)
		{
			bVar0 = (RAND_INT_RANGE(false, 1000) % 2) + 1;
			if ((Function_116(648) + TO_FLOAT(bVar0)) < 99.0f)
			{
				bVar0 = FLOOR((99.0f - Function_116(648)));
			}
			if (bVar0 >= 0)
			{
				Function_111(648, bVar0);
				iVar1 = 1;
			}
		}
		Function_98(649, 1, 0, 0);
	}
	else if (iParam0 == 1243)
	{
		bVar0 = (RAND_INT_RANGE(false, 1000) % 2) + 1;
		if ((Function_116(650) + TO_FLOAT(bVar0)) < 99.0f)
		{
			bVar0 = FLOOR((99.0f - Function_116(650)));
		}
		if (bVar0 >= 0)
		{
			Function_111(650, bVar0);
			iVar1 = 1;
		}
		if (bVar2 <= 5000)
		{
			bVar0 = (RAND_INT_RANGE(false, 1000) % 2) + 1;
			if ((Function_116(651) + TO_FLOAT(bVar0)) < 99.0f)
			{
				bVar0 = FLOOR((99.0f - Function_116(651)));
			}
			if (bVar0 >= 0)
			{
				Function_111(651, bVar0);
				iVar1 = 1;
			}
		}
		Function_98(652, 1, 0, 0);
	}
	else if (iParam0 == 1245)
	{
		bVar0 = (RAND_INT_RANGE(false, 1000) % 2) + 1;
		if ((Function_116(653) + TO_FLOAT(bVar0)) < 99.0f)
		{
			bVar0 = FLOOR((99.0f - Function_116(653)));
		}
		if (bVar0 >= 0)
		{
			Function_111(653, bVar0);
			iVar1 = 1;
		}
		if (bVar2 <= 5000)
		{
			bVar0 = (RAND_INT_RANGE(false, 1000) % 2) + 1;
			if ((Function_116(654) + TO_FLOAT(bVar0)) < 99.0f)
			{
				bVar0 = FLOOR((99.0f - Function_116(654)));
			}
			if (bVar0 >= 0)
			{
				Function_111(654, bVar0);
				iVar1 = 1;
			}
		}
		Function_98(655, 1, 0, 0);
	}
	else if (iParam0 == 1266)
	{
		bVar0 = (RAND_INT_RANGE(false, 1000) % 2) + 1;
		if ((Function_116(634) + TO_FLOAT(bVar0)) < 99.0f)
		{
			bVar0 = FLOOR((99.0f - Function_116(634)));
		}
		if (bVar0 >= 0)
		{
			Function_111(634, bVar0);
			iVar1 = 1;
		}
		if (bVar2 <= 5000)
		{
			bVar0 = (RAND_INT_RANGE(false, 1000) % 2) + 1;
			if ((Function_116(635) + TO_FLOAT(bVar0)) < 99.0f)
			{
				bVar0 = FLOOR((99.0f - Function_116(635)));
			}
			if (bVar0 >= 0)
			{
				Function_111(635, bVar0);
				iVar1 = 1;
			}
		}
		if (bVar3 <= 3333)
		{
			bVar0 = (RAND_INT_RANGE(false, 1000) % 2) + 1;
			if ((Function_116(633) + TO_FLOAT(bVar0)) < 99.0f)
			{
				bVar0 = FLOOR((99.0f - Function_116(633)));
			}
			if (bVar0 >= 0)
			{
				Function_111(633, bVar0);
				iVar1 = 1;
			}
		}
		if (bVar4 <= 2500)
		{
			bVar0 = true;
			if ((Function_116(636) + TO_FLOAT(bVar0)) < 99.0f)
			{
				bVar0 = FLOOR((99.0f - Function_116(636)));
			}
			if (bVar0 >= 0)
			{
				Function_111(636, bVar0);
				iVar1 = 1;
			}
		}
		Function_98(637, 1, 0, 0);
	}
	else if (iParam0 == 1267)
	{
		bVar0 = true;
		if ((Function_116(642) + TO_FLOAT(bVar0)) < 99.0f)
		{
			bVar0 = FLOOR((99.0f - Function_116(642)));
		}
		if (bVar0 >= 0)
		{
			Function_111(642, bVar0);
			iVar1 = 1;
		}
		if (bVar2 <= 5000)
		{
			bVar0 = true;
			if ((Function_116(643) + TO_FLOAT(bVar0)) < 99.0f)
			{
				bVar0 = FLOOR((99.0f - Function_116(643)));
			}
			if (bVar0 >= 0)
			{
				Function_111(643, bVar0);
				iVar1 = 1;
			}
		}
		Function_98(644, 1, 0, 0);
	}
	else if (iParam0 <= 1263 && iParam0 >= 1265)
	{
		bVar0 = (RAND_INT_RANGE(false, 1000) % 5) + 1;
		if ((Function_116(639) + TO_FLOAT(bVar0)) < 99.0f)
		{
			bVar0 = FLOOR((99.0f - Function_116(639)));
		}
		if (bVar0 >= 0)
		{
			Function_111(639, bVar0);
			iVar1 = 1;
		}
		if (bVar2 <= 5000)
		{
			bVar0 = (RAND_INT_RANGE(false, 1000) % 2) + 1;
			if ((Function_116(638) + TO_FLOAT(bVar0)) < 99.0f)
			{
				bVar0 = FLOOR((99.0f - Function_116(638)));
			}
			if (bVar0 >= 0)
			{
				Function_111(638, bVar0);
				iVar1 = 1;
			}
		}
		if (bVar3 <= 2500)
		{
			bVar0 = true;
			if ((Function_116(640) + TO_FLOAT(bVar0)) < 99.0f)
			{
				bVar0 = FLOOR((99.0f - Function_116(640)));
			}
			if (bVar0 >= 0)
			{
				Function_111(640, bVar0);
				iVar1 = 1;
			}
		}
		Function_98(641, 1, 0, 0);
	}
	return iVar1;
}

var Function_138(bool bParam0) //Position: 0x6F47 / 28487
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

void Function_139(bool bParam0, bool bParam1) //Position: 0x7038 / 28728
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (bParam1)
		{
			Function_162("CheckRemoveQuitAction: Actor valid!");
		}
		if (IS_ACTOR_LOCAL_PLAYER(bParam0))
		{
			if (bParam1)
			{
				Function_162("CheckRemoveQuitAction: Tested for player!");
			}
			if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_33))
			{
				if (bParam1)
				{
					Function_162("CheckRemoveQuitAction: Release quit context - component no longer in use");
				}
				RELEASE_SCRIPT_USE_CONTEXT(bLocal_33);
			}
		}
	}
	if (bParam1)
	{
		Function_162("CheckRemoveQuitAction: Finished check");
	}
	return;
}

void Function_140(bool bParam0, bool bParam1) //Position: 0x7140 / 28992
{
	LOG_OBJECT3(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), bParam1, bParam0, 0, 0, 0);
	return;
}

void Function_141(int iParam0) //Position: 0x7156 / 29014
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	iParam0->f_16 = GRINGO_GET_REQUESTING_ACTOR();
	if (!IS_ACTOR_VALID(iParam0->f_16))
	{
		LOG_ERROR("Invalid actor in StartDoingRequestedTask");
		return;
	}
	bVar0 = GRINGO_GET_MSG_COMPONENT_CONTEXT();
	iParam0->f_12 = bVar0;
	if (GRINGO_GET_USE_REQUIRES_OBSTACLE(bVar0))
	{
		if (IS_ACTOR_HORSE(iParam0->f_16))
		{
			iParam0->f_36 = CREATE_OBSTACLE_ON_OBJECT(iParam0->f_16, "ngringoObs", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.75f, 2.0f);
		}
		else
		{
			iParam0->f_36 = CREATE_OBSTACLE_ON_OBJECT(iParam0->f_16, "ngringoObs", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.5f, 1.0f, 0.5f);
		}
		ATTACH_OBJECTS(iParam0->f_36, iParam0->f_16, Function_39(), 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
	}
	Function_52(iParam0);
	Function_2("Going to eGringoPositioning", iParam0->f_16);
	iParam0->f_44 = 2;
	Function_55(iParam0 + 40, 2);
	Function_37(iParam0 + 40, 8);
	Function_37(iParam0 + 40, 16);
	Function_37(iParam0 + 40, 64);
	SET_GRINGO_OBJECT_REF_ATTR(iParam0->f_16, "UserObject", bVar0);
	GRINGO_SET_COMPONENT_USER(iParam0->f_16, bVar0);
	if (GRINGO_SHOULD_SUSPEND_MOVER(iParam0->f_12) && IS_OBJECT_VALID(GET_TARGET_OBJECT()))
	{
		bVar1 = GET_PROP_FROM_OBJECT(GET_TARGET_OBJECT());
		if (IS_PHYSINST_VALID(bVar1))
		{
			SUPRESS_MOVER_COLLISIONS(iParam0->f_16, bVar1, 1);
		}
	}
	SET_GRINGO_OBJECT_REF_ATTR(bVar2, "LastUserObject", iParam0->f_12);
	if (!Function_144(iParam0->f_12))
	{
		if (HAS_INVENTORY_COMPONENT(iParam0->f_16))
		{
			if (ACTOR_HOLSTER_WEAPON(iParam0->f_16, 1))
			{
				Function_55(iParam0 + 40, 32);
			}
			else
			{
				Function_37(iParam0 + 40, 32);
			}
		}
		else
		{
			Function_37(iParam0 + 40, 32);
		}
		if (Function_82(iParam0->f_40, 32))
		{
			Function_55(iParam0 + 40, 128);
		}
		else
		{
			Function_37(iParam0 + 40, 128);
		}
	}
	else
	{
		Function_37(iParam0 + 40, 32);
	}
	if (Function_143(iParam0->f_12))
	{
		if (!ACTOR_PUT_WEAPON_IN_HAND(iParam0->f_16, GET_WEAPON_EQUIPPED(iParam0->f_16, 5), 1))
		{
			if (ACTOR_PUT_WEAPON_IN_HAND(iParam0->f_16, GET_WEAPON_EQUIPPED(iParam0->f_16, true), 1))
			{
				Function_55(iParam0 + 40, 128);
			}
		}
		else
		{
			Function_55(iParam0 + 40, 128);
		}
	}
	if (Function_89(iParam0->f_12))
	{
		if (GET_ACTOR_ALLOW_BUMP_REACTIONS(iParam0->f_16))
		{
			Function_55(iParam0 + 40, 512);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(iParam0->f_16, 0);
			Function_2("Block Bump Reactions", iParam0->f_16);
		}
	}
	if (IS_ACTOR_LOCAL_PLAYER(iParam0->f_16) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(iParam0->f_12))
	{
		GRINGO_ENABLE_PLAYER_CONTROL(iParam0->f_16, 0);
	}
	NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 0);
	Function_142(iParam0->f_16, bVar0);
	Function_2("START: ", iParam0->f_16);
	return;
}

void Function_142(bool bParam0, int iParam1) //Position: 0x740C / 29708
{
	bool bVar0;
	
	iLocal_2 = 0;
	iParam1 = iParam1;
	if (IS_ACTOR_LOCAL_PLAYER(bParam0))
	{
		iLocal_1 = 1;
		bLocal_8 = Function_70(bParam0);
		if (DECOR_CHECK_EXIST(GET_TARGET_OBJECT(), "IsMale"))
		{
			if (RAND_INT_RANGE(false, 100000) <= 33000)
			{
				bVar0 = DECOR_GET_BOOL(GET_TARGET_OBJECT(), "IsMale");
				if (bVar0)
				{
					SAY_SINGLE_LINE_STRING(Global_34573, "PLAYER_LOOTING_ZOMBIE_M", true, true, 0, 0, true, false);
				}
				else
				{
					SAY_SINGLE_LINE_STRING(Global_34573, "PLAYER_LOOTING_ZOMBIE_F", true, true, 0, 0, true, false);
				}
			}
			DECOR_REMOVE(GET_TARGET_OBJECT(), "IsMale");
		}
	}
	return;
}

bool Function_143(bool bParam0) //Position: 0x74C1 / 29889
{
	return Function_7(bParam0, "DrawWeapon", 0);
}

bool Function_144(bool bParam0) //Position: 0x74DA / 29914
{
	return Function_7(bParam0, "AllowWeapon", 0);
}

void Function_145(bool bParam0, int iParam1) //Position: 0x74F4 / 29940
{
	bool bVar0;
	char* cVar1;
	
	bParam0 = bParam0;
	cVar1 = Function_146(iParam1, &bVar0);
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

bool Function_146(var uParam0, int iParam1) //Position: 0x752C / 29996
{
	return Function_9(uParam0, "UseName", iParam1);
}

bool Function_147(int iParam0, int iParam1) //Position: 0x7543 / 30019
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
		if (ACTOR_HAS_ANIM_SET(bVar1, "stand_hostage") && !Function_7(iParam0->f_12, "CutFreeGringo", 0))
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
				if (!Function_157(6))
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
		if (!Function_151(bVar1, iParam0->f_12))
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
		if (!Function_82(iParam0->f_40, 2))
		{
			if (GRINGO_GET_REQUEST_MID_ACTION())
			{
				Function_55(iParam0 + 40, 1);
			}
			else
			{
				Function_37(iParam0 + 40, 1);
			}
			if (Function_82(iParam0->f_40, 1))
			{
				Function_140("MIDACTION REQUEST", bVar1);
			}
			else
			{
				Function_59(iParam0->f_12);
				vVar9 = { StackVal, StackVal, Function_59(iParam0->f_12) };
				vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar2, vVar9, StackVal) };
				fVar15 = Function_150(iParam0->f_12);
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
				if (!Function_149(bVar1, iParam0->f_12))
				{
					GRINGO_SET_REQUEST_FAILURE_REASON(6);
					return 0;
				}
				bVar33 = Function_148(iParam0->f_12);
				if (!bVar33 != 0.0f)
				{
					if (bVar33 < 0.0f)
					{
						fVar34 = (UNK_0x9C40E671(&vVar12) - Function_58(iParam0->f_12));
					}
					else
					{
						fVar34 = ((180.0f + UNK_0x9C40E671(&vVar12)) - Function_58(iParam0->f_12));
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

bool Function_148(bool bParam0) //Position: 0x780C / 30732
{
	return Function_11(bParam0, "ActivationCone", 0.0f);
}

bool Function_149(bool bParam0, bool bParam1) //Position: 0x7829 / 30761
{
	struct<5> Var0;
	float fVar5;
	float fVar6;
	
	fVar3 = GRINGO_GET_USE_COMPONENT_HEADING(bParam1);
	bVar4 = GET_HEADING(bParam0);
	fVar5 = Function_11(bParam1, "HeadingTolerance", -1.0f);
	fVar6 = (fVar3 - bVar4);
	if (fVar5 != -1.0f)
	{
		return 1;
	}
	Function_59(bParam1);
	Var0 = { StackVal, StackVal, Function_59(bParam1) };
	GET_POSITION(bParam0, &Var0);
	Var0.f_4 = (StackVal + 1.5f);
	Function_59(bParam1);
	Var0 = { StackVal, StackVal, Function_59(bParam1) };
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

bool Function_150(int iParam0) //Position: 0x78C5 / 30917
{
	return Function_11(iParam0, "ActivationRadius", 2.0f);
}

bool Function_151(bool bParam0, int iParam1) //Position: 0x78E4 / 30948
{
	iParam1 = iParam1;
	if (NET_IS_IN_SESSION() || Function_156())
	{
		return 0;
	}
	if (IS_ACTOR_ON_BOAT(bParam0))
	{
		return 0;
	}
	if (Function_152(bParam0, 0, 0))
	{
		return 0;
	}
	if (IS_ACTION_NODE_PLAYING_PARTIAL(bParam0, "zombieB/Melee_AI/Strike/Grab") || IS_ACTION_NODE_PLAYING_PARTIAL(bParam0, "zombieC/Melee_AI/Strike/Grab"))
	{
		return 0;
	}
	if (!iLocal_4)
	{
		if (DECOR_CHECK_EXIST(GET_TARGET_OBJECT(), "Corpse_loot_gringo"))
		{
			if (!DECOR_GET_BOOL(GET_TARGET_OBJECT(), "Corpse_loot_gringo"))
			{
				iLocal_4 = 1;
				return 0;
			}
		}
	}
	return 0;
	if (Global_34207 != 4294967295)
	{
		if (TRAIN_GET_LOD_LEVEL(Global_34207) != 1 && TRAIN_GET_NUM_CARS(Global_34207) < 0)
		{
			if (TRAIN_GET_VELOCITY(Global_34207) < 0.0f)
			{
				if (IS_ACTOR_ON_TRAIN(bParam0, 0))
				{
					return 0;
				}
			}
		}
	}
	if (Global_34206 != 4294967295)
	{
		if (TRAIN_GET_LOD_LEVEL(Global_34206) != 1 && TRAIN_GET_NUM_CARS(Global_34206) < 0)
		{
			if (TRAIN_GET_VELOCITY(Global_34206) < 0.0f)
			{
				if (IS_ACTOR_ON_TRAIN(bParam0, 0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

bool Function_152(bool bParam0, bool bParam1, bool bParam2) //Position: 0x7A0E / 31246
{
	if (!IS_PLAYER_CONTROLLABLE(0) && !bParam1)
	{
		return 1;
	}
	if (IS_PLAYER_DEADEYE(false))
	{
		return 1;
	}
	if (IS_PLAYER_USING_COVER(0))
	{
		return 1;
	}
	if (IS_ACTOR_BEING_DRAGGED(bParam0, 0.3f))
	{
		return 1;
	}
	if (Function_155(bParam0))
	{
		return 1;
	}
	if (Function_154(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_CROUCHING(bParam0) && !bParam2)
	{
		return 1;
	}
	if (IS_ACTOR_DRUNK(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_HOGTIED(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_IN_WATER(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_ON_LADDER(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_USING_LEDGE(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(bParam0)))
	{
		return 1;
	}
	if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
	{
		return 1;
	}
	if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(bParam0)))
	{
		return 1;
	}
	if (Function_153())
	{
		return 1;
	}
	return 0;
}

bool Function_153() //Position: 0x7AC4 / 31428
{
	return ((Global_34578 != 0 || Global_34578 != 2) || Global_34578 != 3);
}

bool Function_154(bool bParam0) //Position: 0x7ADB / 31451
{
	return IS_ACTOR_IN_HOGTIE(bParam0);
}

bool Function_155(bool bParam0) //Position: 0x7AE6 / 31462
{
	return IS_ACTOR_VALID(GET_LASSO_USER(bParam0));
}

var Function_156() //Position: 0x7AF4 / 31476
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_157(int iParam0) //Position: 0x7AFD / 31485
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

void Function_158(int iParam0) //Position: 0x7B19 / 31513
{
	iParam0 = iParam0;
	return;
}

void Function_159(bool bParam0, int iParam1) //Position: 0x7B23 / 31523
{
	int iVar0;
	int iVar1;
	
	if (GRINGO_IS_COMPONENT_OF_TYPE(3, bParam0))
	{
		Function_160(&(Local_13[iLocal_2612]), bParam0);
		iLocal_26++;
	}
	if (GRINGO_GET_CHILD_COMPONENT_COUNT(bParam0) >= 0)
	{
		iVar0 = 0;
		iVar0 = GRINGO_GET_INDEX_OF_NEXT_CHILD(0, bParam0, iVar0);
		while (iVar0 <= 0 && *iParam1 > 1)
		{
			iVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar0, bParam0);
			Function_159(iVar1, iParam1);
			iVar0 = GRINGO_GET_INDEX_OF_NEXT_CHILD(0, bParam0, iVar0 + 1);
		}
	}
	return;
}

void Function_160(int iParam0, int iParam1) //Position: 0x7B85 / 31621
{
	iParam0->f_12 = iParam1;
	Function_37(iParam0 + 40, 1);
	return;
}

void Function_161(int iParam0) //Position: 0x7B99 / 31641
{
	iParam0 = iParam0;
	return;
}

void Function_162(int iParam0) //Position: 0x7BA3 / 31651
{
	LOG_OBJECT2(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), iParam0, 0, 0, 0);
	return;
}

