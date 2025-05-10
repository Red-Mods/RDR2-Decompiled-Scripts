//Decompiled with MagicRDR v1.0
//Function Count : 172
//Statics Count : 93
//Natives Count : 330
//Parameters Count : 51

#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 2;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	float fLocal_20 = 0.0f;
	float fLocal_21 = 0.0f;
	bool bLocal_22 = false;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0.0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	var uLocal_32 = 0;
	int iLocal_33 = 0;
	bool bLocal_34 = false;
	bool bLocal_35 = false;
	bool bLocal_36 = false;
	int iLocal_37 = 0;
	bool bLocal_38 = false;
	bool bLocal_39 = false;
	int iLocal_40 = 0;
	bool bLocal_41 = false;
	struct<57> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	bool bVar4;
	bool bVar5;
	int iVar21;
	bool bVar22;
	bool bVar23;
	int iVar24;
	int iVar25;
	int iVar27;
	int iVar28;
	int iVar29;
	bool bVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	bool bVar34;
	vector3 vVar35;
	int iVar38;
	var uVar39;
	var uVar42;
	var uVar43;
	int iVar44;
	int iVar45;
	var uVar46;
	var uVar49;
	int iVar50;
	bool bVar51;
	
	iLocal_14 = 0;
	iLocal_15 = 0;
	fLocal_21 = 0.0f;
	iLocal_29 = 0;
	iLocal_30 = 0;
	iLocal_31 = 0;
	iLocal_33 = 0;
	bLocal_34 = false;
	bLocal_38 = false;
	iLocal_40 = 0;
	bLocal_41 = false;
	iVar0 = 0;
	Function_170(&uLocal_23, 0.0f);
	bVar1 = CREATE_LAYOUT(Function_169());
	iVar2 = 0;
	bVar5 = 5;
	iVar25 = 0;
	iVar27 = 0;
	switch (Global_29004)
	{
		case 0x00000000:
		case 0x00000002:
			iVar28 = Function_168(ScriptParam_0.f_56, 3);
			switch (iVar28)
			{
				case 0x00000000:
					bVar4 = 65;
					break;
				
				case 0x00000001:
					bVar4 = 146;
					break;
				
				case 0x00000002:
					bVar4 = 169;
					break;
			}
			break;
		
		case 0x00000001:
			iVar28 = Function_168(ScriptParam_0.f_56, 2);
			switch (iVar28)
			{
				case 0x00000000:
					bVar4 = 237;
					break;
				
				case 0x00000001:
					bVar4 = 238;
					break;
			}
			break;
	}
	Function_167(&bVar5, bVar4, 3, 0);
	Function_166(bVar4);
	if (Function_165(bVar4))
	{
		Function_163(&bVar5, "fema_ride_passenger", 5, 0);
	}
	else
	{
		Function_163(&bVar5, "gent_ride_passenger", 5, 0);
	}
	Function_163(&bVar5, "distressed", 5, 0);
	Function_163(&bVar5, "custom/distressed", 8, 0);
	Function_163(&bVar5, "procmissions", 10, 0);
	iVar29 = 0;
	bVar30 = false;
	iVar31 = 0;
	iVar32 = 0;
	iVar33 = 0;
	iVar44 = 4294967295;
	if (Global_3382 != 1 || Global_26303.f_20 < 0)
	{
		iVar0 = 5;
	}
	iVar50 = 0;
	bVar51 = false;
	while (!IS_EXITFLAG_SET())
	{
		iVar38 = 600;
		if (Function_162(&bVar51, &iVar0, &iVar50, &iVar38, bVar30))
		{
			if (bVar51)
			{
				Function_161(&bVar34);
			}
			else
			{
				Function_160(&bVar34);
			}
		}
		switch (iVar0)
		{
			case 0x00000000:
				if (Function_154(&bVar5))
				{
					iVar0 = 1;
					iVar38 = 0;
				}
				iVar38 = 600;
				break;
			
			case 0x00000001:
				if (Function_115(&ScriptParam_0, &iVar38, &iVar33, &iVar29, 1))
				{
					iVar0 = 2;
					iVar38 = 0;
				}
				else if (iVar29 == 1)
				{
					iVar0 = 5;
					iVar38 = 0;
				}
				break;
			
			case 0x00000002:
				if (VDIST(Global_34574, *(&ScriptParam_0 + 8)) > Function_114())
				{
					iVar0 = 5;
					iVar38 = 0;
					break;
				}
				iVar24 = Function_110(StackVal, StackVal, Global_34574, 0.0f, 1);
				GET_OBJECT_POSITION(StackVal, &vVar35);
				if (!Function_107(StackVal, StackVal, vVar35))
				{
					if (ScriptParam_0.f_32)
					{
						PRINT_OBJECTIVE_B("Beat can't run because nearest town is not safe!", 7.5f, 1, 2, 1, 0, 0, 0);
					}
					iVar0 = 5;
					iVar38 = 0;
					break;
				}
				PRINTVECTOR(*(&ScriptParam_0 + 8));
				PRINTNL();
				PRINTVECTOR(Global_34574);
				PRINTNL();
				bVar34 = CREATE_ACTOR_IN_LAYOUT(bVar1, Function_169(), bVar4, *(&ScriptParam_0 + 8), *(&ScriptParam_0 + 20));
				Function_106(bVar34);
				AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bVar34, 0);
				SET_ACTOR_CUTSCENE_MODE(bVar34, 1);
				SET_ACTOR_UPDATE_PRIORITY(bVar34, false);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar34, 0);
				UNK_0x99AFD2D1(bVar34, 1, 1);
				DELETE_ALL_WEAPONS_FROM_ACTOR(bVar34);
				SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_ACTOR(bVar34), 6.0f, true, 1092616192);
				MEMORY_REPORT_POSITION_AUTO(bVar34, Global_34573, 1);
				bLocal_22 = GET_MOUNT(Global_34573);
				Function_104(StackVal, StackVal, &uVar42, &uVar43, &iVar44, 2.0f, *(&ScriptParam_0 + 8));
				iVar0 = 3;
				bVar23 = CREATE_VOLUME_IN_LAYOUT(bVar1, Function_169(), 0, *(&ScriptParam_0 + 8), 0.0f, 0.0f, 0.0f, 35.0f, 10.0f, 35.0f);
				ATTACH_OBJECTS(GET_OBJECT_FROM_VOLUME(bVar23), bVar34, Function_169(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
				CLEAR_AMBIENT_OBJECTS_VOLUME(bVar23, 15);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar23);
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar23);
				Function_103(&iVar2, 16);
				Function_103(&iVar2, 2);
				Function_103(&iVar2, 4);
				Function_103(&iVar2, 1);
				break;
			
			case 0x00000003:
				if (GET_DEBUG_DRAW_STATE())
				{
					if (IS_ACTOR_VALID(bVar34))
					{
						GET_POSITION(bVar34, &uVar39);
						iVar38 = 0;
					}
				}
				if (Function_100(bVar34, &uVar3, &fLocal_21, iVar2, iLocal_29, 0x40400000))
				{
					RESET_ANIM_SET_FOR_ACTOR(bVar34, 1);
					Function_99(bVar34);
					TASK_FLEE_ACTOR(bVar34, Global_34573, -1.0f, -1.0f, 0, 0, 0);
					iVar45 = 1;
					iVar0 = 5;
					iVar38 = 0;
					break;
				}
				if (IS_ACTOR_ALIVE(bVar34))
				{
					if (Function_98(bVar34, Global_34573) < Function_96(1))
					{
						TASK_FLEE_ACTOR(bVar34, Global_34573, -1.0f, -1.0f, 0, 0, 0);
						iVar45 = 1;
						iVar0 = 5;
						iVar38 = 0;
						break;
					}
				}
				else
				{
					Function_94("pm_esc_gdie", iVar25, 1);
					iVar0 = 5;
					iVar38 = 0;
					break;
				}
				Function_93();
				Function_65(StackVal, StackVal, Function_93(), &bVar30, ScriptParam_0.f_56, bVar34, 60, 0x42700000, 1);
				if (!Function_59(ScriptParam_0.f_56, bVar34, &iVar31, &iVar32, 0, 1, 1, 1))
				{
					Function_50(bVar34, 4, 0, 2);
					iVar45 = 1;
					iVar0 = 5;
					iVar38 = 0;
					break;
				}
				if (Function_24(&iVar27, bVar34, bVar1, &iVar38, &iVar21, &bVar22, &iVar25, &uVar46, &uVar49, ScriptParam_0.f_56, &bVar23, iVar24))
				{
					iVar45 = 1;
					iVar0 = 5;
					iVar38 = 0;
				}
				break;
			
			case 0x00000005:
				Function_170(&uLocal_23, 0.0f);
				if (bLocal_34)
				{
					Function_23();
					bLocal_34 = false;
				}
				Function_21(bVar34);
				if (IS_VOLUME_VALID(bVar22))
				{
					DESTROY_VOLUME(bVar22);
				}
				if (IS_SCRIPT_USE_CONTEXT_VALID(iVar21))
				{
					RELEASE_SCRIPT_USE_CONTEXT(iVar21);
				}
				if (IS_BLIP_VALID(bLocal_35))
				{
					REMOVE_BLIP(bLocal_35);
				}
				iVar0 = 6;
				iVar38 = 0;
				break;
			
			case 0x00000006:
				if (!Function_20() && Function_16(&uLocal_23, 2.0f))
				{
					TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
					iVar38 = 0;
				}
				break;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(iVar38);
		}
	}
	if (bLocal_34)
	{
		Function_23();
	}
	if (bLocal_38)
	{
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	}
	if (IS_VOLUME_VALID(bVar23))
	{
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar23);
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar23);
	}
	Function_160(&bVar34);
	Function_15(&uVar42, &uVar43, &iVar44);
	Function_14(bVar4);
	Function_21(bVar34);
	if (ScriptParam_0.f_32)
	{
		Global_3399 = 0;
	}
	if (!bVar30)
	{
		Function_8(ScriptParam_0.f_56, 0.0f, 0, 1, 0);
	}
	if (Function_6(bVar34, 0))
	{
		if (bLocal_36)
		{
			RESET_ANIM_SET_FOR_ACTOR(bVar34, 1);
		}
		AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar34, 1);
		UNK_0x99AFD2D1(bVar34, 0, 0);
	}
	if (IS_BLIP_VALID(bLocal_35))
	{
		REMOVE_BLIP(bLocal_35);
	}
	if (iVar45 == 0)
	{
		Function_5(&bVar34);
	}
	if (IS_VOLUME_VALID(bVar22))
	{
		DESTROY_VOLUME(bVar22);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(iVar21))
	{
		RELEASE_SCRIPT_USE_CONTEXT(iVar21);
	}
	if (!bVar30)
	{
		Function_5(&bVar34);
		if (IS_OBJECT_VALID(bVar1))
		{
			UNK_0xA936E73B(bVar1, 1);
			MARK_OBJECT_FOR_AGGRESSIVE_CLEANUP(bVar1, 1);
		}
	}
	Function_1(&bVar5);
	RELEASE_LAYOUT_REF(bVar1);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x608 / 1544
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_2(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_2(var uParam0, int iParam1) //Position: 0x62E / 1582
{
	if (Function_4(uParam0[iParam13], 4))
	{
		if (Function_4(uParam0[iParam13], 1))
		{
			switch (StackVal)
			{
				case 0x00000000:
					STREAMING_EVICT_PROP((*uParam0)[iParam13]);
					break;
				
				case 0x00000007:
					STREAMING_EVICT_PROPSET((*uParam0)[iParam13]);
					break;
				
				case 0x00000002:
				case 0x00000003:
					STREAMING_EVICT_ACTOR((*uParam0)[iParam13], 4294967295);
					break;
				
				case 0x00000005:
					REMOVE_ANIM_SET(GET_ASSET_NAME(StackVal, (*uParam0)[iParam13]));
					break;
				
				case 0x00000001:
					STREAMING_EVICT_GRINGO((*uParam0)[iParam13]);
					break;
				
				case 0x00000008:
					REMOVE_ACTION_TREE(GET_ASSET_NAME(StackVal, (*uParam0)[iParam13]));
					break;
				
				case 0x0000000A:
					REMOVE_STRING_TABLE(GET_ASSET_NAME(StackVal, (*uParam0)[iParam13]));
					break;
				
				case 0x00000004:
					STREAMING_EVICT_SCRIPT((*uParam0)[iParam13]);
					break;
				
				case 0x00000006:
					STREAMING_UNREQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME((*uParam0)[iParam13], 6));
					break;
				
				case 0x0000000C:
					STREAMING_EVICT_GRINGO_DICTIONARY((*uParam0)[iParam13]);
					break;
				
				default:
					break;
			}
			Function_3(uParam0[iParam13], 1);
			Function_3(uParam0[iParam13], 2);
			Function_3(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_3(var uParam0, int iParam1) //Position: 0x75C / 1884
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_4(var uParam0, int iParam1) //Position: 0x776 / 1910
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(bool bParam0) //Position: 0x793 / 1939
{
	if (IS_ACTOR_VALID(*bParam0))
	{
		RESET_ANIM_SET_FOR_ACTOR(*bParam0, 0);
		TASK_FLEE_ACTOR(*bParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
		TASK_PRIORITY_SET(*bParam0, 0);
	}
	return;
}

bool Function_6(bool bParam0, bool bParam1) //Position: 0x7BE / 1982
{
	if (bParam1)
	{
		if (IS_ACTOR_HOGTIED(bParam0))
		{
			if (!(GET_TASK_STATUS(bParam0, 25) != 1 || GET_TASK_STATUS(bParam0, 25) != 3))
			{
				MEMORY_CLEAR_EVENTS(bParam0, 0);
				TASK_FLEE_ACTOR(bParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
				TASK_PRIORITY_SET(bParam0, 1);
			}
			Function_21(bParam0);
			return 0;
		}
		if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 163840))
		{
			Function_21(bParam0);
			return 0;
		}
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		if (Function_7(bParam0, 0) && !AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 16384))
		{
			return 0;
		}
		if (IS_ACTOR_ALIVE(bParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int Function_7(bool bParam0, int iParam1) //Position: 0x85A / 2138
{
	bool bVar0;
	int iVar1;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (iParam1 && IS_ACTOR_HOGTIED(bParam0))
		{
			return 1;
		}
		bVar0 = SQUAD_GET(bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			iVar1 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(bVar0);
		}
		else
		{
			iVar1 = 172712;
		}
		if (AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), iVar1))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_8(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x8A4 / 2212
{
	bool bVar0;
	bool bVar1;
	
	if (Global_30842[16])
	{
		PRINTSTRING(GET_ASSET_NAME(Global_17483[iParam075].f_96, 4));
	}
	fParam1 = fParam1;
	if (bParam4)
	{
		HUD_CLEAR_OBJECTIVE_QUEUE();
		Global_3399 = 0;
		Function_10("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
		if (StackVal & 128 == 128)
		{
			Global_17483[iParam075].f_116 = 0;
		}
		if (StackVal & 64 == 64)
		{
			if (Global_3367)
			{
				if (IS_SCRIPT_VALID(Global_6281) && Global_6281 == GET_THIS_SCRIPT_ID())
				{
					return 0;
				}
			}
			Global_3367 = 1;
			Global_6281 = GET_THIS_SCRIPT_ID();
		}
		return 1;
	}
	if (iParam0 != 4294967295)
	{
		bVar0 = GET_TIME_OF_DAY();
		bVar1 = GET_TOTAL_MINUTES(Global_17483[iParam075].f_260);
		if (Global_30842[16])
		{
			PRINTSTRING("Current Time of day:");
			Function_9(bVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_9(bVar0);
		}
		if (!bParam3)
		{
			ADD_TIME(&bVar0, 0, 0, bVar1, 0);
		}
		else
		{
			ADD_TIME(&bVar0, 0, 0, 10, 0);
		}
		if (Global_30842[16])
		{
			PRINTSTRING("Formed time of day:");
			Function_9(bVar0);
		}
		Global_17483[iParam075].f_264 = bVar0;
		Global_16876[iParam06] = bVar0;
		if (bParam2)
		{
			Global_16876[iParam06].f_4 = StackVal + 1;
			if (StackVal & 128 == 128)
			{
				Global_17483[iParam075].f_116 = 0;
			}
			if (StackVal & 64 == 64)
			{
				if (Global_3367)
				{
					if (IS_SCRIPT_VALID(Global_6281) && Global_6281 == GET_THIS_SCRIPT_ID())
					{
						return 0;
					}
				}
				Global_3367 = 1;
				Global_6281 = GET_THIS_SCRIPT_ID();
			}
		}
		return 1;
	}
	LOG_ERROR("Invalid beat index");
	return 0;
}

void Function_9(bool bParam0) //Position: 0xB01 / 2817
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

void Function_10(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0xB47 / 2887
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_11(Global_6269) };
		}
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, &Var0, iParam5);
	}
	else
	{
		iVar4 = "";
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, iVar4, iParam5);
	}
}

struct<16> Function_11(int iParam0) //Position: 0xBBE / 3006
{
	char* cVar0[16];
	
	if (!Function_12())
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

bool Function_12() //Position: 0xBFD / 3069
{
	if (Function_13(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_13(int iParam0, int iParam1) //Position: 0xC18 / 3096
{
	return (iParam0 && iParam1) == 0;
}

void Function_14(int iParam0) //Position: 0xC25 / 3109
{
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(iParam0);
	return;
}

void Function_15(var uParam0, var uParam1, int iParam2) //Position: 0xC30 / 3120
{
	if (*uParam0 != 4294967295)
	{
		RESET_THIS_TREE_TYPE_CLEARING(*uParam0);
	}
	if (*uParam1 != 4294967295)
	{
		RESET_THIS_BREAKABLE_TREE_CLEARING(*uParam1);
	}
	if (*iParam2 != 4294967295)
	{
		RESET_THIS_TREE_TYPE_CLEARING(*iParam2);
	}
	return;
}

bool Function_16(var uParam0, float fParam1) //Position: 0xC5D / 3165
{
	if (Function_19(uParam0))
	{
		if (Function_17(uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_17(bool bParam0) //Position: 0xC79 / 3193
{
	if (Function_19(bParam0))
	{
		if (Function_18(bParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_18(int iParam0) //Position: 0xD41 / 3393
{
	return Function_13(*iParam0, 2);
}

bool Function_19(bool bParam0) //Position: 0xD4E / 3406
{
	return Function_13(*bParam0, 1);
}

bool Function_20() //Position: 0xD5B / 3419
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

int Function_21(bool bParam0) //Position: 0xD88 / 3464
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_22(bParam0);
		return 1;
	}
	return 0;
}

void Function_22(bool bParam0) //Position: 0xD9E / 3486
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		bVar0 = GET_BLIP_ON_ACTOR(bParam0);
		while (IS_BLIP_VALID(bVar0))
		{
			REMOVE_BLIP(bVar0);
			bVar0 = GET_BLIP_ON_ACTOR(bParam0);
		}
	}
	return;
}

void Function_23() //Position: 0xDCA / 3530
{
	if (Global_28185 == 2)
	{
		Global_28185.f_4 = 3;
	}
	*(&Global_28185 + 24) = { 0.0f, 0.0f, 0.0f };
	*(&Global_28185 + 36) = { 0.0f, 0.0f, 0.0f };
	CLEAR_GPS_PATH(1);
	return;
}

bool Function_24(var uParam0, bool bParam1, bool bParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11) //Position: 0xDF5 / 3573
{
	switch (*uParam0)
	{
		case 0x00000000:
			*uParam3 = 0;
			if (Function_49(&bParam1, &Global_34573, &iLocal_31, bParam2, 55.0f, &iLocal_33, uLocal_32, &uLocal_23, &iLocal_30, 25.0f, 1, 4, -9.0f, 25.0f, "LoneStranded_msg01", 1))
			{
				if (iLocal_33 || Function_98(Global_34573, bParam1) > 25.0f)
				{
					bLocal_22 = GET_MOUNT(Global_34573);
					AI_GOAL_LOOK_AT_ACTOR_NEW(bParam1, Global_34573, -1.0f, 1);
					TASK_FACE_ACTOR(bParam1, Global_34573, 1, 3212836864);
					SET_ANIM_SET_FOR_ACTOR(bParam1, "distressed", 0);
					SET_ACTION_NODE_FOR_ACTOR(bParam1, "distressed/wave_pst");
					bLocal_36 = true;
					Function_21(bParam1);
					ADD_BLIP_FOR_ACTOR(bParam1, 325, 0, 2, 0);
					Function_46();
					Function_170(&uLocal_23, 0.0f);
					*uParam0 = 1;
				}
			}
			else
			{
				return 1;
			}
			break;
		
		case 0x00000001:
			if (Function_16(&uLocal_23, 4.0f) && !IS_AMBIENT_SPEECH_PLAYING(bParam1))
			{
				if (IS_VOLUME_VALID(*uParam10))
				{
					REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(*uParam10);
					REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(*uParam10);
					DESTROY_VOLUME(*uParam10);
				}
				if (Function_98(Global_34573, bParam1) > 30.0f && !IS_AMBIENT_SPEECH_PLAYING(bParam1))
				{
					Function_45(bParam1, Global_34573, "LoneStranded_msg02", "LoneStranded_msg02", 5, 60, 1, 1);
					*uParam0 = 2;
				}
				else
				{
					TASK_FLEE_ACTOR(bParam1, Global_34573, -1.0f, -1.0f, 0, 0, 0);
					return 1;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_16(&uLocal_23, 2.0f))
			{
				*uParam5 = CREATE_VOLUME_IN_LAYOUT(bParam2, Function_169(), 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 15.0f, 4.0f, 15.0f);
				ATTACH_OBJECTS(GET_OBJECT_FROM_VOLUME(*uParam5), bParam1, Function_169(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
				if (IS_ACTOR_RIDING(Global_34573))
				{
					HUD_CLEAR_HELP_QUEUE();
					Function_44("beaconEscortGeneric_help01", 0x41200000, 1, 0, 2, 1, 0);
					*uParam4 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("beaconContextAccept", *uParam5, 25, 5, 0, false, 0, 0, 4294967295, 0);
					*uParam0 = 4;
				}
				else
				{
					HUD_CLEAR_HELP_QUEUE();
					Function_44("beaconEscortGeneric_help02", 0x41200000, 1, 0, 2, 1, 0);
					*uParam0 = 3;
				}
				Function_170(&uLocal_23, 0.0f);
			}
			break;
		
		case 0x00000003:
			bLocal_22 = GET_MOUNT(Global_34573);
			if (IS_ACTOR_VALID(bLocal_22) && IS_ACTOR_IN_VOLUME(Global_34573, *uParam5))
			{
				*uParam4 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("beaconContextAccept", *uParam5, 25, 5, 0, false, 0, 0, 4294967295, 0);
				HUD_CLEAR_HELP_QUEUE();
				Function_44("beaconEscortGeneric_help01", 0x41200000, 1, 0, 2, 1, 0);
				Function_170(&uLocal_23, 0.0f);
				*uParam0 = 4;
			}
			else if (!ACTORS_IN_RANGE(Global_34573, bParam1, 60.0f) || Function_16(&uLocal_23, 30.0f))
			{
				Function_50(bParam1, 4, 0, 2);
				Function_21(bParam1);
				return 1;
			}
			break;
		
		case 0x00000004:
			bLocal_22 = GET_MOUNT(Global_34573);
			if (IS_ACTOR_VALID(bLocal_22))
			{
				SET_VOLUME_ENABLED(*uParam5, 1);
				if (IS_SCRIPT_USE_CONTEXT_VALID(*uParam4))
				{
					if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(*uParam4))
					{
						if (bLocal_36)
						{
							RESET_ANIM_SET_FOR_ACTOR(bParam1, 1);
						}
						CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam1);
						Function_45(Global_34573, bParam1, "LoneStrandedPlayer_msg01", "LoneStrandedPlayer_msg01", 5, 60, 1, 1);
						Function_43("beaconEscortWaveDown_obj01", 0x40f00000, 1, 2, 0, 0, 0, 0);
						HUD_CLEAR_HELP();
						HUD_CLEAR_HELP_QUEUE();
						DESTROY_VOLUME(*uParam5);
						RELEASE_SCRIPT_USE_CONTEXT(*uParam4);
						RESET_ANIM_SET_FOR_ACTOR(bParam1, 1);
						if (IS_ACTOR_MALE(bParam1))
						{
							SET_ANIM_SET_FOR_ACTOR(bParam1, "gent_ride_passenger", 0);
						}
						else
						{
							SET_ANIM_SET_FOR_ACTOR(bParam1, "fema_ride_passenger", 0);
						}
						SET_MOUNTS_AS_PASSENGER(bParam1, 1);
						TASK_MOUNT(bParam1, bLocal_22, 0, 1, 2, 2147483647);
						TASK_PRIORITY_SET(bParam1, 0);
						Function_170(&uLocal_23, 0.0f);
						*uParam6 = 1;
						*uParam0 = 5;
					}
				}
			}
			else
			{
				HUD_CLEAR_HELP_QUEUE();
				Function_44("beaconEscortGeneric_help02", 0x41200000, 1, 0, 2, 1, 0);
				RELEASE_SCRIPT_USE_CONTEXT(*uParam4);
				Function_170(&uLocal_23, 0.0f);
				*uParam0 = 3;
			}
			if (!ACTORS_IN_RANGE(Global_34573, bParam1, 60.0f) || Function_16(&uLocal_23, 30.0f))
			{
				Function_50(bParam1, 4, 0, 2);
				Function_21(bParam1);
				return 1;
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
			{
				if (GET_MOUNT(Global_34573) == GET_MOUNT(bParam1))
				{
					HUD_CLEAR_OBJECTIVE_QUEUE();
					Function_43("LoneStrandedEscortObjective", 0x40f00000, 1, 2, 0, 0, 0, 0);
					GET_OBJECT_POSITION(StackVal, uParam7);
					Function_42(iParam11, uParam7);
					Function_40(StackVal, StackVal, *uParam7, 0, 48, 0);
					bLocal_34 = true;
					*uParam8 = Function_39(StackVal, StackVal, bParam2, "gDestination", *uParam7, 0.0f, 0.0f, 0.0f, Global_34573, 4.0f, 1, 3, 4294967295, 4294967295, 1, 3212836864, 3212836864, 1);
					bLocal_35 = ADD_BLIP_FOR_OBJECT(*uParam8, 330, 0f, 2, 0);
					SET_BLIP_PRIORITY(bLocal_35, 3);
					bLocal_39 = VDIST(Global_34574, *uParam7);
					*uParam0 = 6;
				}
			}
			if (Function_16(&uLocal_23, 15.0f))
			{
				Function_50(bParam1, 4, 0, 1);
				Function_21(bParam1);
				Function_94("beaconEscortWaveDown_fail01", 1, 1);
				return 1;
			}
			break;
		
		case 0x00000006:
			Function_21(bParam1);
			if (!IS_ACTOR_RIDING(bParam1))
			{
				ADD_BLIP_FOR_ACTOR(bParam1, 325, 0, 2, 0);
			}
			if (VDIST(Global_34574, *uParam7) > (bLocal_39 + 175.0f))
			{
				Function_38(&fLocal_26);
				iLocal_40 = 0;
			}
			else if (Function_16(&fLocal_26, 7.0f))
			{
				if (iLocal_40 > 2)
				{
					Function_36(Global_34573, 0);
					TASK_DISMOUNT(Global_34573, 1);
					TASK_FLEE_ACTOR(bParam1, Global_34573, -1.0f, -1.0f, 0, 0, 0);
					Function_45(bParam1, Global_34573, "MAJOR_SHOCK", 0, 5, 60, 1, 1);
					Function_94("pm_esc_wdirfail", 1, 1);
					return 1;
				}
				if (bLocal_41)
				{
					Function_45(bParam1, Global_34573, "MINOR_SHOCK", 0, 5, 60, 1, 1);
				}
				else
				{
					Function_45(bParam1, Global_34573, "LoneStranded_msg03", "LoneStranded_msg03", 5, 60, 1, 1);
				}
				bLocal_41 = !bLocal_41;
				Function_43("pm_esc_wdir", 0x40f00000, 1, 2, 0, 0, 0, 0);
				Function_38(&fLocal_26);
				iLocal_40++;
			}
			if (StackVal && Function_34(StackVal, GATEWAY_UPDATE(*uParam8), bParam1, *uParam7) > 12.0f)
			{
				Function_36(Global_34573, 0);
				TASK_DISMOUNT(Global_34573, 1);
				TASK_CLEAR(bParam1);
				Function_33(*uParam8);
				Function_23();
				bLocal_34 = false;
				Function_26(uParam9, 4294967295, 0x3f800000);
				Function_25(uParam9, 0);
				Function_45(bParam1, Global_34573, "LoneStranded_msg04", "LoneStranded_msg04", 5, 60, 1, 1);
				*uParam0 = 7;
			}
			else if (!IS_ACTOR_RIDING(Global_34573))
			{
				TASK_FOLLOW_ACTOR(bParam1, Global_34573);
			}
			else
			{
				bLocal_22 = GET_MOUNT(Global_34573);
				if (IS_ACTOR_VALID(bLocal_22))
				{
					TASK_MOUNT(bParam1, bLocal_22, 0, 1, 2, 2147483647);
				}
			}
			break;
		
		case 0x00000007:
			if (!IS_AMBIENT_SPEECH_PLAYING(bParam1))
			{
				Function_45(Global_34573, bParam1, "LoneStrandedPlayer_msg02", "LoneStrandedPlayer_msg02", 5, 60, 1, 1);
				RESET_ANIM_SET_FOR_ACTOR(bParam1, 1);
				bLocal_36 = false;
				return 1;
			}
			break;
	}
	return 0;
}

void Function_25(int iParam0, int iParam1) //Position: 0x1615 / 5653
{
	switch (iParam0)
	{
		case 0x00000036:
		case 0x00000039:
		case 0x0000003A:
		case 0x00000041:
		case 0x00000043:
		case 0x0000004A:
		case 0x0000003B:
		case 0x00000037:
			iParam1 = iParam1;
			break;
		
		case 0x00000038:
		case 0x00000047:
		case 0x0000003C:
			break;
		
		case 0x00000040:
		case 0x0000003F:
		case 0x00000044:
			break;
		
		case 0x00000046:
		case 0x00000048:
		case 0x00000049:
			break;
	}
	return;
}

void Function_26(int iParam0, bool bParam1, float fParam2) //Position: 0x1698 / 5784
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	var uVar4[6];
	bool bVar11;
	int iVar12;
	float fVar13;
	
	bVar0 = false;
	bVar1 = false;
	iVar3 = 0;
	switch (iParam0)
	{
		case 0x00000036:
		case 0x00000039:
		case 0x0000003A:
		case 0x00000041:
		case 0x00000043:
		case 0x0000003B:
		case 0x00000037:
			iVar3 = 0;
			break;
		
		case 0x0000004A:
		case 0x00000038:
		case 0x00000047:
		case 0x0000003C:
			iVar3 = 0;
			break;
		
		case 0x00000040:
		case 0x0000003F:
		case 0x00000044:
			iVar3 = 1;
			break;
		
		case 0x00000046:
		case 0x00000048:
		case 0x00000049:
			iVar3 = 2;
			break;
	}
	switch (iVar3)
	{
		case 0x00000000:
			bVar1 = true;
			break;
		
		case 0x00000001:
			bVar1 = 2;
			break;
		
		case 0x00000002:
			bVar1 = 3;
			break;
	}
	bVar1 = CEIL((IntToFloat(bVar1) * fParam2));
	if (bParam1 == 4294967295)
	{
		bVar11 = false;
		Function_32(Global_34573, &uVar4, &bVar11);
		if (bVar11 >= 0)
		{
			PRINTINT(bVar11);
			iVar12 = RAND_INT_RANGE(0, (bVar11 - 1));
			PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(uVar4[iVar12]));
			bParam1 = Function_31(Global_34573, uVar4[iVar12]);
			if (bParam1 == 34)
			{
				bParam1 = 16;
			}
		}
		else
		{
			bVar0 = true;
			Function_27(Function_30(), 0, 1);
		}
	}
	else
	{
		bParam1 = Function_31(Global_34573, bParam1);
		if (bParam1 == 34)
		{
			bParam1 = 16;
		}
	}
	if (!bVar0)
	{
		fVar13 = GET_WEAPON_MAX_AMMO(bParam1);
		if (fVar13 >= 2.0f)
		{
			fVar13 = (fVar13 + 4.0f);
		}
		bVar2 = (fVar13 * IntToFloat(bVar1));
		if (bVar2 < (_GET_MAX_AMMO_AMOUNT(Global_34573, GET_AMMO_ENUM(bParam1)) - _GET_AMMO_AMOUNT(Global_34573, GET_AMMO_ENUM(bParam1), 1)))
		{
			bVar2 = (_GET_MAX_AMMO_AMOUNT(Global_34573, GET_AMMO_ENUM(bParam1)) - _GET_AMMO_AMOUNT(Global_34573, GET_AMMO_ENUM(bParam1), 1));
		}
		if (bVar2 > 1.0f)
		{
			Function_27(Function_30(), 0, 1);
		}
		else
		{
			_ADD_AMMO_OF_TYPE(Global_34573, GET_AMMO_ENUM(bParam1), bVar2, 1, 1);
		}
	}
	return;
}

int Function_27(bool bParam0, bool bParam1, int iParam2) //Position: 0x1857 / 6231
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (bParam1)
	{
		if (GET_ITEM_COUNT(Function_29(bParam0), Function_28()) == 0)
		{
			ADD_ITEM(Function_29(bParam0), Function_28(), iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_29(bParam0), Function_28(), iParam2);
	return 1;
}

var Function_28() //Position: 0x18A2 / 6306
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

var Function_29(bool bParam0) //Position: 0x18B7 / 6327
{
	bool bVar0;
	
	bVar0 = SS_GET_STRING(1, bParam0);
	if (!IS_STRING_VALID(bVar0))
	{
		PRINTSTRING("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value:");
		PRINTINT(bParam0);
		PRINTNL();
		LOG_ERROR("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value! Ask Christian to add it");
	}
	return bVar0;
}

bool Function_30() //Position: 0x19A8 / 6568
{
	int iVar0;
	int iVar1;
	
	iVar0 = RAND_INT_RANGE(0, 6);
	if (iVar0 == 0)
	{
		iVar1 = 3;
	}
	else if (iVar0 == 1)
	{
		iVar1 = 1;
	}
	else if (iVar0 == 2)
	{
		iVar1 = 0;
	}
	else if (iVar0 == 3)
	{
		iVar1 = 2;
	}
	else if (iVar0 == 4)
	{
		iVar1 = 8;
	}
	else if (iVar0 == 5)
	{
		iVar1 = 7;
	}
	else
	{
		iVar1 = 12;
	}
	return iVar1;
}

int Function_31(bool bParam0, int iParam1) //Position: 0x1A04 / 6660
{
	int iVar0;
	
	iVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(bParam0, iParam1);
	return iVar0;
}

void Function_32(bool bParam0, var uParam1, int iParam2) //Position: 0x1A15 / 6677
{
	*iParam2 = 0;
	if (Function_31(bParam0, 39) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(bParam0, 6, 1) > _GET_MAX_AMMO_AMOUNT(bParam0, 6))
		{
			(*uParam1)[*iParam2] = 39;
			*iParam2++;
		}
	}
	if (Function_31(bParam0, 41) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(bParam0, 8, 1) > _GET_MAX_AMMO_AMOUNT(bParam0, 8))
		{
			(*uParam1)[*iParam2] = 41;
			*iParam2++;
		}
	}
	if (Function_31(bParam0, 40) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(bParam0, 7, 1) > _GET_MAX_AMMO_AMOUNT(bParam0, 7))
		{
			(*uParam1)[*iParam2] = 40;
			*iParam2++;
		}
	}
	if (Function_31(bParam0, 42) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(bParam0, 9, 1) > _GET_MAX_AMMO_AMOUNT(bParam0, 9))
		{
			(*uParam1)[*iParam2] = 42;
			*iParam2++;
		}
	}
	if (Function_31(bParam0, 43) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(bParam0, 10, 1) > _GET_MAX_AMMO_AMOUNT(bParam0, 10))
		{
			(*uParam1)[*iParam2] = 43;
			*iParam2++;
		}
	}
	if (Function_31(bParam0, 44) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(bParam0, 11, 1) > _GET_MAX_AMMO_AMOUNT(bParam0, 11))
		{
			(*uParam1)[*iParam2] = 44;
			*iParam2++;
		}
	}
	return;
}

void Function_33(bool bParam0) //Position: 0x1B35 / 6965
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		if (DECOR_CHECK_EXIST(bParam0, "volrestrict"))
		{
			bVar0 = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(bParam0, "volrestrict"));
			if (IS_VOLUME_VALID(bVar0))
			{
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar0);
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar0);
				if (DECOR_CHECK_EXIST(bParam0, "voldestroy"))
				{
					if (DECOR_GET_BOOL(bParam0, "voldestroy"))
					{
						DESTROY_OBJECT(bVar0);
					}
				}
				else
				{
					DESTROY_OBJECT(bVar0);
				}
			}
		}
		DESTROY_OBJECT(bParam0);
	}
	return;
}

float Function_34(bool bParam0, vector3 vParam1) //Position: 0x1BBF / 7103
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_35(bParam0);
		vVar0 = { StackVal, StackVal, Function_35(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

vector3 Function_35(bool bParam0) //Position: 0x1C39 / 7225
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		GET_POSITION(bParam0, &vVar0);
		return StackVal, StackVal, vVar0;
	}
	LOG_ERROR("Attempting to get location of INVALID actor. Returning << 0,0,0 >>.");
	return StackVal, StackVal, vVar0;
}

void Function_36(bool bParam0, bool bParam1) //Position: 0x1CA3 / 7331
{
	bool bVar0;
	bool bVar1;
	
	if (IS_ACTOR_RIDING(bParam0))
	{
		bVar0 = GET_MOUNT(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			RESET_ACTOR_GAITS(bVar0, 1);
		}
	}
	else if (IS_ACTOR_INSIDE_VEHICLE(bParam0))
	{
		bVar1 = GET_VEHICLE(bParam0);
		if (IS_ACTOR_VALID(bVar1))
		{
			STOP_VEHICLE(bVar1);
		}
	}
	else if (!bParam1 || Function_37(bParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(bParam0, 1);
	}
	return;
}

float Function_37(bool bParam0, bool bParam1) //Position: 0x1D00 / 7424
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

void Function_38(float fParam0) //Position: 0x1D1F / 7455
{
	Function_170(fParam0, 0.0f);
	return;
}

var Function_39(bool bParam0, bool bParam1, vector3 vParam2, vector3 vParam5, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, var uParam13, var uParam14, float fParam15, float fParam16, var uParam17) //Position: 0x1D2B / 7467
{
	vector3 vVar0;
	bool bVar3;
	char* cVar4[32];
	bool bVar12;
	bool bVar13;
	
	vVar0 = { uParam9, 2.0f, uParam9 };
	vParam2.f_4 = (vParam2.y + 0.75f);
	bVar3 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(bParam0, bParam1, vParam2, vParam5, vVar0, uParam11, uParam8, uParam10, uParam13, 0, uParam14, uParam17);
	if (IS_OBJECT_VALID(bVar3))
	{
		strcpy(&cVar4, bParam1, 32);
		if (IS_STRING_VALID(bParam1))
		{
			stradd(&cVar4, "restrict", 32);
		}
		bVar12 = CREATE_VOLUME_IN_LAYOUT(bParam0, &cVar4, 2, vParam2, vParam5, 5.0f, 5.0f, 5.0f);
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar12);
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar12);
		if (iParam12 != 4294967295)
		{
			bVar13 = ADD_BLIP_FOR_OBJECT(bVar3, iParam12, 0.0f, 2, 0);
		}
		if (fParam15 < -1.0f)
		{
			SET_BLIP_MAX_DISTANCE(bVar13, fParam15);
		}
		if (fParam16 < -1.0f)
		{
			SET_BLIP_MIN_DISTANCE(bVar13, fParam16);
		}
		DECOR_SET_OBJECT(bVar3, "volrestrict", bVar12);
	}
	return bVar3;
}

void Function_40(vector3 vParam0, var uParam3, var uParam4, var uParam5) //Position: 0x1DF6 / 7670
{
	*(&Global_28185 + 24) = { StackVal, StackVal, vParam0 };
	*(&Global_28185 + 36) = { StackVal, StackVal, vParam0 };
	Global_28185 = 2;
	Global_28185.f_4 = 0;
	Global_28185.f_60 = uParam3;
	Global_28185.f_16 = uParam4;
	if (uParam4 & 16 >= 0)
	{
		Global_28185.f_16 |= 131072;
	}
	if (uParam4 & 32 >= 0)
	{
		Global_28185.f_16 |= 262144;
	}
	if (!IS_OBJECTSET_VALID(Global_28185.f_12))
	{
		Global_28185.f_12 = CREATE_OBJECTSET_IN_LAYOUT(StackVal, "MissionGPSPath", 36, 1);
	}
	if (GET_OBJECTSET_SIZE(Global_28185.f_12) >= 0)
	{
		Function_41(Global_28185.f_12);
		CLEAN_OBJECTSET(Global_28185.f_12);
	}
	Global_28185.f_92 = 0;
	Global_28210.f_96 = uParam5;
}

void Function_41(int iParam0) //Position: 0x1EB2 / 7858
{
	bool bVar0;
	
	if (!IS_OBJECTSET_VALID(iParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(iParam0) >= 0)
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, iParam0);
		REMOVE_OBJECT_FROM_OBJECTSET(bVar0, iParam0);
		CLEAN_OBJECTSET(iParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			RELEASE_CURVE(GET_CURVE_FROM_OBJECT(bVar0));
		}
	}
	return;
}

void Function_42(int iParam0, bool bParam1) //Position: 0x1EF2 / 7922
{
	if (iParam0 == Global_30723[0])
	{
		*bParam1 = { -872.522f, 196.477f, 944.059f };
	}
	return;
}

void Function_43(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x1F16 / 7958
{
	struct<4> Var0;
	int iVar4;
	
	if (bParam4)
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_11(Global_6269) };
		}
		PRINT_OBJECTIVE_B(iParam0, iParam1, iParam7, iParam3, iParam2, &Var0, 0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_OBJECTIVE_B(iParam0, iParam1, iParam7, iParam3, iParam2, iVar4, iParam5, iParam6);
	}
}

void Function_44(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x1F9B / 8091
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_11(Global_6269) };
		}
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, uVar4, iParam6);
	}
}

void Function_45(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x2016 / 8214
{
	bParam1 = bParam1;
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0) && Function_98(bParam0, Global_34573) >= IntToFloat(iParam5))
		{
			if (!IS_ACTOR_VALID(bParam1))
			{
				bParam1 = "";
			}
			CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
			if (bParam6)
			{
				if (IS_ACTOR_HOGTIED(bParam0))
				{
					if (!SAY_SINGLE_LINE_STRING_BEAT(bParam0, bParam2, bParam1, 1, 1, iParam4, iParam7, 0, 0, 1))
					{
						bParam3 = bParam3;
					}
				}
				else if (!SAY_SINGLE_LINE_STRING_BEAT(bParam0, bParam2, bParam1, 1, 1, iParam4, iParam7, 0, 1, 1))
				{
					bParam3 = bParam3;
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING(bParam0, bParam2, true, true, iParam4, 0, false, true);
			}
		}
	}
}

void Function_46() //Position: 0x20A6 / 8358
{
	int iVar0;
	
	bLocal_38 = true;
	if (Global_29004 == 0)
	{
		iVar0 = Function_48(4);
		if (iVar0 == 0)
		{
			iLocal_37 = "TC_FTR_SONG_01";
		}
		else if (iVar0 == 1)
		{
			iLocal_37 = "TC_FTR_SONG_02";
		}
		else if (iVar0 == 2)
		{
			iLocal_37 = "TC_FTR_SONG_03";
		}
		else
		{
			iLocal_37 = "TC_FTR_SONG_04";
		}
	}
	else if (Global_29004 == 2)
	{
		iVar0 = Function_48(2);
		if (iVar0 == 0)
		{
			iLocal_37 = "TC_NRT_SONG_01";
		}
		else if (iVar0 == 1)
		{
			iLocal_37 = "TC_NRT_SONG_02";
		}
	}
	else if (Global_29004 == 1)
	{
		if (Function_47())
		{
			iLocal_37 = "TC_MEX_SONG_01";
		}
		else
		{
			iLocal_37 = "TC_MEX_SONG_02";
		}
	}
	AUDIO_MUSIC_FORCE_TRACK(iLocal_37, "SUSPENSE_DARK", 0.0f, 500, 4294967295, 3212836864, 0);
	return;
}

bool Function_47() //Position: 0x21C1 / 8641
{
	return (RAND_INT_RANGE(0, 1999) / 1000) != 0;
}

int Function_48(bool bParam0) //Position: 0x21D4 / 8660
{
	bParam0 = (bParam0 * 1000 - 1);
	return (RAND_INT_RANGE(0, bParam0) / 1000);
}

bool Function_49(var uParam0, var uParam1, var uParam2, bool bParam3, float fParam4, var uParam5, bool bParam6, var uParam7, var uParam8, float fParam9, bool bParam10, int iParam11, float fParam12, float fParam13, var uParam14, int iParam15) //Position: 0x21ED / 8685
{
	float fVar0;
	
	if (!IS_ACTOR_VALID(*uParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(*uParam1))
	{
		return 0;
	}
	if (fParam13 == 0.0f && !*uParam8)
	{
		if (fParam13 > fParam9)
		{
			LOG_ERROR("firstAudioDist is too low to ever work");
		}
		else if (Function_98(*uParam0, *uParam1) > fParam13)
		{
			*uParam8 = 1;
			Function_45(*uParam0, Global_34573, uParam14, uParam14, 5, 60, 1, iParam15);
			Function_170(uParam7, 0.0f);
		}
	}
	switch (*uParam2)
	{
		case 0x00000000:
			SET_ACTOR_UPDATE_PRIORITY(*uParam0, false);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(*uParam0, 0);
			fLocal_20 = Function_98(*uParam0, Global_34573);
			AI_GOAL_LOOK_AT_ACTOR_NEW(*uParam0, *uParam1, -1.0f, 1);
			bParam6 = CREATE_POINT_IN_LAYOUT(bParam3, Function_169(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
			ATTACH_OBJECTS(bParam6, *uParam1, Function_169(), 0.0f, 0.5f, fParam12, 0.0f, 0.0f, 0.0f, 4294967295);
			TASK_FOLLOW_OBJECT_AT_DISTANCE(*uParam0, bParam6, 1.0f, iParam11);
			TASK_PRIORITY_SET(*uParam0, 1);
			*uParam2 = 1;
			break;
		
		case 0x00000001:
			if (IS_ACTOR_ON_FOOT(Global_34573))
			{
				fVar0 = (fParam9 - 3.0f);
			}
			else
			{
				fVar0 = fParam9;
			}
			if ((Function_98(*uParam0, *uParam1) - fLocal_20) < fParam4)
			{
				return 0;
			}
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), *uParam0, 1.0f, fVar0, 1, 1, 0))
			{
				if (bParam10)
				{
					TASK_CLEAR(*uParam0);
					TASK_FACE_ACTOR(*uParam0, *uParam1, 1, 3212836864);
				}
				else
				{
					AI_GOAL_LOOK_CLEAR(*uParam0);
				}
				*uParam5 = 1;
				return 1;
			}
			if (!Function_6(*uParam0, 0))
			{
				return 0;
			}
			break;
	}
	return 1;
}

int Function_50(bool bParam0, int iParam1, int iParam2, int iParam3) //Position: 0x237B / 9083
{
	int iVar0;
	bool bVar1;
	
	if (iParam1 == 5)
	{
		LOG_ERROR("Please Use RELEASE_ACTOR_TO_ACTORROAM_GRINGO");
		LOG_ERROR("Switching to ACTORROAM_BEHAVIOR_DEFAULT for this actor");
		iParam1 = 0;
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		if (!IS_ACTOR_VEHICLE(bParam0))
		{
			SQUAD_LEAVE(bParam0);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < (GET_NUM_DRAFT_POSITIONS(bParam0) - 1))
			{
				bVar1 = GET_DRAFT_ACTOR(iVar0, bParam0);
				if (IS_ACTOR_VALID(bVar1))
				{
					Function_51(bVar1, 0, 0, 0, 1);
				}
				iVar0++;
			}
		}
		Function_51(bParam0, iParam1, iParam2, iParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_51(bool bParam0, int iParam1, var uParam2, var uParam3, int iParam4) //Position: 0x245B / 9307
{
	char* cVar0[32];
	
	Function_58();
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (IS_ACTOR_DEAD(bParam0))
	{
		return 1;
	}
	if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516))
	{
		strcpy(&cVar0, GET_ACTOR_NAME(bParam0), 32);
		stradd(&cVar0, " already roaming. Cannot add again.", 32);
		LOG_ERROR(&cVar0);
		return 1;
	}
	if (Function_57(bParam0) == 1)
	{
		LOG_ERROR("ACTORROAM - Actor cannot be added to ActorRoam multiple times");
		return 0;
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam0));
	}
	strcpy(&cVar0, GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(bParam0)), 32);
	if (GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(bParam0), Global_6290))
	{
		PRINTSTRING("Added ");
		PRINTSTRING(&cVar0);
		PRINTSTRING(" to the roaming actor layout.");
		PRINTNL();
	}
	else
	{
		strcpy(&cVar0, GET_OBJECT_NAME(bParam0), 32);
		if (!IS_STRING_VALID(&cVar0))
		{
			strcpy(&cVar0, "(NAMELESS)", 32);
		}
		PRINTSTRING("Could not add ");
		PRINTSTRING(&cVar0);
		PRINTSTRING(" to the roaming actor layout.");
		PRINTNL();
		LOG_ERROR("Could not add actor to actorroam. Report the offending script");
	}
	if (!IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516))
	{
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516);
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam0));
	}
	if (iParam4 == 1)
	{
		AI_SET_NAV_MATERIAL_USAGE(bParam0, 64, 0);
		AI_SET_NAV_MATERIAL_USAGE(bParam0, 32, 0);
	}
	Function_56(bParam0, 0);
	Function_55(bParam0, iParam1);
	Function_54(bParam0, uParam2);
	Function_53(bParam0, uParam3);
	if (Function_52(bParam0) != 5)
	{
		SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bParam0, 0);
		SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(bParam0, 1);
	}
	else
	{
		AI_SET_ENABLE_DEAD_BODY_REACTIONS(bParam0, 0);
	}
	return 1;
}

int Function_52(bool bParam0) //Position: 0x26A9 / 9897
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior");
}

void Function_53(bool bParam0, bool bParam1) //Position: 0x26CC / 9932
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_54(bool bParam0, bool bParam1) //Position: 0x26EF / 9967
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_target", bParam1);
	return;
}

void Function_55(bool bParam0, bool bParam1) //Position: 0x2713 / 10003
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_56(bool bParam0, bool bParam1) //Position: 0x2739 / 10041
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_state", bParam1);
	return;
}

int Function_57(bool bParam0) //Position: 0x275C / 10076
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
}

void Function_58() //Position: 0x277A / 10106
{
	if (!IS_LAYOUTREF_VALID(Global_6290))
	{
		Global_6290 = CREATE_LAYOUT("RoamingLayout");
	}
	if (!IS_OBJECTSET_VALID(Global_16516))
	{
		Global_16516 = CREATE_OBJECTSET_IN_LAYOUT("gRoamObjects", Global_6290, 4294967295, 1);
	}
	return;
}

bool Function_59(int iParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x27C4 / 10180
{
	if (StackVal & 64 == 64)
	{
		if (!*uParam2)
		{
			if (IS_ACTOR_VALID(bParam1))
			{
				if (Function_98(Global_34573, bParam1) > 15.0f)
				{
					*uParam2 = 1;
				}
			}
		}
		if (Global_3394 && !*uParam2)
		{
			return 0;
		}
		if ((Global_3367 && Global_6281 == GET_THIS_SCRIPT_ID()) && !*uParam2)
		{
			return 0;
		}
		if (Function_62() && !*uParam2)
		{
			return 0;
		}
		if (Function_61(iParam0) && !*uParam2)
		{
			return 0;
		}
		if (Global_3387 && !bParam4)
		{
			return 0;
		}
		if (Global_3385 && !*uParam2)
		{
			return 0;
		}
		if (Global_3410)
		{
			return 0;
		}
		if (Global_3384)
		{
			return 0;
		}
		if (Global_3403 && uParam7)
		{
			*uParam3 = 1;
			return 0;
		}
		if (Global_3404 && uParam7)
		{
			*uParam3 = 1;
			return 0;
		}
		if (Global_3392 && !*uParam2)
		{
			return 0;
		}
		if (Global_3393 && !*uParam2)
		{
			return 0;
		}
		if (bParam6)
		{
			if (Global_63096 && !*uParam2)
			{
				return 0;
			}
		}
		if (IS_ACTOR_ON_TRAIN(Global_34573, 0))
		{
			return 0;
		}
	}
	if (StackVal & 2048 != 2048)
	{
		if (!Function_60(iParam0, uParam5))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_60(int iParam0, int iParam1) //Position: 0x2901 / 10497
{
	iParam0 = iParam0;
	if (Global_3382 != 1 && iParam1)
	{
		return 0;
	}
	if (Global_3369 == 1)
	{
		return 0;
	}
	return 1;
}

int Function_61(int iParam0) //Position: 0x2922 / 10530
{
	float fVar0;
	
	if (StackVal & 64 == 64)
	{
		fVar0 = GET_LAST_HIT_TIME(Global_34573);
		if (fVar0 < 0.0f)
		{
			if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(Global_34573)) > 20.0f)
			{
				return 1;
			}
		}
	}
	return 0;
}

int Function_62() //Position: 0x2960 / 10592
{
	int iVar0;
	int iVar1;
	
	if (Global_3386)
	{
		iVar1 = 9;
	}
	else
	{
		iVar1 = 22;
	}
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (DECOR_CHECK_EXIST(StackVal, "script"))
			{
				if (IS_SCRIPT_VALID(DECOR_GET_INT(StackVal, "script")))
				{
					if (StackVal != DECOR_GET_INT(GET_THIS_SCRIPT_ID(), "script"))
					{
						if (Function_63(StackVal, Global_34573) > IntToFloat(iVar1))
						{
							return 1;
						}
					}
				}
			}
			if (Function_63(StackVal, Global_34573) > IntToFloat(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

float Function_63(bool bParam0, bool bParam1) //Position: 0x2A1B / 10779
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_35(bParam0);
			vVar0 = { StackVal, StackVal, Function_35(bParam0) };
			Function_64(bParam1);
			vVar3 = { StackVal, StackVal, Function_64(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

vector3 Function_64(bool bParam0) //Position: 0x2ABB / 10939
{
	vector3 vVar0;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		GET_OBJECT_POSITION(bParam0, &vVar0);
		return StackVal, StackVal, vVar0;
	}
	LOG_ERROR("Attempting to get location of INVALID object. Returning << 0,0,0 >>.");
	return StackVal, StackVal, vVar0;
}

void Function_65(vector3 vParam0, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7, bool bParam8) //Position: 0x2B27 / 11047
{
	int iVar0;
	
	iVar0 = 0;
	if (!*uParam3)
	{
		iVar0 = 1;
	}
	if (IS_ACTOR_VALID(bParam5))
	{
		if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam5, 1.0f, iParam7, 1, 1, 0))
		{
			if (iParam6 != 0)
			{
				Global_25265 = (GET_CURRENT_GAME_TIME() + IntToFloat(iParam6));
			}
			*uParam3 = 1;
		}
	}
	else if (!Function_92(StackVal, StackVal, vParam0))
	{
		if (CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), vParam0, 1.0f, iParam7, 1, 1, 0))
		{
			if (iParam6 != 0)
			{
				Global_25265 = (GET_CURRENT_GAME_TIME() + IntToFloat(iParam6));
			}
			*uParam3 = 1;
		}
	}
	if (*uParam3 && iVar0)
	{
		if (StackVal & 64 == 64)
		{
			Function_91(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_90(0);
		}
		if (bParam8)
		{
			Function_88(0, GET_THIS_SCRIPT_ID());
			Global_3373 = GET_THIS_SCRIPT_ID();
			Function_86(iParam4);
			Global_3401 = 1;
		}
		Function_84(iParam4);
		if (Function_83(StackVal, 32768))
		{
			Function_80(1);
		}
		Global_16876[iParam46].f_12++;
		Function_66(408, 1, 0, 0);
	}
}

int Function_66(int iParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x2C2E / 11310
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
	Function_79(iParam0, TO_FLOAT(bParam1), 1);
	Function_78(iParam0);
	if (uParam2 && bParam1 == 0)
	{
		Function_67(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, uParam3);
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

void Function_67(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x2E4E / 11854
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_77(390))), 32);
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
					bVar19 = (Function_76(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_76(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_74(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_71(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_69(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_68(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_169(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 1, 0, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 0, 0, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_68(int iParam0) //Position: 0x347B / 13435
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_69(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x348C / 13452
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_70("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_70("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_70("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_70(char* cParam0, bool bParam1) //Position: 0x3581 / 13697
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_71(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x359A / 13722
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_73(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_72(Function_73(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_72(int iParam0, int iParam1) //Position: 0x35FF / 13823
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_73(int iParam0, int iParam1) //Position: 0x3611 / 13841
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_74(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x3623 / 13859
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
	if (((Function_75(iParam0) != 19 || Function_75(iParam0) != 17) || Function_75(iParam0) != 10) || Function_75(iParam0) != 9)
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

int Function_75(int iParam0) //Position: 0x3753 / 14163
{
	return Global_35278[iParam020].f_48;
}

float Function_76(int iParam0) //Position: 0x3762 / 14178
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_77(int iParam0) //Position: 0x379B / 14235
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_78(int iParam0) //Position: 0x37D8 / 14296
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

int Function_79(int iParam0, float fParam1, bool bParam2) //Position: 0x3972 / 14706
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

void Function_80(bool bParam0) //Position: 0x3BB6 / 15286
{
	if (bParam0)
	{
		Function_82(0x10000000);
	}
	else
	{
		Function_81(0x10000000);
	}
	Global_26316.f_172 = 0;
	return;
}

void Function_81(int iParam0) //Position: 0x3BDA / 15322
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_82(int iParam0) //Position: 0x3BF7 / 15351
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

bool Function_83(var uParam0, int iParam1) //Position: 0x3C0A / 15370
{
	return (uParam0 && iParam1) == 0;
}

void Function_84(int iParam0) //Position: 0x3C17 / 15383
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (!Function_13(StackVal, 524288))
	{
		if (Global_16876[iParam06].f_16 < 0 && Global_16876[iParam06].f_16 > 2)
		{
			iVar0 = 10;
		}
		else if (Global_16876[iParam06].f_16 <= 2 && Global_16876[iParam06].f_16 > 4)
		{
			iVar0 = 16;
		}
		else if (Global_16876[iParam06].f_16 > 4)
		{
			iVar0 = 24;
		}
		if (iVar0 >= 0)
		{
			bVar1 = Function_85(iVar0 * 60);
			ADD_TIME(&Global_17483[iParam075] + 264, 0, 0, bVar1, 0);
			Global_16876[iParam06] = Global_17483[iParam075].f_264;
		}
	}
	return;
}

int Function_85(int iParam0) //Position: 0x3CBB / 15547
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_86(int iParam0) //Position: 0x3CD1 / 15569
{
	struct<77> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Global_30842[16])
	{
		PRINTNL();
		PRINTSTRING("SAVE_BEAT_STATE: ");
		PRINTSTRING(GET_ASSET_NAME(Global_17483[iParam075].f_96, 4));
		PRINTNL();
		PRINTSTRING("curIDX: ");
		PRINTINT(Var0.f_76);
		PRINTNL();
	}
	Function_87(&Var0 + 80[Var0.f_763], &(Global_16876[iParam06]), iParam0);
	if (Var0.f_76 == 2)
	{
		Var0.f_76 = 0;
	}
	else
	{
		Var0.f_76++;
	}
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

void Function_87(var uParam0, var uParam1, int iParam2) //Position: 0x3D6F / 15727
{
	uParam0->f_4 = iParam2;
	*uParam0 = uParam1->f_12;
	uParam0->f_8 = 1;
	return;
}

void Function_88(int iParam0, int iParam1) //Position: 0x3D87 / 15751
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= Global_25267)
	{
		iVar1 = 1;
		Global_25267[iVar058].f_84 = 0;
		if (Global_25267[iVar058].f_44 == iParam1)
		{
			iVar1 = 0;
		}
		if ((Global_25267[iVar058] != 128 || Global_25267[iVar058] != 64) && iParam0 != 0)
		{
			iVar1 = 0;
		}
		if (IS_SCRIPT_VALID(Global_25267[iVar058].f_44) && iVar1 != 1)
		{
			TERMINATE_SCRIPT(Global_25267[iVar058].f_44);
			Function_89(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_89(int iParam0) //Position: 0x3E09 / 15881
{
	iParam0->f_92 = 0;
	iParam0->f_4 = 0;
	iParam0->f_12 = 4294967295;
	iParam0->f_16 = "";
	*(iParam0 + 20) = { 0.0f, 0.0f, 0.0f };
	*(iParam0 + 32) = { 0.0f, 0.0f, 0.0f };
	iParam0->f_44 = "";
	iParam0->f_56 = "";
	iParam0->f_48 = 4294967295;
	iParam0->f_52 = "";
	iParam0->f_88 = 0.0f;
	iParam0->f_76 = 0;
	return;
}

void Function_90(int iParam0) //Position: 0x3E57 / 15959
{
	Global_12976.f_76 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 76, 0, 0, (iParam0 + Function_85(900)), 0);
	return;
}

void Function_91(int iParam0) //Position: 0x3E79 / 15993
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, (iParam0 + Function_85(200)), 0);
	return;
}

bool Function_92(vector3 vParam0) //Position: 0x3E9A / 16026
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_93() //Position: 0x3EB2 / 16050
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_94(var uParam0, bool bParam1, bool bParam2) //Position: 0x3EBB / 16059
{
	if (bParam1)
	{
		HUD_CLEAR_HELP_QUEUE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
		Function_43(uParam0, 0x40f00000, 1, 2, 0, 0, 0, 0);
		if (bParam2)
		{
			Function_95();
		}
	}
	return;
}

void Function_95() //Position: 0x3EE4 / 16100
{
	switch (Global_29004)
	{
		case 0x00000000:
			AUDIO_MUSIC_ONE_SHOT("FTR_BEAT_FAIL_SONG_01", 0, 0, 0, 0, 0);
			break;
		
		case 0x00000001:
			AUDIO_MUSIC_ONE_SHOT("MEX_BEAT_FAIL_SONG_01", 0, 0, 0, 0, 0);
			break;
		
		case 0x00000002:
			AUDIO_MUSIC_ONE_SHOT("NRT_BEAT_FAIL_SONG_01", 0, 0, 0, 0, 0);
			break;
	}
	return;
}

float Function_96(bool bParam0) //Position: 0x3F6D / 16237
{
	var uVar0;
	float fVar1;
	
	if (!bParam0)
	{
		Function_97(&uVar0, &fVar1);
		if (fVar1 < 60.0f)
		{
			return (fVar1 + 20.0f);
		}
		return (fVar1 + 10.0f);
	}
	return (190.0f + 20.0f);
}

void Function_97(float fParam0, int iParam1) //Position: 0x3FA8 / 16296
{
	vector3 vVar0;
	
	if (Global_3386 && !Global_3403)
	{
		*fParam0 = 65.0f;
		*iParam1 = 95.0f;
	}
	else if ((!IS_ACTOR_RIDING(GET_PLAYER_ACTOR(0)) && !IS_ACTOR_RIDING_VEHICLE(GET_PLAYER_ACTOR(0))) && !Global_3403)
	{
		*fParam0 = 115.0f;
		*iParam1 = 170.0f;
	}
	else
	{
		GET_ACTOR_VELOCITY(GET_PLAYER_ACTOR(0), &vVar0);
		if (VMAG(vVar0) > 5.0f)
		{
			*fParam0 = 130.0f;
			*iParam1 = 190.0f;
		}
		else
		{
			*fParam0 = 130.0f;
			*iParam1 = 190.0f;
		}
	}
	return;
}

float Function_98(bool bParam0, bool bParam1) //Position: 0x4034 / 16436
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(bParam0, &vVar0);
	GET_POSITION(bParam1, &vVar3);
	return VDIST(vVar0, vVar3);
}

void Function_99(bool bParam0) //Position: 0x4125 / 16677
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (DECOR_CHECK_EXIST(bParam0, "nnostickup"))
		{
			DECOR_REMOVE(bParam0, "nnostickup");
		}
		AI_SET_ENABLE_STICKUP_OVERRIDE(bParam0, 1);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam0, 1);
		SET_ACTOR_CUTSCENE_MODE(bParam0, 0);
		TASK_PRIORITY_SET(bParam0, 2);
	}
	return;
}

bool Function_100(bool bParam0, var uParam1, var uParam2, int iParam3, bool bParam4, float fParam5) //Position: 0x4171 / 16753
{
	float fVar0;
	
	if (IS_ACTOR_VALID(bParam0) && !bParam4)
	{
		if (IS_ACTOR_ON_FOOT(bParam0))
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(bParam0, fParam5);
		}
		else
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(bParam0, (fParam5 + 3.0f));
		}
	}
	if (IS_ACTOR_VALID(bParam0) && !bParam4)
	{
		fVar0 = Function_98(bParam0, Global_34573);
		if (!Function_13(iParam3, 8))
		{
			if (GET_LAST_ATTACKER(bParam0) == Global_34573)
			{
				*uParam1 = 8;
				Function_101(bParam0);
				return 1;
			}
		}
		if (!Function_13(iParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(bParam0, 1.0f))
			{
				*uParam1 = 2;
				Function_101(bParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(bParam0, 1.0f, 1.0f))
			{
				*uParam1 = 2;
				Function_101(bParam0);
				return 1;
			}
		}
		if (!Function_13(iParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(bParam0) || (((GET_ACTOR_UNDER_RETICLE(Global_34573, 0) != bParam0 && IS_PLAYER_WEAPON_ZOOMED(Global_34573)) && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(Global_34573) != bParam0 && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f))
			{
				if (*uParam2 > 0.0f)
				{
					*uParam1 = 4;
					Function_101(bParam0);
					return 1;
				}
				if (*uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - *uParam2) < 1.3f)
					{
						*uParam1 = 4;
						Function_101(bParam0);
						return 1;
					}
				}
				*uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_13(iParam3, 1))
		{
			if (Global_3403 || Global_3404)
			{
				*uParam1 = 1;
				Function_101(bParam0);
				return 1;
			}
		}
		if (!Function_13(iParam3, 16))
		{
			if (UNK_0x7F454A92(bParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(bParam0)) > 2.0f && fVar0 > 18.0f)
				{
					*uParam1 = 16;
					Function_101(bParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_101(bool bParam0) //Position: 0x4308 / 17160
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(bParam0, 1);
	UNK_0x99AFD2D1(bParam0, 0, 0);
	Function_102(bParam0);
	MEMORY_CONSIDER_AS(Global_34573, bParam0, 2);
	MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
	AI_GOAL_LOOK_CLEAR(bParam0);
	return;
}

void Function_102(bool bParam0) //Position: 0x433C / 17212
{
	SAY_SINGLE_LINE_CONTEXT(bParam0, 60, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

void Function_103(int iParam0, int iParam1) //Position: 0x4353 / 17235
{
	*iParam0 = (*iParam0 || iParam1);
	return;
}

void Function_104(var uParam0, var uParam1, var uParam2, float fParam3, vector3 vParam4) //Position: 0x4362 / 17250
{
	var uVar0[5];
	int iVar6;
	
	if (*uParam0 != 4294967295)
	{
		*uParam0 = CLEAR_AREA_OF_TREE_TYPE(vParam4, (fParam3 + 2.0f), "");
	}
	if (*uParam1 != 4294967295)
	{
		*uParam1 = CLEAR_AREA_OF_BREAKABLE_TREES(vParam4, (fParam3 + 2.0f));
	}
	if (*uParam2 != 4294967295)
	{
		*uParam2 = CLEAR_AREA_OF_GRASS(vParam4, fParam3);
	}
	if (IS_LAYOUTREF_VALID(Global_30616))
	{
		if (Function_105(StackVal, StackVal, Global_30616, "player_herb", &uVar0, 20.0f, 5, vParam4) >= 0)
		{
			iVar6 = 0;
			while (iVar6 <= 5)
			{
				if (IS_OBJECT_VALID(uVar0[iVar6]))
				{
					DESTROY_OBJECT(uVar0[iVar6]);
				}
				iVar6++;
			}
		}
	}
}

int Function_105(bool bParam0, bool bParam1, var uParam2, float fParam3, int iParam4, vector3 vParam5) //Position: 0x4403 / 17411
{
	int iVar0;
	vector3 vVar1;
	bool bVar4;
	bool bVar5;
	
	iVar0 = 0;
	iParam4 = iParam4;
	if (IS_LAYOUTREF_VALID(bParam0))
	{
		bVar5 = CREATE_OBJECT_ITERATOR(bParam0);
		ITERATE_ON_OBJECT_TYPE(bVar5, 12);
		ITERATE_ON_PARTIAL_NAME(bVar5, bParam1);
		bVar4 = START_OBJECT_ITERATOR(bVar5);
		while (IS_OBJECT_VALID(bVar4))
		{
			if (IS_OBJECT_VALID(bVar4))
			{
				GET_OBJECT_POSITION(bVar4, &vVar1);
				if (VDIST(vParam5, vVar1) > fParam3)
				{
					(*uParam2)[iVar0] = bVar4;
					iVar0++;
					if (iVar0 > iParam4)
					{
						DESTROY_ITERATOR(bVar5);
						return iVar0;
					}
				}
			}
			bVar4 = OBJECT_ITERATOR_NEXT(bVar5);
		}
		DESTROY_ITERATOR(bVar5);
		return iVar0;
	}
	return iVar0;
}

void Function_106(bool bParam0) //Position: 0x4497 / 17559
{
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam0, 0);
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bParam0, 0);
	MEMORY_ATTACK_ON_SIGHT(bParam0, 0);
	SET_ACTOR_CAN_PLAY_GESTURES(bParam0, false);
	AI_SET_ALLOW_ATTACK_HOGTIED_ACTORS(bParam0, 1);
	return;
}

bool Function_107(vector3 vParam0) //Position: 0x44C1 / 17601
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
			{
				if (StackVal || StackVal != 3 != 4)
				{
					if (!Function_108(iVar0))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_108(int iParam0) //Position: 0x4523 / 17699
{
	int iVar0;
	
	if (StackVal || StackVal != 2 != 1)
	{
		return 0;
	}
	if ((iParam0 != Global_30707[2] || iParam0 != Global_30707[1]) || iParam0 != Global_30679[1])
	{
		return 0;
	}
	iVar0 = Global_29008[iParam0];
	return (((Function_13(iVar0, 0x1000000) || Function_13(iVar0, 0x2000000)) || Function_13(iVar0, 0x4000000)) || Function_109(iParam0));
}

var Function_109(int iParam0) //Position: 0x4596 / 17814
{
	var uVar0;
	bool bVar1;
	
	uVar0 = Global_29008[iParam0];
	bVar1 = uVar0 & 268435456 != false;
	return bVar1;
}

var Function_110(vector3 vParam0, float fParam3, int iParam4) //Position: 0x45B3 / 17843
{
	int iVar0;
	vector3 vVar1;
	bool bVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 4294967295;
	bVar4 = 99999.0f;
	iVar5 = 0;
	if (Function_92(StackVal, StackVal, vParam0))
	{
		return 4294967295;
	}
	iVar6 = 0;
	while (iVar6 < 145)
	{
		if (((IS_VOLUME_VALID(StackVal) && Function_113(iVar6) == 0) && iVar6 == Global_30679[1]) && iVar6 == Global_30707[1])
		{
			iVar5 = 0;
			if (iParam4 == 0)
			{
				iVar5 = 1;
			}
			else if (Function_112(Global_29006) == Global_30621[Global_29004])
			{
				iVar5 = 1;
			}
			if (iVar5 == 1)
			{
				GET_VOLUME_CENTER(StackVal, &vVar1);
				if (VDIST(vParam0, vVar1) > bVar4 && VDIST(vParam0, vVar1) < fParam3)
				{
					iVar0 = iVar6;
					bVar4 = VDIST(vParam0, vVar1);
				}
			}
		}
		iVar6++;
	}
	if (Function_111(iVar0))
	{
	}
	else
	{
		iVar0 = 4294967295;
	}
	return iVar0;
}

bool Function_111(int iParam0) //Position: 0x468C / 18060
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_112(int iParam0) //Position: 0x46A2 / 18082
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_111(iParam0))
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

int Function_113(int iParam0) //Position: 0x46FA / 18170
{
	if (iParam0 == Global_30640[0])
	{
		return 1;
	}
	if (iParam0 == Global_30640[2])
	{
		return 2;
	}
	if (iParam0 == Global_30640[1])
	{
		return 3;
	}
	if (iParam0 == Global_30658[1])
	{
		return 4;
	}
	if (iParam0 == Global_30658[3])
	{
		return 5;
	}
	if (iParam0 == Global_30668[0])
	{
		return 8;
	}
	if (iParam0 == Global_30668[1])
	{
		return 9;
	}
	if (iParam0 == Global_30679[0])
	{
		return 11;
	}
	if (iParam0 == Global_30685[0])
	{
		return 12;
	}
	if (iParam0 == Global_30685[1])
	{
		return 13;
	}
	if (iParam0 == Global_30685[2])
	{
		return 14;
	}
	if (iParam0 == Global_30693[0])
	{
		return 15;
	}
	if (iParam0 == Global_30693[1])
	{
		return 16;
	}
	if (iParam0 == Global_30693[2])
	{
		return 17;
	}
	if (iParam0 == Global_30707[2])
	{
		return 25;
	}
	if (iParam0 == Global_30707[3])
	{
		return 18;
	}
	if (iParam0 == Global_30707[0])
	{
		return 19;
	}
	if (iParam0 == Global_30717[0])
	{
		return 21;
	}
	if (iParam0 == Global_30723[2])
	{
		return 22;
	}
	if (iParam0 == Global_30723[1])
	{
		return 23;
	}
	if (iParam0 == Global_30723[0])
	{
		return 24;
	}
	if (iParam0 == Global_30679[1])
	{
		return 26;
	}
	if (iParam0 == Global_30707[1])
	{
		return 27;
	}
	return 0;
}

float Function_114() //Position: 0x4880 / 18560
{
	float fVar0;
	int iVar1;
	
	if (Global_3371)
	{
		return 0.0f;
	}
	Function_97(&fVar0, &iVar1);
	if (fVar0 >= 50.0f)
	{
		return (fVar0 - 10.0f);
	}
	return (fVar0 - 20.0f);
}

bool Function_115(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x48B1 / 18609
{
	struct<8> Var0;
	bool bVar8;
	bool bVar9;
	
	if (Global_3371 && iParam0->f_32)
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152(GET_SCRIPT_NAME()) };
		bVar8 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Global_26150, &Var0, 4.203895E-45f, Function_150(*(iParam0 + 8), 0.0f, Global_34573, *(iParam0 + 8)), 0.0f, iParam0->f_52, 20.0f, iParam0->f_52);
		DECOR_SET_INT(bVar8, "script", GET_THIS_SCRIPT_ID());
		if (iParam0->f_56 != 4294967295)
		{
			DECOR_SET_INT(StackVal, bVar8, "category");
			Function_148(&bVar8, iParam0->f_32);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
		*(iParam0 + 8) = { StackVal, StackVal, Global_34574 };
		return 1;
	}
	*uParam3 = 0;
	if (!Function_116(iParam0))
	{
		if (iParam0->f_32 == 1)
		{
			if (*uParam2 == 0)
			{
				Function_10("Still scanning for the proper terrain to run this event.  Move the player around to find a good spawn location.", -1.0f, 1, 2, 1, 0);
			}
		}
		else if (*uParam2 >= 20)
		{
			*uParam3 = 1;
			Global_26153++;
		}
		*uParam2++;
		*uParam1 = 1000;
		*(iParam0 + 8) = { 0.0f, 0.0f, 0.0f };
		return 0;
	}
	if (iParam0->f_32)
	{
		HUD_CLEAR_SMALL_TEXT_QUEUE();
		Global_3399 = 0;
		Function_10("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 5.0f, 1, 2, 1, 0);
	}
	if (bParam4)
	{
		if (!Function_8(iParam0->f_56, 0, 1, 0, 0))
		{
			*uParam3 = 1;
			LOG_ERROR("SET_BEAT_NEXT_SPAWN_TIME Failed, shutting down event");
			return 0;
		}
		if (iParam0->f_52 >= 0.0f)
		{
			LOG_ERROR("SET_BEAT_NEXT_SPAWN_TIME Failed: Volume restriction size not set");
			return 0;
		}
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152("restrictVol") };
		bVar9 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Global_26150, &Var0, 4.203895E-45f, Function_150(*(iParam0 + 8), 0.0f, Global_34573, *(iParam0 + 8)), 0.0f, iParam0->f_52, 20.0f, iParam0->f_52);
		DECOR_SET_INT(bVar9, "script", GET_THIS_SCRIPT_ID());
		if (iParam0->f_56 != 4294967295)
		{
			DECOR_SET_INT(StackVal, bVar9, "category");
			Function_148(&bVar9, iParam0->f_32);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
	}
	return 1;
}

bool Function_116(int iParam0) //Position: 0x4C43 / 19523
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	float fVar12;
	float fVar13;
	bool bVar14;
	struct<17> Var15;
	
	GET_POSITION(GET_PLAYER_ACTOR(0), &vVar9);
	switch (iParam0->f_64)
	{
		case 0x00000005:
			if (!IS_ITERATOR_VALID(StackVal))
			{
				if (IS_LAYOUTREF_VALID(Global_30616))
				{
					iParam0->f_4 = CREATE_OBJECT_ITERATOR(Global_30616);
				}
				else
				{
					return 0;
				}
			}
			Function_147(iParam0 + 4);
			switch ((iParam0 + 64 + 24)->f_20)
			{
				case 0x00000000:
					ITERATE_IN_LAYOUT(StackVal, Global_30616);
					break;
				
				case 0x00000001:
					ITERATE_IN_LAYOUT(StackVal, FIND_NAMED_LAYOUT("regions_layout"));
					break;
			}
			if (StackVal < 0.0f)
			{
				vVar3 = { 0.0f, 0.0f, Function_96(1) };
				ROTATE_VECTOR_XZ(&vVar3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar3, StackVal) };
				ITERATE_IN_SPHERE(StackVal, vVar3, Function_96(1));
			}
			if (!STRINGS_ARE_EQUAL(iParam0 + 64 + 24, ""))
			{
				ITERATE_ON_PARTIAL_NAME(StackVal, iParam0 + 64 + 24);
			}
			if (!4294967295 != (iParam0 + 64 + 24)->f_12)
			{
				ITERATE_ON_OBJECT_TYPE(StackVal, (iParam0 + 64 + 24)->f_12);
			}
			if (GET_NUM_ITERATOR_MATCHES(StackVal) >= 0)
			{
				if (StackVal & 512 == 0 || iParam0->f_36 != 1)
				{
					if ((iParam0 + 64 + 24)->f_16 == 0)
					{
						bVar0 = Function_146(StackVal, StackVal, StackVal, vVar9, 0.01f);
					}
					else
					{
						bVar0 = Function_145(StackVal, StackVal, StackVal, vVar9, 0.1f, "locflag", (iParam0 + 64 + 24)->f_16);
					}
				}
				else if ((iParam0 + 64 + 24)->f_16 == 0)
				{
					bVar0 = Function_144(StackVal, StackVal, StackVal, vVar9, Function_114());
				}
				else
				{
					bVar0 = Function_143(StackVal, StackVal, StackVal, vVar9, Function_114(), "locflag", (iParam0 + 64 + 24)->f_16);
				}
				if (IS_OBJECT_VALID(bVar0))
				{
					GET_OBJECT_POSITION(bVar0, iParam0 + 8);
					GET_OBJECT_ORIENTATION(bVar0, iParam0 + 20);
					iParam0->f_48 = bVar0;
					DESTROY_ITERATOR(StackVal);
				}
				else
				{
					DESTROY_ITERATOR(StackVal);
					return 0;
				}
			}
			DESTROY_ITERATOR(StackVal);
			return 0;
			break;
		
		case 0x00000006:
			if (!IS_ITERATOR_VALID(StackVal))
			{
				iParam0->f_4 = CREATE_OBJECT_ITERATOR(FIND_NAMED_LAYOUT("regions_layout"));
			}
			Function_147(iParam0 + 4);
			ITERATE_IN_LAYOUT(StackVal, FIND_NAMED_LAYOUT("regions_layout"));
			fVar13 = 130.0f;
			fVar12 = 190.0f;
			GET_POSITION(GET_PLAYER_ACTOR(0), &vVar3);
			ITERATE_IN_SPHERE(StackVal, StackVal, vVar3);
			bVar1 = START_OBJECT_ITERATOR(StackVal);
			while (IS_OBJECT_VALID(bVar1) && !IS_OBJECT_VALID(bVar0))
			{
				if (DECOR_CHECK_EXIST(bVar1, "regid"))
				{
					bVar14 = DECOR_GET_INT(bVar1, "regid");
					if (Function_111(bVar14))
					{
						if (StackVal == (iParam0 + 64)->f_48)
						{
							if ((StackVal && Global_29008[bVar14]) >= 0)
							{
								GET_OBJECT_POSITION(bVar1, &vVar3);
								if (VDIST(vVar9, vVar3) < fVar13 && VDIST(vVar9, vVar3) > Function_96(1))
								{
									bVar0 = bVar1;
								}
							}
						}
					}
				}
				bVar1 = OBJECT_ITERATOR_NEXT(StackVal);
			}
			if (IS_OBJECT_VALID(bVar0))
			{
				GET_OBJECT_POSITION(bVar0, iParam0 + 8);
				Function_142(iParam0 + 8, 99.0f, iParam0 + 8, 10);
				GET_OBJECT_ORIENTATION(bVar0, iParam0 + 20);
				iParam0->f_48 = DECOR_GET_INT(bVar0, "regid");
			}
			else
			{
				DESTROY_ITERATOR(StackVal);
				return 0;
			}
			break;
		
		case 0x00000002:
		case 0x00000001:
			if (StackVal && (((!Global_3386 && Global_3388) && ARE_CURVES_IN_RANGE(48, vVar9, 100.0f)) && 8) != 8)
			{
				vVar6 = { 0.0f, 0.0f, -10.0f };
				ROTATE_VECTOR_XZ(&vVar6, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				Function_141(&vVar9, &vVar6);
				vVar3 = { StackVal, StackVal, Function_141(&vVar9, &vVar6) };
				if (!Function_92(StackVal, StackVal, vVar3))
				{
					PRINTSTRING("Player Pos: ");
					PRINTVECTOR(vVar9);
					PRINTNL();
					Function_97(&fVar13, &fVar12);
					if (VDIST(vVar3, vVar9) < ((fVar13 + ((fVar12 - fVar13) / 2.0f)) * 0.8f))
					{
						iVar2 = Function_138(StackVal, StackVal, iParam0, vVar3);
					}
				}
			}
			else
			{
				iVar2 = Function_134(iParam0);
			}
			if (iVar2 == 1)
			{
				if ((iParam0 + 64)->f_128 == 4)
				{
					if (IS_OBJECT_VALID(StackVal))
					{
						if (GET_OBJECT_TYPE(StackVal) == 9)
						{
							if (!IS_POINT_IN_VOLUME(StackVal, *(iParam0 + 8)))
							{
								return 0;
							}
						}
					}
				}
				if ((iParam0 + 64)->f_128 == 5)
				{
				}
				if (iParam0->f_60 == 2)
				{
					if (!Function_133(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (iParam0->f_60 == 1)
				{
					if (!Function_132(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (Function_13(StackVal, 131072))
				{
					if (StackVal || Function_131(StackVal, Function_131(StackVal, StackVal, *(iParam0 + 8)), Global_34574))
					{
						return 0;
					}
				}
				if (StackVal & 1024 == 1024)
				{
					if (Function_130(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (!Function_126(iParam0 + 8, iParam0 + 52, 0, iParam0->f_32))
				{
					return 0;
				}
			}
			return 0;
			break;
		
		case 0x00000003:
			if (StackVal)
			{
				fVar13 = 120.0f;
				fVar12 = 150.0f;
				vVar3 = { 0.0f, 0.0f, ((fVar13 + fVar12) * -0.5f) };
				ROTATE_VECTOR_XZ(&vVar3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar3, StackVal) };
				uVar23 = START_CURVE_QUERY(Global_28841, vVar3, Function_125((iParam0 + 64)->f_120, 0), 0.0f, 20.0f, 5.0f, 0);
			}
			else
			{
				uVar23 = START_CURVE_QUERY(Global_28841, vVar9, Function_125((iParam0 + 64)->f_120, 0), 120.0f, 150.0f, 5.0f, 0);
			}
			if (GET_NUM_POINTS_IN_CURVE_QUERY(uVar23) >= 0)
			{
				iVar21 = RAND_INT_RANGE(0, (GET_NUM_POINTS_IN_CURVE_QUERY(uVar23) - 1));
				GET_POINT_FROM_CURVE_QUERY(uVar23, iVar21, &Var15);
				Function_124(&Var15);
				*(iParam0 + 8) = { StackVal, StackVal, Function_124(&Var15) };
				iParam0->f_20 = Var15.f_12;
				(iParam0 + 20)->f_4 = Var15.f_16;
				iParam0->f_48 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(uVar23, iVar21);
				UNK_0xDF93BD7C(uVar23);
			}
			else
			{
				UNK_0xDF93BD7C(uVar23);
				return 0;
			}
			if (iParam0->f_60 == 2)
			{
				if (!Function_133(StackVal, StackVal, *(iParam0 + 8)))
				{
					return 0;
				}
			}
			if (iParam0->f_60 == 1)
			{
				if (!Function_132(StackVal, StackVal, *(iParam0 + 8)))
				{
					return 0;
				}
			}
			if (iParam0->f_60 == 0)
			{
				if (!(StackVal || Function_133(StackVal, Function_132(StackVal, StackVal, *(iParam0 + 8)), *(iParam0 + 8))))
				{
					return 0;
				}
			}
			if (Function_13(StackVal, 131072))
			{
				if (StackVal || Function_131(StackVal, Function_131(StackVal, StackVal, *(iParam0 + 8)), Global_34574))
				{
					return 0;
				}
			}
			if (StackVal && !Function_126(iParam0 + 8, iParam0 + 52, 0, iParam0->f_32) == 262144)
			{
				return 0;
			}
			break;
		
		case 0x00000004:
			if (!Function_121((iParam0 + 64)->f_120) < 0)
			{
				return 0;
			}
			break;
		
		case 0x00000007:
			switch ((iParam0 + 64)->f_128)
			{
				case 0x00000001:
					bVar24 = Function_118(StackVal, Global_29004, Global_29005, Global_29006, 1);
					if (IS_PERS_CHAR_VALID(bVar24))
					{
						if (IS_PERS_CHAR_ALIVE(bVar24))
						{
							return 0;
						}
					}
					break;
				
				case 0x00000002:
					iVar22 = 0;
					while (StackVal <= (StackVal - iVar22) + 1)
					{
						bVar24 = Function_118(StackVal, Global_29004, Global_29005, (Global_29006 + iVar22), 1);
						if (IS_PERS_CHAR_VALID(bVar24))
						{
							if (IS_PERS_CHAR_ALIVE(bVar24))
							{
								iVar25++;
							}
						}
						iVar22++;
					}
					if (iVar25 >= 0)
					{
						return 0;
					}
					break;
				
				case 0x00000003:
					if (!IS_ACTOR_IN_VOLUME(StackVal, GET_PLAYER_ACTOR(0)))
					{
						return 0;
					}
					break;
				
				case 0x00000004:
					iParam0->f_48 = StackVal;
					break;
				
				default:
					LOG_ERROR("TRIGGER_NONE event type??");
					return 0;
					break;
			}
			break;
		
		default:
			LOG_ERROR("AMB_EVENT type not defined for BEAT_SET_LAUNCH_PARAMS_FOR_BEAT");
			return 0;
			break;
	}
	if (Function_117(StackVal, StackVal, *(iParam0 + 8)))
	{
		return 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(*(iParam0 + 8), 10.0f))
	{
		return 0;
	}
	return 1;
}

bool Function_117(vector3 vParam0) //Position: 0x546D / 21613
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(Global_25964))
	{
		if (IS_POINT_IN_VOLUME(vParam0, GET_VOLUME_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, Global_25964))))
		{
			return 1;
		}
		bVar0++;
	}
	return 0;
}

bool Function_118(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x54A2 / 21666
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = bParam1;
	bVar1 = bParam2;
	PRINTSTRING("RC_REFERENCE_GLOBAL ");
	PRINTINT(bParam0);
	PRINTSTRING("-");
	PRINTINT(bVar0);
	PRINTSTRING("-");
	PRINTINT(bVar1);
	PRINTSTRING(" ");
	PRINTINT(bParam3);
	PRINTNL();
	if (!bParam4)
	{
		switch (bParam0)
		{
			case 0x00000000:
				switch (bVar0)
				{
					case 0x00000000:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_119(&Global_6298, &Global_7189, bParam3);
								break;
							
							case 0x00000001:
								return Function_119(&Global_6364, &Global_7287, bParam3);
								break;
							
							case 0x00000002:
								return Function_119(&Global_6351, &Global_7268, bParam3);
								break;
							
							default:
								return Function_119(&Global_6391, &Global_7327, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_119(&Global_6501, &Global_7490, bParam3);
								break;
							
							case 0x00000001:
								return Function_119(&Global_6402, &Global_7343, bParam3);
								break;
							
							case 0x00000003:
								return Function_119(&Global_6433, &Global_7389, bParam3);
								break;
							
							case 0x00000002:
								return Function_119(&Global_6490, &Global_7474, bParam3);
								break;
							
							case 0x00000004:
								return Function_119(&Global_6537, &Global_7543, bParam3);
								break;
							
							default:
								return Function_119(&Global_6532, &Global_7536, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_119(&Global_6563, &Global_7581, bParam3);
								break;
							
							case 0x00000001:
								return Function_119(&Global_6614, &Global_7657, bParam3);
								break;
							
							case 0x00000002:
								return Function_119(&Global_6643, &Global_7700, bParam3);
								break;
							
							default:
								return Function_119(&Global_6550, &Global_7562, bParam3);
								break;
						}
						break;
					
					case 0x00000003:
						switch (bVar1)
						{
							case 0x00000001:
								return Function_119(&Global_6667, &Global_7735, bParam3);
								break;
							
							default:
								return Function_119(&Global_6704, &Global_7790, bParam3);
								break;
						}
						break;
					
					default:
						break;
				}
				break;
			
			case 0x00000001:
				switch (bVar0)
				{
					case 0x00000000:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_119(&Global_6709, &Global_7797, bParam3);
								break;
							
							case 0x00000001:
								return Function_119(&Global_6764, &Global_7879, bParam3);
								break;
							
							case 0x00000002:
								return Function_119(&Global_6785, &Global_7910, bParam3);
								break;
							
							default:
								return Function_119(&Global_6810, &Global_7947, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_119(&Global_6815, &Global_7954, bParam3);
								break;
							
							default:
								return Function_119(&Global_6928, &Global_8122, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000002:
								return Function_119(&Global_6933, &Global_8129, bParam3);
								break;
							
							case 0x00000001:
								return Function_119(&Global_6962, &Global_8172, bParam3);
								break;
							
							case 0x00000003:
								return Function_119(&Global_6987, &Global_8209, bParam3);
								break;
							
							default:
								return Function_119(&Global_7027, &Global_8268, bParam3);
								break;
						}
						break;
					
					default:
						break;
				}
				break;
			
			case 0x00000002:
				return "";
				break;
			
			default:
				return "";
				break;
		}
	}
	else if (bVar1 == Global_30640[0])
	{
		return Function_119(&Global_6298, &Global_7189, bParam3);
	}
	if (bVar1 == Global_30640[1])
	{
		return Function_119(&Global_6364, &Global_7287, bParam3);
	}
	if (bVar1 == Global_30640[2])
	{
		return Function_119(&Global_6351, &Global_7268, bParam3);
	}
	if (bVar1 == Global_30658[0])
	{
		return Function_119(&Global_6501, &Global_7490, bParam3);
	}
	if (bVar1 == Global_30658[1])
	{
		return Function_119(&Global_6402, &Global_7343, bParam3);
	}
	if (bVar1 == Global_30658[3])
	{
		return Function_119(&Global_6433, &Global_7389, bParam3);
	}
	if (bVar1 == Global_30658[2])
	{
		return Function_119(&Global_6490, &Global_7474, bParam3);
	}
	if (bVar1 == Global_30658[4])
	{
		return Function_119(&Global_6537, &Global_7543, bParam3);
	}
	if (bVar1 == Global_30668[0])
	{
		return Function_119(&Global_6563, &Global_7581, bParam3);
	}
	if (bVar1 == Global_30668[1])
	{
		return Function_119(&Global_6614, &Global_7657, bParam3);
	}
	if (bVar1 == Global_30668[2])
	{
		return Function_119(&Global_6643, &Global_7700, bParam3);
	}
	if (bVar1 == Global_30679[1])
	{
		return Function_119(&Global_6667, &Global_7735, bParam3);
	}
	if (bVar1 == Global_30685[0])
	{
		return Function_119(&Global_6709, &Global_7797, bParam3);
	}
	if (bVar1 == Global_30685[1])
	{
		return Function_119(&Global_6764, &Global_7879, bParam3);
	}
	if (bVar1 == Global_30685[2])
	{
		return Function_119(&Global_6785, &Global_7910, bParam3);
	}
	if (bVar1 == Global_30693[0])
	{
		return Function_119(&Global_6815, &Global_7954, bParam3);
	}
	if (bVar1 == Global_30707[2])
	{
		return Function_119(&Global_6933, &Global_8129, bParam3);
	}
	if (bVar1 == Global_30707[1])
	{
		return Function_119(&Global_6962, &Global_8172, bParam3);
	}
	if (bVar1 == Global_30707[3])
	{
		return Function_119(&Global_6987, &Global_8209, bParam3);
	}
	if (bVar1 == Global_30628[0])
	{
		return Function_119(&Global_6391, &Global_7327, bParam3);
	}
	if (bVar1 == Global_30628[1])
	{
		return Function_119(&Global_6532, &Global_7536, bParam3);
	}
	if (bVar1 == Global_30628[2])
	{
		return Function_119(&Global_6550, &Global_7562, bParam3);
	}
	if (bVar1 == Global_30628[3])
	{
		return Function_119(&Global_6704, &Global_7790, bParam3);
	}
	if (bVar1 == Global_30633[0])
	{
		return Function_119(&Global_6810, &Global_7947, bParam3);
	}
	if (bVar1 == Global_30633[2])
	{
		return Function_119(&Global_6928, &Global_8122, bParam3);
	}
	if (bVar1 == Global_30633[1])
	{
		return Function_119(&Global_7027, &Global_8268, bParam3);
	}
	return "";
}

var Function_119(var uParam0, var uParam1, bool bParam2) //Position: 0x5AB7 / 23223
{
	int iVar0;
	
	iVar0 = bParam2;
	if (iVar0 <= *uParam0 || iVar0 > 0)
	{
		return "";
	}
	if (!Function_120(uParam0[iVar02], 2))
	{
		return "";
	}
	if (!IS_PERS_CHAR_VALID(StackVal))
	{
		return "";
	}
	ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
	return StackVal;
}

bool Function_120(var uParam0, int iParam1) //Position: 0x5B09 / 23305
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_121(int iParam0) //Position: 0x5B25 / 23333
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = 0;
	bVar1 = CREATE_OBJECT_ITERATOR(Global_28841);
	ITERATE_ON_OBJECT_TYPE(bVar1, 25);
	bVar2 = START_OBJECT_ITERATOR(bVar1);
	if (iParam0 == 0)
	{
		iVar0 = GET_NUM_ITERATOR_MATCHES(bVar1);
	}
	else
	{
		while (IS_OBJECT_VALID(bVar2))
		{
			if (Function_122(GET_SQUAD_FROM_OBJECT(bVar2)) == iParam0)
			{
				iVar0++;
			}
			bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
		}
	}
	DESTROY_ITERATOR(bVar1);
	return iVar0;
}

int Function_122(bool bParam0) //Position: 0x5B80 / 23424
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 4294967295;
	}
	bVar0 = Function_123(bParam0);
	if (!IS_ACTOR_VALID(bVar0))
	{
		return 4294967295;
	}
	if (IS_ACTOR_RIDING_VEHICLE(bVar0))
	{
		return 2;
	}
	if (IS_ACTOR_RIDING(bVar0))
	{
		return 1;
	}
	return 4294967295;
}

var Function_123(bool bParam0) //Position: 0x5BB8 / 23480
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return "";
	}
	bVar1 = false;
	while (bVar1 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar0 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar1);
		if (IS_ACTOR_VALID(bVar0) && IS_ACTOR_ALIVE(bVar0))
		{
			return bVar0;
		}
		bVar1++;
	}
	return "";
}

vector3 Function_124(int iParam0) //Position: 0x5BFE / 23550
{
	vector3 vVar0;
	
	vVar0.x = *iParam0;
	vVar0.f_4 = StackVal;
	vVar0.f_8 = StackVal;
	return StackVal, StackVal, vVar0;
}

int Function_125(int iParam0, int iParam1) //Position: 0x5C1D / 23581
{
	if (iParam1 != 0)
	{
		return iParam1;
	}
	switch (iParam0)
	{
		case 0x00000002:
			return 16;
			break;
		
		case 0x00000001:
			return 48;
			break;
	}
	return 48;
}

bool Function_126(var uParam0, float fParam1, int iParam2, bool bParam3) //Position: 0x5C4D / 23629
{
	var uVar0;
	int iVar3;
	bool bVar4;
	float fVar5;
	bool bVar6;
	
	if (bParam3)
	{
		return 1;
	}
	bVar4 = false;
	Function_128(4294967295);
	iVar3 = 0;
	while (iVar3 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			bVar6 = DECOR_GET_INT(StackVal, "category");
			if (iParam2 != 0)
			{
				if (bVar6 != iParam2 && iParam2 != 256)
				{
					bVar4 = true;
				}
			}
			GET_VOLUME_CENTER(StackVal, &uVar0);
			if (iParam2 != 262144)
			{
				if (IS_POINT_IN_VOLUME(StackVal, *uParam0))
				{
					return 0;
				}
			}
			fVar5 = *fParam1;
			if (bVar4)
			{
				fVar5 = (fVar5 + 170.0f);
			}
			if (Global_3386 && bVar6 != 512)
			{
			}
			else if (Function_127(uParam0, &uVar0) > fVar5)
			{
				return 0;
			}
		}
		iVar3++;
	}
	return 1;
}

float Function_127(var uParam0, int iParam1) //Position: 0x5D1D / 23837
{
	vector3 vVar0;
	int iVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*iParam1, *uParam0, StackVal) };
	iVar3 = VMAG(vVar0);
	return iVar3;
}

int Function_128(bool bParam0) //Position: 0x5D3B / 23867
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (DECOR_CHECK_EXIST(StackVal, "script"))
			{
				if (!IS_SCRIPT_VALID(DECOR_GET_INT(StackVal, "script")))
				{
					GET_VOLUME_CENTER(StackVal, &vVar1);
					if (IS_BLIP_VALID(StackVal))
					{
						REMOVE_BLIP(StackVal);
					}
					if (!IS_ACTOR_VALID(Global_34573))
					{
						Function_129(iVar0);
					}
					else if (Global_3386)
					{
						if (Function_34(StackVal, StackVal, Global_34573, vVar1) < 25.0f)
						{
							Function_129(iVar0);
						}
					}
					else if (Function_34(StackVal, StackVal, Global_34573, vVar1) < 55.0f)
					{
						Function_129(iVar0);
					}
				}
				else if (DECOR_GET_INT(StackVal, "script") == bParam0)
				{
					LOG_ERROR("duplicate script id..This should never happen...Tell Steve");
					PRINTSTRING("Duplicate Script Id:");
					PRINTINT(bParam0);
					RELEASE_VOLUME(StackVal);
				}
			}
		}
		else
		{
			Function_129(iVar0);
		}
		iVar0++;
	}
	return 0;
}

void Function_129(int iParam0) //Position: 0x5E9C / 24220
{
	if (IS_VOLUME_VALID(Global_26155[iParam05].f_12))
	{
		REMOVE_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
		REMOVE_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	}
	if (IS_BLIP_VALID(StackVal))
	{
		REMOVE_BLIP(StackVal);
	}
	RELEASE_VOLUME(StackVal);
	RELEASE_VOLUME(Global_26155[iParam05].f_12);
	return;
}

bool Function_130(vector3 vParam0) //Position: 0x5EFD / 24317
{
	struct<9> Var0;
	
	iVar7 = 0;
	while (iVar7 <= Global_29008)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (StackVal || (StackVal || StackVal != 3 != 4) != 5)
			{
				if (GET_OBJECT_TYPE(StackVal) == 9)
				{
					GET_VOLUME_SCALE(StackVal, &vVar0);
					GET_VOLUME_CENTER(StackVal, &vVar3);
					bVar6 = VDIST(vParam0, vVar3);
					if ((bVar6 - ((vVar0.x + vVar0.z) / 2.0f)) > 60.0f)
					{
						return 1;
					}
				}
			}
		}
		iVar7++;
	}
	return 0;
}

int Function_131(vector3 vParam0) //Position: 0x5F9E / 24478
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
			{
				if (StackVal == 4)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_132(vector3 vParam0) //Position: 0x5FEA / 24554
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
			{
				if (StackVal || StackVal != 3 != 4)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_133(vector3 vParam0) //Position: 0x6043 / 24643
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
			{
				if (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 3 != 4) != 5) != 6) != 7)
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int Function_134(int iParam0) //Position: 0x60C0 / 24768
{
	float fVar0;
	bool bVar1;
	
	Function_97(&fVar0, &bVar1);
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER_PLAYER();
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	Function_137(0);
	AMBIENT_ENABLE_QUADRANT_FILTER(1);
	AMBIENT_SET_QUADRANT_FILTER(1, 0, 0, 0);
	if ((iParam0 + 64 + 60)->f_44 == 0.0f)
	{
		if ((iParam0 + 64 + 60)->f_48 == 0.0f)
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, (iParam0 + 64 + 60)->f_44, (iParam0 + 64 + 60)->f_48);
		}
		else
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(StackVal, 0.0f, (iParam0 + 64 + 60)->f_44);
		}
	}
	else
	{
		Function_136(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
	}
	if ((iParam0 + 64 + 60)->f_52 == 0.0f)
	{
		if ((iParam0 + 64 + 60)->f_56 == 0.0f)
		{
			AMBIENT_SET_BUMP_FILTER(0.0f, (iParam0 + 64 + 60)->f_52, (iParam0 + 64 + 60)->f_56);
		}
		else
		{
			AMBIENT_SET_BUMP_FILTER(StackVal, 0.0f, (iParam0 + 64 + 60)->f_52);
		}
	}
	Function_135(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
	AMBIENT_SET_ONESHOT_QUERIES(0);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	if (Global_30842[34])
	{
		PRINTSTRING("HeightDeviation is set to:");
		PRINTFLOAT((iParam0 + 64 + 60)->f_28);
		PRINTNL();
		PRINTSTRING("Elevation Derivative is set to:");
		PRINTFLOAT((iParam0 + 64 + 60)->f_36);
		PRINTNL();
	}
	if ((iParam0 + 64 + 60)->f_28 == 0.0f)
	{
		UNK_0x0AC99007(StackVal, (iParam0 + 64 + 60)->f_28);
		UNK_0x30C67D05(1);
	}
	if ((iParam0 + 64 + 60)->f_36 == 0.0f)
	{
		AMBIENT_SET_ELEVATION_DERIVATIVE_IN_AREA_FILTER((iParam0 + 64 + 60)->f_36, (iParam0 + 64 + 60)->f_40);
		AMBIENT_ENABLE_ELEVATION_DERIVATIVE_IN_AREA_FILTER(1);
	}
	if (AMBIENT_GET_POINT(iParam0 + 8, 0))
	{
		return 1;
	}
	return 0;
}

void Function_135(struct<33> Param0) //Position: 0x625B / 25179
{
	if (StackVal && StackVal != 4294967295 != 0)
	{
		if (Param0.f_20 > 1.0f)
		{
			if (Global_30842[34])
			{
				PRINTSTRING("Material Match: ");
				PRINTINT(StackVal);
				PRINTNL();
			}
			AMBIENT_SET_MATERIAL_AT_POINT_FILTER(StackVal);
		}
		else
		{
			if (Global_30842[34])
			{
				PRINTSTRING("Material Match: ");
				PRINTINT(StackVal);
				PRINTSTRING("n, Radius ");
				PRINTFLOAT(Param0.f_20);
				PRINTNL();
			}
			AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(StackVal, Param0.f_20, 0);
		}
	}
	if (!Param0.f_12 != 4294967295 && !Param0.f_12 != 0)
	{
		AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(Param0.f_12, Param0.f_24, 1);
	}
	if (!Param0.f_16 != 4294967295 && !Param0.f_16 != 0)
	{
		if (Global_30842[34])
		{
			PRINTSTRING("Material NoMatch: ");
			PRINTINT(Param0.f_16);
			PRINTSTRING("n, Radius ");
			PRINTFLOAT(Param0.f_32);
			PRINTNL();
		}
		AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(Param0.f_16, Param0.f_32, 0);
	}
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(StackVal, 1.43493E-42f, 1);
}

void Function_136(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14) //Position: 0x6387 / 25479
{
	if (Param0 == 0)
	{
		AMBIENT_SET_SLOPE_FILTER(StackVal, 0, Param0);
	}
	else if (Param0 == 1)
	{
		AMBIENT_SET_SLOPE_FILTER(StackVal, 0, Param0);
	}
	else if (Param0 == 2)
	{
		AMBIENT_SET_SLOPE_FILTER(StackVal, 0, Param0);
	}
	else if (Param0 == 3)
	{
		AMBIENT_SET_SLOPE_FILTER(StackVal, 0, Param0);
	}
}

void Function_137(float fParam0) //Position: 0x63D8 / 25560
{
	if (fParam0 < 0.1f)
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * fParam0), fParam0);
	}
	else if (Global_3386)
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * 10.0f), 10.0f);
	}
	else
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * 10.0f), 10.0f);
	}
	return;
}

int Function_138(int iParam0, vector3 vParam1) //Position: 0x641C / 25628
{
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER(vParam1);
	if (Global_30842[34])
	{
		PRINTVECTOR(vParam1);
		PRINTNL();
	}
	Function_140();
	Function_137(0);
	Function_139(0);
	if ((iParam0 + 64 + 60)->f_44 == 0.0f)
	{
		if ((iParam0 + 64 + 60)->f_48 == 0.0f)
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, (iParam0 + 64 + 60)->f_44, (iParam0 + 64 + 60)->f_48);
		}
		else
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(StackVal, 0.0f, (iParam0 + 64 + 60)->f_44);
		}
	}
	else
	{
		Function_136(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
	}
	if ((iParam0 + 64 + 60)->f_52 == 0.0f)
	{
		if ((iParam0 + 64 + 60)->f_56 == 0.0f)
		{
			AMBIENT_SET_BUMP_FILTER(0.0f, (iParam0 + 64 + 60)->f_52, (iParam0 + 64 + 60)->f_56);
		}
		else
		{
			AMBIENT_SET_BUMP_FILTER(StackVal, 0.0f, (iParam0 + 64 + 60)->f_52);
		}
	}
	Function_135(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
	AMBIENT_SET_ONESHOT_QUERIES(0);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	if (Global_30842[34])
	{
		PRINTSTRING("HeightDeviation is set to:");
		PRINTFLOAT((iParam0 + 64 + 60)->f_28);
		PRINTNL();
		PRINTSTRING("Elevation Derivative is set to:");
		PRINTFLOAT((iParam0 + 64 + 60)->f_36);
		PRINTNL();
	}
	if ((iParam0 + 64 + 60)->f_28 == 0.0f)
	{
		UNK_0x0AC99007(StackVal, (iParam0 + 64 + 60)->f_28);
		UNK_0x30C67D05(1);
	}
	if ((iParam0 + 64 + 60)->f_36 == 0.0f)
	{
		AMBIENT_SET_ELEVATION_DERIVATIVE_IN_AREA_FILTER((iParam0 + 64 + 60)->f_36, (iParam0 + 64 + 60)->f_40);
		AMBIENT_ENABLE_ELEVATION_DERIVATIVE_IN_AREA_FILTER(1);
	}
	if (AMBIENT_GET_POINT(iParam0 + 8, 0))
	{
		return 1;
	}
	return 0;
}

void Function_139(bool bParam0) //Position: 0x65BE / 26046
{
	switch (bParam0)
	{
		case 0x00000004:
		case 0x00000001:
			AMBIENT_SET_QUADRANT_FILTER(1, 0, 0, 0);
			break;
		
		case 0x00000007:
		case 0x00000002:
			AMBIENT_SET_QUADRANT_FILTER(0, 1, 1, 0);
			break;
		
		case 0x00000006:
			AMBIENT_SET_QUADRANT_FILTER(0, 1, 0, 0);
			break;
		
		case 0x00000005:
			AMBIENT_SET_QUADRANT_FILTER(0, 0, 1, 0);
			break;
		
		case 0x00000008:
		case 0x00000003:
			AMBIENT_SET_QUADRANT_FILTER(0, 0, 0, 1);
			AMBIENT_SET_DISTANCE_FILTER(5.0f, 25.0f);
			break;
		
		case 0x00000000:
			break;
		
		case 0x00000009:
			AMBIENT_SET_QUADRANT_FILTER(0, 1, 1, 1);
			break;
		
		default:
			LOG_ERROR("No point type filter set!");
			break;
	}
	return;
}

void Function_140() //Position: 0x6671 / 26225
{
	AMBIENT_SET_DISTANCE_FILTER(0.0f, 24.0f);
	return;
}

vector3 Function_141(var uParam0, int iParam1) //Position: 0x6680 / 26240
{
	var uVar0;
	bool bVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	var uVar10;
	vector3 vVar11;
	float fVar14;
	float fVar15;
	vector3 vVar16;
	vector3 vVar19;
	vector3 vVar22;
	int iVar25;
	int iVar31;
	
	uVar10 = START_CURVE_QUERY(Global_28841, *uParam0, 48, 0.0f, 7.0f, 5.0f, 0);
	if (!GET_NUM_CURVES_IN_CURVE_QUERY(uVar10) < 0)
	{
		UNK_0xDF93BD7C(uVar10);
		vVar11 = { 0.0f, 0.0f, 0.0f };
		return StackVal, StackVal, vVar11;
	}
	GET_POINT_FROM_CURVE_QUERY(uVar10, 0, &uVar0);
	bVar6 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(uVar10, 0);
	if (IS_OBJECT_VALID(bVar6))
	{
		vVar16 = { StackVal, StackVal, *iParam1 };
		UNK_0x19D652F9(bVar6, 50.0f, &uVar0, &iVar25);
		UNK_0x19D652F9(bVar6, -50.0f, &uVar0, &iVar31);
		Function_124(&iVar25);
		vVar19 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*uParam0, Function_124(&iVar25), StackVal) };
		Function_124(&iVar31);
		vVar22 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*uParam0, Function_124(&iVar31), StackVal) };
		fVar15 = VDOT(&vVar16, &vVar19);
		fVar14 = VDOT(&vVar16, &vVar22);
		Function_97(&fVar7, &fVar8);
		fVar9 = ((fVar7 + fVar8) / 2.0f);
		if (fVar15 > 0.0f && fVar14 > 0.0f)
		{
			UNK_0xDF93BD7C(uVar10);
			vVar11 = { 0.0f, 0.0f, 0.0f };
			return StackVal, StackVal, vVar11;
		}
		if (fVar15 > fVar14)
		{
			UNK_0x19D652F9(bVar6, (fVar9 * -1.0f), &uVar0, &iVar31);
			Function_124(&iVar31);
			vVar11 = { StackVal, StackVal, Function_124(&iVar31) };
		}
		else
		{
			UNK_0x19D652F9(bVar6, fVar9, &uVar0, &iVar25);
			Function_124(&iVar25);
			vVar11 = { StackVal, StackVal, Function_124(&iVar25) };
		}
	}
	UNK_0xDF93BD7C(uVar10);
	return StackVal, StackVal, vVar11;
}

int Function_142(var uParam0, float fParam1, int iParam2, int iParam3) //Position: 0x678D / 26509
{
	var uVar0;
	int iVar3;
	vector3 vVar4;
	
	if (iParam3 == 4294967295)
	{
		iVar3 = 4294967294;
	}
	else
	{
		iVar3 = 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(*uParam0, 1.0f))
	{
		GET_CAMERA_POSITION(GET_GAME_CAMERA(), &vVar4);
		if (VDIST(*uParam0, vVar4) > 175.0f)
		{
			PRINTSTRING("Camera Position: ");
			PRINTVECTOR(vVar4);
			PRINTNL();
			PRINTSTRING("Probe Position: ");
			PRINTVECTOR(*uParam0);
			PRINTNL();
			PRINTSTRING("Distance");
			PRINTFLOAT(VDIST(*uParam0, vVar4));
			PRINTNL();
		}
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(uParam0, fParam1, iParam2, &uVar0))
	{
		if (!Function_92(StackVal, StackVal, *iParam2))
		{
			return 1;
		}
	}
	while (!IS_EXITFLAG_SET() && iVar3 > iParam3)
	{
		*uParam0 = (*uParam0 + 0.01f);
		uParam0->f_8 = (StackVal + 0.01f);
		if (FIND_GROUND_INTERSECTION(uParam0, fParam1, iParam2, &uVar0))
		{
			if (!Function_92(StackVal, StackVal, *iParam2))
			{
				return 1;
			}
		}
		*iParam2 = { StackVal, StackVal, *uParam0 };
		iParam2->f_4 = (StackVal - fParam1);
		if (!iParam3 != 4294967295)
		{
			iVar3++;
		}
		WAIT(0);
	}
	return 0;
}

var Function_143(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, var uParam6) //Position: 0x68BF / 26815
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	vector3 vVar5;
	
	fVar4 = 50.0f;
	bVar3 = -1.0f;
	bVar0 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		GET_OBJECT_POSITION(bVar0, &vVar5);
		bVar2 = VDIST(vVar5, vParam1);
		if (DECOR_CHECK_EXIST(bVar0, bParam5))
		{
			if ((DECOR_GET_INT(bVar0, bParam5) && uParam6) >= 0)
			{
				if (bVar2 < fParam4)
				{
					if (bVar3 > 0.0f || bVar2 > bVar3)
					{
						if (Function_126(&vVar5, &fVar4, 0, 0))
						{
							bVar3 = bVar2;
							bVar1 = bVar0;
							PRINTSTRING("Assigning new closestObject ");
							PRINTNL();
						}
					}
				}
			}
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bParam0);
	}
	return bVar1;
}

var Function_144(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x6967 / 26983
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	vector3 vVar5;
	
	bVar3 = -1.0f;
	bVar0 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		GET_OBJECT_POSITION(bVar0, &vVar5);
		bVar2 = VDIST(vVar5, vParam1);
		if (bVar2 < fParam4)
		{
			if (bVar3 > 0.0f || bVar2 > bVar3)
			{
				if (Function_126(&vVar5, &uVar4, 0, 0))
				{
					bVar3 = bVar2;
					bVar1 = bVar0;
					PRINTSTRING("Assigning new closestObject ");
					PRINTNL();
				}
			}
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bParam0);
	}
	return bVar1;
}

var Function_145(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, var uParam6) //Position: 0x69F0 / 27120
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	
	bVar3 = -1.0f;
	bVar0 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		GET_OBJECT_POSITION(bVar0, &vVar4);
		bVar2 = VDIST(vVar4, vParam1);
		if (DECOR_CHECK_EXIST(bVar0, bParam5))
		{
			if ((DECOR_GET_INT(bVar0, bParam5) && uParam6) >= 0)
			{
				if (bVar2 < fParam4)
				{
					if (bVar3 > 0.0f || bVar2 > bVar3)
					{
						bVar3 = bVar2;
						bVar1 = bVar0;
						PRINTSTRING("Assigning new closestObject ");
						PRINTNL();
					}
				}
			}
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bParam0);
	}
	return bVar1;
}

var Function_146(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x6A85 / 27269
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	
	bVar3 = -1.0f;
	bVar0 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		GET_OBJECT_POSITION(bVar0, &vVar4);
		bVar2 = VDIST(vVar4, vParam1);
		if (bVar2 < fParam4)
		{
			if (bVar3 > 0.0f || bVar2 > bVar3)
			{
				bVar3 = bVar2;
				bVar1 = bVar0;
				PRINTSTRING("Assigning new closestObject ");
				PRINTNL();
			}
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bParam0);
	}
	return bVar1;
}

int Function_147(int iParam0) //Position: 0x6B02 / 27394
{
	if (IS_ITERATOR_VALID(*iParam0))
	{
		ITERATE_EVERYWHERE(*iParam0);
		ITERATE_ON_PARTIAL_NAME(*iParam0, Function_169());
		ITERATE_ON_PARTIAL_MODEL_NAME(*iParam0, Function_169());
		ITERATE_ON_OBJECT_TYPE(*iParam0, 4294967295);
		return 1;
	}
	return 0;
}

int Function_148(bool bParam0, int iParam1) //Position: 0x6B33 / 27443
{
	int iVar0;
	var uVar1;
	
	if (!IS_VOLUME_VALID(*bParam0))
	{
		LOG_ERROR("Passed an invalid volume into ADD_AMBIENT_VOLUME_RESTRICTION");
	}
	if (DECOR_CHECK_EXIST(*bParam0, "script"))
	{
		if (!IS_SCRIPT_VALID(DECOR_GET_INT(*bParam0, "script")))
		{
			LOG_ERROR("Passed an invalid script ID into ADD_AMBIENT_VOLUME_RESTRICTION");
		}
	}
	GET_VOLUME_CENTER(*bParam0, &uVar1);
	Function_128(DECOR_GET_INT(*bParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
		}
		else
		{
			Function_149(iVar0, bParam0, &uVar1, iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(*bParam0);
	return 0;
}

void Function_149(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x6C94 / 27796
{
	struct<8> Var0;
	
	Global_26155[iParam05].f_8 = *uParam1;
	Global_26155[iParam05].f_16 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152("stayout") };
	Global_26155[iParam05].f_12 = CREATE_VOLUME_IN_LAYOUT(Global_26150, &Var0, 3, *iParam2, 0.0f, 0.0f, 0.0f, 12.0f, 5.0f, 12.0f);
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	if (bParam3)
	{
		Global_26155[iParam05].f_4 = ADD_BLIP_FOR_COORD(iParam2, 403, 0f, 2, 0);
		SET_BLIP_BLINK(StackVal, 1, 1, 20.0f);
	}
}

var Function_150(bool bParam0, vector3 vParam1) //Position: 0x6D2F / 27951
{
	vector3 vVar0;
	var uVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		GET_POSITION(bParam0, &vVar0);
		Function_151(StackVal, StackVal, StackVal, StackVal, vVar0, vParam1, &uVar3);
		return UNK_0x9C40E671(&uVar3);
	}
	return 0.0f;
}

void Function_151(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x6D5F / 27999
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

struct<32> Function_152(bool bParam0) //Position: 0x6D82 / 28034
{
	char* cVar0[32];
	char* cVar8[16];
	
	if (!IS_STRING_VALID(cParam0))
	{
	}
	else
	{
		Global_6280 = (Global_6280 % 10000);
		strcpy(&cVar8, I2STR(Global_6280), 16);
		while (STRING_LENGTH(&cVar8) <= 4)
		{
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_153("0", &cVar8, ""), 4);
		}
		if (IS_STRING_VALID(&cVar8))
		{
			strcpy(&cVar0, bParam0, 32);
			stradd(&cVar0, &cVar8, 32);
			Global_6280++;
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_153(char* cParam0, char* cParam1, char* cParam2) //Position: 0x6DEC / 28140
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_154(int iParam0) //Position: 0x6E0B / 28171
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_159();
	iVar1 = 0;
	if (!Function_4(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_158(iParam0[iVar03], 8);
		}
		else if (Function_157())
		{
			iVar1 = 1;
			Function_158(iParam0[iVar03], 8);
		}
		Function_158(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_4(iParam0[iVar03], 4))
		{
			if (!Function_4(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_4(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_4(iParam0[03], 8) || iVar1));
						break;
					
					case 0x00000005:
						REQUEST_ANIM_SET(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03]), 0);
						break;
					
					case 0x00000001:
						STREAMING_REQUEST_GRINGO((*iParam0)[iVar03]);
						break;
					
					case 0x00000008:
						REQUEST_ACTION_TREE(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03]));
						break;
					
					case 0x0000000A:
						REQUEST_STRING_TABLE(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03]));
						break;
					
					case 0x00000004:
						STREAMING_REQUEST_SCRIPT((*iParam0)[iVar03]);
						break;
					
					case 0x00000006:
						STREAMING_REQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME((*iParam0)[iVar03], 6));
						break;
					
					case 0x0000000C:
						STREAMING_REQUEST_GRINGO_DICTIONARY((*iParam0)[iVar03]);
						break;
					
					default:
						break;
				}
				Function_158(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_4(iParam0[iVar03], 4))
		{
			if (!Function_4(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_158(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_158(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000002:
					case 0x00000003:
						if (STREAMING_IS_ACTOR_LOADED((*iParam0)[iVar03], 4294967295))
						{
							Function_158(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_158(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_158(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_158(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_158(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_158(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_158(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_158(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					default:
						break;
					}
				}
		}
		iVar0++;
	}
	Function_155();
	return 1;
}

void Function_155() //Position: 0x7186 / 29062
{
	if (!Function_156(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_156(int iParam0) //Position: 0x71C6 / 29126
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_157() //Position: 0x71E2 / 29154
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 200)
	{
		if (GET_THIS_SCRIPT_ID() == Global_63541[iVar055].f_196)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_158(var uParam0, int iParam1) //Position: 0x720D / 29197
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_159() //Position: 0x721E / 29214
{
	if (!Function_156(128))
	{
		return;
	}
	if (Global_13152.f_68 == 0)
	{
		strcpy(&Global_13152, "nStreaming", 64);
		Global_13152.f_68 = 1;
		Global_13152.f_64 = GET_CURRENT_GAME_TIME();
		Global_13152.f_72 = Global_13133.f_64;
	}
	return;
}

void Function_160(bool bParam0) //Position: 0x7260 / 29280
{
	if (IS_ACTOR_VALID(*bParam0))
	{
		SET_DRAW_ACTOR(*bParam0, 1);
		CLEAR_ACTOR_MAX_SPEED(*bParam0);
		if (IS_ACTOR_ANIMAL(*bParam0))
		{
			ANIMAL_SPECIES_REL_SET_CAN_ATTACK(ANIMAL_ACTOR_GET_SPECIES(*bParam0), 0, 1);
		}
		else
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*bParam0, 0, 1);
			MEMORY_ALLOW_SHOOTING(*bParam0, 1);
		}
	}
	return;
}

void Function_161(int iParam0) //Position: 0x72A2 / 29346
{
	if (IS_ACTOR_VALID(*iParam0))
	{
		SET_DRAW_ACTOR(*iParam0, 0);
		SET_ACTOR_MAX_SPEED(*iParam0, 5);
		if (IS_ACTOR_ANIMAL(*iParam0))
		{
			ANIMAL_SPECIES_REL_SET_CAN_ATTACK(ANIMAL_ACTOR_GET_SPECIES(*iParam0), 0, 0);
		}
		else
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*iParam0, 0, 0);
			MEMORY_ALLOW_SHOOTING(*iParam0, 0);
		}
	}
	return;
}

bool Function_162(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x72E5 / 29413
{
	if (Global_63096 && !GET_THIS_SCRIPT_ID() != Global_63116)
	{
		*uParam3 = 0;
		if (!*uParam0)
		{
			*uParam0 = 1;
			if ((*uParam1 < 2 && *uParam1 > 5) && uParam4)
			{
				*uParam2 = *uParam1;
				*uParam1 = 7;
			}
			else
			{
				*uParam1 = 6;
				return 0;
			}
			return 1;
		}
	}
	if (*uParam0)
	{
		*uParam0 = 0;
		*uParam1 = *uParam2;
		return 1;
	}
	return 0;
}

var Function_163(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x734D / 29517
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_164(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_158(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_164(var uParam0, int iParam1, int iParam2) //Position: 0x7385 / 29573
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_4(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_158(uParam0[iVar03], 4);
			return iVar0;
		}
		if (StackVal && iParam1 != (*uParam0)[iVar03] != iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

bool Function_165(int iParam0) //Position: 0x7449 / 29769
{
	if (iParam0 <= 6)
	{
		return 1;
	}
	if (iParam0 == 17)
	{
		return 1;
	}
	if (iParam0 == 49)
	{
		return 1;
	}
	if (iParam0 < 19 && iParam0 > 25)
	{
		return 1;
	}
	if (iParam0 < 50 && iParam0 > 80)
	{
		return 1;
	}
	if (iParam0 < 211 && iParam0 > 217)
	{
		return 1;
	}
	if (iParam0 < 236 && iParam0 > 254)
	{
		return 1;
	}
	if (iParam0 < 312 && iParam0 > 319)
	{
		return 1;
	}
	return 0;
}

void Function_166(int iParam0) //Position: 0x74D1 / 29905
{
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(iParam0);
	return;
}

var Function_167(var uParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x74DC / 29916
{
	int iVar0;
	
	uParam2 = uParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_4(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_158(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_158(uParam0[iVar03], 8);
			}
			return iVar0;
		}
		if (iParam1 == (*uParam0)[iVar03])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

int Function_168(int iParam0, int iParam1) //Position: 0x75AC / 30124
{
	int iVar0;
	
	iVar0 = (Global_16876[iParam06].f_12 % iParam1);
	return iVar0;
}

var Function_169() //Position: 0x75C2 / 30146
{
	int iVar0;
	
	return iVar0;
}

void Function_170(var uParam0, float fParam1) //Position: 0x75CA / 30154
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_103(uParam0, 1);
	Function_171(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_171(var uParam0, var uParam1) //Position: 0x75EB / 30187
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
	return;
}

