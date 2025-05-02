//Decompiled with MagicRDR v1.0
//Function Count : 17
//Statics Count : 1
//Natives Count : 37
//Parameters Count : 1

#region Local Var
	bool bScriptParam_0 = false;
#endregion

void main() //Position: 0x0 / 0
{
	struct<93> Var0;
	
	bVar27 = GRINGO_GET_FIRST_CHILD(1, bScriptParam_0);
	if (IS_GRINGO_COMPONENT_VALID(bVar27))
	{
		bVar28 = bVar27;
	}
	else
	{
		bVar28 = bScriptParam_0;
	}
	iVar29 = GRINGO_GET_FIRST_NAMED_CHILD("UseCase1", 3, bVar28);
	Function_16(&Var0, iVar29);
	while (IS_GRINGO_ACTIVE())
	{
		if (GRINGO_HAS_PENDING_MESSAGE())
		{
			bVar30 = false;
			bVar31 = false;
			switch (GRINGO_GET_MESSAGE_TYPE())
			{
				case 0x00000000:
					if (Function_14(&Var0, &bVar31))
					{
						bVar30 = true;
					}
					break;
				
				case 0x00000001:
					if (Function_14(&Var0, &bVar31))
					{
						bVar30 = true;
						if (bVar31)
						{
							Function_13(&Var0);
						}
					}
					break;
				
				case 0x00000002:
					break;
			}
			GRINGO_SET_MESSAGE_RETURN(bVar30);
			if (bVar30)
			{
				Function_12(&Var0 + 68);
				Function_8(&Var0 + 68);
				GRINGO_SET_REQUEST_STRING(Var0.f_28);
			}
		}
		if (Var0.f_92)
		{
			Var0.f_92 = Function_3(&Var0);
			if (!Var0.f_92)
			{
				Function_1(&Var0);
			}
		}
		if (Var0.f_92)
		{
			GRINGO_WAIT(20);
		}
		else
		{
			GRINGO_STOP();
		}
	}
	return;
}

void Function_1(int iParam0) //Position: 0xE5 / 229
{
	if (IS_ACTOR_VALID(iParam0->f_48))
	{
		iParam0->f_100 = 0;
		Function_2(iParam0);
		GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS(iParam0->f_48);
		GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS(iParam0->f_52);
		GRINGO_REPORT_USE_FINISHED(iParam0->f_48, true);
	}
	return;
}

void Function_2(int iParam0) //Position: 0x118 / 280
{
	switch (iParam0->f_100)
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

int Function_3(int iParam0) //Position: 0x17C / 380
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	bool bVar5;
	vector3 vVar6;
	var uVar9;
	vector3 vVar12;
	
	if (!(IS_ACTOR_VALID(iParam0->f_48) && IS_ACTOR_ALIVE(iParam0->f_48)))
	{
		return 0;
	}
	switch (iParam0->f_100)
	{
		case 0x00000001:
			if (Function_4(iParam0 + 56) < iParam0->f_36)
			{
				iParam0->f_100 = 2;
			}
			else
			{
				GET_GRINGO_RELATIVE_POSITION_ATTR(&vVar6, "CentreLocator", iParam0->f_20);
				if (GET_GRINGO_RELATIVE_ORIENTATION_ATTR(&uVar9, "UseDirection", iParam0->f_20))
				{
					bVar5 = UNK_0x9C40E671(&uVar9);
					if (GRINGO_ACTOR_MOVE_TO_AND_FACE(iParam0->f_48, &vVar6, iParam0->f_44, 0,1f, 1, bVar5, iParam0->f_40, 0, 0))
					{
						iParam0->f_100 = 2;
					}
				}
				else
				{
					vVar2 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*(iParam0 + 80), vVar6, StackVal) };
					bVar5 = UNK_0x9C40E671(&vVar2);
					if (GRINGO_ACTOR_FACE(iParam0->f_48, bVar5, 20.0f))
					{
						iParam0->f_100 = 2;
					}
				}
			}
			break;
		
		case 0x00000002:
			bVar0 = GRINGO_GET_FIRST_NAMED_CHILD("UseAnim", 2, iParam0->f_20);
			GRINGO_PLAY_ANIM_ON_ACTOR(iParam0->f_48, bVar0, false);
			iParam0->f_100 = 3;
			bVar1 = GRINGO_GET_FIRST_NAMED_CHILD("nServeAnim", 2, iParam0->f_20);
			GRINGO_PLAY_ANIM_ON_ACTOR(iParam0->f_52, bVar1, false);
			break;
		
		case 0x00000003:
			if (Function_4(iParam0 + 56) <= iParam0->f_104)
			{
				GRINGO_SATISFY_MOTIVES_OF_ACTOR(iParam0->f_48, iParam0->f_20);
			}
			if (Function_4(iParam0 + 68) < iParam0->f_12)
			{
				return 0;
			}
			GET_POSITION(iParam0->f_48, &vVar12);
			if (StackVal < VDIST(vVar12, *(iParam0 + 80)))
			{
				return 0;
			}
			if (Function_4(iParam0 + 56) < *iParam0)
			{
				iParam0->f_100 = 4;
			}
			break;
		
		case 0x00000004:
			if (iParam0->f_96)
			{
				GRINGO_REWARD_ACTOR(iParam0->f_24, iParam0->f_32, iParam0->f_48);
			}
			return 0;
			break;
	}
	Function_2(iParam0);
	return 1;
}

float Function_4(int iParam0) //Position: 0x32B / 811
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

bool Function_5(int iParam0) //Position: 0x3F3 / 1011
{
	return Function_6(*iParam0, 2);
}

int Function_6(var uParam0, int iParam1) //Position: 0x400 / 1024
{
	return (uParam0 && iParam1) == 0;
}

bool Function_7(int iParam0) //Position: 0x40D / 1037
{
	return Function_6(*iParam0, 1);
}

void Function_8(int iParam0) //Position: 0x41A / 1050
{
	if (!Function_7(iParam0))
	{
		Function_9(iParam0, 0.0f);
	}
	return;
}

void Function_9(var uParam0, float fParam1) //Position: 0x42F / 1071
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_11(uParam0, 1);
	Function_10(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_10(var uParam0, int iParam1) //Position: 0x450 / 1104
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_11(var uParam0, int iParam1) //Position: 0x463 / 1123
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_12(int iParam0) //Position: 0x472 / 1138
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

void Function_13(int iParam0) //Position: 0x486 / 1158
{
	int iVar0;
	
	iParam0->f_48 = GRINGO_GET_REQUESTING_ACTOR();
	if (IS_ACTOR_VALID(iParam0->f_48))
	{
		iVar0 = GRINGO_GET_MSG_COMPONENT_CONTEXT();
		iParam0->f_20 = iVar0;
		Function_12(iParam0 + 56);
		Function_8(iParam0 + 56);
		iParam0->f_100 = 1;
		GET_POSITION(iParam0->f_48, iParam0 + 80);
		iParam0->f_92 = 1;
		Function_2(iParam0);
	}
	return;
}

bool Function_14(int iParam0, bool bParam1) //Position: 0x4D0 / 1232
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	
	bVar0 = GRINGO_GET_MSG_COMPONENT_CONTEXT();
	if (IS_GRINGO_COMPONENT_VALID(bVar0))
	{
		if (!iParam0->f_92)
		{
			if (Function_7(iParam0 + 56))
			{
				if (Function_4(iParam0 + 56) > iParam0->f_16)
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

void Function_15(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x59E / 1438
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

void Function_16(bool bParam0, bool bParam1) //Position: 0x5E5 / 1509
{
	int iVar0;
	
	bParam0->f_20 = bParam1;
	*bParam0 = 5.0f;
	bParam0->f_4 = 0,5f;
	bParam0->f_8 = 1.0f;
	bParam0->f_12 = 1.0f;
	bParam0->f_16 = 15.0f;
	bParam0->f_32 = 20;
	bParam0->f_36 = 0,5f;
	bParam0->f_40 = 0.0f;
	bParam0->f_44 = 0.0f;
	bParam0->f_52 = GET_TARGET_ACTOR();
	bParam0->f_104 = 0.0f;
	GET_GRINGO_FLOAT_ATTR(bParam0, "UseTime", bParam1);
	GET_GRINGO_FLOAT_ATTR(bParam0 + 4, "MoveAllowance", bParam1);
	GET_GRINGO_FLOAT_ATTR(bParam0 + 8, "ActivationRadius", bParam1);
	GET_GRINGO_FLOAT_ATTR(bParam0 + 12, "AutoDisengageTime", bParam1);
	GET_GRINGO_FLOAT_ATTR(bParam0 + 16, "ReuseDelay", bParam1);
	GET_GRINGO_INT_ATTR(bParam0 + 32, "CompletionRewardAmount", bParam1);
	GET_GRINGO_FLOAT_ATTR(bParam0 + 36, "StartingPhaseTimeout", bParam1);
	GET_GRINGO_FLOAT_ATTR(bParam0 + 40, "UseDirectionToleranceDegrees", bParam1);
	GET_GRINGO_FLOAT_ATTR(bParam0 + 44, "UseLocationTolerance", bParam1);
	GET_GRINGO_FLOAT_ATTR(bParam0 + 104, "MinimumUseTime", bParam1);
	iVar0 = 0;
	bParam0->f_24 = GET_GRINGO_STRING_ATTR("CompletionReward", bParam1, &iVar0);
	if (iVar0 >= 0)
	{
		bParam0->f_96 = 1;
	}
	bParam0->f_28 = GET_GRINGO_STRING_ATTR("UseName", bParam1, &iVar0);
	return;
}

