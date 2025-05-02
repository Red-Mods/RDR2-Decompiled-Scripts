//Decompiled with MagicRDR v1.0
//Function Count : 218
//Statics Count : 170
//Natives Count : 408
//Parameters Count : 62

#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 2;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0.0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	bool bLocal_35 = false;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	int iLocal_44 = 0;
	struct<2> Local_45 = { 0, 0 } ;
	var uLocal_47 = 0;
	bool bLocal_48 = false;
	bool bLocal_49 = false;
	struct<2> Local_50 = { 0, 0 } ;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	int iLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	int iLocal_68 = 0;
	var uLocal_69 = 0;
	int iLocal_70 = 0;
	bool bLocal_71 = false;
	bool bLocal_72 = false;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	int iLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	float fLocal_85 = 0.0f;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	struct<2> Local_88 = { 0, 0 } ;
	var uLocal_90 = 0;
	float fLocal_91 = 0.0f;
	float fLocal_92 = 0.0f;
	float fLocal_93 = 0.0f;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	bool bLocal_100 = false;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	bool bLocal_103 = false;
	bool bLocal_104 = false;
	int iLocal_105 = 0;
	float fLocal_106 = 0.0f;
	int iLocal_107 = 0;
	struct<65> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	var uVar1;
	bool bVar2;
	var uVar4;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	var uVar35;
	float fVar36;
	bool bVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	bool bVar41;
	int iVar42;
	bool bVar43;
	
	iLocal_18 = 0;
	iLocal_19 = 0;
	iLocal_44 = 0;
	Local_45 = Vector(-5.0f, 0.0f, 0.0f);
	bLocal_48 = false;
	bLocal_49 = false;
	Local_50 = Vector(-0,94f, 1,39f, 0,31f);
	uLocal_53 = Vector(-0,04f, 2,25f, 0.0f);
	uLocal_56 = Vector(1,08f, 1,29f, -0,57f);
	iLocal_59 = Vector(0,04f, 88,64f, 0.0f);
	uLocal_62 = Vector(-1,04f, 1,38f, 0,46f);
	uLocal_65 = Vector(-3,48f, -53,07f, 0.0f);
	iLocal_76 = 0;
	iLocal_86 = 0;
	iLocal_87 = 0;
	fLocal_91 = 0,5f;
	fLocal_92 = 5.0f;
	iLocal_94 = 0;
	iLocal_95 = 0;
	bLocal_100 = false;
	iLocal_105 = 0;
	iLocal_107 = 1;
	iVar0 = 0;
	uVar1 = CREATE_LAYOUT(Function_217());
	uVar4 = 12;
	Function_215(&uLocal_96, 0.0f);
	iVar29 = 0;
	iVar33 = 0;
	Function_215(&uLocal_27, 0.0f);
	Function_214();
	uVar35 = Function_213(2, 1, 1, 0, 0);
	fVar36 = 0.0f;
	if ((Global_26652[ScriptParam_0.f_644].f_16 % 3) == 0)
	{
		bLocal_71 = true;
	}
	else if ((Global_26652[ScriptParam_0.f_644].f_16 % 3) == 1)
	{
		bLocal_71 = false;
	}
	else
	{
		bLocal_71 = 2;
	}
	if (bLocal_71 == 0)
	{
		if (Function_212())
		{
			bLocal_48 = true;
		}
		else
		{
			bLocal_48 = false;
		}
	}
	switch (bLocal_71)
	{
		case 0x00000000:
			switch (Global_43787)
			{
				case 0x00000000:
				case 0x00000002:
					bLocal_72 = 207;
					break;
				
				case 0x00000001:
					bLocal_72 = 301;
					break;
			}
			break;
		
		case 0x00000001:
			iVar32 = Function_211(40, 2);
			if (iVar32 == 0)
			{
				bLocal_72 = 63;
			}
			else
			{
				bLocal_72 = 61;
			}
			break;
		
		case 0x00000002:
			iVar32 = Function_211(40, 2);
			if (iVar32 == 0)
			{
				bLocal_72 = 63;
			}
			else
			{
				bLocal_72 = 61;
			}
			break;
	}
	Function_210(&uVar4, bLocal_72, 3, 0);
	Function_208(&uVar4, "nthank_you", 5, 0);
	Function_208(&uVar4, "custom/thank_you", 8, 0);
	Function_208(&uVar4, "Give_money", 1, 0);
	Function_208(&uVar4, "receive_money", 1, 0);
	Function_208(&uVar4, "relic_handoff", 1, 0);
	Function_208(&uVar4, "fan_pardon_letter_link", 1, 0);
	switch (bLocal_71)
	{
		case 0x00000000:
			Function_208(&uVar4, "fan_pardon_letter", 5, 0);
			Function_208(&uVar4, "custom/fan_pardon_letter", 8, 0);
			Function_208(&uVar4, "receive_money", 5, 0);
			Function_208(&uVar4, "custom/receive_money", 8, 0);
			break;
		
		case 0x00000001:
			Function_208(&uVar4, "relic_handoff", 5, 0);
			Function_208(&uVar4, "custom/relic_handoff", 8, 0);
			Function_208(&uVar4, "receive_money", 5, 0);
			Function_208(&uVar4, "custom/receive_money", 8, 0);
			break;
		
		case 0x00000002:
			Function_208(&uVar4, "give_money", 5, 0);
			Function_208(&uVar4, "custom/give_money", 8, 0);
			break;
	}
	Function_207(bLocal_72);
	bVar37 = false;
	iVar38 = 0;
	iVar39 = 0;
	iVar40 = 0;
	if (Global_6625 == 1)
	{
		iVar0 = 5;
	}
	iVar42 = 0;
	bVar43 = false;
	while (!IS_EXITFLAG_SET())
	{
		Function_206();
		bVar41 = 600;
		if (bLocal_35 == 0)
		{
			if (Function_205(&bVar43, &iVar0, &iVar42, &bVar41, bVar37))
			{
				if (bVar43)
				{
					Function_204(&bVar2);
				}
				else
				{
					if (iVar33 >= 0)
					{
						iVar0 = 6;
						bVar41 = false;
					}
					Function_203(&bVar2);
				}
			}
		}
		switch (iVar0)
		{
			case 0x00000000:
				if (Function_198(&uVar4))
				{
					iVar0 = 1;
				}
				break;
			
			case 0x00000001:
				if (Function_158(&ScriptParam_0, &bVar41, &iVar40, &iVar39, 1))
				{
					iVar0 = 2;
					bVar41 = false;
				}
				else if (iVar39 == 1)
				{
					iVar0 = 5;
					bVar41 = false;
				}
				break;
			
			case 0x00000002:
				if (!Function_152(ScriptParam_0.f_64, 0, &iVar38, &bLocal_100, 0, 1, 1, 1))
				{
					iVar0 = 5;
					break;
				}
				if (VDIST(Global_54078, *(&ScriptParam_0 + 16)) > Function_151())
				{
					PRINTVECTOR(*(&ScriptParam_0 + 16));
					PRINTNL();
					PRINTVECTOR(Global_54078);
					PRINTNL();
					iVar0 = 5;
					bVar41 = false;
					break;
				}
				else
				{
					bVar2 = CREATE_ACTOR_IN_LAYOUT(&uVar1, Function_217(), bLocal_72, *(&ScriptParam_0 + 16), *(&ScriptParam_0 + 28));
					SET_ACTOR_ALLOW_BUMP_REACTIONS(&bVar2, 0);
					Function_150(&bVar2);
					SET_ACTOR_CAN_PLAY_GESTURES(&bVar2, false);
					switch (bLocal_71)
					{
						case 0x00000001:
						case 0x00000002:
							TOGGLE_ACTOR_ACTION_SIGNAL_ON(&bVar2, 8, "FASTWALK");
							break;
					}
					Function_149(&uVar1);
					Function_147(4);
					iVar30 = 1;
					AI_SPEECH_SET_ALLOW_FOR_ACTOR(&bVar2, 0);
					UNK_0x99AFD2D1(&bVar2, 1, 1);
					SET_ACTOR_CAN_PLAY_GESTURES(&bVar2, false);
					Function_146(&uVar1, uVar35);
					iVar0 = 3;
					bVar41 = false;
				}
				break;
			
			case 0x00000003:
				Function_145();
				Function_131(StackVal, Function_145(), &bVar37, ScriptParam_0.f_64, &bVar2, 100, 0x42a00000, 1);
				if (!Function_152(ScriptParam_0.f_64, &bVar2, &iVar38, &bLocal_100, 0, 1, 1, 1))
				{
					iVar0 = 5;
					bVar41 = false;
					break;
				}
				if (Function_128(&bVar2, &iVar31, &fVar36, 0, 0, 0x40400000))
				{
					SET_ACTOR_CUTSCENE_MODE(&bVar2, 0);
					switch (iVar31)
					{
						case 0x00000001:
							Function_127(&bVar2);
							bLocal_49 = true;
							TASK_FLEE_ACTOR(&bVar2, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
							break;
						
						case 0x00000002:
							Function_127(&bVar2);
							bLocal_49 = true;
							TASK_FLEE_ACTOR(&bVar2, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
							Function_123(4294967196, 1, 0);
							break;
						
						case 0x00000004:
							Function_127(&bVar2);
							bLocal_49 = true;
							TASK_FLEE_ACTOR(&bVar2, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
							Function_123(4294967196, 1, 0);
							break;
						
						case 0x00000008:
							bLocal_49 = true;
							Function_127(&bVar2);
							Function_123(4294967196, 1, 0);
							TASK_FLEE_ACTOR(&bVar2, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
							break;
						
						case 0x00000010:
							Function_127(&bVar2);
							bLocal_49 = true;
							TASK_FLEE_ACTOR(&bVar2, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
							break;
					}
					iVar0 = 5;
					bVar41 = false;
					break;
				}
				if (Function_121(&bVar2, 0))
				{
					if (Function_120(&Global_54076, &bVar2) < Function_118(1))
					{
						iVar0 = 5;
						bVar41 = false;
						break;
					}
				}
				if (Function_18(&iVar33, &bVar2, &uVar1, &bVar41, uVar35))
				{
					iVar0 = 5;
					bVar41 = false;
				}
				break;
			
			case 0x00000005:
				iVar0 = 6;
				bVar41 = false;
				break;
			
			case 0x00000006:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				bVar41 = false;
				break;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(bVar41);
		}
	}
	Function_203(&bVar2);
	Function_17(bLocal_72);
	if (iVar30 == 1)
	{
		Function_15(4);
	}
	if (!bVar37)
	{
		Function_14(&bVar2);
		if (IS_OBJECT_VALID(&uVar1))
		{
			UNK_0xA936E73B(&uVar1, 1);
			MARK_OBJECT_FOR_AGGRESSIVE_CLEANUP(&uVar1, 1);
		}
	}
	if (ScriptParam_0.f_40)
	{
		Global_6642 = 0;
	}
	if (!bVar37)
	{
		Function_8(ScriptParam_0.f_64, 0.0f, 0, 1, 0);
	}
	Function_6(&bVar2);
	if (Function_121(&bVar2, 0) && !bLocal_49)
	{
		TASK_CLEAR(&bVar2);
		if (bLocal_100)
		{
			TASK_FLEE_ACTOR(&bVar2, &Global_54076, 200.0f, -1.0f, 0, 0, 0);
		}
		else
		{
			TASK_WANDER(&bVar2, -1.0f);
		}
		SET_ACTOR_CUTSCENE_MODE(&bVar2, 0);
		TASK_PRIORITY_SET(&bVar2, 2);
		Function_5(&bVar2);
	}
	if (IS_ACTOR_VALID(&bVar2))
	{
		AI_SPEECH_SET_ALLOW_FOR_ACTOR(&bVar2, 1);
		UNK_0x99AFD2D1(&bVar2, 0, 0);
	}
	REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_68);
	REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_68);
	if (IS_VOLUME_VALID(&iLocal_68))
	{
		DESTROY_VOLUME(&iLocal_68);
	}
	if (IS_VOLUME_VALID(&uLocal_42))
	{
		DESTROY_VOLUME(&uLocal_42);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&iLocal_40))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&iLocal_40);
	}
	Function_1(&uVar4);
	RELEASE_LAYOUT_REF(&uVar1);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x7A2 / 1954
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_2(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_2(struct<2>[] Param0, int iParam1) //Position: 0x7CA / 1994
{
	if (Function_4(&(Param0[iParam12]), 4))
	{
		if (Function_4(&(Param0[iParam12]), 1))
		{
			switch (StackVal)
			{
				case 0x00000000:
					STREAMING_EVICT_PROP(&(Param0[iParam12]));
					break;
				
				case 0x00000007:
					STREAMING_EVICT_PROPSET(&(Param0[iParam12]));
					break;
				
				case 0x00000002:
				case 0x00000003:
					STREAMING_EVICT_ACTOR(&(Param0[iParam12]), 4294967295);
					break;
				
				case 0x00000005:
					REMOVE_ANIM_SET(GET_ASSET_NAME(StackVal, &(Param0[iParam12])));
					break;
				
				case 0x00000001:
					STREAMING_EVICT_GRINGO(&(Param0[iParam12]));
					break;
				
				case 0x00000008:
					REMOVE_ACTION_TREE(GET_ASSET_NAME(StackVal, &(Param0[iParam12])));
					break;
				
				case 0x0000000A:
					REMOVE_STRING_TABLE(GET_ASSET_NAME(StackVal, &(Param0[iParam12])));
					break;
				
				case 0x00000004:
					STREAMING_EVICT_SCRIPT(&(Param0[iParam12]));
					break;
				
				case 0x00000006:
					STREAMING_UNREQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME(&(Param0[iParam12]), 6));
					break;
				
				case 0x0000000C:
					STREAMING_EVICT_GRINGO_DICTIONARY(&(Param0[iParam12]));
					break;
				
				default:
					break;
			}
			Function_3(&(Param0[iParam12]), 1);
			Function_3(&(Param0[iParam12]), 2);
			Function_3(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_3(struct<13> Param0) //Position: 0x915 / 2325
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_4(struct<13> Param0) //Position: 0x932 / 2354
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(int iParam0) //Position: 0x950 / 2384
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		SET_ACTOR_CAN_BE_HARDLOCKED(&iParam0, 1);
		AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&iParam0, 0);
	}
	return;
}

int Function_6(bool bParam0) //Position: 0x96D / 2413
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		Function_7(&bParam0);
		return 1;
	}
	return 0;
}

void Function_7(int iParam0) //Position: 0x985 / 2437
{
	int iVar0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		iVar0 = GET_BLIP_ON_ACTOR(&iParam0);
		while (IS_BLIP_VALID(&iVar0))
		{
			REMOVE_BLIP(&iVar0);
			iVar0 = GET_BLIP_ON_ACTOR(&iParam0);
		}
	}
	return;
}

bool Function_8(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x9B8 / 2488
{
	bool bVar0;
	bool bVar1;
	
	if (Global_47151[16])
	{
		PRINTSTRING(GET_ASSET_NAME(&Global_27462[iParam052] + 160, 4));
	}
	fParam1 = &fParam1;
	if (&bParam4)
	{
		HUD_CLEAR_OBJECTIVE_QUEUE();
		Global_6642 = 0;
		Function_10("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
		if (StackVal & 128 == 128)
		{
			Global_27462[iParam052].f_184 = 0;
		}
		if (StackVal & 64 == 64)
		{
			if (Global_6608)
			{
				if (IS_SCRIPT_VALID(Global_10986) && Global_10986 == GET_THIS_SCRIPT_ID())
				{
					return 0;
				}
			}
			Global_6608 = 1;
			Global_10986 = GET_THIS_SCRIPT_ID();
		}
		return 1;
	}
	if (iParam0 != 4294967295)
	{
		bVar0 = GET_TIME_OF_DAY();
		bVar1 = GET_TOTAL_MINUTES(&Global_27462[iParam052] + 368);
		if (Global_47151[16])
		{
			PRINTSTRING("Current Time of day:");
			Function_9(&bVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_9(&bVar0);
		}
		if (!&bParam3)
		{
			ADD_TIME(&bVar0, 0, 0, bVar1, 0);
		}
		else
		{
			ADD_TIME(&bVar0, 0, 0, 10, 0);
		}
		if (Global_47151[16])
		{
			PRINTSTRING("Formed time of day:");
			Function_9(&bVar0);
		}
		*(&Global_27462[iParam052] + 376) = &bVar0;
		Global_26652[iParam04] = &bVar0;
		if (&bParam2)
		{
			Global_26652[iParam04].f_8 = StackVal + 1;
			if (StackVal & 128 == 128)
			{
				Global_27462[iParam052].f_184 = 0;
			}
			if (StackVal & 64 == 64)
			{
				if (Global_6608)
				{
					if (IS_SCRIPT_VALID(Global_10986) && Global_10986 == GET_THIS_SCRIPT_ID())
					{
						return 0;
					}
				}
				Global_6608 = 1;
				Global_10986 = GET_THIS_SCRIPT_ID();
			}
		}
		return 1;
	}
	LOG_ERROR("Invalid beat index");
	return 0;
}

void Function_9(bool bParam0) //Position: 0xC24 / 3108
{
	PRINTSTRING("Day ");
	PRINTINT(GET_DAY(&bParam0));
	PRINTSTRING(": ");
	PRINTINT(GET_HOUR(&bParam0));
	PRINTSTRING(":");
	PRINTINT(GET_MINUTE(&bParam0));
	PRINTSTRING(":");
	PRINTINT(GET_SECOND(&bParam0));
	return;
}

void Function_10(var uParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0xC6E / 3182
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_11(Global_10966) };
		}
		PRINT_SMALL_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &Var0, &iParam5);
	}
	else
	{
		uVar4 = "";
		PRINT_SMALL_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &uVar4, &iParam5);
	}
}

struct<16> Function_11(int iParam0) //Position: 0xCF3 / 3315
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

bool Function_12() //Position: 0xD32 / 3378
{
	if (Function_13(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_13(int iParam0, int iParam1) //Position: 0xD4D / 3405
{
	return (iParam0 && iParam1) == 0;
}

void Function_14(int iParam0) //Position: 0xD5A / 3418
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		RESET_ANIM_SET_FOR_ACTOR(&iParam0, 0);
		TASK_FLEE_ACTOR(&iParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
		TASK_PRIORITY_SET(&iParam0, false);
	}
	return;
}

void Function_15(int iParam0) //Position: 0xD8A / 3466
{
	Function_16(&Global_43580, iParam0);
	return;
}

void Function_16(var uParam0, int iParam1) //Position: 0xD98 / 3480
{
	uParam0 = (uParam0 || iParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_17(bool bParam0) //Position: 0xDB7 / 3511
{
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(bParam0);
	return;
}

bool Function_18(var uParam0, bool bParam1, int iParam2, var uParam3, bool bParam4) //Position: 0xDC2 / 3522
{
	switch (uParam0)
	{
		case 0x00000000:
			if (Function_117(&bParam1, &Global_54076, &iLocal_105, &iParam2, 50.0f, &bLocal_103, &uLocal_101, &uLocal_96, &iLocal_95, 12.0f, 1, 1, -3.0f, 0, 0, 0))
			{
				if (bLocal_103)
				{
					ADD_BLIP_FOR_ACTOR(&bParam1, 325, 0.0f, 3, 0);
					SET_ACTOR_CUTSCENE_MODE(&bParam1, 1);
					AI_GOAL_LOOK_AT_ACTOR(&bParam1, &Global_54076, 1, 1065353216, 3212836864, 3212836864, 0);
					TASK_FACE_ACTOR(&bParam1, &Global_54076, 1, 3212836864);
					switch (bLocal_71)
					{
						case 0x00000000:
							Function_116(&bParam1, &Global_54076, "highHonorFanMsg01", 0, 5, 60, 1, 1);
							Function_115(40);
							break;
						
						case 0x00000001:
						case 0x00000002:
							Function_116(&bParam1, &Global_54076, "highHonorDonationMsg01", "highHonorDonationMsg01", 5, 60, 1, 1);
							Function_115(40);
							break;
					}
					Function_215(&uLocal_96, 0.0f);
					uParam0 = 1;
				}
			}
			else
			{
				TASK_WANDER(&bParam1, -1.0f);
				return 1;
			}
			break;
		
		case 0x00000001:
			if (!IS_AMBIENT_SPEECH_PLAYING(&bParam1) || Function_111(&uLocal_96, 4,5f))
			{
				if (Function_120(&Global_54076, &bParam1) > 30.0f)
				{
					switch (bLocal_71)
					{
						case 0x00000000:
							Function_116(&bParam1, &Global_54076, "highHonorFanMsg02", "highHonorFanMsg02", 5, 60, 1, 1);
							break;
						
						case 0x00000001:
						case 0x00000002:
							Function_116(&bParam1, &Global_54076, "highHonorDonationMsg02", "highHonorDonationMsg02", 5, 60, 1, 1);
							break;
					}
					Function_215(&uLocal_96, 0.0f);
					uParam0 = 2;
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 0x00000002:
			if (!IS_AMBIENT_SPEECH_PLAYING(&bParam1) || Function_111(&uLocal_96, 7.0f))
			{
				if (Function_120(&Global_54076, &bParam1) > 30.0f)
				{
					switch (bLocal_71)
					{
						case 0x00000000:
							uParam0 = 3;
							break;
						
						case 0x00000001:
							Function_116(&bParam1, &Global_54076, "highHonorDonationMsg03", "highHonorDonationMsg03", 5, 60, 1, 1);
							uParam0 = 3;
							break;
						
						case 0x00000002:
							Function_116(&bParam1, &Global_54076, "highHonorDonationMsg04", "highHonorDonationMsg04", 5, 60, 1, 1);
							bLocal_104 = true;
							uParam0 = 3;
							break;
					}
					Function_215(&uLocal_96, 0.0f);
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 0x00000003:
			if (!FIRE_IS_ACTOR_ON_FIRE(&bParam1))
			{
				if (!IS_ACTOR_HOGTIED(&bParam1))
				{
					if (Function_109())
					{
						if (Function_120(&Global_54076, &bParam1) > 30.0f)
						{
							Function_146(&iParam2, bParam4);
							if (!IS_AMBIENT_SPEECH_PLAYING(&bParam1) || Function_111(&uLocal_96, 4.0f))
							{
								ATTACH_OBJECTS(StackVal, StackVal, GET_OBJECT_FROM_VOLUME(&uLocal_42), &bParam1, Function_217(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
								switch (bLocal_71)
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
								fLocal_106 = Function_120(&Global_54076, &bParam1);
								Function_215(&uLocal_31, 0.0f);
								uParam0 = 4;
							}
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			if (!FIRE_IS_ACTOR_ON_FIRE(&bParam1))
			{
				if (!IS_ACTOR_HOGTIED(&bParam1))
				{
					if (Function_109())
					{
						switch (bLocal_71)
						{
							case 0x00000000:
								if (IS_SCRIPT_USE_CONTEXT_VALID(&iLocal_40))
								{
									if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(&iLocal_40))
									{
										HUD_CLEAR_HELP();
										DESTROY_VOLUME(&uLocal_42);
										TASK_STAND_STILL(&bParam1, -1.0f, 0, 0);
										uParam3 = 0;
										uParam0 = 5;
									}
								}
								break;
							
							case 0x00000001:
								if (IS_SCRIPT_USE_CONTEXT_VALID(&iLocal_40))
								{
									if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(&iLocal_40))
									{
										HUD_CLEAR_HELP();
										DESTROY_VOLUME(&uLocal_42);
										TASK_STAND_STILL(&bParam1, -1.0f, 0, 0);
										uParam3 = 0;
										uParam0 = 5;
									}
								}
								break;
							
							case 0x00000002:
								if (IS_SCRIPT_USE_CONTEXT_VALID(&iLocal_40))
								{
									if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(&iLocal_40))
									{
										if (Function_107() <= bParam4)
										{
											HUD_CLEAR_HELP();
											DESTROY_VOLUME(&uLocal_42);
											Function_116(&Global_54076, &bParam1, "HonorDonationPlayerMsg03", "HonorDonationPlayerMsg03", 5, 60, 1, 1);
											iLocal_107 = 0;
											if (IS_SCRIPT_USE_CONTEXT_VALID(&iLocal_40))
											{
												RELEASE_SCRIPT_USE_CONTEXT(&iLocal_40);
											}
											uParam0 = 6;
										}
										else
										{
											HUD_CLEAR_HELP();
											DESTROY_VOLUME(&uLocal_42);
											TASK_STAND_STILL(&bParam1, -1.0f, 0, 0);
											uParam3 = 0;
											uParam0 = 5;
										}
									}
								}
								break;
						}
					}
					else
					{
						uParam0 = 3;
						if (IS_SCRIPT_USE_CONTEXT_VALID(&iLocal_40))
						{
							RELEASE_SCRIPT_USE_CONTEXT(&iLocal_40);
						}
					}
				}
				else
				{
					uParam0 = 3;
					if (IS_SCRIPT_USE_CONTEXT_VALID(&iLocal_40))
					{
						RELEASE_SCRIPT_USE_CONTEXT(&iLocal_40);
					}
				}
			}
			else
			{
				uParam0 = 3;
				if (IS_SCRIPT_USE_CONTEXT_VALID(&iLocal_40))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&iLocal_40);
				}
			}
			if (Function_120(&Global_54076, &bParam1) < (fLocal_106 + 10.0f) || Function_111(&uLocal_31, 15.0f))
			{
				iLocal_107 = 1;
				HUD_CLEAR_HELP();
				DESTROY_VOLUME(&uLocal_42);
				switch (bLocal_71)
				{
					case 0x00000000:
						break;
					
					case 0x00000001:
						Function_116(&Global_54076, &bParam1, "HonorDonationPlayerMsg02", "HonorDonationPlayerMsg02", 5, 60, 1, 1);
						break;
					
					case 0x00000002:
						Function_116(&Global_54076, &bParam1, "HonorDonationPlayerMsg02", "HonorDonationPlayerMsg02", 5, 60, 1, 1);
						break;
				}
				uParam0 = 6;
			}
			break;
		
		case 0x00000005:
			uParam3 = 0;
			if (!FIRE_IS_ACTOR_ON_FIRE(&bParam1))
			{
				if (!IS_ACTOR_HOGTIED(&bParam1))
				{
					if (Function_109())
					{
						if (Function_43(&bParam1, &Global_54076, &iParam2, &iLocal_94, &iLocal_87, &uParam3, &uLocal_101))
						{
							if (iLocal_94 == 1)
							{
								switch (bLocal_71)
								{
									case 0x00000000:
										if (bLocal_48 == 1)
										{
											Function_42(9, 0, 1);
										}
										else
										{
											Function_38(bParam4, 1, 1);
										}
										break;
									
									case 0x00000001:
										if (!Function_35(67))
										{
											Function_42(67, 1, 1);
										}
										else
										{
											Function_38(bParam4, 1, 1);
										}
										break;
									
									case 0x00000002:
										Function_34(&bParam1, bParam4);
										Function_19(bParam4, 1);
										break;
								}
								return 1;
							}
						}
						return 1;
					}
					uParam0 = 3;
					if (IS_SCRIPT_USE_CONTEXT_VALID(&iLocal_40))
					{
						RELEASE_SCRIPT_USE_CONTEXT(&iLocal_40);
					}
				}
				else
				{
					uParam0 = 3;
					if (IS_SCRIPT_USE_CONTEXT_VALID(&iLocal_40))
					{
						RELEASE_SCRIPT_USE_CONTEXT(&iLocal_40);
					}
				}
			}
			else
			{
				uParam0 = 3;
				if (IS_SCRIPT_USE_CONTEXT_VALID(&iLocal_40))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&iLocal_40);
				}
			}
			break;
		
		case 0x00000006:
			if (bLocal_104)
			{
				if (!IS_AMBIENT_SPEECH_PLAYING(&Global_54076))
				{
					if (!IS_AMBIENT_SPEECH_PLAYING(&bParam1))
					{
						if (iLocal_107 == 1)
						{
							Function_123(4294967276, 1, 0);
							Function_116(&bParam1, &Global_54076, "highHonorDonationMsg06", "highHonorDonationMsg06", 5, 60, 1, 1);
						}
						else
						{
							Function_116(&bParam1, &Global_54076, "highHonorDonationMsg07", "highHonorDonationMsg07", 5, 60, 1, 1);
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

int Function_19(bool bParam0, bool bParam1) //Position: 0x15F4 / 5620
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
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, (bParam0 * 4294967295), 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_33(0));
	return 1;
}

int Function_20(int iParam0, bool bParam1, bool bParam2) //Position: 0x1685 / 5765
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_DECREASE_INT_NOW: You cannot decrease this STAT_TYPE_LIFETIME: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_DECREASE_INT_NOW: You cannot decrease a STAT_TYPE_LIFETIME!");
		return 0;
	}
	if (Global_55480[iParam016].f_96 != 2 && Global_54086[iParam0] >= 0.0f)
	{
		Global_54086[iParam0] = 0.0f;
		return 1;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: iDecreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] - TO_FLOAT(bParam1));
	Function_32(iParam0);
	if (bParam2 && bParam1 == 0)
	{
		Function_21(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			REMOVE_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076);
			iVar1++;
		}
	}
	return 1;
}

void Function_21(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x1882 / 6274
{
	char* cVar0[32];
	bool bVar8;
	struct<8> Var9;
	int iVar17;
	int iVar18;
	float fVar19;
	float fVar20;
	int iVar21;
	
	if (bParam3)
	{
		cVar0 = I2STR(ROUND(fParam2));
	}
	else
	{
		cVar0 = F2STR(fParam2, 6, 2);
	}
	strcpy(&Global_55480[iParam016] + 32, "", 32);
	if (&bParam4)
	{
		if (bParam1)
		{
			strcpy(&cVar1, "+", 4);
		}
		else
		{
			strcpy(&cVar1, "-", 4);
		}
		stradd(&Global_55480[iParam016] + 32, &cVar1, 32);
	}
	if (bParam1)
	{
		iVar2 = 0;
	}
	else
	{
		iVar2 = 1;
	}
	if (Global_55480[iParam016].f_124 != 3 || Global_55480[iParam016].f_96 != 21)
	{
		stradd(&Global_55480[iParam016] + 32, "$", 32);
	}
	stradd(&Global_55480[iParam016] + 32, &cVar0, 32);
	switch (Global_55480[iParam016].f_96)
	{
		case 0x00000010:
		case 0x00000011:
			strcpy(&Global_55480[iParam016] + 32, "", 32);
			break;
		
		case 0x00000016:
			if (fParam2 > 2000.0f)
			{
				stradd(&Global_55480[iParam016] + 32, " lbs", 32);
			}
			else
			{
				fParam2 = (fParam2 / 2000.0f);
				memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
				stradd(&Global_55480[iParam016] + 32, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
			if (fParam2 <= 60.0f)
			{
				bVar7 = false;
				bVar5 = (FLOOR(fParam2) / 60);
				if (bVar5 > 60)
				{
					bVar4 = (bVar5 / 60);
					bVar5 = (bVar5 - bVar4 * 60);
					bVar6 = FLOOR(((fParam2 - TO_FLOAT(bVar4 * 60 * 60)) - TO_FLOAT(bVar5 * 60)));
					if (bVar4 > 24)
					{
						bVar3 = (bVar4 / 24);
						bVar4 = (bVar4 - bVar3 * 24);
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar3), 32);
						if (bVar3 >= 1)
						{
							stradd(&Global_55480[iParam016] + 32, " days", 32);
						}
						else
						{
							stradd(&Global_55480[iParam016] + 32, " day", 32);
						}
						bVar7 = true;
					}
					if (bVar4 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_55480[iParam016] + 32, " ", 32);
						}
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar4), 32);
						stradd(&Global_55480[iParam016] + 32, " hr", 32);
						bVar7 = true;
					}
					if (bVar5 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_55480[iParam016] + 32, " ", 32);
						}
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar5), 32);
						stradd(&Global_55480[iParam016] + 32, " min", 32);
						bVar7 = true;
					}
					if (bVar6 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_55480[iParam016] + 32, " ", 32);
						}
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar6), 32);
						stradd(&Global_55480[iParam016] + 32, " sec", 32);
						bVar7 = false;
					}
				}
				else
				{
					stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar5), 32);
					stradd(&Global_55480[iParam016] + 32, " min", 32);
					bVar6 = FLOOR((fParam2 - TO_FLOAT(bVar5 * 60)));
					if (bVar6 >= 0)
					{
						stradd(&Global_55480[iParam016] + 32, " ", 32);
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar6), 32);
						stradd(&Global_55480[iParam016] + 32, " sec", 32);
					}
				}
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, &cVar0, 32);
				stradd(&Global_55480[iParam016] + 32, " sec", 32);
			}
			break;
		
		case 0x00000018:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
			fParam2 = (fParam2 * 3,28084f);
			if (fParam2 > 5280.0f)
			{
				bVar8 = false;
			}
			else
			{
				fParam2 = (fParam2 / 5280.0f);
				bVar8 = true;
			}
			if ((fParam2 - IntToFloat(FLOOR(fParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(fParam2)), 32);
			}
			if (bVar8)
			{
				stradd(&Global_55480[iParam016] + 32, " mi", 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, " ft", 32);
			}
			break;
		
		case 0x00000019:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
			if ((fParam2 - IntToFloat(FLOOR(fParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(fParam2)), 32);
			}
			if (fParam2 < 1.0f)
			{
				stradd(&Global_55480[iParam016] + 32, " days", 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, " day", 32);
			}
			break;
		
		case 0x0000000F:
			if (iParam0 == 390)
			{
				stradd(&Global_55480[iParam016] + 32, UI_GET_STRING("stat_of"), 32);
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_31(390))), 32);
			}
			break;
	}
	CLEAR_STAT_MESSAGE();
	if (!Global_77928)
	{
		iVar21 = 0;
		switch (Global_55480[iParam016].f_96)
		{
			case 0x00000010:
			case 0x00000011:
			case 0x00000008:
			case 0x0000000C:
			case 0x00000009:
			case 0x0000000A:
			case 0x00000006:
				if (&bParam6)
				{
					fVar19 = fParam2;
					fVar20 = 0.0f;
				}
				else if (bParam1)
				{
					fVar19 = (Function_30(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_30(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_28(iParam0, fVar19, fVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_25(fVar19, fParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_23(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_22(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_217(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_22(int iParam0) //Position: 0x1EC0 / 7872
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_23(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1ED1 / 7889
{
	char* cVar0[32];
	
	if (&bParam3)
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
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_24(char* cParam0) //Position: 0x1FC8 / 8136
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_25(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1FE3 / 8163
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_27(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_26(Function_27(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_26(int iParam0, int iParam1) //Position: 0x204A / 8266
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_27(int iParam0, bool bParam1) //Position: 0x205C / 8284
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_28(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x206E / 8302
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
	if (Global_55480[iParam016].f_112 != 0.0f)
	{
		fVar0 = 100.0f;
	}
	else
	{
		fVar0 = Global_55480[iParam016].f_112;
	}
	fVar1 = Global_55480[iParam016].f_108;
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
		uParam3 = ROUND((fVar2 * 100.0f));
		uParam4 = ROUND((fVar3 * 100.0f));
	}
	else
	{
		uParam3 = ROUND(((fParam1 * 100.0f) / fVar0));
		uParam4 = ROUND(((fParam2 * 100.0f) / fVar0));
	}
}

int Function_29(int iParam0) //Position: 0x21A2 / 8610
{
	return Global_55480[iParam016].f_96;
}

float Function_30(int iParam0) //Position: 0x21B1 / 8625
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_31(int iParam0) //Position: 0x21EA / 8682
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_32(int iParam0) //Position: 0x2227 / 8743
{
	if (Global_55480[iParam016].f_112 == 0.0f)
	{
		if (Global_54086[iParam0] < Global_55480[iParam016].f_112)
		{
			PRINTSTRING("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMaxRange - ");
			PRINTSTRING(&(Global_55480[iParam016]));
			PRINTNL();
			LOG_WARNING("STAT_CHECK_RANGES: Attempting to increment a STAT out of its fMaxRange");
		}
	}
	if (Global_55480[iParam016].f_108 == 0.0f)
	{
		if (Global_54086[iParam0] > Global_55480[iParam016].f_108)
		{
			PRINTSTRING("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMinRange - ");
			PRINTSTRING(&(Global_55480[iParam016]));
			PRINTNL();
			LOG_ERROR("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMinRange");
		}
	}
	return;
}

int Function_33(int iParam0) //Position: 0x23C1 / 9153
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[iParam0]);
}

void Function_34(var uParam0, bool bParam1) //Position: 0x2402 / 9218
{
	bool bVar0;
	
	if (DECOR_CHECK_EXIST(&uParam0, "iAdditionalMoney"))
	{
		bVar0 = DECOR_GET_INT(&uParam0, "iAdditionalMoney");
		bVar0 = (bVar0 + bParam1);
		DECOR_SET_INT(&uParam0, "iAdditionalMoney", bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, "iAdditionalMoney", bParam1);
	}
	return;
}

bool Function_35(bool bParam0) //Position: 0x2481 / 9345
{
	if (GET_ITEM_COUNT(Function_37(bParam0), Function_36()) >= 0)
	{
		return 1;
	}
	return 0;
}

var Function_36() //Position: 0x2499 / 9369
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

var Function_37(bool bParam0) //Position: 0x24AE / 9390
{
	int iVar0;
	
	iVar0 = SS_GET_STRING(1, bParam0);
	if (!IS_STRING_VALID(&iVar0))
	{
		PRINTSTRING("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value:");
		PRINTINT(bParam0);
		PRINTNL();
		LOG_ERROR("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value! Ask Christian to add it");
	}
	return &iVar0;
}

int Function_38(bool bParam0, bool bParam1, bool bParam2) //Position: 0x25A2 / 9634
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
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_6627)
	{
		Function_39(597, bParam0, 0, 0);
	}
	if (&bParam2)
	{
		if ((Function_33(597) + Function_33(450)) >= 10000)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
			{
				AWARD_ACHIEVEMENT(24);
			}
		}
	}
	return 1;
}

int Function_39(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x2674 / 9844
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_INCREASE_INT_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_INT_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: iIncreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] + TO_FLOAT(bParam1));
	Function_41(iParam0, TO_FLOAT(bParam1), 1);
	Function_32(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_21(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			ADD_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076, 0);
			iVar1++;
		}
	}
	Function_40(iParam0);
	return 1;
}

void Function_40(int iParam0) //Position: 0x289C / 10396
{
	switch (iParam0)
	{
		case 0x00000009:
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x000001C9:
		case 0x000001CA:
		case 0x0000016B:
		case 0x0000016C:
		case 0x0000016D:
		case 0x000001D5:
		case 0x00000190:
		case 0x0000019A:
		case 0x000001DA:
		case 0x000001DB:
		case 0x000001DC:
		case 0x00000197:
		case 0x000001D4:
		case 0x00000199:
		case 0x00000291:
		case 0x00000292:
		case 0x00000293:
		case 0x00000290:
			Global_6662 = 1;
			break;
	}
	return;
}

int Function_41(int iParam0, float fParam1, bool bParam2) //Position: 0x293A / 10554
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	iVar1 = Global_55480[iParam016].f_100;
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
			Global_54086[iVar1] = (Global_54086[iVar1] + 1.0f);
		}
		else
		{
			Global_54086[iVar1] = (Global_54086[iVar1] + fParam1);
		}
	}
	else
	{
		Global_54086[iVar1] = fParam1;
	}
	if (Global_55480[iVar116].f_112 == 0.0f)
	{
		if (Global_54086[iVar1] < Global_55480[iVar116].f_112)
		{
			LOG_WARNING("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to increment a LifetimeStat out of its fMaxRange.");
			Global_54086[iVar1] = Global_55480[iVar116].f_112;
		}
	}
	if (Global_55480[iVar116].f_108 == 0.0f)
	{
		if (Global_54086[iVar1] > Global_55480[iVar116].f_108)
		{
			LOG_WARNING("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to decrement a LifetimeStat out of its fMinRange.");
			Global_54086[iVar1] = Global_55480[iVar116].f_108;
		}
	}
	return 1;
}

int Function_42(bool bParam0, bool bParam1, int iParam2) //Position: 0x2B7E / 11134
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_37(bParam0), Function_36()) == 0)
		{
			ADD_ITEM(Function_37(bParam0), Function_36(), &iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_37(bParam0), Function_36(), &iParam2);
	return 1;
}

bool Function_43(var uParam0, bool bParam1, var uParam2, bool bParam3, var uParam4, var uParam5, bool bParam6) //Position: 0x2BCC / 11212
{
	var uVar0;
	struct<2> Var1;
	struct<2> Var3;
	int iVar5;
	struct<2> Var6;
	float fVar8;
	
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	iVar5 = 30;
	fVar8 = 10.0f;
	if (uParam4 <= 0 && uParam4 > 5)
	{
		if (Function_120(&uParam0, &bParam1) < IntToFloat(iVar5))
		{
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			return 0;
		}
	}
	if (uParam4 <= 0 && uParam4 >= 5)
	{
		if (FIRE_IS_ACTOR_ON_FIRE(&uParam0))
		{
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			return 0;
		}
	}
	switch (uParam4)
	{
		case 0x00000000:
			MEMORY_CLEAR_EVENTS(&uParam0, 0);
			ACTOR_START_FORCE_HOLSTER(&uParam0, 1, 0);
			MEMORY_SET_WEAPON_DRAW_PREFERENCE(&uParam0, 1);
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&uParam0, 1);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(&uParam0, 0);
			uParam4 = 1;
			break;
		
		case 0x00000001:
			uParam5 = 0;
			Var3 = Vector(fLocal_91, 0.0f, fLocal_91);
			GET_OBJECT_RELATIVE_POSITION(GET_OBJECT_FROM_ACTOR(&Global_54076), Var3, &Var6);
			if (Function_106(StackVal, Var6, &Local_88, 9,9f, 0,5f, fLocal_92, 4.0f))
			{
				if (IS_ACTOR_RIDING(&Global_54076))
				{
					uVar0 = GET_MOUNT(&Global_54076);
					if (!IS_AREA_OBSTRUCTED2(Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, 3,5f, 0.0f), Local_88, StackVal), 3.0f, GET_PHYSINST_FROM_ACTOR(&uParam0), GET_PHYSINST_FROM_ACTOR(&uVar0), 0))
					{
						uParam4 = 2;
					}
					else if (fLocal_92 < (fLocal_93 + 16.0f))
					{
						uParam4 = 8;
					}
					else
					{
						fLocal_92 = (fLocal_92 + 4.0f);
					}
				}
				else if (!IS_AREA_OBSTRUCTED(Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, 3,5f, 0.0f), Local_88, StackVal), 3.0f, &uParam0, 0))
				{
					uParam4 = 2;
				}
				else if (fLocal_92 < (fLocal_93 + 16.0f))
				{
					uParam4 = 8;
				}
				else
				{
					fLocal_92 = (fLocal_92 + 4.0f);
				}
			}
			else
			{
				fLocal_93 = fLocal_92;
				if (fLocal_92 < 16.0f)
				{
					uParam4 = 8;
				}
				else
				{
					fLocal_92 = (fLocal_92 + 4.0f);
				}
			}
			break;
		
		case 0x00000002:
			switch (bLocal_71)
			{
				case 0x00000000:
					if (bLocal_48)
					{
						uLocal_36 = CREATE_GRINGO_IN_LAYOUT(&uParam2, Function_217(), "$/content/scripting/gringo/SimpleGringo/fan_pardon_letter_link", Local_88, Var1);
					}
					else
					{
						uLocal_36 = CREATE_GRINGO_IN_LAYOUT(&uParam2, Function_217(), "$/content/scripting/gringo/SimpleGringo/receive_money", Local_88, Var1);
					}
					break;
				
				case 0x00000001:
					if (!Function_35(67))
					{
						uLocal_36 = CREATE_GRINGO_IN_LAYOUT(&uParam2, Function_217(), "$/content/scripting/gringo/SimpleGringo/relic_handoff", Local_88, Var1);
					}
					else
					{
						uLocal_36 = CREATE_GRINGO_IN_LAYOUT(&uParam2, Function_217(), "$/content/scripting/gringo/SimpleGringo/receive_money", Local_88, Var1);
					}
					break;
				
				case 0x00000002:
					uLocal_36 = CREATE_GRINGO_IN_LAYOUT(&uParam2, Function_217(), "$/content/scripting/gringo/SimpleGringo/give_money", Local_88, Var1);
					break;
			}
			Function_105();
			SNAP_OBJECT_TO_GROUND(&uLocal_36, 0,5f, 0, 1092616192);
			uParam4 = 5;
			break;
		
		case 0x00000005:
			uParam5 = 0;
			if (IS_ACTOR_ALIVE(&uParam0))
			{
				if (!FIRE_IS_ACTOR_ON_FIRE(&uParam0))
				{
					if (!IS_ACTOR_HOGTIED(&uParam0))
					{
						if (Function_109())
						{
							if (Function_55(&iLocal_86, &uParam0, &uParam2))
							{
								SET_PLAYER_CONTROL(0, 1, 0, 0);
								uParam4 = 6;
							}
						}
					}
				}
			}
			else
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				uParam4 = 9;
			}
			break;
		
		case 0x00000006:
			uParam4 = 7;
			break;
		
		case 0x00000007:
			uParam4 = 9;
			break;
		
		case 0x00000008:
			switch (bLocal_71)
			{
				case 0x00000000:
					if (Function_44(&uParam0, &Global_54076, &fVar8, &iLocal_44, &uLocal_27, &uParam2, 35.0f, &bParam3, &bParam6, &uParam5, "nthank_you", "nthank_you", "highHonorFanMsg03", "highHonorFanMsg03", 30.0f, 1, -5.0f, 0, 4.0f, 0, "", 0, 0, 0, 0x40800000))
					{
						if (bParam3 == 1)
						{
							SAY_SINGLE_LINE_CONTEXT(&Global_54076, 366, &uParam0, 1, 0, 0, 4294967295, 4294967295, 0, 1);
							uParam4 = 9;
						}
					}
					else
					{
						uParam4 = 9;
					}
					break;
				
				case 0x00000001:
					if (Function_44(&uParam0, &Global_54076, &fVar8, &iLocal_44, &uLocal_27, &uParam2, 35.0f, &bParam3, &bParam6, &uParam5, "nthank_you", "nthank_you", "", "", 30.0f, 1, -5.0f, 0, 4.0f, 0, "", 0, 0, 0, 0x40800000))
					{
						if (bParam3 == 1)
						{
							SAY_SINGLE_LINE_CONTEXT(&Global_54076, 366, &uParam0, 1, 0, 0, 4294967295, 4294967295, 0, 1);
							uParam4 = 9;
						}
					}
					else
					{
						uParam4 = 9;
					}
					break;
				
				case 0x00000002:
					if (Function_44(&uParam0, &Global_54076, &fVar8, &iLocal_44, &uLocal_27, &uParam2, 35.0f, &bParam3, &bParam6, &uParam5, "nthank_you", "nthank_you", "highHonorDonationMsg05", "highHonorDonationMsg05", 30.0f, 1, -5.0f, 0, 4.0f, 0, "HonorDonationPlayerMsg01", 0, 1, 0, 0x40800000))
					{
						if (bParam3 == 1)
						{
							uParam4 = 9;
						}
					}
					else
					{
						uParam4 = 9;
					}
					break;
			}
			break;
		
		case 0x00000009:
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			bParam3 = 1;
			return 1;
			break;
	}
	return 1;
}

bool Function_44(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, float fParam7, int iParam8, var uParam9, var uParam10, float fParam11, bool bParam12, bool bParam13, var uParam14, int iParam15, int iParam16, bool bParam17, int iParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, int iParam23, float fParam24) //Position: 0x31E5 / 12773
{
	int iVar0;
	
	uParam9 = uParam9;
	iParam18 = &iParam18;
	bParam17 = &bParam17;
	if (!IS_ACTOR_VALID(&bParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&bParam1))
	{
		return 0;
	}
	if (GET_LAST_ATTACKER(&bParam0) == &Global_54076)
	{
		TASK_FLEE_ACTOR(&bParam0, &Global_54076, 150.0f, -1.0f, 0, 0, 0);
		return 0;
	}
	switch (uParam3)
	{
		case 0x00000000:
			if (&bParam21)
			{
				uParam3 = 3;
			}
			else
			{
				MEMORY_CLEAR_EVENTS(&bParam0, 0);
				ACTOR_START_FORCE_HOLSTER(&bParam0, 1, 0);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bParam0, 1);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bParam0, 1);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(&bParam0, 0);
				uParam2 = Function_120(&bParam0, &Global_54076);
				AI_GOAL_LOOK_AT_ACTOR_NEW(&bParam0, &bParam1, -1.0f, 1);
				iParam8 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &uParam5, Function_217(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
				ATTACH_OBJECTS(StackVal, StackVal, &iParam8, &bParam1, Function_217(), Vector(0.0f, 0,5f, &iParam16), Vector(0.0f, 0.0f, 0.0f), 4294967295);
				if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &bParam0, 1.0f, &uParam14, 1, 1, 0) || Function_120(&Global_54076, &bParam0) > 2.0f)
				{
					TASK_FOLLOW_OBJECT_AT_DISTANCE(&bParam0, &iParam8, 1.0f, &iParam15);
					TASK_PRIORITY_SET(&bParam0, true);
				}
				uParam3 = 1;
			}
			break;
		
		case 0x00000001:
			if ((Function_120(&bParam0, &bParam1) - uParam2) < fParam6)
			{
				TASK_FLEE_ACTOR(&bParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
				return 0;
			}
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &bParam0, 1.0f, &uParam14, 1, 1, 0))
			{
				iVar0 = TASK_SEQUENCE_OPEN();
				TASK_FACE_ACTOR(0, &bParam1, 0, 3212836864);
				TASK_FACE_ACTOR(0, &bParam1, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bParam0, iVar0);
				TASK_SEQUENCE_RELEASE(iVar0, 1);
				TASK_PRIORITY_SET(&bParam0, true);
				uParam9 = 0;
				uParam3 = 4;
			}
			else if (!Function_121(&bParam0, 0))
			{
				if (IS_ACTOR_VALID(&bParam0))
				{
					TASK_FLEE_ACTOR(&bParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
				}
				return 0;
			}
			break;
		
		case 0x00000003:
			RESET_ANIM_SET_FOR_ACTOR(&bParam0, 1);
			SET_ANIM_SET_FOR_ACTOR(&bParam0, &uParam10, 0);
			SET_ACTION_NODE_FOR_ACTOR(&bParam0, &fParam11);
			TASK_FACE_ACTOR(&bParam0, &bParam1, 1, 3212836864);
			uParam3 = 4;
			break;
		
		case 0x00000004:
			uParam9 = 0;
			if (GET_NTH_TASK_STATUS(&bParam0, 0) != 0 || bParam21)
			{
				if (!&bParam21)
				{
					SET_ANIM_SET_FOR_ACTOR(&bParam0, &uParam10, 1);
					SET_ACTION_NODE_FOR_ACTOR(&bParam0, &fParam11);
				}
				if (&bParam19)
				{
					Function_116(&bParam0, &Global_54076, "nThank_You", 0, 5, 60, 1, 1);
				}
				else
				{
					Function_116(&bParam0, &Global_54076, &bParam12, &bParam13, 5, 60, 1, 1);
				}
				uParam3 = 5;
				Function_215(&uParam4, 0.0f);
			}
			else if (!Function_121(&bParam0, 0))
			{
				return 0;
			}
			break;
		
		case 0x00000005:
			if (iParam23 && !Function_54(&bParam0))
			{
				if (&fParam24 != -1.0f)
				{
					if (!IS_AMBIENT_SPEECH_PLAYING(&bParam0))
					{
						RESET_ANIM_SET_FOR_ACTOR(&bParam0, 1);
						Function_45(&bParam0, 4, 0, 1);
					}
				}
				else if (Function_111(&uParam4, &fParam24))
				{
					RESET_ANIM_SET_FOR_ACTOR(&bParam0, 1);
					Function_45(&bParam0, 4, 0, 1);
				}
			}
			if (&bParam22)
			{
				if (!IS_AMBIENT_SPEECH_PLAYING(&bParam0))
				{
					if (!IS_AMBIENT_SPEECH_PLAYING(&Global_54076))
					{
						if (!IS_STRING_VALID(&bParam20))
						{
							SAY_SINGLE_LINE_CONTEXT(&Global_54076, 409, &bParam0, 0, 0, 5, 4294967295, 4294967295, 0, 1);
						}
						else
						{
							Function_116(&Global_54076, &bParam0, &bParam20, &bParam20, 5, 60, 1, 1);
						}
						uParam3 = 6;
					}
				}
			}
			else if (!IS_AMBIENT_SPEECH_PLAYING(&bParam0))
			{
				uParam3 = 6;
			}
			break;
		
		case 0x00000006:
			if (iParam23 && !Function_54(&bParam0))
			{
				if (Function_111(&uParam4, &fParam24))
				{
					RESET_ANIM_SET_FOR_ACTOR(&bParam0, 1);
					Function_45(&bParam0, 4, 0, 1);
				}
			}
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(&bParam0, &fParam11) && !IS_AMBIENT_SPEECH_PLAYING(&Global_54076))
			{
				RESET_ANIM_SET_FOR_ACTOR(&bParam0, 1);
				fParam7 = 1;
				if (&bParam17)
				{
					Function_45(&bParam0, 4, 0, &iParam15);
					TASK_PRIORITY_SET(&bParam0, 2);
				}
				AI_GOAL_LOOK_CLEAR(&bParam0);
				ACTOR_END_FORCE_HOLSTER(&bParam0);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bParam0, 4294967295);
				return 1;
			}
			break;
	}
	return 1;
}

int Function_45(bool bParam0, int iParam1, int iParam2, int iParam3) //Position: 0x360A / 13834
{
	bool bVar0;
	var uVar1;
	
	if (&iParam1 == 5)
	{
		LOG_ERROR("Please Use RELEASE_ACTOR_TO_ACTORROAM_GRINGO");
		LOG_ERROR("Switching to ACTORROAM_BEHAVIOR_DEFAULT for this actor");
		iParam1 = 0;
	}
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (!IS_ACTOR_VEHICLE(&bParam0))
		{
			SQUAD_LEAVE(&bParam0);
		}
		else
		{
			bVar0 = false;
			while (bVar0 < (GET_NUM_DRAFT_POSITIONS(&bParam0) - 1))
			{
				uVar1 = GET_DRAFT_ACTOR(bVar0, &bParam0);
				if (IS_ACTOR_VALID(&uVar1))
				{
					Function_46(&uVar1, 0, 0, 0, 1);
				}
				bVar0++;
			}
		}
		Function_46(&bParam0, &iParam1, &iParam2, &iParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_46(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4) //Position: 0x36F8 / 14072
{
	char* cVar0[32];
	
	Function_53();
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return 0;
	}
	if (IS_ACTOR_DEAD(&uParam0))
	{
		return 1;
	}
	if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172))
	{
		strcpy(&cVar0, GET_ACTOR_NAME(&uParam0), 32);
		stradd(&cVar0, " already roaming. Cannot add again.", 32);
		LOG_ERROR(&cVar0);
		return 1;
	}
	if (Function_52(&uParam0) == 1)
	{
		LOG_ERROR("ACTORROAM - Actor cannot be added to ActorRoam multiple times");
		return 0;
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uParam0));
	}
	strcpy(&cVar0, GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(&uParam0)), 32);
	if (GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_10998))
	{
		PRINTSTRING("Added ");
		PRINTSTRING(&cVar0);
		PRINTSTRING(" to the roaming actor layout.");
		PRINTNL();
	}
	else
	{
		strcpy(&cVar0, GET_OBJECT_NAME(&uParam0), 32);
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
	if (!IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172))
	{
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172);
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uParam0));
	}
	if (&iParam4 == 1)
	{
		AI_SET_NAV_MATERIAL_USAGE(&uParam0, 64, 0);
		AI_SET_NAV_MATERIAL_USAGE(&uParam0, 32, 0);
	}
	Function_51(&uParam0, 0);
	Function_50(&uParam0, iParam1);
	Function_49(&uParam0, &uParam2);
	Function_48(&uParam0, uParam3);
	if (Function_47(&uParam0) != 5)
	{
		SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&uParam0, 0);
		SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(&uParam0, 1);
	}
	else
	{
		AI_SET_ENABLE_DEAD_BODY_REACTIONS(&uParam0, 0);
	}
	return 1;
}

int Function_47(int iParam0) //Position: 0x3964 / 14692
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_behavior");
}

void Function_48(var uParam0, bool bParam1) //Position: 0x3988 / 14728
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_49(var uParam0, int iParam1) //Position: 0x39AC / 14764
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_target", &iParam1);
	return;
}

void Function_50(var uParam0, bool bParam1) //Position: 0x39D2 / 14802
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_51(var uParam0, bool bParam1) //Position: 0x39F9 / 14841
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_state", bParam1);
	return;
}

int Function_52(bool bParam0) //Position: 0x3A1D / 14877
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(&bParam0), "actorRoam_ref");
}

void Function_53() //Position: 0x3A3C / 14908
{
	if (!IS_LAYOUTREF_VALID(&Global_10998))
	{
		Global_10998 = CREATE_LAYOUT("RoamingLayout");
	}
	if (!IS_OBJECTSET_VALID(&Global_26172))
	{
		Global_26172 = CREATE_OBJECTSET_IN_LAYOUT("gRoamObjects", &Global_10998, 4294967295, 1);
	}
	return;
}

bool Function_54(bool bParam0) //Position: 0x3A8B / 14987
{
	if (!IS_ACTOR_VALID(&bParam0))
	{
		return 0;
	}
	if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(&bParam0), &Global_26172))
	{
		return 1;
	}
	return 0;
}

bool Function_55(var uParam0, bool bParam1, int iParam2) //Position: 0x3AB3 / 15027
{
	if (IS_ACTOR_VALID(&bParam1))
	{
		if (!IS_ACTOR_ALIVE(&bParam1))
		{
			if (iLocal_86 >= 1)
			{
				SET_MOVER_FROZEN(&Global_54076, 0);
				SET_MOVER_FROZEN(&bParam1, 0);
				Function_101(&uLocal_83, &bLocal_35);
				ACTOR_END_FORCE_HOLSTER(&Global_54076);
				return 1;
			}
		}
	}
	switch (uParam0)
	{
		case 0x00000000:
			if (IS_ACTOR_RIDING(&Global_54076))
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				Function_99(&Global_54076, 0);
				TASK_DISMOUNT(&Global_54076, 1);
				Function_215(&uLocal_27, 0.0f);
			}
			uParam0 = 1;
			break;
		
		case 0x00000001:
			if (Function_111(&uLocal_27, 1.0f))
			{
				ACTOR_START_FORCE_HOLSTER(&Global_54076, 1, 0);
				RESET_ANIM_SET_FOR_ACTOR(&bParam1, 0);
				RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
				Function_215(&uLocal_27, 0.0f);
				SET_MOVER_FROZEN(&Global_54076, 1);
				SET_MOVER_FROZEN(&bParam1, 1);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Global_54076, 1);
				Function_96(&bParam1, &Global_54076);
				Function_95(&bParam1, 0);
				Function_72(50, 1, 0);
				GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&uLocal_36), true);
				if (IS_ACTOR_RIDING(&Global_54076))
				{
					uLocal_38 = GET_MOUNT(&Global_54076);
				}
				if (IS_ACTOR_VALID(&uLocal_38))
				{
					GET_OBJECT_RELATIVE_POSITION(StackVal, &uLocal_38, Vector(-7.0f, 0.0f, 0.0f), &Local_45);
				}
				else
				{
					Function_71(&Global_54076);
					Local_45 = Function_71(&Global_54076);
					Local_45 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(6.0f, 0.0f, 0.0f), Local_45, StackVal);
				}
				Function_68(StackVal, Local_45);
				SNAP_OBJECT_TO_GROUND(&uLocal_36, 2.0f, 0, 1092616192);
				switch (bLocal_71)
				{
					case 0x00000000:
						if (bLocal_48 == 1)
						{
							SNAP_ACTOR_TO_GRINGO(&bParam1, &uLocal_36, "UseCase1", false, 0, 0);
							SNAP_ACTOR_TO_GRINGO(&Global_54076, &uLocal_36, "nplayerUse", false, 0, 0);
						}
						else
						{
							SNAP_ACTOR_TO_GRINGO(&bParam1, &uLocal_36, "UseCase1", false, 0, 0);
							SNAP_ACTOR_TO_GRINGO(&Global_54076, &uLocal_36, "handoff", false, 0, 0);
						}
						break;
					
					case 0x00000001:
						SNAP_ACTOR_TO_GRINGO(&bParam1, &uLocal_36, "UseCase1", false, 0, 0);
						SNAP_ACTOR_TO_GRINGO(&Global_54076, &uLocal_36, "handoff", false, 0, 0);
						break;
					
					case 0x00000002:
						SNAP_ACTOR_TO_GRINGO(&bParam1, &uLocal_36, "UseCase1", false, 0, 0);
						SNAP_ACTOR_TO_GRINGO(&Global_54076, &uLocal_36, "handoff", false, 0, 0);
						break;
				}
				Function_67(&uLocal_36);
				Function_66(StackVal, &iParam2, Function_67(&uLocal_36));
				SNAP_OBJECT_TO_GROUND(&uLocal_36, 2.0f, 0, 1092616192);
				Function_60(&iParam2, &uLocal_83, &bLocal_35);
				Function_58(StackVal, &uLocal_36, &uLocal_83, Local_50, &uLocal_53);
				switch (bLocal_71)
				{
					case 0x00000000:
						TASK_USE_GRINGO(&bParam1, GET_GRINGO_FROM_OBJECT(&uLocal_36), "UseCase1", 1, 1);
						break;
					
					case 0x00000001:
						TASK_USE_GRINGO(&bParam1, GET_GRINGO_FROM_OBJECT(&uLocal_36), "UseCase1", 1, 1);
						break;
					
					case 0x00000002:
						TASK_USE_GRINGO(&bParam1, GET_GRINGO_FROM_OBJECT(&uLocal_36), "UseCase1", 1, 1);
						break;
				}
				Function_215(&uLocal_27, 0.0f);
				uParam0 = 3;
			}
			break;
		
		case 0x00000003:
			switch (bLocal_71)
			{
				case 0x00000000:
					if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&bParam1)))
					{
						if (GET_CURRENT_GRINGO(&bParam1) == GET_GRINGO_FROM_OBJECT(&uLocal_36))
						{
							Function_116(&bParam1, &Global_54076, "highHonorFanMsg03", "highHonorFanMsg03", 5, 60, 1, 1);
							if (bLocal_48 == 1)
							{
								fLocal_85 = 2.0f;
								TASK_USE_GRINGO(&Global_54076, GET_GRINGO_FROM_OBJECT(&uLocal_36), "nplayerUse", 1, 1);
							}
							else
							{
								fLocal_85 = 1.0f;
								TASK_USE_GRINGO(&Global_54076, GET_GRINGO_FROM_OBJECT(&uLocal_36), "handoff", 1, 1);
							}
							uParam0 = 5;
						}
					}
					break;
				
				case 0x00000001:
					if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&bParam1)))
					{
						if (GET_CURRENT_GRINGO(&bParam1) == GET_GRINGO_FROM_OBJECT(&uLocal_36))
						{
							if (Function_35(67))
							{
								fLocal_85 = 2,75f;
								TASK_USE_GRINGO(&Global_54076, GET_GRINGO_FROM_OBJECT(&uLocal_36), "handoff", 1, 1);
								uParam0 = 5;
							}
							else if (IS_ACTOR_PLAYING_NODE_IN_TREE(&bParam1, "relic_handoff/give/wait") || Function_111(&uLocal_27, 4.0f))
							{
								fLocal_85 = 4.0f;
								TASK_USE_GRINGO(&Global_54076, GET_GRINGO_FROM_OBJECT(&uLocal_36), "handoff", 1, 1);
								uParam0 = 5;
							}
						}
					}
					break;
				
				case 0x00000002:
					if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&bParam1)))
					{
						if (GET_CURRENT_GRINGO(&bParam1) == GET_GRINGO_FROM_OBJECT(&uLocal_36))
						{
							Function_116(&Global_54076, &bParam1, "HonorDonationPlayerMsg01", "HonorDonationPlayerMsg01", 5, 60, 1, 1);
							fLocal_85 = 4.0f;
							TASK_USE_GRINGO(&Global_54076, GET_GRINGO_FROM_OBJECT(&uLocal_36), "handoff", 1, 1);
							uParam0 = 5;
						}
					}
					break;
			}
			break;
		
		case 0x00000005:
			if (Function_111(&uLocal_27, fLocal_85))
			{
				if (!IS_AMBIENT_SPEECH_PLAYING(&Global_54076) || Function_111(&uLocal_27, 5.0f))
				{
					if (!IS_AMBIENT_SPEECH_PLAYING(&bParam1) || Function_111(&uLocal_27, 5.0f))
					{
						switch (bLocal_71)
						{
							case 0x00000000:
								if (bLocal_48 == 1)
								{
									fLocal_85 = 2.0f;
								}
								else
								{
									fLocal_85 = 1,75f;
								}
								break;
							
							case 0x00000001:
								if (Function_35(67))
								{
									fLocal_85 = 2.0f;
								}
								else
								{
									fLocal_85 = 4.0f;
								}
								break;
							
							case 0x00000002:
								fLocal_85 = 6.0f;
								Function_116(&bParam1, &Global_54076, "highHonorDonationMsg05", "highHonorDonationMsg05", 5, 60, 1, 1);
								break;
						}
						Function_56(&uLocal_83, &uLocal_62, &uLocal_65);
						Function_215(&uLocal_27, 0.0f);
						uParam0 = 6;
					}
				}
			}
			break;
		
		case 0x00000006:
			Function_215(&uLocal_27, 0.0f);
			uParam0 = 8;
			if (bLocal_71 == 0)
			{
				if (bLocal_48 == 1)
				{
					uParam0 = 7;
				}
			}
			break;
		
		case 0x00000007:
			if (iLocal_70 == 0)
			{
				if (Function_111(&uLocal_27, (fLocal_85 - 1.0f)))
				{
					switch (bLocal_71)
					{
						case 0x00000000:
							Function_116(&Global_54076, &bParam1, "highHonorFanPlayerMsg01", "highHonorFanPlayerMsg01", 5, 60, 1, 1);
							break;
						
						case 0x00000001:
							SAY_SINGLE_LINE_CONTEXT(&Global_54076, 366, &bParam1, 1, 0, 0, 4294967295, 4294967295, 0, 1);
							break;
						
						case 0x00000002:
							break;
					}
					iLocal_70 = 1;
				}
			}
			if (Function_111(&uLocal_27, fLocal_85))
			{
				Function_56(&uLocal_83, &uLocal_56, &iLocal_59);
				Function_215(&uLocal_27, 0.0f);
				uParam0 = 8;
			}
			break;
		
		case 0x00000008:
			if (iLocal_70 == 0)
			{
				if (Function_111(&uLocal_27, (fLocal_85 - 1.0f)))
				{
					switch (bLocal_71)
					{
						case 0x00000000:
							Function_116(&Global_54076, &bParam1, "highHonorFanPlayerMsg01", "highHonorFanPlayerMsg01", 5, 60, 1, 1);
							break;
						
						case 0x00000001:
							SAY_SINGLE_LINE_CONTEXT(&Global_54076, 366, &bParam1, 1, 0, 0, 4294967295, 4294967295, 0, 1);
							break;
						
						case 0x00000002:
							break;
					}
					iLocal_70 = 1;
				}
			}
			if (Function_111(&uLocal_27, fLocal_85))
			{
				if (!IS_AMBIENT_SPEECH_PLAYING(&bParam1) || Function_111(&uLocal_27, 8.0f))
				{
					if (!IS_AMBIENT_SPEECH_PLAYING(&Global_54076) || Function_111(&uLocal_27, 8.0f))
					{
						GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&uLocal_36), false);
						SET_MOVER_FROZEN(&Global_54076, 0);
						SET_MOVER_FROZEN(&bParam1, 0);
						SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_ACTOR(&Global_54076), 1.0f, 0, 1092616192);
						SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_ACTOR(&bParam1), 1.0f, 0, 1092616192);
						Function_101(&uLocal_83, &bLocal_35);
						ACTOR_END_FORCE_HOLSTER(&Global_54076);
						return 1;
					}
				}
			}
			break;
	}
	return 0;
}

void Function_56(var uParam0, struct<2> Param1) //Position: 0x423B / 16955
{
	float fVar0;
	struct<2> Var1;
	
	fVar0 = Function_57(&Global_54076);
	GET_OBJECT_RELATIVE_POSITION(GET_OBJECT_FROM_ACTOR(&Global_54076), Param1, &Var1);
	SET_CAMERA_POSITION(&uParam0, Var1);
	SET_CAMERA_ORIENTATION(StackVal, &uParam0, Vector(vParam2, (vParam2.y + fVar0), vParam2.z), 0);
	return;
}

var Function_57(int iParam0) //Position: 0x427F / 17023
{
	return GET_HEADING(&iParam0);
}

void Function_58(float fParam0, var uParam1, struct<2> Param2, var uParam4) //Position: 0x428B / 17035
{
	var uVar0;
	struct<2> Var2;
	struct<2> Var4;
	
	Function_59(&fParam0);
	uVar0 = Function_59(&fParam0);
	UNK_0xF1A53C41(&Var4, &uVar0, 1, 0);
	UNK_0xF76F2BB3(&Var4, &uParam4, 1, 4);
	GET_OBJECT_RELATIVE_POSITION(&fParam0, Param2, &Var2);
	SET_CAMERA_POSITION(&uParam1, Var2);
	SET_CAMERA_DIRECTION(&uParam1, Var4, 1);
}

struct<8> Function_59(int iParam0) //Position: 0x42D1 / 17105
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_ORIENTATION(&iParam0, &Var0);
	return StackVal, Var0;
}

void Function_60(var uParam0, var uParam1, float fParam2) //Position: 0x42FA / 17146
{
	struct<2> Var0;
	var uVar2;
	
	fParam2 = 1;
	uParam1 = CREATE_CAMERA_IN_LAYOUT(&uParam0, Function_217(), 0);
	SET_ACTOR_POSTURE(&Global_54076, 0);
	Function_71(&Global_54076);
	Var0 = Function_71(&Global_54076);
	CLEAR_AMBIENT_OBJECTS_SPHERE(Var0, 10.0f, 39);
	Function_145();
	uVar2 = CREATE_VOLUME_IN_LAYOUT(StackVal, &uParam0, Function_217(), 2,802597E-45f, Var0, Function_145(), Vector(10.0f, 10.0f, 10.0f));
	DELETE_PROJECTILES_IN_VOLUME(&uVar2);
	DESTROY_VOLUME(&uVar2);
	Function_61(1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
	SET_CURRENT_CAMERA_ON_CHANNEL(&uParam1, 0, 0f, 0f, 0, 0, 0, 0, 0, 0);
	INIT_CAMERA_FROM_GAME_CAMERA(&uParam1);
	return;
}

void Function_61(bool bParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, var uParam7, bool bParam8, bool bParam9, var uParam10, bool bParam11, var uParam12, var uParam13) //Position: 0x438F / 17295
{
	var uVar0;
	int iVar1;
	var uVar2;
	
	uParam1 = &uParam1;
	if (&bParam6)
	{
		UI_PUSH("nCutscenes");
	}
	HUD_CLEAR_HELP();
	UI_DUMP_MESSAGE_QUEUE_TO_NOTES(1);
	HUD_ENABLE(0);
	Function_65();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(&Global_54076, "iDrunk", false);
	if (&bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		iVar1 = Function_36();
		if (IS_ACTOR_VALID(&iVar1))
		{
			if (GET_WEAPON_IN_HAND(&iVar1) != 4294967295)
			{
				Global_119938 = 1;
			}
			else
			{
				Global_119938 = 0;
			}
			if (&bParam3)
			{
				TASK_CLEAR(&iVar1);
			}
			if (&bParam11)
			{
				uVar2 = GET_ATTACHED_HOGTIE_VICTIM(&iVar1);
				if (IS_ACTOR_VALID(&uVar2))
				{
					FREE_FROM_HOGTIE(&uVar2);
					HOGTIE_ACTOR(&uVar2);
				}
			}
			if (bParam0)
			{
				ACTOR_START_FORCE_HOLSTER(&iVar1, 0, 0);
			}
			if (&bParam2)
			{
				SET_PLAYER_POSTURE(0, 0, 0);
				TASK_OVERRIDE_SET_POSTURE(&iVar1, 0);
			}
			SET_ACTOR_HEALTH(&iVar1, GET_ACTOR_MAX_HEALTH(&iVar1));
			SET_ACTOR_INVULNERABILITY(&iVar1, 1);
			AI_IGNORE_ACTOR(&iVar1);
		}
		SET_PLAYER_CONTROL(0, 0, 0, 0);
		if (IS_PLAYER_DEADEYE(0))
		{
			CANCEL_DEADEYE();
			CANCEL_TIME_WARP(1);
		}
		if (&bParam8)
		{
			if (IS_VOLUME_VALID(&uParam7))
			{
				FIRE_STOP_FLAMES_IN_VOLUME(&uParam7);
				DELETE_PROJECTILES_IN_VOLUME(&uParam7);
			}
			else
			{
				FIRE_STOP_ALL_FIRES();
				Function_71(&iVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_217(), 2,802597E-45f, Function_71(&iVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
				DELETE_PROJECTILES_IN_VOLUME(&uVar0);
			}
		}
		Function_39(19, 1, 0, 0);
	}
	SET_TIME_ACCELERATION(0.0f);
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(1);
	}
	if (&bParam4)
	{
		ENABLE_USE_CONTEXTS(0);
	}
	AI_GLOBAL_CLEAR_ALL_DANGER();
	if (uParam10 && !Function_12())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_64()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_64()));
		DECOR_SET_BOOL(&Global_54076, "nquitBinos", 1);
		UNK_0xE6C1DBD9(0);
		SET_DRAW_ACTOR(&Global_54076, 1);
		SHOW_PHYSINST(GET_PHYSINST_FROM_ACTOR(&Global_54076));
		if (UI_ISACTIVE("BinocularsUI"))
		{
			UI_POP("BinocularsUI");
		}
	}
	ACTOR_DATA_GRAVITY_LIMIT(1);
	ENABLE_PIP(0, 0, 1);
	Global_99146 = 1;
	Global_99168 = GET_THIS_SCRIPT_ID();
	Global_99170 = "";
	if (IS_VOLUME_VALID(&uVar0))
	{
		DESTROY_VOLUME(&uVar0);
	}
	if (Function_63(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_62(0x4000000);
	}
	if (Function_63(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_62(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&uParam12);
	SET_USES_QUAD_IK_FIX(&uParam13);
}

void Function_62(int iParam0) //Position: 0x4641 / 17985
{
	int iVar0;
	
	if (Function_13(iParam0, 1) && Function_13(Global_39556, 1))
	{
	}
	iVar0 = (Global_39556 && iParam0);
	Global_39556 = (Global_39556 - iVar0);
	Global_39556 |= 1073741824;
	return;
}

bool Function_63(int iParam0) //Position: 0x4675 / 18037
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_64() //Position: 0x4691 / 18065
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	uVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_LAYOUTREF_VALID(&uVar0))
	{
		uVar1 = CREATE_OBJECT_ITERATOR(&uVar0);
		uVar2 = START_OBJECT_ITERATOR(&uVar1);
		ITERATE_ON_OBJECT_TYPE(&uVar1, 42);
		if (IS_OBJECT_VALID(&uVar2))
		{
			while (IS_OBJECT_VALID(&uVar2))
			{
				PRINTSTRING(GET_OBJECT_NAME(&uVar2));
				PRINTNL();
				if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(&uVar2), "bino_camera"))
				{
					return &uVar2;
				}
				uVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
			}
		}
		DESTROY_ITERATOR(&uVar1);
	}
	return "";
}

void Function_65() //Position: 0x471F / 18207
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_66(var uParam0, struct<2> Param1) //Position: 0x4734 / 18228
{
	iLocal_68 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uParam0, Function_217(), 0f, Param1, Vector(0.0f, 0.0f, 0.0f), Vector(5.0f, 10.0f, 5.0f));
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_68);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_68);
	return;
}

struct<8> Function_67(int iParam0) //Position: 0x4763 / 18275
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

void Function_68(struct<2> Param0) //Position: 0x478C / 18316
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_MOST_RECENT_MOUNT(&Global_54076);
	Function_71(&Global_54076);
	uVar1 = Function_71(&Global_54076);
	if (Function_69(StackVal, &Global_54076, Param0) > 10.0f)
	{
		if (IS_ACTOR_VALID(&uVar0))
		{
			TELEPORT_ACTOR(&uVar0, &Param0, 1, 1, 1);
			TASK_STAND_STILL(&uVar0, -1.0f, 0, 0);
		}
		if (IS_ACTOR_RIDING(&Global_54076))
		{
			TELEPORT_ACTOR(&Global_54076, &uVar1, 1, 1, 1);
		}
	}
	return;
}

float Function_69(var uParam0, struct<2> Param1) //Position: 0x47ED / 18413
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_70(&uParam0);
		Var0 = Function_70(&uParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

struct<8> Function_70(int iParam0) //Position: 0x4864 / 18532
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		GET_POSITION(&iParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID actor. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

struct<8> Function_71(int iParam0) //Position: 0x48D0 / 18640
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

void Function_72(int iParam0, bool bParam1, bool bParam2) //Position: 0x48E2 / 18658
{
	int iVar0;
	bool bVar1;
	
	if (Function_94(0) && (!Global_6623 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_93())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_256 = (Global_21369.f_256 + iParam0);
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
	if (&bParam1)
	{
		Function_88(3, bVar1);
		if (!&bParam2)
		{
			if (!Function_87(Global_119936, 4))
			{
				Function_81(&Global_54076, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_39(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_30(3));
	iVar0 = Function_33(3);
	switch (Global_21369.f_248)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_21369.f_248 = 1;
				Function_74(4, Function_80(Global_21369.f_248), 1);
				Function_73(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_21369.f_248 = 2;
				Function_74(4, Function_80(Global_21369.f_248), 1);
				Function_73(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_21369.f_248 = 3;
				Function_74(4, Function_80(Global_21369.f_248), 1);
				Function_73(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_21369.f_248 = 4;
				Function_74(4, Function_80(Global_21369.f_248), 1);
				Function_73(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_21369.f_248 = 5;
				Function_74(4, Function_80(Global_21369.f_248), 1);
				Function_73(Global_21369.f_244, Global_21369.f_248);
				if (Global_21369.f_244 != 6 || Global_21369.f_244 != 0)
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

void Function_73(int iParam0, int iParam1) //Position: 0x4AB6 / 19126
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,2f);
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
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,3f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000003:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,4f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000004:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 120.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,5f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 1);
			break;
		
		case 0x00000005:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 180.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,8f);
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
			SET_ACTOR_SHOULD_TAUNT(&Global_54076, 1);
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
			SET_ACTOR_SHOULD_TAUNT(&Global_54076, 0);
			break;
		
		default:
			break;
	}
	return;
}

int Function_74(int iParam0, char* cParam1) //Position: 0x4D20 / 19744
{
	bool bVar0;
	int iVar1;
	
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 20 && Global_55480[iParam016].f_96 == 18)
	{
		PRINTSTRING("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT:");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT.");
		return 0;
	}
	Function_78(iParam0, &cParam1, 0, 1);
	iVar1 = Function_75();
	Global_77754[iVar1] = 0.0f;
	strcpy(&Global_77766[iVar116] + 32, &cParam1, 32);
	strcpy(&Global_77766[iVar116] + 16, "QME=", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	if (&bParam2)
	{
		Global_77766[iVar116].f_120 = 5;
	}
	else
	{
		Global_77766[iVar116].f_120 = 6;
	}
	return 1;
}

int Function_75() //Position: 0x4EB0 / 20144
{
	int iVar0;
	
	iVar0 = (Global_77754 - 1);
	while (iVar0 > 0)
	{
		if (Global_77766[iVar016].f_96 == 4294967295)
		{
			return iVar0;
		}
		iVar0 = (iVar0 - 1);
	}
	LOG_ERROR("STAT_FIND_FIRST_EMPTY_SLOT_ON_STACK: too many synchronous Stat Updates! Dropping the oldest in the buffer");
	Function_76();
	return 0;
}

void Function_76() //Position: 0x4F51 / 20305
{
	int iVar0;
	int iVar1;
	
	iVar0 = (Global_77754 - 1);
	iVar1 = (iVar0 - 1);
	while (iVar1 > 0)
	{
		Global_77754[iVar0] = Global_77754[iVar1];
		Global_77766[iVar016] = { StackVal, Global_77766[iVar116] };
		*(&Global_77766[iVar016] + 16) = { StackVal, (&Global_77766[iVar116] + 16) };
		*(&Global_77766[iVar016] + 32) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_77766[iVar116] + 32) };
		Global_77766[iVar016].f_96 = Global_77766[iVar116].f_96;
		Global_77766[iVar016].f_116 = Global_77766[iVar116].f_116;
		Global_77766[iVar016].f_120 = Global_77766[iVar116].f_120;
		Function_77(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_77(int iParam0) //Position: 0x500F / 20495
{
	Global_77754[iParam0] = 0.0f;
	strcpy(&(Global_77766[iParam016]), "", 8);
	strcpy(&Global_77766[iParam016] + 16, "", 8);
	strcpy(&Global_77766[iParam016] + 32, "", 32);
	Global_77766[iParam016].f_96 = 4294967295;
	Global_77766[iParam016].f_100 = 4294967295;
	Global_77766[iParam016].f_116 = 4294967295;
	Global_77766[iParam016].f_120 = 4294967295;
	return;
}

int Function_78(int iParam0, char* cParam1) //Position: 0x5075 / 20597
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 20 && Global_55480[iParam016].f_96 == 18)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING. Use the other functions");
		return 0;
	}
	if (!IS_STRING_VALID(&cParam1))
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed.");
		return 0;
	}
	if (STRING_LENGTH(&cParam1) >= 7)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed.");
		return 0;
	}
	strcpy(&Global_55480[iParam016] + 32, &cParam1, 32);
	if (&bParam2)
	{
		uVar1 = Global_55480[iParam016].f_124;
		Function_79(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &uParam3);
	}
	return 1;
}

void Function_79(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x53CC / 21452
{
	CLEAR_STAT_MESSAGE();
	if (!Global_77928)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 0, 0, 1, false, 0, 0);
		}
		else if (&bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 0, 0, 0, false, 0, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 1, 0, 0, false, 0, 0);
		}
	}
}

var Function_80(int iParam0) //Position: 0x5454 / 21588
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

void Function_81(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x54E3 / 21731
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_83(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_82(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_82(char* cParam0) //Position: 0x5558 / 21848
{
	if (iParam1 == 1)
	{
		return;
	}
	if (iParam1 == 2)
	{
		stradd(&cParam0, "2", 16);
	}
	if (iParam1 == 3)
	{
		stradd(&cParam0, "3", 16);
	}
	if (iParam1 == 4)
	{
		stradd(&cParam0, "4", 16);
	}
	return;
}

bool Function_83(int iParam0, var uParam1, int iParam2) //Position: 0x5592 / 21906
{
	var uVar0;
	char* cVar1[16];
	
	uVar0 = uParam1;
	strcpy(&cVar1, "tutorial", 16);
	if (Global_6623)
	{
		return 0;
	}
	if (DECOR_CHECK_EXIST(&iParam0, &cVar1))
	{
		if (Function_85(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
		{
			return 0;
		}
	}
	if (&iParam2 == 1)
	{
		if (Global_6646 || Global_6647)
		{
			return 0;
		}
	}
	if (&iParam2 == 2)
	{
		switch (Function_84(uVar0))
		{
			case 0x00000002:
				if (!Function_87(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_84(char* cParam0) //Position: 0x560E / 22030
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

int Function_85(int iParam0) //Position: 0x56AF / 22191
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

void Function_86(int iParam0, int iParam1) //Position: 0x56EC / 22252
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
	return;
}

bool Function_87(var uParam0, int iParam1) //Position: 0x5702 / 22274
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_88(int iParam0, bool bParam1) //Position: 0x5715 / 22293
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
		if (Global_77766[iVar116].f_120 != 0 || Global_77766[iVar116].f_120 != 1)
		{
			Global_77754[iVar1] = (Global_77754[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_77766[iVar116] + 16, "QME+", 8);
			strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
			Global_77766[iVar116].f_96 = 26;
			Global_77766[iVar116].f_116 = iParam0;
			Global_77766[iVar116].f_120 = 0;
			return 1;
		}
	}
	iVar1 = Function_75();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

var Function_89(int iParam0, int iParam1) //Position: 0x58C1 / 22721
{
	int iVar0;
	
	iVar0 = (Global_77754 - 1);
	while (iVar0 > 0)
	{
		if (Global_77766[iVar016].f_116 == iParam0)
		{
			if (&iParam1 == 4294967295)
			{
				return iVar0;
			}
			if (iVar0 != &iParam1)
			{
				return iVar0;
			}
		}
		iVar0 = (iVar0 - 1);
	}
	return 4294967295;
}

void Function_90() //Position: 0x5906 / 22790
{
	Function_92(3, 0.0f);
	Function_91(3, 10000.0f);
	return;
}

int Function_91(int iParam0, int iParam1) //Position: 0x591C / 22812
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_92(int iParam0, int iParam1) //Position: 0x595C / 22876
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

bool Function_93() //Position: 0x599C / 22940
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

var Function_94(int iParam0) //Position: 0x59C7 / 22983
{
	return (*&Global_21369 + 168)[iParam0];
}

void Function_95(var uParam0, bool bParam1) //Position: 0x59D6 / 22998
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_CONVERSE_ENABLE(&uParam0);
	}
	else
	{
		AI_CONVERSE_DISABLE(&uParam0);
	}
	return;
}

void Function_96(var uParam0, int iParam1) //Position: 0x59FB / 23035
{
	struct<2> Var0;
	
	GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(&iParam1), &Var0);
	Function_97(StackVal, &uParam0, Var0);
	return;
}

void Function_97(int iParam0, struct<2> Param1) //Position: 0x5A17 / 23063
{
	if (!IS_ACTOR_VALID(GET_MOUNT(&iParam0)))
	{
		SET_ACTOR_HEADING(StackVal, Function_98(&iParam0, &iParam0, Param1), 1);
	}
	else
	{
		SET_ACTOR_HEADING(StackVal, Function_98(GET_MOUNT(&iParam0), &iParam0, Param1), 1);
	}
	return;
}

var Function_98(int iParam0, struct<2> Param1) //Position: 0x5A52 / 23122
{
	struct<2> Var0;
	
	Function_71(&iParam0);
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Function_71(&iParam0), Param1, StackVal);
	VNORMALIZE(&Var0);
	PRINTSTRING("GET_ACTOR_HEADING_TO_POSITION: Found unit vector of ");
	PRINTVECTOR(Var0);
	PRINTSTRING(", got heading of ");
	PRINTFLOAT(UNK_0x9C40E671(&Var0));
	PRINTNL();
	return UNK_0x9C40E671(&Var0);
}

void Function_99(var uParam0, bool bParam1) //Position: 0x5AD3 / 23251
{
	var uVar0;
	var uVar1;
	
	if (IS_ACTOR_RIDING(&uParam0))
	{
		uVar0 = GET_MOUNT(&uParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			RESET_ACTOR_GAITS(&uVar0, 1);
		}
	}
	else if (IS_ACTOR_INSIDE_VEHICLE(&uParam0))
	{
		uVar1 = GET_VEHICLE(&uParam0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			STOP_VEHICLE(&uVar1);
		}
	}
	else if (!&bParam1 || Function_100(&uParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(&uParam0, 1);
	}
	return;
}

float Function_100(var uParam0, bool bParam1) //Position: 0x5B3D / 23357
{
	struct<2> Var0;
	
	GET_ACTOR_VELOCITY(&uParam0, &Var0);
	if (&bParam1)
	{
		Var0.f_4 = 0.0f;
	}
	return VMAG(Var0);
}

void Function_101(var uParam0, bool bParam1) //Position: 0x5B5E / 23390
{
	SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_ACTOR(&Global_54076), 1.0f, 0, 1092616192);
	Function_102(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
	REMOVE_CAMERA_FROM_CHANNEL(&uParam0, 0);
	DESTROY_CAMERA(&uParam0);
	CAMERA_RESET(0);
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	bParam1 = 0;
	return;
}

void Function_102(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, var uParam9, var uParam10) //Position: 0x5BA3 / 23459
{
	var uVar0;
	
	bParam1 = &bParam1;
	if (&bParam6)
	{
		CAMERA_RESET(0);
	}
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		if (&bParam3)
		{
			SET_PLAYER_CONTROL(0, 1, 0, 0);
		}
		uVar0 = Function_36();
		if (IS_ACTOR_VALID(&uVar0))
		{
			if (&bParam2)
			{
				TASK_CLEAR(&uVar0);
			}
			if (!&bParam1)
			{
				if (HUD_IS_FADED())
				{
					RESET_ANIM_SET_FOR_ACTOR(&uVar0, 0);
				}
				else
				{
					RESET_ANIM_SET_FOR_ACTOR(&uVar0, 1);
				}
			}
			ACTOR_END_FORCE_HOLSTER(&uVar0);
			SET_ACTOR_INVULNERABILITY(&uVar0, 0);
			if (Global_53410[0])
			{
				Global_53410[0] = 0;
				UI_CHEAT_SET_VALUE(0, 0);
			}
		}
		Function_39(21, 1, 0, 0);
	}
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (&bParam7)
	{
		Function_65();
	}
	if (&bParam4)
	{
		ENABLE_USE_CONTEXTS(1);
	}
	if (&bParam8)
	{
		UI_POP("nCutscenes");
	}
	AUDIO_ENABLE_PLAYER_TAUNTS();
	Function_103(&uParam9, &uParam10);
}

void Function_103(var uParam0, bool bParam1) //Position: 0x5C72 / 23666
{
	uParam0 = &uParam0;
	HUD_ENABLE(&uParam0);
	if (&bParam1)
	{
		HUD_CLEAR_SMALL_TEXT_QUEUE();
		PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	}
	SET_TIME_ACCELERATION(Global_99471);
	STREAMING_UNLOAD_SCENE();
	AI_STOP_IGNORING_ACTORS();
	if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol")))
	{
		DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol"));
	}
	if (!Global_6623)
	{
		Function_104();
	}
	ACTOR_DATA_GRAVITY_LIMIT(0);
	Global_99146 = 0;
	Global_99147 = 0;
	if (IS_VOLUME_VALID(&Global_99170))
	{
		if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&Global_99170))
		{
			REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Global_99170);
		}
		if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&Global_99170))
		{
			REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Global_99170);
		}
	}
	SET_TREE_COST_MODIFIER(1.0f);
	SET_USES_QUAD_IK_FIX(0);
	return;
}

void Function_104() //Position: 0x5D41 / 23873
{
	int iVar0;
	
	iVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		if (GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(&Global_21369 + 72)) != &iVar0)
		{
			LOG_ERROR("PLAYERHORSE NOT IN PLAYER HORSE! WHY? FIXING");
			GIVE_OBJECT_TO_LAYOUT(&Global_21369 + 72, &iVar0);
		}
	}
	return;
}

void Function_105() //Position: 0x5DB9 / 23993
{
	switch (bLocal_71)
	{
		case 0x00000000:
			if (bLocal_48 == 1)
			{
				GRINGO_LOAD_ANIMATION_FOR_ACTOR_ENUM_EXT(GET_GRINGO_FROM_OBJECT(&uLocal_36), "UseCase1", "UseAnim", bLocal_72);
				GRINGO_LOAD_ANIMATION_FOR_ACTOR_ENUM_EXT(GET_GRINGO_FROM_OBJECT(&uLocal_36), "nplayerUse", "UseAnim", false);
			}
			else
			{
				GRINGO_LOAD_ANIMATION_FOR_ACTOR_ENUM_EXT(GET_GRINGO_FROM_OBJECT(&uLocal_36), "UseCase1", "UseAnim", bLocal_72);
				GRINGO_LOAD_ANIMATION_FOR_ACTOR_ENUM_EXT(GET_GRINGO_FROM_OBJECT(&uLocal_36), "Handoff", "UseAnim", false);
			}
			break;
		
		case 0x00000001:
		case 0x00000002:
			GRINGO_LOAD_ANIMATION_FOR_ACTOR_ENUM_EXT(GET_GRINGO_FROM_OBJECT(&uLocal_36), "UseCase1", "UseAnim", bLocal_72);
			GRINGO_LOAD_ANIMATION_FOR_ACTOR_ENUM_EXT(GET_GRINGO_FROM_OBJECT(&uLocal_36), "Handoff", "UseAnim", false);
			break;
	}
	return;
}

bool Function_106(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6) //Position: 0x5EA3 / 24227
{
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_ONESHOT_QUERIES(1);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(1664, &fParam6, 0);
	AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(1, &fParam6, 0);
	AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(2, -&fParam6, 1);
	AMBIENT_SET_SEARCH_CENTER(Param0);
	AMBIENT_SET_DISTANCE_FILTER(0.0f, &uParam5);
	AMBIENT_ENABLE_SLOPE_FILTER_PRECISE(1);
	AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, &uParam3, &fParam6);
	AMBIENT_ENABLE_BUMP_FILTER(1);
	AMBIENT_SET_BUMP_FILTER(0.0f, &uParam4, &fParam6);
	return AMBIENT_GET_POINT(&uParam2, 0);
}

int Function_107() //Position: 0x5F03 / 24323
{
	return Function_33(0);
}

void Function_108(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x5F0D / 24333
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_11(Global_10966) };
		}
		PRINT_HELP_B(&uParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&uParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

bool Function_109() //Position: 0x5F98 / 24472
{
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (IS_ACTOR_ON_LADDER(&Global_54076))
		{
			return 0;
		}
		if (IS_ACTOR_DRAFTED(&Global_54076))
		{
			return 0;
		}
		if (IS_ACTOR_RIDING_VEHICLE(&Global_54076))
		{
			if (!IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
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

bool Function_110() //Position: 0x5FE5 / 24549
{
	if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(&Global_54076)))
	{
		return 1;
	}
	return 0;
}

bool Function_111(var uParam0, float fParam1) //Position: 0x5FFB / 24571
{
	if (Function_114(&uParam0))
	{
		if (Function_112(&uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_112(vector3 vParam0) //Position: 0x6019 / 24601
{
	if (Function_114(&vParam0))
	{
		if (Function_113(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_113(int iParam0) //Position: 0x60E6 / 24806
{
	return Function_13(iParam0, 2);
}

bool Function_114(int iParam0) //Position: 0x60F4 / 24820
{
	return Function_13(iParam0, 1);
}

void Function_115(bool bParam0) //Position: 0x6102 / 24834
{
	Global_26652[bParam04].f_20++;
	if (Global_26652[bParam04].f_20 == 1)
	{
		Function_39(409, 1, 0, 0);
	}
	return;
}

void Function_116(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x6133 / 24883
{
	bParam1 = &bParam1;
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (IS_ACTOR_ALIVE(&bParam0) && Function_120(&bParam0, &Global_54076) >= IntToFloat(&iParam5))
		{
			if (!IS_ACTOR_VALID(&bParam1))
			{
				bParam1 = "";
			}
			CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&bParam0);
			if (&bParam6)
			{
				if (IS_ACTOR_HOGTIED(&bParam0))
				{
					if (!SAY_SINGLE_LINE_STRING_BEAT(&bParam0, &bParam2, &bParam1, 1, 1, &iParam4, &iParam7, 0, 0, 1))
					{
						bParam3 = &bParam3;
					}
				}
				else if (!SAY_SINGLE_LINE_STRING_BEAT(&bParam0, &bParam2, &bParam1, 1, 1, &iParam4, &iParam7, 0, 1, 1))
				{
					bParam3 = &bParam3;
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING(&bParam0, &bParam2, true, true, &iParam4, 0, false, true);
			}
		}
	}
}

bool Function_117(int iParam0, bool bParam1, var uParam2, var uParam3, float fParam4, var uParam5, var uParam6, var uParam7, var uParam8, float fParam9, bool bParam10, var uParam11, var uParam12, float fParam13, bool bParam14, var uParam15) //Position: 0x61E0 / 25056
{
	float fVar0;
	
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&bParam1))
	{
		return 0;
	}
	if (&fParam13 == 0.0f && !uParam8)
	{
		if (&fParam13 > &fParam9)
		{
			LOG_ERROR("firstAudioDist is too low to ever work");
		}
		else if (Function_120(&iParam0, &bParam1) > &fParam13)
		{
			uParam8 = 1;
			Function_116(&iParam0, &Global_54076, &bParam14, &bParam14, 5, 60, 1, &uParam15);
			Function_215(&uParam7, 0.0f);
		}
	}
	switch (uParam2)
	{
		case 0x00000000:
			SET_ACTOR_UPDATE_PRIORITY(&iParam0, false);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(&iParam0, 0);
			fLocal_26 = Function_120(&iParam0, &Global_54076);
			AI_GOAL_LOOK_AT_ACTOR_NEW(&iParam0, &bParam1, -1.0f, 1);
			uParam6 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &uParam3, Function_217(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
			ATTACH_OBJECTS(StackVal, StackVal, &uParam6, &bParam1, Function_217(), Vector(0.0f, 0,5f, &uParam12), Vector(0.0f, 0.0f, 0.0f), 4294967295);
			TASK_FOLLOW_OBJECT_AT_DISTANCE(&iParam0, &uParam6, 1.0f, &uParam11);
			TASK_PRIORITY_SET(&iParam0, true);
			uParam2 = 1;
			break;
		
		case 0x00000001:
			if (IS_ACTOR_ON_FOOT(&Global_54076))
			{
				fVar0 = (&fParam9 - 3.0f);
			}
			else
			{
				fVar0 = &fParam9;
			}
			if ((Function_120(&iParam0, &bParam1) - fLocal_26) < fParam4)
			{
				return 0;
			}
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &iParam0, 1.0f, fVar0, 1, 1, 0))
			{
				if (&bParam10)
				{
					TASK_CLEAR(&iParam0);
					TASK_FACE_ACTOR(&iParam0, &bParam1, 1, 3212836864);
				}
				else
				{
					AI_GOAL_LOOK_CLEAR(&iParam0);
				}
				uParam5 = 1;
				return 1;
			}
			if (!Function_121(&iParam0, 0))
			{
				return 0;
			}
			break;
	}
	return 1;
}

float Function_118(bool bParam0) //Position: 0x63A0 / 25504
{
	var uVar0;
	float fVar1;
	
	if (!&bParam0)
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

void Function_119(float fParam0, int iParam1) //Position: 0x63DC / 25564
{
	struct<2> Var0;
	
	if (Global_6629 && !Global_6646)
	{
		fParam0 = 65.0f;
		iParam1 = 95.0f;
	}
	else if ((!IS_ACTOR_RIDING(GET_PLAYER_ACTOR(0)) && !IS_ACTOR_RIDING_VEHICLE(GET_PLAYER_ACTOR(0))) && !Global_6646)
	{
		fParam0 = 115.0f;
		iParam1 = 170.0f;
	}
	else
	{
		GET_ACTOR_VELOCITY(GET_PLAYER_ACTOR(0), &Var0);
		if (VMAG(Var0) > 5.0f)
		{
			fParam0 = 130.0f;
			iParam1 = 190.0f;
		}
		else
		{
			fParam0 = 130.0f;
			iParam1 = 190.0f;
		}
	}
	return;
}

float Function_120(bool bParam0, bool bParam1) //Position: 0x646D / 25709
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!IS_ACTOR_VALID(&bParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(&bParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(&bParam0, &Var0);
	GET_POSITION(&bParam1, &Var2);
	return VDIST(Var0, Var2);
}

bool Function_121(bool bParam0, bool bParam1) //Position: 0x6562 / 25954
{
	if (&bParam1)
	{
		if (IS_ACTOR_HOGTIED(&bParam0))
		{
			if (!(GET_TASK_STATUS(&bParam0, 25) != 1 || GET_TASK_STATUS(&bParam0, 25) != 3))
			{
				MEMORY_CLEAR_EVENTS(&bParam0, 0);
				TASK_FLEE_ACTOR(&bParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
				TASK_PRIORITY_SET(&bParam0, true);
			}
			Function_6(&bParam0);
			return 0;
		}
		if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&bParam0), 163840))
		{
			Function_6(&bParam0);
			return 0;
		}
	}
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (Function_122(&bParam0, 0) && !AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&bParam0), 16384))
		{
			return 0;
		}
		if (IS_ACTOR_ALIVE(&bParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int Function_122(int iParam0, int iParam1) //Position: 0x660D / 26125
{
	var uVar0;
	int iVar1;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (iParam1 && IS_ACTOR_HOGTIED(&iParam0))
		{
			return 1;
		}
		uVar0 = SQUAD_GET(&iParam0);
		if (IS_OBJECT_VALID(&uVar0))
		{
			iVar1 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&uVar0);
		}
		else
		{
			iVar1 = 172712;
		}
		if (AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&iParam0), iVar1))
		{
			return 0;
		}
	}
	return 1;
}

void Function_123(int iParam0, bool bParam1, bool bParam2) //Position: 0x665F / 26207
{
	int iVar0;
	bool bVar1;
	
	if (Function_94(0) && !Global_6623)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_93())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_252 = (Global_21369.f_252 + iParam0);
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
	if (&bParam1)
	{
		if (bVar1 >= 0)
		{
			Function_88(1, bVar1);
			if (!&bParam2)
			{
				if (!Function_87(Global_119936, 1))
				{
					Function_81(&Global_54076, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_126(1, (4294967295 * bVar1));
			if (!Global_6623)
			{
				if (!Function_87(Global_119936, 2))
				{
					Function_81(&Global_54076, 2, 3, 0);
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
	switch (Global_21369.f_244)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_21369.f_244 = 1;
				Function_74(2, Function_124(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_21369.f_244 = 0;
				Function_74(2, Function_124(Global_21369.f_244), 0);
				if (Global_21369.f_248 == 5)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			else if (iVar0 >= 4294964796)
			{
				Global_21369.f_244 = 2;
				Function_74(2, Function_124(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_21369.f_244 = 1;
				Function_74(2, Function_124(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_21369.f_244 = 3;
				Function_74(2, Function_124(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000003:
			if (HAS_ITEM("HONOR_ROSARY", &Global_54076))
			{
				DELETE_ITEM("HONOR_ROSARY", &Global_54076, 0);
			}
			if (iVar0 < 4294966296)
			{
				Global_21369.f_244 = 2;
				Function_74(2, Function_124(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_21369.f_244 = 4;
				Function_74(2, Function_124(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_21369.f_244 = 3;
				Function_74(2, Function_124(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_21369.f_244 = 5;
				Function_74(2, Function_124(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_21369.f_244 = 4;
				Function_74(2, Function_124(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_21369.f_244 = 6;
				Function_74(2, Function_124(Global_21369.f_244), 1);
				if (Global_21369.f_248 == 5)
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
				Global_21369.f_244 = 5;
				Function_74(2, Function_124(Global_21369.f_244), 0);
			}
			break;
	}
	Function_73(Global_21369.f_244, Global_21369.f_248);
	return;
}

var Function_124(int iParam0) //Position: 0x6986 / 27014
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

int Function_125(int iParam0, bool bParam1, bool bParam2) //Position: 0x6A29 / 27177
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_54086[iParam0] > TO_FLOAT(bParam1))
	{
		Function_41(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_32(iParam0);
	if (&bParam2)
	{
		Function_21(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_126(int iParam0, bool bParam1) //Position: 0x6CC5 / 27845
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
		if (Global_77766[iVar116].f_120 != 2 || Global_77766[iVar116].f_120 != 3)
		{
			Global_77754[iVar1] = (Global_77754[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_77766[iVar116] + 16, "QME-", 8);
			strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
			Global_77766[iVar116].f_96 = 26;
			Global_77766[iVar116].f_116 = iParam0;
			Global_77766[iVar116].f_120 = 2;
			return 1;
		}
	}
	iVar1 = Function_75();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

void Function_127(bool bParam0) //Position: 0x6E70 / 28272
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (DECOR_CHECK_EXIST(&bParam0, "nnostickup"))
		{
			DECOR_REMOVE(&bParam0, "nnostickup");
		}
		AI_SET_ENABLE_STICKUP_OVERRIDE(&bParam0, 1);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bParam0, 1);
		SET_ACTOR_CUTSCENE_MODE(&bParam0, 0);
		TASK_PRIORITY_SET(&bParam0, 2);
	}
	return;
}

bool Function_128(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, float fParam5) //Position: 0x6EC3 / 28355
{
	float fVar0;
	
	if (IS_ACTOR_VALID(&iParam0) && !&bParam4)
	{
		if (IS_ACTOR_ON_FOOT(&iParam0))
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(&iParam0, &fParam5);
		}
		else
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(&iParam0, (&fParam5 + 3.0f));
		}
	}
	if (IS_ACTOR_VALID(&iParam0) && !&bParam4)
	{
		fVar0 = Function_120(&iParam0, &Global_54076);
		if (!Function_13(&iParam3, 8))
		{
			if (GET_LAST_ATTACKER(&iParam0) == &Global_54076)
			{
				uParam1 = 8;
				Function_129(&iParam0);
				return 1;
			}
		}
		if (!Function_13(&iParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(&iParam0, 1.0f))
			{
				uParam1 = 2;
				Function_129(&iParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(&iParam0, 1.0f, 1.0f))
			{
				uParam1 = 2;
				Function_129(&iParam0);
				return 1;
			}
		}
		if (!Function_13(&iParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(&iParam0) || (((GET_ACTOR_UNDER_RETICLE(&Global_54076, 0) != &iParam0 && IS_PLAYER_WEAPON_ZOOMED(&Global_54076)) && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(&Global_54076) != &iParam0 && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f))
			{
				if (uParam2 > 0.0f)
				{
					uParam1 = 4;
					Function_129(&iParam0);
					return 1;
				}
				if (uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - uParam2) < 1,3f)
					{
						uParam1 = 4;
						Function_129(&iParam0);
						return 1;
					}
				}
				uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_13(&iParam3, 1))
		{
			if (Global_6646 || Global_6647)
			{
				uParam1 = 1;
				Function_129(&iParam0);
				return 1;
			}
		}
		if (!Function_13(&iParam3, 16))
		{
			if (UNK_0x7F454A92(&iParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(&iParam0)) > 2.0f && fVar0 > 18.0f)
				{
					uParam1 = 16;
					Function_129(&iParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_129(int iParam0) //Position: 0x708C / 28812
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&iParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(&iParam0, 1);
	UNK_0x99AFD2D1(&iParam0, 0, 0);
	Function_130(&iParam0);
	MEMORY_CONSIDER_AS(&Global_54076, &iParam0, 2);
	MEMORY_CONSIDER_AS(&iParam0, &Global_54076, 2);
	AI_GOAL_LOOK_CLEAR(&iParam0);
	return;
}

void Function_130(bool bParam0) //Position: 0x70C9 / 28873
{
	SAY_SINGLE_LINE_CONTEXT(&bParam0, 60, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

void Function_131(struct<2> Param0, var uParam2, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7) //Position: 0x70E2 / 28898
{
	int iVar0;
	
	iVar0 = 0;
	if (!uParam2)
	{
		iVar0 = 1;
	}
	if (IS_ACTOR_VALID(&uParam4))
	{
		if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam4, 1.0f, &uParam6, 1, 1, 0))
		{
			if (&iParam5 != 0)
			{
				Global_38378 = (GET_CURRENT_GAME_TIME() + IntToFloat(&iParam5));
			}
			uParam2 = 1;
		}
	}
	else if (!Function_144(StackVal, Param0))
	{
		if (CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), Param0, 1.0f, &uParam6, 1, 1, 0))
		{
			if (&iParam5 != 0)
			{
				Global_38378 = (GET_CURRENT_GAME_TIME() + IntToFloat(&iParam5));
			}
			uParam2 = 1;
		}
	}
	if (uParam2 && iVar0)
	{
		if (StackVal & 64 == 64)
		{
			Function_143(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_142(0);
		}
		if (&bParam7)
		{
			Function_140(0, GET_THIS_SCRIPT_ID());
			Global_6615 = GET_THIS_SCRIPT_ID();
			Function_138(iParam3);
			Global_6644 = 1;
		}
		Function_136(iParam3);
		if (Function_135(StackVal, 32768))
		{
			Function_132(1);
		}
		Global_26652[iParam34].f_16++;
		Function_39(408, 1, 0, 0);
	}
}

void Function_132(bool bParam0) //Position: 0x71F7 / 29175
{
	if (bParam0)
	{
		Function_134(0x10000000);
	}
	else
	{
		Function_133(0x10000000);
	}
	Global_39922.f_304 = 0;
	return;
}

void Function_133(int iParam0) //Position: 0x721C / 29212
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_134(int iParam0) //Position: 0x7239 / 29241
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

bool Function_135(var uParam0, int iParam1) //Position: 0x724C / 29260
{
	return (uParam0 && iParam1) == 0;
}

void Function_136(int iParam0) //Position: 0x7259 / 29273
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (!Function_13(StackVal, 524288))
	{
		if (Global_26652[iParam04].f_20 < 0 && Global_26652[iParam04].f_20 > 2)
		{
			iVar0 = 10;
		}
		else if (Global_26652[iParam04].f_20 <= 2 && Global_26652[iParam04].f_20 > 4)
		{
			iVar0 = 16;
		}
		else if (Global_26652[iParam04].f_20 > 4)
		{
			iVar0 = 24;
		}
		if (iVar0 >= 0)
		{
			bVar1 = Function_137(iVar0 * 60);
			ADD_TIME(&Global_27462[iParam052] + 376, 0, 0, bVar1, 0);
			Global_26652[iParam04] = &Global_27462[iParam052] + 376;
		}
	}
	return;
}

int Function_137(int iParam0) //Position: 0x72FF / 29439
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_138(int iParam0) //Position: 0x7316 / 29462
{
	struct<77> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Global_47151[16])
	{
		PRINTNL();
		PRINTSTRING("SAVE_BEAT_STATE: ");
		PRINTSTRING(GET_ASSET_NAME(&Global_27462[iParam052] + 160, 4));
		PRINTNL();
		PRINTSTRING("curIDX: ");
		PRINTINT(Var0.f_76);
		PRINTNL();
	}
	Function_139(&Var0 + 80[Var0.f_762], &(Global_26652[iParam04]), iParam0);
	if (Var0.f_76 == 2)
	{
		Var0.f_76 = 0;
	}
	else
	{
		Var0.f_76++;
	}
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

void Function_139(vector3 vParam0) //Position: 0x73B5 / 29621
{
	vParam0.y = iParam2;
	vParam0 = Param1.f_16;
	vParam0.f_8 = 1;
	return;
}

void Function_140(int iParam0, int iParam1) //Position: 0x73D1 / 29649
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= Global_38380)
	{
		iVar1 = 1;
		Global_38380[iVar036].f_104 = 0;
		if (&Global_38380[iVar036] + 48 == &iParam1)
		{
			iVar1 = 0;
		}
		if ((Global_38380[iVar036] != 128 || Global_38380[iVar036] != 64) && &iParam0 != 0)
		{
			iVar1 = 0;
		}
		if (IS_SCRIPT_VALID(&Global_38380[iVar036] + 48) && iVar1 != 1)
		{
			TERMINATE_SCRIPT(&Global_38380[iVar036] + 48);
			Function_141(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_141(struct<113> Param0) //Position: 0x7458 / 29784
{
	Param0.f_112 = 0;
	Param0.f_4 = 0;
	Param0.f_12 = 4294967295;
	(&Param0 + 16) = "";
	*(&Param0 + 24) = Vector(0.0f, 0.0f, 0.0f);
	*(&Param0 + 36) = Vector(0.0f, 0.0f, 0.0f);
	(&Param0 + 48) = "";
	(&Param0 + 72) = "";
	Param0.f_56 = 4294967295;
	(&Param0 + 64) = "";
	Param0.f_108 = 0.0f;
	Param0.f_96 = 0;
	return;
}

void Function_142(int iParam0) //Position: 0x74B6 / 29878
{
	*(&Global_21369 + 136) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 136, 0, 0, (&iParam0 + Function_137(900)), 0);
	return;
}

void Function_143(int iParam0) //Position: 0x74DA / 29914
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, (&iParam0 + Function_137(200)), 0);
	return;
}

bool Function_144(vector3 vParam0) //Position: 0x74FD / 29949
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

struct<8> Function_145() //Position: 0x7515 / 29973
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_146(int iParam0, bool bParam1) //Position: 0x751F / 29983
{
	UI_SET_STRING("beat_dynstr", I2STR(bParam1));
	switch (bLocal_71)
	{
		case 0x00000000:
			uLocal_42 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iParam0, Function_217(), 0f, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(15.0f, 15.0f, 15.0f));
			iLocal_40 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("highHonorDonationContext02", &uLocal_42, 25, "@FOOT.INTERACT", 0, 0, 0, 0, 4294967295, 0);
			break;
		
		case 0x00000001:
			uLocal_42 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iParam0, Function_217(), 0f, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(15.0f, 15.0f, 15.0f));
			iLocal_40 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("highHonorDonationContext02", &uLocal_42, 25, "@FOOT.INTERACT", 0, 0, 0, 0, 4294967295, 0);
			break;
		
		case 0x00000002:
			uLocal_42 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iParam0, Function_217(), 0f, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(15.0f, 15.0f, 15.0f));
			iLocal_40 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("highHonorDonationContext", &uLocal_42, 25, "@FOOT.INTERACT", 0, 0, 0, 0, 4294967295, 0);
			break;
	}
	return;
}

void Function_147(int iParam0) //Position: 0x7687 / 30343
{
	Function_148(&Global_43580, iParam0);
	return;
}

void Function_148(var uParam0, int iParam1) //Position: 0x7695 / 30357
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	uParam0 |= 1073741824;
	return;
}

void Function_149(int iParam0) //Position: 0x76BD / 30397
{
	switch (bLocal_71)
	{
		case 0x00000000:
			if (bLocal_48)
			{
				Function_71(&Global_54076);
				Function_145();
				uLocal_36 = CREATE_GRINGO_IN_LAYOUT(&iParam0, Function_217(), "$/content/scripting/gringo/SimpleGringo/fan_pardon_letter_link", Function_71(&Global_54076), Function_145());
				GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&uLocal_36), false);
			}
			else
			{
				Function_71(&Global_54076);
				Function_145();
				uLocal_36 = CREATE_GRINGO_IN_LAYOUT(&iParam0, Function_217(), "$/content/scripting/gringo/SimpleGringo/receive_money", Function_71(&Global_54076), Function_145());
				GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&uLocal_36), false);
			}
			break;
		
		case 0x00000001:
			if (!Function_35(67))
			{
				Function_71(&Global_54076);
				Function_145();
				uLocal_36 = CREATE_GRINGO_IN_LAYOUT(&iParam0, Function_217(), "$/content/scripting/gringo/SimpleGringo/relic_handoff", Function_71(&Global_54076), Function_145());
				GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&uLocal_36), false);
			}
			else
			{
				Function_71(&Global_54076);
				Function_145();
				uLocal_36 = CREATE_GRINGO_IN_LAYOUT(&iParam0, Function_217(), "$/content/scripting/gringo/SimpleGringo/receive_money", Function_71(&Global_54076), Function_145());
				GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&uLocal_36), false);
			}
			break;
		
		case 0x00000002:
			Function_71(&Global_54076);
			Function_145();
			uLocal_36 = CREATE_GRINGO_IN_LAYOUT(&iParam0, Function_217(), "$/content/scripting/gringo/SimpleGringo/give_money", Function_71(&Global_54076), Function_145());
			GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&uLocal_36), false);
			break;
	}
	Function_105();
	return;
}

void Function_150(var uParam0) //Position: 0x78BA / 30906
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		SET_ACTOR_CAN_BE_HARDLOCKED(&uParam0, 0);
		AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&uParam0, 0);
	}
	return;
}

float Function_151() //Position: 0x78D7 / 30935
{
	float fVar0;
	int iVar1;
	
	if (Global_6612)
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

bool Function_152(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x7908 / 30984
{
	if (StackVal & 64 == 64)
	{
		if (!iParam2)
		{
			if (IS_ACTOR_VALID(&uParam1))
			{
				if (Function_120(&Global_54076, &uParam1) > 15.0f)
				{
					iParam2 = 1;
				}
			}
		}
		if (Global_6637 && !iParam2)
		{
			return 0;
		}
		if ((Global_6608 && Global_10986 == GET_THIS_SCRIPT_ID()) && !iParam2)
		{
			return 0;
		}
		if (Function_155() && !iParam2)
		{
			return 0;
		}
		if (Function_154(iParam0) && !iParam2)
		{
			return 0;
		}
		if (Global_6630 && !&bParam4)
		{
			return 0;
		}
		if (Global_6653)
		{
			return 0;
		}
		if (Global_6627)
		{
			return 0;
		}
		if (Global_6646 && iParam7)
		{
			iParam3 = 1;
			return 0;
		}
		if (Global_6647 && iParam7)
		{
			iParam3 = 1;
			return 0;
		}
		if (Global_6635 && !iParam2)
		{
			return 0;
		}
		if (Global_6636 && !iParam2)
		{
			return 0;
		}
		if (&bParam6)
		{
			if (Global_99146 && !iParam2)
			{
				return 0;
			}
		}
		if (IS_ACTOR_ON_TRAIN(&Global_54076, 0))
		{
			return 0;
		}
	}
	if (StackVal & 2048 != 2048)
	{
		if (!Function_153(iParam0, &iParam5))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_153(int iParam0, int iParam1) //Position: 0x7A4B / 31307
{
	iParam0 = iParam0;
	if (Global_6625 != 1 && iParam1)
	{
		return 0;
	}
	if (Global_6610 == 1)
	{
		return 0;
	}
	return 1;
}

int Function_154(int iParam0) //Position: 0x7A6C / 31340
{
	float fVar0;
	
	if (StackVal & 64 == 64)
	{
		fVar0 = GET_LAST_HIT_TIME(&Global_54076);
		if (fVar0 < 0.0f)
		{
			if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(&Global_54076)) > 20.0f)
			{
				return 1;
			}
		}
	}
	return 0;
}

int Function_155() //Position: 0x7AAC / 31404
{
	int iVar0;
	int iVar1;
	
	if (Global_6629)
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
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
			if (DECOR_CHECK_EXIST(&Global_39621[iVar05] + 16, "script"))
			{
				if (IS_SCRIPT_VALID(DECOR_GET_INT(&Global_39621[iVar05] + 16, "script")))
				{
					if (GET_THIS_SCRIPT_ID() != DECOR_GET_INT(&Global_39621[iVar05] + 16, "script"))
					{
						if (Function_156(&Global_54076, &Global_39621[iVar05] + 16) > IntToFloat(iVar1))
						{
							return 1;
						}
					}
				}
			}
			if (Function_156(&Global_54076, &Global_39621[iVar05] + 16) > IntToFloat(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

float Function_156(int iParam0, var uParam1) //Position: 0x7B6F / 31599
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			Function_70(&iParam0);
			Var0 = Function_70(&iParam0);
			Function_157(&uParam1);
			Var2 = Function_157(&uParam1);
			return VDIST(Var0, Var2);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

struct<8> Function_157(int iParam0) //Position: 0x7C11 / 31761
{
	struct<2> Var0;
	
	if (IS_OBJECT_VALID(&iParam0))
	{
		GET_OBJECT_POSITION(&iParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID object. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

bool Function_158(struct<65> Param0) //Position: 0x7C7F / 31871
{
	struct<8> Var0;
	var uVar8;
	var uVar9;
	
	if (Global_6612 && Param0.f_40)
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_196(GET_SCRIPT_NAME()) };
		uVar8 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Vector(*(&Param0 + 16), Function_194(0.0f, &Global_54076, *(&Param0 + 16)), 0.0f), Vector(Param0.f_60, 20.0f, Param0.f_60));
		DECOR_SET_INT(&uVar8, "script", GET_THIS_SCRIPT_ID());
		if (Param0.f_64 != 4294967295)
		{
			DECOR_SET_INT(StackVal, &uVar8, "category");
			Function_192(&uVar8, Param0.f_40);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
		*(&Param0 + 16) = Global_54078;
		return 1;
	}
	uParam3 = 0;
	if (!Function_159(&Param0))
	{
		if (Param0.f_40 == 1)
		{
			if (uParam2 == 0)
			{
				Function_10("Still scanning for the proper terrain to run this event.  Move the player around to find a good spawn location.", -1.0f, 1, 2, 1, 0);
			}
		}
		else if (uParam2 >= 20)
		{
			uParam3 = 1;
			Global_39619++;
		}
		uParam2++;
		uParam1 = 1000;
		*(&Param0 + 16) = Vector(0.0f, 0.0f, 0.0f);
		return 0;
	}
	if (Param0.f_40)
	{
		HUD_CLEAR_SMALL_TEXT_QUEUE();
		Global_6642 = 0;
		Function_10("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 5.0f, 1, 2, 1, 0);
	}
	if (&bParam4)
	{
		if (!Function_8(Param0.f_64, 0, 1, 0, 0))
		{
			uParam3 = 1;
			LOG_ERROR("SET_BEAT_NEXT_SPAWN_TIME Failed, shutting down event");
			return 0;
		}
		if (Param0.f_60 >= 0.0f)
		{
			LOG_ERROR("SET_BEAT_NEXT_SPAWN_TIME Failed: Volume restriction size not set");
			return 0;
		}
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_196("restrictVol") };
		uVar9 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Vector(*(&Param0 + 16), Function_194(0.0f, &Global_54076, *(&Param0 + 16)), 0.0f), Vector(Param0.f_60, 20.0f, Param0.f_60));
		DECOR_SET_INT(&uVar9, "script", GET_THIS_SCRIPT_ID());
		if (Param0.f_64 != 4294967295)
		{
			DECOR_SET_INT(StackVal, &uVar9, "category");
			Function_192(&uVar9, Param0.f_40);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
	}
	return 1;
}

bool Function_159(struct<73> Param0) //Position: 0x804D / 32845
{
	var uVar0;
	var uVar1;
	int iVar2;
	struct<2> Var3;
	var uVar5;
	struct<2> Var7;
	float fVar9;
	float fVar10;
	bool bVar11;
	struct<17> Var12;
	
	GET_POSITION(GET_PLAYER_ACTOR(0), &Var7);
	switch (Param0.f_72)
	{
		case 0x00000005:
			if (!IS_ITERATOR_VALID(&Param0 + 8))
			{
				if (IS_LAYOUTREF_VALID(&Global_46715))
				{
					*(&Param0 + 8) = CREATE_OBJECT_ITERATOR(&Global_46715);
				}
				else
				{
					return 0;
				}
			}
			Function_191(&Param0 + 8);
			switch ((&Param0 + 72 + 36)->f_28)
			{
				case 0x00000000:
					ITERATE_IN_LAYOUT(&Param0 + 8, &Global_46715);
					break;
				
				case 0x00000001:
					ITERATE_IN_LAYOUT(&Param0 + 8, FIND_NAMED_LAYOUT("regions_layout"));
					break;
			}
			if ((&Param0 + 72 + 36)->f_16 < 0.0f)
			{
				Var3 = Vector(0.0f, 0.0f, Function_118(1));
				ROTATE_VECTOR_XZ(&Var3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				Var3 = Vector(StackVal, StackVal, StackVal) + Vector(Var7, Var3, StackVal);
				ITERATE_IN_SPHERE(&Param0 + 8, Var3, Function_118(1));
			}
			if (!STRINGS_ARE_EQUAL(&Param0 + 72 + 36, ""))
			{
				ITERATE_ON_PARTIAL_NAME(&Param0 + 8, &Param0 + 72 + 36);
			}
			if (!4294967295 != (&Param0 + 72 + 36)->f_20)
			{
				ITERATE_ON_OBJECT_TYPE(&Param0 + 8, (&Param0 + 72 + 36)->f_20);
			}
			if (GET_NUM_ITERATOR_MATCHES(&Param0 + 8) >= 0)
			{
				if (StackVal & 512 == 0 || Param0.f_44 != 1)
				{
					if ((&Param0 + 72 + 36)->f_24 == 0)
					{
						uVar0 = Function_190(StackVal, &Param0 + 8, Var7, 0,01f);
					}
					else
					{
						uVar0 = Function_189(StackVal, &Param0 + 8, Var7, 0,1f, "locflag", (&Param0 + 72 + 36)->f_24);
					}
				}
				else if ((&Param0 + 72 + 36)->f_24 == 0)
				{
					uVar0 = Function_188(StackVal, &Param0 + 8, Var7, Function_151());
				}
				else
				{
					uVar0 = Function_187(StackVal, &Param0 + 8, Var7, Function_151(), "locflag", (&Param0 + 72 + 36)->f_24);
				}
				if (IS_OBJECT_VALID(&uVar0))
				{
					GET_OBJECT_POSITION(&uVar0, &Param0 + 16);
					GET_OBJECT_ORIENTATION(&uVar0, &Param0 + 28);
					Param0.f_56 = &uVar0;
					DESTROY_ITERATOR(&Param0 + 8);
				}
				else
				{
					DESTROY_ITERATOR(&Param0 + 8);
					return 0;
				}
			}
			DESTROY_ITERATOR(&Param0 + 8);
			return 0;
			break;
		
		case 0x00000006:
			if (!IS_ITERATOR_VALID(&Param0 + 8))
			{
				*(&Param0 + 8) = CREATE_OBJECT_ITERATOR(FIND_NAMED_LAYOUT("regions_layout"));
			}
			Function_191(&Param0 + 8);
			ITERATE_IN_LAYOUT(&Param0 + 8, FIND_NAMED_LAYOUT("regions_layout"));
			fVar10 = 130.0f;
			fVar9 = 190.0f;
			GET_POSITION(GET_PLAYER_ACTOR(0), &Var3);
			ITERATE_IN_SPHERE(StackVal, &Param0 + 8, Var3);
			uVar1 = START_OBJECT_ITERATOR(&Param0 + 8);
			while (IS_OBJECT_VALID(&uVar1) && !IS_OBJECT_VALID(&uVar0))
			{
				if (DECOR_CHECK_EXIST(&uVar1, "regid"))
				{
					bVar11 = DECOR_GET_INT(&uVar1, "regid");
					if (Function_186(bVar11))
					{
						if (StackVal == (&Param0 + 72)->f_68)
						{
							if ((StackVal && Global_43791[bVar11]) >= 0)
							{
								GET_OBJECT_POSITION(&uVar1, &Var3);
								if (VDIST(Var7, Var3) < fVar10 && VDIST(Var7, Var3) > Function_118(1))
								{
									uVar0 = &uVar1;
								}
							}
						}
					}
				}
				uVar1 = OBJECT_ITERATOR_NEXT(&Param0 + 8);
			}
			if (IS_OBJECT_VALID(&uVar0))
			{
				GET_OBJECT_POSITION(&uVar0, &Param0 + 16);
				Function_185(&Param0 + 16, 99.0f, &Param0 + 16, 10);
				GET_OBJECT_ORIENTATION(&uVar0, &Param0 + 28);
				Param0.f_56 = DECOR_GET_INT(&uVar0, "regid");
			}
			else
			{
				DESTROY_ITERATOR(&Param0 + 8);
				return 0;
			}
			break;
		
		case 0x00000002:
		case 0x00000001:
			if (StackVal && (((!Global_6629 && Global_6631) && ARE_CURVES_IN_RANGE(48, Var7, 100.0f)) && 8) != 8)
			{
				uVar5 = Vector(0.0f, 0.0f, -10.0f);
				ROTATE_VECTOR_XZ(&uVar5, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				Function_184(&Var7, &uVar5);
				Var3 = Function_184(&Var7, &uVar5);
				if (!Function_144(StackVal, Var3))
				{
					PRINTSTRING("Player Pos: ");
					PRINTVECTOR(Var7);
					PRINTNL();
					Function_119(&fVar10, &fVar9);
					if (VDIST(Var3, Var7) < ((fVar10 + ((fVar9 - fVar10) / 2.0f)) * 0,8f))
					{
						iVar2 = Function_181(StackVal, &Param0, Var3);
					}
				}
			}
			else
			{
				iVar2 = Function_177(&Param0);
			}
			if (iVar2 == 1)
			{
				if ((&Param0 + 72)->f_156 == 4)
				{
					if (IS_OBJECT_VALID(StackVal))
					{
						if (GET_OBJECT_TYPE(StackVal) == 9)
						{
							if (!IS_POINT_IN_VOLUME(StackVal, *(&Param0 + 16)))
							{
								return 0;
							}
						}
					}
				}
				if ((&Param0 + 72)->f_156 == 5)
				{
				}
				if (Param0.f_68 == 2)
				{
					if (!Function_176(StackVal, *(&Param0 + 16)))
					{
						return 0;
					}
				}
				if (Param0.f_68 == 1)
				{
					if (!Function_175(StackVal, *(&Param0 + 16)))
					{
						return 0;
					}
				}
				if (Function_13(StackVal, 131072))
				{
					if (StackVal || Function_174(Function_174(StackVal, *(&Param0 + 16)), Global_54078))
					{
						return 0;
					}
				}
				if (StackVal & 1024 == 1024)
				{
					if (Function_173(StackVal, *(&Param0 + 16)))
					{
						return 0;
					}
				}
				if (!Function_169(&Param0 + 16, &Param0 + 60, 0, Param0.f_40))
				{
					return 0;
				}
			}
			return 0;
			break;
		
		case 0x00000003:
			if (StackVal)
			{
				fVar10 = 120.0f;
				fVar9 = 150.0f;
				Var3 = Vector(0.0f, 0.0f, ((fVar10 + fVar9) * -0,5f));
				ROTATE_VECTOR_XZ(&Var3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				Var3 = Vector(StackVal, StackVal, StackVal) + Vector(Var7, Var3, StackVal);
				uVar17 = START_CURVE_QUERY(&Global_43578, Var3, Function_168((&Param0 + 72)->f_148, 0), 0.0f, 20.0f, 5.0f, 0);
			}
			else
			{
				uVar17 = START_CURVE_QUERY(&Global_43578, Var7, Function_168((&Param0 + 72)->f_148, 0), 120.0f, 150.0f, 5.0f, 0);
			}
			if (GET_NUM_POINTS_IN_CURVE_QUERY(&uVar17) >= 0)
			{
				bVar15 = RAND_INT_RANGE(0, (GET_NUM_POINTS_IN_CURVE_QUERY(&uVar17) - 1));
				GET_POINT_FROM_CURVE_QUERY(&uVar17, bVar15, &Var12);
				Function_167(&Var12);
				*(&Param0 + 16) = Function_167(&Var12);
				Param0.f_28 = Var12.f_12;
				(&Param0 + 28)->f_4 = Var12.f_16;
				Param0.f_56 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(&uVar17, bVar15);
				UNK_0xDF93BD7C(&uVar17);
			}
			else
			{
				UNK_0xDF93BD7C(&uVar17);
				return 0;
			}
			if (Param0.f_68 == 2)
			{
				if (!Function_176(StackVal, *(&Param0 + 16)))
				{
					return 0;
				}
			}
			if (Param0.f_68 == 1)
			{
				if (!Function_175(StackVal, *(&Param0 + 16)))
				{
					return 0;
				}
			}
			if (Param0.f_68 == 0)
			{
				if (!(StackVal || Function_176(Function_175(StackVal, *(&Param0 + 16)), *(&Param0 + 16))))
				{
					return 0;
				}
			}
			if (Function_13(StackVal, 131072))
			{
				if (StackVal || Function_174(Function_174(StackVal, *(&Param0 + 16)), Global_54078))
				{
					return 0;
				}
			}
			if (StackVal && !Function_169(&Param0 + 16, &Param0 + 60, 0, Param0.f_40) == 262144)
			{
				return 0;
			}
			break;
		
		case 0x00000004:
			if (!Function_164((&Param0 + 72)->f_148) < 0)
			{
				return 0;
			}
			break;
		
		case 0x00000007:
			switch ((&Param0 + 72)->f_156)
			{
				case 0x00000001:
					iVar18 = Function_161(StackVal, Global_43787, Global_43788, Global_43789, 1);
					if (IS_PERS_CHAR_VALID(&iVar18))
					{
						if (IS_PERS_CHAR_ALIVE(&iVar18))
						{
							return 0;
						}
					}
					break;
				
				case 0x00000002:
					iVar16 = 0;
					while (StackVal <= (StackVal - iVar16) + 1)
					{
						iVar18 = Function_161(StackVal, Global_43787, Global_43788, (Global_43789 + iVar16), 1);
						if (IS_PERS_CHAR_VALID(&iVar18))
						{
							if (IS_PERS_CHAR_ALIVE(&iVar18))
							{
								iVar19++;
							}
						}
						iVar16++;
					}
					if (iVar19 >= 0)
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
					Param0.f_56 = StackVal;
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
	if (Function_160(StackVal, *(&Param0 + 16)))
	{
		return 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(*(&Param0 + 16), 10.0f))
	{
		return 0;
	}
	return 1;
}

bool Function_160(struct<2> Param0) //Position: 0x8914 / 35092
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(&Global_39246))
	{
		if (IS_POINT_IN_VOLUME(Param0, GET_VOLUME_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &Global_39246))))
		{
			return 1;
		}
		bVar0++;
	}
	return 0;
}

int Function_161(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x894B / 35147
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
	if (!&bParam4)
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
								return Function_162(&Global_11014, &Global_12796, bParam3);
								break;
							
							case 0x00000001:
								return Function_162(&Global_11146, &Global_12992, bParam3);
								break;
							
							case 0x00000002:
								return Function_162(&Global_11120, &Global_12954, bParam3);
								break;
							
							default:
								return Function_162(&Global_11200, &Global_13072, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_162(&Global_11420, &Global_13398, bParam3);
								break;
							
							case 0x00000001:
								return Function_162(&Global_11222, &Global_13104, bParam3);
								break;
							
							case 0x00000003:
								return Function_162(&Global_11284, &Global_13196, bParam3);
								break;
							
							case 0x00000002:
								return Function_162(&Global_11398, &Global_13366, bParam3);
								break;
							
							case 0x00000004:
								return Function_162(&Global_11492, &Global_13504, bParam3);
								break;
							
							default:
								return Function_162(&Global_11482, &Global_13490, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_162(&Global_11544, &Global_13580, bParam3);
								break;
							
							case 0x00000001:
								return Function_162(&Global_11646, &Global_13732, bParam3);
								break;
							
							case 0x00000002:
								return Function_162(&Global_11704, &Global_13818, bParam3);
								break;
							
							default:
								return Function_162(&Global_11518, &Global_13542, bParam3);
								break;
						}
						break;
					
					case 0x00000003:
						switch (bVar1)
						{
							case 0x00000001:
								return Function_162(&Global_11752, &Global_13888, bParam3);
								break;
							
							default:
								return Function_162(&Global_11826, &Global_13998, bParam3);
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
								return Function_162(&Global_11836, &Global_14012, bParam3);
								break;
							
							case 0x00000001:
								return Function_162(&Global_11946, &Global_14176, bParam3);
								break;
							
							case 0x00000002:
								return Function_162(&Global_11988, &Global_14238, bParam3);
								break;
							
							default:
								return Function_162(&Global_12038, &Global_14312, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_162(&Global_12048, &Global_14326, bParam3);
								break;
							
							default:
								return Function_162(&Global_12274, &Global_14662, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000002:
								return Function_162(&Global_12284, &Global_14676, bParam3);
								break;
							
							case 0x00000001:
								return Function_162(&Global_12342, &Global_14762, bParam3);
								break;
							
							case 0x00000003:
								return Function_162(&Global_12392, &Global_14836, bParam3);
								break;
							
							default:
								return Function_162(&Global_12472, &Global_14954, bParam3);
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
	else if (bVar1 == Global_46760[0])
	{
		return Function_162(&Global_11014, &Global_12796, bParam3);
	}
	if (bVar1 == Global_46760[1])
	{
		return Function_162(&Global_11146, &Global_12992, bParam3);
	}
	if (bVar1 == Global_46760[2])
	{
		return Function_162(&Global_11120, &Global_12954, bParam3);
	}
	if (bVar1 == Global_46796[0])
	{
		return Function_162(&Global_11420, &Global_13398, bParam3);
	}
	if (bVar1 == Global_46796[1])
	{
		return Function_162(&Global_11222, &Global_13104, bParam3);
	}
	if (bVar1 == Global_46796[3])
	{
		return Function_162(&Global_11284, &Global_13196, bParam3);
	}
	if (bVar1 == Global_46796[2])
	{
		return Function_162(&Global_11398, &Global_13366, bParam3);
	}
	if (bVar1 == Global_46796[4])
	{
		return Function_162(&Global_11492, &Global_13504, bParam3);
	}
	if (bVar1 == Global_46816[0])
	{
		return Function_162(&Global_11544, &Global_13580, bParam3);
	}
	if (bVar1 == Global_46816[1])
	{
		return Function_162(&Global_11646, &Global_13732, bParam3);
	}
	if (bVar1 == Global_46816[2])
	{
		return Function_162(&Global_11704, &Global_13818, bParam3);
	}
	if (bVar1 == Global_46838[1])
	{
		return Function_162(&Global_11752, &Global_13888, bParam3);
	}
	if (bVar1 == Global_46850[0])
	{
		return Function_162(&Global_11836, &Global_14012, bParam3);
	}
	if (bVar1 == Global_46850[1])
	{
		return Function_162(&Global_11946, &Global_14176, bParam3);
	}
	if (bVar1 == Global_46850[2])
	{
		return Function_162(&Global_11988, &Global_14238, bParam3);
	}
	if (bVar1 == Global_46866[0])
	{
		return Function_162(&Global_12048, &Global_14326, bParam3);
	}
	if (bVar1 == Global_46894[2])
	{
		return Function_162(&Global_12284, &Global_14676, bParam3);
	}
	if (bVar1 == Global_46894[1])
	{
		return Function_162(&Global_12342, &Global_14762, bParam3);
	}
	if (bVar1 == Global_46894[3])
	{
		return Function_162(&Global_12392, &Global_14836, bParam3);
	}
	if (bVar1 == Global_46736[0])
	{
		return Function_162(&Global_11200, &Global_13072, bParam3);
	}
	if (bVar1 == Global_46736[1])
	{
		return Function_162(&Global_11482, &Global_13490, bParam3);
	}
	if (bVar1 == Global_46736[2])
	{
		return Function_162(&Global_11518, &Global_13542, bParam3);
	}
	if (bVar1 == Global_46736[3])
	{
		return Function_162(&Global_11826, &Global_13998, bParam3);
	}
	if (bVar1 == Global_46746[0])
	{
		return Function_162(&Global_12038, &Global_14312, bParam3);
	}
	if (bVar1 == Global_46746[2])
	{
		return Function_162(&Global_12274, &Global_14662, bParam3);
	}
	if (bVar1 == Global_46746[1])
	{
		return Function_162(&Global_12472, &Global_14954, bParam3);
	}
	return "";
}

var Function_162(struct<2>[] Param0, vector3[] vParam1, bool bParam2) //Position: 0x8F61 / 36705
{
	int iVar0;
	
	iVar0 = bParam2;
	if (iVar0 <= Param0 || iVar0 > 0)
	{
		return "";
	}
	if (!Function_163(&(Param0[iVar02]), 2))
	{
		return "";
	}
	if (!IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
	{
		return "";
	}
	ACTIVATE_ACTOR_FOR_PERS_CHAR(&vParam1[iVar03] + 16);
	return &vParam1[iVar03] + 16;
}

bool Function_163(var uParam0, int iParam1) //Position: 0x8FBB / 36795
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_164(int iParam0) //Position: 0x8FD8 / 36824
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	iVar0 = 0;
	uVar1 = CREATE_OBJECT_ITERATOR(&Global_43578);
	ITERATE_ON_OBJECT_TYPE(&uVar1, 25);
	iVar2 = START_OBJECT_ITERATOR(&uVar1);
	if (&iParam0 == 0)
	{
		iVar0 = GET_NUM_ITERATOR_MATCHES(&uVar1);
	}
	else
	{
		while (IS_OBJECT_VALID(&iVar2))
		{
			if (Function_165(GET_SQUAD_FROM_OBJECT(&iVar2)) == &iParam0)
			{
				iVar0++;
			}
			iVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
		}
	}
	DESTROY_ITERATOR(&uVar1);
	return iVar0;
}

int Function_165(int iParam0) //Position: 0x9040 / 36928
{
	var uVar0;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return 4294967295;
	}
	uVar0 = Function_166(&iParam0);
	if (!IS_ACTOR_VALID(&uVar0))
	{
		return 4294967295;
	}
	if (IS_ACTOR_RIDING_VEHICLE(&uVar0))
	{
		return 2;
	}
	if (IS_ACTOR_RIDING(&uVar0))
	{
		return 1;
	}
	return 4294967295;
}

var Function_166(var uParam0) //Position: 0x907E / 36990
{
	int iVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return "";
	}
	bVar1 = false;
	while (bVar1 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		iVar0 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar1);
		if (IS_ACTOR_VALID(&iVar0) && IS_ACTOR_ALIVE(&iVar0))
		{
			return &iVar0;
		}
		bVar1++;
	}
	return "";
}

struct<8> Function_167(vector3 vParam0) //Position: 0x90CB / 37067
{
	struct<2> Var0;
	
	Var0 = vParam0;
	Var0.f_4 = vParam0.y;
	Var0.f_8 = vParam0.z;
	return StackVal, Var0;
}

int Function_168(int iParam0, int iParam1) //Position: 0x90ED / 37101
{
	if (&iParam1 != 0)
	{
		return &iParam1;
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

bool Function_169(struct<2> Param0, int iParam2, bool bParam3) //Position: 0x911F / 37151
{
	var uVar0;
	int iVar2;
	bool bVar3;
	float fVar4;
	bool bVar5;
	
	if (&bParam3)
	{
		return 1;
	}
	bVar3 = false;
	Function_171(4294967295);
	iVar2 = 0;
	while (iVar2 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar25] + 16))
		{
			bVar5 = DECOR_GET_INT(&Global_39621[iVar25] + 16, "category");
			if (&iParam2 != 0)
			{
				if (bVar5 != &iParam2 && &iParam2 != 256)
				{
					bVar3 = true;
				}
			}
			GET_VOLUME_CENTER(&Global_39621[iVar25] + 16, &uVar0);
			if (&iParam2 != 262144)
			{
				if (IS_POINT_IN_VOLUME(Param0, &Global_39621[iVar25] + 16))
				{
					return 0;
				}
			}
			fVar4 = fParam1;
			if (bVar3)
			{
				fVar4 = (fVar4 + 170.0f);
			}
			if (Global_6629 && bVar5 != 512)
			{
			}
			else if (Function_170(&Param0, &uVar0) > fVar4)
			{
				return 0;
			}
		}
		iVar2++;
	}
	return 1;
}

float Function_170(struct<2> Param0) //Position: 0x91FB / 37371
{
	struct<2> Var0;
	bool bVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	bVar2 = VMAG(Var0);
	return bVar2;
}

int Function_171(int iParam0) //Position: 0x921A / 37402
{
	int iVar0;
	struct<2> Var1;
	
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
			if (DECOR_CHECK_EXIST(&Global_39621[iVar05] + 16, "script"))
			{
				if (!IS_SCRIPT_VALID(DECOR_GET_INT(&Global_39621[iVar05] + 16, "script")))
				{
					GET_VOLUME_CENTER(&Global_39621[iVar05] + 16, &Var1);
					if (IS_BLIP_VALID(&Global_39621[iVar05] + 8))
					{
						REMOVE_BLIP(&Global_39621[iVar05] + 8);
					}
					if (!IS_ACTOR_VALID(&Global_54076))
					{
						Function_172(iVar0);
					}
					else if (Global_6629)
					{
						if (Function_69(StackVal, &Global_54076, Var1) < 25.0f)
						{
							Function_172(iVar0);
						}
					}
					else if (Function_69(StackVal, &Global_54076, Var1) < 55.0f)
					{
						Function_172(iVar0);
					}
				}
				else if (DECOR_GET_INT(&Global_39621[iVar05] + 16, "script") == &iParam0)
				{
					LOG_ERROR("duplicate script id..This should never happen...Tell Steve");
					PRINTSTRING("Duplicate Script Id:");
					PRINTINT(&iParam0);
					RELEASE_VOLUME(&Global_39621[iVar05] + 16);
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

void Function_172(int iParam0) //Position: 0x9388 / 37768
{
	if (IS_VOLUME_VALID(&Global_39621[iParam05] + 24))
	{
		REMOVE_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&Global_39621[iParam05] + 24, 0);
		REMOVE_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&Global_39621[iParam05] + 24);
	}
	if (IS_BLIP_VALID(&Global_39621[iParam05] + 8))
	{
		REMOVE_BLIP(&Global_39621[iParam05] + 8);
	}
	RELEASE_VOLUME(&Global_39621[iParam05] + 16);
	RELEASE_VOLUME(&Global_39621[iParam05] + 24);
	return;
}

bool Function_173(struct<2> Param0) //Position: 0x93F0 / 37872
{
	struct<9> Var0;
	
	iVar5 = 0;
	while (iVar5 <= Global_43791)
	{
		if (IS_VOLUME_VALID(&Global_44085[iVar59] + 8))
		{
			if (StackVal || (StackVal || StackVal != 3 != 4) != 5)
			{
				if (GET_OBJECT_TYPE(&Global_44085[iVar59] + 8) == 9)
				{
					GET_VOLUME_SCALE(&Global_44085[iVar59] + 8, &vVar0);
					GET_VOLUME_CENTER(&Global_44085[iVar59] + 8, &Var2);
					bVar4 = VDIST(Param0, Var2);
					if ((bVar4 - ((vVar0.x + vVar0.z) / 2.0f)) > 60.0f)
					{
						return 1;
					}
				}
			}
		}
		iVar5++;
	}
	return 0;
}

int Function_174(struct<2> Param0) //Position: 0x9495 / 38037
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (IS_VOLUME_VALID(&Global_44085[iVar09] + 8))
		{
			if (IS_POINT_IN_VOLUME(Param0, &Global_44085[iVar09] + 8))
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

bool Function_175(struct<2> Param0) //Position: 0x94E3 / 38115
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (IS_VOLUME_VALID(&Global_44085[iVar09] + 8))
		{
			if (IS_POINT_IN_VOLUME(Param0, &Global_44085[iVar09] + 8))
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

bool Function_176(struct<2> Param0) //Position: 0x953E / 38206
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (IS_VOLUME_VALID(&Global_44085[iVar09] + 8))
		{
			if (IS_POINT_IN_VOLUME(Param0, &Global_44085[iVar09] + 8))
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

int Function_177(bool bParam0) //Position: 0x95BD / 38333
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
	if ((&bParam0 + 72 + 84)->f_44 == 0.0f)
	{
		if ((&bParam0 + 72 + 84)->f_48 == 0.0f)
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, (&bParam0 + 72 + 84)->f_44, (&bParam0 + 72 + 84)->f_48);
		}
		else
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(StackVal, 0.0f, (&bParam0 + 72 + 84)->f_44);
		}
	}
	else
	{
		Function_179(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, (&bParam0 + 72 + 84));
	}
	if ((&bParam0 + 72 + 84)->f_52 == 0.0f)
	{
		if ((&bParam0 + 72 + 84)->f_56 == 0.0f)
		{
			AMBIENT_SET_BUMP_FILTER(0.0f, (&bParam0 + 72 + 84)->f_52, (&bParam0 + 72 + 84)->f_56);
		}
		else
		{
			AMBIENT_SET_BUMP_FILTER(StackVal, 0.0f, (&bParam0 + 72 + 84)->f_52);
		}
	}
	Function_178(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&bParam0 + 72 + 84));
	AMBIENT_SET_ONESHOT_QUERIES(0);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	if (Global_47151[34])
	{
		PRINTSTRING("HeightDeviation is set to:");
		PRINTFLOAT((&bParam0 + 72 + 84)->f_28);
		PRINTNL();
		PRINTSTRING("Elevation Derivative is set to:");
		PRINTFLOAT((&bParam0 + 72 + 84)->f_36);
		PRINTNL();
	}
	if ((&bParam0 + 72 + 84)->f_28 == 0.0f)
	{
		UNK_0x0AC99007(StackVal, (&bParam0 + 72 + 84)->f_28);
		UNK_0x30C67D05(1);
	}
	if ((&bParam0 + 72 + 84)->f_36 == 0.0f)
	{
		AMBIENT_SET_ELEVATION_DERIVATIVE_IN_AREA_FILTER((&bParam0 + 72 + 84)->f_36, (&bParam0 + 72 + 84)->f_40);
		AMBIENT_ENABLE_ELEVATION_DERIVATIVE_IN_AREA_FILTER(1);
	}
	if (AMBIENT_GET_POINT(&bParam0 + 16, 0))
	{
		return 1;
	}
	return 0;
}

void Function_178(struct<33> Param0) //Position: 0x976F / 38767
{
	if (StackVal && StackVal != 4294967295 != 0)
	{
		if (Param0.f_20 > 1.0f)
		{
			if (Global_47151[34])
			{
				PRINTSTRING("Material Match: ");
				PRINTINT(StackVal);
				PRINTNL();
			}
			AMBIENT_SET_MATERIAL_AT_POINT_FILTER(StackVal);
		}
		else
		{
			if (Global_47151[34])
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
		if (Global_47151[34])
		{
			PRINTSTRING("Material NoMatch: ");
			PRINTINT(Param0.f_16);
			PRINTSTRING("n, Radius ");
			PRINTFLOAT(Param0.f_32);
			PRINTNL();
		}
		AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(Param0.f_16, Param0.f_32, 0);
	}
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(StackVal, 1,43493E-42f, 1);
}

void Function_179(struct<5> Param0, var uParam5, var uParam6, var uParam7) //Position: 0x989B / 39067
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

void Function_180(float fParam0) //Position: 0x98EC / 39148
{
	if (&fParam0 < 0,1f)
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * &fParam0), &fParam0);
	}
	else if (Global_6629)
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * 10.0f), 10.0f);
	}
	else
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * 10.0f), 10.0f);
	}
	return;
}

int Function_181(int iParam0, struct<2> Param1) //Position: 0x9933 / 39219
{
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER(Param1);
	if (Global_47151[34])
	{
		PRINTVECTOR(Param1);
		PRINTNL();
	}
	Function_183();
	Function_180(0);
	Function_182(0);
	if ((&iParam0 + 72 + 84)->f_44 == 0.0f)
	{
		if ((&iParam0 + 72 + 84)->f_48 == 0.0f)
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, (&iParam0 + 72 + 84)->f_44, (&iParam0 + 72 + 84)->f_48);
		}
		else
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(StackVal, 0.0f, (&iParam0 + 72 + 84)->f_44);
		}
	}
	else
	{
		Function_179(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iParam0 + 72 + 84));
	}
	if ((&iParam0 + 72 + 84)->f_52 == 0.0f)
	{
		if ((&iParam0 + 72 + 84)->f_56 == 0.0f)
		{
			AMBIENT_SET_BUMP_FILTER(0.0f, (&iParam0 + 72 + 84)->f_52, (&iParam0 + 72 + 84)->f_56);
		}
		else
		{
			AMBIENT_SET_BUMP_FILTER(StackVal, 0.0f, (&iParam0 + 72 + 84)->f_52);
		}
	}
	Function_178(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iParam0 + 72 + 84));
	AMBIENT_SET_ONESHOT_QUERIES(0);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	if (Global_47151[34])
	{
		PRINTSTRING("HeightDeviation is set to:");
		PRINTFLOAT((&iParam0 + 72 + 84)->f_28);
		PRINTNL();
		PRINTSTRING("Elevation Derivative is set to:");
		PRINTFLOAT((&iParam0 + 72 + 84)->f_36);
		PRINTNL();
	}
	if ((&iParam0 + 72 + 84)->f_28 == 0.0f)
	{
		UNK_0x0AC99007(StackVal, (&iParam0 + 72 + 84)->f_28);
		UNK_0x30C67D05(1);
	}
	if ((&iParam0 + 72 + 84)->f_36 == 0.0f)
	{
		AMBIENT_SET_ELEVATION_DERIVATIVE_IN_AREA_FILTER((&iParam0 + 72 + 84)->f_36, (&iParam0 + 72 + 84)->f_40);
		AMBIENT_ENABLE_ELEVATION_DERIVATIVE_IN_AREA_FILTER(1);
	}
	if (AMBIENT_GET_POINT(&iParam0 + 16, 0))
	{
		return 1;
	}
	return 0;
}

void Function_182(bool bParam0) //Position: 0x9AE8 / 39656
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

void Function_183() //Position: 0x9B9B / 39835
{
	AMBIENT_SET_DISTANCE_FILTER(0.0f, 24.0f);
	return;
}

struct<8> Function_184(struct<2> Param0) //Position: 0x9BAA / 39850
{
	var uVar0;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	var uVar7;
	struct<2> Var8;
	float fVar10;
	float fVar11;
	var uVar12;
	var uVar14;
	var uVar16;
	int iVar18;
	int iVar21;
	
	uVar7 = START_CURVE_QUERY(&Global_43578, Param0, 48, 0.0f, 7.0f, 5.0f, 0);
	if (!GET_NUM_CURVES_IN_CURVE_QUERY(&uVar7) < 0)
	{
		UNK_0xDF93BD7C(&uVar7);
		Var8 = Vector(0.0f, 0.0f, 0.0f);
		return StackVal, Var8;
	}
	GET_POINT_FROM_CURVE_QUERY(&uVar7, false, &uVar0);
	uVar3 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(&uVar7, false);
	if (IS_OBJECT_VALID(&uVar3))
	{
		uVar12 = Param1;
		UNK_0x19D652F9(&uVar3, 50.0f, &uVar0, &iVar18);
		UNK_0x19D652F9(&uVar3, -50.0f, &uVar0, &iVar21);
		Function_167(&iVar18);
		uVar14 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Function_167(&iVar18), StackVal);
		Function_167(&iVar21);
		uVar16 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Function_167(&iVar21), StackVal);
		fVar11 = VDOT(&uVar12, &uVar14);
		fVar10 = VDOT(&uVar12, &uVar16);
		Function_119(&fVar4, &fVar5);
		fVar6 = ((fVar4 + fVar5) / 2.0f);
		if (fVar11 > 0.0f && fVar10 > 0.0f)
		{
			UNK_0xDF93BD7C(&uVar7);
			Var8 = Vector(0.0f, 0.0f, 0.0f);
			return StackVal, Var8;
		}
		if (fVar11 > fVar10)
		{
			UNK_0x19D652F9(&uVar3, (fVar6 * -1.0f), &uVar0, &iVar21);
			Function_167(&iVar21);
			Var8 = Function_167(&iVar21);
		}
		else
		{
			UNK_0x19D652F9(&uVar3, fVar6, &uVar0, &iVar18);
			Function_167(&iVar18);
			Var8 = Function_167(&iVar18);
		}
	}
	UNK_0xDF93BD7C(&uVar7);
	return StackVal, Var8;
}

int Function_185(struct<2> Param0, struct<5> Param2) //Position: 0x9CC4 / 40132
{
	var uVar0;
	int iVar2;
	struct<2> Var3;
	
	if (iParam3 == 4294967295)
	{
		iVar2 = 4294967294;
	}
	else
	{
		iVar2 = 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(Param0, 1.0f))
	{
		GET_CAMERA_POSITION(GET_GAME_CAMERA(), &Var3);
		if (VDIST(Param0, Var3) > 175.0f)
		{
			PRINTSTRING("Camera Position: ");
			PRINTVECTOR(Var3);
			PRINTNL();
			PRINTSTRING("Probe Position: ");
			PRINTVECTOR(Param0);
			PRINTNL();
			PRINTSTRING("Distance");
			PRINTFLOAT(VDIST(Param0, Var3));
			PRINTNL();
		}
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(&Param0, fParam1, &Param2, &uVar0))
	{
		if (!Function_144(StackVal, Param2))
		{
			return 1;
		}
	}
	while (!IS_EXITFLAG_SET() && iVar2 > iParam3)
	{
		Param0 = (Param0 + 0,01f);
		Param0.f_8 = (StackVal + 0,01f);
		if (FIND_GROUND_INTERSECTION(&Param0, fParam1, &Param2, &uVar0))
		{
			if (!Function_144(StackVal, Param2))
			{
				return 1;
			}
		}
		Param2 = Param0;
		Param2.f_4 = (StackVal - fParam1);
		if (!iParam3 != 4294967295)
		{
			iVar2++;
		}
		WAIT(false);
	}
	return 0;
}

bool Function_186(bool bParam0) //Position: 0x9E07 / 40455
{
	if (bParam0 > 0 || bParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_187(var uParam0, struct<2> Param1, float fParam3, int iParam4, var uParam5) //Position: 0x9E1D / 40477
{
	float fVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	struct<2> Var5;
	
	fVar4 = 50.0f;
	bVar3 = -1.0f;
	fVar0 = START_OBJECT_ITERATOR(&uParam0);
	while (IS_OBJECT_VALID(&fVar0))
	{
		GET_OBJECT_POSITION(&fVar0, &Var5);
		bVar2 = VDIST(Var5, Param1);
		if (DECOR_CHECK_EXIST(&fVar0, &iParam4))
		{
			if ((DECOR_GET_INT(&fVar0, &iParam4) && uParam5) >= 0)
			{
				if (bVar2 < fParam3)
				{
					if (bVar3 > 0.0f || bVar2 > bVar3)
					{
						if (Function_169(&Var5, &fVar4, 0, 0))
						{
							bVar3 = bVar2;
							uVar1 = &fVar0;
							PRINTSTRING("Assigning new closestObject ");
							PRINTNL();
						}
					}
				}
			}
		}
		fVar0 = OBJECT_ITERATOR_NEXT(&uParam0);
	}
	return &uVar1;
}

var Function_188(var uParam0, struct<2> Param1, float fParam3) //Position: 0x9ED2 / 40658
{
	float fVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	struct<2> Var5;
	
	bVar3 = -1.0f;
	fVar0 = START_OBJECT_ITERATOR(&uParam0);
	while (IS_OBJECT_VALID(&fVar0))
	{
		GET_OBJECT_POSITION(&fVar0, &Var5);
		bVar2 = VDIST(Var5, Param1);
		if (bVar2 < fParam3)
		{
			if (bVar3 > 0.0f || bVar2 > bVar3)
			{
				if (Function_169(&Var5, &uVar4, 0, 0))
				{
					bVar3 = bVar2;
					uVar1 = &fVar0;
					PRINTSTRING("Assigning new closestObject ");
					PRINTNL();
				}
			}
		}
		fVar0 = OBJECT_ITERATOR_NEXT(&uParam0);
	}
	return &uVar1;
}

var Function_189(var uParam0, struct<2> Param1, float fParam3, int iParam4, var uParam5) //Position: 0x9F64 / 40804
{
	float fVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	struct<2> Var4;
	
	bVar3 = -1.0f;
	fVar0 = START_OBJECT_ITERATOR(&uParam0);
	while (IS_OBJECT_VALID(&fVar0))
	{
		GET_OBJECT_POSITION(&fVar0, &Var4);
		bVar2 = VDIST(Var4, Param1);
		if (DECOR_CHECK_EXIST(&fVar0, &iParam4))
		{
			if ((DECOR_GET_INT(&fVar0, &iParam4) && uParam5) >= 0)
			{
				if (bVar2 < fParam3)
				{
					if (bVar3 > 0.0f || bVar2 > bVar3)
					{
						bVar3 = bVar2;
						uVar1 = &fVar0;
						PRINTSTRING("Assigning new closestObject ");
						PRINTNL();
					}
				}
			}
		}
		fVar0 = OBJECT_ITERATOR_NEXT(&uParam0);
	}
	return &uVar1;
}

var Function_190(var uParam0, struct<2> Param1, float fParam3) //Position: 0xA006 / 40966
{
	float fVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	struct<2> Var4;
	
	bVar3 = -1.0f;
	fVar0 = START_OBJECT_ITERATOR(&uParam0);
	while (IS_OBJECT_VALID(&fVar0))
	{
		GET_OBJECT_POSITION(&fVar0, &Var4);
		bVar2 = VDIST(Var4, Param1);
		if (bVar2 < fParam3)
		{
			if (bVar3 > 0.0f || bVar2 > bVar3)
			{
				bVar3 = bVar2;
				uVar1 = &fVar0;
				PRINTSTRING("Assigning new closestObject ");
				PRINTNL();
			}
		}
		fVar0 = OBJECT_ITERATOR_NEXT(&uParam0);
	}
	return &uVar1;
}

int Function_191(int iParam0) //Position: 0xA08C / 41100
{
	if (IS_ITERATOR_VALID(&iParam0))
	{
		ITERATE_EVERYWHERE(&iParam0);
		ITERATE_ON_PARTIAL_NAME(&iParam0, Function_217());
		ITERATE_ON_PARTIAL_MODEL_NAME(&iParam0, Function_217());
		ITERATE_ON_OBJECT_TYPE(&iParam0, 4294967295);
		return 1;
	}
	return 0;
}

int Function_192(var uParam0, int iParam1) //Position: 0xA0C2 / 41154
{
	int iVar0;
	var uVar1;
	
	if (!IS_VOLUME_VALID(&uParam0))
	{
		LOG_ERROR("Passed an invalid volume into ADD_AMBIENT_VOLUME_RESTRICTION");
	}
	if (DECOR_CHECK_EXIST(&uParam0, "script"))
	{
		if (!IS_SCRIPT_VALID(DECOR_GET_INT(&uParam0, "script")))
		{
			LOG_ERROR("Passed an invalid script ID into ADD_AMBIENT_VOLUME_RESTRICTION");
		}
	}
	GET_VOLUME_CENTER(&uParam0, &uVar1);
	Function_171(DECOR_GET_INT(&uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
		}
		else
		{
			Function_193(iVar0, &uParam0, &uVar1, &iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(&uParam0);
	return 0;
}

void Function_193(int iParam0, var uParam1, struct<2> Param2) //Position: 0xA22C / 41516
{
	struct<8> Var0;
	
	*(&Global_39621[iParam05] + 16) = &uParam1;
	Global_39621[iParam05].f_32 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_196("stayout") };
	*(&Global_39621[iParam05] + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Param2, Vector(0.0f, 0.0f, 0.0f), Vector(12.0f, 5.0f, 12.0f));
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&Global_39621[iParam05] + 24, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&Global_39621[iParam05] + 24);
	if (&bParam3)
	{
		*(&Global_39621[iParam05] + 8) = ADD_BLIP_FOR_COORD(&Param2, 403, 0, 2, 0);
		SET_BLIP_BLINK(&Global_39621[iParam05] + 8, 1, 1, 20.0f);
	}
}

var Function_194(var uParam0, struct<2> Param1) //Position: 0xA2D4 / 41684
{
	struct<2> Var0;
	var uVar2;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		GET_POSITION(&uParam0, &Var0);
		Function_195(StackVal, StackVal, Var0, Param1, &uVar2);
		return UNK_0x9C40E671(&uVar2);
	}
	return 0.0f;
}

void Function_195(var uParam0, float fParam1, float fParam2, float fParam3, var uParam4) //Position: 0xA302 / 41730
{
	uParam4 = Vector((GET_X(&fParam2) - GET_X(&uParam0)), 0.0f, (GET_Z(&fParam2) - GET_Z(&uParam0)));
}

struct<32> Function_196(char* cParam0) //Position: 0xA326 / 41766
{
	char* cVar0[32];
	char* cVar8[16];
	
	if (!IS_STRING_VALID(&cParam0))
	{
	}
	else
	{
		Global_10985 = (Global_10985 % 10000);
		strcpy(&cVar8, I2STR(Global_10985), 16);
		while (STRING_LENGTH(&cVar8) <= 4)
		{
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_197("0", &cVar8, ""), 4);
		}
		if (IS_STRING_VALID(&cVar8))
		{
			strcpy(&cVar0, &cParam0, 32);
			stradd(&cVar0, &cVar8, 32);
			Global_10985++;
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_197(char* cParam0) //Position: 0xA392 / 41874
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_198(struct<2>[] Param0) //Position: 0xA3B4 / 41908
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_202();
	iVar1 = 0;
	if (!Function_4(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_201(&(Param0[iVar02]), 8);
		}
		else if (Function_200())
		{
			iVar1 = 1;
			Function_201(&(Param0[iVar02]), 8);
		}
		Function_201(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_4(&(Param0[iVar02]), 4))
		{
			if (!Function_4(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_4(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_4(&(Param0[02]), 8) || iVar1));
						break;
					
					case 0x00000005:
						REQUEST_ANIM_SET(GET_ASSET_NAME(StackVal, &(Param0[iVar02])), 0);
						break;
					
					case 0x00000001:
						STREAMING_REQUEST_GRINGO(&(Param0[iVar02]));
						break;
					
					case 0x00000008:
						REQUEST_ACTION_TREE(GET_ASSET_NAME(StackVal, &(Param0[iVar02])));
						break;
					
					case 0x0000000A:
						REQUEST_STRING_TABLE(GET_ASSET_NAME(StackVal, &(Param0[iVar02])));
						break;
					
					case 0x00000004:
						STREAMING_REQUEST_SCRIPT(&(Param0[iVar02]));
						break;
					
					case 0x00000006:
						STREAMING_REQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME(&(Param0[iVar02]), 6));
						break;
					
					case 0x0000000C:
						STREAMING_REQUEST_GRINGO_DICTIONARY(&(Param0[iVar02]));
						break;
					
					default:
						break;
				}
				Function_201(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_4(&(Param0[iVar02]), 4))
		{
			if (!Function_4(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_201(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_201(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000002:
					case 0x00000003:
						if (STREAMING_IS_ACTOR_LOADED(&(Param0[iVar02]), 4294967295))
						{
							Function_201(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_201(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_201(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_201(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_201(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_201(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_201(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_201(&(Param0[iVar02]), 2);
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

void Function_199() //Position: 0xA776 / 42870
{
	if (!Function_63(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_200() //Position: 0xA7B6 / 42934
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 200)
	{
		if (GET_THIS_SCRIPT_ID() == &Global_99725[iVar043] + 296)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_201(struct<13> Param0) //Position: 0xA7E4 / 42980
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_202() //Position: 0xA7F7 / 42999
{
	if (!Function_63(128))
	{
		return;
	}
	if (Global_21646.f_132 == 0)
	{
		strcpy(&Global_21646, "nStreaming", 64);
		Global_21646.f_132 = 1;
		Global_21646.f_128 = GET_CURRENT_GAME_TIME();
		Global_21646.f_136 = Global_21610.f_128;
	}
	return;
}

void Function_203(bool bParam0) //Position: 0xA839 / 43065
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		SET_DRAW_ACTOR(&bParam0, 1);
		CLEAR_ACTOR_MAX_SPEED(&bParam0);
		if (IS_ACTOR_ANIMAL(&bParam0))
		{
			ANIMAL_SPECIES_REL_SET_CAN_ATTACK(ANIMAL_ACTOR_GET_SPECIES(&bParam0), 0, 1);
		}
		else
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&bParam0, 0, true);
			MEMORY_ALLOW_SHOOTING(&bParam0, 1);
		}
	}
	return;
}

void Function_204(int iParam0) //Position: 0xA882 / 43138
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		SET_DRAW_ACTOR(&iParam0, 0);
		SET_ACTOR_MAX_SPEED(&iParam0, 5);
		if (IS_ACTOR_ANIMAL(&iParam0))
		{
			ANIMAL_SPECIES_REL_SET_CAN_ATTACK(ANIMAL_ACTOR_GET_SPECIES(&iParam0), 0, 0);
		}
		else
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 0, false);
			MEMORY_ALLOW_SHOOTING(&iParam0, 0);
		}
	}
	return;
}

bool Function_205(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xA8CC / 43212
{
	if (Global_99146 && !GET_THIS_SCRIPT_ID() != &Global_99168)
	{
		uParam3 = 0;
		if (!uParam0)
		{
			uParam0 = 1;
			if ((uParam1 < 2 && uParam1 > 5) && uParam4)
			{
				uParam2 = uParam1;
				uParam1 = 7;
			}
			else
			{
				uParam1 = 6;
				return 0;
			}
			return 1;
		}
	}
	if (uParam0)
	{
		uParam0 = 0;
		uParam1 = uParam2;
		return 1;
	}
	return 0;
}

void Function_206() //Position: 0xA944 / 43332
{
	return;
}

void Function_207(bool bParam0) //Position: 0xA94A / 43338
{
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(bParam0);
	return;
}

var Function_208(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0xA955 / 43349
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_209(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_201(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_209(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0xA993 / 43411
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_4(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_201(&(Param0[iVar02]), 4);
			return iVar0;
		}
		if (StackVal && &iParam1 != &Param0[iVar02] != iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

var Function_210(struct<2>[] Param0, int iParam1, var uParam2, bool bParam3) //Position: 0xAA62 / 43618
{
	int iVar0;
	
	uParam2 = &uParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_4(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = iParam1;
			Param0[iVar02].f_8 = 3;
			Function_201(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_201(&(Param0[iVar02]), 8);
			}
			return iVar0;
		}
		if (iParam1 == &Param0[iVar02])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

int Function_211(int iParam0, int iParam1) //Position: 0xAB3E / 43838
{
	int iVar0;
	
	iVar0 = (Global_26652[iParam04].f_16 % iParam1);
	return iVar0;
}

bool Function_212() //Position: 0xAB54 / 43860
{
	return (RAND_INT_RANGE(0, 1999) / 1000) != 0;
}

var Function_213(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xAB67 / 43879
{
	float fVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			fVar0 = RAND_FLOAT_RANGE(4.0f, 6.0f);
			break;
		
		case 0x00000001:
			fVar0 = RAND_FLOAT_RANGE(18.0f, 24.0f);
			break;
		
		case 0x00000002:
			fVar0 = RAND_FLOAT_RANGE(45.0f, 55.0f);
			break;
		
		default:
			fVar0 = RAND_FLOAT_RANGE(4.0f, 6.0f);
			break;
	}
	switch (&iParam1)
	{
		case 0x00000000:
			fVar0 = (fVar0 * 0,75f);
			break;
		
		case 0x00000001:
			fVar0 = (fVar0 * 1.0f);
			break;
		
		case 0x00000002:
			fVar0 = (fVar0 * 1,25f);
			break;
		
		default:
			fVar0 = (fVar0 * 0,75f);
			break;
	}
	if (&bParam2)
	{
		fVar0 = (fVar0 * (0,75f + ((TO_FLOAT(Function_33(5)) / 100.0f) * 0,5f)));
	}
	if (&bParam3)
	{
		if (HAS_ITEM(Function_37(17), &Global_54076))
		{
			fVar0 = (fVar0 * 1,2f);
		}
	}
	if (&bParam4)
	{
		fVar0 = (fVar0 * 1,1f);
	}
	if (ROUND(fVar0) <= 1)
	{
		fVar0 = 1.0f;
	}
	return ROUND(fVar0);
}

void Function_214() //Position: 0xAC6E / 44142
{
	return;
}

void Function_215(vector3 vParam0) //Position: 0xAC74 / 44148
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_216(&vParam0, 1);
	Function_86(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_216(var uParam0, var uParam1) //Position: 0xAC99 / 44185
{
	uParam0 = (uParam0 || uParam1);
	return;
}

float Function_217() //Position: 0xACAA / 44202
{
	var uVar0;
	
	return &uVar0;
}

