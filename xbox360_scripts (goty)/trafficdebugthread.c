//Decompiled with MagicRDR v1.0
//Function Count : 12
//Statics Count : 1
//Natives Count : 25
//Parameters Count : 0

#region Local Var
	int iLocal_0 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 0;
	iLocal_0 = Global_30842[43];
	SET_DEBUG_DRAW(1);
	while (!IS_EXITFLAG_SET())
	{
		Function_1();
		WAIT(false);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x2A / 42
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	bool bVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	
	vVar1 = { StackVal, StackVal, Global_34574 };
	vVar4 = { 0.0f, 1.0f, 0.0f };
	iVar0 = 0;
	while (iVar0 <= Global_28952)
	{
		if (StackVal && IS_ACTOR_VALID(StackVal))
		{
			GET_POSITION(StackVal, &vVar1);
			vVar4 = { 0.0f, 1.0f, 0.0f };
			iVar7 = 1;
			if (!Global_28952[iVar05].f_12)
			{
				if (Global_28952[iVar05].f_16 < 0.0f)
				{
					vVar4 = { 1.0f, 1.0f, 0.0f };
					iVar7 = 1;
				}
				else
				{
					vVar4 = { 0.0f, 0.0f, 1.0f };
					iVar7 = 0;
				}
			}
		}
		iVar0++;
	}
	if (Function_11())
	{
		Function_10();
		if (Function_2())
		{
		}
		if (IS_LAYOUTREF_VALID(Global_28841))
		{
			bVar8 = CREATE_OBJECT_ITERATOR(Global_28841);
			ITERATE_IN_LAYOUT(bVar8, Global_28841);
			ITERATE_ON_OBJECT_TYPE(bVar8, 15);
			bVar9 = START_OBJECT_ITERATOR(bVar8);
			iVar10 = 0;
			iVar11 = 0;
			while (IS_OBJECT_VALID(bVar9))
			{
				if (DECOR_CHECK_EXIST(bVar9, "TrafficNotValid"))
				{
					GET_POSITION(GET_ACTOR_FROM_OBJECT(bVar9), &vVar1);
				}
				bVar9 = OBJECT_ITERATOR_NEXT(bVar8);
			}
			DESTROY_ITERATOR(bVar8);
		}
	}
	return;
}

bool Function_2() //Position: 0x12E / 302
{
	bool bVar0;
	
	if (!Function_11())
	{
		return 1;
	}
	if (!NET_IS_IN_SESSION())
	{
		return 0;
	}
	bVar0 = GET_LOCAL_SLOT();
	if (Function_3(Global_29005, 1) == bVar0)
	{
		return 1;
	}
	return 0;
}

int Function_3(int iParam0, bool bParam1) //Position: 0x15A / 346
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= Global_76943)
	{
		if (Function_9(iVar0))
		{
			if (iVar0 == GET_LOCAL_SLOT())
			{
				if (bParam1)
				{
					if (StackVal != iParam0 && Function_8(32768, 1))
					{
						return iVar0;
					}
				}
			}
			if (Function_6(iVar0) == iParam0)
			{
				if (Function_4(iVar0, 32768, 1))
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return 4294967295;
}

bool Function_4(bool bParam0, int iParam1, bool bParam2) //Position: 0x1C3 / 451
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_8(iParam1, bParam2);
	}
	if (!Function_9(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_5(iParam1), 64);
		stradd(&cVar0, " bit from bad slot ", 64);
		stradd(&cVar0, I2STR(bParam0), 64);
	}
	iVar16 = (Global_76943[bParam096].f_124 && iParam1);
	if (bParam2)
	{
		return iVar16 != iParam1;
	}
	return iVar16 == 0;
}

var Function_5(int iParam0) //Position: 0x244 / 580
{
	switch (iParam0)
	{
		case 0x00000002:
			return "DEAD";
			break;
		
		case 0x00000004:
			return "READY";
			break;
		
		case 0x00000008:
			return "POKER_FOLDED";
			break;
		
		case 0x00000010:
			return "RACE_FINISHED";
			break;
		
		case 0x00000020:
			return "REGION_HOST";
			break;
		
		case 0x00000080:
			return "ACTOR_HIDDEN";
			break;
		
		case 0x00000100:
			return "VOTE_TO_START";
			break;
		
		case 0x00000200:
			return "VOTE_TO_SKIP";
			break;
		
		case 0x00000400:
			return "VOTE_TO_REPLAY";
			break;
		
		case 0x00000001:
			return "IS_IN_LOBBY";
			break;
		
		case 0x00000040:
			return "GAME_ARBITRATOR";
			break;
		
		case 0x00000800:
			return "JOINED_GAME";
			break;
		
		case 0x00001000:
			return "SKIP_CUTSCENE";
			break;
		
		case 0x00002000:
			return "START_CUTSCENE";
			break;
		
		case 0x00004000:
			return "IS_SPECTATOR";
			break;
		
		case 0x00008000:
			return "DISTRICT_HOST";
			break;
		
		case 0x00010000:
			return "NEEDS_REVIVAL";
			break;
		
		case 0x00020000:
			return "MP_BIT_MPLAW_MOSTWANTED";
			break;
		
		case 0x00040000:
			return "HAS_VIRAL_ACHIEVEMENT";
			break;
		
		case 0x00080000:
			return "COMBATMODE_CASUAL";
			break;
		
		case 0x00100000:
			return "COMBATMODE_EXPERT";
			break;
		
		case 0x00200000:
			return "IN_ACTOR_PICKER";
			break;
		
		case 0x00400000:
			return "MELEE_BLOCKED";
			break;
		
		case 0x00800000:
			return "BLIND_FIRE";
			break;
		
		case 0x01000000:
			return "FREE_MODE_DEFENSE_ACTIVE";
			break;
		
		case 0x02000000:
			return "PLAYER_IS_GRIEFER";
			break;
		
		case 0x04000000:
			return "CANNOT_AFFORD_MINIGAME";
			break;
		
		case 0x08000000:
			return "FREE_MODE_DEFENSE_SPOONHOLDER";
			break;
	}
	return "UNKNOWN";
}

int Function_6(bool bParam0) //Position: 0x55D / 1373
{
	if (!Function_9(bParam0))
	{
		return 4294967295;
	}
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_7();
	}
	return StackVal;
}

bool Function_7() //Position: 0x584 / 1412
{
	return StackVal;
}

var Function_8(int iParam0, bool bParam1) //Position: 0x590 / 1424
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

bool Function_9(bool bParam0) //Position: 0x5B0 / 1456
{
	char* cVar0[64];
	
	if (bParam0 > 0 || bParam0 <= 16)
	{
		strcpy(&cVar0, "TRIED TO USE IS_SLOT_DATA_VALID WITH BAD INDEX ", 64);
		stradd(&cVar0, I2STR(bParam0), 64);
		stradd(&cVar0, "!", 64);
		return 0;
	}
	if ((*&Global_78617 + 64)[bParam02] > Global_78617.f_60)
	{
		(*&Global_78617 + 64)[bParam02] = Global_78617.f_60;
		(&Global_78617 + 64[bParam02])->f_4 = _IS_CLIENT_DATA_VALID_FOR_SLOT(&Global_76943, bParam0);
	}
	return StackVal;
}

void Function_10() //Position: 0x651 / 1617
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	char* cVar5;
	char* cVar6;
	char* cVar7;
	char* cVar8;
	char* cVar9;
	char* cVar10;
	struct<9> Var11;
	
	fVar3 = 0.02f;
	bVar4 = false;
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	fVar1 = 0.35f;
	fVar2 = 1.0f;
	fVar0 = 0.04f;
	DRAW_STRING_CURRENT_FONT(fVar0, fVar1, "SLOT", 1.0f, 1.0f, 1.0f, fVar2);
	fVar1 = (fVar1 + fVar3);
	DRAW_STRING_CURRENT_FONT(fVar0, fVar1, "Region", 1.0f, 1.0f, 1.0f, fVar2);
	fVar1 = (fVar1 + fVar3);
	DRAW_STRING_CURRENT_FONT(fVar0, fVar1, "# Loc Nodes", 1.0f, 1.0f, 1.0f, fVar2);
	fVar1 = (fVar1 + fVar3);
	DRAW_STRING_CURRENT_FONT(fVar0, fVar1, "# Nodes", 1.0f, 1.0f, 1.0f, fVar2);
	fVar1 = (fVar1 + fVar3);
	DRAW_STRING_CURRENT_FONT(fVar0, fVar1, "R Nodes", 1.0f, 1.0f, 1.0f, fVar2);
	fVar1 = (fVar1 + fVar3);
	DRAW_STRING_CURRENT_FONT(fVar0, fVar1, "Coach Contrib", 1.0f, 1.0f, 1.0f, fVar2);
	fVar1 = (fVar1 + fVar3);
	fVar0 = 0.13f;
	bVar4 = false;
	while (bVar4 <= 16)
	{
		fVar1 = 0.35f;
		fVar2 = 1.0f;
		cVar5 = INT_TO_STRING(bVar4);
		cVar6 = INT_TO_STRING(Global_76943[bVar496]);
		cVar7 = INT_TO_STRING(StackVal);
		cVar9 = INT_TO_STRING(Global_76943[bVar496].f_12);
		cVar10 = INT_TO_STRING(Global_76943[bVar496].f_16);
		cVar8 = INT_TO_STRING(Global_76943[bVar496].f_20);
		if (!IS_SLOT_VALID(bVar4))
		{
			fVar2 = 0.4f;
		}
		vVar11 = { 1.0f, 1.0f, 1.0f };
		if (NET_IS_IN_SESSION())
		{
			if (GET_LOCAL_SLOT() == bVar4)
			{
				vVar11 = { 0.0f, 1.0f, 0.0f };
			}
		}
		DRAW_STRING_CURRENT_FONT(fVar0, fVar1, cVar5, vVar11.x, vVar11.y, vVar11.z, fVar2);
		fVar1 = (fVar1 + fVar3);
		DRAW_STRING_CURRENT_FONT(fVar0, fVar1, cVar6, vVar11.x, vVar11.y, vVar11.z, fVar2);
		fVar1 = (fVar1 + fVar3);
		DRAW_STRING_CURRENT_FONT(fVar0, fVar1, cVar9, vVar11.x, vVar11.y, vVar11.z, fVar2);
		fVar1 = (fVar1 + fVar3);
		DRAW_STRING_CURRENT_FONT(fVar0, fVar1, cVar7, vVar11.x, vVar11.y, vVar11.z, fVar2);
		fVar1 = (fVar1 + fVar3);
		DRAW_STRING_CURRENT_FONT(fVar0, fVar1, cVar10, vVar11.x, vVar11.y, vVar11.z, fVar2);
		fVar1 = (fVar1 + fVar3);
		DRAW_STRING_CURRENT_FONT(fVar0, fVar1, cVar8, vVar11.x, vVar11.y, vVar11.z, fVar2);
		fVar1 = (fVar1 + fVar3);
		fVar0 = (fVar0 + 0.03f);
		bVar4++;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return;
}

bool Function_11() //Position: 0x880 / 2176
{
	return NET_IS_MANAGER_INITIALIZED();
}

