//Decompiled with MagicRDR v1.0
//Function Count : 16
//Statics Count : 24
//Natives Count : 62
//Parameters Count : 0

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	bool bLocal_16 = false;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	var uVar1;
	vector3 vVar62[10];
	float fVar93[10];
	bool bVar104[10];
	int iVar115;
	bool bVar116;
	bool bVar117;
	bool bVar118;
	bool bVar119;
	vector3 vVar120;
	vector3 vVar123;
	vector3 vVar126;
	int iVar129;
	
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iVar0 = 3;
	uVar1 = 20;
	vVar62[03] = { -709,322f, 63,247f, 3300,138f };
	fVar93[0] = 331,267f;
	vVar62[13] = { -709,953f, 63,247f, 3303,303f };
	fVar93[1] = 261,406f;
	vVar62[23] = { -703,02f, 63,247f, 3295,23f };
	fVar93[2] = 228,778f;
	vVar62[33] = { -701,26f, 63,247f, 3292,499f };
	fVar93[3] = 238,276f;
	vVar62[43] = { -706.0f, 63,247f, 3284,31f };
	fVar93[4] = 116,752f;
	vVar62[53] = { -681,409f, 63,247f, 3302,853f };
	fVar93[5] = 198,799f;
	vVar62[63] = { -677,418f, 63,247f, 3320,865f };
	fVar93[6] = 59,358f;
	vVar62[73] = { -682,006f, 63,25f, 3321,628f };
	fVar93[7] = 54,015f;
	vVar62[83] = { -717,4f, 67,513f, 3296,982f };
	fVar93[8] = 313,599f;
	vVar62[93] = { -697,697f, 66,463f, 3289,909f };
	fVar93[9] = 249,871f;
	bVar104[0] = GET_ASSET_ID("repair_kneel", 1);
	bVar104[1] = GET_ASSET_ID("stand_sellpaper", 1);
	bVar104[2] = GET_ASSET_ID("rand_idle_stand", 1);
	bVar104[3] = GET_ASSET_ID("stand_announce", 1);
	bVar104[4] = GET_ASSET_ID("stand_hammer_wall", 1);
	bVar104[5] = GET_ASSET_ID("look_distance_binocs", 1);
	bVar104[6] = GET_ASSET_ID("whittle_wood", 1);
	bVar104[7] = GET_ASSET_ID("factory_foreman", 1);
	bVar104[8] = GET_ASSET_ID("window_shopping", 1);
	iVar115 = 0;
	iVar115 = 0;
	while (iVar115 <= 10)
	{
		Function_15(&uVar1, bVar104[iVar115], 1);
		iVar115++;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	ADD_PERSISTENT_SCRIPT(GET_THIS_SCRIPT_ID());
	bVar116 = CREATE_LAYOUT(Function_14());
	iVar115 = 0;
	while (iVar115 <= 10)
	{
		Function_13(&uVar1, (3 + iVar115), 3, 0);
		iVar115++;
	}
	while (!Function_6(&uVar1))
	{
		WAIT(false);
	}
	vVar123 = { 0.0f, 0.0f, 0.0f };
	vVar126 = { 0.0f, 0.0f, 0.0f };
	iVar129 = 0;
	iVar115 = 0;
	while (iVar115 <= 50)
	{
		vVar120 = { StackVal, StackVal, vVar62[(iVar115 % 10)3] };
		vVar123.f_4 = fVar93[(iVar115 % 10)];
		UNK_0x44986367(&vVar126, vVar123.y);
		VSCALE(&vVar126, TO_FLOAT((iVar115 / 10)));
		vVar120 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar126, vVar120, StackVal) };
		bVar117 = CREATE_GRINGO_IN_LAYOUT_BY_ID(bVar116, Function_14(), bVar104[((iVar115 + iVar129) % 10)], vVar120, vVar123);
		bVar119 = (3 + (iVar115 % 10));
		bVar118 = CREATE_ACTOR_IN_LAYOUT(bVar116, Function_14(), bVar119, vVar120, vVar123);
		TASK_USE_GRINGO(bVar118, GET_GRINGO_FROM_OBJECT(bVar117), "UseCase1", 4294967295, 1);
		SNAP_ACTOR_TO_GRINGO(bVar118, bVar117, "UseCase1", true, 0, 0);
		if ((iVar115 % 10) == 9)
		{
			iVar129++;
		}
		WAIT(false);
		iVar115++;
	}
	while (!IS_ACTOR_VALID(Global_34573))
	{
		WAIT(false);
	}
	Function_1();
	if (IS_ACTOR_VALID(Global_34573))
	{
		iVar115 = 0;
		while (iVar115 <= 17)
		{
			_SET_ACTOR_INFINITE_AMMO_FLAG(Global_34573, iVar115, true);
			iVar115++;
		}
	}
	while (!IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_HELP();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	HUD_CLEAR_SMALL_TEXT();
	GUI_CLOSE_WINDOW(bLocal_16);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	REMOVE_PERSISTENT_SCRIPT(GET_THIS_SCRIPT_ID());
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x410 / 1040
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	
	bVar3 = Function_5();
	bVar4 = Function_4();
	bVar0 = false;
	while (bVar0 <= 40)
	{
		if ((bVar0 < 4294967295 && bVar0 > 26) && (!bVar4 || bVar0 == 21))
		{
			SET_WEAPONENUM_LOCKED(bVar0, 0);
			GIVE_WEAPON_TO_ACTOR(bVar3, bVar0, 1.0f, 0, 1);
		}
		bVar0++;
	}
	bVar1 = false;
	while (bVar1 <= 18)
	{
		if (bVar1 < 2 && bVar1 > 17)
		{
			_ADD_AMMO_OF_TYPE(bVar3, bVar1, _GET_MAX_AMMO_AMOUNT(bVar3, bVar1), 1, 0);
		}
		bVar1++;
	}
	if (!bVar4)
	{
		iVar2 = 0;
		while (iVar2 <= 79)
		{
			if (Function_3(iVar2))
			{
				if (!iVar2 != 13 && !iVar2 != 65)
				{
					ADD_ITEM(Function_2(iVar2), bVar3, false);
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

var Function_2(bool bParam0) //Position: 0x535 / 1333
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

bool Function_3(bool bParam0) //Position: 0x626 / 1574
{
	bool bVar0;
	
	bVar0 = SS_GET_STRING(1, bParam0);
	return IS_STRING_VALID(bVar0);
}

var Function_4() //Position: 0x639 / 1593
{
	return NET_IS_MANAGER_INITIALIZED();
}

var Function_5() //Position: 0x642 / 1602
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

bool Function_6(int iParam0) //Position: 0x657 / 1623
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_12();
	iVar1 = 0;
	if (!Function_11(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_10(iParam0[iVar03], 8);
		}
		else if (Function_9())
		{
			iVar1 = 1;
			Function_10(iParam0[iVar03], 8);
		}
		Function_10(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_11(iParam0[iVar03], 4))
		{
			if (!Function_11(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_11(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_11(iParam0[03], 8) || iVar1));
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
				Function_10(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_11(iParam0[iVar03], 4))
		{
			if (!Function_11(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_10(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_10(iParam0[iVar03], 2);
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
							Function_10(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_10(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_10(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_10(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_10(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_10(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_10(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_10(iParam0[iVar03], 2);
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
	Function_7();
	return 1;
}

void Function_7() //Position: 0x9D2 / 2514
{
	if (!Function_8(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_8(int iParam0) //Position: 0xA12 / 2578
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_9() //Position: 0xA2E / 2606
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

void Function_10(var uParam0, int iParam1) //Position: 0xA59 / 2649
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

bool Function_11(int iParam0, int iParam1) //Position: 0xA6A / 2666
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_12() //Position: 0xA87 / 2695
{
	if (!Function_8(128))
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

var Function_13(var uParam0, int iParam1, var uParam2, bool bParam3) //Position: 0xAC9 / 2761
{
	int iVar0;
	
	uParam2 = uParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_11(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_10(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_10(uParam0[iVar03], 8);
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

var Function_14() //Position: 0xB99 / 2969
{
	int iVar0;
	
	return iVar0;
}

var Function_15(var uParam0, int iParam1, int iParam2) //Position: 0xBA1 / 2977
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_11(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_10(uParam0[iVar03], 4);
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

