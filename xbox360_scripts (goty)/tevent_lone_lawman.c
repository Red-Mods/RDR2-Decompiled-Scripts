//Decompiled with MagicRDR v1.0
//Function Count : 185
//Statics Count : 84
//Natives Count : 309
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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	int iLocal_31 = 0;
	float fLocal_32 = 0.0f;
	struct<57> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	struct<9> Var4;
	vector3 vVar52;
	var uVar58;
	var uVar61;
	int iVar64;
	int iVar66;
	int iVar67;
	bool bVar68;
	int iVar69;
	int iVar70;
	var uVar71[2];
	var uVar74;
	bool bVar82;
	
	iLocal_14 = 0;
	iLocal_15 = 0;
	iLocal_31 = 0;
	fLocal_32 = 0.0f;
	iVar0 = 0;
	iVar2 = 0;
	iVar66 = 0;
	iVar67 = 0;
	bVar68 = false;
	iVar69 = 0;
	iVar70 = 0;
	uVar74 = 2;
	if (!IS_POPSET_VALID(Global_30750[0]))
	{
		iVar0 = 5;
	}
	else
	{
		uVar71[0] = Function_175(4, 1, 0, 0, 1);
		uVar71[1] = Function_175(64, 1, 0, 23, 1);
		if (uVar71[0] != 4294967295 || uVar71[1] != 4294967295)
		{
			iVar0 = 5;
		}
		else
		{
			Function_174(&uVar74, uVar71[0], 3, 0);
			Function_174(&uVar74, uVar71[1], 3, 0);
			Function_173(uVar71[0]);
		}
	}
	bVar1 = CREATE_LAYOUT(Function_172());
	if (!IS_LAYOUTREF_VALID(bVar1))
	{
		iVar0 = 6;
	}
	GET_POSITION(GET_PLAYER_ACTOR(0), &vVar52);
	while (!IS_EXITFLAG_SET())
	{
		bVar82 = 500;
		switch (iVar0)
		{
			case 0x00000000:
				if (Function_166(&uVar74))
				{
					iVar0 = 1;
				}
				break;
			
			case 0x00000001:
				if (Function_126(&ScriptParam_0, &bVar82, &iVar66, &iVar67, 1))
				{
					vVar4.f_4 = 1;
					Function_125(StackVal, StackVal, &vVar4, vVar52);
					GET_POSITION(GET_PLAYER_ACTOR(0), &uVar58);
					Function_122(StackVal, StackVal, StackVal, StackVal, &vVar4, *(&ScriptParam_0 + 8), *(&ScriptParam_0 + 20), ScriptParam_0.f_48, 1, 1);
					Function_84(&vVar4, 1, 0, 0);
					if (!Function_83(&vVar4))
					{
						iVar0 = 6;
					}
					else
					{
						Function_82(StackVal, StackVal, vVar52, &vVar4 + 24);
						SQUAD_JOIN(Function_80(StackVal, StackVal, StackVal, StackVal, bVar1, Function_172(), uVar71[0], Function_172(), uVar71[1], *(&ScriptParam_0 + 8), *(&vVar4 + 168)), vVar4.z);
						Function_78(Function_79(vVar4.z), 0);
						Function_77(&iVar2, 1);
						iVar0 = 3;
					}
				}
				else if (iVar67 == 1)
				{
					iVar0 = 5;
				}
				break;
			
			case 0x00000003:
				Function_76();
				Function_49(StackVal, StackVal, Function_76(), &bVar68, ScriptParam_0.f_56, Function_79(vVar4.z), 0, 80.0f, 0);
				if (!Function_42(ScriptParam_0.f_56, Function_79(vVar4.z), &iVar69, &iVar70, 0, 1, 1, 1))
				{
					iVar0 = 5;
					break;
				}
				if (!SQUAD_IS_VALID(vVar4.z))
				{
					bVar82 = false;
					iVar0 = 5;
				}
				else if (!Function_41(vVar4.z))
				{
					bVar82 = false;
					iVar0 = 5;
				}
				else if (!Function_39(vVar4.z, GET_PLAYER_ACTOR(0), 180.0f, 1))
				{
					bVar82 = false;
					iVar0 = 5;
				}
				else if (!Function_38(Function_79(vVar4.z)))
				{
					iVar64 = Function_84(&vVar4, 1, 0, 0);
					if (iVar64 == 1)
					{
						bVar82 = false;
					}
				}
				if (Function_34(Function_79(vVar4.z), &bVar3, &fLocal_32, iVar2, 0, 0x40400000))
				{
					switch (bVar3)
					{
						case 0x00000002:
							Function_21(Function_79(vVar4.z));
							Function_20(Function_79(vVar4.z), &Global_34573);
							break;
						
						case 0x00000004:
							Function_21(Function_79(vVar4.z));
							Function_20(Function_79(vVar4.z), &Global_34573);
							break;
					}
					Function_19(Function_79(vVar4.z));
					iVar0 = 5;
					bVar82 = false;
					break;
				}
				if (vVar4.x == 0)
				{
					bVar82 = false;
					iVar0 = 5;
				}
				if (GET_DEBUG_DRAW_STATE())
				{
					GET_POSITION(Function_79(vVar4.z), &uVar61);
					bVar82 = false;
				}
				break;
			
			case 0x00000005:
				iVar0 = 6;
				bVar82 = false;
				break;
			
			case 0x00000006:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				bVar82 = false;
				break;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(bVar82);
		}
	}
	Function_18(uVar71[0]);
	Function_14(&uVar74);
	if (ScriptParam_0.f_32)
	{
		Global_3399 = 0;
	}
	if (!bVar68)
	{
		Function_8(ScriptParam_0.f_56, 0.0f, 0, 1, 0);
	}
	if (IS_ITERATOR_VALID(StackVal))
	{
		DESTROY_ITERATOR(StackVal);
	}
	if (IS_ACTOR_VALID(Function_79(vVar4.z)))
	{
		Function_6(Function_79(vVar4.z), 0.0f, 0.0f, 0.0f, 0, 0, 2, 1);
	}
	Function_1(&vVar4, 1);
	if (IS_LAYOUTREF_VALID(bVar1))
	{
		RELEASE_LAYOUT_REF(bVar1);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0, bool bParam1) //Position: 0x36F / 879
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
	Function_76();
	*(iParam0 + 168) = { StackVal, StackVal, Function_76() };
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

struct<24> Function_2() //Position: 0x441 / 1089
{
	struct<6> Var0;
	
	Var0.f_20 = 4294967295;
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

void Function_3(bool bParam0) //Position: 0x452 / 1106
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

void Function_4(bool bParam0) //Position: 0x492 / 1170
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

void Function_5(bool bParam0) //Position: 0x515 / 1301
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

void Function_6(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x598 / 1432
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
	if (!Function_7(StackVal, StackVal, vParam1))
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
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam0, 1);
}

bool Function_7(vector3 vParam0) //Position: 0x6A0 / 1696
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

bool Function_8(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x6B8 / 1720
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
			ADD_TIME(&bVar0, 0, false, bVar1, 0);
		}
		else
		{
			ADD_TIME(&bVar0, 0, false, 10, 0);
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

void Function_9(bool bParam0) //Position: 0x915 / 2325
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

void Function_10(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x95B / 2395
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

struct<16> Function_11(int iParam0) //Position: 0x9D2 / 2514
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

bool Function_12() //Position: 0xA11 / 2577
{
	if (Function_13(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_13(int iParam0, int iParam1) //Position: 0xA2C / 2604
{
	return (iParam0 && iParam1) == 0;
}

void Function_14(int iParam0) //Position: 0xA39 / 2617
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_15(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_15(var uParam0, int iParam1) //Position: 0xA5F / 2655
{
	if (Function_17(uParam0[iParam13], 4))
	{
		if (Function_17(uParam0[iParam13], 1))
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
			Function_16(uParam0[iParam13], 1);
			Function_16(uParam0[iParam13], 2);
			Function_16(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_16(var uParam0, int iParam1) //Position: 0xB8D / 2957
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_17(var uParam0, int iParam1) //Position: 0xBA7 / 2983
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_18(bool bParam0) //Position: 0xBC4 / 3012
{
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(bParam0);
	return;
}

void Function_19(bool bParam0) //Position: 0xBCF / 3023
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

int Function_20(bool bParam0, int iParam1) //Position: 0xC1B / 3099
{
	if (IS_ACTOR_HUMAN(bParam0))
	{
		if (GET_NUM_WEAPONS_IN_INVENTORY(bParam0) == 0)
		{
			TASK_FLEE_ACTOR(bParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
			TASK_PRIORITY_SET(bParam0, 0);
			return 1;
		}
	}
	if (!IS_ACTOR_VALID(bParam0))
	{
		LOG_ERROR("Killer is invalid in TASK_KILL_ACTOR_RUTHLESS");
		return 0;
	}
	if (!IS_ACTOR_VALID(*iParam1))
	{
		LOG_ERROR("VICTIM is invalid in TASK_KILL_ACTOR_RUTHLESS");
		return 0;
	}
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, -1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 37, 2.0f);
	MEMORY_ALLOW_TAKE_COVER(bParam0, 0);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(bParam0, 0);
	MEMORY_REPORT_POSITION_AUTO(bParam0, *iParam1, 1);
	TASK_KILL_CHAR(bParam0, *iParam1);
	TASK_PRIORITY_SET(bParam0, 1);
	return 1;
}

void Function_21(bool bParam0) //Position: 0xD00 / 3328
{
	if (!Global_3403)
	{
		if (IS_ACTOR_VALID(bParam0))
		{
			if (IS_ACTOR_ALIVE(bParam0))
			{
				if (GET_ACTORENUM_ACTOR_BASE_TYPE(GET_ACTOR_ENUM(bParam0)) == 1)
				{
					if ((!Function_32(Function_33(), 35) && !Function_32(Function_33(), 7)) && !Function_32(Function_33(), 12))
					{
						Function_22(1, 35, Function_33(), GET_OBJECT_FROM_ACTOR(bParam0), 1);
					}
				}
			}
		}
	}
	return;
}

var Function_22(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xD67 / 3431
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!Function_31(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_30(iParam1))
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
	if (!Function_25(1))
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
		bVar5 = CREATE_OBJECTSET_IN_LAYOUT(Function_172(), Global_26314, 3, 0);
		SET_CRIME_OBJECTSET(bVar3, bVar5);
		if (!bParam4)
		{
			SET_CRIME_WITNESSED(bVar3, true);
		}
		else
		{
			SET_CRIME_WITNESSED(bVar3, 3);
			Function_23();
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

void Function_23() //Position: 0xFF7 / 4087
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	bVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_24(bVar0, bVar1);
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

void Function_24(bool bParam0, bool bParam1) //Position: 0x105A / 4186
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

bool Function_25(bool bParam0) //Position: 0x1089 / 4233
{
	if (Function_29(256))
	{
		return 0;
	}
	if (Function_29(262144))
	{
		return 0;
	}
	if (Function_28())
	{
		return 0;
	}
	if (!Function_29(1))
	{
		return 0;
	}
	if (!Function_29(4096))
	{
		return 0;
	}
	if (bParam0 && Function_27(12))
	{
		return 0;
	}
	if (Global_3378)
	{
		return 0;
	}
	if (Function_29(2048))
	{
		return 0;
	}
	if (Function_26() || !bParam0)
	{
		if (Global_29007 != 2 || Global_29007 != 5)
		{
			return 0;
		}
	}
	return 1;
}

bool Function_26() //Position: 0x10FF / 4351
{
	return NET_IS_MANAGER_INITIALIZED();
}

int Function_27(int iParam0) //Position: 0x1108 / 4360
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_28() //Position: 0x1119 / 4377
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

bool Function_29(int iParam0) //Position: 0x1132 / 4402
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_30(int iParam0) //Position: 0x1150 / 4432
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_31(int iParam0) //Position: 0x1166 / 4454
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_32(bool bParam0, int iParam1) //Position: 0x117B / 4475
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	bVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	iVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_24(bVar0, iVar1);
	bVar2 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar2))
	{
		bVar3 = GET_CRIME_FROM_OBJECT(bVar2);
		if (GET_CRIME_CRIMINAL(bVar3) != bParam0 && GET_CRIME_TYPE(bVar3) != iParam1)
		{
			DESTROY_ITERATOR(bVar0);
			return 1;
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return 0;
}

bool Function_33() //Position: 0x11F7 / 4599
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

bool Function_34(bool bParam0, var uParam1, var uParam2, int iParam3, bool bParam4, float fParam5) //Position: 0x120C / 4620
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
		fVar0 = Function_37(bParam0, Global_34573);
		if (!Function_13(iParam3, 8))
		{
			if (GET_LAST_ATTACKER(bParam0) == Global_34573)
			{
				*uParam1 = 8;
				Function_35(bParam0);
				return 1;
			}
		}
		if (!Function_13(iParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(bParam0, 1.0f))
			{
				*uParam1 = 2;
				Function_35(bParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(bParam0, 1.0f, 1.0f))
			{
				*uParam1 = 2;
				Function_35(bParam0);
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
					Function_35(bParam0);
					return 1;
				}
				if (*uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - *uParam2) < 1.3f)
					{
						*uParam1 = 4;
						Function_35(bParam0);
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
				Function_35(bParam0);
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
					Function_35(bParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_35(bool bParam0) //Position: 0x13A3 / 5027
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(bParam0, 1);
	UNK_0x99AFD2D1(bParam0, 0, 0);
	Function_36(bParam0);
	MEMORY_CONSIDER_AS(Global_34573, bParam0, 2);
	MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
	AI_GOAL_LOOK_CLEAR(bParam0);
	return;
}

void Function_36(bool bParam0) //Position: 0x13D7 / 5079
{
	SAY_SINGLE_LINE_CONTEXT(bParam0, 60, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

float Function_37(bool bParam0, bool bParam1) //Position: 0x13EE / 5102
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

bool Function_38(bool bParam0) //Position: 0x14DF / 5343
{
	return DECOR_CHECK_EXIST(bParam0, "nsharedlaw");
}

bool Function_39(bool bParam0, bool bParam1, int iParam2, var uParam3) //Position: 0x14F6 / 5366
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
				if (ACTORS_IN_RANGE(bVar1, bParam1, iParam2))
				{
					if (!Function_40(bVar1, 1) || uParam3)
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

bool Function_40(bool bParam0, int iParam1) //Position: 0x158F / 5519
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

bool Function_41(bool bParam0) //Position: 0x15D9 / 5593
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

bool Function_42(int iParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x1630 / 5680
{
	if (StackVal & 64 == 64)
	{
		if (!*uParam2)
		{
			if (IS_ACTOR_VALID(bParam1))
			{
				if (Function_37(Global_34573, bParam1) > 15.0f)
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
		if (Function_45() && !*uParam2)
		{
			return 0;
		}
		if (Function_44(iParam0) && !*uParam2)
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
		if (!Function_43(iParam0, uParam5))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_43(int iParam0, int iParam1) //Position: 0x175E / 5982
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

int Function_44(int iParam0) //Position: 0x177F / 6015
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

int Function_45() //Position: 0x17BD / 6077
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
						if (Function_46(StackVal, Global_34573) > IntToFloat(iVar1))
						{
							return 1;
						}
					}
				}
			}
			if (Function_46(StackVal, Global_34573) > IntToFloat(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

float Function_46(bool bParam0, bool bParam1) //Position: 0x1878 / 6264
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_48(bParam0);
			vVar0 = { StackVal, StackVal, Function_48(bParam0) };
			Function_47(bParam1);
			vVar3 = { StackVal, StackVal, Function_47(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

vector3 Function_47(bool bParam0) //Position: 0x1918 / 6424
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

vector3 Function_48(bool bParam0) //Position: 0x1984 / 6532
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

void Function_49(vector3 vParam0, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7, bool bParam8) //Position: 0x19EE / 6638
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
	else if (!Function_7(StackVal, StackVal, vParam0))
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
			Function_75(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_74(0);
		}
		if (bParam8)
		{
			Function_72(0, GET_THIS_SCRIPT_ID());
			Global_3373 = GET_THIS_SCRIPT_ID();
			Function_70(iParam4);
			Global_3401 = 1;
		}
		Function_68(iParam4);
		if (Function_67(StackVal, 32768))
		{
			Function_64(1);
		}
		Global_16876[iParam46].f_12++;
		Function_50(408, 1, 0, 0);
	}
}

int Function_50(int iParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x1AF5 / 6901
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
	Function_63(iParam0, TO_FLOAT(bParam1), 1);
	Function_62(iParam0);
	if (uParam2 && bParam1 == 0)
	{
		Function_51(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, uParam3);
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

void Function_51(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x1D15 / 7445
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_61(390))), 32);
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
					bVar19 = (Function_60(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_60(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_58(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_55(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_53(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_52(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_172(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, bParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, false, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, bParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, false, 0);
						}
						break;
					}
			}
	}
}

var Function_52(int iParam0) //Position: 0x2342 / 9026
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_53(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2353 / 9043
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_54("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_54("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_54("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_54(char* cParam0, bool bParam1) //Position: 0x2448 / 9288
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_55(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2461 / 9313
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_57(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_56(Function_57(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_56(int iParam0, int iParam1) //Position: 0x24C6 / 9414
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_57(int iParam0, bool bParam1) //Position: 0x24D8 / 9432
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_58(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x24EA / 9450
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
	if (((Function_59(iParam0) != 19 || Function_59(iParam0) != 17) || Function_59(iParam0) != 10) || Function_59(iParam0) != 9)
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

int Function_59(int iParam0) //Position: 0x261A / 9754
{
	return Global_35278[iParam020].f_48;
}

float Function_60(int iParam0) //Position: 0x2629 / 9769
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_61(int iParam0) //Position: 0x2662 / 9826
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_62(int iParam0) //Position: 0x269F / 9887
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

int Function_63(int iParam0, float fParam1, bool bParam2) //Position: 0x2839 / 10297
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

void Function_64(bool bParam0) //Position: 0x2A7D / 10877
{
	if (bParam0)
	{
		Function_66(0x10000000);
	}
	else
	{
		Function_65(0x10000000);
	}
	Global_26316.f_172 = 0;
	return;
}

void Function_65(int iParam0) //Position: 0x2AA1 / 10913
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_66(int iParam0) //Position: 0x2ABE / 10942
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

bool Function_67(var uParam0, int iParam1) //Position: 0x2AD1 / 10961
{
	return (uParam0 && iParam1) == 0;
}

void Function_68(int iParam0) //Position: 0x2ADE / 10974
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
			bVar1 = Function_69(iVar0 * 60);
			ADD_TIME(&Global_17483[iParam075] + 264, 0, false, bVar1, 0);
			Global_16876[iParam06] = Global_17483[iParam075].f_264;
		}
	}
	return;
}

int Function_69(int iParam0) //Position: 0x2B82 / 11138
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_70(int iParam0) //Position: 0x2B98 / 11160
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
	Function_71(&Var0 + 80[Var0.f_763], &(Global_16876[iParam06]), iParam0);
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

void Function_71(var uParam0, var uParam1, int iParam2) //Position: 0x2C36 / 11318
{
	uParam0->f_4 = iParam2;
	*uParam0 = uParam1->f_12;
	uParam0->f_8 = 1;
	return;
}

void Function_72(int iParam0, int iParam1) //Position: 0x2C4E / 11342
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
			Function_73(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_73(int iParam0) //Position: 0x2CD0 / 11472
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

void Function_74(int iParam0) //Position: 0x2D1E / 11550
{
	Global_12976.f_76 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 76, 0, false, (iParam0 + Function_69(900)), 0);
	return;
}

void Function_75(var uParam0) //Position: 0x2D40 / 11584
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, false, (uParam0 + Function_69(200)), 0);
	return;
}

vector3 Function_76() //Position: 0x2D61 / 11617
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_77(var uParam0, int iParam1) //Position: 0x2D6A / 11626
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

int Function_78(bool bParam0, bool bParam1) //Position: 0x2D79 / 11641
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_OBJECTSET_VALID(bVar0))
	{
		bVar1 = CREATE_OBJECT_ITERATOR(Global_26314);
		ITERATE_EVERYWHERE(bVar1);
		ITERATE_ON_OBJECT_TYPE(bVar1, 2);
		ITERATE_ON_PARTIAL_NAME(bVar1, "nSharedLaw");
		bVar0 = GET_OBJECTSET_FROM_OBJECT(START_OBJECT_ITERATOR(bVar1));
		DESTROY_ITERATOR(bVar1);
	}
	else
	{
		bVar0 = bParam1;
	}
	if (!IS_OBJECTSET_VALID(bVar0))
	{
		return 0;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return 0;
	}
	if (IS_OBJECT_IN_OBJECTSET(bParam0, bVar0))
	{
		return 0;
	}
	ADD_OBJECT_TO_OBJECTSET(bParam0, bVar0);
	CLEAN_OBJECTSET(bVar0);
	return 1;
}

bool Function_79(bool bParam0) //Position: 0x2DF2 / 11762
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

var Function_80(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, vector3 vParam5, vector3 vParam8) //Position: 0x2E38 / 11832
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		LOG_ERROR("Layout is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_81(bParam2))
	{
		LOG_ERROR("riderTypeName is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_81(bParam4))
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

bool Function_81(bool bParam0) //Position: 0x2F5D / 12125
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_82(vector3 vParam0) //Position: 0x2F74 / 12148
{
	*uParam3 = vParam0.x;
	uParam3->f_4 = vParam0.y;
	uParam3->f_8 = vParam0.z;
}

bool Function_83(int iParam0) //Position: 0x2F91 / 12177
{
	if (*iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int Function_84(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x2FA1 / 12193
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
			Function_121(iParam0 + 24);
			vVar1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_121(iParam0 + 24), *(iParam0 + 168), StackVal) };
			Function_121(iParam0 + 24);
			vVar4 = { StackVal, StackVal, Function_121(iParam0 + 24) };
			Var10 = { StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 24) };
			*(iParam0 + 24) = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_119(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, Var10, iParam0->f_152, vVar1) };
			if (Function_118(iParam0 + 24))
			{
				*iParam0 = 16;
				return 3;
			}
			Function_121(iParam0 + 24);
			*(iParam0 + 168) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar4, Function_121(iParam0 + 24), StackVal) };
			*(iParam0 + 168) = { 0.0f, UNK_0x9C40E671(iParam0 + 168), 0.0f };
			if (bParam1)
			{
				Function_110(iParam0, 0);
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
			if (Function_104(iParam0, bParam1, bParam3))
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
			if (!IS_ACTOR_VALID(Function_79(StackVal)))
			{
				*iParam0 = 16;
				return 5;
			}
			GET_POSITION(Function_79(StackVal), &vVar4);
			*(iParam0 + 24) = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_103(StackVal, StackVal, vVar4) };
			GET_ACTOR_VELOCITY(Function_79(StackVal), &vVar1);
			GET_POSITION(Function_79(StackVal), &vVar7);
			if (Function_118(iParam0 + 24))
			{
				*(iParam0 + 24) = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_101(Function_79(StackVal)) };
				return 7;
			}
			if (Function_104(iParam0, bParam1, bParam3))
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
			if (Function_104(iParam0, bParam1, bParam3))
			{
				*iParam0 = 7;
			}
			else
			{
				return 6;
			}
			if (!Function_93(iParam0))
			{
				*iParam0 = 9;
				return 7;
			}
			if (!Function_104(iParam0, bParam1, bParam3))
			{
				*iParam0 = 16;
				return 6;
			}
			*iParam0 = 7;
		
		case 0x00000008:
			break;
		
		case 0x00000007:
			if (!Function_89(iParam0))
			{
				*iParam0 = 6;
				return 0;
			}
			if (bParam1)
			{
				if (Function_87(iParam0))
				{
					bVar16 = true;
				}
				if (Function_86(StackVal))
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
					Function_110(iParam0, 0);
				}
			}
			GET_POSITION(Function_79(StackVal), &vVar7);
			if (iParam0->f_88)
			{
				if (!Function_7(StackVal, StackVal, *(iParam0 + 136)))
				{
					if (Function_85(StackVal, StackVal, StackVal, StackVal, vVar7, *(iParam0 + 136)) > iParam0->f_128)
					{
						SQUAD_GOALS_CLEAR(StackVal);
						TASK_GO_TO_COORD(Function_79(StackVal), iParam0 + 136, 1);
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

float Function_85(vector3 vParam0, vector3 vParam3) //Position: 0x32BC / 12988
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

bool Function_86(bool bParam0) //Position: 0x32D9 / 13017
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

bool Function_87(int iParam0) //Position: 0x3305 / 13061
{
	if (!IS_VOLUME_VALID(Global_28842.f_28))
	{
		return 0;
	}
	if (StackVal || (StackVal || StackVal != 2 != 4) != 1)
	{
		if (Function_88(StackVal, Global_28842.f_28))
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

bool Function_88(bool bParam0, bool bParam1) //Position: 0x3374 / 13172
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

bool Function_89(int iParam0) //Position: 0x33F6 / 13302
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	
	if (DECOR_CHECK_EXIST(StackVal, "coachService"))
	{
		return 1;
	}
	Function_121(iParam0 + 24);
	bVar6 = Function_92(StackVal, StackVal, StackVal, Function_121(iParam0 + 24));
	GET_POSITION(bVar6, &vVar0);
	Function_121(iParam0 + 24);
	vVar3 = { StackVal, StackVal, Function_121(iParam0 + 24) };
	if (iParam0->f_156 > 1.0f)
	{
		iParam0->f_156 = Function_91(StackVal, iParam0->f_72);
	}
	if (StackVal > Function_90(VDIST(vVar3, vVar0), Function_91(iParam0->f_156, iParam0->f_72)))
	{
		*iParam0 = 6;
		return 0;
	}
	if (Function_26())
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

float Function_90(bool bParam0, int iParam1) //Position: 0x34A0 / 13472
{
	if (bParam0 > iParam1)
	{
		return bParam0;
	}
	return iParam1;
}

int Function_91(bool bParam0, int iParam1) //Position: 0x34B3 / 13491
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

var Function_92(vector3 vParam0, bool bParam3) //Position: 0x35C4 / 13764
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	
	bVar0 = false;
	bVar1 = 4294967295;
	bVar2 = -1.0f;
	if (Function_7(StackVal, StackVal, vParam0))
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

bool Function_93(bool bParam0) //Position: 0x3745 / 14149
{
	var uVar0;
	bool bVar3;
	
	if (DECOR_CHECK_EXIST(StackVal, "wasstickup"))
	{
		DECOR_REMOVE(StackVal, "wasstickup");
		return 1;
	}
	Function_121(bParam0 + 24);
	bVar3 = Function_92(StackVal, StackVal, StackVal, Function_121(bParam0 + 24));
	GET_POSITION(bVar3, &uVar0);
	*(bParam0 + 24) = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_94(StackVal, StackVal, StackVal, StackVal, StackVal, bParam0, *(bParam0 + 24), bParam0->f_152, 2.5f, 0) };
	if (Function_118(bParam0 + 24))
	{
		return 0;
	}
	return 1;
}

struct<24> Function_94(int iParam0, struct<6> Param1, bool bParam7, float fParam8, var uParam9) //Position: 0x37B8 / 14264
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
	
	Function_121(&Param1);
	vVar6 = { StackVal, StackVal, Function_121(&Param1) };
	bVar9 = false;
	uVar11 = Function_100(StackVal, iParam0->f_164);
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
	GET_OBJECT_POSITION(Function_79(StackVal), &uVar15);
	vVar18 = { 0.0f, 0.0f, -1.0f };
	if (!IS_OBJECTSET_VALID(iParam0->f_160))
	{
		iParam0->f_160 = CREATE_OBJECTSET_IN_LAYOUT(Function_172(), Global_28841, 36, 1);
	}
	bVar32 = 4294967295;
	while (!bVar10)
	{
		bVar31 = START_CURVE_QUERY(Global_28841, vVar6, uVar11, fVar12, fVar13, Function_90(Function_99(iParam0), ((fVar13 - fVar12) / 2.0f)), 0);
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
					Function_121(&Var25);
					Function_121(&Param1);
					vVar21 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_121(&Param1), Function_121(&Var25), StackVal) };
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
		else if (Function_7(StackVal, StackVal, vVar18))
		{
			bVar32 = ROUND((TO_FLOAT(RAND_INT_RANGE(false, (GET_NUM_CURVES_IN_CURVE_QUERY(bVar31) - 1000))) / 1000.0f));
		}
		else if (Global_3386)
		{
			Function_121(&Param1);
			vVar18 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_121(&Param1), Global_34574, StackVal) };
			VNORMALIZE(&vVar18);
			Var35 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_2() };
			Var41 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_2() };
			bVar9 = false;
			while (bVar9 <= GET_NUM_CURVES_IN_CURVE_QUERY(bVar31))
			{
				bVar47 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(bVar31, bVar9);
				GET_CURVE_POINT(bVar47, 1.0f, &Var35, 0);
				GET_CURVE_POINT(bVar47, 0.0f, &Var41, 0);
				Function_121(&Param1);
				Function_121(&Var35);
				Function_121(&Param1);
				Function_121(&Var41);
				if (StackVal > Function_85(StackVal, StackVal, StackVal, Function_85(StackVal, StackVal, StackVal, StackVal, Function_121(&Param1), Function_121(&Var35)), Function_121(&Param1), Function_121(&Var41)))
				{
					UNK_0x04D89A35(bVar47, 1.0f, 0.0f, -5.0f, &Var25);
				}
				else
				{
					UNK_0x04D89A35(bVar47, 0.0f, 0.0f, 5.0f, &Var25);
				}
				if (Global_30842[12])
				{
					Function_98(StackVal, StackVal, StackVal, StackVal, StackVal, Var25);
					PRINTNL();
				}
				Function_121(&Var25);
				Function_121(&Param1);
				vVar21 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_121(&Param1), Function_121(&Var25), StackVal) };
				VNORMALIZE(&vVar21);
				fVar24 = VDOT(&vVar21, &vVar18);
				fVar24 = (fVar24 * RAND_FLOAT_GAUSSIAN(0.5f, 0.5f));
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
			Function_121(&Param1);
			vVar18 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_121(&Param1), Global_34574, StackVal) };
			VNORMALIZE(&vVar18);
			bVar9 = false;
			while (bVar9 <= GET_NUM_CURVES_IN_CURVE_QUERY(bVar31))
			{
				bVar47 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(bVar31, bVar9);
				GET_CURVE_POINT(bVar47, 1.0f, &Var35, 0);
				GET_CURVE_POINT(bVar47, 0.0f, &Var41, 0);
				Function_121(&Param1);
				Function_121(&Var35);
				Function_121(&Param1);
				Function_121(&Var41);
				if (StackVal > Function_85(StackVal, StackVal, StackVal, Function_85(StackVal, StackVal, StackVal, StackVal, Function_121(&Param1), Function_121(&Var35)), Function_121(&Param1), Function_121(&Var41)))
				{
					UNK_0x04D89A35(bVar47, 1.0f, Var35.f_16, 5.0f, &Var25);
				}
				else
				{
					UNK_0x04D89A35(bVar47, 0.0f, Var41.f_16, 5.0f, &Var25);
				}
				Function_121(&Var25);
				Function_121(&Param1);
				vVar21 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_121(&Param1), Function_121(&Var25), StackVal) };
				VNORMALIZE(&vVar21);
				fVar24 = VDOT(&vVar21, &vVar18);
				fVar24 = (fVar24 * RAND_FLOAT_GAUSSIAN(0.25f, 1.0f));
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
	Function_121(&Var0);
	vVar48 = { StackVal, StackVal, Function_121(&Var0) };
	GET_CURVE_POINT(iParam0->f_152, 1.0f, &Var51, 0);
	GET_CURVE_POINT(iParam0->f_152, 0.0f, &Var57, 0);
	if (StackVal < Function_97(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_97(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var51, Param1), Var57, Param1))
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
			Function_121(&Var25);
			vVar48 = { StackVal, StackVal, Function_121(&Var25) };
			bVar9++;
		}
		Function_121(&Var0);
		vVar48 = { StackVal, StackVal, Function_121(&Var0) };
	}
	Function_95(iParam0);
	UNK_0xDF93BD7C(bVar31);
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

void Function_95(int iParam0) //Position: 0x3CAE / 15534
{
	if (!Function_83(iParam0))
	{
		return;
	}
	if (!Function_96(StackVal))
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

bool Function_96(bool bParam0) //Position: 0x3D52 / 15698
{
	if (bParam0 > 0 || bParam0 < 3)
	{
		return 0;
	}
	return 1;
}

float Function_97(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11) //Position: 0x3D67 / 15719
{
	vector3 vVar0;
	vector3 vVar3;
	
	Function_121(&bParam0);
	vVar0 = { StackVal, StackVal, Function_121(&bParam0) };
	Function_121(&bParam6);
	vVar3 = { StackVal, StackVal, Function_121(&bParam6) };
	return VDIST(vVar0, vVar3);
}

void Function_98(struct<17> Param0) //Position: 0x3D8C / 15756
{
	Function_121(&Param0);
	PRINTVECTOR(Function_121(&Param0));
	PRINTSTRING(": t=");
	PRINTFLOAT(Param0.f_12);
	PRINTSTRING(" slope=");
	PRINTFLOAT(Param0.f_16);
}

var Function_99(int iParam0) //Position: 0x3DC1 / 15809
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
					return 2.5f;
					break;
				
				case 0x00000001:
					return 3.75f;
					break;
				
				case 0x00000002:
					return 6.25f;
					break;
				
				case 0x00000004:
					return 8.75f;
					break;
				
				case 0x00000003:
					return 12.5f;
					break;
			}
			break;
		
		default:
			LOG_ERROR("Unknown Traffic Type in NextTravelFreq");
			break;
	}
	return 6.25f;
}

int Function_100(int iParam0, int iParam1) //Position: 0x3E79 / 15993
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

struct<24> Function_101(bool bParam0) //Position: 0x3EA9 / 16041
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = { 0.0f, -50.0f, 0.0f };
	GET_OBJECT_RELATIVE_POSITION(GET_OBJECT_FROM_ACTOR(bParam0), vVar0, &vVar3);
	if (!Function_102(&vVar3, 50.0f, &vVar0, 10))
	{
		vVar0 = { StackVal, StackVal, vVar3 };
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, Function_103(StackVal, StackVal, vVar0);
}

bool Function_102(int iParam0, float fParam1, int iParam2, int iParam3) //Position: 0x3EEC / 16108
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
		if (!Function_7(StackVal, StackVal, *iParam2))
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
			if (!Function_7(StackVal, StackVal, *iParam2))
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

struct<24> Function_103(vector3 vParam0) //Position: 0x4020 / 16416
{
	struct<6> Var0;
	
	Var0 = vParam0.x;
	Var0.f_4 = vParam0.y;
	Var0.f_8 = vParam0.z;
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

bool Function_104(int iParam0, bool bParam1, bool bParam2) //Position: 0x4040 / 16448
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (!Function_83(iParam0))
	{
		Function_108(iParam0, 1);
		return 0;
	}
	if (DECOR_CHECK_EXIST(StackVal, "coachService"))
	{
		return 1;
	}
	AI_CLEAR_NAV_MATERIAL_USAGE(Function_79(StackVal));
	if (!SQUAD_GOAL_IS_VALID(iParam0->f_12))
	{
		SQUAD_GOALS_CLEAR(StackVal);
	}
	Function_121(iParam0 + 24);
	vVar3 = { StackVal, StackVal, Function_121(iParam0 + 24) };
	vVar0 = { StackVal, StackVal, vVar3 };
	Function_82(StackVal, StackVal, vVar0, iParam0 + 24);
	if (bParam1)
	{
		iParam0->f_76 = Function_107(StackVal, iParam0->f_76, iParam0->f_80);
		if (!iParam0->f_96 || iParam0->f_72 != 4294967295)
		{
			iParam0->f_72 = iParam0->f_76;
		}
	}
	if (bParam2)
	{
		AI_SET_NAV_MATERIAL_USAGE(StackVal, Function_106(Function_79(StackVal)), 0);
	}
	Function_105(iParam0);
	return 1;
}

void Function_105(int iParam0) //Position: 0x40F8 / 16632
{
	int iVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(StackVal))
	{
		return;
	}
	iVar1 = 2;
	if (Function_12())
	{
		iVar1 = 0;
	}
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

int Function_106(int iParam0) //Position: 0x4298 / 17048
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

int Function_107(int iParam0, int iParam1, int iParam2) //Position: 0x42BF / 17087
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_12())
	{
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
	if (iParam2 != 0)
	{
		return iParam2;
	}
	bVar1 = RAND_INT_RANGE(true, 10000);
	iParam1 = iParam1;
	switch (iParam0)
	{
		case 0x00000001:
			if (bVar1 <= 9000)
			{
				return 4;
			}
			return 3;
			break;
		
		case 0x00000003:
			if (bVar1 <= 7500)
			{
				return 2;
			}
			return 4;
			break;
		
		case 0x00000002:
			if (bVar1 <= 7500)
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

void Function_108(int iParam0, int iParam1) //Position: 0x43FD / 17405
{
	struct<5> Var0;
	char* cVar6[16];
	struct<13> Var10;
	
	if (!Global_30900[1] && iParam1)
	{
		return;
	}
	if (!Function_83(iParam0))
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
			Var10 = 0.9f;
			Var10.f_4 = 0.55f;
			Var10.f_8 = 0.1f;
			Var10.f_12 = 1.0f;
			break;
		
		case 0x00000002:
			Var10 = 0.9f;
			Var10.f_4 = 0.9f;
			Var10.f_8 = 0.1f;
			Var10.f_12 = 1.0f;
			break;
		
		case 0x00000004:
			Var10 = 0.2f;
			Var10.f_4 = 0.8f;
			Var10.f_8 = 0.1f;
			Var10.f_12 = 1.0f;
			break;
		
		case 0x00000003:
			Var10 = 0.1f;
			Var10.f_4 = 0.1f;
			Var10.f_8 = 1.0f;
			Var10.f_12 = 1.0f;
			break;
	}
	GET_POSITION(Function_79(StackVal), &Var0);
	vVar14 = { 0.0f, 1.0f, 0.0f };
	if (Function_26())
	{
		fVar17 = 0.0f;
		if (!Function_109(iParam0, &fVar17, 0))
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
	Var0.f_4 = (StackVal + 2.5f);
	Var0.f_4 = (StackVal + 1.0f);
	Var0.f_4 = (StackVal + 0.5f);
	switch (StackVal)
	{
		case 0x00000001:
			break;
		
		case 0x00000002:
			break;
	}
	Function_121(iParam0 + 24);
	vVar3 = { StackVal, StackVal, Function_121(iParam0 + 24) };
	return;
}

bool Function_109(int iParam0, var uParam1, bool bParam2) //Position: 0x4576 / 17782
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (StackVal || !SQUAD_IS_VALID(!Function_83(iParam0)))
	{
		*uParam1 = 0.0f;
		return 0;
	}
	bVar2 = true;
	iVar3 = SQUAD_GET_SIZE(StackVal);
	iVar4 = 0;
	bVar1 = false;
	while (bVar1 <= iVar3)
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
	else if (iVar4 <= (iVar3 + bVar5))
	{
		*uParam1 = 0.5f;
	}
	else
	{
		*uParam1 = 0.0f;
	}
	return bVar2;
}

void Function_110(int iParam0, int iParam1) //Position: 0x465C / 18012
{
	if (!Function_12())
	{
		Function_117(StackVal);
		if (Global_28842.f_80 != 0)
		{
			iParam0->f_72 = Global_28842.f_80;
			Function_116(StackVal, iParam0->f_72);
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
			Function_116(StackVal, iParam0->f_72);
			if (StackVal == 2)
			{
				Function_115(StackVal, 1);
			}
		}
		else if (StackVal || Function_86((Global_3404 || Function_113(131072))))
		{
			iParam0->f_72 = 4;
			Function_116(StackVal, iParam0->f_72);
			if (StackVal == 2)
			{
				Function_115(StackVal, 1);
			}
		}
		else if (iParam0->f_92)
		{
			iParam0->f_72 = Function_112(StackVal, iParam0->f_80);
			Function_116(StackVal, iParam0->f_72);
		}
		else if (iParam0->f_96)
		{
			iParam0->f_72 = Function_111(StackVal, iParam0->f_80);
			Function_116(StackVal, iParam0->f_72);
			if (StackVal == 2)
			{
				Function_115(StackVal, 0);
			}
		}
		else
		{
			iParam0->f_72 = iParam0->f_76;
			if (StackVal == 2)
			{
				Function_115(StackVal, 1);
			}
		}
	}
	else
	{
		Function_117(StackVal);
		if (Global_28842.f_80 != 0)
		{
			iParam0->f_72 = Global_28842.f_80;
			Function_116(StackVal, iParam0->f_72);
		}
		else if (StackVal || Function_86(Function_113(131072)))
		{
			iParam0->f_72 = 3;
			Function_116(StackVal, iParam0->f_72);
			if (StackVal == 2)
			{
				Function_115(StackVal, 1);
			}
		}
		else if (iParam0->f_92)
		{
			iParam0->f_72 = Function_112(StackVal, iParam0->f_80);
			Function_116(StackVal, iParam0->f_72);
		}
		else if (iParam0->f_96)
		{
			iParam0->f_72 = Function_111(StackVal, iParam0->f_80);
			Function_116(StackVal, iParam0->f_72);
			if (StackVal == 2)
			{
				Function_115(StackVal, 0);
			}
		}
		else
		{
			iParam0->f_72 = iParam0->f_76;
			if (StackVal == 2)
			{
				Function_115(StackVal, 1);
			}
		}
	}
	return;
}

int Function_111(bool bParam0, int iParam1) //Position: 0x4844 / 18500
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_12())
	{
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
	if (iParam1 != 0)
	{
		return iParam1;
	}
	bVar1 = RAND_INT_RANGE(true, 10000);
	switch (bParam0)
	{
		case 0x00000001:
			if (bVar1 <= 9000)
			{
				return 4;
			}
			return 3;
			break;
		
		case 0x00000002:
			if (bVar1 <= 9000)
			{
				return 2;
			}
			return 4;
			break;
		
		default:
			LOG_ERROR("Unknown Traffic Type in TownSpeed");
			break;
	}
	return 2;
}

int Function_112(int iParam0, bool bParam1) //Position: 0x4930 / 18736
{
	if (!Function_12())
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
	if (bParam1 != 0)
	{
		return bParam1;
	}
	switch (iParam0)
	{
		case 0x00000001:
		case 0x00000003:
			return 4;
			break;
		
		case 0x00000002:
			return 2;
			break;
		
		default:
			LOG_ERROR("Unknown Traffic Type in PlayerNearSpeed");
			break;
	}
	return 2;
}

bool Function_113(int iParam0) //Position: 0x49FB / 18939
{
	return Function_114(&Global_28842, iParam0);
}

int Function_114(var uParam0, int iParam1) //Position: 0x4A09 / 18953
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_115(bool bParam0, int iParam1) //Position: 0x4A25 / 18981
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

void Function_116(bool bParam0, int iParam1) //Position: 0x4A4D / 19021
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		TASK_OVERRIDE_SET_MOVETYPE(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0), iParam1);
		bVar0++;
	}
	return;
}

void Function_117(bool bParam0) //Position: 0x4A75 / 19061
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

bool Function_118(bool bParam0) //Position: 0x4A9B / 19099
{
	return ((((StackVal && (StackVal && *bParam0 != 0.0f != 0.0f) != 0.0f) && bParam0->f_12 != 0.0f) && bParam0->f_16 != 0.0f) && bParam0->f_20 != 4294967295);
}

struct<24> Function_119(int iParam0, struct<6> Param1, bool bParam7, vector3 vParam8) //Position: 0x4AC9 / 19145
{
	bool bVar0;
	bool bVar6;
	struct<6> Var12;
	
	if (!IS_OBJECT_VALID(bParam7))
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, Var12;
	}
	iParam0->f_148 = Function_120(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, bParam7, Param1, vParam8);
	if (iParam0->f_148 >= 0)
	{
		GET_CURVE_POINT(bParam7, 1.0f, &Var12, 0);
		UNK_0x19D652F9(bParam7, 1.0f, &Param1, &bVar0);
		Function_121(&bVar0);
		Function_121(&Param1);
		*(iParam0 + 168) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_121(&Param1), Function_121(&bVar0), StackVal) };
		*(iParam0 + 168) = { 0.0f, UNK_0x9C40E671(iParam0 + 168), 0.0f };
	}
	else
	{
		GET_CURVE_POINT(bParam7, 0.0f, &Var12, 0);
		UNK_0x19D652F9(bParam7, -1.0f, &Param1, &bVar6);
		Function_121(&bVar6);
		Function_121(&Param1);
		*(iParam0 + 168) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_121(&Param1), Function_121(&bVar6), StackVal) };
		*(iParam0 + 168) = { 0.0f, UNK_0x9C40E671(iParam0 + 168), 0.0f };
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var12;
}

int Function_120(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9) //Position: 0x4B67 / 19303
{
	bool bVar0;
	bool bVar6;
	vector3 vVar12;
	vector3 vVar15;
	float fVar18;
	float fVar19;
	
	UNK_0x19D652F9(bParam0, 1.0f, &bParam1, &bVar0);
	UNK_0x19D652F9(bParam0, -1.0f, &bParam1, &bVar6);
	Function_121(&bVar0);
	Function_121(&bParam1);
	vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_121(&bParam1), Function_121(&bVar0), StackVal) };
	fVar18 = VDOT(&uParam7, &vVar12);
	Function_121(&bVar6);
	Function_121(&bParam1);
	vVar15 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_121(&bParam1), Function_121(&bVar6), StackVal) };
	fVar19 = VDOT(&uParam7, &vVar15);
	if (fVar19 > fVar18)
	{
		return 1;
	}
	return 4294967295;
}

vector3 Function_121(bool bParam0) //Position: 0x4BC0 / 19392
{
	vector3 vVar0;
	
	vVar0.x = *bParam0;
	vVar0.f_4 = StackVal;
	vVar0.f_8 = StackVal;
	return StackVal, StackVal, vVar0;
}

void Function_122(int iParam0, vector3 vParam1, struct<5> Param4, var uParam9) //Position: 0x4BDF / 19423
{
	*(iParam0 + 24) = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_103(StackVal, StackVal, vParam1) };
	(iParam0 + 24)->f_12 = Param4;
	(iParam0 + 24)->f_16 = StackVal;
	iParam0->f_152 = uParam7;
	iParam0->f_112 = uParam9;
	iParam0->f_116 = uParam8;
	Function_123(iParam0);
	iParam0->f_20 = SQUAD_GET_SIZE(StackVal);
	Function_95(iParam0);
}

void Function_123(var uParam0) //Position: 0x4C2D / 19501
{
	struct<2> Var0;
	
	if (!SQUAD_IS_VALID(StackVal))
	{
		Function_124();
		Var0 = { StackVal, Function_124() };
		uParam0->f_8 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Global_28841, &Var0));
	}
	*uParam0 = 1;
	return;
}

struct<8> Function_124() //Position: 0x4C58 / 19544
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

void Function_125(int iParam0, vector3 vParam1) //Position: 0x4CAF / 19631
{
	*(iParam0 + 168) = { StackVal, StackVal, vParam1 };
}

bool Function_126(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x4CC1 / 19649
{
	struct<8> Var0;
	bool bVar8;
	bool bVar9;
	
	if (Global_3371 && iParam0->f_32)
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_164(GET_SCRIPT_NAME()) };
		bVar8 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Global_26150, &Var0, 4.203895E-45f, Function_162(*(iParam0 + 8), 0.0f, Global_34573, *(iParam0 + 8)), 0.0f, iParam0->f_52, 20.0f, iParam0->f_52);
		DECOR_SET_INT(bVar8, "script", GET_THIS_SCRIPT_ID());
		if (iParam0->f_56 != 4294967295)
		{
			DECOR_SET_INT(StackVal, bVar8, "category");
			Function_160(&bVar8, iParam0->f_32);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
		*(iParam0 + 8) = { StackVal, StackVal, Global_34574 };
		return 1;
	}
	*uParam3 = 0;
	if (!Function_127(iParam0))
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
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_164("restrictVol") };
		bVar9 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Global_26150, &Var0, 4.203895E-45f, Function_162(*(iParam0 + 8), 0.0f, Global_34573, *(iParam0 + 8)), 0.0f, iParam0->f_52, 20.0f, iParam0->f_52);
		DECOR_SET_INT(bVar9, "script", GET_THIS_SCRIPT_ID());
		if (iParam0->f_56 != 4294967295)
		{
			DECOR_SET_INT(StackVal, bVar9, "category");
			Function_160(&bVar9, iParam0->f_32);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
	}
	return 1;
}

bool Function_127(int iParam0) //Position: 0x5053 / 20563
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
			Function_159(iParam0 + 4);
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
				vVar3 = { 0.0f, 0.0f, Function_158(1) };
				ROTATE_VECTOR_XZ(&vVar3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar3, StackVal) };
				ITERATE_IN_SPHERE(StackVal, vVar3, Function_158(1));
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
						bVar0 = Function_157(StackVal, StackVal, StackVal, vVar9, 0.01f);
					}
					else
					{
						bVar0 = Function_156(StackVal, StackVal, StackVal, vVar9, 0.1f, "locflag", (iParam0 + 64 + 24)->f_16);
					}
				}
				else if ((iParam0 + 64 + 24)->f_16 == 0)
				{
					bVar0 = Function_154(StackVal, StackVal, StackVal, vVar9, Function_155());
				}
				else
				{
					bVar0 = Function_153(StackVal, StackVal, StackVal, vVar9, Function_155(), "locflag", (iParam0 + 64 + 24)->f_16);
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
			Function_159(iParam0 + 4);
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
					if (Function_152(bVar14))
					{
						if (StackVal == (iParam0 + 64)->f_48)
						{
							if ((StackVal && Global_29008[bVar14]) >= 0)
							{
								GET_OBJECT_POSITION(bVar1, &vVar3);
								if (VDIST(vVar9, vVar3) < fVar13 && VDIST(vVar9, vVar3) > Function_158(1))
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
				Function_102(iParam0 + 8, 99.0f, iParam0 + 8, 10);
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
				Function_151(&vVar9, &vVar6);
				vVar3 = { StackVal, StackVal, Function_151(&vVar9, &vVar6) };
				if (!Function_7(StackVal, StackVal, vVar3))
				{
					PRINTSTRING("Player Pos: ");
					PRINTVECTOR(vVar9);
					PRINTNL();
					Function_150(&fVar13, &fVar12);
					if (VDIST(vVar3, vVar9) < ((fVar13 + ((fVar12 - fVar13) / 2.0f)) * 0.8f))
					{
						iVar2 = Function_147(StackVal, StackVal, iParam0, vVar3);
					}
				}
			}
			else
			{
				iVar2 = Function_143(iParam0);
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
					if (!Function_142(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (iParam0->f_60 == 1)
				{
					if (!Function_141(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (Function_13(StackVal, 131072))
				{
					if (StackVal || Function_140(StackVal, Function_140(StackVal, StackVal, *(iParam0 + 8)), Global_34574))
					{
						return 0;
					}
				}
				if (StackVal & 1024 == 1024)
				{
					if (Function_139(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (!Function_134(iParam0 + 8, iParam0 + 52, 0, iParam0->f_32))
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
				bVar23 = START_CURVE_QUERY(Global_28841, vVar3, Function_100((iParam0 + 64)->f_120, 0), 0.0f, 20.0f, 5.0f, 0);
			}
			else
			{
				bVar23 = START_CURVE_QUERY(Global_28841, vVar9, Function_100((iParam0 + 64)->f_120, 0), 120.0f, 150.0f, 5.0f, 0);
			}
			if (GET_NUM_POINTS_IN_CURVE_QUERY(bVar23) >= 0)
			{
				bVar21 = RAND_INT_RANGE(false, (GET_NUM_POINTS_IN_CURVE_QUERY(bVar23) - 1));
				GET_POINT_FROM_CURVE_QUERY(bVar23, bVar21, &Var15);
				Function_121(&Var15);
				*(iParam0 + 8) = { StackVal, StackVal, Function_121(&Var15) };
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
				if (!Function_142(StackVal, StackVal, *(iParam0 + 8)))
				{
					return 0;
				}
			}
			if (iParam0->f_60 == 1)
			{
				if (!Function_141(StackVal, StackVal, *(iParam0 + 8)))
				{
					return 0;
				}
			}
			if (iParam0->f_60 == 0)
			{
				if (!(StackVal || Function_142(StackVal, Function_141(StackVal, StackVal, *(iParam0 + 8)), *(iParam0 + 8))))
				{
					return 0;
				}
			}
			if (Function_13(StackVal, 131072))
			{
				if (StackVal || Function_140(StackVal, Function_140(StackVal, StackVal, *(iParam0 + 8)), Global_34574))
				{
					return 0;
				}
			}
			if (StackVal && !Function_134(iParam0 + 8, iParam0 + 52, 0, iParam0->f_32) == 262144)
			{
				return 0;
			}
			break;
		
		case 0x00000004:
			if (!Function_132((iParam0 + 64)->f_120) < 0)
			{
				return 0;
			}
			break;
		
		case 0x00000007:
			switch ((iParam0 + 64)->f_128)
			{
				case 0x00000001:
					bVar24 = Function_129(StackVal, Global_29004, Global_29005, Global_29006, 1);
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
						bVar24 = Function_129(StackVal, Global_29004, Global_29005, (Global_29006 + iVar22), 1);
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
	if (Function_128(StackVal, StackVal, *(iParam0 + 8)))
	{
		return 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(*(iParam0 + 8), 10.0f))
	{
		return 0;
	}
	return 1;
}

bool Function_128(vector3 vParam0) //Position: 0x587D / 22653
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

bool Function_129(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x58B2 / 22706
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
								return Function_130(&Global_6298, &Global_7189, bParam3);
								break;
							
							case 0x00000001:
								return Function_130(&Global_6364, &Global_7287, bParam3);
								break;
							
							case 0x00000002:
								return Function_130(&Global_6351, &Global_7268, bParam3);
								break;
							
							default:
								return Function_130(&Global_6391, &Global_7327, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_130(&Global_6501, &Global_7490, bParam3);
								break;
							
							case 0x00000001:
								return Function_130(&Global_6402, &Global_7343, bParam3);
								break;
							
							case 0x00000003:
								return Function_130(&Global_6433, &Global_7389, bParam3);
								break;
							
							case 0x00000002:
								return Function_130(&Global_6490, &Global_7474, bParam3);
								break;
							
							case 0x00000004:
								return Function_130(&Global_6537, &Global_7543, bParam3);
								break;
							
							default:
								return Function_130(&Global_6532, &Global_7536, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_130(&Global_6563, &Global_7581, bParam3);
								break;
							
							case 0x00000001:
								return Function_130(&Global_6614, &Global_7657, bParam3);
								break;
							
							case 0x00000002:
								return Function_130(&Global_6643, &Global_7700, bParam3);
								break;
							
							default:
								return Function_130(&Global_6550, &Global_7562, bParam3);
								break;
						}
						break;
					
					case 0x00000003:
						switch (bVar1)
						{
							case 0x00000001:
								return Function_130(&Global_6667, &Global_7735, bParam3);
								break;
							
							default:
								return Function_130(&Global_6704, &Global_7790, bParam3);
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
								return Function_130(&Global_6709, &Global_7797, bParam3);
								break;
							
							case 0x00000001:
								return Function_130(&Global_6764, &Global_7879, bParam3);
								break;
							
							case 0x00000002:
								return Function_130(&Global_6785, &Global_7910, bParam3);
								break;
							
							default:
								return Function_130(&Global_6810, &Global_7947, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_130(&Global_6815, &Global_7954, bParam3);
								break;
							
							default:
								return Function_130(&Global_6928, &Global_8122, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000002:
								return Function_130(&Global_6933, &Global_8129, bParam3);
								break;
							
							case 0x00000001:
								return Function_130(&Global_6962, &Global_8172, bParam3);
								break;
							
							case 0x00000003:
								return Function_130(&Global_6987, &Global_8209, bParam3);
								break;
							
							default:
								return Function_130(&Global_7027, &Global_8268, bParam3);
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
		return Function_130(&Global_6298, &Global_7189, bParam3);
	}
	if (bVar1 == Global_30640[1])
	{
		return Function_130(&Global_6364, &Global_7287, bParam3);
	}
	if (bVar1 == Global_30640[2])
	{
		return Function_130(&Global_6351, &Global_7268, bParam3);
	}
	if (bVar1 == Global_30658[0])
	{
		return Function_130(&Global_6501, &Global_7490, bParam3);
	}
	if (bVar1 == Global_30658[1])
	{
		return Function_130(&Global_6402, &Global_7343, bParam3);
	}
	if (bVar1 == Global_30658[3])
	{
		return Function_130(&Global_6433, &Global_7389, bParam3);
	}
	if (bVar1 == Global_30658[2])
	{
		return Function_130(&Global_6490, &Global_7474, bParam3);
	}
	if (bVar1 == Global_30658[4])
	{
		return Function_130(&Global_6537, &Global_7543, bParam3);
	}
	if (bVar1 == Global_30668[0])
	{
		return Function_130(&Global_6563, &Global_7581, bParam3);
	}
	if (bVar1 == Global_30668[1])
	{
		return Function_130(&Global_6614, &Global_7657, bParam3);
	}
	if (bVar1 == Global_30668[2])
	{
		return Function_130(&Global_6643, &Global_7700, bParam3);
	}
	if (bVar1 == Global_30679[1])
	{
		return Function_130(&Global_6667, &Global_7735, bParam3);
	}
	if (bVar1 == Global_30685[0])
	{
		return Function_130(&Global_6709, &Global_7797, bParam3);
	}
	if (bVar1 == Global_30685[1])
	{
		return Function_130(&Global_6764, &Global_7879, bParam3);
	}
	if (bVar1 == Global_30685[2])
	{
		return Function_130(&Global_6785, &Global_7910, bParam3);
	}
	if (bVar1 == Global_30693[0])
	{
		return Function_130(&Global_6815, &Global_7954, bParam3);
	}
	if (bVar1 == Global_30707[2])
	{
		return Function_130(&Global_6933, &Global_8129, bParam3);
	}
	if (bVar1 == Global_30707[1])
	{
		return Function_130(&Global_6962, &Global_8172, bParam3);
	}
	if (bVar1 == Global_30707[3])
	{
		return Function_130(&Global_6987, &Global_8209, bParam3);
	}
	if (bVar1 == Global_30628[0])
	{
		return Function_130(&Global_6391, &Global_7327, bParam3);
	}
	if (bVar1 == Global_30628[1])
	{
		return Function_130(&Global_6532, &Global_7536, bParam3);
	}
	if (bVar1 == Global_30628[2])
	{
		return Function_130(&Global_6550, &Global_7562, bParam3);
	}
	if (bVar1 == Global_30628[3])
	{
		return Function_130(&Global_6704, &Global_7790, bParam3);
	}
	if (bVar1 == Global_30633[0])
	{
		return Function_130(&Global_6810, &Global_7947, bParam3);
	}
	if (bVar1 == Global_30633[2])
	{
		return Function_130(&Global_6928, &Global_8122, bParam3);
	}
	if (bVar1 == Global_30633[1])
	{
		return Function_130(&Global_7027, &Global_8268, bParam3);
	}
	return "";
}

var Function_130(var uParam0, var uParam1, bool bParam2) //Position: 0x5EC7 / 24263
{
	int iVar0;
	
	iVar0 = bParam2;
	if (iVar0 <= *uParam0 || iVar0 > 0)
	{
		return "";
	}
	if (!Function_131(uParam0[iVar02], 2))
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

bool Function_131(var uParam0, int iParam1) //Position: 0x5F19 / 24345
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_132(int iParam0) //Position: 0x5F35 / 24373
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
			if (Function_133(GET_SQUAD_FROM_OBJECT(bVar2)) == iParam0)
			{
				iVar0++;
			}
			bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
		}
	}
	DESTROY_ITERATOR(bVar1);
	return iVar0;
}

int Function_133(bool bParam0) //Position: 0x5F90 / 24464
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 4294967295;
	}
	bVar0 = Function_79(bParam0);
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

bool Function_134(var uParam0, float fParam1, int iParam2, bool bParam3) //Position: 0x5FC8 / 24520
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
	Function_136(4294967295);
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
			else if (Function_135(uParam0, &uVar0) > fVar5)
			{
				return 0;
			}
		}
		iVar3++;
	}
	return 1;
}

float Function_135(var uParam0, int iParam1) //Position: 0x6098 / 24728
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*iParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

int Function_136(bool bParam0) //Position: 0x60B6 / 24758
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
						Function_138(iVar0);
					}
					else if (Global_3386)
					{
						if (Function_137(StackVal, StackVal, Global_34573, vVar1) < 25.0f)
						{
							Function_138(iVar0);
						}
					}
					else if (Function_137(StackVal, StackVal, Global_34573, vVar1) < 55.0f)
					{
						Function_138(iVar0);
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
			Function_138(iVar0);
		}
		iVar0++;
	}
	return 0;
}

float Function_137(bool bParam0, vector3 vParam1) //Position: 0x6217 / 25111
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_48(bParam0);
		vVar0 = { StackVal, StackVal, Function_48(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

void Function_138(int iParam0) //Position: 0x6291 / 25233
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

bool Function_139(vector3 vParam0) //Position: 0x62F2 / 25330
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

int Function_140(vector3 vParam0) //Position: 0x6393 / 25491
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

bool Function_141(vector3 vParam0) //Position: 0x63DF / 25567
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

bool Function_142(vector3 vParam0) //Position: 0x6438 / 25656
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

int Function_143(int iParam0) //Position: 0x64B5 / 25781
{
	float fVar0;
	bool bVar1;
	
	Function_150(&fVar0, &bVar1);
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER_PLAYER();
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	Function_146(0);
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
		Function_145(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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
	Function_144(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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

void Function_144(struct<33> Param0) //Position: 0x6650 / 26192
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

void Function_145(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14) //Position: 0x677C / 26492
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

void Function_146(bool bParam0) //Position: 0x67CD / 26573
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

int Function_147(int iParam0, vector3 vParam1) //Position: 0x6811 / 26641
{
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER(vParam1);
	if (Global_30842[34])
	{
		PRINTVECTOR(vParam1);
		PRINTNL();
	}
	Function_149();
	Function_146(0);
	Function_148(0);
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
		Function_145(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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
	Function_144(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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

void Function_148(bool bParam0) //Position: 0x69B3 / 27059
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

void Function_149() //Position: 0x6A66 / 27238
{
	AMBIENT_SET_DISTANCE_FILTER(0.0f, 24.0f);
	return;
}

void Function_150(float fParam0, int iParam1) //Position: 0x6A75 / 27253
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

vector3 Function_151(var uParam0, int iParam1) //Position: 0x6AFE / 27390
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
		UNK_0x19D652F9(bVar6, 50.0f, &uVar0, &bVar25);
		UNK_0x19D652F9(bVar6, -50.0f, &uVar0, &bVar31);
		Function_121(&bVar25);
		vVar19 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*uParam0, Function_121(&bVar25), StackVal) };
		Function_121(&bVar31);
		vVar22 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*uParam0, Function_121(&bVar31), StackVal) };
		fVar15 = VDOT(&vVar16, &vVar19);
		fVar14 = VDOT(&vVar16, &vVar22);
		Function_150(&fVar7, &fVar8);
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
			Function_121(&bVar31);
			vVar11 = { StackVal, StackVal, Function_121(&bVar31) };
		}
		else
		{
			UNK_0x19D652F9(bVar6, fVar9, &uVar0, &bVar25);
			Function_121(&bVar25);
			vVar11 = { StackVal, StackVal, Function_121(&bVar25) };
		}
	}
	UNK_0xDF93BD7C(bVar10);
	return StackVal, StackVal, vVar11;
}

bool Function_152(int iParam0) //Position: 0x6C0B / 27659
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_153(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, var uParam6) //Position: 0x6C21 / 27681
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
						if (Function_134(&vVar5, &fVar4, 0, 0))
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

var Function_154(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x6CC9 / 27849
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
				if (Function_134(&vVar5, &uVar4, 0, 0))
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

var Function_155() //Position: 0x6D52 / 27986
{
	float fVar0;
	int iVar1;
	
	if (Global_3371)
	{
		return 0.0f;
	}
	Function_150(&fVar0, &iVar1);
	if (fVar0 >= 50.0f)
	{
		return (fVar0 - 10.0f);
	}
	return (fVar0 - 20.0f);
}

var Function_156(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, var uParam6) //Position: 0x6D83 / 28035
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

var Function_157(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x6E18 / 28184
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

float Function_158(bool bParam0) //Position: 0x6E95 / 28309
{
	var uVar0;
	float fVar1;
	
	if (!bParam0)
	{
		Function_150(&uVar0, &fVar1);
		if (fVar1 < 60.0f)
		{
			return (fVar1 + 20.0f);
		}
		return (fVar1 + 10.0f);
	}
	return (190.0f + 20.0f);
}

int Function_159(int iParam0) //Position: 0x6ED0 / 28368
{
	if (IS_ITERATOR_VALID(*iParam0))
	{
		ITERATE_EVERYWHERE(*iParam0);
		ITERATE_ON_PARTIAL_NAME(*iParam0, Function_172());
		ITERATE_ON_PARTIAL_MODEL_NAME(*iParam0, Function_172());
		ITERATE_ON_OBJECT_TYPE(*iParam0, 4294967295);
		return 1;
	}
	return 0;
}

int Function_160(bool bParam0, int iParam1) //Position: 0x6F01 / 28417
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
	Function_136(DECOR_GET_INT(*bParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
		}
		else
		{
			Function_161(iVar0, bParam0, &uVar1, iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(*bParam0);
	return 0;
}

void Function_161(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x7062 / 28770
{
	struct<8> Var0;
	
	Global_26155[iParam05].f_8 = *uParam1;
	Global_26155[iParam05].f_16 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_164("stayout") };
	Global_26155[iParam05].f_12 = CREATE_VOLUME_IN_LAYOUT(Global_26150, &Var0, 3, *iParam2, 0.0f, 0.0f, 0.0f, 12.0f, 5.0f, 12.0f);
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	if (bParam3)
	{
		Global_26155[iParam05].f_4 = ADD_BLIP_FOR_COORD(iParam2, 403, 0f, 2, 0);
		SET_BLIP_BLINK(StackVal, 1, 1, 20.0f);
	}
}

var Function_162(bool bParam0, vector3 vParam1) //Position: 0x70FD / 28925
{
	vector3 vVar0;
	var uVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		GET_POSITION(bParam0, &vVar0);
		Function_163(StackVal, StackVal, StackVal, StackVal, vVar0, vParam1, &uVar3);
		return UNK_0x9C40E671(&uVar3);
	}
	return 0.0f;
}

void Function_163(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x712D / 28973
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

struct<32> Function_164(bool bParam0) //Position: 0x7150 / 29008
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_165("0", &cVar8, ""), 4);
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

struct<32> Function_165(char* cParam0, char* cParam1, char* cParam2) //Position: 0x71BA / 29114
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_166(int iParam0) //Position: 0x71D9 / 29145
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_171();
	iVar1 = 0;
	if (!Function_17(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_170(iParam0[iVar03], 8);
		}
		else if (Function_169())
		{
			iVar1 = 1;
			Function_170(iParam0[iVar03], 8);
		}
		Function_170(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_17(iParam0[iVar03], 4))
		{
			if (!Function_17(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_17(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_17(iParam0[03], 8) || iVar1));
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
				Function_170(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_17(iParam0[iVar03], 4))
		{
			if (!Function_17(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_170(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_170(iParam0[iVar03], 2);
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
							Function_170(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_170(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_170(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_170(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_170(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_170(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_170(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_170(iParam0[iVar03], 2);
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
	Function_167();
	return 1;
}

void Function_167() //Position: 0x7554 / 30036
{
	if (!Function_168(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_168(int iParam0) //Position: 0x7594 / 30100
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_169() //Position: 0x75B0 / 30128
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

void Function_170(var uParam0, int iParam1) //Position: 0x75DB / 30171
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_171() //Position: 0x75EC / 30188
{
	if (!Function_168(128))
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

var Function_172() //Position: 0x762E / 30254
{
	int iVar0;
	
	return iVar0;
}

void Function_173(int iParam0) //Position: 0x7636 / 30262
{
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(iParam0);
	return;
}

var Function_174(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x7641 / 30273
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_17(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_170(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_170(uParam0[iVar03], 8);
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

var Function_175(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x7711 / 30481
{
	return Function_176(iParam0, iParam1, iParam2, iParam3, iParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_176(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, vector3 vParam6) //Position: 0x772A / 30506
{
	switch (iParam0)
	{
		case 0x00000001:
			return Function_179(StackVal, StackVal, Global_30750[0], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000002:
			return Function_179(StackVal, StackVal, Global_30750[1], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000004:
			return Function_179(StackVal, StackVal, Global_30750[2], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000008:
			return Function_179(StackVal, StackVal, Global_30750[3], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000010:
			return Function_179(StackVal, StackVal, Global_30750[4], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000020:
			return Function_179(StackVal, StackVal, Global_30750[5], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000040:
			return Function_179(StackVal, StackVal, Global_30750[6], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000080:
			return Function_179(StackVal, StackVal, Global_30750[7], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000100:
			return Function_179(StackVal, StackVal, Global_30750[8], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000200:
			return Function_179(StackVal, StackVal, Global_30750[9], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000400:
			return Function_179(StackVal, StackVal, Global_30750[10], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000800:
			return Function_179(StackVal, StackVal, Global_30750[11], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00001000:
			return Function_179(StackVal, StackVal, Global_30750[12], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00002000:
			return Function_179(StackVal, StackVal, Global_30750[13], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return Function_177(StackVal, StackVal, iParam0, bParam1, bParam2, iParam5, vParam6);
}

var Function_177(var uParam0, bool bParam1, bool bParam2, int iParam3, vector3 vParam4) //Position: 0x797F / 31103
{
	bool bVar0;
	
	bVar0 = CREATE_POPULATION_SET(0);
	if (uParam0 & 1 == 1)
	{
		Function_178(Global_30750[0], bVar0);
	}
	if (uParam0 & 2 == 2)
	{
		Function_178(Global_30750[1], bVar0);
	}
	if (uParam0 & 4 == 4)
	{
		Function_178(Global_30750[2], bVar0);
	}
	if (uParam0 & 8 == 8)
	{
		Function_178(Global_30750[3], bVar0);
	}
	if (uParam0 & 16 == 16)
	{
		Function_178(Global_30750[4], bVar0);
	}
	if (uParam0 & 32 == 32)
	{
		Function_178(Global_30750[5], bVar0);
	}
	if (uParam0 & 64 == 64)
	{
		Function_178(Global_30750[6], bVar0);
	}
	if (uParam0 & 128 == 128)
	{
		Function_178(Global_30750[7], bVar0);
	}
	if (uParam0 & 256 == 256)
	{
		Function_178(Global_30750[8], bVar0);
	}
	if (uParam0 & 512 == 512)
	{
		Function_178(Global_30750[9], bVar0);
	}
	if (uParam0 & 1024 == 1024)
	{
		Function_178(Global_30750[10], bVar0);
	}
	if (uParam0 & 2048 == 2048)
	{
		Function_178(Global_30750[11], bVar0);
	}
	if (uParam0 & 4096 == 4096)
	{
		Function_178(Global_30750[12], bVar0);
	}
	if (uParam0 & 8192 == 8192)
	{
		Function_178(Global_30750[13], bVar0);
	}
	return Function_179(StackVal, StackVal, bVar0, bParam1, bParam2, 4294967295, 0, iParam3, vParam4);
}

void Function_178(bool bParam0, bool bParam1) //Position: 0x7AD0 / 31440
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

var Function_179(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, vector3 vParam6) //Position: 0x7B8E / 31630
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
		Function_184();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, bParam4, iParam5, vParam6);
	if (!Function_81(bVar1))
	{
		if (!Global_30837 && !Global_30838)
		{
			Function_183(bParam0, bParam1, bParam2, bParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_183(bParam0, bParam1, bParam2, bParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && bParam3 != 4294967295)
		{
			while (Function_182(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_81(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_182(bVar0))
				{
					Function_181();
				}
				Function_180(bVar0);
			}
		}
		else if (!bParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != bParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_81(bVar1))
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

void Function_180(int iParam0) //Position: 0x7E81 / 32385
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

void Function_181() //Position: 0x7F35 / 32565
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

bool Function_182(bool bParam0) //Position: 0x7F6F / 32623
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

void Function_183(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x7F9C / 32668
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

void Function_184() //Position: 0x80F0 / 33008
{
	int iVar0;
	
	if (Global_3402)
	{
		if (StackVal || !Global_30742 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_181();
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
	Function_181();
	return;
}

