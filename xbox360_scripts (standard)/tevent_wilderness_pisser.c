//Decompiled with MagicRDR v1.0
//Function Count : 206
//Statics Count : 96
//Natives Count : 331
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
	var uLocal_20 = 0;
	bool bLocal_21 = false;
	bool bLocal_22 = false;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	vector3 vLocal_26 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_29 = { 0.0f, 0.0f, 0.0f };
	bool bLocal_32 = false;
	bool bLocal_33 = false;
	bool bLocal_34 = false;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	int iLocal_44 = 0;
	struct<57> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	bool bVar1;
	struct<73> Var2;
	bool bVar75;
	int iVar94;
	bool bVar95;
	int iVar96;
	int iVar97;
	bool bVar98;
	int iVar99;
	int iVar100;
	float fVar101;
	int iVar102;
	bool bVar103;
	bool bVar104;
	
	iLocal_14 = 0;
	iLocal_15 = 0;
	iLocal_35 = 0;
	iLocal_36 = 0;
	iLocal_37 = 0;
	iLocal_44 = 0;
	iVar0 = 0;
	iVar51 = 0;
	iVar67 = 0;
	iVar68 = 0;
	bVar75 = 6;
	iVar94 = 0;
	bVar95 = false;
	iVar96 = 0;
	iVar97 = 0;
	bVar98 = false;
	iVar99 = 0;
	iVar100 = 0;
	fVar101 = 0.0f;
	if (!IS_POPSET_VALID(Global_30750[6]) || !IS_POPSET_VALID(Global_30750[0]))
	{
		iVar0 = 5;
	}
	else
	{
		uVar72[0] = Function_204(Global_30750[0], 1, 2, 1);
		uVar72[1] = Function_194(64, 1, 0, 4294967295, 0);
		if (uVar72[0] != 4294967295 || uVar72[1] != 4294967295)
		{
			iVar0 = 5;
		}
		else
		{
			Function_193(&bVar75, uVar72[0], 3, 0);
			Function_193(&bVar75, uVar72[1], 3, 0);
			Function_192(uVar72[0]);
			Function_190(&bVar75, "pee_nospawn", 1, 0);
			Function_190(&bVar75, "beat_pisser", 5, 0);
			Function_190(&bVar75, "custom/beat_pisser", 8, 0);
			bVar1 = CREATE_LAYOUT(Function_189());
			if (!IS_LAYOUTREF_VALID(bVar1))
			{
				iVar0 = 6;
			}
		}
	}
	iVar102 = 0;
	bVar103 = false;
	while (!IS_EXITFLAG_SET())
	{
		bVar104 = 500;
		if (Function_188(&bVar103, &iVar0, &iVar102, &bVar104, bVar95))
		{
			if (bVar103)
			{
				Function_187(&uVar70, 4294967295);
				Function_186(&bLocal_22);
			}
			else
			{
				Function_185(&uVar70, 4294967295);
				Function_184(&bLocal_22);
			}
		}
		switch (iVar0)
		{
			case 0x00000000:
				if (Function_178(&bVar75))
				{
					iVar0 = 1;
					bVar104 = false;
				}
				break;
			
			case 0x00000001:
				if (Function_142(&ScriptParam_0, &bVar104, &iVar67, &iVar68, 1))
				{
					Var2.f_4 = 1;
					GET_POSITION(GET_PLAYER_ACTOR(0), &uVar59);
					Function_141(StackVal, StackVal, &Var2, Global_34574);
					Function_140(StackVal, StackVal, &Var2, Global_34574, 0,1f);
					uVar69 = Function_138(StackVal, StackVal, *(&ScriptParam_0 + 8), Global_34573);
					vVar53 = { StackVal, StackVal, *(&ScriptParam_0 + 8) };
					Function_135(StackVal, StackVal, &Var2, *(&ScriptParam_0 + 8), 0.0f, uVar69, 0.0f, ScriptParam_0.f_48, 1, 1);
					Var2.f_72 = 2;
					Function_94(&Var2, 1, 0, 0);
					if (!Function_93(&Var2))
					{
						iVar0 = 6;
					}
					else
					{
						uVar70[0] = Function_91(StackVal, StackVal, StackVal, StackVal, bVar1, Function_189(), uVar72[0], Function_189(), uVar72[1], vVar53, *(&Var2 + 168));
						SQUAD_JOIN(StackVal, uVar70[0]);
						SET_ACTOR_CAN_PLAY_GESTURES(uVar70[0], false);
						if (ScriptParam_0.f_32)
						{
						}
						bLocal_22 = GET_MOUNT(uVar70[0]);
						iVar0 = 3;
					}
				}
				else if (iVar68 == 1)
				{
					iVar0 = 5;
				}
				break;
			
			case 0x00000003:
				Function_90();
				Function_77(StackVal, StackVal, Function_90(), &bVar95, ScriptParam_0.f_56, uVar70[0], 0, 80.0f, 0);
				if (bVar95 && !bVar98)
				{
					Function_62(44);
					bVar98 = true;
				}
				if (!Function_55(ScriptParam_0.f_56, uVar70[0], &iVar96, &iVar97, 0, 1, 1, 1))
				{
					iVar0 = 5;
					break;
				}
				if (iVar99 == 0)
				{
					if (!SQUAD_IS_VALID(StackVal))
					{
						bVar104 = false;
						iVar0 = 5;
					}
					else if (!Function_54(StackVal))
					{
						bVar104 = false;
						iVar0 = 5;
					}
					else if (!Function_52(StackVal, GET_PLAYER_ACTOR(0), 180.0f, 1))
					{
						bVar104 = false;
						iVar0 = 5;
					}
					iVar65 = Function_94(&Var2, 1, 0, 0);
					if (iVar65 == 1)
					{
						bVar104 = false;
					}
				}
				else
				{
					iVar65 = 7;
				}
				if (Function_51(iVar94))
				{
					Function_50(uVar70[0]);
					if (Function_49(Global_34573, uVar70[0]) > 30.0f)
					{
						TASK_MOUNT(uVar70[0], bLocal_22, 1, 1, 3, 2147483647);
						SAY_SINGLE_LINE_CONTEXT(uVar70[0], 24, Global_34573, 1, 0, 5, 4294967295, 4294967295, 0, 1);
						Var2 = 7;
						iVar94 = 8;
					}
					else
					{
						SAY_SINGLE_LINE_CONTEXT(uVar70[0], 96, Global_34573, 1, 0, 5, 4294967295, 4294967295, 0, 1);
						Var2 = 7;
						Function_40(uVar70[0], 0, 0, 2);
						iVar100 = 1;
						iVar0 = 5;
						bVar104 = false;
					}
				}
				if (IS_ACTOR_VALID(uVar70[0]))
				{
					if (Function_37(uVar70[0], &iVar50, &fVar101, 0, 0, 0x40400000))
					{
						Function_50(uVar70[0]);
						switch (iVar50)
						{
							case 0x00000001:
								Function_50(uVar70[0]);
								TASK_FLEE_ACTOR(uVar70[0], Global_34573, -1.0f, -1.0f, 0, 0, 0);
								RESET_ANIM_SET_FOR_ACTOR(uVar70[0], true);
								break;
							
							case 0x00000002:
								Function_50(uVar70[0]);
								TASK_FLEE_ACTOR(uVar70[0], Global_34573, -1.0f, -1.0f, 0, 0, 0);
								RESET_ANIM_SET_FOR_ACTOR(uVar70[0], true);
								break;
							
							case 0x00000004:
								Function_50(uVar70[0]);
								TASK_FLEE_ACTOR(uVar70[0], Global_34573, -1.0f, -1.0f, 0, 0, 0);
								RESET_ANIM_SET_FOR_ACTOR(uVar70[0], true);
								break;
							
							case 0x00000008:
								Function_36(uVar70[0], &Global_34573);
								break;
							
							case 0x00000010:
								Function_50(uVar70[0]);
								TASK_FLEE_ACTOR(uVar70[0], Global_34573, -1.0f, -1.0f, 0, 0, 0);
								RESET_ANIM_SET_FOR_ACTOR(uVar70[0], true);
								break;
						}
						iVar100 = 1;
						iVar0 = 5;
						bVar104 = false;
					}
				}
				if (IS_ACTOR_VALID(uVar70[0]))
				{
					if (Function_49(uVar70[0], Global_34573) < Function_34(1))
					{
						iVar0 = 5;
						bVar104 = false;
					}
				}
				if (!IS_ACTOR_VALID(uVar70[0]))
				{
					iVar0 = 5;
					bVar104 = false;
				}
				if (Var2 == 0)
				{
					bVar104 = false;
					iVar0 = 5;
				}
				else if (iVar65 == 6)
				{
					iVar51++;
					if (iVar51 >= 3)
					{
						iVar0 = 5;
						break;
					}
				}
				if (GET_DEBUG_DRAW_STATE())
				{
					GET_POSITION(uVar70[0], &uVar62);
					bVar104 = false;
				}
				if (Function_16(&iVar94, &uVar70, &Var2, bVar1, &iVar99))
				{
					iVar100 = 1;
					iVar0 = 5;
				}
				break;
			
			case 0x00000005:
				iVar0 = 6;
				bVar104 = false;
				break;
			
			case 0x00000006:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				bVar104 = false;
				break;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(bVar104);
		}
	}
	Function_185(&uVar70, 4294967295);
	Function_184(&bLocal_22);
	Function_15(uVar72[0]);
	if (iVar100 == 0)
	{
		Function_13(&uVar70, 4294967295);
	}
	if (!bVar95)
	{
		Function_13(&uVar70, 4294967295);
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
	if (!bVar95 || iLocal_36 != 1)
	{
		Function_10(ScriptParam_0.f_56, 0.0f, 0, 1, 0);
	}
	Function_6(&bVar75);
	if (IS_ITERATOR_VALID(StackVal))
	{
		DESTROY_ITERATOR(StackVal);
	}
	Function_1(&Var2, 1);
	if (IS_LAYOUTREF_VALID(bVar1))
	{
		RELEASE_LAYOUT_REF(bVar1);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0, bool bParam1) //Position: 0x5CC / 1484
{
	*iParam0 = 0;
	iParam0->f_4 = 4294967295;
	if (SQUAD_IS_VALID(StackVal))
	{
		if (!Global_34165.f_44 && !bParam1)
		{
			Function_5(StackVal);
		}
		else
		{
			Function_4(StackVal);
		}
		DESTROY_OBJECT(GET_OBJECT_FROM_SQUAD(StackVal));
	}
	if (IS_OBJECTSET_VALID(iParam0->f_180))
	{
		DESTROY_OBJECTSET(iParam0->f_180);
	}
	if (IS_OBJECTSET_VALID(iParam0->f_48))
	{
		Function_3(iParam0->f_48);
		DESTROY_OBJECTSET(iParam0->f_48);
	}
	if (IS_OBJECTSET_VALID(iParam0->f_160))
	{
		Function_3(iParam0->f_160);
		DESTROY_OBJECTSET(iParam0->f_160);
	}
	iParam0->f_20 = 0;
	*(iParam0 + 24) = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_2() };
	iParam0->f_12 = "";
	iParam0->f_72 = 4294967295;
	iParam0->f_148 = 0;
	Function_90();
	*(iParam0 + 168) = { StackVal, StackVal, Function_90() };
	iParam0->f_16 = "";
	iParam0->f_100 = 0;
	iParam0->f_104 = 0;
	iParam0->f_124 = 0;
	iParam0->f_84 = 2;
	iParam0->f_188 = 0;
	iParam0->f_80 = 0;
	iParam0->f_164 = 0;
	return;
}

struct<24> Function_2() //Position: 0x69E / 1694
{
	struct<6> Var0;
	
	Var0.f_20 = 4294967295;
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

void Function_3(bool bParam0) //Position: 0x6AF / 1711
{
	bool bVar0;
	
	if (!IS_OBJECTSET_VALID(bParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(bParam0) >= 0)
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, bParam0);
		REMOVE_OBJECT_FROM_OBJECTSET(bVar0, bParam0);
		CLEAN_OBJECTSET(bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			RELEASE_CURVE(GET_CURVE_FROM_OBJECT(bVar0));
		}
	}
	return;
}

void Function_4(bool bParam0) //Position: 0x6EF / 1775
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			SQUAD_LEAVE(bVar1);
			if (IS_ACTOR_VALID(GET_MOUNT(bVar1)))
			{
				if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(GET_MOUNT(bVar1))))
				{
					DESTROY_ACTOR(GET_ATTACHED_HOGTIE_VICTIM(GET_MOUNT(bVar1)));
				}
				RELEASE_ACTOR(GET_MOUNT(bVar1));
			}
			if (IS_ACTOR_VALID(GET_VEHICLE(bVar1)))
			{
				RELEASE_ACTOR(GET_VEHICLE(bVar1));
			}
			RELEASE_ACTOR(bVar1);
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_5(bool bParam0) //Position: 0x772 / 1906
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			SQUAD_LEAVE(bVar1);
			if (IS_ACTOR_VALID(GET_MOUNT(bVar1)))
			{
				if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(GET_MOUNT(bVar1))))
				{
					DESTROY_ACTOR(GET_ATTACHED_HOGTIE_VICTIM(GET_MOUNT(bVar1)));
				}
				DESTROY_ACTOR(GET_MOUNT(bVar1));
			}
			if (IS_ACTOR_VALID(GET_VEHICLE(bVar1)))
			{
				DESTROY_ACTOR(GET_VEHICLE(bVar1));
			}
			DESTROY_ACTOR(bVar1);
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_6(int iParam0) //Position: 0x7F5 / 2037
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_7(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_7(var uParam0, int iParam1) //Position: 0x81B / 2075
{
	if (Function_9(uParam0[iParam13], 4))
	{
		if (Function_9(uParam0[iParam13], 1))
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
			Function_8(uParam0[iParam13], 1);
			Function_8(uParam0[iParam13], 2);
			Function_8(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_8(var uParam0, int iParam1) //Position: 0x949 / 2377
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_9(var uParam0, int iParam1) //Position: 0x963 / 2403
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_10(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x980 / 2432
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
		Function_12("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
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
			Function_11(bVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_11(bVar0);
		}
		if (!bParam3)
		{
			ADD_TIME(&bVar0, 0, false, bVar1, 0);
		}
		else
		{
			ADD_TIME(&bVar0, 0, false, 10, 0);
		}
		if (Global_30842[16])
		{
			PRINTSTRING("Formed time of day:");
			Function_11(bVar0);
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

void Function_11(bool bParam0) //Position: 0xBDD / 3037
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

void Function_12(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0xC23 / 3107
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

void Function_13(var uParam0, int iParam1) //Position: 0xC6A / 3178
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_14(uParam0[iVar0]);
		iVar0++;
	}
	return;
}

void Function_14(int iParam0) //Position: 0xC97 / 3223
{
	if (IS_ACTOR_VALID(*iParam0))
	{
		RESET_ANIM_SET_FOR_ACTOR(*iParam0, false);
		TASK_FLEE_ACTOR(*iParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
		TASK_PRIORITY_SET(*iParam0, false);
	}
	return;
}

void Function_15(bool bParam0) //Position: 0xCC2 / 3266
{
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(bParam0);
	return;
}

bool Function_16(var uParam0, var uParam1, int iParam2, bool bParam3, var uParam4) //Position: 0xCCD / 3277
{
	vector3 vVar0;
	var uVar3;
	var uVar6;
	var uVar9;
	vector3 vVar10;
	
	switch (*uParam0)
	{
		case 0x00000000:
			if (IS_ACTOR_VALID((*uParam1)[0]))
			{
				if (Function_49((*uParam1)[0], Global_34573) > 75.0f)
				{
					GET_OBJECT_RELATIVE_POSITION((*uParam1)[0], 2.0f, 0.0f, 4.0f, &uLocal_23);
					GET_OBJECT_RELATIVE_POSITION((*uParam1)[0], -10.0f, 0.0f, -10.0f, &vLocal_26);
					if (Function_33(&vLocal_26, 3.0f, &uVar3, &uVar6, &uVar9) == 0)
					{
						*iParam2 = 7;
						Function_90();
						Function_31(StackVal, StackVal, (*uParam1)[0], Function_90(), 0, 0, 2, 1);
						iLocal_36 = 1;
						*uParam0 = 9;
					}
					Function_30((*uParam1)[0]);
					vVar10 = { StackVal, StackVal, Function_30((*uParam1)[0]) };
					if (Function_29(StackVal, StackVal, StackVal, StackVal, vVar10, vLocal_26) == 0)
					{
						*iParam2 = 7;
						Function_90();
						Function_31(StackVal, StackVal, (*uParam1)[0], Function_90(), 0, 0, 2, 1);
						iLocal_36 = 1;
						*uParam0 = 9;
					}
					Function_30((*uParam1)[0]);
					Function_140(StackVal, StackVal, iParam2, Function_30((*uParam1)[0]), 5.0f);
					Function_30((*uParam1)[0]);
					vLocal_29 = { StackVal, StackVal, Function_30((*uParam1)[0]) };
					bLocal_32 = FIND_NEAREST_COVER_LOCATION(&vLocal_29, 30.0f, GET_HEADING((*uParam1)[0]), 360.0f, 7);
					if (IS_COVER_LOCATION_VALID(bLocal_32))
					{
					}
					else
					{
						*iParam2 = 7;
						Function_90();
						Function_31(StackVal, StackVal, (*uParam1)[0], Function_90(), 0, 0, 2, 1);
						iLocal_36 = 1;
						*uParam0 = 9;
					}
					*uParam4 = 1;
					SQUAD_LEAVE((*uParam1)[0]);
					TASK_CLEAR((*uParam1)[0]);
					TASK_GO_NEAR_COORD((*uParam1)[0], &vLocal_26, 3.0f, 4);
					*uParam0 = 1;
				}
			}
			else
			{
				*iParam2 = 7;
				*uParam0 = 9;
			}
			break;
		
		case 0x00000001:
			if (GET_TASK_STATUS((*uParam1)[0], 61) == 0)
			{
				bLocal_22 = GET_MOUNT((*uParam1)[0]);
				TASK_STAND_STILL(bLocal_22, -1.0f, 0, 0);
				*uParam0 = 2;
			}
			break;
		
		case 0x00000002:
			Function_30((*uParam1)[0]);
			vLocal_29 = { StackVal, StackVal, Function_30((*uParam1)[0]) };
			bLocal_33 = FIND_NEAREST_COVER_LOCATION(&vLocal_29, 30.0f, GET_HEADING((*uParam1)[0]), 360.0f, 7);
			if (IS_COVER_LOCATION_VALID(bLocal_33))
			{
				GET_COVER_LOCATION_BASE_POSITION(bLocal_33, &vLocal_29);
				vVar0.f_4 = GET_COVER_LOCATION_DIRECTION(bLocal_33);
				if (Function_29(StackVal, StackVal, StackVal, StackVal, vLocal_26, vLocal_29))
				{
					bLocal_21 = CREATE_GRINGO_IN_LAYOUT(bParam3, Function_189(), "$/content/scripting/gringo/SimpleGringo/Pee_nospawn", vLocal_29, vVar0);
					SNAP_OBJECT_TO_GROUND(bLocal_21, 10.0f, false, 1092616192);
					*uParam0 = 3;
				}
				else
				{
					*iParam2 = 7;
					Function_90();
					Function_31(StackVal, StackVal, (*uParam1)[0], Function_90(), 0, 0, 2, 1);
					iLocal_36 = 1;
					*uParam0 = 9;
				}
			}
			else if (IS_COVER_LOCATION_VALID(bLocal_32))
			{
				GET_COVER_LOCATION_BASE_POSITION(bLocal_32, &vLocal_29);
				vVar0.f_4 = GET_COVER_LOCATION_DIRECTION(bLocal_32);
				if (Function_29(StackVal, StackVal, StackVal, StackVal, vLocal_26, vLocal_29))
				{
					bLocal_21 = CREATE_GRINGO_IN_LAYOUT(bParam3, Function_189(), "$/content/scripting/gringo/SimpleGringo/Pee_nospawn", vLocal_29, vVar0);
					SNAP_OBJECT_TO_GROUND(bLocal_21, 10.0f, false, 1092616192);
					*uParam0 = 3;
				}
				else
				{
					*iParam2 = 7;
					Function_90();
					Function_31(StackVal, StackVal, (*uParam1)[0], Function_90(), 0, 0, 2, 1);
					iLocal_36 = 1;
					*uParam0 = 9;
				}
			}
			else
			{
				*iParam2 = 7;
				Function_90();
				Function_31(StackVal, StackVal, (*uParam1)[0], Function_90(), 0, 0, 2, 1);
				iLocal_36 = 1;
				*uParam0 = 9;
			}
			break;
		
		case 0x00000003:
			if (GET_TASK_STATUS((*uParam1)[0], 61) == 0)
			{
				TASK_DISMOUNT((*uParam1)[0], 1);
				*uParam0 = 5;
			}
			break;
		
		case 0x00000005:
			if (GET_TASK_STATUS((*uParam1)[0], 12) == 0)
			{
				RESET_ANIM_SET_FOR_ACTOR((*uParam1)[0], false);
				TASK_USE_GRINGO((*uParam1)[0], GET_GRINGO_FROM_OBJECT(bLocal_21), "UseCase1", true, 4);
				*uParam0 = 6;
			}
			break;
		
		case 0x00000006:
			if (IS_ACTOR_VALID((*uParam1)[0]))
			{
				if (GET_CURRENT_GRINGO((*uParam1)[0]) == GET_GRINGO_FROM_OBJECT(bLocal_21))
				{
					Function_26(&uLocal_41, 0.0f);
					*uParam0 = 7;
				}
			}
			break;
		
		case 0x00000007:
			if (GET_TASK_STATUS((*uParam1)[0], 19) == 0)
			{
				TASK_MOUNT((*uParam1)[0], bLocal_22, 1, 1, true, 2147483647);
				*uParam0 = 8;
			}
			else if (Function_23((*uParam1)[0], Global_34573, 6.0f) && Function_18(&uLocal_41, 4.0f))
			{
				if (iLocal_35 == 0)
				{
					if (GET_TASK_STATUS((*uParam1)[0], 19) == 1)
					{
						bLocal_34 = TASK_SEQUENCE_OPEN();
						TASK_CLEAR(false);
						TASK_FACE_ACTOR(false, Global_34573, 0, 3212836864);
						TASK_ACTION_PERFORM(false, "default_character_Main/AI_Taunt/TauntIdle/TauntB/TauntB");
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM((*uParam1)[0], bLocal_34);
						TASK_SEQUENCE_RELEASE(bLocal_34, 1);
						AI_GOAL_LOOK_AT_ACTOR((*uParam1)[0], Global_34573, 0, 1065353216, 3212836864, 3212836864, 0);
						iLocal_35 = 1;
					}
				}
				else
				{
					Function_17((*uParam1)[0]);
					if (GET_TASK_STATUS((*uParam1)[0], 0) == 0)
					{
						TASK_MOUNT((*uParam1)[0], bLocal_22, 1, 1, true, 2147483647);
						*uParam0 = 8;
					}
				}
			}
			else if (iLocal_35 == 1)
			{
				if (GET_TASK_STATUS((*uParam1)[0], 0) != 0 && IS_ACTOR_RIDING_AND_IN_SADDLE((*uParam1)[0]))
				{
					TASK_MOUNT((*uParam1)[0], bLocal_22, 1, 1, true, 2147483647);
					*uParam0 = 8;
				}
			}
			break;
		
		case 0x00000008:
			if (GET_TASK_STATUS((*uParam1)[0], 11) == 0)
			{
				if (IS_ACTOR_RIDING_AND_IN_SADDLE((*uParam1)[0]))
				{
					*iParam2 = 7;
					Function_90();
					Function_31(StackVal, StackVal, (*uParam1)[0], Function_90(), 0, 0, 2, 1);
					*uParam0 = 9;
				}
			}
			break;
		
		case 0x00000009:
			return 1;
			break;
	}
	return 0;
}

void Function_17(bool bParam0) //Position: 0x11F2 / 4594
{
	switch (iLocal_37)
	{
		case 0x00000000:
			if (IS_ACTOR_VALID(bParam0))
			{
				SAY_SINGLE_LINE_CONTEXT(bParam0, 24, Global_34573, 1, 0, 5, 4294967295, 4294967295, 0, 1);
				Function_26(&uLocal_38, 0.0f);
				iLocal_44++;
				iLocal_37 = 1;
			}
			break;
		
		case 0x00000001:
			if (!IS_AMBIENT_SPEECH_PLAYING(bParam0))
			{
				if (Function_18(&uLocal_38, 1,5f))
				{
					if (iLocal_44 <= 2)
					{
						iLocal_37 = 0;
					}
					else
					{
						iLocal_37 = 2;
					}
				}
			}
			else
			{
				Function_26(&uLocal_38, 0.0f);
			}
			break;
		
		case 0x00000002:
			break;
	}
	return;
}

bool Function_18(var uParam0, float fParam1) //Position: 0x1270 / 4720
{
	if (Function_22(uParam0))
	{
		if (Function_19(uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_19(int iParam0) //Position: 0x128C / 4748
{
	if (Function_22(iParam0))
	{
		if (Function_20(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_20(int iParam0) //Position: 0x1354 / 4948
{
	return Function_21(*iParam0, 2);
}

bool Function_21(int iParam0, int iParam1) //Position: 0x1361 / 4961
{
	return (iParam0 && iParam1) == 0;
}

bool Function_22(int iParam0) //Position: 0x136E / 4974
{
	return Function_21(*iParam0, 1);
}

int Function_23(var uParam0, var uParam1, float fParam2) //Position: 0x137B / 4987
{
	float fVar0;
	
	fVar0 = Function_24(uParam0, uParam1);
	if (fVar0 >= fParam2)
	{
		return 1;
	}
	return 0;
}

var Function_24(bool bParam0, bool bParam1) //Position: 0x1398 / 5016
{
	var uVar0;
	int iVar3;
	int iVar6;
	
	GET_POSITION(bParam0, &uVar0);
	GET_POSITION(bParam1, &iVar3);
	iVar6 = Function_25(&uVar0, &iVar3);
	return iVar6;
}

float Function_25(var uParam0, int iParam1) //Position: 0x13B7 / 5047
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*iParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

void Function_26(var uParam0, float fParam1) //Position: 0x13D5 / 5077
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_28(uParam0, 1);
	Function_27(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_27(var uParam0, int iParam1) //Position: 0x13F6 / 5110
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_28(var uParam0, bool bParam1) //Position: 0x1409 / 5129
{
	*uParam0 = (*uParam0 || bParam1);
	return;
}

bool Function_29(vector3 vParam0, vector3 vParam3) //Position: 0x1418 / 5144
{
	struct<5> Var0;
	
	Var0 = { StackVal, StackVal, vParam0 };
	Var3 = { StackVal, StackVal, vParam3 };
	if ((((GET_MATERIAL_AT_VECTOR(&Var3) != 32 || GET_MATERIAL_AT_VECTOR(&Var3) != 64) || GET_MATERIAL_AT_VECTOR(&Var3) != 16) || GET_MATERIAL_AT_VECTOR(&Var3) != 128) || GET_MATERIAL_AT_VECTOR(&Var3) != 512)
	{
		return 0;
	}
	if (StackVal > (StackVal + 6.0f))
	{
		return 0;
	}
	if (StackVal > (StackVal + 6.0f))
	{
		return 0;
	}
	return 1;
}

vector3 Function_30(bool bParam0) //Position: 0x1489 / 5257
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_31(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x149A / 5274
{
	if (!IS_OBJECTSET_VALID(Global_28842.f_60))
	{
		Global_28842.f_60 = CREATE_OBJECTSET_IN_LAYOUT("trafficReleased", Global_28841, 15, 1);
	}
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	if (bParam4 != 0)
	{
		DECOR_SET_INT(bParam0, "overrideCurve", bParam4);
	}
	if (!Function_32(StackVal, StackVal, vParam1))
	{
		DECOR_SET_VECTOR(bParam0, "overrideDest", vParam1);
	}
	if (bParam5 != 0)
	{
		DECOR_SET_INT(bParam0, "overrideSpeed", bParam5);
	}
	if (bParam6 != 2)
	{
		DECOR_SET_INT(bParam0, "overridePriority", bParam6);
	}
	else
	{
		TASK_PRIORITY_SET(bParam0, 2);
	}
	if (bParam7)
	{
		DECOR_SET_INT(bParam0, "quickRelease", bParam6);
	}
	if (!IS_OBJECT_IN_OBJECTSET(bParam0, Global_28842.f_60))
	{
		ADD_OBJECT_TO_OBJECTSET(bParam0, Global_28842.f_60);
	}
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam0, true);
}

bool Function_32(vector3 vParam0) //Position: 0x15A2 / 5538
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

int Function_33(float fParam0, float fParam1, var uParam2, var uParam3, var uParam4) //Position: 0x15BA / 5562
{
	vector3 vVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(*fParam0, 1.0f))
	{
		GET_CAMERA_POSITION(GET_GAME_CAMERA(), &vVar0);
		if (VDIST(*fParam0, vVar0) > 175.0f)
		{
		}
		return 0;
	}
	if (FIND_GROUND_INTERSECTION_WITH_MATERIAL(fParam0, fParam1, uParam2, uParam3, uParam4))
	{
		if (!Function_32(StackVal, StackVal, *uParam2))
		{
			return 1;
		}
	}
	*fParam0 = (*fParam0 + 0,01f);
	fParam0->f_8 = (StackVal + 0,01f);
	if (FIND_GROUND_INTERSECTION_WITH_MATERIAL(fParam0, fParam1, uParam2, uParam3, uParam4))
	{
		if (!Function_32(StackVal, StackVal, *uParam2))
		{
			return 1;
		}
	}
	return 0;
}

float Function_34(bool bParam0) //Position: 0x1647 / 5703
{
	var uVar0;
	float fVar1;
	
	if (!bParam0)
	{
		Function_35(&uVar0, &fVar1);
		if (fVar1 < 60.0f)
		{
			return (fVar1 + 20.0f);
		}
		return (fVar1 + 10.0f);
	}
	return (190.0f + 20.0f);
}

void Function_35(float fParam0, int iParam1) //Position: 0x1682 / 5762
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

int Function_36(bool bParam0, bool bParam1) //Position: 0x170B / 5899
{
	if (IS_ACTOR_HUMAN(bParam0))
	{
		if (GET_NUM_WEAPONS_IN_INVENTORY(bParam0) == 0)
		{
			TASK_FLEE_ACTOR(bParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
			TASK_PRIORITY_SET(bParam0, false);
			return 1;
		}
	}
	if (!IS_ACTOR_VALID(bParam0))
	{
		LOG_ERROR("Killer is invalid in TASK_KILL_ACTOR_RUTHLESS");
		return 0;
	}
	if (!IS_ACTOR_VALID(*bParam1))
	{
		LOG_ERROR("VICTIM is invalid in TASK_KILL_ACTOR_RUTHLESS");
		return 0;
	}
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, -1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 37, 2.0f);
	MEMORY_ALLOW_TAKE_COVER(bParam0, 0);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(bParam0, 0);
	MEMORY_REPORT_POSITION_AUTO(bParam0, *bParam1, true);
	TASK_KILL_CHAR(bParam0, *bParam1);
	TASK_PRIORITY_SET(bParam0, true);
	return 1;
}

bool Function_37(bool bParam0, var uParam1, var uParam2, int iParam3, bool bParam4, float fParam5) //Position: 0x17F0 / 6128
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
		fVar0 = Function_49(bParam0, Global_34573);
		if (!Function_21(iParam3, 8))
		{
			if (GET_LAST_ATTACKER(bParam0) == Global_34573)
			{
				*uParam1 = 8;
				Function_38(bParam0);
				return 1;
			}
		}
		if (!Function_21(iParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(bParam0, 1.0f))
			{
				*uParam1 = 2;
				Function_38(bParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(bParam0, 1.0f, 1.0f))
			{
				*uParam1 = 2;
				Function_38(bParam0);
				return 1;
			}
		}
		if (!Function_21(iParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(bParam0) || (((GET_ACTOR_UNDER_RETICLE(Global_34573, 0) != bParam0 && IS_PLAYER_WEAPON_ZOOMED(Global_34573)) && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(Global_34573) != bParam0 && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f))
			{
				if (*uParam2 > 0.0f)
				{
					*uParam1 = 4;
					Function_38(bParam0);
					return 1;
				}
				if (*uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - *uParam2) < 1,3f)
					{
						*uParam1 = 4;
						Function_38(bParam0);
						return 1;
					}
				}
				*uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_21(iParam3, 1))
		{
			if (Global_3403 || Global_3404)
			{
				*uParam1 = 1;
				Function_38(bParam0);
				return 1;
			}
		}
		if (!Function_21(iParam3, 16))
		{
			if (UNK_0x7F454A92(bParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(bParam0)) > 2.0f && fVar0 > 18.0f)
				{
					*uParam1 = 16;
					Function_38(bParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_38(bool bParam0) //Position: 0x1987 / 6535
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(bParam0, 1);
	UNK_0x99AFD2D1(bParam0, 0, 0);
	Function_39(bParam0);
	MEMORY_CONSIDER_AS(Global_34573, bParam0, 2);
	MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
	AI_GOAL_LOOK_CLEAR(bParam0);
	return;
}

void Function_39(bool bParam0) //Position: 0x19BB / 6587
{
	SAY_SINGLE_LINE_CONTEXT(bParam0, 60, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

int Function_40(bool bParam0, int iParam1, var uParam2, var uParam3) //Position: 0x19D2 / 6610
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
					Function_41(bVar1, 0, 0, 0, 1);
				}
				bVar0++;
			}
		}
		Function_41(bParam0, iParam1, uParam2, uParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_41(bool bParam0, int iParam1, var uParam2, var uParam3, int iParam4) //Position: 0x1AB2 / 6834
{
	char* cVar0[32];
	
	Function_48();
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
	if (Function_47(bParam0) == 1)
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
	Function_46(bParam0, 0);
	Function_45(bParam0, iParam1);
	Function_44(bParam0, uParam2);
	Function_43(bParam0, uParam3);
	if (Function_42(bParam0) != 5)
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

int Function_42(bool bParam0) //Position: 0x1D00 / 7424
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior");
}

void Function_43(bool bParam0, bool bParam1) //Position: 0x1D23 / 7459
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_44(bool bParam0, bool bParam1) //Position: 0x1D46 / 7494
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_target", bParam1);
	return;
}

void Function_45(bool bParam0, bool bParam1) //Position: 0x1D6A / 7530
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_46(bool bParam0, bool bParam1) //Position: 0x1D90 / 7568
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_state", bParam1);
	return;
}

int Function_47(bool bParam0) //Position: 0x1DB3 / 7603
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
}

void Function_48() //Position: 0x1DD1 / 7633
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

float Function_49(bool bParam0, bool bParam1) //Position: 0x1E1B / 7707
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

void Function_50(bool bParam0) //Position: 0x1F0C / 7948
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (DECOR_CHECK_EXIST(bParam0, "nnostickup"))
		{
			DECOR_REMOVE(bParam0, "nnostickup");
		}
		AI_SET_ENABLE_STICKUP_OVERRIDE(bParam0, 1);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam0, true);
		SET_ACTOR_CUTSCENE_MODE(bParam0, 0);
		TASK_PRIORITY_SET(bParam0, 2);
	}
	return;
}

bool Function_51(int iParam0) //Position: 0x1F58 / 8024
{
	bool bVar0;
	
	if (iParam0 >= 7)
	{
		if (IS_ACTOR_VALID(bLocal_22))
		{
			bVar0 = GET_RIDER(bLocal_22);
			if (bVar0 == Global_34573)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool Function_52(bool bParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0x1F7E / 8062
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		if (Global_3380)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		if (Global_3380)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_ALIVE(bParam1))
	{
		if (Global_3380)
		{
		}
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				if (ACTORS_IN_RANGE(bVar1, bParam1, bParam2))
				{
					if (!Function_53(bVar1, 1) || uParam3)
					{
						return 1;
					}
				}
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_53(bool bParam0, int iParam1) //Position: 0x2017 / 8215
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

bool Function_54(bool bParam0) //Position: 0x2061 / 8289
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	if (SQUAD_GET_SIZE(bParam0) < 0)
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (!IS_ACTOR_DEAD(bVar1))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_55(int iParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x20B8 / 8376
{
	if (StackVal & 64 == 64)
	{
		if (!*uParam2)
		{
			if (IS_ACTOR_VALID(bParam1))
			{
				if (Function_49(Global_34573, bParam1) > 15.0f)
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
		if (Function_58() && !*uParam2)
		{
			return 0;
		}
		if (Function_57(iParam0) && !*uParam2)
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
		if (!Function_56(iParam0, uParam5))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_56(int iParam0, int iParam1) //Position: 0x21E6 / 8678
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

int Function_57(int iParam0) //Position: 0x2207 / 8711
{
	bool bVar0;
	
	if (StackVal & 64 == 64)
	{
		bVar0 = GET_LAST_HIT_TIME(Global_34573);
		if (bVar0 < 0.0f)
		{
			if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(Global_34573)) > 20.0f)
			{
				return 1;
			}
		}
	}
	return 0;
}

int Function_58() //Position: 0x2245 / 8773
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
						if (Function_59(StackVal, Global_34573) > IntToFloat(iVar1))
						{
							return 1;
						}
					}
				}
			}
			if (Function_59(StackVal, Global_34573) > IntToFloat(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

float Function_59(bool bParam0, bool bParam1) //Position: 0x2300 / 8960
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_61(bParam0);
			vVar0 = { StackVal, StackVal, Function_61(bParam0) };
			Function_60(bParam1);
			vVar3 = { StackVal, StackVal, Function_60(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

vector3 Function_60(bool bParam0) //Position: 0x23A0 / 9120
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

vector3 Function_61(bool bParam0) //Position: 0x240C / 9228
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

void Function_62(int iParam0) //Position: 0x2476 / 9334
{
	Global_16876[iParam06].f_16++;
	if (Global_16876[iParam06].f_16 == 1)
	{
		Function_63(409, 1, 0, 0);
	}
	return;
}

int Function_63(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x24A7 / 9383
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
	Function_76(iParam0, TO_FLOAT(bParam1), 1);
	Function_75(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_64(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_64(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x26C7 / 9927
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
			bParam2 = (bParam2 * 3,28084f);
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_74(390))), 32);
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
					bVar19 = (Function_73(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_73(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_71(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_68(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_66(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_65(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_189(), &Var9);
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

var Function_65(int iParam0) //Position: 0x2CF4 / 11508
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_66(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2D05 / 11525
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_67("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_67("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_67("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_67(char* cParam0, char* cParam1) //Position: 0x2DFA / 11770
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_68(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2E13 / 11795
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_70(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_69(Function_70(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_69(int iParam0, int iParam1) //Position: 0x2E78 / 11896
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_70(int iParam0, bool bParam1) //Position: 0x2E8A / 11914
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_71(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2E9C / 11932
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
	if (((Function_72(iParam0) != 19 || Function_72(iParam0) != 17) || Function_72(iParam0) != 10) || Function_72(iParam0) != 9)
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

int Function_72(int iParam0) //Position: 0x2FCC / 12236
{
	return Global_35278[iParam020].f_48;
}

float Function_73(int iParam0) //Position: 0x2FDB / 12251
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_74(int iParam0) //Position: 0x3014 / 12308
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_75(int iParam0) //Position: 0x3051 / 12369
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

int Function_76(int iParam0, float fParam1, bool bParam2) //Position: 0x31EB / 12779
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
		Global_34581[iVar1] = (Global_34581[iVar1] + fParam1);
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

void Function_77(vector3 vParam0, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7, bool bParam8) //Position: 0x3405 / 13317
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
	else if (!Function_32(StackVal, StackVal, vParam0))
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
			Function_89(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_88(0);
		}
		if (bParam8)
		{
			Function_86(0, GET_THIS_SCRIPT_ID());
			Global_3373 = GET_THIS_SCRIPT_ID();
			Function_84(iParam4);
			Global_3401 = 1;
		}
		Function_82(iParam4);
		if (Function_81(StackVal, 32768))
		{
			Function_78(1);
		}
		Global_16876[iParam46].f_12++;
		Function_63(408, 1, 0, 0);
	}
}

void Function_78(bool bParam0) //Position: 0x350C / 13580
{
	if (bParam0)
	{
		Function_80(0x10000000);
	}
	else
	{
		Function_79(0x10000000);
	}
	Global_26316.f_172 = 0;
	return;
}

void Function_79(int iParam0) //Position: 0x3530 / 13616
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_80(int iParam0) //Position: 0x354D / 13645
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

bool Function_81(var uParam0, int iParam1) //Position: 0x3560 / 13664
{
	return (uParam0 && iParam1) == 0;
}

void Function_82(int iParam0) //Position: 0x356D / 13677
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (!Function_21(StackVal, 524288))
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
			bVar1 = Function_83(iVar0 * 60);
			ADD_TIME(&Global_17483[iParam075] + 264, 0, false, bVar1, 0);
			Global_16876[iParam06] = Global_17483[iParam075].f_264;
		}
	}
	return;
}

int Function_83(int iParam0) //Position: 0x3611 / 13841
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_84(int iParam0) //Position: 0x3627 / 13863
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
	Function_85(&Var0 + 80[Var0.f_763], &(Global_16876[iParam06]), iParam0);
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

void Function_85(var uParam0, var uParam1, int iParam2) //Position: 0x36C5 / 14021
{
	uParam0->f_4 = iParam2;
	*uParam0 = uParam1->f_12;
	uParam0->f_8 = 1;
	return;
}

void Function_86(int iParam0, int iParam1) //Position: 0x36DD / 14045
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
			Function_87(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_87(int iParam0) //Position: 0x375F / 14175
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

void Function_88(int iParam0) //Position: 0x37AD / 14253
{
	Global_12976.f_76 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 76, 0, false, (iParam0 + Function_83(900)), 0);
	return;
}

void Function_89(var uParam0) //Position: 0x37CF / 14287
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, false, (uParam0 + Function_83(200)), 0);
	return;
}

vector3 Function_90() //Position: 0x37F0 / 14320
{
	return 0.0f, 0.0f, 0.0f;
}

var Function_91(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, vector3 vParam5, vector3 vParam8) //Position: 0x37F9 / 14329
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		LOG_ERROR("Layout is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_92(bParam2))
	{
		LOG_ERROR("riderTypeName is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_92(bParam4))
	{
		bParam4 = 976;
	}
	bVar1 = CREATE_ACTOR_IN_LAYOUT(bParam0, bParam3, bParam4, vParam5, vParam8);
	if (!IS_ACTOR_VALID(bVar1))
	{
		bVar0 = bVar1;
		return "";
	}
	bVar0 = CREATE_ACTOR_IN_LAYOUT(bParam0, bParam1, bParam2, vParam5, vParam8);
	if (!IS_ACTOR_VALID(bVar1))
	{
		bVar0 = bVar1;
		return "";
	}
	if (!IS_ACTOR_VALID(bVar0))
	{
		DESTROY_ACTOR(bVar1);
		return "";
	}
	ACCESSORIZE_HORSE(bVar1, 3);
	ACTOR_MOUNT_ACTOR(bVar0, bVar1);
	return bVar0;
}

bool Function_92(bool bParam0) //Position: 0x391E / 14622
{
	if (bParam0 > 0 || bParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

bool Function_93(int iParam0) //Position: 0x3935 / 14645
{
	if (*iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int Function_94(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x3945 / 14661
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	struct<6> Var10;
	bool bVar16;
	bool bVar17;
	
	iVar0 = 0;
	if (!SQUAD_IS_VALID(StackVal) && !(((*iParam0 != 0 || *iParam0 != 18) || *iParam0 != 16) || *iParam0 != 17))
	{
		*iParam0 = 0;
		return 4;
	}
	switch (*iParam0)
	{
		case 0x00000000:
			iVar0 = 2;
			break;
		
		case 0x00000009:
			iVar0 = 2;
			break;
		
		case 0x0000000A:
			iVar0 = 2;
			break;
		
		case 0x0000000C:
			iVar0 = 2;
			break;
		
		case 0x0000000D:
			iVar0 = 2;
			break;
		
		case 0x00000010:
			iVar0 = 2;
			break;
		
		case 0x00000011:
			iVar0 = 2;
			break;
		
		case 0x00000001:
			Function_134(iParam0 + 24);
			vVar1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_134(iParam0 + 24), *(iParam0 + 168), StackVal) };
			Function_134(iParam0 + 24);
			vVar4 = { StackVal, StackVal, Function_134(iParam0 + 24) };
			Var10 = { StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 24) };
			*(iParam0 + 24) = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_132(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, Var10, iParam0->f_152, vVar1) };
			if (Function_131(iParam0 + 24))
			{
				*iParam0 = 16;
				return 3;
			}
			Function_134(iParam0 + 24);
			*(iParam0 + 168) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar4, Function_134(iParam0 + 24), StackVal) };
			*(iParam0 + 168) = { 0.0f, UNK_0x9C40E671(iParam0 + 168), 0.0f };
			if (bParam1)
			{
				Function_123(iParam0, 0);
			}
			*iParam0 = 2;
			return 1;
			break;
		
		case 0x00000002:
			bVar17 = false;
			while (StackVal <= SQUAD_GET_SIZE(bVar17))
			{
				TASK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(StackVal, bVar17));
				bVar17++;
			}
			if (Function_116(iParam0, bParam1, bParam3))
			{
				*iParam0 = 7;
			}
			else
			{
				return 6;
			}
			break;
		
		case 0x00000003:
			if (!SQUAD_IS_VALID(StackVal))
			{
				*iParam0 = 16;
				return 4;
			}
			if (!IS_ACTOR_VALID(Function_115(StackVal)))
			{
				*iParam0 = 16;
				return 5;
			}
			GET_POSITION(Function_115(StackVal), &vVar4);
			*(iParam0 + 24) = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_114(StackVal, StackVal, vVar4) };
			GET_ACTOR_VELOCITY(Function_115(StackVal), &vVar1);
			GET_POSITION(Function_115(StackVal), &vVar7);
			if (Function_131(iParam0 + 24))
			{
				*(iParam0 + 24) = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_112(Function_115(StackVal)) };
				return 7;
			}
			if (Function_116(iParam0, bParam1, bParam3))
			{
				*iParam0 = 7;
			}
			else
			{
				return 6;
			}
			break;
		
		case 0x00000006:
			iParam2 = iParam2;
			if (Function_116(iParam0, bParam1, bParam3))
			{
				*iParam0 = 7;
			}
			else
			{
				return 6;
			}
			if (!Function_104(iParam0))
			{
				*iParam0 = 9;
				return 7;
			}
			if (!Function_116(iParam0, bParam1, bParam3))
			{
				*iParam0 = 16;
				return 6;
			}
			*iParam0 = 7;
		
		case 0x00000008:
			break;
		
		case 0x00000007:
			if (!Function_99(iParam0))
			{
				*iParam0 = 6;
				return 0;
			}
			if (bParam1)
			{
				if (Function_97(iParam0))
				{
					bVar16 = true;
				}
				if (Function_96(StackVal))
				{
					bVar16 = true;
				}
				if (iParam0->f_96 && iParam0->f_72 < 2)
				{
					bVar16 = true;
				}
				if (Global_3403 && iParam0->f_72 == 3)
				{
					bVar16 = true;
				}
				if (bVar16)
				{
					Function_123(iParam0, 0);
				}
			}
			GET_POSITION(Function_115(StackVal), &vVar7);
			if (iParam0->f_88)
			{
				if (!Function_32(StackVal, StackVal, *(iParam0 + 136)))
				{
					if (Function_95(StackVal, StackVal, StackVal, StackVal, vVar7, *(iParam0 + 136)) > iParam0->f_128)
					{
						SQUAD_GOALS_CLEAR(StackVal);
						TASK_GO_TO_COORD(Function_115(StackVal), iParam0 + 136, true);
						*iParam0 = 8;
						iParam0->f_88 = 0;
						return 8;
					}
				}
			}
			break;
	}
	return iVar0;
}

float Function_95(vector3 vParam0, vector3 vParam3) //Position: 0x3C60 / 15456
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

bool Function_96(bool bParam0) //Position: 0x3C7D / 15485
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		if (AI_GET_TASK_RETREAT_FLAG(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0)))
		{
			return 1;
		}
		bVar0++;
	}
	return 0;
}

bool Function_97(int iParam0) //Position: 0x3CA9 / 15529
{
	if (!IS_VOLUME_VALID(Global_28842.f_28))
	{
		return 0;
	}
	if (StackVal || (StackVal || StackVal != 2 != 4) != 1)
	{
		if (Function_98(StackVal, Global_28842.f_28))
		{
			if (!iParam0->f_96)
			{
				iParam0->f_96 = 1;
				return 1;
			}
		}
		if (iParam0->f_96)
		{
			iParam0->f_96 = 0;
			return 1;
		}
	}
	if (iParam0->f_96)
	{
		iParam0->f_96 = 0;
		return 1;
	}
	return 0;
}

bool Function_98(bool bParam0, bool bParam1) //Position: 0x3D18 / 15640
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		if (Global_3380)
		{
		}
		return 0;
	}
	if (!IS_VOLUME_VALID(bParam1))
	{
		if (Global_3380)
		{
		}
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (!IS_ACTOR_VEHICLE(bVar1))
			{
				if (IS_ACTOR_ALIVE(bVar1))
				{
					if (IS_ACTOR_IN_VOLUME(bVar1, bParam1))
					{
						return 1;
					}
				}
			}
			if (IS_ACTOR_IN_VOLUME(bVar1, bParam1))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_99(int iParam0) //Position: 0x3D9A / 15770
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	
	if (DECOR_CHECK_EXIST(StackVal, "coachService"))
	{
		return 1;
	}
	Function_134(iParam0 + 24);
	bVar6 = Function_103(StackVal, StackVal, StackVal, Function_134(iParam0 + 24));
	GET_POSITION(bVar6, &vVar0);
	Function_134(iParam0 + 24);
	vVar3 = { StackVal, StackVal, Function_134(iParam0 + 24) };
	if (iParam0->f_156 > 1.0f)
	{
		iParam0->f_156 = Function_102(StackVal, iParam0->f_72);
	}
	if (StackVal > Function_101(VDIST(vVar3, vVar0), Function_102(iParam0->f_156, iParam0->f_72)))
	{
		*iParam0 = 6;
		return 0;
	}
	if (Function_100())
	{
		if (SQUAD_GOAL_GET_STATUS(StackVal, iParam0->f_12) != 3)
		{
			SQUAD_GOALS_CLEAR(StackVal);
			iParam0->f_12 = "";
			return 0;
		}
	}
	return 1;
}

bool Function_100() //Position: 0x3E44 / 15940
{
	return NET_IS_MANAGER_INITIALIZED();
}

float Function_101(bool bParam0, int iParam1) //Position: 0x3E4D / 15949
{
	if (bParam0 > iParam1)
	{
		return bParam0;
	}
	return iParam1;
}

int Function_102(bool bParam0, int iParam1) //Position: 0x3E60 / 15968
{
	float fVar0;
	
	fVar0 = 5.0f;
	if (StackVal == 1)
	{
		fVar0 = 5.0f;
	}
	switch (iParam1)
	{
		case 0x00000001:
		case 0x00000003:
			switch (bParam0)
			{
				case 0x00000005:
				case 0x00000001:
					return (15.0f * fVar0);
					break;
				
				case 0x00000002:
					return (25.0f * fVar0);
					break;
				
				case 0x00000004:
					return (45.0f * fVar0);
					break;
				
				case 0x00000003:
					return (45.0f * fVar0);
					break;
			}
			break;
		
		case 0x00000002:
			switch (bParam0)
			{
				case 0x00000005:
				case 0x00000001:
					return (20.0f * fVar0);
					break;
				
				case 0x00000002:
					return (35.0f * fVar0);
					break;
				
				case 0x00000004:
					return (60.0f * fVar0);
					break;
				
				case 0x00000003:
					return (60.0f * fVar0);
					break;
			}
			break;
		
		default:
			LOG_ERROR("Unknown Traffic Type in FlagBuffer");
			break;
	}
	return (45.0f * fVar0);
}

var Function_103(vector3 vParam0, bool bParam3) //Position: 0x3F71 / 16241
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	
	bVar0 = false;
	bVar1 = 4294967295;
	bVar2 = -1.0f;
	if (Function_32(StackVal, StackVal, vParam0))
	{
		LOG_WARNING("Invalid test vector passed to GET_CLOSEST_SQUAD_MEMBER_TO_VECTOR");
		return "";
	}
	if (!SQUAD_IS_VALID(bParam3))
	{
		LOG_WARNING("Invalid squad passed to GET_CLOSEST_SQUAD_MEMBER_TO_VECTOR");
		return "";
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam3) - 1))
	{
		bVar3 = GET_OBJECT_FROM_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(bParam3, bVar0));
		GET_OBJECT_POSITION(bVar3, &vVar4);
		if (VDIST(vParam0, vVar4) > bVar2 || bVar2 > 0.0f)
		{
			bVar2 = VDIST(vParam0, vVar4);
			bVar1 = bVar0;
		}
		bVar0++;
	}
	if (bVar1 >= 4294967295)
	{
		return SQUAD_GET_ACTOR_BY_INDEX(bParam3, bVar1);
	}
	LOG_WARNING("Couldn't find a closest sqaud member from 'Them' to 'Me' in GET_CLOSEST_SQUAD_MEMBER_TO_VECTOR!");
	return "";
}

bool Function_104(bool bParam0) //Position: 0x4115 / 16661
{
	var uVar0;
	bool bVar3;
	
	if (DECOR_CHECK_EXIST(StackVal, "wasstickup"))
	{
		DECOR_REMOVE(StackVal, "wasstickup");
		return 1;
	}
	Function_134(bParam0 + 24);
	bVar3 = Function_103(StackVal, StackVal, StackVal, Function_134(bParam0 + 24));
	GET_POSITION(bVar3, &uVar0);
	*(bParam0 + 24) = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_105(StackVal, StackVal, StackVal, StackVal, StackVal, bParam0, *(bParam0 + 24), bParam0->f_152, 2,5f, 0) };
	if (Function_131(bParam0 + 24))
	{
		return 0;
	}
	return 1;
}

struct<24> Function_105(int iParam0, struct<6> Param1, bool bParam7, float fParam8, var uParam9) //Position: 0x4188 / 16776
{
	struct<6> Var0;
	vector3 vVar6;
	bool bVar9;
	bool bVar10;
	var uVar11;
	float fVar12;
	float fVar13;
	int iVar14;
	var uVar15;
	vector3 vVar18;
	vector3 vVar21;
	float fVar24;
	struct<6> Var25;
	bool bVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	struct<17> Var35;
	struct<6> Var57;
	
	Function_134(&Param1);
	vVar6 = { StackVal, StackVal, Function_134(&Param1) };
	bVar9 = false;
	uVar11 = Function_111(StackVal, iParam0->f_164);
	fVar12 = 0.0f;
	if (IS_OBJECTSET_VALID(iParam0->f_48))
	{
		fVar13 = 5.0f;
	}
	else
	{
		fVar13 = (fParam8 * 2.0f);
	}
	iVar14 = 0;
	GET_OBJECT_POSITION(Function_115(StackVal), &uVar15);
	vVar18 = { 0.0f, 0.0f, -1.0f };
	if (!IS_OBJECTSET_VALID(iParam0->f_160))
	{
		iParam0->f_160 = CREATE_OBJECTSET_IN_LAYOUT(Function_189(), Global_28841, 36, 1);
	}
	bVar32 = 4294967295;
	while (!bVar10)
	{
		bVar31 = START_CURVE_QUERY(Global_28841, vVar6, uVar11, fVar12, fVar13, Function_101(Function_110(iParam0), ((fVar13 - fVar12) / 2.0f)), 0);
		if (IS_OBJECT_VALID(bParam7))
		{
			REMOVE_CURVE_FROM_CURVE_QUERY_USING_CURVE(bVar31, bParam7);
			if (!IS_OBJECT_IN_OBJECTSET(bParam7, iParam0->f_160))
			{
				ADD_OBJECT_TO_OBJECTSET(bParam7, iParam0->f_160);
			}
		}
		if (IS_OBJECTSET_VALID(iParam0->f_48))
		{
			bVar9 = false;
			while (bVar9 <= GET_NUM_CURVES_IN_CURVE_QUERY(bVar31))
			{
				bVar33 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(bVar31, bVar9);
				if (!IS_OBJECT_IN_OBJECTSET(bVar33, iParam0->f_48))
				{
					REMOVE_CURVE_FROM_CURVE_QUERY_USING_CURVE(bVar31, bVar33);
					RELEASE_CURVE(bVar33);
				}
				bVar9++;
			}
		}
		else
		{
			bVar9 = false;
			while (bVar9 <= GET_NUM_CURVES_IN_CURVE_QUERY(bVar31))
			{
				bVar33 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(bVar31, bVar9);
				if (IS_OBJECT_IN_OBJECTSET(bVar33, iParam0->f_160))
				{
					REMOVE_CURVE_FROM_CURVE_QUERY_USING_CURVE(bVar31, bVar33);
					RELEASE_CURVE(bVar33);
				}
				bVar9++;
			}
		}
		if (!GET_NUM_CURVES_IN_CURVE_QUERY(bVar31) < 0)
		{
			REMOVE_OBJECT_FROM_OBJECTSET(bParam7, iParam0->f_160);
			UNK_0xDF93BD7C(bVar31);
			Function_3(iParam0->f_160);
			ADD_OBJECT_TO_OBJECTSET(bParam7, iParam0->f_160);
			if (uParam9 || iVar14 > 5)
			{
				fVar12 = fVar13;
				fVar13 = (fVar13 + fParam8);
				iVar14++;
			}
			else
			{
				return StackVal, StackVal, StackVal, StackVal, StackVal, Function_2();
			}
		}
		fVar34 = -100000.0f;
		bVar32 = 4294967295;
		bVar9 = false;
		if (IS_OBJECTSET_VALID(iParam0->f_48))
		{
			bVar9 = false;
			while (bVar9 <= GET_NUM_CURVES_IN_CURVE_QUERY(bVar31))
			{
				bVar33 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(bVar31, bVar9);
				if (IS_OBJECT_IN_OBJECTSET(bVar33, iParam0->f_48))
				{
					GET_POINT_FROM_CURVE_QUERY(bVar31, bVar9, &Var25);
					Function_134(&Var25);
					Function_134(&Param1);
					vVar21 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_134(&Param1), Function_134(&Var25), StackVal) };
					fVar24 = VDOT(&vVar21, &vVar18);
					if (fVar24 < fVar34)
					{
						fVar34 = fVar24;
						bVar32 = bVar9;
					}
				}
				RELEASE_CURVE(bVar33);
				bVar9++;
			}
		}
		else if (Function_32(StackVal, StackVal, vVar18))
		{
			bVar32 = ROUND((TO_FLOAT(RAND_INT_RANGE(false, (GET_NUM_CURVES_IN_CURVE_QUERY(bVar31) - 1000))) / 1000.0f));
		}
		else if (Global_3386)
		{
			Function_134(&Param1);
			vVar18 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_134(&Param1), Global_34574, StackVal) };
			VNORMALIZE(&vVar18);
			Var35 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_2() };
			Var41 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_2() };
			bVar9 = false;
			while (bVar9 <= GET_NUM_CURVES_IN_CURVE_QUERY(bVar31))
			{
				bVar47 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(bVar31, bVar9);
				GET_CURVE_POINT(bVar47, 1.0f, &Var35, 0);
				GET_CURVE_POINT(bVar47, 0.0f, &Var41, 0);
				Function_134(&Param1);
				Function_134(&Var35);
				Function_134(&Param1);
				Function_134(&Var41);
				if (StackVal > Function_95(StackVal, StackVal, StackVal, Function_95(StackVal, StackVal, StackVal, StackVal, Function_134(&Param1), Function_134(&Var35)), Function_134(&Param1), Function_134(&Var41)))
				{
					UNK_0x04D89A35(bVar47, 1.0f, 0.0f, -5.0f, &Var25);
				}
				else
				{
					UNK_0x04D89A35(bVar47, 0.0f, 0.0f, 5.0f, &Var25);
				}
				if (Global_30842[12])
				{
					Function_109(StackVal, StackVal, StackVal, StackVal, StackVal, Var25);
					PRINTNL();
				}
				Function_134(&Var25);
				Function_134(&Param1);
				vVar21 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_134(&Param1), Function_134(&Var25), StackVal) };
				VNORMALIZE(&vVar21);
				fVar24 = VDOT(&vVar21, &vVar18);
				fVar24 = (fVar24 * RAND_FLOAT_GAUSSIAN(0,5f, 0,5f));
				if (fVar24 < fVar34)
				{
					fVar34 = fVar24;
					bVar32 = bVar9;
				}
				RELEASE_CURVE(bVar47);
				bVar9++;
			}
		}
		else
		{
			Var35 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_2() };
			Var41 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_2() };
			Function_134(&Param1);
			vVar18 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_134(&Param1), Global_34574, StackVal) };
			VNORMALIZE(&vVar18);
			bVar9 = false;
			while (bVar9 <= GET_NUM_CURVES_IN_CURVE_QUERY(bVar31))
			{
				bVar47 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(bVar31, bVar9);
				GET_CURVE_POINT(bVar47, 1.0f, &Var35, 0);
				GET_CURVE_POINT(bVar47, 0.0f, &Var41, 0);
				Function_134(&Param1);
				Function_134(&Var35);
				Function_134(&Param1);
				Function_134(&Var41);
				if (StackVal > Function_95(StackVal, StackVal, StackVal, Function_95(StackVal, StackVal, StackVal, StackVal, Function_134(&Param1), Function_134(&Var35)), Function_134(&Param1), Function_134(&Var41)))
				{
					UNK_0x04D89A35(bVar47, 1.0f, Var35.f_16, 5.0f, &Var25);
				}
				else
				{
					UNK_0x04D89A35(bVar47, 0.0f, Var41.f_16, 5.0f, &Var25);
				}
				Function_134(&Var25);
				Function_134(&Param1);
				vVar21 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_134(&Param1), Function_134(&Var25), StackVal) };
				VNORMALIZE(&vVar21);
				fVar24 = VDOT(&vVar21, &vVar18);
				fVar24 = (fVar24 * RAND_FLOAT_GAUSSIAN(0,25f, 1.0f));
				if (fVar24 < fVar34)
				{
					fVar34 = fVar24;
					bVar32 = bVar9;
				}
				RELEASE_CURVE(bVar47);
				bVar9++;
			}
		}
		iVar14 = 0;
		if (bVar32 == 4294967295)
		{
			UNK_0xDF93BD7C(bVar31);
			if (uParam9 || iVar14 > 5)
			{
				fVar12 = fVar13;
				fVar13 = (fVar13 + fParam8);
				iVar14++;
			}
			else
			{
				return StackVal, StackVal, StackVal, StackVal, StackVal, Function_2();
			}
		}
		bVar10 = true;
	}
	iParam0->f_152 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(bVar31, bVar32);
	iParam0->f_156 = CURVE_CALCULATE_DISTANCE_BY_FORCED_COMPONENT_SUBDIVISION_BOUNDS(iParam0->f_152, 0.0f, 1.0f, 10);
	GET_POINT_FROM_CURVE_QUERY(bVar31, bVar32, &Var0);
	Function_134(&Var0);
	vVar48 = { StackVal, StackVal, Function_134(&Var0) };
	GET_CURVE_POINT(iParam0->f_152, 1.0f, &Var51, 0);
	GET_CURVE_POINT(iParam0->f_152, 0.0f, &Var57, 0);
	if (StackVal < Function_108(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_108(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var51, Param1), Var57, Param1))
	{
		iParam0->f_148 = 1;
		GET_CURVE_POINT(iParam0->f_152, 1.0f, &Var0, 0);
	}
	else
	{
		iParam0->f_148 = 4294967295;
		GET_CURVE_POINT(iParam0->f_152, 0.0f, &Var0, 0);
	}
	if (Global_30900[1])
	{
		bVar9 = false;
		bVar9 = false;
		while (bVar9 <= GET_NUM_POINTS_IN_CURVE_QUERY(bVar31))
		{
			GET_POINT_FROM_CURVE_QUERY(bVar31, bVar9, &Var25);
			Function_134(&Var25);
			vVar48 = { StackVal, StackVal, Function_134(&Var25) };
			bVar9++;
		}
		Function_134(&Var0);
		vVar48 = { StackVal, StackVal, Function_134(&Var0) };
	}
	Function_106(iParam0);
	UNK_0xDF93BD7C(bVar31);
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

void Function_106(int iParam0) //Position: 0x467E / 18046
{
	if (!Function_93(iParam0))
	{
		return;
	}
	if (!Function_107(StackVal))
	{
		return;
	}
	if (!SQUAD_IS_VALID(StackVal))
	{
		return;
	}
	if (!IS_OBJECT_VALID(iParam0->f_152))
	{
		return;
	}
	if (!iParam0->f_20 < 0)
	{
		return;
	}
	if (!GET_CURVE_TYPE(iParam0->f_152) != 4 && !GET_CURVE_TYPE(iParam0->f_152) != 5)
	{
		LOG_ERROR("Adding a traffic node with a bad pathtype. I thought we filtered this?");
		return;
	}
	return;
}

bool Function_107(bool bParam0) //Position: 0x4722 / 18210
{
	if (bParam0 > 0 || bParam0 < 3)
	{
		return 0;
	}
	return 1;
}

float Function_108(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11) //Position: 0x4737 / 18231
{
	vector3 vVar0;
	vector3 vVar3;
	
	Function_134(&bParam0);
	vVar0 = { StackVal, StackVal, Function_134(&bParam0) };
	Function_134(&bParam6);
	vVar3 = { StackVal, StackVal, Function_134(&bParam6) };
	return VDIST(vVar0, vVar3);
}

void Function_109(struct<17> Param0) //Position: 0x475C / 18268
{
	Function_134(&Param0);
	PRINTVECTOR(Function_134(&Param0));
	PRINTSTRING(": t=");
	PRINTFLOAT(Param0.f_12);
	PRINTSTRING(" slope=");
	PRINTFLOAT(Param0.f_16);
}

var Function_110(int iParam0) //Position: 0x4791 / 18321
{
	if (IS_OBJECTSET_VALID(iParam0->f_48))
	{
		return 5.0f;
	}
	switch (StackVal)
	{
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
			switch (iParam0->f_72)
			{
				case 0x00000005:
					return 2,5f;
					break;
				
				case 0x00000001:
					return 3,75f;
					break;
				
				case 0x00000002:
					return 6,25f;
					break;
				
				case 0x00000004:
					return 8,75f;
					break;
				
				case 0x00000003:
					return 12,5f;
					break;
			}
			break;
		
		default:
			LOG_ERROR("Unknown Traffic Type in NextTravelFreq");
			break;
	}
	return 6,25f;
}

int Function_111(int iParam0, int iParam1) //Position: 0x4849 / 18505
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

struct<24> Function_112(bool bParam0) //Position: 0x4879 / 18553
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = { 0.0f, -50.0f, 0.0f };
	GET_OBJECT_RELATIVE_POSITION(GET_OBJECT_FROM_ACTOR(bParam0), vVar0, &vVar3);
	if (!Function_113(&vVar3, 50.0f, &vVar0, 10))
	{
		vVar0 = { StackVal, StackVal, vVar3 };
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, Function_114(StackVal, StackVal, vVar0);
}

bool Function_113(int iParam0, float fParam1, int iParam2, int iParam3) //Position: 0x48BC / 18620
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
		if (!Function_32(StackVal, StackVal, *iParam2))
		{
			return 1;
		}
	}
	while (!IS_EXITFLAG_SET() && iVar3 > iParam3)
	{
		*iParam0 = (*iParam0 + 0,01f);
		iParam0->f_8 = (StackVal + 0,01f);
		if (FIND_GROUND_INTERSECTION(iParam0, fParam1, iParam2, &uVar0))
		{
			if (!Function_32(StackVal, StackVal, *iParam2))
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

struct<24> Function_114(vector3 vParam0) //Position: 0x49EE / 18926
{
	struct<6> Var0;
	
	Var0 = vParam0.x;
	Var0.f_4 = vParam0.y;
	Var0.f_8 = vParam0.z;
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

var Function_115(bool bParam0) //Position: 0x4A0E / 18958
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

bool Function_116(int iParam0, bool bParam1, bool bParam2) //Position: 0x4A54 / 19028
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (!Function_93(iParam0))
	{
		Function_121(iParam0, 1);
		return 0;
	}
	if (DECOR_CHECK_EXIST(StackVal, "coachService"))
	{
		return 1;
	}
	AI_CLEAR_NAV_MATERIAL_USAGE(Function_115(StackVal));
	if (!SQUAD_GOAL_IS_VALID(iParam0->f_12))
	{
		SQUAD_GOALS_CLEAR(StackVal);
	}
	Function_134(iParam0 + 24);
	vVar3 = { StackVal, StackVal, Function_134(iParam0 + 24) };
	vVar0 = { StackVal, StackVal, vVar3 };
	Function_120(StackVal, StackVal, vVar0, iParam0 + 24);
	if (bParam1)
	{
		iParam0->f_76 = Function_119(StackVal, iParam0->f_76, iParam0->f_80);
		if (!iParam0->f_96 || iParam0->f_72 != 4294967295)
		{
			iParam0->f_72 = iParam0->f_76;
		}
	}
	if (bParam2)
	{
		AI_SET_NAV_MATERIAL_USAGE(StackVal, Function_118(Function_115(StackVal)), 0);
	}
	Function_117(iParam0);
	return 1;
}

void Function_117(int iParam0) //Position: 0x4B0C / 19212
{
	int iVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(StackVal))
	{
		return;
	}
	iVar1 = 2;
	if (iParam0->f_148 == 4294967295)
	{
		iVar0 = 1;
	}
	if (iParam0->f_108)
	{
		iVar1 = 1;
	}
	if (iParam0->f_116)
	{
		if (!iParam0->f_96 && GET_CURVE_TYPE(iParam0->f_152) == 5)
		{
			iParam0->f_116 = 0;
		}
	}
	else
	{
		if (GET_CURVE_TYPE(iParam0->f_152) == 5)
		{
			iParam0->f_116 = 1;
		}
		if (iParam0->f_96)
		{
			iParam0->f_116 = 1;
		}
	}
	if (!SQUAD_GOAL_IS_VALID(iParam0->f_12))
	{
		iParam0->f_12 = SQUAD_GOAL_ADD_FOLLOW_TRAFFIC_CURVE(StackVal, 0, 4294967295, iParam0->f_152, iParam0->f_72, iVar0, iVar1);
		if (iParam0->f_116)
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(StackVal, iParam0->f_12, 2, 0);
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(StackVal, iParam0->f_12, 1, 1);
		}
		else
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(StackVal, iParam0->f_12, 2, 1);
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(StackVal, iParam0->f_12, 1, 0);
		}
		if (iParam0->f_84 != 2)
		{
			if (!iParam0->f_104)
			{
				iParam0->f_84 = 2;
			}
			else
			{
				SQUAD_FOLLOW_TRAFFIC_CURVE_SET_TASK_PRIORITY(StackVal, iParam0->f_12, iParam0->f_84);
			}
		}
		if (StackVal && !iParam0->f_112 != 2)
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(StackVal, iParam0->f_12, 4, 1);
		}
		else
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(StackVal, iParam0->f_12, 4, 0);
		}
		SQUAD_GOAL_ADD_FACTION_STATUS_WITHIN_GOAL(StackVal, 1, 0);
		SQUAD_GOAL_ADD_SHARE_PERCEPTION(StackVal, 1);
	}
	else
	{
		if (!SQUAD_FOLLOW_TRAFFIC_CURVE_IS_CURVE_ALREADY_IN_LIST(StackVal, iParam0->f_12, iParam0->f_152, iVar0, 0))
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_ENQUEUE_CURVE(StackVal, iParam0->f_12, iParam0->f_152, iVar0);
		}
		if (iParam0->f_116)
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(StackVal, iParam0->f_12, 2, 0);
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(StackVal, iParam0->f_12, 1, 1);
		}
		else
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(StackVal, iParam0->f_12, 2, 1);
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(StackVal, iParam0->f_12, 1, 0);
		}
	}
	return;
}

int Function_118(int iParam0) //Position: 0x4CA3 / 19619
{
	switch (iParam0)
	{
		case 0x00000002:
			return 64;
			break;
		
		case 0x00000001:
			return 96;
			break;
	}
	return 96;
}

int Function_119(int iParam0, int iParam1, int iParam2) //Position: 0x4CCA / 19658
{
	bool bVar0;
	
	if (iParam2 != 0)
	{
		return iParam2;
	}
	bVar0 = RAND_INT_RANGE(true, 10000);
	iParam1 = iParam1;
	switch (iParam0)
	{
		case 0x00000001:
			if (bVar0 <= 5000)
			{
				return 2;
			}
			if (bVar0 <= 4000)
			{
				return 4;
			}
			return 3;
			break;
		
		case 0x00000003:
			if (bVar0 <= 5000)
			{
				return 1;
			}
			return 2;
			break;
		
		case 0x00000002:
			if (bVar0 <= 7500)
			{
				return 2;
			}
			return 4;
			break;
		
		default:
			LOG_ERROR("Unknown Traffic Type in WildSpeed");
			break;
	}
	return 2;
}

void Function_120(vector3 vParam0) //Position: 0x4D6D / 19821
{
	*uParam3 = vParam0.x;
	uParam3->f_4 = vParam0.y;
	uParam3->f_8 = vParam0.z;
}

void Function_121(int iParam0, int iParam1) //Position: 0x4D8A / 19850
{
	struct<5> Var0;
	char* cVar6[16];
	struct<13> Var10;
	
	if (!Global_30900[1] && iParam1)
	{
		return;
	}
	if (!Function_93(iParam0))
	{
		return;
	}
	strcpy(&cVar6, "TRAFFIC NODE", 16);
	switch (iParam0->f_72)
	{
		case 0x00000005:
			Var10 = 1.0f;
			Var10.f_4 = 0.0f;
			Var10.f_8 = 0.0f;
			Var10.f_12 = 1.0f;
			break;
		
		case 0x00000001:
			Var10 = 0,9f;
			Var10.f_4 = 0,55f;
			Var10.f_8 = 0,1f;
			Var10.f_12 = 1.0f;
			break;
		
		case 0x00000002:
			Var10 = 0,9f;
			Var10.f_4 = 0,9f;
			Var10.f_8 = 0,1f;
			Var10.f_12 = 1.0f;
			break;
		
		case 0x00000004:
			Var10 = 0,2f;
			Var10.f_4 = 0,8f;
			Var10.f_8 = 0,1f;
			Var10.f_12 = 1.0f;
			break;
		
		case 0x00000003:
			Var10 = 0,1f;
			Var10.f_4 = 0,1f;
			Var10.f_8 = 1.0f;
			Var10.f_12 = 1.0f;
			break;
	}
	GET_POSITION(Function_115(StackVal), &Var0);
	vVar14 = { 0.0f, 1.0f, 0.0f };
	if (Function_100())
	{
		fVar17 = 0.0f;
		if (!Function_122(iParam0, &fVar17, 0))
		{
			if (fVar17 < 0.0f)
			{
				vVar14 = { 1.0f, 1.0f, 0.0f };
			}
			else
			{
				vVar14 = { 0.0f, 0.0f, 1.0f };
			}
		}
	}
	Var0.f_4 = (StackVal + 2,5f);
	Var0.f_4 = (StackVal + 1.0f);
	Var0.f_4 = (StackVal + 0,5f);
	switch (StackVal)
	{
		case 0x00000001:
			break;
		
		case 0x00000002:
			break;
	}
	Function_134(iParam0 + 24);
	vVar3 = { StackVal, StackVal, Function_134(iParam0 + 24) };
	return;
}

bool Function_122(int iParam0, var uParam1, bool bParam2) //Position: 0x4F03 / 20227
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	void fVar3;
	int iVar4;
	bool bVar5;
	
	if (StackVal || !SQUAD_IS_VALID(!Function_93(iParam0)))
	{
		*uParam1 = 0.0f;
		return 0;
	}
	bVar2 = true;
	fVar3 = SQUAD_GET_SIZE(StackVal);
	iVar4 = 0;
	bVar1 = false;
	while (bVar1 <= fVar3)
	{
		bVar0 = SQUAD_GET_ACTOR_BY_INDEX(StackVal, bVar1);
		if (IS_ACTOR_VALID(bVar0))
		{
			if (!NET_IS_OBJECT_LOCAL(bVar0))
			{
				iVar4++;
				bVar2 = false;
			}
		}
		bVar1++;
	}
	bVar5 = false;
	if (!bParam2)
	{
		bVar1 = false;
		if (IS_OBJECTSET_VALID(iParam0->f_180))
		{
			bVar5 = GET_OBJECTSET_SIZE(iParam0->f_180);
			bVar1 = false;
			while (bVar1 <= bVar5)
			{
				bVar0 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, iParam0->f_180));
				if (IS_ACTOR_VALID(bVar0))
				{
					if (!NET_IS_OBJECT_LOCAL(bVar0))
					{
						iVar4++;
						bVar2 = false;
					}
				}
				bVar1++;
			}
		}
	}
	if (bVar2)
	{
		*uParam1 = 1.0f;
	}
	else if (iVar4 <= (fVar3 + bVar5))
	{
		*uParam1 = 0,5f;
	}
	else
	{
		*uParam1 = 0.0f;
	}
	return bVar2;
}

void Function_123(int iParam0, int iParam1) //Position: 0x4FE9 / 20457
{
	Function_130(StackVal);
	if (Global_28842.f_80 != 0)
	{
		iParam0->f_72 = Global_28842.f_80;
		Function_129(StackVal, iParam0->f_72);
	}
	else if (Global_3403 || iParam1)
	{
		if (StackVal == 2)
		{
			iParam0->f_72 = 4;
		}
		else
		{
			iParam0->f_72 = 3;
		}
		Function_129(StackVal, iParam0->f_72);
		if (StackVal == 2)
		{
			Function_128(StackVal, 1);
		}
	}
	else if (StackVal || Function_96((Global_3404 || Function_126(131072))))
	{
		iParam0->f_72 = 4;
		Function_129(StackVal, iParam0->f_72);
		if (StackVal == 2)
		{
			Function_128(StackVal, 1);
		}
	}
	else if (iParam0->f_92)
	{
		iParam0->f_72 = Function_125(StackVal, iParam0->f_80);
		Function_129(StackVal, iParam0->f_72);
	}
	else if (iParam0->f_96)
	{
		iParam0->f_72 = Function_124(StackVal, iParam0->f_80);
		Function_129(StackVal, iParam0->f_72);
		if (StackVal == 2)
		{
			Function_128(StackVal, 0);
		}
	}
	else
	{
		iParam0->f_72 = iParam0->f_76;
		if (StackVal == 2)
		{
			Function_128(StackVal, 1);
		}
	}
	return;
}

int Function_124(bool bParam0, int iParam1) //Position: 0x50FB / 20731
{
	bool bVar0;
	
	if (iParam1 != 0)
	{
		return iParam1;
	}
	bVar0 = RAND_INT_RANGE(true, 10000);
	switch (bParam0)
	{
		case 0x00000001:
			if (bVar0 <= 9000)
			{
				return 1;
			}
			return 2;
			break;
		
		case 0x00000002:
			return 1;
			break;
		
		default:
			LOG_ERROR("Unknown Traffic Type in TownSpeed");
			break;
	}
	return 1;
}

int Function_125(int iParam0, bool bParam1) //Position: 0x5168 / 20840
{
	if (bParam1 != 0)
	{
		return bParam1;
	}
	switch (iParam0)
	{
		case 0x00000001:
		case 0x00000003:
			return 1;
			break;
		
		case 0x00000002:
			return 5;
			break;
		
		default:
			LOG_ERROR("Unknown Traffic Type in PlayerNearSpeed");
			break;
	}
	return 5;
}

int Function_126(int iParam0) //Position: 0x51CB / 20939
{
	return Function_127(&Global_28842, iParam0);
}

int Function_127(var uParam0, int iParam1) //Position: 0x51D9 / 20953
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_128(bool bParam0, int iParam1) //Position: 0x51F5 / 20981
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		AI_SET_NAV_ACTOR_AVOIDANCE_ALLOW_TURNS(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0), iParam1);
		bVar0++;
	}
	return;
}

void Function_129(bool bParam0, bool bParam1) //Position: 0x521D / 21021
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		TASK_OVERRIDE_SET_MOVETYPE(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0), bParam1);
		bVar0++;
	}
	return;
}

void Function_130(bool bParam0) //Position: 0x5245 / 21061
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		TASK_OVERRIDE_CLEAR_MOVETYPE(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0));
		bVar0++;
	}
	return;
}

bool Function_131(bool bParam0) //Position: 0x526B / 21099
{
	return ((((StackVal && (StackVal && *bParam0 != 0.0f != 0.0f) != 0.0f) && bParam0->f_12 != 0.0f) && bParam0->f_16 != 0.0f) && bParam0->f_20 != 4294967295);
}

struct<24> Function_132(int iParam0, struct<6> Param1, bool bParam7, vector3 vParam8) //Position: 0x5299 / 21145
{
	bool bVar0;
	bool bVar6;
	struct<6> Var12;
	
	if (!IS_OBJECT_VALID(bParam7))
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, Var12;
	}
	iParam0->f_148 = Function_133(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, bParam7, Param1, vParam8);
	if (iParam0->f_148 >= 0)
	{
		GET_CURVE_POINT(bParam7, 1.0f, &Var12, 0);
		UNK_0x19D652F9(bParam7, 1.0f, &Param1, &bVar0);
		Function_134(&bVar0);
		Function_134(&Param1);
		*(iParam0 + 168) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_134(&Param1), Function_134(&bVar0), StackVal) };
		*(iParam0 + 168) = { 0.0f, UNK_0x9C40E671(iParam0 + 168), 0.0f };
	}
	else
	{
		GET_CURVE_POINT(bParam7, 0.0f, &Var12, 0);
		UNK_0x19D652F9(bParam7, -1.0f, &Param1, &bVar6);
		Function_134(&bVar6);
		Function_134(&Param1);
		*(iParam0 + 168) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_134(&Param1), Function_134(&bVar6), StackVal) };
		*(iParam0 + 168) = { 0.0f, UNK_0x9C40E671(iParam0 + 168), 0.0f };
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var12;
}

int Function_133(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9) //Position: 0x5337 / 21303
{
	bool bVar0;
	bool bVar6;
	vector3 vVar12;
	vector3 vVar15;
	float fVar18;
	float fVar19;
	
	UNK_0x19D652F9(bParam0, 1.0f, &bParam1, &bVar0);
	UNK_0x19D652F9(bParam0, -1.0f, &bParam1, &bVar6);
	Function_134(&bVar0);
	Function_134(&bParam1);
	vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_134(&bParam1), Function_134(&bVar0), StackVal) };
	fVar18 = VDOT(&uParam7, &vVar12);
	Function_134(&bVar6);
	Function_134(&bParam1);
	vVar15 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_134(&bParam1), Function_134(&bVar6), StackVal) };
	fVar19 = VDOT(&uParam7, &vVar15);
	if (fVar19 > fVar18)
	{
		return 1;
	}
	return 4294967295;
}

vector3 Function_134(bool bParam0) //Position: 0x5390 / 21392
{
	vector3 vVar0;
	
	vVar0.x = *bParam0;
	vVar0.f_4 = StackVal;
	vVar0.f_8 = StackVal;
	return StackVal, StackVal, vVar0;
}

void Function_135(int iParam0, vector3 vParam1, struct<5> Param4, var uParam9) //Position: 0x53AF / 21423
{
	*(iParam0 + 24) = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_114(StackVal, StackVal, vParam1) };
	(iParam0 + 24)->f_12 = Param4;
	(iParam0 + 24)->f_16 = StackVal;
	iParam0->f_152 = uParam7;
	iParam0->f_112 = uParam9;
	iParam0->f_116 = uParam8;
	Function_136(iParam0);
	iParam0->f_20 = SQUAD_GET_SIZE(StackVal);
	Function_106(iParam0);
}

void Function_136(var uParam0) //Position: 0x53FD / 21501
{
	struct<2> Var0;
	
	if (!SQUAD_IS_VALID(StackVal))
	{
		Function_137();
		Var0 = { StackVal, Function_137() };
		uParam0->f_8 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Global_28841, &Var0));
	}
	*uParam0 = 1;
	return;
}

struct<8> Function_137() //Position: 0x5428 / 21544
{
	char* cVar0[8];
	
	strcpy(&cVar0, "", 8);
	straddi(&cVar0, RAND_INT_RANGE(false, 9), 8);
	straddi(&cVar0, RAND_INT_RANGE(false, 9), 8);
	straddi(&cVar0, RAND_INT_RANGE(false, 9), 8);
	straddi(&cVar0, RAND_INT_RANGE(false, 9), 8);
	straddi(&cVar0, RAND_INT_RANGE(false, 9), 8);
	straddi(&cVar0, RAND_INT_RANGE(false, 9), 8);
	straddi(&cVar0, RAND_INT_RANGE(false, 9), 8);
	return StackVal, cVar0;
}

var Function_138(vector3 vParam0, bool bParam3) //Position: 0x547F / 21631
{
	vector3 vVar0;
	var uVar3;
	
	if (IS_ACTOR_VALID(bParam3))
	{
		GET_POSITION(bParam3, &vVar0);
		Function_139(StackVal, StackVal, StackVal, StackVal, vParam0, vVar0, &uVar3);
		return UNK_0x9C40E671(&uVar3);
	}
	return 0.0f;
}

void Function_139(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x54AF / 21679
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

void Function_140(int iParam0, vector3 vParam1, float fParam4) //Position: 0x54D2 / 21714
{
	*(iParam0 + 136) = { StackVal, StackVal, vParam1 };
	iParam0->f_88 = 1;
	iParam0->f_128 = fParam4;
}

void Function_141(int iParam0, vector3 vParam1) //Position: 0x54EF / 21743
{
	*(iParam0 + 168) = { StackVal, StackVal, vParam1 };
}

bool Function_142(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x5501 / 21761
{
	struct<8> Var0;
	bool bVar8;
	bool bVar9;
	
	if (Global_3371 && iParam0->f_32)
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_176(GET_SCRIPT_NAME()) };
		bVar8 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Global_26150, &Var0, 4,203895E-45f, Function_175(*(iParam0 + 8), 0.0f, Global_34573, *(iParam0 + 8)), 0.0f, iParam0->f_52, 20.0f, iParam0->f_52);
		DECOR_SET_INT(bVar8, "script", GET_THIS_SCRIPT_ID());
		if (iParam0->f_56 != 4294967295)
		{
			DECOR_SET_INT(StackVal, bVar8, "category");
			Function_173(&bVar8, iParam0->f_32);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
		*(iParam0 + 8) = { StackVal, StackVal, Global_34574 };
		return 1;
	}
	*uParam3 = 0;
	if (!Function_143(iParam0))
	{
		if (iParam0->f_32 == 1)
		{
			if (*uParam2 == 0)
			{
				Function_12("Still scanning for the proper terrain to run this event.  Move the player around to find a good spawn location.", -1.0f, 1, 2, 1, 0);
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
		Function_12("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 5.0f, 1, 2, 1, 0);
	}
	if (bParam4)
	{
		if (!Function_10(iParam0->f_56, 0, 1, 0, 0))
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
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_176("restrictVol") };
		bVar9 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Global_26150, &Var0, 4,203895E-45f, Function_175(*(iParam0 + 8), 0.0f, Global_34573, *(iParam0 + 8)), 0.0f, iParam0->f_52, 20.0f, iParam0->f_52);
		DECOR_SET_INT(bVar9, "script", GET_THIS_SCRIPT_ID());
		if (iParam0->f_56 != 4294967295)
		{
			DECOR_SET_INT(StackVal, bVar9, "category");
			Function_173(&bVar9, iParam0->f_32);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
	}
	return 1;
}

bool Function_143(int iParam0) //Position: 0x5893 / 22675
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
			Function_172(iParam0 + 4);
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
				vVar3 = { 0.0f, 0.0f, Function_34(1) };
				ROTATE_VECTOR_XZ(&vVar3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar3, StackVal) };
				ITERATE_IN_SPHERE(StackVal, vVar3, Function_34(1));
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
						bVar0 = Function_171(StackVal, StackVal, StackVal, vVar9, 0,01f);
					}
					else
					{
						bVar0 = Function_170(StackVal, StackVal, StackVal, vVar9, 0,1f, "locflag", (iParam0 + 64 + 24)->f_16);
					}
				}
				else if ((iParam0 + 64 + 24)->f_16 == 0)
				{
					bVar0 = Function_168(StackVal, StackVal, StackVal, vVar9, Function_169());
				}
				else
				{
					bVar0 = Function_167(StackVal, StackVal, StackVal, vVar9, Function_169(), "locflag", (iParam0 + 64 + 24)->f_16);
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
			Function_172(iParam0 + 4);
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
					if (Function_166(bVar14))
					{
						if (StackVal == (iParam0 + 64)->f_48)
						{
							if ((StackVal && Global_29008[bVar14]) >= 0)
							{
								GET_OBJECT_POSITION(bVar1, &vVar3);
								if (VDIST(vVar9, vVar3) < fVar13 && VDIST(vVar9, vVar3) > Function_34(1))
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
				Function_113(iParam0 + 8, 99.0f, iParam0 + 8, 10);
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
				Function_165(&vVar9, &vVar6);
				vVar3 = { StackVal, StackVal, Function_165(&vVar9, &vVar6) };
				if (!Function_32(StackVal, StackVal, vVar3))
				{
					PRINTSTRING("Player Pos: ");
					PRINTVECTOR(vVar9);
					PRINTNL();
					Function_35(&fVar13, &fVar12);
					if (VDIST(vVar3, vVar9) < ((fVar13 + ((fVar12 - fVar13) / 2.0f)) * 0,8f))
					{
						iVar2 = Function_162(StackVal, StackVal, iParam0, vVar3);
					}
				}
			}
			else
			{
				iVar2 = Function_158(iParam0);
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
					if (!Function_157(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (iParam0->f_60 == 1)
				{
					if (!Function_156(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (Function_21(StackVal, 131072))
				{
					if (StackVal || Function_155(StackVal, Function_155(StackVal, StackVal, *(iParam0 + 8)), Global_34574))
					{
						return 0;
					}
				}
				if (StackVal & 1024 == 1024)
				{
					if (Function_154(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (!Function_150(iParam0 + 8, iParam0 + 52, 0, iParam0->f_32))
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
				vVar3 = { 0.0f, 0.0f, ((fVar13 + fVar12) * -0,5f) };
				ROTATE_VECTOR_XZ(&vVar3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar3, StackVal) };
				bVar23 = START_CURVE_QUERY(Global_28841, vVar3, Function_111((iParam0 + 64)->f_120, 0), 0.0f, 20.0f, 5.0f, 0);
			}
			else
			{
				bVar23 = START_CURVE_QUERY(Global_28841, vVar9, Function_111((iParam0 + 64)->f_120, 0), 120.0f, 150.0f, 5.0f, 0);
			}
			if (GET_NUM_POINTS_IN_CURVE_QUERY(bVar23) >= 0)
			{
				bVar21 = RAND_INT_RANGE(false, (GET_NUM_POINTS_IN_CURVE_QUERY(bVar23) - 1));
				GET_POINT_FROM_CURVE_QUERY(bVar23, bVar21, &Var15);
				Function_134(&Var15);
				*(iParam0 + 8) = { StackVal, StackVal, Function_134(&Var15) };
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
				if (!Function_157(StackVal, StackVal, *(iParam0 + 8)))
				{
					return 0;
				}
			}
			if (iParam0->f_60 == 1)
			{
				if (!Function_156(StackVal, StackVal, *(iParam0 + 8)))
				{
					return 0;
				}
			}
			if (iParam0->f_60 == 0)
			{
				if (!(StackVal || Function_157(StackVal, Function_156(StackVal, StackVal, *(iParam0 + 8)), *(iParam0 + 8))))
				{
					return 0;
				}
			}
			if (Function_21(StackVal, 131072))
			{
				if (StackVal || Function_155(StackVal, Function_155(StackVal, StackVal, *(iParam0 + 8)), Global_34574))
				{
					return 0;
				}
			}
			if (StackVal && !Function_150(iParam0 + 8, iParam0 + 52, 0, iParam0->f_32) == 262144)
			{
				return 0;
			}
			break;
		
		case 0x00000004:
			if (!Function_148((iParam0 + 64)->f_120) < 0)
			{
				return 0;
			}
			break;
		
		case 0x00000007:
			switch ((iParam0 + 64)->f_128)
			{
				case 0x00000001:
					bVar24 = Function_145(StackVal, Global_29004, Global_29005, Global_29006, 1);
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
						bVar24 = Function_145(StackVal, Global_29004, Global_29005, (Global_29006 + iVar22), 1);
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
	if (Function_144(StackVal, StackVal, *(iParam0 + 8)))
	{
		return 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(*(iParam0 + 8), 10.0f))
	{
		return 0;
	}
	return 1;
}

bool Function_144(vector3 vParam0) //Position: 0x60BD / 24765
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

bool Function_145(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x60F2 / 24818
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
								return Function_146(&Global_6298, &Global_7189, bParam3);
								break;
							
							case 0x00000001:
								return Function_146(&Global_6364, &Global_7287, bParam3);
								break;
							
							case 0x00000002:
								return Function_146(&Global_6351, &Global_7268, bParam3);
								break;
							
							default:
								return Function_146(&Global_6391, &Global_7327, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_146(&Global_6501, &Global_7490, bParam3);
								break;
							
							case 0x00000001:
								return Function_146(&Global_6402, &Global_7343, bParam3);
								break;
							
							case 0x00000003:
								return Function_146(&Global_6433, &Global_7389, bParam3);
								break;
							
							case 0x00000002:
								return Function_146(&Global_6490, &Global_7474, bParam3);
								break;
							
							case 0x00000004:
								return Function_146(&Global_6537, &Global_7543, bParam3);
								break;
							
							default:
								return Function_146(&Global_6532, &Global_7536, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_146(&Global_6563, &Global_7581, bParam3);
								break;
							
							case 0x00000001:
								return Function_146(&Global_6614, &Global_7657, bParam3);
								break;
							
							case 0x00000002:
								return Function_146(&Global_6643, &Global_7700, bParam3);
								break;
							
							default:
								return Function_146(&Global_6550, &Global_7562, bParam3);
								break;
						}
						break;
					
					case 0x00000003:
						switch (bVar1)
						{
							case 0x00000001:
								return Function_146(&Global_6667, &Global_7735, bParam3);
								break;
							
							default:
								return Function_146(&Global_6704, &Global_7790, bParam3);
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
								return Function_146(&Global_6709, &Global_7797, bParam3);
								break;
							
							case 0x00000001:
								return Function_146(&Global_6764, &Global_7879, bParam3);
								break;
							
							case 0x00000002:
								return Function_146(&Global_6785, &Global_7910, bParam3);
								break;
							
							default:
								return Function_146(&Global_6810, &Global_7947, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_146(&Global_6815, &Global_7954, bParam3);
								break;
							
							default:
								return Function_146(&Global_6928, &Global_8122, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000002:
								return Function_146(&Global_6933, &Global_8129, bParam3);
								break;
							
							case 0x00000001:
								return Function_146(&Global_6962, &Global_8172, bParam3);
								break;
							
							case 0x00000003:
								return Function_146(&Global_6987, &Global_8209, bParam3);
								break;
							
							default:
								return Function_146(&Global_7027, &Global_8268, bParam3);
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
		return Function_146(&Global_6298, &Global_7189, bParam3);
	}
	if (bVar1 == Global_30640[1])
	{
		return Function_146(&Global_6364, &Global_7287, bParam3);
	}
	if (bVar1 == Global_30640[2])
	{
		return Function_146(&Global_6351, &Global_7268, bParam3);
	}
	if (bVar1 == Global_30658[0])
	{
		return Function_146(&Global_6501, &Global_7490, bParam3);
	}
	if (bVar1 == Global_30658[1])
	{
		return Function_146(&Global_6402, &Global_7343, bParam3);
	}
	if (bVar1 == Global_30658[3])
	{
		return Function_146(&Global_6433, &Global_7389, bParam3);
	}
	if (bVar1 == Global_30658[2])
	{
		return Function_146(&Global_6490, &Global_7474, bParam3);
	}
	if (bVar1 == Global_30658[4])
	{
		return Function_146(&Global_6537, &Global_7543, bParam3);
	}
	if (bVar1 == Global_30668[0])
	{
		return Function_146(&Global_6563, &Global_7581, bParam3);
	}
	if (bVar1 == Global_30668[1])
	{
		return Function_146(&Global_6614, &Global_7657, bParam3);
	}
	if (bVar1 == Global_30668[2])
	{
		return Function_146(&Global_6643, &Global_7700, bParam3);
	}
	if (bVar1 == Global_30679[1])
	{
		return Function_146(&Global_6667, &Global_7735, bParam3);
	}
	if (bVar1 == Global_30685[0])
	{
		return Function_146(&Global_6709, &Global_7797, bParam3);
	}
	if (bVar1 == Global_30685[1])
	{
		return Function_146(&Global_6764, &Global_7879, bParam3);
	}
	if (bVar1 == Global_30685[2])
	{
		return Function_146(&Global_6785, &Global_7910, bParam3);
	}
	if (bVar1 == Global_30693[0])
	{
		return Function_146(&Global_6815, &Global_7954, bParam3);
	}
	if (bVar1 == Global_30707[2])
	{
		return Function_146(&Global_6933, &Global_8129, bParam3);
	}
	if (bVar1 == Global_30707[1])
	{
		return Function_146(&Global_6962, &Global_8172, bParam3);
	}
	if (bVar1 == Global_30707[3])
	{
		return Function_146(&Global_6987, &Global_8209, bParam3);
	}
	if (bVar1 == Global_30628[0])
	{
		return Function_146(&Global_6391, &Global_7327, bParam3);
	}
	if (bVar1 == Global_30628[1])
	{
		return Function_146(&Global_6532, &Global_7536, bParam3);
	}
	if (bVar1 == Global_30628[2])
	{
		return Function_146(&Global_6550, &Global_7562, bParam3);
	}
	if (bVar1 == Global_30628[3])
	{
		return Function_146(&Global_6704, &Global_7790, bParam3);
	}
	if (bVar1 == Global_30633[0])
	{
		return Function_146(&Global_6810, &Global_7947, bParam3);
	}
	if (bVar1 == Global_30633[2])
	{
		return Function_146(&Global_6928, &Global_8122, bParam3);
	}
	if (bVar1 == Global_30633[1])
	{
		return Function_146(&Global_7027, &Global_8268, bParam3);
	}
	return "";
}

var Function_146(var uParam0, var uParam1, bool bParam2) //Position: 0x6707 / 26375
{
	int iVar0;
	
	iVar0 = bParam2;
	if (iVar0 <= *uParam0 || iVar0 > 0)
	{
		return "";
	}
	if (!Function_147(uParam0[iVar02], 2))
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

bool Function_147(var uParam0, int iParam1) //Position: 0x6759 / 26457
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_148(int iParam0) //Position: 0x6775 / 26485
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
			if (Function_149(GET_SQUAD_FROM_OBJECT(bVar2)) == iParam0)
			{
				iVar0++;
			}
			bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
		}
	}
	DESTROY_ITERATOR(bVar1);
	return iVar0;
}

int Function_149(bool bParam0) //Position: 0x67D0 / 26576
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 4294967295;
	}
	bVar0 = Function_115(bParam0);
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

bool Function_150(var uParam0, float fParam1, int iParam2, bool bParam3) //Position: 0x6808 / 26632
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
	Function_151(4294967295);
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
			else if (Function_25(uParam0, &uVar0) > fVar5)
			{
				return 0;
			}
		}
		iVar3++;
	}
	return 1;
}

int Function_151(bool bParam0) //Position: 0x68D8 / 26840
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
						Function_153(iVar0);
					}
					else if (Global_3386)
					{
						if (Function_152(StackVal, StackVal, Global_34573, vVar1) < 25.0f)
						{
							Function_153(iVar0);
						}
					}
					else if (Function_152(StackVal, StackVal, Global_34573, vVar1) < 55.0f)
					{
						Function_153(iVar0);
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
			Function_153(iVar0);
		}
		iVar0++;
	}
	return 0;
}

float Function_152(bool bParam0, vector3 vParam1) //Position: 0x6A39 / 27193
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_61(bParam0);
		vVar0 = { StackVal, StackVal, Function_61(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

void Function_153(int iParam0) //Position: 0x6AB3 / 27315
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

bool Function_154(vector3 vParam0) //Position: 0x6B14 / 27412
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

int Function_155(vector3 vParam0) //Position: 0x6BB5 / 27573
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

bool Function_156(vector3 vParam0) //Position: 0x6C01 / 27649
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

bool Function_157(vector3 vParam0) //Position: 0x6C5A / 27738
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
			{
				if (StackVal || (StackVal || (StackVal || StackVal != 3 != 4) != 5) != 6)
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int Function_158(int iParam0) //Position: 0x6CCB / 27851
{
	float fVar0;
	bool bVar1;
	
	Function_35(&fVar0, &bVar1);
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER_PLAYER();
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	Function_161(0);
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
		Function_160(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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
	Function_159(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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

void Function_159(struct<33> Param0) //Position: 0x6E66 / 28262
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
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(StackVal, 1,43493E-42f, 1);
}

void Function_160(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14) //Position: 0x6F92 / 28562
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

void Function_161(bool bParam0) //Position: 0x6FE3 / 28643
{
	if (bParam0 < 0,1f)
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

int Function_162(int iParam0, vector3 vParam1) //Position: 0x7027 / 28711
{
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER(vParam1);
	if (Global_30842[34])
	{
		PRINTVECTOR(vParam1);
		PRINTNL();
	}
	Function_164();
	Function_161(0);
	Function_163(0);
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
		Function_160(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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
	Function_159(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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

void Function_163(bool bParam0) //Position: 0x71C9 / 29129
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

void Function_164() //Position: 0x727C / 29308
{
	AMBIENT_SET_DISTANCE_FILTER(0.0f, 24.0f);
	return;
}

vector3 Function_165(var uParam0, int iParam1) //Position: 0x728B / 29323
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
	bool bVar25;
	bool bVar31;
	
	bVar10 = START_CURVE_QUERY(Global_28841, *uParam0, 6,726233E-44f, 0.0f, 7.0f, 5.0f, 0);
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
		UNK_0x19D652F9(bVar6, 50.0f, &uVar0, &bVar25);
		UNK_0x19D652F9(bVar6, -50.0f, &uVar0, &bVar31);
		Function_134(&bVar25);
		vVar19 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*uParam0, Function_134(&bVar25), StackVal) };
		Function_134(&bVar31);
		vVar22 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*uParam0, Function_134(&bVar31), StackVal) };
		fVar15 = VDOT(&vVar16, &vVar19);
		fVar14 = VDOT(&vVar16, &vVar22);
		Function_35(&fVar7, &fVar8);
		fVar9 = ((fVar7 + fVar8) / 2.0f);
		if (fVar15 > 0.0f && fVar14 > 0.0f)
		{
			UNK_0xDF93BD7C(bVar10);
			vVar11 = { 0.0f, 0.0f, 0.0f };
			return StackVal, StackVal, vVar11;
		}
		if (fVar15 > fVar14)
		{
			UNK_0x19D652F9(bVar6, (fVar9 * -1.0f), &uVar0, &bVar31);
			Function_134(&bVar31);
			vVar11 = { StackVal, StackVal, Function_134(&bVar31) };
		}
		else
		{
			UNK_0x19D652F9(bVar6, fVar9, &uVar0, &bVar25);
			Function_134(&bVar25);
			vVar11 = { StackVal, StackVal, Function_134(&bVar25) };
		}
	}
	UNK_0xDF93BD7C(bVar10);
	return StackVal, StackVal, vVar11;
}

bool Function_166(int iParam0) //Position: 0x7398 / 29592
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_167(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, var uParam6) //Position: 0x73AE / 29614
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
						if (Function_150(&vVar5, &fVar4, 0, 0))
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

var Function_168(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x7456 / 29782
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
				if (Function_150(&vVar5, &uVar4, 0, 0))
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

var Function_169() //Position: 0x74DF / 29919
{
	float fVar0;
	int iVar1;
	
	if (Global_3371)
	{
		return 0.0f;
	}
	Function_35(&fVar0, &iVar1);
	if (fVar0 >= 50.0f)
	{
		return (fVar0 - 10.0f);
	}
	return (fVar0 - 20.0f);
}

var Function_170(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, var uParam6) //Position: 0x7510 / 29968
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

var Function_171(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x75A5 / 30117
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

int Function_172(int iParam0) //Position: 0x7622 / 30242
{
	if (IS_ITERATOR_VALID(*iParam0))
	{
		ITERATE_EVERYWHERE(*iParam0);
		ITERATE_ON_PARTIAL_NAME(*iParam0, Function_189());
		ITERATE_ON_PARTIAL_MODEL_NAME(*iParam0, Function_189());
		ITERATE_ON_OBJECT_TYPE(*iParam0, 4294967295);
		return 1;
	}
	return 0;
}

int Function_173(bool bParam0, int iParam1) //Position: 0x7653 / 30291
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
	Function_151(DECOR_GET_INT(*bParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
		}
		else
		{
			Function_174(iVar0, bParam0, &uVar1, iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(*bParam0);
	return 0;
}

void Function_174(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x77B4 / 30644
{
	struct<8> Var0;
	
	Global_26155[iParam05].f_8 = *uParam1;
	Global_26155[iParam05].f_16 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_176("stayout") };
	Global_26155[iParam05].f_12 = CREATE_VOLUME_IN_LAYOUT(Global_26150, &Var0, 3, *iParam2, 0.0f, 0.0f, 0.0f, 12.0f, 5.0f, 12.0f);
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	if (bParam3)
	{
		Global_26155[iParam05].f_4 = ADD_BLIP_FOR_COORD(iParam2, 403, 0, 2, 0);
		SET_BLIP_BLINK(StackVal, 1, 1, 20.0f);
	}
}

var Function_175(bool bParam0, vector3 vParam1) //Position: 0x784F / 30799
{
	vector3 vVar0;
	var uVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		GET_POSITION(bParam0, &vVar0);
		Function_139(StackVal, StackVal, StackVal, StackVal, vVar0, vParam1, &uVar3);
		return UNK_0x9C40E671(&uVar3);
	}
	return 0.0f;
}

struct<32> Function_176(bool bParam0) //Position: 0x787F / 30847
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_177("0", &cVar8, ""), 4);
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

struct<32> Function_177(char* cParam0, char* cParam1, char* cParam2) //Position: 0x78E9 / 30953
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_178(int iParam0) //Position: 0x7908 / 30984
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_183();
	iVar1 = 0;
	if (!Function_9(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_182(iParam0[iVar03], 8);
		}
		else if (Function_181())
		{
			iVar1 = 1;
			Function_182(iParam0[iVar03], 8);
		}
		Function_182(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_9(iParam0[iVar03], 4))
		{
			if (!Function_9(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_9(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_9(iParam0[03], 8) || iVar1));
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
				Function_182(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_9(iParam0[iVar03], 4))
		{
			if (!Function_9(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_182(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_182(iParam0[iVar03], 2);
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
							Function_182(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_182(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_182(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_182(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_182(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_182(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_182(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_182(iParam0[iVar03], 2);
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
	Function_179();
	return 1;
}

void Function_179() //Position: 0x7C83 / 31875
{
	if (!Function_180(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_180(int iParam0) //Position: 0x7CC3 / 31939
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_181() //Position: 0x7CDF / 31967
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

void Function_182(var uParam0, int iParam1) //Position: 0x7D0A / 32010
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_183() //Position: 0x7D1B / 32027
{
	if (!Function_180(128))
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

void Function_184(bool bParam0) //Position: 0x7D5D / 32093
{
	if (IS_ACTOR_VALID(*bParam0))
	{
		SET_DRAW_ACTOR(*bParam0, true);
		CLEAR_ACTOR_MAX_SPEED(*bParam0);
		if (IS_ACTOR_ANIMAL(*bParam0))
		{
			ANIMAL_SPECIES_REL_SET_CAN_ATTACK(ANIMAL_ACTOR_GET_SPECIES(*bParam0), 0, 1);
		}
		else
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*bParam0, 0, true);
			MEMORY_ALLOW_SHOOTING(*bParam0, true);
		}
	}
	return;
}

void Function_185(var uParam0, int iParam1) //Position: 0x7D9F / 32159
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_184(uParam0[iVar0]);
		iVar0++;
	}
	return;
}

void Function_186(int iParam0) //Position: 0x7DCC / 32204
{
	if (IS_ACTOR_VALID(*iParam0))
	{
		SET_DRAW_ACTOR(*iParam0, false);
		SET_ACTOR_MAX_SPEED(*iParam0, 5);
		if (IS_ACTOR_ANIMAL(*iParam0))
		{
			ANIMAL_SPECIES_REL_SET_CAN_ATTACK(ANIMAL_ACTOR_GET_SPECIES(*iParam0), 0, 0);
		}
		else
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*iParam0, 0, false);
			MEMORY_ALLOW_SHOOTING(*iParam0, false);
		}
	}
	return;
}

void Function_187(var uParam0, int iParam1) //Position: 0x7E0F / 32271
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_186(uParam0[iVar0]);
		iVar0++;
	}
	return;
}

bool Function_188(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x7E3C / 32316
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

var Function_189() //Position: 0x7EA4 / 32420
{
	int iVar0;
	
	return iVar0;
}

var Function_190(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x7EAC / 32428
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_191(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_182(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_191(var uParam0, int iParam1, int iParam2) //Position: 0x7EE4 / 32484
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_9(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_182(uParam0[iVar03], 4);
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

void Function_192(bool bParam0) //Position: 0x7FA8 / 32680
{
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(bParam0);
	return;
}

var Function_193(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x7FB3 / 32691
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_9(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_182(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_182(uParam0[iVar03], 8);
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

var Function_194(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x8084 / 32900
{
	return Function_195(uParam0, uParam1, uParam2, uParam3, uParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_195(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, vector3 vParam6) //Position: 0x809D / 32925
{
	switch (iParam0)
	{
		case 0x00000001:
			return Function_198(StackVal, StackVal, Global_30750[0], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000002:
			return Function_198(StackVal, StackVal, Global_30750[1], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000004:
			return Function_198(StackVal, StackVal, Global_30750[2], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000008:
			return Function_198(StackVal, StackVal, Global_30750[3], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000010:
			return Function_198(StackVal, StackVal, Global_30750[4], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000020:
			return Function_198(StackVal, StackVal, Global_30750[5], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000040:
			return Function_198(StackVal, StackVal, Global_30750[6], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000080:
			return Function_198(StackVal, StackVal, Global_30750[7], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000100:
			return Function_198(StackVal, StackVal, Global_30750[8], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000200:
			return Function_198(StackVal, StackVal, Global_30750[9], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000400:
			return Function_198(StackVal, StackVal, Global_30750[10], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000800:
			return Function_198(StackVal, StackVal, Global_30750[11], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00001000:
			return Function_198(StackVal, StackVal, Global_30750[12], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00002000:
			return Function_198(StackVal, StackVal, Global_30750[13], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return Function_196(StackVal, StackVal, iParam0, bParam1, bParam2, fParam5, vParam6);
}

var Function_196(var uParam0, bool bParam1, bool bParam2, float fParam3, vector3 vParam4) //Position: 0x82F2 / 33522
{
	bool bVar0;
	
	bVar0 = CREATE_POPULATION_SET(0);
	if (uParam0 & 1 == 1)
	{
		Function_197(Global_30750[0], bVar0);
	}
	if (uParam0 & 2 == 2)
	{
		Function_197(Global_30750[1], bVar0);
	}
	if (uParam0 & 4 == 4)
	{
		Function_197(Global_30750[2], bVar0);
	}
	if (uParam0 & 8 == 8)
	{
		Function_197(Global_30750[3], bVar0);
	}
	if (uParam0 & 16 == 16)
	{
		Function_197(Global_30750[4], bVar0);
	}
	if (uParam0 & 32 == 32)
	{
		Function_197(Global_30750[5], bVar0);
	}
	if (uParam0 & 64 == 64)
	{
		Function_197(Global_30750[6], bVar0);
	}
	if (uParam0 & 128 == 128)
	{
		Function_197(Global_30750[7], bVar0);
	}
	if (uParam0 & 256 == 256)
	{
		Function_197(Global_30750[8], bVar0);
	}
	if (uParam0 & 512 == 512)
	{
		Function_197(Global_30750[9], bVar0);
	}
	if (uParam0 & 1024 == 1024)
	{
		Function_197(Global_30750[10], bVar0);
	}
	if (uParam0 & 2048 == 2048)
	{
		Function_197(Global_30750[11], bVar0);
	}
	if (uParam0 & 4096 == 4096)
	{
		Function_197(Global_30750[12], bVar0);
	}
	if (uParam0 & 8192 == 8192)
	{
		Function_197(Global_30750[13], bVar0);
	}
	return Function_198(StackVal, StackVal, bVar0, bParam1, bParam2, 4294967295, 0, fParam3, vParam4);
}

void Function_197(bool bParam0, bool bParam1) //Position: 0x8443 / 33859
{
	bool bVar0;
	
	if (!IS_POPSET_VALID(bParam0))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid subPOPSET");
	}
	if (!IS_POPSET_VALID(bParam1))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid master popset");
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(bParam0))
	{
		LINK_ACTORENUM_TO_POPULATION(bParam1, GET_ACTORENUM_IN_POPULATION(bParam0, bVar0), GET_ACTORENUM_IN_POPULATION_WEIGHT(bParam0, bVar0));
		bVar0++;
	}
	return;
}

var Function_198(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, vector3 vParam6) //Position: 0x8501 / 34049
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!IS_POPSET_VALID(bParam0))
	{
		LOG_ERROR("Trying to get a random member of an invalid popset");
		return 4294967295;
	}
	if (bParam1)
	{
		Function_203();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, bParam4, fParam5, vParam6);
	if (!Function_92(bVar1))
	{
		if (!Global_30837 && !Global_30838)
		{
			Function_202(bParam0, bParam1, bParam2, bParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_202(bParam0, bParam1, bParam2, bParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && bParam3 != 4294967295)
		{
			while (Function_201(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, fParam5, vParam6);
				if (Function_92(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_201(bVar0))
				{
					Function_200();
				}
				Function_199(bVar0);
			}
		}
		else if (!bParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != bParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, fParam5, vParam6);
				if (Function_92(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
		}
	}
	if (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar0))
	{
		if (bParam2 == 0)
		{
			LOG_ERROR("Did not get a matching species, but RANDACTORFILTER_IGNORE was passed in. Did you really mean RANDACTORFILTER_ONLY_SPECIES_SPECIFIED? Update to use RANDACTORFILTER_ONLY_SPECIES_SPECIFIED or RANDACTORFILTER_IGNORE + ANIMALSPECIES_INVALID");
		}
		else
		{
			LOG_ERROR("We asked for a matching species, and did not get one");
		}
	}
	return bVar0;
}

void Function_199(int iParam0) //Position: 0x87F4 / 34804
{
	int iVar0;
	
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if ((*&Global_30742 + 8)[iVar0] == iParam0)
		{
			LOG_ERROR("Attempting to insert a duplicate asset into the asset duplication array. Clearly something has gone wrong.");
			return;
		}
		if ((*&Global_30742 + 8)[iVar0] == 4294967295)
		{
			(*&Global_30742 + 8)[iVar0] = iParam0;
			return;
		}
		iVar0++;
	}
	return;
}

void Function_200() //Position: 0x88A8 / 34984
{
	int iVar0;
	
	if (Global_3402)
	{
		Global_30742 = GET_THIS_SCRIPT_ID();
		Global_30742.f_4 = GET_CURRENT_GAME_TIME();
	}
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		(*&Global_30742 + 8)[iVar0] = 4294967295;
		iVar0++;
	}
	return;
}

bool Function_201(bool bParam0) //Position: 0x88E2 / 35042
{
	int iVar0;
	
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if ((*&Global_30742 + 8)[iVar0] == bParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_202(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x890F / 35087
{
	bool bVar0;
	
	PRINTSTRING("NoDupes=");
	if (bParam1)
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTSTRING("  RANDACTOR_FILTER=");
	PRINTINT(bParam2);
	PRINTSTRING("  ANIMALSPECIES=");
	PRINTINT(bParam3);
	PRINTSTRING("  IgnoreStreaming=");
	if (bParam4)
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTSTRING("  PopsetReady");
	if (IS_POPULATION_SET_READY(bParam0, bParam2, bParam3))
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTNL();
	bVar0 = false;
	while (bVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(bParam0))
	{
		PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(GET_ACTORENUM_IN_POPULATION(bParam0, bVar0)));
		PRINTSTRING("n  Weight=");
		PRINTFLOAT(GET_ACTORENUM_IN_POPULATION_WEIGHT(bParam0, bVar0));
		PRINTSTRING("  Streamed=");
		if (STREAMING_IS_ACTOR_LOADED(GET_ACTORENUM_IN_POPULATION(bParam0, bVar0), 4294967295))
		{
			PRINTSTRING("TRUE");
		}
		else
		{
			PRINTSTRING("FALSE");
		}
		PRINTNL();
		bVar0++;
	}
}

void Function_203() //Position: 0x8A60 / 35424
{
	int iVar0;
	
	if (Global_3402)
	{
		if (StackVal || !Global_30742 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_200();
		}
	}
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if ((*&Global_30742 + 8)[iVar0] == 4294967295)
		{
			return;
		}
		iVar0++;
	}
	Function_200();
	return;
}

var Function_204(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x8AAB / 35499
{
	return Function_205(uParam0, uParam1, uParam2, 4294967295, uParam3);
}

var Function_205(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x8ABF / 35519
{
	return Function_198(uParam0, uParam1, uParam2, uParam3, uParam4, 0, 0.0f, 0.0f, 0.0f);
}

