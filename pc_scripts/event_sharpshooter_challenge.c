//Decompiled with MagicRDR v1.0
//Function Count : 222
//Statics Count : 168
//Natives Count : 390
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
	float fLocal_27 = 0.0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0.0f;
	bool bLocal_31 = false;
	bool bLocal_32 = false;
	int iLocal_33 = 0;
	bool bLocal_34 = false;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	struct<8> Local_39 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	struct<2> Local_55 = { 0, 0 } ;
	var uLocal_57 = 0;
	int iLocal_58 = 0;
	bool bLocal_59 = false;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	bool bLocal_62 = false;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	int iLocal_82 = 0;
	var uLocal_83 = 0;
	bool bLocal_84 = false;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	int iLocal_87 = 0;
	bool bLocal_88 = false;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	bool bLocal_91 = false;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	int iLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	bool bLocal_104 = false;
	int iLocal_105 = 0;
	struct<65> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	bool bVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	var uVar6;
	var uVar23;
	var uVar24;
	int iVar26;
	int iVar27;
	struct<2> Var28;
	struct<2> Var30;
	struct<2> Var32;
	struct<2> Var34;
	struct<2> Var36;
	var uVar38;
	var uVar39;
	int iVar40;
	int iVar41;
	struct<2> Var42;
	var uVar44;
	bool bVar45;
	var uVar48;
	bool bVar50;
	var uVar51;
	var uVar52;
	var uVar53;
	float fVar54;
	int iVar55;
	bool bVar56;
	
	iLocal_18 = 0;
	iLocal_19 = 0;
	fLocal_27 = 0.0f;
	iLocal_33 = 0;
	bLocal_34 = false;
	iLocal_60 = 0;
	bLocal_62 = false;
	iLocal_71 = 0;
	iLocal_72 = 0;
	iLocal_76 = 0;
	iLocal_77 = 0;
	iLocal_89 = 1;
	iLocal_90 = 0;
	bLocal_91 = false;
	iLocal_92 = 1;
	iLocal_101 = 0;
	bLocal_104 = false;
	iVar0 = 0;
	bVar1 = false;
	Function_221(&iLocal_35, 0.0f);
	uVar2 = CREATE_LAYOUT(Function_220());
	iVar3 = 0;
	iVar4 = 0;
	uVar6 = 8;
	iVar26 = 0;
	switch (Global_43787)
	{
		case 0x00000002:
			iVar27 = Function_219(34, 3);
			bLocal_59 = 1148;
			if (iVar27 == 0)
			{
				bVar5 = 144;
			}
			else if (iVar27 == 1)
			{
				bVar5 = 140;
			}
			else
			{
				bVar5 = 141;
			}
			break;
		
		case 0x00000000:
			iVar27 = Function_219(34, 3);
			bLocal_59 = 1145;
			if (iVar27 == 0)
			{
				bVar5 = 144;
			}
			else if (iVar27 == 1)
			{
				bVar5 = 140;
			}
			else
			{
				bVar5 = 141;
			}
			break;
		
		case 0x00000001:
			iVar27 = Function_219(34, 2);
			bLocal_59 = 1151;
			if (iVar27 == 0)
			{
				bVar5 = 280;
			}
			else
			{
				bVar5 = 284;
			}
			break;
	}
	switch (Global_21369.f_240)
	{
		case 0x00000000:
			bLocal_88 = Function_217(1, 0, 1, 0, 0);
			bLocal_31 = 3;
			fLocal_30 = 60.0f;
			break;
		
		case 0x00000001:
			bLocal_88 = Function_217(1, 0, 1, 0, 0);
			bLocal_31 = 4;
			fLocal_30 = 60.0f;
			break;
		
		case 0x00000002:
			bLocal_88 = Function_217(1, 1, 1, 0, 0);
			bLocal_31 = 4;
			fLocal_30 = 45.0f;
			break;
		
		case 0x00000003:
			bLocal_88 = Function_217(1, 1, 1, 0, 0);
			bLocal_31 = 4;
			fLocal_30 = 40.0f;
			break;
		
		case 0x00000004:
			bLocal_88 = Function_217(1, 2, 1, 0, 0);
			bLocal_31 = 4;
			fLocal_30 = 30.0f;
			break;
		
		case 0x00000005:
			bLocal_88 = Function_217(1, 2, 1, 0, 0);
			bLocal_31 = 5;
			fLocal_30 = 30.0f;
			break;
		
		case 0x00000006:
			bLocal_88 = Function_217(2, 1, 1, 0, 0);
			bLocal_31 = 5;
			fLocal_30 = 15.0f;
			break;
		
		case 0x00000007:
			bLocal_88 = Function_217(2, 2, 1, 0, 0);
			bLocal_31 = 6;
			fLocal_30 = 15.0f;
			break;
			bLocal_88 = Function_217(2, 2, 1, 0, 0);
			bLocal_31 = 7;
			fLocal_30 = 15.0f;
			break;
	}
	Function_215(&uVar6, "birds_shooting_challenger", 5, 0);
	Function_215(&uVar6, "custom/birds_shooting_challenger", 8, 0);
	Function_214(&uVar6, bLocal_59, 3, 0);
	Function_214(&uVar6, bVar5, 3, 0);
	Function_215(&uVar6, "Sit_Ground_Campfire_Tend", 1, 0);
	Function_215(&uVar6, "stand_lookdistance_w_any", 1, 0);
	Function_213(bVar5);
	Var28 = Vector(-3.0f, 0.0f, 0.0f);
	Var30 = Vector(1.0f, 0.0f, 1,5f);
	Var32 = Vector(0.0f, 0.0f, 0.0f);
	Var34 = Vector(-1,3f, 0.0f, -0,1f);
	Var36 = Vector(0.0f, 0.0f, 0.0f);
	iVar40 = 0;
	iVar41 = 0;
	bVar50 = false;
	if (Global_6625 == 1)
	{
		iVar0 = 5;
	}
	iVar55 = 0;
	bVar56 = false;
	while (!IS_EXITFLAG_SET())
	{
		uVar44 = GET_PLAYER_ACTOR(0);
		GET_POSITION(&uVar44, &Var42);
		bLocal_84 = 600;
		if (Function_212(&bVar56, &iVar0, &iVar55, &bLocal_84, bVar1))
		{
			if (bVar56)
			{
				Function_211(&bVar45);
			}
			else
			{
				Function_210(&bVar45);
			}
		}
		switch (iVar0)
		{
			case 0x00000000:
				if (Function_204(&uVar6))
				{
					bLocal_84 = false;
					iVar0 = 1;
				}
				break;
			
			case 0x00000001:
				if (Function_167(&ScriptParam_0, &bLocal_84, &iVar41, &iVar40, 1))
				{
					bVar50 = true;
					uVar24 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uVar2, Function_220(), 0f, *(&ScriptParam_0 + 16), Vector(0.0f, 0.0f, 0.0f), Vector(10.0f, 5.0f, 10.0f));
					uVar23 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uVar2, Function_220(), 0f, *(&ScriptParam_0 + 16), Vector(0.0f, 0.0f, 0.0f), Vector(5.0f, 15.0f, 5.0f));
					ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar23);
					ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar23);
					Local_55 = *(&ScriptParam_0 + 16);
					Local_55.f_8 = (StackVal - 25.0f);
					iVar0 = 2;
					bLocal_84 = false;
				}
				else if (iVar40 == 1)
				{
					iVar0 = 5;
					bLocal_84 = false;
				}
				break;
			
			case 0x00000002:
				if (VDIST(Var42, *(&ScriptParam_0 + 16)) > Function_166())
				{
					iVar0 = 5;
					bLocal_84 = false;
					break;
				}
				PRINTVECTOR(*(&ScriptParam_0 + 16));
				PRINTNL();
				PRINTVECTOR(Var42);
				PRINTNL();
				Function_164(StackVal, &uVar51, &uVar52, &uVar53, 1,5f, *(&ScriptParam_0 + 16));
				uVar38 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uVar2, Function_220(), 4,203895E-45f, *(&ScriptParam_0 + 16), Vector(0.0f, 0.0f, 0.0f), Vector(12.0f, 5.0f, 12.0f));
				Function_163(&uVar38);
				uVar39 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_220(), &uVar2, StackVal) + Vector(Var30, *(&ScriptParam_0 + 16), "p_gen_bedRollClosed01x"), Vector(0.0f, 90.0f, 0.0f), 1);
				SNAP_OBJECT_TO_GROUND(&uVar39, 2.0f, 1, 1092616192);
				uVar39 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, 12.0f, 0.0f), *(&ScriptParam_0 + 28), Vector(Function_220(), &uVar2, StackVal) + Vector(Var32, *(&ScriptParam_0 + 16), "p_gen_fire01x")), 1);
				SNAP_OBJECT_TO_GROUND(&uVar39, 2.0f, 1, 1092616192);
				uLocal_85 = CREATE_RMPTFX_EMITTER_ON_OBJECT(StackVal, Function_220(), "amb_campfire_light", &uVar39, Vector(0.0f, 0.0f, 0.0f), 1, &uVar39);
				UNK_0x6745191B(StackVal, &uLocal_85, Vector(0.0f, 0.0f, 0.0f));
				bVar45 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, Vector(Function_220(), &uVar2, StackVal) + Vector(Var28, *(&ScriptParam_0 + 16), bVar5), *(&ScriptParam_0 + 28));
				SET_ACTOR_CAN_PLAY_GESTURES(&bVar45, false);
				Var36.f_4 = Function_161(StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Var28, *(&ScriptParam_0 + 16), StackVal), Local_55);
				uLocal_69 = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, Vector(Function_220(), &uVar2, StackVal) + Vector(Var28, *(&ScriptParam_0 + 16), "stand_lookdistance_w_any"), Var36));
				SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_GRINGO(&uLocal_69), 3.0f, 1, 1092616192);
				AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&bVar45, 0);
				fVar54 = COMBAT_CLASS_AI_GET_RANGE_ACCURACY(&bVar45);
				DECOR_SET_BOOL(&bVar45, "nnostickup", 1);
				SET_ALLOW_EXECUTE(&bVar45, 0);
				DECOR_SET_INT(&bVar45, "iAdditionalMoney", bLocal_88);
				Function_160(&bVar45, 4294967196);
				SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_ACTOR(&bVar45), 6.0f, 1, 1092616192);
				ADD_ACTOR_STAY_WITHIN_VOLUME(&bVar45, &uVar24);
				Function_159(&bVar45);
				Function_147(&uVar2, &iLocal_73, bLocal_31);
				DELETE_ALL_WEAPONS_FROM_ACTOR(&bVar45);
				GIVE_WEAPON_TO_ACTOR(&bVar45, 41, 0f, 1, 1);
				ACTOR_PUT_WEAPON_IN_HAND(&bVar45, 41, 1);
				MEMORY_REPORT_POSITION_AUTO(&bVar45, &uVar44, 1);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(&bVar45, 0);
				UNK_0x99AFD2D1(&bVar45, 1, 1);
				ACTOR_ENABLE_VARIABLE_MESH(&bVar45, 19, true);
				ACTOR_FORCE_WEAPON_RENDER(&bVar45, 5, 1);
				iVar0 = 3;
				bLocal_84 = false;
				break;
			
			case 0x00000003:
				Function_146();
				Function_132(StackVal, Function_146(), &bVar1, ScriptParam_0.f_64, &bVar45, 100, 0x42a00000, 1);
				if (GET_DEBUG_DRAW_STATE())
				{
					if (IS_ACTOR_VALID(&bVar45))
					{
						GET_POSITION(&bVar45, &uVar48);
						bLocal_84 = false;
					}
				}
				if (Function_129(&bVar45, &iLocal_61, &fLocal_27, iLocal_60, 0, 0x40400000))
				{
					HUD_CLEAR_HELP();
					HUD_CLEAR_HELP_QUEUE();
					switch (iLocal_61)
					{
						case 0x00000001:
							Function_128("challengeAggroDanger", iLocal_33, 1);
							Function_127(&bVar45);
							TASK_FLEE_ACTOR(&bVar45, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
							break;
						
						case 0x00000002:
							Function_128("failAggroShot", iLocal_33, 1);
							Function_127(&bVar45);
							TASK_FLEE_ACTOR(&bVar45, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
							break;
						
						case 0x00000004:
							Function_128("failAggroHostile", iLocal_33, 1);
							Function_127(&bVar45);
							Function_126(&bVar45, &Global_54076);
							break;
						
						case 0x00000008:
							Function_128("challengeAggroAttacked", iLocal_33, 1);
							Function_127(&bVar45);
							Function_126(&bVar45, &Global_54076);
							break;
					}
					TASK_PRIORITY_SET(&bVar45, 2);
					CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bVar45);
					AI_GOAL_LOOK_CLEAR(&bVar45);
					bLocal_62 = true;
					iVar0 = 5;
					bLocal_84 = false;
					break;
				}
				if (!Function_119(&bVar45, &uVar44, Function_124(1), 0))
				{
					Function_128("SharpShooter_help06", iLocal_33, 1);
					iVar0 = 5;
					bLocal_84 = false;
					break;
				}
				switch (iVar3)
				{
					case 0x00000000:
						if (Function_35(StackVal, StackVal, StackVal, StackVal, StackVal, Vector(&uVar2, &bVar45, &iVar26) + Vector(Var34, *(&ScriptParam_0 + 16), &iLocal_73)))
						{
							iVar0 = 5;
							bLocal_84 = false;
						}
						break;
				}
				break;
			
			case 0x00000005:
				iVar0 = 6;
				bLocal_84 = false;
				break;
			
			case 0x00000006:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				bLocal_84 = false;
				break;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(bLocal_84);
		}
	}
	if (IS_OBJECT_VALID(&uLocal_85))
	{
		UNK_0xE18028C1(&uLocal_85);
		DESTROY_OBJECT(&uLocal_85);
	}
	if (bLocal_104)
	{
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	}
	Function_210(&bVar45);
	if (bLocal_91)
	{
		UI_EXIT("ChallengePanel");
		UI_POP("Jobs_Games_And_Stuff");
	}
	if (Global_6618 == 0)
	{
		Global_6618 = 1;
		Function_34(8192);
	}
	if (!bVar1)
	{
		Function_28(ScriptParam_0.f_64, 0.0f, 0, 1, 0);
	}
	if (ScriptParam_0.f_40)
	{
		Global_6642 = 0;
	}
	if (bLocal_34)
	{
		HUD_TIMER_DISPLAY(0);
	}
	if (IS_VOLUME_VALID(&uLocal_65))
	{
		DESTROY_VOLUME(&uLocal_65);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_63))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_63);
	}
	Function_23(&iLocal_73);
	if (!bVar1)
	{
		Function_22(&bVar45);
		if (IS_OBJECT_VALID(&uVar2))
		{
			UNK_0xA936E73B(&uVar2, 1);
			MARK_OBJECT_FOR_AGGRESSIVE_CLEANUP(&uVar2, 1);
		}
	}
	else if (Function_18(&bVar45, 0))
	{
		Function_17(&bVar45, &Global_54076, 2, 1);
		COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&bVar45, 13, false);
		COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&bVar45, fVar54);
		TASK_PRIORITY_SET(&bVar45, 2);
		Function_127(&bVar45);
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bVar45);
		AI_GOAL_LOOK_CLEAR(&bVar45);
		if (!bLocal_62)
		{
			Function_8(&bVar45, 4, 0, 1);
		}
		AI_SPEECH_SET_ALLOW_FOR_ACTOR(&bVar45, 1);
		UNK_0x99AFD2D1(&bVar45, 0, 0);
		AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&bVar45, 1);
		Function_7(&bVar45);
	}
	Function_6(bVar5);
	if (bVar50)
	{
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar23);
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar23);
	}
	Function_5(&uVar51, &uVar52, &uVar53);
	Function_1(&uVar6);
	RELEASE_LAYOUT_REF(&uVar2);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x9C9 / 2505
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

void Function_2(struct<2>[] Param0, int iParam1) //Position: 0x9F1 / 2545
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

void Function_3(struct<13> Param0) //Position: 0xB3C / 2876
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_4(struct<13> Param0) //Position: 0xB59 / 2905
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(var uParam0, var uParam1, int iParam2) //Position: 0xB77 / 2935
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

void Function_6(bool bParam0) //Position: 0xBAA / 2986
{
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(bParam0);
	return;
}

void Function_7(bool bParam0) //Position: 0xBB5 / 2997
{
	int iVar0;
	
	if (IS_OBJECT_VALID(&bParam0))
	{
		iVar0 = GET_BLIP_ON_OBJECT(&bParam0);
		while (IS_BLIP_VALID(&iVar0))
		{
			REMOVE_BLIP(&iVar0);
			iVar0 = GET_BLIP_ON_OBJECT(&bParam0);
		}
	}
	return;
}

int Function_8(bool bParam0, int iParam1, int iParam2, int iParam3) //Position: 0xBE8 / 3048
{
	bool bVar0;
	var uVar1;
	
	if (&iParam1 == 5)
	{
		LOG_ERROR("Please Use RELEASE_ACTOR_TO_ACTORROAM_GRINGO");
		LOG_ERROR("Switching to ACTORROAM_BEHAVIOR_DEFAULT for this actor");
		iParam1 = 0;
	}
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (!IS_ACTOR_VEHICLE(&bParam0))
		{
			SQUAD_LEAVE(&bParam0);
		}
		else
		{
			bVar0 = false;
			while (bVar0 < (GET_NUM_DRAFT_POSITIONS(&bParam0) - 1))
			{
				uVar1 = GET_DRAFT_ACTOR(bVar0, &bParam0);
				if (IS_ACTOR_VALID(&uVar1))
				{
					Function_9(&uVar1, 0, 0, 0, 1);
				}
				bVar0++;
			}
		}
		Function_9(&bParam0, &iParam1, &iParam2, &iParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_9(var uParam0, int iParam1, bool bParam2, var uParam3, int iParam4) //Position: 0xCD6 / 3286
{
	char* cVar0[32];
	
	Function_16();
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
	if (Function_15(&uParam0) == 1)
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
	Function_14(&uParam0, 0);
	Function_13(&uParam0, iParam1);
	Function_12(&uParam0, &bParam2);
	Function_11(&uParam0, uParam3);
	if (Function_10(&uParam0) != 5)
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

int Function_10(int iParam0) //Position: 0xF42 / 3906
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_behavior");
}

void Function_11(var uParam0, bool bParam1) //Position: 0xF66 / 3942
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_12(var uParam0, int iParam1) //Position: 0xF8A / 3978
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_target", &iParam1);
	return;
}

void Function_13(var uParam0, bool bParam1) //Position: 0xFB0 / 4016
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_14(var uParam0, bool bParam1) //Position: 0xFD7 / 4055
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_state", bParam1);
	return;
}

int Function_15(bool bParam0) //Position: 0xFFB / 4091
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(&bParam0), "actorRoam_ref");
}

void Function_16() //Position: 0x101A / 4122
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

int Function_17(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x1069 / 4201
{
	if (IS_ACTOR_VALID(&bParam0) && IS_ACTOR_VALID(&iParam1))
	{
		if (!&bParam0 != GET_PLAYER_ACTOR(0))
		{
			MEMORY_CONSIDER_AS(&bParam0, &iParam1, bParam2);
			MEMORY_IDENTIFY(&bParam0, &iParam1);
		}
		if (&iParam3 == 1)
		{
			if (!&iParam1 != GET_PLAYER_ACTOR(0))
			{
				MEMORY_CONSIDER_AS(&iParam1, &bParam0, bParam2);
				MEMORY_IDENTIFY(&iParam1, &bParam0);
			}
		}
	}
	return 1;
}

bool Function_18(bool bParam0, bool bParam1) //Position: 0x10C9 / 4297
{
	if (&bParam1)
	{
		if (IS_ACTOR_HOGTIED(&bParam0))
		{
			if (!(GET_TASK_STATUS(&bParam0, 25) != 1 || GET_TASK_STATUS(&bParam0, 25) != 3))
			{
				MEMORY_CLEAR_EVENTS(&bParam0, 0);
				TASK_FLEE_ACTOR(&bParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
				TASK_PRIORITY_SET(&bParam0, true);
			}
			Function_20(&bParam0);
			return 0;
		}
		if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&bParam0), 163840))
		{
			Function_20(&bParam0);
			return 0;
		}
	}
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (Function_19(&bParam0, 0) && !AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&bParam0), 16384))
		{
			return 0;
		}
		if (IS_ACTOR_ALIVE(&bParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int Function_19(int iParam0, int iParam1) //Position: 0x1174 / 4468
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

int Function_20(int iParam0) //Position: 0x11C6 / 4550
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		Function_21(&iParam0);
		return 1;
	}
	return 0;
}

void Function_21(var uParam0) //Position: 0x11DE / 4574
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

void Function_22(int iParam0) //Position: 0x1211 / 4625
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		RESET_ANIM_SET_FOR_ACTOR(&iParam0, 0);
		TASK_FLEE_ACTOR(&iParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
		TASK_PRIORITY_SET(&iParam0, false);
	}
	return;
}

void Function_23(int iParam0) //Position: 0x1241 / 4673
{
	if (SQUAD_IS_VALID(&iParam0))
	{
		Function_27(&iParam0);
		Function_26(&iParam0);
		Function_24(&iParam0, 1, 0);
		SQUAD_MAKE_EMPTY(&iParam0);
		DESTROY_OBJECT(&iParam0);
	}
	return;
}

void Function_24(var uParam0, bool bParam1, bool bParam2) //Position: 0x1278 / 4728
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SQUAD_LEAVE(&uVar1);
			if (&bParam2)
			{
				if (!Function_25(&uVar1, 0x3f800000, 0x42960000, 1, 1, 0))
				{
					DESTROY_ACTOR(&uVar1);
				}
			}
			if (IS_ACTOR_VALID(&uVar1))
			{
				if (&bParam1)
				{
					RELEASE_ACTOR_AS_AMBIENT(&uVar1);
				}
				else
				{
					RELEASE_ACTOR(&uVar1);
				}
			}
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

bool Function_25(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x1301 / 4865
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5);
}

void Function_26(int iParam0) //Position: 0x1321 / 4897
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		TASK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0));
		bVar0++;
	}
	return;
}

void Function_27(int iParam0) //Position: 0x1356 / 4950
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			Function_21(&uVar1);
		}
		bVar0++;
	}
	return;
}

bool Function_28(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x1392 / 5010
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
		Function_30("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
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
			Function_29(&bVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_29(&bVar0);
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
			Function_29(&bVar0);
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

void Function_29(bool bParam0) //Position: 0x15FE / 5630
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

void Function_30(var uParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1648 / 5704
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_31(Global_10966) };
		}
		PRINT_SMALL_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &Var0, &iParam5);
	}
	else
	{
		uVar4 = "";
		PRINT_SMALL_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &uVar4, &iParam5);
	}
}

struct<16> Function_31(int iParam0) //Position: 0x16CD / 5837
{
	char* cVar0[16];
	
	if (!Function_32())
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

bool Function_32() //Position: 0x170C / 5900
{
	if (Function_33(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_33(int iParam0, int iParam1) //Position: 0x1727 / 5927
{
	return (iParam0 && iParam1) == 0;
}

void Function_34(bool bParam0) //Position: 0x1734 / 5940
{
	if (Function_33(bParam0, 1) && !Function_33(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || bParam0);
	Global_39556 |= 1073741824;
	return;
}

bool Function_35(var uParam0, int iParam1, var uParam2, int iParam3, struct<2> Param4) //Position: 0x1761 / 5985
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = 4.0f;
	switch (uParam0)
	{
		case 0x00000000:
			COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&iParam1, 2.0f);
			iLocal_82 = Function_118(&iParam3);
			fVar2 = Function_117(&iParam1);
			AI_SET_WEAPON_MAX_RANGE(&iParam1, (fVar2 * 1,5f));
			MEMORY_REPORT_POSITION_AUTO(&iParam1, &iLocal_82, 1);
			Function_116(&iParam1, &iLocal_82);
			uParam0 = 1;
			break;
		
		case 0x00000001:
			Function_147(&uParam2, &iParam3, bLocal_31);
			if (!IS_ACTOR_ALIVE(&iLocal_82))
			{
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam1, 13, true);
				iLocal_101 = 0;
				iLocal_82 = Function_118(&iParam3);
				MEMORY_REPORT_POSITION_AUTO(&iParam1, &iLocal_82, 1);
				Function_116(&iParam1, &iLocal_82);
			}
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &iParam1, 1.0f, 35.0f, 1, 1, 0))
			{
				iLocal_87 = 0;
				Function_115(&iLocal_87, &iParam1, 3212836864);
				AI_GOAL_LOOK_AT_ACTOR_NEW(&iParam1, &Global_54076, -1f, 0);
				Function_221(&iLocal_35, 0.0f);
				uParam0 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_114(&iLocal_35, 1.0f))
			{
				if (Function_115(&iLocal_87, &iParam1, 3212836864))
				{
					ADD_BLIP_FOR_ACTOR(&iParam1, 325, 0.0f, 3, 0);
					Function_111();
					Function_110(&iParam1, &Global_54076, "SharpShooter_msg01", "SharpShooter_msg01", 5, 60, 1, 1);
					Function_221(&iLocal_35, 0.0f);
					uParam0 = 3;
				}
			}
			break;
		
		case 0x00000003:
			if ((!IS_AMBIENT_SPEECH_PLAYING(&iParam1) && Function_114(&iLocal_35, 3,3f)) || Function_114(&iLocal_35, 3,3f))
			{
				SET_ANIM_SET_FOR_ACTOR(&iParam1, "birds_shooting_challenger", 0);
				SET_ACTION_NODE_FOR_ACTOR(&iParam1, "birds_shooting_challenger/Talk");
				Function_110(&iParam1, &Global_54076, "SharpShooter_msg02", "SharpShooter_msg02", 5, 60, 1, 1);
				Function_221(&iLocal_35, 0.0f);
				uParam0 = 4;
			}
			break;
		
		case 0x00000004:
			Function_108();
			if (iLocal_58)
			{
				fVar1 = 6.0f;
			}
			else
			{
				fVar1 = 4.0f;
			}
			if (Function_114(&iLocal_35, fVar1))
			{
				if (iLocal_58)
				{
					iLocal_89++;
					bLocal_88 *= 2;
				}
				UI_SET_STRING("beat_dynstr", I2STR(bLocal_88));
				uLocal_65 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uParam2, Function_220(), 0f, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(15.0f, 4.0f, 15.0f));
				uLocal_63 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("SharpShooter_context", &uLocal_65, 25, "@FOOT.INTERACT", 0, 0, 0, 0, 4294967295, 0);
				ATTACH_OBJECTS(StackVal, StackVal, GET_OBJECT_FROM_VOLUME(&uLocal_65), &iParam1, Function_220(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
				if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iParam1)))
				{
					ADD_BLIP_FOR_ACTOR(&iParam1, 325, 0.0f, 3, 0);
				}
				if (iLocal_58)
				{
					Function_107("SharpShooter_help01", 0x41200000, 1, 0, 2, 1, 0);
				}
				uParam0 = 5;
			}
			break;
		
		case 0x00000005:
			Function_108();
			Function_147(&uParam2, &iParam3, bLocal_31);
			if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(&uLocal_63))
			{
				if (Function_106() > bLocal_88)
				{
					Function_105();
					Function_104();
					if (!IS_AMBIENT_SPEECH_PLAYING(&Global_54076))
					{
						Function_110(&Global_54076, &iParam1, "SharpShooterPlayer_msg01", 0, 5, 60, 1, 1);
					}
					RELEASE_SCRIPT_USE_CONTEXT(&uLocal_63);
					DESTROY_VOLUME(&uLocal_65);
					if (!iLocal_71)
					{
						uLocal_28 = CREATE_EVENT_TRAP("killET", 2, &uParam2);
						EVENT_TRAP_ON_PERPETRATOR(&uLocal_28, &Global_54076);
						EVENT_TRAP_STORE_EVENTS(&uLocal_28, 1);
						iLocal_71 = 1;
					}
					Global_6618 = 0;
					Function_103(8192);
					Function_101(bLocal_88, 1);
					DECOR_SET_INT(&iParam1, "iAdditionalMoney", bLocal_88 * 2);
					iLocal_101 = 0;
					Function_147(&uParam2, &iParam3, bLocal_31);
					Function_100(&iParam3, 322, 4294967295, 0.0f, -1.0f, 0x3f800000, 2048, 0);
					iLocal_33 = 1;
					HUD_CLEAR_HELP();
					Function_17(&iParam1, &Global_54076, 5, 1);
					uParam0 = 6;
				}
				else if (Function_106() <= bLocal_88)
				{
					HUD_CLEAR_HELP();
					HUD_CLEAR_HELP_QUEUE();
					Function_107("SharpShooter_help08", 10.0f, 1, 0, 2, 0, 0);
					RELEASE_SCRIPT_USE_CONTEXT(&uLocal_63);
					DESTROY_VOLUME(&uLocal_65);
					uLocal_65 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uParam2, Function_220(), 0f, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(15.0f, 4.0f, 15.0f));
					uLocal_63 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("SharpShooter_context", &uLocal_65, 25, "@FOOT.INTERACT", 0, 0, 0, 0, 4294967295, 0);
					ATTACH_OBJECTS(StackVal, StackVal, GET_OBJECT_FROM_VOLUME(&uLocal_65), &iParam1, Function_220(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
				}
			}
			break;
		
		case 0x00000006:
			iLocal_78 = 0;
			iLocal_79 = 0;
			bLocal_91 = true;
			UI_ENTER("ChallengePanel");
			UI_ENTER("Challenges_1");
			UI_EXIT("Challenges_2");
			UI_SET_STRING("SharpShooter_birdskilled", I2STR(iLocal_32));
			UI_SET_STRING("SharpShooter_targetnum", I2STR(bLocal_31));
			UI_SET_TEXT("Challenges_1", "SharpShooter_score");
			UI_REFRESH("Challenges_1");
			HUD_TIMER_COUNTDOWN(fLocal_30);
			HUD_TIMER_DISPLAY(1);
			bLocal_34 = true;
			UI_SET_STRING("beat_dynstr", I2STR(bLocal_31));
			Function_99("SharpShooter_help03", 0x40f00000, 1, 2, 0, 0, 0, 0);
			RESET_ANIM_SET_FOR_ACTOR(&iParam1, 1);
			iLocal_82 = Function_96(&iParam1, &iLocal_73);
			TASK_FACE_ACTOR(&iParam1, &iLocal_82, 1, -1.0f);
			AI_GOAL_LOOK_AT_ACTOR_NEW(&iParam1, &iLocal_82, -1f, 0);
			TASK_PRIORITY_SET(&iParam1, false);
			Function_7(&iParam1);
			if (bLocal_104)
			{
				Function_94(&iLocal_105, 6, 0, 4294967295, 4294967295);
			}
			Function_93(&iLocal_35);
			uParam0 = 7;
			break;
		
		case 0x00000007:
			if (!Function_18(&iLocal_82, 0))
			{
				iLocal_82 = Function_96(&iParam1, &iLocal_73);
				TASK_FACE_ACTOR(&iParam1, &iLocal_82, 1, -1.0f);
				AI_GOAL_LOOK_AT_ACTOR_NEW(&iParam1, &iLocal_82, -1f, 0);
			}
			if (!iLocal_90)
			{
				if (Function_90(&iLocal_35) < 7.0f)
				{
					UI_SET_STRING("beat_dynstr", I2STR(bLocal_31));
					Function_107("SharpShooter_help07", 0x41200000, 1, 0, 2, 1, 0);
					iLocal_90 = 1;
				}
			}
			if (HUD_TIMER_GET() <= fLocal_30)
			{
				UI_EXIT("Challenges_1");
				if (bLocal_104)
				{
					Function_94(&iLocal_105, 3, 0, 4294967295, 4294967295);
				}
				iLocal_87 = 0;
				Function_115(&iLocal_87, &iParam1, 3212836864);
				iLocal_33 = 0;
				Function_89();
				HUD_TIMER_DISPLAY(0);
				HUD_CLEAR_HELP_QUEUE();
				Function_27(&iParam3);
				Function_128("SharpShooter_help05", 1, 0);
				uParam0 = 10;
				Function_221(&iLocal_93, 0.0f);
				break;
			}
			iVar0 = Function_88(&uParam2);
			if (iVar0 >= 0)
			{
				HUD_CLEAR_HELP_QUEUE();
				bLocal_32 = (bLocal_32 + iVar0);
				UI_SET_STRING("SharpShooter_birdskilled", I2STR(bLocal_32));
				UI_SET_STRING("SharpShooter_targetnum", I2STR(bLocal_31));
				UI_REFRESH("Challenges_1");
				if (bLocal_32 > bLocal_31)
				{
					MEMORY_CLEAR_EVENTS(&iParam1, 1);
					Function_27(&iParam3);
					iLocal_87 = 0;
					Function_115(&iLocal_87, &iParam1, 3212836864);
					iLocal_33 = 0;
					HUD_CLEAR_HELP_QUEUE();
					HUD_TIMER_DISPLAY(0);
					if (bLocal_104)
					{
						Function_94(&iLocal_105, 3, 0, 4294967295, 4294967295);
					}
					Function_87(bLocal_88 * 2, 1, 1);
					Function_63(5, 1, 0);
					uLocal_67 = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(StackVal, &uParam2, Function_220(), "Sit_Ground_Campfire_Tend", Param4, Vector(0.0f, -90.0f, 0.0f)));
					SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_GRINGO(&uLocal_67), 3.0f, 1, 1092616192);
					if (!iLocal_58)
					{
						Function_47(34);
						Global_21369.f_240++;
					}
					Function_221(&iLocal_93, 0.0f);
					Function_221(&iLocal_35, 0.0f);
					uParam0 = 8;
				}
			}
			break;
		
		case 0x00000008:
			Function_108();
			if (!IS_AMBIENT_SPEECH_PLAYING(&Global_54076) && iLocal_78 != 0)
			{
				Function_110(&Global_54076, &iParam1, "SharpShooterPlayer_msg02", 0, 5, 60, 1, 1);
				iLocal_78 = 1;
			}
			if (!iLocal_72)
			{
				Function_42();
			}
			if (Function_115(&iLocal_87, &iParam1, 3212836864))
			{
				if (bLocal_91)
				{
					UI_EXIT("Challenges_1");
					UI_EXIT("ChallengePanel");
					UI_POP("Jobs_Games_And_Stuff");
					bLocal_91 = false;
				}
				uParam0 = 9;
			}
			else if (Function_114(&iLocal_35, 3.0f) && bLocal_91)
			{
				UI_EXIT("Challenges_1");
				UI_EXIT("ChallengePanel");
				UI_POP("Jobs_Games_And_Stuff");
				bLocal_91 = false;
			}
			break;
		
		case 0x00000009:
			Function_108();
			if (!IS_AMBIENT_SPEECH_PLAYING(&Global_54076))
			{
				if (Function_40(&iParam1, &Global_54076, &uLocal_75, &iLocal_76, &iLocal_35, &uParam2, 30.0f, &iLocal_77, &uLocal_80, &bLocal_84, "birds_shooting_challenger", "birds_shooting_challenger\\lose", "SharpShooter_msg03", "SharpShooter_msg03", 30.0f, 2, -5.0f, 0, 4.0f, 0, "", 1, 0, 0, 0x40800000))
				{
					if (iLocal_77 == 1)
					{
						AI_GOAL_LOOK_CLEAR(&iParam1);
						Function_39(&iParam1, &uLocal_67, "UseCase1", 4294967295, 1, 2);
						Function_36(&iParam1, 1);
						Function_221(&iLocal_35, 0.0f);
						bLocal_62 = true;
						return 1;
					}
				}
			}
			break;
		
		case 0x0000000A:
			Function_108();
			if (!iLocal_72)
			{
				Function_42();
				iLocal_72 = 1;
			}
			if (Function_115(&iLocal_87, &iParam1, 3212836864) && iLocal_72)
			{
				SET_ANIM_SET_FOR_ACTOR(&iParam1, "birds_shooting_challenger", 0);
				SET_ACTION_NODE_FOR_ACTOR(&iParam1, "birds_shooting_challenger/win");
				Function_110(&iParam1, &Global_54076, "SharpShooter_msg04", "SharpShooter_msg04", 5, 60, 1, 1);
				Function_221(&iLocal_35, 0.0f);
				bLocal_32 = false;
				if (!iLocal_58)
				{
					Function_47(34);
					iLocal_58 = 1;
				}
				uParam0 = 11;
			}
			break;
		
		case 0x0000000B:
			Function_108();
			if (!IS_AMBIENT_SPEECH_PLAYING(&iParam1) && iLocal_79 != 0)
			{
				iLocal_79 = 1;
				Function_110(&Global_54076, &iParam1, "SharpShooterPlayer_msg03", 0, 5, 60, 1, 1);
			}
			if (!IS_AMBIENT_SPEECH_PLAYING(&Global_54076) && !IS_AMBIENT_SPEECH_PLAYING(&iParam1))
			{
				uParam0 = 4;
			}
			break;
		
		case 0x0000000C:
			if (Function_114(&iLocal_35, 8.0f))
			{
				Function_107("AM_SS_HLP_2", 0x41200000, 1, 0, 2, 1, 0);
				return 1;
			}
			break;
	}
	return 0;
}

int Function_36(bool bParam0, int iParam1) //Position: 0x2313 / 8979
{
	char* cVar0[64];
	
	if (!IS_ACTOR_VALID(&bParam0))
	{
		strcpy(&cVar0, "ACTORROAM_SET_OPTIONS_FOR_ACTOR: invalid actor ", 64);
		stradd(&cVar0, GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(&bParam0)), 64);
		return 0;
	}
	if (!Function_38(&bParam0))
	{
		strcpy(&cVar0, "ACTORROAM_SET_OPTIONS_FOR_ACTOR: invalid actor ", 64);
		stradd(&cVar0, GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(&bParam0)), 64);
		return 0;
	}
	Function_37(&bParam0, iParam1);
	return 1;
}

void Function_37(var uParam0, bool bParam1) //Position: 0x23C0 / 9152
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_options", bParam1);
	return;
}

bool Function_38(bool bParam0) //Position: 0x23E6 / 9190
{
	if (!IS_ACTOR_VALID(&bParam0))
	{
		return 0;
	}
	if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(&bParam0), &Global_26172))
	{
		return 1;
	}
	return 0;
}

int Function_39(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5) //Position: 0x240E / 9230
{
	if (!IS_GRINGO_VALID(&uParam1))
	{
		return 0;
	}
	if (IS_STRING_VALID(&uParam2) != 0 || STRINGS_ARE_EQUAL(&uParam2, ""))
	{
		return 0;
	}
	if (&iParam3 <= 0)
	{
		iParam3 = 4294967295;
	}
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (!IS_ACTOR_VEHICLE(&uParam0))
		{
			SQUAD_LEAVE(&uParam0);
		}
		GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_GRINGO(&uParam1), &Global_10998);
		if (!(GET_TASK_STATUS(&uParam0, 19) != 1 || GET_TASK_STATUS(&uParam0, 19) != 3))
		{
			TASK_USE_GRINGO(&uParam0, &uParam1, &uParam2, &iParam3, 1);
			TASK_PRIORITY_SET(&uParam0, &iParam5);
		}
		Function_9(&uParam0, 5, GET_OBJECT_FROM_GRINGO(&uParam1), &iParam4, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

bool Function_40(bool bParam0, bool bParam1, var uParam2, var uParam3, int iParam4, var uParam5, float fParam6, var uParam7, float fParam8, var uParam9, var uParam10, var uParam11, int iParam12, bool bParam13, var uParam14, int iParam15, var uParam16, bool bParam17, var uParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, var uParam23, float fParam24) //Position: 0x24BB / 9403
{
	int iVar0;
	
	uParam9 = uParam9;
	uParam18 = &uParam18;
	bParam17 = &bParam17;
	if (!IS_ACTOR_VALID(&bParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&bParam1))
	{
		return 0;
	}
	if (GET_LAST_ATTACKER(&bParam0) == &Global_54076)
	{
		TASK_FLEE_ACTOR(&bParam0, &Global_54076, 150.0f, -1.0f, 0, 0, 0);
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
				MEMORY_CLEAR_EVENTS(&bParam0, 0);
				ACTOR_START_FORCE_HOLSTER(&bParam0, 1, 0);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bParam0, 1);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bParam0, 1);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(&bParam0, 0);
				uParam2 = Function_41(&bParam0, &Global_54076);
				AI_GOAL_LOOK_AT_ACTOR_NEW(&bParam0, &bParam1, -1.0f, 1);
				fParam8 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &uParam5, Function_220(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
				ATTACH_OBJECTS(StackVal, StackVal, &fParam8, &bParam1, Function_220(), Vector(0.0f, 0,5f, &uParam16), Vector(0.0f, 0.0f, 0.0f), 4294967295);
				if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &bParam0, 1.0f, &uParam14, 1, 1, 0) || Function_41(&Global_54076, &bParam0) > 2.0f)
				{
					TASK_FOLLOW_OBJECT_AT_DISTANCE(&bParam0, &fParam8, 1.0f, &iParam15);
					TASK_PRIORITY_SET(&bParam0, true);
				}
				uParam3 = 1;
			}
			break;
		
		case 0x00000001:
			if ((Function_41(&bParam0, &bParam1) - uParam2) < fParam6)
			{
				TASK_FLEE_ACTOR(&bParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
				return 0;
			}
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &bParam0, 1.0f, &uParam14, 1, 1, 0))
			{
				iVar0 = TASK_SEQUENCE_OPEN();
				TASK_FACE_ACTOR(0, &bParam1, 0, 3212836864);
				TASK_FACE_ACTOR(0, &bParam1, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bParam0, iVar0);
				TASK_SEQUENCE_RELEASE(iVar0, 1);
				TASK_PRIORITY_SET(&bParam0, true);
				uParam9 = 0;
				uParam3 = 4;
			}
			else if (!Function_18(&bParam0, 0))
			{
				if (IS_ACTOR_VALID(&bParam0))
				{
					TASK_FLEE_ACTOR(&bParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
				}
				return 0;
			}
			break;
		
		case 0x00000003:
			RESET_ANIM_SET_FOR_ACTOR(&bParam0, 1);
			SET_ANIM_SET_FOR_ACTOR(&bParam0, &uParam10, 0);
			SET_ACTION_NODE_FOR_ACTOR(&bParam0, &uParam11);
			TASK_FACE_ACTOR(&bParam0, &bParam1, 1, 3212836864);
			uParam3 = 4;
			break;
		
		case 0x00000004:
			uParam9 = 0;
			if (GET_NTH_TASK_STATUS(&bParam0, 0) != 0 || bParam21)
			{
				if (!&bParam21)
				{
					SET_ANIM_SET_FOR_ACTOR(&bParam0, &uParam10, 1);
					SET_ACTION_NODE_FOR_ACTOR(&bParam0, &uParam11);
				}
				if (&bParam19)
				{
					Function_110(&bParam0, &Global_54076, "nThank_You", 0, 5, 60, 1, 1);
				}
				else
				{
					Function_110(&bParam0, &Global_54076, &iParam12, &bParam13, 5, 60, 1, 1);
				}
				uParam3 = 5;
				Function_221(&iParam4, 0.0f);
			}
			else if (!Function_18(&bParam0, 0))
			{
				return 0;
			}
			break;
		
		case 0x00000005:
			if (uParam23 && !Function_38(&bParam0))
			{
				if (&fParam24 != -1.0f)
				{
					if (!IS_AMBIENT_SPEECH_PLAYING(&bParam0))
					{
						RESET_ANIM_SET_FOR_ACTOR(&bParam0, 1);
						Function_8(&bParam0, 4, 0, 1);
					}
				}
				else if (Function_114(&iParam4, &fParam24))
				{
					RESET_ANIM_SET_FOR_ACTOR(&bParam0, 1);
					Function_8(&bParam0, 4, 0, 1);
				}
			}
			if (&bParam22)
			{
				if (!IS_AMBIENT_SPEECH_PLAYING(&bParam0))
				{
					if (!IS_AMBIENT_SPEECH_PLAYING(&Global_54076))
					{
						if (!IS_STRING_VALID(&bParam20))
						{
							SAY_SINGLE_LINE_CONTEXT(&Global_54076, 409, &bParam0, 0, 0, 5, 4294967295, 4294967295, 0, 1);
						}
						else
						{
							Function_110(&Global_54076, &bParam0, &bParam20, &bParam20, 5, 60, 1, 1);
						}
						uParam3 = 6;
					}
				}
			}
			else if (!IS_AMBIENT_SPEECH_PLAYING(&bParam0))
			{
				uParam3 = 6;
			}
			break;
		
		case 0x00000006:
			if (uParam23 && !Function_38(&bParam0))
			{
				if (Function_114(&iParam4, &fParam24))
				{
					RESET_ANIM_SET_FOR_ACTOR(&bParam0, 1);
					Function_8(&bParam0, 4, 0, 1);
				}
			}
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(&bParam0, &uParam11) && !IS_AMBIENT_SPEECH_PLAYING(&Global_54076))
			{
				RESET_ANIM_SET_FOR_ACTOR(&bParam0, 1);
				uParam7 = 1;
				if (&bParam17)
				{
					Function_8(&bParam0, 4, 0, &iParam15);
					TASK_PRIORITY_SET(&bParam0, 2);
				}
				AI_GOAL_LOOK_CLEAR(&bParam0);
				ACTOR_END_FORCE_HOLSTER(&bParam0);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bParam0, 4294967295);
				return 1;
			}
			break;
	}
	return 1;
}

float Function_41(bool bParam0, bool bParam1) //Position: 0x28E0 / 10464
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!IS_ACTOR_VALID(&bParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(&bParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(&bParam0, &Var0);
	GET_POSITION(&bParam1, &Var2);
	return VDIST(Var0, Var2);
}

void Function_42() //Position: 0x29D5 / 10709
{
	if (Function_46(0) == 0)
	{
		if (!Function_45(0, 2))
		{
			Function_43(0, 2);
			Function_107("AM_SS_HLP_1", 0x41200000, 1, 0, 2, 1, 0);
			Function_43(0, 2);
			Function_107("AM_SS_HLP_2", 0x41200000, 1, 0, 2, 1, 0);
		}
		iLocal_72 = 1;
	}
	return;
}

void Function_43(int iParam0, int iParam1) //Position: 0x2A2F / 10799
{
	Function_44(&Global_77932[iParam018] + 40, iParam1);
	return;
}

void Function_44(int iParam0, int iParam1) //Position: 0x2A44 / 10820
{
	iParam0 = (iParam0 || iParam1);
	return;
}

bool Function_45(int iParam0, int iParam1) //Position: 0x2A55 / 10837
{
	return Function_33(Global_77932[iParam018].f_40, iParam1);
}

int Function_46(int iParam0) //Position: 0x2A6A / 10858
{
	if (0 | Global_53524.f_44)
	{
		return StackVal;
	}
	return StackVal;
}

void Function_47(int iParam0) //Position: 0x2A92 / 10898
{
	Global_26652[iParam04].f_20++;
	if (Global_26652[iParam04].f_20 == 1)
	{
		Function_48(409, 1, 0, 0);
	}
	return;
}

int Function_48(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x2AC3 / 10947
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
	Function_62(iParam0, TO_FLOAT(bParam1), 1);
	Function_61(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_50(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_49(iParam0);
	return 1;
}

void Function_49(bool bParam0) //Position: 0x2CEB / 11499
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

void Function_50(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x2D89 / 11657
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_60(390))), 32);
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
					fVar19 = (Function_59(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_59(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_57(iParam0, fVar19, fVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_54(fVar19, fParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_52(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_51(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_220(), &Var9);
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

var Function_51(int iParam0) //Position: 0x33C7 / 13255
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_52(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x33D8 / 13272
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_53("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_53("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_53("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_53(char* cParam0) //Position: 0x34CF / 13519
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_54(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x34EA / 13546
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_56(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_55(Function_56(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_55(int iParam0, int iParam1) //Position: 0x3551 / 13649
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_56(int iParam0, bool bParam1) //Position: 0x3563 / 13667
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_57(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x3575 / 13685
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
	if (((Function_58(iParam0) != 19 || Function_58(iParam0) != 17) || Function_58(iParam0) != 10) || Function_58(iParam0) != 9)
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

int Function_58(int iParam0) //Position: 0x36A9 / 13993
{
	return Global_55480[iParam016].f_96;
}

float Function_59(int iParam0) //Position: 0x36B8 / 14008
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_60(int iParam0) //Position: 0x36F1 / 14065
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_61(int iParam0) //Position: 0x372E / 14126
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

int Function_62(int iParam0, float fParam1, bool bParam2) //Position: 0x38C8 / 14536
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

void Function_63(int iParam0, bool bParam1, bool bParam2) //Position: 0x3B0C / 15116
{
	int iVar0;
	bool bVar1;
	
	if (Function_86(0) && (!Global_6623 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_85())
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
	iVar0 = Function_84(3);
	Function_81();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (&bParam1)
	{
		Function_79(3, bVar1);
		if (!&bParam2)
		{
			if (!Function_78(Global_119936, 4))
			{
				Function_72(&Global_54076, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_48(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_59(3));
	iVar0 = Function_84(3);
	switch (Global_21369.f_248)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_21369.f_248 = 1;
				Function_65(4, Function_71(Global_21369.f_248), 1);
				Function_64(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_21369.f_248 = 2;
				Function_65(4, Function_71(Global_21369.f_248), 1);
				Function_64(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_21369.f_248 = 3;
				Function_65(4, Function_71(Global_21369.f_248), 1);
				Function_64(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_21369.f_248 = 4;
				Function_65(4, Function_71(Global_21369.f_248), 1);
				Function_64(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_21369.f_248 = 5;
				Function_65(4, Function_71(Global_21369.f_248), 1);
				Function_64(Global_21369.f_244, Global_21369.f_248);
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

void Function_64(int iParam0, int iParam1) //Position: 0x3CE0 / 15584
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

int Function_65(int iParam0, char* cParam1) //Position: 0x3F4A / 16202
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
	Function_69(iParam0, &cParam1, 0, 1);
	iVar1 = Function_66();
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

int Function_66() //Position: 0x40DB / 16603
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
	Function_67();
	return 0;
}

void Function_67() //Position: 0x417C / 16764
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
		Function_68(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_68(int iParam0) //Position: 0x423A / 16954
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

int Function_69(int iParam0, char* cParam1) //Position: 0x42A0 / 17056
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
		Function_70(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &uParam3);
	}
	return 1;
}

void Function_70(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x45F7 / 17911
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

var Function_71(int iParam0) //Position: 0x467F / 18047
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

void Function_72(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x470E / 18190
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_74(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_73(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_73(char* cParam0) //Position: 0x4783 / 18307
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

bool Function_74(int iParam0, var uParam1, int iParam2) //Position: 0x47BD / 18365
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
		if (Function_76(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_75(uVar0))
		{
			case 0x00000002:
				if (!Function_78(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_75(char* cParam0) //Position: 0x4839 / 18489
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

int Function_76(int iParam0) //Position: 0x48DA / 18650
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_77(&iVar1, 2147483648);
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

void Function_77(int iParam0, int iParam1) //Position: 0x4917 / 18711
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
	return;
}

bool Function_78(var uParam0, int iParam1) //Position: 0x492D / 18733
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_79(int iParam0, bool bParam1) //Position: 0x4940 / 18752
{
	bool bVar0;
	int iVar1;
	
	Function_48(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_80(iParam0, 4294967295);
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
	iVar1 = Function_66();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

var Function_80(int iParam0, int iParam1) //Position: 0x4AEC / 19180
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

void Function_81() //Position: 0x4B31 / 19249
{
	Function_83(3, 0.0f);
	Function_82(3, 10000.0f);
	return;
}

int Function_82(int iParam0, int iParam1) //Position: 0x4B47 / 19271
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_83(int iParam0, int iParam1) //Position: 0x4B87 / 19335
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

int Function_84(bool bParam0) //Position: 0x4BC7 / 19399
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

bool Function_85() //Position: 0x4C08 / 19464
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

var Function_86(int iParam0) //Position: 0x4C33 / 19507
{
	return (*&Global_21369 + 168)[iParam0];
}

int Function_87(bool bParam0, bool bParam1, bool bParam2) //Position: 0x4C42 / 19522
{
	bool bVar0;
	
	bVar0 = Function_84(0);
	if ((Function_84(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_48(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_84(0));
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_6627)
	{
		Function_48(597, bParam0, 0, 0);
	}
	if (&bParam2)
	{
		if ((Function_84(597) + Function_84(450)) >= 10000)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
			{
				AWARD_ACHIEVEMENT(24);
			}
		}
	}
	return 1;
}

var Function_88(int iParam0) //Position: 0x4D14 / 19732
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	var uVar7;
	
	iVar6 = 0;
	if (EVENT_TRAP_SUCCESSFUL_TRAP(&uLocal_28))
	{
		uVar0 = CREATE_OBJECT_ITERATOR(&iParam0);
		ITERATE_IN_EVENT_TRAP(&uVar0, &uLocal_28);
		uVar7 = START_OBJECT_ITERATOR(&uVar0);
		if (IS_OBJECT_VALID(&uVar7))
		{
			while (IS_OBJECT_VALID(&uVar7))
			{
				uVar1 = GET_EVENT_FROM_OBJECT(&uVar7);
				uVar2 = GET_EVENT_TARGET_AS_OBJECT(&uVar1);
				uVar3 = GET_EVENT_PERPETRATOR(&uVar1);
				uVar4 = GET_ACTOR_FROM_OBJECT(&uVar2);
				uVar5 = GET_ACTOR_FROM_OBJECT(&uVar3);
				uVar5 = &uVar5;
				if (IS_ACTOR_VALID(&uVar4))
				{
					if (STRING_CONTAINS_STRING(GET_ACTOR_ENUM_STRING(&uVar4), "FLYING_ANIMAL"))
					{
						iVar6++;
					}
				}
				uVar7 = OBJECT_ITERATOR_NEXT(&uVar0);
			}
			EVENT_TRAP_CLEAR_EVENTS(&uLocal_28);
		}
		EVENT_TRAP_CLEAR_TRAP_FLAG(&uLocal_28);
	}
	if (IS_ITERATOR_VALID(&uVar0))
	{
		DESTROY_ITERATOR(&uVar0);
	}
	return iVar6;
}

void Function_89() //Position: 0x4DDD / 19933
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

float Function_90(vector3 vParam0) //Position: 0x4E66 / 20070
{
	if (Function_92(&vParam0))
	{
		if (Function_91(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_91(int iParam0) //Position: 0x4F33 / 20275
{
	return Function_33(iParam0, 2);
}

bool Function_92(int iParam0) //Position: 0x4F41 / 20289
{
	return Function_33(iParam0, 1);
}

void Function_93(int iParam0) //Position: 0x4F4F / 20303
{
	Function_221(&iParam0, 0.0f);
	return;
}

void Function_94(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x4F5C / 20316
{
	if (iParam0 != iParam1)
	{
		iParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_95(iParam0), &iParam2, &iParam3, &iParam4);
	}
}

var Function_95(int iParam0) //Position: 0x4F86 / 20358
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

var Function_96(int iParam0, int iParam1) //Position: 0x54DB / 21723
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	
	bVar0 = false;
	bVar1 = 4294967295;
	fVar2 = 1E+14.0f;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam1) - 1))
	{
		if (Function_97(SQUAD_GET_ACTOR_BY_INDEX(&iParam1, bVar0), &iParam0) > fVar2)
		{
			fVar2 = Function_97(SQUAD_GET_ACTOR_BY_INDEX(&iParam1, bVar0), &iParam0);
			bVar1 = bVar0;
		}
		bVar0++;
	}
	if (bVar1 >= 4294967295)
	{
		return SQUAD_GET_ACTOR_BY_INDEX(&iParam1, bVar1);
	}
	LOG_WARNING("Couldn't find a closest sqaud member from 'Them' to 'Me' in GET_CLOSEST_SQUAD_MEMBER!");
	return "";
}

float Function_97(bool bParam0, int iParam1) //Position: 0x559E / 21918
{
	var uVar0;
	bool bVar2;
	int iVar4;
	
	GET_POSITION(&bParam0, &uVar0);
	GET_POSITION(&iParam1, &bVar2);
	iVar4 = Function_98(&uVar0, &bVar2);
	return iVar4;
}

float Function_98(struct<2> Param0) //Position: 0x55BF / 21951
{
	struct<2> Var0;
	bool bVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	bVar2 = VMAG(Var0);
	return bVar2;
}

void Function_99(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x55DE / 21982
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
			Var0 = { StackVal, StackVal, StackVal, Function_31(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&uParam0, &iParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&uParam0, &iParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

void Function_100(var uParam0, int iParam1, int iParam2, bool bParam3, var uParam4, int iParam5, var uParam6, bool bParam7) //Position: 0x5673 / 22131
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar2))
		{
			uVar1 = GET_BLIP_ON_ACTOR(&uVar2);
			if (IS_BLIP_VALID(&uVar1))
			{
				if (GET_BLIP_ICON(&uVar1) != iParam1)
				{
					CHANGE_BLIP_ICON(&uVar1, iParam1);
				}
				SET_BLIP_MIN_DISTANCE(&uVar1, &bParam3);
				SET_BLIP_MAX_DISTANCE(&uVar1, &uParam4);
				SET_BLIP_SCALE(&uVar1, &iParam5);
				if (&bParam7)
				{
					SET_BLIP_FLAG(&uVar1, 8192, 0);
				}
			}
			else
			{
				uVar1 = ADD_BLIP_FOR_ACTOR(&uVar2, iParam1, &bParam3, 2, 0);
				SET_BLIP_MAX_DISTANCE(&uVar1, &uParam4);
				SET_BLIP_SCALE(&uVar1, &iParam5);
				if (&bParam7)
				{
					SET_BLIP_FLAG(&uVar1, 8192, 0);
				}
			}
			if (&iParam2 != 4294967295)
			{
				if (HUD_GET_SHOOT_BLIP_ICON_FOR_ACTOR(&uVar2) != &iParam2)
				{
					HUD_SET_SHOOT_BLIP_ICON_FOR_ACTOR(&uVar2, &iParam2);
				}
			}
			else if (HUD_GET_SHOOT_BLIP_ICON_FOR_ACTOR(&uVar2) != 4294967295)
			{
				HUD_CLEAR_SHOOT_BLIP_ICON_FOR_ACTOR(&uVar2);
			}
			if (GET_BLIP_ICON(&uVar1) == 322)
			{
				SET_BLIP_IMPAIRMENT_MASK(&uVar1, (GET_BLIP_IMPAIRMENT_MASK(&uVar1) || uParam6));
			}
		}
		bVar0++;
	}
}

int Function_101(bool bParam0, bool bParam1) //Position: 0x5783 / 22403
{
	bool bVar0;
	
	bVar0 = Function_84(0);
	if ((Function_84(0) - bParam0) <= 0)
	{
		bParam0 = bVar0;
	}
	if (bParam0 >= 0)
	{
		Function_102(0, bParam0, 0);
	}
	else
	{
		return 0;
	}
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, (bParam0 * 4294967295), 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_84(0));
	return 1;
}

int Function_102(int iParam0, bool bParam1, int iParam2) //Position: 0x5814 / 22548
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
	Function_61(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_50(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

void Function_103(int iParam0) //Position: 0x5A11 / 23057
{
	int iVar0;
	
	if (Function_33(iParam0, 1) && Function_33(Global_39556, 1))
	{
	}
	iVar0 = (Global_39556 && iParam0);
	Global_39556 = (Global_39556 - iVar0);
	Global_39556 |= 1073741824;
	return;
}

void Function_104() //Position: 0x5A45 / 23109
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_105() //Position: 0x5A5A / 23130
{
	if (iLocal_92 == 1)
	{
		Function_44(&iLocal_60, 16);
		Function_44(&iLocal_60, 2);
		iLocal_92 = 0;
	}
	return;
}

int Function_106() //Position: 0x5A76 / 23158
{
	return Function_84(0);
}

void Function_107(var uParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x5A80 / 23168
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_31(Global_10966) };
		}
		PRINT_HELP_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

void Function_108() //Position: 0x5B0B / 23307
{
	if (!Function_92(&iLocal_93))
	{
		Function_109(&iLocal_93);
	}
	if (iLocal_92 == 0)
	{
		if (Function_114(&iLocal_93, 5.0f))
		{
			iLocal_60 = 0;
			Function_44(&iLocal_60, 16);
			iLocal_92 = 1;
		}
	}
	return;
}

void Function_109(bool bParam0) //Position: 0x5B3B / 23355
{
	if (!Function_92(&bParam0))
	{
		Function_221(&bParam0, 0.0f);
	}
	return;
}

void Function_110(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x5B52 / 23378
{
	bParam1 = &bParam1;
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (IS_ACTOR_ALIVE(&bParam0) && Function_41(&bParam0, &Global_54076) >= IntToFloat(&iParam5))
		{
			if (!IS_ACTOR_VALID(&bParam1))
			{
				bParam1 = "";
			}
			CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&bParam0);
			if (&bParam6)
			{
				if (IS_ACTOR_HOGTIED(&bParam0))
				{
					if (!SAY_SINGLE_LINE_STRING_BEAT(&bParam0, &iParam2, &bParam1, 1, 1, &iParam4, &iParam7, 0, 0, 1))
					{
						bParam3 = &bParam3;
					}
				}
				else if (!SAY_SINGLE_LINE_STRING_BEAT(&bParam0, &iParam2, &bParam1, 1, 1, &iParam4, &iParam7, 0, 1, 1))
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

void Function_111() //Position: 0x5BFF / 23551
{
	int iVar0;
	
	bLocal_104 = true;
	if (Global_43787 == 0)
	{
		iVar0 = Function_113(3);
		if (iVar0 == 0)
		{
			uLocal_102 = "FTR_SONG_01";
		}
		else if (iVar0 == 1)
		{
			uLocal_102 = "FTR_SONG_03";
		}
		else if (iVar0 == 2)
		{
			uLocal_102 = "FTR_SONG_05";
		}
	}
	else if (Global_43787 == 2)
	{
		if (Function_112())
		{
			uLocal_102 = "NRT_SONG_04";
		}
		else
		{
			uLocal_102 = "NRT_SONG_05";
		}
	}
	else if (Global_43787 == 1)
	{
		iVar0 = Function_113(3);
		if (iVar0 == 0)
		{
			uLocal_102 = "MEX_SONG_01";
		}
		else if (iVar0 == 1)
		{
			uLocal_102 = "MEX_SONG_02";
		}
		else
		{
			uLocal_102 = "MEX_SONG_04";
		}
	}
	AUDIO_MUSIC_FORCE_TRACK(&uLocal_102, "PASTORAL", 0.0f, 500, 4294967295, 3212836864, 0);
	iLocal_105 = 3;
	return;
}

bool Function_112() //Position: 0x5D09 / 23817
{
	return (RAND_INT_RANGE(0, 1999) / 1000) != 0;
}

int Function_113(bool bParam0) //Position: 0x5D1C / 23836
{
	bParam0 = (bParam0 * 1000 - 1);
	return (RAND_INT_RANGE(0, bParam0) / 1000);
}

bool Function_114(int iParam0, float fParam1) //Position: 0x5D35 / 23861
{
	if (Function_92(&iParam0))
	{
		if (Function_90(&iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_115(int iParam0, int iParam1, int iParam2) //Position: 0x5D53 / 23891
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			AI_QUICK_EXIT_GRINGO(&iParam1, 1);
			iVar0 = TASK_SEQUENCE_OPEN();
			TASK_FACE_ACTOR(0, &Global_54076, 0, 3212836864);
			TASK_FACE_ACTOR(0, &Global_54076, 1, &iParam2);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&iParam1, iVar0);
			TASK_SEQUENCE_RELEASE(iVar0, 1);
			TASK_PRIORITY_SET(&iParam1, false);
			iParam0 = 1;
			break;
		
		case 0x00000001:
			if (GET_NTH_TASK_STATUS(&iParam1, 0) == 0)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_116(var uParam0, int iParam1) //Position: 0x5DC5 / 24005
{
	var uVar0;
	
	GET_POSITION(&uParam0, &uVar0);
	TASK_SHOOT_FROM_POSITION(&uParam0, &iParam1, &uVar0);
	return;
}

var Function_117(int iParam0) //Position: 0x5DDE / 24030
{
	struct<5> Var0;
	
	if (GET_ACTOR_CURRENT_WEAPON_AI_PARAMETERS(&iParam0, &Var0))
	{
		return StackVal;
	}
	return 0.0f;
}

var Function_118(int iParam0) //Position: 0x5DF8 / 24056
{
	int iVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return "";
	}
	bVar1 = false;
	while (bVar1 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		iVar0 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar1);
		if (IS_ACTOR_VALID(&iVar0) && IS_ACTOR_ALIVE(&iVar0))
		{
			return &iVar0;
		}
		bVar1++;
	}
	return "";
}

bool Function_119(float fParam0, bool bParam1, float fParam2, bool bParam3) //Position: 0x5E45 / 24133
{
	if (!Function_18(&fParam0, 0))
	{
		if (GET_LAST_ATTACKER(&fParam0) == &Global_54076)
		{
			if (&bParam3)
			{
				Function_120(4294967196, 1, 0);
			}
		}
		return 0;
	}
	if (Function_41(&fParam0, &bParam1) < &fParam2 && &fParam2 == -1.0f)
	{
		return 0;
	}
	if (GET_LAST_ATTACKER(&fParam0) == &Global_54076)
	{
		if (&bParam3)
		{
			Function_120(4294967196, 1, 0);
		}
		TASK_KILL_CHAR(&fParam0, &Global_54076);
		return 0;
	}
	return 1;
}

void Function_120(int iParam0, bool bParam1, bool bParam2) //Position: 0x5ECA / 24266
{
	int iVar0;
	bool bVar1;
	
	if (Function_86(0) && !Global_6623)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_85())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_252 = (Global_21369.f_252 + iParam0);
		return;
	}
	iVar0 = Function_84(1);
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
			Function_79(1, bVar1);
			if (!&bParam2)
			{
				if (!Function_78(Global_119936, 1))
				{
					Function_72(&Global_54076, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_123(1, (4294967295 * bVar1));
			if (!Global_6623)
			{
				if (!Function_78(Global_119936, 2))
				{
					Function_72(&Global_54076, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_48(1, bVar1, 0, 0);
	}
	else
	{
		Function_102(1, (4294967295 * bVar1), 0);
	}
	if (Function_84(1) <= 4294962296)
	{
		Function_122(1, 4294962296, 0);
	}
	else if (Function_84(1) >= 5000)
	{
		Function_122(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_59(1));
	iVar0 = Function_84(1);
	switch (Global_21369.f_244)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_21369.f_244 = 1;
				Function_65(2, Function_121(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_21369.f_244 = 0;
				Function_65(2, Function_121(Global_21369.f_244), 0);
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
				Function_65(2, Function_121(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_21369.f_244 = 1;
				Function_65(2, Function_121(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_21369.f_244 = 3;
				Function_65(2, Function_121(Global_21369.f_244), 1);
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
				Function_65(2, Function_121(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_21369.f_244 = 4;
				Function_65(2, Function_121(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_21369.f_244 = 3;
				Function_65(2, Function_121(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_21369.f_244 = 5;
				Function_65(2, Function_121(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_21369.f_244 = 4;
				Function_65(2, Function_121(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_21369.f_244 = 6;
				Function_65(2, Function_121(Global_21369.f_244), 1);
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
				Function_65(2, Function_121(Global_21369.f_244), 0);
			}
			break;
	}
	Function_64(Global_21369.f_244, Global_21369.f_248);
	return;
}

var Function_121(int iParam0) //Position: 0x61F1 / 25073
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

int Function_122(int iParam0, bool bParam1, bool bParam2) //Position: 0x6294 / 25236
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
		Function_62(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_61(iParam0);
	if (&bParam2)
	{
		Function_50(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_123(int iParam0, bool bParam1) //Position: 0x6530 / 25904
{
	bool bVar0;
	int iVar1;
	
	Function_102(iParam0, bParam1, 0);
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
	iVar1 = Function_80(iParam0, 4294967295);
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
	iVar1 = Function_66();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

float Function_124(bool bParam0) //Position: 0x66DB / 26331
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

void Function_125(float fParam0, int iParam1) //Position: 0x6717 / 26391
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

int Function_126(int iParam0, int iParam1) //Position: 0x67A8 / 26536
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

void Function_127(bool bParam0) //Position: 0x689E / 26782
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

void Function_128(var uParam0, bool bParam1, bool bParam2) //Position: 0x68F1 / 26865
{
	if (bParam1)
	{
		HUD_CLEAR_HELP_QUEUE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
		Function_99(&uParam0, 0x40f00000, 1, 2, 0, 0, 0, 0);
		if (&bParam2)
		{
			Function_89();
		}
	}
	return;
}

bool Function_129(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, float fParam5) //Position: 0x691C / 26908
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
		fVar0 = Function_41(&iParam0, &Global_54076);
		if (!Function_33(&iParam3, 8))
		{
			if (GET_LAST_ATTACKER(&iParam0) == &Global_54076)
			{
				uParam1 = 8;
				Function_130(&iParam0);
				return 1;
			}
		}
		if (!Function_33(&iParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(&iParam0, 1.0f))
			{
				uParam1 = 2;
				Function_130(&iParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(&iParam0, 1.0f, 1.0f))
			{
				uParam1 = 2;
				Function_130(&iParam0);
				return 1;
			}
		}
		if (!Function_33(&iParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(&iParam0) || (((GET_ACTOR_UNDER_RETICLE(&Global_54076, 0) != &iParam0 && IS_PLAYER_WEAPON_ZOOMED(&Global_54076)) && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(&Global_54076) != &iParam0 && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f))
			{
				if (uParam2 > 0.0f)
				{
					uParam1 = 4;
					Function_130(&iParam0);
					return 1;
				}
				if (uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - uParam2) < 1,3f)
					{
						uParam1 = 4;
						Function_130(&iParam0);
						return 1;
					}
				}
				uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_33(&iParam3, 1))
		{
			if (Global_6646 || Global_6647)
			{
				uParam1 = 1;
				Function_130(&iParam0);
				return 1;
			}
		}
		if (!Function_33(&iParam3, 16))
		{
			if (UNK_0x7F454A92(&iParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(&iParam0)) > 2.0f && fVar0 > 18.0f)
				{
					uParam1 = 16;
					Function_130(&iParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_130(int iParam0) //Position: 0x6AE5 / 27365
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&iParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(&iParam0, 1);
	UNK_0x99AFD2D1(&iParam0, 0, 0);
	Function_131(&iParam0);
	MEMORY_CONSIDER_AS(&Global_54076, &iParam0, 2);
	MEMORY_CONSIDER_AS(&iParam0, &Global_54076, 2);
	AI_GOAL_LOOK_CLEAR(&iParam0);
	return;
}

void Function_131(bool bParam0) //Position: 0x6B22 / 27426
{
	SAY_SINGLE_LINE_CONTEXT(&bParam0, 60, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

void Function_132(struct<2> Param0, var uParam2, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7) //Position: 0x6B3B / 27451
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
	else if (!Function_145(StackVal, Param0))
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
			Function_144(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_143(0);
		}
		if (&bParam7)
		{
			Function_141(0, GET_THIS_SCRIPT_ID());
			Global_6615 = GET_THIS_SCRIPT_ID();
			Function_139(iParam3);
			Global_6644 = 1;
		}
		Function_137(iParam3);
		if (Function_136(StackVal, 32768))
		{
			Function_133(1);
		}
		Global_26652[iParam34].f_16++;
		Function_48(408, 1, 0, 0);
	}
}

void Function_133(bool bParam0) //Position: 0x6C50 / 27728
{
	if (bParam0)
	{
		Function_135(0x10000000);
	}
	else
	{
		Function_134(0x10000000);
	}
	Global_39922.f_304 = 0;
	return;
}

void Function_134(int iParam0) //Position: 0x6C75 / 27765
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_135(int iParam0) //Position: 0x6C92 / 27794
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

bool Function_136(var uParam0, int iParam1) //Position: 0x6CA5 / 27813
{
	return (uParam0 && iParam1) == 0;
}

void Function_137(int iParam0) //Position: 0x6CB2 / 27826
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (!Function_33(StackVal, 524288))
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
			bVar1 = Function_138(iVar0 * 60);
			ADD_TIME(&Global_27462[iParam052] + 376, 0, 0, bVar1, 0);
			Global_26652[iParam04] = &Global_27462[iParam052] + 376;
		}
	}
	return;
}

int Function_138(int iParam0) //Position: 0x6D58 / 27992
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_139(int iParam0) //Position: 0x6D6F / 28015
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
	Function_140(&Var0 + 80[Var0.f_762], &(Global_26652[iParam04]), iParam0);
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

void Function_140(vector3 vParam0) //Position: 0x6E0E / 28174
{
	vParam0.y = iParam2;
	vParam0 = Param1.f_16;
	vParam0.f_8 = 1;
	return;
}

void Function_141(int iParam0, int iParam1) //Position: 0x6E2A / 28202
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
			Function_142(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_142(struct<113> Param0) //Position: 0x6EB1 / 28337
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

void Function_143(int iParam0) //Position: 0x6F0F / 28431
{
	*(&Global_21369 + 136) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 136, 0, 0, (&iParam0 + Function_138(900)), 0);
	return;
}

void Function_144(int iParam0) //Position: 0x6F33 / 28467
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, (&iParam0 + Function_138(200)), 0);
	return;
}

bool Function_145(vector3 vParam0) //Position: 0x6F56 / 28502
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

struct<8> Function_146() //Position: 0x6F6E / 28526
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_147(var uParam0, int iParam1, int iParam2) //Position: 0x6F78 / 28536
{
	var uVar0;
	struct<2> Var1;
	struct<2> Var3;
	int iVar5;
	struct<2> Var6;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	
	Function_157(10.0f);
	Var6 = { StackVal, Function_157(10.0f) };
	switch (iLocal_101)
	{
		case 0x00000000:
			if (!IS_OBJECT_VALID(&uVar0))
			{
				Local_39 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_155("nbirdpoint") };
				Var1 = Local_55;
				uVar0 = CREATE_POINT_IN_LAYOUT(StackVal, &uParam0, &Local_39, Var1, Vector(0.0f, 0.0f, 0.0f));
				SNAP_OBJECT_TO_GROUND(&uVar0, 33.0f, 0, 1092616192);
				iVar5 = 1;
			}
			Local_39 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_155("nbirdSquad") };
			if (!SQUAD_IS_VALID(&iParam1))
			{
				iParam1 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uParam0, &Local_39));
			}
			if (SQUAD_IS_VALID(&iParam1))
			{
				Function_154(&iParam1);
				iVar8 = SQUAD_GET_SIZE(&iParam1);
				if (iVar8 <= iParam2)
				{
					iVar9 = (iParam2 - iVar8) + 1;
					iVar10 = 0;
					while (iVar10 <= iVar9)
					{
						Function_152(&Var6, iVar10);
						GET_OBJECT_RELATIVE_POSITION(&uVar0, Function_152(&Var6, iVar10), &Var1);
						Var1.f_4 = (StackVal + (10.0f + RAND_FLOAT_RANGE(0.0f, 20.0f)));
						Var3.f_4 = RAND_FLOAT_RANGE(0.0f, 360.0f);
						Local_39 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_155("genbird_") };
						uVar11 = CREATE_ACTOR_IN_LAYOUT(&uParam0, &Local_39, bLocal_59, Var1, Var3);
						if (iLocal_89 >= 1)
						{
							DECOR_SET_BOOL(&uVar11, "nNoLooting", 1);
						}
						SQUAD_JOIN(&uVar11, &iParam1);
						iVar10++;
					}
				}
				Function_151(&iParam1, 0);
			}
			Function_150(StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(25.0f, 0.0f, 0.0f), Local_55, &iParam1), 8.0f, 9.0f, 18.0f, -1.0f);
			if (iVar5 == 1)
			{
				DESTROY_OBJECT(&uVar0);
			}
			Function_93(&uLocal_97);
			iLocal_101 = 1;
			break;
		
		case 0x00000001:
			break;
		
		case 0x00000002:
			Function_148(&iParam1);
			iLocal_101 = 3;
			break;
		
		case 0x00000003:
			break;
	}
	return;
}

void Function_148(int iParam0) //Position: 0x7136 / 28982
{
	if (SQUAD_IS_VALID(&iParam0))
	{
		Function_27(&iParam0);
		Function_26(&iParam0);
		Function_149(&iParam0);
		SQUAD_MAKE_EMPTY(&iParam0);
		DESTROY_OBJECT(&iParam0);
	}
	return;
}

void Function_149(int iParam0) //Position: 0x716B / 29035
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&iParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SQUAD_LEAVE(&uVar1);
			DESTROY_ACTOR(&uVar1);
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_150(var uParam0, vector3 vParam1) //Position: 0x71B9 / 29113
{
	bool bVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar3 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar3))
		{
			fVar1 = RAND_FLOAT_RANGE(fParam4, fParam5);
			vParam1.f_4 = (vParam1.y + fVar1);
			fVar2 = RAND_FLOAT_RANGE(-fParam3, fParam3);
			vParam1 = (vParam1.x + fVar2);
			fVar2 = RAND_FLOAT_RANGE(-fParam3, fParam3);
			vParam1.f_8 = (vParam1.z + fVar2);
			TASK_BIRD_SOAR_AT_COORD(&uVar3, &vParam1, fParam6, 1106247680);
		}
		bVar0++;
	}
}

void Function_151(var uParam0, bool bParam1) //Position: 0x7235 / 29237
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SET_ACTOR_UPDATE_PRIORITY(&uVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

struct<8> Function_152(vector3 vParam0) //Position: 0x727C / 29308
{
	struct<2> Var0;
	
	if (!Function_153(&vParam0))
	{
		LOG_ERROR("Attempting to GET_FORMATION_POSITION with invalid FORMATION");
		return StackVal, Vector(0.0f, 0.0f, 0.0f);
	}
	if (bParam1 <= 0)
	{
		PRINTSTRING(GET_OBJECT_NAME(&vParam0));
		LOG_ERROR("Attempting to get invalid formation index - less than zero");
		return StackVal, Vector(0.0f, 0.0f, 0.0f);
	}
	if (bParam1 >= (GET_NUM_FORMATION_LOCATIONS(&vParam0) - 1))
	{
		PRINTSTRING(GET_OBJECT_NAME(&vParam0));
		PRINTSTRING(" ");
		PRINTINT(GET_NUM_FORMATION_LOCATIONS(&vParam0));
		PRINTNL();
		LOG_ERROR("Attempting to get invalid formation index - too large!");
		return StackVal, Vector(0.0f, 0.0f, 0.0f);
	}
	GET_FORMATION_LOCATION(&vParam0, bParam1, &Var0);
	Var0 = (Var0 * vParam0.z);
	Var0.f_4 = (StackVal * vParam0.z);
	Var0.f_8 = (StackVal * vParam0.z);
	return StackVal, Var0;
}

bool Function_153(int iParam0) //Position: 0x73C9 / 29641
{
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return 0;
	}
	if (!GET_OBJECT_TYPE(&iParam0) != 30)
	{
		return 0;
	}
	return 1;
}

void Function_154(int iParam0) //Position: 0x73ED / 29677
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&iParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (!IS_ACTOR_ALIVE(&uVar1))
			{
				SQUAD_LEAVE(&uVar1);
			}
			else
			{
				bVar0++;
			}
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

struct<32> Function_155(struct<8> Param0) //Position: 0x7448 / 29768
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_156("0", &cVar8, ""), 4);
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

struct<32> Function_156(char* cParam0) //Position: 0x74B4 / 29876
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<8> Function_157(int iParam0) //Position: 0x74D6 / 29910
{
	Function_158(iParam0, 10);
	return StackVal, Function_158(iParam0, 10);
}

struct<8> Function_158(var uParam0, int iParam1) //Position: 0x74E3 / 29923
{
	struct<2> Var0;
	
	Var0.f_8 = uParam0;
	Var0 = &Global_39559[iParam1];
	return StackVal, Var0;
}

void Function_159(int iParam0) //Position: 0x74FE / 29950
{
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return;
	}
	if (!GET_OBJECT_TYPE(&iParam0) != 15)
	{
		return;
	}
	AI_SET_ENABLE_STICKUP_OVERRIDE(GET_ACTOR_FROM_OBJECT(&iParam0), 0);
	return;
}

void Function_160(var uParam0, bool bParam1) //Position: 0x7527 / 29991
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_INT(&uParam0, "honor", bParam1);
	return;
}

var Function_161(struct<2> Param0, struct<2> Param2) //Position: 0x7549 / 30025
{
	var uVar0;
	
	Function_162(StackVal, StackVal, Param0, Param2, &uVar0);
	return UNK_0x9C40E671(&uVar0);
}

void Function_162(var uParam0, float fParam1, float fParam2, float fParam3, var uParam4) //Position: 0x7563 / 30051
{
	uParam4 = Vector((GET_X(&fParam2) - GET_X(&uParam0)), 0.0f, (GET_Z(&fParam2) - GET_Z(&uParam0)));
}

void Function_163(bool bParam0) //Position: 0x7587 / 30087
{
	bool bVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	
	if (IS_VOLUME_VALID(&bParam0))
	{
		uVar1 = CREATE_OBJECTSET_IN_LAYOUT("TempObjectSetForActors", &Global_10994, 4294967295, 0);
		if (IS_OBJECTSET_VALID(&uVar1))
		{
			LOCATE_ACTORS_IN_VOLUME(&bParam0, &uVar1, 0, 1);
			bVar0 = false;
			while (bVar0 < (GET_OBJECTSET_SIZE(&uVar1) - 1))
			{
				uVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uVar1);
				if (IS_OBJECT_VALID(&uVar2))
				{
					iVar3 = GET_ACTOR_FROM_OBJECT(&uVar2);
					if (IS_ACTOR_VALID(&iVar3))
					{
						if (&iVar3 != GET_PLAYER_ACTOR(0))
						{
							DESTROY_ACTOR(&iVar3);
						}
					}
				}
				bVar0++;
			}
			DESTROY_OBJECTSET(&uVar1);
		}
	}
	return;
}

void Function_164(var uParam0, var uParam1, var uParam2, float fParam3, struct<2> Param4) //Position: 0x7634 / 30260
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
		if (Function_165(StackVal, &Global_46715, "player_herb", &uVar0, 20.0f, 5, Param4) >= 0)
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

int Function_165(char* cParam0, var uParam1, char*[] cParam2, float fParam3, int iParam4, struct<2> Param5) //Position: 0x76DF / 30431
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

float Function_166() //Position: 0x7785 / 30597
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

bool Function_167(struct<65> Param0) //Position: 0x77B6 / 30646
{
	struct<8> Var0;
	var uVar8;
	var uVar9;
	
	if (Global_6612 && Param0.f_40)
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_155(GET_SCRIPT_NAME()) };
		uVar8 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Vector(*(&Param0 + 16), Function_203(0.0f, &Global_54076, *(&Param0 + 16)), 0.0f), Vector(Param0.f_60, 20.0f, Param0.f_60));
		DECOR_SET_INT(&uVar8, "script", GET_THIS_SCRIPT_ID());
		if (Param0.f_64 != 4294967295)
		{
			DECOR_SET_INT(StackVal, &uVar8, "category");
			Function_201(&uVar8, Param0.f_40);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
		*(&Param0 + 16) = Global_54078;
		return 1;
	}
	uParam3 = 0;
	if (!Function_168(&Param0))
	{
		if (Param0.f_40 == 1)
		{
			if (uParam2 == 0)
			{
				Function_30("Still scanning for the proper terrain to run this event.  Move the player around to find a good spawn location.", -1.0f, 1, 2, 1, 0);
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
		Function_30("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 5.0f, 1, 2, 1, 0);
	}
	if (&bParam4)
	{
		if (!Function_28(Param0.f_64, 0, 1, 0, 0))
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
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_155("restrictVol") };
		uVar9 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Vector(*(&Param0 + 16), Function_203(0.0f, &Global_54076, *(&Param0 + 16)), 0.0f), Vector(Param0.f_60, 20.0f, Param0.f_60));
		DECOR_SET_INT(&uVar9, "script", GET_THIS_SCRIPT_ID());
		if (Param0.f_64 != 4294967295)
		{
			DECOR_SET_INT(StackVal, &uVar9, "category");
			Function_201(&uVar9, Param0.f_40);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
	}
	return 1;
}

bool Function_168(struct<73> Param0) //Position: 0x7B74 / 31604
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
			Function_200(&Param0 + 8);
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
						uVar0 = Function_199(StackVal, &Param0 + 8, Var7, 0,01f);
					}
					else
					{
						uVar0 = Function_198(StackVal, &Param0 + 8, Var7, 0,1f, "locflag", (&Param0 + 72 + 36)->f_24);
					}
				}
				else if ((&Param0 + 72 + 36)->f_24 == 0)
				{
					uVar0 = Function_197(StackVal, &Param0 + 8, Var7, Function_166());
				}
				else
				{
					uVar0 = Function_196(StackVal, &Param0 + 8, Var7, Function_166(), "locflag", (&Param0 + 72 + 36)->f_24);
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
			Function_200(&Param0 + 8);
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
					if (Function_195(bVar11))
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
				Function_194(&Param0 + 16, 99.0f, &Param0 + 16, 10);
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
				Function_193(&Var7, &uVar5);
				Var3 = Function_193(&Var7, &uVar5);
				if (!Function_145(StackVal, Var3))
				{
					PRINTSTRING("Player Pos: ");
					PRINTVECTOR(Var7);
					PRINTNL();
					Function_125(&fVar10, &fVar9);
					if (VDIST(Var3, Var7) < ((fVar10 + ((fVar9 - fVar10) / 2.0f)) * 0,8f))
					{
						iVar2 = Function_190(StackVal, &Param0, Var3);
					}
				}
			}
			else
			{
				iVar2 = Function_186(&Param0);
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
					if (!Function_185(StackVal, *(&Param0 + 16)))
					{
						return 0;
					}
				}
				if (Param0.f_68 == 1)
				{
					if (!Function_184(StackVal, *(&Param0 + 16)))
					{
						return 0;
					}
				}
				if (Function_33(StackVal, 131072))
				{
					if (StackVal || Function_183(Function_183(StackVal, *(&Param0 + 16)), Global_54078))
					{
						return 0;
					}
				}
				if (StackVal & 1024 == 1024)
				{
					if (Function_182(StackVal, *(&Param0 + 16)))
					{
						return 0;
					}
				}
				if (!Function_177(&Param0 + 16, &Param0 + 60, 0, Param0.f_40))
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
				uVar17 = START_CURVE_QUERY(&Global_43578, Var3, Function_176((&Param0 + 72)->f_148, 0), 0.0f, 20.0f, 5.0f, 0);
			}
			else
			{
				uVar17 = START_CURVE_QUERY(&Global_43578, Var7, Function_176((&Param0 + 72)->f_148, 0), 120.0f, 150.0f, 5.0f, 0);
			}
			if (GET_NUM_POINTS_IN_CURVE_QUERY(&uVar17) >= 0)
			{
				bVar15 = RAND_INT_RANGE(0, (GET_NUM_POINTS_IN_CURVE_QUERY(&uVar17) - 1));
				GET_POINT_FROM_CURVE_QUERY(&uVar17, bVar15, &Var12);
				Function_175(&Var12);
				*(&Param0 + 16) = Function_175(&Var12);
				Param0.f_28 = Var12.f_12;
				(&Param0 + 28)->f_4 = Var12.f_16;
				Param0.f_56 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(&uVar17, bVar15);
				UNK_0xDF93BD7C(&uVar17);
			}
			else
			{
				UNK_0xDF93BD7C(&uVar17);
				return 0;
			}
			if (Param0.f_68 == 2)
			{
				if (!Function_185(StackVal, *(&Param0 + 16)))
				{
					return 0;
				}
			}
			if (Param0.f_68 == 1)
			{
				if (!Function_184(StackVal, *(&Param0 + 16)))
				{
					return 0;
				}
			}
			if (Param0.f_68 == 0)
			{
				if (!(StackVal || Function_185(Function_184(StackVal, *(&Param0 + 16)), *(&Param0 + 16))))
				{
					return 0;
				}
			}
			if (Function_33(StackVal, 131072))
			{
				if (StackVal || Function_183(Function_183(StackVal, *(&Param0 + 16)), Global_54078))
				{
					return 0;
				}
			}
			if (StackVal && !Function_177(&Param0 + 16, &Param0 + 60, 0, Param0.f_40) == 262144)
			{
				return 0;
			}
			break;
		
		case 0x00000004:
			if (!Function_173((&Param0 + 72)->f_148) < 0)
			{
				return 0;
			}
			break;
		
		case 0x00000007:
			switch ((&Param0 + 72)->f_156)
			{
				case 0x00000001:
					iVar18 = Function_170(StackVal, Global_43787, Global_43788, Global_43789, 1);
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
						iVar18 = Function_170(StackVal, Global_43787, Global_43788, (Global_43789 + iVar16), 1);
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
	if (Function_169(StackVal, *(&Param0 + 16)))
	{
		return 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(*(&Param0 + 16), 10.0f))
	{
		return 0;
	}
	return 1;
}

bool Function_169(struct<2> Param0) //Position: 0x843C / 33852
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

int Function_170(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x8473 / 33907
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
								return Function_171(&Global_11014, &Global_12796, bParam3);
								break;
							
							case 0x00000001:
								return Function_171(&Global_11146, &Global_12992, bParam3);
								break;
							
							case 0x00000002:
								return Function_171(&Global_11120, &Global_12954, bParam3);
								break;
							
							default:
								return Function_171(&Global_11200, &Global_13072, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_171(&Global_11420, &Global_13398, bParam3);
								break;
							
							case 0x00000001:
								return Function_171(&Global_11222, &Global_13104, bParam3);
								break;
							
							case 0x00000003:
								return Function_171(&Global_11284, &Global_13196, bParam3);
								break;
							
							case 0x00000002:
								return Function_171(&Global_11398, &Global_13366, bParam3);
								break;
							
							case 0x00000004:
								return Function_171(&Global_11492, &Global_13504, bParam3);
								break;
							
							default:
								return Function_171(&Global_11482, &Global_13490, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_171(&Global_11544, &Global_13580, bParam3);
								break;
							
							case 0x00000001:
								return Function_171(&Global_11646, &Global_13732, bParam3);
								break;
							
							case 0x00000002:
								return Function_171(&Global_11704, &Global_13818, bParam3);
								break;
							
							default:
								return Function_171(&Global_11518, &Global_13542, bParam3);
								break;
						}
						break;
					
					case 0x00000003:
						switch (bVar1)
						{
							case 0x00000001:
								return Function_171(&Global_11752, &Global_13888, bParam3);
								break;
							
							default:
								return Function_171(&Global_11826, &Global_13998, bParam3);
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
								return Function_171(&Global_11836, &Global_14012, bParam3);
								break;
							
							case 0x00000001:
								return Function_171(&Global_11946, &Global_14176, bParam3);
								break;
							
							case 0x00000002:
								return Function_171(&Global_11988, &Global_14238, bParam3);
								break;
							
							default:
								return Function_171(&Global_12038, &Global_14312, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_171(&Global_12048, &Global_14326, bParam3);
								break;
							
							default:
								return Function_171(&Global_12274, &Global_14662, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000002:
								return Function_171(&Global_12284, &Global_14676, bParam3);
								break;
							
							case 0x00000001:
								return Function_171(&Global_12342, &Global_14762, bParam3);
								break;
							
							case 0x00000003:
								return Function_171(&Global_12392, &Global_14836, bParam3);
								break;
							
							default:
								return Function_171(&Global_12472, &Global_14954, bParam3);
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
		return Function_171(&Global_11014, &Global_12796, bParam3);
	}
	if (bVar1 == Global_46760[1])
	{
		return Function_171(&Global_11146, &Global_12992, bParam3);
	}
	if (bVar1 == Global_46760[2])
	{
		return Function_171(&Global_11120, &Global_12954, bParam3);
	}
	if (bVar1 == Global_46796[0])
	{
		return Function_171(&Global_11420, &Global_13398, bParam3);
	}
	if (bVar1 == Global_46796[1])
	{
		return Function_171(&Global_11222, &Global_13104, bParam3);
	}
	if (bVar1 == Global_46796[3])
	{
		return Function_171(&Global_11284, &Global_13196, bParam3);
	}
	if (bVar1 == Global_46796[2])
	{
		return Function_171(&Global_11398, &Global_13366, bParam3);
	}
	if (bVar1 == Global_46796[4])
	{
		return Function_171(&Global_11492, &Global_13504, bParam3);
	}
	if (bVar1 == Global_46816[0])
	{
		return Function_171(&Global_11544, &Global_13580, bParam3);
	}
	if (bVar1 == Global_46816[1])
	{
		return Function_171(&Global_11646, &Global_13732, bParam3);
	}
	if (bVar1 == Global_46816[2])
	{
		return Function_171(&Global_11704, &Global_13818, bParam3);
	}
	if (bVar1 == Global_46838[1])
	{
		return Function_171(&Global_11752, &Global_13888, bParam3);
	}
	if (bVar1 == Global_46850[0])
	{
		return Function_171(&Global_11836, &Global_14012, bParam3);
	}
	if (bVar1 == Global_46850[1])
	{
		return Function_171(&Global_11946, &Global_14176, bParam3);
	}
	if (bVar1 == Global_46850[2])
	{
		return Function_171(&Global_11988, &Global_14238, bParam3);
	}
	if (bVar1 == Global_46866[0])
	{
		return Function_171(&Global_12048, &Global_14326, bParam3);
	}
	if (bVar1 == Global_46894[2])
	{
		return Function_171(&Global_12284, &Global_14676, bParam3);
	}
	if (bVar1 == Global_46894[1])
	{
		return Function_171(&Global_12342, &Global_14762, bParam3);
	}
	if (bVar1 == Global_46894[3])
	{
		return Function_171(&Global_12392, &Global_14836, bParam3);
	}
	if (bVar1 == Global_46736[0])
	{
		return Function_171(&Global_11200, &Global_13072, bParam3);
	}
	if (bVar1 == Global_46736[1])
	{
		return Function_171(&Global_11482, &Global_13490, bParam3);
	}
	if (bVar1 == Global_46736[2])
	{
		return Function_171(&Global_11518, &Global_13542, bParam3);
	}
	if (bVar1 == Global_46736[3])
	{
		return Function_171(&Global_11826, &Global_13998, bParam3);
	}
	if (bVar1 == Global_46746[0])
	{
		return Function_171(&Global_12038, &Global_14312, bParam3);
	}
	if (bVar1 == Global_46746[2])
	{
		return Function_171(&Global_12274, &Global_14662, bParam3);
	}
	if (bVar1 == Global_46746[1])
	{
		return Function_171(&Global_12472, &Global_14954, bParam3);
	}
	return "";
}

var Function_171(struct<2>[] Param0, vector3[] vParam1, bool bParam2) //Position: 0x8A89 / 35465
{
	int iVar0;
	
	iVar0 = bParam2;
	if (iVar0 <= Param0 || iVar0 > 0)
	{
		return "";
	}
	if (!Function_172(&(Param0[iVar02]), 2))
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

bool Function_172(var uParam0, int iParam1) //Position: 0x8AE3 / 35555
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_173(int iParam0) //Position: 0x8B00 / 35584
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
			if (Function_174(GET_SQUAD_FROM_OBJECT(&iVar2)) == &iParam0)
			{
				iVar0++;
			}
			iVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
		}
	}
	DESTROY_ITERATOR(&uVar1);
	return iVar0;
}

int Function_174(int iParam0) //Position: 0x8B68 / 35688
{
	var uVar0;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return 4294967295;
	}
	uVar0 = Function_118(&iParam0);
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

struct<8> Function_175(vector3 vParam0) //Position: 0x8BA6 / 35750
{
	struct<2> Var0;
	
	Var0 = vParam0;
	Var0.f_4 = vParam0.y;
	Var0.f_8 = vParam0.z;
	return StackVal, Var0;
}

int Function_176(int iParam0, int iParam1) //Position: 0x8BC8 / 35784
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

bool Function_177(struct<2> Param0, int iParam2, bool bParam3) //Position: 0x8BFA / 35834
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
	Function_178(4294967295);
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
			else if (Function_98(&Param0, &uVar0) > fVar4)
			{
				return 0;
			}
		}
		iVar2++;
	}
	return 1;
}

int Function_178(int iParam0) //Position: 0x8CD6 / 36054
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
						Function_181(iVar0);
					}
					else if (Global_6629)
					{
						if (Function_179(StackVal, &Global_54076, Var1) < 25.0f)
						{
							Function_181(iVar0);
						}
					}
					else if (Function_179(StackVal, &Global_54076, Var1) < 55.0f)
					{
						Function_181(iVar0);
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
			Function_181(iVar0);
		}
		iVar0++;
	}
	return 0;
}

float Function_179(var uParam0, struct<2> Param1) //Position: 0x8E44 / 36420
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_180(&uParam0);
		Var0 = Function_180(&uParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

struct<8> Function_180(int iParam0) //Position: 0x8EBB / 36539
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

void Function_181(int iParam0) //Position: 0x8F27 / 36647
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

bool Function_182(struct<2> Param0) //Position: 0x8F8F / 36751
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

int Function_183(struct<2> Param0) //Position: 0x9034 / 36916
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

bool Function_184(struct<2> Param0) //Position: 0x9082 / 36994
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

bool Function_185(struct<2> Param0) //Position: 0x90DD / 37085
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

int Function_186(bool bParam0) //Position: 0x915C / 37212
{
	float fVar0;
	bool bVar1;
	
	Function_125(&fVar0, &bVar1);
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER_PLAYER();
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	Function_189(0);
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
		Function_188(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, (&bParam0 + 72 + 84));
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
	Function_187(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&bParam0 + 72 + 84));
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

void Function_187(struct<33> Param0) //Position: 0x930E / 37646
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

void Function_188(struct<5> Param0, var uParam5, var uParam6, var uParam7) //Position: 0x943A / 37946
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

void Function_189(float fParam0) //Position: 0x948B / 38027
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

int Function_190(int iParam0, struct<2> Param1) //Position: 0x94D2 / 38098
{
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER(Param1);
	if (Global_47151[34])
	{
		PRINTVECTOR(Param1);
		PRINTNL();
	}
	Function_192();
	Function_189(0);
	Function_191(0);
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
		Function_188(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iParam0 + 72 + 84));
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
	Function_187(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iParam0 + 72 + 84));
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

void Function_191(bool bParam0) //Position: 0x9687 / 38535
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

void Function_192() //Position: 0x973A / 38714
{
	AMBIENT_SET_DISTANCE_FILTER(0.0f, 24.0f);
	return;
}

struct<8> Function_193(struct<2> Param0) //Position: 0x9749 / 38729
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
	GET_POINT_FROM_CURVE_QUERY(&uVar7, false, &uVar0);
	uVar3 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(&uVar7, false);
	if (IS_OBJECT_VALID(&uVar3))
	{
		uVar12 = Param1;
		UNK_0x19D652F9(&uVar3, 50.0f, &uVar0, &iVar18);
		UNK_0x19D652F9(&uVar3, -50.0f, &uVar0, &iVar21);
		Function_175(&iVar18);
		uVar14 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Function_175(&iVar18), StackVal);
		Function_175(&iVar21);
		uVar16 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Function_175(&iVar21), StackVal);
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
			Function_175(&iVar21);
			Var8 = Function_175(&iVar21);
		}
		else
		{
			UNK_0x19D652F9(&uVar3, fVar6, &uVar0, &iVar18);
			Function_175(&iVar18);
			Var8 = Function_175(&iVar18);
		}
	}
	UNK_0xDF93BD7C(&uVar7);
	return StackVal, Var8;
}

int Function_194(struct<2> Param0, struct<5> Param2) //Position: 0x9863 / 39011
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
		if (!Function_145(StackVal, Param2))
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
			if (!Function_145(StackVal, Param2))
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
		WAIT(false);
	}
	return 0;
}

bool Function_195(bool bParam0) //Position: 0x99A6 / 39334
{
	if (bParam0 > 0 || bParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_196(var uParam0, struct<2> Param1, float fParam3, int iParam4, var uParam5) //Position: 0x99BC / 39356
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
						if (Function_177(&Var5, &fVar4, 0, 0))
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

var Function_197(var uParam0, struct<2> Param1, float fParam3) //Position: 0x9A71 / 39537
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
				if (Function_177(&Var5, &uVar4, 0, 0))
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

var Function_198(var uParam0, struct<2> Param1, float fParam3, int iParam4, var uParam5) //Position: 0x9B03 / 39683
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

var Function_199(var uParam0, struct<2> Param1, float fParam3) //Position: 0x9BA5 / 39845
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

int Function_200(int iParam0) //Position: 0x9C2B / 39979
{
	if (IS_ITERATOR_VALID(&iParam0))
	{
		ITERATE_EVERYWHERE(&iParam0);
		ITERATE_ON_PARTIAL_NAME(&iParam0, Function_220());
		ITERATE_ON_PARTIAL_MODEL_NAME(&iParam0, Function_220());
		ITERATE_ON_OBJECT_TYPE(&iParam0, 4294967295);
		return 1;
	}
	return 0;
}

int Function_201(var uParam0, int iParam1) //Position: 0x9C61 / 40033
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
	Function_178(DECOR_GET_INT(&uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
		}
		else
		{
			Function_202(iVar0, &uParam0, &uVar1, &iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(&uParam0);
	return 0;
}

void Function_202(int iParam0, var uParam1, struct<2> Param2) //Position: 0x9DCB / 40395
{
	struct<8> Var0;
	
	*(&Global_39621[iParam05] + 16) = &uParam1;
	Global_39621[iParam05].f_32 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_155("stayout") };
	*(&Global_39621[iParam05] + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Param2, Vector(0.0f, 0.0f, 0.0f), Vector(12.0f, 5.0f, 12.0f));
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&Global_39621[iParam05] + 24, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&Global_39621[iParam05] + 24);
	if (&bParam3)
	{
		*(&Global_39621[iParam05] + 8) = ADD_BLIP_FOR_COORD(&Param2, 403, 0, 2, 0);
		SET_BLIP_BLINK(&Global_39621[iParam05] + 8, 1, 1, 20.0f);
	}
}

var Function_203(var uParam0, struct<2> Param1) //Position: 0x9E73 / 40563
{
	struct<2> Var0;
	var uVar2;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		GET_POSITION(&uParam0, &Var0);
		Function_162(StackVal, StackVal, Var0, Param1, &uVar2);
		return UNK_0x9C40E671(&uVar2);
	}
	return 0.0f;
}

bool Function_204(struct<2>[] Param0) //Position: 0x9EA1 / 40609
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_209();
	iVar1 = 0;
	if (!Function_4(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_208(&(Param0[iVar02]), 8);
		}
		else if (Function_207())
		{
			iVar1 = 1;
			Function_208(&(Param0[iVar02]), 8);
		}
		Function_208(&(Param0[iVar02]), 16);
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
				Function_208(&(Param0[iVar02]), 1);
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
							Function_208(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_208(&(Param0[iVar02]), 2);
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
							Function_208(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_208(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_208(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_208(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_208(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_208(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_208(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_208(&(Param0[iVar02]), 2);
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
	Function_205();
	return 1;
}

void Function_205() //Position: 0xA263 / 41571
{
	if (!Function_206(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_206(int iParam0) //Position: 0xA2A3 / 41635
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_207() //Position: 0xA2BF / 41663
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

void Function_208(struct<13> Param0) //Position: 0xA2ED / 41709
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_209() //Position: 0xA300 / 41728
{
	if (!Function_206(128))
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

void Function_210(int iParam0) //Position: 0xA342 / 41794
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
			MEMORY_ALLOW_SHOOTING(&iParam0, 1);
		}
	}
	return;
}

void Function_211(int iParam0) //Position: 0xA38B / 41867
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
			MEMORY_ALLOW_SHOOTING(&iParam0, 0);
		}
	}
	return;
}

bool Function_212(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xA3D5 / 41941
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

void Function_213(bool bParam0) //Position: 0xA44D / 42061
{
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(bParam0);
	return;
}

var Function_214(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xA458 / 42072
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
			Function_208(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_208(&(Param0[iVar02]), 8);
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

var Function_215(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0xA534 / 42292
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_216(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_208(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_216(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0xA572 / 42354
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_4(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_208(&(Param0[iVar02]), 4);
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

var Function_217(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xA641 / 42561
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
		fVar0 = (fVar0 * (0,75f + ((TO_FLOAT(Function_84(5)) / 100.0f) * 0,5f)));
	}
	if (&bParam3)
	{
		if (HAS_ITEM(Function_218(17), &Global_54076))
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

var Function_218(bool bParam0) //Position: 0xA748 / 42824
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

int Function_219(int iParam0, int iParam1) //Position: 0xA83C / 43068
{
	int iVar0;
	
	iVar0 = (Global_26652[iParam04].f_16 % iParam1);
	return iVar0;
}

var Function_220() //Position: 0xA852 / 43090
{
	int iVar0;
	
	return &iVar0;
}

void Function_221(vector3 vParam0) //Position: 0xA85B / 43099
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_44(&vParam0, 1);
	Function_77(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

