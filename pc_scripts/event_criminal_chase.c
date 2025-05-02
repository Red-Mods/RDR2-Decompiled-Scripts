//Decompiled with MagicRDR v1.0
//Function Count : 214
//Statics Count : 166
//Natives Count : 348
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
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	bool bLocal_48 = false;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	int iLocal_57 = 0;
	bool bLocal_58 = false;
	var uLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	var uLocal_62 = 0;
	bool bLocal_63 = false;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	bool bLocal_66 = false;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	var uLocal_72[2] = { 0, 0 };
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	bool bLocal_86 = false;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	var uLocal_90 = 0;
	int iLocal_91[2] = { 0, 0 };
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	bool bLocal_103 = false;
	struct<65> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	var uVar13;
	struct<2> Var14;
	struct<2> Var16;
	var uVar19;
	int iVar21;
	var uVar22[2];
	int iVar31;
	int iVar32;
	struct<8> Var33;
	bool bVar41;
	int iVar42;
	int iVar43;
	var uVar44;
	float fVar45;
	var uVar46;
	int iVar47;
	var uVar48;
	int iVar69[3];
	int iVar73;
	bool bVar74;
	
	iLocal_18 = 0;
	iLocal_19 = 0;
	iLocal_40 = 0;
	iLocal_47 = 0;
	bLocal_48 = false;
	iLocal_57 = 0;
	iLocal_60 = 0;
	iLocal_61 = 0;
	bLocal_63 = false;
	iLocal_64 = 0;
	iLocal_65 = 0;
	bLocal_66 = false;
	iLocal_70 = 4294967295;
	iLocal_71 = 0;
	iLocal_83 = 0;
	bLocal_86 = false;
	iLocal_88 = 0;
	iLocal_89 = 0;
	Function_213(&uLocal_43, 0.0f);
	iVar1 = 600;
	iVar5 = 0;
	iVar8 = 4294967295;
	iVar9 = 0;
	iVar11 = 0;
	bVar12 = false;
	Var14 = 0,1f;
	iVar31 = 0;
	iVar32 = 0;
	bVar41 = false;
	iVar42 = 0;
	iVar43 = 0;
	fVar45 = 0.0f;
	uVar48 = 10;
	if (!IS_POPSET_VALID(&(Global_46972[2])))
	{
		iVar5 = 5;
	}
	else
	{
		switch (Global_43787)
		{
			case 0x00000000:
				iVar0 = Function_212(5, 2);
				if (iVar0 == 0)
				{
					iVar69[0] = 403;
				}
				else
				{
					iVar69[0] = 402;
				}
				iVar0 = Function_212(5, 2);
				if (iVar0 == 0)
				{
					iVar69[1] = 429;
					iVar69[2] = 430;
				}
				else
				{
					iVar69[1] = 429;
					iVar69[2] = 430;
				}
				break;
			
			case 0x00000001:
				iVar0 = Function_212(5, 2);
				if (iVar0 == 0)
				{
					iVar69[0] = 414;
				}
				else
				{
					iVar69[0] = 413;
				}
				iVar0 = Function_212(5, 2);
				if (iVar0 == 0)
				{
					iVar69[1] = 459;
					iVar69[2] = 429;
				}
				else
				{
					iVar69[1] = 460;
					iVar69[2] = 430;
				}
				break;
			
			case 0x00000002:
				iVar0 = Function_212(5, 2);
				if (iVar0 == 0)
				{
					iVar69[0] = 401;
				}
				else
				{
					iVar69[0] = 405;
				}
				iVar0 = Function_212(5, 2);
				if (iVar0 == 0)
				{
					iVar69[1] = 427;
					iVar69[2] = 424;
				}
				else
				{
					iVar69[1] = 424;
					iVar69[2] = 427;
				}
				break;
		}
		Function_210(&uVar48, "thanks", 5, 0);
		Function_210(&uVar48, "custom/thanks", 8, 0);
		Function_210(&uVar48, "spit_to_duel", 5, 0);
		Function_210(&uVar48, "custom/spit_to_duel", 8, 0);
		Function_209(&uVar48, iVar69[0], 3, 0);
		Function_209(&uVar48, iVar69[1], 3, 0);
		Function_209(&uVar48, iVar69[2], 3, 0);
		Function_208(&iVar69, 3);
		uVar44 = CREATE_LAYOUT(Function_207());
		if (!IS_LAYOUTREF_VALID(&uVar44))
		{
			iVar5 = 5;
		}
		if (Global_6646)
		{
			iVar5 = 5;
		}
		RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
	}
	iVar73 = 0;
	bVar74 = false;
	while (!IS_EXITFLAG_SET())
	{
		iVar1 = 600;
		if (Function_206(&bVar74, &iVar5, &iVar73, &iVar1, bVar41))
		{
			if (bVar74)
			{
				Function_205(&uVar22, 4294967295);
				Function_204(&iVar21);
			}
			else
			{
				Function_203(&uVar22, 4294967295);
				Function_202(&iVar21);
			}
		}
		if (IS_ACTOR_VALID(&Global_54076))
		{
			uVar13 = GET_PLAYER_ACTOR(0);
			GET_POSITION(&uVar13, &Var16);
			switch (iVar5)
			{
				case 0x00000000:
					if (Function_196(&uVar48))
					{
						iVar5 = 1;
						iVar1 = 0;
					}
					break;
				
				case 0x00000001:
					if (Function_157(&ScriptParam_0, &iVar1, &iVar31, &iVar32, 1))
					{
						iVar5 = 2;
					}
					else if (iVar32 == 1)
					{
						iVar5 = 5;
					}
					break;
				
				case 0x00000002:
					Function_213(&uLocal_49, 0.0f);
					if (VDIST(Var16, *(&ScriptParam_0 + 16)) > Function_156())
					{
						iVar5 = 5;
						iVar1 = 0;
						break;
					}
					Var33 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_154("nchaseCrim") };
					iVar21 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, Vector(&Var33, &uVar44, StackVal) + Vector(Var14, *(&ScriptParam_0 + 16), iVar69[0]), *(&ScriptParam_0 + 28));
					uLocal_41 = CREATE_OBJECTSET_IN_LAYOUT("corpse", &uVar44, 4294967295, 1);
					DECOR_SET_OBJECT(&iVar21, "lootCorpse_objSet", GET_OBJECT_FROM_OBJECTSET(&uLocal_41));
					Var14 = (Var14 + 0,1f);
					DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar21);
					SET_ACTOR_CAN_PLAY_GESTURES(&iVar21, false);
					Var33 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_154("chaseLaw") };
					uVar22[0] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, Vector(&Var33, &uVar44, StackVal) + Vector(Var14, *(&ScriptParam_0 + 16), iVar69[1]), *(&ScriptParam_0 + 28));
					Var14 = (Var14 + 0,1f);
					AI_SET_ALLOW_ATTACK_HOGTIED_ACTORS(&(uVar22[0]), 1);
					SET_ACTOR_CAN_PLAY_GESTURES(&(uVar22[0]), false);
					Var33 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_154("chaseLaw") };
					uVar22[1] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, Vector(&Var33, &uVar44, StackVal) + Vector(Var14, *(&ScriptParam_0 + 16), iVar69[2]), *(&ScriptParam_0 + 28));
					AI_SET_ALLOW_ATTACK_HOGTIED_ACTORS(&(uVar22[1]), 1);
					SET_ACTOR_CAN_PLAY_GESTURES(&(uVar22[1]), false);
					DECOR_SET_BOOL(&iVar21, "criminal", 1);
					MEMORY_CONSIDER_AS(&(uVar22[0]), &(uVar22[1]), false);
					MEMORY_CONSIDER_AS(&(uVar22[1]), &(uVar22[0]), false);
					SET_ACTOR_ALLOW_BUMP_REACTIONS(&iVar21, 0);
					SET_ACTOR_ALLOW_BUMP_REACTIONS(&(uVar22[0]), 0);
					SET_ACTOR_ALLOW_BUMP_REACTIONS(&(uVar22[1]), 0);
					MEMORY_ALLOW_SHOOTING(&iVar21, 0);
					Function_153(&(uVar22[0]), 0);
					Function_153(&(uVar22[1]), 0);
					SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&(uVar22[0]), 0,7f);
					SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&(uVar22[1]), 0,7f);
					uVar19 = Vector(0.0f, 0.0f, 4,5f);
					COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&(uVar22[0]), 13, 1);
					COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&(uVar22[1]), 13, 1);
					TASK_FOLLOW_AND_ATTACK_OBJECT(&(uVar22[0]), &iVar21, &uVar19, 0, 0, 0, 0, 0, 1);
					TASK_FOLLOW_AND_ATTACK_OBJECT(&(uVar22[1]), &iVar21, &uVar19, 0, 0, 0, 0, 0, 1);
					AI_SPEECH_SET_ALLOW_FOR_ACTOR(&iVar21, 0);
					UNK_0x99AFD2D1(&iVar21, 1, 1);
					AI_SPEECH_SET_ALLOW_FOR_ACTOR(&(uVar22[0]), 0);
					UNK_0x99AFD2D1(&(uVar22[0]), 1, 1);
					if (!Function_146(ScriptParam_0.f_64, &iVar21, &iVar42, &iVar43, 0, 1, 1, 1))
					{
						iVar5 = 5;
						break;
					}
					Function_144(StackVal, &uVar6, &uVar7, &iVar8, 8.0f, *(&ScriptParam_0 + 16));
					Function_143(&iVar2, 1);
					Function_143(&iVar2, 16);
					Function_143(&iVar2, 2);
					Function_143(&uVar3, 16);
					Function_143(&uVar3, 1);
					iVar5 = 3;
					iVar1 = 0;
					break;
				
				case 0x00000003:
					Function_142();
					Function_140(StackVal, Function_142(), &bVar41, ScriptParam_0.f_64, &iVar21, 100, 0x42a00000, 1);
					Function_129(&uVar22, 2, &bVar41, ScriptParam_0.f_64, 100, 0x42a00000, 1);
					Function_128(iVar9, &iVar21, &uVar22);
					Function_126(&iVar21, &uVar22);
					if (!iLocal_65)
					{
						if (!Function_123(&uVar22, 2, Function_124(1)))
						{
							iVar5 = 5;
							iVar1 = 0;
							break;
						}
					}
					if (iLocal_65 && Function_119(&uLocal_49, 2.0f))
					{
						if (Function_116(&iVar21, &iVar10, &fVar45, uVar3, bVar12, 0x40400000))
						{
							Function_115(&iVar21);
							TASK_FLEE_ACTOR(&iVar21, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
							iVar5 = 5;
							iVar1 = 0;
							bVar12 = true;
							bLocal_66 = true;
							break;
						}
					}
					if (iVar47 == 0)
					{
						if (iLocal_64 && Function_119(&uLocal_49, 2.0f))
						{
							if (Function_114(&uVar22, 2, &iVar4, &iVar10, &fVar45, iVar2, bVar12, 0x40200000))
							{
								if (iVar10 != 4 || iVar10 != 2)
								{
									Function_102(&(uVar22[iVar4]));
								}
								iVar0 = 0;
								while (iVar0 <= 2)
								{
									if (Function_98(&(uVar22[iVar0]), 0))
									{
										Function_115(&(uVar22[iVar0]));
									}
									iVar0++;
								}
								iVar47 = 1;
							}
						}
					}
					if (IS_ACTOR_VALID(&(uVar22[0])) && iVar9 > 6)
					{
						if (GET_LAST_ATTACKER(&(uVar22[0])) != &Global_54076 || Function_114(&uVar22, 2, &iVar4, &iVar10, &fVar45, iVar2, bVar12, 0x40200000))
						{
							if (iVar10 != 4 || iVar10 != 2)
							{
								Function_102(&(uVar22[iVar4]));
							}
							iVar9 = 6;
							iVar42 = 1;
						}
					}
					if (IS_ACTOR_VALID(&(uVar22[1])) && iVar9 > 6)
					{
						if (GET_LAST_ATTACKER(&(uVar22[1])) != &Global_54076 || Function_114(&uVar22, 2, &iVar4, &iVar10, &fVar45, iVar2, bVar12, 0x40200000))
						{
							if (iVar10 != 4 || iVar10 != 2)
							{
								Function_102(&(uVar22[iVar4]));
							}
							iVar9 = 6;
							iVar42 = 1;
						}
					}
					if (iVar42 == 0)
					{
						if (iVar9 >= 0)
						{
							iVar42 = 1;
						}
					}
					Function_97(&iVar21, &uVar22, &iVar2);
					if (IS_ACTOR_VALID(&iVar21))
					{
						if ((GET_LAST_ATTACKER(&iVar21) != &Global_54076 || IS_ACTOR_HOGTIED(&iVar21)) || Function_95(&iVar21, &uVar46))
						{
							iVar42 = 1;
							bLocal_48 = true;
						}
					}
					if (Function_27(&iVar9, &iVar21, &uVar22, &uVar44, &iVar1))
					{
						iVar5 = 5;
						break;
					}
					if (!Function_146(ScriptParam_0.f_64, &iVar21, &iVar42, &iVar43, 0, 1, 1, 0))
					{
						iVar5 = 5;
						break;
					}
					break;
				
				case 0x00000005:
					iVar5 = 6;
					break;
				
				case 0x00000006:
					TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
					iVar1 = 0;
					break;
				}
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(iVar1);
		}
	}
	Function_203(&uVar22, 4294967295);
	Function_202(&iVar21);
	Function_26(&uVar6, &uVar7, &iVar8);
	Function_25(&iVar69, 3);
	if (bLocal_86)
	{
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	}
	if (ScriptParam_0.f_40)
	{
		Global_6642 = 0;
	}
	if (bLocal_66 == 0)
	{
		if (IS_ACTOR_VALID(&(uVar22[0])))
		{
			TASK_PRIORITY_SET(&(uVar22[0]), 2);
		}
		if (IS_ACTOR_VALID(&(uVar22[1])))
		{
			TASK_PRIORITY_SET(&(uVar22[1]), 2);
		}
		if (IS_ACTOR_VALID(&iVar21))
		{
			TASK_PRIORITY_SET(&iVar21, 2);
		}
	}
	if (IS_ACTOR_VALID(&(uVar22[0])))
	{
		AI_GOAL_LOOK_CLEAR(&(uVar22[0]));
	}
	if (IS_ACTOR_VALID(&(uVar22[1])))
	{
		AI_GOAL_LOOK_CLEAR(&(uVar22[1]));
	}
	if (IS_ACTOR_VALID(&iVar21))
	{
		AI_GOAL_LOOK_CLEAR(&iVar21);
	}
	if (!bVar41)
	{
		Function_24(&iVar21);
		Function_23(&uVar22, 4294967295);
		Function_17(ScriptParam_0.f_64, 0.0f, 0, 1, 0);
		if (IS_OBJECT_VALID(&uVar44))
		{
			UNK_0xA936E73B(&uVar44, 1);
			MARK_OBJECT_FOR_AGGRESSIVE_CLEANUP(&uVar44, 1);
		}
	}
	else
	{
		if (Function_98(&(uVar22[0]), 0))
		{
			if (Function_98(&(uVar22[1]), 0))
			{
				MEMORY_CONSIDER_AS(&(uVar22[0]), &(uVar22[1]), false);
				MEMORY_CONSIDER_AS(&(uVar22[1]), &(uVar22[0]), false);
			}
		}
		if (Function_98(&(uVar22[0]), 0) && !bLocal_66)
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&(uVar22[0]), 13, 0);
			if (!Function_16(&(uVar22[0])))
			{
				MEMORY_CLEAR_ALL(&(uVar22[0]));
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(&(uVar22[0]), 1);
				UNK_0x99AFD2D1(&(uVar22[0]), 0, 0);
				if (Function_15(&(uVar22[0])) == 0)
				{
					Function_6(&(uVar22[0]), 4, 0, 1);
				}
			}
		}
		if (Function_98(&(uVar22[1]), 0) && !bLocal_66)
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&(uVar22[1]), 13, 0);
			if (!Function_16(&(uVar22[1])))
			{
				MEMORY_CLEAR_ALL(&(uVar22[1]));
				if (Function_15(&(uVar22[1])) == 0)
				{
					Function_6(&(uVar22[1]), 4, 0, 1);
				}
			}
		}
		if (Function_98(&iVar21, 0))
		{
			MEMORY_ALLOW_SHOOTING(&iVar21, 1);
		}
		if (Function_98(&iVar21, 0) && !bLocal_66)
		{
			MEMORY_ALLOW_SHOOTING(&iVar21, 1);
			AI_SPEECH_SET_ALLOW_FOR_ACTOR(&iVar21, 1);
			UNK_0x99AFD2D1(&iVar21, 0, 0);
			if (Function_15(&iVar21) == 0)
			{
				Function_6(&iVar21, 2, 0, 2);
			}
		}
	}
	Function_5(0x2000000);
	if (IS_BLIP_VALID(&(uLocal_72[0])))
	{
		REMOVE_BLIP(&(uLocal_72[0]));
	}
	if (IS_BLIP_VALID(&(uLocal_72[1])))
	{
		REMOVE_BLIP(&(uLocal_72[1]));
	}
	Function_1(&uVar48);
	RELEASE_LAYOUT_REF(&uVar44);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0xA4B / 2635
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

void Function_2(struct<2>[] Param0, int iParam1) //Position: 0xA73 / 2675
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

void Function_3(struct<13> Param0) //Position: 0xBBE / 3006
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_4(struct<13> Param0) //Position: 0xBDB / 3035
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(int iParam0) //Position: 0xBF9 / 3065
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

int Function_6(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0xC0C / 3084
{
	bool bVar0;
	var uVar1;
	
	if (&iParam1 == 5)
	{
		LOG_ERROR("Please Use RELEASE_ACTOR_TO_ACTORROAM_GRINGO");
		LOG_ERROR("Switching to ACTORROAM_BEHAVIOR_DEFAULT for this actor");
		iParam1 = 0;
	}
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (!IS_ACTOR_VEHICLE(&iParam0))
		{
			SQUAD_LEAVE(&iParam0);
		}
		else
		{
			bVar0 = false;
			while (bVar0 < (GET_NUM_DRAFT_POSITIONS(&iParam0) - 1))
			{
				uVar1 = GET_DRAFT_ACTOR(bVar0, &iParam0);
				if (IS_ACTOR_VALID(&uVar1))
				{
					Function_7(&uVar1, 0, 0, 0, 1);
				}
				bVar0++;
			}
		}
		Function_7(&iParam0, &iParam1, &iParam2, &iParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_7(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4) //Position: 0xCFA / 3322
{
	char* cVar0[32];
	
	Function_14();
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
	if (Function_13(&uParam0) == 1)
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
	Function_12(&uParam0, 0);
	Function_11(&uParam0, iParam1);
	Function_10(&uParam0, &uParam2);
	Function_9(&uParam0, uParam3);
	if (Function_8(&uParam0) != 5)
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

int Function_8(int iParam0) //Position: 0xF66 / 3942
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_behavior");
}

void Function_9(var uParam0, bool bParam1) //Position: 0xF8A / 3978
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_10(var uParam0, int iParam1) //Position: 0xFAE / 4014
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_target", &iParam1);
	return;
}

void Function_11(var uParam0, bool bParam1) //Position: 0xFD4 / 4052
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_12(var uParam0, bool bParam1) //Position: 0xFFB / 4091
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_state", bParam1);
	return;
}

int Function_13(bool bParam0) //Position: 0x101F / 4127
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(&bParam0), "actorRoam_ref");
}

void Function_14() //Position: 0x103E / 4158
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

bool Function_15(int iParam0) //Position: 0x108D / 4237
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return 0;
	}
	if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(&iParam0), &Global_26172))
	{
		return 1;
	}
	return 0;
}

bool Function_16(int iParam0) //Position: 0x10B5 / 4277
{
	return DECOR_CHECK_EXIST(&iParam0, "nsharedlaw");
}

bool Function_17(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x10CD / 4301
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
		Function_19("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
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
			Function_18(&bVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_18(&bVar0);
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
			Function_18(&bVar0);
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

void Function_18(bool bParam0) //Position: 0x1339 / 4921
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

void Function_19(var uParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1383 / 4995
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_20(Global_10966) };
		}
		PRINT_SMALL_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &Var0, &iParam5);
	}
	else
	{
		uVar4 = "";
		PRINT_SMALL_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &uVar4, &iParam5);
	}
}

struct<16> Function_20(int iParam0) //Position: 0x1408 / 5128
{
	char* cVar0[16];
	
	if (!Function_21())
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

bool Function_21() //Position: 0x1447 / 5191
{
	if (Function_22(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_22(int iParam0, int iParam1) //Position: 0x1462 / 5218
{
	return (iParam0 && iParam1) == 0;
}

void Function_23(var[] uParam0, int iParam1) //Position: 0x146F / 5231
{
	int iVar0;
	
	if (&iParam1 == 4294967295)
	{
		iParam1 = uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= &iParam1)
	{
		Function_24(&(uParam0[iVar0]));
		iVar0++;
	}
	return;
}

void Function_24(int iParam0) //Position: 0x14A1 / 5281
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		RESET_ANIM_SET_FOR_ACTOR(&iParam0, 0);
		TASK_FLEE_ACTOR(&iParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
		TASK_PRIORITY_SET(&iParam0, false);
	}
	return;
}

void Function_25(var[] uParam0, int iParam1) //Position: 0x14D1 / 5329
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(uParam0[iVar0]);
		iVar0++;
	}
	return;
}

void Function_26(var uParam0, var uParam1, int iParam2) //Position: 0x14F4 / 5364
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

bool Function_27(var uParam0, int iParam1, var[] uParam2, var uParam4) //Position: 0x1527 / 5415
{
	int iVar0;
	
	iVar0 = 4294967295;
	switch (uParam0)
	{
		case 0x00000000:
			if (Function_94(&iParam1, &Global_54076, &iLocal_57, &uParam3, 60.0f, &bLocal_63, &bLocal_58, &uLocal_43, &iLocal_47, 35.0f, 0, 3, 3231711232, 0, 0, 0))
			{
				if (bLocal_63)
				{
					Function_91();
					Function_90(5);
					Function_213(&uLocal_43, 0.0f);
					if (Function_98(&(uParam2[0]), 0))
					{
						TASK_FLEE_ACTOR(&iParam1, &(uParam2[0]), -1.0f, -1.0f, 1, 0, 0);
					}
					else if (Function_98(&(uParam2[1]), 0))
					{
						TASK_FLEE_ACTOR(&iParam1, &(uParam2[1]), -1.0f, -1.0f, 1, 0, 0);
					}
					TASK_PRIORITY_SET(&iParam1, true);
					uParam0 = 1;
				}
			}
			else
			{
				uParam0 = 2;
			}
			break;
		
		case 0x00000001:
			uParam4 = 0;
			if (Function_98(&iParam1, 0))
			{
				if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &iParam1, 1.0f, 30.0f, 1, 0, 0))
				{
					Function_213(&uLocal_49, 0.0f);
					Function_213(&uLocal_53, 0.0f);
					Function_89(&iParam1, &(uParam2[0]), "criminalChaseMsg01", "criminalChaseMsg01", 5, 60, 1, 1);
					uParam0 = 2;
				}
			}
			else
			{
				uParam0 = 2;
			}
			break;
		
		case 0x00000002:
			Function_88(0x2000000);
			uParam4 = 0;
			uParam0 = 3;
			break;
		
		case 0x00000003:
			uParam4 = 0;
			if (Function_87(&iParam1))
			{
				if (Function_85(&uLocal_53, 8.0f) || bLocal_48 != 1)
				{
					if (IS_ACTOR_VALID(&(uParam2[0])))
					{
						COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&(uParam2[0]), 13, 0);
					}
					if (IS_ACTOR_VALID(&(uParam2[1])))
					{
						COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&(uParam2[1]), 13, 0);
					}
				}
			}
			else
			{
				Function_213(&uLocal_53, 0.0f);
			}
			if (!Function_98(&iParam1, 0))
			{
				Function_5(0x2000000);
				Function_83(&iLocal_87, 3, 0, 4294967295, 4294967295);
				if (bLocal_48)
				{
					if (!Function_82(0))
					{
						if (GET_OBJECTSET_SIZE(&uLocal_41) == 0 || iLocal_83)
						{
							if (!iLocal_83)
							{
								if (IS_OBJECT_VALID(GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uLocal_41)))
								{
									uLocal_84 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uLocal_41);
								}
								iLocal_83 = 1;
							}
							if (Function_98(&(uParam2[0]), 0))
							{
								if (!iLocal_64)
								{
									Function_213(&uLocal_49, 0.0f);
									MEMORY_CLEAR_EVENTS(&(uParam2[0]), 0);
									MEMORY_CONSIDER_AS(&(uParam2[0]), &Global_54076, 5);
								}
								iVar0 = 0;
							}
							if (Function_98(&(uParam2[1]), 0))
							{
								if (!iLocal_64)
								{
									MEMORY_CLEAR_EVENTS(&(uParam2[1]), 0);
									MEMORY_CONSIDER_AS(&(uParam2[1]), &Global_54076, 5);
									if (iVar0 == 0)
									{
										Function_142();
										Function_80(StackVal, &(uParam2[1]), Function_142(), &(uParam2[0]));
										iLocal_70 = 1;
									}
									else
									{
										Function_213(&uLocal_49, 0.0f);
										iVar0 = 1;
									}
								}
							}
							iLocal_64 = 1;
							if (iVar0 >= 4294967295)
							{
								if (Function_98(&(uParam2[0]), 0))
								{
									AI_SET_ENABLE_DEAD_BODY_REACTIONS(&(uParam2[0]), 0);
									MEMORY_CLEAR_EVENTS(&(uParam2[0]), 1);
									MEMORY_CONSIDER_AS(&(uParam2[0]), &Global_54076, 5);
								}
								if (Function_98(&(uParam2[1]), 0))
								{
									AI_SET_ENABLE_DEAD_BODY_REACTIONS(&(uParam2[1]), 0);
									MEMORY_CLEAR_EVENTS(&(uParam2[1]), 1);
									MEMORY_CONSIDER_AS(&(uParam2[1]), &Global_54076, 5);
								}
								Function_142();
								Function_80(StackVal, &(uParam2[1]), Function_142(), &(uParam2[0]));
								if (Function_79(&(uParam2[0]), &Global_54076, &uLocal_62, &iLocal_60, &uLocal_49, &uParam3, 35.0f, &iLocal_61, &bLocal_58, &uParam4, "thanks", "thanks", "criminalChaseMsg02", "criminalChaseMsg02", 25.0f, 2, -5.0f, 0, 4.0f, 0, "criminalChasePlayerMsg04", 0, 1, 0, 0x40800000))
								{
									if (iLocal_61 == 1)
									{
										Function_74(100, 1, 0);
										Function_35(50, 1, 0);
										if (Function_98(&(uParam2[0]), 0))
										{
											MEMORY_CLEAR_EVENTS(&(uParam2[0]), 1);
											MEMORY_CONSIDER_AS(&(uParam2[0]), &Global_54076, 5);
										}
										if (Function_98(&(uParam2[1]), 0) && iLocal_70 == 1)
										{
											MEMORY_CLEAR_EVENTS(&(uParam2[1]), 1);
											MEMORY_CONSIDER_AS(&(uParam2[1]), &Global_54076, 5);
										}
										uParam0 = 4;
									}
								}
								else
								{
									if (Function_98(&(uParam2[0]), 0))
									{
										if (Function_15(&(uParam2[0])) == 0)
										{
											Function_6(&(uParam2[0]), 4, 0, 1);
										}
										bLocal_66 = true;
									}
									if (Function_98(&(uParam2[1]), 0) && iLocal_70 == 1)
									{
										if (Function_15(&(uParam2[1])) == 0)
										{
											Function_6(&(uParam2[1]), 4, 0, 1);
										}
										bLocal_66 = true;
									}
									return 1;
								}
							}
							return 1;
						}
					}
					bLocal_48 = false;
					return 1;
				}
				if (!Function_82(0))
				{
					if (GET_OBJECTSET_SIZE(&uLocal_41) == 0 || iLocal_83)
					{
						if (!iLocal_83)
						{
							if (IS_OBJECT_VALID(GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uLocal_41)))
							{
								uLocal_84 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uLocal_41);
							}
							iLocal_83 = 1;
						}
						if (Function_98(&(uParam2[1]), 0))
						{
							MEMORY_CLEAR_EVENTS(&(uParam2[1]), 1);
							if (Function_98(&(uParam2[0]), 0))
							{
								Function_142();
								Function_80(StackVal, &(uParam2[1]), Function_142(), &(uParam2[0]));
								if (Function_15(&(uParam2[0])) == 0)
								{
									Function_6(&(uParam2[0]), 4, 0, 1);
								}
								TASK_PRIORITY_SET(&(uParam2[0]), false);
								uParam0 = 4;
								break;
							}
							else
							{
								if (Function_15(&(uParam2[1])) == 0)
								{
									Function_6(&(uParam2[1]), 4, 0, 1);
								}
								bLocal_66 = true;
							}
						}
						else if (Function_98(&(uParam2[0]), 0))
						{
							if (Function_15(&(uParam2[0])) == 0)
							{
								Function_6(&(uParam2[0]), 4, 0, 1);
							}
							bLocal_66 = true;
						}
						return 1;
					}
				}
				return 1;
			}
			break;
		
		case 0x00000004:
			if (IS_ACTOR_VALID(&(uParam2[0])))
			{
				AI_GOAL_LOOK_CLEAR(&(uParam2[0]));
			}
			if (IS_ACTOR_VALID(&(uParam2[1])))
			{
				AI_GOAL_LOOK_CLEAR(&(uParam2[1]));
			}
			if (IS_ACTOR_VALID(&iParam1))
			{
				AI_GOAL_LOOK_CLEAR(&iParam1);
			}
			if (!Function_98(&(uParam2[1]), 0))
			{
				if (Function_98(&(uParam2[0]), 0))
				{
					MEMORY_CLEAR_EVENTS(&(uParam2[0]), 1);
					MEMORY_CONSIDER_AS(&(uParam2[0]), &Global_54076, 5);
					TASK_PRIORITY_SET(&(uParam2[0]), 2);
					if (Function_15(&(uParam2[0])) == 0)
					{
						Function_6(&(uParam2[0]), 4, 0, 1);
					}
					bLocal_66 = true;
				}
				return 1;
			}
			if (iLocal_82 == 0)
			{
				if (GET_NTH_TASK_STATUS(&(uParam2[1]), 1) == 0)
				{
					Function_213(&uLocal_78, 0.0f);
					iLocal_82 = 1;
				}
			}
			if (GET_NTH_TASK_STATUS(&(uParam2[1]), 2) != 0 || Function_119(&uLocal_78, 15.0f))
			{
				if (Function_98(&(uParam2[0]), 0))
				{
					MEMORY_CLEAR_EVENTS(&(uParam2[0]), 1);
					AI_GOAL_LOOK_CLEAR(&(uParam2[0]));
					MEMORY_CONSIDER_AS(&(uParam2[0]), &Global_54076, 5);
					TASK_PRIORITY_SET(&(uParam2[0]), 2);
					if (Function_15(&(uParam2[0])) == 0)
					{
						Function_6(&(uParam2[0]), 4, 0, 1);
					}
					bLocal_66 = true;
				}
				if (Function_98(&(uParam2[1]), 0))
				{
					AI_GOAL_LOOK_CLEAR(&(uParam2[1]));
					MEMORY_CLEAR_EVENTS(&(uParam2[1]), 1);
					MEMORY_CONSIDER_AS(&(uParam2[1]), &Global_54076, 5);
					TASK_PRIORITY_SET(&(uParam2[1]), 2);
					bLocal_66 = true;
				}
				return 1;
			}
			break;
		
		case 0x00000006:
			Function_33(&uParam2, &iParam1);
			if (!bLocal_48)
			{
				if (!Function_32(&iParam1, &uParam2))
				{
					if (!IS_ACTOR_VALID(&iParam1))
					{
						return 1;
					}
					if (Function_30(&iParam1, &uParam2))
					{
						Function_83(&iLocal_87, 3, 0, 4294967295, 4294967295);
						uParam0 = 8;
					}
				}
				else
				{
					return 1;
				}
			}
			if (Function_98(&iParam1, 0))
			{
				TASK_KILL_CHAR(&iParam1, &Global_54076);
				return 1;
			}
			if (Function_98(&(uParam2[0]), 0))
			{
				TASK_CLEAR(&(uParam2[0]));
				ACTOR_END_FORCE_HOLSTER(&(uParam2[0]));
				RESET_ANIM_SET_FOR_ACTOR(&(uParam2[0]), 0);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&(uParam2[0]), 13, 0);
				Function_29(&(uParam2[0]), &Global_54076);
			}
			if (Function_98(&(uParam2[1]), 0))
			{
				TASK_CLEAR(&(uParam2[1]));
				ACTOR_END_FORCE_HOLSTER(&(uParam2[1]));
				RESET_ANIM_SET_FOR_ACTOR(&(uParam2[1]), 0);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&(uParam2[1]), 13, 0);
				Function_29(&(uParam2[1]), &Global_54076);
			}
			bLocal_66 = true;
			return 1;
			break;
		
		case 0x00000007:
			break;
		
		case 0x00000008:
			iLocal_65 = 1;
			if (IS_ACTOR_VALID(&iParam1))
			{
				if (Function_28(&Global_54076, &iParam1) > 100.0f)
				{
					if (Function_79(&iParam1, &Global_54076, &uLocal_62, &iLocal_60, &uLocal_49, &uParam3, 20.0f, &iLocal_61, &bLocal_58, &uParam4, "thanks", "thanks", "criminalChaseMsg03", "criminalChaseMsg03", 30.0f, 2, -5.0f, 0, 4.0f, 0, "criminalChasePlayerMsg03", 0, 1, 0, 0x40800000))
					{
						if (iLocal_61 == 1)
						{
							AI_GOAL_LOOK_CLEAR(&iParam1);
							MEMORY_CLEAR_EVENTS(&iParam1, 1);
							MEMORY_CONSIDER_AS(&iParam1, &Global_54076, 5);
							Function_35(50, 1, 0);
							if (Function_15(&iParam1) == 0)
							{
								Function_6(&iParam1, 2, 0, 2);
							}
							bLocal_66 = true;
							return 1;
						}
					}
					if (Function_15(&iParam1) == 0)
					{
						Function_6(&iParam1, 2, 0, 2);
					}
					bLocal_66 = true;
					return 1;
				}
				return 1;
			}
			return 1;
			break;
	}
	return 0;
}

float Function_28(int iParam0, int iParam1) //Position: 0x1E75 / 7797
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

int Function_29(var uParam0, int iParam1) //Position: 0x1F6A / 8042
{
	if (IS_ACTOR_HUMAN(&uParam0))
	{
		if (GET_NUM_WEAPONS_IN_INVENTORY(&uParam0) == 0)
		{
			TASK_FLEE_ACTOR(&uParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
			TASK_PRIORITY_SET(&uParam0, false);
			return 1;
		}
	}
	if (!IS_ACTOR_VALID(&uParam0))
	{
		LOG_ERROR("Killer is invalid in TASK_KILL_ACTOR_RUTHLESS");
		return 0;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		LOG_ERROR("VICTIM is invalid in TASK_KILL_ACTOR_RUTHLESS");
		return 0;
	}
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 31, -1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 37, 2.0f);
	MEMORY_ALLOW_TAKE_COVER(&uParam0, 0);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(&uParam0, 0);
	MEMORY_REPORT_POSITION_AUTO(&uParam0, &iParam1, 1);
	TASK_KILL_CHAR(&uParam0, &iParam1);
	TASK_PRIORITY_SET(&uParam0, true);
	return 1;
}

bool Function_30(int iParam0, int[] iParam1) //Position: 0x2060 / 8288
{
	int iVar0;
	
	if (!Function_98(&(iParam1[0]), 1))
	{
		if (!Function_98(&(iParam1[1]), 1))
		{
			iLocal_89 = 3;
		}
	}
	switch (iLocal_89)
	{
		case 0x00000000:
			if (Function_31(&iParam1, &uLocal_90))
			{
				iLocal_89 = 1;
			}
			if (GET_LAST_ATTACKER(&(iParam1[0])) == &Global_54076)
			{
			}
			if (GET_LAST_ATTACKER(&(iParam1[1])) == &Global_54076)
			{
			}
			break;
		
		case 0x00000001:
			iVar0 = AI_PREDICATE_FIND_NAMED("Disarmed", 0);
			if (AI_PREDICATE_IS_VALID(&iVar0))
			{
				SET_ACTOR_MAX_SPEED(&iParam0, 2);
				TASK_PRIORITY_SET(&iParam0, true);
				AI_PREDICATE_OVERRIDE_SET_BOOL(&iParam0, &iVar0, 1);
				iLocal_89 = 2;
			}
			break;
		
		case 0x00000002:
			iLocal_89 = 3;
			break;
		
		case 0x00000003:
			if (Function_98(&(iParam1[0]), 1))
			{
				if (GET_NUM_WEAPONS_IN_INVENTORY(&iParam0) >= 0)
				{
					MEMORY_ALLOW_SHOOTING(&iParam0, 1);
					TASK_KILL_CHAR(&iParam0, &(iParam1[0]));
				}
			}
			else if (Function_98(&(iParam1[1]), 1))
			{
				if (GET_NUM_WEAPONS_IN_INVENTORY(&iParam0) >= 0)
				{
					MEMORY_ALLOW_SHOOTING(&iParam0, 1);
					TASK_KILL_CHAR(&iParam0, &(iParam1[1]));
				}
			}
			else if (Function_98(&iParam0, 0))
			{
				MEMORY_CLEAR_EVENTS(&iParam0, 0);
				MEMORY_CONSIDER_AS(&iParam0, &Global_54076, 5);
				iLocal_65 = 0;
				Function_213(&uLocal_49, 0.0f);
				return 1;
			}
			iLocal_89 = 4;
			break;
		
		case 0x00000004:
			break;
	}
	return 0;
}

bool Function_31(int[] iParam0) //Position: 0x21B0 / 8624
{
	if (!IS_ACTOR_VALID(&(iParam0[0])))
	{
		iParam1 = 0;
		return 1;
	}
	if (!IS_ACTOR_VALID(&(iParam0[1])))
	{
		iParam1 = 1;
		return 1;
	}
	return 0;
}

bool Function_32(int iParam0, int[] iParam1) //Position: 0x21E1 / 8673
{
	if (Function_98(&iParam0, 0))
	{
		return 0;
	}
	if (Function_98(&(iParam1[0]), 0))
	{
		return 0;
	}
	if (Function_98(&(iParam1[1]), 0))
	{
		return 0;
	}
	return 1;
}

void Function_33(var[] uParam0) //Position: 0x2214 / 8724
{
	if (iLocal_91[0] == 0)
	{
		if (Function_98(&(uParam0[0]), 0))
		{
			if (Function_98(&iParam1, 0))
			{
				Function_34(&(uParam0[0]), &iParam1, 2, 0);
				AI_DONT_HARM_ACTOR(&iParam1);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&(uParam0[0]), 13, 0);
				Function_29(&(uParam0[0]), &Global_54076);
				iLocal_91[0] = 1;
			}
		}
	}
	if (iLocal_91[1] == 0)
	{
		if (Function_98(&(uParam0[1]), 0))
		{
			if (Function_98(&iParam1, 0))
			{
				Function_34(&(uParam0[1]), &iParam1, 2, 0);
				AI_DONT_HARM_ACTOR(&iParam1);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&(uParam0[1]), 13, 0);
				Function_29(&(uParam0[1]), &Global_54076);
				iLocal_91[1] = 1;
			}
		}
	}
	return;
}

int Function_34(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x22CA / 8906
{
	if (IS_ACTOR_VALID(&iParam0) && IS_ACTOR_VALID(&iParam1))
	{
		if (!&iParam0 != GET_PLAYER_ACTOR(0))
		{
			MEMORY_CONSIDER_AS(&iParam0, &iParam1, bParam2);
			MEMORY_IDENTIFY(&iParam0, &iParam1);
		}
		if (&iParam3 == 1)
		{
			if (!&iParam1 != GET_PLAYER_ACTOR(0))
			{
				MEMORY_CONSIDER_AS(&iParam1, &iParam0, bParam2);
				MEMORY_IDENTIFY(&iParam1, &iParam0);
			}
		}
	}
	return 1;
}

void Function_35(int iParam0, bool bParam1, bool bParam2) //Position: 0x232A / 9002
{
	int iVar0;
	bool bVar1;
	
	if (Function_73(0) && (!Global_6623 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_72())
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
	iVar0 = Function_71(3);
	Function_68();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (&bParam1)
	{
		Function_66(3, bVar1);
		if (!&bParam2)
		{
			if (!Function_65(Global_119936, 4))
			{
				Function_59(&Global_54076, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_45(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_44(3));
	iVar0 = Function_71(3);
	switch (Global_21369.f_248)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_21369.f_248 = 1;
				Function_37(4, Function_43(Global_21369.f_248), 1);
				Function_36(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_21369.f_248 = 2;
				Function_37(4, Function_43(Global_21369.f_248), 1);
				Function_36(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_21369.f_248 = 3;
				Function_37(4, Function_43(Global_21369.f_248), 1);
				Function_36(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_21369.f_248 = 4;
				Function_37(4, Function_43(Global_21369.f_248), 1);
				Function_36(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_21369.f_248 = 5;
				Function_37(4, Function_43(Global_21369.f_248), 1);
				Function_36(Global_21369.f_244, Global_21369.f_248);
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

void Function_36(int iParam0, int iParam1) //Position: 0x24FE / 9470
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

int Function_37(int iParam0, char* cParam1) //Position: 0x2768 / 10088
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
	Function_41(iParam0, &cParam1, 0, 1);
	iVar1 = Function_38();
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

int Function_38() //Position: 0x28F8 / 10488
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
	Function_39();
	return 0;
}

void Function_39() //Position: 0x2999 / 10649
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
		Function_40(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_40(int iParam0) //Position: 0x2A57 / 10839
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

int Function_41(int iParam0, char* cParam1) //Position: 0x2ABD / 10941
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
		Function_42(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &uParam3);
	}
	return 1;
}

void Function_42(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x2E14 / 11796
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

var Function_43(int iParam0) //Position: 0x2E9C / 11932
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

float Function_44(int iParam0) //Position: 0x2F2B / 12075
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

int Function_45(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x2F64 / 12132
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
	Function_58(iParam0, TO_FLOAT(bParam1), 1);
	Function_57(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_47(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_46(iParam0);
	return 1;
}

void Function_46(bool bParam0) //Position: 0x318C / 12684
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

void Function_47(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x322A / 12842
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_56(390))), 32);
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
					fVar19 = (Function_44(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_44(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_54(iParam0, fVar19, fVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_51(fVar19, fParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_49(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_48(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_207(), &Var9);
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

var Function_48(int iParam0) //Position: 0x3868 / 14440
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_49(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x3879 / 14457
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_50("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_50("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_50("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_50(char* cParam0) //Position: 0x3970 / 14704
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_51(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x398B / 14731
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_53(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_52(Function_53(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_52(int iParam0, int iParam1) //Position: 0x39F2 / 14834
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_53(int iParam0, bool bParam1) //Position: 0x3A04 / 14852
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_54(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x3A16 / 14870
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
	if (((Function_55(iParam0) != 19 || Function_55(iParam0) != 17) || Function_55(iParam0) != 10) || Function_55(iParam0) != 9)
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

int Function_55(int iParam0) //Position: 0x3B4A / 15178
{
	return Global_55480[iParam016].f_96;
}

var Function_56(int iParam0) //Position: 0x3B59 / 15193
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_57(int iParam0) //Position: 0x3B96 / 15254
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

int Function_58(int iParam0, float fParam1, bool bParam2) //Position: 0x3D30 / 15664
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

void Function_59(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x3F74 / 16244
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_61(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_60(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_60(char* cParam0) //Position: 0x3FE9 / 16361
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

bool Function_61(int iParam0, var uParam1, int iParam2) //Position: 0x4024 / 16420
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
		if (Function_63(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_62(uVar0))
		{
			case 0x00000002:
				if (!Function_65(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_62(char* cParam0) //Position: 0x40A0 / 16544
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

int Function_63(int iParam0) //Position: 0x4141 / 16705
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_64(&iVar1, 2147483648);
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

void Function_64(int iParam0, int iParam1) //Position: 0x417E / 16766
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
	return;
}

bool Function_65(var uParam0, int iParam1) //Position: 0x4194 / 16788
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_66(int iParam0, bool bParam1) //Position: 0x41A7 / 16807
{
	bool bVar0;
	int iVar1;
	
	Function_45(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_67(iParam0, 4294967295);
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
	iVar1 = Function_38();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

var Function_67(int iParam0, int iParam1) //Position: 0x4353 / 17235
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

void Function_68() //Position: 0x4398 / 17304
{
	Function_70(3, 0.0f);
	Function_69(3, 10000.0f);
	return;
}

int Function_69(int iParam0, int iParam1) //Position: 0x43AE / 17326
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_70(int iParam0, int iParam1) //Position: 0x43EE / 17390
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

int Function_71(bool bParam0) //Position: 0x442E / 17454
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

bool Function_72() //Position: 0x446F / 17519
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

var Function_73(int iParam0) //Position: 0x449A / 17562
{
	return (*&Global_21369 + 168)[iParam0];
}

void Function_74(int iParam0, bool bParam1, bool bParam2) //Position: 0x44A9 / 17577
{
	int iVar0;
	bool bVar1;
	
	if (Function_73(0) && !Global_6623)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_72())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_252 = (Global_21369.f_252 + iParam0);
		return;
	}
	iVar0 = Function_71(1);
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
			Function_66(1, bVar1);
			if (!&bParam2)
			{
				if (!Function_65(Global_119936, 1))
				{
					Function_59(&Global_54076, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_78(1, (4294967295 * bVar1));
			if (!Global_6623)
			{
				if (!Function_65(Global_119936, 2))
				{
					Function_59(&Global_54076, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_45(1, bVar1, 0, 0);
	}
	else
	{
		Function_77(1, (4294967295 * bVar1), 0);
	}
	if (Function_71(1) <= 4294962296)
	{
		Function_76(1, 4294962296, 0);
	}
	else if (Function_71(1) >= 5000)
	{
		Function_76(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_44(1));
	iVar0 = Function_71(1);
	switch (Global_21369.f_244)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_21369.f_244 = 1;
				Function_37(2, Function_75(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_21369.f_244 = 0;
				Function_37(2, Function_75(Global_21369.f_244), 0);
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
				Function_37(2, Function_75(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_21369.f_244 = 1;
				Function_37(2, Function_75(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_21369.f_244 = 3;
				Function_37(2, Function_75(Global_21369.f_244), 1);
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
				Function_37(2, Function_75(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_21369.f_244 = 4;
				Function_37(2, Function_75(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_21369.f_244 = 3;
				Function_37(2, Function_75(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_21369.f_244 = 5;
				Function_37(2, Function_75(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_21369.f_244 = 4;
				Function_37(2, Function_75(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_21369.f_244 = 6;
				Function_37(2, Function_75(Global_21369.f_244), 1);
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
				Function_37(2, Function_75(Global_21369.f_244), 0);
			}
			break;
	}
	Function_36(Global_21369.f_244, Global_21369.f_248);
	return;
}

var Function_75(int iParam0) //Position: 0x47D0 / 18384
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

int Function_76(int iParam0, bool bParam1, bool bParam2) //Position: 0x4873 / 18547
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
		Function_58(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_57(iParam0);
	if (&bParam2)
	{
		Function_47(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_77(int iParam0, bool bParam1, int iParam2) //Position: 0x4B0F / 19215
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
	Function_57(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_47(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_78(int iParam0, bool bParam1) //Position: 0x4D0C / 19724
{
	bool bVar0;
	int iVar1;
	
	Function_77(iParam0, bParam1, 0);
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
	iVar1 = Function_67(iParam0, 4294967295);
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
	iVar1 = Function_38();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

bool Function_79(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, float fParam6, var uParam7, int iParam8, var uParam9, var uParam10, float fParam11, int iParam12, bool bParam13, var uParam14, int iParam15, int iParam16, bool bParam17, int iParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, int iParam23, float fParam24) //Position: 0x4EB7 / 20151
{
	int iVar0;
	
	uParam9 = uParam9;
	iParam18 = &iParam18;
	bParam17 = &bParam17;
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return 0;
	}
	if (GET_LAST_ATTACKER(&iParam0) == &Global_54076)
	{
		TASK_FLEE_ACTOR(&iParam0, &Global_54076, 150.0f, -1.0f, 0, 0, 0);
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
				MEMORY_CLEAR_EVENTS(&iParam0, 0);
				ACTOR_START_FORCE_HOLSTER(&iParam0, 1, 0);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iParam0, 1);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&iParam0, 1);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(&iParam0, 0);
				uParam2 = Function_28(&iParam0, &Global_54076);
				AI_GOAL_LOOK_AT_ACTOR_NEW(&iParam0, &iParam1, -1.0f, 1);
				iParam8 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iParam5, Function_207(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
				ATTACH_OBJECTS(StackVal, StackVal, &iParam8, &iParam1, Function_207(), Vector(0.0f, 0,5f, &iParam16), Vector(0.0f, 0.0f, 0.0f), 4294967295);
				if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &iParam0, 1.0f, &uParam14, 1, 1, 0) || Function_28(&Global_54076, &iParam0) > 2.0f)
				{
					TASK_FOLLOW_OBJECT_AT_DISTANCE(&iParam0, &iParam8, 1.0f, &iParam15);
					TASK_PRIORITY_SET(&iParam0, true);
				}
				uParam3 = 1;
			}
			break;
		
		case 0x00000001:
			if ((Function_28(&iParam0, &iParam1) - uParam2) < fParam6)
			{
				TASK_FLEE_ACTOR(&iParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
				return 0;
			}
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &iParam0, 1.0f, &uParam14, 1, 1, 0))
			{
				iVar0 = TASK_SEQUENCE_OPEN();
				TASK_FACE_ACTOR(0, &iParam1, 0, 3212836864);
				TASK_FACE_ACTOR(0, &iParam1, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&iParam0, iVar0);
				TASK_SEQUENCE_RELEASE(iVar0, 1);
				TASK_PRIORITY_SET(&iParam0, true);
				uParam9 = 0;
				uParam3 = 4;
			}
			else if (!Function_98(&iParam0, 0))
			{
				if (IS_ACTOR_VALID(&iParam0))
				{
					TASK_FLEE_ACTOR(&iParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
				}
				return 0;
			}
			break;
		
		case 0x00000003:
			RESET_ANIM_SET_FOR_ACTOR(&iParam0, 1);
			SET_ANIM_SET_FOR_ACTOR(&iParam0, &uParam10, 0);
			SET_ACTION_NODE_FOR_ACTOR(&iParam0, &fParam11);
			TASK_FACE_ACTOR(&iParam0, &iParam1, 1, 3212836864);
			uParam3 = 4;
			break;
		
		case 0x00000004:
			uParam9 = 0;
			if (GET_NTH_TASK_STATUS(&iParam0, 0) != 0 || bParam21)
			{
				if (!&bParam21)
				{
					SET_ANIM_SET_FOR_ACTOR(&iParam0, &uParam10, 1);
					SET_ACTION_NODE_FOR_ACTOR(&iParam0, &fParam11);
				}
				if (&bParam19)
				{
					Function_89(&iParam0, &Global_54076, "nThank_You", 0, 5, 60, 1, 1);
				}
				else
				{
					Function_89(&iParam0, &Global_54076, &iParam12, &bParam13, 5, 60, 1, 1);
				}
				uParam3 = 5;
				Function_213(&uParam4, 0.0f);
			}
			else if (!Function_98(&iParam0, 0))
			{
				return 0;
			}
			break;
		
		case 0x00000005:
			if (iParam23 && !Function_15(&iParam0))
			{
				if (&fParam24 != -1.0f)
				{
					if (!IS_AMBIENT_SPEECH_PLAYING(&iParam0))
					{
						RESET_ANIM_SET_FOR_ACTOR(&iParam0, 1);
						Function_6(&iParam0, 4, 0, 1);
					}
				}
				else if (Function_119(&uParam4, &fParam24))
				{
					RESET_ANIM_SET_FOR_ACTOR(&iParam0, 1);
					Function_6(&iParam0, 4, 0, 1);
				}
			}
			if (&bParam22)
			{
				if (!IS_AMBIENT_SPEECH_PLAYING(&iParam0))
				{
					if (!IS_AMBIENT_SPEECH_PLAYING(&Global_54076))
					{
						if (!IS_STRING_VALID(&bParam20))
						{
							SAY_SINGLE_LINE_CONTEXT(&Global_54076, 409, &iParam0, 0, 0, 5, 4294967295, 4294967295, 0, 1);
						}
						else
						{
							Function_89(&Global_54076, &iParam0, &bParam20, &bParam20, 5, 60, 1, 1);
						}
						uParam3 = 6;
					}
				}
			}
			else if (!IS_AMBIENT_SPEECH_PLAYING(&iParam0))
			{
				uParam3 = 6;
			}
			break;
		
		case 0x00000006:
			if (iParam23 && !Function_15(&iParam0))
			{
				if (Function_119(&uParam4, &fParam24))
				{
					RESET_ANIM_SET_FOR_ACTOR(&iParam0, 1);
					Function_6(&iParam0, 4, 0, 1);
				}
			}
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(&iParam0, &fParam11) && !IS_AMBIENT_SPEECH_PLAYING(&Global_54076))
			{
				RESET_ANIM_SET_FOR_ACTOR(&iParam0, 1);
				uParam7 = 1;
				if (&bParam17)
				{
					Function_6(&iParam0, 4, 0, &iParam15);
					TASK_PRIORITY_SET(&iParam0, 2);
				}
				AI_GOAL_LOOK_CLEAR(&iParam0);
				ACTOR_END_FORCE_HOLSTER(&iParam0);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iParam0, 4294967295);
				return 1;
			}
			break;
	}
	return 1;
}

void Function_80(var uParam0, float fParam1, float fParam2, float fParam3) //Position: 0x52DC / 21212
{
	int iVar0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (iLocal_71 == 0)
		{
			if (IS_OBJECT_VALID(&uLocal_84))
			{
				Function_81(&uLocal_84);
				uLocal_67 = Function_81(&uLocal_84);
				bLocal_66 = true;
				MEMORY_CLEAR_EVENTS(&uParam0, 1);
				SET_ANIM_SET_FOR_ACTOR(&uParam0, "spit_to_duel", 1);
				AI_GOAL_LOOK_AT_COORD(&uParam0, &uLocal_67, 1, 0, 3212836864, 3212836864);
				iVar0 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_COORD(0, &uLocal_67, 1,6f, 1);
				TASK_FACE_COORD(0, &uLocal_67, 0);
				TASK_ACTION_PERFORM(0, "spit_to_duel/spit_only");
				if (IS_ACTOR_VALID(&fParam3))
				{
					TASK_FOLLOW_ACTOR(0, &fParam3);
				}
				else
				{
					TASK_GO_NEAR_COORD(0, &fParam1, 30.0f, 1);
				}
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&uParam0, iVar0);
				TASK_SEQUENCE_RELEASE(iVar0, 1);
				TASK_PRIORITY_SET(&uParam0, false);
				Function_213(&uLocal_78, 0.0f);
				iLocal_71 = 1;
			}
		}
	}
}

struct<8> Function_81(int iParam0) //Position: 0x53AF / 21423
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

bool Function_82(int iParam0) //Position: 0x53D8 / 21464
{
	if (!iParam0 != 0)
	{
		LOG_ERROR("Asking about a player with an index not = 0. Multiplayer Law Enforcement not yet implemented.");
		return 0;
	}
	return Global_6646;
}

void Function_83(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x544E / 21582
{
	if (iParam0 != iParam1)
	{
		iParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_84(iParam0), &iParam2, &iParam3, &iParam4);
	}
}

var Function_84(int iParam0) //Position: 0x5478 / 21624
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

int Function_85(var uParam0, float fParam1) //Position: 0x59CD / 22989
{
	if (Function_119(&uParam0, fParam1))
	{
		Function_86(&uParam0);
		return 1;
	}
	return 0;
}

void Function_86(vector3 vParam0) //Position: 0x59E7 / 23015
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

bool Function_87(int iParam0) //Position: 0x59FE / 23038
{
	if (iLocal_88 == 0)
	{
		if (IS_ACTOR_VALID(&iParam0))
		{
			if (Function_28(&Global_54076, &iParam0) > 30.0f)
			{
				iLocal_88 = 1;
			}
		}
	}
	if (iLocal_88 == 1)
	{
		return 1;
	}
	return 0;
}

void Function_88(bool bParam0) //Position: 0x5A32 / 23090
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && bParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_89(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x5A4F / 23119
{
	iParam1 = &iParam1;
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_ACTOR_ALIVE(&iParam0) && Function_28(&iParam0, &Global_54076) >= IntToFloat(&iParam5))
		{
			if (!IS_ACTOR_VALID(&iParam1))
			{
				iParam1 = "";
			}
			CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&iParam0);
			if (&bParam6)
			{
				if (IS_ACTOR_HOGTIED(&iParam0))
				{
					if (!SAY_SINGLE_LINE_STRING_BEAT(&iParam0, &iParam2, &iParam1, 1, 1, &iParam4, &iParam7, 0, 0, 1))
					{
						bParam3 = &bParam3;
					}
				}
				else if (!SAY_SINGLE_LINE_STRING_BEAT(&iParam0, &iParam2, &iParam1, 1, 1, &iParam4, &iParam7, 0, 1, 1))
				{
					bParam3 = &bParam3;
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING(&iParam0, &iParam2, true, true, &iParam4, 0, false, true);
			}
		}
	}
}

void Function_90(int iParam0) //Position: 0x5AFC / 23292
{
	Global_26652[iParam04].f_20++;
	if (Global_26652[iParam04].f_20 == 1)
	{
		Function_45(409, 1, 0, 0);
	}
	return;
}

void Function_91() //Position: 0x5B2D / 23341
{
	var uVar0;
	int iVar1;
	
	bLocal_86 = true;
	if (Global_43787 == 0)
	{
		iVar1 = Function_93(3);
		if (iVar1 == 0)
		{
			uVar0 = "FTR_SONG_06";
		}
		else if (iVar1 == 1)
		{
			uVar0 = "FTR_SONG_07";
		}
		else if (iVar1 == 2)
		{
			uVar0 = "FTR_SONG_08";
		}
	}
	else if (Global_43787 == 2)
	{
		if (Function_92())
		{
			uVar0 = "NRT_SONG_04";
		}
		else
		{
			uVar0 = "NRT_SONG_05";
		}
	}
	else if (Global_43787 == 1)
	{
		if (Function_92())
		{
			uVar0 = "MEX_SONG_01";
		}
		else
		{
			uVar0 = "MEX_SONG_06";
		}
	}
	AUDIO_MUSIC_FORCE_TRACK(&uVar0, "CHASE", 0.0f, 500, 4294967295, 3212836864, 0);
	iLocal_87 = 23;
	return;
}

bool Function_92() //Position: 0x5C15 / 23573
{
	return (RAND_INT_RANGE(0, 1999) / 1000) != 0;
}

var Function_93(bool bParam0) //Position: 0x5C28 / 23592
{
	bParam0 = (bParam0 * 1000 - 1);
	return (RAND_INT_RANGE(0, bParam0) / 1000);
}

bool Function_94(int iParam0, int iParam1, var uParam2, var uParam3, float fParam4, var uParam5, int iParam6, var uParam7, var uParam8, float fParam9, bool bParam10, var uParam11, var uParam12, float fParam13, bool bParam14, int iParam15) //Position: 0x5C41 / 23617
{
	float fVar0;
	
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return 0;
	}
	if (&fParam13 == 0.0f && !uParam8)
	{
		if (&fParam13 > &fParam9)
		{
			LOG_ERROR("firstAudioDist is too low to ever work");
		}
		else if (Function_28(&iParam0, &iParam1) > &fParam13)
		{
			uParam8 = 1;
			Function_89(&iParam0, &Global_54076, &bParam14, &bParam14, 5, 60, 1, &iParam15);
			Function_213(&uParam7, 0.0f);
		}
	}
	switch (uParam2)
	{
		case 0x00000000:
			SET_ACTOR_UPDATE_PRIORITY(&iParam0, false);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(&iParam0, 0);
			fLocal_26 = Function_28(&iParam0, &Global_54076);
			AI_GOAL_LOOK_AT_ACTOR_NEW(&iParam0, &iParam1, -1.0f, 1);
			iParam6 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &uParam3, Function_207(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
			ATTACH_OBJECTS(StackVal, StackVal, &iParam6, &iParam1, Function_207(), Vector(0.0f, 0,5f, &uParam12), Vector(0.0f, 0.0f, 0.0f), 4294967295);
			TASK_FOLLOW_OBJECT_AT_DISTANCE(&iParam0, &iParam6, 1.0f, &uParam11);
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
			if ((Function_28(&iParam0, &iParam1) - fLocal_26) < fParam4)
			{
				return 0;
			}
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &iParam0, 1.0f, fVar0, 1, 1, 0))
			{
				if (&bParam10)
				{
					TASK_CLEAR(&iParam0);
					TASK_FACE_ACTOR(&iParam0, &iParam1, 1, 3212836864);
				}
				else
				{
					AI_GOAL_LOOK_CLEAR(&iParam0);
				}
				uParam5 = 1;
				return 1;
			}
			if (!Function_98(&iParam0, 0))
			{
				return 0;
			}
			break;
	}
	return 1;
}

int Function_95(var uParam0, int iParam1) //Position: 0x5E01 / 24065
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == 0)
	{
		uVar1 = DECOR_GET_OBJECT(&uParam0, "HogtiedGringoAttached");
		if (IS_OBJECT_VALID(&uVar1))
		{
			if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&Global_54076)))
			{
				if (GET_CURRENT_GRINGO(&Global_54076) == GET_GRINGO_FROM_OBJECT(&uVar1))
				{
					uVar0 = GET_ACTOR_FROM_OBJECT(Function_96(GET_GRINGO_FROM_OBJECT(&uVar1), "UseCase1"));
					if (IS_ACTOR_VALID(&uVar0))
					{
						if (IS_ACTOR_LOCAL_PLAYER(&uVar0))
						{
							iParam1 = 1;
						}
					}
				}
			}
		}
	}
	if (iParam1 == 1)
	{
		return 1;
	}
	return 0;
}

var Function_96(var uParam0, int iParam1) //Position: 0x5E92 / 24210
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(&uParam0, &iParam1);
}

void Function_97(var uParam0, var[] uParam1) //Position: 0x5EA1 / 24225
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		iParam2 = 0;
		Function_143(&iParam2, 16);
	}
	if (!IS_ACTOR_VALID(&(uParam1[0])))
	{
		iParam2 = 0;
		Function_143(&iParam2, 16);
	}
	if (!IS_ACTOR_VALID(&(uParam1[1])))
	{
		iParam2 = 0;
		Function_143(&iParam2, 16);
	}
	return;
}

bool Function_98(int iParam0, bool bParam1) //Position: 0x5EF4 / 24308
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
			Function_100(&iParam0);
			return 0;
		}
		if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&iParam0), 163840))
		{
			Function_100(&iParam0);
			return 0;
		}
	}
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (Function_99(&iParam0, 0) && !AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&iParam0), 16384))
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

int Function_99(int iParam0, int iParam1) //Position: 0x5F9F / 24479
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

int Function_100(int iParam0) //Position: 0x5FF1 / 24561
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		Function_101(&iParam0);
		return 1;
	}
	return 0;
}

void Function_101(var uParam0) //Position: 0x6009 / 24585
{
	int iVar0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		iVar0 = GET_BLIP_ON_ACTOR(&uParam0);
		while (IS_BLIP_VALID(&iVar0))
		{
			REMOVE_BLIP(&iVar0);
			iVar0 = GET_BLIP_ON_ACTOR(&uParam0);
		}
	}
	return;
}

void Function_102(int iParam0) //Position: 0x603C / 24636
{
	if (!Global_6646)
	{
		if (IS_ACTOR_VALID(&iParam0))
		{
			if (IS_ACTOR_ALIVE(&iParam0))
			{
				if (GET_ACTORENUM_ACTOR_BASE_TYPE(GET_ACTOR_ENUM(&iParam0)) == 1)
				{
					if ((!Function_112(Function_113(), 35) && !Function_112(Function_113(), 7)) && !Function_112(Function_113(), 12))
					{
						Function_103(1, 35, Function_113(), GET_OBJECT_FROM_ACTOR(&iParam0), 1);
					}
				}
			}
		}
	}
	return;
}

var Function_103(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x60A7 / 24743
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	var uVar4;
	
	if (!Function_111(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_110(iParam1))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeType");
		return "";
	}
	if (!IS_ACTOR_VALID(&uParam2))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid criminal");
		return "";
	}
	if (!IS_OBJECT_VALID(&uParam3) && !iParam0 != 4)
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid victim");
		return "";
	}
	if (!Function_106(1))
	{
		LOG_ERROR("Crime is disabled: CREATE_CRIME_EVENT failure");
		return "";
	}
	uVar2 = CREATE_CRIME_IN_LAYOUT(&Global_39918);
	uVar3 = FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes");
	if ((IS_CRIME_VALID(&uVar2) && IS_OBJECT_VALID(&uVar3)) && GET_OBJECT_TYPE(&uVar3) != 2)
	{
		SET_CRIME_TYPE(&uVar2, iParam1);
		SET_CRIME_VICTIM(&uVar2, &uParam3);
		SET_CRIME_CRIMINAL(&uVar2, &uParam2);
		SET_CRIME_BEGIN_TIMESTAMP(&uVar2, GET_CURRENT_GAME_TIME());
		SET_CRIME_END_TIMESTAMP(&uVar2, GET_CURRENT_GAME_TIME());
		GET_OBJECT_POSITION(&uParam3, &Var0);
		SET_CRIME_POSITION(&uVar2, Var0);
		uVar4 = CREATE_OBJECTSET_IN_LAYOUT(Function_207(), &Global_39918, 3, 0);
		SET_CRIME_OBJECTSET(&uVar2, &uVar4);
		if (!&bParam4)
		{
			SET_CRIME_WITNESSED(&uVar2, 1);
		}
		else
		{
			SET_CRIME_WITNESSED(&uVar2, 3);
			Function_104();
		}
		SET_CRIME_FACTION(StackVal, &uVar2);
		SET_CRIME_TALLIED(&uVar2, 0);
		SET_CRIME_COUNTER(&uVar2, 1);
		SET_CRIME_WORLD_REGION(&uVar2, Global_40000.f_12);
		if ((Global_41252[iParam111].f_36 != 2 || Global_41252[iParam111].f_36 != 3) || Global_41252[iParam111].f_36 != 4)
		{
			SET_CRIME_IN_PROGRESS(&uVar2, 1);
		}
		else
		{
			SET_CRIME_IN_PROGRESS(&uVar2, 0);
		}
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_CRIME(&uVar2), GET_OBJECTSET_FROM_OBJECT(&uVar3));
		SET_ACTOR_TIME_OF_LAST_CRIME(&uParam2, GET_CURRENT_GAME_TIME());
	}
	return &uVar2;
}

void Function_104() //Position: 0x635A / 25434
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_39918);
	iVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes"));
	Function_105(&uVar0, &iVar1);
	iVar2 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar2))
	{
		bVar3 = GET_CRIME_FROM_OBJECT(&iVar2);
		if (IS_CRIME_VALID(&bVar3))
		{
			SET_CRIME_WITNESSED(&bVar3, 3);
		}
		iVar2 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return;
}

void Function_105(var uParam0, int iParam1) //Position: 0x63CD / 25549
{
	ITERATE_EVERYWHERE(&uParam0);
	ITERATE_ON_OBJECT_TYPE(&uParam0, 31);
	if (!&iParam1 != "")
	{
		ITERATE_IN_SET(&uParam0, &iParam1);
	}
	else
	{
		ITERATE_IN_LAYOUT(&uParam0, GET_ITERATOR_PARENT(&uParam0));
	}
	return;
}

bool Function_106(bool bParam0) //Position: 0x6403 / 25603
{
	if (Function_109(256))
	{
		return 0;
	}
	if (Function_109(262144))
	{
		return 0;
	}
	if (Function_108())
	{
		return 0;
	}
	if (!Function_109(1))
	{
		return 0;
	}
	if (!Function_109(4096))
	{
		return 0;
	}
	if (bParam0 && Function_107(12))
	{
		return 0;
	}
	if (Global_6621)
	{
		return 0;
	}
	if (Function_109(2048))
	{
		return 0;
	}
	if (0 || !&bParam0)
	{
		if (Global_43790 != 2 || Global_43790 != 5)
		{
			return 0;
		}
	}
	return 1;
}

int Function_107(int iParam0) //Position: 0x6479 / 25721
{
	if (Global_42825 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_108() //Position: 0x648A / 25738
{
	if (Global_46720 == 2)
	{
		if (StackVal == 1)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_109(int iParam0) //Position: 0x64A3 / 25763
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_110(int iParam0) //Position: 0x64C1 / 25793
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_111(int iParam0) //Position: 0x64D7 / 25815
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_112(int iParam0, int iParam1) //Position: 0x64EC / 25836
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return 0;
	}
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_39918);
	uVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes"));
	Function_105(&uVar0, &uVar1);
	iVar2 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar2))
	{
		uVar3 = GET_CRIME_FROM_OBJECT(&iVar2);
		if (GET_CRIME_CRIMINAL(&uVar3) != &iParam0 && GET_CRIME_TYPE(&uVar3) != iParam1)
		{
			DESTROY_ITERATOR(&uVar0);
			return 1;
		}
		iVar2 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return 0;
}

int Function_113() //Position: 0x657B / 25979
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

bool Function_114(var[] uParam0, int iParam1, int iParam2, int iParam3, float fParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x6590 / 26000
{
	int iVar0;
	
	iParam7 = &iParam7;
	if (!&bParam6)
	{
		iVar0 = 0;
		while (iVar0 <= iParam1)
		{
			if (Function_116(&(uParam0[iVar0]), &iParam3, &fParam4, &iParam5, &bParam6, 0x40400000))
			{
				iParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void Function_115(bool bParam0) //Position: 0x65E2 / 26082
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

bool Function_116(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, float fParam5) //Position: 0x6635 / 26165
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
		if (!Function_22(&iParam3, 8))
		{
			if (GET_LAST_ATTACKER(&iParam0) == &Global_54076)
			{
				uParam1 = 8;
				Function_117(&iParam0);
				return 1;
			}
		}
		if (!Function_22(&iParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(&iParam0, 1.0f))
			{
				uParam1 = 2;
				Function_117(&iParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(&iParam0, 1.0f, 1.0f))
			{
				uParam1 = 2;
				Function_117(&iParam0);
				return 1;
			}
		}
		if (!Function_22(&iParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(&iParam0) || (((GET_ACTOR_UNDER_RETICLE(&Global_54076, 0) != &iParam0 && IS_PLAYER_WEAPON_ZOOMED(&Global_54076)) && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(&Global_54076) != &iParam0 && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f))
			{
				if (uParam2 > 0.0f)
				{
					uParam1 = 4;
					Function_117(&iParam0);
					return 1;
				}
				if (uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - uParam2) < 1,3f)
					{
						uParam1 = 4;
						Function_117(&iParam0);
						return 1;
					}
				}
				uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_22(&iParam3, 1))
		{
			if (Global_6646 || Global_6647)
			{
				uParam1 = 1;
				Function_117(&iParam0);
				return 1;
			}
		}
		if (!Function_22(&iParam3, 16))
		{
			if (UNK_0x7F454A92(&iParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(&iParam0)) > 2.0f && fVar0 > 18.0f)
				{
					uParam1 = 16;
					Function_117(&iParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_117(int iParam0) //Position: 0x67FE / 26622
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&iParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(&iParam0, 1);
	UNK_0x99AFD2D1(&iParam0, 0, 0);
	Function_118(&iParam0);
	MEMORY_CONSIDER_AS(&Global_54076, &iParam0, 2);
	MEMORY_CONSIDER_AS(&iParam0, &Global_54076, 2);
	AI_GOAL_LOOK_CLEAR(&iParam0);
	return;
}

void Function_118(int iParam0) //Position: 0x683B / 26683
{
	SAY_SINGLE_LINE_CONTEXT(&iParam0, 60, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

bool Function_119(var uParam0, float fParam1) //Position: 0x6854 / 26708
{
	if (Function_122(&uParam0))
	{
		if (Function_120(&uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_120(vector3 vParam0) //Position: 0x6872 / 26738
{
	if (Function_122(&vParam0))
	{
		if (Function_121(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_121(int iParam0) //Position: 0x693F / 26943
{
	return Function_22(iParam0, 2);
}

bool Function_122(int iParam0) //Position: 0x694D / 26957
{
	return Function_22(iParam0, 1);
}

bool Function_123(var[] uParam0, int iParam1, float fParam2) //Position: 0x695B / 26971
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		if (IS_ACTOR_VALID(&(uParam0[iVar0])))
		{
			if (Function_28(&(uParam0[iVar0]), &Global_54076) > fParam2)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

float Function_124(bool bParam0) //Position: 0x699A / 27034
{
	var uVar0;
	float fVar1;
	
	if (!&bParam0)
	{
		Function_125(&uVar0, &fVar1);
		if (fVar1 < 60.0f)
		{
			return (fVar1 + 20.0f);
		}
		return (fVar1 + 10.0f);
	}
	return (190.0f + 20.0f);
}

void Function_125(float fParam0, int iParam1) //Position: 0x69D6 / 27094
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

void Function_126(int iParam0, int[] iParam1) //Position: 0x6A67 / 27239
{
	switch (iLocal_98)
	{
		case 0x00000000:
			if (Function_98(&iParam0, 0))
			{
				if (!IS_AMBIENT_SPEECH_PLAYING(&iParam0))
				{
					if (!Function_127(&(iParam1[0])))
					{
						if (!Function_127(&(iParam1[0])))
						{
							if (Function_28(&iParam0, &Global_54076) > 50.0f)
							{
								Function_213(&uLocal_99, 0.0f);
								Function_89(&iParam0, &Global_54076, "VICTIMIZED", 0, 5, 60, 1, 1);
								bLocal_103 = RAND_INT_RANGE(1, 4);
								iLocal_98 = 1;
							}
						}
					}
				}
			}
			else
			{
				iLocal_98 = 2;
			}
			break;
		
		case 0x00000001:
			if (Function_98(&iParam0, 0))
			{
				if (!IS_AMBIENT_SPEECH_PLAYING(&iParam0))
				{
					if (!Function_127(&(iParam1[0])))
					{
						if (!Function_127(&(iParam1[1])))
						{
							if (Function_119(&uLocal_99, TO_FLOAT(bLocal_103)))
							{
								if (Function_28(&iParam0, &Global_54076) > 40.0f)
								{
									iLocal_98 = 0;
								}
							}
						}
					}
				}
				else
				{
					Function_213(&uLocal_99, 0.0f);
				}
			}
			else
			{
				iLocal_98 = 2;
			}
			break;
		
		case 0x00000002:
			break;
	}
	return;
}

bool Function_127(int iParam0) //Position: 0x6B67 / 27495
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_AMBIENT_SPEECH_PLAYING(&iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void Function_128(int iParam0, bool bParam1, int[] iParam2) //Position: 0x6B82 / 27522
{
	if (iLocal_97 == 0)
	{
		if (!IS_AMBIENT_SPEECH_PLAYING(&Global_54076))
		{
			if (!IS_AMBIENT_SPEECH_PLAYING(&bParam1))
			{
				if (!Function_127(&(iParam2[0])))
				{
					if (!Function_127(&(iParam2[1])))
					{
						if (iParam0 == 6)
						{
							Function_89(&Global_54076, &bParam1, "criminalChasePlayerMsg01", "criminalChasePlayerMsg01", 5, 60, 1, 1);
							iLocal_97 = 1;
						}
						if (bLocal_48 == 1)
						{
							Function_89(&Global_54076, &bParam1, "criminalChasePlayerMsg02", "criminalChasePlayerMsg02", 5, 60, 1, 1);
							iLocal_97 = 1;
						}
					}
				}
			}
		}
	}
	return;
}

void Function_129(var[] uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6) //Position: 0x6C5B / 27739
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!uParam2)
	{
		iVar0 = 1;
	}
	iVar1 = 0;
	while (iVar1 <= iParam1)
	{
		if (IS_ACTOR_VALID(&(uParam0[iVar1])))
		{
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &(uParam0[iVar1]), 1.0f, &uParam5, 1, 1, 0))
			{
				uParam2 = 1;
				if (&iParam4 != 0)
				{
					Global_38378 = (GET_CURRENT_GAME_TIME() + IntToFloat(&iParam4));
				}
			}
		}
		iVar1++;
	}
	if (uParam2 && iVar0)
	{
		if (StackVal & 64 == 64)
		{
			Function_139(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_138(0);
		}
		if (&bParam6)
		{
			Function_136(0, GET_THIS_SCRIPT_ID());
			Global_6615 = GET_THIS_SCRIPT_ID();
			Global_6644 = 1;
			Function_134(iParam3);
		}
		Function_132(iParam3);
		if (Function_131(StackVal, 32768))
		{
			Function_130(1);
		}
		Global_26652[iParam34].f_16++;
		Function_45(408, 1, 0, 0);
	}
}

void Function_130(bool bParam0) //Position: 0x6D54 / 27988
{
	if (bParam0)
	{
		Function_5(0x10000000);
	}
	else
	{
		Function_88(0x10000000);
	}
	Global_39922.f_304 = 0;
	return;
}

bool Function_131(var uParam0, int iParam1) //Position: 0x6D79 / 28025
{
	return (uParam0 && iParam1) == 0;
}

void Function_132(int iParam0) //Position: 0x6D86 / 28038
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (!Function_22(StackVal, 524288))
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
			bVar1 = Function_133(iVar0 * 60);
			ADD_TIME(&Global_27462[iParam052] + 376, 0, 0, bVar1, 0);
			Global_26652[iParam04] = &Global_27462[iParam052] + 376;
		}
	}
	return;
}

int Function_133(int iParam0) //Position: 0x6E2C / 28204
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_134(int iParam0) //Position: 0x6E43 / 28227
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
	Function_135(&Var0 + 80[Var0.f_762], &(Global_26652[iParam04]), iParam0);
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

void Function_135(vector3 vParam0) //Position: 0x6EE2 / 28386
{
	vParam0.y = iParam2;
	vParam0 = Param1.f_16;
	vParam0.f_8 = 1;
	return;
}

void Function_136(int iParam0, bool bParam1) //Position: 0x6EFE / 28414
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= Global_38380)
	{
		iVar1 = 1;
		Global_38380[iVar036].f_104 = 0;
		if (&Global_38380[iVar036] + 48 == &bParam1)
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
			Function_137(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_137(struct<113> Param0) //Position: 0x6F85 / 28549
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

void Function_138(int iParam0) //Position: 0x6FE3 / 28643
{
	*(&Global_21369 + 136) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 136, 0, 0, (&iParam0 + Function_133(900)), 0);
	return;
}

void Function_139(bool bParam0) //Position: 0x7007 / 28679
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, (&bParam0 + Function_133(200)), 0);
	return;
}

void Function_140(struct<2> Param0, var uParam2, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7) //Position: 0x702A / 28714
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
	else if (!Function_141(StackVal, Param0))
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
			Function_139(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_138(0);
		}
		if (&bParam7)
		{
			Function_136(0, GET_THIS_SCRIPT_ID());
			Global_6615 = GET_THIS_SCRIPT_ID();
			Function_134(iParam3);
			Global_6644 = 1;
		}
		Function_132(iParam3);
		if (Function_131(StackVal, 32768))
		{
			Function_130(1);
		}
		Global_26652[iParam34].f_16++;
		Function_45(408, 1, 0, 0);
	}
}

bool Function_141(vector3 vParam0) //Position: 0x713F / 28991
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

struct<8> Function_142() //Position: 0x7157 / 29015
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_143(var uParam0, bool bParam1) //Position: 0x7161 / 29025
{
	uParam0 = (uParam0 || bParam1);
	return;
}

void Function_144(var uParam0, var uParam1, var uParam2, float fParam3, struct<2> Param4) //Position: 0x7172 / 29042
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
		if (Function_145(StackVal, &Global_46715, "player_herb", &uVar0, 20.0f, 5, Param4) >= 0)
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

int Function_145(char* cParam0, var uParam1, char*[] cParam2, float fParam3, int iParam4, struct<2> Param5) //Position: 0x721D / 29213
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

bool Function_146(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x72C3 / 29379
{
	if (StackVal & 64 == 64)
	{
		if (!iParam2)
		{
			if (IS_ACTOR_VALID(&iParam1))
			{
				if (Function_28(&Global_54076, &iParam1) > 15.0f)
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
		if (Function_149() && !iParam2)
		{
			return 0;
		}
		if (Function_148(iParam0) && !iParam2)
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
		if (!Function_147(iParam0, &iParam5))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_147(int iParam0, int iParam1) //Position: 0x7406 / 29702
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

int Function_148(int iParam0) //Position: 0x7427 / 29735
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

int Function_149() //Position: 0x7467 / 29799
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
						if (Function_150(&Global_54076, &Global_39621[iVar05] + 16) > IntToFloat(iVar1))
						{
							return 1;
						}
					}
				}
			}
			if (Function_150(&Global_54076, &Global_39621[iVar05] + 16) > IntToFloat(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

float Function_150(int iParam0, var uParam1) //Position: 0x752A / 29994
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			Function_152(&iParam0);
			Var0 = Function_152(&iParam0);
			Function_151(&uParam1);
			Var2 = Function_151(&uParam1);
			return VDIST(Var0, Var2);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

struct<8> Function_151(int iParam0) //Position: 0x75CC / 30156
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

struct<8> Function_152(int iParam0) //Position: 0x763A / 30266
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

int Function_153(int iParam0, int iParam1) //Position: 0x76A6 / 30374
{
	var uVar0;
	var uVar1;
	
	if (!IS_OBJECTSET_VALID(&uVar0))
	{
		uVar1 = CREATE_OBJECT_ITERATOR(&Global_39918);
		ITERATE_EVERYWHERE(&uVar1);
		ITERATE_ON_OBJECT_TYPE(&uVar1, 2);
		ITERATE_ON_PARTIAL_NAME(&uVar1, "nSharedLaw");
		uVar0 = GET_OBJECTSET_FROM_OBJECT(START_OBJECT_ITERATOR(&uVar1));
		DESTROY_ITERATOR(&uVar1);
	}
	else
	{
		uVar0 = &iParam1;
	}
	if (!IS_OBJECTSET_VALID(&uVar0))
	{
		return 0;
	}
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return 0;
	}
	if (IS_OBJECT_IN_OBJECTSET(&iParam0, &uVar0))
	{
		return 0;
	}
	ADD_OBJECT_TO_OBJECTSET(&iParam0, &uVar0);
	CLEAN_OBJECTSET(&uVar0);
	return 1;
}

struct<32> Function_154(struct<8> Param0) //Position: 0x7731 / 30513
{
	char* cVar0[32];
	char* cVar8[16];
	
	if (!IS_STRING_VALID(&Param0))
	{
	}
	else
	{
		Global_10985 = (Global_10985 % 10000);
		strcpy(&cVar8, I2STR(Global_10985), 16);
		while (STRING_LENGTH(&cVar8) <= 4)
		{
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_155("0", &cVar8, ""), 4);
		}
		if (IS_STRING_VALID(&cVar8))
		{
			strcpy(&cVar0, &Param0, 32);
			stradd(&cVar0, &cVar8, 32);
			Global_10985++;
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_155(char* cParam0) //Position: 0x779D / 30621
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

float Function_156() //Position: 0x77BF / 30655
{
	float fVar0;
	int iVar1;
	
	if (Global_6612)
	{
		return 0.0f;
	}
	Function_125(&fVar0, &iVar1);
	if (fVar0 >= 50.0f)
	{
		return (fVar0 - 10.0f);
	}
	return (fVar0 - 20.0f);
}

bool Function_157(struct<65> Param0) //Position: 0x77F0 / 30704
{
	struct<8> Var0;
	var uVar8;
	var uVar9;
	
	if (Global_6612 && Param0.f_40)
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_154(GET_SCRIPT_NAME()) };
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
	if (!Function_158(&Param0))
	{
		if (Param0.f_40 == 1)
		{
			if (uParam2 == 0)
			{
				Function_19("Still scanning for the proper terrain to run this event.  Move the player around to find a good spawn location.", -1.0f, 1, 2, 1, 0);
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
		Function_19("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 5.0f, 1, 2, 1, 0);
	}
	if (&bParam4)
	{
		if (!Function_17(Param0.f_64, 0, 1, 0, 0))
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
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_154("restrictVol") };
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

bool Function_158(struct<73> Param0) //Position: 0x7BAE / 31662
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
				Var3 = Vector(0.0f, 0.0f, Function_124(1));
				ROTATE_VECTOR_XZ(&Var3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				Var3 = Vector(StackVal, StackVal, StackVal) + Vector(Var7, Var3, StackVal);
				ITERATE_IN_SPHERE(&Param0 + 8, Var3, Function_124(1));
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
					uVar0 = Function_188(StackVal, &Param0 + 8, Var7, Function_156());
				}
				else
				{
					uVar0 = Function_187(StackVal, &Param0 + 8, Var7, Function_156(), "locflag", (&Param0 + 72 + 36)->f_24);
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
								if (VDIST(Var7, Var3) < fVar10 && VDIST(Var7, Var3) > Function_124(1))
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
				if (!Function_141(StackVal, Var3))
				{
					PRINTSTRING("Player Pos: ");
					PRINTVECTOR(Var7);
					PRINTNL();
					Function_125(&fVar10, &fVar9);
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
				if (Function_22(StackVal, 131072))
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
				if (!Function_168(&Param0 + 16, &Param0 + 60, 0, Param0.f_40))
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
				uVar17 = START_CURVE_QUERY(&Global_43578, Var3, Function_167((&Param0 + 72)->f_148, 0), 0.0f, 20.0f, 5.0f, 0);
			}
			else
			{
				uVar17 = START_CURVE_QUERY(&Global_43578, Var7, Function_167((&Param0 + 72)->f_148, 0), 120.0f, 150.0f, 5.0f, 0);
			}
			if (GET_NUM_POINTS_IN_CURVE_QUERY(&uVar17) >= 0)
			{
				iVar15 = RAND_INT_RANGE(0, (GET_NUM_POINTS_IN_CURVE_QUERY(&uVar17) - 1));
				GET_POINT_FROM_CURVE_QUERY(&uVar17, iVar15, &Var12);
				Function_166(&Var12);
				*(&Param0 + 16) = Function_166(&Var12);
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
			if (Function_22(StackVal, 131072))
			{
				if (StackVal || Function_174(Function_174(StackVal, *(&Param0 + 16)), Global_54078))
				{
					return 0;
				}
			}
			if (StackVal && !Function_168(&Param0 + 16, &Param0 + 60, 0, Param0.f_40) == 262144)
			{
				return 0;
			}
			break;
		
		case 0x00000004:
			if (!Function_163((&Param0 + 72)->f_148) < 0)
			{
				return 0;
			}
			break;
		
		case 0x00000007:
			switch ((&Param0 + 72)->f_156)
			{
				case 0x00000001:
					iVar18 = Function_160(StackVal, Global_43787, Global_43788, Global_43789, 1);
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
						iVar18 = Function_160(StackVal, Global_43787, Global_43788, (Global_43789 + iVar16), 1);
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
	if (Function_159(StackVal, *(&Param0 + 16)))
	{
		return 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(*(&Param0 + 16), 10.0f))
	{
		return 0;
	}
	return 1;
}

bool Function_159(struct<2> Param0) //Position: 0x8477 / 33911
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

int Function_160(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x84AE / 33966
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
								return Function_161(&Global_11014, &Global_12796, bParam3);
								break;
							
							case 0x00000001:
								return Function_161(&Global_11146, &Global_12992, bParam3);
								break;
							
							case 0x00000002:
								return Function_161(&Global_11120, &Global_12954, bParam3);
								break;
							
							default:
								return Function_161(&Global_11200, &Global_13072, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_161(&Global_11420, &Global_13398, bParam3);
								break;
							
							case 0x00000001:
								return Function_161(&Global_11222, &Global_13104, bParam3);
								break;
							
							case 0x00000003:
								return Function_161(&Global_11284, &Global_13196, bParam3);
								break;
							
							case 0x00000002:
								return Function_161(&Global_11398, &Global_13366, bParam3);
								break;
							
							case 0x00000004:
								return Function_161(&Global_11492, &Global_13504, bParam3);
								break;
							
							default:
								return Function_161(&Global_11482, &Global_13490, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_161(&Global_11544, &Global_13580, bParam3);
								break;
							
							case 0x00000001:
								return Function_161(&Global_11646, &Global_13732, bParam3);
								break;
							
							case 0x00000002:
								return Function_161(&Global_11704, &Global_13818, bParam3);
								break;
							
							default:
								return Function_161(&Global_11518, &Global_13542, bParam3);
								break;
						}
						break;
					
					case 0x00000003:
						switch (bVar1)
						{
							case 0x00000001:
								return Function_161(&Global_11752, &Global_13888, bParam3);
								break;
							
							default:
								return Function_161(&Global_11826, &Global_13998, bParam3);
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
								return Function_161(&Global_11836, &Global_14012, bParam3);
								break;
							
							case 0x00000001:
								return Function_161(&Global_11946, &Global_14176, bParam3);
								break;
							
							case 0x00000002:
								return Function_161(&Global_11988, &Global_14238, bParam3);
								break;
							
							default:
								return Function_161(&Global_12038, &Global_14312, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_161(&Global_12048, &Global_14326, bParam3);
								break;
							
							default:
								return Function_161(&Global_12274, &Global_14662, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000002:
								return Function_161(&Global_12284, &Global_14676, bParam3);
								break;
							
							case 0x00000001:
								return Function_161(&Global_12342, &Global_14762, bParam3);
								break;
							
							case 0x00000003:
								return Function_161(&Global_12392, &Global_14836, bParam3);
								break;
							
							default:
								return Function_161(&Global_12472, &Global_14954, bParam3);
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
		return Function_161(&Global_11014, &Global_12796, bParam3);
	}
	if (bVar1 == Global_46760[1])
	{
		return Function_161(&Global_11146, &Global_12992, bParam3);
	}
	if (bVar1 == Global_46760[2])
	{
		return Function_161(&Global_11120, &Global_12954, bParam3);
	}
	if (bVar1 == Global_46796[0])
	{
		return Function_161(&Global_11420, &Global_13398, bParam3);
	}
	if (bVar1 == Global_46796[1])
	{
		return Function_161(&Global_11222, &Global_13104, bParam3);
	}
	if (bVar1 == Global_46796[3])
	{
		return Function_161(&Global_11284, &Global_13196, bParam3);
	}
	if (bVar1 == Global_46796[2])
	{
		return Function_161(&Global_11398, &Global_13366, bParam3);
	}
	if (bVar1 == Global_46796[4])
	{
		return Function_161(&Global_11492, &Global_13504, bParam3);
	}
	if (bVar1 == Global_46816[0])
	{
		return Function_161(&Global_11544, &Global_13580, bParam3);
	}
	if (bVar1 == Global_46816[1])
	{
		return Function_161(&Global_11646, &Global_13732, bParam3);
	}
	if (bVar1 == Global_46816[2])
	{
		return Function_161(&Global_11704, &Global_13818, bParam3);
	}
	if (bVar1 == Global_46838[1])
	{
		return Function_161(&Global_11752, &Global_13888, bParam3);
	}
	if (bVar1 == Global_46850[0])
	{
		return Function_161(&Global_11836, &Global_14012, bParam3);
	}
	if (bVar1 == Global_46850[1])
	{
		return Function_161(&Global_11946, &Global_14176, bParam3);
	}
	if (bVar1 == Global_46850[2])
	{
		return Function_161(&Global_11988, &Global_14238, bParam3);
	}
	if (bVar1 == Global_46866[0])
	{
		return Function_161(&Global_12048, &Global_14326, bParam3);
	}
	if (bVar1 == Global_46894[2])
	{
		return Function_161(&Global_12284, &Global_14676, bParam3);
	}
	if (bVar1 == Global_46894[1])
	{
		return Function_161(&Global_12342, &Global_14762, bParam3);
	}
	if (bVar1 == Global_46894[3])
	{
		return Function_161(&Global_12392, &Global_14836, bParam3);
	}
	if (bVar1 == Global_46736[0])
	{
		return Function_161(&Global_11200, &Global_13072, bParam3);
	}
	if (bVar1 == Global_46736[1])
	{
		return Function_161(&Global_11482, &Global_13490, bParam3);
	}
	if (bVar1 == Global_46736[2])
	{
		return Function_161(&Global_11518, &Global_13542, bParam3);
	}
	if (bVar1 == Global_46736[3])
	{
		return Function_161(&Global_11826, &Global_13998, bParam3);
	}
	if (bVar1 == Global_46746[0])
	{
		return Function_161(&Global_12038, &Global_14312, bParam3);
	}
	if (bVar1 == Global_46746[2])
	{
		return Function_161(&Global_12274, &Global_14662, bParam3);
	}
	if (bVar1 == Global_46746[1])
	{
		return Function_161(&Global_12472, &Global_14954, bParam3);
	}
	return "";
}

var Function_161(struct<2>[] Param0, vector3[] vParam1, bool bParam2) //Position: 0x8AC4 / 35524
{
	int iVar0;
	
	iVar0 = bParam2;
	if (iVar0 <= Param0 || iVar0 > 0)
	{
		return "";
	}
	if (!Function_162(&(Param0[iVar02]), 2))
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

bool Function_162(var uParam0, int iParam1) //Position: 0x8B1E / 35614
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_163(int iParam0) //Position: 0x8B3B / 35643
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
			if (Function_164(GET_SQUAD_FROM_OBJECT(&iVar2)) == &iParam0)
			{
				iVar0++;
			}
			iVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
		}
	}
	DESTROY_ITERATOR(&uVar1);
	return iVar0;
}

int Function_164(int iParam0) //Position: 0x8BA3 / 35747
{
	var uVar0;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return 4294967295;
	}
	uVar0 = Function_165(&iParam0);
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

var Function_165(var uParam0) //Position: 0x8BE1 / 35809
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

struct<8> Function_166(vector3 vParam0) //Position: 0x8C2E / 35886
{
	struct<2> Var0;
	
	Var0 = vParam0;
	Var0.f_4 = vParam0.y;
	Var0.f_8 = vParam0.z;
	return StackVal, Var0;
}

int Function_167(int iParam0, int iParam1) //Position: 0x8C50 / 35920
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

bool Function_168(struct<2> Param0, int iParam2, bool bParam3) //Position: 0x8C82 / 35970
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
	Function_170(4294967295);
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
			else if (Function_169(&Param0, &uVar0) > fVar4)
			{
				return 0;
			}
		}
		iVar2++;
	}
	return 1;
}

float Function_169(struct<2> Param0) //Position: 0x8D5E / 36190
{
	struct<2> Var0;
	bool bVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	bVar2 = VMAG(Var0);
	return bVar2;
}

int Function_170(int iParam0) //Position: 0x8D7D / 36221
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
						if (Function_171(StackVal, &Global_54076, Var1) < 25.0f)
						{
							Function_172(iVar0);
						}
					}
					else if (Function_171(StackVal, &Global_54076, Var1) < 55.0f)
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

float Function_171(var uParam0, struct<2> Param1) //Position: 0x8EEB / 36587
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_152(&uParam0);
		Var0 = Function_152(&uParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

void Function_172(int iParam0) //Position: 0x8F62 / 36706
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

bool Function_173(struct<2> Param0) //Position: 0x8FCA / 36810
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

int Function_174(struct<2> Param0) //Position: 0x906F / 36975
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

bool Function_175(struct<2> Param0) //Position: 0x90BD / 37053
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

bool Function_176(struct<2> Param0) //Position: 0x9118 / 37144
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

int Function_177(bool bParam0) //Position: 0x9197 / 37271
{
	float fVar0;
	bool bVar1;
	
	Function_125(&fVar0, &bVar1);
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

void Function_178(struct<33> Param0) //Position: 0x9349 / 37705
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

void Function_179(struct<5> Param0, var uParam5, var uParam6, var uParam7) //Position: 0x9475 / 38005
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

void Function_180(float fParam0) //Position: 0x94C6 / 38086
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

int Function_181(int iParam0, struct<2> Param1) //Position: 0x950D / 38157
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

void Function_182(bool bParam0) //Position: 0x96C2 / 38594
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

void Function_183() //Position: 0x9775 / 38773
{
	AMBIENT_SET_DISTANCE_FILTER(0.0f, 24.0f);
	return;
}

struct<8> Function_184(struct<2> Param0) //Position: 0x9784 / 38788
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
	GET_POINT_FROM_CURVE_QUERY(&uVar7, 0, &uVar0);
	uVar3 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(&uVar7, 0);
	if (IS_OBJECT_VALID(&uVar3))
	{
		uVar12 = Param1;
		UNK_0x19D652F9(&uVar3, 50.0f, &uVar0, &iVar18);
		UNK_0x19D652F9(&uVar3, -50.0f, &uVar0, &iVar21);
		Function_166(&iVar18);
		uVar14 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Function_166(&iVar18), StackVal);
		Function_166(&iVar21);
		uVar16 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Function_166(&iVar21), StackVal);
		fVar11 = VDOT(&uVar12, &uVar14);
		fVar10 = VDOT(&uVar12, &uVar16);
		Function_125(&fVar4, &fVar5);
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
			Function_166(&iVar21);
			Var8 = Function_166(&iVar21);
		}
		else
		{
			UNK_0x19D652F9(&uVar3, fVar6, &uVar0, &iVar18);
			Function_166(&iVar18);
			Var8 = Function_166(&iVar18);
		}
	}
	UNK_0xDF93BD7C(&uVar7);
	return StackVal, Var8;
}

int Function_185(struct<2> Param0, struct<5> Param2) //Position: 0x989E / 39070
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
		if (!Function_141(StackVal, Param2))
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
			if (!Function_141(StackVal, Param2))
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
		WAIT(0);
	}
	return 0;
}

bool Function_186(bool bParam0) //Position: 0x99E1 / 39393
{
	if (bParam0 > 0 || bParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_187(var uParam0, struct<2> Param1, float fParam3, int iParam4, var uParam5) //Position: 0x99F7 / 39415
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
						if (Function_168(&Var5, &fVar4, 0, 0))
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

var Function_188(var uParam0, struct<2> Param1, float fParam3) //Position: 0x9AAC / 39596
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
				if (Function_168(&Var5, &uVar4, 0, 0))
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

var Function_189(var uParam0, struct<2> Param1, float fParam3, int iParam4, var uParam5) //Position: 0x9B3E / 39742
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

var Function_190(var uParam0, struct<2> Param1, float fParam3) //Position: 0x9BE0 / 39904
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

int Function_191(int iParam0) //Position: 0x9C66 / 40038
{
	if (IS_ITERATOR_VALID(&iParam0))
	{
		ITERATE_EVERYWHERE(&iParam0);
		ITERATE_ON_PARTIAL_NAME(&iParam0, Function_207());
		ITERATE_ON_PARTIAL_MODEL_NAME(&iParam0, Function_207());
		ITERATE_ON_OBJECT_TYPE(&iParam0, 4294967295);
		return 1;
	}
	return 0;
}

int Function_192(var uParam0, int iParam1) //Position: 0x9C9C / 40092
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
	Function_170(DECOR_GET_INT(&uParam0, "script"));
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

void Function_193(int iParam0, var uParam1, struct<2> Param2) //Position: 0x9E06 / 40454
{
	struct<8> Var0;
	
	*(&Global_39621[iParam05] + 16) = &uParam1;
	Global_39621[iParam05].f_32 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_154("stayout") };
	*(&Global_39621[iParam05] + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Param2, Vector(0.0f, 0.0f, 0.0f), Vector(12.0f, 5.0f, 12.0f));
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&Global_39621[iParam05] + 24, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&Global_39621[iParam05] + 24);
	if (&bParam3)
	{
		*(&Global_39621[iParam05] + 8) = ADD_BLIP_FOR_COORD(&Param2, 403, 0, 2, 0);
		SET_BLIP_BLINK(&Global_39621[iParam05] + 8, 1, 1, 20.0f);
	}
}

var Function_194(var uParam0, struct<2> Param1) //Position: 0x9EAE / 40622
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

void Function_195(var uParam0, float fParam1, float fParam2, float fParam3, var uParam4) //Position: 0x9EDC / 40668
{
	uParam4 = Vector((GET_X(&fParam2) - GET_X(&uParam0)), 0.0f, (GET_Z(&fParam2) - GET_Z(&uParam0)));
}

bool Function_196(struct<2>[] Param0) //Position: 0x9F00 / 40704
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_201();
	iVar1 = 0;
	if (!Function_4(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_200(&(Param0[iVar02]), 8);
		}
		else if (Function_199())
		{
			iVar1 = 1;
			Function_200(&(Param0[iVar02]), 8);
		}
		Function_200(&(Param0[iVar02]), 16);
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
				Function_200(&(Param0[iVar02]), 1);
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
							Function_200(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_200(&(Param0[iVar02]), 2);
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
							Function_200(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_200(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_200(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_200(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_200(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_200(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_200(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_200(&(Param0[iVar02]), 2);
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
	Function_197();
	return 1;
}

void Function_197() //Position: 0xA2C2 / 41666
{
	if (!Function_198(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_198(int iParam0) //Position: 0xA302 / 41730
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_199() //Position: 0xA31E / 41758
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

void Function_200(struct<13> Param0) //Position: 0xA34C / 41804
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_201() //Position: 0xA35F / 41823
{
	if (!Function_198(128))
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

void Function_202(int iParam0) //Position: 0xA3A1 / 41889
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		SET_DRAW_ACTOR(&iParam0, 1);
		CLEAR_ACTOR_MAX_SPEED(&iParam0);
		if (IS_ACTOR_ANIMAL(&iParam0))
		{
			ANIMAL_SPECIES_REL_SET_CAN_ATTACK(ANIMAL_ACTOR_GET_SPECIES(&iParam0), 0, 1);
		}
		else
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 0, 1);
			MEMORY_ALLOW_SHOOTING(&iParam0, 1);
		}
	}
	return;
}

void Function_203(var[] uParam0, int iParam1) //Position: 0xA3EA / 41962
{
	int iVar0;
	
	if (&iParam1 == 4294967295)
	{
		iParam1 = uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= &iParam1)
	{
		Function_202(&(uParam0[iVar0]));
		iVar0++;
	}
	return;
}

void Function_204(int iParam0) //Position: 0xA41C / 42012
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
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 0, 0);
			MEMORY_ALLOW_SHOOTING(&iParam0, 0);
		}
	}
	return;
}

void Function_205(var[] uParam0, int iParam1) //Position: 0xA466 / 42086
{
	int iVar0;
	
	if (&iParam1 == 4294967295)
	{
		iParam1 = uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= &iParam1)
	{
		Function_204(&(uParam0[iVar0]));
		iVar0++;
	}
	return;
}

bool Function_206(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xA498 / 42136
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

float Function_207() //Position: 0xA510 / 42256
{
	int iVar0;
	
	return &iVar0;
}

void Function_208(var[] uParam0, int iParam1) //Position: 0xA519 / 42265
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(uParam0[iVar0]);
		iVar0++;
	}
	return;
}

var Function_209(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xA53C / 42300
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
			Function_200(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_200(&(Param0[iVar02]), 8);
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

var Function_210(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0xA618 / 42520
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_211(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_200(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_211(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0xA656 / 42582
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_4(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_200(&(Param0[iVar02]), 4);
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

int Function_212(int iParam0, int iParam1) //Position: 0xA725 / 42789
{
	int iVar0;
	
	iVar0 = (Global_26652[iParam04].f_16 % iParam1);
	return iVar0;
}

void Function_213(vector3 vParam0) //Position: 0xA73B / 42811
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_143(&vParam0, 1);
	Function_64(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

