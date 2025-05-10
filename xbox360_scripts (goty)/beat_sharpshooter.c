//Decompiled with MagicRDR v1.0
//Function Count : 216
//Statics Count : 155
//Natives Count : 424
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
	float fLocal_21 = 0.0f;
	float fLocal_22 = 0.0f;
	bool bLocal_23 = false;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	bool bLocal_26 = false;
	bool bLocal_27 = false;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	bool bLocal_32 = false;
	bool bLocal_33 = false;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	vector3 vLocal_36 = { 0.0f, 0.0f, 0.0f };
	bool bLocal_39 = false;
	bool bLocal_40 = false;
	var uLocal_41 = 0;
	bool bLocal_42 = false;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	bool bLocal_45 = false;
	int iLocal_46 = 0;
	bool bLocal_47 = false;
	bool bLocal_48 = false;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	var uLocal_60 = 0;
	bool bLocal_61 = false;
	var uLocal_62 = 0;
	bool bLocal_63 = false;
	int iLocal_64 = 0;
	bool bLocal_65 = false;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	char* cLocal_68[64] = "";
	char* cLocal_84[24] = "";
	int iLocal_90 = 0;
	float fLocal_91 = 0.0f;
	bool bLocal_92 = false;
	bool bLocal_93 = false;
	bool bLocal_94 = false;
	bool bLocal_95 = false;
	int iLocal_96 = 0;
	bool bLocal_97 = false;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	char* cLocal_102 = NULL;
	bool bLocal_103 = false;
	struct<57> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6[9];
	var uVar16;
	bool bVar17[9];
	bool bVar27;
	bool bVar85;
	bool bVar86;
	int iVar87;
	int iVar88;
	vector3 vVar89;
	vector3 vVar92;
	vector3 vVar95;
	vector3 vVar98;
	vector3 vVar101;
	vector3 vVar104;
	vector3 vVar107;
	vector3 vVar110;
	bool bVar113;
	int iVar115;
	int iVar116;
	vector3 vVar117;
	bool bVar120;
	bool bVar121;
	vector3 vVar125;
	bool bVar128;
	var uVar129;
	vector3 vVar132;
	bool bVar135;
	var uVar136;
	var uVar137;
	var uVar138;
	float fVar139;
	int iVar140;
	vector3 vVar141;
	int iVar144;
	bool bVar145;
	
	iLocal_14 = 0;
	iLocal_15 = 0;
	fLocal_21 = 0.0f;
	fLocal_22 = 20.0f;
	bLocal_23 = 20;
	iLocal_24 = 0;
	iLocal_25 = 0;
	iLocal_28 = 0;
	bLocal_33 = false;
	iLocal_34 = 0;
	iLocal_35 = 0;
	bLocal_40 = false;
	iLocal_43 = 0;
	bLocal_45 = false;
	iLocal_49 = 0;
	iLocal_50 = 0;
	iLocal_55 = 0;
	iLocal_56 = 0;
	iLocal_57 = 0;
	iLocal_66 = 1;
	strcpy(&cLocal_68, "", 64);
	strcpy(&cLocal_84, "", 24);
	iLocal_90 = 0;
	fLocal_91 = 2.0f;
	bLocal_92 = false;
	bLocal_93 = 9;
	bLocal_95 = 8;
	iLocal_96 = 0;
	bLocal_97 = false;
	iLocal_98 = 1;
	bLocal_103 = false;
	iVar0 = 0;
	bVar1 = false;
	Function_215(&iLocal_29, 0.0f);
	bVar2 = CREATE_LAYOUT(Function_214());
	iVar3 = 0;
	iVar4 = 0;
	bVar27 = 19;
	Function_213(&iLocal_43, 16);
	iVar88 = 0;
	switch (Global_29004)
	{
		case 0x00000002:
		case 0x00000000:
			iVar5 = 139;
			break;
		
		case 0x00000001:
			iVar5 = 529;
			break;
	}
	if (!IS_POPSET_VALID(Global_30750[0]))
	{
		iVar0 = 5;
	}
	else
	{
		iVar87 = 0;
		while (iVar87 <= 9)
		{
			uVar6[iVar87] = Function_204(Global_30750[0], 1, 0, 1);
			iVar87++;
		}
	}
	iVar87 = 0;
	while (iVar87 <= 9)
	{
		Function_203(&bVar27, uVar6[iVar87], 3, 0);
		iVar87++;
	}
	switch (Global_12976.f_148)
	{
		case 0x00000000:
			bLocal_93 = 3;
			fLocal_91 = 5.0f;
			break;
		
		case 0x00000001:
			fLocal_91 = 5.0f;
			break;
		
		case 0x00000002:
			fLocal_91 = 4.0f;
			break;
		
		case 0x00000003:
			fLocal_91 = 3.0f;
			break;
		
		case 0x00000004:
			fLocal_91 = 2.0f;
			break;
		
		case 0x00000005:
			fLocal_91 = 0.0f;
			break;
			break;
	}
	Function_201(&bVar27, "birds_shooting_challenger", 5, 0);
	Function_201(&bVar27, "custom/birds_shooting_challenger", 8, 0);
	Function_201(&bVar27, "thanks", 5, 0);
	Function_201(&bVar27, "custom/thanks", 8, 0);
	Function_203(&bVar27, iVar5, 3, 0);
	Function_201(&bVar27, "stand_lookdistance_w_any", 1, 0);
	Function_200(iVar5);
	vVar89 = { -3.0f, 0.0f, 0.0f };
	vVar92 = { 6.0f, 0.0f, 0.0f };
	vVar95 = { -6.0f, 0.0f, 0.0f };
	vVar98 = { -0.2f, 0.0f, -0.2f };
	vVar101 = { 1.0f, 0.0f, 1.5f };
	vVar104 = { 0.0f, 0.0f, 0.0f };
	vVar107 = { -1.3f, 0.0f, -0.1f };
	vVar110 = { 0.0f, 0.0f, 0.0f };
	iVar115 = 0;
	iVar116 = 0;
	bVar135 = false;
	iVar140 = 0;
	vVar141 = { 0.0f, 0.0f, 0.0f };
	if (Global_3382 == 1)
	{
		iVar0 = 5;
	}
	iVar144 = 0;
	bVar145 = false;
	while (!IS_EXITFLAG_SET())
	{
		bVar120 = GET_PLAYER_ACTOR(0);
		GET_POSITION(bVar120, &vVar117);
		iLocal_64 = 600;
		if (Function_199(&bVar145, &iVar0, &iVar144, &iLocal_64, bVar1))
		{
			if (bVar145)
			{
				Function_198(&bVar121);
			}
			else
			{
				Function_197(&bVar121);
			}
		}
		switch (iVar0)
		{
			case 0x00000000:
				if (Function_191(&bVar27))
				{
					iLocal_64 = 0;
					iVar0 = 1;
				}
				break;
			
			case 0x00000001:
				if (Function_150(&ScriptParam_0, &iLocal_64, &iVar116, &iVar115, 1))
				{
					bVar135 = true;
					bVar86 = CREATE_VOLUME_IN_LAYOUT(bVar2, Function_214(), 0, *(&ScriptParam_0 + 8), 0.0f, 0.0f, 0.0f, 10.0f, 5.0f, 10.0f);
					bVar85 = CREATE_VOLUME_IN_LAYOUT(bVar2, Function_214(), 0, *(&ScriptParam_0 + 8), 0.0f, 0.0f, 0.0f, 40.0f, 15.0f, 40.0f);
					ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar85);
					ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar85);
					CLEAR_AMBIENT_OBJECTS_VOLUME(bVar85, 15);
					vLocal_36 = { StackVal, StackVal, *(&ScriptParam_0 + 8) };
					vLocal_36.f_8 = (vLocal_36.z - 25.0f);
					iVar0 = 8;
					iLocal_64 = 0;
				}
				else if (iVar115 == 1)
				{
					iVar0 = 5;
					iLocal_64 = 0;
				}
				break;
			
			case 0x00000008:
				iVar0 = 2;
				iLocal_64 = 0;
				break;
				break;
			
			case 0x00000002:
				if (VDIST(vVar117, *(&ScriptParam_0 + 8)) > Function_149())
				{
					iVar0 = 5;
					iLocal_64 = 0;
					break;
				}
				PRINTVECTOR(*(&ScriptParam_0 + 8));
				PRINTNL();
				PRINTVECTOR(vVar117);
				PRINTNL();
				Function_147(StackVal, StackVal, &uVar136, &uVar137, &uVar138, 1.5f, *(&ScriptParam_0 + 8));
				bVar113 = CREATE_VOLUME_IN_LAYOUT(bVar2, Function_214(), 3, *(&ScriptParam_0 + 8), 0.0f, 0.0f, 0.0f, 40.0f, 5.0f, 40.0f);
				Function_146(bVar113);
				bLocal_32 = CREATE_VOLUME_IN_LAYOUT(bVar2, Function_214(), 0, *(&ScriptParam_0 + 8), 0.0f, 0.0f, 0.0f, 23.0f, 10.0f, 23.0f);
				Function_145(StackVal, StackVal, StackVal, StackVal, Global_34574, *(&ScriptParam_0 + 8));
				vVar125 = { StackVal, StackVal, Function_145(StackVal, StackVal, StackVal, StackVal, Global_34574, *(&ScriptParam_0 + 8)) };
				bVar128 = UNK_0x9C40E671(&vVar125);
				bVar121 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_214(), bVar2, StackVal) + Vector(vVar89, *(&ScriptParam_0 + 8), iVar5), 0.0f, bVar128, 0.0f);
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bVar121, 0.5f);
				SET_ACTOR_VISION_MAX_RANGE(bVar121, 25.0f, 1);
				Function_144(bVar121, 0.0f, -1.0f, -1.0f);
				Function_143(bVar121);
				SET_ACTOR_CAN_PLAY_GESTURES(bVar121, false);
				vVar110.f_4 = Function_141(StackVal, StackVal, StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar89, *(&ScriptParam_0 + 8), StackVal), vLocal_36);
				bLocal_48 = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_214(), bVar2, StackVal) + Vector(vVar89, *(&ScriptParam_0 + 8), "stand_lookdistance_w_any"), vVar110));
				SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_GRINGO(bLocal_48), 3.0f, true, 1092616192);
				fVar139 = COMBAT_CLASS_AI_GET_RANGE_ACCURACY(bVar121);
				ADD_ACTOR_STAY_WITHIN_VOLUME(bVar121, bVar86);
				Function_139(bVar121);
				GET_OBJECT_RELATIVE_POSITION(bVar121, 0.0f, 0.0f, -10.0f, &vVar132);
				bVar17[0] = CREATE_ACTOR_IN_LAYOUT(bVar2, Function_214(), uVar6[0], vVar132, 0.0f, bVar128, 0.0f);
				ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bVar17[0], bLocal_32);
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bVar17[0], 2.0f);
				SNAP_OBJECT_TO_GROUND(bVar17[0], 4.0f, false, 5.0f);
				bVar17[1] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_214(), bVar2, StackVal) + Vector(vVar98, vVar132, uVar6[1]), 0.0f, bVar128, 0.0f);
				ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bVar17[1], bLocal_32);
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bVar17[1], 2.0f);
				SNAP_OBJECT_TO_GROUND(bVar17[1], 4.0f, false, 5.0f);
				iVar87 = 0;
				while (iVar87 <= 7)
				{
					if (iVar87 + 2 > 9)
					{
						GET_OBJECT_RELATIVE_POSITION(bVar17[0], vVar92, &vVar141);
						vVar92.x = (vVar92.x + 0.8f);
					}
					else
					{
						GET_OBJECT_RELATIVE_POSITION(bVar17[0], vVar95, &vVar141);
						vVar95.x = (vVar95.x + 0.8f);
					}
					bVar17[iVar87 + 2] = CREATE_ACTOR_IN_LAYOUT(bVar2, Function_214(), uVar6[iVar87 + 2], vVar141, 0.0f, bVar128, 0.0f);
					ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bVar17[iVar87 + 2], bLocal_32);
					SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bVar17[iVar87 + 2], 2.0f);
					SNAP_OBJECT_TO_GROUND(bVar17[iVar87 + 2], 4.0f, false, 5.0f);
					iVar87++;
				}
				iVar87 = 0;
				while (iVar87 <= 9)
				{
					if (!Function_138(bVar17[iVar87]))
					{
						Function_130(bVar17[iVar87], 1254, 4294967295, 4294967295, 4294967295, 1, 1, 1);
					}
					iVar87++;
				}
				DELETE_ALL_WEAPONS_FROM_ACTOR(bVar121);
				GIVE_WEAPON_TO_ACTOR(bVar121, bLocal_95, 0, 1, 1);
				ACTOR_PUT_WEAPON_IN_HAND(bVar121, bLocal_95, 1);
				MEMORY_REPORT_POSITION_AUTO(bVar121, bVar120, 1);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar121, 0);
				UNK_0x99AFD2D1(bVar121, 1, 1);
				ACTOR_ENABLE_VARIABLE_MESH(bVar121, 19, true);
				ACTOR_FORCE_WEAPON_RENDER(bVar121, 5, 1);
				iVar0 = 3;
				iLocal_64 = 0;
				break;
			
			case 0x00000003:
				Function_129();
				Function_115(StackVal, StackVal, Function_129(), &bVar1, ScriptParam_0.f_56, bVar121, 60, 0x42700000, 1);
				if (GET_DEBUG_DRAW_STATE())
				{
					if (IS_ACTOR_VALID(bVar121))
					{
						GET_POSITION(bVar121, &uVar129);
						iLocal_64 = 0;
					}
				}
				iVar87 = 0;
				while (iVar87 <= 9)
				{
					if (IS_ACTOR_VALID(bVar17[iVar87]))
					{
						if (Function_114(bVar17[iVar87]) == Global_34573)
						{
							if (iVar88 <= 6)
							{
								RESET_ANIM_SET_FOR_ACTOR(bVar121, 1);
								iVar88 = 11;
								Function_113(Global_34573, bVar121, "SharpshooterPlayer_msg04", "SharpshooterPlayer_msg04", 5, 60, 1, 1);
								bLocal_33 = true;
								iLocal_34 = 1;
							}
							else
							{
								iLocal_34 = 1;
							}
						}
						if (Function_112(bVar17[iVar87], bVar121) > 8.0f && !iLocal_90)
						{
							Function_113(bVar121, Global_34573, "Sharpshooter_msg08", "Sharpshooter_msg08", 5, 60, 1, 1);
							iLocal_90 = 1;
						}
					}
					iVar87++;
				}
				if (Function_109(bVar121, &iLocal_44, &fLocal_21, iLocal_43, 0, 0x40400000))
				{
					HUD_CLEAR_HELP();
					HUD_CLEAR_HELP_QUEUE();
					switch (iLocal_44)
					{
						case 0x00000001:
							Function_108("challengeAggroDanger", iLocal_28, 1);
							Function_107(bVar121);
							TASK_FLEE_ACTOR(bVar121, Global_34573, -1.0f, -1.0f, 0, 0, 0);
							break;
						
						case 0x00000002:
							Function_108("failAggroShot", iLocal_28, 1);
							Function_107(bVar121);
							TASK_FLEE_ACTOR(bVar121, Global_34573, -1.0f, -1.0f, 0, 0, 0);
							break;
						
						case 0x00000004:
							Function_108("failAggroHostile", iLocal_28, 1);
							Function_107(bVar121);
							Function_106(bVar121, &Global_34573);
							break;
						
						case 0x00000008:
							Function_108("challengeAggroAttacked", iLocal_28, 1);
							Function_107(bVar121);
							Function_106(bVar121, &Global_34573);
							break;
					}
					TASK_PRIORITY_SET(bVar121, 2);
					CLEAR_ACTOR_STAY_WITHIN_VOLUME(bVar121);
					AI_GOAL_LOOK_CLEAR(bVar121);
					bLocal_45 = true;
					iVar0 = 5;
					iLocal_64 = 0;
					break;
				}
				if (!Function_79(&bVar121, &bVar120, Function_104(1), 0))
				{
					Function_108("SharpShooter_help06", iLocal_28, 1);
					iVar0 = 5;
					iLocal_64 = 0;
					break;
				}
				switch (iVar3)
				{
					case 0x00000000:
						if (Function_30(&iVar88, bVar121, bVar2, &bVar17, ScriptParam_0.f_56, &uVar16))
						{
							iVar0 = 5;
							iLocal_64 = 0;
						}
						break;
				}
				break;
			
			case 0x00000005:
				iVar0 = 6;
				iLocal_64 = 0;
				break;
			
			case 0x00000006:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				iLocal_64 = 0;
				break;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(iLocal_64);
		}
	}
	iVar87 = 0;
	while (iVar87 <= bVar17)
	{
		if (IS_ACTOR_VALID(bVar17[iVar87]))
		{
			TASK_WANDER(bVar17[iVar87], 3212836864);
			TASK_PRIORITY_SET(bVar17[iVar87], 2);
			Function_28(bVar17[iVar87]);
		}
		iVar87++;
	}
	if (IS_OBJECT_VALID(bLocal_65))
	{
		UNK_0xE18028C1(bLocal_65);
		DESTROY_OBJECT(bLocal_65);
	}
	if (bLocal_103)
	{
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	}
	Function_197(&bVar121);
	if (bLocal_97)
	{
		UI_EXIT("Challenges_1");
		UI_EXIT("Challenges_2");
		UI_EXIT("ChallengePanel");
		UI_POP("Jobs_Games_And_Stuff");
	}
	if (Global_3375 == 0)
	{
		Global_3375 = 1;
		Function_27(8192);
	}
	if (!bVar1)
	{
		Function_21(ScriptParam_0.f_56, 0.0f, 0, 1, 0);
	}
	if (ScriptParam_0.f_32)
	{
		Global_3399 = 0;
	}
	if (IS_VOLUME_VALID(bLocal_47))
	{
		DESTROY_VOLUME(bLocal_47);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(iLocal_46))
	{
		RELEASE_SCRIPT_USE_CONTEXT(iLocal_46);
	}
	if (!bVar1)
	{
		Function_20(&bVar121);
		if (IS_OBJECT_VALID(bVar2))
		{
			UNK_0xA936E73B(bVar2, 1);
			MARK_OBJECT_FOR_AGGRESSIVE_CLEANUP(bVar2, 1);
		}
	}
	else if (Function_18(bVar121, 0))
	{
		Function_17(bVar121, Global_34573, 2, 1);
		COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar121, 13, 0);
		COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bVar121, fVar139);
		TASK_PRIORITY_SET(bVar121, 2);
		Function_107(bVar121);
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(bVar121);
		AI_GOAL_LOOK_CLEAR(bVar121);
		if (!bLocal_45)
		{
			Function_8(bVar121, 4, 0, 1);
		}
		AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar121, 1);
		UNK_0x99AFD2D1(bVar121, 0, 0);
		AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bVar121, 1);
		Function_7(bVar121);
	}
	Function_6(iVar5);
	if (bVar135)
	{
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar85);
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar85);
	}
	Function_5(&uVar136, &uVar137, &uVar138);
	Function_1(&bVar27);
	RELEASE_LAYOUT_REF(bVar2);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0xB01 / 2817
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

void Function_2(var uParam0, int iParam1) //Position: 0xB27 / 2855
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

void Function_3(var uParam0, int iParam1) //Position: 0xC55 / 3157
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_4(var uParam0, int iParam1) //Position: 0xC6F / 3183
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(var uParam0, var uParam1, int iParam2) //Position: 0xC8C / 3212
{
	if (*uParam0 != 4294967295)
	{
		RESET_THIS_TREE_TYPE_CLEARING(*uParam0);
	}
	if (*uParam1 != 4294967295)
	{
		RESET_THIS_BREAKABLE_TREE_CLEARING(*uParam1);
	}
	if (*iParam2 != 4294967295)
	{
		RESET_THIS_TREE_TYPE_CLEARING(*iParam2);
	}
	return;
}

void Function_6(int iParam0) //Position: 0xCB9 / 3257
{
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(iParam0);
	return;
}

void Function_7(bool bParam0) //Position: 0xCC4 / 3268
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		bVar0 = GET_BLIP_ON_OBJECT(bParam0);
		while (IS_BLIP_VALID(bVar0))
		{
			REMOVE_BLIP(bVar0);
			bVar0 = GET_BLIP_ON_OBJECT(bParam0);
		}
	}
	return;
}

int Function_8(bool bParam0, int iParam1, int iParam2, int iParam3) //Position: 0xCF0 / 3312
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
					Function_9(bVar1, 0, 0, 0, 1);
				}
				iVar0++;
			}
		}
		Function_9(bParam0, iParam1, iParam2, iParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_9(bool bParam0, int iParam1, var uParam2, var uParam3, int iParam4) //Position: 0xDD0 / 3536
{
	char* cVar0[32];
	
	Function_16();
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
	if (Function_15(bParam0) == 1)
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
	Function_14(bParam0, 0);
	Function_13(bParam0, iParam1);
	Function_12(bParam0, uParam2);
	Function_11(bParam0, uParam3);
	if (Function_10(bParam0) != 5)
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

int Function_10(bool bParam0) //Position: 0x101E / 4126
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior");
}

void Function_11(bool bParam0, bool bParam1) //Position: 0x1041 / 4161
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_12(bool bParam0, bool bParam1) //Position: 0x1064 / 4196
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_target", bParam1);
	return;
}

void Function_13(bool bParam0, bool bParam1) //Position: 0x1088 / 4232
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_14(bool bParam0, bool bParam1) //Position: 0x10AE / 4270
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_state", bParam1);
	return;
}

int Function_15(bool bParam0) //Position: 0x10D1 / 4305
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
}

void Function_16() //Position: 0x10EF / 4335
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

int Function_17(bool bParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x1139 / 4409
{
	if (IS_ACTOR_VALID(bParam0) && IS_ACTOR_VALID(bParam1))
	{
		if (!bParam0 != GET_PLAYER_ACTOR(0))
		{
			MEMORY_CONSIDER_AS(bParam0, bParam1, iParam2);
			MEMORY_IDENTIFY(bParam0, bParam1);
		}
		if (iParam3 == 1)
		{
			if (!bParam1 != GET_PLAYER_ACTOR(0))
			{
				MEMORY_CONSIDER_AS(bParam1, bParam0, iParam2);
				MEMORY_IDENTIFY(bParam1, bParam0);
			}
		}
	}
	return 1;
}

bool Function_18(bool bParam0, bool bParam1) //Position: 0x118C / 4492
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
			Function_28(bParam0);
			return 0;
		}
		if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 163840))
		{
			Function_28(bParam0);
			return 0;
		}
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		if (Function_19(bParam0, 0) && !AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 16384))
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

int Function_19(bool bParam0, int iParam1) //Position: 0x1228 / 4648
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

void Function_20(int iParam0) //Position: 0x1272 / 4722
{
	if (IS_ACTOR_VALID(*iParam0))
	{
		RESET_ANIM_SET_FOR_ACTOR(*iParam0, 0);
		TASK_FLEE_ACTOR(*iParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
		TASK_PRIORITY_SET(*iParam0, 0);
	}
	return;
}

bool Function_21(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x129D / 4765
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
		Function_23("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
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
			Function_22(bVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_22(bVar0);
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
			Function_22(bVar0);
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

void Function_22(bool bParam0) //Position: 0x14FA / 5370
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

void Function_23(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1540 / 5440
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_24(Global_6269) };
		}
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, &Var0, iParam5);
	}
	else
	{
		iVar4 = "";
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, iVar4, iParam5);
	}
}

struct<16> Function_24(int iParam0) //Position: 0x15B7 / 5559
{
	char* cVar0[16];
	
	if (!Function_25())
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

bool Function_25() //Position: 0x15F6 / 5622
{
	if (Function_26(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_26(int iParam0, int iParam1) //Position: 0x1611 / 5649
{
	return (iParam0 && iParam1) == 0;
}

void Function_27(int iParam0) //Position: 0x161E / 5662
{
	if (Function_26(iParam0, 1) && !Function_26(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || iParam0);
	Global_26119 |= 1073741824;
	return;
}

int Function_28(bool bParam0) //Position: 0x164B / 5707
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_29(bParam0);
		return 1;
	}
	return 0;
}

void Function_29(bool bParam0) //Position: 0x1661 / 5729
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

bool Function_30(var uParam0, bool bParam1, bool bParam2, var uParam3, int iParam4, var uParam5) //Position: 0x168D / 5773
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	fVar2 = 4.0f;
	switch (*uParam0)
	{
		case 0x00000000:
			COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam1, 2.0f);
			bLocal_63 = (*uParam3)[0];
			fVar4 = Function_78(bParam1);
			AI_SET_WEAPON_MAX_RANGE(bParam1, (fVar4 * 1.5f));
			MEMORY_REPORT_POSITION_AUTO(bParam1, bLocal_63, 1);
			Function_77(bParam1, bLocal_63);
			*uParam0 = 1;
			iVar0 = 0;
			while (iVar0 <= *uParam3)
			{
				TASK_FLEE_ACTOR((*uParam3)[iVar0], bParam1, 25.0f, -1.0f, 0, 0, 0);
				TASK_PRIORITY_SET((*uParam3)[iVar0], 1);
				iVar0++;
			}
			break;
		
		case 0x00000001:
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam1, 1.0f, 35.0f, 1, 1, 0))
			{
				iVar0 = 0;
				while (iVar0 <= *uParam3)
				{
					TASK_WANDER((*uParam3)[iVar0], -1.0f);
					TASK_PRIORITY_SET((*uParam3)[iVar0], 1);
					iVar0++;
				}
				iLocal_67 = 0;
				Function_76(&iLocal_67, bParam1, 3212836864);
				AI_GOAL_LOOK_AT_ACTOR_NEW(bParam1, Global_34573, -1f, 0);
				Function_215(&iLocal_29, 0.0f);
				*uParam0 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_75(&iLocal_29, 1.0f))
			{
				if (Function_76(&iLocal_67, bParam1, 3212836864))
				{
					Function_144(bParam1, 300.0f, -1.0f, -1.0f);
					ADD_BLIP_FOR_ACTOR(bParam1, 325, 0.0f, 3, 0);
					Function_73();
					if (Global_16876[706].f_16 == 0)
					{
						Function_113(bParam1, Global_34573, "Sharpshooter_msg01", "Sharpshooter_msg01", 5, 60, 1, 1);
					}
					else
					{
						Function_113(bParam1, Global_34573, "Sharpshooter_msg11", "Sharpshooter_msg11", 5, 60, 1, 1);
					}
					Function_215(&iLocal_29, 0.0f);
					*uParam0 = 3;
				}
			}
			break;
		
		case 0x00000003:
			if ((!IS_AMBIENT_SPEECH_PLAYING(bParam1) && Function_75(&iLocal_29, 3.3f)) || Function_75(&iLocal_29, 6.5f))
			{
				SET_ANIM_SET_FOR_ACTOR(bParam1, "birds_shooting_challenger", 0);
				SET_ACTION_NODE_FOR_ACTOR(bParam1, "birds_shooting_challenger/Talk");
				Function_113(bParam1, Global_34573, "Sharpshooter_msg02", "Sharpshooter_msg02", 5, 60, 1, 1);
				Function_215(&iLocal_29, 0.0f);
				*uParam5 = Function_70();
				*uParam0 = 4;
			}
			break;
		
		case 0x00000004:
			Function_68();
			if (Function_75(&iLocal_29, fVar2))
			{
				stradd(&cLocal_68, I2STR(bLocal_23), 64);
				stradd(&cLocal_68, " ", 64);
				strcpy(&cLocal_84, "ammo_", 24);
				stradd(&cLocal_84, GET_AMMO_ENUM_STRING_FROM_ENUM(*uParam5), 24);
				stradd(&cLocal_68, UI_GET_STRING(&cLocal_84), 64);
				UI_SET_STRING("SharpShooter_dynamicNumber", &cLocal_68);
				bLocal_47 = CREATE_VOLUME_IN_LAYOUT(bParam2, Function_214(), 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 15.0f, 4.0f, 15.0f);
				iLocal_46 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("SharpShooter_AcceptContext", bLocal_47, 25, 5, 0, false, 0, 0, 4294967295, 0);
				ATTACH_OBJECTS(GET_OBJECT_FROM_VOLUME(bLocal_47), bParam1, Function_214(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
				if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam1)))
				{
					ADD_BLIP_FOR_ACTOR(bParam1, 325, 0.0f, 3, 0);
				}
				if (bLocal_39)
				{
					Function_67("SharpShooter_help01", 0x41200000, 1, 0, 2, 1, 0);
				}
				Function_215(&iLocal_29, 0.0f);
				*uParam0 = 5;
			}
			break;
		
		case 0x00000005:
			Function_68();
			if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(iLocal_46))
			{
				if (_GET_AMMO_AMOUNT(Global_34573, *uParam5, 1) <= fLocal_22)
				{
					ACTOR_SET_WEAPON_AMMO(bParam1, bLocal_95, 22.0f);
					_SET_ACTOR_AMMO_OF_TYPE(bParam1, *uParam5, fLocal_22, 0);
					Function_66();
					Function_65();
					if (!IS_AMBIENT_SPEECH_PLAYING(Global_34573))
					{
						Function_113(Global_34573, bParam1, "SharpshooterPlayer_msg01", "SharpshooterPlayer_msg01", 5, 60, 1, 1);
					}
					RELEASE_SCRIPT_USE_CONTEXT(iLocal_46);
					DESTROY_VOLUME(bLocal_47);
					if (!iLocal_49)
					{
						bLocal_26 = CREATE_EVENT_TRAP("killET", 2, bParam2);
						EVENT_TRAP_ON_PERPETRATOR(bLocal_26, Global_34573);
						EVENT_TRAP_STORE_EVENTS(bLocal_26, 1);
						iLocal_49 = 1;
						bLocal_27 = CREATE_EVENT_TRAP("killETAI", 2, bParam2);
						EVENT_TRAP_ON_PERPETRATOR(bLocal_27, bParam1);
						EVENT_TRAP_STORE_EVENTS(bLocal_27, 1);
					}
					Global_3375 = 0;
					Function_64(8192);
					Function_63(*uParam5, fLocal_22, 1);
					DECOR_SET_INT(bParam1, "iSSAmmoType", *uParam5);
					DECOR_SET_FLOAT(bParam1, "fSSAmmoAmt", (fLocal_22 * 2.0f));
					iVar0 = 0;
					while (iVar0 <= *uParam3)
					{
						ADD_BLIP_FOR_ACTOR((*uParam3)[iVar0], 322, 0, 2, 0);
						iVar0++;
					}
					iLocal_28 = 1;
					HUD_CLEAR_HELP();
					Function_17(bParam1, Global_34573, 5, 1);
					SET_ACTOR_CAN_BE_HARDLOCKED(bParam1, 0);
					SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam1, 0);
					AUDIO_MUSIC_SET_MOOD("HIGH_FIGHT_MEDIUM", 0, 4294967295, 4294967295);
					*uParam0 = 6;
				}
				else if (_GET_AMMO_AMOUNT(Global_34573, *uParam5, 1) > fLocal_22)
				{
					HUD_CLEAR_HELP();
					HUD_CLEAR_HELP_QUEUE();
					Function_67("SharpShooter_NotEnoughAmmo", 10.0f, 1, 0, 2, 0, 0);
					RELEASE_SCRIPT_USE_CONTEXT(iLocal_46);
					DESTROY_VOLUME(bLocal_47);
					bLocal_47 = CREATE_VOLUME_IN_LAYOUT(bParam2, Function_214(), 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 15.0f, 4.0f, 15.0f);
					iLocal_46 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("SharpShooter_AcceptContext", bLocal_47, 25, 5, 0, false, 0, 0, 4294967295, 0);
					ATTACH_OBJECTS(GET_OBJECT_FROM_VOLUME(bLocal_47), bParam1, Function_214(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
				}
			}
			else if (Function_75(&iLocal_29, 7.0f))
			{
				*uParam0 = 11;
			}
			break;
		
		case 0x00000006:
			iLocal_58 = 0;
			iLocal_59 = 0;
			bLocal_97 = true;
			UI_ENTER("ChallengePanel");
			UI_ENTER("Challenges_1");
			UI_ENTER("Challenges_2");
			UI_SET_STRING("SharpShooter_zombiesKilledA", I2STR(iLocal_94));
			UI_SET_STRING("SharpShooter_targetA", I2STR(bLocal_93));
			UI_SET_STRING("SharpShooter_zombiesKilledB", I2STR(bLocal_92));
			UI_SET_STRING("SharpShooter_targetB", I2STR(bLocal_93));
			UI_SET_TEXT("Challenges_1", "SharpShooter_scoreA");
			UI_SET_TEXT("Challenges_2", "SharpShooter_scoreB");
			UI_REFRESH("Challenges_1");
			UI_REFRESH("Challenges_2");
			UI_SET_STRING("beat_dynstr", I2STR(bLocal_93));
			Function_62("SharpShooterz_help03", 0x40f00000, 1, 2, 0, 0, 0, 0);
			RESET_ANIM_SET_FOR_ACTOR(bParam1, 1);
			iLocal_64 = 0;
			Function_57(bParam1, uParam3, 0x41000000);
			Function_7(bParam1);
			Function_56(&iLocal_29);
			*uParam0 = 7;
			break;
		
		case 0x00000007:
			if (!iLocal_96)
			{
				if (Function_53(&iLocal_29) < 7.0f)
				{
					UI_SET_STRING("beat_dynstr", I2STR(bLocal_93));
					Function_67("SharpShooterz_help07", 0x41200000, 1, 0, 2, 1, 0);
					iLocal_96 = 1;
				}
			}
			iLocal_64 = 0;
			Function_57(bParam1, uParam3, 15.0f);
			iVar0 = Function_52(bParam2, bLocal_26);
			iVar1 = Function_52(bParam2, bLocal_27);
			if (iVar0 >= 0)
			{
				HUD_CLEAR_HELP_QUEUE();
				bLocal_94 = (bLocal_94 + iVar0);
				UI_SET_STRING("SharpShooter_zombiesKilledA", I2STR(bLocal_94));
				UI_SET_STRING("SharpShooter_targetA", I2STR(bLocal_93));
				UI_REFRESH("Challenges_1");
			}
			if (iVar1 >= 0)
			{
				if (bLocal_92 == 2)
				{
					if (!IS_AMBIENT_SPEECH_PLAYING(bParam1))
					{
						Function_113(bParam1, Global_34573, "Sharpshooter_msg07", "Sharpshooter_msg07", 5, 60, 1, 1);
					}
				}
				else if (bLocal_92 == 3)
				{
					if (bLocal_92 <= bLocal_94 && !IS_AMBIENT_SPEECH_PLAYING(bParam1))
					{
						Function_113(bParam1, Global_34573, "Sharpshooter_msg06", "Sharpshooter_msg06", 5, 60, 1, 1);
					}
				}
				HUD_CLEAR_HELP_QUEUE();
				bLocal_92 = (bLocal_92 + iVar1);
				UI_SET_STRING("SharpShooter_zombiesKilledB", I2STR(bLocal_92));
				UI_SET_STRING("SharpShooter_targetB", I2STR(bLocal_93));
				UI_REFRESH("Challenges_2");
			}
			if ((bLocal_94 + bLocal_92) + 1 < 4 && !iLocal_56)
			{
				Function_51(uParam3, bParam1);
				iLocal_56 = 1;
			}
			bLocal_61 = false;
			iVar0 = 0;
			while (iVar0 <= 9)
			{
				if (IS_ACTOR_VALID((*uParam3)[iVar0]))
				{
					bLocal_61 = true;
				}
				iVar0++;
			}
			if (!bLocal_61)
			{
				if (bLocal_92 > bLocal_94)
				{
					UI_SET_STRING("SharpShooter_zombiesKilledA", I2STR(bLocal_94));
					UI_SET_STRING("SharpShooter_targetA", I2STR(bLocal_93));
					UI_SET_STRING("SharpShooter_zombiesKilledB", I2STR(bLocal_92));
					UI_SET_STRING("SharpShooter_targetB", I2STR(bLocal_93));
					UI_REFRESH("Challenges_2");
					UI_EXIT("Challenges_1");
					UI_EXIT("Challenges_2");
					if (bLocal_103)
					{
						AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
					}
					iLocal_67 = 0;
					Function_76(&iLocal_67, bParam1, 3212836864);
					iLocal_28 = 0;
					Function_50();
					HUD_CLEAR_HELP_QUEUE();
					iVar0 = 0;
					while (iVar0 <= *uParam3)
					{
						Function_28((*uParam3)[iVar0]);
						iVar0++;
					}
					Function_108("SharpShooterz_help05", 1, 0);
					*uParam0 = 10;
					break;
				}
				else if (bLocal_94 >= bLocal_92)
				{
					MEMORY_CLEAR_EVENTS(bParam1, 1);
					iVar0 = 0;
					while (iVar0 <= *uParam3)
					{
						Function_28((*uParam3)[iVar0]);
						iVar0++;
					}
					iLocal_67 = 0;
					Function_76(&iLocal_67, bParam1, 3212836864);
					iLocal_28 = 0;
					HUD_CLEAR_HELP_QUEUE();
					if (bLocal_103)
					{
						AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
					}
					uLocal_41 = "Sharpshooter_msg09";
					bLocal_42 = "SharpshooterPlayer_msg02";
					iLocal_58 = 1;
					_ADD_AMMO_OF_TYPE(Global_34573, *uParam5, (fLocal_22 * 2.0f), 0, 1);
					fVar3 = _GET_AMMO_AMOUNT(bParam1, *uParam5, 0);
					_SET_ACTOR_AMMO_OF_TYPE(bParam1, *uParam5, (fVar3 - fLocal_22), 0);
					Function_35(70);
					Global_12976.f_148++;
					Function_215(&iLocal_29, 0.0f);
					*uParam0 = 8;
				}
			}
			break;
		
		case 0x00000008:
			Function_68();
			if (!iLocal_50)
			{
			}
			if (Function_76(&iLocal_67, bParam1, 3212836864))
			{
				if (bLocal_97)
				{
					UI_EXIT("Challenges_1");
					UI_EXIT("Challenges_2");
					UI_EXIT("ChallengePanel");
					UI_POP("Jobs_Games_And_Stuff");
					bLocal_97 = false;
				}
				Function_34(iParam4, 0);
				*uParam0 = 12;
			}
			else if (Function_75(&iLocal_29, 3.0f) && bLocal_97)
			{
				UI_EXIT("Challenges_1");
				UI_EXIT("Challenges_2");
				UI_EXIT("ChallengePanel");
				UI_POP("Jobs_Games_And_Stuff");
				bLocal_97 = false;
			}
			break;
		
		case 0x0000000A:
			Function_68();
			if (!iLocal_50)
			{
				iLocal_50 = 1;
			}
			if (Function_76(&iLocal_67, bParam1, 3212836864) && iLocal_50)
			{
				SET_ANIM_SET_FOR_ACTOR(bParam1, "birds_shooting_challenger", 0);
				SET_ACTION_NODE_FOR_ACTOR(bParam1, "birds_shooting_challenger/win");
				Function_113(bParam1, Global_34573, "Sharpshooter_msg10", "Sharpshooter_msg10", 5, 60, 1, 1);
				Function_34(iParam4, 0);
				Function_215(&iLocal_29, 0.0f);
				bLocal_94 = false;
				Function_35(70);
				*uParam0 = 13;
			}
			break;
		
		case 0x0000000B:
			if (IS_VOLUME_VALID(bLocal_47))
			{
				DESTROY_VOLUME(bLocal_47);
			}
			if (IS_SCRIPT_USE_CONTEXT_VALID(iLocal_46))
			{
				RELEASE_SCRIPT_USE_CONTEXT(iLocal_46);
			}
			if (!iLocal_35)
			{
				if (Function_112(bParam1, Global_34573) > 40.0f)
				{
					if (bLocal_33)
					{
						if (iLocal_24 == 0)
						{
							if (!IS_AMBIENT_SPEECH_PLAYING(Global_34573) && !IS_AMBIENT_SPEECH_PLAYING(bParam1))
							{
								Function_113(bParam1, Global_34573, "Sharpshooter_msg04", "Sharpshooter_msg04", 5, 60, 1, 1);
								iLocal_24++;
							}
						}
						else if (iLocal_24 == 1)
						{
							if (!IS_AMBIENT_SPEECH_PLAYING(bParam1))
							{
								Function_113(bParam1, Global_34573, "Sharpshooter_msg05", "Sharpshooter_msg05", 5, 60, 1, 1);
								iLocal_35 = 1;
							}
						}
					}
					else
					{
						Function_113(bParam1, Global_34573, "Sharpshooter_msg03", "Sharpshooter_msg03", 5, 60, 1, 1);
						iLocal_35 = 1;
					}
				}
			}
			fLocal_91 = 4.0f;
			iLocal_64 = 0;
			Function_57(bParam1, uParam3, 15.0f);
			Function_33(uParam3, 9, &uLocal_60, &bLocal_61, 0);
			if (!bLocal_61 && iLocal_34)
			{
				Function_34(iParam4, 0);
				uLocal_41 = "nthank_you";
				*uParam0 = 12;
			}
			else if (!bLocal_61)
			{
				Function_8(bParam1, 2, 0, 4);
			}
			break;
		
		case 0x0000000C:
			Function_68();
			if (Function_112(Global_34573, bParam1) > 50.0f)
			{
				if (Function_31(&bParam1, &Global_34573, &uLocal_54, &iLocal_55, &iLocal_29, bParam2, 30.0f, &iLocal_57, uLocal_62, &iLocal_64, "thanks", "thanks", uLocal_41, uLocal_41, 30.0f, 2, -5.0f, 0, 4.0f, 0, "", 1, 0, 0, 0x40800000))
				{
					if (iLocal_57 == 1)
					{
						if (iLocal_58 != 1 && !(IS_AMBIENT_SPEECH_PLAYING(Global_34573) || IS_AMBIENT_SPEECH_PLAYING(bParam1)))
						{
							Function_113(Global_34573, bParam1, bLocal_42, bLocal_42, 5, 60, 1, 1);
						}
						AI_GOAL_LOOK_CLEAR(bParam1);
						MEMORY_CLEAR_EVENTS(bParam1, 1);
						MEMORY_CLEAR_ALL(bParam1);
						MEMORY_CONSIDER_AS(bParam1, Global_34573, 5);
						AI_GLOBAL_CLEAR_DANGER(Global_34573);
						Function_8(bParam1, 4, 0, 4);
						Function_215(&iLocal_29, 0.0f);
						bLocal_45 = true;
						return 1;
					}
				}
			}
			break;
		
		case 0x0000000D:
			Function_68();
			if (!IS_AMBIENT_SPEECH_PLAYING(bParam1) && iLocal_59 != 0)
			{
				iLocal_59 = 1;
				Function_113(Global_34573, bParam1, "SharpShooterPlayer_msg03", "SharpShooterPlayer_msg03", 5, 60, 1, 1);
			}
			if (!IS_AMBIENT_SPEECH_PLAYING(Global_34573) && !IS_AMBIENT_SPEECH_PLAYING(bParam1))
			{
				Function_8(bParam1, 4, 0, 4);
				return 1;
			}
			break;
		
		case 0x0000000E:
			if (Function_75(&iLocal_29, 8.0f))
			{
				Function_67("AM_SS_HLP_2", 0x41200000, 1, 0, 2, 1, 0);
				return 1;
			}
			break;
	}
	return 0;
}

bool Function_31(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, bool bParam5, float fParam6, var uParam7, bool bParam8, var uParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, int iParam15, float fParam16, bool bParam17, var uParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, var uParam23, float fParam24) //Position: 0x26B1 / 9905
{
	int iVar0;
	
	*uParam9 = *uParam9;
	uParam18 = uParam18;
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
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(*uParam0, 1);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(*uParam0, 0);
				*uParam2 = Function_112(*uParam0, Global_34573);
				AI_GOAL_LOOK_AT_ACTOR_NEW(*uParam0, *uParam1, -1.0f, 1);
				bParam8 = CREATE_POINT_IN_LAYOUT(bParam5, Function_214(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
				ATTACH_OBJECTS(bParam8, *uParam1, Function_214(), 0.0f, 0.5f, fParam16, 0.0f, 0.0f, 0.0f, 4294967295);
				if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), *uParam0, 1.0f, iParam14, 1, 1, 0) || Function_112(Global_34573, *uParam0) > 2.0f)
				{
					TASK_FOLLOW_OBJECT_AT_DISTANCE(*uParam0, bParam8, 1.0f, iParam15);
					TASK_PRIORITY_SET(*uParam0, 1);
				}
				*uParam3 = 1;
			}
			break;
		
		case 0x00000001:
			if ((Function_112(*uParam0, *uParam1) - *uParam2) < fParam6)
			{
				TASK_FLEE_ACTOR(*uParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
				return 0;
			}
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), *uParam0, 1.0f, iParam14, 1, 1, 0))
			{
				iVar0 = TASK_SEQUENCE_OPEN();
				TASK_FACE_ACTOR(false, *uParam1, 0, 3212836864);
				TASK_FACE_ACTOR(false, *uParam1, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(*uParam0, iVar0);
				TASK_SEQUENCE_RELEASE(iVar0, 1);
				TASK_PRIORITY_SET(*uParam0, 1);
				*uParam9 = 0;
				*uParam3 = 4;
			}
			else if (!Function_18(*uParam0, 0))
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
			if (GET_NTH_TASK_STATUS(*uParam0, false) != 0 || bParam21)
			{
				if (!bParam21)
				{
					SET_ANIM_SET_FOR_ACTOR(*uParam0, bParam10, 1);
					SET_ACTION_NODE_FOR_ACTOR(*uParam0, bParam11);
				}
				if (bParam19)
				{
					Function_113(*uParam0, Global_34573, "nThank_You", 0, 5, 60, 1, 1);
				}
				else
				{
					Function_113(*uParam0, Global_34573, bParam12, bParam13, 5, 60, 1, 1);
				}
				*uParam3 = 5;
				Function_215(iParam4, 0.0f);
			}
			else if (!Function_18(*uParam0, 0))
			{
				return 0;
			}
			break;
		
		case 0x00000005:
			if (uParam23 && !Function_32(*uParam0))
			{
				if (fParam24 != -1.0f)
				{
					if (!IS_AMBIENT_SPEECH_PLAYING(*uParam0))
					{
						RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
						Function_8(*uParam0, 4, 0, 1);
					}
				}
				else if (Function_75(iParam4, fParam24))
				{
					RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
					Function_8(*uParam0, 4, 0, 1);
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
							Function_113(Global_34573, *uParam0, bParam20, bParam20, 5, 60, 1, 1);
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
			if (uParam23 && !Function_32(*uParam0))
			{
				if (Function_75(iParam4, fParam24))
				{
					RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
					Function_8(*uParam0, 4, 0, 1);
				}
			}
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(*uParam0, bParam11) && !IS_AMBIENT_SPEECH_PLAYING(Global_34573))
			{
				RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
				*uParam7 = 1;
				if (bParam17)
				{
					Function_8(*uParam0, 4, 0, iParam15);
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

bool Function_32(bool bParam0) //Position: 0x2A57 / 10839
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

void Function_33(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x2A7C / 10876
{
	int iVar0;
	
	*uParam2 = 1;
	*uParam3 = 0;
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		if (Function_18((*uParam0)[iVar0], bParam4))
		{
			*uParam3 = 1;
		}
		else
		{
			*uParam2 = 0;
		}
		iVar0++;
	}
}

void Function_34(int iParam0, int iParam1) //Position: 0x2AB8 / 10936
{
	switch (iParam0)
	{
		case 0x00000036:
		case 0x00000039:
		case 0x0000003A:
		case 0x00000041:
		case 0x00000043:
		case 0x0000004A:
		case 0x0000003B:
		case 0x00000037:
			iParam1 = iParam1;
			break;
		
		case 0x00000038:
		case 0x00000047:
		case 0x0000003C:
			break;
		
		case 0x00000040:
		case 0x0000003F:
		case 0x00000044:
			break;
		
		case 0x00000046:
		case 0x00000048:
		case 0x00000049:
			break;
	}
	return;
}

void Function_35(int iParam0) //Position: 0x2B3B / 11067
{
	Global_16876[iParam06].f_16++;
	if (Global_16876[iParam06].f_16 == 1)
	{
		Function_36(409, 1, 0, 0);
	}
	return;
}

int Function_36(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x2B6C / 11116
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
	Function_49(iParam0, TO_FLOAT(bParam1), 1);
	Function_48(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_37(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_37(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x2D8C / 11660
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_47(390))), 32);
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
					bVar19 = (Function_46(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_46(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_44(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_41(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_39(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_38(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_214(), &Var9);
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

var Function_38(int iParam0) //Position: 0x33B9 / 13241
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_39(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x33CA / 13258
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_40("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_40("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_40("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_40(char* cParam0, bool bParam1) //Position: 0x34BF / 13503
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_41(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x34D8 / 13528
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_43(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_42(Function_43(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_42(int iParam0, int iParam1) //Position: 0x353D / 13629
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_43(int iParam0, int iParam1) //Position: 0x354F / 13647
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_44(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x3561 / 13665
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
	if (((Function_45(iParam0) != 19 || Function_45(iParam0) != 17) || Function_45(iParam0) != 10) || Function_45(iParam0) != 9)
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

int Function_45(int iParam0) //Position: 0x3691 / 13969
{
	return Global_35278[iParam020].f_48;
}

float Function_46(int iParam0) //Position: 0x36A0 / 13984
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_47(int iParam0) //Position: 0x36D9 / 14041
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_48(int iParam0) //Position: 0x3716 / 14102
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

int Function_49(int iParam0, bool bParam1, bool bParam2) //Position: 0x38B0 / 14512
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
			Global_34581[iVar1] = (Global_34581[iVar1] + bParam1);
		}
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

void Function_50() //Position: 0x3AF4 / 15092
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

void Function_51(var uParam0, bool bParam1) //Position: 0x3B7D / 15229
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	
	iVar2 = 0;
	bVar4 = 0.0f;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (IS_ACTOR_VALID((*uParam0)[iVar0]))
		{
			iVar2++;
			if (Function_112((*uParam0)[iVar0], Global_34573) > Function_112((*uParam0)[iVar0], bParam1))
			{
				bVar3 = Global_34573;
			}
			else
			{
				bVar3 = bParam1;
			}
			if (iVar2 > 2)
			{
				bVar4 = RAND_FLOAT_RANGE(3.0f, 6.0f);
			}
			iVar1 = TASK_SEQUENCE_OPEN();
			TASK_WANDER(false, bVar4);
			TASK_MELEE_ATTACK(false, bVar3, -1.0f);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM((*uParam0)[iVar0], iVar1);
			TASK_SEQUENCE_RELEASE(iVar1, 1);
			TASK_PRIORITY_SET(bParam1, 1);
		}
		iVar0++;
	}
	return;
}

int Function_52(bool bParam0, bool bParam1) //Position: 0x3C0E / 15374
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	bool bVar7;
	
	iVar6 = 0;
	if (EVENT_TRAP_SUCCESSFUL_TRAP(bParam1))
	{
		bVar0 = CREATE_OBJECT_ITERATOR(bParam0);
		ITERATE_IN_EVENT_TRAP(bVar0, bParam1);
		bVar7 = START_OBJECT_ITERATOR(bVar0);
		if (IS_OBJECT_VALID(bVar7))
		{
			while (IS_OBJECT_VALID(bVar7))
			{
				bVar1 = GET_EVENT_FROM_OBJECT(bVar7);
				bVar2 = GET_EVENT_TARGET_AS_OBJECT(bVar1);
				bVar3 = GET_EVENT_PERPETRATOR(bVar1);
				bVar4 = GET_ACTOR_FROM_OBJECT(bVar2);
				bVar5 = GET_ACTOR_FROM_OBJECT(bVar3);
				bVar5 = bVar5;
				if (IS_ACTOR_VALID(bVar4))
				{
					if (Function_138(bVar4))
					{
						iVar6++;
					}
				}
				bVar7 = OBJECT_ITERATOR_NEXT(bVar0);
			}
			EVENT_TRAP_CLEAR_EVENTS(bParam1);
		}
		EVENT_TRAP_CLEAR_TRAP_FLAG(bParam1);
	}
	if (IS_ITERATOR_VALID(bVar0))
	{
		DESTROY_ITERATOR(bVar0);
	}
	return iVar6;
}

float Function_53(int iParam0) //Position: 0x3CA7 / 15527
{
	if (Function_55(iParam0))
	{
		if (Function_54(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_54(int iParam0) //Position: 0x3D6F / 15727
{
	return Function_26(*iParam0, 2);
}

bool Function_55(int iParam0) //Position: 0x3D7C / 15740
{
	return Function_26(*iParam0, 1);
}

void Function_56(int iParam0) //Position: 0x3D89 / 15753
{
	Function_215(iParam0, 0.0f);
	return;
}

int Function_57(bool bParam0, var uParam1, float fParam2) //Position: 0x3D95 / 15765
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar5;
	bool bVar6;
	int iVar7;
	float fVar8;
	
	switch (iLocal_25)
	{
		case 0x00000000:
			if (Function_112(Global_34573, bParam0) > 15.0f)
			{
				bLocal_40 = true;
			}
			iVar5 = 0;
			while (iVar5 <= *uParam1)
			{
				if ((iVar5 % 2) != 0 || !bLocal_40)
				{
					bVar6 = bParam0;
				}
				else
				{
					bVar6 = Global_34573;
				}
				if ((iVar5 % 4) == 0)
				{
					iVar7 = 2;
				}
				else
				{
					iVar7 = 1;
				}
				iVar1 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_ACTOR(0, bVar6, 5.0f, iVar7);
				TASK_MELEE_ATTACK(false, bVar6, -1.0f);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM((*uParam1)[iVar5], iVar1);
				TASK_SEQUENCE_RELEASE(iVar1, 1);
				TASK_PRIORITY_SET((*uParam1)[iVar5], 1);
				REMOVE_ACTOR_STAY_OUTSIDE_OF_VOLUME((*uParam1)[iVar5], bLocal_32);
				ADD_ACTOR_STAY_WITHIN_VOLUME((*uParam1)[iVar5], bLocal_32);
				iVar5++;
			}
			iLocal_64 = 0;
			iLocal_25 = 1;
			break;
		
		case 0x00000001:
			Function_215(&iLocal_51, 0.0f);
			iVar0 = Function_61(bParam0, uParam1);
			if (iLocal_66)
			{
				iVar0 = 0;
				iLocal_66 = 0;
			}
			if (iVar0 != 4294967295)
			{
				if (Function_18((*uParam1)[iVar0], 0))
				{
					bLocal_63 = (*uParam1)[iVar0];
					fVar8 = Function_78(bParam0);
					AI_SET_WEAPON_MAX_RANGE(bParam0, (fVar8 * 1.5f));
					MEMORY_REPORT_POSITION_AUTO(bParam0, bLocal_63, 1);
					Function_60(bParam0);
					vVar2 = { StackVal, StackVal, Function_60(bParam0) };
					iVar1 = TASK_SEQUENCE_OPEN();
					TASK_SHOOT_FROM_POSITION(false, bLocal_63, &vVar2);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bParam0, iVar1);
					TASK_SEQUENCE_RELEASE(iVar1, 1);
					TASK_PRIORITY_SET(bParam0, 1);
					iLocal_64 = 0;
					iLocal_25 = 2;
					break;
				}
			}
			iLocal_25 = 4;
			break;
		
		case 0x00000002:
			if (Function_18(bLocal_63, 0))
			{
				Function_59(bParam0, uParam1);
				if ((Function_75(&iLocal_51, fLocal_91) || Function_112(bLocal_63, bParam0) > fParam2) || Function_58(bParam0, uParam1, 10.0f))
				{
					Function_144(bParam0, 200.0f, -1.0f, -1.0f);
					SET_ACTOR_ONE_SHOT_DEATH(bLocal_63, 1);
					AI_SHOOT_TARGET_SET_BONE(bParam0, bLocal_63, "head");
					iLocal_64 = 0;
					iLocal_25 = 3;
				}
			}
			else
			{
				iLocal_64 = 0;
				iLocal_25 = 1;
			}
			break;
		
		case 0x00000003:
			if (IS_ACTOR_VALID(bLocal_63))
			{
				if (!IS_ACTOR_ALIVE(bLocal_63))
				{
					if (GET_LAST_ATTACKER(bLocal_63) == bParam0)
					{
						iLocal_64 = 0;
						iLocal_25 = 1;
						break;
					}
					else
					{
						iLocal_64 = 0;
						iLocal_25 = 1;
					}
				}
			}
			else
			{
				iLocal_64 = 0;
				iLocal_25 = 1;
			}
			break;
		
		case 0x00000004:
			break;
	}
	return 0;
}

int Function_58(bool bParam0, var uParam1, float fParam2) //Position: 0x3F99 / 16281
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *uParam1)
	{
		if (IS_ACTOR_VALID((*uParam1)[iVar0]))
		{
			if (Function_112((*uParam1)[iVar0], bParam0) > fParam2)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int Function_59(bool bParam0, int iParam1) //Position: 0x3FD3 / 16339
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	
	fVar5 = Function_112(bParam0, bLocal_63);
	iVar0 = 0;
	while (iVar0 <= *iParam1)
	{
		if (IS_ACTOR_VALID((*iParam1)[iVar0]))
		{
			if (Function_112(bParam0, (*iParam1)[iVar0]) > (fVar5 - 6.0f))
			{
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_63, 6.0f);
				bLocal_63 = (*iParam1)[iVar0];
				Function_60(bParam0);
				vVar2 = { StackVal, StackVal, Function_60(bParam0) };
				iVar1 = TASK_SEQUENCE_OPEN();
				TASK_SHOOT_FROM_POSITION(false, bLocal_63, &vVar2);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bParam0, iVar1);
				TASK_SEQUENCE_RELEASE(iVar1, 1);
				TASK_PRIORITY_SET(bParam0, 1);
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

vector3 Function_60(bool bParam0) //Position: 0x405B / 16475
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

var Function_61(bool bParam0, bool bParam1) //Position: 0x406C / 16492
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = 4294967295;
	fVar2 = 10000.0f;
	iVar0 = 0;
	while (iVar0 <= *bParam1)
	{
		if (IS_ACTOR_VALID((*bParam1)[iVar0]))
		{
			if (IS_ACTOR_ALIVE((*bParam1)[iVar0]))
			{
				fVar3 = Function_112(bParam0, (*bParam1)[iVar0]);
				if (fVar3 > fVar2)
				{
					fVar2 = fVar3;
					iVar1 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

void Function_62(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x40C7 / 16583
{
	struct<4> Var0;
	int iVar4;
	
	if (bParam4)
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_24(Global_6269) };
		}
		PRINT_OBJECTIVE_B(iParam0, iParam1, iParam7, iParam3, iParam2, &Var0, 0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_OBJECTIVE_B(iParam0, iParam1, iParam7, iParam3, iParam2, iVar4, iParam5, iParam6);
	}
}

void Function_63(bool bParam0, bool bParam1, bool bParam2) //Position: 0x414C / 16716
{
	bool bVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	bool bVar5;
	bool bVar6;
	
	bVar0 = GET_WEAPONENUM_FOR_AMMOENUM(Global_34573, bParam0);
	fVar1 = _GET_AMMO_AMOUNT(Global_34573, bParam0, 0);
	fVar2 = ACTOR_GET_WEAPON_AMMO(Global_34573, bVar0);
	if (fVar1 <= bParam1)
	{
		fVar3 = bParam1;
		fVar4 = 0.0f;
	}
	else
	{
		fVar3 = fVar1;
		fVar4 = (bParam1 - fVar3);
	}
	if (fVar4 == 0.0f)
	{
		ACTOR_SET_WEAPON_AMMO(Global_34573, bVar0, (fVar2 - fVar4));
	}
	if (fVar3 == 0.0f)
	{
		_SET_ACTOR_AMMO_OF_TYPE(Global_34573, bParam0, (fVar1 - fVar3), 0);
	}
	if (bParam2)
	{
		bVar5 = FLOOR(bParam1);
		bVar5 = (bVar5 * 4294967295);
		if (bParam0 == 10)
		{
			bVar6 = "ammo_shotgun";
		}
		else if (bParam0 == 8)
		{
			bVar6 = "ammo_repeater";
		}
		else if (bParam0 == 7)
		{
			bVar6 = "ammo_revolver";
		}
		else if (bParam0 == 11)
		{
			bVar6 = "ammo_sniperrifle";
		}
		else if (bParam0 == 6)
		{
			bVar6 = "ammo_pistol";
		}
		else if (bParam0 == 9)
		{
			bVar6 = "ammo_rifle";
		}
		SET_STAT_MESSAGE(STRING_TO_HASH(bVar6), INT_TO_STRING(bVar5), 5.0f, Function_214(), 2, 4294967295, 0, 1, 0, 0, 0, 0, 0);
	}
	return;
}

void Function_64(int iParam0) //Position: 0x4283 / 17027
{
	int iVar0;
	
	if (Function_26(iParam0, 1) && Function_26(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

void Function_65() //Position: 0x42B7 / 17079
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_66() //Position: 0x42CC / 17100
{
	if (iLocal_98 == 1)
	{
		Function_213(&iLocal_43, 16);
		Function_213(&iLocal_43, 2);
		iLocal_98 = 0;
	}
	return;
}

void Function_67(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x42E8 / 17128
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_24(Global_6269) };
		}
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, uVar4, iParam6);
	}
}

void Function_68() //Position: 0x4363 / 17251
{
	if (!Function_55(&iLocal_99))
	{
		Function_69(&iLocal_99);
	}
	if (iLocal_98 == 0)
	{
		if (Function_75(&iLocal_99, 5.0f))
		{
			iLocal_43 = 0;
			Function_213(&iLocal_43, 16);
			iLocal_98 = 1;
		}
	}
	return;
}

void Function_69(int iParam0) //Position: 0x4393 / 17299
{
	if (!Function_55(iParam0))
	{
		Function_215(iParam0, 0.0f);
	}
	return;
}

int Function_70() //Position: 0x43A8 / 17320
{
	int iVar0;
	var uVar1[6];
	var uVar8[6];
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	
	iVar15 = 0;
	iVar16 = 0;
	Function_71(Global_34573, &uVar1, &uVar8, &iVar15, &iVar16);
	if (iVar15 >= 0)
	{
		iVar17 = RAND_INT_RANGE(0, (iVar15 - 1));
		iVar0 = GET_AMMO_ENUM(uVar1[iVar17]);
		return iVar0;
	}
	if (iVar16 >= 0)
	{
		iVar18 = RAND_INT_RANGE(0, (iVar16 - 1));
		iVar0 = GET_AMMO_ENUM(uVar8[iVar18]);
		return iVar0;
	}
	return 7;
}

void Function_71(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x440F / 17423
{
	*uParam3 = 0;
	*uParam4 = 0;
	if (Function_72(bParam0, 39) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(bParam0, 6, 1) <= (3.0f * fLocal_22))
		{
			(*uParam2)[*uParam4] = 0;
			*uParam4++;
		}
		else if (_GET_AMMO_AMOUNT(bParam0, 6, 1) <= fLocal_22)
		{
			(*uParam1)[*uParam3] = 0;
			*uParam3++;
		}
	}
	if (Function_72(bParam0, 41) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(bParam0, 8, 1) <= (3.0f * fLocal_22))
		{
			(*uParam2)[*uParam4] = bLocal_95;
			*uParam4++;
		}
		else if (_GET_AMMO_AMOUNT(bParam0, 8, 1) <= fLocal_22)
		{
			(*uParam1)[*uParam3] = bLocal_95;
			*uParam3++;
		}
	}
	if (Function_72(bParam0, 40) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(bParam0, 7, 1) <= (3.0f * fLocal_22))
		{
			(*uParam2)[*uParam4] = 4;
			*uParam4++;
		}
		else if (_GET_AMMO_AMOUNT(bParam0, 7, 1) <= fLocal_22)
		{
			(*uParam1)[*uParam3] = 4;
			*uParam3++;
		}
	}
	if (Function_72(bParam0, 42) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(bParam0, 9, 1) <= (3.0f * fLocal_22))
		{
			(*uParam2)[*uParam4] = 12;
			*uParam4++;
		}
		else if (_GET_AMMO_AMOUNT(bParam0, 9, 1) <= fLocal_22)
		{
			(*uParam1)[*uParam3] = 12;
			*uParam3++;
		}
	}
	if (Function_72(bParam0, 43) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(bParam0, 10, 1) <= (3.0f * fLocal_22))
		{
			(*uParam2)[*uParam4] = 17;
			*uParam4++;
		}
		else if (_GET_AMMO_AMOUNT(bParam0, 10, 1) <= fLocal_22)
		{
			(*uParam1)[*uParam3] = 17;
			*uParam3++;
		}
	}
	if (Function_72(bParam0, 44) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(bParam0, 11, 1) <= (3.0f * fLocal_22))
		{
			(*uParam2)[*uParam4] = 19;
			*uParam4++;
		}
		else if (_GET_AMMO_AMOUNT(bParam0, 11, 1) <= fLocal_22)
		{
			(*uParam1)[*uParam3] = 19;
			*uParam3++;
		}
	}
}

int Function_72(bool bParam0, int iParam1) //Position: 0x45EB / 17899
{
	int iVar0;
	
	iVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(bParam0, iParam1);
	return iVar0;
}

void Function_73() //Position: 0x45FC / 17916
{
	int iVar0;
	
	bLocal_103 = true;
	if (Global_29004 == 0)
	{
		iVar0 = Function_74(4);
		if (iVar0 == 0)
		{
			cLocal_102 = "TC_FTR_SONG_01";
		}
		else if (iVar0 == 1)
		{
			cLocal_102 = "TC_FTR_SONG_02";
		}
		else if (iVar0 == 2)
		{
			cLocal_102 = "TC_FTR_SONG_03";
		}
		else if (iVar0 == 3)
		{
			cLocal_102 = "TC_FTR_SONG_04";
		}
	}
	else if (Global_29004 == 2)
	{
		iVar0 = Function_74(2);
		if (iVar0 == 0)
		{
			cLocal_102 = "TC_NRT_SONG_01";
		}
		else if (iVar0 == 1)
		{
			cLocal_102 = "TC_NRT_SONG_02";
		}
	}
	else if (Global_29004 == 1)
	{
		iVar0 = Function_74(2);
		if (iVar0 == 0)
		{
			cLocal_102 = "TC_MEX_SONG_01";
		}
		else if (iVar0 == 1)
		{
			cLocal_102 = "TC_MEX_SONG_02";
		}
	}
	AUDIO_MUSIC_FORCE_TRACK(cLocal_102, "LOW_FIGHT_MEDIUM", 0.0f, 500, 4294967295, 3212836864, 0);
	return;
}

int Function_74(bool bParam0) //Position: 0x472C / 18220
{
	bParam0 = (bParam0 * 1000 - 1);
	return (RAND_INT_RANGE(0, bParam0) / 1000);
}

bool Function_75(int iParam0, float fParam1) //Position: 0x4745 / 18245
{
	if (Function_55(iParam0))
	{
		if (Function_53(iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_76(int iParam0, bool bParam1, bool bParam2) //Position: 0x4761 / 18273
{
	int iVar0;
	
	switch (*iParam0)
	{
		case 0x00000000:
			AI_QUICK_EXIT_GRINGO(bParam1, 1);
			iVar0 = TASK_SEQUENCE_OPEN();
			TASK_FACE_ACTOR(false, Global_34573, 0, 3212836864);
			TASK_FACE_ACTOR(false, Global_34573, 1, bParam2);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bParam1, iVar0);
			TASK_SEQUENCE_RELEASE(iVar0, 1);
			TASK_PRIORITY_SET(bParam1, 0);
			*iParam0 = 1;
			break;
		
		case 0x00000001:
			if (GET_NTH_TASK_STATUS(bParam1, false) == 0)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_77(bool bParam0, bool bParam1) //Position: 0x47CA / 18378
{
	var uVar0;
	
	GET_POSITION(bParam0, &uVar0);
	TASK_SHOOT_FROM_POSITION(bParam0, bParam1, &uVar0);
	return;
}

var Function_78(bool bParam0) //Position: 0x47E0 / 18400
{
	struct<5> Var0;
	
	if (GET_ACTOR_CURRENT_WEAPON_AI_PARAMETERS(bParam0, &Var0))
	{
		return StackVal;
	}
	return 0.0f;
}

bool Function_79(var uParam0, var uParam1, float fParam2, bool bParam3) //Position: 0x47F9 / 18425
{
	if (!Function_18(*uParam0, 0))
	{
		if (GET_LAST_ATTACKER(*uParam0) == Global_34573)
		{
			if (bParam3)
			{
				Function_80(4294967196, 1, 0);
			}
		}
		return 0;
	}
	if (Function_112(*uParam0, *uParam1) < fParam2 && fParam2 == -1.0f)
	{
		return 0;
	}
	if (GET_LAST_ATTACKER(*uParam0) == Global_34573)
	{
		if (bParam3)
		{
			Function_80(4294967196, 1, 0);
		}
		TASK_KILL_CHAR(*uParam0, Global_34573);
		return 0;
	}
	return 1;
}

void Function_80(int iParam0, bool bParam1, bool bParam2) //Position: 0x4871 / 18545
{
	int iVar0;
	bool bVar1;
	
	if (Function_103(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_102())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_101(1);
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
			Function_100(1, bVar1);
			if (!bParam2)
			{
				if (!Function_99(Global_76848, 1))
				{
					Function_93(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_91(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_99(Global_76848, 2))
				{
					Function_93(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_36(1, bVar1, 0, 0);
	}
	else
	{
		Function_90(1, (4294967295 * bVar1), 0);
	}
	if (Function_101(1) <= 4294962296)
	{
		Function_89(1, 4294962296, 0);
	}
	else if (Function_101(1) >= 5000)
	{
		Function_89(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_46(1));
	iVar0 = Function_101(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_82(2, Function_88(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_82(2, Function_88(Global_12976.f_152), 0);
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
				Function_82(2, Function_88(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_82(2, Function_88(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_82(2, Function_88(Global_12976.f_152), 1);
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
				Function_82(2, Function_88(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_82(2, Function_88(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_82(2, Function_88(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_82(2, Function_88(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_82(2, Function_88(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_82(2, Function_88(Global_12976.f_152), 1);
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
				Function_82(2, Function_88(Global_12976.f_152), 0);
			}
			break;
	}
	Function_81(Global_12976.f_152, Global_12976.f_156);
	return;
}

void Function_81(int iParam0, int iParam1) //Position: 0x4B92 / 19346
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

int Function_82(int iParam0, char* cParam1, bool bParam2) //Position: 0x4DF0 / 19952
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
	Function_86(iParam0, cParam1, 0, 1);
	iVar1 = Function_83();
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

int Function_83() //Position: 0x4F75 / 20341
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
	Function_84();
	return 0;
}

void Function_84() //Position: 0x5014 / 20500
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
		Function_85(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_85(int iParam0) //Position: 0x50C3 / 20675
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

int Function_86(int iParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0x5121 / 20769
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
		Function_87(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, uParam3);
	}
	return 1;
}

void Function_87(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x5473 / 21619
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

var Function_88(int iParam0) //Position: 0x54F6 / 21750
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

int Function_89(int iParam0, bool bParam1, bool bParam2) //Position: 0x5599 / 21913
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
		Function_49(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_48(iParam0);
	if (bParam2)
	{
		Function_37(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_90(int iParam0, bool bParam1, int iParam2) //Position: 0x5834 / 22580
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
	Function_48(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_37(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_91(int iParam0, bool bParam1) //Position: 0x5A2F / 23087
{
	bool bVar0;
	int iVar1;
	
	Function_90(iParam0, bParam1, 0);
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
	iVar1 = Function_92(iParam0, 4294967295);
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
	iVar1 = Function_83();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

var Function_92(int iParam0, int iParam1) //Position: 0x5BCB / 23499
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

void Function_93(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x5C0C / 23564
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_95(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_94(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_94(char* cParam0, int iParam1) //Position: 0x5C78 / 23672
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

bool Function_95(bool bParam0, var uParam1, int iParam2) //Position: 0x5CAF / 23727
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
		if (Function_97(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_96(uVar0))
		{
			case 0x00000002:
				if (!Function_99(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_96(char* cParam0) //Position: 0x5D27 / 23847
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

int Function_97(int iParam0) //Position: 0x5DC8 / 24008
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_98(&iVar1, 2147483648);
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

void Function_98(int iParam0, int iParam1) //Position: 0x5E05 / 24069
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

bool Function_99(var uParam0, int iParam1) //Position: 0x5E18 / 24088
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_100(int iParam0, bool bParam1) //Position: 0x5E2B / 24107
{
	bool bVar0;
	int iVar1;
	
	Function_36(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_92(iParam0, 4294967295);
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
	iVar1 = Function_83();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

int Function_101(int iParam0) //Position: 0x5FC8 / 24520
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

bool Function_102() //Position: 0x6009 / 24585
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

var Function_103(int iParam0) //Position: 0x6034 / 24628
{
	return (*&Global_12976 + 104)[iParam0];
}

float Function_104(bool bParam0) //Position: 0x6043 / 24643
{
	var uVar0;
	float fVar1;
	
	if (!bParam0)
	{
		Function_105(&uVar0, &fVar1);
		if (fVar1 < 60.0f)
		{
			return (fVar1 + 20.0f);
		}
		return (fVar1 + 10.0f);
	}
	return (190.0f + 20.0f);
}

void Function_105(float fParam0, int iParam1) //Position: 0x607E / 24702
{
	vector3 vVar0;
	
	if (Global_3386 && !Global_3403)
	{
		*fParam0 = 65.0f;
		*iParam1 = 95.0f;
	}
	else if ((!IS_ACTOR_RIDING(GET_PLAYER_ACTOR(0)) && !IS_ACTOR_RIDING_VEHICLE(GET_PLAYER_ACTOR(0))) && !Global_3403)
	{
		*fParam0 = 115.0f;
		*iParam1 = 170.0f;
	}
	else
	{
		GET_ACTOR_VELOCITY(GET_PLAYER_ACTOR(0), &vVar0);
		if (VMAG(vVar0) > 5.0f)
		{
			*fParam0 = 130.0f;
			*iParam1 = 190.0f;
		}
		else
		{
			*fParam0 = 130.0f;
			*iParam1 = 190.0f;
		}
	}
	return;
}

int Function_106(bool bParam0, int iParam1) //Position: 0x6107 / 24839
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

void Function_107(bool bParam0) //Position: 0x61EC / 25068
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

void Function_108(var uParam0, bool bParam1, bool bParam2) //Position: 0x6238 / 25144
{
	if (bParam1)
	{
		HUD_CLEAR_HELP_QUEUE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
		Function_62(uParam0, 0x40f00000, 1, 2, 0, 0, 0, 0);
		if (bParam2)
		{
			Function_50();
		}
	}
	return;
}

bool Function_109(bool bParam0, var uParam1, var uParam2, int iParam3, bool bParam4, float fParam5) //Position: 0x6261 / 25185
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
		fVar0 = Function_112(bParam0, Global_34573);
		if (!Function_26(iParam3, 8))
		{
			if (GET_LAST_ATTACKER(bParam0) == Global_34573)
			{
				*uParam1 = 8;
				Function_110(bParam0);
				return 1;
			}
		}
		if (!Function_26(iParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(bParam0, 1.0f))
			{
				*uParam1 = 2;
				Function_110(bParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(bParam0, 1.0f, 1.0f))
			{
				*uParam1 = 2;
				Function_110(bParam0);
				return 1;
			}
		}
		if (!Function_26(iParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(bParam0) || (((GET_ACTOR_UNDER_RETICLE(Global_34573, 0) != bParam0 && IS_PLAYER_WEAPON_ZOOMED(Global_34573)) && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(Global_34573) != bParam0 && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f))
			{
				if (*uParam2 > 0.0f)
				{
					*uParam1 = 4;
					Function_110(bParam0);
					return 1;
				}
				if (*uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - *uParam2) < 1.3f)
					{
						*uParam1 = 4;
						Function_110(bParam0);
						return 1;
					}
				}
				*uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_26(iParam3, 1))
		{
			if (Global_3403 || Global_3404)
			{
				*uParam1 = 1;
				Function_110(bParam0);
				return 1;
			}
		}
		if (!Function_26(iParam3, 16))
		{
			if (UNK_0x7F454A92(bParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(bParam0)) > 2.0f && fVar0 > 18.0f)
				{
					*uParam1 = 16;
					Function_110(bParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_110(bool bParam0) //Position: 0x63F8 / 25592
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(bParam0, 1);
	UNK_0x99AFD2D1(bParam0, 0, 0);
	Function_111(bParam0);
	MEMORY_CONSIDER_AS(Global_34573, bParam0, 2);
	MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
	AI_GOAL_LOOK_CLEAR(bParam0);
	return;
}

void Function_111(bool bParam0) //Position: 0x642C / 25644
{
	SAY_SINGLE_LINE_CONTEXT(bParam0, 60, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

float Function_112(bool bParam0, bool bParam1) //Position: 0x6443 / 25667
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

void Function_113(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x6534 / 25908
{
	bParam1 = bParam1;
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0) && Function_112(bParam0, Global_34573) >= IntToFloat(iParam5))
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

int Function_114(bool bParam0) //Position: 0x65C4 / 26052
{
	if (IS_ACTOR_VALID(bParam0))
	{
		return GET_LAST_ATTACKER(bParam0);
	}
	return "";
}

void Function_115(vector3 vParam0, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7, bool bParam8) //Position: 0x65DA / 26074
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
	else if (!Function_128(StackVal, StackVal, vParam0))
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
			Function_127(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_126(0);
		}
		if (bParam8)
		{
			Function_124(0, GET_THIS_SCRIPT_ID());
			Global_3373 = GET_THIS_SCRIPT_ID();
			Function_122(iParam4);
			Global_3401 = 1;
		}
		Function_120(iParam4);
		if (Function_119(StackVal, 32768))
		{
			Function_116(1);
		}
		Global_16876[iParam46].f_12++;
		Function_36(408, 1, 0, 0);
	}
}

void Function_116(bool bParam0) //Position: 0x66E1 / 26337
{
	if (bParam0)
	{
		Function_118(0x10000000);
	}
	else
	{
		Function_117(0x10000000);
	}
	Global_26316.f_172 = 0;
	return;
}

void Function_117(int iParam0) //Position: 0x6705 / 26373
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_118(int iParam0) //Position: 0x6722 / 26402
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

bool Function_119(var uParam0, int iParam1) //Position: 0x6735 / 26421
{
	return (uParam0 && iParam1) == 0;
}

void Function_120(int iParam0) //Position: 0x6742 / 26434
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (!Function_26(StackVal, 524288))
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
			bVar1 = Function_121(iVar0 * 60);
			ADD_TIME(&Global_17483[iParam075] + 264, 0, 0, bVar1, 0);
			Global_16876[iParam06] = Global_17483[iParam075].f_264;
		}
	}
	return;
}

int Function_121(int iParam0) //Position: 0x67E6 / 26598
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_122(int iParam0) //Position: 0x67FC / 26620
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
	Function_123(&Var0 + 80[Var0.f_763], &(Global_16876[iParam06]), iParam0);
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

void Function_123(var uParam0, var uParam1, int iParam2) //Position: 0x689A / 26778
{
	uParam0->f_4 = iParam2;
	*uParam0 = uParam1->f_12;
	uParam0->f_8 = 1;
	return;
}

void Function_124(int iParam0, int iParam1) //Position: 0x68B2 / 26802
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
			Function_125(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_125(int iParam0) //Position: 0x6934 / 26932
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

void Function_126(int iParam0) //Position: 0x6982 / 27010
{
	Global_12976.f_76 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 76, 0, 0, (iParam0 + Function_121(900)), 0);
	return;
}

void Function_127(int iParam0) //Position: 0x69A4 / 27044
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, (iParam0 + Function_121(200)), 0);
	return;
}

bool Function_128(vector3 vParam0) //Position: 0x69C5 / 27077
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_129() //Position: 0x69DD / 27101
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_130(bool bParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x69E6 / 27110
{
	var uVar0;
	
	if (Function_137(bParam0) && !Function_136(bParam0, 1))
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
	Function_134(bParam0);
	DECOR_SET_BOOL(bParam0, "Zombie", 1);
	Function_133(bParam0);
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
	Function_131(bParam0, uParam4, uParam5);
}

void Function_131(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6C49 / 27721
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
			Function_132(bParam0, bParam1, 0);
		}
		else
		{
			AI_DONT_HARM_ACTOR(bParam0);
			SET_ALLOW_EXECUTE(bParam0, 0);
		}
	}
	return;
}

void Function_132(bool bParam0, int iParam1, bool bParam2) //Position: 0x6CFB / 27899
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
			bVar9 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bParam0, Function_214(), "script_zombie_emerge", vVar3);
			if (IS_OBJECT_VALID(bVar9))
			{
				Function_129();
				bVar10 = CREATE_POINT_IN_LAYOUT(bParam0, Function_214(), vVar3, Function_129());
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
			bVar9 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bParam0, Function_214(), "script_zombie_emerge", vVar0);
			if (IS_OBJECT_VALID(bVar9))
			{
				Function_129();
				bVar10 = CREATE_POINT_IN_LAYOUT(bParam0, Function_214(), vVar0, Function_129());
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

void Function_133(bool bParam0) //Position: 0x6EAB / 28331
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

void Function_134(bool bParam0) //Position: 0x6EDF / 28383
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
	Function_135(bParam0, -100.0f);
	AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(bParam0, -1.0f);
	AI_PERCEPTION_SET_VISUAL_ID_TIME(bParam0, 0.0f);
	return;
}

void Function_135(var uParam0, int iParam1) //Position: 0x7243 / 29251
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

bool Function_136(bool bParam0, int iParam1) //Position: 0x7265 / 29285
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(bParam0);
	if ((((((iVar0 != 1252 && iParam1) || (iVar0 != 1253 && iParam1)) || iVar0 != 541) || iVar0 != 542) || iVar0 != 543) || iVar0 != 544)
	{
		return 1;
	}
	return 0;
}

int Function_137(bool bParam0) //Position: 0x72A7 / 29351
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(bParam0);
	if (iVar0 <= 1204 && iVar0 >= 1227)
	{
		return 1;
	}
	return 0;
}

bool Function_138(bool bParam0) //Position: 0x72C7 / 29383
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(bParam0);
	if (iVar0 <= 1204 && iVar0 >= 1254)
	{
		return 1;
	}
	if (Function_136(bParam0, 1))
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(bParam0, "Zombie"))
	{
		return DECOR_GET_BOOL(bParam0, "Zombie");
	}
	return 0;
}

void Function_139(bool bParam0) //Position: 0x7312 / 29458
{
	Function_143(bParam0);
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bParam0, 0);
	DECOR_SET_BOOL(bParam0, "nnostickup", 1);
	SET_ALLOW_EXECUTE(bParam0, 0);
	SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_ACTOR(bParam0), 6.0f, true, 1092616192);
	Function_140(bParam0);
	return;
}

void Function_140(bool bParam0) //Position: 0x7351 / 29521
{
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	if (!GET_OBJECT_TYPE(bParam0) != 15)
	{
		return;
	}
	AI_SET_ENABLE_STICKUP_OVERRIDE(GET_ACTOR_FROM_OBJECT(bParam0), 0);
	return;
}

var Function_141(vector3 vParam0, vector3 vParam3) //Position: 0x7377 / 29559
{
	var uVar0;
	
	Function_142(StackVal, StackVal, StackVal, StackVal, vParam0, vParam3, &uVar0);
	return UNK_0x9C40E671(&uVar0);
}

void Function_142(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x7391 / 29585
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

void Function_143(bool bParam0) //Position: 0x73B4 / 29620
{
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam0, 0);
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bParam0, 0);
	MEMORY_ATTACK_ON_SIGHT(bParam0, 0);
	SET_ACTOR_CAN_PLAY_GESTURES(bParam0, false);
	AI_SET_ALLOW_ATTACK_HOGTIED_ACTORS(bParam0, 1);
	return;
}

void Function_144(bool bParam0, float fParam1, float fParam2, float fParam3) //Position: 0x73DE / 29662
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

vector3 Function_145(vector3 vParam0, vector3 vParam3) //Position: 0x7425 / 29733
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	VNORMALIZE(&vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_146(bool bParam0) //Position: 0x7443 / 29763
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	if (IS_VOLUME_VALID(bParam0))
	{
		iVar1 = CREATE_OBJECTSET_IN_LAYOUT("TempObjectSetForActors", Global_6288, 4294967295, 0);
		if (IS_OBJECTSET_VALID(iVar1))
		{
			LOCATE_ACTORS_IN_VOLUME(bParam0, iVar1, 0, 1);
			bVar0 = false;
			while (bVar0 < (GET_OBJECTSET_SIZE(iVar1) - 1))
			{
				bVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, iVar1);
				if (IS_OBJECT_VALID(bVar2))
				{
					bVar3 = GET_ACTOR_FROM_OBJECT(bVar2);
					if (IS_ACTOR_VALID(bVar3))
					{
						if (bVar3 != GET_PLAYER_ACTOR(0))
						{
							DESTROY_ACTOR(bVar3);
						}
					}
				}
				bVar0++;
			}
			DESTROY_OBJECTSET(iVar1);
		}
	}
	return;
}

void Function_147(var uParam0, var uParam1, var uParam2, float fParam3, vector3 vParam4) //Position: 0x74E0 / 29920
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
		if (Function_148(StackVal, StackVal, Global_30616, "player_herb", &uVar0, 20.0f, 5, vParam4) >= 0)
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

int Function_148(bool bParam0, bool bParam1, var uParam2, float fParam3, int iParam4, vector3 vParam5) //Position: 0x7581 / 30081
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

float Function_149() //Position: 0x7615 / 30229
{
	float fVar0;
	int iVar1;
	
	if (Global_3371)
	{
		return 0.0f;
	}
	Function_105(&fVar0, &iVar1);
	if (fVar0 >= 50.0f)
	{
		return (fVar0 - 10.0f);
	}
	return (fVar0 - 20.0f);
}

bool Function_150(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x7646 / 30278
{
	struct<8> Var0;
	bool bVar8;
	bool bVar9;
	
	if (Global_3371 && iParam0->f_32)
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_189(GET_SCRIPT_NAME()) };
		bVar8 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Global_26150, &Var0, 4.203895E-45f, Function_188(*(iParam0 + 8), 0.0f, Global_34573, *(iParam0 + 8)), 0.0f, iParam0->f_52, 20.0f, iParam0->f_52);
		DECOR_SET_INT(bVar8, "script", GET_THIS_SCRIPT_ID());
		if (iParam0->f_56 != 4294967295)
		{
			DECOR_SET_INT(StackVal, bVar8, "category");
			Function_186(&bVar8, iParam0->f_32);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
		*(iParam0 + 8) = { StackVal, StackVal, Global_34574 };
		return 1;
	}
	*uParam3 = 0;
	if (!Function_151(iParam0))
	{
		if (iParam0->f_32 == 1)
		{
			if (*uParam2 == 0)
			{
				Function_23("Still scanning for the proper terrain to run this event.  Move the player around to find a good spawn location.", -1.0f, 1, 2, 1, 0);
			}
		}
		else if (*uParam2 >= 20)
		{
			*uParam3 = 1;
			Global_26153++;
		}
		*uParam2++;
		*uParam1 = 1000;
		*(iParam0 + 8) = { 0.0f, 0.0f, 0.0f };
		return 0;
	}
	if (iParam0->f_32)
	{
		HUD_CLEAR_SMALL_TEXT_QUEUE();
		Global_3399 = 0;
		Function_23("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 5.0f, 1, 2, 1, 0);
	}
	if (bParam4)
	{
		if (!Function_21(iParam0->f_56, 0, 1, 0, 0))
		{
			*uParam3 = 1;
			LOG_ERROR("SET_BEAT_NEXT_SPAWN_TIME Failed, shutting down event");
			return 0;
		}
		if (iParam0->f_52 >= 0.0f)
		{
			LOG_ERROR("SET_BEAT_NEXT_SPAWN_TIME Failed: Volume restriction size not set");
			return 0;
		}
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_189("restrictVol") };
		bVar9 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Global_26150, &Var0, 4.203895E-45f, Function_188(*(iParam0 + 8), 0.0f, Global_34573, *(iParam0 + 8)), 0.0f, iParam0->f_52, 20.0f, iParam0->f_52);
		DECOR_SET_INT(bVar9, "script", GET_THIS_SCRIPT_ID());
		if (iParam0->f_56 != 4294967295)
		{
			DECOR_SET_INT(StackVal, bVar9, "category");
			Function_186(&bVar9, iParam0->f_32);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
	}
	return 1;
}

bool Function_151(int iParam0) //Position: 0x79D8 / 31192
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	float fVar12;
	float fVar13;
	bool bVar14;
	struct<17> Var15;
	
	GET_POSITION(GET_PLAYER_ACTOR(0), &vVar9);
	switch (iParam0->f_64)
	{
		case 0x00000005:
			if (!IS_ITERATOR_VALID(StackVal))
			{
				if (IS_LAYOUTREF_VALID(Global_30616))
				{
					iParam0->f_4 = CREATE_OBJECT_ITERATOR(Global_30616);
				}
				else
				{
					return 0;
				}
			}
			Function_185(iParam0 + 4);
			switch ((iParam0 + 64 + 24)->f_20)
			{
				case 0x00000000:
					ITERATE_IN_LAYOUT(StackVal, Global_30616);
					break;
				
				case 0x00000001:
					ITERATE_IN_LAYOUT(StackVal, FIND_NAMED_LAYOUT("regions_layout"));
					break;
			}
			if (StackVal < 0.0f)
			{
				vVar3 = { 0.0f, 0.0f, Function_104(1) };
				ROTATE_VECTOR_XZ(&vVar3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar3, StackVal) };
				ITERATE_IN_SPHERE(StackVal, vVar3, Function_104(1));
			}
			if (!STRINGS_ARE_EQUAL(iParam0 + 64 + 24, ""))
			{
				ITERATE_ON_PARTIAL_NAME(StackVal, iParam0 + 64 + 24);
			}
			if (!4294967295 != (iParam0 + 64 + 24)->f_12)
			{
				ITERATE_ON_OBJECT_TYPE(StackVal, (iParam0 + 64 + 24)->f_12);
			}
			if (GET_NUM_ITERATOR_MATCHES(StackVal) >= 0)
			{
				if (StackVal & 512 == 0 || iParam0->f_36 != 1)
				{
					if ((iParam0 + 64 + 24)->f_16 == 0)
					{
						bVar0 = Function_184(StackVal, StackVal, StackVal, vVar9, 0.01f);
					}
					else
					{
						bVar0 = Function_183(StackVal, StackVal, StackVal, vVar9, 0.1f, "locflag", (iParam0 + 64 + 24)->f_16);
					}
				}
				else if ((iParam0 + 64 + 24)->f_16 == 0)
				{
					bVar0 = Function_182(StackVal, StackVal, StackVal, vVar9, Function_149());
				}
				else
				{
					bVar0 = Function_181(StackVal, StackVal, StackVal, vVar9, Function_149(), "locflag", (iParam0 + 64 + 24)->f_16);
				}
				if (IS_OBJECT_VALID(bVar0))
				{
					GET_OBJECT_POSITION(bVar0, iParam0 + 8);
					GET_OBJECT_ORIENTATION(bVar0, iParam0 + 20);
					iParam0->f_48 = bVar0;
					DESTROY_ITERATOR(StackVal);
				}
				else
				{
					DESTROY_ITERATOR(StackVal);
					return 0;
				}
			}
			DESTROY_ITERATOR(StackVal);
			return 0;
			break;
		
		case 0x00000006:
			if (!IS_ITERATOR_VALID(StackVal))
			{
				iParam0->f_4 = CREATE_OBJECT_ITERATOR(FIND_NAMED_LAYOUT("regions_layout"));
			}
			Function_185(iParam0 + 4);
			ITERATE_IN_LAYOUT(StackVal, FIND_NAMED_LAYOUT("regions_layout"));
			fVar13 = 130.0f;
			fVar12 = 190.0f;
			GET_POSITION(GET_PLAYER_ACTOR(0), &vVar3);
			ITERATE_IN_SPHERE(StackVal, StackVal, vVar3);
			bVar1 = START_OBJECT_ITERATOR(StackVal);
			while (IS_OBJECT_VALID(bVar1) && !IS_OBJECT_VALID(bVar0))
			{
				if (DECOR_CHECK_EXIST(bVar1, "regid"))
				{
					bVar14 = DECOR_GET_INT(bVar1, "regid");
					if (Function_180(bVar14))
					{
						if (StackVal == (iParam0 + 64)->f_48)
						{
							if ((StackVal && Global_29008[bVar14]) >= 0)
							{
								GET_OBJECT_POSITION(bVar1, &vVar3);
								if (VDIST(vVar9, vVar3) < fVar13 && VDIST(vVar9, vVar3) > Function_104(1))
								{
									bVar0 = bVar1;
								}
							}
						}
					}
				}
				bVar1 = OBJECT_ITERATOR_NEXT(StackVal);
			}
			if (IS_OBJECT_VALID(bVar0))
			{
				GET_OBJECT_POSITION(bVar0, iParam0 + 8);
				Function_179(iParam0 + 8, 99.0f, iParam0 + 8, 10);
				GET_OBJECT_ORIENTATION(bVar0, iParam0 + 20);
				iParam0->f_48 = DECOR_GET_INT(bVar0, "regid");
			}
			else
			{
				DESTROY_ITERATOR(StackVal);
				return 0;
			}
			break;
		
		case 0x00000002:
		case 0x00000001:
			if (StackVal && (((!Global_3386 && Global_3388) && ARE_CURVES_IN_RANGE(48, vVar9, 100.0f)) && 8) != 8)
			{
				vVar6 = { 0.0f, 0.0f, -10.0f };
				ROTATE_VECTOR_XZ(&vVar6, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				Function_178(&vVar9, &vVar6);
				vVar3 = { StackVal, StackVal, Function_178(&vVar9, &vVar6) };
				if (!Function_128(StackVal, StackVal, vVar3))
				{
					PRINTSTRING("Player Pos: ");
					PRINTVECTOR(vVar9);
					PRINTNL();
					Function_105(&fVar13, &fVar12);
					if (VDIST(vVar3, vVar9) < ((fVar13 + ((fVar12 - fVar13) / 2.0f)) * 0.8f))
					{
						iVar2 = Function_175(StackVal, StackVal, iParam0, vVar3);
					}
				}
			}
			else
			{
				iVar2 = Function_171(iParam0);
			}
			if (iVar2 == 1)
			{
				if ((iParam0 + 64)->f_128 == 4)
				{
					if (IS_OBJECT_VALID(StackVal))
					{
						if (GET_OBJECT_TYPE(StackVal) == 9)
						{
							if (!IS_POINT_IN_VOLUME(StackVal, *(iParam0 + 8)))
							{
								return 0;
							}
						}
					}
				}
				if ((iParam0 + 64)->f_128 == 5)
				{
				}
				if (iParam0->f_60 == 2)
				{
					if (!Function_170(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (iParam0->f_60 == 1)
				{
					if (!Function_169(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (Function_26(StackVal, 131072))
				{
					if (StackVal || Function_168(StackVal, Function_168(StackVal, StackVal, *(iParam0 + 8)), Global_34574))
					{
						return 0;
					}
				}
				if (StackVal & 1024 == 1024)
				{
					if (Function_167(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (!Function_161(iParam0 + 8, iParam0 + 52, 0, iParam0->f_32))
				{
					return 0;
				}
			}
			return 0;
			break;
		
		case 0x00000003:
			if (StackVal)
			{
				fVar13 = 120.0f;
				fVar12 = 150.0f;
				vVar3 = { 0.0f, 0.0f, ((fVar13 + fVar12) * -0.5f) };
				ROTATE_VECTOR_XZ(&vVar3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar3, StackVal) };
				uVar23 = START_CURVE_QUERY(Global_28841, vVar3, Function_160((iParam0 + 64)->f_120, 0), 0.0f, 20.0f, 5.0f, 0);
			}
			else
			{
				uVar23 = START_CURVE_QUERY(Global_28841, vVar9, Function_160((iParam0 + 64)->f_120, 0), 120.0f, 150.0f, 5.0f, 0);
			}
			if (GET_NUM_POINTS_IN_CURVE_QUERY(uVar23) >= 0)
			{
				iVar21 = RAND_INT_RANGE(0, (GET_NUM_POINTS_IN_CURVE_QUERY(uVar23) - 1));
				GET_POINT_FROM_CURVE_QUERY(uVar23, iVar21, &Var15);
				Function_159(&Var15);
				*(iParam0 + 8) = { StackVal, StackVal, Function_159(&Var15) };
				iParam0->f_20 = Var15.f_12;
				(iParam0 + 20)->f_4 = Var15.f_16;
				iParam0->f_48 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(uVar23, iVar21);
				UNK_0xDF93BD7C(uVar23);
			}
			else
			{
				UNK_0xDF93BD7C(uVar23);
				return 0;
			}
			if (iParam0->f_60 == 2)
			{
				if (!Function_170(StackVal, StackVal, *(iParam0 + 8)))
				{
					return 0;
				}
			}
			if (iParam0->f_60 != 1)
			{
				if (!Function_169(StackVal, StackVal, *(iParam0 + 8)))
				{
					return 0;
				}
			}
			if (iParam0->f_60 == 0)
			{
				if (!(StackVal || Function_170(StackVal, Function_169(StackVal, StackVal, *(iParam0 + 8)), *(iParam0 + 8))))
				{
					return 0;
				}
			}
			if (Function_26(StackVal, 131072))
			{
				if (StackVal || Function_168(StackVal, Function_168(StackVal, StackVal, *(iParam0 + 8)), Global_34574))
				{
					return 0;
				}
			}
			if (StackVal && !Function_161(iParam0 + 8, iParam0 + 52, 0, iParam0->f_32) == 262144)
			{
				return 0;
			}
			break;
		
		case 0x00000004:
			if (!Function_156((iParam0 + 64)->f_120) < 0)
			{
				return 0;
			}
			break;
		
		case 0x00000007:
			switch ((iParam0 + 64)->f_128)
			{
				case 0x00000001:
					bVar24 = Function_153(StackVal, Global_29004, Global_29005, Global_29006, 1);
					if (IS_PERS_CHAR_VALID(bVar24))
					{
						if (IS_PERS_CHAR_ALIVE(bVar24))
						{
							return 0;
						}
					}
					break;
				
				case 0x00000002:
					iVar22 = 0;
					while (StackVal <= (StackVal - iVar22) + 1)
					{
						bVar24 = Function_153(StackVal, Global_29004, Global_29005, (Global_29006 + iVar22), 1);
						if (IS_PERS_CHAR_VALID(bVar24))
						{
							if (IS_PERS_CHAR_ALIVE(bVar24))
							{
								iVar25++;
							}
						}
						iVar22++;
					}
					if (iVar25 >= 0)
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
					iParam0->f_48 = StackVal;
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
	if (Function_152(StackVal, StackVal, *(iParam0 + 8)))
	{
		return 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(*(iParam0 + 8), 10.0f))
	{
		return 0;
	}
	return 1;
}

bool Function_152(vector3 vParam0) //Position: 0x8203 / 33283
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(Global_25964))
	{
		if (IS_POINT_IN_VOLUME(vParam0, GET_VOLUME_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, Global_25964))))
		{
			return 1;
		}
		bVar0++;
	}
	return 0;
}

bool Function_153(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x8238 / 33336
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
	if (!bParam4)
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
								return Function_154(&Global_6298, &Global_7189, bParam3);
								break;
							
							case 0x00000001:
								return Function_154(&Global_6364, &Global_7287, bParam3);
								break;
							
							case 0x00000002:
								return Function_154(&Global_6351, &Global_7268, bParam3);
								break;
							
							default:
								return Function_154(&Global_6391, &Global_7327, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_154(&Global_6501, &Global_7490, bParam3);
								break;
							
							case 0x00000001:
								return Function_154(&Global_6402, &Global_7343, bParam3);
								break;
							
							case 0x00000003:
								return Function_154(&Global_6433, &Global_7389, bParam3);
								break;
							
							case 0x00000002:
								return Function_154(&Global_6490, &Global_7474, bParam3);
								break;
							
							case 0x00000004:
								return Function_154(&Global_6537, &Global_7543, bParam3);
								break;
							
							default:
								return Function_154(&Global_6532, &Global_7536, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_154(&Global_6563, &Global_7581, bParam3);
								break;
							
							case 0x00000001:
								return Function_154(&Global_6614, &Global_7657, bParam3);
								break;
							
							case 0x00000002:
								return Function_154(&Global_6643, &Global_7700, bParam3);
								break;
							
							default:
								return Function_154(&Global_6550, &Global_7562, bParam3);
								break;
						}
						break;
					
					case 0x00000003:
						switch (bVar1)
						{
							case 0x00000001:
								return Function_154(&Global_6667, &Global_7735, bParam3);
								break;
							
							default:
								return Function_154(&Global_6704, &Global_7790, bParam3);
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
								return Function_154(&Global_6709, &Global_7797, bParam3);
								break;
							
							case 0x00000001:
								return Function_154(&Global_6764, &Global_7879, bParam3);
								break;
							
							case 0x00000002:
								return Function_154(&Global_6785, &Global_7910, bParam3);
								break;
							
							default:
								return Function_154(&Global_6810, &Global_7947, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_154(&Global_6815, &Global_7954, bParam3);
								break;
							
							default:
								return Function_154(&Global_6928, &Global_8122, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000002:
								return Function_154(&Global_6933, &Global_8129, bParam3);
								break;
							
							case 0x00000001:
								return Function_154(&Global_6962, &Global_8172, bParam3);
								break;
							
							case 0x00000003:
								return Function_154(&Global_6987, &Global_8209, bParam3);
								break;
							
							default:
								return Function_154(&Global_7027, &Global_8268, bParam3);
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
	else if (bVar1 == Global_30640[0])
	{
		return Function_154(&Global_6298, &Global_7189, bParam3);
	}
	if (bVar1 == Global_30640[1])
	{
		return Function_154(&Global_6364, &Global_7287, bParam3);
	}
	if (bVar1 == Global_30640[2])
	{
		return Function_154(&Global_6351, &Global_7268, bParam3);
	}
	if (bVar1 == Global_30658[0])
	{
		return Function_154(&Global_6501, &Global_7490, bParam3);
	}
	if (bVar1 == Global_30658[1])
	{
		return Function_154(&Global_6402, &Global_7343, bParam3);
	}
	if (bVar1 == Global_30658[3])
	{
		return Function_154(&Global_6433, &Global_7389, bParam3);
	}
	if (bVar1 == Global_30658[2])
	{
		return Function_154(&Global_6490, &Global_7474, bParam3);
	}
	if (bVar1 == Global_30658[4])
	{
		return Function_154(&Global_6537, &Global_7543, bParam3);
	}
	if (bVar1 == Global_30668[0])
	{
		return Function_154(&Global_6563, &Global_7581, bParam3);
	}
	if (bVar1 == Global_30668[1])
	{
		return Function_154(&Global_6614, &Global_7657, bParam3);
	}
	if (bVar1 == Global_30668[2])
	{
		return Function_154(&Global_6643, &Global_7700, bParam3);
	}
	if (bVar1 == Global_30679[1])
	{
		return Function_154(&Global_6667, &Global_7735, bParam3);
	}
	if (bVar1 == Global_30685[0])
	{
		return Function_154(&Global_6709, &Global_7797, bParam3);
	}
	if (bVar1 == Global_30685[1])
	{
		return Function_154(&Global_6764, &Global_7879, bParam3);
	}
	if (bVar1 == Global_30685[2])
	{
		return Function_154(&Global_6785, &Global_7910, bParam3);
	}
	if (bVar1 == Global_30693[0])
	{
		return Function_154(&Global_6815, &Global_7954, bParam3);
	}
	if (bVar1 == Global_30707[2])
	{
		return Function_154(&Global_6933, &Global_8129, bParam3);
	}
	if (bVar1 == Global_30707[1])
	{
		return Function_154(&Global_6962, &Global_8172, bParam3);
	}
	if (bVar1 == Global_30707[3])
	{
		return Function_154(&Global_6987, &Global_8209, bParam3);
	}
	if (bVar1 == Global_30628[0])
	{
		return Function_154(&Global_6391, &Global_7327, bParam3);
	}
	if (bVar1 == Global_30628[1])
	{
		return Function_154(&Global_6532, &Global_7536, bParam3);
	}
	if (bVar1 == Global_30628[2])
	{
		return Function_154(&Global_6550, &Global_7562, bParam3);
	}
	if (bVar1 == Global_30628[3])
	{
		return Function_154(&Global_6704, &Global_7790, bParam3);
	}
	if (bVar1 == Global_30633[0])
	{
		return Function_154(&Global_6810, &Global_7947, bParam3);
	}
	if (bVar1 == Global_30633[2])
	{
		return Function_154(&Global_6928, &Global_8122, bParam3);
	}
	if (bVar1 == Global_30633[1])
	{
		return Function_154(&Global_7027, &Global_8268, bParam3);
	}
	return "";
}

var Function_154(var uParam0, var uParam1, bool bParam2) //Position: 0x884D / 34893
{
	int iVar0;
	
	iVar0 = bParam2;
	if (iVar0 <= *uParam0 || iVar0 > 0)
	{
		return "";
	}
	if (!Function_155(uParam0[iVar02], 2))
	{
		return "";
	}
	if (!IS_PERS_CHAR_VALID(StackVal))
	{
		return "";
	}
	ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
	return StackVal;
}

bool Function_155(var uParam0, int iParam1) //Position: 0x889F / 34975
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_156(int iParam0) //Position: 0x88BB / 35003
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = 0;
	bVar1 = CREATE_OBJECT_ITERATOR(Global_28841);
	ITERATE_ON_OBJECT_TYPE(bVar1, 25);
	bVar2 = START_OBJECT_ITERATOR(bVar1);
	if (iParam0 == 0)
	{
		iVar0 = GET_NUM_ITERATOR_MATCHES(bVar1);
	}
	else
	{
		while (IS_OBJECT_VALID(bVar2))
		{
			if (Function_157(GET_SQUAD_FROM_OBJECT(bVar2)) == iParam0)
			{
				iVar0++;
			}
			bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
		}
	}
	DESTROY_ITERATOR(bVar1);
	return iVar0;
}

int Function_157(bool bParam0) //Position: 0x8916 / 35094
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 4294967295;
	}
	bVar0 = Function_158(bParam0);
	if (!IS_ACTOR_VALID(bVar0))
	{
		return 4294967295;
	}
	if (IS_ACTOR_RIDING_VEHICLE(bVar0))
	{
		return 2;
	}
	if (IS_ACTOR_RIDING(bVar0))
	{
		return 1;
	}
	return 4294967295;
}

var Function_158(bool bParam0) //Position: 0x894E / 35150
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

vector3 Function_159(int iParam0) //Position: 0x8994 / 35220
{
	vector3 vVar0;
	
	vVar0.x = *iParam0;
	vVar0.f_4 = StackVal;
	vVar0.f_8 = StackVal;
	return StackVal, StackVal, vVar0;
}

int Function_160(int iParam0, int iParam1) //Position: 0x89B3 / 35251
{
	if (iParam1 != 0)
	{
		return iParam1;
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

bool Function_161(var uParam0, float fParam1, int iParam2, bool bParam3) //Position: 0x89E3 / 35299
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
	Function_163(4294967295);
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
			fVar5 = *fParam1;
			if (bVar4)
			{
				fVar5 = (fVar5 + 170.0f);
			}
			if (Global_3386 && bVar6 != 512)
			{
			}
			else if (Function_162(uParam0, &uVar0) > fVar5)
			{
				return 0;
			}
		}
		iVar3++;
	}
	return 1;
}

float Function_162(var uParam0, int iParam1) //Position: 0x8AB3 / 35507
{
	vector3 vVar0;
	int iVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*iParam1, *uParam0, StackVal) };
	iVar3 = VMAG(vVar0);
	return iVar3;
}

int Function_163(bool bParam0) //Position: 0x8AD1 / 35537
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
						Function_166(iVar0);
					}
					else if (Global_3386)
					{
						if (Function_164(StackVal, StackVal, Global_34573, vVar1) < 25.0f)
						{
							Function_166(iVar0);
						}
					}
					else if (Function_164(StackVal, StackVal, Global_34573, vVar1) < 55.0f)
					{
						Function_166(iVar0);
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
			Function_166(iVar0);
		}
		iVar0++;
	}
	return 0;
}

float Function_164(bool bParam0, vector3 vParam1) //Position: 0x8C32 / 35890
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_165(bParam0);
		vVar0 = { StackVal, StackVal, Function_165(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

vector3 Function_165(bool bParam0) //Position: 0x8CAC / 36012
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

void Function_166(int iParam0) //Position: 0x8D16 / 36118
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

bool Function_167(vector3 vParam0) //Position: 0x8D77 / 36215
{
	struct<9> Var0;
	
	iVar7 = 0;
	while (iVar7 <= Global_29008)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (StackVal || (StackVal || StackVal != 3 != 4) != 5)
			{
				if (GET_OBJECT_TYPE(StackVal) == 9)
				{
					GET_VOLUME_SCALE(StackVal, &vVar0);
					GET_VOLUME_CENTER(StackVal, &vVar3);
					bVar6 = VDIST(vParam0, vVar3);
					if ((bVar6 - ((vVar0.x + vVar0.z) / 2.0f)) > 60.0f)
					{
						return 1;
					}
				}
			}
		}
		iVar7++;
	}
	return 0;
}

int Function_168(vector3 vParam0) //Position: 0x8E18 / 36376
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
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

bool Function_169(vector3 vParam0) //Position: 0x8E64 / 36452
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
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

bool Function_170(vector3 vParam0) //Position: 0x8EBD / 36541
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
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

int Function_171(int iParam0) //Position: 0x8F3A / 36666
{
	float fVar0;
	bool bVar1;
	
	Function_105(&fVar0, &bVar1);
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER_PLAYER();
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	Function_174(0);
	AMBIENT_ENABLE_QUADRANT_FILTER(1);
	AMBIENT_SET_QUADRANT_FILTER(1, 0, 0, 0);
	if ((iParam0 + 64 + 60)->f_44 == 0.0f)
	{
		if ((iParam0 + 64 + 60)->f_48 == 0.0f)
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, (iParam0 + 64 + 60)->f_44, (iParam0 + 64 + 60)->f_48);
		}
		else
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(StackVal, 0.0f, (iParam0 + 64 + 60)->f_44);
		}
	}
	else
	{
		Function_173(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
	}
	if ((iParam0 + 64 + 60)->f_52 == 0.0f)
	{
		if ((iParam0 + 64 + 60)->f_56 == 0.0f)
		{
			AMBIENT_SET_BUMP_FILTER(0.0f, (iParam0 + 64 + 60)->f_52, (iParam0 + 64 + 60)->f_56);
		}
		else
		{
			AMBIENT_SET_BUMP_FILTER(StackVal, 0.0f, (iParam0 + 64 + 60)->f_52);
		}
	}
	Function_172(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
	AMBIENT_SET_ONESHOT_QUERIES(0);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	if (Global_30842[34])
	{
		PRINTSTRING("HeightDeviation is set to:");
		PRINTFLOAT((iParam0 + 64 + 60)->f_28);
		PRINTNL();
		PRINTSTRING("Elevation Derivative is set to:");
		PRINTFLOAT((iParam0 + 64 + 60)->f_36);
		PRINTNL();
	}
	if ((iParam0 + 64 + 60)->f_28 == 0.0f)
	{
		UNK_0x0AC99007(StackVal, (iParam0 + 64 + 60)->f_28);
		UNK_0x30C67D05(1);
	}
	if ((iParam0 + 64 + 60)->f_36 == 0.0f)
	{
		AMBIENT_SET_ELEVATION_DERIVATIVE_IN_AREA_FILTER((iParam0 + 64 + 60)->f_36, (iParam0 + 64 + 60)->f_40);
		AMBIENT_ENABLE_ELEVATION_DERIVATIVE_IN_AREA_FILTER(1);
	}
	if (AMBIENT_GET_POINT(iParam0 + 8, 0))
	{
		return 1;
	}
	return 0;
}

void Function_172(struct<33> Param0) //Position: 0x90D5 / 37077
{
	if (StackVal && StackVal != 4294967295 != 0)
	{
		if (Param0.f_20 > 1.0f)
		{
			if (Global_30842[34])
			{
				PRINTSTRING("Material Match: ");
				PRINTINT(StackVal);
				PRINTNL();
			}
			AMBIENT_SET_MATERIAL_AT_POINT_FILTER(StackVal);
		}
		else
		{
			if (Global_30842[34])
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
		if (Global_30842[34])
		{
			PRINTSTRING("Material NoMatch: ");
			PRINTINT(Param0.f_16);
			PRINTSTRING("n, Radius ");
			PRINTFLOAT(Param0.f_32);
			PRINTNL();
		}
		AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(Param0.f_16, Param0.f_32, 0);
	}
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(StackVal, 1.43493E-42f, 1);
}

void Function_173(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14) //Position: 0x9201 / 37377
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

void Function_174(float fParam0) //Position: 0x9252 / 37458
{
	if (fParam0 < 0.1f)
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * fParam0), fParam0);
	}
	else if (Global_3386)
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * 10.0f), 10.0f);
	}
	else
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * 10.0f), 10.0f);
	}
	return;
}

int Function_175(int iParam0, vector3 vParam1) //Position: 0x9296 / 37526
{
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER(vParam1);
	if (Global_30842[34])
	{
		PRINTVECTOR(vParam1);
		PRINTNL();
	}
	Function_177();
	Function_174(0);
	Function_176(0);
	if ((iParam0 + 64 + 60)->f_44 == 0.0f)
	{
		if ((iParam0 + 64 + 60)->f_48 == 0.0f)
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, (iParam0 + 64 + 60)->f_44, (iParam0 + 64 + 60)->f_48);
		}
		else
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(StackVal, 0.0f, (iParam0 + 64 + 60)->f_44);
		}
	}
	else
	{
		Function_173(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
	}
	if ((iParam0 + 64 + 60)->f_52 == 0.0f)
	{
		if ((iParam0 + 64 + 60)->f_56 == 0.0f)
		{
			AMBIENT_SET_BUMP_FILTER(0.0f, (iParam0 + 64 + 60)->f_52, (iParam0 + 64 + 60)->f_56);
		}
		else
		{
			AMBIENT_SET_BUMP_FILTER(StackVal, 0.0f, (iParam0 + 64 + 60)->f_52);
		}
	}
	Function_172(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
	AMBIENT_SET_ONESHOT_QUERIES(0);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	if (Global_30842[34])
	{
		PRINTSTRING("HeightDeviation is set to:");
		PRINTFLOAT((iParam0 + 64 + 60)->f_28);
		PRINTNL();
		PRINTSTRING("Elevation Derivative is set to:");
		PRINTFLOAT((iParam0 + 64 + 60)->f_36);
		PRINTNL();
	}
	if ((iParam0 + 64 + 60)->f_28 == 0.0f)
	{
		UNK_0x0AC99007(StackVal, (iParam0 + 64 + 60)->f_28);
		UNK_0x30C67D05(1);
	}
	if ((iParam0 + 64 + 60)->f_36 == 0.0f)
	{
		AMBIENT_SET_ELEVATION_DERIVATIVE_IN_AREA_FILTER((iParam0 + 64 + 60)->f_36, (iParam0 + 64 + 60)->f_40);
		AMBIENT_ENABLE_ELEVATION_DERIVATIVE_IN_AREA_FILTER(1);
	}
	if (AMBIENT_GET_POINT(iParam0 + 8, 0))
	{
		return 1;
	}
	return 0;
}

void Function_176(bool bParam0) //Position: 0x9438 / 37944
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

void Function_177() //Position: 0x94EB / 38123
{
	AMBIENT_SET_DISTANCE_FILTER(0.0f, 24.0f);
	return;
}

vector3 Function_178(var uParam0, int iParam1) //Position: 0x94FA / 38138
{
	var uVar0;
	bool bVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	var uVar10;
	vector3 vVar11;
	float fVar14;
	float fVar15;
	vector3 vVar16;
	vector3 vVar19;
	vector3 vVar22;
	int iVar25;
	int iVar31;
	
	uVar10 = START_CURVE_QUERY(Global_28841, *uParam0, 48, 0.0f, 7.0f, 5.0f, 0);
	if (!GET_NUM_CURVES_IN_CURVE_QUERY(uVar10) < 0)
	{
		UNK_0xDF93BD7C(uVar10);
		vVar11 = { 0.0f, 0.0f, 0.0f };
		return StackVal, StackVal, vVar11;
	}
	GET_POINT_FROM_CURVE_QUERY(uVar10, 0, &uVar0);
	bVar6 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(uVar10, 0);
	if (IS_OBJECT_VALID(bVar6))
	{
		vVar16 = { StackVal, StackVal, *iParam1 };
		UNK_0x19D652F9(bVar6, 50.0f, &uVar0, &iVar25);
		UNK_0x19D652F9(bVar6, -50.0f, &uVar0, &iVar31);
		Function_159(&iVar25);
		vVar19 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*uParam0, Function_159(&iVar25), StackVal) };
		Function_159(&iVar31);
		vVar22 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*uParam0, Function_159(&iVar31), StackVal) };
		fVar15 = VDOT(&vVar16, &vVar19);
		fVar14 = VDOT(&vVar16, &vVar22);
		Function_105(&fVar7, &fVar8);
		fVar9 = ((fVar7 + fVar8) / 2.0f);
		if (fVar15 > 0.0f && fVar14 > 0.0f)
		{
			UNK_0xDF93BD7C(uVar10);
			vVar11 = { 0.0f, 0.0f, 0.0f };
			return StackVal, StackVal, vVar11;
		}
		if (fVar15 > fVar14)
		{
			UNK_0x19D652F9(bVar6, (fVar9 * -1.0f), &uVar0, &iVar31);
			Function_159(&iVar31);
			vVar11 = { StackVal, StackVal, Function_159(&iVar31) };
		}
		else
		{
			UNK_0x19D652F9(bVar6, fVar9, &uVar0, &iVar25);
			Function_159(&iVar25);
			vVar11 = { StackVal, StackVal, Function_159(&iVar25) };
		}
	}
	UNK_0xDF93BD7C(uVar10);
	return StackVal, StackVal, vVar11;
}

int Function_179(var uParam0, float fParam1, int iParam2, int iParam3) //Position: 0x9607 / 38407
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
	if (FIND_GROUND_INTERSECTION(uParam0, fParam1, iParam2, &uVar0))
	{
		if (!Function_128(StackVal, StackVal, *iParam2))
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
			if (!Function_128(StackVal, StackVal, *iParam2))
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

bool Function_180(int iParam0) //Position: 0x9739 / 38713
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_181(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, var uParam6) //Position: 0x974F / 38735
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	vector3 vVar5;
	
	fVar4 = 50.0f;
	bVar3 = -1.0f;
	bVar0 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		GET_OBJECT_POSITION(bVar0, &vVar5);
		bVar2 = VDIST(vVar5, vParam1);
		if (DECOR_CHECK_EXIST(bVar0, bParam5))
		{
			if ((DECOR_GET_INT(bVar0, bParam5) && uParam6) >= 0)
			{
				if (bVar2 < fParam4)
				{
					if (bVar3 > 0.0f || bVar2 > bVar3)
					{
						if (Function_161(&vVar5, &fVar4, 0, 0))
						{
							bVar3 = bVar2;
							bVar1 = bVar0;
							PRINTSTRING("Assigning new closestObject ");
							PRINTNL();
						}
					}
				}
			}
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bParam0);
	}
	return bVar1;
}

var Function_182(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x97F7 / 38903
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	vector3 vVar5;
	
	bVar3 = -1.0f;
	bVar0 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		GET_OBJECT_POSITION(bVar0, &vVar5);
		bVar2 = VDIST(vVar5, vParam1);
		if (bVar2 < fParam4)
		{
			if (bVar3 > 0.0f || bVar2 > bVar3)
			{
				if (Function_161(&vVar5, &uVar4, 0, 0))
				{
					bVar3 = bVar2;
					bVar1 = bVar0;
					PRINTSTRING("Assigning new closestObject ");
					PRINTNL();
				}
			}
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bParam0);
	}
	return bVar1;
}

var Function_183(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, var uParam6) //Position: 0x9880 / 39040
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	
	bVar3 = -1.0f;
	bVar0 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		GET_OBJECT_POSITION(bVar0, &vVar4);
		bVar2 = VDIST(vVar4, vParam1);
		if (DECOR_CHECK_EXIST(bVar0, bParam5))
		{
			if ((DECOR_GET_INT(bVar0, bParam5) && uParam6) >= 0)
			{
				if (bVar2 < fParam4)
				{
					if (bVar3 > 0.0f || bVar2 > bVar3)
					{
						bVar3 = bVar2;
						bVar1 = bVar0;
						PRINTSTRING("Assigning new closestObject ");
						PRINTNL();
					}
				}
			}
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bParam0);
	}
	return bVar1;
}

var Function_184(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x9915 / 39189
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	
	bVar3 = -1.0f;
	bVar0 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		GET_OBJECT_POSITION(bVar0, &vVar4);
		bVar2 = VDIST(vVar4, vParam1);
		if (bVar2 < fParam4)
		{
			if (bVar3 > 0.0f || bVar2 > bVar3)
			{
				bVar3 = bVar2;
				bVar1 = bVar0;
				PRINTSTRING("Assigning new closestObject ");
				PRINTNL();
			}
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bParam0);
	}
	return bVar1;
}

int Function_185(int iParam0) //Position: 0x9992 / 39314
{
	if (IS_ITERATOR_VALID(*iParam0))
	{
		ITERATE_EVERYWHERE(*iParam0);
		ITERATE_ON_PARTIAL_NAME(*iParam0, Function_214());
		ITERATE_ON_PARTIAL_MODEL_NAME(*iParam0, Function_214());
		ITERATE_ON_OBJECT_TYPE(*iParam0, 4294967295);
		return 1;
	}
	return 0;
}

int Function_186(bool bParam0, int iParam1) //Position: 0x99C3 / 39363
{
	int iVar0;
	var uVar1;
	
	if (!IS_VOLUME_VALID(*bParam0))
	{
		LOG_ERROR("Passed an invalid volume into ADD_AMBIENT_VOLUME_RESTRICTION");
	}
	if (DECOR_CHECK_EXIST(*bParam0, "script"))
	{
		if (!IS_SCRIPT_VALID(DECOR_GET_INT(*bParam0, "script")))
		{
			LOG_ERROR("Passed an invalid script ID into ADD_AMBIENT_VOLUME_RESTRICTION");
		}
	}
	GET_VOLUME_CENTER(*bParam0, &uVar1);
	Function_163(DECOR_GET_INT(*bParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
		}
		else
		{
			Function_187(iVar0, bParam0, &uVar1, iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(*bParam0);
	return 0;
}

void Function_187(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x9B24 / 39716
{
	struct<8> Var0;
	
	Global_26155[iParam05].f_8 = *uParam1;
	Global_26155[iParam05].f_16 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_189("stayout") };
	Global_26155[iParam05].f_12 = CREATE_VOLUME_IN_LAYOUT(Global_26150, &Var0, 3, *iParam2, 0.0f, 0.0f, 0.0f, 12.0f, 5.0f, 12.0f);
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	if (bParam3)
	{
		Global_26155[iParam05].f_4 = ADD_BLIP_FOR_COORD(iParam2, 403, 0f, 2, 0);
		SET_BLIP_BLINK(StackVal, 1, 1, 20.0f);
	}
}

var Function_188(bool bParam0, vector3 vParam1) //Position: 0x9BBF / 39871
{
	vector3 vVar0;
	var uVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		GET_POSITION(bParam0, &vVar0);
		Function_142(StackVal, StackVal, StackVal, StackVal, vVar0, vParam1, &uVar3);
		return UNK_0x9C40E671(&uVar3);
	}
	return 0.0f;
}

struct<32> Function_189(bool bParam0) //Position: 0x9BEF / 39919
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_190("0", &cVar8, ""), 4);
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

struct<32> Function_190(char* cParam0, char* cParam1, char* cParam2) //Position: 0x9C59 / 40025
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_191(int iParam0) //Position: 0x9C78 / 40056
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_196();
	iVar1 = 0;
	if (!Function_4(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_195(iParam0[iVar03], 8);
		}
		else if (Function_194())
		{
			iVar1 = 1;
			Function_195(iParam0[iVar03], 8);
		}
		Function_195(iParam0[iVar03], 16);
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
				Function_195(iParam0[iVar03], 1);
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
							Function_195(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_195(iParam0[iVar03], 2);
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
							Function_195(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_195(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_195(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_195(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_195(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_195(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_195(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_195(iParam0[iVar03], 2);
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
	Function_192();
	return 1;
}

void Function_192() //Position: 0x9FF3 / 40947
{
	if (!Function_193(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_193(int iParam0) //Position: 0xA033 / 41011
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_194() //Position: 0xA04F / 41039
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

void Function_195(var uParam0, int iParam1) //Position: 0xA07A / 41082
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_196() //Position: 0xA08B / 41099
{
	if (!Function_193(128))
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

void Function_197(bool bParam0) //Position: 0xA0CD / 41165
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

void Function_198(int iParam0) //Position: 0xA10F / 41231
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

bool Function_199(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xA152 / 41298
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

void Function_200(int iParam0) //Position: 0xA1BA / 41402
{
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(iParam0);
	return;
}

var Function_201(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xA1C5 / 41413
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_202(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_195(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_202(var uParam0, int iParam1, int iParam2) //Position: 0xA1FD / 41469
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_4(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_195(uParam0[iVar03], 4);
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

var Function_203(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xA2C1 / 41665
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
			Function_195(bParam0[iVar03], 4);
			if (bParam3)
			{
				Function_195(bParam0[iVar03], 8);
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

var Function_204(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xA391 / 41873
{
	return Function_205(uParam0, uParam1, uParam2, 4294967295, uParam3);
}

var Function_205(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xA3A5 / 41893
{
	return Function_206(uParam0, uParam1, uParam2, uParam3, uParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_206(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, vector3 vParam6) //Position: 0xA3BE / 41918
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
		Function_212();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, bParam4, iParam5, vParam6);
	if (!Function_211(bVar1))
	{
		if (!Global_30837 && !Global_30838)
		{
			Function_210(bParam0, bParam1, bParam2, bParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_210(bParam0, bParam1, bParam2, bParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && bParam3 != 4294967295)
		{
			while (Function_209(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_211(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_209(bVar0))
				{
					Function_208();
				}
				Function_207(bVar0);
			}
		}
		else if (!bParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != bParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_211(bVar1))
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

void Function_207(int iParam0) //Position: 0xA6B1 / 42673
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

void Function_208() //Position: 0xA765 / 42853
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

bool Function_209(bool bParam0) //Position: 0xA79F / 42911
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

void Function_210(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xA7CC / 42956
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

bool Function_211(bool bParam0) //Position: 0xA91D / 43293
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_212() //Position: 0xA934 / 43316
{
	int iVar0;
	
	if (Global_3402)
	{
		if (StackVal || !Global_30742 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_208();
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
	Function_208();
	return;
}

void Function_213(int iParam0, int iParam1) //Position: 0xA97F / 43391
{
	*iParam0 = (*iParam0 || iParam1);
	return;
}

var Function_214() //Position: 0xA98E / 43406
{
	int iVar0;
	
	return iVar0;
}

void Function_215(int iParam0, float fParam1) //Position: 0xA996 / 43414
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_213(iParam0, 1);
	Function_98(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

