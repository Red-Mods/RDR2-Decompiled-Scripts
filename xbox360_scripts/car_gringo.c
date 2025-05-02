//Decompiled with MagicRDR v1.0
//Function Count : 26
//Statics Count : 2
//Natives Count : 63
//Parameters Count : 1

#region Local Var
	var uLocal_0 = 0;
	var uScriptParam_0 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	bool bVar1;
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
	bool bVar13;
	bool bVar14;
	vector3 vVar15;
	vector3 vVar18;
	vector3 vVar21;
	var uVar24;
	int iVar27;
	int iVar30;
	int iVar33;
	int iVar36;
	int iVar39;
	
	uScriptParam_0 = uScriptParam_0;
	Function_25(&iVar27, 35.0f);
	iVar39 = 0;
	bVar1 = GET_OBJECT_OWNER(GRINGO_GET_MY_OBJECT_REF());
	if (IS_OBJECT_VALID(bVar1))
	{
		if (GET_OBJECT_TYPE(bVar1) == 15)
		{
			bVar3 = GET_ACTOR_FROM_OBJECT(bVar1);
			ENABLE_VEHICLE_SEAT(bVar3, false, 0);
		}
		else
		{
			LOG_ERROR("Failed to get actor from Car object!");
		}
	}
	else
	{
		LOG_ERROR("Failed to get object handle to Car!");
	}
	while (IS_GRINGO_ACTIVE())
	{
		bVar2 = Function_24();
		bVar1 = GET_OBJECT_OWNER(GRINGO_GET_MY_OBJECT_REF());
		if (IS_OBJECT_VALID(bVar1))
		{
			if (GET_OBJECT_TYPE(bVar1) == 15)
			{
				bVar3 = GET_ACTOR_FROM_OBJECT(bVar1);
			}
			else
			{
				LOG_ERROR("Failed to get actor from Car object!");
			}
		}
		else
		{
			LOG_ERROR("Failed to get object handle to Car!");
		}
		if (IS_ACTOR_VALID(bVar3))
		{
			if (!DECOR_CHECK_EXIST(bVar3, "carSettings"))
			{
				Function_23(bVar3);
			}
			bVar4 = GET_ACTOR_IN_VEHICLE_SEAT(bVar3, false);
			if (IS_ACTOR_VALID(bVar4))
			{
				bVar7 = true;
				if (bVar4 != bVar2)
				{
					bVar8 = true;
				}
				else
				{
					bVar8 = false;
				}
			}
			else
			{
				bVar7 = false;
				if (bVar8)
				{
					bVar6 = false;
				}
				else
				{
					bVar6 = true;
				}
				bVar8 = true;
			}
			switch (iVar39)
			{
				case 0x00000000:
					if (IS_VEHICLE_ENGINE_RUNNING(bVar3))
					{
						Function_22("Car Stalled: Stopping engine (again)!");
						SET_VEHICLE_ENGINE_RUNNING(bVar3, 0);
						Function_21(bVar3, 4);
					}
					GET_ACTOR_AXIS(bVar3, &vVar18, 1);
					if (vVar18.y >= 0,25f)
					{
						bVar1 = FIND_OBJECT_IN_OBJECT(bVar3, "carCrank");
						if (IS_OBJECT_VALID(bVar1))
						{
							bVar5 = GET_GRINGO_FROM_OBJECT(bVar1);
							if (IS_GRINGO_VALID(bVar5))
							{
								if (GRINGO_GET_AVAILABILITY(bVar5, "UseCase1"))
								{
									Function_22("Car Stalled: Deactivating crank (flipped)!");
									GRINGO_SET_AVAILABILITY_EXT(bVar5, "UseCase1", 0);
									if (DECOR_CHECK_EXIST(bVar3, "carCranked"))
									{
										DECOR_REMOVE(bVar3, "carCranked");
									}
								}
							}
						}
					}
					else
					{
						bVar1 = FIND_OBJECT_IN_OBJECT(bVar3, "carCrank");
						if (IS_OBJECT_VALID(bVar1))
						{
							bVar5 = GET_GRINGO_FROM_OBJECT(bVar1);
							if (IS_GRINGO_VALID(bVar5))
							{
								if (!GRINGO_GET_AVAILABILITY(bVar5, "UseCase1"))
								{
									Function_22("Car Stalled: Activating crank (again)!");
									GRINGO_SET_AVAILABILITY_EXT(bVar5, "UseCase1", 1);
								}
							}
						}
					}
					if (DECOR_CHECK_EXIST(bVar3, "carCranked"))
					{
						if (DECOR_GET_BOOL(bVar3, "carCranked"))
						{
							Function_22("Car Starting: 'carCranked' decor set!");
							iVar39 = 1;
						}
					}
					else if (bVar7 && bVar8)
					{
						Function_22("Car Starting: driver is not a player!");
						iVar39 = 1;
					}
					else if (Function_20(bVar3, 4))
					{
						Function_22("Car Starting: 'ENGINE_RUNNING' setting turned on!");
						iVar39 = 1;
					}
					if (!Global_3380 && Function_20(bVar3, 1))
					{
						if (!bVar8 || (!bVar7 && ACTORS_IN_RANGE(bVar2, bVar3, 15.0f)))
						{
							Function_17(&iVar27, 35.0f, "car_help_crank", 10.0f, 1, 0);
						}
					}
					break;
				
				case 0x00000001:
					bVar12 = 100.0f;
					bVar13 = Function_16(bVar3, 0);
					bVar14 = bVar13;
					bVar10 = GET_VEHICLE_BUMP_COUNT(bVar3);
					bVar11 = bVar10;
					Function_15(&iVar27);
					Function_15(&iVar30);
					Function_15(&iVar33);
					Function_15(&iVar36);
					ENABLE_VEHICLE_SEAT(bVar3, false, 1);
					Function_22("Car Starting: Engine started!");
					SET_VEHICLE_ENGINE_RUNNING(bVar3, 1);
					VEHICLE_SET_HANDBRAKE(bVar3, 0.0f);
					SET_VEHICLE_ALLOWED_TO_DRIVE(bVar3, 1);
					Function_14(bVar3, 4);
					bVar1 = FIND_OBJECT_IN_OBJECT(bVar3, "carCrank");
					if (IS_OBJECT_VALID(bVar1))
					{
						bVar5 = GET_GRINGO_FROM_OBJECT(bVar1);
						if (IS_GRINGO_VALID(bVar5))
						{
							Function_22("Car Starting: Crank deactivated!");
							GRINGO_SET_AVAILABILITY_EXT(bVar5, "UseCase1", 0);
							if (DECOR_CHECK_EXIST(bVar3, "carCranked"))
							{
								DECOR_REMOVE(bVar3, "carCranked");
							}
						}
					}
					if (!Global_3380 && Function_20(bVar3, 1))
					{
						if (!bVar8 || (!bVar7 && ACTORS_IN_RANGE(bVar2, bVar3, 15.0f)))
						{
							Function_10("car_help_start", 10.0f, 1);
						}
					}
					Function_22("Car Started: Vroom...Vroom...Vroom!");
					iVar39 = 2;
					break;
				
				case 0x00000002:
					if (!IS_VEHICLE_ENGINE_RUNNING(bVar3))
					{
						Function_22("Car Started: Starting engine (again)!");
						SET_VEHICLE_ENGINE_RUNNING(bVar3, 1);
						VEHICLE_SET_HANDBRAKE(bVar3, 0.0f);
						SET_VEHICLE_ALLOWED_TO_DRIVE(bVar3, 1);
						Function_14(bVar3, 4);
					}
					bVar1 = FIND_OBJECT_IN_OBJECT(bVar3, "carCrank");
					if (IS_OBJECT_VALID(bVar1))
					{
						bVar5 = GET_GRINGO_FROM_OBJECT(bVar1);
						if (IS_GRINGO_VALID(bVar5))
						{
							if (GRINGO_GET_AVAILABILITY(bVar5, "UseCase1"))
							{
								Function_22("Car Started: Deactivating crank (again)!");
								GRINGO_SET_AVAILABILITY_EXT(bVar5, "UseCase1", 0);
								if (DECOR_CHECK_EXIST(bVar3, "carCranked"))
								{
									DECOR_REMOVE(bVar3, "carCranked");
								}
							}
						}
					}
					GET_POSITION(bVar3, &vVar15);
					GET_ACTOR_AXIS(bVar3, &vVar18, 1);
					GET_ACTOR_AXIS(bVar3, &vVar21, 2);
					bVar13 = Function_16(bVar3, 0);
					bVar10 = GET_VEHICLE_BUMP_COUNT(bVar3);
					FIND_GROUND_INTERSECTION_WITH_MATERIAL(&vVar15, 10.0f, &uVar24, &uVar24, &bVar9);
					if (!bVar8 || Function_20(bVar3, 8))
					{
						if (Function_20(bVar3, 16))
						{
							if (vVar18.y >= 0,25f)
							{
								Function_9(&iVar30);
								if (Function_7(&iVar30) <= 5.0f)
								{
									Function_22("Car Engine Health: Flipped too far over!");
									bVar12 = 0.0f;
									Function_15(&iVar30);
								}
							}
							else if (Function_6(&iVar30))
							{
								Function_15(&iVar30);
							}
						}
						else if (Function_6(&iVar30))
						{
							Function_15(&iVar30);
						}
						if (Function_20(bVar3, 32))
						{
							if (Function_5(bVar9, 512))
							{
								Function_9(&iVar33);
								if (Function_7(&iVar33) <= 1.0f)
								{
									Function_22("Car Engine Health: In water for too long!");
									bVar12 = 0.0f;
									Function_15(&iVar33);
								}
							}
							else if (Function_6(&iVar33))
							{
								Function_15(&iVar33);
							}
						}
						else if (Function_6(&iVar33))
						{
							Function_15(&iVar33);
						}
						if (Function_20(bVar3, 64))
						{
							if ((GET_ACTOR_HEALTH(bVar3) / GET_ACTOR_MAX_HEALTH(bVar3)) >= 0,1f)
							{
								Function_22("Car Engine Health: Lost too much health!");
								bVar12 = 0.0f;
							}
						}
						if (Function_20(bVar3, 128))
						{
							if ((!Function_5(bVar9, 16) && !Function_5(bVar9, 32)) && !Function_5(bVar9, 64))
							{
								if (bVar10 >= bVar11)
								{
									Function_22("Car Engine Health: Bumped up/down/left/right!");
									bVar12 = (bVar12 - (IntToFloat(((bVar10 - bVar11) / 1)) * 0,1f));
								}
							}
						}
						if (Function_20(bVar3, 256))
						{
							bVar0 = (bVar14 - bVar13);
							if (bVar0 <= 9,8f)
							{
								Function_22("Car Engine Health: Got into a hard crash!");
								bVar12 = (bVar12 - ((bVar0 / (9,8f * 1.0f)) * 1.0f));
							}
						}
						if (Function_20(bVar3, 512))
						{
							if (vVar21.y >= -0,5f)
							{
								Function_9(&iVar36);
								if (Function_7(&iVar36) <= 2.0f)
								{
									Function_22("Car Engine Health: Too steep a slope!");
									bVar12 = (bVar12 - 0,1f);
									Function_15(&iVar36);
								}
							}
							else if (Function_6(&iVar36))
							{
								Function_15(&iVar36);
							}
						}
						else if (Function_6(&iVar36))
						{
							Function_15(&iVar36);
						}
					}
					else
					{
						if (Function_6(&iVar30))
						{
							Function_15(&iVar30);
						}
						if (Function_6(&iVar33))
						{
							Function_15(&iVar33);
						}
						if (Function_6(&iVar36))
						{
							Function_15(&iVar36);
						}
					}
					if (Function_20(bVar3, 2))
					{
						PRINTSTRING("|| CAR DEBUG BEGIN || CAR DEBUG BEGIN || CAR DEBUG BEGIN || CAR DEBUG BEGIN ||");
						PRINTNL();
						PRINTSTRING("Cur Health		: ");
						PRINTFLOAT(GET_ACTOR_HEALTH(bVar3));
						PRINTNL();
						PRINTSTRING("Max Health		: ");
						PRINTFLOAT(GET_ACTOR_MAX_HEALTH(bVar3));
						PRINTNL();
						PRINTSTRING("Engine Health	: ");
						PRINTFLOAT(bVar12);
						PRINTNL();
						PRINTSTRING("Position		: ");
						PRINTVECTOR(vVar15);
						PRINTNL();
						PRINTSTRING("Up				: ");
						PRINTVECTOR(vVar18);
						PRINTNL();
						PRINTSTRING("Forward		: ");
						PRINTVECTOR(vVar21);
						PRINTNL();
						PRINTSTRING("Cur Speed		: ");
						PRINTFLOAT(bVar13);
						PRINTNL();
						PRINTSTRING("Last Speed		: ");
						PRINTFLOAT(bVar14);
						PRINTNL();
						PRINTSTRING("Acceleration	: ");
						PRINTFLOAT(bVar0);
						PRINTNL();
						PRINTSTRING("Cur Bump Cnt	: ");
						PRINTINT(bVar10);
						PRINTNL();
						PRINTSTRING("Last Bump Cnt	: ");
						PRINTINT(bVar11);
						PRINTNL();
						PRINTSTRING("Bump Cnt Diff	: ");
						PRINTINT((bVar10 - bVar11));
						PRINTNL();
						PRINTSTRING("Help Timer		: ");
						if (Function_6(&iVar27))
						{
							PRINTFLOAT(Function_7(&iVar27));
						}
						else
						{
							PRINTFLOAT(0.0f);
						}
						PRINTNL();
						PRINTSTRING("Flip Timer		: ");
						if (Function_6(&iVar30))
						{
							PRINTFLOAT(Function_7(&iVar30));
						}
						else
						{
							PRINTFLOAT(0.0f);
						}
						PRINTNL();
						PRINTSTRING("Water Timer	: ");
						if (Function_6(&iVar33))
						{
							PRINTFLOAT(Function_7(&iVar33));
						}
						else
						{
							PRINTFLOAT(0.0f);
						}
						PRINTNL();
						PRINTSTRING("Slope Timer	: ");
						if (Function_6(&iVar36))
						{
							PRINTFLOAT(Function_7(&iVar36));
						}
						else
						{
							PRINTFLOAT(0.0f);
						}
						PRINTNL();
						if (bVar9 == 4294967295)
						{
							PRINTSTRING("Material		: AIMATERIALFLAG_INVALID");
							PRINTNL();
						}
						if (bVar9 == 0)
						{
							PRINTSTRING("Material		: AIMATERIALFLAG_ANY");
							PRINTNL();
						}
						if (Function_5(bVar9, 1))
						{
							PRINTSTRING("Material		: AIMATERIALFLAG_TERRAIN");
							PRINTNL();
						}
						if (Function_5(bVar9, 8))
						{
							PRINTSTRING("Material		: AIMATERIALFLAG_GENERICSPAWN");
							PRINTNL();
						}
						if (Function_5(bVar9, 16))
						{
							PRINTSTRING("Material		: AIMATERIALFLAG_PEDPATH");
							PRINTNL();
						}
						if (Function_5(bVar9, 32))
						{
							PRINTSTRING("Material		: AIMATERIALFLAG_HORSEPATH");
							PRINTNL();
						}
						if (Function_5(bVar9, 64))
						{
							PRINTSTRING("Material		: AIMATERIALFLAG_VEHICLEPATH");
							PRINTNL();
						}
						if (Function_5(bVar9, 128))
						{
							PRINTSTRING("Material		: AIMATERIALFLAG_TRAINTRACKS");
							PRINTNL();
						}
						if (Function_5(bVar9, 256))
						{
							PRINTSTRING("Material		: AIMATERIALFLAG_RESERVED");
							PRINTNL();
						}
						if (Function_5(bVar9, 512))
						{
							PRINTSTRING("Material		: AIMATERIALFLAG_WATER");
							PRINTNL();
						}
						PRINTSTRING("||  CAR DEBUG END  ||  CAR DEBUG END  ||  CAR DEBUG END  ||  CAR DEBUG END  ||");
						PRINTNL();
					}
					bVar11 = bVar10;
					bVar14 = bVar13;
					if (bVar8)
					{
						if (bVar6)
						{
							FLASH_SET_INT("testInventory", "staminaValue", false);
						}
					}
					else if (FLASH_GET_INT("testInventory", "staminaValue") != CEIL(bVar12))
					{
						FLASH_SET_INT("testInventory", "staminaValue", CEIL(bVar12));
					}
					if (bVar12 >= 0.0f)
					{
						Function_22("Car Stalling: Engine health below min!");
						iVar39 = 3;
					}
					else if (!Function_20(bVar3, 4))
					{
						Function_22("Car Stalling: 'ENGINE_RUNNING' setting turned off!");
						iVar39 = 3;
					}
					break;
				
				case 0x00000003:
					bVar12 = 0.0f;
					ENABLE_VEHICLE_SEAT(bVar3, false, 0);
					Function_22("Car Stalling: Engine stopped!");
					SET_VEHICLE_ENGINE_RUNNING(bVar3, 0);
					Function_21(bVar3, 4);
					bVar1 = FIND_OBJECT_IN_OBJECT(bVar3, "carCrank");
					if (IS_OBJECT_VALID(bVar1))
					{
						bVar5 = GET_GRINGO_FROM_OBJECT(bVar1);
						if (IS_GRINGO_VALID(bVar5))
						{
							Function_22("Car Stalling: Crank activated!");
							GRINGO_SET_AVAILABILITY_EXT(bVar5, "UseCase1", 1);
						}
					}
					if (!Global_3380 && Function_20(bVar3, 1))
					{
						if (!bVar8 || (!bVar7 && ACTORS_IN_RANGE(bVar2, bVar3, 15.0f)))
						{
							Function_10("car_help_stall", 10.0f, 1);
						}
					}
					Function_1(&iVar27);
					Function_22("Car Stalling: Puttt...Puttt...Puttt!");
					iVar39 = 0;
					break;
				}
		}
		GRINGO_WAIT(250);
	}
	return;
}

void Function_1(int iParam0) //Position: 0x109B / 4251
{
	Function_2(iParam0, 0.0f);
	return;
}

void Function_2(int iParam0, float fParam1) //Position: 0x10A7 / 4263
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_4(iParam0, 1);
	Function_3(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

void Function_3(bool bParam0, int iParam1) //Position: 0x10C8 / 4296
{
	*bParam0 = (*bParam0 - (*bParam0 && iParam1));
	return;
}

void Function_4(bool bParam0, int iParam1) //Position: 0x10DB / 4315
{
	*bParam0 = (*bParam0 || iParam1);
	return;
}

bool Function_5(bool bParam0, int iParam1) //Position: 0x10EA / 4330
{
	return (bParam0 && iParam1) == 0;
}

bool Function_6(int iParam0) //Position: 0x10F7 / 4343
{
	return Function_5(*iParam0, 1);
}

float Function_7(int iParam0) //Position: 0x1104 / 4356
{
	if (Function_6(iParam0))
	{
		if (Function_8(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_8(int iParam0) //Position: 0x11CC / 4556
{
	return Function_5(*iParam0, 2);
}

void Function_9(int iParam0) //Position: 0x11D9 / 4569
{
	if (!Function_6(iParam0))
	{
		Function_2(iParam0, 0.0f);
	}
	return;
}

void Function_10(bool bParam0, float fParam1, int iParam2) //Position: 0x11EE / 4590
{
	switch (iParam2)
	{
		case 0x00000000:
			Function_13(bParam0, fParam1, 0, 2, 1, 0);
			break;
		
		case 0x00000001:
			Function_12(bParam0, fParam1, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000002:
			Function_11(bParam0, fParam1, 1, 2, 0, 0, 0);
			break;
		
		case 0x00000003:
			PRINT_BIG(bParam0, fParam1, 0, 2, 0);
			break;
	}
	return;
}

void Function_11(bool bParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x124C / 4684
{
	int iVar0;
	
	if (bParam4)
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		PRINT_OBJECTIVE_B(bParam0, fParam1, 0, iParam3, iParam2, &Global_3422[Global_626940] + 12, 0, iParam6);
	}
	else
	{
		iVar0 = "";
		PRINT_OBJECTIVE_B(bParam0, fParam1, 0, iParam3, iParam2, iVar0, iParam5, iParam6);
	}
}

void Function_12(int iParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x129F / 4767
{
	int iVar0;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		PRINT_HELP_B(iParam0, fParam1, iParam2, iParam3, iParam4, iParam5, &Global_3422[Global_626940] + 12, iParam6);
	}
	else
	{
		iVar0 = "";
		PRINT_HELP_B(iParam0, fParam1, iParam2, iParam3, iParam4, iParam5, iVar0, iParam6);
	}
}

void Function_13(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x12EA / 4842
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

void Function_14(bool bParam0, int iParam1) //Position: 0x1331 / 4913
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	if (GET_ACTOR_ENUM(bParam0) == 1194 && GET_ACTOR_ENUM(bParam0) == 1193)
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(bParam0, "carSettings"))
	{
		Function_23(bParam0);
	}
	bVar0 = DECOR_GET_INT(bParam0, "carSettings");
	Function_4(&bVar0, iParam1);
	DECOR_SET_INT(bParam0, "carSettings", bVar0);
	return;
}

void Function_15(int iParam0) //Position: 0x13A6 / 5030
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

var Function_16(bool bParam0, bool bParam1) //Position: 0x13BA / 5050
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

int Function_17(var uParam0, float fParam1, var uParam2, var uParam3, var uParam4, bool bParam5) //Position: 0x13D9 / 5081
{
	if (Function_7(uParam0) <= fParam1)
	{
		if (bParam5)
		{
			Function_19();
		}
		if (!Function_18())
		{
			Function_10(uParam2, uParam3, uParam4);
			Function_1(uParam0);
			return 1;
		}
		Function_2(uParam0, (fParam1 - 1.0f));
		return 0;
	}
	return 0;
}

bool Function_18() //Position: 0x141E / 5150
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_19() //Position: 0x144B / 5195
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

bool Function_20(bool bParam0, int iParam1) //Position: 0x1460 / 5216
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (GET_ACTOR_ENUM(bParam0) == 1194 && GET_ACTOR_ENUM(bParam0) == 1193)
	{
		return 0;
	}
	if (!DECOR_CHECK_EXIST(bParam0, "carSettings"))
	{
		Function_23(bParam0);
	}
	bVar0 = DECOR_GET_INT(bParam0, "carSettings");
	return Function_5(bVar0, iParam1);
}

void Function_21(bool bParam0, int iParam1) //Position: 0x14C1 / 5313
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	if (GET_ACTOR_ENUM(bParam0) == 1194 && GET_ACTOR_ENUM(bParam0) == 1193)
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(bParam0, "carSettings"))
	{
		Function_23(bParam0);
	}
	bVar0 = DECOR_GET_INT(bParam0, "carSettings");
	Function_3(&bVar0, iParam1);
	DECOR_SET_INT(bParam0, "carSettings", bVar0);
	return;
}

void Function_22(int iParam0) //Position: 0x1536 / 5430
{
	LOG_OBJECT2(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), iParam0, 0, 0, 0);
	return;
}

void Function_23(bool bParam0) //Position: 0x154A / 5450
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	if (GET_ACTOR_ENUM(bParam0) == 1194 && GET_ACTOR_ENUM(bParam0) == 1193)
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(bParam0, "carSettings"))
	{
		DECOR_SET_INT(bParam0, "carSettings", false);
	}
	bVar0 = DECOR_GET_INT(bParam0, "carSettings");
	Function_4(&bVar0, 1);
	Function_3(&bVar0, 2);
	Function_3(&bVar0, 4);
	Function_4(&bVar0, 8);
	Function_4(&bVar0, 16);
	Function_4(&bVar0, 32);
	Function_4(&bVar0, 64);
	Function_4(&bVar0, 128);
	Function_4(&bVar0, 256);
	Function_4(&bVar0, 512);
	DECOR_SET_INT(bParam0, "carSettings", bVar0);
	return;
}

var Function_24() //Position: 0x160D / 5645
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_25(var uParam0, var uParam1) //Position: 0x1622 / 5666
{
	if (!Function_6(uParam0))
	{
		Function_2(uParam0, uParam1);
	}
	return;
}

