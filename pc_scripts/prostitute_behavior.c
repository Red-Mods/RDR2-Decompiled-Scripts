//Decompiled with MagicRDR v1.0
//Function Count : 27
//Statics Count : 2
//Natives Count : 53
//Parameters Count : 2

#region Local Var
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	struct<125> Var0;
	
	uVar24 = GRINGO_GET_FIRST_CHILD(1, &uScriptParam_0);
	if (IS_GRINGO_COMPONENT_VALID(&uVar24))
	{
		uVar25 = &uVar24;
	}
	else
	{
		uVar25 = &uScriptParam_0;
	}
	uVar26 = GRINGO_GET_FIRST_NAMED_CHILD("UseCase1", 3, &uVar25);
	Function_26(&Var0, &uVar26);
	while (IS_GRINGO_ACTIVE())
	{
		if (GRINGO_HAS_PENDING_MESSAGE())
		{
			bVar27 = false;
			bVar28 = false;
			switch (GRINGO_GET_MESSAGE_TYPE())
			{
				case 0x00000000:
					if (Function_25(&Var0, &bVar28))
					{
						bVar27 = true;
					}
					break;
				
				case 0x00000001:
					if (Function_25(&Var0, &bVar28))
					{
						bVar27 = true;
						if (bVar28)
						{
							Function_24(&Var0);
						}
					}
					break;
				
				case 0x00000002:
					break;
			}
			GRINGO_SET_MESSAGE_RETURN(bVar27);
			if (bVar27)
			{
				Function_23(&Var0 + 96);
				Function_19(&Var0 + 96);
				GRINGO_SET_REQUEST_STRING(&Var0 + 40);
				Function_18(&Var0);
			}
			else
			{
				if (Var0.f_124)
				{
					Function_17(&Var0);
					Var0.f_124 = 0;
				}
				Function_16(&Var0);
			}
		}
		if (Var0.f_124)
		{
			Var0.f_124 = Function_1(&Var0);
			if (!Var0.f_124)
			{
				Function_17(&Var0);
			}
		}
		if (Var0.f_124)
		{
			GRINGO_WAIT(20);
		}
		else
		{
			GRINGO_STOP();
		}
	}
	if (Var0.f_124)
	{
		Function_17(&Var0);
		Var0.f_124 = 0;
	}
	return;
}

int Function_1(struct<185> Param0) //Position: 0x11F / 287
{
	var uVar0;
	bool bVar2;
	struct<2> Var3;
	var uVar5;
	
	if (!(IS_ACTOR_VALID(&Param0 + 64) && IS_ACTOR_ALIVE(&Param0 + 64)))
	{
		return 0;
	}
	switch (Param0.f_132)
	{
		case 0x00000003:
			if (Function_13(&Param0 + 80) < Param0.f_52)
			{
				return 0;
			}
			GET_GRINGO_RELATIVE_POSITION_ATTR(&Var3, "CentreLocator", &Param0 + 24);
			if (GET_GRINGO_RELATIVE_ORIENTATION_ATTR(&uVar5, "UseDirection", &Param0 + 24))
			{
				bVar2 = UNK_0x9C40E671(&uVar5);
				if (GRINGO_ACTOR_MOVE_TO_AND_FACE(&Param0 + 64, &Var3, Param0.f_60, 0,1f, 1, bVar2, Param0.f_56, 0, 0))
				{
					GET_POSITION(&Param0 + 64, &Param0 + 112);
					Param0.f_132 = 4;
				}
			}
			else
			{
				uVar0 = Vector(StackVal, StackVal, StackVal) - Vector(*(&Param0 + 112), Var3, StackVal);
				bVar2 = UNK_0x9C40E671(&uVar0);
				if (GRINGO_ACTOR_FACE(&Param0 + 64, bVar2, 20.0f))
				{
					Param0.f_132 = 4;
				}
			}
			break;
		
		case 0x00000004:
			if (Function_12(&Param0))
			{
				GRINGO_PLAY_ANIM_ON_ACTOR(&Param0 + 72, GRINGO_GET_FIRST_NAMED_CHILD("FollowMeAnim", 2, &Param0 + 24), false);
				Function_8(&Param0 + 152, 3.0f, 0, 2, 1, 0);
				Function_23(&Param0 + 80);
				Function_19(&Param0 + 80);
				Param0.f_132 = 7;
			}
			else
			{
				return 0;
			}
			break;
		
		case 0x00000007:
			if (Function_13(&Param0 + 80) <= 2.0f)
			{
				Function_23(&Param0 + 80);
				Function_19(&Param0 + 80);
				if (Function_7(&Param0))
				{
					Param0.f_132 = 5;
				}
				else
				{
					return 0;
				}
			}
			break;
		
		case 0x00000005:
			if (Function_6(&Param0 + 72, &Param0 + 144))
			{
				Function_23(&Param0 + 80);
				Function_19(&Param0 + 80);
				Param0.f_132 = 8;
				break;
			}
			if (Function_5(&Param0 + 72, &Param0 + 64) <= 3,5f)
			{
				if (Function_4(&Param0 + 72, &Param0 + 64))
				{
					GRINGO_PLAY_ANIM_ON_ACTOR(&Param0 + 72, GRINGO_GET_FIRST_NAMED_CHILD("HurryUpAnimFront", 2, &Param0 + 24), false);
				}
				else
				{
					GRINGO_PLAY_ANIM_ON_ACTOR(&Param0 + 72, GRINGO_GET_FIRST_NAMED_CHILD("HurryUpAnimBack", 2, &Param0 + 24), false);
				}
				TASK_STAND_STILL(&Param0 + 72, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&Param0 + 72, true);
				Function_23(&Param0 + 80);
				Function_19(&Param0 + 80);
				Param0.f_132 = 6;
				break;
			}
			if (Function_13(&Param0 + 80) < Param0.f_172)
			{
				return 0;
			}
			break;
		
		case 0x00000006:
			if (Function_5(&Param0 + 72, &Param0 + 64) >= 2,5f)
			{
				Function_23(&Param0 + 80);
				Function_19(&Param0 + 80);
				if (Function_7(&Param0))
				{
					Param0.f_132 = 5;
					break;
				}
				else
				{
					return 0;
				}
			}
			if (Function_13(&Param0 + 80) < Param0.f_176)
			{
				return 0;
			}
			break;
		
		case 0x00000008:
			if (Param0.f_168 && Function_13(&Param0 + 80) <= Param0.f_184)
			{
				Param0.f_168 = 0;
			}
			if (Function_13(&Param0 + 80) <= (Param0.f_180 - 1.0f))
			{
				Function_23(&Param0 + 80);
				Function_19(&Param0 + 80);
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_OUT(1.0f, 1f, 1);
				Param0.f_132 = 9;
				break;
			}
			break;
		
		case 0x00000009:
			if (Function_13(&Param0 + 80) <= 1.0f)
			{
				HUD_FADE_IN(1.0f, 1065353216);
				Function_3(&Param0 + 64);
				return 0;
			}
			break;
	}
	Function_2(&Param0);
	return 1;
}

void Function_2(struct<133> Param0) //Position: 0x48B / 1163
{
	switch (Param0.f_132)
	{
		case 0x00000000:
			REPORT_GRINGO_USE_PHASE(&Param0 + 64, 0);
			break;
		
		case 0x00000001:
			REPORT_GRINGO_USE_PHASE(&Param0 + 64, 1);
			break;
		
		case 0x00000002:
			REPORT_GRINGO_USE_PHASE(&Param0 + 64, 1);
			break;
		
		case 0x00000003:
			REPORT_GRINGO_USE_PHASE(&Param0 + 64, 1);
			break;
		
		case 0x00000004:
			REPORT_GRINGO_USE_PHASE(&Param0 + 64, 2);
			break;
		
		case 0x00000005:
			REPORT_GRINGO_USE_PHASE(&Param0 + 64, 6);
			break;
		
		case 0x00000006:
			REPORT_GRINGO_USE_PHASE(&Param0 + 64, 6);
			break;
		
		case 0x00000007:
			REPORT_GRINGO_USE_PHASE(&Param0 + 64, 6);
			break;
		
		case 0x00000008:
			REPORT_GRINGO_USE_PHASE(&Param0 + 64, 6);
			break;
		
		case 0x00000009:
			REPORT_GRINGO_USE_PHASE(&Param0 + 64, 9);
			break;
	}
	return;
}

void Function_3(int iParam0) //Position: 0x55A / 1370
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_HEALTH(&iParam0);
	bVar0 = (bVar0 + 20.0f);
	SET_ACTOR_HEALTH(&iParam0, bVar0);
	return;
}

bool Function_4(Vector3 vParam0, int iParam1) //Position: 0x57A / 1402
{
	struct<2> Var0;
	struct<2> Var2;
	var uVar4;
	var uVar6;
	float fVar8;
	
	GET_POSITION(&vParam0, &Var0);
	GET_POSITION(&iParam1, &Var2);
	uVar4 = Vector(StackVal, StackVal, StackVal) - Vector(Var0, Var2, StackVal);
	VNORMALIZE(&uVar4);
	GET_ACTOR_AXIS(&vParam0, &uVar6, 2);
	fVar8 = VDOT(&uVar6, &uVar4);
	if (fVar8 >= 0,5f)
	{
		return 1;
	}
	return 0;
}

float Function_5(var uParam0, int iParam1) //Position: 0x5C5 / 1477
{
	struct<2> Var0;
	struct<2> Var2;
	
	GET_POSITION(&uParam0, &Var0);
	GET_POSITION(&iParam1, &Var2);
	return VDIST(Var0, Var2);
}

bool Function_6(var uParam0, int iParam1) //Position: 0x5E6 / 1510
{
	struct<2> Var0;
	struct<2> Var2;
	var uVar4;
	
	GET_GRINGO_ACTIVATION_SPHERE(&iParam1, &Var0, &uVar4);
	GET_POSITION(&uParam0, &Var2);
	if (VDIST(Var0, Var2) >= 0,5f)
	{
		return 1;
	}
	return 0;
}

bool Function_7(bool bParam0) //Position: 0x618 / 1560
{
	if (IS_GRINGO_VALID(&bParam0 + 144))
	{
		GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS(&bParam0 + 64);
		GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS(&bParam0 + 72);
		TASK_USE_GRINGO(&bParam0 + 72, &bParam0 + 144, "UseCase1", true, 1);
		TASK_PRIORITY_SET(&bParam0 + 72, true);
		return 1;
	}
	PRINTSTRING("WARNING: Cannot Use UseGringoOfType - The gringo has become invalid!");
	PRINTNL();
	return 0;
}

void Function_8(var uParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x6B7 / 1719
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_9(Global_10966) };
		}
		PRINT_SMALL_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &Var0, &iParam5);
	}
	else
	{
		uVar4 = "";
		PRINT_SMALL_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &uVar4, &iParam5);
	}
}

struct<16> Function_9(int iParam0) //Position: 0x73C / 1852
{
	char* cVar0[16];
	
	if (!Function_10())
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

bool Function_10() //Position: 0x77B / 1915
{
	if (Function_11(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_11(var uParam0, int iParam1) //Position: 0x796 / 1942
{
	return (uParam0 && iParam1) == 0;
}

bool Function_12(struct<185> Param0) //Position: 0x7A3 / 1955
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	
	uVar0 = GRINGO_GET_FIRST_NAMED_CHILD("ExternalUse1", 4, &Param0 + 24);
	if (IS_GRINGO_COMPONENT_VALID(&uVar0))
	{
		uVar1 = GET_GRINGO_STRING_ATTR("UseGringoOfType", &uVar0, &iVar2);
		if (iVar2 >= 0)
		{
			GET_POSITION(&Param0 + 72, &uVar3);
			(&Param0 + 144) = LOCATE_GRINGO_OF_TYPE(&uVar1, &uVar3, 100.0f, 0);
			if (IS_GRINGO_VALID(&Param0 + 144))
			{
				if (!GET_GRINGO_FLOAT_ATTR(&Param0 + 180, "ExternalUseTime", &uVar0))
				{
					Param0.f_180 = GRINGO_QUERY_FLOAT(&Param0 + 144, "UseCase1", "UseTime", &iVar2);
					if (iVar2 < 0)
					{
						Param0.f_180 = 10.0f;
					}
				}
				else if (Param0.f_180 >= 0.0f)
				{
					Param0.f_180 = GRINGO_QUERY_FLOAT(&Param0 + 144, "UseCase1", "UseTime", &iVar2);
					if (iVar2 < 0)
					{
						Param0.f_180 = 10.0f;
					}
				}
				*(&Param0 + 152) = GET_GRINGO_STRING_ATTR("ExternalUseTextKey", &uVar0, &iVar2);
				if (iVar2 == 0)
				{
					*(&Param0 + 152) = "";
				}
				*(&Param0 + 160) = GET_GRINGO_STRING_ATTR("ExternalUseCamera", &uVar0, &iVar2);
				if (iVar2 >= 0)
				{
					Param0.f_168 = 1;
					if (!GET_GRINGO_FLOAT_ATTR(&Param0 + 184, "ExternalCameraDelay", &uVar0))
					{
						Param0.f_184 = 0,5f;
					}
				}
				else
				{
					Param0.f_168 = 0;
					Param0.f_184 = 0.0f;
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

float Function_13(vector3 vParam0) //Position: 0xA41 / 2625
{
	if (Function_15(&vParam0))
	{
		if (Function_14(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_14(int iParam0) //Position: 0xB0E / 2830
{
	return Function_11(iParam0, 2);
}

bool Function_15(int iParam0) //Position: 0xB1C / 2844
{
	return Function_11(iParam0, 1);
}

void Function_16(struct<133> Param0) //Position: 0xB2A / 2858
{
	if (Param0.f_132 == 2)
	{
		GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS(&Param0 + 72);
		Param0.f_132 = 0;
	}
	Function_2(&Param0);
	return;
}

void Function_17(struct<133> Param0) //Position: 0xB4F / 2895
{
	Param0.f_132 = 0;
	if (IS_ACTOR_VALID(&Param0 + 64))
	{
		Function_2(&Param0);
		GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS(&Param0 + 64);
		GRINGO_REPORT_USE_FINISHED(&Param0 + 64, true);
	}
	if (IS_ACTOR_VALID(&Param0 + 72))
	{
		GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS(&Param0 + 72);
		TASK_WANDER(&Param0 + 72, 3212836864);
	}
	Function_23(&Param0 + 80);
	Function_19(&Param0 + 80);
	return;
}

void Function_18(struct<133> Param0) //Position: 0xBB6 / 2998
{
	switch (Param0.f_132)
	{
		case 0x00000000:
			Param0.f_132 = 1;
			break;
		
		case 0x00000001:
			GRINGO_PLAY_ANIM_ON_ACTOR(&Param0 + 72, GRINGO_GET_FIRST_NAMED_CHILD("nIntroAnim", 2, &Param0 + 24), false);
			Param0.f_132 = 2;
			break;
		
		case 0x00000002:
			break;
	}
	Function_2(&Param0);
	return;
}

void Function_19(int iParam0) //Position: 0xC14 / 3092
{
	if (!Function_15(&iParam0))
	{
		Function_20(&iParam0, 0.0f);
	}
	return;
}

void Function_20(vector3 vParam0) //Position: 0xC2B / 3115
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_22(&vParam0, 1);
	Function_21(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_21(var uParam0, int iParam1) //Position: 0xC50 / 3152
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

void Function_22(var uParam0, int iParam1) //Position: 0xC66 / 3174
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_23(vector3 vParam0) //Position: 0xC77 / 3191
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

void Function_24(struct<133> Param0) //Position: 0xC8E / 3214
{
	var uVar0;
	
	*(&Param0 + 64) = GRINGO_GET_REQUESTING_ACTOR();
	if (IS_ACTOR_VALID(&Param0 + 64))
	{
		uVar0 = GRINGO_GET_MSG_COMPONENT_CONTEXT();
		*(&Param0 + 24) = &uVar0;
		Function_23(&Param0 + 80);
		Function_19(&Param0 + 80);
		Param0.f_132 = 3;
		Param0.f_124 = 1;
		Function_2(&Param0);
	}
	return;
}

bool Function_25(struct<125> Param0) //Position: 0xCDA / 3290
{
	var uVar0;
	var uVar1;
	struct<2> Var2;
	struct<2> Var4;
	struct<2> Var6;
	
	uVar0 = GRINGO_GET_MSG_COMPONENT_CONTEXT();
	if (IS_GRINGO_COMPONENT_VALID(&uVar0))
	{
		if (IS_ACTOR_ALIVE(GET_TARGET_ACTOR()))
		{
			if (!Param0.f_124)
			{
				if (Function_15(&Param0 + 80))
				{
					if (Function_13(&Param0 + 80) > Param0.f_16)
					{
						return 0;
					}
				}
				if (Global_6623)
				{
					return 0;
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
				if (&Param0 + 64 != GRINGO_GET_REQUESTING_ACTOR() && iParam1 != 0)
				{
					if (Function_13(&Param0 + 80) <= Param0.f_16)
					{
						iParam1 = 1;
						return 1;
					}
					return 0;
				}
				iParam1 = 1;
				return 1;
			}
			if (&Param0 + 64 == GRINGO_GET_REQUESTING_ACTOR())
			{
				iParam1 = 0;
				return 1;
			}
		}
	}
	Function_8("Gringo use component not valid!", 2.0f, 0, 2, 1, 0);
	return 0;
}

void Function_26(struct<181> Param0) //Position: 0xDF7 / 3575
{
	int iVar0;
	
	*(&Param0 + 24) = &uParam1;
	Param0 = 5.0f;
	Param0.f_4 = 0,5f;
	Param0.f_8 = 1.0f;
	Param0.f_12 = 1.0f;
	Param0.f_16 = 15.0f;
	Param0.f_48 = 20;
	Param0.f_52 = 0,5f;
	Param0.f_56 = 0.0f;
	Param0.f_60 = 0.0f;
	*(&Param0 + 72) = GET_TARGET_ACTOR();
	Param0.f_136 = 0.0f;
	Param0.f_172 = 60.0f;
	Param0.f_176 = 15.0f;
	Param0.f_180 = 10.0f;
	GET_GRINGO_FLOAT_ATTR(&Param0, "UseTime", &uParam1);
	GET_GRINGO_FLOAT_ATTR(&Param0 + 4, "MoveAllowance", &uParam1);
	GET_GRINGO_FLOAT_ATTR(&Param0 + 8, "ActivationRadius", &uParam1);
	GET_GRINGO_FLOAT_ATTR(&Param0 + 12, "AutoDisengageTime", &uParam1);
	GET_GRINGO_FLOAT_ATTR(&Param0 + 16, "ReuseDelay", &uParam1);
	GET_GRINGO_INT_ATTR(&Param0 + 48, "CompletionRewardAmount", &uParam1);
	GET_GRINGO_FLOAT_ATTR(&Param0 + 52, "StartingPhaseTimeout", &uParam1);
	GET_GRINGO_FLOAT_ATTR(&Param0 + 56, "UseDirectionToleranceDegrees", &uParam1);
	GET_GRINGO_FLOAT_ATTR(&Param0 + 60, "UseLocationTolerance", &uParam1);
	GET_GRINGO_FLOAT_ATTR(&Param0 + 136, "MinimumUseTime", &uParam1);
	iVar0 = 0;
	*(&Param0 + 32) = GET_GRINGO_STRING_ATTR("CompletionReward", &uParam1, &iVar0);
	if (iVar0 >= 0)
	{
		Param0.f_128 = 1;
	}
	*(&Param0 + 40) = GET_GRINGO_STRING_ATTR("UseName", &uParam1, &iVar0);
	return;
}

