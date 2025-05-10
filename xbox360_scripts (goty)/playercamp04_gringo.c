//Decompiled with MagicRDR v1.0
//Function Count : 122
//Statics Count : 21
//Natives Count : 266
//Parameters Count : 1

#region Local Var
	struct<57> Local_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	struct<13> Var1;
	vector3 vVar80;
	char* cVar83[24];
	
	iLocal_15 = 2;
	iLocal_16 = 4;
	fLocal_17 = 70.0f;
	uScriptParam_0 = uScriptParam_0;
	bVar0 = true;
	*(&Var1 + 24) = 5;
	*(&Var1 + 48) = 2;
	*(&Var1 + 60) = 9;
	*(&Var1 + 172) = 5;
	*(&Var1 + 228) = 2;
	if (bVar0)
	{
		Function_120(&Var1, "", "$/tune/refGroups/campsiteSets/cam_playerCamp04x");
	}
	else
	{
		GET_OBJECT_POSITION(GRINGO_GET_MY_OBJECT_REF(), &vVar80);
		strcpy(&cVar83, "p", 24);
		stradd(&cVar83, GET_OBJECT_NAME(GRINGO_GET_MY_OBJECT_REF()), 24);
		CREATE_POINT_IN_LAYOUT(GET_OBJECT_OWNER(GRINGO_GET_MY_OBJECT_REF()), &cVar83, vVar80, 0.0f, 0.0f, 0.0f);
		DESTROY_OBJECT(GRINGO_GET_MY_OBJECT_REF());
	}
	while (IS_GRINGO_ACTIVE())
	{
		if (bVar0)
		{
			Function_9(&Var1, GRINGO_GET_MY_OBJECT_REF(), 1, 0, 1, 1, "ped_wilderness", 2.0f, 0, 0x43160000);
		}
		GRINGO_WAIT(250);
	}
	if (DECOR_CHECK_EXIST(Global_34573, "DestroyMyCamp"))
	{
		Function_5(&Var1 + 60);
		Function_3();
		DESTROY_LAYOUT(Var1.f_12);
		DESTROY_LAYOUT(StackVal);
		Function_1(&Var1);
		DECOR_REMOVE(Global_34573, "DestroyMyCamp");
	}
	else if (bVar0)
	{
		Function_1(&Var1);
	}
	return;
}

void Function_1(int iParam0) //Position: 0x144 / 324
{
	bool bVar0;
	
	Global_26154 = (Global_26154 - 1);
	if (iParam0->f_268)
	{
		if (SQUAD_IS_VALID(iParam0->f_244))
		{
			bVar0 = false;
			while (bVar0 <= SQUAD_GET_SIZE(iParam0->f_244))
			{
				if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar0)))
				{
					if (DECOR_CHECK_EXIST(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar0), "nconvAdded"))
					{
						AI_CONVERSE_DISABLE(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar0));
						AI_CONVERSE_REMOVE_CAMPFIRE_CONVERSER(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar0));
					}
				}
				bVar0++;
			}
		}
		iParam0->f_268 = 0;
	}
	if (SQUAD_IS_VALID(iParam0->f_244))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(iParam0->f_244))
		{
			if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar0)))
			{
				if (DECOR_CHECK_EXIST(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar0), "nconvAdded"))
				{
					DECOR_REMOVE(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar0), "nconvAdded");
				}
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar0));
			}
			bVar0++;
		}
	}
	if (IS_OBJECT_VALID(*iParam0))
	{
		UNK_0xE18028C1(*iParam0);
		DESTROY_OBJECT(*iParam0);
	}
	if (iParam0->f_292 >= 0)
	{
		RESET_THIS_TREE_TYPE_CLEARING(iParam0->f_292);
	}
	if (iParam0->f_296 >= 0)
	{
		RESET_THIS_TREE_TYPE_CLEARING(iParam0->f_296);
	}
	if (iParam0->f_296 >= 0)
	{
		RESET_THIS_BREAKABLE_TREE_CLEARING(iParam0->f_300);
	}
	Function_5(iParam0 + 60);
	if (IS_BLIP_VALID(iParam0->f_248))
	{
		REMOVE_BLIP(iParam0->f_248);
	}
	Function_3();
	if (IS_ITERATOR_VALID(iParam0->f_288))
	{
		DESTROY_ITERATOR(iParam0->f_288);
	}
	Function_2();
	RELEASE_LAYOUT_REF(StackVal);
	return;
}

void Function_2() //Position: 0x2B6 / 694
{
	return;
}

void Function_3() //Position: 0x2BC / 700
{
	Function_4();
	return;
}

void Function_4() //Position: 0x2C5 / 709
{
	RELEASE_LAYOUT_REF(Local_0);
	return;
}

void Function_5(int iParam0) //Position: 0x2D0 / 720
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_6(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_6(var uParam0, int iParam1) //Position: 0x2F6 / 758
{
	if (Function_8(uParam0[iParam13], 4))
	{
		if (Function_8(uParam0[iParam13], 1))
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
			Function_7(uParam0[iParam13], 1);
			Function_7(uParam0[iParam13], 2);
			Function_7(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_7(var uParam0, int iParam1) //Position: 0x424 / 1060
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_8(var uParam0, bool bParam1) //Position: 0x43E / 1086
{
	int iVar0;
	
	iVar0 = (StackVal && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_9(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, bool bParam6, float fParam7, int iParam8, float fParam9) //Position: 0x45B / 1115
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	vector3 vVar7;
	vector3 vVar10;
	bool bVar13;
	int iVar14;
	
	uParam5 = uParam5;
	bVar1 = false;
	bVar13 = (Function_119() && Function_117());
	iVar14 = 600;
	if (!Function_116(8))
	{
		iParam0->f_4 = 12;
	}
	if (bVar13)
	{
		if (IS_OBJECT_VALID(GRINGO_GET_MY_OBJECT_REF()))
		{
			if (!DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "MP_ONLY"))
			{
				return 4294967295;
			}
		}
	}
	switch (StackVal)
	{
		case 0x00000000:
			if (Function_115("npressDemo"))
			{
				if (((Global_25266 + 2000.0f) < GET_CURRENT_GAME_TIME() && !bParam2) && !Global_3370)
				{
					iVar14 = 1000;
					break;
				}
			}
			else if ((((Global_25266 + 200.0f) < GET_CURRENT_GAME_TIME() && !bParam2) && !Global_3370) && !Function_119())
			{
				iVar14 = 1000;
				break;
			}
			if ((!bParam2 && !Global_3370) && !Function_119())
			{
				if (GET_WEATHER() != 3 || GET_WEATHER() != 4)
				{
					iVar14 = 1000;
					break;
				}
			}
			GET_OBJECT_POSITION(bParam1, &vVar7);
			GET_OBJECT_ORIENTATION(bParam1, iParam0 + 212);
			if (Global_63399 == 32)
			{
				iLocal_15 = iLocal_16;
			}
			if (Function_119())
			{
				iLocal_15 = 32;
			}
			if (Global_3370)
			{
				if (Function_114(StackVal, StackVal, Global_34573, vVar7) < 10.0f)
				{
					break;
				}
			}
			if ((Global_26154 + 1 > iLocal_15 || bParam2) || Global_3370)
			{
				if (Function_113(&vVar7, 50.0f, iParam0 + 200, 4294967295))
				{
					if (((!bParam2 && !Function_111(iParam0 + 200, &fLocal_17, 256, 0)) && !Global_3370) && !Function_119())
					{
						iVar14 = 1000;
					}
					else
					{
						if (UNK_0x214AFB8C(iParam0->f_16))
						{
							STREAMING_REQUEST_PROP(iParam0->f_16, false);
						}
						if (UNK_0x214AFB8C(iParam0->f_20))
						{
							STREAMING_REQUEST_PROPSET(iParam0->f_20);
						}
						bVar3 = FIND_NAMED_POPULATION_SET(bParam6);
						if (Global_3380)
						{
							if (STRING_CONTAINS_STRING(bParam6, "bad_guys"))
							{
								iParam0->f_4 = 12;
								break;
							}
						}
						if ((IS_POPSET_VALID(bVar3) && IS_POPSET_VALID(Global_30750[6])) && !bParam2)
						{
							bVar1 = false;
							if ((iParam3 < 1 && !STRING_CONTAINS_STRING(bParam6, "bad_guys")) && !STRING_CONTAINS_STRING(bParam6, "law"))
							{
								(*iParam0 + 24)[0] = Function_110();
								(*iParam0 + 24)[1] = Function_109();
								Function_108(iParam0 + 60, (*iParam0 + 24)[0], 2, 0);
								Function_108(iParam0 + 60, (*iParam0 + 24)[1], 2, 0);
								bVar1 = 2;
							}
							if (iParam3 >= 1)
							{
								(*iParam0 + 48)[0] = Function_100(Global_30750[6], 0, 4, 23, 1);
								(*iParam0 + 48)[1] = Function_100(Global_30750[6], 0, 4, 23, 1);
								if ((*iParam0 + 48)[0] == 4294967295)
								{
									(*iParam0 + 48)[0] = 976;
								}
								if ((*iParam0 + 48)[1] == 4294967295)
								{
									(*iParam0 + 48)[1] = 980;
								}
								Function_108(iParam0 + 60, (*iParam0 + 48)[0], 2, 0);
								Function_108(iParam0 + 60, (*iParam0 + 48)[1], 2, 0);
							}
							else
							{
								(*iParam0 + 48)[0] = Function_100(Global_30750[6], 0, 0, 23, 1);
								if ((*iParam0 + 48)[0] == 4294967295)
								{
									(*iParam0 + 48)[0] = 977;
								}
								(*iParam0 + 48)[1] = 976;
								Function_108(iParam0 + 60, (*iParam0 + 48)[0], 2, 0);
							}
							while (bVar1 <= iParam3)
							{
								if ((bVar1 != 2 && !STRING_CONTAINS_STRING(bParam6, "bad_guys")) && !STRING_CONTAINS_STRING(bParam6, "law"))
								{
									(*iParam0 + 24)[bVar1] = Function_100(bVar3, 1, 1, 4294967295, 1);
								}
								else
								{
									(*iParam0 + 24)[bVar1] = Function_100(bVar3, 1, 0, 4294967295, 1);
								}
								if ((*iParam0 + 24)[bVar1] == 4294967295)
								{
									iParam0->f_4 = 12;
									break;
								}
								Function_108(iParam0 + 60, (*iParam0 + 24)[bVar1], 2, 0);
								bVar1++;
							}
						}
						else if (!bParam2 && !Function_119())
						{
							return 4294967295;
						}
						if (!bParam2 || Function_119())
						{
							bVar0 = CREATE_VOLUME_IN_LAYOUT(Global_26150, Function_99(), 3, *(iParam0 + 200), 0.0f, 0.0f, 0.0f, fLocal_17, 20.0f, fLocal_17);
							DECOR_SET_INT(bVar0, "script", GET_THIS_SCRIPT_ID());
							DECOR_SET_INT(bVar0, "category", 256);
							Global_26154++;
							Function_95(&bVar0, 0);
							iParam0->f_308 = CREATE_VOLUME_IN_LAYOUT(StackVal, Function_99(), 3, *(iParam0 + 200), 0.0f, 0.0f, 0.0f, (fParam7 + 1.5f), 9.0f, (fParam7 + 1.5f));
						}
						if (Function_119())
						{
							iParam0->f_4 = 6;
						}
						else
						{
							iParam0->f_4 = 1;
						}
					}
				}
			}
			else
			{
				iVar14 = 1000;
			}
			break;
		
		case 0x00000006:
			Function_70(iParam0, &iVar14);
			break;
		
		case 0x00000001:
			if (Function_65(iParam0 + 60))
			{
				iParam0->f_4 = 4;
			}
			iVar14 = 0;
			break;
		
		case 0x00000004:
			if (Function_58(iParam0, bParam1))
			{
				if (IS_OBJECT_VALID(iParam0->f_224))
				{
					GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(iParam0->f_224), false);
				}
				iParam0->f_4 = 8;
			}
			else if (!bParam2)
			{
				LOG_ERROR("Couldn't create the campsire layout");
				iParam0->f_4 = 12;
				break;
			}
			break;
		
		case 0x00000008:
			if (!bParam2)
			{
				iParam0->f_304 = 0;
				iParam0->f_288 = CREATE_OBJECT_ITERATOR(iParam0->f_12);
				ITERATE_ON_OBJECT_TYPE(iParam0->f_288, 12);
				ITERATE_IN_LAYOUT(iParam0->f_288, iParam0->f_12);
				START_OBJECT_ITERATOR(iParam0->f_288);
				bVar1 = false;
				bVar4 = OBJECT_ITERATOR_CURRENT(iParam0->f_288);
				while (IS_OBJECT_VALID(bVar4))
				{
					if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(bVar4)) && bVar1 > iParam3)
					{
						DECOR_SET_BOOL(bVar4, "ForceAllowSun", true);
						if (STRING_CONTAINS_STRING(GET_OBJECT_NAME(bVar4), "horse") && Function_119())
						{
							DESTROY_OBJECT(bVar4);
						}
						else if (GRINGO_USABLE_BY_ACTOR_ENUM((*iParam0 + 24)[bVar1], GET_GRINGO_FROM_OBJECT(bVar4), "UseCase1"))
						{
							(*iParam0 + 172)[bVar1] = bVar4;
							GRINGO_LOAD_ANIMATION_FOR_ACTOR_ENUM_EXT(GET_GRINGO_FROM_OBJECT(bVar4), "UseCase1", "UseAnim", (*iParam0 + 24)[bVar1]);
							bVar1++;
							iParam0->f_304++;
							PRINTINT(iParam0->f_304);
						}
					}
					bVar4 = OBJECT_ITERATOR_NEXT(iParam0->f_288);
				}
				if (IS_ITERATOR_VALID(iParam0->f_288))
				{
					DESTROY_ITERATOR(iParam0->f_288);
				}
				iParam0->f_4 = 9;
			}
			else
			{
				iParam0->f_4 = 2;
			}
			break;
		
		case 0x00000009:
			PRINTINT(iParam0->f_304);
			bVar5 = true;
			bVar1 = false;
			while (bVar1 <= iParam0->f_304)
			{
				if (IS_OBJECT_VALID((*iParam0 + 172)[bVar1]))
				{
					if (!GRINGO_HAS_ANIMSET_LOADED_FOR_ACTOR_ENUM_EXT(GET_GRINGO_FROM_OBJECT((*iParam0 + 172)[bVar1]), "UseCase1", "UseAnim", (*iParam0 + 24)[bVar1]))
					{
						bVar5 = false;
					}
				}
				bVar1++;
			}
			if (bVar5)
			{
				iParam0->f_4 = 2;
			}
			break;
		
		case 0x00000002:
			if (STREAMING_ARE_BOUNDS_LOADED(*(iParam0 + 200), 10.0f))
			{
				if (((Function_114(StackVal, StackVal, Global_34573, *(iParam0 + 200)) < 120.0f || bParam2) || Global_3370) || Function_119())
				{
					if (UNK_0x214AFB8C(iParam0->f_16))
					{
						if (IS_OBJECT_VALID(iParam0->f_224))
						{
							GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(iParam0->f_224), true);
						}
						bVar6 = CREATE_PROP_IN_LAYOUT_BY_ID(StackVal, Function_99(), iParam0->f_16, *(iParam0 + 200), *(iParam0 + 212), 0);
						*iParam0 = CREATE_RMPTFX_EMITTER_ON_OBJECT(Function_99(), "amb_campfire_light", bVar6, 0.0f, 0.0f, 0.0f, 1, bVar6);
						UNK_0x6745191B(*iParam0, 0.0f, 0.0f, 0.0f);
						if (GET_LOCATOR_OFFSETS(GET_PHYSINST_FROM_OBJECT(bVar6), "center", &vVar7, &vVar10))
						{
							vVar7 = { StackVal, StackVal, -Vector(vVar7, StackVal, StackVal) };
							GET_OBJECT_RELATIVE_POSITION(bVar6, vVar7, &vVar10);
							SET_OBJECT_POSITION(bVar6, vVar10);
							SNAP_OBJECT_TO_GROUND(bVar6, 10.0f, true, 1092616192);
						}
						else
						{
							LOG_ERROR("can't find the center locator for campfire");
						}
					}
					else if (!bParam2 && !Function_119())
					{
						LOG_ERROR("Campfire beacon asset isn't valid.. you won't see a campfire");
					}
					Function_56(StackVal, StackVal, iParam0 + 292, iParam0 + 300, iParam0 + 296, fParam7, *(iParam0 + 200));
					iParam0->f_4 = 5;
					iVar14 = 0;
					iParam0->f_272 = 1;
				}
			}
			else
			{
				iVar14 = 250;
			}
			break;
		
		case 0x00000005:
			DECOR_SET_BOOL(GRINGO_GET_MY_OBJECT_REF(), "DontRun", true);
			if (UNK_0x214AFB8C(iParam0->f_20))
			{
				NET_OBJECT_REPLICATION_MODE_START(2, 0);
				Function_55(StackVal, StackVal, StackVal, StackVal, StackVal, Function_99(), GET_ASSET_NAME(iParam0->f_20, 7), *(iParam0 + 200), *(iParam0 + 212), 4294967295);
				NET_OBJECT_REPLICATION_MODE_END(2);
				DECOR_SET_BOOL(bParam1, "PropsCreated", true);
			}
			else if (!bParam2)
			{
				LOG_ERROR("Propset ID invalid.  Campfire problem");
				iParam0->f_4 = 12;
				break;
			}
			Function_54(iParam0->f_12);
			STORE_MOBILE_LAYOUT_TRANSFORMS(GET_MOBILE_LAYOUT_FROM_OBJECT(iParam0->f_12));
			bVar1 = false;
			iParam0->f_4 = 10;
			iVar14 = 0;
			break;
		
		case 0x0000000A:
			if (!bParam2 && !Function_119())
			{
				iParam0->f_244 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(iParam0->f_12, Function_99()));
				iParam0->f_288 = CREATE_OBJECT_ITERATOR(iParam0->f_12);
				bVar1 = false;
				while (bVar1 <= iParam3)
				{
					Function_52(StackVal, iParam0->f_288, iParam0->f_244, (*iParam0 + 24)[bVar1], (*iParam0 + 172)[bVar1], iParam0->f_308, bVar1);
					bVar1++;
				}
				if (iParam3 >= 1)
				{
					Function_51(StackVal, iParam0->f_12, iParam0 + 48, 2, iParam0 + 228);
				}
				else
				{
					Function_51(StackVal, iParam0->f_12, iParam0 + 48, 1, iParam0 + 228);
				}
				if (SQUAD_IS_VALID(iParam0->f_244))
				{
					if (SQUAD_GET_SIZE(iParam0->f_244) != 0 && iParam3 < 0)
					{
						LOG_ERROR("Campfire no spawn problem! Report to AlanB.");
						iParam0->f_4 = 12;
						break;
					}
				}
				if (STRING_CONTAINS_STRING(bParam6, "bad_guys"))
				{
					iParam0->f_256 = 1;
				}
				ITERATE_ON_OBJECT_TYPE(iParam0->f_288, 15);
				ITERATE_IN_LAYOUT(iParam0->f_288, iParam0->f_12);
				bVar2 = START_OBJECT_ITERATOR(iParam0->f_288);
				while (IS_OBJECT_VALID(bVar2))
				{
					if (IS_ACTOR_VEHICLE(GET_ACTOR_FROM_OBJECT(bVar2)))
					{
						iParam0->f_240 = GET_ACTOR_FROM_OBJECT(bVar2);
					}
					bVar2 = OBJECT_ITERATOR_NEXT(iParam0->f_288);
				}
				if (IS_ITERATOR_VALID(iParam0->f_288))
				{
					DESTROY_ITERATOR(iParam0->f_288);
				}
			}
			if ((bParam2 || !bParam4) || bVar13)
			{
				if (IS_OBJECTSET_VALID(iParam0->f_284))
				{
					bVar1 = false;
					bVar1 = false;
					while (bVar1 <= GET_OBJECTSET_SIZE(iParam0->f_284))
					{
						DESTROY_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, iParam0->f_284));
						bVar1++;
					}
				}
				if (IS_OBJECT_VALID(iParam0->f_224))
				{
					DESTROY_OBJECT(iParam0->f_224);
				}
			}
			iParam0->f_4 = 11;
			iVar14 = 0;
			break;
		
		case 0x0000000B:
			if (Global_3370)
			{
			}
			if ((!bParam2 && !bVar13) && !iParam0->f_268)
			{
				if (SQUAD_IS_VALID(iParam0->f_244))
				{
					if (SQUAD_GET_SIZE(iParam0->f_244) >= 1)
					{
						if (IS_STRING_VALID(bParam6))
						{
							if ((!STRING_CONTAINS_STRING(bParam6, "bad") && !STRING_CONTAINS_STRING(bParam6, "law")) && iParam8 != 1)
							{
								if (VDIST(*(iParam0 + 200), Global_34574) > 10.0f)
								{
									if (IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "rand_idle_sit_ground_player"))
									{
										AI_CONVERSE_ENABLE(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, false));
										AI_CONVERSE_ENABLE(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, true));
										AI_CONVERSE_ADD_CAMPFIRE_CONVERSER(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, false));
										AI_CONVERSE_ADD_CAMPFIRE_CONVERSER(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, true));
										DECOR_SET_BOOL(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, false), "nconvAdded", true);
										DECOR_SET_BOOL(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, true), "nconvAdded", true);
										AI_GOAL_LOOK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, false));
										AI_GOAL_LOOK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, true));
										Function_40(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, false));
										fLocal_19 = GET_CURRENT_GAME_TIME();
										iParam0->f_268 = 1;
									}
								}
							}
						}
					}
				}
			}
			if ((iParam0->f_268 != 1 && !IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "rand_idle_sit_ground_player")) && !iParam0->f_276)
			{
				if (SQUAD_IS_VALID(iParam0->f_244) && SQUAD_GET_SIZE(iParam0->f_244) < 0)
				{
					if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, false)))
					{
						if ((GET_CURRENT_GAME_TIME() - fLocal_19) < 10.0f)
						{
							SAY_SINGLE_LINE_STRING_WITH_REPLY(Global_34573, "PLAYER_COMMENT_ON_STORY", SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, false), "GENERIC_GOODBYE", 1, 1, 5, 0);
						}
						iParam0->f_276 = 1;
					}
					else
					{
						iParam0->f_276 = 1;
					}
				}
				else
				{
					iParam0->f_276 = 1;
				}
			}
			if (!bParam2 && !bVar13)
			{
				if (SQUAD_IS_VALID(iParam0->f_244))
				{
					bVar1 = false;
					while (bVar1 <= SQUAD_GET_SIZE(iParam0->f_244))
					{
						if (Function_35(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar1), &iLocal_18, iParam0 + 312, 0, 0, 0x40400000))
						{
							SET_ACTOR_ALLOW_WEAPON_REACTIONS(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar1), 1);
							AI_QUICK_EXIT_GRINGO(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar1), 1);
							iParam0->f_280 = 1;
							Function_34(iParam0->f_244, 1);
							Function_33(iParam0->f_244, Global_34573, -1.0f, -1.0f, 0, 2);
							if (iLocal_18 == 8)
							{
								TASK_KILL_CHAR(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar1), Global_34573);
							}
							iParam0->f_4 = 12;
							break;
						}
						bVar1++;
					}
					bVar1 = false;
					while (bVar1 <= iParam0->f_228)
					{
						if (IS_ACTOR_VALID((*iParam0 + 228)[bVar1]))
						{
							if (GET_LAST_ATTACKER((*iParam0 + 228)[bVar1]) != Global_34573 || GET_RIDER((*iParam0 + 228)[bVar1]) != Global_34573)
							{
								iParam0->f_280 = 1;
								TASK_CLEAR((*iParam0 + 228)[bVar1]);
								Function_34(iParam0->f_244, 1);
								Function_33(iParam0->f_244, Global_34573, -1.0f, -1.0f, 0, 2);
								TASK_KILL_CHAR(Function_32(iParam0->f_244), Global_34573);
								iParam0->f_4 = 12;
								break;
							}
						}
						bVar1++;
					}
				}
			}
			if (bParam4 && !bVar13)
			{
				Function_27(iParam0, bParam2, 0);
			}
			else if (iParam0->f_256)
			{
				Function_27(iParam0, bParam2, 1);
			}
			if (!iParam0->f_268)
			{
			}
			if (GET_VEHICLE(Function_26()) != iParam0->f_240 && IS_ACTOR_VALID(iParam0->f_240))
			{
				Function_25(iParam0->f_244, Function_26(), 4);
				Function_24(iParam0->f_244, Function_26());
			}
			if (VDIST(*(iParam0 + 200), Global_34574) < (fParam9 + 30.0f))
			{
				iParam0->f_4 = 12;
			}
			vVar7 = { StackVal, StackVal, *(iParam0 + 200) };
			vVar7.f_4 = (vVar7.y + 0.5f);
			if (!bParam2 && !bVar13)
			{
				if (Function_23(StackVal, StackVal, vVar7, 1.0f, 80.0f, 1, 1, 0))
				{
					Global_25266 = GET_CURRENT_GAME_TIME();
				}
				if (SQUAD_IS_VALID(iParam0->f_244))
				{
					if (Function_22(iParam0->f_244, 1.0f, 80.0f, 1, 1))
					{
						Global_25266 = GET_CURRENT_GAME_TIME();
					}
				}
			}
			break;
		
		case 0x0000000C:
			if (iParam0->f_268)
			{
				if (SQUAD_IS_VALID(iParam0->f_244))
				{
					bVar1 = false;
					while (bVar1 <= SQUAD_GET_SIZE(iParam0->f_244))
					{
						if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar1)))
						{
							if (DECOR_CHECK_EXIST(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar1), "nconvAdded"))
							{
								AI_CONVERSE_DISABLE(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar1));
								AI_CONVERSE_REMOVE_CAMPFIRE_CONVERSER(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar1));
							}
						}
						bVar1++;
					}
				}
				iParam0->f_268 = 0;
			}
			bVar1 = false;
			while (bVar1 <= iParam0->f_228)
			{
				if (IS_ACTOR_VALID((*iParam0 + 228)[bVar1]))
				{
					TASK_WANDER((*iParam0 + 228)[bVar1], 3212836864);
					GIVE_OBJECT_TO_LAYOUT((*iParam0 + 228)[bVar1], Global_28841);
					RELEASE_ACTOR((*iParam0 + 228)[bVar1]);
				}
				bVar1++;
			}
			if (SQUAD_IS_VALID(iParam0->f_244))
			{
				bVar1 = false;
				while (bVar1 <= SQUAD_GET_SIZE(iParam0->f_244))
				{
					if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar1)))
					{
						if (!iParam0->f_280)
						{
							MEMORY_PREFER_RIDING(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar1), false);
							Function_13(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar1), 4, 0, 2);
						}
						CLEAR_ACTOR_STAY_WITHIN_VOLUME(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar1));
					}
					bVar1++;
				}
			}
			iParam0->f_272 = 0;
			if (IS_OBJECT_VALID(*iParam0))
			{
				UNK_0xE18028C1(*iParam0);
				DESTROY_OBJECT(*iParam0);
			}
			if (IS_ITERATOR_VALID(iParam0->f_288))
			{
				DESTROY_ITERATOR(iParam0->f_288);
			}
			Function_3();
			if (SQUAD_IS_VALID(iParam0->f_244))
			{
				Function_11(iParam0 + 244, 0, 0, 0);
			}
			RELEASE_LAYOUT_OBJECTS(StackVal);
			iParam0->f_4 = 13;
			iVar14 = 250;
			break;
		
		case 0x0000000D:
			break;
	}
	Function_10(iParam0);
	return iVar14;
}

void Function_10(int iParam0) //Position: 0x1459 / 5209
{
	*iParam0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *iParam0 };
	return;
}

void Function_11(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1469 / 5225
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(*uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(*uParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*uParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			SQUAD_LEAVE(bVar1);
			if (IS_ACTOR_RIDING_VEHICLE(bVar1))
			{
				bVar2 = GET_VEHICLE(bVar1);
				if (bParam3)
				{
					DESTROY_ACTOR(bVar1);
					DESTROY_ACTOR(bVar2);
				}
				else if (bParam2)
				{
					if (!Function_12(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						DESTROY_ACTOR(bVar1);
					}
					if (!Function_12(bVar2, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						DESTROY_ACTOR(bVar2);
					}
				}
				if (IS_ACTOR_VALID(bVar1))
				{
					if (bParam1)
					{
						RELEASE_ACTOR_AS_AMBIENT(bVar1);
					}
					else
					{
						RELEASE_ACTOR(bVar1);
					}
				}
				if (IS_ACTOR_VALID(bVar2))
				{
					if (bParam1)
					{
						RELEASE_ACTOR_AS_AMBIENT(bVar2);
					}
					else
					{
						RELEASE_ACTOR(bVar2);
					}
				}
			}
			else if (IS_ACTOR_RIDING(bVar1))
			{
				bVar2 = GET_MOUNT(bVar1);
				if (bParam3)
				{
					if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(bVar2))))
					{
						DESTROY_ACTOR(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(bVar2)));
					}
					DESTROY_ACTOR(bVar1);
					DESTROY_ACTOR(bVar2);
				}
				else if (bParam2)
				{
					if (!Function_12(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						DESTROY_ACTOR(bVar1);
					}
					if (!Function_12(bVar2, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(bVar2))))
						{
							DESTROY_ACTOR(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(bVar2)));
						}
						DESTROY_ACTOR(bVar2);
					}
				}
				if (IS_ACTOR_VALID(bVar1))
				{
					if (bParam1)
					{
						RELEASE_ACTOR_AS_AMBIENT(bVar1);
					}
					else
					{
						RELEASE_ACTOR(bVar1);
					}
				}
				if (IS_ACTOR_VALID(bVar2))
				{
					if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(bVar2))))
					{
						DESTROY_ACTOR(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(bVar2)));
					}
					if (bParam1)
					{
						RELEASE_ACTOR_AS_AMBIENT(bVar2);
					}
					else
					{
						RELEASE_ACTOR(bVar2);
					}
				}
			}
			else
			{
				if (bParam3)
				{
					DESTROY_ACTOR(bVar1);
				}
				else if (bParam2)
				{
					if (!Function_12(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						DESTROY_ACTOR(bVar1);
					}
				}
				if (IS_ACTOR_VALID(bVar1))
				{
					if (bParam1)
					{
						RELEASE_ACTOR_AS_AMBIENT(bVar1);
					}
					else
					{
						RELEASE_ACTOR(bVar1);
					}
				}
			}
		}
		else
		{
			bVar0++;
		}
	}
}

bool Function_12(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1667 / 5735
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

int Function_13(bool bParam0, int iParam1, var uParam2, var uParam3) //Position: 0x1681 / 5761
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
					Function_14(bVar1, 0, 0, 0, 1);
				}
				bVar0++;
			}
		}
		Function_14(bParam0, iParam1, uParam2, uParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_14(bool bParam0, int iParam1, var uParam2, var uParam3, int iParam4) //Position: 0x1761 / 5985
{
	char* cVar0[32];
	
	Function_21();
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
	if (Function_20(bParam0) == 1)
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
	Function_19(bParam0, 0);
	Function_18(bParam0, iParam1);
	Function_17(bParam0, uParam2);
	Function_16(bParam0, uParam3);
	if (Function_15(bParam0) != 5)
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

int Function_15(bool bParam0) //Position: 0x19AF / 6575
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior");
}

void Function_16(bool bParam0, bool bParam1) //Position: 0x19D2 / 6610
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_17(bool bParam0, bool bParam1) //Position: 0x19F5 / 6645
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_target", bParam1);
	return;
}

void Function_18(bool bParam0, bool bParam1) //Position: 0x1A19 / 6681
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_19(bool bParam0, bool bParam1) //Position: 0x1A3F / 6719
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_state", bParam1);
	return;
}

int Function_20(bool bParam0) //Position: 0x1A62 / 6754
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
}

void Function_21() //Position: 0x1A80 / 6784
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

bool Function_22(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x1ACA / 6858
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				if (Function_12(bVar1, uParam1, uParam2, uParam3, uParam4, 0))
				{
					return 1;
				}
			}
			bVar0++;
		}
	}
	return 0;
}

bool Function_23(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) //Position: 0x1B1C / 6940
{
	return CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), vParam0, iParam3, iParam4, iParam5, iParam6, iParam7);
}

void Function_24(bool bParam0, bool bParam1) //Position: 0x1B38 / 6968
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				MEMORY_IDENTIFY(bVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_25(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1B8A / 7050
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			MEMORY_CONSIDER_AS(bVar1, bParam1, bParam2);
		}
		bVar0++;
	}
	return;
}

var Function_26() //Position: 0x1BCF / 7119
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_27(int iParam0, bool bParam1, bool bParam2) //Position: 0x1BE4 / 7140
{
	bool bVar0;
	bool bVar1;
	
	if (iParam0->f_264)
	{
		return;
	}
	if (bParam1)
	{
		return;
	}
	if (!SQUAD_IS_VALID(iParam0->f_244))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(iParam0->f_244))
	{
		if (!IS_AI_ACTOR_UNALERTED(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar0)))
		{
			return;
		}
		bVar0++;
	}
	if (SQUAD_GET_SIZE(iParam0->f_244) <= 1)
	{
		return;
	}
	if (!Function_31(iParam0->f_244))
	{
		return;
	}
	if (!Function_28(StackVal, StackVal, iParam0->f_244, *(iParam0 + 200), 10.0f))
	{
		return;
	}
	if (VDIST(*(iParam0 + 200), Global_34574) > 15.0f)
	{
		AI_GOAL_LOOK_AT_ACTOR(Function_32(iParam0->f_244), Global_34573, 0, 1065353216, 3212836864, 3212836864, 0);
		FORCE_LOOK_AT_ACTOR(Function_32(iParam0->f_244), Global_34573, 5.0f);
		bVar1 = false;
		while (bVar1 <= SQUAD_GET_SIZE(iParam0->f_244))
		{
			AI_GOAL_LOOK_AT_ACTOR_NEW(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar1), Global_34573, 15.0f, 1);
			bVar1++;
		}
		if (bParam2)
		{
			SAY_SINGLE_LINE_CONTEXT(Function_32(iParam0->f_244), 96, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
		}
		else
		{
			SAY_SINGLE_LINE_CONTEXT(Function_32(iParam0->f_244), 120, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
		}
		iParam0->f_264 = 1;
	}
	return;
}

bool Function_28(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x1D07 / 7431
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	if (Function_30(StackVal, StackVal, vParam1))
	{
		return 0;
	}
	iVar2 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				Function_29(bVar1);
				if (VDIST(Function_29(bVar1), vParam1) >= fParam4)
				{
					iVar2 = 1;
				}
			}
		}
		bVar0++;
	}
	return iVar2;
}

vector3 Function_29(bool bParam0) //Position: 0x1D75 / 7541
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

bool Function_30(vector3 vParam0) //Position: 0x1DDF / 7647
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

bool Function_31(bool bParam0) //Position: 0x1DF7 / 7671
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

var Function_32(bool bParam0) //Position: 0x1E4E / 7758
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

void Function_33(bool bParam0, bool bParam1, float fParam2, float fParam3, int iParam4, int iParam5) //Position: 0x1E94 / 7828
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return;
	}
	if (SQUAD_GET_SIZE(bParam0) < 0)
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			TASK_CLEAR(bVar1);
			TASK_FLEE_ACTOR(bVar1, bParam1, fParam2, fParam3, iParam4, 0, 0);
			TASK_PRIORITY_SET(bVar1, iParam5);
		}
		bVar0++;
	}
}

void Function_34(bool bParam0, bool bParam1) //Position: 0x1F02 / 7938
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				MEMORY_PREFER_RIDING(bVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

bool Function_35(bool bParam0, var uParam1, var uParam2, var uParam3, bool bParam4, float fParam5) //Position: 0x1F4A / 8010
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
		fVar0 = Function_39(bParam0, Global_34573);
		if (!Function_38(uParam3, 8))
		{
			if (GET_LAST_ATTACKER(bParam0) == Global_34573)
			{
				*uParam1 = 8;
				Function_36(bParam0);
				return 1;
			}
		}
		if (!Function_38(uParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(bParam0, 1.0f))
			{
				*uParam1 = 2;
				Function_36(bParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(bParam0, 1.0f, 1.0f))
			{
				*uParam1 = 2;
				Function_36(bParam0);
				return 1;
			}
		}
		if (!Function_38(uParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(bParam0) || (((GET_ACTOR_UNDER_RETICLE(Global_34573, 0) != bParam0 && IS_PLAYER_WEAPON_ZOOMED(Global_34573)) && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(Global_34573) != bParam0 && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f))
			{
				if (*uParam2 > 0.0f)
				{
					*uParam1 = 4;
					Function_36(bParam0);
					return 1;
				}
				if (*uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - *uParam2) < 1.3f)
					{
						*uParam1 = 4;
						Function_36(bParam0);
						return 1;
					}
				}
				*uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_38(uParam3, 1))
		{
			if (Global_3403 || Global_3404)
			{
				*uParam1 = 1;
				Function_36(bParam0);
				return 1;
			}
		}
		if (!Function_38(uParam3, 16))
		{
			if (UNK_0x7F454A92(bParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(bParam0)) > 2.0f && fVar0 > 18.0f)
				{
					*uParam1 = 16;
					Function_36(bParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_36(bool bParam0) //Position: 0x20E1 / 8417
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(bParam0, 1);
	UNK_0x99AFD2D1(bParam0, 0, 0);
	Function_37(bParam0);
	MEMORY_CONSIDER_AS(Global_34573, bParam0, 2);
	MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
	AI_GOAL_LOOK_CLEAR(bParam0);
	return;
}

void Function_37(bool bParam0) //Position: 0x2115 / 8469
{
	SAY_SINGLE_LINE_CONTEXT(bParam0, 60, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

bool Function_38(var uParam0, int iParam1) //Position: 0x212C / 8492
{
	return (uParam0 && iParam1) == 0;
}

var Function_39(bool bParam0, bool bParam1) //Position: 0x2139 / 8505
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

void Function_40(bool bParam0) //Position: 0x222A / 8746
{
	struct<21> Var0;
	
	bVar12 = Function_50(GET_ACTOR_ENUM(bParam0), &Var0);
	if (bVar12)
	{
		iVar13 = Function_42(&Var0);
		iVar14 = 0;
		if (iVar13 == 2)
		{
			if (Function_41())
			{
				iVar14 = 1;
			}
			else
			{
				iVar14 = 2;
			}
		}
		else if (Var0.f_20)
		{
			iVar14 = 1;
		}
		else if ((&Var0 + 24)->f_20)
		{
			iVar14 = 2;
		}
		else
		{
			iVar14 = 0;
		}
		if (iVar14 == 1)
		{
			AI_SET_CAMPFIRE_STORY_ENABLED(1);
			AI_CONVERSE_SET_CAMPFIRE_STORY_CONTEXT(StackVal, 0);
			AI_CONVERSE_SET_CAMPFIRE_STORY_CONTEXT(StackVal, 1);
			AI_CONVERSE_SET_CAMPFIRE_STORY_CONTEXT(2, Var0.f_12);
			AI_CONVERSE_SET_CAMPFIRE_STORY_CONTEXT(3, Var0.f_16);
		}
		else if (iVar14 == 2)
		{
			AI_SET_CAMPFIRE_STORY_ENABLED(1);
			AI_CONVERSE_SET_CAMPFIRE_STORY_CONTEXT(StackVal, 0);
			AI_CONVERSE_SET_CAMPFIRE_STORY_CONTEXT(StackVal, 1);
			AI_CONVERSE_SET_CAMPFIRE_STORY_CONTEXT(2, (&Var0 + 24)->f_12);
			AI_CONVERSE_SET_CAMPFIRE_STORY_CONTEXT(3, (&Var0 + 24)->f_16);
		}
		else
		{
			AI_SET_CAMPFIRE_STORY_ENABLED(0);
		}
	}
	return;
}

bool Function_41() //Position: 0x22E8 / 8936
{
	return (RAND_INT_RANGE(false, 1999) / 1000) != 0;
}

var Function_42(int iParam0) //Position: 0x22FB / 8955
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	iVar1 = 0;
	iParam0->f_20 = 0;
	(iParam0 + 24)->f_20 = 0;
	if (Function_47(*iParam0, 0))
	{
		bVar0 = Function_43(StackVal);
		bVar2 = MAKE_TIME_OF_DAY_EX(GET_DAY(bVar0), GET_HOUR(bVar0) + 6, GET_MINUTE(bVar0), GET_SECOND(bVar0));
		if (!IS_EARLIER_THAN(GET_TIME_OF_DAY(), bVar2))
		{
			iParam0->f_20 = 1;
			iVar1++;
		}
	}
	if (Function_47(iParam0->f_24, 0))
	{
		bVar0 = Function_43(StackVal);
		bVar3 = MAKE_TIME_OF_DAY_EX(GET_DAY(bVar0), GET_HOUR(bVar0) + 6, GET_MINUTE(bVar0), GET_SECOND(bVar0));
		if (!IS_EARLIER_THAN(GET_TIME_OF_DAY(), bVar3))
		{
			(iParam0 + 24)->f_20 = 1;
			iVar1++;
		}
	}
	return iVar1;
}

bool Function_43(int iParam0) //Position: 0x23AC / 9132
{
	if (!Function_44(iParam0))
	{
		return MAKE_TIME_OF_DAY(0, 0, 0);
	}
	return Global_13172[iParam011].f_36;
}

bool Function_44(int iParam0) //Position: 0x23CB / 9163
{
	if (!Function_46(iParam0))
	{
		return 0;
	}
	if (!Function_45(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_45(int iParam0) //Position: 0x23EF / 9199
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_46(int iParam0) //Position: 0x2404 / 9220
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

bool Function_47(var uParam0, bool bParam1) //Position: 0x241B / 9243
{
	int iVar0;
	
	iVar0 = Function_48(uParam0);
	if (!Function_46(iVar0))
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

var Function_48(int iParam0) //Position: 0x2458 / 9304
{
	if (!Function_49(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_49(int iParam0) //Position: 0x2472 / 9330
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

int Function_50(int iParam0, int iParam1) //Position: 0x2488 / 9352
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (Global_63119[iVar013] == iParam0)
		{
			*iParam1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_63119[iVar013] + 4) };
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_51(bool bParam0, bool bParam1, var uParam2, int iParam3, var uParam4) //Position: 0x24C1 / 9409
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	
	iVar0 = 0;
	bVar8 = CREATE_OBJECT_ITERATOR(bParam0);
	ITERATE_ON_OBJECT_TYPE(bVar8, 12);
	bVar7 = START_OBJECT_ITERATOR(bVar8);
	while (IS_OBJECT_VALID(bVar7) && iVar0 > iParam3)
	{
		if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(bVar7)))
		{
			if (STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(bVar7), "horse_stay"))
			{
				GET_OBJECT_POSITION(bVar7, &vVar1);
				GET_OBJECT_ORIENTATION(bVar7, &vVar4);
				bVar9 = CREATE_ACTOR_IN_LAYOUT(bParam1, Function_99(), (*uParam2)[iVar0], vVar1, vVar4);
				ACCESSORIZE_HORSE(bVar9, 3);
				(*uParam4)[iVar0] = bVar9;
				TASK_USE_GRINGO(bVar9, GET_GRINGO_FROM_OBJECT(bVar7), "UseCase1", 4294967295, 1);
				SNAP_ACTOR_TO_GRINGO(bVar9, bVar7, "UseCase1", 1, 0, 0);
				iVar0++;
			}
		}
		bVar7 = OBJECT_ITERATOR_NEXT(bVar8);
	}
	DESTROY_ITERATOR(bVar8);
}

void Function_52(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6) //Position: 0x258E / 9614
{
	bool bVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	bool bVar8;
	
	iVar1 = 1;
	if (!IS_OBJECT_VALID(bParam4))
	{
		return;
	}
	if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(bParam4)))
	{
		bVar0 = true;
	}
	else
	{
		return;
	}
	GET_OBJECT_POSITION(bParam4, &vVar2);
	GET_OBJECT_ORIENTATION(bParam4, &vVar5);
	bVar8 = CREATE_ACTOR_IN_LAYOUT(bParam0, Function_99(), bParam3, vVar2, vVar5);
	SET_ACTOR_STAY_WITHIN_VOLUME(bVar8, bParam5, 2, 2);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar8, 1);
	AI_GOAL_LOOK_AT_NEUTRAL(bVar8, -1.0f);
	if (!IS_ACTOR_VALID(bVar8))
	{
		LOG_ERROR("CREATE_ACTOR_IN_LAYOUT failed.  Invalid actor returned in campfireCore");
	}
	if (!GRINGO_ACTOR_CAN_USE(GET_GRINGO_FROM_OBJECT(bParam4), "UseCase1", bVar8))
	{
		bVar0 = false;
		while (!IS_OBJECT_VALID(bParam4) && !bVar0)
		{
			if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(bParam4)))
			{
				if (GRINGO_ACTOR_CAN_USE(GET_GRINGO_FROM_OBJECT(bParam4), "UseCase1", bVar8))
				{
					bVar0 = true;
				}
			}
			bParam4 = OBJECT_ITERATOR_NEXT(bParam1);
		}
	}
	if (iParam6 != 0 && STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(bParam4), "pee"))
	{
		bVar0 = false;
	}
	if (iParam6 == 0)
	{
		iVar1 = 4294967295;
	}
	if (bVar0)
	{
		SNAP_ACTOR_TO_GRINGO(bVar8, bParam4, "UseCase1", 1, 0, 0);
		TASK_USE_GRINGO(bVar8, GET_GRINGO_FROM_OBJECT(bParam4), "UseCase1", iVar1, 1);
		TASK_PRIORITY_SET(bVar8, 2);
	}
	else
	{
		TASK_WANDER_IN_VOLUME(bVar8, bParam5, -1.0f);
		TASK_PRIORITY_SET(bVar8, 2);
	}
	Function_53(bVar8, 0);
	SQUAD_JOIN(bVar8, bParam2);
	TASK_PRIORITY_SET(bVar8, 2);
}

void Function_53(bool bParam0, bool bParam1) //Position: 0x2725 / 10021
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

void Function_54(bool bParam0) //Position: 0x2747 / 10055
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = CREATE_OBJECT_ITERATOR(bParam0);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		SNAP_OBJECT_TO_GROUND(bVar1, 99.9f, false, 1092616192);
		ROTATE_OBJECT_UPRIGHT_TO_GROUND(bVar1, 1, 5.0f);
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

var Function_55(var uParam0, bool bParam1, char* cParam2, vector3 vParam3, vector3 vParam6, int iParam9) //Position: 0x278B / 10123
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	int iVar7;
	bool bVar8;
	
	bVar0 = CREATE_PROPSET_IN_LAYOUT(uParam0, bParam1, cParam2, vParam3, vParam6);
	bVar1 = GET_LAYOUT_FROM_OBJECT(bVar0);
	bVar2 = CREATE_OBJECT_ITERATOR(bVar1);
	ITERATE_IN_LAYOUT(bVar2, bVar1);
	bVar3 = START_OBJECT_ITERATOR(bVar2);
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
					bVar8 = DECOR_CHECK_STRING(bVar3, "rstarInfoSnapping_Type", "align");
					SNAP_OBJECT_TO_GROUND(bVar3, 10.0f, bVar8, 1092616192);
				}
				NET_OBJECT_SET_REPLICATION_MODE(bVar3, 0);
				if (Function_119())
				{
					SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_OBJECT(bVar3), 1);
				}
			}
		}
		bVar3 = OBJECT_ITERATOR_NEXT(bVar2);
	}
	STORE_MOBILE_LAYOUT_TRANSFORMS(GET_MOBILE_LAYOUT_FROM_OBJECT(bVar0));
	ADD_AI_COVERSET_FOR_PROPSET(bVar0);
	DESTROY_ITERATOR(bVar2);
	return bVar0;
}

void Function_56(var uParam0, var uParam1, var uParam2, float fParam3, vector3 vParam4) //Position: 0x28D4 / 10452
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
		if (Function_57(StackVal, StackVal, Global_30616, "player_herb", &uVar0, 20.0f, 5, vParam4) >= 0)
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

int Function_57(bool bParam0, bool bParam1, var uParam2, float fParam3, int iParam4, vector3 vParam5) //Position: 0x2975 / 10613
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

bool Function_58(var uParam0, bool bParam1) //Position: 0x2A09 / 10761
{
	if (Function_59(bParam1))
	{
		GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(bParam1), "PlayerCampInfo", "CampIsReady", 1);
		uParam0->f_12 = Local_0;
		DECOR_SET_OBJECT(GET_OBJECT_FROM_GRINGO(GRINGO_GET_MY_GRINGO_ID()), "gringoLayout", uParam0->f_12);
		uParam0->f_284 = CREATE_OBJECTSET_IN_LAYOUT(Function_99(), uParam0->f_12, 12, 1);
		uParam0->f_224 = "";
		return 1;
	}
	return 0;
}

bool Function_59(int iParam0) //Position: 0x2A7E / 10878
{
	var uVar0;
	
	Function_64(3, 2);
	uVar0 = uVar0;
	Local_0 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_99()));
	*(&Local_0 + 4) = { 1.686319f, 0.008248952f, 1.288831f };
	*(&Local_0 + 4 + 12) = { 0.0f, 108.177f, 0.0f };
	Function_61(iParam0, &Local_0 + 4);
	Local_0.f_28 = CREATE_POINT_IN_LAYOUT(Local_0, "player_camp_horse_stay", 1.686319f, 0.008248952f, 1.288831f, 0.0f, 108.177f, 0.0f);
	*(&Local_0 + 32) = { 0.5835081f, 0.002102481f, -1.282692f };
	*(&Local_0 + 32 + 12) = { 0.0f, 188.2533f, 0.0f };
	Function_61(iParam0, &Local_0 + 32);
	Local_0.f_56 = CREATE_POINT_IN_LAYOUT(Local_0, "player_camp_sit", 0.5835081f, 0.002102481f, -1.282692f, 0.0f, 188.2533f, 0.0f);
	Function_60(Local_0, iParam0);
	return 1;
}

void Function_60(bool bParam0, bool bParam1) //Position: 0x2B63 / 11107
{
	int iVar0;
	
	if (IS_LAYOUTREF_VALID(bParam0))
	{
		if (GET_OBJECT_TYPE(bParam0) == 13)
		{
			iVar0 = ATTACH_OBJECTS(bParam0, bParam1, Function_99(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
			if (IS_ATTACHMENT_VALID(iVar0))
			{
				UNK_0x000079CB(GET_MOBILE_LAYOUT_FROM_OBJECT(bParam0));
			}
		}
	}
	return;
}

void Function_61(var uParam0, int iParam1) //Position: 0x2BA5 / 11173
{
	Function_62(uParam0, 1, iParam1, iParam1 + 12);
	return;
}

void Function_62(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x2BB7 / 11191
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (GET_OBJECT_RELATIVE_POSITION(bParam0, *uParam2, &vVar0))
	{
		if (bParam1)
		{
			if (!Function_63(&vVar0, uParam2))
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
	if (!GET_OBJECT_RELATIVE_ORIENTATION(bParam0, *uParam3, &vVar0))
	{
		LOG_ERROR("Failed to get object relative rotation - perhaps the object type does not support transformations");
		*uParam3 = { StackVal, StackVal, vVar0 };
	}
}

bool Function_63(int iParam0, int iParam1) //Position: 0x2CDF / 11487
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(*iParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_30(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	*iParam0 = (*iParam0 + 0.01f);
	iParam0->f_8 = (StackVal + 0.01f);
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_30(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	return 0;
}

void Function_64(int iParam0, int iParam1) //Position: 0x2D4A / 11594
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

bool Function_65(int iParam0) //Position: 0x2D93 / 11667
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_69();
	iVar1 = 0;
	if (!Function_8(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_68(iParam0[iVar03], 8);
		}
		else if (Function_67())
		{
			iVar1 = 1;
			Function_68(iParam0[iVar03], 8);
		}
		Function_68(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_8(iParam0[iVar03], 4))
		{
			if (!Function_8(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_8(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_8(iParam0[03], 8) || iVar1));
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
				Function_68(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_8(iParam0[iVar03], 4))
		{
			if (!Function_8(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_68(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_68(iParam0[iVar03], 2);
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
							Function_68(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_68(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_68(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_68(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_68(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_68(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_68(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_68(iParam0[iVar03], 2);
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
	Function_66();
	return 1;
}

void Function_66() //Position: 0x310E / 12558
{
	if (!Function_116(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_67() //Position: 0x314E / 12622
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

void Function_68(var uParam0, int iParam1) //Position: 0x3179 / 12665
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_69() //Position: 0x318A / 12682
{
	if (!Function_116(128))
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

void Function_70(int iParam0, bool bParam1) //Position: 0x31CC / 12748
{
	char* cVar0[32];
	
	if (Global_83591.f_844)
	{
		strcpy(&cVar0, "a", 32);
		stradd(&cVar0, GET_OBJECT_NAME(StackVal), 32);
		Function_71(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Vector(*(iParam0 + 200), 2, StackVal) + Vector(2.5f, 0.0f, 1.5f), *(iParam0 + 212), &cVar0);
		strcpy(&cVar0, "d", 32);
		stradd(&cVar0, GET_OBJECT_NAME(StackVal), 32);
		Function_71(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Vector(*(iParam0 + 200), 4, StackVal) - Vector(1.5f, 0.0f, 2.5f), *(iParam0 + 212), &cVar0);
	}
	iParam0->f_4 = 1;
	*bParam1 = 250;
	return;
}

void Function_71(var uParam0, var uParam1, vector3 vParam2, vector3 vParam5, char* cParam8) //Position: 0x3250 / 12880
{
	var uVar0;
	var uVar1;
	
	uVar0 = uVar0;
	uVar1 = uVar1;
	Function_72(StackVal, StackVal, StackVal, StackVal, &uVar0, &uVar1, uParam0, vParam2, vParam5, uParam1, 1, 1, cParam8, 0, 0);
}

void Function_72(var uParam0, var uParam1, var uParam2, vector3 vParam3, vector3 vParam6, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14) //Position: 0x3279 / 12921
{
	Function_87(StackVal, StackVal, StackVal, StackVal, uParam0, uParam1, uParam9, uParam2, vParam3, vParam6, uParam12);
	Function_77(*uParam0, *uParam1, uParam9, uParam10, uParam11);
	DECOR_SET_INT(*uParam1, Function_76(), Function_75(uParam10, uParam11, uParam9));
	DECOR_SET_INT(*uParam1, Function_74(), Function_73(uParam13, uParam14));
}

var Function_73(var uParam0, bool bParam1) //Position: 0x32CA / 13002
{
	return (uParam0 || SHIFT_LEFT(bParam1, 16));
}

var Function_74() //Position: 0x32DA / 13018
{
	return "PackedGrass";
}

var Function_75(bool bParam0, bool bParam1, bool bParam2) //Position: 0x32EE / 13038
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam0)
	{
		iVar0 = 1;
	}
	if (bParam1)
	{
		iVar0 += 2;
	}
	return (iVar0 || SHIFT_LEFT(bParam2, 2));
}

var Function_76() //Position: 0x3313 / 13075
{
	return "PackedMetadata";
}

void Function_77(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4) //Position: 0x332A / 13098
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	var uVar5;
	bool bVar6;
	
	switch (iParam2)
	{
		case 0x00000001:
			if (bParam3)
			{
				bVar3 = ADD_BLIP_FOR_OBJECT(bParam0, 379, 0f, 2, 0);
				bVar4 = ADD_BLIP_FOR_OBJECT(bParam1, 379, 0f, 2, 0);
				if (DECOR_GET_INT_VERBOSE(bParam1, Function_86(), &uVar5))
				{
					Function_81(uVar5, &bVar6);
					SET_BLIP_NAME(bVar4, GET_WEAPON_DISPLAY_NAME(bVar6));
				}
			}
			if (bParam4)
			{
				Function_80();
				vVar0 = { StackVal, StackVal, Function_80() };
				vVar0.f_4 = (vVar0.y * 2.0f);
				CREATE_OBJECT_GLOW(bParam0, 0, vVar0, 0);
			}
			break;
		
		case 0x00000002:
			if (bParam3)
			{
				bVar3 = ADD_BLIP_FOR_OBJECT(bParam0, 380, 0f, 2, 0);
				bVar4 = ADD_BLIP_FOR_OBJECT(bParam1, 380, 0f, 2, 0);
			}
			if (bParam4)
			{
				Function_79();
				vVar0 = { StackVal, StackVal, Function_79() };
				vVar0.f_4 = (vVar0.y * 2.0f);
				CREATE_OBJECT_GLOW(bParam0, 0, vVar0, 0);
			}
			break;
		
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
			if (bParam3)
			{
				bVar3 = ADD_BLIP_FOR_OBJECT(bParam0, 381, 0f, 2, 0);
				bVar4 = ADD_BLIP_FOR_OBJECT(bParam1, 381, 0f, 2, 0);
			}
			if (bParam4)
			{
				Function_78();
				vVar0 = { StackVal, StackVal, Function_78() };
				vVar0.f_4 = (vVar0.y * 2.0f);
				CREATE_OBJECT_GLOW(bParam0, 3, vVar0, 0);
			}
			break;
	}
	if (bParam3)
	{
		SET_BLIP_MAX_DISTANCE(bVar3, 1.0f);
		UNK_0x1E98AFEC(bVar3, 1);
		UNK_0xFF3DB575(bVar4, 1);
	}
}

vector3 Function_78() //Position: 0x3455 / 13397
{
	return 0.0f, 0.101f, -0.195f;
}

vector3 Function_79() //Position: 0x3466 / 13414
{
	return 0.0f, 0.127f, -0.177f;
}

vector3 Function_80() //Position: 0x3477 / 13431
{
	return 0.0f, 0.158f, -0.163f;
}

void Function_81(var uParam0, int iParam1) //Position: 0x3488 / 13448
{
	*iParam1 = Function_82(uParam0, Function_84(), 0);
	iParam1->f_4 = Function_82(uParam0, Function_84() + 8, Function_84());
	return;
}

var Function_82(var uParam0, int iParam1, bool bParam2) //Position: 0x34AB / 13483
{
	int iVar0;
	
	iVar0 = (SHIFT_LEFT(Function_83((iParam1 - 1)), true) - 1);
	return SHIFT_RIGHT((iVar0 && uParam0), bParam2);
}

var Function_83(bool bParam0) //Position: 0x34CA / 13514
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_84() //Position: 0x34D6 / 13526
{
	return Function_85(39);
}

int Function_85(bool bParam0) //Position: 0x34E1 / 13537
{
	bool bVar0;
	
	if (bParam0 <= 0)
	{
		return 0x40000000;
	}
	bVar0 = false;
	while (bParam0 >= 0)
	{
		bParam0 = SHIFT_RIGHT(bParam0, true);
		bVar0++;
	}
	return bVar0;
}

var Function_86() //Position: 0x350F / 13583
{
	return "PackedWeapon";
}

int Function_87(var uParam0, var uParam1, int iParam2, bool bParam3, vector3 vParam4, vector3 vParam7, bool bParam10) //Position: 0x3524 / 13604
{
	bool bVar0;
	vector3 vVar1;
	char* cVar4[64];
	
	DISABLE_GRINGO_STREAMING_CHECKS();
	switch (iParam2)
	{
		case 0x00000002:
			bVar0 = Function_94();
			Function_79();
			vVar1 = { StackVal, StackVal, Function_79() };
			break;
		
		case 0x00000001:
			bVar0 = Function_93();
			Function_80();
			vVar1 = { StackVal, StackVal, Function_80() };
			break;
		
		case 0x00000004:
		case 0x00000003:
		case 0x00000005:
			bVar0 = Function_92();
			Function_78();
			vVar1 = { StackVal, StackVal, Function_78() };
			break;
	}
	if (IS_STRING_VALID(cParam10))
	{
		strcpy(&cVar4, Function_91(), 64);
		stradd(&cVar4, bParam10, 64);
	}
	else
	{
		memcpy(&cVar4, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_89(Function_91()), 16);
	}
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	*uParam0 = CREATE_PROP_IN_LAYOUT(bParam3, &cVar4, bVar0, vParam4, vParam7, 0);
	SNAP_OBJECT_TO_GROUND(*uParam0, 1.0f, false, 1092616192);
	*uParam1 = CREATE_GRINGO_ON_OBJECT(*uParam0, Function_88(), "$/content/scripting/gringo/SimpleGringo/Giveaway_Footlocker", vVar1, 0.0f, 0.0f, 0.0f);
	NET_OBJECT_REPLICATION_MODE_END(17);
	ENABLE_GRINGO_STREAMING_CHECKS();
	return 1;
}

var Function_88() //Position: 0x3628 / 13864
{
	return "MPItemGiver";
}

struct<32> Function_89(bool bParam0) //Position: 0x363C / 13884
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_90("0", &cVar8, ""), 4);
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

struct<32> Function_90(char* cParam0, char* cParam1, char* cParam2) //Position: 0x36A6 / 13990
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_91() //Position: 0x36C5 / 14021
{
	return "PBox_";
}

var Function_92() //Position: 0x36D3 / 14035
{
	return "p_gen_crateMultiplayerItem01x";
}

var Function_93() //Position: 0x36F9 / 14073
{
	return "p_gen_crateMultiplayerWeapon01x";
}

var Function_94() //Position: 0x3721 / 14113
{
	return "p_gen_crateMultiplayerAmmo01x";
}

int Function_95(var uParam0, int iParam1) //Position: 0x3747 / 14151
{
	int iVar0;
	var uVar1;
	
	if (!IS_VOLUME_VALID(*uParam0))
	{
		LOG_ERROR("Passed an invalid volume into ADD_AMBIENT_VOLUME_RESTRICTION");
	}
	if (DECOR_CHECK_EXIST(*uParam0, "script"))
	{
		if (!IS_SCRIPT_VALID(DECOR_GET_INT(*uParam0, "script")))
		{
			LOG_ERROR("Passed an invalid script ID into ADD_AMBIENT_VOLUME_RESTRICTION");
		}
	}
	GET_VOLUME_CENTER(*uParam0, &uVar1);
	Function_97(DECOR_GET_INT(*uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
		}
		else
		{
			Function_96(iVar0, uParam0, &uVar1, iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(*uParam0);
	return 0;
}

void Function_96(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x38A8 / 14504
{
	struct<8> Var0;
	
	Global_26155[iParam05].f_8 = *uParam1;
	Global_26155[iParam05].f_16 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_89("stayout") };
	Global_26155[iParam05].f_12 = CREATE_VOLUME_IN_LAYOUT(Global_26150, &Var0, 3, *iParam2, 0.0f, 0.0f, 0.0f, 12.0f, 5.0f, 12.0f);
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	if (bParam3)
	{
		Global_26155[iParam05].f_4 = ADD_BLIP_FOR_COORD(iParam2, 403, 0f, 2, 0);
		SET_BLIP_BLINK(StackVal, 1, 1, 20.0f);
	}
}

int Function_97(bool bParam0) //Position: 0x3943 / 14659
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
						Function_98(iVar0);
					}
					else if (Global_3386)
					{
						if (Function_114(StackVal, StackVal, Global_34573, vVar1) < 25.0f)
						{
							Function_98(iVar0);
						}
					}
					else if (Function_114(StackVal, StackVal, Global_34573, vVar1) < 55.0f)
					{
						Function_98(iVar0);
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
			Function_98(iVar0);
		}
		iVar0++;
	}
	return 0;
}

void Function_98(int iParam0) //Position: 0x3AA4 / 15012
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

var Function_99() //Position: 0x3B05 / 15109
{
	int iVar0;
	
	return iVar0;
}

var Function_100(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x3B0D / 15117
{
	return Function_101(bParam0, iParam1, iParam2, iParam3, iParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_101(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, vector3 vParam6) //Position: 0x3B26 / 15142
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
		Function_107();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, bParam4, iParam5, vParam6);
	if (!Function_106(bVar1))
	{
		if (!Global_30837 && !Global_30838)
		{
			Function_105(bParam0, bParam1, bParam2, bParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_105(bParam0, bParam1, bParam2, bParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && bParam3 != 4294967295)
		{
			while (Function_104(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_106(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_104(bVar0))
				{
					Function_103();
				}
				Function_102(bVar0);
			}
		}
		else if (!bParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != bParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_106(bVar1))
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

void Function_102(int iParam0) //Position: 0x3E19 / 15897
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

void Function_103() //Position: 0x3ECD / 16077
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

bool Function_104(bool bParam0) //Position: 0x3F07 / 16135
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

void Function_105(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x3F34 / 16180
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

bool Function_106(bool bParam0) //Position: 0x4087 / 16519
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_107() //Position: 0x409E / 16542
{
	int iVar0;
	
	if (Global_3402)
	{
		if (StackVal || !Global_30742 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_103();
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
	Function_103();
	return;
}

var Function_108(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x40E9 / 16617
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_8(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_68(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_68(uParam0[iVar03], 8);
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

int Function_109() //Position: 0x41B9 / 16825
{
	int iVar0;
	
	switch (Global_29004)
	{
		case 0x00000000:
			iVar0 = (RAND_INT_RANGE(false, 8999) / 1000);
			switch (iVar0)
			{
				case 0x00000000:
					return 55;
					break;
				
				case 0x00000001:
					return 74;
					break;
				
				case 0x00000002:
					return 96;
					break;
				
				case 0x00000003:
					return 101;
					break;
				
				case 0x00000004:
					return 102;
					break;
				
				case 0x00000005:
					return 151;
					break;
				
				case 0x00000006:
					return 164;
					break;
				
				case 0x00000007:
					return 214;
					break;
				
				case 0x00000008:
					return 217;
					break;
			}
			break;
		
		case 0x00000002:
			iVar0 = (RAND_INT_RANGE(false, 5999) / 1000);
			switch (iVar0)
			{
				case 0x00000000:
					return 11;
					break;
				
				case 0x00000001:
					return 15;
					break;
				
				case 0x00000002:
					return 30;
					break;
				
				case 0x00000003:
					return 36;
					break;
				
				case 0x00000004:
					return 42;
					break;
				
				case 0x00000005:
					return 43;
					break;
			}
			break;
		
		case 0x00000001:
			iVar0 = (RAND_INT_RANGE(false, 4999) / 1000);
			switch (iVar0)
			{
				case 0x00000000:
					return 275;
					break;
				
				case 0x00000001:
					return 313;
					break;
				
				case 0x00000002:
					return 314;
					break;
				
				case 0x00000003:
					return 319;
					break;
				
				case 0x00000004:
					return 320;
					break;
			}
			break;
	}
	return 55;
}

int Function_110() //Position: 0x4315 / 17173
{
	int iVar0;
	
	switch (Global_29004)
	{
		case 0x00000000:
			iVar0 = (RAND_INT_RANGE(false, 5999) / 1000);
			switch (iVar0)
			{
				case 0x00000000:
					return 180;
					break;
				
				case 0x00000001:
					return 181;
					break;
				
				case 0x00000002:
					return 182;
					break;
				
				case 0x00000003:
					return 232;
					break;
				
				case 0x00000004:
					return 233;
					break;
				
				case 0x00000005:
					return 208;
					break;
			}
			break;
		
		case 0x00000002:
			iVar0 = (RAND_INT_RANGE(false, 3999) / 1000);
			switch (iVar0)
			{
				case 0x00000000:
					return 44;
					break;
				
				case 0x00000001:
					return 45;
					break;
				
				case 0x00000002:
					return 183;
					break;
				
				case 0x00000003:
					return 231;
					break;
			}
			break;
		
		case 0x00000001:
			iVar0 = (RAND_INT_RANGE(false, 4999) / 1000);
			switch (iVar0)
			{
				case 0x00000000:
					return 300;
					break;
				
				case 0x00000001:
					return 301;
					break;
				
				case 0x00000002:
					return 302;
					break;
				
				case 0x00000003:
					return 322;
					break;
				
				case 0x00000004:
					return 324;
					break;
			}
			break;
	}
	return 180;
}

bool Function_111(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x4435 / 17461
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
	Function_97(4294967295);
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
			fVar5 = *uParam1;
			if (bVar4)
			{
				fVar5 = (fVar5 + 170.0f);
			}
			if (Global_3386 && bVar6 != 512)
			{
			}
			else if (Function_112(uParam0, &uVar0) > fVar5)
			{
				return 0;
			}
		}
		iVar3++;
	}
	return 1;
}

float Function_112(var uParam0, int iParam1) //Position: 0x4505 / 17669
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*iParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

bool Function_113(int iParam0, float fParam1, int iParam2, int iParam3) //Position: 0x4523 / 17699
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
		if (!Function_30(StackVal, StackVal, *iParam2))
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
			if (!Function_30(StackVal, StackVal, *iParam2))
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

float Function_114(bool bParam0, vector3 vParam1) //Position: 0x4655 / 18005
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_29(bParam0);
		vVar0 = { StackVal, StackVal, Function_29(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

bool Function_115(bool bParam0) //Position: 0x46CF / 18127
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

bool Function_116(int iParam0) //Position: 0x46EE / 18158
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_117() //Position: 0x470A / 18186
{
	if (Function_119())
	{
		return (Function_118() != 1 || Function_118() != 0);
	}
	return 0;
}

int Function_118() //Position: 0x4723 / 18211
{
	return Global_79349.f_16;
}

bool Function_119() //Position: 0x472F / 18223
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_120(int iParam0, bool bParam1, bool bParam2) //Position: 0x4738 / 18232
{
	var uVar0;
	
	iParam0->f_4 = 0;
	iParam0->f_196 = 0;
	memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_89("campfire"), 4);
	iParam0->f_8 = CREATE_LAYOUT(&uVar0);
	if (IS_STRING_VALID(bParam1))
	{
		if (STRING_LENGTH(bParam1) >= 0)
		{
			iParam0->f_16 = GET_ASSET_ID(bParam1, 0);
			Function_121(iParam0 + 60, iParam0->f_16, 0);
		}
	}
	if (IS_STRING_VALID(bParam2))
	{
		if (STRING_LENGTH(bParam2) >= 0)
		{
			iParam0->f_20 = GET_ASSET_ID(bParam2, 7);
			Function_121(iParam0 + 60, iParam0->f_20, 7);
		}
	}
	return;
}

var Function_121(var uParam0, int iParam1, int iParam2) //Position: 0x47B5 / 18357
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_8(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_68(uParam0[iVar03], 4);
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

