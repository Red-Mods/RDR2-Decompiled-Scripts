//Decompiled with MagicRDR v1.0
//Function Count : 166
//Statics Count : 188
//Natives Count : 308
//Parameters Count : 62

#region Local Var
	struct<2> Local_0[10];
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
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 2;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
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
	var uLocal_86 = 0;
	int iLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	int iLocal_93 = 0;
	bool bLocal_94 = false;
	bool bLocal_95 = false;
	bool bLocal_96 = false;
	bool bLocal_97 = false;
	int iLocal_98 = 0;
	var uLocal_99 = 0;
	int iLocal_100 = 0;
	var uLocal_101 = 0;
	int iLocal_102 = 0;
	var uLocal_103 = 0;
	int iLocal_104 = 0;
	var uLocal_105 = 0;
	bool bLocal_106 = false;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	struct<2> Local_109 = { 0, 0 } ;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	int iLocal_115 = 0;
	var uLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	bool bLocal_120 = false;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	var uLocal_123 = 0;
	bool bLocal_124 = false;
	int iLocal_125 = 0;
	struct<65> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3[9];
	int iVar13;
	int iVar14[9];
	bool bVar24;
	int iVar25;
	int iVar26;
	bool bVar27;
	var uVar28;
	float fVar65;
	int iVar66;
	var uVar67;
	struct<2> Var68;
	var uVar89;
	int iVar90;
	int iVar94;
	int iVar95;
	var uVar96;
	int iVar97;
	int iVar98;
	bool bVar99;
	int iVar100;
	bool bVar101;
	
	iLocal_60 = 0;
	iLocal_61 = 0;
	iLocal_82 = 0;
	bLocal_106 = true;
	bLocal_120 = false;
	iLocal_121 = 0;
	bLocal_124 = false;
	if (Function_165("npressDemo"))
	{
		iVar0 = 0;
		while (iVar0 <= Global_27462)
		{
			if (UNK_0x214AFB8C(&Global_27462[iVar052] + 160))
			{
				if (&Global_27462[iVar052] + 160 == GET_ASSET_ID("$/content/Ambient/MexicanRevolution/mexican_rev_rally", 4))
				{
					ScriptParam_0.f_64 = iVar0;
					*(&ScriptParam_0 + 72) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_27462[iVar052] + 188) };
				}
			}
			iVar0++;
		}
	}
	iVar1 = 0;
	uVar2 = CREATE_LAYOUT(Function_164());
	bVar24 = false;
	iVar25 = 0;
	iVar26 = 0;
	bVar27 = false;
	uVar28 = 18;
	fVar65 = 0.0f;
	iVar66 = 0;
	Function_162(&uVar28, "Gather", 5, 0);
	Function_162(&uVar28, "custom/Gather", 8, 0);
	Function_162(&uVar28, "crowd_cheer", 5, 0);
	Function_162(&uVar28, "custom/crowd_cheer", 8, 0);
	*(&Var68 + 16) = 8;
	Function_161(&iLocal_83);
	Function_158(&iLocal_83, 0.0f);
	uVar89 = CREATE_SQUAD_IN_LAYOUT(&uVar2, "rallySquad");
	iVar94 = 0;
	iVar95 = 0;
	switch (bLocal_106)
	{
		case 0x00000000:
			iVar97 = 4;
			break;
		
		case 0x00000001:
			iVar97 = 6;
			break;
		
		case 0x00000002:
		case 0x00000003:
			iVar97 = 9;
			break;
	}
	if (!IS_POPSET_VALID(&(Global_46972[0])) || !IS_POPSET_VALID(&(Global_46972[6])))
	{
		iVar1 = 5;
	}
	else
	{
		if ((Function_157() || Function_165("npressDemo")) | 1)
		{
			iVar13 = 287;
		}
		else
		{
			iVar13 = 296;
		}
		MAKE_NEXT_RAND_ACTORENUMS_UNIQUE(iVar97);
		iVar90 = 0;
		while (iVar90 <= iVar97)
		{
			if (iVar90 == 0)
			{
				iVar3[iVar90] = iVar13;
			}
			else
			{
				iVar3[iVar90] = Function_155(&(Global_46972[0]), 1, 0, 1);
			}
			Function_154(&uVar28, iVar3[iVar90], 3, 0);
			iVar90++;
		}
		if ((Global_43789 != Global_46866[0] && !Function_165("npressDemo")) && 0)
		{
			bLocal_94 = 459;
			bLocal_95 = Function_153(455, 460, 459, 4294967295, 4294967295);
		}
		else
		{
			bLocal_94 = 393;
			bLocal_95 = Function_153(379, 396, 393, 4294967295, 4294967295);
		}
		bLocal_96 = Function_143(64, 1, 4, 23, 1);
		bLocal_97 = Function_143(64, 1, 4, 23, 1);
		if (bLocal_94 != 4294967295 || bLocal_95 != 4294967295)
		{
			iVar1 = 5;
		}
		else
		{
			Function_154(&uVar28, bLocal_94, 3, 0);
			Function_154(&uVar28, bLocal_95, 3, 0);
		}
		if (iVar1 != 5)
		{
			if (bLocal_96 != 4294967295 || bLocal_97 != 4294967295)
			{
				iVar1 = 5;
			}
			else
			{
				Function_154(&uVar28, bLocal_96, 3, 0);
				Function_154(&uVar28, bLocal_97, 3, 0);
			}
		}
	}
	if (iVar1 != 5)
	{
		Function_142(bLocal_94);
		Function_142(bLocal_95);
		Function_141(&iVar3, iVar97);
	}
	if (Global_6625 == 1)
	{
		iVar1 = 5;
	}
	if (Function_140(0))
	{
		iVar1 = 5;
	}
	iVar100 = 0;
	bVar101 = false;
	while (!IS_EXITFLAG_SET())
	{
		bVar99 = 600;
		if (Function_139(&bVar101, &iVar1, &iVar100, &bVar99, bVar24))
		{
			if (bVar101)
			{
				Function_138(&iVar14, 4294967295);
				Function_137(&iLocal_98);
				Function_137(&iLocal_100);
				Function_137(&iLocal_102);
				Function_137(&iLocal_104);
			}
			else
			{
				Function_136(&iVar14, 4294967295);
				Function_135(&iLocal_98);
				Function_135(&iLocal_100);
				Function_135(&iLocal_102);
				Function_135(&iLocal_104);
			}
		}
		switch (iVar1)
		{
			case 0x00000000:
				if (Function_129(&uVar28))
				{
					iVar1 = 1;
				}
				bVar99 = 600;
				break;
			
			case 0x00000001:
				if (Function_122(&Var68, &ScriptParam_0 + 60, ScriptParam_0.f_40))
				{
					iVar1 = 2;
					bVar99 = false;
				}
				else
				{
					iVar1 = 5;
					bVar99 = false;
				}
				break;
			
			case 0x00000002:
				uVar96 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uVar2, Function_164(), 0f, Var68, Vector(0.0f, 0.0f, 0.0f), Vector(8.0f, 5.0f, 8.0f));
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar96);
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar96);
				iVar90 = 0;
				while (iVar90 <= iVar97)
				{
					if (iVar90 == 0)
					{
						iVar14[iVar90] = CREATE_ACTOR_IN_LAYOUT(StackVal, &uVar2, Function_164(), iVar3[iVar90], Var68, Vector(0.0f, Var68.f_12, 0.0f));
						TASK_STAND_STILL(&(iVar14[iVar90]), -1.0f, 0, 0);
					}
					else
					{
						iVar14[iVar90] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, StackVal, &uVar2, Function_164(), iVar3[iVar90], Vector(*(&Var68 + 16[(iVar90 - 1)2]), Function_121(0.0f, *(&Var68 + 16[(iVar90 - 1)2]), &(iVar14[0])), 0.0f));
						SQUAD_JOIN(&(iVar14[iVar90]), GET_SQUAD_FROM_OBJECT(&uVar89));
						TASK_FACE_ACTOR(&(iVar14[iVar90]), &(iVar14[0]), 1, 3212836864);
					}
					SET_ACTOR_CAN_PLAY_GESTURES(&(iVar14[iVar90]), false);
					SET_ACTOR_CUTSCENE_MODE(&(iVar14[iVar90]), 1);
					SET_ACTOR_ALLOW_BUMP_REACTIONS(&(iVar14[iVar90]), 0);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&(iVar14[iVar90]), true);
					iVar90++;
				}
				if (iVar97 >= 6)
				{
					uLocal_91 = PLAY_WALLA_SOUND_FROM_ACTOR(&(iVar14[2]), "CROWD_MEXICAN_OUTDOOR_LITE_MASTER", 0);
				}
				else
				{
					uLocal_91 = PLAY_WALLA_SOUND_FROM_ACTOR(&(iVar14[2]), "VOCAL_MEX_CROWD_MASTER", 0);
				}
				bLocal_120 = true;
				AI_GOAL_LOOK_AT_ACTOR(&(iVar14[0]), &(iVar14[2]), 1, 1065353216, 3212836864, 3212836864, 0);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(&(iVar14[0]), 0);
				UNK_0x99AFD2D1(&(iVar14[0]), 1, 1);
				PRINTVECTOR(Var68);
				PRINTNL();
				PRINTVECTOR(Global_54078);
				PRINTNL();
				iLocal_93 = RAND_INT_RANGE(false, 5);
				uLocal_107 = CREATE_ACTORSET_IN_LAYOUT(&uVar2, "rallyFleeSet", 0);
				uVar67 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_39615, Function_164(), 4,203895E-45f, Var68, Vector(0.0f, 0.0f, 0.0f), Vector(ScriptParam_0.f_60, 20.0f, ScriptParam_0.f_60));
				DECOR_SET_INT(&uVar67, "script", GET_THIS_SCRIPT_ID());
				Function_114(&uVar67, ScriptParam_0.f_40);
				Function_112(ScriptParam_0.f_64, 0.0f, 1, 0, ScriptParam_0.f_40);
				if (ScriptParam_0.f_40)
				{
					Function_109("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
				}
				Function_158(&iLocal_83, 0.0f);
				iVar1 = 3;
				bVar99 = false;
				break;
			
			case 0x00000003:
				Function_96(&iVar14, 9, &bVar24, ScriptParam_0.f_64, 15, 0x42a00000, 1);
				if ((!IS_ACTOR_VALID(&(iVar14[0])) && !IS_ACTOR_VALID(&iLocal_98)) && !IS_ACTOR_VALID(&iLocal_100))
				{
					Function_95(&iVar14, iVar97);
					iVar1 = 5;
					bVar99 = false;
					break;
				}
				if (!Function_88(ScriptParam_0.f_64, &(iVar14[0]), &iVar25, &iVar26, 0, 1, 1, 1))
				{
					Function_95(&iVar14, iVar97);
					iVar1 = 5;
					bVar99 = false;
					break;
				}
				if (GET_DEBUG_DRAW_STATE())
				{
				}
				if (VDIST(Global_54078, Var68) < Function_86(1))
				{
					Function_95(&iVar14, iVar97);
					iVar1 = 5;
					bVar99 = false;
					break;
				}
				if (Function_82(&iLocal_102, 0) && Function_82(&iLocal_98, 0))
				{
					DECOR_SET_FLOAT(&iLocal_102, "dismount", GET_CURRENT_GAME_TIME());
					DECOR_SET_INT(&iLocal_102, "faction", GET_ACTOR_FACTION(&iLocal_98));
				}
				if (Function_82(&iLocal_104, 0) && Function_82(&iLocal_100, 0))
				{
					DECOR_SET_FLOAT(&iLocal_104, "dismount", GET_CURRENT_GAME_TIME());
					DECOR_SET_INT(&iLocal_104, "faction", GET_ACTOR_FACTION(&iLocal_100));
				}
				if (IS_ACTOR_VALID(&iLocal_98))
				{
					if (Function_81(&iLocal_98))
					{
						Function_79(&iVar97, &iVar14);
						Function_77(&iVar14, 4294967295);
						iLocal_121 = 1;
						iVar1 = 5;
						bVar99 = false;
						break;
					}
				}
				if (IS_ACTOR_VALID(&iLocal_100))
				{
					if (Function_81(&iLocal_100))
					{
						Function_79(&iVar97, &iVar14);
						Function_77(&iVar14, 4294967295);
						iLocal_121 = 1;
						iVar1 = 5;
						bVar99 = false;
						break;
					}
				}
				if (Function_74(&iLocal_98, &iLocal_125, &fVar65, iVar94, 0, 0x40400000))
				{
					if (iLocal_125 != 2 || iLocal_125 != 4)
					{
						Function_62(&iLocal_98);
					}
					if (Function_82(&iLocal_98, 0))
					{
						Function_61(&iLocal_98, &Global_54076);
					}
					if (Function_82(&iLocal_100, 0))
					{
						Function_61(&iLocal_100, &Global_54076);
					}
					Function_79(&iVar97, &iVar14);
					Function_77(&iVar14, 4294967295);
					iLocal_121 = 1;
					iVar1 = 5;
					bVar99 = false;
					break;
				}
				else if (Function_74(&iLocal_100, &iLocal_125, &fVar65, iVar94, 0, 0x40400000))
				{
					if (iLocal_125 != 2 || iLocal_125 != 4)
					{
						Function_62(&iLocal_100);
					}
					if (Function_82(&iLocal_98, 0))
					{
						Function_61(&iLocal_98, &Global_54076);
					}
					if (Function_82(&iLocal_100, 0))
					{
						Function_61(&iLocal_100, &Global_54076);
					}
					Function_79(&iVar97, &iVar14);
					Function_77(&iVar14, 4294967295);
					iLocal_121 = 1;
					iVar1 = 5;
					bVar99 = false;
					break;
				}
				if (Function_60(&iVar14, iVar97, &iVar66, &iLocal_125, &fVar65, iVar94, iVar98, 0x40200000))
				{
					Function_59(&iVar97, &iVar14);
					Function_77(&iVar14, 4294967295);
					iVar98 = 1;
					iLocal_121 = 1;
					if (iVar95 <= 4 && iVar95 >= 6)
					{
						if (Function_82(&iLocal_98, 0))
						{
							if (!AI_IS_HOSTILE_OR_ENEMY(&iLocal_98, &Global_54076))
							{
								Function_58(&iLocal_98, &Global_54076, "nTHANK_YOU", 0, 5, 60, 1, 1);
								bVar27 = true;
							}
						}
						if (Function_82(&iLocal_100, 0))
						{
							if (!AI_IS_HOSTILE_OR_ENEMY(&iLocal_100, &Global_54076) && !bVar27)
							{
								Function_58(&iLocal_100, &Global_54076, "nTHANK_YOU", 0, 5, 60, 1, 1);
							}
						}
						Function_158(&iLocal_83, 10.0f);
						iVar95 = 7;
					}
					else
					{
						if (Function_82(&iLocal_98, 0))
						{
							Function_49(&iLocal_98, 0, 0, 2);
						}
						if (Function_82(&iLocal_100, 0))
						{
							Function_49(&iLocal_100, 0, 0, 2);
						}
						iVar90 = 0;
						while (iVar90 <= iVar97)
						{
							if (IS_ACTOR_VALID(&(iVar14[iVar90])))
							{
								RESET_ANIM_SET_FOR_ACTOR(&(iVar14[iVar90]), 1);
								if (Function_157())
								{
									TASK_WANDER(&(iVar14[iVar90]), -1.0f);
								}
								else
								{
									TASK_FLEE_ACTOR(&(iVar14[iVar90]), &Global_54076, -1.0f, -1.0f, 0, 0, 0);
								}
							}
							iVar90++;
						}
						iVar1 = 5;
						bVar99 = false;
						break;
					}
				}
				if (Function_9(&iVar95, &iVar14, &uVar2, &uVar89, &Var68, iVar97, &bVar99))
				{
					iLocal_121 = 1;
					iVar1 = 5;
					bVar99 = false;
				}
				break;
			
			case 0x00000005:
				iVar1 = 6;
				bVar99 = false;
				break;
			
			case 0x00000006:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				bVar99 = false;
				break;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(bVar99);
		}
	}
	if (bLocal_124)
	{
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	}
	Function_136(&iVar14, 4294967295);
	Function_135(&iLocal_98);
	Function_135(&iLocal_100);
	Function_135(&iLocal_102);
	Function_135(&iLocal_104);
	Function_8(&iVar3, iVar97);
	Function_7(bLocal_94);
	Function_7(bLocal_95);
	if (ScriptParam_0.f_40)
	{
		Global_6642 = 0;
	}
	if (iLocal_121 == 0)
	{
		Function_6(&iVar14, 4294967295);
		Function_5(&iLocal_98);
		Function_5(&iLocal_100);
	}
	if (!bVar24)
	{
		Function_6(&iVar14, 4294967295);
		Function_5(&iLocal_98);
		Function_5(&iLocal_100);
		if (IS_OBJECT_VALID(&uVar2))
		{
			UNK_0xA936E73B(&uVar2, 1);
			MARK_OBJECT_FOR_AGGRESSIVE_CLEANUP(&uVar2, 1);
		}
		Function_112(ScriptParam_0.f_64, 0.0f, 0, 1, 0);
	}
	iVar90 = 0;
	while (iVar90 <= iVar97)
	{
		if (IS_ACTOR_VALID(&(iVar14[iVar90])))
		{
			SET_ACTOR_CUTSCENE_MODE(&(iVar14[iVar90]), 0);
		}
		iVar90++;
	}
	if (Function_82(&(iVar14[0]), 0))
	{
		AI_SPEECH_SET_ALLOW_FOR_ACTOR(&(iVar14[0]), 1);
		UNK_0x99AFD2D1(&(iVar14[0]), 0, 0);
	}
	if (bLocal_120)
	{
		STOP_SOUND(&uLocal_91);
	}
	REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar96);
	REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar96);
	Function_1(&uVar28);
	RELEASE_LAYOUT_REF(&uVar2);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0xB21 / 2849
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

void Function_2(struct<2>[] Param0, int iParam1) //Position: 0xB49 / 2889
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

void Function_3(struct<13> Param0) //Position: 0xC94 / 3220
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_4(struct<13> Param0) //Position: 0xCB1 / 3249
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(int iParam0) //Position: 0xCCF / 3279
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		RESET_ANIM_SET_FOR_ACTOR(&iParam0, 0);
		TASK_FLEE_ACTOR(&iParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
		TASK_PRIORITY_SET(&iParam0, false);
	}
	return;
}

void Function_6(int[] iParam0, int iParam1) //Position: 0xCFF / 3327
{
	int iVar0;
	
	if (&iParam1 == 4294967295)
	{
		iParam1 = iParam0;
	}
	iVar0 = 0;
	while (iVar0 <= &iParam1)
	{
		Function_5(&(iParam0[iVar0]));
		iVar0++;
	}
	return;
}

void Function_7(bool bParam0) //Position: 0xD31 / 3377
{
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(bParam0);
	return;
}

void Function_8(var[] uParam0, int iParam1) //Position: 0xD3C / 3388
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

bool Function_9(var uParam0, var[] uParam1) //Position: 0xD5F / 3423
{
	bool bVar0;
	
	uParam6 = uParam6;
	switch (uParam0)
	{
		case 0x00000000:
			if (Function_44(&iLocal_83, 2.0f))
			{
				RESET_ANIM_SET_FOR_ACTOR(&(uParam1[0]), 1);
				SET_ANIM_SET_FOR_ACTOR(&(uParam1[0]), "Gather", 0);
				SET_ACTION_NODE_FOR_ACTOR(&(uParam1[0]), "Gather/Speaker/talking/idle");
				switch (bLocal_106)
				{
					case 0x00000000:
						SET_ANIM_SET_FOR_ACTOR(&(uParam1[1]), "Gather", 0);
						SET_ACTION_NODE_FOR_ACTOR(&(uParam1[1]), "Gather/Listener/idle");
						SET_ANIM_SET_FOR_ACTOR(&(uParam1[2]), "Gather", 0);
						SET_ACTION_NODE_FOR_ACTOR(&(uParam1[2]), "Gather/Listener/idle");
						SET_ANIM_SET_FOR_ACTOR(&(uParam1[3]), "Gather", 0);
						SET_ACTION_NODE_FOR_ACTOR(&(uParam1[3]), "Gather/Listener/idle");
						break;
					
					case 0x00000001:
						SET_ANIM_SET_FOR_ACTOR(&(uParam1[1]), "Gather", 0);
						SET_ACTION_NODE_FOR_ACTOR(&(uParam1[1]), "Gather/Listener/idle");
						SET_ANIM_SET_FOR_ACTOR(&(uParam1[2]), "crowd_cheer", 0);
						SET_ACTION_NODE_FOR_ACTOR(&(uParam1[2]), "crowd_cheer/random_loop");
						SET_ANIM_SET_FOR_ACTOR(&(uParam1[3]), "Gather", 0);
						SET_ACTION_NODE_FOR_ACTOR(&(uParam1[3]), "Gather/Listener/idle");
						SET_ANIM_SET_FOR_ACTOR(&(uParam1[4]), "Gather", 0);
						SET_ACTION_NODE_FOR_ACTOR(&(uParam1[4]), "Gather/Listener/idle");
						SET_ANIM_SET_FOR_ACTOR(&(uParam1[5]), "crowd_cheer", 0);
						SET_ACTION_NODE_FOR_ACTOR(&(uParam1[5]), "crowd_cheer/random_loop");
						break;
					
					case 0x00000002:
					case 0x00000003:
						SET_ANIM_SET_FOR_ACTOR(&(uParam1[1]), "Gather", 0);
						SET_ACTION_NODE_FOR_ACTOR(&(uParam1[1]), "Gather/Listener/idle");
						SET_ANIM_SET_FOR_ACTOR(&(uParam1[2]), "crowd_cheer", 0);
						SET_ACTION_NODE_FOR_ACTOR(&(uParam1[2]), "crowd_cheer/random_loop");
						SET_ANIM_SET_FOR_ACTOR(&(uParam1[3]), "Gather", 0);
						SET_ACTION_NODE_FOR_ACTOR(&(uParam1[3]), "Gather/Listener/idle");
						SET_ANIM_SET_FOR_ACTOR(&(uParam1[4]), "crowd_cheer", 0);
						SET_ACTION_NODE_FOR_ACTOR(&(uParam1[4]), "crowd_cheer/random_loop");
						SET_ANIM_SET_FOR_ACTOR(&(uParam1[5]), "Gather", 0);
						SET_ACTION_NODE_FOR_ACTOR(&(uParam1[5]), "Gather/Listener/idle");
						SET_ANIM_SET_FOR_ACTOR(&(uParam1[6]), "crowd_cheer", 0);
						SET_ACTION_NODE_FOR_ACTOR(&(uParam1[6]), "crowd_cheer/random_loop");
						SET_ANIM_SET_FOR_ACTOR(&(uParam1[7]), "Gather", 0);
						SET_ACTION_NODE_FOR_ACTOR(&(uParam1[7]), "Gather/Listener/idle");
						SET_ANIM_SET_FOR_ACTOR(&(uParam1[8]), "crowd_cheer", 0);
						SET_ACTION_NODE_FOR_ACTOR(&(uParam1[8]), "crowd_cheer/random_loop");
						break;
				}
				uParam0 = 1;
			}
			break;
		
		case 0x00000001:
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &(uParam1[0]), 1.0f, 50.0f, 1, 1, 0))
			{
				Function_42();
				Function_26(27);
				Function_25(&uParam1, 4.0f);
				iLocal_98 = Function_23(StackVal, StackVal, StackVal, &uParam2, Function_164(), bLocal_94, Function_164(), bLocal_96, Vector(*(&iParam4 + 152), Function_121(0.0f, *(&iParam4 + 152), &(uParam1[0])), 0.0f));
				UNK_0x44986367(&Local_109, Function_21(&(uParam1[0]), &iLocal_98));
				VSCALE(&Local_109, 3.0f);
				*(&iParam4 + 152) = Vector(StackVal, StackVal, StackVal) + Vector(Local_109, *(&iParam4 + 152), StackVal);
				iLocal_100 = Function_23(StackVal, StackVal, StackVal, &uParam2, Function_164(), bLocal_95, Function_164(), bLocal_97, Vector(*(&iParam4 + 152), Function_121(0.0f, *(&iParam4 + 152), &(uParam1[0])), 0.0f));
				DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_98);
				SET_WEAPONENUM_LOCKED(16, 0);
				GIVE_WEAPON_TO_ACTOR(&iLocal_98, 43, false, 1, 1);
				DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_100);
				GIVE_WEAPON_TO_ACTOR(&iLocal_100, 41, false, 1, 1);
				AI_SET_NAV_MATERIAL_USAGE(&iLocal_98, 32, 0);
				AI_SET_NAV_MATERIAL_USAGE(&iLocal_100, 32, 0);
				TASK_STAND_STILL(&iLocal_98, -1.0f, 0, 0);
				TASK_STAND_STILL(&iLocal_100, -1.0f, 0, 0);
				Function_20(&iLocal_98, 0);
				Function_20(&iLocal_100, 0);
				MEMORY_ALLOW_TAKE_COVER(&iLocal_98, 0);
				MEMORY_ALLOW_TAKE_COVER(&iLocal_100, 0);
				iLocal_102 = GET_MOUNT(&iLocal_98);
				iLocal_104 = GET_MOUNT(&iLocal_100);
				TASK_STAND_STILL(&iLocal_102, -1.0f, 0, 0);
				TASK_STAND_STILL(&iLocal_104, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&iLocal_102, true);
				TASK_PRIORITY_SET(&iLocal_104, true);
				Function_158(&iLocal_87, 0.0f);
				uParam0 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_44(&iLocal_87, 7.0f))
			{
				SET_ACTOR_UPDATE_PRIORITY(&iLocal_98, false);
				SET_ACTOR_UPDATE_PRIORITY(&iLocal_100, false);
				bVar0 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_ACTOR(0, &(uParam1[5]), 11.0f, 2);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&iLocal_98, bVar0);
				TASK_SEQUENCE_RELEASE(bVar0, 1);
				Local_109 = Vector(-2,5f, 0.0f, 1,5f);
				TASK_FOLLOW_OBJECT(&iLocal_100, &iLocal_102, &Local_109, 0, 0, 0, 0, 0, 0, 1);
				uParam0 = 3;
			}
			if (Function_18(&Global_54076, Function_19(GET_SQUAD_FROM_OBJECT(&uParam3))) > 35.0f)
			{
				Function_25(&uParam1, 4.0f);
			}
			break;
		
		case 0x00000003:
			Function_17(&(uParam1[5]));
			Function_17(&iLocal_98);
			if ((VDIST(Function_17(&(uParam1[5])), Function_17(&iLocal_98)) > 15.0f || GET_NTH_TASK_STATUS(&iLocal_98, 0) != 0) && Function_44(&iLocal_83, 2.0f))
			{
				Function_58(&iLocal_98, &(uParam1[0]), "mexRevMobMsg07", "mexRevMobMsg07", 5, 60, 1, 1);
				STOP_SOUND(&uLocal_91);
				bLocal_120 = false;
				bVar0 = false;
				while (bVar0 <= iParam5)
				{
					Function_16(&(uParam1[bVar0]));
					bVar0++;
				}
				TASK_STAND_STILL(&iLocal_102, -1.0f, 1, 0);
				bVar0 = TASK_SEQUENCE_OPEN();
				TASK_DISMOUNT(false, 0);
				TASK_GO_NEAR_ACTOR(0, &(uParam1[3]), 5,5f, 2);
				TASK_DRAW_HOLSTER_WEAPON(0, 1);
				TASK_POINT_GUN_AT_OBJECT(0, &(uParam1[3]), -1.0f, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&iLocal_98, bVar0);
				TASK_SEQUENCE_RELEASE(bVar0, 1);
				bVar0 = false;
				while (bVar0 <= iParam5)
				{
					if ((bVar0 % 2) == 0)
					{
						RESET_ANIM_SET_FOR_ACTOR(&(uParam1[bVar0]), 1);
						TASK_FACE_ACTOR(&(uParam1[bVar0]), &iLocal_98, 1, 3212836864);
					}
					bVar0++;
				}
				uParam0 = 4;
			}
			else if (Function_18(&Global_54076, Function_19(GET_SQUAD_FROM_OBJECT(&uParam3))) > 35.0f)
			{
				Function_25(&uParam1, 4.0f);
			}
			break;
		
		case 0x00000004:
			bVar0 = false;
			while (bVar0 <= iParam5)
			{
				if ((bVar0 % 2) != 0)
				{
					RESET_ANIM_SET_FOR_ACTOR(&(uParam1[bVar0]), 1);
					TASK_FACE_ACTOR(&(uParam1[bVar0]), &iLocal_98, 1, 3212836864);
				}
				bVar0++;
			}
			Function_17(&iLocal_102);
			uLocal_112 = Function_17(&iLocal_102);
			GET_OBJECT_RELATIVE_POSITION(StackVal, &iLocal_102, Vector(-2,5f, 0.0f, 0.0f), &uLocal_112);
			bVar0 = TASK_SEQUENCE_OPEN();
			TASK_GO_NEAR_COORD(false, &uLocal_112, 2,5f, 2);
			TASK_DISMOUNT(false, 1);
			TASK_GO_NEAR_ACTOR(0, &(uParam1[5]), 6,5f, 2);
			TASK_POINT_GUN_AT_OBJECT(0, &(uParam1[5]), -1.0f, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&iLocal_100, bVar0);
			TASK_SEQUENCE_RELEASE(bVar0, 1);
			uParam0 = 5;
			break;
		
		case 0x00000005:
			if (GET_TASK_STATUS(&iLocal_98, 35) == 1)
			{
				TASK_TAUNT_ACTOR_IN_PLACE(&(uParam1[3]), &iLocal_98, -1f);
				TASK_FLEE_ACTOR(&(uParam1[1]), &iLocal_98, -1.0f, -1.0f, 0, 0, 0);
				Function_15(&(uParam1[0]), &Local_109);
				iLocal_115 = FIND_NEAREST_COVER_LOCATION(&Local_109, 5.0f, 0.0f, 180.0f, 7);
				if (IS_COVER_LOCATION_VALID(&iLocal_115))
				{
					TASK_HIDE_AT_COVER(&(uParam1[0]), &iLocal_115, -1.0f, 6f, 1);
				}
				else
				{
					TASK_SEEK_COVER_FROM_ACTOR(&(uParam1[0]), &iLocal_98);
				}
				Function_158(&iLocal_83, 0.0f);
				uParam0 = 6;
			}
			break;
		
		case 0x00000006:
			if (Function_44(&iLocal_83, 1.0f))
			{
				Function_58(&iLocal_98, &(uParam1[0]), "mexRevMobMsg08", "mexRevMobMsg08", 5, 60, 1, 1);
				Function_158(&iLocal_83, 0.0f);
				uParam0 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_44(&iLocal_83, 2,5f))
			{
				AUDIO_MUSIC_SET_MOOD("GUNFIGHT", 0, 4294967295, 4294967295);
				if (Function_82(&(uParam1[3]), 0))
				{
					Function_61(&iLocal_98, &(uParam1[3]));
					SET_ACTOR_ONE_SHOT_DEATH(&(uParam1[3]), true);
				}
				bVar0 = TASK_SEQUENCE_OPEN();
				if (Function_82(&(uParam1[3]), 0))
				{
					MEMORY_REPORT_POSITION_AUTO(&iLocal_98, &(uParam1[3]), 1);
					MEMORY_REPORT_POSITION_AUTO(&iLocal_100, &(uParam1[3]), 1);
					Function_17(&iLocal_98);
					Local_109 = Function_17(&iLocal_98);
					TASK_SHOOT_FROM_POSITION(0, &(uParam1[3]), &Local_109);
				}
				if (Function_82(&(uParam1[2]), 0))
				{
					MEMORY_REPORT_POSITION_AUTO(&iLocal_98, &(uParam1[2]), 1);
					MEMORY_REPORT_POSITION_AUTO(&iLocal_100, &(uParam1[2]), 1);
					TASK_KILL_CHAR(false, &(uParam1[2]));
				}
				TASK_WANDER(false, -1.0f);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&iLocal_98, bVar0);
				TASK_SEQUENCE_RELEASE(bVar0, 1);
				TASK_PRIORITY_SET(&iLocal_98, false);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iLocal_100, 28, 0.0f);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iLocal_100, 31, -1.0f);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iLocal_100, 37, 2.0f);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iLocal_100, 38, 0,5f);
				COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(&iLocal_100, 0);
				bVar0 = TASK_SEQUENCE_OPEN();
				if (!GET_NTH_TASK_STATUS(&iLocal_100, 0) != 0)
				{
					TASK_GO_NEAR_COORD(false, &uLocal_112, 1,5f, 4);
				}
				if (!GET_NTH_TASK_STATUS(&iLocal_100, 1) != 0)
				{
					TASK_DISMOUNT(false, 1);
				}
				if (Function_82(&(uParam1[2]), 0))
				{
					TASK_KILL_CHAR(false, &(uParam1[2]));
				}
				if (Function_82(&(uParam1[3]), 0))
				{
					TASK_KILL_CHAR(false, &(uParam1[3]));
				}
				TASK_WANDER(false, -1.0f);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&iLocal_100, bVar0);
				TASK_SEQUENCE_RELEASE(bVar0, 1);
				TASK_PRIORITY_SET(&iLocal_100, false);
				bVar0 = false;
				while (bVar0 <= iParam5)
				{
					if (bVar0 == 3 && Function_82(&(uParam1[bVar0]), 0))
					{
						TASK_FLEE_ACTOR(&(uParam1[bVar0]), &iLocal_98, -1.0f, -1.0f, 0, 0, 0);
					}
					bVar0++;
				}
				Function_158(&iLocal_83, 0.0f);
				uParam0 = 8;
			}
			break;
		
		case 0x00000008:
			if ((GET_TASK_STATUS(&iLocal_98, 10) != 1 && GET_TASK_STATUS(&iLocal_100, 10) != 1) || Function_44(&iLocal_83, 5.0f))
			{
				AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
				MEMORY_CLEAR_ALL(&iLocal_98);
				MEMORY_CLEAR_ALL(&iLocal_100);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iLocal_98, 1);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iLocal_100, 1);
				Function_158(&iLocal_83, 0.0f);
				uParam0 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_44(&iLocal_83, 13.0f))
			{
				bVar0 = TASK_SEQUENCE_OPEN();
				TASK_MOUNT(false, &iLocal_102, 1, 1, 1, 2147483647);
				TASK_GO_NEAR_COORD(false, &iParam4 + 152, 5.0f, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&iLocal_98, bVar0);
				TASK_SEQUENCE_RELEASE(bVar0, 1);
				TASK_PRIORITY_SET(&iLocal_98, false);
				bVar0 = TASK_SEQUENCE_OPEN();
				TASK_MOUNT(false, &iLocal_104, 1, 1, 1, 2147483647);
				TASK_GO_NEAR_COORD(false, &iParam4 + 152, 5.0f, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&iLocal_100, bVar0);
				TASK_SEQUENCE_RELEASE(bVar0, 1);
				TASK_PRIORITY_SET(&iLocal_100, false);
				iLocal_117 = Function_11(StackVal, Global_54078, 200.0f, 1);
				uParam0 = 10;
			}
			break;
		
		case 0x0000000A:
			if (Function_82(&iLocal_98, 0) && !iLocal_118)
			{
				if (GET_TASK_STATUS(&iLocal_98, 0) == 0)
				{
					if (Function_10(iLocal_117))
					{
						Function_49(&iLocal_98, 4, &Global_44085[iLocal_1179] + 8, 2);
					}
					else
					{
						Function_49(&iLocal_98, 4, 0, 2);
					}
					iLocal_118 = 1;
				}
			}
			else
			{
				iLocal_118 = 1;
			}
			if (Function_82(&iLocal_100, 0) && !iLocal_119)
			{
				if (GET_TASK_STATUS(&iLocal_100, 0) != 0 && !iLocal_119)
				{
					if (Function_10(iLocal_117))
					{
						Function_49(&iLocal_100, 4, &Global_44085[iLocal_1179] + 8, 2);
					}
					else
					{
						Function_49(&iLocal_100, 4, 0, 2);
					}
					iLocal_119 = 1;
				}
			}
			else
			{
				iLocal_119 = 1;
			}
			if (iLocal_118 && iLocal_119)
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool Function_10(int iParam0) //Position: 0x19D5 / 6613
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_11(struct<2> Param0, float fParam2, int iParam3) //Position: 0x19EB / 6635
{
	int iVar0;
	struct<2> Var1;
	bool bVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = 4294967295;
	bVar3 = 99999.0f;
	iVar4 = 0;
	if (Function_14(StackVal, Param0))
	{
		return 4294967295;
	}
	iVar5 = 0;
	while (iVar5 < 145)
	{
		if ((StackVal && (StackVal || IS_VOLUME_VALID(&Global_44085[iVar59] + 8) != 3 != 4)) && !Function_13(iVar5))
		{
			iVar4 = 0;
			if (&iParam3 == 0)
			{
				iVar4 = 1;
			}
			else if (Function_12(Global_43789) == Global_46722[Global_43787])
			{
				iVar4 = 1;
			}
			if (iVar4 == 1)
			{
				GET_VOLUME_CENTER(&Global_44085[iVar59] + 8, &Var1);
				if (VDIST(Param0, Var1) > bVar3 && VDIST(Param0, Var1) < &fParam2)
				{
					iVar0 = iVar5;
					bVar3 = VDIST(Param0, Var1);
				}
			}
		}
		iVar5++;
	}
	if (Function_10(iVar0))
	{
	}
	else
	{
		iVar0 = 4294967295;
	}
	return iVar0;
}

int Function_12(int iParam0) //Position: 0x1ACB / 6859
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_10(iParam0))
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

bool Function_13(int iParam0) //Position: 0x1B23 / 6947
{
	if ((((iParam0 != Global_46894[1] || iParam0 != Global_46838[1]) || iParam0 != Global_46816[1]) || iParam0 != Global_46760[4]) || iParam0 != Global_46866[1])
	{
		return 1;
	}
	return 0;
}

bool Function_14(vector3 vParam0) //Position: 0x1B63 / 7011
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

void Function_15(var uParam0, int iParam1) //Position: 0x1B7B / 7035
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_16(int iParam0) //Position: 0x1B8A / 7050
{
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(&iParam0, "nocrime"))
	{
		DECOR_SET_BOOL(&iParam0, "nocrime", true);
	}
	return;
}

struct<8> Function_17(int iParam0) //Position: 0x1BC1 / 7105
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

float Function_18(var uParam0, int iParam1) //Position: 0x1BD3 / 7123
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!IS_ACTOR_VALID(&uParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(&uParam0, &Var0);
	GET_POSITION(&iParam1, &Var2);
	return VDIST(Var0, Var2);
}

int Function_19(bool bParam0) //Position: 0x1CC8 / 7368
{
	int iVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return "";
	}
	bVar1 = false;
	while (bVar1 < (SQUAD_GET_SIZE(&bParam0) - 1))
	{
		iVar0 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar1);
		if (IS_ACTOR_VALID(&iVar0) && IS_ACTOR_ALIVE(&iVar0))
		{
			return &iVar0;
		}
		bVar1++;
	}
	return "";
}

int Function_20(int iParam0, int iParam1) //Position: 0x1D15 / 7445
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

var Function_21(var uParam0, int iParam1) //Position: 0x1DA0 / 7584
{
	struct<2> Var0;
	struct<2> Var2;
	var uVar4;
	
	if (IS_ACTOR_VALID(&uParam0) && IS_ACTOR_VALID(&iParam1))
	{
		GET_POSITION(&uParam0, &Var0);
		GET_POSITION(&iParam1, &Var2);
		Function_22(StackVal, StackVal, Var0, Var2, &uVar4);
		return UNK_0x9C40E671(&uVar4);
	}
	return 0.0f;
}

void Function_22(var uParam0, float fParam1, float fParam2, float fParam3, var uParam4) //Position: 0x1DDD / 7645
{
	uParam4 = Vector((GET_X(&fParam2) - GET_X(&uParam0)), 0.0f, (GET_Z(&fParam2) - GET_Z(&uParam0)));
}

var Function_23(var uParam0, var uParam1, bool bParam2, var uParam3, bool bParam4, struct<2> Param5, struct<2> Param7) //Position: 0x1E01 / 7681
{
	var uVar0;
	var uVar1;
	
	if (!IS_LAYOUTREF_VALID(&uParam0))
	{
		LOG_ERROR("Layout is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_24(bParam2))
	{
		LOG_ERROR("riderTypeName is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_24(bParam4))
	{
		bParam4 = 976;
	}
	uVar1 = CREATE_ACTOR_IN_LAYOUT(&uParam0, &uParam3, bParam4, Param5, Param7);
	if (!IS_ACTOR_VALID(&uVar1))
	{
		uVar0 = &uVar1;
		return "";
	}
	uVar0 = CREATE_ACTOR_IN_LAYOUT(&uParam0, &uParam1, bParam2, Param5, Param7);
	if (!IS_ACTOR_VALID(&uVar1))
	{
		uVar0 = &uVar1;
		return "";
	}
	if (!IS_ACTOR_VALID(&uVar0))
	{
		DESTROY_ACTOR(&uVar1);
		return "";
	}
	ACCESSORIZE_HORSE(&uVar1, 3);
	ACTOR_MOUNT_ACTOR(&uVar0, &uVar1);
	return &uVar0;
}

bool Function_24(bool bParam0) //Position: 0x1F39 / 7993
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_25(var[] uParam0) //Position: 0x1F50 / 8016
{
	if (Function_44(&iLocal_83, fParam1) && !IS_AMBIENT_SPEECH_PLAYING(&(uParam0[0])))
	{
		iLocal_93 = (iLocal_93 + 1 % 6);
		switch (iLocal_93)
		{
			case 0x00000000:
				Function_58(&(uParam0[0]), &(uParam0[2]), "mexRevMobMsg01", "mexRevMobMsg01", 2, 60, 1, 1);
				break;
			
			case 0x00000001:
				Function_58(&(uParam0[0]), &(uParam0[2]), "mexRevMobMsg02", "mexRevMobMsg02", 2, 60, 1, 1);
				break;
			
			case 0x00000002:
				Function_58(&(uParam0[0]), &(uParam0[2]), "mexRevMobMsg03", "mexRevMobMsg03", 2, 60, 1, 1);
				break;
			
			case 0x00000003:
				Function_58(&(uParam0[0]), &(uParam0[2]), "mexRevMobMsg04", "mexRevMobMsg04", 2, 60, 1, 1);
				break;
			
			case 0x00000004:
				Function_58(&(uParam0[0]), &(uParam0[2]), "mexRevMobMsg05", "mexRevMobMsg05", 2, 60, 1, 1);
				break;
			
			case 0x00000005:
				Function_58(&(uParam0[0]), &(uParam0[2]), "mexRevMobMsg06", "mexRevMobMsg06", 2, 60, 1, 1);
				break;
		}
		Function_158(&iLocal_83, 0.0f);
	}
	return;
}

void Function_26(int iParam0) //Position: 0x2107 / 8455
{
	Global_26652[iParam04].f_20++;
	if (Global_26652[iParam04].f_20 == 1)
	{
		Function_27(409, 1, 0, 0);
	}
	return;
}

int Function_27(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x2138 / 8504
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
	Function_41(iParam0, TO_FLOAT(bParam1), 1);
	Function_40(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_29(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_28(iParam0);
	return 1;
}

void Function_28(bool bParam0) //Position: 0x2360 / 9056
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

void Function_29(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x23FE / 9214
{
	char* cVar0[32];
	bool bVar8;
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
			if (bParam2 > 2000.0f)
			{
				stradd(&Global_55480[iParam016] + 32, " lbs", 32);
			}
			else
			{
				bParam2 = (bParam2 / 2000.0f);
				memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
				stradd(&Global_55480[iParam016] + 32, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
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
					bVar6 = FLOOR((bParam2 - TO_FLOAT(bVar5 * 60)));
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
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(bParam2)), 32);
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
			if ((bParam2 - IntToFloat(FLOOR(bParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(bParam2)), 32);
			}
			if (bParam2 < 1.0f)
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_39(390))), 32);
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
					bVar19 = bParam2;
					bVar20 = 0.0f;
				}
				else if (bParam1)
				{
					bVar19 = (Function_38(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_38(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_36(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_33(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&uParam7))
							{
								uParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_31(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&uParam7), &Global_55480[iParam016] + 32, Function_30(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_164(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_30(int iParam0) //Position: 0x2A3C / 10812
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_31(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2A4D / 10829
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_32("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_32("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_32("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_32(char* cParam0) //Position: 0x2B44 / 11076
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_33(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2B5F / 11103
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_35(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_34(Function_35(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_34(int iParam0, int iParam1) //Position: 0x2BC6 / 11206
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_35(int iParam0, bool bParam1) //Position: 0x2BD8 / 11224
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_36(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2BEA / 11242
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
	if (((Function_37(iParam0) != 19 || Function_37(iParam0) != 17) || Function_37(iParam0) != 10) || Function_37(iParam0) != 9)
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

int Function_37(int iParam0) //Position: 0x2D1E / 11550
{
	return Global_55480[iParam016].f_96;
}

float Function_38(int iParam0) //Position: 0x2D2D / 11565
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_39(int iParam0) //Position: 0x2D66 / 11622
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_40(int iParam0) //Position: 0x2DA3 / 11683
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

int Function_41(int iParam0, float fParam1, bool bParam2) //Position: 0x2F3D / 12093
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

void Function_42() //Position: 0x3181 / 12673
{
	int iVar0;
	
	bLocal_124 = true;
	iVar0 = Function_43(3);
	if (iVar0 == 0)
	{
		iLocal_122 = "MEX_SONG_02";
	}
	else if (iVar0 == 1)
	{
		iLocal_122 = "MEX_SONG_05";
	}
	else if (iVar0 == 2)
	{
		iLocal_122 = "MEX_SONG_06";
	}
	AUDIO_MUSIC_FORCE_TRACK(&iLocal_122, "PASTORAL", 0.0f, 500, 4294967295, 3212836864, 0);
	return;
}

var Function_43(bool bParam0) //Position: 0x31F7 / 12791
{
	bParam0 = (bParam0 * 1000 - 1);
	return (RAND_INT_RANGE(false, bParam0) / 1000);
}

bool Function_44(int iParam0, float fParam1) //Position: 0x3210 / 12816
{
	if (Function_48(&iParam0))
	{
		if (Function_45(&iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_45(vector3 vParam0) //Position: 0x322E / 12846
{
	if (Function_48(&vParam0))
	{
		if (Function_46(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_46(int iParam0) //Position: 0x32FB / 13051
{
	return Function_47(iParam0, 2);
}

bool Function_47(var uParam0, int iParam1) //Position: 0x3309 / 13065
{
	return (uParam0 && iParam1) == 0;
}

bool Function_48(int iParam0) //Position: 0x3316 / 13078
{
	return Function_47(iParam0, 1);
}

int Function_49(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x3324 / 13092
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
					Function_50(&uVar1, 0, 0, 0, 1);
				}
				bVar0++;
			}
		}
		Function_50(&iParam0, &iParam1, &iParam2, &iParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_50(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4) //Position: 0x3412 / 13330
{
	char* cVar0[32];
	
	Function_57();
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
	if (Function_56(&uParam0) == 1)
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
	Function_55(&uParam0, 0);
	Function_54(&uParam0, iParam1);
	Function_53(&uParam0, &uParam2);
	Function_52(&uParam0, uParam3);
	if (Function_51(&uParam0) != 5)
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

int Function_51(int iParam0) //Position: 0x367E / 13950
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_behavior");
}

void Function_52(var uParam0, bool bParam1) //Position: 0x36A2 / 13986
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_53(var uParam0, int iParam1) //Position: 0x36C6 / 14022
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_target", &iParam1);
	return;
}

void Function_54(var uParam0, bool bParam1) //Position: 0x36EC / 14060
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_55(var uParam0, bool bParam1) //Position: 0x3713 / 14099
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_state", bParam1);
	return;
}

int Function_56(bool bParam0) //Position: 0x3737 / 14135
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(&bParam0), "actorRoam_ref");
}

void Function_57() //Position: 0x3756 / 14166
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

void Function_58(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x37A5 / 14245
{
	iParam1 = &iParam1;
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (IS_ACTOR_ALIVE(&bParam0) && Function_18(&bParam0, &Global_54076) >= IntToFloat(&iParam5))
		{
			if (!IS_ACTOR_VALID(&iParam1))
			{
				iParam1 = "";
			}
			CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&bParam0);
			if (&bParam6)
			{
				if (IS_ACTOR_HOGTIED(&bParam0))
				{
					if (!SAY_SINGLE_LINE_STRING_BEAT(&bParam0, &iParam2, &iParam1, 1, 1, &iParam4, &iParam7, 0, 0, 1))
					{
						bParam3 = &bParam3;
					}
				}
				else if (!SAY_SINGLE_LINE_STRING_BEAT(&bParam0, &iParam2, &iParam1, 1, 1, &iParam4, &iParam7, 0, 1, 1))
				{
					bParam3 = &bParam3;
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING(&bParam0, &iParam2, true, true, &iParam4, 0, false, true);
			}
		}
	}
}

void Function_59(var uParam0, bool[] bParam1) //Position: 0x3852 / 14418
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= uParam0)
	{
		iVar1 = 0;
		while (iVar1 <= uParam0)
		{
			if (iVar0 != iVar1)
			{
				MEMORY_CONSIDER_AS(&(bParam1[iVar0]), &(bParam1[iVar1]), false);
			}
			iVar1++;
		}
		TASK_CLEAR(&(bParam1[iVar0]));
		iVar0++;
	}
	return;
}

bool Function_60(var[] uParam0, int iParam1, var uParam2, int iParam3, float fParam4, int iParam5, bool bParam6, var uParam7) //Position: 0x38A8 / 14504
{
	int iVar0;
	
	uParam7 = &uParam7;
	if (!&bParam6)
	{
		iVar0 = 0;
		while (iVar0 <= iParam1)
		{
			if (Function_74(&(uParam0[iVar0]), &iParam3, &fParam4, &iParam5, &bParam6, 0x40400000))
			{
				uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int Function_61(int iParam0, int iParam1) //Position: 0x38FA / 14586
{
	if (IS_ACTOR_HUMAN(&iParam0))
	{
		if (GET_NUM_WEAPONS_IN_INVENTORY(&iParam0) == 0)
		{
			TASK_FLEE_ACTOR(&iParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
			TASK_PRIORITY_SET(&iParam0, false);
			return 1;
		}
	}
	if (!IS_ACTOR_VALID(&iParam0))
	{
		LOG_ERROR("Killer is invalid in TASK_KILL_ACTOR_RUTHLESS");
		return 0;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		LOG_ERROR("VICTIM is invalid in TASK_KILL_ACTOR_RUTHLESS");
		return 0;
	}
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 31, -1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 37, 2.0f);
	MEMORY_ALLOW_TAKE_COVER(&iParam0, 0);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(&iParam0, 0);
	MEMORY_REPORT_POSITION_AUTO(&iParam0, &iParam1, 1);
	TASK_KILL_CHAR(&iParam0, &iParam1);
	TASK_PRIORITY_SET(&iParam0, true);
	return 1;
}

void Function_62(int iParam0) //Position: 0x39F0 / 14832
{
	if (!Global_6646)
	{
		if (IS_ACTOR_VALID(&iParam0))
		{
			if (IS_ACTOR_ALIVE(&iParam0))
			{
				if (GET_ACTORENUM_ACTOR_BASE_TYPE(GET_ACTOR_ENUM(&iParam0)) == 1)
				{
					if ((!Function_72(Function_73(), 35) && !Function_72(Function_73(), 7)) && !Function_72(Function_73(), 12))
					{
						Function_63(1, 35, Function_73(), GET_OBJECT_FROM_ACTOR(&iParam0), 1);
					}
				}
			}
		}
	}
	return;
}

var Function_63(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x3A5B / 14939
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	var uVar4;
	
	if (!Function_71(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_70(iParam1))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeType");
		return "";
	}
	if (!IS_ACTOR_VALID(&uParam2))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid criminal");
		return "";
	}
	if (!IS_OBJECT_VALID(&iParam3) && !iParam0 != 4)
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid victim");
		return "";
	}
	if (!Function_66(1))
	{
		LOG_ERROR("Crime is disabled: CREATE_CRIME_EVENT failure");
		return "";
	}
	uVar2 = CREATE_CRIME_IN_LAYOUT(&Global_39918);
	uVar3 = FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes");
	if ((IS_CRIME_VALID(&uVar2) && IS_OBJECT_VALID(&uVar3)) && GET_OBJECT_TYPE(&uVar3) != 2)
	{
		SET_CRIME_TYPE(&uVar2, iParam1);
		SET_CRIME_VICTIM(&uVar2, &iParam3);
		SET_CRIME_CRIMINAL(&uVar2, &uParam2);
		SET_CRIME_BEGIN_TIMESTAMP(&uVar2, GET_CURRENT_GAME_TIME());
		SET_CRIME_END_TIMESTAMP(&uVar2, GET_CURRENT_GAME_TIME());
		GET_OBJECT_POSITION(&iParam3, &Var0);
		SET_CRIME_POSITION(&uVar2, Var0);
		uVar4 = CREATE_OBJECTSET_IN_LAYOUT(Function_164(), &Global_39918, 3, 0);
		SET_CRIME_OBJECTSET(&uVar2, &uVar4);
		if (!&bParam4)
		{
			SET_CRIME_WITNESSED(&uVar2, true);
		}
		else
		{
			SET_CRIME_WITNESSED(&uVar2, 3);
			Function_64();
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

void Function_64() //Position: 0x3D0E / 15630
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_39918);
	iVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes"));
	Function_65(&uVar0, &iVar1);
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

void Function_65(var uParam0, int iParam1) //Position: 0x3D81 / 15745
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

bool Function_66(bool bParam0) //Position: 0x3DB7 / 15799
{
	if (Function_69(256))
	{
		return 0;
	}
	if (Function_69(262144))
	{
		return 0;
	}
	if (Function_68())
	{
		return 0;
	}
	if (!Function_69(1))
	{
		return 0;
	}
	if (!Function_69(4096))
	{
		return 0;
	}
	if (bParam0 && Function_67(12))
	{
		return 0;
	}
	if (Global_6621)
	{
		return 0;
	}
	if (Function_69(2048))
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

int Function_67(int iParam0) //Position: 0x3E2D / 15917
{
	if (Global_42825 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_68() //Position: 0x3E3E / 15934
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

bool Function_69(int iParam0) //Position: 0x3E57 / 15959
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_70(int iParam0) //Position: 0x3E75 / 15989
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_71(int iParam0) //Position: 0x3E8B / 16011
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_72(int iParam0, int iParam1) //Position: 0x3EA0 / 16032
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
	Function_65(&uVar0, &uVar1);
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

int Function_73() //Position: 0x3F2F / 16175
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

bool Function_74(int iParam0, int iParam1, float fParam2, int iParam3, bool bParam4, float fParam5) //Position: 0x3F44 / 16196
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
		fVar0 = Function_18(&iParam0, &Global_54076);
		if (!Function_47(&iParam3, 8))
		{
			if (GET_LAST_ATTACKER(&iParam0) == &Global_54076)
			{
				iParam1 = 8;
				Function_75(&iParam0);
				return 1;
			}
		}
		if (!Function_47(&iParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(&iParam0, 1.0f))
			{
				iParam1 = 2;
				Function_75(&iParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(&iParam0, 1.0f, 1.0f))
			{
				iParam1 = 2;
				Function_75(&iParam0);
				return 1;
			}
		}
		if (!Function_47(&iParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(&iParam0) || (((GET_ACTOR_UNDER_RETICLE(&Global_54076, 0) != &iParam0 && IS_PLAYER_WEAPON_ZOOMED(&Global_54076)) && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(&Global_54076) != &iParam0 && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f))
			{
				if (fParam2 > 0.0f)
				{
					iParam1 = 4;
					Function_75(&iParam0);
					return 1;
				}
				if (fParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - fParam2) < 1,3f)
					{
						iParam1 = 4;
						Function_75(&iParam0);
						return 1;
					}
				}
				fParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_47(&iParam3, 1))
		{
			if (Global_6646 || Global_6647)
			{
				iParam1 = 1;
				Function_75(&iParam0);
				return 1;
			}
		}
		if (!Function_47(&iParam3, 16))
		{
			if (UNK_0x7F454A92(&iParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(&iParam0)) > 2.0f && fVar0 > 18.0f)
				{
					iParam1 = 16;
					Function_75(&iParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_75(int iParam0) //Position: 0x410E / 16654
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&iParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(&iParam0, 1);
	UNK_0x99AFD2D1(&iParam0, 0, 0);
	Function_76(&iParam0);
	MEMORY_CONSIDER_AS(&Global_54076, &iParam0, 2);
	MEMORY_CONSIDER_AS(&iParam0, &Global_54076, 2);
	AI_GOAL_LOOK_CLEAR(&iParam0);
	return;
}

void Function_76(int iParam0) //Position: 0x414B / 16715
{
	SAY_SINGLE_LINE_CONTEXT(&iParam0, 60, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

void Function_77(int[] iParam0, int iParam1) //Position: 0x4164 / 16740
{
	int iVar0;
	
	if (&iParam1 == 4294967295)
	{
		iParam1 = iParam0;
	}
	iVar0 = 0;
	while (iVar0 <= &iParam1)
	{
		Function_78(&(iParam0[iVar0]));
		iVar0++;
	}
	return;
}

void Function_78(int iParam0) //Position: 0x4197 / 16791
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (DECOR_CHECK_EXIST(&iParam0, "nnostickup"))
		{
			DECOR_REMOVE(&iParam0, "nnostickup");
		}
		AI_SET_ENABLE_STICKUP_OVERRIDE(&iParam0, 1);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iParam0, 1);
		SET_ACTOR_CUTSCENE_MODE(&iParam0, 0);
		TASK_PRIORITY_SET(&iParam0, 2);
	}
	return;
}

void Function_79(int iParam0, int[] iParam1) //Position: 0x41EA / 16874
{
	int iVar0;
	int iVar1;
	
	Function_80(&uLocal_107);
	ADD_ACTORSET_MEMBER(&uLocal_107, &Global_54076);
	if (Function_82(&(iParam1[3]), 0))
	{
		ADD_ACTORSET_MEMBER(&uLocal_107, &(iParam1[3]));
	}
	iVar0 = 0;
	while (iVar0 <= iParam0)
	{
		if (Function_82(&(iParam1[iVar0]), 0))
		{
			RESET_ANIM_SET_FOR_ACTOR(&(iParam1[iVar0]), 1);
			if (iVar0 == 3)
			{
				TASK_FLEE_ACTOR(&(iParam1[iVar0]), &Global_54076, -1.0f, -1.0f, 0, 0, 0);
			}
			else
			{
				TASK_FLEE_ACTORSET(&(iParam1[iVar0]), &uLocal_107, -1.0f, -1.0f, 0, 0, 0);
				GIVE_OBJECT_TO_LAYOUT(&uLocal_107, &Global_46715);
			}
		}
		iVar1 = 0;
		while (iVar1 <= iParam0)
		{
			if (iVar0 != iVar1)
			{
				MEMORY_CONSIDER_AS(&(iParam1[iVar0]), &(iParam1[iVar1]), false);
			}
			iVar1++;
		}
		iVar0++;
	}
	return;
}

void Function_80(int iParam0) //Position: 0x42B8 / 17080
{
	bool bVar0;
	
	if (IS_ACTORSET_VALID(&iParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (GET_ACTORSET_SIZE(&iParam0) - 1))
		{
			if (IS_ACTOR_VALID(GET_ACTOR_FROM_ACTORSET(&iParam0, bVar0)))
			{
				REMOVE_ACTORSET_MEMBER(&iParam0, GET_ACTOR_FROM_ACTORSET(&iParam0, bVar0));
			}
			bVar0++;
		}
	}
	return;
}

bool Function_81(int iParam0) //Position: 0x4303 / 17155
{
	return DECOR_CHECK_EXIST(&iParam0, "nsharedlaw");
}

bool Function_82(int iParam0, bool bParam1) //Position: 0x431B / 17179
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
			Function_84(&iParam0);
			return 0;
		}
		if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&iParam0), 163840))
		{
			Function_84(&iParam0);
			return 0;
		}
	}
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (Function_83(&iParam0, 0) && !AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&iParam0), 16384))
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

int Function_83(int iParam0, int iParam1) //Position: 0x43C6 / 17350
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

int Function_84(int iParam0) //Position: 0x4418 / 17432
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		Function_85(&iParam0);
		return 1;
	}
	return 0;
}

void Function_85(var uParam0) //Position: 0x4430 / 17456
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

float Function_86(bool bParam0) //Position: 0x4463 / 17507
{
	var uVar0;
	bool bVar1;
	
	if (!&bParam0)
	{
		Function_87(&uVar0, &bVar1);
		if (bVar1 < 60.0f)
		{
			return (bVar1 + 20.0f);
		}
		return (bVar1 + 10.0f);
	}
	return (190.0f + 20.0f);
}

void Function_87(var uParam0, bool bParam1) //Position: 0x449F / 17567
{
	struct<2> Var0;
	
	if (Global_6629 && !Global_6646)
	{
		uParam0 = 65.0f;
		bParam1 = 95.0f;
	}
	else if ((!IS_ACTOR_RIDING(GET_PLAYER_ACTOR(0)) && !IS_ACTOR_RIDING_VEHICLE(GET_PLAYER_ACTOR(0))) && !Global_6646)
	{
		uParam0 = 115.0f;
		bParam1 = 170.0f;
	}
	else
	{
		GET_ACTOR_VELOCITY(GET_PLAYER_ACTOR(0), &Var0);
		if (VMAG(Var0) > 5.0f)
		{
			uParam0 = 130.0f;
			bParam1 = 190.0f;
		}
		else
		{
			uParam0 = 130.0f;
			bParam1 = 190.0f;
		}
	}
	return;
}

bool Function_88(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x4530 / 17712
{
	if (StackVal & 64 == 64)
	{
		if (!uParam2)
		{
			if (IS_ACTOR_VALID(&uParam1))
			{
				if (Function_18(&Global_54076, &uParam1) > 15.0f)
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
		if (Function_91() && !uParam2)
		{
			return 0;
		}
		if (Function_90(iParam0) && !uParam2)
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
		if (!Function_89(iParam0, &uParam5))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_89(int iParam0, int iParam1) //Position: 0x4673 / 18035
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

int Function_90(int iParam0) //Position: 0x4694 / 18068
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

int Function_91() //Position: 0x46D4 / 18132
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
						if (Function_92(&Global_54076, &Global_39621[iVar05] + 16) > IntToFloat(iVar1))
						{
							return 1;
						}
					}
				}
			}
			if (Function_92(&Global_54076, &Global_39621[iVar05] + 16) > IntToFloat(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

float Function_92(int iParam0, var uParam1) //Position: 0x4797 / 18327
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			Function_94(&iParam0);
			Var0 = Function_94(&iParam0);
			Function_93(&uParam1);
			Var2 = Function_93(&uParam1);
			return VDIST(Var0, Var2);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

struct<8> Function_93(int iParam0) //Position: 0x4839 / 18489
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

struct<8> Function_94(int iParam0) //Position: 0x48A7 / 18599
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

void Function_95(var[] uParam0, int iParam1) //Position: 0x4913 / 18707
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		if (IS_ACTOR_VALID(&(uParam0[iVar0])))
		{
			RESET_ANIM_SET_FOR_ACTOR(&(uParam0[iVar0]), 1);
			if ((iVar0 % 2) == 0)
			{
				Function_49(&(uParam0[iVar0]), 0, 0, 2);
			}
			else
			{
				TASK_WANDER(&(uParam0[iVar0]), 3212836864);
			}
		}
		iVar0++;
	}
	iLocal_121 = 1;
	return;
}

void Function_96(var[] uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6) //Position: 0x4973 / 18803
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
			Function_108(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_107(0);
		}
		if (&bParam6)
		{
			Function_105(0, GET_THIS_SCRIPT_ID());
			Global_6615 = GET_THIS_SCRIPT_ID();
			Global_6644 = 1;
			Function_103(iParam3);
		}
		Function_101(iParam3);
		if (Function_100(StackVal, 32768))
		{
			Function_97(1);
		}
		Global_26652[iParam34].f_16++;
		Function_27(408, 1, 0, 0);
	}
}

void Function_97(bool bParam0) //Position: 0x4A6C / 19052
{
	if (bParam0)
	{
		Function_99(0x10000000);
	}
	else
	{
		Function_98(0x10000000);
	}
	Global_39922.f_304 = 0;
	return;
}

void Function_98(int iParam0) //Position: 0x4A91 / 19089
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_99(int iParam0) //Position: 0x4AAE / 19118
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

bool Function_100(var uParam0, int iParam1) //Position: 0x4AC1 / 19137
{
	return (uParam0 && iParam1) == 0;
}

void Function_101(int iParam0) //Position: 0x4ACE / 19150
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (!Function_47(StackVal, 524288))
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
			bVar1 = Function_102(iVar0 * 60);
			ADD_TIME(&Global_27462[iParam052] + 376, 0, 0, bVar1, 0);
			Global_26652[iParam04] = &Global_27462[iParam052] + 376;
		}
	}
	return;
}

int Function_102(int iParam0) //Position: 0x4B74 / 19316
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_103(int iParam0) //Position: 0x4B8B / 19339
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
	Function_104(&Var0 + 80[Var0.f_762], &(Global_26652[iParam04]), iParam0);
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

void Function_104(vector3 vParam0) //Position: 0x4C2A / 19498
{
	vParam0.y = iParam2;
	vParam0 = Param1.f_16;
	vParam0.f_8 = 1;
	return;
}

void Function_105(int iParam0, int iParam1) //Position: 0x4C46 / 19526
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
			Function_106(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_106(struct<113> Param0) //Position: 0x4CCD / 19661
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

void Function_107(int iParam0) //Position: 0x4D2B / 19755
{
	*(&Global_21369 + 136) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 136, 0, 0, (&iParam0 + Function_102(900)), 0);
	return;
}

void Function_108(bool bParam0) //Position: 0x4D4F / 19791
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, (&bParam0 + Function_102(200)), 0);
	return;
}

void Function_109(var uParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x4D72 / 19826
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_110(Global_10966) };
		}
		PRINT_SMALL_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &Var0, &iParam5);
	}
	else
	{
		uVar4 = "";
		PRINT_SMALL_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &uVar4, &iParam5);
	}
}

struct<16> Function_110(int iParam0) //Position: 0x4DF7 / 19959
{
	char* cVar0[16];
	
	if (!Function_111())
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

bool Function_111() //Position: 0x4E36 / 20022
{
	if (Function_47(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

int Function_112(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x4E51 / 20049
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
		Function_109("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
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
			Function_113(&iVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_113(&iVar0);
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
			Function_113(&iVar0);
		}
		(&Global_27462[iParam052] + 376) = &iVar0;
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

void Function_113(int iParam0) //Position: 0x50BD / 20669
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

int Function_114(var uParam0, int iParam1) //Position: 0x5107 / 20743
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
	Function_118(DECOR_GET_INT(&uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
		}
		else
		{
			Function_115(iVar0, &uParam0, &uVar1, &iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(&uParam0);
	return 0;
}

void Function_115(int iParam0, var uParam1, struct<2> Param2) //Position: 0x5271 / 21105
{
	struct<8> Var0;
	
	*(&Global_39621[iParam05] + 16) = &uParam1;
	Global_39621[iParam05].f_32 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_116("stayout") };
	*(&Global_39621[iParam05] + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Param2, Vector(0.0f, 0.0f, 0.0f), Vector(12.0f, 5.0f, 12.0f));
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&Global_39621[iParam05] + 24, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&Global_39621[iParam05] + 24);
	if (&bParam3)
	{
		*(&Global_39621[iParam05] + 8) = ADD_BLIP_FOR_COORD(&Param2, 403, 0, 2, 0);
		SET_BLIP_BLINK(&Global_39621[iParam05] + 8, 1, 1, 20.0f);
	}
}

struct<32> Function_116(char* cParam0) //Position: 0x5319 / 21273
{
	char* cVar0[32];
	char* cVar8[16];
	
	if (!IS_STRING_VALID(&cParam0))
	{
	}
	else
	{
		Global_10985 = (Global_10985 % 10000);
		strcpy(&cVar8, I2STR(Global_10985), 16);
		while (STRING_LENGTH(&cVar8) <= 4)
		{
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_117("0", &cVar8, ""), 4);
		}
		if (IS_STRING_VALID(&cVar8))
		{
			strcpy(&cVar0, &cParam0, 32);
			stradd(&cVar0, &cVar8, 32);
			Global_10985++;
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_117(char* cParam0) //Position: 0x5385 / 21381
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_118(bool bParam0) //Position: 0x53A7 / 21415
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
						Function_120(iVar0);
					}
					else if (Global_6629)
					{
						if (Function_119(StackVal, &Global_54076, Var1) < 25.0f)
						{
							Function_120(iVar0);
						}
					}
					else if (Function_119(StackVal, &Global_54076, Var1) < 55.0f)
					{
						Function_120(iVar0);
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
			Function_120(iVar0);
		}
		iVar0++;
	}
	return 0;
}

float Function_119(var uParam0, struct<2> Param1) //Position: 0x5515 / 21781
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_94(&uParam0);
		Var0 = Function_94(&uParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

void Function_120(int iParam0) //Position: 0x558C / 21900
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

bool Function_121(struct<2> Param0, int iParam2) //Position: 0x55F4 / 22004
{
	struct<2> Var0;
	var uVar2;
	
	if (IS_ACTOR_VALID(&iParam2))
	{
		GET_POSITION(&iParam2, &Var0);
		Function_22(StackVal, StackVal, Param0, Var0, &uVar2);
		return UNK_0x9C40E671(&uVar2);
	}
	return 0.0f;
}

bool Function_122(float fParam0, float fParam1, int iParam2) //Position: 0x5622 / 22050
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	iVar2 = 0;
	bVar5 = false;
	if (Global_43789 == Global_46866[0])
	{
		if (Function_165("npressDemo"))
		{
			iVar2 = 1;
		}
		else
		{
			iVar2 = 3;
		}
		Local_0[02] = Vector(-2746,097f, 32,607f, 4256,883f);
		Local_0[02].f_12 = 143,335f;
		Local_0[12] = Vector(-2674,988f, 32,48f, 4228,499f);
		Local_0[12].f_12 = 245,258f;
		Local_0[22] = Vector(-2702,44f, 31,716f, 4260,291f);
		Local_0[22].f_12 = 218,304f;
	}
	if (Global_43789 == Global_46894[2])
	{
		if (Function_165("npressDemo"))
		{
			iVar2 = 1;
		}
		else
		{
			iVar2 = 2;
		}
		Local_0[02] = Vector(-794,6919f, 13,05103f, 3684,667f);
		Local_0[02].f_12 = 45,92f;
		Local_0[12] = Vector(-764,9748f, 13,83095f, 3746,967f);
		Local_0[12].f_12 = -3,195f;
	}
	if (Global_43789 == Global_46850[0])
	{
		if (Function_165("npressDemo"))
		{
			iVar2 = 1;
		}
		else
		{
			iVar2 = 2;
		}
		Local_0[02] = Vector(-4250,148f, 22,16055f, 4374,202f);
		Local_0[02].f_12 = 181,103f;
		Local_0[12] = Vector(-4326,376f, 19,90099f, 4483,244f);
		Local_0[12].f_12 = 197,163f;
	}
	iVar3 = 0;
	while (iVar3 <= iVar2)
	{
		if (Function_124(StackVal, Local_0[iVar32], &fParam1, 70.0f, Function_128()) || iParam2)
		{
			if (bVar5)
			{
				fVar1 = Function_119(StackVal, &Global_54076, Local_0[iVar32]);
				if (fVar1 > fVar0)
				{
					iVar4 = iVar3;
					fVar0 = fVar1;
				}
			}
			else
			{
				fVar0 = Function_119(StackVal, &Global_54076, Local_0[iVar32]);
				iVar4 = iVar3;
				bVar5 = true;
			}
		}
		iVar3++;
	}
	if (bVar5)
	{
		return Function_123(&fParam0, &(Local_0[iVar42]), iVar4);
	}
	return 0;
}

int Function_123(struct<13> Param0) //Position: 0x5816 / 22550
{
	Param0 = Param1;
	Param0.f_12 = Param1.f_12;
	if (Global_43789 == Global_46866[0])
	{
		if (iParam2 == 0)
		{
			*(&Param0 + 16[02]) = Vector(-2749,482f, 32,12549f, 4256,615f);
			*(&Param0 + 16[12]) = Vector(-2750,276f, 32,12549f, 4258,75f);
			*(&Param0 + 16[22]) = Vector(-2746,014f, 32,16399f, 4260,137f);
			*(&Param0 + 16[32]) = Vector(-2748,006f, 32,125f, 4258,571f);
			*(&Param0 + 16[42]) = Vector(-2748,433f, 32,12549f, 4260,867f);
			*(&Param0 + 16[52]) = Vector(-2746,39f, 32,16399f, 4262,301f);
			*(&Param0 + 16[62]) = Vector(-2746,39f, 32,16399f, 4262,301f);
			*(&Param0 + 16[72]) = Vector(-2748,192f, 32,12549f, 4262,704f);
			*(&Param0 + 152) = Vector(-2660f, 31,12157f, 4240f);
			return 1;
		}
		if (iParam2 == 1)
		{
			*(&Param0 + 16[02]) = Vector(-2666,38f, 31,887f, 4230,14f);
			*(&Param0 + 16[12]) = Vector(-2668,081f, 32,043f, 4230,656f);
			*(&Param0 + 16[22]) = Vector(-2665,243f, 31,778f, 4231,737f);
			*(&Param0 + 16[32]) = Vector(-2667,569f, 31,939f, 4232,972f);
			*(&Param0 + 16[42]) = Vector(-2671,079f, 31,972f, 4232,941f);
			*(&Param0 + 16[52]) = Vector(-2670,483f, 31,854f, 4234,536f);
			*(&Param0 + 16[62]) = Vector(-2675,934f, 32,474f, 4234,053f);
			*(&Param0 + 16[72]) = Vector(-2660,521f, 31,192f, 4229,379f);
			*(&Param0 + 152) = Vector(-2636,919f, 32,204f, 4245,389f);
			return 1;
		}
		if (iParam2 == 2)
		{
			*(&Param0 + 16[02]) = Vector(-2700,198f, 31,187f, 4262,248f);
			*(&Param0 + 16[12]) = Vector(-2701,587f, 31,187f, 4262,565f);
			*(&Param0 + 16[22]) = Vector(-2699,64f, 31,187f, 4260,824f);
			*(&Param0 + 16[32]) = Vector(-2698,034f, 31,187f, 4260,711f);
			*(&Param0 + 16[42]) = Vector(-2697,641f, 31,145f, 4261,91f);
			*(&Param0 + 16[52]) = Vector(-2698,615f, 31,122f, 4263,629f);
			*(&Param0 + 16[62]) = Vector(-2699,109f, 31,122f, 4265,096f);
			*(&Param0 + 16[72]) = Vector(-2696,746f, 31,124f, 4263,221f);
			*(&Param0 + 152) = Vector(-2672,841f, 31,242f, 4248,024f);
			return 1;
		}
	}
	if (Global_43789 == Global_46894[2])
	{
		if (iParam2 == 0)
		{
			*(&Param0 + 16[02]) = Vector(-795,1851f, 13,05098f, 3681,863f);
			*(&Param0 + 16[12]) = Vector(-796,6782f, 13,05098f, 3682,783f);
			*(&Param0 + 16[22]) = Vector(-796,836f, 13,05098f, 3680,896f);
			*(&Param0 + 16[32]) = Vector(-797,4661f, 13,05098f, 3684,434f);
			*(&Param0 + 16[42]) = Vector(-798,2868f, 13,05098f, 3682,575f);
			*(&Param0 + 16[52]) = Vector(-797,008f, 13,05098f, 3679,574f);
			*(&Param0 + 16[62]) = Vector(-798,5061f, 13,05098f, 3680,296f);
			*(&Param0 + 16[72]) = Vector(-800,0894f, 13,05098f, 3682,565f);
			*(&Param0 + 152) = Vector(-824.0f, 13,05098f, 3700.0f);
			return 1;
		}
		if (iParam2 == 1)
		{
			*(&Param0 + 16[02]) = Vector(-762,3963f, 13,06005f, 3744.0f);
			*(&Param0 + 16[12]) = Vector(-769,2122f, 13,10229f, 3744f);
			*(&Param0 + 16[22]) = Vector(-767,8311f, 13,07496f, 3742,616f);
			*(&Param0 + 16[32]) = Vector(-764,2446f, 13,05098f, 3743,142f);
			*(&Param0 + 16[42]) = Vector(-763,3651f, 13,05097f, 3741,058f);
			*(&Param0 + 16[52]) = Vector(-766,037f, 13,06349f, 3740,143f);
			*(&Param0 + 16[62]) = Vector(-761,7297f, 13,06599f, 3742,528f);
			*(&Param0 + 16[72]) = Vector(-766,3666f, 13,05213f, 3743,214f);
			*(&Param0 + 152) = Vector(-713,3591f, 11,92825f, 3755,894f);
			return 1;
		}
	}
	if (Global_43789 == Global_46850[0])
	{
		if (iParam2 == 0)
		{
			*(&Param0 + 16[02]) = Vector(-4251,654f, 22,16055f, 4376,409f);
			*(&Param0 + 16[12]) = Vector(-4247,997f, 22,16055f, 4376,657f);
			*(&Param0 + 16[22]) = Vector(-4249,45f, 22,16055f, 4377,217f);
			*(&Param0 + 16[32]) = Vector(-4252,206f, 22,1971f, 4378,015f);
			*(&Param0 + 16[42]) = Vector(-4248,479f, 22,16055f, 4378,044f);
			*(&Param0 + 16[52]) = Vector(-4250,562f, 22,16055f, 4377,726f);
			*(&Param0 + 16[62]) = Vector(-4249,252f, 22,16055f, 4380,026f);
			*(&Param0 + 16[72]) = Vector(-4250,33f, 22,16055f, 4379,233f);
			*(&Param0 + 152) = Vector(-4279,601f, 22,27412f, 4397,654f);
			return 1;
		}
		if (iParam2 == 1)
		{
			*(&Param0 + 16[02]) = Vector(-4321,772f, 19,02603f, 4487,077f);
			*(&Param0 + 16[12]) = Vector(-4324,016f, 19,30484f, 4487,824f);
			*(&Param0 + 16[22]) = Vector(-4328,015f, 19,14211f, 4487,824f);
			*(&Param0 + 16[32]) = Vector(-4326,591f, 19,12543f, 4490,167f);
			*(&Param0 + 16[42]) = Vector(-4321,369f, 19,17093f, 4490,104f);
			*(&Param0 + 16[52]) = Vector(-4321,362f, 19,15084f, 4492,182f);
			*(&Param0 + 16[62]) = Vector(-4325,859f, 19,15377f, 4492,913f);
			*(&Param0 + 16[72]) = Vector(-4324,038f, 19,15563f, 4491,437f);
			*(&Param0 + 152) = Vector(-4280,016f, 20,76906f, 4535,824f);
			return 1;
		}
	}
	return 0;
}

int Function_124(struct<2> Param0, var uParam2, var uParam3, float fParam4) //Position: 0x5EB0 / 24240
{
	if ((StackVal && Function_119(!Function_127(StackVal, Param0, 1.0f, &uParam3, 1, 1, 0), &Global_54076, Param0) < &fParam4) && Function_125(&Param0, &uParam2, 0, 0))
	{
		return 1;
	}
	return 0;
}

int Function_125(struct<2> Param0, int iParam2, bool bParam3) //Position: 0x5EED / 24301
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
	Function_118(4294967295);
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
			else if (Function_126(&Param0, &uVar0) > fVar4)
			{
				return 0;
			}
		}
		iVar2++;
	}
	return 1;
}

float Function_126(struct<2> Param0) //Position: 0x5FC9 / 24521
{
	struct<2> Var0;
	bool bVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	bVar2 = VMAG(Var0);
	return bVar2;
}

bool Function_127(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x5FE8 / 24552
{
	return CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), Param0, &uParam2, &uParam3, &uParam4, &uParam5, &uParam6);
}

var Function_128() //Position: 0x6009 / 24585
{
	float fVar0;
	var uVar1;
	
	if (Global_6612)
	{
		return 0.0f;
	}
	Function_87(&fVar0, &uVar1);
	if (fVar0 >= 50.0f)
	{
		return (fVar0 - 10.0f);
	}
	return (fVar0 - 20.0f);
}

bool Function_129(struct<2>[] Param0) //Position: 0x603A / 24634
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_134();
	iVar1 = 0;
	if (!Function_4(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_133(&(Param0[iVar02]), 8);
		}
		else if (Function_132())
		{
			iVar1 = 1;
			Function_133(&(Param0[iVar02]), 8);
		}
		Function_133(&(Param0[iVar02]), 16);
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
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), true, (Function_4(&(Param0[02]), 8) || iVar1));
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
				Function_133(&(Param0[iVar02]), 1);
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
							Function_133(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_133(&(Param0[iVar02]), 2);
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
							Function_133(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_133(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_133(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_133(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_133(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_133(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_133(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_133(&(Param0[iVar02]), 2);
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
	Function_130();
	return 1;
}

void Function_130() //Position: 0x63FC / 25596
{
	if (!Function_131(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_131(int iParam0) //Position: 0x643C / 25660
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_132() //Position: 0x6458 / 25688
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

void Function_133(struct<13> Param0) //Position: 0x6486 / 25734
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_134() //Position: 0x6499 / 25753
{
	if (!Function_131(128))
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

void Function_135(int iParam0) //Position: 0x64DB / 25819
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
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 0, true);
			MEMORY_ALLOW_SHOOTING(&iParam0, true);
		}
	}
	return;
}

void Function_136(int[] iParam0, int iParam1) //Position: 0x6524 / 25892
{
	int iVar0;
	
	if (&iParam1 == 4294967295)
	{
		iParam1 = iParam0;
	}
	iVar0 = 0;
	while (iVar0 <= &iParam1)
	{
		Function_135(&(iParam0[iVar0]));
		iVar0++;
	}
	return;
}

void Function_137(int iParam0) //Position: 0x6556 / 25942
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
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 0, false);
			MEMORY_ALLOW_SHOOTING(&iParam0, false);
		}
	}
	return;
}

void Function_138(var[] uParam0, int iParam1) //Position: 0x65A0 / 26016
{
	int iVar0;
	
	if (&iParam1 == 4294967295)
	{
		iParam1 = uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= &iParam1)
	{
		Function_137(&(uParam0[iVar0]));
		iVar0++;
	}
	return;
}

bool Function_139(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x65D2 / 26066
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

bool Function_140(int iParam0) //Position: 0x664A / 26186
{
	if (!iParam0 != 0)
	{
		LOG_ERROR("Asking about a player with an index not = 0. Multiplayer Law Enforcement not yet implemented.");
		return 0;
	}
	return Global_6646;
}

void Function_141(var[] uParam0, int iParam1) //Position: 0x66C0 / 26304
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

void Function_142(bool bParam0) //Position: 0x66E3 / 26339
{
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(bParam0);
	return;
}

var Function_143(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x66EE / 26350
{
	return Function_144(StackVal, iParam0, iParam1, &iParam2, &iParam3, &iParam4, 0, Vector(0.0f, 0.0f, 0.0f));
}

var Function_144(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, float fParam5, struct<2> Param6) //Position: 0x670B / 26379
{
	switch (iParam0)
	{
		case 0x00000001:
			return Function_147(StackVal, &(Global_46972[0]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000002:
			return Function_147(StackVal, &(Global_46972[1]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000004:
			return Function_147(StackVal, &(Global_46972[2]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000008:
			return Function_147(StackVal, &(Global_46972[3]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000010:
			return Function_147(StackVal, &(Global_46972[4]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000020:
			return Function_147(StackVal, &(Global_46972[5]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000040:
			return Function_147(StackVal, &(Global_46972[6]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000080:
			return Function_147(StackVal, &(Global_46972[7]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000100:
			return Function_147(StackVal, &(Global_46972[8]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000200:
			return Function_147(StackVal, &(Global_46972[9]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000400:
			return Function_147(StackVal, &(Global_46972[10]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000800:
			return Function_147(StackVal, &(Global_46972[11]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00001000:
			return Function_147(StackVal, &(Global_46972[12]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00002000:
			return Function_147(StackVal, &(Global_46972[13]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return Function_145(StackVal, iParam0, bParam1, iParam2, fParam5, Param6);
}

var Function_145(var uParam0, bool bParam1, int iParam2, float fParam3, struct<2> Param4) //Position: 0x696E / 26990
{
	bool bVar0;
	
	bVar0 = CREATE_POPULATION_SET(0);
	if (uParam0 & 1 == 1)
	{
		Function_146(&(Global_46972[0]), &bVar0);
	}
	if (uParam0 & 2 == 2)
	{
		Function_146(&(Global_46972[1]), &bVar0);
	}
	if (uParam0 & 4 == 4)
	{
		Function_146(&(Global_46972[2]), &bVar0);
	}
	if (uParam0 & 8 == 8)
	{
		Function_146(&(Global_46972[3]), &bVar0);
	}
	if (uParam0 & 16 == 16)
	{
		Function_146(&(Global_46972[4]), &bVar0);
	}
	if (uParam0 & 32 == 32)
	{
		Function_146(&(Global_46972[5]), &bVar0);
	}
	if (uParam0 & 64 == 64)
	{
		Function_146(&(Global_46972[6]), &bVar0);
	}
	if (uParam0 & 128 == 128)
	{
		Function_146(&(Global_46972[7]), &bVar0);
	}
	if (uParam0 & 256 == 256)
	{
		Function_146(&(Global_46972[8]), &bVar0);
	}
	if (uParam0 & 512 == 512)
	{
		Function_146(&(Global_46972[9]), &bVar0);
	}
	if (uParam0 & 1024 == 1024)
	{
		Function_146(&(Global_46972[10]), &bVar0);
	}
	if (uParam0 & 2048 == 2048)
	{
		Function_146(&(Global_46972[11]), &bVar0);
	}
	if (uParam0 & 4096 == 4096)
	{
		Function_146(&(Global_46972[12]), &bVar0);
	}
	if (uParam0 & 8192 == 8192)
	{
		Function_146(&(Global_46972[13]), &bVar0);
	}
	return Function_147(StackVal, &bVar0, bParam1, iParam2, 4294967295, 0, fParam3, Param4);
}

void Function_146(var uParam0, bool bParam1) //Position: 0x6ADD / 27357
{
	bool bVar0;
	
	if (!IS_POPSET_VALID(&uParam0))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid subPOPSET");
	}
	if (!IS_POPSET_VALID(&bParam1))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid master popset");
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0))
	{
		LINK_ACTORENUM_TO_POPULATION(&bParam1, GET_ACTORENUM_IN_POPULATION(&uParam0, bVar0), GET_ACTORENUM_IN_POPULATION_WEIGHT(&uParam0, bVar0));
		bVar0++;
	}
	return;
}

var Function_147(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, float fParam5, struct<2> Param6) //Position: 0x6BA1 / 27553
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!IS_POPSET_VALID(&bParam0))
	{
		LOG_ERROR("Trying to get a random member of an invalid popset");
		return 4294967295;
	}
	if (bParam1)
	{
		Function_152();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&bParam0, iParam2, iParam3, bParam4, fParam5, Param6);
	if (!Function_24(bVar1))
	{
		if (!Global_47146 && !Global_47147)
		{
			Function_151(&bParam0, bParam1, iParam2, iParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_151(&bParam0, bParam1, iParam2, iParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && iParam3 != 4294967295)
		{
			while (Function_150(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&bParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_24(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_150(bVar0))
				{
					Function_149();
				}
				Function_148(bVar0);
			}
		}
		else if (!iParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != iParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&bParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_24(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
		}
	}
	if (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(bVar0))
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
	return bVar0;
}

void Function_148(int iParam0) //Position: 0x6E9A / 28314
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

void Function_149() //Position: 0x6F4E / 28494
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

bool Function_150(bool bParam0) //Position: 0x6F89 / 28553
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		if ((*&Global_46956 + 12)[iVar0] == bParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_151(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x6FB6 / 28598
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
	bVar0 = false;
	while (bVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0))
	{
		PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(GET_ACTORENUM_IN_POPULATION(&uParam0, bVar0)));
		PRINTSTRING("n  Weight=");
		PRINTFLOAT(GET_ACTORENUM_IN_POPULATION_WEIGHT(&uParam0, bVar0));
		PRINTSTRING("  Streamed=");
		if (STREAMING_IS_ACTOR_LOADED(GET_ACTORENUM_IN_POPULATION(&uParam0, bVar0), 4294967295))
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

void Function_152() //Position: 0x7111 / 28945
{
	int iVar0;
	
	if (Global_6645)
	{
		if (StackVal || !&Global_46956 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_149();
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
	Function_149();
	return;
}

var Function_153(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x715D / 29021
{
	int iVar0;
	bool bVar1[40];
	int iVar42;
	bool bVar43;
	int iVar44;
	var uVar45;
	bool bVar46;
	
	if (iParam0 < 4294967295)
	{
		return 4294967295;
	}
	if (iParam1 > 1311)
	{
		return 4294967295;
	}
	if (&iParam2 > 4294967295 || &iParam2 <= 1311)
	{
		return 4294967295;
	}
	iVar0 = (iParam1 - iParam0) + 1;
	if (iVar0 < 40 || iVar0 > 1)
	{
		LOG_ERROR("GET_RANDOM_ACTORENUM_FILTERED passed a range with more than 40 enums or less than 1");
		return 4294967295;
	}
	iVar44 = 0;
	iVar42 = 0;
	while (iVar42 <= iVar0)
	{
		bVar43 = (iParam0 + iVar42);
		if (((bVar43 == &iParam2 && bVar43 == &iParam3) && bVar43 == &iParam4) && !STRING_CONTAINS_STRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(bVar43), "_cs"))
		{
			bVar1[iVar44] = bVar43;
			iVar44++;
		}
		iVar42++;
	}
	if (iVar44 == 0)
	{
		return 4294967295;
	}
	bVar46 = RAND_INT_RANGE(false, (iVar44 - 1));
	uVar45 = bVar1[bVar46];
	return uVar45;
}

var Function_154(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x7278 / 29304
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
			Function_133(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_133(&(Param0[iVar02]), 8);
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

int Function_155(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x7354 / 29524
{
	return Function_156(&uParam0, uParam1, &uParam2, 4294967295, &uParam3);
}

var Function_156(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x736B / 29547
{
	return Function_147(StackVal, &uParam0, uParam1, &uParam2, &uParam3, &uParam4, 0, Vector(0.0f, 0.0f, 0.0f));
}

bool Function_157() //Position: 0x7389 / 29577
{
	return (RAND_INT_RANGE(false, 1999) / 1000) != 0;
}

void Function_158(vector3 vParam0) //Position: 0x739C / 29596
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_160(&vParam0, 1);
	Function_159(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_159(var uParam0, int iParam1) //Position: 0x73C1 / 29633
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

void Function_160(var uParam0, int iParam1) //Position: 0x73D7 / 29655
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_161(int iParam0) //Position: 0x73E8 / 29672
{
	if (!Function_48(&iParam0))
	{
		Function_158(&iParam0, 0.0f);
	}
	return;
}

var Function_162(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x73FF / 29695
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_163(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_133(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_163(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x743D / 29757
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_4(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_133(&(Param0[iVar02]), 4);
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

var Function_164() //Position: 0x750C / 29964
{
	int iVar0;
	
	return &iVar0;
}

bool Function_165(bool bParam0) //Position: 0x7515 / 29973
{
	int iVar0;
	
	iVar0 = _GET_PARAM_VALUE(&bParam0, "blah");
	if (IS_STRING_VALID(&iVar0))
	{
		return 1;
	}
	return 0;
}

