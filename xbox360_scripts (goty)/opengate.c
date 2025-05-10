//Decompiled with MagicRDR v1.0
//Function Count : 19
//Statics Count : 1
//Natives Count : 38
//Parameters Count : 1

#region Local Var
	bool bScriptParam_0 = false;
#endregion

void main() //Position: 0x0 / 0
{
	struct<89> Var0;
	
	bVar26 = GRINGO_GET_FIRST_CHILD(1, bScriptParam_0);
	if (IS_GRINGO_COMPONENT_VALID(bVar26))
	{
		bVar27 = bVar26;
	}
	else
	{
		bVar27 = bScriptParam_0;
	}
	iVar28 = GRINGO_GET_FIRST_NAMED_CHILD("UseCase1", 3, bVar27);
	Function_18(&Var0, iVar28);
	while (IS_GRINGO_ACTIVE())
	{
		if (GRINGO_HAS_PENDING_MESSAGE())
		{
			bVar29 = false;
			bVar30 = false;
			switch (GRINGO_GET_MESSAGE_TYPE())
			{
				case 0x00000000:
					if (Function_14(&Var0, &bVar30))
					{
						bVar29 = true;
					}
					break;
				
				case 0x00000001:
					if (Function_14(&Var0, &bVar30))
					{
						bVar29 = true;
						if (bVar30)
						{
							Function_13(&Var0);
						}
					}
					break;
				
				case 0x00000002:
					break;
			}
			GRINGO_SET_MESSAGE_RETURN(bVar29);
			if (bVar29)
			{
				Function_12(&Var0 + 64);
				Function_8(&Var0 + 64);
				GRINGO_SET_REQUEST_STRING(Var0.f_28);
			}
		}
		if (Var0.f_88)
		{
			Var0.f_88 = Function_3(&Var0);
			if (!Var0.f_88)
			{
				Function_1(&Var0);
			}
		}
		if (Var0.f_88)
		{
			GRINGO_WAIT(20);
		}
		else
		{
			GRINGO_STOP();
		}
	}
	if (Var0.f_88)
	{
		Function_1(&Var0);
		Var0.f_88 = 0;
	}
	return;
}

void Function_1(int iParam0) //Position: 0xF6 / 246
{
	if (IS_ACTOR_VALID(iParam0->f_48))
	{
		iParam0->f_96 = 0;
		Function_2(iParam0);
		GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS(iParam0->f_48);
		GRINGO_REPORT_USE_FINISHED(iParam0->f_48, true);
	}
	Function_12(iParam0 + 52);
	Function_8(iParam0 + 52);
	SET_GRINGO_BOOL_ATTR(0, "IsComponentInUse", iParam0->f_20);
	return;
}

void Function_2(int iParam0) //Position: 0x14B / 331
{
	switch (iParam0->f_96)
	{
		case 0x00000000:
			REPORT_GRINGO_USE_PHASE(iParam0->f_48, 0);
			break;
		
		case 0x00000001:
			REPORT_GRINGO_USE_PHASE(iParam0->f_48, 1);
			break;
		
		case 0x00000002:
			REPORT_GRINGO_USE_PHASE(iParam0->f_48, 4);
			break;
		
		case 0x00000003:
			REPORT_GRINGO_USE_PHASE(iParam0->f_48, 6);
			break;
		
		case 0x00000004:
			REPORT_GRINGO_USE_PHASE(iParam0->f_48, 7);
			break;
	}
	return;
}

int Function_3(int iParam0) //Position: 0x1AF / 431
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	vector3 vVar5;
	var uVar8;
	vector3 vVar11;
	
	if (!(IS_ACTOR_VALID(iParam0->f_48) && IS_ACTOR_ALIVE(iParam0->f_48)))
	{
		return 0;
	}
	switch (iParam0->f_96)
	{
		case 0x00000001:
			if (Function_4(iParam0 + 52) < iParam0->f_36)
			{
				iParam0->f_96 = 2;
			}
			else
			{
				GET_GRINGO_RELATIVE_POSITION_ATTR(&vVar5, "CentreLocator", iParam0->f_20);
				if (GET_GRINGO_RELATIVE_ORIENTATION_ATTR(&uVar8, "UseDirection", iParam0->f_20))
				{
					bVar4 = UNK_0x9C40E671(&uVar8);
					if (GRINGO_ACTOR_MOVE_TO_AND_FACE(iParam0->f_48, &vVar5, iParam0->f_44, 0.1f, 1, bVar4, iParam0->f_40, 0, 0))
					{
						iParam0->f_96 = 2;
					}
				}
				else
				{
					vVar1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*(iParam0 + 76), vVar5, StackVal) };
					bVar4 = UNK_0x9C40E671(&vVar1);
					if (GRINGO_ACTOR_FACE(iParam0->f_48, bVar4, 20.0f))
					{
						iParam0->f_96 = 2;
					}
				}
			}
			break;
		
		case 0x00000002:
			Function_12(iParam0 + 52);
			Function_8(iParam0 + 52);
			bVar0 = GRINGO_GET_FIRST_NAMED_CHILD("UseAnim", 2, iParam0->f_20);
			GRINGO_PLAY_ANIM_ON_ACTOR(iParam0->f_48, bVar0, false);
			iParam0->f_96 = 3;
			break;
		
		case 0x00000003:
			if (Function_4(iParam0 + 52) <= iParam0->f_100)
			{
				GRINGO_SATISFY_MOTIVES_OF_ACTOR(iParam0->f_48, iParam0->f_20);
			}
			if (Function_4(iParam0 + 64) < iParam0->f_12)
			{
				return 0;
			}
			GET_POSITION(iParam0->f_48, &vVar11);
			if (StackVal < VDIST(vVar11, *(iParam0 + 76)))
			{
				return 0;
			}
			if (Function_4(iParam0 + 52) < *iParam0)
			{
				iParam0->f_96 = 4;
			}
			break;
		
		case 0x00000004:
			if (iParam0->f_92)
			{
				GRINGO_REWARD_ACTOR(iParam0->f_24, iParam0->f_32, iParam0->f_48);
			}
			SET_GRINGO_BOOL_ATTR(1, "is_anim_done", iParam0->f_20);
			return 0;
			break;
	}
	Function_2(iParam0);
	return 1;
}

float Function_4(int iParam0) //Position: 0x363 / 867
{
	if (Function_7(iParam0))
	{
		if (Function_5(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_5(int iParam0) //Position: 0x42B / 1067
{
	return Function_6(*iParam0, 2);
}

bool Function_6(var uParam0, int iParam1) //Position: 0x438 / 1080
{
	return (uParam0 && iParam1) == 0;
}

bool Function_7(int iParam0) //Position: 0x445 / 1093
{
	return Function_6(*iParam0, 1);
}

void Function_8(int iParam0) //Position: 0x452 / 1106
{
	if (!Function_7(iParam0))
	{
		Function_9(iParam0, 0.0f);
	}
	return;
}

void Function_9(var uParam0, float fParam1) //Position: 0x467 / 1127
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_11(uParam0, 1);
	Function_10(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_10(var uParam0, int iParam1) //Position: 0x488 / 1160
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_11(var uParam0, int iParam1) //Position: 0x49B / 1179
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_12(int iParam0) //Position: 0x4AA / 1194
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

void Function_13(bool bParam0) //Position: 0x4BE / 1214
{
	bool bVar0;
	
	bParam0->f_48 = GRINGO_GET_REQUESTING_ACTOR();
	if (IS_ACTOR_VALID(bParam0->f_48))
	{
		bVar0 = GRINGO_GET_MSG_COMPONENT_CONTEXT();
		bParam0->f_20 = bVar0;
		GET_GRINGO_FLOAT_ATTR(bParam0, "UseTime", bVar0);
		Function_12(bParam0 + 52);
		Function_8(bParam0 + 52);
		bParam0->f_96 = 1;
		GET_POSITION(bParam0->f_48, bParam0 + 76);
		bParam0->f_88 = 1;
		SET_GRINGO_BOOL_ATTR(1, "IsComponentInUse", bParam0->f_20);
		Function_2(bParam0);
	}
	return;
}

bool Function_14(int iParam0, bool bParam1) //Position: 0x536 / 1334
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	
	bVar0 = GRINGO_GET_MSG_COMPONENT_CONTEXT();
	if (IS_GRINGO_COMPONENT_VALID(bVar0))
	{
		if (!iParam0->f_88)
		{
			if (Function_7(iParam0 + 52))
			{
				if (Function_4(iParam0 + 52) > iParam0->f_16)
				{
					return 0;
				}
			}
			bVar1 = GRINGO_GET_REQUESTING_ACTOR();
			if (!GRINGO_IS_CAPABLE_OF_USE(bVar1, bVar0))
			{
				return 0;
			}
			GET_GRINGO_RELATIVE_POSITION_ATTR(&vVar2, "CentreLocator", iParam0->f_20);
			GET_POSITION(bVar1, &vVar5);
			vVar8 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar5, vVar2, StackVal) };
			if (StackVal < VMAG(vVar8))
			{
				return 0;
			}
			if (iParam0->f_48 != GRINGO_GET_REQUESTING_ACTOR() && *bParam1 != 0)
			{
				if (Function_4(iParam0 + 52) <= iParam0->f_16)
				{
					*bParam1 = 1;
					return 1;
				}
				return 0;
			}
			*bParam1 = 1;
			return 1;
		}
		if (iParam0->f_48 == GRINGO_GET_REQUESTING_ACTOR())
		{
			*bParam1 = 0;
			return 1;
		}
	}
	Function_15("Gringo use component not valid!", 2.0f, 0, 2, 1, 0);
	return 0;
}

void Function_15(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x62C / 1580
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_16(Global_6269) };
		}
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, &Var0, iParam5);
	}
	else
	{
		iVar4 = "";
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, iVar4, iParam5);
	}
}

struct<16> Function_16(int iParam0) //Position: 0x6A3 / 1699
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

bool Function_17() //Position: 0x6E2 / 1762
{
	if (Function_6(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_18(bool bParam0, bool bParam1) //Position: 0x6FD / 1789
{
	int iVar0;
	
	bParam0->f_20 = bParam1;
	*bParam0 = 5.0f;
	bParam0->f_4 = 0.5f;
	bParam0->f_8 = 1.0f;
	bParam0->f_12 = 1.0f;
	bParam0->f_16 = 15.0f;
	bParam0->f_32 = 20;
	bParam0->f_36 = 0.5f;
	bParam0->f_40 = 0.0f;
	bParam0->f_44 = 0.0f;
	bParam0->f_100 = 0.0f;
	GET_GRINGO_FLOAT_ATTR(bParam0, "UseTime", bParam1);
	GET_GRINGO_FLOAT_ATTR(bParam0 + 4, "MoveAllowance", bParam1);
	GET_GRINGO_FLOAT_ATTR(bParam0 + 8, "ActivationRadius", bParam1);
	GET_GRINGO_FLOAT_ATTR(bParam0 + 12, "AutoDisengageTime", bParam1);
	GET_GRINGO_FLOAT_ATTR(bParam0 + 16, "ReuseDelay", bParam1);
	GET_GRINGO_INT_ATTR(bParam0 + 32, "CompletionRewardAmount", bParam1);
	GET_GRINGO_FLOAT_ATTR(bParam0 + 36, "StartingPhaseTimeout", bParam1);
	GET_GRINGO_FLOAT_ATTR(bParam0 + 40, "UseDirectionToleranceDegrees", bParam1);
	GET_GRINGO_FLOAT_ATTR(bParam0 + 44, "UseLocationTolerance", bParam1);
	GET_GRINGO_FLOAT_ATTR(bParam0 + 100, "MinimumUseTime", bParam1);
	iVar0 = 0;
	bParam0->f_24 = GET_GRINGO_STRING_ATTR("CompletionReward", bParam1, &iVar0);
	if (iVar0 >= 0)
	{
		bParam0->f_92 = 1;
	}
	bParam0->f_28 = GET_GRINGO_STRING_ATTR("UseName", bParam1, &iVar0);
	return;
}

