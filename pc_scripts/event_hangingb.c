//Decompiled with MagicRDR v1.0
//Function Count : 277
//Statics Count : 215
//Natives Count : 454
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
	int iLocal_27[3] = { 0, 0, 0 };
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	float fLocal_35 = 0.0f;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	bool bLocal_42 = false;
	int iLocal_43 = 0;
	bool bLocal_44 = false;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	bool bLocal_48 = false;
	int iLocal_49 = 0;
	bool bLocal_50 = false;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	bool bLocal_53 = false;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	bool bLocal_61 = false;
	bool bLocal_62 = false;
	bool bLocal_63 = false;
	int iLocal_64 = 0;
	struct<2> Local_65 = { 0, 0 } ;
	var uLocal_67 = 0;
	struct<2> Local_68 = { 0, 0 } ;
	var uLocal_70 = 0;
	struct<2> Local_71 = { 0, 0 } ;
	var uLocal_73 = 0;
	int iLocal_74 = 0;
	struct<2> Local_75 = { 0, 0 } ;
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
	int iLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	int iLocal_106 = 0;
	struct<2> Local_107 = { 0, 0 } ;
	var uLocal_109 = 0;
	struct<2> Local_110 = { 0, 0 } ;
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
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	float fLocal_126 = 0.0f;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	bool bLocal_138 = false;
	bool bLocal_139 = false;
	bool bLocal_140 = false;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	int iLocal_149 = 0;
	var uLocal_150 = 0;
	bool bLocal_151 = false;
	int iLocal_152 = 0;
	struct<65> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	var uVar4;
	var uVar7;
	int iVar18;
	var uVar19;
	var uVar20;
	int iVar21;
	int iVar22;
	var uVar23;
	var uVar24;
	int iVar25;
	var uVar26[3];
	bool bVar30;
	bool bVar31;
	var uVar32[3];
	bool bVar36;
	bool bVar37;
	bool bVar38;
	var uVar39[3];
	var uVar43;
	var uVar44;
	int iVar89;
	int iVar90;
	int iVar91;
	int iVar92;
	int iVar93;
	float fVar94;
	struct<2> Var95;
	var uVar97;
	var uVar103;
	bool bVar106;
	int iVar107;
	bool bVar108;
	var uVar109;
	int iVar110;
	var uVar112;
	struct<2> Var114;
	int iVar119;
	int iVar120;
	int iVar121;
	bool bVar122;
	
	iLocal_18 = 0;
	iLocal_19 = 0;
	fLocal_35 = 0.0f;
	iLocal_39 = 0;
	iLocal_40 = 0;
	iLocal_41 = 0;
	bLocal_42 = false;
	iLocal_43 = 1;
	bLocal_44 = false;
	iLocal_45 = 1;
	iLocal_46 = 0;
	iLocal_47 = 0;
	bLocal_48 = false;
	iLocal_49 = 0;
	bLocal_50 = false;
	iLocal_51 = 0;
	iLocal_52 = 0;
	bLocal_53 = false;
	iLocal_54 = 0;
	iLocal_55 = 0;
	iLocal_56 = 0;
	bLocal_61 = false;
	bLocal_62 = false;
	bLocal_63 = false;
	iLocal_64 = 0;
	Local_65 = Vector(3.0f, 5.0f, 0.0f);
	iLocal_74 = 0;
	iLocal_101 = 0;
	iLocal_106 = 0;
	iLocal_124 = 0;
	iLocal_133 = 0;
	bLocal_138 = false;
	bLocal_139 = false;
	bLocal_140 = false;
	iLocal_145 = 0;
	iLocal_146 = 0;
	bLocal_151 = false;
	iVar0 = 0;
	bVar1 = false;
	bVar2 = false;
	fVar3 = CREATE_LAYOUT(Function_276());
	uVar4 = 1;
	uVar7 = 5;
	iVar21 = 0;
	iVar25 = 4294967295;
	bVar36 = false;
	uVar43 = Function_274(2, 1, 1, 0, 0);
	uVar44 = 22;
	Function_273(&uLocal_102, 0.0f);
	iVar90 = 0;
	if (!IS_POPSET_VALID(&(Global_46972[6])))
	{
		iVar0 = 5;
	}
	else
	{
		Function_271(&uVar44, "stand_hostage", 5, 0);
		Function_271(&uVar44, "custom/stand_hostage", 8, 0);
		Function_271(&uVar44, "hanging_from_noose", 5, 0);
		Function_271(&uVar44, "custom/hanging_from_noose", 8, 0);
		Function_271(&uVar44, "horse_slap", 1, 0);
		Function_271(&uVar44, "ped_emo_thanks", 5, 0);
		Function_271(&uVar44, "custom/ped_emo_thanks", 8, 0);
		Function_271(&uVar44, "mourn_loop", 1, 0);
		Function_271(&uVar44, "fema_ride_passenger", 5, 0);
		Function_271(&uVar44, "gent_ride_passenger", 5, 0);
		Function_271(&uVar44, "nhanging_B", 5, 0);
		Function_271(&uVar44, "custom/hanging_B", 8, 0);
		iVar18 = RAND_INT_RANGE(0, 5999);
		iVar18 = (iVar18 / 1000);
		iVar18 = Function_270(18, 6);
		if (iVar18 == 0)
		{
			bVar37 = 99;
			bLocal_62 = true;
			bLocal_63 = true;
		}
		else if (iVar18 == 1)
		{
			bVar37 = 95;
			bLocal_62 = false;
		}
		else if (iVar18 == 2)
		{
			bVar37 = 89;
			bLocal_62 = false;
		}
		else if (iVar18 == 3)
		{
			bVar37 = 202;
			bLocal_62 = false;
		}
		else if (iVar18 == 4)
		{
			bVar37 = 153;
			bLocal_62 = true;
		}
		else if (iVar18 == 5)
		{
			bVar37 = 130;
			bLocal_62 = false;
		}
		Function_269(&uVar44, bVar37, 3, 0);
		iVar18 = RAND_INT_RANGE(0, 5999);
		iVar18 = (iVar18 / 1000);
		if (bLocal_62)
		{
			if (Function_268() || bVar37 != 99)
			{
				bVar38 = 199;
			}
			else
			{
				bVar38 = 99;
			}
		}
		else
		{
			iVar18 = RAND_INT_RANGE(0, 3999);
			iVar18 = (iVar18 / 1000);
			if (iVar18 == 0)
			{
				bVar38 = 56;
			}
			else if (iVar18 == 1)
			{
				bVar38 = 53;
			}
			else if (iVar18 == 2)
			{
				bVar38 = 58;
			}
			else if (iVar18 == 3)
			{
				bVar38 = 77;
			}
		}
		Function_269(&uVar44, bVar38, 3, 0);
		switch (Global_43787)
		{
			case 0x00000000:
				if (Global_43788 != Global_46736[0] || Global_43788 != Global_46736[3])
				{
					if (Function_268())
					{
						iLocal_27[0] = 487;
						iLocal_27[1] = 489;
						iLocal_27[2] = 490;
					}
					else
					{
						iLocal_27[0] = 493;
						iLocal_27[1] = 492;
						iLocal_27[2] = 486;
					}
				}
				else if (Global_43788 == Global_46736[1])
				{
					if (Function_268())
					{
						iLocal_27[0] = 505;
						iLocal_27[1] = 508;
						iLocal_27[2] = 510;
					}
					else
					{
						iLocal_27[0] = 507;
						iLocal_27[1] = 506;
						iLocal_27[2] = 509;
					}
				}
				else if (Function_268())
				{
					iLocal_27[0] = 479;
					iLocal_27[1] = 477;
					iLocal_27[2] = 480;
				}
				else
				{
					iLocal_27[0] = 484;
					iLocal_27[1] = 485;
					iLocal_27[2] = 481;
				}
				break;
			
			case 0x00000002:
				if (Function_268())
				{
					iLocal_27[0] = 475;
					iLocal_27[1] = 476;
					iLocal_27[2] = 470;
				}
				else
				{
					iLocal_27[0] = 471;
					iLocal_27[1] = 472;
					iLocal_27[2] = 474;
				}
				break;
		}
		Function_269(&uVar44, iLocal_27[0], 3, 0);
		Function_269(&uVar44, iLocal_27[1], 3, 0);
		Function_269(&uVar44, iLocal_27[2], 3, 0);
		iVar89 = 0;
		while (iVar89 <= 3)
		{
			uVar39[iVar89] = Function_260(&(Global_46972[6]), 1, 0, 1);
			if (uVar39[iVar89] == 4294967295)
			{
				iVar0 = 5;
			}
			else
			{
				Function_269(&uVar44, uVar39[iVar89], 3, 0);
			}
			iVar89++;
		}
		if (iVar0 != 5)
		{
			Function_271(&uVar44, "p_gen_noose03x", 0, 0);
			Function_259(bVar37);
			Function_259(bVar38);
			Function_258(&iLocal_27, 3);
		}
	}
	iVar91 = 0;
	iVar92 = 0;
	iVar93 = 0;
	bVar108 = false;
	uVar112 = Vector(1,5f, 0.0f, 0.0f);
	Var114 = Vector(2.0f, 0.0f, 0.0f);
	iVar119 = 0;
	iVar120 = 0;
	if (Global_6625 == 1)
	{
		iVar0 = 5;
	}
	iVar121 = 0;
	bVar122 = false;
	while (!IS_EXITFLAG_SET())
	{
		uVar109 = GET_PLAYER_ACTOR(0);
		GET_POSITION(&uVar109, &Var95);
		iVar110 = 600;
		if (Function_257(&bVar122, &iVar0, &iVar121, &iVar110, bVar1))
		{
			if (bVar122)
			{
				Function_256(&uVar32, 4294967295);
				Function_255(&bVar30);
				Function_255(&bVar106);
				Function_255(&iVar107);
				Function_256(&uVar26, 4294967295);
				Function_255(&bVar31);
			}
			else
			{
				Function_254(&uVar32, 4294967295);
				Function_253(&bVar30);
				Function_253(&bVar106);
				Function_253(&iVar107);
				Function_254(&uVar26, 4294967295);
				Function_253(&bVar31);
			}
		}
		switch (iVar0)
		{
			case 0x00000000:
				if (Function_247(&uVar44))
				{
					uLocal_59 = CREATE_NAV_QUERY(&fVar3, "hanging");
					iVar0 = 1;
					iVar110 = 0;
				}
				break;
			
			case 0x00000001:
				if (Function_206(&ScriptParam_0, &iVar110, &iVar93, &iVar91, 1))
				{
					if (!Function_203(&Var95, &Local_75, 80.0f, 310.0f))
					{
						iVar0 = 5;
						iVar110 = 0;
						break;
					}
					if (VDIST(Var95, *(&Local_75 + 12)) > 50.0f)
					{
						iVar0 = 5;
						iVar110 = 0;
						break;
					}
					NAV_QUERY_START_CAN_PATH_TO_POINT(&uLocal_59, *(&ScriptParam_0 + 16), Local_75, bVar37);
					iVar0 = 4;
					iVar110 = 0;
				}
				else if (iVar91 == 1)
				{
					iVar0 = 5;
					iVar110 = 0;
				}
				break;
			
			case 0x00000004:
				iVar110 = 0;
				if (NAV_QUERY_IS_DONE(&uLocal_59))
				{
					NAV_QUERY_RECEIVE_CAN_PATH_TO_POINT(&uLocal_59, &bVar108);
					NAV_QUERY_STOP(&uLocal_59);
					if (bVar108)
					{
						iVar0 = 2;
					}
					else
					{
						if (ScriptParam_0.f_40)
						{
							Function_202();
							PRINT_OBJECTIVE_B("Rider can't path to the nearest hanging tree. Launch again in another area.", 10.0f, 1, 2, 1, 0, 0, 0);
						}
						iVar0 = 5;
					}
				}
				break;
			
			case 0x00000002:
				if (!Function_203(&Var95, &Local_75, 80.0f, 310.0f))
				{
					iVar0 = 5;
					break;
				}
				if (ABS(FLOOR((StackVal - StackVal))) >= 30)
				{
					iVar0 = 5;
					iVar110 = 0;
					break;
				}
				if (VDIST(Var95, *(&Local_75 + 12)) > 50.0f)
				{
					iVar0 = 5;
					iVar110 = 0;
					break;
				}
				uLocal_117 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &fVar3, Function_276(), 0f, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(20.0f, 4.0f, 20.0f));
				uLocal_115 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("hangingContext", &uLocal_117, 25, "@FOOT.INTERACT", 0, 0, 0, 0, 4294967295, 0);
				uVar32[0] = CREATE_ACTOR_IN_LAYOUT(&fVar3, Function_276(), uVar39[0], *(&Local_75 + 48), *(&ScriptParam_0 + 28));
				TASK_STAND_STILL(&(uVar32[0]), -1.0f, 0, 0);
				ACCESSORIZE_HORSE(&(uVar32[0]), 3);
				uVar32[1] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, Vector(Function_276(), &fVar3, StackVal) + Vector(Var114, *(&Local_75 + 48), uVar39[1]), *(&ScriptParam_0 + 28));
				TASK_STAND_STILL(&(uVar32[1]), -1.0f, 0, 0);
				ACCESSORIZE_HORSE(&(uVar32[1]), 3);
				uVar32[2] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, Vector(Function_276(), &fVar3, StackVal) + Vector(Var114, *(&Local_75 + 48), uVar39[2]), *(&ScriptParam_0 + 28));
				TASK_STAND_STILL(&(uVar32[2]), -1.0f, 0, 0);
				ACCESSORIZE_HORSE(&(uVar32[2]), 3);
				Local_107 = Local_75;
				Function_201(StackVal, StackVal, Local_107, *(&Local_75 + 12));
				uVar103 = Function_201(StackVal, StackVal, Local_107, *(&Local_75 + 12));
				fVar94 = UNK_0x9C40E671(&uVar103);
				bVar30 = Function_199(StackVal, StackVal, &fVar3, Function_276(), bVar38, Function_276(), uVar39[0], Local_107, Vector(0.0f, fVar94, 0.0f));
				if (IS_ACTOR_VALID(&iVar107))
				{
					SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&iVar107, 0,1f);
				}
				TASK_STAND_STILL(&bVar30, -1.0f, 0, 0);
				SET_ACTOR_CAN_BE_HARDLOCKED(&bVar30, 0);
				TASK_PRIORITY_SET(&bVar30, true);
				DECOR_SET_BOOL(&bVar30, "CanBeLasso", 0);
				uVar26[0] = CREATE_ACTOR_IN_LAYOUT(&fVar3, Function_276(), iLocal_27[0], *(&Local_75 + 12), *(&ScriptParam_0 + 28));
				SET_ACTOR_CAN_PLAY_GESTURES(&(uVar26[0]), false);
				TASK_POINT_GUN_AT_OBJECT(&(uVar26[0]), &bVar30, -1.0f, 0);
				MEMORY_ATTACK_ON_SIGHT(&(uVar26[0]), 0);
				uVar26[1] = CREATE_ACTOR_IN_LAYOUT(&fVar3, Function_276(), iLocal_27[1], *(&Local_75 + 24), *(&ScriptParam_0 + 28));
				SET_ACTOR_CAN_PLAY_GESTURES(&(uVar26[1]), false);
				TASK_POINT_GUN_AT_OBJECT(&(uVar26[1]), &bVar30, -1.0f, 0);
				MEMORY_ATTACK_ON_SIGHT(&(uVar26[1]), 0);
				Function_198(&(uVar26[1]), 30.0f, 0x40400000, 0x40000000);
				uVar26[2] = CREATE_ACTOR_IN_LAYOUT(&fVar3, Function_276(), iLocal_27[2], *(&Local_75 + 36), *(&ScriptParam_0 + 28));
				SET_ACTOR_CAN_PLAY_GESTURES(&(uVar26[2]), false);
				TASK_POINT_GUN_AT_OBJECT(&(uVar26[2]), &bVar30, -1.0f, 0);
				MEMORY_ATTACK_ON_SIGHT(&(uVar26[2]), 0);
				Function_198(&(uVar26[2]), 40.0f, 0x40400000, 0x40000000);
				bVar31 = Function_199(StackVal, StackVal, &fVar3, Function_276(), bVar37, Function_276(), uVar39[2], *(&ScriptParam_0 + 16), *(&ScriptParam_0 + 28));
				iVar107 = GET_MOUNT(&bVar31);
				DECOR_SET_BOOL(&iVar107, "bInjuryNoEjection", 1);
				SET_ACTOR_CAN_PLAY_GESTURES(&bVar31, false);
				SET_ACTOR_UPDATE_PRIORITY(&bVar31, false);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bVar31, 1);
				iVar89 = 0;
				while (iVar89 <= 3)
				{
					SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&(uVar26[iVar89]), 0,3f);
					Function_197(&bVar31, &(uVar26[iVar89]), 4, 1);
					Function_197(&Global_54076, &(uVar26[iVar89]), 4, 1);
					iVar89++;
				}
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bVar31, 0,1f);
				Function_201(StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Local_65, Local_107, StackVal), Local_107);
				uVar103 = Function_201(StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Local_65, Local_107, StackVal), Local_107);
				fVar94 = UNK_0x9C40E671(&uVar103);
				uLocal_57 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_276(), &fVar3, StackVal) + Vector(Local_65, Local_107, "$/content/scripting/gringo/SimpleGringo/mourn_loop"), Vector(0.0f, fVar94, 0.0f));
				SNAP_OBJECT_TO_GROUND(&uLocal_57, 7.0f, 1, 1092616192);
				SET_ALLOW_EXECUTE(&bVar30, 0);
				bVar106 = GET_MOUNT(&bVar30);
				DELETE_ALL_WEAPONS_FROM_ACTOR(&bVar30);
				DECOR_SET_BOOL(&bVar30, "CanBeLasso", 0);
				AI_DONT_HARM_ACTOR(&(uVar26[0]));
				AI_DONT_HARM_ACTOR(&(uVar26[1]));
				AI_DONT_HARM_ACTOR(&(uVar26[2]));
				AI_DONT_HARM_ACTOR(&bVar30);
				uLocal_147 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &fVar3, Function_276(), 4,203895E-45f, Local_107, Vector(0.0f, 0.0f, 0.0f), Vector(10.0f, 8.0f, 10.0f));
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(&bVar30, 0);
				UNK_0x99AFD2D1(&bVar30, 1, 1);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(&bVar31, 0);
				UNK_0x99AFD2D1(&bVar31, 1, 1);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(&(uVar26[0]), 0);
				UNK_0x99AFD2D1(&(uVar26[0]), 1, 1);
				uLocal_127 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &fVar3, Function_276(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
				ATTACH_OBJECTS(StackVal, StackVal, &uLocal_127, &(uVar26[0]), Function_276(), Vector(0.0f, 0,5f, -6,5f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
				uLocal_129 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &fVar3, Function_276(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
				ATTACH_OBJECTS(StackVal, StackVal, &uLocal_129, &(uVar26[1]), Function_276(), Vector(0.0f, 0,5f, -6,5f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
				uLocal_131 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &fVar3, Function_276(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
				ATTACH_OBJECTS(StackVal, StackVal, &uLocal_131, &(uVar26[2]), Function_276(), Vector(0.0f, 0,5f, -6,5f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
				uVar97 = Local_107;
				if (IS_PHYSINST_VALID(&Local_75 + 96))
				{
					Function_193(&bVar30, &fVar3, &Local_75 + 96, &Local_75 + 72);
					bVar36 = true;
				}
				CLEAR_AMBIENT_OBJECTS_SPHERE(*(&Local_75 + 72), 10.0f, 15);
				Function_191(StackVal, &uVar23, &uVar24, &iVar25, 8.0f, *(&ScriptParam_0 + 16));
				Function_190(&iVar22, 1);
				Function_190(&iVar22, 16);
				iVar0 = 3;
				iVar110 = 0;
				break;
			
			case 0x00000003:
				if (Function_189(&iLocal_134, 100.0f) && iVar90 > 7)
				{
					bLocal_42 = true;
					Function_273(&uLocal_102, 0.0f);
					iVar90 = 7;
				}
				if (!iLocal_146)
				{
					if (IS_ACTOR_RIDING_AND_IN_SADDLE(&bVar30))
					{
						SET_ANIM_SET_FOR_ACTOR(&bVar30, "stand_hostage", 0);
						SET_ACTION_NODE_FOR_ACTOR(&bVar30, "stand_hostage/Riding");
						iLocal_146 = 1;
					}
				}
				Function_188();
				Function_187(StackVal, Function_188(), &bVar1, ScriptParam_0.f_64, &bVar31, 100, 0x42a00000, 1);
				Function_188();
				Function_187(StackVal, Function_188(), &bVar1, ScriptParam_0.f_64, &bVar30, 100, 0x42a00000, 1);
				Function_174(&uVar26, 3, &bVar1, ScriptParam_0.f_64, 100, 0x42a00000, 1);
				if (!Function_168(ScriptParam_0.f_64, &bVar31, &iLocal_64, &iVar92, 1, 1, 1, 0))
				{
					TASK_FLEE_ACTOR(&bVar31, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
					iVar0 = 5;
					break;
				}
				if (!IS_ACTOR_ALIVE(&bVar106) && !iLocal_49)
				{
					iLocal_49 = 1;
					Function_273(&uLocal_119, 0.0f);
				}
				if (!bVar36)
				{
					*(&Local_75 + 96) = LOCATE_PHYSINST_OF_TYPE(*(&Local_75 + 72), 20.0f, "p_gen_hangLocator01x", 1);
					if (IS_PHYSINST_VALID(&Local_75 + 96))
					{
						Function_193(&bVar30, &fVar3, &Local_75 + 96, &Local_75 + 72);
						bVar36 = true;
					}
				}
				else if (LEASH_IS_BROKEN(&uLocal_143) && !bLocal_139)
				{
					bLocal_139 = true;
					DESTROY_OBJECT(&uLocal_143);
					LEASH_RELEASE_CONSTRAINT(&uLocal_143);
					if (IS_ACTOR_MOUNTED(&bVar30))
					{
						RESET_ANIM_SET_FOR_ACTOR(&bVar30, 1);
						SET_ACTION_NODE_FOR_ACTOR(&bVar30, "/default_character_Main/ReactionProcessing/ReactionProcessing_AI/Lassoed/LassoBuckOff/Buck_eject");
					}
					SET_ACTOR_HANGING_FROM_NOOSE(&bVar30, 0);
					DECOR_REMOVE(&bVar30, "HangWritheIntensity");
					DECOR_SET_BOOL(&bVar30, "CanBeLasso", 1);
				}
				else
				{
					LEASH_SET_CONSTRAINT_LENGTH(&uLocal_143, fLocal_126);
				}
				switch (iLocal_74)
				{
					case 0x00000000:
						break;
				}
				if (!bLocal_151)
				{
					if (Function_167(&uVar26, 3, 75.0f))
					{
						Function_165();
					}
				}
				if (Function_167(&uVar26, 3, 25.0f) && !bLocal_61)
				{
					bLocal_61 = true;
					Function_164(&bVar31, &uVar26);
				}
				iLocal_45 = 1;
				if (IS_ACTOR_VALID(&bVar31))
				{
					if (Function_163(&bVar31, &Global_54076) > 200.0f)
					{
						iLocal_45 = 0;
					}
				}
				if (IS_ACTOR_VALID(&bVar30))
				{
					if (Function_163(&bVar30, &Global_54076) > 200.0f)
					{
						iLocal_45 = 0;
					}
				}
				if (Function_167(&uVar26, 3, 250.0f))
				{
					iLocal_45 = 0;
				}
				if (iLocal_45 == 1)
				{
					if (Function_161(&bVar30, 0) && !iLocal_56)
					{
						Function_159("HangingUnlawful_fail01", iLocal_54, 1);
					}
					iVar0 = 5;
					iVar110 = 0;
				}
				if (Function_158(&uVar26, 3, &uVar20, &uVar19, &fLocal_35, iVar22, iLocal_51, 0x40200000) || (bLocal_139 && !iLocal_51))
				{
					bVar2 = true;
					iLocal_51 = 1;
				}
				if ((Function_155(&bVar31, &uVar19, &fLocal_35, iVar22, iLocal_52, 0x40400000) && !bLocal_61) && iVar90 > 4)
				{
					bVar2 = true;
					iLocal_64 = 1;
					Function_153(&bVar31);
					Function_152(&bVar31);
					TASK_FLEE_ACTOR(&bVar31, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
					if (bLocal_44)
					{
						REMOVE_ACTOR_STAY_WITHIN_VOLUME(&bVar31, &uLocal_147);
						bLocal_44 = false;
					}
					iLocal_52 = 1;
					iVar90 = 3;
				}
				if (((bLocal_61 || iLocal_51) || bLocal_139) && !bLocal_53)
				{
					if (!bLocal_151)
					{
						Function_165();
					}
					Function_150(&iLocal_152, 34, 0, 4294967295, 4294967295);
					bLocal_53 = true;
					bVar2 = true;
					iLocal_64 = 1;
					iVar89 = 0;
					while (iVar89 <= 3)
					{
						if (Function_161(&(uVar26[iVar89]), 0))
						{
							Function_149(&(uVar26[iVar89]), &Global_54076);
							ADD_BLIP_FOR_ACTOR(&(uVar26[iVar89]), 322, 0, 2, 0);
						}
						iVar89++;
					}
					if (iVar90 <= 7)
					{
						bLocal_44 = true;
						TASK_GO_NEAR_COORD(&bVar31, &uVar97, 10.0f, 4);
						SET_ACTOR_STAY_WITHIN_VOLUME(&bVar31, &uLocal_147, 4, false);
						iVar90 = 7;
					}
				}
				if (!IS_ACTOR_ALIVE(&bVar30) && iVar90 > 17)
				{
					DECOR_REMOVE(&bVar30, "HangWritheIntensity");
					if (!iLocal_49)
					{
						SET_ACTION_NODE_FOR_ACTOR(&bVar30, "/default_character_Main/ReactionProcessing/ReactionProcessing_AI/Lassoed/LassoBuckOff/Buck_eject");
						SET_ACTOR_HANGING_FROM_NOOSE(&bVar30, 1);
						iLocal_49 = 1;
					}
					if (!iLocal_56 && !iLocal_41)
					{
						iLocal_41 = 1;
						Function_159("HangingUnlawful_fail02", iLocal_54, 1);
					}
					if (Function_161(&bVar31, 0))
					{
						if (GET_LAST_ATTACKER(&bVar30) == &Global_54076)
						{
							Function_149(&bVar31, &Global_54076);
							iVar119 = 1;
							if (!bLocal_53)
							{
								iVar90 = 18;
							}
							else
							{
								iVar0 = 5;
							}
						}
						else
						{
							iVar90 = 18;
						}
					}
					else if (!bLocal_53)
					{
						iVar90 = 17;
					}
					else
					{
						iVar0 = 5;
					}
				}
				if (Function_20(&iVar90, &uVar109, &bVar31, &bVar30, &uVar97, &iVar110, &fVar3, &bVar106, &uVar26, &uVar32, uVar43, &iVar107))
				{
					iVar119 = 1;
					iVar0 = 5;
				}
				if (Global_6625 == 1)
				{
					iVar0 = 5;
				}
				break;
			
			case 0x00000005:
				if (iVar119 == 0)
				{
					if (IS_OBJECT_VALID(&uLocal_143))
					{
						SET_ACTOR_HANGING_FROM_NOOSE(&bVar30, 0);
						LEASH_BREAK(&uLocal_143, 1056964608);
						DESTROY_OBJECT(&uLocal_143);
					}
					Function_19(&uVar32, 4294967295);
					Function_18(&bVar30);
					Function_18(&bVar106);
					Function_19(&uVar26, 4294967295);
					Function_18(&bVar31);
					iVar0 = 6;
				}
				if (iLocal_43)
				{
					if (bLocal_44 && IS_ACTOR_VALID(&bVar31))
					{
						REMOVE_ACTOR_STAY_WITHIN_VOLUME(&bVar31, &uLocal_147);
					}
					iLocal_43 = 0;
				}
				if (Function_16(StackVal, &Global_54076, *(&Local_75 + 72)) < Function_14(1))
				{
					SET_ACTOR_HANGING_FROM_NOOSE(&bVar30, 0);
					iVar0 = 6;
					iVar110 = 0;
				}
				if (IS_OBJECT_VALID(&uLocal_143))
				{
					if (LEASH_IS_BROKEN(&uLocal_143))
					{
						SET_ACTOR_HANGING_FROM_NOOSE(&bVar30, 0);
						iVar0 = 6;
						iVar110 = 0;
					}
				}
				else
				{
					iVar0 = 6;
					iVar110 = 0;
				}
				break;
			
			case 0x00000006:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				iVar110 = 0;
				break;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(iVar110);
		}
	}
	if (bLocal_151)
	{
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	}
	if (IS_OBJECT_VALID(&uLocal_59))
	{
		NAV_QUERY_STOP(&uLocal_59);
		DESTROY_OBJECT(&uLocal_59);
	}
	Function_254(&uVar32, 4294967295);
	Function_253(&bVar30);
	Function_253(&bVar106);
	Function_253(&iVar107);
	Function_254(&uVar26, 4294967295);
	Function_253(&bVar31);
	Function_13(&uVar23, &uVar24, &iVar25);
	Function_12(bVar37);
	Function_12(bVar38);
	Function_11(&iLocal_27, 3);
	if (iVar119 == 0)
	{
		if (IS_OBJECT_VALID(&uLocal_143))
		{
			SET_ACTOR_HANGING_FROM_NOOSE(&bVar30, 0);
			LEASH_BREAK(&uLocal_143, 1056964608);
			DESTROY_OBJECT(&uLocal_143);
		}
		Function_19(&uVar32, 4294967295);
		Function_18(&bVar30);
		Function_18(&bVar106);
		Function_19(&uVar26, 4294967295);
		Function_18(&bVar31);
	}
	if (ScriptParam_0.f_40)
	{
		Global_6642 = 0;
	}
	if (!bVar1)
	{
		Function_5(ScriptParam_0.f_64, 0.0f, 0, 1, 0);
	}
	if (IS_VOLUME_VALID(&uLocal_117))
	{
		DESTROY_VOLUME(&uLocal_117);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_115))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_115);
	}
	if (Function_161(&bVar30, 0))
	{
		Function_153(&bVar30);
		AI_SPEECH_SET_ALLOW_FOR_ACTOR(&bVar30, 1);
		UNK_0x99AFD2D1(&bVar30, 0, 0);
	}
	if (Function_161(&bVar31, 0))
	{
		if (bLocal_44)
		{
			REMOVE_ACTOR_STAY_WITHIN_VOLUME(&bVar31, &uLocal_147);
		}
		Function_153(&bVar31);
		AI_SPEECH_SET_ALLOW_FOR_ACTOR(&bVar31, 1);
		UNK_0x99AFD2D1(&bVar31, 0, 0);
	}
	if (Function_161(&(uVar26[0]), 0))
	{
		AI_SPEECH_SET_ALLOW_FOR_ACTOR(&(uVar26[0]), 1);
		UNK_0x99AFD2D1(&(uVar26[0]), 0, 0);
	}
	iVar89 = 0;
	while (iVar89 <= 3)
	{
		Function_153(&(uVar26[iVar89]));
		iVar89++;
	}
	Function_1(&uVar44);
	if (!bVar1 && !bVar2)
	{
		if (IS_OBJECT_VALID(&uLocal_143))
		{
			SET_ACTOR_HANGING_FROM_NOOSE(&bVar30, 0);
			LEASH_BREAK(&uLocal_143, 1056964608);
			DESTROY_OBJECT(&uLocal_143);
		}
		Function_19(&uVar32, 4294967295);
		Function_18(&bVar30);
		Function_18(&bVar106);
		Function_19(&uVar26, 4294967295);
		Function_18(&bVar31);
		if (IS_OBJECT_VALID(&fVar3))
		{
			UNK_0xA936E73B(&fVar3, 1);
			MARK_OBJECT_FOR_AGGRESSIVE_CLEANUP(&fVar3, 1);
		}
	}
	RELEASE_LAYOUT_REF(&fVar3);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x1469 / 5225
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

void Function_2(struct<2>[] Param0, int iParam1) //Position: 0x1491 / 5265
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

void Function_3(struct<13> Param0) //Position: 0x15DC / 5596
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_4(struct<13> Param0) //Position: 0x15F9 / 5625
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_5(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x1617 / 5655
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
		Function_7("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
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
			Function_6(&bVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_6(&bVar0);
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
			Function_6(&bVar0);
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

void Function_6(bool bParam0) //Position: 0x1883 / 6275
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

void Function_7(var uParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x18CD / 6349
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_8(Global_10966) };
		}
		PRINT_SMALL_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &Var0, &iParam5);
	}
	else
	{
		uVar4 = "";
		PRINT_SMALL_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &uVar4, &iParam5);
	}
}

struct<16> Function_8(int iParam0) //Position: 0x1952 / 6482
{
	char* cVar0[16];
	
	if (!Function_9())
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

bool Function_9() //Position: 0x1991 / 6545
{
	if (Function_10(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_10(bool bParam0, int iParam1) //Position: 0x19AC / 6572
{
	return (bParam0 && iParam1) == 0;
}

void Function_11(var[] uParam0, int iParam1) //Position: 0x19B9 / 6585
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

void Function_12(bool bParam0) //Position: 0x19DC / 6620
{
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(bParam0);
	return;
}

void Function_13(var uParam0, var uParam1, int iParam2) //Position: 0x19E7 / 6631
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

float Function_14(bool bParam0) //Position: 0x1A1A / 6682
{
	var uVar0;
	float fVar1;
	
	if (!&bParam0)
	{
		Function_15(&uVar0, &fVar1);
		if (fVar1 < 60.0f)
		{
			return (fVar1 + 20.0f);
		}
		return (fVar1 + 10.0f);
	}
	return (190.0f + 20.0f);
}

void Function_15(float fParam0, int iParam1) //Position: 0x1A56 / 6742
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

float Function_16(int iParam0, struct<2> Param1) //Position: 0x1AE7 / 6887
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		Function_17(&iParam0);
		Var0 = Function_17(&iParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

struct<8> Function_17(int iParam0) //Position: 0x1B5E / 7006
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

void Function_18(bool bParam0) //Position: 0x1BCA / 7114
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		RESET_ANIM_SET_FOR_ACTOR(&bParam0, 0);
		TASK_FLEE_ACTOR(&bParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
		TASK_PRIORITY_SET(&bParam0, false);
	}
	return;
}

void Function_19(var[] uParam0, bool bParam1) //Position: 0x1BFA / 7162
{
	int iVar0;
	
	if (&bParam1 == 4294967295)
	{
		bParam1 = uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= &bParam1)
	{
		Function_18(&(uParam0[iVar0]));
		iVar0++;
	}
	return;
}

bool Function_20(var uParam0, var uParam1, bool bParam2, bool bParam3, var uParam4, var uParam5, var uParam6, bool bParam7, int[] iParam8, bool bParam11) //Position: 0x1C2C / 7212
{
	int iVar0;
	int iVar1;
	
	bParam7 = &bParam7;
	uParam5 = uParam5;
	switch (uParam0)
	{
		case 0x00000000:
			if (Function_167(&iParam8, 3, 50.0f))
			{
				iLocal_64 = 1;
			}
			if ((CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &(iParam8[0]), 1.0f, 60.0f, 1, 1, 0) || CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &bParam3, 1.0f, 60.0f, 1, 1, 0)) || bLocal_139)
			{
				TASK_GO_NEAR_COORD(&bParam2, &uParam4, 10.0f, 4);
				iLocal_64 = 1;
				uParam0 = 4;
			}
			if (Function_148(&bParam2, &uParam1, &iLocal_133, &uParam6, 55.0f, &bLocal_138, &uLocal_113, &uLocal_102, &iLocal_106, 25.0f, 1, 4, -9.0f, 0, 0, 0))
			{
				if (bLocal_138)
				{
					iLocal_54 = 1;
					Function_273(&iLocal_134, 0.0f);
					ACTOR_START_FORCE_HOLSTER(&bParam2, 0, 0);
					SET_ANIM_SET_FOR_ACTOR(&bParam2, "nhanging_B", 0);
					SET_ACTION_NODE_FOR_ACTOR(&bParam2, "nhanging_B");
					Function_147(&bParam2, &Global_54076, "HangingUnlawful_msg09", "HangingUnlawful_msg09", 5, 60, 1, 1);
					AI_SPEECH_SET_ALLOW_FOR_ACTOR(&bParam2, 1);
					UNK_0x99AFD2D1(&bParam2, 0, 0);
					AI_GOAL_LOOK_AT_ACTOR(&bParam2, &Global_54076, 1, 1065353216, 3212836864, 3212836864, 0);
					uParam0 = 2;
					Function_273(&uLocal_102, 0.0f);
				}
			}
			else
			{
				TASK_WANDER(&bParam2, -1.0f);
			}
			break;
		
		case 0x00000002:
			if (IS_ACTOR_VALID(&bParam2))
			{
				if (Function_163(&bParam2, &Global_54076) > 12.0f && !iLocal_55)
				{
					iLocal_55 = 1;
					TASK_STAND_STILL(&bParam2, 5.0f, 0, 0);
					AI_GOAL_LOOK_AT_ACTOR_NEW(&bParam2, &Global_54076, 10.0f, 1);
				}
			}
			if ((CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &(iParam8[0]), 1.0f, 60.0f, 1, 1, 0) || CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &bParam3, 1.0f, 60.0f, 1, 1, 0)) || bLocal_139)
			{
				RESET_ANIM_SET_FOR_ACTOR(&bParam2, 1);
				ACTOR_END_FORCE_HOLSTER(&bParam2);
				AI_GOAL_LOOK_CLEAR(&bParam2);
				TASK_GO_NEAR_COORD(&bParam2, &uParam4, 10.0f, 4);
				SET_ACTOR_STAY_WITHIN_VOLUME(&bParam2, &uLocal_147, 4, false);
				iLocal_64 = 1;
				bLocal_44 = true;
				uParam0 = 4;
			}
			if (Function_143(&uLocal_102, 5.0f))
			{
				ACTOR_END_FORCE_HOLSTER(&bParam2);
				RESET_ANIM_SET_FOR_ACTOR(&bParam2, 1);
				if (bLocal_63)
				{
					Function_142("HangingObj_msg04", 0x40f00000, 1, 2, 0, 0, 0, 0);
				}
				else if (bLocal_62)
				{
					Function_142("HangingObj_msg03", 0x40f00000, 1, 2, 0, 0, 0, 0);
				}
				else
				{
					Function_142("HangingObj_msg02", 0x40f00000, 1, 2, 0, 0, 0, 0);
				}
				ADD_BLIP_FOR_ACTOR(&bParam2, 325, 0.0f, 3, 0);
				TASK_GO_NEAR_COORD(&bParam2, &uParam4, 10.0f, 4);
				SET_ACTOR_STAY_WITHIN_VOLUME(&bParam2, &uLocal_147, 4, false);
				bLocal_44 = true;
				uParam0 = 3;
			}
			break;
		
		case 0x00000003:
			if ((CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &(iParam8[0]), 1.0f, 60.0f, 1, 1, 0) || CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &bParam3, 1.0f, 60.0f, 1, 1, 0)) || bLocal_139)
			{
				iLocal_64 = 1;
				uParam0 = 4;
			}
			if (IS_ACTOR_VALID(&bParam2))
			{
				if (Function_16(StackVal, &bParam2, Local_107) > 30.0f && Function_163(&Global_54076, &bParam2) < 40.0f)
				{
					SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bParam2, 1.0f);
					if (IS_ACTOR_VALID(&(iParam8[0])))
					{
						Function_149(&(iParam8[0]), &bParam2);
					}
					if (IS_ACTOR_VALID(&(iParam8[1])))
					{
						Function_149(&(iParam8[1]), &bParam2);
					}
					if (IS_ACTOR_VALID(&(iParam8[2])))
					{
						Function_149(&(iParam8[2]), &bParam2);
					}
					iLocal_64 = 1;
					bLocal_42 = true;
					uParam0 = 4;
				}
			}
			break;
		
		case 0x00000004:
			Function_164(&bParam2, &iParam8);
			iLocal_64 = 1;
			Function_141(18);
			Function_147(&bParam3, &Global_54076, "HangingUnlawful_msg02", "HangingUnlawful_msg02", 5, 60, 1, 1);
			Function_153(&bParam2);
			ADD_BLIP_FOR_ACTOR(&bParam3, 325, 0.0f, 3, 0);
			Function_273(&uLocal_102, 0.0f);
			uParam0 = 6;
			break;
		
		case 0x00000006:
			Function_140(&bParam2, &iParam8);
			if (Function_143(&uLocal_102, 4.0f))
			{
				Function_147(&(iParam8[0]), &bParam3, "HangingUnlawful_msg03", "HangingUnlawful_msg03", 5, 60, 1, 1);
				uParam0 = 7;
				Function_273(&uLocal_102, 0.0f);
			}
			break;
		
		case 0x00000007:
			Function_140(&bParam2, &iParam8);
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bParam2)))
			{
				Function_153(&bParam2);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bParam3)))
			{
				ADD_BLIP_FOR_ACTOR(&bParam3, 325, 0.0f, 3, 0);
			}
			if (!bLocal_139 && !bLocal_42)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_142("HangingHelp_msg06", 0x40f00000, 1, 2, 0, 0, 0, 0);
				iLocal_54 = 1;
			}
			Function_138(&iParam8, &bParam7, &bParam3, &uParam5);
			uParam0 = 9;
			break;
		
		case 0x00000009:
			Function_140(&bParam2, &iParam8);
			if (Function_143(&uLocal_102, 4.0f) && !iLocal_46)
			{
				if (Function_161(&(iParam8[0]), 0))
				{
					Function_147(&(iParam8[0]), &Global_54076, "HangingUnlawful_msg05", "HangingUnlawful_msg05", 5, 60, 1, 1);
					AI_SPEECH_SET_ALLOW_FOR_ACTOR(&(iParam8[0]), 1);
					UNK_0x99AFD2D1(&(iParam8[0]), 0, 0);
					iLocal_46 = 1;
				}
			}
			bLocal_50 = true;
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (Function_161(&(iParam8[iVar0]), 1))
				{
					bLocal_50 = false;
				}
				iVar0++;
			}
			if (!bLocal_139)
			{
				Function_138(&iParam8, &bParam7, &bParam3, &uParam5);
			}
			else if (bLocal_139 && Function_161(&bParam3, 0))
			{
				if (bLocal_50)
				{
					uParam0 = 13;
				}
				else
				{
					uParam0 = 10;
				}
			}
			break;
		
		case 0x0000000A:
			bLocal_50 = true;
			Function_140(&bParam2, &iParam8);
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (Function_161(&(iParam8[iVar0]), 1))
				{
					bLocal_50 = false;
				}
				iVar0++;
			}
			if (!Function_135(StackVal, &bParam3, &bParam2, &iParam8, Local_107, bParam10))
			{
				iVar0 = 0;
				while (iVar0 <= 3)
				{
					if (Function_161(&(iParam8[iVar0]), 1))
					{
						Function_149(&(iParam8[iVar0]), &Global_54076);
					}
					iVar0++;
				}
				Function_142("HangingObj_msg01", 0x40f00000, 1, 2, 0, 0, 0, 0);
				iLocal_54 = 1;
				Function_134(&bParam3, &bParam2);
				uParam0 = 11;
			}
			else if (bLocal_50)
			{
				TASK_FOLLOW_OBJECT_AT_DISTANCE(&bParam2, &bParam3, 6.0f, 4);
				uParam0 = 13;
			}
			else
			{
				return 1;
			}
			break;
		
		case 0x0000000B:
			if (!Function_161(&bParam11, 0) && !iLocal_40)
			{
				if (Function_161(&bParam3, 0))
				{
					TASK_FLEE_COORD(&bParam3, &Local_107, 4, -1.0f, -1.0f, 0);
					iLocal_40 = 1;
				}
			}
			if (Function_135(StackVal, &bParam3, &bParam2, &iParam8, Local_107, bParam10))
			{
				Function_147(&bParam3, &Global_54076, "HangingUnlawful_msg06", "HangingUnlawful_msg06", 3, 30, 1, 1);
				Function_273(&uLocal_102, 0.0f);
				uParam0 = 12;
			}
			break;
		
		case 0x0000000C:
			if ((IS_ACTOR_VALID(&bParam3) && IS_ACTOR_VALID(&bParam2)) && Function_161(&bParam11, 0))
			{
				if (IS_ACTOR_RIDING_AND_IN_SADDLE(&bParam3))
				{
					Function_133(StackVal, &bParam2, Vector(0.0f, 0.0f, 0.0f), 0, 0, 2, 1);
					return 1;
				}
			}
			if (IS_ACTOR_VALID(&bParam3))
			{
				Function_132(&bParam3, 4, 0, 2);
			}
			if (IS_ACTOR_VALID(&bParam2))
			{
				Function_132(&bParam2, 4, 0, 2);
				TASK_FLEE_ACTOR(&bParam2, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
				if (bLocal_44)
				{
					REMOVE_ACTOR_STAY_WITHIN_VOLUME(&bParam2, &uLocal_147);
					bLocal_44 = false;
				}
			}
			return 1;
			if (Function_189(&uLocal_102, 40.0f))
			{
				if (IS_ACTOR_VALID(&bParam3))
				{
					Function_132(&bParam3, 4, 0, 2);
				}
				if (IS_ACTOR_VALID(&bParam2))
				{
					Function_132(&bParam2, 4, 0, 2);
					if (bLocal_44)
					{
						REMOVE_ACTOR_STAY_WITHIN_VOLUME(&bParam2, &uLocal_147);
						bLocal_44 = false;
					}
				}
				return 1;
			}
			break;
		
		case 0x0000000D:
			Function_138(&iParam8, &bParam7, &bParam3, &uParam5);
			if (IS_OBJECT_VALID(&uLocal_143))
			{
				if (LEASH_IS_BROKEN(&uLocal_143))
				{
					uParam0 = 14;
				}
			}
			else
			{
				uParam0 = 14;
			}
			break;
		
		case 0x0000000E:
			Function_150(&iLocal_152, 3, 0, 4294967295, 4294967295);
			if (Function_131(&bParam3, &Global_54076, &uLocal_123, &iLocal_124, &uLocal_102, &uParam6, 25.0f, &iLocal_125, &uLocal_113, &uParam5, "ped_emo_thanks", "ped_emo_thanks", "HangingUnlawful_msg06", "HangingUnlawful_msg06", 30.0f, 2, -5.0f, 0, 4.0f, 0, 0, 0, 1, 0, 0x40800000))
			{
				if (iLocal_125 == 1)
				{
					iLocal_56 = 1;
					Function_79(GET_ACTOR_ENUM_FACTION(iLocal_27[0]));
					Function_153(&bParam3);
					Function_74(100, 1, 0);
					Function_35(50, 1, 0);
					AI_GOAL_LOOK_CLEAR(&bParam3);
					uParam0 = 15;
				}
			}
			else if (Function_161(&bParam3, 0))
			{
				uParam0 = 15;
			}
			else
			{
				return 1;
			}
			break;
		
		case 0x0000000F:
			bParam7 = GET_MOUNT(&bParam2);
			if (Function_161(&bParam2, 0) && Function_161(&bParam7, 0))
			{
				iVar1 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_ACTOR(0, &bParam3, 5.0f, 2);
				TASK_STAND_STILL(0, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bParam2, iVar1);
				TASK_SEQUENCE_RELEASE(iVar1, 1);
				if (bLocal_62)
				{
					SET_ANIM_SET_FOR_ACTOR(&bParam3, "gent_ride_passenger", 0);
				}
				else
				{
					SET_ANIM_SET_FOR_ACTOR(&bParam3, "fema_ride_passenger", 0);
				}
				SET_MOUNTS_AS_PASSENGER(&bParam3, 1);
				TASK_MOUNT(&bParam3, &bParam7, 0, 1, 2, 2147483647);
				uParam0 = 16;
			}
			else
			{
				MEMORY_PREFER_RIDING(&bParam3, true);
				if (Function_161(&bParam2, 0))
				{
					MEMORY_PREFER_RIDING(&bParam2, true);
					TASK_FOLLOW_ACTOR(&bParam2, &bParam3);
				}
				Function_132(&bParam3, 4, 0, 2);
				return 1;
			}
			break;
		
		case 0x00000010:
			if (GET_TASK_STATUS(&bParam3, 11) != 0 && IS_ACTOR_RIDING_AND_IN_SADDLE(&bParam3))
			{
				Function_133(StackVal, &bParam2, Vector(0.0f, 0.0f, 0.0f), 0, 0, 2, 1);
				return 1;
			}
			break;
		
		case 0x00000011:
			if (Function_34(&iParam8, &uParam9))
			{
				return 1;
			}
			break;
		
		case 0x00000012:
			Function_140(&bParam2, &iParam8);
			Function_138(&iParam8, &bParam7, &bParam3, &uParam5);
			Function_33(&iParam8, 3, &iLocal_47, &bLocal_48, 1);
			if (!IS_ACTOR_VALID(&bParam2))
			{
				uParam0 = 17;
			}
			if (!bLocal_48)
			{
				Function_79(GET_ACTOR_ENUM_FACTION(iLocal_27[0]));
				TASK_CLEAR(&bParam2);
				iVar1 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_OBJECT(0, &uLocal_57, 6.0f, 4, 0, 1);
				TASK_DISMOUNT(0, 1);
				TASK_PRIORITY_SET(&bParam2, false);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bParam2, iVar1);
				TASK_SEQUENCE_RELEASE(iVar1, 1);
				uParam0 = 19;
			}
			else if (!bLocal_53)
			{
				uParam0 = 19;
			}
			break;
		
		case 0x00000013:
			if (Function_161(&bParam2, 1))
			{
				if (!IS_ACTOR_RIDING(&bParam2))
				{
					MEMORY_CLEAR_EVENTS(&bParam2, 1);
					Function_24(&bParam2, GET_GRINGO_FROM_OBJECT(&uLocal_57), "UseCase1", 4294967295, 4, 0);
					Function_21(&bParam2, 1);
					if (!bLocal_53)
					{
						uParam0 = 17;
					}
					else
					{
						return 1;
					}
				}
				if (!bLocal_53)
				{
					iVar0 = 0;
					while (iVar0 <= 3)
					{
						if (Function_161(&(iParam8[iVar0]), 0) && !bLocal_140)
						{
							TASK_FLEE_COORD(&bParam2, &Local_107, 4, -1.0f, -1.0f, 0);
							bLocal_140 = true;
						}
						iVar0++;
					}
					if (bLocal_140)
					{
						uParam0 = 17;
					}
					else
					{
						TASK_FLEE_COORD(&bParam2, &Local_107, 4, -1.0f, -1.0f, 0);
						return 1;
					}
				}
			}
			uParam0 = 17;
			break;
	}
	return 0;
}

int Function_21(bool bParam0, int iParam1) //Position: 0x27E9 / 10217
{
	char* cVar0[64];
	
	if (!IS_ACTOR_VALID(&bParam0))
	{
		strcpy(&cVar0, "ACTORROAM_SET_OPTIONS_FOR_ACTOR: invalid actor ", 64);
		stradd(&cVar0, GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(&bParam0)), 64);
		return 0;
	}
	if (!Function_23(&bParam0))
	{
		strcpy(&cVar0, "ACTORROAM_SET_OPTIONS_FOR_ACTOR: invalid actor ", 64);
		stradd(&cVar0, GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(&bParam0)), 64);
		return 0;
	}
	Function_22(&bParam0, iParam1);
	return 1;
}

void Function_22(var uParam0, bool bParam1) //Position: 0x2896 / 10390
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_options", bParam1);
	return;
}

bool Function_23(bool bParam0) //Position: 0x28BC / 10428
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

int Function_24(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5) //Position: 0x28E4 / 10468
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
		Function_25(&uParam0, 5, GET_OBJECT_FROM_GRINGO(&uParam1), &iParam4, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_25(var uParam0, int iParam1, bool bParam2, var uParam3, int iParam4) //Position: 0x2991 / 10641
{
	char* cVar0[32];
	
	Function_32();
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
	if (Function_31(&uParam0) == 1)
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
	Function_30(&uParam0, 0);
	Function_29(&uParam0, iParam1);
	Function_28(&uParam0, &bParam2);
	Function_27(&uParam0, uParam3);
	if (Function_26(&uParam0) != 5)
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

int Function_26(int iParam0) //Position: 0x2BFD / 11261
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_behavior");
}

void Function_27(var uParam0, bool bParam1) //Position: 0x2C21 / 11297
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_28(var uParam0, int iParam1) //Position: 0x2C45 / 11333
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_target", &iParam1);
	return;
}

void Function_29(var uParam0, bool bParam1) //Position: 0x2C6B / 11371
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_30(var uParam0, bool bParam1) //Position: 0x2C92 / 11410
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_state", bParam1);
	return;
}

int Function_31(bool bParam0) //Position: 0x2CB6 / 11446
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(&bParam0), "actorRoam_ref");
}

void Function_32() //Position: 0x2CD5 / 11477
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

void Function_33(var[] uParam0, int iParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x2D24 / 11556
{
	int iVar0;
	
	uParam2 = 1;
	uParam3 = 0;
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		if (Function_161(&(uParam0[iVar0]), &bParam4))
		{
			uParam3 = 1;
		}
		else
		{
			uParam2 = 0;
		}
		iVar0++;
	}
}

bool Function_34(var[] uParam0) //Position: 0x2D67 / 11623
{
	int iVar0;
	
	switch (iLocal_145)
	{
		case 0x00000000:
			Function_150(&iLocal_152, 3, 0, 4294967295, 4294967295);
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (IS_ACTOR_ALIVE(&(uParam0[iVar0])))
				{
					TASK_CLEAR(&(uParam0[iVar0]));
					TASK_MOUNT(&(uParam0[iVar0]), &(iParam1[iVar0]), 0, 1, 2, 2147483647);
					TASK_PRIORITY_SET(&(uParam0[iVar0]), false);
				}
				iVar0++;
			}
			iLocal_145 = 1;
			break;
		
		case 0x00000001:
			if (GET_TASK_STATUS(&(uParam0[0]), 11) == 0)
			{
				if (!iLocal_36)
				{
					Function_133(StackVal, &(uParam0[0]), Vector(0.0f, 0.0f, 0.0f), 0, 0, 2, 1);
					iLocal_36 = 1;
				}
			}
			if (GET_TASK_STATUS(&(uParam0[1]), 11) == 0)
			{
				if (!iLocal_37)
				{
					Function_133(StackVal, &(uParam0[1]), Vector(0.0f, 0.0f, 0.0f), 0, 0, 2, 1);
					iLocal_37 = 1;
				}
			}
			if (GET_TASK_STATUS(&(uParam0[2]), 11) == 0)
			{
				if (!iLocal_38)
				{
					Function_133(StackVal, &(uParam0[2]), Vector(0.0f, 0.0f, 0.0f), 0, 0, 2, 1);
					iLocal_38 = 1;
				}
			}
			if ((!IS_ACTOR_VALID(&(uParam0[0])) && !IS_ACTOR_VALID(&(uParam0[1]))) && !IS_ACTOR_VALID(&(uParam0[2])))
			{
				iLocal_145 = 2;
			}
			if ((iLocal_36 && iLocal_37) && iLocal_38)
			{
				iLocal_145 = 2;
			}
			break;
		
		case 0x00000002:
			return 1;
			break;
	}
	return 0;
}

void Function_35(int iParam0, bool bParam1, bool bParam2) //Position: 0x2EA8 / 11944
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

void Function_36(int iParam0, int iParam1) //Position: 0x307C / 12412
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

int Function_37(int iParam0, char* cParam1) //Position: 0x32E6 / 13030
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

int Function_38() //Position: 0x3476 / 13430
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

void Function_39() //Position: 0x3517 / 13591
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

void Function_40(int iParam0) //Position: 0x35D5 / 13781
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

int Function_41(int iParam0, char* cParam1) //Position: 0x363B / 13883
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

void Function_42(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x3992 / 14738
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

var Function_43(int iParam0) //Position: 0x3A1A / 14874
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

float Function_44(int iParam0) //Position: 0x3AA9 / 15017
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

int Function_45(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x3AE2 / 15074
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

void Function_46(bool bParam0) //Position: 0x3D0A / 15626
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

void Function_47(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x3DA8 / 15784
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
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_48(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_276(), &Var9);
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

var Function_48(int iParam0) //Position: 0x43E9 / 17385
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_49(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x43FA / 17402
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

struct<32> Function_50(char* cParam0) //Position: 0x44F1 / 17649
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_51(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x450C / 17676
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_53(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_52(Function_53(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_52(int iParam0, int iParam1) //Position: 0x4573 / 17779
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_53(int iParam0, bool bParam1) //Position: 0x4585 / 17797
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_54(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x4597 / 17815
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

int Function_55(int iParam0) //Position: 0x46CB / 18123
{
	return Global_55480[iParam016].f_96;
}

var Function_56(int iParam0) //Position: 0x46DA / 18138
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_57(int iParam0) //Position: 0x4717 / 18199
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

int Function_58(int iParam0, float fParam1, bool bParam2) //Position: 0x48B1 / 18609
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

void Function_59(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x4AF5 / 19189
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

void Function_60(char* cParam0) //Position: 0x4B6A / 19306
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

bool Function_61(int iParam0, var uParam1, int iParam2) //Position: 0x4BA4 / 19364
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

int Function_62(char* cParam0) //Position: 0x4C20 / 19488
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

int Function_63(int iParam0) //Position: 0x4CC1 / 19649
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

void Function_64(int iParam0, int iParam1) //Position: 0x4CFE / 19710
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
	return;
}

bool Function_65(var uParam0, int iParam1) //Position: 0x4D14 / 19732
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_66(int iParam0, bool bParam1) //Position: 0x4D27 / 19751
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

var Function_67(int iParam0, int iParam1) //Position: 0x4ED3 / 20179
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

void Function_68() //Position: 0x4F18 / 20248
{
	Function_70(3, 0.0f);
	Function_69(3, 10000.0f);
	return;
}

int Function_69(int iParam0, int iParam1) //Position: 0x4F2E / 20270
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_70(int iParam0, int iParam1) //Position: 0x4F6E / 20334
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

int Function_71(bool bParam0) //Position: 0x4FAE / 20398
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

bool Function_72() //Position: 0x4FEF / 20463
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

var Function_73(int iParam0) //Position: 0x501A / 20506
{
	return (*&Global_21369 + 168)[iParam0];
}

void Function_74(int iParam0, bool bParam1, bool bParam2) //Position: 0x5029 / 20521
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

var Function_75(int iParam0) //Position: 0x5350 / 21328
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

int Function_76(int iParam0, bool bParam1, bool bParam2) //Position: 0x53F3 / 21491
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

int Function_77(int iParam0, bool bParam1, int iParam2) //Position: 0x568F / 22159
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

int Function_78(int iParam0, bool bParam1) //Position: 0x588C / 22668
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

void Function_79(int iParam0) //Position: 0x5A37 / 23095
{
	if (!IS_FACTION_VALID(iParam0))
	{
		return;
	}
	if (!Function_130(3))
	{
		return;
	}
	if (Function_9())
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000019:
			if (IS_PS3() || Function_129())
			{
				Function_80(4, 16, 0, 0, 1);
			}
			break;
		
		case 0x0000000E:
			Function_80(5, 16, 0, 0, 1);
			break;
		
		case 0x0000000C:
			Function_80(7, 16, 0, 0, 1);
			break;
	}
	return;
}

void Function_80(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x5A9E / 23198
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	if (!Function_128(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_130(3) || iParam3)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_127(bParam0, 2))
	{
		Function_45(456, 1, 0, 0);
		Function_126(bParam0, 2);
		if (!&bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_125(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = &bParam2;
	if (!Function_124(bParam0, bParam1))
	{
		Global_42265[bParam09].f_4 = (StackVal || bParam1);
		Function_126(bParam0, 1048576);
		if (&bParam4)
		{
			if (!Function_123(0, 0, 1, 1))
			{
				Function_100(1);
				Function_99(1, 0);
			}
			else
			{
				Function_98();
			}
		}
		Function_93(bParam0);
		if (StackVal && !Function_10(((((!Function_92() && !Global_6623) && !Global_6635) && !Global_6627) && !&bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_10((((Function_92() || Global_6623) || Global_6635) || Global_6627), 1))
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitScrap"))
			{
				DECOR_SET_INT(&Global_54076, "outfitScrap", bParam0);
			}
		}
		if (!Function_9())
		{
			if (!Function_65(Global_119934, 2))
			{
				Function_59(&Global_54076, 2, 1, 0);
			}
		}
		if (Global_42827 == bParam0)
		{
			Global_42827.f_16 = 1;
			Function_83();
		}
		Global_42827.f_16 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_82(3, bParam1);
				break;
			
			case 0x00000005:
				Function_82(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_82(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_82(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_82(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_82(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_81(2, 24);
				break;
			
			case 0x00000003:
				Function_81(2, 25);
				break;
			
			case 0x0000000F:
				Function_81(2, 26);
				break;
			
			case 0x0000000D:
				Function_81(2, 27);
				break;
			
			case 0x0000000E:
				Function_81(2, 28);
				break;
			}
	}
}

void Function_81(int iParam0, int iParam1) //Position: 0x5D3D / 23869
{
	bool bVar0;
	
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	bVar0 = SHIFT_LEFT(true, &iParam1);
	(*&Global_21369 + 260)[iParam0] = ((*&Global_21369 + 260)[iParam0] || bVar0);
	return;
	return;
}

void Function_82(int iParam0, bool bParam1) //Position: 0x5DA7 / 23975
{
	if (iParam0 < 16 || iParam0 != 4294967295)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	if (&bParam1 > 0)
	{
		(*&Global_21369 + 260)[iParam0] = ((*&Global_21369 + 260)[iParam0] || bParam1);
	}
	return;
	return;
}

void Function_83() //Position: 0x5E16 / 24086
{
	if (Function_128(Global_42827))
	{
		if (Global_42827.f_16)
		{
			if (IS_BLIP_VALID(&Global_42827 + 8))
			{
				REMOVE_BLIP(&Global_42827 + 8);
			}
			Global_42827.f_4 = Function_91(Global_42827);
			*(&Global_42827 + 8) = Function_84(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
		else if (!IS_BLIP_VALID(&Global_42827 + 8))
		{
			Global_42827.f_4 = Function_91(Global_42827);
			*(&Global_42827 + 8) = Function_84(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
	}
	return;
}

int Function_84(int iParam0, int iParam1) //Position: 0x5E96 / 24214
{
	struct<2> Var0;
	struct<9> Var2;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	
	iVar13 = 1;
	iVar14 = 1;
	iVar15 = 1;
	iVar16 = 1;
	iVar17 = 1;
	switch (iParam0)
	{
		case 0x00000000:
			break;
		
		case 0x00000004:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46796[2]9] + 8;
					strcpy(&cVar5, "out_dnd_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_87(6, 0) || Function_87(12, 0))
					{
						cVar4 = &Global_44085[Global_46760[1]9] + 8;
					}
					strcpy(&cVar5, "out_dnd_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_dnd_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_dnd_blip4", 32);
					break;
				
				case 0x00000010:
					Var0 = Vector(-2177,057f, 16,426f, 2626,285f);
					vVar2 = Vector(400.0f, 400.0f, 400.0f);
					strcpy(&cVar5, "out_dnd_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_dnd_blip6", 32);
					break;
			}
			break;
		
		case 0x00000005:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_rustler_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46816[0]9] + 8;
					strcpy(&cVar5, "out_rustler_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46816[0]9] + 8;
					strcpy(&cVar5, "out_rustler_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46816[0]9] + 8;
					strcpy(&cVar5, "out_rustler_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46736[2]9] + 8;
					vVar2 = Vector(400.0f, 400.0f, 400.0f);
					strcpy(&cVar5, "out_rustler_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_rustler_blip6", 32);
					break;
			}
			break;
		
		case 0x00000006:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46796[7]9] + 8;
					strcpy(&cVar5, "out_treasur_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_86(13) && iVar14)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar14 = 0;
					}
					else if (iVar14 && Function_87(5, 0))
					{
						Var0 = Vector(-4120,147f, 18,356f, 3039,531f);
						vVar2 = Vector(500.0f, 500.0f, 500.0f);
						iVar14 = 0;
					}
					strcpy(&cVar5, "out_treasur_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46796[1]9] + 8;
					strcpy(&cVar5, "out_treasur_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46796[1]9] + 8;
					strcpy(&cVar5, "out_treasur_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46796[3]9] + 8;
					strcpy(&cVar5, "out_treasur_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_treasur_blip6", 32);
					break;
			}
			break;
		
		case 0x00000007:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46850[3]9] + 8;
					strcpy(&cVar5, "out_bandito_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_bandito_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46894[2]9] + 8;
					strcpy(&cVar5, "out_bandito_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_bandito_blip4", 32);
					break;
				
				case 0x00000010:
					Var0 = Vector(-4178,186f, 32,616f, 4582,207f);
					vVar2 = Vector(500.0f, 500.0f, 500.0f);
					strcpy(&cVar5, "out_bandito_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_bandito_blip6", 32);
					break;
			}
			break;
		
		case 0x00000008:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46866[4]9] + 8;
					strcpy(&cVar5, "out_rebel_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_86(26) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_86(25) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_86(24) && iVar15)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_86(23) && iVar15)
					{
						cVar4 = &Global_44085[Global_46850[1]9] + 8;
						iVar15 = 0;
					}
					else if (iVar15 && Function_87(26, 0))
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					strcpy(&cVar5, "out_rebel_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_rebel_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_86(55) && iVar16)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_86(54) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_86(27) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					strcpy(&cVar5, "out_rebel_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46894[3]9] + 8;
					strcpy(&cVar5, "out_rebel_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46850[0]9] + 8;
					strcpy(&cVar5, "out_rebel_blip6", 32);
					break;
			}
			break;
		
		case 0x00000009:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46926[5]9] + 8;
					strcpy(&cVar5, "out_military_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46926[2]9] + 8;
					strcpy(&cVar5, "out_military_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46914[0]9] + 8;
					strcpy(&cVar5, "out_military_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_86(52) && iVar13)
					{
						cVar4 = &Global_44085[Global_46926[2]9] + 8;
						iVar13 = 0;
					}
					else if (Function_86(51) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					else if (Function_86(50) && iVar13)
					{
						cVar4 = &Global_44085[Global_46796[4]9] + 8;
						iVar13 = 0;
					}
					else if (Function_86(49) && iVar13)
					{
						cVar4 = &Global_44085[Global_46816[1]9] + 8;
						iVar13 = 0;
					}
					else if (Function_87(17, 0) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					strcpy(&cVar5, "out_military_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46914[0]9] + 8;
					strcpy(&cVar5, "out_military_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46914[0]9] + 8;
					strcpy(&cVar5, "out_military_blip6", 32);
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46760[4]9] + 8;
					strcpy(&cVar5, "out_gun_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46760[2]9] + 8;
					strcpy(&cVar5, "out_gun_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_gun_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_gun_blip4", 32);
					break;
				
				case 0x00000010:
					if (Function_86(19) && iVar17)
					{
						Var0 = Vector(-1708,36f, 46,18f, 2175,89f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_87(6, 0) && Function_86(18)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_86(17) && iVar17)
					{
						Var0 = Vector(-1687,208f, 53,208f, 2140,491f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_87(9, 0) && Function_86(16)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_86(15) && iVar17)
					{
						Var0 = Vector(-1709,084f, 55,216f, 2104,631f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if (Function_87(8, 0) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					strcpy(&cVar5, "out_gun_blip5", 32);
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_suit_blip1", 32);
					break;
			}
			break;
		
		default:
			break;
	}
	if (Function_85(StackVal, Var0))
	{
		if (IS_OBJECT_VALID(&cVar4))
		{
			GET_OBJECT_POSITION(&cVar4, &Var0);
			if (Function_85(StackVal, vVar2))
			{
				if (GET_OBJECT_TYPE(&cVar4) == 9)
				{
					GET_VOLUME_SCALE(&cVar4, &vVar2);
				}
				else
				{
					vVar2 = Vector(200.0f, 200.0f, 200.0f);
				}
			}
		}
	}
	if (!Function_85(StackVal, vVar2))
	{
		iVar18 = ADD_BLIP_FOR_COORD(&Var0, 440, 0, 2, 0);
		SET_BLIP_SCALE(&iVar18, ((vVar2.x + vVar2.z) / 2.0f));
		SET_BLIP_COLOR(&iVar18, 0,58f, 0,35f, 0,72f, 0,5f);
		SET_BLIP_PRIORITY(&iVar18, 3);
		SET_BLIP_NAME(&iVar18, &cVar5);
		return &iVar18;
	}
	return "";
}

bool Function_85(char* cParam0) //Position: 0x6AF9 / 27385
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

int Function_86(int iParam0) //Position: 0x6B11 / 27409
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_87(int iParam0, bool bParam1) //Position: 0x6B26 / 27430
{
	int iVar0;
	
	iVar0 = Function_89(iParam0);
	if (!Function_88(iVar0))
	{
		return 0;
	}
	if (StackVal == 3)
	{
		return 1;
	}
	if (!&bParam1)
	{
		if (StackVal == 4)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_88(int iParam0) //Position: 0x6B64 / 27492
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_89(int iParam0) //Position: 0x6B7B / 27515
{
	if (!Function_90(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_90(int iParam0) //Position: 0x6B95 / 27541
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

int Function_91(int iParam0) //Position: 0x6BAB / 27563
{
	int iVar0;
	int iVar1;
	
	if (!Function_128(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_42265[iParam09].f_28)
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

bool Function_92() //Position: 0x6BFA / 27642
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_93(bool bParam0) //Position: 0x6C27 / 27687
{
	char* cVar0[32];
	char* cVar8[32];
	struct<8> Var16;
	bool bVar24;
	
	strcpy(&cVar0, "OUT_", 32);
	strcpy(&cVar8, "out_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	stradd(&cVar8, &Global_42265[bParam09] + 32, 32);
	stradd(&cVar8, "_hint", 32);
	if (!IS_JOURNAL_ENTRY_IN_LIST(Global_42265[bParam09].f_64, 0) && !IS_JOURNAL_ENTRY_IN_LIST(Global_42265[bParam09].f_64, 1))
	{
		Global_42265[bParam09].f_64 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		APPEND_JOURNAL_ENTRY(Global_42265[bParam09].f_64, 0);
		bVar24 = false;
		while (bVar24 <= Global_42265[bParam09].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_124(bParam0, Function_97(bVar24)))
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &Var16, 0, 4, false);
			}
			else
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &Var16, 0, 3, false);
			}
			bVar24++;
		}
	}
	else if (IS_JOURNAL_ENTRY_IN_LIST(Global_42265[bParam09].f_64, 0))
	{
		bVar24 = false;
		while (bVar24 <= Global_42265[bParam09].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_124(bParam0, Function_97(bVar24)))
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_42265[bParam09].f_64, &Var16, 4, 0);
			}
			else
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_42265[bParam09].f_64, &Var16, 3, 0);
			}
			bVar24++;
		}
	}
	if (Global_42265[bParam09].f_64 == 4294967295 && Global_42265[bParam09].f_64 == 0)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, (TO_FLOAT(Function_96(bParam0)) / TO_FLOAT(Global_42265[bParam09].f_28)), 0, 0);
		Function_95(Global_42265[bParam09].f_64, 0);
		straddi(&cVar8, Function_94(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[bParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_94(int iParam0) //Position: 0x6DD7 / 28119
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_128(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 <= Global_42265[iParam09].f_28)
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

void Function_95(var uParam0, int iParam1) //Position: 0x6E2E / 28206
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(uParam0);
	REMOVE_JOURNAL_ENTRY(uParam0, iParam1);
	PREPEND_JOURNAL_ENTRY(uParam0, iParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(uParam0);
	}
	return;
}

var Function_96(int iParam0) //Position: 0x6E53 / 28243
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_128(iParam0))
	{
		return 4294967295;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_42265[iParam09].f_28)
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

int Function_97(bool bParam0) //Position: 0x6EA9 / 28329
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_98() //Position: 0x6EB5 / 28341
{
	return;
}

void Function_99(var uParam0, int iParam1) //Position: 0x6EBB / 28347
{
	if (Global_6624)
	{
		return;
	}
	Global_6655 = uParam0;
	Global_6659 = iParam1;
	if (!Global_6606 && 1)
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", 1);
	return;
}

void Function_100(bool bParam0) //Position: 0x6EFA / 28410
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_115();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_101();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_64(&Global_99144, 1);
		Function_64(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_101() //Position: 0x6F4F / 28495
{
	Function_113();
	Function_112();
	Function_112();
	Function_111();
	Function_111();
	Function_110();
	Function_110();
	Function_109(0);
	Function_109(0);
	Function_106();
	Function_105();
	Function_104();
	Function_103();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_102();
	return;
}

void Function_102() //Position: 0x6F9A / 28570
{
	Global_54086[372] = GET_SAGPLAYER_STAT_FLOAT(0);
	Global_54086[373] = GET_SAGPLAYER_STAT_FLOAT(1);
	Global_54086[374] = GET_SAGPLAYER_STAT_FLOAT(2);
	Global_54086[375] = GET_SAGPLAYER_STAT_FLOAT(3);
	Global_54086[376] = GET_SAGPLAYER_STAT_FLOAT(4);
	Global_54086[377] = GET_SAGPLAYER_STAT_FLOAT(5);
	Global_54086[378] = GET_SAGPLAYER_STAT_FLOAT(6);
	Global_54086[379] = GET_SAGPLAYER_STAT_INT(1);
	Global_54086[380] = GET_SAGPLAYER_STAT_INT(2);
	Global_54086[381] = GET_SAGPLAYER_STAT_FLOAT(7);
	Global_54086[382] = GET_SAGPLAYER_STAT_FLOAT(8);
	Global_54086[383] = GET_SAGPLAYER_STAT_FLOAT(9);
	Global_54086[385] = GET_SAGPLAYER_STAT_INT(0);
	Global_54086[387] = GET_SAGPLAYER_STAT_FLOAT(10);
	Global_54086[388] = GET_SAGPLAYER_STAT_FLOAT(11);
	Global_54086[394] = GET_SAGPLAYER_STAT_FLOAT(12);
	Global_54086[44] = GET_SAGPLAYER_STAT_INT(3);
	Global_54086[392] = GET_SAGPLAYER_STAT_INT(4);
	Global_54086[391] = GET_SAGPLAYER_STAT_INT(6);
	Global_54086[393] = GET_SAGPLAYER_STAT_INT(5);
	Global_54086[395] = GET_SAGPLAYER_STAT_INT(7);
	return;
}

void Function_103() //Position: 0x70A0 / 28832
{
	float fVar0;
	
	fVar0 = GET_PLAYER_DEADEYE_POINTS(0);
	if (Global_39290[1])
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
	Global_131716 = fVar0;
	return;
}

void Function_104() //Position: 0x70D3 / 28883
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(1);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		iVar3 = GET_JOURNAL_ENTRY_IN_LIST(1, iVar1);
		if (iVar3 == 4294967295 && iVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(iVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 50 completed quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_119632[iVar23] = iVar3;
					*(&Global_119632[iVar23] + 8) = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					*(&Global_119632[iVar23] + 16) = IS_JOURNAL_ENTRY_UPDATED(iVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_119632[iVar13] = 4294967295;
		*(&Global_119632[iVar13] + 8) = 4294967295;
		iVar1++;
	}
	return;
}

void Function_105() //Position: 0x7266 / 29286
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(0);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		iVar3 = GET_JOURNAL_ENTRY_IN_LIST(0, iVar1);
		if (iVar3 == 4294967295 && iVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(iVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 20 active quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_119329[iVar23] = iVar3;
					*(&Global_119329[iVar23] + 8) = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					*(&Global_119329[iVar23] + 16) = IS_JOURNAL_ENTRY_UPDATED(iVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_119329[iVar13] = 4294967295;
		*(&Global_119329[iVar13] + 8) = 4294967295;
		iVar1++;
	}
	Global_119631 = GET_TARGETED_JOURNAL_ENTRY();
	if (Global_119631 == 4294967295 && Global_119631 == 0)
	{
		if (!GET_JOURNAL_ENTRY_TYPE(Global_119631) != 2)
		{
			Global_119631 = 4294967295;
		}
	}
	return;
}

void Function_106() //Position: 0x741F / 29727
{
	Function_107(&Global_42918, 1, 0);
	return;
}

void Function_107(struct<2317> Param0) //Position: 0x742D / 29741
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	
	uVar0 = Function_108();
	if (IS_ACTOR_VALID(&uVar0))
	{
		Param0.f_1060 = GET_NUM_WEAPONS_IN_INVENTORY(&uVar0);
		iVar7 = 4294967294;
		iVar8 = GET_WEAPON_IN_HAND(&uVar0);
		if (iVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(&uVar0, iVar8) || uParam2)
			{
				iVar7 = GET_WEAPON_IN_HAND_CRC(&uVar0);
			}
		}
		iVar1 = 0;
		while (iVar1 < (Param0.f_1060 - 1))
		{
			iVar9 = ACTOR_GET_ITEM_CRC_AT_INDEX(iVar1, &uVar0);
			if (iVar9 != iVar7)
			{
				(*&Param0 + 92)[iVar1] = iVar9;
				(&Param0 + 92[iVar1])->f_4 = GET_ITEM_COUNT_BY_CRC((*&Param0 + 92)[iVar1], &uVar0);
			}
			iVar1++;
		}
		if (bParam1)
		{
			Param0.f_88 = GET_NUM_ACCESSORIES_IN_INVENTORY(&uVar0);
			iVar2 = 0;
			while (iVar2 < (Param0.f_88 - 1))
			{
				Param0[iVar2] = ACTOR_GET_ACCESSORY_CRC_AT_INDEX(iVar2, &uVar0);
				iVar2++;
			}
		}
		bVar3 = false;
		while (bVar3 < (17 - 1))
		{
			(*&Param0 + 1064)[bVar3] = _GET_AMMO_AMOUNT(&uVar0, bVar3, 0);
			bVar3++;
		}
		Param0.f_1272 = 4294967295;
		iVar4 = 0;
		while (iVar4 < (7 - 1))
		{
			iVar10 = iVar4;
			(*&Param0 + 1208)[iVar4] = GET_WEAPON_EQUIPPED(&uVar0, iVar10);
			if ((*&Param0 + 1208)[iVar4] == 4294967295)
			{
				if (GET_ITEM_EQUIPSLOT(iVar8) == iVar10)
				{
					(*&Param0 + 1208)[iVar4] = iVar8;
					Param0.f_1272 = iVar8;
				}
			}
			iVar4++;
		}
		Param0.f_2316 = GET_NUM_COLLECTABLES_IN_INVENTORY(&uVar0);
		iVar1 = 0;
		while (iVar1 < (Param0.f_2316 - 1))
		{
			uVar11 = ACTOR_GET_COLLECTABLE_CRC_AT_INDEX(iVar1, &uVar0);
			(*&Param0 + 1284)[iVar1] = uVar11;
			(&Param0 + 1284[iVar1])->f_4 = GET_ITEM_COUNT_BY_CRC((*&Param0 + 1284)[iVar1], &uVar0);
			iVar1++;
		}
		iVar12 = ACTOR_GET_NEXT_EQUIP_SLOT(&uVar0);
		if (iVar12 != 4294967295)
		{
			Param0.f_1276 = GET_WEAPON_EQUIPPED(&uVar0, iVar12);
		}
		else
		{
			Param0.f_1276 = 4294967295;
		}
		iVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(&uVar0);
		if (iVar13 != 4294967295)
		{
			Param0.f_1280 = GET_WEAPON_EQUIPPED(&uVar0, iVar13);
		}
		else
		{
			Param0.f_1280 = 4294967295;
		}
		bVar5 = false;
		while (bVar5 < (39 - 1))
		{
			(*&Param0 + 2320)[bVar5] = IS_WEAPONENUM_LOCKED(bVar5);
			bVar5++;
		}
	}
	return;
}

var Function_108() //Position: 0x764A / 30282
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_109(char* cParam0) //Position: 0x765F / 30303
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
				if (iVar4 == 31 || cParam0)
				{
					iVar2 = ((Function_71((50 + iVar4)) + Function_71((183 + iVar4))) + Function_71((90 + iVar4)));
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
	Function_76(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

struct<8> Function_110() //Position: 0x7706 / 30470
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
		iVar2 = ((Function_71((50 + iVar3) + 15) + Function_71((183 + iVar3) + 15)) + Function_71((90 + iVar3) + 15));
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
	Function_76(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_111() //Position: 0x778F / 30607
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
			iVar2 = ((Function_71((50 + iVar3) + 8) + Function_71((183 + iVar3) + 8)) + Function_71((90 + iVar3) + 8));
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
	Function_76(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_112() //Position: 0x7826 / 30758
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
		iVar2 = ((Function_71((50 + iVar3)) + Function_71((183 + iVar3))) + Function_71((90 + iVar3)));
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
	Function_76(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_113() //Position: 0x78A5 / 30885
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_114(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_76(8, (GET_DAY(0) - 2), 0);
	return;
}

int Function_114(int iParam0, float fParam1, int iParam2) //Position: 0x78E2 / 30946
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_INCREASE_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (fParam1 > 0.0f)
	{
		LOG_ERROR("\STAT_INCREASE_NOW: fIncreaseValue < 0.0 - I am turning this into a positive number for you!");
		fParam1 = FABS(fParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] + fParam1);
	Function_58(iParam0, fParam1, 1);
	Function_57(iParam0);
	if (iParam2 && fParam1 == 0.0f)
	{
		Function_47(iParam0, 1, fParam1, 0, 1, 0x40400000, 0, 0);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= ROUND(fParam1))
		{
			ADD_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_115() //Position: 0x7AEE / 31470
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_9())
	{
		Function_120(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_120(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_116(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_116(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_85(StackVal, Var0))
	{
		Var0 = Global_54078;
		Var0.f_4 = (StackVal + 0,5f);
		FIND_GROUND_INTERSECTION(&Var0, 100.0f, &Global_53524, &uVar2);
	}
	else
	{
		Global_53524 = Var0;
	}
	Global_53524.f_208 = Global_53524.f_12;
	(&Global_53524 + 196) = Global_53524;
	Global_53524.f_212 = Global_53524.f_16;
	Global_53524.f_28 = 0;
	Global_53524.f_36 = 0;
	Global_53524.f_40 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_140631 = 1;
	return;
}

struct<8> Function_116(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x7BA5 / 31653
{
	int iVar0;
	
	iVar0 = Function_118(&uParam2, &uParam3);
	if (Function_117(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_190(&Global_99144, 1);
			Function_64(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_190(&Global_99144, 2);
			Function_64(&Global_99144, 1);
			if ((iVar0 != 13 || iVar0 != 14) || iVar0 != 4)
			{
				uParam1 = 0;
			}
			else
			{
				uParam1 = 1;
			}
		}
		if (iVar0 == 1)
		{
			uParam0 = 89,88f;
			return StackVal, Vector(-2158,348f, 19,944f, 2597,452f);
		}
		uParam0 = Global_26200[iVar014].f_12;
		return StackVal, Global_26200[iVar014];
	}
	if (Global_26651)
	{
		Function_190(&Global_99144, 2);
		Function_64(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_188();
	return StackVal, Function_188();
}

bool Function_117(int iParam0) //Position: 0x7C9D / 31901
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_118(bool bParam0, bool bParam1) //Position: 0x7CB3 / 31923
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = 4294967295;
	fVar1 = 1E+09.0f;
	iVar3 = 0;
	while (iVar3 <= Global_26200)
	{
		if (((Global_26200[iVar314].f_40 != 3 || Global_26200[iVar314].f_40 != 4) || (iVar3 != 15 && !&bParam0)) && (Global_26200[iVar314].f_52 != Global_43787 || bParam1))
		{
			if (Global_6606 || iVar3 == 6)
			{
				fVar2 = Function_119(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
				if (fVar2 > fVar1)
				{
					fVar1 = fVar2;
					iVar0 = iVar3;
				}
			}
		}
		iVar3++;
	}
	if (Global_26651)
	{
		fVar2 = Function_119(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_117(iVar0) && !&bParam1)
	{
		iVar0 = Function_118(&bParam0, 1);
	}
	return iVar0;
}

float Function_119(struct<2> Param0, struct<2> Param2) //Position: 0x7D7F / 32127
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_120(float fParam0, int iParam1) //Position: 0x7D9C / 32156
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_122(&Global_54076, &Var3);
	if (!Function_121(Global_46760[0]))
	{
		Var5 = Vector(-2158,996f, 19,93287f, 2597,94f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_121(Global_46760[2]))
	{
		Var5 = Vector(-2424,093f, 26,36347f, 2122,362f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -130,87f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_121(Global_46760[1]))
	{
		Var5 = Vector(-3242,193f, 19,4623f, 2725,147f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_121(Global_46796[1]))
	{
		Var5 = Vector(-3658,131f, 42,81397f, 2092,973f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -135,09f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_121(Global_46796[3]))
	{
		Var5 = Vector(-4454,145f, 9,204829f, 3220,642f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 206,26f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_121(Global_46796[2]))
	{
		GET_VOLUME_CENTER(&Global_44085[Global_46796[2]9] + 8, &Var5);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 0.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_121(Global_46796[4]))
	{
		Var5 = Vector(-3669,226f, 8,477426f, 3491,648f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 106,17f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_121(Global_46816[0]))
	{
		Var5 = Vector(-821,1879f, 93,8091f, 2435,436f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 343,64f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_121(Global_46816[1]))
	{
		Var5 = Vector(124,6513f, 76,73672f, 2235,506f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 165,38f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_121(Global_46816[2]))
	{
		GET_VOLUME_CENTER(&Global_44085[Global_46816[2]9] + 8, &Var5);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 0.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_121(Global_46838[0]))
	{
		Var5 = Vector(-3195,612f, 41,29269f, 3752,929f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -97,3f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_121(Global_46850[0]))
	{
		Var5 = Vector(-4287,014f, 18,13315f, 4453,605f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -6,71f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_121(Global_46850[1]))
	{
		Var5 = Vector(-4708,083f, 3,172676f, 3968,105f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_121(Global_46850[2]))
	{
		Var5 = Vector(-3245,478f, 39,28797f, 4563,465f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_121(Global_46866[0]))
	{
		Var5 = Vector(-2687,509f, 31,4827f, 4295,249f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_121(Global_46866[1]))
	{
		Var5 = Vector(-1719,171f, 11,29226f, 4214,298f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -180.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_121(Global_46866[2]))
	{
		Var5 = Vector(-1462,607f, 16,54457f, 3952,801f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 22,55f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_121(Global_46894[2]))
	{
		Var5 = Vector(-819,4399f, 13,11084f, 3712,137f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -135.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_121(Global_46894[3]))
	{
		Var5 = Vector(343,2535f, 79,47575f, 3448,062f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -104,45f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_121(Global_46894[0]))
	{
		Var5 = Vector(-465,2258f, 20,61027f, 3913,855f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_121(Global_46914[0]))
	{
		Var5 = Vector(757,22f, 86,90343f, 1271,724f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 270.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_121(Global_46926[2]))
	{
		Var5 = Vector(-298,7082f, 84,35147f, 2134,708f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 59,3f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_121(Global_46926[1]))
	{
		Var5 = Vector(-448,9981f, 153,3878f, 1631,183f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 20,74f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_121(Global_46926[0]))
	{
		Var5 = Vector(-884,3423f, 202,5276f, 1006,602f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 94,65f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_121(Global_46838[1]))
	{
		Var5 = Vector(-2679,319f, 71,65485f, 3424,564f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -135.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_121(Global_46894[1]))
	{
		Var5 = Vector(-720,3301f, 67,5125f, 3293,269f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -39,9f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	Var5 = Vector(-63,861f, 116,861f, 1414,684f);
	bVar7 = VDIST(Var3, Var5);
	if (bVar7 > bVar0)
	{
		bVar0 = bVar7;
		Var1 = Var5;
	}
	Function_190(&Global_99144, 2);
	Function_64(&Global_99144, 1);
	iParam1 = 0;
	if (Function_85(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_121(int iParam0) //Position: 0x85CA / 34250
{
	bool bVar0;
	
	bVar0 = Global_43791[iParam0];
	return (((Function_10(bVar0, 0x1000000) || Function_10(bVar0, 0x2000000)) || Function_10(bVar0, 0x4000000)) || !Function_10(bVar0, 0x10000000));
}

void Function_122(var uParam0, int iParam1) //Position: 0x8605 / 34309
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

bool Function_123(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x8614 / 34324
{
	uParam0 = &uParam0;
	if (Global_6623 && !&iParam1 != 1)
	{
		return 1;
	}
	if (Global_6625 && !&iParam1 != 2)
	{
		return 1;
	}
	if (Global_6635 && !&iParam1 != 6)
	{
		return 1;
	}
	if (Global_6627 && !&iParam1 != 4)
	{
		return 1;
	}
	if (Global_6636 && uParam2)
	{
		return 1;
	}
	if (Global_6638 || Global_6639)
	{
		return 1;
	}
	if (Global_6628 && !&iParam1 != 3)
	{
		return 1;
	}
	if (Global_93258 && uParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

bool Function_124(bool bParam0, int iParam1) //Position: 0x86C3 / 34499
{
	int iVar0;
	
	if (!Function_128(bParam0))
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

void Function_125(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x8722 / 34594
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_8(Global_10966) };
		}
		PRINT_HELP_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5, &Var0, &uParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5, &uVar4, &uParam6);
	}
}

void Function_126(int iParam0, int iParam1) //Position: 0x87AD / 34733
{
	if (!Function_128(iParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[iParam09].f_8 = (StackVal || iParam1);
	return;
}

bool Function_127(int iParam0, int iParam1) //Position: 0x8802 / 34818
{
	int iVar0;
	
	if (!Function_128(iParam0))
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

bool Function_128(int iParam0) //Position: 0x882F / 34863
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_129() //Position: 0x8845 / 34885
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_10(GET_GAME_EDITION(), 16);
	}
	return 0;
}

bool Function_130(bool bParam0) //Position: 0x8875 / 34933
{
	if (bParam0 > 0 && bParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[bParam0];
}

bool Function_131(bool bParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, var uParam7, int iParam8, var uParam9, var uParam10, var uParam11, bool bParam12, bool bParam13, var uParam14, int iParam15, var uParam16, bool bParam17, var uParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, var uParam23, float fParam24) //Position: 0x8891 / 34961
{
	int iVar0;
	
	uParam9 = uParam9;
	uParam18 = &uParam18;
	bParam17 = &bParam17;
	if (!IS_ACTOR_VALID(&bParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&iParam1))
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
				uParam2 = Function_163(&bParam0, &Global_54076);
				AI_GOAL_LOOK_AT_ACTOR_NEW(&bParam0, &iParam1, -1.0f, 1);
				iParam8 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &uParam5, Function_276(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
				ATTACH_OBJECTS(StackVal, StackVal, &iParam8, &iParam1, Function_276(), Vector(0.0f, 0,5f, &uParam16), Vector(0.0f, 0.0f, 0.0f), 4294967295);
				if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &bParam0, 1.0f, &uParam14, 1, 1, 0) || Function_163(&Global_54076, &bParam0) > 2.0f)
				{
					TASK_FOLLOW_OBJECT_AT_DISTANCE(&bParam0, &iParam8, 1.0f, &iParam15);
					TASK_PRIORITY_SET(&bParam0, true);
				}
				uParam3 = 1;
			}
			break;
		
		case 0x00000001:
			if ((Function_163(&bParam0, &iParam1) - uParam2) < fParam6)
			{
				TASK_FLEE_ACTOR(&bParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
				return 0;
			}
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &bParam0, 1.0f, &uParam14, 1, 1, 0))
			{
				iVar0 = TASK_SEQUENCE_OPEN();
				TASK_FACE_ACTOR(0, &iParam1, 0, 3212836864);
				TASK_FACE_ACTOR(0, &iParam1, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bParam0, iVar0);
				TASK_SEQUENCE_RELEASE(iVar0, 1);
				TASK_PRIORITY_SET(&bParam0, true);
				uParam9 = 0;
				uParam3 = 4;
			}
			else if (!Function_161(&bParam0, 0))
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
			TASK_FACE_ACTOR(&bParam0, &iParam1, 1, 3212836864);
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
					Function_147(&bParam0, &Global_54076, "nThank_You", 0, 5, 60, 1, 1);
				}
				else
				{
					Function_147(&bParam0, &Global_54076, &bParam12, &bParam13, 5, 60, 1, 1);
				}
				uParam3 = 5;
				Function_273(&uParam4, 0.0f);
			}
			else if (!Function_161(&bParam0, 0))
			{
				return 0;
			}
			break;
		
		case 0x00000005:
			if (uParam23 && !Function_23(&bParam0))
			{
				if (&fParam24 != -1.0f)
				{
					if (!IS_AMBIENT_SPEECH_PLAYING(&bParam0))
					{
						RESET_ANIM_SET_FOR_ACTOR(&bParam0, 1);
						Function_132(&bParam0, 4, 0, 1);
					}
				}
				else if (Function_143(&uParam4, &fParam24))
				{
					RESET_ANIM_SET_FOR_ACTOR(&bParam0, 1);
					Function_132(&bParam0, 4, 0, 1);
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
							Function_147(&Global_54076, &bParam0, &bParam20, &bParam20, 5, 60, 1, 1);
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
			if (uParam23 && !Function_23(&bParam0))
			{
				if (Function_143(&uParam4, &fParam24))
				{
					RESET_ANIM_SET_FOR_ACTOR(&bParam0, 1);
					Function_132(&bParam0, 4, 0, 1);
				}
			}
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(&bParam0, &uParam11) && !IS_AMBIENT_SPEECH_PLAYING(&Global_54076))
			{
				RESET_ANIM_SET_FOR_ACTOR(&bParam0, 1);
				uParam7 = 1;
				if (&bParam17)
				{
					Function_132(&bParam0, 4, 0, &iParam15);
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

int Function_132(bool bParam0, int iParam1, int iParam2, int iParam3) //Position: 0x8CB6 / 36022
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
					Function_25(&uVar1, 0, 0, 0, 1);
				}
				bVar0++;
			}
		}
		Function_25(&bParam0, &iParam1, &iParam2, &iParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

void Function_133(float fParam0, struct<2> Param1, int iParam3, int iParam4, int iParam5, bool bParam6) //Position: 0x8DA4 / 36260
{
	if (!IS_OBJECTSET_VALID(&Global_43580 + 80))
	{
		(&Global_43580 + 80) = CREATE_OBJECTSET_IN_LAYOUT("trafficReleased", &Global_43578, 15, 1);
	}
	if (!IS_ACTOR_VALID(&fParam0))
	{
		return;
	}
	if (&iParam3 != 0)
	{
		DECOR_SET_INT(&fParam0, "overrideCurve", &iParam3);
	}
	if (!Function_85(StackVal, Param1))
	{
		DECOR_SET_VECTOR(&fParam0, "overrideDest", Param1);
	}
	if (&iParam4 != 0)
	{
		DECOR_SET_INT(&fParam0, "overrideSpeed", &iParam4);
	}
	if (&iParam5 != 2)
	{
		DECOR_SET_INT(&fParam0, "overridePriority", &iParam5);
	}
	else
	{
		TASK_PRIORITY_SET(&fParam0, 2);
	}
	if (&bParam6)
	{
		DECOR_SET_INT(&fParam0, "quickRelease", &iParam5);
	}
	if (!IS_OBJECT_IN_OBJECTSET(&fParam0, &Global_43580 + 80))
	{
		ADD_OBJECT_TO_OBJECTSET(&fParam0, &Global_43580 + 80);
	}
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&fParam0, 1);
}

int Function_134(bool bParam0, bool bParam1) //Position: 0x8EC3 / 36547
{
	bool bVar0;
	int iVar1;
	
	if (IS_ACTOR_VALID(&bParam1))
	{
		bVar0 = GET_MOUNT(&bParam1);
	}
	if ((Function_161(&bParam1, 0) && Function_161(&bVar0, 0)) && Function_161(&bParam0, 0))
	{
		if (bLocal_44)
		{
			REMOVE_ACTOR_STAY_WITHIN_VOLUME(&bParam1, &uLocal_147);
		}
		iVar1 = TASK_SEQUENCE_OPEN();
		TASK_GO_NEAR_ACTOR(0, &bParam0, 6.0f, 2);
		TASK_STAND_STILL(0, -1.0f, 0, 0);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(&bParam1, iVar1);
		TASK_SEQUENCE_RELEASE(iVar1, 1);
		TASK_PRIORITY_SET(&bParam1, true);
		if (bLocal_62)
		{
			SET_ANIM_SET_FOR_ACTOR(&bParam0, "gent_ride_passenger", 0);
		}
		else
		{
			SET_ANIM_SET_FOR_ACTOR(&bParam0, "fema_ride_passenger", 0);
		}
		SET_MOUNTS_AS_PASSENGER(&bParam0, 1);
		TASK_MOUNT(&bParam0, &bVar0, 0, 1, 2, 2147483647);
		return 1;
	}
	if (Function_161(&bParam0, 0))
	{
		TASK_FLEE_ACTOR(&bParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
		if (Function_161(&bParam1, 0))
		{
			TASK_FOLLOW_ACTOR(&bParam1, &bParam0);
		}
	}
	return 0;
}

bool Function_135(bool bParam0, bool bParam1, int[] iParam2, struct<2> Param3, bool bParam5) //Position: 0x8FBB / 36795
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	if (IS_ACTOR_VALID(&bParam1))
	{
		iVar2 = GET_MOUNT(&bParam1);
	}
	if (GET_TASK_STATUS(&bParam0, 11) != 0 && GET_MOUNT(&bParam0) != &iVar2)
	{
		TASK_FLEE_ACTOR(&bParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
		Function_137(&bParam0, 0, 1);
		if (Function_161(&bParam1, 0))
		{
			TASK_FLEE_ACTOR(&bParam1, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
			if (bLocal_44)
			{
				REMOVE_ACTOR_STAY_WITHIN_VOLUME(&bParam1, &uLocal_147);
				bLocal_44 = false;
			}
		}
	}
	else if (IS_ACTOR_VALID(&iVar2))
	{
		TASK_MOUNT(&bParam0, &iVar2, 0, 1, 2, 2147483647);
	}
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (Function_161(&(iParam2[iVar1]), 1))
		{
			bVar0 = true;
		}
		iVar1++;
	}
	if (!IS_ACTOR_ALIVE(&bParam0))
	{
		return 1;
	}
	if (!bVar0)
	{
		Function_153(&bParam0);
		Function_74(200, 1, 0);
		Function_35(50, 1, 0);
		Function_136(bParam5, 1, 1);
		Function_150(&iLocal_152, 3, 0, 4294967295, 4294967295);
		iLocal_56 = 1;
		return 1;
	}
	if (Function_16(StackVal, &bParam0, Param3) < 60.0f)
	{
		Function_153(&bParam0);
		Function_74(200, 1, 0);
		Function_35(50, 1, 0);
		Function_136(bParam5, 1, 1);
		iLocal_56 = 1;
		return 1;
	}
	return 0;
}

int Function_136(bool bParam0, bool bParam1, bool bParam2) //Position: 0x90EB / 37099
{
	bool bVar0;
	
	bVar0 = Function_71(0);
	if ((Function_71(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_45(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_71(0));
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_6627)
	{
		Function_45(597, bParam0, 0, 0);
	}
	if (&bParam2)
	{
		if ((Function_71(597) + Function_71(450)) >= 10000)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
			{
				AWARD_ACHIEVEMENT(24);
			}
		}
	}
	return 1;
}

void Function_137(var uParam0, bool bParam1, bool bParam2) //Position: 0x91BD / 37309
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_IGNORE_ACTOR(&uParam0);
		if (FIRE_IS_ACTOR_ON_FIRE(&uParam0))
		{
			FIRE_STOP_ON_ACTOR(&uParam0);
		}
		SET_ACTOR_INVULNERABILITY(&uParam0, 1);
		CLEAR_ACTOR_MIN_SPEED(&uParam0);
		CLEAR_ACTOR_MAX_SPEED(&uParam0);
		TASK_OVERRIDE_CLEAR_MOVETYPE(&uParam0);
		RESET_ACTOR_GAITS(&uParam0, 0);
		if (IS_ACTOR_VALID(GET_MOUNT(&uParam0)))
		{
			RESET_ACTOR_GAITS(GET_MOUNT(&uParam0), 0);
		}
		if (&bParam2)
		{
			SET_ACTOR_CUTSCENE_MODE(&uParam0, 1);
		}
		SET_ACTOR_ALLOW_BUMP_REACTIONS(&uParam0, 0);
		AI_SET_NAV_PATHFINDING_ENABLED(&uParam0, 0);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&uParam0, 1);
	}
	else
	{
		AI_GOAL_LOOK_CLEAR(&uParam0);
		SET_ACTOR_INVULNERABILITY(&uParam0, 0);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(&uParam0, 1);
		AI_SET_NAV_PATHFINDING_ENABLED(&uParam0, 1);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&uParam0, 2);
		SET_ACTOR_CUTSCENE_MODE(&uParam0, 0);
	}
	return;
}

int Function_138(int[] iParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0x926D / 37485
{
	float fVar0;
	
	bParam1 = &bParam1;
	if (IS_ACTOR_VALID(&(iParam0[0])))
	{
	}
	switch (iLocal_101)
	{
		case 0x00000000:
			DECOR_SET_BOOL(&bParam2, "Buck_Off", 1);
			Function_139(&iLocal_134);
			iLocal_49 = 1;
			Function_273(&uLocal_102, 0.0f);
			uParam3 = 0;
			iLocal_101 = 1;
			break;
		
		case 0x00000001:
			uParam3 = 0;
			if (DECOR_GET_BOOL(&bParam2, "Buck_Complete") != 1 || Function_143(&uLocal_102, 4.0f))
			{
				if (!bLocal_139)
				{
					SET_ACTOR_HANGING_FROM_NOOSE(&bParam2, 1);
					DECOR_SET_FLOAT(&bParam2, "HangWritheIntensity", 1.0f);
				}
				TASK_FLEE_ACTOR(&bParam1, &bParam2, -1.0f, -1.0f, 0, 0, 0);
				TASK_PRIORITY_SET(&bParam1, true);
				Function_273(&uLocal_119, 0.0f);
				iLocal_101 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_143(&uLocal_119, 5.0f) && !iLocal_39)
			{
				iLocal_39 = 1;
				fVar0 = GET_ACTOR_HEALTH(&bParam2);
				SET_ACTOR_HEALTH(&bParam2, (fVar0 / 2.0f));
			}
			if (Function_143(&uLocal_119, 10.0f))
			{
				if (!bLocal_139)
				{
					STOP_PED_SPEAKING(&bParam2, 1);
					KILL_ACTOR(&bParam2);
					iLocal_101 = 3;
				}
			}
			break;
		
		case 0x00000003:
			return 1;
			break;
	}
	return 0;
}

void Function_139(vector3 vParam0) //Position: 0x9396 / 37782
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

void Function_140(bool bParam0, int[] iParam1) //Position: 0x93AD / 37805
{
	int iVar0;
	
	if (!Function_161(&bParam0, 0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		if (Function_161(&(iParam1[iVar0]), 0))
		{
			if (Function_163(&bParam0, &(iParam1[iVar0])) > 35.0f)
			{
				Function_149(&(iParam1[iVar0]), &bParam0);
				Function_149(&bParam0, &(iParam1[iVar0]));
				return;
			}
		}
		iVar0++;
	}
	return;
}

void Function_141(bool bParam0) //Position: 0x941B / 37915
{
	Global_26652[bParam04].f_20++;
	if (Global_26652[bParam04].f_20 == 1)
	{
		Function_45(409, 1, 0, 0);
	}
	return;
}

void Function_142(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x944C / 37964
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
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_8(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&uParam0, &iParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&uParam0, &iParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

bool Function_143(var uParam0, float fParam1) //Position: 0x94E1 / 38113
{
	if (Function_146(&uParam0))
	{
		if (Function_144(&uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_144(vector3 vParam0) //Position: 0x94FF / 38143
{
	if (Function_146(&vParam0))
	{
		if (Function_145(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_145(int iParam0) //Position: 0x95CC / 38348
{
	return Function_10(iParam0, 2);
}

bool Function_146(bool bParam0) //Position: 0x95DA / 38362
{
	return Function_10(bParam0, 1);
}

void Function_147(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x95E8 / 38376
{
	bParam1 = &bParam1;
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (IS_ACTOR_ALIVE(&bParam0) && Function_163(&bParam0, &Global_54076) >= IntToFloat(&iParam5))
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
					if (!SAY_SINGLE_LINE_STRING_BEAT(&bParam0, &bParam2, &bParam1, 1, 1, &iParam4, &iParam7, 0, 0, 1))
					{
						bParam3 = &bParam3;
					}
				}
				else if (!SAY_SINGLE_LINE_STRING_BEAT(&bParam0, &bParam2, &bParam1, 1, 1, &iParam4, &iParam7, 0, 1, 1))
				{
					bParam3 = &bParam3;
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING(&bParam0, &bParam2, true, true, &iParam4, 0, false, true);
			}
		}
	}
}

bool Function_148(int iParam0, int iParam1, var uParam2, var uParam3, float fParam4, var uParam5, var uParam6, var uParam7, var uParam8, float fParam9, bool bParam10, var uParam11, var uParam12, float fParam13, bool bParam14, var uParam15) //Position: 0x9695 / 38549
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
		else if (Function_163(&iParam0, &iParam1) > &fParam13)
		{
			uParam8 = 1;
			Function_147(&iParam0, &Global_54076, &bParam14, &bParam14, 5, 60, 1, &uParam15);
			Function_273(&uParam7, 0.0f);
		}
	}
	switch (uParam2)
	{
		case 0x00000000:
			SET_ACTOR_UPDATE_PRIORITY(&iParam0, false);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(&iParam0, 0);
			fLocal_26 = Function_163(&iParam0, &Global_54076);
			AI_GOAL_LOOK_AT_ACTOR_NEW(&iParam0, &iParam1, -1.0f, 1);
			uParam6 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &uParam3, Function_276(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
			ATTACH_OBJECTS(StackVal, StackVal, &uParam6, &iParam1, Function_276(), Vector(0.0f, 0,5f, &uParam12), Vector(0.0f, 0.0f, 0.0f), 4294967295);
			TASK_FOLLOW_OBJECT_AT_DISTANCE(&iParam0, &uParam6, 1.0f, &uParam11);
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
			if ((Function_163(&iParam0, &iParam1) - fLocal_26) < fParam4)
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
			if (!Function_161(&iParam0, 0))
			{
				return 0;
			}
			break;
	}
	return 1;
}

int Function_149(int iParam0, int iParam1) //Position: 0x9855 / 38997
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

void Function_150(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x994B / 39243
{
	if (iParam0 != iParam1)
	{
		iParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_151(iParam0), &iParam2, &iParam3, &iParam4);
	}
}

var Function_151(int iParam0) //Position: 0x9975 / 39285
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

void Function_152(int iParam0) //Position: 0x9ECA / 40650
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

int Function_153(bool bParam0) //Position: 0x9F1D / 40733
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		Function_154(&bParam0);
		return 1;
	}
	return 0;
}

void Function_154(bool bParam0) //Position: 0x9F35 / 40757
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(&bParam0))
	{
		bVar0 = GET_BLIP_ON_ACTOR(&bParam0);
		while (IS_BLIP_VALID(&bVar0))
		{
			REMOVE_BLIP(&bVar0);
			bVar0 = GET_BLIP_ON_ACTOR(&bParam0);
		}
	}
	return;
}

bool Function_155(int iParam0, var uParam1, float fParam2, int iParam3, bool bParam4, float fParam5) //Position: 0x9F68 / 40808
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
		fVar0 = Function_163(&iParam0, &Global_54076);
		if (!Function_10(&iParam3, 8))
		{
			if (GET_LAST_ATTACKER(&iParam0) == &Global_54076)
			{
				uParam1 = 8;
				Function_156(&iParam0);
				return 1;
			}
		}
		if (!Function_10(&iParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(&iParam0, 1.0f))
			{
				uParam1 = 2;
				Function_156(&iParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(&iParam0, 1.0f, 1.0f))
			{
				uParam1 = 2;
				Function_156(&iParam0);
				return 1;
			}
		}
		if (!Function_10(&iParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(&iParam0) || (((GET_ACTOR_UNDER_RETICLE(&Global_54076, 0) != &iParam0 && IS_PLAYER_WEAPON_ZOOMED(&Global_54076)) && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(&Global_54076) != &iParam0 && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f))
			{
				if (fParam2 > 0.0f)
				{
					uParam1 = 4;
					Function_156(&iParam0);
					return 1;
				}
				if (fParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - fParam2) < 1,3f)
					{
						uParam1 = 4;
						Function_156(&iParam0);
						return 1;
					}
				}
				fParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_10(&iParam3, 1))
		{
			if (Global_6646 || Global_6647)
			{
				uParam1 = 1;
				Function_156(&iParam0);
				return 1;
			}
		}
		if (!Function_10(&iParam3, 16))
		{
			if (UNK_0x7F454A92(&iParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(&iParam0)) > 2.0f && fVar0 > 18.0f)
				{
					uParam1 = 16;
					Function_156(&iParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_156(int iParam0) //Position: 0xA131 / 41265
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&iParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(&iParam0, 1);
	UNK_0x99AFD2D1(&iParam0, 0, 0);
	Function_157(&iParam0);
	MEMORY_CONSIDER_AS(&Global_54076, &iParam0, 2);
	MEMORY_CONSIDER_AS(&iParam0, &Global_54076, 2);
	AI_GOAL_LOOK_CLEAR(&iParam0);
	return;
}

void Function_157(bool bParam0) //Position: 0xA16E / 41326
{
	SAY_SINGLE_LINE_CONTEXT(&bParam0, 60, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

int Function_158(var[] uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, var uParam7) //Position: 0xA187 / 41351
{
	int iVar0;
	
	uParam7 = &uParam7;
	if (!&bParam6)
	{
		iVar0 = 0;
		while (iVar0 <= iParam1)
		{
			if (Function_155(&(uParam0[iVar0]), &uParam3, &uParam4, &uParam5, &bParam6, 0x40400000))
			{
				uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void Function_159(var uParam0, bool bParam1, bool bParam2) //Position: 0xA1D9 / 41433
{
	if (bParam1)
	{
		HUD_CLEAR_HELP_QUEUE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
		Function_142(&uParam0, 0x40f00000, 1, 2, 0, 0, 0, 0);
		if (&bParam2)
		{
			Function_160();
		}
	}
	return;
}

void Function_160() //Position: 0xA204 / 41476
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

bool Function_161(bool bParam0, bool bParam1) //Position: 0xA28D / 41613
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
			Function_153(&bParam0);
			return 0;
		}
		if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&bParam0), 163840))
		{
			Function_153(&bParam0);
			return 0;
		}
	}
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (Function_162(&bParam0, 0) && !AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&bParam0), 16384))
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

int Function_162(int iParam0, int iParam1) //Position: 0xA338 / 41784
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

float Function_163(int iParam0, int iParam1) //Position: 0xA38A / 41866
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

void Function_164(int iParam0, var[] uParam1) //Position: 0xA47F / 42111
{
	int iVar0;
	
	AI_CLEAR_DONT_HARM_ACTOR(&iParam0);
	iVar0 = 0;
	while (iVar0 <= uParam1)
	{
		AI_CLEAR_DONT_HARM_ACTOR(&(uParam1[iVar0]));
		iVar0++;
	}
	return;
}

void Function_165() //Position: 0xA4AC / 42156
{
	int iVar0;
	
	bLocal_151 = true;
	if (Global_43787 == 0)
	{
		iVar0 = Function_166(4);
		if (iVar0 == 0)
		{
			iLocal_149 = "FTR_SONG_05";
		}
		else if (iVar0 == 1)
		{
			iLocal_149 = "FTR_SONG_06";
		}
		else if (iVar0 == 2)
		{
			iLocal_149 = "FTR_SONG_07";
		}
		else
		{
			iVar0 = 3;
			iLocal_149 = "FTR_SONG_09";
		}
	}
	else if (Global_43787 == 2)
	{
		iLocal_149 = "NRT_SONG_05";
	}
	AUDIO_MUSIC_FORCE_TRACK(&iLocal_149, "DRAMATIC_LOW", 0.0f, 100, 4294967295, 3212836864, 0);
	iLocal_152 = 11;
	return;
}

var Function_166(bool bParam0) //Position: 0xA562 / 42338
{
	bParam0 = (bParam0 * 1000 - 1);
	return (RAND_INT_RANGE(0, bParam0) / 1000);
}

bool Function_167(var[] uParam0, int iParam1, bool bParam2) //Position: 0xA57B / 42363
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		if (IS_ACTOR_VALID(&(uParam0[iVar0])))
		{
			if (Function_163(&(uParam0[iVar0]), &Global_54076) > bParam2)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_168(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0xA5BA / 42426
{
	if (StackVal & 64 == 64)
	{
		if (!uParam2)
		{
			if (IS_ACTOR_VALID(&uParam1))
			{
				if (Function_163(&Global_54076, &uParam1) > 15.0f)
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
		if (Function_171() && !uParam2)
		{
			return 0;
		}
		if (Function_170(iParam0) && !uParam2)
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
		if (!Function_169(iParam0, &uParam5))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_169(int iParam0, int iParam1) //Position: 0xA6FD / 42749
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

int Function_170(int iParam0) //Position: 0xA71E / 42782
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

int Function_171() //Position: 0xA75E / 42846
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
						if (Function_172(&Global_54076, &Global_39621[iVar05] + 16) > IntToFloat(iVar1))
						{
							return 1;
						}
					}
				}
			}
			if (Function_172(&Global_54076, &Global_39621[iVar05] + 16) > IntToFloat(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

float Function_172(int iParam0, var uParam1) //Position: 0xA821 / 43041
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			Function_17(&iParam0);
			Var0 = Function_17(&iParam0);
			Function_173(&uParam1);
			Var2 = Function_173(&uParam1);
			return VDIST(Var0, Var2);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

struct<8> Function_173(int iParam0) //Position: 0xA8C3 / 43203
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

void Function_174(var[] uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6) //Position: 0xA931 / 43313
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
			Function_186(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_185(0);
		}
		if (&bParam6)
		{
			Function_183(0, GET_THIS_SCRIPT_ID());
			Global_6615 = GET_THIS_SCRIPT_ID();
			Global_6644 = 1;
			Function_181(iParam3);
		}
		Function_179(iParam3);
		if (Function_178(StackVal, 32768))
		{
			Function_175(1);
		}
		Global_26652[iParam34].f_16++;
		Function_45(408, 1, 0, 0);
	}
}

void Function_175(bool bParam0) //Position: 0xAA2A / 43562
{
	if (bParam0)
	{
		Function_177(0x10000000);
	}
	else
	{
		Function_176(0x10000000);
	}
	Global_39922.f_304 = 0;
	return;
}

void Function_176(int iParam0) //Position: 0xAA4F / 43599
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_177(int iParam0) //Position: 0xAA6C / 43628
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

bool Function_178(var uParam0, int iParam1) //Position: 0xAA7F / 43647
{
	return (uParam0 && iParam1) == 0;
}

void Function_179(int iParam0) //Position: 0xAA8C / 43660
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (!Function_10(StackVal, 524288))
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
			bVar1 = Function_180(iVar0 * 60);
			ADD_TIME(&Global_27462[iParam052] + 376, 0, 0, bVar1, 0);
			Global_26652[iParam04] = &Global_27462[iParam052] + 376;
		}
	}
	return;
}

int Function_180(int iParam0) //Position: 0xAB32 / 43826
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_181(int iParam0) //Position: 0xAB49 / 43849
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
	Function_182(&Var0 + 80[Var0.f_762], &(Global_26652[iParam04]), iParam0);
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

void Function_182(vector3 vParam0) //Position: 0xABE8 / 44008
{
	vParam0.y = iParam2;
	vParam0 = Param1.f_16;
	vParam0.f_8 = 1;
	return;
}

void Function_183(int iParam0, bool bParam1) //Position: 0xAC04 / 44036
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
			Function_184(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_184(struct<113> Param0) //Position: 0xAC8B / 44171
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

void Function_185(int iParam0) //Position: 0xACE9 / 44265
{
	*(&Global_21369 + 136) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 136, 0, 0, (&iParam0 + Function_180(900)), 0);
	return;
}

void Function_186(bool bParam0) //Position: 0xAD0D / 44301
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, (&bParam0 + Function_180(200)), 0);
	return;
}

void Function_187(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7) //Position: 0xAD30 / 44336
{
	int iVar0;
	
	iVar0 = 0;
	if (!iParam2)
	{
		iVar0 = 1;
	}
	if (IS_ACTOR_VALID(&iParam4))
	{
		if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &iParam4, 1.0f, &iParam6, 1, 1, 0))
		{
			if (&iParam5 != 0)
			{
				Global_38378 = (GET_CURRENT_GAME_TIME() + IntToFloat(&iParam5));
			}
			iParam2 = 1;
		}
	}
	else if (!Function_85(StackVal, Param0))
	{
		if (CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), Param0, 1.0f, &iParam6, 1, 1, 0))
		{
			if (&iParam5 != 0)
			{
				Global_38378 = (GET_CURRENT_GAME_TIME() + IntToFloat(&iParam5));
			}
			iParam2 = 1;
		}
	}
	if (iParam2 && iVar0)
	{
		if (StackVal & 64 == 64)
		{
			Function_186(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_185(0);
		}
		if (&bParam7)
		{
			Function_183(0, GET_THIS_SCRIPT_ID());
			Global_6615 = GET_THIS_SCRIPT_ID();
			Function_181(iParam3);
			Global_6644 = 1;
		}
		Function_179(iParam3);
		if (Function_178(StackVal, 32768))
		{
			Function_175(1);
		}
		Global_26652[iParam34].f_16++;
		Function_45(408, 1, 0, 0);
	}
}

struct<8> Function_188() //Position: 0xAE45 / 44613
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

bool Function_189(var uParam0, int iParam1) //Position: 0xAE4F / 44623
{
	if (Function_143(&uParam0, iParam1))
	{
		Function_139(&uParam0);
		return 1;
	}
	return 0;
}

void Function_190(var uParam0, bool bParam1) //Position: 0xAE69 / 44649
{
	uParam0 = (uParam0 || bParam1);
	return;
}

void Function_191(var uParam0, var uParam1, var uParam2, float fParam3, struct<2> Param4) //Position: 0xAE7A / 44666
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
		if (Function_192(StackVal, &Global_46715, "player_herb", &uVar0, 20.0f, 5, Param4) >= 0)
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

int Function_192(char* cParam0, var uParam1, char*[] cParam2, float fParam3, int iParam4, struct<2> Param5) //Position: 0xAF25 / 44837
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

void Function_193(float fParam0, float fParam1, int iParam2, var uParam3) //Position: 0xAFCB / 45003
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (bLocal_62)
	{
		Local_68 = Vector(-0,008f, 0,036f, -0,008f);
		Local_71 = Vector(-3,046f, 4,262f, 13,672f);
	}
	else
	{
		Local_68 = Vector(0,01f, 0,034f, 0,003f);
		Local_71 = Vector(-1,221f, 63,601f, -14,377f);
	}
	Function_196(&iParam2);
	Local_110 = Function_196(&iParam2);
	fVar0 = Function_195(&uParam3);
	fVar1 = 0,3f;
	fVar2 = 1,5f;
	fLocal_126 = ((fVar0 - fVar2) - fVar1);
	fVar3 = (fLocal_126 * 0,9f);
	if (bLocal_62)
	{
		uLocal_141 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &fParam1, "noTheNoose", "p_gen_noose03x", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	}
	else
	{
		uLocal_141 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &fParam1, "noTheNoose", "p_gen_noose03x", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	}
	SET_OBJECT_COLLIDE_WITH_OBJECT(&uLocal_141, &fParam0, 0);
	SET_OBJECT_COLLIDE_WITH_OBJECT(&fParam0, &uLocal_141, 0);
	SET_OBJECT_COLLIDE_WITH_OBJECT(&fParam0, &uLocal_143, 0);
	SET_OBJECT_COLLIDE_WITH_OBJECT(&uLocal_143, &fParam0, 0);
	ATTACH_OBJECTS(&uLocal_141, &fParam0, "neck", Local_68, Local_71, 4294967295);
	uLocal_143 = CREATE_LEASH_OBJECT(&fParam0, "theNoose", 10.0f, 5, 1, 0,006f, 10.0f, 10000.0f, 200.0f, 8.0f, 100.0f, 1.0f, 1, 0, 0);
	LEASH_ATTACH_TO_OBJECT_BONE(StackVal, StackVal, &uLocal_143, &fParam0, "neck", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0, 1, 1);
	Function_194(&fParam0, &uLocal_143, &uLocal_141);
	LEASH_STAY_CONSTRAINED(&uLocal_143, 1);
	LEASH_ATTACH_TO_WORLD(StackVal, &uLocal_143, Local_110, Vector(0.0f, 0.0f, 0.0f), 1);
	while (!LEASH_CONSTRAIN(&uLocal_143) && !IS_EXITFLAG_SET())
	{
	}
	LEASH_SET_CONSTRAINT_LENGTH(&uLocal_143, fLocal_126);
	LEASH_SET_LEASH_LENGTH(&uLocal_143, fVar3);
	SET_ACTOR_CUTSCENE_MODE(&fParam0, 1);
}

void Function_194(float fParam0, float fParam1, int iParam2) //Position: 0xB1AA / 45482
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_MALE(&fParam0))
	{
		Local_68 = Vector(-0,008f, 0,036f, -0,008f);
		Local_71 = Vector(-3,046f, 4,262f, 13,672f);
	}
	else
	{
		Local_68 = Vector(0,01f, 0,034f, 0,003f);
		Local_71 = Vector(-1,221f, 63,601f, -14,377f);
	}
	GET_LOCATOR_OFFSETS(GET_PHYSINST_FROM_OBJECT(&iParam2), "attachRope", &Var0, &Var2);
	UNK_0xF76F2BB3(&Var0, &Local_71, 0, 0);
	UNK_0x65DAA654(&Var2, &Local_71, 0, 0, 0, 0);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(Local_68, Var0, StackVal);
	LEASH_ATTACH_TO_OBJECT_BONE_VISUAL(&fParam1, &fParam0, "neck", Var0, Var2, 0, 1, 1);
	return;
}

var Function_195(struct<2> Param0) //Position: 0xB25F / 45663
{
	if (Global_43788 == Global_46736[0])
	{
		if (VDIST(StackVal, Param0, Vector(-2511,156f, 25,09802f, 2779,65f)) > 1.0f)
		{
			return 3.0f;
		}
		if (VDIST(StackVal, Param0, Vector(-1920.0f, 31,28032f, 2261,344f)) > 1.0f)
		{
			return 3,5f;
		}
		if (VDIST(StackVal, Param0, Vector(-2925.0f, 18,63521f, 2669.0f)) > 1.0f)
		{
			return 3.0f;
		}
		if (VDIST(StackVal, Param0, Vector(-2107,098f, 18,16976f, 2014,983f)) > 1.0f)
		{
			return 3,4f;
		}
	}
	if (Global_43788 == Global_46736[1])
	{
		if (VDIST(StackVal, Param0, Vector(-3935,961f, 28,107f, 2635,271f)) > 1.0f)
		{
			return 3,6f;
		}
		if (VDIST(StackVal, Param0, Vector(-4424.0f, 25,73199f, 2967,308f)) > 1.0f)
		{
			return 3,4f;
		}
		if (VDIST(StackVal, Param0, Vector(-4064f, 9,035286f, 3491,478f)) > 1.0f)
		{
			return 3,3f;
		}
	}
	if (Global_43788 == Global_46736[2])
	{
		if (VDIST(StackVal, Param0, Vector(-1084f, 100,499f, 2904.0f)) > 1.0f)
		{
			return 3.0f;
		}
		if (VDIST(StackVal, Param0, Vector(-872,724f, 41,17292f, 3066,799f)) > 1.0f)
		{
			return 3.0f;
		}
		if (VDIST(StackVal, Param0, Vector(-113,557f, 101,4299f, 2772f)) > 1.0f)
		{
			return 3.0f;
		}
	}
	if (Global_43788 == Global_46736[3])
	{
		if (VDIST(StackVal, Param0, Vector(-3491,979f, 29,20257f, 3781,121f)) > 1.0f)
		{
			return 3.0f;
		}
		if (VDIST(StackVal, Param0, Vector(-3329,551f, 42,9619f, 3262,086f)) > 1.0f)
		{
			return 2,9f;
		}
		if (VDIST(StackVal, Param0, Vector(-2375,709f, 80,88108f, 3428,962f)) > 1.0f)
		{
			return 3.0f;
		}
	}
	if (Global_43788 == Global_46754[0])
	{
		if (VDIST(StackVal, Param0, Vector(278,2518f, 91,27737f, 923,1232f)) > 1.0f)
		{
			return 3.0f;
		}
		if (VDIST(StackVal, Param0, Vector(480,021f, 98,41798f, 1787,462f)) > 1.0f)
		{
			return 3.0f;
		}
		if (VDIST(StackVal, Param0, Vector(798,021f, 77,34565f, 1709,07f)) > 1.0f)
		{
			return 3.0f;
		}
	}
	if (Global_43788 == Global_46754[1])
	{
		if (VDIST(StackVal, Param0, Vector(-321.0f, 123,3054f, 1962.0f)) > 1.0f)
		{
			return 3,3f;
		}
		if (VDIST(StackVal, Param0, Vector(-683,979f, 152,1264f, 1858,651f)) > 1.0f)
		{
			return 3.0f;
		}
		if (VDIST(StackVal, Param0, Vector(-664,083f, 174,4142f, 1395,394f)) > 1.0f)
		{
			return 3.0f;
		}
	}
	LOG_ERROR("unrecognized tree location, using default");
	return 3.0f;
}

struct<8> Function_196(int iParam0) //Position: 0xB57C / 46460
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

int Function_197(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0xB5A5 / 46501
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

void Function_198(var uParam0, float fParam1, float fParam2, float fParam3) //Position: 0xB605 / 46597
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_ALIVE(&uParam0))
		{
			if (&fParam2 == -1.0f || &fParam3 == -1.0f)
			{
				COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&uParam0, &fParam2, &fParam3);
			}
			COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&uParam0, fParam1);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 53, 0.0f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 54, 0.0f);
		}
	}
}

var Function_199(var uParam0, var uParam1, bool bParam2, var uParam3, bool bParam4, struct<2> Param5, struct<2> Param7) //Position: 0xB656 / 46678
{
	var uVar0;
	var uVar1;
	
	if (!IS_LAYOUTREF_VALID(&uParam0))
	{
		LOG_ERROR("Layout is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_200(bParam2))
	{
		LOG_ERROR("riderTypeName is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_200(bParam4))
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

bool Function_200(int iParam0) //Position: 0xB78E / 46990
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_201(struct<2> Param0, struct<2> Param2) //Position: 0xB7A5 / 47013
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	VNORMALIZE(&Var0);
	return StackVal, Var0;
}

void Function_202() //Position: 0xB7C2 / 47042
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

bool Function_203(struct<2> Param0, float fParam2, float fParam3) //Position: 0xB7D4 / 47060
{
	var uVar0;
	var uVar1;
	char* cVar2[8];
	char* cVar4[24];
	char* cVar10[24];
	char* cVar16[24];
	char* cVar22[24];
	char* cVar28[24];
	
	strcpy(&cVar4, "hangingGuy_", 24);
	strcpy(&cVar10, "hangingGuard1_", 24);
	strcpy(&cVar16, "hangingGuard2_", 24);
	strcpy(&cVar22, "hangingGuard3_", 24);
	strcpy(&cVar28, "hangingHorses_", 24);
	uVar0 = Function_205(StackVal, &Global_46715, "hangingTree", Param0, fParam2);
	if (IS_OBJECT_VALID(&uVar0))
	{
		uVar1 = GET_OBJECT_NAME(&uVar0);
		Function_196(&uVar0);
		(&iParam1 + 72) = Function_196(&uVar0);
		STRING_CLEAR_TOKENIZER();
		SET_OWNERSHIP_STRAGGLER(&uVar1, "_");
		strcpy(&cVar2, STRING_GET_TOKEN(1), 8);
		if (Function_16(StackVal, &Global_54076, *(&iParam1 + 72)) < fParam3)
		{
			return 0;
		}
		*(&iParam1 + 96) = LOCATE_PHYSINST_OF_TYPE(*(&iParam1 + 72), 20.0f, "p_gen_hangLocator01x", 1);
		Function_204(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar4, *(&iParam1 + 72));
		iParam1 = Function_204(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar4, *(&iParam1 + 72));
		stradd(&cVar10, &cVar2, 24);
		Function_204(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar10, *(&iParam1 + 72));
		*(&iParam1 + 12) = Function_204(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar10, *(&iParam1 + 72));
		if (Function_85(StackVal, *(&iParam1 + 12)))
		{
			return 0;
		}
		stradd(&cVar16, &cVar2, 24);
		Function_204(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar16, *(&iParam1 + 72));
		*(&iParam1 + 24) = Function_204(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar16, *(&iParam1 + 72));
		if (Function_85(StackVal, *(&iParam1 + 24)))
		{
			return 0;
		}
		stradd(&cVar22, &cVar2, 24);
		Function_204(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar22, *(&iParam1 + 72));
		*(&iParam1 + 36) = Function_204(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar22, *(&iParam1 + 72));
		if (Function_85(StackVal, *(&iParam1 + 36)))
		{
			return 0;
		}
		stradd(&cVar28, &cVar2, 24);
		Function_204(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar28, *(&iParam1 + 72));
		*(&iParam1 + 48) = Function_204(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar28, *(&iParam1 + 72));
		if (Function_85(StackVal, *(&iParam1 + 48)))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

struct<8> Function_204(char* cParam0, char* cParam1, char* cParam2, char* cParam3, char* cParam4, char* cParam5, struct<2> Param6) //Position: 0xB9A0 / 47520
{
	int iVar0;
	
	iVar0 = Function_205(StackVal, &Global_46715, &cParam0, Param6, 0);
	if (IS_OBJECT_VALID(&iVar0))
	{
		Function_196(&iVar0);
		return StackVal, Function_196(&iVar0);
	}
	PRINTSTRING(&cParam0);
	LOG_ERROR("hanging event: Unable to find named flag");
	Function_188();
	return StackVal, Function_188();
}

var Function_205(var uParam0, var uParam1, struct<2> Param2, float fParam4) //Position: 0xBA04 / 47620
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
		ITERATE_ON_PARTIAL_NAME(&uVar6, &uParam1);
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

bool Function_206(struct<65> Param0) //Position: 0xBA99 / 47769
{
	struct<8> Var0;
	var uVar8;
	var uVar9;
	
	if (Global_6612 && Param0.f_40)
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_245(GET_SCRIPT_NAME()) };
		uVar8 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Vector(*(&Param0 + 16), Function_243(0.0f, &Global_54076, *(&Param0 + 16)), 0.0f), Vector(Param0.f_60, 20.0f, Param0.f_60));
		DECOR_SET_INT(&uVar8, "script", GET_THIS_SCRIPT_ID());
		if (Param0.f_64 != 4294967295)
		{
			DECOR_SET_INT(StackVal, &uVar8, "category");
			Function_241(&uVar8, Param0.f_40);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
		*(&Param0 + 16) = Global_54078;
		return 1;
	}
	uParam3 = 0;
	if (!Function_207(&Param0))
	{
		if (Param0.f_40 == 1)
		{
			if (uParam2 == 0)
			{
				Function_7("Still scanning for the proper terrain to run this event.  Move the player around to find a good spawn location.", -1.0f, 1, 2, 1, 0);
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
		Function_7("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 5.0f, 1, 2, 1, 0);
	}
	if (&bParam4)
	{
		if (!Function_5(Param0.f_64, 0, 1, 0, 0))
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
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_245("restrictVol") };
		uVar9 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Vector(*(&Param0 + 16), Function_243(0.0f, &Global_54076, *(&Param0 + 16)), 0.0f), Vector(Param0.f_60, 20.0f, Param0.f_60));
		DECOR_SET_INT(&uVar9, "script", GET_THIS_SCRIPT_ID());
		if (Param0.f_64 != 4294967295)
		{
			DECOR_SET_INT(StackVal, &uVar9, "category");
			Function_241(&uVar9, Param0.f_40);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
	}
	return 1;
}

bool Function_207(struct<73> Param0) //Position: 0xBE57 / 48727
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
			Function_240(&Param0 + 8);
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
				Var3 = Vector(0.0f, 0.0f, Function_14(1));
				ROTATE_VECTOR_XZ(&Var3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				Var3 = Vector(StackVal, StackVal, StackVal) + Vector(Var7, Var3, StackVal);
				ITERATE_IN_SPHERE(&Param0 + 8, Var3, Function_14(1));
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
						uVar0 = Function_239(StackVal, &Param0 + 8, Var7, 0,01f);
					}
					else
					{
						uVar0 = Function_238(StackVal, &Param0 + 8, Var7, 0,1f, "locflag", (&Param0 + 72 + 36)->f_24);
					}
				}
				else if ((&Param0 + 72 + 36)->f_24 == 0)
				{
					uVar0 = Function_236(StackVal, &Param0 + 8, Var7, Function_237());
				}
				else
				{
					uVar0 = Function_235(StackVal, &Param0 + 8, Var7, Function_237(), "locflag", (&Param0 + 72 + 36)->f_24);
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
			Function_240(&Param0 + 8);
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
					if (Function_234(bVar11))
					{
						if (StackVal == (&Param0 + 72)->f_68)
						{
							if ((StackVal && Global_43791[bVar11]) >= 0)
							{
								GET_OBJECT_POSITION(&uVar1, &Var3);
								if (VDIST(Var7, Var3) < fVar10 && VDIST(Var7, Var3) > Function_14(1))
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
				Function_233(&Param0 + 16, 99.0f, &Param0 + 16, 10);
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
				Function_232(&Var7, &uVar5);
				Var3 = Function_232(&Var7, &uVar5);
				if (!Function_85(StackVal, Var3))
				{
					PRINTSTRING("Player Pos: ");
					PRINTVECTOR(Var7);
					PRINTNL();
					Function_15(&fVar10, &fVar9);
					if (VDIST(Var3, Var7) < ((fVar10 + ((fVar9 - fVar10) / 2.0f)) * 0,8f))
					{
						iVar2 = Function_229(StackVal, &Param0, Var3);
					}
				}
			}
			else
			{
				iVar2 = Function_225(&Param0);
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
					if (!Function_224(StackVal, *(&Param0 + 16)))
					{
						return 0;
					}
				}
				if (Param0.f_68 == 1)
				{
					if (!Function_223(StackVal, *(&Param0 + 16)))
					{
						return 0;
					}
				}
				if (Function_10(StackVal, 131072))
				{
					if (StackVal || Function_222(Function_222(StackVal, *(&Param0 + 16)), Global_54078))
					{
						return 0;
					}
				}
				if (StackVal & 1024 == 1024)
				{
					if (Function_221(StackVal, *(&Param0 + 16)))
					{
						return 0;
					}
				}
				if (!Function_217(&Param0 + 16, &Param0 + 60, 0, Param0.f_40))
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
				uVar17 = START_CURVE_QUERY(&Global_43578, Var3, Function_216((&Param0 + 72)->f_148, 0), 0.0f, 20.0f, 5.0f, 0);
			}
			else
			{
				uVar17 = START_CURVE_QUERY(&Global_43578, Var7, Function_216((&Param0 + 72)->f_148, 0), 120.0f, 150.0f, 5.0f, 0);
			}
			if (GET_NUM_POINTS_IN_CURVE_QUERY(&uVar17) >= 0)
			{
				iVar15 = RAND_INT_RANGE(0, (GET_NUM_POINTS_IN_CURVE_QUERY(&uVar17) - 1));
				GET_POINT_FROM_CURVE_QUERY(&uVar17, iVar15, &Var12);
				Function_215(&Var12);
				*(&Param0 + 16) = Function_215(&Var12);
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
				if (!Function_224(StackVal, *(&Param0 + 16)))
				{
					return 0;
				}
			}
			if (Param0.f_68 == 1)
			{
				if (!Function_223(StackVal, *(&Param0 + 16)))
				{
					return 0;
				}
			}
			if (Param0.f_68 == 0)
			{
				if (!(StackVal || Function_224(Function_223(StackVal, *(&Param0 + 16)), *(&Param0 + 16))))
				{
					return 0;
				}
			}
			if (Function_10(StackVal, 131072))
			{
				if (StackVal || Function_222(Function_222(StackVal, *(&Param0 + 16)), Global_54078))
				{
					return 0;
				}
			}
			if (StackVal && !Function_217(&Param0 + 16, &Param0 + 60, 0, Param0.f_40) == 262144)
			{
				return 0;
			}
			break;
		
		case 0x00000004:
			if (!Function_212((&Param0 + 72)->f_148) < 0)
			{
				return 0;
			}
			break;
		
		case 0x00000007:
			switch ((&Param0 + 72)->f_156)
			{
				case 0x00000001:
					iVar18 = Function_209(StackVal, Global_43787, Global_43788, Global_43789, 1);
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
						iVar18 = Function_209(StackVal, Global_43787, Global_43788, (Global_43789 + iVar16), 1);
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
	if (Function_208(StackVal, *(&Param0 + 16)))
	{
		return 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(*(&Param0 + 16), 10.0f))
	{
		return 0;
	}
	return 1;
}

bool Function_208(struct<2> Param0) //Position: 0xC71F / 50975
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

int Function_209(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xC756 / 51030
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
								return Function_210(&Global_11014, &Global_12796, bParam3);
								break;
							
							case 0x00000001:
								return Function_210(&Global_11146, &Global_12992, bParam3);
								break;
							
							case 0x00000002:
								return Function_210(&Global_11120, &Global_12954, bParam3);
								break;
							
							default:
								return Function_210(&Global_11200, &Global_13072, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_210(&Global_11420, &Global_13398, bParam3);
								break;
							
							case 0x00000001:
								return Function_210(&Global_11222, &Global_13104, bParam3);
								break;
							
							case 0x00000003:
								return Function_210(&Global_11284, &Global_13196, bParam3);
								break;
							
							case 0x00000002:
								return Function_210(&Global_11398, &Global_13366, bParam3);
								break;
							
							case 0x00000004:
								return Function_210(&Global_11492, &Global_13504, bParam3);
								break;
							
							default:
								return Function_210(&Global_11482, &Global_13490, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_210(&Global_11544, &Global_13580, bParam3);
								break;
							
							case 0x00000001:
								return Function_210(&Global_11646, &Global_13732, bParam3);
								break;
							
							case 0x00000002:
								return Function_210(&Global_11704, &Global_13818, bParam3);
								break;
							
							default:
								return Function_210(&Global_11518, &Global_13542, bParam3);
								break;
						}
						break;
					
					case 0x00000003:
						switch (bVar1)
						{
							case 0x00000001:
								return Function_210(&Global_11752, &Global_13888, bParam3);
								break;
							
							default:
								return Function_210(&Global_11826, &Global_13998, bParam3);
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
								return Function_210(&Global_11836, &Global_14012, bParam3);
								break;
							
							case 0x00000001:
								return Function_210(&Global_11946, &Global_14176, bParam3);
								break;
							
							case 0x00000002:
								return Function_210(&Global_11988, &Global_14238, bParam3);
								break;
							
							default:
								return Function_210(&Global_12038, &Global_14312, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_210(&Global_12048, &Global_14326, bParam3);
								break;
							
							default:
								return Function_210(&Global_12274, &Global_14662, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000002:
								return Function_210(&Global_12284, &Global_14676, bParam3);
								break;
							
							case 0x00000001:
								return Function_210(&Global_12342, &Global_14762, bParam3);
								break;
							
							case 0x00000003:
								return Function_210(&Global_12392, &Global_14836, bParam3);
								break;
							
							default:
								return Function_210(&Global_12472, &Global_14954, bParam3);
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
		return Function_210(&Global_11014, &Global_12796, bParam3);
	}
	if (bVar1 == Global_46760[1])
	{
		return Function_210(&Global_11146, &Global_12992, bParam3);
	}
	if (bVar1 == Global_46760[2])
	{
		return Function_210(&Global_11120, &Global_12954, bParam3);
	}
	if (bVar1 == Global_46796[0])
	{
		return Function_210(&Global_11420, &Global_13398, bParam3);
	}
	if (bVar1 == Global_46796[1])
	{
		return Function_210(&Global_11222, &Global_13104, bParam3);
	}
	if (bVar1 == Global_46796[3])
	{
		return Function_210(&Global_11284, &Global_13196, bParam3);
	}
	if (bVar1 == Global_46796[2])
	{
		return Function_210(&Global_11398, &Global_13366, bParam3);
	}
	if (bVar1 == Global_46796[4])
	{
		return Function_210(&Global_11492, &Global_13504, bParam3);
	}
	if (bVar1 == Global_46816[0])
	{
		return Function_210(&Global_11544, &Global_13580, bParam3);
	}
	if (bVar1 == Global_46816[1])
	{
		return Function_210(&Global_11646, &Global_13732, bParam3);
	}
	if (bVar1 == Global_46816[2])
	{
		return Function_210(&Global_11704, &Global_13818, bParam3);
	}
	if (bVar1 == Global_46838[1])
	{
		return Function_210(&Global_11752, &Global_13888, bParam3);
	}
	if (bVar1 == Global_46850[0])
	{
		return Function_210(&Global_11836, &Global_14012, bParam3);
	}
	if (bVar1 == Global_46850[1])
	{
		return Function_210(&Global_11946, &Global_14176, bParam3);
	}
	if (bVar1 == Global_46850[2])
	{
		return Function_210(&Global_11988, &Global_14238, bParam3);
	}
	if (bVar1 == Global_46866[0])
	{
		return Function_210(&Global_12048, &Global_14326, bParam3);
	}
	if (bVar1 == Global_46894[2])
	{
		return Function_210(&Global_12284, &Global_14676, bParam3);
	}
	if (bVar1 == Global_46894[1])
	{
		return Function_210(&Global_12342, &Global_14762, bParam3);
	}
	if (bVar1 == Global_46894[3])
	{
		return Function_210(&Global_12392, &Global_14836, bParam3);
	}
	if (bVar1 == Global_46736[0])
	{
		return Function_210(&Global_11200, &Global_13072, bParam3);
	}
	if (bVar1 == Global_46736[1])
	{
		return Function_210(&Global_11482, &Global_13490, bParam3);
	}
	if (bVar1 == Global_46736[2])
	{
		return Function_210(&Global_11518, &Global_13542, bParam3);
	}
	if (bVar1 == Global_46736[3])
	{
		return Function_210(&Global_11826, &Global_13998, bParam3);
	}
	if (bVar1 == Global_46746[0])
	{
		return Function_210(&Global_12038, &Global_14312, bParam3);
	}
	if (bVar1 == Global_46746[2])
	{
		return Function_210(&Global_12274, &Global_14662, bParam3);
	}
	if (bVar1 == Global_46746[1])
	{
		return Function_210(&Global_12472, &Global_14954, bParam3);
	}
	return "";
}

var Function_210(struct<2>[] Param0, vector3[] vParam1, bool bParam2) //Position: 0xCD6C / 52588
{
	int iVar0;
	
	iVar0 = bParam2;
	if (iVar0 <= Param0 || iVar0 > 0)
	{
		return "";
	}
	if (!Function_211(&(Param0[iVar02]), 2))
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

bool Function_211(var uParam0, int iParam1) //Position: 0xCDC6 / 52678
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_212(int iParam0) //Position: 0xCDE3 / 52707
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
			if (Function_213(GET_SQUAD_FROM_OBJECT(&iVar2)) == &iParam0)
			{
				iVar0++;
			}
			iVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
		}
	}
	DESTROY_ITERATOR(&uVar1);
	return iVar0;
}

int Function_213(int iParam0) //Position: 0xCE4B / 52811
{
	var uVar0;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return 4294967295;
	}
	uVar0 = Function_214(&iParam0);
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

var Function_214(var uParam0) //Position: 0xCE89 / 52873
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

struct<8> Function_215(vector3 vParam0) //Position: 0xCED6 / 52950
{
	struct<2> Var0;
	
	Var0 = vParam0;
	Var0.f_4 = vParam0.y;
	Var0.f_8 = vParam0.z;
	return StackVal, Var0;
}

int Function_216(int iParam0, int iParam1) //Position: 0xCEF8 / 52984
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

bool Function_217(struct<2> Param0, int iParam2, bool bParam3) //Position: 0xCF2A / 53034
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
	Function_219(4294967295);
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
			else if (Function_218(&Param0, &uVar0) > fVar4)
			{
				return 0;
			}
		}
		iVar2++;
	}
	return 1;
}

float Function_218(struct<2> Param0) //Position: 0xD006 / 53254
{
	struct<2> Var0;
	bool bVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	bVar2 = VMAG(Var0);
	return bVar2;
}

int Function_219(int iParam0) //Position: 0xD025 / 53285
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
						Function_220(iVar0);
					}
					else if (Global_6629)
					{
						if (Function_16(StackVal, &Global_54076, Var1) < 25.0f)
						{
							Function_220(iVar0);
						}
					}
					else if (Function_16(StackVal, &Global_54076, Var1) < 55.0f)
					{
						Function_220(iVar0);
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
			Function_220(iVar0);
		}
		iVar0++;
	}
	return 0;
}

void Function_220(int iParam0) //Position: 0xD193 / 53651
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

bool Function_221(struct<2> Param0) //Position: 0xD1FB / 53755
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

int Function_222(struct<2> Param0) //Position: 0xD2A0 / 53920
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

bool Function_223(struct<2> Param0) //Position: 0xD2EE / 53998
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

bool Function_224(struct<2> Param0) //Position: 0xD349 / 54089
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

int Function_225(bool bParam0) //Position: 0xD3C8 / 54216
{
	float fVar0;
	bool bVar1;
	
	Function_15(&fVar0, &bVar1);
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER_PLAYER();
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	Function_228(0);
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
		Function_227(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, (&bParam0 + 72 + 84));
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
	Function_226(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&bParam0 + 72 + 84));
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

void Function_226(struct<33> Param0) //Position: 0xD57A / 54650
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

void Function_227(struct<5> Param0, var uParam5, var uParam6, var uParam7) //Position: 0xD6A6 / 54950
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

void Function_228(float fParam0) //Position: 0xD6F7 / 55031
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

int Function_229(int iParam0, struct<2> Param1) //Position: 0xD73E / 55102
{
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER(Param1);
	if (Global_47151[34])
	{
		PRINTVECTOR(Param1);
		PRINTNL();
	}
	Function_231();
	Function_228(0);
	Function_230(0);
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
		Function_227(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iParam0 + 72 + 84));
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
	Function_226(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iParam0 + 72 + 84));
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

void Function_230(bool bParam0) //Position: 0xD8F3 / 55539
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

void Function_231() //Position: 0xD9A6 / 55718
{
	AMBIENT_SET_DISTANCE_FILTER(0.0f, 24.0f);
	return;
}

struct<8> Function_232(struct<2> Param0) //Position: 0xD9B5 / 55733
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
		Function_215(&iVar18);
		uVar14 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Function_215(&iVar18), StackVal);
		Function_215(&iVar21);
		uVar16 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Function_215(&iVar21), StackVal);
		fVar11 = VDOT(&uVar12, &uVar14);
		fVar10 = VDOT(&uVar12, &uVar16);
		Function_15(&fVar4, &fVar5);
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
			Function_215(&iVar21);
			Var8 = Function_215(&iVar21);
		}
		else
		{
			UNK_0x19D652F9(&uVar3, fVar6, &uVar0, &iVar18);
			Function_215(&iVar18);
			Var8 = Function_215(&iVar18);
		}
	}
	UNK_0xDF93BD7C(&uVar7);
	return StackVal, Var8;
}

int Function_233(struct<2> Param0, struct<5> Param2) //Position: 0xDACF / 56015
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
		if (!Function_85(StackVal, Param2))
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
			if (!Function_85(StackVal, Param2))
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

bool Function_234(bool bParam0) //Position: 0xDC12 / 56338
{
	if (bParam0 > 0 || bParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_235(var uParam0, struct<2> Param1, float fParam3, int iParam4, var uParam5) //Position: 0xDC28 / 56360
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
						if (Function_217(&Var5, &fVar4, 0, 0))
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

var Function_236(var uParam0, struct<2> Param1, float fParam3) //Position: 0xDCDD / 56541
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
				if (Function_217(&Var5, &uVar4, 0, 0))
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

var Function_237() //Position: 0xDD6F / 56687
{
	float fVar0;
	int iVar1;
	
	if (Global_6612)
	{
		return 0.0f;
	}
	Function_15(&fVar0, &iVar1);
	if (fVar0 >= 50.0f)
	{
		return (fVar0 - 10.0f);
	}
	return (fVar0 - 20.0f);
}

var Function_238(var uParam0, struct<2> Param1, float fParam3, int iParam4, var uParam5) //Position: 0xDDA0 / 56736
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

var Function_239(var uParam0, struct<2> Param1, float fParam3) //Position: 0xDE42 / 56898
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

int Function_240(int iParam0) //Position: 0xDEC8 / 57032
{
	if (IS_ITERATOR_VALID(&iParam0))
	{
		ITERATE_EVERYWHERE(&iParam0);
		ITERATE_ON_PARTIAL_NAME(&iParam0, Function_276());
		ITERATE_ON_PARTIAL_MODEL_NAME(&iParam0, Function_276());
		ITERATE_ON_OBJECT_TYPE(&iParam0, 4294967295);
		return 1;
	}
	return 0;
}

int Function_241(var uParam0, int iParam1) //Position: 0xDEFE / 57086
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
	Function_219(DECOR_GET_INT(&uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
		}
		else
		{
			Function_242(iVar0, &uParam0, &uVar1, &iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(&uParam0);
	return 0;
}

void Function_242(int iParam0, var uParam1, struct<2> Param2) //Position: 0xE068 / 57448
{
	struct<8> Var0;
	
	*(&Global_39621[iParam05] + 16) = &uParam1;
	Global_39621[iParam05].f_32 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_245("stayout") };
	*(&Global_39621[iParam05] + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Param2, Vector(0.0f, 0.0f, 0.0f), Vector(12.0f, 5.0f, 12.0f));
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&Global_39621[iParam05] + 24, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&Global_39621[iParam05] + 24);
	if (&bParam3)
	{
		*(&Global_39621[iParam05] + 8) = ADD_BLIP_FOR_COORD(&Param2, 403, 0, 2, 0);
		SET_BLIP_BLINK(&Global_39621[iParam05] + 8, 1, 1, 20.0f);
	}
}

var Function_243(var uParam0, struct<2> Param1) //Position: 0xE110 / 57616
{
	struct<2> Var0;
	var uVar2;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		GET_POSITION(&uParam0, &Var0);
		Function_244(StackVal, StackVal, Var0, Param1, &uVar2);
		return UNK_0x9C40E671(&uVar2);
	}
	return 0.0f;
}

void Function_244(var uParam0, float fParam1, float fParam2, float fParam3, var uParam4) //Position: 0xE13E / 57662
{
	uParam4 = Vector((GET_X(&fParam2) - GET_X(&uParam0)), 0.0f, (GET_Z(&fParam2) - GET_Z(&uParam0)));
}

struct<32> Function_245(char* cParam0) //Position: 0xE162 / 57698
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_246("0", &cVar8, ""), 4);
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

struct<32> Function_246(char* cParam0) //Position: 0xE1CE / 57806
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_247(struct<2>[] Param0) //Position: 0xE1F0 / 57840
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_252();
	iVar1 = 0;
	if (!Function_4(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_251(&(Param0[iVar02]), 8);
		}
		else if (Function_250())
		{
			iVar1 = 1;
			Function_251(&(Param0[iVar02]), 8);
		}
		Function_251(&(Param0[iVar02]), 16);
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
				Function_251(&(Param0[iVar02]), 1);
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
							Function_251(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_251(&(Param0[iVar02]), 2);
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
							Function_251(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_251(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_251(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_251(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_251(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_251(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_251(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_251(&(Param0[iVar02]), 2);
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
	Function_248();
	return 1;
}

void Function_248() //Position: 0xE5B2 / 58802
{
	if (!Function_249(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_249(int iParam0) //Position: 0xE5F2 / 58866
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_250() //Position: 0xE60E / 58894
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

void Function_251(struct<13> Param0) //Position: 0xE63C / 58940
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_252() //Position: 0xE64F / 58959
{
	if (!Function_249(128))
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

void Function_253(int iParam0) //Position: 0xE691 / 59025
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

void Function_254(var[] uParam0, int iParam1) //Position: 0xE6DA / 59098
{
	int iVar0;
	
	if (&iParam1 == 4294967295)
	{
		iParam1 = uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= &iParam1)
	{
		Function_253(&(uParam0[iVar0]));
		iVar0++;
	}
	return;
}

void Function_255(int iParam0) //Position: 0xE70C / 59148
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

void Function_256(var[] uParam0, int iParam1) //Position: 0xE756 / 59222
{
	int iVar0;
	
	if (&iParam1 == 4294967295)
	{
		iParam1 = uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= &iParam1)
	{
		Function_255(&(uParam0[iVar0]));
		iVar0++;
	}
	return;
}

bool Function_257(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xE788 / 59272
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

void Function_258(var[] uParam0, int iParam1) //Position: 0xE800 / 59392
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

void Function_259(bool bParam0) //Position: 0xE823 / 59427
{
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(bParam0);
	return;
}

var Function_260(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xE82E / 59438
{
	return Function_261(&uParam0, uParam1, &uParam2, 4294967295, &uParam3);
}

var Function_261(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xE845 / 59461
{
	return Function_262(StackVal, &uParam0, uParam1, &uParam2, &uParam3, &uParam4, 0, Vector(0.0f, 0.0f, 0.0f));
}

var Function_262(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, float fParam5, struct<2> Param6) //Position: 0xE863 / 59491
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!IS_POPSET_VALID(&uParam0))
	{
		LOG_ERROR("Trying to get a random member of an invalid popset");
		return 4294967295;
	}
	if (bParam1)
	{
		Function_267();
	}
	iVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, iParam2, iParam3, bParam4, fParam5, Param6);
	if (!Function_200(iVar1))
	{
		if (!Global_47146 && !Global_47147)
		{
			Function_266(&uParam0, bParam1, iParam2, iParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_266(&uParam0, bParam1, iParam2, iParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	iVar0 = iVar1;
	if (bParam1 || (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(iVar1)))
	{
		if (bParam1 && iParam3 != 4294967295)
		{
			while (Function_265(iVar0) && iVar2 > 20)
			{
				iVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_200(iVar1))
				{
					iVar0 = iVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_265(iVar0))
				{
					Function_264();
				}
				Function_263(iVar0);
			}
		}
		else if (!iParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(iVar1) != iParam3 && iVar2 > 20)
			{
				iVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_200(iVar1))
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

void Function_263(int iParam0) //Position: 0xEB5C / 60252
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

void Function_264() //Position: 0xEC10 / 60432
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

bool Function_265(int iParam0) //Position: 0xEC4B / 60491
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

void Function_266(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0xEC78 / 60536
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

void Function_267() //Position: 0xEDD3 / 60883
{
	int iVar0;
	
	if (Global_6645)
	{
		if (StackVal || !&Global_46956 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_264();
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
	Function_264();
	return;
}

bool Function_268() //Position: 0xEE1F / 60959
{
	return (RAND_INT_RANGE(0, 1999) / 1000) != 0;
}

var Function_269(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xEE32 / 60978
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
			Function_251(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_251(&(Param0[iVar02]), 8);
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

int Function_270(int iParam0, int iParam1) //Position: 0xEF0E / 61198
{
	int iVar0;
	
	iVar0 = (Global_26652[iParam04].f_16 % iParam1);
	return iVar0;
}

var Function_271(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0xEF24 / 61220
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_272(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_251(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_272(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0xEF62 / 61282
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_4(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_251(&(Param0[iVar02]), 4);
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

void Function_273(vector3 vParam0) //Position: 0xF031 / 61489
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_190(&vParam0, 1);
	Function_64(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

var Function_274(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xF056 / 61526
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
		fVar0 = (fVar0 * (0,75f + ((TO_FLOAT(Function_71(5)) / 100.0f) * 0,5f)));
	}
	if (&bParam3)
	{
		if (HAS_ITEM(Function_275(17), &Global_54076))
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

var Function_275(bool bParam0) //Position: 0xF15D / 61789
{
	bool bVar0;
	
	bVar0 = SS_GET_STRING(1, bParam0);
	if (!IS_STRING_VALID(&bVar0))
	{
		PRINTSTRING("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value:");
		PRINTINT(bParam0);
		PRINTNL();
		LOG_ERROR("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value! Ask Christian to add it");
	}
	return &bVar0;
}

float Function_276() //Position: 0xF251 / 62033
{
	var uVar0;
	
	return &uVar0;
}

