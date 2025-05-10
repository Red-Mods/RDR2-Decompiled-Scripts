//Decompiled with MagicRDR v1.0
//Function Count : 163
//Statics Count : 273
//Natives Count : 327
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
	vector3 vLocal_21[38] = {{ 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } };
	var uLocal_136[38] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_175[38] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	char* cLocal_214 = NULL;
	bool bLocal_215 = false;
	int iLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	int iLocal_220 = 0;
	var uLocal_221 = 0;
	struct<57> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	int iVar7;
	var uVar8;
	float fVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13[20];
	bool bVar34;
	struct<521> Var35;
	
	iLocal_14 = 0;
	iLocal_15 = 0;
	bLocal_215 = false;
	iLocal_216 = 0;
	iLocal_220 = 0;
	iVar0 = 0;
	bVar1 = false;
	bVar2 = false;
	bVar3 = CREATE_LAYOUT(Function_162());
	iVar7 = 0;
	fVar9 = 0.0f;
	bVar168 = 23;
	iVar238 = 0;
	bVar239 = false;
	iVar240 = 0;
	iVar241 = 0;
	iVar242 = 0;
	bVar244 = false;
	iVar245 = 0;
	iVar246 = 0;
	bVar247 = false;
	iVar248 = 0;
	uVar284 = "$/tune/refGroups/campsiteSets/cam_corpsePileBurning01x";
	if (Global_3382 == 1)
	{
		iVar0 = 5;
	}
	if (Function_161())
	{
		if (IS_POPSET_VALID(Global_30750[3]) && IS_POPSET_VALID(Global_30750[0]))
		{
			MAKE_NEXT_RAND_ACTORENUMS_UNIQUE(3);
			bVar167 = false;
			while (bVar167 <= 20)
			{
				if (bVar167 > 3 || (bVar167 % 2) != 1)
				{
					uVar13[bVar167] = Function_152(Global_30750[0], 1, 0, 1);
				}
				else
				{
					uVar13[bVar167] = Function_152(Global_30750[3], 1, 0, 1);
				}
				Function_151(&bVar168, uVar13[bVar167], 3, 0);
				bVar167++;
			}
		}
		else
		{
			iVar0 = 5;
		}
	}
	else if (IS_POPSET_VALID(Global_30750[0]))
	{
		MAKE_NEXT_RAND_ACTORENUMS_UNIQUE(3);
		bVar167 = false;
		while (bVar167 <= 20)
		{
			uVar13[bVar167] = Function_152(Global_30750[0], 1, 0, 1);
			Function_151(&bVar168, uVar13[bVar167], 3, 0);
			bVar167++;
		}
	}
	else
	{
		iVar0 = 5;
	}
	Function_149(&bVar168, uVar284, 7, 0);
	Function_149(&bVar168, "stand_drunk_rowdydrink_loose", 1, 0);
	switch (Global_29004)
	{
		case 0x00000000:
		case 0x00000002:
			bVar167 = Function_148(ScriptParam_0.f_56, 2);
			if (bVar167 == 0)
			{
				bVar34 = 54;
			}
			else
			{
				bVar34 = 95;
			}
			break;
		
		case 0x00000001:
			bVar34 = 268;
			break;
	}
	Function_151(&bVar168, bVar34, 3, 0);
	Function_147(bVar34);
	Function_146(&uVar13, 20);
	iVar285 = 0;
	bVar286 = false;
	while (!IS_EXITFLAG_SET())
	{
		iVar4 = 600;
		if (Function_145(&bVar286, &iVar0, &iVar285, &iVar4, bVar1))
		{
			if (bVar286)
			{
				Function_144(&bVar254, 4294967295);
				Function_143(&bVar275);
			}
			else
			{
				Function_142(&bVar254, 4294967295);
				Function_141(&bVar275);
			}
		}
		switch (iVar0)
		{
			case 0x00000000:
				if (Function_135(&bVar168))
				{
					iVar0 = 1;
					iVar4 = 0;
				}
				break;
			
			case 0x00000001:
				if (!Function_127(&Var35, &ScriptParam_0 + 52, 73))
				{
					iVar0 = 5;
					iVar4 = 0;
					break;
				}
				if (Function_126(StackVal, StackVal, *(&Var35 + 224), 1.0f, 100.0f, 1, 1, 0))
				{
					iVar0 = 5;
					iVar4 = 0;
					break;
				}
				if (!Function_124(&Var35 + 224, &ScriptParam_0 + 52, 0, 0))
				{
					iVar0 = 5;
					iVar4 = 0;
					break;
				}
				if (VDIST(Global_34574, *(&Var35 + 224)) > 70.0f)
				{
					iVar0 = 5;
					iVar4 = 0;
					break;
				}
				if (VDIST(Global_34574, *(&Var35 + 224)) < 200.0f)
				{
					iVar0 = 5;
					iVar4 = 0;
					break;
				}
				iVar0 = 2;
				iVar4 = 0;
				break;
			
			case 0x00000002:
				bVar275 = CREATE_ACTOR_IN_LAYOUT(bVar3, Function_162(), bVar34, *(&Var35 + 224), 0.0f, Var35.f_276, 0.0f);
				Function_123(bVar275);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar275, 0);
				UNK_0x99AFD2D1(bVar275, 1, 1);
				DELETE_ALL_WEAPONS_FROM_ACTOR(bVar275);
				GIVE_WEAPON_TO_ACTOR(bVar275, 41, 0, 1, 1);
				ACTOR_PUT_WEAPON_IN_HAND(bVar275, 41, 1);
				MEMORY_REPORT_POSITION_AUTO(bVar275, Global_34573, 1);
				ACTOR_ENABLE_VARIABLE_MESH(bVar275, 19, 1);
				ACTOR_FORCE_WEAPON_RENDER(bVar275, 5, 1);
				bVar239 = true;
				bVar276 = CREATE_VOLUME_IN_LAYOUT(bVar3, Function_162(), 0, *(&Var35 + 212), 0.0f, 0.0f, 0.0f, 40.0f, 30.0f, 40.0f);
				CLEAR_AMBIENT_OBJECTS_SPHERE(*(&Var35 + 212), 30.0f, 15);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar276);
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar276);
				vVar251 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(&Var35 + 284), *(&Var35 + 92), StackVal) };
				VSCALE(&vVar251, 0.5f);
				bVar277 = CREATE_VOLUME_IN_LAYOUT(bVar3, Function_162(), 0, vVar251, 0.0f, 0.0f, 0.0f, 2.7f, 2.7f, 2.7f);
				Function_121(StackVal, StackVal, &uVar10, &uVar11, &uVar12, 8.0f, *(&Var35 + 212));
				Function_120(&uVar8, 1);
				Function_120(&uVar8, 16);
				Function_120(&uVar8, 2);
				uVar287 = Function_118(StackVal, StackVal, bVar3, Function_162(), uVar284, *(&Var35 + 212), 0.0f, Var35.f_272, 0.0f, 4294967295);
				UNK_0x44986367(&vVar251, Var35.f_276);
				VSCALE(&vVar251, 13.0f);
				vVar251 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(&Var35 + 224), vVar251, StackVal) };
				bVar254[0] = CREATE_ACTOR_IN_LAYOUT(bVar3, "zombie0", uVar13[0], vVar251, 0.0f, 0.0f, 0.0f);
				if (!Function_117(bVar254[0]))
				{
					Function_110(bVar254[0], 1254, 4294967295, 4294967295, 4294967295, 1, 1, 1);
				}
				vVar251.x = (vVar251.x + 1.0f);
				bVar254[1] = CREATE_ACTOR_IN_LAYOUT(bVar3, "zombie1", uVar13[1], vVar251, 0.0f, 0.0f, 0.0f);
				if (!Function_117(bVar254[1]))
				{
					Function_110(bVar254[1], 1254, 4294967295, 4294967295, 4294967295, 1, 1, 1);
				}
				vVar251.x = (vVar251.x + -2.0f);
				bVar254[2] = CREATE_ACTOR_IN_LAYOUT(bVar3, "zombie2", uVar13[2], vVar251, 0.0f, 0.0f, 0.0f);
				if (!Function_117(bVar254[2]))
				{
					Function_110(bVar254[2], 1254, 4294967295, 4294967295, 4294967295, 1, 1, 1);
				}
				bVar167 = false;
				while (bVar167 <= 3)
				{
					uLocal_221 = TASK_SEQUENCE_OPEN();
					TASK_FLEE_ACTOR(false, bVar275, 20.0f, -1.0f, 0, 0, 0);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bVar254[bVar167], uLocal_221);
					TASK_SEQUENCE_RELEASE(uLocal_221, 1);
					TASK_PRIORITY_SET(bVar254[bVar167], 0);
					MEMORY_REPORT_POSITION_AUTO(bVar275, bVar254[bVar167], 1);
					SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bVar254[bVar167], 0.1f);
					bVar167++;
				}
				bVar167 = false;
				while (bVar167 <= 17)
				{
					if ((bVar167 % 2) == 0)
					{
						bVar254[bVar167 + 3] = CREATE_ACTOR_IN_LAYOUT(bVar3, Function_162(), uVar13[bVar167 + 3], *(&Var35 + 92), 0.0f, RAND_FLOAT_RANGE(-180.0f, 180.0f), 0.0f);
					}
					else
					{
						bVar254[bVar167 + 3] = CREATE_ACTOR_IN_LAYOUT(bVar3, Function_162(), uVar13[bVar167 + 3], *(&Var35 + 284), 0.0f, RAND_FLOAT_RANGE(-180.0f, 180.0f), 0.0f);
					}
					if (!Function_117(bVar254[bVar167 + 3]))
					{
						Function_110(bVar254[bVar167 + 3], 1254, 4294967295, 4294967295, 4294967295, 1, 1, 1);
					}
					TASK_WANDER_IN_VOLUME(bVar254[bVar167 + 3], bVar277, -1.0f);
					TASK_PRIORITY_SET(bVar254[bVar167 + 3], 0);
					bVar167++;
				}
				bVar278 = CREATE_VOLUME_IN_LAYOUT(Global_26150, Function_162(), 3, *(&Var35 + 224), 0.0f, 0.0f, 0.0f, ScriptParam_0.f_52, 20.0f, ScriptParam_0.f_52);
				DECOR_SET_INT(bVar278, "script", GET_THIS_SCRIPT_ID());
				Function_103(&bVar278, ScriptParam_0.f_32);
				Function_98(ScriptParam_0.f_56, 0.0f, 1, 0, ScriptParam_0.f_32);
				uVar280 = COMBAT_CLASS_AI_GET_RANGE_ACCURACY(bVar275);
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bVar275, 2.0f);
				AI_SET_WEAPON_MAX_RANGE(bVar275, (Function_97(bVar275) * 1.5f));
				Function_94(&bVar254, bVar275, 0);
				bVar279 = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(bVar3, Function_162(), "$/content/scripting/gringo/SimpleGringo/stand_drunk_rowdydrink_loose", *(&Var35 + 224), 0.0f, Var35.f_276, 0.0f));
				SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_GRINGO(bVar279), 3.0f, true, 1092616192);
				bVar282 = CREATE_GRINGO_IN_LAYOUT(bVar3, Function_162(), "$/content/scripting/gringo/SimpleGringo/Locked_Footlocker", *(&Var35 + 200), 0.0f, Var35.f_280, 0.0f);
				bVar283 = GET_GRINGO_FROM_OBJECT(bVar282);
				Function_89(bVar283, 0.0f, 0.0f, 0.0f, 4294967295, 11, 3.0f);
				iVar0 = 3;
				iVar4 = 0;
				break;
			
			case 0x00000003:
				Function_88();
				Function_86(StackVal, StackVal, Function_88(), &bVar1, ScriptParam_0.f_56, bVar275, 60, 0x42700000, 1);
				Function_59(&bVar254, 20, &bVar1, ScriptParam_0.f_56, 60, 0x42700000, 1);
				if (!Function_52(ScriptParam_0.f_56, bVar275, &iVar241, &iVar240, 0, 1, 1, 1))
				{
					TASK_FLEE_ACTOR(bVar275, Global_34573, -1.0f, -1.0f, 0, 0, 0);
					iVar0 = 5;
					iVar4 = 0;
					break;
				}
				if (!bVar249)
				{
					if (Function_49(Var35.f_520))
					{
						Function_47(&Var35, &iVar281, bVar3);
						bVar249 = true;
					}
				}
				if (!bLocal_215)
				{
					if (Function_46(&bVar254, 20, 45.0f))
					{
						Function_44();
					}
				}
				bVar244 = true;
				if (IS_ACTOR_VALID(bVar275))
				{
					if (Function_43(bVar275, Global_34573) > 200.0f)
					{
						bVar244 = false;
					}
				}
				if (Function_46(&bVar254, 20, Function_41(1)))
				{
					bVar244 = false;
				}
				if (bVar244)
				{
					iVar0 = 5;
					iVar4 = 0;
				}
				if (Function_38(bVar275, &uVar5, &fVar9, uVar8, 0, 0x40400000))
				{
					bVar2 = true;
					iVar241 = 1;
					bVar247 = true;
					if (Function_36(bVar275, 0))
					{
						RESET_ANIM_SET_FOR_ACTOR(bVar275, 1);
						Function_35(bVar275, &Global_34573);
						Function_34(bVar275);
					}
					bVar167 = false;
					while (bVar167 <= 20)
					{
						if (Function_36(bVar254[bVar167], 0))
						{
							TASK_CLEAR(bVar254[bVar167]);
						}
						bVar167++;
					}
					iVar0 = 5;
					iVar4 = 0;
					break;
				}
				if (bVar249 && !iLocal_220)
				{
					bVar167 = false;
					while (bVar167 <= GET_OBJECTSET_SIZE(iVar281))
					{
						bVar250 = GET_DOOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar167, iVar281));
						if (IS_DOOR_VALID(bVar250))
						{
							if (IS_DOOR_OPENING(bVar250) || IS_DOOR_OPENED(bVar250))
							{
								Function_33(Global_34573, bVar254[0], "PLAYER_SHOCKED_BY_CARNAGE", 0, 5, 60, 1, 1);
								AUDIO_MUSIC_SET_MOOD("LOW_FIGHT_MEDIUM", 0.0f, 0, 4294967295);
								iLocal_220 = 1;
							}
						}
						bVar167++;
					}
					if (iLocal_220 && iVar238 > 7)
					{
						iVar238 = 7;
						bVar2 = true;
						iVar241 = 1;
						bVar247 = true;
						if (Function_36(bVar275, 0))
						{
							RESET_ANIM_SET_FOR_ACTOR(bVar275, 1);
							Function_24(bVar275, 2, 0, 3);
							Function_33(bVar275, Global_34573, "SCREAM_HIGH", 0, 5, 60, 1, 1);
						}
						bVar167 = false;
						while (bVar167 <= 20)
						{
							if (Function_36(bVar254[bVar167], 0))
							{
								TASK_CLEAR(bVar254[bVar167]);
							}
							bVar167++;
						}
					}
				}
				if (!Function_36(bVar275, 0))
				{
					iVar238 = 6;
				}
				if (Function_13(&iVar238, &bVar254, bVar275, uVar280, bVar279, &Var35))
				{
					bVar247 = true;
					iVar0 = 5;
					iVar4 = 0;
				}
				break;
			
			case 0x00000005:
				iVar0 = 6;
				iVar4 = 0;
				break;
			
			case 0x00000006:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				iVar4 = 0;
				break;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(iVar4);
		}
	}
	if (bLocal_215)
	{
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	}
	Function_142(&bVar254, 4294967295);
	Function_141(&bVar275);
	Function_12(&uVar10, &uVar11, &uVar12);
	Function_11(bVar34);
	Function_10(&uVar13, 20);
	if (!bVar247)
	{
		Function_9(&bVar254, 4294967295);
		Function_8(&bVar275);
	}
	Function_7(iVar281);
	if (ScriptParam_0.f_32)
	{
		Global_3399 = 0;
	}
	if (!bVar1)
	{
		Function_98(ScriptParam_0.f_56, 0.0f, 0, 1, 0);
	}
	if (Function_36(bVar275, 0))
	{
		AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar275, 1);
		UNK_0x99AFD2D1(bVar275, 0, 0);
	}
	bVar167 = false;
	while (bVar167 <= 20)
	{
		Function_5(bVar254[bVar167]);
		bVar167++;
	}
	Function_1(&bVar168);
	if (bVar239)
	{
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar276);
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar276);
	}
	if (!bVar1 && !bVar2)
	{
		Function_9(&bVar254, 4294967295);
		Function_8(&bVar275);
		if (IS_OBJECT_VALID(bVar3))
		{
			UNK_0xA936E73B(bVar3, 1);
			MARK_OBJECT_FOR_AGGRESSIVE_CLEANUP(bVar3, 1);
		}
	}
	RELEASE_LAYOUT_REF(bVar3);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0xB37 / 2871
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

void Function_2(var uParam0, int iParam1) //Position: 0xB5D / 2909
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

void Function_3(var uParam0, int iParam1) //Position: 0xC8B / 3211
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_4(var uParam0, int iParam1) //Position: 0xCA5 / 3237
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_5(bool bParam0) //Position: 0xCC2 / 3266
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_6(bParam0);
		return 1;
	}
	return 0;
}

void Function_6(bool bParam0) //Position: 0xCD8 / 3288
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

void Function_7(int iParam0) //Position: 0xD04 / 3332
{
	bool bVar0;
	bool bVar1;
	
	if (IS_OBJECTSET_VALID(iParam0))
	{
		bVar0 = false;
		while (bVar0 <= GET_OBJECTSET_SIZE(iParam0))
		{
			bVar1 = GET_DOOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, iParam0));
			if (IS_DOOR_VALID(bVar1))
			{
				SET_DOOR_LOCK(bVar1, 0);
			}
			bVar0++;
		}
		DESTROY_OBJECTSET(iParam0);
	}
	return;
}

void Function_8(bool bParam0) //Position: 0xD47 / 3399
{
	if (IS_ACTOR_VALID(*bParam0))
	{
		RESET_ANIM_SET_FOR_ACTOR(*bParam0, 0);
		TASK_FLEE_ACTOR(*bParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
		TASK_PRIORITY_SET(*bParam0, 0);
	}
	return;
}

void Function_9(bool bParam0, int iParam1) //Position: 0xD72 / 3442
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *bParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_8(bParam0[iVar0]);
		iVar0++;
	}
	return;
}

void Function_10(var uParam0, int iParam1) //Position: 0xD9F / 3487
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION((*uParam0)[iVar0]);
		iVar0++;
	}
	return;
}

void Function_11(int iParam0) //Position: 0xDC1 / 3521
{
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(iParam0);
	return;
}

void Function_12(var uParam0, var uParam1, bool bParam2) //Position: 0xDCC / 3532
{
	if (*uParam0 != 4294967295)
	{
		RESET_THIS_TREE_TYPE_CLEARING(*uParam0);
	}
	if (*uParam1 != 4294967295)
	{
		RESET_THIS_BREAKABLE_TREE_CLEARING(*uParam1);
	}
	if (*bParam2 != 4294967295)
	{
		RESET_THIS_TREE_TYPE_CLEARING(*bParam2);
	}
	return;
}

bool Function_13(var uParam0, var uParam1, bool bParam2, var uParam3, bool bParam4, int iParam5) //Position: 0xDF9 / 3577
{
	int iVar0;
	bool bVar1;
	
	uParam3 = uParam3;
	bVar1 = false;
	switch (*uParam0)
	{
		case 0x00000000:
			if (Function_94(uParam1, bParam2, 0))
			{
				if (ACTORS_IN_RANGE(bParam2, Global_34573, 60.0f) && !IS_AMBIENT_SPEECH_PLAYING(bParam2))
				{
					Function_33(bParam2, Global_34573, "Homestead_msg01", "Homestead_msg01", 5, 60, 1, 1);
				}
				TASK_FACE_ACTOR(bParam2, Global_34573, 1, -1.0f);
				Function_22(&uLocal_217, 4.0f);
				*uParam0 = 2;
			}
			else if (Function_21(uParam1, 3, 65.0f) || Function_20(bParam2, 1.0f, 65.0f, 1, 1, 0))
			{
				iVar0 = 0;
				while (iVar0 <= 3)
				{
					if (Function_36((*uParam1)[iVar0], 0))
					{
						SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR((*uParam1)[iVar0], 5.0f);
						TASK_GO_NEAR_ACTOR((*uParam1)[iVar0], bParam2, 5.0f, 1);
					}
					iVar0++;
				}
				Function_22(&uLocal_217, 0.0f);
				*uParam0 = 1;
			}
			break;
		
		case 0x00000001:
			if (Function_94(uParam1, bParam2, 1))
			{
				if (ACTORS_IN_RANGE(bParam2, Global_34573, 60.0f))
				{
					Function_33(bParam2, Global_34573, "Homestead_msg01", "Homestead_msg01", 5, 60, 1, 1);
				}
				TASK_FACE_ACTOR(bParam2, Global_34573, 1, -1.0f);
				Function_22(&uLocal_217, 0.0f);
				*uParam0 = 2;
			}
			break;
		
		case 0x00000002:
			if (!IS_AMBIENT_SPEECH_PLAYING(bParam2) && Function_15(&uLocal_217, 4.0f))
			{
				TASK_USE_GRINGO(bParam2, bParam4, "UseCase1", 4294967295, 1);
				Function_22(&uLocal_217, 0.0f);
				*uParam0 = 3;
			}
			break;
		
		case 0x00000003:
			if ((ACTORS_IN_RANGE(bParam2, Global_34573, 20.0f) && !iLocal_216) && !IS_AMBIENT_SPEECH_PLAYING(bParam2))
			{
				Function_33(bParam2, Global_34573, "Homestead_msg02", "Homestead_msg02", 5, 60, 1, 1);
				AUDIO_MUSIC_SET_MOOD("IDLE", 0, 4294967295, 4294967295);
				iLocal_216 = 1;
			}
			if (Function_15(&uLocal_217, 30.0f))
			{
				MAKE_ACTOR_READY_FOR_ACTION(bParam2, 1);
				SET_ACTOR_DRUNK(bParam2, 1);
				TASK_FLEE_COORD(bParam2, iParam5 + 92, 1, -1.0f, -1.0f, 0);
				Function_22(&uLocal_217, 0.0f);
				*uParam0 = 4;
			}
			break;
		
		case 0x00000004:
			if (Function_15(&uLocal_217, 10.0f))
			{
				if (Function_14())
				{
					SET_ACTOR_PASSED_OUT(bParam2, 1);
					*uParam0 = 5;
				}
			}
			break;
		
		case 0x00000007:
			iVar0 = 0;
			while (iVar0 <= 20)
			{
				if (IS_ACTOR_ALIVE((*uParam1)[iVar0]))
				{
					bVar1 = false;
				}
				iVar0++;
			}
			if (bVar1)
			{
				return 1;
			}
			if (VDIST(Global_34574, *(iParam5 + 92)) < 60.0f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool Function_14() //Position: 0x108C / 4236
{
	return (RAND_INT_RANGE(0, 1999) / 1000) != 0;
}

bool Function_15(var uParam0, float fParam1) //Position: 0x109F / 4255
{
	if (Function_19(uParam0))
	{
		if (Function_16(uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_16(bool bParam0) //Position: 0x10BB / 4283
{
	if (Function_19(bParam0))
	{
		if (Function_17(bParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_17(int iParam0) //Position: 0x1183 / 4483
{
	return Function_18(*iParam0, 2);
}

bool Function_18(var uParam0, int iParam1) //Position: 0x1190 / 4496
{
	return (uParam0 && iParam1) == 0;
}

bool Function_19(bool bParam0) //Position: 0x119D / 4509
{
	return Function_18(*bParam0, 1);
}

bool Function_20(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x11AA / 4522
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

int Function_21(var uParam0, int iParam1, int iParam2) //Position: 0x11C4 / 4548
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		if (Function_36((*uParam0)[iVar0], 0))
		{
			if (Function_20((*uParam0)[iVar0], 1.0f, iParam2, 1, 1, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_22(var uParam0, float fParam1) //Position: 0x120A / 4618
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_120(uParam0, 1);
	Function_23(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_23(var uParam0, int iParam1) //Position: 0x122B / 4651
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

int Function_24(bool bParam0, int iParam1, var uParam2, var uParam3) //Position: 0x123E / 4670
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
					Function_25(bVar1, 0, 0, 0, 1);
				}
				iVar0++;
			}
		}
		Function_25(bParam0, iParam1, uParam2, uParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_25(bool bParam0, int iParam1, var uParam2, var uParam3, int iParam4) //Position: 0x131E / 4894
{
	char* cVar0[32];
	
	Function_32();
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
	if (Function_31(bParam0) == 1)
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
	Function_30(bParam0, 0);
	Function_29(bParam0, iParam1);
	Function_28(bParam0, uParam2);
	Function_27(bParam0, uParam3);
	if (Function_26(bParam0) != 5)
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

int Function_26(bool bParam0) //Position: 0x156C / 5484
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior");
}

void Function_27(bool bParam0, bool bParam1) //Position: 0x158F / 5519
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_28(bool bParam0, bool bParam1) //Position: 0x15B2 / 5554
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_target", bParam1);
	return;
}

void Function_29(bool bParam0, bool bParam1) //Position: 0x15D6 / 5590
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_30(bool bParam0, bool bParam1) //Position: 0x15FC / 5628
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_state", bParam1);
	return;
}

int Function_31(bool bParam0) //Position: 0x161F / 5663
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
}

void Function_32() //Position: 0x163D / 5693
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

void Function_33(bool bParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x1687 / 5767
{
	bParam1 = bParam1;
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0) && Function_43(bParam0, Global_34573) >= IntToFloat(iParam5))
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
						iParam3 = iParam3;
					}
				}
				else if (!SAY_SINGLE_LINE_STRING_BEAT(bParam0, bParam2, bParam1, 1, 1, iParam4, iParam7, 0, 1, 1))
				{
					iParam3 = iParam3;
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING(bParam0, bParam2, true, true, iParam4, 0, false, true);
			}
		}
	}
}

void Function_34(bool bParam0) //Position: 0x1717 / 5911
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

int Function_35(bool bParam0, int iParam1) //Position: 0x1763 / 5987
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

bool Function_36(bool bParam0, bool bParam1) //Position: 0x1848 / 6216
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
			Function_5(bParam0);
			return 0;
		}
		if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 163840))
		{
			Function_5(bParam0);
			return 0;
		}
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		if (Function_37(bParam0, 0) && !AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 16384))
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

int Function_37(bool bParam0, bool bParam1) //Position: 0x18E4 / 6372
{
	bool bVar0;
	int iVar1;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (bParam1 && IS_ACTOR_HOGTIED(bParam0))
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

bool Function_38(bool bParam0, var uParam1, var uParam2, var uParam3, bool bParam4, float fParam5) //Position: 0x192E / 6446
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
		fVar0 = Function_43(bParam0, Global_34573);
		if (!Function_18(uParam3, 8))
		{
			if (GET_LAST_ATTACKER(bParam0) == Global_34573)
			{
				*uParam1 = 8;
				Function_39(bParam0);
				return 1;
			}
		}
		if (!Function_18(uParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(bParam0, 1.0f))
			{
				*uParam1 = 2;
				Function_39(bParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(bParam0, 1.0f, 1.0f))
			{
				*uParam1 = 2;
				Function_39(bParam0);
				return 1;
			}
		}
		if (!Function_18(uParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(bParam0) || (((GET_ACTOR_UNDER_RETICLE(Global_34573, 0) != bParam0 && IS_PLAYER_WEAPON_ZOOMED(Global_34573)) && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(Global_34573) != bParam0 && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f))
			{
				if (*uParam2 > 0.0f)
				{
					*uParam1 = 4;
					Function_39(bParam0);
					return 1;
				}
				if (*uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - *uParam2) < 1.3f)
					{
						*uParam1 = 4;
						Function_39(bParam0);
						return 1;
					}
				}
				*uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_18(uParam3, 1))
		{
			if (Global_3403 || Global_3404)
			{
				*uParam1 = 1;
				Function_39(bParam0);
				return 1;
			}
		}
		if (!Function_18(uParam3, 16))
		{
			if (UNK_0x7F454A92(bParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(bParam0)) > 2.0f && fVar0 > 18.0f)
				{
					*uParam1 = 16;
					Function_39(bParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_39(bool bParam0) //Position: 0x1AC5 / 6853
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(bParam0, 1);
	UNK_0x99AFD2D1(bParam0, 0, 0);
	Function_40(bParam0);
	MEMORY_CONSIDER_AS(Global_34573, bParam0, 2);
	MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
	AI_GOAL_LOOK_CLEAR(bParam0);
	return;
}

void Function_40(bool bParam0) //Position: 0x1AF9 / 6905
{
	SAY_SINGLE_LINE_CONTEXT(bParam0, 60, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

float Function_41(bool bParam0) //Position: 0x1B10 / 6928
{
	var uVar0;
	float fVar1;
	
	if (!bParam0)
	{
		Function_42(&uVar0, &fVar1);
		if (fVar1 < 60.0f)
		{
			return (fVar1 + 20.0f);
		}
		return (fVar1 + 10.0f);
	}
	return (190.0f + 20.0f);
}

void Function_42(var uParam0, int iParam1) //Position: 0x1B4B / 6987
{
	vector3 vVar0;
	
	if (Global_3386 && !Global_3403)
	{
		*uParam0 = 65.0f;
		*iParam1 = 95.0f;
	}
	else if ((!IS_ACTOR_RIDING(GET_PLAYER_ACTOR(0)) && !IS_ACTOR_RIDING_VEHICLE(GET_PLAYER_ACTOR(0))) && !Global_3403)
	{
		*uParam0 = 115.0f;
		*iParam1 = 170.0f;
	}
	else
	{
		GET_ACTOR_VELOCITY(GET_PLAYER_ACTOR(0), &vVar0);
		if (VMAG(vVar0) > 5.0f)
		{
			*uParam0 = 130.0f;
			*iParam1 = 190.0f;
		}
		else
		{
			*uParam0 = 130.0f;
			*iParam1 = 190.0f;
		}
	}
	return;
}

float Function_43(bool bParam0, bool bParam1) //Position: 0x1BD4 / 7124
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

void Function_44() //Position: 0x1CC5 / 7365
{
	int iVar0;
	
	bLocal_215 = true;
	if (Global_29004 == 0)
	{
		iVar0 = Function_45(4);
		if (iVar0 == 0)
		{
			cLocal_214 = "TC_FTR_SONG_01";
		}
		else if (iVar0 == 1)
		{
			cLocal_214 = "TC_FTR_SONG_02";
		}
		else if (iVar0 == 2)
		{
			cLocal_214 = "TC_FTR_SONG_03";
		}
		else if (iVar0 == 3)
		{
			cLocal_214 = "TC_FTR_SONG_04";
		}
	}
	else if (Global_29004 == 2)
	{
		iVar0 = Function_45(2);
		if (iVar0 == 0)
		{
			cLocal_214 = "TC_NRT_SONG_01";
		}
		else if (iVar0 == 1)
		{
			cLocal_214 = "TC_NRT_SONG_02";
		}
	}
	else if (Global_29004 == 1)
	{
		iVar0 = Function_45(2);
		if (iVar0 == 0)
		{
			cLocal_214 = "TC_MEX_SONG_01";
		}
		else if (iVar0 == 1)
		{
			cLocal_214 = "TC_MEX_SONG_02";
		}
	}
	AUDIO_MUSIC_FORCE_TRACK(cLocal_214, "SUSPENSE_MEDIUM", 0.0f, 100, 4294967295, 3212836864, 0);
	return;
}

int Function_45(bool bParam0) //Position: 0x1DF3 / 7667
{
	bParam0 = (bParam0 * 1000 - 1);
	return (RAND_INT_RANGE(0, bParam0) / 1000);
}

bool Function_46(var uParam0, int iParam1, float fParam2) //Position: 0x1E0C / 7692
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		if (IS_ACTOR_VALID((*uParam0)[iVar0]))
		{
			if (Function_43((*uParam0)[iVar0], Global_34573) > fParam2)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_47(int iParam0, var uParam1, bool bParam2) //Position: 0x1E46 / 7750
{
	bool bVar0;
	
	*uParam1 = CREATE_OBJECTSET_IN_LAYOUT(Function_162(), bParam2, 4294967295, 0);
	bVar0 = FIND_NEAREST_DOOR(iParam0 + 32, 1.0f);
	Function_48(bVar0, *uParam1);
	bVar0 = FIND_NEAREST_DOOR(iParam0 + 44, 1.0f);
	Function_48(bVar0, *uParam1);
	bVar0 = FIND_NEAREST_DOOR(iParam0 + 56, 1.0f);
	Function_48(bVar0, *uParam1);
	bVar0 = FIND_NEAREST_DOOR(iParam0 + 68, 1.0f);
	Function_48(bVar0, *uParam1);
	bVar0 = FIND_NEAREST_DOOR(iParam0 + 80, 1.0f);
	Function_48(bVar0, *uParam1);
	return;
}

void Function_48(bool bParam0, int iParam1) //Position: 0x1EB3 / 7859
{
	if (IS_DOOR_VALID(bParam0))
	{
		CLOSE_DOOR_FAST(bParam0);
		ADD_OBJECT_TO_OBJECTSET(bParam0, iParam1);
	}
	else
	{
		LOG_ERROR("invalid door!");
	}
	return;
}

bool Function_49(bool bParam0) //Position: 0x1EE4 / 7908
{
	if (!Function_51(bParam0))
	{
		return 1;
	}
	return Function_50(&(Global_29008[bParam0]), 4);
}

int Function_50(var uParam0, int iParam1) //Position: 0x1F00 / 7936
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_51(bool bParam0) //Position: 0x1F1C / 7964
{
	if (bParam0 > 0 || bParam0 < 145)
	{
		return 0;
	}
	return 1;
}

bool Function_52(int iParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x1F32 / 7986
{
	if (StackVal & 64 == 64)
	{
		if (!*uParam2)
		{
			if (IS_ACTOR_VALID(bParam1))
			{
				if (Function_43(Global_34573, bParam1) > 15.0f)
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
		if (Function_55() && !*uParam2)
		{
			return 0;
		}
		if (Function_54(iParam0) && !*uParam2)
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
		if (!Function_53(iParam0, uParam5))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_53(int iParam0, int iParam1) //Position: 0x2060 / 8288
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

int Function_54(int iParam0) //Position: 0x2081 / 8321
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

int Function_55() //Position: 0x20BF / 8383
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
						if (Function_56(StackVal, Global_34573) > IntToFloat(iVar1))
						{
							return 1;
						}
					}
				}
			}
			if (Function_56(StackVal, Global_34573) > IntToFloat(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

float Function_56(bool bParam0, bool bParam1) //Position: 0x217A / 8570
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_58(bParam0);
			vVar0 = { StackVal, StackVal, Function_58(bParam0) };
			Function_57(bParam1);
			vVar3 = { StackVal, StackVal, Function_57(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

vector3 Function_57(bool bParam0) //Position: 0x221A / 8730
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

vector3 Function_58(bool bParam0) //Position: 0x2286 / 8838
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

void Function_59(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6) //Position: 0x22F0 / 8944
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!*uParam2)
	{
		iVar0 = 1;
	}
	iVar1 = 0;
	while (iVar1 <= iParam1)
	{
		if (IS_ACTOR_VALID((*uParam0)[iVar1]))
		{
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), (*uParam0)[iVar1], 1.0f, iParam5, 1, 1, 0))
			{
				*uParam2 = 1;
				if (iParam4 != 0)
				{
					Global_25265 = (GET_CURRENT_GAME_TIME() + IntToFloat(iParam4));
				}
			}
		}
		iVar1++;
	}
	if (*uParam2 && iVar0)
	{
		if (StackVal & 64 == 64)
		{
			Function_85(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_84(0);
		}
		if (bParam6)
		{
			Function_82(0, GET_THIS_SCRIPT_ID());
			Global_3373 = GET_THIS_SCRIPT_ID();
			Global_3401 = 1;
			Function_80(iParam3);
		}
		Function_78(iParam3);
		if (Function_77(StackVal, 32768))
		{
			Function_74(1);
		}
		Global_16876[iParam36].f_12++;
		Function_60(408, 1, 0, 0);
	}
}

int Function_60(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x23DD / 9181
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
	Function_73(iParam0, TO_FLOAT(bParam1), 1);
	Function_72(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_61(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_61(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x25FD / 9725
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_71(390))), 32);
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
					bVar19 = (Function_70(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_70(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_68(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_65(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_63(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_62(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_162(), &Var9);
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

var Function_62(int iParam0) //Position: 0x2C2A / 11306
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_63(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2C3B / 11323
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_64("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_64("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_64("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_64(char* cParam0, bool bParam1) //Position: 0x2D30 / 11568
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_65(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2D49 / 11593
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_67(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_66(Function_67(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_66(int iParam0, int iParam1) //Position: 0x2DAE / 11694
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_67(int iParam0, int iParam1) //Position: 0x2DC0 / 11712
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_68(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2DD2 / 11730
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
	if (((Function_69(iParam0) != 19 || Function_69(iParam0) != 17) || Function_69(iParam0) != 10) || Function_69(iParam0) != 9)
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

int Function_69(int iParam0) //Position: 0x2F02 / 12034
{
	return Global_35278[iParam020].f_48;
}

float Function_70(int iParam0) //Position: 0x2F11 / 12049
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_71(int iParam0) //Position: 0x2F4A / 12106
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_72(int iParam0) //Position: 0x2F87 / 12167
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

int Function_73(int iParam0, float fParam1, bool bParam2) //Position: 0x3121 / 12577
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

void Function_74(bool bParam0) //Position: 0x3365 / 13157
{
	if (bParam0)
	{
		Function_76(0x10000000);
	}
	else
	{
		Function_75(0x10000000);
	}
	Global_26316.f_172 = 0;
	return;
}

void Function_75(int iParam0) //Position: 0x3389 / 13193
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_76(int iParam0) //Position: 0x33A6 / 13222
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

bool Function_77(var uParam0, int iParam1) //Position: 0x33B9 / 13241
{
	return (uParam0 && iParam1) == 0;
}

void Function_78(int iParam0) //Position: 0x33C6 / 13254
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (!Function_18(StackVal, 524288))
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
			bVar1 = Function_79(iVar0 * 60);
			ADD_TIME(&Global_17483[iParam075] + 264, 0, 0, bVar1, 0);
			Global_16876[iParam06] = Global_17483[iParam075].f_264;
		}
	}
	return;
}

int Function_79(int iParam0) //Position: 0x346A / 13418
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_80(int iParam0) //Position: 0x3480 / 13440
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
	Function_81(&Var0 + 80[Var0.f_763], &(Global_16876[iParam06]), iParam0);
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

void Function_81(var uParam0, var uParam1, int iParam2) //Position: 0x351E / 13598
{
	uParam0->f_4 = iParam2;
	*uParam0 = uParam1->f_12;
	uParam0->f_8 = 1;
	return;
}

void Function_82(int iParam0, int iParam1) //Position: 0x3536 / 13622
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
			Function_83(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_83(int iParam0) //Position: 0x35B8 / 13752
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

void Function_84(int iParam0) //Position: 0x3606 / 13830
{
	Global_12976.f_76 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 76, 0, 0, (iParam0 + Function_79(900)), 0);
	return;
}

void Function_85(bool bParam0) //Position: 0x3628 / 13864
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, (bParam0 + Function_79(200)), 0);
	return;
}

void Function_86(vector3 vParam0, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7, bool bParam8) //Position: 0x3649 / 13897
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
	else if (!Function_87(StackVal, StackVal, vParam0))
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
			Function_85(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_84(0);
		}
		if (bParam8)
		{
			Function_82(0, GET_THIS_SCRIPT_ID());
			Global_3373 = GET_THIS_SCRIPT_ID();
			Function_80(iParam4);
			Global_3401 = 1;
		}
		Function_78(iParam4);
		if (Function_77(StackVal, 32768))
		{
			Function_74(1);
		}
		Global_16876[iParam46].f_12++;
		Function_60(408, 1, 0, 0);
	}
}

bool Function_87(vector3 vParam0) //Position: 0x3750 / 14160
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_88() //Position: 0x3768 / 14184
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_89(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, float fParam6) //Position: 0x3771 / 14193
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3[6];
	bool bVar10;
	int iVar11;
	char* cVar12[32];
	float fVar20;
	
	bVar2 = true;
	bVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(vParam1, 1.0f, "p_gen_footlockerfull01x", 1);
	if (IS_PHYSINST_VALID(bVar0))
	{
		bVar1 = GET_OBJECT_FROM_PHYSINST(bVar0);
		if (IS_OBJECT_VALID(bVar1))
		{
			ROTATE_OBJECT_UPRIGHT_TO_GROUND(bVar1, 1, 5.0f);
		}
	}
	DECOR_SET_INT(GET_OBJECT_FROM_GRINGO(bParam0), "GringoDollarAmt", false);
	Function_93(GET_OBJECT_FROM_GRINGO(bParam0));
	if (bParam4 == 4294967295)
	{
		bVar10 = false;
		Function_92(Global_34573, &uVar3, &bVar10);
		if (bVar10 >= 0)
		{
			PRINTINT(bVar10);
			iVar11 = RAND_INT_RANGE(0, (bVar10 - 1));
			PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(uVar3[iVar11]));
			bParam4 = Function_91(Global_34573, uVar3[iVar11]);
			if (bParam4 == 34)
			{
				bParam4 = 16;
			}
		}
		else
		{
			bVar2 = false;
		}
	}
	else
	{
		bParam4 = Function_91(Global_34573, bParam4);
	}
	if (bParam4 == 4294967295)
	{
		bVar2 = false;
	}
	if (bVar2)
	{
		strcpy(&cVar12, "Ammo_", 32);
		straddi(&cVar12, GET_AMMO_ENUM(bParam4), 32);
		PRINTSTRING(&cVar12);
		fVar20 = GET_WEAPON_MAX_AMMO(bParam4);
		if (fVar20 >= 2.0f)
		{
			fParam6 = 2.0f;
		}
		DECOR_SET_INT(GET_OBJECT_FROM_GRINGO(bParam0), &cVar12, FLOOR(((2.0f * fParam6) * GET_WEAPON_MAX_AMMO(bParam4))));
	}
	if (bParam5 != 4294967295 || (bParam5 != 11 && GET_ITEM_COUNT(SS_GET_STRING(1, 11), Global_34573) < 0))
	{
		bParam5 = Function_90();
	}
	DECOR_SET_INT(GET_OBJECT_FROM_GRINGO(bParam0), "GiveItem", bParam5);
}

int Function_90() //Position: 0x38D1 / 14545
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

int Function_91(bool bParam0, int iParam1) //Position: 0x392D / 14637
{
	int iVar0;
	
	iVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(bParam0, iParam1);
	return iVar0;
}

void Function_92(bool bParam0, var uParam1, int iParam2) //Position: 0x393E / 14654
{
	*iParam2 = 0;
	if (Function_91(bParam0, 39) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(bParam0, 6, 1) > _GET_MAX_AMMO_AMOUNT(bParam0, 6))
		{
			(*uParam1)[*iParam2] = 39;
			*iParam2++;
		}
	}
	if (Function_91(bParam0, 41) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(bParam0, 8, 1) > _GET_MAX_AMMO_AMOUNT(bParam0, 8))
		{
			(*uParam1)[*iParam2] = 41;
			*iParam2++;
		}
	}
	if (Function_91(bParam0, 40) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(bParam0, 7, 1) > _GET_MAX_AMMO_AMOUNT(bParam0, 7))
		{
			(*uParam1)[*iParam2] = 40;
			*iParam2++;
		}
	}
	if (Function_91(bParam0, 42) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(bParam0, 9, 1) > _GET_MAX_AMMO_AMOUNT(bParam0, 9))
		{
			(*uParam1)[*iParam2] = 42;
			*iParam2++;
		}
	}
	if (Function_91(bParam0, 43) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(bParam0, 10, 1) > _GET_MAX_AMMO_AMOUNT(bParam0, 10))
		{
			(*uParam1)[*iParam2] = 43;
			*iParam2++;
		}
	}
	if (Function_91(bParam0, 44) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(bParam0, 11, 1) > _GET_MAX_AMMO_AMOUNT(bParam0, 11))
		{
			(*uParam1)[*iParam2] = 44;
			*iParam2++;
		}
	}
	return;
}

void Function_93(bool bParam0) //Position: 0x3A5E / 14942
{
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(bParam0, "nocrime"))
	{
		DECOR_SET_BOOL(bParam0, "nocrime", 1);
	}
	return;
}

bool Function_94(var uParam0, bool bParam1, bool bParam2) //Position: 0x3A92 / 14994
{
	int iVar0;
	
	if (bParam2)
	{
		Function_96(bParam1, 300.0f, -1.0f, -1.0f);
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (Function_36((*uParam0)[iVar0], 0))
			{
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR((*uParam0)[iVar0], 2.0f);
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Function_36((*uParam0)[iVar0], 0))
		{
			Function_95(bParam1, (*uParam0)[iVar0]);
			if (bParam2 && Function_15(&uLocal_217, 6.0f))
			{
				Function_22(&uLocal_217, 0.0f);
				AI_SHOOT_TARGET_SET_BONE(bParam1, (*uParam0)[iVar0], "head");
			}
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void Function_95(bool bParam0, bool bParam1) //Position: 0x3B23 / 15139
{
	var uVar0;
	
	GET_POSITION(bParam0, &uVar0);
	TASK_SHOOT_FROM_POSITION(bParam0, bParam1, &uVar0);
	return;
}

void Function_96(bool bParam0, float fParam1, float fParam2, float fParam3) //Position: 0x3B39 / 15161
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (fParam2 == -1.0f || fParam3 == -1.0f)
			{
				COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, fParam2, fParam3);
			}
			COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, fParam1);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0.0f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, 0.0f);
		}
	}
}

float Function_97(int iParam0) //Position: 0x3B80 / 15232
{
	struct<5> Var0;
	
	if (GET_ACTOR_CURRENT_WEAPON_AI_PARAMETERS(iParam0, &Var0))
	{
		return StackVal;
	}
	return 0.0f;
}

int Function_98(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x3B99 / 15257
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
		Function_100("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
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
			Function_99(bVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_99(bVar0);
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
			Function_99(bVar0);
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

void Function_99(bool bParam0) //Position: 0x3DF6 / 15862
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

void Function_100(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x3E3C / 15932
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_101(Global_6269) };
		}
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, &Var0, iParam5);
	}
	else
	{
		iVar4 = "";
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, iVar4, iParam5);
	}
}

struct<16> Function_101(int iParam0) //Position: 0x3EB3 / 16051
{
	char* cVar0[16];
	
	if (!Function_102())
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

bool Function_102() //Position: 0x3EF2 / 16114
{
	if (Function_18(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

int Function_103(var uParam0, int iParam1) //Position: 0x3F0D / 16141
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
	Function_107(DECOR_GET_INT(*uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
		}
		else
		{
			Function_104(iVar0, uParam0, &uVar1, iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(*uParam0);
	return 0;
}

void Function_104(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x406F / 16495
{
	struct<8> Var0;
	
	Global_26155[iParam05].f_8 = *uParam1;
	Global_26155[iParam05].f_16 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_105("stayout") };
	Global_26155[iParam05].f_12 = CREATE_VOLUME_IN_LAYOUT(Global_26150, &Var0, 3, *iParam2, 0.0f, 0.0f, 0.0f, 12.0f, 5.0f, 12.0f);
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	if (bParam3)
	{
		Global_26155[iParam05].f_4 = ADD_BLIP_FOR_COORD(iParam2, 403, 0f, 2, 0);
		SET_BLIP_BLINK(StackVal, 1, 1, 20.0f);
	}
}

struct<32> Function_105(bool bParam0) //Position: 0x410A / 16650
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_106("0", &cVar8, ""), 4);
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

struct<32> Function_106(char* cParam0, char* cParam1, char* cParam2) //Position: 0x4174 / 16756
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_107(bool bParam0) //Position: 0x4193 / 16787
{
	bool bVar0;
	vector3 vVar1;
	
	bVar0 = false;
	while (bVar0 <= 25)
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
						Function_109(bVar0);
					}
					else if (Global_3386)
					{
						if (Function_108(StackVal, StackVal, Global_34573, vVar1) < 25.0f)
						{
							Function_109(bVar0);
						}
					}
					else if (Function_108(StackVal, StackVal, Global_34573, vVar1) < 55.0f)
					{
						Function_109(bVar0);
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
			Function_109(bVar0);
		}
		bVar0++;
	}
	return 0;
}

float Function_108(bool bParam0, vector3 vParam1) //Position: 0x42F4 / 17140
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_58(bParam0);
		vVar0 = { StackVal, StackVal, Function_58(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

void Function_109(bool bParam0) //Position: 0x436E / 17262
{
	if (IS_VOLUME_VALID(Global_26155[bParam05].f_12))
	{
		REMOVE_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[bParam05].f_12, 0);
		REMOVE_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[bParam05].f_12);
	}
	if (IS_BLIP_VALID(StackVal))
	{
		REMOVE_BLIP(StackVal);
	}
	RELEASE_VOLUME(StackVal);
	RELEASE_VOLUME(Global_26155[bParam05].f_12);
	return;
}

void Function_110(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7) //Position: 0x43CF / 17359
{
	var uVar0;
	
	if (Function_116(bParam0) && !Function_115(bParam0, 1))
	{
		LOG_ERROR("Calling MAKE_ACTOR_ZOMBIE() on a CUSTOM ZOMBIE! Don't do that!");
		return;
	}
	TURN_ACTOR_INTO_ZOMBIE(bParam0, iParam1);
	if (iParam2 == 4294967294 && iParam3 == 4294967294)
	{
		if (iParam2 == 4294967295)
		{
			iParam2 = RAND_INT_RANGE(0, 4);
		}
		if (iParam3 == 4294967295)
		{
			iParam3 = RAND_INT_RANGE(0, 4);
		}
		if (!ADD_ZOMBIE_TO_ACTOR(bParam0, iParam2, iParam3))
		{
			LOG_ERROR("MAKE_ACTOR_ZOMBIE: Failed to apply bloody head/body textures!");
		}
	}
	if (bParam6)
	{
		DEEQUIP_ACCESSORY(bParam0, 0);
	}
	if (bParam7)
	{
		DELETE_ALL_WEAPONS_FROM_ACTOR(bParam0);
	}
	Function_113(bParam0);
	DECOR_SET_BOOL(bParam0, "Zombie", 1);
	Function_93(bParam0);
	SET_ACTOR_ALLOW_DISARM(bParam0, 0);
	SET_CRIPPLE_ENABLE(bParam0, 0);
	SET_CRIPPLE_FLAG(bParam0, 0);
	SET_ALLOW_COLD_WEATHER_BREATH(bParam0, 0);
	SET_ACTOR_CAN_PLAY_GESTURES(bParam0, false);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
	SET_ACTOR_ALLOW_NM_BUMP_REACTIONS(bParam0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTION_FLEE(bParam0, 0);
	SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(bParam0, 1);
	COMBAT_CLASS_AI_SET_FIGHT_DESIRED_DISTANCE(bParam0, 0.0f, 1.115f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 33, 15.0f);
	SET_ACTOR_VISION_FIELD_OF_VIEW(bParam0, 155.0f);
	AI_SET_NAV_HAZARD_AVOIDANCE_ENABLED(bParam0, 0, 0);
	uVar0 = AI_PREDICATE_FIND_NAMED("NonToxic", 0);
	if (AI_PREDICATE_IS_VALID(uVar0))
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(bParam0, uVar0, 1);
	}
	if (iParam1 <= 1204 && iParam1 >= 1213)
	{
		DECOR_SET_BOOL(bParam0, "FastZombie", 1);
	}
	else if (iParam1 <= 1214 && iParam1 >= 1221)
	{
		DECOR_SET_BOOL(bParam0, "BruiserZombie", 1);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 12.5f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 29, 12.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 30, 0.5f);
	}
	SET_ACTOR_HARD_LOCK_AQUIRE_BONE_CASUAL(bParam0, "head");
	if (iParam1 <= 1214 && iParam1 >= 1221)
	{
		SET_ACTOR_BASE_SCORE(bParam0, 220.0f, 0);
		SET_ACTOR_BASE_SCORE(bParam0, 2030.0f, 1);
	}
	else
	{
		SET_ACTOR_BASE_SCORE(bParam0, 220.0f, 0);
		SET_ACTOR_BASE_SCORE(bParam0, 2020.0f, 1);
	}
	Function_111(bParam0, iParam4, iParam5);
}

void Function_111(bool bParam0, bool bParam1, bool bParam2) //Position: 0x4632 / 17970
{
	switch (bParam1)
	{
		case 0x00000000:
			if (!IS_ACTION_NODE_PLAYING(bParam0, "zombie/PlayDead"))
			{
				SET_ACTION_NODE_FOR_ACTOR(bParam0, "zombie/PlayDead");
			}
			break;
		
		case 0x00000001:
		case 0x00000002:
			if (!IS_ACTION_NODE_PLAYING(bParam0, "zombie/GroundSpawn"))
			{
				SET_ACTION_NODE_FOR_ACTOR(bParam0, "zombie/GroundSpawn");
			}
			break;
	}
	if (bParam1 != 4294967295)
	{
		if (bParam2)
		{
			Function_112(bParam0, bParam1, 0);
		}
		else
		{
			AI_DONT_HARM_ACTOR(bParam0);
			SET_ALLOW_EXECUTE(bParam0, 0);
		}
	}
	return;
}

void Function_112(bool bParam0, int iParam1, bool bParam2) //Position: 0x46E4 / 18148
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	bool bVar10;
	
	SET_ALLOW_EXECUTE(bParam0, 1);
	AI_CLEAR_DONT_HARM_ACTOR(bParam0);
	switch (iParam1)
	{
		case 0x00000001:
			GET_POSITION(bParam0, &vVar0);
			GET_ACTOR_AXIS(bParam0, &vVar3, 2);
			vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar3, vVar0, StackVal) * Vector(0.75f, 0.75f, 0.75f), StackVal, StackVal) };
			FIND_GROUND_INTERSECTION(&vVar0, 10.0f, &vVar3, &vVar6);
			vVar3.f_4 = (vVar3.y + 0.05f);
			bVar9 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bParam0, Function_162(), "script_zombie_emerge", vVar3);
			if (IS_OBJECT_VALID(bVar9))
			{
				Function_88();
				bVar10 = CREATE_POINT_IN_LAYOUT(bParam0, Function_162(), vVar3, Function_88());
				SNAP_OBJECT_TO_GROUND(bVar10, 2.5f, true, 1092616192);
				GET_OBJECT_ORIENTATION(bVar10, &vVar6);
				DESTROY_OBJECT(bVar10);
				UNK_0x6745191B(bVar9, vVar6);
			}
			break;
		
		case 0x00000002:
			GET_POSITION(bParam0, &vVar0);
			GET_ACTOR_AXIS(bParam0, &vVar3, 2);
			vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar3, vVar0, StackVal) * Vector(0.75f, 0.75f, 0.75f), StackVal, StackVal) };
			bVar9 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bParam0, Function_162(), "script_zombie_emerge", vVar0);
			if (IS_OBJECT_VALID(bVar9))
			{
				Function_88();
				bVar10 = CREATE_POINT_IN_LAYOUT(bParam0, Function_162(), vVar0, Function_88());
				SNAP_OBJECT_TO_GROUND(bVar10, 2.5f, true, 1092616192);
				GET_OBJECT_ORIENTATION(bVar10, &vVar6);
				DESTROY_OBJECT(bVar10);
				UNK_0x6745191B(bVar9, vVar6);
			}
			break;
	}
	if (!bParam2)
	{
		if (!DECOR_CHECK_EXIST(bParam0, "WakeUp"))
		{
			DECOR_SET_BOOL(bParam0, "WakeUp", 1);
		}
	}
	else if (!DECOR_CHECK_EXIST(bParam0, "WakeUpFast"))
	{
		DECOR_SET_BOOL(bParam0, "WakeUpFast", 1);
	}
	return;
}

void Function_113(bool bParam0) //Position: 0x4894 / 18580
{
	COMBAT_CLASS_AI_CLEAR_ALL_ATTRIBS(bParam0);
	COMBAT_CLASS_AI_SET_FIGHT_ATTACK_DISTANCE(bParam0, 0.4f, 1.1f);
	COMBAT_CLASS_AI_SET_FIGHT_DESIRED_DISTANCE(bParam0, 0.6f, 1.1f);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS(bParam0, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 29, 3.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 30, 1.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 50.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 1.0f, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 4, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 1, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 2, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 3, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 9, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 5, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 6, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 7, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 12, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 17, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 18, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 2, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 4, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 5, 80.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 3, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 0.25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 7, 11.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (2.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 12, 6.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 14, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 15, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 20, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 21, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 23, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 24, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 25, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 26, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 32, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 33, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 34, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 35, 12.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 36, 0.75f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 37, 12.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 41, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 42, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 44, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 48, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 49, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 46, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 47, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 45, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0.3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0.05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 58, -0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 60, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 61, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 63, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 50, -0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 51, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 52, 0.25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 8, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 62, -1.0f);
	TOUGH_ARMOUR_SET_TUNING_REGENERATION_RATE(bParam0, 10.0f);
	TOUGH_ARMOUR_SET_TUNING_PAD_ARMOUR(bParam0, 0.0f);
	Function_114(bParam0, -100.0f);
	AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(bParam0, -1.0f);
	AI_PERCEPTION_SET_VISUAL_ID_TIME(bParam0, 0.0f);
	return;
}

void Function_114(var uParam0, int iParam1) //Position: 0x4BF8 / 19448
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		TOUGH_ARMOUR_SET_TUNING_HIT_DEDUCTION(uParam0, iVar0, iParam1);
		iVar0++;
	}
	return;
}

bool Function_115(bool bParam0, int iParam1) //Position: 0x4C1A / 19482
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(bParam0);
	if ((((((iVar0 != 1252 && iParam1) || (iVar0 != 1253 && iParam1)) || iVar0 != 541) || iVar0 != 542) || iVar0 != 543) || iVar0 != 544)
	{
		return 1;
	}
	return 0;
}

int Function_116(bool bParam0) //Position: 0x4C5C / 19548
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(bParam0);
	if (iVar0 <= 1204 && iVar0 >= 1227)
	{
		return 1;
	}
	return 0;
}

bool Function_117(bool bParam0) //Position: 0x4C7C / 19580
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(bParam0);
	if (iVar0 <= 1204 && iVar0 >= 1254)
	{
		return 1;
	}
	if (Function_115(bParam0, 1))
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(bParam0, "Zombie"))
	{
		return DECOR_GET_BOOL(bParam0, "Zombie");
	}
	return 0;
}

var Function_118(var uParam0, bool bParam1, var uParam2, vector3 vParam3, vector3 vParam6, int iParam9) //Position: 0x4CC7 / 19655
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	int iVar7;
	bool bVar8;
	
	bVar0 = CREATE_PROPSET_IN_LAYOUT(uParam0, bParam1, uParam2, vParam3, vParam6);
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

bool Function_119() //Position: 0x4E10 / 19984
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_120(var uParam0, int iParam1) //Position: 0x4E19 / 19993
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_121(var uParam0, var uParam1, var uParam2, float fParam3, vector3 vParam4) //Position: 0x4E28 / 20008
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
		if (Function_122(StackVal, StackVal, Global_30616, "player_herb", &uVar0, 20.0f, 5, vParam4) >= 0)
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

int Function_122(bool bParam0, bool bParam1, var uParam2, float fParam3, int iParam4, vector3 vParam5) //Position: 0x4EC9 / 20169
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

void Function_123(bool bParam0) //Position: 0x4F5D / 20317
{
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam0, 0);
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bParam0, 0);
	MEMORY_ATTACK_ON_SIGHT(bParam0, 0);
	SET_ACTOR_CAN_PLAY_GESTURES(bParam0, false);
	AI_SET_ALLOW_ATTACK_HOGTIED_ACTORS(bParam0, 1);
	return;
}

bool Function_124(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x4F87 / 20359
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
	Function_107(4294967295);
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
			else if (Function_125(uParam0, &uVar0) > fVar5)
			{
				return 0;
			}
		}
		iVar3++;
	}
	return 1;
}

float Function_125(var uParam0, bool bParam1) //Position: 0x5057 / 20567
{
	vector3 vVar0;
	int iVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*bParam1, *uParam0, StackVal) };
	iVar3 = VMAG(vVar0);
	return iVar3;
}

bool Function_126(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) //Position: 0x5075 / 20597
{
	return CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), vParam0, iParam3, iParam4, iParam5, iParam6, iParam7);
}

bool Function_127(int iParam0, var uParam1, int iParam2) //Position: 0x5091 / 20625
{
	int iVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 38)
	{
		iLocal_175[iVar0] = 0;
		iVar0++;
	}
	if (!Function_128(StackVal, StackVal, Global_34574, iParam2, uParam1))
	{
		return 0;
	}
	iVar2 = 4294967295;
	fVar3 = 1500.0f;
	iVar0 = 0;
	while (iVar0 <= 38)
	{
		fVar1 = Function_108(StackVal, StackVal, Global_34573, vLocal_21[iVar03]);
		if ((fVar1 > fVar3 && fVar1 < 80.0f) && iLocal_175[iVar0])
		{
			fVar3 = fVar1;
			iVar2 = iVar0;
		}
		iVar0++;
	}
	if (iVar2 == 4294967295)
	{
		return 0;
	}
	*iParam0 = iVar2;
	iParam0->f_520 = uLocal_136[iVar2];
	switch (iVar2)
	{
		case 0x00000000:
			iParam0->f_4 = 1;
			iParam0->f_8 = 1;
			iParam0->f_12 = 4;
			Function_120(iParam0 + 16, 1);
			Function_120(iParam0 + 16, 2);
			Function_120(iParam0 + 16, 4);
			Function_120(iParam0 + 16, 8);
			Function_120(iParam0 + 24, 1);
			*(iParam0 + 32) = { -1043.64f, 184.07f, 1373.09f };
			*(iParam0 + 104) = { -1043.76f, 183.985f, 1371.5f };
			iParam0->f_240 = -179.9999f;
			*(iParam0 + 116) = { -1042.58f, 183.985f, 1371.5f };
			iParam0->f_244 = 173.9998f;
			*(iParam0 + 128) = { -1041.04f, 184.059f, 1372.95f };
			iParam0->f_248 = 99.58986f;
			*(iParam0 + 140) = { -1043.66f, 184.053f, 1377.79f };
			iParam0->f_252 = 0.565044f;
			*(iParam0 + 200) = { -1046.044f, 184.066f, 1374.279f };
			iParam0->f_280 = 286.941f;
			*(iParam0 + 92) = { -1045.249f, 184.066f, 1373.642f };
			iParam0->f_236 = -88.668f;
			*(iParam0 + 284) = { -1044.695f, 184.065f, 1375.734f };
			iParam0->f_416 = -18.448f;
			*(iParam0 + 296) = { -1053.774f, 185.389f, 1370.258f };
			iParam0->f_420 = 354.495f;
			*(iParam0 + 308) = { -1054.425f, 186.099f, 1366.013f };
			iParam0->f_424 = 265.925f;
			*(iParam0 + 320) = { -1056.458f, 187.239f, 1358.889f };
			iParam0->f_428 = 239.03f;
			*(iParam0 + 332) = { -1057.215f, 190.47f, 1344.799f };
			iParam0->f_432 = 223.394f;
			*(iParam0 + 344) = { -1047.867f, 188.264f, 1348.867f };
			iParam0->f_436 = 193.01f;
			*(iParam0 + 212) = { -1041.799f, 183.893f, 1366.241f };
			iParam0->f_272 = 325.669f;
			*(iParam0 + 224) = { -1043.816f, 183.985f, 1369.669f };
			iParam0->f_276 = 280.2f;
			*(iParam0 + 356) = { -1030.516f, 181.428f, 1404.631f };
			iParam0->f_440 = 94.717f;
			*(iParam0 + 368) = { -1036.633f, 184.142f, 1368.585f };
			iParam0->f_444 = 85.044f;
			*(iParam0 + 380) = { -1045.459f, 184.036f, 1363.097f };
			iParam0->f_448 = -115.12f;
			*(iParam0 + 392) = { -1046.278f, 184.161f, 1364.55f };
			iParam0->f_452 = -112.101f;
			*(iParam0 + 404) = { -1047.026f, 184.393f, 1366.827f };
			iParam0->f_456 = -87.709f;
			iParam0->f_508 = 397;
			iParam0->f_512 = 405;
			iParam0->f_516 = 79;
			iParam0->f_464 = "look_distance_binocs";
			iParam0->f_468 = "lean_rail_forward";
			iParam0->f_472 = "stand_lookdistance_w_any";
			iParam0->f_476 = "stand_lookdistance_w_any";
			iParam0->f_480 = "rand_idle_stand_nospawn";
			return 1;
			break;
		
		case 0x00000001:
			*(iParam0 + 92) = { -521.368f, 146.586f, 1891.315f };
			iParam0->f_236 = -179.119f;
			*(iParam0 + 284) = { -523.722f, 146.684f, 1891.792f };
			iParam0->f_416 = 122.121f;
			*(iParam0 + 296) = { -449.691f, 139.105f, 1918.196f };
			iParam0->f_420 = -68.076f;
			*(iParam0 + 308) = { -458.146f, 142.659f, 1898.084f };
			iParam0->f_424 = -89.19f;
			*(iParam0 + 320) = { -494.67f, 144.473f, 1926.247f };
			iParam0->f_428 = -6.687f;
			*(iParam0 + 332) = { -519.423f, 146.583f, 1893.947f };
			iParam0->f_432 = -126.933f;
			*(iParam0 + 344) = { -531.255f, 146.607f, 1885.477f };
			iParam0->f_436 = -143.417f;
			*(iParam0 + 356) = { -451.303f, 139.082f, 1913.837f };
			iParam0->f_440 = 164.89f;
			*(iParam0 + 368) = { -453.817f, 139.488f, 1915.016f };
			iParam0->f_444 = 164.346f;
			*(iParam0 + 380) = { -474.27f, 142.493f, 1909.429f };
			iParam0->f_448 = -113.01f;
			*(iParam0 + 392) = { -475.55f, 142.529f, 1912.434f };
			iParam0->f_452 = -76.121f;
			*(iParam0 + 404) = { -473.102f, 142.376f, 1914.772f };
			iParam0->f_456 = -29.518f;
			iParam0->f_508 = 467;
			iParam0->f_512 = 476;
			iParam0->f_516 = 77;
			iParam0->f_464 = "look_distance_binocs";
			iParam0->f_468 = "stand_lookdistance_w_any";
			iParam0->f_472 = "rand_idle_stand_nospawn";
			iParam0->f_476 = "look_distance_binocs";
			iParam0->f_480 = "smoking_stand";
			return 1;
			break;
		
		case 0x00000002:
			*(iParam0 + 92) = { 151.25f, 128.174f, 1380.784f };
			iParam0->f_236 = -122.151f;
			*(iParam0 + 284) = { 150.778f, 128.296f, 1382.712f };
			iParam0->f_416 = 211.988f;
			*(iParam0 + 296) = { 147.231f, 129.748f, 1404.047f };
			iParam0->f_420 = -209.521f;
			*(iParam0 + 308) = { 172.179f, 129.506f, 1372.843f };
			iParam0->f_424 = -357.07f;
			*(iParam0 + 320) = { 146.34f, 128.799f, 1392.335f };
			iParam0->f_428 = 96.535f;
			*(iParam0 + 332) = { 152.955f, 128.059f, 1379.6f };
			iParam0->f_432 = 31.365f;
			*(iParam0 + 344) = { 157.175f, 126.274f, 1369.714f };
			iParam0->f_436 = 59.118f;
			*(iParam0 + 356) = { 144.219f, 125.793f, 1365.431f };
			iParam0->f_440 = -135.337f;
			*(iParam0 + 368) = { 141.842f, 125.987f, 1368.622f };
			iParam0->f_444 = -79.663f;
			*(iParam0 + 380) = { 139.218f, 128.935f, 1399.063f };
			iParam0->f_448 = -100.419f;
			*(iParam0 + 392) = { 138.62f, 129.247f, 1403.252f };
			iParam0->f_452 = -77.321f;
			*(iParam0 + 404) = { 141.014f, 129.526f, 1407.641f };
			iParam0->f_456 = -53.768f;
			iParam0->f_508 = 467;
			iParam0->f_512 = 476;
			iParam0->f_516 = 77;
			iParam0->f_464 = "look_distance_binocs";
			iParam0->f_468 = "stand_lookdistance_w_any";
			iParam0->f_472 = "rand_idle_sit_ground";
			iParam0->f_476 = "rand_idle_stand_nospawn";
			iParam0->f_480 = "rand_idle_sit_ground";
			return 1;
			break;
		
		case 0x00000003:
			*(iParam0 + 92) = { -730.995f, 226.993f, 1106.784f };
			iParam0->f_236 = 164.146f;
			*(iParam0 + 284) = { -734.587f, 226.92f, 1105.764f };
			iParam0->f_416 = 164.146f;
			*(iParam0 + 296) = { -749.864f, 196.97f, 1184.389f };
			iParam0->f_420 = 125.436f;
			*(iParam0 + 308) = { -774.53f, 204.852f, 1188.59f };
			iParam0->f_424 = 287.751f;
			*(iParam0 + 320) = { -776.806f, 218.112f, 1158.521f };
			iParam0->f_428 = 170.346f;
			*(iParam0 + 332) = { -737.576f, 228.798f, 1153.567f };
			iParam0->f_432 = 135.004f;
			*(iParam0 + 344) = { -733.547f, 226.939f, 1114.264f };
			iParam0->f_436 = 164.146f;
			*(iParam0 + 356) = { -770.0f, 186.54f, 1217.98f };
			iParam0->f_440 = 254.894f;
			*(iParam0 + 368) = { -769.202f, 187.017f, 1215.354f };
			iParam0->f_444 = 213.121f;
			*(iParam0 + 380) = { -724.041f, 227.581f, 1138.394f };
			iParam0->f_448 = -181.478f;
			*(iParam0 + 392) = { -721.611f, 227.2f, 1138.716f };
			iParam0->f_452 = -197.486f;
			*(iParam0 + 404) = { -719.776f, 226.926f, 1140.08f };
			iParam0->f_456 = -210.832f;
			iParam0->f_508 = 467;
			iParam0->f_512 = 476;
			iParam0->f_516 = 79;
			iParam0->f_464 = "stand_lookdistance_w_any";
			iParam0->f_468 = "look_distance_binocs";
			iParam0->f_472 = "stand_lookdistance_w_any";
			iParam0->f_476 = "look_distance_binocs";
			iParam0->f_480 = "rand_idle_stand_nospawn";
			return 1;
			break;
		
		case 0x00000004:
			iParam0->f_4 = 1;
			iParam0->f_8 = 1;
			iParam0->f_12 = 6;
			Function_120(iParam0 + 16, 1);
			Function_120(iParam0 + 16, 2);
			Function_120(iParam0 + 16, 4);
			Function_120(iParam0 + 16, 8);
			Function_120(iParam0 + 16, 16);
			Function_120(iParam0 + 16, 32);
			Function_120(iParam0 + 24, 1);
			*(iParam0 + 32) = { -844.56f, 189.67f, 1587.96f };
			*(iParam0 + 104) = { -844.573f, 189.676f, 1588.92f };
			iParam0->f_240 = 2.999898f;
			*(iParam0 + 116) = { -842.248f, 189.678f, 1588.95f };
			iParam0->f_244 = -0.00023f;
			*(iParam0 + 128) = { -840.159f, 189.685f, 1586.24f };
			iParam0->f_248 = 84.58977f;
			*(iParam0 + 140) = { -840.175f, 189.711f, 1581.26f };
			iParam0->f_252 = 90.56493f;
			*(iParam0 + 152) = { -849.108f, 189.698f, 1586.2f };
			iParam0->f_256 = -92.41016f;
			*(iParam0 + 164) = { -849.05f, 189.763f, 1580.9f };
			iParam0->f_260 = -89.43497f;
			*(iParam0 + 200) = { -842.3f, 189.73f, 1584.924f };
			iParam0->f_280 = 90.843f;
			*(iParam0 + 92) = { -844.7f, 189.73f, 1582.449f };
			iParam0->f_236 = 146.157f;
			*(iParam0 + 284) = { -846.056f, 189.73f, 1583.987f };
			iParam0->f_416 = 205.311f;
			*(iParam0 + 296) = { -843.001f, 189.753f, 1586.391f };
			iParam0->f_420 = 135.908f;
			*(iParam0 + 308) = { -842.564f, 189.753f, 1584.934f };
			iParam0->f_424 = 138.891f;
			*(iParam0 + 320) = { -842.706f, 189.753f, 1581.665f };
			iParam0->f_428 = 157.555f;
			*(iParam0 + 332) = { -846.521f, 189.753f, 1581.64f };
			iParam0->f_432 = 201.029f;
			*(iParam0 + 344) = { -847.189f, 189.758f, 1583.797f };
			iParam0->f_436 = 214.574f;
			*(iParam0 + 212) = { -850.748f, 189.708f, 1596.198f };
			iParam0->f_272 = 26.239f;
			*(iParam0 + 224) = { -844.908f, 189.696f, 1593.825f };
			iParam0->f_276 = 64.685f;
			*(iParam0 + 356) = { -848.939f, 189.767f, 1598.81f };
			iParam0->f_440 = 10.155f;
			*(iParam0 + 368) = { -847.679f, 189.716f, 1596.793f };
			iParam0->f_444 = 29.877f;
			*(iParam0 + 380) = { -839.291f, 189.667f, 1591.667f };
			iParam0->f_448 = 35.551f;
			*(iParam0 + 392) = { -838.08f, 189.66f, 1588.806f };
			iParam0->f_452 = 71.249f;
			*(iParam0 + 404) = { -837.333f, 189.679f, 1586.46f };
			iParam0->f_456 = 94.667f;
			iParam0->f_508 = 397;
			iParam0->f_512 = 405;
			iParam0->f_516 = 77;
			iParam0->f_464 = "look_distance_binocs";
			iParam0->f_468 = "stand_lookdistance_w_any";
			iParam0->f_472 = "smoking_stand";
			iParam0->f_476 = "look_distance_binocs";
			iParam0->f_480 = "rand_idle_stand_nospawn";
			return 1;
			break;
		
		case 0x00000005:
			iParam0->f_4 = 1;
			iParam0->f_8 = 1;
			iParam0->f_12 = 4;
			Function_120(iParam0 + 16, 1);
			Function_120(iParam0 + 16, 2);
			Function_120(iParam0 + 16, 4);
			Function_120(iParam0 + 16, 8);
			Function_120(iParam0 + 24, 1);
			*(iParam0 + 32) = { -487.17f, 20.49f, 3035.54f };
			*(iParam0 + 104) = { -488.044f, 20.4865f, 3036.66f };
			iParam0->f_240 = 20.99981f;
			*(iParam0 + 116) = { -486.71f, 19.977f, 3036.24f };
			iParam0->f_244 = 17.99883f;
			*(iParam0 + 128) = { -484.803f, 19.8811f, 3035.45f };
			iParam0->f_248 = 24.5889f;
			*(iParam0 + 140) = { -484.106f, 20.4865f, 3033.0f };
			iParam0->f_252 = 105.5649f;
			*(iParam0 + 200) = { -486.369f, 20.486f, 3032.765f };
			iParam0->f_280 = -70.094f;
			*(iParam0 + 92) = { -487.694f, 20.49f, 3033.49f };
			iParam0->f_236 = 0.565f;
			*(iParam0 + 284) = { -489.403f, 20.486f, 3033.522f };
			iParam0->f_416 = 276.065f;
			*(iParam0 + 296) = { -488.69f, 20.486f, 3033.605f };
			iParam0->f_420 = 201.913f;
			*(iParam0 + 308) = { -486.68f, 20.486f, 3032.768f };
			iParam0->f_424 = 162.737f;
			*(iParam0 + 320) = { -486.741f, 20.531f, 3035.47f };
			iParam0->f_428 = 293.469f;
			*(iParam0 + 332) = { -482.366f, 18.738f, 3038.164f };
			iParam0->f_432 = 313.726f;
			*(iParam0 + 344) = { -484.913f, 18.703f, 3039.667f };
			iParam0->f_436 = 316.633f;
			*(iParam0 + 212) = { -487.966f, 20.129f, 3021.113f };
			iParam0->f_272 = 330.593f;
			*(iParam0 + 224) = { -488.722f, 20.086f, 3027.707f };
			iParam0->f_276 = 349.407f;
			*(iParam0 + 356) = { -482.899f, 24.255f, 2998.045f };
			iParam0->f_440 = -53.102f;
			*(iParam0 + 368) = { -481.382f, 23.808f, 2999.786f };
			iParam0->f_444 = 301.392f;
			*(iParam0 + 380) = { -482.899f, 24.255f, 2998.045f };
			iParam0->f_448 = -53.102f;
			*(iParam0 + 392) = { -487.486f, 20.086f, 3028.202f };
			iParam0->f_452 = -167.584f;
			*(iParam0 + 404) = { -489.176f, 20.086f, 3028.246f };
			iParam0->f_456 = -152.339f;
			iParam0->f_508 = 397;
			iParam0->f_512 = 405;
			iParam0->f_516 = 22;
			iParam0->f_464 = "rand_idle_stand_nospawn";
			iParam0->f_468 = "smoking_stand";
			iParam0->f_472 = "mex_gateGuards";
			iParam0->f_476 = "stand_lookdistance_w_any";
			iParam0->f_480 = "stand_lookdistance_w_any";
			return 1;
			break;
		
		case 0x00000006:
			*(iParam0 + 92) = { -2905.192f, 13.051f, 2946.404f };
			iParam0->f_236 = 312.984f;
			*(iParam0 + 284) = { -2904.496f, 13.051f, 2946.997f };
			iParam0->f_416 = 41.838f;
			*(iParam0 + 296) = { -2904.536f, 13.051f, 2953.111f };
			iParam0->f_420 = 307.91f;
			*(iParam0 + 308) = { -2911.311f, 13.051f, 2946.005f };
			iParam0->f_424 = 284.013f;
			*(iParam0 + 320) = { -2898.622f, 13.051f, 2947.662f };
			iParam0->f_428 = 108.233f;
			*(iParam0 + 332) = { -2904.868f, 16.386f, 2949.784f };
			iParam0->f_432 = 328.827f;
			*(iParam0 + 344) = { -2902.199f, 16.386f, 2946.815f };
			iParam0->f_436 = 114.53f;
			*(iParam0 + 356) = { -2923.811f, 13.051f, 2987.644f };
			iParam0->f_440 = 357.746f;
			*(iParam0 + 368) = { -2922.137f, 13.051f, 2988.013f };
			iParam0->f_444 = 364.468f;
			*(iParam0 + 380) = { -2909.802f, 13.051f, 2956.361f };
			iParam0->f_448 = -62.669f;
			*(iParam0 + 392) = { -2908.425f, 13.051f, 2957.893f };
			iParam0->f_452 = -38.495f;
			*(iParam0 + 404) = { -2905.681f, 13.051f, 2959.029f };
			iParam0->f_456 = -8.715f;
			iParam0->f_508 = 477;
			iParam0->f_512 = 485;
			iParam0->f_516 = 22;
			iParam0->f_464 = "rand_idle_stand_nospawn";
			iParam0->f_468 = "smoking_stand";
			iParam0->f_472 = "mex_gateGuards";
			iParam0->f_476 = "stand_lookdistance_w_any";
			iParam0->f_480 = "stand_lookdistance_w_any";
			return 1;
			break;
		
		case 0x00000007:
			*(iParam0 + 92) = { -1233.827f, 22.095f, 3208.098f };
			iParam0->f_236 = 248.968f;
			*(iParam0 + 284) = { -1237.779f, 22.244f, 3208.536f };
			iParam0->f_416 = 207.731f;
			*(iParam0 + 296) = { -1229.405f, 21.94f, 3217.18f };
			iParam0->f_420 = 149.427f;
			*(iParam0 + 308) = { -1228.144f, 22.102f, 3209.255f };
			iParam0->f_424 = 215.192f;
			*(iParam0 + 320) = { -1234.135f, 22.267f, 3211.285f };
			iParam0->f_428 = 149.545f;
			*(iParam0 + 332) = { -1238.036f, 22.308f, 3212.325f };
			iParam0->f_432 = 183.189f;
			*(iParam0 + 344) = { -1243.854f, 22.357f, 3208.741f };
			iParam0->f_436 = 8.496f;
			*(iParam0 + 356) = { -1218.27f, 27.662f, 3193.786f };
			iParam0->f_440 = 249.759f;
			*(iParam0 + 368) = { -1218.865f, 28.116f, 3191.976f };
			iParam0->f_444 = 290.965f;
			*(iParam0 + 380) = { -1253.576f, 25.628f, 3203.651f };
			iParam0->f_448 = 98.62f;
			*(iParam0 + 392) = { -1250.586f, 24.286f, 3205.825f };
			iParam0->f_452 = -233.204f;
			*(iParam0 + 404) = { -1247.739f, 22.92f, 3212.752f };
			iParam0->f_456 = 109.765f;
			iParam0->f_508 = 397;
			iParam0->f_512 = 405;
			iParam0->f_516 = 76;
			iParam0->f_464 = "rand_idle_stand_nospawn";
			iParam0->f_468 = "smoking_stand";
			iParam0->f_472 = "mex_gateGuards";
			iParam0->f_476 = "stand_lookdistance_w_any";
			iParam0->f_480 = "stand_lookdistance_w_any";
			return 1;
			break;
		
		case 0x00000008:
			*(iParam0 + 92) = { -3434.034f, 23.592f, 2497.243f };
			iParam0->f_236 = 167.141f;
			*(iParam0 + 284) = { -3434.139f, 23.592f, 2495.984f };
			iParam0->f_416 = 37.012f;
			*(iParam0 + 296) = { -3434.783f, 23.592f, 2498.666f };
			iParam0->f_420 = 100.492f;
			*(iParam0 + 308) = { -3436.673f, 23.592f, 2504.258f };
			iParam0->f_424 = 81.012f;
			*(iParam0 + 320) = { -3447.594f, 23.11f, 2499.735f };
			iParam0->f_428 = -248.865f;
			*(iParam0 + 332) = { -3439.235f, 23.568f, 2497.12f };
			iParam0->f_432 = -133.729f;
			*(iParam0 + 344) = { -3439.446f, 23.589f, 2500.905f };
			iParam0->f_436 = -51.482f;
			*(iParam0 + 356) = { -3469.012f, 21.584f, 2492.979f };
			iParam0->f_440 = 333.678f;
			*(iParam0 + 368) = { -3464.167f, 21.781f, 2495.026f };
			iParam0->f_444 = 361.907f;
			*(iParam0 + 380) = { -3428.34f, 24.077f, 2495.796f };
			iParam0->f_448 = 97.657f;
			*(iParam0 + 392) = { -3428.279f, 24.059f, 2499.195f };
			iParam0->f_452 = -294.858f;
			*(iParam0 + 404) = { -3428.886f, 23.983f, 2502.291f };
			iParam0->f_456 = 109.765f;
			iParam0->f_508 = 397;
			iParam0->f_512 = 405;
			iParam0->f_516 = 76;
			iParam0->f_464 = "rand_idle_stand";
			iParam0->f_468 = "rand_idle_nearwall";
			iParam0->f_472 = "look_distance_binocs";
			iParam0->f_476 = "sit_ground_smoke";
			iParam0->f_480 = "sit_ground_drink";
			return 1;
			break;
		
		case 0x00000009:
			iParam0->f_4 = 1;
			iParam0->f_8 = 1;
			iParam0->f_12 = 5;
			Function_120(iParam0 + 16, 1);
			Function_120(iParam0 + 16, 2);
			Function_120(iParam0 + 16, 4);
			Function_120(iParam0 + 16, 8);
			Function_120(iParam0 + 16, 16);
			Function_120(iParam0 + 24, 1);
			*(iParam0 + 32) = { -1864.28f, 25.66f, 3302.02f };
			*(iParam0 + 104) = { -1868.72f, 24.9242f, 3306.34f };
			iParam0->f_240 = -89.99975f;
			*(iParam0 + 116) = { -1868.69f, 24.9242f, 3304.97f };
			iParam0->f_244 = -86.99978f;
			*(iParam0 + 128) = { -1868.72f, 24.924f, 3302.9f };
			iParam0->f_248 = -98.40996f;
			*(iParam0 + 140) = { -1865.04f, 25.6375f, 3300.95f };
			iParam0->f_252 = 176.9998f;
			*(iParam0 + 152) = { -1863.99f, 25.6389f, 3300.97f };
			iParam0->f_256 = -179.9999f;
			*(iParam0 + 200) = { -1862.495f, 25.664f, 3304.42f };
			iParam0->f_280 = -89.2f;
			*(iParam0 + 92) = { -1864.42f, 25.674f, 3306.345f };
			iParam0->f_236 = -56.932f;
			*(iParam0 + 284) = { -1864.862f, 25.674f, 3304.466f };
			iParam0->f_416 = 0.0f;
			*(iParam0 + 296) = { -2902.199f, 16.386f, 2946.815f };
			iParam0->f_420 = 114.53f;
			*(iParam0 + 308) = { -1873.356f, 24.896f, 3310.485f };
			iParam0->f_424 = 0.623f;
			*(iParam0 + 320) = { -1872.139f, 24.92f, 3300.956f };
			iParam0->f_428 = 77.585f;
			*(iParam0 + 332) = { -1858.381f, 24.984f, 3304.77f };
			iParam0->f_432 = 26.821f;
			*(iParam0 + 344) = { -1860.552f, 24.924f, 3307.563f };
			iParam0->f_436 = 164.044f;
			*(iParam0 + 212) = { -1871.698f, 24.924f, 3305.057f };
			iParam0->f_272 = 79.722f;
			*(iParam0 + 224) = { -1875.491f, 24.835f, 3300.441f };
			iParam0->f_276 = 91.447f;
			*(iParam0 + 356) = { -1872.12f, 24.921f, 3303.856f };
			iParam0->f_440 = 261.993f;
			*(iParam0 + 368) = { -1872.723f, 24.921f, 3306.976f };
			iParam0->f_444 = 289.613f;
			*(iParam0 + 380) = { -1850.137f, 24.398f, 3309.046f };
			iParam0->f_448 = 109.765f;
			*(iParam0 + 392) = { -1851.146f, 24.532f, 3312.827f };
			iParam0->f_452 = 67.212f;
			*(iParam0 + 404) = { -1851.819f, 24.731f, 3315.765f };
			iParam0->f_456 = -306.112f;
			iParam0->f_508 = 486;
			iParam0->f_512 = 494;
			iParam0->f_516 = 78;
			iParam0->f_464 = "smoking_stand";
			iParam0->f_468 = "stand_lookdistance_w_any";
			iParam0->f_472 = "sit_ground_campfire_tend";
			iParam0->f_476 = "rand_idle_stand";
			iParam0->f_480 = "stand_lookdistance_w_any";
			return 1;
			break;
		
		case 0x0000000A:
			*(iParam0 + 92) = { -2832.227f, 20.209f, 3075.762f };
			iParam0->f_236 = -3.07f;
			*(iParam0 + 284) = { -2830.373f, 20.075f, 3077.06f };
			iParam0->f_416 = -49.594f;
			*(iParam0 + 296) = { -2826.955f, 20.214f, 3077.9f };
			iParam0->f_420 = 319.696f;
			*(iParam0 + 308) = { -2832.744f, 20.214f, 3074.063f };
			iParam0->f_424 = 267.808f;
			*(iParam0 + 320) = { -2832.834f, 20.214f, 3078.073f };
			iParam0->f_428 = 322.501f;
			*(iParam0 + 332) = { -2829.047f, 20.214f, 3074.01f };
			iParam0->f_432 = 106.676f;
			*(iParam0 + 344) = { -2828.971f, 20.214f, 3078.144f };
			iParam0->f_436 = 32.525f;
			*(iParam0 + 356) = { -2811.083f, 20.081f, 3077.154f };
			iParam0->f_440 = 111.684f;
			*(iParam0 + 368) = { -2810.745f, 20.068f, 3080.057f };
			iParam0->f_444 = 87.989f;
			*(iParam0 + 380) = { -2846.263f, 19.079f, 3081.674f };
			iParam0->f_448 = -65.932f;
			*(iParam0 + 392) = { -2844.673f, 19.075f, 3084.467f };
			iParam0->f_452 = -62.778f;
			*(iParam0 + 404) = { -2843.999f, 19.117f, 3088.225f };
			iParam0->f_456 = -110.34f;
			iParam0->f_508 = 486;
			iParam0->f_512 = 494;
			iParam0->f_516 = 79;
			iParam0->f_464 = "look_out_window_L";
			iParam0->f_468 = "stand_guntricks_e_any";
			iParam0->f_472 = "look_distance_binocs";
			iParam0->f_476 = "sit_ground_smoke";
			iParam0->f_480 = "look_distance_binocs";
			return 1;
			break;
		
		case 0x0000000B:
			*(iParam0 + 92) = { -1272.701f, 109.427f, 2763.055f };
			iParam0->f_236 = 29.99f;
			*(iParam0 + 284) = { -1274.066f, 109.427f, 2764.018f };
			iParam0->f_416 = -55.118f;
			*(iParam0 + 296) = { -1278.487f, 109.427f, 2761.758f };
			iParam0->f_420 = 63.9346f;
			*(iParam0 + 308) = { -1262.722f, 109.427f, 2760.963f };
			iParam0->f_424 = -80.99f;
			*(iParam0 + 320) = { -1304.522f, 111.436f, 2730.135f };
			iParam0->f_428 = 122.76f;
			*(iParam0 + 332) = { -1292.069f, 109.67f, 2775.973f };
			iParam0->f_432 = 44.4f;
			*(iParam0 + 344) = { -1265.553f, 109.427f, 2745.011f };
			iParam0->f_436 = -98.76f;
			*(iParam0 + 356) = { -1246.312f, 109.427f, 2747.819f };
			iParam0->f_440 = 182.339f;
			*(iParam0 + 368) = { -1243.976f, 109.427f, 2747.764f };
			iParam0->f_444 = 167.543f;
			*(iParam0 + 380) = { -1300.97f, 108.586f, 2749.941f };
			iParam0->f_448 = -26.038f;
			*(iParam0 + 392) = { -1297.268f, 108.688f, 2751.153f };
			iParam0->f_452 = 5.012f;
			*(iParam0 + 404) = { -1292.78f, 108.424f, 2750.432f };
			iParam0->f_456 = 4.55f;
			iParam0->f_508 = 477;
			iParam0->f_512 = 485;
			iParam0->f_516 = 78;
			iParam0->f_464 = "rand_idle_stand_nospawn";
			iParam0->f_468 = "smoking_stand";
			iParam0->f_472 = "mex_gateGuards";
			iParam0->f_476 = "stand_lookdistance_w_any";
			iParam0->f_480 = "stand_lookdistance_w_any";
			return 1;
			break;
		
		case 0x0000000C:
			iParam0->f_4 = 1;
			iParam0->f_8 = 1;
			iParam0->f_12 = 4;
			Function_120(iParam0 + 16, 1);
			Function_120(iParam0 + 16, 2);
			Function_120(iParam0 + 16, 4);
			Function_120(iParam0 + 16, 8);
			Function_120(iParam0 + 24, 1);
			*(iParam0 + 32) = { -2830.17f, 50.33f, 2415.78f };
			*(iParam0 + 104) = { -2832.45f, 50.0466f, 2420.44f };
			iParam0->f_240 = 12.00024f;
			*(iParam0 + 116) = { -2829.74f, 50.1411f, 2419.64f };
			iParam0->f_244 = 15.00032f;
			*(iParam0 + 128) = { -2828.89f, 50.3678f, 2416.18f };
			iParam0->f_248 = 104.9996f;
			*(iParam0 + 140) = { -2829.24f, 50.3678f, 2415.13f };
			iParam0->f_252 = 104.9996f;
			*(iParam0 + 200) = { -2833.559f, 50.331f, 2416.961f };
			iParam0->f_280 = -89.2f;
			*(iParam0 + 92) = { -2833.559f, 50.331f, 2416.961f };
			iParam0->f_236 = -168.258f;
			*(iParam0 + 284) = { -2821.639f, 49.173f, 2427.109f };
			iParam0->f_416 = -119.337f;
			*(iParam0 + 296) = { -2835.485f, 50.331f, 2416.255f };
			iParam0->f_420 = 231.268f;
			*(iParam0 + 308) = { -2833.374f, 50.331f, 2418.789f };
			iParam0->f_424 = 338.044f;
			*(iParam0 + 320) = { -2833.52f, 50.332f, 2414.594f };
			iParam0->f_428 = 254.386f;
			*(iParam0 + 332) = { -2831.958f, 50.332f, 2414.271f };
			iParam0->f_432 = 200.957f;
			*(iParam0 + 344) = { -2830.995f, 50.331f, 2418.192f };
			iParam0->f_436 = 350.198f;
			*(iParam0 + 212) = { -2825.655f, 50.111f, 2414.417f };
			iParam0->f_272 = 213.931f;
			*(iParam0 + 224) = { -2829.398f, 50.356f, 2412.87f };
			iParam0->f_276 = 224.086f;
			*(iParam0 + 356) = { -2815.583f, 49.017f, 2430.97f };
			iParam0->f_440 = 342.394f;
			*(iParam0 + 368) = { -2812.155f, 48.658f, 2430.972f };
			iParam0->f_444 = 6.16f;
			*(iParam0 + 380) = { -2827.84f, 49.976f, 2410.743f };
			iParam0->f_448 = -80.811f;
			*(iParam0 + 392) = { -2830.188f, 49.89f, 2408.717f };
			iParam0->f_452 = 317.22f;
			*(iParam0 + 404) = { -2832.734f, 49.902f, 2407.827f };
			iParam0->f_456 = 321.988f;
			iParam0->f_508 = 397;
			iParam0->f_512 = 405;
			iParam0->f_516 = 79;
			iParam0->f_464 = "rand_idle_nearwall";
			iParam0->f_468 = "stand_lookdistance_w_any";
			iParam0->f_472 = "look_distance_binocs";
			iParam0->f_476 = "rand_idle_stand";
			iParam0->f_480 = "smoking_stand";
			return 1;
			break;
		
		case 0x0000000D:
			*(iParam0 + 92) = { -2867.112f, 82.255f, 2162.143f };
			iParam0->f_236 = 110.078f;
			*(iParam0 + 284) = { -2866.419f, 82.234f, 2164.325f };
			iParam0->f_416 = 31.229f;
			*(iParam0 + 296) = { -2850.979f, 80.521f, 2154.977f };
			iParam0->f_420 = 164.031f;
			*(iParam0 + 308) = { -2884.095f, 78.701f, 2174.188f };
			iParam0->f_424 = 156.755f;
			*(iParam0 + 320) = { -2852.32f, 74.649f, 2158.667f };
			iParam0->f_428 = 197.574f;
			*(iParam0 + 332) = { -2858.007f, 73.678f, 2162.392f };
			iParam0->f_432 = 236.86f;
			*(iParam0 + 344) = { -2882.746f, 72.493f, 2184.76f };
			iParam0->f_436 = 218.101f;
			*(iParam0 + 356) = { -2883.305f, 61.315f, 2226.45f };
			iParam0->f_440 = -27.584f;
			*(iParam0 + 368) = { -2883.679f, 61.567f, 2223.738f };
			iParam0->f_444 = -42.562f;
			*(iParam0 + 380) = { -2874.792f, 63.259f, 2214.952f };
			iParam0->f_448 = -255.969f;
			*(iParam0 + 392) = { -2876.241f, 63.709f, 2212.9f };
			iParam0->f_452 = 90.764f;
			*(iParam0 + 404) = { -2878.6f, 63.473f, 2211.664f };
			iParam0->f_456 = 161.002f;
			iParam0->f_508 = 486;
			iParam0->f_512 = 494;
			iParam0->f_516 = 77;
			iParam0->f_464 = "rand_idle_stand_nospawn";
			iParam0->f_468 = "smoking_stand";
			iParam0->f_472 = "mex_gateGuards";
			iParam0->f_476 = "stand_lookdistance_w_any";
			iParam0->f_480 = "stand_lookdistance_w_any";
			return 1;
			break;
		
		case 0x0000000E:
			*(iParam0 + 92) = { -3133.579f, 56.069f, 3318.745f };
			iParam0->f_236 = 23.401f;
			*(iParam0 + 284) = { -3140.0f, 57.274f, 3321.29f };
			iParam0->f_416 = 123.934f;
			*(iParam0 + 296) = { -3126.042f, 55.027f, 3326.012f };
			iParam0->f_420 = 196.906f;
			*(iParam0 + 308) = { -3133.949f, 56.603f, 3310.508f };
			iParam0->f_424 = 34.806f;
			*(iParam0 + 320) = { -3122.084f, 70.286f, 3310.626f };
			iParam0->f_428 = -60.894f;
			*(iParam0 + 332) = { -3126.811f, 71.742f, 3317.18f };
			iParam0->f_432 = -229.938f;
			*(iParam0 + 344) = { -3213.753f, 51.393f, 3308.028f };
			iParam0->f_436 = 69.139f;
			*(iParam0 + 356) = { -3164.914f, 40.289f, 3361.648f };
			iParam0->f_440 = 168.955f;
			*(iParam0 + 368) = { -3161.107f, 40.583f, 3362.443f };
			iParam0->f_444 = 206.087f;
			*(iParam0 + 380) = { -3171.199f, 39.153f, 3269.472f };
			iParam0->f_448 = -11.678f;
			*(iParam0 + 392) = { -3167.472f, 39.153f, 3268.428f };
			iParam0->f_452 = -3.977f;
			*(iParam0 + 404) = { -3163.745f, 39.153f, 3269.671f };
			iParam0->f_456 = -42.562f;
			iParam0->f_508 = 397;
			iParam0->f_512 = 405;
			iParam0->f_516 = 77;
			iParam0->f_464 = "stand_lookdistance_w_any";
			iParam0->f_468 = "look_distance_binocs";
			iParam0->f_472 = "rand_idle_stand";
			iParam0->f_476 = "rand_idle_stand";
			iParam0->f_480 = "smoking_stand";
			return 1;
			break;
		
		case 0x0000000F:
			*(iParam0 + 92) = { -2336.926f, 17.067f, 3170.493f };
			iParam0->f_236 = -2.14f;
			*(iParam0 + 284) = { -2336.072f, 17.067f, 3169.268f };
			iParam0->f_416 = -86.214f;
			*(iParam0 + 296) = { -2336.887f, 17.067f, 3166.954f };
			iParam0->f_420 = -2.14f;
			*(iParam0 + 308) = { -2330.964f, 17.067f, 3163.609f };
			iParam0->f_424 = -23.4f;
			*(iParam0 + 320) = { -2327.604f, 17.067f, 3172.758f };
			iParam0->f_428 = -118.706f;
			*(iParam0 + 332) = { -2335.599f, 17.067f, 3174.808f };
			iParam0->f_432 = 197.731f;
			*(iParam0 + 344) = { -2340.001f, 17.067f, 3172.798f };
			iParam0->f_436 = -13.714f;
			*(iParam0 + 356) = { -2322.803f, 17.067f, 3145.059f };
			iParam0->f_440 = 311.211f;
			*(iParam0 + 368) = { -2320.44f, 17.067f, 3146.652f };
			iParam0->f_444 = -25.28f;
			*(iParam0 + 380) = { -2316.756f, 17.07f, 3148.32f };
			iParam0->f_448 = 5.107f;
			*(iParam0 + 392) = { -2328.458f, 17.067f, 3180.156f };
			iParam0->f_452 = 58.412f;
			*(iParam0 + 404) = { -2325.201f, 17.067f, 3177.577f };
			iParam0->f_456 = 58.218f;
			iParam0->f_508 = 486;
			iParam0->f_512 = 494;
			iParam0->f_516 = 22;
			iParam0->f_464 = "rand_idle_stand_nospaw";
			iParam0->f_468 = "look_distance_binocs";
			iParam0->f_472 = "look_distance_binocs";
			iParam0->f_476 = "rand_idle_nearwall";
			iParam0->f_480 = "pee";
			return 1;
			break;
		
		case 0x00000010:
			*(iParam0 + 92) = { -2337.728f, 17.067f, 3170.294f };
			iParam0->f_236 = 9.971f;
			*(iParam0 + 284) = { -1946.763f, 30.337f, 3468.948f };
			iParam0->f_416 = -88.999f;
			*(iParam0 + 296) = { -1950.671f, 30.338f, 3467.57f };
			iParam0->f_420 = 237.607f;
			*(iParam0 + 308) = { -1950.803f, 30.338f, 3470.875f };
			iParam0->f_424 = 283.753f;
			*(iParam0 + 320) = { -1948.542f, 30.338f, 3470.916f };
			iParam0->f_428 = 342.294f;
			*(iParam0 + 332) = { -1946.635f, 30.338f, 3470.909f };
			iParam0->f_432 = 314.856f;
			*(iParam0 + 344) = { -1946.089f, 30.338f, 3466.877f };
			iParam0->f_436 = 171.423f;
			*(iParam0 + 356) = { -1931.435f, 31.592f, 3460.451f };
			iParam0->f_440 = 5.107f;
			*(iParam0 + 368) = { -1929.337f, 31.849f, 3461.238f };
			iParam0->f_444 = 58.412f;
			*(iParam0 + 380) = { -1927.96f, 31.946f, 3462.877f };
			iParam0->f_448 = 58.218f;
			*(iParam0 + 392) = { -1949.424f, 30.218f, 3461.784f };
			iParam0->f_452 = -206.774f;
			*(iParam0 + 404) = { -1946.031f, 30.195f, 3462.501f };
			iParam0->f_456 = 172.571f;
			iParam0->f_508 = 397;
			iParam0->f_512 = 405;
			iParam0->f_516 = 76;
			iParam0->f_464 = "look_distance_binocs";
			iParam0->f_468 = "stand_lookdistance_w_any";
			iParam0->f_472 = "sit_ground_only";
			iParam0->f_476 = "sit_ground_smoke";
			iParam0->f_480 = "sit_ground_only";
			return 1;
			break;
		
		case 0x00000011:
			*(iParam0 + 92) = { -4314.102f, 5.097f, 3744.501f };
			iParam0->f_236 = 43.016f;
			*(iParam0 + 284) = { -4317.295f, 5.097f, 3743.768f };
			iParam0->f_416 = -91.905f;
			*(iParam0 + 296) = { -4310.602f, 5.097f, 3745.569f };
			iParam0->f_420 = 37.237f;
			*(iParam0 + 308) = { -4313.688f, 5.097f, 3745.833f };
			iParam0->f_424 = 345.341f;
			*(iParam0 + 320) = { -4314.063f, 5.097f, 3742.018f };
			iParam0->f_428 = 175.597f;
			*(iParam0 + 332) = { -4317.56f, 5.097f, 3741.946f };
			iParam0->f_432 = 225.245f;
			*(iParam0 + 344) = { -4317.576f, 5.097f, 3745.841f };
			iParam0->f_436 = 315.983f;
			*(iParam0 + 356) = { -4290.656f, 3.974f, 3728.148f };
			iParam0->f_440 = -91.776f;
			*(iParam0 + 368) = { -4290.388f, 3.801f, 3730.024f };
			iParam0->f_444 = -42.776f;
			*(iParam0 + 380) = { -4315.129f, 4.818f, 3751.202f };
			iParam0->f_448 = -11.666f;
			*(iParam0 + 392) = { -4313.023f, 4.706f, 3751.904f };
			iParam0->f_452 = 0.707f;
			*(iParam0 + 404) = { -4308.537f, 4.79f, 3750.439f };
			iParam0->f_456 = -24.694f;
			iParam0->f_508 = 397;
			iParam0->f_512 = 405;
			iParam0->f_516 = 77;
			iParam0->f_464 = "look_distance_binocs";
			iParam0->f_468 = "smoking_stand";
			iParam0->f_472 = "rand_idle_nearwall";
			iParam0->f_476 = "sit_barrel";
			iParam0->f_480 = "look_distance_binocs";
			return 1;
			break;
		
		case 0x00000012:
			iParam0->f_4 = 2;
			iParam0->f_8 = 2;
			iParam0->f_12 = 7;
			Function_120(iParam0 + 16, 1);
			Function_120(iParam0 + 16, 2);
			Function_120(iParam0 + 16, 4);
			Function_120(iParam0 + 16, 8);
			Function_120(iParam0 + 16, 16);
			Function_120(iParam0 + 16, 32);
			Function_120(iParam0 + 16, 64);
			Function_120(iParam0 + 24, 1);
			Function_120(iParam0 + 28, 2);
			*(iParam0 + 32) = { -4015.39f, 21.47f, 2401.58f };
			*(iParam0 + 44) = { -4019.6f, 21.47f, 2397.61f };
			*(iParam0 + 104) = { -4017.411f, 21.0644f, 2403.306f };
			iParam0->f_240 = 18.0f;
			*(iParam0 + 116) = { -4016.05f, 21.47f, 2402.87f };
			iParam0->f_244 = 21.0f;
			*(iParam0 + 128) = { -4014.66f, 21.47f, 2402.34f };
			iParam0->f_248 = 26.99f;
			*(iParam0 + 140) = { -4012.81f, 21.0831f, 2401.69f };
			iParam0->f_252 = 20.99f;
			*(iParam0 + 152) = { -4021.25f, 21.0831f, 2396.7f };
			iParam0->f_256 = -158.9996f;
			*(iParam0 + 164) = { -4019.22f, 21.0901f, 2395.92f };
			iParam0->f_260 = -155.9994f;
			*(iParam0 + 176) = { -4018.17f, 21.0922f, 2395.57f };
			iParam0->f_264 = -158.9997f;
			*(iParam0 + 200) = { -4013.456f, 21.468f, 2397.704f };
			iParam0->f_280 = -70.274f;
			*(iParam0 + 92) = { -4017.441f, 21.468f, 2397.854f };
			iParam0->f_236 = 108.646f;
			*(iParam0 + 284) = { -4015.457f, 21.468f, 2398.76f };
			iParam0->f_416 = 172.429f;
			*(iParam0 + 296) = { -4013.634f, 21.468f, 2397.108f };
			iParam0->f_420 = 158.005f;
			*(iParam0 + 308) = { -4013.326f, 21.468f, 2399.415f };
			iParam0->f_424 = 73.958f;
			*(iParam0 + 320) = { -4016.929f, 21.468f, 2397.175f };
			iParam0->f_428 = 198.278f;
			*(iParam0 + 332) = { -4018.968f, 21.468f, 2399.702f };
			iParam0->f_432 = 248.481f;
			*(iParam0 + 344) = { -4018.745f, 21.469f, 2400.946f };
			iParam0->f_436 = 16.41f;
			*(iParam0 + 212) = { -4007.415f, 21.083f, 2402.38f };
			iParam0->f_272 = 234.336f;
			*(iParam0 + 224) = { -4008.202f, 20.972f, 2395.384f };
			iParam0->f_276 = 193.987f;
			*(iParam0 + 356) = { -4019.287f, 20.967f, 2406.868f };
			iParam0->f_440 = 8.376f;
			*(iParam0 + 368) = { -4017.313f, 20.995f, 2406.151f };
			iParam0->f_444 = 33.251f;
			*(iParam0 + 380) = { -4020.812f, 21.39f, 2389.644f };
			iParam0->f_448 = -136.243f;
			*(iParam0 + 392) = { -4017.785f, 21.265f, 2386.962f };
			iParam0->f_452 = 177.627f;
			*(iParam0 + 404) = { -4012.265f, 21.024f, 2388.6f };
			iParam0->f_456 = 120.35f;
			iParam0->f_508 = 467;
			iParam0->f_512 = 476;
			iParam0->f_516 = 22;
			iParam0->f_464 = "rand_idle_nearwall";
			iParam0->f_468 = "rand_idle_stand";
			iParam0->f_472 = "sit_barrel";
			iParam0->f_476 = "look_distance_binocs";
			iParam0->f_480 = "look_distance_binocs";
			return 1;
			break;
		
		case 0x00000013:
			*(iParam0 + 92) = { -276.02f, 73.201f, 2393.458f };
			iParam0->f_236 = 179.686f;
			*(iParam0 + 284) = { -274.324f, 73.201f, 2393.741f };
			iParam0->f_416 = 51.013f;
			*(iParam0 + 296) = { -289.984f, 72.456f, 2419.312f };
			iParam0->f_420 = -183.278f;
			*(iParam0 + 308) = { -273.119f, 73.18f, 2396.791f };
			iParam0->f_424 = 270.616f;
			*(iParam0 + 320) = { -273.986f, 73.155f, 2398.214f };
			iParam0->f_428 = 270.616f;
			*(iParam0 + 332) = { -277.702f, 73.155f, 2397.789f };
			iParam0->f_432 = 121.425f;
			*(iParam0 + 344) = { -278.525f, 73.138f, 2390.977f };
			iParam0->f_436 = 44.233f;
			*(iParam0 + 356) = { -292.719f, 75.262f, 2378.368f };
			iParam0->f_440 = 137.598f;
			*(iParam0 + 368) = { -297.222f, 75.295f, 2379.061f };
			iParam0->f_444 = 207.699f;
			*(iParam0 + 380) = { -286.079f, 75.299f, 2369.13f };
			iParam0->f_448 = 248.664f;
			*(iParam0 + 392) = { -284.174f, 75.289f, 2372.132f };
			iParam0->f_452 = -79.602f;
			*(iParam0 + 404) = { -282.211f, 74.962f, 2375.943f };
			iParam0->f_456 = -18.74f;
			iParam0->f_508 = 397;
			iParam0->f_512 = 405;
			iParam0->f_516 = 76;
			iParam0->f_464 = "stand_lookdistance_w_any";
			iParam0->f_468 = "nsit_docks";
			iParam0->f_472 = "look_out_window_R";
			iParam0->f_476 = "look_distance_binocs";
			iParam0->f_480 = "look_distance_binocs";
			return 1;
			break;
		
		case 0x00000014:
			*(iParam0 + 92) = { -1910.925f, 29.066f, 2263.904f };
			iParam0->f_236 = 0.0f;
			*(iParam0 + 284) = { -1911.897f, 29.17f, 2259.949f };
			iParam0->f_416 = 0.0f;
			*(iParam0 + 284) = { -1920.034f, 31.008f, 2265.405f };
			iParam0->f_416 = 221.236f;
			*(iParam0 + 296) = { -1892.769f, 30.055f, 2254.382f };
			iParam0->f_420 = 221.236f;
			*(iParam0 + 308) = { -1877.283f, 26.099f, 2289.581f };
			iParam0->f_424 = 152.442f;
			*(iParam0 + 320) = { -1895.984f, 26.887f, 2247.959f };
			iParam0->f_428 = 333.899f;
			*(iParam0 + 344) = { -1909.376f, 29.083f, 2265.966f };
			iParam0->f_436 = 221.236f;
			*(iParam0 + 356) = { -1897.51f, 26.15f, 2271.694f };
			iParam0->f_440 = 19.763f;
			*(iParam0 + 368) = { -1894.347f, 26.128f, 2268.736f };
			iParam0->f_444 = 48.841f;
			*(iParam0 + 380) = { -1917.895f, 28.101f, 2245.381f };
			iParam0->f_448 = -178.708f;
			*(iParam0 + 392) = { -1921.323f, 28.113f, 2244.031f };
			iParam0->f_452 = 199.115f;
			*(iParam0 + 404) = { -1926.575f, 28.202f, 2244.469f };
			iParam0->f_456 = -174.429f;
			iParam0->f_508 = 486;
			iParam0->f_512 = 494;
			iParam0->f_516 = 78;
			iParam0->f_464 = "look_distance_binocs";
			iParam0->f_468 = "stand_lookdistance_w_any";
			iParam0->f_472 = "look_distance_binocs";
			iParam0->f_476 = "stand_lookdistance_w_any";
			iParam0->f_480 = "look_distance_binocs";
			return 1;
			break;
		
		case 0x00000015:
			iParam0->f_4 = 1;
			iParam0->f_8 = 1;
			iParam0->f_12 = 4;
			Function_120(iParam0 + 16, 1);
			Function_120(iParam0 + 16, 2);
			Function_120(iParam0 + 16, 4);
			Function_120(iParam0 + 16, 8);
			Function_120(iParam0 + 24, 1);
			*(iParam0 + 32) = { 124.8f, 72.42f, 2674.02f };
			*(iParam0 + 104) = { 125.233f, 72.4417f, 2675.04f };
			iParam0->f_240 = 27.58978f;
			*(iParam0 + 116) = { 119.64f, 72.3106f, 2670.55f };
			iParam0->f_244 = -68.4101f;
			*(iParam0 + 128) = { 120.486f, 72.2827f, 2672.62f };
			iParam0->f_248 = -65.41f;
			*(iParam0 + 140) = { 121.484f, 72.2827f, 2674.54f };
			iParam0->f_252 = -62.41014f;
			*(iParam0 + 200) = { 121.695f, 72.413f, 2670.63f };
			iParam0->f_280 = 115.156f;
			*(iParam0 + 92) = { 123.42f, 72.41f, 2670.18f };
			iParam0->f_236 = -63.854f;
			*(iParam0 + 284) = { 124.188f, 72.409f, 2671.846f };
			iParam0->f_416 = 180.71f;
			*(iParam0 + 296) = { 129.244f, 72.501f, 2674.226f };
			iParam0->f_420 = 222.542f;
			*(iParam0 + 308) = { 121.386f, 72.413f, 2669.545f };
			iParam0->f_424 = 222.542f;
			*(iParam0 + 320) = { 125.005f, 72.412f, 2671.428f };
			iParam0->f_428 = 163.679f;
			*(iParam0 + 332) = { 122.952f, 72.413f, 2673.766f };
			iParam0->f_432 = 305.582f;
			*(iParam0 + 344) = { 121.713f, 72.413f, 2670.76f };
			iParam0->f_436 = 210.612f;
			*(iParam0 + 356) = { 92.981f, 71.278f, 2684.761f };
			iParam0->f_440 = 195.17f;
			*(iParam0 + 368) = { 96.374f, 71.278f, 2684.102f };
			iParam0->f_444 = 211.049f;
			*(iParam0 + 380) = { 99.038f, 71.278f, 2683.421f };
			iParam0->f_448 = -178.708f;
			*(iParam0 + 392) = { 104.447f, 71.802f, 2673.734f };
			iParam0->f_452 = 108.966f;
			*(iParam0 + 404) = { 107.48f, 72.023f, 2671.56f };
			iParam0->f_456 = 105.112f;
			iParam0->f_508 = 397;
			iParam0->f_512 = 405;
			iParam0->f_516 = 78;
			iParam0->f_464 = "look_distance_binocs";
			iParam0->f_468 = "look_distance_binocs";
			iParam0->f_472 = "rand_idle_nearwall";
			iParam0->f_476 = "stand_lookdistance_w_any";
			iParam0->f_480 = "smoking_stand";
			return 1;
			break;
		
		case 0x00000016:
			*(iParam0 + 92) = { -2302.359f, 24.248f, 3007.561f };
			iParam0->f_236 = 69.576f;
			*(iParam0 + 284) = { -2302.725f, 24.279f, 3009.553f };
			iParam0->f_416 = -136.418f;
			*(iParam0 + 296) = { -2301.099f, 24.287f, 3008.008f };
			iParam0->f_420 = 104.512f;
			*(iParam0 + 308) = { -2310.734f, 24.094f, 3005.089f };
			iParam0->f_424 = 285.688f;
			*(iParam0 + 320) = { -2307.478f, 24.094f, 3008.271f };
			iParam0->f_428 = 357.122f;
			*(iParam0 + 332) = { -2311.779f, 24.094f, 3006.169f };
			iParam0->f_432 = 163.369f;
			*(iParam0 + 344) = { -2308.875f, 24.094f, 3012.738f };
			iParam0->f_436 = 60.202f;
			*(iParam0 + 356) = { -2285.946f, 23.773f, 3003.648f };
			iParam0->f_440 = 276.733f;
			*(iParam0 + 368) = { -2287.244f, 23.374f, 3005.345f };
			iParam0->f_444 = 266.906f;
			*(iParam0 + 380) = { -2318.237f, 23.09f, 3000.99f };
			iParam0->f_448 = -112.242f;
			*(iParam0 + 392) = { -2320.324f, 23.09f, 3003.359f };
			iParam0->f_452 = -108.476f;
			*(iParam0 + 404) = { -2318.79f, 23.09f, 3006.107f };
			iParam0->f_456 = -66.319f;
			iParam0->f_508 = 486;
			iParam0->f_512 = 494;
			iParam0->f_516 = 76;
			iParam0->f_464 = "rand_idle_nearwall";
			iParam0->f_468 = "look_out_window_L";
			iParam0->f_472 = "rand_idle_nearwall_shoulder_L";
			iParam0->f_476 = "look_distance_binocs";
			iParam0->f_480 = "look_distance_binocs";
			return 1;
			break;
		
		case 0x00000017:
			*(iParam0 + 92) = { -2006.736f, 42.176f, 3043.272f };
			iParam0->f_236 = 88.686f;
			*(iParam0 + 284) = { -2006.836f, 42.042f, 3045.16f };
			iParam0->f_416 = 31.174f;
			*(iParam0 + 296) = { -2007.755f, 42.041f, 3041.964f };
			iParam0->f_420 = 228.602f;
			*(iParam0 + 308) = { -2012.868f, 42.041f, 3048.789f };
			iParam0->f_424 = 282.164f;
			*(iParam0 + 320) = { -2009.239f, 42.129f, 3051.271f };
			iParam0->f_428 = 331.148f;
			*(iParam0 + 332) = { -2006.306f, 42.041f, 3052.617f };
			iParam0->f_432 = 0.34f;
			*(iParam0 + 344) = { -2001.105f, 42.041f, 3046.785f };
			iParam0->f_436 = 77.931f;
			*(iParam0 + 356) = { -2027.215f, 42.041f, 3014.213f };
			iParam0->f_440 = 300.121f;
			*(iParam0 + 368) = { -2023.29f, 42.041f, 3020.031f };
			iParam0->f_444 = 342.792f;
			*(iParam0 + 380) = { -2000.098f, 42.041f, 3036.175f };
			iParam0->f_448 = -108.44f;
			*(iParam0 + 392) = { -1999.392f, 42.041f, 3033.619f };
			iParam0->f_452 = -90.929f;
			*(iParam0 + 404) = { -2000.346f, 42.041f, 3030.437f };
			iParam0->f_456 = -92.428f;
			iParam0->f_508 = 486;
			iParam0->f_512 = 494;
			iParam0->f_516 = 22;
			iParam0->f_464 = "rand_idle_stand";
			iParam0->f_468 = "smoking_stand";
			iParam0->f_472 = "mex_gateGuards";
			iParam0->f_476 = "stand_lookdistance_w_any";
			iParam0->f_480 = "stand_lookdistance_w_any";
			return 1;
			break;
		
		case 0x00000018:
			iParam0->f_4 = 2;
			iParam0->f_8 = 5;
			iParam0->f_12 = 7;
			Function_120(iParam0 + 16, 1);
			Function_120(iParam0 + 16, 2);
			Function_120(iParam0 + 16, 4);
			Function_120(iParam0 + 16, 8);
			Function_120(iParam0 + 20, 16);
			Function_120(iParam0 + 20, 32);
			Function_120(iParam0 + 20, 64);
			Function_120(iParam0 + 24, 1);
			Function_120(iParam0 + 24, 2);
			Function_120(iParam0 + 24, 4);
			Function_120(iParam0 + 28, 8);
			Function_120(iParam0 + 28, 16);
			*(iParam0 + 32) = { -933.046f, 102.412f, 2754.824f };
			*(iParam0 + 44) = { -934.29f, 102.412f, 2753.085f };
			*(iParam0 + 56) = { -936.489f, 102.412f, 2749.95f };
			*(iParam0 + 68) = { -924.889f, 102.412f, 2749.364f };
			*(iParam0 + 80) = { -926.622f, 102.412f, 2746.998f };
			*(iParam0 + 104) = { -934.086f, 102.412f, 2754.75f };
			iParam0->f_240 = -51.43177f;
			*(iParam0 + 116) = { -934.93f, 102.412f, 2753.63f };
			iParam0->f_244 = -57.54f;
			*(iParam0 + 128) = { -936.926f, 102.403f, 2750.86f };
			iParam0->f_248 = -56.40995f;
			*(iParam0 + 140) = { -931.301f, 102.412f, 2758.66f };
			iParam0->f_252 = -56.43486f;
			*(iParam0 + 152) = { -924.354f, 102.412f, 2748.71f };
			iParam0->f_256 = 134.459f;
			*(iParam0 + 164) = { -925.075f, 102.412f, 2747.82f };
			iParam0->f_260 = 122.492f;
			*(iParam0 + 176) = { -925.893f, 102.412f, 2746.57f };
			iParam0->f_264 = 115.843f;
			*(iParam0 + 200) = { -932.868f, 102.415f, 2746.785f };
			iParam0->f_280 = 212.28f;
			*(iParam0 + 92) = { -929.793f, 102.412f, 2750.46f };
			iParam0->f_236 = -50.84f;
			*(iParam0 + 212) = { -940.871f, 102.342f, 2749.936f };
			iParam0->f_272 = 178.269f;
			*(iParam0 + 224) = { -939.418f, 102.266f, 2752.68f };
			iParam0->f_276 = 120.908f;
			*(iParam0 + 284) = { -930.626f, 102.4122f, 2752.0f };
			iParam0->f_416 = -28.78f;
			*(iParam0 + 296) = { -924.765f, 102.412f, 2753.702f };
			iParam0->f_420 = 72.373f;
			*(iParam0 + 308) = { -927.281f, 102.412f, 2754.368f };
			iParam0->f_424 = 69.79f;
			*(iParam0 + 320) = { -929.789f, 102.504f, 2756.111f };
			iParam0->f_428 = 341.777f;
			*(iParam0 + 332) = { -934.494f, 102.42f, 2747.736f };
			iParam0->f_432 = 269.014f;
			*(iParam0 + 344) = { -932.133f, 102.413f, 2746.273f };
			iParam0->f_436 = 145.15f;
			*(iParam0 + 356) = { -976.159f, 103.637f, 2719.504f };
			iParam0->f_440 = -191.58f;
			*(iParam0 + 368) = { -974.168f, 103.637f, 2720.047f };
			iParam0->f_444 = 486.238f;
			*(iParam0 + 380) = { -933.686f, 102.412f, 2758.172f };
			iParam0->f_448 = 297.957f;
			*(iParam0 + 392) = { -930.962f, 102.387f, 2762.141f };
			iParam0->f_452 = -89.501f;
			*(iParam0 + 404) = { -932.674f, 102.412f, 2759.572f };
			iParam0->f_456 = -38.718f;
			iParam0->f_508 = 477;
			iParam0->f_512 = 485;
			iParam0->f_516 = 79;
			iParam0->f_464 = "rand_idle_stand_nospawn";
			iParam0->f_468 = "smoking_stand";
			iParam0->f_472 = "mex_gateGuards";
			iParam0->f_476 = "stand_lookdistance_w_any";
			iParam0->f_480 = "stand_lookdistance_w_any";
			return 1;
			break;
		
		case 0x00000019:
			*(iParam0 + 92) = { -594.268f, 30.877f, 4008.359f };
			iParam0->f_236 = 170.652f;
			*(iParam0 + 284) = { -597.294f, 30.877f, 4005.67f };
			iParam0->f_416 = -138.782f;
			*(iParam0 + 296) = { -639.225f, 13.58f, 3993.509f };
			iParam0->f_420 = -292.51f;
			*(iParam0 + 308) = { -628.453f, 20.346f, 4004.586f };
			iParam0->f_424 = -336.107f;
			*(iParam0 + 320) = { -619.798f, 20.664f, 3987.649f };
			iParam0->f_428 = -308.869f;
			*(iParam0 + 332) = { -596.0f, 30.877f, 4002.884f };
			iParam0->f_432 = 43.992f;
			*(iParam0 + 344) = { -598.929f, 30.877f, 4007.492f };
			iParam0->f_436 = 115.375f;
			*(iParam0 + 356) = { -656.717f, 13.171f, 3987.879f };
			iParam0->f_440 = 206.407f;
			*(iParam0 + 368) = { -654.461f, 13.465f, 3985.152f };
			iParam0->f_444 = 227.436f;
			*(iParam0 + 380) = { -651.5f, 13.744f, 3982.614f };
			iParam0->f_448 = -118.83f;
			*(iParam0 + 392) = { -633.228f, 21.456f, 4015.153f };
			iParam0->f_452 = -24.598f;
			*(iParam0 + 404) = { -629.02f, 22.181f, 4014.968f };
			iParam0->f_456 = 0.56f;
			iParam0->f_508 = 516;
			iParam0->f_512 = 531;
			iParam0->f_516 = 241;
			iParam0->f_464 = "stand_lookdistance_w_any";
			iParam0->f_468 = "look_distance_binocs";
			iParam0->f_472 = "stand_lookdistance_w_any";
			iParam0->f_476 = "stand_lookdistance_w_any";
			iParam0->f_480 = "rand_idle_nearwall";
			return 1;
			break;
		
		case 0x0000001A:
			*(iParam0 + 92) = { -2229.454f, 23.263f, 4452.343f };
			iParam0->f_236 = 15.678f;
			*(iParam0 + 284) = { -2228.686f, 23.263f, 4453.672f };
			iParam0->f_416 = 269.799f;
			*(iParam0 + 296) = { -2227.613f, 23.264f, 4451.309f };
			iParam0->f_420 = 172.945f;
			*(iParam0 + 308) = { -2232.662f, 23.09f, 4453.425f };
			iParam0->f_424 = 301.728f;
			*(iParam0 + 320) = { -2235.676f, 23.09f, 4450.952f };
			iParam0->f_428 = 318.266f;
			*(iParam0 + 332) = { -2237.908f, 23.09f, 4450.775f };
			iParam0->f_432 = 167.035f;
			*(iParam0 + 344) = { -2234.18f, 23.084f, 4457.452f };
			iParam0->f_436 = 64.468f;
			*(iParam0 + 356) = { -2261.394f, 23.09f, 4470.363f };
			iParam0->f_440 = 16.854f;
			*(iParam0 + 368) = { -2258.274f, 23.09f, 4467.679f };
			iParam0->f_444 = 26.089f;
			*(iParam0 + 380) = { -2256.098f, 23.09f, 4464.197f };
			iParam0->f_448 = 42.078f;
			*(iParam0 + 392) = { -2235.659f, 22.666f, 4469.637f };
			iParam0->f_452 = -24.598f;
			*(iParam0 + 404) = { -2232.33f, 22.295f, 4469.952f };
			iParam0->f_456 = 0.56f;
			iParam0->f_508 = 496;
			iParam0->f_512 = 504;
			iParam0->f_516 = 241;
			iParam0->f_464 = "rand_idle_nearwall";
			iParam0->f_468 = "rand_idle_nearwall";
			iParam0->f_472 = "stand_lookdistance_w_any";
			iParam0->f_476 = "look_out_window_R";
			iParam0->f_480 = "look_distance_binocs";
			return 1;
			break;
		
		case 0x0000001B:
			iParam0->f_4 = 2;
			iParam0->f_8 = 2;
			iParam0->f_12 = 5;
			Function_120(iParam0 + 16, 1);
			Function_120(iParam0 + 16, 2);
			Function_120(iParam0 + 16, 4);
			Function_120(iParam0 + 20, 8);
			Function_120(iParam0 + 20, 16);
			Function_120(iParam0 + 24, 1);
			Function_120(iParam0 + 28, 2);
			*(iParam0 + 32) = { -2146.41f, 18.68f, 4968.09f };
			*(iParam0 + 44) = { -2148.09f, 18.6f, 4975.03f };
			*(iParam0 + 104) = { -2146.39f, 18.6664f, 4967.08f };
			iParam0->f_240 = -179.9999f;
			*(iParam0 + 116) = { -2149.77f, 18.6475f, 4967.08f };
			iParam0->f_244 = 173.9998f;
			*(iParam0 + 128) = { -2151.57f, 18.6481f, 4967.2f };
			iParam0->f_248 = -167.4099f;
			*(iParam0 + 140) = { -2149.26f, 18.5743f, 4974.89f };
			iParam0->f_252 = -83.4349f;
			*(iParam0 + 152) = { -2150.66f, 18.567f, 4974.58f };
			iParam0->f_256 = 0.565044f;
			*(iParam0 + 200) = { -2150.144f, 18.767f, 4969.001f };
			iParam0->f_280 = -10.0f;
			*(iParam0 + 92) = { -2150.144f, 18.769f, 4970.876f };
			iParam0->f_236 = -91.877f;
			*(iParam0 + 284) = { -2151.557f, 18.769f, 4968.783f };
			iParam0->f_416 = -2.067f;
			*(iParam0 + 296) = { -2151.326f, 18.923f, 4972.898f };
			iParam0->f_420 = 310.943f;
			*(iParam0 + 308) = { -2151.132f, 18.779f, 4969.101f };
			iParam0->f_424 = 258.013f;
			*(iParam0 + 320) = { -2144.955f, 18.687f, 4969.136f };
			iParam0->f_428 = 175.623f;
			*(iParam0 + 332) = { -2144.075f, 18.72f, 4976.095f };
			iParam0->f_432 = 60.675f;
			*(iParam0 + 344) = { -2143.88f, 18.554f, 4973.849f };
			iParam0->f_436 = 107.552f;
			*(iParam0 + 212) = { -2145.371f, 16.058f, 4946.544f };
			iParam0->f_272 = 35.385f;
			*(iParam0 + 224) = { -2142.939f, 17.556f, 4955.767f };
			iParam0->f_276 = 40.164f;
			*(iParam0 + 356) = { -2153.897f, 18.18f, 4961.988f };
			iParam0->f_440 = -180.427f;
			*(iParam0 + 368) = { -2151.259f, 18.206f, 4961.947f };
			iParam0->f_444 = 161.988f;
			*(iParam0 + 380) = { -2160.059f, 18.784f, 4975.642f };
			iParam0->f_448 = -66.278f;
			*(iParam0 + 392) = { -2160.758f, 18.991f, 4972.499f };
			iParam0->f_452 = -91.17f;
			*(iParam0 + 404) = { -2162.294f, 18.654f, 4970.544f };
			iParam0->f_456 = -94.479f;
			iParam0->f_508 = 406;
			iParam0->f_512 = 414;
			iParam0->f_516 = 240;
			iParam0->f_464 = "rand_idle_stand";
			iParam0->f_468 = "rand_idle_nearwall";
			iParam0->f_472 = "look_out_window_L";
			iParam0->f_476 = "rand_idle_nearwall";
			iParam0->f_480 = "rand_idle_stand";
			return 1;
			break;
		
		case 0x0000001C:
			*(iParam0 + 92) = { -3860.593f, 7.026f, 4319.981f };
			iParam0->f_236 = -90.815f;
			*(iParam0 + 284) = { -3859.166f, 7.134f, 4320.9f };
			iParam0->f_416 = 136.441f;
			*(iParam0 + 296) = { -3844.011f, 9.254f, 4311.946f };
			iParam0->f_420 = -21.903f;
			*(iParam0 + 308) = { -3863.951f, 7.777f, 4303.869f };
			iParam0->f_424 = -21.903f;
			*(iParam0 + 320) = { -3852.0f, 8.637f, 4312.0f };
			iParam0->f_428 = -64.114f;
			*(iParam0 + 332) = { -3832.0f, 12.518f, 4336.0f };
			iParam0->f_432 = -129.939f;
			*(iParam0 + 344) = { -3899.941f, 8.031f, 4340.052f };
			iParam0->f_436 = -228.003f;
			*(iParam0 + 356) = { -3888.227f, 7.087f, 4312.428f };
			iParam0->f_440 = -180.427f;
			*(iParam0 + 368) = { -3886.172f, 7.144f, 4312.964f };
			iParam0->f_444 = 153.52f;
			*(iParam0 + 380) = { -3883.771f, 7.16f, 4314.396f };
			iParam0->f_448 = 81.666f;
			*(iParam0 + 392) = { -3904.027f, 8.026f, 4346.417f };
			iParam0->f_452 = 2.248f;
			*(iParam0 + 404) = { -3907.203f, 8.013f, 4347.759f };
			iParam0->f_456 = -21.903f;
			iParam0->f_508 = 516;
			iParam0->f_512 = 531;
			iParam0->f_516 = 241;
			iParam0->f_464 = "look_distance_binocs";
			iParam0->f_468 = "look_distance_binocs";
			iParam0->f_472 = "rand_idle_stand";
			iParam0->f_476 = "rand_idle_stand";
			iParam0->f_480 = "look_distance_binocs";
			return 1;
			break;
		
		case 0x0000001D:
			*(iParam0 + 92) = { -2718.606f, 56.177f, 4626.842f };
			iParam0->f_236 = 82.944f;
			*(iParam0 + 284) = { -2720.237f, 56.14f, 4631.692f };
			iParam0->f_416 = 158.989f;
			*(iParam0 + 296) = { -2729.397f, 48.497f, 4677.15f };
			iParam0->f_420 = -110.579f;
			*(iParam0 + 308) = { -2741.735f, 54.206f, 4660.338f };
			iParam0->f_424 = -119.906f;
			*(iParam0 + 320) = { -2751.354f, 54.564f, 4652.214f };
			iParam0->f_428 = 18.414f;
			*(iParam0 + 332) = { -2719.352f, 56.14f, 4623.413f };
			iParam0->f_432 = 150.864f;
			*(iParam0 + 344) = { -2724.634f, 56.107f, 4623.532f };
			iParam0->f_436 = 81.922f;
			*(iParam0 + 356) = { -2745.797f, 47.988f, 4625.989f };
			iParam0->f_440 = -26.293f;
			*(iParam0 + 368) = { -2747.859f, 47.693f, 4624.839f };
			iParam0->f_444 = 357.726f;
			*(iParam0 + 380) = { -2713.109f, 45.646f, 4660.732f };
			iParam0->f_448 = -61.194f;
			*(iParam0 + 392) = { -2711.452f, 45.176f, 4662.766f };
			iParam0->f_452 = -86.959f;
			*(iParam0 + 404) = { -2709.494f, 44.534f, 4665.703f };
			iParam0->f_456 = 322.758f;
			iParam0->f_508 = 406;
			iParam0->f_512 = 414;
			iParam0->f_516 = 240;
			iParam0->f_464 = "look_distance_binocs";
			iParam0->f_468 = "stand_lookdistance_w_any";
			iParam0->f_472 = "rand_idle_stand";
			iParam0->f_476 = "sit_ground_smoke";
			iParam0->f_480 = "look_distance_binocs";
			return 1;
			break;
		
		case 0x0000001E:
			*(iParam0 + 92) = { -1467.45f, 20.603f, 4901.757f };
			iParam0->f_236 = -162.78f;
			*(iParam0 + 284) = { -1466.004f, 20.603f, 4902.112f };
			iParam0->f_416 = -93.268f;
			*(iParam0 + 296) = { -1451.772f, 19.108f, 4898.179f };
			iParam0->f_420 = -160.576f;
			*(iParam0 + 308) = { -1454.196f, 19.055f, 4894.595f };
			iParam0->f_424 = -38.336f;
			*(iParam0 + 320) = { -1450.552f, 19.693f, 4912.277f };
			iParam0->f_428 = -90.774f;
			*(iParam0 + 332) = { -1450.581f, 19.693f, 4914.392f };
			iParam0->f_432 = -90.774f;
			*(iParam0 + 344) = { -1465.731f, 20.603f, 4897.664f };
			iParam0->f_436 = 301.206f;
			*(iParam0 + 356) = { -1430.556f, 17.862f, 4892.925f };
			iParam0->f_440 = 108.339f;
			*(iParam0 + 368) = { -1431.704f, 17.763f, 4891.236f };
			iParam0->f_444 = 133.614f;
			*(iParam0 + 380) = { -1473.657f, 20.603f, 4911.594f };
			iParam0->f_448 = -119.795f;
			*(iParam0 + 392) = { -1473.616f, 20.603f, 4915.059f };
			iParam0->f_452 = -86.959f;
			*(iParam0 + 404) = { -1471.429f, 20.603f, 4917.822f };
			iParam0->f_456 = -35.592f;
			iParam0->f_508 = 516;
			iParam0->f_512 = 531;
			iParam0->f_516 = 239;
			iParam0->f_464 = "rand_idle_nearwall_shoulder_R";
			iParam0->f_468 = "stand_lookdistance_w_any";
			iParam0->f_472 = "rand_idle_stand";
			iParam0->f_476 = "rand_idle_sit_ground";
			iParam0->f_480 = "smoking_stand";
			return 1;
			break;
		
		case 0x0000001F:
			*(iParam0 + 92) = { -3372.019f, 56.259f, 4774.489f };
			iParam0->f_236 = -19.982f;
			*(iParam0 + 284) = { -3371.442f, 56.214f, 4771.472f };
			iParam0->f_416 = -76.399f;
			*(iParam0 + 296) = { -3393.076f, 54.674f, 4743.264f };
			iParam0->f_420 = 286.167f;
			*(iParam0 + 308) = { -3393.214f, 55.216f, 4756.916f };
			iParam0->f_424 = 107.552f;
			*(iParam0 + 320) = { -3383.994f, 55.505f, 4741.233f };
			iParam0->f_428 = 74.847f;
			*(iParam0 + 332) = { -3382.398f, 55.677f, 4740.638f };
			iParam0->f_432 = 331.954f;
			*(iParam0 + 344) = { -3376.667f, 55.897f, 4740.309f };
			iParam0->f_436 = 338.64f;
			*(iParam0 + 356) = { -3391.581f, 46.292f, 4692.715f };
			iParam0->f_440 = -74.949f;
			*(iParam0 + 368) = { -3392.009f, 45.853f, 4690.46f };
			iParam0->f_444 = 293.54f;
			*(iParam0 + 380) = { -3391.6f, 54.824f, 4744.0f };
			iParam0->f_448 = -8.776f;
			*(iParam0 + 392) = { -3389.719f, 55.082f, 4743.2f };
			iParam0->f_452 = -2.587f;
			*(iParam0 + 404) = { -3387.438f, 55.154f, 4743.16f };
			iParam0->f_456 = 18.612f;
			iParam0->f_508 = 516;
			iParam0->f_512 = 531;
			iParam0->f_516 = 239;
			iParam0->f_464 = "rand_idle_nearwall";
			iParam0->f_468 = "stand_lookdistance_w_any";
			iParam0->f_472 = "rand_idle_stand";
			iParam0->f_476 = "rand_idle_stand";
			iParam0->f_480 = "rand_idle_stand";
			return 1;
			break;
		
		case 0x00000020:
			*(iParam0 + 92) = { -1200.815f, 19.177f, 4963.429f };
			iParam0->f_236 = -227.436f;
			*(iParam0 + 284) = { -1200.294f, 19.035f, 4966.604f };
			iParam0->f_416 = 224.446f;
			*(iParam0 + 296) = { -1201.298f, 19.075f, 4967.346f };
			iParam0->f_420 = 21.338f;
			*(iParam0 + 308) = { -1204.447f, 19.075f, 4963.138f };
			iParam0->f_424 = 236.595f;
			*(iParam0 + 320) = { -1200.658f, 19.075f, 4960.558f };
			iParam0->f_428 = 203.712f;
			*(iParam0 + 332) = { -1205.747f, 19.075f, 4961.868f };
			iParam0->f_432 = 183.278f;
			*(iParam0 + 344) = { -1202.148f, 19.075f, 4958.978f };
			iParam0->f_436 = 288.224f;
			*(iParam0 + 356) = { -1179.418f, 17.055f, 4982.803f };
			iParam0->f_440 = -40.128f;
			*(iParam0 + 368) = { -1181.623f, 17.064f, 4980.798f };
			iParam0->f_444 = 293.54f;
			*(iParam0 + 380) = { -1188.151f, 18.071f, 4968.483f };
			iParam0->f_448 = -8.776f;
			*(iParam0 + 392) = { -1185.913f, 18.071f, 4968.297f };
			iParam0->f_452 = -25.341f;
			*(iParam0 + 404) = { -1184.545f, 18.071f, 4969.665f };
			iParam0->f_456 = -40.868f;
			iParam0->f_508 = 496;
			iParam0->f_512 = 504;
			iParam0->f_516 = 253;
			iParam0->f_464 = "rand_idle_stand";
			iParam0->f_468 = "rand_idle_nearwall";
			iParam0->f_472 = "look_distance_binocs";
			iParam0->f_476 = "look_distance_binocs";
			iParam0->f_480 = "rand_idle_nearwall";
			return 1;
			break;
		
		case 0x00000021:
			*(iParam0 + 92) = { -2426.763f, 9.035f, 3938.964f };
			iParam0->f_236 = 233.065f;
			*(iParam0 + 284) = { -2422.158f, 8.849f, 3944.0f };
			iParam0->f_416 = 269.799f;
			*(iParam0 + 296) = { -2424.0f, 8.849f, 3944.0f };
			iParam0->f_420 = 395.053f;
			*(iParam0 + 308) = { -2425.238f, 8.849f, 3942.791f };
			iParam0->f_424 = 326.055f;
			*(iParam0 + 320) = { -2414.324f, 11.967f, 3926.785f };
			iParam0->f_428 = 305.944f;
			*(iParam0 + 332) = { -2420.0f, 8.32f, 3948.0f };
			iParam0->f_432 = 254.555f;
			*(iParam0 + 344) = { -2420.0f, 9.035f, 3936.0f };
			iParam0->f_436 = 269.799f;
			*(iParam0 + 356) = { -2386.303f, 13.951f, 3929.351f };
			iParam0->f_440 = 106.469f;
			*(iParam0 + 368) = { -2386.661f, 13.959f, 3927.133f };
			iParam0->f_444 = 135.426f;
			*(iParam0 + 380) = { -2426.256f, 9.03f, 3940.356f };
			iParam0->f_448 = 40.635f;
			*(iParam0 + 392) = { -2422.997f, 9.026f, 3940.204f };
			iParam0->f_452 = -25.341f;
			*(iParam0 + 404) = { -2421.01f, 8.873f, 3942.721f };
			iParam0->f_456 = -71.706f;
			iParam0->f_508 = 496;
			iParam0->f_512 = 504;
			iParam0->f_516 = 317;
			iParam0->f_464 = "rand_idle_sit_ground";
			iParam0->f_468 = "rand_idle_sit_ground";
			iParam0->f_472 = "stand_lookdistance_w_any";
			iParam0->f_476 = "look_distance_binocs";
			iParam0->f_480 = "stand_lookdistance_w_any";
			return 1;
			break;
		
		case 0x00000022:
			*(iParam0 + 92) = { -2804.866f, 16.508f, 3992.555f };
			iParam0->f_236 = -74.028f;
			*(iParam0 + 284) = { -2807.604f, 16.364f, 3994.217f };
			iParam0->f_416 = -233.627f;
			*(iParam0 + 296) = { -2802.868f, 16.447f, 3993.188f };
			iParam0->f_420 = -221.419f;
			*(iParam0 + 308) = { -2791.689f, 14.463f, 4004.19f };
			iParam0->f_424 = 233.065f;
			*(iParam0 + 320) = { -2801.971f, 14.191f, 3979.248f };
			iParam0->f_428 = -382.11f;
			*(iParam0 + 332) = { -2821.742f, 15.093f, 4018.304f };
			iParam0->f_432 = 203.293f;
			*(iParam0 + 344) = { -2801.382f, 16.272f, 3993.622f };
			iParam0->f_436 = -116.089f;
			*(iParam0 + 356) = { -2807.759f, 14.284f, 3978.753f };
			iParam0->f_440 = 254.933f;
			*(iParam0 + 368) = { -2804.269f, 13.895f, 3976.22f };
			iParam0->f_444 = 172.987f;
			*(iParam0 + 380) = { -2799.801f, 16.116f, 3995.266f };
			iParam0->f_448 = -3.069f;
			*(iParam0 + 392) = { -2796.837f, 15.872f, 3995.54f };
			iParam0->f_452 = 7.12f;
			*(iParam0 + 404) = { -2793.27f, 15.448f, 3995.925f };
			iParam0->f_456 = 73.417f;
			iParam0->f_508 = 406;
			iParam0->f_512 = 414;
			iParam0->f_516 = 241;
			iParam0->f_464 = "rand_idle_sit_ground";
			iParam0->f_468 = "rand_idle_sit_ground";
			iParam0->f_472 = "rand_idle_stand";
			iParam0->f_476 = "sit_ground_smoke";
			iParam0->f_480 = "stand_lookdistance_w_any";
			return 1;
			break;
		
		case 0x00000023:
			*(iParam0 + 92) = { -1356.416f, 13.051f, 4308.14f };
			iParam0->f_236 = -57.053f;
			*(iParam0 + 284) = { -1354.682f, 13.042f, 4311.322f };
			iParam0->f_416 = -148.611f;
			*(iParam0 + 296) = { -1388.408f, 13.01f, 4308.178f };
			iParam0->f_420 = 110.556f;
			*(iParam0 + 308) = { -1346.633f, 13.031f, 4275.531f };
			iParam0->f_424 = -18.343f;
			*(iParam0 + 320) = { -1348.937f, 13.04f, 4295.117f };
			iParam0->f_428 = -378.398f;
			*(iParam0 + 332) = { -1372.707f, 13.051f, 4300.24f };
			iParam0->f_432 = 147.232f;
			*(iParam0 + 344) = { -1358.335f, 13.074f, 4307.753f };
			iParam0->f_436 = 29.057f;
			*(iParam0 + 356) = { -1397.48f, 13.051f, 4300.768f };
			iParam0->f_440 = 254.933f;
			*(iParam0 + 368) = { -1398.932f, 13.051f, 4303.633f };
			iParam0->f_444 = -84.533f;
			*(iParam0 + 380) = { -1329.279f, 13.051f, 4284.976f };
			iParam0->f_448 = 173.771f;
			*(iParam0 + 392) = { -1327.024f, 13.051f, 4284.387f };
			iParam0->f_452 = -168.443f;
			*(iParam0 + 404) = { -1323.689f, 13.051f, 4284.289f };
			iParam0->f_456 = 193.516f;
			iParam0->f_508 = 406;
			iParam0->f_512 = 414;
			iParam0->f_516 = 240;
			iParam0->f_464 = "rand_idle_sit_ground";
			iParam0->f_468 = "stand_lookdistance_w_any";
			iParam0->f_472 = "look_distance_binocs";
			iParam0->f_476 = "stand_lookdistance_w_any";
			iParam0->f_480 = "rand_idle_nearwall";
			return 1;
			break;
		
		case 0x00000024:
			*(iParam0 + 92) = { -3724.915f, 11.88f, 4784.509f };
			iParam0->f_236 = -38.444f;
			*(iParam0 + 284) = { -3727.532f, 12.046f, 4789.082f };
			iParam0->f_416 = -235.401f;
			*(iParam0 + 296) = { -3750.316f, 12.608f, 4780.991f };
			iParam0->f_420 = 144.385f;
			*(iParam0 + 308) = { -3728.437f, 8.915f, 4752.855f };
			iParam0->f_424 = 107.823f;
			*(iParam0 + 320) = { -3730.176f, 9.026f, 4800.344f };
			iParam0->f_428 = -329.341f;
			*(iParam0 + 332) = { -3706.888f, 9.246f, 4771.759f };
			iParam0->f_432 = -306.654f;
			*(iParam0 + 344) = { -3719.76f, 12.307f, 4781.099f };
			iParam0->f_436 = -59.906f;
			*(iParam0 + 356) = { -3584.686f, 10.095f, 4686.505f };
			iParam0->f_440 = 100.477f;
			*(iParam0 + 368) = { -3585.128f, 10.045f, 4683.631f };
			iParam0->f_444 = -278.036f;
			*(iParam0 + 380) = { -3570.844f, 9.989f, 4674.944f };
			iParam0->f_448 = 350.008f;
			*(iParam0 + 392) = { -3568.908f, 10.055f, 4675.852f };
			iParam0->f_452 = -49.8f;
			*(iParam0 + 404) = { -3567.841f, 10.039f, 4678.223f };
			iParam0->f_456 = 265.068f;
			iParam0->f_508 = 406;
			iParam0->f_512 = 414;
			iParam0->f_516 = 239;
			iParam0->f_464 = "look_distance_binocs";
			iParam0->f_468 = "stand_lookdistance_w_any";
			iParam0->f_472 = "look_distance_binocs";
			iParam0->f_476 = "stand_lookdistance_w_any";
			iParam0->f_480 = "rand_idle_stand";
			return 1;
			break;
		
		case 0x00000025:
			*(iParam0 + 92) = { -526.81f, 28.612f, 3584.959f };
			iParam0->f_236 = -308.869f;
			*(iParam0 + 284) = { -527.271f, 28.612f, 3588.612f };
			iParam0->f_416 = 60.574f;
			*(iParam0 + 296) = { -529.658f, 28.612f, 3586.341f };
			iParam0->f_420 = -103.683f;
			*(iParam0 + 308) = { -528.0f, 25.507f, 3608.0f };
			iParam0->f_424 = 160.145f;
			*(iParam0 + 320) = { -538.364f, 23.361f, 3619.907f };
			iParam0->f_428 = 160.145f;
			*(iParam0 + 332) = { -532.38f, 28.612f, 3587.525f };
			iParam0->f_432 = -232.137f;
			*(iParam0 + 344) = { -527.66f, 28.613f, 3590.663f };
			iParam0->f_436 = -140.986f;
			*(iParam0 + 356) = { -564.538f, 15.055f, 3636.173f };
			iParam0->f_440 = -22.224f;
			*(iParam0 + 368) = { -567.414f, 15.094f, 3634.904f };
			iParam0->f_444 = 321.605f;
			*(iParam0 + 380) = { -569.655f, 15.05f, 3634.228f };
			iParam0->f_448 = -53.107f;
			*(iParam0 + 392) = { -527.458f, 23.583f, 3615.537f };
			iParam0->f_452 = -60.895f;
			*(iParam0 + 404) = { -525.772f, 23.583f, 3617.813f };
			iParam0->f_456 = -32.665f;
			iParam0->f_508 = 406;
			iParam0->f_512 = 414;
			iParam0->f_516 = 253;
			iParam0->f_464 = "rand_idle_sit_ground";
			iParam0->f_468 = "look_distance_binocs";
			iParam0->f_472 = "stand_lookdistance_w_any";
			iParam0->f_476 = "look_distance_binocs";
			iParam0->f_480 = "stand_lookdistance_w_any";
			return 1;
			break;
	}
	return 0;
}

bool Function_128(vector3 vParam0, var uParam3, var uParam4) //Position: 0xAF61 / 44897
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	vLocal_21[03] = { -1045.249f, 184.066f, 1373.642f };
	uLocal_136[0] = Global_30723[5];
	vLocal_21[13] = { -521.368f, 146.586f, 1891.315f };
	uLocal_136[1] = Global_30723[6];
	vLocal_21[23] = { 151.25f, 128.174f, 1380.784f };
	uLocal_136[2] = Global_30717[2];
	vLocal_21[33] = { -730.995f, 226.993f, 1106.784f };
	uLocal_136[3] = Global_30723[3];
	vLocal_21[43] = { -844.7f, 189.73f, 1582.449f };
	uLocal_136[4] = Global_30723[4];
	vLocal_21[53] = { -487.694f, 20.486f, 3033.49f };
	uLocal_136[5] = Global_30668[3];
	vLocal_21[63] = { -2905.192f, 13.051f, 2946.404f };
	uLocal_136[6] = Global_30640[15];
	vLocal_21[73] = { -1233.827f, 22.095f, 3208.098f };
	uLocal_136[7] = Global_30668[5];
	vLocal_21[83] = { -3434.034f, 23.592f, 2497.243f };
	uLocal_136[8] = Global_30640[9];
	vLocal_21[93] = { -1864.42f, 25.674f, 3306.345f };
	uLocal_136[9] = Global_30640[5];
	vLocal_21[103] = { -2832.227f, 20.209f, 3075.762f };
	uLocal_136[10] = Global_30679[1];
	vLocal_21[113] = { -1272.701f, 109.427f, 2763.055f };
	uLocal_136[11] = Global_30668[6];
	vLocal_21[123] = { -2833.559f, 50.331f, 2416.961f };
	uLocal_136[12] = Global_30640[10];
	vLocal_21[133] = { -2867.112f, 82.255f, 2162.143f };
	uLocal_136[13] = Global_30640[7];
	vLocal_21[143] = { -3133.579f, 56.069f, 3318.745f };
	uLocal_136[14] = Global_30679[3];
	vLocal_21[153] = { -2336.926f, 17.067f, 3170.493f };
	uLocal_136[15] = Global_30640[3];
	vLocal_21[163] = { -1948.69f, 30.068f, 3468.263f };
	uLocal_136[16] = Global_30640[13];
	vLocal_21[173] = { -4314.102f, 5.097f, 3744.501f };
	uLocal_136[17] = Global_30658[6];
	vLocal_21[183] = { -4017.441f, 21.468f, 2397.854f };
	uLocal_136[18] = Global_30658[7];
	vLocal_21[193] = { -276.02f, 73.201f, 2393.458f };
	uLocal_136[19] = Global_30668[7];
	vLocal_21[203] = { -1910.925f, 29.066f, 2263.904f };
	uLocal_136[20] = Global_30640[6];
	vLocal_21[213] = { 122.293f, 72.409f, 2669.889f };
	uLocal_136[21] = Global_30668[8];
	vLocal_21[223] = { -2302.359f, 24.248f, 3007.561f };
	uLocal_136[22] = Global_30640[14];
	vLocal_21[233] = { -2006.736f, 42.176f, 3043.272f };
	uLocal_136[23] = Global_30640[16];
	vLocal_21[243] = { -929.793f, 102.412f, 2750.46f };
	uLocal_136[24] = Global_30668[9];
	vLocal_21[253] = { -594.268f, 30.877f, 4008.359f };
	uLocal_136[25] = Global_30707[5];
	vLocal_21[263] = { -2229.454f, 23.263f, 4452.343f };
	uLocal_136[26] = Global_30693[3];
	vLocal_21[273] = { -2150.144f, 18.769f, 4970.876f };
	uLocal_136[27] = Global_30693[12];
	vLocal_21[283] = { -3859.27f, 6.942f, 4318.333f };
	uLocal_136[28] = Global_30685[4];
	vLocal_21[293] = { -2718.606f, 56.177f, 4626.842f };
	uLocal_136[29] = Global_30693[7];
	vLocal_21[303] = { -2150.144f, 18.769f, 4970.876f };
	uLocal_136[30] = Global_30693[8];
	vLocal_21[313] = { -3372.019f, 56.259f, 4774.489f };
	uLocal_136[31] = Global_30685[5];
	vLocal_21[323] = { -1200.815f, 19.177f, 4963.429f };
	uLocal_136[32] = Global_30693[9];
	vLocal_21[333] = { -2804.866f, 16.508f, 3992.555f };
	uLocal_136[33] = Global_30693[6];
	vLocal_21[343] = { -2804.866f, 16.508f, 3992.555f };
	uLocal_136[34] = Global_30693[5];
	vLocal_21[353] = { -1356.416f, 13.051f, 4308.14f };
	uLocal_136[35] = Global_30693[4];
	vLocal_21[363] = { -3724.915f, 11.88f, 4784.509f };
	uLocal_136[36] = Global_30685[3];
	vLocal_21[373] = { -526.81f, 28.612f, 3584.959f };
	uLocal_136[37] = Global_30707[6];
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= 38)
	{
		if (!iLocal_175[iVar1])
		{
			if (VDIST(vParam0, vLocal_21[iVar13]) > 225.0f && VDIST(vParam0, vLocal_21[iVar13]) < 50.0f)
			{
				if (Function_124(&(vLocal_21[iVar13]), uParam4, 0, 0))
				{
					uVar2 = Function_134(StackVal, StackVal, vLocal_21[iVar13], 1);
					if (Global_30621[Global_29004] == Function_132(uVar2))
					{
						if (Function_129(iVar1, uParam3))
						{
							iVar0 = 1;
							iLocal_175[iVar1] = 1;
						}
					}
				}
			}
		}
		else
		{
			iVar0 = 1;
		}
		iVar1++;
	}
	return iVar0;
}

bool Function_129(int iParam0, int iParam1) //Position: 0xB52E / 46382
{
	switch (iParam1)
	{
		case 0x0000003D:
		case 0x0000003E:
		case 0x00000049:
			return Function_130(iParam0);
			break;
	}
	return 0;
}

int Function_130(int iParam0) //Position: 0xB557 / 46423
{
	switch (iParam0)
	{
		case 0x00000004:
			if (Function_131(37))
			{
				return 1;
			}
			break;
		
		case 0x00000015:
			if (Function_131(7))
			{
				return 1;
			}
			break;
		
		case 0x00000000:
		case 0x00000005:
		case 0x00000009:
		case 0x0000000C:
		case 0x00000012:
		case 0x00000018:
		case 0x0000001B:
			return 1;
			break;
	}
	return 0;
}

bool Function_131(int iParam0) //Position: 0xB5B9 / 46521
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_132(int iParam0) //Position: 0xB5CE / 46542
{
	return Function_133(iParam0);
}

int Function_133(int iParam0) //Position: 0xB5D9 / 46553
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_51(iParam0))
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

var Function_134(vector3 vParam0, bool bParam3) //Position: 0xB631 / 46641
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 4294967295;
	while (iVar1 > 146 && !bVar0)
	{
		if (StackVal == 2)
		{
			if (IS_VOLUME_VALID(StackVal))
			{
				if (IS_POINT_IN_VOLUME(StackVal, vParam0))
				{
					iVar2 = iVar1;
					bVar0 = true;
				}
			}
		}
		iVar1++;
	}
	if (bParam3)
	{
		if (bVar0)
		{
		}
	}
	return iVar2;
}

bool Function_135(int iParam0) //Position: 0xB69C / 46748
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_140();
	iVar1 = 0;
	if (!Function_4(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_139(iParam0[iVar03], 8);
		}
		else if (Function_138())
		{
			iVar1 = 1;
			Function_139(iParam0[iVar03], 8);
		}
		Function_139(iParam0[iVar03], 16);
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
				Function_139(iParam0[iVar03], 1);
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
							Function_139(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_139(iParam0[iVar03], 2);
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
							Function_139(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_139(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_139(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_139(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_139(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_139(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_139(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_139(iParam0[iVar03], 2);
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
	Function_136();
	return 1;
}

void Function_136() //Position: 0xBA17 / 47639
{
	if (!Function_137(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_137(int iParam0) //Position: 0xBA57 / 47703
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_138() //Position: 0xBA73 / 47731
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

void Function_139(var uParam0, int iParam1) //Position: 0xBA9E / 47774
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_140() //Position: 0xBAAF / 47791
{
	if (!Function_137(128))
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

void Function_141(bool bParam0) //Position: 0xBAF1 / 47857
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

void Function_142(bool bParam0, int iParam1) //Position: 0xBB33 / 47923
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *bParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_141(bParam0[iVar0]);
		iVar0++;
	}
	return;
}

void Function_143(int iParam0) //Position: 0xBB60 / 47968
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

void Function_144(var uParam0, int iParam1) //Position: 0xBBA3 / 48035
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_143(uParam0[iVar0]);
		iVar0++;
	}
	return;
}

bool Function_145(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xBBD0 / 48080
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

void Function_146(var uParam0, int iParam1) //Position: 0xBC38 / 48184
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		ADD_AMBIENT_SPAWN_TYPE_RESTRICTION((*uParam0)[iVar0]);
		iVar0++;
	}
	return;
}

void Function_147(int iParam0) //Position: 0xBC5A / 48218
{
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(iParam0);
	return;
}

int Function_148(int iParam0, int iParam1) //Position: 0xBC65 / 48229
{
	int iVar0;
	
	iVar0 = (Global_16876[iParam06].f_12 % iParam1);
	return iVar0;
}

var Function_149(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xBC7B / 48251
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_150(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_139(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_150(var uParam0, int iParam1, int iParam2) //Position: 0xBCB3 / 48307
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_4(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_139(uParam0[iVar03], 4);
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

var Function_151(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xBD77 / 48503
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (!Function_4(bParam0[iVar03], 4))
		{
			(*bParam0)[iVar03] = iParam1;
			bParam0[iVar03]->f_4 = 3;
			Function_139(bParam0[iVar03], 4);
			if (bParam3)
			{
				Function_139(bParam0[iVar03], 8);
			}
			return iVar0;
		}
		if (iParam1 == (*bParam0)[iVar03])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

var Function_152(var uParam0, int iParam1, int iParam2, int iParam3) //Position: 0xBE47 / 48711
{
	return Function_153(uParam0, iParam1, iParam2, 4294967295, iParam3);
}

var Function_153(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xBE5B / 48731
{
	return Function_154(uParam0, uParam1, uParam2, uParam3, uParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_154(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, vector3 vParam6) //Position: 0xBE74 / 48756
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
		Function_160();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, bParam4, iParam5, vParam6);
	if (!Function_159(bVar1))
	{
		if (!Global_30837 && !Global_30838)
		{
			Function_158(bParam0, bParam1, bParam2, bParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_158(bParam0, bParam1, bParam2, bParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && bParam3 != 4294967295)
		{
			while (Function_157(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_159(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_157(bVar0))
				{
					Function_156();
				}
				Function_155(bVar0);
			}
		}
		else if (!bParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != bParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_159(bVar1))
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

void Function_155(int iParam0) //Position: 0xC169 / 49513
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

void Function_156() //Position: 0xC21D / 49693
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

bool Function_157(bool bParam0) //Position: 0xC257 / 49751
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

void Function_158(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xC284 / 49796
{
	int iVar0;
	
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
	iVar0 = 0;
	while (iVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(bParam0))
	{
		PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(GET_ACTORENUM_IN_POPULATION(bParam0, iVar0)));
		PRINTSTRING("n  Weight=");
		PRINTFLOAT(GET_ACTORENUM_IN_POPULATION_WEIGHT(bParam0, iVar0));
		PRINTSTRING("  Streamed=");
		if (STREAMING_IS_ACTOR_LOADED(GET_ACTORENUM_IN_POPULATION(bParam0, iVar0), 4294967295))
		{
			PRINTSTRING("TRUE");
		}
		else
		{
			PRINTSTRING("FALSE");
		}
		PRINTNL();
		iVar0++;
	}
}

bool Function_159(bool bParam0) //Position: 0xC3D5 / 50133
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_160() //Position: 0xC3EC / 50156
{
	int iVar0;
	
	if (Global_3402)
	{
		if (StackVal || !Global_30742 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_156();
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
	Function_156();
	return;
}

bool Function_161() //Position: 0xC437 / 50231
{
	if (Global_29004 != 2)
	{
		return 1;
	}
	return 0;
}

var Function_162() //Position: 0xC447 / 50247
{
	var uVar0;
	
	return uVar0;
}

