//Decompiled with MagicRDR v1.0
//Function Count : 211
//Statics Count : 187
//Natives Count : 395
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
	vector3 vLocal_23 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_26 = { 0.0f, 0.0f, 0.0f };
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	float fLocal_35 = 0.0f;
	struct<121> Local_36 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uScriptParam_21 = 1;
	var uScriptParam_22 = 0;
	var uScriptParam_23 = 0;
	var uScriptParam_24 = 0;
	var uScriptParam_25 = 0;
	var uScriptParam_26 = 0;
	var uScriptParam_27 = 0;
	var uScriptParam_28 = 0;
	var uScriptParam_29 = 0;
	var uScriptParam_30 = 0;
	var uScriptParam_31 = 0;
	var uScriptParam_32 = 0;
	var uScriptParam_33 = 0;
	var uScriptParam_34 = 0;
	var uScriptParam_35 = 0;
	var uScriptParam_36 = 0;
	var uScriptParam_37 = 0;
	var uScriptParam_38 = 0;
	var uScriptParam_39 = 0;
	var uScriptParam_40 = 0;
	var uScriptParam_41 = 0;
	var uScriptParam_42 = 0;
	var uScriptParam_43 = 0;
	var uScriptParam_44 = 0;
	var uScriptParam_45 = 0;
	var uScriptParam_46 = 0;
	var uScriptParam_47 = 0;
	var uScriptParam_48 = 0;
	var uScriptParam_49 = 0;
	var uScriptParam_50 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	bool bVar4[2];
	int iVar7[2];
	bool bVar10;
	bool bVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	struct<9> Var53;
	
	iLocal_14 = 0;
	iLocal_15 = 0;
	fLocal_35 = 0.0f;
	iLocal_76 = 0;
	iLocal_77 = 0;
	iLocal_80 = 0;
	iLocal_83 = 0;
	iLocal_84 = 1;
	bLocal_93 = false;
	iLocal_94 = 0;
	iLocal_95 = 0;
	iLocal_96 = 0;
	iLocal_97 = 0;
	bLocal_98 = false;
	bLocal_99 = false;
	bLocal_100 = false;
	bLocal_101 = false;
	iLocal_102 = 0;
	iLocal_103 = 1;
	iLocal_104 = 0;
	bLocal_105 = false;
	iLocal_106 = 0;
	strcpy(&cLocal_108, "holdup", 16);
	iLocal_120 = 0;
	iLocal_123 = 0;
	bLocal_132 = false;
	iLocal_134 = 0;
	iVar0 = 0;
	uVar1 = Function_195(Global_29005, 0x42a00000, 0x469c4000, 0, 0, 4294967295);
	bVar3 = CREATE_LAYOUT(Function_194());
	bVar10 = 12;
	Function_193(&uLocal_85, 0.0f);
	bVar47 = false;
	iVar49 = 0;
	iVar50 = Function_191(2, 2, 1, 0, 0);
	iVar51 = (iVar50 / 2);
	if (!IS_POPSET_VALID(Global_30750[6]))
	{
		iVar0 = 5;
	}
	else
	{
		switch (Global_29004)
		{
			case 0x00000000:
				if (Global_29006 == Global_30640[0])
				{
					bLocal_99 = true;
					iVar7[0] = 118;
				}
				else if (Global_29006 == Global_30668[1])
				{
					iVar7[0] = 57;
					bLocal_105 = true;
				}
				else
				{
					LOG_ERROR("hold up error");
				}
				break;
			
			case 0x00000001:
				if (Global_29006 == Global_30693[0])
				{
					bLocal_100 = true;
					iVar7[0] = 273;
				}
				else if (Global_29006 == Global_30685[0])
				{
					iVar7[0] = 238;
				}
				else
				{
					LOG_ERROR("hold up error");
				}
				break;
			
			case 0x00000002:
				if (Global_29006 == Global_30717[0])
				{
					bLocal_101 = true;
					iVar7[0] = 119;
					bLocal_105 = true;
				}
				else if (Global_29006 == Global_30723[1])
				{
					iVar7[0] = 208;
				}
				else
				{
					LOG_ERROR("hold up error");
				}
				break;
		}
		Function_190(&bVar10, iVar7[0], 3, 0);
		iVar7[1] = Function_179(16, 1, 0, 0, 1);
		if (iVar7[1] == 4294967295)
		{
			iVar0 = 5;
		}
		else
		{
			Function_190(&bVar10, iVar7[1], 3, 0);
		}
	}
	if (iVar0 != 5)
	{
		if ((bLocal_99 || bLocal_101) || bLocal_100)
		{
			Function_178(iVar7[1]);
		}
		else
		{
			Function_177(&iVar7, 2);
		}
		Function_175(&bVar10, "thanks", 5, 0);
		Function_175(&bVar10, "custom/thanks", 8, 0);
		Function_175(&bVar10, "stand_ambient", 5, 0);
		Function_175(&bVar10, "custom/stand_ambient", 8, 0);
		Function_175(&bVar10, "shopkeeper_return", 1, 0);
		Function_175(&bVar10, "Stolen_Pleading_Panic_Return", 5, 0);
		Function_175(&bVar10, "custom/Stolen_Pleading_Panic_Return", 8, 0);
		Function_175(&bVar10, "shopkeeper_return", 5, 0);
		Function_175(&bVar10, "custom/shopkeeper_return", 8, 0);
	}
	iVar52 = 0;
	vVar53.f_8 = 0,3f;
	if (Global_3382 == 1)
	{
		iVar0 = 5;
	}
	iVar59 = 0;
	bVar60 = false;
	while (!IS_EXITFLAG_SET())
	{
		bVar58 = 600;
		if (Function_174(&bVar60, &iVar0, &iVar59, &bVar58, bVar47))
		{
			if (bVar60)
			{
				Function_172(&bVar4, 4294967295);
			}
			else
			{
				Function_170(&bVar4, 4294967295);
			}
		}
		switch (iVar0)
		{
			case 0x00000000:
				if (Function_165(&bVar10))
				{
					iVar0 = 1;
				}
				break;
			
			case 0x00000001:
				if (!Function_162(&Global_34574, &Local_36))
				{
					iVar0 = 5;
					bVar58 = false;
					break;
				}
				*(&ScriptParam_0 + 8) = { StackVal, StackVal, Local_36 };
				(&ScriptParam_0 + 8)->f_4 = (StackVal + 0,1f);
				*(&ScriptParam_0 + 20) = { StackVal, StackVal, *(&Local_36 + 12) };
				if (iVar52 != 0 && ScriptParam_0.f_32)
				{
					Function_161("Still scanning for the proper terrain to run this event.  Move the player around to find a good spawn location.", -1.0f, 1, 2, 1, 0);
				}
				if (((StackVal && !Function_159(StackVal, (StackVal && Function_160(StackVal, Function_160(StackVal, StackVal, Global_34573, *(&ScriptParam_0 + 8)) < 10.0f, Global_34573, *(&ScriptParam_0 + 8)) > 120.0f), *(&ScriptParam_0 + 8), 0x3f800000, 0x42960000, 1, 1, 0)) && Function_158(&ScriptParam_0 + 8, &ScriptParam_0 + 52, 0, 0)) || ScriptParam_0.f_32)
				{
					if (ScriptParam_0.f_32)
					{
						HUD_CLEAR_SMALL_TEXT_QUEUE();
					}
					iVar0 = 2;
					bVar58 = false;
					break;
				}
				else
				{
					iVar52++;
				}
				if (iVar52 < 15 && !ScriptParam_0.f_32)
				{
					if (ScriptParam_0.f_32)
					{
						HUD_CLEAR_SMALL_TEXT_QUEUE();
					}
					iVar0 = 5;
					bVar58 = false;
					break;
				}
				break;
			
			case 0x00000002:
				bLocal_91 = CREATE_POINT_IN_LAYOUT(bVar3, Function_194(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
				ATTACH_OBJECTS(bLocal_91, Global_34573, Function_194(), 0.0f, 0,5f, -3.0f, 0.0f, 0.0f, 0.0f, 4294967295);
				if (!Function_159(StackVal, StackVal, *(&ScriptParam_0 + 8), 0x3f800000, 0x42960000, 1, 1, 0) || ScriptParam_0.f_32)
				{
					if (VDIST(Global_34574, *(&ScriptParam_0 + 8)) > 15.0f && !ScriptParam_0.f_32)
					{
						PRINTVECTOR(*(&ScriptParam_0 + 8));
						PRINTNL();
						PRINTVECTOR(Global_34574);
						PRINTNL();
						iVar0 = 5;
						bVar58 = false;
						break;
					}
					else
					{
						if (!Function_156(ScriptParam_0.f_56, 0.0f, 1, 0, ScriptParam_0.f_32))
						{
							iVar0 = 5;
							bVar58 = false;
							break;
						}
						bVar57 = CREATE_VOLUME_IN_LAYOUT(Global_26150, Function_194(), 3, *(&ScriptParam_0 + 8), 0.0f, 0.0f, 0.0f, ScriptParam_0.f_52, 20.0f, ScriptParam_0.f_52);
						DECOR_SET_INT(bVar57, "script", GET_THIS_SCRIPT_ID());
						Function_152(&bVar57, ScriptParam_0.f_32);
						bLocal_79 = CREATE_VOLUME_IN_LAYOUT(bVar3, Function_194(), false, *(&Local_36 + 48), 0.0f, 0.0f, 0.0f, 5.0f, 10.0f, 5.0f);
						bLocal_112 = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_ON_OBJECT(bVar3, Function_194(), "shopkeeper_return", *(&Local_36 + 48), *(&Local_36 + 48 + 12)));
						GRINGO_ALLOW_ACTIVATION(bLocal_112, false);
						if (bLocal_99)
						{
							bVar4[0] = Function_149(&Global_6298, &Global_7189, 13, 0, 0, 1);
							bLocal_98 = true;
							bVar4[1] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(&cLocal_108, bVar3, StackVal) + Vector(vVar53, *(&ScriptParam_0 + 8), iVar7[1]), *(&ScriptParam_0 + 20));
						}
						else if (bLocal_101)
						{
							bVar4[0] = Function_149(&Global_7035, &Global_8279, 27, 0, 0, 1);
							bLocal_98 = true;
							bVar4[1] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(&cLocal_108, bVar3, StackVal) + Vector(vVar53, *(&ScriptParam_0 + 8), iVar7[1]), *(&ScriptParam_0 + 20));
						}
						else if (bLocal_100)
						{
							bVar4[0] = Function_149(&Global_6815, &Global_7954, 3, 0, 0, 1);
							bLocal_98 = true;
							bVar4[1] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(&cLocal_108, bVar3, StackVal) + Vector(vVar53, *(&ScriptParam_0 + 8), iVar7[1]), *(&ScriptParam_0 + 20));
						}
						else
						{
							iVar48 = 0;
							while (iVar48 <= 2)
							{
								memcpy(&cLocal_108, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_147("holdup"), 4);
								bVar4[iVar48] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(&cLocal_108, bVar3, StackVal) + Vector(vVar53, *(&ScriptParam_0 + 8), iVar7[iVar48]), *(&ScriptParam_0 + 20));
								vVar53.f_8 = (vVar53.z + vVar53.z);
								iVar48++;
							}
						}
						DECOR_SET_BOOL(bVar4[1], "CrimeHoldupBadguy", true);
						SET_ACTOR_CAN_PLAY_GESTURES(bVar4[0], false);
						SET_ACTOR_CAN_PLAY_GESTURES(bVar4[1], false);
						if ((bLocal_99 || bLocal_101) || bLocal_100)
						{
							Function_146(bVar4[0]);
							if (VDIST(Function_146(bVar4[0]), *(&ScriptParam_0 + 8)) < 30.0f || !IS_AI_ACTOR_UNALERTED(bVar4[0]))
							{
								iVar0 = 5;
								bVar58 = false;
								break;
							}
						}
						if (!Function_144(bVar4[0], 0))
						{
							iVar0 = 5;
							bVar58 = false;
							break;
						}
						bLocal_73 = CREATE_ACTORSET_IN_LAYOUT(bVar3, "fleeActors", 0);
						ADD_ACTORSET_MEMBER(bLocal_73, bVar4[0]);
						ADD_ACTORSET_MEMBER(bLocal_73, Global_34573);
						DECOR_SET_BOOL(bVar4[1], "NoMoney", true);
						DECOR_SET_BOOL(bVar4[1], "LootCorpse_CreateBlip", true);
						DECOR_SET_INT(bVar4[1], "LootCorpse_WhichBlip", 335);
						DECOR_SET_BOOL(bVar4[1], "crimeLootTarget", true);
						AI_DONT_HARM_ACTOR(bVar4[1]);
						iLocal_133 = CREATE_CAMERA_IN_LAYOUT(bVar3, Function_194(), 0);
						bLocal_78 = CREATE_OBJECTSET_IN_LAYOUT("HoldudHoldup", bVar3, 12, 1);
						DECOR_SET_OBJECT(bVar4[1], "lootCorpse_objSet", GET_OBJECT_FROM_OBJECTSET(bLocal_78));
						MEMORY_ATTACK_ON_SIGHT(bVar4[1], 0);
						Function_143(bVar4[1]);
						Function_142(bVar4[1], 0);
						SET_ACTOR_CUTSCENE_MODE(bVar4[0], 1);
						Function_141(bVar4[1], 0);
						TASK_STAND_STILL(bVar4[0], -1.0f, 0, 0);
						DELETE_ALL_WEAPONS_FROM_ACTOR(bVar4[0]);
						SET_ACTOR_UPDATE_PRIORITY(bVar4[1], false);
						SET_ACTOR_UPDATE_PRIORITY(bVar4[0], false);
						Function_140(bVar4[0]);
						AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar4[0], 0);
						UNK_0x99AFD2D1(bVar4[0], 1, 1);
						TASK_OVERRIDE_SET_MOVETYPE(bVar4[1], 4);
						TASK_PRIORITY_SET(bVar4[0], false);
						SET_ACTOR_ALLOW_BUMP_REACTIONS(bVar4[1], 0);
						iVar0 = 3;
						Function_139(&uLocal_72, 16);
						bVar58 = false;
					}
				}
				else
				{
					iVar0 = 5;
				}
				break;
			
			case 0x00000003:
				Function_129(&bVar4, 2, &bVar47, ScriptParam_0.f_56, 100, 0x42a00000, 1);
				if (!Function_122(ScriptParam_0.f_56, bVar4[0], &iLocal_77, &uVar2, 1, 1, 1, 1) && iVar49 == 14)
				{
					if ((Global_3403 || Global_3404) && iLocal_94)
					{
						Function_121("crimeHoldUpObj04", 0x40f00000, 1, 2, 0, 0, 0);
					}
					iVar0 = 5;
					break;
				}
				if (((Function_120(Global_63399, 1) || Function_120(Global_63399, 32)) && !bVar47) && !iLocal_77)
				{
					iVar0 = 5;
					break;
				}
				if (GET_DEBUG_DRAW_STATE())
				{
				}
				if (iVar49 != 7 || iVar49 != 6)
				{
					if (IS_ACTOR_VALID(bVar4[1]))
					{
						if (!Function_119(bVar4[1], Global_34573, 165.0f))
						{
							Function_121("crimeHoldUp08", 0x40f00000, 1, 2, 0, 0, 0);
							bVar58 = false;
							iVar0 = 5;
						}
					}
				}
				if (iVar49 == 14)
				{
					if (bLocal_98)
					{
					}
					if (Function_116(bVar4[0], &iLocal_74, &fLocal_35, 0, 0, 0x40400000) || !IS_ACTOR_VALID(bVar4[1]))
					{
						if (IS_ACTOR_VALID(bVar4[0]))
						{
							RESET_ANIM_SET_FOR_ACTOR(bVar4[0], 1);
							TASK_FLEE_ACTOR(bVar4[0], Global_34573, -1.0f, -1.0f, 0, 0, 0);
							Function_115(bVar4[0]);
						}
						if (IS_ACTOR_VALID(bVar4[1]))
						{
							RESET_ANIM_SET_FOR_ACTOR(bVar4[1], 1);
							TASK_FLEE_ACTOR(bVar4[1], Global_34573, -1.0f, -1.0f, 0, 0, 0);
							Function_115(bVar4[1]);
						}
						iVar0 = 5;
						bVar58 = false;
						break;
					}
				}
				else if (Function_116(bVar4[0], &iLocal_74, &fLocal_35, uLocal_72, 0, 0x40400000))
				{
					switch (iLocal_74)
					{
						case 0x00000001:
							Function_113("victimFailAggroDanger", iLocal_94, 1);
							bLocal_75 = true;
							break;
						
						case 0x00000002:
							Function_113("victimFailAggroShot", iLocal_94, 1);
							bLocal_75 = true;
							break;
						
						case 0x00000004:
							if (iLocal_94)
							{
								Function_113("victimFailAggroHostile", iLocal_94, 1);
							}
							bLocal_75 = true;
							break;
						
						case 0x00000008:
							Function_113("victimFailAggroAttacked", iLocal_94, 1);
							Function_112(bVar4[0], &Global_34573);
							Function_115(bVar4[0]);
							bLocal_75 = true;
							iVar0 = 5;
							bVar58 = false;
							break;
							break;
					}
					if (bLocal_75)
					{
						Function_115(bVar4[0]);
						CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bVar4[0]);
						SET_ACTOR_CUTSCENE_MODE(bVar4[0], 0);
						RESET_ANIM_SET_FOR_ACTOR(bVar4[0], 1);
						TASK_FLEE_ACTOR(bVar4[0], Global_34573, -1.0f, -1.0f, 0, 0, 0);
						iVar0 = 5;
						bVar58 = false;
						break;
					}
				}
				if (IS_ACTOR_VALID(bVar4[0]))
				{
					if (!iLocal_94)
					{
						if (!Function_119(bVar4[0], Global_34573, 120.0f))
						{
							iVar0 = 5;
							break;
						}
					}
					else if (IS_ACTOR_VALID(bVar4[1]))
					{
						if (IS_ACTOR_HOGTIED(bVar4[1]) && !iLocal_120)
						{
							CLEAR_AMBIENT_OBJECTS_VOLUME(bLocal_79, 15);
							ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_79);
							ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_79);
							SET_OBJECT_POSITION(bVar4[0], *(&Local_36 + 24));
							iLocal_120 = 1;
						}
					}
					else if (iLocal_96 && !iLocal_120)
					{
						SET_OBJECT_POSITION(bVar4[0], *(&Local_36 + 24));
						ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_79);
						ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_79);
						iLocal_120 = 1;
					}
					if (iLocal_95 && !iLocal_97)
					{
						if (!Function_119(bVar4[0], Global_34573, (fLocal_81 + 95.0f)))
						{
							Function_121("crimeHoldUpObj03", 0x40f00000, 1, 2, 0, 0, 0);
							iVar0 = 5;
							Function_108(4294967246, 1, 0);
							break;
						}
					}
					if (iLocal_83 && !iLocal_95)
					{
						if (VDIST(vLocal_116, Global_34574) < (fLocal_82 + 95.0f))
						{
							Function_121("crimeHoldUpObj03", 0x40f00000, 1, 2, 0, 0, 0);
							iVar0 = 5;
							break;
						}
					}
					if (!IS_ACTOR_ALIVE(bVar4[0]))
					{
						if (iLocal_94)
						{
							Function_121("crimeHoldUp06", 0x40f00000, 1, 2, 0, 0, 0);
						}
						bVar58 = false;
						iVar0 = 5;
						break;
					}
				}
				if (Function_20(&iVar49, &bVar4, &bVar58, &uVar1, &bVar3, iVar51, iVar50))
				{
					iVar0 = 5;
					break;
				}
				break;
			
			case 0x00000005:
				iVar0 = 6;
				bVar58 = false;
				break;
			
			case 0x00000006:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				bVar58 = false;
				break;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(bVar58);
		}
	}
	if (bLocal_132)
	{
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	}
	Function_170(&bVar4, 4294967295);
	Function_19(&iVar7, 2);
	if (ScriptParam_0.f_32)
	{
		Global_3399 = 0;
	}
	if (!bVar47)
	{
		Function_156(ScriptParam_0.f_56, 0.0f, 0, 1, 0);
	}
	if (IS_ACTOR_VALID(bVar4[0]))
	{
		Function_17(bVar4[0]);
		SET_MOVER_FROZEN(bVar4[0], false);
		if (bLocal_98)
		{
			RESET_ANIM_SET_FOR_ACTOR(bVar4[0], 1);
			if (bLocal_99)
			{
				Function_9(&Global_6298, &Global_7189, 13, 0);
			}
			else if (bLocal_101)
			{
				Function_9(&Global_7035, &Global_8279, 27, 0);
			}
			else if (bLocal_100)
			{
				Function_9(&Global_6815, &Global_7954, 3, 0);
			}
		}
		AI_GOAL_LOOK_CLEAR(bVar4[0]);
		Function_8(bVar4[0]);
		if (!bLocal_75)
		{
			SET_ACTOR_CUTSCENE_MODE(bVar4[0], 0);
			RESET_ANIM_SET_FOR_ACTOR(bVar4[0], 1);
		}
		AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar4[0], 1);
		UNK_0x99AFD2D1(bVar4[0], 0, 0);
		if (!bLocal_75)
		{
			TASK_CLEAR(bVar4[0]);
			Function_7(bVar4[0]);
		}
	}
	if (IS_ACTOR_VALID(bVar4[1]))
	{
		if (DECOR_CHECK_EXIST(bVar4[1], "CrimeHoldupBadguy"))
		{
			DECOR_REMOVE(bVar4[1], "CrimeHoldupBadguy");
		}
		if (IS_MOVER_FROZEN(bVar4[1]))
		{
			SET_MOVER_FROZEN(bVar4[1], false);
		}
		TASK_FLEE_ACTOR(bVar4[1], Global_34573, -1.0f, -1.0f, 0, 0, 0);
		DECOR_REMOVE(bVar4[1], "LootCorpse_CreateBlip");
		TASK_OVERRIDE_CLEAR_MOVETYPE(bVar4[1]);
	}
	if (IS_OBJECTSET_VALID(bLocal_78))
	{
		if (GET_OBJECTSET_SIZE(bLocal_78) >= 0)
		{
			bLocal_92 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, bLocal_78);
			if (IS_OBJECT_VALID(bLocal_92))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bLocal_92)))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(bLocal_92));
				}
			}
		}
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_21))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_21);
	}
	if (IS_VOLUME_VALID(bLocal_22))
	{
		DESTROY_VOLUME(bLocal_22);
	}
	if (IS_BLIP_VALID(bLocal_107))
	{
		REMOVE_BLIP(bLocal_107);
	}
	if (DECOR_CHECK_EXIST(Global_34573, "CHBadguy_Gone"))
	{
		DECOR_REMOVE(Global_34573, "CHBadguy_Gone");
	}
	Function_17(bVar4[0]);
	Function_3(&bVar10);
	if (!bVar47)
	{
		Function_1(&bVar4, 4294967295);
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

void Function_1(var uParam0, int iParam1) //Position: 0xFB6 / 4022
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_2(uParam0[iVar0]);
		iVar0++;
	}
	return;
}

void Function_2(int iParam0) //Position: 0xFE3 / 4067
{
	if (IS_ACTOR_VALID(*iParam0))
	{
		RESET_ANIM_SET_FOR_ACTOR(*iParam0, 0);
		TASK_FLEE_ACTOR(*iParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
		TASK_PRIORITY_SET(*iParam0, false);
	}
	return;
}

void Function_3(int iParam0) //Position: 0x100E / 4110
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_4(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_4(var uParam0, int iParam1) //Position: 0x1034 / 4148
{
	if (Function_6(uParam0[iParam13], 4))
	{
		if (Function_6(uParam0[iParam13], 1))
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
			Function_5(uParam0[iParam13], 1);
			Function_5(uParam0[iParam13], 2);
			Function_5(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_5(var uParam0, int iParam1) //Position: 0x1162 / 4450
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_6(var uParam0, int iParam1) //Position: 0x117C / 4476
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_7(bool bParam0) //Position: 0x1199 / 4505
{
	bLocal_119 = TASK_SEQUENCE_OPEN();
	TASK_GO_NEAR_COORD(false, &Local_36, 3.0f, 1);
	TASK_WANDER(false, -1.0f);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bParam0, bLocal_119);
	TASK_SEQUENCE_RELEASE(bLocal_119, 1);
	TASK_PRIORITY_SET(bParam0, 2);
	return;
}

void Function_8(bool bParam0) //Position: 0x11C7 / 4551
{
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_ACTOR_CAN_BE_HARDLOCKED(bParam0, 1);
		AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bParam0, 0);
	}
	return;
}

void Function_9(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x11E1 / 4577
{
	int iVar0;
	
	iVar0 = iParam2;
	if (!iVar0 > *uParam0 && iVar0 <= 0)
	{
		return;
	}
	if (!Function_16(uParam0[iVar02], 1))
	{
		return;
	}
	if (!Function_16(uParam0[iVar02], 2))
	{
		return;
	}
	if (Function_16(uParam0[iVar02], 8))
	{
		STREAMING_EVICT_ACTOR((*uParam1)[iVar03], 4294967295);
		Function_15(uParam0[iVar02], 8);
	}
	Function_15(uParam0[iVar02], 1);
	if (!IS_PERS_CHAR_VALID(StackVal))
	{
		return;
	}
	Function_14(StackVal);
	if (bParam3)
	{
		Function_10(uParam0, uParam1, iParam2, 0);
	}
}

void Function_10(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x127B / 4731
{
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (!IS_PERS_CHAR_ALIVE(StackVal))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(StackVal) > GET_CURRENT_GAME_TIME())
			{
				Function_13(uParam0[iParam22], 4);
				uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
				ADD_TIME(uParam0[iParam22] + 4, Function_12(Global_29007), Function_11(Global_29007), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_16(uParam0[iParam22], 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(StackVal, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(StackVal);
			uParam1[iParam23]->f_8 = "";
		}
	}
	else if (!Function_16(uParam0[iParam22], 1) && !bParam3)
	{
		Function_13(uParam0[iParam22], 4);
		uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
		ADD_TIME(uParam0[iParam22] + 4, Function_12(Global_29007), Function_11(Global_29007), false, 0);
	}
}

int Function_11(int iParam0) //Position: 0x13CA / 5066
{
	switch (iParam0)
	{
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
			return 0;
			break;
		
		default:
			return 12;
			break;
	}
	return 0;
}

int Function_12(int iParam0) //Position: 0x13F5 / 5109
{
	switch (iParam0)
	{
		case 0x00000003:
			return 5;
			break;
		
		case 0x00000004:
			return 3;
			break;
		
		case 0x00000005:
			break;
			return 1;
		
		default:
			return 0;
			break;
	}
	return 0;
}

void Function_13(var uParam0, int iParam1) //Position: 0x1429 / 5161
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

int Function_14(bool bParam0) //Position: 0x1438 / 5176
{
	bool bVar0;
	bool bVar1;
	
	if (IS_PERS_CHAR_VALID(bParam0))
	{
		SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bParam0, 0);
		bVar0 = GET_ACTOR_FROM_PERS_CHAR(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			TASK_CLEAR(bVar0);
			DEREFERENCE_ACTOR(bVar0);
			TASK_PRIORITY_SET(bVar0, 3);
			SET_ACTOR_UPDATE_PRIORITY(bVar0, 2);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(bVar0, 0);
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar0, true);
		}
		bVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
		if (IS_OBJECT_VALID(bVar1))
		{
			return GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(bVar1), "ScriptStructure", "stolen_flag", 0);
		}
	}
	return 0;
}

void Function_15(var uParam0, int iParam1) //Position: 0x14D2 / 5330
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_16(var uParam0, int iParam1) //Position: 0x14E9 / 5353
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_17(bool bParam0) //Position: 0x1505 / 5381
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_18(bParam0);
		return 1;
	}
	return 0;
}

void Function_18(bool bParam0) //Position: 0x151B / 5403
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

void Function_19(var uParam0, int iParam1) //Position: 0x1547 / 5447
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

bool Function_20(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, bool bParam5, int iParam6) //Position: 0x1569 / 5481
{
	*uParam3 = *uParam3;
	switch (*uParam0)
	{
		case 0x00000000:
			Function_107(uParam1[1], uParam1[0]);
			if (Function_119((*uParam1)[0], Global_34573, 80.0f))
			{
				TASK_CLEAR((*uParam1)[1]);
				TASK_FLEE_ACTORSET((*uParam1)[1], bLocal_73, -1.0f, -1.0f, 0, 0, 0);
				TASK_PRIORITY_SET((*uParam1)[1], false);
				*uParam0 = 1;
			}
			break;
		
		case 0x00000001:
			*iParam2 = 0;
			Function_107(uParam1[1], uParam1[0]);
			if (!Function_119((*uParam1)[1], Global_34573, 120.0f))
			{
				return 1;
			}
			if (!IS_ACTOR_ALIVE((*uParam1)[1]) && GET_LAST_ATTACKER((*uParam1)[1]) != Global_34573)
			{
				*uParam0 = 21;
				break;
			}
			if (!Function_119((*uParam1)[1], Global_34573, 80.0f) && !iLocal_102)
			{
				TASK_CLEAR((*uParam1)[1]);
				TASK_STAND_STILL((*uParam1)[1], -1.0f, 0, 0);
				TASK_PRIORITY_SET((*uParam1)[1], true);
				iLocal_102 = 1;
			}
			if (Function_106((*uParam1)[0], (*uParam1)[1]) < 10.0f && !iLocal_104)
			{
				iLocal_104 = 1;
				TASK_CLEAR((*uParam1)[0]);
				TASK_FOLLOW_OBJECT_AT_DISTANCE((*uParam1)[0], bLocal_91, 1.0f, 2);
				TASK_PRIORITY_SET((*uParam1)[0], false);
			}
			if (Function_119((*uParam1)[0], Global_34573, 30.0f))
			{
				iLocal_104 = 1;
				TASK_CLEAR((*uParam1)[0]);
				TASK_FOLLOW_OBJECT_AT_DISTANCE((*uParam1)[0], bLocal_91, 1.0f, 2);
				TASK_PRIORITY_SET((*uParam1)[0], false);
				HUD_CLEAR_SMALL_TEXT_QUEUE();
				Function_105((*uParam1)[0], Global_34573, "crimeHoldUp07", "crimeHoldUp07", 5, 60, 1, 1);
				ADD_BLIP_FOR_ACTOR((*uParam1)[0], 325, 0, 2, 0);
				iLocal_77 = 1;
				TASK_CLEAR((*uParam1)[1]);
				TASK_FLEE_ACTORSET((*uParam1)[1], bLocal_73, -1.0f, -1.0f, 0, 0, 0);
				TASK_PRIORITY_SET((*uParam1)[1], false);
				*uParam0 = 2;
				Function_193(&uLocal_85, 0.0f);
			}
			break;
		
		case 0x00000002:
			*iParam2 = 0;
			Function_107(uParam1[1], uParam1[0]);
			if (!Function_119((*uParam1)[1], Global_34573, 130.0f))
			{
				return 1;
			}
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), (*uParam1)[0], 1.0f, 14.0f, 1, 1, 0))
			{
				Function_102();
				TASK_CLEAR((*uParam1)[0]);
				TASK_FACE_ACTOR((*uParam1)[0], Global_34573, 1, 3212836864);
				SET_ANIM_SET_FOR_ACTOR((*uParam1)[0], "Stolen_Pleading_Panic_Return", 0);
				SET_ACTION_NODE_FOR_ACTOR((*uParam1)[0], "Stolen_Pleading_Panic_Return/Stolen_pleading");
				AI_GOAL_LOOK_AT_ACTOR((*uParam1)[0], Global_34573, 1, 1065353216, 3212836864, 3212836864, 0);
				TASK_PRIORITY_SET((*uParam1)[0], false);
				*uParam0 = 4;
			}
			break;
		
		case 0x00000004:
			Function_107(uParam1[1], uParam1[0]);
			if (Function_98(&uLocal_85, 3.0f) && !IS_AMBIENT_SPEECH_PLAYING((*uParam1)[0]))
			{
				if (Function_119((*uParam1)[1], Global_34573, 140.0f))
				{
					Function_193(&uLocal_85, 0.0f);
					Function_105((*uParam1)[0], Global_34573, "crimeHoldUp02", "crimeHoldUp01", 5, 60, 1, 1);
					*uParam0 = 5;
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 0x00000005:
			Function_107(uParam1[1], uParam1[0]);
			if (Function_98(&uLocal_85, 2.0f))
			{
				Function_17((*uParam1)[0]);
				Function_121("crimeHoldUpObj02", 0x40f00000, 1, 2, 0, 0, 0);
				iLocal_94 = 1;
				bLocal_107 = ADD_BLIP_FOR_ACTOR((*uParam1)[1], 322, 0.0f, 3, 0);
				SET_BLIP_IMPAIRMENT_MASK(bLocal_107, false);
				Function_97((*uParam1)[0], &iLocal_113);
				*uParam0 = 6;
			}
			break;
		
		case 0x00000006:
			if (!iLocal_76)
			{
				if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), (*uParam1)[1], 1.0f, 45.0f, 1, 1, 0))
				{
					iLocal_76 = 1;
					AUDIO_MUSIC_SET_MOOD("nCHASE_LOW", 0, 4294967295, 4294967295);
				}
			}
			*iParam2 = 0;
			if (iLocal_84 && !IS_AMBIENT_SPEECH_PLAYING((*uParam1)[0]))
			{
				SET_ACTION_NODE_FOR_ACTOR((*uParam1)[0], "Stolen_Pleading_Panic_Return/Stolen_panic");
				iLocal_84 = 0;
			}
			if (!bLocal_93)
			{
				if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), (*uParam1)[1], 1.0f, 15.0f, 1, 1, 0) && MEMORY_GET_IS_VISIBLE((*uParam1)[1], Global_34573))
				{
					TASK_OVERRIDE_CLEAR_MOVETYPE((*uParam1)[1]);
					Function_112((*uParam1)[1], &Global_34573);
					bLocal_93 = true;
				}
			}
			if (!IS_ACTOR_ALIVE((*uParam1)[1]))
			{
				if (IS_ACTOR_VALID((*uParam1)[1]))
				{
					iLocal_83 = 1;
					Function_146((*uParam1)[1]);
					vLocal_116 = { StackVal, StackVal, Function_146((*uParam1)[1]) };
					fLocal_82 = Function_96(&Global_34574, &vLocal_116);
					vLocal_23 = { StackVal, StackVal, vLocal_116 };
					vLocal_116.f_4 = (vLocal_116.y + 8.0f);
					if (FIND_WATER_INTERSECTION(vLocal_116, vLocal_23, &uLocal_29, &uLocal_32))
					{
						Function_113("crimeHoldUpObj03", 1, 1);
						Function_17((*uParam1)[0]);
						Function_7((*uParam1)[0]);
						return 1;
					}
				}
			}
			if (!IS_ACTOR_VALID((*uParam1)[1]))
			{
				if (iLocal_103)
				{
					AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
					Function_121("crimeHoldUp09", 0x40f00000, 1, 2, 0, 0, 0);
					iLocal_103 = 0;
				}
				if (DECOR_CHECK_EXIST(Global_34573, "CHBadguy_Gone"))
				{
					DECOR_REMOVE(Global_34573, "CHBadguy_Gone");
					Function_113("crimeHoldUpObj03", 1, 1);
					Function_17((*uParam1)[0]);
					Function_7((*uParam1)[0]);
					return 1;
				}
				if (IS_OBJECT_VALID(bLocal_92))
				{
					GET_OBJECT_POSITION(bLocal_92, &vLocal_26);
					vLocal_23 = { StackVal, StackVal, vLocal_26 };
					vLocal_26.f_4 = (vLocal_26.y + 8.0f);
					if (FIND_WATER_INTERSECTION(vLocal_26, vLocal_23, &uLocal_29, &uLocal_32))
					{
						Function_113("crimeHoldUpObj03", 1, 1);
						Function_17((*uParam1)[0]);
						Function_7((*uParam1)[0]);
						return 1;
					}
				}
				if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(Global_34573)))
				{
					if (DECOR_CHECK_EXIST(GRINGO_GET_TARGET(GET_CURRENT_GRINGO(Global_34573)), "crimeLootTarget"))
					{
						iLocal_96 = 1;
						*uParam0 = 9;
					}
				}
			}
			else if (IS_ACTOR_HOGTIED((*uParam1)[1]))
			{
				Function_17((*uParam1)[1]);
				Function_105(Global_34573, (*uParam1)[1], "crimeHoldUpPlayer_msg04", "crimeHoldUpPlayer_msg04", 5, 60, 1, 1);
				iLocal_95 = 1;
				fLocal_81 = Function_96(&Global_34574, &iLocal_113);
				Function_121("crimeHoldUpHelp01", 0x40f00000, 1, 2, 0, 0, 0);
				bLocal_107 = ADD_BLIP_FOR_ACTOR((*uParam1)[0], 325, 0.0f, 3, 0);
				DECOR_REMOVE((*uParam1)[1], "LootCorpse_CreateBlip");
				*uParam0 = 11;
			}
			else if (!bLocal_93)
			{
				Function_107(uParam1[1], uParam1[0]);
			}
			break;
		
		case 0x00000009:
			bLocal_22 = CREATE_VOLUME_IN_LAYOUT(*uParam4, Function_194(), false, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 5,5f, 4.0f, 5,5f);
			bLocal_21 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("crimeHoldUpContext", bLocal_22, 25, 5, 0, false, 0, 0, 4294967295, 0);
			ATTACH_OBJECTS(bLocal_22, (*uParam1)[0], Function_194(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
			Function_95(iParam6, 1);
			iLocal_95 = 1;
			fLocal_81 = Function_96(&Global_34574, &iLocal_113);
			HUD_CLEAR_OBJECTIVE_QUEUE();
			Function_121("crimeHoldUp03", 0x40f00000, 1, 2, 0, 0, 0);
			Function_17((*uParam1)[0]);
			bLocal_107 = ADD_BLIP_FOR_ACTOR((*uParam1)[0], 325, 0.0f, 3, 0);
			*uParam0 = 10;
			break;
		
		case 0x0000000A:
			if (Function_94(uParam1[0], uParam1[1]))
			{
				SET_ACTION_NODE_FOR_ACTOR((*uParam1)[0], "Stolen_Pleading_Panic_Return/excited_return/mobile_and_loop/loop");
				*uParam0 = 17;
			}
			else
			{
				*iParam2 = 0;
			}
			break;
		
		case 0x00000014:
			if (Function_94(uParam1[0], uParam1[1]))
			{
				RESET_ANIM_SET_FOR_ACTOR((*uParam1)[0], 1);
				HUD_CLEAR_OBJECTIVE_QUEUE();
				SET_ACTION_NODE_FOR_ACTOR((*uParam1)[0], "Stolen_Pleading_Panic_Return/excited_return/mobile_and_loop/loop");
				*uParam0 = 17;
			}
			else
			{
				*iParam2 = 0;
			}
			break;
		
		case 0x0000000B:
			if (!Function_144((*uParam1)[1], 0))
			{
				DECOR_SET_BOOL((*uParam1)[1], "LootCorpse_CreateBlip", true);
				*uParam0 = 6;
				break;
			}
			if (!IS_ACTOR_HOGTIED((*uParam1)[1]))
			{
				iLocal_95 = 0;
				ADD_BLIP_FOR_ACTOR((*uParam1)[1], 322, 0, 2, 0);
				TASK_FLEE_ACTOR((*uParam1)[1], Global_34573, -1.0f, -1.0f, 0, 0, 0);
				Function_121("crimeHoldUpObj02", 0x40f00000, 1, 2, 0, 0, 0);
				Function_17((*uParam1)[0]);
				*uParam0 = 6;
			}
			if (Function_94(uParam1[0], uParam1[1]))
			{
				SET_ACTION_NODE_FOR_ACTOR((*uParam1)[0], "Stolen_Pleading_Panic_Return/excited_return/mobile_and_loop/loop");
				*uParam0 = 12;
			}
			else
			{
				*iParam2 = 0;
			}
			break;
		
		case 0x0000000C:
			if (Function_144((*uParam1)[1], 0))
			{
				if ((iLocal_80 != 0 && Function_106(Global_34573, (*uParam1)[0]) > 15.0f) && iLocal_120)
				{
					HUD_CLEAR_OBJECTIVE_QUEUE();
					if (IS_ACTOR_RIDING(Global_34573))
					{
						Function_121("crimeHoldUpObj07", 0x40f00000, 1, 2, 0, 0, 0);
					}
					else
					{
						Function_121("crimeHoldUpObj06", 0x40f00000, 1, 2, 0, 0, 0);
					}
					iLocal_80 = 1;
				}
				if (((Function_106(Global_34573, (*uParam1)[0]) > 4.0f && GET_ACTOR_HOGTIE_STATE((*uParam1)[1]) != 3) && !IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "pickupvictim")) && !IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "pickupvictimhorse"))
				{
					HUD_CLEAR_OBJECTIVE_QUEUE();
					if (GET_ACTOR_HOGTIE_STATE((*uParam1)[1]) == 3)
					{
						GRINGO_ALLOW_ACTIVATION(bLocal_112, true);
						Function_79(&iLocal_134, uParam1, bParam5);
						DECOR_SET_INT((*uParam1)[0], "iAdditionalMoney", 10);
						*uParam0 = 13;
					}
					else
					{
						Function_105(Global_34573, (*uParam1)[0], "crimeHoldUpPlayer_msg01", "crimeHoldUpPlayer_msg01", 5, 60, 1, 1);
						Function_77(iParam6, 1);
						*uParam0 = 18;
					}
				}
			}
			else
			{
				DECOR_SET_BOOL((*uParam1)[1], "LootCorpse_CreateBlip", true);
				*uParam0 = 6;
				break;
			}
			break;
		
		case 0x0000000D:
			if (Function_79(&iLocal_134, uParam1, bParam5))
			{
				Function_74(0);
				AUDIO_MUSIC_SET_MOOD("IDLE", 0, 4294967295, 4294967295);
				Function_193(&uLocal_88, 0.0f);
				bLocal_75 = true;
				iLocal_97 = 1;
				*uParam0 = 14;
			}
			break;
		
		case 0x0000000E:
			if (Function_106(Global_34573, (*uParam1)[0]) < 100.0f && !Function_73((*uParam1)[0], 1.0f, 80.0f, 1, 1, 0))
			{
				if ((bLocal_99 || bLocal_101) || bLocal_100)
				{
					DESTROY_ACTOR((*uParam1)[1]);
				}
				else
				{
					DESTROY_ACTOR((*uParam1)[0]);
					DESTROY_ACTOR((*uParam1)[1]);
				}
				return 1;
			}
			if (Function_71(&uLocal_88, 60.0f))
			{
				RESET_ANIM_SET_FOR_ACTOR((*uParam1)[0], 1);
				return 1;
			}
			break;
		
		case 0x00000011:
			*iParam2 = 0;
			if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_21))
			{
				if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(bLocal_21))
				{
					RESET_ANIM_SET_FOR_ACTOR((*uParam1)[0], 1);
					RELEASE_SCRIPT_USE_CONTEXT(bLocal_21);
					DESTROY_VOLUME(bLocal_22);
					HUD_CLEAR_OBJECTIVE_QUEUE();
					*uParam0 = 18;
				}
			}
			break;
		
		case 0x00000012:
			*iParam2 = 0;
			if (Function_70() <= iParam6)
			{
				AUDIO_MUSIC_SET_MOOD("IDLE", 0, 4294967295, 4294967295);
				Function_121("crimeHoldUpObj03", 0x40f00000, 1, 2, 0, 0, 0);
				Function_108(4294967246, 1, 0);
				Function_105(Global_34573, (*uParam1)[0], "crimeHoldUpPlayer_msg02", "crimeHoldUpPlayer_msg02", 5, 60, 1, 1);
				bLocal_119 = TASK_SEQUENCE_OPEN();
				TASK_TAUNT_ACTOR(0, Global_34573, 0.0f, 25.0f, 0, 10.0f);
				TASK_WANDER(false, -1.0f);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM((*uParam1)[0], bLocal_119);
				TASK_SEQUENCE_RELEASE(bLocal_119, 1);
				TASK_PRIORITY_SET((*uParam1)[0], 2);
				return 1;
			}
			AUDIO_MUSIC_SET_MOOD("IDLE", 0, 4294967295, 4294967295);
			if (iLocal_106 == 0)
			{
				iLocal_106 = 1;
				DECOR_SET_INT((*uParam1)[0], "iAdditionalMoney", 10);
			}
			AI_GOAL_LOOK_AT_ACTOR_NEW((*uParam1)[0], Global_34573, 25.0f, 1);
			TASK_FACE_ACTOR((*uParam1)[0], Global_34573, 1, 3212836864);
			*uParam0 = 19;
			break;
		
		case 0x00000013:
			*iParam2 = 0;
			if (Function_69((*uParam1)[0]))
			{
				if (Function_58(uParam1[0], &Global_34573, &fLocal_121, &iLocal_123, &bLocal_124, *uParam4, 25.0f, &bLocal_130, bLocal_91, iParam2, "thanks", "thanks", "crimeHoldUp04", "crimeHoldUp04", 30.0f, 2, -5.0f, 0, 4.0f, 0, "", 1, 0, 0, 0x40800000))
				{
					if (bLocal_130 == 1)
					{
						Function_21(20, 1, 0);
						Function_108(50, 1, 0);
						Function_77(bParam5, 1);
						TASK_CLEAR((*uParam1)[0]);
						Function_7((*uParam1)[0]);
						bLocal_75 = true;
						TASK_PRIORITY_SET((*uParam1)[0], 2);
						if (IS_BLIP_VALID(bLocal_107))
						{
							REMOVE_BLIP(bLocal_107);
						}
						return 1;
					}
				}
				if (Function_144((*uParam1)[0], 0))
				{
					Function_21(20, 1, 0);
					bLocal_75 = true;
					Function_7((*uParam1)[0]);
					TASK_PRIORITY_SET((*uParam1)[0], 2);
				}
				return 1;
			}
			break;
		
		case 0x00000015:
			*iParam2 = 0;
			if (Function_69((*uParam1)[0]))
			{
				if (Function_58(uParam1[0], &Global_34573, &fLocal_121, &iLocal_123, &bLocal_124, *uParam4, 25.0f, &bLocal_130, bLocal_91, iParam2, "", "", "", "", 30.0f, 2, -5.0f, 1, 4.0f, 1, 0, 0, 1, 0, 0x40800000))
				{
					if (bLocal_130 == 1)
					{
						Function_7((*uParam1)[0]);
						Function_21(20, 1, 0);
						return 1;
					}
				}
				if (Function_144((*uParam1)[0], 0))
				{
					Function_7((*uParam1)[0]);
					TASK_PRIORITY_SET((*uParam1)[0], 2);
				}
				return 1;
			}
			break;
	}
	return 0;
}

void Function_21(int iParam0, bool bParam1, bool bParam2) //Position: 0x243F / 9279
{
	int iVar0;
	bool bVar1;
	
	if (Function_57(0) && (!Global_3380 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Global_3380)
	{
		Global_12976.f_164 = (Global_12976.f_164 + iParam0);
		return;
	}
	if (bVar1 == 0)
	{
		return;
	}
	iVar0 = Function_56(3);
	Function_53();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_51(3, bVar1);
		if (!bParam2)
		{
			if (!Function_50(Global_76848, 4))
			{
				Function_44(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_31(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_30(3));
	iVar0 = Function_56(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_23(4, Function_29(Global_12976.f_156), 1);
				Function_22(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_23(4, Function_29(Global_12976.f_156), 1);
				Function_22(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_23(4, Function_29(Global_12976.f_156), 1);
				Function_22(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_23(4, Function_29(Global_12976.f_156), 1);
				Function_22(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_23(4, Function_29(Global_12976.f_156), 1);
				Function_22(Global_12976.f_152, Global_12976.f_156);
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

void Function_22(int iParam0, int iParam1) //Position: 0x2602 / 9730
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,2f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000001:
		case 0x00000002:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,3f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000003:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,4f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000004:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 120.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,5f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, true);
			break;
		
		case 0x00000005:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 180.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,8f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, true);
			break;
		
		default:
			break;
	}
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, true);
			if (iParam1 != 4 || iParam1 != 5)
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, true);
			}
			else
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, false);
			}
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, true);
			SET_ACTOR_SHOULD_TAUNT(Global_34573, 1);
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, false);
			SET_ACTOR_SHOULD_TAUNT(Global_34573, 0);
			break;
		
		default:
			break;
	}
	return;
}

int Function_23(int iParam0, char* cParam1, bool bParam2) //Position: 0x2860 / 10336
{
	bool bVar0;
	int iVar1;
	
	bVar0 = iParam0;
	if (bVar0 >= 696)
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
	Function_27(iParam0, cParam1, 0, 1);
	iVar1 = Function_24();
	Global_49199[iVar1] = 0.0f;
	strcpy(&Global_49205[iVar120] + 16, cParam1, 32);
	strcpy(&Global_49205[iVar120] + 8, "QME=", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
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

int Function_24() //Position: 0x29E5 / 10725
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
	Function_25();
	return 0;
}

void Function_25() //Position: 0x2A84 / 10884
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
		Function_26(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_26(int iParam0) //Position: 0x2B33 / 11059
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

int Function_27(int iParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0x2B91 / 11153
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
		Function_28(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, uParam3);
	}
	return 1;
}

void Function_28(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x2EE3 / 12003
{
	CLEAR_STAT_MESSAGE();
	if (!Global_49306)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 1, false, 0, 0);
		}
		else if (bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 0, false, 0, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 1, 0, 0, false, 0, 0);
		}
	}
}

var Function_29(int iParam0) //Position: 0x2F66 / 12134
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

float Function_30(int iParam0) //Position: 0x2FF5 / 12277
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

int Function_31(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x302E / 12334
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
	Function_43(iParam0, TO_FLOAT(bParam1), 1);
	Function_42(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_32(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_32(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x324E / 12878
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_41(390))), 32);
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
					bVar19 = (Function_30(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_30(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_39(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_36(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_34(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_33(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_194(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_33(int iParam0) //Position: 0x387B / 14459
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_34(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x388C / 14476
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_35("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_35("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_35("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_35(char* cParam0, char* cParam1) //Position: 0x3981 / 14721
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_36(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x399A / 14746
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_38(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_37(Function_38(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_37(int iParam0, int iParam1) //Position: 0x39FF / 14847
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int Function_38(int iParam0, bool bParam1) //Position: 0x3A11 / 14865
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_39(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x3A23 / 14883
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
	if (((Function_40(iParam0) != 19 || Function_40(iParam0) != 17) || Function_40(iParam0) != 10) || Function_40(iParam0) != 9)
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

int Function_40(int iParam0) //Position: 0x3B53 / 15187
{
	return Global_35278[iParam020].f_48;
}

var Function_41(int iParam0) //Position: 0x3B62 / 15202
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_42(int iParam0) //Position: 0x3B9F / 15263
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

int Function_43(int iParam0, bool bParam1, bool bParam2) //Position: 0x3D39 / 15673
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
		Global_34581[iVar1] = (Global_34581[iVar1] + bParam1);
	}
	else
	{
		Global_34581[iVar1] = bParam1;
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

void Function_44(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x3F53 / 16211
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_46(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_45(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_45(char* cParam0, int iParam1) //Position: 0x3FBF / 16319
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

bool Function_46(bool bParam0, var uParam1, int iParam2) //Position: 0x3FF6 / 16374
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
		if (Function_48(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_47(uVar0))
		{
			case 0x00000002:
				if (!Function_50(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_47(char* cParam0) //Position: 0x406F / 16495
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

int Function_48(int iParam0) //Position: 0x4110 / 16656
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_49(&iVar1, 2147483648);
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

void Function_49(int iParam0, int iParam1) //Position: 0x414D / 16717
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

bool Function_50(var uParam0, int iParam1) //Position: 0x4160 / 16736
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_51(int iParam0, bool bParam1) //Position: 0x4173 / 16755
{
	bool bVar0;
	int iVar1;
	
	Function_31(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_52(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_49205[iVar120].f_72 != 0 || Global_49205[iVar120].f_72 != 1)
		{
			Global_49199[iVar1] = (Global_49199[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_49205[iVar120] + 8, "QME+", 8);
			strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
			Global_49205[iVar120].f_48 = 26;
			Global_49205[iVar120].f_68 = iParam0;
			Global_49205[iVar120].f_72 = 0;
			return 1;
		}
	}
	iVar1 = Function_24();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

var Function_52(int iParam0, int iParam1) //Position: 0x4310 / 17168
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

void Function_53() //Position: 0x4351 / 17233
{
	Function_55(3, 0.0f);
	Function_54(3, 10000.0f);
	return;
}

int Function_54(int iParam0, int iParam1) //Position: 0x4367 / 17255
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_55(int iParam0, int iParam1) //Position: 0x43A7 / 17319
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

int Function_56(int iParam0) //Position: 0x43E7 / 17383
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

var Function_57(bool bParam0) //Position: 0x4428 / 17448
{
	return (*&Global_12976 + 104)[bParam0];
}

bool Function_58(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, float fParam6, int iParam7, bool bParam8, var uParam9, bool bParam10, bool bParam11, bool bParam12, int iParam13, int iParam14, int iParam15, float fParam16, bool bParam17, float fParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, int iParam23, float fParam24) //Position: 0x4437 / 17463
{
	bool bVar0;
	
	*uParam9 = *uParam9;
	fParam18 = fParam18;
	bParam17 = bParam17;
	if (!IS_ACTOR_VALID(*uParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(*uParam1))
	{
		return 0;
	}
	if (GET_LAST_ATTACKER(*uParam0) == Global_34573)
	{
		TASK_FLEE_ACTOR(*uParam0, Global_34573, 150.0f, -1.0f, 0, 0, 0);
		return 0;
	}
	switch (*uParam3)
	{
		case 0x00000000:
			if (bParam21)
			{
				*uParam3 = 3;
			}
			else
			{
				MEMORY_CLEAR_EVENTS(*uParam0, 0);
				ACTOR_START_FORCE_HOLSTER(*uParam0, 1, 0);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(*uParam0, 1);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(*uParam0, true);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(*uParam0, 0);
				*uParam2 = Function_106(*uParam0, Global_34573);
				AI_GOAL_LOOK_AT_ACTOR_NEW(*uParam0, *uParam1, -1.0f, 1);
				bParam8 = CREATE_POINT_IN_LAYOUT(bParam5, Function_194(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
				ATTACH_OBJECTS(bParam8, *uParam1, Function_194(), 0.0f, 0,5f, fParam16, 0.0f, 0.0f, 0.0f, 4294967295);
				if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), *uParam0, 1.0f, iParam14, 1, 1, 0) || Function_106(Global_34573, *uParam0) > 2.0f)
				{
					TASK_FOLLOW_OBJECT_AT_DISTANCE(*uParam0, bParam8, 1.0f, iParam15);
					TASK_PRIORITY_SET(*uParam0, true);
				}
				*uParam3 = 1;
			}
			break;
		
		case 0x00000001:
			if ((Function_106(*uParam0, *uParam1) - *uParam2) < fParam6)
			{
				TASK_FLEE_ACTOR(*uParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
				return 0;
			}
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), *uParam0, 1.0f, iParam14, 1, 1, 0))
			{
				bVar0 = TASK_SEQUENCE_OPEN();
				TASK_FACE_ACTOR(false, *uParam1, 0, 3212836864);
				TASK_FACE_ACTOR(false, *uParam1, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(*uParam0, bVar0);
				TASK_SEQUENCE_RELEASE(bVar0, 1);
				TASK_PRIORITY_SET(*uParam0, true);
				*uParam9 = 0;
				*uParam3 = 4;
			}
			else if (!Function_144(*uParam0, 0))
			{
				if (IS_ACTOR_VALID(*uParam0))
				{
					TASK_FLEE_ACTOR(*uParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
				}
				return 0;
			}
			break;
		
		case 0x00000003:
			RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
			SET_ANIM_SET_FOR_ACTOR(*uParam0, bParam10, 0);
			SET_ACTION_NODE_FOR_ACTOR(*uParam0, bParam11);
			TASK_FACE_ACTOR(*uParam0, *uParam1, 1, 3212836864);
			*uParam3 = 4;
			break;
		
		case 0x00000004:
			*uParam9 = 0;
			if (GET_NTH_TASK_STATUS(*uParam0, 0) != 0 || bParam21)
			{
				if (!bParam21)
				{
					SET_ANIM_SET_FOR_ACTOR(*uParam0, bParam10, 1);
					SET_ACTION_NODE_FOR_ACTOR(*uParam0, bParam11);
				}
				if (bParam19)
				{
					Function_105(*uParam0, Global_34573, "nThank_You", 0, 5, 60, 1, 1);
				}
				else
				{
					Function_105(*uParam0, Global_34573, bParam12, iParam13, 5, 60, 1, 1);
				}
				*uParam3 = 5;
				Function_193(uParam4, 0.0f);
			}
			else if (!Function_144(*uParam0, 0))
			{
				return 0;
			}
			break;
		
		case 0x00000005:
			if (iParam23 && !Function_68(*uParam0))
			{
				if (fParam24 != -1.0f)
				{
					if (!IS_AMBIENT_SPEECH_PLAYING(*uParam0))
					{
						RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
						Function_59(*uParam0, 4, 0, 1);
					}
				}
				else if (Function_98(uParam4, fParam24))
				{
					RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
					Function_59(*uParam0, 4, 0, 1);
				}
			}
			if (bParam22)
			{
				if (!IS_AMBIENT_SPEECH_PLAYING(*uParam0))
				{
					if (!IS_AMBIENT_SPEECH_PLAYING(Global_34573))
					{
						if (!IS_STRING_VALID(bParam20))
						{
							SAY_SINGLE_LINE_CONTEXT(Global_34573, 409, *uParam0, 0, 0, 5, 4294967295, 4294967295, 0, 1);
						}
						else
						{
							Function_105(Global_34573, *uParam0, bParam20, bParam20, 5, 60, 1, 1);
						}
						*uParam3 = 6;
					}
				}
			}
			else if (!IS_AMBIENT_SPEECH_PLAYING(*uParam0))
			{
				*uParam3 = 6;
			}
			break;
		
		case 0x00000006:
			if (iParam23 && !Function_68(*uParam0))
			{
				if (Function_98(uParam4, fParam24))
				{
					RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
					Function_59(*uParam0, 4, 0, 1);
				}
			}
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(*uParam0, bParam11) && !IS_AMBIENT_SPEECH_PLAYING(Global_34573))
			{
				RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
				*iParam7 = 1;
				if (bParam17)
				{
					Function_59(*uParam0, 4, 0, iParam15);
					TASK_PRIORITY_SET(*uParam0, 2);
				}
				AI_GOAL_LOOK_CLEAR(*uParam0);
				ACTOR_END_FORCE_HOLSTER(*uParam0);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(*uParam0, 4294967295);
				return 1;
			}
			break;
	}
	return 1;
}

int Function_59(bool bParam0, int iParam1, int iParam2, int iParam3) //Position: 0x47DD / 18397
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
					Function_60(bVar1, 0, 0, 0, 1);
				}
				bVar0++;
			}
		}
		Function_60(bParam0, iParam1, iParam2, iParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_60(bool bParam0, int iParam1, var uParam2, var uParam3, int iParam4) //Position: 0x48BD / 18621
{
	char* cVar0[32];
	
	Function_67();
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
	if (Function_66(bParam0) == 1)
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
	Function_65(bParam0, 0);
	Function_64(bParam0, iParam1);
	Function_63(bParam0, uParam2);
	Function_62(bParam0, uParam3);
	if (Function_61(bParam0) != 5)
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

int Function_61(bool bParam0) //Position: 0x4B0B / 19211
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior");
}

void Function_62(bool bParam0, bool bParam1) //Position: 0x4B2E / 19246
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_63(bool bParam0, bool bParam1) //Position: 0x4B51 / 19281
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_target", bParam1);
	return;
}

void Function_64(bool bParam0, bool bParam1) //Position: 0x4B75 / 19317
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_65(bool bParam0, bool bParam1) //Position: 0x4B9B / 19355
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_state", bParam1);
	return;
}

int Function_66(bool bParam0) //Position: 0x4BBE / 19390
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
}

void Function_67() //Position: 0x4BDC / 19420
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

bool Function_68(bool bParam0) //Position: 0x4C26 / 19494
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516))
	{
		return 1;
	}
	return 0;
}

bool Function_69(int iParam0) //Position: 0x4C4B / 19531
{
	switch (iLocal_135)
	{
		case 0x00000000:
			Function_105(Global_34573, iParam0, "crimeHoldUpPlayer_msg01", "crimeHoldUpPlayer_msg01", 5, 60, 1, 1);
			iLocal_135 = 1;
			break;
		
		case 0x00000001:
			if (!IS_AMBIENT_SPEECH_PLAYING(Global_34573))
			{
				return 1;
			}
			break;
		
		case 0x00000002:
			return 1;
			break;
	}
	return 0;
}

int Function_70() //Position: 0x4CC6 / 19654
{
	return Function_56(0);
}

bool Function_71(var uParam0, float fParam1) //Position: 0x4CD0 / 19664
{
	if (Function_98(uParam0, fParam1))
	{
		Function_72(uParam0);
		return 1;
	}
	return 0;
}

void Function_72(bool bParam0) //Position: 0x4CE8 / 19688
{
	bParam0->f_4 = 0.0f;
	bParam0->f_8 = 0.0f;
	*bParam0 = 0;
	return;
}

bool Function_73(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x4CFC / 19708
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void Function_74(bool bParam0) //Position: 0x4D16 / 19734
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

void Function_75(int iParam0) //Position: 0x4D3A / 19770
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_76(int iParam0) //Position: 0x4D57 / 19799
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

int Function_77(bool bParam0, bool bParam1) //Position: 0x4D6A / 19818
{
	bool bVar0;
	
	bVar0 = Function_56(0);
	if ((Function_56(0) - bParam0) <= 0)
	{
		bParam0 = bVar0;
	}
	if (bParam0 >= 0)
	{
		Function_78(0, bParam0, 0);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, (bParam0 * 4294967295), 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_56(0));
	return 1;
}

int Function_78(int iParam0, bool bParam1, int iParam2) //Position: 0x4DFA / 19962
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
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: iDecreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] - TO_FLOAT(bParam1));
	Function_42(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_32(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			REMOVE_COLLECTABLE(&(Global_35278[iParam020]), Global_34573);
			iVar1++;
		}
	}
	return 1;
}

bool Function_79(int iParam0, var uParam1, bool bParam2) //Position: 0x4FF5 / 20469
{
	vector3 vVar0;
	float fVar3;
	
	switch (*iParam0)
	{
		case 0x00000000:
			Function_90(1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_17((*uParam1)[0]);
			SET_CURRENT_CAMERA_ON_CHANNEL(iLocal_133, 0, 0f, 0f, 0, 0, 0, 0, 0, 0);
			INIT_CAMERA_FROM_GAME_CAMERA(iLocal_133);
			SET_CAMERA_POSITION(iLocal_133, *(&Local_36 + 72));
			SET_CAMERA_TARGET_OBJECT(iLocal_133, (*uParam1)[0], 0);
			Function_86();
			Function_105(Global_34573, (*uParam1)[0], "crimeHoldUpPlayer_msg03", "crimeHoldUpPlayer_msg03", 5, 60, 1, 1);
			GRINGO_GET_USE_COMPONENT_POSITION_EXT(bLocal_112, "Player", &vVar0);
			fVar3 = GRINGO_GET_USE_COMPONENT_HEADING_EXT(bLocal_112, "Player");
			SET_OBJECT_POSITION(Global_34573, vVar0);
			SET_OBJECT_ORIENTATION(Global_34573, 0.0f, fVar3, 0.0f);
			SET_ANIM_SET_FOR_ACTOR(Global_34573, "shopkeeper_return", 0);
			SET_ACTION_NODE_FOR_ACTOR(Global_34573, "shopkeeper_return/gent");
			TASK_STAND_STILL((*uParam1)[0], -1.0f, 0, 0);
			TASK_PRIORITY_SET((*uParam1)[0], true);
			RESET_ANIM_SET_FOR_ACTOR((*uParam1)[0], 1);
			GRINGO_GET_USE_COMPONENT_POSITION_EXT(bLocal_112, "Shopkeeper", &vVar0);
			fVar3 = GRINGO_GET_USE_COMPONENT_HEADING_EXT(bLocal_112, "Shopkeeper");
			SET_OBJECT_POSITION((*uParam1)[0], vVar0);
			SET_OBJECT_ORIENTATION((*uParam1)[0], 0.0f, fVar3, 0.0f);
			SET_ANIM_SET_FOR_ACTOR((*uParam1)[0], "shopkeeper_return", 0);
			SET_ACTION_NODE_FOR_ACTOR((*uParam1)[0], "shopkeeper_return/gped");
			TASK_STAND_STILL((*uParam1)[1], -1.0f, 0, 0);
			TASK_PRIORITY_SET((*uParam1)[1], true);
			RESET_ANIM_SET_FOR_ACTOR((*uParam1)[1], 1);
			GRINGO_GET_USE_COMPONENT_POSITION_EXT(bLocal_112, "UseCase1", &vVar0);
			fVar3 = GRINGO_GET_USE_COMPONENT_HEADING_EXT(bLocal_112, "UseCase1");
			SET_OBJECT_POSITION((*uParam1)[1], vVar0);
			SET_OBJECT_ORIENTATION((*uParam1)[1], 0.0f, fVar3, 0.0f);
			SET_ANIM_SET_FOR_ACTOR((*uParam1)[1], "shopkeeper_return", 0);
			SET_ACTION_NODE_FOR_ACTOR((*uParam1)[1], "shopkeeper_return/hillb");
			Function_193(&uLocal_127, 0.0f);
			*iParam0 = 1;
			break;
		
		case 0x00000001:
			if (!IS_AMBIENT_SPEECH_PLAYING(Global_34573) || Function_98(&uLocal_127, 8.0f))
			{
				if (bLocal_105)
				{
					Function_105((*uParam1)[0], Global_34573, "crimeHoldUp04", "crimeHoldUp04", 5, 60, 1, 1);
				}
				else
				{
					Function_105((*uParam1)[0], Global_34573, "crimeHoldUp05", "crimeHoldUp05", 5, 60, 1, 1);
				}
				Function_193(&uLocal_127, 0.0f);
				*iParam0 = 2;
			}
			break;
		
		case 0x00000002:
			if (!IS_AMBIENT_SPEECH_PLAYING((*uParam1)[0]) || Function_98(&uLocal_127, 8.0f))
			{
				if (Function_98(&uLocal_127, 3.0f))
				{
					Function_21(20, 1, 0);
					Function_108(100, 1, 0);
					Function_95(bParam2, 1);
					Function_85(2);
					SET_CAMERA_POSITION(iLocal_133, *(&Local_36 + 96));
					SET_CAMERA_TARGET_OBJECT(iLocal_133, Global_34573, 0);
					Function_193(&uLocal_127, 0.0f);
					*iParam0 = 3;
				}
			}
			break;
		
		case 0x00000003:
			if (Function_98(&uLocal_127, 5.0f))
			{
				Function_193(&uLocal_127, 0.0f);
				*iParam0 = 4;
			}
			break;
		
		case 0x00000004:
			SET_MOVER_FROZEN((*uParam1)[0], true);
			SET_MOVER_FROZEN((*uParam1)[1], true);
			bLocal_122 = DECOR_GET_OBJECT((*uParam1)[1], "HogtiedGringoAttached");
			if (IS_OBJECT_VALID(bLocal_122))
			{
				GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bLocal_122), false);
			}
			Function_80(2, 0, 1, 1, 1, 1, 1, 1, 1, 1);
			REMOVE_CAMERA_FROM_CHANNEL(iLocal_133, 0);
			DESTROY_CAMERA(iLocal_133);
			return 1;
			break;
	}
	return 0;
}

void Function_80(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, var uParam9) //Position: 0x53C3 / 21443
{
	bool bVar0;
	
	bParam1 = bParam1;
	if (bParam6)
	{
		CAMERA_RESET(0);
	}
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		if (bParam3)
		{
			SET_PLAYER_CONTROL(0, 1, 0, 0);
		}
		bVar0 = Function_84();
		if (IS_ACTOR_VALID(bVar0))
		{
			if (bParam2)
			{
				TASK_CLEAR(bVar0);
			}
			if (!bParam1)
			{
				if (HUD_IS_FADED())
				{
					RESET_ANIM_SET_FOR_ACTOR(bVar0, 0);
				}
				else
				{
					RESET_ANIM_SET_FOR_ACTOR(bVar0, 1);
				}
			}
			if (Function_83())
			{
				if (!(IS_ACTOR_ON_LADDER(bVar0) || IS_ACTOR_USING_LEDGE(bVar0)))
				{
					ACTOR_END_FORCE_HOLSTER(bVar0);
					if (iParam0 != 0 || (iParam0 != 2 && Global_76850))
					{
						ACTOR_DRAW_LAST_WEAPON(bVar0, 0);
					}
				}
			}
			else
			{
				ACTOR_END_FORCE_HOLSTER(bVar0);
			}
			SET_ACTOR_INVULNERABILITY(bVar0, false);
			if (Global_34108[0])
			{
				Global_34108[0] = 0;
				UI_CHEAT_SET_VALUE(0, 0);
			}
		}
		Function_31(21, 1, 0, 0);
	}
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam7)
	{
		Function_82();
	}
	if (bParam4)
	{
		ENABLE_USE_CONTEXTS(1);
	}
	if (bParam8)
	{
		UI_POP("nCutscenes");
	}
	AUDIO_ENABLE_PLAYER_TAUNTS();
	Function_81(uParam9);
}

void Function_81(bool bParam0) //Position: 0x54B3 / 21683
{
	bParam0 = bParam0;
	HUD_ENABLE(bParam0);
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	SET_TIME_ACCELERATION(Global_63398);
	STREAMING_UNLOAD_SCENE();
	AI_STOP_IGNORING_ACTORS();
	if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol")))
	{
		DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol"));
	}
	ACTOR_DATA_GRAVITY_LIMIT(0);
	Global_63096 = 0;
	Global_63097 = 0;
	if (IS_VOLUME_VALID(Global_63117))
	{
		if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(Global_63117))
		{
			REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Global_63117);
		}
		if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(Global_63117))
		{
			REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Global_63117);
		}
	}
	return;
}

void Function_82() //Position: 0x5558 / 21848
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

bool Function_83() //Position: 0x556D / 21869
{
	return NET_IS_MANAGER_INITIALIZED();
}

var Function_84() //Position: 0x5576 / 21878
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_85(int iParam0) //Position: 0x558B / 21899
{
	Global_16876[iParam06].f_16++;
	if (Global_16876[iParam06].f_16 == 1)
	{
		Function_31(409, 1, 0, 0);
	}
	return;
}

void Function_86() //Position: 0x55BC / 21948
{
	bool bVar0;
	bool bVar1;
	
	Function_87(0, 0x40400000);
	bVar0 = GET_MOST_RECENT_MOUNT(Global_34573);
	bVar1 = Global_12976.f_36;
	if (IS_ACTOR_VALID(bVar0))
	{
		if (Function_106(bVar0, Global_34573) > 3.0f)
		{
			TELEPORT_ACTOR(bVar0, &Local_36 + 120, 1, 1, 1);
			Local_36.f_120 = (Local_36.f_120 + 0,7f);
		}
		TASK_CLEAR(bVar0);
		TASK_STAND_STILL(bVar0, 30.0f, 0, 0);
		TASK_PRIORITY_SET(bVar0, true);
	}
	if (IS_ACTOR_VALID(bVar1))
	{
		if (Function_106(bVar1, Global_34573) > 3.0f)
		{
			TELEPORT_ACTOR(bVar1, &Local_36 + 120, 1, 1, 1);
		}
		TASK_CLEAR(bVar1);
		TASK_STAND_STILL(bVar1, 30.0f, 0, 0);
		TASK_PRIORITY_SET(bVar1, true);
	}
	return;
}

void Function_87(bool bParam0, float fParam1) //Position: 0x5658 / 22104
{
	(&Global_12976 + 36)->f_28 = 0;
	Global_12976.f_236 = 0;
	if (GET_TASK_STATUS(Global_12976.f_36, 86) != 2)
	{
		TASK_CLEAR(Global_12976.f_36);
	}
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		if (bParam0 == 0.0f)
		{
			TASK_PRIORITY_SET(Global_12976.f_36, true);
			TASK_STAND_STILL(Global_12976.f_36, bParam0, 0, 0);
		}
	}
	if (IS_BLIP_VALID(Global_12976.f_240))
	{
		REMOVE_BLIP(Global_12976.f_240);
	}
	Function_89();
	Function_88();
	if (DECOR_CHECK_EXIST(Global_34573, "Player_SimWhistle"))
	{
		DECOR_REMOVE(Global_34573, "Player_SimWhistle");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "WhistleTimeWaited"))
	{
		DECOR_REMOVE(Global_34573, "WhistleTimeWaited");
	}
	DECOR_SET_FLOAT(Global_34573, "Player_IgnoreWhistle", (GET_CURRENT_GAME_TIME() + fParam1));
	return;
}

void Function_88() //Position: 0x5756 / 22358
{
	if (DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
	{
		DECOR_REMOVE(Global_34573, "HorseStolen");
	}
	return;
}

void Function_89() //Position: 0x5788 / 22408
{
	if (DECOR_CHECK_EXIST(Global_34573, "WhistleNavQuery"))
	{
		DESTROY_OBJECT(DECOR_GET_OBJECT(Global_34573, "WhistleNavQuery"));
		DECOR_REMOVE(Global_34573, "WhistleNavQuery");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "WhistleNavQueryPos"))
	{
		DECOR_REMOVE(Global_34573, "WhistleNavQueryPos");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "WhistlePosProbed"))
	{
		DECOR_REMOVE(Global_34573, "WhistlePosProbed");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "WhistleTimeWaited"))
	{
		DECOR_REMOVE(Global_34573, "WhistleTimeWaited");
	}
	return;
}

void Function_90(bool bParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x5885 / 22661
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	uParam1 = uParam1;
	if (bParam6)
	{
		UI_PUSH("nCutscenes");
	}
	HUD_CLEAR_HELP();
	UI_DUMP_MESSAGE_QUEUE_TO_NOTES(1);
	HUD_ENABLE(false);
	Function_82();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(Global_34573, "iDrunk", false);
	if (bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_84();
		if (IS_ACTOR_VALID(bVar1))
		{
			if (GET_WEAPON_IN_HAND(bVar1) != 4294967295)
			{
				Global_76850 = 1;
			}
			else
			{
				Global_76850 = 0;
			}
			if (bParam3)
			{
				TASK_CLEAR(bVar1);
			}
			if (bParam11)
			{
				bVar2 = GET_ATTACHED_HOGTIE_VICTIM(bVar1);
				if (IS_ACTOR_VALID(bVar2))
				{
					FREE_FROM_HOGTIE(bVar2);
					HOGTIE_ACTOR(bVar2);
				}
			}
			if (Function_83())
			{
				if (!(IS_ACTOR_ON_LADDER(bVar1) || IS_ACTOR_USING_LEDGE(bVar1)))
				{
					if (bParam0)
					{
						ACTOR_START_FORCE_HOLSTER(bVar1, 0, 0);
					}
					if (bParam2)
					{
						SET_PLAYER_POSTURE(0, 0, 0);
						TASK_OVERRIDE_SET_POSTURE(bVar1, false);
					}
				}
			}
			else
			{
				if (bParam0)
				{
					ACTOR_START_FORCE_HOLSTER(bVar1, 0, 0);
				}
				if (bParam2)
				{
					SET_PLAYER_POSTURE(0, 0, 0);
					TASK_OVERRIDE_SET_POSTURE(bVar1, false);
				}
			}
			SET_ACTOR_HEALTH(bVar1, GET_ACTOR_MAX_HEALTH(bVar1));
			SET_ACTOR_INVULNERABILITY(bVar1, true);
			AI_IGNORE_ACTOR(bVar1);
		}
		SET_PLAYER_CONTROL(0, 0, 0, 0);
		if (IS_PLAYER_DEADEYE(0))
		{
			CANCEL_DEADEYE();
			CANCEL_TIME_WARP(1);
		}
		if (bParam8)
		{
			if (IS_VOLUME_VALID(bParam7))
			{
				FIRE_STOP_FLAMES_IN_VOLUME(bParam7);
				DELETE_PROJECTILES_IN_VOLUME(bParam7);
			}
			else
			{
				FIRE_STOP_ALL_FIRES();
				Function_146(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_194(), 2, Function_146(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
				DELETE_PROJECTILES_IN_VOLUME(bVar0);
			}
		}
		Function_31(19, 1, 0, 0);
	}
	SET_TIME_ACCELERATION(0.0f);
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(1);
	}
	if (bParam4)
	{
		ENABLE_USE_CONTEXTS(0);
	}
	AI_GLOBAL_CLEAR_ALL_DANGER();
	if (bParam10)
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_93()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_93()));
		DECOR_SET_BOOL(Global_34573, "nquitBinos", true);
		UNK_0xE6C1DBD9(0);
		SET_DRAW_ACTOR(Global_34573, true);
		SHOW_PHYSINST(GET_PHYSINST_FROM_ACTOR(Global_34573));
		if (UI_ISACTIVE("BinocularsUI"))
		{
			UI_POP("BinocularsUI");
		}
	}
	ACTOR_DATA_GRAVITY_LIMIT(1);
	ENABLE_PIP(0, 0, 1);
	Global_63096 = 1;
	Global_63116 = GET_THIS_SCRIPT_ID();
	Global_63117 = "";
	if (IS_VOLUME_VALID(bVar0))
	{
		DESTROY_VOLUME(bVar0);
	}
	if (Function_92(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_91(0x4000000);
	}
	if (Function_92(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_91(0x8000000);
	}
}

void Function_91(int iParam0) //Position: 0x5B2E / 23342
{
	int iVar0;
	
	if (Function_120(iParam0, 1) && Function_120(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

bool Function_92(int iParam0) //Position: 0x5B62 / 23394
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_93() //Position: 0x5B7E / 23422
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_LAYOUTREF_VALID(bVar0))
	{
		bVar1 = CREATE_OBJECT_ITERATOR(bVar0);
		bVar2 = START_OBJECT_ITERATOR(bVar1);
		ITERATE_ON_OBJECT_TYPE(bVar1, 42);
		if (IS_OBJECT_VALID(bVar2))
		{
			while (IS_OBJECT_VALID(bVar2))
			{
				PRINTSTRING(GET_OBJECT_NAME(bVar2));
				PRINTNL();
				if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(bVar2), "bino_camera"))
				{
					return bVar2;
				}
				bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
			}
		}
		DESTROY_ITERATOR(bVar1);
	}
	return "";
}

bool Function_94(var uParam0, int iParam1) //Position: 0x5BFD / 23549
{
	if (IS_ACTOR_ON_FOOT(Global_34573))
	{
		if (GET_ACTOR_HOGTIE_STATE(*iParam1) == 3)
		{
			return Function_73(*uParam0, 1.0f, 30.0f, 1, 1, 0);
		}
		return Function_73(*uParam0, 1.0f, 35.0f, 1, 1, 0);
	}
	return Function_73(*uParam0, 1.0f, 39.0f, 1, 1, 0);
}

int Function_95(bool bParam0, bool bParam1) //Position: 0x5C4B / 23627
{
	bool bVar0;
	
	bVar0 = Function_56(0);
	if ((Function_56(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_31(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_56(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_31(597, bParam0, 0, 0);
	}
	if ((Function_56(597) + Function_56(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

float Function_96(var uParam0, int iParam1) //Position: 0x5D16 / 23830
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*iParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

void Function_97(bool bParam0, int iParam1) //Position: 0x5D34 / 23860
{
	GET_POSITION(bParam0, iParam1);
	return;
}

bool Function_98(var uParam0, float fParam1) //Position: 0x5D41 / 23873
{
	if (Function_101(uParam0))
	{
		if (Function_99(uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_99(bool bParam0) //Position: 0x5D5D / 23901
{
	if (Function_101(bParam0))
	{
		if (Function_100(bParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_100(int iParam0) //Position: 0x5E25 / 24101
{
	return Function_120(*iParam0, 2);
}

bool Function_101(bool bParam0) //Position: 0x5E32 / 24114
{
	return Function_120(*bParam0, 1);
}

void Function_102() //Position: 0x5E3F / 24127
{
	int iVar0;
	
	bLocal_132 = true;
	if (Global_29004 == 0)
	{
		iVar0 = Function_104(3);
		if (iVar0 == 0)
		{
			bLocal_131 = "FTR_SONG_02";
		}
		else if (iVar0 == 1)
		{
			bLocal_131 = "FTR_SONG_03";
		}
		else if (iVar0 == 2)
		{
			bLocal_131 = "FTR_SONG_07";
		}
	}
	else if (Global_29004 == 2)
	{
		bLocal_131 = "NRT_SONG_05";
	}
	else if (Global_29004 == 1)
	{
		if (Function_103())
		{
			bLocal_131 = "MEX_SONG_04";
		}
		else
		{
			bLocal_131 = "MEX_SONG_05";
		}
	}
	AUDIO_MUSIC_FORCE_TRACK(bLocal_131, "SILENT", 0.0f, 500, 4294967295, 3212836864, 0);
	return;
}

bool Function_103() //Position: 0x5F03 / 24323
{
	return (RAND_INT_RANGE(false, 1999) / 1000) != 0;
}

var Function_104(bool bParam0) //Position: 0x5F16 / 24342
{
	bParam0 = (bParam0 * 1000 - 1);
	return (RAND_INT_RANGE(false, bParam0) / 1000);
}

void Function_105(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x5F2F / 24367
{
	bParam1 = bParam1;
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0) && Function_106(bParam0, Global_34573) >= IntToFloat(iParam5))
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
						bParam3 = bParam3;
					}
				}
				else if (!SAY_SINGLE_LINE_STRING_BEAT(bParam0, bParam2, bParam1, 1, 1, iParam4, iParam7, 0, 1, 1))
				{
					bParam3 = bParam3;
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING(bParam0, bParam2, true, true, iParam4, 0, false, true);
			}
		}
	}
}

float Function_106(bool bParam0, bool bParam1) //Position: 0x5FBF / 24511
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

void Function_107(var uParam0, int iParam1) //Position: 0x60B0 / 24752
{
	if (Function_119(*uParam0, *iParam1, 30.0f) || !IS_ACTOR_ON_FOOT(Global_34573))
	{
		TASK_OVERRIDE_SET_MOVETYPE(*uParam0, 4);
	}
	else
	{
		TASK_OVERRIDE_SET_MOVETYPE(*uParam0, 2);
	}
	return;
}

void Function_108(int iParam0, bool bParam1, bool bParam2) //Position: 0x60E0 / 24800
{
	int iVar0;
	bool bVar1;
	
	if (Function_57(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_56(1);
	if ((iVar0 + bVar1) >= 5000)
	{
		bVar1 = (5000 - iVar0);
	}
	if ((iVar0 + bVar1) <= 4294962296)
	{
		bVar1 = (4294962296 - iVar0);
	}
	if (bParam1)
	{
		if (bVar1 >= 0)
		{
			Function_51(1, bVar1);
			if (!bParam2)
			{
				if (!Function_50(Global_76848, 1))
				{
					Function_44(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_111(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_50(Global_76848, 2))
				{
					Function_44(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_31(1, bVar1, 0, 0);
	}
	else
	{
		Function_78(1, (4294967295 * bVar1), 0);
	}
	if (Function_56(1) <= 4294962296)
	{
		Function_110(1, 4294962296, 0);
	}
	else if (Function_56(1) >= 5000)
	{
		Function_110(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_30(1));
	iVar0 = Function_56(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_23(2, Function_109(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_23(2, Function_109(Global_12976.f_152), 0);
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
				Function_23(2, Function_109(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_23(2, Function_109(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_23(2, Function_109(Global_12976.f_152), 1);
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
				Function_23(2, Function_109(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_23(2, Function_109(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_23(2, Function_109(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_23(2, Function_109(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_23(2, Function_109(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_23(2, Function_109(Global_12976.f_152), 1);
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
				Function_23(2, Function_109(Global_12976.f_152), 0);
			}
			break;
	}
	Function_22(Global_12976.f_152, Global_12976.f_156);
	return;
}

var Function_109(int iParam0) //Position: 0x63F5 / 25589
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

int Function_110(int iParam0, bool bParam1, bool bParam2) //Position: 0x6498 / 25752
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
		Function_43(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_42(iParam0);
	if (bParam2)
	{
		Function_32(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_111(int iParam0, bool bParam1) //Position: 0x6733 / 26419
{
	bool bVar0;
	int iVar1;
	
	Function_78(iParam0, bParam1, 0);
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
	iVar1 = Function_52(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_49205[iVar120].f_72 != 2 || Global_49205[iVar120].f_72 != 3)
		{
			Global_49199[iVar1] = (Global_49199[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_49205[iVar120] + 8, "QME-", 8);
			strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
			Global_49205[iVar120].f_48 = 26;
			Global_49205[iVar120].f_68 = iParam0;
			Global_49205[iVar120].f_72 = 2;
			return 1;
		}
	}
	iVar1 = Function_24();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

int Function_112(bool bParam0, int iParam1) //Position: 0x68CF / 26831
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
	MEMORY_REPORT_POSITION_AUTO(bParam0, *iParam1, true);
	TASK_KILL_CHAR(bParam0, *iParam1);
	TASK_PRIORITY_SET(bParam0, true);
	return 1;
}

void Function_113(bool bParam0, bool bParam1, bool bParam2) //Position: 0x69B4 / 27060
{
	if (bParam1)
	{
		HUD_CLEAR_HELP_QUEUE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
		Function_121(bParam0, 0x40f00000, 1, 2, 0, 0, 0);
		if (bParam2)
		{
			Function_114();
		}
	}
	return;
}

void Function_114() //Position: 0x69DC / 27100
{
	switch (Global_29004)
	{
		case 0x00000000:
			AUDIO_MUSIC_ONE_SHOT("FTR_BEAT_FAIL_SONG_01", 0, 0, 0, 0, 0);
			break;
		
		case 0x00000001:
			AUDIO_MUSIC_ONE_SHOT("MEX_BEAT_FAIL_SONG_01", 0, 0, 0, 0, 0);
			break;
		
		case 0x00000002:
			AUDIO_MUSIC_ONE_SHOT("NRT_BEAT_FAIL_SONG_01", 0, 0, 0, 0, 0);
			break;
	}
	return;
}

void Function_115(bool bParam0) //Position: 0x6A65 / 27237
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

bool Function_116(bool bParam0, var uParam1, float fParam2, var uParam3, bool bParam4, float fParam5) //Position: 0x6AB1 / 27313
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
		fVar0 = Function_106(bParam0, Global_34573);
		if (!Function_120(uParam3, 8))
		{
			if (GET_LAST_ATTACKER(bParam0) == Global_34573)
			{
				*uParam1 = 8;
				Function_117(bParam0);
				return 1;
			}
		}
		if (!Function_120(uParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(bParam0, 1.0f))
			{
				*uParam1 = 2;
				Function_117(bParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(bParam0, 1.0f, 1.0f))
			{
				*uParam1 = 2;
				Function_117(bParam0);
				return 1;
			}
		}
		if (!Function_120(uParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(bParam0) || (((GET_ACTOR_UNDER_RETICLE(Global_34573, 0) != bParam0 && IS_PLAYER_WEAPON_ZOOMED(Global_34573)) && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(Global_34573) != bParam0 && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f))
			{
				if (*fParam2 > 0.0f)
				{
					*uParam1 = 4;
					Function_117(bParam0);
					return 1;
				}
				if (*fParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - *fParam2) < 1,3f)
					{
						*uParam1 = 4;
						Function_117(bParam0);
						return 1;
					}
				}
				*fParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_120(uParam3, 1))
		{
			if (Global_3403 || Global_3404)
			{
				*uParam1 = 1;
				Function_117(bParam0);
				return 1;
			}
		}
		if (!Function_120(uParam3, 16))
		{
			if (UNK_0x7F454A92(bParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(bParam0)) > 2.0f && fVar0 > 18.0f)
				{
					*uParam1 = 16;
					Function_117(bParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_117(bool bParam0) //Position: 0x6C48 / 27720
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(bParam0, 1);
	UNK_0x99AFD2D1(bParam0, 0, 0);
	Function_118(bParam0);
	MEMORY_CONSIDER_AS(Global_34573, bParam0, 2);
	MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
	AI_GOAL_LOOK_CLEAR(bParam0);
	return;
}

void Function_118(bool bParam0) //Position: 0x6C7C / 27772
{
	SAY_SINGLE_LINE_CONTEXT(bParam0, 60, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

bool Function_119(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6C93 / 27795
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_VALID(bParam1))
		{
			if (ACTORS_IN_RANGE(bParam0, bParam1, bParam2))
			{
				return 1;
			}
		}
		LOG_ERROR("Attempting to check whether an actor is in range of an actor, where at least one is INVALID! Returning FALSE.");
	}
	else
	{
		LOG_ERROR("Attempting to check whether an actor is in range of an actor, where at least one is INVALID! Returning FALSE.");
	}
	return 0;
}

bool Function_120(var uParam0, int iParam1) //Position: 0x6DA4 / 28068
{
	return (uParam0 && iParam1) == 0;
}

void Function_121(bool bParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x6DB1 / 28081
{
	int iVar0;
	
	if (bParam4)
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		PRINT_OBJECTIVE_B(bParam0, fParam1, 0, iParam3, iParam2, &Global_3422[Global_626940] + 12, 0, iParam6);
	}
	else
	{
		iVar0 = "";
		PRINT_OBJECTIVE_B(bParam0, fParam1, 0, iParam3, iParam2, iVar0, iParam5, iParam6);
	}
}

bool Function_122(int iParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x6E04 / 28164
{
	if (StackVal & 64 == 64)
	{
		if (!*uParam2)
		{
			if (IS_ACTOR_VALID(bParam1))
			{
				if (Function_106(Global_34573, bParam1) > 15.0f)
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
		if (Function_125() && !*uParam2)
		{
			return 0;
		}
		if (Function_124(iParam0) && !*uParam2)
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
		if (!Function_123(iParam0, uParam5))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_123(int iParam0, int iParam1) //Position: 0x6F32 / 28466
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

int Function_124(int iParam0) //Position: 0x6F53 / 28499
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

int Function_125() //Position: 0x6F91 / 28561
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
						if (Function_126(StackVal, Global_34573) > IntToFloat(iVar1))
						{
							return 1;
						}
					}
				}
			}
			if (Function_126(StackVal, Global_34573) > IntToFloat(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

float Function_126(bool bParam0, bool bParam1) //Position: 0x704C / 28748
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_128(bParam0);
			vVar0 = { StackVal, StackVal, Function_128(bParam0) };
			Function_127(bParam1);
			vVar3 = { StackVal, StackVal, Function_127(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

vector3 Function_127(bool bParam0) //Position: 0x70EC / 28908
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

vector3 Function_128(bool bParam0) //Position: 0x7158 / 29016
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

void Function_129(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6) //Position: 0x71C2 / 29122
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
			Function_138(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_137(0);
		}
		if (bParam6)
		{
			Function_135(0, GET_THIS_SCRIPT_ID());
			Global_3373 = GET_THIS_SCRIPT_ID();
			Global_3401 = 1;
			Function_133(iParam3);
		}
		Function_131(iParam3);
		if (Function_130(StackVal, 32768))
		{
			Function_74(1);
		}
		Global_16876[iParam36].f_12++;
		Function_31(408, 1, 0, 0);
	}
}

bool Function_130(var uParam0, int iParam1) //Position: 0x72AF / 29359
{
	return (uParam0 && iParam1) == 0;
}

void Function_131(int iParam0) //Position: 0x72BC / 29372
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (!Function_120(StackVal, 524288))
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
			bVar1 = Function_132(iVar0 * 60);
			ADD_TIME(&Global_17483[iParam075] + 264, 0, 0, bVar1, 0);
			Global_16876[iParam06] = Global_17483[iParam075].f_264;
		}
	}
	return;
}

int Function_132(int iParam0) //Position: 0x7360 / 29536
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_133(int iParam0) //Position: 0x7376 / 29558
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
	Function_134(&Var0 + 80[Var0.f_763], &(Global_16876[iParam06]), iParam0);
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

void Function_134(var uParam0, var uParam1, int iParam2) //Position: 0x7414 / 29716
{
	uParam0->f_4 = iParam2;
	*uParam0 = uParam1->f_12;
	uParam0->f_8 = 1;
	return;
}

void Function_135(int iParam0, int iParam1) //Position: 0x742C / 29740
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
			Function_136(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_136(int iParam0) //Position: 0x74AE / 29870
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

void Function_137(int iParam0) //Position: 0x74FC / 29948
{
	Global_12976.f_76 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 76, 0, 0, (iParam0 + Function_132(900)), 0);
	return;
}

void Function_138(int iParam0) //Position: 0x751E / 29982
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, (iParam0 + Function_132(200)), 0);
	return;
}

void Function_139(var uParam0, int iParam1) //Position: 0x753F / 30015
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_140(bool bParam0) //Position: 0x754E / 30030
{
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_ACTOR_CAN_BE_HARDLOCKED(bParam0, 0);
		AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bParam0, 0);
	}
	return;
}

void Function_141(bool bParam0, bool bParam1) //Position: 0x7568 / 30056
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

void Function_142(bool bParam0, bool bParam1) //Position: 0x758A / 30090
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_INT(bParam0, "honor", bParam1);
	return;
}

void Function_143(bool bParam0) //Position: 0x75AA / 30122
{
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(bParam0, "nocrime"))
	{
		DECOR_SET_BOOL(bParam0, "nocrime", true);
	}
	return;
}

bool Function_144(bool bParam0, bool bParam1) //Position: 0x75DE / 30174
{
	if (bParam1)
	{
		if (IS_ACTOR_HOGTIED(bParam0))
		{
			if (!(GET_TASK_STATUS(bParam0, 25) != 1 || GET_TASK_STATUS(bParam0, 25) != 3))
			{
				MEMORY_CLEAR_EVENTS(bParam0, 0);
				TASK_FLEE_ACTOR(bParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
				TASK_PRIORITY_SET(bParam0, true);
			}
			Function_17(bParam0);
			return 0;
		}
		if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 163840))
		{
			Function_17(bParam0);
			return 0;
		}
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		if (Function_145(bParam0, 0) && !AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 16384))
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

int Function_145(bool bParam0, int iParam1) //Position: 0x767A / 30330
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

vector3 Function_146(bool bParam0) //Position: 0x76C4 / 30404
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

struct<32> Function_147(bool bParam0) //Position: 0x76D5 / 30421
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_148("0", &cVar8, ""), 4);
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

struct<32> Function_148(char* cParam0, char* cParam1, char* cParam2) //Position: 0x773F / 30527
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_149(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x775E / 30558
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	
	iVar0 = iParam2;
	if (!iVar0 > *uParam0 && iVar0 <= 0)
	{
		return "";
	}
	if (Function_16(uParam0[iVar02], 1))
	{
		return "";
	}
	if (!Function_16(uParam0[iVar02], 2))
	{
		return "";
	}
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (IS_PERS_CHAR_ALIVE(StackVal) || iParam3)
		{
			if (!IS_PERS_CHAR_ALIVE(StackVal))
			{
				REVIVE_PERS_CHAR(StackVal, 1);
			}
			if (!Function_16(uParam0[iVar02], 8))
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], true, false);
				Function_13(uParam0[iVar02], 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
			bVar1 = GET_ACTOR_FROM_PERS_CHAR(StackVal);
		}
	}
	else if (IS_EARLIER_THAN(StackVal, false) || iParam3)
	{
		GET_POSITION(GET_PLAYER_ACTOR(0), &vVar2);
		uParam1[iVar03]->f_8 = Function_151(StackVal, StackVal, StackVal, Global_6289, Function_194(), (*uParam1)[iVar03], vVar2, 0x42700000);
		if (IS_PERS_CHAR_VALID(StackVal))
		{
			if (!Function_16(uParam0[iVar02], 8))
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], true, false);
				Function_13(uParam0[iVar02], 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
			bVar1 = GET_ACTOR_FROM_PERS_CHAR(StackVal);
		}
	}
	if (!IS_ACTOR_VALID(bVar1))
	{
		return "";
	}
	Function_13(uParam0[iVar02], 1);
	Function_150(StackVal, 1);
	if (bParam5)
	{
		MAKE_ACTOR_READY_FOR_ACTION(bVar1, 1);
	}
	if (!bParam4)
	{
		if (IS_ACTOR_HOGTIED(bVar1))
		{
			FREE_FROM_HOGTIE(bVar1);
		}
	}
	return bVar1;
}

int Function_150(bool bParam0, bool bParam1) //Position: 0x78F4 / 30964
{
	bool bVar0;
	bool bVar1;
	
	if (IS_PERS_CHAR_VALID(bParam0))
	{
		bVar0 = GET_ACTOR_FROM_PERS_CHAR(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			TASK_CLEAR(bVar0);
			REFERENCE_ACTOR(bVar0);
			TASK_PRIORITY_SET(bVar0, true);
			SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(bVar0, 1);
			if (bParam1)
			{
				if (IS_ACTOR_HOGTIED(bVar0))
				{
					FREE_FROM_HOGTIE(bVar0);
				}
			}
		}
		bVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
		if (GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(bVar1), "ScriptStructure", "stolen_flag", 1))
		{
			SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bParam0, 1);
			return 1;
		}
	}
	return 0;
}

var Function_151(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, float fParam7) //Position: 0x7996 / 31126
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	struct<73> Var5;
	
	if (fParam7 > 1.0f)
	{
		fParam7 = 60.0f;
	}
}

int Function_152(var uParam0, int iParam1) //Position: 0x7AAF / 31407
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
	Function_154(DECOR_GET_INT(*uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
		}
		else
		{
			Function_153(iVar0, uParam0, &uVar1, iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(*uParam0);
	return 0;
}

void Function_153(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x7C10 / 31760
{
	struct<8> Var0;
	
	Global_26155[iParam05].f_8 = *uParam1;
	Global_26155[iParam05].f_16 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_147("stayout") };
	Global_26155[iParam05].f_12 = CREATE_VOLUME_IN_LAYOUT(Global_26150, &Var0, 3, *iParam2, 0.0f, 0.0f, 0.0f, 12.0f, 5.0f, 12.0f);
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	if (bParam3)
	{
		Global_26155[iParam05].f_4 = ADD_BLIP_FOR_COORD(iParam2, 403, 0, 2, 0);
		SET_BLIP_BLINK(StackVal, 1, 1, 20.0f);
	}
}

int Function_154(bool bParam0) //Position: 0x7CAB / 31915
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
						Function_155(iVar0);
					}
					else if (Global_3386)
					{
						if (Function_160(StackVal, StackVal, Global_34573, vVar1) < 25.0f)
						{
							Function_155(iVar0);
						}
					}
					else if (Function_160(StackVal, StackVal, Global_34573, vVar1) < 55.0f)
					{
						Function_155(iVar0);
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
			Function_155(iVar0);
		}
		iVar0++;
	}
	return 0;
}

void Function_155(int iParam0) //Position: 0x7E0C / 32268
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

bool Function_156(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x7E6D / 32365
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
		Function_161("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
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
			Function_157(bVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_157(bVar0);
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
			Function_157(bVar0);
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

void Function_157(bool bParam0) //Position: 0x80CC / 32972
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

int Function_158(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x8112 / 33042
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
	Function_154(4294967295);
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
			else if (Function_96(uParam0, &uVar0) > fVar5)
			{
				return 0;
			}
		}
		iVar3++;
	}
	return 1;
}

bool Function_159(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) //Position: 0x81E2 / 33250
{
}

float Function_160(bool bParam0, vector3 vParam1) //Position: 0x81FE / 33278
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_128(bParam0);
		vVar0 = { StackVal, StackVal, Function_128(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

void Function_161(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x8278 / 33400
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

bool Function_162(var uParam0, int iParam1) //Position: 0x82BF / 33471
{
	bool bVar0;
	char* cVar1;
	char* cVar2[8];
	struct<8> Var4;
	struct<8> Var12;
	struct<8> Var20;
	struct<8> Var28;
	struct<8> Var36;
	
	strcpy(&Var4, "return_stand_pos_", 32);
	strcpy(&Var12, "return_gateway_pos_", 32);
	strcpy(&Var20, "camera_cut_pos1_", 32);
	strcpy(&Var28, "camera_cut_pos2_", 32);
	strcpy(&Var36, "horse_pos_", 32);
	bVar0 = Function_164(StackVal, StackVal, Global_30616, "interiorPoint_store", *uParam0, 0);
	if (IS_OBJECT_VALID(bVar0))
	{
		*iParam1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_163(bVar0) };
		cVar1 = GET_OBJECT_NAME(bVar0);
		STRING_CLEAR_TOKENIZER();
		SET_OWNERSHIP_STRAGGLER(cVar1, "_");
		strcpy(&cVar2, STRING_GET_TOKEN((STRING_NUM_TOKENS() - 1)), 8);
		stradd(&Var4, &cVar2, 32);
		bVar0 = Function_164(StackVal, StackVal, Global_30616, &Var4, *iParam1, 0);
		if (!IS_OBJECT_VALID(bVar0))
		{
			return 0;
		}
		*(iParam1 + 24) = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_163(bVar0) };
		stradd(&Var12, &cVar2, 32);
		bVar0 = Function_164(StackVal, StackVal, Global_30616, &Var12, *iParam1, 0);
		if (!IS_OBJECT_VALID(bVar0))
		{
			return 0;
		}
		*(iParam1 + 48) = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_163(bVar0) };
		stradd(&Var20, &cVar2, 32);
		bVar0 = Function_164(StackVal, StackVal, Global_30616, &Var20, *iParam1, 0);
		if (!IS_OBJECT_VALID(bVar0))
		{
			return 0;
		}
		*(iParam1 + 72) = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_163(bVar0) };
		stradd(&Var28, &cVar2, 32);
		bVar0 = Function_164(StackVal, StackVal, Global_30616, &Var28, *iParam1, 0);
		if (!IS_OBJECT_VALID(bVar0))
		{
			return 0;
		}
		*(iParam1 + 96) = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_163(bVar0) };
		stradd(&Var36, &cVar2, 32);
		bVar0 = Function_164(StackVal, StackVal, Global_30616, &Var36, *iParam1, 0);
		if (!IS_OBJECT_VALID(bVar0))
		{
			return 0;
		}
		*(iParam1 + 120) = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_163(bVar0) };
		return 1;
	}
	return 0;
}

struct<24> Function_163(bool bParam0) //Position: 0x8467 / 33895
{
	struct<6> Var0;
	
	GET_OBJECT_POSITION(bParam0, &Var0);
	GET_OBJECT_ORIENTATION(bParam0, &Var0 + 12);
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

bool Function_164(bool bParam0, bool bParam1, vector3 vParam2, float fParam5) //Position: 0x8485 / 33925
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	
	bVar2 = 10000.0f;
	if (IS_LAYOUTREF_VALID(bParam0))
	{
		bVar7 = CREATE_OBJECT_ITERATOR(bParam0);
		ITERATE_ON_OBJECT_TYPE(bVar7, 8);
		ITERATE_ON_PARTIAL_NAME(bVar7, bParam1);
		bVar0 = START_OBJECT_ITERATOR(bVar7);
		while (IS_OBJECT_VALID(bVar0))
		{
			GET_OBJECT_POSITION(bVar0, &vVar4);
			bVar3 = VDIST(vParam2, vVar4);
			if (bVar3 > bVar2 && bVar3 <= fParam5)
			{
				bVar2 = bVar3;
				bVar1 = bVar0;
			}
			bVar0 = OBJECT_ITERATOR_NEXT(bVar7);
		}
		DESTROY_ITERATOR(bVar7);
	}
	if (!IS_OBJECT_VALID(bVar1))
	{
	}
	return bVar1;
}

bool Function_165(int iParam0) //Position: 0x8508 / 34056
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_169();
	iVar1 = 0;
	if (!Function_6(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_168(iParam0[iVar03], 8);
		}
		else if (Function_167())
		{
			iVar1 = 1;
			Function_168(iParam0[iVar03], 8);
		}
		Function_168(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_6(iParam0[iVar03], 4))
		{
			if (!Function_6(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_6(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_6(iParam0[03], 8) || iVar1));
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
				Function_168(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_6(iParam0[iVar03], 4))
		{
			if (!Function_6(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_168(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_168(iParam0[iVar03], 2);
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
							Function_168(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_168(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_168(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_168(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_168(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_168(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_168(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_168(iParam0[iVar03], 2);
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
	Function_166();
	return 1;
}

void Function_166() //Position: 0x8883 / 34947
{
	if (!Function_92(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_167() //Position: 0x88C3 / 35011
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

void Function_168(var uParam0, int iParam1) //Position: 0x88EE / 35054
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_169() //Position: 0x88FF / 35071
{
	if (!Function_92(128))
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

void Function_170(bool bParam0, int iParam1) //Position: 0x8941 / 35137
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *bParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_171(bParam0[iVar0]);
		iVar0++;
	}
	return;
}

void Function_171(int iParam0) //Position: 0x896E / 35182
{
	if (IS_ACTOR_VALID(*iParam0))
	{
		SET_DRAW_ACTOR(*iParam0, true);
		CLEAR_ACTOR_MAX_SPEED(*iParam0);
		if (IS_ACTOR_ANIMAL(*iParam0))
		{
			ANIMAL_SPECIES_REL_SET_CAN_ATTACK(ANIMAL_ACTOR_GET_SPECIES(*iParam0), 0, 1);
		}
		else
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*iParam0, 0, true);
			MEMORY_ALLOW_SHOOTING(*iParam0, true);
		}
	}
	return;
}

void Function_172(var uParam0, int iParam1) //Position: 0x89B0 / 35248
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_173(uParam0[iVar0]);
		iVar0++;
	}
	return;
}

void Function_173(int iParam0) //Position: 0x89DD / 35293
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

bool Function_174(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x8A20 / 35360
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

var Function_175(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x8A88 / 35464
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_176(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_168(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_176(var uParam0, int iParam1, int iParam2) //Position: 0x8AC0 / 35520
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_6(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_168(uParam0[iVar03], 4);
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

void Function_177(var uParam0, int iParam1) //Position: 0x8B84 / 35716
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

void Function_178(bool bParam0) //Position: 0x8BA6 / 35750
{
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(bParam0);
	return;
}

int Function_179(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x8BB1 / 35761
{
	return Function_180(uParam0, uParam1, uParam2, uParam3, uParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_180(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, vector3 vParam6) //Position: 0x8BCA / 35786
{
	switch (iParam0)
	{
		case 0x00000001:
			return Function_183(StackVal, StackVal, Global_30750[0], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000002:
			return Function_183(StackVal, StackVal, Global_30750[1], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000004:
			return Function_183(StackVal, StackVal, Global_30750[2], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000008:
			return Function_183(StackVal, StackVal, Global_30750[3], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000010:
			return Function_183(StackVal, StackVal, Global_30750[4], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000020:
			return Function_183(StackVal, StackVal, Global_30750[5], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000040:
			return Function_183(StackVal, StackVal, Global_30750[6], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000080:
			return Function_183(StackVal, StackVal, Global_30750[7], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000100:
			return Function_183(StackVal, StackVal, Global_30750[8], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000200:
			return Function_183(StackVal, StackVal, Global_30750[9], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000400:
			return Function_183(StackVal, StackVal, Global_30750[10], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000800:
			return Function_183(StackVal, StackVal, Global_30750[11], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00001000:
			return Function_183(StackVal, StackVal, Global_30750[12], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00002000:
			return Function_183(StackVal, StackVal, Global_30750[13], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return Function_181(StackVal, StackVal, iParam0, bParam1, bParam2, fParam5, vParam6);
}

var Function_181(var uParam0, bool bParam1, bool bParam2, float fParam3, vector3 vParam4) //Position: 0x8E1F / 36383
{
	bool bVar0;
	
	bVar0 = CREATE_POPULATION_SET(0);
	if (uParam0 & 1 == 1)
	{
		Function_182(Global_30750[0], bVar0);
	}
	if (uParam0 & 2 == 2)
	{
		Function_182(Global_30750[1], bVar0);
	}
	if (uParam0 & 4 == 4)
	{
		Function_182(Global_30750[2], bVar0);
	}
	if (uParam0 & 8 == 8)
	{
		Function_182(Global_30750[3], bVar0);
	}
	if (uParam0 & 16 == 16)
	{
		Function_182(Global_30750[4], bVar0);
	}
	if (uParam0 & 32 == 32)
	{
		Function_182(Global_30750[5], bVar0);
	}
	if (uParam0 & 64 == 64)
	{
		Function_182(Global_30750[6], bVar0);
	}
	if (uParam0 & 128 == 128)
	{
		Function_182(Global_30750[7], bVar0);
	}
	if (uParam0 & 256 == 256)
	{
		Function_182(Global_30750[8], bVar0);
	}
	if (uParam0 & 512 == 512)
	{
		Function_182(Global_30750[9], bVar0);
	}
	if (uParam0 & 1024 == 1024)
	{
		Function_182(Global_30750[10], bVar0);
	}
	if (uParam0 & 2048 == 2048)
	{
		Function_182(Global_30750[11], bVar0);
	}
	if (uParam0 & 4096 == 4096)
	{
		Function_182(Global_30750[12], bVar0);
	}
	if (uParam0 & 8192 == 8192)
	{
		Function_182(Global_30750[13], bVar0);
	}
	return Function_183(StackVal, StackVal, bVar0, bParam1, bParam2, 4294967295, 0, fParam3, vParam4);
}

void Function_182(bool bParam0, bool bParam1) //Position: 0x8F70 / 36720
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

var Function_183(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, vector3 vParam6) //Position: 0x902E / 36910
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
		Function_189();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, bParam4, fParam5, vParam6);
	if (!Function_188(bVar1))
	{
		if (!Global_30837 && !Global_30838)
		{
			Function_187(bParam0, bParam1, bParam2, bParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_187(bParam0, bParam1, bParam2, bParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && bParam3 != 4294967295)
		{
			while (Function_186(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, fParam5, vParam6);
				if (Function_188(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_186(bVar0))
				{
					Function_185();
				}
				Function_184(bVar0);
			}
		}
		else if (!bParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != bParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, fParam5, vParam6);
				if (Function_188(bVar1))
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

void Function_184(int iParam0) //Position: 0x9321 / 37665
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

void Function_185() //Position: 0x93D5 / 37845
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

bool Function_186(bool bParam0) //Position: 0x940F / 37903
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

void Function_187(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x943C / 37948
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

bool Function_188(bool bParam0) //Position: 0x958D / 38285
{
	if (bParam0 > 0 || bParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

void Function_189() //Position: 0x95A4 / 38308
{
	int iVar0;
	
	if (Global_3402)
	{
		if (StackVal || !Global_30742 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_185();
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
	Function_185();
	return;
}

var Function_190(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x95EF / 38383
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_6(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_168(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_168(uParam0[iVar03], 8);
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

var Function_191(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x96BF / 38591
{
	bool bVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			bVar0 = RAND_FLOAT_RANGE(4.0f, 6.0f);
			break;
		
		case 0x00000001:
			bVar0 = RAND_FLOAT_RANGE(18.0f, 24.0f);
			break;
		
		case 0x00000002:
			bVar0 = RAND_FLOAT_RANGE(45.0f, 55.0f);
			break;
		
		default:
			bVar0 = RAND_FLOAT_RANGE(4.0f, 6.0f);
			break;
	}
	switch (iParam1)
	{
		case 0x00000000:
			bVar0 = (bVar0 * 0,75f);
			break;
		
		case 0x00000001:
			bVar0 = (bVar0 * 1.0f);
			break;
		
		case 0x00000002:
			bVar0 = (bVar0 * 1,25f);
			break;
		
		default:
			bVar0 = (bVar0 * 0,75f);
			break;
	}
	if (bParam2)
	{
		bVar0 = (bVar0 * (0,75f + ((TO_FLOAT(Function_56(5)) / 100.0f) * 0,5f)));
	}
	if (bParam3)
	{
		if (HAS_ITEM(Function_192(17), Global_34573))
		{
			bVar0 = (bVar0 * 1,2f);
		}
	}
	if (bParam4)
	{
		bVar0 = (bVar0 * 1,1f);
	}
	if (ROUND(bVar0) <= 1)
	{
		bVar0 = 1.0f;
	}
	return ROUND(bVar0);
}

var Function_192(bool bParam0) //Position: 0x97C1 / 38849
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

void Function_193(var uParam0, float fParam1) //Position: 0x98B2 / 39090
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_139(uParam0, 1);
	Function_49(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

var Function_194() //Position: 0x98D3 / 39123
{
	bool bVar0;
	
	return bVar0;
}

var Function_195(int iParam0, float fParam1, float fParam2, int iParam3, int iParam4, int iParam5) //Position: 0x98DB / 39131
{
	int iVar0;
	int iVar1[146];
	int iVar148[146];
	int iVar295;
	vector3 vVar296;
	vector3 vVar299;
	bool bVar302;
	bool bVar303;
	bool bVar304[146];
	bool bVar451[146];
	int iVar598;
	int iVar599;
	int iVar600;
	int iVar601;
	int iVar602;
	int iVar603;
	struct<8> Var604;
	
	iVar0 = 4294967295;
	bVar303 = 1,001638E+07.0f;
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
	if (!Function_210(iParam0))
	{
		iParam0 = Global_29005;
	}
	iVar295 = Function_208(iParam0);
	PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - Checking Regions for a bountyhunter landmark: ");
	PRINTNL();
	GET_POSITION(GET_PLAYER_ACTOR(0), &vVar299);
	iVar598 = 0;
	while (iVar598 < 145)
	{
		Function_207(StackVal);
		vVar296 = { StackVal, StackVal, Function_207(StackVal) };
		bVar302 = VDIST(vVar299, vVar296);
		if (iParam3 == 0)
		{
			iParam3 = 0;
		}
		if (((StackVal && !(IS_VOLUME_VALID(StackVal) && (iVar295 != Function_208(Global_29155[iVar59810]) || iParam0 != 4294967295)) != 1) && Function_206(&(Global_29008[iVar598]), 8192)) && iVar598 == 0)
		{
			if (iVar598 == 146)
			{
				LOG_ERROR("The bountyhunter region count is screwy. Tell Ben.");
				return 4294967294;
			}
			if (bVar302 > bVar303)
			{
				bVar303 = bVar302;
				iVar600 = iVar598;
			}
			if (bVar302 < fParam1 && bVar302 > fParam2)
			{
				iVar1[iVar601] = iVar598;
				bVar304[iVar601] = bVar302;
				iVar601++;
				if (Function_199(Function_201(iVar598, 0, 2)) == 0)
				{
					PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - This location is NOT FINISHED.");
					PRINTNL();
					iVar148[iVar602] = iVar598;
					bVar451[iVar602] = bVar302;
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
		Function_198(&iVar1, &bVar304, iVar601);
		Function_198(&iVar148, &bVar451, iVar602);
	}
	if (iVar602 < 0 && iParam4 != 1)
	{
		switch (iParam5)
		{
			case 0x00000001:
			case 0x00000002:
				iVar603 = Function_38(3, iVar602);
				break;
			
			case 0x00000000:
			case 0x00000003:
				iVar603 = Function_38(5, iVar602);
				break;
			
			case 0x00000004:
				iVar603 = Function_38(7, iVar602);
				break;
			
			case 0x00000005:
				iVar603 = Function_38(10, iVar602);
				break;
			
			case 0xFFFFFFFF:
			default:
				iVar603 = Function_38(5, iVar602);
		}
		RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
		iVar599 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 99.0f)) % iVar603);
		iVar0 = iVar148[iVar599];
		if (Function_210(iVar0))
		{
			PRINTSTRING("Randomly picked NOT FINISHED Bounty Hunter location ");
		}
		else
		{
			LOG_ERROR("Invalid bountyHunterRegion picked. Using failsafe.");
			iVar0 = Function_197();
			PRINTSTRING("Picked close NOT FINISHED Bounty Hunter location ");
		}
		Var604 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_196(iVar0) };
		PRINTSTRING(&Var604);
		PRINTSTRING(" with a distance of ");
		Function_207(StackVal);
		vVar296 = { StackVal, StackVal, Function_207(StackVal) };
		bVar302 = VDIST(vVar299, vVar296);
		PRINTFLOAT(bVar302);
		PRINTNL();
	}
	else if (iVar601 >= 0)
	{
		switch (iParam5)
		{
			case 0x00000001:
			case 0x00000002:
				iVar603 = Function_38(3, iVar601);
				break;
			
			case 0x00000000:
			case 0x00000003:
				iVar603 = Function_38(5, iVar601);
				break;
			
			case 0x00000004:
				iVar603 = Function_38(7, iVar601);
				break;
			
			case 0x00000005:
			case 0x00000006:
				iVar603 = Function_38(10, iVar601);
				break;
			
			case 0xFFFFFFFF:
			default:
				iVar603 = Function_38(5, iVar601);
		}
		RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
		iVar599 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 99.0f)) % iVar603);
		iVar0 = iVar1[iVar599];
		if (Function_210(iVar0))
		{
			PRINTSTRING("Randomly picked FINISHED Bounty Hunter location ");
		}
		else
		{
			LOG_ERROR("Invalid bountyHunterRegion picked. Using failsafe.");
			iVar0 = Function_197();
			PRINTSTRING("Picked close FINISHED Bounty Hunter location ");
		}
		Var604 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_196(iVar0) };
		PRINTSTRING(&Var604);
		PRINTSTRING(" with a distance of ");
		Function_207(StackVal);
		vVar296 = { StackVal, StackVal, Function_207(StackVal) };
		bVar302 = VDIST(vVar299, vVar296);
		PRINTFLOAT(bVar302);
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

struct<32> Function_196(int iParam0) //Position: 0x9F84 / 40836
{
	char* cVar0[32];
	
	strcpy(&cVar0, "INVALID REGION", 32);
	if (!Function_210(iParam0))
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

int Function_197() //Position: 0xA041 / 41025
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

void Function_198(int iParam0, bool bParam1, int iParam2) //Position: 0xA06F / 41071
{
	int iVar0;
	int iVar1;
	var uVar2;
	float fVar3;
	int iVar4;
	
	iVar0 = 1;
	while (iVar0 < (iParam2 - 1))
	{
		fVar3 = (*bParam1)[iVar0];
		uVar2 = (*iParam0)[iVar0];
		iVar1 = (iVar0 - 1);
		iVar4 = 0;
		while (iVar4 == 0)
		{
			if ((*bParam1)[iVar1] < fVar3)
			{
				(*bParam1)[iVar1 + 1] = (*bParam1)[iVar1];
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
		(*bParam1)[iVar1 + 1] = fVar3;
		iVar0++;
	}
	return;
}

int Function_199(int iParam0) //Position: 0xA0FD / 41213
{
	if (!Function_200(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_12;
}

bool Function_200(int iParam0) //Position: 0xA117 / 41239
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_201(bool bParam0, bool bParam1, bool bParam2) //Position: 0xA12E / 41262
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_205(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_202(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_202(bParam0, bParam1, bParam2, 4294967295);
}

int Function_202(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xA18C / 41356
{
	var uVar0;
	
	if (!Function_204(bParam2))
	{
		return 4294967295;
	}
	if (bParam0 > 0 || bParam0 < 255)
	{
		return 4294967295;
	}
	if (bParam1 > 0 || bParam1 < 255)
	{
		return 4294967295;
	}
	uVar0 = Function_205(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_203(uVar0);
	}
	if (bParam3 == 4294967295)
	{
		return 4294967295;
	}
	if (bParam3 > 275)
	{
		return 4294967295;
	}
	if (Global_13172[bParam311] == 0)
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning new deed ");
		PRINTINT(bParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
		Global_16198[bParam3] = 0;
		Global_13172[bParam311].f_4 = 0;
		Global_13172[bParam311].f_8 = 0;
		Global_13172[bParam311].f_12 = 0;
		Global_13172[bParam311].f_16 = 0;
		Global_13172[bParam311] = uVar0;
	}
	else
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning existing deed ");
		PRINTINT(bParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
	}
	return bParam3;
}

int Function_203(int iParam0) //Position: 0xA2E1 / 41697
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

bool Function_204(int iParam0) //Position: 0xA31F / 41759
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_205(int iParam0, int iParam1, int iParam2) //Position: 0xA334 / 41780
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

int Function_206(var uParam0, int iParam1) //Position: 0xA354 / 41812
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

vector3 Function_207(float fParam0) //Position: 0xA370 / 41840
{
	vector3 vVar0;
	
	GET_VOLUME_CENTER(fParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

int Function_208(int iParam0) //Position: 0xA381 / 41857
{
	return Function_209(iParam0);
}

int Function_209(int iParam0) //Position: 0xA38C / 41868
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_210(iParam0))
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

bool Function_210(int iParam0) //Position: 0xA3E4 / 41956
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

