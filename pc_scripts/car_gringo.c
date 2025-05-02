//Decompiled with MagicRDR v1.0
//Function Count : 28
//Statics Count : 4
//Natives Count : 64
//Parameters Count : 2

#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	struct<2> Var15;
	struct<2> Var17;
	struct<2> Var19;
	var uVar21;
	int iVar23;
	int iVar25;
	int iVar27;
	int iVar29;
	int iVar31;
	
	uScriptParam_0 = &uScriptParam_0;
	Function_27(&iVar23, 35.0f);
	iVar31 = 0;
	uVar1 = GET_OBJECT_OWNER(GRINGO_GET_MY_OBJECT_REF());
	if (IS_OBJECT_VALID(&uVar1))
	{
		if (GET_OBJECT_TYPE(&uVar1) == 15)
		{
			uVar3 = GET_ACTOR_FROM_OBJECT(&uVar1);
			ENABLE_VEHICLE_SEAT(&uVar3, 0, 0);
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
		iVar2 = Function_26();
		uVar1 = GET_OBJECT_OWNER(GRINGO_GET_MY_OBJECT_REF());
		if (IS_OBJECT_VALID(&uVar1))
		{
			if (GET_OBJECT_TYPE(&uVar1) == 15)
			{
				uVar3 = GET_ACTOR_FROM_OBJECT(&uVar1);
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
		if (IS_ACTOR_VALID(&uVar3))
		{
			if (!DECOR_CHECK_EXIST(&uVar3, "carSettings"))
			{
				Function_25(&uVar3);
			}
			iVar4 = GET_ACTOR_IN_VEHICLE_SEAT(&uVar3, false);
			if (IS_ACTOR_VALID(&iVar4))
			{
				bVar7 = true;
				if (&iVar4 != &iVar2)
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
			switch (iVar31)
			{
				case 0x00000000:
					if (IS_VEHICLE_ENGINE_RUNNING(&uVar3))
					{
						Function_24("Car Stalled: Stopping engine (again)!");
						SET_VEHICLE_ENGINE_RUNNING(&uVar3, 0);
						Function_23(&uVar3, 4);
					}
					GET_ACTOR_AXIS(&uVar3, &Var17, 1);
					if (StackVal >= 0,25f)
					{
						uVar1 = FIND_OBJECT_IN_OBJECT(&uVar3, "carCrank");
						if (IS_OBJECT_VALID(&uVar1))
						{
							iVar5 = GET_GRINGO_FROM_OBJECT(&uVar1);
							if (IS_GRINGO_VALID(&iVar5))
							{
								if (GRINGO_GET_AVAILABILITY(&iVar5, "UseCase1"))
								{
									Function_24("Car Stalled: Deactivating crank (flipped)!");
									GRINGO_SET_AVAILABILITY_EXT(&iVar5, "UseCase1", 0);
									if (DECOR_CHECK_EXIST(&uVar3, "carCranked"))
									{
										DECOR_REMOVE(&uVar3, "carCranked");
									}
								}
							}
						}
					}
					else
					{
						uVar1 = FIND_OBJECT_IN_OBJECT(&uVar3, "carCrank");
						if (IS_OBJECT_VALID(&uVar1))
						{
							iVar5 = GET_GRINGO_FROM_OBJECT(&uVar1);
							if (IS_GRINGO_VALID(&iVar5))
							{
								if (!GRINGO_GET_AVAILABILITY(&iVar5, "UseCase1"))
								{
									Function_24("Car Stalled: Activating crank (again)!");
									GRINGO_SET_AVAILABILITY_EXT(&iVar5, "UseCase1", 1);
								}
							}
						}
					}
					if (DECOR_CHECK_EXIST(&uVar3, "carCranked"))
					{
						if (DECOR_GET_BOOL(&uVar3, "carCranked"))
						{
							Function_24("Car Starting: 'carCranked' decor set!");
							iVar31 = 1;
						}
					}
					else if (bVar7 && bVar8)
					{
						Function_24("Car Starting: driver is not a player!");
						iVar31 = 1;
					}
					else if (Function_22(&uVar3, 4))
					{
						Function_24("Car Starting: 'ENGINE_RUNNING' setting turned on!");
						iVar31 = 1;
					}
					if (!Global_6623 && Function_22(&uVar3, 1))
					{
						if (!bVar8 || (!bVar7 && ACTORS_IN_RANGE(&iVar2, &uVar3, 15.0f)))
						{
							Function_19(&iVar23, 35.0f, "car_help_crank", 10.0f, 1, 0);
						}
					}
					break;
				
				case 0x00000001:
					bVar12 = 100.0f;
					bVar13 = Function_18(&uVar3, 0);
					bVar14 = bVar13;
					bVar10 = GET_VEHICLE_BUMP_COUNT(&uVar3);
					bVar11 = bVar10;
					Function_17(&iVar23);
					Function_17(&iVar25);
					Function_17(&iVar27);
					Function_17(&iVar29);
					ENABLE_VEHICLE_SEAT(&uVar3, 0, 1);
					Function_24("Car Starting: Engine started!");
					SET_VEHICLE_ENGINE_RUNNING(&uVar3, 1);
					VEHICLE_SET_HANDBRAKE(&uVar3, 0.0f);
					SET_VEHICLE_ALLOWED_TO_DRIVE(&uVar3, 1);
					Function_16(&uVar3, 4);
					uVar1 = FIND_OBJECT_IN_OBJECT(&uVar3, "carCrank");
					if (IS_OBJECT_VALID(&uVar1))
					{
						iVar5 = GET_GRINGO_FROM_OBJECT(&uVar1);
						if (IS_GRINGO_VALID(&iVar5))
						{
							Function_24("Car Starting: Crank deactivated!");
							GRINGO_SET_AVAILABILITY_EXT(&iVar5, "UseCase1", 0);
							if (DECOR_CHECK_EXIST(&uVar3, "carCranked"))
							{
								DECOR_REMOVE(&uVar3, "carCranked");
							}
						}
					}
					if (!Global_6623 && Function_22(&uVar3, 1))
					{
						if (!bVar8 || (!bVar7 && ACTORS_IN_RANGE(&iVar2, &uVar3, 15.0f)))
						{
							Function_10("car_help_start", 10.0f, 1);
						}
					}
					Function_24("Car Started: Vroom...Vroom...Vroom!");
					iVar31 = 2;
					break;
				
				case 0x00000002:
					if (!IS_VEHICLE_ENGINE_RUNNING(&uVar3))
					{
						Function_24("Car Started: Starting engine (again)!");
						SET_VEHICLE_ENGINE_RUNNING(&uVar3, 1);
						VEHICLE_SET_HANDBRAKE(&uVar3, 0.0f);
						SET_VEHICLE_ALLOWED_TO_DRIVE(&uVar3, 1);
						Function_16(&uVar3, 4);
					}
					uVar1 = FIND_OBJECT_IN_OBJECT(&uVar3, "carCrank");
					if (IS_OBJECT_VALID(&uVar1))
					{
						iVar5 = GET_GRINGO_FROM_OBJECT(&uVar1);
						if (IS_GRINGO_VALID(&iVar5))
						{
							if (GRINGO_GET_AVAILABILITY(&iVar5, "UseCase1"))
							{
								Function_24("Car Started: Deactivating crank (again)!");
								GRINGO_SET_AVAILABILITY_EXT(&iVar5, "UseCase1", 0);
								if (DECOR_CHECK_EXIST(&uVar3, "carCranked"))
								{
									DECOR_REMOVE(&uVar3, "carCranked");
								}
							}
						}
					}
					GET_POSITION(&uVar3, &Var15);
					GET_ACTOR_AXIS(&uVar3, &Var17, 1);
					GET_ACTOR_AXIS(&uVar3, &Var19, 2);
					bVar13 = Function_18(&uVar3, 0);
					bVar10 = GET_VEHICLE_BUMP_COUNT(&uVar3);
					FIND_GROUND_INTERSECTION_WITH_MATERIAL(&Var15, 10.0f, &uVar21, &uVar21, &bVar9);
					if (!bVar8 || Function_22(&uVar3, 8))
					{
						if (Function_22(&uVar3, 16))
						{
							if (StackVal >= 0,25f)
							{
								Function_9(&iVar25);
								if (Function_7(&iVar25) <= 5.0f)
								{
									Function_24("Car Engine Health: Flipped too far over!");
									bVar12 = 0.0f;
									Function_17(&iVar25);
								}
							}
							else if (Function_6(&iVar25))
							{
								Function_17(&iVar25);
							}
						}
						else if (Function_6(&iVar25))
						{
							Function_17(&iVar25);
						}
						if (Function_22(&uVar3, 32))
						{
							if (Function_5(bVar9, 512))
							{
								Function_9(&iVar27);
								if (Function_7(&iVar27) <= 1.0f)
								{
									Function_24("Car Engine Health: In water for too long!");
									bVar12 = 0.0f;
									Function_17(&iVar27);
								}
							}
							else if (Function_6(&iVar27))
							{
								Function_17(&iVar27);
							}
						}
						else if (Function_6(&iVar27))
						{
							Function_17(&iVar27);
						}
						if (Function_22(&uVar3, 64))
						{
							if ((GET_ACTOR_HEALTH(&uVar3) / GET_ACTOR_MAX_HEALTH(&uVar3)) >= 0,1f)
							{
								Function_24("Car Engine Health: Lost too much health!");
								bVar12 = 0.0f;
							}
						}
						if (Function_22(&uVar3, 128))
						{
							if ((!Function_5(bVar9, 16) && !Function_5(bVar9, 32)) && !Function_5(bVar9, 64))
							{
								if (bVar10 >= bVar11)
								{
									Function_24("Car Engine Health: Bumped up/down/left/right!");
									bVar12 = (bVar12 - (IntToFloat(((bVar10 - bVar11) / 1)) * 0,1f));
								}
							}
						}
						if (Function_22(&uVar3, 256))
						{
							bVar0 = (bVar14 - bVar13);
							if (bVar0 <= 9,8f)
							{
								Function_24("Car Engine Health: Got into a hard crash!");
								bVar12 = (bVar12 - ((bVar0 / (9,8f * 1.0f)) * 1.0f));
							}
						}
						if (Function_22(&uVar3, 512))
						{
							if (StackVal >= -0,5f)
							{
								Function_9(&iVar29);
								if (Function_7(&iVar29) <= 2.0f)
								{
									Function_24("Car Engine Health: Too steep a slope!");
									bVar12 = (bVar12 - 0,1f);
									Function_17(&iVar29);
								}
							}
							else if (Function_6(&iVar29))
							{
								Function_17(&iVar29);
							}
						}
						else if (Function_6(&iVar29))
						{
							Function_17(&iVar29);
						}
					}
					else
					{
						if (Function_6(&iVar25))
						{
							Function_17(&iVar25);
						}
						if (Function_6(&iVar27))
						{
							Function_17(&iVar27);
						}
						if (Function_6(&iVar29))
						{
							Function_17(&iVar29);
						}
					}
					if (Function_22(&uVar3, 2))
					{
						PRINTSTRING("|| CAR DEBUG BEGIN || CAR DEBUG BEGIN || CAR DEBUG BEGIN || CAR DEBUG BEGIN ||");
						PRINTNL();
						PRINTSTRING("Cur Health		: ");
						PRINTFLOAT(GET_ACTOR_HEALTH(&uVar3));
						PRINTNL();
						PRINTSTRING("Max Health		: ");
						PRINTFLOAT(GET_ACTOR_MAX_HEALTH(&uVar3));
						PRINTNL();
						PRINTSTRING("Engine Health	: ");
						PRINTFLOAT(bVar12);
						PRINTNL();
						PRINTSTRING("Position		: ");
						PRINTVECTOR(Var15);
						PRINTNL();
						PRINTSTRING("Up				: ");
						PRINTVECTOR(Var17);
						PRINTNL();
						PRINTSTRING("Forward		: ");
						PRINTVECTOR(Var19);
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
						if (Function_6(&iVar23))
						{
							PRINTFLOAT(Function_7(&iVar23));
						}
						else
						{
							PRINTFLOAT(0.0f);
						}
						PRINTNL();
						PRINTSTRING("Flip Timer		: ");
						if (Function_6(&iVar25))
						{
							PRINTFLOAT(Function_7(&iVar25));
						}
						else
						{
							PRINTFLOAT(0.0f);
						}
						PRINTNL();
						PRINTSTRING("Water Timer	: ");
						if (Function_6(&iVar27))
						{
							PRINTFLOAT(Function_7(&iVar27));
						}
						else
						{
							PRINTFLOAT(0.0f);
						}
						PRINTNL();
						PRINTSTRING("Slope Timer	: ");
						if (Function_6(&iVar29))
						{
							PRINTFLOAT(Function_7(&iVar29));
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
						Function_24("Car Stalling: Engine health below min!");
						iVar31 = 3;
					}
					else if (!Function_22(&uVar3, 4))
					{
						Function_24("Car Stalling: 'ENGINE_RUNNING' setting turned off!");
						iVar31 = 3;
					}
					break;
				
				case 0x00000003:
					bVar12 = 0.0f;
					ENABLE_VEHICLE_SEAT(&uVar3, 0, 0);
					Function_24("Car Stalling: Engine stopped!");
					SET_VEHICLE_ENGINE_RUNNING(&uVar3, 0);
					Function_23(&uVar3, 4);
					uVar1 = FIND_OBJECT_IN_OBJECT(&uVar3, "carCrank");
					if (IS_OBJECT_VALID(&uVar1))
					{
						iVar5 = GET_GRINGO_FROM_OBJECT(&uVar1);
						if (IS_GRINGO_VALID(&iVar5))
						{
							Function_24("Car Stalling: Crank activated!");
							GRINGO_SET_AVAILABILITY_EXT(&iVar5, "UseCase1", 1);
						}
					}
					if (!Global_6623 && Function_22(&uVar3, 1))
					{
						if (!bVar8 || (!bVar7 && ACTORS_IN_RANGE(&iVar2, &uVar3, 15.0f)))
						{
							Function_10("car_help_stall", 10.0f, 1);
						}
					}
					Function_1(&iVar23);
					Function_24("Car Stalling: Puttt...Puttt...Puttt!");
					iVar31 = 0;
					break;
				}
		}
		GRINGO_WAIT(250);
	}
	return;
}

void Function_1(int iParam0) //Position: 0x110E / 4366
{
	Function_2(&iParam0, 0.0f);
	return;
}

void Function_2(vector3 vParam0) //Position: 0x111B / 4379
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_4(&vParam0, 1);
	Function_3(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_3(bool bParam0, int iParam1) //Position: 0x1140 / 4416
{
	bParam0 = (bParam0 - (bParam0 && iParam1));
	return;
}

void Function_4(bool bParam0, int iParam1) //Position: 0x1156 / 4438
{
	bParam0 = (bParam0 || iParam1);
	return;
}

bool Function_5(bool bParam0, int iParam1) //Position: 0x1167 / 4455
{
	return (bParam0 && iParam1) == 0;
}

bool Function_6(int iParam0) //Position: 0x1174 / 4468
{
	return Function_5(iParam0, 1);
}

float Function_7(vector3 vParam0) //Position: 0x1182 / 4482
{
	if (Function_6(&vParam0))
	{
		if (Function_8(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_8(int iParam0) //Position: 0x124F / 4687
{
	return Function_5(iParam0, 2);
}

void Function_9(int iParam0) //Position: 0x125D / 4701
{
	if (!Function_6(&iParam0))
	{
		Function_2(&iParam0, 0.0f);
	}
	return;
}

void Function_10(var uParam0, float fParam1, bool bParam2) //Position: 0x1274 / 4724
{
	switch (&bParam2)
	{
		case 0x00000000:
			Function_15(&uParam0, fParam1, 0, 2, 1, 0);
			break;
		
		case 0x00000001:
			Function_14(&uParam0, fParam1, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000002:
			Function_11(&uParam0, fParam1, 1, 2, 0, 0, 0, 0);
			break;
		
		case 0x00000003:
			PRINT_BIG(&uParam0, fParam1, 0, 2, 0);
			break;
	}
	return;
}

void Function_11(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, var uParam5, var uParam6, var uParam7) //Position: 0x12D8 / 4824
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
			Var0 = { StackVal, StackVal, StackVal, Function_12(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&uParam0, &uParam1, &uParam7, &uParam3, &uParam2, &Var0, 0, &uParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&uParam0, &uParam1, &uParam7, &uParam3, &uParam2, &uVar4, &uParam5, &uParam6);
	}
}

struct<16> Function_12(int iParam0) //Position: 0x136D / 4973
{
	char* cVar0[16];
	
	if (!Function_13())
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

bool Function_13() //Position: 0x13AC / 5036
{
	if (Function_5(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_14(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x13C7 / 5063
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_12(Global_10966) };
		}
		PRINT_HELP_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5, &Var0, &uParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5, &uVar4, &uParam6);
	}
}

void Function_15(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x1452 / 5202
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_12(Global_10966) };
		}
		PRINT_SMALL_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &Var0, &uParam5);
	}
	else
	{
		uVar4 = "";
		PRINT_SMALL_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uVar4, &uParam5);
	}
}

void Function_16(var uParam0, int iParam1) //Position: 0x14D7 / 5335
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	if (GET_ACTOR_ENUM(&uParam0) == 1194 && GET_ACTOR_ENUM(&uParam0) == 1193)
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(&uParam0, "carSettings"))
	{
		Function_25(&uParam0);
	}
	bVar0 = DECOR_GET_INT(&uParam0, "carSettings");
	Function_4(&bVar0, iParam1);
	DECOR_SET_INT(&uParam0, "carSettings", bVar0);
	return;
}

void Function_17(vector3 vParam0) //Position: 0x1553 / 5459
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

var Function_18(var uParam0, bool bParam1) //Position: 0x156A / 5482
{
	struct<2> Var0;
	
	GET_ACTOR_VELOCITY(&uParam0, &Var0);
	if (&bParam1)
	{
		Var0.f_4 = 0.0f;
	}
	return VMAG(Var0);
}

int Function_19(var uParam0, float fParam1, var uParam2, var uParam3, var uParam4, bool bParam5) //Position: 0x158B / 5515
{
	if (Function_7(&uParam0) <= fParam1)
	{
		if (&bParam5)
		{
			Function_21();
		}
		if (!Function_20())
		{
			Function_10(&uParam2, &uParam3, &uParam4);
			Function_1(&uParam0);
			return 1;
		}
		Function_2(&uParam0, (fParam1 - 1.0f));
		return 0;
	}
	return 0;
}

bool Function_20() //Position: 0x15D7 / 5591
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_21() //Position: 0x1604 / 5636
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

bool Function_22(var uParam0, int iParam1) //Position: 0x1619 / 5657
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return 0;
	}
	if (GET_ACTOR_ENUM(&uParam0) == 1194 && GET_ACTOR_ENUM(&uParam0) == 1193)
	{
		return 0;
	}
	if (!DECOR_CHECK_EXIST(&uParam0, "carSettings"))
	{
		Function_25(&uParam0);
	}
	bVar0 = DECOR_GET_INT(&uParam0, "carSettings");
	return Function_5(bVar0, iParam1);
}

void Function_23(var uParam0, int iParam1) //Position: 0x1680 / 5760
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	if (GET_ACTOR_ENUM(&uParam0) == 1194 && GET_ACTOR_ENUM(&uParam0) == 1193)
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(&uParam0, "carSettings"))
	{
		Function_25(&uParam0);
	}
	bVar0 = DECOR_GET_INT(&uParam0, "carSettings");
	Function_3(&bVar0, iParam1);
	DECOR_SET_INT(&uParam0, "carSettings", bVar0);
	return;
}

void Function_24(int iParam0) //Position: 0x16FC / 5884
{
	LOG_OBJECT2(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), &iParam0, 0, 0, 0);
	return;
}

void Function_25(var uParam0) //Position: 0x1711 / 5905
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	if (GET_ACTOR_ENUM(&uParam0) == 1194 && GET_ACTOR_ENUM(&uParam0) == 1193)
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(&uParam0, "carSettings"))
	{
		DECOR_SET_INT(&uParam0, "carSettings", false);
	}
	bVar0 = DECOR_GET_INT(&uParam0, "carSettings");
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
	DECOR_SET_INT(&uParam0, "carSettings", bVar0);
	return;
}

var Function_26() //Position: 0x17DB / 6107
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_27(var uParam0, var uParam1) //Position: 0x17F0 / 6128
{
	if (!Function_6(&uParam0))
	{
		Function_2(&uParam0, uParam1);
	}
	return;
}

