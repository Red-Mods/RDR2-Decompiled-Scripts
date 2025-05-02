//Decompiled with MagicRDR v1.0
//Function Count : 511
//Statics Count : 561
//Natives Count : 636
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
	float fLocal_59 = 0.0f;
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
	vLocal_28 = { -2128,103f, 16,58369f, 2619,343f };
	vLocal_31 = { -2129,32f, 17,65886f, 2619,586f };
	vLocal_34 = { 0.0f, 0.0f, 0.0f };
	vLocal_37 = { 8,762381f, 3,464221f, 3,192364f };
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
	Function_507(&iLocal_62);
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
					Function_506("sol_FTE_Help_AttBanker", 0x41200000, 1, 0, 2, 1, 0);
					iLocal_500 = 1;
					iLocal_129 = 16;
				}
			}
		}
		if (!Function_504(&iLocal_129, &Global_34573, &bLocal_40, &Local_131))
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
						Function_503("sol_FTE_Sheriff_Died", 0x40f00000, 1, 2, 0, 0, 0);
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
				if (Function_498(&iLocal_62))
				{
					if (!IS_LAYOUTREF_VALID(bLocal_46))
					{
						bLocal_46 = CREATE_LAYOUT("SOL_FTE_Layout");
						Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_496("armv_sol_returnWagon") };
						bLocal_58 = CREATE_VOLUME_IN_LAYOUT(bLocal_46, &Var0, 3, -2137,558f, 16,373f, 2625,337f, 0.0f, 0.0f, 0.0f, 5.0f, 8.0f, 15.0f);
						Function_495(&Local_131, 4);
						Function_494(&Local_131, -3868,27f, 8,031f, 3646,229f, 0.0f, 143,637f, 0.0f);
						Function_493(&Local_131, 0);
						Function_492(&Local_131, 1);
						Function_491(&Local_131, 1);
						Function_489(&Local_131, Global_30640[0], 0);
						Function_488(&Local_131, bLocal_58);
						Function_487(&Local_131, 1);
						Function_486(&Local_131, 6);
						Function_485(&Local_131, 3, 4);
						Function_484(&Local_131, 10.0f);
						Function_483(&Local_131, 25.0f);
						Function_482(&Local_131, 50.0f, 70.0f, 0x41700000);
						Function_481(&Local_131, 1);
						Function_480(&Local_131, 1);
						Function_479(&Local_131, 486);
						Function_479(&Local_131, 487);
						Function_479(&Local_131, 488);
						Function_479(&Local_131, 489);
						Function_479(&Local_131, 490);
						Function_479(&Local_131, 491);
					}
					if (Function_478(bLocal_46, &bLocal_40, &bLocal_43, &bLocal_475, &uLocal_61))
					{
						Function_477(&Local_131, bLocal_40);
						Function_476(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_introCharacter"));
						Function_475(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_introCharacter"));
						bLocal_42 = CREATE_ACTOR_IN_LAYOUT(bLocal_46, "IntroGuy", 443, Function_476(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_introCharacter")), Function_475(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_introCharacter")));
						bLocal_53 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_46, "nhelpSquad"));
						SQUAD_JOIN(bLocal_42, bLocal_53);
						SQUAD_SET_FACTION(bLocal_53, 20);
						MEMORY_CONSIDER_AS(bLocal_42, Global_34573, false);
						Function_472(bLocal_53, Function_473("SOL_AA_Squad", FIND_NAMED_LAYOUT("SOL_AA_Layout")), 4);
						TASK_CROUCH(bLocal_42, -1.0f);
						SET_NPC_TO_NPC_DAMAGE_SCALE_FACTOR(0,1f);
						SET_CRIPPLE_ENABLE(bLocal_42, 0);
						SET_ACTOR_ALLOW_DISARM(bLocal_42, false);
						SET_ACTOR_PROOF(bLocal_42, 128);
						AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bLocal_42, true);
						AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bLocal_42, 12, 0);
						AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bLocal_42, 13, 0);
						Function_471(Function_473("SOL_AA_Squad", FIND_NAMED_LAYOUT("SOL_AA_Layout")));
						AI_GOAL_LOOK_AT_ACTOR_NEW(bLocal_42, Global_34573, -1.0f, 1);
						bLocal_44 = CREATE_GATEWAY_IN_LAYOUT(bLocal_46, "IntroGateway", FIND_VOLUME_IN_LAYOUT(Global_30616, "v_IntroGateway"), Global_34573, 2, 3, 0, false, 1, 1);
						ADD_BLIP_FOR_OBJECT(bLocal_44, 330, 0f, 2, 0);
						bLocal_56 = FIND_VOLUME_IN_LAYOUT(Global_30616, "v_IntroGateway");
						Function_476(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_TeleportHorse"));
						vLocal_491 = { StackVal, StackVal, Function_476(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_TeleportHorse")) };
						bLocal_57 = FIND_VOLUME_IN_LAYOUT(Global_30616, "v_CheckPlayerHorse");
						Function_476(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_introCharacter"));
						vLocal_485 = { StackVal, StackVal, Function_476(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_introCharacter")) };
						Function_475(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_introCharacter"));
						vLocal_488 = { StackVal, StackVal, Function_475(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_introCharacter")) };
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
						Function_503("sol_FTE_Find_IntroGuy", 0x40f00000, 1, 2, 0, 0, 0);
						CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("SOLJournalID"), 0);
						APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("SOLJournalID"), "sol_FTE_Find_IntroGuy", 0, 0, false);
						APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("SOLJournalID"), 0);
						iVar8 = 0;
						while (iVar8 <= 4)
						{
							if (!Function_470(&(Global_6490[iVar82]), 2) || Function_470(&(Global_6490[iVar82]), 4))
							{
								bLocal_504 = true;
							}
							iVar8++;
						}
						if (!bLocal_504)
						{
							iLocal_509 = NET_MAILBOX_GET_CHALLENGE_BY_ID("sc_challenge_aa_05");
							SC_CHALLENGE_LAUNCH(iLocal_509);
							if (!Function_469(&iLocal_460))
							{
								Function_468(&iLocal_460);
							}
							else
							{
								Function_466(&iLocal_460);
							}
						}
						Function_465(Global_30735, 1);
						DECOR_SET_BOOL(Global_34573, "shakehands_noCam", true);
						fLocal_59 = CREATE_VOLUME_IN_LAYOUT(bLocal_46, "vStopAttacks", 3, -2148,081f, 17,566f, 2611,195f, 0.0f, 0.0f, 0.0f, 299,2477f, 307,9527f, 299,2477f);
						iLocal_129 = 0;
					}
				}
				break;
			
			case 0x00000000:
				if (!Function_401(&Local_131))
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
							bLocal_52 = Function_473("SOL_AA_Squad", FIND_NAMED_LAYOUT("SOL_AA_Layout"));
							PRINTSTRING("Here's how many are in there: ");
							PRINTINT(SQUAD_GET_SIZE(bLocal_52));
							PRINTNL();
						}
					}
				}
				break;
			
			case 0x00000002:
				Function_399("sc_challenge_aa_05", &iLocal_460);
				Function_398(&bLocal_42, &bLocal_53);
				if (iLocal_499)
				{
					if (!iLocal_506)
					{
						if (IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(Global_30616, "v_TaskFloyd")))
						{
							TASK_CLEAR(bLocal_42);
							TASK_SHOOT_ENEMIES_FROM_COVER(bLocal_42, GET_COVER_LOCATION_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_30616, "ncover_low")), -1.0f, 5.0f);
							SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_42, FIND_VOLUME_IN_LAYOUT(Global_30616, "v_IntroGuyStayWithin"), 4, true);
							iLocal_506 = 1;
						}
					}
				}
				if (SQUAD_IS_VALID(bLocal_52))
				{
					if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_52) == 0)
					{
						if (!Function_469(&iLocal_469))
						{
							Function_468(&iLocal_469);
							SQUAD_SET_FACTION(bLocal_53, 21);
							MEMORY_CONSIDER_AS(bLocal_42, Global_34573, 2);
						}
					}
				}
				if (!bLocal_497)
				{
					if (Function_469(&iLocal_469))
					{
						if (Function_397(&iLocal_469) <= 2.0f)
						{
							if (Function_396(bLocal_42, 0x3f800000, 0x42960000, 1, 1, 0))
							{
								if (Function_395(bLocal_42, Global_34573) >= 30.0f)
								{
									if (GET_NTH_TASK_STATUS(bLocal_42, true) == 1)
									{
										Function_394();
										RESET_ANIM_SET_FOR_ACTOR(bLocal_42, true);
										SET_ANIM_SET_FOR_ACTOR(bLocal_42, "nthank_you", 0);
										SET_ACTION_NODE_FOR_ACTOR(bLocal_42, "nthank_you");
										iLocal_502 = 1;
										bLocal_497 = true;
										if (!Function_469(&iLocal_472))
										{
											Function_468(&iLocal_472);
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
							Function_506("mission_no_vehicle", 0x41200000, 1, 0, 2, 1, 0);
							iLocal_498 = 1;
						}
					}
				}
				if (iLocal_498)
				{
					if (Function_392(Global_34573, bLocal_56) <= 15.0f)
					{
						iLocal_498 = 0;
					}
				}
				if (!iLocal_495)
				{
					if (IS_OBJECT_VALID(bLocal_44))
					{
						if (Function_390(bLocal_44, 0, 1, 0, 1, 0))
						{
							REMOVE_BLIP(GET_BLIP_ON_OBJECT(bLocal_44));
							DESTROY_OBJECT(bLocal_44);
							bVar9 = CREATE_VOLUME_IN_LAYOUT(bLocal_46, Function_389(), 3, -3849,653f, 7,466f, 3690,893f, 0.0f, 0.0f, 0.0f, 5.0f, 5.0f, 5.0f);
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
							if (!Function_388(Global_30735) != 2)
							{
								Function_387(Global_30735, 1);
								Global_3385 = 1;
								SET_PLAYER_ENDLESS_READYMODE(0, 1);
							}
							Function_382(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
							Function_378(bLocal_46, 0, 1, 0, 0);
							DECOR_SET_BOOL(Global_34573, "RunningCutscene", true);
							DECOR_SET_BOOL(Global_34573, "PrintObjThruCut", true);
							Function_468(&iLocal_463);
							Function_466(&iLocal_463);
							SET_PLAYER_POSTURE(0, 1, 0);
							bLocal_130 = GET_WEAPON_IN_HAND(Global_34573);
							AI_GOAL_LOOK_AT_ACTOR(bLocal_42, Global_34573, 1, 1065353216, 3212836864, 3212836864, 0);
							FORCE_LOOK_AT_ACTOR(bLocal_42, Global_34573, -1.0f);
							SET_PLAYER_CONTROL(0, 0, 0, 0);
							ACTOR_START_FORCE_HOLSTER(Global_34573, 0, 0);
							ACTOR_START_FORCE_HOLSTER(bLocal_42, 1, 0);
							Function_377(Global_34573, 0);
							SET_ACTOR_UPDATE_PRIORITY(Global_34573, false);
							Function_476(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportJohnCrouch"));
							vVar11 = { StackVal, StackVal, Function_476(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportJohnCrouch")) };
							Function_475(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportJohnCrouch"));
							vVar14 = { StackVal, StackVal, Function_475(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_teleportJohnCrouch")) };
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
				if (Function_376(&bLocal_475, &uLocal_51, &bLocal_40, &bLocal_52, &Local_131, &bLocal_42))
				{
					if (!Function_375(bLocal_475, 16))
					{
						Function_374(&bLocal_475, 16);
						DECOR_SET_BOOL(Global_34573, "SOL_FTE_EngagedAA", true);
					}
					iLocal_129 = 7;
				}
				if (!Function_375(bLocal_475, 128))
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
					Function_487(&Local_131, 0);
				}
				else
				{
					Function_487(&Local_131, 1);
				}
				if (!Function_205(&Local_131, &iLocal_476, &bLocal_475, &bLocal_41, &iLocal_477, &uLocal_60, &bLocal_46, &uLocal_45, &bLocal_54, &bLocal_42, &fLocal_59, &bLocal_40))
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
				Function_398(&bLocal_42, &bLocal_53);
				if (SQUAD_IS_VALID(bLocal_52))
				{
					if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_52) == 0)
					{
						if (!Function_469(&iLocal_469))
						{
							Function_468(&iLocal_469);
							SQUAD_SET_FACTION(bLocal_53, 21);
							MEMORY_CONSIDER_AS(bLocal_42, Global_34573, 2);
						}
					}
				}
				if (!bLocal_497)
				{
					if (Function_469(&iLocal_469))
					{
						if (Function_397(&iLocal_469) <= 2.0f)
						{
							if (Function_396(bLocal_42, 0x3f800000, 0x42960000, 1, 1, 0))
							{
								if (Function_395(bLocal_42, Global_34573) >= 30.0f)
								{
									if (GET_NTH_TASK_STATUS(bLocal_42, true) == 1)
									{
										Function_394();
										RESET_ANIM_SET_FOR_ACTOR(bLocal_42, true);
										SET_ANIM_SET_FOR_ACTOR(bLocal_42, "nthank_you", 0);
										SET_ACTION_NODE_FOR_ACTOR(bLocal_42, "nthank_you");
										iLocal_502 = 1;
										bLocal_497 = true;
										if (!Function_469(&iLocal_472))
										{
											Function_468(&iLocal_472);
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
						if (Function_469(&iLocal_472))
						{
							if (Function_397(&iLocal_472) <= 7.0f)
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
				iVar17 = Function_203(&bLocal_475, &Local_131);
				if (iVar17 == 2)
				{
					iLocal_129 = 2;
				}
				if (!Function_205(&Local_131, &iLocal_476, &bLocal_475, &bLocal_41, &iLocal_477, &uLocal_60, &bLocal_46, &uLocal_45, &bLocal_54, &bLocal_42, &fLocal_59, &bLocal_40))
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
				if (Function_469(&iLocal_463))
				{
					if (Function_397(&iLocal_463) < 0,25f)
					{
						Function_202();
						SET_CAMERA_POSITION(GET_GAME_CAMERA(), -3848,701f, 7,223391f, 3694,126f);
						SET_CAMERA_ORIENTATION(GET_GAME_CAMERA(), 0.0f, 6,789521f, 0.0f, 0);
						iLocal_129 = 6;
					}
				}
				break;
			
			case 0x00000006:
				if (Function_469(&iLocal_463))
				{
					if (Function_397(&iLocal_463) < 10.0f)
					{
						if (!iLocal_499)
						{
							Function_200(2, 1, 1, 1, 1, 1, 0, 1, 1, 1);
							if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_42)))
							{
								ADD_BLIP_FOR_ACTOR(bLocal_42, 325, 0, 2, 0);
							}
							AI_STOP_IGNORING_ACTORS();
							AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
							AI_CLEAR_DONT_HARM_ACTOR(bLocal_42);
							SET_PLAYER_POSTURE(0, 1, 0);
							ATTACH_PLAYER_TO_COVER(0, 1, 1);
							ACTOR_POP_NEXT_GAIT(Global_34573, 0, false);
							STOP_FORCE_LOOK_AT_COORD(bLocal_42);
							AI_GOAL_LOOK_CLEAR(bLocal_42);
							ACTOR_END_FORCE_HOLSTER(bLocal_42);
							ACTOR_END_FORCE_HOLSTER(Global_34573);
							if (bLocal_130 != 4294967295)
							{
								ACTOR_PUT_WEAPON_IN_HAND(Global_34573, bLocal_130, 1);
							}
							RESET_ANIM_SET_FOR_ACTOR(Global_34573, true);
							if (!DECOR_CHECK_EXIST(Global_34573, "BlippedSquad"))
							{
								if (HUD_IS_SHOWING_OBJECTIVE())
								{
									HUD_CLEAR_OBJECTIVE();
									HUD_CLEAR_OBJECTIVE_QUEUE();
								}
								Function_503("sol_FTE_MainObjText", 0x40f00000, 1, 2, 0, 0, 0);
								CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("SOLJournalID"), 0);
								APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("SOLJournalID"), "sol_FTE_MainObjText", 0, 0, false);
								APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("SOLJournalID"), 0);
								Function_199(Function_473("SOL_AA_Squad", FIND_NAMED_LAYOUT("SOL_AA_Layout")), 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
							}
							if (!Function_469(&iLocal_466))
							{
								Function_468(&iLocal_466);
							}
							AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
							Function_198(bLocal_42, bLocal_52);
							Function_197(bLocal_42, bLocal_52, 4);
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
					Function_196();
					if (HUD_IS_SHOWING_OBJECTIVE())
					{
						HUD_CLEAR_OBJECTIVE();
						HUD_CLEAR_OBJECTIVE_QUEUE();
					}
					Function_503("sol_FTE_ExitWagon", 0x40f00000, 1, 2, 0, 0, 0);
					CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("SOLJournalID"), 0);
					APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("SOLJournalID"), "sol_FTE_ExitWagon", 0, 0, false);
					APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("SOLJournalID"), 0);
				}
				else
				{
					Function_194(Function_195(1, 1, 1, 0, 0), 1);
					Function_192(9, 0, 1);
					if (!DECOR_CHECK_EXIST(Global_34573, "SOL_UsedSafe"))
					{
						Function_188(200, 1, 0);
						Function_175(50, 1, 0);
					}
					Function_465(Global_30735, 0);
					AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
					if (Function_469(&iLocal_460))
					{
						bLocal_494 = Function_397(&iLocal_460);
					}
					if (Function_469(&iLocal_460))
					{
						if (Function_174(460) < 0.0f)
						{
							if (bLocal_494 > Function_174(460))
							{
								Function_173(460, bLocal_494, 0);
							}
						}
						else
						{
							Function_173(460, bLocal_494, 0);
						}
					}
					Function_143(Global_30735);
					Function_95(Global_30735, 1, 1, 0);
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
						Function_503("sol_FTE_TalkToBanker", 0x40f00000, 1, 2, 0, 0, 0);
						CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("SOLJournalID"), 0);
						APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("SOLJournalID"), "sol_FTE_TalkToBanker", 0, 0, false);
						APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("SOLJournalID"), 0);
						iLocal_129 = 10;
					}
					else
					{
						SET_PLAYER_ENDLESS_READYMODE(0, 0);
						Function_194(Function_195(1, 1, 1, 0, 0), 1);
						Function_192(9, 0, 1);
						if (!DECOR_CHECK_EXIST(Global_34573, "SOL_UsedSafe"))
						{
							Function_188(200, 1, 0);
							Function_175(50, 1, 0);
						}
						Function_465(Global_30735, 0);
						AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
						if (Function_469(&iLocal_460))
						{
							bLocal_494 = Function_397(&iLocal_460);
						}
						if (Function_469(&iLocal_460))
						{
							if (Function_174(460) < 0.0f)
							{
								if (bLocal_494 > Function_174(460))
								{
									Function_173(460, bLocal_494, 0);
								}
							}
							else
							{
								Function_173(460, bLocal_494, 0);
							}
						}
						Function_143(Global_30735);
						Function_95(Global_30735, 1, 1, 0);
						TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
					}
				}
				break;
			
			case 0x0000000A:
				if (!iLocal_508)
				{
					if (Function_395(Global_34573, bLocal_41) > 10.0f)
					{
						Function_91();
						iLocal_508 = 1;
					}
				}
				if (Function_395(Global_34573, bLocal_41) > 2.0f)
				{
					Function_196();
					Function_382(1, 0, 1, 1, 1, 1, 0, bLocal_54, 1, 0, 1, 1);
					UI_PUSH("CutsceneWithMessages");
					Function_87(bLocal_46, 0, 1, 0, 0);
					Function_468(&iLocal_457);
					Function_466(&iLocal_457);
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
					if (Function_469(&iLocal_457))
					{
						if (Function_397(&iLocal_457) < 3.0f)
						{
							PRINT_BIG("SOL_PrintBig", 1084227584, 0, 2, 0);
							vVar18 = { -2128,779f, 16,584f, 2619,305f };
							TELEPORT_ACTOR_WITH_HEADING(Global_34573, vVar18, 355,774f, 0, false, 0);
							SET_CAMERA_ORIENTATION(GET_GAME_CAMERA(), 0.0f, 355,774f, 0.0f, 0);
							iLocal_505 = 1;
						}
					}
				}
				if (Function_469(&iLocal_457))
				{
					if (Function_397(&iLocal_457) < 10.0f)
					{
						if (IS_ACTOR_VALID(bLocal_41))
						{
							DESTROY_ACTOR(bLocal_41);
						}
						Function_200(2, 1, 1, 1, 1, 1, 0, 1, 0, 1);
						UI_POP("CutsceneWithMessages");
						if (!DECOR_CHECK_EXIST(Global_34573, "SOL_UsedSafe"))
						{
							Function_188(200, 1, 0);
							Function_175(50, 1, 0);
						}
						if (!DECOR_CHECK_EXIST(Global_34573, "SOL_UsedSafe"))
						{
							Function_194(Function_195(2, 1, 1, 0, 0), 1);
						}
						else
						{
							Function_194(Function_195(0, 1, 1, 0, 0), 1);
						}
						Function_192(9, 0, 1);
						Function_465(Global_30735, 0);
						CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("SOLJournalID"), 0);
						APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("SOLJournalID"), 1);
						if (Function_469(&iLocal_460))
						{
							bLocal_494 = Function_397(&iLocal_460);
						}
						if (Function_469(&iLocal_460))
						{
							if (Function_174(460) < 0.0f)
							{
								if (bLocal_494 > Function_174(460))
								{
									Function_173(460, bLocal_494, 0);
								}
							}
							else
							{
								Function_173(460, bLocal_494, 0);
							}
						}
						AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
						Function_143(Global_30735);
						Function_95(Global_30735, 1, 1, 0);
						iLocal_129 = 16;
					}
				}
				break;
			
			case 0x00000010:
				if (IS_LAYOUTREF_VALID(Global_30616))
				{
					bLocal_55 = FIND_VOLUME_IN_LAYOUT(Global_30616, "armv_region");
					if ((((!IS_VOLUME_VALID(bLocal_55) || iLocal_500) || iLocal_503) || !IS_ACTOR_ALIVE(bLocal_41)) || Function_86(0))
					{
						if (Function_86(0))
						{
							if (HUD_IS_SHOWING_HELP_TEXT())
							{
								HUD_CLEAR_HELP();
								HUD_CLEAR_HELP_QUEUE();
							}
							Function_506("SOL_FTE_Help_WantedFail", 0x41200000, 1, 0, 2, 1, 0);
						}
						AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
						SET_PLAYER_CONTROL(0, 1, 0, 0);
						TASK_CLEAR(Global_34573);
						if (Function_388(Global_30735) == 2)
						{
							Function_83(Global_30735);
						}
						if (IS_ACTOR_VALID(bLocal_42))
						{
							RELEASE_ACTOR(bLocal_42);
						}
						REMOVE_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("SOLJournalID"), false);
						Function_76(&Global_6298, &Global_7189, 4, 0);
						Function_66(&Local_131, 0);
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
	if (Function_388(Global_30735) == 2)
	{
		Function_83(Global_30735);
	}
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	TASK_CLEAR(Global_34573);
	DECOR_REMOVE(bLocal_41, "CanBeLasso");
	if (IS_ACTOR_VALID(bLocal_42))
	{
		RELEASE_ACTOR(bLocal_42);
	}
	REMOVE_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("SOLJournalID"), false);
	Function_76(&Global_6298, &Global_7189, 4, 0);
	Function_66(&Local_131, 0);
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

void Function_1(int iParam0) //Position: 0x19F5 / 6645
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

void Function_2(var uParam0, int iParam1) //Position: 0x1A1B / 6683
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

void Function_3(var uParam0, int iParam1) //Position: 0x1B49 / 6985
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_4(var uParam0, int iParam1) //Position: 0x1B63 / 7011
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(int iParam0, int iParam1) //Position: 0x1B80 / 7040
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	
	Function_66(iParam0, 0);
	bVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_389(), GET_AMBIENT_LAYOUT(), 4294967295, 0);
	iVar2 = 0;
	while (iVar2 < (GET_OBJECTSET_SIZE(bVar1) - 1))
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, bVar1);
		DECOR_REMOVE(bVar0, "translib_state");
		iVar2++;
	}
	DESTROY_OBJECTSET(bVar1);
	Function_65(iParam0);
	if (IS_ACTOR_VALID(iParam0->f_952))
	{
		TASK_VEHICLE_LEAVE(iParam0->f_952);
		TASK_PRIORITY_SET(iParam0->f_952, true);
		Function_64(iParam0->f_952, 7);
		if (iParam1 == 1)
		{
			DESTROY_ACTOR(iParam0->f_952);
		}
		else
		{
			Function_63(iParam0->f_952, 4, 0, 2);
		}
	}
	if (IS_ACTOR_VALID(iParam0->f_960))
	{
		Function_64(iParam0->f_960, 7);
		if (iParam0->f_628 == 2)
		{
			Function_63(iParam0->f_960, 4, 0, 2);
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
			Function_63(iParam0->f_960, 2, 0, 2);
		}
	}
	if (IS_ACTOR_VALID(iParam0->f_976))
	{
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(iParam0->f_976);
		Function_62(iParam0->f_976, 0.0f, 0.0f, 0.0f, 0, 0, 2, 1);
	}
	if (IS_ACTOR_VALID(iParam0->f_860))
	{
		START_VEHICLE(iParam0->f_860);
		SET_VEHICLE_ALLOWED_TO_DRIVE(iParam0->f_860, 1);
		Function_64(iParam0->f_860, 7);
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
			Function_60(iParam0);
			break;
		
		case 0x00000001:
			if (IS_ACTOR_ALIVE(iParam0->f_960))
			{
				SET_ACTOR_FACTION(iParam0->f_960, 19);
			}
			break;
	}
	if (Function_375(iParam0->f_780, 512))
	{
		HUD_TIMER_DISPLAY(0);
	}
	if (IS_OBJECTSET_VALID(iParam0->f_968))
	{
		DESTROY_OBJECTSET(iParam0->f_968);
	}
	bVar3 = Function_59();
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
		if (!Function_375(iParam0->f_780, 1024))
		{
			RELEASE_LAYOUT_REF(iParam0->f_776);
		}
	}
	Function_1(iParam0 + 640);
	Function_58(56);
	Function_56(4);
	Function_55();
	Function_26(iParam0 + 1004);
	Function_6(iParam0);
	return;
}

void Function_6(bool bParam0) //Position: 0x1DAC / 7596
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
		if (Function_375(bParam0->f_584, 32768))
		{
			Function_25(256);
		}
	}
	Function_24();
	Function_22(1);
	if (Function_375(bParam0->f_584, 32))
	{
		if (Function_20(bParam0->f_624))
		{
			switch (bParam0->f_620)
			{
				case 0x00000002:
					Function_95(bParam0->f_624, 1, 0, 0);
					break;
				
				case 0x00000003:
					Function_12(bParam0->f_624);
					break;
				
				default:
					Function_83(bParam0->f_624);
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
	if (Function_375(bParam0->f_584, 64))
	{
		Global_13111 = 0;
	}
	if (Function_375(bParam0->f_584, 16))
	{
		Global_3382 = 0;
	}
	return;
}

void Function_7(bool bParam0, bool bParam1) //Position: 0x1F09 / 7945
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

void Function_8(bool bParam0, bool bParam1, float fParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x1F6E / 8046
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
			TASK_FLEE_ACTOR(bVar1, bParam1, fParam2, bParam3, iParam4, 0, 0);
			TASK_PRIORITY_SET(bVar1, bParam5);
		}
		bVar0++;
	}
}

void Function_9(bool bParam0) //Position: 0x1FDC / 8156
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

void Function_10(var uParam0, bool bParam1, bool bParam2) //Position: 0x2011 / 8209
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
				if (!Function_396(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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

void Function_11(bool bParam0) //Position: 0x208D / 8333
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

void Function_12(bool bParam0) //Position: 0x20BF / 8383
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	
	if (!Function_20(bParam0))
	{
		return;
	}
	iVar0 = Function_19(bParam0);
	if (StackVal == 2)
	{
		Function_15("nDEED_FAIL", bParam0);
	}
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_13172[bParam011].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(Global_6269) };
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

struct<16> Function_13(int iParam0) //Position: 0x2165 / 8549
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_14(char* cParam0) //Position: 0x218F / 8591
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

void Function_15(char* cParam0, bool bParam1) //Position: 0x23E5 / 9189
{
	struct<4> Var0;
	
	if (!Function_20(bParam1))
	{
		return;
	}
	switch (Function_19(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_16(Function_17(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_19(bParam1), Function_17(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_19(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_19(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_19(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_19(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_19(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_16(int iParam0) //Position: 0x2509 / 9481
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_17(bool bParam0) //Position: 0x252E / 9518
{
	if (!Function_18(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 12) & 255;
}

bool Function_18(int iParam0) //Position: 0x254E / 9550
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_19(bool bParam0) //Position: 0x2565 / 9573
{
	if (!Function_18(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

bool Function_20(int iParam0) //Position: 0x2580 / 9600
{
	if (!Function_18(iParam0))
	{
		return 0;
	}
	if (!Function_21(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_21(int iParam0) //Position: 0x25A4 / 9636
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_22(int iParam0) //Position: 0x25B9 / 9657
{
	if (iParam0 != 1 && !GET_THIS_SCRIPT_ID() != Global_8721)
	{
		return;
	}
	if (Global_8717[iParam0])
	{
		Global_8717[iParam0] = 0;
	}
	if (!Function_23())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_23() //Position: 0x25F5 / 9717
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

void Function_24() //Position: 0x261A / 9754
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_25(int iParam0) //Position: 0x262E / 9774
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_26(int iParam0) //Position: 0x264B / 9803
{
	Function_27(iParam0);
	return;
}

void Function_27(int iParam0) //Position: 0x2656 / 9814
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
				Function_41(iParam0, bVar0, 2, 0);
			}
			bVar2++;
		}
		DESTROY_OBJECT(GET_OBJECT_FROM_SQUAD(iParam0->f_60));
	}
	if (IS_ACTORSET_VALID(iParam0->f_64))
	{
		if (iParam0->f_160 == 0)
		{
			Function_32(iParam0->f_64, 2, 0, 2);
		}
		else
		{
			Function_30(iParam0->f_64);
		}
		DESTROY_ACTORSET(iParam0->f_64);
	}
	if (!Function_375(iParam0->f_92, 16))
	{
		RELEASE_LAYOUT_OBJECTS(*iParam0);
		DESTROY_LAYOUT(*iParam0);
	}
	if (IS_OBJECTSET_VALID(iParam0->f_96))
	{
		Function_29(iParam0->f_96);
		DESTROY_OBJECTSET(iParam0->f_96);
	}
	bVar1 = Function_28(iParam0);
	if (IS_OBJECT_VALID(bVar1))
	{
		DESTROY_OBJECT(bVar1);
	}
	return;
}

var Function_28(int iParam0) //Position: 0x2767 / 10087
{
	int iVar0;
	
	if (!IS_ITERATOR_VALID(StackVal))
	{
		return "";
	}
	iVar0 = START_OBJECT_ITERATOR(StackVal);
	return iVar0;
}

void Function_29(bool bParam0) //Position: 0x2786 / 10118
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

void Function_30(bool bParam0) //Position: 0x27CB / 10187
{
	bool bVar0;
	
	Function_31(&bParam0);
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

void Function_31(int iParam0) //Position: 0x2813 / 10259
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

int Function_32(bool bParam0, int iParam1, int iParam2, int iParam3) //Position: 0x286C / 10348
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
				Function_33(bVar0, iParam1, iParam2, iParam3, 1);
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

int Function_33(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x28D3 / 10451
{
	char* cVar0[32];
	
	Function_40();
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
	if (Function_39(bParam0) == 1)
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
	Function_38(bParam0, 0);
	Function_37(bParam0, iParam1);
	Function_36(bParam0, iParam2);
	Function_35(bParam0, iParam3);
	if (Function_34(bParam0) != 5)
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

int Function_34(bool bParam0) //Position: 0x2B21 / 11041
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior");
}

void Function_35(bool bParam0, bool bParam1) //Position: 0x2B44 / 11076
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_36(bool bParam0, bool bParam1) //Position: 0x2B67 / 11111
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_target", bParam1);
	return;
}

void Function_37(bool bParam0, bool bParam1) //Position: 0x2B8B / 11147
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_38(bool bParam0, bool bParam1) //Position: 0x2BB1 / 11185
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_state", bParam1);
	return;
}

int Function_39(bool bParam0) //Position: 0x2BD4 / 11220
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
}

void Function_40() //Position: 0x2BF2 / 11250
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

int Function_41(var uParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x2C3C / 11324
{
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	if (Function_54(bParam1, uParam0->f_60, 1))
	{
		SQUAD_LEAVE(bParam1);
		if (IS_ACTOR_VALID(GET_MOUNT(bParam1)))
		{
			if (GET_MOUNT(bParam1) != Function_42(0, 0, 0, 0, 0, 0, 1, 0))
			{
				if (iParam3 == 1)
				{
					DESTROY_ACTOR(GET_MOUNT(bParam1));
				}
				else
				{
					Function_63(GET_MOUNT(bParam1), iParam2, 0, 2);
				}
			}
		}
		if (iParam3 == 1)
		{
			DESTROY_ACTOR(bParam1);
		}
		else
		{
			Function_63(bParam1, iParam2, 0, 2);
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
			Function_63(bParam1, 2, 0, 2);
		}
	}
	return 1;
}

int Function_42(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, var uParam6, bool bParam7) //Position: 0x2CE8 / 11496
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
	if (Global_3381 || Function_51(1))
	{
		Function_50(976, 0, 1);
	}
	bParam7 = bParam7;
	if (!bParam7)
	{
		if (!Function_49())
		{
			return "";
		}
	}
	if (!Function_47())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		bVar1 = IS_ACTOR_ALIVE(Global_12976.f_36);
	}
	if ((bVar1 && uParam6) && uParam0)
	{
		Function_476(GET_OBJECT_FROM_ACTOR(Global_12976.f_36));
		vVar2 = { StackVal, StackVal, Function_476(GET_OBJECT_FROM_ACTOR(Global_12976.f_36)) };
		Function_476(GET_OBJECT_FROM_ACTOR(Global_34573));
		vVar5 = { StackVal, StackVal, Function_476(GET_OBJECT_FROM_ACTOR(Global_34573)) };
		iVar8 = Function_46(StackVal, StackVal, vVar2, 0, 1, 1);
		if (iVar8 != 4294967294 || iVar8 != 4294967295)
		{
		}
		else
		{
			iVar9 = Function_46(StackVal, StackVal, vVar5, 0, 1, 1);
			if (iVar8 != iVar9)
			{
				if (Function_45() || NET_IS_IN_SESSION())
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
						Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_389(), bVar0, bParam2, bParam3, bParam4, 0.0f, uParam5, 0.0f);
						SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
					}
					else
					{
						Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_389(), 993, bParam2, bParam3, bParam4, 0.0f, uParam5, 0.0f);
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
				if (!Function_44(StackVal, StackVal, vVar10))
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
			Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_389(), bVar0, bParam2, bParam3, bParam4, 0.0f, uParam5, 0.0f);
			SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
		}
		else
		{
			if (bVar0 != 993)
			{
				(&Global_12976 + 36)->f_8 = (bVar0 - 976);
			}
			Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_389(), 993, bParam2, bParam3, bParam4, 0.0f, uParam5, 0.0f);
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
		Function_43(Global_12976.f_36, 0, 0, 0, 0, 0, 0);
	}
	if (Function_45() || NET_IS_IN_SESSION())
	{
		if (IS_ACTOR_VALID(Global_12976.f_36))
		{
			NET_ACTOR_SET_ALLOW_BLIP_SYNC(Global_12976.f_36, 0);
		}
	}
	return Global_12976.f_36;
}

void Function_43(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6) //Position: 0x3040 / 12352
{
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_ACTOR_CAN_BE_TARGETED(bParam0, bParam1);
		SET_ACTOR_CAN_BE_HARDLOCKED(bParam0, iParam2);
		SET_ACTOR_CAN_BE_SOFTLOCKED(bParam0, iParam6);
		SET_ACTOR_CAN_BE_BUMPTARGETED(bParam0, bParam3);
		SET_ACTOR_ONLY_HARDLOCK_IF_HOSTILE(bParam0, iParam5);
		SET_ACTOR_USE_FULLSCREEN_ACQUISITION(bParam0, iParam4);
	}
}

bool Function_44(vector3 vParam0) //Position: 0x307D / 12413
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

bool Function_45() //Position: 0x3095 / 12437
{
	return NET_IS_MANAGER_INITIALIZED();
}

var Function_46(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x309E / 12446
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

bool Function_47() //Position: 0x3139 / 12601
{
	if (Function_48() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_48() //Position: 0x314F / 12623
{
	return Global_12976.f_152;
}

bool Function_49() //Position: 0x315A / 12634
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_50(var uParam0, bool bParam1, bool bParam2) //Position: 0x317A / 12666
{
	Global_13038 = uParam0;
	if (bParam1)
	{
		Function_374(&Global_12976 + 36 + 20, 128);
	}
	if (bParam2)
	{
		Function_374(&Global_12976 + 36 + 20, 64);
	}
	return;
}

int Function_51(int iParam0) //Position: 0x31A7 / 12711
{
	int iVar0;
	
	if (!Function_53(iParam0))
	{
		return 0;
	}
	iVar0 = Function_52(iParam0);
	if (!Function_20(Function_52(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

int Function_52(int iParam0) //Position: 0x31DD / 12765
{
	if (!Function_53(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_53(int iParam0) //Position: 0x31F7 / 12791
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_54(bool bParam0, bool bParam1, bool bParam2) //Position: 0x320D / 12813
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

void Function_55() //Position: 0x324D / 12877
{
	bool bVar0;
	
	bVar0 = Function_59();
	if (IS_OBJECT_VALID(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	return;
}

void Function_56(int iParam0) //Position: 0x3265 / 12901
{
	Function_57(&Global_28842, iParam0);
	return;
}

void Function_57(var uParam0, int iParam1) //Position: 0x3273 / 12915
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_58(var uParam0) //Position: 0x328E / 12942
{
	Global_26316.f_56 = (Global_26316.f_56 || uParam0);
	return;
}

var Function_59() //Position: 0x32A1 / 12961
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

void Function_60(int iParam0) //Position: 0x3367 / 13159
{
	if (Function_375(iParam0->f_780, 0x10000000))
	{
		UI_EXIT("WHATEVA_prog");
		UI_EXIT("WHATEVA");
		HUD_TIMER_DISPLAY(0);
		UI_POP("Stagecoach_Job");
		Function_61(iParam0 + 780, 0x10000000);
	}
	return;
}

void Function_61(bool bParam0, bool bParam1) //Position: 0x33C1 / 13249
{
	*bParam0 = (*bParam0 - (*bParam0 && bParam1));
	return;
}

void Function_62(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x33D4 / 13268
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
	if (!Function_44(StackVal, StackVal, vParam1))
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
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam0, true);
}

int Function_63(bool bParam0, int iParam1, int iParam2, int iParam3) //Position: 0x34DC / 13532
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
					Function_33(bVar1, 0, 0, 0, 1);
				}
				bVar0++;
			}
		}
		Function_33(bParam0, iParam1, iParam2, iParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

void Function_64(bool bParam0, bool bParam1) //Position: 0x35BC / 13756
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "translib_state", bParam1);
	return;
}

void Function_65(int iParam0) //Position: 0x35DE / 13790
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
					if (Function_375(iParam0->f_780, 0x8000000))
					{
						Function_63(GET_ACTOR_FROM_OBJECT(bVar0), 2, 0, 4);
					}
					else
					{
						Function_63(GET_ACTOR_FROM_OBJECT(bVar0), 0, 0, 2);
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

void Function_66(int iParam0, int iParam1) //Position: 0x366A / 13930
{
	Function_67(iParam0, iParam1);
	return;
}

void Function_67(int iParam0, bool bParam1) //Position: 0x3677 / 13943
{
	vector3 vVar0;
	var uVar3;
	struct<8> Var6;
	float fVar14;
	
	if (IS_BLIP_VALID(Function_75(iParam0)))
	{
		REMOVE_BLIP(Function_75(iParam0));
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
	if (Function_74(iParam0))
	{
		Function_73();
	}
	if (IS_LAYOUTREF_VALID(iParam0->f_776))
	{
		if (IS_OBJECT_VALID(iParam0->f_940))
		{
			Function_72(iParam0->f_940);
		}
	}
	if (bParam1 == 1)
	{
		if (Function_71(iParam0))
		{
			if (IS_LAYOUTREF_VALID(iParam0->f_776))
			{
				if (IS_VOLUME_VALID(iParam0->f_920))
				{
					if (StackVal && !Function_44(StackVal, iParam0->f_628 != 3, *(iParam0 + 924)))
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
					Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_496("transGateway") };
					iParam0->f_940 = Function_70(StackVal, StackVal, iParam0->f_776, &Var6, vVar0, 0.0f, 0.0f, 0.0f, Global_34573, fVar14, 1, 3, 330, 4, 1, -1.0f, -1.0f, 0);
					Function_68(StackVal, StackVal, vVar0, 0, 16, 1);
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

void Function_68(vector3 vParam0, var uParam3, var uParam4, var uParam5) //Position: 0x3811 / 14353
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
		Function_69(Global_28185.f_12);
		CLEAN_OBJECTSET(Global_28185.f_12);
	}
	Global_28185.f_92 = 0;
	Global_28210.f_96 = uParam5;
}

void Function_69(bool bParam0) //Position: 0x38CD / 14541
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

var Function_70(bool bParam0, bool bParam1, vector3 vParam2, vector3 vParam5, bool bParam8, var uParam9, int iParam10, int iParam11, bool bParam12, int iParam13, var uParam14, float fParam15, float fParam16, var uParam17) //Position: 0x390D / 14605
{
	vector3 vVar0;
	bool bVar3;
	char* cVar4[32];
	bool bVar12;
	bool bVar13;
	
	vVar0 = { uParam9, 2.0f, uParam9 };
	vParam2.f_4 = (vParam2.y + 0,75f);
	bVar3 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(bParam0, bParam1, vParam2, vParam5, vVar0, iParam11, bParam8, iParam10, iParam13, 0, uParam14, uParam17);
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

bool Function_71(int iParam0) //Position: 0x39D8 / 14808
{
	if (IS_ACTOR_VALID(iParam0->f_860))
	{
		if (Function_375(iParam0->f_780, 8))
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

void Function_72(bool bParam0) //Position: 0x3A35 / 14901
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

void Function_73() //Position: 0x3ABF / 15039
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

bool Function_74(int iParam0) //Position: 0x3AEA / 15082
{
	if (Function_375(iParam0->f_584, 16))
	{
		return 1;
	}
	return 0;
}

var Function_75(int iParam0) //Position: 0x3B03 / 15107
{
	return iParam0->f_36;
}

void Function_76(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x3B0D / 15117
{
	int iVar0;
	
	iVar0 = iParam2;
	if (!iVar0 > *uParam0 && iVar0 <= 0)
	{
		return;
	}
	if (!Function_470(uParam0[iVar02], 1))
	{
		return;
	}
	if (!Function_470(uParam0[iVar02], 2))
	{
		return;
	}
	if (Function_470(uParam0[iVar02], 8))
	{
		STREAMING_EVICT_ACTOR((*uParam1)[iVar03], 4294967295);
		Function_82(uParam0[iVar02], 8);
	}
	Function_82(uParam0[iVar02], 1);
	if (!IS_PERS_CHAR_VALID(StackVal))
	{
		return;
	}
	Function_81(StackVal);
	if (bParam3)
	{
		Function_77(uParam0, uParam1, iParam2, 0);
	}
}

void Function_77(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x3BA7 / 15271
{
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (!IS_PERS_CHAR_ALIVE(StackVal))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(StackVal) > GET_CURRENT_GAME_TIME())
			{
				Function_80(uParam0[iParam22], 4);
				uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
				ADD_TIME(uParam0[iParam22] + 4, Function_79(Global_29007), Function_78(Global_29007), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_470(uParam0[iParam22], 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(StackVal, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(StackVal);
			uParam1[iParam23]->f_8 = "";
		}
	}
	else if (!Function_470(uParam0[iParam22], 1) && !bParam3)
	{
		Function_80(uParam0[iParam22], 4);
		uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
		ADD_TIME(uParam0[iParam22] + 4, Function_79(Global_29007), Function_78(Global_29007), false, 0);
	}
}

int Function_78(int iParam0) //Position: 0x3CF6 / 15606
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

int Function_79(int iParam0) //Position: 0x3D21 / 15649
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

void Function_80(var uParam0, int iParam1) //Position: 0x3D55 / 15701
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

int Function_81(bool bParam0) //Position: 0x3D64 / 15716
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

void Function_82(var uParam0, int iParam1) //Position: 0x3DFE / 15870
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_83(bool bParam0) //Position: 0x3E15 / 15893
{
	int iVar0;
	
	if (!Function_20(bParam0))
	{
		Function_84();
		return;
	}
	iVar0 = Function_19(bParam0);
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_15("DEED_CANCEL", bParam0);
	}
	Global_13172[bParam011].f_4 = 0;
	Global_3376 = 1;
	return;
}

void Function_84() //Position: 0x3E68 / 15976
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
			iVar0 = (iVar0 + 1);
		}
		iVar1++;
	}
	iVar0 = 1;
	iVar0 = 0;
	while (iVar0 <= Global_13172)
	{
		if (!Global_13172[iVar011] != 0)
		{
			Function_85(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
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

void Function_85(bool bParam0, var uParam1, var uParam2, var uParam3) //Position: 0x40B0 / 16560
{
	*uParam3 = (bParam0 && 15);
	*uParam1 = SHIFT_RIGHT(bParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(bParam0, 12) & 255;
}

bool Function_86(int iParam0) //Position: 0x40D9 / 16601
{
	if (!iParam0 != 0)
	{
		LOG_ERROR("Asking about a player with an index not = 0. Multiplayer Law Enforcement not yet implemented.");
		return 0;
	}
	return Global_3403;
}

var Function_87(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x414F / 16719
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_389(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "SolomonFolly_Cutscene", 2, 1);
	}
	Function_88(&bVar0);
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

void Function_88(int iParam0) //Position: 0x41D0 / 16848
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_90(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_89(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 9.0f, 0, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 1.0f, 1);
	return;
}

void Function_89(int iParam0) //Position: 0x4213 / 16915
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2110,398f, 18,19664f, 2616,97f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,040912f, 1,25152f, -0,001435f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_90(var uParam0) //Position: 0x4281 / 17025
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, -2106,158f, 20,49886f, 2617,459f);
	SET_CAMERASHOT_ORIENTATION(*uParam0, -0,044474f, 1,351706f, -0,001436f, 1);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_91() //Position: 0x42EF / 17135
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "SoloFolly_ReturnsSafeNoOpen", "SoloFolly_ReturnsSafeNoOpen", false, 3, 1, 0, 1);
		Function_92(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_92(bool bParam0) //Position: 0x434E / 17230
{
	Function_93(0, Global_34573, bParam0, 0);
	Function_93(1, bLocal_41, bParam0, 0);
	Function_93(2, bLocal_42, bParam0, 0);
	return;
}

void Function_93(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x4370 / 17264
{
	bool bVar0;
	
	iParam3 = iParam3;
	if (Function_375(bParam2, Function_94(bParam0)))
	{
		bVar0 = bParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, bParam1, 0);
	}
}

bool Function_94(bool bParam0) //Position: 0x4395 / 17301
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_95(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x43A1 / 17313
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_20(bParam0))
	{
		Function_84();
		return;
	}
	iVar0 = Function_19(bParam0);
	if (!iVar0 != 1)
	{
		Global_13172[bParam011].f_12++;
	}
	else
	{
		Global_6269 = Function_17(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_13(Global_6269) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_139();
		CLEAR_JOURNAL_ENTRY(bVar11);
		SET_JOURNAL_ENTRY_PROGRESS(bVar11, -2.0f, false, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(bVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(bVar11, true);
		}
	}
	Global_13172[bParam011].f_36 = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_15("DEED_COMPLETE", bParam0);
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
			Function_133(bParam0);
		}
		if (bParam1)
		{
			if (bParam2)
			{
				switch (iVar0)
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
						switch (Function_17(bParam0))
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
			Function_98(1);
			Function_97(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_96(bParam0, &Var14);
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

void Function_96(int iParam0, int iParam1) //Position: 0x45B3 / 17843
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_97(bool bParam0, int iParam1) //Position: 0x45ED / 17901
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = bParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_45())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_98(bool bParam0) //Position: 0x462F / 17967
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_127();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_99();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_61(&Global_63095, 1);
		Function_61(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_99() //Position: 0x4680 / 18048
{
	Function_125();
	Function_124();
	Function_124();
	Function_123();
	Function_123();
	Function_122();
	Function_122();
	Function_107();
	Function_107();
	if (!Function_45())
	{
		Function_104();
		Function_103();
		Function_102();
		Function_101();
	}
	Function_100();
	return;
}

void Function_100() //Position: 0x46B3 / 18099
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

void Function_101() //Position: 0x47B9 / 18361
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

void Function_102() //Position: 0x47EC / 18412
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

void Function_103() //Position: 0x497A / 18810
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

void Function_104() //Position: 0x4B2E / 19246
{
	Function_105(&Global_28260, 1, 0);
	return;
}

void Function_105(int iParam0, bool bParam1, var uParam2) //Position: 0x4B3C / 19260
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
	void fVar11;
	bool bVar12;
	void fVar13;
	
	bVar0 = Function_106();
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
			fVar11 = ACTOR_GET_COLLECTABLE_CRC_AT_INDEX(iVar1, bVar0);
			(*iParam0 + 1132)[iVar12] = fVar11;
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
		fVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(bVar0);
		if (fVar13 != 4294967295)
		{
			iParam0->f_1128 = GET_WEAPON_EQUIPPED(bVar0, fVar13);
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

var Function_106() //Position: 0x4D2D / 19757
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_107() //Position: 0x4D42 / 19778
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
				iVar2 = ((Function_121((50 + iVar4)) + Function_121((183 + iVar4))) + Function_121((90 + iVar4)));
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
	Function_108(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_108(int iParam0, bool bParam1, bool bParam2) //Position: 0x4DDD / 19933
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
		Function_120(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_119(iParam0);
	if (bParam2)
	{
		Function_109(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_109(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x5078 / 20600
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_118(390))), 32);
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
					bVar19 = (Function_174(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_174(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_116(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_113(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_111(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_110(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_389(), &Var9);
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

var Function_110(int iParam0) //Position: 0x56A5 / 22181
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_111(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x56B6 / 22198
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_112("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_112("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_112("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_112(char* cParam0, char* cParam1) //Position: 0x57AB / 22443
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_113(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x57C4 / 22468
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_115(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_114(Function_115(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_114(int iParam0, int iParam1) //Position: 0x5829 / 22569
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_115(int iParam0, bool bParam1) //Position: 0x583B / 22587
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_116(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x584D / 22605
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
	if (((Function_117(iParam0) != 19 || Function_117(iParam0) != 17) || Function_117(iParam0) != 10) || Function_117(iParam0) != 9)
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

int Function_117(int iParam0) //Position: 0x597D / 22909
{
	return Global_35278[iParam020].f_48;
}

var Function_118(int iParam0) //Position: 0x598C / 22924
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_119(int iParam0) //Position: 0x59C9 / 22985
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

int Function_120(int iParam0, bool bParam1, bool bParam2) //Position: 0x5B63 / 23395
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

int Function_121(bool bParam0) //Position: 0x5D7D / 23933
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_122() //Position: 0x5DBE / 23998
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
		iVar2 = ((Function_121((50 + iVar3) + 15) + Function_121((183 + iVar3) + 15)) + Function_121((90 + iVar3) + 15));
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
	Function_108(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_123() //Position: 0x5E47 / 24135
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
			iVar2 = ((Function_121((50 + iVar3) + 8) + Function_121((183 + iVar3) + 8)) + Function_121((90 + iVar3) + 8));
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
	Function_108(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_124() //Position: 0x5EDE / 24286
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
		iVar2 = ((Function_121((50 + iVar3)) + Function_121((183 + iVar3))) + Function_121((90 + iVar3)));
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
	Function_108(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_125() //Position: 0x5F5D / 24413
{
	Function_126(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_108(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_126(int iParam0, bool bParam1, int iParam2) //Position: 0x5F83 / 24451
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
	Function_120(iParam0, bParam1, 1);
	Function_119(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_109(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_127() //Position: 0x618D / 24973
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	Function_128(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
	vVar0 = { StackVal, StackVal, Function_128(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	if (Function_44(StackVal, StackVal, vVar0))
	{
		vVar0 = { StackVal, StackVal, Global_34574 };
		vVar0.f_4 = (vVar0.y + 0,5f);
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

vector3 Function_128(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x622E / 25134
{
	int iVar0;
	
	iVar0 = Function_131(uParam2, uParam3);
	if (Function_130(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_374(&Global_63095, 1);
			Function_61(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_374(&Global_63095, 2);
			Function_61(&Global_63095, 1);
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
			*uParam0 = 89,88f;
			return -2158,348f, 19,944f, 2597,452f;
		}
		*uParam0 = Global_16537[iVar021].f_12;
		return StackVal, StackVal, Global_16537[iVar021];
	}
	if (Global_16875)
	{
		Function_374(&Global_63095, 2);
		Function_61(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833,843f, 50,332f, 2418,003f;
	}
	Function_129();
	return StackVal, StackVal, Function_129();
}

vector3 Function_129() //Position: 0x6315 / 25365
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_130(int iParam0) //Position: 0x631E / 25374
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_131(bool bParam0, bool bParam1) //Position: 0x6334 / 25396
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
				fVar2 = Function_132(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_132(StackVal, StackVal, Global_34574, -2833,843f, 50,332f, 2418,003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_130(bVar0) && !bParam1)
	{
		bVar0 = Function_131(bParam0, 1);
	}
	return bVar0;
}

float Function_132(vector3 vParam0, vector3 vParam3) //Position: 0x63FB / 25595
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_133(bool bParam0) //Position: 0x6418 / 25624
{
	int iVar0;
	int iVar1;
	
	if (!Function_18(bParam0))
	{
		return;
	}
	switch (Function_19(bParam0))
	{
		case 0x00000001:
			iVar1 = Function_17(bParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_138(12, 1, 0, 0);
				Function_137(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_138(13, 1, 0, 0);
				Function_137(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_138(14, 1, 0, 0);
				Function_137(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_138(15, 1, 0, 0);
				Function_137(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_138(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_17(bParam0))
			{
				case 0x00000000:
					if (Function_136(bParam0) == 1)
					{
						iVar0 = Function_135(bParam0);
						if (Function_134(iVar0))
						{
							if (iVar0 == Global_30723[5])
							{
								Function_137(4, 18);
							}
							else if (iVar0 == Global_30693[3])
							{
								Function_137(4, 10);
							}
							else if (iVar0 == Global_30723[6])
							{
								Function_137(4, 16);
							}
							else if (iVar0 == Global_30668[3])
							{
								Function_137(4, 6);
							}
							else if (iVar0 == Global_30640[13])
							{
								Function_137(4, 3);
							}
							else if (iVar0 == Global_30693[7])
							{
								Function_137(4, 11);
							}
							else if (iVar0 == Global_30640[6])
							{
								Function_137(4, 0);
							}
							else if (iVar0 == Global_30693[10])
							{
								Function_137(4, 15);
							}
							else if (iVar0 == Global_30693[8])
							{
								Function_137(4, 14);
							}
							else if (iVar0 == Global_30640[11])
							{
								Function_137(4, 2);
							}
							else if (iVar0 == Global_30668[6])
							{
								Function_137(4, 7);
							}
							else if (iVar0 == Global_30723[3])
							{
								Function_137(4, 17);
							}
							else if (iVar0 == Global_30685[5])
							{
								Function_137(4, 8);
							}
							else if (iVar0 == Global_30693[9])
							{
								Function_137(4, 13);
							}
							else if (iVar0 == Global_30693[11])
							{
								Function_137(4, 12);
							}
							else if (iVar0 == Global_30640[7])
							{
								Function_137(4, 1);
							}
							else if (iVar0 == Global_30679[3])
							{
								Function_137(4, 5);
							}
							else if (iVar0 == Global_30693[4])
							{
								Function_137(4, 9);
							}
							else if (iVar0 == Global_30658[7])
							{
								Function_137(4, 4);
							}
							else if (iVar0 == Global_30723[4])
							{
								Function_137(4, 19);
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
								Function_138(363, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[1])
							{
								Function_138(364, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[2])
							{
								Function_138(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_135(bParam0) == 0)
			{
				if (Function_136(bParam0) == 1)
				{
					Function_138(458, 1, 0, 0);
					iVar0 = Function_17(bParam0);
					if (Function_134(iVar0))
					{
						if (iVar0 == Global_30668[2])
						{
							Function_137(2, 10);
						}
						else if (iVar0 == Global_30658[2])
						{
							Function_137(2, 11);
						}
						else if (iVar0 == Global_30640[2])
						{
							Function_137(2, 12);
						}
						else if (iVar0 == Global_30658[0])
						{
							Function_137(2, 13);
						}
						else if (iVar0 == Global_30658[3])
						{
							Function_137(2, 14);
						}
						else if (iVar0 == Global_30685[2])
						{
							Function_137(2, 15);
						}
						else if (iVar0 == Global_30685[1])
						{
							Function_137(2, 16);
						}
						else if (iVar0 == Global_30679[1])
						{
							Function_137(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_136(bParam0) == 1)
			{
				Function_138(400, 1, 0, 0);
			}
			switch (Function_17(bParam0))
			{
				case 0x00000001:
					Function_138(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_137(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_137(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_137(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_138(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_137(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_137(6, 9);
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

bool Function_134(int iParam0) //Position: 0x68F4 / 26868
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_135(bool bParam0) //Position: 0x690A / 26890
{
	if (!Function_18(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 4) & 255;
}

int Function_136(bool bParam0) //Position: 0x6929 / 26921
{
	if (!Function_18(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_137(int iParam0, bool bParam1) //Position: 0x6943 / 26947
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

int Function_138(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x69AA / 27050
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
	Function_120(iParam0, TO_FLOAT(bParam1), 1);
	Function_119(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_109(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_139() //Position: 0x6BCA / 27594
{
	int iVar0;
	int iVar1;
	
	if (!Function_53(Global_6269))
	{
		return;
	}
	iVar0 = Function_121(24);
	iVar1 = Function_52(Global_6269);
	if (!Function_53(iVar0) && Function_142(iVar1) < 0)
	{
		Function_108(24, Global_6269, 0);
		Function_140(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_142(Function_52(iVar0)))
	{
		Function_108(24, Global_6269, 0);
		Function_140(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_140(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x6C4A / 27722
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
		Function_141(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_141(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x6F9C / 28572
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
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 0, false, false, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 1, 0, 0, false, false, 0);
		}
	}
}

int Function_142(int iParam0) //Position: 0x701F / 28703
{
	if (!Function_20(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_143(bool bParam0) //Position: 0x7039 / 28729
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (Function_17(bParam0) == Global_30640[2])
	{
		if (Function_172(2) && !Function_171(2))
		{
			Function_163(2, 2, 0, 0, 1);
		}
	}
	if (Function_17(bParam0) == Global_30658[3])
	{
		if (Function_172(6) && !Function_171(6))
		{
			Function_163(6, 16, 0, 0, 1);
		}
	}
	if (!Function_172(10) || Function_171(10))
	{
		return;
	}
	bVar0 = MAKE_TIME_OF_DAY_EX((GET_DAY(false) - 1), GET_HOUR(false), GET_MINUTE(false), GET_SECOND(false));
	bVar1 = GET_TIME_OF_DAY();
	iVar2 = Function_136(Global_30734);
	if (Global_30734 == bParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_136(Global_30736);
	if (Global_30736 == bParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_136(Global_30738);
	if (Global_30738 == bParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_136(Global_30737);
	if (Global_30737 == bParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_136(Global_30739);
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
	Function_144(10, 0, 1);
	return;
}

void Function_144(bool bParam0, bool bParam1, bool bParam2) //Position: 0x71E0 / 29152
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_162(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_171(bParam0))
	{
		if (!Function_172(bParam0))
		{
			Function_148(bParam0, 1, 0, 0);
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
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, false, false, 0, 0, 2, 0, 0, 0);
			}
		}
		Function_138(457, 1, 0, 0);
		Function_147(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (bParam2)
		{
			if (!Function_146(0, 0, 1, 1))
			{
				Function_98(1);
				Function_97(1, 0);
			}
			else
			{
				Function_145();
			}
		}
	}
	return;
}

void Function_145() //Position: 0x737E / 29566
{
	return;
}

bool Function_146(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x7384 / 29572
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

void Function_147(bool bParam0, int iParam1) //Position: 0x7428 / 29736
{
	if (!Function_162(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

void Function_148(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x747D / 29821
{
	struct<8> Var0;
	
	if (!Function_162(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_161(3))
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_172(bParam0))
	{
		Function_138(456, 1, 0, 0);
		Function_147(bParam0, 2);
		if (bParam2)
		{
			if (!Function_146(0, 0, 1, 1))
			{
				Function_98(1);
				Function_97(1, 5);
			}
			else
			{
				Function_145();
			}
		}
		Function_156(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_155() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, false, false, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_155() || Global_3380)
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
			{
				DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
			}
		}
		if (bParam3)
		{
			stradd(&Var0, "_tip", 32);
			Function_506(&Var0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_154(Global_76846, 2))
		{
			Function_149(Global_34573, 2, 1, 0);
		}
	}
}

void Function_149(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x75C7 / 30151
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_151(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_150(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_150(char* cParam0, int iParam1) //Position: 0x7633 / 30259
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

bool Function_151(bool bParam0, var uParam1, int iParam2) //Position: 0x766A / 30314
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
		if (Function_153(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_152(uVar0))
		{
			case 0x00000002:
				if (!Function_154(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_152(char* cParam0) //Position: 0x76E2 / 30434
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

int Function_153(int iParam0) //Position: 0x7783 / 30595
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_61(&iVar1, 2147483648);
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

bool Function_154(int iParam0, int iParam1) //Position: 0x77C0 / 30656
{
	if ((iParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_155() //Position: 0x77D3 / 30675
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_156(bool bParam0) //Position: 0x7800 / 30720
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
			if (Function_160(bParam0, Function_94(bVar24)))
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
			if (Function_160(bParam0, Function_94(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_159(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), false, 0);
		Function_158(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_157(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_157(int iParam0) //Position: 0x79B0 / 31152
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_162(iParam0))
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

void Function_158(bool bParam0, bool bParam1) //Position: 0x7A07 / 31239
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

var Function_159(int iParam0) //Position: 0x7A2C / 31276
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_162(iParam0))
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

bool Function_160(bool bParam0, int iParam1) //Position: 0x7A82 / 31362
{
	int iVar0;
	
	if (!Function_162(bParam0))
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

bool Function_161(int iParam0) //Position: 0x7AE1 / 31457
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_162(int iParam0) //Position: 0x7AFD / 31485
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

void Function_163(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x7B13 / 31507
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_162(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_161(3) || iParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_170(bParam0, 2))
	{
		Function_138(456, 1, 0, 0);
		Function_147(bParam0, 2);
		if (!bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_506(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_160(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_147(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_146(0, 0, 1, 1))
			{
				Function_98(1);
				Function_97(1, 0);
			}
			else
			{
				Function_145();
			}
		}
		Function_156(bParam0);
		if (StackVal && !Function_375(((((!Function_155() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, false, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_375((((Function_155() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_154(Global_76846, 2))
		{
			Function_149(Global_34573, 2, 1, 0);
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_165();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_164(3, bParam1);
				break;
			
			case 0x00000005:
				Function_164(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_164(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_164(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_164(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_164(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_137(2, 24);
				break;
			
			case 0x00000003:
				Function_137(2, 25);
				break;
			
			case 0x0000000F:
				Function_137(2, 26);
				break;
			
			case 0x0000000D:
				Function_137(2, 27);
				break;
			
			case 0x0000000E:
				Function_137(2, 28);
				break;
			}
	}
}

void Function_164(int iParam0, bool bParam1) //Position: 0x7DA2 / 32162
{
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || bParam1);
	return;
	return;
}

void Function_165() //Position: 0x7E01 / 32257
{
	if (Function_162(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_169(Global_28180);
			Global_28180.f_8 = Function_166(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_169(Global_28180);
			Global_28180.f_8 = Function_166(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_166(int iParam0, int iParam1) //Position: 0x7E7C / 32380
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
					if (Function_168(6, 0) || Function_168(12, 0))
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
					vVar0 = { -2177,057f, 16,426f, 2626,285f };
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
					if (Function_167(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_168(5, 0))
					{
						vVar0 = { -4120,147f, 18,356f, 3039,531f };
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
					vVar0 = { -4178,186f, 32,616f, 4582,207f };
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
					if (Function_167(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_167(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_167(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_167(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_168(26, 0))
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
					if (Function_167(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_167(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_167(27) && iVar18)
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
					if (Function_167(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_167(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_167(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_167(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_168(17, 0) && iVar15)
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
					if (Function_167(19) && iVar19)
					{
						vVar0 = { -1708,36f, 46,18f, 2175,89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_168(6, 0) && Function_167(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_167(17) && iVar19)
					{
						vVar0 = { -1687,208f, 53,208f, 2140,491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_168(9, 0) && Function_167(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_167(15) && iVar19)
					{
						vVar0 = { -1709,084f, 55,216f, 2104,631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_168(8, 0) && iVar19)
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
	if (Function_44(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_44(StackVal, StackVal, vVar3))
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
	if (!Function_44(StackVal, StackVal, vVar3))
	{
		bVar20 = ADD_BLIP_FOR_COORD(&vVar0, 440, 0, 2, 0);
		SET_BLIP_SCALE(bVar20, ((vVar3.x + vVar3.z) / 2.0f));
		SET_BLIP_COLOR(bVar20, 0,58f, 0,35f, 0,72f, 0,5f);
		SET_BLIP_PRIORITY(bVar20, 3);
		SET_BLIP_NAME(bVar20, &cVar7);
		return bVar20;
	}
	return "";
}

int Function_167(int iParam0) //Position: 0x8A6F / 35439
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

bool Function_168(int iParam0, bool bParam1) //Position: 0x8A84 / 35460
{
	int iVar0;
	
	iVar0 = Function_52(iParam0);
	if (!Function_18(iVar0))
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

int Function_169(int iParam0) //Position: 0x8AC1 / 35521
{
	int iVar0;
	int iVar1;
	
	if (!Function_162(iParam0))
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

bool Function_170(int iParam0, int iParam1) //Position: 0x8B10 / 35600
{
	int iVar0;
	
	if (!Function_162(iParam0))
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

bool Function_171(int iParam0) //Position: 0x8B3D / 35645
{
	if (!Function_162(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_170(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_172(int iParam0) //Position: 0x8B8E / 35726
{
	if (!Function_162(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_170(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

int Function_173(int iParam0, bool bParam1, bool bParam2) //Position: 0x8BE0 / 35808
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
		Function_120(iParam0, bParam1, 0);
	}
	Global_34581[iParam0] = bParam1;
	Function_119(iParam0);
	if (bParam2)
	{
		Function_109(iParam0, 1, bParam1, 0, 0, 0x40400000, 0, 0);
	}
	return 1;
}

float Function_174(int iParam0) //Position: 0x8E4C / 36428
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_175(int iParam0, bool bParam1, bool bParam2) //Position: 0x8E85 / 36485
{
	int iVar0;
	bool bVar1;
	
	if (Function_187(0) && (!Global_3380 || iParam0 == 100))
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
	iVar0 = Function_121(3);
	Function_184();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_182(3, bVar1);
		if (!bParam2)
		{
			if (!Function_154(Global_76848, 4))
			{
				Function_149(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_138(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_174(3));
	iVar0 = Function_121(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_177(4, Function_181(Global_12976.f_156), 1);
				Function_176(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_177(4, Function_181(Global_12976.f_156), 1);
				Function_176(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_177(4, Function_181(Global_12976.f_156), 1);
				Function_176(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_177(4, Function_181(Global_12976.f_156), 1);
				Function_176(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_177(4, Function_181(Global_12976.f_156), 1);
				Function_176(Global_12976.f_152, Global_12976.f_156);
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

void Function_176(int iParam0, int iParam1) //Position: 0x9048 / 36936
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

int Function_177(int iParam0, char* cParam1, bool bParam2) //Position: 0x92A6 / 37542
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
	Function_140(iParam0, cParam1, 0, 1);
	iVar1 = Function_178();
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

int Function_178() //Position: 0x942B / 37931
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
	Function_179();
	return 0;
}

void Function_179() //Position: 0x94CA / 38090
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
		Function_180(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_180(int iParam0) //Position: 0x9579 / 38265
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

var Function_181(int iParam0) //Position: 0x95D7 / 38359
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

int Function_182(int iParam0, bool bParam1) //Position: 0x9666 / 38502
{
	bool bVar0;
	int iVar1;
	
	Function_138(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_183(iParam0, 4294967295);
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
	iVar1 = Function_178();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

var Function_183(int iParam0, int iParam1) //Position: 0x9803 / 38915
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

void Function_184() //Position: 0x9844 / 38980
{
	Function_186(3, 0.0f);
	Function_185(3, 10000.0f);
	return;
}

int Function_185(int iParam0, int iParam1) //Position: 0x985A / 39002
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_186(int iParam0, int iParam1) //Position: 0x989A / 39066
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_187(int iParam0) //Position: 0x98DA / 39130
{
	return (*&Global_12976 + 104)[iParam0];
}

void Function_188(int iParam0, bool bParam1, bool bParam2) //Position: 0x98E9 / 39145
{
	int iVar0;
	bool bVar1;
	
	if (Function_187(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_121(1);
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
			Function_182(1, bVar1);
			if (!bParam2)
			{
				if (!Function_154(Global_76848, 1))
				{
					Function_149(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_191(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_154(Global_76848, 2))
				{
					Function_149(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_138(1, bVar1, 0, 0);
	}
	else
	{
		Function_190(1, (4294967295 * bVar1), 0);
	}
	if (Function_121(1) <= 4294962296)
	{
		Function_108(1, 4294962296, 0);
	}
	else if (Function_121(1) >= 5000)
	{
		Function_108(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_174(1));
	iVar0 = Function_121(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_177(2, Function_189(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_177(2, Function_189(Global_12976.f_152), 0);
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
				Function_177(2, Function_189(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_177(2, Function_189(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_177(2, Function_189(Global_12976.f_152), 1);
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
				Function_177(2, Function_189(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_177(2, Function_189(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_177(2, Function_189(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_177(2, Function_189(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_177(2, Function_189(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_177(2, Function_189(Global_12976.f_152), 1);
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
				Function_177(2, Function_189(Global_12976.f_152), 0);
			}
			break;
	}
	Function_176(Global_12976.f_152, Global_12976.f_156);
	return;
}

var Function_189(int iParam0) //Position: 0x9BFE / 39934
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

int Function_190(int iParam0, bool bParam1, int iParam2) //Position: 0x9CA1 / 40097
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
	Function_119(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_109(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_191(int iParam0, bool bParam1) //Position: 0x9E9C / 40604
{
	bool bVar0;
	int iVar1;
	
	Function_190(iParam0, bParam1, 0);
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
	iVar1 = Function_183(iParam0, 4294967295);
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
	iVar1 = Function_178();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

int Function_192(bool bParam0, bool bParam1, bool bParam2) //Position: 0xA038 / 41016
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (bParam1)
	{
		if (GET_ITEM_COUNT(Function_193(bParam0), Function_106()) == 0)
		{
			ADD_ITEM(Function_193(bParam0), Function_106(), bParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_193(bParam0), Function_106(), bParam2);
	return 1;
}

var Function_193(bool bParam0) //Position: 0xA083 / 41091
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

int Function_194(bool bParam0, bool bParam1) //Position: 0xA174 / 41332
{
	bool bVar0;
	
	bVar0 = Function_121(0);
	if ((Function_121(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_138(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_121(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_138(597, bParam0, 0, 0);
	}
	if ((Function_121(597) + Function_121(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

bool Function_195(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xA23F / 41535
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
		bVar0 = (bVar0 * (0,75f + ((TO_FLOAT(Function_121(5)) / 100.0f) * 0,5f)));
	}
	if (bParam3)
	{
		if (HAS_ITEM(Function_193(17), Global_34573))
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

void Function_196() //Position: 0xA341 / 41793
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_197(bool bParam0, bool bParam1, bool bParam2) //Position: 0xA356 / 41814
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

void Function_198(bool bParam0, bool bParam1) //Position: 0xA3A0 / 41888
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

void Function_199(bool bParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, var uParam6, bool bParam7) //Position: 0xA3D6 / 41942
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

void Function_200(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9) //Position: 0xA4C0 / 42176
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
		bVar0 = Function_106();
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
					RESET_ANIM_SET_FOR_ACTOR(bVar0, false);
				}
				else
				{
					RESET_ANIM_SET_FOR_ACTOR(bVar0, true);
				}
			}
			if (Function_45())
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
		Function_138(21, 1, 0, 0);
	}
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam7)
	{
		Function_196();
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
	Function_201(iParam9);
}

void Function_201(bool bParam0) //Position: 0xA5B0 / 42416
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

void Function_202() //Position: 0xA655 / 42581
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "SoloFollyFTE_LawAskHelp_v1_AA", "SoloFollyFTE_LawAskHelp_v1_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "SoloFollyFTE_LawAskHelp_v1_AB", "SoloFollyFTE_LawAskHelp_v1_AB", false, 1, 1, 0, 1);
		Function_92(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_203(bool bParam0, bool bParam1) //Position: 0xA701 / 42753
{
	Function_374(bParam0, 128);
	if (!IS_ACTOR_RIDING_VEHICLE(Global_34573))
	{
		Function_204("sol_FTE_BackInWagon", 0, -1.0f, 2, 0, 0);
		Function_66(bParam1, 1);
		return 2;
	}
	return 0;
}

int Function_204(char* cParam0, int iParam1, float fParam2, int iParam3, char* cParam4, int iParam5) //Position: 0xA740 / 42816
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

bool Function_205(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, bool bParam9, float fParam10, bool bParam11) //Position: 0xA7BF / 42943
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	
	*iParam1 = 0;
	if (!iLocal_27)
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, *fParam10))
		{
			Function_486(iParam0, 0);
			iLocal_27 = 1;
		}
	}
	if (!Function_375(*bParam2, 4096))
	{
		if (IS_LAYOUTREF_VALID(Global_30616))
		{
			if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Global_30616, "solv_region")) || IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Global_30616, "chov_armadillo")))
			{
				Function_487(iParam0, 0);
			}
			else
			{
				Function_487(iParam0, 1);
				SET_PLAYER_ENDLESS_READYMODE(0, 0);
				if (!iLocal_23)
				{
					if (!Function_168(23, 0))
					{
						if (DECOR_CHECK_EXIST(Global_34573, "nPrintHelp"))
						{
							if (!HUD_IS_SHOWING_HELP_TEXT())
							{
								Function_204("sol_FTE_Help_Stagecoach_01", 0, -1.0f, 1, 0, 0);
								Function_204("sol_FTE_Help_Stagecoach_02", 0, -1.0f, 1, 0, 0);
								Function_204("sol_FTE_Help_Stagecoach_03", 0, -1.0f, 1, 0, 0);
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
				Function_374(bParam2, 4096);
			}
		}
	}
	else if (!Function_375(*bParam2, 8192))
	{
		if (IS_LAYOUTREF_VALID(Global_30616))
		{
			if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Global_30616, "armv_region")))
			{
				HUD_CLEAR_HELP();
				HUD_CLEAR_HELP_QUEUE();
				AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
				Function_487(iParam0, 0);
				Function_369(iParam0);
				Function_374(bParam2, 8192);
			}
		}
	}
	if (Function_375(*bParam2, 128))
	{
		if (!iLocal_22)
		{
			Function_368(iParam0, Global_34573);
			if (GET_NUM_DRAFT_POSITIONS(*bParam11) == 2)
			{
				Function_368(iParam0, GET_DRAFT_ACTOR(false, *bParam11));
				Function_368(iParam0, GET_DRAFT_ACTOR(true, *bParam11));
			}
			iLocal_22 = 1;
		}
		iVar0 = Function_221(iParam0, 0);
		switch (iVar0)
		{
			case 0x00000000:
				if (Function_375(*bParam2, 4096))
				{
					if (Function_220(iParam0))
					{
						if (!iLocal_25)
						{
							AUDIO_MUSIC_SET_MOOD("CHASE", 0, 4294967295, 4294967295);
							iLocal_25 = 1;
						}
					}
				}
				if (Function_86(0) && !iLocal_24)
				{
					iLocal_24 = 1;
					*iParam1 = 4294966630;
					return 0;
					iVar0 = 11;
				}
				if (!Function_375(*bParam2, 16384))
				{
					if (Function_219(iParam0 + 1004))
					{
						bVar1 = Function_217(iParam0 + 1004);
						if (SQUAD_IS_VALID(bVar1))
						{
							if (SQUAD_GET_SIZE(bVar1) != 0)
							{
								bVar2 = Function_214(Global_34573, bVar1);
								if (IS_ACTOR_VALID(bVar2))
								{
									if (Function_395(Global_34573, bVar2) > 15.0f)
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
										Function_374(bParam2, 16384);
									}
								}
							}
						}
					}
				}
				if (Function_212(Global_30640[0]) && !Function_375(*bParam2, 512))
				{
					if (!IS_ACTOR_VALID(*bParam3))
					{
						*bParam3 = Function_209(&Global_6298, &Global_7189, 4, 1, 0, 1);
						if (IS_ACTOR_VALID(*bParam3))
						{
							DECOR_SET_BOOL(*bParam3, "CanBeLasso", false);
							TELEPORT_ACTOR(*bParam3, &vLocal_28, 1, 1, 1);
							Function_374(bParam2, 512);
							*uParam5 = Function_207("narmadillo", "ruinedbank", 1);
							if (IS_DOOR_VALID(*uParam5))
							{
								Function_206(*uParam5, 1);
							}
							vVar3 = { -2130,153f, 16,612f, 2625,597f };
							*uParam7 = CREATE_GRINGO_IN_LAYOUT(*bParam6, Function_389(), "$/content/scripting/gringo/simplegringo/shakehands_link", vVar3, 0.0f, -17,615f, 0.0f);
							SET_ACTOR_UPDATE_PRIORITY(*bParam3, false);
							AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(*bParam3, false);
							TASK_PRIORITY_SET(*bParam3, true);
							TASK_FACE_ACTOR(*bParam3, Global_34573, 1, 3212836864);
							RESET_ANIM_SET_FOR_ACTOR(*bParam3, true);
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
				Function_374(bParam2, 32768);
				*iParam1 = 666;
				Function_66(iParam0, 0);
				return 0;
				break;
			
			case 0x0000000A:
				*iParam1 = 4294966630;
				Function_66(iParam0, 0);
				return 0;
				break;
			
			case 0x00000012:
				Function_204("SOL_Help_KilledAnimals", 0, -1.0f, 1, 0, 0);
				Function_66(iParam0, 0);
				return 0;
				break;
			
			case 0x00000002:
				Function_61(bParam2, 16384);
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

void Function_206(bool bParam0, bool bParam1) //Position: 0xADAE / 44462
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

int Function_207(var uParam0, var uParam1, int iParam2) //Position: 0xADFF / 44543
{
	return Function_208(Global_29006, uParam0, uParam1, iParam2);
}

int Function_208(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0xAE11 / 44561
{
	char* cVar0[8];
	char* cVar2[32];
	bool bVar10;
	
	if (!Function_134(iParam0))
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

var Function_209(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5) //Position: 0xAEAD / 44717
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	
	iVar0 = uParam2;
	if (!iVar0 > *uParam0 && iVar0 <= 0)
	{
		return "";
	}
	if (Function_470(uParam0[iVar02], 1))
	{
		return "";
	}
	if (!Function_470(uParam0[iVar02], 2))
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
			if (!Function_470(uParam0[iVar02], 8))
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], true, false);
				Function_80(uParam0[iVar02], 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
			bVar1 = GET_ACTOR_FROM_PERS_CHAR(StackVal);
		}
	}
	else if (IS_EARLIER_THAN(StackVal, false) || uParam3)
	{
		GET_POSITION(GET_PLAYER_ACTOR(0), &vVar2);
		uParam1[iVar03]->f_8 = Function_211(StackVal, StackVal, StackVal, Global_6289, Function_389(), (*uParam1)[iVar03], vVar2, 0x42700000);
		if (IS_PERS_CHAR_VALID(StackVal))
		{
			if (!Function_470(uParam0[iVar02], 8))
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], true, false);
				Function_80(uParam0[iVar02], 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
			bVar1 = GET_ACTOR_FROM_PERS_CHAR(StackVal);
		}
	}
	if (!IS_ACTOR_VALID(bVar1))
	{
		return "";
	}
	Function_80(uParam0[iVar02], 1);
	Function_210(StackVal, 1);
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

int Function_210(bool bParam0, bool bParam1) //Position: 0xB043 / 45123
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

var Function_211(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, float fParam7) //Position: 0xB0E5 / 45285
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

bool Function_212(int iParam0) //Position: 0xB1FE / 45566
{
	if (!Function_134(iParam0))
	{
		return 1;
	}
	return Function_213(&(Global_29008[iParam0]), 4);
}

int Function_213(var uParam0, int iParam1) //Position: 0xB21A / 45594
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_214(bool bParam0, bool bParam1) //Position: 0xB236 / 45622
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
		if (Function_215(SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0), bParam0) > fVar2)
		{
			fVar2 = Function_215(SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0), bParam0);
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

float Function_215(bool bParam0, bool bParam1) //Position: 0xB2F3 / 45811
{
	var uVar0;
	var uVar3;
	int iVar6;
	
	GET_POSITION(bParam0, &uVar0);
	GET_POSITION(bParam1, &uVar3);
	iVar6 = Function_216(&uVar0, &uVar3);
	return iVar6;
}

var Function_216(var uParam0, int iParam1) //Position: 0xB312 / 45842
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*iParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

var Function_217(int iParam0) //Position: 0xB330 / 45872
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
	Function_218(&bVar0);
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

int Function_218(int iParam0) //Position: 0xB39C / 45980
{
	if (IS_ITERATOR_VALID(*iParam0))
	{
		ITERATE_EVERYWHERE(*iParam0);
		ITERATE_ON_PARTIAL_NAME(*iParam0, Function_389());
		ITERATE_ON_PARTIAL_MODEL_NAME(*iParam0, Function_389());
		ITERATE_ON_OBJECT_TYPE(*iParam0, 4294967295);
		return 1;
	}
	return 0;
}

bool Function_219(int iParam0) //Position: 0xB3CD / 46029
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

bool Function_220(int iParam0) //Position: 0xB3EB / 46059
{
	return Function_375(iParam0->f_780, 0x1000000);
}

int Function_221(int iParam0, bool bParam1) //Position: 0xB3FE / 46078
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
	Function_367(iParam0);
	if (!Function_375(iParam0->f_780, 64))
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
	switch (Function_342(iParam0))
	{
		case 0x00000002:
			Function_337(iParam0, 2);
			break;
		
		case 0x00000003:
			Function_337(iParam0, 3);
			break;
		
		case 0x00000004:
			Function_337(iParam0, 4);
			break;
		
		case 0x00000001:
			break;
	}
	switch (Function_336(iParam0))
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
	if (!Function_375(iParam0->f_780, 128) && !Function_375(iParam0->f_780, 1))
	{
		Function_328(iParam0);
	}
	if (Function_74(iParam0))
	{
		if (Function_327(iParam0))
		{
			Function_324(iParam0);
			Function_66(iParam0, 1);
		}
		if (Function_323(iParam0 + 808, 5.0f))
		{
			Function_316(iParam0);
		}
		if (!Function_375(iParam0->f_780, 32768))
		{
			fVar7 = Function_315(0x3e800000);
			if (fVar7 < 0.0f)
			{
				iParam0->f_944 = (IntToFloat(FLOOR((0,09f * fVar7))) + 5.0f);
				if (Function_375(iParam0->f_780, 512))
				{
					HUD_TIMER_COUNTDOWN(iParam0->f_944);
					HUD_TIMER_DISPLAY(1);
					Function_466(iParam0 + 796);
				}
				if (Function_313(iParam0) == 3)
				{
					Function_312(iParam0);
				}
				Function_374(iParam0 + 780, 32768);
			}
		}
		if (Function_311(iParam0 + 796, iParam0->f_944))
		{
			if (iVar0 <= 17)
			{
				HUD_TIMER_DISPLAY(0);
				iVar0 = 17;
			}
		}
		if (Function_313(iParam0) == 3)
		{
			if (!Function_375(iParam0->f_780, 0x20000000))
			{
				if (Function_310(iParam0))
				{
				}
			}
			else if (VDIST(Global_34574, *(iParam0 + 924)) > 100.0f && !Function_375(iParam0->f_780, 0x40000000))
			{
				Function_309(iParam0);
			}
		}
	}
	iVar1 = Function_300(iParam0);
	if (iVar0 <= iVar1)
	{
		iVar0 = iVar1;
	}
	if (Function_375(iParam0->f_780, 8))
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
			iVar1 = Function_299(iParam0);
			if (iVar0 <= iVar1)
			{
				iVar0 = iVar1;
			}
		}
	}
	if (Function_375(iParam0->f_780, 16))
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
			iVar1 = Function_296(iParam0);
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
				Function_374(iParam0 + 780, 0x8000000);
				Function_295(bVar2);
				Function_65(iParam0);
				if (iVar0 <= 21)
				{
					iVar0 = 21;
				}
			}
			else if (Function_292(bVar2, &uVar9, &uVar8, 0, 0, 0x40400000))
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
	if (Function_134(iParam0->f_916))
	{
		if (!Function_375(iParam0->f_780, 65536))
		{
			if (IS_ACTOR_IN_VOLUME(StackVal, iParam0->f_860))
			{
				Function_487(iParam0, 0);
				Function_369(iParam0);
				Function_374(iParam0 + 780, 65536);
			}
		}
	}
	if (IS_VOLUME_VALID(iParam0->f_920))
	{
		if (IS_OBJECT_VALID(iParam0->f_940))
		{
			bVar10 = false;
			if (Function_375(iParam0->f_780, 4))
			{
				bVar10 = GATEWAY_UPDATE(iParam0->f_940);
			}
			else
			{
				bVar10 = Function_390(iParam0->f_940, 0, 1, 0, 0, 0);
			}
			if (bVar10 == 1)
			{
				if (Function_313(iParam0) == 3)
				{
					Function_60(iParam0);
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
				Function_466(iParam0 + 844);
				iParam0->f_856 = 0;
			}
			else if (Function_311(iParam0 + 844, 7.0f))
			{
				if (iParam0->f_856 > 2)
				{
					Function_337(iParam0, 3);
					return 13;
				}
				Function_291(iParam0, 1);
				Function_290(iParam0, "pm_esc_wdir", 1);
				Function_466(iParam0 + 844);
				iParam0->f_856++;
			}
		}
	}
	if (Function_289(iParam0) && IS_ACTOR_VALID(iParam0->f_860))
	{
		GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(iParam0->f_952), &vVar3);
		Function_288(StackVal, StackVal, iParam0, vVar3);
	}
	if (Function_375(iParam0->f_780, 256))
	{
		iVar1 = Function_235(iParam0, bParam1);
		if (iVar0 <= iVar1)
		{
			iVar0 = iVar1;
		}
	}
	if (iVar0 > 10)
	{
		if (Function_375(iParam0->f_780, 512))
		{
			HUD_TIMER_DISPLAY(0);
		}
		if (Function_313(iParam0) == 3)
		{
			Function_60(iParam0);
		}
	}
	if (Function_74(iParam0))
	{
		Function_227(iParam0, 0, 1);
	}
	else
	{
		Function_222(StackVal, StackVal, iParam0, Global_34574, 1, 0x41c80000, 0x42c80000);
	}
	return iVar0;
}

var Function_222(bool bParam0, vector3 vParam1, int iParam4, float fParam5, float fParam6) //Position: 0xB8EE / 47342
{
	vector3 vVar0;
	
	Function_226(bParam0);
	Function_223(bParam0);
	Function_227(bParam0, iParam4, 0);
	if (IS_OBJECT_VALID(*bParam0))
	{
		Function_476(*bParam0);
		vVar0 = { StackVal, StackVal, Function_476(*bParam0) };
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
	if (!Function_375(bParam0->f_584, 4096))
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

void Function_223(int iParam0) //Position: 0xBA14 / 47636
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	vector3 vVar9;
	bool bVar12;
	bool bVar13;
	
	if (SQUAD_IS_VALID(iParam0->f_568) && Function_311(iParam0 + 572, 7.0f))
	{
		Function_225(iParam0);
		vVar0 = { StackVal, StackVal, Function_225(iParam0) };
		if (Function_44(StackVal, StackVal, vVar0))
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
			Function_224(iParam0->f_568, 1);
			Function_466(iParam0 + 572);
		}
		else
		{
			Function_7(iParam0, 1);
		}
	}
	return;
}

void Function_224(bool bParam0, bool bParam1) //Position: 0xBAC0 / 47808
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
			TASK_PRIORITY_SET(bVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

vector3 Function_225(int iParam0) //Position: 0xBAFB / 47867
{
	return StackVal, StackVal, *(iParam0 + 4);
}

void Function_226(int iParam0) //Position: 0xBB07 / 47879
{
	if (GET_DEBUG_DRAW_STATE())
	{
	}
	return;
}

void Function_227(bool bParam0, int iParam1, int iParam2) //Position: 0xBB13 / 47891
{
	if (iParam2 == 1)
	{
		if (Function_234(bParam0, iParam1, iParam2))
		{
			Function_233(bParam0);
		}
		else if (Function_232(bParam0, iParam1))
		{
			Function_230(bParam0);
		}
		if (Function_229(bParam0, iParam1, iParam2))
		{
			Function_228(bParam0);
		}
	}
	else if (Function_234(bParam0, iParam1, 0))
	{
		Function_233(bParam0);
	}
	else if (Function_229(bParam0, iParam1, 0))
	{
		Function_228(bParam0);
	}
	else if (Function_232(bParam0, iParam1))
	{
		Function_230(bParam0);
	}
	return;
}

void Function_228(int iParam0) //Position: 0xBB8D / 48013
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
			Function_506(iParam0 + 336[iParam0->f_4804], 0x41200000, 1, 0, 2, 1, 0);
		}
		iParam0->f_480++;
	}
	return;
}

bool Function_229(int iParam0, int iParam1, int iParam2) //Position: 0xBC27 / 48167
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
	else if (Function_155() && iParam2 != 0)
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

var Function_230(bool bParam0) //Position: 0xBCC5 / 48325
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	if (!Function_375(bParam0->f_584, 8) && bParam0->f_328 > 3)
	{
		if (VDIST(Global_34574, *(bParam0 + 4)) < VDIST(Global_34574, *(bParam0 + 16)) && IS_STRING_VALID(bParam0 + 276[bParam0->f_3284]))
		{
			iVar1 = 1;
		}
		if (iVar1 == 1)
		{
			if (IS_STRING_VALID(bParam0 + 276[bParam0->f_3284]))
			{
				Function_231(bParam0 + 276[bParam0->f_3284], 3.0f, 0, 2, 1, 0);
				bParam0->f_328++;
				Function_466(bParam0 + 44);
				bVar0 = true;
			}
		}
		else if (IS_STRING_VALID(bParam0 + 220[bParam0->f_2724]))
		{
			Function_231(bParam0 + 220[bParam0->f_2724], 3.0f, 0, 2, 1, 0);
			bParam0->f_272++;
			bParam0->f_272 = (bParam0->f_272 % 3);
			Function_466(bParam0 + 44);
			bVar0 = true;
		}
	}
	return bVar0;
}

void Function_231(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0xBDAA / 48554
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

bool Function_232(int iParam0, int iParam1) //Position: 0xBDF1 / 48625
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
	else if (Function_155())
	{
		iVar0 = 0;
	}
	else if (Function_311(iParam0 + 44, 8.0f))
	{
		iVar0 = 1;
	}
	return iVar0;
}

void Function_233(int iParam0) //Position: 0xBE94 / 48788
{
	char* cVar0[32];
	
	if (iParam0->f_108 <= iParam0->f_56)
	{
		strcpy(&cVar0, "Print Obj: ", 32);
		stradd(&cVar0, iParam0 + 56[iParam0->f_1084], 32);
		if ((*iParam0 + 112)[iParam0->f_108] == 1)
		{
			PRINT_OBJECTIVE_FORMAT(7,5f, iParam0 + 56[iParam0->f_1084], iParam0 + 144[iParam0->f_1086], "", "", "", "", 0, (*iParam0 + 128)[iParam0->f_108], 0, 0);
		}
		else
		{
			Function_503(iParam0 + 56[iParam0->f_1084], 8,5f, (*iParam0 + 128)[iParam0->f_108], 2, 0, 0, 0);
		}
		iParam0->f_108++;
	}
	return;
}

bool Function_234(int iParam0, int iParam1, int iParam2) //Position: 0xBF35 / 48949
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
	else if (Function_155() && iParam2 != 0)
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

int Function_235(int iParam0, bool bParam1) //Position: 0xBFEC / 49132
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!Function_375(iParam0->f_780, 0x1000000) && IS_SCRIPT_VALID(iParam0->f_1000))
	{
		Function_287(iParam0 + 1004);
		if (SQUAD_IS_VALID((iParam0 + 1004)->f_60))
		{
			Function_285(iParam0, GET_ACTOR_FACTION(Function_286((iParam0 + 1004)->f_60)));
			if (bParam1)
			{
				AUDIO_MUSIC_SET_MOOD("GUNFIGHT", 0, 4294967295, 4294967295);
			}
			Function_374(iParam0 + 780, 0x1000000);
		}
	}
	else if (Function_375(iParam0->f_780, 0x1000000) && !IS_SCRIPT_VALID(iParam0->f_1000))
	{
		if (!Function_375(iParam0->f_780, 262144) || iParam0->f_1296 < 0)
		{
			Function_466(iParam0 + 1256);
			Function_284(iParam0);
			Function_282(iParam0);
			Function_264(iParam0);
			Function_61(iParam0 + 780, 0x1000000);
			Function_61(iParam0 + 780, 131072);
		}
		if (bParam1)
		{
			AUDIO_MUSIC_SET_MOOD("DRAMATIC_LOW", 0, 4294967295, 4294967295);
		}
		Function_61(iParam0 + 780, 0x1000000);
	}
	if (Function_375(iParam0->f_780, 1048576))
	{
		if (!Function_375(iParam0->f_780, 2097152))
		{
			Function_466(iParam0 + 1256);
			Function_284(iParam0);
			Function_282(iParam0);
			Function_264(iParam0);
			Function_374(iParam0 + 780, 2097152);
		}
		if (Global_29007 != 3 || Global_29007 != 4)
		{
			if (Function_375(iParam0->f_780, 0x1000000))
			{
				Function_369(iParam0);
				iParam0->f_1296++;
			}
			Function_61(iParam0 + 780, 1048576);
		}
	}
	else if (!(Global_29007 != 3 || Global_29007 != 4))
	{
		Function_374(iParam0 + 780, 1048576);
	}
	if ((((Function_311(iParam0 + 1256, iParam0->f_1268) && Function_375(iParam0->f_780, 1048576)) && !Function_375(iParam0->f_780, 0x1000000)) && !IS_SCRIPT_VALID(iParam0->f_1000)) && iParam0->f_1296 < 0)
	{
		if (Function_262(StackVal, StackVal, Global_34573, *(iParam0 + 888)) < 150.0f || Function_375(iParam0->f_780, 8388608))
		{
			Function_260(iParam0);
			if (Function_248(iParam0 + 1004))
			{
				if (!Function_375(iParam0->f_780, 131072))
				{
					if (Function_375(iParam0->f_780, 2048))
					{
						Function_247(iParam0 + 1004, 1);
						iVar1 = 0;
						while (iVar1 < 5)
						{
							if (Function_246((*iParam0 + 1228)[iVar1]) && !(*iParam0 + 1228)[iVar1] != 0)
							{
								Function_242(iParam0 + 1004, (*iParam0 + 1228)[iVar1]);
							}
							iVar1++;
						}
					}
					else
					{
						Function_239(iParam0 + 1004, 8);
					}
					Function_374(iParam0 + 780, 131072);
				}
				iParam0->f_1000 = Function_237(iParam0 + 1004);
				if (IS_SCRIPT_VALID(iParam0->f_1000))
				{
					if (iVar0 <= 2)
					{
						if (Function_375(iParam0->f_780, 262144))
						{
							iParam0->f_1296 = (iParam0->f_1296 - 1);
							if (iParam0->f_1296 < 0)
							{
								Function_236(iParam0 + 1256);
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

void Function_236(int iParam0) //Position: 0xC2FD / 49917
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

var Function_237(int iParam0) //Position: 0xC311 / 49937
{
	int iVar0;
	
	if (!iParam0->f_172 != 1)
	{
		LOG_ERROR("Call CREATEATTACK_INIT before launching");
		return "";
	}
	Function_238(iParam0);
	iVar0 = LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/scripting/DesignerDefined/createAttack", iParam0, 56, 0);
	return iVar0;
}

void Function_238(int iParam0) //Position: 0xC395 / 50069
{
	int iVar0;
	int iVar1;
	
	if (Function_375(iParam0->f_92, 64))
	{
		iVar1 = 0;
		while (iVar1 <= iParam0->f_100)
		{
			if (!(*iParam0 + 100)[iVar1] != 0 && Function_246((*iParam0 + 100)[iVar1]))
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

int Function_239(int iParam0, int iParam1) //Position: 0xC3ED / 50157
{
	bool bVar0;
	bool bVar1;
	
	if (iParam0->f_172 == 0)
	{
		LOG_ERROR("CREATEATTACK_ADD_POPSET_TYPE - Call *after* CREATEATTACK_INIT and before CREATEATTACK_LAUNCH");
		return 0;
	}
	bVar1 = false;
	bVar0 = Function_240(iParam1, bVar1);
	while (bVar0 == 0 && Function_246(bVar0))
	{
		bVar1++;
		bVar0 = Function_240(iParam1, bVar1);
		Function_242(iParam0, bVar0);
	}
	PRINTSTRING("Number of actorenums: ");
	PRINTINT(bVar1);
	PRINTNL();
	return 1;
}

bool Function_240(int iParam0, bool bParam1) //Position: 0xC4B7 / 50359
{
	switch (iParam0)
	{
		case 0x00000001:
			return Function_241(Global_30750[0], bParam1);
			break;
		
		case 0x00000002:
			return Function_241(Global_30750[1], bParam1);
			break;
		
		case 0x00000004:
			return Function_241(Global_30750[2], bParam1);
			break;
		
		case 0x00000008:
			return Function_241(Global_30750[3], bParam1);
			break;
		
		case 0x00000010:
			return Function_241(Global_30750[4], bParam1);
			break;
		
		case 0x00000020:
			return Function_241(Global_30750[5], bParam1);
			break;
		
		case 0x00000040:
			return Function_241(Global_30750[6], bParam1);
			break;
		
		case 0x00000080:
			return Function_241(Global_30750[7], bParam1);
			break;
		
		case 0x00000100:
			return Function_241(Global_30750[8], bParam1);
			break;
		
		case 0x00000200:
			return Function_241(Global_30750[9], bParam1);
			break;
		
		case 0x00000400:
			return Function_241(Global_30750[10], bParam1);
			break;
		
		case 0x00000800:
			return Function_241(Global_30750[11], bParam1);
			break;
		
		case 0x00001000:
			return Function_241(Global_30750[12], bParam1);
			break;
		
		case 0x00002000:
			return Function_241(Global_30750[13], bParam1);
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return 4294967295;
}

int Function_241(bool bParam0, bool bParam1) //Position: 0xC636 / 50742
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
	if (!Function_246(bVar1))
	{
		LOG_ERROR("Did an index on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	return bVar0;
}

int Function_242(int iParam0, bool bParam1) //Position: 0xC6E3 / 50915
{
	int iVar0;
	
	if (iParam0->f_172 == 0)
	{
		LOG_ERROR("CREATEATTACK_ADD_ACTORENUM - Call *after* CREATEATTACK_INIT and before CREATEATTACK_LAUNCH");
		return 0;
	}
	if (!Function_246(bParam1) || bParam1 != 0)
	{
		return 0;
	}
	Function_244(iParam0, 0);
	iVar0 = 0;
	while (iVar0 <= iParam0->f_100)
	{
		if ((*iParam0 + 100)[iVar0] != 0 || !Function_246((*iParam0 + 100)[iVar0]))
		{
			(*iParam0 + 100)[iVar0] = bParam1;
			iVar0 = iParam0->f_100;
		}
		iVar0++;
	}
	Function_243(iParam0, 0);
	return 1;
}

int Function_243(int iParam0, bool bParam1) //Position: 0xC7B1 / 51121
{
	bool bVar0;
	char* cVar1[16];
	char* cVar5[16];
	
	if (IS_LAYOUTREF_VALID(*iParam0))
	{
		if (bParam1 == "")
		{
			bParam1 = Function_28(iParam0);
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
				if (Function_246((*iParam0 + 100)[bVar0]) && !(*iParam0 + 100)[bVar0] != 0)
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

int Function_244(int iParam0, bool bParam1) //Position: 0xC9ED / 51693
{
	bool bVar0;
	char* cVar1[16];
	char* cVar5[16];
	
	Function_245(iParam0);
	if (IS_LAYOUTREF_VALID(*iParam0))
	{
		if (bParam1 == "")
		{
			bParam1 = Function_28(iParam0);
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
				if (Function_246((*iParam0 + 100)[bVar0]) && !(*iParam0 + 100)[bVar0] != 0)
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

void Function_245(int iParam0) //Position: 0xCC1E / 52254
{
	struct<4> Var0;
	
	if (!IS_LAYOUTREF_VALID(*iParam0))
	{
		strcpy(&Var0, "catkslay", 16);
		memcpy(&Var0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_496(&Var0), 4);
		*iParam0 = CREATE_LAYOUT(&Var0);
		if (!IS_LAYOUTREF_VALID(*iParam0))
		{
			LOG_ERROR("couldn't create library createattack layout");
		}
	}
	return;
}

bool Function_246(bool bParam0) //Position: 0xCC8B / 52363
{
	if (bParam0 > 0 || bParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

void Function_247(int iParam0, bool bParam1) //Position: 0xCCA2 / 52386
{
	if (bParam1)
	{
		Function_374(iParam0 + 92, 64);
	}
	else
	{
		Function_61(iParam0 + 92, 64);
	}
	return;
}

bool Function_248(int iParam0) //Position: 0xCCC2 / 52418
{
	int iVar0;
	vector3 vVar1;
	struct<15> Var4;
	struct<11> Var19;
	
	Function_245(iParam0);
	if (iParam0->f_212 == 0)
	{
		iParam0->f_212 = 3;
		DECOR_SET_BOOL(*iParam0, "catk_bus", iParam0->f_216);
	}
	if (Function_44(StackVal, StackVal, *(iParam0 + 184)))
	{
		if (Function_44(StackVal, StackVal, *(iParam0 + 196)))
		{
			if (IS_ACTOR_VALID(GET_PLAYER_ACTOR(0)))
			{
				Function_259(StackVal, StackVal, iParam0, Global_34574);
			}
			else
			{
				return 0;
			}
		}
		Function_259(StackVal, StackVal, iParam0, *(iParam0 + 196));
		if (iParam0->f_24 > 0,5f)
		{
			iParam0->f_24 = 0,5f;
		}
		if ((iParam0->f_28 - iParam0->f_24) > 6.0f)
		{
			iParam0->f_28 = (iParam0->f_24 + 6.0f);
		}
		if (iParam0->f_32 >= 0.0f)
		{
			iParam0->f_32 = 15.0f;
		}
		Function_258(&Var4, 4294967295, 5.0f, 1, 4294967295);
		Function_257(StackVal, StackVal, &Var19, 0, *(iParam0 + 196), 0.0f, iParam0->f_24, iParam0->f_28, iParam0->f_32, 0x40a00000, 0);
		iVar0 = 0;
		while (iVar0 < 9)
		{
			Function_250(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var19, Var4, 1);
			vVar1 = { StackVal, StackVal, Function_250(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var19, Var4, 1) };
			if (!Function_44(StackVal, StackVal, vVar1))
			{
				iVar0 = 10;
			}
			iVar0++;
		}
		if (Function_44(StackVal, StackVal, vVar1))
		{
			*(iParam0 + 184) = { StackVal, StackVal, *(iParam0 + 196) };
			return 0;
		}
		*(iParam0 + 184) = { StackVal, StackVal, vVar1 };
	}
	Function_238(iParam0);
	iParam0->f_172 = 1;
	if (!Function_249(iParam0))
	{
		LOG_ERROR("CREATEATTACK_INIT could not create data object");
	}
	Function_243(iParam0, 0);
	return 1;
}

bool Function_249(int iParam0) //Position: 0xCE41 / 52801
{
	var uVar0;
	
	if (!IS_OBJECT_VALID(*iParam0))
	{
		LOG_ERROR("CREATEATTACK_CreateDataObject - Invalid layout");
		return 0;
	}
	if (!IS_OBJECT_VALID(StackVal))
	{
		memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_496("ncatk_dobj"), 4);
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

vector3 Function_250(struct<41> Param0) //Position: 0xCFB0 / 53168
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
	else if (!Function_44(StackVal, StackVal, *(&Param0 + 4)))
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
	Function_256(Param0.f_36);
	if (Param0.f_24 > 1.0f && Param0.f_28 > 1.0f)
	{
		Function_254();
	}
	else
	{
		AMBIENT_SET_DISTANCE_FILTER(Param0.f_24, Param0.f_28);
	}
	Function_253(Param0.f_20);
	Function_252(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param11);
	Function_251(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param11);
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
	Function_129();
	return StackVal, StackVal, Function_129();
}

void Function_251(struct<33> Param0) //Position: 0xD0DF / 53471
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
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(StackVal, 1,43493E-42f, 1);
}

void Function_252(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14) //Position: 0xD20B / 53771
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

void Function_253(bool bParam0) //Position: 0xD25C / 53852
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

void Function_254() //Position: 0xD30F / 54031
{
	float fVar0;
	bool bVar1;
	
	Function_255(&fVar0, &bVar1);
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	return;
}

void Function_255(var uParam0, int iParam1) //Position: 0xD323 / 54051
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

void Function_256(bool bParam0) //Position: 0xD3AC / 54188
{
	if (bParam0 < 0,1f)
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

void Function_257(int iParam0, int iParam1, vector3 vParam2, float fParam5, var uParam6, var uParam7, var uParam8, int iParam9, int iParam10) //Position: 0xD3F0 / 54256
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

void Function_258(var uParam0, int iParam1, float fParam2, int iParam3, int iParam4) //Position: 0xD42C / 54316
{
	*uParam0 = iParam1;
	uParam0->f_4 = fParam2;
	uParam0->f_8 = iParam3;
	uParam0->f_16 = iParam4;
	uParam0->f_20 = 0.0f;
	uParam0->f_12 = 4294967295;
}

int Function_259(int iParam0, vector3 vParam1) //Position: 0xD455 / 54357
{
	bool bVar0;
	
	bVar0 = Function_28(iParam0);
	if (Function_44(StackVal, StackVal, vParam1))
	{
		return 0;
	}
	if (iParam0->f_172 != 1 && IS_OBJECT_VALID(bVar0))
	{
		Function_244(iParam0, bVar0);
	}
	*(iParam0 + 196) = { StackVal, StackVal, vParam1 };
	*(iParam0 + 184) = { 0.0f, 0.0f, 0.0f };
	if (iParam0->f_172 != 1 && IS_OBJECT_VALID(bVar0))
	{
		Function_243(iParam0, bVar0);
	}
	return 1;
}

void Function_260(int iParam0) //Position: 0xD4B4 / 54452
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (iParam0->f_1280 == 1)
	{
		vVar3 = { RAND_FLOAT_RANGE(-5.0f, 5.0f), 0.0f, RAND_FLOAT_RANGE(45.0f, 55.0f) };
	}
	else if (Function_261())
	{
		vVar3 = { RAND_FLOAT_RANGE(-2,5f, 0.0f), 0.0f, RAND_FLOAT_RANGE(-110.0f, -90.0f) };
	}
	else
	{
		vVar3 = { RAND_FLOAT_RANGE(0.0f, 2,5f), 0.0f, RAND_FLOAT_RANGE(-110.0f, -90.0f) };
	}
	GET_ACTOR_OFFSET_WORLD_COORDS(iParam0->f_860, &vVar3, &vVar0);
	Function_259(StackVal, StackVal, iParam0 + 1004, vVar0);
	return;
}

bool Function_261() //Position: 0xD53A / 54586
{
	return (RAND_INT_RANGE(false, 1999) / 1000) != 0;
}

float Function_262(bool bParam0, vector3 vParam1) //Position: 0xD54D / 54605
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_263(bParam0);
		vVar0 = { StackVal, StackVal, Function_263(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

vector3 Function_263(bool bParam0) //Position: 0xD5C7 / 54727
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

void Function_264(int iParam0) //Position: 0xD631 / 54833
{
	Function_281(iParam0 + 1004, 3);
	Function_280(iParam0 + 1004, 2);
	Function_279(iParam0 + 1004, 1);
	Function_278(iParam0 + 1004, iParam0->f_1284);
	Function_277(iParam0 + 1004, 1);
	Function_276(iParam0 + 1004, 0,5f, 15.0f, 3,5f);
	Function_275(iParam0 + 1004, 1);
	Function_274(iParam0 + 1004, 1);
	Function_273(iParam0 + 1004, 1);
	Function_272(iParam0 + 1004, 1, 4294967295);
	Function_271(iParam0 + 1004, 1);
	Function_270(iParam0 + 1004, 1, 976, 0);
	if (IS_ACTOR_VALID(Global_34573))
	{
		Function_265(iParam0 + 1004, Global_34573);
	}
	if (IS_ACTOR_VALID(iParam0->f_952))
	{
		Function_265(iParam0 + 1004, iParam0->f_952);
	}
	if (IS_ACTOR_VALID(iParam0->f_960))
	{
		Function_265(iParam0 + 1004, iParam0->f_960);
	}
	return;
}

int Function_265(var uParam0, int iParam1) //Position: 0xD706 / 55046
{
	return Function_266(uParam0, iParam1);
}

int Function_266(var uParam0, bool bParam1) //Position: 0xD713 / 55059
{
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	Function_269(uParam0);
	if (!IS_ACTOR_IN_ACTORSET(uParam0->f_52, bParam1))
	{
		DECOR_SET_BOOL(bParam1, "catk_external", true);
		ADD_ACTORSET_MEMBER(uParam0->f_52, bParam1);
		PRINTSTRING("Adding as target: ");
		PRINTSTRING(GET_OBJECT_NAME(bParam1));
		PRINTNL();
		if (!Function_375(uParam0->f_92, 1024))
		{
			Function_267(uParam0, bParam1);
		}
	}
	return 1;
}

void Function_267(var uParam0, bool bParam1) //Position: 0xD791 / 55185
{
	var uVar0;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	Function_268(uParam0);
	memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_496("catkavol"), 4);
	bVar4 = CREATE_VOLUME_IN_LAYOUT(*uParam0, &uVar0, 3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 5.0f, 5.0f, 5.0f);
	if (IS_VOLUME_VALID(bVar4))
	{
		if (SQUAD_IS_VALID(uParam0->f_60))
		{
			ATTACH_OBJECTS(GET_OBJECT_FROM_VOLUME(bVar4), GET_OBJECT_FROM_ACTOR(bParam1), Function_389(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
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

int Function_268(int iParam0) //Position: 0xD862 / 55394
{
	var uVar0;
	
	Function_245(iParam0);
	if (!IS_OBJECTSET_VALID(iParam0->f_96))
	{
		memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_496("navoidVols"), 4);
		iParam0->f_96 = CREATE_OBJECTSET_IN_LAYOUT(&uVar0, *iParam0, 9, 1);
		if (!IS_OBJECTSET_VALID(iParam0->f_96))
		{
			return 0;
		}
	}
	return 1;
}

int Function_269(int iParam0) //Position: 0xD8AA / 55466
{
	var uVar0;
	
	if (!IS_ACTORSET_VALID(iParam0->f_52))
	{
		Function_245(iParam0);
		memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_496("ntargetSet"), 4);
		iParam0->f_52 = CREATE_ACTORSET_IN_LAYOUT(*iParam0, &uVar0, 0);
		if (!IS_ACTORSET_VALID(iParam0->f_52))
		{
			return 0;
		}
	}
	return 1;
}

int Function_270(int iParam0, int iParam1, int iParam2, var uParam3) //Position: 0xD8F0 / 55536
{
	if (iParam1 == 1)
	{
		Function_374(iParam0 + 92, 1);
	}
	else
	{
		Function_61(iParam0 + 92, 1);
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

void Function_271(int iParam0, int iParam1) //Position: 0xD936 / 55606
{
	if (iParam1 == 1)
	{
		Function_374(iParam0 + 92, 8);
	}
	else
	{
		Function_61(iParam0 + 92, 8);
	}
	return;
}

void Function_272(int iParam0, int iParam1, int iParam2) //Position: 0xD957 / 55639
{
	if (iParam1 == 1)
	{
		Function_374(iParam0 + 92, 4);
	}
	else
	{
		Function_61(iParam0 + 92, 4);
	}
	iParam0->f_88 = iParam2;
	Function_374(iParam0 + 92, 128);
	return;
}

void Function_273(int iParam0, int iParam1) //Position: 0xD985 / 55685
{
	if (iParam1 == 0)
	{
		Function_374(iParam0 + 92, 4096);
	}
	else
	{
		Function_61(iParam0 + 92, 4096);
	}
	return;
}

void Function_274(int iParam0, int iParam1) //Position: 0xD9A8 / 55720
{
	if (iParam1 == 0)
	{
		Function_374(iParam0 + 92, 2048);
	}
	else
	{
		Function_61(iParam0 + 92, 2048);
	}
	return;
}

int Function_275(int iParam0, int iParam1) //Position: 0xD9CB / 55755
{
	if (iParam1 == 1)
	{
		Function_374(iParam0 + 92, 512);
	}
	else
	{
		Function_61(iParam0 + 92, 512);
	}
	return 1;
}

void Function_276(var uParam0, float fParam1, float fParam2, float fParam3) //Position: 0xD9EF / 55791
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

void Function_277(int iParam0, int iParam1) //Position: 0xDA58 / 55896
{
	if (iParam1 == 0)
	{
		Function_374(iParam0 + 92, 8192);
	}
	else
	{
		Function_61(iParam0 + 92, 8192);
	}
	return;
}

int Function_278(var uParam0, int iParam1) //Position: 0xDA7B / 55931
{
	if (iParam1 > 0 || iParam1 < 6)
	{
		return 0;
	}
	uParam0->f_40 = iParam1;
	return 1;
}

void Function_279(int iParam0, int iParam1) //Position: 0xDA96 / 55958
{
	if (iParam1 == 1)
	{
		Function_374(iParam0 + 92, 256);
	}
	else
	{
		Function_61(iParam0 + 92, 256);
	}
	return;
}

int Function_280(var uParam0, int iParam1) //Position: 0xDAB9 / 55993
{
	if (iParam1 >= 4294967295 || iParam1 <= 5)
	{
		return 0;
	}
	uParam0->f_48 = iParam1;
	return 1;
}

int Function_281(var uParam0, int iParam1) //Position: 0xDAD4 / 56020
{
	if (iParam1 >= 0 || iParam1 <= 7)
	{
		return 0;
	}
	uParam0->f_212 = iParam1;
	uParam0->f_216 = 1;
	return 1;
}

void Function_282(int iParam0) //Position: 0xDAF4 / 56052
{
	if (Function_375(iParam0->f_780, 524288) && (iParam0->f_1288 < 0 && iParam0->f_1292 < 1))
	{
		Function_283(iParam0, RAND_INT_RANGE(iParam0->f_1288, iParam0->f_1292));
	}
	else
	{
		Function_283(iParam0, 1);
	}
	return;
}

void Function_283(var uParam0, int iParam1) //Position: 0xDB34 / 56116
{
	if (iParam1 <= 1)
	{
		iParam1 = 1;
	}
	uParam0->f_1284 = iParam1;
	return;
}

void Function_284(int iParam0) //Position: 0xDB4A / 56138
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

void Function_285(var uParam0, int iParam1) //Position: 0xDB91 / 56209
{
	uParam0->f_492 = iParam1;
	return;
}

var Function_286(bool bParam0) //Position: 0xDB9E / 56222
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

void Function_287(int iParam0) //Position: 0xDBE4 / 56292
{
	if (IS_OBJECT_VALID(Function_28(iParam0)))
	{
		Function_244(iParam0, 0);
		Function_243(iParam0, 0);
	}
	return;
}

void Function_288(int iParam0, vector3 vParam1) //Position: 0xDC03 / 56323
{
	*(iParam0 + 4) = { StackVal, StackVal, vParam1 };
}

int Function_289(int iParam0) //Position: 0xDC15 / 56341
{
	if (Function_375(iParam0->f_780, 128))
	{
		return 1;
	}
	return 0;
}

var Function_290(int iParam0, bool bParam1, int iParam2) //Position: 0xDC2E / 56366
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

void Function_291(int iParam0, bool bParam1) //Position: 0xDCA7 / 56487
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

bool Function_292(bool bParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0xDCF0 / 56560
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
		fVar0 = Function_395(bParam0, Global_34573);
		if (!Function_375(bParam3, 8))
		{
			if (GET_LAST_ATTACKER(bParam0) == Global_34573)
			{
				*uParam1 = 8;
				Function_293(bParam0);
				return 1;
			}
		}
		if (!Function_375(bParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(bParam0, 1.0f))
			{
				*uParam1 = 2;
				Function_293(bParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(bParam0, 1.0f, 1.0f))
			{
				*uParam1 = 2;
				Function_293(bParam0);
				return 1;
			}
		}
		if (!Function_375(bParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(bParam0) || (((GET_ACTOR_UNDER_RETICLE(Global_34573, 0) != bParam0 && IS_PLAYER_WEAPON_ZOOMED(Global_34573)) && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(Global_34573) != bParam0 && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f))
			{
				if (*uParam2 > 0.0f)
				{
					*uParam1 = 4;
					Function_293(bParam0);
					return 1;
				}
				if (*uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - *uParam2) < 1,3f)
					{
						*uParam1 = 4;
						Function_293(bParam0);
						return 1;
					}
				}
				*uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_375(bParam3, 1))
		{
			if (Global_3403 || Global_3404)
			{
				*uParam1 = 1;
				Function_293(bParam0);
				return 1;
			}
		}
		if (!Function_375(bParam3, 16))
		{
			if (UNK_0x7F454A92(bParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(bParam0)) > 2.0f && fVar0 > 18.0f)
				{
					*uParam1 = 16;
					Function_293(bParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_293(bool bParam0) //Position: 0xDE87 / 56967
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(bParam0, 1);
	UNK_0x99AFD2D1(bParam0, 0, 0);
	Function_294(bParam0);
	MEMORY_CONSIDER_AS(Global_34573, bParam0, 2);
	MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
	AI_GOAL_LOOK_CLEAR(bParam0);
	return;
}

void Function_294(bool bParam0) //Position: 0xDEBB / 57019
{
	SAY_SINGLE_LINE_CONTEXT(bParam0, 60, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

var Function_295(bool bParam0) //Position: 0xDED2 / 57042
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "transNecType");
}

int Function_296(int iParam0) //Position: 0xDEEF / 57071
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = 0;
	if (!Function_375(iParam0->f_780, 16))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(iParam0->f_960))
	{
		return 0;
	}
	Function_298(iParam0->f_960, &vVar2);
	iVar1 = Function_297(iParam0->f_960);
	switch (iVar1)
	{
		case 0x00000000:
			Function_64(iParam0->f_960, 5);
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
						Function_64(iParam0->f_960, 7);
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

var Function_297(bool bParam0) //Position: 0xE024 / 57380
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "translib_state");
}

void Function_298(bool bParam0, bool bParam1) //Position: 0xE043 / 57411
{
	GET_POSITION(bParam0, bParam1);
	return;
}

int Function_299(int iParam0) //Position: 0xE050 / 57424
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	
	iVar1 = 0;
	if (!Function_375(iParam0->f_780, 8))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(iParam0->f_952))
	{
		return 0;
	}
	iVar0 = Function_297(iParam0->f_952);
	GET_POSITION(iParam0->f_952, &vVar2);
	GET_ACTOR_VELOCITY(iParam0->f_860, &vVar5);
	if (Function_375(iParam0->f_780, 128) == 1)
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
			if (!Function_375(iParam0->f_780, 2))
			{
				if (Function_375(iParam0->f_780, 0x2000000))
				{
					if (VDIST(Global_34574, vVar2) > 25.0f)
					{
						Function_291(iParam0, 1);
						Function_290(iParam0, "pm_trn_wait", 1);
						Function_61(iParam0 + 780, 0x2000000);
					}
				}
				else if (VDIST(Global_34574, vVar2) < (25.0f * 2.0f))
				{
					Function_291(iParam0, 1);
					Function_290(iParam0, "pm_trn_retg", 1);
					Function_374(iParam0 + 780, 0x2000000);
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
			TASK_PRIORITY_SET(iParam0->f_952, false);
			SET_ACTOR_FACE_STYLE(iParam0->f_952, 0);
			Function_64(iParam0->f_952, 1);
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
					GIVE_WEAPON_TO_ACTOR(iParam0->f_952, 42, false, 1, 1);
					break;
				
				case 0x00000002:
					break;
			}
			if (!IS_ACTOR_RIDING_VEHICLE(iParam0->f_952))
			{
				Function_64(iParam0->f_952, 2);
			}
			else
			{
				Function_64(iParam0->f_952, 5);
			}
			break;
		
		case 0x00000002:
			TASK_CLEAR(iParam0->f_952);
			TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(iParam0->f_952, iParam0->f_860, 1, 2, 0);
			TASK_PRIORITY_SET(iParam0->f_952, true);
			Function_466(iParam0 + 832);
			Function_64(iParam0->f_952, 3);
			break;
		
		case 0x00000003:
			if (IS_ACTOR_RIDING_VEHICLE(iParam0->f_952))
			{
				Function_64(iParam0->f_952, 4);
			}
			break;
		
		case 0x00000005:
			if (!IS_ACTOR_RIDING_VEHICLE(iParam0->f_952))
			{
				Function_64(iParam0->f_952, 2);
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
						if (Function_311(iParam0 + 820, 20.0f) && VMAG(vVar5) > 9.0f)
						{
							if (iVar1 <= 3)
							{
								iVar1 = 3;
							}
							Function_466(iParam0 + 820);
						}
					}
					break;
			}
			break;
		
		case 0x00000006:
			TASK_CLEAR(iParam0->f_952);
			TASK_FLEE_ACTOR(iParam0->f_952, Global_34573, 50.0f, -1.0f, 0, 0, 0);
			Function_64(iParam0->f_952, 7);
			break;
		
		case 0x00000007:
			if (IS_BLIP_VALID(Function_75(iParam0)))
			{
				SET_BLIP_BLINK(Function_75(iParam0), 0, 0, 5f);
			}
			break;
	}
	return iVar1;
}

int Function_300(int iParam0) //Position: 0xE3AC / 58284
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
	if (!Function_308(iParam0->f_860, 0, 1, 4294967295))
	{
		if (iParam0->f_628 == 3)
		{
			Function_303(iParam0);
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
			Function_303(iParam0);
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
		Function_298(iParam0->f_860, &vVar1);
	}
	if (iParam0->f_628 == 3)
	{
		GET_ACTOR_VELOCITY(iParam0->f_860, &Var4);
		if (StackVal >= -6.0f)
		{
			Function_303(iParam0);
		}
		if (Function_469(iParam0 + 784))
		{
			if (Function_397(iParam0 + 784) < 0,25f)
			{
				if (GET_LAST_HIT_TIME(Global_34573) < (GET_CURRENT_GAME_TIME() - Function_397(iParam0 + 784)))
				{
					if (GET_ACTOR_IN_VEHICLE_SEAT(iParam0->f_860, false) == Global_34573)
					{
						iParam0->f_912 = (iParam0->f_912 - (1.0f * 6.0f));
					}
				}
				FIND_GROUND_INTERSECTION(&vVar1, 5.0f, &vVar7, &uVar10);
				bVar13 = START_CURVE_QUERY(iParam0->f_776, vVar7, 1,121039E-44f, 0.0f, 5.0f, 0,5f, 0);
				fVar14 = 0.0f;
				vVar15 = { 0.0f, 0.0f, 0.0f };
				if (GET_NUM_CURVES_IN_CURVE_QUERY(bVar13) >= 0)
				{
					fVar14 = 0,07f;
					if (GET_LAST_NEAREST_POINT(1, &vVar15))
					{
						if (VMAG(Vector(StackVal, StackVal, StackVal) - Vector(Global_34574, vVar15, StackVal)) > 7,5f)
						{
							fVar14 = 0,035f;
						}
					}
				}
				else
				{
					fVar14 = 1.0f;
				}
				if (Global_3388)
				{
					fVar14 = (fVar14 * 0,75f);
				}
				DESTROY_OBJECT(bVar13);
				if (GET_VEHICLE_BUMP_COUNT(iParam0->f_860) >= 0)
				{
					iParam0->f_912 = (iParam0->f_912 - (IntToFloat(GET_VEHICLE_BUMP_COUNT(iParam0->f_860)) * fVar14));
				}
				else if (GET_VEHICLE_BUMP_COUNT(iParam0->f_860) == 0)
				{
					fVar18 = Function_302(iParam0->f_860, 0);
					if (fVar18 >= 10.0f || (fVar18 >= (10.0f + 2,5f) && Global_3388))
					{
						if (fVar18 < (10.0f / 5.0f))
						{
							iParam0->f_912 = (iParam0->f_912 + 0,075f);
							if (iParam0->f_912 < 100.0f)
							{
								iParam0->f_912 = 100.0f;
							}
						}
					}
				}
				if (iParam0->f_912 >= 1.0f)
				{
					Function_303(iParam0);
					if (iVar0 <= 19)
					{
						iVar0 = 19;
					}
				}
				Function_466(iParam0 + 784);
				RESET_VEHICLE_BUMP_COUNT(iParam0->f_860);
			}
		}
		Function_301(iParam0);
	}
	if (Function_375(iParam0->f_780, 128))
	{
		if (IS_ACTOR_VALID(iParam0->f_860))
		{
			Function_298(iParam0->f_860, &vVar1);
			if (VDIST(Global_34574, vVar1) < 100.0f)
			{
				if (iVar0 <= 16)
				{
					iVar0 = 16;
				}
			}
			if (!Function_375(iParam0->f_780, 2))
			{
				if (Function_375(iParam0->f_780, 0x4000000))
				{
					if (VDIST(Global_34574, vVar1) > 25.0f)
					{
						Function_291(iParam0, 1);
						Function_290(iParam0, "wagon_return", 1);
						Function_61(iParam0 + 780, 0x4000000);
					}
				}
				else if (VDIST(Global_34574, vVar1) < (25.0f * 2.0f))
				{
					Function_291(iParam0, 1);
					Function_290(iParam0, "pm_trn_retw", 1);
					Function_374(iParam0 + 780, 0x4000000);
				}
			}
		}
	}
	else if (GET_PLAYER_ACTOR(0) == GET_ACTOR_IN_VEHICLE_SEAT(iParam0->f_860, false))
	{
		if (iVar0 <= 1)
		{
			Function_466(iParam0 + 1256);
			Function_466(iParam0 + 820);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void Function_301(int iParam0) //Position: 0xE74D / 59213
{
	if (Function_375(iParam0->f_780, 0x10000000))
	{
		UI_ENTER("WHATEVA");
		UI_ENTER("WHATEVA_prog");
		UI_SET_TEXT("WHATEVA_prog", "pm_trn_dynamite");
		UI_SET_PROGRESS_BAR_VAL("WHATEVA_prog", iParam0->f_912);
	}
	return;
}

float Function_302(bool bParam0, bool bParam1) //Position: 0xE7BD / 59325
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

void Function_303(int iParam0) //Position: 0xE7DC / 59356
{
	bool bVar0;
	char* cVar1;
	bool bVar4;
	struct<25> Var5;
	
	if (IS_ACTOR_VALID(iParam0->f_860))
	{
		if (GET_VEHICLE(GET_PLAYER_ACTOR(0)) == iParam0->f_860)
		{
			Function_476(iParam0->f_860);
			*(&Var5 + 12) = { StackVal, StackVal, Function_476(iParam0->f_860) };
			Function_475(iParam0->f_860);
			Var5 = { StackVal, StackVal, Function_475(iParam0->f_860) };
			Var5.f_24 = 0;
			Function_305(iParam0->f_776, 0, &Var5, GET_PLAYER_ACTOR(0), iParam0->f_860, 1, 0, 0);
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
		Function_304(&Global_34574, "FireBottleExplosion", 0, 1);
	}
	GET_POSITION(iParam0->f_860, &cVar1);
	Function_304(&cVar1, "DynamiteExplosion", 0, 1);
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

void Function_304(float fParam0, char* cParam1, bool bParam2, int iParam3) //Position: 0xE91F / 59679
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	_CREATE_EXPLOSION(fParam0, cParam1, bParam2, &vVar0, iParam3);
}

var Function_305(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, var uParam7) //Position: 0xE93B / 59707
{
	bool bVar0;
	
	if (bParam5)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_389(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "WagonCrash", 1, 1);
	}
	Function_306(&bVar0, uParam2, uParam3, uParam4);
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

void Function_306(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xE9B7 / 59831
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_307(&bVar0, uParam1, uParam2, uParam3);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 4.0f, 0);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESET(bVar1, 1.0f, 0, 0.0f);
	SET_TRANSITION_COLLISION_PARAMS(bVar1, 1, 0);
}

void Function_307(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xE9F4 / 59892
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	vVar0 = { 9,270768f, 7,965437f, 3,153887f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 1,407577f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 1,407577f, 0.0f, 1);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 507);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam3, 129);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 1,407577f, 0.0f, 1);
}

bool Function_308(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0xEAD5 / 60117
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

int Function_309(int iParam0) //Position: 0xEB8E / 60302
{
	if (IS_ACTOR_VALID(iParam0->f_976))
	{
		TELEPORT_ACTOR(iParam0->f_976, iParam0 + 984, 1, 1, 1);
		TASK_STAND_STILL(iParam0->f_976, -1.0f, 0, 0);
		TASK_FACE_ACTOR(iParam0->f_976, Global_34573, 1, 3212836864);
		TASK_PRIORITY_SET(iParam0->f_976, false);
		if (IS_MOVER_FROZEN(iParam0->f_976))
		{
			SET_MOVER_FROZEN(iParam0->f_976, false);
		}
	}
	Function_374(iParam0 + 780, 0x40000000);
	return 1;
}

bool Function_310(int iParam0) //Position: 0xEBF6 / 60406
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
	if (Function_44(StackVal, StackVal, *(iParam0 + 924)))
	{
		return 0;
	}
	vVar0 = { StackVal, StackVal, *(iParam0 + 924) };
	if ((((((iParam0->f_916 != Global_30640[0] || iParam0->f_916 != Global_30717[0]) || iParam0->f_916 != Global_30668[0]) || iParam0->f_916 != Global_30668[1]) || iParam0->f_916 != Global_30693[0]) || iParam0->f_916 != Global_30685[0]) || iParam0->f_916 != Global_30723[1])
	{
		vVar3 = { -1.0f, -5.0f, 1.0f };
		if (Function_246(iParam0->f_980))
		{
			vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar3, *(iParam0 + 924), StackVal) };
			Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_496("transportContact") };
			Function_129();
			iParam0->f_976 = CREATE_ACTOR_IN_LAYOUT(iParam0->f_776, &Var6, iParam0->f_980, vVar0, Function_129());
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
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_496("transportContact") };
		vVar0.x = (vVar0.x + 1.0f);
		if (Function_246(iParam0->f_980))
		{
			Function_129();
			iParam0->f_976 = CREATE_ACTOR_IN_LAYOUT(iParam0->f_776, &Var6, iParam0->f_980, vVar0, Function_129());
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
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(iParam0->f_976, true);
		AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(iParam0->f_976, false);
		if (iVar14 == 1)
		{
			TASK_CLEAR(iParam0->f_976);
			TASK_FACE_ACTOR(iParam0->f_976, Global_34573, 1, 3212836864);
			TASK_STAND_STILL(iParam0->f_976, -1.0f, 0, 0);
			TASK_PRIORITY_SET(iParam0->f_976, false);
			SET_ACTOR_FACE_STYLE(iParam0->f_976, 0);
			RESET_ANIM_SET_FOR_ACTOR(iParam0->f_976, false);
			SET_ANIM_SET_FOR_ACTOR(iParam0->f_976, "stand_ambient", 0);
			SET_ACTION_NODE_FOR_ACTOR(iParam0->f_976, "stand_ambient/help_loop");
		}
		else
		{
			AI_IGNORE_ACTOR(iParam0->f_976);
			SET_MOVER_FROZEN(iParam0->f_976, true);
		}
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(iParam0->f_976);
		if (IS_VOLUME_VALID(iParam0->f_920))
		{
			ADD_ACTOR_STAY_WITHIN_VOLUME(iParam0->f_976, iParam0->f_920);
		}
	}
	Function_374(iParam0 + 780, 0x20000000);
	return 1;
}

bool Function_311(int iParam0, float fParam1) //Position: 0xEE42 / 60994
{
	if (Function_469(iParam0))
	{
		if (Function_397(iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void Function_312(int iParam0) //Position: 0xEE5E / 61022
{
	if (!Function_375(iParam0->f_780, 0x10000000))
	{
		HUD_ENABLE(true);
		UI_PUSH("Stagecoach_Job");
		UI_ENTER("WHATEVA");
		UI_ENTER("WHATEVA_prog");
		UI_SET_PROGRESS_BAR_VAL("WHATEVA_prog", iParam0->f_912);
		UI_SET_TEXT("WHATEVA", "pm_trn_dynamite");
		Function_374(iParam0 + 780, 0x10000000);
	}
	return;
}

int Function_313(int iParam0) //Position: 0xEEEF / 61167
{
	int iVar0;
	
	if (Function_314() != 4294967295)
	{
		iVar0 = Function_314();
	}
	else
	{
		iVar0 = iParam0->f_628;
	}
	return iVar0;
}

int Function_314() //Position: 0xEF0D / 61197
{
	if (DECOR_CHECK_EXIST(Function_59(), "trnsMissType"))
	{
		return DECOR_GET_INT(Function_59(), "trnsMissType");
	}
	return 4294967295;
}

var Function_315(float fParam0) //Position: 0xEF45 / 61253
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
			iVar1 = (iVar1 + CURVE_CALCULATE_DISTANCE_BY_STEP_SIZE(GET_CURVE_FROM_OBJECT(bVar2), 0.0f, 1.0f, fParam0));
		}
		bVar0++;
	}
	return iVar1;
}

void Function_316(int iParam0) //Position: 0xEFBF / 61375
{
	Function_317(iParam0);
	return;
}

void Function_317(char* cParam0) //Position: 0xEFCA / 61386
{
	Function_322(cParam0);
	switch (cParam0->f_628)
	{
		case 0x00000001:
			Function_318(cParam0, "pm_trn_inlh", 0);
			break;
		
		case 0x00000003:
			Function_318(cParam0, "pm_trn_indh", 0);
			break;
		
		case 0x00000002:
			Function_318(cParam0, "pm_trn_insh", 0);
			break;
	}
	return;
}

int Function_318(int iParam0, bool bParam1, int iParam2) //Position: 0xF039 / 61497
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
	if (Function_375(iParam0->f_584, 32))
	{
		if (!Function_20(iParam0->f_624))
		{
			return 0;
		}
	}
	bVar20 = MAKE_TIME_OF_DAY_EX(false, true, 0, 0);
	bVar21 = Function_321(Function_19(iParam0->f_624), Function_135(iParam0->f_624));
	iVar22 = Function_319(Function_19(iParam0->f_624), Function_135(iParam0->f_624));
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

int Function_319(int iParam0, int iParam1) //Position: 0xF198 / 61848
{
	int iVar0;
	bool bVar1;
	
	if (!Function_320(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	bVar1 = false;
	while (bVar1 <= Global_13172)
	{
		if (Function_19(bVar1) != iParam0 && Function_135(bVar1) != iParam1)
		{
			iVar0 = (iVar0 + Global_13172[bVar111].f_12);
		}
		bVar1++;
	}
	return iVar0;
}

bool Function_320(int iParam0) //Position: 0xF1E4 / 61924
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_321(int iParam0, int iParam1) //Position: 0xF1F9 / 61945
{
	bool bVar0;
	bool bVar1;
	
	bVar1 = false;
	while (bVar1 <= Global_13172)
	{
		if (Function_19(bVar1) != iParam0 && Function_135(bVar1) != iParam1)
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

void Function_322(int iParam0) //Position: 0xF245 / 62021
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

bool Function_323(var uParam0, int iParam1) //Position: 0xF281 / 62081
{
	if (Function_311(uParam0, iParam1))
	{
		Function_236(uParam0);
		return 1;
	}
	return 0;
}

void Function_324(int iParam0) //Position: 0xF299 / 62105
{
	Function_325(iParam0);
	return;
}

void Function_325(char* cParam0) //Position: 0xF2A4 / 62116
{
	struct<8> Var0;
	
	if (!Function_375(cParam0->f_780, 2))
	{
		Function_291(cParam0, 1);
		if (Function_71(cParam0))
		{
			strcpy(&Var0, GET_OBJECT_NAME(GET_OBJECT_FROM_VOLUME(StackVal)), 32);
			cParam0->f_632 = 0;
			switch (cParam0->f_628)
			{
				case 0x00000001:
					Function_290(cParam0, "pm_trn_inl", 1);
					Function_326(cParam0, &Var0, 0);
					break;
				
				case 0x00000003:
					Function_290(cParam0, "pm_trn_inb", 1);
					Function_326(cParam0, &Var0, 0);
					break;
				
				case 0x00000002:
					Function_290(cParam0, "pm_trn_ins", 1);
					Function_326(cParam0, &Var0, 0);
					break;
				
				case 0x00000004:
					Function_290(cParam0, "pm_trn_ind", 1);
					Function_326(cParam0, &Var0, 0);
					break;
			}
		}
		else if (!GET_VEHICLE(Global_34573) != cParam0->f_860)
		{
			Function_290(cParam0, "wagon_return", 1);
			cParam0->f_632 = 2;
		}
		else if (!GET_VEHICLE(cParam0->f_952) != cParam0->f_860)
		{
			Function_290(cParam0, "pm_trn_wait", 1);
			cParam0->f_632 = 1;
		}
	}
	return;
}

int Function_326(int iParam0, bool bParam1, bool bParam2) //Position: 0xF3E2 / 62434
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

bool Function_327(int iParam0) //Position: 0xF44D / 62541
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

int Function_328(int iParam0) //Position: 0xF4EC / 62700
{
	if (!Function_375(iParam0->f_780, 64))
	{
		LOG_ERROR("Cannot launch transport without TRANSPORT_INIT_TRANSPORT being properly called");
		return 0;
	}
	Function_367(iParam0);
	if (IS_ACTOR_VALID(iParam0->f_952))
	{
		Function_64(iParam0->f_952, 2);
	}
	if (IS_ACTOR_VALID(iParam0->f_860))
	{
		RESET_VEHICLE_BUMP_COUNT(iParam0->f_860);
	}
	if (IS_VOLUME_VALID(iParam0->f_920))
	{
		Function_488(iParam0, iParam0->f_920);
	}
	if (iParam0->f_628 == 2)
	{
		Function_374(iParam0 + 780, 512);
	}
	if (iParam0->f_628 == 3)
	{
		Function_466(iParam0 + 784);
	}
	Function_466(iParam0 + 832);
	Function_334(iParam0 + 832);
	Function_324(iParam0);
	Function_66(iParam0, 1);
	Function_466(iParam0 + 808);
	Function_330(iParam0);
	Function_329(iParam0, 1);
	Function_374(iParam0 + 780, 128);
	return 1;
}

void Function_329(int iParam0, int iParam1) //Position: 0xF5F6 / 62966
{
	if (iParam1 == 1)
	{
		Function_374(iParam0 + 584, 4);
	}
	else
	{
		Function_61(iParam0 + 584, 4);
	}
	return;
}

void Function_330(int iParam0) //Position: 0xF617 / 62999
{
	if (Function_375(iParam0->f_584, 4))
	{
		Function_333();
	}
	if (IS_BLIP_VALID(iParam0->f_36))
	{
		REMOVE_BLIP(iParam0->f_36);
	}
	Function_332(1);
	if (Function_375(iParam0->f_584, 32))
	{
		if (Function_18(iParam0->f_624))
		{
			Function_331(iParam0->f_624, 1);
		}
	}
	if (SQUAD_IS_VALID(iParam0->f_568))
	{
		Function_7(iParam0, 0);
	}
	Function_374(iParam0 + 584, 16);
	Global_3382 = 1;
	if (Function_375(iParam0->f_584, 64))
	{
		Global_13111 = 4294967295;
	}
	Function_337(iParam0, 1);
	return;
}

void Function_331(bool bParam0, int iParam1) //Position: 0xF698 / 63128
{
	int iVar0;
	
	if (!Function_20(bParam0))
	{
		Function_84();
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
	iVar0 = Function_19(bParam0);
	Global_13172[bParam011].f_4 = 2;
	if (!Global_34165.f_36 && iParam1)
	{
		Function_98(1);
	}
	if (iVar0 == 1)
	{
		Global_6269 = Function_17(bParam0);
	}
	Global_3376 = 1;
	return;
}

void Function_332(int iParam0) //Position: 0xF6FF / 63231
{
	if (!Global_8717[iParam0])
	{
		Global_8717[iParam0] = 1;
		if (iParam0 == 1)
		{
			Global_8721 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_23())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_333() //Position: 0xF734 / 63284
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_334(bool bParam0) //Position: 0xF748 / 63304
{
	if (Function_469(bParam0))
	{
		if (!Function_335(bParam0))
		{
			bParam0->f_8 = (StackVal - GET_CURRENT_GAME_TIME());
			Function_374(bParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to PAUSE a TIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to PAUSE a TIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

bool Function_335(int iParam0) //Position: 0xF807 / 63495
{
	return Function_375(*iParam0, 2);
}

int Function_336(int iParam0) //Position: 0xF814 / 63508
{
	return iParam0->f_620;
}

void Function_337(int iParam0, int iParam1) //Position: 0xF81F / 63519
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
				iVar0 = Function_341(iParam0);
				if ((iVar0 == 4294967295 && iVar0 == 0) && Function_340(iParam0) != 1)
				{
					Function_339(iParam0->f_488, iVar0, 1);
				}
				if (iParam0->f_484 != 1 || iParam0->f_484 != 0)
				{
					Function_188(200, 1, 0);
				}
				else
				{
					Function_175(50, 1, 0);
				}
				if (iParam0->f_332 > 0)
				{
					Function_194(iParam0->f_332, 1);
				}
				else
				{
					Function_338(iParam0->f_332, 1);
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

int Function_338(bool bParam0, bool bParam1) //Position: 0xF8F4 / 63732
{
	bool bVar0;
	
	bVar0 = Function_121(0);
	if ((Function_121(0) - bParam0) <= 0)
	{
		bParam0 = bVar0;
	}
	if (bParam0 >= 0)
	{
		Function_190(0, bParam0, 0);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, (bParam0 * 4294967295), 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_121(0));
	return 1;
}

void Function_339(int iParam0, char* cParam1, bool bParam2) //Position: 0xF984 / 63876
{
	char* cVar0[32];
	
	if (!Function_161(3))
	{
		return;
	}
	if (Function_45())
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
						if (IS_PS3())
						{
							Function_163(4, 16, 0, 0, 0);
						}
						break;
					
					case 0x0000000E:
						Function_163(5, 16, 0, 0, 0);
						break;
					
					case 0x0000000C:
						Function_163(7, 16, 0, 0, 0);
						break;
					}
			}
			strcpy(&cVar0, "PROCTHEME_ATTACK", 32);
			break;
		
		case 0x00000000:
			switch (cParam1)
			{
				case 0x00000019:
					if (IS_PS3())
					{
						Function_163(4, 8, 0, 0, 0);
					}
					break;
				
				case 0x0000000E:
					Function_163(5, 8, 0, 0, 0);
					break;
				
				case 0x00000018:
					Function_163(6, 8, 0, 0, 0);
					break;
				
				case 0x0000000C:
					Function_163(7, 8, 0, 0, 0);
					break;
			}
			strcpy(&cVar0, "PROCTHEME_BOUNTY_HUNTER", 32);
			break;
	}
	return;
}

int Function_340(int iParam0) //Position: 0xFA91 / 64145
{
	return !Function_375(iParam0->f_584, 16384);
}

var Function_341(int iParam0) //Position: 0xFAA3 / 64163
{
	return iParam0->f_492;
}

int Function_342(int iParam0) //Position: 0xFAAE / 64174
{
	iParam0->f_616 = Function_343(iParam0);
	Function_226(iParam0);
	return iParam0->f_616;
}

var Function_343(int iParam0) //Position: 0xFAC8 / 64200
{
	int iVar0;
	int iVar1[3];
	char* cVar5[64];
	int iVar21;
	
	iVar0 = 0;
	if (Function_365(0))
	{
		iVar1[0] = "Pass";
		iVar1[1] = "Fail";
		iVar1[2] = "Cancel";
		strcpy(&cVar5, "RDR PROCMISSION MENU - ", 64);
		stradd(&cVar5, GET_SHORT_SCRIPT_NAME(), 64);
		iVar21 = Function_351(iParam0 + 588, &iVar1, &cVar5, GET_DEBUG_PADINDEX(), 0);
		if (iVar21 == 0)
		{
			Function_344();
			iVar0 = 2;
		}
		else if (iVar21 == 1)
		{
			Function_344();
			iVar0 = 3;
		}
		else if (iVar21 == 2)
		{
			Function_344();
			iVar0 = 4;
		}
		else
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void Function_344() //Position: 0xFB6C / 64364
{
	Function_346();
	Function_345(10, 3);
	return;
}

void Function_345(int iParam0, int iParam1) //Position: 0xFB7B / 64379
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DB_MENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		while (GUI_WINDOW_VALID(bVar0))
		{
			GUI_CLOSE_WINDOW(bVar0);
			bVar1++;
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(bVar0))
			{
				GUI_CLOSE_WINDOW(bVar0);
			}
			bVar1++;
		}
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_TITLE");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_FOOTER_HIGH");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_OVERLAY");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	return;
}

void Function_346() //Position: 0xFCB2 / 64690
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_350())
	{
		Function_349(10, 3);
	}
	else
	{
		Function_347();
	}
	Global_30920 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_106(), false);
	AI_CLEAR_DONT_HARM_ACTOR(Function_106());
	UI_POP("nDebugMenu");
	return;
}

void Function_347() //Position: 0xFCFD / 64765
{
	Function_348(25, 2);
	return;
}

void Function_348(int iParam0, int iParam1) //Position: 0xFD09 / 64777
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DBGMENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		while (GUI_WINDOW_VALID(bVar0))
		{
			GUI_CLOSE_WINDOW(bVar0);
			bVar1++;
			strcpy(&cVar3, "DBGMENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 <= iVar2)
		{
			strcpy(&cVar3, "DBGMENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(bVar0))
			{
				GUI_CLOSE_WINDOW(bVar0);
			}
			bVar1++;
		}
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DBGMENU_OVERLAY");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "MAINMENUBACK");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "ITEMMENUBACK");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "BACKMENUBACK");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "HEADERBACK");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "FOOTERBACK");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "nHEADERWIN");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "nFOOTERWIN");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "POINTER");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	return;
}

void Function_349(int iParam0, int iParam1) //Position: 0xFF07 / 65287
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DB_MENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		while (GUI_WINDOW_VALID(bVar0))
		{
			GUI_CLOSE_WINDOW(bVar0);
			bVar1++;
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(bVar0))
			{
				GUI_CLOSE_WINDOW(bVar0);
			}
			bVar1++;
		}
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_TITLE");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_FOOTER_HIGH");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_OVERLAY");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	return;
}

bool Function_350() //Position: 0x10052 / 65618
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
				if (!Function_375(Global_78480.f_124, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

var Function_351(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x100B9 / 65721
{
	struct<33> Var0;
	
	if ((Global_62478 || Global_62479) || Global_62480)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	uParam0->f_12 = uParam3;
	uParam0->f_16 = uParam4;
	Function_364(&Var15, &Var0);
	uVar20 = Function_363(*uParam1, &Var15);
	Function_362(uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_361(uParam0, uVar20);
	Function_359(StackVal, uParam0, Var15.f_12);
	Function_357(StackVal, uParam0, Var15.f_12);
	iVar21 = Function_356(*uParam1, uParam0, &Var15);
	while (!Var15.f_16 && iVar21 > *uParam1)
	{
		strcpy(&Var0, (*uParam1)[iVar21], 32);
		if (Function_353(&Var15, &Var0, uParam0, 9, 6, 28, 4294967295))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar21;
		}
		iVar21++;
	}
	Function_352(StackVal, Var0.f_32, Var15.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_352(int iParam0, int iParam1, int iParam2) //Position: 0x10180 / 65920
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

bool Function_353(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x101DC / 66012
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
				Function_355(bParam1->f_32, bParam1->f_36, bParam1->f_40, &cVar0, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
			Function_355(bParam1->f_32, bParam1->f_36, bParam1->f_40, bParam1, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
			bParam1->f_32++;
			*uParam0++;
			bParam1->f_40 = (StackVal + ((bParam1->f_40 / IntToFloat(375.0f)) * (bParam1->f_56 / 1,5f)));
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
				Function_352(StackVal, bParam1->f_32, uParam0->f_12);
				return 0;
			}
		}
		Function_354(bParam1->f_32);
	}
	else
	{
		Function_354(bParam1->f_32);
	}
	return 0;
}

void Function_354(bool bParam0) //Position: 0x10362 / 66402
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

void Function_355(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0x1039C / 66460
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

var Function_356(int iParam0, var uParam1, int iParam2) //Position: 0x1044A / 66634
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_357(var uParam0, int iParam1, int iParam2) //Position: 0x1046E / 66670
{
	switch (Function_358())
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

int Function_358() //Position: 0x1050A / 66826
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

void Function_359(var uParam0, int iParam1, int iParam2) //Position: 0x10546 / 66886
{
	switch (Function_360(uParam0))
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

int Function_360(bool bParam0) //Position: 0x105DE / 67038
{
	float fVar0;
	float fVar1;
	
	fVar0 = (GET_STICK_Y(GET_PLAYER_PADINDEX(Function_106()), 0, 1) + GET_STICK_Y(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar0 >= -0,75f || IS_BUTTON_PRESSED(bParam0->f_12, 12, 1, false)) || IS_BUTTON_PRESSED(bParam0->f_16, 12, 1, false))
	{
		if (!Function_375(*bParam0, 0x40000000))
		{
			Function_374(bParam0, 0x40000000);
			return 1;
		}
	}
	if ((fVar0 <= 0,75f || IS_BUTTON_PRESSED(bParam0->f_12, 14, 1, false)) || IS_BUTTON_PRESSED(bParam0->f_16, 14, 1, false))
	{
		if (!Function_375(*bParam0, 0x40000000))
		{
			Function_374(bParam0, 0x40000000);
			return 2;
		}
	}
	Function_61(bParam0, 0x40000000);
	fVar1 = (GET_STICK_X(GET_PLAYER_PADINDEX(Function_106()), 0, 1) + GET_STICK_X(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar1 >= -0,75f || IS_BUTTON_PRESSED(bParam0->f_12, 15, 1, false)) || IS_BUTTON_PRESSED(bParam0->f_16, 15, 1, false))
	{
		if (!Function_375(*bParam0, 0x20000000))
		{
			Function_374(bParam0, 0x20000000);
			return 3;
		}
	}
	if ((fVar1 <= 0,75f || IS_BUTTON_PRESSED(bParam0->f_12, 13, 1, false)) || IS_BUTTON_PRESSED(bParam0->f_16, 13, 1, false))
	{
		if (!Function_375(*bParam0, 0x20000000))
		{
			Function_374(bParam0, 0x20000000);
			return 4;
		}
	}
	Function_61(bParam0, 0x20000000);
	return 0;
}

var Function_361(var uParam0, int iParam1) //Position: 0x10729 / 67369
{
	int iVar0;
	
	iVar0 = uParam0->f_20;
	if (iVar0 != 0 && iParam1 != 0)
	{
		return iVar0;
	}
	if (iVar0 < 0 && iVar0 > iParam1)
	{
		DRAW_STRING_CURRENT_FONT(0,1f, 0,9f, "Previous Page<-Dpad->Next Page", 1.0f, 1.0f, 1.0f, 1.0f);
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
		DRAW_STRING_CURRENT_FONT(0,1f, 0,9f, "Previous Page<-Dpad", 1.0f, 1.0f, 1.0f, 1.0f);
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
		DRAW_STRING_CURRENT_FONT(0,1f, 0,9f, "Dpad->Next Page", 1.0f, 1.0f, 1.0f, 1.0f);
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

void Function_362(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x10878 / 67704
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

var Function_363(int iParam0, int iParam1) //Position: 0x1090B / 67851
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_364(var uParam0, int iParam1) //Position: 0x10925 / 67877
{
	iParam1->f_36 = 100.0f;
	iParam1->f_40 = 110.0f;
	iParam1->f_44 = 1.0f;
	iParam1->f_48 = 1.0f;
	iParam1->f_52 = 1.0f;
	iParam1->f_56 = 1,6f;
	iParam1->f_32 = 0;
	uParam0->f_16 = 0;
	uParam0->f_4 = 10;
	uParam0->f_12 = 3;
	*uParam0 = 0;
	uParam0->f_8 = 0;
	return;
}

bool Function_365(int iParam0) //Position: 0x10973 / 67955
{
	if (!Function_366(iParam0))
	{
		return 0;
	}
	return Global_30920;
}

bool Function_366(int iParam0) //Position: 0x10987 / 67975
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

void Function_367(int iParam0) //Position: 0x109AB / 68011
{
	struct<8> Var0;
	
	if (!IS_LAYOUTREF_VALID(iParam0->f_776))
	{
		strcpy(&Var0, "transportStructLay", 32);
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_496(&Var0) };
		iParam0->f_776 = CREATE_LAYOUT(&Var0);
		if (!IS_LAYOUTREF_VALID(iParam0->f_776))
		{
			LOG_ERROR("couldn't create library transport layout");
		}
		Function_61(iParam0 + 780, 1024);
	}
	return;
}

int Function_368(int iParam0, bool bParam1) //Position: 0x10A2F / 68143
{
	if (!IS_ACTOR_VALID(bParam1))
	{
		LOG_ERROR("TRANSPORT_ADD_ATTACK_TARGET - Attack data not initialized, tell Ben.");
		return 0;
	}
	return Function_265(iParam0 + 1004, bParam1);
}

void Function_369(int iParam0) //Position: 0x10A94 / 68244
{
	Function_372(iParam0 + 1004);
	Function_370(iParam0 + 1004, Global_34573);
	return;
}

void Function_370(var uParam0, bool bParam1) //Position: 0x10AAD / 68269
{
	if (SQUAD_IS_VALID(uParam0->f_60))
	{
		Function_371(uParam0->f_60, 2, GET_OBJECT_FROM_ACTOR(bParam1), 4, 1);
	}
	return;
}

int Function_371(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x10AD0 / 68304
{
	bool bVar0;
	bool bVar1;
	void fVar2;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		fVar2 = SQUAD_GET_SIZE(bParam0);
		bVar1 = false;
		while (bVar1 < (fVar2 - 1))
		{
			bVar0 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar1);
			if (IS_ACTOR_ALIVE(bVar0))
			{
				Function_33(bVar0, uParam1, uParam2, uParam3, uParam4);
			}
			bVar1++;
		}
		SQUAD_MAKE_EMPTY(bParam0);
		return 1;
	}
	return 0;
}

void Function_372(int iParam0) //Position: 0x10B28 / 68392
{
	Function_373(iParam0);
	return;
}

void Function_373(int iParam0) //Position: 0x10B33 / 68403
{
	if (IS_ACTORSET_VALID(iParam0->f_52))
	{
		DISBAND_ACTORSET(iParam0->f_52);
	}
	return;
}

void Function_374(bool bParam0, int iParam1) //Position: 0x10B4B / 68427
{
	*bParam0 = (*bParam0 || iParam1);
	return;
}

bool Function_375(bool bParam0, bool bParam1) //Position: 0x10B5A / 68442
{
	return (bParam0 && bParam1) == 0;
}

bool Function_376(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x10B67 / 68455
{
	bool bVar0;
	
	if (DECOR_CHECK_EXIST(Global_34573, "SOL_GotPop") || !Function_375(*uParam0, 524288))
	{
		if (IS_ACTOR_RIDING_VEHICLE(Global_34573))
		{
			if (*uParam2 == GET_VEHICLE(Global_34573))
			{
				if (!Function_375(*uParam0, 262144))
				{
					if (HUD_IS_SHOWING_OBJECTIVE())
					{
						HUD_CLEAR_OBJECTIVE();
						HUD_CLEAR_OBJECTIVE_QUEUE();
					}
					Function_503("sol_FTE_returnWagonObj", 0x40f00000, 1, 2, 0, 0, 0);
					CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("SOLJournalID"), 0);
					APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("SOLJournalID"), "sol_FTE_returnWagonObj", 0, 0, false);
					APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("SOLJournalID"), 0);
					Function_374(uParam0, 262144);
				}
				DECOR_SET_BOOL(Global_34573, "nPrintHelp", true);
				DECOR_SET_BOOL(Global_34573, "SOL_aggroInWagon", true);
				if (IS_BLIP_VALID(*uParam1))
				{
					REMOVE_BLIP(*uParam1);
				}
				Function_66(uParam4, 1);
				return 1;
			}
		}
		if (!Function_375(*uParam0, 131072))
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
						Function_503("sol_FTE_GetInWagonObj", 0x40f00000, 1, 2, 0, 0, 0);
						CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("SOLJournalID"), 0);
						APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("SOLJournalID"), "sol_FTE_GetInWagonObj", 0, 0, false);
						APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("SOLJournalID"), 0);
						if (IS_ACTOR_VALID(*uParam5))
						{
							if (IS_ACTOR_ALIVE(*uParam5))
							{
								ACTOR_START_FORCE_HOLSTER(*uParam5, 0, 0);
								TASK_CLEAR(*uParam5);
								TASK_PRIORITY_SET(*uParam5, true);
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
						Function_374(uParam0, 131072);
					}
				}
			}
		}
	}
	return 0;
}

void Function_377(bool bParam0, bool bParam1) //Position: 0x10E00 / 69120
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
	else if (!bParam1 || Function_302(bParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(bParam0, 1);
	}
	return;
}

var Function_378(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x10E5D / 69213
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_389(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "nSOL_Intro", 2, 1);
	}
	Function_379(&bVar0);
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

void Function_379(int iParam0) //Position: 0x10ED2 / 69330
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_381(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_380(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 9.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 1.0f, 1);
	return;
}

void Function_380(int iParam0) //Position: 0x10F15 / 69397
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 51,97088f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -3851,368f, 8,977757f, 3697,214f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,042171f, -0,108678f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_381(bool bParam0) //Position: 0x10F7F / 69503
{
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 51,97088f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_POSITION(*bParam0, -3853,791f, 8,977757f, 3696,826f);
	SET_CAMERASHOT_ORIENTATION(*bParam0, 0,049323f, 0,297922f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*bParam0);
	return;
}

void Function_382(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x10FE9 / 69609
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
	Function_196();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(Global_34573, "iDrunk", false);
	if (bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_106();
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
			if (Function_45())
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
				Function_386(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_389(), 2, Function_386(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
				DELETE_PROJECTILES_IN_VOLUME(bVar0);
			}
		}
		Function_138(19, 1, 0, 0);
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
	if ((IS_OBJECT_VALID(Function_385()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_385()));
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
	if (Function_384(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_383(0x4000000);
	}
	if (Function_384(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_383(0x8000000);
	}
}

void Function_383(bool bParam0) //Position: 0x11292 / 70290
{
	bool bVar0;
	
	if (Function_375(bParam0, 1) && Function_375(Global_26119, 1))
	{
	}
	bVar0 = (Global_26119 && bParam0);
	Global_26119 = (Global_26119 - bVar0);
	Global_26119 |= 1073741824;
	return;
}

bool Function_384(int iParam0) //Position: 0x112C6 / 70342
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_385() //Position: 0x112E2 / 70370
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

vector3 Function_386(bool bParam0) //Position: 0x11361 / 70497
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_387(int iParam0, int iParam1) //Position: 0x11372 / 70514
{
	int iVar0;
	bool bVar1;
	struct<6> Var2;
	struct<4> Var8;
	bool bVar12;
	
	if (!Function_20(iParam0))
	{
		Function_84();
		return;
	}
	if (StackVal == 1)
	{
		return;
	}
	iVar0 = Function_19(iParam0);
	if (StackVal != 2)
	{
		Function_15("DEED_START", iParam0);
	}
	Global_13172[iParam011].f_8 = StackVal + 1;
	Global_13172[iParam011].f_4 = 2;
	Global_6271 = iParam0;
	if (!Global_34165.f_36 && iParam1)
	{
		Function_98(1);
	}
	if (iVar0 == 1)
	{
		bVar1 = Function_17(iParam0);
		Global_6269 = bVar1;
		Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(Global_6269) };
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

int Function_388(int iParam0) //Position: 0x11482 / 70786
{
	if (!Function_20(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

var Function_389() //Position: 0x1149C / 70812
{
	bool bVar0;
	
	return bVar0;
}

bool Function_390(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5) //Position: 0x114A4 / 70820
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
				SET_PLAYER_CONTROL(0, 0, iParam1, iParam1);
			}
			if (IS_PLAYER_DEADEYE(0) && iParam2)
			{
				CANCEL_DEADEYE();
				CANCEL_TIME_WARP(1);
			}
			if (bParam3)
			{
				Function_377(bVar1, iParam5);
			}
			else if (IS_ACTOR_RIDING(bVar1))
			{
				if (Function_302(bVar1, 0) < 10.0f && IS_ACTOR_VALID(GET_MOUNT(bVar1)))
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
				if (Function_302(bVar1, 0) < 12.0f)
				{
					vVar3 = { 0.0f, 0.0f, -4.0f };
					UNK_0xB89CC342(bVar1, &vVar3, &iVar6);
					Function_391(&iVar6, &vVar3);
				}
				else
				{
					vVar3 = { 0.0f, 0.0f, -2.0f };
					UNK_0xB89CC342(bVar1, &vVar3, &iVar6);
					Function_391(&iVar6, &vVar3);
				}
				TASK_DISMOUNT(false, 1);
				TASK_GO_TO_COORD(false, &vVar3, true);
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

bool Function_391(int iParam0, int iParam1) //Position: 0x116B6 / 71350
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(*iParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_44(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	*iParam0 = (*iParam0 + 0,01f);
	iParam0->f_8 = (StackVal + 0,01f);
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_44(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	return 0;
}

float Function_392(bool bParam0, int iParam1) //Position: 0x11721 / 71457
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_263(bParam0);
		vVar0 = { StackVal, StackVal, Function_263(bParam0) };
		Function_393(iParam1);
		vVar3 = { StackVal, StackVal, Function_393(iParam1) };
		return VDIST(vVar0, vVar3);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to volume. Returning 0.0!");
	return 0.0f;
}

vector3 Function_393(bool bParam0) //Position: 0x1179E / 71582
{
	vector3 vVar0;
	
	GET_VOLUME_CENTER(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_394() //Position: 0x117AF / 71599
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "SoloFolly_ThanxPlayer", "SoloFolly_ThanxPlayer", false, 3, 1, 0, 1);
		Function_92(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

float Function_395(bool bParam0, bool bParam1) //Position: 0x11802 / 71682
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

bool Function_396(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x118F3 / 71923
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

float Function_397(int iParam0) //Position: 0x1190D / 71949
{
	if (Function_469(iParam0))
	{
		if (Function_335(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

void Function_398(bool bParam0, bool bParam1) //Position: 0x119D5 / 72149
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
					RESET_ANIM_SET_FOR_ACTOR(*bParam0, true);
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

void Function_399(char* cParam0, int iParam1) //Position: 0x11A7E / 72318
{
	var uVar0;
	int iVar1;
	
	uVar0 = NET_MAILBOX_GET_CHALLENGE_BY_ID(cParam0);
	iVar1 = Function_400(&uVar0);
	if (iVar1 >= 4294967295)
	{
		if (Global_84611[iVar1140].f_64 && Function_469(iParam1))
		{
			(*&Global_84611[iVar1140] + 144)[412] = Function_397(iParam1);
		}
	}
	return;
}

var Function_400(int iParam0) //Position: 0x11ABD / 72381
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

bool Function_401(int iParam0) //Position: 0x11AEF / 72431
{
	vector3 vVar0;
	bool bVar3;
	
	Function_367(iParam0);
	if (!Function_432(iParam0))
	{
		LOG_ERROR("TRANSPORT Invalid scene creation. Ending.");
		return 0;
	}
	iParam0->f_996 = 0;
	switch (Function_313(iParam0))
	{
		case 0x00000002:
			Function_487(iParam0, 0);
			break;
		
		case 0x00000003:
		case 0x00000001:
			switch (iParam0->f_636)
			{
				case 0x00000000:
					Function_486(iParam0, RAND_INT_RANGE(5, 5));
					Function_485(iParam0, 2, 3);
					Function_484(iParam0, 14.0f);
					Function_483(iParam0, 28.0f);
					break;
				
				case 0x00000001:
					Function_486(iParam0, RAND_INT_RANGE(8, 8));
					Function_485(iParam0, 3, 4);
					Function_484(iParam0, 12.0f);
					Function_483(iParam0, 24.0f);
					break;
				
				case 0x00000002:
					Function_486(iParam0, RAND_INT_RANGE(12, 12));
					Function_485(iParam0, 4, 6);
					Function_484(iParam0, 10.0f);
					Function_483(iParam0, 20.0f);
					break;
				
				default:
					Function_486(iParam0, RAND_INT_RANGE(8, 8));
					Function_485(iParam0, 3, 4);
					Function_484(iParam0, 12.0f);
					Function_483(iParam0, 24.0f);
					break;
			}
			Function_368(iParam0, Global_34573);
			Function_482(iParam0, 30.0f, 60.0f, 0x41700000);
			Function_487(iParam0, 1);
			bVar3 = false;
			while (bVar3 < (GET_NUM_DRAFT_POSITIONS(iParam0->f_860) - 1))
			{
				if (IS_ACTOR_VALID(GET_DRAFT_ACTOR(bVar3, iParam0->f_860)))
				{
					Function_368(iParam0, GET_DRAFT_ACTOR(bVar3, iParam0->f_860));
				}
				bVar3++;
			}
			break;
		
		default:
			Function_487(iParam0, 1);
			Function_368(iParam0, Global_34573);
			break;
	}
	if (Function_313(iParam0) == 3)
	{
		(*iParam0 + 872)[0] = DECOR_GET_OBJECT(iParam0->f_860, "tranExplo0");
		(*iParam0 + 872)[1] = DECOR_GET_OBJECT(iParam0->f_860, "tranExplo1");
		(*iParam0 + 872)[2] = DECOR_GET_OBJECT(iParam0->f_860, "tranExplo2");
	}
	Function_225(iParam0);
	if (Function_44(StackVal, StackVal, Function_225(iParam0)))
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
	Function_61(iParam0 + 780, 1048576);
	Function_61(iParam0 + 780, 2097152);
	Function_61(iParam0 + 780, 0x1000000);
	if (IS_ACTOR_VALID(iParam0->f_952))
	{
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(iParam0->f_952, 0,1f);
	}
	if (IS_ACTOR_VALID(iParam0->f_960))
	{
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(iParam0->f_960, 0,1f);
	}
	Function_427(iParam0, Function_428(0, 2, 2));
	Function_426(iParam0, 1);
	Function_285(iParam0, 13);
	Function_425(iParam0, 2);
	Function_476(iParam0->f_860);
	vVar0 = { StackVal, StackVal, Function_476(iParam0->f_860) };
	Function_288(StackVal, StackVal, iParam0, vVar0);
	Function_404(StackVal, StackVal, iParam0, iParam0->f_952, 396, vVar0, 1, 1, 0);
	Function_374(iParam0 + 780, 64);
	Function_25(56);
	Function_402(4);
	return 1;
}

void Function_402(int iParam0) //Position: 0x11E8A / 73354
{
	Function_403(&Global_28842, iParam0);
	return;
}

void Function_403(var uParam0, bool bParam1) //Position: 0x11E98 / 73368
{
	int iVar0;
	
	iVar0 = (*uParam0 && bParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

void Function_404(int iParam0, bool bParam1, var uParam2, vector3 vParam3, int iParam6, bool bParam7, int iParam8) //Position: 0x11EBB / 73403
{
	struct<8> Var0;
	bool bVar8;
	int iVar9;
	
	iVar9 = 0;
	Function_424(iParam0);
	if (IS_OBJECT_VALID(bParam1))
	{
		*iParam0 = bParam1;
		bVar8 = bParam1;
	}
	iParam0->f_40 = uParam2;
	if (!Function_44(StackVal, StackVal, vParam3))
	{
		*(iParam0 + 4) = { StackVal, StackVal, vParam3 };
	}
	if (iParam6 == 1)
	{
		Function_374(iParam0 + 584, 4);
	}
	else
	{
		Function_61(iParam0 + 584, 4);
	}
	if (bParam7)
	{
		if (Function_18(iParam0->f_624))
		{
			Function_423(iParam0->f_624, 1);
			Function_374(iParam0 + 584, 32);
		}
		else
		{
			LOG_ERROR("PROCMISSION_SETUP found an invalid deed");
		}
	}
	Function_374(iParam0 + 584, 1024);
	iParam0->f_564 = iParam8;
	if (iParam8 >= 0)
	{
		if (!IS_OBJECT_VALID(bVar8))
		{
			bVar8 = CREATE_POINT_IN_LAYOUT(iParam0->f_28, &Var0, vParam3, 0.0f, 0.0f, 0.0f);
			iVar9 = 1;
		}
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_496("nbirdSquad") };
		iParam0->f_568 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(iParam0->f_28, &Var0));
		if (SQUAD_IS_VALID(iParam0->f_568))
		{
			Function_408(iParam0->f_28, iParam0->f_568, iParam8, bVar8, 1129, 0x41200000);
			Function_407(iParam0->f_568, 0);
		}
		if (iVar9 == 1)
		{
			DESTROY_OBJECT(bVar8);
		}
		Function_466(iParam0 + 572);
	}
	Function_466(iParam0 + 44);
	Function_405(0);
}

void Function_405(int iParam0) //Position: 0x1200A / 73738
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, false, (iParam0 + Function_406(105)), 0);
	return;
}

int Function_406(int iParam0) //Position: 0x1202B / 73771
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_407(bool bParam0, bool bParam1) //Position: 0x12041 / 73793
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

void Function_408(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0x12082 / 73858
{
	vector3 vVar0;
	vector3 vVar3;
	struct<8> Var6;
	struct<2> Var14;
	bool bVar16;
	int iVar17;
	
	Function_421(10.0f);
	Var14 = { StackVal, Function_421(10.0f) };
	if (SQUAD_IS_VALID(bParam1))
	{
		if (!Function_246(bParam4) || bParam4 != 0)
		{
			bVar16 = Function_411(128, 0, 0, 4294967295, 0);
		}
		else
		{
			bVar16 = bParam4;
		}
		iVar17 = 0;
		while (iVar17 < (iParam2 - 1))
		{
			Function_409(&Var14, iVar17);
			GET_OBJECT_RELATIVE_POSITION(uParam3, Function_409(&Var14, iVar17), &vVar0);
			vVar0.f_4 = (vVar0.y + (fParam5 + RAND_FLOAT_RANGE(0.0f, 20.0f)));
			vVar3.f_4 = RAND_FLOAT_RANGE(0.0f, 360.0f);
			Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_496("genbird_") };
			SQUAD_JOIN(CREATE_ACTOR_IN_LAYOUT(bParam0, &Var6, bVar16, vVar0, vVar3), bParam1);
			iVar17++;
		}
	}
	else
	{
		LOG_ERROR("CREATE_BIRD_SQUAD_IN_LAYOUT - birdSquad passed in is not squad");
	}
}

vector3 Function_409(var uParam0, bool bParam1) //Position: 0x12174 / 74100
{
	vector3 vVar0;
	
	if (!Function_410(uParam0))
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

bool Function_410(int iParam0) //Position: 0x122B5 / 74421
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

var Function_411(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x122D7 / 74455
{
	return Function_412(iParam0, iParam1, iParam2, iParam3, iParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_412(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, vector3 vParam6) //Position: 0x122F0 / 74480
{
	switch (iParam0)
	{
		case 0x00000001:
			return Function_415(StackVal, StackVal, Global_30750[0], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000002:
			return Function_415(StackVal, StackVal, Global_30750[1], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000004:
			return Function_415(StackVal, StackVal, Global_30750[2], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000008:
			return Function_415(StackVal, StackVal, Global_30750[3], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000010:
			return Function_415(StackVal, StackVal, Global_30750[4], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000020:
			return Function_415(StackVal, StackVal, Global_30750[5], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000040:
			return Function_415(StackVal, StackVal, Global_30750[6], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000080:
			return Function_415(StackVal, StackVal, Global_30750[7], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000100:
			return Function_415(StackVal, StackVal, Global_30750[8], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000200:
			return Function_415(StackVal, StackVal, Global_30750[9], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000400:
			return Function_415(StackVal, StackVal, Global_30750[10], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000800:
			return Function_415(StackVal, StackVal, Global_30750[11], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00001000:
			return Function_415(StackVal, StackVal, Global_30750[12], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00002000:
			return Function_415(StackVal, StackVal, Global_30750[13], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return Function_413(StackVal, StackVal, iParam0, bParam1, bParam2, fParam5, vParam6);
}

var Function_413(var uParam0, bool bParam1, bool bParam2, float fParam3, vector3 vParam4) //Position: 0x12545 / 75077
{
	bool bVar0;
	
	bVar0 = CREATE_POPULATION_SET(0);
	if (uParam0 & 1 == 1)
	{
		Function_414(Global_30750[0], bVar0);
	}
	if (uParam0 & 2 == 2)
	{
		Function_414(Global_30750[1], bVar0);
	}
	if (uParam0 & 4 == 4)
	{
		Function_414(Global_30750[2], bVar0);
	}
	if (uParam0 & 8 == 8)
	{
		Function_414(Global_30750[3], bVar0);
	}
	if (uParam0 & 16 == 16)
	{
		Function_414(Global_30750[4], bVar0);
	}
	if (uParam0 & 32 == 32)
	{
		Function_414(Global_30750[5], bVar0);
	}
	if (uParam0 & 64 == 64)
	{
		Function_414(Global_30750[6], bVar0);
	}
	if (uParam0 & 128 == 128)
	{
		Function_414(Global_30750[7], bVar0);
	}
	if (uParam0 & 256 == 256)
	{
		Function_414(Global_30750[8], bVar0);
	}
	if (uParam0 & 512 == 512)
	{
		Function_414(Global_30750[9], bVar0);
	}
	if (uParam0 & 1024 == 1024)
	{
		Function_414(Global_30750[10], bVar0);
	}
	if (uParam0 & 2048 == 2048)
	{
		Function_414(Global_30750[11], bVar0);
	}
	if (uParam0 & 4096 == 4096)
	{
		Function_414(Global_30750[12], bVar0);
	}
	if (uParam0 & 8192 == 8192)
	{
		Function_414(Global_30750[13], bVar0);
	}
	return Function_415(StackVal, StackVal, bVar0, bParam1, bParam2, 4294967295, 0, fParam3, vParam4);
}

void Function_414(bool bParam0, bool bParam1) //Position: 0x12696 / 75414
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

var Function_415(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, vector3 vParam6) //Position: 0x12754 / 75604
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
		Function_420();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, bParam4, fParam5, vParam6);
	if (!Function_246(bVar1))
	{
		if (!Global_30837 && !Global_30838)
		{
			Function_419(bParam0, bParam1, bParam2, bParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_419(bParam0, bParam1, bParam2, bParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && bParam3 != 4294967295)
		{
			while (Function_418(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, fParam5, vParam6);
				if (Function_246(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_418(bVar0))
				{
					Function_417();
				}
				Function_416(bVar0);
			}
		}
		else if (!bParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != bParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, fParam5, vParam6);
				if (Function_246(bVar1))
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

void Function_416(int iParam0) //Position: 0x12A47 / 76359
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

void Function_417() //Position: 0x12AFB / 76539
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

bool Function_418(bool bParam0) //Position: 0x12B35 / 76597
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

void Function_419(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x12B62 / 76642
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

void Function_420() //Position: 0x12CB3 / 76979
{
	int iVar0;
	
	if (Global_3402)
	{
		if (StackVal || !Global_30742 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_417();
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
	Function_417();
	return;
}

struct<8> Function_421(int iParam0) //Position: 0x12CFE / 77054
{
	Function_422(iParam0, 10);
	return StackVal, Function_422(iParam0, 10);
}

struct<8> Function_422(var uParam0, int iParam1) //Position: 0x12D0B / 77067
{
	struct<2> Var0;
	
	Var0.f_4 = uParam0;
	Var0 = Global_26121[iParam1];
	return StackVal, Var0;
}

void Function_423(int iParam0, int iParam1) //Position: 0x12D24 / 77092
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	
	if (!Function_20(iParam0))
	{
		Function_84();
		return;
	}
	iVar0 = Function_19(iParam0);
	Global_13172[iParam011].f_4 = 1;
	if (!Global_34165.f_36 && iParam1)
	{
		Function_98(1);
	}
	if (iVar0 == 1)
	{
		Global_6269 = Function_17(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(Global_6269) };
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

void Function_424(int iParam0) //Position: 0x12DCA / 77258
{
	struct<8> Var0;
	
	if (!IS_LAYOUTREF_VALID(iParam0->f_28))
	{
		strcpy(&Var0, "procMisslayout", 32);
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_496(&Var0) };
		iParam0->f_28 = CREATE_LAYOUT(&Var0);
		if (!IS_LAYOUTREF_VALID(iParam0->f_28))
		{
			LOG_ERROR("couldn't create internal procmission layout");
		}
	}
	return;
}

void Function_425(var uParam0, int iParam1) //Position: 0x12E3F / 77375
{
	uParam0->f_488 = iParam1;
	return;
}

void Function_426(var uParam0, int iParam1) //Position: 0x12E4C / 77388
{
	uParam0->f_484 = iParam1;
	return;
}

void Function_427(int iParam0, int iParam1) //Position: 0x12E59 / 77401
{
	if (Function_18(iParam1))
	{
		iParam0->f_624 = iParam1;
		Function_374(iParam0 + 584, 32);
	}
	else
	{
		LOG_ERROR("PROCMISSION_SET_DEED received an invalid deed");
	}
	return;
}

int Function_428(bool bParam0, bool bParam1, bool bParam2) //Position: 0x12EAE / 77486
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_431(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_429(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_429(bParam0, bParam1, bParam2, 4294967295);
}

int Function_429(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x12F0C / 77580
{
	var uVar0;
	
	if (!Function_320(bParam2))
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
	uVar0 = Function_431(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_430(uVar0);
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

int Function_430(int iParam0) //Position: 0x13061 / 77921
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

var Function_431(int iParam0, int iParam1, int iParam2) //Position: 0x1309F / 77983
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

bool Function_432(int iParam0) //Position: 0x130BF / 78015
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
	Function_464();
	if (Function_44(StackVal, StackVal, Function_464()))
	{
		if (!Function_461(iParam0))
		{
			LOG_ERROR("TRANSPORT could not find a suitable starting position");
			return 0;
		}
	}
	Function_464();
	Function_460(StackVal, StackVal, iParam0, Function_464(), 0.0f, 0.0f, 0.0f);
	Function_225(iParam0);
	if (StackVal || Function_44(StackVal, !IS_LAYOUTREF_VALID(iParam0->f_776), Function_225(iParam0)))
	{
		return 0;
	}
	if (!Function_314() != 4294967295)
	{
		Function_459(iParam0, Function_314());
	}
	if (IS_ACTOR_VALID(Function_458()))
	{
		Function_457(iParam0, Function_458());
		GIVE_OBJECT_TO_LAYOUT(iParam0->f_860, iParam0->f_776);
	}
	if (!Function_375(iParam0->f_780, 16384))
	{
		if (Function_246(iParam0->f_864) && !iParam0->f_864 != 0)
		{
			Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_496("transVeh") };
			Function_225(iParam0);
			iParam0->f_860 = Function_453(StackVal, StackVal, StackVal, StackVal, iParam0->f_776, &Var6, iParam0->f_864, 977, Function_225(iParam0), *(iParam0 + 900), 1, 976, 976, 976, 4);
			Function_225(iParam0);
			vVar20 = { StackVal, StackVal, Function_225(iParam0) };
			strcpy(&Var6, GET_ACTOR_ENUM_STRING_FROM_ENUM(iParam0->f_864), 32);
		}
		else
		{
			return 0;
		}
	}
	if (!Function_375(iParam0->f_780, 16384))
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
	if (iParam0->f_628 != 3 && !Function_375(iParam0->f_780, 16384))
	{
		Function_451(iParam0->f_860, &uVar2);
	}
	Function_449(iParam0, Function_450());
	Function_447(iParam0, Function_448());
	if (IS_ACTOR_VALID(Function_446()))
	{
		Function_445(iParam0, Function_446());
	}
	else if (Function_246(Function_444()))
	{
		Function_443(iParam0, Function_444());
	}
	if (Function_375(iParam0->f_780, 8))
	{
		if (IS_ACTOR_VALID(Function_446()))
		{
			Function_445(iParam0, Function_446());
		}
		if (!Function_375(iParam0->f_780, 8192))
		{
			if (!Function_246(iParam0->f_956))
			{
				LOG_ERROR("Invalid transport companion actorenum?");
				iParam0->f_956 = Function_411(4, 0, 0, 4294967295, 0);
			}
			Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_496("transportComp") };
			vVar14.x = 3.0f;
			vVar14.f_4 = 3.0f;
			vVar14.f_8 = 1.0f;
			Function_129();
			vVar17 = { StackVal, StackVal, Function_129() };
			iParam0->f_952 = Function_441(StackVal, StackVal, StackVal, StackVal, iParam0->f_776, &Var6, iParam0->f_956, vVar14, vVar17, GET_OBJECT_FROM_ACTOR(iParam0->f_860));
		}
		if (!IS_ACTOR_VALID(iParam0->f_952))
		{
			return 0;
		}
		MEMORY_CONSIDER_AS(iParam0->f_952, Global_34573, 5);
		MEMORY_IDENTIFY(iParam0->f_952, Global_34573);
		MEMORY_REPORT_POSITION_AUTO(iParam0->f_952, Global_34573, true);
		SET_ACTOR_CAN_BE_HARDLOCKED(iParam0->f_952, 0);
		SET_ACTOR_UPDATE_PRIORITY(iParam0->f_952, false);
		TASK_CLEAR(iParam0->f_952);
		MAKE_ACTOR_READY_FOR_ACTION(iParam0->f_952, 1);
	}
	if (IS_OBJECTSET_VALID(Function_440()))
	{
		iParam0->f_968 = Function_440();
	}
	if (IS_ACTOR_VALID(Function_439()))
	{
		Function_437(iParam0, Function_439());
	}
	else if (Function_246(Function_436()))
	{
		Function_435(iParam0, Function_436());
	}
	if (Function_375(iParam0->f_780, 16))
	{
		if (IS_ACTOR_VALID(Function_439()))
		{
			Function_437(iParam0, Function_439());
		}
		if (!Function_375(iParam0->f_780, 4096))
		{
			if (!Function_246(iParam0->f_964))
			{
				LOG_ERROR("Invalid transport passenger actorenum?");
				iParam0->f_964 = Function_411(2, 0, 0, 4294967295, 0);
			}
			Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_496("transportPass") };
			vVar14.x = 3.0f;
			vVar14.f_4 = 3.0f;
			vVar14.f_8 = 1.0f;
			Function_129();
			vVar17 = { StackVal, StackVal, Function_129() };
			iParam0->f_960 = Function_441(StackVal, StackVal, StackVal, StackVal, iParam0->f_776, &Var6, iParam0->f_964, vVar14, vVar17, GET_OBJECT_FROM_ACTOR(iParam0->f_860));
		}
		if (!IS_ACTOR_VALID(iParam0->f_960))
		{
			return 0;
		}
		if (iParam0->f_628 == 1)
		{
			Function_434(iParam0);
		}
		else if (iParam0->f_628 == 2)
		{
			Function_433(iParam0);
		}
		MEMORY_CONSIDER_AS(iParam0->f_960, Function_106(), 5);
		MEMORY_IDENTIFY(iParam0->f_960, Function_106());
		MEMORY_REPORT_POSITION_AUTO(iParam0->f_960, Function_106(), true);
		DELETE_ALL_INVENTORY_FROM_ACTOR(iParam0->f_960);
		SET_ACTOR_CAN_BE_HARDLOCKED(iParam0->f_960, 0);
		TASK_CLEAR(iParam0->f_960);
	}
	if (iParam0->f_628 == 1)
	{
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_496("transCorpse") };
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

int Function_433(int iParam0) //Position: 0x13604 / 79364
{
	struct<8> Var0;
	vector3 vVar8;
	vector3 vVar11;
	
	if (IS_ACTOR_VALID(iParam0->f_960))
	{
		strcpy(&Var0, "ntranslook", 32);
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_496(&Var0) };
		vVar8 = { 0.0f, 0.0f, 0.0f };
		vVar11 = { 0.0f, 0.0f, 0.0f };
		TASK_CLEAR(iParam0->f_960);
		TASK_STAND_STILL(iParam0->f_960, -1.0f, 0, 0);
		TASK_PRIORITY_SET(iParam0->f_960, true);
		vVar8 = { 0.0f, 1,35f, 0,4f };
		vVar11 = { 0.0f, 0.0f, 0.0f };
		iParam0->f_868 = ATTACH_OBJECTS_NO_DRV(iParam0->f_960, GET_OBJECT_FROM_ACTOR(iParam0->f_860), Function_389(), vVar8, vVar11);
		SET_ANIM_SET_FOR_ACTOR(iParam0->f_960, "lay_wounded_psg", 0);
		SET_ACTION_NODE_FOR_ACTOR(iParam0->f_960, "lay_wounded_psg/1");
		return 1;
	}
	return 0;
}

int Function_434(int iParam0) //Position: 0x136CB / 79563
{
	if (!IS_ACTOR_VALID(iParam0->f_960))
	{
		return 0;
	}
	SET_ACTOR_IN_VEHICLE(iParam0->f_960, iParam0->f_860, 2);
	TASK_CLEAR(iParam0->f_960);
	TASK_STAND_STILL(iParam0->f_960, -1.0f, 0, 0);
	TASK_PRIORITY_SET(iParam0->f_960, true);
	return 1;
}

int Function_435(int iParam0, bool bParam1) //Position: 0x1370B / 79627
{
	if (!Function_246(bParam1))
	{
		return 0;
	}
	iParam0->f_964 = bParam1;
	return 1;
}

bool Function_436() //Position: 0x13724 / 79652
{
	return DECOR_GET_INT(Function_59(), "trnsPassengerAE");
}

int Function_437(int iParam0, bool bParam1) //Position: 0x13742 / 79682
{
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	iParam0->f_960 = bParam1;
	iParam0->f_964 = Function_438(GET_OBJECT_FROM_ACTOR(bParam1));
	Function_374(iParam0 + 780, 4096);
	GIVE_OBJECT_TO_LAYOUT(iParam0->f_960, iParam0->f_776);
	return 1;
}

var Function_438(bool bParam0) //Position: 0x13781 / 79745
{
	if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bParam0)))
	{
		return GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bParam0));
	}
	return 4294967295;
}

bool Function_439() //Position: 0x1379C / 79772
{
	return GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(Function_59(), "trnsPassenger"));
}

var Function_440() //Position: 0x137BB / 79803
{
	return GET_OBJECTSET_FROM_OBJECT(DECOR_GET_OBJECT(Function_59(), "trnsNecActors"));
}

var Function_441(bool bParam0, bool bParam1, bool bParam2, vector3 vParam3, vector3 vParam6, bool bParam9) //Position: 0x137DA / 79834
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	
	vVar0 = { StackVal, StackVal, vParam3 };
	vVar3 = { StackVal, StackVal, vParam6 };
	Function_442(bParam9, 0, &vVar0, &vVar3);
	bVar6 = CREATE_ACTOR_IN_LAYOUT(bParam0, bParam1, bParam2, vVar0, vVar3);
	SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_ACTOR(bVar6), 50.0f, false, 1092616192);
	return bVar6;
}

void Function_442(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x13825 / 79909
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (GET_OBJECT_RELATIVE_POSITION(bParam0, *uParam2, &vVar0))
	{
		if (bParam1)
		{
			if (!Function_391(&vVar0, uParam2))
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

int Function_443(int iParam0, int iParam1) //Position: 0x1394D / 80205
{
	if (!Function_246(iParam1))
	{
		return 0;
	}
	iParam0->f_956 = iParam1;
	return 1;
}

int Function_444() //Position: 0x13966 / 80230
{
	return DECOR_GET_INT(Function_59(), "trnsCompanionAE");
}

int Function_445(int iParam0, bool bParam1) //Position: 0x13984 / 80260
{
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	iParam0->f_952 = bParam1;
	iParam0->f_956 = Function_438(GET_OBJECT_FROM_ACTOR(bParam1));
	Function_374(iParam0 + 780, 8192);
	GIVE_OBJECT_TO_LAYOUT(iParam0->f_952, iParam0->f_776);
	return 1;
}

bool Function_446() //Position: 0x139C3 / 80323
{
	return GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(Function_59(), "trnsCompanion"));
}

void Function_447(int iParam0, int iParam1) //Position: 0x139E2 / 80354
{
	if (iParam1 == 1)
	{
		Function_374(iParam0 + 780, 16);
	}
	else
	{
		Function_61(iParam0 + 780, 16);
	}
	return;
}

int Function_448() //Position: 0x13A05 / 80389
{
	if (DECOR_CHECK_EXIST(Function_59(), "trnsNeedPass"))
	{
		return DECOR_GET_BOOL(Function_59(), "trnsNeedPass");
	}
	return 0;
}

void Function_449(int iParam0, int iParam1) //Position: 0x13A3D / 80445
{
	if (iParam1 == 1)
	{
		Function_374(iParam0 + 780, 8);
	}
	else
	{
		Function_61(iParam0 + 780, 8);
	}
	return;
}

int Function_450() //Position: 0x13A60 / 80480
{
	if (DECOR_CHECK_EXIST(Function_59(), "trnsNeedComp"))
	{
		return DECOR_GET_BOOL(Function_59(), "trnsNeedComp");
	}
	return 0;
}

void Function_451(bool bParam0, int iParam1) //Position: 0x13A98 / 80536
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
	bVar0 = Function_452(GET_OBJECT_FROM_ACTOR(bParam0));
	if (IS_LAYOUTREF_VALID(bVar0))
	{
		GET_POSITION(bParam0, &vVar5);
		vVar8[03] = { 0,1f, 1,22f, 0.0f };
		vVar8[13] = { 0,05f, 1,22f, 0,3f };
		vVar8[23] = { -0,1f, 1,22f, 0,45f };
		vVar18[03] = { 0.0f, 0.0f, 0.0f };
		vVar18[13] = { 0.0f, 95.0f, 0.0f };
		vVar18[23] = { 0.0f, -135.0f, 0.0f };
		memcpy(&(Var28[04]), StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_496("ntransTntA"), 4);
		memcpy(&(Var28[14]), StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_496("ntransTntB"), 4);
		memcpy(&(Var28[24]), StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_496("ntransTntC"), 4);
		uVar41[0] = "tranExplo0";
		uVar41[1] = "tranExplo1";
		uVar41[2] = "tranExplo2";
		iVar45 = 0;
		while (iVar45 < 2)
		{
			if (!IS_OBJECT_VALID(bVar1[iVar45]))
			{
				bVar1[iVar45] = CREATE_PROP_IN_LAYOUT(bVar0, &(Var28[iVar454]), "$/fragments/p_gen_crateTnt01x", vVar5, 0.0f, 0.0f, 0.0f, 1);
				SET_OBJECT_COLLIDE_WITH_OBJECT(bVar1[iVar45], bParam0, false);
				SET_OBJECT_COLLIDE_WITH_WORLD(bVar1[iVar45], 0);
				(*iParam1)[iVar45] = bVar1[iVar45];
				if (IS_OBJECT_VALID(bVar1[iVar45]))
				{
					ATTACH_OBJECTS(bVar1[iVar45], bParam0, Function_389(), vVar8[iVar453], vVar18[iVar453], 4294967295);
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

var Function_452(bool bParam0) //Position: 0x13CCB / 81099
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

var Function_453(bool bParam0, bool bParam1, bool bParam2, int iParam3, vector3 vParam4, vector3 vParam7, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14) //Position: 0x13D25 / 81189
{
	bool bVar0;
	int iVar1[6];
	bool bVar8;
	bool bVar9;
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
		bVar9 = false;
		while (bVar9 < (iVar10 - 1))
		{
			strcpy(&cVar11, "Draft", 16);
			straddi(&cVar11, bVar9, 16);
			bVar15 = "";
			if (Function_456(Global_30750[6], 4, 23, 0) && iParam10)
			{
				bVar16 = Function_455(StackVal, StackVal, Global_30750[6], vParam4, 4, 23, 0);
				if (Function_454(bVar16, &iVar1))
				{
					bVar16 = 976;
				}
				iVar1[bVar9] = bVar16;
				bVar15 = CREATE_ACTOR_IN_LAYOUT(bVar0, &cVar11, bVar16, vParam4, vParam7);
			}
			bVar17 = 4294967295;
			if (!IS_ACTOR_VALID(bVar15))
			{
				switch (bVar9)
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
				ATTACH_DRAFT_TO_VEHICLE(bVar15, bVar0, bVar9, 1);
			}
			else
			{
				LOG_ERROR("Tried to create coach, but one of the horses couldn't be created");
				return bVar0;
			}
			bVar9++;
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

bool Function_454(int iParam0, int iParam1) //Position: 0x13F59 / 81753
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

var Function_455(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6) //Position: 0x13F8B / 81803
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam4, bParam5, bParam6, 1,401298E-45f, vParam1);
}

int Function_456(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x13FA3 / 81827
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

int Function_457(int iParam0, bool bParam1) //Position: 0x13FCA / 81866
{
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	iParam0->f_860 = bParam1;
	iParam0->f_864 = Function_438(GET_OBJECT_FROM_ACTOR(bParam1));
	Function_374(iParam0 + 780, 16384);
	return 1;
}

var Function_458() //Position: 0x14000 / 81920
{
	return GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(Function_59(), "trnsVehicle"));
}

int Function_459(int iParam0, int iParam1) //Position: 0x1401D / 81949
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

int Function_460(int iParam0, vector3 vParam1, vector3 vParam4) //Position: 0x1407F / 82047
{
	if (Function_44(StackVal, StackVal, vParam1))
	{
		LOG_ERROR("Invalid StartPos");
		return 0;
	}
	Function_288(StackVal, StackVal, iParam0, vParam1);
	*(iParam0 + 888) = { StackVal, StackVal, vParam1 };
	*(iParam0 + 900) = { StackVal, StackVal, vParam4 };
	return 1;
}

bool Function_461(bool bParam0) //Position: 0x140CB / 82123
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
	
	Function_225(bParam0);
	if (Function_44(StackVal, StackVal, Function_225(bParam0)))
	{
		iVar32 = 0;
		Function_258(&Var0, 1, 5.0f, 64, 4294967295);
		Function_257(StackVal, StackVal, &Var15, 0, vVar26, 0.0f, 25.0f, 75.0f, 0, 0x40a00000, 0);
		Function_250(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var15, Var0, 1);
		vVar26 = { StackVal, StackVal, Function_250(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var15, Var0, 1) };
		while (Function_44(StackVal, StackVal, vVar26) && iVar32 > 10)
		{
			Function_250(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var15, Var0, 1);
			vVar26 = { StackVal, StackVal, Function_250(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var15, Var0, 1) };
			if (Function_44(StackVal, StackVal, vVar26))
			{
				iVar32++;
			}
			else
			{
				iVar32 = 100;
			}
		}
		if (Function_44(StackVal, StackVal, vVar26))
		{
			LOG_ERROR("Couldn't create spawn point for transport");
			return 0;
		}
		Function_225(bParam0);
		vVar26 = { StackVal, StackVal, Function_225(bParam0) };
		if (!FIND_GROUND_INTERSECTION(&vVar26, 100.0f, &vVar26, &uVar29))
		{
			PRINTVECTOR(vVar26);
		}
		Function_225(bParam0);
		if (Function_462(StackVal, StackVal, Function_225(bParam0), 0.0f, 60.0f, &vVar33, &uVar36, &uVar39, 0x41c80000, 0))
		{
			Function_225(bParam0);
			vVar42 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar33, Function_225(bParam0), StackVal) };
			*(bParam0 + 900) = { 0.0f, 0.0f, 0.0f };
			(bParam0 + 900)->f_4 = UNK_0x9C40E671(&vVar42);
		}
	}
	return 1;
}

bool Function_462(vector3 vParam0, float fParam3, float fParam4, var uParam5, var uParam6, var uParam7, float fParam8, bool bParam9) //Position: 0x141F5 / 82421
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
	
	Function_129();
	vVar0 = { StackVal, StackVal, Function_129() };
	bVar26 = -1.0f;
	if (bParam9)
	{
		bVar7 = START_CURVE_QUERY(Global_28841, vParam0, 2,937122E-42f, fParam3, fParam4, 20.0f, 0);
	}
	else
	{
		bVar7 = START_CURVE_QUERY(Global_28841, vParam0, 2,242078E-44f, fParam3, fParam4, 2.0f, 0);
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
			Function_463(&Var8);
			vVar3 = { StackVal, StackVal, Function_463(&Var8) };
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
			Function_463(&uVar20);
			*uParam6 = { StackVal, StackVal, Function_463(&uVar20) };
			UNK_0x19D652F9(bVar6, -fParam8, &Var14, &uVar20);
			Function_463(&uVar20);
			*uParam7 = { StackVal, StackVal, Function_463(&uVar20) };
		}
		else
		{
			Function_129();
			*uParam7 = { StackVal, StackVal, Function_129() };
			Function_129();
			*uParam6 = { StackVal, StackVal, Function_129() };
		}
		UNK_0xDF93BD7C(bVar7);
		return 1;
	}
	return 0;
}

vector3 Function_463(var uParam0) //Position: 0x14331 / 82737
{
	vector3 vVar0;
	
	vVar0.x = *uParam0;
	vVar0.f_4 = StackVal;
	vVar0.f_8 = StackVal;
	return StackVal, StackVal, vVar0;
}

vector3 Function_464() //Position: 0x14350 / 82768
{
	vector3 vVar0;
	
	vVar0.x = DECOR_GET_FLOAT(Function_59(), "trnsStartPosX");
	vVar0.f_4 = DECOR_GET_FLOAT(Function_59(), "trnsStartPosY");
	vVar0.f_8 = DECOR_GET_FLOAT(Function_59(), "trnsStartPosZ");
	return StackVal, StackVal, vVar0;
}

void Function_465(int iParam0, int iParam1) //Position: 0x143A6 / 82854
{
	if (!Function_20(iParam0))
	{
		return;
	}
	Global_13172[iParam011].f_16 = iParam1;
	return;
}

void Function_466(int iParam0) //Position: 0x143C1 / 82881
{
	Function_467(iParam0, 0.0f);
	return;
}

void Function_467(int iParam0, float fParam1) //Position: 0x143CD / 82893
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_374(iParam0, 1);
	Function_61(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

void Function_468(int iParam0) //Position: 0x143EE / 82926
{
	if (!Function_469(iParam0))
	{
		Function_467(iParam0, 0.0f);
	}
	return;
}

bool Function_469(int iParam0) //Position: 0x14403 / 82947
{
	return Function_375(*iParam0, 1);
}

bool Function_470(var uParam0, int iParam1) //Position: 0x14410 / 82960
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_471(bool bParam0) //Position: 0x1442C / 82988
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

void Function_472(bool bParam0, bool bParam1, int iParam2) //Position: 0x1446B / 83051
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
			Function_197(bVar1, bParam1, iParam2);
		}
		bVar0++;
	}
	return;
}

bool Function_473(bool bParam0, bool bParam1) //Position: 0x144BA / 83130
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
		if (STRING_CONTAINS_STRING(bVar4, bParam0) || Function_474(bParam0, bVar4))
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

int Function_474(char* cParam0, char* cParam1) //Position: 0x14562 / 83298
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

vector3 Function_475(bool bParam0) //Position: 0x1458D / 83341
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

vector3 Function_476(bool bParam0) //Position: 0x145B4 / 83380
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

int Function_477(int iParam0, bool bParam1) //Position: 0x145DB / 83419
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
	iParam0->f_864 = Function_438(GET_OBJECT_FROM_ACTOR(bParam1));
	Function_374(iParam0 + 780, 16384);
	return 1;
}

bool Function_478(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x146A3 / 83619
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
	if (!Function_375(*uParam3, 1))
	{
		vVar12 = { -3873,881f, 8,031f, 3659,863f };
		*uParam1 = Function_453(StackVal, StackVal, bParam0, Function_389(), 1199, 976, vVar12, 0.0f, 187,033f, 0.0f, 1, 976, 976, 976, 4);
		MEMORY_CONSIDER_AS(*uParam1, Global_34573, false);
		*uParam4 = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_ON_OBJECT(*uParam1, Function_389(), "ClimbOntoWagon", 0.0f, 0.0f, 3,3f, 0.0f, 0.0f, 0.0f));
		bVar15 = false;
		while (bVar15 < (GET_NUM_DRAFTED_ACTORS(*uParam1) - 1))
		{
			if (IS_ACTOR_VALID(GET_DRAFT_ACTOR(bVar15, *uParam1)))
			{
				AI_DONT_HARM_ACTOR(GET_DRAFT_ACTOR(bVar15, *uParam1));
				SET_ACTOR_MAX_HEALTH(GET_DRAFT_ACTOR(bVar15, *uParam1), 50.0f);
				SET_ACTOR_HEALTH(GET_DRAFT_ACTOR(bVar15, *uParam1), GET_ACTOR_MAX_HEALTH(GET_DRAFT_ACTOR(bVar15, *uParam1)));
				Function_43(GET_DRAFT_ACTOR(bVar15, *uParam1), 0, 1, 1, 1, 0, 1);
			}
			bVar15++;
		}
		vVar0.x = -0,447f;
		vVar0.f_4 = 1,12f;
		vVar0.f_8 = 0,8f;
		GET_OBJECT_RELATIVE_POSITION(*uParam1, vVar0, &vVar6);
		GET_OBJECT_RELATIVE_ORIENTATION(*uParam1, vVar3, &vVar9);
		*uParam2 = CREATE_PROP_IN_LAYOUT(bParam0, Function_389(), "p_gen_safe02x", vVar6, vVar9, 1);
		bVar16 = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_ON_OBJECT(*uParam2, Function_389(), "Player_Lockpick_Safe_NoProp", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f));
		DECOR_SET_INT(GET_OBJECT_FROM_GRINGO(bVar16), "SOL_Safe", false);
		SET_OBJECT_COLLIDE_WITH_OBJECT(*uParam2, *uParam1, false);
		SET_PROP_AI_OBSTACLE_ENABLED(*uParam2, 0);
		ATTACH_OBJECTS(*uParam2, *uParam1, Function_389(), vVar0, vVar3, 4294967295);
		Function_374(uParam3, 1);
	}
	if (!Function_375(*uParam3, 2))
	{
		if (IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("SOL_AA_Layout")))
		{
			DECOR_SET_BOOL(Global_34573, "SOL_FTE_SquadReady", true);
			Function_374(uParam3, 2);
			return 1;
		}
	}
	return 0;
}

void Function_479(int iParam0, int iParam1) //Position: 0x148C1 / 84161
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam0->f_1228)
	{
		if ((*iParam0 + 1228)[iVar0] != 0 || !Function_246((*iParam0 + 1228)[iVar0]))
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

void Function_480(int iParam0, int iParam1) //Position: 0x1490E / 84238
{
	if (iParam1 == 1)
	{
		Function_374(iParam0 + 780, 2048);
	}
	else
	{
		Function_61(iParam0 + 780, 2048);
	}
	return;
}

void Function_481(var uParam0, int iParam1) //Position: 0x14933 / 84275
{
	uParam0->f_1280 = iParam1;
	return;
}

void Function_482(int iParam0, float fParam1, float fParam2, int iParam3) //Position: 0x14940 / 84288
{
	Function_276(iParam0 + 1004, fParam1, fParam2, iParam3);
}

void Function_483(int iParam0, float fParam1) //Position: 0x14956 / 84310
{
	if (fParam1 > 0.0f)
	{
		fParam1 = 0.0f;
	}
	iParam0->f_1276 = fParam1;
	return;
}

void Function_484(int iParam0, float fParam1) //Position: 0x1496D / 84333
{
	if (fParam1 > 0.0f)
	{
		fParam1 = 0.0f;
	}
	iParam0->f_1272 = fParam1;
	return;
}

void Function_485(int iParam0, int iParam1, int iParam2) //Position: 0x14984 / 84356
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
	Function_374(iParam0 + 780, 524288);
	return;
}

void Function_486(int iParam0, bool bParam1) //Position: 0x149C0 / 84416
{
	if (bParam1 <= 0)
	{
		bParam1 = false;
	}
	iParam0->f_1296 = bParam1;
	Function_374(iParam0 + 780, 262144);
	return;
}

void Function_487(int iParam0, int iParam1) //Position: 0x149E2 / 84450
{
	if (iParam1 == 1)
	{
		Function_374(iParam0 + 780, 256);
	}
	else
	{
		Function_61(iParam0 + 780, 256);
	}
	return;
}

int Function_488(int iParam0, bool bParam1) //Position: 0x14A07 / 84487
{
	if (!IS_VOLUME_VALID(bParam1))
	{
		return 0;
	}
	iParam0->f_920 = bParam1;
	return 1;
}

int Function_489(bool bParam0, int iParam1, int iParam2) //Position: 0x14A23 / 84515
{
	int iVar0;
	bool bVar1;
	
	if (!Function_134(iParam1))
	{
		LOG_ERROR("Invalid region criteria passed to TRANSPORT_SET_DESTINATION_REGION");
		return (StackVal || !IS_VOLUME_VALID(false));
		LOG_ERROR("Invalid region volume found for to TRANSPORT_SET_DESTINATION_REGION");
		return 0;
	}
	bParam0->f_916 = iParam1;
	if (Function_313(bParam0) == 3)
	{
		if (iParam1 == Global_30640[0])
		{
			*(bParam0 + 924) = { -2137,573f, 16,097f, 2608,122f };
			*(bParam0 + 984) = { -2138,072f, 16,387f, 2605,557f };
		}
		else if (iParam1 == Global_30717[0])
		{
			*(bParam0 + 924) = { 786,585f, 78,306f, 1318,052f };
			*(bParam0 + 984) = { 781,586f, 78,479f, 1318,092f };
		}
		else if (iParam1 == Global_30668[0])
		{
			*(bParam0 + 924) = { -829,292f, 92,14f, 2404,836f };
			*(bParam0 + 984) = { -830,639f, 92,316f, 2401,437f };
		}
		else if (iParam1 == Global_30668[1])
		{
			*(bParam0 + 924) = { 165,194f, 73,036f, 2203,197f };
			*(bParam0 + 984) = { 166,894f, 73,755f, 2195,46f };
		}
		else if (iParam1 == Global_30693[0])
		{
			*(bParam0 + 924) = { -2749,39f, 31,862f, 4300,488f };
			*(bParam0 + 984) = { -2747,507f, 31,86f, 4297,798f };
		}
		else if (iParam1 == Global_30685[0])
		{
			*(bParam0 + 924) = { -4260,107f, 19,033f, 4465,096f };
			*(bParam0 + 984) = { -4262,798f, 18,816f, 4462,007f };
		}
		else if (iParam1 == Global_30723[1])
		{
			*(bParam0 + 924) = { -424,384f, 151,02f, 1614,085f };
			*(bParam0 + 984) = { -429,38f, 151,344f, 1615,145f };
		}
	}
	if (Function_134(bParam0->f_916) && iParam2 != 1)
	{
		bVar1 = GET_VOLUME_FROM_OBJECT(Function_490(bParam0->f_916));
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
		iVar0 = Function_488(bParam0, bVar1);
	}
	else
	{
		iVar0 = Function_488(StackVal, bParam0);
	}
	return iVar0;
}

var Function_490(int iParam0) //Position: 0x14CEE / 85230
{
	bool bVar0;
	bool bVar1;
	char* cVar2[24];
	
	if (!IS_LAYOUTREF_VALID(Global_28841))
	{
		return "";
	}
	if (!Function_134(iParam0))
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

void Function_491(int iParam0, int iParam1) //Position: 0x14D7D / 85373
{
	if (iParam1 == 1)
	{
		Function_374(iParam0 + 780, 4);
	}
	else
	{
		Function_61(iParam0 + 780, 4);
	}
	return;
}

void Function_492(int iParam0, int iParam1) //Position: 0x14D9E / 85406
{
	if (iParam1 == 1)
	{
		Function_374(iParam0 + 780, 2);
	}
	else
	{
		Function_61(iParam0 + 780, 2);
	}
	return;
}

void Function_493(int iParam0, int iParam1) //Position: 0x14DBF / 85439
{
	if (iParam1 == 1)
	{
		Function_374(iParam0 + 780, 1);
	}
	else
	{
		Function_61(iParam0 + 780, 1);
	}
	return;
}

int Function_494(var uParam0, vector3 vParam1, vector3 vParam4) //Position: 0x14DE0 / 85472
{
	return Function_460(StackVal, StackVal, StackVal, StackVal, uParam0, vParam1, vParam4);
}

var Function_495(int iParam0, int iParam1) //Position: 0x14DF5 / 85493
{
	int iVar0;
	int iVar1;
	
	iVar1 = Function_314();
	if (iVar1 == 4294967295)
	{
		iVar0 = Function_459(iParam0, iParam1);
	}
	else
	{
		iVar0 = Function_459(iParam0, iVar1);
	}
	return iVar0;
}

struct<32> Function_496(bool bParam0) //Position: 0x14E1D / 85533
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_497("0", &cVar8, ""), 4);
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

struct<32> Function_497(char* cParam0, char* cParam1, char* cParam2) //Position: 0x14E87 / 85639
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_498(int iParam0) //Position: 0x14EA6 / 85670
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_502();
	iVar1 = 0;
	if (!Function_4(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_501(iParam0[iVar03], 8);
		}
		else if (Function_500())
		{
			iVar1 = 1;
			Function_501(iParam0[iVar03], 8);
		}
		Function_501(iParam0[iVar03], 16);
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
				Function_501(iParam0[iVar03], 1);
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
							Function_501(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_501(iParam0[iVar03], 2);
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
							Function_501(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_501(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_501(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_501(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_501(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_501(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_501(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_501(iParam0[iVar03], 2);
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
	Function_499();
	return 1;
}

void Function_499() //Position: 0x15221 / 86561
{
	if (!Function_384(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_500() //Position: 0x15261 / 86625
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

void Function_501(var uParam0, int iParam1) //Position: 0x1528C / 86668
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_502() //Position: 0x1529D / 86685
{
	if (!Function_384(128))
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

void Function_503(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x152DF / 86751
{
	int iVar0;
	
	if (bParam4)
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		PRINT_OBJECTIVE_B(bParam0, fParam1, 0, iParam3, bParam2, &Global_3422[Global_626940] + 12, 0, iParam6);
	}
	else
	{
		iVar0 = "";
		PRINT_OBJECTIVE_B(bParam0, fParam1, 0, iParam3, bParam2, iVar0, iParam5, iParam6);
	}
}

bool Function_504(var uParam0, var uParam1, var uParam2, int iParam3) //Position: 0x15332 / 86834
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
					Function_505(iParam3);
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
					Function_505(iParam3);
					return 0;
				}
			}
			break;
	}
	if (!Function_212(Global_30640[0]))
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
					Function_204("SOL_Help_KilledAnimals", 0, -1.0f, 1, 0, 0);
					Function_505(iParam3);
					iLocal_21 = 1;
					return 0;
				}
			}
		}
	}
	return 1;
}

void Function_505(int iParam0) //Position: 0x1545E / 87134
{
	Function_337(iParam0, 3);
	return;
}

void Function_506(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x1546A / 87146
{
	int iVar0;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		PRINT_HELP_B(bParam0, fParam1, iParam2, iParam3, iParam4, iParam5, &Global_3422[Global_626940] + 12, iParam6);
	}
	else
	{
		iVar0 = "";
		PRINT_HELP_B(bParam0, fParam1, iParam2, iParam3, iParam4, iParam5, iVar0, iParam6);
	}
}

void Function_507(bool bParam0) //Position: 0x154B5 / 87221
{
	Function_510(bParam0, 1199, 2, 1);
	Function_510(bParam0, 976, 3, 1);
	Function_510(bParam0, 486, 3, 1);
	Function_510(bParam0, 487, 3, 1);
	Function_510(bParam0, 488, 3, 1);
	Function_510(bParam0, 489, 3, 1);
	Function_510(bParam0, 490, 3, 1);
	Function_510(bParam0, 491, 3, 1);
	Function_510(bParam0, 443, 3, 1);
	Function_508(bParam0, "p_gen_safe02x", 0, 1);
	Function_508(bParam0, "$/content/scripting/gringo/simplegringo/shakehands_link", 1, 0);
	Function_508(bParam0, "Player_Lockpick_Safe_NoProp", 1, 0);
	Function_508(bParam0, "ClimbOntoWagon", 1, 0);
	Function_508(bParam0, "action_areas", 10, 0);
	Function_508(bParam0, "stand_shakehands", 5, 0);
	Function_508(bParam0, "custom/stand_shakehands", 8, 0);
	Function_508(bParam0, "AA_tesoro_intro_cover", 5, 0);
	Function_508(bParam0, "custom/AA_tesoro_intro_cover", 8, 0);
	Function_508(bParam0, "excited_return", 5, 0);
	Function_508(bParam0, "custom/excited_return", 8, 0);
	Function_508(bParam0, "nthank_you", 5, 0);
	Function_508(bParam0, "custom/thank_you", 8, 0);
	return;
}

var Function_508(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x156BF / 87743
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_509(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_501(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_509(var uParam0, int iParam1, int iParam2) //Position: 0x156F7 / 87799
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_4(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_501(uParam0[iVar03], 4);
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

var Function_510(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x157BB / 87995
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
			Function_501(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_501(uParam0[iVar03], 8);
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

