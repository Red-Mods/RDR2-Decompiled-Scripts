//Decompiled with MagicRDR v1.0
//Function Count : 517
//Statics Count : 561
//Natives Count : 642
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
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	vector3 vLocal_28 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_31 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_34 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_37 = { 0.0f, 0.0f, 0.0f };
	bool bLocal_40 = false;
	bool bLocal_41 = false;
	bool bLocal_42 = false;
	bool bLocal_43 = false;
	bool bLocal_44 = false;
	var uLocal_45 = 0;
	bool bLocal_46 = false;
	var uLocal_47[3] = { 0, 0, 0 };
	var uLocal_51 = 0;
	bool bLocal_52 = false;
	bool bLocal_53 = false;
	bool bLocal_54 = false;
	bool bLocal_55 = false;
	bool bLocal_56 = false;
	bool bLocal_57 = false;
	bool bLocal_58 = false;
	bool bLocal_59 = false;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	int iLocal_62 = 22;
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
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	int iLocal_129 = 0;
	bool bLocal_130 = false;
	struct<861> Local_131 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	struct<8> Var0;
	int iVar8;
	bool bVar9;
	bool bVar10;
	vector3 vVar11;
	vector3 vVar14;
	int iVar17;
	vector3 vVar18;
	
	iLocal_14 = 0;
	iLocal_15 = 0;
	iLocal_22 = 0;
	iLocal_23 = 0;
	iLocal_24 = 0;
	iLocal_25 = 0;
	iLocal_26 = 0;
	iLocal_27 = 0;
	vLocal_28 = { -2128.103f, 16.58369f, 2619.343f };
	vLocal_31 = { -2129.32f, 17.65886f, 2619.586f };
	vLocal_34 = { 0.0f, 0.0f, 0.0f };
	vLocal_37 = { 8.762381f, 3.464221f, 3.192364f };
	bLocal_40 = "";
	bLocal_41 = "";
	bLocal_42 = "";
	bLocal_43 = "";
	uLocal_45 = "";
	bLocal_46 = "";
	uLocal_51 = "";
	bLocal_52 = "";
	iLocal_129 = 1;
	bLocal_475 = false;
	iLocal_476 = 0;
	iLocal_477 = 0;
	bLocal_478 = false;
	vLocal_479 = { 0.0f, 0.0f, 0.0f };
	vLocal_482 = { 0.0f, 0.0f, 0.0f };
	iLocal_495 = 0;
	iLocal_496 = 0;
	bLocal_497 = false;
	iLocal_498 = 0;
	iLocal_499 = 0;
	iLocal_500 = 0;
	iLocal_501 = 0;
	iLocal_502 = 0;
	iLocal_503 = 0;
	bLocal_504 = false;
	iLocal_505 = 0;
	iLocal_506 = 0;
	iLocal_507 = 0;
	iLocal_508 = 0;
	ScriptParam_0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	Function_513(&iLocal_62);
	DECOR_SET_BOOL(Global_34573, "SOL_FTE_B_StillRunning", true);
	while (!IS_EXITFLAG_SET())
	{
		GET_POSITION(Global_34573, &vLocal_479);
		if (IS_ACTOR_VALID(bLocal_40))
		{
			GET_POSITION(bLocal_40, &vLocal_482);
		}
		if (!iLocal_501)
		{
			if (IS_ACTOR_VALID(bLocal_41))
			{
				if (GET_LAST_ATTACKER(bLocal_41) == Global_34573)
				{
					if (HUD_IS_SHOWING_HELP_TEXT())
					{
						HUD_CLEAR_HELP();
						HUD_CLEAR_HELP_QUEUE();
					}
					Function_512("sol_FTE_Help_AttBanker", 0x41200000, 1, 0, 2, 1, 0);
					iLocal_500 = 1;
					iLocal_129 = 16;
				}
			}
		}
		if (!Function_510(&iLocal_129, &Global_34573, &bLocal_40, &Local_131))
		{
			iLocal_503 = 1;
			TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
		}
		if (!iLocal_502)
		{
			if (iLocal_129 > 2)
			{
				if (!iLocal_496)
				{
					if (!IS_ACTOR_ALIVE(bLocal_42))
					{
						if (HUD_IS_SHOWING_OBJECTIVE())
						{
							HUD_CLEAR_OBJECTIVE();
							HUD_CLEAR_OBJECTIVE_QUEUE();
						}
						Function_509("sol_FTE_Sheriff_Died", 0x40f00000, 1, 2, 0, 0, 0, 0);
						iLocal_496 = 1;
					}
				}
			}
		}
		if (DECOR_CHECK_EXIST(Global_34573, "DestroyGateway"))
		{
			if (IS_OBJECT_VALID(bLocal_44))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bLocal_44)))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(bLocal_44));
				}
				DESTROY_OBJECT(bLocal_44);
			}
		}
		switch (iLocal_129)
		{
			case 0x00000001:
				if (Function_504(&iLocal_62))
				{
					if (!IS_LAYOUTREF_VALID(bLocal_46))
					{
						bLocal_46 = CREATE_LAYOUT("SOL_FTE_Layout");
						Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_502("armv_sol_returnWagon") };
						bLocal_58 = CREATE_VOLUME_IN_LAYOUT(bLocal_46, &Var0, 3, -2137.558f, 16.373f, 2625.337f, 0.0f, 0.0f, 0.0f, 5.0f, 8.0f, 15.0f);
						Function_501(&Local_131, 4);
						Function_500(&Local_131, -3868.27f, 8.031f, 3646.229f, 0.0f, 143.637f, 0.0f);
						Function_499(&Local_131, 0);
						Function_498(&Local_131, 1);
						Function_497(&Local_131, 1);
						Function_495(&Local_131, Global_30640[0], 0);
						Function_494(&Local_131, bLocal_58);
						Function_493(&Local_131, 1);
						Function_492(&Local_131, 6);
						Function_491(&Local_131, 3, 4);
						Function_490(&Local_131, 10.0f);
						Function_489(&Local_131, 25.0f);
						Function_488(&Local_131, 50.0f, 70.0f, 0x41700000);
						Function_487(&Local_131, 1);
						Function_486(&Local_131, 1);
						Function_485(&Local_131, 486);
						Function_485(&Local_131, 487);
						Function_485(&Local_131, 488);
						Function_485(&Local_131, 489);
						Function_485(&Local_131, 490);
						Function_485(&Local_131, 491);
					}
					if (Function_484(bLocal_46, &bLocal_40, &bLocal_43, &bLocal_475, &uLocal_61))
					{
						Function_483(&Local_131, bLocal_40);
						Function_482(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_introCharacter"));
						Function_481(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_introCharacter"));
						bLocal_42 = CREATE_ACTOR_IN_LAYOUT(bLocal_46, "IntroGuy", 443, Function_482(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_introCharacter")), Function_481(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_introCharacter")));
						bLocal_53 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_46, "nhelpSquad"));
						SQUAD_JOIN(bLocal_42, bLocal_53);
						SQUAD_SET_FACTION(bLocal_53, 20);
						MEMORY_CONSIDER_AS(bLocal_42, Global_34573, false);
						Function_478(bLocal_53, Function_479("SOL_AA_Squad", FIND_NAMED_LAYOUT("SOL_AA_Layout")), 4);
						TASK_CROUCH(bLocal_42, -1.0f);
						SET_NPC_TO_NPC_DAMAGE_SCALE_FACTOR(0.1f);
						SET_CRIPPLE_ENABLE(bLocal_42, 0);
						SET_ACTOR_ALLOW_DISARM(bLocal_42, 0);
						SET_ACTOR_PROOF(bLocal_42, 128);
						AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bLocal_42, true);
						AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bLocal_42, 12, 0);
						AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bLocal_42, 13, 0);
						Function_477(Function_479("SOL_AA_Squad", FIND_NAMED_LAYOUT("SOL_AA_Layout")));
						AI_GOAL_LOOK_AT_ACTOR_NEW(bLocal_42, Global_34573, -1.0f, 1);
						bLocal_44 = CREATE_GATEWAY_IN_LAYOUT(bLocal_46, "IntroGateway", FIND_VOLUME_IN_LAYOUT(Global_30616, "v_IntroGateway"), Global_34573, 2, 3, 0, false, 1, 1);
						ADD_BLIP_FOR_OBJECT(bLocal_44, 330, 0f, 2, 0);
						bLocal_56 = FIND_VOLUME_IN_LAYOUT(Global_30616, "v_IntroGateway");
						Function_482(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_TeleportHorse"));
						vLocal_491 = { StackVal, StackVal, Function_482(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_TeleportHorse")) };
						bLocal_57 = FIND_VOLUME_IN_LAYOUT(Global_30616, "v_CheckPlayerHorse");
						Function_482(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_introCharacter"));
						vLocal_485 = { StackVal, StackVal, Function_482(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_introCharacter")) };
						Function_481(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_introCharacter"));
						vLocal_488 = { StackVal, StackVal, Function_481(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_introCharacter")) };
						if (!IS_ACTOR_IN_VOLUME(bLocal_42, FIND_VOLUME_IN_LAYOUT(Global_30616, "v_checkToTeleport")))
						{
							SET_OBJECT_POSITION(bLocal_42, vLocal_485);
							SET_OBJECT_ORIENTATION(bLocal_42, vLocal_488);
						}
						if (HUD_IS_SHOWING_OBJECTIVE())
						{
							HUD_CLEAR_OBJECTIVE();
							HUD_CLEAR_OBJECTIVE_QUEUE();
						}
						Function_509("sol_FTE_Find_IntroGuy", 0x40f00000, 1, 2, 0, 0, 0, 0);
						CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("SOLJournalID"), 0);
						APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("SOLJournalID"), "sol_FTE_Find_IntroGuy", 0, 0, false);
						APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("SOLJournalID"), 0);
						iVar8 = 0;
						while (iVar8 <= 4)
						{
							if (!Function_476(&(Global_6490[iVar82]), 2) || Function_476(&(Global_6490[iVar82]), 4))
							{
								bLocal_504 = true;
							}
							iVar8++;
						}
						if (!bLocal_504)
						{
							iLocal_509 = NET_MAILBOX_GET_CHALLENGE_BY_ID("sc_challenge_aa_05");
							SC_CHALLENGE_LAUNCH(iLocal_509);
							if (!Function_475(&iLocal_460))
							{
								Function_474(&iLocal_460);
							}
							else
							{
								Function_472(&iLocal_460);
							}
						}
						Function_471(Global_30735, 1);
						DECOR_SET_BOOL(Global_34573, "shakehands_noCam", true);
						bLocal_59 = CREATE_VOLUME_IN_LAYOUT(bLocal_46, "vStopAttacks", 3, -2148.081f, 17.566f, 2611.195f, 0.0f, 0.0f, 0.0f, 299.2477f, 307.9527f, 299.2477f);
						iLocal_129 = 0;
					}
				}
				break;
			
			case 0x00000000:
				if (!Function_407(&Local_131))
				{
					iLocal_129 = 16;
				}
				else
				{
					iLocal_129 = 2;
					if (!SQUAD_IS_VALID(bLocal_52))
					{
						if (IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("SOL_AA_Layout")))
						{
							bLocal_52 = Function_479("SOL_AA_Squad", FIND_NAMED_LAYOUT("SOL_AA_Layout"));
							PRINTSTRING("Here's how many are in there: ");
							PRINTINT(SQUAD_GET_SIZE(bLocal_52));
							PRINTNL();
						}
					}
				}
				break;
			
			case 0x00000002:
				Function_405("sc_challenge_aa_05", &iLocal_460);
				Function_404(&bLocal_42, &bLocal_53);
				if (iLocal_499)
				{
					if (!iLocal_506)
					{
						if (IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(Global_30616, "v_TaskFloyd")))
						{
							TASK_CLEAR(bLocal_42);
							TASK_SHOOT_ENEMIES_FROM_COVER(bLocal_42, GET_COVER_LOCATION_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_30616, "ncover_low")), -1.0f, 5.0f);
							SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_42, FIND_VOLUME_IN_LAYOUT(Global_30616, "v_IntroGuyStayWithin"), 4, 1);
							iLocal_506 = 1;
						}
					}
				}
				if (SQUAD_IS_VALID(bLocal_52))
				{
					if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_52) == 0)
					{
						if (!Function_475(&iLocal_469))
						{
							Function_474(&iLocal_469);
							SQUAD_SET_FACTION(bLocal_53, 21);
							MEMORY_CONSIDER_AS(bLocal_42, Global_34573, 2);
						}
					}
				}
				if (!bLocal_497)
				{
					if (Function_475(&iLocal_469))
					{
						if (Function_403(&iLocal_469) <= 2.0f)
						{
							if (Function_402(bLocal_42, 0x3f800000, 0x42960000, 1, 1, 0))
							{
								if (Function_401(bLocal_42, Global_34573) >= 30.0f)
								{
									if (GET_NTH_TASK_STATUS(bLocal_42, true) == 1)
									{
										Function_400();
										RESET_ANIM_SET_FOR_ACTOR(bLocal_42, 1);
										SET_ANIM_SET_FOR_ACTOR(bLocal_42, "nthank_you", 0);
										SET_ACTION_NODE_FOR_ACTOR(bLocal_42, "nthank_you");
										iLocal_502 = 1;
										bLocal_497 = true;
										if (!Function_475(&iLocal_472))
										{
											Function_474(&iLocal_472);
										}
									}
								}
							}
						}
					}
				}
				if (!iLocal_498)
				{
					if (IS_VOLUME_VALID(bLocal_56))
					{
						if (IS_ACTOR_IN_VOLUME(Global_34573, bLocal_56) && IS_ACTOR_RIDING_VEHICLE(Global_34573))
						{
							if (HUD_IS_SHOWING_HELP_TEXT())
							{
								HUD_CLEAR_HELP();
								HUD_CLEAR_HELP_QUEUE();
							}
							Function_512("mission_no_vehicle", 0x41200000, 1, 0, 2, 1, 0);
							iLocal_498 = 1;
						}
					}
				}
				if (iLocal_498)
				{
					if (Function_398(Global_34573, bLocal_56) <= 15.0f)
					{
						iLocal_498 = 0;
					}
				}
				if (!iLocal_495)
				{
					if (IS_OBJECT_VALID(bLocal_44))
					{
						if (Function_396(bLocal_44, 0, 1, 0, 1, 0))
						{
							REMOVE_BLIP(GET_BLIP_ON_OBJECT(bLocal_44));
							DESTROY_OBJECT(bLocal_44);
							bVar9 = CREATE_VOLUME_IN_LAYOUT(bLocal_46, Function_395(), 3, -3849.653f, 7.466f, 3690.893f, 0.0f, 0.0f, 0.0f, 5.0f, 5.0f, 5.0f);
							ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar9);
							ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar9);
							CLEAR_AMBIENT_OBJECTS_VOLUME(bVar9, 15);
							DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(bVar9);
							bVar10 = GET_ACTORS_HORSE(Global_34573);
							if (IS_ACTOR_VALID(bVar10))
							{
								if (IS_ACTOR_IN_VOLUME(bVar10, bLocal_57))
								{
									TELEPORT_ACTOR(bVar10, &vLocal_491, 1, 1, 1);
								}
							}
							AI_DONT_HARM_ACTOR(Global_34573);
							AI_DONT_HARM_ACTOR(bLocal_42);
							HUD_CLEAR_HELP();
							HUD_CLEAR_HELP_QUEUE();
							if (!Function_394(Global_30735) != 2)
							{
								Function_393(Global_30735, 1);
								Global_3385 = 1;
								SET_PLAYER_ENDLESS_READYMODE(0, 1);
							}
							Function_388(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
							Function_384(bLocal_46, 0, 1, 0, 0);
							DECOR_SET_BOOL(Global_34573, "RunningCutscene", true);
							DECOR_SET_BOOL(Global_34573, "PrintObjThruCut", true);
							Function_474(&iLocal_463);
							Function_472(&iLocal_463);
							SET_PLAYER_POSTURE(0, 1, 0);
							bLocal_130 = GET_WEAPON_IN_HAND(Global_34573);
							AI_GOAL_LOOK_AT_ACTOR(bLocal_42, Global_34573, 1, 1065353216, 3212836864, 3212836864, 0);
							FORCE_LOOK_AT_ACTOR(bLocal_42, Global_34573, -1.0f);
							SET_PLAYER_CONTROL(false, 0, 0, 0);
							ACTOR_START_FORCE_HOLSTER(Global_34573, 0, 0);
							ACTOR_START_FORCE_HOLSTER(bLocal_42, 1, 0);
							Function_383(Global_34573, 0);
							SET_ACTOR_UPDATE_PRIORITY(Global_34573, false);
							Function_482(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportJohnCrouch"));
							vVar11 = { StackVal, StackVal, Function_482(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportJohnCrouch")) };
							Function_481(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportJohnCrouch"));
							vVar14 = { StackVal, StackVal, Function_481(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportJohnCrouch")) };
							if (!IS_ACTOR_IN_VOLUME(bLocal_42, FIND_VOLUME_IN_LAYOUT(Global_30616, "v_checkToTeleport1")))
							{
								SET_OBJECT_POSITION(bLocal_42, vLocal_485);
								SET_OBJECT_ORIENTATION(bLocal_42, vLocal_488);
							}
							SET_OBJECT_POSITION(Global_34573, vVar11);
							SET_OBJECT_ORIENTATION(Global_34573, vVar14);
							SET_ANIM_SET_FOR_ACTOR(Global_34573, "AA_tesoro_intro_cover", 0);
							SET_ACTION_NODE_FOR_ACTOR(Global_34573, "AA_tesoro_intro_cover/Player/Ply_Pre");
							iLocal_495 = 1;
							iLocal_129 = 3;
						}
					}
				}
				if (Function_382(&bLocal_475, &uLocal_51, &bLocal_40, &bLocal_52, &Local_131, &bLocal_42))
				{
					if (!Function_381(bLocal_475, 16))
					{
						Function_380(&bLocal_475, 16);
						DECOR_SET_BOOL(Global_34573, "SOL_FTE_EngagedAA", true);
					}
					iLocal_129 = 7;
				}
				if (!Function_381(bLocal_475, 128))
				{
					if (IS_LAYOUTREF_VALID(Global_30616))
					{
						if (!IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Global_30616, "solv_region")))
						{
							iLocal_129 = 16;
						}
					}
				}
				else if (VDIST(vLocal_479, vLocal_482) < 50.0f)
				{
					Function_493(&Local_131, 0);
				}
				else
				{
					Function_493(&Local_131, 1);
				}
				if (!Function_211(&Local_131, &iLocal_476, &bLocal_475, &bLocal_41, &iLocal_477, &uLocal_60, &bLocal_46, &uLocal_45, &bLocal_54, &bLocal_42, &bLocal_59, &bLocal_40))
				{
					if (iLocal_476 == 666)
					{
						iLocal_129 = 8;
					}
					else
					{
						iLocal_129 = 16;
					}
				}
				break;
			
			case 0x00000007:
				Function_404(&bLocal_42, &bLocal_53);
				if (SQUAD_IS_VALID(bLocal_52))
				{
					if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_52) == 0)
					{
						if (!Function_475(&iLocal_469))
						{
							Function_474(&iLocal_469);
							SQUAD_SET_FACTION(bLocal_53, 21);
							MEMORY_CONSIDER_AS(bLocal_42, Global_34573, 2);
						}
					}
				}
				if (!bLocal_497)
				{
					if (Function_475(&iLocal_469))
					{
						if (Function_403(&iLocal_469) <= 2.0f)
						{
							if (Function_402(bLocal_42, 0x3f800000, 0x42960000, 1, 1, 0))
							{
								if (Function_401(bLocal_42, Global_34573) >= 30.0f)
								{
									if (GET_NTH_TASK_STATUS(bLocal_42, true) == 1)
									{
										Function_400();
										RESET_ANIM_SET_FOR_ACTOR(bLocal_42, 1);
										SET_ANIM_SET_FOR_ACTOR(bLocal_42, "nthank_you", 0);
										SET_ACTION_NODE_FOR_ACTOR(bLocal_42, "nthank_you");
										iLocal_502 = 1;
										bLocal_497 = true;
										if (!Function_475(&iLocal_472))
										{
											Function_474(&iLocal_472);
										}
									}
								}
							}
						}
					}
				}
				if (!iLocal_507)
				{
					if (bLocal_497)
					{
						if (Function_475(&iLocal_472))
						{
							if (Function_403(&iLocal_472) <= 7.0f)
							{
								if (!IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(Global_30616, "v_TaskFloyd")))
								{
									TASK_CLEAR(bLocal_42);
									CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_42);
									MEMORY_PREFER_RIDING(bLocal_42, true);
									TASK_GO_NEAR_OBJECT(bLocal_42, FIND_OBJECT_IN_LAYOUT(Global_30616, "v_FloydGoToSpot"), 10.0f, 2, 0, 1);
									iLocal_507 = 1;
								}
							}
						}
					}
				}
				iVar17 = Function_209(&bLocal_475, &Local_131);
				if (iVar17 == 2)
				{
					iLocal_129 = 2;
				}
				if (!Function_211(&Local_131, &iLocal_476, &bLocal_475, &bLocal_41, &iLocal_477, &uLocal_60, &bLocal_46, &uLocal_45, &bLocal_54, &bLocal_42, &bLocal_59, &bLocal_40))
				{
					if (iLocal_476 == 666)
					{
						STOP_VEHICLE(Local_131.f_860);
						ENABLE_VEHICLE_SEAT(Local_131.f_860, false, 0);
						ENABLE_VEHICLE_SEAT(Local_131.f_860, true, 0);
						iLocal_129 = 8;
					}
					else
					{
						iLocal_129 = 16;
					}
				}
				break;
			
			case 0x00000003:
				if (Function_475(&iLocal_463))
				{
					if (Function_403(&iLocal_463) < 0.25f)
					{
						Function_208();
						SET_CAMERA_POSITION(GET_GAME_CAMERA(), -3848.701f, 7.223391f, 3694.126f);
						SET_CAMERA_ORIENTATION(GET_GAME_CAMERA(), 0.0f, 6.789521f, 0.0f, 0);
						iLocal_129 = 6;
					}
				}
				break;
			
			case 0x00000006:
				if (Function_475(&iLocal_463))
				{
					if (Function_403(&iLocal_463) < 10.0f)
					{
						if (!iLocal_499)
						{
							Function_206(2, 1, 1, 1, 1, 1, 0, 1, 1, 1);
							if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_42)))
							{
								ADD_BLIP_FOR_ACTOR(bLocal_42, 325, 0, 2, 0);
							}
							AI_STOP_IGNORING_ACTORS();
							AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
							AI_CLEAR_DONT_HARM_ACTOR(bLocal_42);
							SET_PLAYER_POSTURE(0, 1, 0);
							ATTACH_PLAYER_TO_COVER(0, 1, 1);
							ACTOR_POP_NEXT_GAIT(Global_34573, 0, 0);
							STOP_FORCE_LOOK_AT_COORD(bLocal_42);
							AI_GOAL_LOOK_CLEAR(bLocal_42);
							ACTOR_END_FORCE_HOLSTER(bLocal_42);
							ACTOR_END_FORCE_HOLSTER(Global_34573);
							if (bLocal_130 != 4294967295)
							{
								ACTOR_PUT_WEAPON_IN_HAND(Global_34573, bLocal_130, 1);
							}
							RESET_ANIM_SET_FOR_ACTOR(Global_34573, 1);
							if (!DECOR_CHECK_EXIST(Global_34573, "BlippedSquad"))
							{
								if (HUD_IS_SHOWING_OBJECTIVE())
								{
									HUD_CLEAR_OBJECTIVE();
									HUD_CLEAR_OBJECTIVE_QUEUE();
								}
								Function_509("sol_FTE_MainObjText", 0x40f00000, 1, 2, 0, 0, 0, 0);
								CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("SOLJournalID"), 0);
								APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("SOLJournalID"), "sol_FTE_MainObjText", 0, 0, false);
								APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("SOLJournalID"), 0);
								Function_205(Function_479("SOL_AA_Squad", FIND_NAMED_LAYOUT("SOL_AA_Layout")), 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
							}
							if (!Function_475(&iLocal_466))
							{
								Function_474(&iLocal_466);
							}
							AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
							Function_204(bLocal_42, bLocal_52);
							Function_203(bLocal_42, bLocal_52, 4);
							iLocal_499 = 1;
							iLocal_129 = 2;
						}
					}
				}
				break;
			
			case 0x00000008:
				if (IS_ACTOR_VALID(bLocal_41))
				{
					ADD_BLIP_FOR_ACTOR(bLocal_41, 325, 0, 2, 0);
					Function_202();
					if (HUD_IS_SHOWING_OBJECTIVE())
					{
						HUD_CLEAR_OBJECTIVE();
						HUD_CLEAR_OBJECTIVE_QUEUE();
					}
					Function_509("sol_FTE_ExitWagon", 0x40f00000, 1, 2, 0, 0, 0, 0);
					CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("SOLJournalID"), 0);
					APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("SOLJournalID"), "sol_FTE_ExitWagon", 0, 0, false);
					APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("SOLJournalID"), 0);
				}
				else
				{
					Function_200(Function_201(1, 1, 1, 0, 0), 1);
					if (!Function_199())
					{
						Function_197(9, 0, 1);
					}
					else if (RAND_FLOAT_RANGE(1.0f, 100.0f) >= 10.0f)
					{
						Function_197(9, 0, 1);
					}
					if (!DECOR_CHECK_EXIST(Global_34573, "SOL_UsedSafe"))
					{
						Function_193(200, 1, 0);
						Function_180(50, 1, 0);
					}
					Function_471(Global_30735, 0);
					AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
					if (Function_475(&iLocal_460))
					{
						bLocal_494 = Function_403(&iLocal_460);
					}
					if (Function_475(&iLocal_460))
					{
						if (Function_179(460) < 0.0f)
						{
							if (bLocal_494 > Function_179(460))
							{
								Function_178(460, bLocal_494, 0);
							}
						}
						else
						{
							Function_178(460, bLocal_494, 0);
						}
					}
					Function_148(Global_30735);
					Function_94(Global_30735, 1, 1, 0);
					TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				}
				iLocal_129 = 9;
				break;
			
			case 0x00000009:
				if (!IS_ACTOR_RIDING_VEHICLE(Global_34573))
				{
					if (IS_ACTOR_VALID(bLocal_41))
					{
						SET_PLAYER_ENDLESS_READYMODE(0, 0);
						if (HUD_IS_SHOWING_OBJECTIVE())
						{
							HUD_CLEAR_OBJECTIVE();
							HUD_CLEAR_OBJECTIVE_QUEUE();
						}
						Function_509("sol_FTE_TalkToBanker", 0x40f00000, 1, 2, 0, 0, 0, 0);
						CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("SOLJournalID"), 0);
						APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("SOLJournalID"), "sol_FTE_TalkToBanker", 0, 0, false);
						APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("SOLJournalID"), 0);
						iLocal_129 = 10;
					}
					else
					{
						SET_PLAYER_ENDLESS_READYMODE(0, 0);
						Function_200(Function_201(1, 1, 1, 0, 0), 1);
						if (!Function_199())
						{
							Function_197(9, 0, 1);
						}
						else if (RAND_FLOAT_RANGE(1.0f, 100.0f) >= 10.0f)
						{
							Function_197(9, 0, 1);
						}
						if (!DECOR_CHECK_EXIST(Global_34573, "SOL_UsedSafe"))
						{
							Function_193(200, 1, 0);
							Function_180(50, 1, 0);
						}
						Function_471(Global_30735, 0);
						AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
						if (Function_475(&iLocal_460))
						{
							bLocal_494 = Function_403(&iLocal_460);
						}
						if (Function_475(&iLocal_460))
						{
							if (Function_179(460) < 0.0f)
							{
								if (bLocal_494 > Function_179(460))
								{
									Function_178(460, bLocal_494, 0);
								}
							}
							else
							{
								Function_178(460, bLocal_494, 0);
							}
						}
						Function_148(Global_30735);
						Function_94(Global_30735, 1, 1, 0);
						TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
					}
				}
				break;
			
			case 0x0000000A:
				if (!iLocal_508)
				{
					if (Function_401(Global_34573, bLocal_41) > 10.0f)
					{
						Function_90();
						iLocal_508 = 1;
					}
				}
				if (Function_401(Global_34573, bLocal_41) > 2.0f)
				{
					Function_202();
					Function_388(1, 0, 1, 1, 1, 1, 0, bLocal_54, 1, 0, 1, 1);
					UI_PUSH("CutsceneWithMessages");
					Function_86(bLocal_46, 0, 1, 0, 0);
					Function_474(&iLocal_457);
					Function_472(&iLocal_457);
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_41)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_41));
					}
					iLocal_501 = 1;
					iLocal_129 = 14;
				}
				break;
			
			case 0x0000000E:
				if (!iLocal_505)
				{
					if (Function_475(&iLocal_457))
					{
						if (Function_403(&iLocal_457) < 3.0f)
						{
							PRINT_BIG("SOL_PrintBig", 5f, 0, 2, 0);
							vVar18 = { -2128.779f, 16.584f, 2619.305f };
							TELEPORT_ACTOR_WITH_HEADING(Global_34573, vVar18, 355.774f, 0, false, 0);
							SET_CAMERA_ORIENTATION(GET_GAME_CAMERA(), 0.0f, 355.774f, 0.0f, 0);
							iLocal_505 = 1;
						}
					}
				}
				if (Function_475(&iLocal_457))
				{
					if (Function_403(&iLocal_457) < 10.0f)
					{
						if (IS_ACTOR_VALID(bLocal_41))
						{
							DESTROY_ACTOR(bLocal_41);
						}
						Function_206(2, 1, 1, 1, 1, 1, 0, 1, 0, 1);
						UI_POP("CutsceneWithMessages");
						if (!DECOR_CHECK_EXIST(Global_34573, "SOL_UsedSafe"))
						{
							Function_193(200, 1, 0);
							Function_180(50, 1, 0);
						}
						if (!DECOR_CHECK_EXIST(Global_34573, "SOL_UsedSafe"))
						{
							Function_200(Function_201(2, 1, 1, 0, 0), 1);
						}
						else
						{
							Function_200(Function_201(0, 1, 1, 0, 0), 1);
						}
						if (!Function_199())
						{
							Function_197(9, 0, 1);
						}
						else if (RAND_FLOAT_RANGE(1.0f, 100.0f) >= 10.0f)
						{
							Function_197(9, 0, 1);
						}
						Function_471(Global_30735, 0);
						CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("SOLJournalID"), 0);
						APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("SOLJournalID"), 1);
						if (Function_475(&iLocal_460))
						{
							bLocal_494 = Function_403(&iLocal_460);
						}
						if (Function_475(&iLocal_460))
						{
							if (Function_179(460) < 0.0f)
							{
								if (bLocal_494 > Function_179(460))
								{
									Function_178(460, bLocal_494, 0);
								}
							}
							else
							{
								Function_178(460, bLocal_494, 0);
							}
						}
						AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
						Function_148(Global_30735);
						Function_94(Global_30735, 1, 1, 0);
						iLocal_129 = 16;
					}
				}
				break;
			
			case 0x00000010:
				if (IS_LAYOUTREF_VALID(Global_30616))
				{
					bLocal_55 = FIND_VOLUME_IN_LAYOUT(Global_30616, "armv_region");
					if ((((!IS_VOLUME_VALID(bLocal_55) || iLocal_500) || iLocal_503) || !IS_ACTOR_ALIVE(bLocal_41)) || Function_85(0))
					{
						if (Function_85(0))
						{
							if (HUD_IS_SHOWING_HELP_TEXT())
							{
								HUD_CLEAR_HELP();
								HUD_CLEAR_HELP_QUEUE();
							}
							Function_512("SOL_FTE_Help_WantedFail", 0x41200000, 1, 0, 2, 1, 0);
						}
						AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
						SET_PLAYER_CONTROL(false, 1, 0, 0);
						TASK_CLEAR(Global_34573);
						if (Function_394(Global_30735) == 2)
						{
							Function_82(Global_30735);
						}
						if (IS_ACTOR_VALID(bLocal_42))
						{
							RELEASE_ACTOR(bLocal_42);
						}
						REMOVE_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("SOLJournalID"), false);
						Function_75(&Global_6298, &Global_7189, 4, 0);
						Function_65(&Local_131, 0);
						Function_5(&Local_131, 0);
						if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_40)))
						{
							REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_40));
						}
						if (IS_BLIP_VALID(uLocal_47[0]))
						{
							REMOVE_BLIP(uLocal_47[0]);
						}
						if (IS_BLIP_VALID(uLocal_47[1]))
						{
							REMOVE_BLIP(uLocal_47[1]);
						}
						if (IS_BLIP_VALID(uLocal_47[2]))
						{
							REMOVE_BLIP(uLocal_47[2]);
						}
						if (IS_OBJECT_VALID(bLocal_43))
						{
							RELEASE_OBJECT_REF(bLocal_43);
						}
						if (IS_OBJECT_VALID(bLocal_44))
						{
							DESTROY_OBJECT(bLocal_44);
						}
						if (DECOR_CHECK_EXIST(Global_34573, "SOL_FTE_EngagedAA"))
						{
							DECOR_REMOVE(Global_34573, "SOL_FTE_EngagedAA");
						}
						if (DECOR_CHECK_EXIST(Global_34573, "iLockerOpen"))
						{
							DECOR_REMOVE(Global_34573, "iLockerOpen");
						}
						if (DECOR_CHECK_EXIST(Global_34573, "SOL_UsedSafe"))
						{
							DECOR_REMOVE(Global_34573, "SOL_UsedSafe");
						}
						if (DECOR_CHECK_EXIST(Global_34573, "SOL_FTE_B_StillRunning"))
						{
							DECOR_REMOVE(Global_34573, "SOL_FTE_B_StillRunning");
						}
						if (DECOR_CHECK_EXIST(Global_34573, "nPrintHelp"))
						{
							DECOR_REMOVE(Global_34573, "nPrintHelp");
						}
						if (IS_VOLUME_VALID(bLocal_54))
						{
							DESTROY_VOLUME(bLocal_54);
						}
						if (IS_VOLUME_VALID(bLocal_58))
						{
							DESTROY_VOLUME(bLocal_58);
						}
						RELEASE_LAYOUT_OBJECTS(bLocal_46);
						RELEASE_LAYOUT_REF(bLocal_46);
						Function_1(&iLocal_62);
						HUD_CLEAR_OBJECTIVE();
						TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
					}
				}
				break;
		}
		WAIT(bLocal_478);
	}
	AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	if (Function_394(Global_30735) == 2)
	{
		Function_82(Global_30735);
	}
	SET_PLAYER_CONTROL(false, 1, 0, 0);
	TASK_CLEAR(Global_34573);
	DECOR_REMOVE(bLocal_41, "CanBeLasso");
	if (IS_ACTOR_VALID(bLocal_42))
	{
		RELEASE_ACTOR(bLocal_42);
	}
	REMOVE_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("SOLJournalID"), false);
	Function_75(&Global_6298, &Global_7189, 4, 0);
	Function_65(&Local_131, 0);
	Function_5(&Local_131, 0);
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_40)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_40));
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_41)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_41));
	}
	if (IS_BLIP_VALID(uLocal_47[0]))
	{
		REMOVE_BLIP(uLocal_47[0]);
	}
	if (IS_BLIP_VALID(uLocal_47[1]))
	{
		REMOVE_BLIP(uLocal_47[1]);
	}
	if (IS_BLIP_VALID(uLocal_47[2]))
	{
		REMOVE_BLIP(uLocal_47[2]);
	}
	if (IS_OBJECT_VALID(bLocal_43))
	{
		RELEASE_OBJECT_REF(bLocal_43);
	}
	if (IS_OBJECT_VALID(bLocal_44))
	{
		DESTROY_OBJECT(bLocal_44);
	}
	if (IS_VOLUME_VALID(bLocal_54))
	{
		DESTROY_VOLUME(bLocal_54);
	}
	if (IS_VOLUME_VALID(bLocal_58))
	{
		DESTROY_VOLUME(bLocal_58);
	}
	if (DECOR_CHECK_EXIST(Global_34573, "SOL_FTE_EngagedAA"))
	{
		DECOR_REMOVE(Global_34573, "SOL_FTE_EngagedAA");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "iLockerOpen"))
	{
		DECOR_REMOVE(Global_34573, "iLockerOpen");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "SOL_UsedSafe"))
	{
		DECOR_REMOVE(Global_34573, "SOL_UsedSafe");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "SOL_FTE_B_StillRunning"))
	{
		DECOR_REMOVE(Global_34573, "SOL_FTE_B_StillRunning");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "RunningCutscene"))
	{
		DECOR_REMOVE(Global_34573, "RunningCutscene");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "nPrintHelp"))
	{
		DECOR_REMOVE(Global_34573, "nPrintHelp");
	}
	RELEASE_LAYOUT_OBJECTS(bLocal_46);
	RELEASE_LAYOUT_REF(bLocal_46);
	Function_1(&iLocal_62);
	HUD_CLEAR_OBJECTIVE();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x1A66 / 6758
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

void Function_2(var uParam0, int iParam1) //Position: 0x1A8C / 6796
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

void Function_3(var uParam0, int iParam1) //Position: 0x1BBA / 7098
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_4(var uParam0, int iParam1) //Position: 0x1BD4 / 7124
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(int iParam0, int iParam1) //Position: 0x1BF1 / 7153
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	
	Function_65(iParam0, 0);
	bVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_395(), GET_AMBIENT_LAYOUT(), 4294967295, 0);
	iVar2 = 0;
	while (iVar2 < (GET_OBJECTSET_SIZE(bVar1) - 1))
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, bVar1);
		DECOR_REMOVE(bVar0, "translib_state");
		iVar2++;
	}
	DESTROY_OBJECTSET(bVar1);
	Function_64(iParam0);
	if (IS_ACTOR_VALID(iParam0->f_952))
	{
		TASK_VEHICLE_LEAVE(iParam0->f_952);
		TASK_PRIORITY_SET(iParam0->f_952, 1);
		Function_63(iParam0->f_952, 7);
		if (iParam1 == 1)
		{
			DESTROY_ACTOR(iParam0->f_952);
		}
		else
		{
			Function_62(iParam0->f_952, 4, 0, 2);
		}
	}
	if (IS_ACTOR_VALID(iParam0->f_960))
	{
		Function_63(iParam0->f_960, 7);
		if (iParam0->f_628 == 2)
		{
			Function_62(iParam0->f_960, 4, 0, 2);
		}
		else
		{
			TASK_CLEAR(iParam0->f_960);
			TASK_VEHICLE_LEAVE(iParam0->f_960);
		}
		if (iParam1 == 1)
		{
			DESTROY_ACTOR(iParam0->f_960);
		}
		else
		{
			Function_62(iParam0->f_960, 2, 0, 2);
		}
	}
	if (IS_ACTOR_VALID(iParam0->f_976))
	{
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(iParam0->f_976);
		Function_61(iParam0->f_976, 0.0f, 0.0f, 0.0f, 0, 0, 2, 1);
	}
	if (IS_ACTOR_VALID(iParam0->f_860))
	{
		START_VEHICLE(iParam0->f_860);
		SET_VEHICLE_ALLOWED_TO_DRIVE(iParam0->f_860, 1);
		Function_63(iParam0->f_860, 7);
		if (iParam1 == 1)
		{
			DESTROY_ACTOR(iParam0->f_860);
		}
		else
		{
			RELEASE_ACTOR(iParam0->f_860);
		}
	}
	switch (iParam0->f_628)
	{
		case 0x00000003:
			Function_59(iParam0);
			break;
		
		case 0x00000001:
			if (IS_ACTOR_ALIVE(iParam0->f_960))
			{
				SET_ACTOR_FACTION(iParam0->f_960, 19);
			}
			break;
	}
	if (Function_381(iParam0->f_780, 512))
	{
		HUD_TIMER_DISPLAY(0);
	}
	if (IS_OBJECTSET_VALID(iParam0->f_968))
	{
		DESTROY_OBJECTSET(iParam0->f_968);
	}
	bVar3 = Function_58();
	if (IS_OBJECT_VALID(bVar3))
	{
		bVar4 = GET_OBJECTSET_FROM_OBJECT(DECOR_GET_OBJECT(bVar3, "trnsNecActors"));
		if (IS_OBJECTSET_VALID(bVar4))
		{
			DESTROY_OBJECTSET(bVar4);
		}
		DESTROY_OBJECT(bVar3);
	}
	if (IS_LAYOUTREF_VALID(iParam0->f_776))
	{
		if (!Function_381(iParam0->f_780, 1024))
		{
			RELEASE_LAYOUT_REF(iParam0->f_776);
		}
	}
	Function_1(iParam0 + 640);
	Function_57(56);
	Function_55(4);
	Function_54();
	Function_27(iParam0 + 1004);
	Function_6(iParam0);
	return;
}

void Function_6(bool bParam0) //Position: 0x1E1D / 7709
{
	if (IS_BLIP_VALID(bParam0->f_36))
	{
		REMOVE_BLIP(bParam0->f_36);
	}
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Global_34573), "procstop"))
	{
		DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(Global_34573), "procstop");
	}
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Global_34573), "procRideObj"))
	{
		DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(Global_34573), "procRideObj");
	}
	if (bParam0->f_532 == 5)
	{
		if (Function_381(bParam0->f_584, 32768))
		{
			Function_26(256);
		}
	}
	Function_25();
	Function_23(1);
	if (Function_381(bParam0->f_584, 32))
	{
		if (Function_21(bParam0->f_624))
		{
			switch (bParam0->f_620)
			{
				case 0x00000002:
					Function_94(bParam0->f_624, 1, 0, 0);
					break;
				
				case 0x00000003:
					Function_12(bParam0->f_624);
					break;
				
				default:
					Function_82(bParam0->f_624);
					break;
				}
			}
	}
	if (SQUAD_IS_VALID(bParam0->f_568))
	{
		Function_7(bParam0, 0);
	}
	if (IS_VOLUME_VALID(bParam0->f_504))
	{
		DESTROY_VOLUME(bParam0->f_504);
	}
	if (IS_OBJECTSET_VALID(bParam0->f_540))
	{
		DESTROY_OBJECTSET(bParam0->f_540);
	}
	if (IS_LAYOUTREF_VALID(bParam0->f_28))
	{
		RELEASE_LAYOUT_OBJECTS(bParam0->f_28);
		DESTROY_LAYOUT(bParam0->f_28);
	}
	if (Function_381(bParam0->f_584, 64))
	{
		Global_13111 = 0;
	}
	if (Function_381(bParam0->f_584, 16))
	{
		Global_3382 = 0;
	}
	return;
}

void Function_7(bool bParam0, bool bParam1) //Position: 0x1F7A / 8058
{
	if (SQUAD_IS_VALID(bParam0->f_568))
	{
		Function_11(bParam0->f_568);
		Function_10(bParam0 + 568, 1, 0);
		if (bParam1 == 1)
		{
			Function_9(bParam0->f_568);
			Function_11(bParam0->f_568);
			Function_8(bParam0->f_568, Global_34573, -1.0f, -1.0f, 0, 1);
		}
		Function_10(bParam0 + 568, 0, 0);
		SQUAD_MAKE_EMPTY(bParam0->f_568);
		DESTROY_OBJECT(bParam0->f_568);
	}
	return;
}

void Function_8(bool bParam0, bool bParam1, float fParam2, float fParam3, int iParam4, int iParam5) //Position: 0x1FDF / 8159
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

void Function_9(bool bParam0) //Position: 0x204D / 8269
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		MEMORY_CLEAR_ALL(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0));
		bVar0++;
	}
	return;
}

void Function_10(var uParam0, bool bParam1, bool bParam2) //Position: 0x2082 / 8322
{
	bool bVar0;
	bool bVar1;
	
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
			if (bParam2)
			{
				if (!Function_402(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_11(bool bParam0) //Position: 0x20FE / 8446
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		TASK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0));
		bVar0++;
	}
	return;
}

void Function_12(bool bParam0) //Position: 0x2130 / 8496
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	
	if (!Function_21(bParam0))
	{
		return;
	}
	iVar0 = Function_20(bParam0);
	if (StackVal == 2)
	{
		Function_16("nDEED_FAIL", bParam0);
	}
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_13172[bParam011].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_13(Global_6269) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(bVar11);
	}
	Global_3376 = 1;
	return;
}

struct<16> Function_13(int iParam0) //Position: 0x21D6 / 8662
{
	char* cVar0[16];
	
	if (!Function_14())
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

bool Function_14() //Position: 0x2215 / 8725
{
	if (Function_381(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

struct<24> Function_15(char* cParam0) //Position: 0x2230 / 8752
{
	char* cVar0[24];
	
	strcpy(&cVar0, "Mission_", 24);
	switch (cParam0)
	{
		case 0x00000000:
		case 0x00000001:
			stradd(&cVar0, "Intro", 24);
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
		case 0x00000016:
			stradd(&cVar0, "Ranch", 24);
			break;
		
		case 0x00000008:
		case 0x00000009:
		case 0x00000015:
		case 0x00000017:
			stradd(&cVar0, "Marshal", 24);
			break;
		
		case 0x0000000A:
		case 0x0000000B:
		case 0x0000000F:
		case 0x00000010:
		case 0x00000011:
			stradd(&cVar0, "Merchant", 24);
			break;
		
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
			stradd(&cVar0, "Grave", 24);
			break;
		
		case 0x00000012:
		case 0x00000013:
		case 0x00000014:
			stradd(&cVar0, "Outlaws", 24);
			break;
		
		case 0x00000018:
		case 0x00000019:
			stradd(&cVar0, "Fort", 24);
			break;
		
		case 0x0000001A:
		case 0x0000001B:
		case 0x0000001C:
		case 0x0000001D:
		case 0x00000024:
			stradd(&cVar0, "MexArmy", 24);
			break;
		
		case 0x0000001E:
		case 0x0000001F:
		case 0x00000020:
		case 0x00000021:
			stradd(&cVar0, "Gun", 24);
			break;
		
		case 0x00000022:
		case 0x00000023:
		case 0x00000026:
		case 0x00000027:
			stradd(&cVar0, "MexGirl", 24);
			break;
		
		case 0x00000025:
		case 0x00000028:
		case 0x00000029:
			stradd(&cVar0, "Rebel", 24);
			break;
		
		case 0x0000002C:
		case 0x0000002D:
		case 0x0000002E:
			stradd(&cVar0, "Anthro", 24);
			break;
		
		case 0x0000002A:
		case 0x0000002B:
		case 0x0000002F:
		case 0x00000030:
			stradd(&cVar0, "FBI", 24);
			break;
		
		case 0x00000031:
		case 0x00000032:
		case 0x00000033:
		case 0x00000034:
		case 0x00000035:
		case 0x00000036:
		case 0x00000037:
		case 0x00000038:
		case 0x00000039:
			stradd(&cVar0, "Home", 24);
			break;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_16(char* cParam0, bool bParam1) //Position: 0x2486 / 9350
{
	struct<4> Var0;
	
	if (!Function_21(bParam1))
	{
		return;
	}
	switch (Function_20(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_17(Function_18(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_20(bParam1), Function_18(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_20(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_20(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_20(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_20(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_20(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_17(int iParam0) //Position: 0x25AA / 9642
{
	char* cVar0[16];
	
	if (!Function_14())
	{
		strcpy(&cVar0, "miss", 16);
	}
	else
	{
		strcpy(&cVar0, "ziss", 16);
	}
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_18(bool bParam0) //Position: 0x25E4 / 9700
{
	if (!Function_19(bParam0))
	{
		return 4294967295;
	}
	return (SHIFT_RIGHT(Global_13172[bParam011], 12) && 255);
}

bool Function_19(int iParam0) //Position: 0x2604 / 9732
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_20(bool bParam0) //Position: 0x261B / 9755
{
	if (!Function_19(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

bool Function_21(int iParam0) //Position: 0x2636 / 9782
{
	if (!Function_19(iParam0))
	{
		return 0;
	}
	if (!Function_22(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_22(int iParam0) //Position: 0x265A / 9818
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_23(int iParam0) //Position: 0x266F / 9839
{
	if (iParam0 != 1 && !GET_THIS_SCRIPT_ID() != Global_8721)
	{
		return;
	}
	if (Global_8717[iParam0])
	{
		Global_8717[iParam0] = 0;
	}
	if (!Function_24())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_24() //Position: 0x26AB / 9899
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_8717[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_25() //Position: 0x26D0 / 9936
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_26(int iParam0) //Position: 0x26E4 / 9956
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_27(int iParam0) //Position: 0x2701 / 9985
{
	Function_28(iParam0);
	return;
}

void Function_28(int iParam0) //Position: 0x270C / 9996
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (IS_ITERATOR_VALID(StackVal))
	{
		DESTROY_ITERATOR(StackVal);
	}
	if (IS_ACTORSET_VALID(iParam0->f_52))
	{
		bVar2 = false;
		while (bVar2 < (GET_ACTORSET_SIZE(iParam0->f_52) - 1))
		{
			GET_ACTOR_FROM_ACTORSET(iParam0->f_52, bVar2);
			bVar2++;
		}
		DESTROY_ACTORSET(iParam0->f_52);
	}
	if (SQUAD_IS_VALID(iParam0->f_60))
	{
		bVar2 = false;
		while (bVar2 < (SQUAD_GET_SIZE(iParam0->f_60) - 1))
		{
			bVar0 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_60, bVar2);
			CLEAR_ACTOR_MAX_SPEED(bVar0);
			if (iParam0->f_160 == 0)
			{
				Function_42(iParam0, bVar0, 2, 0);
			}
			bVar2++;
		}
		DESTROY_OBJECT(GET_OBJECT_FROM_SQUAD(iParam0->f_60));
	}
	if (IS_ACTORSET_VALID(iParam0->f_64))
	{
		if (iParam0->f_160 == 0)
		{
			Function_33(iParam0->f_64, 2, 0, 2);
		}
		else
		{
			Function_31(iParam0->f_64);
		}
		DESTROY_ACTORSET(iParam0->f_64);
	}
	if (!Function_381(iParam0->f_92, 16))
	{
		RELEASE_LAYOUT_OBJECTS(*iParam0);
		DESTROY_LAYOUT(*iParam0);
	}
	if (IS_OBJECTSET_VALID(iParam0->f_96))
	{
		Function_30(iParam0->f_96);
		DESTROY_OBJECTSET(iParam0->f_96);
	}
	bVar1 = Function_29(iParam0);
	if (IS_OBJECT_VALID(bVar1))
	{
		DESTROY_OBJECT(bVar1);
	}
	return;
}

var Function_29(int iParam0) //Position: 0x281D / 10269
{
	bool bVar0;
	
	if (!IS_ITERATOR_VALID(StackVal))
	{
		return "";
	}
	bVar0 = START_OBJECT_ITERATOR(StackVal);
	return bVar0;
}

void Function_30(bool bParam0) //Position: 0x283C / 10300
{
	bool bVar0;
	
	if (!IS_OBJECTSET_VALID(bParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(bParam0) >= 0)
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(bVar0, bParam0);
		}
		CLEAN_OBJECTSET(bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			DESTROY_OBJECT(bVar0);
		}
	}
	return;
}

void Function_31(bool bParam0) //Position: 0x2881 / 10369
{
	bool bVar0;
	
	Function_32(&bParam0);
	if (IS_ACTORSET_VALID(bParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (GET_ACTORSET_SIZE(bParam0) - 1))
		{
			if (IS_ACTOR_VALID(GET_ACTOR_FROM_ACTORSET(bParam0, bVar0)))
			{
				RELEASE_ACTOR(GET_ACTOR_FROM_ACTORSET(bParam0, bVar0));
			}
			bVar0++;
		}
	}
	return;
}

void Function_32(int iParam0) //Position: 0x28C9 / 10441
{
	bool bVar0;
	
	if (IS_ACTORSET_VALID(*iParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (GET_ACTORSET_SIZE(*iParam0) - 1))
		{
			if (!IS_ACTOR_VALID(GET_ACTOR_FROM_ACTORSET(*iParam0, bVar0)) || !IS_ACTOR_ALIVE(GET_ACTOR_FROM_ACTORSET(*iParam0, bVar0)))
			{
				REMOVE_ACTORSET_MEMBER(*iParam0, GET_ACTOR_FROM_ACTORSET(*iParam0, bVar0));
			}
			bVar0++;
		}
	}
	return;
}

int Function_33(bool bParam0, int iParam1, int iParam2, int iParam3) //Position: 0x2922 / 10530
{
	bool bVar0;
	bool bVar1;
	
	if (IS_ACTORSET_VALID(bParam0))
	{
		bVar1 = false;
		while (bVar1 < (GET_ACTORSET_SIZE(bParam0) - 1))
		{
			bVar0 = GET_ACTOR_FROM_ACTORSET(bParam0, bVar1);
			if (IS_ACTOR_ALIVE(bVar0))
			{
				Function_34(bVar0, iParam1, iParam2, iParam3, 1);
			}
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar0)))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(bVar0));
			}
			bVar1++;
		}
		DISBAND_ACTORSET(bParam0);
		return 1;
	}
	return 0;
}

int Function_34(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x2989 / 10633
{
	char* cVar0[32];
	
	Function_41();
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
	if (Function_40(bParam0) == 1)
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
	Function_39(bParam0, 0);
	Function_38(bParam0, iParam1);
	Function_37(bParam0, iParam2);
	Function_36(bParam0, iParam3);
	if (Function_35(bParam0) != 5)
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

int Function_35(bool bParam0) //Position: 0x2BD7 / 11223
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior");
}

void Function_36(bool bParam0, bool bParam1) //Position: 0x2BFA / 11258
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_37(bool bParam0, bool bParam1) //Position: 0x2C1D / 11293
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_target", bParam1);
	return;
}

void Function_38(bool bParam0, bool bParam1) //Position: 0x2C41 / 11329
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_39(bool bParam0, bool bParam1) //Position: 0x2C67 / 11367
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_state", bParam1);
	return;
}

int Function_40(bool bParam0) //Position: 0x2C8A / 11402
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
}

void Function_41() //Position: 0x2CA8 / 11432
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

int Function_42(var uParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x2CF2 / 11506
{
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	if (Function_53(bParam1, uParam0->f_60, 1))
	{
		SQUAD_LEAVE(bParam1);
		if (IS_ACTOR_VALID(GET_MOUNT(bParam1)))
		{
			if (GET_MOUNT(bParam1) != Function_43(0, 0, 0, 0, 0, 0, 1, 0))
			{
				if (iParam3 == 1)
				{
					DESTROY_ACTOR(GET_MOUNT(bParam1));
				}
				else
				{
					Function_62(GET_MOUNT(bParam1), iParam2, 0, 2);
				}
			}
		}
		if (iParam3 == 1)
		{
			DESTROY_ACTOR(bParam1);
		}
		else
		{
			Function_62(bParam1, iParam2, 0, 2);
		}
	}
	else if (IS_ACTOR_IN_ACTORSET(uParam0->f_64, bParam1))
	{
		REMOVE_ACTORSET_MEMBER(uParam0->f_64, bParam1);
		if (iParam3 == 1)
		{
			DESTROY_ACTOR(bParam1);
		}
		else
		{
			Function_62(bParam1, 2, 0, 2);
		}
	}
	return 1;
}

int Function_43(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, var uParam6, bool bParam7) //Position: 0x2D9E / 11678
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	int iVar8;
	int iVar9;
	vector3 vVar10;
	
	if (!IS_ACTOR_VALID(Global_34573))
	{
		return "";
	}
	if (!IS_ACTOR_ALIVE(Global_34573))
	{
		return "";
	}
	bVar0 = (StackVal + 976);
	if (Global_3381)
	{
		Function_52(976, 0, 1);
	}
	bParam7 = bParam7;
	if (!bParam7)
	{
		if (!Function_51())
		{
			return "";
		}
	}
	if (!Function_49())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		bVar1 = IS_ACTOR_ALIVE(Global_12976.f_36);
	}
	Function_48();
	if ((bVar1 && uParam6) && uParam0)
	{
		Function_482(GET_OBJECT_FROM_ACTOR(Global_12976.f_36));
		vVar2 = { StackVal, StackVal, Function_482(GET_OBJECT_FROM_ACTOR(Global_12976.f_36)) };
		Function_482(GET_OBJECT_FROM_ACTOR(Global_34573));
		vVar5 = { StackVal, StackVal, Function_482(GET_OBJECT_FROM_ACTOR(Global_34573)) };
		iVar8 = Function_47(StackVal, StackVal, vVar2, 0, 1, 1);
		if (iVar8 != 4294967294 || iVar8 != 4294967295)
		{
		}
		else
		{
			iVar9 = Function_47(StackVal, StackVal, vVar5, 0, 1, 1);
			if (iVar8 != iVar9)
			{
				if (Function_46() || NET_IS_IN_SESSION())
				{
					RELEASE_ACTOR(Global_12976.f_36);
					Global_12976.f_36 = "";
					CLEAR_ACTORS_HORSE(Global_34573);
				}
				else
				{
					RELEASE_ACTOR(Global_12976.f_36);
					if (!bParam7)
					{
						Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_395(), bVar0, bParam2, bParam3, bParam4, 0.0f, bParam5, 0.0f);
						SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
					}
					else
					{
						Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_395(), 993, bParam2, bParam3, bParam4, 0.0f, bParam5, 0.0f);
						SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
					}
					DELETE_ALL_ACCESSORIES_FROM_ACTOR(Global_12976.f_36);
					if (IS_ACTOR_HORSE(Global_12976.f_36))
					{
						ACCESSORIZE_HORSE(Global_12976.f_36, 4);
					}
					else if (IS_ACTOR_MULE(Global_12976.f_36))
					{
						ACCESSORIZE_HORSE(Global_12976.f_36, 3);
					}
				}
			}
			else
			{
				vVar10 = { bParam2, bParam3, bParam4 };
				if (!Function_45(StackVal, StackVal, vVar10))
				{
					TELEPORT_ACTOR(Global_12976.f_36, &vVar10, 1, 1, 1);
				}
			}
		}
	}
	else if (!bVar1 && (uParam0 || Global_3380))
	{
		if (!bParam7)
		{
			Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_395(), bVar0, bParam2, bParam3, bParam4, 0.0f, bParam5, 0.0f);
			SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
		}
		else
		{
			if (bVar0 != 993)
			{
				(&Global_12976 + 36)->f_8 = (bVar0 - 976);
			}
			Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_395(), 993, bParam2, bParam3, bParam4, 0.0f, bParam5, 0.0f);
			SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
		}
		DELETE_ALL_ACCESSORIES_FROM_ACTOR(Global_12976.f_36);
		if (IS_ACTOR_HORSE(Global_12976.f_36))
		{
			ACCESSORIZE_HORSE(Global_12976.f_36, 4);
		}
		else if (IS_ACTOR_MULE(Global_12976.f_36))
		{
			ACCESSORIZE_HORSE(Global_12976.f_36, 3);
		}
		else if (ANIMAL_ACTOR_GET_SPECIES(Global_12976.f_36) != 9 || ANIMAL_ACTOR_GET_SPECIES(Global_12976.f_36) != 8)
		{
			ACCESSORIZE_HORSE(Global_12976.f_36, 8);
		}
	}
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		bVar1 = IS_ACTOR_ALIVE(Global_12976.f_36);
	}
	if (bVar1)
	{
		if (bParam1)
		{
			MAKE_ACTOR_READY_FOR_ACTION(Global_12976.f_36, 1);
		}
	}
	if (bVar1)
	{
		CLEAR_ACTORS_HORSE(Global_34573);
		SET_ACTORS_HORSE(Global_34573, Global_12976.f_36);
		Function_44(Global_12976.f_36, 0, 0, 0, 0, 0, 0);
	}
	if (Function_46() || NET_IS_IN_SESSION())
	{
		if (IS_ACTOR_VALID(Global_12976.f_36))
		{
			NET_ACTOR_SET_ALLOW_BLIP_SYNC(Global_12976.f_36, 0);
		}
	}
	return Global_12976.f_36;
}

void Function_44(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x30F4 / 12532
{
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_ACTOR_CAN_BE_TARGETED(bParam0, bParam1);
		SET_ACTOR_CAN_BE_HARDLOCKED(bParam0, iParam2);
		SET_ACTOR_CAN_BE_SOFTLOCKED(bParam0, iParam6);
		SET_ACTOR_CAN_BE_BUMPTARGETED(bParam0, iParam3);
		SET_ACTOR_ONLY_HARDLOCK_IF_HOSTILE(bParam0, iParam5);
		SET_ACTOR_USE_FULLSCREEN_ACQUISITION(bParam0, iParam4);
	}
}

bool Function_45(vector3 vParam0) //Position: 0x3131 / 12593
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

bool Function_46() //Position: 0x3149 / 12617
{
	return NET_IS_MANAGER_INITIALIZED();
}

var Function_47(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x3152 / 12626
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = 145;
	iVar2 = 4294967295;
	while (iVar1 <= 0 && !bVar0)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
			{
				switch (StackVal)
				{
					case 0x00000002:
						if (!bParam3)
						{
							iVar2 = iVar1;
							bVar0 = true;
						}
						break;
					
					case 0x00000006:
						if (!bParam4)
						{
							iVar2 = iVar1;
							bVar0 = true;
						}
						break;
					
					default:
						iVar2 = iVar1;
						bVar0 = true;
						break;
					}
				}
		}
		iVar1 = (iVar1 - 1);
	}
	if (bParam5)
	{
		if (bVar0)
		{
		}
	}
	return iVar2;
}

void Function_48() //Position: 0x31ED / 12781
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		if (GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(Global_12976.f_36)) != bVar0)
		{
			LOG_ERROR("PLAYERHORSE NOT IN PLAYER HORSE! WHY? FIXING");
			GIVE_OBJECT_TO_LAYOUT(Global_12976.f_36, bVar0);
		}
	}
	return;
}

bool Function_49() //Position: 0x325F / 12895
{
	if (Function_50() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_50() //Position: 0x3275 / 12917
{
	return Global_12976.f_152;
}

bool Function_51() //Position: 0x3280 / 12928
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_52(var uParam0, bool bParam1, bool bParam2) //Position: 0x32A0 / 12960
{
	Global_13038 = uParam0;
	if (bParam1)
	{
		Function_380(&Global_12976 + 36 + 20, 128);
	}
	if (bParam2)
	{
		Function_380(&Global_12976 + 36 + 20, 64);
	}
	return;
}

bool Function_53(bool bParam0, bool bParam1, bool bParam2) //Position: 0x32CD / 13005
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (!SQUAD_IS_VALID(bParam1))
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (SQUAD_GET(bParam0) == bParam1)
	{
		if (bParam2)
		{
		}
		return 1;
	}
	if (bParam2)
	{
	}
	return 0;
}

void Function_54() //Position: 0x330D / 13069
{
	bool bVar0;
	
	bVar0 = Function_58();
	if (IS_OBJECT_VALID(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	return;
}

void Function_55(int iParam0) //Position: 0x3325 / 13093
{
	Function_56(&Global_28842, iParam0);
	return;
}

void Function_56(var uParam0, int iParam1) //Position: 0x3333 / 13107
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_57(var uParam0) //Position: 0x334E / 13134
{
	Global_26316.f_56 = (Global_26316.f_56 || uParam0);
	return;
}

var Function_58() //Position: 0x3361 / 13153
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar2 = Global_28841;
	if (IS_LAYOUTREF_VALID(bVar2))
	{
		bVar1 = CREATE_OBJECT_ITERATOR(bVar2);
		ITERATE_ON_OBJECT_TYPE(bVar1, 8);
		ITERATE_ON_PARTIAL_NAME(bVar1, "transDataObj");
		bVar0 = START_OBJECT_ITERATOR(bVar1);
		if (!IS_OBJECT_VALID(bVar0))
		{
			bVar0 = CREATE_POINT_IN_LAYOUT(Global_28841, "transDataObj", 1.0f, 400.0f, 1.0f, 0.0f, 0.0f, 0.0f);
			if (!IS_OBJECT_VALID(bVar0))
			{
				LOG_ERROR("TRANSPORT_GetExternalObject - Could not create external object?");
			}
		}
		if (IS_ITERATOR_VALID(bVar1))
		{
			DESTROY_ITERATOR(bVar1);
		}
	}
	return bVar0;
}

void Function_59(int iParam0) //Position: 0x3427 / 13351
{
	if (Function_381(iParam0->f_780, 0x10000000))
	{
		UI_EXIT("WHATEVA_prog");
		UI_EXIT("WHATEVA");
		HUD_TIMER_DISPLAY(0);
		UI_POP("Stagecoach_Job");
		Function_60(iParam0 + 780, 0x10000000);
	}
	return;
}

void Function_60(bool bParam0, bool bParam1) //Position: 0x3481 / 13441
{
	*bParam0 = (*bParam0 - (*bParam0 && bParam1));
	return;
}

void Function_61(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x3494 / 13460
{
	if (!IS_OBJECTSET_VALID(Global_28842.f_60))
	{
		Global_28842.f_60 = CREATE_OBJECTSET_IN_LAYOUT("trafficReleased", Global_28841, 15, 1);
	}
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	if (bParam4 != 0)
	{
		DECOR_SET_INT(bParam0, "overrideCurve", bParam4);
	}
	if (!Function_45(StackVal, StackVal, vParam1))
	{
		DECOR_SET_VECTOR(bParam0, "overrideDest", vParam1);
	}
	if (bParam5 != 0)
	{
		DECOR_SET_INT(bParam0, "overrideSpeed", bParam5);
	}
	if (bParam6 != 2)
	{
		DECOR_SET_INT(bParam0, "overridePriority", bParam6);
	}
	else
	{
		TASK_PRIORITY_SET(bParam0, 2);
	}
	if (bParam7)
	{
		DECOR_SET_INT(bParam0, "quickRelease", bParam6);
	}
	if (!IS_OBJECT_IN_OBJECTSET(bParam0, Global_28842.f_60))
	{
		ADD_OBJECT_TO_OBJECTSET(bParam0, Global_28842.f_60);
	}
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam0, 1);
}

int Function_62(bool bParam0, int iParam1, int iParam2, int iParam3) //Position: 0x359C / 13724
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
					Function_34(bVar1, 0, 0, 0, 1);
				}
				bVar0++;
			}
		}
		Function_34(bParam0, iParam1, iParam2, iParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

void Function_63(bool bParam0, bool bParam1) //Position: 0x367C / 13948
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "translib_state", bParam1);
	return;
}

void Function_64(int iParam0) //Position: 0x369E / 13982
{
	bool bVar0;
	
	if (IS_OBJECTSET_VALID(iParam0->f_968))
	{
		while (GET_OBJECTSET_SIZE(iParam0->f_968) >= 0)
		{
			bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, iParam0->f_968);
			if (IS_OBJECT_VALID(bVar0))
			{
				if (GET_OBJECT_TYPE(bVar0) == 15)
				{
					MAKE_ACTOR_READY_FOR_ACTION(GET_ACTOR_FROM_OBJECT(bVar0), 1);
					if (Function_381(iParam0->f_780, 0x8000000))
					{
						Function_62(GET_ACTOR_FROM_OBJECT(bVar0), 2, 0, 4);
					}
					else
					{
						Function_62(GET_ACTOR_FROM_OBJECT(bVar0), 0, 0, 2);
					}
				}
				else
				{
					RELEASE_OBJECT_REF(bVar0);
				}
			}
			REMOVE_OBJECT_FROM_OBJECTSET(bVar0, iParam0->f_968);
			CLEAN_OBJECTSET(iParam0->f_968);
		}
	}
	return;
}

void Function_65(int iParam0, int iParam1) //Position: 0x372A / 14122
{
	Function_66(iParam0, iParam1);
	return;
}

void Function_66(int iParam0, bool bParam1) //Position: 0x3737 / 14135
{
	vector3 vVar0;
	var uVar3;
	struct<8> Var6;
	float fVar14;
	
	if (IS_BLIP_VALID(Function_74(iParam0)))
	{
		REMOVE_BLIP(Function_74(iParam0));
	}
	if (IS_ACTOR_VALID(iParam0->f_860))
	{
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(iParam0->f_860)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(iParam0->f_860));
		}
	}
	if (IS_ACTOR_VALID(iParam0->f_952))
	{
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(iParam0->f_952)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(iParam0->f_952));
		}
	}
	if (Function_73(iParam0))
	{
		Function_72();
	}
	if (IS_LAYOUTREF_VALID(iParam0->f_776))
	{
		if (IS_OBJECT_VALID(iParam0->f_940))
		{
			Function_71(iParam0->f_940);
		}
	}
	if (bParam1 == 1)
	{
		if (Function_70(iParam0))
		{
			if (IS_LAYOUTREF_VALID(iParam0->f_776))
			{
				if (IS_VOLUME_VALID(iParam0->f_920))
				{
					if (StackVal && !Function_45(StackVal, iParam0->f_628 != 3, *(iParam0 + 924)))
					{
						vVar0 = { StackVal, StackVal, *(iParam0 + 924) };
						if (iParam0->f_916 == Global_30685[0])
						{
							fVar14 = 9.0f;
						}
						else
						{
							fVar14 = 12.0f;
						}
					}
					else
					{
						GET_VOLUME_CENTER(iParam0->f_920, &vVar0);
						fVar14 = 6.0f;
					}
					FIND_GROUND_INTERSECTION(&vVar0, 40.0f, &vVar0, &uVar3);
					Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_502("transGateway") };
					iParam0->f_940 = Function_69(StackVal, StackVal, iParam0->f_776, &Var6, vVar0, 0.0f, 0.0f, 0.0f, Global_34573, fVar14, 1, 3, 330, 4, 1, -1.0f, -1.0f, 0);
					Function_67(StackVal, StackVal, vVar0, 0, 16, 1);
				}
			}
		}
		else if (!GET_VEHICLE(Global_34573) != iParam0->f_860)
		{
			ADD_BLIP_FOR_ACTOR(iParam0->f_860, 325, 0, 2, 0);
		}
		else if (!GET_VEHICLE(iParam0->f_952) != iParam0->f_860)
		{
			ADD_BLIP_FOR_ACTOR(iParam0->f_952, 325, 0, 2, 0);
		}
	}
	return;
}

void Function_67(vector3 vParam0, var uParam3, var uParam4, var uParam5) //Position: 0x38D1 / 14545
{
	*(&Global_28185 + 24) = { StackVal, StackVal, vParam0 };
	*(&Global_28185 + 36) = { StackVal, StackVal, vParam0 };
	Global_28185 = 2;
	Global_28185.f_4 = 0;
	Global_28185.f_60 = uParam3;
	Global_28185.f_16 = uParam4;
	if (uParam4 & 16 >= 0)
	{
		Global_28185.f_16 |= 131072;
	}
	if (uParam4 & 32 >= 0)
	{
		Global_28185.f_16 |= 262144;
	}
	if (!IS_OBJECTSET_VALID(Global_28185.f_12))
	{
		Global_28185.f_12 = CREATE_OBJECTSET_IN_LAYOUT(StackVal, "MissionGPSPath", 36, 1);
	}
	if (GET_OBJECTSET_SIZE(Global_28185.f_12) >= 0)
	{
		Function_68(Global_28185.f_12);
		CLEAN_OBJECTSET(Global_28185.f_12);
	}
	Global_28185.f_92 = 0;
	Global_28210.f_96 = uParam5;
}

void Function_68(bool bParam0) //Position: 0x398D / 14733
{
	bool bVar0;
	
	if (!IS_OBJECTSET_VALID(bParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(bParam0) >= 0)
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, bParam0);
		REMOVE_OBJECT_FROM_OBJECTSET(bVar0, bParam0);
		CLEAN_OBJECTSET(bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			RELEASE_CURVE(GET_CURVE_FROM_OBJECT(bVar0));
		}
	}
	return;
}

var Function_69(bool bParam0, bool bParam1, vector3 vParam2, vector3 vParam5, bool bParam8, var uParam9, int iParam10, int iParam11, bool bParam12, int iParam13, int iParam14, float fParam15, float fParam16, int iParam17) //Position: 0x39CD / 14797
{
	vector3 vVar0;
	bool bVar3;
	char* cVar4[32];
	bool bVar12;
	bool bVar13;
	
	vVar0 = { uParam9, 2.0f, uParam9 };
	vParam2.f_4 = (vParam2.y + 0.75f);
	bVar3 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(bParam0, bParam1, vParam2, vParam5, vVar0, iParam11, bParam8, iParam10, iParam13, 0, iParam14, iParam17);
	if (IS_OBJECT_VALID(bVar3))
	{
		strcpy(&cVar4, bParam1, 32);
		if (IS_STRING_VALID(bParam1))
		{
			stradd(&cVar4, "restrict", 32);
		}
		bVar12 = CREATE_VOLUME_IN_LAYOUT(bParam0, &cVar4, 2, vParam2, vParam5, 5.0f, 5.0f, 5.0f);
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar12);
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar12);
		if (bParam12 != 4294967295)
		{
			bVar13 = ADD_BLIP_FOR_OBJECT(bVar3, bParam12, 0.0f, 2, 0);
		}
		if (fParam15 < -1.0f)
		{
			SET_BLIP_MAX_DISTANCE(bVar13, fParam15);
		}
		if (fParam16 < -1.0f)
		{
			SET_BLIP_MIN_DISTANCE(bVar13, fParam16);
		}
		DECOR_SET_OBJECT(bVar3, "volrestrict", bVar12);
	}
	return bVar3;
}

bool Function_70(int iParam0) //Position: 0x3A98 / 15000
{
	if (IS_ACTOR_VALID(iParam0->f_860))
	{
		if (Function_381(iParam0->f_780, 8))
		{
			if (IS_ACTOR_VALID(iParam0->f_952))
			{
				if (GET_VEHICLE(iParam0->f_952) != iParam0->f_860 && GET_VEHICLE(Global_34573) != iParam0->f_860)
				{
					return 1;
				}
			}
		}
		if (GET_VEHICLE(Global_34573) == iParam0->f_860)
		{
			return 1;
		}
	}
	return 0;
}

void Function_71(bool bParam0) //Position: 0x3AF5 / 15093
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		if (DECOR_CHECK_EXIST(bParam0, "volrestrict"))
		{
			bVar0 = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(bParam0, "volrestrict"));
			if (IS_VOLUME_VALID(bVar0))
			{
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar0);
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar0);
				if (DECOR_CHECK_EXIST(bParam0, "voldestroy"))
				{
					if (DECOR_GET_BOOL(bParam0, "voldestroy"))
					{
						DESTROY_OBJECT(bVar0);
					}
				}
				else
				{
					DESTROY_OBJECT(bVar0);
				}
			}
		}
		DESTROY_OBJECT(bParam0);
	}
	return;
}

void Function_72() //Position: 0x3B7F / 15231
{
	if (Global_28185 == 2)
	{
		Global_28185.f_4 = 3;
	}
	*(&Global_28185 + 24) = { 0.0f, 0.0f, 0.0f };
	*(&Global_28185 + 36) = { 0.0f, 0.0f, 0.0f };
	CLEAR_GPS_PATH(1);
	return;
}

bool Function_73(int iParam0) //Position: 0x3BAA / 15274
{
	if (Function_381(iParam0->f_584, 16))
	{
		return 1;
	}
	return 0;
}

var Function_74(int iParam0) //Position: 0x3BC3 / 15299
{
	return iParam0->f_36;
}

void Function_75(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x3BCD / 15309
{
	int iVar0;
	
	iVar0 = iParam2;
	if (!iVar0 > *uParam0 && iVar0 <= 0)
	{
		return;
	}
	if (!Function_476(uParam0[iVar02], 1))
	{
		return;
	}
	if (!Function_476(uParam0[iVar02], 2))
	{
		return;
	}
	if (Function_476(uParam0[iVar02], 8))
	{
		STREAMING_EVICT_ACTOR((*uParam1)[iVar03], 4294967295);
		Function_81(uParam0[iVar02], 8);
	}
	Function_81(uParam0[iVar02], 1);
	if (!IS_PERS_CHAR_VALID(StackVal))
	{
		return;
	}
	Function_80(StackVal);
	if (bParam3)
	{
		Function_76(uParam0, uParam1, iParam2, 0);
	}
}

void Function_76(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x3C67 / 15463
{
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (!IS_PERS_CHAR_ALIVE(StackVal))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(StackVal) > GET_CURRENT_GAME_TIME())
			{
				Function_79(uParam0[iParam22], 4);
				uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
				ADD_TIME(uParam0[iParam22] + 4, Function_78(Global_29007), Function_77(Global_29007), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_476(uParam0[iParam22], 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(StackVal, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(StackVal);
			uParam1[iParam23]->f_8 = "";
		}
	}
	else if (!Function_476(uParam0[iParam22], 1) && !bParam3)
	{
		Function_79(uParam0[iParam22], 4);
		uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
		ADD_TIME(uParam0[iParam22] + 4, Function_78(Global_29007), Function_77(Global_29007), false, 0);
	}
}

int Function_77(int iParam0) //Position: 0x3DB6 / 15798
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

int Function_78(int iParam0) //Position: 0x3DE1 / 15841
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

void Function_79(var uParam0, int iParam1) //Position: 0x3E15 / 15893
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

int Function_80(bool bParam0) //Position: 0x3E24 / 15908
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
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar0, 1);
		}
		bVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
		if (IS_OBJECT_VALID(bVar1))
		{
			return GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(bVar1), "ScriptStructure", "stolen_flag", 0);
		}
	}
	return 0;
}

void Function_81(var uParam0, int iParam1) //Position: 0x3EBE / 16062
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_82(bool bParam0) //Position: 0x3ED5 / 16085
{
	int iVar0;
	
	if (!Function_21(bParam0))
	{
		Function_83();
		return;
	}
	iVar0 = Function_20(bParam0);
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_16("DEED_CANCEL", bParam0);
	}
	Global_13172[bParam011].f_4 = 0;
	Global_3376 = 1;
	return;
}

void Function_83() //Position: 0x3F28 / 16168
{
	int iVar0;
	int iVar1;
	char* cVar2[64];
	int iVar18;
	int iVar19;
	int iVar20;
	
	iVar0 = 1;
	iVar1 = 0;
	if (!Global_30842[49])
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= Global_16474)
	{
		iVar0 = 0;
		while (StackVal <= iVar0)
		{
			strcpy(&cVar2, "Deed Count by Status:", 64);
			switch (iVar1)
			{
				case 0x00000000:
					stradd(&cVar2, "Pending,", 64);
					break;
				
				case 0x00000002:
					stradd(&cVar2, "Active,", 64);
					break;
				
				case 0x00000001:
					stradd(&cVar2, "About to Start,", 64);
					break;
				
				case 0x00000003:
					stradd(&cVar2, "Completed,", 64);
					break;
				
				case 0x00000004:
					stradd(&cVar2, "Completed (Cheated),", 64);
					break;
			}
			stradd(&cVar2, " ", 64);
			switch (iVar0)
			{
				case 0x00000001:
					stradd(&cVar2, "StoryMission,", 64);
					break;
				
				case 0x00000002:
					stradd(&cVar2, "ProcMission,", 64);
					break;
				
				case 0x00000003:
					stradd(&cVar2, "LocationMission,", 64);
					break;
				
				case 0x00000004:
					stradd(&cVar2, "nMinigame,", 64);
					break;
				
				case 0x00000006:
					stradd(&cVar2, "Job,", 64);
					break;
				
				default:
					straddi(&cVar2, iVar0, 64);
					break;
			}
			stradd(&cVar2, " ", 64);
			straddi(&cVar2, Global_16474[iVar18][iVar0], 64);
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 1;
	iVar0 = 0;
	while (iVar0 <= Global_13172)
	{
		if (!Global_13172[iVar011] != 0)
		{
			Function_84(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
			strcpy(&cVar2, "Deed:", 64);
			straddi(&cVar2, iVar0, 64);
			stradd(&cVar2, "n Mission ", 64);
			straddi(&cVar2, iVar19, 64);
			stradd(&cVar2, "  Quad ", 64);
			straddi(&cVar2, iVar18, 64);
			stradd(&cVar2, "  Type ", 64);
			straddi(&cVar2, iVar20, 64);
			stradd(&cVar2, "n  Status ", 64);
			straddi(&cVar2, StackVal, 64);
		}
		iVar0++;
	}
	return;
}

void Function_84(bool bParam0, var uParam1, var uParam2, var uParam3) //Position: 0x4170 / 16752
{
	*uParam3 = (bParam0 && 15);
	*uParam1 = (SHIFT_RIGHT(bParam0, 4) && 255);
	*uParam2 = (SHIFT_RIGHT(bParam0, 12) && 255);
}

bool Function_85(int iParam0) //Position: 0x4199 / 16793
{
	if (!iParam0 != 0)
	{
		LOG_ERROR("Asking about a player with an index not = 0. Multiplayer Law Enforcement not yet implemented.");
		return 0;
	}
	return Global_3403;
}

var Function_86(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x420F / 16911
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_395(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "SolomonFolly_Cutscene", 2, 1);
	}
	Function_87(&bVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_87(int iParam0) //Position: 0x4290 / 17040
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_89(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_88(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 9.0f, 0, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 1.0f, 1);
	return;
}

void Function_88(int iParam0) //Position: 0x42D3 / 17107
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2110.398f, 18.19664f, 2616.97f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.040912f, 1.25152f, -0.001435f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_89(var uParam0) //Position: 0x4341 / 17217
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, -2106.158f, 20.49886f, 2617.459f);
	SET_CAMERASHOT_ORIENTATION(*uParam0, -0.044474f, 1.351706f, -0.001436f, 1);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_90() //Position: 0x43AF / 17327
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "SoloFolly_ReturnsSafeNoOpen", "SoloFolly_ReturnsSafeNoOpen", 0, 3, 1, 0, 1);
		Function_91(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_91(bool bParam0) //Position: 0x440E / 17422
{
	Function_92(0, Global_34573, bParam0, 0);
	Function_92(1, bLocal_41, bParam0, 0);
	Function_92(2, bLocal_42, bParam0, 0);
	return;
}

void Function_92(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x4430 / 17456
{
	bool bVar0;
	
	iParam3 = iParam3;
	if (Function_381(bParam2, Function_93(bParam0)))
	{
		bVar0 = bParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, bParam1, 0);
	}
}

bool Function_93(bool bParam0) //Position: 0x4455 / 17493
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_94(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x4461 / 17505
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_21(bParam0))
	{
		Function_83();
		return;
	}
	bVar0 = Function_20(bParam0);
	if (!bVar0 != 1)
	{
		Global_13172[bParam011].f_12++;
		if (Function_199())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_6269 = Function_18(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_13(Global_6269) };
		}
		if (Function_199())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_142();
		CLEAR_JOURNAL_ENTRY(bVar11);
		SET_JOURNAL_ENTRY_PROGRESS(bVar11, -2.0f, false, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(bVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(bVar11, true);
		}
	}
	if (Function_199())
	{
		Function_141();
	}
	Global_13172[bParam011].f_36 = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_16("DEED_COMPLETE", bParam0);
	}
	if (bParam1)
	{
		Global_26281 = GET_CURRENT_GAME_TIME();
	}
	if (StackVal && StackVal != 3 != 4)
	{
		if (bParam3)
		{
			Global_13172[bParam011].f_4 = 4;
		}
		else
		{
			Global_13172[bParam011].f_4 = 3;
		}
		iVar12 = 1;
	}
	if (Global_3421)
	{
		Global_13172[bParam011].f_4 = 0;
	}
	if (iVar12 && !Global_3381)
	{
		if (!bParam3)
		{
			Function_135(bParam0);
		}
		if (bParam1)
		{
			if (bParam2)
			{
				switch (bVar0)
				{
					case 0x00000001:
						iVar13 = 4;
						break;
					
					case 0x00000004:
						iVar13 = 3;
						break;
					
					case 0x00000006:
						iVar13 = 2;
						break;
					
					case 0x00000002:
						switch (Function_18(bParam0))
						{
							case 0x00000000:
								iVar13 = 1;
								break;
							
							default:
								iVar13 = 0;
								break;
						}
						break;
					
					case 0x00000003:
						iVar13 = 10;
						break;
					}
			}
			Function_97(1);
			Function_96(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_95(bParam0, &Var14);
		}
		Var14.f_24 = 1;
		Var14 = Global_6269;
		Var14.f_20 = bParam3;
		RESET_STORED_DATA();
		STORE_GAME_STATE(&Var14, 44, 1);
		if (!LOAD_SOFT_SAVE(0))
		{
			RESET_GAME();
		}
	}
	Global_3376 = 1;
}

void Function_95(int iParam0, int iParam1) //Position: 0x46B5 / 18101
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_96(bool bParam0, int iParam1) //Position: 0x46EF / 18159
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = bParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_46())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_97(bool bParam0) //Position: 0x4731 / 18225
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_126();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_98();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_60(&Global_63095, 1);
		Function_60(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_98() //Position: 0x4782 / 18306
{
	Function_124();
	Function_123();
	Function_123();
	Function_122();
	Function_122();
	Function_121();
	Function_121();
	Function_106(0);
	Function_106(0);
	if (!Function_46())
	{
		Function_103();
		Function_102();
		Function_101();
		Function_100();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_99();
	return;
}

void Function_99() //Position: 0x47D4 / 18388
{
	Global_34581[372] = GET_SAGPLAYER_STAT_FLOAT(0);
	Global_34581[373] = GET_SAGPLAYER_STAT_FLOAT(1);
	Global_34581[374] = GET_SAGPLAYER_STAT_FLOAT(2);
	Global_34581[375] = GET_SAGPLAYER_STAT_FLOAT(3);
	Global_34581[376] = GET_SAGPLAYER_STAT_FLOAT(4);
	Global_34581[377] = GET_SAGPLAYER_STAT_FLOAT(5);
	Global_34581[378] = GET_SAGPLAYER_STAT_FLOAT(6);
	Global_34581[379] = GET_SAGPLAYER_STAT_INT(1);
	Global_34581[380] = GET_SAGPLAYER_STAT_INT(2);
	Global_34581[381] = GET_SAGPLAYER_STAT_FLOAT(7);
	Global_34581[382] = GET_SAGPLAYER_STAT_FLOAT(8);
	Global_34581[383] = GET_SAGPLAYER_STAT_FLOAT(9);
	Global_34581[385] = GET_SAGPLAYER_STAT_INT(0);
	Global_34581[387] = GET_SAGPLAYER_STAT_FLOAT(10);
	Global_34581[388] = GET_SAGPLAYER_STAT_FLOAT(11);
	Global_34581[394] = GET_SAGPLAYER_STAT_FLOAT(12);
	Global_34581[44] = GET_SAGPLAYER_STAT_INT(3);
	Global_34581[392] = GET_SAGPLAYER_STAT_INT(4);
	Global_34581[391] = GET_SAGPLAYER_STAT_INT(6);
	Global_34581[393] = GET_SAGPLAYER_STAT_INT(5);
	Global_34581[395] = GET_SAGPLAYER_STAT_INT(7);
	return;
}

void Function_100() //Position: 0x48DA / 18650
{
	float fVar0;
	
	fVar0 = GET_PLAYER_DEADEYE_POINTS(0);
	if (Global_25986[1])
	{
		if (fVar0 > 50.0f)
		{
			fVar0 = 50.0f;
		}
	}
	else
	{
		fVar0 = 0.0f;
	}
	Global_83815 = fVar0;
	return;
}

void Function_101() //Position: 0x490D / 18701
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(1);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		bVar3 = GET_JOURNAL_ENTRY_IN_LIST(1, iVar1);
		if (bVar3 == 4294967295 && bVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(bVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 50 completed quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_76695[iVar23] = bVar3;
					Global_76695[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(bVar3);
					Global_76695[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(bVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_76695[iVar13] = 4294967295;
		Global_76695[iVar13].f_4 = 4294967295;
		iVar1++;
	}
	return;
}

void Function_102() //Position: 0x4A9B / 19099
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(0);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		bVar3 = GET_JOURNAL_ENTRY_IN_LIST(0, iVar1);
		if (bVar3 == 4294967295 && bVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(bVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 20 active quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_76543[iVar23] = bVar3;
					Global_76543[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(bVar3);
					Global_76543[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(bVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_76543[iVar13] = 4294967295;
		Global_76543[iVar13].f_4 = 4294967295;
		iVar1++;
	}
	Global_76694 = GET_TARGETED_JOURNAL_ENTRY();
	if (Global_76694 == 4294967295 && Global_76694 == 0)
	{
		if (!GET_JOURNAL_ENTRY_TYPE(Global_76694) != 2)
		{
			Global_76694 = 4294967295;
		}
	}
	return;
}

void Function_103() //Position: 0x4C4F / 19535
{
	Function_104(&Global_28260, 1, 0);
	return;
}

void Function_104(int iParam0, bool bParam1, var uParam2) //Position: 0x4C5D / 19549
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	var uVar11;
	bool bVar12;
	bool bVar13;
	
	bVar0 = Function_105();
	if (IS_ACTOR_VALID(bVar0))
	{
		iParam0->f_1012 = GET_NUM_WEAPONS_IN_INVENTORY(bVar0);
		iVar7 = 4294967294;
		bVar8 = GET_WEAPON_IN_HAND(bVar0);
		if (bVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(bVar0, bVar8) || uParam2)
			{
				iVar7 = GET_WEAPON_IN_HAND_CRC(bVar0);
			}
		}
		iVar1 = 0;
		while (iVar1 < (iParam0->f_1012 - 1))
		{
			iVar9 = ACTOR_GET_ITEM_CRC_AT_INDEX(iVar1, bVar0);
			if (iVar9 != iVar7)
			{
				(*iParam0 + 48)[iVar12] = iVar9;
				(iParam0 + 48[iVar12])->f_4 = GET_ITEM_COUNT_BY_CRC((*iParam0 + 48)[iVar12], bVar0);
			}
			iVar1++;
		}
		if (bParam1)
		{
			iParam0->f_44 = GET_NUM_ACCESSORIES_IN_INVENTORY(bVar0);
			iVar2 = 0;
			while (iVar2 < (iParam0->f_44 - 1))
			{
				(*iParam0)[iVar2] = ACTOR_GET_ACCESSORY_CRC_AT_INDEX(iVar2, bVar0);
				iVar2++;
			}
		}
		bVar3 = false;
		while (bVar3 < (17 - 1))
		{
			(*iParam0 + 1016)[bVar3] = _GET_AMMO_AMOUNT(bVar0, bVar3, 0);
			bVar3++;
		}
		iParam0->f_1120 = 4294967295;
		iVar4 = 0;
		while (iVar4 < (7 - 1))
		{
			bVar10 = iVar4;
			(*iParam0 + 1088)[iVar4] = GET_WEAPON_EQUIPPED(bVar0, bVar10);
			if ((*iParam0 + 1088)[iVar4] == 4294967295)
			{
				if (GET_ITEM_EQUIPSLOT(bVar8) == bVar10)
				{
					(*iParam0 + 1088)[iVar4] = bVar8;
					iParam0->f_1120 = bVar8;
				}
			}
			iVar4++;
		}
		iParam0->f_2160 = GET_NUM_COLLECTABLES_IN_INVENTORY(bVar0);
		iVar1 = 0;
		while (iVar1 < (iParam0->f_2160 - 1))
		{
			uVar11 = ACTOR_GET_COLLECTABLE_CRC_AT_INDEX(iVar1, bVar0);
			(*iParam0 + 1132)[iVar12] = uVar11;
			(iParam0 + 1132[iVar12])->f_4 = GET_ITEM_COUNT_BY_CRC((*iParam0 + 1132)[iVar12], bVar0);
			iVar1++;
		}
		bVar12 = ACTOR_GET_NEXT_EQUIP_SLOT(bVar0);
		if (bVar12 != 4294967295)
		{
			iParam0->f_1124 = GET_WEAPON_EQUIPPED(bVar0, bVar12);
		}
		else
		{
			iParam0->f_1124 = 4294967295;
		}
		bVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(bVar0);
		if (bVar13 != 4294967295)
		{
			iParam0->f_1128 = GET_WEAPON_EQUIPPED(bVar0, bVar13);
		}
		else
		{
			iParam0->f_1128 = 4294967295;
		}
		bVar5 = false;
		while (bVar5 < (39 - 1))
		{
			(*iParam0 + 2164)[bVar5] = IS_WEAPONENUM_LOCKED(bVar5);
			bVar5++;
		}
	}
	return;
}

var Function_105() //Position: 0x4E4E / 20046
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_106(int iParam0) //Position: 0x4E63 / 20067
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar3 = 0;
	iVar4 = 0;
	while (iVar4 <= 39)
	{
		switch (iVar4)
		{
			case 0x00000015:
			case 0x00000016:
				iVar2 = 0;
				break;
			
			default:
				if (iVar4 == 31 || iParam0)
				{
					iVar2 = ((Function_120((50 + iVar4)) + Function_120((183 + iVar4))) + Function_120((90 + iVar4)));
				}
				break;
		}
		if (iVar2 > iVar3)
		{
			bVar5 = iVar4;
			iVar3 = iVar2;
		}
		iVar4++;
	}
	if (iVar3 < 0)
	{
		return StackVal, cVar0;
	}
	Function_107(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_107(int iParam0, bool bParam1, bool bParam2) //Position: 0x4F09 / 20233
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
		Function_119(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_118(iParam0);
	if (bParam2)
	{
		Function_108(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_108(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x51A4 / 20900
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_117(390))), 32);
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
					bVar19 = (Function_179(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_179(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_115(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_112(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_110(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_109(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_395(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, bParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, false, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, bParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, false, 0);
						}
						break;
					}
			}
	}
}

var Function_109(int iParam0) //Position: 0x57D1 / 22481
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_110(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x57E2 / 22498
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_111("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_111("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_111("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_111(char* cParam0, bool bParam1) //Position: 0x58D7 / 22743
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_112(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x58F0 / 22768
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_114(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_113(Function_114(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_113(int iParam0, int iParam1) //Position: 0x5955 / 22869
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_114(int iParam0, bool bParam1) //Position: 0x5967 / 22887
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_115(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x5979 / 22905
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
	if (((Function_116(iParam0) != 19 || Function_116(iParam0) != 17) || Function_116(iParam0) != 10) || Function_116(iParam0) != 9)
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

int Function_116(int iParam0) //Position: 0x5AA9 / 23209
{
	return Global_35278[iParam020].f_48;
}

var Function_117(int iParam0) //Position: 0x5AB8 / 23224
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_118(int iParam0) //Position: 0x5AF5 / 23285
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

int Function_119(int iParam0, bool bParam1, bool bParam2) //Position: 0x5C8F / 23695
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

int Function_120(bool bParam0) //Position: 0x5ED3 / 24275
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_121() //Position: 0x5F14 / 24340
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar5 = 0;
	iVar3 = 0;
	while (iVar3 <= 4)
	{
		iVar2 = ((Function_120((50 + iVar3) + 15) + Function_120((183 + iVar3) + 15)) + Function_120((90 + iVar3) + 15));
		if (iVar2 > iVar5)
		{
			iVar4 = iVar3;
			iVar5 = iVar2;
		}
		iVar3++;
	}
	if (iVar5 < 0)
	{
		return StackVal, cVar0;
	}
	Function_107(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_122() //Position: 0x5F9D / 24477
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar5 = 0;
	iVar3 = 0;
	while (iVar3 <= 13)
	{
		if (iVar3 > 7 || iVar3 < 10)
		{
			iVar2 = ((Function_120((50 + iVar3) + 8) + Function_120((183 + iVar3) + 8)) + Function_120((90 + iVar3) + 8));
			if (iVar2 > iVar5)
			{
				iVar4 = iVar3;
				iVar5 = iVar2;
			}
		}
		iVar3++;
	}
	if (iVar5 < 0)
	{
		return StackVal, cVar0;
	}
	Function_107(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_123() //Position: 0x6034 / 24628
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar5 = 0;
	iVar3 = 0;
	while (iVar3 <= 8)
	{
		iVar2 = ((Function_120((50 + iVar3)) + Function_120((183 + iVar3))) + Function_120((90 + iVar3)));
		if (iVar2 > iVar5)
		{
			bVar4 = iVar3;
			iVar5 = iVar2;
		}
		iVar3++;
	}
	if (iVar5 < 0)
	{
		return StackVal, cVar0;
	}
	Function_107(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_124() //Position: 0x60B3 / 24755
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_125(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_107(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_125(int iParam0, bool bParam1, int iParam2) //Position: 0x60EC / 24812
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_INCREASE_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (bParam1 > 0.0f)
	{
		LOG_ERROR("\STAT_INCREASE_NOW: fIncreaseValue < 0.0 - I am turning this into a positive number for you!");
		bParam1 = FABS(bParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] + bParam1);
	Function_119(iParam0, bParam1, 1);
	Function_118(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_108(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= ROUND(bParam1))
		{
			ADD_COLLECTABLE(&(Global_35278[iParam020]), Global_34573, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_126() //Position: 0x62F6 / 25334
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_14())
	{
		Function_132(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_132(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_127(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_127(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_45(StackVal, StackVal, vVar0))
	{
		vVar0 = { StackVal, StackVal, Global_34574 };
		vVar0.f_4 = (vVar0.y + 0.5f);
		FIND_GROUND_INTERSECTION(&vVar0, 100.0f, &Global_34165, &uVar3);
	}
	else
	{
		Global_34165 = { StackVal, StackVal, vVar0 };
	}
	Global_34165.f_156 = Global_34165.f_12;
	*(&Global_34165 + 144) = { StackVal, StackVal, Global_34165 };
	Global_34165.f_160 = Global_34165.f_16;
	Global_34165.f_28 = 0;
	Global_34165.f_36 = 0;
	Global_34165.f_40 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_88793 = 1;
	return;
}

vector3 Function_127(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x63B1 / 25521
{
	int iVar0;
	
	iVar0 = Function_130(uParam2, uParam3);
	if (Function_129(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_380(&Global_63095, 1);
			Function_60(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_380(&Global_63095, 2);
			Function_60(&Global_63095, 1);
			if ((iVar0 != 13 || iVar0 != 14) || iVar0 != 4)
			{
				*uParam1 = 0;
			}
			else
			{
				*uParam1 = 1;
			}
		}
		if (iVar0 == 1)
		{
			*uParam0 = 89.88f;
			return -2158.348f, 19.944f, 2597.452f;
		}
		*uParam0 = Global_16537[iVar021].f_12;
		return StackVal, StackVal, Global_16537[iVar021];
	}
	if (Global_16875)
	{
		Function_380(&Global_63095, 2);
		Function_60(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_128();
	return StackVal, StackVal, Function_128();
}

vector3 Function_128() //Position: 0x6498 / 25752
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_129(int iParam0) //Position: 0x64A1 / 25761
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_130(bool bParam0, bool bParam1) //Position: 0x64B7 / 25783
{
	bool bVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	bVar0 = 4294967295;
	fVar1 = 1E+09.0f;
	iVar3 = 0;
	while (iVar3 <= Global_16537)
	{
		if (((Global_16537[iVar321].f_40 != 3 || Global_16537[iVar321].f_40 != 4) || (iVar3 != 15 && !bParam0)) && (Global_16537[iVar321].f_52 != Global_29004 || bParam1))
		{
			if (Global_3365 || iVar3 == 6)
			{
				fVar2 = Function_131(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
				if (fVar2 > fVar1)
				{
					fVar1 = fVar2;
					bVar0 = iVar3;
				}
			}
		}
		iVar3++;
	}
	if (Global_16875)
	{
		fVar2 = Function_131(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_129(bVar0) && !bParam1)
	{
		bVar0 = Function_130(bParam0, 1);
	}
	return bVar0;
}

float Function_131(vector3 vParam0, vector3 vParam3) //Position: 0x657E / 25982
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_132(var uParam0, int iParam1) //Position: 0x659B / 26011
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_134(Global_34573, &vVar4);
	if (!Function_133(Global_30640[0]))
	{
		vVar7 = { -2158.996f, 19.93287f, 2597.94f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_133(Global_30640[2]))
	{
		vVar7 = { -2424.093f, 26.36347f, 2122.362f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -130.87f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_133(Global_30640[1]))
	{
		vVar7 = { -3242.193f, 19.4623f, 2725.147f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_133(Global_30658[1]))
	{
		vVar7 = { -3658.131f, 42.81397f, 2092.973f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -135.09f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_133(Global_30658[3]))
	{
		vVar7 = { -4454.145f, 9.204829f, 3220.642f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 206.26f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_133(Global_30658[2]))
	{
		GET_VOLUME_CENTER(StackVal, &vVar7);
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 0.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_133(Global_30658[4]))
	{
		vVar7 = { -3669.226f, 8.477426f, 3491.648f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 106.17f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_133(Global_30668[0]))
	{
		vVar7 = { -821.1879f, 93.8091f, 2435.436f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 343.64f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_133(Global_30668[1]))
	{
		vVar7 = { 124.6513f, 76.73672f, 2235.506f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 165.38f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_133(Global_30668[2]))
	{
		GET_VOLUME_CENTER(StackVal, &vVar7);
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 0.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_133(Global_30679[0]))
	{
		vVar7 = { -3195.612f, 41.29269f, 3752.929f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -97.3f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_133(Global_30685[0]))
	{
		vVar7 = { -4287.014f, 18.13315f, 4453.605f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -6.71f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_133(Global_30685[1]))
	{
		vVar7 = { -4708.083f, 3.172676f, 3968.105f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_133(Global_30685[2]))
	{
		vVar7 = { -3245.478f, 39.28797f, 4563.465f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_133(Global_30693[0]))
	{
		vVar7 = { -2687.509f, 31.4827f, 4295.249f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_133(Global_30693[1]))
	{
		vVar7 = { -1719.171f, 11.29226f, 4214.298f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -180.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_133(Global_30693[2]))
	{
		vVar7 = { -1462.607f, 16.54457f, 3952.801f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 22.55f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_133(Global_30707[2]))
	{
		vVar7 = { -819.4399f, 13.11084f, 3712.137f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -135.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_133(Global_30707[3]))
	{
		vVar7 = { 343.2535f, 79.47575f, 3448.062f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -104.45f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_133(Global_30707[0]))
	{
		vVar7 = { -465.2258f, 20.61027f, 3913.855f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_133(Global_30717[0]))
	{
		vVar7 = { 757.22f, 86.90343f, 1271.724f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 270.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_133(Global_30723[2]))
	{
		vVar7 = { -298.7082f, 84.35147f, 2134.708f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 59.3f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_133(Global_30723[1]))
	{
		vVar7 = { -448.9981f, 153.3878f, 1631.183f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 20.74f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_133(Global_30723[0]))
	{
		vVar7 = { -884.3423f, 202.5276f, 1006.602f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 94.65f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_133(Global_30679[1]))
	{
		vVar7 = { -2679.319f, 71.65485f, 3424.564f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -135.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_133(Global_30707[1]))
	{
		vVar7 = { -720.3301f, 67.5125f, 3293.269f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -39.9f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	vVar7 = { -63.861f, 116.861f, 1414.684f };
	bVar10 = VDIST(vVar4, vVar7);
	if (bVar10 > bVar0)
	{
		bVar0 = bVar10;
		vVar1 = { StackVal, StackVal, vVar7 };
	}
	Function_380(&Global_63095, 2);
	Function_60(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_45(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_133(int iParam0) //Position: 0x6DC0 / 28096
{
	bool bVar0;
	
	bVar0 = Global_29008[iParam0];
	return (((Function_381(bVar0, 0x1000000) || Function_381(bVar0, 0x2000000)) || Function_381(bVar0, 0x4000000)) || !Function_381(bVar0, 0x10000000));
}

void Function_134(bool bParam0, bool bParam1) //Position: 0x6DFB / 28155
{
	GET_POSITION(bParam0, bParam1);
	return;
}

void Function_135(bool bParam0) //Position: 0x6E08 / 28168
{
	int iVar0;
	int iVar1;
	
	if (!Function_19(bParam0))
	{
		return;
	}
	switch (Function_20(bParam0))
	{
		case 0x00000001:
			iVar1 = Function_18(bParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_140(12, 1, 0, 0);
				Function_139(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_140(13, 1, 0, 0);
				Function_139(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_140(14, 1, 0, 0);
				Function_139(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_140(15, 1, 0, 0);
				Function_139(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_140(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_18(bParam0))
			{
				case 0x00000000:
					if (Function_138(bParam0) == 1)
					{
						iVar0 = Function_137(bParam0);
						if (Function_136(iVar0))
						{
							if (iVar0 == Global_30723[5])
							{
								Function_139(4, 18);
							}
							else if (iVar0 == Global_30693[3])
							{
								Function_139(4, 10);
							}
							else if (iVar0 == Global_30723[6])
							{
								Function_139(4, 16);
							}
							else if (iVar0 == Global_30668[3])
							{
								Function_139(4, 6);
							}
							else if (iVar0 == Global_30640[13])
							{
								Function_139(4, 3);
							}
							else if (iVar0 == Global_30693[7])
							{
								Function_139(4, 11);
							}
							else if (iVar0 == Global_30640[6])
							{
								Function_139(4, 0);
							}
							else if (iVar0 == Global_30693[10])
							{
								Function_139(4, 15);
							}
							else if (iVar0 == Global_30693[8])
							{
								Function_139(4, 14);
							}
							else if (iVar0 == Global_30640[11])
							{
								Function_139(4, 2);
							}
							else if (iVar0 == Global_30668[6])
							{
								Function_139(4, 7);
							}
							else if (iVar0 == Global_30723[3])
							{
								Function_139(4, 17);
							}
							else if (iVar0 == Global_30685[5])
							{
								Function_139(4, 8);
							}
							else if (iVar0 == Global_30693[9])
							{
								Function_139(4, 13);
							}
							else if (iVar0 == Global_30693[11])
							{
								Function_139(4, 12);
							}
							else if (iVar0 == Global_30640[7])
							{
								Function_139(4, 1);
							}
							else if (iVar0 == Global_30679[3])
							{
								Function_139(4, 5);
							}
							else if (iVar0 == Global_30693[4])
							{
								Function_139(4, 9);
							}
							else if (iVar0 == Global_30658[7])
							{
								Function_139(4, 4);
							}
							else if (iVar0 == Global_30723[4])
							{
								Function_139(4, 19);
							}
							if (StackVal == 1)
							{
								iVar0 = iVar0;
							}
							else if (StackVal == 2)
							{
								iVar0 = Global_29155[iVar010];
							}
							else
							{
								iVar0 = Global_29155[iVar010];
								iVar0 = Global_29155[iVar010];
							}
							if (iVar0 == Global_30621[0])
							{
								Function_140(363, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[1])
							{
								Function_140(364, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[2])
							{
								Function_140(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_137(bParam0) == 0)
			{
				if (Function_138(bParam0) == 1)
				{
					Function_140(458, 1, 0, 0);
					iVar0 = Function_18(bParam0);
					if (Function_136(iVar0))
					{
						if (iVar0 == Global_30668[2])
						{
							Function_139(2, 10);
						}
						else if (iVar0 == Global_30658[2])
						{
							Function_139(2, 11);
						}
						else if (iVar0 == Global_30640[2])
						{
							Function_139(2, 12);
						}
						else if (iVar0 == Global_30658[0])
						{
							Function_139(2, 13);
						}
						else if (iVar0 == Global_30658[3])
						{
							Function_139(2, 14);
						}
						else if (iVar0 == Global_30685[2])
						{
							Function_139(2, 15);
						}
						else if (iVar0 == Global_30685[1])
						{
							Function_139(2, 16);
						}
						else if (iVar0 == Global_30679[1])
						{
							Function_139(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_138(bParam0) == 1)
			{
				Function_140(400, 1, 0, 0);
			}
			switch (Function_18(bParam0))
			{
				case 0x00000001:
					Function_140(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_139(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_139(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_139(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_140(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_139(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_139(6, 9);
					}
					break;
				
				default:
					LOG_ERROR("Please insure this job case is taken care of and create a null case");
					break;
			}
			break;
	}
	return;
}

bool Function_136(int iParam0) //Position: 0x72E4 / 29412
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_137(bool bParam0) //Position: 0x72FA / 29434
{
	if (!Function_19(bParam0))
	{
		return 4294967295;
	}
	return (SHIFT_RIGHT(Global_13172[bParam011], 4) && 255);
}

int Function_138(bool bParam0) //Position: 0x7319 / 29465
{
	if (!Function_19(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_139(int iParam0, bool bParam1) //Position: 0x7333 / 29491
{
	bool bVar0;
	
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	bVar0 = SHIFT_LEFT(true, bParam1);
	(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || bVar0);
	return;
	return;
}

int Function_140(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x739A / 29594
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
	Function_119(iParam0, TO_FLOAT(bParam1), 1);
	Function_118(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_108(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_141() //Position: 0x75BA / 30138
{
	PLAYSTAT_INT("HC_FIREBOTTLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 4, 1)));
	PLAYSTAT_INT("HC_DYNAMITE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 5, 1)));
	PLAYSTAT_INT("nHC_PISTOL", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 6, 1)));
	PLAYSTAT_INT("HC_REVOLVER", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 7, 1)));
	PLAYSTAT_INT("HC_REPEATER", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 8, 1)));
	PLAYSTAT_INT("HC_RIFLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 9, 1)));
	PLAYSTAT_INT("HC_SHOTGUN", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 10, 1)));
	PLAYSTAT_INT("HC_SNIPERRIFLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 11, 1)));
	PLAYSTAT_INT("HC_TOMAHAWK", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 12, 1)));
	PLAYSTAT_INT("HC_ANTITANK", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 13, 1)));
	PLAYSTAT_INT("HC_MONEY", Function_120(0));
	PLAYSTAT_INT("HC_FAME", Function_120(3));
	PLAYSTAT_INT("HC_HONOR", Function_120(1));
	return;
}

void Function_142() //Position: 0x7712 / 30482
{
	int iVar0;
	int iVar1;
	
	if (!Function_147(Global_6269))
	{
		return;
	}
	iVar0 = Function_120(24);
	iVar1 = Function_146(Global_6269);
	if (!Function_147(iVar0) && Function_145(iVar1) < 0)
	{
		Function_107(24, Global_6269, 0);
		Function_143(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_145(Function_146(iVar0)))
	{
		Function_107(24, Global_6269, 0);
		Function_143(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_143(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x7792 / 30610
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
		Function_144(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_144(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, bool bParam9, bool bParam10) //Position: 0x7AE4 / 31460
{
	CLEAR_STAT_MESSAGE();
	if (!Global_49306)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 1, false, false, 0);
		}
		else if (bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), bParam9, "", 2, 4294967295, 0, 0, 0, 0, false, false, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), bParam9, "", 2, 4294967295, 0, 1, 0, 0, false, false, 0);
		}
	}
}

int Function_145(int iParam0) //Position: 0x7B67 / 31591
{
	if (!Function_21(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

int Function_146(int iParam0) //Position: 0x7B81 / 31617
{
	if (!Function_147(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_147(int iParam0) //Position: 0x7B9B / 31643
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_148(bool bParam0) //Position: 0x7BB1 / 31665
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (Function_18(bParam0) == Global_30640[2])
	{
		if (Function_177(2) && !Function_176(2))
		{
			Function_168(2, 2, 0, 0, 1);
		}
	}
	if (Function_18(bParam0) == Global_30658[3])
	{
		if (Function_177(6) && !Function_176(6))
		{
			Function_168(6, 16, 0, 0, 1);
		}
	}
	if (!Function_177(10) || Function_176(10))
	{
		return;
	}
	bVar0 = MAKE_TIME_OF_DAY_EX((GET_DAY(false) - 1), GET_HOUR(false), GET_MINUTE(false), GET_SECOND(false));
	bVar1 = GET_TIME_OF_DAY();
	iVar2 = Function_138(Global_30734);
	if (Global_30734 == bParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_138(Global_30736);
	if (Global_30736 == bParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_138(Global_30738);
	if (Global_30738 == bParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_138(Global_30737);
	if (Global_30737 == bParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_138(Global_30739);
	if (Global_30739 == bParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(Global_13172[Global_3073611].f_36, bVar0, bVar1) && !Global_30736 != bParam0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(Global_13172[Global_3073411].f_36, bVar0, bVar1) && !Global_30734 != bParam0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(Global_13172[Global_3073811].f_36, bVar0, bVar1) && !Global_30738 != bParam0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(Global_13172[Global_3073711].f_36, bVar0, bVar1) && !Global_30737 != bParam0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(Global_13172[Global_3073911].f_36, bVar0, bVar1) && !Global_30739 != bParam0)
	{
		return;
	}
	Function_139(2, 24);
	Function_149(10, 0, 1);
	return;
}

void Function_149(bool bParam0, bool bParam1, bool bParam2) //Position: 0x7D5E / 32094
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_167(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_176(bParam0))
	{
		if (!Function_177(bParam0))
		{
			Function_153(bParam0, 1, 0, 0, 1);
		}
		strcpy(&cVar0, "OUT_", 32);
		strcpy(&cVar8, "out_", 32);
		stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
		stradd(&cVar8, &Global_27774[bParam013] + 32, 32);
		stradd(&cVar8, "_desc", 32);
		if (Global_27774[bParam013].f_48 != 4294967295 || (Global_27774[bParam013].f_48 != 0 && Global_27774[bParam013].f_28 < 0))
		{
			Global_27774[bParam013].f_48 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		}
		if (Global_27774[bParam013].f_48 == 4294967295 && Global_27774[bParam013].f_48 == 0)
		{
			CLEAR_JOURNAL_ENTRY(Global_27774[bParam013].f_48);
			PREPEND_JOURNAL_ENTRY(Global_27774[bParam013].f_48, true);
			PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &cVar8, 0, 2, false);
			SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, -1.0f, false, 0);
			if (!bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, false, false, false, 0, 2, 0, 0, 0);
			}
		}
		Function_140(457, 1, 0, 0);
		Function_152(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (bParam2)
		{
			if (!Function_151(0, 0, 1, 1))
			{
				Function_97(1);
				Function_96(1, 0);
			}
			else
			{
				Function_150();
			}
		}
	}
	return;
}

void Function_150() //Position: 0x7EFD / 32509
{
	return;
}

bool Function_151(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x7F03 / 32515
{
	iParam0 = iParam0;
	if (Global_3380 && !iParam1 != 1)
	{
		return 1;
	}
	if (Global_3382 && !iParam1 != 2)
	{
		return 1;
	}
	if (Global_3392 && !iParam1 != 6)
	{
		return 1;
	}
	if (Global_3384 && !iParam1 != 4)
	{
		return 1;
	}
	if (Global_3393 && iParam2)
	{
		return 1;
	}
	if (Global_3395 || Global_3396)
	{
		return 1;
	}
	if (Global_3385 && !iParam1 != 3)
	{
		return 1;
	}
	if (Global_59353 && iParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

void Function_152(bool bParam0, int iParam1) //Position: 0x7FA7 / 32679
{
	if (!Function_167(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

void Function_153(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x8000 / 32768
{
	struct<8> Var0;
	
	if (!Function_167(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_166(3) && !bParam4)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_177(bParam0))
	{
		Function_140(456, 1, 0, 0);
		Function_152(bParam0, 2);
		if (bParam2)
		{
			if (!Function_151(0, 0, 1, 1))
			{
				Function_97(1);
				Function_96(1, 5);
			}
			else
			{
				Function_150();
			}
		}
		Function_161(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_160() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, false, false, false, 0, 2, 0, 0, 0);
		}
		else if (Function_160() || Global_3380)
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
			{
				DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
			}
		}
		if (bParam3)
		{
			stradd(&Var0, "_tip", 32);
			Function_512(&Var0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_14())
		{
			if (!Function_159(Global_76846, 2))
			{
				Function_154(Global_34573, 2, 1, 0);
			}
		}
	}
}

void Function_154(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x8155 / 33109
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_156(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_155(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_155(char* cParam0, int iParam1) //Position: 0x81C1 / 33217
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

bool Function_156(bool bParam0, var uParam1, int iParam2) //Position: 0x81F8 / 33272
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
		if (Function_158(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_157(uVar0))
		{
			case 0x00000002:
				if (!Function_159(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_157(char* cParam0) //Position: 0x8270 / 33392
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

int Function_158(int iParam0) //Position: 0x8311 / 33553
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_60(&iVar1, 2147483648);
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

bool Function_159(int iParam0, int iParam1) //Position: 0x834E / 33614
{
	if ((iParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_160() //Position: 0x8361 / 33633
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_161(bool bParam0) //Position: 0x838E / 33678
{
	char* cVar0[32];
	char* cVar8[32];
	struct<8> Var16;
	bool bVar24;
	
	strcpy(&cVar0, "OUT_", 32);
	strcpy(&cVar8, "out_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	stradd(&cVar8, &Global_27774[bParam013] + 32, 32);
	stradd(&cVar8, "_hint", 32);
	if (!IS_JOURNAL_ENTRY_IN_LIST(Global_27774[bParam013].f_48, 0) && !IS_JOURNAL_ENTRY_IN_LIST(Global_27774[bParam013].f_48, 1))
	{
		Global_27774[bParam013].f_48 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		APPEND_JOURNAL_ENTRY(Global_27774[bParam013].f_48, 0);
		bVar24 = false;
		while (bVar24 <= Global_27774[bParam013].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_165(bParam0, Function_93(bVar24)))
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &Var16, 0, 4, false);
			}
			else
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &Var16, 0, 3, false);
			}
			bVar24++;
		}
	}
	else if (IS_JOURNAL_ENTRY_IN_LIST(Global_27774[bParam013].f_48, 0))
	{
		bVar24 = false;
		while (bVar24 <= Global_27774[bParam013].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_165(bParam0, Function_93(bVar24)))
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_27774[bParam013].f_48, &Var16, 4, 0);
			}
			else
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_27774[bParam013].f_48, &Var16, 3, 0);
			}
			bVar24++;
		}
	}
	if (Global_27774[bParam013].f_48 == 4294967295 && Global_27774[bParam013].f_48 == 0)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_164(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), false, 0);
		Function_163(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_162(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_162(int iParam0) //Position: 0x853E / 34110
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_167(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 <= Global_27774[iParam013].f_28)
	{
		iVar1 = iVar1;
		if ((StackVal && iVar0) == 0)
		{
			return iVar1 + 1;
		}
		iVar0 *= 2;
		iVar1++;
	}
	return iVar2 + 1;
}

void Function_163(bool bParam0, bool bParam1) //Position: 0x8595 / 34197
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(bParam0);
	REMOVE_JOURNAL_ENTRY(bParam0, bParam1);
	PREPEND_JOURNAL_ENTRY(bParam0, bParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(bParam0);
	}
	return;
}

var Function_164(int iParam0) //Position: 0x85BA / 34234
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_167(iParam0))
	{
		return 4294967295;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_27774[iParam013].f_28)
	{
		if ((StackVal && iVar0) >= 0)
		{
			iVar2++;
		}
		iVar0 *= 2;
		iVar1++;
	}
	return iVar2;
}

bool Function_165(bool bParam0, int iParam1) //Position: 0x8610 / 34320
{
	int iVar0;
	
	if (!Function_167(bParam0))
	{
		LOG_ERROR("Attempting to check scraps on invalid outfit");
		return 0;
	}
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_166(int iParam0) //Position: 0x866F / 34415
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_167(int iParam0) //Position: 0x868B / 34443
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

void Function_168(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x86A1 / 34465
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_167(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_166(3) || iParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_175(bParam0, 2))
	{
		Function_140(456, 1, 0, 0);
		Function_152(bParam0, 2);
		if (!bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_512(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_165(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_152(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_151(0, 0, 1, 1))
			{
				Function_97(1);
				Function_96(1, 0);
			}
			else
			{
				Function_150();
			}
		}
		Function_161(bParam0);
		if (StackVal && !Function_381(((((!Function_160() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, false, false, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_381((((Function_160() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_14())
		{
			if (!Function_159(Global_76846, 2))
			{
				Function_154(Global_34573, 2, 1, 0);
			}
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_170();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_169(3, bParam1);
				break;
			
			case 0x00000005:
				Function_169(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_169(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_169(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_169(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_169(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_139(2, 24);
				break;
			
			case 0x00000003:
				Function_139(2, 25);
				break;
			
			case 0x0000000F:
				Function_139(2, 26);
				break;
			
			case 0x0000000D:
				Function_139(2, 27);
				break;
			
			case 0x0000000E:
				Function_139(2, 28);
				break;
			}
	}
}

void Function_169(int iParam0, bool bParam1) //Position: 0x8937 / 35127
{
	if (iParam0 < 16 || iParam0 != 4294967295)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	if (bParam1 > 0)
	{
		(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || bParam1);
	}
	return;
	return;
}

void Function_170() //Position: 0x89A2 / 35234
{
	if (Function_167(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_174(Global_28180);
			Global_28180.f_8 = Function_171(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_174(Global_28180);
			Global_28180.f_8 = Function_171(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_171(int iParam0, int iParam1) //Position: 0x8A1D / 35357
{
	vector3 vVar0;
	struct<9> Var3;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	
	iVar15 = 1;
	iVar16 = 1;
	iVar17 = 1;
	iVar18 = 1;
	iVar19 = 1;
	switch (iParam0)
	{
		case 0x00000000:
			break;
		
		case 0x00000004:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_173(6, 0) || Function_173(12, 0))
					{
						bVar6 = StackVal;
					}
					strcpy(&cVar7, "out_dnd_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip4", 32);
					break;
				
				case 0x00000010:
					vVar0 = { -2177.057f, 16.426f, 2626.285f };
					vVar3 = { 400.0f, 400.0f, 400.0f };
					strcpy(&cVar7, "out_dnd_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip6", 32);
					break;
			}
			break;
		
		case 0x00000005:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					vVar3 = { 400.0f, 400.0f, 400.0f };
					strcpy(&cVar7, "out_rustler_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip6", 32);
					break;
			}
			break;
		
		case 0x00000006:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_172(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_173(5, 0))
					{
						vVar0 = { -4120.147f, 18.356f, 3039.531f };
						vVar3 = { 500.0f, 500.0f, 500.0f };
						iVar16 = 0;
					}
					strcpy(&cVar7, "out_treasur_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip6", 32);
					break;
			}
			break;
		
		case 0x00000007:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip4", 32);
					break;
				
				case 0x00000010:
					vVar0 = { -4178.186f, 32.616f, 4582.207f };
					vVar3 = { 500.0f, 500.0f, 500.0f };
					strcpy(&cVar7, "out_bandito_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip6", 32);
					break;
			}
			break;
		
		case 0x00000008:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_172(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_172(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_172(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_172(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_173(26, 0))
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					strcpy(&cVar7, "out_rebel_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_172(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_172(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_172(27) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					strcpy(&cVar7, "out_rebel_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip6", 32);
					break;
			}
			break;
		
		case 0x00000009:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_172(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_172(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_172(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_172(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_173(17, 0) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					strcpy(&cVar7, "out_military_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip6", 32);
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip4", 32);
					break;
				
				case 0x00000010:
					if (Function_172(19) && iVar19)
					{
						vVar0 = { -1708.36f, 46.18f, 2175.89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_173(6, 0) && Function_172(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_172(17) && iVar19)
					{
						vVar0 = { -1687.208f, 53.208f, 2140.491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_173(9, 0) && Function_172(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_172(15) && iVar19)
					{
						vVar0 = { -1709.084f, 55.216f, 2104.631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_173(8, 0) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					strcpy(&cVar7, "out_gun_blip5", 32);
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_suit_blip1", 32);
					break;
			}
			break;
		
		default:
			break;
	}
	if (Function_45(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_45(StackVal, StackVal, vVar3))
			{
				if (GET_OBJECT_TYPE(bVar6) == 9)
				{
					GET_VOLUME_SCALE(bVar6, &vVar3);
				}
				else
				{
					vVar3 = { 200.0f, 200.0f, 200.0f };
				}
			}
		}
	}
	if (!Function_45(StackVal, StackVal, vVar3))
	{
		bVar20 = ADD_BLIP_FOR_COORD(&vVar0, 440, 0f, 2, 0);
		SET_BLIP_SCALE(bVar20, ((vVar3.x + vVar3.z) / 2.0f));
		SET_BLIP_COLOR(bVar20, 0.58f, 0.35f, 0.72f, 0.5f);
		SET_BLIP_PRIORITY(bVar20, 3);
		SET_BLIP_NAME(bVar20, &cVar7);
		return bVar20;
	}
	return "";
}

int Function_172(int iParam0) //Position: 0x960E / 38414
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

bool Function_173(int iParam0, bool bParam1) //Position: 0x9623 / 38435
{
	int iVar0;
	
	iVar0 = Function_146(iParam0);
	if (!Function_19(iVar0))
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

int Function_174(int iParam0) //Position: 0x9660 / 38496
{
	int iVar0;
	int iVar1;
	
	if (!Function_167(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_27774[iParam013].f_28)
	{
		if ((StackVal && iVar0) == 0)
		{
			return iVar0;
		}
		iVar0 *= 2;
		iVar1++;
	}
	return 0;
}

bool Function_175(int iParam0, int iParam1) //Position: 0x96AF / 38575
{
	int iVar0;
	
	if (!Function_167(iParam0))
	{
		return 0;
	}
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_176(int iParam0) //Position: 0x96DC / 38620
{
	if (!Function_167(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_175(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_177(int iParam0) //Position: 0x972D / 38701
{
	if (!Function_167(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_175(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

int Function_178(int iParam0, bool bParam1, bool bParam2) //Position: 0x977F / 38783
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_34581[iParam0] > bParam1)
	{
		Function_119(iParam0, bParam1, 0);
	}
	Global_34581[iParam0] = bParam1;
	Function_118(iParam0);
	if (bParam2)
	{
		Function_108(iParam0, 1, bParam1, 0, 0, 0x40400000, 0, 0);
	}
	return 1;
}

float Function_179(int iParam0) //Position: 0x99EB / 39403
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_180(int iParam0, bool bParam1, bool bParam2) //Position: 0x9A24 / 39460
{
	int iVar0;
	bool bVar1;
	
	if (Function_192(0) && (!Global_3380 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_199())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_3380)
	{
		Global_12976.f_164 = (Global_12976.f_164 + iParam0);
		return;
	}
	if (bVar1 == 0)
	{
		return;
	}
	iVar0 = Function_120(3);
	Function_189();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_187(3, bVar1);
		if (!bParam2)
		{
			if (!Function_159(Global_76848, 4))
			{
				Function_154(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_140(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_179(3));
	iVar0 = Function_120(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_182(4, Function_186(Global_12976.f_156), 1);
				Function_181(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_182(4, Function_186(Global_12976.f_156), 1);
				Function_181(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_182(4, Function_186(Global_12976.f_156), 1);
				Function_181(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_182(4, Function_186(Global_12976.f_156), 1);
				Function_181(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_182(4, Function_186(Global_12976.f_156), 1);
				Function_181(Global_12976.f_152, Global_12976.f_156);
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

void Function_181(int iParam0, int iParam1) //Position: 0x9BF3 / 39923
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.2f);
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
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.3f);
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
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.4f);
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
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.5f);
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
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.8f);
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

int Function_182(int iParam0, char* cParam1, bool bParam2) //Position: 0x9E51 / 40529
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
	Function_143(iParam0, cParam1, 0, 1);
	iVar1 = Function_183();
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

int Function_183() //Position: 0x9FD6 / 40918
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
	Function_184();
	return 0;
}

void Function_184() //Position: 0xA075 / 41077
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
		Function_185(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_185(int iParam0) //Position: 0xA124 / 41252
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

var Function_186(int iParam0) //Position: 0xA182 / 41346
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

int Function_187(int iParam0, bool bParam1) //Position: 0xA211 / 41489
{
	bool bVar0;
	int iVar1;
	
	Function_140(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_188(iParam0, 4294967295);
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
	iVar1 = Function_183();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

var Function_188(int iParam0, int iParam1) //Position: 0xA3AE / 41902
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

void Function_189() //Position: 0xA3EF / 41967
{
	Function_191(3, 0.0f);
	Function_190(3, 10000.0f);
	return;
}

int Function_190(int iParam0, int iParam1) //Position: 0xA405 / 41989
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_191(int iParam0, int iParam1) //Position: 0xA445 / 42053
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_192(int iParam0) //Position: 0xA485 / 42117
{
	return (*&Global_12976 + 104)[iParam0];
}

void Function_193(int iParam0, bool bParam1, bool bParam2) //Position: 0xA494 / 42132
{
	int iVar0;
	bool bVar1;
	
	if (Function_192(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_199())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_120(1);
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
			Function_187(1, bVar1);
			if (!bParam2)
			{
				if (!Function_159(Global_76848, 1))
				{
					Function_154(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_196(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_159(Global_76848, 2))
				{
					Function_154(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_140(1, bVar1, 0, 0);
	}
	else
	{
		Function_195(1, (4294967295 * bVar1), 0);
	}
	if (Function_120(1) <= 4294962296)
	{
		Function_107(1, 4294962296, 0);
	}
	else if (Function_120(1) >= 5000)
	{
		Function_107(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_179(1));
	iVar0 = Function_120(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_182(2, Function_194(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_182(2, Function_194(Global_12976.f_152), 0);
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
				Function_182(2, Function_194(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_182(2, Function_194(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_182(2, Function_194(Global_12976.f_152), 1);
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
				Function_182(2, Function_194(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_182(2, Function_194(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_182(2, Function_194(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_182(2, Function_194(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_182(2, Function_194(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_182(2, Function_194(Global_12976.f_152), 1);
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
				Function_182(2, Function_194(Global_12976.f_152), 0);
			}
			break;
	}
	Function_181(Global_12976.f_152, Global_12976.f_156);
	return;
}

var Function_194(int iParam0) //Position: 0xA7B5 / 42933
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

int Function_195(int iParam0, bool bParam1, int iParam2) //Position: 0xA858 / 43096
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
	Function_118(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_108(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_196(int iParam0, bool bParam1) //Position: 0xAA53 / 43603
{
	bool bVar0;
	int iVar1;
	
	Function_195(iParam0, bParam1, 0);
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
	iVar1 = Function_188(iParam0, 4294967295);
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
	iVar1 = Function_183();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

int Function_197(bool bParam0, bool bParam1, int iParam2) //Position: 0xABEF / 44015
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (bParam1)
	{
		if (GET_ITEM_COUNT(Function_198(bParam0), Function_105()) == 0)
		{
			ADD_ITEM(Function_198(bParam0), Function_105(), iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_198(bParam0), Function_105(), iParam2);
	return 1;
}

var Function_198(bool bParam0) //Position: 0xAC3A / 44090
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

bool Function_199() //Position: 0xAD2B / 44331
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

int Function_200(bool bParam0, bool bParam1) //Position: 0xAD56 / 44374
{
	bool bVar0;
	
	bVar0 = Function_120(0);
	if ((Function_120(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_140(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_120(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_140(597, bParam0, 0, 0);
	}
	if ((Function_120(597) + Function_120(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

bool Function_201(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xAE21 / 44577
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
			bVar0 = (bVar0 * 0.75f);
			break;
		
		case 0x00000001:
			bVar0 = (bVar0 * 1.0f);
			break;
		
		case 0x00000002:
			bVar0 = (bVar0 * 1.25f);
			break;
		
		default:
			bVar0 = (bVar0 * 0.75f);
			break;
	}
	if (bParam2)
	{
		bVar0 = (bVar0 * (0.75f + ((TO_FLOAT(Function_120(5)) / 100.0f) * 0.5f)));
	}
	if (bParam3)
	{
		if (HAS_ITEM(Function_198(17), Global_34573))
		{
			bVar0 = (bVar0 * 1.2f);
		}
	}
	if (bParam4)
	{
		bVar0 = (bVar0 * 1.1f);
	}
	if (ROUND(bVar0) <= 1)
	{
		bVar0 = 1.0f;
	}
	return ROUND(bVar0);
}

void Function_202() //Position: 0xAF23 / 44835
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_203(bool bParam0, bool bParam1, bool bParam2) //Position: 0xAF38 / 44856
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam1) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				MEMORY_CONSIDER_AS(bParam0, bVar1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

void Function_204(bool bParam0, bool bParam1) //Position: 0xAF82 / 44930
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam1) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			MEMORY_IDENTIFY(bParam0, bVar1);
		}
		bVar0++;
	}
	return;
}

void Function_205(bool bParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, var uParam6, bool bParam7) //Position: 0xAFB8 / 44984
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar2))
		{
			bVar1 = GET_BLIP_ON_ACTOR(bVar2);
			if (IS_BLIP_VALID(bVar1))
			{
				if (GET_BLIP_ICON(bVar1) != bParam1)
				{
					CHANGE_BLIP_ICON(bVar1, bParam1);
				}
				SET_BLIP_MIN_DISTANCE(bVar1, fParam3);
				SET_BLIP_MAX_DISTANCE(bVar1, fParam4);
				SET_BLIP_SCALE(bVar1, fParam5);
				if (bParam7)
				{
					SET_BLIP_FLAG(bVar1, 8192, 0);
				}
			}
			else
			{
				bVar1 = ADD_BLIP_FOR_ACTOR(bVar2, bParam1, fParam3, 2, 0);
				SET_BLIP_MAX_DISTANCE(bVar1, fParam4);
				SET_BLIP_SCALE(bVar1, fParam5);
				if (bParam7)
				{
					SET_BLIP_FLAG(bVar1, 8192, 0);
				}
			}
			if (iParam2 != 4294967295)
			{
				if (HUD_GET_SHOOT_BLIP_ICON_FOR_ACTOR(bVar2) != iParam2)
				{
					HUD_SET_SHOOT_BLIP_ICON_FOR_ACTOR(bVar2, iParam2);
				}
			}
			else if (HUD_GET_SHOOT_BLIP_ICON_FOR_ACTOR(bVar2) != 4294967295)
			{
				HUD_CLEAR_SHOOT_BLIP_ICON_FOR_ACTOR(bVar2);
			}
			if (GET_BLIP_ICON(bVar1) == 322)
			{
				SET_BLIP_IMPAIRMENT_MASK(bVar1, (GET_BLIP_IMPAIRMENT_MASK(bVar1) || uParam6));
			}
		}
		bVar0++;
	}
}

void Function_206(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9) //Position: 0xB0A2 / 45218
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
			SET_PLAYER_CONTROL(false, 1, 0, 0);
		}
		bVar0 = Function_105();
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
			if (Function_46())
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
			SET_ACTOR_INVULNERABILITY(bVar0, 0);
			if (Global_34108[0])
			{
				Global_34108[0] = 0;
				UI_CHEAT_SET_VALUE(0, 0);
			}
		}
		Function_140(21, 1, 0, 0);
	}
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam7)
	{
		Function_202();
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
	Function_207(iParam9);
}

void Function_207(bool bParam0) //Position: 0xB192 / 45458
{
	bParam0 = bParam0;
	HUD_ENABLE(bParam0);
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	PRINT_SMALL_B("Common_Null", 0.1f, 0, 2, 1, 0, 0);
	SET_TIME_ACCELERATION(Global_63398);
	STREAMING_UNLOAD_SCENE();
	AI_STOP_IGNORING_ACTORS();
	if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol")))
	{
		DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol"));
	}
	if (!Global_3380)
	{
		Function_48();
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

void Function_208() //Position: 0xB241 / 45633
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "SoloFollyFTE_LawAskHelp_v1_AA", "SoloFollyFTE_LawAskHelp_v1_AA", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "SoloFollyFTE_LawAskHelp_v1_AB", "SoloFollyFTE_LawAskHelp_v1_AB", 0, 1, 1, 0, 1);
		Function_91(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_209(bool bParam0, bool bParam1) //Position: 0xB2ED / 45805
{
	Function_380(bParam0, 128);
	if (!IS_ACTOR_RIDING_VEHICLE(Global_34573))
	{
		Function_210("sol_FTE_BackInWagon", 0, -1.0f, 2, 0, 0);
		Function_65(bParam1, 1);
		return 2;
	}
	return 0;
}

int Function_210(char* cParam0, int iParam1, float fParam2, int iParam3, char* cParam4, int iParam5) //Position: 0xB32C / 45868
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Global_63406 - 1))
	{
		if (STRING_LENGTH(&(Global_63406[iVar021])) == 0)
		{
			strcpy(&(Global_63406[iVar021]), cParam0, 32);
			Global_63406[iVar021].f_32 = iParam1;
			Global_63406[iVar021].f_36 = fParam2;
			Global_63406[iVar021].f_40 = iParam3;
			strcpy(&Global_63406[iVar021] + 48, cParam4, 32);
			Global_63406[iVar021].f_44 = 1;
			Global_63406[iVar021].f_80 = iParam5;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool Function_211(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0xB3AB / 45995
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	
	*iParam1 = 0;
	if (!iLocal_27)
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, *bParam10))
		{
			Function_492(iParam0, 0);
			iLocal_27 = 1;
		}
	}
	if (!Function_381(*bParam2, 4096))
	{
		if (IS_LAYOUTREF_VALID(Global_30616))
		{
			if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Global_30616, "solv_region")) || IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Global_30616, "chov_armadillo")))
			{
				Function_493(iParam0, 0);
			}
			else
			{
				Function_493(iParam0, 1);
				SET_PLAYER_ENDLESS_READYMODE(0, 0);
				if (!iLocal_23)
				{
					if (!Function_173(23, 0))
					{
						if (DECOR_CHECK_EXIST(Global_34573, "nPrintHelp"))
						{
							if (!HUD_IS_SHOWING_HELP_TEXT())
							{
								Function_210("sol_FTE_Help_Stagecoach_01", 0, -1.0f, 1, 0, 0);
								Function_210("sol_FTE_Help_Stagecoach_02", 0, -1.0f, 1, 0, 0);
								Function_210("sol_FTE_Help_Stagecoach_03", 0, -1.0f, 1, 0, 0);
								iLocal_23 = 1;
							}
						}
					}
				}
				if (IS_ACTOR_VALID(*bParam9))
				{
					if (IS_ACTOR_ALIVE(*bParam9))
					{
						DESTROY_ACTOR(*bParam9);
					}
				}
				Function_380(bParam2, 4096);
			}
		}
	}
	else if (!Function_381(*bParam2, 8192))
	{
		if (IS_LAYOUTREF_VALID(Global_30616))
		{
			if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Global_30616, "armv_region")))
			{
				HUD_CLEAR_HELP();
				HUD_CLEAR_HELP_QUEUE();
				AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
				Function_493(iParam0, 0);
				Function_375(iParam0);
				Function_380(bParam2, 8192);
			}
		}
	}
	if (Function_381(*bParam2, 128))
	{
		if (!iLocal_22)
		{
			Function_374(iParam0, Global_34573);
			if (GET_NUM_DRAFT_POSITIONS(*bParam11) == 2)
			{
				Function_374(iParam0, GET_DRAFT_ACTOR(false, *bParam11));
				Function_374(iParam0, GET_DRAFT_ACTOR(true, *bParam11));
			}
			iLocal_22 = 1;
		}
		iVar0 = Function_227(iParam0, 0);
		switch (iVar0)
		{
			case 0x00000000:
				if (Function_381(*bParam2, 4096))
				{
					if (Function_226(iParam0))
					{
						if (!iLocal_25)
						{
							AUDIO_MUSIC_SET_MOOD("CHASE", 0, 4294967295, 4294967295);
							iLocal_25 = 1;
						}
					}
				}
				if (Function_85(0) && !iLocal_24)
				{
					iLocal_24 = 1;
					*iParam1 = 4294966630;
					return 0;
					iVar0 = 11;
				}
				if (!Function_381(*bParam2, 16384))
				{
					if (Function_225(iParam0 + 1004))
					{
						bVar1 = Function_223(iParam0 + 1004);
						if (SQUAD_IS_VALID(bVar1))
						{
							if (SQUAD_GET_SIZE(bVar1) != 0)
							{
								bVar2 = Function_220(Global_34573, bVar1);
								if (IS_ACTOR_VALID(bVar2))
								{
									if (Function_401(Global_34573, bVar2) > 15.0f)
									{
										if (*iParam4 == 0)
										{
											SAY_SINGLE_LINE_CONTEXT(bVar2, 96, Global_34573, 0, 0, 0, 4294967295, 4294967295, 0, 1);
										}
										else if (*iParam4 == 1)
										{
											SAY_SINGLE_LINE_CONTEXT(bVar2, 96, Global_34573, 0, 0, 0, 4294967295, 4294967295, 0, 1);
										}
										else if (*iParam4 == 2)
										{
											SAY_SINGLE_LINE_CONTEXT(bVar2, 96, Global_34573, 0, 0, 0, 4294967295, 4294967295, 0, 1);
										}
										else if (*iParam4 == 3)
										{
											SAY_SINGLE_LINE_CONTEXT(bVar2, 96, Global_34573, 0, 0, 0, 4294967295, 4294967295, 0, 1);
										}
										else if (*iParam4 == 4)
										{
											SAY_SINGLE_LINE_CONTEXT(bVar2, 96, Global_34573, 0, 0, 0, 4294967295, 4294967295, 0, 1);
										}
										else if (*iParam4 == 5)
										{
											SAY_SINGLE_LINE_CONTEXT(bVar2, 96, Global_34573, 0, 0, 0, 4294967295, 4294967295, 0, 1);
										}
										else if (*iParam4 == 6)
										{
											SAY_SINGLE_LINE_CONTEXT(bVar2, 96, Global_34573, 0, 0, 0, 4294967295, 4294967295, 0, 1);
										}
										*iParam4++;
										Function_380(bParam2, 16384);
									}
								}
							}
						}
					}
				}
				if (Function_218(Global_30640[0]) && !Function_381(*bParam2, 512))
				{
					if (!IS_ACTOR_VALID(*bParam3))
					{
						*bParam3 = Function_215(&Global_6298, &Global_7189, 4, 1, 0, 1);
						if (IS_ACTOR_VALID(*bParam3))
						{
							DECOR_SET_BOOL(*bParam3, "CanBeLasso", false);
							TELEPORT_ACTOR(*bParam3, &vLocal_28, 1, 1, 1);
							Function_380(bParam2, 512);
							*uParam5 = Function_213("narmadillo", "ruinedbank", 1);
							if (IS_DOOR_VALID(*uParam5))
							{
								Function_212(*uParam5, 1);
							}
							vVar3 = { -2130.153f, 16.612f, 2625.597f };
							*uParam7 = CREATE_GRINGO_IN_LAYOUT(*bParam6, Function_395(), "$/content/scripting/gringo/simplegringo/shakehands_link", vVar3, 0.0f, -17.615f, 0.0f);
							SET_ACTOR_UPDATE_PRIORITY(*bParam3, false);
							AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(*bParam3, false);
							TASK_PRIORITY_SET(*bParam3, 1);
							TASK_FACE_ACTOR(*bParam3, Global_34573, 1, 3212836864);
							RESET_ANIM_SET_FOR_ACTOR(*bParam3, 1);
							SET_ANIM_SET_FOR_ACTOR(*bParam3, "excited_return", 0);
							SET_ACTION_NODE_FOR_ACTOR(*bParam3, "excited_return/mobile_and_loop/loop");
							*uParam8 = CREATE_VOLUME_IN_LAYOUT(*bParam6, "AmbientRestriction", 2, vLocal_31, vLocal_34, vLocal_37);
							ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(*uParam8);
						}
					}
				}
				break;
			
			case 0x0000000B:
				*iParam1 = 4294966630;
				return 0;
				break;
			
			case 0x00000009:
				break;
			
			case 0x00000008:
				Function_380(bParam2, 32768);
				*iParam1 = 666;
				Function_65(iParam0, 0);
				return 0;
				break;
			
			case 0x0000000A:
				*iParam1 = 4294966630;
				Function_65(iParam0, 0);
				return 0;
				break;
			
			case 0x00000012:
				Function_210("SOL_Help_KilledAnimals", 0, -1.0f, 1, 0, 0);
				Function_65(iParam0, 0);
				return 0;
				break;
			
			case 0x00000002:
				Function_60(bParam2, 16384);
				break;
			
			case 0x00000007:
				break;
			
			default:
				LOG_ERROR("Got some weird case in the SOL_FTE transport.  See Ben J or Ryan P.");
				break;
			}
	}
	return 1;
}

void Function_212(bool bParam0, bool bParam1) //Position: 0xB99A / 47514
{
	if (!IS_DOOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_BOOL(bParam0, "unlockMe", bParam1);
	if (DECOR_CHECK_EXIST(bParam0, "lockMe"))
	{
		DECOR_REMOVE(bParam0, "lockMe");
	}
	if (IS_DOOR_LOCKED(bParam0))
	{
		SET_DOOR_LOCK(bParam0, 0);
	}
	return;
}

int Function_213(var uParam0, var uParam1, int iParam2) //Position: 0xB9EB / 47595
{
	return Function_214(Global_29006, uParam0, uParam1, iParam2);
}

int Function_214(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0xB9FD / 47613
{
	char* cVar0[8];
	char* cVar2[32];
	bool bVar10;
	
	if (!Function_136(iParam0))
	{
		return "";
	}
	if (!IS_WORLD_SECTOR_LOADED(Global_29155[iParam010].f_32))
	{
		return "";
	}
	uParam1 = uParam1;
	strcpy(&cVar0, "door", 8);
	if (iParam3 <= 10)
	{
		stradd(&cVar0, "0", 8);
	}
	straddi(&cVar0, iParam3, 8);
	memcpy(&cVar2, Global_29155[iParam010].f_20, 8);
	stradd(&cVar2, "_", 32);
	stradd(&cVar2, cParam2, 32);
	stradd(&cVar2, "*", 32);
	bVar10 = GET_WORLD_SECTOR_CHILD_OBJECT(Global_29155[iParam010].f_32, &cVar2, &cVar0);
	if (!IS_DOOR_VALID(GET_DOOR_FROM_OBJECT(bVar10)))
	{
		return "";
	}
	return GET_DOOR_FROM_OBJECT(bVar10);
}

var Function_215(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5) //Position: 0xBA99 / 47769
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	
	iVar0 = uParam2;
	if (!iVar0 > *uParam0 && iVar0 <= 0)
	{
		return "";
	}
	if (Function_476(uParam0[iVar02], 1))
	{
		return "";
	}
	if (!Function_476(uParam0[iVar02], 2))
	{
		return "";
	}
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (IS_PERS_CHAR_ALIVE(StackVal) || uParam3)
		{
			if (!IS_PERS_CHAR_ALIVE(StackVal))
			{
				REVIVE_PERS_CHAR(StackVal, 1);
			}
			if (!Function_476(uParam0[iVar02], 8))
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], true, false);
				Function_79(uParam0[iVar02], 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
			bVar1 = GET_ACTOR_FROM_PERS_CHAR(StackVal);
		}
	}
	else if (IS_EARLIER_THAN(StackVal, false) || uParam3)
	{
		GET_POSITION(GET_PLAYER_ACTOR(0), &vVar2);
		uParam1[iVar03]->f_8 = Function_217(StackVal, StackVal, StackVal, Global_6289, Function_395(), (*uParam1)[iVar03], vVar2, 0x42700000);
		if (IS_PERS_CHAR_VALID(StackVal))
		{
			if (!Function_476(uParam0[iVar02], 8))
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], true, false);
				Function_79(uParam0[iVar02], 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
			bVar1 = GET_ACTOR_FROM_PERS_CHAR(StackVal);
		}
	}
	if (!IS_ACTOR_VALID(bVar1))
	{
		return "";
	}
	Function_79(uParam0[iVar02], 1);
	Function_216(StackVal, 1);
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

int Function_216(bool bParam0, bool bParam1) //Position: 0xBC2F / 48175
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
			TASK_PRIORITY_SET(bVar0, 1);
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

var Function_217(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, float fParam7) //Position: 0xBCD1 / 48337
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	struct<73> Var5;
	
	if (fParam7 > 1.0f)
	{
		fParam7 = 60.0f;
	}
	bVar3 = CREATE_PERS_CHAR_IN_LAYOUT(uParam0, uParam1, uParam2, vParam4, fParam7);
	if (!IS_PERS_CHAR_VALID(bVar3))
	{
		return "";
	}
	bVar4 = CREATE_GRINGO_ON_OBJECT_BY_ID(GET_OBJECT_FROM_PERS_CHAR(bVar3), "Persistent_Char_Brain", uParam3, vVar0, vVar0);
	if (IS_OBJECT_VALID(bVar4))
	{
		ATTACH_OBJECTS(bVar4, GET_OBJECT_FROM_PERS_CHAR(bVar3), Function_395(), 0.0f, 1.5f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
	}
	else
	{
		DESTROY_PERS_CHAR(bVar3);
		return "";
	}
	*(&Var5 + 36) = { StackVal, StackVal, vParam4 };
	Var5 = { StackVal, StackVal, *(&Var5 + 36) };
	*(&Var5 + 12) = { StackVal, StackVal, *(&Var5 + 36) };
	*(&Var5 + 24) = { StackVal, StackVal, *(&Var5 + 36) };
	*(&Var5 + 48) = { StackVal, StackVal, *(&Var5 + 36) };
	*(&Var5 + 60) = { StackVal, StackVal, *(&Var5 + 36) };
	Var5.f_72 = uParam0;
	GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(bVar4), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &Var5, 20);
	return bVar3;
}

bool Function_218(int iParam0) //Position: 0xBDEA / 48618
{
	if (!Function_136(iParam0))
	{
		return 1;
	}
	return Function_219(&(Global_29008[iParam0]), 4);
}

int Function_219(var uParam0, int iParam1) //Position: 0xBE06 / 48646
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_220(bool bParam0, bool bParam1) //Position: 0xBE22 / 48674
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	
	bVar0 = false;
	bVar1 = 4294967295;
	fVar2 = 1E+14.0f;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam1) - 1))
	{
		if (Function_221(SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0), bParam0) > fVar2)
		{
			fVar2 = Function_221(SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0), bParam0);
			bVar1 = bVar0;
		}
		bVar0++;
	}
	if (bVar1 >= 4294967295)
	{
		return SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar1);
	}
	LOG_WARNING("Couldn't find a closest sqaud member from 'Them' to 'Me' in GET_CLOSEST_SQUAD_MEMBER!");
	return "";
}

float Function_221(bool bParam0, bool bParam1) //Position: 0xBEDF / 48863
{
	var uVar0;
	var uVar3;
	int iVar6;
	
	GET_POSITION(bParam0, &uVar0);
	GET_POSITION(bParam1, &uVar3);
	iVar6 = Function_222(&uVar0, &uVar3);
	return iVar6;
}

var Function_222(var uParam0, int iParam1) //Position: 0xBEFE / 48894
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*iParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

var Function_223(int iParam0) //Position: 0xBF1C / 48924
{
	bool bVar0;
	
	if (!IS_LAYOUTREF_VALID(*iParam0))
	{
		return "";
	}
	bVar0 = CREATE_OBJECT_ITERATOR(*iParam0);
	if (!IS_ITERATOR_VALID(bVar0))
	{
		return "";
	}
	Function_224(&bVar0);
	ITERATE_ON_OBJECT_TYPE(bVar0, 25);
	ITERATE_ON_PARTIAL_NAME(bVar0, "atkSquad");
	iParam0->f_60 = GET_SQUAD_FROM_OBJECT(START_OBJECT_ITERATOR(bVar0));
	if (!SQUAD_IS_VALID(iParam0->f_60))
	{
	}
	if (IS_ITERATOR_VALID(bVar0))
	{
		DESTROY_ITERATOR(bVar0);
	}
	return iParam0->f_60;
}

int Function_224(int iParam0) //Position: 0xBF88 / 49032
{
	if (IS_ITERATOR_VALID(*iParam0))
	{
		ITERATE_EVERYWHERE(*iParam0);
		ITERATE_ON_PARTIAL_NAME(*iParam0, Function_395());
		ITERATE_ON_PARTIAL_MODEL_NAME(*iParam0, Function_395());
		ITERATE_ON_OBJECT_TYPE(*iParam0, 4294967295);
		return 1;
	}
	return 0;
}

bool Function_225(int iParam0) //Position: 0xBFB9 / 49081
{
	if (SQUAD_IS_VALID(iParam0->f_60))
	{
		if (SQUAD_GET_SIZE(iParam0->f_60) >= 0)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_226(int iParam0) //Position: 0xBFD7 / 49111
{
	return Function_381(iParam0->f_780, 0x1000000);
}

int Function_227(int iParam0, bool bParam1) //Position: 0xBFEA / 49130
{
	int iVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3;
	bool bVar6;
	float fVar7;
	var uVar8;
	var uVar9;
	bool bVar10;
	
	iVar0 = 0;
	Function_373(iParam0);
	if (!Function_381(iParam0->f_780, 64))
	{
		return 24;
	}
	if (!IS_LAYOUTREF_VALID(iParam0->f_776))
	{
		return 25;
	}
	if (!IS_ACTOR_VALID(Global_34573))
	{
		return 26;
	}
	switch (Function_348(iParam0))
	{
		case 0x00000002:
			Function_342(iParam0, 2);
			break;
		
		case 0x00000003:
			Function_342(iParam0, 3);
			break;
		
		case 0x00000004:
			Function_342(iParam0, 4);
			break;
		
		case 0x00000001:
			break;
	}
	switch (Function_341(iParam0))
	{
		case 0x00000002:
			if (iVar0 <= 9)
			{
				return 9;
			}
			break;
		
		case 0x00000003:
			if (iVar0 <= 11)
			{
				return 11;
			}
			break;
		
		case 0x00000004:
			if (iVar0 <= 10)
			{
				return 10;
			}
			break;
	}
	if (!Function_381(iParam0->f_780, 128) && !Function_381(iParam0->f_780, 1))
	{
		Function_333(iParam0);
	}
	if (Function_73(iParam0))
	{
		if (Function_332(iParam0))
		{
			Function_329(iParam0);
			Function_65(iParam0, 1);
		}
		if (Function_328(iParam0 + 808, 5.0f))
		{
			Function_321(iParam0);
		}
		if (!Function_381(iParam0->f_780, 32768))
		{
			fVar7 = Function_320(0x3e800000);
			if (fVar7 < 0.0f)
			{
				iParam0->f_944 = (IntToFloat(FLOOR((0.09f * fVar7))) + 5.0f);
				if (Function_381(iParam0->f_780, 512))
				{
					HUD_TIMER_COUNTDOWN(iParam0->f_944);
					HUD_TIMER_DISPLAY(1);
					Function_472(iParam0 + 796);
				}
				if (Function_318(iParam0) == 3)
				{
					Function_317(iParam0);
				}
				Function_380(iParam0 + 780, 32768);
			}
		}
		if (Function_316(iParam0 + 796, iParam0->f_944))
		{
			if (iVar0 <= 17)
			{
				HUD_TIMER_DISPLAY(0);
				iVar0 = 17;
			}
		}
		if (Function_318(iParam0) == 3)
		{
			if (!Function_381(iParam0->f_780, 0x20000000))
			{
				if (Function_315(iParam0))
				{
				}
			}
			else if (VDIST(Global_34574, *(iParam0 + 924)) > 100.0f && !Function_381(iParam0->f_780, 0x40000000))
			{
				Function_314(iParam0);
			}
		}
	}
	iVar1 = Function_305(iParam0);
	if (iVar0 <= iVar1)
	{
		iVar0 = iVar1;
	}
	if (Function_381(iParam0->f_780, 8))
	{
		if (!IS_ACTOR_VALID(iParam0->f_952) || IS_ACTOR_DEAD(iParam0->f_952))
		{
			if (iVar0 <= 23)
			{
				iVar0 = 23;
			}
		}
		else
		{
			iVar1 = Function_304(iParam0);
			if (iVar0 <= iVar1)
			{
				iVar0 = iVar1;
			}
		}
	}
	if (Function_381(iParam0->f_780, 16))
	{
		if (!IS_ACTOR_VALID(iParam0->f_960) || IS_ACTOR_DEAD(iParam0->f_960))
		{
			if (iVar0 <= 22)
			{
				iVar0 = 22;
			}
		}
		else
		{
			iVar1 = Function_302(iParam0);
			if (iVar0 <= iVar1)
			{
				iVar0 = iVar1;
			}
		}
	}
	if (IS_OBJECTSET_VALID(iParam0->f_968))
	{
		bVar6 = false;
		while (bVar6 < (GET_OBJECTSET_SIZE(iParam0->f_968) - 1))
		{
			bVar2 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar6, iParam0->f_968));
			if (!IS_ACTOR_VALID(bVar2) || !IS_ACTOR_ALIVE(bVar2))
			{
				Function_380(iParam0 + 780, 0x8000000);
				Function_301(bVar2);
				Function_64(iParam0);
				if (iVar0 <= 21)
				{
					iVar0 = 21;
				}
			}
			else if (Function_298(bVar2, &uVar9, &uVar8, 0, 0, 0x40400000))
			{
				if (iVar0 <= 20)
				{
					iVar0 = 20;
				}
			}
			bVar6++;
		}
		DESTROY_OBJECTSET(iParam0->f_968);
	}
	if (Function_136(iParam0->f_916))
	{
		if (!Function_381(iParam0->f_780, 65536))
		{
			if (IS_ACTOR_IN_VOLUME(StackVal, iParam0->f_860))
			{
				Function_493(iParam0, 0);
				Function_375(iParam0);
				Function_380(iParam0 + 780, 65536);
			}
		}
	}
	if (IS_VOLUME_VALID(iParam0->f_920))
	{
		if (IS_OBJECT_VALID(iParam0->f_940))
		{
			bVar10 = false;
			if (Function_381(iParam0->f_780, 4))
			{
				bVar10 = GATEWAY_UPDATE(iParam0->f_940);
			}
			else
			{
				bVar10 = Function_396(iParam0->f_940, 0, 1, 0, 0, 0);
			}
			if (bVar10 == 1)
			{
				if (Function_318(iParam0) == 3)
				{
					Function_59(iParam0);
				}
				if (iVar0 <= 8)
				{
					if (bParam1)
					{
						AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
					}
					iVar0 = 8;
				}
			}
			else if (VDIST(Global_34574, *(iParam0 + 924)) > (iParam0->f_948 + 175.0f))
			{
				Function_472(iParam0 + 844);
				iParam0->f_856 = 0;
			}
			else if (Function_316(iParam0 + 844, 7.0f))
			{
				if (iParam0->f_856 > 2)
				{
					Function_342(iParam0, 3);
					return 13;
				}
				Function_297(iParam0, 1);
				Function_296(iParam0, "pm_esc_wdir", 1);
				Function_472(iParam0 + 844);
				iParam0->f_856++;
			}
		}
	}
	if (Function_295(iParam0) && IS_ACTOR_VALID(iParam0->f_860))
	{
		GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(iParam0->f_952), &vVar3);
		Function_294(StackVal, StackVal, iParam0, vVar3);
	}
	if (Function_381(iParam0->f_780, 256))
	{
		iVar1 = Function_241(iParam0, bParam1);
		if (iVar0 <= iVar1)
		{
			iVar0 = iVar1;
		}
	}
	if (iVar0 > 10)
	{
		if (Function_381(iParam0->f_780, 512))
		{
			HUD_TIMER_DISPLAY(0);
		}
		if (Function_318(iParam0) == 3)
		{
			Function_59(iParam0);
		}
	}
	if (Function_73(iParam0))
	{
		Function_233(iParam0, 0, 1);
	}
	else
	{
		Function_228(StackVal, StackVal, iParam0, Global_34574, 1, 0x41c80000, 0x42c80000);
	}
	return iVar0;
}

var Function_228(bool bParam0, vector3 vParam1, int iParam4, float fParam5, float fParam6) //Position: 0xC4DC / 50396
{
	vector3 vVar0;
	
	Function_232(bParam0);
	Function_229(bParam0);
	Function_233(bParam0, iParam4, 0);
	if (IS_OBJECT_VALID(*bParam0))
	{
		Function_482(*bParam0);
		vVar0 = { StackVal, StackVal, Function_482(*bParam0) };
		if (!IS_BLIP_VALID(bParam0->f_36))
		{
			if (WOULD_ACTOR_BE_VISIBLE(false, &vVar0, 3212836864) || VDIST(vParam1, *(bParam0 + 4)) > fParam5)
			{
				bParam0->f_32 = 1;
			}
		}
	}
	if (VDIST(vParam1, *(bParam0 + 4)) < fParam6)
	{
		bParam0->f_32 = 0;
	}
	else if ((!IS_BLIP_VALID(bParam0->f_36) && bParam0->f_32 != 0) && IS_OBJECT_VALID(*bParam0))
	{
		bParam0->f_36 = ADD_BLIP_FOR_OBJECT(*bParam0, bParam0->f_40, 0f, 2, 0);
	}
	if (!Function_381(bParam0->f_584, 4096))
	{
		if (!bParam0->f_40 != 4294967295)
		{
			if ((!IS_BLIP_VALID(bParam0->f_36) && bParam0->f_32 != 1) && IS_OBJECT_VALID(*bParam0))
			{
				bParam0->f_36 = ADD_BLIP_FOR_OBJECT(*bParam0, bParam0->f_40, 0f, 2, 0);
				SET_BLIP_BLINK(bParam0->f_36, 1, 0, 5f);
			}
		}
		if (bParam0->f_32 != 0 && IS_BLIP_VALID(bParam0->f_36))
		{
			REMOVE_BLIP(bParam0->f_36);
		}
	}
	if (bParam0->f_32 != 1 && SQUAD_IS_VALID(bParam0->f_568))
	{
		Function_7(bParam0, 1);
	}
	return bParam0->f_32;
}

void Function_229(int iParam0) //Position: 0xC602 / 50690
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	vector3 vVar9;
	bool bVar12;
	bool bVar13;
	
	if (SQUAD_IS_VALID(iParam0->f_568) && Function_316(iParam0 + 572, 7.0f))
	{
		Function_231(iParam0);
		vVar0 = { StackVal, StackVal, Function_231(iParam0) };
		if (Function_45(StackVal, StackVal, vVar0))
		{
			bVar13 = false;
			while (bVar13 < (SQUAD_GET_SIZE(iParam0->f_568) - 1))
			{
				bVar12 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_568, bVar13);
				vVar9 = { 0.0f, 0.0f, RAND_FLOAT_RANGE(3.0f, 6.0f) };
				ROTATE_VECTOR_XZ(&vVar9, RAND_FLOAT_RANGE(0.0f, 360.0f), 0);
				vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar0, StackVal) };
				FIND_GROUND_INTERSECTION(&vVar3, 100.0f, &vVar3, &uVar6);
				TASK_BIRD_LAND_AT_COORD(bVar12, &vVar3);
				bVar13++;
			}
			Function_230(iParam0->f_568, 1);
			Function_472(iParam0 + 572);
		}
		else
		{
			Function_7(iParam0, 1);
		}
	}
	return;
}

void Function_230(bool bParam0, int iParam1) //Position: 0xC6AE / 50862
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			TASK_PRIORITY_SET(bVar1, iParam1);
		}
		bVar0++;
	}
	return;
}

vector3 Function_231(int iParam0) //Position: 0xC6E9 / 50921
{
	return StackVal, StackVal, *(iParam0 + 4);
}

void Function_232(int iParam0) //Position: 0xC6F5 / 50933
{
	if (GET_DEBUG_DRAW_STATE())
	{
	}
	return;
}

void Function_233(bool bParam0, int iParam1, int iParam2) //Position: 0xC701 / 50945
{
	if (iParam2 == 1)
	{
		if (Function_240(bParam0, iParam1, iParam2))
		{
			Function_239(bParam0);
		}
		else if (Function_238(bParam0, iParam1))
		{
			Function_236(bParam0);
		}
		if (Function_235(bParam0, iParam1, iParam2))
		{
			Function_234(bParam0);
		}
	}
	else if (Function_240(bParam0, iParam1, 0))
	{
		Function_239(bParam0);
	}
	else if (Function_235(bParam0, iParam1, 0))
	{
		Function_234(bParam0);
	}
	else if (Function_238(bParam0, iParam1))
	{
		Function_236(bParam0);
	}
	return;
}

void Function_234(int iParam0) //Position: 0xC77B / 51067
{
	char* cVar0[32];
	
	if (iParam0->f_480 <= iParam0->f_336)
	{
		strcpy(&cVar0, "Print Help: ", 32);
		stradd(&cVar0, iParam0 + 336[iParam0->f_4804], 32);
		if ((*iParam0 + 388)[iParam0->f_480] == 1)
		{
			PRINT_HELP_FORMAT(10.0f, iParam0 + 336[iParam0->f_4804], iParam0 + 404[iParam0->f_4806], "", "", "", 2, 0, 0);
		}
		else
		{
			Function_512(iParam0 + 336[iParam0->f_4804], 0x41200000, 1, 0, 2, 1, 0);
		}
		iParam0->f_480++;
	}
	return;
}

bool Function_235(int iParam0, int iParam1, int iParam2) //Position: 0xC815 / 51221
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	iVar0 = 0;
	bVar2 = VDIST(Global_34574, *(iParam0 + 4));
	bVar3 = VDIST(Global_34574, *(iParam0 + 16));
	if (bVar2 >= bVar3)
	{
		bVar1 = bVar2;
	}
	else
	{
		bVar1 = bVar3;
	}
	if (Global_63096 != 1 || Global_3394 != 1)
	{
		iVar0 = 0;
	}
	else if (iParam1 != 1 && bVar1 < 25.0f)
	{
		iVar0 = 0;
	}
	else if (Function_160() && iParam2 != 0)
	{
		iVar0 = 0;
	}
	else if (!iParam0->f_480 <= iParam0->f_404)
	{
		if (STRING_LENGTH(iParam0 + 336[iParam0->f_4804]) >= 0)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

var Function_236(bool bParam0) //Position: 0xC8B3 / 51379
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	if (!Function_381(bParam0->f_584, 8) && bParam0->f_328 > 3)
	{
		if (VDIST(Global_34574, *(bParam0 + 4)) < VDIST(Global_34574, *(bParam0 + 16)) && IS_STRING_VALID(bParam0 + 276[bParam0->f_3284]))
		{
			iVar1 = 1;
		}
		if (iVar1 == 1)
		{
			if (IS_STRING_VALID(bParam0 + 276[bParam0->f_3284]))
			{
				Function_237(bParam0 + 276[bParam0->f_3284], 3.0f, 0, 2, 1, 0);
				bParam0->f_328++;
				Function_472(bParam0 + 44);
				bVar0 = true;
			}
		}
		else if (IS_STRING_VALID(bParam0 + 220[bParam0->f_2724]))
		{
			Function_237(bParam0 + 220[bParam0->f_2724], 3.0f, 0, 2, 1, 0);
			bParam0->f_272++;
			bParam0->f_272 = (bParam0->f_272 % 3);
			Function_472(bParam0 + 44);
			bVar0 = true;
		}
	}
	return bVar0;
}

void Function_237(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0xC998 / 51608
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_13(Global_6269) };
		}
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, &Var0, iParam5);
	}
	else
	{
		iVar4 = "";
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, iVar4, iParam5);
	}
}

bool Function_238(int iParam0, int iParam1) //Position: 0xCA0F / 51727
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (VDIST(Global_34574, *(iParam0 + 4)) >= VDIST(Global_34574, *(iParam0 + 16)))
	{
		bVar1 = VDIST(Global_34574, *(iParam0 + 4));
	}
	else
	{
		bVar1 = VDIST(Global_34574, *(iParam0 + 16));
	}
	if (Global_63096 == 1)
	{
		iVar0 = 0;
	}
	else if (iParam1 != 1 && bVar1 < 25.0f)
	{
		iVar0 = 0;
	}
	else if (!IS_STRING_VALID(iParam0 + 220[04]))
	{
		iVar0 = 0;
	}
	else if (Function_160())
	{
		iVar0 = 0;
	}
	else if (Function_316(iParam0 + 44, 8.0f))
	{
		iVar0 = 1;
	}
	return iVar0;
}

void Function_239(int iParam0) //Position: 0xCAB2 / 51890
{
	char* cVar0[32];
	
	if (iParam0->f_108 <= iParam0->f_56)
	{
		strcpy(&cVar0, "Print Obj: ", 32);
		stradd(&cVar0, iParam0 + 56[iParam0->f_1084], 32);
		if ((*iParam0 + 112)[iParam0->f_108] == 1)
		{
			PRINT_OBJECTIVE_FORMAT(7.5f, iParam0 + 56[iParam0->f_1084], iParam0 + 144[iParam0->f_1086], "", "", "", "", 0, (*iParam0 + 128)[iParam0->f_108], 0, 0);
		}
		else
		{
			Function_509(iParam0 + 56[iParam0->f_1084], 8.5f, (*iParam0 + 128)[iParam0->f_108], 2, 0, 0, 0, 0);
		}
		iParam0->f_108++;
	}
	return;
}

bool Function_240(int iParam0, int iParam1, int iParam2) //Position: 0xCB54 / 52052
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (VDIST(Global_34574, *(iParam0 + 4)) >= VDIST(Global_34574, *(iParam0 + 16)))
	{
		bVar1 = VDIST(Global_34574, *(iParam0 + 4));
	}
	else
	{
		bVar1 = VDIST(Global_34574, *(iParam0 + 16));
	}
	if (Global_63096 == 1)
	{
		iVar0 = 0;
	}
	else if (iParam1 != 1 && bVar1 < 25.0f)
	{
		iVar0 = 0;
	}
	else if (!IS_STRING_VALID(iParam0 + 56[04]))
	{
		iVar0 = 0;
	}
	else if (Function_160() && iParam2 != 0)
	{
		iVar0 = 0;
	}
	else if (!iParam0->f_108 <= iParam0->f_56)
	{
		if (STRING_LENGTH(iParam0 + 56[iParam0->f_1084]) >= 0)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

int Function_241(int iParam0, bool bParam1) //Position: 0xCC0B / 52235
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!Function_381(iParam0->f_780, 0x1000000) && IS_SCRIPT_VALID(iParam0->f_1000))
	{
		Function_293(iParam0 + 1004);
		if (SQUAD_IS_VALID((iParam0 + 1004)->f_60))
		{
			Function_291(iParam0, GET_ACTOR_FACTION(Function_292((iParam0 + 1004)->f_60)));
			if (bParam1)
			{
				AUDIO_MUSIC_SET_MOOD("GUNFIGHT", 0, 4294967295, 4294967295);
			}
			Function_380(iParam0 + 780, 0x1000000);
		}
	}
	else if (Function_381(iParam0->f_780, 0x1000000) && !IS_SCRIPT_VALID(iParam0->f_1000))
	{
		if (!Function_381(iParam0->f_780, 262144) || iParam0->f_1296 < 0)
		{
			Function_472(iParam0 + 1256);
			Function_290(iParam0);
			Function_288(iParam0);
			Function_270(iParam0);
			Function_60(iParam0 + 780, 0x1000000);
			Function_60(iParam0 + 780, 131072);
		}
		if (bParam1)
		{
			AUDIO_MUSIC_SET_MOOD("DRAMATIC_LOW", 0, 4294967295, 4294967295);
		}
		Function_60(iParam0 + 780, 0x1000000);
	}
	if (Function_381(iParam0->f_780, 1048576))
	{
		if (!Function_381(iParam0->f_780, 2097152))
		{
			Function_472(iParam0 + 1256);
			Function_290(iParam0);
			Function_288(iParam0);
			Function_270(iParam0);
			Function_380(iParam0 + 780, 2097152);
		}
		if (Global_29007 != 3 || Global_29007 != 4)
		{
			if (Function_381(iParam0->f_780, 0x1000000))
			{
				Function_375(iParam0);
				iParam0->f_1296++;
			}
			Function_60(iParam0 + 780, 1048576);
		}
	}
	else if (!(Global_29007 != 3 || Global_29007 != 4))
	{
		Function_380(iParam0 + 780, 1048576);
	}
	if ((((Function_316(iParam0 + 1256, iParam0->f_1268) && Function_381(iParam0->f_780, 1048576)) && !Function_381(iParam0->f_780, 0x1000000)) && !IS_SCRIPT_VALID(iParam0->f_1000)) && iParam0->f_1296 < 0)
	{
		if (Function_268(StackVal, StackVal, Global_34573, *(iParam0 + 888)) < 150.0f || Function_381(iParam0->f_780, 8388608))
		{
			Function_266(iParam0);
			if (Function_254(iParam0 + 1004))
			{
				if (!Function_381(iParam0->f_780, 131072))
				{
					if (Function_381(iParam0->f_780, 2048))
					{
						Function_253(iParam0 + 1004, 1);
						iVar1 = 0;
						while (iVar1 < 5)
						{
							if (Function_252((*iParam0 + 1228)[iVar1]) && !(*iParam0 + 1228)[iVar1] != 0)
							{
								Function_248(iParam0 + 1004, (*iParam0 + 1228)[iVar1]);
							}
							iVar1++;
						}
					}
					else
					{
						Function_245(iParam0 + 1004, 8);
					}
					Function_380(iParam0 + 780, 131072);
				}
				iParam0->f_1000 = Function_243(iParam0 + 1004);
				if (IS_SCRIPT_VALID(iParam0->f_1000))
				{
					if (iVar0 <= 2)
					{
						if (Function_381(iParam0->f_780, 262144))
						{
							iParam0->f_1296 = (iParam0->f_1296 - 1);
							if (iParam0->f_1296 < 0)
							{
								Function_242(iParam0 + 1256);
							}
						}
						iVar0 = 2;
					}
				}
				else
				{
					LOG_ERROR("Invalid transport attack script");
				}
			}
			else
			{
				iParam0->f_1268 = (iParam0->f_1268 + 1.0f);
			}
		}
	}
	return iVar0;
}

void Function_242(int iParam0) //Position: 0xCF1A / 53018
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

var Function_243(int iParam0) //Position: 0xCF2E / 53038
{
	int iVar0;
	
	if (!iParam0->f_172 != 1)
	{
		LOG_ERROR("Call CREATEATTACK_INIT before launching");
		return "";
	}
	Function_244(iParam0);
	iVar0 = LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/scripting/DesignerDefined/createAttack", iParam0, 56, 0);
	return iVar0;
}

void Function_244(int iParam0) //Position: 0xCFB2 / 53170
{
	int iVar0;
	int iVar1;
	
	if (Function_381(iParam0->f_92, 64))
	{
		iVar1 = 0;
		while (iVar1 <= iParam0->f_100)
		{
			if (!(*iParam0 + 100)[iVar1] != 0 && Function_252((*iParam0 + 100)[iVar1]))
			{
				iVar0++;
			}
			iVar1++;
		}
		iParam0->f_128 = iVar0;
	}
	else
	{
		iParam0->f_128 = iParam0->f_100;
	}
	return;
}

int Function_245(int iParam0, int iParam1) //Position: 0xD00A / 53258
{
	bool bVar0;
	bool bVar1;
	
	if (iParam0->f_172 == 0)
	{
		LOG_ERROR("CREATEATTACK_ADD_POPSET_TYPE - Call *after* CREATEATTACK_INIT and before CREATEATTACK_LAUNCH");
		return 0;
	}
	bVar1 = false;
	bVar0 = Function_246(iParam1, bVar1);
	while (bVar0 == 0 && Function_252(bVar0))
	{
		bVar1++;
		bVar0 = Function_246(iParam1, bVar1);
		Function_248(iParam0, bVar0);
	}
	PRINTSTRING("Number of actorenums: ");
	PRINTINT(bVar1);
	PRINTNL();
	return 1;
}

bool Function_246(int iParam0, bool bParam1) //Position: 0xD0D4 / 53460
{
	switch (iParam0)
	{
		case 0x00000001:
			return Function_247(Global_30750[0], bParam1);
			break;
		
		case 0x00000002:
			return Function_247(Global_30750[1], bParam1);
			break;
		
		case 0x00000004:
			return Function_247(Global_30750[2], bParam1);
			break;
		
		case 0x00000008:
			return Function_247(Global_30750[3], bParam1);
			break;
		
		case 0x00000010:
			return Function_247(Global_30750[4], bParam1);
			break;
		
		case 0x00000020:
			return Function_247(Global_30750[5], bParam1);
			break;
		
		case 0x00000040:
			return Function_247(Global_30750[6], bParam1);
			break;
		
		case 0x00000080:
			return Function_247(Global_30750[7], bParam1);
			break;
		
		case 0x00000100:
			return Function_247(Global_30750[8], bParam1);
			break;
		
		case 0x00000200:
			return Function_247(Global_30750[9], bParam1);
			break;
		
		case 0x00000400:
			return Function_247(Global_30750[10], bParam1);
			break;
		
		case 0x00000800:
			return Function_247(Global_30750[11], bParam1);
			break;
		
		case 0x00001000:
			return Function_247(Global_30750[12], bParam1);
			break;
		
		case 0x00002000:
			return Function_247(Global_30750[13], bParam1);
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return 4294967295;
}

int Function_247(bool bParam0, bool bParam1) //Position: 0xD253 / 53843
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!IS_POPSET_VALID(bParam0))
	{
		LOG_ERROR("Trying to get an indexed member of an invalid popset");
		return 4294967295;
	}
	iVar2 = GET_NUM_ACTORENUMS_IN_POPULATION(bParam0);
	if (bParam1 > iVar2 && bParam1 <= 0)
	{
		bVar1 = GET_ACTORENUM_IN_POPULATION(bParam0, bParam1);
	}
	else
	{
		return 4294967295;
	}
	if (!Function_252(bVar1))
	{
		LOG_ERROR("Did an index on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	return bVar0;
}

int Function_248(int iParam0, bool bParam1) //Position: 0xD300 / 54016
{
	int iVar0;
	
	if (iParam0->f_172 == 0)
	{
		LOG_ERROR("CREATEATTACK_ADD_ACTORENUM - Call *after* CREATEATTACK_INIT and before CREATEATTACK_LAUNCH");
		return 0;
	}
	if (!Function_252(bParam1) || bParam1 != 0)
	{
		return 0;
	}
	Function_250(iParam0, 0);
	iVar0 = 0;
	while (iVar0 <= iParam0->f_100)
	{
		if ((*iParam0 + 100)[iVar0] != 0 || !Function_252((*iParam0 + 100)[iVar0]))
		{
			(*iParam0 + 100)[iVar0] = bParam1;
			iVar0 = iParam0->f_100;
		}
		iVar0++;
	}
	Function_249(iParam0, 0);
	return 1;
}

int Function_249(int iParam0, bool bParam1) //Position: 0xD3CE / 54222
{
	bool bVar0;
	char* cVar1[16];
	char* cVar5[16];
	
	if (IS_LAYOUTREF_VALID(*iParam0))
	{
		if (bParam1 == "")
		{
			bParam1 = Function_29(iParam0);
		}
		if (IS_OBJECT_VALID(bParam1))
		{
			DECOR_SET_BOOL(bParam1, "catk_bdi", iParam0->f_172);
			DECOR_SET_FLOAT(bParam1, "catk_spx", iParam0->f_184);
			DECOR_SET_FLOAT(StackVal, bParam1, "catk_spy");
			DECOR_SET_FLOAT(StackVal, bParam1, "catk_spz");
			DECOR_SET_FLOAT(bParam1, "catk_scx", iParam0->f_196);
			DECOR_SET_FLOAT(StackVal, bParam1, "catk_scy");
			DECOR_SET_FLOAT(StackVal, bParam1, "catk_scz");
			DECOR_SET_BOOL(bParam1, "catk_krd", iParam0->f_176);
			DECOR_SET_BOOL(bParam1, "catk_krt", iParam0->f_180);
			DECOR_SET_OBJECT(bParam1, "catk_atv", iParam0->f_208);
			DECOR_SET_INT(bParam1, "catk_ats", iParam0->f_212);
			DECOR_SET_BOOL(bParam1, "catk_bus", iParam0->f_216);
			DECOR_SET_OBJECT(bParam1, "catk_asq", GET_OBJECT_FROM_SQUAD(iParam0->f_60));
			DECOR_SET_INT(bParam1, "catk_wtm", iParam0->f_220);
			DECOR_SET_BOOL(bParam1, "catk_ovr", iParam0->f_160);
			bVar0 = false;
			while (bVar0 <= iParam0->f_100)
			{
				if (Function_252((*iParam0 + 100)[bVar0]) && !(*iParam0 + 100)[bVar0] != 0)
				{
					strcpy(&cVar1, INT_TO_STRING(bVar0), 16);
					strcpy(&cVar5, "catk_ae", 16);
					stradd(&cVar5, &cVar1, 16);
					DECOR_SET_INT(bParam1, &cVar5, (*iParam0 + 100)[bVar0]);
				}
				bVar0++;
			}
		}
		else
		{
			LOG_ERROR("CREATEATTACK_SyncWrite - invalid data object found");
		}
	}
	else
	{
		LOG_ERROR("CREATEATTACK_SyncWrite - invalid write attempted");
	}
	return 1;
}

int Function_250(int iParam0, bool bParam1) //Position: 0xD60A / 54794
{
	bool bVar0;
	char* cVar1[16];
	char* cVar5[16];
	
	Function_251(iParam0);
	if (IS_LAYOUTREF_VALID(*iParam0))
	{
		if (bParam1 == "")
		{
			bParam1 = Function_29(iParam0);
		}
		if (IS_OBJECT_VALID(bParam1))
		{
			iParam0->f_172 = DECOR_GET_BOOL(bParam1, "catk_bdi");
			iParam0->f_184 = DECOR_GET_FLOAT(bParam1, "catk_spx");
			(iParam0 + 184)->f_4 = DECOR_GET_FLOAT(bParam1, "catk_spy");
			(iParam0 + 184)->f_8 = DECOR_GET_FLOAT(bParam1, "catk_spz");
			iParam0->f_196 = DECOR_GET_FLOAT(bParam1, "catk_scx");
			(iParam0 + 196)->f_4 = DECOR_GET_FLOAT(bParam1, "catk_scy");
			(iParam0 + 196)->f_8 = DECOR_GET_FLOAT(bParam1, "catk_scz");
			iParam0->f_176 = DECOR_GET_BOOL(bParam1, "catk_krd");
			iParam0->f_180 = DECOR_GET_BOOL(bParam1, "catk_krt");
			iParam0->f_208 = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(bParam1, "catk_atv"));
			iParam0->f_212 = DECOR_GET_INT(bParam1, "catk_ats");
			iParam0->f_216 = DECOR_GET_BOOL(bParam1, "catk_bus");
			iParam0->f_60 = GET_SQUAD_FROM_OBJECT(DECOR_GET_OBJECT(bParam1, "catk_asq"));
			iParam0->f_220 = DECOR_GET_INT(bParam1, "catk_wtm");
			iParam0->f_160 = DECOR_GET_BOOL(bParam1, "catk_ovr");
			bVar0 = false;
			while (bVar0 <= iParam0->f_100)
			{
				if (Function_252((*iParam0 + 100)[bVar0]) && !(*iParam0 + 100)[bVar0] != 0)
				{
					strcpy(&cVar1, INT_TO_STRING(bVar0), 16);
					strcpy(&cVar5, "catk_ae", 16);
					stradd(&cVar5, &cVar1, 16);
					(*iParam0 + 100)[bVar0] = DECOR_GET_INT(bParam1, &cVar5);
				}
				bVar0++;
			}
		}
		else
		{
			LOG_ERROR("CREATEATTACK_SyncRead - invalid data object found");
		}
	}
	else
	{
		LOG_ERROR("CREATEATTACK_SyncRead - invalid read attempted");
	}
	return 1;
}

void Function_251(int iParam0) //Position: 0xD83B / 55355
{
	struct<4> Var0;
	
	if (!IS_LAYOUTREF_VALID(*iParam0))
	{
		strcpy(&Var0, "catkslay", 16);
		memcpy(&Var0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_502(&Var0), 4);
		*iParam0 = CREATE_LAYOUT(&Var0);
		if (!IS_LAYOUTREF_VALID(*iParam0))
		{
			LOG_ERROR("couldn't create library createattack layout");
		}
	}
	return;
}

bool Function_252(bool bParam0) //Position: 0xD8A8 / 55464
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_253(int iParam0, bool bParam1) //Position: 0xD8BF / 55487
{
	if (bParam1)
	{
		Function_380(iParam0 + 92, 64);
	}
	else
	{
		Function_60(iParam0 + 92, 64);
	}
	return;
}

bool Function_254(int iParam0) //Position: 0xD8DF / 55519
{
	int iVar0;
	vector3 vVar1;
	struct<15> Var4;
	struct<11> Var19;
	
	Function_251(iParam0);
	if (iParam0->f_212 == 0)
	{
		iParam0->f_212 = 3;
		DECOR_SET_BOOL(*iParam0, "catk_bus", iParam0->f_216);
	}
	if (Function_45(StackVal, StackVal, *(iParam0 + 184)))
	{
		if (Function_45(StackVal, StackVal, *(iParam0 + 196)))
		{
			if (IS_ACTOR_VALID(GET_PLAYER_ACTOR(0)))
			{
				Function_265(StackVal, StackVal, iParam0, Global_34574);
			}
			else
			{
				return 0;
			}
		}
		Function_265(StackVal, StackVal, iParam0, *(iParam0 + 196));
		if (iParam0->f_24 > 0.5f)
		{
			iParam0->f_24 = 0.5f;
		}
		if ((iParam0->f_28 - iParam0->f_24) > 6.0f)
		{
			iParam0->f_28 = (iParam0->f_24 + 6.0f);
		}
		if (iParam0->f_32 >= 0.0f)
		{
			iParam0->f_32 = 15.0f;
		}
		Function_264(&Var4, 4294967295, 5.0f, 1, 4294967295);
		Function_263(StackVal, StackVal, &Var19, 0, *(iParam0 + 196), 0.0f, iParam0->f_24, iParam0->f_28, iParam0->f_32, 0x40a00000, 0);
		iVar0 = 0;
		while (iVar0 < 9)
		{
			Function_256(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var19, Var4, 1);
			vVar1 = { StackVal, StackVal, Function_256(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var19, Var4, 1) };
			if (!Function_45(StackVal, StackVal, vVar1))
			{
				iVar0 = 10;
			}
			iVar0++;
		}
		if (Function_45(StackVal, StackVal, vVar1))
		{
			*(iParam0 + 184) = { StackVal, StackVal, *(iParam0 + 196) };
			return 0;
		}
		*(iParam0 + 184) = { StackVal, StackVal, vVar1 };
	}
	Function_244(iParam0);
	iParam0->f_172 = 1;
	if (!Function_255(iParam0))
	{
		LOG_ERROR("CREATEATTACK_INIT could not create data object");
	}
	Function_249(iParam0, 0);
	return 1;
}

bool Function_255(int iParam0) //Position: 0xDA5E / 55902
{
	var uVar0;
	
	if (!IS_OBJECT_VALID(*iParam0))
	{
		LOG_ERROR("CREATEATTACK_CreateDataObject - Invalid layout");
		return 0;
	}
	if (!IS_OBJECT_VALID(StackVal))
	{
		memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_502("ncatk_dobj"), 4);
		iParam0->f_4 = CREATE_POINT_IN_LAYOUT(*iParam0, &uVar0, *(iParam0 + 184), 0.0f, 0.0f, 0.0f);
		if (!IS_OBJECT_VALID(StackVal))
		{
			LOG_ERROR("CREATEATTACK_CreateDataObject - Could not create data object");
			return 0;
		}
	}
	if (!IS_ITERATOR_VALID(StackVal))
	{
		iParam0->f_8 = CREATE_OBJECT_ITERATOR(*iParam0);
	}
	if (!IS_ITERATOR_VALID(StackVal))
	{
		LOG_ERROR("CREATEATTACK_CreateDataObject - Could not create data iterator");
		return 0;
	}
	ITERATE_ON_OBJECT_TYPE(StackVal, 8);
	ITERATE_ON_PARTIAL_NAME(StackVal, "ncatk_dobj");
	PRINTSTRING("data obj =  ");
	PRINTSTRING(GET_OBJECT_NAME(START_OBJECT_ITERATOR(StackVal)));
	PRINTNL();
	return 1;
}

vector3 Function_256(struct<41> Param0) //Position: 0xDBCD / 56269
{
	vector3 vVar0;
	
	if (bParam26)
	{
		AMBIENT_RESET_FILTER(0);
	}
	if (IS_OBJECT_VALID(Param0))
	{
		GET_OBJECT_POSITION(Param0, &vVar0);
		if (Global_30842[34])
		{
			PRINTVECTOR(vVar0);
			PRINTNL();
		}
		AMBIENT_SET_SEARCH_CENTER_ACTOR(GET_ACTOR_FROM_OBJECT(Param0));
	}
	else if (!Function_45(StackVal, StackVal, *(&Param0 + 4)))
	{
		if (Global_30842[34])
		{
			PRINTVECTOR(*(&Param0 + 4));
			PRINTNL();
		}
		GET_OBJECT_POSITION(GET_PLAYER_ACTOR(0), &vVar0);
		if (Global_30842[34])
		{
			PRINTVECTOR(vVar0);
			PRINTNL();
		}
		AMBIENT_SET_SEARCH_CENTER(*(&Param0 + 4));
	}
	else
	{
		GET_OBJECT_POSITION(GET_PLAYER_ACTOR(0), &vVar0);
		if (Global_30842[34])
		{
			PRINTVECTOR(vVar0);
			PRINTNL();
		}
		AMBIENT_SET_SEARCH_CENTER_PLAYER();
	}
	Function_262(Param0.f_36);
	if (Param0.f_24 > 1.0f && Param0.f_28 > 1.0f)
	{
		Function_260();
	}
	else
	{
		AMBIENT_SET_DISTANCE_FILTER(Param0.f_24, Param0.f_28);
	}
	Function_259(Param0.f_20);
	Function_258(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param11);
	Function_257(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param11);
	if (Param11.f_28 == 0.0f)
	{
		Param0.f_40 = Param11.f_28;
	}
	if (Param0.f_40 == 0.0f)
	{
		UNK_0x0AC99007(Param0.f_40, (-1.0f * Param0.f_40));
		UNK_0x30C67D05(1);
	}
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	if (AMBIENT_GET_POINT(&vVar0, 0))
	{
		return StackVal, StackVal, vVar0;
	}
	Function_128();
	return StackVal, StackVal, Function_128();
}

void Function_257(struct<33> Param0) //Position: 0xDCFC / 56572
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

void Function_258(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14) //Position: 0xDE28 / 56872
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

void Function_259(bool bParam0) //Position: 0xDE79 / 56953
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

void Function_260() //Position: 0xDF2C / 57132
{
	float fVar0;
	bool bVar1;
	
	Function_261(&fVar0, &bVar1);
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	return;
}

void Function_261(var uParam0, int iParam1) //Position: 0xDF40 / 57152
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

void Function_262(bool bParam0) //Position: 0xDFC9 / 57289
{
	if (bParam0 < 0.1f)
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * bParam0), bParam0);
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

void Function_263(int iParam0, int iParam1, vector3 vParam2, float fParam5, var uParam6, var uParam7, var uParam8, int iParam9, int iParam10) //Position: 0xE00D / 57357
{
	iParam0->f_20 = iParam1;
	*(iParam0 + 4) = { StackVal, StackVal, vParam2 };
	iParam0->f_16 = fParam5;
	iParam0->f_24 = uParam6;
	iParam0->f_28 = uParam7;
	iParam0->f_32 = iParam10;
	iParam0->f_36 = uParam8;
	iParam0->f_40 = iParam9;
}

void Function_264(var uParam0, int iParam1, float fParam2, int iParam3, int iParam4) //Position: 0xE049 / 57417
{
	*uParam0 = iParam1;
	uParam0->f_4 = fParam2;
	uParam0->f_8 = iParam3;
	uParam0->f_16 = iParam4;
	uParam0->f_20 = 0.0f;
	uParam0->f_12 = 4294967295;
}

int Function_265(int iParam0, vector3 vParam1) //Position: 0xE072 / 57458
{
	bool bVar0;
	
	bVar0 = Function_29(iParam0);
	if (Function_45(StackVal, StackVal, vParam1))
	{
		return 0;
	}
	if (iParam0->f_172 != 1 && IS_OBJECT_VALID(bVar0))
	{
		Function_250(iParam0, bVar0);
	}
	*(iParam0 + 196) = { StackVal, StackVal, vParam1 };
	*(iParam0 + 184) = { 0.0f, 0.0f, 0.0f };
	if (iParam0->f_172 != 1 && IS_OBJECT_VALID(bVar0))
	{
		Function_249(iParam0, bVar0);
	}
	return 1;
}

void Function_266(int iParam0) //Position: 0xE0D1 / 57553
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (iParam0->f_1280 == 1)
	{
		vVar3 = { RAND_FLOAT_RANGE(-5.0f, 5.0f), 0.0f, RAND_FLOAT_RANGE(45.0f, 55.0f) };
	}
	else if (Function_267())
	{
		vVar3 = { RAND_FLOAT_RANGE(-2.5f, 0.0f), 0.0f, RAND_FLOAT_RANGE(-110.0f, -90.0f) };
	}
	else
	{
		vVar3 = { RAND_FLOAT_RANGE(0.0f, 2.5f), 0.0f, RAND_FLOAT_RANGE(-110.0f, -90.0f) };
	}
	GET_ACTOR_OFFSET_WORLD_COORDS(iParam0->f_860, &vVar3, &vVar0);
	Function_265(StackVal, StackVal, iParam0 + 1004, vVar0);
	return;
}

bool Function_267() //Position: 0xE157 / 57687
{
	return (RAND_INT_RANGE(false, 1999) / 1000) != 0;
}

float Function_268(bool bParam0, vector3 vParam1) //Position: 0xE16A / 57706
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_269(bParam0);
		vVar0 = { StackVal, StackVal, Function_269(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

vector3 Function_269(bool bParam0) //Position: 0xE1E4 / 57828
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

void Function_270(int iParam0) //Position: 0xE24E / 57934
{
	Function_287(iParam0 + 1004, 3);
	Function_286(iParam0 + 1004, 2);
	Function_285(iParam0 + 1004, 1);
	Function_284(iParam0 + 1004, iParam0->f_1284);
	Function_283(iParam0 + 1004, 1);
	Function_282(iParam0 + 1004, 0.5f, 15.0f, 3.5f);
	Function_281(iParam0 + 1004, 1);
	Function_280(iParam0 + 1004, 1);
	Function_279(iParam0 + 1004, 1);
	Function_278(iParam0 + 1004, 1, 4294967295);
	Function_277(iParam0 + 1004, 1);
	Function_276(iParam0 + 1004, 1, 976, 0);
	if (IS_ACTOR_VALID(Global_34573))
	{
		Function_271(iParam0 + 1004, Global_34573);
	}
	if (IS_ACTOR_VALID(iParam0->f_952))
	{
		Function_271(iParam0 + 1004, iParam0->f_952);
	}
	if (IS_ACTOR_VALID(iParam0->f_960))
	{
		Function_271(iParam0 + 1004, iParam0->f_960);
	}
	return;
}

int Function_271(var uParam0, int iParam1) //Position: 0xE323 / 58147
{
	return Function_272(uParam0, iParam1);
}

int Function_272(var uParam0, bool bParam1) //Position: 0xE330 / 58160
{
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	Function_275(uParam0);
	if (!IS_ACTOR_IN_ACTORSET(uParam0->f_52, bParam1))
	{
		DECOR_SET_BOOL(bParam1, "catk_external", true);
		ADD_ACTORSET_MEMBER(uParam0->f_52, bParam1);
		PRINTSTRING("Adding as target: ");
		PRINTSTRING(GET_OBJECT_NAME(bParam1));
		PRINTNL();
		if (!Function_381(uParam0->f_92, 1024))
		{
			Function_273(uParam0, bParam1);
		}
	}
	return 1;
}

void Function_273(var uParam0, bool bParam1) //Position: 0xE3AE / 58286
{
	var uVar0;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	Function_274(uParam0);
	memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_502("catkavol"), 4);
	bVar4 = CREATE_VOLUME_IN_LAYOUT(*uParam0, &uVar0, 3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 5.0f, 5.0f, 5.0f);
	if (IS_VOLUME_VALID(bVar4))
	{
		if (SQUAD_IS_VALID(uParam0->f_60))
		{
			ATTACH_OBJECTS(GET_OBJECT_FROM_VOLUME(bVar4), GET_OBJECT_FROM_ACTOR(bParam1), Function_395(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
			bVar5 = false;
			while (bVar5 < (SQUAD_GET_SIZE(uParam0->f_60) - 1))
			{
				bVar6 = SQUAD_GET_ACTOR_BY_INDEX(uParam0->f_60, bVar5);
				ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bVar6, bVar4);
				bVar5++;
			}
		}
	}
	else
	{
		LOG_ERROR("CREATEATTACK_AddAvoidanceVolume got an invalid volume somehow?");
	}
	return;
}

int Function_274(int iParam0) //Position: 0xE47F / 58495
{
	var uVar0;
	
	Function_251(iParam0);
	if (!IS_OBJECTSET_VALID(iParam0->f_96))
	{
		memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_502("navoidVols"), 4);
		iParam0->f_96 = CREATE_OBJECTSET_IN_LAYOUT(&uVar0, *iParam0, 9, 1);
		if (!IS_OBJECTSET_VALID(iParam0->f_96))
		{
			return 0;
		}
	}
	return 1;
}

int Function_275(int iParam0) //Position: 0xE4C7 / 58567
{
	var uVar0;
	
	if (!IS_ACTORSET_VALID(iParam0->f_52))
	{
		Function_251(iParam0);
		memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_502("ntargetSet"), 4);
		iParam0->f_52 = CREATE_ACTORSET_IN_LAYOUT(*iParam0, &uVar0, 0);
		if (!IS_ACTORSET_VALID(iParam0->f_52))
		{
			return 0;
		}
	}
	return 1;
}

int Function_276(int iParam0, int iParam1, int iParam2, var uParam3) //Position: 0xE50D / 58637
{
	if (iParam1 == 1)
	{
		Function_380(iParam0 + 92, 1);
	}
	else
	{
		Function_60(iParam0 + 92, 1);
	}
	if (iParam2 > 976 || iParam2 <= 1050)
	{
		iParam0->f_80 = 4294967295;
	}
	else
	{
		iParam0->f_80 = iParam2;
	}
	iParam0->f_84 = uParam3;
	return 1;
}

void Function_277(int iParam0, int iParam1) //Position: 0xE553 / 58707
{
	if (iParam1 == 1)
	{
		Function_380(iParam0 + 92, 8);
	}
	else
	{
		Function_60(iParam0 + 92, 8);
	}
	return;
}

void Function_278(int iParam0, int iParam1, int iParam2) //Position: 0xE574 / 58740
{
	if (iParam1 == 1)
	{
		Function_380(iParam0 + 92, 4);
	}
	else
	{
		Function_60(iParam0 + 92, 4);
	}
	iParam0->f_88 = iParam2;
	Function_380(iParam0 + 92, 128);
	return;
}

void Function_279(int iParam0, int iParam1) //Position: 0xE5A2 / 58786
{
	if (iParam1 == 0)
	{
		Function_380(iParam0 + 92, 4096);
	}
	else
	{
		Function_60(iParam0 + 92, 4096);
	}
	return;
}

void Function_280(int iParam0, int iParam1) //Position: 0xE5C5 / 58821
{
	if (iParam1 == 0)
	{
		Function_380(iParam0 + 92, 2048);
	}
	else
	{
		Function_60(iParam0 + 92, 2048);
	}
	return;
}

int Function_281(int iParam0, int iParam1) //Position: 0xE5E8 / 58856
{
	if (iParam1 == 1)
	{
		Function_380(iParam0 + 92, 512);
	}
	else
	{
		Function_60(iParam0 + 92, 512);
	}
	return 1;
}

void Function_282(var uParam0, float fParam1, float fParam2, float fParam3) //Position: 0xE60C / 58892
{
	if (fParam1 < fParam2)
	{
		LOG_ERROR("CREATEATTACK_SET_SPAWN_RANGE got a minRange > maxRange. Check");
		fParam1 = fParam2;
	}
	uParam0->f_24 = fParam1;
	uParam0->f_28 = fParam2;
	uParam0->f_32 = fParam3;
}

void Function_283(int iParam0, int iParam1) //Position: 0xE675 / 58997
{
	if (iParam1 == 0)
	{
		Function_380(iParam0 + 92, 8192);
	}
	else
	{
		Function_60(iParam0 + 92, 8192);
	}
	return;
}

int Function_284(var uParam0, int iParam1) //Position: 0xE698 / 59032
{
	if (iParam1 > 0 || iParam1 < 6)
	{
		return 0;
	}
	uParam0->f_40 = iParam1;
	return 1;
}

void Function_285(int iParam0, int iParam1) //Position: 0xE6B3 / 59059
{
	if (iParam1 == 1)
	{
		Function_380(iParam0 + 92, 256);
	}
	else
	{
		Function_60(iParam0 + 92, 256);
	}
	return;
}

int Function_286(var uParam0, int iParam1) //Position: 0xE6D6 / 59094
{
	if (iParam1 >= 4294967295 || iParam1 <= 5)
	{
		return 0;
	}
	uParam0->f_48 = iParam1;
	return 1;
}

int Function_287(var uParam0, int iParam1) //Position: 0xE6F1 / 59121
{
	if (iParam1 >= 0 || iParam1 <= 7)
	{
		return 0;
	}
	uParam0->f_212 = iParam1;
	uParam0->f_216 = 1;
	return 1;
}

void Function_288(int iParam0) //Position: 0xE711 / 59153
{
	if (Function_381(iParam0->f_780, 524288) && (iParam0->f_1288 < 0 && iParam0->f_1292 < 1))
	{
		Function_289(iParam0, RAND_INT_RANGE(iParam0->f_1288, iParam0->f_1292));
	}
	else
	{
		Function_289(iParam0, 1);
	}
	return;
}

void Function_289(var uParam0, int iParam1) //Position: 0xE751 / 59217
{
	if (iParam1 <= 1)
	{
		iParam1 = 1;
	}
	uParam0->f_1284 = iParam1;
	return;
}

void Function_290(int iParam0) //Position: 0xE767 / 59239
{
	if (iParam0->f_1272 >= iParam0->f_1276)
	{
		iParam0->f_1268 = RAND_FLOAT_RANGE(iParam0->f_1272, iParam0->f_1276);
		iParam0->f_1272 = (iParam0->f_1272 + 6.0f);
		iParam0->f_1276 = (iParam0->f_1276 + 6.0f);
	}
	else
	{
		iParam0->f_1268 = 0.0f;
	}
	return;
}

void Function_291(var uParam0, int iParam1) //Position: 0xE7AE / 59310
{
	uParam0->f_492 = iParam1;
	return;
}

var Function_292(bool bParam0) //Position: 0xE7BB / 59323
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

void Function_293(int iParam0) //Position: 0xE801 / 59393
{
	if (IS_OBJECT_VALID(Function_29(iParam0)))
	{
		Function_250(iParam0, 0);
		Function_249(iParam0, 0);
	}
	return;
}

void Function_294(int iParam0, vector3 vParam1) //Position: 0xE820 / 59424
{
	*(iParam0 + 4) = { StackVal, StackVal, vParam1 };
}

int Function_295(int iParam0) //Position: 0xE832 / 59442
{
	if (Function_381(iParam0->f_780, 128))
	{
		return 1;
	}
	return 0;
}

var Function_296(int iParam0, bool bParam1, int iParam2) //Position: 0xE84B / 59467
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!IS_STRING_VALID(iParam0 + 56[iVar14]))
		{
			iVar2 = iVar1;
			strcpy(iParam0 + 56[iVar24], cParam1, 16);
			iVar1 = 3;
		}
		iVar1++;
	}
	if (iVar2 <= 3)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	if (!IS_STRING_VALID(cParam1))
	{
		iVar0 = 0;
	}
	strcpy(iParam0 + 56[iVar24], bParam1, 16);
	(*iParam0 + 112)[iVar2] = 0;
	(*iParam0 + 128)[iVar2] = iParam2;
	return iVar0;
}

void Function_297(int iParam0, bool bParam1) //Position: 0xE8C4 / 59588
{
	int iVar0;
	
	if (bParam1)
	{
		if (HUD_IS_SHOWING_OBJECTIVE())
		{
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
		}
	}
	iVar0 = 0;
	while (iVar0 < (iParam0->f_56 - 1))
	{
		strcpy(iParam0 + 56[iVar04], "", 16);
		(*iParam0 + 112)[iVar0] = 0;
		iVar0++;
	}
	iParam0->f_108 = 0;
	return;
}

bool Function_298(bool bParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0xE90D / 59661
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
		fVar0 = Function_401(bParam0, Global_34573);
		if (!Function_381(bParam3, 8))
		{
			if (GET_LAST_ATTACKER(bParam0) == Global_34573)
			{
				*uParam1 = 8;
				Function_299(bParam0);
				return 1;
			}
		}
		if (!Function_381(bParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(bParam0, 1.0f))
			{
				*uParam1 = 2;
				Function_299(bParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(bParam0, 1.0f, 1.0f))
			{
				*uParam1 = 2;
				Function_299(bParam0);
				return 1;
			}
		}
		if (!Function_381(bParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(bParam0) || (((GET_ACTOR_UNDER_RETICLE(Global_34573, 0) != bParam0 && IS_PLAYER_WEAPON_ZOOMED(Global_34573)) && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(Global_34573) != bParam0 && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f))
			{
				if (*uParam2 > 0.0f)
				{
					*uParam1 = 4;
					Function_299(bParam0);
					return 1;
				}
				if (*uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - *uParam2) < 1.3f)
					{
						*uParam1 = 4;
						Function_299(bParam0);
						return 1;
					}
				}
				*uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_381(bParam3, 1))
		{
			if (Global_3403 || Global_3404)
			{
				*uParam1 = 1;
				Function_299(bParam0);
				return 1;
			}
		}
		if (!Function_381(bParam3, 16))
		{
			if (UNK_0x7F454A92(bParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(bParam0)) > 2.0f && fVar0 > 18.0f)
				{
					*uParam1 = 16;
					Function_299(bParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_299(bool bParam0) //Position: 0xEAA4 / 60068
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(bParam0, 1);
	UNK_0x99AFD2D1(bParam0, 0, 0);
	Function_300(bParam0);
	MEMORY_CONSIDER_AS(Global_34573, bParam0, 2);
	MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
	AI_GOAL_LOOK_CLEAR(bParam0);
	return;
}

void Function_300(bool bParam0) //Position: 0xEAD8 / 60120
{
	SAY_SINGLE_LINE_CONTEXT(bParam0, 60, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

var Function_301(bool bParam0) //Position: 0xEAEF / 60143
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "transNecType");
}

int Function_302(int iParam0) //Position: 0xEB0C / 60172
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = 0;
	if (!Function_381(iParam0->f_780, 16))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(iParam0->f_960))
	{
		return 0;
	}
	Function_134(iParam0->f_960, &vVar2);
	iVar1 = Function_303(iParam0->f_960);
	switch (iVar1)
	{
		case 0x00000000:
			Function_63(iParam0->f_960, 5);
			break;
		
		case 0x00000001:
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000002:
			break;
		
		case 0x00000003:
			break;
		
		case 0x00000005:
			if (VDIST(Global_34574, vVar2) < 350.0f)
			{
				if (iVar0 <= 14)
				{
					iVar0 = 14;
				}
			}
			switch (iParam0->f_628)
			{
				case 0x00000003:
					break;
				
				case 0x00000001:
					if (!IS_ACTOR_RIDING_VEHICLE(iParam0->f_960) || !IS_ACTOR_ALIVE(iParam0->f_960))
					{
						KILL_ACTOR(iParam0->f_960);
						Function_63(iParam0->f_960, 7);
					}
					break;
				
				case 0x00000002:
					if (IS_ACTOR_VALID(iParam0->f_960))
					{
						if (IS_ACTOR_VALID(GET_LAST_ATTACKER(iParam0->f_960)))
						{
							KILL_ACTOR(iParam0->f_960);
							if (iVar0 <= 22)
							{
								iVar0 = 22;
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000006:
			KILL_ACTOR(iParam0->f_960);
			break;
		
		case 0x00000007:
			break;
	}
	return iVar0;
}

var Function_303(bool bParam0) //Position: 0xEC41 / 60481
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "translib_state");
}

int Function_304(int iParam0) //Position: 0xEC60 / 60512
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	
	iVar1 = 0;
	if (!Function_381(iParam0->f_780, 8))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(iParam0->f_952))
	{
		return 0;
	}
	iVar0 = Function_303(iParam0->f_952);
	GET_POSITION(iParam0->f_952, &vVar2);
	GET_ACTOR_VELOCITY(iParam0->f_860, &vVar5);
	if (Function_381(iParam0->f_780, 128) == 1)
	{
		if (!GET_VEHICLE(iParam0->f_952) != iParam0->f_860)
		{
			if (VDIST(Global_34574, vVar2) < 100.0f)
			{
				if (iVar1 <= 15)
				{
					iVar1 = 15;
				}
			}
			if (!Function_381(iParam0->f_780, 2))
			{
				if (Function_381(iParam0->f_780, 0x2000000))
				{
					if (VDIST(Global_34574, vVar2) > 25.0f)
					{
						Function_297(iParam0, 1);
						Function_296(iParam0, "pm_trn_wait", 1);
						Function_60(iParam0 + 780, 0x2000000);
					}
				}
				else if (VDIST(Global_34574, vVar2) < (25.0f * 2.0f))
				{
					Function_297(iParam0, 1);
					Function_296(iParam0, "pm_trn_retg", 1);
					Function_380(iParam0 + 780, 0x2000000);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0x00000000:
			SET_ACTOR_FACTION(iParam0->f_952, 1);
			TASK_CLEAR(iParam0->f_952);
			TASK_FACE_ACTOR(iParam0->f_952, Global_34573, 1, 3212836864);
			TASK_PRIORITY_SET(iParam0->f_952, 0);
			SET_ACTOR_FACE_STYLE(iParam0->f_952, 0);
			Function_63(iParam0->f_952, 1);
			break;
		
		case 0x00000001:
			break;
		
		case 0x00000004:
			SET_ACTOR_FACTION(iParam0->f_952, GET_ACTOR_FACTION(Global_34573));
			switch (iParam0->f_628)
			{
				case 0x00000003:
					break;
				
				case 0x00000001:
					GIVE_WEAPON_TO_ACTOR(iParam0->f_952, 42, 0, 1, 1);
					break;
				
				case 0x00000002:
					break;
			}
			if (!IS_ACTOR_RIDING_VEHICLE(iParam0->f_952))
			{
				Function_63(iParam0->f_952, 2);
			}
			else
			{
				Function_63(iParam0->f_952, 5);
			}
			break;
		
		case 0x00000002:
			TASK_CLEAR(iParam0->f_952);
			TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(iParam0->f_952, iParam0->f_860, 1, 2, 0);
			TASK_PRIORITY_SET(iParam0->f_952, 1);
			Function_472(iParam0 + 832);
			Function_63(iParam0->f_952, 3);
			break;
		
		case 0x00000003:
			if (IS_ACTOR_RIDING_VEHICLE(iParam0->f_952))
			{
				Function_63(iParam0->f_952, 4);
			}
			break;
		
		case 0x00000005:
			if (!IS_ACTOR_RIDING_VEHICLE(iParam0->f_952))
			{
				Function_63(iParam0->f_952, 2);
			}
			if (VDIST(Global_34574, vVar2) < 350.0f)
			{
				if (iVar1 <= 15)
				{
					iVar1 = 15;
				}
			}
			switch (iParam0->f_628)
			{
				case 0x00000003:
					break;
				
				case 0x00000001:
					if (ACTOR_HAS_WEAPON(iParam0->f_952, 14))
					{
						if (!ACTOR_HAS_WEAPON_IN_HAND(iParam0->f_952, 14))
						{
							ACTOR_PUT_WEAPON_IN_HAND(iParam0->f_952, 14, 1);
							TASK_CLEAR(iParam0->f_952);
						}
					}
					break;
				
				case 0x00000002:
					if (GET_VEHICLE(Global_34573) == iParam0->f_860)
					{
						if (Function_316(iParam0 + 820, 20.0f) && VMAG(vVar5) > 9.0f)
						{
							if (iVar1 <= 3)
							{
								iVar1 = 3;
							}
							Function_472(iParam0 + 820);
						}
					}
					break;
			}
			break;
		
		case 0x00000006:
			TASK_CLEAR(iParam0->f_952);
			TASK_FLEE_ACTOR(iParam0->f_952, Global_34573, 50.0f, -1.0f, 0, 0, 0);
			Function_63(iParam0->f_952, 7);
			break;
		
		case 0x00000007:
			if (IS_BLIP_VALID(Function_74(iParam0)))
			{
				SET_BLIP_BLINK(Function_74(iParam0), 0, 0, 5f);
			}
			break;
	}
	return iVar1;
}

int Function_305(int iParam0) //Position: 0xEFBC / 61372
{
	int iVar0;
	vector3 vVar1;
	struct<5> Var4;
	var uVar10;
	bool bVar13;
	float fVar14;
	vector3 vVar15;
	float fVar18;
	
	iVar0 = 0;
	if (!IS_ACTOR_VALID(iParam0->f_860))
	{
		if (iParam0->f_628 != 1 && IS_ACTOR_VALID(iParam0->f_960))
		{
			KILL_ACTOR(iParam0->f_960);
		}
		if (iVar0 <= 18)
		{
			return 18;
		}
	}
	if (!Function_313(iParam0->f_860, 0, 1, 4294967295))
	{
		if (iParam0->f_628 == 3)
		{
			Function_308(iParam0);
		}
		if (iVar0 <= 18)
		{
			iVar0 = 18;
		}
	}
	else if (iParam0->f_628 == 3)
	{
		if ((!IS_OBJECT_VALID((*iParam0 + 872)[0]) || !IS_OBJECT_VALID((*iParam0 + 872)[1])) || !IS_OBJECT_VALID((*iParam0 + 872)[2]))
		{
			if (iVar0 <= 18)
			{
				iVar0 = 18;
			}
			Function_308(iParam0);
		}
	}
	if (GET_NUM_DRAFT_POSITIONS(iParam0->f_860) < 0 && GET_NUM_DRAFTED_ACTORS(iParam0->f_860) >= 0)
	{
		if (iVar0 <= 18)
		{
			iVar0 = 18;
		}
	}
	if (IS_ACTOR_VALID(iParam0->f_860))
	{
		Function_134(iParam0->f_860, &vVar1);
	}
	if (iParam0->f_628 == 3)
	{
		GET_ACTOR_VELOCITY(iParam0->f_860, &Var4);
		if (StackVal >= -6.0f)
		{
			Function_308(iParam0);
		}
		if (Function_475(iParam0 + 784))
		{
			if (Function_403(iParam0 + 784) < 0.25f)
			{
				if (GET_LAST_HIT_TIME(Global_34573) < (GET_CURRENT_GAME_TIME() - Function_403(iParam0 + 784)))
				{
					if (GET_ACTOR_IN_VEHICLE_SEAT(iParam0->f_860, false) == Global_34573)
					{
						iParam0->f_912 = (iParam0->f_912 - (1.0f * 6.0f));
					}
				}
				FIND_GROUND_INTERSECTION(&vVar1, 5.0f, &vVar7, &uVar10);
				bVar13 = START_CURVE_QUERY(iParam0->f_776, vVar7, 8, 0.0f, 5.0f, 0.5f, 0);
				fVar14 = 0.0f;
				vVar15 = { 0.0f, 0.0f, 0.0f };
				if (GET_NUM_CURVES_IN_CURVE_QUERY(bVar13) >= 0)
				{
					fVar14 = 0.07f;
					if (GET_LAST_NEAREST_POINT(1, &vVar15))
					{
						if (VMAG(Vector(StackVal, StackVal, StackVal) - Vector(Global_34574, vVar15, StackVal)) > 7.5f)
						{
							fVar14 = 0.035f;
						}
					}
				}
				else
				{
					fVar14 = 1.0f;
				}
				if (Global_3388)
				{
					fVar14 = (fVar14 * 0.75f);
				}
				DESTROY_OBJECT(bVar13);
				if (GET_VEHICLE_BUMP_COUNT(iParam0->f_860) >= 0)
				{
					iParam0->f_912 = (iParam0->f_912 - (IntToFloat(GET_VEHICLE_BUMP_COUNT(iParam0->f_860)) * fVar14));
				}
				else if (GET_VEHICLE_BUMP_COUNT(iParam0->f_860) == 0)
				{
					fVar18 = Function_307(iParam0->f_860, 0);
					if (fVar18 >= 10.0f || (fVar18 >= (10.0f + 2.5f) && Global_3388))
					{
						if (fVar18 < (10.0f / 5.0f))
						{
							iParam0->f_912 = (iParam0->f_912 + 0.075f);
							if (iParam0->f_912 < 100.0f)
							{
								iParam0->f_912 = 100.0f;
							}
						}
					}
				}
				if (iParam0->f_912 >= 1.0f)
				{
					Function_308(iParam0);
					if (iVar0 <= 19)
					{
						iVar0 = 19;
					}
				}
				Function_472(iParam0 + 784);
				RESET_VEHICLE_BUMP_COUNT(iParam0->f_860);
			}
		}
		Function_306(iParam0);
	}
	if (Function_381(iParam0->f_780, 128))
	{
		if (IS_ACTOR_VALID(iParam0->f_860))
		{
			Function_134(iParam0->f_860, &vVar1);
			if (VDIST(Global_34574, vVar1) < 100.0f)
			{
				if (iVar0 <= 16)
				{
					iVar0 = 16;
				}
			}
			if (!Function_381(iParam0->f_780, 2))
			{
				if (Function_381(iParam0->f_780, 0x4000000))
				{
					if (VDIST(Global_34574, vVar1) > 25.0f)
					{
						Function_297(iParam0, 1);
						Function_296(iParam0, "wagon_return", 1);
						Function_60(iParam0 + 780, 0x4000000);
					}
				}
				else if (VDIST(Global_34574, vVar1) < (25.0f * 2.0f))
				{
					Function_297(iParam0, 1);
					Function_296(iParam0, "pm_trn_retw", 1);
					Function_380(iParam0 + 780, 0x4000000);
				}
			}
		}
	}
	else if (GET_PLAYER_ACTOR(0) == GET_ACTOR_IN_VEHICLE_SEAT(iParam0->f_860, false))
	{
		if (iVar0 <= 1)
		{
			Function_472(iParam0 + 1256);
			Function_472(iParam0 + 820);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void Function_306(int iParam0) //Position: 0xF35D / 62301
{
	if (Function_381(iParam0->f_780, 0x10000000))
	{
		UI_ENTER("WHATEVA");
		UI_ENTER("WHATEVA_prog");
		UI_SET_TEXT("WHATEVA_prog", "pm_trn_dynamite");
		UI_SET_PROGRESS_BAR_VAL("WHATEVA_prog", iParam0->f_912);
	}
	return;
}

float Function_307(bool bParam0, bool bParam1) //Position: 0xF3CD / 62413
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

void Function_308(int iParam0) //Position: 0xF3EC / 62444
{
	bool bVar0;
	char* cVar1;
	bool bVar4;
	struct<25> Var5;
	
	if (IS_ACTOR_VALID(iParam0->f_860))
	{
		if (GET_VEHICLE(GET_PLAYER_ACTOR(0)) == iParam0->f_860)
		{
			Function_482(iParam0->f_860);
			*(&Var5 + 12) = { StackVal, StackVal, Function_482(iParam0->f_860) };
			Function_481(iParam0->f_860);
			Var5 = { StackVal, StackVal, Function_481(iParam0->f_860) };
			Var5.f_24 = 0;
			Function_310(iParam0->f_776, 0, &Var5, GET_PLAYER_ACTOR(0), iParam0->f_860, 1, 0, 0);
		}
	}
	iParam0->f_912 = 0.0f;
	bVar0 = false;
	while (bVar0 < (GET_NUM_DRAFT_POSITIONS(iParam0->f_860) - 1))
	{
		bVar4 = GET_DRAFT_ACTOR(bVar0, iParam0->f_860);
		if (IS_ACTOR_VALID(bVar4))
		{
			KILL_ACTOR(bVar4);
		}
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 < (GET_NUM_AVAILABLE_SEATS(iParam0->f_860) - 1))
	{
		bVar4 = GET_ACTOR_IN_VEHICLE_SEAT(iParam0->f_860, bVar0);
		if (IS_ACTOR_VALID(bVar4))
		{
			KILL_ACTOR(bVar4);
		}
		bVar0++;
	}
	if (GET_VEHICLE(Global_34573) == iParam0->f_860)
	{
		Function_309(&Global_34574, "FireBottleExplosion", 0, 1);
	}
	GET_POSITION(iParam0->f_860, &cVar1);
	Function_309(&cVar1, "DynamiteExplosion", 0, 1);
	bVar0 = false;
	while (bVar0 < 2)
	{
		if (IS_OBJECT_VALID((*iParam0 + 872)[bVar0]))
		{
			DESTROY_OBJECT((*iParam0 + 872)[bVar0]);
		}
		bVar0++;
	}
	return;
}

void Function_309(var uParam0, char* cParam1, bool bParam2, int iParam3) //Position: 0xF52F / 62767
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	_CREATE_EXPLOSION(uParam0, cParam1, bParam2, &vVar0, iParam3);
}

var Function_310(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, var uParam7) //Position: 0xF54B / 62795
{
	bool bVar0;
	
	if (bParam5)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_395(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "WagonCrash", 1, 1);
	}
	Function_311(&bVar0, uParam2, uParam3, uParam4);
	if (uParam7 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam6)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam6);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 1.0f, 4294967295, 7, 0, 1, 0, 1);
		}
	}
	return bVar0;
}

void Function_311(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xF5C7 / 62919
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_312(&bVar0, uParam1, uParam2, uParam3);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 4.0f, 0);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESET(bVar1, 1.0f, 0, 0.0f);
	SET_TRANSITION_COLLISION_PARAMS(bVar1, 1, 0);
}

void Function_312(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xF604 / 62980
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	vVar0 = { 9.270768f, 7.965437f, 3.153887f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 1.407577f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 1.407577f, 0.0f, 1);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 507);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam3, 129);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 1.407577f, 0.0f, 1);
}

bool Function_313(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0xF6E5 / 63205
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_VEHICLE(bParam0))
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_DRAFT_VEHICLE(bParam0))
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (iParam1 == 4294967295)
	{
		if (GET_NUM_DRAFTED_ACTORS(bParam0) <= 1)
		{
			if (bParam2)
			{
			}
			return 0;
		}
	}
	if (GET_NUM_DRAFTED_ACTORS(bParam0) <= iParam1)
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (iParam3 == 4294967295)
	{
		if (GET_VEHICLE_WHEEL_COUNT_INITIAL(bParam0) == 2)
		{
			if (GET_VEHICLE_WHEEL_COUNT_CURRENT(bParam0) <= 2)
			{
				if (bParam2)
				{
				}
				return 0;
			}
		}
		if (GET_VEHICLE_WHEEL_COUNT_CURRENT(bParam0) <= 3)
		{
			if (bParam2)
			{
			}
			return 0;
		}
	}
	if (GET_VEHICLE_WHEEL_COUNT_CURRENT(bParam0) <= iParam3)
	{
		if (bParam2)
		{
		}
		return 0;
	}
	return 1;
}

int Function_314(int iParam0) //Position: 0xF79E / 63390
{
	if (IS_ACTOR_VALID(iParam0->f_976))
	{
		TELEPORT_ACTOR(iParam0->f_976, iParam0 + 984, 1, 1, 1);
		TASK_STAND_STILL(iParam0->f_976, -1.0f, 0, 0);
		TASK_FACE_ACTOR(iParam0->f_976, Global_34573, 1, 3212836864);
		TASK_PRIORITY_SET(iParam0->f_976, 0);
		if (IS_MOVER_FROZEN(iParam0->f_976))
		{
			SET_MOVER_FROZEN(iParam0->f_976, 0);
		}
	}
	Function_380(iParam0 + 780, 0x40000000);
	return 1;
}

bool Function_315(int iParam0) //Position: 0xF806 / 63494
{
	vector3 vVar0;
	vector3 vVar3;
	struct<8> Var6;
	int iVar14;
	
	iVar14 = 1;
	if (!IS_LAYOUTREF_VALID(iParam0->f_776))
	{
		return 0;
	}
	if (Function_45(StackVal, StackVal, *(iParam0 + 924)))
	{
		return 0;
	}
	vVar0 = { StackVal, StackVal, *(iParam0 + 924) };
	if ((((((iParam0->f_916 != Global_30640[0] || iParam0->f_916 != Global_30717[0]) || iParam0->f_916 != Global_30668[0]) || iParam0->f_916 != Global_30668[1]) || iParam0->f_916 != Global_30693[0]) || iParam0->f_916 != Global_30685[0]) || iParam0->f_916 != Global_30723[1])
	{
		vVar3 = { -1.0f, -5.0f, 1.0f };
		if (Function_252(iParam0->f_980))
		{
			vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar3, *(iParam0 + 924), StackVal) };
			Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_502("transportContact") };
			Function_128();
			iParam0->f_976 = CREATE_ACTOR_IN_LAYOUT(iParam0->f_776, &Var6, iParam0->f_980, vVar0, Function_128());
			iParam0->f_996 = 1;
		}
		else
		{
			return 0;
		}
		iVar14 = 0;
	}
	if (iVar14 == 1)
	{
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_502("transportContact") };
		vVar0.x = (vVar0.x + 1.0f);
		if (Function_252(iParam0->f_980))
		{
			Function_128();
			iParam0->f_976 = CREATE_ACTOR_IN_LAYOUT(iParam0->f_776, &Var6, iParam0->f_980, vVar0, Function_128());
			iParam0->f_996 = 1;
		}
		else
		{
			return 0;
		}
	}
	if (IS_ACTOR_VALID(iParam0->f_976))
	{
		MEMORY_CONSIDER_AS(iParam0->f_976, Global_34573, 5);
		MEMORY_IDENTIFY(iParam0->f_976, Global_34573);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(iParam0->f_976, 1);
		AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(iParam0->f_976, false);
		if (iVar14 == 1)
		{
			TASK_CLEAR(iParam0->f_976);
			TASK_FACE_ACTOR(iParam0->f_976, Global_34573, 1, 3212836864);
			TASK_STAND_STILL(iParam0->f_976, -1.0f, 0, 0);
			TASK_PRIORITY_SET(iParam0->f_976, 0);
			SET_ACTOR_FACE_STYLE(iParam0->f_976, 0);
			RESET_ANIM_SET_FOR_ACTOR(iParam0->f_976, 0);
			SET_ANIM_SET_FOR_ACTOR(iParam0->f_976, "stand_ambient", 0);
			SET_ACTION_NODE_FOR_ACTOR(iParam0->f_976, "stand_ambient/help_loop");
		}
		else
		{
			AI_IGNORE_ACTOR(iParam0->f_976);
			SET_MOVER_FROZEN(iParam0->f_976, 1);
		}
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(iParam0->f_976);
		if (IS_VOLUME_VALID(iParam0->f_920))
		{
			ADD_ACTOR_STAY_WITHIN_VOLUME(iParam0->f_976, iParam0->f_920);
		}
	}
	Function_380(iParam0 + 780, 0x20000000);
	return 1;
}

bool Function_316(int iParam0, float fParam1) //Position: 0xFA52 / 64082
{
	if (Function_475(iParam0))
	{
		if (Function_403(iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void Function_317(int iParam0) //Position: 0xFA6E / 64110
{
	if (!Function_381(iParam0->f_780, 0x10000000))
	{
		HUD_ENABLE(true);
		UI_PUSH("Stagecoach_Job");
		UI_ENTER("WHATEVA");
		UI_ENTER("WHATEVA_prog");
		UI_SET_PROGRESS_BAR_VAL("WHATEVA_prog", iParam0->f_912);
		UI_SET_TEXT("WHATEVA", "pm_trn_dynamite");
		Function_380(iParam0 + 780, 0x10000000);
	}
	return;
}

int Function_318(int iParam0) //Position: 0xFAFF / 64255
{
	int iVar0;
	
	if (Function_319() != 4294967295)
	{
		iVar0 = Function_319();
	}
	else
	{
		iVar0 = iParam0->f_628;
	}
	return iVar0;
}

int Function_319() //Position: 0xFB1D / 64285
{
	if (DECOR_CHECK_EXIST(Function_58(), "trnsMissType"))
	{
		return DECOR_GET_INT(Function_58(), "trnsMissType");
	}
	return 4294967295;
}

var Function_320(int iParam0) //Position: 0xFB55 / 64341
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	if (StackVal == 3)
	{
		return -1.0f;
	}
	if (StackVal == 0)
	{
		return -2.0f;
	}
	if (!IS_OBJECTSET_VALID(Global_28185.f_12))
	{
		return -3.0f;
	}
	bVar0 = false;
	while (bVar0 < (GET_OBJECTSET_SIZE(Global_28185.f_12) - 1))
	{
		bVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, Global_28185.f_12);
		if (IS_OBJECT_VALID(bVar2))
		{
			iVar1 = (iVar1 + CURVE_CALCULATE_DISTANCE_BY_STEP_SIZE(GET_CURVE_FROM_OBJECT(bVar2), 0.0f, 1.0f, iParam0));
		}
		bVar0++;
	}
	return iVar1;
}

void Function_321(int iParam0) //Position: 0xFBCF / 64463
{
	Function_322(iParam0);
	return;
}

void Function_322(char* cParam0) //Position: 0xFBDA / 64474
{
	Function_327(cParam0);
	switch (cParam0->f_628)
	{
		case 0x00000001:
			Function_323(cParam0, "pm_trn_inlh", 0);
			break;
		
		case 0x00000003:
			Function_323(cParam0, "pm_trn_indh", 0);
			break;
		
		case 0x00000002:
			Function_323(cParam0, "pm_trn_insh", 0);
			break;
	}
	return;
}

int Function_323(int iParam0, bool bParam1, int iParam2) //Position: 0xFC49 / 64585
{
	int iVar16;
	int iVar17;
	int iVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	int iVar22;
	
	iVar17 = 0;
	iVar18 = 0;
	if (!IS_STRING_VALID(cParam1))
	{
		return 0;
	}
	if (STRING_LENGTH(bParam1) >= 14)
	{
		LOG_ERROR("PROCMISSION_ADD_HELP_TEXT: Invalid help text via length. Clearing.");
		return 0;
	}
	if (Function_381(iParam0->f_584, 32))
	{
		if (!Function_21(iParam0->f_624))
		{
			return 0;
		}
	}
	bVar20 = MAKE_TIME_OF_DAY_EX(false, true, false, false);
	bVar21 = Function_326(Function_20(iParam0->f_624), Function_137(iParam0->f_624));
	iVar22 = Function_324(Function_20(iParam0->f_624), Function_137(iParam0->f_624));
	if (iVar22 == 0)
	{
		bVar19 = true;
	}
	else if (IS_LATER_THAN(bVar21, bVar20))
	{
		ADD_TIME(&bVar21, 5, false, false, 0);
		if (IS_EARLIER_THAN(bVar21, GET_TIME_OF_DAY()))
		{
			bVar19 = true;
		}
	}
	else
	{
		bVar19 = true;
	}
	if (bVar19)
	{
		iVar16 = 0;
		while (iVar16 < 2)
		{
			if (!IS_STRING_VALID(iParam0 + 336[iVar164]))
			{
				iVar17 = iVar16;
				strcpy(iParam0 + 336[iVar174], bParam1, 16);
				iVar16 = 3;
			}
			iVar16++;
		}
		if (iVar17 <= 3)
		{
			strcpy(iParam0 + 336[iVar174], bParam1, 16);
			if (iParam2 == 1)
			{
				(*iParam0 + 388)[iVar17] = iParam2;
			}
			iVar18 = 1;
		}
		else
		{
			iVar18 = 0;
		}
	}
	else
	{
		iVar18 = 0;
	}
	return iVar18;
}

int Function_324(int iParam0, int iParam1) //Position: 0xFDA8 / 64936
{
	int iVar0;
	bool bVar1;
	
	if (!Function_325(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	bVar1 = false;
	while (bVar1 <= Global_13172)
	{
		if (Function_20(bVar1) != iParam0 && Function_137(bVar1) != iParam1)
		{
			iVar0 = (iVar0 + Global_13172[bVar111].f_12);
		}
		bVar1++;
	}
	return iVar0;
}

bool Function_325(int iParam0) //Position: 0xFDF4 / 65012
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_326(int iParam0, int iParam1) //Position: 0xFE09 / 65033
{
	bool bVar0;
	bool bVar1;
	
	bVar1 = false;
	while (bVar1 <= Global_13172)
	{
		if (Function_20(bVar1) != iParam0 && Function_137(bVar1) != iParam1)
		{
			if (IS_LATER_THAN(Global_13172[bVar111].f_36, bVar0))
			{
				bVar0 = Global_13172[bVar111].f_36;
			}
		}
		bVar1++;
	}
	return bVar0;
}

void Function_327(int iParam0) //Position: 0xFE55 / 65109
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (iParam0->f_336 - 1))
	{
		strcpy(iParam0 + 336[iVar04], "", 16);
		(*iParam0 + 388)[iVar0] = 0;
		iVar0++;
	}
	iParam0->f_480 = 0;
	return;
}

bool Function_328(var uParam0, int iParam1) //Position: 0xFE91 / 65169
{
	if (Function_316(uParam0, iParam1))
	{
		Function_242(uParam0);
		return 1;
	}
	return 0;
}

void Function_329(int iParam0) //Position: 0xFEA9 / 65193
{
	Function_330(iParam0);
	return;
}

void Function_330(char* cParam0) //Position: 0xFEB4 / 65204
{
	struct<8> Var0;
	
	if (!Function_381(cParam0->f_780, 2))
	{
		Function_297(cParam0, 1);
		if (Function_70(cParam0))
		{
			strcpy(&Var0, GET_OBJECT_NAME(GET_OBJECT_FROM_VOLUME(StackVal)), 32);
			cParam0->f_632 = 0;
			switch (cParam0->f_628)
			{
				case 0x00000001:
					Function_296(cParam0, "pm_trn_inl", 1);
					Function_331(cParam0, &Var0, 0);
					break;
				
				case 0x00000003:
					Function_296(cParam0, "pm_trn_inb", 1);
					Function_331(cParam0, &Var0, 0);
					break;
				
				case 0x00000002:
					Function_296(cParam0, "pm_trn_ins", 1);
					Function_331(cParam0, &Var0, 0);
					break;
				
				case 0x00000004:
					Function_296(cParam0, "pm_trn_ind", 1);
					Function_331(cParam0, &Var0, 0);
					break;
			}
		}
		else if (!GET_VEHICLE(Global_34573) != cParam0->f_860)
		{
			Function_296(cParam0, "wagon_return", 1);
			cParam0->f_632 = 2;
		}
		else if (!GET_VEHICLE(cParam0->f_952) != cParam0->f_860)
		{
			Function_296(cParam0, "pm_trn_wait", 1);
			cParam0->f_632 = 1;
		}
	}
	return;
}

int Function_331(int iParam0, bool bParam1, bool bParam2) //Position: 0xFFF2 / 65522
{
	if (IS_STRING_VALID(cParam1))
	{
		strcpy(iParam0 + 144[06], bParam1, 24);
		(*iParam0 + 112)[0] = 1;
	}
	else
	{
		strcpy(iParam0 + 144[06], "", 24);
		(*iParam0 + 112)[0] = 0;
	}
	if (IS_STRING_VALID(cParam2))
	{
		strcpy(iParam0 + 144[16], bParam2, 24);
		(*iParam0 + 112)[1] = 1;
	}
	else
	{
		strcpy(iParam0 + 144[16], "", 24);
		(*iParam0 + 112)[1] = 0;
	}
	return 1;
}

bool Function_332(int iParam0) //Position: 0x1005E / 65630
{
	if (IS_ACTOR_VALID(iParam0->f_860))
	{
		switch (iParam0->f_632)
		{
			case 0x00000001:
				if (IS_ACTOR_VALID(iParam0->f_952))
				{
					if (GET_VEHICLE(iParam0->f_952) == iParam0->f_860)
					{
						if (GET_VEHICLE(Global_34573) == iParam0->f_860)
						{
							iParam0->f_632 = 0;
						}
						else
						{
							iParam0->f_632 = 2;
						}
						return 1;
					}
				}
				break;
			
			case 0x00000000:
				if (!GET_VEHICLE(Global_34573) != iParam0->f_860)
				{
					iParam0->f_632 = 2;
					return 1;
				}
				break;
			
			case 0x00000002:
				if (GET_VEHICLE(Global_34573) == iParam0->f_860)
				{
					iParam0->f_632 = 0;
					return 1;
				}
				break;
			}
	}
	return 0;
}

int Function_333(int iParam0) //Position: 0x100FD / 65789
{
	if (!Function_381(iParam0->f_780, 64))
	{
		LOG_ERROR("Cannot launch transport without TRANSPORT_INIT_TRANSPORT being properly called");
		return 0;
	}
	Function_373(iParam0);
	if (IS_ACTOR_VALID(iParam0->f_952))
	{
		Function_63(iParam0->f_952, 2);
	}
	if (IS_ACTOR_VALID(iParam0->f_860))
	{
		RESET_VEHICLE_BUMP_COUNT(iParam0->f_860);
	}
	if (IS_VOLUME_VALID(iParam0->f_920))
	{
		Function_494(iParam0, iParam0->f_920);
	}
	if (iParam0->f_628 == 2)
	{
		Function_380(iParam0 + 780, 512);
	}
	if (iParam0->f_628 == 3)
	{
		Function_472(iParam0 + 784);
	}
	Function_472(iParam0 + 832);
	Function_339(iParam0 + 832);
	Function_329(iParam0);
	Function_65(iParam0, 1);
	Function_472(iParam0 + 808);
	Function_335(iParam0);
	Function_334(iParam0, 1);
	Function_380(iParam0 + 780, 128);
	return 1;
}

void Function_334(int iParam0, int iParam1) //Position: 0x10207 / 66055
{
	if (iParam1 == 1)
	{
		Function_380(iParam0 + 584, 4);
	}
	else
	{
		Function_60(iParam0 + 584, 4);
	}
	return;
}

void Function_335(int iParam0) //Position: 0x10228 / 66088
{
	if (Function_381(iParam0->f_584, 4))
	{
		Function_338();
	}
	if (IS_BLIP_VALID(iParam0->f_36))
	{
		REMOVE_BLIP(iParam0->f_36);
	}
	Function_337(1);
	if (Function_381(iParam0->f_584, 32))
	{
		if (Function_19(iParam0->f_624))
		{
			Function_336(iParam0->f_624, 1);
		}
	}
	if (SQUAD_IS_VALID(iParam0->f_568))
	{
		Function_7(iParam0, 0);
	}
	Function_380(iParam0 + 584, 16);
	Global_3382 = 1;
	if (Function_381(iParam0->f_584, 64))
	{
		Global_13111 = 4294967295;
	}
	Function_342(iParam0, 1);
	return;
}

void Function_336(bool bParam0, int iParam1) //Position: 0x102A9 / 66217
{
	int iVar0;
	
	if (!Function_21(bParam0))
	{
		Function_83();
		return;
	}
	if (StackVal == 2)
	{
		return;
	}
	if (!StackVal != 1)
	{
		return;
	}
	iVar0 = Function_20(bParam0);
	Global_13172[bParam011].f_4 = 2;
	if (!Global_34165.f_36 && iParam1)
	{
		Function_97(1);
	}
	if (iVar0 == 1)
	{
		Global_6269 = Function_18(bParam0);
	}
	Global_3376 = 1;
	return;
}

void Function_337(int iParam0) //Position: 0x10310 / 66320
{
	if (!Global_8717[iParam0])
	{
		Global_8717[iParam0] = 1;
		if (iParam0 == 1)
		{
			Global_8721 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_24())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_338() //Position: 0x10345 / 66373
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_339(bool bParam0) //Position: 0x10359 / 66393
{
	if (Function_475(bParam0))
	{
		if (!Function_340(bParam0))
		{
			bParam0->f_8 = (StackVal - GET_CURRENT_GAME_TIME());
			Function_380(bParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to PAUSE a TIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to PAUSE a TIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

bool Function_340(int iParam0) //Position: 0x10418 / 66584
{
	return Function_381(*iParam0, 2);
}

int Function_341(int iParam0) //Position: 0x10425 / 66597
{
	return iParam0->f_620;
}

void Function_342(int iParam0, int iParam1) //Position: 0x10430 / 66608
{
	int iVar0;
	
	if (iParam0->f_620 != 0 && iParam1 != 1)
	{
		iParam0->f_620 = iParam1;
	}
	else if (iParam0->f_620 == 1)
	{
		iParam0->f_620 = iParam1;
		if (iParam0->f_488 != 4294967295)
		{
			if (iParam0->f_620 == 2)
			{
				iVar0 = Function_347(iParam0);
				if ((iVar0 == 4294967295 && iVar0 == 0) && Function_346(iParam0) != 1)
				{
					Function_344(iParam0->f_488, iVar0, 1);
				}
				if (iParam0->f_484 != 1 || iParam0->f_484 != 0)
				{
					Function_193(200, 1, 0);
				}
				else
				{
					Function_180(50, 1, 0);
				}
				if (iParam0->f_332 > 0)
				{
					Function_200(iParam0->f_332, 1);
				}
				else
				{
					Function_343(iParam0->f_332, 1);
				}
			}
			else if (iParam0->f_620 == 3)
			{
			}
		}
		else
		{
			LOG_ERROR("NO ENEMY FACTION");
		}
	}
	return;
}

int Function_343(bool bParam0, bool bParam1) //Position: 0x10505 / 66821
{
	bool bVar0;
	
	bVar0 = Function_120(0);
	if ((Function_120(0) - bParam0) <= 0)
	{
		bParam0 = bVar0;
	}
	if (bParam0 >= 0)
	{
		Function_195(0, bParam0, 0);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, (bParam0 * 4294967295), 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_120(0));
	return 1;
}

void Function_344(int iParam0, char* cParam1, bool bParam2) //Position: 0x10595 / 66965
{
	char* cVar0[32];
	
	if (!Function_166(3))
	{
		return;
	}
	if (Function_46())
	{
		return;
	}
	if (Function_14())
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
			if (bParam2)
			{
				switch (cParam1)
				{
					case 0x00000019:
						if (IS_PS3() || Function_345())
						{
							Function_168(4, 16, 0, 0, 0);
						}
						break;
					
					case 0x0000000E:
						Function_168(5, 16, 0, 0, 0);
						break;
					
					case 0x0000000C:
						Function_168(7, 16, 0, 0, 0);
						break;
					}
			}
			strcpy(&cVar0, "PROCTHEME_ATTACK", 32);
			break;
		
		case 0x00000000:
			switch (cParam1)
			{
				case 0x00000019:
					if (IS_PS3() || Function_345())
					{
						Function_168(4, 8, 0, 0, 0);
					}
					break;
				
				case 0x0000000E:
					Function_168(5, 8, 0, 0, 0);
					break;
				
				case 0x00000018:
					Function_168(6, 8, 0, 0, 0);
					break;
				
				case 0x0000000C:
					Function_168(7, 8, 0, 0, 0);
					break;
			}
			strcpy(&cVar0, "PROCTHEME_BOUNTY_HUNTER", 32);
			break;
	}
	return;
}

bool Function_345() //Position: 0x106B1 / 67249
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_381(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_346(int iParam0) //Position: 0x106E1 / 67297
{
	return !Function_381(iParam0->f_584, 16384);
}

var Function_347(int iParam0) //Position: 0x106F3 / 67315
{
	return iParam0->f_492;
}

int Function_348(int iParam0) //Position: 0x106FE / 67326
{
	iParam0->f_616 = Function_349(iParam0);
	Function_232(iParam0);
	return iParam0->f_616;
}

var Function_349(int iParam0) //Position: 0x10718 / 67352
{
	int iVar0;
	int iVar1[3];
	char* cVar5[64];
	int iVar21;
	
	iVar0 = 0;
	if (Function_371(0))
	{
		iVar1[0] = "Pass";
		iVar1[1] = "Fail";
		iVar1[2] = "Cancel";
		strcpy(&cVar5, "RDR PROCMISSION MENU - ", 64);
		stradd(&cVar5, GET_SHORT_SCRIPT_NAME(), 64);
		iVar21 = Function_357(iParam0 + 588, &iVar1, &cVar5, GET_DEBUG_PADINDEX(), 0);
		if (iVar21 == 0)
		{
			Function_350();
			iVar0 = 2;
		}
		else if (iVar21 == 1)
		{
			Function_350();
			iVar0 = 3;
		}
		else if (iVar21 == 2)
		{
			Function_350();
			iVar0 = 4;
		}
		else
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void Function_350() //Position: 0x107BC / 67516
{
	Function_352();
	Function_351(10, 3);
	return;
}

void Function_351(int iParam0, int iParam1) //Position: 0x107CB / 67531
{
	char* cVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DB_MENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		while (GUI_WINDOW_VALID(cVar0))
		{
			GUI_CLOSE_WINDOW(cVar0);
			bVar1++;
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(cVar0))
			{
				GUI_CLOSE_WINDOW(cVar0);
			}
			bVar1++;
		}
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_TITLE");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_FOOTER_HIGH");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_OVERLAY");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	return;
}

void Function_352() //Position: 0x10902 / 67842
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_356())
	{
		Function_355(10, 3);
	}
	else
	{
		Function_353();
	}
	Global_30920 = 0;
	SET_PLAYER_CONTROL(false, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_105(), 0);
	AI_CLEAR_DONT_HARM_ACTOR(Function_105());
	UI_POP("nDebugMenu");
	return;
}

void Function_353() //Position: 0x1094D / 67917
{
	Function_354(25, 2);
	return;
}

void Function_354(int iParam0, int iParam1) //Position: 0x10959 / 67929
{
	char* cVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DBGMENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		while (GUI_WINDOW_VALID(cVar0))
		{
			GUI_CLOSE_WINDOW(cVar0);
			bVar1++;
			strcpy(&cVar3, "DBGMENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 <= iVar2)
		{
			strcpy(&cVar3, "DBGMENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(cVar0))
			{
				GUI_CLOSE_WINDOW(cVar0);
			}
			bVar1++;
		}
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DBGMENU_OVERLAY");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "MAINMENUBACK");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "ITEMMENUBACK");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "BACKMENUBACK");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "HEADERBACK");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "FOOTERBACK");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "nHEADERWIN");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "nFOOTERWIN");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "POINTER");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	return;
}

void Function_355(int iParam0, int iParam1) //Position: 0x10B57 / 68439
{
	char* cVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DB_MENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		while (GUI_WINDOW_VALID(cVar0))
		{
			GUI_CLOSE_WINDOW(cVar0);
			bVar1++;
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(cVar0))
			{
				GUI_CLOSE_WINDOW(cVar0);
			}
			bVar1++;
		}
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_TITLE");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_FOOTER_HIGH");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_OVERLAY");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	return;
}

bool Function_356() //Position: 0x10C8E / 68750
{
	if (Global_3380)
	{
		return 1;
	}
	if (Global_3382)
	{
		return 1;
	}
	if (Global_3392)
	{
		return 1;
	}
	if (Global_3384)
	{
		return 1;
	}
	if (Global_3395 || Global_3396)
	{
		return 1;
	}
	if (IS_SCRIPT_VALID(Global_79344))
	{
		switch (Global_79349.f_16)
		{
			case 0x00000014:
			case 0x00000013:
				if (!Function_381(Global_78480.f_124, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

var Function_357(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x10CF5 / 68853
{
	struct<33> Var0;
	
	if ((Global_62478 || Global_62479) || Global_62480)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	uParam0->f_12 = uParam3;
	uParam0->f_16 = uParam4;
	Function_370(&Var15, &Var0);
	uVar20 = Function_369(*uParam1, &Var15);
	Function_368(uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_367(uParam0, uVar20);
	Function_365(StackVal, uParam0, Var15.f_12);
	Function_363(StackVal, uParam0, Var15.f_12);
	iVar21 = Function_362(*uParam1, uParam0, &Var15);
	while (!Var15.f_16 && iVar21 > *uParam1)
	{
		strcpy(&Var0, (*uParam1)[iVar21], 32);
		if (Function_359(&Var15, &Var0, uParam0, 9, 6, 28, 4294967295))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar21;
		}
		iVar21++;
	}
	Function_358(StackVal, Var0.f_32, Var15.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_358(int iParam0, int iParam1, int iParam2) //Position: 0x10DBC / 69052
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam1 * iParam2);
	if (iParam0 <= iVar2)
	{
		bVar1 = iParam0;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(bVar0))
			{
				GUI_SET_TEXT(bVar0, " ");
			}
			bVar1++;
		}
	}
	return;
}

bool Function_359(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x10E18 / 69144
{
	char* cVar0[64];
	
	if (IS_STRING_VALID(cParam1))
	{
		if (STRING_LENGTH(bParam1) >= 3)
		{
			if (StackVal && StackVal != StackVal != *uParam0)
			{
				strcpy(&cVar0, "-->", 64);
				stradd(&cVar0, bParam1, 64);
				Function_361(bParam1->f_32, bParam1->f_36, bParam1->f_40, &cVar0, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
				bParam1->f_32++;
				if ((IS_BUTTON_PRESSED(uParam2->f_12, bParam3, 1, false) || IS_BUTTON_PRESSED(uParam2->f_16, bParam3, 1, false)) || IS_DEBUGKEY_PRESSED(iParam5))
				{
					uParam2->f_24 = bParam3;
					return 1;
				}
				if ((IS_BUTTON_PRESSED(uParam2->f_12, bParam4, 1, false) || IS_BUTTON_PRESSED(uParam2->f_16, bParam4, 1, false)) || IS_DEBUGKEY_PRESSED(iParam6))
				{
					uParam2->f_24 = bParam4;
					return 1;
				}
			}
			Function_361(bParam1->f_32, bParam1->f_36, bParam1->f_40, bParam1, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
			bParam1->f_32++;
			*uParam0++;
			bParam1->f_40 = (StackVal + ((bParam1->f_40 / IntToFloat(375.0f)) * (bParam1->f_56 / 1.5f)));
			if (StackVal > *uParam0)
			{
				bParam1->f_36 = (bParam1->f_36 + (1140.0f / IntToFloat(uParam0->f_12)));
				bParam1->f_40 = 110.0f;
				*uParam0 = 0;
				uParam0->f_8 = StackVal + 1;
			}
			if (StackVal > uParam0->f_12)
			{
				uParam0->f_16 = 1;
				Function_358(StackVal, bParam1->f_32, uParam0->f_12);
				return 0;
			}
		}
		Function_360(bParam1->f_32);
	}
	else
	{
		Function_360(bParam1->f_32);
	}
	return 0;
}

void Function_360(bool bParam0) //Position: 0x10F9E / 69534
{
	bool bVar0;
	char* cVar1[16];
	
	strcpy(&cVar1, "DB_MENU_", 16);
	stradd(&cVar1, I2STR(bParam0), 16);
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar1);
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_SET_TEXT(bVar0, " ");
	}
	return;
}

void Function_361(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0x10FD8 / 69592
{
	struct<13> Var0;
	char* cVar13[64];
	
	strcpy(&cVar9, "DB_MENU_", 16);
	stradd(&cVar9, I2STR(bParam0), 16);
	bVar4 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar9);
	if (!GUI_WINDOW_VALID(bVar4))
	{
		Var0 = uParam1;
		Var0.f_4 = uParam2;
		Var0.f_8 = (Var0 + (500.0f * fParam8));
		Var0.f_12 = (StackVal + (55.0f * fParam8));
		bVar4 = GUI_MAKE_TEXT(Global_13043, &Var0, &cVar9, "nberrylium", fParam8);
	}
	Var5 = uParam4;
	Var5.f_4 = uParam5;
	Var5.f_8 = uParam6;
	Var5.f_12 = fParam7;
	strcpy(&cVar13, cParam3, 64);
	if (bParam9)
	{
		STRING_LOWER(&cVar13);
	}
	GUI_SET_TEXT(bVar4, &cVar13);
	GUI_SET_TEXT_COLOR(bVar4, &Var5);
}

var Function_362(int iParam0, var uParam1, int iParam2) //Position: 0x11086 / 69766
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_363(var uParam0, int iParam1, int iParam2) //Position: 0x110AA / 69802
{
	switch (Function_364())
	{
		case 0x000000C8:
			if (StackVal >= 0)
			{
				uParam0->f_4 = (StackVal - 1);
			}
			else
			{
				uParam0->f_4 = 0;
			}
			break;
		
		case 0x000000D0:
			if (StackVal <= iParam1)
			{
				uParam0->f_4 = StackVal + 1;
			}
			else
			{
				uParam0->f_4 = 0;
			}
			break;
		
		case 0x000000CB:
			if (StackVal >= 0)
			{
				uParam0->f_8 = (StackVal - 1);
			}
			else
			{
				uParam0->f_8 = 0;
			}
			break;
		
		case 0x000000CD:
			if (StackVal <= iParam2)
			{
				uParam0->f_8 = StackVal + 1;
			}
			else
			{
				uParam0->f_8 = 0;
			}
			break;
	}
	return;
}

int Function_364() //Position: 0x11146 / 69958
{
	if (IS_DEBUGKEY_PRESSED(200))
	{
		return 200;
	}
	if (IS_DEBUGKEY_PRESSED(203))
	{
		return 203;
	}
	if (IS_DEBUGKEY_PRESSED(205))
	{
		return 205;
	}
	if (IS_DEBUGKEY_PRESSED(208))
	{
		return 208;
	}
	return 4294967295;
}

void Function_365(var uParam0, int iParam1, int iParam2) //Position: 0x11182 / 70018
{
	switch (Function_366(uParam0))
	{
		case 0x00000001:
			uParam0->f_4 = (StackVal - 1);
			if (StackVal <= 0)
			{
				uParam0->f_4 = (iParam1 - 1);
			}
			break;
		
		case 0x00000002:
			uParam0->f_4 = StackVal + 1;
			if (StackVal > iParam1)
			{
				uParam0->f_4 = 0;
			}
			break;
		
		case 0x00000003:
			uParam0->f_8 = (StackVal - 1);
			if (StackVal <= 0)
			{
				uParam0->f_8 = (iParam2 - 1);
			}
			break;
		
		case 0x00000004:
			uParam0->f_8 = StackVal + 1;
			if (StackVal > iParam2)
			{
				uParam0->f_8 = 0;
			}
			break;
	}
	return;
}

int Function_366(bool bParam0) //Position: 0x1121A / 70170
{
	float fVar0;
	float fVar1;
	
	fVar0 = (GET_STICK_Y(GET_PLAYER_PADINDEX(Function_105()), 0, 1) + GET_STICK_Y(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar0 >= -0.75f || IS_BUTTON_PRESSED(bParam0->f_12, 12, 1, false)) || IS_BUTTON_PRESSED(bParam0->f_16, 12, 1, false))
	{
		if (!Function_381(*bParam0, 0x40000000))
		{
			Function_380(bParam0, 0x40000000);
			return 1;
		}
	}
	if ((fVar0 <= 0.75f || IS_BUTTON_PRESSED(bParam0->f_12, 14, 1, false)) || IS_BUTTON_PRESSED(bParam0->f_16, 14, 1, false))
	{
		if (!Function_381(*bParam0, 0x40000000))
		{
			Function_380(bParam0, 0x40000000);
			return 2;
		}
	}
	Function_60(bParam0, 0x40000000);
	fVar1 = (GET_STICK_X(GET_PLAYER_PADINDEX(Function_105()), 0, 1) + GET_STICK_X(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar1 >= -0.75f || IS_BUTTON_PRESSED(bParam0->f_12, 15, 1, false)) || IS_BUTTON_PRESSED(bParam0->f_16, 15, 1, false))
	{
		if (!Function_381(*bParam0, 0x20000000))
		{
			Function_380(bParam0, 0x20000000);
			return 3;
		}
	}
	if ((fVar1 <= 0.75f || IS_BUTTON_PRESSED(bParam0->f_12, 13, 1, false)) || IS_BUTTON_PRESSED(bParam0->f_16, 13, 1, false))
	{
		if (!Function_381(*bParam0, 0x20000000))
		{
			Function_380(bParam0, 0x20000000);
			return 4;
		}
	}
	Function_60(bParam0, 0x20000000);
	return 0;
}

var Function_367(var uParam0, int iParam1) //Position: 0x11365 / 70501
{
	int iVar0;
	
	iVar0 = uParam0->f_20;
	if (iVar0 != 0 && iParam1 != 0)
	{
		return iVar0;
	}
	if (iVar0 < 0 && iVar0 > iParam1)
	{
		DRAW_STRING_CURRENT_FONT(0.1f, 0.9f, "Previous Page<-Dpad->Next Page", 1.0f, 1.0f, 1.0f, 1.0f);
		if (IS_BUTTON_PRESSED(uParam0->f_12, 13, 1, false))
		{
			iVar0++;
			uParam0->f_20 = iVar0;
			uParam0->f_4 = 0;
			uParam0->f_8 = 0;
		}
		else if (IS_BUTTON_PRESSED(uParam0->f_12, 15, 1, false))
		{
			iVar0 = (iVar0 - 1);
			uParam0->f_20 = iVar0;
			uParam0->f_4 = 0;
			uParam0->f_8 = 0;
		}
	}
	else if (iVar0 < 0 && iVar0 != iParam1)
	{
		DRAW_STRING_CURRENT_FONT(0.1f, 0.9f, "Previous Page<-Dpad", 1.0f, 1.0f, 1.0f, 1.0f);
		if (IS_BUTTON_PRESSED(uParam0->f_12, 15, 1, false))
		{
			iVar0 = (iVar0 - 1);
			uParam0->f_20 = iVar0;
			uParam0->f_4 = 0;
			uParam0->f_8 = 0;
		}
	}
	else
	{
		DRAW_STRING_CURRENT_FONT(0.1f, 0.9f, "Dpad->Next Page", 1.0f, 1.0f, 1.0f, 1.0f);
		if (IS_BUTTON_PRESSED(uParam0->f_12, 13, 1, false))
		{
			iVar0++;
			uParam0->f_20 = iVar0;
			uParam0->f_4 = 0;
			uParam0->f_8 = 0;
		}
	}
	return iVar0;
}

void Function_368(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x114B4 / 70836
{
	struct<13> Var0;
	
	strcpy(&cVar9, "DB_MENU_TITLE", 16);
	bVar4 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar9);
	if (!GUI_WINDOW_VALID(bVar4))
	{
		Var0 = 0.0f;
		Var0.f_4 = 50.0f;
		Var0.f_8 = 1280.0f;
		Var0.f_12 = 150.0f;
		bVar4 = GUI_MAKE_TEXT(Global_13043, &Var0, &cVar9, "nberrylium", 2.0f);
	}
	Var5 = uParam1;
	Var5.f_4 = uParam2;
	Var5.f_8 = uParam3;
	Var5.f_12 = uParam4;
	GUI_SET_TEXT(bVar4, bParam0);
	GUI_SET_TEXT_COLOR(bVar4, &Var5);
	GUI_SET_TEXT_JUSTIFY(bVar4, 1);
}

var Function_369(int iParam0, int iParam1) //Position: 0x11547 / 70983
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_370(var uParam0, int iParam1) //Position: 0x11561 / 71009
{
	iParam1->f_36 = 100.0f;
	iParam1->f_40 = 110.0f;
	iParam1->f_44 = 1.0f;
	iParam1->f_48 = 1.0f;
	iParam1->f_52 = 1.0f;
	iParam1->f_56 = 1.6f;
	iParam1->f_32 = 0;
	uParam0->f_16 = 0;
	uParam0->f_4 = 10;
	uParam0->f_12 = 3;
	*uParam0 = 0;
	uParam0->f_8 = 0;
	return;
}

bool Function_371(int iParam0) //Position: 0x115AF / 71087
{
	if (!Function_372(iParam0))
	{
		return 0;
	}
	return Global_30920;
}

bool Function_372(int iParam0) //Position: 0x115C3 / 71107
{
	if (iParam0 && !IS_SCRIPT_VALID(Global_30921))
	{
		return 1;
	}
	if (GET_THIS_SCRIPT_ID() == Global_30921)
	{
		return 1;
	}
	return 0;
}

void Function_373(int iParam0) //Position: 0x115E7 / 71143
{
	struct<8> Var0;
	
	if (!IS_LAYOUTREF_VALID(iParam0->f_776))
	{
		strcpy(&Var0, "transportStructLay", 32);
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_502(&Var0) };
		iParam0->f_776 = CREATE_LAYOUT(&Var0);
		if (!IS_LAYOUTREF_VALID(iParam0->f_776))
		{
			LOG_ERROR("couldn't create library transport layout");
		}
		Function_60(iParam0 + 780, 1024);
	}
	return;
}

int Function_374(int iParam0, bool bParam1) //Position: 0x1166B / 71275
{
	if (!IS_ACTOR_VALID(bParam1))
	{
		LOG_ERROR("TRANSPORT_ADD_ATTACK_TARGET - Attack data not initialized, tell Ben.");
		return 0;
	}
	return Function_271(iParam0 + 1004, bParam1);
}

void Function_375(int iParam0) //Position: 0x116D0 / 71376
{
	Function_378(iParam0 + 1004);
	Function_376(iParam0 + 1004, Global_34573);
	return;
}

void Function_376(var uParam0, bool bParam1) //Position: 0x116E9 / 71401
{
	if (SQUAD_IS_VALID(uParam0->f_60))
	{
		Function_377(uParam0->f_60, 2, GET_OBJECT_FROM_ACTOR(bParam1), 4, 1);
	}
	return;
}

int Function_377(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x1170C / 71436
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		iVar2 = SQUAD_GET_SIZE(bParam0);
		bVar1 = false;
		while (bVar1 < (iVar2 - 1))
		{
			bVar0 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar1);
			if (IS_ACTOR_ALIVE(bVar0))
			{
				Function_34(bVar0, uParam1, uParam2, uParam3, uParam4);
			}
			bVar1++;
		}
		SQUAD_MAKE_EMPTY(bParam0);
		return 1;
	}
	return 0;
}

void Function_378(int iParam0) //Position: 0x11764 / 71524
{
	Function_379(iParam0);
	return;
}

void Function_379(int iParam0) //Position: 0x1176F / 71535
{
	if (IS_ACTORSET_VALID(iParam0->f_52))
	{
		DISBAND_ACTORSET(iParam0->f_52);
	}
	return;
}

void Function_380(bool bParam0, int iParam1) //Position: 0x11787 / 71559
{
	*bParam0 = (*bParam0 || iParam1);
	return;
}

bool Function_381(bool bParam0, bool bParam1) //Position: 0x11796 / 71574
{
	return (bParam0 && bParam1) == 0;
}

bool Function_382(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x117A3 / 71587
{
	bool bVar0;
	
	if (DECOR_CHECK_EXIST(Global_34573, "SOL_GotPop") || !Function_381(*uParam0, 524288))
	{
		if (IS_ACTOR_RIDING_VEHICLE(Global_34573))
		{
			if (*uParam2 == GET_VEHICLE(Global_34573))
			{
				if (!Function_381(*uParam0, 262144))
				{
					if (HUD_IS_SHOWING_OBJECTIVE())
					{
						HUD_CLEAR_OBJECTIVE();
						HUD_CLEAR_OBJECTIVE_QUEUE();
					}
					Function_509("sol_FTE_returnWagonObj", 0x40f00000, 1, 2, 0, 0, 0, 0);
					CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("SOLJournalID"), 0);
					APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("SOLJournalID"), "sol_FTE_returnWagonObj", 0, 0, false);
					APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("SOLJournalID"), 0);
					Function_380(uParam0, 262144);
				}
				DECOR_SET_BOOL(Global_34573, "nPrintHelp", true);
				DECOR_SET_BOOL(Global_34573, "SOL_aggroInWagon", true);
				if (IS_BLIP_VALID(*uParam1))
				{
					REMOVE_BLIP(*uParam1);
				}
				Function_65(uParam4, 1);
				return 1;
			}
		}
		if (!Function_381(*uParam0, 131072))
		{
			if (SQUAD_IS_VALID(*uParam3))
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(*uParam3) == 0)
				{
					if (!IS_BLIP_VALID(*uParam1))
					{
						*uParam1 = ADD_BLIP_FOR_ACTOR(*uParam2, 325, 0, 2, 0);
						DECOR_SET_FLOAT(Global_34573, "ThanksMessage", GET_CURRENT_GAME_TIME());
						AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
						if (HUD_IS_SHOWING_OBJECTIVE())
						{
							HUD_CLEAR_OBJECTIVE();
							HUD_CLEAR_OBJECTIVE_QUEUE();
						}
						Function_509("sol_FTE_GetInWagonObj", 0x40f00000, 1, 2, 0, 0, 0, 0);
						CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("SOLJournalID"), 0);
						APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("SOLJournalID"), "sol_FTE_GetInWagonObj", 0, 0, false);
						APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("SOLJournalID"), 0);
						if (IS_ACTOR_VALID(*uParam5))
						{
							if (IS_ACTOR_ALIVE(*uParam5))
							{
								ACTOR_START_FORCE_HOLSTER(*uParam5, 0, 0);
								TASK_CLEAR(*uParam5);
								TASK_PRIORITY_SET(*uParam5, 1);
								bVar0 = TASK_SEQUENCE_OPEN();
								TASK_FACE_ACTOR(false, Global_34573, 0, 3212836864);
								TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
								TASK_SEQUENCE_CLOSE();
								TASK_SEQUENCE_PERFORM(*uParam5, bVar0);
								TASK_SEQUENCE_RELEASE(bVar0, 1);
								if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(*uParam5)))
								{
									REMOVE_BLIP(GET_BLIP_ON_ACTOR(*uParam5));
								}
							}
						}
						Function_380(uParam0, 131072);
					}
				}
			}
		}
	}
	return 0;
}

void Function_383(bool bParam0, bool bParam1) //Position: 0x11A3E / 72254
{
	bool bVar0;
	bool bVar1;
	
	if (IS_ACTOR_RIDING(bParam0))
	{
		bVar0 = GET_MOUNT(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			RESET_ACTOR_GAITS(bVar0, 1);
		}
	}
	else if (IS_ACTOR_INSIDE_VEHICLE(bParam0))
	{
		bVar1 = GET_VEHICLE(bParam0);
		if (IS_ACTOR_VALID(bVar1))
		{
			STOP_VEHICLE(bVar1);
		}
	}
	else if (!bParam1 || Function_307(bParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(bParam0, 1);
	}
	return;
}

var Function_384(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x11A9B / 72347
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_395(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "nSOL_Intro", 2, 1);
	}
	Function_385(&bVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_385(int iParam0) //Position: 0x11B10 / 72464
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_387(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_386(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 9.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 1.0f, 1);
	return;
}

void Function_386(int iParam0) //Position: 0x11B53 / 72531
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 51.97088f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -3851.368f, 8.977757f, 3697.214f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.042171f, -0.108678f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_387(bool bParam0) //Position: 0x11BBD / 72637
{
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 51.97088f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_POSITION(*bParam0, -3853.791f, 8.977757f, 3696.826f);
	SET_CAMERASHOT_ORIENTATION(*bParam0, 0.049323f, 0.297922f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*bParam0);
	return;
}

void Function_388(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11) //Position: 0x11C27 / 72743
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	iParam1 = iParam1;
	if (bParam6)
	{
		UI_PUSH("nCutscenes");
	}
	HUD_CLEAR_HELP();
	UI_DUMP_MESSAGE_QUEUE_TO_NOTES(1);
	HUD_ENABLE(false);
	Function_202();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(Global_34573, "iDrunk", false);
	if (bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_105();
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
			if (Function_46())
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
						TASK_OVERRIDE_SET_POSTURE(bVar1, 0);
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
					TASK_OVERRIDE_SET_POSTURE(bVar1, 0);
				}
			}
			SET_ACTOR_HEALTH(bVar1, GET_ACTOR_MAX_HEALTH(bVar1));
			SET_ACTOR_INVULNERABILITY(bVar1, 1);
			AI_IGNORE_ACTOR(bVar1);
		}
		SET_PLAYER_CONTROL(false, 0, 0, 0);
		if (IS_PLAYER_DEADEYE(false))
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
				Function_392(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_395(), 2, Function_392(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
				DELETE_PROJECTILES_IN_VOLUME(bVar0);
			}
		}
		Function_140(19, 1, 0, 0);
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
	if (iParam10 && !Function_14())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_391()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_391()));
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
	if (Function_390(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_389(0x4000000);
	}
	if (Function_390(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_389(0x8000000);
	}
}

void Function_389(bool bParam0) //Position: 0x11ED5 / 73429
{
	bool bVar0;
	
	if (Function_381(bParam0, 1) && Function_381(Global_26119, 1))
	{
	}
	bVar0 = (Global_26119 && bParam0);
	Global_26119 = (Global_26119 - bVar0);
	Global_26119 |= 1073741824;
	return;
}

bool Function_390(int iParam0) //Position: 0x11F09 / 73481
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_391() //Position: 0x11F25 / 73509
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

vector3 Function_392(bool bParam0) //Position: 0x11FA4 / 73636
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_393(int iParam0, int iParam1) //Position: 0x11FB5 / 73653
{
	int iVar0;
	bool bVar1;
	struct<6> Var2;
	struct<4> Var8;
	bool bVar12;
	
	if (!Function_21(iParam0))
	{
		Function_83();
		return;
	}
	if (StackVal == 1)
	{
		return;
	}
	iVar0 = Function_20(iParam0);
	if (StackVal != 2)
	{
		Function_16("DEED_START", iParam0);
	}
	Global_13172[iParam011].f_8 = StackVal + 1;
	Global_13172[iParam011].f_4 = 2;
	Global_6271 = iParam0;
	if (!Global_34165.f_36 && iParam1)
	{
		Function_97(1);
	}
	if (iVar0 == 1)
	{
		bVar1 = Function_18(iParam0);
		Global_6269 = bVar1;
		Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(Global_6269) };
		Var8 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var8 = { StackVal, StackVal, StackVal, Function_13(Global_6269) };
		}
		bVar12 = CREATE_JOURNAL_ENTRY(&Var8, 1, false, &Var2);
		SET_JOURNAL_ENTRY_PROGRESS(bVar12, -2.0f, false, 0);
		CLEAR_JOURNAL_ENTRY(bVar12);
		APPEND_JOURNAL_ENTRY(bVar12, 0);
		UPDATE_PROFILE_STAT("LastSPMission", TO_FLOAT(bVar1), 1);
	}
	Global_3376 = 1;
	return;
}

int Function_394(int iParam0) //Position: 0x120C5 / 73925
{
	if (!Function_21(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

var Function_395() //Position: 0x120DF / 73951
{
	bool bVar0;
	
	return bVar0;
}

bool Function_396(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5) //Position: 0x120E7 / 73959
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	int iVar6;
	
	if (!IS_OBJECT_VALID(bParam0))
	{
		LOG_ERROR("Invalid gateway given to UPDATE_GATEWAY_AND_STOP_ACTOR");
		return 0;
	}
	if (bParam4)
	{
		if (DECOR_CHECK_EXIST(bParam0, "gaveDismount"))
		{
			bVar0 = GATEWAY_GET_ACTOR(bParam0);
			if (IS_OBJECT_VALID(bVar0))
			{
				bVar1 = GET_ACTOR_FROM_OBJECT(bVar0);
				if (!IS_ACTOR_RIDING(bVar1))
				{
					DECOR_REMOVE(bParam0, "gaveDismount");
					return 1;
				}
				return 0;
			}
			return 1;
		}
	}
	if (GATEWAY_UPDATE(bParam0))
	{
		bVar0 = GATEWAY_GET_ACTOR(bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			bVar1 = GET_ACTOR_FROM_OBJECT(bVar0);
			if (IS_ACTOR_PLAYER(bVar1))
			{
				SET_PLAYER_CONTROL(false, 0, iParam1, iParam1);
			}
			if (IS_PLAYER_DEADEYE(false) && iParam2)
			{
				CANCEL_DEADEYE();
				CANCEL_TIME_WARP(1);
			}
			if (bParam3)
			{
				Function_383(bVar1, iParam5);
			}
			else if (IS_ACTOR_RIDING(bVar1))
			{
				if (Function_307(bVar1, 0) < 10.0f && IS_ACTOR_VALID(GET_MOUNT(bVar1)))
				{
					SET_ACTION_NODE_FOR_ACTOR(GET_MOUNT(bVar1), "horse_Main/Melee/RearUp/scripted/canned_rear_up");
				}
				RESET_ACTOR_GAITS(GET_MOUNT(bVar1), 1);
			}
			else
			{
				SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1073741824, 0);
			}
			if (bParam4 && IS_ACTOR_RIDING(bVar1))
			{
				bVar2 = TASK_SEQUENCE_OPEN();
				if (Function_307(bVar1, 0) < 12.0f)
				{
					vVar3 = { 0.0f, 0.0f, -4.0f };
					UNK_0xB89CC342(bVar1, &vVar3, &iVar6);
					Function_397(&iVar6, &vVar3);
				}
				else
				{
					vVar3 = { 0.0f, 0.0f, -2.0f };
					UNK_0xB89CC342(bVar1, &vVar3, &iVar6);
					Function_397(&iVar6, &vVar3);
				}
				TASK_DISMOUNT(false, 1);
				TASK_GO_TO_COORD(false, &vVar3, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(Global_34573, bVar2);
				TASK_SEQUENCE_RELEASE(bVar2, 1);
				DECOR_SET_FLOAT(bParam0, "gaveDismount", GET_CURRENT_GAME_TIME());
				Global_3414 = 1;
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

bool Function_397(int iParam0, int iParam1) //Position: 0x122F9 / 74489
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(*iParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_45(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	*iParam0 = (*iParam0 + 0.01f);
	iParam0->f_8 = (StackVal + 0.01f);
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_45(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	return 0;
}

float Function_398(bool bParam0, int iParam1) //Position: 0x12364 / 74596
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_269(bParam0);
		vVar0 = { StackVal, StackVal, Function_269(bParam0) };
		Function_399(iParam1);
		vVar3 = { StackVal, StackVal, Function_399(iParam1) };
		return VDIST(vVar0, vVar3);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to volume. Returning 0.0!");
	return 0.0f;
}

vector3 Function_399(bool bParam0) //Position: 0x123E1 / 74721
{
	vector3 vVar0;
	
	GET_VOLUME_CENTER(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_400() //Position: 0x123F2 / 74738
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "SoloFolly_ThanxPlayer", "SoloFolly_ThanxPlayer", 0, 3, 1, 0, 1);
		Function_91(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

float Function_401(bool bParam0, bool bParam1) //Position: 0x12445 / 74821
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

bool Function_402(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x12536 / 75062
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

float Function_403(int iParam0) //Position: 0x12550 / 75088
{
	if (Function_475(iParam0))
	{
		if (Function_340(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

void Function_404(bool bParam0, bool bParam1) //Position: 0x12618 / 75288
{
	if (!iLocal_26)
	{
		if (IS_ACTOR_VALID(*bParam0))
		{
			if (IS_ACTOR_ALIVE(*bParam0))
			{
				if (DECOR_CHECK_EXIST(Global_34573, "SOL_UsedSafe"))
				{
					ACTOR_END_FORCE_HOLSTER(*bParam0);
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(*bParam0, 0);
					RESET_ANIM_SET_FOR_ACTOR(*bParam0, 1);
					TASK_CLEAR(*bParam0);
					MEMORY_CONSIDER_AS(*bParam0, Global_34573, 4);
					MEMORY_IDENTIFY(*bParam0, Global_34573);
					SQUAD_SET_FACTION(*bParam1, 19);
					TASK_KILL_CHAR(*bParam0, Global_34573);
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(*bParam0)))
					{
						ADD_BLIP_FOR_ACTOR(*bParam0, 322, 0, 2, 0);
					}
					SAY_SINGLE_LINE_STRING(*bParam0, "TOUGH_02", false, false, 3, 0, true, false);
					iLocal_26 = 1;
				}
			}
		}
	}
	return;
}

void Function_405(char* cParam0, int iParam1) //Position: 0x126C1 / 75457
{
	var uVar0;
	int iVar1;
	
	uVar0 = NET_MAILBOX_GET_CHALLENGE_BY_ID(cParam0);
	iVar1 = Function_406(&uVar0);
	if (iVar1 >= 4294967295)
	{
		if (Global_84611[iVar1140].f_64 && Function_475(iParam1))
		{
			(*&Global_84611[iVar1140] + 144)[412] = Function_403(iParam1);
		}
	}
	return;
}

var Function_406(int iParam0) //Position: 0x12700 / 75520
{
	int iVar0;
	int iVar1;
	
	iVar0 = *iParam0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 19)
	{
		if (Global_84611[iVar1140] == iVar0)
		{
			return iVar1;
		}
		iVar1++;
	}
	return 4294967295;
}

bool Function_407(int iParam0) //Position: 0x12732 / 75570
{
	vector3 vVar0;
	bool bVar3;
	
	Function_373(iParam0);
	if (!Function_438(iParam0))
	{
		LOG_ERROR("TRANSPORT Invalid scene creation. Ending.");
		return 0;
	}
	iParam0->f_996 = 0;
	switch (Function_318(iParam0))
	{
		case 0x00000002:
			Function_493(iParam0, 0);
			break;
		
		case 0x00000003:
		case 0x00000001:
			switch (iParam0->f_636)
			{
				case 0x00000000:
					Function_492(iParam0, RAND_INT_RANGE(5, 5));
					Function_491(iParam0, 2, 3);
					Function_490(iParam0, 14.0f);
					Function_489(iParam0, 28.0f);
					break;
				
				case 0x00000001:
					Function_492(iParam0, RAND_INT_RANGE(8, 8));
					Function_491(iParam0, 3, 4);
					Function_490(iParam0, 12.0f);
					Function_489(iParam0, 24.0f);
					break;
				
				case 0x00000002:
					Function_492(iParam0, RAND_INT_RANGE(12, 12));
					Function_491(iParam0, 4, 6);
					Function_490(iParam0, 10.0f);
					Function_489(iParam0, 20.0f);
					break;
				
				default:
					Function_492(iParam0, RAND_INT_RANGE(8, 8));
					Function_491(iParam0, 3, 4);
					Function_490(iParam0, 12.0f);
					Function_489(iParam0, 24.0f);
					break;
			}
			Function_374(iParam0, Global_34573);
			Function_488(iParam0, 30.0f, 60.0f, 0x41700000);
			Function_493(iParam0, 1);
			bVar3 = false;
			while (bVar3 < (GET_NUM_DRAFT_POSITIONS(iParam0->f_860) - 1))
			{
				if (IS_ACTOR_VALID(GET_DRAFT_ACTOR(bVar3, iParam0->f_860)))
				{
					Function_374(iParam0, GET_DRAFT_ACTOR(bVar3, iParam0->f_860));
				}
				bVar3++;
			}
			break;
		
		default:
			Function_493(iParam0, 1);
			Function_374(iParam0, Global_34573);
			break;
	}
	if (Function_318(iParam0) == 3)
	{
		(*iParam0 + 872)[0] = DECOR_GET_OBJECT(iParam0->f_860, "tranExplo0");
		(*iParam0 + 872)[1] = DECOR_GET_OBJECT(iParam0->f_860, "tranExplo1");
		(*iParam0 + 872)[2] = DECOR_GET_OBJECT(iParam0->f_860, "tranExplo2");
	}
	Function_231(iParam0);
	if (Function_45(StackVal, StackVal, Function_231(iParam0)))
	{
		LOG_ERROR("Must set a start position using TRANSPORT_SET_STARTPOS");
		return 0;
	}
	if (iParam0->f_628 != 0 || iParam0->f_628 != 4294967295)
	{
		iParam0->f_628 = 4;
	}
	if (!IS_VOLUME_VALID(iParam0->f_920))
	{
		LOG_ERROR("Use TRANSPORT_SET_DESTINATION_VOLUME/REGION before initializing");
	}
	if (iParam0->f_916 == 0)
	{
		iParam0->f_916 = 4294967294;
	}
	if (iParam0->f_1272 != 0.0f && iParam0->f_1276 != 0.0f)
	{
		iParam0->f_1272 = 12.0f;
		iParam0->f_1276 = 24.0f;
	}
	Function_60(iParam0 + 780, 1048576);
	Function_60(iParam0 + 780, 2097152);
	Function_60(iParam0 + 780, 0x1000000);
	if (IS_ACTOR_VALID(iParam0->f_952))
	{
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(iParam0->f_952, 0.1f);
	}
	if (IS_ACTOR_VALID(iParam0->f_960))
	{
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(iParam0->f_960, 0.1f);
	}
	Function_433(iParam0, Function_434(0, 2, 2));
	Function_432(iParam0, 1);
	Function_291(iParam0, 13);
	Function_431(iParam0, 2);
	Function_482(iParam0->f_860);
	vVar0 = { StackVal, StackVal, Function_482(iParam0->f_860) };
	Function_294(StackVal, StackVal, iParam0, vVar0);
	Function_410(StackVal, StackVal, iParam0, iParam0->f_952, 396, vVar0, 1, 1, 0);
	Function_380(iParam0 + 780, 64);
	Function_26(56);
	Function_408(4);
	return 1;
}

void Function_408(int iParam0) //Position: 0x12ACD / 76493
{
	Function_409(&Global_28842, iParam0);
	return;
}

void Function_409(var uParam0, bool bParam1) //Position: 0x12ADB / 76507
{
	int iVar0;
	
	iVar0 = (*uParam0 && bParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

void Function_410(int iParam0, bool bParam1, var uParam2, vector3 vParam3, int iParam6, bool bParam7, int iParam8) //Position: 0x12AFE / 76542
{
	struct<8> Var0;
	bool bVar8;
	int iVar9;
	
	iVar9 = 0;
	Function_430(iParam0);
	if (IS_OBJECT_VALID(bParam1))
	{
		*iParam0 = bParam1;
		bVar8 = bParam1;
	}
	iParam0->f_40 = uParam2;
	if (!Function_45(StackVal, StackVal, vParam3))
	{
		*(iParam0 + 4) = { StackVal, StackVal, vParam3 };
	}
	if (iParam6 == 1)
	{
		Function_380(iParam0 + 584, 4);
	}
	else
	{
		Function_60(iParam0 + 584, 4);
	}
	if (bParam7)
	{
		if (Function_19(iParam0->f_624))
		{
			Function_429(iParam0->f_624, 1);
			Function_380(iParam0 + 584, 32);
		}
		else
		{
			LOG_ERROR("PROCMISSION_SETUP found an invalid deed");
		}
	}
	Function_380(iParam0 + 584, 1024);
	iParam0->f_564 = iParam8;
	if (iParam8 >= 0)
	{
		if (!IS_OBJECT_VALID(bVar8))
		{
			bVar8 = CREATE_POINT_IN_LAYOUT(iParam0->f_28, &Var0, vParam3, 0.0f, 0.0f, 0.0f);
			iVar9 = 1;
		}
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_502("nbirdSquad") };
		iParam0->f_568 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(iParam0->f_28, &Var0));
		if (SQUAD_IS_VALID(iParam0->f_568))
		{
			Function_414(iParam0->f_28, iParam0->f_568, iParam8, bVar8, 1129, 0x41200000);
			Function_413(iParam0->f_568, 0);
		}
		if (iVar9 == 1)
		{
			DESTROY_OBJECT(bVar8);
		}
		Function_472(iParam0 + 572);
	}
	Function_472(iParam0 + 44);
	Function_411(0);
}

void Function_411(int iParam0) //Position: 0x12C4D / 76877
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, false, (iParam0 + Function_412(105)), 0);
	return;
}

int Function_412(int iParam0) //Position: 0x12C6E / 76910
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_413(bool bParam0, bool bParam1) //Position: 0x12C84 / 76932
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			SET_ACTOR_UPDATE_PRIORITY(bVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_414(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0x12CC5 / 76997
{
	vector3 vVar0;
	vector3 vVar3;
	struct<8> Var6;
	struct<2> Var14;
	bool bVar16;
	int iVar17;
	
	Function_427(10.0f);
	Var14 = { StackVal, Function_427(10.0f) };
	if (SQUAD_IS_VALID(bParam1))
	{
		if (!Function_252(bParam4) || bParam4 != 0)
		{
			bVar16 = Function_417(128, 0, 0, 4294967295, 0);
		}
		else
		{
			bVar16 = bParam4;
		}
		iVar17 = 0;
		while (iVar17 < (iParam2 - 1))
		{
			Function_415(&Var14, iVar17);
			GET_OBJECT_RELATIVE_POSITION(uParam3, Function_415(&Var14, iVar17), &vVar0);
			vVar0.f_4 = (vVar0.y + (fParam5 + RAND_FLOAT_RANGE(0.0f, 20.0f)));
			vVar3.f_4 = RAND_FLOAT_RANGE(0.0f, 360.0f);
			Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_502("genbird_") };
			SQUAD_JOIN(CREATE_ACTOR_IN_LAYOUT(bParam0, &Var6, bVar16, vVar0, vVar3), bParam1);
			iVar17++;
		}
	}
	else
	{
		LOG_ERROR("CREATE_BIRD_SQUAD_IN_LAYOUT - birdSquad passed in is not squad");
	}
}

vector3 Function_415(var uParam0, bool bParam1) //Position: 0x12DB7 / 77239
{
	vector3 vVar0;
	
	if (!Function_416(uParam0))
	{
		LOG_ERROR("Attempting to GET_FORMATION_POSITION with invalid FORMATION");
		return 0.0f, 0.0f, 0.0f;
	}
	if (bParam1 <= 0)
	{
		PRINTSTRING(GET_OBJECT_NAME(*uParam0));
		LOG_ERROR("Attempting to get invalid formation index - less than zero");
		return 0.0f, 0.0f, 0.0f;
	}
	if (bParam1 >= (GET_NUM_FORMATION_LOCATIONS(*uParam0) - 1))
	{
		PRINTSTRING(GET_OBJECT_NAME(*uParam0));
		PRINTSTRING(" ");
		PRINTINT(GET_NUM_FORMATION_LOCATIONS(*uParam0));
		PRINTNL();
		LOG_ERROR("Attempting to get invalid formation index - too large!");
		return 0.0f, 0.0f, 0.0f;
	}
	GET_FORMATION_LOCATION(*uParam0, bParam1, &vVar0);
	vVar0.x = (StackVal * vVar0.x);
	vVar0.f_4 = (StackVal * vVar0.y);
	vVar0.f_8 = (StackVal * vVar0.z);
	return StackVal, StackVal, vVar0;
}

bool Function_416(int iParam0) //Position: 0x12EF8 / 77560
{
	if (!IS_OBJECT_VALID(*iParam0))
	{
		return 0;
	}
	if (!GET_OBJECT_TYPE(*iParam0) != 30)
	{
		return 0;
	}
	return 1;
}

var Function_417(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x12F1A / 77594
{
	return Function_418(iParam0, iParam1, iParam2, iParam3, iParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_418(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, vector3 vParam6) //Position: 0x12F33 / 77619
{
	switch (iParam0)
	{
		case 0x00000001:
			return Function_421(StackVal, StackVal, Global_30750[0], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000002:
			return Function_421(StackVal, StackVal, Global_30750[1], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000004:
			return Function_421(StackVal, StackVal, Global_30750[2], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000008:
			return Function_421(StackVal, StackVal, Global_30750[3], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000010:
			return Function_421(StackVal, StackVal, Global_30750[4], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000020:
			return Function_421(StackVal, StackVal, Global_30750[5], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000040:
			return Function_421(StackVal, StackVal, Global_30750[6], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000080:
			return Function_421(StackVal, StackVal, Global_30750[7], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000100:
			return Function_421(StackVal, StackVal, Global_30750[8], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000200:
			return Function_421(StackVal, StackVal, Global_30750[9], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000400:
			return Function_421(StackVal, StackVal, Global_30750[10], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000800:
			return Function_421(StackVal, StackVal, Global_30750[11], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00001000:
			return Function_421(StackVal, StackVal, Global_30750[12], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00002000:
			return Function_421(StackVal, StackVal, Global_30750[13], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return Function_419(StackVal, StackVal, iParam0, bParam1, bParam2, iParam5, vParam6);
}

var Function_419(var uParam0, bool bParam1, bool bParam2, int iParam3, vector3 vParam4) //Position: 0x13188 / 78216
{
	bool bVar0;
	
	bVar0 = CREATE_POPULATION_SET(0);
	if (uParam0 & 1 == 1)
	{
		Function_420(Global_30750[0], bVar0);
	}
	if (uParam0 & 2 == 2)
	{
		Function_420(Global_30750[1], bVar0);
	}
	if (uParam0 & 4 == 4)
	{
		Function_420(Global_30750[2], bVar0);
	}
	if (uParam0 & 8 == 8)
	{
		Function_420(Global_30750[3], bVar0);
	}
	if (uParam0 & 16 == 16)
	{
		Function_420(Global_30750[4], bVar0);
	}
	if (uParam0 & 32 == 32)
	{
		Function_420(Global_30750[5], bVar0);
	}
	if (uParam0 & 64 == 64)
	{
		Function_420(Global_30750[6], bVar0);
	}
	if (uParam0 & 128 == 128)
	{
		Function_420(Global_30750[7], bVar0);
	}
	if (uParam0 & 256 == 256)
	{
		Function_420(Global_30750[8], bVar0);
	}
	if (uParam0 & 512 == 512)
	{
		Function_420(Global_30750[9], bVar0);
	}
	if (uParam0 & 1024 == 1024)
	{
		Function_420(Global_30750[10], bVar0);
	}
	if (uParam0 & 2048 == 2048)
	{
		Function_420(Global_30750[11], bVar0);
	}
	if (uParam0 & 4096 == 4096)
	{
		Function_420(Global_30750[12], bVar0);
	}
	if (uParam0 & 8192 == 8192)
	{
		Function_420(Global_30750[13], bVar0);
	}
	return Function_421(StackVal, StackVal, bVar0, bParam1, bParam2, 4294967295, 0, iParam3, vParam4);
}

void Function_420(bool bParam0, bool bParam1) //Position: 0x132D9 / 78553
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

var Function_421(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, vector3 vParam6) //Position: 0x13397 / 78743
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
		Function_426();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, bParam4, iParam5, vParam6);
	if (!Function_252(bVar1))
	{
		if (!Global_30837 && !Global_30838)
		{
			Function_425(bParam0, bParam1, bParam2, bParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_425(bParam0, bParam1, bParam2, bParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && bParam3 != 4294967295)
		{
			while (Function_424(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_252(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_424(bVar0))
				{
					Function_423();
				}
				Function_422(bVar0);
			}
		}
		else if (!bParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != bParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_252(bVar1))
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

void Function_422(int iParam0) //Position: 0x1368A / 79498
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

void Function_423() //Position: 0x1373E / 79678
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

bool Function_424(bool bParam0) //Position: 0x13778 / 79736
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

void Function_425(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x137A5 / 79781
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

void Function_426() //Position: 0x138F6 / 80118
{
	int iVar0;
	
	if (Global_3402)
	{
		if (StackVal || !Global_30742 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_423();
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
	Function_423();
	return;
}

struct<8> Function_427(int iParam0) //Position: 0x13941 / 80193
{
	Function_428(iParam0, 10);
	return StackVal, Function_428(iParam0, 10);
}

struct<8> Function_428(var uParam0, int iParam1) //Position: 0x1394E / 80206
{
	struct<2> Var0;
	
	Var0.f_4 = uParam0;
	Var0 = Global_26121[iParam1];
	return StackVal, Var0;
}

void Function_429(int iParam0, int iParam1) //Position: 0x13967 / 80231
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	
	if (!Function_21(iParam0))
	{
		Function_83();
		return;
	}
	iVar0 = Function_20(iParam0);
	Global_13172[iParam011].f_4 = 1;
	if (!Global_34165.f_36 && iParam1)
	{
		Function_97(1);
	}
	if (iVar0 == 1)
	{
		Global_6269 = Function_18(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_13(Global_6269) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		SET_JOURNAL_ENTRY_PROGRESS(bVar11, -2.0f, false, 0);
		CLEAR_JOURNAL_ENTRY(bVar11);
		APPEND_JOURNAL_ENTRY(bVar11, 0);
	}
	return;
}

void Function_430(int iParam0) //Position: 0x13A0D / 80397
{
	struct<8> Var0;
	
	if (!IS_LAYOUTREF_VALID(iParam0->f_28))
	{
		strcpy(&Var0, "procMisslayout", 32);
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_502(&Var0) };
		iParam0->f_28 = CREATE_LAYOUT(&Var0);
		if (!IS_LAYOUTREF_VALID(iParam0->f_28))
		{
			LOG_ERROR("couldn't create internal procmission layout");
		}
	}
	return;
}

void Function_431(var uParam0, int iParam1) //Position: 0x13A82 / 80514
{
	uParam0->f_488 = iParam1;
	return;
}

void Function_432(var uParam0, int iParam1) //Position: 0x13A8F / 80527
{
	uParam0->f_484 = iParam1;
	return;
}

void Function_433(int iParam0, int iParam1) //Position: 0x13A9C / 80540
{
	if (Function_19(iParam1))
	{
		iParam0->f_624 = iParam1;
		Function_380(iParam0 + 584, 32);
	}
	else
	{
		LOG_ERROR("PROCMISSION_SET_DEED received an invalid deed");
	}
	return;
}

int Function_434(bool bParam0, bool bParam1, bool bParam2) //Position: 0x13AF1 / 80625
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_437(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_435(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_435(bParam0, bParam1, bParam2, 4294967295);
}

int Function_435(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x13B4F / 80719
{
	var uVar0;
	
	if (!Function_325(bParam2))
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
	uVar0 = Function_437(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_436(uVar0);
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

int Function_436(int iParam0) //Position: 0x13CA4 / 81060
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

var Function_437(int iParam0, int iParam1, int iParam2) //Position: 0x13CE2 / 81122
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

bool Function_438(int iParam0) //Position: 0x13D02 / 81154
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	struct<8> Var6;
	vector3 vVar14;
	vector3 vVar17;
	vector3 vVar20;
	var uVar23;
	bool bVar26;
	
	uVar2 = 3;
	Function_470();
	if (Function_45(StackVal, StackVal, Function_470()))
	{
		if (!Function_467(iParam0))
		{
			LOG_ERROR("TRANSPORT could not find a suitable starting position");
			return 0;
		}
	}
	Function_470();
	Function_466(StackVal, StackVal, iParam0, Function_470(), 0.0f, 0.0f, 0.0f);
	Function_231(iParam0);
	if (StackVal || Function_45(StackVal, !IS_LAYOUTREF_VALID(iParam0->f_776), Function_231(iParam0)))
	{
		return 0;
	}
	if (!Function_319() != 4294967295)
	{
		Function_465(iParam0, Function_319());
	}
	if (IS_ACTOR_VALID(Function_464()))
	{
		Function_463(iParam0, Function_464());
		GIVE_OBJECT_TO_LAYOUT(iParam0->f_860, iParam0->f_776);
	}
	if (!Function_381(iParam0->f_780, 16384))
	{
		if (Function_252(iParam0->f_864) && !iParam0->f_864 != 0)
		{
			Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_502("transVeh") };
			Function_231(iParam0);
			iParam0->f_860 = Function_459(StackVal, StackVal, StackVal, StackVal, iParam0->f_776, &Var6, iParam0->f_864, 977, Function_231(iParam0), *(iParam0 + 900), 1, 976, 976, 976, 4);
			Function_231(iParam0);
			vVar20 = { StackVal, StackVal, Function_231(iParam0) };
			strcpy(&Var6, GET_ACTOR_ENUM_STRING_FROM_ENUM(iParam0->f_864), 32);
		}
		else
		{
			return 0;
		}
	}
	if (!Function_381(iParam0->f_780, 16384))
	{
		if (!IS_ACTOR_VALID(iParam0->f_860))
		{
			return 0;
		}
	}
	bVar26 = false;
	while (bVar26 < (GET_NUM_DRAFT_POSITIONS(iParam0->f_860) - 1))
	{
		bVar0 = GET_DRAFT_ACTOR(bVar26, iParam0->f_860);
		if (IS_ACTOR_VALID(bVar0))
		{
			SET_ACTOR_CAN_BE_HARDLOCKED(bVar0, 0);
		}
		bVar26++;
	}
	if (iParam0->f_628 != 3 && !Function_381(iParam0->f_780, 16384))
	{
		Function_457(iParam0->f_860, &uVar2);
	}
	Function_455(iParam0, Function_456());
	Function_453(iParam0, Function_454());
	if (IS_ACTOR_VALID(Function_452()))
	{
		Function_451(iParam0, Function_452());
	}
	else if (Function_252(Function_450()))
	{
		Function_449(iParam0, Function_450());
	}
	if (Function_381(iParam0->f_780, 8))
	{
		if (IS_ACTOR_VALID(Function_452()))
		{
			Function_451(iParam0, Function_452());
		}
		if (!Function_381(iParam0->f_780, 8192))
		{
			if (!Function_252(iParam0->f_956))
			{
				LOG_ERROR("Invalid transport companion actorenum?");
				iParam0->f_956 = Function_417(4, 0, 0, 4294967295, 0);
			}
			Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_502("transportComp") };
			vVar14.x = 3.0f;
			vVar14.f_4 = 3.0f;
			vVar14.f_8 = 1.0f;
			Function_128();
			vVar17 = { StackVal, StackVal, Function_128() };
			iParam0->f_952 = Function_447(StackVal, StackVal, StackVal, StackVal, iParam0->f_776, &Var6, iParam0->f_956, vVar14, vVar17, GET_OBJECT_FROM_ACTOR(iParam0->f_860));
		}
		if (!IS_ACTOR_VALID(iParam0->f_952))
		{
			return 0;
		}
		MEMORY_CONSIDER_AS(iParam0->f_952, Global_34573, 5);
		MEMORY_IDENTIFY(iParam0->f_952, Global_34573);
		MEMORY_REPORT_POSITION_AUTO(iParam0->f_952, Global_34573, 1);
		SET_ACTOR_CAN_BE_HARDLOCKED(iParam0->f_952, 0);
		SET_ACTOR_UPDATE_PRIORITY(iParam0->f_952, false);
		TASK_CLEAR(iParam0->f_952);
		MAKE_ACTOR_READY_FOR_ACTION(iParam0->f_952, 1);
	}
	if (IS_OBJECTSET_VALID(Function_446()))
	{
		iParam0->f_968 = Function_446();
	}
	if (IS_ACTOR_VALID(Function_445()))
	{
		Function_443(iParam0, Function_445());
	}
	else if (Function_252(Function_442()))
	{
		Function_441(iParam0, Function_442());
	}
	if (Function_381(iParam0->f_780, 16))
	{
		if (IS_ACTOR_VALID(Function_445()))
		{
			Function_443(iParam0, Function_445());
		}
		if (!Function_381(iParam0->f_780, 4096))
		{
			if (!Function_252(iParam0->f_964))
			{
				LOG_ERROR("Invalid transport passenger actorenum?");
				iParam0->f_964 = Function_417(2, 0, 0, 4294967295, 0);
			}
			Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_502("transportPass") };
			vVar14.x = 3.0f;
			vVar14.f_4 = 3.0f;
			vVar14.f_8 = 1.0f;
			Function_128();
			vVar17 = { StackVal, StackVal, Function_128() };
			iParam0->f_960 = Function_447(StackVal, StackVal, StackVal, StackVal, iParam0->f_776, &Var6, iParam0->f_964, vVar14, vVar17, GET_OBJECT_FROM_ACTOR(iParam0->f_860));
		}
		if (!IS_ACTOR_VALID(iParam0->f_960))
		{
			return 0;
		}
		if (iParam0->f_628 == 1)
		{
			Function_440(iParam0);
		}
		else if (iParam0->f_628 == 2)
		{
			Function_439(iParam0);
		}
		MEMORY_CONSIDER_AS(iParam0->f_960, Function_105(), 5);
		MEMORY_IDENTIFY(iParam0->f_960, Function_105());
		MEMORY_REPORT_POSITION_AUTO(iParam0->f_960, Function_105(), 1);
		DELETE_ALL_INVENTORY_FROM_ACTOR(iParam0->f_960);
		SET_ACTOR_CAN_BE_HARDLOCKED(iParam0->f_960, 0);
		TASK_CLEAR(iParam0->f_960);
	}
	if (iParam0->f_628 == 1)
	{
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_502("transCorpse") };
		GET_OBJECT_RELATIVE_POSITION(GET_OBJECT_FROM_ACTOR(iParam0->f_952), 1.0f, 0.0f, 0.0f, &vVar20);
		GET_OBJECT_RELATIVE_POSITION(GET_OBJECT_FROM_ACTOR(iParam0->f_952), 0.0f, 0.0f, -1.0f, &uVar23);
		if (FIND_GROUND_INTERSECTION(&vVar20, 50.0f, &vVar14, &vVar17))
		{
			bVar1 = CREATE_CORPSE_IN_LAYOUT(iParam0->f_776, &Var6, iParam0->f_956, vVar14, vVar17, "dead_ground_male", "inj_deadpose_1");
		}
		else if (FIND_GROUND_INTERSECTION(&uVar23, 50.0f, &vVar14, &vVar17))
		{
			bVar1 = CREATE_CORPSE_IN_LAYOUT(iParam0->f_776, &Var6, iParam0->f_956, vVar14, vVar17, "dead_ground_male", "inj_deadpose_1");
		}
		if (!IS_OBJECT_VALID(bVar1))
		{
		}
	}
	return 1;
}

int Function_439(int iParam0) //Position: 0x14248 / 82504
{
	struct<8> Var0;
	vector3 vVar8;
	vector3 vVar11;
	
	if (IS_ACTOR_VALID(iParam0->f_960))
	{
		strcpy(&Var0, "ntranslook", 32);
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_502(&Var0) };
		vVar8 = { 0.0f, 0.0f, 0.0f };
		vVar11 = { 0.0f, 0.0f, 0.0f };
		TASK_CLEAR(iParam0->f_960);
		TASK_STAND_STILL(iParam0->f_960, -1.0f, 0, 0);
		TASK_PRIORITY_SET(iParam0->f_960, 1);
		vVar8 = { 0.0f, 1.35f, 0.4f };
		vVar11 = { 0.0f, 0.0f, 0.0f };
		iParam0->f_868 = ATTACH_OBJECTS_NO_DRV(iParam0->f_960, GET_OBJECT_FROM_ACTOR(iParam0->f_860), Function_395(), vVar8, vVar11);
		SET_ANIM_SET_FOR_ACTOR(iParam0->f_960, "lay_wounded_psg", 0);
		SET_ACTION_NODE_FOR_ACTOR(iParam0->f_960, "lay_wounded_psg/1");
		return 1;
	}
	return 0;
}

int Function_440(int iParam0) //Position: 0x1430F / 82703
{
	if (!IS_ACTOR_VALID(iParam0->f_960))
	{
		return 0;
	}
	SET_ACTOR_IN_VEHICLE(iParam0->f_960, iParam0->f_860, 2);
	TASK_CLEAR(iParam0->f_960);
	TASK_STAND_STILL(iParam0->f_960, -1.0f, 0, 0);
	TASK_PRIORITY_SET(iParam0->f_960, 1);
	return 1;
}

int Function_441(int iParam0, bool bParam1) //Position: 0x1434F / 82767
{
	if (!Function_252(bParam1))
	{
		return 0;
	}
	iParam0->f_964 = bParam1;
	return 1;
}

bool Function_442() //Position: 0x14368 / 82792
{
	return DECOR_GET_INT(Function_58(), "trnsPassengerAE");
}

int Function_443(int iParam0, bool bParam1) //Position: 0x14386 / 82822
{
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	iParam0->f_960 = bParam1;
	iParam0->f_964 = Function_444(GET_OBJECT_FROM_ACTOR(bParam1));
	Function_380(iParam0 + 780, 4096);
	GIVE_OBJECT_TO_LAYOUT(iParam0->f_960, iParam0->f_776);
	return 1;
}

var Function_444(bool bParam0) //Position: 0x143C5 / 82885
{
	if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bParam0)))
	{
		return GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bParam0));
	}
	return 4294967295;
}

bool Function_445() //Position: 0x143E0 / 82912
{
	return GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(Function_58(), "trnsPassenger"));
}

var Function_446() //Position: 0x143FF / 82943
{
	return GET_OBJECTSET_FROM_OBJECT(DECOR_GET_OBJECT(Function_58(), "trnsNecActors"));
}

var Function_447(bool bParam0, bool bParam1, bool bParam2, vector3 vParam3, vector3 vParam6, bool bParam9) //Position: 0x1441E / 82974
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	
	vVar0 = { StackVal, StackVal, vParam3 };
	vVar3 = { StackVal, StackVal, vParam6 };
	Function_448(bParam9, 0, &vVar0, &vVar3);
	bVar6 = CREATE_ACTOR_IN_LAYOUT(bParam0, bParam1, bParam2, vVar0, vVar3);
	SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_ACTOR(bVar6), 50.0f, false, 1092616192);
	return bVar6;
}

void Function_448(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x14469 / 83049
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (GET_OBJECT_RELATIVE_POSITION(bParam0, *uParam2, &vVar0))
	{
		if (bParam1)
		{
			if (!Function_397(&vVar0, uParam2))
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

int Function_449(int iParam0, int iParam1) //Position: 0x14591 / 83345
{
	if (!Function_252(iParam1))
	{
		return 0;
	}
	iParam0->f_956 = iParam1;
	return 1;
}

int Function_450() //Position: 0x145AA / 83370
{
	return DECOR_GET_INT(Function_58(), "trnsCompanionAE");
}

int Function_451(int iParam0, bool bParam1) //Position: 0x145C8 / 83400
{
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	iParam0->f_952 = bParam1;
	iParam0->f_956 = Function_444(GET_OBJECT_FROM_ACTOR(bParam1));
	Function_380(iParam0 + 780, 8192);
	GIVE_OBJECT_TO_LAYOUT(iParam0->f_952, iParam0->f_776);
	return 1;
}

bool Function_452() //Position: 0x14607 / 83463
{
	return GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(Function_58(), "trnsCompanion"));
}

void Function_453(int iParam0, int iParam1) //Position: 0x14626 / 83494
{
	if (iParam1 == 1)
	{
		Function_380(iParam0 + 780, 16);
	}
	else
	{
		Function_60(iParam0 + 780, 16);
	}
	return;
}

int Function_454() //Position: 0x14649 / 83529
{
	if (DECOR_CHECK_EXIST(Function_58(), "trnsNeedPass"))
	{
		return DECOR_GET_BOOL(Function_58(), "trnsNeedPass");
	}
	return 0;
}

void Function_455(int iParam0, int iParam1) //Position: 0x14681 / 83585
{
	if (iParam1 == 1)
	{
		Function_380(iParam0 + 780, 8);
	}
	else
	{
		Function_60(iParam0 + 780, 8);
	}
	return;
}

int Function_456() //Position: 0x146A4 / 83620
{
	if (DECOR_CHECK_EXIST(Function_58(), "trnsNeedComp"))
	{
		return DECOR_GET_BOOL(Function_58(), "trnsNeedComp");
	}
	return 0;
}

void Function_457(bool bParam0, int iParam1) //Position: 0x146DC / 83676
{
	bool bVar0;
	bool bVar1[3];
	vector3 vVar5;
	vector3 vVar8[3];
	vector3 vVar18[3];
	struct<4> Var28[3];
	var uVar41[3];
	int iVar45;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	bVar0 = Function_458(GET_OBJECT_FROM_ACTOR(bParam0));
	if (IS_LAYOUTREF_VALID(bVar0))
	{
		GET_POSITION(bParam0, &vVar5);
		vVar8[03] = { 0.1f, 1.22f, 0.0f };
		vVar8[13] = { 0.05f, 1.22f, 0.3f };
		vVar8[23] = { -0.1f, 1.22f, 0.45f };
		vVar18[03] = { 0.0f, 0.0f, 0.0f };
		vVar18[13] = { 0.0f, 95.0f, 0.0f };
		vVar18[23] = { 0.0f, -135.0f, 0.0f };
		memcpy(&(Var28[04]), StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_502("ntransTntA"), 4);
		memcpy(&(Var28[14]), StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_502("ntransTntB"), 4);
		memcpy(&(Var28[24]), StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_502("ntransTntC"), 4);
		uVar41[0] = "tranExplo0";
		uVar41[1] = "tranExplo1";
		uVar41[2] = "tranExplo2";
		iVar45 = 0;
		while (iVar45 < 2)
		{
			if (!IS_OBJECT_VALID(bVar1[iVar45]))
			{
				bVar1[iVar45] = CREATE_PROP_IN_LAYOUT(bVar0, &(Var28[iVar454]), "$/fragments/p_gen_crateTnt01x", vVar5, 0.0f, 0.0f, 0.0f, 1);
				SET_OBJECT_COLLIDE_WITH_OBJECT(bVar1[iVar45], bParam0, 0);
				SET_OBJECT_COLLIDE_WITH_WORLD(bVar1[iVar45], 0);
				(*iParam1)[iVar45] = bVar1[iVar45];
				if (IS_OBJECT_VALID(bVar1[iVar45]))
				{
					ATTACH_OBJECTS(bVar1[iVar45], bParam0, Function_395(), vVar8[iVar453], vVar18[iVar453], 4294967295);
					GIVE_OBJECT_TO_ACTOR(bVar1[iVar45], bParam0);
					DECOR_SET_OBJECT(bParam0, uVar41[iVar45], bVar1[iVar45]);
				}
			}
			iVar45++;
		}
	}
	else
	{
		LOG_ERROR("TRANSPORT_ATTACH_EXPLOSIVES got an invalid layout from the object.");
	}
	return;
}

var Function_458(bool bParam0) //Position: 0x1490F / 84239
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		if (GET_OBJECT_TYPE(bParam0) == 1)
		{
			bVar0 = GET_LAYOUT_FROM_OBJECT(bParam0);
		}
		while (!IS_LAYOUTREF_VALID(bVar0) && IS_OBJECT_VALID(bParam0))
		{
			bParam0 = GET_OBJECT_OWNER(bParam0);
			if (GET_OBJECT_TYPE(bParam0) == 1)
			{
				bVar0 = GET_LAYOUT_FROM_OBJECT(bParam0);
			}
		}
		if (IS_LAYOUTREF_VALID(bVar0))
		{
			return bVar0;
		}
	}
	return "";
}

var Function_459(bool bParam0, bool bParam1, bool bParam2, int iParam3, vector3 vParam4, vector3 vParam7, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14) //Position: 0x14969 / 84329
{
	bool bVar0;
	int iVar1[6];
	bool bVar8;
	int iVar9;
	int iVar10;
	char* cVar11[16];
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	
	bVar0 = CREATE_ACTOR_IN_LAYOUT(bParam0, bParam1, bParam2, vParam4, vParam7);
	if (!IS_ACTOR_VALID(bVar0))
	{
		LOG_ERROR("Tried to create coach, but the coach was invalid");
		return bVar0;
	}
	bVar8 = UNK_0x65C3D8F6();
	if (IS_ACTOR_DRAFT_VEHICLE(bVar0))
	{
		iVar10 = GET_NUM_DRAFT_POSITIONS(bVar0);
		if (iParam14 > iVar10 && iParam14 < 0)
		{
			iVar10 = iParam14;
		}
		iVar9 = 0;
		while (iVar9 < (iVar10 - 1))
		{
			strcpy(&cVar11, "Draft", 16);
			straddi(&cVar11, iVar9, 16);
			bVar15 = "";
			if (Function_462(Global_30750[6], 4, 23, 0) && iParam10)
			{
				bVar16 = Function_461(StackVal, StackVal, Global_30750[6], vParam4, 4, 23, 0);
				if (Function_460(bVar16, &iVar1))
				{
					bVar16 = 976;
				}
				iVar1[iVar9] = bVar16;
				bVar15 = CREATE_ACTOR_IN_LAYOUT(bVar0, &cVar11, bVar16, vParam4, vParam7);
			}
			bVar17 = 4294967295;
			if (!IS_ACTOR_VALID(bVar15))
			{
				switch (iVar9)
				{
					case 0x00000000:
						bVar17 = iParam3;
						break;
					
					case 0x00000001:
						bVar17 = iParam11;
						break;
					
					case 0x00000002:
						bVar17 = iParam12;
						break;
					
					case 0x00000003:
						bVar17 = iParam13;
						break;
					
					default:
						bVar17 = iParam3;
						break;
				}
				if ((bVar17 != 4294967295 || bVar17 > 976) || bVar17 < 1007)
				{
					LOG_ERROR("Malformed Coach horses");
					return bVar0;
				}
				bVar15 = CREATE_ACTOR_IN_LAYOUT(bVar0, &cVar11, bVar17, vParam4, vParam7);
			}
			if (IS_ACTOR_VALID(bVar15))
			{
				ATTACH_DRAFT_TO_VEHICLE(bVar15, bVar0, iVar9, 1);
			}
			else
			{
				LOG_ERROR("Tried to create coach, but one of the horses couldn't be created");
				return bVar0;
			}
			iVar9++;
		}
		if (!bVar8)
		{
			ACCESSORIZE_VEHICLE_HORSES(bVar0, 5);
		}
	}
	if (bParam2 == 1197)
	{
		bVar18 = 2;
		while (bVar18 < (GET_NUM_AVAILABLE_SEATS(bVar0) - 1))
		{
			ENABLE_VEHICLE_SEAT(bVar0, bVar18, 0);
			bVar18++;
		}
	}
	return bVar0;
}

bool Function_460(int iParam0, int iParam1) //Position: 0x14B9D / 84893
{
	int iVar0;
	
	if (iParam0 == 976)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= *iParam1)
	{
		if ((*iParam1)[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var Function_461(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6) //Position: 0x14BCF / 84943
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam4, bParam5, bParam6, 1, vParam1);
}

int Function_462(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x14BE7 / 84967
{
	if (!IS_POPSET_VALID(bParam0))
	{
		return 0;
	}
	if (bParam3)
	{
		return 1;
	}
	return IS_POPULATION_SET_READY(bParam0, bParam1, bParam2);
}

int Function_463(int iParam0, bool bParam1) //Position: 0x14C0E / 85006
{
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	iParam0->f_860 = bParam1;
	iParam0->f_864 = Function_444(GET_OBJECT_FROM_ACTOR(bParam1));
	Function_380(iParam0 + 780, 16384);
	return 1;
}

var Function_464() //Position: 0x14C3F / 85055
{
	return GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(Function_58(), "trnsVehicle"));
}

int Function_465(int iParam0, int iParam1) //Position: 0x14C5C / 85084
{
	if (!iParam0->f_628 != 0)
	{
		return 0;
	}
	if (iParam1 > 5)
	{
		LOG_ERROR("Invalid mission type passed to TRANSPORT_SET_MISSION_TYPE");
		return 0;
	}
	iParam0->f_628 = iParam1;
	return 1;
}

int Function_466(int iParam0, vector3 vParam1, vector3 vParam4) //Position: 0x14CBE / 85182
{
	if (Function_45(StackVal, StackVal, vParam1))
	{
		LOG_ERROR("Invalid StartPos");
		return 0;
	}
	Function_294(StackVal, StackVal, iParam0, vParam1);
	*(iParam0 + 888) = { StackVal, StackVal, vParam1 };
	*(iParam0 + 900) = { StackVal, StackVal, vParam4 };
	return 1;
}

bool Function_467(bool bParam0) //Position: 0x14D0A / 85258
{
	struct<15> Var0;
	struct<11> Var15;
	vector3 vVar26;
	var uVar29;
	int iVar32;
	vector3 vVar33;
	var uVar36;
	var uVar39;
	vector3 vVar42;
	
	Function_231(bParam0);
	if (Function_45(StackVal, StackVal, Function_231(bParam0)))
	{
		iVar32 = 0;
		Function_264(&Var0, 1, 5.0f, 64, 4294967295);
		Function_263(StackVal, StackVal, &Var15, 0, vVar26, 0.0f, 25.0f, 75.0f, 0, 0x40a00000, 0);
		Function_256(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var15, Var0, 1);
		vVar26 = { StackVal, StackVal, Function_256(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var15, Var0, 1) };
		while (Function_45(StackVal, StackVal, vVar26) && iVar32 > 10)
		{
			Function_256(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var15, Var0, 1);
			vVar26 = { StackVal, StackVal, Function_256(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var15, Var0, 1) };
			if (Function_45(StackVal, StackVal, vVar26))
			{
				iVar32++;
			}
			else
			{
				iVar32 = 100;
			}
		}
		if (Function_45(StackVal, StackVal, vVar26))
		{
			LOG_ERROR("Couldn't create spawn point for transport");
			return 0;
		}
		Function_231(bParam0);
		vVar26 = { StackVal, StackVal, Function_231(bParam0) };
		if (!FIND_GROUND_INTERSECTION(&vVar26, 100.0f, &vVar26, &uVar29))
		{
			PRINTVECTOR(vVar26);
		}
		Function_231(bParam0);
		if (Function_468(StackVal, StackVal, Function_231(bParam0), 0.0f, 60.0f, &vVar33, &uVar36, &uVar39, 0x41c80000, 0))
		{
			Function_231(bParam0);
			vVar42 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar33, Function_231(bParam0), StackVal) };
			*(bParam0 + 900) = { 0.0f, 0.0f, 0.0f };
			(bParam0 + 900)->f_4 = UNK_0x9C40E671(&vVar42);
		}
	}
	return 1;
}

bool Function_468(vector3 vParam0, float fParam3, float fParam4, var uParam5, var uParam6, var uParam7, float fParam8, bool bParam9) //Position: 0x14E34 / 85556
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	bool bVar7;
	struct<6> Var8;
	struct<6> Var14;
	var uVar20;
	bool bVar26;
	bool bVar27;
	bool bVar28;
	int iVar29;
	
	Function_128();
	vVar0 = { StackVal, StackVal, Function_128() };
	bVar26 = -1.0f;
	if (bParam9)
	{
		bVar7 = START_CURVE_QUERY(Global_28841, vParam0, 2096, fParam3, fParam4, 20.0f, 0);
	}
	else
	{
		bVar7 = START_CURVE_QUERY(Global_28841, vParam0, 16, fParam3, fParam4, 2.0f, 0);
	}
	if (!IS_CURVE_QUERY_VALID(bVar7))
	{
		UNK_0xDF93BD7C(bVar7);
	}
	else if (!GET_NUM_POINTS_IN_CURVE_QUERY(bVar7) < 0)
	{
		UNK_0xDF93BD7C(bVar7);
	}
	else
	{
		iVar29 = GET_NUM_POINTS_IN_CURVE_QUERY(bVar7);
		bVar27 = false;
		while (bVar27 < (iVar29 - 1))
		{
			GET_POINT_FROM_CURVE_QUERY(bVar7, bVar27, &Var8);
			Function_469(&Var8);
			vVar3 = { StackVal, StackVal, Function_469(&Var8) };
			if (bVar26 > 0.0f || bVar26 < VDIST(vParam0, vVar3))
			{
				Var14 = { StackVal, StackVal, StackVal, StackVal, StackVal, Var8 };
				bVar26 = VDIST(vParam0, vVar3);
				bVar28 = bVar27;
				vVar0 = { StackVal, StackVal, vVar3 };
			}
			bVar27++;
		}
		bVar6 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(bVar7, bVar28);
		*uParam5 = { StackVal, StackVal, vVar0 };
		if (fParam8 >= 0.0f)
		{
			fParam8 = 25.0f;
		}
		if (IS_OBJECT_VALID(bVar6))
		{
			UNK_0x19D652F9(bVar6, fParam8, &Var14, &uVar20);
			Function_469(&uVar20);
			*uParam6 = { StackVal, StackVal, Function_469(&uVar20) };
			UNK_0x19D652F9(bVar6, -fParam8, &Var14, &uVar20);
			Function_469(&uVar20);
			*uParam7 = { StackVal, StackVal, Function_469(&uVar20) };
		}
		else
		{
			Function_128();
			*uParam7 = { StackVal, StackVal, Function_128() };
			Function_128();
			*uParam6 = { StackVal, StackVal, Function_128() };
		}
		UNK_0xDF93BD7C(bVar7);
		return 1;
	}
	return 0;
}

vector3 Function_469(var uParam0) //Position: 0x14F70 / 85872
{
	vector3 vVar0;
	
	vVar0.x = *uParam0;
	vVar0.f_4 = StackVal;
	vVar0.f_8 = StackVal;
	return StackVal, StackVal, vVar0;
}

vector3 Function_470() //Position: 0x14F8F / 85903
{
	vector3 vVar0;
	
	vVar0.x = DECOR_GET_FLOAT(Function_58(), "trnsStartPosX");
	vVar0.f_4 = DECOR_GET_FLOAT(Function_58(), "trnsStartPosY");
	vVar0.f_8 = DECOR_GET_FLOAT(Function_58(), "trnsStartPosZ");
	return StackVal, StackVal, vVar0;
}

void Function_471(int iParam0, int iParam1) //Position: 0x14FE5 / 85989
{
	if (!Function_21(iParam0))
	{
		return;
	}
	Global_13172[iParam011].f_16 = iParam1;
	return;
}

void Function_472(int iParam0) //Position: 0x15000 / 86016
{
	Function_473(iParam0, 0.0f);
	return;
}

void Function_473(int iParam0, float fParam1) //Position: 0x1500C / 86028
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_380(iParam0, 1);
	Function_60(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

void Function_474(int iParam0) //Position: 0x1502D / 86061
{
	if (!Function_475(iParam0))
	{
		Function_473(iParam0, 0.0f);
	}
	return;
}

bool Function_475(int iParam0) //Position: 0x15042 / 86082
{
	return Function_381(*iParam0, 1);
}

bool Function_476(var uParam0, int iParam1) //Position: 0x1504F / 86095
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_477(bool bParam0) //Position: 0x1506B / 86123
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
			AI_IGNORE_ACTOR(bVar1);
		}
		bVar0++;
	}
	return;
}

void Function_478(bool bParam0, bool bParam1, int iParam2) //Position: 0x150AA / 86186
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!SQUAD_IS_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			Function_203(bVar1, bParam1, iParam2);
		}
		bVar0++;
	}
	return;
}

bool Function_479(bool bParam0, bool bParam1) //Position: 0x150F9 / 86265
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		LOG_ERROR("FIND_NAMED_SQUAD_IN_LAYOUT: Invalid layoutref passed in.");
		return bVar0;
	}
	bVar2 = CREATE_OBJECT_ITERATOR(bParam1);
	ITERATE_ON_OBJECT_TYPE(bVar2, 25);
	bVar3 = START_OBJECT_ITERATOR(bVar2);
	while (IS_OBJECT_VALID(bVar3) && !bVar1)
	{
		bVar4 = GET_OBJECT_NAME(bVar3);
		if (STRING_CONTAINS_STRING(bVar4, bParam0) || Function_480(bParam0, bVar4))
		{
			bVar1 = true;
			bVar0 = GET_SQUAD_FROM_OBJECT(bVar3);
		}
		else
		{
			bVar3 = OBJECT_ITERATOR_NEXT(bVar2);
		}
	}
	DESTROY_ITERATOR(bVar2);
	return bVar0;
}

int Function_480(char* cParam0, char* cParam1) //Position: 0x151A1 / 86433
{
	char* cVar0[64];
	char* cVar16[64];
	
	strcpy(&cVar0, cParam0, 64);
	strcpy(&cVar16, cParam1, 64);
	STRING_LOWER(&cVar0);
	STRING_LOWER(&cVar16);
	if (STRINGS_ARE_EQUAL(&cVar0, &cVar16))
	{
		return 1;
	}
	return 0;
}

vector3 Function_481(bool bParam0) //Position: 0x151CC / 86476
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (!IS_OBJECT_VALID(bParam0))
	{
		return StackVal, StackVal, vVar0;
	}
	GET_OBJECT_ORIENTATION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

vector3 Function_482(bool bParam0) //Position: 0x151F3 / 86515
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (!IS_OBJECT_VALID(bParam0))
	{
		return StackVal, StackVal, vVar0;
	}
	GET_OBJECT_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

int Function_483(int iParam0, bool bParam1) //Position: 0x1521A / 86554
{
	if (!IS_ACTOR_VALID(bParam1) || !IS_ACTOR_VEHICLE(bParam1))
	{
		LOG_ERROR("TRANSPORT_SET_CUSTOM_VEHICLE recieved an invalid vehicle");
		return 0;
	}
	if (IS_ACTOR_VALID(iParam0->f_860))
	{
		LOG_ERROR("TRANSPORT_SET_CUSTOM_VEHICLE - system already has a vehicle set");
		return 0;
	}
	iParam0->f_860 = bParam1;
	iParam0->f_864 = Function_444(GET_OBJECT_FROM_ACTOR(bParam1));
	Function_380(iParam0 + 780, 16384);
	return 1;
}

bool Function_484(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x152E2 / 86754
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	bool bVar15;
	bool bVar16;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	vVar3 = { 0.0f, 0.0f, 0.0f };
	vVar6 = { 0.0f, 0.0f, 0.0f };
	vVar9 = { 0.0f, 0.0f, 0.0f };
	if (!Function_381(*uParam3, 1))
	{
		vVar12 = { -3873.881f, 8.031f, 3659.863f };
		*uParam1 = Function_459(StackVal, StackVal, bParam0, Function_395(), 1199, 976, vVar12, 0.0f, 187.033f, 0.0f, 1, 976, 976, 976, 4);
		MEMORY_CONSIDER_AS(*uParam1, Global_34573, false);
		*uParam4 = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_ON_OBJECT(*uParam1, Function_395(), "ClimbOntoWagon", 0.0f, 0.0f, 3.3f, 0.0f, 0.0f, 0.0f));
		bVar15 = false;
		while (bVar15 < (GET_NUM_DRAFTED_ACTORS(*uParam1) - 1))
		{
			if (IS_ACTOR_VALID(GET_DRAFT_ACTOR(bVar15, *uParam1)))
			{
				AI_DONT_HARM_ACTOR(GET_DRAFT_ACTOR(bVar15, *uParam1));
				SET_ACTOR_MAX_HEALTH(GET_DRAFT_ACTOR(bVar15, *uParam1), 50.0f);
				SET_ACTOR_HEALTH(GET_DRAFT_ACTOR(bVar15, *uParam1), GET_ACTOR_MAX_HEALTH(GET_DRAFT_ACTOR(bVar15, *uParam1)));
				Function_44(GET_DRAFT_ACTOR(bVar15, *uParam1), 0, 1, 1, 1, 0, 1);
			}
			bVar15++;
		}
		vVar0.x = -0.447f;
		vVar0.f_4 = 1.12f;
		vVar0.f_8 = 0.8f;
		GET_OBJECT_RELATIVE_POSITION(*uParam1, vVar0, &vVar6);
		GET_OBJECT_RELATIVE_ORIENTATION(*uParam1, vVar3, &vVar9);
		*uParam2 = CREATE_PROP_IN_LAYOUT(bParam0, Function_395(), "p_gen_safe02x", vVar6, vVar9, 1);
		bVar16 = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_ON_OBJECT(*uParam2, Function_395(), "Player_Lockpick_Safe_NoProp", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f));
		DECOR_SET_INT(GET_OBJECT_FROM_GRINGO(bVar16), "SOL_Safe", false);
		SET_OBJECT_COLLIDE_WITH_OBJECT(*uParam2, *uParam1, 0);
		SET_PROP_AI_OBSTACLE_ENABLED(*uParam2, 0);
		ATTACH_OBJECTS(*uParam2, *uParam1, Function_395(), vVar0, vVar3, 4294967295);
		Function_380(uParam3, 1);
	}
	if (!Function_381(*uParam3, 2))
	{
		if (IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("SOL_AA_Layout")))
		{
			DECOR_SET_BOOL(Global_34573, "SOL_FTE_SquadReady", true);
			Function_380(uParam3, 2);
			return 1;
		}
	}
	return 0;
}

void Function_485(int iParam0, int iParam1) //Position: 0x15500 / 87296
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam0->f_1228)
	{
		if ((*iParam0 + 1228)[iVar0] != 0 || !Function_252((*iParam0 + 1228)[iVar0]))
		{
			(*iParam0 + 1228)[iVar0] = iParam1;
			iVar0 = iParam0->f_1228;
		}
		else
		{
			iVar0++;
		}
	}
	return;
}

void Function_486(int iParam0, int iParam1) //Position: 0x1554D / 87373
{
	if (iParam1 == 1)
	{
		Function_380(iParam0 + 780, 2048);
	}
	else
	{
		Function_60(iParam0 + 780, 2048);
	}
	return;
}

void Function_487(var uParam0, int iParam1) //Position: 0x15572 / 87410
{
	uParam0->f_1280 = iParam1;
	return;
}

void Function_488(int iParam0, float fParam1, float fParam2, int iParam3) //Position: 0x1557F / 87423
{
	Function_282(iParam0 + 1004, fParam1, fParam2, iParam3);
}

void Function_489(int iParam0, float fParam1) //Position: 0x15595 / 87445
{
	if (fParam1 > 0.0f)
	{
		fParam1 = 0.0f;
	}
	iParam0->f_1276 = fParam1;
	return;
}

void Function_490(int iParam0, float fParam1) //Position: 0x155AC / 87468
{
	if (fParam1 > 0.0f)
	{
		fParam1 = 0.0f;
	}
	iParam0->f_1272 = fParam1;
	return;
}

void Function_491(int iParam0, int iParam1, int iParam2) //Position: 0x155C3 / 87491
{
	if (iParam1 <= 1)
	{
		iParam1 = 1;
	}
	if (iParam2 > 1 || iParam2 >= iParam1)
	{
		iParam2 = iParam1 + 1;
	}
	iParam0->f_1288 = iParam1;
	iParam0->f_1292 = iParam2;
	Function_380(iParam0 + 780, 524288);
	return;
}

void Function_492(int iParam0, bool bParam1) //Position: 0x155FF / 87551
{
	if (bParam1 <= 0)
	{
		bParam1 = false;
	}
	iParam0->f_1296 = bParam1;
	Function_380(iParam0 + 780, 262144);
	return;
}

void Function_493(int iParam0, int iParam1) //Position: 0x15621 / 87585
{
	if (iParam1 == 1)
	{
		Function_380(iParam0 + 780, 256);
	}
	else
	{
		Function_60(iParam0 + 780, 256);
	}
	return;
}

int Function_494(int iParam0, bool bParam1) //Position: 0x15646 / 87622
{
	if (!IS_VOLUME_VALID(bParam1))
	{
		return 0;
	}
	iParam0->f_920 = bParam1;
	return 1;
}

int Function_495(bool bParam0, int iParam1, int iParam2) //Position: 0x15662 / 87650
{
	int iVar0;
	bool bVar1;
	
	if (!Function_136(iParam1))
	{
		LOG_ERROR("Invalid region criteria passed to TRANSPORT_SET_DESTINATION_REGION");
		return (StackVal || !IS_VOLUME_VALID(false));
		LOG_ERROR("Invalid region volume found for to TRANSPORT_SET_DESTINATION_REGION");
		return 0;
	}
	bParam0->f_916 = iParam1;
	if (Function_318(bParam0) == 3)
	{
		if (iParam1 == Global_30640[0])
		{
			*(bParam0 + 924) = { -2137.573f, 16.097f, 2608.122f };
			*(bParam0 + 984) = { -2138.072f, 16.387f, 2605.557f };
		}
		else if (iParam1 == Global_30717[0])
		{
			*(bParam0 + 924) = { 786.585f, 78.306f, 1318.052f };
			*(bParam0 + 984) = { 781.586f, 78.479f, 1318.092f };
		}
		else if (iParam1 == Global_30668[0])
		{
			*(bParam0 + 924) = { -829.292f, 92.14f, 2404.836f };
			*(bParam0 + 984) = { -830.639f, 92.316f, 2401.437f };
		}
		else if (iParam1 == Global_30668[1])
		{
			*(bParam0 + 924) = { 165.194f, 73.036f, 2203.197f };
			*(bParam0 + 984) = { 166.894f, 73.755f, 2195.46f };
		}
		else if (iParam1 == Global_30693[0])
		{
			*(bParam0 + 924) = { -2749.39f, 31.862f, 4300.488f };
			*(bParam0 + 984) = { -2747.507f, 31.86f, 4297.798f };
		}
		else if (iParam1 == Global_30685[0])
		{
			*(bParam0 + 924) = { -4260.107f, 19.033f, 4465.096f };
			*(bParam0 + 984) = { -4262.798f, 18.816f, 4462.007f };
		}
		else if (iParam1 == Global_30723[1])
		{
			*(bParam0 + 924) = { -424.384f, 151.02f, 1614.085f };
			*(bParam0 + 984) = { -429.38f, 151.344f, 1615.145f };
		}
	}
	if (Function_136(bParam0->f_916) && iParam2 != 1)
	{
		bVar1 = GET_VOLUME_FROM_OBJECT(Function_496(bParam0->f_916));
		if (IS_VOLUME_VALID(bVar1))
		{
		}
		else
		{
			LOG_ERROR("Parking volume does not exist");
		}
	}
	if (IS_VOLUME_VALID(bVar1) && iParam2 != 1)
	{
		iVar0 = Function_494(bParam0, bVar1);
	}
	else
	{
		iVar0 = Function_494(StackVal, bParam0);
	}
	return iVar0;
}

var Function_496(int iParam0) //Position: 0x1592D / 88365
{
	bool bVar0;
	bool bVar1;
	char* cVar2[24];
	
	if (!IS_LAYOUTREF_VALID(Global_28841))
	{
		return "";
	}
	if (!Function_136(iParam0))
	{
		return "";
	}
	bVar1 = CREATE_OBJECT_ITERATOR(Global_28841);
	ITERATE_ON_OBJECT_TYPE(bVar1, 9);
	memcpy(&cVar2, Global_29155[iParam010].f_20, 6);
	ITERATE_ON_PARTIAL_NAME(bVar1, &cVar2);
	stradd(&cVar2, "v_coach_park", 24);
	bVar0 = START_OBJECT_ITERATOR(bVar1);
	while (IS_OBJECT_VALID(bVar0))
	{
		if (STRINGS_ARE_EQUAL(&cVar2, GET_OBJECT_NAME(bVar0)))
		{
			DESTROY_ITERATOR(bVar1);
			return bVar0;
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bVar1);
	}
	bVar0 = "";
	DESTROY_ITERATOR(bVar1);
	return bVar0;
}

void Function_497(int iParam0, int iParam1) //Position: 0x159BC / 88508
{
	if (iParam1 == 1)
	{
		Function_380(iParam0 + 780, 4);
	}
	else
	{
		Function_60(iParam0 + 780, 4);
	}
	return;
}

void Function_498(int iParam0, int iParam1) //Position: 0x159DD / 88541
{
	if (iParam1 == 1)
	{
		Function_380(iParam0 + 780, 2);
	}
	else
	{
		Function_60(iParam0 + 780, 2);
	}
	return;
}

void Function_499(int iParam0, int iParam1) //Position: 0x159FE / 88574
{
	if (iParam1 == 1)
	{
		Function_380(iParam0 + 780, 1);
	}
	else
	{
		Function_60(iParam0 + 780, 1);
	}
	return;
}

int Function_500(var uParam0, vector3 vParam1, vector3 vParam4) //Position: 0x15A1F / 88607
{
	return Function_466(StackVal, StackVal, StackVal, StackVal, uParam0, vParam1, vParam4);
}

var Function_501(int iParam0, int iParam1) //Position: 0x15A34 / 88628
{
	int iVar0;
	int iVar1;
	
	iVar1 = Function_319();
	if (iVar1 == 4294967295)
	{
		iVar0 = Function_465(iParam0, iParam1);
	}
	else
	{
		iVar0 = Function_465(iParam0, iVar1);
	}
	return iVar0;
}

struct<32> Function_502(bool bParam0) //Position: 0x15A5C / 88668
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_503("0", &cVar8, ""), 4);
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

struct<32> Function_503(char* cParam0, char* cParam1, char* cParam2) //Position: 0x15AC6 / 88774
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_504(int iParam0) //Position: 0x15AE5 / 88805
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_508();
	iVar1 = 0;
	if (!Function_4(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_507(iParam0[iVar03], 8);
		}
		else if (Function_506())
		{
			iVar1 = 1;
			Function_507(iParam0[iVar03], 8);
		}
		Function_507(iParam0[iVar03], 16);
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
				Function_507(iParam0[iVar03], 1);
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
							Function_507(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_507(iParam0[iVar03], 2);
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
							Function_507(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_507(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_507(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_507(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_507(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_507(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_507(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_507(iParam0[iVar03], 2);
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
	Function_505();
	return 1;
}

void Function_505() //Position: 0x15E60 / 89696
{
	if (!Function_390(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_506() //Position: 0x15EA0 / 89760
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

void Function_507(var uParam0, int iParam1) //Position: 0x15ECB / 89803
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_508() //Position: 0x15EDC / 89820
{
	if (!Function_390(128))
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

void Function_509(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x15F1E / 89886
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
			Var0 = { StackVal, StackVal, StackVal, Function_13(Global_6269) };
		}
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, &Var0, 0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, iVar4, iParam5, iParam6);
	}
}

bool Function_510(var uParam0, var uParam1, var uParam2, int iParam3) //Position: 0x15FA3 / 90019
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	
	GET_POSITION(*uParam1, &vVar0);
	switch (*uParam0)
	{
		case 0x00000001:
		case 0x00000010:
			break;
		
		case 0x00000002:
			if (IS_ACTOR_VALID(*uParam2))
			{
				GET_POSITION(*uParam2, &vVar3);
				if (VDIST(vVar3, vVar0) < 200.0f)
				{
					Function_511(iParam3);
					return 0;
				}
			}
			break;
		
		case 0x00000007:
			if (IS_ACTOR_VALID(*uParam2))
			{
				GET_POSITION(*uParam2, &vVar3);
				if (VDIST(vVar3, vVar0) < 75.0f)
				{
					Function_511(iParam3);
					return 0;
				}
			}
			break;
	}
	if (!Function_218(Global_30640[0]))
	{
		if (IS_ACTOR_VALID(*uParam2))
		{
			bVar6 = true;
			bVar7 = false;
			while (bVar7 < 3)
			{
				bVar8 = GET_DRAFT_ACTOR(bVar7, *uParam2);
				if (IS_ACTOR_VALID(bVar8))
				{
					if (IS_ACTOR_ALIVE(bVar8))
					{
						bVar6 = false;
					}
				}
				bVar7++;
			}
			if (bVar6)
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(*uParam2)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(*uParam2));
				}
				if (!iLocal_21)
				{
					Function_210("SOL_Help_KilledAnimals", 0, -1.0f, 1, 0, 0);
					Function_511(iParam3);
					iLocal_21 = 1;
					return 0;
				}
			}
		}
	}
	return 1;
}

void Function_511(int iParam0) //Position: 0x160CF / 90319
{
	Function_342(iParam0, 3);
	return;
}

void Function_512(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x160DB / 90331
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_13(Global_6269) };
		}
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

void Function_513(bool bParam0) //Position: 0x16156 / 90454
{
	Function_516(bParam0, 1199, 2, 1);
	Function_516(bParam0, 976, 3, 1);
	Function_516(bParam0, 486, 3, 1);
	Function_516(bParam0, 487, 3, 1);
	Function_516(bParam0, 488, 3, 1);
	Function_516(bParam0, 489, 3, 1);
	Function_516(bParam0, 490, 3, 1);
	Function_516(bParam0, 491, 3, 1);
	Function_516(bParam0, 443, 3, 1);
	Function_514(bParam0, "p_gen_safe02x", 0, 1);
	Function_514(bParam0, "$/content/scripting/gringo/simplegringo/shakehands_link", 1, 0);
	Function_514(bParam0, "Player_Lockpick_Safe_NoProp", 1, 0);
	Function_514(bParam0, "ClimbOntoWagon", 1, 0);
	Function_514(bParam0, "action_areas", 10, 0);
	Function_514(bParam0, "stand_shakehands", 5, 0);
	Function_514(bParam0, "custom/stand_shakehands", 8, 0);
	Function_514(bParam0, "AA_tesoro_intro_cover", 5, 0);
	Function_514(bParam0, "custom/AA_tesoro_intro_cover", 8, 0);
	Function_514(bParam0, "excited_return", 5, 0);
	Function_514(bParam0, "custom/excited_return", 8, 0);
	Function_514(bParam0, "nthank_you", 5, 0);
	Function_514(bParam0, "custom/thank_you", 8, 0);
	return;
}

var Function_514(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x16360 / 90976
{
	int iVar0;
	int iVar1;
	
	if (Global_30842[32])
	{
	}
	iVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_515(uParam0, iVar1, iParam2);
	if (bParam3)
	{
		Function_507(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_515(var uParam0, int iParam1, int iParam2) //Position: 0x16398 / 91032
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_4(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_507(uParam0[iVar03], 4);
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

var Function_516(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1645C / 91228
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_4(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_507(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_507(uParam0[iVar03], 8);
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

