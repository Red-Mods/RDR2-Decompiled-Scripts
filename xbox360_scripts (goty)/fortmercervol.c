//Decompiled with MagicRDR v1.0
//Function Count : 67
//Statics Count : 494
//Natives Count : 127
//Parameters Count : 2

#region Local Var
	struct<669> Local_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	bool bVar1;
	
	iLocal_168 = 0;
	Local_169 = { StackVal, ScriptParam_0 };
	Function_66("Initializing Fort Mercer Volumes", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_171 = 500;
		uLocal_172 = Function_65();
		switch (iLocal_168)
		{
			case 0x00000000:
				if (Function_63())
				{
					bLocal_240 = Function_62(Local_0, "fortMercer", ScriptParam_0);
					iLocal_168 = 1;
				}
				bLocal_171 = false;
				break;
			
			case 0x00000001:
				if (IS_WORLD_SECTOR_LOADED(bLocal_240))
				{
					iLocal_168 = 2;
				}
				bLocal_171 = false;
				break;
			
			case 0x00000002:
				Function_61(&uLocal_173);
				Function_60(&uLocal_173, &iLocal_176, 4, Local_0.f_92, 4294967295, 4);
				Function_60(StackVal, &uLocal_173, &iLocal_176, 5, 4294967295, 258);
				Function_60(StackVal, &uLocal_173, &iLocal_176, 5, 4294967295, 258);
				Function_60(&uLocal_173, &iLocal_176, 5, Local_0.f_12, 4294967295, 258);
				Function_60(&uLocal_173, &iLocal_176, 5, Local_0.f_16, 4294967295, 258);
				Function_60(&uLocal_173, &iLocal_176, 5, Local_0.f_20, 4294967295, 258);
				Function_60(&uLocal_173, &iLocal_176, 5, Local_0.f_24, 4294967295, 258);
				Function_60(&uLocal_173, &iLocal_176, 5, Local_0.f_28, 4294967295, 258);
				Function_60(&uLocal_173, &iLocal_176, 5, Local_0.f_32, 4294967295, 258);
				Function_60(&uLocal_173, &iLocal_176, 5, Local_0.f_36, 4294967295, 258);
				Function_60(&uLocal_173, &iLocal_176, 5, Local_0.f_40, 4294967295, 258);
				Function_60(&uLocal_173, &iLocal_176, 5, Local_0.f_44, 4294967295, 258);
				Function_60(&uLocal_173, &iLocal_176, 5, Local_0.f_48, 4294967295, 258);
				Function_60(&uLocal_173, &iLocal_176, 5, Local_0.f_52, 4294967295, 258);
				Function_60(&uLocal_173, &iLocal_176, 5, Local_0.f_56, 4294967295, 258);
				Function_60(&uLocal_173, &iLocal_176, 5, Local_0.f_60, 4294967295, 258);
				Function_60(&uLocal_173, &iLocal_176, 5, Local_0.f_64, 4294967295, 258);
				Function_60(&uLocal_173, &iLocal_176, 5, Local_0.f_68, 4294967295, 258);
				Function_60(&uLocal_173, &iLocal_176, 5, Local_0.f_128, 4294967295, 258);
				Function_60(&uLocal_173, &iLocal_176, 5, Local_0.f_72, 4294967295, 258);
				Function_60(&uLocal_173, &iLocal_176, 5, Local_0.f_76, 4294967295, 258);
				if (Function_59(ScriptParam_0))
				{
					bVar1 = false;
				}
				else
				{
					bVar1 = true;
				}
				Function_57(&Local_241, bLocal_240, "corral", 1, &Global_29155[ScriptParam_010] + 20, bVar1, 0, 0, 0);
				Function_57(&Local_241, bLocal_240, "corral", 2, &Global_29155[ScriptParam_010] + 20, bVar1, 0, 0, 0);
				Function_57(&Local_241, bLocal_240, "corral", 3, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&Local_241, bLocal_240, "corral", 4, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&Local_241, bLocal_240, "corral", 5, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&Local_241, bLocal_240, "corral", 6, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&Local_241, bLocal_240, "corral", 7, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&Local_241, bLocal_240, "corral", 9, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&Local_241, bLocal_240, "nrightWing", 1, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&Local_241, bLocal_240, "nrightWing", 2, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&Local_241, bLocal_240, "nrightWing", 5, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&Local_241, bLocal_240, "nrightWing", 6, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&Local_241, bLocal_240, "nrightWing", 7, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&Local_241, bLocal_240, "nrightWing", 8, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&Local_241, bLocal_240, "nrightWing", 9, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&Local_241, bLocal_240, "nrightWing", 10, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&Local_241, bLocal_240, "nrightWing", 12, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&Local_241, bLocal_240, "nrightWing", 13, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&Local_241, bLocal_240, "nrightWing", 14, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&Local_241, bLocal_240, "nrightWing", 15, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&Local_241, bLocal_240, "nrightWing", 16, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&Local_241, bLocal_240, "nrightWing", 17, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&Local_241, bLocal_240, "nrightWing", 21, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&Local_241, bLocal_240, "nrightWing", 22, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&Local_241, bLocal_240, "nrightWing", 23, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				iVar0 = Function_57(&Local_241, bLocal_240, "leftWing", 1, &Global_29155[ScriptParam_010] + 20, bVar1, 0, 0, 0);
				Function_56(&(Local_241[iVar05]), 4096);
				iVar0 = Function_57(&Local_241, bLocal_240, "leftWing", 2, &Global_29155[ScriptParam_010] + 20, bVar1, 0, 0, 0);
				Function_56(&(Local_241[iVar05]), 4096);
				iVar0 = Function_57(&Local_241, bLocal_240, "leftWing", 3, &Global_29155[ScriptParam_010] + 20, bVar1, 0, 0, 0);
				Function_56(&(Local_241[iVar05]), 4096);
				iVar0 = Function_57(&Local_241, bLocal_240, "leftWing", 4, &Global_29155[ScriptParam_010] + 20, bVar1, 0, 0, 0);
				Function_56(&(Local_241[iVar05]), 4096);
				Function_57(&Local_241, bLocal_240, "leftWing", 7, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&Local_241, bLocal_240, "leftWing", 8, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&Local_241, bLocal_240, "leftWing", 9, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&Local_241, bLocal_240, "leftWing", 10, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&Local_241, bLocal_240, "leftWing", 11, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&Local_241, bLocal_240, "leftWing", 12, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&Local_241, bLocal_240, "leftWing", 14, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&Local_241, bLocal_240, "leftWing", 16, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&Local_241, bLocal_240, "leftWing", 17, &Global_29155[ScriptParam_010] + 20, bVar1, 0, 0, 0);
				Function_57(&Local_241, bLocal_240, "leftWing", 18, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&Local_241, bLocal_240, "leftWing", 21, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&Local_241, bLocal_240, "leftWing", 23, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&Local_241, bLocal_240, "guardTowerProps01", 3, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&Local_241, bLocal_240, "guardTowerProps01", 4, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&Local_241, bLocal_240, "guardTowerProps01", 7, &Global_29155[ScriptParam_010] + 20, bVar1, 0, 0, 0);
				Function_57(&Local_241, bLocal_240, "guardTowerProps01", 8, &Global_29155[ScriptParam_010] + 20, bVar1, 0, 0, 0);
				iVar0 = Function_57(&Local_241, bLocal_240, "guardTowerProps02", 8, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				iVar0 = Function_57(&Local_241, bLocal_240, "guardTowerProps02", 9, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				iVar0 = Function_57(&Local_241, bLocal_240, "guardTowerProps02", 10, &Global_29155[ScriptParam_010] + 20, bVar1, 0, 0, 0);
				Function_56(&(Local_241[iVar05]), 1);
				iVar0 = Function_57(&Local_241, bLocal_240, "guardTowerProps02", 11, &Global_29155[ScriptParam_010] + 20, bVar1, 0, 0, 0);
				iVar0 = Function_57(&Local_241, bLocal_240, "guardTowerProps02", 12, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				iLocal_168 = 3;
				bLocal_171 = false;
				break;
			
			case 0x00000003:
				Function_55(&(Global_29008[Local_169]), 16);
				Function_54("Finished Initializing Fort Mercer Volumes", 5.0f);
				iLocal_168 = 4;
				break;
			
			case 0x00000004:
				Function_16(&uLocal_173, &iLocal_176, uLocal_172, ScriptParam_0);
				Function_12(&Local_241, 0);
				break;
			
			case 0x00000005:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_171);
	}
	Function_4(&uLocal_173, &iLocal_176);
	Function_3(&Local_241);
	Function_2();
	Function_1(&(Global_29008[Local_169]), 16);
	Function_54("Unloaded Fort Mercer Volumes", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0xA25 / 2597
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_2() //Position: 0xA3C / 2620
{
	RELEASE_LAYOUT_REF(Local_0);
	return;
}

void Function_3(int iParam0) //Position: 0xA47 / 2631
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

void Function_4(var uParam0, int iParam1) //Position: 0xAA1 / 2721
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

void Function_5(int iParam0, int iParam1, int iParam2) //Position: 0xAF9 / 2809
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

void Function_6(int iParam0, bool bParam1, bool bParam2) //Position: 0xBDF / 3039
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

void Function_7() //Position: 0xD58 / 3416
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_8(bool bParam0) //Position: 0xD64 / 3428
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

void Function_9(int iParam0) //Position: 0xDAA / 3498
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

void Function_10(var uParam0, int iParam1) //Position: 0xDF0 / 3568
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_11(var uParam0, int iParam1) //Position: 0xE0A / 3594
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_12(var uParam0, bool bParam1) //Position: 0xE27 / 3623
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
	
	bVar6 = Function_15();
	if (Global_30620 > *uParam0)
	{
		Global_30620 = 0;
	}
	iVar0 = Global_30620;
	while (iVar0 < Function_14((*uParam0 - 1), Global_30620 + 4))
	{
		bVar7 = (*uParam0)[iVar05];
		if (IS_DOOR_VALID(bVar7))
		{
			uVar8 = StackVal;
			if (uVar8 & 16384 >= 0)
			{
				uParam0[iVar05]->f_16 = GET_PERS_CHAR_FROM_OBJECT(DECOR_GET_OBJECT(bVar7, "owner"));
				Function_13(uParam0[iVar05], 16384);
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
								Function_56(uParam0[iVar05], 1);
								uVar8 = StackVal;
							}
						}
						else if (uVar8 & 1 >= 0)
						{
							Function_13(uParam0[iVar05], 1);
							uVar8 = StackVal;
						}
					}
					else if ((StackVal && Global_63399) < 0 && uVar8 & 1 != 0)
					{
						if (IS_VOLUME_VALID(uParam0[iVar05]->f_12))
						{
							bVar9 = false;
							if (IS_ACTOR_IN_VOLUME(Function_65(), uParam0[iVar05]->f_12))
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
								Function_56(uParam0[iVar05], 1);
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
							Function_56(uParam0[iVar05], 1);
							uVar8 = StackVal;
						}
					}
					else if ((StackVal && Global_63399) != 0 && uVar8 & 1 < 0)
					{
						Function_13(uParam0[iVar05], 1);
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
					Function_56(uParam0[iVar05], 8192);
					uVar8 = StackVal;
				}
				if (uVar8 & 1 == 0)
				{
					Function_56(uParam0[iVar05], 1);
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
					Function_13(uParam0[iVar05], 8192);
					uVar8 = StackVal;
				}
				if (uVar8 & 1 >= 0)
				{
					Function_13(uParam0[iVar05], 1);
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
							if (IS_ACTOR_IN_VOLUME(Function_65(), uParam0[iVar05]->f_12))
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
					if (IS_ACTOR_IN_VOLUME(Function_65(), uParam0[iVar05]->f_12))
					{
						if (IS_DOOR_OPENED(bVar7))
						{
							CLOSE_DOOR(bVar7, 1.0f);
							Function_13(uParam0[iVar05], 32768);
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

void Function_13(var uParam0, int iParam1) //Position: 0x11F3 / 4595
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

int Function_14(int iParam0, bool bParam1) //Position: 0x120D / 4621
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

bool Function_15() //Position: 0x121F / 4639
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_16(var uParam0, var uParam1, bool bParam2, var uParam3) //Position: 0x1228 / 4648
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

bool Function_17(var uParam0, bool bParam1, int iParam2, var uParam3, bool bParam4) //Position: 0x12A9 / 4777
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
							if (Function_15())
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

void Function_18(int iParam0) //Position: 0x16C2 / 5826
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
		if (!Function_15())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

float Function_19(int iParam0) //Position: 0x17C1 / 6081
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

float Function_20(int iParam0) //Position: 0x17FE / 6142
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_21(int iParam0, bool bParam1) //Position: 0x1837 / 6199
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

var Function_22(int iParam0) //Position: 0x189E / 6302
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

int Function_23(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x18F6 / 6390
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

void Function_24(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x1B16 / 6934
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

var Function_25() //Position: 0x2143 / 8515
{
	int iVar0;
	
	return iVar0;
}

var Function_26(int iParam0) //Position: 0x214B / 8523
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_27(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x215C / 8540
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

struct<32> Function_28(char* cParam0, bool bParam1) //Position: 0x2251 / 8785
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_29(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x226A / 8810
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_14(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_30(Function_14(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_30(int iParam0, int iParam1) //Position: 0x22CF / 8911
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_31(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x22E1 / 8929
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

int Function_32(int iParam0) //Position: 0x2411 / 9233
{
	return Global_35278[iParam020].f_48;
}

void Function_33(int iParam0) //Position: 0x2420 / 9248
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

int Function_34(int iParam0, float fParam1, bool bParam2) //Position: 0x25BA / 9658
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

void Function_35(var uParam0, int iParam1) //Position: 0x27FE / 10238
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_36(struct<5> Param0) //Position: 0x280B / 10251
{
	if (!StackVal != Global_13053)
	{
		Global_13053 = StackVal;
		Global_13053.f_8 = Param0;
		Global_13053.f_4 = 0;
	}
	return;
}

bool Function_37(var uParam0, int iParam1) //Position: 0x2831 / 10289
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_38(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x284D / 10317
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

void Function_39() //Position: 0x2ADD / 10973
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

void Function_40(bool bParam0, bool bParam1) //Position: 0x2B40 / 11072
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

bool Function_41(bool bParam0) //Position: 0x2B6F / 11119
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
	if (Function_15() || !bParam0)
	{
		if (Global_29007 != 2 || Global_29007 != 5)
		{
			return 0;
		}
	}
	return 1;
}

int Function_42(int iParam0) //Position: 0x2BE5 / 11237
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_43() //Position: 0x2BF6 / 11254
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

bool Function_44(int iParam0) //Position: 0x2C0F / 11279
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_45(int iParam0) //Position: 0x2C25 / 11301
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_46(int iParam0) //Position: 0x2C3A / 11322
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_47(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x2C58 / 11352
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

bool Function_48(int iParam0) //Position: 0x2CFC / 11516
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_49(var uParam0, int iParam1) //Position: 0x2D12 / 11538
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_50(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x2D23 / 11555
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

void Function_51(int iParam0, int iParam1) //Position: 0x2D95 / 11669
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_9(iParam0);
	Function_8(iVar0);
	PRINTNL();
	Function_6(iParam0, iVar0, iParam1);
	return;
}

bool Function_52(int iParam0) //Position: 0x2DBA / 11706
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

bool Function_53(int iParam0) //Position: 0x2DD7 / 11735
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_54(bool bParam0, float fParam1) //Position: 0x2DF3 / 11763
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

void Function_55(var uParam0, int iParam1) //Position: 0x2E31 / 11825
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_56(var uParam0, bool bParam1) //Position: 0x2E40 / 11840
{
	uParam0->f_8 = (StackVal || bParam1);
	return;
}

int Function_57(var uParam0, bool bParam1, bool bParam2, int iParam3, char* cParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x2E51 / 11857
{
	int iVar0;
	char* cVar1[32];
	char* cVar9[8];
	bool bVar11;
	
	iVar0 = Function_58(uParam0);
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
	(*uParam0)[iVar05] = GET_DOOR_FROM_OBJECT(bVar11);
	if (bParam5)
	{
		Function_56(uParam0[iVar05], 1);
	}
	Function_56(uParam0[iVar05], 4096);
	uParam0[iVar05]->f_12 = bParam6;
	if (bParam7)
	{
		Function_56(uParam0[iVar05], 16384);
	}
	if (bParam8)
	{
		Function_56(uParam0[iVar05], 32768);
	}
	if (IS_OBJECT_VALID(bParam6))
	{
		DECOR_SET_OBJECT(bVar11, "roomvol", bParam6);
	}
	return iVar0;
}

var Function_58(int iParam0) //Position: 0x2F30 / 12080
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		if (!IS_DOOR_VALID((*iParam0)[iVar05]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

bool Function_59(bool bParam0) //Position: 0x2F5E / 12126
{
	if (!Function_48(bParam0))
	{
		return 0;
	}
	return Function_37(&(Global_29008[bParam0]), 2048);
}

void Function_60(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x2F7C / 12156
{
	if (*uParam0 >= (*iParam1 - 1))
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
	iParam1[*uParam03]->f_4 = bParam3;
	(*iParam1)[*uParam03] = iParam2;
	DECOR_SET_INT(StackVal, "locflag", bParam5);
	if (iParam2 == 4)
	{
		ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(StackVal, 0);
	}
	*uParam0++;
}

void Function_61(int iParam0) //Position: 0x3057 / 12375
{
	*iParam0 = 0;
	iParam0->f_4 = 0;
	return;
}

var Function_62(bool bParam0, bool bParam1, int iParam2) //Position: 0x3066 / 12390
{
	Global_29155[iParam210].f_32 = CREATE_WORLD_SECTOR(bParam0, bParam1);
	return Global_29155[iParam210].f_32;
}

bool Function_63() //Position: 0x3085 / 12421
{
	var uVar0;
	
	Function_64(3, 3);
	uVar0 = uVar0;
	Local_0 = FIND_NAMED_LAYOUT("FortMercer_layout");
	if (!IS_LAYOUTREF_VALID(Local_0))
	{
		Local_0 = CREATE_LAYOUT("FortMercer_layout");
	}
	Local_0.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_0, "fomv_mhall", 2, -2649.517f, 68.55588f, 3450.906f, 0.0f, -29.97373f, 0.0f, 15.42691f, 3.008064f, 14.71695f);
	Local_0.f_8 = CREATE_VOLUME_IN_LAYOUT(Local_0, "fomv_bhouse", 2, -2670.565f, 72.8721f, 3465.248f, 0.0f, -29.36548f, 0.0f, 14.3416f, 2.864084f, 6.356913f);
	Local_0.f_12 = CREATE_VOLUME_IN_LAYOUT(Local_0, "nfomv_ktch", 2, -2658.49f, 69.06083f, 3471.515f, 0.0f, -29.84722f, 0.0f, 11.50963f, 3.909573f, 12.71703f);
	Local_0.f_16 = CREATE_VOLUME_IN_LAYOUT(Local_0, "nfomv_wcht", 2, -2698.669f, 77.20699f, 3427.093f, 0.0f, -24.34862f, 0.0f, 8.574005f, 3.649508f, 7.303839f);
	Local_0.f_20 = CREATE_VOLUME_IN_LAYOUT(Local_0, "nfomv_lout", 2, -2697.9f, 77.20728f, 3444.638f, 0.0f, -24.73473f, 0.0f, 9.835356f, 6.825248f, 4.801512f);
	Local_0.f_24 = CREATE_VOLUME_IN_LAYOUT(Local_0, "nfomv_strg", 2, -2694.25f, 72.97475f, 3423.115f, 0.0f, -25.02649f, 0.0f, 11.39772f, 2.584774f, 10.54916f);
	Local_0.f_28 = CREATE_VOLUME_IN_LAYOUT(Local_0, "nfomv_stbl", 2, -2680.295f, 68.96297f, 3472.791f, 0.0f, -29.9394f, 0.0f, 27.98677f, 3.861176f, 10.56342f);
	Local_0.f_32 = CREATE_VOLUME_IN_LAYOUT(Local_0, "fomv_bgate", 2, -2679.312f, 69.70753f, 3502.79f, 0.0f, -60.10372f, 0.0f, 6.129364f, 5.072798f, 6.811599f);
	Local_0.f_36 = CREATE_VOLUME_IN_LAYOUT(Local_0, "fomv_lroom", 2, -2701.603f, 68.53193f, 3462.322f, 0.0f, 45.24875f, 0.0f, 9.925068f, 2.772244f, 12.03804f);
	Local_0.f_40 = CREATE_VOLUME_IN_LAYOUT(Local_0, "fomv_poker", 2, -2667.538f, 72.52653f, 3406.434f, 0.0f, -43.31699f, 0.0f, 5.963757f, 2.00437f, 7.587271f);
	Local_0.f_44 = CREATE_VOLUME_IN_LAYOUT(Local_0, "fomv_gallows", 2, -2667.276f, 70.2331f, 3443.413f, 0.0f, -30.76227f, 0.0f, 5.510205f, 6.036074f, 6.225192f);
	Local_0.f_48 = CREATE_VOLUME_IN_LAYOUT(Local_0, "nfomv_capt", 2, -2653.127f, 72.62975f, 3451.886f, 0.0f, -29.74869f, 0.0f, 10.56437f, 2.346262f, 9.636632f);
	Local_0.f_52 = CREATE_VOLUME_IN_LAYOUT(Local_0, "fomv_guard", 2, -2698.687f, 72.90523f, 3427.09f, 0.0f, -24.35601f, 0.0f, 7.558179f, 2.687525f, 6.487865f);
	Local_0.f_56 = CREATE_VOLUME_IN_LAYOUT(Local_0, "nfomv_junk", 2, -2650.381f, 69.06666f, 3463.822f, 0.0f, -29.56781f, 0.0f, 5.085761f, 4.033856f, 8.193235f);
	Local_0.f_60 = CREATE_VOLUME_IN_LAYOUT(Local_0, "fomv_cell01", 2, -2678.403f, 72.50082f, 3422.269f, 0.0f, -45.95888f, 0.0f, 6.149725f, 1.818786f, 8.262666f);
	Local_0.f_64 = CREATE_VOLUME_IN_LAYOUT(Local_0, "fomv_cell02", 2, -2672.24f, 72.38272f, 3420.312f, 0.0f, -44.93504f, 0.0f, 6.112944f, 1.889683f, 9.011908f);
	Local_0.f_68 = CREATE_VOLUME_IN_LAYOUT(Local_0, "fomv_qmstrL", 2, -2664.269f, 68.51096f, 3411.767f, 0.0f, -44.49215f, 0.0f, 17.62775f, 2.767096f, 10.77704f);
	Local_0.f_72 = CREATE_VOLUME_IN_LAYOUT(Local_0, "nfomv_ltrn", 2, -2691.816f, 68.63033f, 3436.343f, 0.0f, 64.46426f, 0.0f, 9.340141f, 2.999645f, 7.448772f);
	Local_0.f_76 = CREATE_VOLUME_IN_LAYOUT(Local_0, "nfomv_lrdr", 2, -2635.13f, 69.04331f, 3427.818f, 0.0f, 34.60624f, 0.0f, 8.3489f, 3.784436f, 13.11563f);
	Local_0.f_80 = CREATE_VOLUME_IN_LAYOUT(Local_0, "fomv_crty01", 2, -2663.123f, 68.3531f, 3459.644f, 0.0f, -27.9743f, 0.0f, 21.20863f, 2.807564f, 9.780213f);
	Local_0.f_84 = CREATE_VOLUME_IN_LAYOUT(Local_0, "fomv_crty02", 2, -2679.247f, 68.65075f, 3436.596f, 0.0f, -27.7466f, 0.0f, 11.18532f, 4.303538f, 31.32902f);
	Local_0.f_88 = CREATE_VOLUME_IN_LAYOUT(Local_0, "fomv_crty03", 2, -2646.567f, 68.54951f, 3437.918f, 0.0f, -35.80642f, 0.0f, 15.03917f, 3.238213f, 12.27297f);
	Local_0.f_92 = CREATE_VOLUME_IN_LAYOUT(Local_0, "fomv_region", 3, -2677.159f, 69.3575f, 3453.067f, 0.0f, 20.0f, 0.0f, 148.6315f, 68.99423f, 148.6315f);
	Local_0.f_96 = CREATE_VOLUME_IN_LAYOUT(Local_0, "fomv_volInside1", 2, -2693.05f, 68.17274f, 3492.392f, 0.0f, 44.77333f, 0.0f, 27.16319f, 7.566692f, 26.91148f);
	Local_0.f_100 = CREATE_VOLUME_IN_LAYOUT(Local_0, "fomv_volInside2", 2, -2690.459f, 73.34067f, 3429.775f, 0.0f, -25.89381f, 0.0f, 24.83562f, 3.808626f, 21.42042f);
	Local_0.f_104 = CREATE_VOLUME_IN_LAYOUT(Local_0, "fomv_volInside3", 2, -2669.117f, 74.32137f, 3466.158f, 0.0f, 60.40723f, 0.0f, 13.38915f, 5.58506f, 22.17075f);
	Local_0.f_108 = CREATE_VOLUME_IN_LAYOUT(Local_0, "fomv_volInside4", 2, -2649.296f, 74.47092f, 3456.1f, 0.0f, -30.38955f, 0.0f, 12.0132f, 5.939147f, 22.85616f);
	Local_0.f_112 = CREATE_VOLUME_IN_LAYOUT(Local_0, "fomv_volInside5", 2, -2637.179f, 73.41586f, 3429.597f, 0.0f, 36.70274f, 0.0f, 8.396272f, 2.759163f, 8.219356f);
	Local_0.f_116 = CREATE_VOLUME_IN_LAYOUT(Local_0, "fomv_volInside6", 2, -2667.409f, 67.26273f, 3440.0f, 0.0f, -30.07065f, 0.0f, 19.12296f, 3.782212f, 26.45642f);
	Local_0.f_120 = CREATE_VOLUME_IN_LAYOUT(Local_0, "fomv_escortOut", 2, -2679.441f, 71.63278f, 3452.902f, 0.0f, 44.89903f, 0.0f, 109.5825f, 35.35309f, 79.18626f);
	Local_0.f_124 = CREATE_VOLUME_IN_LAYOUT(Local_0, "fomv_millTopInside", 2, -2707.801f, 72.73019f, 3461.011f, 0.0f, 44.91544f, 0.0f, 16.88742f, 2.364186f, 21.9827f);
	Local_0.f_128 = CREATE_VOLUME_IN_LAYOUT(Local_0, "fomv_qmstrR", 2, -2645.53f, 68.26025f, 3427.128f, 0.0f, 45.44781f, 0.0f, 5.622883f, 1.709828f, 10.27026f);
	Local_0.f_132 = CREATE_VOLUME_IN_LAYOUT(Local_0, "fomv_towerTop", 2, -2679.213f, 73.6018f, 3503.276f, 0.0f, 30.71208f, 0.0f, 4.555361f, 1.412669f, 5.897355f);
	Local_0.f_136 = CREATE_VOLUME_IN_LAYOUT(Local_0, "fomv_backNearSteps", 2, -2711.947f, 67.26276f, 3472.885f, 0.0f, -44.90123f, 0.0f, 12.08167f, 3.72745f, 9.820806f);
	Local_0.f_140 = CREATE_VOLUME_IN_LAYOUT(Local_0, "fomv_fte_stayOut", 2, -2680.111f, 67.26273f, 3459.408f, 0.0f, -43.83292f, 0.0f, 61.10632f, 27.03403f, 90.70605f);
	Local_0.f_164 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "fomv_SpawnAnimal_set");
	(*&Local_0 + 144)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "animal1", 2, -2736.0f, 77.89381f, 3404.192f, 0.0f, -44.73434f, 0.0f, 57.21432f, 40.97836f, 157.852f);
	ADD_TO_VOLUME_SET(Local_0.f_164, (*&Local_0 + 144)[0]);
	(*&Local_0 + 144)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "animal2", 2, -2736.135f, 66.07565f, 3511.928f, 0.0f, -44.31988f, 0.0f, 139.3303f, 36.16797f, 36.16797f);
	ADD_TO_VOLUME_SET(Local_0.f_164, (*&Local_0 + 144)[1]);
	(*&Local_0 + 144)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "animal3", 2, -2635.602f, 67.26273f, 3500.634f, 0.0f, -44.80806f, 0.0f, 36.2158f, 36.2158f, 140.8952f);
	ADD_TO_VOLUME_SET(Local_0.f_164, (*&Local_0 + 144)[2]);
	(*&Local_0 + 144)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "animal4", 2, -2637.467f, 67.26273f, 3384.581f, 0.0f, -45.29849f, 0.0f, 185.4813f, 39.39309f, 39.39309f);
	ADD_TO_VOLUME_SET(Local_0.f_164, (*&Local_0 + 144)[3]);
	*(&Local_0 + 168) = { -2668.029f, 70.19038f, 3442.759f };
	*(&Local_0 + 168 + 12) = { 0.0f, 152.5669f, 0.0f };
	Local_0.f_192 = CREATE_POINT_IN_LAYOUT(Local_0, "fomf_AreaTreasure1", -2668.029f, 70.19038f, 3442.759f, 0.0f, 152.5669f, 0.0f);
	*(&Local_0 + 196) = { -2692.353f, 67.25689f, 3468.803f };
	*(&Local_0 + 196 + 12) = { 0.0f, -205.9882f, 0.0f };
	Local_0.f_220 = CREATE_POINT_IN_LAYOUT(Local_0, "fomf_AreaTreasure2", -2692.353f, 67.25689f, 3468.803f, 0.0f, -205.9882f, 0.0f);
	*(&Local_0 + 224) = { -2709.715f, 71.6468f, 3463.659f };
	*(&Local_0 + 224 + 12) = { 0.0f, -134.914f, 0.0f };
	Local_0.f_248 = CREATE_POINT_IN_LAYOUT(Local_0, "fomf_AreaTreasure3", -2709.715f, 71.6468f, 3463.659f, 0.0f, -134.914f, 0.0f);
	*(&Local_0 + 252) = { -2664.348f, 71.64236f, 3404.95f };
	*(&Local_0 + 252 + 12) = { 0.0f, 130.431f, 0.0f };
	Local_0.f_276 = CREATE_POINT_IN_LAYOUT(Local_0, "fomf_AreaTreasure4", -2664.348f, 71.64236f, 3404.95f, 0.0f, 130.431f, 0.0f);
	*(&Local_0 + 280) = { -2640.856f, 72.63904f, 3431.684f };
	*(&Local_0 + 280 + 12) = { 0.0f, -55.02145f, 0.0f };
	Local_0.f_304 = CREATE_POINT_IN_LAYOUT(Local_0, "fomf_AreaTreasure5", -2640.856f, 72.63904f, 3431.684f, 0.0f, -55.02145f, 0.0f);
	*(&Local_0 + 308) = { -2646.402f, 67.434f, 3424.368f };
	*(&Local_0 + 308 + 12) = { 0.0f, 135.8928f, 0.0f };
	Local_0.f_332 = CREATE_POINT_IN_LAYOUT(Local_0, "fomf_interiorPoint_01", -2646.402f, 67.434f, 3424.368f, 0.0f, 135.8928f, 0.0f);
	*(&Local_0 + 336) = { -2664.424f, 67.3814f, 3411.926f };
	*(&Local_0 + 336 + 12) = { 0.0f, 194.3702f, 0.0f };
	Local_0.f_360 = CREATE_POINT_IN_LAYOUT(Local_0, "fomf_interiorPoint_02", -2664.424f, 67.3814f, 3411.926f, 0.0f, 194.3702f, 0.0f);
	*(&Local_0 + 364) = { -2686.93f, 67.47489f, 3430.025f };
	*(&Local_0 + 364 + 12) = { 0.0f, 223.9042f, 0.0f };
	Local_0.f_388 = CREATE_POINT_IN_LAYOUT(Local_0, "fomf_interiorPoint_03", -2686.93f, 67.47489f, 3430.025f, 0.0f, 223.9042f, 0.0f);
	*(&Local_0 + 392) = { -2701.783f, 67.47336f, 3463.878f };
	*(&Local_0 + 392 + 12) = { 0.0f, 223.9042f, 0.0f };
	Local_0.f_416 = CREATE_POINT_IN_LAYOUT(Local_0, "fomf_interiorPoint_04", -2701.783f, 67.47336f, 3463.878f, 0.0f, 223.9042f, 0.0f);
	*(&Local_0 + 420) = { -2682.912f, 67.63786f, 3457.769f };
	*(&Local_0 + 420 + 12) = { 0.0f, 332.0082f, 0.0f };
	Local_0.f_444 = CREATE_POINT_IN_LAYOUT(Local_0, "fomf_interiorPoint_05", -2682.912f, 67.63786f, 3457.769f, 0.0f, 332.0082f, 0.0f);
	*(&Local_0 + 448) = { -2653.028f, 67.63373f, 3454.612f };
	*(&Local_0 + 448 + 12) = { 0.0f, 420.3056f, 0.0f };
	Local_0.f_472 = CREATE_POINT_IN_LAYOUT(Local_0, "fomf_interiorPoint_06", -2653.028f, 67.63373f, 3454.612f, 0.0f, 420.3056f, 0.0f);
	*(&Local_0 + 476) = { -2656.889f, 66.86784f, 3469.668f };
	*(&Local_0 + 476 + 12) = { 0.0f, 361.7412f, 0.0f };
	Local_0.f_500 = CREATE_POINT_IN_LAYOUT(Local_0, "fomf_interiorPoint_07", -2656.889f, 66.86784f, 3469.668f, 0.0f, 361.7412f, 0.0f);
	*(&Local_0 + 504) = { -2653.633f, 71.81962f, 3449.391f };
	*(&Local_0 + 504 + 12) = { 0.0f, 334.7802f, 0.0f };
	Local_0.f_528 = CREATE_POINT_IN_LAYOUT(Local_0, "fomf_interiorPoint_08", -2653.633f, 71.81962f, 3449.391f, 0.0f, 334.7802f, 0.0f);
	*(&Local_0 + 532) = { -2669.916f, 71.82719f, 3464.239f };
	*(&Local_0 + 532 + 12) = { 0.0f, 334.7802f, 0.0f };
	Local_0.f_556 = CREATE_POINT_IN_LAYOUT(Local_0, "fomf_interiorPoint_09", -2669.916f, 71.82719f, 3464.239f, 0.0f, 334.7802f, 0.0f);
	*(&Local_0 + 560) = { -2683.083f, 71.65487f, 3461.135f };
	*(&Local_0 + 560 + 12) = { 0.0f, 334.7802f, 0.0f };
	Local_0.f_584 = CREATE_POINT_IN_LAYOUT(Local_0, "fomf_interiorPoint_010", -2683.083f, 71.65487f, 3461.135f, 0.0f, 334.7802f, 0.0f);
	*(&Local_0 + 588) = { -2666.96f, 71.65486f, 3407.694f };
	*(&Local_0 + 588 + 12) = { 0.0f, 223.939f, 0.0f };
	Local_0.f_612 = CREATE_POINT_IN_LAYOUT(Local_0, "fomf_interiorPoint_011", -2666.96f, 71.65486f, 3407.694f, 0.0f, 223.939f, 0.0f);
	*(&Local_0 + 616) = { -2682.528f, 70.97542f, 3419.109f };
	*(&Local_0 + 616 + 12) = { 0.0f, 133.667f, 0.0f };
	Local_0.f_640 = CREATE_POINT_IN_LAYOUT(Local_0, "fomf_interiorPoint_012", -2682.528f, 70.97542f, 3419.109f, 0.0f, 133.667f, 0.0f);
	*(&Local_0 + 644) = { -2699.713f, 71.65486f, 3427.596f };
	*(&Local_0 + 644 + 12) = { -6.708309f, -16.8552f, -6.746848f };
	Local_0.f_668 = CREATE_POINT_IN_LAYOUT(Local_0, "fomf_interiorPoint_013", -2699.713f, 71.65486f, 3427.596f, -6.708309f, -16.8552f, -6.746848f);
	CREATE_POINT_IN_LAYOUT(Local_0, "fom_vista_cam_pos1", -2558.059f, 78.327f, 3364.936f, -3.151f, 115.049f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "fom_vista_cam_pos2", -2647.692f, 78.935f, 3335.974f, -2.463f, 178.762f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "fom_vista_cam_pos3", -2741.691f, 76.29f, 3474.818f, -7.276f, -70.072f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "fom_vista_cam_pos4", -2752.739f, 79.729f, 3449.356f, -7.563f, -95.397f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "fom_vista_cam_pos5", -2675.687f, 87.945f, 3616.577f, -7.161f, 12.089f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "fom_vista_cam_pos6", -2700.544f, 77.72f, 3425.59f, 0.343f, -121.065f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "fom_vista_cam_pos7", -2669.246f, 68.491f, 3418.768f, 3.093f, 169.194f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "fom_vista_cam_pos8", -2664.349f, 68.567f, 3464.262f, 5.557f, 19.423f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "fom_vista_cam_pos9", -2681.334f, 73.68f, 3509.738f, 5.156f, 22.345f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "fom_vista_cam_pos10", -2719.429f, 69.114f, 3471.881f, 0.057f, -103.533f, 0.0f);
	return 1;
}

void Function_64(int iParam0, int iParam1) //Position: 0x4333 / 17203
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

var Function_65() //Position: 0x437C / 17276
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_66(bool bParam0, var uParam1) //Position: 0x4391 / 17297
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

