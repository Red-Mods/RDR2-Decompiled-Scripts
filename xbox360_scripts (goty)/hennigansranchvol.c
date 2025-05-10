//Decompiled with MagicRDR v1.0
//Function Count : 68
//Statics Count : 517
//Natives Count : 129
//Parameters Count : 2

#region Local Var
	struct<949> Local_0 = { 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 2, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_238 = 0;
	Local_239 = { StackVal, ScriptParam_0 };
	Function_67("Initializing Hennigan's Ranch Volumes", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_241 = 500;
		uLocal_242 = Function_66();
		switch (iLocal_238)
		{
			case 0x00000000:
				if (Function_64())
				{
					bLocal_301 = Function_63(Local_0, "hennigansRanch", ScriptParam_0);
					iLocal_238 = 1;
				}
				bLocal_241 = false;
				break;
			
			case 0x00000001:
				if (IS_WORLD_SECTOR_LOADED(bLocal_301))
				{
					iLocal_238 = 2;
				}
				bLocal_241 = false;
				break;
			
			case 0x00000002:
				Function_62(&iLocal_243);
				Function_61(&iLocal_243, &iLocal_246, 4, Local_0.f_16, 4294967295, 4);
				Function_61(&iLocal_243, &iLocal_246, 5, Local_0.f_72, 4294967295, 65802);
				Function_61(&iLocal_243, &iLocal_246, 5, Local_0.f_472, 4294967295, 65800);
				Function_61(&iLocal_243, &iLocal_246, 5, Local_0.f_108, 4294967295, 65802);
				Function_61(&iLocal_243, &iLocal_246, 5, Local_0.f_84, 4294967295, 65802);
				Function_61(&iLocal_243, &iLocal_246, 5, Local_0.f_96, 4294967295, 65802);
				Function_61(&iLocal_243, &iLocal_246, 5, Local_0.f_172, 4294967295, 2314);
				Function_61(&iLocal_243, &iLocal_246, 5, Local_0.f_120, 4294967295, 65802);
				Function_61(&iLocal_243, &iLocal_246, 5, Local_0.f_408, 4294967295, 16650);
				Function_61(&iLocal_243, &iLocal_246, 5, Local_0.f_432, 4294967295, 16648);
				Function_61(&iLocal_243, &iLocal_246, 5, Local_0.f_224, 4294967295, 131338);
				Function_61(&iLocal_243, &iLocal_246, 5, Local_0.f_188, 4294967295, 33034);
				Function_61(StackVal, &iLocal_243, &iLocal_246, 5, 4294967295, 0x1000008);
				Function_61(&iLocal_243, &iLocal_246, 5, Local_0.f_464, 4294967295, 0x1000008);
				Function_61(&iLocal_243, &iLocal_246, 5, Local_0.f_468, 4294967295, 0x1000008);
				Function_61(StackVal, &iLocal_243, &iLocal_246, 5, 4294967295, 16650);
				Function_61(&iLocal_243, &iLocal_246, 5, Local_0.f_12, 4294967295, 16650);
				Function_61(&iLocal_243, &iLocal_246, 5, Local_0.f_136, 4294967295, 65794);
				iLocal_500 = Function_59(&Local_302, bLocal_301, "store01", 1, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_172, 0, 0);
				if (iLocal_500 <= 0 && iLocal_500 > Local_302)
				{
					Function_58(&(Local_302[iLocal_5005]), 33);
				}
				iLocal_499 = Function_59(&Local_302, bLocal_301, "store01", 2, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_172, 1, 0);
				if (iLocal_499 <= 0 && iLocal_499 > Local_302)
				{
					Function_58(&(Local_302[iLocal_4995]), 33);
				}
				Function_59(&Local_302, bLocal_301, "ncottage01", 1, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_84, 0, 0);
				Function_59(&Local_302, bLocal_301, "ncottage01", 2, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_84, 0, 0);
				iLocal_501 = Function_59(&Local_302, bLocal_301, "stockade01", 3, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_444, 0, 0);
				if (iLocal_501 <= 0 && iLocal_501 > Local_302)
				{
					Function_57(Local_302[iLocal_5015], 1);
				}
				iLocal_498 = Function_59(&Local_302, bLocal_301, "ncottage02", 1, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 1);
				if (!Global_3380)
				{
					if (iLocal_498 <= 0 && iLocal_498 > Local_302)
					{
						OPEN_DOOR_DIRECTION(Local_302[iLocal_4985], true);
					}
				}
				Function_59(&Local_302, bLocal_301, "ncottage02", 2, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_59(&Local_302, bLocal_301, "ncottage03", 1, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_59(&Local_302, bLocal_301, "blacksmith01", 1, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_59(&Local_302, bLocal_301, "trainStation01", 2, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_59(&Local_302, bLocal_301, "trainStation01", 3, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_59(&Local_302, bLocal_301, "trainStation01", 4, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_59(&Local_302, bLocal_301, "trainStation01", 5, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_59(&Local_302, bLocal_301, "trainStation01", 6, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_59(&Local_302, bLocal_301, "trainStation01", 7, &Global_29155[ScriptParam_010] + 20, 1, Local_0.f_420, 0, 0);
				Function_59(&Local_302, bLocal_301, "trainStation01", 8, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_59(&Local_302, bLocal_301, "stockade01", 1, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_59(&Local_302, bLocal_301, "stockade01", 2, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_59(&Local_302, bLocal_301, "stable03", 1, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_59(&Local_302, bLocal_301, "stable03", 2, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_59(&Local_302, bLocal_301, "stable03", 3, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_59(&Local_302, bLocal_301, "barn01", 1, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_59(&Local_302, bLocal_301, "barn01", 2, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_59(&Local_302, bLocal_301, "barn01", 3, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_59(&Local_302, bLocal_301, "barn01", 4, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_59(&Local_302, bLocal_301, "barn01", 5, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				iLocal_502 = Function_59(&Local_302, bLocal_301, "stable01", 1, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				iLocal_503 = Function_59(&Local_302, bLocal_301, "stable01", 2, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				iLocal_504 = Function_59(&Local_302, bLocal_301, "stable01", 3, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				iLocal_505 = Function_59(&Local_302, bLocal_301, "stable01", 4, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				iLocal_506 = Function_59(&Local_302, bLocal_301, "stable02", 1, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				iLocal_507 = Function_59(&Local_302, bLocal_301, "stable02", 2, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				iLocal_508 = Function_59(&Local_302, bLocal_301, "stable02", 3, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				iLocal_509 = Function_59(&Local_302, bLocal_301, "stable02", 4, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				iLocal_510 = Function_59(&Local_302, bLocal_301, "stable02", 7, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				iLocal_511 = Function_59(&Local_302, bLocal_301, "stable02", 8, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				iLocal_512 = Function_59(&Local_302, bLocal_301, "stable02", 9, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				iLocal_513 = Function_59(&Local_302, bLocal_301, "stable02", 10, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				iLocal_514 = Function_59(&Local_302, bLocal_301, "stable02", 11, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				if (!Function_56())
				{
					if (iLocal_502 <= 0 && iLocal_502 > Local_302)
					{
						Function_57(Local_302[iLocal_5025], 1);
					}
					if (iLocal_503 <= 0 && iLocal_503 > Local_302)
					{
						Function_57(Local_302[iLocal_5035], 1);
					}
					if (iLocal_504 <= 0 && iLocal_504 > Local_302)
					{
						Function_57(Local_302[iLocal_5045], 1);
					}
					if (iLocal_505 <= 0 && iLocal_505 > Local_302)
					{
						Function_57(Local_302[iLocal_5055], 1);
					}
					if (iLocal_506 <= 0 && iLocal_506 > Local_302)
					{
						Function_57(Local_302[iLocal_5065], 1);
					}
					if (iLocal_507 <= 0 && iLocal_507 > Local_302)
					{
						Function_57(Local_302[iLocal_5075], 1);
					}
					if (iLocal_508 <= 0 && iLocal_508 > Local_302)
					{
						Function_57(Local_302[iLocal_5085], 1);
					}
					if (iLocal_509 <= 0 && iLocal_509 > Local_302)
					{
						Function_57(Local_302[iLocal_5095], 1);
					}
					if (iLocal_510 <= 0 && iLocal_510 > Local_302)
					{
						Function_57(Local_302[iLocal_5105], 1);
					}
					if (iLocal_511 <= 0 && iLocal_511 > Local_302)
					{
						Function_57(Local_302[iLocal_5115], 1);
					}
					if (iLocal_512 <= 0 && iLocal_512 > Local_302)
					{
						Function_57(Local_302[iLocal_5125], 1);
					}
					if (iLocal_513 <= 0 && iLocal_513 > Local_302)
					{
						Function_57(Local_302[iLocal_5135], 1);
					}
					if (iLocal_514 <= 0 && iLocal_514 > Local_302)
					{
						Function_57(Local_302[iLocal_5145], 1);
					}
				}
				Function_59(&Local_302, bLocal_301, "stable02", 5, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_59(&Local_302, bLocal_301, "stable02", 6, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				iLocal_238 = 3;
				bLocal_241 = false;
				break;
			
			case 0x00000003:
				Function_55(&(Global_29008[Local_239]), 16);
				Function_54("Finished Initializing Hennigan's Ranch Volumes", 5.0f);
				iLocal_238 = 4;
				break;
			
			case 0x00000004:
				Function_16(&iLocal_243, &iLocal_246, uLocal_242, ScriptParam_0);
				Function_12(&Local_302, 0);
				break;
			
			case 0x00000005:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_241);
	}
	Function_4(&iLocal_243, &iLocal_246);
	Function_3(&Local_302);
	Function_2();
	Function_1(&(Global_29008[Local_239]), 16);
	Function_54("Unloaded Hennigan's Ranch Volumes", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0xAC4 / 2756
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_2() //Position: 0xADB / 2779
{
	RELEASE_LAYOUT_REF(Local_0);
	return;
}

void Function_3(int iParam0) //Position: 0xAE6 / 2790
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		if (IS_VOLUME_VALID(iParam0[iVar05]->f_12))
		{
			if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(iParam0[iVar05]->f_12))
			{
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0[iVar05]->f_12);
			}
			if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(iParam0[iVar05]->f_12))
			{
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0[iVar05]->f_12);
			}
		}
		iVar0++;
	}
	return;
}

void Function_4(var uParam0, int iParam1) //Position: 0xB40 / 2880
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (Function_11(iParam1[iVar03], 4))
		{
			SET_CURRENT_MAP(false);
			Function_10(iParam1[iVar03], 4);
		}
		if (Function_11(iParam1[iVar03], 8))
		{
			Function_5(0, 0, 30);
			Function_10(iParam1[iVar03], 8);
		}
		iVar0++;
	}
	return;
}

void Function_5(int iParam0, int iParam1, int iParam2) //Position: 0xB98 / 2968
{
	bool bVar0;
	
	if (StackVal == 4294967295)
	{
		LOG_ERROR("Calling WEATHER_CLEAR_OVERRIDE when you never set the override in the first place!");
		return;
	}
	if (StackVal || (StackVal || StackVal != 3 != 4) != 5)
	{
		Global_16524 = 2;
	}
	else if (StackVal || (StackVal || StackVal != 12 != 20) != 16)
	{
		Global_16524 = Global_16524.f_40;
	}
	else
	{
		Global_16524 = StackVal;
	}
	Global_16524.f_4 = 4294967295;
	Global_16524.f_16 = 0;
	if (!StackVal != Global_16524)
	{
		bVar0 = MAKE_TIME_OF_DAY(iParam0, iParam1, iParam2);
		Function_6(Global_16524, bVar0, 1);
	}
	return;
}

void Function_6(int iParam0, bool bParam1, bool bParam2) //Position: 0xC7E / 3198
{
	int iVar0;
	
	Function_9(iParam0);
	Function_8(bParam1);
	PRINTNL();
	if (StackVal == iParam0)
	{
		LOG_ERROR("New weather type is the same as the old weather type!");
		return;
	}
	if (!bParam2)
	{
		iVar0 = GET_HOUR(false);
		if (!((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19))
		{
			return;
		}
	}
	SET_WEATHER(iParam0, bParam1);
	Function_7();
	Global_16524.f_40 = StackVal;
	Global_16524.f_44 = GET_TIME_OF_DAY();
	Global_16524.f_48 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_16524 + 48, 0, 0, GET_MINUTES_FROM_TIME_OF_DAY(bParam1), 0);
	Global_16524.f_8 = iParam0;
	if (Global_16524.f_24 > 0.0f && Global_16524.f_28 > 0.0f)
	{
		if (iParam0 != 3 || iParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		else
		{
			SET_RAIN_AMOUNT(0.0f);
			SET_LIGHTNING_AMOUNT(0.0f);
		}
	}
	else
	{
		if (Global_16524.f_24 <= 0.0f)
		{
			SET_RAIN_AMOUNT(Global_16524.f_24);
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		else if (iParam0 != 3 || iParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		if (Global_16524.f_28 <= 0.0f)
		{
			SET_LIGHTNING_AMOUNT(Global_16524.f_28);
		}
		else if (iParam0 != 3 || iParam0 != 4)
		{
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
		}
	}
	return;
}

void Function_7() //Position: 0xDF7 / 3575
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_8(bool bParam0) //Position: 0xE03 / 3587
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

void Function_9(int iParam0) //Position: 0xE49 / 3657
{
	switch (iParam0)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			break;
		
		case 0x00000003:
			break;
		
		case 0x00000002:
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000005:
			break;
		
		default:
			break;
	}
	return;
}

void Function_10(var uParam0, int iParam1) //Position: 0xE8F / 3727
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_11(var uParam0, int iParam1) //Position: 0xEA9 / 3753
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_12(var uParam0, bool bParam1) //Position: 0xEC6 / 3782
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	var uVar8;
	bool bVar9;
	bool bVar10;
	
	bVar6 = Function_56();
	if (Global_30620 > *uParam0)
	{
		Global_30620 = 0;
	}
	iVar0 = Global_30620;
	while (iVar0 < Function_15((*uParam0 - 1), Global_30620 + 4))
	{
		bVar7 = (*uParam0)[iVar05];
		if (IS_DOOR_VALID(bVar7))
		{
			uVar8 = StackVal;
			if (uVar8 & 16384 >= 0)
			{
				uParam0[iVar05]->f_16 = GET_PERS_CHAR_FROM_OBJECT(DECOR_GET_OBJECT(bVar7, "owner"));
				Function_14(uParam0[iVar05], 16384);
				uVar8 = StackVal;
			}
			bVar1 = DECOR_GET_BOOL_VERBOSE(bVar7, "lockMe", &bVar2);
			bVar4 = DECOR_GET_BOOL_VERBOSE(bVar7, "unlockMe", &bVar5);
			if (uVar8 & 2 >= 0)
			{
				if (!(bVar1 || bVar4))
				{
					if (bVar6)
					{
						if (bParam1)
						{
							if (uVar8 & 1 == 0)
							{
								Function_13(uParam0[iVar05], 1);
								uVar8 = StackVal;
							}
						}
						else if (uVar8 & 1 >= 0)
						{
							Function_14(uParam0[iVar05], 1);
							uVar8 = StackVal;
						}
					}
					else if ((StackVal && Global_63399) < 0 && uVar8 & 1 != 0)
					{
						if (IS_VOLUME_VALID(uParam0[iVar05]->f_12))
						{
							bVar9 = false;
							if (IS_ACTOR_IN_VOLUME(Function_66(), uParam0[iVar05]->f_12))
							{
								bVar9 = true;
							}
							if (IS_PERS_CHAR_VALID(uParam0[iVar05]->f_16))
							{
								if (IS_PERS_CHAR_ALIVE(uParam0[iVar05]->f_16))
								{
									bVar10 = GET_ACTOR_FROM_PERS_CHAR(uParam0[iVar05]->f_16);
									if (IS_ACTOR_VALID(bVar10))
									{
										if (IS_ACTOR_IN_VOLUME(bVar10, uParam0[iVar05]->f_12))
										{
											bVar9 = true;
										}
									}
								}
							}
							if (!bVar9)
							{
								Function_13(uParam0[iVar05], 1);
								uVar8 = StackVal;
							}
							if (!DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(uParam0[iVar05]->f_12))
							{
								ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(uParam0[iVar05]->f_12);
							}
							if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(uParam0[iVar05]->f_12))
							{
								ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(uParam0[iVar05]->f_12);
							}
						}
						else
						{
							Function_13(uParam0[iVar05], 1);
							uVar8 = StackVal;
						}
					}
					else if ((StackVal && Global_63399) != 0 && uVar8 & 1 < 0)
					{
						Function_14(uParam0[iVar05], 1);
						uVar8 = StackVal;
						if (IS_VOLUME_VALID(uParam0[iVar05]->f_12))
						{
							if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(uParam0[iVar05]->f_12))
							{
								REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(uParam0[iVar05]->f_12);
							}
							if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(uParam0[iVar05]->f_12))
							{
								REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(uParam0[iVar05]->f_12);
							}
						}
					}
				}
			}
			if (bVar1)
			{
				if (!bVar2)
				{
					DECOR_REMOVE(bVar7, "lockMe");
				}
				if (uVar8 & 8192 == 0)
				{
					Function_13(uParam0[iVar05], 8192);
					uVar8 = StackVal;
				}
				if (uVar8 & 1 == 0)
				{
					Function_13(uParam0[iVar05], 1);
					uVar8 = StackVal;
				}
			}
			else if (bVar4)
			{
				if (!bVar5)
				{
					DECOR_REMOVE(bVar7, "unlockMe");
				}
				if (uVar8 & 8192 >= 0)
				{
					Function_14(uParam0[iVar05], 8192);
					uVar8 = StackVal;
				}
				if (uVar8 & 1 >= 0)
				{
					Function_14(uParam0[iVar05], 1);
					uVar8 = StackVal;
				}
			}
			bVar3 = IS_DOOR_LOCKED(bVar7);
			if (uVar8 & 1 >= 0)
			{
				if (Global_3387)
				{
					if (IS_VOLUME_VALID(uParam0[iVar05]->f_12) && uVar8 & 8192 != 0)
					{
						if (bVar3)
						{
							if (IS_ACTOR_IN_VOLUME(Function_66(), uParam0[iVar05]->f_12))
							{
								SET_DOOR_LOCK(bVar7, 0);
							}
						}
					}
				}
				else if (!bVar3)
				{
					SET_DOOR_LOCK(bVar7, 1);
				}
			}
			else if (Global_3387)
			{
				if (IS_VOLUME_VALID(uParam0[iVar05]->f_12) && uVar8 & 32768 < 0)
				{
					if (IS_ACTOR_IN_VOLUME(Function_66(), uParam0[iVar05]->f_12))
					{
						if (IS_DOOR_OPENED(bVar7))
						{
							CLOSE_DOOR(bVar7, 1.0f);
							Function_14(uParam0[iVar05], 32768);
						}
					}
				}
			}
			else if (bVar3)
			{
				SET_DOOR_LOCK(bVar7, 0);
			}
		}
		iVar0++;
	}
	Global_30620 = iVar0;
	return;
}

void Function_13(var uParam0, int iParam1) //Position: 0x1292 / 4754
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_14(var uParam0, int iParam1) //Position: 0x12A3 / 4771
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

int Function_15(int iParam0, bool bParam1) //Position: 0x12BD / 4797
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_16(var uParam0, var uParam1, bool bParam2, var uParam3) //Position: 0x12CF / 4815
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar1 = 0;
	uParam0->f_4 = 0;
	uVar2 = Global_3386;
	Global_3386 = 0;
	if (!Function_53(32) || !IS_ACTOR_VALID(bParam2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (Function_17(uParam1[iVar03], bParam2, uParam3, iVar1, uVar2))
		{
			iVar1 = 1;
		}
		iVar0++;
	}
	if (Global_3387)
	{
		uParam0->f_8 = 1;
	}
	else if (Global_3386)
	{
		uParam0->f_8 = 1;
	}
	else if (StackVal)
	{
		uParam0->f_8 = 0;
	}
}

bool Function_17(var uParam0, bool bParam1, int iParam2, var uParam3, bool bParam4) //Position: 0x1350 / 4944
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_52(uParam0))
	{
		return 0;
	}
	Function_1(&(Global_29008[iParam2]), 4194304);
	bVar0 = DECOR_GET_INT(StackVal, "locflag");
	if (bVar0 != 0 && *uParam0 != 5)
	{
		return 0;
	}
	bVar1 = uParam3;
	switch (*uParam0)
	{
		case 0x00000005:
			if ((bVar0 && 240) == 0)
			{
				return 0;
			}
			if (IS_ACTOR_IN_VOLUME(StackVal, bParam1))
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = false;
			}
			if ((bVar0 && 32) >= 0)
			{
				if (bVar1)
				{
					if (!Function_11(uParam0, 2))
					{
						if (!Function_11(uParam0, 8))
						{
							if (DECOR_CHECK_EXIST(StackVal, "customweather"))
							{
								Function_50(DECOR_GET_INT(StackVal, "customweather"), 0, 0, 30, 1);
								Function_49(uParam0, 8);
							}
						}
					}
				}
				else if (Function_11(uParam0, 2))
				{
					if (Function_11(uParam0, 8))
					{
						if (HUD_IS_FADED())
						{
							Function_5(0, 0, 0);
						}
						else
						{
							Function_5(0, 0, 30);
						}
						Function_10(uParam0, 8);
					}
				}
			}
			if ((bVar0 && 16) >= 0)
			{
				if (bVar1)
				{
					if (!Function_11(uParam0, 2))
					{
						if (!Function_11(uParam0, 4))
						{
							if (DECOR_CHECK_EXIST(StackVal, "ncustommap"))
							{
								SET_CURRENT_MAP(DECOR_GET_INT(StackVal, "ncustommap"));
								Function_49(uParam0, 4);
							}
						}
					}
				}
				else if (Function_11(uParam0, 2))
				{
					if (Function_11(uParam0, 4))
					{
						SET_CURRENT_MAP(false);
						Function_10(uParam0, 4);
					}
				}
			}
			if ((bVar0 && 128) >= 0)
			{
				if ((((((bVar1 && Function_48(iParam2)) && !Function_47(0, 0, 1, 1)) && !Global_3403) && !Global_3404) && !Function_46(2048)) && !IS_SCRIPT_VALID(Global_26316.f_60))
				{
					if (!Function_11(uParam0, 2))
					{
						if (!Function_11(uParam0, 16))
						{
							bVar2 = true;
							if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_VOLUME(StackVal), "lawAllowTrespassTime"))
							{
								if (StackVal > DECOR_GET_FLOAT(GET_OBJECT_FROM_VOLUME(GET_CURRENT_GAME_TIME()), "lawAllowTrespassTime"))
								{
									bVar2 = false;
								}
								else
								{
									DECOR_REMOVE(GET_OBJECT_FROM_VOLUME(StackVal), "lawAllowTrespassTime");
								}
							}
							if (Function_56())
							{
								bVar2 = false;
							}
							if (bVar2)
							{
								Function_49(uParam0, 16);
								Function_38(StackVal, 3, 28, GET_OBJECT_FROM_VOLUME(bParam1), 0);
							}
						}
					}
				}
				else if (Function_11(uParam0, 2))
				{
					if (Function_11(uParam0, 16))
					{
						Function_10(uParam0, 16);
					}
				}
			}
			if ((bVar0 && 64) >= 0)
			{
				if (bVar1 && !Global_3380)
				{
					if (!Function_11(uParam0, 2))
					{
						if (StackVal && DECOR_CHECK_EXIST(DECOR_CHECK_EXIST(StackVal, "factionswap"), "relationship"))
						{
							SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(StackVal, DECOR_GET_INT(StackVal, "factionswap"), DECOR_GET_INT(2, "relationship"));
						}
					}
				}
				else if (Function_11(uParam0, 2))
				{
					if (StackVal && DECOR_CHECK_EXIST(DECOR_CHECK_EXIST(StackVal, "factionswap"), "relationship"))
					{
						RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(DECOR_GET_INT(StackVal, "factionswap"), 2);
					}
				}
			}
			if (bVar1)
			{
				Function_49(uParam0, 2);
			}
			else
			{
				Function_10(uParam0, 2);
			}
			break;
		
		case 0x00000002:
		case 0x00000004:
			if (!Function_48(iParam2))
			{
				return 0;
			}
			if (IS_ACTOR_IN_VOLUME(StackVal, bParam1))
			{
				if (!Function_37(&(Global_29008[iParam2]), 262144))
				{
					if (!Function_11(uParam0, 1))
					{
						if (!Global_3377)
						{
							Function_36(StackVal, StackVal, *uParam0);
						}
						else
						{
							Global_3377 = 0;
						}
						Function_49(uParam0, 1);
					}
				}
				if (*uParam0 == 4)
				{
					if (!bParam4 && Function_48(iParam2))
					{
						Function_35(Global_29155[Global_29155[iParam210]10].f_20, Global_29155[iParam210].f_20);
					}
					Global_3386 = 1;
				}
				Function_18(iParam2);
			}
			else if (*uParam0 == 4)
			{
				Global_3386 = 0;
			}
			break;
	}
	return bVar1;
}

void Function_18(int iParam0) //Position: 0x1769 / 5993
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_37(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_55(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_23(473, 1, 0, 0);
		iVar0 = Function_22(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_23(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_23(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_23(476, 1, 0, 0);
		}
	}
	iVar1 = (Global_29155[iParam010].f_36 - 5);
	iVar2 = 8;
	while (iVar1 >= 30)
	{
		iVar1 = (iVar1 - 31);
		iVar2++;
	}
	if (iVar2 < 10)
	{
		Function_21(iVar2, iVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_21(7, 30);
	}
	if (Function_20(473) <= Function_19(473))
	{
		if (!Function_56())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

float Function_19(int iParam0) //Position: 0x1868 / 6248
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

float Function_20(int iParam0) //Position: 0x18A5 / 6309
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_21(int iParam0, bool bParam1) //Position: 0x18DE / 6366
{
	bool bVar0;
	
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	bVar0 = SHIFT_LEFT(true, bParam1);
	(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || bVar0);
	return;
	return;
}

var Function_22(int iParam0) //Position: 0x1945 / 6469
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_48(iParam0))
	{
		if (StackVal == 1)
		{
			iVar0 = iParam0;
		}
		else if (StackVal == 2)
		{
			iVar0 = Global_29155[iParam010];
		}
		else
		{
			iVar0 = Global_29155[iParam010];
			iVar0 = Global_29155[iVar010];
		}
	}
	return iVar0;
}

int Function_23(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x199D / 6557
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_INCREASE_INT_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_INT_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: iIncreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] + TO_FLOAT(bParam1));
	Function_34(iParam0, TO_FLOAT(bParam1), 1);
	Function_33(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_24(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			ADD_COLLECTABLE(&(Global_35278[iParam020]), Global_34573, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_24(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x1BBD / 7101
{
	char* cVar0;
	char* cVar1[32];
	struct<8> Var9;
	int iVar17;
	int iVar18;
	bool bVar19;
	bool bVar20;
	int iVar21;
	
	if (bParam3)
	{
		cVar0 = I2STR(ROUND(bParam2));
	}
	else
	{
		cVar0 = F2STR(bParam2, 6, 2);
	}
	strcpy(&Global_35278[iParam020] + 16, "", 32);
	if (bParam4)
	{
		if (bParam1)
		{
			strcpy(&cVar1, "+", 4);
		}
		else
		{
			strcpy(&cVar1, "-", 4);
		}
		stradd(&Global_35278[iParam020] + 16, &cVar1, 32);
	}
	if (bParam1)
	{
		iVar2 = 0;
	}
	else
	{
		iVar2 = 1;
	}
	if (Global_35278[iParam020].f_76 != 3 || Global_35278[iParam020].f_48 != 21)
	{
		stradd(&Global_35278[iParam020] + 16, "$", 32);
	}
	stradd(&Global_35278[iParam020] + 16, cVar0, 32);
	switch (Global_35278[iParam020].f_48)
	{
		case 0x00000010:
		case 0x00000011:
			strcpy(&Global_35278[iParam020] + 16, "", 32);
			break;
		
		case 0x00000016:
			if (bParam2 > 2000.0f)
			{
				stradd(&Global_35278[iParam020] + 16, " lbs", 32);
			}
			else
			{
				bParam2 = (bParam2 / 2000.0f);
				memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
				stradd(&Global_35278[iParam020] + 16, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
			if (bParam2 <= 60.0f)
			{
				bVar7 = false;
				bVar5 = (FLOOR(bParam2) / 60);
				if (bVar5 > 60)
				{
					bVar4 = (bVar5 / 60);
					bVar5 = (bVar5 - bVar4 * 60);
					bVar6 = FLOOR(((bParam2 - TO_FLOAT(bVar4 * 60 * 60)) - TO_FLOAT(bVar5 * 60)));
					if (bVar4 > 24)
					{
						bVar3 = (bVar4 / 24);
						bVar4 = (bVar4 - bVar3 * 24);
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar3), 32);
						if (bVar3 >= 1)
						{
							stradd(&Global_35278[iParam020] + 16, " days", 32);
						}
						else
						{
							stradd(&Global_35278[iParam020] + 16, " day", 32);
						}
						bVar7 = true;
					}
					if (bVar4 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_35278[iParam020] + 16, " ", 32);
						}
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar4), 32);
						stradd(&Global_35278[iParam020] + 16, " hr", 32);
						bVar7 = true;
					}
					if (bVar5 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_35278[iParam020] + 16, " ", 32);
						}
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar5), 32);
						stradd(&Global_35278[iParam020] + 16, " min", 32);
						bVar7 = true;
					}
					if (bVar6 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_35278[iParam020] + 16, " ", 32);
						}
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar6), 32);
						stradd(&Global_35278[iParam020] + 16, " sec", 32);
						bVar7 = false;
					}
				}
				else
				{
					stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar5), 32);
					stradd(&Global_35278[iParam020] + 16, " min", 32);
					bVar6 = FLOOR((bParam2 - TO_FLOAT(bVar5 * 60)));
					if (bVar6 >= 0)
					{
						stradd(&Global_35278[iParam020] + 16, " ", 32);
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar6), 32);
						stradd(&Global_35278[iParam020] + 16, " sec", 32);
					}
				}
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, cVar0, 32);
				stradd(&Global_35278[iParam020] + 16, " sec", 32);
			}
			break;
		
		case 0x00000018:
			memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
			bParam2 = (bParam2 * 3.28084f);
			if (bParam2 > 5280.0f)
			{
				bVar8 = false;
			}
			else
			{
				bParam2 = (bParam2 / 5280.0f);
				bVar8 = true;
			}
			if ((bParam2 - IntToFloat(FLOOR(bParam2))) < 0.0f)
			{
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(bParam2)), 32);
			}
			if (bVar8)
			{
				stradd(&Global_35278[iParam020] + 16, " mi", 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, " ft", 32);
			}
			break;
		
		case 0x00000019:
			memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
			if ((bParam2 - IntToFloat(FLOOR(bParam2))) < 0.0f)
			{
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(bParam2)), 32);
			}
			if (bParam2 < 1.0f)
			{
				stradd(&Global_35278[iParam020] + 16, " days", 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, " day", 32);
			}
			break;
		
		case 0x0000000F:
			if (iParam0 == 390)
			{
				stradd(&Global_35278[iParam020] + 16, UI_GET_STRING("stat_of"), 32);
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_19(390))), 32);
			}
			break;
	}
	CLEAR_STAT_MESSAGE();
	if (!Global_49306)
	{
		iVar21 = 0;
		switch (Global_35278[iParam020].f_48)
		{
			case 0x00000010:
			case 0x00000011:
			case 0x00000008:
			case 0x0000000C:
			case 0x00000009:
			case 0x0000000A:
			case 0x00000006:
				if (bParam6)
				{
					bVar19 = bParam2;
					bVar20 = 0.0f;
				}
				else if (bParam1)
				{
					bVar19 = (Function_20(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_20(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_31(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_29(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_27(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_26(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_25(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, false, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, false, 0);
						}
						break;
					}
			}
	}
}

var Function_25() //Position: 0x21EA / 8682
{
	int iVar0;
	
	return iVar0;
}

var Function_26(int iParam0) //Position: 0x21F2 / 8690
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_27(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2203 / 8707
{
	char* cVar0[32];
	
	if (bParam3)
	{
		if (iParam1 < 0)
		{
			strcpy(&cVar0, "lvl_", 32);
			straddi(&cVar0, iParam0 + 1, 32);
			stradd(&cVar0, "_icon", 32);
			return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
		}
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_28("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_28("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_28("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_28(char* cParam0, bool bParam1) //Position: 0x22F8 / 8952
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_29(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2311 / 8977
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_15(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_30(Function_15(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_30(int iParam0, int iParam1) //Position: 0x2376 / 9078
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_31(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2388 / 9096
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_CALCULATE_PROGRESSBAR_VALUES: STAT_INVALID");
		return;
	}
	if (Global_35278[iParam020].f_64 != 0.0f)
	{
		fVar0 = 100.0f;
	}
	else
	{
		fVar0 = Global_35278[iParam020].f_64;
	}
	fVar1 = Global_35278[iParam020].f_60;
	if (((Function_32(iParam0) != 19 || Function_32(iParam0) != 17) || Function_32(iParam0) != 10) || Function_32(iParam0) != 9)
	{
		if (fParam1 > fVar1)
		{
			fParam1 = fVar1;
		}
		if (fParam1 < fVar0)
		{
			fParam1 = fVar0;
		}
		if (fParam2 > -(fParam1 - fVar1))
		{
			fParam2 = -(fParam1 - fVar1);
		}
		if (fParam2 < (fVar0 - fParam1))
		{
			fParam2 = (fVar0 - fParam1);
		}
		fVar2 = ((fParam1 - fVar1) / (fVar0 - fVar1));
		fVar3 = (fParam2 / (fVar0 - fVar1));
		*uParam3 = ROUND((fVar2 * 100.0f));
		*uParam4 = ROUND((fVar3 * 100.0f));
	}
	else
	{
		*uParam3 = ROUND(((fParam1 * 100.0f) / fVar0));
		*uParam4 = ROUND(((fParam2 * 100.0f) / fVar0));
	}
}

int Function_32(int iParam0) //Position: 0x24B8 / 9400
{
	return Global_35278[iParam020].f_48;
}

void Function_33(int iParam0) //Position: 0x24C7 / 9415
{
	if (Global_35278[iParam020].f_64 == 0.0f)
	{
		if (Global_34581[iParam0] < Global_35278[iParam020].f_64)
		{
			PRINTSTRING("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMaxRange - ");
			PRINTSTRING(&(Global_35278[iParam020]));
			PRINTNL();
			LOG_WARNING("STAT_CHECK_RANGES: Attempting to increment a STAT out of its fMaxRange");
		}
	}
	if (Global_35278[iParam020].f_60 == 0.0f)
	{
		if (Global_34581[iParam0] > Global_35278[iParam020].f_60)
		{
			PRINTSTRING("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMinRange - ");
			PRINTSTRING(&(Global_35278[iParam020]));
			PRINTNL();
			LOG_ERROR("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMinRange");
		}
	}
	return;
}

int Function_34(int iParam0, float fParam1, bool bParam2) //Position: 0x2661 / 9825
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	iVar1 = Global_35278[iParam020].f_52;
	if (iVar1 == 4294967295)
	{
		return 0;
	}
	iVar0 = iVar1;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to use a LifetimeStat out of bounds.");
		return 0;
	}
	if (bParam2)
	{
		if ((iParam0 <= 500 && iParam0 >= 586) || iParam0 != 596)
		{
			Global_34581[iVar1] = (Global_34581[iVar1] + 1.0f);
		}
		else
		{
			Global_34581[iVar1] = (Global_34581[iVar1] + fParam1);
		}
	}
	else
	{
		Global_34581[iVar1] = fParam1;
	}
	if (Global_35278[iVar120].f_64 == 0.0f)
	{
		if (Global_34581[iVar1] < Global_35278[iVar120].f_64)
		{
			LOG_WARNING("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to increment a LifetimeStat out of its fMaxRange.");
			Global_34581[iVar1] = Global_35278[iVar120].f_64;
		}
	}
	if (Global_35278[iVar120].f_60 == 0.0f)
	{
		if (Global_34581[iVar1] > Global_35278[iVar120].f_60)
		{
			LOG_WARNING("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to decrement a LifetimeStat out of its fMinRange.");
			Global_34581[iVar1] = Global_35278[iVar120].f_60;
		}
	}
	return 1;
}

void Function_35(var uParam0, int iParam1) //Position: 0x28A5 / 10405
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_36(struct<5> Param0) //Position: 0x28B2 / 10418
{
	if (!StackVal != Global_13053)
	{
		Global_13053 = StackVal;
		Global_13053.f_8 = Param0;
		Global_13053.f_4 = 0;
	}
	return;
}

bool Function_37(var uParam0, int iParam1) //Position: 0x28D8 / 10456
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_38(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x28F4 / 10484
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!Function_45(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_44(iParam1))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeType");
		return "";
	}
	if (!IS_ACTOR_VALID(bParam2))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid criminal");
		return "";
	}
	if (!IS_OBJECT_VALID(bParam3) && !iParam0 != 4)
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid victim");
		return "";
	}
	if (!Function_41(1))
	{
		LOG_ERROR("Crime is disabled: CREATE_CRIME_EVENT failure");
		return "";
	}
	bVar3 = CREATE_CRIME_IN_LAYOUT(Global_26314);
	bVar4 = FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes");
	if ((IS_CRIME_VALID(bVar3) && IS_OBJECT_VALID(bVar4)) && GET_OBJECT_TYPE(bVar4) != 2)
	{
		SET_CRIME_TYPE(bVar3, iParam1);
		SET_CRIME_VICTIM(bVar3, bParam3);
		SET_CRIME_CRIMINAL(bVar3, bParam2);
		SET_CRIME_BEGIN_TIMESTAMP(bVar3, GET_CURRENT_GAME_TIME());
		SET_CRIME_END_TIMESTAMP(bVar3, GET_CURRENT_GAME_TIME());
		GET_OBJECT_POSITION(bParam3, &vVar0);
		SET_CRIME_POSITION(bVar3, vVar0);
		bVar5 = CREATE_OBJECTSET_IN_LAYOUT(Function_25(), Global_26314, 3, 0);
		SET_CRIME_OBJECTSET(bVar3, bVar5);
		if (!bParam4)
		{
			SET_CRIME_WITNESSED(bVar3, 1);
		}
		else
		{
			SET_CRIME_WITNESSED(bVar3, 3);
			Function_39();
		}
		SET_CRIME_FACTION(StackVal, bVar3);
		SET_CRIME_TALLIED(bVar3, 0);
		SET_CRIME_COUNTER(bVar3, 1);
		SET_CRIME_WORLD_REGION(bVar3, Global_26361.f_12);
		if ((Global_26998[iParam118].f_20 != 2 || Global_26998[iParam118].f_20 != 3) || Global_26998[iParam118].f_20 != 4)
		{
			SET_CRIME_IN_PROGRESS(bVar3, 1);
		}
		else
		{
			SET_CRIME_IN_PROGRESS(bVar3, 0);
		}
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_CRIME(bVar3), GET_OBJECTSET_FROM_OBJECT(bVar4));
		SET_ACTOR_TIME_OF_LAST_CRIME(bParam2, GET_CURRENT_GAME_TIME());
	}
	return bVar3;
}

void Function_39() //Position: 0x2B84 / 11140
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	iVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_40(bVar0, iVar1);
	bVar2 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar2))
	{
		bVar3 = GET_CRIME_FROM_OBJECT(bVar2);
		if (IS_CRIME_VALID(bVar3))
		{
			SET_CRIME_WITNESSED(bVar3, 3);
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

void Function_40(bool bParam0, bool bParam1) //Position: 0x2BE7 / 11239
{
	ITERATE_EVERYWHERE(bParam0);
	ITERATE_ON_OBJECT_TYPE(bParam0, 31);
	if (!bParam1 != "")
	{
		ITERATE_IN_SET(bParam0, bParam1);
	}
	else
	{
		ITERATE_IN_LAYOUT(bParam0, GET_ITERATOR_PARENT(bParam0));
	}
	return;
}

bool Function_41(bool bParam0) //Position: 0x2C16 / 11286
{
	if (Function_46(256))
	{
		return 0;
	}
	if (Function_46(262144))
	{
		return 0;
	}
	if (Function_43())
	{
		return 0;
	}
	if (!Function_46(1))
	{
		return 0;
	}
	if (!Function_46(4096))
	{
		return 0;
	}
	if (bParam0 && Function_42(12))
	{
		return 0;
	}
	if (Global_3378)
	{
		return 0;
	}
	if (Function_46(2048))
	{
		return 0;
	}
	if (Function_56() || !bParam0)
	{
		if (Global_29007 != 2 || Global_29007 != 5)
		{
			return 0;
		}
	}
	return 1;
}

int Function_42(int iParam0) //Position: 0x2C8C / 11404
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_43() //Position: 0x2C9D / 11421
{
	if (Global_30619 == 2)
	{
		if (StackVal == 1)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_44(int iParam0) //Position: 0x2CB6 / 11446
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_45(int iParam0) //Position: 0x2CCC / 11468
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_46(int iParam0) //Position: 0x2CE1 / 11489
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_47(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x2CFF / 11519
{
	uParam0 = uParam0;
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
	if (Global_3393 && uParam2)
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
	if (Global_59353 && uParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

bool Function_48(int iParam0) //Position: 0x2DA3 / 11683
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_49(var uParam0, int iParam1) //Position: 0x2DB9 / 11705
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_50(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x2DCA / 11722
{
	int iVar0;
	bool bVar1;
	
	Function_9(uParam0);
	Global_16524.f_4 = uParam0;
	Global_16524.f_16 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_51(StackVal, bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(iParam1, iParam2, iParam3);
			Function_6(StackVal, bVar1, bParam4);
		}
	}
}

void Function_51(int iParam0, int iParam1) //Position: 0x2E3C / 11836
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_9(iParam0);
	Function_8(iVar0);
	PRINTNL();
	Function_6(iParam0, iVar0, iParam1);
	return;
}

bool Function_52(int iParam0) //Position: 0x2E61 / 11873
{
	if (*iParam0 == 0)
	{
		return 0;
	}
	if (!IS_VOLUME_VALID(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_53(int iParam0) //Position: 0x2E7E / 11902
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_54(bool bParam0, float fParam1) //Position: 0x2E9A / 11930
{
	if (!Function_53(128))
	{
		return;
	}
	if (!STRING_CONTAINS_STRING(&Global_13133, cParam0))
	{
		strcpy(&Global_13133, bParam0, 64);
		Global_13133.f_68 = 2;
		Global_13133.f_64 = GET_CURRENT_GAME_TIME();
		Global_13133.f_72 = (Global_13133.f_64 + fParam1);
	}
	return;
}

void Function_55(var uParam0, int iParam1) //Position: 0x2ED8 / 11992
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_56() //Position: 0x2EE7 / 12007
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_57(bool bParam0, bool bParam1) //Position: 0x2EF0 / 12016
{
	if (!IS_DOOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_BOOL(bParam0, "lockMe", bParam1);
	if (DECOR_CHECK_EXIST(bParam0, "unlockMe"))
	{
		DECOR_REMOVE(bParam0, "unlockMe");
	}
	if (!IS_DOOR_LOCKED(bParam0))
	{
		SET_DOOR_LOCK(bParam0, 1);
	}
	return;
}

void Function_58(var uParam0, bool bParam1) //Position: 0x2F44 / 12100
{
	Function_13(uParam0, 2);
	uParam0->f_4 = bParam1;
	return;
}

var Function_59(int iParam0, bool bParam1, bool bParam2, int iParam3, char* cParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x2F56 / 12118
{
	int iVar0;
	char* cVar1[32];
	char* cVar9[8];
	bool bVar11;
	
	iVar0 = Function_60(iParam0);
	if (iVar0 <= 0)
	{
		return 4294967295;
	}
	strcpy(&cVar1, cParam4, 32);
	stradd(&cVar1, "_", 32);
	stradd(&cVar1, bParam2, 32);
	stradd(&cVar1, "*", 32);
	strcpy(&cVar9, "door", 8);
	if (iParam3 <= 10)
	{
		stradd(&cVar9, "0", 8);
	}
	straddi(&cVar9, iParam3, 8);
	bVar11 = GET_WORLD_SECTOR_CHILD_OBJECT(bParam1, &cVar1, &cVar9);
	if (!IS_DOOR_VALID(GET_DOOR_FROM_OBJECT(bVar11)))
	{
		return 4294967295;
	}
	(*iParam0)[iVar05] = GET_DOOR_FROM_OBJECT(bVar11);
	if (bParam5)
	{
		Function_13(iParam0[iVar05], 1);
	}
	Function_13(iParam0[iVar05], 4096);
	iParam0[iVar05]->f_12 = bParam6;
	if (bParam7)
	{
		Function_13(iParam0[iVar05], 16384);
	}
	if (bParam8)
	{
		Function_13(iParam0[iVar05], 32768);
	}
	if (IS_OBJECT_VALID(bParam6))
	{
		DECOR_SET_OBJECT(bVar11, "roomvol", bParam6);
	}
	return iVar0;
}

var Function_60(bool bParam0) //Position: 0x3035 / 12341
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *bParam0)
	{
		if (!IS_DOOR_VALID((*bParam0)[iVar05]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void Function_61(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x3063 / 12387
{
	if (*iParam0 >= (*iParam1 - 1))
	{
		LOG_ERROR("Too many locations defined - increase array size in vol file!");
		return;
	}
	if (!IS_VOLUME_VALID(bParam3))
	{
		LOG_ERROR("NL_INIT_LOCATION got invalid VOLUME!");
		return;
	}
	iParam4 = iParam4;
	iParam1[*iParam03]->f_4 = bParam3;
	(*iParam1)[*iParam03] = iParam2;
	DECOR_SET_INT(StackVal, "locflag", bParam5);
	if (iParam2 == 4)
	{
		ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(StackVal, 0);
	}
	*iParam0++;
}

void Function_62(int iParam0) //Position: 0x313E / 12606
{
	*iParam0 = 0;
	iParam0->f_4 = 0;
	return;
}

var Function_63(bool bParam0, bool bParam1, int iParam2) //Position: 0x314D / 12621
{
	Global_29155[iParam210].f_32 = CREATE_WORLD_SECTOR(bParam0, bParam1);
	return Global_29155[iParam210].f_32;
}

bool Function_64() //Position: 0x316C / 12652
{
	var uVar0;
	
	Function_65(3, 3);
	uVar0 = uVar0;
	Local_0 = FIND_NAMED_LAYOUT("HennigansRanch_layout");
	if (!IS_LAYOUTREF_VALID(Local_0))
	{
		Local_0 = CREATE_LAYOUT("HennigansRanch_layout");
	}
	Local_0.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_0, "henv_pop_corr01", 2, -907.295f, 91.39155f, 2439.918f, -0.188446f, 20.26217f, 0.03837547f, 22.06822f, 9.190167f, 6.534943f);
	Local_0.f_8 = CREATE_VOLUME_IN_LAYOUT(Local_0, "henv_weth01", 2, -833.9625f, 104.2782f, 2455.697f, 0.0f, 10.1206f, 0.0f, 5.189783f, 3.347464f, 4.886743f);
	Local_0.f_12 = CREATE_VOLUME_IN_LAYOUT(Local_0, "henv_weth02", 2, -848.5569f, 96.51233f, 2463.539f, 0.0f, 19.23773f, 0.0f, 4.969315f, 3.347464f, 5.209871f);
	Local_0.f_16 = CREATE_VOLUME_IN_LAYOUT(Local_0, "henv_region", 3, -865.0332f, 104.5656f, 2419.329f, 0.0f, 20.0f, 0.0f, 108.1694f, 16.82273f, 104.4921f);
	Local_0.f_20 = CREATE_VOLUME_IN_LAYOUT(Local_0, "henv_women", 2, -773.1002f, 92.65476f, 2383.807f, 0.0f, 54.52087f, 0.0f, 13.92711f, 13.27901f, 15.71011f);
	Local_0.f_72 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "hen_mainHouse_set");
	(*&Local_0 + 24)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "henv_ding01", 2, -787.9187f, 94.90556f, 2394.663f, 0.0f, 56.05423f, 0.0f, 6.233358f, 2.980766f, 9.392708f);
	ADD_TO_VOLUME_SET(Local_0.f_72, (*&Local_0 + 24)[0]);
	(*&Local_0 + 24)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "henv_parl01", 2, -791.4916f, 94.90692f, 2399.942f, 0.0f, 56.05423f, 0.0f, 6.233358f, 2.980766f, 9.392708f);
	ADD_TO_VOLUME_SET(Local_0.f_72, (*&Local_0 + 24)[1]);
	(*&Local_0 + 24)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "henv_entr01", 2, -782.7989f, 94.73243f, 2404.145f, 0.0f, 56.05423f, 0.0f, 9.163671f, 2.980766f, 6.331867f);
	ADD_TO_VOLUME_SET(Local_0.f_72, (*&Local_0 + 24)[2]);
	(*&Local_0 + 24)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "henv_kich01", 2, -779.3077f, 94.5662f, 2392.901f, 0.0f, 55.16335f, 0.0f, 4.715626f, 2.980766f, 13.87618f);
	ADD_TO_VOLUME_SET(Local_0.f_72, (*&Local_0 + 24)[3]);
	(*&Local_0 + 24)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "henv_entr02", 2, -782.7838f, 97.74265f, 2402.892f, 0.0f, -35.10406f, 0.0f, 6.432983f, 3.131083f, 11.29899f);
	ADD_TO_VOLUME_SET(Local_0.f_72, (*&Local_0 + 24)[4]);
	(*&Local_0 + 24)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "henv_bedr01", 2, -789.7974f, 98.00316f, 2399.699f, 0.0f, 55.51827f, 0.0f, 8.400698f, 2.434886f, 4.321394f);
	ADD_TO_VOLUME_SET(Local_0.f_72, (*&Local_0 + 24)[5]);
	(*&Local_0 + 24)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "henv_bedr02", 2, -781.4969f, 97.71693f, 2394.169f, 0.0f, 56.30006f, 0.0f, 7.767199f, 2.369404f, 4.363895f);
	ADD_TO_VOLUME_SET(Local_0.f_72, (*&Local_0 + 24)[6]);
	(*&Local_0 + 24)[7] = CREATE_VOLUME_IN_LAYOUT(Local_0, "henv_bedr03", 2, -778.9072f, 97.94008f, 2397.139f, 0.1030367f, 54.97228f, 0.03594554f, 11.27106f, 2.490943f, 8.0997f);
	ADD_TO_VOLUME_SET(Local_0.f_72, (*&Local_0 + 24)[7]);
	(*&Local_0 + 24)[8] = CREATE_VOLUME_IN_LAYOUT(Local_0, "henv_terr01", 2, -789.3182f, 94.59753f, 2407.05f, 0.0f, 55.1356f, 0.0f, 2.464414f, 2.502242f, 13.11122f);
	ADD_TO_VOLUME_SET(Local_0.f_72, (*&Local_0 + 24)[8]);
	(*&Local_0 + 24)[9] = CREATE_VOLUME_IN_LAYOUT(Local_0, "henv_terr02", 2, -777.9434f, 94.71134f, 2405.11f, 0.0f, 56.48388f, 0.0f, 13.77267f, 2.394925f, 2.705867f);
	ADD_TO_VOLUME_SET(Local_0.f_72, (*&Local_0 + 24)[9]);
	(*&Local_0 + 24)[10] = CREATE_VOLUME_IN_LAYOUT(Local_0, "henv_bedr04", 2, -784.3458f, 98.36203f, 2391.056f, 0.08203235f, -35.14056f, -0.4878395f, 3.280089f, 2.383869f, 7.496467f);
	ADD_TO_VOLUME_SET(Local_0.f_72, (*&Local_0 + 24)[10]);
	Local_0.f_84 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "hen_house01_set");
	(*&Local_0 + 76)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "henv_cott02", 2, -829.8432f, 94.06009f, 2358.384f, 0.0f, -95.18021f, 0.0f, 4.287017f, 3.133786f, 9.239021f);
	ADD_TO_VOLUME_SET(Local_0.f_84, (*&Local_0 + 76)[0]);
	Local_0.f_96 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "hen_house02_set");
	(*&Local_0 + 88)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "henv_bunk03", 2, -817.6978f, 94.05641f, 2360.956f, 0.0f, 74.88929f, 0.0f, 6.053952f, 2.492213f, 9.891749f);
	ADD_TO_VOLUME_SET(Local_0.f_96, (*&Local_0 + 88)[0]);
	Local_0.f_108 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "hen_house03_set");
	(*&Local_0 + 100)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "henv_bunk02", 2, -802.3254f, 94.14056f, 2375.87f, 0.0f, 57.55003f, 0.0f, 9.808082f, 2.856664f, 6.88935f);
	ADD_TO_VOLUME_SET(Local_0.f_108, (*&Local_0 + 100)[0]);
	Local_0.f_120 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "hen_house04_set");
	(*&Local_0 + 112)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "henv_bunk01", 2, -808.9023f, 93.90993f, 2386.919f, 0.0f, -34.29591f, 0.0f, 6.053952f, 2.492213f, 10.10525f);
	ADD_TO_VOLUME_SET(Local_0.f_120, (*&Local_0 + 112)[0]);
	Local_0.f_124 = CREATE_VOLUME_IN_LAYOUT(Local_0, "henv_cell01", 2, -827.1763f, 95.11025f, 2435.198f, 0.0f, -15.11292f, 0.0f, 3.506161f, 2.655614f, 3.41665f);
	Local_0.f_136 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "hen_playerHouse_set");
	(*&Local_0 + 128)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "henv_cott01", 2, -840.0419f, 93.84976f, 2368.513f, 0.0f, 20.00927f, 0.0f, 4.239078f, 2.695265f, 9.117325f);
	ADD_TO_VOLUME_SET(Local_0.f_136, (*&Local_0 + 128)[0]);
	Local_0.f_172 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "hen_genStore_set");
	(*&Local_0 + 140)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "henv_shop01", 2, -827.2114f, 93.35832f, 2391.726f, 0.0f, -9.75f, 0.0f, 10.90003f, 4.500954f, 10.29797f);
	ADD_TO_VOLUME_SET(Local_0.f_172, (*&Local_0 + 140)[0]);
	(*&Local_0 + 140)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "henv_shop02", 2, -831.4028f, 93.35832f, 2395.013f, 0.0f, -9.75f, 0.0f, 4.031376f, 4.500954f, 4.111689f);
	ADD_TO_VOLUME_SET(Local_0.f_172, (*&Local_0 + 140)[1]);
	(*&Local_0 + 140)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "henv_shop03", 2, -824.4351f, 93.35832f, 2396.257f, 0.0f, -9.75f, 0.0f, 4.117599f, 4.500954f, 4.111689f);
	ADD_TO_VOLUME_SET(Local_0.f_172, (*&Local_0 + 140)[2]);
	(*&Local_0 + 140)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "henv_shop04", 2, -829.3714f, 93.35832f, 2395.348f, 0.0f, 34.76101f, 0.0f, 2.963443f, 3.308627f, 3.02248f);
	ADD_TO_VOLUME_SET(Local_0.f_172, (*&Local_0 + 140)[3]);
	(*&Local_0 + 140)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "henv_shop05", 2, -826.4714f, 93.35832f, 2395.865f, 0.0f, 35.02987f, 0.0f, 2.963443f, 3.308627f, 3.02248f);
	ADD_TO_VOLUME_SET(Local_0.f_172, (*&Local_0 + 140)[4]);
	(*&Local_0 + 140)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "henv_shop06", 2, -821.3082f, 94.14738f, 2388.923f, -0.1333685f, -10.03256f, -0.2557848f, 0.5196779f, 1.61964f, 0.874405f);
	ADD_TO_VOLUME_SET(Local_0.f_172, (*&Local_0 + 140)[5]);
	(*&Local_0 + 140)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "henv_shop07", 2, -832.1039f, 94.12175f, 2388.402f, 0.0f, -10.03256f, 0.0f, 0.5196779f, 1.617693f, 0.9369411f);
	ADD_TO_VOLUME_SET(Local_0.f_172, (*&Local_0 + 140)[6]);
	Local_0.f_188 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "hen_Stockade_set");
	(*&Local_0 + 176)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "henv_stoc01", 2, -823.336f, 96.18947f, 2431.508f, 0.0f, -15.11292f, 0.0f, 11.89836f, 5.583457f, 11.72979f);
	ADD_TO_VOLUME_SET(Local_0.f_188, (*&Local_0 + 176)[0]);
	(*&Local_0 + 176)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "henv_offc01", 2, -825.292f, 95.06285f, 2427.988f, 0.0f, -15.11292f, 0.0f, 5.457095f, 2.333913f, 4.905727f);
	ADD_TO_VOLUME_SET(Local_0.f_188, (*&Local_0 + 176)[1]);
	Local_0.f_204 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "hen_blacksmith_set");
	(*&Local_0 + 192)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "blackSmith", 2, -861.6597f, 94.62007f, 2380.274f, 0.0f, -19.17433f, 0.0f, 11.14826f, 8.686522f, 10.62593f);
	ADD_TO_VOLUME_SET(Local_0.f_204, (*&Local_0 + 192)[0]);
	(*&Local_0 + 192)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "blackSmithWin", 2, -863.2651f, 92.84383f, 2384.848f, 0.0f, -20.07252f, 0.0f, 9.717596f, 3.410117f, 0.3403007f);
	ADD_TO_VOLUME_SET(Local_0.f_204, (*&Local_0 + 192)[1]);
	Local_0.f_224 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "hen_barn_set");
	(*&Local_0 + 208)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "henv_barn02", 2, -844.946f, 97.02397f, 2461.003f, 0.0f, 20.82956f, 0.0f, 15.21839f, 3.888079f, 20.09989f);
	ADD_TO_VOLUME_SET(Local_0.f_224, (*&Local_0 + 208)[0]);
	(*&Local_0 + 208)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "henv_barn03", 2, -844.946f, 102.8268f, 2461.003f, 0.0f, 20.82956f, 0.0f, 15.21839f, 6.371006f, 21.28212f);
	ADD_TO_VOLUME_SET(Local_0.f_224, (*&Local_0 + 208)[1]);
	(*&Local_0 + 208)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "henv_barn01", 2, -844.946f, 91.88769f, 2461.003f, 0.0f, 20.82956f, 0.0f, 15.21839f, 3.888079f, 20.09989f);
	ADD_TO_VOLUME_SET(Local_0.f_224, (*&Local_0 + 208)[2]);
	Local_0.f_244 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "hen_birds_set");
	(*&Local_0 + 228)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "flyingBirds1", 3, -834.2458f, 95.63454f, 2418.397f, 0.0f, 20.0f, 0.0f, 93.99681f, 14.87926f, 64.42979f);
	ADD_TO_VOLUME_SET(Local_0.f_244, (*&Local_0 + 228)[0]);
	(*&Local_0 + 228)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "flyingBirds2", 3, -957.0374f, 95.20286f, 2409.412f, 0.0f, 20.0f, 0.0f, 37.00534f, 14.70886f, 32.78499f);
	ADD_TO_VOLUME_SET(Local_0.f_244, (*&Local_0 + 228)[1]);
	(*&Local_0 + 228)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "flyingBirds4", 3, -868.6245f, 88.70197f, 2345.522f, 0.0f, 20.0f, 0.0f, 19.98622f, 15.45483f, 22.63047f);
	ADD_TO_VOLUME_SET(Local_0.f_244, (*&Local_0 + 228)[2]);
	Local_0.f_264 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "hen_dogs_set");
	(*&Local_0 + 248)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "dogs3", 2, -785.9968f, 91.98063f, 2400.114f, 0.0f, 0.0f, 0.0f, 34.3271f, 18.23282f, 34.3271f);
	ADD_TO_VOLUME_SET(Local_0.f_264, (*&Local_0 + 248)[0]);
	(*&Local_0 + 248)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "dogs2", 2, -823.3627f, 91.98063f, 2412.487f, 0.0f, 0.0f, 0.0f, 34.3271f, 18.23282f, 34.3271f);
	ADD_TO_VOLUME_SET(Local_0.f_264, (*&Local_0 + 248)[1]);
	(*&Local_0 + 248)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "dogs1", 2, -859.9617f, 91.98063f, 2412.811f, 0.0f, 0.0f, 0.0f, 34.3271f, 18.23282f, 29.3928f);
	ADD_TO_VOLUME_SET(Local_0.f_264, (*&Local_0 + 248)[2]);
	Local_0.f_304 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "Henv_Townpop_set");
	(*&Local_0 + 268)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "henv_workerpop02", 2, -888.9214f, 93.28342f, 2360.243f, 0.0f, 29.48648f, 0.0f, 48.36207f, 10.20538f, 38.2534f);
	ADD_TO_VOLUME_SET(Local_0.f_304, (*&Local_0 + 268)[0]);
	(*&Local_0 + 268)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "henv_workerpop01", 2, -895.3943f, 92.65089f, 2391.865f, 0.0f, 12.81889f, 0.0f, 55.92949f, 8.492499f, 35.07158f);
	ADD_TO_VOLUME_SET(Local_0.f_304, (*&Local_0 + 268)[1]);
	(*&Local_0 + 268)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "henv_workerpop03", 2, -892.9852f, 93.36188f, 2455.063f, 0.0f, 19.09838f, 0.0f, 71.12991f, 11.73028f, 43.84187f);
	ADD_TO_VOLUME_SET(Local_0.f_304, (*&Local_0 + 268)[2]);
	(*&Local_0 + 268)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "stable04", 2, -862.531f, 92.27802f, 2457.24f, 0.0f, 20.44771f, 0.0f, 7.987236f, 4.9609f, 35.5173f);
	ADD_TO_VOLUME_SET(Local_0.f_304, (*&Local_0 + 268)[3]);
	(*&Local_0 + 268)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "townPOP9", 2, -866.601f, 92.6058f, 2424.438f, 0.0f, 37.8405f, 0.0f, 5.832854f, 10.95257f, 58.36314f);
	ADD_TO_VOLUME_SET(Local_0.f_304, (*&Local_0 + 268)[4]);
	(*&Local_0 + 268)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "townPOP6", 2, -837.4179f, 90.49345f, 2443.137f, 0.0f, -37.76136f, 0.0f, 27.57806f, 12.55932f, 7.271214f);
	ADD_TO_VOLUME_SET(Local_0.f_304, (*&Local_0 + 268)[5]);
	(*&Local_0 + 268)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "townPOP5", 2, -840.0947f, 95.69423f, 2419.526f, 0.0f, -14.44196f, 0.0f, 33.78256f, 12.69004f, 4.365254f);
	ADD_TO_VOLUME_SET(Local_0.f_304, (*&Local_0 + 268)[6]);
	(*&Local_0 + 268)[7] = CREATE_VOLUME_IN_LAYOUT(Local_0, "townPOP4", 2, -854.9111f, 93.87077f, 2403.279f, 0.0f, 0.0f, 0.0f, 50.49413f, 10.0469f, 4.828262f);
	ADD_TO_VOLUME_SET(Local_0.f_304, (*&Local_0 + 268)[7]);
	Local_0.f_324 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "hen_cows_set");
	(*&Local_0 + 308)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "henv_cattlepop01", 3, -913.4301f, 91.15893f, 2468.895f, 0.0f, 20.0f, 0.0f, 22.03595f, 3.397101f, 21.82662f);
	ADD_TO_VOLUME_SET(Local_0.f_324, (*&Local_0 + 308)[0]);
	(*&Local_0 + 308)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "cows4", 3, -874.6694f, 90.35291f, 2466.637f, 0.0f, 41.05971f, 0.0f, 9.076875f, 3.411866f, 15.36574f);
	ADD_TO_VOLUME_SET(Local_0.f_324, (*&Local_0 + 308)[1]);
	(*&Local_0 + 308)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "cows3", 3, -877.7629f, 90.35291f, 2448.0f, 0.0f, 20.0f, 0.0f, 6.649864f, 3.411866f, 6.868708f);
	ADD_TO_VOLUME_SET(Local_0.f_324, (*&Local_0 + 308)[2]);
	Local_0.f_328 = CREATE_VOLUME_IN_LAYOUT(Local_0, "henv_nightPop", 3, -820.5867f, 92.98473f, 2375.798f, 0.0f, 20.0f, 0.0f, 26.00859f, 9.795838f, 26.00859f);
	Local_0.f_348 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "henv_horses_set");
	(*&Local_0 + 332)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "henv_horsepop01", 3, -891.3127f, 91.90538f, 2365.967f, 0.0f, 20.0f, 0.0f, 9.649468f, 3.212526f, 9.793543f);
	ADD_TO_VOLUME_SET(Local_0.f_348, (*&Local_0 + 332)[0]);
	(*&Local_0 + 332)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "cows2", 3, -919.7874f, 91.35687f, 2383.749f, 0.0f, 55.03067f, 0.0f, 17.78707f, 4.646078f, 26.16555f);
	ADD_TO_VOLUME_SET(Local_0.f_348, (*&Local_0 + 332)[1]);
	(*&Local_0 + 332)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "cows1", 3, -913.5728f, 91.35687f, 2356.5f, 0.0f, 30.46546f, 0.0f, 32.49294f, 0.7796803f, 9.014298f);
	ADD_TO_VOLUME_SET(Local_0.f_348, (*&Local_0 + 332)[2]);
	Local_0.f_364 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "Henv_TrnPlatform_set");
	(*&Local_0 + 352)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Box", 2, -959.0334f, 92.48853f, 2415.089f, 0.0f, 20.30423f, 0.0f, 15.52501f, 5.481997f, 6.859567f);
	ADD_TO_VOLUME_SET(Local_0.f_364, (*&Local_0 + 352)[0]);
	(*&Local_0 + 352)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Box1", 2, -959.1414f, 92.90108f, 2429.122f, 0.0f, 19.67866f, 0.0f, 5.476338f, 6.218257f, 21.84757f);
	ADD_TO_VOLUME_SET(Local_0.f_364, (*&Local_0 + 352)[1]);
	Local_0.f_368 = CREATE_VOLUME_IN_LAYOUT(Local_0, "Henv_HorseShoePit", 2, -820.5627f, 93.98839f, 2349.395f, 0.0f, 268.9332f, 0.0f, 4.158921f, 5.764499f, 16.75021f);
	Local_0.f_404 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "henv_pop_chickens_set");
	(*&Local_0 + 372)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder_pop", 3, -882.4127f, 90.35291f, 2435.568f, 0.0f, 20.0f, 0.0f, 7.493746f, 3.032098f, 5.24432f);
	ADD_TO_VOLUME_SET(Local_0.f_404, (*&Local_0 + 372)[0]);
	(*&Local_0 + 372)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder1_pop", 3, -869.7514f, 90.87122f, 2417.751f, 0.0f, 20.0f, 0.0f, 7.534854f, 7.534854f, 7.534854f);
	ADD_TO_VOLUME_SET(Local_0.f_404, (*&Local_0 + 372)[1]);
	(*&Local_0 + 372)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder2_pop", 3, -810.3448f, 92.36078f, 2416.0f, 0.0f, 20.0f, 0.0f, 7.534854f, 7.534854f, 7.534854f);
	ADD_TO_VOLUME_SET(Local_0.f_404, (*&Local_0 + 372)[2]);
	(*&Local_0 + 372)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder3_pop", 3, -850.4661f, 90.35291f, 2438.934f, 0.0f, 20.0f, 0.0f, 7.534854f, 7.534854f, 7.534854f);
	ADD_TO_VOLUME_SET(Local_0.f_404, (*&Local_0 + 372)[3]);
	(*&Local_0 + 372)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder4_pop", 3, -784.0f, 93.36469f, 2376.0f, 0.0f, 20.0f, 0.0f, 7.534854f, 7.534854f, 7.534854f);
	ADD_TO_VOLUME_SET(Local_0.f_404, (*&Local_0 + 372)[4]);
	(*&Local_0 + 372)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder6_pop", 3, -904.0f, 90.35291f, 2424.0f, 0.0f, 20.0f, 0.0f, 7.534854f, 7.534854f, 7.534854f);
	ADD_TO_VOLUME_SET(Local_0.f_404, (*&Local_0 + 372)[5]);
	(*&Local_0 + 372)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinderchickens", 3, -845.451f, 92.16456f, 2389.844f, 0.0f, 20.0f, 0.0f, 6.468651f, 6.468651f, 6.468651f);
	ADD_TO_VOLUME_SET(Local_0.f_404, (*&Local_0 + 372)[6]);
	Local_0.f_408 = CREATE_VOLUME_IN_LAYOUT(Local_0, "henv_trainstation_int", 2, -952.1673f, 93.58117f, 2424.891f, 0.2293412f, 19.13329f, 0.5711275f, 10.33063f, 6.654235f, 16.43773f);
	Local_0.f_420 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "henv_null_set");
	(*&Local_0 + 412)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "henv_null1", 2, -954.4357f, 93.58052f, 2427.771f, 0.2293412f, 19.13329f, 0.5711275f, 3.366404f, 9.480227f, 8.121138f);
	ADD_TO_VOLUME_SET(Local_0.f_420, (*&Local_0 + 412)[0]);
	Local_0.f_432 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "henv_trainstation_set");
	(*&Local_0 + 424)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "henv_trainstation_01", 2, -955.2867f, 91.35066f, 2424.773f, 0.0f, 19.98809f, 0.0f, 16.49911f, 6.719215f, 28.12355f);
	ADD_TO_VOLUME_SET(Local_0.f_432, (*&Local_0 + 424)[0]);
	Local_0.f_436 = CREATE_VOLUME_IN_LAYOUT(Local_0, "Henv_poker", 2, -801.4831f, 92.36066f, 2374.898f, 0.0f, -32.478f, 0.0f, 6.336149f, 6.336149f, 6.336149f);
	Local_0.f_440 = CREATE_VOLUME_IN_LAYOUT(Local_0, "henv_lawGuys", 2, -821.0326f, 95.18906f, 2430.047f, 0.0f, -14.68973f, 0.0f, 4.261597f, 3.14055f, 5.783895f);
	Local_0.f_444 = CREATE_VOLUME_IN_LAYOUT(Local_0, "henv_jailCell", 2, -820.8108f, 94.98416f, 2435.933f, 0.0f, -14.8283f, 0.0f, 4.17979f, 3.735707f, 3.873466f);
	Local_0.f_460 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "henv_chickenCoop_set");
	(*&Local_0 + 448)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Boxchickens", 2, -879.557f, 92.20952f, 2429.656f, 0.0f, -338.3949f, 0.0f, 5.210891f, 3.243308f, 4.876128f);
	ADD_TO_VOLUME_SET(Local_0.f_460, (*&Local_0 + 448)[0]);
	(*&Local_0 + 448)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Boxchickens1", 2, -889.2878f, 92.29076f, 2433.418f, 0.0f, 21.60508f, 0.0f, 5.34036f, 3.322412f, 5.117258f);
	ADD_TO_VOLUME_SET(Local_0.f_460, (*&Local_0 + 448)[1]);
	Local_0.f_464 = CREATE_VOLUME_IN_LAYOUT(Local_0, "henv_pop_corr02", 2, -889.3197f, 92.94892f, 2398.636f, 0.0f, 29.48218f, 0.0f, 37.02348f, 7.523148f, 7.522303f);
	Local_0.f_468 = CREATE_VOLUME_IN_LAYOUT(Local_0, "henv_pop_corr03", 2, -872.8254f, 93.54313f, 2351.379f, 0.0f, 29.48218f, 0.0f, 7.51993f, 7.523148f, 36.94432f);
	Local_0.f_472 = CREATE_VOLUME_IN_LAYOUT(Local_0, "henv_mainHouseCrime", 2, -784.2532f, 93.33296f, 2400.242f, 0.0f, 55.46248f, 0.0f, 28.45781f, 18.68317f, 24.66519f);
	CREATE_POINT_IN_LAYOUT(Local_0, "henf_report_crime", -821.611f, 93.296f, 2419.131f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "henf_clear_bounty", -951.2153f, 90.55292f, 2429.154f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 476) = { -817.0843f, 93.80626f, 2426.47f };
	*(&Local_0 + 476 + 12) = { 0.0f, 166.6764f, 0.0f };
	Local_0.f_500 = CREATE_POINT_IN_LAYOUT(Local_0, "henf_merc_giver", -817.0843f, 93.80626f, 2426.47f, 0.0f, 166.6764f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "henf_jail_sit", -819.6454f, 93.80083f, 2436.405f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "henf_jail_leave_start", -823.64f, 93.809f, 2427.128f, 0.0f, 349.277f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "henf_jail_leave_end", -821.8317f, 93.365f, 2421.105f, 0.0f, 348.823f, 0.0f);
	*(&Local_0 + 504) = { -951.873f, 90.203f, 2403.878f };
	*(&Local_0 + 504 + 12) = { 0.0f, 18.952f, 0.0f };
	Local_0.f_528 = CREATE_POINT_IN_LAYOUT(Local_0, "armf_playerDuel1", -951.873f, 90.203f, 2403.878f, 0.0f, 18.952f, 0.0f);
	*(&Local_0 + 532) = { -954.643f, 90.203f, 2395.419f };
	*(&Local_0 + 532 + 12) = { 0.0f, -165.5798f, 0.0f };
	Local_0.f_556 = CREATE_POINT_IN_LAYOUT(Local_0, "armf_enDuel1", -954.643f, 90.203f, 2395.419f, 0.0f, -165.5798f, 0.0f);
	*(&Local_0 + 560) = { -878.864f, 90.29f, 2415.872f };
	*(&Local_0 + 560 + 12) = { 0.0f, 279.78f, 0.0f };
	Local_0.f_584 = CREATE_POINT_IN_LAYOUT(Local_0, "armf_playerDuel2", -878.864f, 90.29f, 2415.872f, 0.0f, 279.78f, 0.0f);
	*(&Local_0 + 588) = { -870.42f, 90.615f, 2414.0f };
	*(&Local_0 + 588 + 12) = { 0.0f, 464.5006f, 0.0f };
	Local_0.f_612 = CREATE_POINT_IN_LAYOUT(Local_0, "armf_enDuel2", -870.42f, 90.615f, 2414.0f, 0.0f, 464.5006f, 0.0f);
	*(&Local_0 + 616) = { -855.173f, 90.371f, 2500.748f };
	*(&Local_0 + 616 + 12) = { 0.0f, 278.868f, 0.0f };
	Local_0.f_640 = CREATE_POINT_IN_LAYOUT(Local_0, "armf_playerDuel3", -855.173f, 90.371f, 2500.748f, 0.0f, 278.868f, 0.0f);
	*(&Local_0 + 644) = { -848.19f, 90.353f, 2499.662f };
	*(&Local_0 + 644 + 12) = { 0.0f, 102.7046f, 0.0f };
	Local_0.f_668 = CREATE_POINT_IN_LAYOUT(Local_0, "armf_enDuel3", -848.19f, 90.353f, 2499.662f, 0.0f, 102.7046f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "henf_cell_leave_end", -823.6021f, 93.809f, 2427.414f, 0.0f, 348.933f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "henf_cell_leave_cop", -819.889f, 93.809f, 2432.188f, 0.0f, 180.0f, 0.0f);
	*(&Local_0 + 672) = { -803.0267f, 92.56953f, 2377.659f };
	*(&Local_0 + 672 + 12) = { 0.0f, 55.64222f, 0.0f };
	Local_0.f_696 = CREATE_POINT_IN_LAYOUT(Local_0, "henf_interiorPoint_house2", -803.0267f, 92.56953f, 2377.659f, 0.0f, 55.64222f, 0.0f);
	*(&Local_0 + 700) = { -830.6995f, 92.54638f, 2359.302f };
	*(&Local_0 + 700 + 12) = { 0.0f, 176.8916f, 0.0f };
	Local_0.f_724 = CREATE_POINT_IN_LAYOUT(Local_0, "henf_interiorPoint_doctor", -830.6995f, 92.54638f, 2359.302f, 0.0f, 176.8916f, 0.0f);
	*(&Local_0 + 728) = { -840.4033f, 92.36072f, 2369.53f };
	*(&Local_0 + 728 + 12) = { 0.0f, 199.4039f, 0.0f };
	Local_0.f_752 = CREATE_POINT_IN_LAYOUT(Local_0, "henf_interiorPoint_house4", -840.4033f, 92.36072f, 2369.53f, 0.0f, 199.4039f, 0.0f);
	*(&Local_0 + 756) = { -826.7836f, 92.17664f, 2392.269f };
	*(&Local_0 + 756 + 12) = { 0.0f, 164.427f, 0.0f };
	Local_0.f_780 = CREATE_POINT_IN_LAYOUT(Local_0, "henf_interiorPoint_store", -826.7836f, 92.17664f, 2392.269f, 0.0f, 164.427f, 0.0f);
	*(&Local_0 + 784) = { -819.083f, 92.357f, 2399.914f };
	*(&Local_0 + 784 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_808 = CREATE_POINT_IN_LAYOUT(Local_0, "return_stand_pos_store", -819.083f, 92.357f, 2399.914f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 812) = { -817.877f, 92.264f, 2402.042f };
	*(&Local_0 + 812 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_836 = CREATE_POINT_IN_LAYOUT(Local_0, "return_gateway_pos_store", -817.877f, 92.264f, 2402.042f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 840) = { -816.149f, 95.328f, 2404.801f };
	*(&Local_0 + 840 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_864 = CREATE_POINT_IN_LAYOUT(Local_0, "camera_cut_pos1_store", -816.149f, 95.328f, 2404.801f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 868) = { -815.611f, 95.177f, 2399.953f };
	*(&Local_0 + 868 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_892 = CREATE_POINT_IN_LAYOUT(Local_0, "camera_cut_pos2_store", -815.611f, 95.177f, 2399.953f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 896) = { -949.0801f, 90.5529f, 2426.847f };
	*(&Local_0 + 896 + 12) = { 0.0f, 290.1824f, 0.0f };
	Local_0.f_920 = CREATE_POINT_IN_LAYOUT(Local_0, "henf_interiorPoint_train", -949.0801f, 90.5529f, 2426.847f, 0.0f, 290.1824f, 0.0f);
	*(&Local_0 + 924) = { -846.0206f, 90.39368f, 2457.682f };
	*(&Local_0 + 924 + 12) = { 0.0f, 378.6604f, 0.0f };
	Local_0.f_948 = CREATE_POINT_IN_LAYOUT(Local_0, "henf_interiorPoint_barn", -846.0206f, 90.39368f, 2457.682f, 0.0f, 378.6604f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "hen_vista_cam_pos1", -880.775f, 102.63f, 2542.3f, -1.472f, -10.877f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "hen_vista_cam_pos2", -956.891f, 99.782f, 2525.1f, -3.509f, -38.539f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "hen_vista_cam_pos3", -1003.491f, 95.121f, 2473.324f, -2.071f, -66.598f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "hen_vista_cam_pos4", -1023.822f, 100.955f, 2414.574f, -1.346f, -87.311f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "hen_vista_cam_pos5", -686.591f, 97.079f, 2496.371f, -2.199f, 93.689f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "hen_vista_cam_pos6", -977.44f, 91.853f, 2463.873f, 8.019f, 112.862f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "hen_vista_cam_pos7", -814.197f, 93.422f, 2421.178f, 7.629f, -53.496f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "hen_vista_cam_pos8", -805.925f, 94.654f, 2351.136f, 0.712f, 173.182f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "hen_vista_cam_pos9", -915.972f, 91.729f, 2439.091f, 2.45f, 68.281f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "hen_vista_cam_pos10", -754.379f, 94.442f, 2449.734f, 0.745f, 76.759f, 0.0f);
	return 1;
}

void Function_65(int iParam0, int iParam1) //Position: 0x54C6 / 21702
{
	switch (iParam1)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			if (!iParam0 != 4)
			{
			}
			break;
		
		case 0x00000002:
			if (!iParam0 != 3)
			{
			}
			break;
		
		case 0x00000003:
			if (!iParam0 != 3)
			{
			}
			break;
	}
	return;
}

var Function_66() //Position: 0x550F / 21775
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_67(bool bParam0, var uParam1) //Position: 0x5524 / 21796
{
	if (!Function_53(128))
	{
		return;
	}
	if (!STRING_CONTAINS_STRING(&Global_13133, cParam0))
	{
		strcpy(&Global_13133, bParam0, 64);
		Global_13133.f_68 = 1;
		Global_13133.f_64 = GET_CURRENT_GAME_TIME();
		Global_13133.f_72 = Global_13133.f_64;
	}
	return;
}

