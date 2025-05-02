//Decompiled with MagicRDR v1.0
//Function Count : 142
//Statics Count : 107
//Natives Count : 251
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
	var uLocal_26 = 0;
	bool bLocal_27 = false;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	int iLocal_33 = 0;
	var uLocal_34 = 0;
	bool bLocal_35 = false;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	bool bLocal_43 = false;
	int iLocal_44 = 0;
	struct<65> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	int iVar1;
	int iVar3;
	var uVar4;
	var uVar5;
	var uVar7;
	struct<2> Var8;
	var uVar10;
	int iVar11;
	var uVar12;
	var uVar27;
	bool bVar28;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	bool bVar34;
	int iVar35;
	int iVar36;
	var uVar37;
	var uVar38;
	var uVar39;
	int iVar41;
	var uVar42;
	var uVar43;
	struct<2> Var45;
	struct<2> Var47;
	struct<2> Var49;
	struct<2> Var51;
	int iVar53;
	struct<2> Var54;
	float fVar56;
	struct<2> Var57;
	int iVar59;
	var uVar60;
	struct<2> Var62;
	struct<2> Var64;
	struct<5> Var66;
	int iVar73[2];
	int iVar76[2];
	int iVar79[3];
	int iVar83[3];
	int iVar87[2];
	int iVar90;
	bool bVar91;
	var uVar92;
	
	iLocal_18 = 0;
	iLocal_19 = 0;
	bLocal_27 = false;
	iLocal_28 = 0;
	bLocal_35 = false;
	iLocal_38 = 0;
	iLocal_44 = 0;
	iVar11 = 0;
	uVar12 = 7;
	iVar30 = 0;
	iVar31 = 0;
	bVar34 = false;
	iVar35 = 0;
	iVar36 = 0;
	Function_141(&iLocal_29);
	iVar41 = 0;
	Var47 = -0,3f;
	Var47.f_8 = 0.0f;
	Var49 = -1,5f;
	iVar53 = 0;
	Var54.f_8 = -0,8f;
	Var54 = 0,95f;
	fVar56 = 0.0f;
	iVar59 = 0;
	uVar60 = Vector(0.0f, 0.0f, 90.0f);
	Var66 = *(&ScriptParam_0 + 28);
	iVar68 = 0;
	iVar69[0] = 217;
	iVar69[1] = 205;
	iVar69[2] = 113;
	iVar73[0] = 51;
	iVar73[1] = 78;
	iVar76[0] = 269;
	iVar76[1] = 321;
	iVar79[0] = 241;
	iVar79[1] = 318;
	iVar79[2] = 237;
	iVar83[0] = 10;
	iVar83[1] = 50;
	iVar83[2] = 205;
	iVar87[0] = 4;
	iVar87[1] = 22;
	uVar10 = GET_ASSET_ID("$/content/scripting/gringo/simplegringo/body_left_for_dead_gped_mourn", 1);
	uVar10 = GET_ASSET_ID("$/content/scripting/gringo/simplegringo/body_left_for_dead_fema_mourn", 1);
	iVar59 = Function_140(25, 5);
	switch (Global_43787)
	{
		case 0x00000000:
			if (iVar59 == 0)
			{
				bVar33 = iVar69[0];
				bVar32 = iVar73[0];
			}
			else if (iVar59 == 1)
			{
				bVar33 = iVar73[1];
				bVar32 = iVar69[2];
			}
			else if (iVar59 == 2)
			{
				bVar33 = iVar69[1];
				bVar32 = iVar69[2];
			}
			else if (iVar59 == 3)
			{
				bVar33 = iVar69[2];
				bVar32 = iVar73[0];
			}
			else
			{
				bVar33 = iVar73[0];
				bVar32 = iVar69[1];
			}
			break;
		
		case 0x00000001:
			if (iVar59 == 0)
			{
				bVar33 = iVar76[0];
				bVar32 = iVar79[0];
			}
			else if (iVar59 == 1)
			{
				bVar33 = iVar79[1];
				bVar32 = iVar76[1];
			}
			else if (iVar59 == 2)
			{
				bVar33 = iVar79[1];
				bVar32 = iVar79[2];
			}
			else if (iVar59 == 3)
			{
				bVar33 = iVar79[0];
				bVar32 = iVar76[1];
			}
			else
			{
				bVar33 = iVar76[0];
				bVar32 = iVar79[2];
			}
			break;
		
		case 0x00000002:
			if (iVar59 == 0)
			{
				bVar33 = iVar83[0];
				bVar32 = iVar83[2];
			}
			else if (iVar59 == 1)
			{
				bVar33 = iVar83[1];
				bVar32 = iVar87[1];
			}
			else if (iVar59 == 2)
			{
				bVar33 = iVar87[0];
				bVar32 = iVar83[0];
			}
			else if (iVar59 == 3)
			{
				bVar33 = iVar83[2];
				bVar32 = iVar87[0];
			}
			else
			{
				bVar33 = iVar87[1];
				bVar32 = iVar83[2];
			}
			break;
	}
	uVar27 = CREATE_LAYOUT(Function_139());
	if (bVar32 != 4294967295 && bVar33 != 4294967295)
	{
		iVar11 = 5;
	}
	else
	{
		Function_138(&uVar12, &uVar10, 1);
		Function_137(&uVar12, "mourn_dead_body", 1, 0);
		Function_137(&uVar12, "crying_linked", 1, 0);
		Function_137(&uVar12, "mourn_suicide", 1, 0);
		Function_137(&uVar12, "dead_ground_male", 5, 0);
		Function_136(&uVar12, bVar33, 3, 0);
		Function_136(&uVar12, bVar32, 3, 0);
		Function_135(bVar33);
		Function_135(bVar32);
	}
	iVar90 = 0;
	bVar91 = false;
	while (!IS_EXITFLAG_SET())
	{
		bVar28 = 600;
		if (Function_134(&bVar91, &iVar11, &iVar90, &bVar28, bVar34))
		{
			if (bVar91)
			{
			}
		}
		switch (iVar11)
		{
			case 0x00000000:
				if (Function_128(&uVar12))
				{
					iVar11 = 1;
					bVar28 = false;
				}
				break;
			
			case 0x00000001:
				if (Function_86(&ScriptParam_0, &bVar28, &iVar30, &iVar31, 1))
				{
					iVar11 = 2;
					bVar28 = false;
				}
				else if (iVar31 == 1)
				{
					iVar11 = 5;
				}
				break;
			
			case 0x00000002:
				Function_85(&ScriptParam_0 + 16, 3.0f, &Var45, &uVar43, &uVar42);
				if (Function_84())
				{
					bLocal_27 = true;
				}
				else
				{
					bLocal_27 = false;
				}
				iVar1 = CREATE_ACTOR_IN_LAYOUT(&uVar27, Function_139(), bVar33, Var45, *(&ScriptParam_0 + 28));
				DECOR_SET_BOOL(&iVar1, "CanBeLasso", 0);
				SET_ACTOR_ONE_SHOT_DEATH(&iVar1, 1);
				AI_DONT_HARM_ACTOR(&iVar1);
				if (bLocal_27 == 1)
				{
					Var64 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, 0.0f, 0.0f), *(&ScriptParam_0 + 28), StackVal);
				}
				else
				{
					Var64 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, 180.0f, 0.0f), *(&ScriptParam_0 + 28), StackVal);
				}
				iVar3 = CREATE_CORPSE_IN_LAYOUT(StackVal, StackVal, Vector(Function_139(), &uVar27, StackVal) + Vector(Var47, Var45, bVar32), Var64, "dead_ground_male", "inj_deadpose_2");
				SET_ACTOR_CAN_PLAY_GESTURES(&iVar1, false);
				DEEQUIP_ACCESSORY(&iVar1, 0);
				Var47 = Vector(0.0f, 0.0f, 1.0f);
				DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar1);
				DECOR_SET_BOOL(&iVar3, "corpse_loot_gringo", 0);
				Function_82(StackVal, &uVar37, &uVar38, &uVar39, 1,5f, *(&ScriptParam_0 + 16));
				if (IS_ACTOR_VALID(&iVar1))
				{
					SET_ACTOR_CAN_PLAY_GESTURES(&iVar1, false);
				}
				if (IS_LAYOUTREF_VALID(&uVar27))
				{
					if (bLocal_27 == 1)
					{
						Var51.f_4 = (StackVal + 240.0f);
						uVar5 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, Vector(Function_139(), &uVar27, StackVal) + Vector(Var49, *(&ScriptParam_0 + 16), "$/content/scripting/gringo/SimpleGringo/mourn_dead_body"), Var51);
						SNAP_OBJECT_TO_GROUND(&uVar5, 3.0f, 1, 1092616192);
						GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&uVar5), true);
						SNAP_ACTOR_TO_GRINGO(&iVar1, &uVar5, "UseCase1", true, 0, 0);
						Function_81(&iVar1, GET_GRINGO_FROM_OBJECT(&uVar5), "UseCase1", 4294967295, 1);
						Function_80(&iVar3);
						Var62 = Function_80(&iVar3);
						Function_79(StackVal, Var62);
					}
					else
					{
						Var57 = Vector(StackVal, StackVal, StackVal) - Vector(Vector(0.0f, 195.0f, 0.0f), *(&ScriptParam_0 + 28), StackVal);
						uVar7 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, Vector(Function_139(), &uVar27, StackVal) + Vector(Var54, Var45, "$/content/scripting/gringo/SimpleGringo/mourn_suicide"), Var57);
						SNAP_OBJECT_TO_GROUND(&uVar7, 3.0f, 1, 1092616192);
						GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&uVar7), true);
						SNAP_ACTOR_TO_GRINGO(&iVar1, &uVar7, "UseCase1", true, 0, 0);
						Function_81(&iVar1, GET_GRINGO_FROM_OBJECT(&uVar7), "UseCase1", 4294967295, 1);
						Function_80(&iVar3);
						Var62 = Function_80(&iVar3);
						Function_79(StackVal, Var62);
					}
				}
				iVar11 = 3;
				bVar28 = false;
				break;
			
			case 0x00000003:
				Function_78();
				Function_64(StackVal, Function_78(), &bVar34, ScriptParam_0.f_64, &iVar1, 100, 0x42a00000, 1);
				if (!Function_60(ScriptParam_0.f_64, &iVar1, &iVar35, &iVar36, 0, 1, 1, 1))
				{
					iVar11 = 5;
					bVar28 = false;
					break;
				}
				if (!IS_ACTOR_VALID(&iVar1))
				{
					bVar28 = false;
					iVar11 = 5;
					break;
				}
				if (!IS_ACTOR_ALIVE(&iVar1))
				{
					bVar28 = false;
					if (bLocal_27 != 0 && iLocal_28)
					{
						Function_57(&iVar1);
					}
					iVar11 = 5;
					break;
				}
				if (Function_54(&iVar1, &iVar0, &fVar56, 0, iVar68, 0x40400000))
				{
					iVar68 = 1;
					switch (iVar0)
					{
						case 0x00000001:
							iLocal_38 = 1;
							break;
						
						case 0x00000002:
							iLocal_38 = 1;
							break;
						
						case 0x00000004:
							iLocal_38 = 1;
							break;
						
						case 0x00000008:
							iLocal_38 = 1;
							break;
						
						case 0x00000010:
							iLocal_38 = 1;
							break;
					}
					iVar53 = 1;
				}
				if (VDIST(Global_54078, *(&ScriptParam_0 + 16)) < Function_52(1))
				{
					bVar28 = false;
					iVar11 = 5;
					break;
				}
				GET_POSITION(&iVar1, &Var8);
				if (VDIST(Global_54078, Var8) < Function_52(1))
				{
					bVar28 = false;
					iVar11 = 5;
					break;
				}
				if (Function_20(&iVar41, &iVar1, &uVar7, &uVar5, &bVar28))
				{
					iVar53 = 1;
					iVar11 = 5;
				}
				if (GET_DEBUG_DRAW_STATE())
				{
					uVar92 = Global_54078;
					bVar28 = false;
				}
				break;
			
			case 0x00000005:
				bVar28 = false;
				iVar11 = 6;
				break;
			
			case 0x00000006:
				bVar28 = false;
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(bVar28);
		}
	}
	if (bLocal_35)
	{
		Function_18(&iLocal_36, 3, 0, 4294967295, 4294967295);
	}
	if (bLocal_35)
	{
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	}
	Function_17(bVar33);
	Function_17(bVar32);
	Function_16(&uVar37, &uVar38, &uVar39);
	if (ScriptParam_0.f_40)
	{
		Global_6642 = 0;
	}
	if (Function_12(&iVar1, 0))
	{
		AI_SPEECH_SET_ALLOW_FOR_ACTOR(&iVar1, 1);
		UNK_0x99AFD2D1(&iVar1, 0, 0);
	}
	if (iVar53 != 0 && iVar68 != 0)
	{
		Function_11(&iVar1);
	}
	if (!bVar34)
	{
		if (IS_OBJECT_VALID(&uVar27))
		{
			Function_11(&iVar1);
			UNK_0xA936E73B(&uVar27, 1);
			MARK_OBJECT_FOR_AGGRESSIVE_CLEANUP(&uVar27, 1);
		}
	}
	if (!bVar34)
	{
		Function_5(ScriptParam_0.f_64, 0.0f, 0, 1, 0);
	}
	if (IS_OBJECT_VALID(&uVar4))
	{
		GRINGO_UNLOAD_ANIMATION_FOR_ACTOR_ENUM_EXT(GET_GRINGO_FROM_OBJECT(&uVar4), "UseCase1", "UseAnim", bVar32);
		GRINGO_UNLOAD_ANIMATION_FOR_ACTOR_ENUM_EXT(GET_GRINGO_FROM_OBJECT(&uVar4), "Robber", "UseAnim", bVar33);
	}
	RELEASE_LAYOUT_REF(&uVar27);
	Function_1(&uVar12);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x936 / 2358
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

void Function_2(struct<2>[] Param0, int iParam1) //Position: 0x95E / 2398
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

void Function_3(struct<13> Param0) //Position: 0xAA9 / 2729
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_4(struct<13> Param0) //Position: 0xAC6 / 2758
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_5(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xAE4 / 2788
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
		Function_7("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
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
			Function_6(&bVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_6(&bVar0);
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
			Function_6(&bVar0);
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

void Function_6(bool bParam0) //Position: 0xD50 / 3408
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

void Function_7(var uParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0xD9A / 3482
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_8(Global_10966) };
		}
		PRINT_SMALL_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &Var0, &iParam5);
	}
	else
	{
		uVar4 = "";
		PRINT_SMALL_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &uVar4, &iParam5);
	}
}

struct<16> Function_8(int iParam0) //Position: 0xE1F / 3615
{
	char* cVar0[16];
	
	if (!Function_9())
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

bool Function_9() //Position: 0xE5E / 3678
{
	if (Function_10(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_10(int iParam0, int iParam1) //Position: 0xE79 / 3705
{
	return (iParam0 && iParam1) == 0;
}

void Function_11(int iParam0) //Position: 0xE86 / 3718
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		RESET_ANIM_SET_FOR_ACTOR(&iParam0, 0);
		TASK_FLEE_ACTOR(&iParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
		TASK_PRIORITY_SET(&iParam0, false);
	}
	return;
}

bool Function_12(int iParam0, bool bParam1) //Position: 0xEB6 / 3766
{
	if (&bParam1)
	{
		if (IS_ACTOR_HOGTIED(&iParam0))
		{
			if (!(GET_TASK_STATUS(&iParam0, 25) != 1 || GET_TASK_STATUS(&iParam0, 25) != 3))
			{
				MEMORY_CLEAR_EVENTS(&iParam0, 0);
				TASK_FLEE_ACTOR(&iParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
				TASK_PRIORITY_SET(&iParam0, true);
			}
			Function_14(&iParam0);
			return 0;
		}
		if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&iParam0), 163840))
		{
			Function_14(&iParam0);
			return 0;
		}
	}
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (Function_13(&iParam0, 0) && !AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&iParam0), 16384))
		{
			return 0;
		}
		if (IS_ACTOR_ALIVE(&iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int Function_13(int iParam0, int iParam1) //Position: 0xF61 / 3937
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

int Function_14(int iParam0) //Position: 0xFB3 / 4019
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		Function_15(&iParam0);
		return 1;
	}
	return 0;
}

void Function_15(int iParam0) //Position: 0xFCB / 4043
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

void Function_16(var uParam0, var uParam1, int iParam2) //Position: 0xFFE / 4094
{
	if (uParam0 != 4294967295)
	{
		RESET_THIS_TREE_TYPE_CLEARING(uParam0);
	}
	if (uParam1 != 4294967295)
	{
		RESET_THIS_BREAKABLE_TREE_CLEARING(uParam1);
	}
	if (iParam2 != 4294967295)
	{
		RESET_THIS_TREE_TYPE_CLEARING(iParam2);
	}
	return;
}

void Function_17(bool bParam0) //Position: 0x1031 / 4145
{
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(bParam0);
	return;
}

void Function_18(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x103C / 4156
{
	if (iParam0 != iParam1)
	{
		iParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_19(iParam0), &iParam2, &iParam3, &iParam4);
	}
}

var Function_19(int iParam0) //Position: 0x1066 / 4198
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0xFFFFFFFF:
			return "EVERYTHING";
		
		case 0x00000000:
			return "SILENT";
		
		case 0x00000001:
			return "IDLE";
		
		case 0x00000002:
			return "IDLE_2";
		
		case 0x00000003:
			return "PASTORAL";
		
		case 0x00000004:
			return "PASTORAL_LOW";
		
		case 0x00000005:
			return "PASTORAL_HIGH";
		
		case 0x00000006:
			return "SUSPENSE";
		
		case 0x00000007:
			return "SUSPENSE_LOW";
		
		case 0x00000008:
			return "SUSPENSE_HIGH";
		
		case 0x00000009:
			return "SUSPENSE_DRUM";
		
		case 0x0000003E:
			return "SUSPENSE_FOG";
		
		case 0x0000000A:
			return "DRAMATIC";
		
		case 0x0000000B:
			return "DRAMATIC_LOW";
		
		case 0x0000000C:
			return "DRAMATIC_LOW_2";
		
		case 0x0000000D:
			return "DRAMATIC_LOW_3";
		
		case 0x0000000E:
			return "DRAMATIC_LOW_4";
		
		case 0x0000000F:
			return "DRAMATIC_SUSPENSE";
		
		case 0x00000010:
			return "DRAMATIC_SUSPENSE_2";
		
		case 0x00000011:
			return "DRAMATIC_HIGH";
		
		case 0x00000012:
			return "DRAMATIC_GUNFIGHT";
		
		case 0x00000013:
			return "DRAMATIC_ALT";
		
		case 0x00000014:
			return "DRAMATIC_2";
		
		case 0x00000015:
			return "DRAMATIC_3";
		
		case 0x00000016:
			return "DRAMATIC_4";
		
		case 0x00000017:
			return "CHASE";
		
		case 0x00000018:
			return "CHASE_EXTRA_LOW";
		
		case 0x00000019:
			return "nCHASE_LOW";
		
		case 0x0000001A:
			return "CHASE_HIGH";
		
		case 0x0000001B:
			return "nCHASE_ELK";
		
		case 0x0000001C:
			return "nCHASE_ALT";
		
		case 0x0000001D:
			return "MERCH_CHASE";
		
		case 0x0000001E:
			return "ARMY_GUNFIGHT";
		
		case 0x0000001F:
			return "ARMY_GUNFIGHT_LOW";
		
		case 0x00000020:
			return "ARMY_GUNFIGHT_HIGH";
		
		case 0x00000021:
			return "REBEL_GUNFIGHT";
		
		case 0x00000022:
			return "GUNFIGHT";
		
		case 0x00000023:
			return "GUNFIGHT_2";
		
		case 0x00000024:
			return "GUNFIGHT_4";
		
		case 0x00000025:
			return "GUNFIGHT_EX";
		
		case 0x00000026:
			return "GUNFIGHT_LOW";
		
		case 0x00000027:
			return "GUNFIGHT_LOW_2";
		
		case 0x00000028:
			return "GUNFIGHT_HIGH";
		
		case 0x00000029:
			return "GUNFIGHT_HIGH_2";
		
		case 0x0000002A:
			return "GUNFIGHT_ALT_HIGH";
		
		case 0x0000002B:
			return "GUNFIGHT_ELK";
		
		case 0x0000002C:
			return "GUNFIGHT_CHASE_HIGH";
		
		case 0x0000002D:
			return "INTENSE_GUNFIGHT";
		
		case 0x0000002E:
			return "SUSPENSE_GUNFIGHT_HIGH";
		
		case 0x0000002F:
			return "nMERCH_GUN";
		
		case 0x00000030:
			return "HAPPY";
		
		case 0x00000031:
			return "nHAPPY_LOW";
		
		case 0x00000032:
			return "HAPPY_HIGH";
		
		case 0x00000033:
			return "RIDING_1";
		
		case 0x00000034:
			return "RIDING_2";
		
		case 0x00000035:
			return "RIDING_3";
		
		case 0x00000036:
			return "RIDING_4";
		
		case 0x00000037:
			return "RIDING_ALT";
		
		case 0x00000038:
			return "TRAP";
		
		case 0x00000039:
			return "BARN";
		
		case 0x0000003A:
			return "MP_IDLE";
		
		case 0x0000003B:
			return "MP_SUSP";
		
		case 0x0000003C:
			return "CAR";
		
		case 0x0000003D:
			return "FINISHED";
		
		default:
	}
	iVar0 = "";
	return &iVar0;
}

bool Function_20(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4) //Position: 0x15BB / 5563
{
	Function_51(&iParam1);
	uParam4 = uParam4;
	switch (uParam0)
	{
		case 0x00000000:
			if (Function_50(&iParam1, 1.0f, 65.0f, 1, 1, 0))
			{
				Function_34(25);
				Function_32();
				Function_29(&iLocal_29, 0.0f);
				uParam0 = 1;
			}
			break;
		
		case 0x00000001:
			if (Function_28(&Global_54076, &iParam1) > 20.0f || iLocal_38)
			{
				if (Function_24(&iLocal_29, 25.0f) || iLocal_38)
				{
					if (bLocal_35 == 1)
					{
						Function_18(&iLocal_36, 7, 0, 4294967295, 4294967295);
					}
					AI_SPEECH_SET_ALLOW_FOR_ACTOR(&iParam1, 0);
					UNK_0x99AFD2D1(&iParam1, 1, 1);
					STOP_PED_SPEAKING(&iParam1, 1);
					if (bLocal_27 == 0)
					{
						Function_57(&iParam1);
						GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&uParam2), false);
						iLocal_28 = 1;
					}
					else
					{
						GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&uParam3), false);
						SET_ACTOR_PASSED_OUT(&iParam1, 1);
					}
				}
			}
			if (GET_TASK_STATUS(&iParam1, 0) == 0)
			{
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(&iParam1, 0);
				UNK_0x99AFD2D1(&iParam1, 1, 1);
				STOP_PED_SPEAKING(&iParam1, 1);
				if (bLocal_27)
				{
					TASK_CLEAR(&iParam1);
					GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&uParam3), false);
					uParam0 = 2;
				}
				else
				{
					GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&uParam2), false);
					Function_57(&iParam1);
					return 1;
				}
			}
			break;
		
		case 0x00000002:
			if (IS_ACTOR_VALID(&iParam1))
			{
				if (Function_21(&Global_54076, &uParam3) < 100.0f)
				{
					if (!CAMERA_IS_VISIBLE_OBJECT(GET_GAME_CAMERA(), &uParam3, 1.0f, 1117126656, 1, 1, 0))
					{
						KILL_ACTOR(&iParam1);
						return 1;
					}
				}
			}
			return 1;
			break;
	}
	return 0;
}

float Function_21(int iParam0, var uParam1) //Position: 0x1727 / 5927
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			Function_23(&iParam0);
			Var0 = Function_23(&iParam0);
			Function_22(&uParam1);
			Var2 = Function_22(&uParam1);
			return VDIST(Var0, Var2);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

struct<8> Function_22(int iParam0) //Position: 0x17C9 / 6089
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

struct<8> Function_23(int iParam0) //Position: 0x1837 / 6199
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

bool Function_24(int iParam0, float fParam1) //Position: 0x18A3 / 6307
{
	if (Function_27(&iParam0))
	{
		if (Function_25(&iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_25(vector3 vParam0) //Position: 0x18C1 / 6337
{
	if (Function_27(&vParam0))
	{
		if (Function_26(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_26(int iParam0) //Position: 0x198E / 6542
{
	return Function_10(iParam0, 2);
}

bool Function_27(int iParam0) //Position: 0x199C / 6556
{
	return Function_10(iParam0, 1);
}

float Function_28(int iParam0, int iParam1) //Position: 0x19AA / 6570
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!IS_ACTOR_VALID(&iParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(&iParam0, &Var0);
	GET_POSITION(&iParam1, &Var2);
	return VDIST(Var0, Var2);
}

void Function_29(vector3 vParam0) //Position: 0x1A9F / 6815
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_31(&vParam0, 1);
	Function_30(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_30(var uParam0, int iParam1) //Position: 0x1AC4 / 6852
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

void Function_31(var uParam0, var uParam1) //Position: 0x1ADA / 6874
{
	uParam0 = (uParam0 || uParam1);
	return;
}

void Function_32() //Position: 0x1AEB / 6891
{
	int iVar0;
	
	bLocal_35 = true;
	if (Global_43787 == 0)
	{
		iVar0 = Function_33(3);
		if (iVar0 == 0)
		{
			iLocal_33 = "FTR_SONG_04";
		}
		else if (iVar0 == 1)
		{
			iLocal_33 = "FTR_SONG_08";
		}
		else if (iVar0 == 2)
		{
			iLocal_33 = "FTR_SONG_09";
		}
	}
	else if (Global_43787 == 2)
	{
		iLocal_33 = "NRT_SONG_05";
	}
	else if (Global_43787 == 1)
	{
		if (Function_84())
		{
			iLocal_33 = "MEX_SONG_02";
		}
		else
		{
			iLocal_33 = "MEX_SONG_06";
		}
	}
	AUDIO_MUSIC_FORCE_TRACK(&iLocal_33, "PASTORAL", 0.0f, 500, 4294967295, 3212836864, 0);
	iLocal_36 = 3;
	return;
}

var Function_33(bool bParam0) //Position: 0x1BBB / 7099
{
	bParam0 = (bParam0 * 1000 - 1);
	return (RAND_INT_RANGE(0, bParam0) / 1000);
}

void Function_34(int iParam0) //Position: 0x1BD4 / 7124
{
	Global_26652[iParam04].f_20++;
	if (Global_26652[iParam04].f_20 == 1)
	{
		Function_35(409, 1, 0, 0);
	}
	return;
}

int Function_35(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x1C05 / 7173
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
	Function_49(iParam0, TO_FLOAT(bParam1), 1);
	Function_48(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_37(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_36(iParam0);
	return 1;
}

void Function_36(bool bParam0) //Position: 0x1E2D / 7725
{
	switch (bParam0)
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

void Function_37(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x1ECB / 7883
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_47(390))), 32);
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
					fVar19 = (Function_46(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_46(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_44(iParam0, fVar19, fVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_41(fVar19, fParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&uParam7))
							{
								uParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_39(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&uParam7), &Global_55480[iParam016] + 32, Function_38(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_139(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_38(int iParam0) //Position: 0x2509 / 9481
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_39(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x251A / 9498
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_40("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_40("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_40("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_40(char* cParam0) //Position: 0x2611 / 9745
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_41(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x262C / 9772
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_43(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_42(Function_43(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_42(int iParam0, int iParam1) //Position: 0x2693 / 9875
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_43(int iParam0, bool bParam1) //Position: 0x26A5 / 9893
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_44(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x26B7 / 9911
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
	if (((Function_45(iParam0) != 19 || Function_45(iParam0) != 17) || Function_45(iParam0) != 10) || Function_45(iParam0) != 9)
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

int Function_45(int iParam0) //Position: 0x27EB / 10219
{
	return Global_55480[iParam016].f_96;
}

float Function_46(int iParam0) //Position: 0x27FA / 10234
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_47(int iParam0) //Position: 0x2833 / 10291
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_48(int iParam0) //Position: 0x2870 / 10352
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

int Function_49(int iParam0, float fParam1, bool bParam2) //Position: 0x2A0A / 10762
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

bool Function_50(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x2C4E / 11342
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5);
}

void Function_51(int iParam0) //Position: 0x2C6E / 11374
{
	switch (iLocal_37)
	{
		case 0x00000000:
			if (Function_12(&iParam0, 0))
			{
				if (!IS_AMBIENT_SPEECH_PLAYING(&iParam0))
				{
					if (Function_28(&iParam0, &Global_54076) > 50.0f)
					{
						Function_29(&uLocal_39, 0.0f);
						if (bLocal_27 == 1)
						{
							SAY_SINGLE_LINE_STRING(&iParam0, "CRYING", true, false, 2, 0, true, false);
						}
						else
						{
							SAY_SINGLE_LINE_STRING(&iParam0, "CRYING", true, false, 2, 0, true, false);
						}
						bLocal_43 = RAND_INT_RANGE(1, 4);
						iLocal_37 = 1;
					}
				}
			}
			break;
		
		case 0x00000001:
			if (Function_12(&iParam0, 0))
			{
				if (!IS_AMBIENT_SPEECH_PLAYING(&iParam0))
				{
					if (Function_24(&uLocal_39, TO_FLOAT(bLocal_43)))
					{
						if (Function_28(&iParam0, &Global_54076) > 40.0f)
						{
							iLocal_37 = 0;
						}
					}
				}
				else
				{
					Function_29(&uLocal_39, 0.0f);
				}
			}
			else
			{
				iLocal_37 = 2;
			}
			break;
		
		case 0x00000002:
			break;
	}
	return;
}

float Function_52(bool bParam0) //Position: 0x2D4E / 11598
{
	var uVar0;
	float fVar1;
	
	if (!&bParam0)
	{
		Function_53(&uVar0, &fVar1);
		if (fVar1 < 60.0f)
		{
			return (fVar1 + 20.0f);
		}
		return (fVar1 + 10.0f);
	}
	return (190.0f + 20.0f);
}

void Function_53(float fParam0, bool bParam1) //Position: 0x2D8A / 11658
{
	struct<2> Var0;
	
	if (Global_6629 && !Global_6646)
	{
		fParam0 = 65.0f;
		bParam1 = 95.0f;
	}
	else if ((!IS_ACTOR_RIDING(GET_PLAYER_ACTOR(0)) && !IS_ACTOR_RIDING_VEHICLE(GET_PLAYER_ACTOR(0))) && !Global_6646)
	{
		fParam0 = 115.0f;
		bParam1 = 170.0f;
	}
	else
	{
		GET_ACTOR_VELOCITY(GET_PLAYER_ACTOR(0), &Var0);
		if (VMAG(Var0) > 5.0f)
		{
			fParam0 = 130.0f;
			bParam1 = 190.0f;
		}
		else
		{
			fParam0 = 130.0f;
			bParam1 = 190.0f;
		}
	}
	return;
}

bool Function_54(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, float fParam5) //Position: 0x2E1B / 11803
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
		fVar0 = Function_28(&iParam0, &Global_54076);
		if (!Function_10(&iParam3, 8))
		{
			if (GET_LAST_ATTACKER(&iParam0) == &Global_54076)
			{
				uParam1 = 8;
				Function_55(&iParam0);
				return 1;
			}
		}
		if (!Function_10(&iParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(&iParam0, 1.0f))
			{
				uParam1 = 2;
				Function_55(&iParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(&iParam0, 1.0f, 1.0f))
			{
				uParam1 = 2;
				Function_55(&iParam0);
				return 1;
			}
		}
		if (!Function_10(&iParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(&iParam0) || (((GET_ACTOR_UNDER_RETICLE(&Global_54076, 0) != &iParam0 && IS_PLAYER_WEAPON_ZOOMED(&Global_54076)) && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(&Global_54076) != &iParam0 && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f))
			{
				if (uParam2 > 0.0f)
				{
					uParam1 = 4;
					Function_55(&iParam0);
					return 1;
				}
				if (uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - uParam2) < 1,3f)
					{
						uParam1 = 4;
						Function_55(&iParam0);
						return 1;
					}
				}
				uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_10(&iParam3, 1))
		{
			if (Global_6646 || Global_6647)
			{
				uParam1 = 1;
				Function_55(&iParam0);
				return 1;
			}
		}
		if (!Function_10(&iParam3, 16))
		{
			if (UNK_0x7F454A92(&iParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(&iParam0)) > 2.0f && fVar0 > 18.0f)
				{
					uParam1 = 16;
					Function_55(&iParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_55(int iParam0) //Position: 0x2FE4 / 12260
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&iParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(&iParam0, 1);
	UNK_0x99AFD2D1(&iParam0, 0, 0);
	Function_56(&iParam0);
	MEMORY_CONSIDER_AS(&Global_54076, &iParam0, 2);
	MEMORY_CONSIDER_AS(&iParam0, &Global_54076, 2);
	AI_GOAL_LOOK_CLEAR(&iParam0);
	return;
}

void Function_56(int iParam0) //Position: 0x3021 / 12321
{
	SAY_SINGLE_LINE_CONTEXT(&iParam0, 60, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

void Function_57(int iParam0) //Position: 0x303A / 12346
{
	Function_58(&iParam0);
	return;
}

void Function_58(int iParam0) //Position: 0x3046 / 12358
{
	struct<2> Var0;
	
	Var0 = Vector(1.0f, 1.0f, 0.0f);
	Function_59(StackVal, GET_OBJECT_FROM_ACTOR(&iParam0), Var0, &iParam0, "head");
	return;
}

void Function_59(var uParam0, struct<2> Param1, var uParam3, var uParam4) //Position: 0x306A / 12394
{
	struct<2> Var0;
	var uVar2;
	
	if (!IS_STRING_VALID(&uParam4))
	{
		uParam4 = "spine03";
	}
	GET_OBJECT_NAMED_BONE_POSITION(&uParam0, &uParam4, &Var0);
	PRINTSTRING("fake shoot: origin = ");
	PRINTVECTOR(Param1);
	PRINTNL();
	PRINTSTRING("taget point = ");
	PRINTVECTOR(Var0);
	PRINTNL();
	uVar2 = &uParam3;
	if (!IS_ACTOR_VALID(&uVar2))
	{
		uVar2 = &Global_54076;
	}
	FIRE_PROJECTILE(&uVar2, "base_pistol", 0,0001f, &Param1, &Var0);
}

bool Function_60(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x310C / 12556
{
	if (StackVal & 64 == 64)
	{
		if (!uParam2)
		{
			if (IS_ACTOR_VALID(&uParam1))
			{
				if (Function_28(&Global_54076, &uParam1) > 15.0f)
				{
					uParam2 = 1;
				}
			}
		}
		if (Global_6637 && !uParam2)
		{
			return 0;
		}
		if ((Global_6608 && Global_10986 == GET_THIS_SCRIPT_ID()) && !uParam2)
		{
			return 0;
		}
		if (Function_63() && !uParam2)
		{
			return 0;
		}
		if (Function_62(iParam0) && !uParam2)
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
		if (Global_6646 && uParam7)
		{
			uParam3 = 1;
			return 0;
		}
		if (Global_6647 && uParam7)
		{
			uParam3 = 1;
			return 0;
		}
		if (Global_6635 && !uParam2)
		{
			return 0;
		}
		if (Global_6636 && !uParam2)
		{
			return 0;
		}
		if (&bParam6)
		{
			if (Global_99146 && !uParam2)
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
		if (!Function_61(iParam0, &uParam5))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_61(int iParam0, int iParam1) //Position: 0x324F / 12879
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

int Function_62(int iParam0) //Position: 0x3270 / 12912
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

int Function_63() //Position: 0x32B0 / 12976
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
						if (Function_21(&Global_54076, &Global_39621[iVar05] + 16) > IntToFloat(iVar1))
						{
							return 1;
						}
					}
				}
			}
			if (Function_21(&Global_54076, &Global_39621[iVar05] + 16) > IntToFloat(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_64(struct<2> Param0, var uParam2, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7) //Position: 0x3373 / 13171
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
	else if (!Function_77(StackVal, Param0))
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
			Function_76(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_75(0);
		}
		if (&bParam7)
		{
			Function_73(0, GET_THIS_SCRIPT_ID());
			Global_6615 = GET_THIS_SCRIPT_ID();
			Function_71(iParam3);
			Global_6644 = 1;
		}
		Function_69(iParam3);
		if (Function_68(StackVal, 32768))
		{
			Function_65(1);
		}
		Global_26652[iParam34].f_16++;
		Function_35(408, 1, 0, 0);
	}
}

void Function_65(bool bParam0) //Position: 0x3488 / 13448
{
	if (bParam0)
	{
		Function_67(0x10000000);
	}
	else
	{
		Function_66(0x10000000);
	}
	Global_39922.f_304 = 0;
	return;
}

void Function_66(int iParam0) //Position: 0x34AD / 13485
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_67(int iParam0) //Position: 0x34CA / 13514
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

bool Function_68(var uParam0, int iParam1) //Position: 0x34DD / 13533
{
	return (uParam0 && iParam1) == 0;
}

void Function_69(int iParam0) //Position: 0x34EA / 13546
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (!Function_10(StackVal, 524288))
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
			bVar1 = Function_70(iVar0 * 60);
			ADD_TIME(&Global_27462[iParam052] + 376, 0, 0, bVar1, 0);
			Global_26652[iParam04] = &Global_27462[iParam052] + 376;
		}
	}
	return;
}

int Function_70(int iParam0) //Position: 0x3590 / 13712
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_71(int iParam0) //Position: 0x35A7 / 13735
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
	Function_72(&Var0 + 80[Var0.f_762], &(Global_26652[iParam04]), iParam0);
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

void Function_72(vector3 vParam0) //Position: 0x3646 / 13894
{
	vParam0.y = iParam2;
	vParam0 = Param1.f_16;
	vParam0.f_8 = 1;
	return;
}

void Function_73(int iParam0, int iParam1) //Position: 0x3662 / 13922
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
			Function_74(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_74(struct<113> Param0) //Position: 0x36E9 / 14057
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

void Function_75(int iParam0) //Position: 0x3747 / 14151
{
	*(&Global_21369 + 136) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 136, 0, 0, (&iParam0 + Function_70(900)), 0);
	return;
}

void Function_76(int iParam0) //Position: 0x376B / 14187
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, (&iParam0 + Function_70(200)), 0);
	return;
}

bool Function_77(vector3 vParam0) //Position: 0x378E / 14222
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

struct<8> Function_78() //Position: 0x37A6 / 14246
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

int Function_79(struct<2> Param0) //Position: 0x37B0 / 14256
{
	switch (iLocal_44)
	{
		case 0x00000000:
			CREATE_DECAL(0, Param0, 0,6f, 1, 1);
			iLocal_44 = 1;
			break;
		
		case 0x00000001:
			return 1;
			break;
	}
	return 0;
}

struct<8> Function_80(int iParam0) //Position: 0x37E4 / 14308
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

void Function_81(var uParam0, var uParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x380D / 14349
{
	int iVar0;
	
	iVar0 = TASK_SEQUENCE_OPEN();
	TASK_USE_GRINGO(false, &uParam1, &bParam2, 1, 1);
	TASK_PRIORITY_SET(&uParam0, bParam4);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM_REPEATEDLY(&uParam0, iVar0, iParam3);
	TASK_PRIORITY_SET(&uParam0, bParam4);
	TASK_SEQUENCE_RELEASE(iVar0, 1);
}

void Function_82(var uParam0, var uParam1, var uParam2, float fParam3, struct<2> Param4) //Position: 0x3849 / 14409
{
	var uVar0[5];
	int iVar6;
	
	if (uParam0 != 4294967295)
	{
		uParam0 = CLEAR_AREA_OF_TREE_TYPE(Param4, (fParam3 + 2.0f), "");
	}
	if (uParam1 != 4294967295)
	{
		uParam1 = CLEAR_AREA_OF_BREAKABLE_TREES(Param4, (fParam3 + 2.0f));
	}
	if (uParam2 != 4294967295)
	{
		uParam2 = CLEAR_AREA_OF_GRASS(Param4, fParam3);
	}
	if (IS_LAYOUTREF_VALID(&Global_46715))
	{
		if (Function_83(StackVal, &Global_46715, "player_herb", &uVar0, 20.0f, 5, Param4) >= 0)
		{
			iVar6 = 0;
			while (iVar6 <= 5)
			{
				if (IS_OBJECT_VALID(&(uVar0[iVar6])))
				{
					DESTROY_OBJECT(&(uVar0[iVar6]));
				}
				iVar6++;
			}
		}
	}
}

int Function_83(char* cParam0, var uParam1, char*[] cParam2, float fParam3, int iParam4, struct<2> Param5) //Position: 0x38F4 / 14580
{
	int iVar0;
	struct<2> Var1;
	int iVar3;
	var uVar4;
	
	iVar0 = 0;
	iParam4 = iParam4;
	if (IS_LAYOUTREF_VALID(&cParam0))
	{
		uVar4 = CREATE_OBJECT_ITERATOR(&cParam0);
		ITERATE_ON_OBJECT_TYPE(&uVar4, 12);
		ITERATE_ON_PARTIAL_NAME(&uVar4, &uParam1);
		iVar3 = START_OBJECT_ITERATOR(&uVar4);
		while (IS_OBJECT_VALID(&iVar3))
		{
			if (IS_OBJECT_VALID(&iVar3))
			{
				GET_OBJECT_POSITION(&iVar3, &Var1);
				if (VDIST(Param5, Var1) > fParam3)
				{
					cParam2[iVar0] = &iVar3;
					iVar0++;
					if (iVar0 > iParam4)
					{
						DESTROY_ITERATOR(&uVar4);
						return iVar0;
					}
				}
			}
			iVar3 = OBJECT_ITERATOR_NEXT(&uVar4);
		}
		DESTROY_ITERATOR(&uVar4);
		return iVar0;
	}
	return iVar0;
}

bool Function_84() //Position: 0x399A / 14746
{
	return (RAND_INT_RANGE(0, 1999) / 1000) != 0;
}

int Function_85(vector3 vParam0) //Position: 0x39AD / 14765
{
	struct<2> Var0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(vParam0, 1.0f))
	{
		GET_CAMERA_POSITION(GET_GAME_CAMERA(), &Var0);
		if (VDIST(vParam0, Var0) > 175.0f)
		{
		}
		return 0;
	}
	if (FIND_GROUND_INTERSECTION_WITH_MATERIAL(&vParam0, fParam1, &Param2, &uParam3, &uParam4))
	{
		if (!Function_77(StackVal, Param2))
		{
			return 1;
		}
	}
	vParam0 = (vParam0 + 0,01f);
	vParam0.f_8 = (vParam0.z + 0,01f);
	if (FIND_GROUND_INTERSECTION_WITH_MATERIAL(&vParam0, fParam1, &Param2, &uParam3, &uParam4))
	{
		if (!Function_77(StackVal, Param2))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_86(struct<65> Param0) //Position: 0x3A4A / 14922
{
	struct<8> Var0;
	var uVar8;
	var uVar9;
	
	if (Global_6612 && Param0.f_40)
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_126(GET_SCRIPT_NAME()) };
		uVar8 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Vector(*(&Param0 + 16), Function_124(0.0f, &Global_54076, *(&Param0 + 16)), 0.0f), Vector(Param0.f_60, 20.0f, Param0.f_60));
		DECOR_SET_INT(&uVar8, "script", GET_THIS_SCRIPT_ID());
		if (Param0.f_64 != 4294967295)
		{
			DECOR_SET_INT(StackVal, &uVar8, "category");
			Function_122(&uVar8, Param0.f_40);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
		*(&Param0 + 16) = Global_54078;
		return 1;
	}
	uParam3 = 0;
	if (!Function_87(&Param0))
	{
		if (Param0.f_40 == 1)
		{
			if (uParam2 == 0)
			{
				Function_7("Still scanning for the proper terrain to run this event.  Move the player around to find a good spawn location.", -1.0f, 1, 2, 1, 0);
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
		Function_7("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 5.0f, 1, 2, 1, 0);
	}
	if (&bParam4)
	{
		if (!Function_5(Param0.f_64, 0, 1, 0, 0))
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
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_126("restrictVol") };
		uVar9 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Vector(*(&Param0 + 16), Function_124(0.0f, &Global_54076, *(&Param0 + 16)), 0.0f), Vector(Param0.f_60, 20.0f, Param0.f_60));
		DECOR_SET_INT(&uVar9, "script", GET_THIS_SCRIPT_ID());
		if (Param0.f_64 != 4294967295)
		{
			DECOR_SET_INT(StackVal, &uVar9, "category");
			Function_122(&uVar9, Param0.f_40);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
	}
	return 1;
}

bool Function_87(struct<73> Param0) //Position: 0x3E08 / 15880
{
	var uVar0;
	var uVar1;
	int iVar2;
	struct<2> Var3;
	var uVar5;
	struct<2> Var7;
	bool bVar9;
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
			Function_121(&Param0 + 8);
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
				Var3 = Vector(0.0f, 0.0f, Function_52(1));
				ROTATE_VECTOR_XZ(&Var3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				Var3 = Vector(StackVal, StackVal, StackVal) + Vector(Var7, Var3, StackVal);
				ITERATE_IN_SPHERE(&Param0 + 8, Var3, Function_52(1));
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
						uVar0 = Function_120(StackVal, &Param0 + 8, Var7, 0,01f);
					}
					else
					{
						uVar0 = Function_119(StackVal, &Param0 + 8, Var7, 0,1f, "locflag", (&Param0 + 72 + 36)->f_24);
					}
				}
				else if ((&Param0 + 72 + 36)->f_24 == 0)
				{
					uVar0 = Function_117(StackVal, &Param0 + 8, Var7, Function_118());
				}
				else
				{
					uVar0 = Function_116(StackVal, &Param0 + 8, Var7, Function_118(), "locflag", (&Param0 + 72 + 36)->f_24);
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
			Function_121(&Param0 + 8);
			ITERATE_IN_LAYOUT(&Param0 + 8, FIND_NAMED_LAYOUT("regions_layout"));
			fVar10 = 130.0f;
			bVar9 = 190.0f;
			GET_POSITION(GET_PLAYER_ACTOR(0), &Var3);
			ITERATE_IN_SPHERE(StackVal, &Param0 + 8, Var3);
			uVar1 = START_OBJECT_ITERATOR(&Param0 + 8);
			while (IS_OBJECT_VALID(&uVar1) && !IS_OBJECT_VALID(&uVar0))
			{
				if (DECOR_CHECK_EXIST(&uVar1, "regid"))
				{
					bVar11 = DECOR_GET_INT(&uVar1, "regid");
					if (Function_115(bVar11))
					{
						if (StackVal == (&Param0 + 72)->f_68)
						{
							if ((StackVal && Global_43791[bVar11]) >= 0)
							{
								GET_OBJECT_POSITION(&uVar1, &Var3);
								if (VDIST(Var7, Var3) < fVar10 && VDIST(Var7, Var3) > Function_52(1))
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
				Function_114(&Param0 + 16, 99.0f, &Param0 + 16, 10);
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
				Function_113(&Var7, &uVar5);
				Var3 = Function_113(&Var7, &uVar5);
				if (!Function_77(StackVal, Var3))
				{
					PRINTSTRING("Player Pos: ");
					PRINTVECTOR(Var7);
					PRINTNL();
					Function_53(&fVar10, &bVar9);
					if (VDIST(Var3, Var7) < ((fVar10 + ((bVar9 - fVar10) / 2.0f)) * 0,8f))
					{
						iVar2 = Function_110(StackVal, &Param0, Var3);
					}
				}
			}
			else
			{
				iVar2 = Function_106(&Param0);
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
					if (!Function_105(StackVal, *(&Param0 + 16)))
					{
						return 0;
					}
				}
				if (Param0.f_68 == 1)
				{
					if (!Function_104(StackVal, *(&Param0 + 16)))
					{
						return 0;
					}
				}
				if (Function_10(StackVal, 131072))
				{
					if (StackVal || Function_103(Function_103(StackVal, *(&Param0 + 16)), Global_54078))
					{
						return 0;
					}
				}
				if (StackVal & 1024 == 1024)
				{
					if (Function_102(StackVal, *(&Param0 + 16)))
					{
						return 0;
					}
				}
				if (!Function_97(&Param0 + 16, &Param0 + 60, 0, Param0.f_40))
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
				bVar9 = 150.0f;
				Var3 = Vector(0.0f, 0.0f, ((fVar10 + bVar9) * -0,5f));
				ROTATE_VECTOR_XZ(&Var3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				Var3 = Vector(StackVal, StackVal, StackVal) + Vector(Var7, Var3, StackVal);
				uVar17 = START_CURVE_QUERY(&Global_43578, Var3, Function_96((&Param0 + 72)->f_148, 0), 0.0f, 20.0f, 5.0f, 0);
			}
			else
			{
				uVar17 = START_CURVE_QUERY(&Global_43578, Var7, Function_96((&Param0 + 72)->f_148, 0), 120.0f, 150.0f, 5.0f, 0);
			}
			if (GET_NUM_POINTS_IN_CURVE_QUERY(&uVar17) >= 0)
			{
				iVar15 = RAND_INT_RANGE(0, (GET_NUM_POINTS_IN_CURVE_QUERY(&uVar17) - 1));
				GET_POINT_FROM_CURVE_QUERY(&uVar17, iVar15, &Var12);
				Function_95(&Var12);
				*(&Param0 + 16) = Function_95(&Var12);
				Param0.f_28 = Var12.f_12;
				(&Param0 + 28)->f_4 = Var12.f_16;
				Param0.f_56 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(&uVar17, iVar15);
				UNK_0xDF93BD7C(&uVar17);
			}
			else
			{
				UNK_0xDF93BD7C(&uVar17);
				return 0;
			}
			if (Param0.f_68 == 2)
			{
				if (!Function_105(StackVal, *(&Param0 + 16)))
				{
					return 0;
				}
			}
			if (Param0.f_68 == 1)
			{
				if (!Function_104(StackVal, *(&Param0 + 16)))
				{
					return 0;
				}
			}
			if (Param0.f_68 == 0)
			{
				if (!(StackVal || Function_105(Function_104(StackVal, *(&Param0 + 16)), *(&Param0 + 16))))
				{
					return 0;
				}
			}
			if (Function_10(StackVal, 131072))
			{
				if (StackVal || Function_103(Function_103(StackVal, *(&Param0 + 16)), Global_54078))
				{
					return 0;
				}
			}
			if (StackVal && !Function_97(&Param0 + 16, &Param0 + 60, 0, Param0.f_40) == 262144)
			{
				return 0;
			}
			break;
		
		case 0x00000004:
			if (!Function_92((&Param0 + 72)->f_148) < 0)
			{
				return 0;
			}
			break;
		
		case 0x00000007:
			switch ((&Param0 + 72)->f_156)
			{
				case 0x00000001:
					iVar18 = Function_89(StackVal, Global_43787, Global_43788, Global_43789, 1);
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
						iVar18 = Function_89(StackVal, Global_43787, Global_43788, (Global_43789 + iVar16), 1);
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
	if (Function_88(StackVal, *(&Param0 + 16)))
	{
		return 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(*(&Param0 + 16), 10.0f))
	{
		return 0;
	}
	return 1;
}

bool Function_88(struct<2> Param0) //Position: 0x46D1 / 18129
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

int Function_89(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x4708 / 18184
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
								return Function_90(&Global_11014, &Global_12796, bParam3);
								break;
							
							case 0x00000001:
								return Function_90(&Global_11146, &Global_12992, bParam3);
								break;
							
							case 0x00000002:
								return Function_90(&Global_11120, &Global_12954, bParam3);
								break;
							
							default:
								return Function_90(&Global_11200, &Global_13072, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_90(&Global_11420, &Global_13398, bParam3);
								break;
							
							case 0x00000001:
								return Function_90(&Global_11222, &Global_13104, bParam3);
								break;
							
							case 0x00000003:
								return Function_90(&Global_11284, &Global_13196, bParam3);
								break;
							
							case 0x00000002:
								return Function_90(&Global_11398, &Global_13366, bParam3);
								break;
							
							case 0x00000004:
								return Function_90(&Global_11492, &Global_13504, bParam3);
								break;
							
							default:
								return Function_90(&Global_11482, &Global_13490, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_90(&Global_11544, &Global_13580, bParam3);
								break;
							
							case 0x00000001:
								return Function_90(&Global_11646, &Global_13732, bParam3);
								break;
							
							case 0x00000002:
								return Function_90(&Global_11704, &Global_13818, bParam3);
								break;
							
							default:
								return Function_90(&Global_11518, &Global_13542, bParam3);
								break;
						}
						break;
					
					case 0x00000003:
						switch (bVar1)
						{
							case 0x00000001:
								return Function_90(&Global_11752, &Global_13888, bParam3);
								break;
							
							default:
								return Function_90(&Global_11826, &Global_13998, bParam3);
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
								return Function_90(&Global_11836, &Global_14012, bParam3);
								break;
							
							case 0x00000001:
								return Function_90(&Global_11946, &Global_14176, bParam3);
								break;
							
							case 0x00000002:
								return Function_90(&Global_11988, &Global_14238, bParam3);
								break;
							
							default:
								return Function_90(&Global_12038, &Global_14312, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_90(&Global_12048, &Global_14326, bParam3);
								break;
							
							default:
								return Function_90(&Global_12274, &Global_14662, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000002:
								return Function_90(&Global_12284, &Global_14676, bParam3);
								break;
							
							case 0x00000001:
								return Function_90(&Global_12342, &Global_14762, bParam3);
								break;
							
							case 0x00000003:
								return Function_90(&Global_12392, &Global_14836, bParam3);
								break;
							
							default:
								return Function_90(&Global_12472, &Global_14954, bParam3);
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
		return Function_90(&Global_11014, &Global_12796, bParam3);
	}
	if (bVar1 == Global_46760[1])
	{
		return Function_90(&Global_11146, &Global_12992, bParam3);
	}
	if (bVar1 == Global_46760[2])
	{
		return Function_90(&Global_11120, &Global_12954, bParam3);
	}
	if (bVar1 == Global_46796[0])
	{
		return Function_90(&Global_11420, &Global_13398, bParam3);
	}
	if (bVar1 == Global_46796[1])
	{
		return Function_90(&Global_11222, &Global_13104, bParam3);
	}
	if (bVar1 == Global_46796[3])
	{
		return Function_90(&Global_11284, &Global_13196, bParam3);
	}
	if (bVar1 == Global_46796[2])
	{
		return Function_90(&Global_11398, &Global_13366, bParam3);
	}
	if (bVar1 == Global_46796[4])
	{
		return Function_90(&Global_11492, &Global_13504, bParam3);
	}
	if (bVar1 == Global_46816[0])
	{
		return Function_90(&Global_11544, &Global_13580, bParam3);
	}
	if (bVar1 == Global_46816[1])
	{
		return Function_90(&Global_11646, &Global_13732, bParam3);
	}
	if (bVar1 == Global_46816[2])
	{
		return Function_90(&Global_11704, &Global_13818, bParam3);
	}
	if (bVar1 == Global_46838[1])
	{
		return Function_90(&Global_11752, &Global_13888, bParam3);
	}
	if (bVar1 == Global_46850[0])
	{
		return Function_90(&Global_11836, &Global_14012, bParam3);
	}
	if (bVar1 == Global_46850[1])
	{
		return Function_90(&Global_11946, &Global_14176, bParam3);
	}
	if (bVar1 == Global_46850[2])
	{
		return Function_90(&Global_11988, &Global_14238, bParam3);
	}
	if (bVar1 == Global_46866[0])
	{
		return Function_90(&Global_12048, &Global_14326, bParam3);
	}
	if (bVar1 == Global_46894[2])
	{
		return Function_90(&Global_12284, &Global_14676, bParam3);
	}
	if (bVar1 == Global_46894[1])
	{
		return Function_90(&Global_12342, &Global_14762, bParam3);
	}
	if (bVar1 == Global_46894[3])
	{
		return Function_90(&Global_12392, &Global_14836, bParam3);
	}
	if (bVar1 == Global_46736[0])
	{
		return Function_90(&Global_11200, &Global_13072, bParam3);
	}
	if (bVar1 == Global_46736[1])
	{
		return Function_90(&Global_11482, &Global_13490, bParam3);
	}
	if (bVar1 == Global_46736[2])
	{
		return Function_90(&Global_11518, &Global_13542, bParam3);
	}
	if (bVar1 == Global_46736[3])
	{
		return Function_90(&Global_11826, &Global_13998, bParam3);
	}
	if (bVar1 == Global_46746[0])
	{
		return Function_90(&Global_12038, &Global_14312, bParam3);
	}
	if (bVar1 == Global_46746[2])
	{
		return Function_90(&Global_12274, &Global_14662, bParam3);
	}
	if (bVar1 == Global_46746[1])
	{
		return Function_90(&Global_12472, &Global_14954, bParam3);
	}
	return "";
}

var Function_90(struct<2>[] Param0, vector3[] vParam1, bool bParam2) //Position: 0x4D1E / 19742
{
	int iVar0;
	
	iVar0 = bParam2;
	if (iVar0 <= Param0 || iVar0 > 0)
	{
		return "";
	}
	if (!Function_91(&(Param0[iVar02]), 2))
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

bool Function_91(var uParam0, int iParam1) //Position: 0x4D78 / 19832
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_92(int iParam0) //Position: 0x4D95 / 19861
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
			if (Function_93(GET_SQUAD_FROM_OBJECT(&iVar2)) == &iParam0)
			{
				iVar0++;
			}
			iVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
		}
	}
	DESTROY_ITERATOR(&uVar1);
	return iVar0;
}

int Function_93(int iParam0) //Position: 0x4DFD / 19965
{
	var uVar0;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return 4294967295;
	}
	uVar0 = Function_94(&iParam0);
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

var Function_94(var uParam0) //Position: 0x4E3B / 20027
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

struct<8> Function_95(vector3 vParam0) //Position: 0x4E88 / 20104
{
	struct<2> Var0;
	
	Var0 = vParam0;
	Var0.f_4 = vParam0.y;
	Var0.f_8 = vParam0.z;
	return StackVal, Var0;
}

int Function_96(int iParam0, int iParam1) //Position: 0x4EAA / 20138
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

bool Function_97(struct<2> Param0, int iParam2, bool bParam3) //Position: 0x4EDC / 20188
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
	Function_99(4294967295);
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
			else if (Function_98(&Param0, &uVar0) > fVar4)
			{
				return 0;
			}
		}
		iVar2++;
	}
	return 1;
}

float Function_98(struct<2> Param0) //Position: 0x4FB8 / 20408
{
	struct<2> Var0;
	bool bVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	bVar2 = VMAG(Var0);
	return bVar2;
}

int Function_99(int iParam0) //Position: 0x4FD7 / 20439
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
						Function_101(iVar0);
					}
					else if (Global_6629)
					{
						if (Function_100(StackVal, &Global_54076, Var1) < 25.0f)
						{
							Function_101(iVar0);
						}
					}
					else if (Function_100(StackVal, &Global_54076, Var1) < 55.0f)
					{
						Function_101(iVar0);
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
			Function_101(iVar0);
		}
		iVar0++;
	}
	return 0;
}

float Function_100(var uParam0, struct<2> Param1) //Position: 0x5145 / 20805
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_23(&uParam0);
		Var0 = Function_23(&uParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

void Function_101(int iParam0) //Position: 0x51BC / 20924
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

bool Function_102(struct<2> Param0) //Position: 0x5224 / 21028
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

int Function_103(struct<2> Param0) //Position: 0x52C9 / 21193
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

bool Function_104(struct<2> Param0) //Position: 0x5317 / 21271
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

bool Function_105(struct<2> Param0) //Position: 0x5372 / 21362
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

int Function_106(bool bParam0) //Position: 0x53F1 / 21489
{
	float fVar0;
	bool bVar1;
	
	Function_53(&fVar0, &bVar1);
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER_PLAYER();
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	Function_109(0);
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
		Function_108(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, (&bParam0 + 72 + 84));
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
	Function_107(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&bParam0 + 72 + 84));
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

void Function_107(struct<33> Param0) //Position: 0x55A3 / 21923
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

void Function_108(struct<5> Param0, var uParam5, var uParam6, var uParam7) //Position: 0x56CF / 22223
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

void Function_109(float fParam0) //Position: 0x5720 / 22304
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

int Function_110(int iParam0, struct<2> Param1) //Position: 0x5767 / 22375
{
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER(Param1);
	if (Global_47151[34])
	{
		PRINTVECTOR(Param1);
		PRINTNL();
	}
	Function_112();
	Function_109(0);
	Function_111(0);
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
		Function_108(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iParam0 + 72 + 84));
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
	Function_107(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iParam0 + 72 + 84));
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

void Function_111(bool bParam0) //Position: 0x591C / 22812
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

void Function_112() //Position: 0x59CF / 22991
{
	AMBIENT_SET_DISTANCE_FILTER(0.0f, 24.0f);
	return;
}

struct<8> Function_113(struct<2> Param0) //Position: 0x59DE / 23006
{
	var uVar0;
	var uVar3;
	float fVar4;
	bool bVar5;
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
	GET_POINT_FROM_CURVE_QUERY(&uVar7, 0, &uVar0);
	uVar3 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(&uVar7, 0);
	if (IS_OBJECT_VALID(&uVar3))
	{
		uVar12 = Param1;
		UNK_0x19D652F9(&uVar3, 50.0f, &uVar0, &iVar18);
		UNK_0x19D652F9(&uVar3, -50.0f, &uVar0, &iVar21);
		Function_95(&iVar18);
		uVar14 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Function_95(&iVar18), StackVal);
		Function_95(&iVar21);
		uVar16 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Function_95(&iVar21), StackVal);
		fVar11 = VDOT(&uVar12, &uVar14);
		fVar10 = VDOT(&uVar12, &uVar16);
		Function_53(&fVar4, &bVar5);
		fVar6 = ((fVar4 + bVar5) / 2.0f);
		if (fVar11 > 0.0f && fVar10 > 0.0f)
		{
			UNK_0xDF93BD7C(&uVar7);
			Var8 = Vector(0.0f, 0.0f, 0.0f);
			return StackVal, Var8;
		}
		if (fVar11 > fVar10)
		{
			UNK_0x19D652F9(&uVar3, (fVar6 * -1.0f), &uVar0, &iVar21);
			Function_95(&iVar21);
			Var8 = Function_95(&iVar21);
		}
		else
		{
			UNK_0x19D652F9(&uVar3, fVar6, &uVar0, &iVar18);
			Function_95(&iVar18);
			Var8 = Function_95(&iVar18);
		}
	}
	UNK_0xDF93BD7C(&uVar7);
	return StackVal, Var8;
}

int Function_114(struct<2> Param0, struct<5> Param2) //Position: 0x5AF8 / 23288
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
		if (!Function_77(StackVal, Param2))
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
			if (!Function_77(StackVal, Param2))
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

bool Function_115(bool bParam0) //Position: 0x5C3B / 23611
{
	if (bParam0 > 0 || bParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_116(var uParam0, struct<2> Param1, float fParam3, int iParam4, var uParam5) //Position: 0x5C51 / 23633
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
						if (Function_97(&Var5, &fVar4, 0, 0))
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

var Function_117(var uParam0, struct<2> Param1, float fParam3) //Position: 0x5D06 / 23814
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
				if (Function_97(&Var5, &uVar4, 0, 0))
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

var Function_118() //Position: 0x5D98 / 23960
{
	float fVar0;
	bool bVar1;
	
	if (Global_6612)
	{
		return 0.0f;
	}
	Function_53(&fVar0, &bVar1);
	if (fVar0 >= 50.0f)
	{
		return (fVar0 - 10.0f);
	}
	return (fVar0 - 20.0f);
}

var Function_119(var uParam0, struct<2> Param1, float fParam3, int iParam4, var uParam5) //Position: 0x5DC9 / 24009
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

var Function_120(var uParam0, struct<2> Param1, float fParam3) //Position: 0x5E6B / 24171
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

int Function_121(int iParam0) //Position: 0x5EF1 / 24305
{
	if (IS_ITERATOR_VALID(&iParam0))
	{
		ITERATE_EVERYWHERE(&iParam0);
		ITERATE_ON_PARTIAL_NAME(&iParam0, Function_139());
		ITERATE_ON_PARTIAL_MODEL_NAME(&iParam0, Function_139());
		ITERATE_ON_OBJECT_TYPE(&iParam0, 4294967295);
		return 1;
	}
	return 0;
}

int Function_122(var uParam0, int iParam1) //Position: 0x5F27 / 24359
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
	Function_99(DECOR_GET_INT(&uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
		}
		else
		{
			Function_123(iVar0, &uParam0, &uVar1, &iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(&uParam0);
	return 0;
}

void Function_123(int iParam0, var uParam1, struct<2> Param2) //Position: 0x6091 / 24721
{
	struct<8> Var0;
	
	*(&Global_39621[iParam05] + 16) = &uParam1;
	Global_39621[iParam05].f_32 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_126("stayout") };
	*(&Global_39621[iParam05] + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Param2, Vector(0.0f, 0.0f, 0.0f), Vector(12.0f, 5.0f, 12.0f));
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&Global_39621[iParam05] + 24, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&Global_39621[iParam05] + 24);
	if (&bParam3)
	{
		*(&Global_39621[iParam05] + 8) = ADD_BLIP_FOR_COORD(&Param2, 403, 0, 2, 0);
		SET_BLIP_BLINK(&Global_39621[iParam05] + 8, 1, 1, 20.0f);
	}
}

var Function_124(var uParam0, struct<2> Param1) //Position: 0x6139 / 24889
{
	struct<2> Var0;
	var uVar2;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		GET_POSITION(&uParam0, &Var0);
		Function_125(StackVal, StackVal, Var0, Param1, &uVar2);
		return UNK_0x9C40E671(&uVar2);
	}
	return 0.0f;
}

void Function_125(var uParam0, float fParam1, float fParam2, float fParam3, var uParam4) //Position: 0x6167 / 24935
{
	uParam4 = Vector((GET_X(&fParam2) - GET_X(&uParam0)), 0.0f, (GET_Z(&fParam2) - GET_Z(&uParam0)));
}

struct<32> Function_126(char* cParam0) //Position: 0x618B / 24971
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_127("0", &cVar8, ""), 4);
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

struct<32> Function_127(char* cParam0) //Position: 0x61F7 / 25079
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_128(struct<2>[] Param0) //Position: 0x6219 / 25113
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_133();
	iVar1 = 0;
	if (!Function_4(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_132(&(Param0[iVar02]), 8);
		}
		else if (Function_131())
		{
			iVar1 = 1;
			Function_132(&(Param0[iVar02]), 8);
		}
		Function_132(&(Param0[iVar02]), 16);
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
				Function_132(&(Param0[iVar02]), 1);
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
							Function_132(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_132(&(Param0[iVar02]), 2);
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
							Function_132(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_132(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_132(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_132(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_132(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_132(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_132(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_132(&(Param0[iVar02]), 2);
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
	Function_129();
	return 1;
}

void Function_129() //Position: 0x65DB / 26075
{
	if (!Function_130(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_130(int iParam0) //Position: 0x661B / 26139
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_131() //Position: 0x6637 / 26167
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

void Function_132(struct<13> Param0) //Position: 0x6665 / 26213
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_133() //Position: 0x6678 / 26232
{
	if (!Function_130(128))
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

bool Function_134(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x66BA / 26298
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

void Function_135(bool bParam0) //Position: 0x6732 / 26418
{
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(bParam0);
	return;
}

var Function_136(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x673D / 26429
{
	int iVar0;
	
	bParam2 = &bParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_4(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = bParam1;
			Param0[iVar02].f_8 = 3;
			Function_132(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_132(&(Param0[iVar02]), 8);
			}
			return iVar0;
		}
		if (bParam1 == &Param0[iVar02])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

var Function_137(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x6819 / 26649
{
	int iVar0;
	int iVar1;
	
	if (Global_47151[32])
	{
	}
	iVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_138(&Param0, &iVar1, iParam2);
	if (&bParam3)
	{
		Function_132(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_138(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x6857 / 26711
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_4(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_132(&(Param0[iVar02]), 4);
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

var Function_139() //Position: 0x6926 / 26918
{
	int iVar0;
	
	return &iVar0;
}

int Function_140(int iParam0, int iParam1) //Position: 0x692F / 26927
{
	int iVar0;
	
	iVar0 = (Global_26652[iParam04].f_16 % iParam1);
	return iVar0;
}

void Function_141(var uParam0) //Position: 0x6945 / 26949
{
	if (!Function_27(&uParam0))
	{
		Function_29(&uParam0, 0.0f);
	}
	return;
}

