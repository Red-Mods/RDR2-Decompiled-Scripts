//Decompiled with MagicRDR v1.0
//Function Count : 15
//Statics Count : 4
//Natives Count : 39
//Parameters Count : 1

#region Local Var
	var uLocal_0 = 0;
	bool bLocal_1 = false;
	float fLocal_2 = 0.0f;
	bool bScriptParam_0 = false;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	bool bVar1;
	var uVar2;
	
	if (!IS_GRINGO_COMPONENT_VALID(bScriptParam_0))
	{
		LOG_ERROR("Small_Brain: Attempting to attach a gringo brain that has no valid gringo base.");
		DESTROY_OBJECT(GRINGO_GET_MY_OBJECT_REF());
	}
	iVar0 = 0;
	bVar1 = false;
	Function_11(&uVar2);
	while (IS_GRINGO_ACTIVE())
	{
		if (IS_ACTOR_VALID(GET_TARGET_ACTOR()))
		{
			if (IS_ACTOR_ALIVE(GET_TARGET_ACTOR()))
			{
				GRINGO_HAS_PENDING_MESSAGE();
				if (Function_10(GET_TARGET_ACTOR()))
				{
					iVar0 = 4;
				}
				if (Function_6(&uVar2) <= Function_5(bScriptParam_0))
				{
					if (!Function_4())
					{
						iVar0 = 4;
					}
				}
				Function_3(&iVar0, bScriptParam_0);
			}
			else
			{
				iVar0 = 4;
				Function_1();
			}
		}
		else
		{
			iVar0 = 4;
			Function_1();
		}
		GRINGO_WAIT(bVar1);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0xD9 / 217
{
	bool bVar0;
	
	bVar0 = GET_TARGET_ACTOR();
	if (IS_ACTOR_VALID(bVar0))
	{
		if (GRINGO_OWNS_ACTOR_ANIMS(bVar0))
		{
			RESET_ANIM_SET_FOR_ACTOR(bVar0, 1);
		}
		Function_2(bVar0, 1);
		GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS(bVar0);
		GRINGO_REPORT_USE_FINISHED(bVar0, true);
		if (DECOR_CHECK_EXIST(bVar0, "bACTOR_AVOID_SMALLBRAINS"))
		{
			DECOR_REMOVE(bVar0, "bACTOR_AVOID_SMALLBRAINS");
		}
		if (!IS_ACTOR_LOCAL_PLAYER(bVar0))
		{
			if (Function_4())
			{
				DEREFERENCE_ACTOR(bVar0);
			}
			else
			{
				DESTROY_ACTOR(bVar0);
			}
		}
	}
	if (IS_OBJECT_VALID(GRINGO_GET_MY_OBJECT_REF()))
	{
		DESTROY_OBJECT(GRINGO_GET_MY_OBJECT_REF());
	}
	return;
}

void Function_2(bool bParam0, bool bParam1) //Position: 0x17C / 380
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_PREDICATE_OVERRIDE_CLEAR(bParam0, Global_26137[3]);
		AI_PREDICATE_OVERRIDE_CLEAR(bParam0, Global_26137[4]);
	}
	else
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(bParam0, Global_26137[3], 0);
		AI_PREDICATE_OVERRIDE_SET_BOOL(bParam0, Global_26137[4], 0);
	}
	return;
}

void Function_3(var uParam0, bool bParam1) //Position: 0x1C2 / 450
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_TARGET_ACTOR();
	if (Global_3379)
	{
		*uParam0 = 4;
	}
	switch (*uParam0)
	{
		case 0x00000000:
			Function_2(bVar0, 1);
			*uParam0 = 1;
			DECOR_SET_BOOL(bVar0, "bDrunkBrainActive", true);
			break;
		
		case 0x00000001:
			SET_ACTOR_DRUNK(bVar0, 1);
			Function_2(bVar0, 0);
			if (!IS_ACTOR_LOCAL_PLAYER(bVar0))
			{
				TASK_PRIORITY_SET(bVar0, 2);
				TASK_WANDER(bVar0, 3212836864);
			}
			fLocal_2 = GET_CURRENT_GAME_TIME();
			bLocal_1 = RAND_FLOAT_RANGE(10.0f, Function_5(bParam1));
			*uParam0 = 2;
			break;
		
		case 0x00000002:
			if ((GET_CURRENT_GAME_TIME() - fLocal_2) <= bLocal_1)
			{
				SET_ACTOR_PASSED_OUT(bVar0, 1);
				fLocal_2 = GET_CURRENT_GAME_TIME();
				bLocal_1 = RAND_FLOAT_RANGE(10.0f, Function_5(bParam1));
				*uParam0 = 3;
			}
			else if (!IS_ACTOR_DRUNK(bVar0))
			{
				*uParam0 = 3;
			}
			break;
		
		case 0x00000003:
			if ((GET_CURRENT_GAME_TIME() - fLocal_2) <= bLocal_1)
			{
				SET_ACTOR_PASSED_OUT(bVar0, 0);
				fLocal_2 = GET_CURRENT_GAME_TIME();
				bLocal_1 = RAND_FLOAT_RANGE(20.0f, Function_5(bParam1));
				*uParam0 = 2;
			}
			else if (!IS_ACTOR_DRUNK(bVar0))
			{
				*uParam0 = 4;
			}
			break;
		
		case 0x00000004:
			bVar1 = false;
			if (IS_ACTOR_VALID(bVar0))
			{
				if (MAKE_ACTOR_READY_FOR_ACTION(bVar0, 1))
				{
					SET_ACTOR_DRUNK(bVar0, 0);
					if (DECOR_CHECK_EXIST(bVar0, "bDrunkBrainActive"))
					{
						DECOR_REMOVE(bVar0, "bDrunkBrainActive");
					}
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				Function_1();
				bVar1 = false;
			}
			break;
	}
	return;
}

bool Function_4() //Position: 0x346 / 838
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), GET_TARGET_ACTOR(), 1065353216, 1117126656, 1, 1, 0);
}

float Function_5(bool bParam0) //Position: 0x362 / 866
{
	int iVar0;
	bool bVar1;
	
	bVar1 = GRINGO_GET_FIRST_NAMED_CHILD("Settings", 0, bParam0);
	if (GET_GRINGO_FLOAT_ATTR(&iVar0, "TimeOutSeconds", bVar1))
	{
		return iVar0;
	}
	return -1.0f;
}

var Function_6(int iParam0) //Position: 0x39A / 922
{
	if (Function_9(iParam0))
	{
		if (Function_7(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_7(int iParam0) //Position: 0x462 / 1122
{
	return Function_8(*iParam0, 2);
}

int Function_8(var uParam0, int iParam1) //Position: 0x46F / 1135
{
	return (uParam0 && iParam1) == 0;
}

bool Function_9(int iParam0) //Position: 0x47C / 1148
{
	return Function_8(*iParam0, 1);
}

bool Function_10(bool bParam0) //Position: 0x489 / 1161
{
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bParam0), "bACTOR_AVOID_SMALLBRAINS"))
	{
		return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "bACTOR_AVOID_SMALLBRAINS");
	}
	return 0;
}

void Function_11(int iParam0) //Position: 0x4DA / 1242
{
	if (!Function_9(iParam0))
	{
		Function_12(iParam0, 0.0f);
	}
	return;
}

void Function_12(var uParam0, float fParam1) //Position: 0x4EF / 1263
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_14(uParam0, 1);
	Function_13(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_13(var uParam0, int iParam1) //Position: 0x510 / 1296
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_14(var uParam0, var uParam1) //Position: 0x523 / 1315
{
	*uParam0 = (*uParam0 || uParam1);
	return;
}

