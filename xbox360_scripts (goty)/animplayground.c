//Decompiled with MagicRDR v1.0
//Function Count : 501
//Statics Count : 21
//Natives Count : 547
//Parameters Count : 0

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	float fLocal_4 = 0.0f;
	struct<29> Local_5 = { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	var uVar0;
	vector3 vVar1;
	vector3 vVar4;
	bool bVar7;
	bool bVar8;
	
	iLocal_1 = 31;
	iLocal_2 = 33;
	iLocal_3 = 1;
	fLocal_4 = 2.0f;
	while (!Function_495())
	{
		WAIT(0);
	}
	uVar0 = Function_494();
	STREAMING_REQUEST_ACTOR(0, 1, false);
	while (!STREAMING_IS_ACTOR_LOADED(0, 4294967295))
	{
		WAIT(0);
	}
	vVar1 = { 0.0f, 0.0f, 0.0f };
	vVar4 = { 0.0f, 0.0f, 0.0f };
	bVar7 = CREATE_PLAYER_ACTOR_IN_LAYOUT(uVar0, "player", 0, vVar1, vVar4, 0);
	SET_CAMERA_FOLLOW_ACTOR(bVar7);
	Function_491();
	Function_490();
	ACTOR_SET_NEXT_WEAPON(bVar7, 10);
	ACTOR_SET_NEXT_WEAPON(bVar7, 4);
	ACTOR_ENABLE_VARIABLE_MESH(bVar7, 27, 1);
	ACTOR_ENABLE_VARIABLE_MESH(bVar7, 28, 1);
	SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(12, 50, 0));
	HUD_FADE_IN(0.1f, 1065353216);
	UI_SEND_EVENT("loadComplete");
	if (UNK_0xD3FE15FB())
	{
		Function_489();
	}
	else
	{
		bVar8 = FIND_ACTOR_IN_LAYOUT(Local_5, "enemy_BanditoDesperado");
		while (!IS_EXITFLAG_SET())
		{
			if (IS_ACTOR_VALID(bVar8))
			{
				TASK_STAND_STILL(bVar8, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bVar8, 1);
			}
			if (IS_BUTTON_PRESSED(GET_DEBUG_PADINDEX(), 12, 1, 0))
			{
				ENABLE_PIP(0, 1, 0);
			}
			else if (IS_BUTTON_PRESSED(GET_DEBUG_PADINDEX(), 14, 1, 0))
			{
				ENABLE_PIP(0, 0, 0);
			}
			else if (IS_BUTTON_PRESSED(GET_DEBUG_PADINDEX(), 15, 1, 0))
			{
				ENABLE_PIP(0, 1, 1);
			}
			else if (IS_BUTTON_PRESSED(GET_DEBUG_PADINDEX(), 13, 1, 0))
			{
				ENABLE_PIP(0, 0, 1);
			}
			Function_306();
			Function_282(&uLocal_14);
			Function_133();
			Function_7();
			WAIT(0);
		}
	}
	Function_6();
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x175 / 373
{
	vector3 vVar0[2];
	
	vVar0[03] = _GET_TYPE_ID_USING_ACTOR_ENUM(976, 2);
	vVar0[03].f_4 = 2;
	vVar0[13] = _GET_TYPE_ID_USING_ACTOR_ENUM(133, 2);
	vVar0[13].f_4 = 2;
	Function_2(&vVar0);
	RELEASE_LAYOUT_REF(Local_5);
	return;
}

void Function_2(int iParam0) //Position: 0x1B1 / 433
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_3(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_3(var uParam0, int iParam1) //Position: 0x1D7 / 471
{
	if (Function_5(uParam0[iParam13], 4))
	{
		if (Function_5(uParam0[iParam13], 1))
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
			Function_4(uParam0[iParam13], 1);
			Function_4(uParam0[iParam13], 2);
			Function_4(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_4(var uParam0, int iParam1) //Position: 0x305 / 773
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_5(int iParam0, int iParam1) //Position: 0x31F / 799
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_6() //Position: 0x33C / 828
{
	GUI_CLOSE_WINDOW(Global_13043);
	return;
}

void Function_7() //Position: 0x349 / 841
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	vector3 vVar12;
	vector3 vVar15;
	vector3 vVar18;
	var uVar21;
	bool bVar24;
	int iVar25;
	int iVar26;
	vector3 vVar27;
	vector3 vVar30;
	vector3 vVar33;
	var uVar36;
	int iVar39;
	int iVar40;
	
	if (IS_DEBUGKEY_PRESSED(46))
	{
		if (IS_DEBUGKEY_DOWN(54) || IS_DEBUGKEY_DOWN(42))
		{
			Global_63096 = !Global_63096;
			HUD_CLEAR_HELP_QUEUE();
			Function_130(Function_132(Global_63096), 3.0f, 1, 1, 2, 1, 0);
		}
	}
	if (!IS_DEV_BUILD())
	{
		if (Function_129())
		{
			return;
		}
	}
	if (Function_128(0, 0, 1) && IS_DEBUGKEY_PRESSED(37))
	{
		Function_126(0x43160000);
	}
	if (!Function_129())
	{
		if (Function_128(0, 1, 1) && IS_DEBUGKEY_PRESSED(19))
		{
			if (Function_125())
			{
				Function_124(491, 5, 0, 0);
				Function_124(497, 5, 0, 0);
			}
			else
			{
				Function_124(583, 25, 0, 0);
				Function_124(582, 25, 0, 0);
				Function_124(498, 15, 0, 0);
				Function_124(508, 20, 0, 0);
			}
		}
		if (Function_128(0, 1, 1) && IS_DEBUGKEY_PRESSED(33))
		{
			if (Function_125())
			{
				CREATE_ACTOR_IN_LAYOUT(Global_30616, Function_123(), 1225, -3200.896f, 40.277f, 3713.18f, 0.0f, 104.995f, 0.0f);
			}
			else
			{
				Function_124(499, 3, 0, 0);
				Function_124(498, 3, 0, 0);
				Function_124(491, 3, 0, 0);
			}
		}
		if (Function_128(0, 1, 1) && IS_DEBUGKEY_PRESSED(20))
		{
			Function_124(587, 1, 0, 0);
			Function_124(588, 1, 0, 0);
			Function_124(589, 1, 0, 0);
			Function_124(590, 1, 0, 0);
			Function_124(591, 1, 0, 0);
			Function_124(592, 1, 0, 0);
			Function_124(593, 1, 0, 0);
			Function_124(594, 1, 0, 0);
			Function_124(595, 1, 0, 0);
		}
		if (IS_DEBUGKEY_PRESSED(32))
		{
			if (Function_128(0, 0, 1))
			{
				if (Global_76853)
				{
					Function_130("Dynamic Difficulty Adjustment disabled.", 0x41200000, 1, 0, 2, 1, 0);
					Function_122();
					Global_76853 = 0;
				}
				else
				{
					Function_130("Dynamic Difficulty Adjustment enabled.", 0x41200000, 1, 0, 2, 1, 0);
					Global_76853 = 1;
				}
			}
		}
	}
	if (IS_DEBUGKEY_PRESSED(17))
	{
		if (Function_128(0, 0, 1))
		{
			DELETE_ALL_WEAPONS_FROM_ACTOR(GET_PLAYER_ACTOR(0));
		}
		else if (Function_128(1, 0, 0))
		{
			Function_130("Toggle golden weapons.", 0x41200000, 1, 0, 2, 1, 0);
			iVar1 = 4294967295;
			bVar2 = false;
			iVar0 = 0;
			while (iVar0 < (7 - 1))
			{
				iVar1 = GET_WEAPON_EQUIPPED(Function_121(), iVar0);
				if (iVar1 != 4294967295)
				{
					bVar2 = GET_WEAPON_GOLD(Function_121(), iVar1);
					if (bVar2)
					{
						SET_WEAPON_GOLD(Function_121(), iVar1, 0);
					}
					else
					{
						SET_WEAPON_GOLD(Function_121(), iVar1, 1);
					}
				}
				iVar0++;
			}
			iVar1 = GET_WEAPON_IN_HAND(Function_121());
			if (iVar1 != 4294967295)
			{
				bVar2 = GET_WEAPON_GOLD(Function_121(), iVar1);
				if (bVar2)
				{
					SET_WEAPON_GOLD(Function_121(), iVar1, 0);
				}
				else
				{
					SET_WEAPON_GOLD(Function_121(), iVar1, 1);
				}
			}
		}
		else
		{
			Function_491();
			if (!Function_129())
			{
				Function_120();
				bVar3 = false;
				while (bVar3 <= Global_27774)
				{
					if (Global_27774[bVar313] != 4294967295)
					{
						if ((bVar3 == 4 || IS_PS3()) || Function_119())
						{
							Function_76(bVar3, 0, 1);
						}
					}
					bVar3++;
				}
			}
			bVar4 = false;
			Function_75(&bVar4, 8);
			Function_75(&bVar4, 7);
			Function_75(&bVar4, 6);
			Function_75(&bVar4, 5);
			Function_75(&bVar4, 4);
			Function_75(&bVar4, 3);
			Function_75(&bVar4, 2);
			Function_75(&bVar4, 1);
			Function_75(&bVar4, 0);
			Function_74(472, bVar4, 0);
		}
	}
	if (IS_DEBUGKEY_PRESSED(5))
	{
		if (Function_128(0, 0, 1))
		{
			if (Function_129())
			{
				if (Function_73(599) == 0)
				{
					Function_74(599, 200, 0);
				}
				else
				{
					Function_74(599, 0, 0);
				}
				UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_73(599));
				UI_SET_STRING("nMPDollars", I2STR(Function_73(599)));
				if (NET_GET_PLAYMODE() == 0)
				{
					UI_SET_STRING("MPBalance2", UI_GET_STRING("nMPBalance"));
				}
			}
			else
			{
				Function_72(200, 1);
			}
		}
		else
		{
			Function_71();
		}
	}
	if (Function_128(0, 0, 1) && IS_DEBUGKEY_PRESSED(4))
	{
		Function_70(200, 1);
	}
	if (IS_DEBUGKEY_PRESSED(6) && !Function_128(1, 1, 1))
	{
		Function_69();
	}
	if (IS_DEBUGKEY_PRESSED(7) && !Function_128(1, 1, 1))
	{
		GIVE_WEAPON_TO_ACTOR(GET_PLAYER_ACTOR(0), 21, 0, 1, 1);
	}
	if (IS_DEBUGKEY_PRESSED(8) && !Function_128(1, 1, 1))
	{
		GIVE_WEAPON_TO_ACTOR(GET_PLAYER_ACTOR(0), 22, 0, 1, 1);
	}
	if (Function_128(0, 1, 0) && IS_DEBUGKEY_PRESSED(34))
	{
		if (!GATEWAYS_ARE_DISABLED())
		{
			ACTOR_DATA_GRAVITY_LIMIT(1);
		}
		else
		{
			ACTOR_DATA_GRAVITY_LIMIT(0);
		}
	}
	if (IS_DEBUGKEY_PRESSED(60))
	{
		Function_68(StackVal, 1000);
		(*&Global_26401 + 36[11181][35])[(*&Global_26401 + 36[11181][35])[StackVal] + 4] = StackVal;
		Global_26401.f_2212 = Function_67(StackVal);
		memcpy(&Global_13095, StackVal, StackVal, StackVal, *(&Global_26998[1118] + 4), 16);
		if (!IS_SCRIPT_VALID(Global_26316.f_60))
		{
			if (Function_64(1))
			{
				Global_26316.f_60 = Function_62();
			}
			else
			{
				iVar5 = StackVal;
				if (iVar5 != 4294967295 || iVar5 != 2)
				{
					iVar5 = 0;
				}
				Function_60(iVar5, 0, 0, 0, 0);
				Global_26316.f_60 = Function_56(iVar5);
			}
		}
		Function_54(1);
	}
	if (IS_DEBUGKEY_PRESSED(61))
	{
		Function_50(StackVal, 0);
		Function_54(0);
		Global_26401.f_2212 = 0;
		iVar6 = 0;
		while (iVar6 <= 36)
		{
			(*&Global_26401 + 36[iVar6181][35])[0] = StackVal;
			iVar6++;
		}
		Function_49();
		RELEASE_LAYOUT_OBJECTS(Global_26314);
		if (IS_SCRIPT_VALID(Global_26316.f_60))
		{
			TERMINATE_SCRIPT(Global_26316.f_60);
		}
	}
	if (IS_DEBUGKEY_PRESSED(22))
	{
		bVar7 = Function_121();
		if (IS_ACTOR_VALID(bVar7))
		{
			bVar8 = _GET_ACTOR_INFINITE_AMMO_FLAG(bVar7, 8);
			iVar9 = 0;
			iVar9 = 0;
			while (iVar9 <= 17)
			{
				_SET_ACTOR_INFINITE_AMMO_FLAG(bVar7, iVar9, !bVar8);
				iVar9++;
			}
			if (bVar8)
			{
				Function_130("Infinite Ammo is OFF", 3.0f, 0, 0, 2, 1, 0);
			}
			else
			{
				Function_130("Infinite Ammo is ON", 3.0f, 0, 0, 2, 1, 0);
			}
		}
	}
	if (IS_DEBUGKEY_PRESSED(39))
	{
		Function_44(100, 1, 0);
	}
	if (IS_DEBUGKEY_PRESSED(40))
	{
		Function_44(4294967196, 1, 0);
	}
	if (IS_DEBUGKEY_PRESSED(53))
	{
		Function_10(4294967271, 1, 0);
	}
	if (IS_DEBUGKEY_PRESSED(52))
	{
		Function_10(25, 1, 0);
	}
	if (Function_128(0, 0, 1) && IS_DEBUGKEY_PRESSED(47))
	{
		if (!DECOR_CHECK_EXIST(GET_PLAYER_ACTOR(0), "bAlliesInvul"))
		{
			DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "bAlliesInvul", 1);
			Function_130("Allies are now invulnerable.", 0x41200000, 1, 0, 2, 1, 0);
		}
		else
		{
			DECOR_REMOVE(GET_PLAYER_ACTOR(0), "bAlliesInvul");
			Function_130("Allies are vulnerable again.", 0x41200000, 1, 0, 2, 1, 0);
		}
	}
	if (IS_DEBUGKEY_PRESSED(56))
	{
		Global_3371 = !Global_3371;
		if (IS_SCRIPT_VALID(Global_3372))
		{
			TERMINATE_SCRIPT(Global_3372);
		}
		Global_3372 = LAUNCH_NEW_SCRIPT("content/Ambient/Roaming/event_spawning_tool", 0);
		if (Global_3371)
		{
			Function_130("gbIsSpawnMode is ON", 3.0f, 0, 0, 2, 1, 0);
		}
		else
		{
			Function_130("gbIsSpawnMode is OFF", 3.0f, 0, 0, 2, 1, 0);
		}
	}
	if (IS_DEBUGKEY_PRESSED(10))
	{
		Global_3370 = !Global_3370;
		if (Global_3370)
		{
			HUD_CLEAR_HELP_QUEUE();
			Function_130("gbCampFireDebug is ON", 3.0f, 0, 1, 2, 1, 0);
		}
		else
		{
			HUD_CLEAR_HELP_QUEUE();
			Function_130("gbCampFireDebug is OFF", 3.0f, 0, 1, 2, 1, 0);
		}
	}
	if (IS_DEBUGKEY_PRESSED(19))
	{
		if (IS_POPSET_VALID(Global_30750[6]))
		{
			iVar10 = Function_9(Global_30750[6], 0, 23, 0);
		}
		else
		{
			iVar10 = 976;
		}
		if (Function_8(iVar10))
		{
			iVar11 = iVar10;
			STREAMING_REQUEST_ACTOR(iVar11, 1, false);
			while (!STREAMING_IS_ACTOR_LOADED(iVar11, 4294967295))
			{
				WAIT(0);
			}
			GET_CAMERA_DIRECTION(GET_GAME_CAMERA(), &vVar12);
			GET_CAMERA_POSITION(GET_GAME_CAMERA(), &vVar15);
			VSCALE(&vVar12, -7.0f);
			vVar15 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar12, vVar15, StackVal) };
			FIND_GROUND_INTERSECTION(&vVar15, 80.0f, &vVar18, &uVar21);
			bVar24 = CREATE_ACTOR_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_123(), iVar10, vVar18, 0.0f, 0.0f, 0.0f);
			if (Function_128(0, 1, 0))
			{
				ANIMAL_ACTOR_SET_DOMESTICATION(bVar24, 1);
			}
			else
			{
				ACCESSORIZE_HORSE(bVar24, 3);
			}
			STREAMING_EVICT_ACTOR(iVar11, 4294967295);
		}
	}
	if (IS_DEBUGKEY_PRESSED(18))
	{
		if (IS_POPSET_VALID(Global_30750[3]))
		{
			iVar25 = Function_9(Global_30750[3], 0, 0, 0);
		}
		else
		{
			iVar25 = 497;
		}
		if (Function_8(iVar25))
		{
			iVar26 = iVar25;
			STREAMING_REQUEST_ACTOR(iVar26, 1, false);
			while (!STREAMING_IS_ACTOR_LOADED(iVar26, 4294967295))
			{
				WAIT(0);
			}
			GET_CAMERA_DIRECTION(GET_GAME_CAMERA(), &vVar27);
			GET_CAMERA_POSITION(GET_GAME_CAMERA(), &vVar30);
			VSCALE(&vVar27, -7.0f);
			vVar30 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar27, vVar30, StackVal) };
			FIND_GROUND_INTERSECTION(&vVar30, 80.0f, &vVar33, &uVar36);
			CREATE_ACTOR_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_123(), iVar25, vVar33, 0.0f, 0.0f, 0.0f);
			STREAMING_EVICT_ACTOR(iVar26, 4294967295);
		}
	}
	if (IS_DEBUGKEY_PRESSED(30))
	{
		if (Function_128(0, 0, 1))
		{
			iVar39 = 0;
			while (iVar39 <= 101)
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(iVar39 + 1))
				{
					AWARD_ACHIEVEMENT(iVar39 + 1);
					return;
				}
				iVar39++;
			}
		}
	}
	if (IS_DEBUGKEY_PRESSED(31))
	{
		if (Function_128(0, 0, 1))
		{
			iVar40 = 0;
			while (iVar40 <= 696)
			{
				switch (Global_35278[iVar4020].f_48)
				{
					case 0x00000003:
						Global_35278[iVar4020].f_48 = 0;
						break;
					
					case 0x00000004:
						Global_35278[iVar4020].f_48 = 1;
						break;
					
					case 0x0000000B:
						Global_35278[iVar4020].f_48 = 7;
						break;
					
					case 0x0000000C:
						Global_35278[iVar4020].f_48 = 8;
						break;
					
					case 0x0000000D:
						Global_35278[iVar4020].f_48 = 23;
						break;
				}
				iVar40++;
			}
		}
	}
	return;
}

bool Function_8(int iParam0) //Position: 0xD6C / 3436
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

var Function_9(var uParam0, int iParam1, int iParam2, int iParam3) //Position: 0xD83 / 3459
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(uParam0, iParam1, iParam2, iParam3, 0, 0.0f, 0.0f, 0.0f);
}

void Function_10(int iParam0, bool bParam1, bool bParam2) //Position: 0xD9A / 3482
{
	int iVar0;
	int iVar1;
	
	if (Function_43(0) && !Global_3380)
	{
		return;
	}
	iVar1 = iParam0;
	if (Function_42())
	{
		iVar1 = (iVar1 / 2);
	}
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_73(1);
	if ((iVar0 + iVar1) >= 5000)
	{
		iVar1 = (5000 - iVar0);
	}
	if ((iVar0 + iVar1) <= 4294962296)
	{
		iVar1 = (4294962296 - iVar0);
	}
	if (bParam1)
	{
		if (iVar1 >= 0)
		{
			Function_41(1, iVar1);
			if (!bParam2)
			{
				if (!Function_40(Global_76848, 1))
				{
					Function_34(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_32(1, (4294967295 * iVar1));
			if (!Global_3380)
			{
				if (!Function_40(Global_76848, 2))
				{
					Function_34(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (iVar1 >= 0)
	{
		Function_124(1, iVar1, 0, 0);
	}
	else
	{
		Function_20(1, (4294967295 * iVar1), 0);
	}
	if (Function_73(1) <= 4294962296)
	{
		Function_74(1, 4294962296, 0);
	}
	else if (Function_73(1) >= 5000)
	{
		Function_74(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_19(1));
	iVar0 = Function_73(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_12(2, Function_18(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_12(2, Function_18(Global_12976.f_152), 0);
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
				Function_12(2, Function_18(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_12(2, Function_18(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_12(2, Function_18(Global_12976.f_152), 1);
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
				Function_12(2, Function_18(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_12(2, Function_18(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_12(2, Function_18(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_12(2, Function_18(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_12(2, Function_18(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_12(2, Function_18(Global_12976.f_152), 1);
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
				Function_12(2, Function_18(Global_12976.f_152), 0);
			}
			break;
	}
	Function_11(Global_12976.f_152, Global_12976.f_156);
	return;
}

void Function_11(int iParam0, int iParam1) //Position: 0x10BB / 4283
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

int Function_12(int iParam0, char* cParam1, bool bParam2) //Position: 0x1319 / 4889
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
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
	Function_16(iParam0, cParam1, 0, 1);
	iVar1 = Function_13();
	Global_49199[iVar1] = 0.0f;
	strcpy(&Global_49205[iVar120] + 16, cParam1, 32);
	strcpy(&Global_49205[iVar120] + 8, "QME=", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(iVar0), 8);
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

int Function_13() //Position: 0x149E / 5278
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
	Function_14();
	return 0;
}

void Function_14() //Position: 0x153D / 5437
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
		Function_15(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_15(int iParam0) //Position: 0x15EC / 5612
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

int Function_16(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x164A / 5706
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
		Function_17(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_17(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x199C / 6556
{
	CLEAR_STAT_MESSAGE();
	if (!Global_49306)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 1, 0, 0, 0);
		}
		else if (bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 1, 0, 0, 0, 0, 0);
		}
	}
}

var Function_18(int iParam0) //Position: 0x1A1F / 6687
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

float Function_19(int iParam0) //Position: 0x1AC2 / 6850
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

int Function_20(int iParam0, int iParam1, bool bParam2) //Position: 0x1AFB / 6907
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
	if (iParam1 <= 0)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: iDecreaseValue < 0 - I am turning this into a positive number for you!");
		iParam1 = ABS(iParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] - TO_FLOAT(iParam1));
	Function_31(iParam0);
	if (bParam2 && iParam1 == 0)
	{
		Function_21(iParam0, 0, TO_FLOAT(iParam1), 1, 1, 0x40400000, 0, 0);
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= iParam1)
		{
			REMOVE_COLLECTABLE(&(Global_35278[iParam020]), Global_34573);
			iVar1++;
		}
	}
	return 1;
}

void Function_21(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x1CF6 / 7414
{
	char* cVar0;
	char* cVar1[32];
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
			if (fParam2 > 2000.0f)
			{
				stradd(&Global_35278[iParam020] + 16, " lbs", 32);
			}
			else
			{
				fParam2 = (fParam2 / 2000.0f);
				memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
				stradd(&Global_35278[iParam020] + 16, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
			if (fParam2 <= 60.0f)
			{
				bVar7 = false;
				iVar5 = (FLOOR(fParam2) / 60);
				if (iVar5 > 60)
				{
					iVar4 = (iVar5 / 60);
					iVar5 = (iVar5 - iVar4 * 60);
					iVar6 = FLOOR(((bParam2 - TO_FLOAT(iVar4 * 60 * 60)) - TO_FLOAT(iVar5 * 60)));
					if (iVar4 > 24)
					{
						iVar3 = (iVar4 / 24);
						iVar4 = (iVar4 - iVar3 * 24);
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(iVar3), 32);
						if (iVar3 >= 1)
						{
							stradd(&Global_35278[iParam020] + 16, " days", 32);
						}
						else
						{
							stradd(&Global_35278[iParam020] + 16, " day", 32);
						}
						bVar7 = true;
					}
					if (iVar4 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_35278[iParam020] + 16, " ", 32);
						}
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(iVar4), 32);
						stradd(&Global_35278[iParam020] + 16, " hr", 32);
						bVar7 = true;
					}
					if (iVar5 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_35278[iParam020] + 16, " ", 32);
						}
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(iVar5), 32);
						stradd(&Global_35278[iParam020] + 16, " min", 32);
						bVar7 = true;
					}
					if (iVar6 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_35278[iParam020] + 16, " ", 32);
						}
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(iVar6), 32);
						stradd(&Global_35278[iParam020] + 16, " sec", 32);
						bVar7 = false;
					}
				}
				else
				{
					stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(iVar5), 32);
					stradd(&Global_35278[iParam020] + 16, " min", 32);
					iVar6 = FLOOR((bParam2 - TO_FLOAT(iVar5 * 60)));
					if (iVar6 >= 0)
					{
						stradd(&Global_35278[iParam020] + 16, " ", 32);
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(iVar6), 32);
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_30(390))), 32);
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
					fVar19 = bParam2;
					fVar20 = 0.0f;
				}
				else if (bParam1)
				{
					fVar19 = (Function_19(iParam0) - bParam2);
					fVar20 = bParam2;
				}
				else
				{
					fVar19 = (Function_19(iParam0) + bParam2);
					fVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_28(iParam0, fVar19, fVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_25(fVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(iParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_23(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_22(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_123(), &Var9);
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

var Function_22(int iParam0) //Position: 0x2323 / 8995
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_23(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2334 / 9012
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

struct<32> Function_24(char* cParam0, bool bParam1) //Position: 0x2429 / 9257
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_25(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2442 / 9282
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_27(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_26(Function_27(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_26(int iParam0, int iParam1) //Position: 0x24A7 / 9383
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int Function_27(int iParam0, int iParam1) //Position: 0x24B9 / 9401
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_28(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x24CB / 9419
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

int Function_29(int iParam0) //Position: 0x25FB / 9723
{
	return Global_35278[iParam020].f_48;
}

float Function_30(int iParam0) //Position: 0x260A / 9738
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_31(int iParam0) //Position: 0x2647 / 9799
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

int Function_32(int iParam0, int iParam1) //Position: 0x27E1 / 10209
{
	int iVar0;
	int iVar1;
	
	Function_20(iParam0, iParam1, 0);
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE_INT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (iParam1 <= 0)
	{
		LOG_ERROR("STAT_DECREASE_INT: iDecreaseValue < 0 - I am turning this into a positive number for you!");
		iParam1 = ABS(iParam1);
	}
	iVar1 = Function_33(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_49205[iVar120].f_72 != 2 || Global_49205[iVar120].f_72 != 3)
		{
			Global_49199[iVar1] = (Global_49199[iVar1] + TO_FLOAT(iParam1));
			strcpy(&Global_49205[iVar120] + 8, "QME-", 8);
			strcpy(&(Global_49205[iVar120]), INT_TO_STRING(iVar0), 8);
			Global_49205[iVar120].f_48 = 26;
			Global_49205[iVar120].f_68 = iParam0;
			Global_49205[iVar120].f_72 = 2;
			return 1;
		}
	}
	iVar1 = Function_13();
	Global_49199[iVar1] = TO_FLOAT(iParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(iVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

var Function_33(int iParam0, int iParam1) //Position: 0x297D / 10621
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

void Function_34(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x29BE / 10686
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_36(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_35(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_35(char* cParam0, int iParam1) //Position: 0x2A2A / 10794
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

bool Function_36(bool bParam0, var uParam1, int iParam2) //Position: 0x2A61 / 10849
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
		if (Function_38(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_37(uVar0))
		{
			case 0x00000002:
				if (!Function_40(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_37(char* cParam0) //Position: 0x2AD9 / 10969
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

int Function_38(int iParam0) //Position: 0x2B7A / 11130
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_39(&iVar1, 2147483648);
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

void Function_39(int iParam0, int iParam1) //Position: 0x2BB7 / 11191
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

bool Function_40(var uParam0, int iParam1) //Position: 0x2BCA / 11210
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_41(int iParam0, int iParam1) //Position: 0x2BDD / 11229
{
	int iVar0;
	int iVar1;
	
	Function_124(iParam0, iParam1, 0, 0);
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_INT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (iParam1 <= 0)
	{
		LOG_ERROR("STAT_INCREASE_INT: iIncreaseValue < 0 - I am turning this into a positive number for you!");
		iParam1 = ABS(iParam1);
	}
	iVar1 = Function_33(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_49205[iVar120].f_72 != 0 || Global_49205[iVar120].f_72 != 1)
		{
			Global_49199[iVar1] = (Global_49199[iVar1] + TO_FLOAT(iParam1));
			strcpy(&Global_49205[iVar120] + 8, "QME+", 8);
			strcpy(&(Global_49205[iVar120]), INT_TO_STRING(iVar0), 8);
			Global_49205[iVar120].f_48 = 26;
			Global_49205[iVar120].f_68 = iParam0;
			Global_49205[iVar120].f_72 = 0;
			return 1;
		}
	}
	iVar1 = Function_13();
	Global_49199[iVar1] = TO_FLOAT(iParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(iVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

bool Function_42() //Position: 0x2D7A / 11642
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

var Function_43(int iParam0) //Position: 0x2DA5 / 11685
{
	return (*&Global_12976 + 104)[iParam0];
}

void Function_44(int iParam0, bool bParam1, bool bParam2) //Position: 0x2DB4 / 11700
{
	int iVar0;
	int iVar1;
	
	if (Function_43(0) && (!Global_3380 || iParam0 == 100))
	{
		return;
	}
	iVar1 = iParam0;
	if (Function_42())
	{
		iVar1 = (iVar1 / 2);
	}
	if (Global_3380)
	{
		Global_12976.f_164 = (Global_12976.f_164 + iParam0);
		return;
	}
	if (iVar1 == 0)
	{
		return;
	}
	iVar0 = Function_73(3);
	Function_46();
	if ((iVar0 + iVar1) >= 10000)
	{
		iVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_41(3, iVar1);
		if (!bParam2)
		{
			if (!Function_40(Global_76848, 4))
			{
				Function_34(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_124(3, iVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_19(3));
	iVar0 = Function_73(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_12(4, Function_45(Global_12976.f_156), 1);
				Function_11(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_12(4, Function_45(Global_12976.f_156), 1);
				Function_11(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_12(4, Function_45(Global_12976.f_156), 1);
				Function_11(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_12(4, Function_45(Global_12976.f_156), 1);
				Function_11(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_12(4, Function_45(Global_12976.f_156), 1);
				Function_11(Global_12976.f_152, Global_12976.f_156);
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

var Function_45(int iParam0) //Position: 0x2F83 / 12163
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

void Function_46() //Position: 0x3012 / 12306
{
	Function_48(3, 0.0f);
	Function_47(3, 10000.0f);
	return;
}

int Function_47(int iParam0, int iParam1) //Position: 0x3028 / 12328
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_48(int iParam0, int iParam1) //Position: 0x3068 / 12392
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

void Function_49() //Position: 0x30A8 / 12456
{
	return;
}

void Function_50(int iParam0, int iParam1) //Position: 0x30AE / 12462
{
	if (!Function_53(iParam0))
	{
		return;
	}
	Global_26401[iParam0] = iParam1;
	Function_51((*&Global_26401 + 2220)[iParam0], TO_FLOAT(iParam1), 0);
	Function_51(222, TO_FLOAT((Function_73(223) + Function_73(224))), 0);
	return;
}

int Function_51(int iParam0, float fParam1, bool bParam2) //Position: 0x30EF / 12527
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_34581[iParam0] > fParam1)
	{
		Function_52(iParam0, fParam1, 0);
	}
	Global_34581[iParam0] = fParam1;
	Function_31(iParam0);
	if (bParam2)
	{
		Function_21(iParam0, 1, fParam1, 0, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_52(int iParam0, float fParam1, bool bParam2) //Position: 0x335B / 13147
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

bool Function_53(int iParam0) //Position: 0x359F / 13727
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_54(bool bParam0) //Position: 0x35B4 / 13748
{
	if (Global_3403 == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		Global_3403 = 1;
		if (!Global_27759)
		{
			if (IS_FACTION_VALID(Global_26361))
			{
				SET_FACTIONS_STATUS_TWO_WAY(Global_26361, 2, 6);
			}
		}
		Global_13111 = 0;
	}
	else
	{
		Global_3403 = 0;
		Global_3405 = 0;
		Function_55();
		if (IS_FACTION_VALID(Global_26361))
		{
			SET_FACTIONS_STATUS_TWO_WAY(Global_26361, 2, 2);
		}
		SET_FACTIONS_STATUS_TWO_WAY(8, 2, 2);
		SET_FACTIONS_STATUS_TWO_WAY(10, 2, 2);
		if (IS_SCRIPT_VALID(Global_26316.f_60))
		{
			TERMINATE_SCRIPT(Global_26316.f_60);
		}
		if (IS_SCRIPT_VALID(Global_26316.f_64))
		{
			TERMINATE_SCRIPT(Global_26316.f_64);
		}
		Global_13111 = 4294967295;
	}
	return;
}

void Function_55() //Position: 0x363F / 13887
{
	int iVar0;
	
	Global_26960 = Function_67(StackVal);
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (Global_26998[iVar018] != 0)
		{
			(*&Global_26960 + 4)[iVar0] = (*&Global_26401 + 36[iVar0181][35])[StackVal];
		}
		iVar0++;
	}
	return;
}

var Function_56(int iParam0) //Position: 0x368D / 13965
{
	struct<89> Var0;
	
	Function_58(iParam0, 4294967295);
	Var0 = 10;
	if (!Function_57(0x1000000))
	{
		Function_55();
	}
	Var0.f_44 = Function_67(iParam0);
	Var0.f_64 = iParam0;
	Var0.f_48 = GET_PLAYER_ACTOR(0);
	Var0.f_52 = (*&Global_26316 + 104)[iParam0];
	Var0.f_88 = 0;
	return LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Ambient/CrimeResponse/event_law_repsonse_posse", &Var0, 23, 0);
}

bool Function_57(int iParam0) //Position: 0x371A / 14106
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_58(int iParam0, var uParam1) //Position: 0x3738 / 14136
{
	(*&Global_26316 + 88)[iParam0] = Function_59();
	uParam1 = uParam1;
	return;
}

var Function_59() //Position: 0x374E / 14158
{
	return MAKE_TIME_OF_DAY_EX(0, 0, 0, 1);
}

void Function_60(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x375B / 14171
{
	var uVar0;
	
	uVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&uVar0, iParam1, iParam2, iParam3, iParam4);
	if (IS_EARLIER_THAN((*&Global_26316 + 88)[iParam0], uVar0) || Function_61((*&Global_26316 + 88)[iParam0]))
	{
		(*&Global_26316 + 88)[iParam0] = uVar0;
	}
}

var Function_61(bool bParam0) //Position: 0x37A1 / 14241
{
	return (((GET_DAY(bParam0) != 0 && GET_HOUR(bParam0) != 0) && GET_MINUTE(bParam0) != 0) && GET_SECOND(bParam0) != 1);
}

var Function_62() //Position: 0x37C6 / 14278
{
	struct<73> Var0;
	
	Var0 = 10;
	Function_63(Global_26361.f_12);
	Var0.f_44 = Function_67(StackVal);
	Var0.f_52 = Global_26361;
	Var0.f_56 = StackVal;
	Var0.f_60 = Global_26361.f_12;
	Var0.f_64 = StackVal;
	Var0.f_72 = Global_26361.f_44;
	Var0.f_48 = GET_PLAYER_ACTOR(0);
	return LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Ambient/CrimeResponse/event_law_repsonse_local", &Var0, 23, 0);
}

void Function_63(int iParam0) //Position: 0x385C / 14428
{
	iParam0 = iParam0;
	return;
}

bool Function_64(bool bParam0) //Position: 0x3866 / 14438
{
	if (Function_57(256))
	{
		return 0;
	}
	if (Function_57(262144))
	{
		return 0;
	}
	if (Function_66())
	{
		return 0;
	}
	if (!Function_57(1))
	{
		return 0;
	}
	if (!Function_57(4096))
	{
		return 0;
	}
	if (bParam0 && Function_65(12))
	{
		return 0;
	}
	if (Global_3378)
	{
		return 0;
	}
	if (Function_57(2048))
	{
		return 0;
	}
	if (Function_129() || !bParam0)
	{
		if (Global_29007 != 2 || Global_29007 != 5)
		{
			return 0;
		}
	}
	return 1;
}

int Function_65(int iParam0) //Position: 0x38DC / 14556
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_66() //Position: 0x38ED / 14573
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

int Function_67(int iParam0) //Position: 0x3906 / 14598
{
	if (!Function_53(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

void Function_68(int iParam0, int iParam1) //Position: 0x391E / 14622
{
	if (!Function_53(iParam0))
	{
		return;
	}
	if (!iParam1 < 0)
	{
	}
	Global_26401[iParam0] = (Global_26401[iParam0] + iParam1);
	Function_124((*&Global_26401 + 2220)[iParam0], iParam1, 0, 0);
	Function_124(222, iParam1, 0, 0);
	return;
}

void Function_69() //Position: 0x3963 / 14691
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 39;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		bVar2 = iVar1;
		if (((UNK_0xDB679ED9(bVar2) != 41 || UNK_0xDB679ED9(bVar2) != 42) || UNK_0xDB679ED9(bVar2) != 43) || UNK_0xDB679ED9(bVar2) != 44)
		{
			SET_WEAPONENUM_LOCKED(bVar2, 0);
			GIVE_WEAPON_TO_ACTOR(GET_PLAYER_ACTOR(0), bVar2, 1.0f, 0, 1);
			PRINTSTRING("nGave the ");
			PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(bVar2));
			PRINTNL();
		}
		iVar1++;
	}
	_ADD_AMMO_OF_TYPE(GET_PLAYER_ACTOR(0), 9, _GET_MAX_AMMO_AMOUNT(GET_PLAYER_ACTOR(0), 9), 1, 0);
	_ADD_AMMO_OF_TYPE(GET_PLAYER_ACTOR(0), 8, _GET_MAX_AMMO_AMOUNT(GET_PLAYER_ACTOR(0), 8), 1, 0);
	_ADD_AMMO_OF_TYPE(GET_PLAYER_ACTOR(0), 10, _GET_MAX_AMMO_AMOUNT(GET_PLAYER_ACTOR(0), 10), 1, 0);
	_ADD_AMMO_OF_TYPE(GET_PLAYER_ACTOR(0), 11, _GET_MAX_AMMO_AMOUNT(GET_PLAYER_ACTOR(0), 11), 1, 0);
	switch (Global_29003)
	{
		case 0x00000000:
			READY_ITEM("base_repeater_REPEATER_Carbine", GET_PLAYER_ACTOR(0));
			break;
		
		case 0x00000001:
			READY_ITEM("base_repeater_REPEATER_Winchester", GET_PLAYER_ACTOR(0));
			break;
		
		case 0x00000002:
			READY_ITEM("base_repeater_REPEATER_Henry", GET_PLAYER_ACTOR(0));
			break;
		
		case 0x00000003:
			READY_ITEM("base_shotgun_SHOTGUN_Pumpaction", GET_PLAYER_ACTOR(0));
			break;
	}
	PRINTSTRING("Gave the player one handed guns.");
	PRINTNL();
	return;
}

int Function_70(int iParam0, bool bParam1) //Position: 0x3B22 / 15138
{
	int iVar0;
	
	iVar0 = Function_73(0);
	if ((Function_73(0) - iParam0) <= 0)
	{
		iParam0 = iVar0;
	}
	if (iParam0 >= 0)
	{
		Function_20(0, iParam0, 0);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), iVar0, (iParam0 * 4294967295), 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_73(0));
	return 1;
}

void Function_71() //Position: 0x3BB2 / 15282
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 39;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		bVar2 = iVar1;
		if (UNK_0xDB679ED9(bVar2) != 39 || UNK_0xDB679ED9(bVar2) != 40)
		{
			SET_WEAPONENUM_LOCKED(bVar2, 0);
			GIVE_WEAPON_TO_ACTOR(GET_PLAYER_ACTOR(0), bVar2, 1.0f, 0, 1);
			PRINTSTRING("nGave the ");
			PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(bVar2));
			PRINTNL();
		}
		iVar1++;
	}
	_ADD_AMMO_OF_TYPE(GET_PLAYER_ACTOR(0), 6, _GET_MAX_AMMO_AMOUNT(GET_PLAYER_ACTOR(0), 6), 1, 0);
	_ADD_AMMO_OF_TYPE(GET_PLAYER_ACTOR(0), 7, _GET_MAX_AMMO_AMOUNT(GET_PLAYER_ACTOR(0), 7), 1, 0);
	switch (Global_29003)
	{
		case 0x00000000:
			READY_ITEM("base_pistol_REVOLVER_Cattleman", GET_PLAYER_ACTOR(0));
			break;
		
		case 0x00000001:
			READY_ITEM("base_pistol_REVOLVER_Schofield", GET_PLAYER_ACTOR(0));
			break;
		
		case 0x00000002:
			READY_ITEM("base_pistol_REVOLVER_DoubleAction", GET_PLAYER_ACTOR(0));
			break;
		
		case 0x00000003:
			READY_ITEM("base_pistol_REVOLVER_DoubleAction", GET_PLAYER_ACTOR(0));
			break;
	}
	PRINTSTRING("Gave the player one handed guns.");
	PRINTNL();
	return;
}

int Function_72(int iParam0, bool bParam1) //Position: 0x3D37 / 15671
{
	int iVar0;
	
	iVar0 = Function_73(0);
	if ((Function_73(0) + iParam0) >= 999999)
	{
		iParam0 = (999999 - iVar0);
	}
	if (iParam0 >= 0)
	{
		Function_124(0, iParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_73(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), iVar0, iParam0, 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_124(597, iParam0, 0, 0);
	}
	if ((Function_73(597) + Function_73(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

int Function_73(int iParam0) //Position: 0x3E02 / 15874
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

int Function_74(int iParam0, bool bParam1, bool bParam2) //Position: 0x3E43 / 15939
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
		Function_52(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_31(iParam0);
	if (bParam2)
	{
		Function_21(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_75(bool bParam0, int iParam1) //Position: 0x40E1 / 16609
{
	*bParam0 = (*bParam0 || iParam1);
	return;
}

void Function_76(bool bParam0, bool bParam1, bool bParam2) //Position: 0x40F0 / 16624
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_118(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_117(bParam0))
	{
		if (!Function_115(bParam0))
		{
			Function_106(bParam0, 1, 0, 0, 1);
		}
		strcpy(&cVar0, "OUT_", 32);
		strcpy(&cVar8, "out_", 32);
		stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
		stradd(&cVar8, &Global_27774[bParam013] + 32, 32);
		stradd(&cVar8, "_desc", 32);
		if (Global_27774[bParam013].f_48 != 4294967295 || (Global_27774[bParam013].f_48 != 0 && Global_27774[bParam013].f_28 < 0))
		{
			Global_27774[bParam013].f_48 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		}
		if (Global_27774[bParam013].f_48 == 4294967295 && Global_27774[bParam013].f_48 == 0)
		{
			CLEAR_JOURNAL_ENTRY(Global_27774[bParam013].f_48);
			PREPEND_JOURNAL_ENTRY(Global_27774[bParam013].f_48, 1);
			PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &cVar8, 0, 2, 0);
			SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, -1.0f, 0, 0);
			if (!bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
			}
		}
		Function_124(457, 1, 0, 0);
		Function_105(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (bParam2)
		{
			if (!Function_104(0, 0, 1, 1))
			{
				Function_79(1);
				Function_78(1, 0);
			}
			else
			{
				Function_77();
			}
		}
	}
	return;
}

void Function_77() //Position: 0x428F / 17039
{
	return;
}

void Function_78(bool bParam0, int iParam1) //Position: 0x4295 / 17045
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = bParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_129())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", 1);
	return;
}

void Function_79(bool bParam0) //Position: 0x42D7 / 17111
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_93();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_80();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_39(&Global_63095, 1);
		Function_39(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_80() //Position: 0x4328 / 17192
{
	Function_91();
	Function_90();
	Function_90();
	Function_89();
	Function_89();
	Function_88();
	Function_88();
	Function_87(0);
	Function_87(0);
	if (!Function_129())
	{
		Function_85();
		Function_84();
		Function_83();
		Function_82();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_81();
	return;
}

void Function_81() //Position: 0x437A / 17274
{
	Global_34581[372] = GET_SAGPLAYER_STAT_FLOAT(0);
	Global_34581[373] = GET_SAGPLAYER_STAT_FLOAT(1);
	Global_34581[374] = GET_SAGPLAYER_STAT_FLOAT(2);
	Global_34581[375] = GET_SAGPLAYER_STAT_FLOAT(3);
	Global_34581[376] = GET_SAGPLAYER_STAT_FLOAT(4);
	Global_34581[377] = GET_SAGPLAYER_STAT_FLOAT(5);
	Global_34581[378] = GET_SAGPLAYER_STAT_FLOAT(6);
	Global_34581[379] = GET_SAGPLAYER_STAT_INT(1);
	Global_34581[380] = GET_SAGPLAYER_STAT_INT(2);
	Global_34581[381] = GET_SAGPLAYER_STAT_FLOAT(7);
	Global_34581[382] = GET_SAGPLAYER_STAT_FLOAT(8);
	Global_34581[383] = GET_SAGPLAYER_STAT_FLOAT(9);
	Global_34581[385] = GET_SAGPLAYER_STAT_INT(0);
	Global_34581[387] = GET_SAGPLAYER_STAT_FLOAT(10);
	Global_34581[388] = GET_SAGPLAYER_STAT_FLOAT(11);
	Global_34581[394] = GET_SAGPLAYER_STAT_FLOAT(12);
	Global_34581[44] = GET_SAGPLAYER_STAT_INT(3);
	Global_34581[392] = GET_SAGPLAYER_STAT_INT(4);
	Global_34581[391] = GET_SAGPLAYER_STAT_INT(6);
	Global_34581[393] = GET_SAGPLAYER_STAT_INT(5);
	Global_34581[395] = GET_SAGPLAYER_STAT_INT(7);
	return;
}

void Function_82() //Position: 0x4480 / 17536
{
	float fVar0;
	
	fVar0 = GET_PLAYER_DEADEYE_POINTS(0);
	if (Global_25986[1])
	{
		if (fVar0 > 50.0f)
		{
			fVar0 = 50.0f;
		}
	}
	else
	{
		fVar0 = 0.0f;
	}
	Global_83815 = fVar0;
	return;
}

void Function_83() //Position: 0x44B3 / 17587
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(1);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		iVar3 = GET_JOURNAL_ENTRY_IN_LIST(1, iVar1);
		if (iVar3 == 4294967295 && iVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(iVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 50 completed quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_76695[iVar23] = iVar3;
					Global_76695[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					Global_76695[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(iVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_76695[iVar13] = 4294967295;
		Global_76695[iVar13].f_4 = 4294967295;
		iVar1++;
	}
	return;
}

void Function_84() //Position: 0x4641 / 17985
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(0);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		iVar3 = GET_JOURNAL_ENTRY_IN_LIST(0, iVar1);
		if (iVar3 == 4294967295 && iVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(iVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 20 active quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_76543[iVar23] = iVar3;
					Global_76543[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					Global_76543[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(iVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_76543[iVar13] = 4294967295;
		Global_76543[iVar13].f_4 = 4294967295;
		iVar1++;
	}
	Global_76694 = GET_TARGETED_JOURNAL_ENTRY();
	if (Global_76694 == 4294967295 && Global_76694 == 0)
	{
		if (!GET_JOURNAL_ENTRY_TYPE(Global_76694) != 2)
		{
			Global_76694 = 4294967295;
		}
	}
	return;
}

void Function_85() //Position: 0x47F5 / 18421
{
	Function_86(&Global_28260, 1, 0);
	return;
}

void Function_86(int iParam0, bool bParam1, int iParam2) //Position: 0x4803 / 18435
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	
	bVar0 = Function_121();
	if (IS_ACTOR_VALID(bVar0))
	{
		iParam0->f_1012 = GET_NUM_WEAPONS_IN_INVENTORY(bVar0);
		iVar7 = 4294967294;
		iVar8 = GET_WEAPON_IN_HAND(bVar0);
		if (iVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(bVar0, iVar8) || iParam2)
			{
				iVar7 = GET_WEAPON_IN_HAND_CRC(bVar0);
			}
		}
		iVar1 = 0;
		while (iVar1 < (iParam0->f_1012 - 1))
		{
			iVar9 = ACTOR_GET_ITEM_CRC_AT_INDEX(iVar1, bVar0);
			if (iVar9 != iVar7)
			{
				(*iParam0 + 48)[iVar12] = iVar9;
				(iParam0 + 48[iVar12])->f_4 = GET_ITEM_COUNT_BY_CRC((*iParam0 + 48)[iVar12], bVar0);
			}
			iVar1++;
		}
		if (bParam1)
		{
			iParam0->f_44 = GET_NUM_ACCESSORIES_IN_INVENTORY(bVar0);
			iVar2 = 0;
			while (iVar2 < (iParam0->f_44 - 1))
			{
				(*iParam0)[iVar2] = ACTOR_GET_ACCESSORY_CRC_AT_INDEX(iVar2, bVar0);
				iVar2++;
			}
		}
		iVar3 = 0;
		while (iVar3 < (17 - 1))
		{
			(*iParam0 + 1016)[iVar3] = _GET_AMMO_AMOUNT(bVar0, iVar3, 0);
			iVar3++;
		}
		iParam0->f_1120 = 4294967295;
		iVar4 = 0;
		while (iVar4 < (7 - 1))
		{
			iVar10 = iVar4;
			(*iParam0 + 1088)[iVar4] = GET_WEAPON_EQUIPPED(bVar0, iVar10);
			if ((*iParam0 + 1088)[iVar4] == 4294967295)
			{
				if (GET_ITEM_EQUIPSLOT(iVar8) == iVar10)
				{
					(*iParam0 + 1088)[iVar4] = iVar8;
					iParam0->f_1120 = iVar8;
				}
			}
			iVar4++;
		}
		iParam0->f_2160 = GET_NUM_COLLECTABLES_IN_INVENTORY(bVar0);
		iVar1 = 0;
		while (iVar1 < (iParam0->f_2160 - 1))
		{
			uVar11 = ACTOR_GET_COLLECTABLE_CRC_AT_INDEX(iVar1, bVar0);
			(*iParam0 + 1132)[iVar12] = uVar11;
			(iParam0 + 1132[iVar12])->f_4 = GET_ITEM_COUNT_BY_CRC((*iParam0 + 1132)[iVar12], bVar0);
			iVar1++;
		}
		iVar12 = ACTOR_GET_NEXT_EQUIP_SLOT(bVar0);
		if (iVar12 != 4294967295)
		{
			iParam0->f_1124 = GET_WEAPON_EQUIPPED(bVar0, iVar12);
		}
		else
		{
			iParam0->f_1124 = 4294967295;
		}
		iVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(bVar0);
		if (iVar13 != 4294967295)
		{
			iParam0->f_1128 = GET_WEAPON_EQUIPPED(bVar0, iVar13);
		}
		else
		{
			iParam0->f_1128 = 4294967295;
		}
		iVar5 = 0;
		while (iVar5 < (39 - 1))
		{
			(*iParam0 + 2164)[iVar5] = IS_WEAPONENUM_LOCKED(iVar5);
			iVar5++;
		}
	}
	return;
}

struct<8> Function_87(char* cParam0) //Position: 0x49F4 / 18932
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar3 = 0;
	iVar4 = 0;
	while (iVar4 <= 39)
	{
		switch (iVar4)
		{
			case 0x00000015:
			case 0x00000016:
				iVar2 = 0;
				break;
			
			default:
				if (iVar4 == 31 || cParam0)
				{
					iVar2 = ((Function_73((50 + iVar4)) + Function_73((183 + iVar4))) + Function_73((90 + iVar4)));
				}
				break;
		}
		if (iVar2 > iVar3)
		{
			iVar5 = iVar4;
			iVar3 = iVar2;
		}
		iVar4++;
	}
	if (iVar3 < 0)
	{
		return StackVal, cVar0;
	}
	Function_74(182, iVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, iVar5, 8);
	return StackVal, cVar0;
}

struct<8> Function_88() //Position: 0x4A9A / 19098
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar5 = 0;
	iVar3 = 0;
	while (iVar3 <= 4)
	{
		iVar2 = ((Function_73((50 + iVar3) + 15) + Function_73((183 + iVar3) + 15)) + Function_73((90 + iVar3) + 15));
		if (iVar2 > iVar5)
		{
			iVar4 = iVar3;
			iVar5 = iVar2;
		}
		iVar3++;
	}
	if (iVar5 < 0)
	{
		return StackVal, cVar0;
	}
	Function_74(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_89() //Position: 0x4B23 / 19235
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar5 = 0;
	iVar3 = 0;
	while (iVar3 <= 13)
	{
		if (iVar3 > 7 || iVar3 < 10)
		{
			iVar2 = ((Function_73((50 + iVar3) + 8) + Function_73((183 + iVar3) + 8)) + Function_73((90 + iVar3) + 8));
			if (iVar2 > iVar5)
			{
				iVar4 = iVar3;
				iVar5 = iVar2;
			}
		}
		iVar3++;
	}
	if (iVar5 < 0)
	{
		return StackVal, cVar0;
	}
	Function_74(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_90() //Position: 0x4BBA / 19386
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar5 = 0;
	iVar3 = 0;
	while (iVar3 <= 8)
	{
		iVar2 = ((Function_73((50 + iVar3)) + Function_73((183 + iVar3))) + Function_73((90 + iVar3)));
		if (iVar2 > iVar5)
		{
			iVar4 = iVar3;
			iVar5 = iVar2;
		}
		iVar3++;
	}
	if (iVar5 < 0)
	{
		return StackVal, cVar0;
	}
	Function_74(179, iVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, iVar4, 8);
	return StackVal, cVar0;
}

void Function_91() //Position: 0x4C39 / 19513
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_92(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_74(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_92(int iParam0, float fParam1, int iParam2) //Position: 0x4C72 / 19570
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_INCREASE_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (fParam1 > 0.0f)
	{
		LOG_ERROR("\STAT_INCREASE_NOW: fIncreaseValue < 0.0 - I am turning this into a positive number for you!");
		fParam1 = FABS(fParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] + fParam1);
	Function_52(iParam0, fParam1, 1);
	Function_31(iParam0);
	if (iParam2 && fParam1 == 0.0f)
	{
		Function_21(iParam0, 1, fParam1, 0, 1, 0x40400000, 0, 0);
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= ROUND(fParam1))
		{
			ADD_COLLECTABLE(&(Global_35278[iParam020]), Global_34573, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_93() //Position: 0x4E7C / 20092
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_125())
	{
		Function_100(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_100(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_95(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_95(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_94(StackVal, StackVal, vVar0))
	{
		vVar0 = { StackVal, StackVal, Global_34574 };
		vVar0.f_4 = (vVar0.y + 0.5f);
		FIND_GROUND_INTERSECTION(&vVar0, 100.0f, &Global_34165, &uVar3);
	}
	else
	{
		Global_34165 = { StackVal, StackVal, vVar0 };
	}
	Global_34165.f_156 = Global_34165.f_12;
	*(&Global_34165 + 144) = { StackVal, StackVal, Global_34165 };
	Global_34165.f_160 = Global_34165.f_16;
	Global_34165.f_28 = 0;
	Global_34165.f_36 = 0;
	Global_34165.f_40 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_88793 = 1;
	return;
}

bool Function_94(vector3 vParam0) //Position: 0x4F37 / 20279
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_95(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x4F4F / 20303
{
	int iVar0;
	
	iVar0 = Function_98(uParam2, uParam3);
	if (Function_97(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_75(&Global_63095, 1);
			Function_39(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_75(&Global_63095, 2);
			Function_39(&Global_63095, 1);
			if ((iVar0 != 13 || iVar0 != 14) || iVar0 != 4)
			{
				*uParam1 = 0;
			}
			else
			{
				*uParam1 = 1;
			}
		}
		if (iVar0 == 1)
		{
			*uParam0 = 89.88f;
			return -2158.348f, 19.944f, 2597.452f;
		}
		*uParam0 = Global_16537[iVar021].f_12;
		return StackVal, StackVal, Global_16537[iVar021];
	}
	if (Global_16875)
	{
		Function_75(&Global_63095, 2);
		Function_39(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_96();
	return StackVal, StackVal, Function_96();
}

vector3 Function_96() //Position: 0x5036 / 20534
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_97(int iParam0) //Position: 0x503F / 20543
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_98(bool bParam0, bool bParam1) //Position: 0x5055 / 20565
{
	bool bVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	bVar0 = 4294967295;
	fVar1 = 1E+09.0f;
	iVar3 = 0;
	while (iVar3 <= Global_16537)
	{
		if (((Global_16537[iVar321].f_40 != 3 || Global_16537[iVar321].f_40 != 4) || (iVar3 != 15 && !bParam0)) && (Global_16537[iVar321].f_52 != Global_29004 || bParam1))
		{
			if (Global_3365 || iVar3 == 6)
			{
				fVar2 = Function_99(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
				if (fVar2 > fVar1)
				{
					fVar1 = fVar2;
					bVar0 = iVar3;
				}
			}
		}
		iVar3++;
	}
	if (Global_16875)
	{
		fVar2 = Function_99(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_97(bVar0) && !bParam1)
	{
		bVar0 = Function_98(bParam0, 1);
	}
	return bVar0;
}

float Function_99(vector3 vParam0, vector3 vParam3) //Position: 0x511C / 20764
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_100(var uParam0, int iParam1) //Position: 0x5139 / 20793
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	float fVar10;
	
	*uParam0 = *uParam0;
	fVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_103(Global_34573, &vVar4);
	if (!Function_101(Global_30640[0]))
	{
		vVar7 = { -2158.996f, 19.93287f, 2597.94f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 90.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_101(Global_30640[2]))
	{
		vVar7 = { -2424.093f, 26.36347f, 2122.362f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -130.87f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_101(Global_30640[1]))
	{
		vVar7 = { -3242.193f, 19.4623f, 2725.147f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 90.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_101(Global_30658[1]))
	{
		vVar7 = { -3658.131f, 42.81397f, 2092.973f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -135.09f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_101(Global_30658[3]))
	{
		vVar7 = { -4454.145f, 9.204829f, 3220.642f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 206.26f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_101(Global_30658[2]))
	{
		GET_VOLUME_CENTER(StackVal, &vVar7);
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 0.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_101(Global_30658[4]))
	{
		vVar7 = { -3669.226f, 8.477426f, 3491.648f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 106.17f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_101(Global_30668[0]))
	{
		vVar7 = { -821.1879f, 93.8091f, 2435.436f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 343.64f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_101(Global_30668[1]))
	{
		vVar7 = { 124.6513f, 76.73672f, 2235.506f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 165.38f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_101(Global_30668[2]))
	{
		GET_VOLUME_CENTER(StackVal, &vVar7);
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 0.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_101(Global_30679[0]))
	{
		vVar7 = { -3195.612f, 41.29269f, 3752.929f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -97.3f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_101(Global_30685[0]))
	{
		vVar7 = { -4287.014f, 18.13315f, 4453.605f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -6.71f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_101(Global_30685[1]))
	{
		vVar7 = { -4708.083f, 3.172676f, 3968.105f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -90.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_101(Global_30685[2]))
	{
		vVar7 = { -3245.478f, 39.28797f, 4563.465f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -90.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_101(Global_30693[0]))
	{
		vVar7 = { -2687.509f, 31.4827f, 4295.249f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -90.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_101(Global_30693[1]))
	{
		vVar7 = { -1719.171f, 11.29226f, 4214.298f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -180.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_101(Global_30693[2]))
	{
		vVar7 = { -1462.607f, 16.54457f, 3952.801f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 22.55f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_101(Global_30707[2]))
	{
		vVar7 = { -819.4399f, 13.11084f, 3712.137f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -135.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_101(Global_30707[3]))
	{
		vVar7 = { 343.2535f, 79.47575f, 3448.062f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -104.45f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_101(Global_30707[0]))
	{
		vVar7 = { -465.2258f, 20.61027f, 3913.855f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -90.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_101(Global_30717[0]))
	{
		vVar7 = { 757.22f, 86.90343f, 1271.724f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 270.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_101(Global_30723[2]))
	{
		vVar7 = { -298.7082f, 84.35147f, 2134.708f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 59.3f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_101(Global_30723[1]))
	{
		vVar7 = { -448.9981f, 153.3878f, 1631.183f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 20.74f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_101(Global_30723[0]))
	{
		vVar7 = { -884.3423f, 202.5276f, 1006.602f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 94.65f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_101(Global_30679[1]))
	{
		vVar7 = { -2679.319f, 71.65485f, 3424.564f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -135.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_101(Global_30707[1]))
	{
		vVar7 = { -720.3301f, 67.5125f, 3293.269f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -39.9f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	vVar7 = { -63.861f, 116.861f, 1414.684f };
	fVar10 = VDIST(vVar4, vVar7);
	if (fVar10 > fVar0)
	{
		fVar0 = fVar10;
		vVar1 = { StackVal, StackVal, vVar7 };
	}
	Function_75(&Global_63095, 2);
	Function_39(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_94(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_101(int iParam0) //Position: 0x595E / 22878
{
	var uVar0;
	
	uVar0 = Global_29008[iParam0];
	return (((Function_102(uVar0, 0x1000000) || Function_102(uVar0, 0x2000000)) || Function_102(uVar0, 0x4000000)) || !Function_102(uVar0, 0x10000000));
}

bool Function_102(bool bParam0, int iParam1) //Position: 0x5999 / 22937
{
	return (bParam0 && iParam1) == 0;
}

void Function_103(bool bParam0, int iParam1) //Position: 0x59A6 / 22950
{
	GET_POSITION(bParam0, iParam1);
	return;
}

bool Function_104(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x59B3 / 22963
{
	iParam0 = iParam0;
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
	if (Global_3393 && iParam2)
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
	if (Global_59353 && iParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

void Function_105(bool bParam0, int iParam1) //Position: 0x5A57 / 23127
{
	if (!Function_118(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

void Function_106(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x5AAC / 23212
{
	struct<8> Var0;
	
	if (!Function_118(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_114(3) && !bParam4)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_115(bParam0))
	{
		Function_124(456, 1, 0, 0);
		Function_105(bParam0, 2);
		if (bParam2)
		{
			if (!Function_104(0, 0, 1, 1))
			{
				Function_79(1);
				Function_78(1, 5);
			}
			else
			{
				Function_77();
			}
		}
		Function_108(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_107() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_107() || Global_3380)
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
			{
				DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
			}
		}
		if (bParam3)
		{
			stradd(&Var0, "_tip", 32);
			Function_130(&Var0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_125())
		{
			if (!Function_40(Global_76846, 2))
			{
				Function_34(Global_34573, 2, 1, 0);
			}
		}
	}
}

bool Function_107() //Position: 0x5C01 / 23553
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_108(bool bParam0) //Position: 0x5C2E / 23598
{
	char* cVar0[32];
	char* cVar8[32];
	struct<8> Var16;
	int iVar24;
	
	strcpy(&cVar0, "OUT_", 32);
	strcpy(&cVar8, "out_", 32);
	stradd(&cVar0, &Global_27774[iParam013] + 32, 32);
	stradd(&cVar8, &Global_27774[iParam013] + 32, 32);
	stradd(&cVar8, "_hint", 32);
	if (!IS_JOURNAL_ENTRY_IN_LIST(Global_27774[iParam013].f_48, 0) && !IS_JOURNAL_ENTRY_IN_LIST(Global_27774[iParam013].f_48, 1))
	{
		Global_27774[bParam013].f_48 = CREATE_JOURNAL_ENTRY(&cVar0, 4, iParam0, 0);
		APPEND_JOURNAL_ENTRY(Global_27774[bParam013].f_48, 0);
		iVar24 = 0;
		while (iVar24 <= Global_27774[bParam013].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, iVar24 + 1, 32);
			if (Function_112(bParam0, Function_113(iVar24)))
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &Var16, 0, 4, 0);
			}
			else
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &Var16, 0, 3, 0);
			}
			iVar24++;
		}
	}
	else if (IS_JOURNAL_ENTRY_IN_LIST(Global_27774[bParam013].f_48, 0))
	{
		iVar24 = 0;
		while (iVar24 <= Global_27774[bParam013].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, iVar24 + 1, 32);
			if (Function_112(bParam0, Function_113(iVar24)))
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_27774[bParam013].f_48, &Var16, 4, 0);
			}
			else
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_27774[bParam013].f_48, &Var16, 3, 0);
			}
			iVar24++;
		}
	}
	if (Global_27774[bParam013].f_48 == 4294967295 && Global_27774[bParam013].f_48 == 0)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_111(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), 0, 0);
		Function_110(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_109(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_109(int iParam0) //Position: 0x5DDE / 24030
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_118(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 <= Global_27774[iParam013].f_28)
	{
		iVar1 = iVar1;
		if ((StackVal && iVar0) == 0)
		{
			return iVar1 + 1;
		}
		iVar0 *= 2;
		iVar1++;
	}
	return iVar2 + 1;
}

void Function_110(var uParam0, int iParam1) //Position: 0x5E35 / 24117
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(uParam0);
	REMOVE_JOURNAL_ENTRY(uParam0, iParam1);
	PREPEND_JOURNAL_ENTRY(uParam0, iParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(uParam0);
	}
	return;
}

var Function_111(int iParam0) //Position: 0x5E5A / 24154
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_118(iParam0))
	{
		return 4294967295;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_27774[iParam013].f_28)
	{
		if ((StackVal && iVar0) >= 0)
		{
			iVar2++;
		}
		iVar0 *= 2;
		iVar1++;
	}
	return iVar2;
}

bool Function_112(int iParam0, int iParam1) //Position: 0x5EB0 / 24240
{
	int iVar0;
	
	if (!Function_118(iParam0))
	{
		LOG_ERROR("Attempting to check scraps on invalid outfit");
		return 0;
	}
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_113(int iParam0) //Position: 0x5F0F / 24335
{
	return SHIFT_LEFT(1, iParam0);
}

bool Function_114(int iParam0) //Position: 0x5F1B / 24347
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_115(int iParam0) //Position: 0x5F37 / 24375
{
	if (!Function_118(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_116(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

bool Function_116(int iParam0, int iParam1) //Position: 0x5F89 / 24457
{
	int iVar0;
	
	if (!Function_118(iParam0))
	{
		return 0;
	}
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_117(int iParam0) //Position: 0x5FB6 / 24502
{
	if (!Function_118(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_116(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_118(int iParam0) //Position: 0x6007 / 24583
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_119() //Position: 0x601D / 24605
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_102(GET_GAME_EDITION(), 16);
	}
	return 0;
}

void Function_120() //Position: 0x604D / 24653
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 696)
	{
		if (iVar0 <= 490 && iVar0 >= 595)
		{
			Function_124(iVar0, 1, 0, 0);
		}
		iVar0++;
	}
	return;
}

int Function_121() //Position: 0x6080 / 24704
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_122() //Position: 0x6095 / 24725
{
	if (Global_76853)
	{
		UNK_0x1082715D();
		Global_34165.f_132 = 0;
	}
	return;
}

int Function_123() //Position: 0x60AE / 24750
{
	int iVar0;
	
	return iVar0;
}

int Function_124(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x60B6 / 24758
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
	if (iParam1 <= 0)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: iIncreaseValue < 0 - I am turning this into a positive number for you!");
		iParam1 = ABS(iParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] + TO_FLOAT(iParam1));
	Function_52(iParam0, TO_FLOAT(bParam1), 1);
	Function_31(iParam0);
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

bool Function_125() //Position: 0x62D6 / 25302
{
	if (Function_102(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_126(float fParam0) //Position: 0x62F1 / 25329
{
	int iVar0;
	vector3 vVar1;
	bool bVar4;
	char* cVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	
	iVar0 = CREATE_OBJECTSET_IN_LAYOUT("killAll", Global_6288, 4294967295, 0);
	Function_127(Global_34573);
	vVar1 = { StackVal, StackVal, Function_127(Global_34573) };
	bVar4 = CREATE_VOLUME_IN_LAYOUT(Global_6288, Function_123(), 3, vVar1, 0.0f, 0.0f, 0.0f, fParam0, 50.0f, fParam0);
	LOCATE_ACTORS_IN_VOLUME(bVar4, iVar0, 0, 1);
	cVar5 = CREATE_OBJECT_ITERATOR(Global_6289);
	ITERATE_ON_OBJECT_TYPE(cVar5, 24);
	ITERATE_IN_VOLUME(cVar5, bVar4);
	bVar6 = START_OBJECT_ITERATOR(cVar5);
	while (IS_OBJECT_VALID(bVar6))
	{
		ADD_OBJECT_TO_OBJECTSET(bVar6, iVar0);
		bVar6 = OBJECT_ITERATOR_NEXT(cVar5);
	}
	WAIT(0);
	iVar7 = 0;
	iVar7 = 0;
	while (iVar7 < (GET_OBJECTSET_SIZE(iVar0) - 1))
	{
		bVar8 = GET_INDEXED_OBJECT_IN_OBJECTSET(iVar7, iVar0);
		if (!bVar8 != GET_OBJECT_FROM_ACTOR(Global_34573))
		{
			DESTROY_OBJECT(bVar8);
		}
		iVar7++;
	}
	DESTROY_VOLUME(bVar4);
	DESTROY_OBJECTSET(iVar0);
	return;
}

vector3 Function_127(bool bParam0) //Position: 0x63B6 / 25526
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

bool Function_128(bool bParam0, bool bParam1, bool bParam2) //Position: 0x63C7 / 25543
{
	if (bParam2)
	{
		if (!IS_DEBUGKEY_DOWN(54) && !IS_DEBUGKEY_DOWN(42))
		{
			return 0;
		}
	}
	if (IS_DEBUGKEY_DOWN(54) || IS_DEBUGKEY_DOWN(42))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!IS_DEBUGKEY_DOWN(29) && !IS_DEBUGKEY_DOWN(157))
		{
			return 0;
		}
	}
	if (IS_DEBUGKEY_DOWN(29) || IS_DEBUGKEY_DOWN(157))
	{
		return 0;
	}
	if (bParam0)
	{
		if (!IS_DEBUGKEY_DOWN(56) && !IS_DEBUGKEY_DOWN(184))
		{
			return 0;
		}
	}
	if (IS_DEBUGKEY_DOWN(56) || IS_DEBUGKEY_DOWN(184))
	{
		return 0;
	}
	return 1;
}

bool Function_129() //Position: 0x644C / 25676
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_130(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x6455 / 25685
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_131(Global_6269) };
		}
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, uVar4, iParam6);
	}
}

struct<16> Function_131(int iParam0) //Position: 0x64D0 / 25808
{
	char* cVar0[16];
	
	if (!Function_125())
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

int Function_132(bool bParam0) //Position: 0x650F / 25871
{
	if (bParam0)
	{
		return "TRUE";
	}
	return "FALSE";
}

int Function_133() //Position: 0x652A / 25898
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	bool bVar10;
	int iVar11;
	bool bVar12;
	bool bVar13;
	int iVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	int iVar19;
	int iVar20;
	vector3 vVar21;
	bool bVar24;
	int iVar25;
	bool bVar26;
	struct<25> Var27;
	vector3 vVar53;
	char* cVar56;
	bool bVar57;
	bool bVar58;
	bool bVar59;
	int iVar60;
	struct<8> Var61;
	vector3 vVar69;
	bool bVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	bool bVar80;
	int iVar81;
	bool bVar82;
	
	DISABLE_GRINGO_STREAMING_CHECKS();
	iVar0 = GET_NUM_EVENT_RESPONSES();
	iVar2 = 0;
	while (iVar2 < (iVar0 - 1))
	{
		bVar16 = GET_EVENT_FOR_RESPONSE(iVar2);
		switch (GET_EVENT_RESPONSE_ID(iVar2))
		{
			case 0x00000001:
				iVar11 = GET_EVENT_TARGET_AS_PHYSINST(bVar16);
				if (IS_PHYSINST_VALID(iVar11))
				{
					bVar12 = GET_OBJECT_FROM_PHYSINST(iVar11);
					if (!DECOR_CHECK_EXIST(bVar12, "nnoExplode"))
					{
						GET_OBJECT_POSITION(bVar12, &vVar3);
						bVar26 = GET_EVENT_PERPETRATOR(bVar16);
						if (IS_OBJECT_VALID(bVar26))
						{
							Function_281(&vVar3, "DynamiteExplosion", GET_ACTOR_FROM_OBJECT(bVar26), 0);
						}
						else
						{
							Function_281(&vVar3, "DynamiteExplosion", 0, 0);
						}
					}
					if (!DECOR_CHECK_EXIST(bVar12, "nnoDestroy"))
					{
						DESTROY_OBJECT(bVar12);
					}
					else
					{
						SET_PROP_HEALTH(bVar12, 10.0f);
						DECOR_REMOVE(bVar12, "nnoDestroy");
					}
				}
				break;
			
			case 0x00000002:
				iVar11 = GET_EVENT_TARGET_AS_PHYSINST(bVar16);
				if (IS_PHYSINST_VALID(iVar11))
				{
					bVar12 = GET_OBJECT_FROM_PHYSINST(iVar11);
					if (!DECOR_CHECK_EXIST(bVar12, "nnoExplode"))
					{
						GET_OBJECT_POSITION(bVar12, &vVar3);
						bVar26 = GET_EVENT_PERPETRATOR(bVar16);
						if (IS_OBJECT_VALID(bVar26))
						{
							Function_281(&vVar3, "FireBottleExplosion", GET_ACTOR_FROM_OBJECT(bVar26), 0);
						}
						else
						{
							Function_281(&vVar3, "FireBottleExplosion", 0, 0);
						}
					}
					if (!DECOR_CHECK_EXIST(bVar12, "nnoDestroy"))
					{
						DESTROY_OBJECT(bVar12);
					}
					else
					{
						SET_PROP_HEALTH(bVar12, 10.0f);
						DECOR_REMOVE(bVar12, "nnoDestroy");
					}
				}
				break;
			
			case 0x00000003:
				iVar11 = GET_EVENT_TARGET_AS_PHYSINST(bVar16);
				if (IS_PHYSINST_VALID(iVar11))
				{
					bVar12 = GET_OBJECT_FROM_PHYSINST(iVar11);
					if (!DECOR_CHECK_EXIST(bVar12, "nnoExplode"))
					{
						GET_OBJECT_POSITION(bVar12, &vVar3);
						bVar26 = GET_EVENT_PERPETRATOR(bVar16);
						if (IS_OBJECT_VALID(bVar26))
						{
							Function_281(&vVar3, "KeroseneLampExplosion", GET_ACTOR_FROM_OBJECT(bVar26), 0);
						}
						else
						{
							Function_281(&vVar3, "KeroseneLampExplosion", 0, 0);
						}
					}
					if (!DECOR_CHECK_EXIST(bVar12, "nnoDestroy"))
					{
						DESTROY_OBJECT(bVar12);
					}
					else
					{
						SET_PROP_HEALTH(bVar12, 10.0f);
						DECOR_REMOVE(bVar12, "nnoDestroy");
					}
				}
				break;
			
			case 0x00000004:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					DESTROY_OBJECT(bVar12);
				}
				break;
			
			case 0x00000005:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					bVar26 = GET_EVENT_PERPETRATOR(bVar16);
					if (IS_OBJECT_VALID(bVar26))
					{
						Function_281(&vVar3, "GrenadeExplosion", GET_ACTOR_FROM_OBJECT(bVar26), 1);
						Function_281(&vVar3, "FireBottleExplosion", GET_ACTOR_FROM_OBJECT(bVar26), 1);
					}
					else
					{
						Function_281(&vVar3, "GrenadeExplosion", 0, 1);
						Function_281(&vVar3, "FireBottleExplosion", 0, 1);
					}
					DESTROY_OBJECT(bVar12);
				}
				break;
			
			case 0x00000006:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
				}
				break;
			
			case 0x00000007:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					vVar3 = { 0.0f, 0.0f, 0.0f };
					vVar6 = { 0.0f, 0.0f, 0.0f };
					CREATE_GRINGO_ON_OBJECT(bVar12, "sliding_gate_gringo", "$/content/scripting/gringo/simplegringo/sliding_gate", vVar3, vVar6);
				}
				break;
			
			case 0x00000036:
				bVar13 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar13))
				{
					if (GET_OBJECT_TYPE(bVar13) == 15)
					{
						bVar24 = GET_ACTOR_FROM_OBJECT(bVar13);
						if (!IS_ACTOR_PLAYER(bVar24))
						{
							ACTOR_ENABLE_VARIABLE_MESH(bVar24, 0, 0);
							ACTOR_ENABLE_VARIABLE_MESH(bVar24, 1, 1);
							ACTOR_ENABLE_VARIABLE_MESH(bVar24, 2, 1);
							ACTOR_ENABLE_VARIABLE_MESH(bVar24, 3, 0);
							ACTOR_ENABLE_VARIABLE_MESH(bVar24, 4, 0);
						}
					}
				}
				break;
			
			case 0x00000008:
				if (!Function_129())
				{
					bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
					if (IS_OBJECT_VALID(bVar12))
					{
						vVar3 = { 0.0f, 0.0f, 0.0f };
						vVar6 = { 0.0f, 1.0f, 0.0f };
						bVar36 = false;
						if (DECOR_CHECK_EXIST(bVar12, "WasDrafted"))
						{
							bVar36 = DECOR_GET_BOOL(bVar12, "WasDrafted");
						}
						iVar37 = 1;
						if (DECOR_CHECK_EXIST(bVar12, "nNoLooting"))
						{
							iVar37 = 0;
						}
						if (!bVar36 && iVar37)
						{
							iVar38 = Function_280(GET_CORPSE_ACTOR_ENUM(bVar12));
							if (iVar38 == 1)
							{
								bVar18 = CREATE_GRINGO_ON_OBJECT(bVar12, "Skin_Animal", "$/content/scripting/gringo/simplegringo/Skin_Animal", vVar3, vVar6);
							}
							else if (iVar38 == 2)
							{
								bVar18 = CREATE_GRINGO_ON_OBJECT(bVar12, "Pluck_Feather", "$/content/scripting/gringo/simplegringo/Pluck_Feather", vVar3, vVar6);
							}
							if (IS_OBJECT_VALID(bVar18))
							{
								if (DECOR_CHECK_EXIST(bVar12, "NonActiveGringo"))
								{
									DECOR_REMOVE(bVar12, "NonActiveGringo");
									GRINGO_SET_USABLE_BY_PLAYER(GET_GRINGO_FROM_OBJECT(bVar18), "UseCase", 0);
								}
								if (DECOR_CHECK_EXIST(bVar12, "Home02_S1_Skin1"))
								{
									DECOR_SET_OBJECT(Global_34573, "Skin1", bVar18);
								}
								else if (DECOR_CHECK_EXIST(bVar12, "Home02_S1_Skin2"))
								{
									DECOR_SET_OBJECT(Global_34573, "Skin2", bVar18);
								}
								else if (DECOR_CHECK_EXIST(bVar12, "Home02_S1_Skin3"))
								{
									DECOR_SET_OBJECT(Global_34573, "Skin3", bVar18);
								}
								else if (DECOR_CHECK_EXIST(bVar12, "Home02_S1_Skin4"))
								{
									DECOR_SET_OBJECT(Global_34573, "Skin4", bVar18);
								}
								if (DECOR_CHECK_EXIST(bVar12, "Skinning_CreateBlip"))
								{
									ADD_BLIP_FOR_OBJECT(bVar18, 330, 0.0f, 3, 0);
									DECOR_REMOVE(bVar12, "Skinning_CreateBlip");
								}
								if (Function_114(6))
								{
									if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bVar18)))
									{
										bVar39 = ADD_BLIP_FOR_OBJECT(bVar18, 456, 0.0f, 0, 0);
										SET_BLIP_MAX_DISTANCE(bVar39, 0.5f);
										UNK_0x1E98AFEC(bVar39, 1);
										SET_BLIP_SCALE(bVar39, 0.6f);
										SET_BLIP_COLOR(bVar39, 0.35f, 0.35f, 0.35f, 0.65f);
									}
								}
								if (DECOR_CHECK_EXIST(bVar12, "skinning_objSet"))
								{
									ADD_OBJECT_TO_OBJECTSET(bVar18, GET_OBJECTSET_FROM_OBJECT(DECOR_GET_OBJECT(bVar12, "skinning_objSet")));
								}
							}
						}
					}
				}
				break;
			
			case 0x00000009:
				if (!Function_129())
				{
					bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
					if (IS_OBJECT_VALID(bVar12))
					{
						if (!DECOR_CHECK_EXIST(bVar12, "nNoLooting"))
						{
							vVar3 = { 0.0f, 0.0f, 0.0f };
							vVar6 = { 0.0f, 1.0f, 0.0f };
							if (Function_280(GET_CORPSE_ACTOR_ENUM(bVar12)) == 2)
							{
								bVar40 = CREATE_GRINGO_ON_OBJECT(bVar12, "Pluck_Feather", "$/content/scripting/gringo/simplegringo/Pluck_Feather", vVar3, vVar6);
								if (Function_114(6))
								{
									if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bVar40)))
									{
										bVar41 = ADD_BLIP_FOR_OBJECT(bVar40, 456, 0.0f, 0, 0);
										SET_BLIP_MAX_DISTANCE(bVar41, 0.5f);
										UNK_0x1E98AFEC(bVar41, 1);
										SET_BLIP_SCALE(bVar41, 0.6f);
										SET_BLIP_COLOR(bVar41, 0.35f, 0.35f, 0.35f, 0.65f);
									}
								}
							}
						}
						else
						{
							DECOR_REMOVE(bVar12, "nNoLooting");
						}
					}
				}
				break;
			
			case 0x0000000A:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (!Function_129())
				{
					if (IS_OBJECT_VALID(bVar12))
					{
						bVar42 = false;
						if (DECOR_CHECK_EXIST(bVar12, "corpse_loot_gringo"))
						{
							if (DECOR_GET_BOOL(bVar12, "corpse_loot_gringo") == 1)
							{
								bVar42 = true;
							}
							DECOR_REMOVE(bVar12, "corpse_loot_gringo");
						}
						else
						{
							bVar42 = true;
						}
						if (DECOR_CHECK_EXIST(bVar12, "ReturnCorpse"))
						{
							ADD_OBJECT_TO_OBJECTSET(bVar12, GET_OBJECTSET_FROM_OBJECT(DECOR_GET_OBJECT(bVar12, "ReturnCorpse")));
						}
						if (bVar42)
						{
							vVar3 = { 0.0f, 0.0f, 0.0f };
							vVar6 = { 0.0f, 0.0f, 0.0f };
							iVar43 = 0;
							vVar44 = { 0.0f, 0.0f, 0.0f };
							vVar47 = { 0.0f, 0.0f, 0.0f };
							vVar50 = { 0.0f, 0.0f, 0.0f };
							vVar53 = { 0.0f, 0.0f, 0.0f };
							if (!DECOR_CHECK_EXIST(bVar12, "NoEating"))
							{
								if (DECOR_CHECK_EXIST(bVar12, "AddCoyoteEatingToCorpse"))
								{
									DECOR_REMOVE(bVar12, "AddCoyoteEatingToCorpse");
									PREPARE_CORPSE_FOR_ANIMAL_CONSUMPTION(bVar12, &iVar43, &vVar44, &vVar47, &vVar50, &vVar53);
									cVar56 = CREATE_GRINGO_ON_OBJECT(bVar12, Function_123(), "coyote_eating", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
									DECOR_SET_OBJECT(cVar56, "GringoTarg", bVar12);
								}
								else if (DECOR_CHECK_EXIST(bVar12, "AddBearEatingToCorpse"))
								{
									DECOR_REMOVE(bVar12, "AddBearEatingToCorpse");
									PREPARE_CORPSE_FOR_ANIMAL_CONSUMPTION(bVar12, &iVar43, &vVar44, &vVar47, &vVar50, &vVar53);
									cVar56 = CREATE_GRINGO_ON_OBJECT(bVar12, Function_123(), "bear_eating", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
									DECOR_SET_OBJECT(cVar56, "GringoTarg", bVar12);
								}
								else if (DECOR_CHECK_EXIST(bVar12, "AddWolfEatingToCorpse"))
								{
									DECOR_REMOVE(bVar12, "AddWolfEatingToCorpse");
									PREPARE_CORPSE_FOR_ANIMAL_CONSUMPTION(bVar12, &iVar43, &vVar44, &vVar47, &vVar50, &vVar53);
									cVar56 = CREATE_GRINGO_ON_OBJECT(bVar12, Function_123(), "wolf_eating", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
									DECOR_SET_OBJECT(cVar56, "GringoTarg", bVar12);
								}
								else if (DECOR_CHECK_EXIST(bVar12, "AddCougarEatingToCorpse"))
								{
									DECOR_REMOVE(bVar12, "AddCougarEatingToCorpse");
									PREPARE_CORPSE_FOR_ANIMAL_CONSUMPTION(bVar12, &iVar43, &vVar44, &vVar47, &vVar50, &vVar53);
									cVar56 = CREATE_GRINGO_ON_OBJECT(bVar12, Function_123(), "cougar_eating", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
									DECOR_SET_OBJECT(cVar56, "GringoTarg", bVar12);
								}
							}
							else
							{
								DECOR_REMOVE(bVar12, "NoEating");
							}
							if (Function_114(6))
							{
								if (!DECOR_CHECK_EXIST(bVar12, "nNoLooting"))
								{
									bVar17 = CREATE_GRINGO_IN_LAYOUT(Global_6289, Function_123(), "Loot_Corpse", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
									ATTACH_OBJECTS(bVar17, bVar12, "pelvis", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
									GIVE_OBJECT_TO_LAYOUT(bVar17, bVar12);
									GRINGO_SET_TARGET_OBJECT(GET_GRINGO_FROM_OBJECT(bVar17), bVar12, 1);
									if (DECOR_CHECK_EXIST(bVar12, "LootCorpse_CreateBlip"))
									{
										if (!DECOR_CHECK_EXIST(bVar12, "LootCorpse_WhichBlip"))
										{
											ADD_BLIP_FOR_OBJECT(bVar17, 325, 0.0f, 2, 0);
										}
										else
										{
											ADD_BLIP_FOR_OBJECT(bVar17, DECOR_GET_INT(bVar12, "LootCorpse_WhichBlip"), 0.0f, 2, 0);
											DECOR_REMOVE(bVar12, "LootCorpse_WhichBlip");
										}
										DECOR_REMOVE(bVar12, "LootCorpse_CreateBlip");
									}
									else
									{
										bVar57 = ADD_BLIP_FOR_OBJECT(bVar17, 456, 0.0f, 0, 0);
										SET_BLIP_MAX_DISTANCE(bVar57, 0.5f);
										UNK_0x1E98AFEC(bVar57, 1);
										SET_BLIP_SCALE(bVar57, 0.6f);
										SET_BLIP_COLOR(bVar57, 0.35f, 0.35f, 0.35f, 0.65f);
									}
									if (DECOR_CHECK_EXIST(bVar12, "lootCorpse_objSet"))
									{
										ADD_OBJECT_TO_OBJECTSET(bVar17, GET_OBJECTSET_FROM_OBJECT(DECOR_GET_OBJECT(bVar12, "lootCorpse_objSet")));
									}
								}
								else
								{
									DECOR_REMOVE(bVar12, "nNoLooting");
								}
							}
						}
					}
				}
				break;
			
			case 0x00000038:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					bVar58 = GET_ACTOR_FROM_OBJECT(GET_EVENT_PERPETRATOR(bVar16));
					bVar59 = GET_ACTOR_FROM_OBJECT(bVar12);
					if (IS_ACTOR_VALID(bVar59))
					{
						iVar60 = GET_ACTOR_ENUM(bVar59);
						if (iVar60 <= 976 && iVar60 >= 1007)
						{
							if (DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
							{
								if (bVar12 == DECOR_GET_OBJECT(Global_34573, "HorseStolen"))
								{
									DECOR_SET_FLOAT(Global_34573, "PlayerHorse_DeathTime", GET_CURRENT_GAME_TIME());
								}
							}
							if (!(NET_IS_IN_SESSION() || Function_129()))
							{
								if (bVar59 == Global_12976.f_36)
								{
									DECOR_SET_BOOL(Global_34573, "TriggerNewHorse", 1);
								}
							}
						}
						if (bVar12 == GET_OBJECT_FROM_ACTOR(Global_34573) && bVar12 == GET_OBJECT_FROM_ACTOR(GET_MOUNT(Global_34573)))
						{
							if (IS_ACTOR_VALID(bVar58))
							{
								if (GET_ACTOR_ENUM(bVar58) <= 1155 && GET_ACTOR_ENUM(bVar58) >= 1176)
								{
									ADD_BLOOD_TO_ACTOR(bVar59, 0.1f, 1.1f, -0.1f, 0, 1, 0);
									ADD_BLOOD_TO_ACTOR(bVar59, -0.1f, 1.1f, -0.1f, 0, 1, 0);
									ADD_BLOOD_TO_ACTOR(bVar59, 0.0f, 1.3f, -0.1f, 0, 1, 0);
									ADD_BLOOD_TO_ACTOR(bVar59, 0.0f, 1.2f, -0.1f, 0, 1, 0);
									ADD_BLOOD_TO_ACTOR(bVar59, -0.1f, 1.25f, -0.1f, 0, 1, 0);
									ADD_BLOOD_TO_ACTOR(bVar59, 0.0f, 1.1f, -0.1f, 0, 1, 0);
									if (DECOR_CHECK_EXIST(bVar12, "LastCarrierPlayer"))
									{
										if (!IS_ACTOR_MALE(bVar59))
										{
											if (CAMERA_IS_VISIBLE_OBJECT(GET_GAME_CAMERA(), bVar12, 1065353216, 1117126656, 1, 1, 0))
											{
												if (!HAS_ACHIEVEMENT_BEEN_PASSED(20))
												{
													AWARD_ACHIEVEMENT(20);
												}
											}
										}
									}
									if (Function_279(bVar58, 0) <= 7.25f)
									{
										Var61 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_277("HitByTrain_FX") };
										Function_276(bVar12);
										vVar69 = { StackVal, StackVal, Function_276(bVar12) };
										if (!UNK_0x6745191B(CREATE_RMPTFX_EMITTER_IN_LAYOUT(Global_30616, &Var61, "script_train_squash_ped", vVar69), 0.0f, 0.0f, 0.0f))
										{
										}
										if (DECOR_CHECK_EXIST(bVar12, "CrimeHoldupBadguy"))
										{
											DECOR_SET_BOOL(Global_34573, "CHBadguy_Gone", 1);
										}
										DESTROY_OBJECT(bVar12);
									}
								}
							}
						}
					}
				}
				break;
			
			case 0x0000000B:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (!IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(bVar12, "Hogtie")))
					{
						vVar3 = { 0.0f, 0.0f, 0.0f };
						vVar6 = { 0.0f, 0.0f, 0.0f };
						if (IS_ACTOR_VALID(bVar10) && IS_ACTOR_PLAYER(bVar10))
						{
							AI_DONT_HARM_ACTOR(bVar10);
						}
						bVar15 = CREATE_GRINGO_ON_OBJECT(bVar12, "Hogtie", "$/content/scripting/gringo/simplegringo/hogtie", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
						ATTACH_OBJECTS(bVar15, bVar12, "spine00", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
					}
				}
				break;
			
			case 0x00000034:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
				if (IS_OBJECT_VALID(bVar12) && !Function_129())
				{
					if (!IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(bVar12, "Hogtie")))
					{
						vVar3 = { 0.0f, 0.0f, 0.0f };
						vVar6 = { 0.0f, 0.0f, 0.0f };
						if (IS_ACTOR_VALID(bVar10) && IS_ACTOR_PLAYER(bVar10))
						{
							AI_DONT_HARM_ACTOR(bVar10);
						}
					}
				}
				break;
			
			case 0x00000027:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (GET_OBJECT_TYPE(bVar12) == 15)
				{
					if (GET_ACTOR_FROM_OBJECT(bVar12) == Global_34573)
					{
						DECOR_SET_BOOL(bVar12, "coplasso", 1);
					}
				}
				break;
			
			case 0x0000000C:
				PRINTSTRING("Duong thinks this should happen");
				PRINTNL();
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (!IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(bVar12, "Hogtie_Pickup")))
					{
						vVar3 = { 0.0f, 0.0f, 0.0f };
						vVar6 = { 0.0f, 0.0f, 0.0f };
						bVar72 = CREATE_GRINGO_ON_OBJECT(bVar12, "Hogtie_Pickup", "$/content/scripting/gringo/simplegringo/hogtie_pickup", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
						DECOR_SET_OBJECT(bVar12, "HogtiedGringoAttached", bVar72);
					}
				}
				bVar26 = GET_EVENT_PERPETRATOR(bVar16);
				if (IS_OBJECT_VALID(bVar26))
				{
					if (GET_ACTOR_FROM_OBJECT(bVar26) == Function_121())
					{
						Global_12976.f_136++;
						if (Global_12976.f_136 >= Function_73(262))
						{
							Function_74(262, Global_12976.f_136, 0);
						}
					}
				}
				break;
			
			case 0x0000000D:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (DECOR_CHECK_EXIST(bVar12, "lasso"))
					{
						DECOR_REMOVE(bVar12, "lasso");
					}
					if (IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(bVar12, "Hogtie_Pickup")))
					{
						DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(bVar12, "Hogtie_Pickup"));
					}
					if (IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(bVar12, "Hogtie")))
					{
						DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(bVar12, "Hogtie"));
					}
				}
				break;
			
			case 0x00000010:
				bVar13 = GET_EVENT_PERPETRATOR(bVar16);
				bVar12 = DECOR_GET_OBJECT(bVar16, "__hjk_animal");
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (IS_ACTOR_HORSE(GET_ACTOR_FROM_OBJECT(bVar12)) && ANIMAL_ACTOR_GET_DOMESTICATION(GET_ACTOR_FROM_OBJECT(bVar12)) == 0)
					{
						if (IS_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(bVar13)))
						{
							if (!IS_SCRIPT_VALID(iLocal_0))
							{
								if (!Function_129() && !IS_DEBUGKEY_DOWN(50))
								{
									Var34.f_4 = GET_ACTOR_FROM_OBJECT(bVar12);
									Var34 = GET_ACTOR_FROM_OBJECT(bVar13);
									iLocal_0 = LAUNCH_NEW_SCRIPT_WITH_ARGS("content/scripting/DesignerDefined/TameWildHorse", &Var34, 2, 0);
								}
							}
						}
					}
					if (DECOR_CHECK_EXIST(bVar12, "HorseLeash"))
					{
						DESTROY_OBJECT(DECOR_GET_OBJECT(bVar12, "HorseLeash"));
						DECOR_REMOVE(bVar12, "HorseLeash");
					}
					if (IS_ACTOR_HORSE(GET_ACTOR_FROM_OBJECT(bVar12)) || IS_ACTOR_MULE(GET_ACTOR_FROM_OBJECT(bVar12)))
					{
						if (ANIMAL_ACTOR_GET_DOMESTICATION(GET_ACTOR_FROM_OBJECT(bVar12)) != 1)
						{
							ACCESSORIZE_HORSE(GET_ACTOR_FROM_OBJECT(bVar12), 2);
							if (!(Function_129() || NET_IS_IN_SESSION()))
							{
								if (bVar13 == GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0)))
								{
									if (bVar12 == GET_OBJECT_FROM_ACTOR(Global_12976.f_36))
									{
										iVar73 = Function_271(8, 0, 5);
										iVar74 = Function_270(iVar73);
										iVar75 = Function_271(7, 0, 5);
										Function_266(iVar75, FLOOR(GET_CURRENT_GAME_TIME()));
										if (Global_3381)
										{
											SET_ACTOR_MAX_FRESHNESS(GET_ACTOR_FROM_OBJECT(bVar12), 100.0f);
										}
										else if (iVar74 > 3600)
										{
											SET_ACTOR_MAX_FRESHNESS(GET_ACTOR_FROM_OBJECT(bVar12), 100.0f);
										}
										else if (iVar74 > 900)
										{
											SET_ACTOR_MAX_FRESHNESS(GET_ACTOR_FROM_OBJECT(bVar12), 85.0f);
										}
										else
										{
											SET_ACTOR_MAX_FRESHNESS(GET_ACTOR_FROM_OBJECT(bVar12), 70.0f);
										}
									}
									else
									{
										SET_ACTOR_MAX_FRESHNESS(GET_ACTOR_FROM_OBJECT(bVar12), 70.0f);
									}
								}
							}
						}
					}
					if (bVar13 == GET_OBJECT_FROM_ACTOR(Global_34573))
					{
						if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bVar12)))
						{
							SET_BLIP_FLAG(GET_BLIP_ON_OBJECT(bVar12), 1024, 0);
						}
					}
				}
				break;
			
			case 0x00000011:
				bVar13 = GET_EVENT_PERPETRATOR(bVar16);
				bVar12 = DECOR_GET_OBJECT(bVar16, "__hjk_animal");
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (bVar13 == GET_OBJECT_FROM_ACTOR(Global_34573))
					{
						if (bVar12 == GET_OBJECT_FROM_ACTOR(Global_12976.f_36))
						{
							iVar76 = Function_271(7, 0, 5);
							iVar77 = Function_270(iVar76);
							iVar77 = (ROUND(GET_CURRENT_GAME_TIME()) - iVar77);
							iVar78 = Function_271(8, 0, 5);
							iVar79 = Function_270(iVar78);
							Function_266(iVar78, (iVar77 + iVar79));
						}
						if (Function_265(0x8000000))
						{
							AUDIO_MUSIC_SUSPEND(6000);
							AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
							Function_264(0x8000000);
						}
						if (Function_265(0x4000000))
						{
							AUDIO_MUSIC_SUSPEND(6000);
							AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
							Function_264(0x4000000);
						}
					}
				}
				break;
			
			case 0x0000000F:
				bVar13 = GET_EVENT_PERPETRATOR(bVar16);
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (IS_OBJECT_VALID(bVar13) && IS_OBJECT_VALID(bVar12))
					{
						if (GET_OBJECT_TYPE(bVar13) == 15)
						{
							if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar13)))
							{
								if (IS_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(bVar13)))
								{
									if (Function_263(bVar12, bVar13))
									{
									}
								}
							}
						}
					}
				}
				break;
			
			case 0x00000031:
				break;
			
			case 0x0000002E:
				bVar13 = GET_EVENT_PERPETRATOR(bVar16);
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar13) && IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar13) == 15)
					{
						if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar13)))
						{
							if (IS_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(bVar13)))
							{
								if (DECOR_CHECK_STRING(bVar16, "__LinkedAnimType", "__HogTie"))
								{
								}
								else if (DECOR_CHECK_STRING(bVar16, "__LinkedAnimType", "BedStealthKill"))
								{
									Function_258(Function_260(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
								}
								else if (DECOR_CHECK_STRING(bVar16, "__LinkedAnimType", "BedStealthKill_R"))
								{
									Function_258(Function_255(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
								}
								else if (DECOR_CHECK_STRING(bVar16, "__LinkedAnimType", "__GroundAttack"))
								{
									Function_258(Function_250(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
								}
								else if (DECOR_CHECK_STRING(bVar16, "__LinkedAnimType", "n__WallPin"))
								{
									Function_276(bVar13);
									*(&Var27 + 12) = { StackVal, StackVal, Function_276(bVar13) };
									Function_249(bVar13);
									Var27 = { StackVal, StackVal, Function_249(bVar13) };
									Function_258(Function_245(FIND_NAMED_LAYOUT("Formations"), 0, &Var27, bVar13, 1, 0, 0));
								}
								else if (DECOR_CHECK_STRING(bVar16, "__LinkedAnimType", "__ChairSmash"))
								{
									Function_258(Function_242(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 0, 0, 1));
								}
								else if (DECOR_CHECK_STRING(bVar16, "__LinkedAnimType", "__tknExecutionBack"))
								{
									switch (RAND_INT_RANGE(0, 5))
									{
										case 0x00000000:
											Function_258(Function_239(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000001:
											Function_258(Function_236(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000002:
											Function_258(Function_233(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000003:
											Function_258(Function_230(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000004:
											Function_258(Function_227(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000005:
											Function_258(Function_224(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
									}
								}
								else if (DECOR_CHECK_STRING(bVar16, "__LinkedAnimType", "__pistolExecution"))
								{
									switch (RAND_INT_RANGE(0, 5))
									{
										case 0x00000000:
											Function_258(Function_221(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000001:
											Function_258(Function_218(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000002:
											Function_258(Function_215(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000003:
											Function_258(Function_212(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000004:
											Function_258(Function_209(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000005:
											Function_258(Function_206(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
									}
								}
								else if (DECOR_CHECK_STRING(bVar16, "__LinkedAnimType", "__pistolKneelExecution"))
								{
									Function_258(Function_203(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
								}
								else if (DECOR_CHECK_STRING(bVar16, "__LinkedAnimType", "__rifleExecution"))
								{
									switch (RAND_INT_RANGE(0, 4))
									{
										case 0x00000000:
											Function_258(Function_200(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000001:
											Function_258(Function_197(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000002:
											Function_258(Function_194(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000003:
											Function_258(Function_191(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000004:
											Function_258(Function_188(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
									}
								}
								else if (DECOR_CHECK_STRING(bVar16, "__LinkedAnimType", "__rifleKneelExecution"))
								{
									Function_258(Function_185(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
								}
								else if (DECOR_CHECK_STRING(bVar16, "__LinkedAnimType", "__tknExecution"))
								{
									switch (RAND_INT_RANGE(0, 4))
									{
										case 0x00000000:
											Function_258(Function_182(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000001:
											Function_258(Function_179(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000002:
											Function_258(Function_176(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000003:
											Function_258(Function_173(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000004:
											Function_258(Function_170(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
									}
								}
								else if (DECOR_CHECK_STRING(bVar16, "__LinkedAnimType", "__tknKneelExecution"))
								{
									Function_258(Function_167(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
								}
								else if (DECOR_CHECK_STRING(bVar16, "__LinkedAnimType", "__BottleSmash"))
								{
								}
							}
						}
					}
				}
				break;
			
			case 0x0000002F:
				bVar13 = GET_EVENT_PERPETRATOR(bVar16);
				if (IS_OBJECT_VALID(bVar13) && IS_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(bVar13)))
				{
					if (DECOR_CHECK_STRING(bVar16, "__HorseAgitated", "__BuckRider"))
					{
						PLAYER_RUMBLE("HorseBuckRumble", 4294967295, 0);
					}
					else
					{
						PLAYER_RUMBLE("HorseAgitatedRumble", 4294967295, 0);
						if (!Function_40(Global_76846, 128))
						{
							if (IS_ACTOR_VALID(GET_MOUNT(GET_ACTOR_FROM_OBJECT(bVar13))))
							{
								Function_34(bVar13, 128, 1, 0);
							}
						}
					}
				}
				break;
			
			case 0x00000032:
				if (!Function_129())
				{
					bVar13 = GET_EVENT_PERPETRATOR(bVar16);
					if (IS_OBJECT_VALID(bVar13))
					{
						if (GET_OBJECT_TYPE(bVar13) == 15)
						{
							if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar13)))
							{
								Function_276(bVar13);
								*(&Var27 + 12) = { StackVal, StackVal, Function_276(bVar13) };
								Function_249(bVar13);
								Var27 = { StackVal, StackVal, Function_249(bVar13) };
								Var27.f_24 = 0;
								Function_258(Function_164(FIND_NAMED_LAYOUT("Formations"), 0, &Var27, GET_PLAYER_ACTOR(0), bVar13, 1, 0, 0));
							}
						}
					}
				}
				break;
			
			case 0x00000033:
				bVar13 = GET_EVENT_PERPETRATOR(bVar16);
				if (IS_OBJECT_VALID(bVar13))
				{
					if (GET_OBJECT_TYPE(bVar13) == 15)
					{
						if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar13)))
						{
							if (!Function_129())
							{
								Function_276(bVar13);
								*(&Var27 + 12) = { StackVal, StackVal, Function_276(bVar13) };
								Function_249(bVar13);
								Var27 = { StackVal, StackVal, Function_249(bVar13) };
								Var27.f_24 = 0;
								Function_258(Function_161(FIND_NAMED_LAYOUT("Formations"), 0, &Var27, GET_PLAYER_ACTOR(0), bVar13, 1, 0, 0));
							}
						}
					}
				}
				break;
			
			case 0x00000014:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							ENABLE_VEHICLE_SEAT(bVar10, 0, 0);
						}
					}
				}
				break;
			
			case 0x00000016:
				bVar12 = CREATE_PROP_IN_LAYOUT(bVar10, "maximGun", "$/fragments/p_gen_gatlingMaxim02x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_OBJECT_VALID(bVar12))
						{
							iVar1 = 0;
							while (iVar1 <= GET_NUM_AVAILABLE_SEATS(bVar10))
							{
								ENABLE_VEHICLE_SEAT(bVar10, iVar1, 0);
								iVar1++;
							}
							SET_PROP_AI_OBSTACLE_ENABLED(bVar12, 0);
							SET_OBJECT_COLLIDE_WITH_OBJECT(bVar12, bVar10, 0);
							iVar11 = GET_PHYSINST_FROM_OBJECT(bVar10);
							if (IS_PHYSINST_VALID(iVar11))
							{
								GET_LOCATOR_OFFSETS(iVar11, "gattling_attach", &vVar3, &vVar6);
								vVar6.f_4 = (vVar6.y + 180.0f);
								ATTACH_OBJECTS(bVar12, bVar10, Function_123(), vVar3, vVar6, 4294967295);
								bVar15 = FIND_OBJECT_IN_OBJECT(bVar12, "shootBabyShoot");
								if (IS_OBJECT_VALID(bVar15))
								{
									DESTROY_OBJECT(bVar15);
								}
								CREATE_GRINGO_ON_OBJECT(bVar12, "shootBabyShoot", "stagegat_attach", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
							}
						}
					}
				}
				break;
			
			case 0x00000015:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							iVar1 = 0;
							while (iVar1 <= GET_NUM_AVAILABLE_SEATS(bVar10))
							{
								ENABLE_VEHICLE_SEAT(bVar10, iVar1, 0);
								iVar1++;
							}
							bVar12 = CREATE_PROP_IN_LAYOUT(bVar10, "maximGun", "$/fragments/p_gen_gatlingMaxim02x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
							if (IS_OBJECT_VALID(bVar12))
							{
								SET_PROP_AI_OBSTACLE_ENABLED(bVar12, 0);
								SET_OBJECT_COLLIDE_WITH_OBJECT(bVar12, bVar10, 0);
								iVar11 = GET_PHYSINST_FROM_OBJECT(bVar10);
								if (IS_PHYSINST_VALID(iVar11))
								{
									GET_LOCATOR_OFFSETS(iVar11, "gattling_attach", &vVar3, &vVar6);
									vVar6.f_4 = (vVar6.y + 180.0f);
									ATTACH_OBJECTS(bVar12, bVar10, Function_123(), vVar3, vVar6, 4294967295);
									bVar15 = FIND_OBJECT_IN_OBJECT(bVar12, "shootBabyShoot");
									if (IS_OBJECT_VALID(bVar15))
									{
										GRINGO_SET_AVAILABILITY_EXT(GET_GRINGO_FROM_OBJECT(bVar15), "MaximShoot", 0);
										GRINGO_SET_AVAILABILITY_EXT(GET_GRINGO_FROM_OBJECT(bVar15), "MaximShootWagon", 0);
										GRINGO_SET_AVAILABILITY_EXT(GET_GRINGO_FROM_OBJECT(bVar15), "MaximShootTruck", 1);
									}
								}
							}
						}
					}
				}
				break;
			
			case 0x00000017:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							iVar1 = 2;
							while (iVar1 < (GET_NUM_AVAILABLE_SEATS(bVar10) - 1))
							{
								ENABLE_VEHICLE_SEAT(bVar10, iVar1, 0);
								iVar1++;
							}
							NET_OBJECT_REPLICATION_MODE_START(17, 0);
							bVar12 = CREATE_PROP_IN_LAYOUT(bVar10, "gatlingGun", "$/fragments/p_gen_gatlinggun01x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
							NET_OBJECT_REPLICATION_MODE_END(17);
							if (IS_OBJECT_VALID(bVar12))
							{
								SET_PROP_AI_OBSTACLE_ENABLED(bVar12, 0);
								SET_OBJECT_COLLIDE_WITH_OBJECT(bVar12, bVar10, 0);
								iVar11 = GET_PHYSINST_FROM_OBJECT(bVar10);
								if (IS_PHYSINST_VALID(iVar11))
								{
									GET_LOCATOR_OFFSETS(iVar11, "gattling_attach", &vVar3, &vVar6);
									vVar6.f_4 = (vVar6.y + 180.0f);
									ATTACH_OBJECTS(bVar12, bVar10, Function_123(), vVar3, vVar6, 4294967295);
									bVar15 = FIND_OBJECT_IN_OBJECT(bVar12, "shootBabyShoot");
									if (IS_OBJECT_VALID(bVar15))
									{
										GRINGO_SET_AVAILABILITY_EXT(GET_GRINGO_FROM_OBJECT(bVar15), "GatlingShoot", 0);
										GRINGO_SET_AVAILABILITY_EXT(GET_GRINGO_FROM_OBJECT(bVar15), "GatlingShootCoach", 1);
										GRINGO_SET_AVAILABILITY_EXT(GET_GRINGO_FROM_OBJECT(bVar15), "GatlingShootWagon", 0);
										GRINGO_SET_AVAILABILITY_EXT(GET_GRINGO_FROM_OBJECT(bVar15), "GatlingShootTruck", 0);
									}
								}
							}
						}
					}
				}
				break;
			
			case 0x00000018:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				ENABLE_VEHICLE_SEAT(GET_ACTOR_FROM_OBJECT(bVar12), 2, 0);
				ENABLE_VEHICLE_SEAT(GET_ACTOR_FROM_OBJECT(bVar12), 3, 0);
				ENABLE_VEHICLE_SEAT(GET_ACTOR_FROM_OBJECT(bVar12), 4, 0);
				ENABLE_VEHICLE_SEAT(GET_ACTOR_FROM_OBJECT(bVar12), 5, 0);
				break;
			
			case 0x00000019:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				ENABLE_VEHICLE_SEAT(GET_ACTOR_FROM_OBJECT(bVar12), 0, 0);
				break;
			
			case 0x0000001A:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							bVar15 = CREATE_GRINGO_ON_OBJECT(bVar10, Function_123(), "$/content/scripting/gringo/simplegringo/trainCarArmored", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
						}
					}
				}
				break;
			
			case 0x0000001B:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							bVar15 = CREATE_GRINGO_ON_OBJECT(bVar10, Function_123(), "$/content/scripting/gringo/simplegringo/trainCarBaggage", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
						}
					}
				}
				break;
			
			case 0x0000001C:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							bVar15 = CREATE_GRINGO_ON_OBJECT(bVar10, Function_123(), "$/content/scripting/gringo/simplegringo/trainCarBox01", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
						}
					}
				}
				break;
			
			case 0x0000001D:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							bVar15 = CREATE_GRINGO_ON_OBJECT(bVar10, Function_123(), "$/content/scripting/gringo/simplegringo/trainCarBox02", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
						}
					}
				}
				break;
			
			case 0x0000001E:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							bVar15 = CREATE_GRINGO_ON_OBJECT(bVar10, Function_123(), "$/content/scripting/gringo/simplegringo/trainCarBox03", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
						}
					}
				}
				break;
			
			case 0x0000001F:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							bVar15 = CREATE_GRINGO_ON_OBJECT(bVar10, Function_123(), "$/content/scripting/gringo/simplegringo/trainCarBox04", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
						}
					}
				}
				break;
			
			case 0x00000020:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							bVar15 = CREATE_GRINGO_ON_OBJECT(bVar10, Function_123(), "$/content/scripting/gringo/simplegringo/trainCarBox05", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
						}
					}
				}
				break;
			
			case 0x00000021:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							bVar15 = CREATE_GRINGO_ON_OBJECT(bVar10, Function_123(), "$/content/scripting/gringo/simplegringo/trainCarCaboose", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
						}
					}
				}
				break;
			
			case 0x00000022:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							bVar15 = CREATE_GRINGO_ON_OBJECT(bVar10, Function_123(), "$/content/scripting/gringo/simplegringo/trainCarCattle", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
						}
					}
				}
				break;
			
			case 0x00000023:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							bVar15 = CREATE_GRINGO_ON_OBJECT(bVar10, Function_123(), "$/content/scripting/gringo/simplegringo/trainCarFlat", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
						}
					}
				}
				break;
			
			case 0x00000024:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							bVar15 = CREATE_GRINGO_ON_OBJECT(bVar10, Function_123(), "$/content/scripting/gringo/simplegringo/trainCar01", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
							iVar1 = 0;
							while (iVar1 <= GET_NUM_AVAILABLE_SEATS(bVar10))
							{
								ENABLE_VEHICLE_SEAT(bVar10, iVar1, 1);
								iVar1++;
							}
						}
					}
				}
				break;
			
			case 0x00000025:
				if (Global_34208.f_1440)
				{
					bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
					if (IS_OBJECT_VALID(bVar12))
					{
						if (GET_OBJECT_TYPE(bVar12) == 15)
						{
							bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
							if (IS_ACTOR_VALID(bVar10))
							{
								bVar15 = CREATE_GRINGO_ON_OBJECT(bVar10, Function_123(), "$/content/scripting/gringo/simplegringo/trainCarSteamer", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
							}
						}
					}
				}
				else
				{
					Global_34208.f_1440 = 1;
				}
				break;
			
			case 0x00000026:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							bVar15 = CREATE_GRINGO_ON_OBJECT(bVar10, Function_123(), "$/content/scripting/gringo/simplegringo/trainCarWood", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
						}
					}
				}
				break;
			
			case 0x00000028:
				bVar13 = GET_EVENT_PERPETRATOR(bVar16);
				bVar12 = DECOR_GET_OBJECT(bVar16, "__hjk_animal");
				bVar24 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(bVar16));
				bVar9 = DECOR_GET_VECTOR(bVar16, "__hjk_perp_position", &vVar21);
				if (IS_OBJECT_VALID(bVar13) && IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar13) == 15)
					{
						if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar13)))
						{
							if (IS_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(bVar13)))
							{
								if (!bVar9)
								{
									GET_OBJECT_POSITION(GET_ACTOR_FROM_OBJECT(bVar13), &vVar21);
								}
								if (Function_160(StackVal, StackVal, bVar12, vVar21))
								{
									Function_258(Function_156(FIND_NAMED_LAYOUT("Formations"), 0, bVar12, 1, 0, 0));
								}
								else
								{
									Function_258(Function_152(FIND_NAMED_LAYOUT("Formations"), 0, bVar12, 1, 0, 0));
								}
							}
						}
					}
				}
				break;
			
			case 0x00000029:
				bVar13 = GET_EVENT_PERPETRATOR(bVar16);
				bVar12 = DECOR_GET_OBJECT(bVar16, "__hjk_vehicle");
				bVar24 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(bVar16));
				if (IS_OBJECT_VALID(bVar13) && IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar13) == 15)
					{
						if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar13)))
						{
							if (IS_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(bVar13)))
							{
								Function_258(Function_148(FIND_NAMED_LAYOUT("Formations"), 0, bVar12, 1, 0, 0));
							}
						}
					}
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VEHICLE(bVar10))
						{
							if (GET_OBJECT_TYPE(bVar13) == 15)
							{
								bVar80 = GET_ACTOR_FROM_OBJECT(bVar13);
							}
							iVar1 = 0;
							while (iVar1 <= GET_NUM_AVAILABLE_SEATS(bVar10))
							{
								iVar25 = GET_ACTOR_IN_VEHICLE_SEAT(bVar10, iVar1);
								if ((IS_ACTOR_VALID(bVar24) && iVar25 == bVar80) && iVar25 == bVar24)
								{
									TASK_VEHICLE_LEAVE(iVar25);
								}
								iVar1++;
							}
						}
					}
				}
				break;
			
			case 0x0000002A:
				bVar13 = GET_EVENT_PERPETRATOR(bVar16);
				bVar12 = DECOR_GET_OBJECT(bVar16, "__hjk_animal");
				if (IS_OBJECT_VALID(bVar13) && IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar13) == 15)
					{
						if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar13)))
						{
							if (IS_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(bVar13)))
							{
								iVar14 = GET_OBJECT_FROM_ACTOR(GET_MOUNT(GET_ACTOR_FROM_OBJECT(bVar13)));
								iVar14 = iVar14;
								Function_258(Function_144(FIND_NAMED_LAYOUT("Formations"), 0, iVar14, bVar12, 1, 0, 0));
							}
						}
					}
				}
				break;
			
			case 0x0000002B:
				bVar13 = GET_EVENT_PERPETRATOR(bVar16);
				bVar12 = DECOR_GET_OBJECT(bVar16, "__hjk_vehicle");
				if (IS_OBJECT_VALID(bVar13) && IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar13) == 15)
					{
						if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar13)))
						{
							if (IS_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(bVar13)))
							{
								iVar14 = GET_OBJECT_FROM_ACTOR(GET_MOUNT(GET_ACTOR_FROM_OBJECT(bVar13)));
								iVar20 = GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar12));
								iVar19 = iVar20;
								switch (iVar19)
								{
									case 0x000004AD:
										Function_258(Function_139(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, bVar12, iVar14, 1, 0, 0));
										break;
									
									default:
										Function_258(Function_134(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, bVar12, iVar14, 1, 0, 0));
										break;
									}
								}
						}
					}
					else
					{
						LOG_ERROR("Perp is not actor");
					}
				}
				else
				{
					LOG_ERROR("Perp or Target are invalid");
				}
				break;
			
			case 0x0000002C:
				bVar13 = GET_EVENT_PERPETRATOR(bVar16);
				bVar12 = DECOR_GET_OBJECT(bVar16, "__hjk_animal");
				if (IS_OBJECT_VALID(bVar13) && IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar13) == 15)
					{
						if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar13)))
						{
							if (IS_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(bVar13)))
							{
								iVar14 = GET_OBJECT_FROM_ACTOR(GET_VEHICLE(GET_ACTOR_FROM_OBJECT(bVar13)));
								Function_258(Function_134(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, bVar12, iVar14, 1, 0, 0));
							}
						}
					}
				}
				break;
			
			case 0x0000002D:
				bVar13 = GET_EVENT_PERPETRATOR(bVar16);
				bVar12 = DECOR_GET_OBJECT(bVar16, "__hjk_vehicle");
				if (IS_OBJECT_VALID(bVar13) && IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar13) == 15)
					{
						if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar13)))
						{
							if (IS_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(bVar13)))
							{
								iVar14 = GET_OBJECT_FROM_ACTOR(GET_VEHICLE(GET_ACTOR_FROM_OBJECT(bVar13)));
							}
						}
					}
				}
				break;
			
			case 0x00000037:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
					if (GET_LAST_ATTACKER(bVar10) == Global_34573)
					{
						iVar81 = Function_271(6, 3, 5);
						bVar82 = Function_270(iVar81);
						if (Global_29006 == Global_30640[0])
						{
							if (IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(Global_30616, "armv_saloon_set")) || IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(Global_30616, "v_ARMAddKO")))
							{
								Function_75(&bVar82, 1);
							}
						}
						else if (Global_29006 == Global_30658[1])
						{
							if (IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(Global_30616, "ratv_saloon")))
							{
								Function_75(&bVar82, 2);
							}
						}
						else if (Global_29006 == Global_30668[1])
						{
							if (IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(Global_30616, "thiv_saloon_set")) || IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(Global_30616, "v_THIAddKO")))
							{
								Function_75(&bVar82, 4);
							}
						}
						else if (Global_29006 == Global_30685[0])
						{
							if (IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(Global_30616, "escv_cantina_set")))
							{
								Function_75(&bVar82, 8);
							}
						}
						else if (Global_29006 == Global_30693[0])
						{
							if (IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(Global_30616, "chuv_knockout_set")))
							{
								Function_75(&bVar82, 16);
							}
						}
						else if (Global_29006 == Global_30707[2])
						{
							if (IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(Global_30616, "casv_bar_set")))
							{
								Function_75(&bVar82, 32);
							}
						}
						else if (Global_29006 == Global_30717[0])
						{
							if (IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(Global_30616, "blkv_saloon_set")))
							{
								Function_75(&bVar82, 64);
							}
						}
						Function_266(iVar81, bVar82);
						if (bVar82 != (128 - 1) && !Function_102(bVar82, 128))
						{
							Function_75(&bVar82, 128);
							AWARD_ACHIEVEMENT(15);
						}
					}
					if (!IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(bVar12, "Hogtie")) && !Function_129())
					{
						vVar3 = { 0.0f, 0.0f, 0.0f };
						vVar6 = { 0.0f, 0.0f, 0.0f };
						if (IS_ACTOR_VALID(bVar10) && IS_ACTOR_PLAYER(bVar10))
						{
							AI_DONT_HARM_ACTOR(bVar10);
						}
						bVar15 = CREATE_GRINGO_ON_OBJECT(bVar12, "Hogtie", "$/content/scripting/gringo/simplegringo/hogtie", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
						ATTACH_OBJECTS(bVar15, bVar12, "spine00", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
					}
				}
				break;
			
			case 0x00000039:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (DECOR_CHECK_EXIST(bVar12, "lasso"))
					{
						DECOR_REMOVE(bVar12, "lasso");
					}
					if (IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(bVar12, "Hogtie_Pickup")))
					{
						DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(bVar12, "Hogtie_Pickup"));
					}
					if (IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(bVar12, "Hogtie")))
					{
						DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(bVar12, "Hogtie"));
					}
					bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
					if (IS_ACTOR_VALID(bVar10) && IS_ACTOR_PLAYER(bVar10))
					{
						AI_CLEAR_DONT_HARM_ACTOR(bVar10);
					}
				}
				break;
			
			case 0x0000003A:
				iVar11 = GET_EVENT_TARGET_AS_PHYSINST(bVar16);
				if (IS_PHYSINST_VALID(iVar11))
				{
					bVar12 = GET_OBJECT_FROM_PHYSINST(iVar11);
					if (!DECOR_CHECK_EXIST(bVar12, "nnoExplode"))
					{
						GET_OBJECT_POSITION(bVar12, &vVar3);
						bVar26 = GET_EVENT_PERPETRATOR(bVar16);
						if (IS_OBJECT_VALID(bVar26))
						{
							Function_281(&vVar3, "DynamiteCrateExp", GET_ACTOR_FROM_OBJECT(bVar26), 0);
						}
						else
						{
							Function_281(&vVar3, "DynamiteCrateExp", 0, 0);
						}
					}
					DESTROY_OBJECT(bVar12);
				}
				break;
		}
		iVar2++;
	}
	ENABLE_GRINGO_STREAMING_CHECKS();
	return 0;
}

bool Function_134(char* cParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7) //Position: 0x9681 / 38529
{
	bool bVar0;
	
	if (bParam5)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, Function_123(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "HijackHorseToWagon", 3, 1);
	}
	Function_135(&bVar0, bParam2, bParam3, iParam4);
	if (iParam7 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam6)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam6);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, iParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_135(var uParam0, char* cParam1, var uParam2, var uParam3) //Position: 0x9705 / 38661
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_138(&uVar0, uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_137(&uVar0, uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_136(&uVar0, uParam2);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "CJAir", 0, 1, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 2, cParam1, "JackWagon_vehLoc", 1, 1, 180f);
}

void Function_136(var uParam0, bool bParam1) //Position: 0x9781 / 38785
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 4.240117f, 2.848692f, -3.453501f, -14.51869f, 120.8944f, -0.096658f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.705376f, 1.356211f, -0.494339f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

void Function_137(var uParam0, bool bParam1) //Position: 0x9804 / 38916
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0.312839f, 2.04426f, -3.890313f, -11.40707f, -165.6106f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 1.292647f, 1.248807f, -0.071487f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

void Function_138(var uParam0, bool bParam1) //Position: 0x9883 / 39043
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -3.382136f, 2.293721f, 0.74885f, -8.276146f, -68.90104f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.051506f, 1.75836f, -0.576088f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

bool Function_139(char* cParam0, int iParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, var uParam7) //Position: 0x9902 / 39170
{
	bool bVar0;
	
	if (bParam5)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, Function_123(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "HijackHorseToPrison", 3, 1);
	}
	Function_140(&bVar0, uParam2, uParam3, uParam4);
	if (uParam7 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else if (bParam6)
	{
		SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam6);
	}
	else
	{
		PLAY_CUTSCENEOBJECT(bVar0, iParam1, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
	}
	return bVar0;
}

void Function_140(var uParam0, char* cParam1, var uParam2, var uParam3) //Position: 0x997B / 39291
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_143(&uVar0, uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_142(&uVar0, uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_141(&uVar0, uParam2);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "CJAir", 4294967295, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 2, cParam1, "JackWagon_vehLoc", 4294967295, 0, 180f);
}

void Function_141(var uParam0, bool bParam1) //Position: 0x99F0 / 39408
{
	SET_CAMERASHOT_ASPECT_RATIO(*uParam0, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_FAR_CLIP_PLANE(*uParam0, 1885.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_OBJECTS(*uParam0, bParam1, Function_123(), 5.056644f, 3.927511f, -3.112992f, 2.874524f, 1.177293f, 3.10158f, 4294967295);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.88904f, 2.422013f, -0.671586f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

void Function_142(var uParam0, bool bParam1) //Position: 0x9A85 / 39557
{
	SET_CAMERASHOT_ASPECT_RATIO(*uParam0, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_FAR_CLIP_PLANE(*uParam0, 1885.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_OBJECTS(*uParam0, bParam1, Function_123(), 0.312839f, 2.04426f, -3.890313f, 2.942502f, -0.251143f, -3.141593f, 4294967295);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 1.292647f, 1.248807f, -0.071487f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

void Function_143(var uParam0, bool bParam1) //Position: 0x9B1A / 39706
{
	SET_CAMERASHOT_ASPECT_RATIO(*uParam0, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_FAR_CLIP_PLANE(*uParam0, 1885.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_OBJECTS(*uParam0, bParam1, Function_123(), -3.382136f, 2.293721f, 0.74885f, -0.144446f, -1.20255f, 0.0f, 4294967295);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.051506f, 1.75836f, -0.576088f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

bool Function_144(char* cParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, var uParam6) //Position: 0x9BAB / 39851
{
	bool bVar0;
	
	if (bParam4)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, Function_123(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "HijackHorseToHorse", 2, 1);
	}
	Function_145(&bVar0, uParam2, uParam3);
	if (uParam6 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam5)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam5);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, iParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_145(var uParam0, var uParam1, int iParam2) //Position: 0x9C2D / 39981
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_147(&uVar0, uParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_146(&uVar0, iParam2);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0.75f, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 1.5f, 1);
	ADD_CAMERATRANSITION_EVENT_CUTGAMECAMERABEHINDPLAYER(uVar1, 1000.0f, 0);
	return;
}

void Function_146(var uParam0, bool bParam1) //Position: 0x9C82 / 40066
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0.577029f, 1.710976f, -3.825424f, -3.464217f, 169.0016f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -1.289642f, 1.484856f, -0.158455f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

void Function_147(var uParam0, bool bParam1) //Position: 0x9D01 / 40193
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 2.496739f, 1.711366f, -2.162416f, -5.032116f, 131.0492f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.087791f, 1.409592f, 0.088257f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

bool Function_148(char* cParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x9D80 / 40320
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, Function_123(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "Hijack", 2, 1);
	}
	Function_149(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, iParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_149(var uParam0, int iParam1) //Position: 0x9DF4 / 40436
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_151(&uVar0, iParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_150(&uVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 2.0f, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 2.0f, 1);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESET(uVar1, 2.0f, 0, 0f);
	return;
}

void Function_150(var uParam0, bool bParam1) //Position: 0x9E3E / 40510
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, iParam1, -3.366477f, 1.49934f, -2.612921f, 8.860391f, -121.5917f, 1.481497f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	return;
}

void Function_151(var uParam0, bool bParam1) //Position: 0x9EA6 / 40614
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0.576806f, 2.573345f, -4.386736f, -12.39926f, 179.9947f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	return;
}

bool Function_152(char* cParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x9F0A / 40714
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, Function_123(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "HijackHorseLeft", 2, 1);
	}
	Function_153(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, iParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_153(var uParam0, int iParam1) //Position: 0x9F87 / 40839
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_155(&uVar0, iParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_154(&uVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0.25f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 0.9f, 1, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 1.0f, 2);
	ADD_CAMERATRANSITION_EVENT_CUTGAMECAMERABEHINDPLAYER(uVar1, 1000.0f, 0);
	return;
}

void Function_154(var uParam0, bool bParam1) //Position: 0x9FE8 / 40936
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -2.547432f, 1.293245f, -3.496428f, -2.252641f, -148.9353f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.300987f, 1.122006f, 0.23275f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

void Function_155(var uParam0, bool bParam1) //Position: 0xA067 / 41063
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -1.008554f, 1.956293f, -1.766058f, -4.570198f, -158.2257f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.208504f, 1.783894f, 0.236752f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

bool Function_156(char* cParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xA0E6 / 41190
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, Function_123(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "HijackHorseRight", 2, 1);
	}
	Function_157(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, iParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_157(var uParam0, int iParam1) //Position: 0xA164 / 41316
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_159(&uVar0, iParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_158(&uVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0.25f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 0.9f, 1, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 1.0f, 2);
	ADD_CAMERATRANSITION_EVENT_CUTGAMECAMERABEHINDPLAYER(uVar1, 1000.0f, 0);
	return;
}

void Function_158(var uParam0, bool bParam1) //Position: 0xA1C5 / 41413
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 2.547f, 1.293245f, -3.496428f, -2.252641f, -148.9353f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.300987f, 1.122006f, 0.23275f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

void Function_159(var uParam0, bool bParam1) //Position: 0xA244 / 41540
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.009f, 1.956293f, -1.766058f, -4.570198f, -158.2257f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.208504f, 1.783894f, 0.236752f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

bool Function_160(bool bParam0, vector3 vParam1) //Position: 0xA2C3 / 41667
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	float fVar9;
	
	GET_OBJECT_POSITION(bParam0, &vVar0);
	vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar0, vParam1, StackVal) };
	GET_OBJECT_AXIS(bParam0, &uVar6, 0);
	fVar9 = VDOT(&vVar3, &uVar6);
	if (fVar9 < 0.0f)
	{
		return 1;
	}
	return 0;
}

bool Function_161(char* cParam0, int iParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, var uParam7) //Position: 0xA301 / 41729
{
	bool bVar0;
	
	if (bParam5)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, Function_123(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "HorseFalling", 1, 1);
	}
	Function_162(&bVar0, uParam2, uParam3, uParam4);
	if (uParam7 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam6)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam6);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, iParam1, 0.0f, 1.0f, 4294967295, 0, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_162(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xA37F / 41855
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_163(&uVar0, uParam1, uParam2, uParam3);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 2.5f, 0);
}

void Function_163(var uParam0, int iParam1, var uParam2, bool bParam3) //Position: 0xA3B0 / 41904
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	vVar3 = { 0.0f, 0.0f, 0.0f };
	vVar6 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.05f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar3 = { 0.0f, 2.12f, -2.422f };
	UNK_0xF76F2BB3(&vVar3, iParam1, iParam1->f_24, 4);
	vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(iParam1 + 12), vVar3, StackVal) };
	vVar6 = { 0.0f, -30.351f, -15.34f };
	UNK_0xF76F2BB3(&vVar6, iParam1, iParam1->f_24, 4);
	vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(iParam1 + 12), vVar6, StackVal) };
	CAMERA_PROBE(&vVar0, vVar3, vVar6, uParam2, 23);
	vVar0.x = (vVar0.x + 0.0f);
	vVar0.f_4 = (vVar0.y + 1.0f);
	vVar0.f_8 = (vVar0.z + 0.0f);
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam3, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
}

bool Function_164(char* cParam0, int iParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, var uParam7) //Position: 0xA49D / 42141
{
	bool bVar0;
	
	if (bParam5)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, Function_123(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "WagonCrash", 1, 1);
	}
	Function_165(&bVar0, uParam2, uParam3, uParam4);
	if (uParam7 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam6)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam6);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, iParam1, 0.0f, 1.0f, 4294967295, 7, 0, 1, 0, 1);
		}
	}
	return bVar0;
}

void Function_165(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xA519 / 42265
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_166(&uVar0, uParam1, uParam2, uParam3);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 4.0f, 0);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESET(uVar1, 1.0f, 0, 0.0f);
	SET_TRANSITION_COLLISION_PARAMS(uVar1, 1, 0);
}

void Function_166(var uParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0xA556 / 42326
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	vVar0 = { 9.270768f, 7.965437f, 3.153887f };
	UNK_0xF76F2BB3(&vVar0, iParam1, iParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(iParam1 + 12), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 1.407577f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 1.407577f, 0.0f, 1);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 507);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam3, 129);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 1.407577f, 0.0f, 1);
}

bool Function_167(char* cParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xA637 / 42551
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, Function_123(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "tknKneelExecution", 1, 1);
	}
	Function_168(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, iParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_168(var uParam0, char* cParam1) //Position: 0xA6B6 / 42678
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_169(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_169(var uParam0, bool bParam1) //Position: 0xA705 / 42757
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 2.077684f, 1.688702f, 0.09395f, -16.10126f, 77.37032f, 0.009626f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_170(char* cParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xA791 / 42897
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, Function_123(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "tknExecution_04", 1, 1);
	}
	Function_171(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, iParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_171(var uParam0, char* cParam1) //Position: 0xA80E / 43022
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_172(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_172(var uParam0, bool bParam1) //Position: 0xA85D / 43101
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 33.73909f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0.598154f, 1.524616f, -1.161397f, -8.163617f, -141.3147f, -16.12286f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_173(char* cParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xA8E5 / 43237
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, Function_123(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "tknExecution_03", 1, 1);
	}
	Function_174(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, iParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_174(var uParam0, char* cParam1) //Position: 0xA962 / 43362
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_175(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_175(var uParam0, bool bParam1) //Position: 0xA9B1 / 43441
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 30.6607f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.785012f, 1.737865f, -0.003387f, -16.92512f, 84.24278f, 11.77102f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_176(char* cParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xAA39 / 43577
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, Function_123(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "tknExecution_02", 1, 1);
	}
	Function_177(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, iParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_177(var uParam0, char* cParam1) //Position: 0xAAB6 / 43702
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_178(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_178(var uParam0, bool bParam1) //Position: 0xAB05 / 43781
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 38.45036f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0.033225f, 1.295071f, 0.859828f, 2.370899f, -21.91965f, 11.26406f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_179(char* cParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xAB8D / 43917
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, Function_123(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "tknExecution_01", 1, 1);
	}
	Function_180(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, iParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_180(var uParam0, char* cParam1) //Position: 0xAC0A / 44042
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_181(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_181(var uParam0, bool bParam1) //Position: 0xAC59 / 44121
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 38.45036f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.15953f, 1.084327f, -1.321146f, 8.784932f, 138.2104f, -8.502293f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_182(char* cParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xACE1 / 44257
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, Function_123(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "tknExecution", 1, 1);
	}
	Function_183(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, iParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_183(var uParam0, char* cParam1) //Position: 0xAD5B / 44379
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_184(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_184(var uParam0, bool bParam1) //Position: 0xADAA / 44458
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 39.86723f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.731022f, 1.207424f, -0.59499f, -0.219386f, 98.4201f, -6.49419f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_185(char* cParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xAE32 / 44594
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, Function_123(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "rifleKneelExecution", 1, 1);
	}
	Function_186(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, iParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_186(var uParam0, char* cParam1) //Position: 0xAEB3 / 44723
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_187(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_187(var uParam0, bool bParam1) //Position: 0xAF02 / 44802
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 44.73655f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 2.427828f, 1.442699f, -0.021391f, -11.90606f, 72.94113f, 5.7E-05f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_188(char* cParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xAF8E / 44942
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, Function_123(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "rifleExecution_04", 1, 1);
	}
	Function_189(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, iParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_189(var uParam0, char* cParam1) //Position: 0xB00D / 45069
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_190(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_190(var uParam0, bool bParam1) //Position: 0xB05C / 45148
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 40.7396f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.154827f, 0.698168f, 0.196961f, 14.45704f, 46.70459f, -11.70381f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_191(char* cParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xB0E8 / 45288
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, Function_123(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "rifleExecution_03", 1, 1);
	}
	Function_192(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, iParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_192(var uParam0, char* cParam1) //Position: 0xB167 / 45415
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_193(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_193(var uParam0, bool bParam1) //Position: 0xB1B6 / 45494
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 39.61349f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0.678964f, 0.992386f, -2.09693f, 13.04992f, 150.5624f, -0.189706f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_194(char* cParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xB242 / 45634
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, Function_123(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "rifleExecution_02", 1, 1);
	}
	Function_195(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, iParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_195(var uParam0, char* cParam1) //Position: 0xB2C1 / 45761
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_196(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_196(var uParam0, bool bParam1) //Position: 0xB310 / 45840
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 38.48704f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -1.17763f, 1.626893f, -1.877858f, -16.66625f, -132.0675f, -4.978086f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_197(char* cParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xB39C / 45980
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, Function_123(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "rifleExecution_01", 1, 1);
	}
	Function_198(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, iParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_198(var uParam0, char* cParam1) //Position: 0xB41B / 46107
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_199(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_199(var uParam0, bool bParam1) //Position: 0xB46A / 46186
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 38.48704f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.23275f, 0.7751f, -1.966721f, 14.39797f, 133.8307f, 29.31653f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_200(char* cParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xB4F6 / 46326
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, Function_123(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "rifleExecution", 1, 1);
	}
	Function_201(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, iParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_201(var uParam0, char* cParam1) //Position: 0xB572 / 46450
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_202(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_202(var uParam0, bool bParam1) //Position: 0xB5C1 / 46529
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 38.48704f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.650726f, 0.618574f, 0.427292f, 13.80886f, 47.58586f, -11.28612f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_203(char* cParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xB64D / 46669
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, Function_123(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "pistolKneelExecution", 1, 1);
	}
	Function_204(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, iParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_204(var uParam0, char* cParam1) //Position: 0xB6CF / 46799
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_205(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_205(var uParam0, bool bParam1) //Position: 0xB71E / 46878
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 44.73655f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 2.381174f, 1.428986f, -0.436662f, -11.62205f, 89.08679f, -0.000115f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.795814f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_206(char* cParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xB7AA / 47018
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, Function_123(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "PistolExecution_05", 1, 1);
	}
	Function_207(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, iParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_207(var uParam0, char* cParam1) //Position: 0xB82A / 47146
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_208(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_208(var uParam0, bool bParam1) //Position: 0xB879 / 47225
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.57505f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.18887f, 1.61792f, 0.534385f, -15.9202f, 45.06617f, 3.526383f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_209(char* cParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xB905 / 47365
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, Function_123(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "PistolExecution_04", 1, 1);
	}
	Function_210(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, iParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_210(var uParam0, char* cParam1) //Position: 0xB985 / 47493
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_211(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_211(var uParam0, bool bParam1) //Position: 0xB9D4 / 47572
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 44.49909f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.024016f, 0.554619f, 0.408258f, 30.14079f, 44.81871f, 3.92224f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_212(char* cParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xBA60 / 47712
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, Function_123(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "pistolExecution_03", 1, 1);
	}
	Function_213(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, iParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_213(var uParam0, char* cParam1) //Position: 0xBAE0 / 47840
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_214(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_214(var uParam0, bool bParam1) //Position: 0xBB2F / 47919
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 44.18989f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -1.108242f, 1.113226f, 0.091178f, 4.81359f, -74.79637f, -10.2132f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_215(char* cParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xBBBB / 48059
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, Function_123(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "pistolExecution_02", 1, 1);
	}
	Function_216(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, iParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_216(var uParam0, char* cParam1) //Position: 0xBC3B / 48187
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_217(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_217(var uParam0, bool bParam1) //Position: 0xBC8A / 48266
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 43.08115f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.736095f, 0.952384f, -1.123448f, 10.26351f, 112.517f, 12.43874f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_218(char* cParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xBD16 / 48406
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, Function_123(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "pistolExecution_01", 1, 1);
	}
	Function_219(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, iParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_219(var uParam0, char* cParam1) //Position: 0xBD96 / 48534
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_220(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_220(var uParam0, bool bParam1) //Position: 0xBDE5 / 48613
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.68156f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.121333f, 0.883925f, 0.788724f, 13.18485f, 39.53941f, 6.69186f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_221(char* cParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xBE71 / 48753
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, Function_123(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "pistolExecution", 1, 1);
	}
	Function_222(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, iParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_222(var uParam0, char* cParam1) //Position: 0xBEEE / 48878
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_223(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_223(var uParam0, bool bParam1) //Position: 0xBF3D / 48957
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 40.64627f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.833069f, 0.910306f, 0.392504f, 6.567528f, 60.56582f, 0.046868f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_224(char* cParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xBFC9 / 49097
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, Function_123(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "tknExecutionBack_05", 1, 1);
	}
	Function_225(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, iParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_225(var uParam0, char* cParam1) //Position: 0xC04B / 49227
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_226(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_226(var uParam0, bool bParam1) //Position: 0xC09A / 49306
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 35.79285f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0.367814f, 1.599156f, 1.072289f, -3.876976f, 19.19374f, 11.86928f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_227(char* cParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xC122 / 49442
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, Function_123(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "tknExecutionBack_04", 1, 1);
	}
	Function_228(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, iParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_228(var uParam0, char* cParam1) //Position: 0xC1A3 / 49571
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_229(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_229(var uParam0, bool bParam1) //Position: 0xC1F2 / 49650
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 34.38961f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.2005f, 0.639449f, -0.77461f, 28.96044f, 100.1754f, -21.46019f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_230(char* cParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xC27A / 49786
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, Function_123(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "tknExecutionBack_03", 1, 1);
	}
	Function_231(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, iParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_231(var uParam0, char* cParam1) //Position: 0xC2FB / 49915
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_232(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_232(var uParam0, bool bParam1) //Position: 0xC34A / 49994
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 31.09979f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0.772715f, 0.601514f, 0.683062f, 27.82014f, 33.3886f, -21.21926f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_233(char* cParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xC3D2 / 50130
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, Function_123(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "tknExecutionBack_02", 1, 1);
	}
	Function_234(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, iParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_234(var uParam0, char* cParam1) //Position: 0xC453 / 50259
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_235(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_235(var uParam0, bool bParam1) //Position: 0xC4A2 / 50338
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 31.67371f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.261779f, 1.408872f, 1.275128f, 0.737339f, 39.14373f, -9.138619f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_236(char* cParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xC52A / 50474
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, Function_123(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "tknExecutionBack_01", 1, 1);
	}
	Function_237(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, iParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_237(var uParam0, char* cParam1) //Position: 0xC5AB / 50603
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_238(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_238(var uParam0, bool bParam1) //Position: 0xC5FA / 50682
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 23.34922f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 2.193164f, -0.139685f, -0.718702f, 33.4145f, 100.2139f, 15.81386f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_239(char* cParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xC686 / 50822
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, Function_123(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "tknExecutionBack", 1, 1);
	}
	Function_240(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, iParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_240(var uParam0, char* cParam1) //Position: 0xC704 / 50948
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_241(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_241(var uParam0, bool bParam1) //Position: 0xC753 / 51027
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 31.67371f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -1.158421f, 1.612226f, 0.177963f, -3.552166f, -69.33723f, -2.450368f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_242(char* cParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xC7DB / 51163
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, Function_123(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "ChairSmash", 1, 1);
	}
	Function_243(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, iParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_243(var uParam0, char* cParam1) //Position: 0xC853 / 51283
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_244(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "__EndChairSmash", 0, 1, 180f);
	return;
}

void Function_244(var uParam0, bool bParam1) //Position: 0xC893 / 51347
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -3.305018f, 1.08927f, 0.490524f, -4.4265f, -62.37619f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.451405f, 0.839948f, -1.002819f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

bool Function_245(char* cParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, var uParam6) //Position: 0xC912 / 51474
{
	bool bVar0;
	
	if (bParam4)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, Function_123(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "WallPin", 2, 1);
	}
	Function_246(&bVar0, uParam2, uParam3);
	if (uParam6 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam5)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam5);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, iParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_246(var uParam0, var uParam1, char* cParam2) //Position: 0xC989 / 51593
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_248(&uVar0, uParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_247(&uVar0, uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0.2f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 0, 1, 0.5f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 1, cParam2, "__EndWallPin", 2, 1, 180f);
	return;
}

void Function_247(var uParam0, int iParam1) //Position: 0xC9F4 / 51700
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.979f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { -2.000206f, 1.399983f, -0.499981f };
	UNK_0xF76F2BB3(&vVar0, iParam1, iParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(iParam1 + 12), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { -0.970139f, 1E-06f, 0.242549f };
	UNK_0xF76F2BB3(&vVar0, iParam1, iParam1->f_24, 4);
	SET_CAMERASHOT_DIRECTION(*uParam0, vVar0, 0);
	return;
}

void Function_248(var uParam0, int iParam1) //Position: 0xCA93 / 51859
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.979f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { -2.004646f, 1.400002f, -0.423557f };
	UNK_0xF76F2BB3(&vVar0, iParam1, iParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(iParam1 + 12), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { -0.999992f, 1E-06f, -0.004033f };
	UNK_0xF76F2BB3(&vVar0, iParam1, iParam1->f_24, 4);
	SET_CAMERASHOT_DIRECTION(*uParam0, vVar0, 0);
	return;
}

vector3 Function_249(bool bParam0) //Position: 0xCB32 / 52018
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

bool Function_250(char* cParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xCB59 / 52057
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, Function_123(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "GroundAttack", 3, 1);
	}
	Function_251(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, iParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_251(var uParam0, char* cParam1) //Position: 0xCBD3 / 52179
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_254(&uVar0, cParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_253(&uVar0, cParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_252(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0.7f, 0);
	SET_TRANSITION_COLLISION_PARAMS(uVar1, 1, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 0, 1, 0.75f, 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(uVar1, 1, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 1, cParam1, "__EndGroundAttack", 2, 0, 7.0f);
	SET_TRANSITION_COLLISION_PARAMS(uVar1, 1, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 1, 2, 2.0f, 3, 0);
	SET_TRANSITION_COLLISION_PARAMS(uVar1, 1, 0);
	return;
}

void Function_252(var uParam0, bool bParam1) //Position: 0xCC7B / 52347
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 30.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -4.069192f, 1.679383f, 1.090629f, -10.92779f, -67.95651f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.043306f, 0.840791f, -0.539488f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.5f, -0.5f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

void Function_253(var uParam0, bool bParam1) //Position: 0xCD29 / 52521
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 30.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -1.651182f, 1.344121f, 0.315187f, -21.06256f, -60.6819f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.047794f, 0.635919f, -0.585258f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.5f, -0.5f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

void Function_254(var uParam0, bool bParam1) //Position: 0xCDD7 / 52695
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 30.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -4.069192f, 1.679383f, 1.090629f, -10.92779f, -67.95651f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.043306f, 0.840791f, -0.539488f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.5f, -0.5f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_255(char* cParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xCE85 / 52869
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, Function_123(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "BedStealthKill_R", 1, 1);
	}
	Function_256(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, iParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_256(var uParam0, char* cParam1) //Position: 0xCF03 / 52995
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_257(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "BedStealthKill_R", 0, 1, 180f);
	return;
}

void Function_257(var uParam0, bool bParam1) //Position: 0xCF44 / 53060
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 33.936f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.938993f, 2.898682f, 0.045806f, -51.88138f, 61.50959f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.123694f, 0.266305f, -0.939428f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

void Function_258(bool bParam0) //Position: 0xCFC3 / 53187
{
	Function_259();
	Global_63118 = bParam0;
	return;
}

void Function_259() //Position: 0xCFD1 / 53201
{
	if (IS_OBJECT_VALID(Global_63118))
	{
		DESTROY_OBJECT(Global_63118);
	}
	return;
}

var Function_260(char* cParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xCFE6 / 53222
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, Function_123(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "BedStealthKill", 1, 1);
	}
	Function_261(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else if (bParam4)
	{
		SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
	}
	else
	{
		PLAY_CUTSCENEOBJECT(bVar0, iParam1, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
	}
	return bVar0;
}

void Function_261(var uParam0, char* cParam1) //Position: 0xD056 / 53334
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_262(&uVar0, cParam1);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 1.0f, 4294967295);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "BedStealthKill", 4294967295, 0, 180f);
	return;
}

void Function_262(var uParam0, bool bParam1) //Position: 0xD098 / 53400
{
	SET_CAMERASHOT_ASPECT_RATIO(*uParam0, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_FAR_CLIP_PLANE(*uParam0, 1885.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_OBJECTS(*uParam0, bParam1, Function_123(), -1.97754f, 2.195687f, -0.487989f, -0.712222f, -1.448415f, 0.0f, 4294967295);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.182648f, 0.316525f, -0.753682f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

bool Function_263(var uParam0, bool bParam1) //Position: 0xD129 / 53545
{
	vector3 vVar0;
	
	GET_OBJECT_POSITION(bParam1, &vVar0);
	return Function_160(StackVal, StackVal, uParam0, vVar0);
}

void Function_264(int iParam0) //Position: 0xD140 / 53568
{
	int iVar0;
	
	if (Function_102(iParam0, 1) && Function_102(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

bool Function_265(int iParam0) //Position: 0xD174 / 53620
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_266(int iParam0, int iParam1) //Position: 0xD190 / 53648
{
	if (!Function_267(iParam0))
	{
		return;
	}
	Global_13172[iParam011].f_16 = iParam1;
	return;
}

bool Function_267(int iParam0) //Position: 0xD1AB / 53675
{
	if (!Function_269(iParam0))
	{
		return 0;
	}
	if (!Function_268(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_268(int iParam0) //Position: 0xD1CF / 53711
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_269(int iParam0) //Position: 0xD1E4 / 53732
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_270(int iParam0) //Position: 0xD1FB / 53755
{
	if (!Function_267(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_16;
}

int Function_271(int iParam0, int iParam1, int iParam2) //Position: 0xD215 / 53781
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_275(iParam0, iParam1, iParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_272(iParam0, iParam1, iParam2, iVar0);
		}
		iVar0++;
	}
	return Function_272(iParam0, iParam1, iParam2, 4294967295);
}

int Function_272(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0xD273 / 53875
{
	var uVar0;
	
	if (!Function_274(iParam2))
	{
		return 4294967295;
	}
	if (iParam0 > 0 || iParam0 < 255)
	{
		return 4294967295;
	}
	if (iParam1 > 0 || iParam1 < 255)
	{
		return 4294967295;
	}
	uVar0 = Function_275(iParam0, iParam1, iParam2);
	if (iParam3 != 4294967295 || iParam3 <= 275)
	{
		iParam3 = Function_273(uVar0);
	}
	if (iParam3 == 4294967295)
	{
		return 4294967295;
	}
	if (iParam3 > 275)
	{
		return 4294967295;
	}
	if (Global_13172[iParam311] == 0)
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning new deed ");
		PRINTINT(iParam3);
		PRINTSTRING(" ");
		PRINTINT(iParam0);
		PRINTSTRING(" ");
		PRINTINT(iParam1);
		PRINTSTRING(" ");
		PRINTINT(iParam2);
		PRINTNL();
		Global_16198[iParam3] = 0;
		Global_13172[iParam311].f_4 = 0;
		Global_13172[iParam311].f_8 = 0;
		Global_13172[iParam311].f_12 = 0;
		Global_13172[iParam311].f_16 = 0;
		Global_13172[iParam311] = uVar0;
	}
	else
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning existing deed ");
		PRINTINT(iParam3);
		PRINTSTRING(" ");
		PRINTINT(iParam0);
		PRINTSTRING(" ");
		PRINTINT(iParam1);
		PRINTSTRING(" ");
		PRINTINT(iParam2);
		PRINTNL();
	}
	return iParam3;
}

int Function_273(int iParam0) //Position: 0xD3C8 / 54216
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iParam0)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

bool Function_274(int iParam0) //Position: 0xD406 / 54278
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_275(int iParam0, int iParam1, int iParam2) //Position: 0xD41B / 54299
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

vector3 Function_276(bool bParam0) //Position: 0xD43B / 54331
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

struct<32> Function_277(bool bParam0) //Position: 0xD462 / 54370
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_278("0", &cVar8, ""), 4);
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

struct<32> Function_278(char* cParam0, char* cParam1, char* cParam2) //Position: 0xD4CC / 54476
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

float Function_279(var uParam0, bool bParam1) //Position: 0xD4EB / 54507
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(uParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

int Function_280(int iParam0) //Position: 0xD50A / 54538
{
	int iVar0;
	
	iVar0 = GET_ACTORENUM_SPECIES(iParam0);
	switch (iVar0)
	{
		case 0x00000001:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
		case 0x00000008:
		case 0x00000009:
		case 0x0000000B:
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000F:
		case 0x00000010:
		case 0x00000013:
		case 0x00000014:
		case 0x00000015:
		case 0x00000017:
		case 0x00000018:
		case 0x0000001A:
		case 0x0000001B:
		case 0x0000001C:
		case 0x0000001D:
		case 0x0000001E:
		case 0x0000001F:
		case 0x00000021:
		case 0x00000023:
			return 1;
			break;
		
		case 0x00000002:
		case 0x0000000E:
		case 0x0000000A:
		case 0x00000011:
		case 0x00000012:
		case 0x00000016:
		case 0x00000019:
		case 0x00000020:
		case 0x00000022:
			return 2;
			break;
	}
	return 0;
}

void Function_281(var uParam0, var uParam1, bool bParam2, int iParam3) //Position: 0xD5FB / 54779
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	_CREATE_EXPLOSION(uParam0, uParam1, bParam2, &vVar0, iParam3);
}

int Function_282(int iParam0) //Position: 0xD617 / 54807
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	Function_300(GET_DEBUG_PADINDEX(), 4);
	if (Function_299())
	{
		iParam0->f_12 = GET_DEBUG_PADINDEX();
		iVar2 = Function_290(iParam0, "RDR2 ACTORS MENU", 14, 2, &uVar0, &uVar1);
		if (iVar2 >= 4294967295)
		{
			if (Function_285(iVar2, uVar0, uVar1))
			{
			}
		}
		else if (iVar2 == 4294967294)
		{
			Function_284();
		}
		else if (iVar2 == 4294967293)
		{
			Function_283();
		}
	}
	return 1;
}

void Function_283() //Position: 0xD681 / 54913
{
	bool bVar0;
	bool bVar1;
	char* cVar2;
	
	bVar0 = FIND_NAMED_LAYOUT("Actors_Debug_Visualization");
	if (IS_LAYOUTREF_VALID(bVar0))
	{
		cVar2 = CREATE_OBJECT_ITERATOR(bVar0);
		ITERATE_ON_OBJECT_TYPE(cVar2, 15);
		if (IS_LAYOUTREF_VALID(bVar0))
		{
			REQUEST_ANIM_SET("range_of_motion", 0);
			REQUEST_ACTION_TREE("custom/range_of_motion");
			while ((!HAS_ANIM_SET_LOADED("range_of_motion") && !HAS_ACTION_TREE_LOADED("custom/range_of_motion")) && !IS_EXITFLAG_SET())
			{
				WAIT(0);
			}
			bVar1 = GET_ACTOR_FROM_OBJECT(START_OBJECT_ITERATOR(cVar2));
			while (IS_ACTOR_VALID(bVar1))
			{
				if (((!IS_ACTOR_VEHICLE(bVar1) && !IS_ACTOR_ANIMAL(bVar1)) && !IS_ACTOR_HORSE(bVar1)) && !IS_ACTION_NODE_PLAYING(bVar1, "range_of_motion/range_of_motion"))
				{
					TASK_STAND_STILL(bVar1, -1.0f, 0, 0);
					SET_ANIM_SET_FOR_ACTOR(bVar1, "range_of_motion", 0);
					SET_ACTION_NODE_FOR_ACTOR(bVar1, "range_of_motion/range_of_motion");
					REMOVE_ACTION_TREE("custom/range_of_motion");
					REMOVE_ANIM_SET("range_of_motion");
				}
				bVar1 = GET_ACTOR_FROM_OBJECT(OBJECT_ITERATOR_NEXT(cVar2));
			}
		}
	}
	return;
}

void Function_284() //Position: 0xD816 / 55318
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("Actors_Debug_Visualization");
	if (IS_LAYOUTREF_VALID(bVar0))
	{
		DESTROY_LAYOUT(bVar0);
	}
	if (HAS_ANIM_SET_LOADED("range_of_motion"))
	{
		REMOVE_ANIM_SET("range_of_motion");
		REMOVE_ACTION_TREE("range_of_motion");
	}
	return;
}

bool Function_285(int iParam0, bool bParam1, bool bParam2) //Position: 0xD88D / 55437
{
	bool bVar0;
	bool bVar1;
	struct<9> Var2;
	
	bVar1 = FIND_NAMED_LAYOUT("Actors_Debug_Visualization");
	if (!IS_LAYOUTREF_VALID(bVar1))
	{
		bVar1 = CREATE_LAYOUT("Actors_Debug_Visualization");
	}
	STREAMING_REQUEST_ACTOR(iParam0, 1, false);
	while (!STREAMING_IS_ACTOR_LOADED(iParam0, 4294967295) && !IS_EXITFLAG_SET())
	{
		WAIT(0);
	}
	if (iParam0 <= 1177)
	{
		if (bParam1)
		{
			if (GET_ACTORENUM_SPECIES(iParam0) != 0)
			{
				vVar2.f_4 = 2.0f;
				vVar2.f_8 = -2.0f;
				GET_ACTOR_OFFSET_WORLD_COORDS(GET_PLAYER_ACTOR(0), &vVar2, &vVar5);
				bVar0 = CREATE_ACTOR_IN_LAYOUT(bVar1, Function_123(), iParam0, vVar5, vVar8);
				ANIMAL_ACTOR_SET_DOMESTICATION(bVar0, 1);
			}
			else
			{
				SWITCH_PLAYER_TO_ENUM(iParam0, 0);
			}
			return 1;
		}
		vVar2.f_4 = 2.0f;
		vVar2.f_8 = -2.0f;
		GET_ACTOR_OFFSET_WORLD_COORDS(GET_PLAYER_ACTOR(0), &vVar2, &vVar5);
		bVar0 = CREATE_ACTOR_IN_LAYOUT(bVar1, Function_123(), iParam0, vVar5, vVar8);
	}
	else if (iParam0 <= 1203)
	{
		vVar2.f_4 = 2.0f;
		vVar2.f_8 = -10.0f;
		GET_ACTOR_OFFSET_WORLD_COORDS(GET_PLAYER_ACTOR(0), &vVar2, &vVar5);
		bVar0 = Function_286(StackVal, StackVal, StackVal, StackVal, bVar1, Function_123(), iParam0, 976, vVar5, vVar8, 0, 976, 976, 976, 4);
	}
	else
	{
		vVar2.f_4 = 2.0f;
		vVar2.f_8 = -10.0f;
		GET_ACTOR_OFFSET_WORLD_COORDS(GET_PLAYER_ACTOR(0), &vVar2, &vVar5);
		bVar0 = CREATE_ACTOR_IN_LAYOUT(bVar1, Function_123(), iParam0, vVar5, vVar8);
	}
	STREAMING_EVICT_ACTOR(iParam0, 4294967295);
	if (IS_ACTOR_VALID(bVar0))
	{
		SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_ACTOR(bVar0), 10.0f, 0, 1092616192);
		if (!IS_ACTOR_VEHICLE(bVar0))
		{
			TASK_PRIORITY_SET(bVar0, 1);
			TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
			SET_ACTOR_FACTION(bVar0, 21);
			SET_ACTOR_HEADING(bVar0, 70.0f, 1);
			if (IS_ACTOR_HUMAN(bVar0) && IS_ACTOR_VALID(Function_121()))
			{
				if (bParam2)
				{
					AUDIO_PLAY_ALL_LINES_FOR_ACTOR(GET_ACTOR_ENUM_STRING_FROM_ENUM(iParam0));
				}
				else if (iParam0 < 325)
				{
					SAY_SINGLE_LINE_CONTEXT(bVar0, 43, Function_121(), 1, 1, 1, 4294967295, 4294967295, 0, 1);
				}
				else if (iParam0 < 531)
				{
					SAY_SINGLE_LINE_CONTEXT(bVar0, 24, Function_121(), 1, 1, 2, 4294967295, 4294967295, 0, 1);
				}
			}
		}
		return 1;
	}
	LOG_ERROR("ACTOR MENU: This Actor is INVALID!");
	return 0;
}

var Function_286(bool bParam0, char* cParam1, int iParam2, int iParam3, vector3 vParam4, vector3 vParam7, var uParam10, int iParam11, int iParam12, int iParam13, int iParam14) //Position: 0xDAC8 / 56008
{
	bool bVar0;
	int iVar1[6];
	bool bVar8;
	int iVar9;
	int iVar10;
	char* cVar11[16];
	bool bVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	
	bVar0 = CREATE_ACTOR_IN_LAYOUT(bParam0, cParam1, iParam2, vParam4, vParam7);
	if (!IS_ACTOR_VALID(bVar0))
	{
		LOG_ERROR("Tried to create coach, but the coach was invalid");
		return bVar0;
	}
	bVar8 = UNK_0x65C3D8F6();
	if (IS_ACTOR_DRAFT_VEHICLE(bVar0))
	{
		iVar10 = GET_NUM_DRAFT_POSITIONS(bVar0);
		if (iParam14 > iVar10 && iParam14 < 0)
		{
			iVar10 = iParam14;
		}
		iVar9 = 0;
		while (iVar9 < (iVar10 - 1))
		{
			strcpy(&cVar11, "Draft", 16);
			straddi(&cVar11, iVar9, 16);
			bVar15 = "";
			if (Function_289(Global_30750[6], 4, 23, 0) && uParam10)
			{
				iVar16 = Function_288(StackVal, StackVal, Global_30750[6], vParam4, 4, 23, 0);
				if (Function_287(iVar16, &iVar1))
				{
					iVar16 = 976;
				}
				iVar1[iVar9] = iVar16;
				bVar15 = CREATE_ACTOR_IN_LAYOUT(bVar0, &cVar11, iVar16, vParam4, vParam7);
			}
			iVar17 = 4294967295;
			if (!IS_ACTOR_VALID(bVar15))
			{
				switch (iVar9)
				{
					case 0x00000000:
						iVar17 = iParam3;
						break;
					
					case 0x00000001:
						iVar17 = iParam11;
						break;
					
					case 0x00000002:
						iVar17 = iParam12;
						break;
					
					case 0x00000003:
						iVar17 = iParam13;
						break;
					
					default:
						iVar17 = iParam3;
						break;
				}
				if ((iVar17 != 4294967295 || iVar17 > 976) || iVar17 < 1007)
				{
					LOG_ERROR("Malformed Coach horses");
					return bVar0;
				}
				bVar15 = CREATE_ACTOR_IN_LAYOUT(bVar0, &cVar11, iVar17, vParam4, vParam7);
			}
			if (IS_ACTOR_VALID(bVar15))
			{
				ATTACH_DRAFT_TO_VEHICLE(bVar15, bVar0, iVar9, 1);
			}
			else
			{
				LOG_ERROR("Tried to create coach, but one of the horses couldn't be created");
				return bVar0;
			}
			iVar9++;
		}
		if (!bVar8)
		{
			ACCESSORIZE_VEHICLE_HORSES(bVar0, 5);
		}
	}
	if (iParam2 == 1197)
	{
		iVar18 = 2;
		while (iVar18 < (GET_NUM_AVAILABLE_SEATS(bVar0) - 1))
		{
			ENABLE_VEHICLE_SEAT(bVar0, iVar18, 0);
			iVar18++;
		}
	}
	return bVar0;
}

bool Function_287(int iParam0, int iParam1) //Position: 0xDCFC / 56572
{
	int iVar0;
	
	if (iParam0 == 976)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= *iParam1)
	{
		if ((*iParam1)[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var Function_288(var uParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6) //Position: 0xDD2E / 56622
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(uParam0, uParam4, uParam5, uParam6, 1, vParam1);
}

int Function_289(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xDD46 / 56646
{
	if (!IS_POPSET_VALID(uParam0))
	{
		return 0;
	}
	if (bParam3)
	{
		return 1;
	}
	return IS_POPULATION_SET_READY(uParam0, iParam1, iParam2);
}

var Function_290(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, var uParam5) //Position: 0xDD6D / 56685
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	var uVar12[1001];
	bool bVar1014;
	char* cVar1015;
	bool bVar1016;
	int iVar1017;
	int iVar1018;
	bool bVar1019;
	struct<16> Var1020;
	struct<16> Var1036;
	
	Function_298(uParam1, 1.0f, 1.0f, 1.0f, 1.0f);
	DRAW_STRING_CURRENT_FONT(0.1f, 0.8f, "Click Left Stick: Select", 1.0f, 1.0f, 1.0f, 1.0f);
	if (Function_102(*iParam0, 32768))
	{
		DRAW_STRING_CURRENT_FONT(0.4f, 0.8f, "Click Right Stick: Drop as Wild", 1.0f, 1.0f, 1.0f, 1.0f);
	}
	else
	{
		DRAW_STRING_CURRENT_FONT(0.4f, 0.8f, "Click Right Stick: Make Player", 1.0f, 1.0f, 1.0f, 1.0f);
	}
	DRAW_STRING_CURRENT_FONT(0.62f, 0.8f, "A: Select and Play All Audio", 1.0f, 1.0f, 1.0f, 1.0f);
	DRAW_STRING_CURRENT_FONT(0.1f, 0.85f, "B: Delete actors", 1.0f, 1.0f, 1.0f, 1.0f);
	DRAW_STRING_CURRENT_FONT(0.25f, 0.85f, "X: Pose actors", 1.0f, 1.0f, 1.0f, 1.0f);
	if (Function_102(*iParam0, 32768))
	{
		DRAW_STRING_CURRENT_FONT(0.4f, 0.85f, "Dpad UP: Remove Filter", 1.0f, 1.0f, 1.0f, 1.0f);
	}
	else
	{
		DRAW_STRING_CURRENT_FONT(0.4f, 0.85f, "Dpad UP: Filter ANIMAL", 1.0f, 1.0f, 1.0f, 1.0f);
	}
	if (Function_102(*iParam0, 16384))
	{
		DRAW_STRING_CURRENT_FONT(0.62f, 0.85f, "Dpad DOWN: Remove Filter", 1.0f, 1.0f, 1.0f, 1.0f);
	}
	else
	{
		DRAW_STRING_CURRENT_FONT(0.62f, 0.85f, "Dpad DOWN: Filter VEHICLE", 1.0f, 1.0f, 1.0f, 1.0f);
	}
	if (IS_BUTTON_PRESSED(iParam0->f_12, 5, 1, 0))
	{
		return 4294967294;
	}
	if (IS_BUTTON_PRESSED(iParam0->f_12, 7, 1, 0))
	{
		return 4294967293;
	}
	if (IS_BUTTON_PRESSED(iParam0->f_12, 12, 1, 0))
	{
		iParam0->f_20 = 0;
		if (Function_102(*iParam0, 32768))
		{
			Function_39(iParam0, 32768);
		}
		else
		{
			Function_75(iParam0, 32768);
			Function_39(iParam0, 16384);
		}
	}
	else if (IS_BUTTON_PRESSED(iParam0->f_12, 14, 1, 0))
	{
		iParam0->f_20 = 0;
		if (Function_102(*iParam0, 16384))
		{
			Function_39(iParam0, 16384);
		}
		else
		{
			Function_75(iParam0, 16384);
			Function_39(iParam0, 32768);
		}
	}
	bVar1014 = false;
	if (Function_102(*iParam0, 32768))
	{
		iVar11 = Function_297(&uVar12, 976, 1154);
		bVar1014 = true;
	}
	else if (Function_102(*iParam0, 16384))
	{
		iVar11 = Function_297(&uVar12, 1155, 1202);
		bVar1014 = true;
	}
	else
	{
		iVar11 = Function_297(&uVar12, 0, 1202);
	}
	iVar8 = (iVar11 / iParam2);
	iVar9 = (iVar8 / bParam3);
	iVar10 = Function_296(iParam0, iVar9);
	fVar0 = 100.0f;
	fVar1 = 110.0f;
	fVar2 = 1.0f;
	fVar3 = 1.0f;
	fVar4 = 1.0f;
	iVar7 = 0;
	iVar8 = 0;
	fVar5 = 1.8f;
	bVar1016 = false;
	iVar1017 = ((iVar10 * iParam2) * bParam3);
	if (iVar1017 >= iVar11)
	{
		iVar1017 = 0;
		iVar10 = 0;
	}
	Function_294(iParam0, iParam2, bParam3);
	iVar6 = iVar1017;
	while (iVar6 < iVar11)
	{
		iVar1018 = uVar12[iVar6];
		cVar1015 = GET_ACTOR_ENUM_STRING_FROM_ENUM(iVar1018);
		if (IS_STRING_VALID(cVar1015))
		{
			if (STRING_LENGTH(bVar1015) >= 0)
			{
				bVar1019 = IS_ACTORENUM_INSTALLED(iVar1018);
				if (StackVal && StackVal != iVar7 != iVar8)
				{
					strcpy(&Var1020, "-->", 64);
					stradd(&Var1020, bVar1015, 64);
					if (bVar1019)
					{
						Function_293(bVar1016, fVar0, fVar1, &Var1020, fVar2, fVar3, fVar4, 1.0f, fVar5, 1);
						if (IS_BUTTON_PRESSED(iParam0->f_12, 9, 1, 0))
						{
							if (bVar1014)
							{
								return uVar12[iVar6];
							}
							return iVar6;
						}
						if (IS_BUTTON_PRESSED(iParam0->f_12, 10, 1, 0))
						{
							*uParam4 = 1;
							if (bVar1014)
							{
								return uVar12[iVar6];
							}
							return iVar6;
						}
						if (IS_BUTTON_PRESSED(iParam0->f_12, 6, 1, 0))
						{
							*uParam5 = 1;
							if (bVar1014)
							{
								return uVar12[iVar6];
							}
							return iVar6;
						}
					}
					stradd(&Var1020, " (N/A)", 64);
					Function_293(bVar1016, fVar0, fVar1, &Var1020, 0.5f, 0.5f, 0.5f, 1.0f, fVar5, 1);
					bVar1016++;
				}
				else
				{
					if (bVar1019)
					{
						Function_293(bVar1016, fVar0, fVar1, bVar1015, fVar2, fVar3, fVar4, 1.0f, fVar5, 1);
					}
					else
					{
						strcpy(&Var1036, bVar1015, 64);
						stradd(&Var1036, " (N/A)", 64);
						Function_293(bVar1016, fVar0, fVar1, &Var1036, 0.5f, 0.5f, 0.5f, 1.0f, fVar5, 1);
					}
					bVar1016++;
				}
				iVar7++;
				fVar1 = (fVar1 + ((375.0f / IntToFloat(iParam2)) * (fVar5 / 1.5f)));
				if (iVar7 > iParam2)
				{
					fVar0 = (fVar0 + (1140.0f / IntToFloat(bParam3)));
					fVar1 = 110.0f;
					iVar7 = 0;
					iVar8++;
				}
				if (iVar8 > bParam3)
				{
					Function_292(bVar1016, iParam2, bParam3);
					return 4294967295;
				}
			}
			Function_291(bVar1016);
		}
		else
		{
			Function_291(bVar1016);
		}
		iVar6++;
	}
	Function_292(bVar1016, iParam2, bParam3);
	return 4294967295;
}

void Function_291(bool bParam0) //Position: 0xE2C4 / 58052
{
	var uVar0;
	char* cVar1[16];
	
	strcpy(&cVar1, "DB_MENU_", 16);
	stradd(&cVar1, I2STR(bParam0), 16);
	uVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar1);
	if (GUI_WINDOW_VALID(uVar0))
	{
		GUI_SET_TEXT(uVar0, " ");
	}
	return;
}

void Function_292(bool bParam0, int iParam1, bool bParam2) //Position: 0xE2FE / 58110
{
	var uVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam1 * bParam2);
	if (bParam0 <= iVar2)
	{
		bVar1 = bParam0;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			uVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(uVar0))
			{
				GUI_SET_TEXT(uVar0, " ");
			}
			bVar1++;
		}
	}
	return;
}

void Function_293(bool bParam0, float fParam1, float fParam2, char* cParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, bool bParam9) //Position: 0xE35A / 58202
{
	struct<13> Var0;
	char* cVar13[64];
	
	strcpy(&cVar9, "DB_MENU_", 16);
	stradd(&cVar9, I2STR(bParam0), 16);
	uVar4 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar9);
	if (!GUI_WINDOW_VALID(uVar4))
	{
		Var0 = fParam1;
		Var0.f_4 = fParam2;
		Var0.f_8 = (Var0 + (500.0f * fParam8));
		Var0.f_12 = (StackVal + (55.0f * fParam8));
		uVar4 = GUI_MAKE_TEXT(Global_13043, &Var0, &cVar9, "nberrylium", fParam8);
	}
	Var5 = fParam4;
	Var5.f_4 = fParam5;
	Var5.f_8 = fParam6;
	Var5.f_12 = fParam7;
	strcpy(&cVar13, cParam3, 64);
	if (bParam9)
	{
		STRING_LOWER(&cVar13);
	}
	GUI_SET_TEXT(uVar4, &cVar13);
	GUI_SET_TEXT_COLOR(uVar4, &Var5);
}

void Function_294(var uParam0, int iParam1, int iParam2) //Position: 0xE408 / 58376
{
	switch (Function_295(uParam0))
	{
		case 0x00000001:
			uParam0->f_4 = (StackVal - 1);
			if (StackVal <= 0)
			{
				uParam0->f_4 = (iParam1 - 1);
			}
			break;
		
		case 0x00000002:
			uParam0->f_4 = StackVal + 1;
			if (StackVal > iParam1)
			{
				uParam0->f_4 = 0;
			}
			break;
		
		case 0x00000003:
			uParam0->f_8 = (StackVal - 1);
			if (StackVal <= 0)
			{
				uParam0->f_8 = (iParam2 - 1);
			}
			break;
		
		case 0x00000004:
			uParam0->f_8 = StackVal + 1;
			if (StackVal > iParam2)
			{
				uParam0->f_8 = 0;
			}
			break;
	}
	return;
}

int Function_295(int iParam0) //Position: 0xE4A0 / 58528
{
	float fVar0;
	float fVar1;
	
	fVar0 = (GET_STICK_Y(GET_PLAYER_PADINDEX(Function_121()), 0, 1) + GET_STICK_Y(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar0 >= -0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 12, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 12, 1, 0))
	{
		if (!Function_102(*iParam0, 0x40000000))
		{
			Function_75(iParam0, 0x40000000);
			return 1;
		}
	}
	if ((fVar0 <= 0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 14, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 14, 1, 0))
	{
		if (!Function_102(*iParam0, 0x40000000))
		{
			Function_75(iParam0, 0x40000000);
			return 2;
		}
	}
	Function_39(iParam0, 0x40000000);
	fVar1 = (GET_STICK_X(GET_PLAYER_PADINDEX(Function_121()), 0, 1) + GET_STICK_X(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar1 >= -0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 15, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 15, 1, 0))
	{
		if (!Function_102(*iParam0, 0x20000000))
		{
			Function_75(iParam0, 0x20000000);
			return 3;
		}
	}
	if ((fVar1 <= 0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 13, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 13, 1, 0))
	{
		if (!Function_102(*iParam0, 0x20000000))
		{
			Function_75(iParam0, 0x20000000);
			return 4;
		}
	}
	Function_39(iParam0, 0x20000000);
	return 0;
}

var Function_296(var uParam0, int iParam1) //Position: 0xE5EB / 58859
{
	int iVar0;
	
	iVar0 = uParam0->f_20;
	if (iVar0 != 0 && iParam1 != 0)
	{
		return iVar0;
	}
	if (iVar0 < 0 && iVar0 > iParam1)
	{
		DRAW_STRING_CURRENT_FONT(0.1f, 0.9f, "Previous Page<-Dpad->Next Page", 1.0f, 1.0f, 1.0f, 1.0f);
		if (IS_BUTTON_PRESSED(uParam0->f_12, 13, 1, 0))
		{
			iVar0++;
			uParam0->f_20 = iVar0;
			uParam0->f_4 = 0;
			uParam0->f_8 = 0;
		}
		else if (IS_BUTTON_PRESSED(uParam0->f_12, 15, 1, 0))
		{
			iVar0 = (iVar0 - 1);
			uParam0->f_20 = iVar0;
			uParam0->f_4 = 0;
			uParam0->f_8 = 0;
		}
	}
	else if (iVar0 < 0 && iVar0 != iParam1)
	{
		DRAW_STRING_CURRENT_FONT(0.1f, 0.9f, "Previous Page<-Dpad", 1.0f, 1.0f, 1.0f, 1.0f);
		if (IS_BUTTON_PRESSED(uParam0->f_12, 15, 1, 0))
		{
			iVar0 = (iVar0 - 1);
			uParam0->f_20 = iVar0;
			uParam0->f_4 = 0;
			uParam0->f_8 = 0;
		}
	}
	else
	{
		DRAW_STRING_CURRENT_FONT(0.1f, 0.9f, "Dpad->Next Page", 1.0f, 1.0f, 1.0f, 1.0f);
		if (IS_BUTTON_PRESSED(uParam0->f_12, 13, 1, 0))
		{
			iVar0++;
			uParam0->f_20 = iVar0;
			uParam0->f_4 = 0;
			uParam0->f_8 = 0;
		}
	}
	return iVar0;
}

var Function_297(var uParam0, int iParam1, int iParam2) //Position: 0xE73A / 59194
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	iVar1 = 0;
	iVar1 = 0;
	while ((iVar0 > 1311 && iVar1 > *uParam0) && iVar0 >= iParam2)
	{
		if (((iVar0 > 1155 || iVar0 < 1176) && iVar0 == 1203) && iVar0 == 1189)
		{
			(*uParam0)[iVar1] = iVar0;
			iVar1++;
		}
		iVar0++;
	}
	return (iVar1 - 1);
}

void Function_298(char* cParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xE799 / 59289
{
	struct<13> Var0;
	
	strcpy(&cVar9, "DB_MENU_TITLE", 16);
	uVar4 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar9);
	if (!GUI_WINDOW_VALID(uVar4))
	{
		Var0 = 0.0f;
		Var0.f_4 = 50.0f;
		Var0.f_8 = 1280.0f;
		Var0.f_12 = 150.0f;
		uVar4 = GUI_MAKE_TEXT(Global_13043, &Var0, &cVar9, "nberrylium", 2.0f);
	}
	Var5 = uParam1;
	Var5.f_4 = uParam2;
	Var5.f_8 = uParam3;
	Var5.f_12 = uParam4;
	GUI_SET_TEXT(uVar4, uParam0);
	GUI_SET_TEXT_COLOR(uVar4, &Var5);
	GUI_SET_TEXT_JUSTIFY(uVar4, 1);
}

bool Function_299() //Position: 0xE82C / 59436
{
	return Global_34580;
}

void Function_300(var uParam0, bool bParam1) //Position: 0xE835 / 59445
{
	if (Function_299())
	{
		if (IS_BUTTON_PRESSED(uParam0, bParam1, 1, 0))
		{
			Function_304(14, 2);
		}
	}
	else if (IS_BUTTON_PRESSED(uParam0, bParam1, 1, 0) && !Function_303())
	{
		Function_301();
	}
	return;
}

void Function_301() //Position: 0xE86A / 59498
{
	GRINGO_DEBUG_CHECK_SOUND(0);
	Function_302(0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.5f);
	SET_HUD_MAP_DRAW_ENABLED(0);
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	Global_34580 = 1;
	return;
}

void Function_302(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) //Position: 0xE88F / 59535
{
	struct<13> Var0;
	char* cVar13[16];
	
	strcpy(&cVar13, "DB_MENU_OVERLAY", 16);
	uVar4 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar13);
	if (!GUI_WINDOW_VALID(uVar4))
	{
		Var0 = 0.0f;
		Var0.f_4 = 0.0f;
		Var0.f_8 = 1280.0f;
		Var0.f_12 = 720.0f;
		Var5 = uParam0;
		Var5.f_4 = uParam1;
		Var5.f_8 = uParam2;
		Var5.f_12 = uParam3;
		Var9 = uParam4;
		Var9.f_4 = uParam5;
		Var9.f_8 = uParam6;
		Var9.f_12 = uParam7;
		uVar4 = GUI_MAKE_OVERLAY(Global_13043, &Var0, &cVar13, &Var5, &Var9, 0);
	}
}

bool Function_303() //Position: 0xE917 / 59671
{
	return Global_30920;
}

void Function_304(var uParam0, int iParam1) //Position: 0xE920 / 59680
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	Function_305(uParam0, iParam1);
	SET_HUD_MAP_DRAW_ENABLED(1);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	Global_34580 = 0;
	return;
}

void Function_305(int iParam0, int iParam1) //Position: 0xE93D / 59709
{
	var uVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DB_MENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		uVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		while (GUI_WINDOW_VALID(uVar0))
		{
			GUI_CLOSE_WINDOW(uVar0);
			bVar1++;
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			uVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			uVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(uVar0))
			{
				GUI_CLOSE_WINDOW(uVar0);
			}
			bVar1++;
		}
	}
	uVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_TITLE");
	if (GUI_WINDOW_VALID(uVar0))
	{
		GUI_CLOSE_WINDOW(uVar0);
	}
	uVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_FOOTER_HIGH");
	if (GUI_WINDOW_VALID(uVar0))
	{
		GUI_CLOSE_WINDOW(uVar0);
	}
	uVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_OVERLAY");
	if (GUI_WINDOW_VALID(uVar0))
	{
		GUI_CLOSE_WINDOW(uVar0);
	}
	return;
}

void Function_306() //Position: 0xEA74 / 60020
{
	int iVar0;
	
	iVar0 = GET_LATEST_CONSOLE_COMMAND();
	if (!IS_STRING_VALID(iVar0))
	{
		return;
	}
	if (Function_488(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_487(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_486(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_485(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_484(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_482(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_479(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_473(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_472(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_470(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_468(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_463(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_462(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_461(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_458(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_452(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_451(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_450(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_449(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_448(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_445(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_444(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
	}
	if (Function_443(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_442(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_441(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_440(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_438(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_434(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_433(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_417(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_416(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_415(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_414(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_413(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_412(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_411(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_410(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_409(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_408(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_407(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_406(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_405(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_404(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_403(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_401(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_398(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_393(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_392(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_326(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_325(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_324(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_322(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_321(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_320(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_312(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_311(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_310(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_307(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	return;
}

bool Function_307(bool bParam0) //Position: 0xED40 / 60736
{
	if (STRING_CONTAINS_STRING(bParam0, "playermeds"))
	{
		Function_308(3, 0, 1);
		return 1;
	}
	return 0;
}

int Function_308(int iParam0, bool bParam1, int iParam2) //Position: 0xED65 / 60773
{
	if (iParam0 >= 4294967295 || iParam0 <= 79)
	{
		return 0;
	}
	if (bParam1)
	{
		if (GET_ITEM_COUNT(Function_309(iParam0), Function_121()) == 0)
		{
			ADD_ITEM(Function_309(iParam0), Function_121(), iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_309(iParam0), Function_121(), iParam2);
	return 1;
}

var Function_309(int iParam0) //Position: 0xEDB0 / 60848
{
	int iVar0;
	
	iVar0 = SS_GET_STRING(1, iParam0);
	if (!IS_STRING_VALID(iVar0))
	{
		PRINTSTRING("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value:");
		PRINTINT(iParam0);
		PRINTNL();
		LOG_ERROR("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value! Ask Christian to add it");
	}
	return bVar0;
}

bool Function_310(bool bParam0) //Position: 0xEEA1 / 61089
{
	var uVar0;
	var uVar1;
	
	if (STRING_CONTAINS_STRING(bParam0, "playemitteroncurve"))
	{
		uVar0 = GET_CURVE_BY_NAME("rsdEFFECTCURVE_TNTFuse", 20);
		uVar1 = CREATE_RMPTFX_EMITTER_ON_CURVE("TNTFuse", "muzzle_dynamite", uVar0, 5.0f);
		UNK_0x6745191B(uVar1, 180.0f, 0.0f, 0.0f);
		return 1;
	}
	return 0;
}

bool Function_311(bool bParam0) //Position: 0xEF18 / 61208
{
	if (STRING_CONTAINS_STRING(bParam0, "makeswim"))
	{
		DECOR_SET_BOOL(Global_34573, "swimming", 1);
		return 1;
	}
	return 0;
}

bool Function_312(bool bParam0) //Position: 0xEF47 / 61255
{
	if (STRING_CONTAINS_STRING(bParam0, "regions_reset"))
	{
		Function_313(1, 0, 1);
		return 1;
	}
	return 0;
}

void Function_313(var uParam0, bool bParam1, int iParam2) //Position: 0xEF6E / 61294
{
	int iVar0;
	
	iVar0 = 0;
	if (IS_SCRIPT_VALID(Global_30617))
	{
		TERMINATE_SCRIPT(Global_30617);
	}
	if (IS_GAME_RESETTING())
	{
		bParam1 = false;
	}
	if (bParam1)
	{
		if (Function_319(Global_29006))
		{
			Function_318(&(Global_29008[Global_29006]), 131072);
			Function_317(&(Global_29008[Global_29006]), 2097152);
			Function_315(Global_29006);
		}
		else
		{
			bParam1 = false;
		}
	}
	if (!bParam1)
	{
		if (!HUD_IS_FADED())
		{
		}
		iVar0 = 0;
		while (iVar0 <= 146)
		{
			if (!StackVal != 1)
			{
				if (Function_314(&(Global_29008[iVar0]), 4) || Function_314(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_317(&(Global_29008[iVar0]), 2097155);
					Function_318(&(Global_29008[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_3386 = 0;
		Global_3387 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			if (Function_129())
			{
			}
			WAIT(0);
		}
		if (uParam0 && !NET_IS_IN_SESSION())
		{
			DESTROY_GC_OBJECTS(0, 1);
		}
		CLEAN_CACHE_ENTRIES();
		ENABLE_AMBIENT_SPAWNING(false);
	}
	return;
}

bool Function_314(var uParam0, int iParam1) //Position: 0xF079 / 61561
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_315(int iParam0) //Position: 0xF095 / 61589
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_316())
			{
				return;
			}
		}
		if (!Function_314(&(Global_29008[iParam0]), 2048))
		{
			Global_30618 = iParam0;
		}
		Global_29007 = StackVal;
	}
	else if (Global_3386)
	{
	}
	return;
}

bool Function_316() //Position: 0xF114 / 61716
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_314(&(Global_29008[iVar0]), 4) || Function_314(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_317(var uParam0, int iParam1) //Position: 0xF17D / 61821
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_318(var uParam0, int iParam1) //Position: 0xF194 / 61844
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_319(int iParam0) //Position: 0xF1A3 / 61859
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

bool Function_320(bool bParam0) //Position: 0xF1B9 / 61881
{
	if (STRING_CONTAINS_STRING(bParam0, "stand_hostage"))
	{
		REQUEST_ANIM_SET("stand_hostage", 0);
		REQUEST_ACTION_TREE("custom/stand_hostage");
		while (!HAS_ANIM_SET_LOADED("stand_hostage") || !HAS_ACTION_TREE_LOADED("custom/stand_hostage"))
		{
			WAIT(0);
		}
		SET_ANIM_SET_FOR_ACTOR(Global_34573, "stand_hostage", 0);
		SET_ACTION_NODE_FOR_ACTOR(Global_34573, "stand_hostage/walk_pose");
		SET_REACT_NODE_FOR_ACTOR(Global_34573, "stand_hostage/injury/");
		return 1;
	}
	return 0;
}

bool Function_321(bool bParam0) //Position: 0xF29B / 62107
{
	char* cVar0[32];
	bool bVar8;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	
	if (STRING_CONTAINS_STRING(bParam0, "nghostscan"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 0)
		{
			strcpy(&cVar0, GET_CONSOLE_COMMAND_TOKEN(1), 32);
			strcpy(&cVar0, GET_CONSOLE_COMMAND_TOKEN(1), 32);
			stradd(&cVar0, "v_region", 32);
			bVar8 = FIND_VOLUME_IN_LAYOUT(Global_30616, &cVar0);
			vVar9 = { 0.0f, 0.0f, 0.0f };
			vVar12 = { 0.0f, 0.0f, 0.0f };
			vVar15 = { 0.0f, 0.0f, 0.0f };
			GET_VOLUME_CENTER(bVar8, &vVar9);
			FIND_GROUND_INTERSECTION(&vVar9, 10.0f, &vVar12, &vVar15);
			AMBIENT_RESET_FILTER(0);
			AMBIENT_SET_SEARCH_CENTER(vVar12);
			AMBIENT_ENABLE_OFFSCREEN_FILTER(0);
			AMBIENT_ENABLE_MATERIAL_IN_AREA_INCLUDES_FILTER(0, 0);
			AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(512, 0.0f, 0);
			UNK_0x30C67D05(0);
			AMBIENT_ENABLE_DISTANCE_FILTER(0);
			AMBIENT_ENABLE_MATERIAL_AT_POINT_FILTER(0);
			AMBIENT_SET_ELEVATION_FILTER(-1.0f, 2.0f);
			AMBIENT_ENABLE_QUADRANT_FILTER(0);
			AMBIENT_ENABLE_SLOPE_FILTER(0);
			return 1;
		}
	}
	return 0;
}

bool Function_322(bool bParam0) //Position: 0xF348 / 62280
{
	bool bVar0;
	float fVar1;
	
	if (STRING_CONTAINS_STRING(bParam0, "addnotor"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 0)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			fVar1 = STRING_TO_FLOAT(bVar0);
			Function_323(3, fVar1);
		}
		return 1;
	}
	return 0;
}

int Function_323(int iParam0, float fParam1) //Position: 0xF385 / 62341
{
	int iVar0;
	int iVar1;
	
	Function_92(iParam0, fParam1, 0);
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (fParam1 > 0.0f)
	{
		LOG_ERROR("STAT_INCREASE: fIncreaseValue < 0 - I am turning this into a positive number for you!");
		fParam1 = FABS(fParam1);
	}
	iVar1 = Function_33(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_49205[iVar120].f_72 != 0 || Global_49205[iVar120].f_72 != 1)
		{
			Global_49199[iVar1] = (Global_49199[iVar1] + fParam1);
			strcpy(&Global_49205[iVar120] + 8, "QME+", 8);
			strcpy(&(Global_49205[iVar120]), INT_TO_STRING(iVar0), 8);
			Global_49205[iVar120].f_48 = 26;
			Global_49205[iVar120].f_68 = iParam0;
			Global_49205[iVar120].f_72 = 0;
			return 1;
		}
	}
	iVar1 = Function_13();
	Global_49199[iVar1] = fParam1;
	strcpy(&Global_49205[iVar120] + 8, "QME+", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(iVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 0;
	return 1;
}

bool Function_324(bool bParam0) //Position: 0xF511 / 62737
{
	bool bVar0;
	float fVar1;
	
	if (STRING_CONTAINS_STRING(bParam0, "addhonor"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 0)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			fVar1 = STRING_TO_FLOAT(bVar0);
			Function_323(1, fVar1);
		}
		return 1;
	}
	return 0;
}

bool Function_325(bool bParam0) //Position: 0xF548 / 62792
{
	char* cVar0;
	bool bVar1;
	
	if (STRING_CONTAINS_STRING(bParam0, "killRC"))
	{
		cVar0 = CREATE_OBJECT_ITERATOR(Global_6289);
		ITERATE_ON_OBJECT_TYPE(cVar0, 24);
		bVar1 = START_OBJECT_ITERATOR(cVar0);
		while (IS_PERS_CHAR_VALID(GET_PERS_CHAR_FROM_OBJECT(bVar1)))
		{
			DESTROY_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(bVar1));
			bVar1 = OBJECT_ITERATOR_NEXT(cVar0);
		}
		DESTROY_ITERATOR(cVar0);
		return 1;
	}
	return 0;
}

bool Function_326(bool bParam0) //Position: 0xF59A / 62874
{
	char* cVar0[64];
	
	if (STRING_CONTAINS_STRING(cParam0, "pass_all"))
	{
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		if (IS_STRING_VALID(bParam0))
		{
			if (STRING_LENGTH(bParam0) >= 0)
			{
				strcpy(&cVar0, bParam0, 64);
				STRING_UPPER(&cVar0);
				PRINTSTRING("PASSING ALL MISSIONS IN STRAND: ");
				PRINTSTRING(&cVar0);
				PRINTNL();
				if (STRING_CONTAINS_STRING(&cVar0, "INTRO"))
				{
					Function_327(Function_271(0, 1, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "FORT"))
				{
					Function_327(Function_271(0, 24, 1), 0, 1, 1, 0);
					Function_327(Function_271(1, 25, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "GRAVE"))
				{
					Function_327(Function_271(0, 12, 1), 0, 1, 1, 0);
					Function_327(Function_271(0, 13, 1), 0, 1, 1, 0);
					Function_327(Function_271(0, 14, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "MARSHAL"))
				{
					Function_327(Function_271(0, 8, 1), 0, 1, 1, 0);
					Function_327(Function_271(0, 9, 1), 0, 1, 1, 0);
					Function_327(Function_271(0, 23, 1), 0, 1, 1, 0);
					Function_327(Function_271(0, 21, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "MERCHANT"))
				{
					Function_327(Function_271(0, 10, 1), 0, 1, 1, 0);
					Function_327(Function_271(0, 11, 1), 0, 1, 1, 0);
					Function_327(Function_271(0, 17, 1), 0, 1, 1, 0);
					Function_327(Function_271(0, 15, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "OUTLAW"))
				{
					Function_327(Function_271(0, 18, 1), 0, 1, 1, 0);
					Function_327(Function_271(0, 19, 1), 0, 1, 1, 0);
					Function_327(Function_271(0, 20, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "RANCH"))
				{
					Function_327(Function_271(0, 2, 1), 0, 1, 1, 0);
					Function_327(Function_271(0, 3, 1), 0, 1, 1, 0);
					Function_327(Function_271(0, 22, 1), 0, 1, 1, 0);
					Function_327(Function_271(0, 6, 1), 0, 1, 1, 0);
					Function_327(Function_271(0, 5, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "GUN"))
				{
					Function_327(Function_271(1, 30, 1), 0, 1, 1, 0);
					Function_327(Function_271(1, 33, 1), 0, 1, 1, 0);
					Function_327(Function_271(1, 32, 1), 0, 1, 1, 0);
					Function_327(Function_271(1, 31, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "MEXGIRL"))
				{
					Function_327(Function_271(1, 34, 1), 0, 1, 1, 0);
					Function_327(Function_271(1, 35, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "MEXARMY"))
				{
					Function_327(Function_271(1, 27, 1), 0, 1, 1, 0);
					Function_327(Function_271(1, 26, 1), 0, 1, 1, 0);
					Function_327(Function_271(1, 28, 1), 0, 1, 1, 0);
					Function_327(Function_271(1, 29, 1), 0, 1, 1, 0);
					Function_327(Function_271(1, 36, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "REBEL"))
				{
					Function_327(Function_271(1, 39, 1), 0, 1, 1, 0);
					Function_327(Function_271(1, 37, 1), 0, 1, 1, 0);
					Function_327(Function_271(1, 38, 1), 0, 1, 1, 0);
					Function_327(Function_271(1, 41, 1), 0, 1, 1, 0);
					Function_327(Function_271(1, 40, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "ANTHRO"))
				{
					Function_327(Function_271(2, 45, 1), 0, 1, 1, 0);
					Function_327(Function_271(2, 46, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "FBI"))
				{
					Function_327(Function_271(2, 43, 1), 0, 1, 1, 0);
					Function_327(Function_271(2, 47, 1), 0, 1, 1, 0);
					Function_327(Function_271(2, 48, 1), 0, 1, 1, 0);
					Function_327(Function_271(2, 42, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "NATIVE"))
				{
					Function_327(Function_271(2, 44, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "HOME"))
				{
					Function_327(Function_271(3, 49, 1), 0, 1, 1, 0);
					Function_327(Function_271(3, 55, 1), 0, 1, 1, 0);
					Function_327(Function_271(3, 56, 1), 0, 1, 1, 0);
					Function_327(Function_271(3, 52, 1), 0, 1, 1, 0);
					Function_327(Function_271(3, 53, 1), 0, 1, 1, 0);
					Function_327(Function_271(3, 54, 1), 0, 1, 1, 0);
					Function_327(Function_271(3, 50, 1), 0, 1, 1, 0);
					Function_327(Function_271(3, 51, 1), 0, 1, 1, 0);
					Function_327(Function_271(3, 57, 1), 0, 1, 1, 0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_327(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4) //Position: 0xFA32 / 64050
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	Function_391(12);
	Function_389(2);
	Function_387((15 - Function_388(105)));
	if (Function_386(iParam0) == 1)
	{
		iVar2 = Function_385(iParam0);
		Function_379(&(Global_3422[iVar240]));
		Function_264(4194304);
		if (bParam3)
		{
			Function_353(iVar2, &uVar0, 0);
			if (!Global_3379)
			{
				Function_352(iVar2);
			}
		}
		else if (bParam4)
		{
			Function_353(iVar2, &uVar0, 0);
		}
		bVar1 = Function_351();
		if (bParam1)
		{
			Function_348(iVar2, iParam0, bVar1);
			Function_347();
		}
	}
	Function_333(iParam0, bParam1, iParam2, bVar1);
	if (Function_386(iParam0) == 1)
	{
		if (bParam1)
		{
			if (!Global_3381)
			{
				Function_332(iVar2, bVar1);
			}
		}
	}
	if ((!HAS_ACHIEVEMENT_BEEN_PASSED(33) && bParam1) && !bVar1)
	{
		if (Function_386(iParam0) == 1)
		{
			iVar2 = Function_385(iParam0);
			if (iVar2 != 1)
			{
				(&Global_12976 + 36)->f_32++;
				if ((&Global_12976 + 36)->f_32 > 20)
				{
					AWARD_ACHIEVEMENT(33);
				}
			}
		}
	}
	Function_328();
}

void Function_328() //Position: 0xFB1F / 64287
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 41)
	{
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(StackVal, Function_329(Global_63315[iVar02], 0));
		iVar0++;
	}
	return;
}

int Function_329(int iParam0, bool bParam1) //Position: 0xFB4F / 64335
{
	int iVar0;
	
	iVar0 = Function_330(iParam0);
	if (!Function_269(iVar0))
	{
		return 0;
	}
	if (StackVal == 3)
	{
		return 1;
	}
	if (!bParam1)
	{
		if (StackVal == 4)
		{
			return 1;
		}
	}
	return 0;
}

int Function_330(int iParam0) //Position: 0xFB8C / 64396
{
	if (!Function_331(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_331(int iParam0) //Position: 0xFBA6 / 64422
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_332(int iParam0, bool bParam1) //Position: 0xFBBC / 64444
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		return;
	}
	iVar0 = 4294967295;
	switch (iParam0)
	{
		case 0x00000001:
			iVar0 = 1;
			break;
		
		case 0x00000018:
			iVar0 = 2;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 <= 2 && iVar1 >= 24)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_34(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000028:
			iVar0 = 3;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 <= 25 && iVar1 >= 40)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_34(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000029:
			iVar0 = 4;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 <= 25 && iVar1 >= 41)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_34(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x0000002C:
			iVar0 = 5;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 != 42 || iVar1 != 44)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_34(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000030:
			iVar0 = 6;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 <= 42 && iVar1 >= 48)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_34(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000039:
			iVar0 = 7;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 <= 49 && iVar1 >= 57)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_34(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0xFFFFFFFF:
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(2))
			{
				Function_332(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(3))
			{
				Function_332(40, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(4))
			{
				Function_332(41, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(5))
			{
				Function_332(44, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(6))
			{
				Function_332(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(7))
			{
				Function_332(57, 0);
			}
			break;
	}
	if (iVar0 != 4294967295)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(iVar0))
		{
			AWARD_ACHIEVEMENT(iVar0);
		}
	}
	return;
}

void Function_333(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xFEB3 / 65203
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	var uVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_267(iParam0))
	{
		Function_345();
		return;
	}
	iVar0 = Function_386(iParam0);
	if (!iVar0 != 1)
	{
		Global_13172[iParam011].f_12++;
		if (Function_42())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", iVar0);
		}
	}
	else
	{
		Global_6269 = Function_385(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_344(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_131(Global_6269) };
		}
		if (Function_42())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_342();
		CLEAR_JOURNAL_ENTRY(uVar11);
		SET_JOURNAL_ENTRY_PROGRESS(uVar11, -2.0f, 0, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(uVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(uVar11, 1);
		}
	}
	if (Function_42())
	{
		Function_341();
	}
	Global_13172[iParam011].f_36 = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_339("DEED_COMPLETE", iParam0);
	}
	if (bParam1)
	{
		Global_26281 = GET_CURRENT_GAME_TIME();
	}
	if (StackVal && StackVal != 3 != 4)
	{
		if (bParam3)
		{
			Global_13172[iParam011].f_4 = 4;
		}
		else
		{
			Global_13172[iParam011].f_4 = 3;
		}
		iVar12 = 1;
	}
	if (Global_3421)
	{
		Global_13172[iParam011].f_4 = 0;
	}
	if (iVar12 && !Global_3381)
	{
		if (!bParam3)
		{
			Function_335(iParam0);
		}
		if (bParam1)
		{
			if (bParam2)
			{
				switch (iVar0)
				{
					case 0x00000001:
						iVar13 = 4;
						break;
					
					case 0x00000004:
						iVar13 = 3;
						break;
					
					case 0x00000006:
						iVar13 = 2;
						break;
					
					case 0x00000002:
						switch (Function_385(iParam0))
						{
							case 0x00000000:
								iVar13 = 1;
								break;
							
							default:
								iVar13 = 0;
								break;
						}
						break;
					
					case 0x00000003:
						iVar13 = 10;
						break;
					}
			}
			Function_79(1);
			Function_78(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_334(iParam0, &Var14);
		}
		Var14.f_24 = 1;
		Var14 = Global_6269;
		Var14.f_20 = bParam3;
		RESET_STORED_DATA();
		STORE_GAME_STATE(&Var14, 44, 1);
		if (!LOAD_SOFT_SAVE(0))
		{
			RESET_GAME();
		}
	}
	Global_3376 = 1;
}

void Function_334(int iParam0, int iParam1) //Position: 0x10107 / 65799
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_335(int iParam0) //Position: 0x10141 / 65857
{
	int iVar0;
	int iVar1;
	
	if (!Function_269(iParam0))
	{
		return;
	}
	switch (Function_386(iParam0))
	{
		case 0x00000001:
			iVar1 = Function_385(iParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_124(12, 1, 0, 0);
				Function_338(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_124(13, 1, 0, 0);
				Function_338(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_124(14, 1, 0, 0);
				Function_338(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_124(15, 1, 0, 0);
				Function_338(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_124(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_385(iParam0))
			{
				case 0x00000000:
					if (Function_337(iParam0) == 1)
					{
						iVar0 = Function_336(iParam0);
						if (Function_319(iVar0))
						{
							if (iVar0 == Global_30723[5])
							{
								Function_338(4, 18);
							}
							else if (iVar0 == Global_30693[3])
							{
								Function_338(4, 10);
							}
							else if (iVar0 == Global_30723[6])
							{
								Function_338(4, 16);
							}
							else if (iVar0 == Global_30668[3])
							{
								Function_338(4, 6);
							}
							else if (iVar0 == Global_30640[13])
							{
								Function_338(4, 3);
							}
							else if (iVar0 == Global_30693[7])
							{
								Function_338(4, 11);
							}
							else if (iVar0 == Global_30640[6])
							{
								Function_338(4, 0);
							}
							else if (iVar0 == Global_30693[10])
							{
								Function_338(4, 15);
							}
							else if (iVar0 == Global_30693[8])
							{
								Function_338(4, 14);
							}
							else if (iVar0 == Global_30640[11])
							{
								Function_338(4, 2);
							}
							else if (iVar0 == Global_30668[6])
							{
								Function_338(4, 7);
							}
							else if (iVar0 == Global_30723[3])
							{
								Function_338(4, 17);
							}
							else if (iVar0 == Global_30685[5])
							{
								Function_338(4, 8);
							}
							else if (iVar0 == Global_30693[9])
							{
								Function_338(4, 13);
							}
							else if (iVar0 == Global_30693[11])
							{
								Function_338(4, 12);
							}
							else if (iVar0 == Global_30640[7])
							{
								Function_338(4, 1);
							}
							else if (iVar0 == Global_30679[3])
							{
								Function_338(4, 5);
							}
							else if (iVar0 == Global_30693[4])
							{
								Function_338(4, 9);
							}
							else if (iVar0 == Global_30658[7])
							{
								Function_338(4, 4);
							}
							else if (iVar0 == Global_30723[4])
							{
								Function_338(4, 19);
							}
							if (StackVal == 1)
							{
								iVar0 = iVar0;
							}
							else if (StackVal == 2)
							{
								iVar0 = Global_29155[iVar010];
							}
							else
							{
								iVar0 = Global_29155[iVar010];
								iVar0 = Global_29155[iVar010];
							}
							if (iVar0 == Global_30621[0])
							{
								Function_124(363, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[1])
							{
								Function_124(364, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[2])
							{
								Function_124(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_336(iParam0) == 0)
			{
				if (Function_337(iParam0) == 1)
				{
					Function_124(458, 1, 0, 0);
					iVar0 = Function_385(iParam0);
					if (Function_319(iVar0))
					{
						if (iVar0 == Global_30668[2])
						{
							Function_338(2, 10);
						}
						else if (iVar0 == Global_30658[2])
						{
							Function_338(2, 11);
						}
						else if (iVar0 == Global_30640[2])
						{
							Function_338(2, 12);
						}
						else if (iVar0 == Global_30658[0])
						{
							Function_338(2, 13);
						}
						else if (iVar0 == Global_30658[3])
						{
							Function_338(2, 14);
						}
						else if (iVar0 == Global_30685[2])
						{
							Function_338(2, 15);
						}
						else if (iVar0 == Global_30685[1])
						{
							Function_338(2, 16);
						}
						else if (iVar0 == Global_30679[1])
						{
							Function_338(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_337(iParam0) == 1)
			{
				Function_124(400, 1, 0, 0);
			}
			switch (Function_385(iParam0))
			{
				case 0x00000001:
					Function_124(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_338(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_338(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_338(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_124(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_338(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_338(6, 9);
					}
					break;
				
				default:
					LOG_ERROR("Please insure this job case is taken care of and create a null case");
					break;
			}
			break;
	}
	return;
}

int Function_336(int iParam0) //Position: 0x1061D / 67101
{
	if (!Function_269(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[iParam011], 4) & 255;
}

int Function_337(int iParam0) //Position: 0x1063C / 67132
{
	if (!Function_269(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_12;
}

void Function_338(int iParam0, int iParam1) //Position: 0x10656 / 67158
{
	int iVar0;
	
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	iVar0 = SHIFT_LEFT(1, iParam1);
	(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || iVar0);
	return;
	return;
}

void Function_339(var uParam0, int iParam1) //Position: 0x106BD / 67261
{
	struct<4> Var0;
	
	if (!Function_267(iParam1))
	{
		return;
	}
	switch (Function_386(iParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_340(Function_385(iParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, uParam0, &Var0, Function_386(iParam1), Function_385(iParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, uParam0, "PROCEDURAL", Function_386(iParam1), iParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, uParam0, "LOCATION", Function_386(iParam1), iParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, uParam0, "MINIGAME", Function_386(iParam1), iParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, uParam0, "ACTIONAREA_EVENT", Function_386(iParam1), iParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, uParam0, "JOB", Function_386(iParam1), iParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_340(int iParam0) //Position: 0x107E1 / 67553
{
	char* cVar0[16];
	
	if (!Function_125())
	{
		strcpy(&cVar0, "miss", 16);
	}
	else
	{
		strcpy(&cVar0, "ziss", 16);
	}
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

void Function_341() //Position: 0x1081B / 67611
{
	PLAYSTAT_INT("HC_FIREBOTTLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 4, 1)));
	PLAYSTAT_INT("HC_DYNAMITE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 5, 1)));
	PLAYSTAT_INT("nHC_PISTOL", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 6, 1)));
	PLAYSTAT_INT("HC_REVOLVER", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 7, 1)));
	PLAYSTAT_INT("HC_REPEATER", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 8, 1)));
	PLAYSTAT_INT("HC_RIFLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 9, 1)));
	PLAYSTAT_INT("HC_SHOTGUN", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 10, 1)));
	PLAYSTAT_INT("HC_SNIPERRIFLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 11, 1)));
	PLAYSTAT_INT("HC_TOMAHAWK", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 12, 1)));
	PLAYSTAT_INT("HC_ANTITANK", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 13, 1)));
	PLAYSTAT_INT("HC_MONEY", Function_73(0));
	PLAYSTAT_INT("HC_FAME", Function_73(3));
	PLAYSTAT_INT("HC_HONOR", Function_73(1));
	return;
}

void Function_342() //Position: 0x10973 / 67955
{
	int iVar0;
	int iVar1;
	
	if (!Function_331(Global_6269))
	{
		return;
	}
	iVar0 = Function_73(24);
	iVar1 = Function_330(Global_6269);
	if (!Function_331(iVar0) && Function_343(iVar1) < 0)
	{
		Function_74(24, Global_6269, 0);
		Function_16(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_343(Function_330(iVar0)))
	{
		Function_74(24, Global_6269, 0);
		Function_16(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_343(int iParam0) //Position: 0x109F3 / 68083
{
	if (!Function_267(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

struct<24> Function_344(char* cParam0) //Position: 0x10A0D / 68109
{
	char* cVar0[24];
	
	strcpy(&cVar0, "Mission_", 24);
	switch (cParam0)
	{
		case 0x00000000:
		case 0x00000001:
			stradd(&cVar0, "Intro", 24);
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
		case 0x00000016:
			stradd(&cVar0, "Ranch", 24);
			break;
		
		case 0x00000008:
		case 0x00000009:
		case 0x00000015:
		case 0x00000017:
			stradd(&cVar0, "Marshal", 24);
			break;
		
		case 0x0000000A:
		case 0x0000000B:
		case 0x0000000F:
		case 0x00000010:
		case 0x00000011:
			stradd(&cVar0, "Merchant", 24);
			break;
		
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
			stradd(&cVar0, "Grave", 24);
			break;
		
		case 0x00000012:
		case 0x00000013:
		case 0x00000014:
			stradd(&cVar0, "Outlaws", 24);
			break;
		
		case 0x00000018:
		case 0x00000019:
			stradd(&cVar0, "Fort", 24);
			break;
		
		case 0x0000001A:
		case 0x0000001B:
		case 0x0000001C:
		case 0x0000001D:
		case 0x00000024:
			stradd(&cVar0, "MexArmy", 24);
			break;
		
		case 0x0000001E:
		case 0x0000001F:
		case 0x00000020:
		case 0x00000021:
			stradd(&cVar0, "Gun", 24);
			break;
		
		case 0x00000022:
		case 0x00000023:
		case 0x00000026:
		case 0x00000027:
			stradd(&cVar0, "MexGirl", 24);
			break;
		
		case 0x00000025:
		case 0x00000028:
		case 0x00000029:
			stradd(&cVar0, "Rebel", 24);
			break;
		
		case 0x0000002C:
		case 0x0000002D:
		case 0x0000002E:
			stradd(&cVar0, "Anthro", 24);
			break;
		
		case 0x0000002A:
		case 0x0000002B:
		case 0x0000002F:
		case 0x00000030:
			stradd(&cVar0, "FBI", 24);
			break;
		
		case 0x00000031:
		case 0x00000032:
		case 0x00000033:
		case 0x00000034:
		case 0x00000035:
		case 0x00000036:
		case 0x00000037:
		case 0x00000038:
		case 0x00000039:
			stradd(&cVar0, "Home", 24);
			break;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_345() //Position: 0x10C63 / 68707
{
	int iVar0;
	int iVar1;
	char* cVar2[64];
	int iVar18;
	int iVar19;
	int iVar20;
	
	iVar0 = 1;
	iVar1 = 0;
	if (!Global_30842[49])
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= Global_16474)
	{
		iVar0 = 0;
		while (StackVal <= iVar0)
		{
			strcpy(&cVar2, "Deed Count by Status:", 64);
			switch (iVar1)
			{
				case 0x00000000:
					stradd(&cVar2, "Pending,", 64);
					break;
				
				case 0x00000002:
					stradd(&cVar2, "Active,", 64);
					break;
				
				case 0x00000001:
					stradd(&cVar2, "About to Start,", 64);
					break;
				
				case 0x00000003:
					stradd(&cVar2, "Completed,", 64);
					break;
				
				case 0x00000004:
					stradd(&cVar2, "Completed (Cheated),", 64);
					break;
			}
			stradd(&cVar2, " ", 64);
			switch (iVar0)
			{
				case 0x00000001:
					stradd(&cVar2, "StoryMission,", 64);
					break;
				
				case 0x00000002:
					stradd(&cVar2, "ProcMission,", 64);
					break;
				
				case 0x00000003:
					stradd(&cVar2, "LocationMission,", 64);
					break;
				
				case 0x00000004:
					stradd(&cVar2, "nMinigame,", 64);
					break;
				
				case 0x00000006:
					stradd(&cVar2, "Job,", 64);
					break;
				
				default:
					straddi(&cVar2, iVar0, 64);
					break;
			}
			stradd(&cVar2, " ", 64);
			straddi(&cVar2, Global_16474[iVar18][iVar0], 64);
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 1;
	iVar0 = 0;
	while (iVar0 <= Global_13172)
	{
		if (!Global_13172[iVar011] != 0)
		{
			Function_346(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
			strcpy(&cVar2, "Deed:", 64);
			straddi(&cVar2, iVar0, 64);
			stradd(&cVar2, "n Mission ", 64);
			straddi(&cVar2, iVar19, 64);
			stradd(&cVar2, "  Quad ", 64);
			straddi(&cVar2, iVar18, 64);
			stradd(&cVar2, "  Type ", 64);
			straddi(&cVar2, iVar20, 64);
			stradd(&cVar2, "n  Status ", 64);
			straddi(&cVar2, StackVal, 64);
		}
		iVar0++;
	}
	return;
}

void Function_346(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x10EAA / 69290
{
	*uParam3 = iParam0 & 15;
	*uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

void Function_347() //Position: 0x10ED3 / 69331
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	Var0.f_72 = 0;
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

void Function_348(int iParam0, int iParam1, bool bParam2) //Position: 0x10F01 / 69377
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	char* cVar10[16];
	int iVar14;
	int iVar15;
	struct<4> Var16;
	
	if (!Function_331(iParam0))
	{
		return;
	}
	if (!bParam2)
	{
		iVar14 = Function_350(iParam0);
		Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
		if (Global_13172[iParam111].f_32 != 0.0f || Global_34165.f_140 > Global_13172[iParam111].f_32)
		{
			Global_13172[iParam111].f_32 = Global_34165.f_140;
			cVar10 = { StackVal, StackVal, StackVal, Function_340(iParam0) };
			stradd(&cVar10, "_Float2", 16);
			UPDATE_PROFILE_STAT(&cVar10, Global_34165.f_140, 1);
		}
		switch (iVar14)
		{
			case 0x00000000:
				iVar0 = (Function_73(42) - Global_34165.f_116);
				iVar1 = (Function_73(27) - Global_34165.f_120);
				fVar7 = (TO_FLOAT(iVar0) / TO_FLOAT(iVar1));
				if (bVar0 >= Global_13172[iParam111].f_20)
				{
					Global_13172[iParam111].f_20 = bVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_340(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				iVar2 = (CEIL(Function_30(49)) - Global_34165.f_124);
				iVar3 = (Function_73(49) - Global_34165.f_128);
				fVar8 = (TO_FLOAT(iVar3) / TO_FLOAT(iVar2));
				if (fVar8 < Global_13172[iParam111].f_28)
				{
					Global_13172[iParam111].f_28 = fVar8;
					cVar10 = { StackVal, StackVal, StackVal, Function_340(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, fVar8, 1);
				}
				break;
			
			case 0x00000002:
				iVar4 = (Function_73(355) - Global_34165.f_116);
				iVar5 = Global_34165.f_124;
				iVar6 = Global_34165.f_128;
				fVar9 = (TO_FLOAT(iVar6) / TO_FLOAT(iVar5));
				if (iVar4 >= Global_13172[iParam111].f_20)
				{
					Global_13172[iParam111].f_20 = iVar4;
					cVar10 = { StackVal, StackVal, StackVal, Function_340(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(iVar4), 1);
				}
				if (fVar9 < Global_13172[iParam111].f_28)
				{
					Global_13172[iParam111].f_28 = fVar9;
					cVar10 = { StackVal, StackVal, StackVal, Function_340(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, fVar9, 1);
				}
				fVar8 = fVar9;
				bVar0 = bVar4;
				break;
		}
		iVar15 = Function_349(iParam0, iVar14, Global_34165.f_140, fVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_44(50, 1, 0);
			if (iVar14 == 0)
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(28))
				{
					AWARD_ACHIEVEMENT(28);
				}
			}
		}
		Var16 = { StackVal, StackVal, StackVal, *(&Global_3422[iParam040] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var16 = { StackVal, StackVal, StackVal, Function_131(iParam0) };
		}
		SET_JOURNAL_ENTRY_TROPHY(STRING_TO_HASH(&Var16), iVar15);
	}
	Global_34165.f_136 = 0.0f;
	Global_34165.f_140 = 0.0f;
	Global_34165.f_116 = 0;
	Global_34165.f_120 = 0;
	Global_34165.f_124 = 0;
	Global_34165.f_128 = 0;
	return;
}

int Function_349(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x1119D / 70045
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (fParam2 >= (*&Global_5743[iParam09] + 12)[0])
	{
		iVar0 = 3;
	}
	else if (fParam2 >= (*&Global_5743[iParam09] + 12)[1])
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 1;
	}
	fParam3 = (fParam3 * 100.0f);
	switch (iParam1)
	{
		case 0x00000000:
			if (fParam3 <= Global_5743[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (fParam3 <= Global_5743[iParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			if (iParam4 > (*&Global_5743[iParam09] + 24)[0])
			{
				iVar2 = 3;
			}
			else if (iParam4 > (*&Global_5743[iParam09] + 24)[1])
			{
				iVar2 = 2;
			}
			else
			{
				iVar2 = 1;
			}
			break;
		
		case 0x00000001:
			if (fParam3 <= Global_5743[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (fParam3 <= Global_5743[iParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			iVar2 = 3;
			iVar3 = (iVar0 + iVar1);
			if (iVar3 > 6)
			{
				return 1;
			}
			if (iVar3 > 4)
			{
				return 2;
			}
			return 3;
			break;
		
		case 0x00000002:
			if (fParam3 <= Global_5743[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (fParam3 <= Global_5743[iParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			if (iParam4 > (*&Global_5743[iParam09] + 24)[0])
			{
				iVar2 = 3;
			}
			else if (iParam4 > (*&Global_5743[iParam09] + 24)[1])
			{
				iVar2 = 2;
			}
			else
			{
				iVar2 = 1;
			}
			break;
		
		default:
			iVar1 = 3;
			iVar2 = 3;
			if (iVar0 == 3)
			{
				return 1;
			}
			if (iVar0 == 2)
			{
				return 2;
			}
			return 3;
			break;
	}
	iVar3 = ((iVar0 + iVar1) + iVar2);
	if (iVar3 > 9)
	{
		return 1;
	}
	if (iVar3 > 6)
	{
		return 2;
	}
	return 3;
}

int Function_350(int iParam0) //Position: 0x11365 / 70501
{
	switch (iParam0)
	{
		case 0x00000002:
		case 0x00000034:
		case 0x00000035:
		case 0x00000036:
		case 0x00000032:
			return 1;
			break;
		
		case 0x00000007:
		case 0x00000031:
		case 0x00000037:
			return 2;
			break;
		
		case 0x00000004:
		case 0x00000003:
		case 0x00000016:
		case 0x00000006:
		case 0x00000005:
		case 0x0000000B:
		case 0x00000011:
		case 0x0000000F:
		case 0x0000000C:
		case 0x00000038:
		case 0x00000033:
		case 0x00000001:
			return 3;
			break;
	}
	return 0;
}

var Function_351() //Position: 0x113FA / 70650
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_352(int iParam0) //Position: 0x1141F / 70687
{
	if (!Function_331(iParam0))
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	switch (iParam0)
	{
		case 0x0000000C:
			Function_44(25, 1, 0);
			break;
		
		case 0x0000000B:
			Function_44(25, 1, 0);
			Function_72(1, 1);
			break;
		
		case 0x00000015:
			Function_72(50, 1);
			Function_44(250, 1, 0);
			Function_10(200, 1, 0);
			break;
		
		case 0x0000000A:
			Function_44(75, 1, 0);
			Function_10(100, 1, 0);
			break;
		
		case 0x00000017:
			Function_44(150, 1, 0);
			break;
		
		case 0x00000018:
			Function_72(50, 1);
			Function_44(150, 1, 0);
			break;
		
		case 0x00000007:
			Function_72(5, 1);
			Function_10(100, 1, 0);
			break;
		
		case 0x00000016:
			Function_44(75, 1, 0);
			Function_10(150, 1, 0);
			break;
		
		case 0x00000011:
			Function_72(5, 1);
			Function_44(200, 1, 0);
			break;
		
		case 0x00000001:
			Function_44(150, 1, 0);
			break;
		
		case 0x00000006:
			Function_10(150, 1, 0);
			break;
		
		case 0x00000010:
			Function_72(25, 1);
			Function_44(75, 1, 0);
			break;
		
		case 0x0000000D:
			Function_72(10, 1);
			Function_44(75, 1, 0);
			break;
		
		case 0x00000012:
			Function_44(50, 1, 0);
			Function_10(100, 1, 0);
			break;
		
		case 0x00000014:
			Function_44(150, 1, 0);
			break;
		
		case 0x00000003:
			Function_44(20, 1, 0);
			break;
		
		case 0x00000004:
			Function_10(50, 1, 0);
			break;
		
		case 0x00000008:
			Function_72(20, 1);
			Function_44(75, 1, 0);
			Function_10(100, 1, 0);
			break;
		
		case 0x00000009:
			Function_72(25, 1);
			Function_44(150, 1, 0);
			Function_10(100, 1, 0);
			break;
		
		case 0x0000000E:
			Function_72(10, 1);
			Function_44(150, 1, 0);
			Function_10(100, 1, 0);
			break;
		
		case 0x00000013:
			Function_44(250, 1, 0);
			break;
		
		case 0x00000002:
			Function_10(50, 1, 0);
			break;
		
		case 0x00000005:
			Function_10(100, 1, 0);
			Function_72(5, 1);
			break;
		
		case 0x0000000F:
			Function_72(3, 1);
			Function_44(200, 1, 0);
			break;
		
		case 0x00000025:
			Function_10(125, 1, 0);
			Function_44(150, 1, 0);
			break;
		
		case 0x0000001F:
			Function_72(50, 1);
			Function_44(100, 1, 0);
			Function_10(125, 1, 0);
			break;
		
		case 0x0000001A:
			Function_72(50, 1);
			Function_44(250, 1, 0);
			break;
		
		case 0x0000001D:
			Function_72(75, 1);
			Function_44(200, 1, 0);
			break;
		
		case 0x00000021:
			Function_44(150, 1, 0);
			break;
		
		case 0x00000022:
			Function_44(75, 1, 0);
			Function_10(100, 1, 0);
			break;
		
		case 0x00000024:
			Function_44(250, 1, 0);
			Function_10(50, 1, 0);
			break;
		
		case 0x00000020:
			Function_44(75, 1, 0);
			Function_10(50, 1, 0);
			break;
		
		case 0x00000023:
			Function_44(200, 1, 0);
			Function_10(50, 1, 0);
			break;
		
		case 0x0000001E:
			Function_44(75, 1, 0);
			Function_10(100, 1, 0);
			break;
		
		case 0x00000019:
			Function_44(150, 1, 0);
			break;
		
		case 0x0000001B:
			Function_72(50, 1);
			Function_44(250, 1, 0);
			break;
		
		case 0x0000001C:
			Function_72(100, 1);
			Function_44(300, 1, 0);
			break;
		
		case 0x00000026:
			Function_44(200, 1, 0);
			Function_10(125, 1, 0);
			break;
		
		case 0x00000027:
			Function_44(300, 1, 0);
			Function_10(125, 1, 0);
			break;
		
		case 0x00000028:
			Function_44(300, 1, 0);
			Function_10(125, 1, 0);
			break;
		
		case 0x00000029:
			Function_44(300, 1, 0);
			Function_10(125, 1, 0);
			break;
		
		case 0x00000030:
			Function_44(500, 1, 0);
			Function_10(250, 1, 0);
			break;
		
		case 0x0000002B:
			Function_44(150, 1, 0);
			Function_10(125, 1, 0);
			break;
		
		case 0x0000002E:
			Function_10(25, 1, 0);
			Function_72(100, 1);
			break;
		
		case 0x0000002A:
			Function_44(150, 1, 0);
			Function_10(25, 1, 0);
			break;
		
		case 0x0000002D:
			Function_10(25, 1, 0);
			break;
		
		case 0x0000002C:
			Function_10(25, 1, 0);
			break;
		
		case 0x0000002F:
			break;
		
		case 0x00000037:
			break;
		
		case 0x00000034:
			Function_10(150, 1, 0);
			break;
		
		case 0x00000031:
			Function_10(150, 1, 0);
			Function_72(100, 1);
			break;
		
		case 0x00000035:
			Function_10(150, 1, 0);
			break;
		
		case 0x00000036:
			Function_10(150, 1, 0);
			break;
		
		case 0x00000038:
			Function_10(150, 1, 0);
			Function_72(100, 1);
			break;
		
		case 0x00000032:
			Function_10(150, 1, 0);
			break;
		
		case 0x00000033:
			Function_10(150, 1, 0);
			break;
		
		case 0x00000039:
			break;
		
		default:
			break;
	}
	return;
}

void Function_353(int iParam0, var uParam1, bool bParam2) //Position: 0x118DA / 71898
{
	struct<4> Var0;
	
	if (!Function_331(iParam0))
	{
		return;
	}
	if (Global_3381 && Global_6267 != iParam0)
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000001:
			Function_377(4, bParam2, 0);
			if (*uParam1 <= 1)
			{
				*uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_375(Global_30640[0]);
			Function_375(Global_30679[1]);
			break;
		
		case 0x00000002:
			if (*uParam1 <= 2)
			{
				*uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_373(8, bParam2, 4);
			EQUIP_ACCESSORY(Global_34573, 0, 1);
			Function_375(Global_30668[0]);
			Function_365(0);
			Function_363(2, 1);
			Function_363(0, 1);
			Function_363(1, 1);
			break;
		
		case 0x00000003:
			Function_375(Global_30668[0]);
			break;
		
		case 0x00000004:
			Function_375(Global_30668[0]);
			Function_375(Global_30640[0]);
			Function_361(0, 1);
			Function_361(15, 1);
			Function_361(9, 1);
			Function_361(12, 1);
			Function_361(16, 1);
			Function_363(3, 1);
			break;
		
		case 0x00000005:
			Function_375(Global_30668[0]);
			break;
		
		case 0x00000006:
			Function_373(21, bParam2, 4);
			Function_375(Global_30668[0]);
			Function_363(39, 1);
			break;
		
		case 0x00000007:
			Function_375(Global_30668[0]);
			break;
		
		case 0x00000016:
			Function_375(Global_30668[0]);
			break;
		
		case 0x00000008:
			if (!bParam2)
			{
				if (IS_PS3() || Function_119())
				{
					if (!Function_115(4))
					{
						Function_106(4, 0, 0, 1, 0);
					}
				}
			}
			Function_375(Global_30640[0]);
			Function_375(Global_30640[10]);
			break;
		
		case 0x00000009:
			Function_375(Global_30640[0]);
			Function_375(Global_30668[2]);
			Function_318(&(Global_29008[Global_30668[2]]), 32768);
			Function_317(&(Global_29008[Global_30668[2]]), 256);
			break;
		
		case 0x00000015:
			Function_373(9, bParam2, 4);
			Function_375(Global_30640[0]);
			break;
		
		case 0x00000017:
			Function_375(Global_30640[0]);
			Function_375(Global_30658[0]);
			Function_318(&(Global_29008[Global_30658[0]]), 32768);
			Function_317(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_375(Global_30640[0]);
			break;
		
		case 0x0000000B:
			if (*uParam1 <= 3)
			{
				*uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_375(Global_30640[0]);
			Function_375(Global_30640[1]);
			break;
		
		case 0x0000000F:
			Function_375(Global_30640[1]);
			Function_375(Global_30679[0]);
			break;
		
		case 0x00000010:
			Function_375(Global_30679[0]);
			Function_375(Global_30658[5]);
			break;
		
		case 0x00000011:
			Function_375(Global_30658[5]);
			Function_375(Global_30658[1]);
			break;
		
		case 0x0000000C:
			Function_373(21, bParam2, 4);
			Function_375(Global_30640[4]);
			Function_375(Global_30658[4]);
			Function_360(&Global_76847, 0x2000000);
			Function_360(&Global_76847, 0x4000000);
			Function_360(&Global_76847, 4096);
			Function_360(&Global_76847, 8);
			Function_360(&Global_76847, 8388608);
			Function_360(&Global_76847, 524288);
			Function_360(&Global_76847, 1048576);
			break;
		
		case 0x0000000D:
			Function_375(Global_30640[4]);
			Function_375(Global_30658[0]);
			break;
		
		case 0x0000000E:
			Function_317(&(Global_29008[Global_30640[4]]), 256);
			Function_375(Global_30640[4]);
			Function_375(Global_30658[0]);
			Function_318(&(Global_29008[Global_30658[0]]), 32768);
			Function_317(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x00000012:
			Function_375(Global_30640[0]);
			Function_375(Global_30640[5]);
			Function_373(16, bParam2, 4);
			break;
		
		case 0x00000013:
			Function_375(Global_30658[3]);
			Function_318(&(Global_29008[Global_30658[3]]), 32768);
			Function_317(&(Global_29008[Global_30658[3]]), 256);
			break;
		
		case 0x00000014:
			Function_373(9, bParam2, 4);
			Function_375(Global_30668[1]);
			break;
		
		case 0x00000018:
			Function_318(&(Global_29008[Global_30679[1]]), 32768);
			Function_375(Global_30679[1]);
			break;
		
		case 0x00000019:
			Function_373(12, bParam2, 4);
			Function_317(&(Global_29008[Global_30679[1]]), 256);
			Function_375(Global_30668[3]);
			Function_375(Global_30693[0]);
			Function_375(Global_30685[0]);
			Function_365(4);
			Function_361(13, 1);
			Function_361(1, 1);
			Function_361(18, 1);
			Function_363(34, 1);
			Function_363(44, 1);
			Function_363(47, 1);
			Global_26031[10] = 1;
			break;
		
		case 0x0000001E:
			Function_373(5, bParam2, 4);
			if (*uParam1 <= 4)
			{
				*uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_375(Global_30693[0]);
			break;
		
		case 0x0000001F:
			Function_375(Global_30693[0]);
			break;
		
		case 0x00000020:
			Function_375(Global_30693[0]);
			Function_375(Global_30707[0]);
			break;
		
		case 0x00000021:
			Function_375(Global_30693[0]);
			break;
		
		case 0x0000001A:
			Function_375(Global_30685[0]);
			Function_375(Global_30693[0]);
			Function_375(Global_30693[1]);
			Function_375(Global_30707[2]);
			break;
		
		case 0x0000001B:
			Function_373(23, bParam2, 3);
			Function_361(23, 1);
			Function_375(Global_30685[0]);
			Function_375(Global_30685[2]);
			Function_318(&(Global_29008[Global_30685[2]]), 32768);
			Function_317(&(Global_29008[Global_30685[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_373(19, bParam2, 4);
			Function_375(Global_30685[0]);
			Function_375(Global_30707[3]);
			break;
		
		case 0x0000001D:
			Function_373(24, bParam2, 3);
			Function_361(24, 1);
			Function_375(Global_30685[0]);
			break;
		
		case 0x00000024:
			Function_375(Global_30685[0]);
			Function_375(Global_30685[3]);
			break;
		
		case 0x00000022:
			Function_375(Global_30693[12]);
			Function_375(Global_30685[1]);
			break;
		
		case 0x00000023:
			Function_375(Global_30693[12]);
			Function_375(Global_30707[1]);
			break;
		
		case 0x00000025:
			Function_373(25, bParam2, 10);
			Function_375(Global_30693[2]);
			break;
		
		case 0x00000026:
			Function_375(Global_30693[12]);
			break;
		
		case 0x00000027:
			Function_375(Global_30693[12]);
			break;
		
		case 0x00000028:
			Function_373(13, bParam2, 4);
			Function_375(Global_30693[2]);
			Function_375(Global_30707[1]);
			break;
		
		case 0x00000029:
			if (!bParam2)
			{
				if (!Function_115(8))
				{
					Function_106(8, 0, 0, 1, 0);
				}
			}
			Function_375(Global_30685[0]);
			Function_365(9);
			Function_361(7, 1);
			Function_361(11, 1);
			Function_361(3, 1);
			Function_361(20, 1);
			Function_363(57, 1);
			break;
		
		case 0x0000002A:
			Function_373(2, bParam2, 4);
			Function_375(Global_30717[0]);
			Function_375(Global_30717[3]);
			break;
		
		case 0x0000002B:
			Function_375(Global_30717[0]);
			break;
		
		case 0x0000002C:
			Function_375(Global_30717[0]);
			Function_375(Global_30723[0]);
			break;
		
		case 0x0000002D:
			Function_375(Global_30717[0]);
			break;
		
		case 0x0000002E:
			Function_375(Global_30717[0]);
			break;
		
		case 0x0000002F:
			Function_375(Global_30717[0]);
			break;
		
		case 0x00000030:
			Function_373(17, bParam2, 4);
			Function_375(Global_30723[0]);
			Function_375(Global_30717[0]);
			break;
		
		case 0x00000031:
			if (!bParam2)
			{
				if (!Function_117(15))
				{
					Function_76(15, 0, 1);
				}
			}
			Function_338(2, 26);
			Function_317(&(Global_29008[Global_30717[1]]), 256);
			Function_365(11);
			Function_375(Global_30717[1]);
			Function_375(Global_30668[0]);
			break;
		
		case 0x00000032:
			Function_375(Global_30717[1]);
			break;
		
		case 0x00000033:
			Function_375(Global_30717[1]);
			Function_375(Global_30717[0]);
			break;
		
		case 0x00000034:
			Function_375(Global_30717[1]);
			break;
		
		case 0x00000035:
			Function_375(Global_30717[1]);
			break;
		
		case 0x00000036:
			Function_375(Global_30717[1]);
			break;
		
		case 0x00000037:
			Function_375(Global_30717[1]);
			break;
		
		case 0x00000038:
			Function_375(Global_30717[1]);
			break;
		
		case 0x00000039:
			Function_375(Global_30717[1]);
			Function_354(11);
			Function_365(12);
			Global_16537[1121].f_40 = 0;
			Function_363(56, 1);
			if (!bParam2)
			{
				if (!Function_115(9))
				{
					Function_106(9, 0, 0, 0, 0);
				}
				if (!Function_115(10))
				{
					Function_106(10, 0, 0, 1, 0);
				}
			}
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_340(iParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

void Function_354(int iParam0) //Position: 0x121D8 / 74200
{
	bool bVar0;
	
	if (!Function_97(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_359(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_359(Global_16537[iParam021].f_72, 0);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(Global_16537[iParam021].f_80), false);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_76))
	{
		if (!DECOR_CHECK_EXIST(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse"))
		{
			DECOR_SET_BOOL(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse", 1);
		}
	}
	switch (Global_16537[iParam021].f_40)
	{
		case 0x00000002:
			Global_16537[iParam021].f_40 = 6;
			Function_355(Global_16537[iParam021].f_48, 16, 0, 0);
			bVar0 = LOCATE_NAMED_POINT(Global_16537[iParam021], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(bVar0))
			{
				DECOR_SET_BOOL(bVar0, "PlayerHouse_NoHorse", 1);
			}
			if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
			{
				DECOR_REMOVE(Global_16537[iParam021].f_80, "SavingAtBedAllowed");
			}
			break;
		
		default:
			return;
			break;
	}
	return;
}

void Function_355(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x12347 / 74567
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	
	if (iParam1 == 23 && iParam1 == 24)
	{
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal && Global_8723[iVar04] != iParam0 != iParam1)
			{
				Global_8723[iVar04] = 4294967294;
				Global_8723[iVar04].f_4 = 0;
				Global_8723[iVar04].f_8 = 0;
				if (IS_BLIP_VALID(Global_9724[iVar0]))
				{
					REMOVE_BLIP(Global_9724[iVar0]);
				}
				return;
			}
			iVar0++;
		}
	}
	else
	{
		Function_357(Function_358(iParam2, 0.0f, iParam3));
		vVar4 = { StackVal, StackVal, Function_357(Function_358(iParam2, 0.0f, iParam3)) };
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal == iParam1)
			{
				Function_357(StackVal);
				vVar1 = { StackVal, StackVal, Function_357(StackVal) };
				if (Function_356(StackVal, StackVal, StackVal, StackVal, vVar1, vVar4))
				{
					Global_8723[iVar04] = 4294967294;
					Global_8723[iVar04].f_4 = 0;
					Global_8723[iVar04].f_8 = 0;
					if (IS_BLIP_VALID(Global_9724[iVar0]))
					{
						REMOVE_BLIP(Global_9724[iVar0]);
					}
					return;
				}
			}
			iVar0++;
		}
	}
}

bool Function_356(vector3 vParam0, vector3 vParam3) //Position: 0x1244D / 74829
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_357(int iParam0) //Position: 0x1247A / 74874
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	
	iVar3 = iParam0 & 32767;
	iVar4 = SHIFT_RIGHT(iParam0, 15) & 32767;
	vVar0.x = TO_FLOAT(iVar3);
	vVar0.f_8 = TO_FLOAT(iVar4);
	if (iParam0 & 1073741824 == 0)
	{
		vVar0.x = (vVar0.x * -1.0f);
	}
	if ((iParam0 && 2147483648) == 0)
	{
		vVar0.f_8 = (vVar0.z * -1.0f);
	}
	return StackVal, StackVal, vVar0;
}

var Function_358(vector3 vParam0) //Position: 0x124D1 / 74961
{
	int iVar0;
	
	iVar0 = (ROUND(FABS(vParam0.x)) & 32767 || SHIFT_LEFT(ROUND(FABS(vParam0.z)) & 32767, 15));
	if (vParam0.x < 0.0f)
	{
		iVar0 |= 1073741824;
	}
	if (vParam0.z < 0.0f)
	{
		iVar0 = (iVar0 || 2147483648);
	}
	return iVar0;
}

void Function_359(bool bParam0, int iParam1) //Position: 0x1251F / 75039
{
	if (!IS_DOOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_BOOL(bParam0, "lockMe", iParam1);
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

void Function_360(var uParam0, int iParam1) //Position: 0x12573 / 75123
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

int Function_361(int iParam0, int iParam1) //Position: 0x12582 / 75138
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_59354[iParam08].f_24 = iParam1;
	Function_362(iParam0, iParam1);
	Function_34(Global_34573, 1, 4, 1);
	return 1;
}

int Function_362(int iParam0, int iParam1) //Position: 0x125F5 / 75253
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_363(int iParam0, int iParam1) //Position: 0x12651 / 75345
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_59675[iParam08].f_24 = iParam1;
	Function_364(iParam0, iParam1);
	Function_34(Global_34573, 1, 4, 1);
	return 1;
}

int Function_364(int iParam0, int iParam1) //Position: 0x126C2 / 75458
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

void Function_365(int iParam0) //Position: 0x1271C / 75548
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_97(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_372(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_372(Global_16537[iParam021].f_72, 0);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(Global_16537[iParam021].f_80), true);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_76))
	{
		if (DECOR_CHECK_EXIST(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse"))
		{
			DECOR_REMOVE(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse");
		}
	}
	switch (Global_16537[iParam021].f_40)
	{
		case 0x00000002:
			Function_124(468, 1, 0, 0);
			Function_338(6, (16 + iParam0));
			Global_16537[iParam021].f_40 = 3;
			Function_130("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_355(Global_16537[iParam021].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_106(14, 1, 0, 0, 0);
				Function_366(14, 1, 0, 0, 0);
			}
			if (!Function_104(0, 0, 1, 1))
			{
				Function_79(1);
				Function_78(1, 6);
			}
			else
			{
				Function_77();
			}
			bVar0 = LOCATE_NAMED_POINT(Global_16537[iParam021], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(bVar0))
			{
				DECOR_REMOVE(bVar0, "PlayerHouse_NoHorse");
			}
			if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
			{
				DECOR_SET_BOOL(Global_16537[iParam021].f_80, "SavingAtBedAllowed", 1);
			}
			break;
		
		case 0x00000001:
			bVar1 = LOCATE_NAMED_POINT(Global_16537[iParam021], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(bVar1))
			{
				DECOR_REMOVE(bVar1, "PlayerHouse_NoHorse");
			}
			if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
			{
				DECOR_SET_BOOL(Global_16537[iParam021].f_80, "SavingAtBedAllowed", 1);
			}
			Global_16537[iParam021].f_40 = 4;
			Function_130("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_124(468, 1, 0, 0);
			Global_16537[iParam021].f_40 = 3;
			Function_338(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_366(bool bParam0, int iParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x129C9 / 76233
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_118(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_114(3) || uParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_116(bParam0, 2))
	{
		Function_124(456, 1, 0, 0);
		Function_105(bParam0, 2);
		if (!bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_130(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_112(bParam0, iParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || iParam1);
		Function_105(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_104(0, 0, 1, 1))
			{
				Function_79(1);
				Function_78(1, 0);
			}
			else
			{
				Function_77();
			}
		}
		Function_108(bParam0);
		if (StackVal && !Function_102(((((!Function_107() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_102((((Function_107() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_125())
		{
			if (!Function_40(Global_76846, 2))
			{
				Function_34(Global_34573, 2, 1, 0);
			}
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_368();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_367(3, iParam1);
				break;
			
			case 0x00000005:
				Function_367(3, SHIFT_LEFT(iParam1, 6));
				break;
			
			case 0x00000006:
				Function_367(3, SHIFT_LEFT(iParam1, 12));
				break;
			
			case 0x00000007:
				Function_367(3, SHIFT_LEFT(iParam1, 18));
				break;
			
			case 0x00000008:
				Function_367(3, SHIFT_LEFT(iParam1, 24));
				break;
			
			case 0x00000009:
				Function_367(2, SHIFT_LEFT(iParam1, 18));
				break;
			
			case 0x0000000A:
				Function_338(2, 24);
				break;
			
			case 0x00000003:
				Function_338(2, 25);
				break;
			
			case 0x0000000F:
				Function_338(2, 26);
				break;
			
			case 0x0000000D:
				Function_338(2, 27);
				break;
			
			case 0x0000000E:
				Function_338(2, 28);
				break;
			}
	}
}

void Function_367(int iParam0, int iParam1) //Position: 0x12C5F / 76895
{
	if (iParam0 < 16 || iParam0 != 4294967295)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	if (iParam1 > 0)
	{
		(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || iParam1);
	}
	return;
	return;
}

void Function_368() //Position: 0x12CCA / 77002
{
	if (Function_118(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_371(Global_28180);
			Global_28180.f_8 = Function_369(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_371(Global_28180);
			Global_28180.f_8 = Function_369(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_369(int iParam0, int iParam1) //Position: 0x12D45 / 77125
{
	vector3 vVar0;
	struct<9> Var3;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	
	iVar15 = 1;
	iVar16 = 1;
	iVar17 = 1;
	iVar18 = 1;
	iVar19 = 1;
	switch (iParam0)
	{
		case 0x00000000:
			break;
		
		case 0x00000004:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_329(6, 0) || Function_329(12, 0))
					{
						bVar6 = StackVal;
					}
					strcpy(&cVar7, "out_dnd_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip4", 32);
					break;
				
				case 0x00000010:
					vVar0 = { -2177.057f, 16.426f, 2626.285f };
					vVar3 = { 400.0f, 400.0f, 400.0f };
					strcpy(&cVar7, "out_dnd_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip6", 32);
					break;
			}
			break;
		
		case 0x00000005:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					vVar3 = { 400.0f, 400.0f, 400.0f };
					strcpy(&cVar7, "out_rustler_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip6", 32);
					break;
			}
			break;
		
		case 0x00000006:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_370(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_329(5, 0))
					{
						vVar0 = { -4120.147f, 18.356f, 3039.531f };
						vVar3 = { 500.0f, 500.0f, 500.0f };
						iVar16 = 0;
					}
					strcpy(&cVar7, "out_treasur_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip6", 32);
					break;
			}
			break;
		
		case 0x00000007:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip4", 32);
					break;
				
				case 0x00000010:
					vVar0 = { -4178.186f, 32.616f, 4582.207f };
					vVar3 = { 500.0f, 500.0f, 500.0f };
					strcpy(&cVar7, "out_bandito_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip6", 32);
					break;
			}
			break;
		
		case 0x00000008:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_370(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_370(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_370(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_370(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_329(26, 0))
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					strcpy(&cVar7, "out_rebel_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_370(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_370(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_370(27) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					strcpy(&cVar7, "out_rebel_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip6", 32);
					break;
			}
			break;
		
		case 0x00000009:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_370(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_370(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_370(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_370(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_329(17, 0) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					strcpy(&cVar7, "out_military_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip6", 32);
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip4", 32);
					break;
				
				case 0x00000010:
					if (Function_370(19) && iVar19)
					{
						vVar0 = { -1708.36f, 46.18f, 2175.89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_329(6, 0) && Function_370(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_370(17) && iVar19)
					{
						vVar0 = { -1687.208f, 53.208f, 2140.491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_329(9, 0) && Function_370(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_370(15) && iVar19)
					{
						vVar0 = { -1709.084f, 55.216f, 2104.631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_329(8, 0) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					strcpy(&cVar7, "out_gun_blip5", 32);
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_suit_blip1", 32);
					break;
			}
			break;
		
		default:
			break;
	}
	if (Function_94(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_94(StackVal, StackVal, vVar3))
			{
				if (GET_OBJECT_TYPE(bVar6) == 9)
				{
					GET_VOLUME_SCALE(bVar6, &vVar3);
				}
				else
				{
					vVar3 = { 200.0f, 200.0f, 200.0f };
				}
			}
		}
	}
	if (!Function_94(StackVal, StackVal, vVar3))
	{
		bVar20 = ADD_BLIP_FOR_COORD(&vVar0, 440, 0f, 2, 0);
		SET_BLIP_SCALE(bVar20, ((vVar3.x + vVar3.z) / 2.0f));
		SET_BLIP_COLOR(bVar20, 0.58f, 0.35f, 0.72f, 0.5f);
		SET_BLIP_PRIORITY(bVar20, 3);
		SET_BLIP_NAME(bVar20, &cVar7);
		return bVar20;
	}
	return "";
}

bool Function_370(int iParam0) //Position: 0x13936 / 80182
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_371(int iParam0) //Position: 0x1394B / 80203
{
	int iVar0;
	int iVar1;
	
	if (!Function_118(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_27774[iParam013].f_28)
	{
		if ((StackVal && iVar0) == 0)
		{
			return iVar0;
		}
		iVar0 *= 2;
		iVar1++;
	}
	return 0;
}

void Function_372(bool bParam0, int iParam1) //Position: 0x1399A / 80282
{
	if (!IS_DOOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_BOOL(bParam0, "unlockMe", iParam1);
	if (DECOR_CHECK_EXIST(bParam0, "lockMe"))
	{
		DECOR_REMOVE(bParam0, "lockMe");
	}
	if (IS_DOOR_LOCKED(bParam0))
	{
		SET_DOOR_LOCK(bParam0, 0);
	}
	return;
}

void Function_373(bool bParam0, bool bParam1, int iParam2) //Position: 0x139EB / 80363
{
	float fVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		fVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(iParam2));
		if (Function_374(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), fVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(Global_34573, bParam0))
			{
				Function_377(bParam0, 0, 0);
			}
			else
			{
				SET_WEAPONENUM_LOCKED(bParam0, 0);
			}
			if (Global_3381 && iParam2 != 0)
			{
				iParam2 = 2;
			}
		}
	}
	return;
}

bool Function_374(int iParam0, int iParam1) //Position: 0x13A59 / 80473
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_375(int iParam0) //Position: 0x13A6C / 80492
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_314(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_318(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_124(473, 1, 0, 0);
		iVar0 = Function_376(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_124(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_124(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_124(476, 1, 0, 0);
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
		Function_338(iVar2, iVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_338(7, 30);
	}
	if (Function_19(473) <= Function_30(473))
	{
		if (!Function_129())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

int Function_376(int iParam0) //Position: 0x13B6B / 80747
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_319(iParam0))
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

int Function_377(bool bParam0, bool bParam1, int iParam2) //Position: 0x13BC3 / 80835
{
	if (!Function_378(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_121(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_121(), bParam0, 1.0f, iParam2, 1);
		return 1;
	}
	if (bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_121(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, iParam2);
		return 1;
	}
	return 1;
}

bool Function_378(int iParam0) //Position: 0x13C1A / 80922
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_379(int iParam0) //Position: 0x13C2C / 80940
{
	if (iParam0->f_128 & 114688 == 0)
	{
		return;
	}
	if (iParam0->f_128 & 16384 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(0))
		{
			ENABLE_WEATHER_SPHERE(0, 0);
		}
	}
	else if (iParam0->f_128 & 32768 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(1))
		{
			ENABLE_WEATHER_SPHERE(1, 0);
		}
	}
	else if (iParam0->f_128 & 65536 >= 0)
	{
		if (StackVal == 0)
		{
			Function_380(4, 0, 0);
		}
	}
	return;
}

void Function_380(int iParam0, int iParam1, int iParam2) //Position: 0x13C93 / 81043
{
	int iVar0;
	
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
		iVar0 = MAKE_TIME_OF_DAY(iParam0, iParam1, iParam2);
		Function_381(Global_16524, iVar0, 1);
	}
	return;
}

void Function_381(int iParam0, int iParam1, bool bParam2) //Position: 0x13D79 / 81273
{
	int iVar0;
	
	Function_384(iParam0);
	Function_383(iParam1);
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
	SET_WEATHER(iParam0, iParam1);
	Function_382();
	Global_16524.f_40 = StackVal;
	Global_16524.f_44 = GET_TIME_OF_DAY();
	Global_16524.f_48 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_16524 + 48, 0, 0, GET_MINUTES_FROM_TIME_OF_DAY(iParam1), 0);
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

void Function_382() //Position: 0x13EF2 / 81650
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_383(bool bParam0) //Position: 0x13EFE / 81662
{
	PRINTSTRING("Day ");
	PRINTINT(GET_DAY(iParam0));
	PRINTSTRING(": ");
	PRINTINT(GET_HOUR(bParam0));
	PRINTSTRING(":");
	PRINTINT(GET_MINUTE(bParam0));
	PRINTSTRING(":");
	PRINTINT(GET_SECOND(bParam0));
	return;
}

void Function_384(int iParam0) //Position: 0x13F44 / 81732
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

int Function_385(int iParam0) //Position: 0x13F8A / 81802
{
	if (!Function_269(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[iParam011], 12) & 255;
}

int Function_386(int iParam0) //Position: 0x13FAA / 81834
{
	if (!Function_269(iParam0))
	{
		return 0;
	}
	return Global_13172[iParam011] & 15;
}

void Function_387(int iParam0) //Position: 0x13FC5 / 81861
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, 0, (iParam0 + Function_388(105)), 0);
	return;
}

int Function_388(int iParam0) //Position: 0x13FE6 / 81894
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_389(int iParam0) //Position: 0x14000 / 81920
{
	PRINTSTRING("Old TOD after LAST MISSION - ");
	Function_383(Global_12976.f_24);
	PRINTNL();
	Global_12976.f_24 = GET_TIME_OF_DAY();
	PRINTSTRING("Current Time - ");
	Function_383(Global_12976.f_24);
	PRINTNL();
	ADD_TIME(&Global_12976 + 24, 0, 0, iParam0, 0);
	PRINTSTRING("New TOD after LAST MISSION - ");
	Function_383(Global_12976.f_24);
	PRINTNL();
	Function_390(iParam0);
	return;
}

void Function_390(int iParam0) //Position: 0x1409C / 82076
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, 0, (iParam0 + Function_388(90)), 0);
	return;
}

void Function_391(int iParam0) //Position: 0x140BD / 82109
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, iParam0, 0);
	return;
}

bool Function_392(bool bParam0) //Position: 0x140D8 / 82136
{
	if (STRING_CONTAINS_STRING(bParam0, "scantest"))
	{
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		if (STRING_CONTAINS_STRING(bParam0, "quad"))
		{
			LAUNCH_NEW_SCRIPT("$/content/Systemtest/AmbientScanner/test_quadrant", 0);
		}
		else if (STRING_CONTAINS_STRING(bParam0, "noffscreen"))
		{
			LAUNCH_NEW_SCRIPT("$/content/Systemtest/AmbientScanner/test_offscreen", 0);
		}
		else if (STRING_CONTAINS_STRING(bParam0, "nelevation"))
		{
			LAUNCH_NEW_SCRIPT("$/content/Systemtest/AmbientScanner/test_elevation", 0);
		}
		else if (STRING_CONTAINS_STRING(bParam0, "material"))
		{
			LAUNCH_NEW_SCRIPT("$/content/Systemtest/AmbientScanner/test_material", 0);
		}
		else if (STRING_CONTAINS_STRING(bParam0, "slope"))
		{
			LAUNCH_NEW_SCRIPT("$/content/Systemtest/AmbientScanner/test_slope", 0);
		}
		else if (STRING_CONTAINS_STRING(bParam0, "range"))
		{
			LAUNCH_NEW_SCRIPT("$/content/Systemtest/AmbientScanner/test_distance", 0);
		}
		else if (STRING_CONTAINS_STRING(bParam0, "all"))
		{
			LAUNCH_NEW_SCRIPT("$/content/Systemtest/AmbientScanner/test_scanner", 0);
		}
		else
		{
			LAUNCH_NEW_SCRIPT("$/content/Systemtest/AmbientScanner/test_scanner", 0);
		}
		return 1;
	}
	return 0;
}

bool Function_393(bool bParam0) //Position: 0x1434C / 82764
{
	int iVar0;
	char* cVar1[64];
	
	if (STRING_CONTAINS_STRING(cParam0, "save"))
	{
		iVar0 = 0;
		strcpy(&cVar1, GET_CONSOLE_COMMAND_TOKEN(0), 64);
		STRING_UPPER(&cVar1);
		if (!STRINGS_ARE_EQUAL(&cVar1, "SAVE"))
		{
			return 0;
		}
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		if (IS_STRING_VALID(bParam0))
		{
			if (STRING_LENGTH(bParam0) >= 0)
			{
				strcpy(&cVar1, bParam0, 64);
				STRING_UPPER(&cVar1);
				if (STRING_CONTAINS_STRING(&cVar1, "SOFT_SAVE1"))
				{
					Function_397();
					SAVE_SOFT_SAVE(0);
					PRINTSTRING("SAVED GAME TO SOFT SLOT 1 (index 0)");
					PRINTNL();
					LOG_ERROR("GAME SAVED!");
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar1, "SOFT_SAVE2"))
				{
					Function_397();
					SAVE_SOFT_SAVE(1);
					PRINTSTRING("SAVED GAME TO SOFT SLOT 2 (index 1)");
					PRINTNL();
					LOG_ERROR("GAME SAVED!");
					return 1;
				}
				if (STRINGS_ARE_EQUAL(&cVar1, "MP"))
				{
					Function_78(0, 4294967295);
					PRINTSTRING("SAVED MULTIPLAYER GAME");
					PRINTNL();
					LOG_ERROR("MP GAME SAVED!");
					return 1;
				}
				iVar0 = STRING_TO_INT(&cVar1);
				if (iVar0 > 4)
				{
					LOG_ERROR("CANNOT SAVE - INVALID HARD SLOT PASSED!");
					return 0;
				}
			}
		}
		Function_397();
		if (Function_394(iVar0))
		{
			PRINTSTRING("SAVED GAME TO SLOT: ");
			PRINTINT(iVar0);
			PRINTNL();
			LOG_ERROR("GAME SAVED!");
		}
		else
		{
			LOG_ERROR("SAVE FAILED!");
		}
		return 1;
	}
	return 0;
}

bool Function_394(int iParam0) //Position: 0x1453F / 83263
{
	struct<4> Var0;
	
	if (iParam0 != 4)
	{
		if (Function_396("xmlsave"))
		{
			if (IS_DEV_BUILD())
			{
				SAVE_GAME(SS_GET_STRING(2, iParam0));
			}
		}
	}
	if (iParam0 <= 4)
	{
		if (Function_125())
		{
			Var0 = { StackVal, StackVal, StackVal, Function_395() };
			SAVE_MANAGER_CREATE_SAVE_DISPLAY_NAME(&Var0);
		}
		else
		{
			SAVE_MANAGER_CREATE_SAVE_DISPLAY_NAME(&Global_3422[Global_626940] + 12);
		}
	}
	if (iParam0 != 4)
	{
		Function_80();
	}
	SAVE_MANAGER_HARD_SAVE(SS_GET_STRING(3, iParam0));
	return 1;
}

struct<16> Function_395() //Position: 0x145A6 / 83366
{
	int iVar0;
	int iVar1;
	
	iVar1 = 4294967295;
	iVar0 = 0;
	while (iVar0 <= 38)
	{
		if (Function_370(iVar0))
		{
			if (iVar1 == 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (Global_74542[iVar010].f_32 < Global_74542[iVar110].f_32)
			{
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 == 4294967295)
	{
		return StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12);
	}
	if (Global_13172[Function_330(Global_6269)11].f_32 < Global_74542[iVar110].f_32)
	{
		return StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12);
	}
	return StackVal, StackVal, StackVal, *(&Global_63541[iVar155] + 4);
}

bool Function_396(char* cParam0) //Position: 0x14642 / 83522
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

void Function_397() //Position: 0x14661 / 83553
{
	struct<5> Var0;
	
	if (Function_129())
	{
		Global_34165 = { StackVal, StackVal, Global_76888[03] };
		Global_34165.f_12 = StackVal;
	}
	else
	{
		GET_POSITION(GET_PLAYER_ACTOR(0), &Var0);
		Var0.f_4 = (StackVal + 1.0f);
		FIND_GROUND_INTERSECTION(&Var0, 100.0f, &Global_34165, &uVar3);
		Global_34165.f_12 = GET_HEADING(GET_PLAYER_ACTOR(0));
	}
	Global_34165.f_28 = 0;
	Global_34165.f_36 = 0;
	Global_34165.f_40 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_24 = Global_29005;
	if (Function_319(Global_29005))
	{
	}
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_88793 = 1;
	return;
}

bool Function_398(bool bParam0) //Position: 0x146F4 / 83700
{
	int iVar0;
	char* cVar1[64];
	
	if (STRING_CONTAINS_STRING(cParam0, "load"))
	{
		iVar0 = 0;
		strcpy(&cVar1, GET_CONSOLE_COMMAND_TOKEN(0), 64);
		STRING_UPPER(&cVar1);
		if (!STRINGS_ARE_EQUAL(&cVar1, "LOAD"))
		{
			return 0;
		}
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		if (IS_STRING_VALID(bParam0))
		{
			if (STRING_LENGTH(bParam0) >= 0)
			{
				strcpy(&cVar1, bParam0, 64);
				STRING_UPPER(&cVar1);
				if (STRING_CONTAINS_STRING(&cVar1, "SOFT_SAVE1"))
				{
					LOAD_SOFT_SAVE(0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar1, "SOFT_SAVE2"))
				{
					LOAD_SOFT_SAVE(1);
					return 1;
				}
				if (STRINGS_ARE_EQUAL(&cVar1, "MP"))
				{
					Function_400();
					return 1;
				}
				iVar0 = STRING_TO_INT(&cVar1);
				if (iVar0 > 4)
				{
					LOG_ERROR("CANNOT LOAD - INVALID HARD SLOT PASSED!");
					return 0;
				}
			}
		}
		PRINTSTRING("LOADING GAME FROM SLOT: ");
		PRINTINT(iVar0);
		PRINTNL();
		Function_399(iVar0);
		return 1;
	}
	return 0;
}

int Function_399(int iParam0) //Position: 0x1480E / 83982
{
	if (iParam0 != 4)
	{
		if (Function_396("xmlsave"))
		{
			if (IS_DEV_BUILD())
			{
				if (DOES_FILE_EXIST(SS_GET_STRING(2, iParam0)))
				{
					return LOAD_GAME(SS_GET_STRING(2, iParam0));
				}
			}
		}
	}
	SAVE_MANAGER_HARD_LOAD(SS_GET_STRING(3, iParam0));
	return 1;
}

var Function_400() //Position: 0x14851 / 84049
{
	NET_LOG(1, "SaveLoad", "Multiplayer Load Called", 0, 0, 0, 0);
	return SAVE_MANAGER_HARD_LOAD(SS_GET_STRING(3, 5));
}

bool Function_401(int iParam0) //Position: 0x1488C / 84108
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	var uVar18;
	bool bVar21;
	bool bVar22;
	var uVar23;
	int iVar24;
	bool bVar25;
	vector3 vVar26;
	vector3 vVar29;
	
	iParam0 = iParam0;
	bVar0 = GET_CONSOLE_COMMAND_TOKEN(0);
	if (Function_402(bVar0, "streamanddropactorlineup"))
	{
		iVar2 = (4294967295 * (GET_NUM_CONSOLE_COMMAND_TOKENS() - 1));
		GET_CAMERA_DIRECTION(GET_GAME_CAMERA(), &vVar9);
		GET_CAMERA_POSITION(GET_GAME_CAMERA(), &vVar12);
		VSCALE(&vVar9, -7.0f);
		vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar12, StackVal) };
		iVar1 = 1;
		while (iVar1 < (GET_NUM_CONSOLE_COMMAND_TOKENS() - 1))
		{
			bVar22 = GET_CONSOLE_COMMAND_TOKEN(iVar1);
			uVar23 = GET_ACTORENUM_FROM_STRING(bVar22);
			iVar24 = uVar23;
			if (iVar24 == 4294967295)
			{
				LOG_ERROR("Invalid actor enum given to streamanddropactorlineup");
				return 1;
			}
			STREAMING_REQUEST_ACTOR(iVar24, 1, false);
			while (!STREAMING_IS_ACTOR_LOADED(iVar24, 4294967295))
			{
				WAIT(0);
			}
			bVar25 = GET_PLAYER_ACTOR(0);
			GET_OBJECT_ORIENTATION(GET_OBJECT_FROM_ACTOR(bVar25), &Var3);
			GET_POSITION(bVar25, &uVar6);
			vVar26 = { IntToFloat((iVar2 + (2 * (iVar1 - 1)))), 0.0f, 0.0f };
			vVar29 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar26, vVar12, StackVal) };
			FIND_GROUND_INTERSECTION(&vVar29, 80.0f, &vVar15, &uVar18);
			bVar21 = CREATE_ACTOR_IN_LAYOUT(StackVal, GET_GC_LAYOUT(), Function_123(), uVar23, vVar15, (0.0f + 180.0f), 0.0f);
			TASK_STAND_STILL(bVar21, -1.0f, 0, 0);
			STREAMING_EVICT_ACTOR(iVar24, 4294967295);
			iVar1++;
		}
		return 1;
	}
	return 0;
}

bool Function_402(char* cParam0, bool bParam1) //Position: 0x149E3 / 84451
{
	char* cVar0[64];
	char* cVar16[64];
	
	strcpy(&cVar0, cParam0, 64);
	strcpy(&cVar16, bParam1, 64);
	STRING_LOWER(&cVar0);
	STRING_LOWER(&cVar16);
	if (STRINGS_ARE_EQUAL(&cVar0, &cVar16))
	{
		return 1;
	}
	return 0;
}

bool Function_403(bool bParam0) //Position: 0x14A0E / 84494
{
	bool bVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	struct<5> Var4;
	vector3 vVar10;
	vector3 vVar13;
	var uVar16;
	bool bVar19;
	
	bVar0 = GET_CONSOLE_COMMAND_TOKEN(0);
	if (Function_402(bVar0, "streamanddropactor"))
	{
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		uVar1 = GET_ACTORENUM_FROM_STRING(bParam0);
		iVar2 = uVar1;
		if (iVar2 == 4294967295)
		{
			LOG_ERROR("Invalid actor enum given to streamanddropactor");
			return 1;
		}
		STREAMING_REQUEST_ACTOR(iVar2, 1, false);
		while (!STREAMING_IS_ACTOR_LOADED(iVar2, 4294967295))
		{
			WAIT(0);
		}
		bVar3 = GET_PLAYER_ACTOR(0);
		GET_OBJECT_ORIENTATION(GET_OBJECT_FROM_ACTOR(bVar3), &Var4);
		GET_CAMERA_DIRECTION(GET_GAME_CAMERA(), &vVar7);
		GET_CAMERA_POSITION(GET_GAME_CAMERA(), &vVar10);
		VSCALE(&vVar7, -7.0f);
		vVar10 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar7, vVar10, StackVal) };
		FIND_GROUND_INTERSECTION(&vVar10, 80.0f, &vVar13, &uVar16);
		bVar19 = CREATE_ACTOR_IN_LAYOUT(StackVal, GET_GC_LAYOUT(), Function_123(), uVar1, vVar13, (0.0f + 180.0f), 0.0f);
		TASK_STAND_STILL(bVar19, -1.0f, 0, 0);
		STREAMING_EVICT_ACTOR(iVar2, 4294967295);
		return 1;
	}
	return 0;
}

bool Function_404(bool bParam0) //Position: 0x14B11 / 84753
{
	bool bVar0;
	
	if (STRING_CONTAINS_STRING(bParam0, "suicide"))
	{
		bVar0 = Function_121();
		if (IS_ACTOR_VALID(bVar0))
		{
			KILL_ACTOR(bVar0);
		}
		return 1;
	}
	return 0;
}

bool Function_405(bool bParam0) //Position: 0x14B3E / 84798
{
	if (STRING_CONTAINS_STRING(bParam0, "nframetime"))
	{
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		if (STRING_CONTAINS_STRING(bParam0, "false") || STRING_CONTAINS_STRING(bParam0, "off"))
		{
			PRINT_FRAME_TIME(0);
		}
		else
		{
			PRINT_FRAME_TIME(1);
		}
		return 1;
	}
	return 0;
}

bool Function_406(bool bParam0) //Position: 0x14B88 / 84872
{
	bool bVar0;
	
	if (STRING_CONTAINS_STRING(bParam0, "decor"))
	{
		bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
		if (STRING_LENGTH(bVar0) >= 0)
		{
			DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), bVar0, 1);
		}
		return 1;
	}
	return 0;
}

bool Function_407(bool bParam0) //Position: 0x14BBB / 84923
{
	if (STRING_CONTAINS_STRING(bParam0, "fudgeaa"))
	{
		if (IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("VHC_AA_Layout")))
		{
			DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "Player_FudgeAA", 1);
		}
		else if (IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("TES_AA_Layout")))
		{
			DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "Player_FudgeAA", 1);
		}
		else if (IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("TUM_FTE_Layout")))
		{
			DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "Player_FudgeAA", 1);
		}
		return 1;
	}
	return 0;
}

bool Function_408(bool bParam0) //Position: 0x14C76 / 85110
{
	int iVar0;
	
	if (STRING_CONTAINS_STRING(bParam0, "ncockfight"))
	{
		*(&iVar0 + 64 + 20) = 1;
		LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/Mini_Games/Cockfighting/Cockfighting", &iVar0, 51, 0);
		return 1;
	}
	return 0;
}

bool Function_409(bool bParam0) //Position: 0x14CDA / 85210
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	bool bVar10;
	
	if (STRING_CONTAINS_STRING(bParam0, "pickdoor"))
	{
		bVar9 = GET_PLAYER_ACTOR(0);
		GET_ACTOR_AXIS(bVar9, &vVar6, 2);
		GET_POSITION(bVar9, &vVar0);
		vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar6, vVar0, StackVal) * Vector(-3.0f, -3.0f, -3.0f), StackVal, StackVal) };
		bVar10 = GET_AMBIENT_LAYOUT();
		if (!IS_LAYOUTREF_VALID(bVar10))
		{
			SCRIPT_BREAKPOINT("Invalid layout");
		}
		Function_96();
		CREATE_GRINGO_IN_LAYOUT(bVar10, Function_123(), "$/content/scripting/gringo/SimpleGringo/Player_Lockpick_Door", vVar3, Function_96());
		return 1;
	}
	return 0;
}

bool Function_410(bool bParam0) //Position: 0x14D91 / 85393
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	bool bVar10;
	char* cVar11;
	
	if (STRING_CONTAINS_STRING(bParam0, "droplocker"))
	{
		bVar9 = GET_PLAYER_ACTOR(0);
		GET_ACTOR_AXIS(bVar9, &vVar6, 2);
		GET_POSITION(bVar9, &vVar0);
		vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar6, vVar0, StackVal) * Vector(-3.0f, -3.0f, -3.0f), StackVal, StackVal) };
		bVar10 = GET_AMBIENT_LAYOUT();
		if (!IS_LAYOUTREF_VALID(bVar10))
		{
			SCRIPT_BREAKPOINT("Invalid layout");
		}
		cVar11 = CREATE_PROP_IN_LAYOUT(bVar10, Function_123(), "$/fragments/p_gen_footlocker01x", vVar3, 0.0f, 0.0f, 0.0f, 1);
		DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(cVar11, "stand_open_chest"));
		Function_96();
		CREATE_GRINGO_ON_OBJECT(bVar11, Function_123(), "$/content/scripting/gringo/SimpleGringo/Player_Lockpick_Footlocker", -0.3f, 0.1f, -0.3f, Function_96());
		return 1;
	}
	return 0;
}

bool Function_411(bool bParam0) //Position: 0x14EAA / 85674
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	int iVar12;
	
	if (STRING_CONTAINS_STRING(bParam0, "nkillbunny"))
	{
		bVar10 = GET_PLAYER_ACTOR(0);
		GET_ACTOR_AXIS(bVar10, &vVar6, 2);
		GET_POSITION(bVar10, &vVar0);
		vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar6, vVar0, StackVal) * Vector(-3.0f, -3.0f, -3.0f), StackVal, StackVal) };
		bVar11 = GET_AMBIENT_LAYOUT();
		if (!IS_LAYOUTREF_VALID(bVar11))
		{
			SCRIPT_BREAKPOINT("Invalid layout");
		}
		iVar12 = CREATE_GRINGO_IN_LAYOUT(bVar11, Function_123(), "$/content/scripting/gringo/SimpleGringo/mex_gutRabbit_link", vVar3, 0.0f, 0.0f, 0.0f);
		bVar9 = CREATE_ACTOR_IN_LAYOUT(bVar11, Function_123(), 1078, vVar3, 0.0f, 0.0f, 0.0f);
		SNAP_ACTOR_TO_GRINGO(bVar9, iVar12, "UseCase1", 1, 0, 0);
		if (!IS_ACTOR_VALID(bVar9))
		{
			SCRIPT_BREAKPOINT("Invalid guy");
		}
		return 1;
	}
	return 0;
}

bool Function_412(bool bParam0) //Position: 0x14FA5 / 85925
{
	var uVar0;
	
	if (STRING_CONTAINS_STRING(bParam0, "bullriding"))
	{
		LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/Ambient/JobSystem/Job_bullriding", &uVar0, 10, 0);
		return 1;
	}
	return 0;
}

bool Function_413(bool bParam0) //Position: 0x14FF9 / 86009
{
	char* cVar0[32];
	char* cVar8[24];
	
	if (STRING_CONTAINS_STRING(bParam0, "playsong"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 2)
		{
			strcpy(&cVar0, GET_CONSOLE_COMMAND_TOKEN(1), 32);
			strcpy(&cVar8, GET_CONSOLE_COMMAND_TOKEN(2), 24);
			AUDIO_MUSIC_FORCE_TRACK(&cVar0, &cVar8, 0, 4294967295, 4294967295, 3212836864, 0);
			PRINTSTRING("Playing ");
			PRINTSTRING(&cVar0);
			PRINTSTRING(" - ");
			PRINTSTRING(&cVar8);
			PRINTNL();
		}
		else
		{
			LOG_ERROR("Please use in the following format: playsong songname mood");
		}
		return 1;
	}
	return 0;
}

bool Function_414(bool bParam0) //Position: 0x150A3 / 86179
{
	int iVar0;
	
	iVar0 = 0;
	if (STRING_CONTAINS_STRING(bParam0, "show_locked_weapons"))
	{
		iVar0 = 0;
		while (iVar0 < 39)
		{
			PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(iVar0));
			if (IS_WEAPONENUM_LOCKED(bVar0))
			{
				PRINTSTRING(" - LOCKED!");
			}
			else
			{
				PRINTSTRING("  - unlocked");
			}
			PRINTNL();
			bVar0++;
		}
		return 1;
	}
	return 0;
}

bool Function_415(bool bParam0) //Position: 0x15118 / 86296
{
	char* cVar0[64];
	
	if (STRING_CONTAINS_STRING(bParam0, "ai_ignore_player"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 1)
		{
			strcpy(&cVar0, GET_CONSOLE_COMMAND_TOKEN(1), 64);
			if (STRINGS_ARE_EQUAL(&cVar0, "1"))
			{
				AI_IGNORE_ACTOR(GET_PLAYER_ACTOR(0));
			}
			else if (STRINGS_ARE_EQUAL(&cVar0, "0"))
			{
				AI_STOP_IGNORING_ACTORS();
			}
			else if (STRINGS_ARE_EQUAL(&cVar0, "on"))
			{
				AI_IGNORE_ACTOR(GET_PLAYER_ACTOR(0));
			}
			else if (STRINGS_ARE_EQUAL(&cVar0, "off"))
			{
				AI_STOP_IGNORING_ACTORS();
			}
			else
			{
				LOG_ERROR("Must provide 0 or 1 to toggle off or on");
			}
		}
		else
		{
			LOG_ERROR("Must provide 0 or 1 to toggle off or on");
		}
		return 1;
	}
	return 0;
}

bool Function_416(bool bParam0) //Position: 0x151FD / 86525
{
	char* cVar0[64];
	bool bVar16;
	int iVar17;
	int iVar18;
	char* cVar19[64];
	int iVar35;
	int iVar36;
	float fVar37;
	char* cVar38[64];
	int iVar54;
	char* cVar55[64];
	int iVar71;
	int iVar72;
	int iVar73;
	
	if (STRING_CONTAINS_STRING(bParam0, "remove"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 1)
		{
			strcpy(&cVar0, GET_CONSOLE_COMMAND_TOKEN(1), 64);
			bVar16 = GET_CONSOLE_COMMAND_TOKEN(2);
			STRING_UPPER(&cVar0);
			iVar17 = 0;
			if (STRING_CONTAINS_STRING(&cVar0, "WE_"))
			{
				iVar18 = 39;
				iVar35 = 4294967295;
				iVar17 = 0;
				while (iVar17 < iVar18)
				{
					strcpy(&cVar19, "WE_", 64);
					stradd(&cVar19, GET_WEAPON_ENUM_STRING_FROM_ENUM(iVar17), 64);
					STRING_UPPER(&cVar19);
					if (STRINGS_ARE_EQUAL(&cVar0, &cVar19))
					{
						iVar35 = bVar17;
						PRINTSTRING("removing from the player ");
						PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(iVar35));
						PRINTNL();
						DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), bVar35);
					}
					bVar17++;
				}
				if (bVar35 == 4294967295)
				{
					PRINTSTRING("Could not remove from player ");
					PRINTSTRING(&cVar0);
					PRINTNL();
				}
			}
			else if (STRING_CONTAINS_STRING(&cVar0, "AMMO_"))
			{
				iVar36 = 17;
				bVar17 = false;
				iVar54 = 4294967295;
				bVar17 = false;
				while (bVar17 < iVar36)
				{
					strcpy(&cVar38, "AMMO_", 64);
					stradd(&cVar38, GET_AMMO_ENUM_STRING_FROM_ENUM(bVar17), 64);
					STRING_UPPER(&cVar38);
					if (STRINGS_ARE_EQUAL(&cVar0, &cVar38))
					{
						iVar54 = bVar17;
						PRINTSTRING("removing from the player ");
						PRINTSTRING(GET_AMMO_ENUM_STRING_FROM_ENUM(iVar54));
						fVar37 = STRING_TO_FLOAT(bVar16);
						fVar37 = (fVar37 * -1.0f);
						if (fVar37 < 0.0f)
						{
							_ADD_AMMO_OF_TYPE(GET_PLAYER_ACTOR(0), bVar54, fVar37, 0, 1);
							PRINTSTRING(" - x");
							PRINTFLOAT(fVar37);
						}
						else
						{
							_ADD_AMMO_OF_TYPE(GET_PLAYER_ACTOR(0), bVar54, _GET_MAX_AMMO_AMOUNT(GET_PLAYER_ACTOR(0), bVar54), 0, 1);
						}
						PRINTNL();
					}
					bVar17++;
				}
				if (bVar54 == 4294967295)
				{
					PRINTSTRING("Could not remove from player ");
					PRINTSTRING(&cVar0);
					PRINTNL();
				}
			}
			else if (STRING_CONTAINS_STRING(&cVar0, "ITEM_"))
			{
				iVar71 = 4294967295;
				iVar73 = 0;
				bVar17 = false;
				while (bVar17 < (79 - 1))
				{
					strcpy(&cVar55, "ITEM_", 64);
					stradd(&cVar55, Function_309(bVar17), 64);
					if (STRINGS_ARE_EQUAL(&cVar55, &cVar0))
					{
						iVar71 = bVar17;
						PRINTSTRING("removing from player ");
						PRINTSTRING(&cVar55);
						PRINTSTRING(" - x");
						iVar72 = STRING_TO_INT(bVar16);
						if (iVar72 >= 0)
						{
							iVar73 = 1;
							while (iVar73 < iVar72)
							{
								iVar73++;
							}
							PRINTINT(iVar72);
						}
						else
						{
							PRINTINT(1);
						}
						PRINTNL();
					}
					bVar17++;
				}
				if (iVar71 == 4294967295)
				{
					PRINTSTRING("Could not remove from the player ");
					PRINTSTRING(&cVar0);
					PRINTNL();
				}
			}
			else if ((STRING_CONTAINS_STRING(&cVar0, "all") || STRING_CONTAINS_STRING(&cVar0, "ALL")) || STRING_CONTAINS_STRING(&cVar0, "All"))
			{
				bVar17 = false;
				while (bVar17 < (8 - 1))
				{
					DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), GET_WEAPON_EQUIPPED(GET_PLAYER_ACTOR(0), bVar17));
					bVar17++;
				}
				DELETE_ALL_INVENTORY_FROM_ACTOR(GET_PLAYER_ACTOR(0));
				PRINTSTRING("Took all the player's stuff away");
				PRINTNL();
			}
			else
			{
				LOG_ERROR("remove must be followed by an item of type WE_ ITEM_ or AMMO_");
			}
		}
		else
		{
			LOG_ERROR("Must provide an item name to remove from the player");
		}
		return 1;
	}
	return 0;
}

bool Function_417(bool bParam0) //Position: 0x155C2 / 87490
{
	char* cVar0[64];
	bool bVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	char* cVar20[64];
	char* cVar36[64];
	char* cVar52[64];
	int iVar68;
	int iVar69;
	float fVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	
	if (STRING_CONTAINS_STRING(bParam0, "give"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 1)
		{
			strcpy(&cVar0, GET_CONSOLE_COMMAND_TOKEN(1), 64);
			bVar16 = GET_CONSOLE_COMMAND_TOKEN(2);
			STRING_UPPER(&cVar0);
			iVar17 = 0;
			iVar18 = 17;
			if (STRING_CONTAINS_STRING(&cVar0, "WE_"))
			{
				iVar19 = 39;
				iVar68 = 4294967295;
				iVar17 = 0;
				while (iVar17 < iVar19)
				{
					strcpy(&cVar20, "WE_", 64);
					stradd(&cVar20, GET_WEAPON_ENUM_STRING_FROM_ENUM(iVar17), 64);
					STRING_UPPER(&cVar20);
					if (STRINGS_ARE_EQUAL(&cVar0, &cVar20))
					{
						iVar68 = bVar17;
						PRINTSTRING("Giving the player ");
						PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(iVar68));
						PRINTNL();
						SET_WEAPONENUM_LOCKED(bVar68, 0);
						GIVE_WEAPON_TO_ACTOR(GET_PLAYER_ACTOR(0), bVar68, 0, 1, 1);
						if (STRING_CONTAINS_STRING(bParam0, "givewna"))
						{
							iVar69 = GET_AMMOENUM_FOR_WEAPONENUM(bVar68);
							if (iVar69 != 4294967295)
							{
								PRINTSTRING("Being nice and giving the player ");
								PRINTSTRING(GET_AMMO_ENUM_STRING_FROM_ENUM(iVar69));
								PRINTNL();
								_ADD_AMMO_OF_TYPE(GET_PLAYER_ACTOR(0), bVar69, _GET_MAX_AMMO_AMOUNT(GET_PLAYER_ACTOR(0), bVar69), 0, 1);
							}
							else
							{
								PRINTSTRING("Weapon doesn't have a valid ammo type, so not able to be nice.");
								PRINTNL();
							}
						}
					}
					bVar17++;
				}
				if (bVar68 == 4294967295)
				{
					PRINTSTRING("Could not give player ");
					PRINTSTRING(&cVar0);
					PRINTNL();
				}
			}
			else if (STRING_CONTAINS_STRING(&cVar0, "AMMO_"))
			{
				bVar17 = false;
				iVar71 = 4294967295;
				bVar17 = false;
				while (bVar17 < iVar18)
				{
					strcpy(&cVar36, "AMMO_", 64);
					stradd(&cVar36, GET_AMMO_ENUM_STRING_FROM_ENUM(bVar17), 64);
					STRING_UPPER(&cVar36);
					if (STRINGS_ARE_EQUAL(&cVar0, &cVar36))
					{
						iVar71 = bVar17;
						PRINTSTRING("Giving the player ");
						PRINTSTRING(GET_AMMO_ENUM_STRING_FROM_ENUM(iVar71));
						fVar70 = STRING_TO_FLOAT(bVar16);
						if (fVar70 < 0.0f)
						{
							_ADD_AMMO_OF_TYPE(GET_PLAYER_ACTOR(0), bVar71, fVar70, 0, 1);
							PRINTSTRING(" - x");
							PRINTFLOAT(fVar70);
						}
						else
						{
							_ADD_AMMO_OF_TYPE(GET_PLAYER_ACTOR(0), bVar71, _GET_MAX_AMMO_AMOUNT(GET_PLAYER_ACTOR(0), bVar71), 0, 1);
						}
						PRINTNL();
					}
					bVar17++;
				}
				if (bVar71 == 4294967295)
				{
					PRINTSTRING("Could not give player ");
					PRINTSTRING(&cVar0);
					PRINTNL();
				}
			}
			else if (STRING_CONTAINS_STRING(&cVar0, "ITEM_"))
			{
				iVar72 = 4294967295;
				iVar74 = 0;
				bVar17 = false;
				while (bVar17 < (79 - 1))
				{
					strcpy(&cVar52, "ITEM_", 64);
					stradd(&cVar52, Function_309(bVar17), 64);
					if (STRINGS_ARE_EQUAL(&cVar52, &cVar0))
					{
						iVar72 = bVar17;
						PRINTSTRING("Giving player ");
						PRINTSTRING(&cVar52);
						PRINTSTRING(" - x");
						if (iVar72 == 13)
						{
							Function_418(&Global_26303, Function_431(), 4294967294, 0, 0, 1);
						}
						iVar73 = STRING_TO_INT(bVar16);
						if (iVar73 >= 0)
						{
							iVar74 = 1;
							while (iVar74 < iVar73)
							{
								ADD_ITEM(Function_309(iVar72), GET_PLAYER_ACTOR(0), 1);
								iVar74++;
							}
							PRINTINT(iVar73);
						}
						else
						{
							ADD_ITEM(Function_309(iVar72), GET_PLAYER_ACTOR(0), 1);
							PRINTINT(1);
						}
						PRINTNL();
					}
					bVar17++;
				}
				if (iVar72 == 4294967295)
				{
					PRINTSTRING("Could not give the player ");
					PRINTSTRING(&cVar0);
					PRINTNL();
				}
			}
			else if (STRING_CONTAINS_STRING(&cVar0, "LIST"))
			{
				iVar18 = 17;
				iVar19 = 39;
				PRINTSTRING("WEAPONS:");
				PRINTNL();
				bVar17 = false;
				while (bVar17 < iVar19)
				{
					strcpy(&cVar20, "WE_", 64);
					stradd(&cVar20, GET_WEAPON_ENUM_STRING_FROM_ENUM(bVar17), 64);
					STRING_UPPER(&cVar20);
					PRINTSTRING(&cVar20);
					PRINTNL();
					bVar17++;
				}
				PRINTNL();
				PRINTSTRING("AMMO:");
				PRINTNL();
				bVar17 = false;
				while (bVar17 < iVar18)
				{
					strcpy(&cVar36, "AMMO_", 64);
					stradd(&cVar36, GET_AMMO_ENUM_STRING_FROM_ENUM(bVar17), 64);
					STRING_UPPER(&cVar36);
					PRINTSTRING(&cVar36);
					PRINTNL();
					bVar17++;
				}
				PRINTNL();
				PRINTSTRING("ITEMS:");
				PRINTNL();
				bVar17 = false;
				while (bVar17 < (79 - 1))
				{
					strcpy(&cVar52, "ITEM_", 64);
					stradd(&cVar52, Function_309(bVar17), 64);
					PRINTSTRING(&cVar52);
					PRINTNL();
					bVar17++;
				}
			}
			else if ((STRING_CONTAINS_STRING(&cVar0, "all") || STRING_CONTAINS_STRING(&cVar0, "ALL")) || STRING_CONTAINS_STRING(&cVar0, "All"))
			{
				iVar18 = 17;
				iVar19 = 39;
				bVar17 = true;
				while (bVar17 < (iVar19 - 2))
				{
					bVar68 = bVar17;
					if ((((!STRING_CONTAINS_STRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(bVar68), "DEFAULT") && !STRING_CONTAINS_STRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(bVar68), "TURRET")) && !STRING_CONTAINS_STRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(bVar68), "CANNON")) && !STRING_CONTAINS_STRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(bVar68), "TEST")) && !STRING_CONTAINS_STRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(bVar68), "DUALPISTOL"))
					{
						SET_WEAPONENUM_LOCKED(bVar68, 0);
						GIVE_WEAPON_TO_ACTOR(GET_PLAYER_ACTOR(0), bVar68, 0, 1, 1);
					}
					bVar17++;
				}
				bVar17 = false;
				while (bVar17 < (iVar18 - 1))
				{
					_ADD_AMMO_OF_TYPE(GET_PLAYER_ACTOR(0), bVar17, _GET_MAX_AMMO_AMOUNT(GET_PLAYER_ACTOR(0), bVar17), 0, 1);
					bVar17++;
				}
				bVar17 = false;
				while (bVar17 < (79 - 1))
				{
					ADD_ITEM(Function_309(bVar17), GET_PLAYER_ACTOR(0), 1);
					bVar17++;
				}
				PRINTSTRING("Gave the player friggin' everything.");
				PRINTNL();
			}
			else if (STRING_CONTAINS_STRING(&cVar0, "$"))
			{
				bVar16 = GET_CONSOLE_COMMAND_TOKEN(1);
				STRING_CLEAR_TOKENIZER();
				SET_OWNERSHIP_STRAGGLER(bVar16, "$");
				if (STRING_NUM_TOKENS() >= 0)
				{
					bVar16 = STRING_GET_TOKEN(0);
					iVar75 = STRING_TO_INT(bVar16);
					if (iVar75 >= 0)
					{
						Function_72(ABS(iVar75), 1);
					}
					else
					{
						Function_70(ABS(iVar75), 1);
					}
				}
				else
				{
					LOG_ERROR("GIVE $ must be followed by a valid dollar amount");
				}
				STRING_CLEAR_TOKENIZER();
			}
			else
			{
				LOG_ERROR("GIVE must be followed by an item of type WE_ ITEM_ or AMMO_");
			}
		}
		else
		{
			LOG_ERROR("Must provide an item name to give to the player");
		}
		return 1;
	}
	return 0;
}

int Function_418(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x15C6E / 89198
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4[45];
	int iVar50[45];
	struct<33> Var96;
	
	iVar0 = 0;
	if (Function_430())
	{
		return 0;
	}
	uParam0->f_16 = Function_429(iParam1);
	if (iParam3 == 0)
	{
		iParam3 = 0;
	}
	if (iParam1 == 4294967295)
	{
		iParam1 = Function_431();
	}
	if (iParam4 > 0 || iParam4 < 8)
	{
		iParam4 = 0;
	}
	Global_26303.f_12 = iParam1;
	iVar1 = 0;
	while (iVar1 < (45 - 1))
	{
		if (Function_428(&Var96, iVar1) == 1)
		{
			if (Function_427(Var96.f_24) == Global_30621[Global_29004])
			{
				if (Var96.f_32 == iParam3)
				{
					if (((iParam1 != 4294967295 || iParam1 <= Var96.f_12) || (iParam1 != 0 && Var96.f_12 != 3)) || (iParam1 != 0 && Var96.f_12 != 4))
					{
						if (iParam4 != 0 || iParam4 != Function_426(Var96.f_20))
						{
							iVar4[iVar2] = iVar1;
							iVar2++;
							if (iParam5 == 1)
							{
								if (!Function_425(iVar1))
								{
									iVar50[iVar3] = iVar1;
									iVar3++;
								}
							}
						}
					}
				}
			}
		}
		iVar1++;
	}
	if (iVar2 >= 0)
	{
		if (iVar3 >= 0)
		{
			iVar1 = iVar50[(FLOOR(RAND_FLOAT_RANGE(0.0f, 1000.0f)) % iVar3)];
		}
		else
		{
			iVar1 = iVar4[(FLOOR(RAND_FLOAT_RANGE(0.0f, 1000.0f)) % iVar2)];
		}
		if (Function_428(uParam0, iVar1))
		{
			PRINTSTRING("BOUNTYHUNTER_FILL_DATA_BY_DIFFICULTY found actor");
			PRINTSTRING("With ActorEnum: ");
			PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(uParam0->f_20));
			PRINTNL();
			uParam0->f_24 = Function_419(uParam0, iParam4, 80, 20000, uParam0->f_12);
			iVar0 = 1;
		}
		else
		{
			LOG_ERROR("There's something wrong here");
		}
	}
	else
	{
		iVar0 = 0;
		LOG_ERROR("BOUNTYHUNTER_FILL_DATA_BY_DIFFICULTY did not find a valid actor");
		PRINTSTRING("BOUNTYHUNTER_FILL_DATA_BY_DIFFICULTY did not find an actor");
		PRINTNL();
	}
	if (iParam2 != 4294967294)
	{
		uParam0->f_24 = iParam2;
	}
	return iVar0;
}

var Function_419(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x15ED8 / 89816
{
	var uVar0;
	var uVar1;
	
	uVar0 = uParam0->f_24;
	uParam3 = uParam3;
	uParam2 = uParam2;
	if (StackVal || uParam0->f_24 != 4294967295 != 1)
	{
		uVar1 = Function_420(uVar0, 80.0f, 20000.0f, uParam1, 1, uParam4);
	}
	else if (StackVal != 6)
	{
		LOG_ERROR("Unhandled Bounty Hunter Landmark type");
	}
	else
	{
		uVar1 = uParam0->f_24;
	}
	return uVar1;
}

var Function_420(int iParam0, float fParam1, float fParam2, int iParam3, int iParam4, int iParam5) //Position: 0x15F63 / 89955
{
	int iVar0;
	int iVar1[146];
	int iVar148[146];
	int iVar295;
	vector3 vVar296;
	vector3 vVar299;
	float fVar302;
	float fVar303;
	float fVar304[146];
	float fVar451[146];
	int iVar598;
	int iVar599;
	int iVar600;
	int iVar601;
	int iVar602;
	int iVar603;
	struct<8> Var604;
	
	iVar0 = 4294967295;
	fVar303 = 1.001638E+07.0f;
	iVar601 = 0;
	iVar602 = 0;
	iVar603 = 0;
	iVar598 = 0;
	while (iVar598 < 145)
	{
		iVar1[iVar598] = 4294967295;
		iVar148[iVar598] = 4294967295;
		iVar598++;
	}
	if (!Function_319(iParam0))
	{
		iParam0 = Global_29005;
	}
	iVar295 = Function_427(iParam0);
	PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - Checking Regions for a bountyhunter landmark: ");
	PRINTNL();
	GET_POSITION(GET_PLAYER_ACTOR(0), &vVar299);
	iVar598 = 0;
	while (iVar598 < 145)
	{
		Function_424(StackVal);
		vVar296 = { StackVal, StackVal, Function_424(StackVal) };
		fVar302 = VDIST(vVar299, vVar296);
		if (iParam3 == 0)
		{
			iParam3 = 0;
		}
		if (((StackVal && !(IS_VOLUME_VALID(StackVal) && (iVar295 != Function_427(Global_29155[iVar59810]) || iParam0 != 4294967295)) != 1) && Function_314(&(Global_29008[iVar598]), 8192)) && iVar598 == 0)
		{
			if (iVar598 == 146)
			{
				LOG_ERROR("The bountyhunter region count is screwy. Tell Ben.");
				return 4294967294;
			}
			if (fVar302 > fVar303)
			{
				fVar303 = fVar302;
				iVar600 = iVar598;
			}
			if (fVar302 < fParam1 && fVar302 > fParam2)
			{
				iVar1[iVar601] = iVar598;
				fVar304[iVar601] = fVar302;
				iVar601++;
				if (Function_337(Function_271(iVar598, 0, 2)) == 0)
				{
					PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - This location is NOT FINISHED.");
					PRINTNL();
					iVar148[iVar602] = iVar598;
					fVar451[iVar602] = fVar302;
					iVar602++;
				}
				else
				{
					PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - This location is FINISHED. ");
					PRINTNL();
				}
			}
		}
		if (iVar601 == iVar1)
		{
			iVar598 = 146;
			LOG_ERROR("Reached regCount max? Tell Ben.");
		}
		iVar598++;
	}
	if (iParam5 != 4294967295)
	{
		Function_423(&iVar1, &fVar304, iVar601);
		Function_423(&iVar148, &fVar451, iVar602);
	}
	if (iVar602 < 0 && iParam4 != 1)
	{
		switch (iParam5)
		{
			case 0x00000001:
			case 0x00000002:
				iVar603 = Function_27(3, iVar602);
				break;
			
			case 0x00000000:
			case 0x00000003:
				iVar603 = Function_27(5, iVar602);
				break;
			
			case 0x00000004:
				iVar603 = Function_27(7, iVar602);
				break;
			
			case 0x00000005:
				iVar603 = Function_27(10, iVar602);
				break;
			
			case 0xFFFFFFFF:
			default:
				iVar603 = Function_27(5, iVar602);
		}
		RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
		iVar599 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 99.0f)) % iVar603);
		iVar0 = iVar148[iVar599];
		if (Function_319(iVar0))
		{
			PRINTSTRING("Randomly picked NOT FINISHED Bounty Hunter location ");
		}
		else
		{
			LOG_ERROR("Invalid bountyHunterRegion picked. Using failsafe.");
			iVar0 = Function_422();
			PRINTSTRING("Picked close NOT FINISHED Bounty Hunter location ");
		}
		Var604 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_421(iVar0) };
		PRINTSTRING(&Var604);
		PRINTSTRING(" with a distance of ");
		Function_424(StackVal);
		vVar296 = { StackVal, StackVal, Function_424(StackVal) };
		fVar302 = VDIST(vVar299, vVar296);
		PRINTFLOAT(fVar302);
		PRINTNL();
	}
	else if (iVar601 >= 0)
	{
		switch (iParam5)
		{
			case 0x00000001:
			case 0x00000002:
				iVar603 = Function_27(3, iVar601);
				break;
			
			case 0x00000000:
			case 0x00000003:
				iVar603 = Function_27(5, iVar601);
				break;
			
			case 0x00000004:
				iVar603 = Function_27(7, iVar601);
				break;
			
			case 0x00000005:
			case 0x00000006:
				iVar603 = Function_27(10, iVar601);
				break;
			
			case 0xFFFFFFFF:
			default:
				iVar603 = Function_27(5, iVar601);
		}
		RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
		iVar599 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 99.0f)) % iVar603);
		iVar0 = iVar1[iVar599];
		if (Function_319(iVar0))
		{
			PRINTSTRING("Randomly picked FINISHED Bounty Hunter location ");
		}
		else
		{
			LOG_ERROR("Invalid bountyHunterRegion picked. Using failsafe.");
			iVar0 = Function_422();
			PRINTSTRING("Picked close FINISHED Bounty Hunter location ");
		}
		Var604 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_421(iVar0) };
		PRINTSTRING(&Var604);
		PRINTSTRING(" with a distance of ");
		Function_424(StackVal);
		vVar296 = { StackVal, StackVal, Function_424(StackVal) };
		fVar302 = VDIST(vVar299, vVar296);
		PRINTFLOAT(fVar302);
		PRINTNL();
	}
	else
	{
		LOG_ERROR("No valid landmark picked");
		PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK found no valid landmarks");
		PRINTNL();
		return iVar600;
	}
	return iVar0;
}

struct<32> Function_421(int iParam0) //Position: 0x1660C / 91660
{
	char* cVar0[32];
	
	strcpy(&cVar0, "INVALID REGION", 32);
	if (!Function_319(iParam0))
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	if (IS_VOLUME_VALID(StackVal))
	{
		strcpy(&cVar0, GET_OBJECT_NAME(StackVal), 32);
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	switch (StackVal)
	{
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
			memcpy(&cVar0, Global_29155[iParam010].f_20, 8);
			stradd(&cVar0, "v_region", 32);
			break;
		
		default:
			if (IS_VOLUME_VALID(StackVal))
			{
				strcpy(&cVar0, GET_OBJECT_NAME(StackVal), 32);
			}
			break;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_422() //Position: 0x166C9 / 91849
{
	if (Global_29004 == 0)
	{
		return Global_30640[6];
	}
	if (Global_29004 == 1)
	{
		return Global_30693[3];
	}
	return Global_30723[5];
}

void Function_423(int iParam0, float fParam1, int iParam2) //Position: 0x166F7 / 91895
{
	int iVar0;
	int iVar1;
	var uVar2;
	float fVar3;
	int iVar4;
	
	iVar0 = 1;
	while (iVar0 < (iParam2 - 1))
	{
		fVar3 = (*fParam1)[iVar0];
		uVar2 = (*iParam0)[iVar0];
		iVar1 = (iVar0 - 1);
		iVar4 = 0;
		while (iVar4 == 0)
		{
			if ((*fParam1)[iVar1] < fVar3)
			{
				(*fParam1)[iVar1 + 1] = (*fParam1)[iVar1];
				(*iParam0)[iVar1 + 1] = (*iParam0)[iVar1];
				iVar1 = (iVar1 - 1);
				if (iVar1 <= 0)
				{
					iVar4 = 1;
				}
			}
			else
			{
				iVar4 = 1;
			}
		}
		(*iParam0)[iVar1 + 1] = uVar2;
		(*fParam1)[iVar1 + 1] = fVar3;
		iVar0++;
	}
	return;
}

vector3 Function_424(bool bParam0) //Position: 0x16785 / 92037
{
	vector3 vVar0;
	
	GET_VOLUME_CENTER(iParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

bool Function_425(int iParam0) //Position: 0x16796 / 92054
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 1;
	if (iParam0 <= 32)
	{
		iVar1 = SHIFT_LEFT(iVar0, iParam0);
		if ((Global_26303 && iVar1) >= 0)
		{
			iVar2 = 1;
		}
		else
		{
			iVar2 = 0;
		}
	}
	else
	{
		iVar1 = SHIFT_LEFT(iVar0, (iParam0 - 32));
		if ((StackVal && iVar1) >= 0)
		{
			iVar2 = 1;
		}
		else
		{
			iVar2 = 0;
		}
	}
	return iVar2;
}

int Function_426(int iParam0) //Position: 0x167E8 / 92136
{
	int iVar0;
	int iVar1;
	
	iVar0 = GET_ACTOR_ENUM_FACTION(iParam0);
	switch (iVar0)
	{
		case 0x0000000F:
			iVar1 = 1;
			break;
		
		case 0x0000001B:
			iVar1 = 2;
			break;
		
		case 0x00000018:
			iVar1 = 3;
			break;
		
		case 0x0000000C:
			iVar1 = 4;
			break;
		
		case 0x00000019:
			iVar1 = 5;
			break;
		
		case 0x0000000E:
			iVar1 = 6;
			break;
		
		case 0x0000000D:
			iVar1 = 7;
			break;
		
		default:
			LOG_ERROR("BOUNTYHUNTER_GET_GANG_TYPE found an invalid actor faction");
			iVar1 = 7;
			break;
	}
	return iVar1;
}

int Function_427(int iParam0) //Position: 0x16897 / 92311
{
	return Function_376(iParam0);
}

bool Function_428(var uParam0, int iParam1) //Position: 0x168A2 / 92322
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam1)
	{
		case 0x00000000:
			uParam0->f_12 = 3;
			uParam0->f_20 = 415;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 26;
			break;
		
		case 0x00000001:
			uParam0->f_12 = 3;
			uParam0->f_20 = 416;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 27;
			break;
		
		case 0x00000002:
			uParam0->f_12 = 5;
			uParam0->f_20 = 422;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 28;
			break;
		
		case 0x00000003:
			uParam0->f_12 = 5;
			uParam0->f_20 = 423;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 29;
			break;
		
		case 0x00000004:
			uParam0->f_12 = 4;
			uParam0->f_20 = 418;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 30;
			break;
		
		case 0x00000005:
			uParam0->f_12 = 4;
			uParam0->f_20 = 419;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 31;
			break;
		
		case 0x00000006:
			uParam0->f_12 = 2;
			uParam0->f_20 = 397;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 12;
			break;
		
		case 0x00000007:
			uParam0->f_12 = 4;
			uParam0->f_20 = 398;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 32;
			break;
		
		case 0x00000008:
			uParam0->f_12 = 5;
			uParam0->f_20 = 403;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 33;
			break;
		
		case 0x00000009:
			uParam0->f_12 = 5;
			uParam0->f_20 = 404;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 34;
			break;
		
		case 0x0000000A:
			uParam0->f_12 = 4;
			uParam0->f_20 = 400;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 35;
			break;
		
		case 0x0000000B:
			uParam0->f_12 = 5;
			uParam0->f_20 = 401;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 36;
			break;
		
		case 0x0000000C:
			uParam0->f_12 = 2;
			uParam0->f_20 = 496;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 13;
			break;
		
		case 0x0000000D:
			uParam0->f_12 = 2;
			uParam0->f_20 = 497;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 14;
			break;
		
		case 0x0000000E:
			uParam0->f_12 = 4;
			uParam0->f_20 = 502;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 17;
			break;
		
		case 0x0000000F:
			uParam0->f_12 = 4;
			uParam0->f_20 = 503;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 5;
			break;
		
		case 0x00000010:
			uParam0->f_12 = 3;
			uParam0->f_20 = 499;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 18;
			break;
		
		case 0x00000011:
			uParam0->f_12 = 3;
			uParam0->f_20 = 500;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 19;
			break;
		
		case 0x00000012:
			uParam0->f_12 = 1;
			uParam0->f_20 = 477;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 1;
			break;
		
		case 0x00000013:
			uParam0->f_12 = 1;
			uParam0->f_20 = 478;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 42;
			break;
		
		case 0x00000014:
			uParam0->f_12 = 3;
			uParam0->f_20 = 483;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 41;
			break;
		
		case 0x00000015:
			uParam0->f_12 = 3;
			uParam0->f_20 = 484;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 2;
			break;
		
		case 0x00000016:
			uParam0->f_12 = 2;
			uParam0->f_20 = 480;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 3;
			break;
		
		case 0x00000017:
			uParam0->f_12 = 2;
			uParam0->f_20 = 481;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 4;
			break;
		
		case 0x00000018:
			uParam0->f_12 = 1;
			uParam0->f_20 = 505;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 43;
			break;
		
		case 0x00000019:
			uParam0->f_12 = 1;
			uParam0->f_20 = 506;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 44;
			break;
		
		case 0x0000001A:
			uParam0->f_12 = 3;
			uParam0->f_20 = 513;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 15;
			break;
		
		case 0x0000001B:
			uParam0->f_12 = 3;
			uParam0->f_20 = 514;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 6;
			break;
		
		case 0x0000001C:
			uParam0->f_12 = 2;
			uParam0->f_20 = 508;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 16;
			break;
		
		case 0x0000001D:
			uParam0->f_12 = 2;
			uParam0->f_20 = 509;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 7;
			break;
		
		case 0x0000001E:
			uParam0->f_12 = 1;
			uParam0->f_20 = 486;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 45;
			break;
		
		case 0x0000001F:
			uParam0->f_12 = 1;
			uParam0->f_20 = 487;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 46;
			break;
		
		case 0x00000020:
			uParam0->f_12 = 3;
			uParam0->f_20 = 492;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 8;
			break;
		
		case 0x00000021:
			uParam0->f_12 = 3;
			uParam0->f_20 = 493;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 9;
			break;
		
		case 0x00000022:
			uParam0->f_12 = 2;
			uParam0->f_20 = 489;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 10;
			break;
		
		case 0x00000023:
			uParam0->f_12 = 2;
			uParam0->f_20 = 490;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 11;
			break;
		
		case 0x00000024:
			uParam0->f_12 = 3;
			uParam0->f_20 = 467;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 47;
			break;
		
		case 0x00000025:
			uParam0->f_12 = 3;
			uParam0->f_20 = 468;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 48;
			break;
		
		case 0x00000026:
			uParam0->f_12 = 2;
			uParam0->f_20 = 406;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 20;
			break;
		
		case 0x00000027:
			uParam0->f_12 = 3;
			uParam0->f_20 = 407;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 21;
			break;
		
		case 0x00000028:
			uParam0->f_12 = 4;
			uParam0->f_20 = 412;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 22;
			break;
		
		case 0x00000029:
			uParam0->f_12 = 4;
			uParam0->f_20 = 413;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 23;
			break;
		
		case 0x0000002A:
			uParam0->f_12 = 3;
			uParam0->f_20 = 410;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 24;
			break;
		
		case 0x0000002B:
			uParam0->f_12 = 3;
			uParam0->f_20 = 411;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 25;
			break;
		
		case 0x0000002C:
			uParam0->f_12 = 2;
			uParam0->f_20 = 787;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 60;
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

var Function_429(int iParam0) //Position: 0x17015 / 94229
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000001:
			iVar0 = (4 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 2.0f)));
			break;
		
		case 0x00000002:
			iVar0 = (5 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 2.0f)));
			break;
		
		case 0x00000003:
			iVar0 = (6 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 2.0f)));
			break;
		
		case 0x00000004:
			iVar0 = (7 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 2.0f)));
			break;
		
		case 0x00000005:
			iVar0 = (8 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 2.0f)));
			break;
		
		case 0x00000006:
			iVar0 = (8 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 3.0f)));
			break;
		
		case 0x00000000:
		default:
			iVar0 = (4 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 5.0f)));
			break;
	}
	return iVar0;
}

bool Function_430() //Position: 0x170E3 / 94435
{
	return Function_102(StackVal, 1);
}

int Function_431() //Position: 0x170F2 / 94450
{
	int iVar0;
	
	iVar0 = Function_432(0);
	return iVar0;
}

var Function_432(int iParam0) //Position: 0x17100 / 94464
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = (Function_73(358) + Function_73(359));
	if (iParam0 == 1)
	{
		iVar2 = Function_27(iVar1, 7);
		if (iVar2 == 0)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 1000.0f)) % iVar2);
		}
	}
	else
	{
		if (iVar1 <= 2)
		{
			iVar0 = 1;
		}
		else if (iVar1 <= 4)
		{
			iVar0 = 2;
		}
		else
		{
			iVar0 = 3;
		}
		if (Global_29004 == 0)
		{
			iVar0 = iVar0;
		}
		else if (Global_29004 == 1)
		{
			iVar0++;
		}
		else
		{
			iVar0 += 2;
		}
	}
	return iVar0;
}

bool Function_433(bool bParam0) //Position: 0x17184 / 94596
{
	var uVar0;
	
	if (STRING_CONTAINS_STRING(bParam0, "horsebreaking"))
	{
		LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/Ambient/JobSystem/Job_HorseBreaking", &uVar0, 10, 0);
		return 1;
	}
	return 0;
}

bool Function_434(bool bParam0) //Position: 0x171DE / 94686
{
	var uVar0;
	struct<5> Var3;
	vector3 vVar9;
	vector3 vVar12;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	
	if (STRING_CONTAINS_STRING(bParam0, "dropcougar"))
	{
		bVar17 = GET_PLAYER_ACTOR(0);
		GET_POSITION(bVar17, &uVar0);
		GET_OBJECT_ORIENTATION(GET_OBJECT_FROM_ACTOR(bVar17), &Var3);
		vVar6 = { 0.0f, 0.0f, -3.0f };
		vVar9 = { StackVal, StackVal, vVar6 };
		vVar12 = { StackVal, StackVal, -Vector(vVar6, StackVal, StackVal) };
		ROTATE_VECTOR_XZ(StackVal, &vVar6, 0);
		bVar18 = GET_AMBIENT_LAYOUT();
		if (!IS_LAYOUTREF_VALID(bVar18))
		{
			SCRIPT_BREAKPOINT("Invalid layout");
		}
		bVar15 = Function_435(StackVal, StackVal, StackVal, bVar18, Function_123(), 1118, vVar9, (0.0f + 180.0f), 0.0f, GET_OBJECT_FROM_ACTOR(bVar17));
		bVar16 = Function_435(StackVal, StackVal, StackVal, bVar18, Function_123(), 1087, vVar12, (0.0f + 180.0f), 0.0f, GET_OBJECT_FROM_ACTOR(bVar17));
		if (!IS_ACTOR_VALID(bVar15) || !IS_ACTOR_VALID(bVar16))
		{
			SCRIPT_BREAKPOINT("Invalid guy");
		}
		return 1;
	}
	return 0;
}

var Function_435(bool bParam0, bool bParam1, int iParam2, vector3 vParam3, vector3 vParam6, var uParam9) //Position: 0x172C1 / 94913
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	
	vVar0 = { StackVal, StackVal, vParam3 };
	vVar3 = { StackVal, StackVal, vParam6 };
	Function_436(uParam9, 0, &vVar0, &vVar3);
	bVar6 = CREATE_ACTOR_IN_LAYOUT(uParam0, bParam1, iParam2, vVar0, vVar3);
	SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_ACTOR(bVar6), 50.0f, 0, 1092616192);
	return bVar6;
}

void Function_436(int iParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x1730C / 94988
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (GET_OBJECT_RELATIVE_POSITION(iParam0, *uParam2, &vVar0))
	{
		if (bParam1)
		{
			if (!Function_437(&vVar0, uParam2))
			{
				*uParam2 = { StackVal, StackVal, vVar0 };
			}
		}
		else
		{
			*uParam2 = { StackVal, StackVal, vVar0 };
		}
	}
	else
	{
		LOG_ERROR("Failed to get object relative position - perhaps the object type does not support transformations");
	}
	if (!GET_OBJECT_RELATIVE_ORIENTATION(iParam0, *uParam3, &vVar0))
	{
		LOG_ERROR("Failed to get object relative rotation - perhaps the object type does not support transformations");
		*uParam3 = { StackVal, StackVal, vVar0 };
	}
}

bool Function_437(var uParam0, int iParam1) //Position: 0x17434 / 95284
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(*uParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(uParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_94(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	*uParam0 = (*uParam0 + 0.01f);
	uParam0->f_8 = (StackVal + 0.01f);
	if (FIND_GROUND_INTERSECTION(uParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_94(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_438(bool bParam0) //Position: 0x1749F / 95391
{
	var uVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	
	if (STRING_CONTAINS_STRING(bParam0, "nbattleset"))
	{
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		REQUEST_ASSET(bParam0, 7);
		uVar0 = GET_ASSET_ID(bParam0, 7);
		STREAMING_REQUEST_PROPSET(uVar0);
		while (!STREAMING_IS_PROPSET_LOADED(uVar0))
		{
			WAIT(0);
		}
		GET_POSITION(GET_PLAYER_ACTOR(0), &vVar1);
		GET_ACTOR_AXIS(GET_PLAYER_ACTOR(0), &vVar7, 2);
		vVar10 = { StackVal, StackVal, vVar7 };
		VNORMALIZE(&vVar10);
		VSCALE(&vVar10, -20.0f);
		vVar1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar10, vVar1, StackVal) };
		GET_OBJECT_ORIENTATION(GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0)), &vVar4);
		Function_439(StackVal, StackVal, StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_123(), bParam0, vVar1, vVar4, 4294967295);
		STREAMING_EVICT_PROPSET(uVar0);
		return 1;
	}
	return 0;
}

var Function_439(var uParam0, var uParam1, var uParam2, vector3 vParam3, vector3 vParam6, int iParam9) //Position: 0x17545 / 95557
{
	var uVar0;
	bool bVar1;
	char* cVar2;
	bool bVar3;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	
	uVar0 = CREATE_PROPSET_IN_LAYOUT(uParam0, uParam1, uParam2, vParam3, vParam6);
	bVar1 = GET_LAYOUT_FROM_OBJECT(uVar0);
	cVar2 = CREATE_OBJECT_ITERATOR(bVar1);
	ITERATE_IN_LAYOUT(cVar2, bVar1);
	bVar3 = START_OBJECT_ITERATOR(cVar2);
	while (IS_OBJECT_VALID(bVar3))
	{
		if (!GET_OBJECT_TYPE(bVar3) != 57)
		{
			if (!iParam9 != 4294967295)
			{
				GET_OBJECT_POSITION(bVar3, &vVar4);
				vVar4 = { StackVal, StackVal, Vector(vVar4, StackVal, StackVal) + Vector(0.0f, 4.0f, 0.0f) };
				iVar7 = GET_MATERIAL_AT_VECTOR(&vVar4);
				if (!iVar7 != 0 && (iVar7 && iParam9) < 0)
				{
					PRINTSTRING("Deleting object. Materials were above");
					PRINTNL();
					DESTROY_OBJECT(bVar3);
				}
			}
			if (IS_OBJECT_VALID(bVar3))
			{
				if (DECOR_CHECK_EXIST(bVar3, "rstarInfoSnapping_Type"))
				{
					iVar8 = DECOR_CHECK_STRING(bVar3, "rstarInfoSnapping_Type", "align");
					SNAP_OBJECT_TO_GROUND(bVar3, 10.0f, iVar8, 1092616192);
				}
				NET_OBJECT_SET_REPLICATION_MODE(bVar3, 0);
				if (Function_129())
				{
					SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_OBJECT(bVar3), 1);
				}
			}
		}
		bVar3 = OBJECT_ITERATOR_NEXT(cVar2);
	}
	STORE_MOBILE_LAYOUT_TRANSFORMS(GET_MOBILE_LAYOUT_FROM_OBJECT(uVar0));
	ADD_AI_COVERSET_FOR_PROPSET(uVar0);
	DESTROY_ITERATOR(cVar2);
	return uVar0;
}

bool Function_440(bool bParam0) //Position: 0x1768E / 95886
{
	bool bVar0;
	bool bVar1;
	
	if (STRING_CONTAINS_STRING(bParam0, "killvehicle"))
	{
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		bVar0 = GET_PLAYER_ACTOR(0);
		bVar1 = GET_VEHICLE(bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			KILL_ACTOR(bVar1);
		}
		return 1;
	}
	return 0;
}

bool Function_441(bool bParam0) //Position: 0x176CD / 95949
{
	int iVar1;
	struct<5> Var2;
	
	if (STRING_CONTAINS_STRING(bParam0, "getmat"))
	{
		FIND_GROUND_INTERSECTION(&Global_34574, 2.0f, &Var2, &uVar5);
		Var2.f_4 = (StackVal + 1.0f);
		iVar1 = GET_MATERIAL_AT_VECTOR(&Var2);
		PRINTSTRING("Material flags ");
		PRINTINT(iVar1);
		PRINTSTRING(" found at player position: ");
		PRINTVECTOR(Global_34574);
		PRINTNL();
		if (iVar1 <= 0)
		{
			PRINTSTRING("   AIMATERIALFLAG_INVALID");
		}
		else
		{
			while (iVar1 > 0)
			{
				if (iVar1 > 512)
				{
					PRINTSTRING("   AIMATERIALFLAG_WATER");
					iVar1 = (iVar1 - 512);
				}
				else if (iVar1 > 256)
				{
					PRINTSTRING("   AIMATERIALFLAG_RESERVED");
					iVar1 = (iVar1 - 256);
				}
				else if (iVar1 > 128)
				{
					PRINTSTRING("   AIMATERIALFLAG_TRAINTRACKS");
					iVar1 = (iVar1 - 128);
				}
				else if (iVar1 > 64)
				{
					PRINTSTRING("   AIMATERIALFLAG_VEHICLEPATH");
					iVar1 = (iVar1 - 64);
				}
				else if (iVar1 > 32)
				{
					PRINTSTRING("   AIMATERIALFLAG_HORSEPATH");
					iVar1 = (iVar1 - 32);
				}
				else if (iVar1 > 16)
				{
					PRINTSTRING("   AIMATERIALFLAG_PEDPATH");
					iVar1 = (iVar1 - 16);
				}
				else if (iVar1 > 8)
				{
					PRINTSTRING("   AIMATERIALFLAG_GENERICSPAWN");
					iVar1 = (iVar1 - 8);
				}
				else if (iVar1 > 1)
				{
					PRINTSTRING("   AIMATERIALFLAG_TERRAIN");
					iVar1 = (iVar1 - 1);
				}
				else if (iVar1 == 0)
				{
					PRINTSTRING("   AIMATERIALFLAG_ANY");
					iVar1 = 4294967295;
				}
				PRINTNL();
			}
		}
		LOG_ERROR("Printed materials to output");
		return 1;
	}
	return 0;
}

bool Function_442(bool bParam0) //Position: 0x17953 / 96595
{
	var uVar0;
	struct<5> Var3;
	vector3 vVar9;
	bool bVar12;
	var uVar13;
	bool bVar14;
	int iVar15;
	bool bVar16;
	struct<8> Var17;
	bool bVar25;
	
	if (STRING_CONTAINS_STRING(bParam0, "dropai"))
	{
		bVar16 = GET_CONSOLE_COMMAND_TOKEN(1);
		bVar14 = GET_PLAYER_ACTOR(0);
		GET_POSITION(bVar14, &uVar0);
		GET_OBJECT_ORIENTATION(GET_OBJECT_FROM_ACTOR(bVar14), &Var3);
		vVar6 = { 0.0f, 0.0f, -3.0f };
		ROTATE_VECTOR_XZ(StackVal, &vVar6, 0);
		strcpy(&Var17, "ndroppedAI", 32);
		Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_277(&Var17) };
		bVar25 = GET_AMBIENT_LAYOUT();
		if (!IS_LAYOUTREF_VALID(bVar25))
		{
			SCRIPT_BREAKPOINT("Invalid layout");
		}
		if (STRINGS_ARE_EQUAL(bVar16, "bigfist"))
		{
			iVar15 = 375;
		}
		else
		{
			iVar15 = 397;
		}
		bVar12 = Function_435(StackVal, StackVal, StackVal, bVar25, &Var17, iVar15, vVar9, (0.0f + 180.0f), 0.0f, GET_OBJECT_FROM_ACTOR(bVar14));
		if (!IS_ACTOR_VALID(bVar12))
		{
			SCRIPT_BREAKPOINT("Invalid guy");
		}
		if (STRINGS_ARE_EQUAL(bVar16, "knife"))
		{
			DELETE_ALL_WEAPONS_FROM_ACTOR(bVar12);
			GIVE_WEAPON_TO_ACTOR(bVar12, 22, 0, 1, 1);
			ACTOR_PUT_WEAPON_IN_HAND(bVar12, 22, 1);
			TASK_KILL_CHAR(bVar12, bVar14);
		}
		else if (STRINGS_ARE_EQUAL(bVar16, "bigfist"))
		{
			DELETE_ALL_WEAPONS_FROM_ACTOR(bVar12);
			TASK_MELEE_ATTACK(bVar12, bVar14, -1.0f);
		}
		else if (STRINGS_ARE_EQUAL(bVar16, "horse"))
		{
			DELETE_ALL_WEAPONS_FROM_ACTOR(bVar12);
			strcpy(&Var17, "droppedHorse", 32);
			Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_277(&Var17) };
			uVar13 = Function_435(StackVal, StackVal, StackVal, bVar25, &Var17, 976, vVar9, (0.0f + 180.0f), 0.0f, GET_OBJECT_FROM_ACTOR(bVar14));
			ACTOR_MOUNT_ACTOR(bVar12, uVar13);
		}
		else
		{
			DELETE_ALL_WEAPONS_FROM_ACTOR(bVar12);
		}
		return 1;
	}
	return 0;
}

bool Function_443(int iParam0) //Position: 0x17AEC / 97004
{
	iParam0 = iParam0;
	return 0;
}

bool Function_444(bool bParam0) //Position: 0x17AF7 / 97015
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (STRING_CONTAINS_STRING(bParam0, "unlock"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 1)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			if (STRING_CONTAINS_STRING(bVar0, "map"))
			{
				bVar1 = GET_CONSOLE_COMMAND_TOKEN(2);
				if (STRING_CONTAINS_STRING(bVar1, "all"))
				{
					iVar2 = 0;
					while (iVar2 <= Global_29008)
					{
						Function_375(iVar2);
						iVar2++;
					}
				}
				else
				{
					iVar2 = 0;
					while (iVar2 <= Global_29008)
					{
						if (STRING_CONTAINS_STRING(&Global_29155[iVar210] + 20, bVar1))
						{
							Function_375(iVar2);
						}
						iVar2++;
					}
				}
			}
		}
		return 1;
	}
	return 0;
}

bool Function_445(bool bParam0) //Position: 0x17B86 / 97158
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (STRING_CONTAINS_STRING(bParam0, "updatestat"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 0)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			bVar1 = GET_CONSOLE_COMMAND_TOKEN(2);
			iVar3 = STRING_TO_INT(bVar0);
			fVar4 = STRING_TO_FLOAT(bVar1);
			if (iVar3 < 4294967295 && iVar3 >= 696)
			{
				if (fVar4 < 0.0f)
				{
					iVar2 = iVar3;
					Function_323(iVar2, fVar4);
				}
				else
				{
					iVar2 = iVar3;
					Function_446(iVar2, FABS(fVar4));
				}
			}
		}
		return 1;
	}
	return 0;
}

int Function_446(int iParam0, float fParam1) //Position: 0x17BF8 / 97272
{
	int iVar0;
	int iVar1;
	
	Function_447(iParam0, fParam1, 0);
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (fParam1 > 0.0f)
	{
		LOG_ERROR("STAT_DECREASE: fDecreaseValue < 0 - I am turning this into a positive number for you!");
		fParam1 = FABS(fParam1);
	}
	iVar1 = Function_33(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_49205[iVar120].f_72 != 2 || Global_49205[iVar120].f_72 != 3)
		{
			Global_49199[iVar1] = (Global_49199[iVar1] + fParam1);
			strcpy(&Global_49205[iVar120] + 8, "QME-", 8);
			strcpy(&(Global_49205[iVar120]), INT_TO_STRING(iVar0), 8);
			Global_49205[iVar120].f_48 = 26;
			Global_49205[iVar120].f_68 = iParam0;
			Global_49205[iVar120].f_72 = 2;
			return 1;
		}
	}
	iVar1 = Function_13();
	Global_49199[iVar1] = fParam1;
	strcpy(&Global_49205[iVar120] + 8, "QME-", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(iVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 2;
	return 1;
}

int Function_447(int iParam0, float fParam1, int iParam2) //Position: 0x17D84 / 97668
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_DECREASE_NOW: You cannot decrease this STAT_TYPE_LIFETIME: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_DECREASE_NOW: You cannot decrease a STAT_TYPE_LIFETIME!");
		return 0;
	}
	if (Global_35278[iParam020].f_48 != 2 && Global_34581[iParam0] >= 0.0f)
	{
		Global_34581[iParam0] = 0.0f;
		return 1;
	}
	if (fParam1 > 0.0f)
	{
		LOG_ERROR("\STAT_DECREASE_NOW: fDecreaseValue < 0.0 - I am turning this into a positive number for you!");
		fParam1 = FABS(fParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] - fParam1);
	Function_31(iParam0);
	if (iParam2 && fParam1 == 0.0f)
	{
		Function_21(iParam0, 0, fParam1, 0, 1, 0x40400000, 0, 0);
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= ROUND(fParam1))
		{
			REMOVE_COLLECTABLE(&(Global_35278[iParam020]), Global_34573);
			iVar1++;
		}
	}
	return 1;
}

bool Function_448(bool bParam0) //Position: 0x17F6F / 98159
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (STRING_CONTAINS_STRING(bParam0, "chartest"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 0)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			bVar1 = GET_CONSOLE_COMMAND_TOKEN(2);
			iVar2 = 0;
			while (iVar2 <= Global_29008)
			{
				if (STRINGS_ARE_EQUAL(&Global_29155[iVar210] + 20, bVar0))
				{
					Global_62481 = iVar2;
				}
				iVar2++;
			}
			Global_62483 = STRING_TO_INT(bVar1);
			if (Global_62481 <= 0)
			{
				Global_62481 = 0;
			}
			if (Global_62483 <= 0)
			{
				Global_62483 = 0;
			}
		}
		else
		{
			Global_62481 = 0;
			Global_62483 = 0;
		}
		Global_62480 = 1;
		return 1;
	}
	return 0;
}

bool Function_449(bool bParam0) //Position: 0x17FF5 / 98293
{
	if (STRING_CONTAINS_STRING(bParam0, "regiontest"))
	{
		Global_62479 = 1;
		return 1;
	}
	return 0;
}

bool Function_450(bool bParam0) //Position: 0x1801B / 98331
{
	bool bVar0;
	bool bVar1;
	
	if (STRING_CONTAINS_STRING(bParam0, "missiontest"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 0)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			bVar1 = GET_CONSOLE_COMMAND_TOKEN(2);
			Global_62481 = STRING_TO_INT(bVar0);
			Global_62482 = STRING_TO_INT(bVar1);
			if (Global_62481 <= 0)
			{
				Global_62481 = 0;
			}
			if (Global_62482 <= 0)
			{
				Global_62482 = 0;
			}
		}
		else
		{
			Global_62481 = 0;
			Global_62482 = 0;
		}
		Global_62478 = 1;
		return 1;
	}
	return 0;
}

bool Function_451(bool bParam0) //Position: 0x18082 / 98434
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	if (STRING_CONTAINS_STRING(bParam0, "ppp"))
	{
		iVar0 = GET_NUM_CONSOLE_COMMAND_TOKENS();
		iVar1 = 0;
		PRINTSTRING("Console Print: ");
		iVar1 = 1;
		while (iVar1 < iVar0)
		{
			bVar2 = GET_CONSOLE_COMMAND_TOKEN(iVar1);
			PRINTSTRING(bVar2);
			PRINTSTRING(" ");
			iVar1++;
		}
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() == 2)
		{
			bVar3 = GET_CONSOLE_COMMAND_TOKEN(1);
			RESET_ANALOG_POSITIONS(0, STRING_TO_FLOAT(bVar3));
		}
		return 1;
	}
	return 0;
}

bool Function_452(bool bParam0) //Position: 0x180F5 / 98549
{
	bool bVar0;
	char* cVar1;
	bool bVar2;
	char* cVar3;
	vector3 vVar4;
	bool bVar7;
	
	if (STRING_CONTAINS_STRING(bParam0, "crime"))
	{
		cVar3 = Global_26118;
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 0)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			if (STRING_CONTAINS_STRING(bVar0, "new"))
			{
				GET_POSITION(GET_PLAYER_ACTOR(0), &vVar4);
				ITERATE_IN_SPHERE(cVar3, vVar4, 15.0f);
				ITERATE_ON_OBJECT_TYPE(cVar3, 15);
				if (GET_NUM_ITERATOR_MATCHES(cVar3) < 0 && IS_LAYOUTREF_VALID(Global_26314))
				{
					bVar7 = START_OBJECT_ITERATOR(cVar3);
					if (IS_OBJECT_VALID(bVar7))
					{
						Function_453(1, 0, GET_PLAYER_ACTOR(0), bVar7, 0);
						GET_OBJECT_POSITION(bVar7, &vVar4);
						PRINTSTRING(GET_SHORT_SCRIPT_NAME());
						PRINTSTRING(": New Console Crime!");
						PRINTVECTOR(vVar4);
						PRINTNL();
					}
				}
				else if (GET_NUM_ITERATOR_MATCHES(cVar3) == 0)
				{
				}
				else if (!IS_LAYOUTREF_VALID(Global_26314))
				{
				}
			}
			else if (STRING_CONTAINS_STRING(bVar0, "report"))
			{
				cVar1 = CREATE_OBJECT_ITERATOR(Global_26314);
				if (IS_ITERATOR_VALID(cVar1))
				{
					ITERATE_EVERYWHERE(cVar1);
					ITERATE_ON_OBJECT_TYPE(cVar1, 31);
					if (GET_NUM_ITERATOR_MATCHES(cVar1) >= 0)
					{
						bVar2 = START_OBJECT_ITERATOR(cVar1);
						while (IS_OBJECT_VALID(bVar2))
						{
							if (!GET_CRIME_WITNESSED(GET_CRIME_FROM_OBJECT(bVar2)) != 3)
							{
								SET_CRIME_WITNESSED(GET_CRIME_FROM_OBJECT(bVar2), 3);
								DESTROY_ITERATOR(cVar1);
								return 1;
							}
							bVar2 = OBJECT_ITERATOR_NEXT(cVar1);
						}
					}
				}
				DESTROY_ITERATOR(cVar1);
			}
			else if (STRING_CONTAINS_STRING(bVar0, "upgrade"))
			{
				GET_POSITION(GET_PLAYER_ACTOR(0), &vVar4);
				ITERATE_IN_SPHERE(cVar3, vVar4, 15.0f);
				ITERATE_ON_OBJECT_TYPE(cVar3, 15);
				if (GET_NUM_ITERATOR_MATCHES(cVar3) < 0 && IS_LAYOUTREF_VALID(Global_26314))
				{
					bVar7 = START_OBJECT_ITERATOR(cVar3);
					if (IS_OBJECT_VALID(bVar7))
					{
						Function_453(2, 0, GET_PLAYER_ACTOR(0), bVar7, 0);
						GET_OBJECT_POSITION(bVar7, &vVar4);
						PRINTSTRING(GET_SHORT_SCRIPT_NAME());
						PRINTSTRING(": New Console Crime!");
						PRINTVECTOR(vVar4);
						PRINTNL();
					}
				}
				else if (GET_NUM_ITERATOR_MATCHES(cVar3) == 0)
				{
				}
				else if (!IS_LAYOUTREF_VALID(Global_26314))
				{
				}
			}
			else if (STRING_CONTAINS_STRING(bVar0, "finish"))
			{
				cVar1 = CREATE_OBJECT_ITERATOR(Global_26314);
				if (IS_ITERATOR_VALID(cVar1))
				{
					ITERATE_EVERYWHERE(cVar1);
					ITERATE_ON_OBJECT_TYPE(cVar1, 31);
					if (GET_NUM_ITERATOR_MATCHES(cVar1) >= 0)
					{
						bVar2 = START_OBJECT_ITERATOR(cVar1);
						while (IS_OBJECT_VALID(bVar2))
						{
							if (IS_CRIME_IN_PROGRESS(GET_CRIME_FROM_OBJECT(bVar2)))
							{
								SET_CRIME_IN_PROGRESS(GET_CRIME_FROM_OBJECT(bVar2), 0);
								DESTROY_ITERATOR(cVar1);
								return 1;
							}
							bVar2 = OBJECT_ITERATOR_NEXT(cVar1);
						}
					}
				}
				DESTROY_ITERATOR(cVar1);
			}
		}
		return 1;
	}
	return 0;
}

var Function_453(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x1836E / 99182
{
	vector3 vVar0;
	var uVar3;
	bool bVar4;
	var uVar5;
	
	if (!Function_457(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_456(iParam1))
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
	if (!Function_64(1))
	{
		LOG_ERROR("Crime is disabled: CREATE_CRIME_EVENT failure");
		return "";
	}
	uVar3 = CREATE_CRIME_IN_LAYOUT(Global_26314);
	bVar4 = FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes");
	if ((IS_CRIME_VALID(uVar3) && IS_OBJECT_VALID(bVar4)) && GET_OBJECT_TYPE(bVar4) != 2)
	{
		SET_CRIME_TYPE(uVar3, iParam1);
		SET_CRIME_VICTIM(uVar3, bParam3);
		SET_CRIME_CRIMINAL(uVar3, bParam2);
		SET_CRIME_BEGIN_TIMESTAMP(uVar3, GET_CURRENT_GAME_TIME());
		SET_CRIME_END_TIMESTAMP(uVar3, GET_CURRENT_GAME_TIME());
		GET_OBJECT_POSITION(bParam3, &vVar0);
		SET_CRIME_POSITION(uVar3, vVar0);
		uVar5 = CREATE_OBJECTSET_IN_LAYOUT(Function_123(), Global_26314, 3, 0);
		SET_CRIME_OBJECTSET(uVar3, uVar5);
		if (!bParam4)
		{
			SET_CRIME_WITNESSED(uVar3, 1);
		}
		else
		{
			SET_CRIME_WITNESSED(uVar3, 3);
			Function_454();
		}
		SET_CRIME_FACTION(StackVal, uVar3);
		SET_CRIME_TALLIED(uVar3, 0);
		SET_CRIME_COUNTER(uVar3, 1);
		SET_CRIME_WORLD_REGION(uVar3, Global_26361.f_12);
		if ((Global_26998[iParam118].f_20 != 2 || Global_26998[iParam118].f_20 != 3) || Global_26998[iParam118].f_20 != 4)
		{
			SET_CRIME_IN_PROGRESS(uVar3, 1);
		}
		else
		{
			SET_CRIME_IN_PROGRESS(uVar3, 0);
		}
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_CRIME(uVar3), GET_OBJECTSET_FROM_OBJECT(bVar4));
		SET_ACTOR_TIME_OF_LAST_CRIME(bParam2, GET_CURRENT_GAME_TIME());
	}
	return uVar3;
}

void Function_454() //Position: 0x185FE / 99838
{
	char* cVar0;
	var uVar1;
	bool bVar2;
	var uVar3;
	
	cVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	uVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_455(cVar0, uVar1);
	bVar2 = START_OBJECT_ITERATOR(cVar0);
	while (IS_OBJECT_VALID(bVar2))
	{
		uVar3 = GET_CRIME_FROM_OBJECT(bVar2);
		if (IS_CRIME_VALID(uVar3))
		{
			SET_CRIME_WITNESSED(uVar3, 3);
		}
		bVar2 = OBJECT_ITERATOR_NEXT(cVar0);
	}
	DESTROY_ITERATOR(cVar0);
	return;
}

void Function_455(char* cParam0, int iParam1) //Position: 0x18661 / 99937
{
	ITERATE_EVERYWHERE(cParam0);
	ITERATE_ON_OBJECT_TYPE(cParam0, 31);
	if (!iParam1 != "")
	{
		ITERATE_IN_SET(cParam0, iParam1);
	}
	else
	{
		ITERATE_IN_LAYOUT(cParam0, GET_ITERATOR_PARENT(cParam0));
	}
	return;
}

bool Function_456(int iParam0) //Position: 0x18690 / 99984
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_457(int iParam0) //Position: 0x186A6 / 100006
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_458(bool bParam0) //Position: 0x186BB / 100027
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (STRING_CONTAINS_STRING(bParam0, "setweather"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 2)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			bVar1 = GET_CONSOLE_COMMAND_TOKEN(2);
			iVar2 = 1;
			if (STRINGS_ARE_EQUAL(bVar0, "fair"))
			{
				iVar2 = 1;
			}
			else if (STRINGS_ARE_EQUAL(bVar0, "rainy"))
			{
				iVar2 = 3;
			}
			else if (STRINGS_ARE_EQUAL(bVar0, "stormy"))
			{
				iVar2 = 4;
			}
			else if (STRINGS_ARE_EQUAL(bVar0, "snowy"))
			{
				iVar2 = 5;
			}
			else if (STRINGS_ARE_EQUAL(bVar0, "clear"))
			{
				iVar2 = 0;
			}
			Function_459(iVar2, FLOOR(STRING_TO_FLOAT(bVar1)), 0, 0, 0);
		}
		return 1;
	}
	return 0;
}

void Function_459(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x18770 / 100208
{
	int iVar0;
	int iVar1;
	
	Function_384(uParam0);
	Global_16524.f_4 = uParam0;
	Global_16524.f_16 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_460(StackVal, bParam4);
		}
		else
		{
			iVar1 = MAKE_TIME_OF_DAY(iParam1, iParam2, iParam3);
			Function_381(StackVal, iVar1, bParam4);
		}
	}
}

void Function_460(int iParam0, int iParam1) //Position: 0x187E2 / 100322
{
	var uVar0;
	
	uVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_384(iParam0);
	Function_383(uVar0);
	PRINTNL();
	Function_381(iParam0, uVar0, iParam1);
	return;
}

bool Function_461(bool bParam0) //Position: 0x18807 / 100359
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (STRING_CONTAINS_STRING(bParam0, "setwind"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 3)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			bVar1 = GET_CONSOLE_COMMAND_TOKEN(2);
			bVar2 = GET_CONSOLE_COMMAND_TOKEN(3);
			SET_WIND(STRING_TO_FLOAT(bVar0), STRING_TO_FLOAT(bVar1), STRING_TO_FLOAT(bVar2));
		}
		return 1;
	}
	if (STRING_CONTAINS_STRING(bParam0, "autowind"))
	{
		SET_AUTO_WIND();
		return 1;
	}
	return 0;
}

bool Function_462(bool bParam0) //Position: 0x1886B / 100459
{
	if (STRING_CONTAINS_STRING(bParam0, "invert_y"))
	{
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		if (STRING_CONTAINS_STRING(bParam0, "false"))
		{
			SET_LOOKSTICK_INVERT_Y(0);
		}
		else
		{
			SET_LOOKSTICK_INVERT_Y(1);
		}
		return 1;
	}
	return 0;
}

bool Function_463(bool bParam0) //Position: 0x188A8 / 100520
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	vector3 vVar5;
	struct<8> Var8;
	
	if (STRING_CONTAINS_STRING(bParam0, "gps"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 3)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			bVar1 = GET_CONSOLE_COMMAND_TOKEN(2);
			bVar2 = GET_CONSOLE_COMMAND_TOKEN(3);
			vVar5 = { STRING_TO_FLOAT(bVar0), STRING_TO_FLOAT(bVar1), STRING_TO_FLOAT(bVar2) };
			Function_467(1.0f, 0.0f, 1.0f);
			Function_465(STRING_TO_FLOAT(bVar0), STRING_TO_FLOAT(bVar1), STRING_TO_FLOAT(bVar2));
		}
		else if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 1)
		{
			bVar3 = GET_CONSOLE_COMMAND_TOKEN(1);
			iVar4 = Function_464(bVar3);
			if (Function_319(iVar4))
			{
				GET_OBJECT_POSITION(StackVal, &vVar5);
				Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_421(iVar4) };
				Function_465(StackVal, StackVal, vVar5);
			}
		}
		return 1;
	}
	return 0;
}

var Function_464(bool bParam0) //Position: 0x18945 / 100677
{
	int iVar0;
	bool bVar1;
	char* cVar2;
	bool bVar3;
	
	iVar0 = 0;
	while (iVar0 < (Global_29008 - 1))
	{
		if (STRING_CONTAINS_STRING(&Global_29155[iVar010] + 20, bParam0))
		{
			return iVar0;
		}
		iVar0++;
	}
	bVar1 = FIND_NAMED_LAYOUT("regions_layout");
	if (IS_LAYOUTREF_VALID(bVar1))
	{
		cVar2 = CREATE_OBJECT_ITERATOR(bVar1);
		if (IS_ITERATOR_VALID(cVar2))
		{
			bVar3 = START_OBJECT_ITERATOR(cVar2);
			while (IS_OBJECT_VALID(bVar3))
			{
				if (STRING_CONTAINS_STRING(GET_OBJECT_NAME(bVar3), bParam0))
				{
					iVar0 = 0;
					while (iVar0 < (Global_29008 - 1))
					{
						if (StackVal == GET_VOLUME_FROM_OBJECT(bVar3))
						{
							return iVar0;
						}
						iVar0++;
					}
				}
				bVar3 = OBJECT_ITERATOR_NEXT(cVar2);
			}
			DESTROY_ITERATOR(cVar2);
		}
	}
	return 4294967295;
}

void Function_465(vector3 vParam0) //Position: 0x189FE / 100862
{
	*(&Global_28210 + 24) = { StackVal, StackVal, vParam0 };
	*(&Global_28210 + 36) = { StackVal, StackVal, vParam0 };
	Global_28210 = 1;
	Global_28210.f_4 = 0;
	Global_28210.f_60 = 3;
	Global_28210.f_16 = 393264;
	if (!IS_OBJECTSET_VALID(Global_28210.f_12))
	{
		Global_28210.f_12 = CREATE_OBJECTSET_IN_LAYOUT(StackVal, "UserGPSPath", 36, 1);
	}
	if (GET_OBJECTSET_SIZE(Global_28210.f_12) >= 0)
	{
		Function_466(Global_28210.f_12);
		CLEAN_OBJECTSET(Global_28210.f_12);
	}
	Global_28210.f_92 = 1;
	Global_28210.f_96 = 1;
	return;
}

void Function_466(int iParam0) //Position: 0x18A85 / 100997
{
	bool bVar0;
	
	if (!IS_OBJECTSET_VALID(iParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(iParam0) >= 0)
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(0, iParam0);
		REMOVE_OBJECT_FROM_OBJECTSET(bVar0, iParam0);
		CLEAN_OBJECTSET(iParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			RELEASE_CURVE(GET_CURVE_FROM_OBJECT(bVar0));
		}
	}
	return;
}

void Function_467(var uParam0, var uParam1, int iParam2) //Position: 0x18AC5 / 101061
{
	Global_28185.f_60 = 5;
	Global_28185.f_64 = uParam0;
	Global_28185.f_68 = uParam1;
	Global_28185.f_72 = iParam2;
	return;
}

bool Function_468(bool bParam0) //Position: 0x18AE6 / 101094
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (STRING_CONTAINS_STRING(bParam0, "teleport"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 3)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			bVar1 = GET_CONSOLE_COMMAND_TOKEN(2);
			bVar2 = GET_CONSOLE_COMMAND_TOKEN(3);
			Function_469(STRING_TO_FLOAT(bVar0), STRING_TO_FLOAT(bVar1), STRING_TO_FLOAT(bVar2), "TELEPORTING...", "", 1, 1);
		}
		return 1;
	}
	return 0;
}

void Function_469(vector3 vParam0, char* cParam3, char* cParam4, var uParam5, var uParam6) //Position: 0x18B46 / 101190
{
	Global_13112.f_72 = 4294967295;
	Global_13112 = { StackVal, StackVal, vParam0 };
	strcpy(&Global_13112 + 24, cParam3, 24);
	strcpy(&Global_13112 + 48, cParam4, 24);
	Global_13112.f_76 = uParam5;
	Global_13112.f_80 = uParam6;
}

bool Function_470(bool bParam0) //Position: 0x18B7D / 101245
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (STRING_CONTAINS_STRING(bParam0, "nvteleport"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 1)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			uVar1 = Function_464(bVar0);
			if (Function_319(uVar1))
			{
				memcpy(&uVar2, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_421(uVar1), 4);
				Function_471(uVar1, "Teleporting to %s...", &uVar2, 1, 1);
			}
		}
		return 1;
	}
	return 0;
}

void Function_471(var uParam0, char* cParam1, char* cParam2, var uParam3, var uParam4) //Position: 0x18BE4 / 101348
{
	Global_13112.f_72 = uParam0;
	Global_13112 = { 0.0f, 0.0f, 0.0f };
	strcpy(&Global_13112 + 24, cParam1, 24);
	strcpy(&Global_13112 + 48, cParam2, 24);
	Global_13112.f_76 = uParam3;
	Global_13112.f_80 = uParam4;
}

bool Function_472(bool bParam0) //Position: 0x18C1B / 101403
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (STRING_CONTAINS_STRING(bParam0, "print"))
	{
		iVar1 = GET_NUM_CONSOLE_COMMAND_TOKENS();
		iVar2 = 0;
		PRINTSTRING("Console Print: ");
		iVar2 = 1;
		while (iVar2 < iVar1)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(iVar2);
			PRINTSTRING(bVar0);
			PRINTSTRING(" ");
			iVar2++;
		}
		PRINTNL();
		return 1;
	}
	return 0;
}

bool Function_473(bool bParam0) //Position: 0x18C7A / 101498
{
	bool bVar0;
	
	if (STRING_CONTAINS_STRING(bParam0, "toggle"))
	{
		bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 2)
		{
			if (STRINGS_ARE_EQUAL(bVar0, "channel"))
			{
				return Function_478();
			}
			if (STRINGS_ARE_EQUAL(bVar0, "flag"))
			{
				return Function_474();
			}
			return 0;
		}
	}
	return 0;
}

int Function_474() //Position: 0x18CD3 / 101587
{
	bool bVar0;
	
	bVar0 = GET_CONSOLE_COMMAND_TOKEN(2);
	if (STRINGS_ARE_EQUAL(bVar0, "ambient"))
	{
		if (Function_265(4))
		{
			Function_264(4);
		}
		else
		{
			Function_477(4);
		}
	}
	else if (STRINGS_ARE_EQUAL(bVar0, "missions"))
	{
		if (Global_3374 == 1)
		{
			Global_3374 = 0;
		}
		else
		{
			Global_3374 = 1;
		}
	}
	else if (STRINGS_ARE_EQUAL(bVar0, "ntutorials"))
	{
		if (Global_3375 == 1)
		{
			Global_3375 = 0;
		}
		else
		{
			Global_3375 = 1;
		}
	}
	else if (STRINGS_ARE_EQUAL(bVar0, "ambientpop"))
	{
		if (Function_265(1))
		{
			Function_264(1);
		}
		else
		{
			Function_477(1);
		}
		ENABLE_AMBIENT_SPAWNING(Function_265(1));
	}
	else if (STRINGS_ARE_EQUAL(bVar0, "locname"))
	{
		if (Function_265(32))
		{
			Function_264(32);
		}
		else
		{
			Function_477(32);
		}
	}
	else if (STRINGS_ARE_EQUAL(bVar0, "clock"))
	{
		if (Function_265(64))
		{
			Function_264(64);
		}
		else
		{
			Function_477(64);
		}
	}
	else if (STRINGS_ARE_EQUAL(bVar0, "adebug"))
	{
		if (Function_265(128))
		{
			Function_264(128);
		}
		else
		{
			Function_477(128);
		}
	}
	else if (STRINGS_ARE_EQUAL(bVar0, "law"))
	{
		if (!Function_57(256))
		{
			Function_476(256);
		}
		else
		{
			Function_475(256);
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

void Function_475(int iParam0) //Position: 0x18E30 / 101936
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_476(int iParam0) //Position: 0x18E4D / 101965
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_477(int iParam0) //Position: 0x18E60 / 101984
{
	if (Function_102(iParam0, 1) && !Function_102(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || iParam0);
	Global_26119 |= 1073741824;
	return;
}

int Function_478() //Position: 0x18E8D / 102029
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	bVar1 = GET_CONSOLE_COMMAND_TOKEN(2);
	if (STRINGS_ARE_EQUAL(bVar1, "ncallstack"))
	{
		iVar0 = 0;
	}
	else if (STRINGS_ARE_EQUAL(bVar1, "global"))
	{
		iVar0 = 7;
	}
	else if (STRINGS_ARE_EQUAL(bVar1, "ambient"))
	{
		iVar0 = 1;
	}
	else if (STRINGS_ARE_EQUAL(bVar1, "regional"))
	{
		iVar0 = 3;
	}
	else if (STRINGS_ARE_EQUAL(bVar1, "mission"))
	{
		iVar0 = 2;
	}
	else if (STRINGS_ARE_EQUAL(bVar1, "launcher"))
	{
		iVar0 = 5;
	}
	else if (STRINGS_ARE_EQUAL(bVar1, "gringo"))
	{
		iVar0 = 8;
	}
	else if (STRINGS_ARE_EQUAL(bVar1, "layout"))
	{
		iVar0 = 9;
	}
	else if (STRINGS_ARE_EQUAL(bVar1, "tutorial"))
	{
		iVar0 = 6;
	}
	else if (STRINGS_ARE_EQUAL(bVar1, "ncompanion"))
	{
		iVar0 = 10;
	}
	else if (STRINGS_ARE_EQUAL(bVar1, "law"))
	{
		iVar0 = 11;
	}
	else if (STRINGS_ARE_EQUAL(bVar1, "traffic"))
	{
		iVar0 = 12;
	}
	else if (STRINGS_ARE_EQUAL(bVar1, "weather"))
	{
		iVar0 = 14;
	}
	else
	{
		return 0;
	}
	if (Global_30842[iVar0])
	{
		Global_30842[iVar0] = 0;
	}
	else
	{
		Global_30842[iVar0] = 1;
	}
	return 1;
}

bool Function_479(bool bParam0) //Position: 0x18FFA / 102394
{
	bool bVar0;
	int iVar1;
	int iVar2;
	vector3 vVar53;
	vector3 vVar56;
	int iVar59;
	
	if (STRING_CONTAINS_STRING(bParam0, "stamb"))
	{
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		*(&iVar2 + 64 + 20) = 1;
		while (iVar1 < 6)
		{
			bVar0 = Function_481(iVar1, bParam0);
			if (DOES_SCRIPT_EXIST(bVar0))
			{
				vVar56 = { 0.0f, 0.0f, -95.0f };
				iVar59 = GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0));
				GET_OBJECT_RELATIVE_POSITION(iVar59, vVar56, &vVar53);
				if (!Function_480(&vVar53, 50.0f, &iVar2 + 8, 4294967295))
				{
					*(&iVar2 + 8) = { StackVal, StackVal, vVar53 };
				}
				*(&iVar2 + 20) = { 0.0f, 0.0f, 0.0f };
				LAUNCH_NEW_SCRIPT_WITH_ARGS(bVar0, &iVar2, 51, 0);
				iVar1 = 6;
			}
			else if (iVar1 == 6)
			{
				LOG_ERROR("ScriptConsole: The script could not be found. Try to specify a path.");
				PRINTSTRING("ScriptConsole: This script file could not be found - ");
				PRINTSTRING(bVar0);
				PRINTNL();
			}
			iVar1++;
		}
		return 1;
	}
	return 0;
}

bool Function_480(var uParam0, float fParam1, int iParam2, int iParam3) //Position: 0x19130 / 102704
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
	if (FIND_GROUND_INTERSECTION(uParam0, fParam1, uParam2, &uVar0))
	{
		if (!Function_94(StackVal, StackVal, *iParam2))
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
			if (!Function_94(StackVal, StackVal, *iParam2))
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

var Function_481(char* cParam0, bool bParam1) //Position: 0x19262 / 103010
{
	char* cVar0[64];
	
	switch (cParam0)
	{
		case 0x00000000:
			strcpy(&cVar0, "AMBIENT", 64);
			break;
	}
	FILE_START_PATH(&cVar0);
	FILE_ADD_TO_PATH(bParam1);
	FILE_END_PATH();
	return FILE_GET_CURRENT_PATH();
}

bool Function_482(bool bParam0) //Position: 0x19296 / 103062
{
	bool bVar0;
	int iVar1;
	
	if (STRING_CONTAINS_STRING(bParam0, "end"))
	{
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		while (iVar1 < 6)
		{
			bVar0 = Function_483(iVar1, bParam0);
			if (UNK_0x4417C9F2(bVar0))
			{
				Global_30923 = 1;
				iVar1 = 6;
			}
			else if (iVar1 == 6)
			{
				LOG_ERROR("ScriptConsole: The script could not be found. Try to specify a path.");
				PRINTSTRING("ScriptConsole: This script file could not be found - ");
				PRINTSTRING(bVar0);
				PRINTNL();
			}
			iVar1++;
		}
		return 1;
	}
	return 0;
}

var Function_483(char* cParam0, bool bParam1) //Position: 0x19370 / 103280
{
	char* cVar0[64];
	
	switch (cParam0)
	{
		case 0x00000000:
			strcpy(&cVar0, "Frontier/Missions", 64);
			break;
		
		case 0x00000001:
			strcpy(&cVar0, "Frontier/Mini_Games", 64);
			break;
		
		case 0x00000002:
			strcpy(&cVar0, "Mexico/Missions", 64);
			break;
		
		case 0x00000003:
			strcpy(&cVar0, "Mexico/Mini_Games", 64);
			break;
		
		case 0x00000004:
			strcpy(&cVar0, "North/Missions", 64);
			break;
		
		case 0x00000005:
			strcpy(&cVar0, "North/Mini_Games", 64);
			break;
		
		case 0x00000006:
			strcpy(&cVar0, "systemtest", 64);
			break;
		
		default:
			strcpy(&cVar0, "systemtest", 64);
			break;
	}
	FILE_START_PATH(&cVar0);
	FILE_ADD_TO_PATH(bParam1);
	FILE_ADD_TO_PATH(bParam1);
	FILE_END_PATH();
	return FILE_GET_CURRENT_PATH();
}

bool Function_484(bool bParam0) //Position: 0x19482 / 103554
{
	bool bVar0;
	int iVar1;
	char* cVar2[64];
	
	if (STRING_CONTAINS_STRING(bParam0, "start"))
	{
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		while (iVar1 < 6)
		{
			bVar0 = Function_483(iVar1, bParam0);
			if (DOES_SCRIPT_EXIST(bVar0))
			{
				strcpy(&cVar2, "$/content/", 64);
				stradd(&cVar2, bVar0, 64);
				Global_30922 = GET_ASSET_ID(&cVar2, 4);
				if (Global_30922 == "")
				{
					Global_30922 = 4294967295;
					LOG_ERROR("Attempting to start a mission script that exists, but does not have a valid asset_ID. Please add the script to init/rdr2init_script.sc");
				}
				iVar1 = 6;
			}
			else if (iVar1 == 6)
			{
				LOG_ERROR("ScriptConsole: The script could not be found. Try to specify a path.");
				PRINTSTRING("ScriptConsole: This script file could not be found - ");
				PRINTSTRING(bVar0);
				PRINTNL();
			}
			iVar1++;
		}
		return 1;
	}
	return 0;
}

bool Function_485(bool bParam0) //Position: 0x19612 / 103954
{
	bool bVar0;
	int iVar1;
	
	if (STRING_CONTAINS_STRING(bParam0, "nterminate"))
	{
		if (STRING_CONTAINS_STRING(bParam0, "\\") || STRING_CONTAINS_STRING(bParam0, "/"))
		{
			if (UNK_0x4417C9F2(bParam0))
			{
				UNK_0x05719022(bParam0);
			}
			else
			{
				LOG_ERROR("ScriptConsole: This script is not running.");
				PRINTSTRING("ScriptConsole: This script is not running - ");
				PRINTSTRING(bParam0);
				PRINTNL();
				return 1;
			}
		}
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		if (STRING_CONTAINS_STRING(bParam0, ".sc"))
		{
			LOG_ERROR("ScriptConsole: If terminating a mission, please do not specify .sc at the end of the script name.");
		}
		else
		{
			while (iVar1 < 6)
			{
				bVar0 = Function_483(iVar1, bParam0);
				if (UNK_0x4417C9F2(bVar0))
				{
					UNK_0x05719022(bVar0);
					iVar1 = 6;
				}
				else if (iVar1 == 6)
				{
					LOG_ERROR("ScriptConsole: The script is not running. Try to specify a path.");
				}
				iVar1++;
			}
		}
		return 1;
	}
	return 0;
}

bool Function_486(bool bParam0) //Position: 0x197B9 / 104377
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (STRING_CONTAINS_STRING(bParam0, "run"))
	{
		if (STRING_CONTAINS_STRING(bParam0, "netrun"))
		{
			iVar1 = 1;
		}
		if (STRING_CONTAINS_STRING(bParam0, "\\") || STRING_CONTAINS_STRING(bParam0, "/"))
		{
			bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
			if (DOES_SCRIPT_EXIST(bParam0))
			{
				if (iVar1 == 1)
				{
					NET_START_NEW_SCRIPT(bParam0, 0);
				}
				else
				{
					LAUNCH_NEW_SCRIPT(bParam0, 0);
				}
			}
			else
			{
				LOG_ERROR("ScriptConsole: This script file could not be found. Please check the path you typed.");
				PRINTSTRING("ScriptConsole: This script file could not be found - ");
				PRINTSTRING(bParam0);
				PRINTNL();
				return 1;
			}
		}
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		if (STRING_CONTAINS_STRING(bParam0, ".sc"))
		{
			LOG_ERROR("ScriptConsole: If running a mission, please do not specify .sc at the end of the script name.");
		}
		else
		{
			FILE_START_PATH("systemtest/GeneralTest");
			FILE_ADD_TO_PATH(bParam0);
			FILE_END_PATH();
			if (DOES_SCRIPT_EXIST(FILE_GET_CURRENT_PATH()))
			{
				if (iVar1 == 1)
				{
					NET_START_NEW_SCRIPT(FILE_GET_CURRENT_PATH(), 0);
				}
				else
				{
					LAUNCH_NEW_SCRIPT(FILE_GET_CURRENT_PATH(), 0);
				}
				return 1;
			}
			while (iVar2 < 6)
			{
				bVar0 = Function_483(iVar2, bParam0);
				if (DOES_SCRIPT_EXIST(bVar0))
				{
					if (iVar1 == 1)
					{
						NET_START_NEW_SCRIPT(bVar0, 0);
					}
					else
					{
						LAUNCH_NEW_SCRIPT(bVar0, 0);
					}
					iVar2 = 6;
				}
				else if (iVar2 == 6)
				{
					LOG_ERROR("ScriptConsole: The script could not be found. Try to specify a path.");
					PRINTSTRING("ScriptConsole: This script file could not be found - ");
					PRINTSTRING(bVar0);
					PRINTNL();
				}
				iVar2++;
			}
		}
		return 1;
	}
	return 0;
}

bool Function_487(bool bParam0) //Position: 0x19A59 / 105049
{
	var uVar0;
	int iVar1;
	int iVar2;
	char* cVar3;
	
	if (STRING_CONTAINS_STRING(bParam0, "switchentity"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 1)
		{
			uVar0 = GET_CONSOLE_COMMAND_TOKEN(2);
			iVar1 = GET_ACTOR_ENUM_FROM_STRING(uVar0);
			if (Function_8(iVar1))
			{
				iVar2 = 4294967295;
				if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 2)
				{
					cVar3 = GET_CONSOLE_COMMAND_TOKEN(3);
					iVar2 = STRING_TO_INT(cVar3);
				}
				else
				{
					iVar2 = 0;
				}
				if (iVar2 > GET_ACTOR_ENUM_VARIATION_COUNT(iVar1))
				{
					PRINTSTRING("variation ");
					PRINTINT(iVar2);
					PRINTSTRING("is out of range (");
					PRINTINT(GET_ACTOR_ENUM_VARIATION_COUNT(iVar1));
					PRINTSTRING(")");
					PRINTNL();
					iVar2 = 4294967295;
				}
				else
				{
					SWITCH_PLAYER_TO_ENUM(iVar1, iVar2);
				}
			}
		}
		return 1;
	}
	return 0;
}

bool Function_488(bool bParam0) //Position: 0x19B07 / 105223
{
	if (STRING_CONTAINS_STRING(bParam0, "givecontrolback"))
	{
		SET_PLAYER_CONTROL(0, 1, 1, 1);
		return 1;
	}
	return 0;
}

void Function_489() //Position: 0x19B31 / 105265
{
	float fVar0;
	bool bVar1;
	char* cVar2;
	int iVar3;
	
	cVar2 = UNK_0x191658C0();
	PRINTSTRING("TEST: Running External Script: ");
	PRINTSTRING(cVar2);
	PRINTNL();
	if (IS_STRING_VALID(bVar2))
	{
		if (DOES_SCRIPT_EXIST(bVar2))
		{
			iVar3 = LAUNCH_NEW_SCRIPT(bVar2, 0);
			fVar0 = GET_CURRENT_GAME_TIME();
			while ((!IS_SCRIPT_VALID(iVar3) && !bVar1) && !IS_EXITFLAG_SET())
			{
				WAIT(0);
				if ((GET_CURRENT_GAME_TIME() - fVar0) <= 1.0f)
				{
					bVar1 = true;
				}
			}
			if (bVar1)
			{
				LOG_ERROR("TEST: CANNOT MOUNT CUSTOM SCRIPT FOR AUTOMATED TESTER");
				PRINTSTRING("TEST: CANNOT MOUNT SCRIPT: ");
				PRINTSTRING(bVar2);
				PRINTNL();
			}
			fVar0 = GET_CURRENT_GAME_TIME();
			while (IS_SCRIPT_VALID(iVar3) && !IS_EXITFLAG_SET())
			{
				WAIT(0);
			}
		}
		else
		{
			LOG_ERROR("TEST: CANNOT FIND CUSTOM SCRIPT FOR AUTOMATED TESTER");
			PRINTSTRING("TEST: CANNOT FIND SCRIPT: ");
			PRINTSTRING(bVar2);
			PRINTNL();
		}
	}
	PRINTSTRING("TEST: External Script Complete");
	PRINTNL();
	LOG_ERROR("TEST: COMPLETE");
	Global_62481 = 4294967197;
	Global_62482 = 0;
	return;
}

void Function_490() //Position: 0x19CD9 / 105689
{
	struct<13> Var0;
	struct<13> Var16;
	struct<13> Var32;
	
	Global_13039 = 0.0f;
	Global_13039.f_4 = 0.0f;
	Global_13039.f_8 = 1280.0f;
	Global_13039.f_12 = 720.0f;
	Global_13043 = GUI_MAKE_WINDOW(GUI_MAIN_WINDOW(), &Global_13039, "nPlayerGUI", "");
	Var4 = 900.0f;
	Var4.f_4 = 360.0f;
	Var4.f_8 = 1200.0f;
	Var4.f_12 = 380.0f;
	Var0 = 900.0f;
	Var0.f_4 = 390.0f;
	Var0.f_8 = 1200.0f;
	Var0.f_12 = 410.0f;
	Var8 = 900.0f;
	Var8.f_4 = 330.0f;
	Var8.f_8 = 1200.0f;
	Var8.f_12 = 350.0f;
	Var20 = 900.0f;
	Var20.f_4 = 420.0f;
	Var20.f_8 = 1200.0f;
	Var20.f_12 = 440.0f;
	Var24 = 900.0f;
	Var24.f_4 = 135.0f;
	Var24.f_8 = 1200.0f;
	Var24.f_12 = 155.0f;
	Var32 = 900.0f;
	Var32.f_4 = 165.0f;
	Var32.f_8 = 1200.0f;
	Var32.f_12 = 185.0f;
	Var28 = 900.0f;
	Var28.f_4 = 195.0f;
	Var28.f_8 = 1200.0f;
	Var28.f_12 = 215.0f;
	Var12 = 0.0f;
	Var12.f_4 = 650.0f;
	Var12.f_8 = 1280.0f;
	Var12.f_12 = 720.0f;
	Var16 = 0.0f;
	Var16.f_4 = 605.0f;
	Var16.f_8 = 1280.0f;
	Var16.f_12 = 675.0f;
	Global_13057 = 0.85f;
	Global_13057.f_4 = 0.85f;
	Global_13057.f_8 = 0.85f;
	Global_13057.f_12 = 1.0f;
	Global_13061[04] = 0.0f;
	Global_13061[04].f_4 = 0.1f;
	Global_13061[04].f_8 = 0.8f;
	Global_13061[04].f_12 = 1.0f;
	Global_13061[14] = 0.0f;
	Global_13061[14].f_4 = 0.8f;
	Global_13061[14].f_8 = 0.1f;
	Global_13061[14].f_12 = 1.0f;
	Global_13061[24] = 0.8f;
	Global_13061[24].f_4 = 0.7f;
	Global_13061[24].f_8 = 0.5f;
	Global_13061[24].f_12 = 1.0f;
	Global_13086 = 0.875f;
	Global_13086.f_4 = 0.1f;
	Global_13086.f_8 = 0.05f;
	Global_13086.f_12 = 1.0f;
	Global_13090 = 0.438f;
	Global_13090.f_4 = 0.05f;
	Global_13090.f_8 = 0.025f;
	Global_13090.f_12 = 0.0f;
	Global_13044 = GUI_MAKE_TEXT(Global_13043, &Var0, "clock", "nberrylium", 2.0f);
	Global_13045 = GUI_MAKE_TEXT(Global_13043, &Var4, "calendar", "nberrylium", 2.0f);
	Global_13049 = GUI_MAKE_TEXT(Global_13043, &Var20, "deed", "nberrylium", 2.0f);
	Global_13047 = GUI_MAKE_TEXT(Global_13043, &Var12, "ambdebug", "nberrylium", 1.5f);
	Global_13046 = GUI_MAKE_TEXT(Global_13043, &Var8, "pop", "nberrylium", 2.0f);
	Global_13048 = GUI_MAKE_TEXT(Global_13043, &Var16, "stream", "nberrylium", 1.5f);
	Global_13050 = GUI_MAKE_TEXT(Global_13043, &Var24, "pursuit", "nberrylium", 2.0f);
	Global_13052 = GUI_MAKE_TEXT(Global_13043, &Var28, "pursuitclock", "nberrylium", 2.0f);
	Global_13051 = GUI_MAKE_TEXT(Global_13043, &Var32, "pursuitcalendar", "nberrylium", 2.0f);
	GUI_SET_TEXT_JUSTIFY(Global_13044, 2);
	GUI_SET_TEXT_JUSTIFY(Global_13045, 2);
	GUI_SET_TEXT_JUSTIFY(Global_13047, 1);
	GUI_SET_TEXT_JUSTIFY(Global_13048, 1);
	GUI_SET_TEXT_JUSTIFY(Global_13046, 2);
	GUI_SET_TEXT_JUSTIFY(Global_13049, 2);
	GUI_SET_TEXT_JUSTIFY(Global_13050, 2);
	GUI_SET_TEXT_JUSTIFY(Global_13052, 2);
	GUI_SET_TEXT_JUSTIFY(Global_13051, 2);
	GUI_SET_TEXT_COLOR(Global_13044, &Global_13057);
	GUI_SET_TEXT_COLOR(Global_13045, &Global_13057);
	GUI_SET_TEXT_COLOR(Global_13047, &Global_13057);
	GUI_SET_TEXT_COLOR(Global_13046, &Global_13057);
	GUI_SET_TEXT_COLOR(Global_13048, &Global_13057);
	GUI_SET_TEXT_COLOR(Global_13049, &Global_13057);
	GUI_SET_TEXT_COLOR(Global_13050, &Global_13057);
	GUI_SET_TEXT_JUSTIFY(Global_13052, 2);
	GUI_SET_TEXT_JUSTIFY(Global_13051, 2);
	return;
}

void Function_491() //Position: 0x1A107 / 106759
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	
	bVar3 = Function_121();
	bVar4 = Function_129();
	iVar0 = 0;
	while (iVar0 <= 40)
	{
		if ((iVar0 < 4294967295 && iVar0 > 26) && (!bVar4 || iVar0 == 21))
		{
			Function_493(bVar3, iVar0);
		}
		iVar0++;
	}
	Function_493(bVar3, 31);
	Function_493(bVar3, 29);
	Function_493(bVar3, 33);
	Function_493(bVar3, 34);
	Function_493(bVar3, 35);
	Function_493(bVar3, 36);
	Function_493(bVar3, 37);
	iVar1 = 0;
	while (iVar1 <= 18)
	{
		if (iVar1 < 2 && iVar1 > 17)
		{
			_ADD_AMMO_OF_TYPE(bVar3, iVar1, _GET_MAX_AMMO_AMOUNT(bVar3, iVar1), 1, 0);
		}
		bVar1++;
	}
	if (!bVar4)
	{
		iVar2 = 0;
		while (iVar2 <= 79)
		{
			if (Function_492(iVar2))
			{
				if (!iVar2 != 13 && !iVar2 != 65)
				{
					ADD_ITEM(Function_309(iVar2), bVar3, 0);
				}
			}
			iVar2++;
		}
		switch (Global_29003)
		{
			case 0x00000000:
				ACTOR_SET_NEXT_WEAPON(bVar3, 8);
				ACTOR_SET_NEXT_WEAPON(bVar3, 4);
				break;
			
			case 0x00000001:
				ACTOR_SET_NEXT_WEAPON(bVar3, 9);
				ACTOR_SET_NEXT_WEAPON(bVar3, 5);
				break;
			
			case 0x00000002:
				ACTOR_SET_NEXT_WEAPON(bVar3, 10);
				ACTOR_SET_NEXT_WEAPON(bVar3, 6);
				break;
			
			case 0x00000003:
				ACTOR_SET_NEXT_WEAPON(bVar3, 17);
				ACTOR_SET_NEXT_WEAPON(bVar3, 6);
				break;
		}
		ACTOR_SET_NEXT_WEAPON(bVar3, 22);
		ACTOR_SET_NEXT_WEAPON(bVar3, 21);
	}
	return;
}

bool Function_492(int iParam0) //Position: 0x1A254 / 107092
{
	int iVar0;
	
	iVar0 = SS_GET_STRING(1, iParam0);
	return IS_STRING_VALID(iVar0);
}

void Function_493(bool bParam0, bool bParam1) //Position: 0x1A267 / 107111
{
	SET_WEAPONENUM_LOCKED(iParam1, 0);
	GIVE_WEAPON_TO_ACTOR(bParam0, bParam1, 1.0f, 0, 1);
	return;
}

var Function_494() //Position: 0x1A27D / 107133
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("PlayerLayout");
		if (!IS_LAYOUTREF_VALID(bVar0))
		{
			LOG_WARNING("I created an INVALID PlayerLayout!!!");
		}
	}
	return bVar0;
}

bool Function_495() //Position: 0x1A2E9 / 107241
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6[2];
	
	vVar6[03] = _GET_TYPE_ID_USING_ACTOR_ENUM(976, 2);
	vVar6[03].f_4 = 2;
	vVar6[13] = _GET_TYPE_ID_USING_ACTOR_ENUM(133, 2);
	vVar6[13].f_4 = 2;
	if (!Function_496(&vVar6))
	{
		return 0;
	}
	Local_5 = CREATE_LAYOUT("AnimPlayground_layout");
	if (!UNK_0xD3FE15FB())
	{
		vVar0 = { 3.060475f, 0.0f, -0.04424302f };
		vVar3 = { 0.0f, 0.0f, 0.0f };
		Local_5.f_20 = CREATE_ACTOR_IN_LAYOUT(Local_5, "horse", 976, vVar0, vVar3);
		vVar0 = { 0.0f, 0.0f, -8.155239f };
		vVar3 = { 0.0f, 178.3098f, 0.0f };
		Local_5.f_28 = CREATE_ACTOR_IN_LAYOUT(Local_5, "enemy_BanditoDesperado", 133, vVar0, vVar3);
	}
	return 1;
}

bool Function_496(int iParam0) //Position: 0x1A3BF / 107455
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_500();
	iVar1 = 0;
	if (!Function_5(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_499(iParam0[iVar03], 8);
		}
		else if (Function_498())
		{
			iVar1 = 1;
			Function_499(iParam0[iVar03], 8);
		}
		Function_499(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_5(iParam0[iVar03], 4))
		{
			if (!Function_5(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_5(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_5(iParam0[03], 8) || iVar1));
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
				Function_499(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_5(iParam0[iVar03], 4))
		{
			if (!Function_5(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_499(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_499(iParam0[iVar03], 2);
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
							Function_499(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_499(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_499(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_499(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_499(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_499(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_499(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_499(iParam0[iVar03], 2);
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
	Function_497();
	return 1;
}

void Function_497() //Position: 0x1A73A / 108346
{
	if (!Function_265(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_498() //Position: 0x1A77A / 108410
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

void Function_499(var uParam0, int iParam1) //Position: 0x1A7A5 / 108453
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_500() //Position: 0x1A7B6 / 108470
{
	if (!Function_265(128))
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

