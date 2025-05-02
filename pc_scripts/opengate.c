//Decompiled with MagicRDR v1.0
//Function Count : 19
//Statics Count : 2
//Natives Count : 38
//Parameters Count : 2

#region Local Var
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	struct<117> Var0;
	
	uVar17 = GRINGO_GET_FIRST_CHILD(1, &uScriptParam_0);
	if (IS_GRINGO_COMPONENT_VALID(&uVar17))
	{
		uVar18 = &uVar17;
	}
	else
	{
		uVar18 = &uScriptParam_0;
	}
	uVar19 = GRINGO_GET_FIRST_NAMED_CHILD("UseCase1", 3, &uVar18);
	Function_18(&Var0, &uVar19);
	while (IS_GRINGO_ACTIVE())
	{
		if (GRINGO_HAS_PENDING_MESSAGE())
		{
			bVar20 = false;
			bVar21 = false;
			switch (GRINGO_GET_MESSAGE_TYPE())
			{
				case 0x00000000:
					if (Function_14(&Var0, &bVar21))
					{
						bVar20 = true;
					}
					break;
				
				case 0x00000001:
					if (Function_14(&Var0, &bVar21))
					{
						bVar20 = true;
						if (bVar21)
						{
							Function_13(&Var0);
						}
					}
					break;
				
				case 0x00000002:
					break;
			}
			GRINGO_SET_MESSAGE_RETURN(bVar20);
			if (bVar20)
			{
				Function_12(&Var0 + 88);
				Function_8(&Var0 + 88);
				GRINGO_SET_REQUEST_STRING(&Var0 + 40);
			}
		}
		if (Var0.f_116)
		{
			Var0.f_116 = Function_3(&Var0);
			if (!Var0.f_116)
			{
				Function_1(&Var0);
			}
		}
		if (Var0.f_116)
		{
			GRINGO_WAIT(20);
		}
		else
		{
			GRINGO_STOP();
		}
	}
	if (Var0.f_116)
	{
		Function_1(&Var0);
		Var0.f_116 = 0;
	}
	return;
}

void Function_1(struct<125> Param0) //Position: 0x101 / 257
{
	if (IS_ACTOR_VALID(&Param0 + 64))
	{
		Param0.f_124 = 0;
		Function_2(&Param0);
		GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS(&Param0 + 64);
		GRINGO_REPORT_USE_FINISHED(&Param0 + 64, true);
	}
	Function_12(&Param0 + 72);
	Function_8(&Param0 + 72);
	SET_GRINGO_BOOL_ATTR(0, "IsComponentInUse", &Param0 + 24);
	return;
}

void Function_2(struct<125> Param0) //Position: 0x162 / 354
{
	switch (Param0.f_124)
	{
		case 0x00000000:
			REPORT_GRINGO_USE_PHASE(&Param0 + 64, 0);
			break;
		
		case 0x00000001:
			REPORT_GRINGO_USE_PHASE(&Param0 + 64, 1);
			break;
		
		case 0x00000002:
			REPORT_GRINGO_USE_PHASE(&Param0 + 64, 4);
			break;
		
		case 0x00000003:
			REPORT_GRINGO_USE_PHASE(&Param0 + 64, 6);
			break;
		
		case 0x00000004:
			REPORT_GRINGO_USE_PHASE(&Param0 + 64, 7);
			break;
	}
	return;
}

int Function_3(struct<129> Param0) //Position: 0x1D1 / 465
{
	var uVar0;
	var uVar1;
	bool bVar3;
	struct<2> Var4;
	var uVar6;
	struct<2> Var8;
	
	if (!(IS_ACTOR_VALID(&Param0 + 64) && IS_ACTOR_ALIVE(&Param0 + 64)))
	{
		return 0;
	}
	switch (Param0.f_124)
	{
		case 0x00000001:
			if (Function_4(&Param0 + 72) < Param0.f_52)
			{
				Param0.f_124 = 2;
			}
			else
			{
				GET_GRINGO_RELATIVE_POSITION_ATTR(&Var4, "CentreLocator", &Param0 + 24);
				if (GET_GRINGO_RELATIVE_ORIENTATION_ATTR(&uVar6, "UseDirection", &Param0 + 24))
				{
					bVar3 = UNK_0x9C40E671(&uVar6);
					if (GRINGO_ACTOR_MOVE_TO_AND_FACE(&Param0 + 64, &Var4, Param0.f_60, 0,1f, 1, bVar3, Param0.f_56, 0, 0))
					{
						Param0.f_124 = 2;
					}
				}
				else
				{
					uVar1 = Vector(StackVal, StackVal, StackVal) - Vector(*(&Param0 + 104), Var4, StackVal);
					bVar3 = UNK_0x9C40E671(&uVar1);
					if (GRINGO_ACTOR_FACE(&Param0 + 64, bVar3, 20.0f))
					{
						Param0.f_124 = 2;
					}
				}
			}
			break;
		
		case 0x00000002:
			Function_12(&Param0 + 72);
			Function_8(&Param0 + 72);
			uVar0 = GRINGO_GET_FIRST_NAMED_CHILD("UseAnim", 2, &Param0 + 24);
			GRINGO_PLAY_ANIM_ON_ACTOR(&Param0 + 64, &uVar0, false);
			Param0.f_124 = 3;
			break;
		
		case 0x00000003:
			if (Function_4(&Param0 + 72) <= Param0.f_128)
			{
				GRINGO_SATISFY_MOTIVES_OF_ACTOR(&Param0 + 64, &Param0 + 24);
			}
			if (Function_4(&Param0 + 88) < Param0.f_12)
			{
				return 0;
			}
			GET_POSITION(&Param0 + 64, &Var8);
			if (StackVal < VDIST(Var8, *(&Param0 + 104)))
			{
				return 0;
			}
			if (Function_4(&Param0 + 72) < Param0)
			{
				Param0.f_124 = 4;
			}
			break;
		
		case 0x00000004:
			if (Param0.f_120)
			{
				GRINGO_REWARD_ACTOR(&Param0 + 32, Param0.f_48, &Param0 + 64);
			}
			SET_GRINGO_BOOL_ATTR(1, "is_anim_done", &Param0 + 24);
			return 0;
			break;
	}
	Function_2(&Param0);
	return 1;
}

float Function_4(vector3 vParam0) //Position: 0x3BA / 954
{
	if (Function_7(&vParam0))
	{
		if (Function_5(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_5(int iParam0) //Position: 0x487 / 1159
{
	return Function_6(iParam0, 2);
}

bool Function_6(var uParam0, int iParam1) //Position: 0x495 / 1173
{
	return (uParam0 && iParam1) == 0;
}

bool Function_7(int iParam0) //Position: 0x4A2 / 1186
{
	return Function_6(iParam0, 1);
}

void Function_8(int iParam0) //Position: 0x4B0 / 1200
{
	if (!Function_7(&iParam0))
	{
		Function_9(&iParam0, 0.0f);
	}
	return;
}

void Function_9(vector3 vParam0) //Position: 0x4C7 / 1223
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_11(&vParam0, 1);
	Function_10(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_10(var uParam0, int iParam1) //Position: 0x4EC / 1260
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

void Function_11(var uParam0, int iParam1) //Position: 0x502 / 1282
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_12(vector3 vParam0) //Position: 0x513 / 1299
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

void Function_13(struct<125> Param0) //Position: 0x52A / 1322
{
	var uVar0;
	
	*(&Param0 + 64) = GRINGO_GET_REQUESTING_ACTOR();
	if (IS_ACTOR_VALID(&Param0 + 64))
	{
		uVar0 = GRINGO_GET_MSG_COMPONENT_CONTEXT();
		*(&Param0 + 24) = &uVar0;
		GET_GRINGO_FLOAT_ATTR(&Param0, "UseTime", &uVar0);
		Function_12(&Param0 + 72);
		Function_8(&Param0 + 72);
		Param0.f_124 = 1;
		GET_POSITION(&Param0 + 64, &Param0 + 104);
		Param0.f_116 = 1;
		SET_GRINGO_BOOL_ATTR(1, "IsComponentInUse", &Param0 + 24);
		Function_2(&Param0);
	}
	return;
}

bool Function_14(struct<117> Param0) //Position: 0x5B6 / 1462
{
	var uVar0;
	var uVar1;
	struct<2> Var2;
	struct<2> Var4;
	struct<2> Var6;
	
	uVar0 = GRINGO_GET_MSG_COMPONENT_CONTEXT();
	if (IS_GRINGO_COMPONENT_VALID(&uVar0))
	{
		if (!Param0.f_116)
		{
			if (Function_7(&Param0 + 72))
			{
				if (Function_4(&Param0 + 72) > Param0.f_16)
				{
					return 0;
				}
			}
			uVar1 = GRINGO_GET_REQUESTING_ACTOR();
			if (!GRINGO_IS_CAPABLE_OF_USE(&uVar1, &uVar0))
			{
				return 0;
			}
			GET_GRINGO_RELATIVE_POSITION_ATTR(&Var2, "CentreLocator", &Param0 + 24);
			GET_POSITION(&uVar1, &Var4);
			Var6 = Vector(StackVal, StackVal, StackVal) - Vector(Var4, Var2, StackVal);
			if (StackVal < VMAG(Var6))
			{
				return 0;
			}
			if (&Param0 + 64 != GRINGO_GET_REQUESTING_ACTOR() && bParam1 != 0)
			{
				if (Function_4(&Param0 + 72) <= Param0.f_16)
				{
					bParam1 = 1;
					return 1;
				}
				return 0;
			}
			bParam1 = 1;
			return 1;
		}
		if (&Param0 + 64 == GRINGO_GET_REQUESTING_ACTOR())
		{
			bParam1 = 0;
			return 1;
		}
	}
	Function_15("Gringo use component not valid!", 2.0f, 0, 2, 1, 0);
	return 0;
}

void Function_15(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x6C2 / 1730
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_16(Global_10966) };
		}
		PRINT_SMALL_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &Var0, &uParam5);
	}
	else
	{
		uVar4 = "";
		PRINT_SMALL_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uVar4, &uParam5);
	}
}

struct<16> Function_16(int iParam0) //Position: 0x747 / 1863
{
	char* cVar0[16];
	
	if (!Function_17())
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

bool Function_17() //Position: 0x786 / 1926
{
	if (Function_6(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_18(struct<129> Param0) //Position: 0x7A1 / 1953
{
	int iVar0;
	
	(&Param0 + 24) = &uParam1;
	Param0 = 5.0f;
	Param0.f_4 = 0,5f;
	Param0.f_8 = 1.0f;
	Param0.f_12 = 1.0f;
	Param0.f_16 = 15.0f;
	Param0.f_48 = 20;
	Param0.f_52 = 0,5f;
	Param0.f_56 = 0.0f;
	Param0.f_60 = 0.0f;
	Param0.f_128 = 0.0f;
	GET_GRINGO_FLOAT_ATTR(&Param0, "UseTime", &uParam1);
	GET_GRINGO_FLOAT_ATTR(&Param0 + 4, "MoveAllowance", &uParam1);
	GET_GRINGO_FLOAT_ATTR(&Param0 + 8, "ActivationRadius", &uParam1);
	GET_GRINGO_FLOAT_ATTR(&Param0 + 12, "AutoDisengageTime", &uParam1);
	GET_GRINGO_FLOAT_ATTR(&Param0 + 16, "ReuseDelay", &uParam1);
	GET_GRINGO_INT_ATTR(&Param0 + 48, "CompletionRewardAmount", &uParam1);
	GET_GRINGO_FLOAT_ATTR(&Param0 + 52, "StartingPhaseTimeout", &uParam1);
	GET_GRINGO_FLOAT_ATTR(&Param0 + 56, "UseDirectionToleranceDegrees", &uParam1);
	GET_GRINGO_FLOAT_ATTR(&Param0 + 60, "UseLocationTolerance", &uParam1);
	GET_GRINGO_FLOAT_ATTR(&Param0 + 128, "MinimumUseTime", &uParam1);
	iVar0 = 0;
	*(&Param0 + 32) = GET_GRINGO_STRING_ATTR("CompletionReward", &uParam1, &iVar0);
	if (iVar0 >= 0)
	{
		Param0.f_120 = 1;
	}
	*(&Param0 + 40) = GET_GRINGO_STRING_ATTR("UseName", &uParam1, &iVar0);
	return;
}

