//Decompiled with MagicRDR v1.0
//Function Count : 215
//Statics Count : 224
//Natives Count : 397
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
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	struct<2> Local_31 = { 0, 0 } ;
	var uLocal_33 = 0;
	struct<2> Local_34 = { 0, 0 } ;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	float fLocal_43 = 0.0f;
	struct<121> Local_44 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 0;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
	var uScriptParam_23 = 0;
	var uScriptParam_24 = 0;
	var uScriptParam_25 = 1;
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
	var uScriptParam_51 = 0;
	var uScriptParam_52 = 0;
	var uScriptParam_53 = 0;
	var uScriptParam_54 = 0;
	var uScriptParam_55 = 0;
	var uScriptParam_56 = 0;
	var uScriptParam_57 = 0;
	var uScriptParam_58 = 0;
	var uScriptParam_59 = 0;
	var uScriptParam_60 = 0;
	var uScriptParam_61 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4[2];
	int iVar7[2];
	var uVar10;
	bool bVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	struct<9> Var41;
	
	iLocal_18 = 0;
	iLocal_19 = 0;
	fLocal_43 = 0.0f;
	iLocal_85 = 0;
	iLocal_86 = 0;
	iLocal_91 = 0;
	iLocal_94 = 0;
	iLocal_95 = 1;
	bLocal_108 = false;
	iLocal_109 = 0;
	iLocal_110 = 0;
	iLocal_111 = 0;
	iLocal_112 = 0;
	bLocal_113 = false;
	bLocal_114 = false;
	bLocal_115 = false;
	bLocal_116 = false;
	iLocal_117 = 0;
	iLocal_118 = 1;
	iLocal_119 = 0;
	bLocal_120 = false;
	iLocal_121 = 0;
	strcpy(&cLocal_124, "holdup", 16);
	iLocal_141 = 0;
	iLocal_145 = 0;
	bLocal_157 = false;
	iLocal_160 = 0;
	iVar0 = 0;
	uVar1 = Function_199(Global_43788, 0x42a00000, 0x469c4000, 0, 0, 4294967295);
	uVar3 = CREATE_LAYOUT(Function_198());
	uVar10 = 12;
	Function_197(&uLocal_96, 0.0f);
	bVar35 = false;
	iVar37 = 0;
	iVar38 = Function_195(2, 2, 1, 0, 0);
	iVar39 = (iVar38 / 2);
	if (!IS_POPSET_VALID(&(Global_46972[6])))
	{
		iVar0 = 5;
	}
	else
	{
		switch (Global_43787)
		{
			case 0x00000000:
				if (Global_43789 == Global_46760[0])
				{
					bLocal_114 = true;
					iVar7[0] = 118;
				}
				else if (Global_43789 == Global_46816[1])
				{
					iVar7[0] = 57;
					bLocal_120 = true;
				}
				else
				{
					LOG_ERROR("hold up error");
				}
				break;
			
			case 0x00000001:
				if (Global_43789 == Global_46866[0])
				{
					bLocal_115 = true;
					iVar7[0] = 273;
				}
				else if (Global_43789 == Global_46850[0])
				{
					iVar7[0] = 238;
				}
				else
				{
					LOG_ERROR("hold up error");
				}
				break;
			
			case 0x00000002:
				if (Global_43789 == Global_46914[0])
				{
					bLocal_116 = true;
					iVar7[0] = 119;
					bLocal_120 = true;
				}
				else if (Global_43789 == Global_46926[1])
				{
					iVar7[0] = 208;
				}
				else
				{
					LOG_ERROR("hold up error");
				}
				break;
		}
		Function_194(&uVar10, iVar7[0], 3, 0);
		iVar7[1] = Function_183(16, 1, 0, 0, 1);
		if (iVar7[1] == 4294967295)
		{
			iVar0 = 5;
		}
		else
		{
			Function_194(&uVar10, iVar7[1], 3, 0);
		}
	}
	if (iVar0 != 5)
	{
		if ((bLocal_114 || bLocal_116) || bLocal_115)
		{
			Function_182(iVar7[1]);
		}
		else
		{
			Function_181(&iVar7, 2);
		}
		Function_179(&uVar10, "thanks", 5, 0);
		Function_179(&uVar10, "custom/thanks", 8, 0);
		Function_179(&uVar10, "stand_ambient", 5, 0);
		Function_179(&uVar10, "custom/stand_ambient", 8, 0);
		Function_179(&uVar10, "shopkeeper_return", 1, 0);
		Function_179(&uVar10, "Stolen_Pleading_Panic_Return", 5, 0);
		Function_179(&uVar10, "custom/Stolen_Pleading_Panic_Return", 8, 0);
		Function_179(&uVar10, "shopkeeper_return", 5, 0);
		Function_179(&uVar10, "custom/shopkeeper_return", 8, 0);
	}
	iVar40 = 0;
	vVar41.f_8 = 0,3f;
	if (Global_6625 == 1)
	{
		iVar0 = 5;
	}
	iVar46 = 0;
	bVar47 = false;
	while (!IS_EXITFLAG_SET())
	{
		iVar45 = 600;
		if (Function_178(&bVar47, &iVar0, &iVar46, &iVar45, bVar35))
		{
			if (bVar47)
			{
				Function_176(&uVar4, 4294967295);
			}
			else
			{
				Function_174(&uVar4, 4294967295);
			}
		}
		switch (iVar0)
		{
			case 0x00000000:
				if (Function_169(&uVar10))
				{
					iVar0 = 1;
				}
				break;
			
			case 0x00000001:
				if (!Function_166(&Global_54078, &Local_44))
				{
					iVar0 = 5;
					iVar45 = 0;
					break;
				}
				*(&ScriptParam_0 + 16) = Local_44;
				(&ScriptParam_0 + 16)->f_4 = (StackVal + 0,1f);
				*(&ScriptParam_0 + 28) = *(&Local_44 + 12);
				if (iVar40 != 0 && ScriptParam_0.f_40)
				{
					Function_165("Still scanning for the proper terrain to run this event.  Move the player around to find a good spawn location.", -1.0f, 1, 2, 1, 0);
				}
				if (((StackVal && !Function_163((StackVal && Function_164(Function_164(StackVal, &Global_54076, *(&ScriptParam_0 + 16)) < 10.0f, &Global_54076, *(&ScriptParam_0 + 16)) > 120.0f), *(&ScriptParam_0 + 16), 0x3f800000, 0x42960000, 1, 1, 0)) && Function_162(&ScriptParam_0 + 16, &ScriptParam_0 + 60, 0, 0)) || ScriptParam_0.f_40)
				{
					if (ScriptParam_0.f_40)
					{
						HUD_CLEAR_SMALL_TEXT_QUEUE();
					}
					iVar0 = 2;
					iVar45 = 0;
					break;
				}
				else
				{
					iVar40++;
				}
				if (iVar40 < 15 && !ScriptParam_0.f_40)
				{
					if (ScriptParam_0.f_40)
					{
						HUD_CLEAR_SMALL_TEXT_QUEUE();
					}
					iVar0 = 5;
					iVar45 = 0;
					break;
				}
				break;
			
			case 0x00000002:
				uLocal_104 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &uVar3, Function_198(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
				ATTACH_OBJECTS(StackVal, StackVal, &uLocal_104, &Global_54076, Function_198(), Vector(0.0f, 0,5f, -3.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
				if (!Function_163(StackVal, *(&ScriptParam_0 + 16), 0x3f800000, 0x42960000, 1, 1, 0) || ScriptParam_0.f_40)
				{
					if (VDIST(Global_54078, *(&ScriptParam_0 + 16)) > 15.0f && !ScriptParam_0.f_40)
					{
						PRINTVECTOR(*(&ScriptParam_0 + 16));
						PRINTNL();
						PRINTVECTOR(Global_54078);
						PRINTNL();
						iVar0 = 5;
						iVar45 = 0;
						break;
					}
					else
					{
						if (!Function_160(ScriptParam_0.f_64, 0.0f, 1, 0, ScriptParam_0.f_40))
						{
							iVar0 = 5;
							iVar45 = 0;
							break;
						}
						uVar44 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_39615, Function_198(), 4,203895E-45f, *(&ScriptParam_0 + 16), Vector(0.0f, 0.0f, 0.0f), Vector(ScriptParam_0.f_60, 20.0f, ScriptParam_0.f_60));
						DECOR_SET_INT(&uVar44, "script", GET_THIS_SCRIPT_ID());
						Function_156(&uVar44, ScriptParam_0.f_40);
						uLocal_89 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uVar3, Function_198(), 0f, *(&Local_44 + 48), Vector(0.0f, 0.0f, 0.0f), Vector(5.0f, 10.0f, 5.0f));
						uLocal_132 = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_ON_OBJECT(&uVar3, Function_198(), "shopkeeper_return", *(&Local_44 + 48), *(&Local_44 + 48 + 12)));
						GRINGO_ALLOW_ACTIVATION(&uLocal_132, false);
						if (bLocal_114)
						{
							uVar4[0] = Function_153(&Global_11014, &Global_12796, 13, 0, 0, 1);
							bLocal_113 = true;
							uVar4[1] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, Vector(&cLocal_124, &uVar3, StackVal) + Vector(vVar41, *(&ScriptParam_0 + 16), iVar7[1]), *(&ScriptParam_0 + 28));
						}
						else if (bLocal_116)
						{
							uVar4[0] = Function_153(&Global_12488, &Global_14976, 27, 0, 0, 1);
							bLocal_113 = true;
							uVar4[1] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, Vector(&cLocal_124, &uVar3, StackVal) + Vector(vVar41, *(&ScriptParam_0 + 16), iVar7[1]), *(&ScriptParam_0 + 28));
						}
						else if (bLocal_115)
						{
							uVar4[0] = Function_153(&Global_12048, &Global_14326, 3, 0, 0, 1);
							bLocal_113 = true;
							uVar4[1] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, Vector(&cLocal_124, &uVar3, StackVal) + Vector(vVar41, *(&ScriptParam_0 + 16), iVar7[1]), *(&ScriptParam_0 + 28));
						}
						else
						{
							iVar36 = 0;
							while (iVar36 <= 2)
							{
								memcpy(&cLocal_124, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_151("holdup"), 4);
								uVar4[iVar36] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, Vector(&cLocal_124, &uVar3, StackVal) + Vector(vVar41, *(&ScriptParam_0 + 16), iVar7[iVar36]), *(&ScriptParam_0 + 28));
								vVar41.f_8 = (vVar41.z + vVar41.z);
								iVar36++;
							}
						}
						DECOR_SET_BOOL(&(uVar4[1]), "CrimeHoldupBadguy", 1);
						SET_ACTOR_CAN_PLAY_GESTURES(&(uVar4[0]), false);
						SET_ACTOR_CAN_PLAY_GESTURES(&(uVar4[1]), false);
						if ((bLocal_114 || bLocal_116) || bLocal_115)
						{
							Function_150(&(uVar4[0]));
							if (VDIST(Function_150(&(uVar4[0])), *(&ScriptParam_0 + 16)) < 30.0f || !IS_AI_ACTOR_UNALERTED(&(uVar4[0])))
							{
								iVar0 = 5;
								iVar45 = 0;
								break;
							}
						}
						if (!Function_148(&(uVar4[0]), 0))
						{
							iVar0 = 5;
							iVar45 = 0;
							break;
						}
						uLocal_81 = CREATE_ACTORSET_IN_LAYOUT(&uVar3, "fleeActors", 0);
						ADD_ACTORSET_MEMBER(&uLocal_81, &(uVar4[0]));
						ADD_ACTORSET_MEMBER(&uLocal_81, &Global_54076);
						DECOR_SET_BOOL(&(uVar4[1]), "NoMoney", 1);
						DECOR_SET_BOOL(&(uVar4[1]), "LootCorpse_CreateBlip", 1);
						DECOR_SET_INT(&(uVar4[1]), "LootCorpse_WhichBlip", 335);
						DECOR_SET_BOOL(&(uVar4[1]), "crimeLootTarget", 1);
						AI_DONT_HARM_ACTOR(&(uVar4[1]));
						uLocal_158 = CREATE_CAMERA_IN_LAYOUT(&uVar3, Function_198(), 0);
						uLocal_87 = CREATE_OBJECTSET_IN_LAYOUT("HoldudHoldup", &uVar3, 12, 1);
						DECOR_SET_OBJECT(&(uVar4[1]), "lootCorpse_objSet", GET_OBJECT_FROM_OBJECTSET(&uLocal_87));
						MEMORY_ATTACK_ON_SIGHT(&(uVar4[1]), 0);
						Function_147(&(uVar4[1]));
						Function_146(&(uVar4[1]), 0);
						SET_ACTOR_CUTSCENE_MODE(&(uVar4[0]), 1);
						Function_145(&(uVar4[1]), 0);
						TASK_STAND_STILL(&(uVar4[0]), -1.0f, 0, 0);
						DELETE_ALL_WEAPONS_FROM_ACTOR(&(uVar4[0]));
						SET_ACTOR_UPDATE_PRIORITY(&(uVar4[1]), false);
						SET_ACTOR_UPDATE_PRIORITY(&(uVar4[0]), false);
						Function_144(&(uVar4[0]));
						AI_SPEECH_SET_ALLOW_FOR_ACTOR(&(uVar4[0]), 0);
						UNK_0x99AFD2D1(&(uVar4[0]), 1, 1);
						TASK_OVERRIDE_SET_MOVETYPE(&(uVar4[1]), 4);
						TASK_PRIORITY_SET(&(uVar4[0]), false);
						SET_ACTOR_ALLOW_BUMP_REACTIONS(&(uVar4[1]), 0);
						iVar0 = 3;
						Function_143(&uLocal_80, 16);
						iVar45 = 0;
					}
				}
				else
				{
					iVar0 = 5;
				}
				break;
			
			case 0x00000003:
				Function_133(&uVar4, 2, &bVar35, ScriptParam_0.f_64, 100, 0x42a00000, 1);
				if (!Function_126(ScriptParam_0.f_64, &(uVar4[0]), &iLocal_86, &uVar2, 1, 1, 1, 1) && iVar37 == 14)
				{
					if ((Global_6646 || Global_6647) && iLocal_109)
					{
						Function_124("crimeHoldUpObj04", 0x40f00000, 1, 2, 0, 0, 0, 0);
					}
					iVar0 = 5;
					break;
				}
				if (((Function_123(Global_99472, 1) || Function_123(Global_99472, 32)) && !bVar35) && !iLocal_86)
				{
					iVar0 = 5;
					break;
				}
				if (GET_DEBUG_DRAW_STATE())
				{
				}
				if (iVar37 != 7 || iVar37 != 6)
				{
					if (IS_ACTOR_VALID(&(uVar4[1])))
					{
						if (!Function_122(&(uVar4[1]), &Global_54076, 165.0f))
						{
							Function_124("crimeHoldUp08", 0x40f00000, 1, 2, 0, 0, 0, 0);
							iVar45 = 0;
							iVar0 = 5;
						}
					}
				}
				if (iVar37 == 14)
				{
					if (bLocal_113)
					{
					}
					if (Function_119(&(uVar4[0]), &iLocal_83, &fLocal_43, 0, 0, 0x40400000) || !IS_ACTOR_VALID(&(uVar4[1])))
					{
						if (IS_ACTOR_VALID(&(uVar4[0])))
						{
							RESET_ANIM_SET_FOR_ACTOR(&(uVar4[0]), 1);
							TASK_FLEE_ACTOR(&(uVar4[0]), &Global_54076, -1.0f, -1.0f, 0, 0, 0);
							Function_118(&(uVar4[0]));
						}
						if (IS_ACTOR_VALID(&(uVar4[1])))
						{
							RESET_ANIM_SET_FOR_ACTOR(&(uVar4[1]), 1);
							TASK_FLEE_ACTOR(&(uVar4[1]), &Global_54076, -1.0f, -1.0f, 0, 0, 0);
							Function_118(&(uVar4[1]));
						}
						iVar0 = 5;
						iVar45 = 0;
						break;
					}
				}
				else if (Function_119(&(uVar4[0]), &iLocal_83, &fLocal_43, uLocal_80, 0, 0x40400000))
				{
					switch (iLocal_83)
					{
						case 0x00000001:
							Function_116("victimFailAggroDanger", iLocal_109, 1);
							bLocal_84 = true;
							break;
						
						case 0x00000002:
							Function_116("victimFailAggroShot", iLocal_109, 1);
							bLocal_84 = true;
							break;
						
						case 0x00000004:
							if (iLocal_109)
							{
								Function_116("victimFailAggroHostile", iLocal_109, 1);
							}
							bLocal_84 = true;
							break;
						
						case 0x00000008:
							Function_116("victimFailAggroAttacked", iLocal_109, 1);
							Function_115(&(uVar4[0]), &Global_54076);
							Function_118(&(uVar4[0]));
							bLocal_84 = true;
							iVar0 = 5;
							iVar45 = 0;
							break;
							break;
					}
					if (bLocal_84)
					{
						Function_118(&(uVar4[0]));
						CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&(uVar4[0]));
						SET_ACTOR_CUTSCENE_MODE(&(uVar4[0]), 0);
						RESET_ANIM_SET_FOR_ACTOR(&(uVar4[0]), 1);
						TASK_FLEE_ACTOR(&(uVar4[0]), &Global_54076, -1.0f, -1.0f, 0, 0, 0);
						iVar0 = 5;
						iVar45 = 0;
						break;
					}
				}
				if (IS_ACTOR_VALID(&(uVar4[0])))
				{
					if (!iLocal_109)
					{
						if (!Function_122(&(uVar4[0]), &Global_54076, 120.0f))
						{
							iVar0 = 5;
							break;
						}
					}
					else if (IS_ACTOR_VALID(&(uVar4[1])))
					{
						if (IS_ACTOR_HOGTIED(&(uVar4[1])) && !iLocal_141)
						{
							CLEAR_AMBIENT_OBJECTS_VOLUME(&uLocal_89, 15);
							ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_89);
							ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_89);
							SET_OBJECT_POSITION(&(uVar4[0]), *(&Local_44 + 24));
							iLocal_141 = 1;
						}
					}
					else if (iLocal_111 && !iLocal_141)
					{
						SET_OBJECT_POSITION(&(uVar4[0]), *(&Local_44 + 24));
						ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_89);
						ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_89);
						iLocal_141 = 1;
					}
					if (iLocal_110 && !iLocal_112)
					{
						if (!Function_122(&(uVar4[0]), &Global_54076, (fLocal_92 + 95.0f)))
						{
							Function_124("crimeHoldUpObj03", 0x40f00000, 1, 2, 0, 0, 0, 0);
							iVar0 = 5;
							Function_111(4294967246, 1, 0);
							break;
						}
					}
					if (iLocal_94 && !iLocal_110)
					{
						if (VDIST(Local_137, Global_54078) < (fLocal_93 + 95.0f))
						{
							Function_124("crimeHoldUpObj03", 0x40f00000, 1, 2, 0, 0, 0, 0);
							iVar0 = 5;
							break;
						}
					}
					if (!IS_ACTOR_ALIVE(&(uVar4[0])))
					{
						if (iLocal_109)
						{
							Function_124("crimeHoldUp06", 0x40f00000, 1, 2, 0, 0, 0, 0);
						}
						iVar45 = 0;
						iVar0 = 5;
						break;
					}
				}
				if (Function_20(&iVar37, &uVar4, &iVar45, &uVar1, &uVar3, iVar39, iVar38))
				{
					iVar0 = 5;
					break;
				}
				break;
			
			case 0x00000005:
				iVar0 = 6;
				iVar45 = 0;
				break;
			
			case 0x00000006:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				iVar45 = 0;
				break;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(iVar45);
		}
	}
	if (bLocal_157)
	{
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	}
	Function_174(&uVar4, 4294967295);
	Function_19(&iVar7, 2);
	if (ScriptParam_0.f_40)
	{
		Global_6642 = 0;
	}
	if (!bVar35)
	{
		Function_160(ScriptParam_0.f_64, 0.0f, 0, 1, 0);
	}
	if (IS_ACTOR_VALID(&(uVar4[0])))
	{
		Function_17(&(uVar4[0]));
		SET_MOVER_FROZEN(&(uVar4[0]), 0);
		if (bLocal_113)
		{
			RESET_ANIM_SET_FOR_ACTOR(&(uVar4[0]), 1);
			if (bLocal_114)
			{
				Function_9(&Global_11014, &Global_12796, 13, 0);
			}
			else if (bLocal_116)
			{
				Function_9(&Global_12488, &Global_14976, 27, 0);
			}
			else if (bLocal_115)
			{
				Function_9(&Global_12048, &Global_14326, 3, 0);
			}
		}
		AI_GOAL_LOOK_CLEAR(&(uVar4[0]));
		Function_8(&(uVar4[0]));
		if (!bLocal_84)
		{
			SET_ACTOR_CUTSCENE_MODE(&(uVar4[0]), 0);
			RESET_ANIM_SET_FOR_ACTOR(&(uVar4[0]), 1);
		}
		AI_SPEECH_SET_ALLOW_FOR_ACTOR(&(uVar4[0]), 1);
		UNK_0x99AFD2D1(&(uVar4[0]), 0, 0);
		if (!bLocal_84)
		{
			TASK_CLEAR(&(uVar4[0]));
			Function_7(&(uVar4[0]));
		}
	}
	if (IS_ACTOR_VALID(&(uVar4[1])))
	{
		if (DECOR_CHECK_EXIST(&(uVar4[1]), "CrimeHoldupBadguy"))
		{
			DECOR_REMOVE(&(uVar4[1]), "CrimeHoldupBadguy");
		}
		if (IS_MOVER_FROZEN(&(uVar4[1])))
		{
			SET_MOVER_FROZEN(&(uVar4[1]), 0);
		}
		TASK_FLEE_ACTOR(&(uVar4[1]), &Global_54076, -1.0f, -1.0f, 0, 0, 0);
		DECOR_REMOVE(&(uVar4[1]), "LootCorpse_CreateBlip");
		TASK_OVERRIDE_CLEAR_MOVETYPE(&(uVar4[1]));
	}
	if (IS_OBJECTSET_VALID(&uLocal_87))
	{
		if (GET_OBJECTSET_SIZE(&uLocal_87) >= 0)
		{
			uLocal_106 = GET_INDEXED_OBJECT_IN_OBJECTSET(0, &uLocal_87);
			if (IS_OBJECT_VALID(&uLocal_106))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&uLocal_106)))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(&uLocal_106));
				}
			}
		}
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_27))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_27);
	}
	if (IS_VOLUME_VALID(&uLocal_29))
	{
		DESTROY_VOLUME(&uLocal_29);
	}
	if (IS_BLIP_VALID(&uLocal_122))
	{
		REMOVE_BLIP(&uLocal_122);
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "CHBadguy_Gone"))
	{
		DECOR_REMOVE(&Global_54076, "CHBadguy_Gone");
	}
	Function_17(&(uVar4[0]));
	Function_3(&uVar10);
	if (!bVar35)
	{
		Function_1(&uVar4, 4294967295);
		if (IS_OBJECT_VALID(&uVar3))
		{
			UNK_0xA936E73B(&uVar3, 1);
			MARK_OBJECT_FOR_AGGRESSIVE_CLEANUP(&uVar3, 1);
		}
	}
	RELEASE_LAYOUT_REF(&uVar3);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var[] uParam0, int iParam1) //Position: 0x1055 / 4181
{
	int iVar0;
	
	if (&iParam1 == 4294967295)
	{
		iParam1 = uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= &iParam1)
	{
		Function_2(&(uParam0[iVar0]));
		iVar0++;
	}
	return;
}

void Function_2(int iParam0) //Position: 0x1087 / 4231
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		RESET_ANIM_SET_FOR_ACTOR(&iParam0, 0);
		TASK_FLEE_ACTOR(&iParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
		TASK_PRIORITY_SET(&iParam0, false);
	}
	return;
}

void Function_3(int iParam0) //Position: 0x10B7 / 4279
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_4(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_4(struct<2>[] Param0, int iParam1) //Position: 0x10DF / 4319
{
	if (Function_6(&(Param0[iParam12]), 4))
	{
		if (Function_6(&(Param0[iParam12]), 1))
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
			Function_5(&(Param0[iParam12]), 1);
			Function_5(&(Param0[iParam12]), 2);
			Function_5(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_5(struct<13> Param0) //Position: 0x122A / 4650
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_6(struct<13> Param0) //Position: 0x1247 / 4679
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_7(int iParam0) //Position: 0x1265 / 4709
{
	iLocal_140 = TASK_SEQUENCE_OPEN();
	TASK_GO_NEAR_COORD(0, &Local_44, 3.0f, 1);
	TASK_WANDER(0, -1.0f);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&iParam0, iLocal_140);
	TASK_SEQUENCE_RELEASE(iLocal_140, 1);
	TASK_PRIORITY_SET(&iParam0, 2);
	return;
}

void Function_8(int iParam0) //Position: 0x1295 / 4757
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		SET_ACTOR_CAN_BE_HARDLOCKED(&iParam0, 1);
		AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&iParam0, 0);
	}
	return;
}

void Function_9(struct<2>[] Param0, vector3[] vParam1, int iParam2, bool bParam3) //Position: 0x12B2 / 4786
{
	int iVar0;
	
	iVar0 = iParam2;
	if (!iVar0 > Param0 && iVar0 <= 0)
	{
		return;
	}
	if (!Function_16(&(Param0[iVar02]), 1))
	{
		return;
	}
	if (!Function_16(&(Param0[iVar02]), 2))
	{
		return;
	}
	if (Function_16(&(Param0[iVar02]), 8))
	{
		STREAMING_EVICT_ACTOR(vParam1[iVar03], 4294967295);
		Function_15(&(Param0[iVar02]), 8);
	}
	Function_15(&(Param0[iVar02]), 1);
	if (!IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
	{
		return;
	}
	Function_14(&vParam1[iVar03] + 16);
	if (&bParam3)
	{
		Function_10(&Param0, &vParam1, iParam2, 0);
	}
}

void Function_10(struct<2>[] Param0, vector3[] vParam1, int iParam2, bool bParam3) //Position: 0x135A / 4954
{
	if (IS_PERS_CHAR_VALID(&vParam1[iParam23] + 16))
	{
		if (!IS_PERS_CHAR_ALIVE(&vParam1[iParam23] + 16))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(&vParam1[iParam23] + 16) > GET_CURRENT_GAME_TIME())
			{
				Function_13(&(Param0[iParam22]), 4);
				*(&Param0[iParam22] + 8) = GET_TIME_OF_DAY();
				ADD_TIME(&Param0[iParam22] + 8, Function_12(Global_43790), Function_11(Global_43790), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_16(&(Param0[iParam22]), 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(&vParam1[iParam23] + 16, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(&vParam1[iParam23] + 16);
			(&vParam1[iParam23] + 16) = "";
		}
	}
	else if (!Function_16(&(Param0[iParam22]), 1) && !&bParam3)
	{
		Function_13(&(Param0[iParam22]), 4);
		*(&Param0[iParam22] + 8) = GET_TIME_OF_DAY();
		ADD_TIME(&Param0[iParam22] + 8, Function_12(Global_43790), Function_11(Global_43790), false, 0);
	}
}

int Function_11(int iParam0) //Position: 0x14C0 / 5312
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

int Function_12(int iParam0) //Position: 0x14EB / 5355
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

void Function_13(var uParam0, int iParam1) //Position: 0x151F / 5407
{
	uParam0 = (uParam0 || iParam1);
	return;
}

int Function_14(int iParam0) //Position: 0x1530 / 5424
{
	var uVar0;
	var uVar1;
	
	if (IS_PERS_CHAR_VALID(&iParam0))
	{
		SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&iParam0, 0);
		uVar0 = GET_ACTOR_FROM_PERS_CHAR(&iParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			TASK_CLEAR(&uVar0);
			DEREFERENCE_ACTOR(&uVar0);
			TASK_PRIORITY_SET(&uVar0, 3);
			SET_ACTOR_UPDATE_PRIORITY(&uVar0, 2);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(&uVar0, 0);
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&uVar0, 1);
		}
		uVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&iParam0), "Persistent_Char_Brain");
		if (IS_OBJECT_VALID(&uVar1))
		{
			return GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(&uVar1), "ScriptStructure", "stolen_flag", 0);
		}
	}
	return 0;
}

void Function_15(var uParam0, int iParam1) //Position: 0x15D9 / 5593
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_16(var uParam0, int iParam1) //Position: 0x15F3 / 5619
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_17(int iParam0) //Position: 0x1610 / 5648
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		Function_18(&iParam0);
		return 1;
	}
	return 0;
}

void Function_18(var uParam0) //Position: 0x1628 / 5672
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

void Function_19(var[] uParam0, int iParam1) //Position: 0x165B / 5723
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

bool Function_20(var uParam0, var[] uParam1, var uParam3, var uParam4, bool bParam5, int iParam6) //Position: 0x167E / 5758
{
	uParam3 = uParam3;
	switch (uParam0)
	{
		case 0x00000000:
			Function_110(&(uParam1[1]), &(uParam1[0]));
			if (Function_122(&(uParam1[0]), &Global_54076, 80.0f))
			{
				TASK_CLEAR(&(uParam1[1]));
				TASK_FLEE_ACTORSET(&(uParam1[1]), &uLocal_81, -1.0f, -1.0f, 0, 0, 0);
				TASK_PRIORITY_SET(&(uParam1[1]), false);
				uParam0 = 1;
			}
			break;
		
		case 0x00000001:
			bParam2 = 0;
			Function_110(&(uParam1[1]), &(uParam1[0]));
			if (!Function_122(&(uParam1[1]), &Global_54076, 120.0f))
			{
				return 1;
			}
			if (!IS_ACTOR_ALIVE(&(uParam1[1])) && GET_LAST_ATTACKER(&(uParam1[1])) != &Global_54076)
			{
				uParam0 = 21;
				break;
			}
			if (!Function_122(&(uParam1[1]), &Global_54076, 80.0f) && !iLocal_117)
			{
				TASK_CLEAR(&(uParam1[1]));
				TASK_STAND_STILL(&(uParam1[1]), -1.0f, 0, 0);
				TASK_PRIORITY_SET(&(uParam1[1]), true);
				iLocal_117 = 1;
			}
			if (Function_109(&(uParam1[0]), &(uParam1[1])) < 10.0f && !iLocal_119)
			{
				iLocal_119 = 1;
				TASK_CLEAR(&(uParam1[0]));
				TASK_FOLLOW_OBJECT_AT_DISTANCE(&(uParam1[0]), &uLocal_104, 1.0f, 2);
				TASK_PRIORITY_SET(&(uParam1[0]), false);
			}
			if (Function_122(&(uParam1[0]), &Global_54076, 30.0f))
			{
				iLocal_119 = 1;
				TASK_CLEAR(&(uParam1[0]));
				TASK_FOLLOW_OBJECT_AT_DISTANCE(&(uParam1[0]), &uLocal_104, 1.0f, 2);
				TASK_PRIORITY_SET(&(uParam1[0]), false);
				HUD_CLEAR_SMALL_TEXT_QUEUE();
				Function_108(&(uParam1[0]), &Global_54076, "crimeHoldUp07", "crimeHoldUp07", 5, 60, 1, 1);
				ADD_BLIP_FOR_ACTOR(&(uParam1[0]), 325, 0, 2, 0);
				iLocal_86 = 1;
				TASK_CLEAR(&(uParam1[1]));
				TASK_FLEE_ACTORSET(&(uParam1[1]), &uLocal_81, -1.0f, -1.0f, 0, 0, 0);
				TASK_PRIORITY_SET(&(uParam1[1]), false);
				uParam0 = 2;
				Function_197(&uLocal_96, 0.0f);
			}
			break;
		
		case 0x00000002:
			bParam2 = 0;
			Function_110(&(uParam1[1]), &(uParam1[0]));
			if (!Function_122(&(uParam1[1]), &Global_54076, 130.0f))
			{
				return 1;
			}
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &(uParam1[0]), 1.0f, 14.0f, 1, 1, 0))
			{
				Function_105();
				TASK_CLEAR(&(uParam1[0]));
				TASK_FACE_ACTOR(&(uParam1[0]), &Global_54076, 1, 3212836864);
				SET_ANIM_SET_FOR_ACTOR(&(uParam1[0]), "Stolen_Pleading_Panic_Return", 0);
				SET_ACTION_NODE_FOR_ACTOR(&(uParam1[0]), "Stolen_Pleading_Panic_Return/Stolen_pleading");
				AI_GOAL_LOOK_AT_ACTOR(&(uParam1[0]), &Global_54076, 1, 1065353216, 3212836864, 3212836864, 0);
				TASK_PRIORITY_SET(&(uParam1[0]), false);
				uParam0 = 4;
			}
			break;
		
		case 0x00000004:
			Function_110(&(uParam1[1]), &(uParam1[0]));
			if (Function_101(&uLocal_96, 3.0f) && !IS_AMBIENT_SPEECH_PLAYING(&(uParam1[0])))
			{
				if (Function_122(&(uParam1[1]), &Global_54076, 140.0f))
				{
					Function_197(&uLocal_96, 0.0f);
					Function_108(&(uParam1[0]), &Global_54076, "crimeHoldUp02", "crimeHoldUp01", 5, 60, 1, 1);
					uParam0 = 5;
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 0x00000005:
			Function_110(&(uParam1[1]), &(uParam1[0]));
			if (Function_101(&uLocal_96, 2.0f))
			{
				Function_17(&(uParam1[0]));
				Function_124("crimeHoldUpObj02", 0x40f00000, 1, 2, 0, 0, 0, 0);
				iLocal_109 = 1;
				uLocal_122 = ADD_BLIP_FOR_ACTOR(&(uParam1[1]), 322, 0.0f, 3, 0);
				SET_BLIP_IMPAIRMENT_MASK(&uLocal_122, false);
				Function_100(&(uParam1[0]), &iLocal_134);
				uParam0 = 6;
			}
			break;
		
		case 0x00000006:
			if (!iLocal_85)
			{
				if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &(uParam1[1]), 1.0f, 45.0f, 1, 1, 0))
				{
					iLocal_85 = 1;
					AUDIO_MUSIC_SET_MOOD("nCHASE_LOW", 0, 4294967295, 4294967295);
				}
			}
			bParam2 = 0;
			if (iLocal_95 && !IS_AMBIENT_SPEECH_PLAYING(&(uParam1[0])))
			{
				SET_ACTION_NODE_FOR_ACTOR(&(uParam1[0]), "Stolen_Pleading_Panic_Return/Stolen_panic");
				iLocal_95 = 0;
			}
			if (!bLocal_108)
			{
				if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &(uParam1[1]), 1.0f, 15.0f, 1, 1, 0) && MEMORY_GET_IS_VISIBLE(&(uParam1[1]), &Global_54076))
				{
					TASK_OVERRIDE_CLEAR_MOVETYPE(&(uParam1[1]));
					Function_115(&(uParam1[1]), &Global_54076);
					bLocal_108 = true;
				}
			}
			if (!IS_ACTOR_ALIVE(&(uParam1[1])))
			{
				if (IS_ACTOR_VALID(&(uParam1[1])))
				{
					iLocal_94 = 1;
					Function_150(&(uParam1[1]));
					Local_137 = Function_150(&(uParam1[1]));
					fLocal_93 = Function_99(&Global_54078, &Local_137);
					Local_31 = Local_137;
					Local_137.f_4 = (StackVal + 8.0f);
					if (FIND_WATER_INTERSECTION(Local_137, Local_31, &uLocal_37, &uLocal_40))
					{
						Function_116("crimeHoldUpObj03", 1, 1);
						Function_17(&(uParam1[0]));
						Function_7(&(uParam1[0]));
						return 1;
					}
				}
			}
			if (!IS_ACTOR_VALID(&(uParam1[1])))
			{
				if (iLocal_118)
				{
					AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
					Function_124("crimeHoldUp09", 0x40f00000, 1, 2, 0, 0, 0, 0);
					iLocal_118 = 0;
				}
				if (DECOR_CHECK_EXIST(&Global_54076, "CHBadguy_Gone"))
				{
					DECOR_REMOVE(&Global_54076, "CHBadguy_Gone");
					Function_116("crimeHoldUpObj03", 1, 1);
					Function_17(&(uParam1[0]));
					Function_7(&(uParam1[0]));
					return 1;
				}
				if (IS_OBJECT_VALID(&uLocal_106))
				{
					GET_OBJECT_POSITION(&uLocal_106, &Local_34);
					Local_31 = Local_34;
					Local_34.f_4 = (StackVal + 8.0f);
					if (FIND_WATER_INTERSECTION(Local_34, Local_31, &uLocal_37, &uLocal_40))
					{
						Function_116("crimeHoldUpObj03", 1, 1);
						Function_17(&(uParam1[0]));
						Function_7(&(uParam1[0]));
						return 1;
					}
				}
				if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&Global_54076)))
				{
					if (DECOR_CHECK_EXIST(GRINGO_GET_TARGET(GET_CURRENT_GRINGO(&Global_54076)), "crimeLootTarget"))
					{
						iLocal_111 = 1;
						uParam0 = 9;
					}
				}
			}
			else if (IS_ACTOR_HOGTIED(&(uParam1[1])))
			{
				Function_17(&(uParam1[1]));
				Function_108(&Global_54076, &(uParam1[1]), "crimeHoldUpPlayer_msg04", "crimeHoldUpPlayer_msg04", 5, 60, 1, 1);
				iLocal_110 = 1;
				fLocal_92 = Function_99(&Global_54078, &iLocal_134);
				Function_124("crimeHoldUpHelp01", 0x40f00000, 1, 2, 0, 0, 0, 0);
				uLocal_122 = ADD_BLIP_FOR_ACTOR(&(uParam1[0]), 325, 0.0f, 3, 0);
				DECOR_REMOVE(&(uParam1[1]), "LootCorpse_CreateBlip");
				uParam0 = 11;
			}
			else if (!bLocal_108)
			{
				Function_110(&(uParam1[1]), &(uParam1[0]));
			}
			break;
		
		case 0x00000009:
			uLocal_29 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uParam4, Function_198(), 0f, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(5,5f, 4.0f, 5,5f));
			uLocal_27 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("crimeHoldUpContext", &uLocal_29, 25, "@FOOT.INTERACT", 0, 0, 0, 0, 4294967295, 0);
			ATTACH_OBJECTS(StackVal, StackVal, &uLocal_29, &(uParam1[0]), Function_198(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
			Function_98(iParam6, 1, 1);
			iLocal_110 = 1;
			fLocal_92 = Function_99(&Global_54078, &iLocal_134);
			HUD_CLEAR_OBJECTIVE_QUEUE();
			Function_124("crimeHoldUp03", 0x40f00000, 1, 2, 0, 0, 0, 0);
			Function_17(&(uParam1[0]));
			uLocal_122 = ADD_BLIP_FOR_ACTOR(&(uParam1[0]), 325, 0.0f, 3, 0);
			uParam0 = 10;
			break;
		
		case 0x0000000A:
			if (Function_97(&(uParam1[0]), &(uParam1[1])))
			{
				SET_ACTION_NODE_FOR_ACTOR(&(uParam1[0]), "Stolen_Pleading_Panic_Return/excited_return/mobile_and_loop/loop");
				uParam0 = 17;
			}
			else
			{
				bParam2 = 0;
			}
			break;
		
		case 0x00000014:
			if (Function_97(&(uParam1[0]), &(uParam1[1])))
			{
				RESET_ANIM_SET_FOR_ACTOR(&(uParam1[0]), 1);
				HUD_CLEAR_OBJECTIVE_QUEUE();
				SET_ACTION_NODE_FOR_ACTOR(&(uParam1[0]), "Stolen_Pleading_Panic_Return/excited_return/mobile_and_loop/loop");
				uParam0 = 17;
			}
			else
			{
				bParam2 = 0;
			}
			break;
		
		case 0x0000000B:
			if (!Function_148(&(uParam1[1]), 0))
			{
				DECOR_SET_BOOL(&(uParam1[1]), "LootCorpse_CreateBlip", 1);
				uParam0 = 6;
				break;
			}
			if (!IS_ACTOR_HOGTIED(&(uParam1[1])))
			{
				iLocal_110 = 0;
				ADD_BLIP_FOR_ACTOR(&(uParam1[1]), 322, 0, 2, 0);
				TASK_FLEE_ACTOR(&(uParam1[1]), &Global_54076, -1.0f, -1.0f, 0, 0, 0);
				Function_124("crimeHoldUpObj02", 0x40f00000, 1, 2, 0, 0, 0, 0);
				Function_17(&(uParam1[0]));
				uParam0 = 6;
			}
			if (Function_97(&(uParam1[0]), &(uParam1[1])))
			{
				SET_ACTION_NODE_FOR_ACTOR(&(uParam1[0]), "Stolen_Pleading_Panic_Return/excited_return/mobile_and_loop/loop");
				uParam0 = 12;
			}
			else
			{
				bParam2 = 0;
			}
			break;
		
		case 0x0000000C:
			if (Function_148(&(uParam1[1]), 0))
			{
				if ((iLocal_91 != 0 && Function_109(&Global_54076, &(uParam1[0])) > 15.0f) && iLocal_141)
				{
					HUD_CLEAR_OBJECTIVE_QUEUE();
					if (IS_ACTOR_RIDING(&Global_54076))
					{
						Function_124("crimeHoldUpObj07", 0x40f00000, 1, 2, 0, 0, 0, 0);
					}
					else
					{
						Function_124("crimeHoldUpObj06", 0x40f00000, 1, 2, 0, 0, 0, 0);
					}
					iLocal_91 = 1;
				}
				if (((Function_109(&Global_54076, &(uParam1[0])) > 4.0f && GET_ACTOR_HOGTIE_STATE(&(uParam1[1])) != 3) && !IS_ACTION_NODE_PLAYING_PARTIAL(&Global_54076, "pickupvictim")) && !IS_ACTION_NODE_PLAYING_PARTIAL(&Global_54076, "pickupvictimhorse"))
				{
					HUD_CLEAR_OBJECTIVE_QUEUE();
					if (GET_ACTOR_HOGTIE_STATE(&(uParam1[1])) == 3)
					{
						GRINGO_ALLOW_ACTIVATION(&uLocal_132, true);
						Function_81(&iLocal_160, &uParam1, bParam5);
						DECOR_SET_INT(&(uParam1[0]), "iAdditionalMoney", 10);
						uParam0 = 13;
					}
					else
					{
						Function_108(&Global_54076, &(uParam1[0]), "crimeHoldUpPlayer_msg01", "crimeHoldUpPlayer_msg01", 5, 60, 1, 1);
						Function_79(iParam6, 1);
						uParam0 = 18;
					}
				}
			}
			else
			{
				DECOR_SET_BOOL(&(uParam1[1]), "LootCorpse_CreateBlip", 1);
				uParam0 = 6;
				break;
			}
			break;
		
		case 0x0000000D:
			if (Function_81(&iLocal_160, &uParam1, bParam5))
			{
				Function_76(0);
				AUDIO_MUSIC_SET_MOOD("IDLE", 0, 4294967295, 4294967295);
				Function_197(&uLocal_100, 0.0f);
				bLocal_84 = true;
				iLocal_112 = 1;
				uParam0 = 14;
			}
			break;
		
		case 0x0000000E:
			if (Function_109(&Global_54076, &(uParam1[0])) < 100.0f && !Function_75(&(uParam1[0]), 1.0f, 80.0f, 1, 1, 0))
			{
				if ((bLocal_114 || bLocal_116) || bLocal_115)
				{
					DESTROY_ACTOR(&(uParam1[1]));
				}
				else
				{
					DESTROY_ACTOR(&(uParam1[0]));
					DESTROY_ACTOR(&(uParam1[1]));
				}
				return 1;
			}
			if (Function_73(&uLocal_100, 60.0f))
			{
				RESET_ANIM_SET_FOR_ACTOR(&(uParam1[0]), 1);
				return 1;
			}
			break;
		
		case 0x00000011:
			bParam2 = 0;
			if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_27))
			{
				if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(&uLocal_27))
				{
					RESET_ANIM_SET_FOR_ACTOR(&(uParam1[0]), 1);
					RELEASE_SCRIPT_USE_CONTEXT(&uLocal_27);
					DESTROY_VOLUME(&uLocal_29);
					HUD_CLEAR_OBJECTIVE_QUEUE();
					uParam0 = 18;
				}
			}
			break;
		
		case 0x00000012:
			bParam2 = 0;
			if (Function_72() <= iParam6)
			{
				AUDIO_MUSIC_SET_MOOD("IDLE", 0, 4294967295, 4294967295);
				Function_124("crimeHoldUpObj03", 0x40f00000, 1, 2, 0, 0, 0, 0);
				Function_111(4294967246, 1, 0);
				Function_108(&Global_54076, &(uParam1[0]), "crimeHoldUpPlayer_msg02", "crimeHoldUpPlayer_msg02", 5, 60, 1, 1);
				iLocal_140 = TASK_SEQUENCE_OPEN();
				TASK_TAUNT_ACTOR(0, &Global_54076, 0.0f, 25.0f, 0, 10.0f);
				TASK_WANDER(0, -1.0f);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&(uParam1[0]), iLocal_140);
				TASK_SEQUENCE_RELEASE(iLocal_140, 1);
				TASK_PRIORITY_SET(&(uParam1[0]), 2);
				return 1;
			}
			AUDIO_MUSIC_SET_MOOD("IDLE", 0, 4294967295, 4294967295);
			if (iLocal_121 == 0)
			{
				iLocal_121 = 1;
				DECOR_SET_INT(&(uParam1[0]), "iAdditionalMoney", 10);
			}
			AI_GOAL_LOOK_AT_ACTOR_NEW(&(uParam1[0]), &Global_54076, 25.0f, 1);
			TASK_FACE_ACTOR(&(uParam1[0]), &Global_54076, 1, 3212836864);
			uParam0 = 19;
			break;
		
		case 0x00000013:
			bParam2 = 0;
			if (Function_71(&(uParam1[0])))
			{
				if (Function_60(&(uParam1[0]), &Global_54076, &fLocal_142, &iLocal_145, &uLocal_146, &uParam4, 25.0f, &iLocal_154, &uLocal_104, &bParam2, "thanks", "thanks", "crimeHoldUp04", "crimeHoldUp04", 30.0f, 2, -5.0f, 0, 4.0f, 0, "", 1, 0, 0, 0x40800000))
				{
					if (iLocal_154 == 1)
					{
						Function_21(20, 1, 0);
						Function_111(50, 1, 0);
						Function_79(bParam5, 1);
						TASK_CLEAR(&(uParam1[0]));
						Function_7(&(uParam1[0]));
						bLocal_84 = true;
						TASK_PRIORITY_SET(&(uParam1[0]), 2);
						if (IS_BLIP_VALID(&uLocal_122))
						{
							REMOVE_BLIP(&uLocal_122);
						}
						return 1;
					}
				}
				if (Function_148(&(uParam1[0]), 0))
				{
					Function_21(20, 1, 0);
					bLocal_84 = true;
					Function_7(&(uParam1[0]));
					TASK_PRIORITY_SET(&(uParam1[0]), 2);
				}
				return 1;
			}
			break;
		
		case 0x00000015:
			bParam2 = 0;
			if (Function_71(&(uParam1[0])))
			{
				if (Function_60(&(uParam1[0]), &Global_54076, &fLocal_142, &iLocal_145, &uLocal_146, &uParam4, 25.0f, &iLocal_154, &uLocal_104, &bParam2, "", "", "", "", 30.0f, 2, -5.0f, 1, 4.0f, 1, 0, 0, 1, 0, 0x40800000))
				{
					if (iLocal_154 == 1)
					{
						Function_7(&(uParam1[0]));
						Function_21(20, 1, 0);
						return 1;
					}
				}
				if (Function_148(&(uParam1[0]), 0))
				{
					Function_7(&(uParam1[0]));
					TASK_PRIORITY_SET(&(uParam1[0]), 2);
				}
				return 1;
			}
			break;
	}
	return 0;
}

void Function_21(int iParam0, bool bParam1, bool bParam2) //Position: 0x26B5 / 9909
{
	int iVar0;
	bool bVar1;
	
	if (Function_59(0) && (!Global_6623 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_58())
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
	iVar0 = Function_57(3);
	Function_54();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (&bParam1)
	{
		Function_52(3, bVar1);
		if (!&bParam2)
		{
			if (!Function_51(Global_119936, 4))
			{
				Function_45(&Global_54076, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_31(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_30(3));
	iVar0 = Function_57(3);
	switch (Global_21369.f_248)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_21369.f_248 = 1;
				Function_23(4, Function_29(Global_21369.f_248), 1);
				Function_22(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_21369.f_248 = 2;
				Function_23(4, Function_29(Global_21369.f_248), 1);
				Function_22(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_21369.f_248 = 3;
				Function_23(4, Function_29(Global_21369.f_248), 1);
				Function_22(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_21369.f_248 = 4;
				Function_23(4, Function_29(Global_21369.f_248), 1);
				Function_22(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_21369.f_248 = 5;
				Function_23(4, Function_29(Global_21369.f_248), 1);
				Function_22(Global_21369.f_244, Global_21369.f_248);
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

void Function_22(int iParam0, int iParam1) //Position: 0x2889 / 10377
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

int Function_23(int iParam0, char* cParam1) //Position: 0x2AF3 / 10995
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
	Function_27(iParam0, &cParam1, 0, 1);
	iVar1 = Function_24();
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

int Function_24() //Position: 0x2C83 / 11395
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
	Function_25();
	return 0;
}

void Function_25() //Position: 0x2D24 / 11556
{
	int iVar0;
	int iVar1;
	
	iVar0 = (Global_77754 - 1);
	iVar1 = (iVar0 - 1);
	while (iVar1 > 0)
	{
		Global_77754[iVar0] = Global_77754[iVar1];
		Global_77766[iVar016] = { StackVal, Global_77766[iVar116] };
		*(&Global_77766[iVar016] + 16) = { StackVal, *(&Global_77766[iVar116] + 16) };
		*(&Global_77766[iVar016] + 32) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_77766[iVar116] + 32) };
		Global_77766[iVar016].f_96 = Global_77766[iVar116].f_96;
		Global_77766[iVar016].f_116 = Global_77766[iVar116].f_116;
		Global_77766[iVar016].f_120 = Global_77766[iVar116].f_120;
		Function_26(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_26(int iParam0) //Position: 0x2DE2 / 11746
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

int Function_27(int iParam0, char* cParam1) //Position: 0x2E48 / 11848
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
		Function_28(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &uParam3);
	}
	return 1;
}

void Function_28(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x319F / 12703
{
	CLEAR_STAT_MESSAGE();
	if (!Global_77928)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 0, 0, 1, 0, 0, 0);
		}
		else if (&bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 1, 0, 0, 0, 0, 0);
		}
	}
}

var Function_29(int iParam0) //Position: 0x3227 / 12839
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

float Function_30(int iParam0) //Position: 0x32B6 / 12982
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

int Function_31(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x32EF / 13039
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
	Function_44(iParam0, TO_FLOAT(bParam1), 1);
	Function_43(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_33(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_32(iParam0);
	return 1;
}

void Function_32(bool bParam0) //Position: 0x3517 / 13591
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

void Function_33(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x35B5 / 13749
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_42(390))), 32);
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
					fVar19 = (Function_30(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_30(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_40(iParam0, fVar19, fVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_37(fVar19, fParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_35(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_34(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_198(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 1, 0, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 0, 0, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_34(int iParam0) //Position: 0x3BF3 / 15347
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_35(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x3C04 / 15364
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_36(char* cParam0) //Position: 0x3CFB / 15611
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_37(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x3D16 / 15638
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_39(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_38(Function_39(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_38(int iParam0, int iParam1) //Position: 0x3D7D / 15741
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int Function_39(int iParam0, int iParam1) //Position: 0x3D8F / 15759
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_40(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x3DA1 / 15777
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
	if (((Function_41(iParam0) != 19 || Function_41(iParam0) != 17) || Function_41(iParam0) != 10) || Function_41(iParam0) != 9)
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

int Function_41(int iParam0) //Position: 0x3ED5 / 16085
{
	return Global_55480[iParam016].f_96;
}

var Function_42(int iParam0) //Position: 0x3EE4 / 16100
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_43(int iParam0) //Position: 0x3F21 / 16161
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

int Function_44(int iParam0, float fParam1, bool bParam2) //Position: 0x40BD / 16573
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

void Function_45(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x4301 / 17153
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_47(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_46(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_46(char* cParam0) //Position: 0x4376 / 17270
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

bool Function_47(int iParam0, var uParam1, int iParam2) //Position: 0x43B0 / 17328
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
		if (Function_49(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_48(uVar0))
		{
			case 0x00000002:
				if (!Function_51(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_48(char* cParam0) //Position: 0x442C / 17452
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

int Function_49(int iParam0) //Position: 0x44CD / 17613
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_50(&iVar1, 2147483648);
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

void Function_50(int iParam0, int iParam1) //Position: 0x450A / 17674
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
	return;
}

bool Function_51(var uParam0, int iParam1) //Position: 0x4520 / 17696
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_52(int iParam0, bool bParam1) //Position: 0x4533 / 17715
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
	iVar1 = Function_53(iParam0, 4294967295);
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
	iVar1 = Function_24();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

var Function_53(int iParam0, int iParam1) //Position: 0x46DF / 18143
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

void Function_54() //Position: 0x4724 / 18212
{
	Function_56(3, 0.0f);
	Function_55(3, 10000.0f);
	return;
}

int Function_55(int iParam0, int iParam1) //Position: 0x473A / 18234
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_56(int iParam0, int iParam1) //Position: 0x477A / 18298
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

int Function_57(int iParam0) //Position: 0x47BA / 18362
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[iParam0]);
}

bool Function_58() //Position: 0x47FB / 18427
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

var Function_59(bool bParam0) //Position: 0x4826 / 18470
{
	return (*&Global_21369 + 168)[bParam0];
}

bool Function_60(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, int iParam7, var uParam8, var uParam9, float fParam10, int iParam11, var uParam12, bool bParam13, float fParam14, int iParam15, float fParam16, bool bParam17, float fParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, int iParam23, float fParam24) //Position: 0x4835 / 18485
{
	int iVar0;
	
	uParam9 = uParam9;
	fParam18 = &fParam18;
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
				uParam2 = Function_109(&iParam0, &Global_54076);
				AI_GOAL_LOOK_AT_ACTOR_NEW(&iParam0, &iParam1, -1.0f, 1);
				uParam8 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &uParam5, Function_198(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
				ATTACH_OBJECTS(StackVal, StackVal, &uParam8, &iParam1, Function_198(), Vector(0.0f, 0,5f, &fParam16), Vector(0.0f, 0.0f, 0.0f), 4294967295);
				if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &iParam0, 1.0f, &fParam14, 1, 1, 0) || Function_109(&Global_54076, &iParam0) > 2.0f)
				{
					TASK_FOLLOW_OBJECT_AT_DISTANCE(&iParam0, &uParam8, 1.0f, &iParam15);
					TASK_PRIORITY_SET(&iParam0, true);
				}
				uParam3 = 1;
			}
			break;
		
		case 0x00000001:
			if ((Function_109(&iParam0, &iParam1) - uParam2) < fParam6)
			{
				TASK_FLEE_ACTOR(&iParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
				return 0;
			}
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &iParam0, 1.0f, &fParam14, 1, 1, 0))
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
			else if (!Function_148(&iParam0, 0))
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
			SET_ANIM_SET_FOR_ACTOR(&iParam0, &fParam10, 0);
			SET_ACTION_NODE_FOR_ACTOR(&iParam0, &iParam11);
			TASK_FACE_ACTOR(&iParam0, &iParam1, 1, 3212836864);
			uParam3 = 4;
			break;
		
		case 0x00000004:
			uParam9 = 0;
			if (GET_NTH_TASK_STATUS(&iParam0, 0) != 0 || bParam21)
			{
				if (!&bParam21)
				{
					SET_ANIM_SET_FOR_ACTOR(&iParam0, &fParam10, 1);
					SET_ACTION_NODE_FOR_ACTOR(&iParam0, &iParam11);
				}
				if (&bParam19)
				{
					Function_108(&iParam0, &Global_54076, "nThank_You", 0, 5, 60, 1, 1);
				}
				else
				{
					Function_108(&iParam0, &Global_54076, &uParam12, &bParam13, 5, 60, 1, 1);
				}
				uParam3 = 5;
				Function_197(&uParam4, 0.0f);
			}
			else if (!Function_148(&iParam0, 0))
			{
				return 0;
			}
			break;
		
		case 0x00000005:
			if (iParam23 && !Function_70(&iParam0))
			{
				if (&fParam24 != -1.0f)
				{
					if (!IS_AMBIENT_SPEECH_PLAYING(&iParam0))
					{
						RESET_ANIM_SET_FOR_ACTOR(&iParam0, 1);
						Function_61(&iParam0, 4, 0, 1);
					}
				}
				else if (Function_101(&uParam4, &fParam24))
				{
					RESET_ANIM_SET_FOR_ACTOR(&iParam0, 1);
					Function_61(&iParam0, 4, 0, 1);
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
							Function_108(&Global_54076, &iParam0, &bParam20, &bParam20, 5, 60, 1, 1);
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
			if (iParam23 && !Function_70(&iParam0))
			{
				if (Function_101(&uParam4, &fParam24))
				{
					RESET_ANIM_SET_FOR_ACTOR(&iParam0, 1);
					Function_61(&iParam0, 4, 0, 1);
				}
			}
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(&iParam0, &iParam11) && !IS_AMBIENT_SPEECH_PLAYING(&Global_54076))
			{
				RESET_ANIM_SET_FOR_ACTOR(&iParam0, 1);
				iParam7 = 1;
				if (&bParam17)
				{
					Function_61(&iParam0, 4, 0, &iParam15);
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

int Function_61(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x4C5A / 19546
{
	int iVar0;
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
			iVar0 = 0;
			while (iVar0 < (GET_NUM_DRAFT_POSITIONS(&iParam0) - 1))
			{
				uVar1 = GET_DRAFT_ACTOR(iVar0, &iParam0);
				if (IS_ACTOR_VALID(&uVar1))
				{
					Function_62(&uVar1, 0, 0, 0, 1);
				}
				iVar0++;
			}
		}
		Function_62(&iParam0, &iParam1, &iParam2, &iParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_62(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4) //Position: 0x4D48 / 19784
{
	char* cVar0[32];
	
	Function_69();
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
	if (Function_68(&uParam0) == 1)
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
	Function_67(&uParam0, 0);
	Function_66(&uParam0, iParam1);
	Function_65(&uParam0, &uParam2);
	Function_64(&uParam0, uParam3);
	if (Function_63(&uParam0) != 5)
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

int Function_63(int iParam0) //Position: 0x4FB4 / 20404
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_behavior");
}

void Function_64(var uParam0, bool bParam1) //Position: 0x4FD8 / 20440
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_65(var uParam0, int iParam1) //Position: 0x4FFC / 20476
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_target", &iParam1);
	return;
}

void Function_66(var uParam0, bool bParam1) //Position: 0x5022 / 20514
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_67(var uParam0, bool bParam1) //Position: 0x5049 / 20553
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_state", bParam1);
	return;
}

int Function_68(bool bParam0) //Position: 0x506D / 20589
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(&bParam0), "actorRoam_ref");
}

void Function_69() //Position: 0x508C / 20620
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

bool Function_70(int iParam0) //Position: 0x50DB / 20699
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

bool Function_71(bool bParam0) //Position: 0x5103 / 20739
{
	switch (iLocal_161)
	{
		case 0x00000000:
			Function_108(&Global_54076, &bParam0, "crimeHoldUpPlayer_msg01", "crimeHoldUpPlayer_msg01", 5, 60, 1, 1);
			iLocal_161 = 1;
			break;
		
		case 0x00000001:
			if (!IS_AMBIENT_SPEECH_PLAYING(&Global_54076))
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

int Function_72() //Position: 0x5181 / 20865
{
	return Function_57(0);
}

bool Function_73(var uParam0, float fParam1) //Position: 0x518B / 20875
{
	if (Function_101(&uParam0, fParam1))
	{
		Function_74(&uParam0);
		return 1;
	}
	return 0;
}

void Function_74(vector3 vParam0) //Position: 0x51A5 / 20901
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

bool Function_75(var uParam0, float fParam1, float fParam2, int iParam3, int iParam4, int iParam5) //Position: 0x51BC / 20924
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam0, &fParam1, &fParam2, &iParam3, &iParam4, &iParam5);
}

void Function_76(bool bParam0) //Position: 0x51DC / 20956
{
	if (bParam0)
	{
		Function_78(0x10000000);
	}
	else
	{
		Function_77(0x10000000);
	}
	Global_39922.f_304 = 0;
	return;
}

void Function_77(int iParam0) //Position: 0x5201 / 20993
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_78(int iParam0) //Position: 0x521E / 21022
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

int Function_79(bool bParam0, bool bParam1) //Position: 0x5231 / 21041
{
	bool bVar0;
	
	bVar0 = Function_57(0);
	if ((Function_57(0) - bParam0) <= 0)
	{
		bParam0 = bVar0;
	}
	if (bParam0 >= 0)
	{
		Function_80(0, bParam0, 0);
	}
	else
	{
		return 0;
	}
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, (bParam0 * 4294967295), 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_57(0));
	return 1;
}

int Function_80(int iParam0, bool bParam1, int iParam2) //Position: 0x52C2 / 21186
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
	Function_43(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_33(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

bool Function_81(int iParam0, var[] uParam1) //Position: 0x54BF / 21695
{
	struct<2> Var0;
	var uVar2;
	
	switch (iParam0)
	{
		case 0x00000000:
			Function_92(1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_17(&(uParam1[0]));
			SET_CURRENT_CAMERA_ON_CHANNEL(&uLocal_158, 0, 0f, 0f, 0, 0, 0, 0, 0, 0);
			INIT_CAMERA_FROM_GAME_CAMERA(&uLocal_158);
			SET_CAMERA_POSITION(&uLocal_158, *(&Local_44 + 72));
			SET_CAMERA_TARGET_OBJECT(&uLocal_158, &(uParam1[0]), 0);
			Function_88();
			Function_108(&Global_54076, &(uParam1[0]), "crimeHoldUpPlayer_msg03", "crimeHoldUpPlayer_msg03", 5, 60, 1, 1);
			GRINGO_GET_USE_COMPONENT_POSITION_EXT(&uLocal_132, "Player", &Var0);
			uVar2 = GRINGO_GET_USE_COMPONENT_HEADING_EXT(&uLocal_132, "Player");
			SET_OBJECT_POSITION(&Global_54076, Var0);
			SET_OBJECT_ORIENTATION(StackVal, &Global_54076, Vector(0.0f, uVar2, 0.0f));
			SET_ANIM_SET_FOR_ACTOR(&Global_54076, "shopkeeper_return", 0);
			SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "shopkeeper_return/gent");
			TASK_STAND_STILL(&(uParam1[0]), -1.0f, 0, 0);
			TASK_PRIORITY_SET(&(uParam1[0]), true);
			RESET_ANIM_SET_FOR_ACTOR(&(uParam1[0]), 1);
			GRINGO_GET_USE_COMPONENT_POSITION_EXT(&uLocal_132, "Shopkeeper", &Var0);
			uVar2 = GRINGO_GET_USE_COMPONENT_HEADING_EXT(&uLocal_132, "Shopkeeper");
			SET_OBJECT_POSITION(&(uParam1[0]), Var0);
			SET_OBJECT_ORIENTATION(StackVal, &(uParam1[0]), Vector(0.0f, uVar2, 0.0f));
			SET_ANIM_SET_FOR_ACTOR(&(uParam1[0]), "shopkeeper_return", 0);
			SET_ACTION_NODE_FOR_ACTOR(&(uParam1[0]), "shopkeeper_return/gped");
			TASK_STAND_STILL(&(uParam1[1]), -1.0f, 0, 0);
			TASK_PRIORITY_SET(&(uParam1[1]), true);
			RESET_ANIM_SET_FOR_ACTOR(&(uParam1[1]), 1);
			GRINGO_GET_USE_COMPONENT_POSITION_EXT(&uLocal_132, "UseCase1", &Var0);
			uVar2 = GRINGO_GET_USE_COMPONENT_HEADING_EXT(&uLocal_132, "UseCase1");
			SET_OBJECT_POSITION(&(uParam1[1]), Var0);
			SET_OBJECT_ORIENTATION(StackVal, &(uParam1[1]), Vector(0.0f, uVar2, 0.0f));
			SET_ANIM_SET_FOR_ACTOR(&(uParam1[1]), "shopkeeper_return", 0);
			SET_ACTION_NODE_FOR_ACTOR(&(uParam1[1]), "shopkeeper_return/hillb");
			Function_197(&uLocal_150, 0.0f);
			iParam0 = 1;
			break;
		
		case 0x00000001:
			if (!IS_AMBIENT_SPEECH_PLAYING(&Global_54076) || Function_101(&uLocal_150, 8.0f))
			{
				if (bLocal_120)
				{
					Function_108(&(uParam1[0]), &Global_54076, "crimeHoldUp04", "crimeHoldUp04", 5, 60, 1, 1);
				}
				else
				{
					Function_108(&(uParam1[0]), &Global_54076, "crimeHoldUp05", "crimeHoldUp05", 5, 60, 1, 1);
				}
				Function_197(&uLocal_150, 0.0f);
				iParam0 = 2;
			}
			break;
		
		case 0x00000002:
			if (!IS_AMBIENT_SPEECH_PLAYING(&(uParam1[0])) || Function_101(&uLocal_150, 8.0f))
			{
				if (Function_101(&uLocal_150, 3.0f))
				{
					Function_21(20, 1, 0);
					Function_111(100, 1, 0);
					Function_98(bParam2, 1, 1);
					Function_87(2);
					SET_CAMERA_POSITION(&uLocal_158, *(&Local_44 + 96));
					SET_CAMERA_TARGET_OBJECT(&uLocal_158, &Global_54076, 0);
					Function_197(&uLocal_150, 0.0f);
					iParam0 = 3;
				}
			}
			break;
		
		case 0x00000003:
			if (Function_101(&uLocal_150, 5.0f))
			{
				Function_197(&uLocal_150, 0.0f);
				iParam0 = 4;
			}
			break;
		
		case 0x00000004:
			SET_MOVER_FROZEN(&(uParam1[0]), 1);
			SET_MOVER_FROZEN(&(uParam1[1]), 1);
			uLocal_143 = DECOR_GET_OBJECT(&(uParam1[1]), "HogtiedGringoAttached");
			if (IS_OBJECT_VALID(&uLocal_143))
			{
				GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&uLocal_143), false);
			}
			Function_82(2, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1);
			REMOVE_CAMERA_FROM_CHANNEL(&uLocal_158, 0);
			DESTROY_CAMERA(&uLocal_158);
			return 1;
			break;
	}
	return 0;
}

void Function_82(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, var uParam9, var uParam10) //Position: 0x58E5 / 22757
{
	var uVar0;
	
	bParam1 = &bParam1;
	if (&bParam6)
	{
		CAMERA_RESET(0);
	}
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		if (&bParam3)
		{
			SET_PLAYER_CONTROL(0, 1, 0, 0);
		}
		uVar0 = Function_86();
		if (IS_ACTOR_VALID(&uVar0))
		{
			if (&bParam2)
			{
				TASK_CLEAR(&uVar0);
			}
			if (!&bParam1)
			{
				if (HUD_IS_FADED())
				{
					RESET_ANIM_SET_FOR_ACTOR(&uVar0, 0);
				}
				else
				{
					RESET_ANIM_SET_FOR_ACTOR(&uVar0, 1);
				}
			}
			ACTOR_END_FORCE_HOLSTER(&uVar0);
			SET_ACTOR_INVULNERABILITY(&uVar0, 0);
			if (Global_53410[0])
			{
				Global_53410[0] = 0;
				UI_CHEAT_SET_VALUE(0, 0);
			}
		}
		Function_31(21, 1, 0, 0);
	}
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (&bParam7)
	{
		Function_85();
	}
	if (&bParam4)
	{
		ENABLE_USE_CONTEXTS(1);
	}
	if (&bParam8)
	{
		UI_POP("nCutscenes");
	}
	AUDIO_ENABLE_PLAYER_TAUNTS();
	Function_83(&uParam9, &uParam10);
}

void Function_83(var uParam0, bool bParam1) //Position: 0x59B4 / 22964
{
	uParam0 = &uParam0;
	HUD_ENABLE(&uParam0);
	if (&bParam1)
	{
		HUD_CLEAR_SMALL_TEXT_QUEUE();
		PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	}
	SET_TIME_ACCELERATION(Global_99471);
	STREAMING_UNLOAD_SCENE();
	AI_STOP_IGNORING_ACTORS();
	if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol")))
	{
		DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol"));
	}
	if (!Global_6623)
	{
		Function_84();
	}
	ACTOR_DATA_GRAVITY_LIMIT(0);
	Global_99146 = 0;
	Global_99147 = 0;
	if (IS_VOLUME_VALID(&Global_99170))
	{
		if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&Global_99170))
		{
			REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Global_99170);
		}
		if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&Global_99170))
		{
			REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Global_99170);
		}
	}
	SET_TREE_COST_MODIFIER(1.0f);
	SET_USES_QUAD_IK_FIX(0);
	return;
}

void Function_84() //Position: 0x5A83 / 23171
{
	int iVar0;
	
	iVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		if (GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(&Global_21369 + 72)) != &iVar0)
		{
			LOG_ERROR("PLAYERHORSE NOT IN PLAYER HORSE! WHY? FIXING");
			GIVE_OBJECT_TO_LAYOUT(&Global_21369 + 72, &iVar0);
		}
	}
	return;
}

void Function_85() //Position: 0x5AFB / 23291
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

var Function_86() //Position: 0x5B10 / 23312
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_87(int iParam0) //Position: 0x5B25 / 23333
{
	Global_26652[iParam04].f_20++;
	if (Global_26652[iParam04].f_20 == 1)
	{
		Function_31(409, 1, 0, 0);
	}
	return;
}

void Function_88() //Position: 0x5B56 / 23382
{
	var uVar0;
	int iVar1;
	
	Function_89(0, 0x40400000);
	uVar0 = GET_MOST_RECENT_MOUNT(&Global_54076);
	iVar1 = &Global_21369 + 72;
	if (IS_ACTOR_VALID(&uVar0))
	{
		if (Function_109(&uVar0, &Global_54076) > 3.0f)
		{
			TELEPORT_ACTOR(&uVar0, &Local_44 + 120, 1, 1, 1);
			Local_44.f_120 = (Local_44.f_120 + 0,7f);
		}
		TASK_CLEAR(&uVar0);
		TASK_STAND_STILL(&uVar0, 30.0f, 0, 0);
		TASK_PRIORITY_SET(&uVar0, true);
	}
	if (IS_ACTOR_VALID(&iVar1))
	{
		if (Function_109(&iVar1, &Global_54076) > 3.0f)
		{
			TELEPORT_ACTOR(&iVar1, &Local_44 + 120, 1, 1, 1);
		}
		TASK_CLEAR(&iVar1);
		TASK_STAND_STILL(&iVar1, 30.0f, 0, 0);
		TASK_PRIORITY_SET(&iVar1, true);
	}
	return;
}

void Function_89(float fParam0, float fParam1) //Position: 0x5C04 / 23556
{
	(&Global_21369 + 72 + 44) = 0;
	Global_21369.f_396 = 0;
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		if (GET_TASK_STATUS(&Global_21369 + 72, 86) != 2)
		{
			TASK_CLEAR(&Global_21369 + 72);
		}
		if (&fParam0 == 0.0f)
		{
			TASK_PRIORITY_SET(&Global_21369 + 72, true);
			TASK_STAND_STILL(&Global_21369 + 72, &fParam0, 0, 0);
		}
	}
	if (IS_BLIP_VALID(&Global_21369 + 400))
	{
		REMOVE_BLIP(&Global_21369 + 400);
	}
	Function_91();
	Function_90();
	if (DECOR_CHECK_EXIST(&Global_54076, "Player_SimWhistle"))
	{
		DECOR_REMOVE(&Global_54076, "Player_SimWhistle");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleTimeWaited"))
	{
		DECOR_REMOVE(&Global_54076, "WhistleTimeWaited");
	}
	DECOR_SET_FLOAT(&Global_54076, "Player_IgnoreWhistle", (GET_CURRENT_GAME_TIME() + &fParam1));
	return;
}

void Function_90() //Position: 0x5D15 / 23829
{
	if (DECOR_CHECK_EXIST(&Global_54076, "HorseStolen"))
	{
		DECOR_REMOVE(&Global_54076, "HorseStolen");
	}
	return;
}

void Function_91() //Position: 0x5D49 / 23881
{
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleNavQuery"))
	{
		DESTROY_OBJECT(DECOR_GET_OBJECT(&Global_54076, "WhistleNavQuery"));
		DECOR_REMOVE(&Global_54076, "WhistleNavQuery");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleNavQueryPos"))
	{
		DECOR_REMOVE(&Global_54076, "WhistleNavQueryPos");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistlePosProbed"))
	{
		DECOR_REMOVE(&Global_54076, "WhistlePosProbed");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleTimeWaited"))
	{
		DECOR_REMOVE(&Global_54076, "WhistleTimeWaited");
	}
	return;
}

void Function_92(bool bParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, var uParam7, bool bParam8, bool bParam9, var uParam10, bool bParam11, var uParam12, var uParam13) //Position: 0x5E4F / 24143
{
	var uVar0;
	int iVar1;
	var uVar2;
	
	uParam1 = &uParam1;
	if (&bParam6)
	{
		UI_PUSH("nCutscenes");
	}
	HUD_CLEAR_HELP();
	UI_DUMP_MESSAGE_QUEUE_TO_NOTES(1);
	HUD_ENABLE(0);
	Function_85();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(&Global_54076, "iDrunk", false);
	if (&bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		iVar1 = Function_86();
		if (IS_ACTOR_VALID(&iVar1))
		{
			if (GET_WEAPON_IN_HAND(&iVar1) != 4294967295)
			{
				Global_119938 = 1;
			}
			else
			{
				Global_119938 = 0;
			}
			if (&bParam3)
			{
				TASK_CLEAR(&iVar1);
			}
			if (&bParam11)
			{
				uVar2 = GET_ATTACHED_HOGTIE_VICTIM(&iVar1);
				if (IS_ACTOR_VALID(&uVar2))
				{
					FREE_FROM_HOGTIE(&uVar2);
					HOGTIE_ACTOR(&uVar2);
				}
			}
			if (bParam0)
			{
				ACTOR_START_FORCE_HOLSTER(&iVar1, 0, 0);
			}
			if (&bParam2)
			{
				SET_PLAYER_POSTURE(0, 0, 0);
				TASK_OVERRIDE_SET_POSTURE(&iVar1, 0);
			}
			SET_ACTOR_HEALTH(&iVar1, GET_ACTOR_MAX_HEALTH(&iVar1));
			SET_ACTOR_INVULNERABILITY(&iVar1, 1);
			AI_IGNORE_ACTOR(&iVar1);
		}
		SET_PLAYER_CONTROL(0, 0, 0, 0);
		if (IS_PLAYER_DEADEYE(0))
		{
			CANCEL_DEADEYE();
			CANCEL_TIME_WARP(1);
		}
		if (&bParam8)
		{
			if (IS_VOLUME_VALID(&uParam7))
			{
				FIRE_STOP_FLAMES_IN_VOLUME(&uParam7);
				DELETE_PROJECTILES_IN_VOLUME(&uParam7);
			}
			else
			{
				FIRE_STOP_ALL_FIRES();
				Function_150(&iVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_198(), 2,802597E-45f, Function_150(&iVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
				DELETE_PROJECTILES_IN_VOLUME(&uVar0);
			}
		}
		Function_31(19, 1, 0, 0);
	}
	SET_TIME_ACCELERATION(0.0f);
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(1);
	}
	if (&bParam4)
	{
		ENABLE_USE_CONTEXTS(0);
	}
	AI_GLOBAL_CLEAR_ALL_DANGER();
	if (uParam10 && !Function_96())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_95()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_95()));
		DECOR_SET_BOOL(&Global_54076, "nquitBinos", 1);
		UNK_0xE6C1DBD9(0);
		SET_DRAW_ACTOR(&Global_54076, 1);
		SHOW_PHYSINST(GET_PHYSINST_FROM_ACTOR(&Global_54076));
		if (UI_ISACTIVE("BinocularsUI"))
		{
			UI_POP("BinocularsUI");
		}
	}
	ACTOR_DATA_GRAVITY_LIMIT(1);
	ENABLE_PIP(0, 0, 1);
	Global_99146 = 1;
	Global_99168 = GET_THIS_SCRIPT_ID();
	Global_99170 = "";
	if (IS_VOLUME_VALID(&uVar0))
	{
		DESTROY_VOLUME(&uVar0);
	}
	if (Function_94(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_93(0x4000000);
	}
	if (Function_94(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_93(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&uParam12);
	SET_USES_QUAD_IK_FIX(&uParam13);
}

void Function_93(int iParam0) //Position: 0x6101 / 24833
{
	int iVar0;
	
	if (Function_123(iParam0, 1) && Function_123(Global_39556, 1))
	{
	}
	iVar0 = (Global_39556 && iParam0);
	Global_39556 = (Global_39556 - iVar0);
	Global_39556 |= 1073741824;
	return;
}

bool Function_94(int iParam0) //Position: 0x6135 / 24885
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_95() //Position: 0x6151 / 24913
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	uVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_LAYOUTREF_VALID(&uVar0))
	{
		uVar1 = CREATE_OBJECT_ITERATOR(&uVar0);
		uVar2 = START_OBJECT_ITERATOR(&uVar1);
		ITERATE_ON_OBJECT_TYPE(&uVar1, 42);
		if (IS_OBJECT_VALID(&uVar2))
		{
			while (IS_OBJECT_VALID(&uVar2))
			{
				PRINTSTRING(GET_OBJECT_NAME(&uVar2));
				PRINTNL();
				if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(&uVar2), "bino_camera"))
				{
					return &uVar2;
				}
				uVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
			}
		}
		DESTROY_ITERATOR(&uVar1);
	}
	return "";
}

bool Function_96() //Position: 0x61DF / 25055
{
	if (Function_123(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_97(var uParam0, int iParam1) //Position: 0x61FA / 25082
{
	if (IS_ACTOR_ON_FOOT(&Global_54076))
	{
		if (GET_ACTOR_HOGTIE_STATE(&iParam1) == 3)
		{
			return Function_75(&uParam0, 1.0f, 30.0f, 1, 1, 0);
		}
		return Function_75(&uParam0, 1.0f, 35.0f, 1, 1, 0);
	}
	return Function_75(&uParam0, 1.0f, 39.0f, 1, 1, 0);
}

int Function_98(bool bParam0, bool bParam1, bool bParam2) //Position: 0x624D / 25165
{
	bool bVar0;
	
	bVar0 = Function_57(0);
	if ((Function_57(0) + bParam0) >= 999999)
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
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_57(0));
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_6627)
	{
		Function_31(597, bParam0, 0, 0);
	}
	if (&bParam2)
	{
		if ((Function_57(597) + Function_57(450)) >= 10000)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
			{
				AWARD_ACHIEVEMENT(24);
			}
		}
	}
	return 1;
}

float Function_99(struct<2> Param0) //Position: 0x631F / 25375
{
	struct<2> Var0;
	int iVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	iVar2 = VMAG(Var0);
	return iVar2;
}

void Function_100(var uParam0, int iParam1) //Position: 0x633E / 25406
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

bool Function_101(var uParam0, float fParam1) //Position: 0x634D / 25421
{
	if (Function_104(&uParam0))
	{
		if (Function_102(&uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_102(vector3 vParam0) //Position: 0x636B / 25451
{
	if (Function_104(&vParam0))
	{
		if (Function_103(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_103(int iParam0) //Position: 0x6438 / 25656
{
	return Function_123(iParam0, 2);
}

bool Function_104(bool bParam0) //Position: 0x6446 / 25670
{
	return Function_123(bParam0, 1);
}

void Function_105() //Position: 0x6454 / 25684
{
	int iVar0;
	
	bLocal_157 = true;
	if (Global_43787 == 0)
	{
		iVar0 = Function_107(3);
		if (iVar0 == 0)
		{
			uLocal_155 = "FTR_SONG_02";
		}
		else if (iVar0 == 1)
		{
			uLocal_155 = "FTR_SONG_03";
		}
		else if (iVar0 == 2)
		{
			uLocal_155 = "FTR_SONG_07";
		}
	}
	else if (Global_43787 == 2)
	{
		uLocal_155 = "NRT_SONG_05";
	}
	else if (Global_43787 == 1)
	{
		if (Function_106())
		{
			uLocal_155 = "MEX_SONG_04";
		}
		else
		{
			uLocal_155 = "MEX_SONG_05";
		}
	}
	AUDIO_MUSIC_FORCE_TRACK(&uLocal_155, "SILENT", 0.0f, 500, 4294967295, 3212836864, 0);
	return;
}

bool Function_106() //Position: 0x651F / 25887
{
	return (RAND_INT_RANGE(0, 1999) / 1000) != 0;
}

var Function_107(bool bParam0) //Position: 0x6532 / 25906
{
	bParam0 = (bParam0 * 1000 - 1);
	return (RAND_INT_RANGE(0, bParam0) / 1000);
}

void Function_108(int iParam0, int iParam1, var uParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x654B / 25931
{
	iParam1 = &iParam1;
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_ACTOR_ALIVE(&iParam0) && Function_109(&iParam0, &Global_54076) >= IntToFloat(&iParam5))
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
					if (!SAY_SINGLE_LINE_STRING_BEAT(&iParam0, &uParam2, &iParam1, 1, 1, &iParam4, &iParam7, 0, 0, 1))
					{
						bParam3 = &bParam3;
					}
				}
				else if (!SAY_SINGLE_LINE_STRING_BEAT(&iParam0, &uParam2, &iParam1, 1, 1, &iParam4, &iParam7, 0, 1, 1))
				{
					bParam3 = &bParam3;
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING(&iParam0, &uParam2, true, true, &iParam4, 0, false, true);
			}
		}
	}
}

float Function_109(int iParam0, int iParam1) //Position: 0x65F8 / 26104
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

void Function_110(var uParam0, int iParam1) //Position: 0x66ED / 26349
{
	if (Function_122(&uParam0, &iParam1, 30.0f) || !IS_ACTOR_ON_FOOT(&Global_54076))
	{
		TASK_OVERRIDE_SET_MOVETYPE(&uParam0, 4);
	}
	else
	{
		TASK_OVERRIDE_SET_MOVETYPE(&uParam0, 2);
	}
	return;
}

void Function_111(int iParam0, bool bParam1, bool bParam2) //Position: 0x6722 / 26402
{
	int iVar0;
	bool bVar1;
	
	if (Function_59(0) && !Global_6623)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_58())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_252 = (Global_21369.f_252 + iParam0);
		return;
	}
	iVar0 = Function_57(1);
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
			Function_52(1, bVar1);
			if (!&bParam2)
			{
				if (!Function_51(Global_119936, 1))
				{
					Function_45(&Global_54076, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_114(1, (4294967295 * bVar1));
			if (!Global_6623)
			{
				if (!Function_51(Global_119936, 2))
				{
					Function_45(&Global_54076, 2, 3, 0);
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
		Function_80(1, (4294967295 * bVar1), 0);
	}
	if (Function_57(1) <= 4294962296)
	{
		Function_113(1, 4294962296, 0);
	}
	else if (Function_57(1) >= 5000)
	{
		Function_113(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_30(1));
	iVar0 = Function_57(1);
	switch (Global_21369.f_244)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_21369.f_244 = 1;
				Function_23(2, Function_112(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_21369.f_244 = 0;
				Function_23(2, Function_112(Global_21369.f_244), 0);
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
				Function_23(2, Function_112(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_21369.f_244 = 1;
				Function_23(2, Function_112(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_21369.f_244 = 3;
				Function_23(2, Function_112(Global_21369.f_244), 1);
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
				Function_23(2, Function_112(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_21369.f_244 = 4;
				Function_23(2, Function_112(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_21369.f_244 = 3;
				Function_23(2, Function_112(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_21369.f_244 = 5;
				Function_23(2, Function_112(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_21369.f_244 = 4;
				Function_23(2, Function_112(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_21369.f_244 = 6;
				Function_23(2, Function_112(Global_21369.f_244), 1);
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
				Function_23(2, Function_112(Global_21369.f_244), 0);
			}
			break;
	}
	Function_22(Global_21369.f_244, Global_21369.f_248);
	return;
}

var Function_112(int iParam0) //Position: 0x6A49 / 27209
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

int Function_113(int iParam0, bool bParam1, bool bParam2) //Position: 0x6AEC / 27372
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
		Function_44(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_43(iParam0);
	if (&bParam2)
	{
		Function_33(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_114(int iParam0, bool bParam1) //Position: 0x6D88 / 28040
{
	bool bVar0;
	int iVar1;
	
	Function_80(iParam0, bParam1, 0);
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
	iVar1 = Function_53(iParam0, 4294967295);
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
	iVar1 = Function_24();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

int Function_115(var uParam0, int iParam1) //Position: 0x6F33 / 28467
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

void Function_116(var uParam0, bool bParam1, bool bParam2) //Position: 0x7029 / 28713
{
	if (bParam1)
	{
		HUD_CLEAR_HELP_QUEUE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
		Function_124(&uParam0, 0x40f00000, 1, 2, 0, 0, 0, 0);
		if (&bParam2)
		{
			Function_117();
		}
	}
	return;
}

void Function_117() //Position: 0x7054 / 28756
{
	switch (Global_43787)
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

void Function_118(bool bParam0) //Position: 0x70DD / 28893
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

bool Function_119(int iParam0, var uParam1, float fParam2, var uParam3, bool bParam4, float fParam5) //Position: 0x7130 / 28976
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
		fVar0 = Function_109(&iParam0, &Global_54076);
		if (!Function_123(&uParam3, 8))
		{
			if (GET_LAST_ATTACKER(&iParam0) == &Global_54076)
			{
				uParam1 = 8;
				Function_120(&iParam0);
				return 1;
			}
		}
		if (!Function_123(&uParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(&iParam0, 1.0f))
			{
				uParam1 = 2;
				Function_120(&iParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(&iParam0, 1.0f, 1.0f))
			{
				uParam1 = 2;
				Function_120(&iParam0);
				return 1;
			}
		}
		if (!Function_123(&uParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(&iParam0) || (((GET_ACTOR_UNDER_RETICLE(&Global_54076, 0) != &iParam0 && IS_PLAYER_WEAPON_ZOOMED(&Global_54076)) && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(&Global_54076) != &iParam0 && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f))
			{
				if (fParam2 > 0.0f)
				{
					uParam1 = 4;
					Function_120(&iParam0);
					return 1;
				}
				if (fParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - fParam2) < 1,3f)
					{
						uParam1 = 4;
						Function_120(&iParam0);
						return 1;
					}
				}
				fParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_123(&uParam3, 1))
		{
			if (Global_6646 || Global_6647)
			{
				uParam1 = 1;
				Function_120(&iParam0);
				return 1;
			}
		}
		if (!Function_123(&uParam3, 16))
		{
			if (UNK_0x7F454A92(&iParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(&iParam0)) > 2.0f && fVar0 > 18.0f)
				{
					uParam1 = 16;
					Function_120(&iParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_120(int iParam0) //Position: 0x72F9 / 29433
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&iParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(&iParam0, 1);
	UNK_0x99AFD2D1(&iParam0, 0, 0);
	Function_121(&iParam0);
	MEMORY_CONSIDER_AS(&Global_54076, &iParam0, 2);
	MEMORY_CONSIDER_AS(&iParam0, &Global_54076, 2);
	AI_GOAL_LOOK_CLEAR(&iParam0);
	return;
}

void Function_121(int iParam0) //Position: 0x7336 / 29494
{
	SAY_SINGLE_LINE_CONTEXT(&iParam0, 60, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

bool Function_122(var uParam0, var uParam1, bool bParam2) //Position: 0x734F / 29519
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_VALID(&uParam1))
		{
			if (ACTORS_IN_RANGE(&uParam0, &uParam1, bParam2))
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

bool Function_123(var uParam0, bool bParam1) //Position: 0x7464 / 29796
{
	return (uParam0 && bParam1) == 0;
}

void Function_124(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x7471 / 29809
{
	struct<4> Var0;
	var uVar4;
	
	if (&bParam4)
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_125(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&uParam0, &iParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&uParam0, &iParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

struct<16> Function_125(int iParam0) //Position: 0x7506 / 29958
{
	char* cVar0[16];
	
	if (!Function_96())
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

bool Function_126(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x7545 / 30021
{
	if (StackVal & 64 == 64)
	{
		if (!uParam2)
		{
			if (IS_ACTOR_VALID(&uParam1))
			{
				if (Function_109(&Global_54076, &uParam1) > 15.0f)
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
		if (Function_129() && !uParam2)
		{
			return 0;
		}
		if (Function_128(iParam0) && !uParam2)
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
		if (!Function_127(iParam0, &uParam5))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_127(int iParam0, int iParam1) //Position: 0x7688 / 30344
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

int Function_128(int iParam0) //Position: 0x76A9 / 30377
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

int Function_129() //Position: 0x76E9 / 30441
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
						if (Function_130(&Global_54076, &Global_39621[iVar05] + 16) > IntToFloat(iVar1))
						{
							return 1;
						}
					}
				}
			}
			if (Function_130(&Global_54076, &Global_39621[iVar05] + 16) > IntToFloat(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

float Function_130(int iParam0, var uParam1) //Position: 0x77AC / 30636
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			Function_132(&iParam0);
			Var0 = Function_132(&iParam0);
			Function_131(&uParam1);
			Var2 = Function_131(&uParam1);
			return VDIST(Var0, Var2);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

struct<8> Function_131(int iParam0) //Position: 0x784E / 30798
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

struct<8> Function_132(int iParam0) //Position: 0x78BC / 30908
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

void Function_133(var[] uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6) //Position: 0x7928 / 31016
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
			Function_142(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_141(0);
		}
		if (&bParam6)
		{
			Function_139(0, GET_THIS_SCRIPT_ID());
			Global_6615 = GET_THIS_SCRIPT_ID();
			Global_6644 = 1;
			Function_137(iParam3);
		}
		Function_135(iParam3);
		if (Function_134(StackVal, 32768))
		{
			Function_76(1);
		}
		Global_26652[iParam34].f_16++;
		Function_31(408, 1, 0, 0);
	}
}

bool Function_134(var uParam0, int iParam1) //Position: 0x7A21 / 31265
{
	return (uParam0 && iParam1) == 0;
}

void Function_135(int iParam0) //Position: 0x7A2E / 31278
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (!Function_123(StackVal, 524288))
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
			bVar1 = Function_136(iVar0 * 60);
			ADD_TIME(&Global_27462[iParam052] + 376, 0, 0, bVar1, 0);
			Global_26652[iParam04] = &Global_27462[iParam052] + 376;
		}
	}
	return;
}

int Function_136(int iParam0) //Position: 0x7AD4 / 31444
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_137(int iParam0) //Position: 0x7AEB / 31467
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
	Function_138(&Var0 + 80[Var0.f_762], &(Global_26652[iParam04]), iParam0);
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

void Function_138(vector3 vParam0) //Position: 0x7B8A / 31626
{
	vParam0.y = iParam2;
	vParam0 = Param1.f_16;
	vParam0.f_8 = 1;
	return;
}

void Function_139(int iParam0, int iParam1) //Position: 0x7BA6 / 31654
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
			Function_140(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_140(struct<113> Param0) //Position: 0x7C2D / 31789
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

void Function_141(int iParam0) //Position: 0x7C8B / 31883
{
	*(&Global_21369 + 136) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 136, 0, 0, (&iParam0 + Function_136(900)), 0);
	return;
}

void Function_142(int iParam0) //Position: 0x7CAF / 31919
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, (&iParam0 + Function_136(200)), 0);
	return;
}

void Function_143(var uParam0, int iParam1) //Position: 0x7CD2 / 31954
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_144(int iParam0) //Position: 0x7CE3 / 31971
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		SET_ACTOR_CAN_BE_HARDLOCKED(&iParam0, 0);
		AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&iParam0, 0);
	}
	return;
}

void Function_145(var uParam0, bool bParam1) //Position: 0x7D00 / 32000
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_CONVERSE_ENABLE(&uParam0);
	}
	else
	{
		AI_CONVERSE_DISABLE(&uParam0);
	}
	return;
}

void Function_146(var uParam0, bool bParam1) //Position: 0x7D25 / 32037
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_INT(&uParam0, "honor", bParam1);
	return;
}

void Function_147(int iParam0) //Position: 0x7D47 / 32071
{
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(&iParam0, "nocrime"))
	{
		DECOR_SET_BOOL(&iParam0, "nocrime", 1);
	}
	return;
}

bool Function_148(int iParam0, bool bParam1) //Position: 0x7D7E / 32126
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
			Function_17(&iParam0);
			return 0;
		}
		if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&iParam0), 163840))
		{
			Function_17(&iParam0);
			return 0;
		}
	}
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (Function_149(&iParam0, 0) && !AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&iParam0), 16384))
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

int Function_149(int iParam0, int iParam1) //Position: 0x7E29 / 32297
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

struct<8> Function_150(int iParam0) //Position: 0x7E7B / 32379
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

struct<32> Function_151(struct<8> Param0) //Position: 0x7E8D / 32397
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152("0", &cVar8, ""), 4);
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

struct<32> Function_152(char* cParam0) //Position: 0x7EF9 / 32505
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_153(struct<2>[] Param0, vector3[] vParam1, int iParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x7F1B / 32539
{
	int iVar0;
	var uVar1;
	struct<2> Var2;
	
	iVar0 = iParam2;
	if (!iVar0 > Param0 && iVar0 <= 0)
	{
		return "";
	}
	if (Function_16(&(Param0[iVar02]), 1))
	{
		return "";
	}
	if (!Function_16(&(Param0[iVar02]), 2))
	{
		return "";
	}
	if (IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
	{
		if (IS_PERS_CHAR_ALIVE(&vParam1[iVar03] + 16) || iParam3)
		{
			if (!IS_PERS_CHAR_ALIVE(&vParam1[iVar03] + 16))
			{
				REVIVE_PERS_CHAR(&vParam1[iVar03] + 16, 1);
			}
			if (!Function_16(&(Param0[iVar02]), 8))
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], 1, false);
				Function_13(&(Param0[iVar02]), 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(&vParam1[iVar03] + 16);
			uVar1 = GET_ACTOR_FROM_PERS_CHAR(&vParam1[iVar03] + 16);
		}
	}
	else if (IS_EARLIER_THAN(&Param0[iVar02] + 8, 0) || iParam3)
	{
		GET_POSITION(GET_PLAYER_ACTOR(0), &Var2);
		(&vParam1[iVar03] + 16) = Function_155(StackVal, &Global_10996, Function_198(), vParam1[iVar03], &vParam1[iVar03] + 8, Var2, 0x42700000);
		if (IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
		{
			if (!Function_16(&(Param0[iVar02]), 8))
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], 1, false);
				Function_13(&(Param0[iVar02]), 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(&vParam1[iVar03] + 16);
			uVar1 = GET_ACTOR_FROM_PERS_CHAR(&vParam1[iVar03] + 16);
		}
	}
	if (!IS_ACTOR_VALID(&uVar1))
	{
		return "";
	}
	Function_13(&(Param0[iVar02]), 1);
	Function_154(&vParam1[iVar03] + 16, 1);
	if (&bParam5)
	{
		MAKE_ACTOR_READY_FOR_ACTION(&uVar1, 1);
	}
	if (!&bParam4)
	{
		if (IS_ACTOR_HOGTIED(&uVar1))
		{
			FREE_FROM_HOGTIE(&uVar1);
		}
	}
	return &uVar1;
}

int Function_154(int iParam0, bool bParam1) //Position: 0x80E3 / 32995
{
	var uVar0;
	var uVar1;
	
	if (IS_PERS_CHAR_VALID(&iParam0))
	{
		uVar0 = GET_ACTOR_FROM_PERS_CHAR(&iParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			TASK_CLEAR(&uVar0);
			REFERENCE_ACTOR(&uVar0);
			TASK_PRIORITY_SET(&uVar0, true);
			SET_ACTOR_UPDATE_PRIORITY(&uVar0, false);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(&uVar0, 1);
			if (&bParam1)
			{
				if (IS_ACTOR_HOGTIED(&uVar0))
				{
					FREE_FROM_HOGTIE(&uVar0);
				}
			}
		}
		uVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&iParam0), "Persistent_Char_Brain");
		if (GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(&uVar1), "ScriptStructure", "stolen_flag", 1))
		{
			SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&iParam0, 1);
			return 1;
		}
	}
	return 0;
}

var Function_155(var uParam0, var uParam1, var uParam2, var uParam3, struct<2> Param4, float fParam6) //Position: 0x8195 / 33173
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	int iVar4;
	
	if (&fParam6 > 1.0f)
	{
		fParam6 = 60.0f;
	}
	uVar2 = CREATE_PERS_CHAR_IN_LAYOUT(&uParam0, &uParam1, uParam2, Param4, &fParam6);
	if (!IS_PERS_CHAR_VALID(&uVar2))
	{
		return "";
	}
	uVar3 = CREATE_GRINGO_ON_OBJECT_BY_ID(GET_OBJECT_FROM_PERS_CHAR(&uVar2), "Persistent_Char_Brain", &uParam3, Var0, Var0);
	if (IS_OBJECT_VALID(&uVar3))
	{
		ATTACH_OBJECTS(StackVal, StackVal, &uVar3, GET_OBJECT_FROM_PERS_CHAR(&uVar2), Function_198(), Vector(0.0f, 1,5f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
	}
	else
	{
		DESTROY_PERS_CHAR(&uVar2);
		return "";
	}
	(&iVar4 + 36) = Param4;
	iVar4 = *(&iVar4 + 36);
	*(&iVar4 + 12) = *(&iVar4 + 36);
	*(&iVar4 + 24) = *(&iVar4 + 36);
	*(&iVar4 + 48) = *(&iVar4 + 36);
	*(&iVar4 + 60) = *(&iVar4 + 36);
	*(&iVar4 + 72) = &uParam0;
	GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar3), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar4, 22);
	return &uVar2;
}

int Function_156(var uParam0, int iParam1) //Position: 0x82BC / 33468
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
	Function_158(DECOR_GET_INT(&uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
		}
		else
		{
			Function_157(iVar0, &uParam0, &uVar1, &iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(&uParam0);
	return 0;
}

void Function_157(int iParam0, var uParam1, struct<2> Param2) //Position: 0x8426 / 33830
{
	struct<8> Var0;
	
	*(&Global_39621[iParam05] + 16) = &uParam1;
	Global_39621[iParam05].f_32 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_151("stayout") };
	*(&Global_39621[iParam05] + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Param2, Vector(0.0f, 0.0f, 0.0f), Vector(12.0f, 5.0f, 12.0f));
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&Global_39621[iParam05] + 24, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&Global_39621[iParam05] + 24);
	if (&bParam3)
	{
		*(&Global_39621[iParam05] + 8) = ADD_BLIP_FOR_COORD(&Param2, 403, 0, 2, 0);
		SET_BLIP_BLINK(&Global_39621[iParam05] + 8, 1, 1, 20.0f);
	}
}

int Function_158(bool bParam0) //Position: 0x84CE / 33998
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
						Function_159(iVar0);
					}
					else if (Global_6629)
					{
						if (Function_164(StackVal, &Global_54076, Var1) < 25.0f)
						{
							Function_159(iVar0);
						}
					}
					else if (Function_164(StackVal, &Global_54076, Var1) < 55.0f)
					{
						Function_159(iVar0);
					}
				}
				else if (DECOR_GET_INT(&Global_39621[iVar05] + 16, "script") == &bParam0)
				{
					LOG_ERROR("duplicate script id..This should never happen...Tell Steve");
					PRINTSTRING("Duplicate Script Id:");
					PRINTINT(&bParam0);
					RELEASE_VOLUME(&Global_39621[iVar05] + 16);
				}
			}
		}
		else
		{
			Function_159(iVar0);
		}
		iVar0++;
	}
	return 0;
}

void Function_159(int iParam0) //Position: 0x863C / 34364
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

bool Function_160(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x86A4 / 34468
{
	int iVar0;
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
		Function_165("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
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
		iVar0 = GET_TIME_OF_DAY();
		bVar1 = GET_TOTAL_MINUTES(&Global_27462[iParam052] + 368);
		if (Global_47151[16])
		{
			PRINTSTRING("Current Time of day:");
			Function_161(&iVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_161(&iVar0);
		}
		if (!&bParam3)
		{
			ADD_TIME(&iVar0, 0, 0, bVar1, 0);
		}
		else
		{
			ADD_TIME(&iVar0, 0, 0, 10, 0);
		}
		if (Global_47151[16])
		{
			PRINTSTRING("Formed time of day:");
			Function_161(&iVar0);
		}
		*(&Global_27462[iParam052] + 376) = &iVar0;
		Global_26652[iParam04] = &iVar0;
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

void Function_161(int iParam0) //Position: 0x8910 / 35088
{
	PRINTSTRING("Day ");
	PRINTINT(GET_DAY(&iParam0));
	PRINTSTRING(": ");
	PRINTINT(GET_HOUR(&iParam0));
	PRINTSTRING(":");
	PRINTINT(GET_MINUTE(&iParam0));
	PRINTSTRING(":");
	PRINTINT(GET_SECOND(&iParam0));
	return;
}

int Function_162(struct<2> Param0, int iParam2, bool bParam3) //Position: 0x895A / 35162
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
	Function_158(4294967295);
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
			fVar4 = uParam1;
			if (bVar3)
			{
				fVar4 = (fVar4 + 170.0f);
			}
			if (Global_6629 && bVar5 != 512)
			{
			}
			else if (Function_99(&Param0, &uVar0) > fVar4)
			{
				return 0;
			}
		}
		iVar2++;
	}
	return 1;
}

bool Function_163(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x8A36 / 35382
{
	return CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), Param0, &iParam2, &iParam3, &iParam4, &iParam5, &iParam6);
}

float Function_164(var uParam0, struct<2> Param1) //Position: 0x8A57 / 35415
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_132(&uParam0);
		Var0 = Function_132(&uParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

void Function_165(var uParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x8ACE / 35534
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_125(Global_10966) };
		}
		PRINT_SMALL_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &Var0, &iParam5);
	}
	else
	{
		uVar4 = "";
		PRINT_SMALL_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &uVar4, &iParam5);
	}
}

bool Function_166(struct<2> Param0) //Position: 0x8B53 / 35667
{
	int iVar0;
	var uVar1;
	char* cVar2[8];
	char* cVar4[32];
	char* cVar12[32];
	char* cVar20[32];
	char* cVar28[32];
	char* cVar36[32];
	
	strcpy(&cVar4, "return_stand_pos_", 32);
	strcpy(&cVar12, "return_gateway_pos_", 32);
	strcpy(&cVar20, "camera_cut_pos1_", 32);
	strcpy(&cVar28, "camera_cut_pos2_", 32);
	strcpy(&cVar36, "horse_pos_", 32);
	iVar0 = Function_168(StackVal, &Global_46715, "interiorPoint_store", Param0, 0);
	if (IS_OBJECT_VALID(&iVar0))
	{
		Function_167(&iVar0);
		Param1 = { StackVal, StackVal, Function_167(&iVar0) };
		uVar1 = GET_OBJECT_NAME(&iVar0);
		STRING_CLEAR_TOKENIZER();
		SET_OWNERSHIP_STRAGGLER(&uVar1, "_");
		strcpy(&cVar2, STRING_GET_TOKEN((STRING_NUM_TOKENS() - 1)), 8);
		stradd(&cVar4, &cVar2, 32);
		iVar0 = Function_168(StackVal, &Global_46715, &cVar4, Param1, 0);
		if (!IS_OBJECT_VALID(&iVar0))
		{
			return 0;
		}
		Function_167(&iVar0);
		(&Param1 + 24) = { StackVal, StackVal, Function_167(&iVar0) };
		stradd(&cVar12, &cVar2, 32);
		iVar0 = Function_168(StackVal, &Global_46715, &cVar12, Param1, 0);
		if (!IS_OBJECT_VALID(&iVar0))
		{
			return 0;
		}
		Function_167(&iVar0);
		*(&Param1 + 48) = { StackVal, StackVal, Function_167(&iVar0) };
		stradd(&cVar20, &cVar2, 32);
		iVar0 = Function_168(StackVal, &Global_46715, &cVar20, Param1, 0);
		if (!IS_OBJECT_VALID(&iVar0))
		{
			return 0;
		}
		Function_167(&iVar0);
		*(&Param1 + 72) = { StackVal, StackVal, Function_167(&iVar0) };
		stradd(&cVar28, &cVar2, 32);
		iVar0 = Function_168(StackVal, &Global_46715, &cVar28, Param1, 0);
		if (!IS_OBJECT_VALID(&iVar0))
		{
			return 0;
		}
		Function_167(&iVar0);
		*(&Param1 + 96) = { StackVal, StackVal, Function_167(&iVar0) };
		stradd(&cVar36, &cVar2, 32);
		iVar0 = Function_168(StackVal, &Global_46715, &cVar36, Param1, 0);
		if (!IS_OBJECT_VALID(&iVar0))
		{
			return 0;
		}
		Function_167(&iVar0);
		*(&Param1 + 120) = { StackVal, StackVal, Function_167(&iVar0) };
		return 1;
	}
	return 0;
}

vector3 Function_167(int iParam0) //Position: 0x8D22 / 36130
{
	vector3 vVar0;
	
	GET_OBJECT_POSITION(&iParam0, &vVar0);
	GET_OBJECT_ORIENTATION(&iParam0, &vVar0 + 12);
	return StackVal, StackVal, vVar0;
}

var Function_168(var uParam0, char* cParam1, struct<2> Param2, float fParam4) //Position: 0x8D40 / 36160
{
	float fVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	struct<2> Var4;
	var uVar6;
	
	bVar2 = 10000.0f;
	if (IS_LAYOUTREF_VALID(&uParam0))
	{
		uVar6 = CREATE_OBJECT_ITERATOR(&uParam0);
		ITERATE_ON_OBJECT_TYPE(&uVar6, 8);
		ITERATE_ON_PARTIAL_NAME(&uVar6, &cParam1);
		fVar0 = START_OBJECT_ITERATOR(&uVar6);
		while (IS_OBJECT_VALID(&fVar0))
		{
			GET_OBJECT_POSITION(&fVar0, &Var4);
			bVar3 = VDIST(Param2, Var4);
			if (bVar3 > bVar2 && bVar3 <= &fParam4)
			{
				bVar2 = bVar3;
				uVar1 = &fVar0;
			}
			fVar0 = OBJECT_ITERATOR_NEXT(&uVar6);
		}
		DESTROY_ITERATOR(&uVar6);
	}
	if (!IS_OBJECT_VALID(&uVar1))
	{
	}
	return &uVar1;
}

bool Function_169(struct<2>[] Param0) //Position: 0x8DD5 / 36309
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_173();
	iVar1 = 0;
	if (!Function_6(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_172(&(Param0[iVar02]), 8);
		}
		else if (Function_171())
		{
			iVar1 = 1;
			Function_172(&(Param0[iVar02]), 8);
		}
		Function_172(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_6(&(Param0[iVar02]), 4))
		{
			if (!Function_6(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_6(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_6(&(Param0[02]), 8) || iVar1));
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
				Function_172(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_6(&(Param0[iVar02]), 4))
		{
			if (!Function_6(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_172(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_172(&(Param0[iVar02]), 2);
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
							Function_172(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_172(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_172(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_172(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_172(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_172(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_172(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_172(&(Param0[iVar02]), 2);
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
	Function_170();
	return 1;
}

void Function_170() //Position: 0x9197 / 37271
{
	if (!Function_94(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_171() //Position: 0x91D7 / 37335
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

void Function_172(struct<13> Param0) //Position: 0x9205 / 37381
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_173() //Position: 0x9218 / 37400
{
	if (!Function_94(128))
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

void Function_174(var[] uParam0, int iParam1) //Position: 0x925A / 37466
{
	int iVar0;
	
	if (&iParam1 == 4294967295)
	{
		iParam1 = uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= &iParam1)
	{
		Function_175(&(uParam0[iVar0]));
		iVar0++;
	}
	return;
}

void Function_175(int iParam0) //Position: 0x928C / 37516
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

void Function_176(var[] uParam0, int iParam1) //Position: 0x92D5 / 37589
{
	int iVar0;
	
	if (&iParam1 == 4294967295)
	{
		iParam1 = uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= &iParam1)
	{
		Function_177(&(uParam0[iVar0]));
		iVar0++;
	}
	return;
}

void Function_177(int iParam0) //Position: 0x9307 / 37639
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

bool Function_178(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x9351 / 37713
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

var Function_179(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x93C9 / 37833
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_180(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_172(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_180(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x9407 / 37895
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_6(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_172(&(Param0[iVar02]), 4);
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

void Function_181(var[] uParam0, int iParam1) //Position: 0x94D6 / 38102
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

void Function_182(int iParam0) //Position: 0x94F9 / 38137
{
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(iParam0);
	return;
}

int Function_183(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x9504 / 38148
{
	return Function_184(StackVal, uParam0, uParam1, &uParam2, &uParam3, &uParam4, 0, Vector(0.0f, 0.0f, 0.0f));
}

var Function_184(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, float fParam5, struct<2> Param6) //Position: 0x9521 / 38177
{
	switch (iParam0)
	{
		case 0x00000001:
			return Function_187(StackVal, &(Global_46972[0]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000002:
			return Function_187(StackVal, &(Global_46972[1]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000004:
			return Function_187(StackVal, &(Global_46972[2]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000008:
			return Function_187(StackVal, &(Global_46972[3]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000010:
			return Function_187(StackVal, &(Global_46972[4]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000020:
			return Function_187(StackVal, &(Global_46972[5]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000040:
			return Function_187(StackVal, &(Global_46972[6]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000080:
			return Function_187(StackVal, &(Global_46972[7]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000100:
			return Function_187(StackVal, &(Global_46972[8]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000200:
			return Function_187(StackVal, &(Global_46972[9]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000400:
			return Function_187(StackVal, &(Global_46972[10]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000800:
			return Function_187(StackVal, &(Global_46972[11]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00001000:
			return Function_187(StackVal, &(Global_46972[12]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00002000:
			return Function_187(StackVal, &(Global_46972[13]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return Function_185(StackVal, iParam0, bParam1, iParam2, fParam5, Param6);
}

var Function_185(var uParam0, bool bParam1, int iParam2, float fParam3, struct<2> Param4) //Position: 0x9784 / 38788
{
	bool bVar0;
	
	bVar0 = CREATE_POPULATION_SET(0);
	if (uParam0 & 1 == 1)
	{
		Function_186(&(Global_46972[0]), &bVar0);
	}
	if (uParam0 & 2 == 2)
	{
		Function_186(&(Global_46972[1]), &bVar0);
	}
	if (uParam0 & 4 == 4)
	{
		Function_186(&(Global_46972[2]), &bVar0);
	}
	if (uParam0 & 8 == 8)
	{
		Function_186(&(Global_46972[3]), &bVar0);
	}
	if (uParam0 & 16 == 16)
	{
		Function_186(&(Global_46972[4]), &bVar0);
	}
	if (uParam0 & 32 == 32)
	{
		Function_186(&(Global_46972[5]), &bVar0);
	}
	if (uParam0 & 64 == 64)
	{
		Function_186(&(Global_46972[6]), &bVar0);
	}
	if (uParam0 & 128 == 128)
	{
		Function_186(&(Global_46972[7]), &bVar0);
	}
	if (uParam0 & 256 == 256)
	{
		Function_186(&(Global_46972[8]), &bVar0);
	}
	if (uParam0 & 512 == 512)
	{
		Function_186(&(Global_46972[9]), &bVar0);
	}
	if (uParam0 & 1024 == 1024)
	{
		Function_186(&(Global_46972[10]), &bVar0);
	}
	if (uParam0 & 2048 == 2048)
	{
		Function_186(&(Global_46972[11]), &bVar0);
	}
	if (uParam0 & 4096 == 4096)
	{
		Function_186(&(Global_46972[12]), &bVar0);
	}
	if (uParam0 & 8192 == 8192)
	{
		Function_186(&(Global_46972[13]), &bVar0);
	}
	return Function_187(StackVal, &bVar0, bParam1, iParam2, 4294967295, 0, fParam3, Param4);
}

void Function_186(var uParam0, bool bParam1) //Position: 0x98F3 / 39155
{
	int iVar0;
	
	if (!IS_POPSET_VALID(&uParam0))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid subPOPSET");
	}
	if (!IS_POPSET_VALID(&bParam1))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid master popset");
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0))
	{
		LINK_ACTORENUM_TO_POPULATION(&bParam1, GET_ACTORENUM_IN_POPULATION(&uParam0, iVar0), GET_ACTORENUM_IN_POPULATION_WEIGHT(&uParam0, iVar0));
		iVar0++;
	}
	return;
}

var Function_187(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, float fParam5, struct<2> Param6) //Position: 0x99B7 / 39351
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!IS_POPSET_VALID(&bParam0))
	{
		LOG_ERROR("Trying to get a random member of an invalid popset");
		return 4294967295;
	}
	if (bParam1)
	{
		Function_193();
	}
	iVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&bParam0, iParam2, iParam3, bParam4, fParam5, Param6);
	if (!Function_192(iVar1))
	{
		if (!Global_47146 && !Global_47147)
		{
			Function_191(&bParam0, bParam1, iParam2, iParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_191(&bParam0, bParam1, iParam2, iParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	iVar0 = iVar1;
	if (bParam1 || (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(iVar1)))
	{
		if (bParam1 && iParam3 != 4294967295)
		{
			while (Function_190(iVar0) && iVar2 > 20)
			{
				iVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&bParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_192(iVar1))
				{
					iVar0 = iVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_190(iVar0))
				{
					Function_189();
				}
				Function_188(iVar0);
			}
		}
		else if (!iParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(iVar1) != iParam3 && iVar2 > 20)
			{
				iVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&bParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_192(iVar1))
				{
					iVar0 = iVar1;
				}
				iVar2++;
			}
		}
	}
	if (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(iVar0))
	{
		if (iParam2 == 0)
		{
			LOG_ERROR("Did not get a matching species, but RANDACTORFILTER_IGNORE was passed in. Did you really mean RANDACTORFILTER_ONLY_SPECIES_SPECIFIED? Update to use RANDACTORFILTER_ONLY_SPECIES_SPECIFIED or RANDACTORFILTER_IGNORE + ANIMALSPECIES_INVALID");
		}
		else
		{
			LOG_ERROR("We asked for a matching species, and did not get one");
		}
	}
	return iVar0;
}

void Function_188(int iParam0) //Position: 0x9CB0 / 40112
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		if ((*&Global_46956 + 12)[iVar0] == iParam0)
		{
			LOG_ERROR("Attempting to insert a duplicate asset into the asset duplication array. Clearly something has gone wrong.");
			return;
		}
		if ((*&Global_46956 + 12)[iVar0] == 4294967295)
		{
			(*&Global_46956 + 12)[iVar0] = iParam0;
			return;
		}
		iVar0++;
	}
	return;
}

void Function_189() //Position: 0x9D64 / 40292
{
	int iVar0;
	
	if (Global_6645)
	{
		Global_46956 = GET_THIS_SCRIPT_ID();
		Global_46956.f_8 = GET_CURRENT_GAME_TIME();
	}
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		(*&Global_46956 + 12)[iVar0] = 4294967295;
		iVar0++;
	}
	return;
}

bool Function_190(int iParam0) //Position: 0x9D9F / 40351
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		if ((*&Global_46956 + 12)[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_191(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x9DCC / 40396
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
	PRINTINT(&iParam2);
	PRINTSTRING("  ANIMALSPECIES=");
	PRINTINT(&iParam3);
	PRINTSTRING("  IgnoreStreaming=");
	if (&bParam4)
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTSTRING("  PopsetReady");
	if (IS_POPULATION_SET_READY(&uParam0, &iParam2, &iParam3))
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTNL();
	iVar0 = 0;
	while (iVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0))
	{
		PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(GET_ACTORENUM_IN_POPULATION(&uParam0, iVar0)));
		PRINTSTRING("n  Weight=");
		PRINTFLOAT(GET_ACTORENUM_IN_POPULATION_WEIGHT(&uParam0, iVar0));
		PRINTSTRING("  Streamed=");
		if (STREAMING_IS_ACTOR_LOADED(GET_ACTORENUM_IN_POPULATION(&uParam0, iVar0), 4294967295))
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

bool Function_192(int iParam0) //Position: 0x9F27 / 40743
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_193() //Position: 0x9F3E / 40766
{
	int iVar0;
	
	if (Global_6645)
	{
		if (StackVal || !&Global_46956 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_189();
		}
	}
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		if ((*&Global_46956 + 12)[iVar0] == 4294967295)
		{
			return;
		}
		iVar0++;
	}
	Function_189();
	return;
}

var Function_194(struct<2>[] Param0, int iParam1, int iParam2, bool bParam3) //Position: 0x9F8A / 40842
{
	int iVar0;
	
	iParam2 = &iParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_6(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = iParam1;
			Param0[iVar02].f_8 = 3;
			Function_172(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_172(&(Param0[iVar02]), 8);
			}
			return iVar0;
		}
		if (iParam1 == &Param0[iVar02])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

var Function_195(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xA066 / 41062
{
	float fVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			fVar0 = RAND_FLOAT_RANGE(4.0f, 6.0f);
			break;
		
		case 0x00000001:
			fVar0 = RAND_FLOAT_RANGE(18.0f, 24.0f);
			break;
		
		case 0x00000002:
			fVar0 = RAND_FLOAT_RANGE(45.0f, 55.0f);
			break;
		
		default:
			fVar0 = RAND_FLOAT_RANGE(4.0f, 6.0f);
			break;
	}
	switch (&iParam1)
	{
		case 0x00000000:
			fVar0 = (fVar0 * 0,75f);
			break;
		
		case 0x00000001:
			fVar0 = (fVar0 * 1.0f);
			break;
		
		case 0x00000002:
			fVar0 = (fVar0 * 1,25f);
			break;
		
		default:
			fVar0 = (fVar0 * 0,75f);
			break;
	}
	if (&bParam2)
	{
		fVar0 = (fVar0 * (0,75f + ((TO_FLOAT(Function_57(5)) / 100.0f) * 0,5f)));
	}
	if (&bParam3)
	{
		if (HAS_ITEM(Function_196(17), &Global_54076))
		{
			fVar0 = (fVar0 * 1,2f);
		}
	}
	if (&bParam4)
	{
		fVar0 = (fVar0 * 1,1f);
	}
	if (ROUND(fVar0) <= 1)
	{
		fVar0 = 1.0f;
	}
	return ROUND(fVar0);
}

var Function_196(bool bParam0) //Position: 0xA16D / 41325
{
	int iVar0;
	
	iVar0 = SS_GET_STRING(1, bParam0);
	if (!IS_STRING_VALID(&iVar0))
	{
		PRINTSTRING("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value:");
		PRINTINT(bParam0);
		PRINTNL();
		LOG_ERROR("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value! Ask Christian to add it");
	}
	return &iVar0;
}

void Function_197(vector3 vParam0) //Position: 0xA261 / 41569
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_143(&vParam0, 1);
	Function_50(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

var Function_198() //Position: 0xA286 / 41606
{
	bool bVar0;
	
	return &bVar0;
}

var Function_199(int iParam0, float fParam1, float fParam2, int iParam3, int iParam4, int iParam5) //Position: 0xA28F / 41615
{
	int iVar0;
	int iVar1[146];
	int iVar148[146];
	int iVar295;
	struct<2> Var296;
	struct<2> Var298;
	bool bVar300;
	bool bVar301;
	bool bVar302[146];
	bool bVar449[146];
	int iVar596;
	int iVar597;
	int iVar598;
	int iVar599;
	int iVar600;
	int iVar601;
	struct<8> Var602;
	
	iVar0 = 4294967295;
	bVar301 = 1,001638E+07.0f;
	iVar599 = 0;
	iVar600 = 0;
	iVar601 = 0;
	iVar596 = 0;
	while (iVar596 < 145)
	{
		iVar1[iVar596] = 4294967295;
		iVar148[iVar596] = 4294967295;
		iVar596++;
	}
	if (!Function_214(iParam0))
	{
		iParam0 = Global_43788;
	}
	iVar295 = Function_212(iParam0);
	PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - Checking Regions for a bountyhunter landmark: ");
	PRINTNL();
	GET_POSITION(GET_PLAYER_ACTOR(0), &Var298);
	iVar596 = 0;
	while (iVar596 < 145)
	{
		Function_211(&Global_44085[iVar5969] + 8);
		Var296 = Function_211(&Global_44085[iVar5969] + 8);
		bVar300 = VDIST(Var298, Var296);
		if (&iParam3 == 0)
		{
			iParam3 = 0;
		}
		if (((StackVal && !(IS_VOLUME_VALID(&Global_44085[iVar5969] + 8) && (iVar295 != Function_212(Global_44085[iVar5969]) || iParam0 != 4294967295)) != 1) && Function_210(&(Global_43791[iVar596]), 8192)) && iVar596 == 0)
		{
			if (iVar596 == 146)
			{
				LOG_ERROR("The bountyhunter region count is screwy. Tell Ben.");
				return 4294967294;
			}
			if (bVar300 > bVar301)
			{
				bVar301 = bVar300;
				iVar598 = iVar596;
			}
			if (bVar300 < &fParam1 && bVar300 > &fParam2)
			{
				iVar1[iVar599] = iVar596;
				bVar302[iVar599] = bVar300;
				iVar599++;
				if (Function_203(Function_205(iVar596, 0, 2)) == 0)
				{
					PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - This location is NOT FINISHED.");
					PRINTNL();
					iVar148[iVar600] = iVar596;
					bVar449[iVar600] = bVar300;
					iVar600++;
				}
				else
				{
					PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - This location is FINISHED. ");
					PRINTNL();
				}
			}
		}
		if (iVar599 == iVar1)
		{
			iVar596 = 146;
			LOG_ERROR("Reached regCount max? Tell Ben.");
		}
		iVar596++;
	}
	if (&iParam5 != 4294967295)
	{
		Function_202(&iVar1, &bVar302, iVar599);
		Function_202(&iVar148, &bVar449, iVar600);
	}
	if (iVar600 < 0 && &iParam4 != 1)
	{
		switch (&iParam5)
		{
			case 0x00000001:
			case 0x00000002:
				iVar601 = Function_39(3, iVar600);
				break;
			
			case 0x00000000:
			case 0x00000003:
				iVar601 = Function_39(5, iVar600);
				break;
			
			case 0x00000004:
				iVar601 = Function_39(7, iVar600);
				break;
			
			case 0x00000005:
				iVar601 = Function_39(10, iVar600);
				break;
			
			case 0xFFFFFFFF:
			default:
				iVar601 = Function_39(5, iVar600);
		}
		RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
		iVar597 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 99.0f)) % iVar601);
		iVar0 = iVar148[iVar597];
		if (Function_214(iVar0))
		{
			PRINTSTRING("Randomly picked NOT FINISHED Bounty Hunter location ");
		}
		else
		{
			LOG_ERROR("Invalid bountyHunterRegion picked. Using failsafe.");
			iVar0 = Function_201();
			PRINTSTRING("Picked close NOT FINISHED Bounty Hunter location ");
		}
		Var602 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_200(iVar0) };
		PRINTSTRING(&Var602);
		PRINTSTRING(" with a distance of ");
		Function_211(&Global_44085[iVar09] + 8);
		Var296 = Function_211(&Global_44085[iVar09] + 8);
		bVar300 = VDIST(Var298, Var296);
		PRINTFLOAT(bVar300);
		PRINTNL();
	}
	else if (iVar599 >= 0)
	{
		switch (&iParam5)
		{
			case 0x00000001:
			case 0x00000002:
				iVar601 = Function_39(3, iVar599);
				break;
			
			case 0x00000000:
			case 0x00000003:
				iVar601 = Function_39(5, iVar599);
				break;
			
			case 0x00000004:
				iVar601 = Function_39(7, iVar599);
				break;
			
			case 0x00000005:
			case 0x00000006:
				iVar601 = Function_39(10, iVar599);
				break;
			
			case 0xFFFFFFFF:
			default:
				iVar601 = Function_39(5, iVar599);
		}
		RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
		iVar597 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 99.0f)) % iVar601);
		iVar0 = iVar1[iVar597];
		if (Function_214(iVar0))
		{
			PRINTSTRING("Randomly picked FINISHED Bounty Hunter location ");
		}
		else
		{
			LOG_ERROR("Invalid bountyHunterRegion picked. Using failsafe.");
			iVar0 = Function_201();
			PRINTSTRING("Picked close FINISHED Bounty Hunter location ");
		}
		Var602 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_200(iVar0) };
		PRINTSTRING(&Var602);
		PRINTSTRING(" with a distance of ");
		Function_211(&Global_44085[iVar09] + 8);
		Var296 = Function_211(&Global_44085[iVar09] + 8);
		bVar300 = VDIST(Var298, Var296);
		PRINTFLOAT(bVar300);
		PRINTNL();
	}
	else
	{
		LOG_ERROR("No valid landmark picked");
		PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK found no valid landmarks");
		PRINTNL();
		return iVar598;
	}
	return iVar0;
}

struct<32> Function_200(int iParam0) //Position: 0xA941 / 43329
{
	char* cVar0[32];
	
	strcpy(&cVar0, "INVALID REGION", 32);
	if (!Function_214(iParam0))
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	if (IS_VOLUME_VALID(&Global_44085[iParam09] + 8))
	{
		strcpy(&cVar0, GET_OBJECT_NAME(&Global_44085[iParam09] + 8), 32);
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	switch (StackVal)
	{
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
			memcpy(&cVar0, &Global_44085[iParam09] + 32, 8);
			stradd(&cVar0, "v_region", 32);
			break;
		
		default:
			if (IS_VOLUME_VALID(&Global_44085[iParam09] + 8))
			{
				strcpy(&cVar0, GET_OBJECT_NAME(&Global_44085[iParam09] + 8), 32);
			}
			break;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_201() //Position: 0xAA03 / 43523
{
	if (Global_43787 == 0)
	{
		return Global_46760[6];
	}
	if (Global_43787 == 1)
	{
		return Global_46866[3];
	}
	return Global_46926[5];
}

void Function_202(int[] iParam0, bool[] bParam1, int iParam2) //Position: 0xAA31 / 43569
{
	int iVar0;
	int iVar1;
	var uVar2;
	float fVar3;
	int iVar4;
	
	iVar0 = 1;
	while (iVar0 < (iParam2 - 1))
	{
		fVar3 = bParam1[iVar0];
		uVar2 = iParam0[iVar0];
		iVar1 = (iVar0 - 1);
		iVar4 = 0;
		while (iVar4 == 0)
		{
			if (bParam1[iVar1] < fVar3)
			{
				bParam1[iVar1 + 1] = bParam1[iVar1];
				iParam0[iVar1 + 1] = iParam0[iVar1];
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
		iParam0[iVar1 + 1] = uVar2;
		bParam1[iVar1 + 1] = fVar3;
		iVar0++;
	}
	return;
}

int Function_203(int iParam0) //Position: 0xAAC8 / 43720
{
	if (!Function_204(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_12;
}

bool Function_204(int iParam0) //Position: 0xAAE2 / 43746
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_205(bool bParam0, bool bParam1, bool bParam2) //Position: 0xAAF9 / 43769
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_209(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_206(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_206(bParam0, bParam1, bParam2, 4294967295);
}

int Function_206(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0xAB57 / 43863
{
	var uVar0;
	
	if (!Function_208(bParam2))
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
	uVar0 = Function_209(bParam0, bParam1, bParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_207(uVar0);
	}
	if (&iParam3 == 4294967295)
	{
		return 4294967295;
	}
	if (&iParam3 > 275)
	{
		return 4294967295;
	}
	if (Global_21684[&iParam37] == 0)
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning new deed ");
		PRINTINT(&iParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
		Global_25536[&iParam3] = 0;
		Global_21684[&iParam37].f_4 = 0;
		Global_21684[&iParam37].f_8 = 0;
		Global_21684[&iParam37].f_12 = 0;
		Global_21684[&iParam37].f_16 = 0;
		Global_21684[&iParam37] = uVar0;
	}
	else
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning existing deed ");
		PRINTINT(&iParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
	}
	return &iParam3;
}

var Function_207(int iParam0) //Position: 0xACBB / 44219
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iParam0)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

bool Function_208(int iParam0) //Position: 0xACF9 / 44281
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_209(int iParam0, int iParam1, int iParam2) //Position: 0xAD0E / 44302
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

int Function_210(var uParam0, int iParam1) //Position: 0xAD2E / 44334
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

struct<8> Function_211(int iParam0) //Position: 0xAD4B / 44363
{
	struct<2> Var0;
	
	GET_VOLUME_CENTER(&iParam0, &Var0);
	return StackVal, Var0;
}

int Function_212(int iParam0) //Position: 0xAD5D / 44381
{
	return Function_213(iParam0);
}

int Function_213(int iParam0) //Position: 0xAD68 / 44392
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_214(iParam0))
	{
		if (StackVal == 1)
		{
			iVar0 = iParam0;
		}
		else if (StackVal == 2)
		{
			iVar0 = Global_44085[iParam09];
		}
		else
		{
			iVar0 = Global_44085[iParam09];
			iVar0 = Global_44085[iVar09];
		}
	}
	return iVar0;
}

bool Function_214(int iParam0) //Position: 0xADC0 / 44480
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

