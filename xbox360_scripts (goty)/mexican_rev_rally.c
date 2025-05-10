//Decompiled with MagicRDR v1.0
//Function Count : 166
//Statics Count : 157
//Natives Count : 309
//Parameters Count : 51

#region Local Var
	struct<4> Local_0[10];
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 2;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
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
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	int iLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	int iLocal_79 = 0;
	bool bLocal_80 = false;
	int iLocal_81 = 0;
	bool bLocal_82 = false;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	bool bLocal_85 = false;
	bool bLocal_86 = false;
	bool bLocal_87 = false;
	bool bLocal_88 = false;
	bool bLocal_89 = false;
	bool bLocal_90 = false;
	vector3 vLocal_91 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_94 = { 0.0f, 0.0f, 0.0f };
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	bool bLocal_101 = false;
	int iLocal_102 = 0;
	char* cLocal_103 = NULL;
	bool bLocal_104 = false;
	int iLocal_105 = 0;
	struct<57> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3[9];
	int iVar13;
	bool bVar14[9];
	bool bVar24;
	int iVar25;
	int iVar26;
	bool bVar27;
	bool bVar28;
	float fVar83;
	int iVar84;
	bool bVar85;
	vector3 vVar86;
	bool bVar118;
	int iVar119;
	int iVar124;
	int iVar125;
	bool bVar126;
	int iVar127;
	int iVar128;
	bool bVar129;
	int iVar130;
	bool bVar131;
	
	iLocal_55 = 0;
	iLocal_56 = 0;
	iLocal_72 = 0;
	bLocal_89 = true;
	bLocal_101 = false;
	iLocal_102 = 0;
	bLocal_104 = false;
	if (Function_165("npressDemo"))
	{
		iVar0 = 0;
		while (iVar0 <= Global_17483)
		{
			if (UNK_0x214AFB8C(Global_17483[iVar075].f_96))
			{
				if (Global_17483[iVar075].f_96 == GET_ASSET_ID("$/content/Ambient/MexicanRevolution/mexican_rev_rally", 4))
				{
					ScriptParam_0.f_56 = iVar0;
					*(&ScriptParam_0 + 64) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_17483[iVar075] + 120) };
				}
			}
			iVar0++;
		}
	}
	iVar1 = 0;
	bVar2 = CREATE_LAYOUT(Function_164());
	bVar24 = false;
	iVar25 = 0;
	iVar26 = 0;
	bVar27 = false;
	bVar28 = 18;
	fVar83 = 0.0f;
	iVar84 = 0;
	Function_162(&bVar28, "Gather", 5, 0);
	Function_162(&bVar28, "custom/Gather", 8, 0);
	Function_162(&bVar28, "crowd_cheer", 5, 0);
	Function_162(&bVar28, "custom/crowd_cheer", 8, 0);
	*(&vVar86 + 16) = 8;
	Function_161(&iLocal_73);
	Function_158(&iLocal_73, 0.0f);
	bVar118 = CREATE_SQUAD_IN_LAYOUT(bVar2, "rallySquad");
	iVar124 = 0;
	iVar125 = 0;
	switch (bLocal_89)
	{
		case 0x00000000:
			iVar127 = 4;
			break;
		
		case 0x00000001:
			iVar127 = 6;
			break;
		
		case 0x00000002:
		case 0x00000003:
			iVar127 = 9;
			break;
	}
	if (!IS_POPSET_VALID(Global_30750[0]) || !IS_POPSET_VALID(Global_30750[6]))
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
		MAKE_NEXT_RAND_ACTORENUMS_UNIQUE(iVar127);
		iVar119 = 0;
		while (iVar119 <= iVar127)
		{
			if (iVar119 == 0)
			{
				iVar3[iVar119] = iVar13;
			}
			else
			{
				iVar3[iVar119] = Function_155(Global_30750[0], 1, 0, 1);
			}
			Function_154(&bVar28, iVar3[iVar119], 3, 0);
			iVar119++;
		}
		if ((Global_29006 != Global_30693[0] && !Function_165("npressDemo")) && 0)
		{
			iLocal_81 = 459;
			bLocal_82 = Function_153(455, 460, 459, 4294967295, 4294967295);
		}
		else
		{
			iLocal_81 = 393;
			bLocal_82 = Function_153(379, 396, 393, 4294967295, 4294967295);
		}
		iLocal_83 = Function_143(64, 1, 4, 23, 1);
		iLocal_84 = Function_143(64, 1, 4, 23, 1);
		if (iLocal_81 != 4294967295 || bLocal_82 != 4294967295)
		{
			iVar1 = 5;
		}
		else
		{
			Function_154(&bVar28, iLocal_81, 3, 0);
			Function_154(&bVar28, bLocal_82, 3, 0);
		}
		if (iVar1 != 5)
		{
			if (iLocal_83 != 4294967295 || iLocal_84 != 4294967295)
			{
				iVar1 = 5;
			}
			else
			{
				Function_154(&bVar28, iLocal_83, 3, 0);
				Function_154(&bVar28, iLocal_84, 3, 0);
			}
		}
	}
	if (iVar1 != 5)
	{
		Function_142(iLocal_81);
		Function_142(bLocal_82);
		Function_141(&iVar3, iVar127);
	}
	if (Global_3382 == 1)
	{
		iVar1 = 5;
	}
	if (Function_140(0))
	{
		iVar1 = 5;
	}
	iVar130 = 0;
	bVar131 = false;
	while (!IS_EXITFLAG_SET())
	{
		bVar129 = 600;
		if (Function_139(&bVar131, &iVar1, &iVar130, &bVar129, bVar24))
		{
			if (bVar131)
			{
				Function_138(&bVar14, 4294967295);
				Function_137(&bLocal_85);
				Function_137(&bLocal_86);
				Function_137(&bLocal_87);
				Function_137(&bLocal_88);
			}
			else
			{
				Function_136(&bVar14, 4294967295);
				Function_135(&bLocal_85);
				Function_135(&bLocal_86);
				Function_135(&bLocal_87);
				Function_135(&bLocal_88);
			}
		}
		switch (iVar1)
		{
			case 0x00000000:
				if (Function_129(&bVar28))
				{
					iVar1 = 1;
				}
				bVar129 = 600;
				break;
			
			case 0x00000001:
				if (Function_122(&vVar86, &ScriptParam_0 + 52, ScriptParam_0.f_32))
				{
					iVar1 = 2;
					bVar129 = false;
				}
				else
				{
					iVar1 = 5;
					bVar129 = false;
				}
				break;
			
			case 0x00000002:
				bVar126 = CREATE_VOLUME_IN_LAYOUT(bVar2, Function_164(), false, vVar86, 0.0f, 0.0f, 0.0f, 8.0f, 5.0f, 8.0f);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar126);
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar126);
				iVar119 = 0;
				while (iVar119 <= iVar127)
				{
					if (iVar119 == 0)
					{
						bVar14[iVar119] = CREATE_ACTOR_IN_LAYOUT(bVar2, Function_164(), iVar3[iVar119], vVar86, 0.0f, vVar86.f_12, 0.0f);
						TASK_STAND_STILL(bVar14[iVar119], -1.0f, 0, 0);
					}
					else
					{
						bVar14[iVar119] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, bVar2, Function_164(), iVar3[iVar119], Function_121(*(&vVar86 + 16[(iVar119 - 1)3]), 0.0f, *(&vVar86 + 16[(iVar119 - 1)3]), bVar14[0]), 0.0f);
						SQUAD_JOIN(bVar14[iVar119], GET_SQUAD_FROM_OBJECT(bVar118));
						TASK_FACE_ACTOR(bVar14[iVar119], bVar14[0], 1, 3212836864);
					}
					SET_ACTOR_CAN_PLAY_GESTURES(bVar14[iVar119], false);
					SET_ACTOR_CUTSCENE_MODE(bVar14[iVar119], 1);
					SET_ACTOR_ALLOW_BUMP_REACTIONS(bVar14[iVar119], 0);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bVar14[iVar119], 1);
					iVar119++;
				}
				if (iVar127 >= 6)
				{
					iLocal_79 = PLAY_WALLA_SOUND_FROM_ACTOR(bVar14[2], "CROWD_MEXICAN_OUTDOOR_LITE_MASTER", 0);
				}
				else
				{
					iLocal_79 = PLAY_WALLA_SOUND_FROM_ACTOR(bVar14[2], "VOCAL_MEX_CROWD_MASTER", 0);
				}
				bLocal_101 = true;
				AI_GOAL_LOOK_AT_ACTOR(bVar14[0], bVar14[2], 1, 1065353216, 3212836864, 3212836864, 0);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar14[0], 0);
				UNK_0x99AFD2D1(bVar14[0], 1, 1);
				PRINTVECTOR(vVar86);
				PRINTNL();
				PRINTVECTOR(Global_34574);
				PRINTNL();
				bLocal_80 = RAND_INT_RANGE(false, 5);
				bLocal_90 = CREATE_ACTORSET_IN_LAYOUT(bVar2, "rallyFleeSet", 0);
				bVar85 = CREATE_VOLUME_IN_LAYOUT(Global_26150, Function_164(), 3, vVar86, 0.0f, 0.0f, 0.0f, ScriptParam_0.f_52, 20.0f, ScriptParam_0.f_52);
				DECOR_SET_INT(bVar85, "script", GET_THIS_SCRIPT_ID());
				Function_114(&bVar85, ScriptParam_0.f_32);
				Function_112(ScriptParam_0.f_56, 0.0f, 1, 0, ScriptParam_0.f_32);
				if (ScriptParam_0.f_32)
				{
					Function_109("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
				}
				Function_158(&iLocal_73, 0.0f);
				iVar1 = 3;
				bVar129 = false;
				break;
			
			case 0x00000003:
				Function_96(&bVar14, 9, &bVar24, ScriptParam_0.f_56, 15, 0x42a00000, 1);
				if ((!IS_ACTOR_VALID(bVar14[0]) && !IS_ACTOR_VALID(bLocal_85)) && !IS_ACTOR_VALID(bLocal_86))
				{
					Function_95(&bVar14, iVar127);
					iVar1 = 5;
					bVar129 = false;
					break;
				}
				if (!Function_88(ScriptParam_0.f_56, bVar14[0], &iVar25, &iVar26, 0, 1, 1, 1))
				{
					Function_95(&bVar14, iVar127);
					iVar1 = 5;
					bVar129 = false;
					break;
				}
				if (GET_DEBUG_DRAW_STATE())
				{
				}
				if (VDIST(Global_34574, vVar86) < Function_86(1))
				{
					Function_95(&bVar14, iVar127);
					iVar1 = 5;
					bVar129 = false;
					break;
				}
				if (Function_82(bLocal_87, 0) && Function_82(bLocal_85, 0))
				{
					DECOR_SET_FLOAT(bLocal_87, "dismount", GET_CURRENT_GAME_TIME());
					DECOR_SET_INT(bLocal_87, "faction", GET_ACTOR_FACTION(bLocal_85));
				}
				if (Function_82(bLocal_88, 0) && Function_82(bLocal_86, 0))
				{
					DECOR_SET_FLOAT(bLocal_88, "dismount", GET_CURRENT_GAME_TIME());
					DECOR_SET_INT(bLocal_88, "faction", GET_ACTOR_FACTION(bLocal_86));
				}
				if (IS_ACTOR_VALID(bLocal_85))
				{
					if (Function_81(bLocal_85))
					{
						Function_79(&iVar127, &bVar14);
						Function_77(&bVar14, 4294967295);
						iLocal_102 = 1;
						iVar1 = 5;
						bVar129 = false;
						break;
					}
				}
				if (IS_ACTOR_VALID(bLocal_86))
				{
					if (Function_81(bLocal_86))
					{
						Function_79(&iVar127, &bVar14);
						Function_77(&bVar14, 4294967295);
						iLocal_102 = 1;
						iVar1 = 5;
						bVar129 = false;
						break;
					}
				}
				if (Function_74(bLocal_85, &iLocal_105, &fVar83, iVar124, 0, 0x40400000))
				{
					if (iLocal_105 != 2 || iLocal_105 != 4)
					{
						Function_61(bLocal_85);
					}
					if (Function_82(bLocal_85, 0))
					{
						Function_60(bLocal_85, &Global_34573);
					}
					if (Function_82(bLocal_86, 0))
					{
						Function_60(bLocal_86, &Global_34573);
					}
					Function_79(&iVar127, &bVar14);
					Function_77(&bVar14, 4294967295);
					iLocal_102 = 1;
					iVar1 = 5;
					bVar129 = false;
					break;
				}
				else if (Function_74(bLocal_86, &iLocal_105, &fVar83, iVar124, 0, 0x40400000))
				{
					if (iLocal_105 != 2 || iLocal_105 != 4)
					{
						Function_61(bLocal_86);
					}
					if (Function_82(bLocal_85, 0))
					{
						Function_60(bLocal_85, &Global_34573);
					}
					if (Function_82(bLocal_86, 0))
					{
						Function_60(bLocal_86, &Global_34573);
					}
					Function_79(&iVar127, &bVar14);
					Function_77(&bVar14, 4294967295);
					iLocal_102 = 1;
					iVar1 = 5;
					bVar129 = false;
					break;
				}
				if (Function_59(&bVar14, iVar127, &iVar84, &iLocal_105, &fVar83, iVar124, iVar128, 0x40200000))
				{
					Function_58(&iVar127, &bVar14);
					Function_77(&bVar14, 4294967295);
					iVar128 = 1;
					iLocal_102 = 1;
					if (iVar125 <= 4 && iVar125 >= 6)
					{
						if (Function_82(bLocal_85, 0))
						{
							if (!AI_IS_HOSTILE_OR_ENEMY(bLocal_85, Global_34573))
							{
								Function_57(bLocal_85, Global_34573, "nTHANK_YOU", 0, 5, 60, 1, 1);
								bVar27 = true;
							}
						}
						if (Function_82(bLocal_86, 0))
						{
							if (!AI_IS_HOSTILE_OR_ENEMY(bLocal_86, Global_34573) && !bVar27)
							{
								Function_57(bLocal_86, Global_34573, "nTHANK_YOU", 0, 5, 60, 1, 1);
							}
						}
						Function_158(&iLocal_73, 10.0f);
						iVar125 = 7;
					}
					else
					{
						if (Function_82(bLocal_85, 0))
						{
							Function_48(bLocal_85, 0, 0, 2);
						}
						if (Function_82(bLocal_86, 0))
						{
							Function_48(bLocal_86, 0, 0, 2);
						}
						iVar119 = 0;
						while (iVar119 <= iVar127)
						{
							if (IS_ACTOR_VALID(bVar14[iVar119]))
							{
								RESET_ANIM_SET_FOR_ACTOR(bVar14[iVar119], 1);
								if (Function_157())
								{
									TASK_WANDER(bVar14[iVar119], -1.0f);
								}
								else
								{
									TASK_FLEE_ACTOR(bVar14[iVar119], Global_34573, -1.0f, -1.0f, 0, 0, 0);
								}
							}
							iVar119++;
						}
						iVar1 = 5;
						bVar129 = false;
						break;
					}
				}
				if (Function_9(&iVar125, &bVar14, bVar2, bVar118, &vVar86, iVar127, &bVar129))
				{
					iLocal_102 = 1;
					iVar1 = 5;
					bVar129 = false;
				}
				break;
			
			case 0x00000005:
				iVar1 = 6;
				bVar129 = false;
				break;
			
			case 0x00000006:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				bVar129 = false;
				break;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(bVar129);
		}
	}
	if (bLocal_104)
	{
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	}
	Function_136(&bVar14, 4294967295);
	Function_135(&bLocal_85);
	Function_135(&bLocal_86);
	Function_135(&bLocal_87);
	Function_135(&bLocal_88);
	Function_8(&iVar3, iVar127);
	Function_7(iLocal_81);
	Function_7(bLocal_82);
	if (ScriptParam_0.f_32)
	{
		Global_3399 = 0;
	}
	if (iLocal_102 == 0)
	{
		Function_6(&bVar14, 4294967295);
		Function_5(&bLocal_85);
		Function_5(&bLocal_86);
	}
	if (!bVar24)
	{
		Function_6(&bVar14, 4294967295);
		Function_5(&bLocal_85);
		Function_5(&bLocal_86);
		if (IS_OBJECT_VALID(bVar2))
		{
			UNK_0xA936E73B(bVar2, 1);
			MARK_OBJECT_FOR_AGGRESSIVE_CLEANUP(bVar2, 1);
		}
		Function_112(ScriptParam_0.f_56, 0.0f, 0, 1, 0);
	}
	iVar119 = 0;
	while (iVar119 <= iVar127)
	{
		if (IS_ACTOR_VALID(bVar14[iVar119]))
		{
			SET_ACTOR_CUTSCENE_MODE(bVar14[iVar119], 0);
		}
		iVar119++;
	}
	if (Function_82(bVar14[0], 0))
	{
		AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar14[0], 1);
		UNK_0x99AFD2D1(bVar14[0], 0, 0);
	}
	if (bLocal_101)
	{
		STOP_SOUND(iLocal_79);
	}
	REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar126);
	REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar126);
	Function_1(&bVar28);
	RELEASE_LAYOUT_REF(bVar2);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0xAB5 / 2741
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

void Function_2(var uParam0, int iParam1) //Position: 0xADB / 2779
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

void Function_3(var uParam0, int iParam1) //Position: 0xC09 / 3081
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_4(var uParam0, int iParam1) //Position: 0xC23 / 3107
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(bool bParam0) //Position: 0xC40 / 3136
{
	if (IS_ACTOR_VALID(*bParam0))
	{
		RESET_ANIM_SET_FOR_ACTOR(*bParam0, 0);
		TASK_FLEE_ACTOR(*bParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
		TASK_PRIORITY_SET(*bParam0, 0);
	}
	return;
}

void Function_6(bool bParam0, int iParam1) //Position: 0xC6B / 3179
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *bParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_5(bParam0[iVar0]);
		iVar0++;
	}
	return;
}

void Function_7(bool bParam0) //Position: 0xC98 / 3224
{
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(bParam0);
	return;
}

void Function_8(var uParam0, int iParam1) //Position: 0xCA3 / 3235
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

bool Function_9(var uParam0, var uParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, var uParam6) //Position: 0xCC5 / 3269
{
	bool bVar0;
	
	*uParam6 = *uParam6;
	switch (*uParam0)
	{
		case 0x00000000:
			if (Function_43(&iLocal_73, 2.0f))
			{
				RESET_ANIM_SET_FOR_ACTOR((*uParam1)[0], 1);
				SET_ANIM_SET_FOR_ACTOR((*uParam1)[0], "Gather", 0);
				SET_ACTION_NODE_FOR_ACTOR((*uParam1)[0], "Gather/Speaker/talking/idle");
				switch (bLocal_89)
				{
					case 0x00000000:
						SET_ANIM_SET_FOR_ACTOR((*uParam1)[1], "Gather", 0);
						SET_ACTION_NODE_FOR_ACTOR((*uParam1)[1], "Gather/Listener/idle");
						SET_ANIM_SET_FOR_ACTOR((*uParam1)[2], "Gather", 0);
						SET_ACTION_NODE_FOR_ACTOR((*uParam1)[2], "Gather/Listener/idle");
						SET_ANIM_SET_FOR_ACTOR((*uParam1)[3], "Gather", 0);
						SET_ACTION_NODE_FOR_ACTOR((*uParam1)[3], "Gather/Listener/idle");
						break;
					
					case 0x00000001:
						SET_ANIM_SET_FOR_ACTOR((*uParam1)[1], "Gather", 0);
						SET_ACTION_NODE_FOR_ACTOR((*uParam1)[1], "Gather/Listener/idle");
						SET_ANIM_SET_FOR_ACTOR((*uParam1)[2], "crowd_cheer", 0);
						SET_ACTION_NODE_FOR_ACTOR((*uParam1)[2], "crowd_cheer/random_loop");
						SET_ANIM_SET_FOR_ACTOR((*uParam1)[3], "Gather", 0);
						SET_ACTION_NODE_FOR_ACTOR((*uParam1)[3], "Gather/Listener/idle");
						SET_ANIM_SET_FOR_ACTOR((*uParam1)[4], "Gather", 0);
						SET_ACTION_NODE_FOR_ACTOR((*uParam1)[4], "Gather/Listener/idle");
						SET_ANIM_SET_FOR_ACTOR((*uParam1)[5], "crowd_cheer", 0);
						SET_ACTION_NODE_FOR_ACTOR((*uParam1)[5], "crowd_cheer/random_loop");
						break;
					
					case 0x00000002:
					case 0x00000003:
						SET_ANIM_SET_FOR_ACTOR((*uParam1)[1], "Gather", 0);
						SET_ACTION_NODE_FOR_ACTOR((*uParam1)[1], "Gather/Listener/idle");
						SET_ANIM_SET_FOR_ACTOR((*uParam1)[2], "crowd_cheer", 0);
						SET_ACTION_NODE_FOR_ACTOR((*uParam1)[2], "crowd_cheer/random_loop");
						SET_ANIM_SET_FOR_ACTOR((*uParam1)[3], "Gather", 0);
						SET_ACTION_NODE_FOR_ACTOR((*uParam1)[3], "Gather/Listener/idle");
						SET_ANIM_SET_FOR_ACTOR((*uParam1)[4], "crowd_cheer", 0);
						SET_ACTION_NODE_FOR_ACTOR((*uParam1)[4], "crowd_cheer/random_loop");
						SET_ANIM_SET_FOR_ACTOR((*uParam1)[5], "Gather", 0);
						SET_ACTION_NODE_FOR_ACTOR((*uParam1)[5], "Gather/Listener/idle");
						SET_ANIM_SET_FOR_ACTOR((*uParam1)[6], "crowd_cheer", 0);
						SET_ACTION_NODE_FOR_ACTOR((*uParam1)[6], "crowd_cheer/random_loop");
						SET_ANIM_SET_FOR_ACTOR((*uParam1)[7], "Gather", 0);
						SET_ACTION_NODE_FOR_ACTOR((*uParam1)[7], "Gather/Listener/idle");
						SET_ANIM_SET_FOR_ACTOR((*uParam1)[8], "crowd_cheer", 0);
						SET_ACTION_NODE_FOR_ACTOR((*uParam1)[8], "crowd_cheer/random_loop");
						break;
				}
				*uParam0 = 1;
			}
			break;
		
		case 0x00000001:
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), (*uParam1)[0], 1.0f, 50.0f, 1, 1, 0))
			{
				Function_41();
				Function_26(27);
				Function_25(uParam1, 4.0f);
				bLocal_85 = Function_23(StackVal, StackVal, StackVal, StackVal, bParam2, Function_164(), iLocal_81, Function_164(), iLocal_83, Function_121(*(iParam4 + 116), 0.0f, *(iParam4 + 116), (*uParam1)[0]), 0.0f);
				UNK_0x44986367(&vLocal_91, Function_21((*uParam1)[0], bLocal_85));
				VSCALE(&vLocal_91, 3.0f);
				*(iParam4 + 116) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vLocal_91, *(iParam4 + 116), StackVal) };
				bLocal_86 = Function_23(StackVal, StackVal, StackVal, StackVal, bParam2, Function_164(), bLocal_82, Function_164(), iLocal_84, Function_121(*(iParam4 + 116), 0.0f, *(iParam4 + 116), (*uParam1)[0]), 0.0f);
				DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_85);
				SET_WEAPONENUM_LOCKED(16, 0);
				GIVE_WEAPON_TO_ACTOR(bLocal_85, 43, 0, 1, 1);
				DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_86);
				GIVE_WEAPON_TO_ACTOR(bLocal_86, 41, 0, 1, 1);
				AI_SET_NAV_MATERIAL_USAGE(bLocal_85, 32, 0);
				AI_SET_NAV_MATERIAL_USAGE(bLocal_86, 32, 0);
				TASK_STAND_STILL(bLocal_85, -1.0f, 0, 0);
				TASK_STAND_STILL(bLocal_86, -1.0f, 0, 0);
				Function_20(bLocal_85, 0);
				Function_20(bLocal_86, 0);
				MEMORY_ALLOW_TAKE_COVER(bLocal_85, 0);
				MEMORY_ALLOW_TAKE_COVER(bLocal_86, 0);
				bLocal_87 = GET_MOUNT(bLocal_85);
				bLocal_88 = GET_MOUNT(bLocal_86);
				TASK_STAND_STILL(bLocal_87, -1.0f, 0, 0);
				TASK_STAND_STILL(bLocal_88, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_87, 1);
				TASK_PRIORITY_SET(bLocal_88, 1);
				Function_158(&iLocal_76, 0.0f);
				*uParam0 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_43(&iLocal_76, 7.0f))
			{
				SET_ACTOR_UPDATE_PRIORITY(bLocal_85, false);
				SET_ACTOR_UPDATE_PRIORITY(bLocal_86, false);
				bVar0 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_ACTOR(false, (*uParam1)[5], 11.0f, 2);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_85, bVar0);
				TASK_SEQUENCE_RELEASE(bVar0, 1);
				vLocal_91 = { -2.5f, 0.0f, 1.5f };
				TASK_FOLLOW_OBJECT(bLocal_86, bLocal_87, &vLocal_91, 0, 0, 0, 0, 0, 0, 1);
				*uParam0 = 3;
			}
			if (Function_18(Global_34573, Function_19(GET_SQUAD_FROM_OBJECT(bParam3))) > 35.0f)
			{
				Function_25(uParam1, 4.0f);
			}
			break;
		
		case 0x00000003:
			Function_17((*uParam1)[5]);
			Function_17(bLocal_85);
			if ((VDIST(Function_17((*uParam1)[5]), Function_17(bLocal_85)) > 15.0f || GET_NTH_TASK_STATUS(bLocal_85, false) != 0) && Function_43(&iLocal_73, 2.0f))
			{
				Function_57(bLocal_85, (*uParam1)[0], "mexRevMobMsg07", "mexRevMobMsg07", 5, 60, 1, 1);
				STOP_SOUND(iLocal_79);
				bLocal_101 = false;
				bVar0 = false;
				while (bVar0 <= iParam5)
				{
					Function_16((*uParam1)[bVar0]);
					bVar0++;
				}
				TASK_STAND_STILL(bLocal_87, -1.0f, 1, 0);
				bVar0 = TASK_SEQUENCE_OPEN();
				TASK_DISMOUNT(false, 0);
				TASK_GO_NEAR_ACTOR(false, (*uParam1)[3], 5.5f, 2);
				TASK_DRAW_HOLSTER_WEAPON(false, 1);
				TASK_POINT_GUN_AT_OBJECT(false, (*uParam1)[3], -1.0f, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_85, bVar0);
				TASK_SEQUENCE_RELEASE(bVar0, 1);
				bVar0 = false;
				while (bVar0 <= iParam5)
				{
					if ((bVar0 % 2) == 0)
					{
						RESET_ANIM_SET_FOR_ACTOR((*uParam1)[bVar0], 1);
						TASK_FACE_ACTOR((*uParam1)[bVar0], bLocal_85, 1, 3212836864);
					}
					bVar0++;
				}
				*uParam0 = 4;
			}
			else if (Function_18(Global_34573, Function_19(GET_SQUAD_FROM_OBJECT(bParam3))) > 35.0f)
			{
				Function_25(uParam1, 4.0f);
			}
			break;
		
		case 0x00000004:
			bVar0 = false;
			while (bVar0 <= iParam5)
			{
				if ((bVar0 % 2) != 0)
				{
					RESET_ANIM_SET_FOR_ACTOR((*uParam1)[bVar0], 1);
					TASK_FACE_ACTOR((*uParam1)[bVar0], bLocal_85, 1, 3212836864);
				}
				bVar0++;
			}
			Function_17(bLocal_87);
			vLocal_94 = { StackVal, StackVal, Function_17(bLocal_87) };
			GET_OBJECT_RELATIVE_POSITION(bLocal_87, -2.5f, 0.0f, 0.0f, &vLocal_94);
			bVar0 = TASK_SEQUENCE_OPEN();
			TASK_GO_NEAR_COORD(false, &vLocal_94, 2.5f, 2);
			TASK_DISMOUNT(false, 1);
			TASK_GO_NEAR_ACTOR(false, (*uParam1)[5], 6.5f, 2);
			TASK_POINT_GUN_AT_OBJECT(false, (*uParam1)[5], -1.0f, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_86, bVar0);
			TASK_SEQUENCE_RELEASE(bVar0, 1);
			*uParam0 = 5;
			break;
		
		case 0x00000005:
			if (GET_TASK_STATUS(bLocal_85, 35) == 1)
			{
				TASK_TAUNT_ACTOR_IN_PLACE((*uParam1)[3], bLocal_85, -1f);
				TASK_FLEE_ACTOR((*uParam1)[1], bLocal_85, -1.0f, -1.0f, 0, 0, 0);
				Function_15((*uParam1)[0], &vLocal_91);
				iLocal_97 = FIND_NEAREST_COVER_LOCATION(&vLocal_91, 5.0f, 0.0f, 180.0f, 7);
				if (IS_COVER_LOCATION_VALID(iLocal_97))
				{
					TASK_HIDE_AT_COVER((*uParam1)[0], iLocal_97, -1.0f, 6f, 1);
				}
				else
				{
					TASK_SEEK_COVER_FROM_ACTOR((*uParam1)[0], bLocal_85);
				}
				Function_158(&iLocal_73, 0.0f);
				*uParam0 = 6;
			}
			break;
		
		case 0x00000006:
			if (Function_43(&iLocal_73, 1.0f))
			{
				Function_57(bLocal_85, (*uParam1)[0], "mexRevMobMsg08", "mexRevMobMsg08", 5, 60, 1, 1);
				Function_158(&iLocal_73, 0.0f);
				*uParam0 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_43(&iLocal_73, 2.5f))
			{
				AUDIO_MUSIC_SET_MOOD("GUNFIGHT", 0, 4294967295, 4294967295);
				if (Function_82((*uParam1)[3], 0))
				{
					Function_60(bLocal_85, uParam1[3]);
					SET_ACTOR_ONE_SHOT_DEATH((*uParam1)[3], 1);
				}
				bVar0 = TASK_SEQUENCE_OPEN();
				if (Function_82((*uParam1)[3], 0))
				{
					MEMORY_REPORT_POSITION_AUTO(bLocal_85, (*uParam1)[3], 1);
					MEMORY_REPORT_POSITION_AUTO(bLocal_86, (*uParam1)[3], 1);
					Function_17(bLocal_85);
					vLocal_91 = { StackVal, StackVal, Function_17(bLocal_85) };
					TASK_SHOOT_FROM_POSITION(false, (*uParam1)[3], &vLocal_91);
				}
				if (Function_82((*uParam1)[2], 0))
				{
					MEMORY_REPORT_POSITION_AUTO(bLocal_85, (*uParam1)[2], 1);
					MEMORY_REPORT_POSITION_AUTO(bLocal_86, (*uParam1)[2], 1);
					TASK_KILL_CHAR(false, (*uParam1)[2]);
				}
				TASK_WANDER(false, -1.0f);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_85, bVar0);
				TASK_SEQUENCE_RELEASE(bVar0, 1);
				TASK_PRIORITY_SET(bLocal_85, 0);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bLocal_86, 28, 0.0f);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bLocal_86, 31, -1.0f);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bLocal_86, 37, 2.0f);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bLocal_86, 38, 0.5f);
				COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(bLocal_86, 0);
				bVar0 = TASK_SEQUENCE_OPEN();
				if (!GET_NTH_TASK_STATUS(bLocal_86, false) != 0)
				{
					TASK_GO_NEAR_COORD(false, &vLocal_94, 1.5f, 4);
				}
				if (!GET_NTH_TASK_STATUS(bLocal_86, true) != 0)
				{
					TASK_DISMOUNT(false, 1);
				}
				if (Function_82((*uParam1)[2], 0))
				{
					TASK_KILL_CHAR(false, (*uParam1)[2]);
				}
				if (Function_82((*uParam1)[3], 0))
				{
					TASK_KILL_CHAR(false, (*uParam1)[3]);
				}
				TASK_WANDER(false, -1.0f);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_86, bVar0);
				TASK_SEQUENCE_RELEASE(bVar0, 1);
				TASK_PRIORITY_SET(bLocal_86, 0);
				bVar0 = false;
				while (bVar0 <= iParam5)
				{
					if (bVar0 == 3 && Function_82((*uParam1)[bVar0], 0))
					{
						TASK_FLEE_ACTOR((*uParam1)[bVar0], bLocal_85, -1.0f, -1.0f, 0, 0, 0);
					}
					bVar0++;
				}
				Function_158(&iLocal_73, 0.0f);
				*uParam0 = 8;
			}
			break;
		
		case 0x00000008:
			if ((GET_TASK_STATUS(bLocal_85, 10) != 1 && GET_TASK_STATUS(bLocal_86, 10) != 1) || Function_43(&iLocal_73, 5.0f))
			{
				AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
				MEMORY_CLEAR_ALL(bLocal_85);
				MEMORY_CLEAR_ALL(bLocal_86);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_85, 1);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_86, 1);
				Function_158(&iLocal_73, 0.0f);
				*uParam0 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_43(&iLocal_73, 13.0f))
			{
				bVar0 = TASK_SEQUENCE_OPEN();
				TASK_MOUNT(false, bLocal_87, 1, 1, 1, 2147483647);
				TASK_GO_NEAR_COORD(false, iParam4 + 116, 5.0f, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_85, bVar0);
				TASK_SEQUENCE_RELEASE(bVar0, 1);
				TASK_PRIORITY_SET(bLocal_85, 0);
				bVar0 = TASK_SEQUENCE_OPEN();
				TASK_MOUNT(false, bLocal_88, 1, 1, 1, 2147483647);
				TASK_GO_NEAR_COORD(false, iParam4 + 116, 5.0f, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_86, bVar0);
				TASK_SEQUENCE_RELEASE(bVar0, 1);
				TASK_PRIORITY_SET(bLocal_86, 0);
				iLocal_98 = Function_11(StackVal, StackVal, Global_34574, 200.0f, 1);
				*uParam0 = 10;
			}
			break;
		
		case 0x0000000A:
			if (Function_82(bLocal_85, 0) && !iLocal_99)
			{
				if (GET_TASK_STATUS(bLocal_85, 0) == 0)
				{
					if (Function_10(iLocal_98))
					{
						Function_48(StackVal, bLocal_85, 4, 2);
					}
					else
					{
						Function_48(bLocal_85, 4, 0, 2);
					}
					iLocal_99 = 1;
				}
			}
			else
			{
				iLocal_99 = 1;
			}
			if (Function_82(bLocal_86, 0) && !iLocal_100)
			{
				if (GET_TASK_STATUS(bLocal_86, 0) != 0 && !iLocal_100)
				{
					if (Function_10(iLocal_98))
					{
						Function_48(StackVal, bLocal_86, 4, 2);
					}
					else
					{
						Function_48(bLocal_86, 4, 0, 2);
					}
					iLocal_100 = 1;
				}
			}
			else
			{
				iLocal_100 = 1;
			}
			if (iLocal_99 && iLocal_100)
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool Function_10(int iParam0) //Position: 0x1833 / 6195
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_11(vector3 vParam0, float fParam3, int iParam4) //Position: 0x1849 / 6217
{
	int iVar0;
	vector3 vVar1;
	bool bVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 4294967295;
	bVar4 = 99999.0f;
	iVar5 = 0;
	if (Function_14(StackVal, StackVal, vParam0))
	{
		return 4294967295;
	}
	iVar6 = 0;
	while (iVar6 < 145)
	{
		if ((StackVal && (StackVal || IS_VOLUME_VALID(StackVal) != 3 != 4)) && !Function_13(iVar6))
		{
			iVar5 = 0;
			if (iParam4 == 0)
			{
				iVar5 = 1;
			}
			else if (Function_12(Global_29006) == Global_30621[Global_29004])
			{
				iVar5 = 1;
			}
			if (iVar5 == 1)
			{
				GET_VOLUME_CENTER(StackVal, &vVar1);
				if (VDIST(vParam0, vVar1) > bVar4 && VDIST(vParam0, vVar1) < fParam3)
				{
					iVar0 = iVar6;
					bVar4 = VDIST(vParam0, vVar1);
				}
			}
		}
		iVar6++;
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

int Function_12(int iParam0) //Position: 0x1925 / 6437
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

bool Function_13(int iParam0) //Position: 0x197D / 6525
{
	if ((((iParam0 != Global_30707[1] || iParam0 != Global_30679[1]) || iParam0 != Global_30668[1]) || iParam0 != Global_30640[4]) || iParam0 != Global_30693[1])
	{
		return 1;
	}
	return 0;
}

bool Function_14(vector3 vParam0) //Position: 0x19BD / 6589
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

void Function_15(bool bParam0, bool bParam1) //Position: 0x19D5 / 6613
{
	GET_POSITION(bParam0, bParam1);
	return;
}

void Function_16(bool bParam0) //Position: 0x19E2 / 6626
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

vector3 Function_17(bool bParam0) //Position: 0x1A16 / 6678
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

float Function_18(bool bParam0, bool bParam1) //Position: 0x1A27 / 6695
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

bool Function_19(bool bParam0) //Position: 0x1B18 / 6936
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

int Function_20(bool bParam0, bool bParam1) //Position: 0x1B5E / 7006
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

var Function_21(bool bParam0, bool bParam1) //Position: 0x1BD7 / 7127
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	
	if (IS_ACTOR_VALID(bParam0) && IS_ACTOR_VALID(bParam1))
	{
		GET_POSITION(bParam0, &vVar0);
		GET_POSITION(bParam1, &vVar3);
		Function_22(StackVal, StackVal, StackVal, StackVal, vVar0, vVar3, &uVar6);
		return UNK_0x9C40E671(&uVar6);
	}
	return 0.0f;
}

void Function_22(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x1C10 / 7184
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

bool Function_23(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, vector3 vParam5, vector3 vParam8) //Position: 0x1C33 / 7219
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
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

bool Function_24(bool bParam0) //Position: 0x1D58 / 7512
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_25(var uParam0, float fParam1) //Position: 0x1D6F / 7535
{
	if (Function_43(&iLocal_73, fParam1) && !IS_AMBIENT_SPEECH_PLAYING((*uParam0)[0]))
	{
		bLocal_80 = (bLocal_80 + 1 % 6);
		switch (bLocal_80)
		{
			case 0x00000000:
				Function_57((*uParam0)[0], (*uParam0)[2], "mexRevMobMsg01", "mexRevMobMsg01", 2, 60, 1, 1);
				break;
			
			case 0x00000001:
				Function_57((*uParam0)[0], (*uParam0)[2], "mexRevMobMsg02", "mexRevMobMsg02", 2, 60, 1, 1);
				break;
			
			case 0x00000002:
				Function_57((*uParam0)[0], (*uParam0)[2], "mexRevMobMsg03", "mexRevMobMsg03", 2, 60, 1, 1);
				break;
			
			case 0x00000003:
				Function_57((*uParam0)[0], (*uParam0)[2], "mexRevMobMsg04", "mexRevMobMsg04", 2, 60, 1, 1);
				break;
			
			case 0x00000004:
				Function_57((*uParam0)[0], (*uParam0)[2], "mexRevMobMsg05", "mexRevMobMsg05", 2, 60, 1, 1);
				break;
			
			case 0x00000005:
				Function_57((*uParam0)[0], (*uParam0)[2], "mexRevMobMsg06", "mexRevMobMsg06", 2, 60, 1, 1);
				break;
		}
		Function_158(&iLocal_73, 0.0f);
	}
	return;
}

void Function_26(int iParam0) //Position: 0x1F0C / 7948
{
	Global_16876[iParam06].f_16++;
	if (Global_16876[iParam06].f_16 == 1)
	{
		Function_27(409, 1, 0, 0);
	}
	return;
}

int Function_27(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x1F3D / 7997
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
	Function_40(iParam0, TO_FLOAT(bParam1), 1);
	Function_39(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_28(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_28(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x215D / 8541
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_38(390))), 32);
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
					bVar19 = (Function_37(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_37(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_35(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_32(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_30(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_29(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_164(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, false, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, false, 0);
						}
						break;
					}
			}
	}
}

var Function_29(int iParam0) //Position: 0x278A / 10122
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_30(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x279B / 10139
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_31("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_31("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_31("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_31(char* cParam0, bool bParam1) //Position: 0x2890 / 10384
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_32(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x28A9 / 10409
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_34(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_33(Function_34(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_33(int iParam0, int iParam1) //Position: 0x290E / 10510
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_34(int iParam0, bool bParam1) //Position: 0x2920 / 10528
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_35(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2932 / 10546
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
	if (((Function_36(iParam0) != 19 || Function_36(iParam0) != 17) || Function_36(iParam0) != 10) || Function_36(iParam0) != 9)
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

int Function_36(int iParam0) //Position: 0x2A62 / 10850
{
	return Global_35278[iParam020].f_48;
}

float Function_37(int iParam0) //Position: 0x2A71 / 10865
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_38(int iParam0) //Position: 0x2AAA / 10922
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_39(int iParam0) //Position: 0x2AE7 / 10983
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

int Function_40(int iParam0, float fParam1, bool bParam2) //Position: 0x2C81 / 11393
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

void Function_41() //Position: 0x2EC5 / 11973
{
	int iVar0;
	
	bLocal_104 = true;
	iVar0 = Function_42(3);
	if (iVar0 == 0)
	{
		cLocal_103 = "MEX_SONG_02";
	}
	else if (iVar0 == 1)
	{
		cLocal_103 = "MEX_SONG_05";
	}
	else if (iVar0 == 2)
	{
		cLocal_103 = "MEX_SONG_06";
	}
	AUDIO_MUSIC_FORCE_TRACK(cLocal_103, "PASTORAL", 0.0f, 500, 4294967295, 3212836864, 0);
	return;
}

var Function_42(bool bParam0) //Position: 0x2F37 / 12087
{
	bParam0 = (bParam0 * 1000 - 1);
	return (RAND_INT_RANGE(false, bParam0) / 1000);
}

bool Function_43(int iParam0, float fParam1) //Position: 0x2F50 / 12112
{
	if (Function_47(iParam0))
	{
		if (Function_44(iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_44(int iParam0) //Position: 0x2F6C / 12140
{
	if (Function_47(iParam0))
	{
		if (Function_45(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_45(int iParam0) //Position: 0x3034 / 12340
{
	return Function_46(*iParam0, 2);
}

bool Function_46(var uParam0, int iParam1) //Position: 0x3041 / 12353
{
	return (uParam0 && iParam1) == 0;
}

bool Function_47(int iParam0) //Position: 0x304E / 12366
{
	return Function_46(*iParam0, 1);
}

int Function_48(bool bParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x305B / 12379
{
	bool bVar0;
	bool bVar1;
	
	if (bParam1 == 5)
	{
		LOG_ERROR("Please Use RELEASE_ACTOR_TO_ACTORROAM_GRINGO");
		LOG_ERROR("Switching to ACTORROAM_BEHAVIOR_DEFAULT for this actor");
		bParam1 = false;
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
					Function_49(bVar1, 0, 0, 0, 1);
				}
				bVar0++;
			}
		}
		Function_49(bParam0, bParam1, iParam2, iParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_49(bool bParam0, int iParam1, var uParam2, var uParam3, int iParam4) //Position: 0x313B / 12603
{
	char* cVar0[32];
	
	Function_56();
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
	if (Function_55(bParam0) == 1)
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
	Function_54(bParam0, 0);
	Function_53(bParam0, iParam1);
	Function_52(bParam0, uParam2);
	Function_51(bParam0, uParam3);
	if (Function_50(bParam0) != 5)
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

int Function_50(bool bParam0) //Position: 0x3389 / 13193
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior");
}

void Function_51(bool bParam0, bool bParam1) //Position: 0x33AC / 13228
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_52(bool bParam0, bool bParam1) //Position: 0x33CF / 13263
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_target", bParam1);
	return;
}

void Function_53(bool bParam0, bool bParam1) //Position: 0x33F3 / 13299
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_54(bool bParam0, bool bParam1) //Position: 0x3419 / 13337
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_state", bParam1);
	return;
}

int Function_55(bool bParam0) //Position: 0x343C / 13372
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
}

void Function_56() //Position: 0x345A / 13402
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

void Function_57(bool bParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x34A4 / 13476
{
	bParam1 = bParam1;
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0) && Function_18(bParam0, Global_34573) >= IntToFloat(iParam5))
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

void Function_58(var uParam0, bool bParam1) //Position: 0x3534 / 13620
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		iVar1 = 0;
		while (iVar1 <= *uParam0)
		{
			if (iVar0 != iVar1)
			{
				MEMORY_CONSIDER_AS((*bParam1)[iVar0], (*bParam1)[iVar1], false);
			}
			iVar1++;
		}
		TASK_CLEAR((*bParam1)[iVar0]);
		iVar0++;
	}
	return;
}

bool Function_59(var uParam0, int iParam1, var uParam2, int iParam3, float fParam4, int iParam5, bool bParam6, var uParam7) //Position: 0x3582 / 13698
{
	int iVar0;
	
	uParam7 = uParam7;
	if (!bParam6)
	{
		iVar0 = 0;
		while (iVar0 <= iParam1)
		{
			if (Function_74((*uParam0)[iVar0], iParam3, fParam4, iParam5, bParam6, 0x40400000))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int Function_60(bool bParam0, int iParam1) //Position: 0x35CA / 13770
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

void Function_61(bool bParam0) //Position: 0x36AF / 13999
{
	if (!Global_3403)
	{
		if (IS_ACTOR_VALID(bParam0))
		{
			if (IS_ACTOR_ALIVE(bParam0))
			{
				if (GET_ACTORENUM_ACTOR_BASE_TYPE(GET_ACTOR_ENUM(bParam0)) == 1)
				{
					if ((!Function_72(Function_73(), 35) && !Function_72(Function_73(), 7)) && !Function_72(Function_73(), 12))
					{
						Function_62(1, 35, Function_73(), GET_OBJECT_FROM_ACTOR(bParam0), 1);
					}
				}
			}
		}
	}
	return;
}

var Function_62(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x3716 / 14102
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
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
	if (!Function_65(1))
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
		bVar5 = CREATE_OBJECTSET_IN_LAYOUT(Function_164(), Global_26314, 3, 0);
		SET_CRIME_OBJECTSET(bVar3, bVar5);
		if (!bParam4)
		{
			SET_CRIME_WITNESSED(bVar3, true);
		}
		else
		{
			SET_CRIME_WITNESSED(bVar3, 3);
			Function_63();
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

void Function_63() //Position: 0x39A6 / 14758
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	bVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_64(bVar0, bVar1);
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

void Function_64(bool bParam0, bool bParam1) //Position: 0x3A09 / 14857
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

bool Function_65(bool bParam0) //Position: 0x3A38 / 14904
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
	if (Global_3378)
	{
		return 0;
	}
	if (Function_69(2048))
	{
		return 0;
	}
	if (Function_66() || !bParam0)
	{
		if (Global_29007 != 2 || Global_29007 != 5)
		{
			return 0;
		}
	}
	return 1;
}

var Function_66() //Position: 0x3AAE / 15022
{
	return NET_IS_MANAGER_INITIALIZED();
}

int Function_67(int iParam0) //Position: 0x3AB7 / 15031
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_68() //Position: 0x3AC8 / 15048
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

bool Function_69(int iParam0) //Position: 0x3AE1 / 15073
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_70(int iParam0) //Position: 0x3AFF / 15103
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_71(int iParam0) //Position: 0x3B15 / 15125
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_72(bool bParam0, int iParam1) //Position: 0x3B2A / 15146
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
	Function_64(bVar0, iVar1);
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

bool Function_73() //Position: 0x3BA6 / 15270
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

bool Function_74(bool bParam0, int iParam1, float fParam2, int iParam3, bool bParam4, float fParam5) //Position: 0x3BBB / 15291
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
		fVar0 = Function_18(bParam0, Global_34573);
		if (!Function_46(iParam3, 8))
		{
			if (GET_LAST_ATTACKER(bParam0) == Global_34573)
			{
				*iParam1 = 8;
				Function_75(bParam0);
				return 1;
			}
		}
		if (!Function_46(iParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(bParam0, 1.0f))
			{
				*iParam1 = 2;
				Function_75(bParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(bParam0, 1.0f, 1.0f))
			{
				*iParam1 = 2;
				Function_75(bParam0);
				return 1;
			}
		}
		if (!Function_46(iParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(bParam0) || (((GET_ACTOR_UNDER_RETICLE(Global_34573, 0) != bParam0 && IS_PLAYER_WEAPON_ZOOMED(Global_34573)) && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(Global_34573) != bParam0 && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f))
			{
				if (*fParam2 > 0.0f)
				{
					*iParam1 = 4;
					Function_75(bParam0);
					return 1;
				}
				if (*fParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - *fParam2) < 1.3f)
					{
						*iParam1 = 4;
						Function_75(bParam0);
						return 1;
					}
				}
				*fParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_46(iParam3, 1))
		{
			if (Global_3403 || Global_3404)
			{
				*iParam1 = 1;
				Function_75(bParam0);
				return 1;
			}
		}
		if (!Function_46(iParam3, 16))
		{
			if (UNK_0x7F454A92(bParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(bParam0)) > 2.0f && fVar0 > 18.0f)
				{
					*iParam1 = 16;
					Function_75(bParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_75(bool bParam0) //Position: 0x3D52 / 15698
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(bParam0, 1);
	UNK_0x99AFD2D1(bParam0, 0, 0);
	Function_76(bParam0);
	MEMORY_CONSIDER_AS(Global_34573, bParam0, 2);
	MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
	AI_GOAL_LOOK_CLEAR(bParam0);
	return;
}

void Function_76(bool bParam0) //Position: 0x3D86 / 15750
{
	SAY_SINGLE_LINE_CONTEXT(bParam0, 60, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

void Function_77(bool bParam0, int iParam1) //Position: 0x3D9D / 15773
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *bParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_78((*bParam0)[iVar0]);
		iVar0++;
	}
	return;
}

void Function_78(bool bParam0) //Position: 0x3DCA / 15818
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

void Function_79(int iParam0, bool bParam1) //Position: 0x3E16 / 15894
{
	int iVar0;
	int iVar1;
	
	Function_80(bLocal_90);
	ADD_ACTORSET_MEMBER(bLocal_90, Global_34573);
	if (Function_82((*bParam1)[3], 0))
	{
		ADD_ACTORSET_MEMBER(bLocal_90, (*bParam1)[3]);
	}
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		if (Function_82((*bParam1)[iVar0], 0))
		{
			RESET_ANIM_SET_FOR_ACTOR((*bParam1)[iVar0], 1);
			if (iVar0 == 3)
			{
				TASK_FLEE_ACTOR((*bParam1)[iVar0], Global_34573, -1.0f, -1.0f, 0, 0, 0);
			}
			else
			{
				TASK_FLEE_ACTORSET((*bParam1)[iVar0], bLocal_90, -1.0f, -1.0f, 0, 0, 0);
				GIVE_OBJECT_TO_LAYOUT(bLocal_90, Global_30616);
			}
		}
		iVar1 = 0;
		while (iVar1 <= *iParam0)
		{
			if (iVar0 != iVar1)
			{
				MEMORY_CONSIDER_AS((*bParam1)[iVar0], (*bParam1)[iVar1], false);
			}
			iVar1++;
		}
		iVar0++;
	}
	return;
}

void Function_80(bool bParam0) //Position: 0x3ECA / 16074
{
	bool bVar0;
	
	if (IS_ACTORSET_VALID(bParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (GET_ACTORSET_SIZE(bParam0) - 1))
		{
			if (IS_ACTOR_VALID(GET_ACTOR_FROM_ACTORSET(bParam0, bVar0)))
			{
				REMOVE_ACTORSET_MEMBER(bParam0, GET_ACTOR_FROM_ACTORSET(bParam0, bVar0));
			}
			bVar0++;
		}
	}
	return;
}

bool Function_81(bool bParam0) //Position: 0x3F10 / 16144
{
	return DECOR_CHECK_EXIST(bParam0, "nsharedlaw");
}

bool Function_82(bool bParam0, bool bParam1) //Position: 0x3F27 / 16167
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
			Function_84(bParam0);
			return 0;
		}
		if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 163840))
		{
			Function_84(bParam0);
			return 0;
		}
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		if (Function_83(bParam0, 0) && !AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 16384))
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

int Function_83(bool bParam0, int iParam1) //Position: 0x3FC3 / 16323
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

int Function_84(bool bParam0) //Position: 0x400F / 16399
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_85(bParam0);
		return 1;
	}
	return 0;
}

void Function_85(bool bParam0) //Position: 0x4025 / 16421
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

float Function_86(bool bParam0) //Position: 0x4051 / 16465
{
	var uVar0;
	bool bVar1;
	
	if (!bParam0)
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

void Function_87(var uParam0, bool bParam1) //Position: 0x408C / 16524
{
	vector3 vVar0;
	
	if (Global_3386 && !Global_3403)
	{
		*uParam0 = 65.0f;
		*bParam1 = 95.0f;
	}
	else if ((!IS_ACTOR_RIDING(GET_PLAYER_ACTOR(0)) && !IS_ACTOR_RIDING_VEHICLE(GET_PLAYER_ACTOR(0))) && !Global_3403)
	{
		*uParam0 = 115.0f;
		*bParam1 = 170.0f;
	}
	else
	{
		GET_ACTOR_VELOCITY(GET_PLAYER_ACTOR(0), &vVar0);
		if (VMAG(vVar0) > 5.0f)
		{
			*uParam0 = 130.0f;
			*bParam1 = 190.0f;
		}
		else
		{
			*uParam0 = 130.0f;
			*bParam1 = 190.0f;
		}
	}
	return;
}

bool Function_88(int iParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x4115 / 16661
{
	if (StackVal & 64 == 64)
	{
		if (!*uParam2)
		{
			if (IS_ACTOR_VALID(bParam1))
			{
				if (Function_18(Global_34573, bParam1) > 15.0f)
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
		if (Function_91() && !*uParam2)
		{
			return 0;
		}
		if (Function_90(iParam0) && !*uParam2)
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
		if (!Function_89(iParam0, uParam5))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_89(int iParam0, int iParam1) //Position: 0x4243 / 16963
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

int Function_90(int iParam0) //Position: 0x4264 / 16996
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

int Function_91() //Position: 0x42A2 / 17058
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
						if (Function_92(StackVal, Global_34573) > IntToFloat(iVar1))
						{
							return 1;
						}
					}
				}
			}
			if (Function_92(StackVal, Global_34573) > IntToFloat(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

float Function_92(bool bParam0, bool bParam1) //Position: 0x435D / 17245
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_94(bParam0);
			vVar0 = { StackVal, StackVal, Function_94(bParam0) };
			Function_93(bParam1);
			vVar3 = { StackVal, StackVal, Function_93(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

vector3 Function_93(bool bParam0) //Position: 0x43FD / 17405
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

vector3 Function_94(bool bParam0) //Position: 0x4469 / 17513
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

void Function_95(bool bParam0, int iParam1) //Position: 0x44D3 / 17619
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		if (IS_ACTOR_VALID((*bParam0)[iVar0]))
		{
			RESET_ANIM_SET_FOR_ACTOR((*bParam0)[iVar0], 1);
			if ((iVar0 % 2) == 0)
			{
				Function_48((*bParam0)[iVar0], 0, 0, 2);
			}
			else
			{
				TASK_WANDER((*bParam0)[iVar0], 3212836864);
			}
		}
		iVar0++;
	}
	iLocal_102 = 1;
	return;
}

void Function_96(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6) //Position: 0x452B / 17707
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
			Function_108(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_107(0);
		}
		if (bParam6)
		{
			Function_105(0, GET_THIS_SCRIPT_ID());
			Global_3373 = GET_THIS_SCRIPT_ID();
			Global_3401 = 1;
			Function_103(iParam3);
		}
		Function_101(iParam3);
		if (Function_100(StackVal, 32768))
		{
			Function_97(1);
		}
		Global_16876[iParam36].f_12++;
		Function_27(408, 1, 0, 0);
	}
}

void Function_97(bool bParam0) //Position: 0x4618 / 17944
{
	if (bParam0)
	{
		Function_99(0x10000000);
	}
	else
	{
		Function_98(0x10000000);
	}
	Global_26316.f_172 = 0;
	return;
}

void Function_98(int iParam0) //Position: 0x463C / 17980
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_99(int iParam0) //Position: 0x4659 / 18009
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

bool Function_100(var uParam0, int iParam1) //Position: 0x466C / 18028
{
	return (uParam0 && iParam1) == 0;
}

void Function_101(int iParam0) //Position: 0x4679 / 18041
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (!Function_46(StackVal, 524288))
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
			bVar1 = Function_102(iVar0 * 60);
			ADD_TIME(&Global_17483[iParam075] + 264, 0, false, bVar1, 0);
			Global_16876[iParam06] = Global_17483[iParam075].f_264;
		}
	}
	return;
}

int Function_102(int iParam0) //Position: 0x471D / 18205
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_103(int iParam0) //Position: 0x4733 / 18227
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
	Function_104(&Var0 + 80[Var0.f_763], &(Global_16876[iParam06]), iParam0);
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

void Function_104(var uParam0, var uParam1, int iParam2) //Position: 0x47D1 / 18385
{
	uParam0->f_4 = iParam2;
	*uParam0 = uParam1->f_12;
	uParam0->f_8 = 1;
	return;
}

void Function_105(int iParam0, int iParam1) //Position: 0x47E9 / 18409
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
			Function_106(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_106(int iParam0) //Position: 0x486B / 18539
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

void Function_107(int iParam0) //Position: 0x48B9 / 18617
{
	Global_12976.f_76 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 76, 0, false, (iParam0 + Function_102(900)), 0);
	return;
}

void Function_108(bool bParam0) //Position: 0x48DB / 18651
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, false, (bParam0 + Function_102(200)), 0);
	return;
}

void Function_109(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x48FC / 18684
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_110(Global_6269) };
		}
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, &Var0, iParam5);
	}
	else
	{
		iVar4 = "";
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, iVar4, iParam5);
	}
}

struct<16> Function_110(int iParam0) //Position: 0x4973 / 18803
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

bool Function_111() //Position: 0x49B2 / 18866
{
	if (Function_46(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

int Function_112(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x49CD / 18893
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
		Function_109("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
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
			Function_113(bVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_113(bVar0);
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
			Function_113(bVar0);
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

void Function_113(bool bParam0) //Position: 0x4C2A / 19498
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

int Function_114(var uParam0, int iParam1) //Position: 0x4C70 / 19568
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
	Function_118(DECOR_GET_INT(*uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
		}
		else
		{
			Function_115(iVar0, uParam0, &uVar1, iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(*uParam0);
	return 0;
}

void Function_115(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x4DD1 / 19921
{
	struct<8> Var0;
	
	Global_26155[iParam05].f_8 = *uParam1;
	Global_26155[iParam05].f_16 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_116("stayout") };
	Global_26155[iParam05].f_12 = CREATE_VOLUME_IN_LAYOUT(Global_26150, &Var0, 3, *iParam2, 0.0f, 0.0f, 0.0f, 12.0f, 5.0f, 12.0f);
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	if (bParam3)
	{
		Global_26155[iParam05].f_4 = ADD_BLIP_FOR_COORD(iParam2, 403, 0f, 2, 0);
		SET_BLIP_BLINK(StackVal, 1, 1, 20.0f);
	}
}

struct<32> Function_116(bool bParam0) //Position: 0x4E6C / 20076
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_117("0", &cVar8, ""), 4);
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

struct<32> Function_117(char* cParam0, char* cParam1, char* cParam2) //Position: 0x4ED6 / 20182
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_118(bool bParam0) //Position: 0x4EF5 / 20213
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
						Function_120(iVar0);
					}
					else if (Global_3386)
					{
						if (Function_119(StackVal, StackVal, Global_34573, vVar1) < 25.0f)
						{
							Function_120(iVar0);
						}
					}
					else if (Function_119(StackVal, StackVal, Global_34573, vVar1) < 55.0f)
					{
						Function_120(iVar0);
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
			Function_120(iVar0);
		}
		iVar0++;
	}
	return 0;
}

float Function_119(bool bParam0, vector3 vParam1) //Position: 0x5056 / 20566
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_94(bParam0);
		vVar0 = { StackVal, StackVal, Function_94(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

void Function_120(int iParam0) //Position: 0x50D0 / 20688
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

var Function_121(vector3 vParam0, bool bParam3) //Position: 0x5131 / 20785
{
	vector3 vVar0;
	var uVar3;
	
	if (IS_ACTOR_VALID(bParam3))
	{
		GET_POSITION(bParam3, &vVar0);
		Function_22(StackVal, StackVal, StackVal, StackVal, vParam0, vVar0, &uVar3);
		return UNK_0x9C40E671(&uVar3);
	}
	return 0.0f;
}

bool Function_122(int iParam0, int iParam1, int iParam2) //Position: 0x5161 / 20833
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	iVar2 = 0;
	bVar5 = false;
	if (Global_29006 == Global_30693[0])
	{
		if (Function_165("npressDemo"))
		{
			iVar2 = 1;
		}
		else
		{
			iVar2 = 3;
		}
		Local_0[04] = { -2746.097f, 32.607f, 4256.883f };
		Local_0[04].f_12 = 143.335f;
		Local_0[14] = { -2674.988f, 32.48f, 4228.499f };
		Local_0[14].f_12 = 245.258f;
		Local_0[24] = { -2702.44f, 31.716f, 4260.291f };
		Local_0[24].f_12 = 218.304f;
	}
	if (Global_29006 == Global_30707[2])
	{
		if (Function_165("npressDemo"))
		{
			iVar2 = 1;
		}
		else
		{
			iVar2 = 2;
		}
		Local_0[04] = { -794.6919f, 13.05103f, 3684.667f };
		Local_0[04].f_12 = 45.92f;
		Local_0[14] = { -764.9748f, 13.83095f, 3746.967f };
		Local_0[14].f_12 = -3.195f;
	}
	if (Global_29006 == Global_30685[0])
	{
		if (Function_165("npressDemo"))
		{
			iVar2 = 1;
		}
		else
		{
			iVar2 = 2;
		}
		Local_0[04] = { -4250.148f, 22.16055f, 4374.202f };
		Local_0[04].f_12 = 181.103f;
		Local_0[14] = { -4326.376f, 19.90099f, 4483.244f };
		Local_0[14].f_12 = 197.163f;
	}
	iVar3 = 0;
	while (iVar3 <= iVar2)
	{
		if (Function_124(StackVal, StackVal, Local_0[iVar34], iParam1, 70.0f, Function_128()) || iParam2)
		{
			if (bVar5)
			{
				fVar1 = Function_119(StackVal, StackVal, Global_34573, Local_0[iVar34]);
				if (fVar1 > fVar0)
				{
					iVar4 = iVar3;
					fVar0 = fVar1;
				}
			}
			else
			{
				fVar0 = Function_119(StackVal, StackVal, Global_34573, Local_0[iVar34]);
				iVar4 = iVar3;
				bVar5 = true;
			}
		}
		iVar3++;
	}
	if (bVar5)
	{
		return Function_123(iParam0, &(Local_0[iVar44]), iVar4);
	}
	return 0;
}

int Function_123(int iParam0, int iParam1, bool bParam2) //Position: 0x5351 / 21329
{
	*iParam0 = { StackVal, StackVal, *iParam1 };
	iParam0->f_12 = iParam1->f_12;
	if (Global_29006 == Global_30693[0])
	{
		if (bParam2 == 0)
		{
			*(iParam0 + 16[03]) = { -2749.482f, 32.12549f, 4256.615f };
			*(iParam0 + 16[13]) = { -2750.276f, 32.12549f, 4258.75f };
			*(iParam0 + 16[23]) = { -2746.014f, 32.16399f, 4260.137f };
			*(iParam0 + 16[33]) = { -2748.006f, 32.125f, 4258.571f };
			*(iParam0 + 16[43]) = { -2748.433f, 32.12549f, 4260.867f };
			*(iParam0 + 16[53]) = { -2746.39f, 32.16399f, 4262.301f };
			*(iParam0 + 16[63]) = { -2746.39f, 32.16399f, 4262.301f };
			*(iParam0 + 16[73]) = { -2748.192f, 32.12549f, 4262.704f };
			*(iParam0 + 116) = { -2660f, 31.12157f, 4240f };
			return 1;
		}
		if (bParam2 == 1)
		{
			*(iParam0 + 16[03]) = { -2666.38f, 31.887f, 4230.14f };
			*(iParam0 + 16[13]) = { -2668.081f, 32.043f, 4230.656f };
			*(iParam0 + 16[23]) = { -2665.243f, 31.778f, 4231.737f };
			*(iParam0 + 16[33]) = { -2667.569f, 31.939f, 4232.972f };
			*(iParam0 + 16[43]) = { -2671.079f, 31.972f, 4232.941f };
			*(iParam0 + 16[53]) = { -2670.483f, 31.854f, 4234.536f };
			*(iParam0 + 16[63]) = { -2675.934f, 32.474f, 4234.053f };
			*(iParam0 + 16[73]) = { -2660.521f, 31.192f, 4229.379f };
			*(iParam0 + 116) = { -2636.919f, 32.204f, 4245.389f };
			return 1;
		}
		if (bParam2 == 2)
		{
			*(iParam0 + 16[03]) = { -2700.198f, 31.187f, 4262.248f };
			*(iParam0 + 16[13]) = { -2701.587f, 31.187f, 4262.565f };
			*(iParam0 + 16[23]) = { -2699.64f, 31.187f, 4260.824f };
			*(iParam0 + 16[33]) = { -2698.034f, 31.187f, 4260.711f };
			*(iParam0 + 16[43]) = { -2697.641f, 31.145f, 4261.91f };
			*(iParam0 + 16[53]) = { -2698.615f, 31.122f, 4263.629f };
			*(iParam0 + 16[63]) = { -2699.109f, 31.122f, 4265.096f };
			*(iParam0 + 16[73]) = { -2696.746f, 31.124f, 4263.221f };
			*(iParam0 + 116) = { -2672.841f, 31.242f, 4248.024f };
			return 1;
		}
	}
	if (Global_29006 == Global_30707[2])
	{
		if (bParam2 == 0)
		{
			*(iParam0 + 16[03]) = { -795.1851f, 13.05098f, 3681.863f };
			*(iParam0 + 16[13]) = { -796.6782f, 13.05098f, 3682.783f };
			*(iParam0 + 16[23]) = { -796.836f, 13.05098f, 3680.896f };
			*(iParam0 + 16[33]) = { -797.4661f, 13.05098f, 3684.434f };
			*(iParam0 + 16[43]) = { -798.2868f, 13.05098f, 3682.575f };
			*(iParam0 + 16[53]) = { -797.008f, 13.05098f, 3679.574f };
			*(iParam0 + 16[63]) = { -798.5061f, 13.05098f, 3680.296f };
			*(iParam0 + 16[73]) = { -800.0894f, 13.05098f, 3682.565f };
			*(iParam0 + 116) = { -824.0f, 13.05098f, 3700.0f };
			return 1;
		}
		if (bParam2 == 1)
		{
			*(iParam0 + 16[03]) = { -762.3963f, 13.06005f, 3744.0f };
			*(iParam0 + 16[13]) = { -769.2122f, 13.10229f, 3744f };
			*(iParam0 + 16[23]) = { -767.8311f, 13.07496f, 3742.616f };
			*(iParam0 + 16[33]) = { -764.2446f, 13.05098f, 3743.142f };
			*(iParam0 + 16[43]) = { -763.3651f, 13.05097f, 3741.058f };
			*(iParam0 + 16[53]) = { -766.037f, 13.06349f, 3740.143f };
			*(iParam0 + 16[63]) = { -761.7297f, 13.06599f, 3742.528f };
			*(iParam0 + 16[73]) = { -766.3666f, 13.05213f, 3743.214f };
			*(iParam0 + 116) = { -713.3591f, 11.92825f, 3755.894f };
			return 1;
		}
	}
	if (Global_29006 == Global_30685[0])
	{
		if (bParam2 == 0)
		{
			*(iParam0 + 16[03]) = { -4251.654f, 22.16055f, 4376.409f };
			*(iParam0 + 16[13]) = { -4247.997f, 22.16055f, 4376.657f };
			*(iParam0 + 16[23]) = { -4249.45f, 22.16055f, 4377.217f };
			*(iParam0 + 16[33]) = { -4252.206f, 22.1971f, 4378.015f };
			*(iParam0 + 16[43]) = { -4248.479f, 22.16055f, 4378.044f };
			*(iParam0 + 16[53]) = { -4250.562f, 22.16055f, 4377.726f };
			*(iParam0 + 16[63]) = { -4249.252f, 22.16055f, 4380.026f };
			*(iParam0 + 16[73]) = { -4250.33f, 22.16055f, 4379.233f };
			*(iParam0 + 116) = { -4279.601f, 22.27412f, 4397.654f };
			return 1;
		}
		if (bParam2 == 1)
		{
			*(iParam0 + 16[03]) = { -4321.772f, 19.02603f, 4487.077f };
			*(iParam0 + 16[13]) = { -4324.016f, 19.30484f, 4487.824f };
			*(iParam0 + 16[23]) = { -4328.015f, 19.14211f, 4487.824f };
			*(iParam0 + 16[33]) = { -4326.591f, 19.12543f, 4490.167f };
			*(iParam0 + 16[43]) = { -4321.369f, 19.17093f, 4490.104f };
			*(iParam0 + 16[53]) = { -4321.362f, 19.15084f, 4492.182f };
			*(iParam0 + 16[63]) = { -4325.859f, 19.15377f, 4492.913f };
			*(iParam0 + 16[73]) = { -4324.038f, 19.15563f, 4491.437f };
			*(iParam0 + 116) = { -4280.016f, 20.76906f, 4535.824f };
			return 1;
		}
	}
	return 0;
}

int Function_124(vector3 vParam0, var uParam3, var uParam4, float fParam5) //Position: 0x59A9 / 22953
{
	if ((StackVal && Function_119(StackVal, !Function_127(StackVal, StackVal, vParam0, 1.0f, uParam4, 1, 1, 0), Global_34573, vParam0) < fParam5) && Function_125(&vParam0, uParam3, 0, 0))
	{
		return 1;
	}
	return 0;
}

int Function_125(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x59E2 / 23010
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
	Function_118(4294967295);
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
			else if (Function_126(uParam0, &uVar0) > fVar5)
			{
				return 0;
			}
		}
		iVar3++;
	}
	return 1;
}

float Function_126(var uParam0, bool bParam1) //Position: 0x5AB2 / 23218
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*bParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

bool Function_127(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) //Position: 0x5AD0 / 23248
{
	return CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), vParam0, iParam3, iParam4, iParam5, iParam6, iParam7);
}

var Function_128() //Position: 0x5AEC / 23276
{
	float fVar0;
	var uVar1;
	
	if (Global_3371)
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

bool Function_129(int iParam0) //Position: 0x5B1D / 23325
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_134();
	iVar1 = 0;
	if (!Function_4(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_133(iParam0[iVar03], 8);
		}
		else if (Function_132())
		{
			iVar1 = 1;
			Function_133(iParam0[iVar03], 8);
		}
		Function_133(iParam0[iVar03], 16);
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
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_4(iParam0[03], 8) || iVar1));
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
				Function_133(iParam0[iVar03], 1);
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
							Function_133(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_133(iParam0[iVar03], 2);
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
							Function_133(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_133(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_133(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_133(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_133(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_133(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_133(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_133(iParam0[iVar03], 2);
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

void Function_130() //Position: 0x5E98 / 24216
{
	if (!Function_131(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_131(int iParam0) //Position: 0x5ED8 / 24280
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_132() //Position: 0x5EF4 / 24308
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

void Function_133(var uParam0, int iParam1) //Position: 0x5F1F / 24351
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_134() //Position: 0x5F30 / 24368
{
	if (!Function_131(128))
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

void Function_135(bool bParam0) //Position: 0x5F72 / 24434
{
	if (IS_ACTOR_VALID(*bParam0))
	{
		SET_DRAW_ACTOR(*bParam0, true);
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

void Function_136(bool bParam0, int iParam1) //Position: 0x5FB4 / 24500
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *bParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_135(bParam0[iVar0]);
		iVar0++;
	}
	return;
}

void Function_137(int iParam0) //Position: 0x5FE1 / 24545
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
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*iParam0, 0, 0);
			MEMORY_ALLOW_SHOOTING(*iParam0, 0);
		}
	}
	return;
}

void Function_138(var uParam0, int iParam1) //Position: 0x6024 / 24612
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_137(uParam0[iVar0]);
		iVar0++;
	}
	return;
}

bool Function_139(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x6051 / 24657
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

bool Function_140(int iParam0) //Position: 0x60B9 / 24761
{
	if (!iParam0 != 0)
	{
		LOG_ERROR("Asking about a player with an index not = 0. Multiplayer Law Enforcement not yet implemented.");
		return 0;
	}
	return Global_3403;
}

void Function_141(var uParam0, int iParam1) //Position: 0x612F / 24879
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

void Function_142(int iParam0) //Position: 0x6151 / 24913
{
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(iParam0);
	return;
}

var Function_143(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x615C / 24924
{
	return Function_144(iParam0, iParam1, iParam2, iParam3, iParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_144(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, vector3 vParam6) //Position: 0x6175 / 24949
{
	switch (iParam0)
	{
		case 0x00000001:
			return Function_147(StackVal, StackVal, Global_30750[0], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000002:
			return Function_147(StackVal, StackVal, Global_30750[1], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000004:
			return Function_147(StackVal, StackVal, Global_30750[2], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000008:
			return Function_147(StackVal, StackVal, Global_30750[3], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000010:
			return Function_147(StackVal, StackVal, Global_30750[4], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000020:
			return Function_147(StackVal, StackVal, Global_30750[5], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000040:
			return Function_147(StackVal, StackVal, Global_30750[6], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000080:
			return Function_147(StackVal, StackVal, Global_30750[7], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000100:
			return Function_147(StackVal, StackVal, Global_30750[8], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000200:
			return Function_147(StackVal, StackVal, Global_30750[9], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000400:
			return Function_147(StackVal, StackVal, Global_30750[10], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000800:
			return Function_147(StackVal, StackVal, Global_30750[11], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00001000:
			return Function_147(StackVal, StackVal, Global_30750[12], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00002000:
			return Function_147(StackVal, StackVal, Global_30750[13], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return Function_145(StackVal, StackVal, iParam0, bParam1, bParam2, iParam5, vParam6);
}

var Function_145(var uParam0, bool bParam1, bool bParam2, int iParam3, vector3 vParam4) //Position: 0x63CA / 25546
{
	bool bVar0;
	
	bVar0 = CREATE_POPULATION_SET(0);
	if (uParam0 & 1 == 1)
	{
		Function_146(Global_30750[0], bVar0);
	}
	if (uParam0 & 2 == 2)
	{
		Function_146(Global_30750[1], bVar0);
	}
	if (uParam0 & 4 == 4)
	{
		Function_146(Global_30750[2], bVar0);
	}
	if (uParam0 & 8 == 8)
	{
		Function_146(Global_30750[3], bVar0);
	}
	if (uParam0 & 16 == 16)
	{
		Function_146(Global_30750[4], bVar0);
	}
	if (uParam0 & 32 == 32)
	{
		Function_146(Global_30750[5], bVar0);
	}
	if (uParam0 & 64 == 64)
	{
		Function_146(Global_30750[6], bVar0);
	}
	if (uParam0 & 128 == 128)
	{
		Function_146(Global_30750[7], bVar0);
	}
	if (uParam0 & 256 == 256)
	{
		Function_146(Global_30750[8], bVar0);
	}
	if (uParam0 & 512 == 512)
	{
		Function_146(Global_30750[9], bVar0);
	}
	if (uParam0 & 1024 == 1024)
	{
		Function_146(Global_30750[10], bVar0);
	}
	if (uParam0 & 2048 == 2048)
	{
		Function_146(Global_30750[11], bVar0);
	}
	if (uParam0 & 4096 == 4096)
	{
		Function_146(Global_30750[12], bVar0);
	}
	if (uParam0 & 8192 == 8192)
	{
		Function_146(Global_30750[13], bVar0);
	}
	return Function_147(StackVal, StackVal, bVar0, bParam1, bParam2, 4294967295, 0, iParam3, vParam4);
}

void Function_146(bool bParam0, bool bParam1) //Position: 0x651B / 25883
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

var Function_147(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, vector3 vParam6) //Position: 0x65D9 / 26073
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
		Function_152();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, bParam4, iParam5, vParam6);
	if (!Function_24(bVar1))
	{
		if (!Global_30837 && !Global_30838)
		{
			Function_151(bParam0, bParam1, bParam2, bParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_151(bParam0, bParam1, bParam2, bParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && bParam3 != 4294967295)
		{
			while (Function_150(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
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
		else if (!bParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != bParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_24(bVar1))
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

void Function_148(int iParam0) //Position: 0x68CC / 26828
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

void Function_149() //Position: 0x6980 / 27008
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

bool Function_150(bool bParam0) //Position: 0x69BA / 27066
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

void Function_151(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x69E7 / 27111
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

void Function_152() //Position: 0x6B38 / 27448
{
	int iVar0;
	
	if (Global_3402)
	{
		if (StackVal || !Global_30742 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_149();
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
	Function_149();
	return;
}

var Function_153(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x6B83 / 27523
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
	if (iParam2 > 4294967295 || iParam2 <= 1311)
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
		if (((bVar43 == iParam2 && bVar43 == iParam3) && bVar43 == iParam4) && !STRING_CONTAINS_STRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(bVar43), "_cs"))
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

var Function_154(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x6C99 / 27801
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
			Function_133(bParam0[iVar03], 4);
			if (bParam3)
			{
				Function_133(bParam0[iVar03], 8);
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

int Function_155(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x6D69 / 28009
{
	return Function_156(uParam0, uParam1, uParam2, 4294967295, uParam3);
}

var Function_156(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x6D7D / 28029
{
	return Function_147(uParam0, uParam1, uParam2, uParam3, uParam4, 0, 0.0f, 0.0f, 0.0f);
}

bool Function_157() //Position: 0x6D96 / 28054
{
	return (RAND_INT_RANGE(false, 1999) / 1000) != 0;
}

void Function_158(int iParam0, float fParam1) //Position: 0x6DA9 / 28073
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_160(iParam0, 1);
	Function_159(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

void Function_159(var uParam0, int iParam1) //Position: 0x6DCA / 28106
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_160(var uParam0, int iParam1) //Position: 0x6DDD / 28125
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_161(int iParam0) //Position: 0x6DEC / 28140
{
	if (!Function_47(iParam0))
	{
		Function_158(iParam0, 0.0f);
	}
	return;
}

var Function_162(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x6E01 / 28161
{
	int iVar0;
	int iVar1;
	
	if (Global_30842[32])
	{
	}
	iVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_163(uParam0, iVar1, iParam2);
	if (bParam3)
	{
		Function_133(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_163(var uParam0, int iParam1, int iParam2) //Position: 0x6E39 / 28217
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_4(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_133(uParam0[iVar03], 4);
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

var Function_164() //Position: 0x6EFD / 28413
{
	int iVar0;
	
	return iVar0;
}

bool Function_165(bool bParam0) //Position: 0x6F05 / 28421
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(bParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

