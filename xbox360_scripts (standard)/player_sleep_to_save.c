//Decompiled with MagicRDR v1.0
//Function Count : 129
//Statics Count : 89
//Natives Count : 286
//Parameters Count : 1

#region Local Var
	bool bLocal_0 = false;
	float fLocal_1 = 0.0f;
	bool bLocal_2 = false;
	float fLocal_3 = 0.0f;
	int iLocal_4 = 0;
	bool bLocal_5 = false;
	bool bLocal_6 = false;
	struct<12> Local_7[6];
	int iLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	bool bLocal_84 = false;
	int iLocal_85 = 0;
	bool bLocal_86 = false;
	bool bLocal_87 = false;
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
	
	if (UNK_0xBBB2780E() && GRINGO_DEBUG_IS_SELECTED())
	{
		LOG_ERROR("User requested break (At GenericGringo startup)");
	}
	Function_128("STARTS");
	Function_127(uScriptParam_0);
	iLocal_80 = 0;
	Function_125(uScriptParam_0, &iLocal_80);
	while (IS_GRINGO_ACTIVE())
	{
		Function_124(uScriptParam_0);
		if (UNK_0xBBB2780E() && GRINGO_DEBUG_IS_SELECTED())
		{
			LOG_ERROR("User requested break (During GenericGringo loop)");
		}
		bVar1 = GRINGO_GET_MY_OBJECT_REF();
		if (IS_OBJECT_VALID(bVar1))
		{
			GET_OBJECT_POSITION(bVar1, &uLocal_81);
		}
		iVar2 = 0;
		bLocal_86 = false;
		if (GRINGO_HAS_PENDING_MESSAGE())
		{
			iVar3 = 4294967295;
			iVar0 = 0;
			while (iVar0 < (iLocal_80 - 1))
			{
				if (Local_7[iVar012].f_12 == GRINGO_GET_MSG_COMPONENT_CONTEXT())
				{
					iVar3 = iVar0;
					iVar0 = iLocal_80;
				}
				iVar0++;
			}
			if (iVar3 >= 4294967295)
			{
				bVar4 = false;
				bVar5 = false;
				if (IS_ACTOR_VALID(GRINGO_GET_REQUESTING_ACTOR()))
				{
					bLocal_86 = true;
				}
				switch (GRINGO_GET_MESSAGE_TYPE())
				{
					case 0x00000000:
						if (Function_118(&(Local_7[iVar312]), &bVar4))
						{
							Function_116(GRINGO_GET_REQUESTING_ACTOR(), Local_7[iVar312].f_12);
							bVar5 = true;
						}
						break;
					
					case 0x00000001:
						if (Function_118(&(Local_7[iVar312]), &bVar4))
						{
							Function_116(GRINGO_GET_REQUESTING_ACTOR(), Local_7[iVar312].f_12);
							if (bVar4)
							{
								Function_112(&(Local_7[iVar312]));
							}
							bVar5 = true;
						}
						break;
					
					case 0x00000002:
						if (Local_7[iVar312].f_16 == GRINGO_GET_REQUESTING_ACTOR())
						{
							Function_111("eGRINGO_EndUse: Stop use by request", Local_7[iVar312].f_16);
							Function_110(Local_7[iVar312].f_16, 1);
							if (IS_ACTOR_VALID(Local_7[iVar312].f_16))
							{
								if (IS_ACTOR_LOCAL_PLAYER(Local_7[iVar312].f_16) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(Local_7[iVar312].f_12))
								{
									GRINGO_ENABLE_PLAYER_CONTROL(Local_7[iVar312].f_16, 1);
								}
							}
							if (GRINGO_IS_FORCE_QUITTING())
							{
								Function_100(&(Local_7[iVar312]), 0);
							}
							else if (Local_7[iVar312].f_44 < 8)
							{
								Function_99(&(Local_7[iVar312]));
								Local_7[iVar312].f_44 = 8;
							}
							bVar5 = true;
						}
						else
						{
							Function_128("Stop use request actor mismatch!!");
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
			while (iVar0 < (iLocal_80 - 1))
			{
				if (Function_98(Local_7[iVar012].f_40, 2))
				{
					if (!Function_29(&(Local_7[iVar012])))
					{
						Function_128("Quitting due to update end");
						Function_100(&(Local_7[iVar012]), 1);
					}
				}
				if (Function_28(&(Local_7[iVar012]), 0))
				{
					Function_18(&(Local_7[iVar012]));
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < (iLocal_80 - 1))
		{
			if (Function_98(Local_7[iVar012].f_40, 2))
			{
				iVar2 = 1;
			}
			iVar0++;
		}
		if (iVar2 || Function_4(uScriptParam_0))
		{
			if (bLocal_86)
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
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_87))
	{
		Function_128("Removing quit context at script termination");
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_87);
	}
	iVar0 = 0;
	while (iVar0 < (iLocal_80 - 1))
	{
		if (Function_98(Local_7[iVar012].f_40, 2))
		{
			Function_2("Gringo termination calls StopUse", Local_7[iVar012].f_16);
			Function_100(&(Local_7[iVar012]), 0);
		}
		if (GRINGO_HANDLES_MOVEMENT(Local_7[iVar012].f_12))
		{
			SET_GRINGO_BOOL_ATTR(0, "RandomPointSet", Local_7[iVar012].f_12);
		}
		Function_28(&(Local_7[iVar012]), 1);
		iVar0++;
	}
	Function_1(uScriptParam_0);
	Function_128("QUITS");
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x41F / 1055
{
	iParam0 = iParam0;
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_2))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_2);
	}
	return;
}

void Function_2(int iParam0, bool bParam1) //Position: 0x436 / 1078
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

int Function_3() //Position: 0x471 / 1137
{
	return 0;
}

int Function_4(int iParam0) //Position: 0x478 / 1144
{
	char* cVar0[32];
	int iVar8;
	bool bVar9;
	
	iParam0 = iParam0;
	bVar9 = GRINGO_GET_MY_OBJECT_REF();
	if (((!IS_SCRIPT_USE_CONTEXT_VALID(bLocal_2) && !DECOR_CHECK_EXIST(GET_TARGET_ACTOR(), "ChangeOutfits")) && GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(bVar9))) && !UI_ISACTIVE("SaveGame_DoNotInterruptMe"))
	{
		fLocal_3 = Function_15(Global_34573, GRINGO_GET_MY_OBJECT_REF());
		if (((((fLocal_3 >= 1,75f && !Function_11(Global_34573, 0, 0)) && !Function_10()) && !Function_9(0, 0, 1, 1)) && !IS_WEAPON_DRAWN(Global_34573)) && (!Function_5(49, 0) || Function_5(57, 0)))
		{
			bLocal_2 = ADD_SCRIPT_USE_CONTEXT("PASS_CAMP_Outfits", 36, 7, false, 0, 0, 0, 4294967295, 0);
		}
	}
	else
	{
		if ((DECOR_CHECK_EXIST(GET_TARGET_ACTOR(), "ChangeOutfits") || !GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(bVar9))) || UI_ISACTIVE("SaveGame_DoNotInterruptMe"))
		{
			if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_2))
			{
				RELEASE_SCRIPT_USE_CONTEXT(bLocal_2);
			}
			return 0;
		}
		if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(bLocal_2))
		{
			SATCHEL_TOGGLE_NO_PAUSE_OUTFIT(1);
			RELEASE_SCRIPT_USE_CONTEXT(bLocal_2);
			SET_ACTOR_DRUNK(Global_34573, 0);
			strcpy(&cVar0, "out_", 32);
			stradd(&cVar0, &Global_27774[Global_2817813] + 32, 32);
			iVar8 = STRING_TO_HASH(&cVar0);
			SATCHEL_SET_CURRENT_OUTFIT(iVar8);
			SATCHEL_ALLOW_OUTFIT_CHANGE(1);
			DECOR_SET_BOOL(Global_34573, "SwitchOutfitsHouse", true);
			UI_ENTER("OutfitMenuProxy");
			return 0;
		}
		fLocal_3 = Function_15(Global_34573, bVar9);
		if (fLocal_3 < 1,75f)
		{
			if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_2))
			{
				RELEASE_SCRIPT_USE_CONTEXT(bLocal_2);
			}
		}
		else if (Function_11(Global_34573, 0, 0))
		{
			if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_2))
			{
				RELEASE_SCRIPT_USE_CONTEXT(bLocal_2);
			}
		}
		else if (Function_10())
		{
			if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_2))
			{
				RELEASE_SCRIPT_USE_CONTEXT(bLocal_2);
			}
		}
	}
	return 0;
}

bool Function_5(int iParam0, bool bParam1) //Position: 0x657 / 1623
{
	int iVar0;
	
	iVar0 = Function_7(iParam0);
	if (!Function_6(iVar0))
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

bool Function_6(int iParam0) //Position: 0x694 / 1684
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_7(int iParam0) //Position: 0x6AB / 1707
{
	if (!Function_8(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_8(int iParam0) //Position: 0x6C5 / 1733
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_9(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x6DB / 1755
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

bool Function_10() //Position: 0x77F / 1919
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_11(bool bParam0, bool bParam1, bool bParam2) //Position: 0x788 / 1928
{
	if (!IS_PLAYER_CONTROLLABLE(0) && !bParam1)
	{
		return 1;
	}
	if (IS_PLAYER_DEADEYE(0))
	{
		return 1;
	}
	if (IS_PLAYER_USING_COVER(0))
	{
		return 1;
	}
	if (IS_ACTOR_BEING_DRAGGED(bParam0, 0,3f))
	{
		return 1;
	}
	if (Function_14(bParam0))
	{
		return 1;
	}
	if (Function_13(bParam0))
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
	if (Function_12())
	{
		return 1;
	}
	return 0;
}

bool Function_12() //Position: 0x83E / 2110
{
	return ((Global_34578 != 0 || Global_34578 != 2) || Global_34578 != 3);
}

bool Function_13(bool bParam0) //Position: 0x855 / 2133
{
	return IS_ACTOR_IN_HOGTIE(bParam0);
}

bool Function_14(bool bParam0) //Position: 0x860 / 2144
{
	return IS_ACTOR_VALID(GET_LASSO_USER(bParam0));
}

float Function_15(bool bParam0, bool bParam1) //Position: 0x86E / 2158
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_17(bParam0);
			vVar0 = { StackVal, StackVal, Function_17(bParam0) };
			Function_16(bParam1);
			vVar3 = { StackVal, StackVal, Function_16(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

vector3 Function_16(bool bParam0) //Position: 0x90E / 2318
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

vector3 Function_17(bool bParam0) //Position: 0x97A / 2426
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

void Function_18(int iParam0) //Position: 0x9E4 / 2532
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!Function_98(iParam0->f_40, 2))
	{
		Function_110(iParam0->f_16, 0);
	}
	else if (UNK_0x0A0E660E() || Function_27(iParam0))
	{
		if (iParam0->f_44 == 6)
		{
			if (Function_25(iParam0) <= Function_23(iParam0->f_12))
			{
				if (IS_ACTOR_VALID(iParam0->f_16))
				{
					if (IS_ACTOR_LOCAL_PLAYER(iParam0->f_16))
					{
						if (UNK_0x0A0E660E() || !Global_3418)
						{
							bVar1 = Function_21(iParam0->f_12, &bVar0);
							if (!bVar0 && UNK_0x0A0E660E())
							{
								bVar1 = "nDisengage";
								bVar0 = true;
							}
							if (bVar0)
							{
								bLocal_86 = true;
								if (!IS_SCRIPT_USE_CONTEXT_VALID(bLocal_87))
								{
									Function_128("ManagePlayerQuit: Create quit context");
									if (Function_20(iParam0->f_12, "UseQuitBOverride", 0))
									{
										bLocal_87 = ADD_SCRIPT_USE_CONTEXT(bVar1, 500, 5, false, 0, 0, 0, 4294967295, 0);
									}
									else
									{
										bLocal_87 = ADD_SCRIPT_USE_CONTEXT(bVar1, 500, 4, false, 0, 0, 0, 4294967295, 0);
									}
								}
								if (IS_SCRIPT_USE_CONTEXT_PRESSED(bLocal_87))
								{
									Function_2("USE CONTEXT QUIT", iParam0->f_16);
									Function_99(iParam0);
									iParam0->f_44 = 8;
									if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_87))
									{
										Function_128("ManagePlayerQuit: Release quit context - already pressed");
										RELEASE_SCRIPT_USE_CONTEXT(bLocal_87);
										iVar2 = 0;
										if (GET_GRINGO_BOOL_ATTR("DeactivateChildren", iParam0->f_12, &iVar2))
										{
											GRINGO_SET_CHILD_USE_ACTIVATIONS(iParam0->f_12, 0);
										}
									}
								}
								if (DECOR_CHECK_EXIST(iParam0->f_16, "LobbyGringo"))
								{
									if (Function_19(iParam0->f_16))
									{
										Function_99(iParam0);
										Function_2("STICK QUIT", iParam0->f_16);
										iParam0->f_44 = 8;
										if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_87))
										{
											Function_128("ManagePlayerQuit: Release quit context - used stick");
											RELEASE_SCRIPT_USE_CONTEXT(bLocal_87);
										}
									}
								}
							}
						}
						else if (Global_3418)
						{
							if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_87))
							{
								Function_128("ManagePlayerQuit: Release quit context - due to wrong phase for quit");
								RELEASE_SCRIPT_USE_CONTEXT(bLocal_87);
							}
						}
					}
				}
			}
		}
		else if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_87))
		{
			Function_128("ManagePlayerQuit: Release quit context - due to wrong phase for quit");
			RELEASE_SCRIPT_USE_CONTEXT(bLocal_87);
		}
	}
	return;
}

bool Function_19(bool bParam0) //Position: 0xCCE / 3278
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
	if (bVar5 >= 0,2f)
	{
		DECOR_SET_BOOL(bParam0, "StickReset", true);
	}
	else if (bVar5 < 0,75f && DECOR_CHECK_EXIST(bParam0, "StickReset"))
	{
		if (!DECOR_GET_FLOAT_VERBOSE(bParam0, "DisconnectTime", &fVar6))
		{
			DECOR_SET_FLOAT(bParam0, "DisconnectTime", bVar1);
		}
		else if ((bVar1 - fVar6) < 0,15f)
		{
			DECOR_REMOVE(bParam0, "StickReset");
			DECOR_REMOVE(bParam0, "DisconnectTime");
			return 1;
		}
	}
	DECOR_REMOVE(bParam0, "DisconnectTime");
	return 0;
}

bool Function_20(bool bParam0, bool bParam1, int iParam2) //Position: 0xDC8 / 3528
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

bool Function_21(bool bParam0, int iParam1) //Position: 0xDE4 / 3556
{
	return Function_22(bParam0, "UseQuit", iParam1);
}

bool Function_22(bool bParam0, bool bParam1, int iParam2) //Position: 0xDFB / 3579
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
			return bLocal_0;
		}
		return bVar1;
	}
	return bLocal_0;
}

float Function_23(bool bParam0) //Position: 0xE40 / 3648
{
	return Function_24(bParam0, "MinimumUseTime", 0.0f);
}

bool Function_24(bool bParam0, bool bParam1, int iParam2) //Position: 0xE5D / 3677
{
	int iVar0;
	
	iVar0 = iParam2;
	GET_GRINGO_FLOAT_ATTR(&iVar0, bParam1, bParam0);
	return iVar0;
}

float Function_25(int iParam0) //Position: 0xE73 / 3699
{
	if (Function_27(iParam0))
	{
		if (Function_26(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_26(int iParam0) //Position: 0xF3B / 3899
{
	return Function_98(*iParam0, 2);
}

bool Function_27(int iParam0) //Position: 0xF48 / 3912
{
	return Function_98(*iParam0, 1);
}

bool Function_28(var uParam0, int iParam1) //Position: 0xF55 / 3925
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

bool Function_29(int iParam0) //Position: 0xF9D / 3997
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
	bool bVar11;
	bool bVar12;
	bool bVar13;
	var uVar14;
	bool bVar15;
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
	bool bVar45;
	int iVar46;
	bool bVar47;
	bool bVar48;
	bool bVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	bool bVar53;
	int iVar54;
	int iVar55;
	bool bVar56;
	vector3 vVar57;
	bool bVar60;
	
	bVar12 = Function_97(iParam0->f_12);
	if (!(IS_ACTOR_VALID(iParam0->f_16) && IS_ACTOR_ALIVE(iParam0->f_16)))
	{
		Function_111("UpdateUse with invalid actor", iParam0->f_16);
		return 0;
	}
	if (!Function_20(iParam0->f_12, "DenyDamageTermination", 0))
	{
		if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(iParam0->f_16)) >= 0,5f)
		{
			Function_111("Damage quit", iParam0->f_16);
			return 0;
		}
	}
	if (GET_ACTOR_INCAPACITATED(iParam0->f_16))
	{
		Function_111("Incapacitation quit", iParam0->f_16);
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
			bLocal_86 = true;
			if (IS_ACTOR_PLAYER(iParam0->f_16))
			{
				if (Function_96(iParam0->f_12, &fVar24))
				{
					GET_OBJECT_POSITION(GRINGO_GET_MY_OBJECT_REF(), &vVar25);
					vVar25.f_4 = (vVar25.y + (fVar24 + 0,1f));
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
				if (Function_91(iParam0->f_16, iParam0->f_12))
				{
					Function_2("Navigation complete (going to eStarting)", iParam0->f_16);
					NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 1);
					iParam0->f_44 = 1;
					Function_90(iParam0);
				}
			}
			else
			{
				NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 1);
				iParam0->f_44 = 1;
				Function_90(iParam0);
			}
			if (!Function_89(iParam0->f_12) && iParam0->f_44 != 1)
			{
				Function_2("SET_ACTOR_POSTURE", iParam0->f_16);
				SET_ACTOR_POSTURE(iParam0->f_16, 0);
			}
			break;
		
		case 0x00000001:
			bLocal_86 = true;
			Function_88(iParam0->f_12);
			if (((!Global_63096 && IS_ACTOR_LOCAL_PLAYER(iParam0->f_16)) && !Function_98(iParam0->f_40, 1)) && !DECOR_CHECK_EXIST(iParam0->f_16, "NoGringoCamera"))
			{
				Function_79(iParam0->f_12);
			}
			fVar20 = Function_78(iParam0->f_12);
			if (Function_25(iParam0) < fVar20)
			{
				Function_2("INTRO TIMED OUT - ABORTING", iParam0->f_16);
				return 0;
			}
			if (Function_98(iParam0->f_40, 1))
			{
				Function_73(iParam0->f_12, &vVar3, &uVar6);
				if (!Function_98(iParam0->f_40, 16))
				{
					if (GRINGO_SHOULD_SUSPEND_MOVER(iParam0->f_12))
					{
						Function_2("SUSPEND MOVER", iParam0->f_16);
						SUSPEND_MOVER(iParam0->f_16);
						Function_72(iParam0 + 40, 16);
					}
					if (GRINGO_SHOULD_FIX_MOVER(iParam0->f_12))
					{
						Function_2("nFIX MOVER", iParam0->f_16);
						SET_MOVER_FROZEN(iParam0->f_16, true);
						Function_72(iParam0 + 40, 16);
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
					TELEPORT_ACTOR_WITH_HEADING(iParam0->f_16, vVar3, uVar6, 1, true, Function_71());
				}
				if (!Function_98(iParam0->f_40, 1024))
				{
					Function_72(iParam0 + 40, 1024);
					SET_ACTOR_CAN_PLAY_GESTURES(iParam0->f_16, Function_20(iParam0->f_12, "AllowGestures", 1));
				}
				iParam0->f_44 = 3;
			}
			else if (Function_91(iParam0->f_16, iParam0->f_12))
			{
				NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 1);
				Function_2("FINISHED NAVIGATION", iParam0->f_16);
				if (!Function_98(iParam0->f_40, 1024))
				{
					Function_72(iParam0 + 40, 1024);
					SET_ACTOR_CAN_PLAY_GESTURES(iParam0->f_16, Function_20(iParam0->f_12, "AllowGestures", 1));
				}
				iParam0->f_44 = 3;
			}
			if (iParam0->f_44 != 3 && !Function_98(iParam0->f_40, 16))
			{
				if (GRINGO_SHOULD_SUSPEND_MOVER(iParam0->f_12))
				{
					Function_2("SUSPEND MOVER", iParam0->f_16);
					SUSPEND_MOVER(iParam0->f_16);
					Function_72(iParam0 + 40, 16);
				}
				if (GRINGO_SHOULD_FIX_MOVER(iParam0->f_12))
				{
					Function_2("nFIX MOVER", iParam0->f_16);
					SET_MOVER_FROZEN(iParam0->f_16, true);
					Function_72(iParam0 + 40, 16);
				}
			}
			break;
		
		case 0x00000003:
			if (Function_98(iParam0->f_40, 32))
			{
				bLocal_86 = true;
				if (GET_WEAPON_IN_HAND(iParam0->f_16) != 4294967295)
				{
					break;
				}
				Function_2("FINISHED HOLSTERING", iParam0->f_16);
			}
			iParam0->f_44 = 4;
		
		case 0x00000004:
			Function_70(iParam0->f_12);
			bLocal_86 = true;
			Function_69(iParam0);
			Function_66(iParam0, Function_68(iParam0->f_12));
			if (DECOR_CHECK_EXIST(iParam0->f_16, "LobbyGringo"))
			{
				SET_FORCED_LOOK_ENABLE(iParam0->f_16, 0);
			}
			bVar33 = !GET_GRINGO_BOOL_ATTR("NoMidActionAnim", iParam0->f_12, &iVar32);
			if (iVar32 == 0)
			{
				bVar33 = Function_98(iParam0->f_40, 1);
			}
			bVar0 = Function_65(iParam0->f_16, iParam0->f_12, bVar33);
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
					bVar11 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, iParam0->f_12, 0);
					while (bVar11 >= 4294967295)
					{
						bVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar11, iParam0->f_12);
						if (GRINGO_ATTACH_PROP_TO_ANIM(iParam0->f_16, bVar1, Function_22(bVar1, "AttachBone", &bVar10), Function_22(bVar1, "AttachLocator", &bVar10), 1))
						{
							Function_64(bVar1, iParam0->f_16);
							if (DECOR_CHECK_EXIST(iParam0->f_16, "LobbyGringo"))
							{
								bVar34 = GRINGO_GET_PROP_FROM_COMPONENT(bVar1);
								if (IS_PHYSINST_VALID(bVar34))
								{
									ADD_CAMERA_COLLISION_EXCLUSION(GET_GAME_CAMERA(), bVar34, 0);
								}
							}
						}
						bVar11 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, iParam0->f_12, bVar11 + 1);
					}
					bVar13 = false;
					bVar15 = GRINGO_GET_ATTRIBUTE(iParam0->f_12, bVar13);
					while (bVar13 <= GRINGO_GET_ATTRIBUTE_COUNT(iParam0->f_12))
					{
						bVar15 = GRINGO_GET_ATTRIBUTE(iParam0->f_12, bVar13);
						if (GRINGO_IS_ATTRIBUTE_VALID(bVar15))
						{
							if (GRINGO_GET_ATTR_TYPE_BY_HANDLE(bVar15) == 2)
							{
								if (iVar23 == GRINGO_GET_ATTRIBUTE_HASH(bVar15))
								{
									iVar16 = GRINGO_GET_STRING_ATTR_BY_HANDLE(bVar15, &uVar14);
									bVar11 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD(iVar16, 1, GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 0), 0);
									while (bVar11 >= 4294967295)
									{
										bVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar11, GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 0));
										if (GRINGO_ATTACH_PROP_TO_ANIM(iParam0->f_16, bVar1, Function_22(bVar1, "AttachBone", &bVar10), Function_22(bVar1, "AttachLocator", &bVar10), 1))
										{
											if (DECOR_CHECK_EXIST(iParam0->f_16, "LobbyGringo"))
											{
												bVar35 = GRINGO_GET_PROP_FROM_COMPONENT(bVar1);
												if (IS_PHYSINST_VALID(bVar35))
												{
													ADD_CAMERA_COLLISION_EXCLUSION(GET_GAME_CAMERA(), bVar35, 0);
												}
											}
											Function_64(bVar1, iParam0->f_16);
										}
										bVar11 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD(iVar16, 1, GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 0), bVar11 + 1);
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
					Function_55(iParam0, bVar8, &iLocal_85, &bLocal_84);
					bVar22 = GET_PHYSINST_FROM_OBJECT(bVar8);
					if (IS_PHYSINST_VALID(bVar22))
					{
						if (!IS_PROP_FIXED(bVar22))
						{
							Function_72(iParam0 + 40, 256);
							SET_PROP_FIXED(bVar22, 1);
						}
						else
						{
							Function_54(iParam0 + 40, 256);
						}
					}
				}
				GET_POSITION_OBJECT_SPACE(GRINGO_GET_MY_OBJECT_REF(), vVar17, iParam0 + 20);
				if (Function_98(iParam0->f_40, 16))
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
				if (Function_53(iParam0->f_12))
				{
					GRINGO_SET_COMMON_LAYER_USE_ACTIVATIONS(iParam0->f_12, 0);
				}
				if (IS_GRINGO_COMPONENT_VALID(bVar0))
				{
					if (Function_52(iParam0->f_12))
					{
						bVar2 = GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 3);
						if (IS_GRINGO_COMPONENT_VALID(bVar2))
						{
							bVar9 = Function_51(bVar2);
							if (IS_ACTOR_VALID(bVar9))
							{
								SET_LINKED_ANIM_TARGET(iParam0->f_16, bVar9);
							}
						}
					}
					else if (Function_50(iParam0->f_12))
					{
						bVar2 = GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 3);
						if (IS_GRINGO_COMPONENT_VALID(bVar2))
						{
							bVar9 = Function_51(bVar2);
							if (IS_ACTOR_VALID(bVar9))
							{
								SET_LINKED_ANIM_TARGET(bVar9, iParam0->f_16);
							}
						}
					}
					bVar10 = false;
					bVar7 = Function_49(iParam0->f_12, &bVar10);
					if (bVar10)
					{
						bVar2 = GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 3);
						if (IS_GRINGO_COMPONENT_VALID(bVar2))
						{
							bVar9 = Function_51(bVar2);
							if (IS_ACTOR_VALID(bVar9))
							{
								SET_ACTION_NODE_FOR_ACTOR(bVar9, bVar7);
							}
						}
					}
				}
				if (Function_48(iParam0->f_12))
				{
					if (!GET_ACTOR_ONE_SHOT_DEATH_STATUS(iParam0->f_16))
					{
						Function_72(iParam0 + 40, 8);
					}
					else
					{
						Function_54(iParam0 + 40, 8);
					}
					if (Function_98(iParam0->f_40, 8))
					{
						SET_ACTOR_ONE_SHOT_DEATH(iParam0->f_16, true);
					}
				}
				else
				{
					Function_54(iParam0 + 40, 8);
				}
				if (Function_47(iParam0->f_12))
				{
					NET_SET_NODE_REPLICATION(iParam0->f_16, 1, 1);
					UNK_0xC17BAD12(iParam0->f_16);
				}
				bVar37 = Function_22(iParam0->f_12, "CustomReactNode", &bVar36);
				if (bVar36)
				{
					SET_REACT_NODE_FOR_ACTOR(iParam0->f_16, bVar37);
				}
				iVar38 = 1;
				bVar39 = Function_20(iParam0->f_12, "CanAnimalsAttack", iVar38);
				if (!bVar39)
				{
					if (IS_ACTOR_VALID(iParam0->f_16))
					{
						SET_ANIMAL_CAN_ATTACK(iParam0->f_16, 0);
					}
				}
				Function_42(iParam0->f_16, iParam0->f_12);
				bVar40 = Function_20(iParam0->f_12, "AllowTalking", 1);
				if (!bVar40)
				{
					STOP_PED_SPEAKING(iParam0->f_16, 1);
				}
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_LOCAL_PLAYER(iParam0->f_16))
			{
				Function_41();
			}
			iParam0->f_44 = 6;
			if (Function_98(iParam0->f_40, 1))
			{
				if (Function_40(iParam0->f_12))
				{
					Function_2("MID ACTION NODE", iParam0->f_16);
				}
			}
		
		case 0x00000006:
			if (!Function_39(iParam0->f_16, iParam0->f_12))
			{
				Function_2("CUSTOM QUIT DURING USE", iParam0->f_16);
				iParam0->f_44 = 8;
			}
			bVar0 = Function_65(iParam0->f_16, iParam0->f_12, Function_98(iParam0->f_40, 1));
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
			if (Function_25(iParam0) <= Function_23(iParam0->f_12))
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
							if (!GET_GRINGO_FLOAT_ATTR(&bVar45, "MinDelay", bVar41))
							{
								bVar45 = 10.0f;
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
								if (GET_CURRENT_GAME_TIME() - fVar42) <= RAND_FLOAT_RANGE(bVar45, bVar44)
								{
									DECOR_SET_FLOAT(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime", GET_CURRENT_GAME_TIME());
									bVar51 = RAND_INT_RANGE(false, (iVar43 - 1));
									bVar52 = GRINGO_GET_ATTRIBUTE(bVar41, bVar51);
									bVar53 = GRINGO_GET_STRING_ATTR_BY_HANDLE(bVar52, &iVar46);
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
				bVar60 = Function_38(iParam0->f_12);
				if (bVar60 <= 0.0f)
				{
					GET_POSITION_OBJECT_SPACE(GRINGO_GET_MY_OBJECT_REF(), vVar17, &vVar57);
					if (VDIST(vVar57, *(iParam0 + 20)) < bVar60)
					{
						Function_2("UPDATE USE TOO FAR", iParam0->f_16);
						if (Function_37())
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
					if (Function_36(iParam0->f_12) <= 0.0f)
					{
						if (Function_25(iParam0) < Function_36(iParam0->f_12))
						{
							Function_2("UPDATE USE USETIME SATISFIED", iParam0->f_16);
							iParam0->f_44 = 7;
						}
					}
				}
			}
			break;
		
		case 0x00000007:
			Function_128("nRewarding");
			Function_35(iParam0->f_16, iParam0->f_12);
			Function_34(iParam0->f_16, iParam0->f_12);
			Function_33(iParam0->f_16, iParam0->f_12);
			SET_GRINGO_OBJECT_REF_ATTR(iParam0->f_16, "LastUserObject", iParam0->f_12);
			Function_72(iParam0 + 40, 64);
			iParam0->f_44 = 8;
			break;
		
		case 0x00000008:
			bLocal_86 = true;
			if (!Global_63096 && IS_ACTOR_LOCAL_PLAYER(iParam0->f_16))
			{
				if (!DECOR_CHECK_EXIST(iParam0->f_16, "NoGringoCamera"))
				{
					if (!Function_20(iParam0->f_12, "GringoCamNoEndCut", 0))
					{
						if (!Function_32())
						{
							Function_79(iParam0->f_12);
						}
					}
				}
				else
				{
					DECOR_REMOVE(iParam0->f_16, "NoGringoCamera");
				}
			}
			if (Function_20(iParam0->f_12, "DoNotCleanUpUserSettings", 0))
			{
				Function_2("Use case quits - no cleapup due to DoNotCleanUpUserSettings attribute", iParam0->f_16);
				return 0;
			}
			Function_2("GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS", iParam0->f_16);
			GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS(iParam0->f_16);
			iParam0->f_44 = 9;
			Function_31(iParam0->f_16, iParam0->f_12);
			break;
		
		case 0x00000009:
			if (Function_98(iParam0->f_40, 1024))
			{
				Function_54(iParam0 + 40, 1024);
				if (!Function_20(iParam0->f_12, "AllowGestures", 0))
				{
					SET_ACTOR_CAN_PLAY_GESTURES(iParam0->f_16, true);
				}
			}
			if (DECOR_CHECK_EXIST(iParam0->f_16, "LobbyGringo"))
			{
				SET_FORCED_LOOK_ENABLE(iParam0->f_16, 1);
			}
			bLocal_86 = true;
			bVar0 = Function_65(iParam0->f_16, iParam0->f_12, Function_98(iParam0->f_40, 1));
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
	Function_30(iParam0->f_16, iParam0->f_44);
	return 1;
}

void Function_30(bool bParam0, int iParam1) //Position: 0x20E4 / 8420
{
	if (IS_ACTOR_VALID(bParam0))
	{
		REPORT_GRINGO_USE_PHASE(bParam0, iParam1);
	}
	return;
}

void Function_31(var uParam0, var uParam1) //Position: 0x20F9 / 8441
{
	uParam1 = uParam1;
	uParam0 = uParam0;
	return;
}

bool Function_32() //Position: 0x2107 / 8455
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

void Function_33(var uParam0, bool bParam1) //Position: 0x2138 / 8504
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = GRINGO_GET_ATTRIBUTE_COUNT(bParam1);
	iVar2 = STRING_TO_HASH("RemoveCapability");
	bVar1 = false;
	while (bVar1 < (iVar0 - 1))
	{
		bVar3 = GRINGO_GET_ATTRIBUTE(bParam1, bVar1);
		iVar4 = GRINGO_GET_ATTRIBUTE_HASH(bVar3);
		if (iVar4 == iVar2)
		{
			iVar5 = 0;
			iVar6 = GRINGO_GET_STRING_ATTR_BY_HANDLE(bVar3, &iVar5);
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

void Function_34(var uParam0, bool bParam1) //Position: 0x21AC / 8620
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = GRINGO_GET_ATTRIBUTE_COUNT(bParam1);
	iVar2 = STRING_TO_HASH("AddCapability");
	bVar1 = false;
	while (bVar1 < (iVar0 - 1))
	{
		bVar3 = GRINGO_GET_ATTRIBUTE(bParam1, bVar1);
		iVar4 = GRINGO_GET_ATTRIBUTE_HASH(bVar3);
		if (iVar4 == iVar2)
		{
			iVar5 = 0;
			iVar6 = GRINGO_GET_STRING_ATTR_BY_HANDLE(bVar3, &iVar5);
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

void Function_35(var uParam0, int iParam1) //Position: 0x221E / 8734
{
	iParam1 = iParam1;
	uParam0 = uParam0;
	return;
}

float Function_36(bool bParam0) //Position: 0x222C / 8748
{
	return Function_24(bParam0, "UseTime", 5.0f);
}

bool Function_37() //Position: 0x2242 / 8770
{
	return (GET_DEBUG_DRAW_STATE() && GRINGO_DEBUG_IS_SELECTED());
}

bool Function_38(bool bParam0) //Position: 0x224F / 8783
{
	return Function_24(bParam0, "MoveAllowance", 1,5f);
}

bool Function_39(bool bParam0, bool bParam1) //Position: 0x226F / 8815
{
	if (GET_CURRENT_GAME_TIME() - fLocal_1) < Function_24(bParam1, "TimeBeforeSave", 5.0f)
	{
		if (DECOR_CHECK_EXIST(bParam0, "CanSaveNowCamp"))
		{
			DECOR_SET_BOOL(bParam0, "CanSaveNowCamp", true);
		}
		if (DECOR_CHECK_EXIST(bParam0, "CanSaveNowBed"))
		{
			DECOR_SET_BOOL(bParam0, "CanSaveNowBed", true);
		}
	}
	bParam1 = bParam1;
	if (HUD_IS_FADED())
	{
		if (IS_LAYOUTREF_VALID(bLocal_6))
		{
			DESTROY_LAYOUT_OBJECTS(bLocal_6);
			DESTROY_LAYOUT(bLocal_6);
			CAMERA_RESET(0);
		}
	}
	return 1;
}

bool Function_40(bool bParam0) //Position: 0x2317 / 8983
{
	return IS_GRINGO_COMPONENT_VALID(GRINGO_GET_FIRST_NAMED_CHILD("PlayerUseAnim", 2, bParam0));
}

void Function_41() //Position: 0x2336 / 9014
{
	return;
}

void Function_42(bool bParam0, bool bParam1) //Position: 0x233C / 9020
{
	bool bVar0;
	
	if (Function_20(bParam1, "IsCamp", 1))
	{
		DECOR_SET_BOOL(bParam0, "CanSaveNowCamp", false);
	}
	else
	{
		DECOR_SET_BOOL(bParam0, "CanSaveNowBed", false);
		if (GET_GRINGO_OBJECT_REF_ATTR(&bVar0, "MyRestartFlag", bParam1))
		{
			if (IS_OBJECT_VALID(bVar0))
			{
				DECOR_SET_OBJECT(bParam0, "SAVE_restartFlag", bVar0);
			}
		}
	}
	if (DECOR_CHECK_EXIST(bParam0, "bPlayerSleeping"))
	{
		DECOR_REMOVE(bParam0, "bPlayerSleeping");
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_2))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_2);
	}
	Function_45(0, 0);
	Function_43(6);
	fLocal_1 = GET_CURRENT_GAME_TIME();
	bParam1 = bParam1;
	bParam0 = bParam0;
	return;
}

void Function_43(bool bParam0) //Position: 0x2418 / 9240
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 101;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 <= iVar1)
	{
		iVar2 = 0;
		if (Global_30842[16])
		{
			PRINTNL();
			PRINTNL();
			PRINTSTRING("CUR time of day delay: ");
			Function_44(Global_16876[iVar06]);
		}
		if (GET_DAY(Global_16876[iVar06]) == 0)
		{
			iVar2 = 1;
		}
		ADD_TIME(&(Global_16876[iVar06]), iVar2, bParam0, false, 0);
		Global_17483[iVar075].f_264 = Global_16876[iVar06];
		if (Global_30842[16])
		{
			PRINTNL();
			PRINTSTRING("NEW time of day delay: ");
			Function_44(Global_16876[iVar06]);
		}
		iVar0++;
	}
	return;
}

void Function_44(bool bParam0) //Position: 0x24D8 / 9432
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

void Function_45(int iParam0, int iParam1) //Position: 0x251E / 9502
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
			Function_46(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_46(int iParam0) //Position: 0x25A0 / 9632
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

bool Function_47(int iParam0) //Position: 0x25EE / 9710
{
	iParam0 = iParam0;
	return 1;
}

bool Function_48(bool bParam0) //Position: 0x25F9 / 9721
{
	return Function_20(bParam0, "OneShotKill", 0);
}

bool Function_49(bool bParam0, int iParam1) //Position: 0x2613 / 9747
{
	return Function_22(bParam0, "ParentAnimNode", iParam1);
}

bool Function_50(bool bParam0) //Position: 0x2631 / 9777
{
	return Function_20(bParam0, "LinkToParentAnim", 0);
}

bool Function_51(bool bParam0) //Position: 0x2650 / 9808
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < (Local_7 - 1))
	{
		if (Local_7[iVar012].f_12 == bParam0)
		{
			return Local_7[iVar012].f_16;
		}
		iVar0++;
	}
	return iVar1;
}

bool Function_52(bool bParam0) //Position: 0x2683 / 9859
{
	return Function_20(bParam0, "LinkParentToAnim", 0);
}

bool Function_53(bool bParam0) //Position: 0x26A2 / 9890
{
	return Function_20(bParam0, "SingularUse", 0);
}

void Function_54(var uParam0, int iParam1) //Position: 0x26BC / 9916
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_55(var uParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x26CF / 9935
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	
	PRINTSTRING("CALLED ManageTargetRelation");
	PRINTNL();
	bVar2 = Function_63(uParam0->f_12, &bVar0);
	uVar3 = Function_62(uParam0->f_12, &bVar1);
	bVar4 = Function_61(uParam0->f_12);
	if (!((bVar0 || bVar1) || IS_GRINGO_COMPONENT_VALID(bVar4)))
	{
		bVar6 = Function_60(uParam0->f_12, &bVar5);
		if (bVar5)
		{
			bVar8 = Function_59(uParam0->f_12, &bVar7);
			if (!bVar7)
			{
				LOG_ERROR("Provided target physical attachment bone with no corresponding user attachment");
				return;
			}
			uParam0->f_32 = ATTACH_OBJECTS_PHYSICAL(bParam1, uParam0->f_16, bVar6, bVar8, 0,02f);
		}
		return;
	}
	bVar9 = true;
	if (bVar0)
	{
		bVar9 = ATTACH_SLOT_FROM_STRING(bVar2);
		if (Function_37())
		{
			Function_58();
			PRINTSTRING(" - got attach slot for target: ");
			PRINTINT(bVar9);
			PRINTNL();
		}
	}
	if (bVar1)
	{
		ATTACH_PROP_TO_ANIM(uParam0->f_16, bParam1, uVar3, Function_57(uParam0->f_12, &bVar10), false, bVar9);
	}
	else
	{
		ATTACH_PROP_TO_ANIM(uParam0->f_16, bParam1, Function_56(), Function_57(uParam0->f_12, &bVar10), false, bVar9);
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
		bVar11 = GRINGO_GET_ACTOR_SPECIFIC_AST_FILENAME(bVar4, uParam0->f_16);
		bVar12 = GRINGO_ANIM_GET_ACT_FILENAME(bVar4);
		bVar13 = GRINGO_ANIM_GET_ACT_ROOTNODE(bVar4);
		*uParam3 = CREATE_OBJECT_ANIMATOR_ON_OBJECT(bParam1, bVar11, bVar12, bVar13);
		if (IS_OBJECT_ANIMATOR_VALID(*uParam3))
		{
			if (Function_20(bVar4, "LinkToUser", 0))
			{
				if (Function_37())
				{
					Function_58();
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

var Function_56() //Position: 0x29B7 / 10679
{
	int iVar0;
	
	return iVar0;
}

bool Function_57(bool bParam0, bool bParam1) //Position: 0x29BF / 10687
{
	return Function_22(bParam0, "TargetLocator", bParam1);
}

void Function_58() //Position: 0x29DC / 10716
{
	PRINTSTRING(GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF()));
	return;
}

bool Function_59(bool bParam0, int iParam1) //Position: 0x29EB / 10731
{
	return Function_22(bParam0, "UserPhysAttachBone", iParam1);
}

bool Function_60(bool bParam0, int iParam1) //Position: 0x2A0D / 10765
{
	return Function_22(bParam0, "TargetPhysAttachBone", iParam1);
}

var Function_61(bool bParam0) //Position: 0x2A31 / 10801
{
	return GRINGO_GET_FIRST_NAMED_CHILD("TargetSkelAnim", 2, bParam0);
}

bool Function_62(bool bParam0, int iParam1) //Position: 0x2A4E / 10830
{
	return Function_22(bParam0, "TargetAttachBone", iParam1);
}

bool Function_63(bool bParam0, int iParam1) //Position: 0x2A6E / 10862
{
	return Function_22(bParam0, "TargetAttachSlot", iParam1);
}

void Function_64(bool bParam0, bool bParam1) //Position: 0x2A8E / 10894
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	bVar0 = GRINGO_GET_FIRST_CHILD(2, bParam0);
	if (IS_GRINGO_COMPONENT_VALID(bVar0))
	{
		bVar2 = GRINGO_GET_ACTOR_SPECIFIC_AST_FILENAME(bVar0, bParam1);
		bVar3 = GRINGO_ANIM_GET_ACT_FILENAME(bVar0);
		bVar4 = GRINGO_ANIM_GET_ACT_ROOTNODE(bVar0);
		bVar1 = GRINGO_GET_PHYSINST(bParam0);
		if (IS_PHYSINST_VALID(bVar1))
		{
			bVar5 = GET_OBJECT_ANIMATOR_ON_OBJECT(bVar1);
			if (IS_OBJECT_ANIMATOR_VALID(bVar5))
			{
				LOG_ERROR("Previous object animator not cleared - destroying now!");
				DESTROY_OBJECT_ANIMATOR(bVar5);
			}
			bVar6 = CREATE_OBJECT_ANIMATOR_ON_OBJECT(bVar1, bVar2, bVar3, bVar4);
			if (IS_OBJECT_ANIMATOR_VALID(bVar6))
			{
				LINK_OBJECT_ANIMATOR_TO_ACTOR(bVar6, bParam1, GRINGO_GET_PROP_ATTACH_SLOT(bParam0));
			}
		}
	}
	return;
}

bool Function_65(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2B3C / 11068
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

void Function_66(int iParam0, float fParam1) //Position: 0x2BAC / 11180
{
	if (!Function_27(iParam0))
	{
		Function_67(iParam0, fParam1);
	}
	return;
}

void Function_67(int iParam0, float fParam1) //Position: 0x2BC2 / 11202
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_72(iParam0, 1);
	Function_54(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

var Function_68(bool bParam0) //Position: 0x2BE3 / 11235
{
	return (RAND_FLOAT_RANGE(0.0f, 1.0f) * Function_24(bParam0, "RandUseTime", 0.0f));
}

void Function_69(int iParam0) //Position: 0x2C03 / 11267
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

void Function_70(var uParam0) //Position: 0x2C17 / 11287
{
	uParam0 = uParam0;
	return;
}

int Function_71() //Position: 0x2C21 / 11297
{
	return 1;
}

void Function_72(var uParam0, int iParam1) //Position: 0x2C28 / 11304
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_73(bool bParam0, var uParam1, int iParam2) //Position: 0x2C37 / 11319
{
	bool bVar0;
	
	Function_76(bParam0);
	*uParam1 = { StackVal, StackVal, Function_76(bParam0) };
	*iParam2 = Function_75(bParam0);
	bVar0 = Function_74(bParam0);
	if (bVar0 < 180.0f)
	{
		bVar0 = 180.0f;
	}
	*iParam2 = (*iParam2 + RAND_FLOAT_RANGE(-bVar0, bVar0));
	return;
}

bool Function_74(bool bParam0) //Position: 0x2C76 / 11382
{
	return Function_24(bParam0, "UseDirectionToleranceDegrees", 0.0f);
}

float Function_75(bool bParam0) //Position: 0x2CA1 / 11425
{
	return GRINGO_GET_USE_COMPONENT_HEADING(bParam0);
}

vector3 Function_76(bool bParam0) //Position: 0x2CAC / 11436
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	
	if (Function_77(bParam0))
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

bool Function_77(bool bParam0) //Position: 0x2DA2 / 11682
{
	return Function_20(bParam0, "UsePosActorRelative", 0);
}

bool Function_78(bool bParam0) //Position: 0x2DC4 / 11716
{
	return Function_24(bParam0, "StartingPhaseTimeout", 10.0f);
}

void Function_79(bool bParam0) //Position: 0x2DEB / 11755
{
	struct<25> Var0;
	
	bParam0 = bParam0;
	if (!iLocal_4)
	{
		bLocal_6 = CREATE_LAYOUT("sleepBedSave_Layout");
		iLocal_4 = 1;
		Function_87(GRINGO_GET_MY_OBJECT_REF());
		*(&Var0 + 12) = { StackVal, StackVal, Function_87(GRINGO_GET_MY_OBJECT_REF()) };
		Function_86(GRINGO_GET_MY_OBJECT_REF());
		Var0 = { StackVal, StackVal, Function_86(GRINGO_GET_MY_OBJECT_REF()) };
		Var0.f_24 = 0;
		if (bLocal_5)
		{
			Function_83(bLocal_6, 0, &Var0, 1, 0, 0);
		}
		else
		{
			Function_80(bLocal_6, 0, &Var0, 1, 0, 0);
		}
	}
	return;
}

var Function_80(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x2E54 / 11860
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_56(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "nSleepBedR", 1, 1);
	}
	Function_81(&bVar0, uParam2);
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

void Function_81(var uParam0, int iParam1) //Position: 0x2ECB / 11979
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_82(&bVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 100.0f, 0);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESET(bVar1, 100.0f, 1, 0);
	return;
}

void Function_82(var uParam0, bool bParam1) //Position: 0x2F03 / 12035
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 54,53894f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { 0.0f, 0.0f, 0.0f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	vVar0 = { StackVal, StackVal, Vector(vVar0, StackVal, StackVal) + Vector(-0,78833f, 1,131546f, 1,736862f) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	SET_CAMERASHOT_DIRECTION(*uParam0, 0,847467f, 0,029813f, -0,53001f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

var Function_83(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x2FA7 / 12199
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_56(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "nSleepBedL", 1, 1);
	}
	Function_84(&bVar0, uParam2);
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

void Function_84(var uParam0, int iParam1) //Position: 0x301E / 12318
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_85(&bVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 100.0f, 0);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESET(bVar1, 100.0f, 1, 0);
	return;
}

void Function_85(var uParam0, bool bParam1) //Position: 0x3056 / 12374
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 54,53894f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { 0.0f, 0.0f, 0.0f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	vVar0 = { StackVal, StackVal, Vector(vVar0, StackVal, StackVal) + Vector(-1,790283f, 1,191498f, 0,91394f) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	SET_CAMERASHOT_DIRECTION(*uParam0, 0,385359f, 0,069064f, -0,920178f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

vector3 Function_86(bool bParam0) //Position: 0x30FA / 12538
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (!IS_OBJECT_VALID(bParam0))
	{
		return StackVal, StackVal, vVar0;
	}
	GET_OBJECT_ORIENTATION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

vector3 Function_87(bool bParam0) //Position: 0x3121 / 12577
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

void Function_88(int iParam0) //Position: 0x3148 / 12616
{
	iParam0 = iParam0;
	return;
}

bool Function_89(bool bParam0) //Position: 0x3152 / 12626
{
	return Function_20(bParam0, "MaintainPosture", 0);
}

void Function_90(int iParam0) //Position: 0x3170 / 12656
{
	if (!Function_27(iParam0))
	{
		Function_67(iParam0, 0.0f);
	}
	return;
}

bool Function_91(bool bParam0, bool bParam1) //Position: 0x3185 / 12677
{
	vector3 vVar0;
	bool bVar3;
	var uVar4;
	var uVar5;
	vector3 vVar6;
	
	Function_76(bParam1);
	vVar0 = { StackVal, StackVal, Function_76(bParam1) };
	bVar3 = Function_75(bParam1);
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (IS_ACTOR_PLAYER(bParam0))
	{
		TELEPORT_ACTOR_WITH_HEADING(bParam0, vVar0, bVar3, 0, true, 1);
		return 1;
	}
	if (GRINGO_HANDLES_MOVEMENT(bParam1) && DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "Volume"))
	{
		return Function_95(bParam0, bParam1);
	}
	uVar4 = Function_94(bParam1);
	uVar5 = Function_74(bParam1);
	Function_92(bParam1);
	vVar6 = { StackVal, StackVal, Function_92(bParam1) };
	return GRINGO_ACTOR_MOVE_TO_AND_FACE_WITH_USER_OFFSET(bParam0, &vVar0, &vVar6, uVar4, 0,2f, 1, bVar3, uVar5, 0, 0);
}

vector3 Function_92(int iParam0) //Position: 0x320C / 12812
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	Function_93(StackVal, StackVal, iParam0, "UserOffset", vVar0);
	return StackVal, StackVal, Function_93(StackVal, StackVal, iParam0, "UserOffset", vVar0);
}

vector3 Function_93(bool bParam0, char* cParam1, vector3 vParam2) //Position: 0x322F / 12847
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, vParam2 };
	GET_GRINGO_VECTOR_ATTR(&vVar0, cParam1, bParam0);
	return StackVal, StackVal, vVar0;
}

bool Function_94(bool bParam0) //Position: 0x324D / 12877
{
	return Function_24(bParam0, "UseLocationTolerance", 0.0f);
}

int Function_95(bool bParam0, bool bParam1) //Position: 0x3270 / 12912
{
	bool bVar0;
	float fVar1;
	vector3 vVar2;
	bool bVar5;
	var uVar6;
	var uVar7;
	var uVar10;
	var uVar13;
	bool bVar16;
	vector3 vVar17;
	var uVar20;
	bool bVar23;
	
	bVar0 = Function_94(bParam1);
	fVar1 = Function_74(bParam1);
	if (!GET_GRINGO_BOOL_ATTR("RandomPointSet", bParam1, &uVar6))
	{
		bVar5 = RAND_FLOAT_RANGE(0.0f, 360.0f);
		bVar16 = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(GRINGO_GET_MY_OBJECT_REF(), "Volume"));
		if (IS_ACTOR_IN_VOLUME(bParam0, bVar16) && DECOR_CHECK_EXIST(bParam0, "VolOnly"))
		{
			return 1;
		}
		GENERATE_RANDOM_POINT_IN_VOLUME(bVar16, &uVar7);
		FIND_VOL_SURFACE_POINTS_FOR_POINT(bVar16, &uVar7, &uVar10, &uVar13);
		bVar23 = false;
		bVar23 = FIND_INTERSECTION(&uVar10, &uVar13, &vVar17, &uVar20, 1, 4294967295, 4194304);
		if (bVar23)
		{
			vVar2 = { StackVal, StackVal, vVar17 };
			SET_GRINGO_VECTOR_ATTR(&vVar17, "RandomPoint", bParam1);
			SET_GRINGO_FLOAT_ATTR(bVar5, "RandomDirection", bParam1);
			SET_GRINGO_BOOL_ATTR(1, "RandomPointSet", bParam1);
		}
		else
		{
			return 0;
		}
	}
	GET_GRINGO_VECTOR_ATTR(&vVar2, "RandomPoint", bParam1);
	return GRINGO_ACTOR_MOVE_TO_AND_FACE(bParam0, &vVar2, bVar0, 0,2f, 1, bVar5, fVar1, 1, 0);
}

bool Function_96(bool bParam0, int iParam1) //Position: 0x338B / 13195
{
	*iParam1 = Function_24(bParam0, "AreaClearCheck", -1.0f);
	if (*iParam1 < 0.0f)
	{
		return 1;
	}
	return 0;
}

int Function_97(bool bParam0) //Position: 0x33B6 / 13238
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	bool bVar4;
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
	bVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bParam0, 0);
	while (bVar1 >= 4294967295)
	{
		if (!GRINGO_IS_PROP_READY(GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar1, bParam0)))
		{
			return 0;
		}
		bVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bParam0, bVar1 + 1);
	}
	bVar2 = false;
	bVar4 = GRINGO_GET_ATTRIBUTE(bParam0, bVar2);
	iVar6 = STRING_TO_HASH("SharedPropName");
	while (bVar2 <= GRINGO_GET_ATTRIBUTE_COUNT(bParam0))
	{
		bVar4 = GRINGO_GET_ATTRIBUTE(bParam0, bVar2);
		if (GRINGO_IS_ATTRIBUTE_VALID(bVar4))
		{
			if (GRINGO_GET_ATTR_TYPE_BY_HANDLE(bVar4) == 2)
			{
				if (iVar6 == GRINGO_GET_ATTRIBUTE_HASH(bVar4))
				{
					iVar5 = GRINGO_GET_STRING_ATTR_BY_HANDLE(bVar4, &uVar3);
					bVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD(iVar5, 1, GRINGO_GET_PARENT_COMPONENT(bParam0, 0), 0);
					while (bVar1 >= 4294967295)
					{
						if (!GRINGO_IS_PROP_READY(GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar1, GRINGO_GET_PARENT_COMPONENT(bParam0, 0))))
						{
							return 0;
						}
						bVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD(iVar5, 1, GRINGO_GET_PARENT_COMPONENT(bParam0, 0), bVar1 + 1);
					}
				}
			}
		}
		bVar2++;
	}
	return 1;
}

bool Function_98(var uParam0, int iParam1) //Position: 0x34BB / 13499
{
	return (uParam0 && iParam1) == 0;
}

void Function_99(int iParam0) //Position: 0x34C8 / 13512
{
	if (Function_98(iParam0->f_40, 16))
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
				SET_MOVER_FROZEN(iParam0->f_16, false);
			}
		}
	}
	return;
}

void Function_100(int iParam0, bool bParam1) //Position: 0x353B / 13627
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
	Function_22(iParam0->f_12, "CustomReactNode", &bVar0);
	if (bVar0)
	{
		if (IS_ACTOR_VALID(iParam0->f_16))
		{
			RESET_REACT_NODE_FOR_ACTOR(iParam0->f_16);
		}
	}
	iVar1 = 1;
	bVar2 = Function_20(iParam0->f_12, "CanAnimalsAttack", iVar1);
	if (!bVar2)
	{
		if (IS_ACTOR_VALID(iParam0->f_16))
		{
			SET_ANIMAL_CAN_ATTACK(iParam0->f_16, 1);
		}
	}
	bVar3 = Function_20(iParam0->f_12, "AllowTalking", 1);
	if (!bVar3)
	{
		STOP_PED_SPEAKING(iParam0->f_16, 0);
	}
	if (iParam0->f_44 < 8)
	{
		Function_31(iParam0->f_16, iParam0->f_12);
	}
	if ((HAS_INVENTORY_COMPONENT(iParam0->f_16) && Function_98(iParam0->f_40, 32)) && Function_20(iParam0->f_12, "RedrawWeapon", 1))
	{
		ACTOR_DRAW_LAST_WEAPON(iParam0->f_16, 1);
	}
	if (DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime"))
	{
		DECOR_REMOVE(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime");
	}
	Function_107(iParam0->f_16, iParam0->f_12);
	if (IS_ACTOR_VALID(iParam0->f_16))
	{
		GRINGO_REPORT_USE_FINISHED(iParam0->f_16, Function_98(iParam0->f_40, 64));
		Function_30(iParam0->f_16, 0);
		NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 0);
		if (!Function_20(iParam0->f_12, "DoNotCleanUpUserSettings", 0))
		{
			if (Function_98(iParam0->f_40, 128) && Function_20(iParam0->f_12, "RedrawWeapon", 1))
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
			if (Function_52(iParam0->f_12))
			{
				CLEAR_LINKED_ANIM_TARGET(iParam0->f_16);
			}
			if (Function_98(iParam0->f_40, 16))
			{
				Function_99(iParam0);
				Function_54(iParam0 + 40, 16);
			}
			if (Function_98(iParam0->f_40, 8))
			{
				SET_ACTOR_ONE_SHOT_DEATH(iParam0->f_16, false);
			}
			if (Function_106(iParam0->f_12) && Function_98(iParam0->f_40, 512))
			{
				Function_54(iParam0 + 40, 512);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(iParam0->f_16, 1);
				Function_2("Allow Bump Reactions", iParam0->f_16);
			}
		}
		if (IS_ACTOR_LOCAL_PLAYER(iParam0->f_16) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(iParam0->f_12))
		{
			GRINGO_ENABLE_PLAYER_CONTROL(iParam0->f_16, 1);
		}
	}
	bVar5 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, iParam0->f_12, 0);
	while (bVar5 >= 4294967295)
	{
		bVar6 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar5, iParam0->f_12);
		bVar7 = GRINGO_GET_PHYSINST(bVar6);
		if (IS_PHYSINST_VALID(bVar7))
		{
			bVar8 = GET_OBJECT_ANIMATOR_ON_OBJECT(GET_OBJECT_FROM_PHYSINST(bVar7));
			if (IS_OBJECT_ANIMATOR_VALID(bVar8))
			{
				RELEASE_OBJECT_REF(GET_OBJECT_FROM_ANIMATOR(bVar8));
			}
			if (!IS_ACTOR_VALID(iParam0->f_16))
			{
				RESET_PROP(bVar7);
			}
		}
		bVar5 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, iParam0->f_12, bVar5 + 1);
	}
	if (Function_50(iParam0->f_12))
	{
		bVar9 = GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 3);
		if (IS_GRINGO_COMPONENT_VALID(bVar9))
		{
			bVar10 = Function_51(bVar9);
			if (IS_ACTOR_VALID(bVar10))
			{
				CLEAR_LINKED_ANIM_TARGET(bVar10);
			}
		}
	}
	Function_105(iParam0->f_12);
	bVar11 = Function_20(iParam0->f_12, "DisableResetProp", 0);
	if (IS_OBJECT_VALID(GET_TARGET_OBJECT()))
	{
		if (!bVar11 || !IS_ACTOR_VALID(iParam0->f_16))
		{
			Function_104(iParam0, GET_TARGET_OBJECT());
		}
		bVar12 = GET_PHYSINST_FROM_OBJECT(GET_TARGET_OBJECT());
		if (IS_PHYSINST_VALID(bVar12))
		{
			if (Function_98(iParam0->f_40, 256))
			{
				Function_54(iParam0 + 40, 256);
				SET_PROP_FIXED(bVar12, 0);
			}
		}
	}
	if (IS_OBJECT_VALID(iParam0->f_36))
	{
		DESTROY_OBJECT(iParam0->f_36);
	}
	if (iParam0->f_12 == iLocal_85)
	{
		RELEASE_OBJECT_REF(GET_OBJECT_FROM_ANIMATOR(bLocal_84));
		iLocal_85 = iVar13;
	}
	GRINGO_SET_CHILD_USE_ACTIVATIONS(iParam0->f_12, 0);
	if (Function_53(iParam0->f_12))
	{
		GRINGO_SET_COMMON_LAYER_USE_ACTIVATIONS(iParam0->f_12, 1);
	}
	if (IS_ATTACHMENT_VALID(iParam0->f_32))
	{
		REMOVE_OBJECT_ATTACHMENT(iParam0->f_32);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_87))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_87);
	}
	SET_GRINGO_OBJECT_REF_ATTR(bVar14, "UserObject", iParam0->f_12);
	Function_69(iParam0);
	Function_90(iParam0);
	GRINGO_CLEAR_COMPONENT_USER(iParam0->f_12);
	if (IS_ACTOR_VALID(iParam0->f_16) && bParam1)
	{
		Function_2("Setting reuse delay", iParam0->f_16);
		GRINGO_SET_REUSE_DELAY(Function_103(iParam0->f_12), iParam0->f_12);
	}
	Function_54(iParam0 + 40, 2);
	if (GRINGO_HANDLES_MOVEMENT(iParam0->f_12))
	{
		SET_GRINGO_BOOL_ATTR(0, "RandomPointSet", iParam0->f_12);
	}
	if (IS_ACTOR_VALID(iParam0->f_16))
	{
		if (IS_ACTOR_LOCAL_PLAYER(iParam0->f_16))
		{
			Function_101();
		}
	}
	else
	{
		Function_101();
	}
	iParam0->f_44 = 0;
	iParam0->f_16 = "";
	return;
}

void Function_101() //Position: 0x3A39 / 14905
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(GRINGO_GET_MY_OBJECT_REF()))
	{
		bVar0 = FIND_OBJECT_IN_OBJECT(GRINGO_GET_MY_OBJECT_REF(), "GringoCamera");
		if (IS_OBJECT_VALID(bVar0))
		{
			DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(Function_102()), "SaveCameraObject", bVar0);
		}
	}
	return;
}

var Function_102() //Position: 0x3A86 / 14982
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

bool Function_103(bool bParam0) //Position: 0x3A9B / 15003
{
	return Function_24(bParam0, "ReuseDelay", 15.0f);
}

void Function_104(var uParam0, int iParam1) //Position: 0x3AB8 / 15032
{
	var uVar0;
	var uVar1;
	bool bVar2;
	
	Function_63(uParam0->f_12, &uVar0);
	Function_62(uParam0->f_12, &uVar1);
	bVar2 = Function_61(uParam0->f_12);
	if (!((uVar0 || uVar1) || IS_GRINGO_COMPONENT_VALID(bVar2)))
	{
		return;
	}
	GRINGO_PROP_RESET_GRACEFULLY(iParam1);
	return;
}

void Function_105(int iParam0) //Position: 0x3AF0 / 15088
{
	iParam0 = iParam0;
	return;
}

bool Function_106(bool bParam0) //Position: 0x3AFA / 15098
{
	return Function_20(bParam0, "BlockBumpReactions", 0);
}

void Function_107(bool bParam0, var uParam1) //Position: 0x3B1B / 15131
{
	uParam1 = uParam1;
	bParam0 = bParam0;
	if (IS_LAYOUTREF_VALID(bLocal_6))
	{
		DESTROY_LAYOUT_OBJECTS(bLocal_6);
		DESTROY_LAYOUT(bLocal_6);
		CAMERA_RESET(0);
		iLocal_4 = 0;
	}
	Function_109(0);
	Function_108();
	if (IS_ACTOR_VALID(Global_12976.f_36) && !IS_GAME_RESETTING())
	{
		DESTROY_ACTOR(Global_12976.f_36);
		(&Global_12976 + 36)->f_24 = 4294967294;
	}
	DECOR_REMOVE(bParam0, "SAVE_restartFlag");
	DECOR_REMOVE(bParam0, "CanSaveNowCamp");
	DECOR_REMOVE(bParam0, "CanSaveNowBed");
	DECOR_REMOVE(bParam0, "bPlayerSleeping");
	SET_ACTOR_INVULNERABILITY(bParam0, false);
	AI_STOP_IGNORING_ACTOR(bParam0);
	UI_POP("nCutscenes");
	return;
}

void Function_108() //Position: 0x3BE4 / 15332
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_16537)
	{
		if (Global_16537[iVar021].f_40 == 1)
		{
			if (IS_OBJECT_VALID(Global_16537[iVar021].f_80))
			{
				GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(Global_16537[iVar021].f_80), false);
			}
		}
		iVar0++;
	}
	return;
}

void Function_109(bool bParam0) //Position: 0x3C2A / 15402
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_16537)
	{
		if (Global_16537[iVar021].f_40 == 4)
		{
			Global_16537[iVar021].f_40 = 1;
			if (bParam0)
			{
				DECOR_SET_BOOL(Global_34573, "OnLoad_ForceSpawnPlayerHorse", true);
			}
		}
		iVar0++;
	}
	return;
}

void Function_110(bool bParam0, bool bParam1) //Position: 0x3C87 / 15495
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (bParam1)
		{
			Function_128("CheckRemoveQuitAction: Actor valid!");
		}
		if (IS_ACTOR_LOCAL_PLAYER(bParam0))
		{
			if (bParam1)
			{
				Function_128("CheckRemoveQuitAction: Tested for player!");
			}
			if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_87))
			{
				if (bParam1)
				{
					Function_128("CheckRemoveQuitAction: Release quit context - component no longer in use");
				}
				RELEASE_SCRIPT_USE_CONTEXT(bLocal_87);
			}
		}
	}
	if (bParam1)
	{
		Function_128("CheckRemoveQuitAction: Finished check");
	}
	return;
}

void Function_111(bool bParam0, bool bParam1) //Position: 0x3D8F / 15759
{
	LOG_OBJECT3(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), bParam1, bParam0, 0, 0, 0);
	return;
}

void Function_112(int iParam0) //Position: 0x3DA5 / 15781
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
			iParam0->f_36 = CREATE_OBSTACLE_ON_OBJECT(iParam0->f_16, "ngringoObs", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1,75f, 2.0f);
		}
		else
		{
			iParam0->f_36 = CREATE_OBSTACLE_ON_OBJECT(iParam0->f_16, "ngringoObs", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0,5f, 1.0f, 0,5f);
		}
		ATTACH_OBJECTS(iParam0->f_36, iParam0->f_16, Function_56(), 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
	}
	Function_69(iParam0);
	Function_2("Going to eGringoPositioning", iParam0->f_16);
	iParam0->f_44 = 2;
	Function_72(iParam0 + 40, 2);
	Function_54(iParam0 + 40, 8);
	Function_54(iParam0 + 40, 16);
	Function_54(iParam0 + 40, 64);
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
	if (!Function_115(iParam0->f_12))
	{
		if (HAS_INVENTORY_COMPONENT(iParam0->f_16))
		{
			if (ACTOR_HOLSTER_WEAPON(iParam0->f_16, 1))
			{
				Function_72(iParam0 + 40, 32);
			}
			else
			{
				Function_54(iParam0 + 40, 32);
			}
		}
		else
		{
			Function_54(iParam0 + 40, 32);
		}
		if (Function_98(iParam0->f_40, 32))
		{
			Function_72(iParam0 + 40, 128);
		}
		else
		{
			Function_54(iParam0 + 40, 128);
		}
	}
	else
	{
		Function_54(iParam0 + 40, 32);
	}
	if (Function_114(iParam0->f_12))
	{
		if (!ACTOR_PUT_WEAPON_IN_HAND(iParam0->f_16, GET_WEAPON_EQUIPPED(iParam0->f_16, 5), 1))
		{
			if (ACTOR_PUT_WEAPON_IN_HAND(iParam0->f_16, GET_WEAPON_EQUIPPED(iParam0->f_16, true), 1))
			{
				Function_72(iParam0 + 40, 128);
			}
		}
		else
		{
			Function_72(iParam0 + 40, 128);
		}
	}
	if (Function_106(iParam0->f_12))
	{
		if (GET_ACTOR_ALLOW_BUMP_REACTIONS(iParam0->f_16))
		{
			Function_72(iParam0 + 40, 512);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(iParam0->f_16, 0);
			Function_2("Block Bump Reactions", iParam0->f_16);
		}
	}
	if (IS_ACTOR_LOCAL_PLAYER(iParam0->f_16) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(iParam0->f_12))
	{
		GRINGO_ENABLE_PLAYER_CONTROL(iParam0->f_16, 0);
	}
	NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 0);
	Function_113(iParam0->f_16, bVar0);
	Function_2("START: ", iParam0->f_16);
	return;
}

void Function_113(bool bParam0, int iParam1) //Position: 0x405C / 16476
{
	bool bVar0;
	
	bParam0 = bParam0;
	iParam1 = iParam1;
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_2))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_2);
	}
	bLocal_5 = false;
	bVar0 = GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF());
	if (STRING_CONTAINS_STRING(bVar0, "bed_L"))
	{
		bLocal_5 = true;
	}
	SET_ACTOR_INVULNERABILITY(bParam0, true);
	AI_IGNORE_ACTOR(bParam0);
	UI_PUSH("nCutscenes");
	return;
}

bool Function_114(bool bParam0) //Position: 0x40B0 / 16560
{
	return Function_20(bParam0, "DrawWeapon", 0);
}

bool Function_115(bool bParam0) //Position: 0x40C9 / 16585
{
	return Function_20(bParam0, "AllowWeapon", 0);
}

void Function_116(bool bParam0, int iParam1) //Position: 0x40E3 / 16611
{
	var uVar0;
	char* cVar1;
	
	bParam0 = bParam0;
	if (IS_PLAYER_SIGNED_IN() && !(SAVE_MANAGER_IS_SAVING_DISABLED() || SAVE_MANAGER_IS_SP_SAVING_DISABLED()))
	{
		cVar1 = Function_117(iParam1, &uVar0);
	}
	else
	{
		cVar1 = "PlayerSleep_NoSignedIn";
	}
	GRINGO_SET_REQUEST_STRING(cVar1);
	return;
}

bool Function_117(var uParam0, int iParam1) //Position: 0x4128 / 16680
{
	return Function_22(uParam0, "UseName", iParam1);
}

bool Function_118(int iParam0, int iParam1) //Position: 0x413F / 16703
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
		if (ACTOR_HAS_ANIM_SET(bVar1, "stand_hostage") && !Function_20(iParam0->f_12, "CutFreeGringo", 0))
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
				if (!Function_123(6))
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
		if (!Function_122(bVar1, iParam0->f_12))
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
		if (!Function_98(iParam0->f_40, 2))
		{
			if (GRINGO_GET_REQUEST_MID_ACTION())
			{
				Function_72(iParam0 + 40, 1);
			}
			else
			{
				Function_54(iParam0 + 40, 1);
			}
			if (Function_98(iParam0->f_40, 1))
			{
				Function_111("MIDACTION REQUEST", bVar1);
			}
			else
			{
				Function_76(iParam0->f_12);
				vVar9 = { StackVal, StackVal, Function_76(iParam0->f_12) };
				vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar2, vVar9, StackVal) };
				fVar15 = Function_121(iParam0->f_12);
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
				if (!Function_120(bVar1, iParam0->f_12))
				{
					GRINGO_SET_REQUEST_FAILURE_REASON(6);
					return 0;
				}
				bVar33 = Function_119(iParam0->f_12);
				if (!bVar33 != 0.0f)
				{
					if (bVar33 < 0.0f)
					{
						fVar34 = (UNK_0x9C40E671(&vVar12) - Function_75(iParam0->f_12));
					}
					else
					{
						fVar34 = ((180.0f + UNK_0x9C40E671(&vVar12)) - Function_75(iParam0->f_12));
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

bool Function_119(bool bParam0) //Position: 0x4408 / 17416
{
	return Function_24(bParam0, "ActivationCone", 0.0f);
}

bool Function_120(bool bParam0, bool bParam1) //Position: 0x4425 / 17445
{
	struct<5> Var0;
	float fVar5;
	float fVar6;
	
	fVar3 = GRINGO_GET_USE_COMPONENT_HEADING(bParam1);
	bVar4 = GET_HEADING(bParam0);
	fVar5 = Function_24(bParam1, "HeadingTolerance", -1.0f);
	fVar6 = (fVar3 - bVar4);
	if (fVar5 != -1.0f)
	{
		return 1;
	}
	Function_76(bParam1);
	Var0 = { StackVal, StackVal, Function_76(bParam1) };
	GET_POSITION(bParam0, &Var0);
	Var0.f_4 = (StackVal + 1,5f);
	Function_76(bParam1);
	Var0 = { StackVal, StackVal, Function_76(bParam1) };
	Var0.f_4 = (StackVal + 1,5f);
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

bool Function_121(int iParam0) //Position: 0x44C1 / 17601
{
	return Function_24(iParam0, "ActivationRadius", 2.0f);
}

bool Function_122(bool bParam0, int iParam1) //Position: 0x44E0 / 17632
{
	iParam1 = iParam1;
	bParam0 = bParam0;
	if (((((Global_3403 || Global_3404) || Global_3381) || Function_9(0, 0, 1, 1)) || NET_IS_IN_SESSION()) || Function_10())
	{
		return 0;
	}
	if (UI_ISACTIVE("SaveGame_DoNotInterruptMe"))
	{
		return 0;
	}
	if ((DECOR_CHECK_EXIST(bParam0, "CanSaveNowCamp") || DECOR_CHECK_EXIST(bParam0, "CanSaveNowBed")) || DECOR_CHECK_EXIST(bParam0, "SAVE_restartFlag"))
	{
		return 0;
	}
	if (!DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "SavingAtBedAllowed"))
	{
		return 0;
	}
	return 1;
}

bool Function_123(int iParam0) //Position: 0x459E / 17822
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

void Function_124(int iParam0) //Position: 0x45BA / 17850
{
	iParam0 = iParam0;
	return;
}

void Function_125(bool bParam0, int iParam1) //Position: 0x45C4 / 17860
{
	bool bVar0;
	bool bVar1;
	
	if (GRINGO_IS_COMPONENT_OF_TYPE(3, bParam0))
	{
		Function_126(&(Local_7[iLocal_8012]), bParam0);
		iLocal_80++;
	}
	if (GRINGO_GET_CHILD_COMPONENT_COUNT(bParam0) >= 0)
	{
		bVar0 = false;
		bVar0 = GRINGO_GET_INDEX_OF_NEXT_CHILD(0, bParam0, bVar0);
		while (bVar0 <= 0 && *iParam1 > 6)
		{
			bVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar0, bParam0);
			Function_125(bVar1, iParam1);
			bVar0 = GRINGO_GET_INDEX_OF_NEXT_CHILD(0, bParam0, bVar0 + 1);
		}
	}
	return;
}

void Function_126(int iParam0, int iParam1) //Position: 0x4626 / 17958
{
	iParam0->f_12 = iParam1;
	Function_54(iParam0 + 40, 1);
	return;
}

void Function_127(int iParam0) //Position: 0x463A / 17978
{
	iParam0 = iParam0;
	return;
}

void Function_128(int iParam0) //Position: 0x4644 / 17988
{
	LOG_OBJECT2(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), iParam0, 0, 0, 0);
	return;
}

