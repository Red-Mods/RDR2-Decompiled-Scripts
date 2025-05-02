//Decompiled with MagicRDR v1.0
//Function Count : 25
//Statics Count : 1
//Natives Count : 52
//Parameters Count : 1

#region Local Var
	bool bScriptParam_0 = false;
#endregion

void main() //Position: 0x0 / 0
{
	struct<93> Var0;
	
	bVar35 = GRINGO_GET_FIRST_CHILD(1, bScriptParam_0);
	if (IS_GRINGO_COMPONENT_VALID(bVar35))
	{
		bVar36 = bVar35;
	}
	else
	{
		bVar36 = bScriptParam_0;
	}
	iVar37 = GRINGO_GET_FIRST_NAMED_CHILD("UseCase1", 3, bVar36);
	Function_24(&Var0, iVar37);
	while (IS_GRINGO_ACTIVE())
	{
		if (GRINGO_HAS_PENDING_MESSAGE())
		{
			bVar38 = false;
			bVar39 = false;
			switch (GRINGO_GET_MESSAGE_TYPE())
			{
				case 0x00000000:
					if (Function_23(&Var0, &bVar39))
					{
						bVar38 = true;
					}
					break;
				
				case 0x00000001:
					if (Function_23(&Var0, &bVar39))
					{
						bVar38 = true;
						if (bVar39)
						{
							Function_22(&Var0);
						}
					}
					break;
				
				case 0x00000002:
					break;
			}
			GRINGO_SET_MESSAGE_RETURN(bVar38);
			if (bVar38)
			{
				Function_21(&Var0 + 68);
				Function_17(&Var0 + 68);
				GRINGO_SET_REQUEST_STRING(Var0.f_28);
				Function_16(&Var0);
			}
			else
			{
				if (Var0.f_92)
				{
					Function_15(&Var0);
					Var0.f_92 = 0;
				}
				Function_14(&Var0);
			}
		}
		if (Var0.f_92)
		{
			Var0.f_92 = Function_1(&Var0);
			if (!Var0.f_92)
			{
				Function_15(&Var0);
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
	if (Var0.f_92)
	{
		Function_15(&Var0);
		Var0.f_92 = 0;
	}
	return;
}

int Function_1(bool bParam0) //Position: 0x114 / 276
{
	vector3 vVar0;
	bool bVar3;
	vector3 vVar4;
	var uVar7;
	
	if (!(IS_ACTOR_VALID(bParam0->f_48) && IS_ACTOR_ALIVE(bParam0->f_48)))
	{
		return 0;
	}
	switch (bParam0->f_100)
	{
		case 0x00000003:
			if (Function_10(bParam0 + 56) < bParam0->f_36)
			{
				return 0;
			}
			GET_GRINGO_RELATIVE_POSITION_ATTR(&vVar4, "CentreLocator", bParam0->f_20);
			if (GET_GRINGO_RELATIVE_ORIENTATION_ATTR(&uVar7, "UseDirection", bParam0->f_20))
			{
				bVar3 = UNK_0x9C40E671(&uVar7);
				if (GRINGO_ACTOR_MOVE_TO_AND_FACE(bParam0->f_48, &vVar4, bParam0->f_44, 0,1f, 1, bVar3, bParam0->f_40, 0, 0))
				{
					GET_POSITION(bParam0->f_48, bParam0 + 80);
					bParam0->f_100 = 4;
				}
			}
			else
			{
				vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*(bParam0 + 80), vVar4, StackVal) };
				bVar3 = UNK_0x9C40E671(&vVar0);
				if (GRINGO_ACTOR_FACE(bParam0->f_48, bVar3, 20.0f))
				{
					bParam0->f_100 = 4;
				}
			}
			break;
		
		case 0x00000004:
			if (Function_9(bParam0))
			{
				GRINGO_PLAY_ANIM_ON_ACTOR(bParam0->f_52, GRINGO_GET_FIRST_NAMED_CHILD("FollowMeAnim", 2, bParam0->f_20), false);
				Function_8(bParam0->f_112, 3.0f, 0, 2, 1, 0);
				Function_21(bParam0 + 56);
				Function_17(bParam0 + 56);
				bParam0->f_100 = 7;
			}
			else
			{
				return 0;
			}
			break;
		
		case 0x00000007:
			if (Function_10(bParam0 + 56) <= 2.0f)
			{
				Function_21(bParam0 + 56);
				Function_17(bParam0 + 56);
				if (Function_7(bParam0))
				{
					bParam0->f_100 = 5;
				}
				else
				{
					return 0;
				}
			}
			break;
		
		case 0x00000005:
			if (Function_6(bParam0->f_52, bParam0->f_108))
			{
				Function_21(bParam0 + 56);
				Function_17(bParam0 + 56);
				bParam0->f_100 = 8;
				break;
			}
			if (Function_5(bParam0->f_52, bParam0->f_48) <= 3,5f)
			{
				if (Function_4(bParam0->f_52, bParam0->f_48))
				{
					GRINGO_PLAY_ANIM_ON_ACTOR(bParam0->f_52, GRINGO_GET_FIRST_NAMED_CHILD("HurryUpAnimFront", 2, bParam0->f_20), false);
				}
				else
				{
					GRINGO_PLAY_ANIM_ON_ACTOR(bParam0->f_52, GRINGO_GET_FIRST_NAMED_CHILD("HurryUpAnimBack", 2, bParam0->f_20), false);
				}
				TASK_STAND_STILL(bParam0->f_52, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bParam0->f_52, true);
				Function_21(bParam0 + 56);
				Function_17(bParam0 + 56);
				bParam0->f_100 = 6;
				break;
			}
			if (Function_10(bParam0 + 56) < bParam0->f_124)
			{
				return 0;
			}
			break;
		
		case 0x00000006:
			if (Function_5(bParam0->f_52, bParam0->f_48) >= 2,5f)
			{
				Function_21(bParam0 + 56);
				Function_17(bParam0 + 56);
				if (Function_7(bParam0))
				{
					bParam0->f_100 = 5;
					break;
				}
				else
				{
					return 0;
				}
			}
			if (Function_10(bParam0 + 56) < bParam0->f_128)
			{
				return 0;
			}
			break;
		
		case 0x00000008:
			if (bParam0->f_120 && Function_10(bParam0 + 56) <= bParam0->f_136)
			{
				bParam0->f_120 = 0;
			}
			if (Function_10(bParam0 + 56) <= (bParam0->f_132 - 1.0f))
			{
				Function_21(bParam0 + 56);
				Function_17(bParam0 + 56);
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_OUT(1.0f, 1f, 1);
				bParam0->f_100 = 9;
				break;
			}
			break;
		
		case 0x00000009:
			if (Function_10(bParam0 + 56) <= 1.0f)
			{
				HUD_FADE_IN(1.0f, 1065353216);
				Function_3(bParam0->f_48);
				return 0;
			}
			break;
	}
	Function_2(bParam0);
	return 1;
}

void Function_2(bool bParam0) //Position: 0x424 / 1060
{
	switch (bParam0->f_100)
	{
		case 0x00000000:
			REPORT_GRINGO_USE_PHASE(bParam0->f_48, 0);
			break;
		
		case 0x00000001:
			REPORT_GRINGO_USE_PHASE(bParam0->f_48, 1);
			break;
		
		case 0x00000002:
			REPORT_GRINGO_USE_PHASE(bParam0->f_48, 1);
			break;
		
		case 0x00000003:
			REPORT_GRINGO_USE_PHASE(bParam0->f_48, 1);
			break;
		
		case 0x00000004:
			REPORT_GRINGO_USE_PHASE(bParam0->f_48, 2);
			break;
		
		case 0x00000005:
			REPORT_GRINGO_USE_PHASE(bParam0->f_48, 6);
			break;
		
		case 0x00000006:
			REPORT_GRINGO_USE_PHASE(bParam0->f_48, 6);
			break;
		
		case 0x00000007:
			REPORT_GRINGO_USE_PHASE(bParam0->f_48, 6);
			break;
		
		case 0x00000008:
			REPORT_GRINGO_USE_PHASE(bParam0->f_48, 6);
			break;
		
		case 0x00000009:
			REPORT_GRINGO_USE_PHASE(bParam0->f_48, 9);
			break;
	}
	return;
}

void Function_3(bool bParam0) //Position: 0x4DE / 1246
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_HEALTH(bParam0);
	bVar0 = (bVar0 + 20.0f);
	SET_ACTOR_HEALTH(bParam0, bVar0);
	return;
}

bool Function_4(bool bParam0, bool bParam1) //Position: 0x4FC / 1276
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	var uVar9;
	float fVar12;
	
	GET_POSITION(bParam0, &vVar0);
	GET_POSITION(bParam1, &vVar3);
	vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar0, vVar3, StackVal) };
	VNORMALIZE(&vVar6);
	GET_ACTOR_AXIS(bParam0, &uVar9, 2);
	fVar12 = VDOT(&uVar9, &vVar6);
	if (fVar12 >= 0,5f)
	{
		return 1;
	}
	return 0;
}

float Function_5(bool bParam0, bool bParam1) //Position: 0x545 / 1349
{
	vector3 vVar0;
	vector3 vVar3;
	
	GET_POSITION(bParam0, &vVar0);
	GET_POSITION(bParam1, &vVar3);
	return VDIST(vVar0, vVar3);
}

bool Function_6(bool bParam0, bool bParam1) //Position: 0x564 / 1380
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	
	GET_GRINGO_ACTIVATION_SPHERE(bParam1, &vVar0, &uVar6);
	GET_POSITION(bParam0, &vVar3);
	if (VDIST(vVar0, vVar3) >= 0,5f)
	{
		return 1;
	}
	return 0;
}

bool Function_7(bool bParam0) //Position: 0x594 / 1428
{
	if (IS_GRINGO_VALID(bParam0->f_108))
	{
		GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS(bParam0->f_48);
		GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS(bParam0->f_52);
		TASK_USE_GRINGO(bParam0->f_52, bParam0->f_108, "UseCase1", true, 1);
		TASK_PRIORITY_SET(bParam0->f_52, true);
		return 1;
	}
	PRINTSTRING("WARNING: Cannot Use UseGringoOfType - The gringo has become invalid!");
	PRINTNL();
	return 0;
}

void Function_8(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x627 / 1575
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

bool Function_9(int iParam0) //Position: 0x66E / 1646
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	
	bVar0 = GRINGO_GET_FIRST_NAMED_CHILD("ExternalUse1", 4, iParam0->f_20);
	if (IS_GRINGO_COMPONENT_VALID(bVar0))
	{
		bVar1 = GET_GRINGO_STRING_ATTR("UseGringoOfType", bVar0, &iVar2);
		if (iVar2 >= 0)
		{
			GET_POSITION(iParam0->f_52, &uVar3);
			iParam0->f_108 = LOCATE_GRINGO_OF_TYPE(bVar1, &uVar3, 100.0f, 0);
			if (IS_GRINGO_VALID(iParam0->f_108))
			{
				if (!GET_GRINGO_FLOAT_ATTR(iParam0 + 132, "ExternalUseTime", bVar0))
				{
					iParam0->f_132 = GRINGO_QUERY_FLOAT(iParam0->f_108, "UseCase1", "UseTime", &iVar2);
					if (iVar2 < 0)
					{
						iParam0->f_132 = 10.0f;
					}
				}
				else if (iParam0->f_132 >= 0.0f)
				{
					iParam0->f_132 = GRINGO_QUERY_FLOAT(iParam0->f_108, "UseCase1", "UseTime", &iVar2);
					if (iVar2 < 0)
					{
						iParam0->f_132 = 10.0f;
					}
				}
				iParam0->f_112 = GET_GRINGO_STRING_ATTR("ExternalUseTextKey", bVar0, &iVar2);
				if (iVar2 == 0)
				{
					iParam0->f_112 = "";
				}
				iParam0->f_116 = GET_GRINGO_STRING_ATTR("ExternalUseCamera", bVar0, &iVar2);
				if (iVar2 >= 0)
				{
					iParam0->f_120 = 1;
					if (!GET_GRINGO_FLOAT_ATTR(iParam0 + 136, "ExternalCameraDelay", bVar0))
					{
						iParam0->f_136 = 0,5f;
					}
				}
				else
				{
					iParam0->f_120 = 0;
					iParam0->f_136 = 0.0f;
				}
				return 1;
			}
			PRINTSTRING("WARNING: Cannot Find UseGringoOfType - Check the path provided in the XML file!");
			PRINTNL();
			return 0;
		}
		PRINTSTRING("WARNING: Invalid UseGringoOfType - This script requires one!");
		PRINTNL();
		return 0;
	}
	PRINTSTRING("WARNING: Invalid ExternalUse1 - This script requires one!");
	PRINTNL();
	return 0;
}

float Function_10(int iParam0) //Position: 0x8E6 / 2278
{
	if (Function_13(iParam0))
	{
		if (Function_11(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_11(int iParam0) //Position: 0x9AE / 2478
{
	return Function_12(*iParam0, 2);
}

int Function_12(var uParam0, int iParam1) //Position: 0x9BB / 2491
{
	return (uParam0 && iParam1) == 0;
}

bool Function_13(int iParam0) //Position: 0x9C8 / 2504
{
	return Function_12(*iParam0, 1);
}

void Function_14(int iParam0) //Position: 0x9D5 / 2517
{
	if (iParam0->f_100 == 2)
	{
		GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS(iParam0->f_52);
		iParam0->f_100 = 0;
	}
	Function_2(iParam0);
	return;
}

void Function_15(int iParam0) //Position: 0x9F5 / 2549
{
	iParam0->f_100 = 0;
	if (IS_ACTOR_VALID(iParam0->f_48))
	{
		Function_2(iParam0);
		GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS(iParam0->f_48);
		GRINGO_REPORT_USE_FINISHED(iParam0->f_48, true);
	}
	if (IS_ACTOR_VALID(iParam0->f_52))
	{
		GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS(iParam0->f_52);
		TASK_WANDER(iParam0->f_52, 3212836864);
	}
	Function_21(iParam0 + 56);
	Function_17(iParam0 + 56);
	return;
}

void Function_16(int iParam0) //Position: 0xA4C / 2636
{
	switch (iParam0->f_100)
	{
		case 0x00000000:
			iParam0->f_100 = 1;
			break;
		
		case 0x00000001:
			GRINGO_PLAY_ANIM_ON_ACTOR(iParam0->f_52, GRINGO_GET_FIRST_NAMED_CHILD("nIntroAnim", 2, iParam0->f_20), false);
			iParam0->f_100 = 2;
			break;
		
		case 0x00000002:
			break;
	}
	Function_2(iParam0);
	return;
}

void Function_17(int iParam0) //Position: 0xAA2 / 2722
{
	if (!Function_13(iParam0))
	{
		Function_18(iParam0, 0.0f);
	}
	return;
}

void Function_18(var uParam0, float fParam1) //Position: 0xAB7 / 2743
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_20(uParam0, 1);
	Function_19(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_19(var uParam0, int iParam1) //Position: 0xAD8 / 2776
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_20(var uParam0, int iParam1) //Position: 0xAEB / 2795
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_21(int iParam0) //Position: 0xAFA / 2810
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

void Function_22(int iParam0) //Position: 0xB0E / 2830
{
	int iVar0;
	
	iParam0->f_48 = GRINGO_GET_REQUESTING_ACTOR();
	if (IS_ACTOR_VALID(iParam0->f_48))
	{
		iVar0 = GRINGO_GET_MSG_COMPONENT_CONTEXT();
		iParam0->f_20 = iVar0;
		Function_21(iParam0 + 56);
		Function_17(iParam0 + 56);
		iParam0->f_100 = 3;
		iParam0->f_92 = 1;
		Function_2(iParam0);
	}
	return;
}

bool Function_23(int iParam0, int iParam1) //Position: 0xB4D / 2893
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	
	bVar0 = GRINGO_GET_MSG_COMPONENT_CONTEXT();
	if (IS_GRINGO_COMPONENT_VALID(bVar0))
	{
		if (IS_ACTOR_ALIVE(GET_TARGET_ACTOR()))
		{
			if (!iParam0->f_92)
			{
				if (Function_13(iParam0 + 56))
				{
					if (Function_10(iParam0 + 56) > iParam0->f_16)
					{
						return 0;
					}
				}
				if (Global_3380)
				{
					return 0;
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
				if (iParam0->f_48 != GRINGO_GET_REQUESTING_ACTOR() && *iParam1 != 0)
				{
					if (Function_10(iParam0 + 56) <= iParam0->f_16)
					{
						*iParam1 = 1;
						return 1;
					}
					return 0;
				}
				*iParam1 = 1;
				return 1;
			}
			if (iParam0->f_48 == GRINGO_GET_REQUESTING_ACTOR())
			{
				*iParam1 = 0;
				return 1;
			}
		}
	}
	Function_8("Gringo use component not valid!", 2.0f, 0, 2, 1, 0);
	return 0;
}

void Function_24(bool bParam0, bool bParam1) //Position: 0xC54 / 3156
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
	bParam0->f_124 = 60.0f;
	bParam0->f_128 = 15.0f;
	bParam0->f_132 = 10.0f;
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

