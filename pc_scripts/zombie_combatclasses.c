//Decompiled with MagicRDR v1.0
//Function Count : 25
//Statics Count : 0
//Natives Count : 58
//Parameters Count : 0

#region Local Var
#endregion

void main() //Position: 0x0 / 0
{
	var uVar0;
	var uVar1;
	
	while (!IS_EXITFLAG_SET())
	{
		if (COMBAT_CLASS_REQUEST_EXISTS())
		{
			uVar0 = COMBAT_CLASS_REQUEST_GET_ACTOR();
			uVar1 = Function_24();
			if (GET_ACTOR_FACTION(&uVar0) == 32)
			{
				Function_15(&uVar0);
			}
			else
			{
				Function_1(&uVar0, uVar1);
			}
			COMBAT_CLASS_REQUEST_COMPLETED();
		}
		WAIT(false);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0, int iParam1) //Position: 0x47 / 71
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return;
	}
	switch (iParam1)
	{
		case 0x00000000:
			Function_14(&iParam0);
			break;
		
		case 0x00000001:
			Function_13(&iParam0);
			break;
		
		case 0x00000002:
			Function_12(&iParam0);
			break;
		
		case 0x00000005:
			Function_11(&iParam0);
			break;
		
		case 0x00000004:
			Function_10(&iParam0);
			break;
		
		case 0x00000003:
			Function_9(&iParam0);
			break;
		
		case 0x00000006:
			Function_8(&iParam0);
			break;
		
		case 0x00000007:
			Function_7(&iParam0);
			break;
		
		case 0x00000008:
			Function_6(&iParam0);
			break;
		
		case 0x00000009:
			Function_4(&iParam0);
			break;
		
		default:
			Function_2(&iParam0);
			break;
	}
	if (GET_ACTORENUM_SPECIES(GET_ACTOR_ENUM(&iParam0)) == 12)
	{
		if (RAND_INT_RANGE(false, 10000) <= 3000)
		{
			ACTOR_ENABLE_VARIABLE_MESH(&iParam0, 6, true);
		}
	}
	return;
}

void Function_2(int iParam0) //Position: 0x121 / 289
{
	COMBAT_CLASS_AI_CLEAR_ALL_ATTRIBS(&iParam0);
	COMBAT_CLASS_AI_SET_FIGHT_ATTACK_DISTANCE(&iParam0, 0,4f, 1,1f);
	COMBAT_CLASS_AI_SET_FIGHT_DESIRED_DISTANCE(&iParam0, 0,6f, 1,1f);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS(&iParam0, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 29, 3,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 30, 1.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&iParam0, 50.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&iParam0, 1.0f, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 0, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 4, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 1, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 2, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 3, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 8, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 9, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 5, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 6, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 7, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 12, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 17, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 18, false);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 31, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 0, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 1, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 2, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 4, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 5, 80.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 3, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 6, 0,25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 7, 11.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 10, (2.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 11, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 12, 6.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 13, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 14, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 15, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 17, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 18, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 20, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 21, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 22, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 23, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 24, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 25, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 26, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 27, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 28, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 32, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 33, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 34, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 35, 12.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 36, 0,75f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 37, 12.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 41, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 42, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 43, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 44, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 48, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 49, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 46, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 47, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 45, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 53, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 54, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 55, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 56, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 57, -0,05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 58, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 59, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 60, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 61, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 63, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 50, -0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 51, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 52, 0,25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 8, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 62, -1.0f);
	TOUGH_ARMOUR_SET_TUNING_REGENERATION_RATE(&iParam0, 10.0f);
	TOUGH_ARMOUR_SET_TUNING_PAD_ARMOUR(&iParam0, 0.0f);
	Function_3(&iParam0, -100.0f);
	AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(&iParam0, -1.0f);
	AI_PERCEPTION_SET_VISUAL_ID_TIME(&iParam0, 0.0f);
	return;
}

void Function_3(var uParam0, bool bParam1) //Position: 0x4DF / 1247
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		TOUGH_ARMOUR_SET_TUNING_HIT_DEDUCTION(&uParam0, iVar0, bParam1);
		iVar0++;
	}
	return;
}

void Function_4(int iParam0) //Position: 0x502 / 1282
{
	Function_2(&iParam0);
	Function_5(&iParam0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 48, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 49, 0.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&iParam0, 90.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 54, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 53, 0,85f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 55, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 56, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 57, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 31, -1.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&iParam0, 0,5f, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 8, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 5, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 18, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 25, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 26, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 63, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 9, 75.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 13, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 16, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 22, 40.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 27, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 28, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 43, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 39, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 17, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 18, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 10, (0,5f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 11, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 0, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 1, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 6, 1.0f);
	SET_ACTOR_VISION_MAX_RANGE(&iParam0, 75.0f, 1);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&iParam0, 180.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 14, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 15, 1,5f);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&iParam0, true);
	return;
}

void Function_5(int iParam0, int iParam1) //Position: 0x6CB / 1739
{
	int iVar0;
	
	if (IS_ACTOR_PLAYER(&iParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(&iParam0);
	iVar0 = AI_PREDICATE_FIND_NAMED("Guard", 0);
	if (AI_PREDICATE_IS_VALID(&iVar0))
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(&iParam0, &iVar0, iParam1);
	}
	return;
}

void Function_6(int iParam0) //Position: 0x704 / 1796
{
	Function_2(&iParam0);
	Function_5(&iParam0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 48, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 49, 0.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&iParam0, 85.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 54, -0,05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 53, 0,65f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 55, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 56, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 57, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 31, 30.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&iParam0, 0,5f, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 8, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 5, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 18, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 25, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 26, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 63, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 9, 75.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 13, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 16, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 22, 40.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 27, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 28, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 43, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 39, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 17, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 18, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 10, (0,5f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 11, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 0, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 1, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 6, 1.0f);
	SET_ACTOR_VISION_MAX_RANGE(&iParam0, 75.0f, 1);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&iParam0, 150.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 14, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 15, 2,25f);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&iParam0, true);
	return;
}

void Function_7(int iParam0) //Position: 0x8D9 / 2265
{
	Function_2(&iParam0);
	Function_5(&iParam0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 48, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 49, 0.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&iParam0, 80.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 54, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 53, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 55, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 56, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 57, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 31, 30.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&iParam0, 0,5f, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 8, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 5, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 18, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 25, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 26, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 63, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 9, 75.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 13, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 16, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 22, 40.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 27, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 28, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 43, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 39, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 17, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 18, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 10, (0,5f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 11, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 0, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 1, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 6, 1.0f);
	SET_ACTOR_VISION_MAX_RANGE(&iParam0, 75.0f, 1);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&iParam0, 135.0f);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&iParam0, true);
	return;
}

void Function_8(int iParam0) //Position: 0xA94 / 2708
{
	Function_2(&iParam0);
	Function_5(&iParam0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 12, false);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&iParam0, 60.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 55, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 56, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 57, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 54, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 53, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 59, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 31, 20.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&iParam0, 1.0f, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 9, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 13, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 16, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 22, 240.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 27, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 28, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 43, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 39, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 17, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 18, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 19, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 10, (1.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 11, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 0, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 1, 10.0f);
	return;
}

void Function_9(int iParam0) //Position: 0xBE6 / 3046
{
	Function_2(&iParam0);
	Function_5(&iParam0, 1);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&iParam0, 70.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 54, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 53, 0,4f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 55, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 56, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 57, -0,05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 59, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 31, 30.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&iParam0, 0,5f, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 8, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 5, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 18, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 25, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 26, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 63, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 9, 75.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 13, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 16, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 22, 40.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 27, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 28, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 43, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 39, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 17, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 18, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 10, (0,5f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 11, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 0, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 1, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 6, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 14, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 15, 1,5f);
	return;
}

void Function_10(int iParam0) //Position: 0xD96 / 3478
{
	Function_2(&iParam0);
	Function_5(&iParam0, 1);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&iParam0, 60.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 54, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 53, 0,4f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 55, 0,25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 56, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 57, -0,05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 59, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 31, 20.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&iParam0, 0,5f, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 8, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 9, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 13, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 22, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 27, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 28, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 43, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 17, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 18, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 19, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 10, (1.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 11, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 0, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 1, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 14, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 15, 2,25f);
	return;
}

void Function_11(int iParam0) //Position: 0xF12 / 3858
{
	Function_2(&iParam0);
	Function_5(&iParam0, 1);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&iParam0, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 54, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 53, 0,4f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 55, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 56, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 57, -0,05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 59, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 31, 10.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&iParam0, 0,5f, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 9, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 13, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 22, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 27, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 28, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 43, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 17, 1,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 18, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 19, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 10, (1.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 11, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 0, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 1, 10.0f);
	return;
}

void Function_12(int iParam0) //Position: 0x106F / 4207
{
	Function_2(&iParam0);
	Function_5(&iParam0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 0, false);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 3, 0,85f);
	return;
}

void Function_13(int iParam0) //Position: 0x1096 / 4246
{
	Function_2(&iParam0);
	Function_5(&iParam0, 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&iParam0, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 54, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 53, 0,4f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 55, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 56, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 57, -0,05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 59, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 31, 10.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&iParam0, 0,5f, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 9, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 13, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 22, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 27, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 28, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 43, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 17, 1,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 18, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 19, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 10, (1.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 11, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 0, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 1, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 6, 0,25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 4, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 5, 80.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 3, 0,25f);
	return;
}

void Function_14(int iParam0) //Position: 0x1223 / 4643
{
	Function_2(&iParam0);
	Function_5(&iParam0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 28, -1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 59, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 6, 0,01f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 3, 0,85f);
	return;
}

void Function_15(int iParam0) //Position: 0x1264 / 4708
{
	var uVar0;
	var uVar1;
	
	Function_2(&iParam0);
	DECOR_SET_BOOL(&iParam0, "Zombie", true);
	Function_23(&iParam0);
	SET_ACTOR_ALLOW_DISARM(&iParam0, false);
	SET_CRIPPLE_ENABLE(&iParam0, 0);
	SET_CRIPPLE_FLAG(&iParam0, false);
	SET_ALLOW_COLD_WEATHER_BREATH(&iParam0, 0);
	SET_ACTOR_CAN_PLAY_GESTURES(&iParam0, false);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&iParam0, 0);
	SET_ACTOR_ALLOW_NM_BUMP_REACTIONS(&iParam0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iParam0, false);
	SET_ACTOR_ALLOW_WEAPON_REACTION_FLEE(&iParam0, 0);
	SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(&iParam0, 1);
	COMBAT_CLASS_AI_SET_FIGHT_DESIRED_DISTANCE(&iParam0, 0.0f, 1,115f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 28, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 33, 15.0f);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&iParam0, 155.0f);
	AI_SET_NAV_HAZARD_AVOIDANCE_ENABLED(&iParam0, 0, 0);
	if (Function_21(&iParam0))
	{
		SET_ACTOR_SEX(&iParam0, 1);
	}
	else
	{
		SET_ACTOR_SEX(&iParam0, 0);
	}
	if (Function_20(&iParam0))
	{
		DECOR_SET_BOOL(&iParam0, "Hogtie_DontGiveWeapons", true);
		AI_SET_TR_PROGRAM_FOR_ACTOR(&iParam0, "Zombie");
		MEMORY_ALLOW_TAKE_COVER(&iParam0, 0);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&iParam0, false);
		COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(&iParam0, 0);
		ACTOR_SET_NEXT_EQUIP_SLOT(&iParam0, 2, 1);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 60, 1.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 53, 0,2f);
		COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&iParam0, 3.0f, 3.0f);
		COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&iParam0, 10.0f);
		uVar0 = AI_PREDICATE_FIND_NAMED("ToxicZombie", 0);
		if (AI_PREDICATE_IS_VALID(&uVar0))
		{
			AI_PREDICATE_OVERRIDE_SET_BOOL(&iParam0, &uVar0, 1);
		}
	}
	else
	{
		if (Function_19(&iParam0))
		{
			DECOR_SET_BOOL(&iParam0, "FastZombie", true);
		}
		else if (Function_18(&iParam0))
		{
			DECOR_SET_BOOL(&iParam0, "BruiserZombie", true);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 28, 12,5f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 29, 12.0f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 30, 0,5f);
		}
		uVar1 = AI_PREDICATE_FIND_NAMED("NonToxic", 0);
		if (AI_PREDICATE_IS_VALID(&uVar1))
		{
			AI_PREDICATE_OVERRIDE_SET_BOOL(&iParam0, &uVar1, 1);
		}
	}
	SET_ACTOR_HARD_LOCK_AQUIRE_BONE_CASUAL(&iParam0, "head");
	if (Function_19(&iParam0))
	{
		SET_ACTOR_BASE_SCORE(&iParam0, 220.0f, 0);
		SET_ACTOR_BASE_SCORE(&iParam0, 2030.0f, 1);
		SET_ACTOR_HARD_LOCK_AQUIRE_BONE(&iParam0, "head");
	}
	else if (Function_18(&iParam0))
	{
		SET_ACTOR_BASE_SCORE(&iParam0, 220.0f, 0);
		SET_ACTOR_BASE_SCORE(&iParam0, 2030.0f, 1);
	}
	else if (Function_17(&iParam0))
	{
		SET_ACTOR_BASE_SCORE(&iParam0, 100.0f, 0);
		SET_ACTOR_BASE_SCORE(&iParam0, 1000.0f, 1);
	}
	else if (Function_16(&iParam0))
	{
		SET_ACTOR_BASE_SCORE(&iParam0, 195.0f, 0);
		SET_ACTOR_BASE_SCORE(&iParam0, 1995.0f, 1);
	}
	else
	{
		SET_ACTOR_BASE_SCORE(&iParam0, 220.0f, 0);
		SET_ACTOR_BASE_SCORE(&iParam0, 2020.0f, 1);
	}
	return;
}

bool Function_16(int iParam0) //Position: 0x1518 / 5400
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	if (bVar0 <= 1240 && bVar0 >= 1251)
	{
		return 1;
	}
	return 0;
}

bool Function_17(int iParam0) //Position: 0x1539 / 5433
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	if (bVar0 <= 1248 && bVar0 >= 1251)
	{
		return 1;
	}
	return 0;
}

bool Function_18(int iParam0) //Position: 0x155A / 5466
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	if (bVar0 <= 1214 && bVar0 >= 1221)
	{
		return 1;
	}
	return 0;
}

bool Function_19(int iParam0) //Position: 0x157B / 5499
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	if (bVar0 <= 1204 && bVar0 >= 1213)
	{
		return 1;
	}
	return 0;
}

bool Function_20(int iParam0) //Position: 0x159C / 5532
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	if (bVar0 <= 1222 && bVar0 >= 1227)
	{
		return 1;
	}
	return 0;
}

bool Function_21(int iParam0) //Position: 0x15BD / 5565
{
	switch (GET_ACTOR_ENUM(&iParam0))
	{
		case 0x000004B7:
		case 0x000004B9:
		case 0x000004BD:
		case 0x000004BE:
		case 0x000004C5:
		case 0x000004CE:
			return 1;
			break;
	}
	if (Function_20(&iParam0) || Function_22(&iParam0))
	{
		if (!IS_ACTOR_MALE(&iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int Function_22(int iParam0) //Position: 0x1614 / 5652
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	if (bVar0 <= 3 && bVar0 >= 836)
	{
		if (DECOR_CHECK_EXIST(&iParam0, "Zombie"))
		{
			return DECOR_GET_BOOL(&iParam0, "Zombie");
		}
	}
	return 0;
}

void Function_23(var uParam0) //Position: 0x1653 / 5715
{
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(&uParam0, "nocrime"))
	{
		DECOR_SET_BOOL(&uParam0, "nocrime", true);
	}
	return;
}

var Function_24() //Position: 0x168A / 5770
{
	return COMBAT_CLASS_REQUEST_GET_ENUM_INT();
}

