//Decompiled with MagicRDR v1.0
//Function Count : 218
//Statics Count : 142
//Natives Count : 409
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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	bool bLocal_27 = false;
	bool bLocal_28 = false;
	bool bLocal_29 = false;
	bool bLocal_30 = false;
	bool bLocal_31 = false;
	bool bLocal_32 = false;
	vector3 vLocal_33 = { 0.0f, 0.0f, 0.0f };
	bool bLocal_36 = false;
	bool bLocal_37 = false;
	vector3 vLocal_38 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_41 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_44 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_47 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_50 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_53 = { 0.0f, 0.0f, 0.0f };
	bool bLocal_56 = false;
	int iLocal_57 = 0;
	bool bLocal_58 = false;
	bool bLocal_59 = false;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	int iLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	bool bLocal_69 = false;
	float fLocal_70 = 0.0f;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	vector3 vLocal_73 = { 0.0f, 0.0f, 0.0f };
	float fLocal_76 = 0.0f;
	float fLocal_77 = 0.0f;
	float fLocal_78 = 0.0f;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	bool bLocal_84 = false;
	var uLocal_85 = 0;
	bool bLocal_86 = false;
	bool bLocal_87 = false;
	int iLocal_88 = 0;
	float fLocal_89 = 0.0f;
	int iLocal_90 = 0;
	struct<57> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar4;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	var uVar47;
	float fVar48;
	bool bVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	bool bVar53;
	int iVar54;
	bool bVar55;
	
	iLocal_14 = 0;
	iLocal_15 = 0;
	bLocal_32 = false;
	vLocal_33 = { -5.0f, 0.0f, 0.0f };
	bLocal_36 = false;
	bLocal_37 = false;
	vLocal_38 = { -0.94f, 1.39f, 0.31f };
	vLocal_41 = { -0.04f, 2.25f, 0.0f };
	vLocal_44 = { 1.08f, 1.29f, -0.57f };
	vLocal_47 = { 0.04f, 88.64f, 0.0f };
	vLocal_50 = { -1.04f, 1.38f, 0.46f };
	vLocal_53 = { -3.48f, -53.07f, 0.0f };
	iLocal_62 = 0;
	iLocal_71 = 0;
	iLocal_72 = 0;
	fLocal_76 = 0.5f;
	fLocal_77 = 5.0f;
	iLocal_79 = 0;
	iLocal_80 = 0;
	bLocal_84 = false;
	iLocal_88 = 0;
	iLocal_90 = 1;
	iVar0 = 0;
	bVar1 = CREATE_LAYOUT(Function_217());
	bVar4 = 12;
	Function_215(&uLocal_81, 0.0f);
	iVar41 = 0;
	iVar45 = 0;
	Function_215(&uLocal_21, 0.0f);
	Function_214();
	uVar47 = Function_213(2, 1, 1, 0, 0);
	fVar48 = 0.0f;
	if ((Global_16876[ScriptParam_0.f_566].f_12 % 3) == 0)
	{
		bLocal_58 = true;
	}
	else if ((Global_16876[ScriptParam_0.f_566].f_12 % 3) == 1)
	{
		bLocal_58 = false;
	}
	else
	{
		bLocal_58 = 2;
	}
	if (bLocal_58 == 0)
	{
		if (Function_212())
		{
			bLocal_36 = true;
		}
		else
		{
			bLocal_36 = false;
		}
	}
	switch (bLocal_58)
	{
		case 0x00000000:
			switch (Global_29004)
			{
				case 0x00000000:
				case 0x00000002:
					bLocal_59 = 207;
					break;
				
				case 0x00000001:
					bLocal_59 = 301;
					break;
			}
			break;
		
		case 0x00000001:
			iVar44 = Function_211(40, 2);
			if (iVar44 == 0)
			{
				bLocal_59 = 63;
			}
			else
			{
				bLocal_59 = 61;
			}
			break;
		
		case 0x00000002:
			iVar44 = Function_211(40, 2);
			if (iVar44 == 0)
			{
				bLocal_59 = 63;
			}
			else
			{
				bLocal_59 = 61;
			}
			break;
	}
	Function_210(&bVar4, bLocal_59, 3, 0);
	Function_208(&bVar4, "nthank_you", 5, 0);
	Function_208(&bVar4, "custom/thank_you", 8, 0);
	Function_208(&bVar4, "Give_money", 1, 0);
	Function_208(&bVar4, "receive_money", 1, 0);
	Function_208(&bVar4, "relic_handoff", 1, 0);
	Function_208(&bVar4, "fan_pardon_letter_link", 1, 0);
	switch (bLocal_58)
	{
		case 0x00000000:
			Function_208(&bVar4, "fan_pardon_letter", 5, 0);
			Function_208(&bVar4, "custom/fan_pardon_letter", 8, 0);
			Function_208(&bVar4, "receive_money", 5, 0);
			Function_208(&bVar4, "custom/receive_money", 8, 0);
			break;
		
		case 0x00000001:
			Function_208(&bVar4, "relic_handoff", 5, 0);
			Function_208(&bVar4, "custom/relic_handoff", 8, 0);
			Function_208(&bVar4, "receive_money", 5, 0);
			Function_208(&bVar4, "custom/receive_money", 8, 0);
			break;
		
		case 0x00000002:
			Function_208(&bVar4, "give_money", 5, 0);
			Function_208(&bVar4, "custom/give_money", 8, 0);
			break;
	}
	Function_207(bLocal_59);
	bVar49 = false;
	iVar50 = 0;
	iVar51 = 0;
	iVar52 = 0;
	if (Global_3382 == 1)
	{
		iVar0 = 5;
	}
	iVar54 = 0;
	bVar55 = false;
	while (!IS_EXITFLAG_SET())
	{
		Function_206();
		bVar53 = 600;
		if (bLocal_27 == 0)
		{
			if (Function_205(&bVar55, &iVar0, &iVar54, &bVar53, bVar49))
			{
				if (bVar55)
				{
					Function_204(&bVar2);
				}
				else
				{
					if (iVar45 >= 0)
					{
						iVar0 = 6;
						bVar53 = false;
					}
					Function_203(&bVar2);
				}
			}
		}
		switch (iVar0)
		{
			case 0x00000000:
				if (Function_198(&bVar4))
				{
					iVar0 = 1;
				}
				break;
			
			case 0x00000001:
				if (Function_158(&ScriptParam_0, &bVar53, &iVar52, &iVar51, 1))
				{
					iVar0 = 2;
					bVar53 = false;
				}
				else if (iVar51 == 1)
				{
					iVar0 = 5;
					bVar53 = false;
				}
				break;
			
			case 0x00000002:
				if (!Function_152(ScriptParam_0.f_56, 0, &iVar50, &bLocal_84, 0, 1, 1, 1))
				{
					iVar0 = 5;
					break;
				}
				if (VDIST(Global_34574, *(&ScriptParam_0 + 8)) > Function_151())
				{
					PRINTVECTOR(*(&ScriptParam_0 + 8));
					PRINTNL();
					PRINTVECTOR(Global_34574);
					PRINTNL();
					iVar0 = 5;
					bVar53 = false;
					break;
				}
				else
				{
					bVar2 = CREATE_ACTOR_IN_LAYOUT(bVar1, Function_217(), bLocal_59, *(&ScriptParam_0 + 8), *(&ScriptParam_0 + 20));
					SET_ACTOR_ALLOW_BUMP_REACTIONS(bVar2, 0);
					Function_150(bVar2);
					SET_ACTOR_CAN_PLAY_GESTURES(bVar2, false);
					switch (bLocal_58)
					{
						case 0x00000001:
						case 0x00000002:
							TOGGLE_ACTOR_ACTION_SIGNAL_ON(bVar2, 8, "FASTWALK");
							break;
					}
					Function_149(bVar1);
					Function_147(4);
					iVar42 = 1;
					AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar2, 0);
					UNK_0x99AFD2D1(bVar2, 1, 1);
					SET_ACTOR_CAN_PLAY_GESTURES(bVar2, false);
					Function_146(bVar1, uVar47);
					iVar0 = 3;
					bVar53 = false;
				}
				break;
			
			case 0x00000003:
				Function_145();
				Function_131(StackVal, StackVal, Function_145(), &bVar49, ScriptParam_0.f_56, bVar2, 100, 0x42a00000, 1);
				if (!Function_152(ScriptParam_0.f_56, bVar2, &iVar50, &bLocal_84, 0, 1, 1, 1))
				{
					iVar0 = 5;
					bVar53 = false;
					break;
				}
				if (Function_128(bVar2, &iVar43, &fVar48, 0, 0, 0x40400000))
				{
					SET_ACTOR_CUTSCENE_MODE(bVar2, 0);
					switch (iVar43)
					{
						case 0x00000001:
							Function_127(bVar2);
							bLocal_37 = true;
							TASK_FLEE_ACTOR(bVar2, Global_34573, -1.0f, -1.0f, 0, 0, 0);
							break;
						
						case 0x00000002:
							Function_127(bVar2);
							bLocal_37 = true;
							TASK_FLEE_ACTOR(bVar2, Global_34573, -1.0f, -1.0f, 0, 0, 0);
							Function_123(4294967196, 1, 0);
							break;
						
						case 0x00000004:
							Function_127(bVar2);
							bLocal_37 = true;
							TASK_FLEE_ACTOR(bVar2, Global_34573, -1.0f, -1.0f, 0, 0, 0);
							Function_123(4294967196, 1, 0);
							break;
						
						case 0x00000008:
							bLocal_37 = true;
							Function_127(bVar2);
							Function_123(4294967196, 1, 0);
							TASK_FLEE_ACTOR(bVar2, Global_34573, -1.0f, -1.0f, 0, 0, 0);
							break;
						
						case 0x00000010:
							Function_127(bVar2);
							bLocal_37 = true;
							TASK_FLEE_ACTOR(bVar2, Global_34573, -1.0f, -1.0f, 0, 0, 0);
							break;
					}
					iVar0 = 5;
					bVar53 = false;
					break;
				}
				if (Function_121(bVar2, 0))
				{
					if (Function_120(Global_34573, bVar2) < Function_118(1))
					{
						iVar0 = 5;
						bVar53 = false;
						break;
					}
				}
				if (Function_18(&iVar45, bVar2, bVar1, &bVar53, uVar47))
				{
					iVar0 = 5;
					bVar53 = false;
				}
				break;
			
			case 0x00000005:
				iVar0 = 6;
				bVar53 = false;
				break;
			
			case 0x00000006:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				bVar53 = false;
				break;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(bVar53);
		}
	}
	Function_203(&bVar2);
	Function_17(bLocal_59);
	if (iVar42 == 1)
	{
		Function_15(4);
	}
	if (!bVar49)
	{
		Function_14(&bVar2);
		if (IS_OBJECT_VALID(bVar1))
		{
			UNK_0xA936E73B(bVar1, 1);
			MARK_OBJECT_FOR_AGGRESSIVE_CLEANUP(bVar1, 1);
		}
	}
	if (ScriptParam_0.f_32)
	{
		Global_3399 = 0;
	}
	if (!bVar49)
	{
		Function_8(ScriptParam_0.f_56, 0.0f, 0, 1, 0);
	}
	Function_6(bVar2);
	if (Function_121(bVar2, 0) && !bLocal_37)
	{
		TASK_CLEAR(bVar2);
		if (bLocal_84)
		{
			TASK_FLEE_ACTOR(bVar2, Global_34573, 200.0f, -1.0f, 0, 0, 0);
		}
		else
		{
			TASK_WANDER(bVar2, -1.0f);
		}
		SET_ACTOR_CUTSCENE_MODE(bVar2, 0);
		TASK_PRIORITY_SET(bVar2, 2);
		Function_5(bVar2);
	}
	if (IS_ACTOR_VALID(bVar2))
	{
		AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar2, 1);
		UNK_0x99AFD2D1(bVar2, 0, 0);
	}
	REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_56);
	REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_56);
	if (IS_VOLUME_VALID(bLocal_56))
	{
		DESTROY_VOLUME(bLocal_56);
	}
	if (IS_VOLUME_VALID(bLocal_31))
	{
		DESTROY_VOLUME(bLocal_31);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_30))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_30);
	}
	Function_1(&bVar4);
	RELEASE_LAYOUT_REF(bVar1);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x766 / 1894
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

void Function_2(var uParam0, int iParam1) //Position: 0x78C / 1932
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

void Function_3(var uParam0, int iParam1) //Position: 0x8BA / 2234
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_4(var uParam0, int iParam1) //Position: 0x8D4 / 2260
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(bool bParam0) //Position: 0x8F1 / 2289
{
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_ACTOR_CAN_BE_HARDLOCKED(bParam0, 1);
		AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bParam0, 0);
	}
	return;
}

int Function_6(bool bParam0) //Position: 0x90B / 2315
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_7(bParam0);
		return 1;
	}
	return 0;
}

void Function_7(bool bParam0) //Position: 0x921 / 2337
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

bool Function_8(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x94D / 2381
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

void Function_9(bool bParam0) //Position: 0xBAA / 2986
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

void Function_10(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0xBF0 / 3056
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

struct<16> Function_11(int iParam0) //Position: 0xC67 / 3175
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

bool Function_12() //Position: 0xCA6 / 3238
{
	if (Function_13(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_13(int iParam0, int iParam1) //Position: 0xCC1 / 3265
{
	return (iParam0 && iParam1) == 0;
}

void Function_14(int iParam0) //Position: 0xCCE / 3278
{
	if (IS_ACTOR_VALID(*iParam0))
	{
		RESET_ANIM_SET_FOR_ACTOR(*iParam0, 0);
		TASK_FLEE_ACTOR(*iParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
		TASK_PRIORITY_SET(*iParam0, 0);
	}
	return;
}

void Function_15(int iParam0) //Position: 0xCF9 / 3321
{
	Function_16(&Global_28842, iParam0);
	return;
}

void Function_16(var uParam0, int iParam1) //Position: 0xD07 / 3335
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_17(bool bParam0) //Position: 0xD22 / 3362
{
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(bParam0);
	return;
}

bool Function_18(var uParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0xD2D / 3373
{
	switch (*uParam0)
	{
		case 0x00000000:
			if (Function_117(&bParam1, &Global_34573, &iLocal_88, bParam2, 50.0f, &bLocal_86, uLocal_85, &uLocal_81, &iLocal_80, 12.0f, 1, 1, -3.0f, 0, 0, 0))
			{
				if (bLocal_86)
				{
					ADD_BLIP_FOR_ACTOR(bParam1, 325, 0.0f, 3, 0);
					SET_ACTOR_CUTSCENE_MODE(bParam1, 1);
					AI_GOAL_LOOK_AT_ACTOR(bParam1, Global_34573, 1, 1065353216, 3212836864, 3212836864, 0);
					TASK_FACE_ACTOR(bParam1, Global_34573, 1, 3212836864);
					switch (bLocal_58)
					{
						case 0x00000000:
							Function_116(bParam1, Global_34573, "highHonorFanMsg01", 0, 5, 60, 1, 1);
							Function_115(40);
							break;
						
						case 0x00000001:
						case 0x00000002:
							Function_116(bParam1, Global_34573, "highHonorDonationMsg01", "highHonorDonationMsg01", 5, 60, 1, 1);
							Function_115(40);
							break;
					}
					Function_215(&uLocal_81, 0.0f);
					*uParam0 = 1;
				}
			}
			else
			{
				TASK_WANDER(bParam1, -1.0f);
				return 1;
			}
			break;
		
		case 0x00000001:
			if (!IS_AMBIENT_SPEECH_PLAYING(bParam1) || Function_111(&uLocal_81, 4.5f))
			{
				if (Function_120(Global_34573, bParam1) > 30.0f)
				{
					switch (bLocal_58)
					{
						case 0x00000000:
							Function_116(bParam1, Global_34573, "highHonorFanMsg02", "highHonorFanMsg02", 5, 60, 1, 1);
							break;
						
						case 0x00000001:
						case 0x00000002:
							Function_116(bParam1, Global_34573, "highHonorDonationMsg02", "highHonorDonationMsg02", 5, 60, 1, 1);
							break;
					}
					Function_215(&uLocal_81, 0.0f);
					*uParam0 = 2;
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 0x00000002:
			if (!IS_AMBIENT_SPEECH_PLAYING(bParam1) || Function_111(&uLocal_81, 7.0f))
			{
				if (Function_120(Global_34573, bParam1) > 30.0f)
				{
					switch (bLocal_58)
					{
						case 0x00000000:
							*uParam0 = 3;
							break;
						
						case 0x00000001:
							Function_116(bParam1, Global_34573, "highHonorDonationMsg03", "highHonorDonationMsg03", 5, 60, 1, 1);
							*uParam0 = 3;
							break;
						
						case 0x00000002:
							Function_116(bParam1, Global_34573, "highHonorDonationMsg04", "highHonorDonationMsg04", 5, 60, 1, 1);
							bLocal_87 = true;
							*uParam0 = 3;
							break;
					}
					Function_215(&uLocal_81, 0.0f);
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 0x00000003:
			if (!FIRE_IS_ACTOR_ON_FIRE(bParam1))
			{
				if (!IS_ACTOR_HOGTIED(bParam1))
				{
					if (Function_109())
					{
						if (Function_120(Global_34573, bParam1) > 30.0f)
						{
							Function_146(bParam2, bParam4);
							if (!IS_AMBIENT_SPEECH_PLAYING(bParam1) || Function_111(&uLocal_81, 4.0f))
							{
								ATTACH_OBJECTS(GET_OBJECT_FROM_VOLUME(bLocal_31), bParam1, Function_217(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
								switch (bLocal_58)
								{
									case 0x00000000:
										Function_108("highHonorDonationHelp02", 0x41200000, 1, 0, 2, 1, 0);
										break;
									
									case 0x00000001:
										Function_108("highHonorDonationHelp02", 0x41200000, 1, 0, 2, 1, 0);
										break;
									
									case 0x00000002:
										Function_108("highHonorDonationHelp", 0x41200000, 1, 0, 2, 1, 0);
										break;
								}
								fLocal_89 = Function_120(Global_34573, bParam1);
								Function_215(&uLocal_24, 0.0f);
								*uParam0 = 4;
							}
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			if (!FIRE_IS_ACTOR_ON_FIRE(bParam1))
			{
				if (!IS_ACTOR_HOGTIED(bParam1))
				{
					if (Function_109())
					{
						switch (bLocal_58)
						{
							case 0x00000000:
								if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_30))
								{
									if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(bLocal_30))
									{
										HUD_CLEAR_HELP();
										DESTROY_VOLUME(bLocal_31);
										TASK_STAND_STILL(bParam1, -1.0f, 0, 0);
										*uParam3 = 0;
										*uParam0 = 5;
									}
								}
								break;
							
							case 0x00000001:
								if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_30))
								{
									if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(bLocal_30))
									{
										HUD_CLEAR_HELP();
										DESTROY_VOLUME(bLocal_31);
										TASK_STAND_STILL(bParam1, -1.0f, 0, 0);
										*uParam3 = 0;
										*uParam0 = 5;
									}
								}
								break;
							
							case 0x00000002:
								if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_30))
								{
									if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(bLocal_30))
									{
										if (Function_107() <= bParam4)
										{
											HUD_CLEAR_HELP();
											DESTROY_VOLUME(bLocal_31);
											Function_116(Global_34573, bParam1, "HonorDonationPlayerMsg03", "HonorDonationPlayerMsg03", 5, 60, 1, 1);
											iLocal_90 = 0;
											if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_30))
											{
												RELEASE_SCRIPT_USE_CONTEXT(bLocal_30);
											}
											*uParam0 = 6;
										}
										else
										{
											HUD_CLEAR_HELP();
											DESTROY_VOLUME(bLocal_31);
											TASK_STAND_STILL(bParam1, -1.0f, 0, 0);
											*uParam3 = 0;
											*uParam0 = 5;
										}
									}
								}
								break;
						}
					}
					else
					{
						*uParam0 = 3;
						if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_30))
						{
							RELEASE_SCRIPT_USE_CONTEXT(bLocal_30);
						}
					}
				}
				else
				{
					*uParam0 = 3;
					if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_30))
					{
						RELEASE_SCRIPT_USE_CONTEXT(bLocal_30);
					}
				}
			}
			else
			{
				*uParam0 = 3;
				if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_30))
				{
					RELEASE_SCRIPT_USE_CONTEXT(bLocal_30);
				}
			}
			if (Function_120(Global_34573, bParam1) < (fLocal_89 + 10.0f) || Function_111(&uLocal_24, 15.0f))
			{
				iLocal_90 = 1;
				HUD_CLEAR_HELP();
				DESTROY_VOLUME(bLocal_31);
				switch (bLocal_58)
				{
					case 0x00000000:
						break;
					
					case 0x00000001:
						Function_116(Global_34573, bParam1, "HonorDonationPlayerMsg02", "HonorDonationPlayerMsg02", 5, 60, 1, 1);
						break;
					
					case 0x00000002:
						Function_116(Global_34573, bParam1, "HonorDonationPlayerMsg02", "HonorDonationPlayerMsg02", 5, 60, 1, 1);
						break;
				}
				*uParam0 = 6;
			}
			break;
		
		case 0x00000005:
			*uParam3 = 0;
			if (!FIRE_IS_ACTOR_ON_FIRE(bParam1))
			{
				if (!IS_ACTOR_HOGTIED(bParam1))
				{
					if (Function_109())
					{
						if (Function_42(bParam1, Global_34573, bParam2, &iLocal_79, &iLocal_72, uParam3, uLocal_85))
						{
							if (iLocal_79 == 1)
							{
								switch (bLocal_58)
								{
									case 0x00000000:
										if (bLocal_36 == 1)
										{
											Function_41(9, 0, 1);
										}
										else
										{
											Function_38(bParam4, 1);
										}
										break;
									
									case 0x00000001:
										if (!Function_35(67))
										{
											Function_41(67, 1, 1);
										}
										else
										{
											Function_38(bParam4, 1);
										}
										break;
									
									case 0x00000002:
										Function_34(bParam1, bParam4);
										Function_19(bParam4, 1);
										break;
								}
								return 1;
							}
						}
						return 1;
					}
					*uParam0 = 3;
					if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_30))
					{
						RELEASE_SCRIPT_USE_CONTEXT(bLocal_30);
					}
				}
				else
				{
					*uParam0 = 3;
					if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_30))
					{
						RELEASE_SCRIPT_USE_CONTEXT(bLocal_30);
					}
				}
			}
			else
			{
				*uParam0 = 3;
				if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_30))
				{
					RELEASE_SCRIPT_USE_CONTEXT(bLocal_30);
				}
			}
			break;
		
		case 0x00000006:
			if (bLocal_87)
			{
				if (!IS_AMBIENT_SPEECH_PLAYING(Global_34573))
				{
					if (!IS_AMBIENT_SPEECH_PLAYING(bParam1))
					{
						if (iLocal_90 == 1)
						{
							Function_123(4294967276, 1, 0);
							Function_116(bParam1, Global_34573, "highHonorDonationMsg06", "highHonorDonationMsg06", 5, 60, 1, 1);
						}
						else
						{
							Function_116(bParam1, Global_34573, "highHonorDonationMsg07", "highHonorDonationMsg07", 5, 60, 1, 1);
						}
						return 1;
					}
				}
			}
			return 1;
			break;
	}
	return 0;
}

int Function_19(bool bParam0, bool bParam1) //Position: 0x14EC / 5356
{
	bool bVar0;
	
	bVar0 = Function_33(0);
	if ((Function_33(0) - bParam0) <= 0)
	{
		bParam0 = bVar0;
	}
	if (bParam0 >= 0)
	{
		Function_20(0, bParam0, 0);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, (bParam0 * 4294967295), 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_33(0));
	return 1;
}

int Function_20(int iParam0, bool bParam1, bool bParam2) //Position: 0x157C / 5500
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_DECREASE_INT_NOW: You cannot decrease this STAT_TYPE_LIFETIME: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_DECREASE_INT_NOW: You cannot decrease a STAT_TYPE_LIFETIME!");
		return 0;
	}
	if (Global_35278[iParam020].f_48 != 2 && Global_34581[iParam0] >= 0.0f)
	{
		Global_34581[iParam0] = 0.0f;
		return 1;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: iDecreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] - TO_FLOAT(bParam1));
	Function_32(iParam0);
	if (bParam2 && bParam1 == 0)
	{
		Function_21(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			REMOVE_COLLECTABLE(&(Global_35278[iParam020]), Global_34573);
			iVar1++;
		}
	}
	return 1;
}

void Function_21(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x1777 / 6007
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_31(390))), 32);
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
					bVar19 = (Function_30(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_30(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_28(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_25(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_23(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_22(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_217(), &Var9);
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

var Function_22(int iParam0) //Position: 0x1DA4 / 7588
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_23(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1DB5 / 7605
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_24(char* cParam0, bool bParam1) //Position: 0x1EAA / 7850
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_25(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1EC3 / 7875
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_27(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_26(Function_27(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_26(int iParam0, int iParam1) //Position: 0x1F28 / 7976
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_27(int iParam0, bool bParam1) //Position: 0x1F3A / 7994
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_28(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1F4C / 8012
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
	if (((Function_29(iParam0) != 19 || Function_29(iParam0) != 17) || Function_29(iParam0) != 10) || Function_29(iParam0) != 9)
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

int Function_29(int iParam0) //Position: 0x207C / 8316
{
	return Global_35278[iParam020].f_48;
}

float Function_30(int iParam0) //Position: 0x208B / 8331
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_31(int iParam0) //Position: 0x20C4 / 8388
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_32(int iParam0) //Position: 0x2101 / 8449
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

int Function_33(int iParam0) //Position: 0x229B / 8859
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

void Function_34(bool bParam0, bool bParam1) //Position: 0x22DC / 8924
{
	bool bVar0;
	
	if (DECOR_CHECK_EXIST(bParam0, "iAdditionalMoney"))
	{
		bVar0 = DECOR_GET_INT(bParam0, "iAdditionalMoney");
		bVar0 = (bVar0 + bParam1);
		DECOR_SET_INT(bParam0, "iAdditionalMoney", bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, "iAdditionalMoney", bParam1);
	}
	return;
}

bool Function_35(bool bParam0) //Position: 0x2357 / 9047
{
	if (GET_ITEM_COUNT(Function_37(bParam0), Function_36()) >= 0)
	{
		return 1;
	}
	return 0;
}

var Function_36() //Position: 0x236F / 9071
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

var Function_37(bool bParam0) //Position: 0x2384 / 9092
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

int Function_38(bool bParam0, bool bParam1) //Position: 0x2475 / 9333
{
	bool bVar0;
	
	bVar0 = Function_33(0);
	if ((Function_33(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_39(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_33(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_39(597, bParam0, 0, 0);
	}
	if ((Function_33(597) + Function_33(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

int Function_39(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x2540 / 9536
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
	Function_40(iParam0, TO_FLOAT(bParam1), 1);
	Function_32(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_21(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

int Function_40(int iParam0, bool bParam1, bool bParam2) //Position: 0x2760 / 10080
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
			Global_34581[iVar1] = (Global_34581[iVar1] + bParam1);
		}
	}
	else
	{
		Global_34581[iVar1] = bParam1;
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

int Function_41(bool bParam0, bool bParam1, int iParam2) //Position: 0x29A4 / 10660
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (bParam1)
	{
		if (GET_ITEM_COUNT(Function_37(bParam0), Function_36()) == 0)
		{
			ADD_ITEM(Function_37(bParam0), Function_36(), iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_37(bParam0), Function_36(), iParam2);
	return 1;
}

bool Function_42(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4, int iParam5, bool bParam6) //Position: 0x29EF / 10735
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	vector3 vVar8;
	float fVar11;
	
	vVar1 = { 0.0f, 0.0f, 0.0f };
	iVar7 = 30;
	fVar11 = 10.0f;
	if (*uParam4 <= 0 && *uParam4 > 5)
	{
		if (Function_120(bParam0, bParam1) < IntToFloat(iVar7))
		{
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			return 0;
		}
	}
	if (*uParam4 <= 0 && *uParam4 >= 5)
	{
		if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
		{
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			return 0;
		}
	}
	switch (*uParam4)
	{
		case 0x00000000:
			MEMORY_CLEAR_EVENTS(bParam0, 0);
			ACTOR_START_FORCE_HOLSTER(bParam0, 1, 0);
			MEMORY_SET_WEAPON_DRAW_PREFERENCE(bParam0, 1);
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bParam0, 1);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
			*uParam4 = 1;
			break;
		
		case 0x00000001:
			*iParam5 = 0;
			vVar4 = { fLocal_76, 0.0f, fLocal_76 };
			GET_OBJECT_RELATIVE_POSITION(GET_OBJECT_FROM_ACTOR(Global_34573), vVar4, &vVar8);
			if (Function_106(StackVal, StackVal, vVar8, &vLocal_73, 9.9f, 0.5f, fLocal_77, 4.0f))
			{
				if (IS_ACTOR_RIDING(Global_34573))
				{
					bVar0 = GET_MOUNT(Global_34573);
					if (!IS_AREA_OBSTRUCTED2(Vector(vLocal_73, StackVal, StackVal) + Vector(0.0f, 3.5f, 0.0f), 3.0f, GET_PHYSINST_FROM_ACTOR(bParam0), GET_PHYSINST_FROM_ACTOR(bVar0), 0))
					{
						*uParam4 = 2;
					}
					else if (fLocal_77 < (fLocal_78 + 16.0f))
					{
						*uParam4 = 8;
					}
					else
					{
						fLocal_77 = (fLocal_77 + 4.0f);
					}
				}
				else if (!IS_AREA_OBSTRUCTED(Vector(vLocal_73, StackVal, StackVal) + Vector(0.0f, 3.5f, 0.0f), 3.0f, bParam0, 0))
				{
					*uParam4 = 2;
				}
				else if (fLocal_77 < (fLocal_78 + 16.0f))
				{
					*uParam4 = 8;
				}
				else
				{
					fLocal_77 = (fLocal_77 + 4.0f);
				}
			}
			else
			{
				fLocal_78 = fLocal_77;
				if (fLocal_77 < 16.0f)
				{
					*uParam4 = 8;
				}
				else
				{
					fLocal_77 = (fLocal_77 + 4.0f);
				}
			}
			break;
		
		case 0x00000002:
			switch (bLocal_58)
			{
				case 0x00000000:
					if (bLocal_36)
					{
						bLocal_28 = CREATE_GRINGO_IN_LAYOUT(bParam2, Function_217(), "$/content/scripting/gringo/SimpleGringo/fan_pardon_letter_link", vLocal_73, vVar1);
					}
					else
					{
						bLocal_28 = CREATE_GRINGO_IN_LAYOUT(bParam2, Function_217(), "$/content/scripting/gringo/SimpleGringo/receive_money", vLocal_73, vVar1);
					}
					break;
				
				case 0x00000001:
					if (!Function_35(67))
					{
						bLocal_28 = CREATE_GRINGO_IN_LAYOUT(bParam2, Function_217(), "$/content/scripting/gringo/SimpleGringo/relic_handoff", vLocal_73, vVar1);
					}
					else
					{
						bLocal_28 = CREATE_GRINGO_IN_LAYOUT(bParam2, Function_217(), "$/content/scripting/gringo/SimpleGringo/receive_money", vLocal_73, vVar1);
					}
					break;
				
				case 0x00000002:
					bLocal_28 = CREATE_GRINGO_IN_LAYOUT(bParam2, Function_217(), "$/content/scripting/gringo/SimpleGringo/give_money", vLocal_73, vVar1);
					break;
			}
			Function_105();
			SNAP_OBJECT_TO_GROUND(bLocal_28, 0.5f, false, 1092616192);
			*uParam4 = 5;
			break;
		
		case 0x00000005:
			*iParam5 = 0;
			if (IS_ACTOR_ALIVE(bParam0))
			{
				if (!FIRE_IS_ACTOR_ON_FIRE(bParam0))
				{
					if (!IS_ACTOR_HOGTIED(bParam0))
					{
						if (Function_109())
						{
							if (Function_54(&iLocal_71, bParam0, bParam2))
							{
								SET_PLAYER_CONTROL(0, 1, 0, 0);
								*uParam4 = 6;
							}
						}
					}
				}
			}
			else
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				*uParam4 = 9;
			}
			break;
		
		case 0x00000006:
			*uParam4 = 7;
			break;
		
		case 0x00000007:
			*uParam4 = 9;
			break;
		
		case 0x00000008:
			switch (bLocal_58)
			{
				case 0x00000000:
					if (Function_43(&bParam0, &Global_34573, &fVar11, &bLocal_32, &uLocal_21, bParam2, 35.0f, bParam3, bParam6, iParam5, "nthank_you", "nthank_you", "highHonorFanMsg03", "highHonorFanMsg03", 30.0f, 1, -5.0f, 0, 4.0f, 0, "", 0, 0, 0, 0x40800000))
					{
						if (*bParam3 == 1)
						{
							SAY_SINGLE_LINE_CONTEXT(Global_34573, 366, bParam0, 1, 0, 0, 4294967295, 4294967295, 0, 1);
							*uParam4 = 9;
						}
					}
					else
					{
						*uParam4 = 9;
					}
					break;
				
				case 0x00000001:
					if (Function_43(&bParam0, &Global_34573, &fVar11, &bLocal_32, &uLocal_21, bParam2, 35.0f, bParam3, bParam6, iParam5, "nthank_you", "nthank_you", "", "", 30.0f, 1, -5.0f, 0, 4.0f, 0, "", 0, 0, 0, 0x40800000))
					{
						if (*bParam3 == 1)
						{
							SAY_SINGLE_LINE_CONTEXT(Global_34573, 366, bParam0, 1, 0, 0, 4294967295, 4294967295, 0, 1);
							*uParam4 = 9;
						}
					}
					else
					{
						*uParam4 = 9;
					}
					break;
				
				case 0x00000002:
					if (Function_43(&bParam0, &Global_34573, &fVar11, &bLocal_32, &uLocal_21, bParam2, 35.0f, bParam3, bParam6, iParam5, "nthank_you", "nthank_you", "highHonorDonationMsg05", "highHonorDonationMsg05", 30.0f, 1, -5.0f, 0, 4.0f, 0, "HonorDonationPlayerMsg01", 0, 1, 0, 0x40800000))
					{
						if (*bParam3 == 1)
						{
							*uParam4 = 9;
						}
					}
					else
					{
						*uParam4 = 9;
					}
					break;
			}
			break;
		
		case 0x00000009:
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			*bParam3 = 1;
			return 1;
			break;
	}
	return 1;
}

bool Function_43(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, float fParam6, float fParam7, bool bParam8, var uParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, int iParam15, float fParam16, bool bParam17, int iParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, int iParam23, float fParam24) //Position: 0x2FBB / 12219
{
	bool bVar0;
	
	*uParam9 = *uParam9;
	iParam18 = iParam18;
	bParam17 = bParam17;
	if (!IS_ACTOR_VALID(*uParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(*uParam1))
	{
		return 0;
	}
	if (GET_LAST_ATTACKER(*uParam0) == Global_34573)
	{
		TASK_FLEE_ACTOR(*uParam0, Global_34573, 150.0f, -1.0f, 0, 0, 0);
		return 0;
	}
	switch (*uParam3)
	{
		case 0x00000000:
			if (bParam21)
			{
				*uParam3 = 3;
			}
			else
			{
				MEMORY_CLEAR_EVENTS(*uParam0, 0);
				ACTOR_START_FORCE_HOLSTER(*uParam0, 1, 0);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(*uParam0, 1);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(*uParam0, 1);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(*uParam0, 0);
				*uParam2 = Function_120(*uParam0, Global_34573);
				AI_GOAL_LOOK_AT_ACTOR_NEW(*uParam0, *uParam1, -1.0f, 1);
				bParam8 = CREATE_POINT_IN_LAYOUT(bParam5, Function_217(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
				ATTACH_OBJECTS(bParam8, *uParam1, Function_217(), 0.0f, 0.5f, fParam16, 0.0f, 0.0f, 0.0f, 4294967295);
				if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), *uParam0, 1.0f, iParam14, 1, 1, 0) || Function_120(Global_34573, *uParam0) > 2.0f)
				{
					TASK_FOLLOW_OBJECT_AT_DISTANCE(*uParam0, bParam8, 1.0f, iParam15);
					TASK_PRIORITY_SET(*uParam0, 1);
				}
				*uParam3 = 1;
			}
			break;
		
		case 0x00000001:
			if ((Function_120(*uParam0, *uParam1) - *uParam2) < fParam6)
			{
				TASK_FLEE_ACTOR(*uParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
				return 0;
			}
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), *uParam0, 1.0f, iParam14, 1, 1, 0))
			{
				bVar0 = TASK_SEQUENCE_OPEN();
				TASK_FACE_ACTOR(false, *uParam1, 0, 3212836864);
				TASK_FACE_ACTOR(false, *uParam1, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(*uParam0, bVar0);
				TASK_SEQUENCE_RELEASE(bVar0, 1);
				TASK_PRIORITY_SET(*uParam0, 1);
				*uParam9 = 0;
				*uParam3 = 4;
			}
			else if (!Function_121(*uParam0, 0))
			{
				if (IS_ACTOR_VALID(*uParam0))
				{
					TASK_FLEE_ACTOR(*uParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
				}
				return 0;
			}
			break;
		
		case 0x00000003:
			RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
			SET_ANIM_SET_FOR_ACTOR(*uParam0, bParam10, 0);
			SET_ACTION_NODE_FOR_ACTOR(*uParam0, bParam11);
			TASK_FACE_ACTOR(*uParam0, *uParam1, 1, 3212836864);
			*uParam3 = 4;
			break;
		
		case 0x00000004:
			*uParam9 = 0;
			if (GET_NTH_TASK_STATUS(*uParam0, false) != 0 || bParam21)
			{
				if (!bParam21)
				{
					SET_ANIM_SET_FOR_ACTOR(*uParam0, bParam10, 1);
					SET_ACTION_NODE_FOR_ACTOR(*uParam0, bParam11);
				}
				if (bParam19)
				{
					Function_116(*uParam0, Global_34573, "nThank_You", 0, 5, 60, 1, 1);
				}
				else
				{
					Function_116(*uParam0, Global_34573, bParam12, bParam13, 5, 60, 1, 1);
				}
				*uParam3 = 5;
				Function_215(uParam4, 0.0f);
			}
			else if (!Function_121(*uParam0, 0))
			{
				return 0;
			}
			break;
		
		case 0x00000005:
			if (iParam23 && !Function_53(*uParam0))
			{
				if (fParam24 != -1.0f)
				{
					if (!IS_AMBIENT_SPEECH_PLAYING(*uParam0))
					{
						RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
						Function_44(*uParam0, 4, 0, 1);
					}
				}
				else if (Function_111(uParam4, fParam24))
				{
					RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
					Function_44(*uParam0, 4, 0, 1);
				}
			}
			if (bParam22)
			{
				if (!IS_AMBIENT_SPEECH_PLAYING(*uParam0))
				{
					if (!IS_AMBIENT_SPEECH_PLAYING(Global_34573))
					{
						if (!IS_STRING_VALID(bParam20))
						{
							SAY_SINGLE_LINE_CONTEXT(Global_34573, 409, *uParam0, 0, 0, 5, 4294967295, 4294967295, 0, 1);
						}
						else
						{
							Function_116(Global_34573, *uParam0, bParam20, bParam20, 5, 60, 1, 1);
						}
						*uParam3 = 6;
					}
				}
			}
			else if (!IS_AMBIENT_SPEECH_PLAYING(*uParam0))
			{
				*uParam3 = 6;
			}
			break;
		
		case 0x00000006:
			if (iParam23 && !Function_53(*uParam0))
			{
				if (Function_111(uParam4, fParam24))
				{
					RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
					Function_44(*uParam0, 4, 0, 1);
				}
			}
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(*uParam0, bParam11) && !IS_AMBIENT_SPEECH_PLAYING(Global_34573))
			{
				RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
				*fParam7 = 1;
				if (bParam17)
				{
					Function_44(*uParam0, 4, 0, iParam15);
					TASK_PRIORITY_SET(*uParam0, 2);
				}
				AI_GOAL_LOOK_CLEAR(*uParam0);
				ACTOR_END_FORCE_HOLSTER(*uParam0);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(*uParam0, 4294967295);
				return 1;
			}
			break;
	}
	return 1;
}

int Function_44(bool bParam0, int iParam1, int iParam2, int iParam3) //Position: 0x3361 / 13153
{
	bool bVar0;
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
			bVar0 = false;
			while (bVar0 < (GET_NUM_DRAFT_POSITIONS(bParam0) - 1))
			{
				bVar1 = GET_DRAFT_ACTOR(bVar0, bParam0);
				if (IS_ACTOR_VALID(bVar1))
				{
					Function_45(bVar1, 0, 0, 0, 1);
				}
				bVar0++;
			}
		}
		Function_45(bParam0, iParam1, iParam2, iParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_45(bool bParam0, int iParam1, var uParam2, var uParam3, int iParam4) //Position: 0x3441 / 13377
{
	char* cVar0[32];
	
	Function_52();
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
	if (Function_51(bParam0) == 1)
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
	Function_50(bParam0, 0);
	Function_49(bParam0, iParam1);
	Function_48(bParam0, uParam2);
	Function_47(bParam0, uParam3);
	if (Function_46(bParam0) != 5)
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

int Function_46(bool bParam0) //Position: 0x368F / 13967
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior");
}

void Function_47(bool bParam0, bool bParam1) //Position: 0x36B2 / 14002
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_48(bool bParam0, bool bParam1) //Position: 0x36D5 / 14037
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_target", bParam1);
	return;
}

void Function_49(bool bParam0, bool bParam1) //Position: 0x36F9 / 14073
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_50(bool bParam0, bool bParam1) //Position: 0x371F / 14111
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_state", bParam1);
	return;
}

int Function_51(bool bParam0) //Position: 0x3742 / 14146
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
}

void Function_52() //Position: 0x3760 / 14176
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

bool Function_53(bool bParam0) //Position: 0x37AA / 14250
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516))
	{
		return 1;
	}
	return 0;
}

bool Function_54(var uParam0, bool bParam1, int iParam2) //Position: 0x37CF / 14287
{
	if (IS_ACTOR_VALID(bParam1))
	{
		if (!IS_ACTOR_ALIVE(bParam1))
		{
			if (iLocal_71 >= 1)
			{
				SET_MOVER_FROZEN(Global_34573, 0);
				SET_MOVER_FROZEN(bParam1, 0);
				Function_101(&bLocal_69, &bLocal_27);
				ACTOR_END_FORCE_HOLSTER(Global_34573);
				return 1;
			}
		}
	}
	switch (*uParam0)
	{
		case 0x00000000:
			if (IS_ACTOR_RIDING(Global_34573))
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				Function_99(Global_34573, 0);
				TASK_DISMOUNT(Global_34573, 1);
				Function_215(&uLocal_21, 0.0f);
			}
			*uParam0 = 1;
			break;
		
		case 0x00000001:
			if (Function_111(&uLocal_21, 1.0f))
			{
				ACTOR_START_FORCE_HOLSTER(Global_34573, 1, 0);
				RESET_ANIM_SET_FOR_ACTOR(bParam1, 0);
				RESET_ANIM_SET_FOR_ACTOR(Global_34573, 0);
				Function_215(&uLocal_21, 0.0f);
				SET_MOVER_FROZEN(Global_34573, 1);
				SET_MOVER_FROZEN(bParam1, 1);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(Global_34573, 1);
				Function_96(bParam1, Global_34573);
				Function_95(bParam1, 0);
				Function_72(50, 1, 0);
				GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bLocal_28), true);
				if (IS_ACTOR_RIDING(Global_34573))
				{
					bLocal_29 = GET_MOUNT(Global_34573);
				}
				if (IS_ACTOR_VALID(bLocal_29))
				{
					GET_OBJECT_RELATIVE_POSITION(bLocal_29, -7.0f, 0.0f, 0.0f, &vLocal_33);
				}
				else
				{
					Function_71(Global_34573);
					vLocal_33 = { StackVal, StackVal, Function_71(Global_34573) };
					vLocal_33 = { StackVal, StackVal, Vector(vLocal_33, StackVal, StackVal) + Vector(0.0f, 0.0f, 6.0f) };
				}
				Function_68(StackVal, StackVal, vLocal_33);
				SNAP_OBJECT_TO_GROUND(bLocal_28, 2.0f, false, 1092616192);
				switch (bLocal_58)
				{
					case 0x00000000:
						if (bLocal_36 == 1)
						{
							SNAP_ACTOR_TO_GRINGO(bParam1, bLocal_28, "UseCase1", 0, 0, 0);
							SNAP_ACTOR_TO_GRINGO(Global_34573, bLocal_28, "nplayerUse", 0, 0, 0);
						}
						else
						{
							SNAP_ACTOR_TO_GRINGO(bParam1, bLocal_28, "UseCase1", 0, 0, 0);
							SNAP_ACTOR_TO_GRINGO(Global_34573, bLocal_28, "handoff", 0, 0, 0);
						}
						break;
					
					case 0x00000001:
						SNAP_ACTOR_TO_GRINGO(bParam1, bLocal_28, "UseCase1", 0, 0, 0);
						SNAP_ACTOR_TO_GRINGO(Global_34573, bLocal_28, "handoff", 0, 0, 0);
						break;
					
					case 0x00000002:
						SNAP_ACTOR_TO_GRINGO(bParam1, bLocal_28, "UseCase1", 0, 0, 0);
						SNAP_ACTOR_TO_GRINGO(Global_34573, bLocal_28, "handoff", 0, 0, 0);
						break;
				}
				Function_67(bLocal_28);
				Function_66(StackVal, StackVal, iParam2, Function_67(bLocal_28));
				SNAP_OBJECT_TO_GROUND(bLocal_28, 2.0f, false, 1092616192);
				Function_59(iParam2, &bLocal_69, &bLocal_27);
				Function_57(StackVal, StackVal, bLocal_28, bLocal_69, vLocal_38, &vLocal_41);
				switch (bLocal_58)
				{
					case 0x00000000:
						TASK_USE_GRINGO(bParam1, GET_GRINGO_FROM_OBJECT(bLocal_28), "UseCase1", 1, 1);
						break;
					
					case 0x00000001:
						TASK_USE_GRINGO(bParam1, GET_GRINGO_FROM_OBJECT(bLocal_28), "UseCase1", 1, 1);
						break;
					
					case 0x00000002:
						TASK_USE_GRINGO(bParam1, GET_GRINGO_FROM_OBJECT(bLocal_28), "UseCase1", 1, 1);
						break;
				}
				Function_215(&uLocal_21, 0.0f);
				*uParam0 = 3;
			}
			break;
		
		case 0x00000003:
			switch (bLocal_58)
			{
				case 0x00000000:
					if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(bParam1)))
					{
						if (GET_CURRENT_GRINGO(bParam1) == GET_GRINGO_FROM_OBJECT(bLocal_28))
						{
							Function_116(bParam1, Global_34573, "highHonorFanMsg03", "highHonorFanMsg03", 5, 60, 1, 1);
							if (bLocal_36 == 1)
							{
								fLocal_70 = 2.0f;
								TASK_USE_GRINGO(Global_34573, GET_GRINGO_FROM_OBJECT(bLocal_28), "nplayerUse", 1, 1);
							}
							else
							{
								fLocal_70 = 1.0f;
								TASK_USE_GRINGO(Global_34573, GET_GRINGO_FROM_OBJECT(bLocal_28), "handoff", 1, 1);
							}
							*uParam0 = 5;
						}
					}
					break;
				
				case 0x00000001:
					if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(bParam1)))
					{
						if (GET_CURRENT_GRINGO(bParam1) == GET_GRINGO_FROM_OBJECT(bLocal_28))
						{
							if (Function_35(67))
							{
								fLocal_70 = 2.75f;
								TASK_USE_GRINGO(Global_34573, GET_GRINGO_FROM_OBJECT(bLocal_28), "handoff", 1, 1);
								*uParam0 = 5;
							}
							else if (IS_ACTOR_PLAYING_NODE_IN_TREE(bParam1, "relic_handoff/give/wait") || Function_111(&uLocal_21, 4.0f))
							{
								fLocal_70 = 4.0f;
								TASK_USE_GRINGO(Global_34573, GET_GRINGO_FROM_OBJECT(bLocal_28), "handoff", 1, 1);
								*uParam0 = 5;
							}
						}
					}
					break;
				
				case 0x00000002:
					if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(bParam1)))
					{
						if (GET_CURRENT_GRINGO(bParam1) == GET_GRINGO_FROM_OBJECT(bLocal_28))
						{
							Function_116(Global_34573, bParam1, "HonorDonationPlayerMsg01", "HonorDonationPlayerMsg01", 5, 60, 1, 1);
							fLocal_70 = 4.0f;
							TASK_USE_GRINGO(Global_34573, GET_GRINGO_FROM_OBJECT(bLocal_28), "handoff", 1, 1);
							*uParam0 = 5;
						}
					}
					break;
			}
			break;
		
		case 0x00000005:
			if (Function_111(&uLocal_21, fLocal_70))
			{
				if (!IS_AMBIENT_SPEECH_PLAYING(Global_34573) || Function_111(&uLocal_21, 5.0f))
				{
					if (!IS_AMBIENT_SPEECH_PLAYING(bParam1) || Function_111(&uLocal_21, 5.0f))
					{
						switch (bLocal_58)
						{
							case 0x00000000:
								if (bLocal_36 == 1)
								{
									fLocal_70 = 2.0f;
								}
								else
								{
									fLocal_70 = 1.75f;
								}
								break;
							
							case 0x00000001:
								if (Function_35(67))
								{
									fLocal_70 = 2.0f;
								}
								else
								{
									fLocal_70 = 4.0f;
								}
								break;
							
							case 0x00000002:
								fLocal_70 = 6.0f;
								Function_116(bParam1, Global_34573, "highHonorDonationMsg05", "highHonorDonationMsg05", 5, 60, 1, 1);
								break;
						}
						Function_55(bLocal_69, &vLocal_50, &vLocal_53);
						Function_215(&uLocal_21, 0.0f);
						*uParam0 = 6;
					}
				}
			}
			break;
		
		case 0x00000006:
			Function_215(&uLocal_21, 0.0f);
			*uParam0 = 8;
			if (bLocal_58 == 0)
			{
				if (bLocal_36 == 1)
				{
					*uParam0 = 7;
				}
			}
			break;
		
		case 0x00000007:
			if (iLocal_57 == 0)
			{
				if (Function_111(&uLocal_21, (fLocal_70 - 1.0f)))
				{
					switch (bLocal_58)
					{
						case 0x00000000:
							Function_116(Global_34573, bParam1, "highHonorFanPlayerMsg01", "highHonorFanPlayerMsg01", 5, 60, 1, 1);
							break;
						
						case 0x00000001:
							SAY_SINGLE_LINE_CONTEXT(Global_34573, 366, bParam1, 1, 0, 0, 4294967295, 4294967295, 0, 1);
							break;
						
						case 0x00000002:
							break;
					}
					iLocal_57 = 1;
				}
			}
			if (Function_111(&uLocal_21, fLocal_70))
			{
				Function_55(bLocal_69, &vLocal_44, &vLocal_47);
				Function_215(&uLocal_21, 0.0f);
				*uParam0 = 8;
			}
			break;
		
		case 0x00000008:
			if (iLocal_57 == 0)
			{
				if (Function_111(&uLocal_21, (fLocal_70 - 1.0f)))
				{
					switch (bLocal_58)
					{
						case 0x00000000:
							Function_116(Global_34573, bParam1, "highHonorFanPlayerMsg01", "highHonorFanPlayerMsg01", 5, 60, 1, 1);
							break;
						
						case 0x00000001:
							SAY_SINGLE_LINE_CONTEXT(Global_34573, 366, bParam1, 1, 0, 0, 4294967295, 4294967295, 0, 1);
							break;
						
						case 0x00000002:
							break;
					}
					iLocal_57 = 1;
				}
			}
			if (Function_111(&uLocal_21, fLocal_70))
			{
				if (!IS_AMBIENT_SPEECH_PLAYING(bParam1) || Function_111(&uLocal_21, 8.0f))
				{
					if (!IS_AMBIENT_SPEECH_PLAYING(Global_34573) || Function_111(&uLocal_21, 8.0f))
					{
						GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bLocal_28), false);
						SET_MOVER_FROZEN(Global_34573, 0);
						SET_MOVER_FROZEN(bParam1, 0);
						SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_ACTOR(Global_34573), 1.0f, false, 1092616192);
						SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_ACTOR(bParam1), 1.0f, false, 1092616192);
						Function_101(&bLocal_69, &bLocal_27);
						ACTOR_END_FORCE_HOLSTER(Global_34573);
						return 1;
					}
				}
			}
			break;
	}
	return 0;
}

void Function_55(bool bParam0, var uParam1, int iParam2) //Position: 0x3EE4 / 16100
{
	float fVar0;
	vector3 vVar1;
	
	fVar0 = Function_56(Global_34573);
	GET_OBJECT_RELATIVE_POSITION(GET_OBJECT_FROM_ACTOR(Global_34573), *uParam1, &vVar1);
	SET_CAMERA_POSITION(bParam0, vVar1);
	SET_CAMERA_ORIENTATION(StackVal, StackVal, bParam0, (*iParam2 + fVar0), 0);
	return;
}

var Function_56(bool bParam0) //Position: 0x3F1F / 16159
{
	return GET_HEADING(bParam0);
}

void Function_57(bool bParam0, bool bParam1, vector3 vParam2, bool bParam5) //Position: 0x3F2A / 16170
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	Function_58(bParam0);
	vVar0 = { StackVal, StackVal, Function_58(bParam0) };
	UNK_0xF1A53C41(&vVar6, &vVar0, 1, 0);
	UNK_0xF76F2BB3(&vVar6, bParam5, 1, 4);
	GET_OBJECT_RELATIVE_POSITION(bParam0, vParam2, &vVar3);
	SET_CAMERA_POSITION(bParam1, vVar3);
	SET_CAMERA_DIRECTION(bParam1, vVar6, 1);
}

vector3 Function_58(bool bParam0) //Position: 0x3F6C / 16236
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (!IS_OBJECT_VALID(bParam0))
	{
		return StackVal, StackVal, vVar0;
	}
	GET_OBJECT_ORIENTATION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_59(bool bParam0, var uParam1, bool bParam2) //Position: 0x3F93 / 16275
{
	vector3 vVar0;
	bool bVar3;
	
	*bParam2 = 1;
	*uParam1 = CREATE_CAMERA_IN_LAYOUT(bParam0, Function_217(), 0);
	SET_ACTOR_POSTURE(Global_34573, 0);
	Function_71(Global_34573);
	vVar0 = { StackVal, StackVal, Function_71(Global_34573) };
	CLEAR_AMBIENT_OBJECTS_SPHERE(vVar0, 10.0f, 39);
	Function_145();
	bVar3 = CREATE_VOLUME_IN_LAYOUT(bParam0, Function_217(), 2, vVar0, Function_145(), 10.0f, 10.0f, 10.0f);
	DELETE_PROJECTILES_IN_VOLUME(bVar3);
	DESTROY_VOLUME(bVar3);
	Function_60(1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
	SET_CURRENT_CAMERA_ON_CHANNEL(*uParam1, 0, 0f, 0f, 0, 0, 0, 0, 0, 0);
	INIT_CAMERA_FROM_GAME_CAMERA(*uParam1);
	return;
}

void Function_60(bool bParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, var uParam10, bool bParam11) //Position: 0x4019 / 16409
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	uParam1 = uParam1;
	if (bParam6)
	{
		UI_PUSH("nCutscenes");
	}
	HUD_CLEAR_HELP();
	UI_DUMP_MESSAGE_QUEUE_TO_NOTES(1);
	HUD_ENABLE(0);
	Function_65();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(Global_34573, "iDrunk", false);
	if (bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_36();
		if (IS_ACTOR_VALID(bVar1))
		{
			if (GET_WEAPON_IN_HAND(bVar1) != 4294967295)
			{
				Global_76850 = 1;
			}
			else
			{
				Global_76850 = 0;
			}
			if (bParam3)
			{
				TASK_CLEAR(bVar1);
			}
			if (bParam11)
			{
				bVar2 = GET_ATTACHED_HOGTIE_VICTIM(bVar1);
				if (IS_ACTOR_VALID(bVar2))
				{
					FREE_FROM_HOGTIE(bVar2);
					HOGTIE_ACTOR(bVar2);
				}
			}
			if (Function_64())
			{
				if (!(IS_ACTOR_ON_LADDER(bVar1) || IS_ACTOR_USING_LEDGE(bVar1)))
				{
					if (bParam0)
					{
						ACTOR_START_FORCE_HOLSTER(bVar1, 0, 0);
					}
					if (bParam2)
					{
						SET_PLAYER_POSTURE(0, 0, 0);
						TASK_OVERRIDE_SET_POSTURE(bVar1, 0);
					}
				}
			}
			else
			{
				if (bParam0)
				{
					ACTOR_START_FORCE_HOLSTER(bVar1, 0, 0);
				}
				if (bParam2)
				{
					SET_PLAYER_POSTURE(0, 0, 0);
					TASK_OVERRIDE_SET_POSTURE(bVar1, 0);
				}
			}
			SET_ACTOR_HEALTH(bVar1, GET_ACTOR_MAX_HEALTH(bVar1));
			SET_ACTOR_INVULNERABILITY(bVar1, 1);
			AI_IGNORE_ACTOR(bVar1);
		}
		SET_PLAYER_CONTROL(0, 0, 0, 0);
		if (IS_PLAYER_DEADEYE(0))
		{
			CANCEL_DEADEYE();
			CANCEL_TIME_WARP(1);
		}
		if (bParam8)
		{
			if (IS_VOLUME_VALID(bParam7))
			{
				FIRE_STOP_FLAMES_IN_VOLUME(bParam7);
				DELETE_PROJECTILES_IN_VOLUME(bParam7);
			}
			else
			{
				FIRE_STOP_ALL_FIRES();
				Function_71(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_217(), 2, Function_71(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
				DELETE_PROJECTILES_IN_VOLUME(bVar0);
			}
		}
		Function_39(19, 1, 0, 0);
	}
	SET_TIME_ACCELERATION(0.0f);
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(1);
	}
	if (bParam4)
	{
		ENABLE_USE_CONTEXTS(0);
	}
	AI_GLOBAL_CLEAR_ALL_DANGER();
	if (uParam10 && !Function_12())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_63()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_63()));
		DECOR_SET_BOOL(Global_34573, "nquitBinos", true);
		UNK_0xE6C1DBD9(0);
		SET_DRAW_ACTOR(Global_34573, 1);
		SHOW_PHYSINST(GET_PHYSINST_FROM_ACTOR(Global_34573));
		if (UI_ISACTIVE("BinocularsUI"))
		{
			UI_POP("BinocularsUI");
		}
	}
	ACTOR_DATA_GRAVITY_LIMIT(1);
	ENABLE_PIP(0, 0, 1);
	Global_63096 = 1;
	Global_63116 = GET_THIS_SCRIPT_ID();
	Global_63117 = "";
	if (IS_VOLUME_VALID(bVar0))
	{
		DESTROY_VOLUME(bVar0);
	}
	if (Function_62(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_61(0x4000000);
	}
	if (Function_62(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_61(0x8000000);
	}
}

void Function_61(int iParam0) //Position: 0x42C7 / 17095
{
	int iVar0;
	
	if (Function_13(iParam0, 1) && Function_13(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

bool Function_62(int iParam0) //Position: 0x42FB / 17147
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_63() //Position: 0x4317 / 17175
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_LAYOUTREF_VALID(bVar0))
	{
		bVar1 = CREATE_OBJECT_ITERATOR(bVar0);
		bVar2 = START_OBJECT_ITERATOR(bVar1);
		ITERATE_ON_OBJECT_TYPE(bVar1, 42);
		if (IS_OBJECT_VALID(bVar2))
		{
			while (IS_OBJECT_VALID(bVar2))
			{
				PRINTSTRING(GET_OBJECT_NAME(bVar2));
				PRINTNL();
				if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(bVar2), "bino_camera"))
				{
					return bVar2;
				}
				bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
			}
		}
		DESTROY_ITERATOR(bVar1);
	}
	return "";
}

bool Function_64() //Position: 0x4396 / 17302
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_65() //Position: 0x439F / 17311
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_66(bool bParam0, vector3 vParam1) //Position: 0x43B4 / 17332
{
	bLocal_56 = CREATE_VOLUME_IN_LAYOUT(bParam0, Function_217(), false, vParam1, 0.0f, 0.0f, 0.0f, 5.0f, 10.0f, 5.0f);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_56);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_56);
}

vector3 Function_67(bool bParam0) //Position: 0x43DF / 17375
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (!IS_OBJECT_VALID(bParam0))
	{
		return StackVal, StackVal, vVar0;
	}
	GET_OBJECT_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_68(vector3 vParam0) //Position: 0x4406 / 17414
{
	bool bVar0;
	vector3 vVar1;
	
	bVar0 = GET_MOST_RECENT_MOUNT(Global_34573);
	Function_71(Global_34573);
	vVar1 = { StackVal, StackVal, Function_71(Global_34573) };
	if (Function_69(StackVal, StackVal, Global_34573, vParam0) > 10.0f)
	{
		if (IS_ACTOR_VALID(bVar0))
		{
			TELEPORT_ACTOR(bVar0, &vParam0, 1, 1, 1);
			TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
		}
		if (IS_ACTOR_RIDING(Global_34573))
		{
			TELEPORT_ACTOR(Global_34573, &vVar1, 1, 1, 1);
		}
	}
	return;
}

float Function_69(bool bParam0, vector3 vParam1) //Position: 0x445F / 17503
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_70(bParam0);
		vVar0 = { StackVal, StackVal, Function_70(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

vector3 Function_70(bool bParam0) //Position: 0x44D9 / 17625
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

vector3 Function_71(bool bParam0) //Position: 0x4543 / 17731
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_72(int iParam0, bool bParam1, bool bParam2) //Position: 0x4554 / 17748
{
	int iVar0;
	bool bVar1;
	
	if (Function_94(0) && (!Global_3380 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_93())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_3380)
	{
		Global_12976.f_164 = (Global_12976.f_164 + iParam0);
		return;
	}
	if (bVar1 == 0)
	{
		return;
	}
	iVar0 = Function_33(3);
	Function_90();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_88(3, bVar1);
		if (!bParam2)
		{
			if (!Function_87(Global_76848, 4))
			{
				Function_81(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_39(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_30(3));
	iVar0 = Function_33(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_74(4, Function_80(Global_12976.f_156), 1);
				Function_73(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_74(4, Function_80(Global_12976.f_156), 1);
				Function_73(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_74(4, Function_80(Global_12976.f_156), 1);
				Function_73(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_74(4, Function_80(Global_12976.f_156), 1);
				Function_73(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_74(4, Function_80(Global_12976.f_156), 1);
				Function_73(Global_12976.f_152, Global_12976.f_156);
				if (Global_12976.f_152 != 6 || Global_12976.f_152 != 0)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			break;
		
		case 0x00000005:
			break;
	}
	return;
}

void Function_73(int iParam0, int iParam1) //Position: 0x4723 / 18211
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.2f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000001:
		case 0x00000002:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.3f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000003:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.4f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000004:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 120.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.5f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 1);
			break;
		
		case 0x00000005:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 180.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.8f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 1);
			break;
		
		default:
			break;
	}
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, 1);
			if (iParam1 != 4 || iParam1 != 5)
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, 1);
			}
			else
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, 0);
			}
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, 1);
			SET_ACTOR_SHOULD_TAUNT(Global_34573, 1);
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, 0);
			SET_ACTOR_SHOULD_TAUNT(Global_34573, 0);
			break;
		
		default:
			break;
	}
	return;
}

int Function_74(int iParam0, char* cParam1, bool bParam2) //Position: 0x4981 / 18817
{
	bool bVar0;
	int iVar1;
	
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 20 && Global_35278[iParam020].f_48 == 18)
	{
		PRINTSTRING("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT:");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT.");
		return 0;
	}
	Function_78(iParam0, cParam1, 0, 1);
	iVar1 = Function_75();
	Global_49199[iVar1] = 0.0f;
	strcpy(&Global_49205[iVar120] + 16, cParam1, 32);
	strcpy(&Global_49205[iVar120] + 8, "QME=", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	if (bParam2)
	{
		Global_49205[iVar120].f_72 = 5;
	}
	else
	{
		Global_49205[iVar120].f_72 = 6;
	}
	return 1;
}

int Function_75() //Position: 0x4B06 / 19206
{
	int iVar0;
	
	iVar0 = (Global_49199 - 1);
	while (iVar0 > 0)
	{
		if (Global_49205[iVar020].f_48 == 4294967295)
		{
			return iVar0;
		}
		iVar0 = (iVar0 - 1);
	}
	LOG_ERROR("STAT_FIND_FIRST_EMPTY_SLOT_ON_STACK: too many synchronous Stat Updates! Dropping the oldest in the buffer");
	Function_76();
	return 0;
}

void Function_76() //Position: 0x4BA5 / 19365
{
	int iVar0;
	int iVar1;
	
	iVar0 = (Global_49199 - 1);
	iVar1 = (iVar0 - 1);
	while (iVar1 > 0)
	{
		Global_49199[iVar0] = Global_49199[iVar1];
		Global_49205[iVar020] = { StackVal, Global_49205[iVar120] };
		*(&Global_49205[iVar020] + 8) = { StackVal, *(&Global_49205[iVar120] + 8) };
		*(&Global_49205[iVar020] + 16) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_49205[iVar120] + 16) };
		Global_49205[iVar020].f_48 = Global_49205[iVar120].f_48;
		Global_49205[iVar020].f_68 = Global_49205[iVar120].f_68;
		Global_49205[iVar020].f_72 = Global_49205[iVar120].f_72;
		Function_77(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_77(int iParam0) //Position: 0x4C54 / 19540
{
	Global_49199[iParam0] = 0.0f;
	strcpy(&(Global_49205[iParam020]), "", 8);
	strcpy(&Global_49205[iParam020] + 8, "", 8);
	strcpy(&Global_49205[iParam020] + 16, "", 32);
	Global_49205[iParam020].f_48 = 4294967295;
	Global_49205[iParam020].f_52 = 4294967295;
	Global_49205[iParam020].f_68 = 4294967295;
	Global_49205[iParam020].f_72 = 4294967295;
	return;
}

int Function_78(int iParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0x4CB2 / 19634
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 20 && Global_35278[iParam020].f_48 == 18)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING. Use the other functions");
		return 0;
	}
	if (!IS_STRING_VALID(cParam1))
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed.");
		return 0;
	}
	if (STRING_LENGTH(bParam1) >= 7)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed.");
		return 0;
	}
	strcpy(&Global_35278[iParam020] + 16, bParam1, 32);
	if (bParam2)
	{
		uVar1 = Global_35278[iParam020].f_76;
		Function_79(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, uParam3);
	}
	return 1;
}

void Function_79(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x5004 / 20484
{
	CLEAR_STAT_MESSAGE();
	if (!Global_49306)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 1, false, false, 0);
		}
		else if (bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 0, false, false, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 1, 0, 0, false, false, 0);
		}
	}
}

var Function_80(int iParam0) //Position: 0x5087 / 20615
{
	switch (iParam0)
	{
		case 0x00000000:
			return "sr_ntr1";
			break;
		
		case 0x00000001:
			return "sr_ntr2";
			break;
		
		case 0x00000002:
			return "sr_ntr3";
			break;
		
		case 0x00000003:
			return "sr_ntr4";
			break;
		
		case 0x00000004:
			return "sr_ntr5";
			break;
		
		case 0x00000005:
			return "sr_ntr6";
			break;
	}
	return "sr_ntr1";
}

void Function_81(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x5116 / 20758
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_83(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_82(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_82(char* cParam0, int iParam1) //Position: 0x5182 / 20866
{
	if (iParam1 == 1)
	{
		return;
	}
	if (iParam1 == 2)
	{
		stradd(cParam0, "2", 16);
	}
	if (iParam1 == 3)
	{
		stradd(cParam0, "3", 16);
	}
	if (iParam1 == 4)
	{
		stradd(cParam0, "4", 16);
	}
	return;
}

bool Function_83(bool bParam0, var uParam1, int iParam2) //Position: 0x51B9 / 20921
{
	var uVar0;
	char* cVar1[16];
	
	uVar0 = uParam1;
	strcpy(&cVar1, "tutorial", 16);
	if (Global_3380)
	{
		return 0;
	}
	if (DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		if (Function_85(DECOR_GET_INT(bParam0, &cVar1)) > 3)
		{
			return 0;
		}
	}
	if (iParam2 == 1)
	{
		if (Global_3403 || Global_3404)
		{
			return 0;
		}
	}
	if (iParam2 == 2)
	{
		switch (Function_84(uVar0))
		{
			case 0x00000002:
				if (!Function_87(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_84(char* cParam0) //Position: 0x5231 / 21041
{
	switch (cParam0)
	{
		case 0x00000001:
		case 0x00000040:
		case 0x00000080:
		case 0x00000100:
		case 0x00000200:
		case 0x00004000:
		case 0x00008000:
		case 0x00010000:
		case 0x00020000:
		case 0x00040000:
		case 0x00200000:
			return 0;
			break;
		
		case 0x00000004:
		case 0x00000008:
		case 0x00000020:
		case 0x00001000:
		case 0x00080000:
		case 0x00100000:
			return 1;
			break;
		
		case 0x00000002:
		case 0x00000010:
		case 0x00000800:
		case 0x00002000:
		case 0x00400000:
			return 2;
			break;
	}
	return 0;
}

int Function_85(int iParam0) //Position: 0x52D2 / 21202
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_86(&iVar1, 2147483648);
	}
	else
	{
		iVar0 = 0;
	}
	while (iVar1 >= 0)
	{
		iVar1 = (iVar1 && (iVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

void Function_86(int iParam0, int iParam1) //Position: 0x530F / 21263
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

bool Function_87(var uParam0, int iParam1) //Position: 0x5322 / 21282
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_88(int iParam0, bool bParam1) //Position: 0x5335 / 21301
{
	bool bVar0;
	int iVar1;
	
	Function_39(iParam0, bParam1, 0, 0);
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_INT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_INCREASE_INT: iIncreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	iVar1 = Function_89(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_49205[iVar120].f_72 != 0 || Global_49205[iVar120].f_72 != 1)
		{
			Global_49199[iVar1] = (Global_49199[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_49205[iVar120] + 8, "QME+", 8);
			strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
			Global_49205[iVar120].f_48 = 26;
			Global_49205[iVar120].f_68 = iParam0;
			Global_49205[iVar120].f_72 = 0;
			return 1;
		}
	}
	iVar1 = Function_75();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

var Function_89(int iParam0, int iParam1) //Position: 0x54D2 / 21714
{
	int iVar0;
	
	iVar0 = (Global_49199 - 1);
	while (iVar0 > 0)
	{
		if (Global_49205[iVar020].f_68 == iParam0)
		{
			if (iParam1 == 4294967295)
			{
				return iVar0;
			}
			if (iVar0 != iParam1)
			{
				return iVar0;
			}
		}
		iVar0 = (iVar0 - 1);
	}
	return 4294967295;
}

void Function_90() //Position: 0x5513 / 21779
{
	Function_92(3, 0.0f);
	Function_91(3, 10000.0f);
	return;
}

int Function_91(int iParam0, int iParam1) //Position: 0x5529 / 21801
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_92(int iParam0, int iParam1) //Position: 0x5569 / 21865
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

bool Function_93() //Position: 0x55A9 / 21929
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

var Function_94(int iParam0) //Position: 0x55D4 / 21972
{
	return (*&Global_12976 + 104)[iParam0];
}

void Function_95(bool bParam0, bool bParam1) //Position: 0x55E3 / 21987
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_CONVERSE_ENABLE(bParam0);
	}
	else
	{
		AI_CONVERSE_DISABLE(bParam0);
	}
	return;
}

void Function_96(var uParam0, bool bParam1) //Position: 0x5605 / 22021
{
	vector3 vVar0;
	
	GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(bParam1), &vVar0);
	Function_97(StackVal, StackVal, uParam0, vVar0);
	return;
}

void Function_97(bool bParam0, vector3 vParam1) //Position: 0x561F / 22047
{
	if (!IS_ACTOR_VALID(GET_MOUNT(bParam0)))
	{
		SET_ACTOR_HEADING(StackVal, Function_98(StackVal, bParam0, bParam0, vParam1), 1);
	}
	else
	{
		SET_ACTOR_HEADING(StackVal, Function_98(StackVal, GET_MOUNT(bParam0), bParam0, vParam1), 1);
	}
}

var Function_98(bool bParam0, vector3 vParam1) //Position: 0x5657 / 22103
{
	vector3 vVar0;
	
	Function_71(bParam0);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_71(bParam0), vParam1, StackVal) };
	VNORMALIZE(&vVar0);
	PRINTSTRING("GET_ACTOR_HEADING_TO_POSITION: Found unit vector of ");
	PRINTVECTOR(vVar0);
	PRINTSTRING(", got heading of ");
	PRINTFLOAT(UNK_0x9C40E671(&vVar0));
	PRINTNL();
	return UNK_0x9C40E671(&vVar0);
}

void Function_99(bool bParam0, bool bParam1) //Position: 0x56DA / 22234
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
	else if (!bParam1 || Function_100(bParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(bParam0, 1);
	}
	return;
}

float Function_100(bool bParam0, bool bParam1) //Position: 0x5737 / 22327
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

void Function_101(bool bParam0, bool bParam1) //Position: 0x5756 / 22358
{
	SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_ACTOR(Global_34573), 1.0f, false, 1092616192);
	Function_102(1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
	REMOVE_CAMERA_FROM_CHANNEL(*bParam0, 0);
	DESTROY_CAMERA(*bParam0);
	CAMERA_RESET(0);
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	*bParam1 = 0;
	return;
}

void Function_102(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, var uParam9) //Position: 0x5796 / 22422
{
	bool bVar0;
	
	bParam1 = bParam1;
	if (bParam6)
	{
		CAMERA_RESET(0);
	}
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		if (bParam3)
		{
			SET_PLAYER_CONTROL(0, 1, 0, 0);
		}
		bVar0 = Function_36();
		if (IS_ACTOR_VALID(bVar0))
		{
			if (bParam2)
			{
				TASK_CLEAR(bVar0);
			}
			if (!bParam1)
			{
				if (HUD_IS_FADED())
				{
					RESET_ANIM_SET_FOR_ACTOR(bVar0, 0);
				}
				else
				{
					RESET_ANIM_SET_FOR_ACTOR(bVar0, 1);
				}
			}
			if (Function_64())
			{
				if (!(IS_ACTOR_ON_LADDER(bVar0) || IS_ACTOR_USING_LEDGE(bVar0)))
				{
					ACTOR_END_FORCE_HOLSTER(bVar0);
					if (iParam0 != 0 || (iParam0 != 2 && Global_76850))
					{
						ACTOR_DRAW_LAST_WEAPON(bVar0, 0);
					}
				}
			}
			else
			{
				ACTOR_END_FORCE_HOLSTER(bVar0);
			}
			SET_ACTOR_INVULNERABILITY(bVar0, 0);
			if (Global_34108[0])
			{
				Global_34108[0] = 0;
				UI_CHEAT_SET_VALUE(0, 0);
			}
		}
		Function_39(21, 1, 0, 0);
	}
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam7)
	{
		Function_65();
	}
	if (bParam4)
	{
		ENABLE_USE_CONTEXTS(1);
	}
	if (bParam8)
	{
		UI_POP("nCutscenes");
	}
	AUDIO_ENABLE_PLAYER_TAUNTS();
	Function_103(uParam9);
}

void Function_103(int iParam0) //Position: 0x5886 / 22662
{
	iParam0 = iParam0;
	HUD_ENABLE(iParam0);
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	PRINT_SMALL_B("Common_Null", 0.1f, 0, 2, 1, 0, 0);
	SET_TIME_ACCELERATION(Global_63398);
	STREAMING_UNLOAD_SCENE();
	AI_STOP_IGNORING_ACTORS();
	if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol")))
	{
		DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol"));
	}
	if (!Global_3380)
	{
		Function_104();
	}
	ACTOR_DATA_GRAVITY_LIMIT(0);
	Global_63096 = 0;
	Global_63097 = 0;
	if (IS_VOLUME_VALID(Global_63117))
	{
		if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(Global_63117))
		{
			REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Global_63117);
		}
		if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(Global_63117))
		{
			REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Global_63117);
		}
	}
	return;
}

void Function_104() //Position: 0x5935 / 22837
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		if (GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(Global_12976.f_36)) != bVar0)
		{
			LOG_ERROR("PLAYERHORSE NOT IN PLAYER HORSE! WHY? FIXING");
			GIVE_OBJECT_TO_LAYOUT(Global_12976.f_36, bVar0);
		}
	}
	return;
}

void Function_105() //Position: 0x59A7 / 22951
{
	switch (bLocal_58)
	{
		case 0x00000000:
			if (bLocal_36 == 1)
			{
				GRINGO_LOAD_ANIMATION_FOR_ACTOR_ENUM_EXT(GET_GRINGO_FROM_OBJECT(bLocal_28), "UseCase1", "UseAnim", bLocal_59);
				GRINGO_LOAD_ANIMATION_FOR_ACTOR_ENUM_EXT(GET_GRINGO_FROM_OBJECT(bLocal_28), "nplayerUse", "UseAnim", false);
			}
			else
			{
				GRINGO_LOAD_ANIMATION_FOR_ACTOR_ENUM_EXT(GET_GRINGO_FROM_OBJECT(bLocal_28), "UseCase1", "UseAnim", bLocal_59);
				GRINGO_LOAD_ANIMATION_FOR_ACTOR_ENUM_EXT(GET_GRINGO_FROM_OBJECT(bLocal_28), "Handoff", "UseAnim", false);
			}
			break;
		
		case 0x00000001:
		case 0x00000002:
			GRINGO_LOAD_ANIMATION_FOR_ACTOR_ENUM_EXT(GET_GRINGO_FROM_OBJECT(bLocal_28), "UseCase1", "UseAnim", bLocal_59);
			GRINGO_LOAD_ANIMATION_FOR_ACTOR_ENUM_EXT(GET_GRINGO_FROM_OBJECT(bLocal_28), "Handoff", "UseAnim", false);
			break;
	}
	return;
}

bool Function_106(vector3 vParam0, var uParam3, float fParam4, float fParam5, bool bParam6, float fParam7) //Position: 0x5A8B / 23179
{
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_ONESHOT_QUERIES(1);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(1664, fParam7, 0);
	AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(1, fParam7, 0);
	AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(2, -fParam7, 1);
	AMBIENT_SET_SEARCH_CENTER(vParam0);
	AMBIENT_SET_DISTANCE_FILTER(0.0f, bParam6);
	AMBIENT_ENABLE_SLOPE_FILTER_PRECISE(1);
	AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, fParam4, fParam7);
	AMBIENT_ENABLE_BUMP_FILTER(1);
	AMBIENT_SET_BUMP_FILTER(0.0f, fParam5, fParam7);
	return AMBIENT_GET_POINT(uParam3, 0);
}

int Function_107() //Position: 0x5AE2 / 23266
{
	return Function_33(0);
}

void Function_108(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x5AEC / 23276
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
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

bool Function_109() //Position: 0x5B67 / 23399
{
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (IS_ACTOR_ON_LADDER(Global_34573))
		{
			return 0;
		}
		if (IS_ACTOR_DRAFTED(Global_34573))
		{
			return 0;
		}
		if (IS_ACTOR_RIDING_VEHICLE(Global_34573))
		{
			if (!IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
			{
				return 0;
			}
		}
		if (Function_110())
		{
			return 0;
		}
	}
	return 0;
	return 1;
}

bool Function_110() //Position: 0x5BAF / 23471
{
	if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(Global_34573)))
	{
		return 1;
	}
	return 0;
}

bool Function_111(var uParam0, float fParam1) //Position: 0x5BC4 / 23492
{
	if (Function_114(uParam0))
	{
		if (Function_112(uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_112(int iParam0) //Position: 0x5BE0 / 23520
{
	if (Function_114(iParam0))
	{
		if (Function_113(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_113(int iParam0) //Position: 0x5CA8 / 23720
{
	return Function_13(*iParam0, 2);
}

bool Function_114(int iParam0) //Position: 0x5CB5 / 23733
{
	return Function_13(*iParam0, 1);
}

void Function_115(bool bParam0) //Position: 0x5CC2 / 23746
{
	Global_16876[bParam06].f_16++;
	if (Global_16876[bParam06].f_16 == 1)
	{
		Function_39(409, 1, 0, 0);
	}
	return;
}

void Function_116(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x5CF3 / 23795
{
	bParam1 = bParam1;
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0) && Function_120(bParam0, Global_34573) >= IntToFloat(iParam5))
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

bool Function_117(var uParam0, var uParam1, var uParam2, bool bParam3, float fParam4, var uParam5, bool bParam6, var uParam7, var uParam8, float fParam9, bool bParam10, int iParam11, float fParam12, float fParam13, var uParam14, var uParam15) //Position: 0x5D83 / 23939
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
		else if (Function_120(*uParam0, *uParam1) > fParam13)
		{
			*uParam8 = 1;
			Function_116(*uParam0, Global_34573, uParam14, uParam14, 5, 60, 1, uParam15);
			Function_215(uParam7, 0.0f);
		}
	}
	switch (*uParam2)
	{
		case 0x00000000:
			SET_ACTOR_UPDATE_PRIORITY(*uParam0, false);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(*uParam0, 0);
			fLocal_20 = Function_120(*uParam0, Global_34573);
			AI_GOAL_LOOK_AT_ACTOR_NEW(*uParam0, *uParam1, -1.0f, 1);
			bParam6 = CREATE_POINT_IN_LAYOUT(bParam3, Function_217(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
			ATTACH_OBJECTS(bParam6, *uParam1, Function_217(), 0.0f, 0.5f, fParam12, 0.0f, 0.0f, 0.0f, 4294967295);
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
			if ((Function_120(*uParam0, *uParam1) - fLocal_20) < fParam4)
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
			if (!Function_121(*uParam0, 0))
			{
				return 0;
			}
			break;
	}
	return 1;
}

float Function_118(bool bParam0) //Position: 0x5F11 / 24337
{
	var uVar0;
	float fVar1;
	
	if (!bParam0)
	{
		Function_119(&uVar0, &fVar1);
		if (fVar1 < 60.0f)
		{
			return (fVar1 + 20.0f);
		}
		return (fVar1 + 10.0f);
	}
	return (190.0f + 20.0f);
}

void Function_119(float fParam0, int iParam1) //Position: 0x5F4C / 24396
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

float Function_120(bool bParam0, bool bParam1) //Position: 0x5FD5 / 24533
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

bool Function_121(bool bParam0, bool bParam1) //Position: 0x60C6 / 24774
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
			Function_6(bParam0);
			return 0;
		}
		if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 163840))
		{
			Function_6(bParam0);
			return 0;
		}
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		if (Function_122(bParam0, 0) && !AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 16384))
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

int Function_122(bool bParam0, int iParam1) //Position: 0x6162 / 24930
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

void Function_123(int iParam0, bool bParam1, bool bParam2) //Position: 0x61AC / 25004
{
	int iVar0;
	bool bVar1;
	
	if (Function_94(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_93())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_33(1);
	if ((iVar0 + bVar1) >= 5000)
	{
		bVar1 = (5000 - iVar0);
	}
	if ((iVar0 + bVar1) <= 4294962296)
	{
		bVar1 = (4294962296 - iVar0);
	}
	if (bParam1)
	{
		if (bVar1 >= 0)
		{
			Function_88(1, bVar1);
			if (!bParam2)
			{
				if (!Function_87(Global_76848, 1))
				{
					Function_81(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_126(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_87(Global_76848, 2))
				{
					Function_81(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_39(1, bVar1, 0, 0);
	}
	else
	{
		Function_20(1, (4294967295 * bVar1), 0);
	}
	if (Function_33(1) <= 4294962296)
	{
		Function_125(1, 4294962296, 0);
	}
	else if (Function_33(1) >= 5000)
	{
		Function_125(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_30(1));
	iVar0 = Function_33(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_74(2, Function_124(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_74(2, Function_124(Global_12976.f_152), 0);
				if (Global_12976.f_156 == 5)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			else if (iVar0 >= 4294964796)
			{
				Global_12976.f_152 = 2;
				Function_74(2, Function_124(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_74(2, Function_124(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_74(2, Function_124(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000003:
			if (HAS_ITEM("HONOR_ROSARY", Global_34573))
			{
				DELETE_ITEM("HONOR_ROSARY", Global_34573, 0);
			}
			if (iVar0 < 4294966296)
			{
				Global_12976.f_152 = 2;
				Function_74(2, Function_124(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_74(2, Function_124(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_74(2, Function_124(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_74(2, Function_124(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_74(2, Function_124(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_74(2, Function_124(Global_12976.f_152), 1);
				if (Global_12976.f_156 == 5)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			break;
		
		case 0x00000006:
			if (iVar0 < 4500)
			{
				Global_12976.f_152 = 5;
				Function_74(2, Function_124(Global_12976.f_152), 0);
			}
			break;
	}
	Function_73(Global_12976.f_152, Global_12976.f_156);
	return;
}

var Function_124(int iParam0) //Position: 0x64CD / 25805
{
	switch (iParam0)
	{
		case 0x00000000:
			return "sr_hnr7";
			break;
		
		case 0x00000001:
			return "sr_hnr6";
			break;
		
		case 0x00000002:
			return "sr_hnr5";
			break;
		
		case 0x00000003:
			return "sr_hnr4";
			break;
		
		case 0x00000004:
			return "sr_hnr3";
			break;
		
		case 0x00000005:
			return "sr_hnr2";
			break;
		
		case 0x00000006:
			return "sr_hnr1";
			break;
	}
	return "sr_hnr4";
}

int Function_125(int iParam0, bool bParam1, bool bParam2) //Position: 0x6570 / 25968
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_34581[iParam0] > TO_FLOAT(bParam1))
	{
		Function_40(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_32(iParam0);
	if (bParam2)
	{
		Function_21(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_126(int iParam0, bool bParam1) //Position: 0x680B / 26635
{
	bool bVar0;
	int iVar1;
	
	Function_20(iParam0, bParam1, 0);
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE_INT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_DECREASE_INT: iDecreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	iVar1 = Function_89(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_49205[iVar120].f_72 != 2 || Global_49205[iVar120].f_72 != 3)
		{
			Global_49199[iVar1] = (Global_49199[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_49205[iVar120] + 8, "QME-", 8);
			strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
			Global_49205[iVar120].f_48 = 26;
			Global_49205[iVar120].f_68 = iParam0;
			Global_49205[iVar120].f_72 = 2;
			return 1;
		}
	}
	iVar1 = Function_75();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

void Function_127(bool bParam0) //Position: 0x69A7 / 27047
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

bool Function_128(bool bParam0, var uParam1, var uParam2, int iParam3, bool bParam4, float fParam5) //Position: 0x69F3 / 27123
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
		fVar0 = Function_120(bParam0, Global_34573);
		if (!Function_13(iParam3, 8))
		{
			if (GET_LAST_ATTACKER(bParam0) == Global_34573)
			{
				*uParam1 = 8;
				Function_129(bParam0);
				return 1;
			}
		}
		if (!Function_13(iParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(bParam0, 1.0f))
			{
				*uParam1 = 2;
				Function_129(bParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(bParam0, 1.0f, 1.0f))
			{
				*uParam1 = 2;
				Function_129(bParam0);
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
					Function_129(bParam0);
					return 1;
				}
				if (*uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - *uParam2) < 1.3f)
					{
						*uParam1 = 4;
						Function_129(bParam0);
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
				Function_129(bParam0);
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
					Function_129(bParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_129(bool bParam0) //Position: 0x6B8A / 27530
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(bParam0, 1);
	UNK_0x99AFD2D1(bParam0, 0, 0);
	Function_130(bParam0);
	MEMORY_CONSIDER_AS(Global_34573, bParam0, 2);
	MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
	AI_GOAL_LOOK_CLEAR(bParam0);
	return;
}

void Function_130(bool bParam0) //Position: 0x6BBE / 27582
{
	SAY_SINGLE_LINE_CONTEXT(bParam0, 60, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

void Function_131(vector3 vParam0, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7, bool bParam8) //Position: 0x6BD5 / 27605
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
	else if (!Function_144(StackVal, StackVal, vParam0))
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
			Function_143(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_142(0);
		}
		if (bParam8)
		{
			Function_140(0, GET_THIS_SCRIPT_ID());
			Global_3373 = GET_THIS_SCRIPT_ID();
			Function_138(iParam4);
			Global_3401 = 1;
		}
		Function_136(iParam4);
		if (Function_135(StackVal, 32768))
		{
			Function_132(1);
		}
		Global_16876[iParam46].f_12++;
		Function_39(408, 1, 0, 0);
	}
}

void Function_132(bool bParam0) //Position: 0x6CDC / 27868
{
	if (bParam0)
	{
		Function_134(0x10000000);
	}
	else
	{
		Function_133(0x10000000);
	}
	Global_26316.f_172 = 0;
	return;
}

void Function_133(int iParam0) //Position: 0x6D00 / 27904
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_134(int iParam0) //Position: 0x6D1D / 27933
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

bool Function_135(var uParam0, int iParam1) //Position: 0x6D30 / 27952
{
	return (uParam0 && iParam1) == 0;
}

void Function_136(int iParam0) //Position: 0x6D3D / 27965
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
			bVar1 = Function_137(iVar0 * 60);
			ADD_TIME(&Global_17483[iParam075] + 264, 0, 0, bVar1, 0);
			Global_16876[iParam06] = Global_17483[iParam075].f_264;
		}
	}
	return;
}

int Function_137(int iParam0) //Position: 0x6DE1 / 28129
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_138(int iParam0) //Position: 0x6DF7 / 28151
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
	Function_139(&Var0 + 80[Var0.f_763], &(Global_16876[iParam06]), iParam0);
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

void Function_139(var uParam0, var uParam1, int iParam2) //Position: 0x6E95 / 28309
{
	uParam0->f_4 = iParam2;
	*uParam0 = uParam1->f_12;
	uParam0->f_8 = 1;
	return;
}

void Function_140(int iParam0, int iParam1) //Position: 0x6EAD / 28333
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
			Function_141(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_141(int iParam0) //Position: 0x6F2F / 28463
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

void Function_142(int iParam0) //Position: 0x6F7D / 28541
{
	Global_12976.f_76 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 76, 0, 0, (iParam0 + Function_137(900)), 0);
	return;
}

void Function_143(int iParam0) //Position: 0x6F9F / 28575
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, (iParam0 + Function_137(200)), 0);
	return;
}

bool Function_144(vector3 vParam0) //Position: 0x6FC0 / 28608
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_145() //Position: 0x6FD8 / 28632
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_146(bool bParam0, bool bParam1) //Position: 0x6FE1 / 28641
{
	UI_SET_STRING("beat_dynstr", I2STR(bParam1));
	switch (bLocal_58)
	{
		case 0x00000000:
			bLocal_31 = CREATE_VOLUME_IN_LAYOUT(bParam0, Function_217(), false, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 15.0f, 15.0f, 15.0f);
			bLocal_30 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("highHonorDonationContext02", bLocal_31, 25, 5, 0, false, 0, 0, 4294967295, 0);
			break;
		
		case 0x00000001:
			bLocal_31 = CREATE_VOLUME_IN_LAYOUT(bParam0, Function_217(), false, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 15.0f, 15.0f, 15.0f);
			bLocal_30 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("highHonorDonationContext02", bLocal_31, 25, 5, 0, false, 0, 0, 4294967295, 0);
			break;
		
		case 0x00000002:
			bLocal_31 = CREATE_VOLUME_IN_LAYOUT(bParam0, Function_217(), false, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 15.0f, 15.0f, 15.0f);
			bLocal_30 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("highHonorDonationContext", bLocal_31, 25, 5, 0, false, 0, 0, 4294967295, 0);
			break;
	}
	return;
}

void Function_147(int iParam0) //Position: 0x7104 / 28932
{
	Function_148(&Global_28842, iParam0);
	return;
}

void Function_148(var uParam0, int iParam1) //Position: 0x7112 / 28946
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

void Function_149(bool bParam0) //Position: 0x7135 / 28981
{
	switch (bLocal_58)
	{
		case 0x00000000:
			if (bLocal_36)
			{
				Function_71(Global_34573);
				Function_145();
				bLocal_28 = CREATE_GRINGO_IN_LAYOUT(bParam0, Function_217(), "$/content/scripting/gringo/SimpleGringo/fan_pardon_letter_link", Function_71(Global_34573), Function_145());
				GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bLocal_28), false);
			}
			else
			{
				Function_71(Global_34573);
				Function_145();
				bLocal_28 = CREATE_GRINGO_IN_LAYOUT(bParam0, Function_217(), "$/content/scripting/gringo/SimpleGringo/receive_money", Function_71(Global_34573), Function_145());
				GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bLocal_28), false);
			}
			break;
		
		case 0x00000001:
			if (!Function_35(67))
			{
				Function_71(Global_34573);
				Function_145();
				bLocal_28 = CREATE_GRINGO_IN_LAYOUT(bParam0, Function_217(), "$/content/scripting/gringo/SimpleGringo/relic_handoff", Function_71(Global_34573), Function_145());
				GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bLocal_28), false);
			}
			else
			{
				Function_71(Global_34573);
				Function_145();
				bLocal_28 = CREATE_GRINGO_IN_LAYOUT(bParam0, Function_217(), "$/content/scripting/gringo/SimpleGringo/receive_money", Function_71(Global_34573), Function_145());
				GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bLocal_28), false);
			}
			break;
		
		case 0x00000002:
			Function_71(Global_34573);
			Function_145();
			bLocal_28 = CREATE_GRINGO_IN_LAYOUT(bParam0, Function_217(), "$/content/scripting/gringo/SimpleGringo/give_money", Function_71(Global_34573), Function_145());
			GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bLocal_28), false);
			break;
	}
	Function_105();
	return;
}

void Function_150(bool bParam0) //Position: 0x731E / 29470
{
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_ACTOR_CAN_BE_HARDLOCKED(bParam0, 0);
		AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bParam0, 0);
	}
	return;
}

float Function_151() //Position: 0x7338 / 29496
{
	float fVar0;
	int iVar1;
	
	if (Global_3371)
	{
		return 0.0f;
	}
	Function_119(&fVar0, &iVar1);
	if (fVar0 >= 50.0f)
	{
		return (fVar0 - 10.0f);
	}
	return (fVar0 - 20.0f);
}

bool Function_152(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x7369 / 29545
{
	if (StackVal & 64 == 64)
	{
		if (!*iParam2)
		{
			if (IS_ACTOR_VALID(bParam1))
			{
				if (Function_120(Global_34573, bParam1) > 15.0f)
				{
					*iParam2 = 1;
				}
			}
		}
		if (Global_3394 && !*iParam2)
		{
			return 0;
		}
		if ((Global_3367 && Global_6281 == GET_THIS_SCRIPT_ID()) && !*iParam2)
		{
			return 0;
		}
		if (Function_155() && !*iParam2)
		{
			return 0;
		}
		if (Function_154(iParam0) && !*iParam2)
		{
			return 0;
		}
		if (Global_3387 && !bParam4)
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
		if (Global_3403 && iParam7)
		{
			*iParam3 = 1;
			return 0;
		}
		if (Global_3404 && iParam7)
		{
			*iParam3 = 1;
			return 0;
		}
		if (Global_3392 && !*iParam2)
		{
			return 0;
		}
		if (Global_3393 && !*iParam2)
		{
			return 0;
		}
		if (bParam6)
		{
			if (Global_63096 && !*iParam2)
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
		if (!Function_153(iParam0, iParam5))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_153(int iParam0, int iParam1) //Position: 0x7497 / 29847
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

int Function_154(int iParam0) //Position: 0x74B8 / 29880
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

int Function_155() //Position: 0x74F6 / 29942
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
						if (Function_156(StackVal, Global_34573) > IntToFloat(iVar1))
						{
							return 1;
						}
					}
				}
			}
			if (Function_156(StackVal, Global_34573) > IntToFloat(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

float Function_156(bool bParam0, bool bParam1) //Position: 0x75B1 / 30129
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_70(bParam0);
			vVar0 = { StackVal, StackVal, Function_70(bParam0) };
			Function_157(bParam1);
			vVar3 = { StackVal, StackVal, Function_157(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

vector3 Function_157(bool bParam0) //Position: 0x7651 / 30289
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

bool Function_158(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x76BD / 30397
{
	struct<8> Var0;
	bool bVar8;
	bool bVar9;
	
	if (Global_3371 && iParam0->f_32)
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_196(GET_SCRIPT_NAME()) };
		bVar8 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Global_26150, &Var0, 4.203895E-45f, Function_194(*(iParam0 + 8), 0.0f, Global_34573, *(iParam0 + 8)), 0.0f, iParam0->f_52, 20.0f, iParam0->f_52);
		DECOR_SET_INT(bVar8, "script", GET_THIS_SCRIPT_ID());
		if (iParam0->f_56 != 4294967295)
		{
			DECOR_SET_INT(StackVal, bVar8, "category");
			Function_192(&bVar8, iParam0->f_32);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
		*(iParam0 + 8) = { StackVal, StackVal, Global_34574 };
		return 1;
	}
	*uParam3 = 0;
	if (!Function_159(iParam0))
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
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_196("restrictVol") };
		bVar9 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Global_26150, &Var0, 4.203895E-45f, Function_194(*(iParam0 + 8), 0.0f, Global_34573, *(iParam0 + 8)), 0.0f, iParam0->f_52, 20.0f, iParam0->f_52);
		DECOR_SET_INT(bVar9, "script", GET_THIS_SCRIPT_ID());
		if (iParam0->f_56 != 4294967295)
		{
			DECOR_SET_INT(StackVal, bVar9, "category");
			Function_192(&bVar9, iParam0->f_32);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
	}
	return 1;
}

bool Function_159(int iParam0) //Position: 0x7A4F / 31311
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
			Function_191(iParam0 + 4);
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
				vVar3 = { 0.0f, 0.0f, Function_118(1) };
				ROTATE_VECTOR_XZ(&vVar3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar3, StackVal) };
				ITERATE_IN_SPHERE(StackVal, vVar3, Function_118(1));
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
						bVar0 = Function_190(StackVal, StackVal, StackVal, vVar9, 0.01f);
					}
					else
					{
						bVar0 = Function_189(StackVal, StackVal, StackVal, vVar9, 0.1f, "locflag", (iParam0 + 64 + 24)->f_16);
					}
				}
				else if ((iParam0 + 64 + 24)->f_16 == 0)
				{
					bVar0 = Function_188(StackVal, StackVal, StackVal, vVar9, Function_151());
				}
				else
				{
					bVar0 = Function_187(StackVal, StackVal, StackVal, vVar9, Function_151(), "locflag", (iParam0 + 64 + 24)->f_16);
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
			Function_191(iParam0 + 4);
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
					if (Function_186(bVar14))
					{
						if (StackVal == (iParam0 + 64)->f_48)
						{
							if ((StackVal && Global_29008[bVar14]) >= 0)
							{
								GET_OBJECT_POSITION(bVar1, &vVar3);
								if (VDIST(vVar9, vVar3) < fVar13 && VDIST(vVar9, vVar3) > Function_118(1))
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
				Function_185(iParam0 + 8, 99.0f, iParam0 + 8, 10);
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
				Function_184(&vVar9, &vVar6);
				vVar3 = { StackVal, StackVal, Function_184(&vVar9, &vVar6) };
				if (!Function_144(StackVal, StackVal, vVar3))
				{
					PRINTSTRING("Player Pos: ");
					PRINTVECTOR(vVar9);
					PRINTNL();
					Function_119(&fVar13, &fVar12);
					if (VDIST(vVar3, vVar9) < ((fVar13 + ((fVar12 - fVar13) / 2.0f)) * 0.8f))
					{
						iVar2 = Function_181(StackVal, StackVal, iParam0, vVar3);
					}
				}
			}
			else
			{
				iVar2 = Function_177(iParam0);
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
					if (!Function_176(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (iParam0->f_60 == 1)
				{
					if (!Function_175(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (Function_13(StackVal, 131072))
				{
					if (StackVal || Function_174(StackVal, Function_174(StackVal, StackVal, *(iParam0 + 8)), Global_34574))
					{
						return 0;
					}
				}
				if (StackVal & 1024 == 1024)
				{
					if (Function_173(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (!Function_169(iParam0 + 8, iParam0 + 52, 0, iParam0->f_32))
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
				bVar23 = START_CURVE_QUERY(Global_28841, vVar3, Function_168((iParam0 + 64)->f_120, 0), 0.0f, 20.0f, 5.0f, 0);
			}
			else
			{
				bVar23 = START_CURVE_QUERY(Global_28841, vVar9, Function_168((iParam0 + 64)->f_120, 0), 120.0f, 150.0f, 5.0f, 0);
			}
			if (GET_NUM_POINTS_IN_CURVE_QUERY(bVar23) >= 0)
			{
				bVar21 = RAND_INT_RANGE(0, (GET_NUM_POINTS_IN_CURVE_QUERY(bVar23) - 1));
				GET_POINT_FROM_CURVE_QUERY(bVar23, bVar21, &Var15);
				Function_167(&Var15);
				*(iParam0 + 8) = { StackVal, StackVal, Function_167(&Var15) };
				iParam0->f_20 = Var15.f_12;
				(iParam0 + 20)->f_4 = Var15.f_16;
				iParam0->f_48 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(bVar23, bVar21);
				UNK_0xDF93BD7C(bVar23);
			}
			else
			{
				UNK_0xDF93BD7C(bVar23);
				return 0;
			}
			if (iParam0->f_60 == 2)
			{
				if (!Function_176(StackVal, StackVal, *(iParam0 + 8)))
				{
					return 0;
				}
			}
			if (iParam0->f_60 == 1)
			{
				if (!Function_175(StackVal, StackVal, *(iParam0 + 8)))
				{
					return 0;
				}
			}
			if (iParam0->f_60 == 0)
			{
				if (!(StackVal || Function_176(StackVal, Function_175(StackVal, StackVal, *(iParam0 + 8)), *(iParam0 + 8))))
				{
					return 0;
				}
			}
			if (Function_13(StackVal, 131072))
			{
				if (StackVal || Function_174(StackVal, Function_174(StackVal, StackVal, *(iParam0 + 8)), Global_34574))
				{
					return 0;
				}
			}
			if (StackVal && !Function_169(iParam0 + 8, iParam0 + 52, 0, iParam0->f_32) == 262144)
			{
				return 0;
			}
			break;
		
		case 0x00000004:
			if (!Function_164((iParam0 + 64)->f_120) < 0)
			{
				return 0;
			}
			break;
		
		case 0x00000007:
			switch ((iParam0 + 64)->f_128)
			{
				case 0x00000001:
					bVar24 = Function_161(StackVal, Global_29004, Global_29005, Global_29006, 1);
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
						bVar24 = Function_161(StackVal, Global_29004, Global_29005, (Global_29006 + iVar22), 1);
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
	if (Function_160(StackVal, StackVal, *(iParam0 + 8)))
	{
		return 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(*(iParam0 + 8), 10.0f))
	{
		return 0;
	}
	return 1;
}

bool Function_160(vector3 vParam0) //Position: 0x827A / 33402
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

bool Function_161(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x82AF / 33455
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
								return Function_162(&Global_6298, &Global_7189, bParam3);
								break;
							
							case 0x00000001:
								return Function_162(&Global_6364, &Global_7287, bParam3);
								break;
							
							case 0x00000002:
								return Function_162(&Global_6351, &Global_7268, bParam3);
								break;
							
							default:
								return Function_162(&Global_6391, &Global_7327, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_162(&Global_6501, &Global_7490, bParam3);
								break;
							
							case 0x00000001:
								return Function_162(&Global_6402, &Global_7343, bParam3);
								break;
							
							case 0x00000003:
								return Function_162(&Global_6433, &Global_7389, bParam3);
								break;
							
							case 0x00000002:
								return Function_162(&Global_6490, &Global_7474, bParam3);
								break;
							
							case 0x00000004:
								return Function_162(&Global_6537, &Global_7543, bParam3);
								break;
							
							default:
								return Function_162(&Global_6532, &Global_7536, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_162(&Global_6563, &Global_7581, bParam3);
								break;
							
							case 0x00000001:
								return Function_162(&Global_6614, &Global_7657, bParam3);
								break;
							
							case 0x00000002:
								return Function_162(&Global_6643, &Global_7700, bParam3);
								break;
							
							default:
								return Function_162(&Global_6550, &Global_7562, bParam3);
								break;
						}
						break;
					
					case 0x00000003:
						switch (bVar1)
						{
							case 0x00000001:
								return Function_162(&Global_6667, &Global_7735, bParam3);
								break;
							
							default:
								return Function_162(&Global_6704, &Global_7790, bParam3);
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
								return Function_162(&Global_6709, &Global_7797, bParam3);
								break;
							
							case 0x00000001:
								return Function_162(&Global_6764, &Global_7879, bParam3);
								break;
							
							case 0x00000002:
								return Function_162(&Global_6785, &Global_7910, bParam3);
								break;
							
							default:
								return Function_162(&Global_6810, &Global_7947, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_162(&Global_6815, &Global_7954, bParam3);
								break;
							
							default:
								return Function_162(&Global_6928, &Global_8122, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000002:
								return Function_162(&Global_6933, &Global_8129, bParam3);
								break;
							
							case 0x00000001:
								return Function_162(&Global_6962, &Global_8172, bParam3);
								break;
							
							case 0x00000003:
								return Function_162(&Global_6987, &Global_8209, bParam3);
								break;
							
							default:
								return Function_162(&Global_7027, &Global_8268, bParam3);
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
		return Function_162(&Global_6298, &Global_7189, bParam3);
	}
	if (bVar1 == Global_30640[1])
	{
		return Function_162(&Global_6364, &Global_7287, bParam3);
	}
	if (bVar1 == Global_30640[2])
	{
		return Function_162(&Global_6351, &Global_7268, bParam3);
	}
	if (bVar1 == Global_30658[0])
	{
		return Function_162(&Global_6501, &Global_7490, bParam3);
	}
	if (bVar1 == Global_30658[1])
	{
		return Function_162(&Global_6402, &Global_7343, bParam3);
	}
	if (bVar1 == Global_30658[3])
	{
		return Function_162(&Global_6433, &Global_7389, bParam3);
	}
	if (bVar1 == Global_30658[2])
	{
		return Function_162(&Global_6490, &Global_7474, bParam3);
	}
	if (bVar1 == Global_30658[4])
	{
		return Function_162(&Global_6537, &Global_7543, bParam3);
	}
	if (bVar1 == Global_30668[0])
	{
		return Function_162(&Global_6563, &Global_7581, bParam3);
	}
	if (bVar1 == Global_30668[1])
	{
		return Function_162(&Global_6614, &Global_7657, bParam3);
	}
	if (bVar1 == Global_30668[2])
	{
		return Function_162(&Global_6643, &Global_7700, bParam3);
	}
	if (bVar1 == Global_30679[1])
	{
		return Function_162(&Global_6667, &Global_7735, bParam3);
	}
	if (bVar1 == Global_30685[0])
	{
		return Function_162(&Global_6709, &Global_7797, bParam3);
	}
	if (bVar1 == Global_30685[1])
	{
		return Function_162(&Global_6764, &Global_7879, bParam3);
	}
	if (bVar1 == Global_30685[2])
	{
		return Function_162(&Global_6785, &Global_7910, bParam3);
	}
	if (bVar1 == Global_30693[0])
	{
		return Function_162(&Global_6815, &Global_7954, bParam3);
	}
	if (bVar1 == Global_30707[2])
	{
		return Function_162(&Global_6933, &Global_8129, bParam3);
	}
	if (bVar1 == Global_30707[1])
	{
		return Function_162(&Global_6962, &Global_8172, bParam3);
	}
	if (bVar1 == Global_30707[3])
	{
		return Function_162(&Global_6987, &Global_8209, bParam3);
	}
	if (bVar1 == Global_30628[0])
	{
		return Function_162(&Global_6391, &Global_7327, bParam3);
	}
	if (bVar1 == Global_30628[1])
	{
		return Function_162(&Global_6532, &Global_7536, bParam3);
	}
	if (bVar1 == Global_30628[2])
	{
		return Function_162(&Global_6550, &Global_7562, bParam3);
	}
	if (bVar1 == Global_30628[3])
	{
		return Function_162(&Global_6704, &Global_7790, bParam3);
	}
	if (bVar1 == Global_30633[0])
	{
		return Function_162(&Global_6810, &Global_7947, bParam3);
	}
	if (bVar1 == Global_30633[2])
	{
		return Function_162(&Global_6928, &Global_8122, bParam3);
	}
	if (bVar1 == Global_30633[1])
	{
		return Function_162(&Global_7027, &Global_8268, bParam3);
	}
	return "";
}

var Function_162(var uParam0, var uParam1, bool bParam2) //Position: 0x88C4 / 35012
{
	int iVar0;
	
	iVar0 = bParam2;
	if (iVar0 <= *uParam0 || iVar0 > 0)
	{
		return "";
	}
	if (!Function_163(uParam0[iVar02], 2))
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

bool Function_163(var uParam0, int iParam1) //Position: 0x8916 / 35094
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_164(int iParam0) //Position: 0x8932 / 35122
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
			if (Function_165(GET_SQUAD_FROM_OBJECT(bVar2)) == iParam0)
			{
				iVar0++;
			}
			bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
		}
	}
	DESTROY_ITERATOR(bVar1);
	return iVar0;
}

int Function_165(bool bParam0) //Position: 0x898D / 35213
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 4294967295;
	}
	bVar0 = Function_166(bParam0);
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

var Function_166(bool bParam0) //Position: 0x89C5 / 35269
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

vector3 Function_167(int iParam0) //Position: 0x8A0B / 35339
{
	vector3 vVar0;
	
	vVar0.x = *iParam0;
	vVar0.f_4 = StackVal;
	vVar0.f_8 = StackVal;
	return StackVal, StackVal, vVar0;
}

int Function_168(int iParam0, int iParam1) //Position: 0x8A2A / 35370
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

bool Function_169(var uParam0, float fParam1, int iParam2, bool bParam3) //Position: 0x8A5A / 35418
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
	Function_171(4294967295);
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
			else if (Function_170(uParam0, &uVar0) > fVar5)
			{
				return 0;
			}
		}
		iVar3++;
	}
	return 1;
}

float Function_170(var uParam0, int iParam1) //Position: 0x8B2A / 35626
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*iParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

int Function_171(bool bParam0) //Position: 0x8B48 / 35656
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
						Function_172(iVar0);
					}
					else if (Global_3386)
					{
						if (Function_69(StackVal, StackVal, Global_34573, vVar1) < 25.0f)
						{
							Function_172(iVar0);
						}
					}
					else if (Function_69(StackVal, StackVal, Global_34573, vVar1) < 55.0f)
					{
						Function_172(iVar0);
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
			Function_172(iVar0);
		}
		iVar0++;
	}
	return 0;
}

void Function_172(int iParam0) //Position: 0x8CA9 / 36009
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

bool Function_173(vector3 vParam0) //Position: 0x8D0A / 36106
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

int Function_174(vector3 vParam0) //Position: 0x8DAB / 36267
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

bool Function_175(vector3 vParam0) //Position: 0x8DF7 / 36343
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

bool Function_176(vector3 vParam0) //Position: 0x8E50 / 36432
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

int Function_177(int iParam0) //Position: 0x8ECD / 36557
{
	float fVar0;
	bool bVar1;
	
	Function_119(&fVar0, &bVar1);
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER_PLAYER();
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	Function_180(0);
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
		Function_179(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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
	Function_178(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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

void Function_178(struct<33> Param0) //Position: 0x9068 / 36968
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

void Function_179(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14) //Position: 0x9194 / 37268
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

void Function_180(bool bParam0) //Position: 0x91E5 / 37349
{
	if (bParam0 < 0.1f)
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * bParam0), bParam0);
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

int Function_181(int iParam0, vector3 vParam1) //Position: 0x9229 / 37417
{
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER(vParam1);
	if (Global_30842[34])
	{
		PRINTVECTOR(vParam1);
		PRINTNL();
	}
	Function_183();
	Function_180(0);
	Function_182(0);
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
		Function_179(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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
	Function_178(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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

void Function_182(bool bParam0) //Position: 0x93CB / 37835
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

void Function_183() //Position: 0x947E / 38014
{
	AMBIENT_SET_DISTANCE_FILTER(0.0f, 24.0f);
	return;
}

vector3 Function_184(var uParam0, int iParam1) //Position: 0x948D / 38029
{
	var uVar0;
	bool bVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	bool bVar10;
	vector3 vVar11;
	float fVar14;
	float fVar15;
	vector3 vVar16;
	vector3 vVar19;
	vector3 vVar22;
	int iVar25;
	int iVar31;
	
	bVar10 = START_CURVE_QUERY(Global_28841, *uParam0, 48, 0.0f, 7.0f, 5.0f, 0);
	if (!GET_NUM_CURVES_IN_CURVE_QUERY(bVar10) < 0)
	{
		UNK_0xDF93BD7C(bVar10);
		vVar11 = { 0.0f, 0.0f, 0.0f };
		return StackVal, StackVal, vVar11;
	}
	GET_POINT_FROM_CURVE_QUERY(bVar10, false, &uVar0);
	bVar6 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(bVar10, false);
	if (IS_OBJECT_VALID(bVar6))
	{
		vVar16 = { StackVal, StackVal, *iParam1 };
		UNK_0x19D652F9(bVar6, 50.0f, &uVar0, &iVar25);
		UNK_0x19D652F9(bVar6, -50.0f, &uVar0, &iVar31);
		Function_167(&iVar25);
		vVar19 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*uParam0, Function_167(&iVar25), StackVal) };
		Function_167(&iVar31);
		vVar22 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*uParam0, Function_167(&iVar31), StackVal) };
		fVar15 = VDOT(&vVar16, &vVar19);
		fVar14 = VDOT(&vVar16, &vVar22);
		Function_119(&fVar7, &fVar8);
		fVar9 = ((fVar7 + fVar8) / 2.0f);
		if (fVar15 > 0.0f && fVar14 > 0.0f)
		{
			UNK_0xDF93BD7C(bVar10);
			vVar11 = { 0.0f, 0.0f, 0.0f };
			return StackVal, StackVal, vVar11;
		}
		if (fVar15 > fVar14)
		{
			UNK_0x19D652F9(bVar6, (fVar9 * -1.0f), &uVar0, &iVar31);
			Function_167(&iVar31);
			vVar11 = { StackVal, StackVal, Function_167(&iVar31) };
		}
		else
		{
			UNK_0x19D652F9(bVar6, fVar9, &uVar0, &iVar25);
			Function_167(&iVar25);
			vVar11 = { StackVal, StackVal, Function_167(&iVar25) };
		}
	}
	UNK_0xDF93BD7C(bVar10);
	return StackVal, StackVal, vVar11;
}

int Function_185(int iParam0, float fParam1, int iParam2, int iParam3) //Position: 0x959A / 38298
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
	if (!STREAMING_ARE_BOUNDS_LOADED(*iParam0, 1.0f))
	{
		GET_CAMERA_POSITION(GET_GAME_CAMERA(), &vVar4);
		if (VDIST(*iParam0, vVar4) > 175.0f)
		{
			PRINTSTRING("Camera Position: ");
			PRINTVECTOR(vVar4);
			PRINTNL();
			PRINTSTRING("Probe Position: ");
			PRINTVECTOR(*iParam0);
			PRINTNL();
			PRINTSTRING("Distance");
			PRINTFLOAT(VDIST(*iParam0, vVar4));
			PRINTNL();
		}
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(iParam0, fParam1, iParam2, &uVar0))
	{
		if (!Function_144(StackVal, StackVal, *iParam2))
		{
			return 1;
		}
	}
	while (!IS_EXITFLAG_SET() && iVar3 > iParam3)
	{
		*iParam0 = (*iParam0 + 0.01f);
		iParam0->f_8 = (StackVal + 0.01f);
		if (FIND_GROUND_INTERSECTION(iParam0, fParam1, iParam2, &uVar0))
		{
			if (!Function_144(StackVal, StackVal, *iParam2))
			{
				return 1;
			}
		}
		*iParam2 = { StackVal, StackVal, *iParam0 };
		iParam2->f_4 = (StackVal - fParam1);
		if (!iParam3 != 4294967295)
		{
			iVar3++;
		}
		WAIT(false);
	}
	return 0;
}

bool Function_186(int iParam0) //Position: 0x96CC / 38604
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_187(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, var uParam6) //Position: 0x96E2 / 38626
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
						if (Function_169(&vVar5, &fVar4, 0, 0))
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

var Function_188(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x978A / 38794
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
				if (Function_169(&vVar5, &uVar4, 0, 0))
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

var Function_189(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, var uParam6) //Position: 0x9813 / 38931
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

var Function_190(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x98A8 / 39080
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

int Function_191(int iParam0) //Position: 0x9925 / 39205
{
	if (IS_ITERATOR_VALID(*iParam0))
	{
		ITERATE_EVERYWHERE(*iParam0);
		ITERATE_ON_PARTIAL_NAME(*iParam0, Function_217());
		ITERATE_ON_PARTIAL_MODEL_NAME(*iParam0, Function_217());
		ITERATE_ON_OBJECT_TYPE(*iParam0, 4294967295);
		return 1;
	}
	return 0;
}

int Function_192(bool bParam0, int iParam1) //Position: 0x9956 / 39254
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
	Function_171(DECOR_GET_INT(*bParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
		}
		else
		{
			Function_193(iVar0, bParam0, &uVar1, iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(*bParam0);
	return 0;
}

void Function_193(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x9AB7 / 39607
{
	struct<8> Var0;
	
	Global_26155[iParam05].f_8 = *uParam1;
	Global_26155[iParam05].f_16 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_196("stayout") };
	Global_26155[iParam05].f_12 = CREATE_VOLUME_IN_LAYOUT(Global_26150, &Var0, 3, *iParam2, 0.0f, 0.0f, 0.0f, 12.0f, 5.0f, 12.0f);
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	if (bParam3)
	{
		Global_26155[iParam05].f_4 = ADD_BLIP_FOR_COORD(iParam2, 403, 0f, 2, 0);
		SET_BLIP_BLINK(StackVal, 1, 1, 20.0f);
	}
}

var Function_194(bool bParam0, vector3 vParam1) //Position: 0x9B52 / 39762
{
	vector3 vVar0;
	var uVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		GET_POSITION(bParam0, &vVar0);
		Function_195(StackVal, StackVal, StackVal, StackVal, vVar0, vParam1, &uVar3);
		return UNK_0x9C40E671(&uVar3);
	}
	return 0.0f;
}

void Function_195(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x9B82 / 39810
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

struct<32> Function_196(bool bParam0) //Position: 0x9BA5 / 39845
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_197("0", &cVar8, ""), 4);
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

struct<32> Function_197(char* cParam0, char* cParam1, char* cParam2) //Position: 0x9C0F / 39951
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_198(int iParam0) //Position: 0x9C2E / 39982
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_202();
	iVar1 = 0;
	if (!Function_4(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_201(iParam0[iVar03], 8);
		}
		else if (Function_200())
		{
			iVar1 = 1;
			Function_201(iParam0[iVar03], 8);
		}
		Function_201(iParam0[iVar03], 16);
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
				Function_201(iParam0[iVar03], 1);
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
							Function_201(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_201(iParam0[iVar03], 2);
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
							Function_201(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_201(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_201(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_201(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_201(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_201(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_201(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_201(iParam0[iVar03], 2);
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
	Function_199();
	return 1;
}

void Function_199() //Position: 0x9FA9 / 40873
{
	if (!Function_62(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_200() //Position: 0x9FE9 / 40937
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

void Function_201(var uParam0, int iParam1) //Position: 0xA014 / 40980
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_202() //Position: 0xA025 / 40997
{
	if (!Function_62(128))
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

void Function_203(bool bParam0) //Position: 0xA067 / 41063
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

void Function_204(int iParam0) //Position: 0xA0A9 / 41129
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

bool Function_205(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xA0EC / 41196
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

void Function_206() //Position: 0xA154 / 41300
{
	return;
}

void Function_207(int iParam0) //Position: 0xA15A / 41306
{
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(iParam0);
	return;
}

var Function_208(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xA165 / 41317
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_209(iParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_201(iParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_209(var uParam0, int iParam1, int iParam2) //Position: 0xA19D / 41373
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_4(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_201(uParam0[iVar03], 4);
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

var Function_210(var uParam0, int iParam1, var uParam2, bool bParam3) //Position: 0xA261 / 41569
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
			Function_201(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_201(uParam0[iVar03], 8);
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

int Function_211(int iParam0, int iParam1) //Position: 0xA331 / 41777
{
	int iVar0;
	
	iVar0 = (Global_16876[iParam06].f_12 % iParam1);
	return iVar0;
}

bool Function_212() //Position: 0xA347 / 41799
{
	return (RAND_INT_RANGE(0, 1999) / 1000) != 0;
}

var Function_213(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xA35A / 41818
{
	bool bVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			bVar0 = RAND_FLOAT_RANGE(4.0f, 6.0f);
			break;
		
		case 0x00000001:
			bVar0 = RAND_FLOAT_RANGE(18.0f, 24.0f);
			break;
		
		case 0x00000002:
			bVar0 = RAND_FLOAT_RANGE(45.0f, 55.0f);
			break;
		
		default:
			bVar0 = RAND_FLOAT_RANGE(4.0f, 6.0f);
			break;
	}
	switch (iParam1)
	{
		case 0x00000000:
			bVar0 = (bVar0 * 0.75f);
			break;
		
		case 0x00000001:
			bVar0 = (bVar0 * 1.0f);
			break;
		
		case 0x00000002:
			bVar0 = (bVar0 * 1.25f);
			break;
		
		default:
			bVar0 = (bVar0 * 0.75f);
			break;
	}
	if (bParam2)
	{
		bVar0 = (bVar0 * (0.75f + ((TO_FLOAT(Function_33(5)) / 100.0f) * 0.5f)));
	}
	if (bParam3)
	{
		if (HAS_ITEM(Function_37(17), Global_34573))
		{
			bVar0 = (bVar0 * 1.2f);
		}
	}
	if (bParam4)
	{
		bVar0 = (bVar0 * 1.1f);
	}
	if (ROUND(bVar0) <= 1)
	{
		bVar0 = 1.0f;
	}
	return ROUND(bVar0);
}

void Function_214() //Position: 0xA45C / 42076
{
	return;
}

void Function_215(var uParam0, float fParam1) //Position: 0xA462 / 42082
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_216(uParam0, 1);
	Function_86(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_216(var uParam0, var uParam1) //Position: 0xA483 / 42115
{
	*uParam0 = (*uParam0 || uParam1);
	return;
}

var Function_217() //Position: 0xA492 / 42130
{
	var uVar0;
	
	return uVar0;
}

