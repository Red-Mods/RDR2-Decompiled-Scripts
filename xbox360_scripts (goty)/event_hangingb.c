//Decompiled with MagicRDR v1.0
//Function Count : 277
//Statics Count : 178
//Natives Count : 455
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
	float fLocal_20 = 0.0f;
	int iLocal_21[3] = { 0, 0, 0 };
	float fLocal_25 = 0.0f;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	bool bLocal_32 = false;
	int iLocal_33 = 0;
	bool bLocal_34 = false;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	bool bLocal_38 = false;
	int iLocal_39 = 0;
	bool bLocal_40 = false;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	bool bLocal_43 = false;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	bool bLocal_47 = false;
	bool bLocal_48 = false;
	bool bLocal_49 = false;
	bool bLocal_50 = false;
	bool bLocal_51 = false;
	int iLocal_52 = 0;
	vector3 vLocal_53 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_56 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_59 = { 0.0f, 0.0f, 0.0f };
	int iLocal_62 = 0;
	struct<97> Local_63 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	bool bVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	var uVar8;
	bool bVar24;
	var uVar25;
	var uVar26;
	int iVar27;
	int iVar28;
	var uVar29;
	var uVar30;
	int iVar31;
	bool bVar32[3];
	bool bVar36;
	bool bVar37;
	bool bVar38[3];
	bool bVar42;
	bool bVar43;
	bool bVar44;
	var uVar45[3];
	var uVar49;
	bool bVar50;
	int iVar117;
	int iVar118;
	int iVar119;
	int iVar120;
	int iVar121;
	float fVar122;
	vector3 vVar123;
	vector3 vVar126;
	vector3 vVar135;
	bool bVar139;
	bool bVar140;
	bool bVar141;
	bool bVar142;
	int iVar143;
	vector3 vVar145;
	vector3 vVar148;
	int iVar154;
	int iVar155;
	int iVar156;
	bool bVar157;
	
	iLocal_14 = 0;
	iLocal_15 = 0;
	fLocal_25 = 0.0f;
	iLocal_29 = 0;
	iLocal_30 = 0;
	iLocal_31 = 0;
	bLocal_32 = false;
	iLocal_33 = 1;
	bLocal_34 = false;
	iLocal_35 = 1;
	iLocal_36 = 0;
	iLocal_37 = 0;
	bLocal_38 = false;
	iLocal_39 = 0;
	bLocal_40 = false;
	iLocal_41 = 0;
	iLocal_42 = 0;
	bLocal_43 = false;
	iLocal_44 = 0;
	iLocal_45 = 0;
	iLocal_46 = 0;
	bLocal_49 = false;
	bLocal_50 = false;
	bLocal_51 = false;
	iLocal_52 = 0;
	vLocal_53 = { 3.0f, 5.0f, 0.0f };
	iLocal_62 = 0;
	iLocal_88 = 0;
	iLocal_92 = 0;
	iLocal_106 = 0;
	iLocal_112 = 0;
	bLocal_116 = false;
	bLocal_117 = false;
	bLocal_118 = false;
	iLocal_121 = 0;
	iLocal_122 = 0;
	bLocal_125 = false;
	iVar0 = 0;
	bVar1 = false;
	bVar2 = false;
	bVar3 = CREATE_LAYOUT(Function_276());
	uVar4 = 1;
	uVar8 = 5;
	iVar27 = 0;
	iVar31 = 4294967295;
	bVar42 = false;
	uVar49 = Function_274(2, 1, 1, 0, 0);
	bVar50 = 22;
	Function_273(&uLocal_89, 0.0f);
	iVar118 = 0;
	if (!IS_POPSET_VALID(Global_30750[6]))
	{
		iVar0 = 5;
	}
	else
	{
		Function_271(&bVar50, "stand_hostage", 5, 0);
		Function_271(&bVar50, "custom/stand_hostage", 8, 0);
		Function_271(&bVar50, "hanging_from_noose", 5, 0);
		Function_271(&bVar50, "custom/hanging_from_noose", 8, 0);
		Function_271(&bVar50, "horse_slap", 1, 0);
		Function_271(&bVar50, "ped_emo_thanks", 5, 0);
		Function_271(&bVar50, "custom/ped_emo_thanks", 8, 0);
		Function_271(&bVar50, "mourn_loop", 1, 0);
		Function_271(&bVar50, "fema_ride_passenger", 5, 0);
		Function_271(&bVar50, "gent_ride_passenger", 5, 0);
		Function_271(&bVar50, "nhanging_B", 5, 0);
		Function_271(&bVar50, "custom/hanging_B", 8, 0);
		bVar24 = RAND_INT_RANGE(0, 5999);
		bVar24 = (bVar24 / 1000);
		bVar24 = Function_270(18, 6);
		if (bVar24 == 0)
		{
			bVar43 = 99;
			bLocal_50 = true;
			bLocal_51 = true;
		}
		else if (bVar24 == 1)
		{
			bVar43 = 95;
			bLocal_50 = false;
		}
		else if (bVar24 == 2)
		{
			bVar43 = 89;
			bLocal_50 = false;
		}
		else if (bVar24 == 3)
		{
			bVar43 = 202;
			bLocal_50 = false;
		}
		else if (bVar24 == 4)
		{
			bVar43 = 153;
			bLocal_50 = true;
		}
		else if (bVar24 == 5)
		{
			bVar43 = 130;
			bLocal_50 = false;
		}
		Function_269(&bVar50, bVar43, 3, 0);
		bVar24 = RAND_INT_RANGE(0, 5999);
		bVar24 = (bVar24 / 1000);
		if (bLocal_50)
		{
			if (Function_268() || bVar43 != 99)
			{
				bVar44 = 199;
			}
			else
			{
				bVar44 = 99;
			}
		}
		else
		{
			bVar24 = RAND_INT_RANGE(0, 3999);
			bVar24 = (bVar24 / 1000);
			if (bVar24 == 0)
			{
				bVar44 = 56;
			}
			else if (bVar24 == 1)
			{
				bVar44 = 53;
			}
			else if (bVar24 == 2)
			{
				bVar44 = 58;
			}
			else if (bVar24 == 3)
			{
				bVar44 = 77;
			}
		}
		Function_269(&bVar50, bVar44, 3, 0);
		switch (Global_29004)
		{
			case 0x00000000:
				if (Global_29005 != Global_30628[0] || Global_29005 != Global_30628[3])
				{
					if (Function_268())
					{
						iLocal_21[0] = 487;
						iLocal_21[1] = 489;
						iLocal_21[2] = 490;
					}
					else
					{
						iLocal_21[0] = 493;
						iLocal_21[1] = 492;
						iLocal_21[2] = 486;
					}
				}
				else if (Global_29005 == Global_30628[1])
				{
					if (Function_268())
					{
						iLocal_21[0] = 505;
						iLocal_21[1] = 508;
						iLocal_21[2] = 510;
					}
					else
					{
						iLocal_21[0] = 507;
						iLocal_21[1] = 506;
						iLocal_21[2] = 509;
					}
				}
				else if (Function_268())
				{
					iLocal_21[0] = 479;
					iLocal_21[1] = 477;
					iLocal_21[2] = 480;
				}
				else
				{
					iLocal_21[0] = 484;
					iLocal_21[1] = 485;
					iLocal_21[2] = 481;
				}
				break;
			
			case 0x00000002:
				if (Function_268())
				{
					iLocal_21[0] = 475;
					iLocal_21[1] = 476;
					iLocal_21[2] = 470;
				}
				else
				{
					iLocal_21[0] = 471;
					iLocal_21[1] = 472;
					iLocal_21[2] = 474;
				}
				break;
		}
		Function_269(&bVar50, iLocal_21[0], 3, 0);
		Function_269(&bVar50, iLocal_21[1], 3, 0);
		Function_269(&bVar50, iLocal_21[2], 3, 0);
		iVar117 = 0;
		while (iVar117 <= 3)
		{
			uVar45[iVar117] = Function_260(Global_30750[6], 1, 0, 1);
			if (uVar45[iVar117] == 4294967295)
			{
				iVar0 = 5;
			}
			else
			{
				Function_269(&bVar50, uVar45[iVar117], 3, 0);
			}
			iVar117++;
		}
		if (iVar0 != 5)
		{
			Function_271(&bVar50, "p_gen_noose03x", 0, 0);
			Function_259(bVar43);
			Function_259(bVar44);
			Function_258(&iLocal_21, 3);
		}
	}
	iVar119 = 0;
	iVar120 = 0;
	iVar121 = 0;
	bVar141 = false;
	vVar145 = { 1.5f, 0.0f, 0.0f };
	vVar148 = { 2.0f, 0.0f, 0.0f };
	iVar154 = 0;
	iVar155 = 0;
	if (Global_3382 == 1)
	{
		iVar0 = 5;
	}
	iVar156 = 0;
	bVar157 = false;
	while (!IS_EXITFLAG_SET())
	{
		bVar142 = GET_PLAYER_ACTOR(0);
		GET_POSITION(bVar142, &vVar123);
		iVar143 = 600;
		if (Function_257(&bVar157, &iVar0, &iVar156, &iVar143, bVar1))
		{
			if (bVar157)
			{
				Function_256(&bVar38, 4294967295);
				Function_255(&bVar36);
				Function_255(&bVar139);
				Function_255(&bVar140);
				Function_256(&bVar32, 4294967295);
				Function_255(&bVar37);
			}
			else
			{
				Function_254(&bVar38, 4294967295);
				Function_253(&bVar36);
				Function_253(&bVar139);
				Function_253(&bVar140);
				Function_254(&bVar32, 4294967295);
				Function_253(&bVar37);
			}
		}
		switch (iVar0)
		{
			case 0x00000000:
				if (Function_247(&bVar50))
				{
					bLocal_48 = CREATE_NAV_QUERY(bVar3, "hanging");
					iVar0 = 1;
					iVar143 = 0;
				}
				break;
			
			case 0x00000001:
				if (Function_206(&ScriptParam_0, &iVar143, &iVar121, &iVar119, 1))
				{
					if (!Function_203(&vVar123, &Local_63, 80.0f, 310.0f))
					{
						iVar0 = 5;
						iVar143 = 0;
						break;
					}
					if (VDIST(vVar123, *(&Local_63 + 12)) > 50.0f)
					{
						iVar0 = 5;
						iVar143 = 0;
						break;
					}
					NAV_QUERY_START_CAN_PATH_TO_POINT(bLocal_48, *(&ScriptParam_0 + 8), Local_63, bVar43);
					iVar0 = 4;
					iVar143 = 0;
				}
				else if (iVar119 == 1)
				{
					iVar0 = 5;
					iVar143 = 0;
				}
				break;
			
			case 0x00000004:
				iVar143 = 0;
				if (NAV_QUERY_IS_DONE(bLocal_48))
				{
					NAV_QUERY_RECEIVE_CAN_PATH_TO_POINT(bLocal_48, &bVar141);
					NAV_QUERY_STOP(bLocal_48);
					if (bVar141)
					{
						iVar0 = 2;
					}
					else
					{
						if (ScriptParam_0.f_32)
						{
							Function_202();
							PRINT_OBJECTIVE_B("Rider can't path to the nearest hanging tree. Launch again in another area.", 10.0f, 1, 2, true, 0, 0, 0);
						}
						iVar0 = 5;
					}
				}
				break;
			
			case 0x00000002:
				if (!Function_203(&vVar123, &Local_63, 80.0f, 310.0f))
				{
					iVar0 = 5;
					break;
				}
				if (ABS(FLOOR((StackVal - StackVal))) >= 30)
				{
					iVar0 = 5;
					iVar143 = 0;
					break;
				}
				if (VDIST(vVar123, *(&Local_63 + 12)) > 50.0f)
				{
					iVar0 = 5;
					iVar143 = 0;
					break;
				}
				bLocal_101 = CREATE_VOLUME_IN_LAYOUT(bVar3, Function_276(), 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 20.0f, 4.0f, 20.0f);
				bLocal_100 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("hangingContext", bLocal_101, 25, 5, 0, false, 0, 0, 4294967295, 0);
				bVar38[0] = CREATE_ACTOR_IN_LAYOUT(bVar3, Function_276(), uVar45[0], *(&Local_63 + 48), *(&ScriptParam_0 + 20));
				TASK_STAND_STILL(bVar38[0], -1.0f, 0, 0);
				ACCESSORIZE_HORSE(bVar38[0], 3);
				bVar38[1] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_276(), bVar3, StackVal) + Vector(vVar148, *(&Local_63 + 48), uVar45[1]), *(&ScriptParam_0 + 20));
				TASK_STAND_STILL(bVar38[1], -1.0f, 0, 0);
				ACCESSORIZE_HORSE(bVar38[1], 3);
				bVar38[2] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_276(), bVar3, StackVal) + Vector(vVar148, *(&Local_63 + 48), uVar45[2]), *(&ScriptParam_0 + 20));
				TASK_STAND_STILL(bVar38[2], -1.0f, 0, 0);
				ACCESSORIZE_HORSE(bVar38[2], 3);
				vLocal_93 = { StackVal, StackVal, Local_63 };
				Function_201(StackVal, StackVal, StackVal, StackVal, vLocal_93, *(&Local_63 + 12));
				vVar135 = { StackVal, StackVal, Function_201(StackVal, StackVal, StackVal, StackVal, vLocal_93, *(&Local_63 + 12)) };
				fVar122 = UNK_0x9C40E671(&vVar135);
				bVar36 = Function_199(StackVal, StackVal, bVar3, Function_276(), bVar44, Function_276(), uVar45[0], vLocal_93, 0.0f, fVar122, 0.0f);
				if (IS_ACTOR_VALID(bVar140))
				{
					SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bVar140, 0.1f);
				}
				TASK_STAND_STILL(bVar36, -1.0f, 0, 0);
				SET_ACTOR_CAN_BE_HARDLOCKED(bVar36, 0);
				TASK_PRIORITY_SET(bVar36, 1);
				DECOR_SET_BOOL(bVar36, "CanBeLasso", false);
				bVar32[0] = CREATE_ACTOR_IN_LAYOUT(bVar3, Function_276(), iLocal_21[0], *(&Local_63 + 12), *(&ScriptParam_0 + 20));
				SET_ACTOR_CAN_PLAY_GESTURES(bVar32[0], false);
				TASK_POINT_GUN_AT_OBJECT(bVar32[0], bVar36, -1.0f, 0);
				MEMORY_ATTACK_ON_SIGHT(bVar32[0], 0);
				bVar32[1] = CREATE_ACTOR_IN_LAYOUT(bVar3, Function_276(), iLocal_21[1], *(&Local_63 + 24), *(&ScriptParam_0 + 20));
				SET_ACTOR_CAN_PLAY_GESTURES(bVar32[1], false);
				TASK_POINT_GUN_AT_OBJECT(bVar32[1], bVar36, -1.0f, 0);
				MEMORY_ATTACK_ON_SIGHT(bVar32[1], 0);
				Function_198(bVar32[1], 30.0f, 0x40400000, 0x40000000);
				bVar32[2] = CREATE_ACTOR_IN_LAYOUT(bVar3, Function_276(), iLocal_21[2], *(&Local_63 + 36), *(&ScriptParam_0 + 20));
				SET_ACTOR_CAN_PLAY_GESTURES(bVar32[2], false);
				TASK_POINT_GUN_AT_OBJECT(bVar32[2], bVar36, -1.0f, 0);
				MEMORY_ATTACK_ON_SIGHT(bVar32[2], 0);
				Function_198(bVar32[2], 40.0f, 0x40400000, 0x40000000);
				bVar37 = Function_199(StackVal, StackVal, StackVal, StackVal, bVar3, Function_276(), bVar43, Function_276(), uVar45[2], *(&ScriptParam_0 + 8), *(&ScriptParam_0 + 20));
				bVar140 = GET_MOUNT(bVar37);
				DECOR_SET_BOOL(bVar140, "bInjuryNoEjection", true);
				SET_ACTOR_CAN_PLAY_GESTURES(bVar37, false);
				SET_ACTOR_UPDATE_PRIORITY(bVar37, false);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar37, 1);
				iVar117 = 0;
				while (iVar117 <= 3)
				{
					SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bVar32[iVar117], 0.3f);
					Function_197(bVar37, bVar32[iVar117], 4, 1);
					Function_197(Global_34573, bVar32[iVar117], 4, 1);
					iVar117++;
				}
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bVar37, 0.1f);
				Function_201(StackVal, StackVal, StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vLocal_53, vLocal_93, StackVal), vLocal_93);
				vVar135 = { StackVal, StackVal, Function_201(StackVal, StackVal, StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vLocal_53, vLocal_93, StackVal), vLocal_93) };
				fVar122 = UNK_0x9C40E671(&vVar135);
				bLocal_47 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_276(), bVar3, StackVal) + Vector(vLocal_53, vLocal_93, "$/content/scripting/gringo/SimpleGringo/mourn_loop"), 0.0f, fVar122, 0.0f);
				SNAP_OBJECT_TO_GROUND(bLocal_47, 7.0f, true, 1092616192);
				SET_ALLOW_EXECUTE(bVar36, 0);
				bVar139 = GET_MOUNT(bVar36);
				DELETE_ALL_WEAPONS_FROM_ACTOR(bVar36);
				DECOR_SET_BOOL(bVar36, "CanBeLasso", false);
				AI_DONT_HARM_ACTOR(bVar32[0]);
				AI_DONT_HARM_ACTOR(bVar32[1]);
				AI_DONT_HARM_ACTOR(bVar32[2]);
				AI_DONT_HARM_ACTOR(bVar36);
				bLocal_123 = CREATE_VOLUME_IN_LAYOUT(bVar3, Function_276(), 3, vLocal_93, 0.0f, 0.0f, 0.0f, 10.0f, 8.0f, 10.0f);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar36, 0);
				UNK_0x99AFD2D1(bVar36, 1, 1);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar37, 0);
				UNK_0x99AFD2D1(bVar37, 1, 1);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar32[0], 0);
				UNK_0x99AFD2D1(bVar32[0], 1, 1);
				bLocal_109 = CREATE_POINT_IN_LAYOUT(bVar3, Function_276(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
				ATTACH_OBJECTS(bLocal_109, bVar32[0], Function_276(), 0.0f, 0.5f, -6.5f, 0.0f, 0.0f, 0.0f, 4294967295);
				bLocal_110 = CREATE_POINT_IN_LAYOUT(bVar3, Function_276(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
				ATTACH_OBJECTS(bLocal_110, bVar32[1], Function_276(), 0.0f, 0.5f, -6.5f, 0.0f, 0.0f, 0.0f, 4294967295);
				bLocal_111 = CREATE_POINT_IN_LAYOUT(bVar3, Function_276(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
				ATTACH_OBJECTS(bLocal_111, bVar32[2], Function_276(), 0.0f, 0.5f, -6.5f, 0.0f, 0.0f, 0.0f, 4294967295);
				vVar126 = { StackVal, StackVal, vLocal_93 };
				if (IS_PHYSINST_VALID(Local_63.f_96))
				{
					Function_193(bVar36, bVar3, Local_63.f_96, &Local_63 + 72);
					bVar42 = true;
				}
				CLEAR_AMBIENT_OBJECTS_SPHERE(*(&Local_63 + 72), 10.0f, 15);
				Function_191(StackVal, StackVal, &uVar29, &uVar30, &iVar31, 8.0f, *(&ScriptParam_0 + 8));
				Function_190(&iVar28, 1);
				Function_190(&iVar28, 16);
				iVar0 = 3;
				iVar143 = 0;
				break;
			
			case 0x00000003:
				if (Function_189(&iLocal_113, 100.0f) && iVar118 > 7)
				{
					bLocal_32 = true;
					Function_273(&uLocal_89, 0.0f);
					iVar118 = 7;
				}
				if (!iLocal_122)
				{
					if (IS_ACTOR_RIDING_AND_IN_SADDLE(bVar36))
					{
						SET_ANIM_SET_FOR_ACTOR(bVar36, "stand_hostage", 0);
						SET_ACTION_NODE_FOR_ACTOR(bVar36, "stand_hostage/Riding");
						iLocal_122 = 1;
					}
				}
				Function_188();
				Function_187(StackVal, StackVal, Function_188(), &bVar1, ScriptParam_0.f_56, bVar37, 100, 0x42a00000, 1);
				Function_188();
				Function_187(StackVal, StackVal, Function_188(), &bVar1, ScriptParam_0.f_56, bVar36, 100, 0x42a00000, 1);
				Function_174(&bVar32, 3, &bVar1, ScriptParam_0.f_56, 100, 0x42a00000, 1);
				if (!Function_168(ScriptParam_0.f_56, bVar37, &iLocal_52, &iVar120, 1, 1, 1, 0))
				{
					TASK_FLEE_ACTOR(bVar37, Global_34573, -1.0f, -1.0f, 0, 0, 0);
					iVar0 = 5;
					break;
				}
				if (!IS_ACTOR_ALIVE(bVar139) && !iLocal_39)
				{
					iLocal_39 = 1;
					Function_273(&uLocal_102, 0.0f);
				}
				if (!bVar42)
				{
					Local_63.f_96 = LOCATE_PHYSINST_OF_TYPE(*(&Local_63 + 72), 20.0f, "p_gen_hangLocator01x", 1);
					if (IS_PHYSINST_VALID(Local_63.f_96))
					{
						Function_193(bVar36, bVar3, Local_63.f_96, &Local_63 + 72);
						bVar42 = true;
					}
				}
				else if (LEASH_IS_BROKEN(bLocal_120) && !bLocal_117)
				{
					bLocal_117 = true;
					DESTROY_OBJECT(bLocal_120);
					LEASH_RELEASE_CONSTRAINT(bLocal_120);
					if (IS_ACTOR_MOUNTED(bVar36))
					{
						RESET_ANIM_SET_FOR_ACTOR(bVar36, 1);
						SET_ACTION_NODE_FOR_ACTOR(bVar36, "/default_character_Main/ReactionProcessing/ReactionProcessing_AI/Lassoed/LassoBuckOff/Buck_eject");
					}
					SET_ACTOR_HANGING_FROM_NOOSE(bVar36, 0);
					DECOR_REMOVE(bVar36, "HangWritheIntensity");
					DECOR_SET_BOOL(bVar36, "CanBeLasso", true);
				}
				else
				{
					LEASH_SET_CONSTRAINT_LENGTH(bLocal_120, fLocal_108);
				}
				switch (iLocal_62)
				{
					case 0x00000000:
						break;
				}
				if (!bLocal_125)
				{
					if (Function_167(&bVar32, 3, 75.0f))
					{
						Function_165();
					}
				}
				if (Function_167(&bVar32, 3, 25.0f) && !bLocal_49)
				{
					bLocal_49 = true;
					Function_164(&bVar37, &bVar32);
				}
				iLocal_35 = 1;
				if (IS_ACTOR_VALID(bVar37))
				{
					if (Function_163(bVar37, Global_34573) > 200.0f)
					{
						iLocal_35 = 0;
					}
				}
				if (IS_ACTOR_VALID(bVar36))
				{
					if (Function_163(bVar36, Global_34573) > 200.0f)
					{
						iLocal_35 = 0;
					}
				}
				if (Function_167(&bVar32, 3, 250.0f))
				{
					iLocal_35 = 0;
				}
				if (iLocal_35 == 1)
				{
					if (Function_161(bVar36, 0) && !iLocal_46)
					{
						Function_159("HangingUnlawful_fail01", iLocal_44, 1);
					}
					iVar0 = 5;
					iVar143 = 0;
				}
				if (Function_158(&bVar32, 3, &uVar26, &uVar25, &fLocal_25, iVar28, iLocal_41, 0x40200000) || (bLocal_117 && !iLocal_41))
				{
					bVar2 = true;
					iLocal_41 = 1;
				}
				if ((Function_155(bVar37, &uVar25, &fLocal_25, iVar28, iLocal_42, 0x40400000) && !bLocal_49) && iVar118 > 4)
				{
					bVar2 = true;
					iLocal_52 = 1;
					Function_153(bVar37);
					Function_152(bVar37);
					TASK_FLEE_ACTOR(bVar37, Global_34573, -1.0f, -1.0f, 0, 0, 0);
					if (bLocal_34)
					{
						REMOVE_ACTOR_STAY_WITHIN_VOLUME(bVar37, bLocal_123);
						bLocal_34 = false;
					}
					iLocal_42 = 1;
					iVar118 = 3;
				}
				if (((bLocal_49 || iLocal_41) || bLocal_117) && !bLocal_43)
				{
					if (!bLocal_125)
					{
						Function_165();
					}
					Function_150(&iLocal_126, 34, 0, 4294967295, 4294967295);
					bLocal_43 = true;
					bVar2 = true;
					iLocal_52 = 1;
					iVar117 = 0;
					while (iVar117 <= 3)
					{
						if (Function_161(bVar32[iVar117], 0))
						{
							Function_149(bVar32[iVar117], &Global_34573);
							ADD_BLIP_FOR_ACTOR(bVar32[iVar117], 322, 0, 2, 0);
						}
						iVar117++;
					}
					if (iVar118 <= 7)
					{
						bLocal_34 = true;
						TASK_GO_NEAR_COORD(bVar37, &vVar126, 10.0f, 4);
						SET_ACTOR_STAY_WITHIN_VOLUME(bVar37, bLocal_123, 4, 0);
						iVar118 = 7;
					}
				}
				if (!IS_ACTOR_ALIVE(bVar36) && iVar118 > 17)
				{
					DECOR_REMOVE(bVar36, "HangWritheIntensity");
					if (!iLocal_39)
					{
						SET_ACTION_NODE_FOR_ACTOR(bVar36, "/default_character_Main/ReactionProcessing/ReactionProcessing_AI/Lassoed/LassoBuckOff/Buck_eject");
						SET_ACTOR_HANGING_FROM_NOOSE(bVar36, 1);
						iLocal_39 = 1;
					}
					if (!iLocal_46 && !iLocal_31)
					{
						iLocal_31 = 1;
						Function_159("HangingUnlawful_fail02", iLocal_44, 1);
					}
					if (Function_161(bVar37, 0))
					{
						if (GET_LAST_ATTACKER(bVar36) == Global_34573)
						{
							Function_149(bVar37, &Global_34573);
							iVar154 = 1;
							if (!bLocal_43)
							{
								iVar118 = 18;
							}
							else
							{
								iVar0 = 5;
							}
						}
						else
						{
							iVar118 = 18;
						}
					}
					else if (!bLocal_43)
					{
						iVar118 = 17;
					}
					else
					{
						iVar0 = 5;
					}
				}
				if (Function_20(&iVar118, bVar142, bVar37, bVar36, &vVar126, &iVar143, bVar3, bVar139, &bVar32, &bVar38, uVar49, bVar140))
				{
					iVar154 = 1;
					iVar0 = 5;
				}
				if (Global_3382 == 1)
				{
					iVar0 = 5;
				}
				break;
			
			case 0x00000005:
				if (iVar154 == 0)
				{
					if (IS_OBJECT_VALID(bLocal_120))
					{
						SET_ACTOR_HANGING_FROM_NOOSE(bVar36, 0);
						LEASH_BREAK(bLocal_120, 1056964608);
						DESTROY_OBJECT(bLocal_120);
					}
					Function_19(&bVar38, 4294967295);
					Function_18(&bVar36);
					Function_18(&bVar139);
					Function_19(&bVar32, 4294967295);
					Function_18(&bVar37);
					iVar0 = 6;
				}
				if (iLocal_33)
				{
					if (bLocal_34 && IS_ACTOR_VALID(bVar37))
					{
						REMOVE_ACTOR_STAY_WITHIN_VOLUME(bVar37, bLocal_123);
					}
					iLocal_33 = 0;
				}
				if (Function_16(StackVal, StackVal, Global_34573, *(&Local_63 + 72)) < Function_14(1))
				{
					SET_ACTOR_HANGING_FROM_NOOSE(bVar36, 0);
					iVar0 = 6;
					iVar143 = 0;
				}
				if (IS_OBJECT_VALID(bLocal_120))
				{
					if (LEASH_IS_BROKEN(bLocal_120))
					{
						SET_ACTOR_HANGING_FROM_NOOSE(bVar36, 0);
						iVar0 = 6;
						iVar143 = 0;
					}
				}
				else
				{
					iVar0 = 6;
					iVar143 = 0;
				}
				break;
			
			case 0x00000006:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				iVar143 = 0;
				break;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(iVar143);
		}
	}
	if (bLocal_125)
	{
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	}
	if (IS_OBJECT_VALID(bLocal_48))
	{
		NAV_QUERY_STOP(bLocal_48);
		DESTROY_OBJECT(bLocal_48);
	}
	Function_254(&bVar38, 4294967295);
	Function_253(&bVar36);
	Function_253(&bVar139);
	Function_253(&bVar140);
	Function_254(&bVar32, 4294967295);
	Function_253(&bVar37);
	Function_13(&uVar29, &uVar30, &iVar31);
	Function_12(bVar43);
	Function_12(bVar44);
	Function_11(&iLocal_21, 3);
	if (iVar154 == 0)
	{
		if (IS_OBJECT_VALID(bLocal_120))
		{
			SET_ACTOR_HANGING_FROM_NOOSE(bVar36, 0);
			LEASH_BREAK(bLocal_120, 1056964608);
			DESTROY_OBJECT(bLocal_120);
		}
		Function_19(&bVar38, 4294967295);
		Function_18(&bVar36);
		Function_18(&bVar139);
		Function_19(&bVar32, 4294967295);
		Function_18(&bVar37);
	}
	if (ScriptParam_0.f_32)
	{
		Global_3399 = 0;
	}
	if (!bVar1)
	{
		Function_5(ScriptParam_0.f_56, 0.0f, 0, 1, 0);
	}
	if (IS_VOLUME_VALID(bLocal_101))
	{
		DESTROY_VOLUME(bLocal_101);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_100))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_100);
	}
	if (Function_161(bVar36, 0))
	{
		Function_153(bVar36);
		AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar36, 1);
		UNK_0x99AFD2D1(bVar36, 0, 0);
	}
	if (Function_161(bVar37, 0))
	{
		if (bLocal_34)
		{
			REMOVE_ACTOR_STAY_WITHIN_VOLUME(bVar37, bLocal_123);
		}
		Function_153(bVar37);
		AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar37, 1);
		UNK_0x99AFD2D1(bVar37, 0, 0);
	}
	if (Function_161(bVar32[0], 0))
	{
		AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar32[0], 1);
		UNK_0x99AFD2D1(bVar32[0], 0, 0);
	}
	iVar117 = 0;
	while (iVar117 <= 3)
	{
		Function_153(bVar32[iVar117]);
		iVar117++;
	}
	Function_1(&bVar50);
	if (!bVar1 && !bVar2)
	{
		if (IS_OBJECT_VALID(bLocal_120))
		{
			SET_ACTOR_HANGING_FROM_NOOSE(bVar36, 0);
			LEASH_BREAK(bLocal_120, 1056964608);
			DESTROY_OBJECT(bLocal_120);
		}
		Function_19(&bVar38, 4294967295);
		Function_18(&bVar36);
		Function_18(&bVar139);
		Function_19(&bVar32, 4294967295);
		Function_18(&bVar37);
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

void Function_1(int iParam0) //Position: 0x137A / 4986
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

void Function_2(var uParam0, int iParam1) //Position: 0x13A0 / 5024
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

void Function_3(var uParam0, int iParam1) //Position: 0x14CE / 5326
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_4(var uParam0, int iParam1) //Position: 0x14E8 / 5352
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_5(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x1505 / 5381
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
		Function_7("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
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
			Function_6(bVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_6(bVar0);
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
			Function_6(bVar0);
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

void Function_6(bool bParam0) //Position: 0x1762 / 5986
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

void Function_7(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x17A8 / 6056
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_8(Global_6269) };
		}
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, &Var0, iParam5);
	}
	else
	{
		iVar4 = "";
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, iVar4, iParam5);
	}
}

struct<16> Function_8(int iParam0) //Position: 0x181F / 6175
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

bool Function_9() //Position: 0x185E / 6238
{
	if (Function_10(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_10(bool bParam0, int iParam1) //Position: 0x1879 / 6265
{
	return (bParam0 && iParam1) == 0;
}

void Function_11(var uParam0, int iParam1) //Position: 0x1886 / 6278
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

void Function_12(bool bParam0) //Position: 0x18A8 / 6312
{
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(bParam0);
	return;
}

void Function_13(var uParam0, var uParam1, int iParam2) //Position: 0x18B3 / 6323
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

float Function_14(bool bParam0) //Position: 0x18E0 / 6368
{
	var uVar0;
	float fVar1;
	
	if (!bParam0)
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

void Function_15(float fParam0, int iParam1) //Position: 0x191B / 6427
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

float Function_16(bool bParam0, vector3 vParam1) //Position: 0x19A4 / 6564
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_17(bParam0);
		vVar0 = { StackVal, StackVal, Function_17(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

vector3 Function_17(bool bParam0) //Position: 0x1A1E / 6686
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

void Function_18(bool bParam0) //Position: 0x1A88 / 6792
{
	if (IS_ACTOR_VALID(*bParam0))
	{
		RESET_ANIM_SET_FOR_ACTOR(*bParam0, 0);
		TASK_FLEE_ACTOR(*bParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
		TASK_PRIORITY_SET(*bParam0, 0);
	}
	return;
}

void Function_19(bool bParam0, bool bParam1) //Position: 0x1AB3 / 6835
{
	int iVar0;
	
	if (bParam1 == 4294967295)
	{
		bParam1 = *bParam0;
	}
	iVar0 = 0;
	while (iVar0 <= bParam1)
	{
		Function_18(bParam0[iVar0]);
		iVar0++;
	}
	return;
}

bool Function_20(var uParam0, var uParam1, bool bParam2, bool bParam3, var uParam4, var uParam5, var uParam6, bool bParam7, bool bParam8, var uParam9, bool bParam10, bool bParam11) //Position: 0x1AE0 / 6880
{
	int iVar0;
	bool bVar1;
	
	bParam7 = bParam7;
	*uParam5 = *uParam5;
	switch (*uParam0)
	{
		case 0x00000000:
			if (Function_167(bParam8, 3, 50.0f))
			{
				iLocal_52 = 1;
			}
			if ((CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), (*bParam8)[0], 1.0f, 60.0f, 1, 1, 0) || CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam3, 1.0f, 60.0f, 1, 1, 0)) || bLocal_117)
			{
				TASK_GO_NEAR_COORD(bParam2, uParam4, 10.0f, 4);
				iLocal_52 = 1;
				*uParam0 = 4;
			}
			if (Function_148(&bParam2, &uParam1, &iLocal_112, uParam6, 55.0f, &bLocal_116, uLocal_99, &uLocal_89, &iLocal_92, 25.0f, 1, 4, -9.0f, 0, 0, 0))
			{
				if (bLocal_116)
				{
					iLocal_44 = 1;
					Function_273(&iLocal_113, 0.0f);
					ACTOR_START_FORCE_HOLSTER(bParam2, 0, 0);
					SET_ANIM_SET_FOR_ACTOR(bParam2, "nhanging_B", 0);
					SET_ACTION_NODE_FOR_ACTOR(bParam2, "nhanging_B");
					Function_147(bParam2, Global_34573, "HangingUnlawful_msg09", "HangingUnlawful_msg09", 5, 60, 1, 1);
					AI_SPEECH_SET_ALLOW_FOR_ACTOR(bParam2, 1);
					UNK_0x99AFD2D1(bParam2, 0, 0);
					AI_GOAL_LOOK_AT_ACTOR(bParam2, Global_34573, 1, 1065353216, 3212836864, 3212836864, 0);
					*uParam0 = 2;
					Function_273(&uLocal_89, 0.0f);
				}
			}
			else
			{
				TASK_WANDER(bParam2, -1.0f);
			}
			break;
		
		case 0x00000002:
			if (IS_ACTOR_VALID(bParam2))
			{
				if (Function_163(bParam2, Global_34573) > 12.0f && !iLocal_45)
				{
					iLocal_45 = 1;
					TASK_STAND_STILL(bParam2, 5.0f, 0, 0);
					AI_GOAL_LOOK_AT_ACTOR_NEW(bParam2, Global_34573, 10.0f, 1);
				}
			}
			if ((CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), (*bParam8)[0], 1.0f, 60.0f, 1, 1, 0) || CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam3, 1.0f, 60.0f, 1, 1, 0)) || bLocal_117)
			{
				RESET_ANIM_SET_FOR_ACTOR(bParam2, 1);
				ACTOR_END_FORCE_HOLSTER(bParam2);
				AI_GOAL_LOOK_CLEAR(bParam2);
				TASK_GO_NEAR_COORD(bParam2, uParam4, 10.0f, 4);
				SET_ACTOR_STAY_WITHIN_VOLUME(bParam2, bLocal_123, 4, 0);
				iLocal_52 = 1;
				bLocal_34 = true;
				*uParam0 = 4;
			}
			if (Function_143(&uLocal_89, 5.0f))
			{
				ACTOR_END_FORCE_HOLSTER(bParam2);
				RESET_ANIM_SET_FOR_ACTOR(bParam2, 1);
				if (bLocal_51)
				{
					Function_142("HangingObj_msg04", 0x40f00000, 1, 2, 0, 0, 0, 0);
				}
				else if (bLocal_50)
				{
					Function_142("HangingObj_msg03", 0x40f00000, 1, 2, 0, 0, 0, 0);
				}
				else
				{
					Function_142("HangingObj_msg02", 0x40f00000, 1, 2, 0, 0, 0, 0);
				}
				ADD_BLIP_FOR_ACTOR(bParam2, 325, 0.0f, 3, 0);
				TASK_GO_NEAR_COORD(bParam2, uParam4, 10.0f, 4);
				SET_ACTOR_STAY_WITHIN_VOLUME(bParam2, bLocal_123, 4, 0);
				bLocal_34 = true;
				*uParam0 = 3;
			}
			break;
		
		case 0x00000003:
			if ((CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), (*bParam8)[0], 1.0f, 60.0f, 1, 1, 0) || CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam3, 1.0f, 60.0f, 1, 1, 0)) || bLocal_117)
			{
				iLocal_52 = 1;
				*uParam0 = 4;
			}
			if (IS_ACTOR_VALID(bParam2))
			{
				if (Function_16(StackVal, StackVal, bParam2, vLocal_93) > 30.0f && Function_163(Global_34573, bParam2) < 40.0f)
				{
					SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bParam2, 1.0f);
					if (IS_ACTOR_VALID((*bParam8)[0]))
					{
						Function_149((*bParam8)[0], &bParam2);
					}
					if (IS_ACTOR_VALID((*bParam8)[1]))
					{
						Function_149((*bParam8)[1], &bParam2);
					}
					if (IS_ACTOR_VALID((*bParam8)[2]))
					{
						Function_149((*bParam8)[2], &bParam2);
					}
					iLocal_52 = 1;
					bLocal_32 = true;
					*uParam0 = 4;
				}
			}
			break;
		
		case 0x00000004:
			Function_164(&bParam2, bParam8);
			iLocal_52 = 1;
			Function_141(18);
			Function_147(bParam3, Global_34573, "HangingUnlawful_msg02", "HangingUnlawful_msg02", 5, 60, 1, 1);
			Function_153(bParam2);
			ADD_BLIP_FOR_ACTOR(bParam3, 325, 0.0f, 3, 0);
			Function_273(&uLocal_89, 0.0f);
			*uParam0 = 6;
			break;
		
		case 0x00000006:
			Function_140(&bParam2, bParam8);
			if (Function_143(&uLocal_89, 4.0f))
			{
				Function_147((*bParam8)[0], bParam3, "HangingUnlawful_msg03", "HangingUnlawful_msg03", 5, 60, 1, 1);
				*uParam0 = 7;
				Function_273(&uLocal_89, 0.0f);
			}
			break;
		
		case 0x00000007:
			Function_140(&bParam2, bParam8);
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam2)))
			{
				Function_153(bParam2);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam3)))
			{
				ADD_BLIP_FOR_ACTOR(bParam3, 325, 0.0f, 3, 0);
			}
			if (!bLocal_117 && !bLocal_32)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_142("HangingHelp_msg06", 0x40f00000, 1, 2, 0, 0, 0, 0);
				iLocal_44 = 1;
			}
			Function_138(bParam8, bParam7, bParam3, uParam5);
			*uParam0 = 9;
			break;
		
		case 0x00000009:
			Function_140(&bParam2, bParam8);
			if (Function_143(&uLocal_89, 4.0f) && !iLocal_36)
			{
				if (Function_161((*bParam8)[0], 0))
				{
					Function_147((*bParam8)[0], Global_34573, "HangingUnlawful_msg05", "HangingUnlawful_msg05", 5, 60, 1, 1);
					AI_SPEECH_SET_ALLOW_FOR_ACTOR((*bParam8)[0], 1);
					UNK_0x99AFD2D1((*bParam8)[0], 0, 0);
					iLocal_36 = 1;
				}
			}
			bLocal_40 = true;
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (Function_161((*bParam8)[iVar0], 1))
				{
					bLocal_40 = false;
				}
				iVar0++;
			}
			if (!bLocal_117)
			{
				Function_138(bParam8, bParam7, bParam3, uParam5);
			}
			else if (bLocal_117 && Function_161(bParam3, 0))
			{
				if (bLocal_40)
				{
					*uParam0 = 13;
				}
				else
				{
					*uParam0 = 10;
				}
			}
			break;
		
		case 0x0000000A:
			bLocal_40 = true;
			Function_140(&bParam2, bParam8);
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (Function_161((*bParam8)[iVar0], 1))
				{
					bLocal_40 = false;
				}
				iVar0++;
			}
			if (!Function_135(StackVal, StackVal, bParam3, bParam2, bParam8, vLocal_93, bParam10))
			{
				iVar0 = 0;
				while (iVar0 <= 3)
				{
					if (Function_161((*bParam8)[iVar0], 1))
					{
						Function_149((*bParam8)[iVar0], &Global_34573);
					}
					iVar0++;
				}
				Function_142("HangingObj_msg01", 0x40f00000, 1, 2, 0, 0, 0, 0);
				iLocal_44 = 1;
				Function_134(bParam3, bParam2);
				*uParam0 = 11;
			}
			else if (bLocal_40)
			{
				TASK_FOLLOW_OBJECT_AT_DISTANCE(bParam2, bParam3, 6.0f, 4);
				*uParam0 = 13;
			}
			else
			{
				return 1;
			}
			break;
		
		case 0x0000000B:
			if (!Function_161(bParam11, 0) && !iLocal_30)
			{
				if (Function_161(bParam3, 0))
				{
					TASK_FLEE_COORD(bParam3, &vLocal_93, 4, -1.0f, -1.0f, 0);
					iLocal_30 = 1;
				}
			}
			if (Function_135(StackVal, StackVal, bParam3, bParam2, bParam8, vLocal_93, bParam10))
			{
				Function_147(bParam3, Global_34573, "HangingUnlawful_msg06", "HangingUnlawful_msg06", 3, 30, 1, 1);
				Function_273(&uLocal_89, 0.0f);
				*uParam0 = 12;
			}
			break;
		
		case 0x0000000C:
			if ((IS_ACTOR_VALID(bParam3) && IS_ACTOR_VALID(bParam2)) && Function_161(bParam11, 0))
			{
				if (IS_ACTOR_RIDING_AND_IN_SADDLE(bParam3))
				{
					Function_133(bParam2, 0.0f, 0.0f, 0.0f, 0, 0, 2, 1);
					return 1;
				}
			}
			if (IS_ACTOR_VALID(bParam3))
			{
				Function_132(bParam3, 4, 0, 2);
			}
			if (IS_ACTOR_VALID(bParam2))
			{
				Function_132(bParam2, 4, 0, 2);
				TASK_FLEE_ACTOR(bParam2, Global_34573, -1.0f, -1.0f, 0, 0, 0);
				if (bLocal_34)
				{
					REMOVE_ACTOR_STAY_WITHIN_VOLUME(bParam2, bLocal_123);
					bLocal_34 = false;
				}
			}
			return 1;
			if (Function_189(&uLocal_89, 40.0f))
			{
				if (IS_ACTOR_VALID(bParam3))
				{
					Function_132(bParam3, 4, 0, 2);
				}
				if (IS_ACTOR_VALID(bParam2))
				{
					Function_132(bParam2, 4, 0, 2);
					if (bLocal_34)
					{
						REMOVE_ACTOR_STAY_WITHIN_VOLUME(bParam2, bLocal_123);
						bLocal_34 = false;
					}
				}
				return 1;
			}
			break;
		
		case 0x0000000D:
			Function_138(bParam8, bParam7, bParam3, uParam5);
			if (IS_OBJECT_VALID(bLocal_120))
			{
				if (LEASH_IS_BROKEN(bLocal_120))
				{
					*uParam0 = 14;
				}
			}
			else
			{
				*uParam0 = 14;
			}
			break;
		
		case 0x0000000E:
			Function_150(&iLocal_126, 3, 0, 4294967295, 4294967295);
			if (Function_131(&bParam3, &Global_34573, &uLocal_105, &iLocal_106, &uLocal_89, uParam6, 25.0f, &iLocal_107, uLocal_99, uParam5, "ped_emo_thanks", "ped_emo_thanks", "HangingUnlawful_msg06", "HangingUnlawful_msg06", 30.0f, 2, -5.0f, 0, 4.0f, 0, 0, 0, 1, 0, 0x40800000))
			{
				if (iLocal_107 == 1)
				{
					iLocal_46 = 1;
					Function_78(GET_ACTOR_ENUM_FACTION(iLocal_21[0]));
					Function_153(bParam3);
					Function_73(100, 1, 0);
					Function_35(50, 1, 0);
					AI_GOAL_LOOK_CLEAR(bParam3);
					*uParam0 = 15;
				}
			}
			else if (Function_161(bParam3, 0))
			{
				*uParam0 = 15;
			}
			else
			{
				return 1;
			}
			break;
		
		case 0x0000000F:
			bParam7 = GET_MOUNT(bParam2);
			if (Function_161(bParam2, 0) && Function_161(bParam7, 0))
			{
				bVar1 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_ACTOR(false, bParam3, 5.0f, 2);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bParam2, bVar1);
				TASK_SEQUENCE_RELEASE(bVar1, 1);
				if (bLocal_50)
				{
					SET_ANIM_SET_FOR_ACTOR(bParam3, "gent_ride_passenger", 0);
				}
				else
				{
					SET_ANIM_SET_FOR_ACTOR(bParam3, "fema_ride_passenger", 0);
				}
				SET_MOUNTS_AS_PASSENGER(bParam3, 1);
				TASK_MOUNT(bParam3, bParam7, 0, 1, 2, 2147483647);
				*uParam0 = 16;
			}
			else
			{
				MEMORY_PREFER_RIDING(bParam3, true);
				if (Function_161(bParam2, 0))
				{
					MEMORY_PREFER_RIDING(bParam2, true);
					TASK_FOLLOW_ACTOR(bParam2, bParam3);
				}
				Function_132(bParam3, 4, 0, 2);
				return 1;
			}
			break;
		
		case 0x00000010:
			if (GET_TASK_STATUS(bParam3, 11) != 0 && IS_ACTOR_RIDING_AND_IN_SADDLE(bParam3))
			{
				Function_133(bParam2, 0.0f, 0.0f, 0.0f, 0, 0, 2, 1);
				return 1;
			}
			break;
		
		case 0x00000011:
			if (Function_34(bParam8, uParam9))
			{
				return 1;
			}
			break;
		
		case 0x00000012:
			Function_140(&bParam2, bParam8);
			Function_138(bParam8, bParam7, bParam3, uParam5);
			Function_33(bParam8, 3, &iLocal_37, &bLocal_38, 1);
			if (!IS_ACTOR_VALID(bParam2))
			{
				*uParam0 = 17;
			}
			if (!bLocal_38)
			{
				Function_78(GET_ACTOR_ENUM_FACTION(iLocal_21[0]));
				TASK_CLEAR(bParam2);
				bVar1 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_OBJECT(false, bLocal_47, 6.0f, 4, 0, 1);
				TASK_DISMOUNT(false, 1);
				TASK_PRIORITY_SET(bParam2, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bParam2, bVar1);
				TASK_SEQUENCE_RELEASE(bVar1, 1);
				*uParam0 = 19;
			}
			else if (!bLocal_43)
			{
				*uParam0 = 19;
			}
			break;
		
		case 0x00000013:
			if (Function_161(bParam2, 1))
			{
				if (!IS_ACTOR_RIDING(bParam2))
				{
					MEMORY_CLEAR_EVENTS(bParam2, 1);
					Function_24(bParam2, GET_GRINGO_FROM_OBJECT(bLocal_47), "UseCase1", 4294967295, 4, 0);
					Function_21(bParam2, 1);
					if (!bLocal_43)
					{
						*uParam0 = 17;
					}
					else
					{
						return 1;
					}
				}
				if (!bLocal_43)
				{
					iVar0 = 0;
					while (iVar0 <= 3)
					{
						if (Function_161((*bParam8)[iVar0], 0) && !bLocal_118)
						{
							TASK_FLEE_COORD(bParam2, &vLocal_93, 4, -1.0f, -1.0f, 0);
							bLocal_118 = true;
						}
						iVar0++;
					}
					if (bLocal_118)
					{
						*uParam0 = 17;
					}
					else
					{
						TASK_FLEE_COORD(bParam2, &vLocal_93, 4, -1.0f, -1.0f, 0);
						return 1;
					}
				}
			}
			*uParam0 = 17;
			break;
	}
	return 0;
}

int Function_21(bool bParam0, int iParam1) //Position: 0x25BD / 9661
{
	char* cVar0[64];
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		strcpy(&cVar0, "ACTORROAM_SET_OPTIONS_FOR_ACTOR: invalid actor ", 64);
		stradd(&cVar0, GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(bParam0)), 64);
		return 0;
	}
	if (!Function_23(bParam0))
	{
		strcpy(&cVar0, "ACTORROAM_SET_OPTIONS_FOR_ACTOR: invalid actor ", 64);
		stradd(&cVar0, GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(bParam0)), 64);
		return 0;
	}
	Function_22(bParam0, iParam1);
	return 1;
}

void Function_22(bool bParam0, bool bParam1) //Position: 0x2665 / 9829
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_options", bParam1);
	return;
}

bool Function_23(bool bParam0) //Position: 0x268A / 9866
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

int Function_24(bool bParam0, bool bParam1, bool bParam2, int iParam3, var uParam4, int iParam5) //Position: 0x26AF / 9903
{
	if (!IS_GRINGO_VALID(bParam1))
	{
		return 0;
	}
	if (IS_STRING_VALID(bParam2) != 0 || STRINGS_ARE_EQUAL(bParam2, ""))
	{
		return 0;
	}
	if (iParam3 <= 0)
	{
		iParam3 = 4294967295;
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		if (!IS_ACTOR_VEHICLE(bParam0))
		{
			SQUAD_LEAVE(bParam0);
		}
		GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_GRINGO(bParam1), Global_6290);
		if (!(GET_TASK_STATUS(bParam0, 19) != 1 || GET_TASK_STATUS(bParam0, 19) != 3))
		{
			TASK_USE_GRINGO(bParam0, bParam1, bParam2, iParam3, 1);
			TASK_PRIORITY_SET(bParam0, iParam5);
		}
		Function_25(bParam0, 5, GET_OBJECT_FROM_GRINGO(bParam1), uParam4, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_25(bool bParam0, int iParam1, bool bParam2, var uParam3, int iParam4) //Position: 0x2747 / 10055
{
	char* cVar0[32];
	
	Function_32();
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
	if (Function_31(bParam0) == 1)
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
	Function_30(bParam0, 0);
	Function_29(bParam0, iParam1);
	Function_28(bParam0, bParam2);
	Function_27(bParam0, uParam3);
	if (Function_26(bParam0) != 5)
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

int Function_26(bool bParam0) //Position: 0x2995 / 10645
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior");
}

void Function_27(bool bParam0, bool bParam1) //Position: 0x29B8 / 10680
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_28(bool bParam0, bool bParam1) //Position: 0x29DB / 10715
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_target", bParam1);
	return;
}

void Function_29(bool bParam0, bool bParam1) //Position: 0x29FF / 10751
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_30(bool bParam0, bool bParam1) //Position: 0x2A25 / 10789
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_state", bParam1);
	return;
}

int Function_31(bool bParam0) //Position: 0x2A48 / 10824
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
}

void Function_32() //Position: 0x2A66 / 10854
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

void Function_33(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x2AB0 / 10928
{
	int iVar0;
	
	*uParam2 = 1;
	*uParam3 = 0;
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		if (Function_161((*uParam0)[iVar0], bParam4))
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

bool Function_34(var uParam0, int iParam1) //Position: 0x2AEC / 10988
{
	int iVar0;
	
	switch (iLocal_121)
	{
		case 0x00000000:
			Function_150(&iLocal_126, 3, 0, 4294967295, 4294967295);
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (IS_ACTOR_ALIVE((*uParam0)[iVar0]))
				{
					TASK_CLEAR((*uParam0)[iVar0]);
					TASK_MOUNT((*uParam0)[iVar0], (*iParam1)[iVar0], 0, 1, 2, 2147483647);
					TASK_PRIORITY_SET((*uParam0)[iVar0], 0);
				}
				iVar0++;
			}
			iLocal_121 = 1;
			break;
		
		case 0x00000001:
			if (GET_TASK_STATUS((*uParam0)[0], 11) == 0)
			{
				if (!iLocal_26)
				{
					Function_133((*uParam0)[0], 0.0f, 0.0f, 0.0f, 0, 0, 2, 1);
					iLocal_26 = 1;
				}
			}
			if (GET_TASK_STATUS((*uParam0)[1], 11) == 0)
			{
				if (!iLocal_27)
				{
					Function_133((*uParam0)[1], 0.0f, 0.0f, 0.0f, 0, 0, 2, 1);
					iLocal_27 = 1;
				}
			}
			if (GET_TASK_STATUS((*uParam0)[2], 11) == 0)
			{
				if (!iLocal_28)
				{
					Function_133((*uParam0)[2], 0.0f, 0.0f, 0.0f, 0, 0, 2, 1);
					iLocal_28 = 1;
				}
			}
			if ((!IS_ACTOR_VALID((*uParam0)[0]) && !IS_ACTOR_VALID((*uParam0)[1])) && !IS_ACTOR_VALID((*uParam0)[2]))
			{
				iLocal_121 = 2;
			}
			if ((iLocal_26 && iLocal_27) && iLocal_28)
			{
				iLocal_121 = 2;
			}
			break;
		
		case 0x00000002:
			return 1;
			break;
	}
	return 0;
}

void Function_35(int iParam0, bool bParam1, bool bParam2) //Position: 0x2C0E / 11278
{
	int iVar0;
	bool bVar1;
	
	if (Function_72(0) && (!Global_3380 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_71())
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
	iVar0 = Function_70(3);
	Function_67();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_65(3, bVar1);
		if (!bParam2)
		{
			if (!Function_64(Global_76848, 4))
			{
				Function_58(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_45(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_44(3));
	iVar0 = Function_70(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_37(4, Function_43(Global_12976.f_156), 1);
				Function_36(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_37(4, Function_43(Global_12976.f_156), 1);
				Function_36(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_37(4, Function_43(Global_12976.f_156), 1);
				Function_36(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_37(4, Function_43(Global_12976.f_156), 1);
				Function_36(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_37(4, Function_43(Global_12976.f_156), 1);
				Function_36(Global_12976.f_152, Global_12976.f_156);
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

void Function_36(int iParam0, int iParam1) //Position: 0x2DDD / 11741
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

int Function_37(int iParam0, char* cParam1, bool bParam2) //Position: 0x303B / 12347
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
	Function_41(iParam0, cParam1, 0, 1);
	iVar1 = Function_38();
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

int Function_38() //Position: 0x31C0 / 12736
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
	Function_39();
	return 0;
}

void Function_39() //Position: 0x325F / 12895
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
		Function_40(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_40(int iParam0) //Position: 0x330E / 13070
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

int Function_41(int iParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0x336C / 13164
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
		Function_42(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, uParam3);
	}
	return 1;
}

void Function_42(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x36BE / 14014
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

var Function_43(int iParam0) //Position: 0x3741 / 14145
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

float Function_44(int iParam0) //Position: 0x37D0 / 14288
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

int Function_45(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x3809 / 14345
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
	Function_57(iParam0, TO_FLOAT(bParam1), 1);
	Function_56(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_46(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_46(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x3A29 / 14889
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_55(390))), 32);
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
					bVar19 = (Function_44(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_44(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_53(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_50(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_48(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_47(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_276(), &Var9);
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

var Function_47(int iParam0) //Position: 0x4057 / 16471
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_48(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x4068 / 16488
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_49("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_49("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_49("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_49(char* cParam0, bool bParam1) //Position: 0x415D / 16733
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_50(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x4176 / 16758
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_52(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_51(Function_52(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_51(int iParam0, int iParam1) //Position: 0x41DB / 16859
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_52(int iParam0, bool bParam1) //Position: 0x41ED / 16877
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_53(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x41FF / 16895
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
	if (((Function_54(iParam0) != 19 || Function_54(iParam0) != 17) || Function_54(iParam0) != 10) || Function_54(iParam0) != 9)
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

int Function_54(int iParam0) //Position: 0x432F / 17199
{
	return Global_35278[iParam020].f_48;
}

var Function_55(int iParam0) //Position: 0x433E / 17214
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_56(int iParam0) //Position: 0x437B / 17275
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

int Function_57(int iParam0, bool bParam1, bool bParam2) //Position: 0x4515 / 17685
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

void Function_58(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x4759 / 18265
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_60(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_59(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_59(char* cParam0, int iParam1) //Position: 0x47C5 / 18373
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

bool Function_60(bool bParam0, var uParam1, int iParam2) //Position: 0x47FC / 18428
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
		if (Function_62(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_61(uVar0))
		{
			case 0x00000002:
				if (!Function_64(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_61(char* cParam0) //Position: 0x4874 / 18548
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

int Function_62(int iParam0) //Position: 0x4915 / 18709
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_63(&iVar1, 2147483648);
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

void Function_63(int iParam0, int iParam1) //Position: 0x4952 / 18770
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

bool Function_64(var uParam0, int iParam1) //Position: 0x4965 / 18789
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_65(int iParam0, bool bParam1) //Position: 0x4978 / 18808
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
	iVar1 = Function_66(iParam0, 4294967295);
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
	iVar1 = Function_38();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

var Function_66(int iParam0, int iParam1) //Position: 0x4B15 / 19221
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

void Function_67() //Position: 0x4B56 / 19286
{
	Function_69(3, 0.0f);
	Function_68(3, 10000.0f);
	return;
}

int Function_68(int iParam0, int iParam1) //Position: 0x4B6C / 19308
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_69(int iParam0, int iParam1) //Position: 0x4BAC / 19372
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

int Function_70(bool bParam0) //Position: 0x4BEC / 19436
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

bool Function_71() //Position: 0x4C2D / 19501
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

var Function_72(int iParam0) //Position: 0x4C58 / 19544
{
	return (*&Global_12976 + 104)[iParam0];
}

void Function_73(int iParam0, bool bParam1, bool bParam2) //Position: 0x4C67 / 19559
{
	int iVar0;
	bool bVar1;
	
	if (Function_72(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_71())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_70(1);
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
			Function_65(1, bVar1);
			if (!bParam2)
			{
				if (!Function_64(Global_76848, 1))
				{
					Function_58(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_77(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_64(Global_76848, 2))
				{
					Function_58(Global_34573, 2, 3, 0);
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
		Function_76(1, (4294967295 * bVar1), 0);
	}
	if (Function_70(1) <= 4294962296)
	{
		Function_75(1, 4294962296, 0);
	}
	else if (Function_70(1) >= 5000)
	{
		Function_75(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_44(1));
	iVar0 = Function_70(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_37(2, Function_74(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_37(2, Function_74(Global_12976.f_152), 0);
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
				Function_37(2, Function_74(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_37(2, Function_74(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_37(2, Function_74(Global_12976.f_152), 1);
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
				Function_37(2, Function_74(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_37(2, Function_74(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_37(2, Function_74(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_37(2, Function_74(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_37(2, Function_74(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_37(2, Function_74(Global_12976.f_152), 1);
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
				Function_37(2, Function_74(Global_12976.f_152), 0);
			}
			break;
	}
	Function_36(Global_12976.f_152, Global_12976.f_156);
	return;
}

var Function_74(int iParam0) //Position: 0x4F88 / 20360
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

int Function_75(int iParam0, bool bParam1, bool bParam2) //Position: 0x502B / 20523
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
		Function_57(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_56(iParam0);
	if (bParam2)
	{
		Function_46(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_76(int iParam0, bool bParam1, int iParam2) //Position: 0x52C6 / 21190
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
	Function_56(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_46(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_77(int iParam0, bool bParam1) //Position: 0x54C1 / 21697
{
	bool bVar0;
	int iVar1;
	
	Function_76(iParam0, bParam1, 0);
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
	iVar1 = Function_66(iParam0, 4294967295);
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
	iVar1 = Function_38();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

void Function_78(int iParam0) //Position: 0x565D / 22109
{
	if (!IS_FACTION_VALID(iParam0))
	{
		return;
	}
	if (!Function_130(3))
	{
		return;
	}
	if (Function_129())
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
			if (IS_PS3() || Function_128())
			{
				Function_79(4, 16, 0, 0, 1);
			}
			break;
		
		case 0x0000000E:
			Function_79(5, 16, 0, 0, 1);
			break;
		
		case 0x0000000C:
			Function_79(7, 16, 0, 0, 1);
			break;
	}
	return;
}

void Function_79(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x56CB / 22219
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_127(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_130(3) || iParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_126(bParam0, 2))
	{
		Function_45(456, 1, 0, 0);
		Function_125(bParam0, 2);
		if (!bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_124(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_123(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_125(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_122(0, 0, 1, 1))
			{
				Function_99(1);
				Function_98(1, 0);
			}
			else
			{
				Function_97();
			}
		}
		Function_92(bParam0);
		if (StackVal && !Function_10(((((!Function_91() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_10((((Function_91() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_9())
		{
			if (!Function_64(Global_76846, 2))
			{
				Function_58(Global_34573, 2, 1, 0);
			}
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_82();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_81(3, bParam1);
				break;
			
			case 0x00000005:
				Function_81(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_81(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_81(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_81(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_81(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_80(2, 24);
				break;
			
			case 0x00000003:
				Function_80(2, 25);
				break;
			
			case 0x0000000F:
				Function_80(2, 26);
				break;
			
			case 0x0000000D:
				Function_80(2, 27);
				break;
			
			case 0x0000000E:
				Function_80(2, 28);
				break;
			}
	}
}

void Function_80(int iParam0, bool bParam1) //Position: 0x5961 / 22881
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

void Function_81(int iParam0, bool bParam1) //Position: 0x59C8 / 22984
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

void Function_82() //Position: 0x5A33 / 23091
{
	if (Function_127(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_90(Global_28180);
			Global_28180.f_8 = Function_83(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_90(Global_28180);
			Global_28180.f_8 = Function_83(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_83(int iParam0, int iParam1) //Position: 0x5AAE / 23214
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
					if (Function_86(6, 0) || Function_86(12, 0))
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
					if (Function_85(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_86(5, 0))
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
					if (Function_85(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_85(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_85(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_85(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_86(26, 0))
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
					if (Function_85(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_85(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_85(27) && iVar18)
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
					if (Function_85(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_85(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_85(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_85(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_86(17, 0) && iVar15)
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
					if (Function_85(19) && iVar19)
					{
						vVar0 = { -1708.36f, 46.18f, 2175.89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_86(6, 0) && Function_85(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_85(17) && iVar19)
					{
						vVar0 = { -1687.208f, 53.208f, 2140.491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_86(9, 0) && Function_85(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_85(15) && iVar19)
					{
						vVar0 = { -1709.084f, 55.216f, 2104.631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_86(8, 0) && iVar19)
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
	if (Function_84(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_84(StackVal, StackVal, vVar3))
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
	if (!Function_84(StackVal, StackVal, vVar3))
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

bool Function_84(vector3 vParam0) //Position: 0x669F / 26271
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

int Function_85(int iParam0) //Position: 0x66B7 / 26295
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_86(int iParam0, bool bParam1) //Position: 0x66CC / 26316
{
	int iVar0;
	
	iVar0 = Function_88(iParam0);
	if (!Function_87(iVar0))
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

bool Function_87(int iParam0) //Position: 0x6709 / 26377
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_88(int iParam0) //Position: 0x6720 / 26400
{
	if (!Function_89(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_89(int iParam0) //Position: 0x673A / 26426
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

int Function_90(int iParam0) //Position: 0x6750 / 26448
{
	int iVar0;
	int iVar1;
	
	if (!Function_127(iParam0))
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

bool Function_91() //Position: 0x679F / 26527
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_92(bool bParam0) //Position: 0x67CC / 26572
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
			if (Function_123(bParam0, Function_96(bVar24)))
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
			if (Function_123(bParam0, Function_96(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_95(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), 0, 0);
		Function_94(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_93(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_93(int iParam0) //Position: 0x697C / 27004
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_127(iParam0))
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

void Function_94(var uParam0, int iParam1) //Position: 0x69D3 / 27091
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

var Function_95(int iParam0) //Position: 0x69F8 / 27128
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_127(iParam0))
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

int Function_96(bool bParam0) //Position: 0x6A4E / 27214
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_97() //Position: 0x6A5A / 27226
{
	return;
}

void Function_98(var uParam0, int iParam1) //Position: 0x6A60 / 27232
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = uParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_129())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_99(bool bParam0) //Position: 0x6AA2 / 27298
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_114();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_100();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_63(&Global_63095, 1);
		Function_63(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_100() //Position: 0x6AF3 / 27379
{
	Function_112();
	Function_111();
	Function_111();
	Function_110();
	Function_110();
	Function_109();
	Function_109();
	Function_108(0);
	Function_108(0);
	if (!Function_129())
	{
		Function_105();
		Function_104();
		Function_103();
		Function_102();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_101();
	return;
}

void Function_101() //Position: 0x6B45 / 27461
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

void Function_102() //Position: 0x6C4B / 27723
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

void Function_103() //Position: 0x6C7E / 27774
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
					Global_76695[iVar23] = iVar3;
					Global_76695[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					Global_76695[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(iVar3);
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

void Function_104() //Position: 0x6E0C / 28172
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
					Global_76543[iVar23] = iVar3;
					Global_76543[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					Global_76543[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(iVar3);
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

void Function_105() //Position: 0x6FC0 / 28608
{
	Function_106(&Global_28260, 1, 0);
	return;
}

void Function_106(int iParam0, bool bParam1, var uParam2) //Position: 0x6FCE / 28622
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	var uVar11;
	bool bVar12;
	bool bVar13;
	
	bVar0 = Function_107();
	if (IS_ACTOR_VALID(bVar0))
	{
		iParam0->f_1012 = GET_NUM_WEAPONS_IN_INVENTORY(bVar0);
		iVar7 = 4294967294;
		iVar8 = GET_WEAPON_IN_HAND(bVar0);
		if (iVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(bVar0, iVar8) || uParam2)
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
				if (GET_ITEM_EQUIPSLOT(iVar8) == bVar10)
				{
					(*iParam0 + 1088)[iVar4] = iVar8;
					iParam0->f_1120 = iVar8;
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

var Function_107() //Position: 0x71BF / 29119
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_108(char* cParam0) //Position: 0x71D4 / 29140
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
					iVar2 = ((Function_70((50 + iVar4)) + Function_70((183 + iVar4))) + Function_70((90 + iVar4)));
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
	Function_75(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

struct<8> Function_109() //Position: 0x727A / 29306
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
		iVar2 = ((Function_70((50 + iVar3) + 15) + Function_70((183 + iVar3) + 15)) + Function_70((90 + iVar3) + 15));
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
	Function_75(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_110() //Position: 0x7303 / 29443
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
			iVar2 = ((Function_70((50 + iVar3) + 8) + Function_70((183 + iVar3) + 8)) + Function_70((90 + iVar3) + 8));
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
	Function_75(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_111() //Position: 0x739A / 29594
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
		iVar2 = ((Function_70((50 + iVar3)) + Function_70((183 + iVar3))) + Function_70((90 + iVar3)));
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
	Function_75(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_112() //Position: 0x7419 / 29721
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_113(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_75(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_113(int iParam0, bool bParam1, int iParam2) //Position: 0x7452 / 29778
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
	Function_57(iParam0, bParam1, 1);
	Function_56(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_46(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_114() //Position: 0x765C / 30300
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_9())
	{
		Function_119(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_119(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_115(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_115(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_84(StackVal, StackVal, vVar0))
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

vector3 Function_115(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x7717 / 30487
{
	int iVar0;
	
	iVar0 = Function_117(uParam2, uParam3);
	if (Function_116(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_190(&Global_63095, 1);
			Function_63(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_190(&Global_63095, 2);
			Function_63(&Global_63095, 1);
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
		Function_190(&Global_63095, 2);
		Function_63(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_188();
	return StackVal, StackVal, Function_188();
}

bool Function_116(int iParam0) //Position: 0x77FE / 30718
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_117(bool bParam0, bool bParam1) //Position: 0x7814 / 30740
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
				fVar2 = Function_118(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_118(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_116(bVar0) && !bParam1)
	{
		bVar0 = Function_117(bParam0, 1);
	}
	return bVar0;
}

float Function_118(vector3 vParam0, vector3 vParam3) //Position: 0x78DB / 30939
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_119(var uParam0, int iParam1) //Position: 0x78F8 / 30968
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_121(Global_34573, &vVar4);
	if (!Function_120(Global_30640[0]))
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
	if (!Function_120(Global_30640[2]))
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
	if (!Function_120(Global_30640[1]))
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
	if (!Function_120(Global_30658[1]))
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
	if (!Function_120(Global_30658[3]))
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
	if (!Function_120(Global_30658[2]))
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
	if (!Function_120(Global_30658[4]))
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
	if (!Function_120(Global_30668[0]))
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
	if (!Function_120(Global_30668[1]))
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
	if (!Function_120(Global_30668[2]))
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
	if (!Function_120(Global_30679[0]))
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
	if (!Function_120(Global_30685[0]))
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
	if (!Function_120(Global_30685[1]))
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
	if (!Function_120(Global_30685[2]))
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
	if (!Function_120(Global_30693[0]))
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
	if (!Function_120(Global_30693[1]))
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
	if (!Function_120(Global_30693[2]))
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
	if (!Function_120(Global_30707[2]))
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
	if (!Function_120(Global_30707[3]))
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
	if (!Function_120(Global_30707[0]))
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
	if (!Function_120(Global_30717[0]))
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
	if (!Function_120(Global_30723[2]))
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
	if (!Function_120(Global_30723[1]))
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
	if (!Function_120(Global_30723[0]))
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
	if (!Function_120(Global_30679[1]))
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
	if (!Function_120(Global_30707[1]))
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
	Function_190(&Global_63095, 2);
	Function_63(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_84(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_120(int iParam0) //Position: 0x811F / 33055
{
	bool bVar0;
	
	bVar0 = Global_29008[iParam0];
	return (((Function_10(bVar0, 0x1000000) || Function_10(bVar0, 0x2000000)) || Function_10(bVar0, 0x4000000)) || !Function_10(bVar0, 0x10000000));
}

void Function_121(bool bParam0, int iParam1) //Position: 0x815A / 33114
{
	GET_POSITION(bParam0, iParam1);
	return;
}

bool Function_122(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x8167 / 33127
{
	uParam0 = uParam0;
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
	if (Global_3393 && uParam2)
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
	if (Global_59353 && uParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

bool Function_123(bool bParam0, int iParam1) //Position: 0x820B / 33291
{
	int iVar0;
	
	if (!Function_127(bParam0))
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

void Function_124(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x826A / 33386
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_8(Global_6269) };
		}
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

void Function_125(int iParam0, int iParam1) //Position: 0x82E5 / 33509
{
	if (!Function_127(iParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[iParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_126(int iParam0, int iParam1) //Position: 0x833A / 33594
{
	int iVar0;
	
	if (!Function_127(iParam0))
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

bool Function_127(int iParam0) //Position: 0x8367 / 33639
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_128() //Position: 0x837D / 33661
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_10(GET_GAME_EDITION(), 16);
	}
	return 0;
}

bool Function_129() //Position: 0x83AD / 33709
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_130(bool bParam0) //Position: 0x83B6 / 33718
{
	if (bParam0 > 0 && bParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[bParam0];
}

bool Function_131(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, float fParam6, var uParam7, bool bParam8, var uParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, int iParam15, float fParam16, bool bParam17, var uParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, var uParam23, float fParam24) //Position: 0x83D2 / 33746
{
	bool bVar0;
	
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
				*uParam2 = Function_163(*uParam0, Global_34573);
				AI_GOAL_LOOK_AT_ACTOR_NEW(*uParam0, *uParam1, -1.0f, 1);
				bParam8 = CREATE_POINT_IN_LAYOUT(bParam5, Function_276(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
				ATTACH_OBJECTS(bParam8, *uParam1, Function_276(), 0.0f, 0.5f, fParam16, 0.0f, 0.0f, 0.0f, 4294967295);
				if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), *uParam0, 1.0f, iParam14, 1, 1, 0) || Function_163(Global_34573, *uParam0) > 2.0f)
				{
					TASK_FOLLOW_OBJECT_AT_DISTANCE(*uParam0, bParam8, 1.0f, iParam15);
					TASK_PRIORITY_SET(*uParam0, 1);
				}
				*uParam3 = 1;
			}
			break;
		
		case 0x00000001:
			if ((Function_163(*uParam0, *uParam1) - *uParam2) < fParam6)
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
				TASK_PRIORITY_SET(*uParam0, 1);
				*uParam9 = 0;
				*uParam3 = 4;
			}
			else if (!Function_161(*uParam0, 0))
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
					Function_147(*uParam0, Global_34573, "nThank_You", 0, 5, 60, 1, 1);
				}
				else
				{
					Function_147(*uParam0, Global_34573, bParam12, bParam13, 5, 60, 1, 1);
				}
				*uParam3 = 5;
				Function_273(uParam4, 0.0f);
			}
			else if (!Function_161(*uParam0, 0))
			{
				return 0;
			}
			break;
		
		case 0x00000005:
			if (uParam23 && !Function_23(*uParam0))
			{
				if (fParam24 != -1.0f)
				{
					if (!IS_AMBIENT_SPEECH_PLAYING(*uParam0))
					{
						RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
						Function_132(*uParam0, 4, 0, 1);
					}
				}
				else if (Function_143(uParam4, fParam24))
				{
					RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
					Function_132(*uParam0, 4, 0, 1);
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
							Function_147(Global_34573, *uParam0, bParam20, bParam20, 5, 60, 1, 1);
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
			if (uParam23 && !Function_23(*uParam0))
			{
				if (Function_143(uParam4, fParam24))
				{
					RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
					Function_132(*uParam0, 4, 0, 1);
				}
			}
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(*uParam0, bParam11) && !IS_AMBIENT_SPEECH_PLAYING(Global_34573))
			{
				RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
				*uParam7 = 1;
				if (bParam17)
				{
					Function_132(*uParam0, 4, 0, iParam15);
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

int Function_132(bool bParam0, int iParam1, int iParam2, int iParam3) //Position: 0x8778 / 34680
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
					Function_25(bVar1, 0, 0, 0, 1);
				}
				bVar0++;
			}
		}
		Function_25(bParam0, iParam1, iParam2, iParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

void Function_133(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x8858 / 34904
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
	if (!Function_84(StackVal, StackVal, vParam1))
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

int Function_134(bool bParam0, bool bParam1) //Position: 0x8960 / 35168
{
	bool bVar0;
	bool bVar1;
	
	if (IS_ACTOR_VALID(bParam1))
	{
		bVar0 = GET_MOUNT(bParam1);
	}
	if ((Function_161(bParam1, 0) && Function_161(bVar0, 0)) && Function_161(bParam0, 0))
	{
		if (bLocal_34)
		{
			REMOVE_ACTOR_STAY_WITHIN_VOLUME(bParam1, bLocal_123);
		}
		bVar1 = TASK_SEQUENCE_OPEN();
		TASK_GO_NEAR_ACTOR(false, bParam0, 6.0f, 2);
		TASK_STAND_STILL(false, -1.0f, 0, 0);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(bParam1, bVar1);
		TASK_SEQUENCE_RELEASE(bVar1, 1);
		TASK_PRIORITY_SET(bParam1, 1);
		if (bLocal_50)
		{
			SET_ANIM_SET_FOR_ACTOR(bParam0, "gent_ride_passenger", 0);
		}
		else
		{
			SET_ANIM_SET_FOR_ACTOR(bParam0, "fema_ride_passenger", 0);
		}
		SET_MOUNTS_AS_PASSENGER(bParam0, 1);
		TASK_MOUNT(bParam0, bVar0, 0, 1, 2, 2147483647);
		return 1;
	}
	if (Function_161(bParam0, 0))
	{
		TASK_FLEE_ACTOR(bParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
		if (Function_161(bParam1, 0))
		{
			TASK_FOLLOW_ACTOR(bParam1, bParam0);
		}
	}
	return 0;
}

bool Function_135(bool bParam0, bool bParam1, bool bParam2, vector3 vParam3, bool bParam6) //Position: 0x8A42 / 35394
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	bVar0 = false;
	if (IS_ACTOR_VALID(bParam1))
	{
		bVar2 = GET_MOUNT(bParam1);
	}
	if (GET_TASK_STATUS(bParam0, 11) != 0 && GET_MOUNT(bParam0) != bVar2)
	{
		TASK_FLEE_ACTOR(bParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
		Function_137(bParam0, 0, 1);
		if (Function_161(bParam1, 0))
		{
			TASK_FLEE_ACTOR(bParam1, Global_34573, -1.0f, -1.0f, 0, 0, 0);
			if (bLocal_34)
			{
				REMOVE_ACTOR_STAY_WITHIN_VOLUME(bParam1, bLocal_123);
				bLocal_34 = false;
			}
		}
	}
	else if (IS_ACTOR_VALID(bVar2))
	{
		TASK_MOUNT(bParam0, bVar2, 0, 1, 2, 2147483647);
	}
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (Function_161((*bParam2)[iVar1], 1))
		{
			bVar0 = true;
		}
		iVar1++;
	}
	if (!IS_ACTOR_ALIVE(bParam0))
	{
		return 1;
	}
	if (!bVar0)
	{
		Function_153(bParam0);
		Function_73(200, 1, 0);
		Function_35(50, 1, 0);
		Function_136(bParam6, 1);
		Function_150(&iLocal_126, 3, 0, 4294967295, 4294967295);
		iLocal_46 = 1;
		return 1;
	}
	if (Function_16(StackVal, StackVal, bParam0, vParam3) < 60.0f)
	{
		Function_153(bParam0);
		Function_73(200, 1, 0);
		Function_35(50, 1, 0);
		Function_136(bParam6, 1);
		iLocal_46 = 1;
		return 1;
	}
	return 0;
}

int Function_136(bool bParam0, bool bParam1) //Position: 0x8B59 / 35673
{
	bool bVar0;
	
	bVar0 = Function_70(0);
	if ((Function_70(0) + bParam0) >= 999999)
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
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_70(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_45(597, bParam0, 0, 0);
	}
	if ((Function_70(597) + Function_70(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

void Function_137(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8C24 / 35876
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_IGNORE_ACTOR(bParam0);
		if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
		{
			FIRE_STOP_ON_ACTOR(bParam0);
		}
		SET_ACTOR_INVULNERABILITY(bParam0, 1);
		CLEAR_ACTOR_MIN_SPEED(bParam0);
		CLEAR_ACTOR_MAX_SPEED(bParam0);
		TASK_OVERRIDE_CLEAR_MOVETYPE(bParam0);
		RESET_ACTOR_GAITS(bParam0, 0);
		if (IS_ACTOR_VALID(GET_MOUNT(bParam0)))
		{
			RESET_ACTOR_GAITS(GET_MOUNT(bParam0), 0);
		}
		if (bParam2)
		{
			SET_ACTOR_CUTSCENE_MODE(bParam0, 1);
		}
		SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
		AI_SET_NAV_PATHFINDING_ENABLED(bParam0, 0);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bParam0, 1);
	}
	else
	{
		AI_GOAL_LOOK_CLEAR(bParam0);
		SET_ACTOR_INVULNERABILITY(bParam0, 0);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 1);
		AI_SET_NAV_PATHFINDING_ENABLED(bParam0, 1);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bParam0, 2);
		SET_ACTOR_CUTSCENE_MODE(bParam0, 0);
	}
	return;
}

int Function_138(bool bParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0x8CBE / 36030
{
	float fVar0;
	
	bParam1 = bParam1;
	if (IS_ACTOR_VALID((*bParam0)[0]))
	{
	}
	switch (iLocal_88)
	{
		case 0x00000000:
			DECOR_SET_BOOL(bParam2, "Buck_Off", true);
			Function_139(&iLocal_113);
			iLocal_39 = 1;
			Function_273(&uLocal_89, 0.0f);
			*uParam3 = 0;
			iLocal_88 = 1;
			break;
		
		case 0x00000001:
			*uParam3 = 0;
			if (DECOR_GET_BOOL(bParam2, "Buck_Complete") != 1 || Function_143(&uLocal_89, 4.0f))
			{
				if (!bLocal_117)
				{
					SET_ACTOR_HANGING_FROM_NOOSE(bParam2, 1);
					DECOR_SET_FLOAT(bParam2, "HangWritheIntensity", 1.0f);
				}
				TASK_FLEE_ACTOR(bParam1, bParam2, -1.0f, -1.0f, 0, 0, 0);
				TASK_PRIORITY_SET(bParam1, 1);
				Function_273(&uLocal_102, 0.0f);
				iLocal_88 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_143(&uLocal_102, 5.0f) && !iLocal_29)
			{
				iLocal_29 = 1;
				fVar0 = GET_ACTOR_HEALTH(bParam2);
				SET_ACTOR_HEALTH(bParam2, (fVar0 / 2.0f));
			}
			if (Function_143(&uLocal_102, 10.0f))
			{
				if (!bLocal_117)
				{
					STOP_PED_SPEAKING(bParam2, 1);
					KILL_ACTOR(bParam2);
					iLocal_88 = 3;
				}
			}
			break;
		
		case 0x00000003:
			return 1;
			break;
	}
	return 0;
}

void Function_139(int iParam0) //Position: 0x8DD6 / 36310
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

void Function_140(bool bParam0, bool bParam1) //Position: 0x8DEA / 36330
{
	int iVar0;
	
	if (!Function_161(*bParam0, 0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= *bParam1)
	{
		if (Function_161((*bParam1)[iVar0], 0))
		{
			if (Function_163(*bParam0, (*bParam1)[iVar0]) > 35.0f)
			{
				Function_149((*bParam1)[iVar0], bParam0);
				Function_149(*bParam0, bParam1[iVar0]);
				return;
			}
		}
		iVar0++;
	}
	return;
}

void Function_141(bool bParam0) //Position: 0x8E4C / 36428
{
	Global_16876[bParam06].f_16++;
	if (Global_16876[bParam06].f_16 == 1)
	{
		Function_45(409, 1, 0, 0);
	}
	return;
}

void Function_142(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x8E7D / 36477
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
			Var0 = { StackVal, StackVal, StackVal, Function_8(Global_6269) };
		}
		PRINT_OBJECTIVE_B(iParam0, iParam1, iParam7, iParam3, bParam2, &Var0, 0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_OBJECTIVE_B(iParam0, iParam1, iParam7, iParam3, bParam2, iVar4, iParam5, iParam6);
	}
}

bool Function_143(var uParam0, float fParam1) //Position: 0x8F02 / 36610
{
	if (Function_146(uParam0))
	{
		if (Function_144(uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_144(bool bParam0) //Position: 0x8F1E / 36638
{
	if (Function_146(bParam0))
	{
		if (Function_145(bParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_145(int iParam0) //Position: 0x8FE6 / 36838
{
	return Function_10(*iParam0, 2);
}

bool Function_146(bool bParam0) //Position: 0x8FF3 / 36851
{
	return Function_10(*bParam0, 1);
}

void Function_147(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x9000 / 36864
{
	bParam1 = bParam1;
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0) && Function_163(bParam0, Global_34573) >= IntToFloat(iParam5))
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

bool Function_148(var uParam0, var uParam1, var uParam2, bool bParam3, float fParam4, var uParam5, bool bParam6, var uParam7, var uParam8, float fParam9, bool bParam10, int iParam11, float fParam12, float fParam13, var uParam14, var uParam15) //Position: 0x9090 / 37008
{
	float fVar0;
	
	if (!IS_ACTOR_VALID(*uParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(*uParam1))
	{
		return 0;
	}
	if (fParam13 == 0.0f && !*uParam8)
	{
		if (fParam13 > fParam9)
		{
			LOG_ERROR("firstAudioDist is too low to ever work");
		}
		else if (Function_163(*uParam0, *uParam1) > fParam13)
		{
			*uParam8 = 1;
			Function_147(*uParam0, Global_34573, uParam14, uParam14, 5, 60, 1, uParam15);
			Function_273(uParam7, 0.0f);
		}
	}
	switch (*uParam2)
	{
		case 0x00000000:
			SET_ACTOR_UPDATE_PRIORITY(*uParam0, false);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(*uParam0, 0);
			fLocal_20 = Function_163(*uParam0, Global_34573);
			AI_GOAL_LOOK_AT_ACTOR_NEW(*uParam0, *uParam1, -1.0f, 1);
			bParam6 = CREATE_POINT_IN_LAYOUT(bParam3, Function_276(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
			ATTACH_OBJECTS(bParam6, *uParam1, Function_276(), 0.0f, 0.5f, fParam12, 0.0f, 0.0f, 0.0f, 4294967295);
			TASK_FOLLOW_OBJECT_AT_DISTANCE(*uParam0, bParam6, 1.0f, iParam11);
			TASK_PRIORITY_SET(*uParam0, 1);
			*uParam2 = 1;
			break;
		
		case 0x00000001:
			if (IS_ACTOR_ON_FOOT(Global_34573))
			{
				fVar0 = (fParam9 - 3.0f);
			}
			else
			{
				fVar0 = fParam9;
			}
			if ((Function_163(*uParam0, *uParam1) - fLocal_20) < fParam4)
			{
				return 0;
			}
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), *uParam0, 1.0f, fVar0, 1, 1, 0))
			{
				if (bParam10)
				{
					TASK_CLEAR(*uParam0);
					TASK_FACE_ACTOR(*uParam0, *uParam1, 1, 3212836864);
				}
				else
				{
					AI_GOAL_LOOK_CLEAR(*uParam0);
				}
				*uParam5 = 1;
				return 1;
			}
			if (!Function_161(*uParam0, 0))
			{
				return 0;
			}
			break;
	}
	return 1;
}

int Function_149(bool bParam0, bool bParam1) //Position: 0x921E / 37406
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
	if (!IS_ACTOR_VALID(*bParam1))
	{
		LOG_ERROR("VICTIM is invalid in TASK_KILL_ACTOR_RUTHLESS");
		return 0;
	}
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, -1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 37, 2.0f);
	MEMORY_ALLOW_TAKE_COVER(bParam0, 0);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(bParam0, 0);
	MEMORY_REPORT_POSITION_AUTO(bParam0, *bParam1, 1);
	TASK_KILL_CHAR(bParam0, *bParam1);
	TASK_PRIORITY_SET(bParam0, 1);
	return 1;
}

void Function_150(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x9303 / 37635
{
	if (*iParam0 != iParam1)
	{
		*iParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_151(*iParam0), iParam2, iParam3, iParam4);
	}
}

var Function_151(int iParam0) //Position: 0x9327 / 37671
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
	return iVar0;
}

void Function_152(bool bParam0) //Position: 0x987A / 39034
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

int Function_153(bool bParam0) //Position: 0x98C6 / 39110
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_154(bParam0);
		return 1;
	}
	return 0;
}

void Function_154(bool bParam0) //Position: 0x98DC / 39132
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

bool Function_155(bool bParam0, var uParam1, float fParam2, int iParam3, bool bParam4, float fParam5) //Position: 0x9908 / 39176
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
		fVar0 = Function_163(bParam0, Global_34573);
		if (!Function_10(iParam3, 8))
		{
			if (GET_LAST_ATTACKER(bParam0) == Global_34573)
			{
				*uParam1 = 8;
				Function_156(bParam0);
				return 1;
			}
		}
		if (!Function_10(iParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(bParam0, 1.0f))
			{
				*uParam1 = 2;
				Function_156(bParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(bParam0, 1.0f, 1.0f))
			{
				*uParam1 = 2;
				Function_156(bParam0);
				return 1;
			}
		}
		if (!Function_10(iParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(bParam0) || (((GET_ACTOR_UNDER_RETICLE(Global_34573, 0) != bParam0 && IS_PLAYER_WEAPON_ZOOMED(Global_34573)) && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(Global_34573) != bParam0 && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f))
			{
				if (*fParam2 > 0.0f)
				{
					*uParam1 = 4;
					Function_156(bParam0);
					return 1;
				}
				if (*fParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - *fParam2) < 1.3f)
					{
						*uParam1 = 4;
						Function_156(bParam0);
						return 1;
					}
				}
				*fParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_10(iParam3, 1))
		{
			if (Global_3403 || Global_3404)
			{
				*uParam1 = 1;
				Function_156(bParam0);
				return 1;
			}
		}
		if (!Function_10(iParam3, 16))
		{
			if (UNK_0x7F454A92(bParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(bParam0)) > 2.0f && fVar0 > 18.0f)
				{
					*uParam1 = 16;
					Function_156(bParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_156(bool bParam0) //Position: 0x9A9F / 39583
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(bParam0, 1);
	UNK_0x99AFD2D1(bParam0, 0, 0);
	Function_157(bParam0);
	MEMORY_CONSIDER_AS(Global_34573, bParam0, 2);
	MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
	AI_GOAL_LOOK_CLEAR(bParam0);
	return;
}

void Function_157(bool bParam0) //Position: 0x9AD3 / 39635
{
	SAY_SINGLE_LINE_CONTEXT(bParam0, 60, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

int Function_158(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x9AEA / 39658
{
	int iVar0;
	
	uParam7 = uParam7;
	if (!bParam6)
	{
		iVar0 = 0;
		while (iVar0 <= iParam1)
		{
			if (Function_155((*uParam0)[iVar0], uParam3, uParam4, uParam5, bParam6, 0x40400000))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void Function_159(var uParam0, bool bParam1, bool bParam2) //Position: 0x9B32 / 39730
{
	if (bParam1)
	{
		HUD_CLEAR_HELP_QUEUE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
		Function_142(uParam0, 0x40f00000, 1, 2, 0, 0, 0, 0);
		if (bParam2)
		{
			Function_160();
		}
	}
	return;
}

void Function_160() //Position: 0x9B5B / 39771
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

bool Function_161(bool bParam0, bool bParam1) //Position: 0x9BE4 / 39908
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
			Function_153(bParam0);
			return 0;
		}
		if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 163840))
		{
			Function_153(bParam0);
			return 0;
		}
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		if (Function_162(bParam0, 0) && !AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 16384))
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

int Function_162(bool bParam0, int iParam1) //Position: 0x9C80 / 40064
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

float Function_163(bool bParam0, bool bParam1) //Position: 0x9CCA / 40138
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

void Function_164(bool bParam0, bool bParam1) //Position: 0x9DBB / 40379
{
	int iVar0;
	
	AI_CLEAR_DONT_HARM_ACTOR(*bParam0);
	iVar0 = 0;
	while (iVar0 <= *bParam1)
	{
		AI_CLEAR_DONT_HARM_ACTOR((*bParam1)[iVar0]);
		iVar0++;
	}
	return;
}

void Function_165() //Position: 0x9DE4 / 40420
{
	int iVar0;
	
	bLocal_125 = true;
	if (Global_29004 == 0)
	{
		iVar0 = Function_166(4);
		if (iVar0 == 0)
		{
			cLocal_124 = "FTR_SONG_05";
		}
		else if (iVar0 == 1)
		{
			cLocal_124 = "FTR_SONG_06";
		}
		else if (iVar0 == 2)
		{
			cLocal_124 = "FTR_SONG_07";
		}
		else
		{
			iVar0 = 3;
			cLocal_124 = "FTR_SONG_09";
		}
	}
	else if (Global_29004 == 2)
	{
		cLocal_124 = "NRT_SONG_05";
	}
	AUDIO_MUSIC_FORCE_TRACK(cLocal_124, "DRAMATIC_LOW", 0.0f, 100, 4294967295, 3212836864, 0);
	iLocal_126 = 11;
	return;
}

var Function_166(bool bParam0) //Position: 0x9E94 / 40596
{
	bParam0 = (bParam0 * 1000 - 1);
	return (RAND_INT_RANGE(0, bParam0) / 1000);
}

bool Function_167(bool bParam0, int iParam1, bool bParam2) //Position: 0x9EAD / 40621
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		if (IS_ACTOR_VALID((*bParam0)[iVar0]))
		{
			if (Function_163((*bParam0)[iVar0], Global_34573) > bParam2)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_168(int iParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x9EE7 / 40679
{
	if (StackVal & 64 == 64)
	{
		if (!*uParam2)
		{
			if (IS_ACTOR_VALID(bParam1))
			{
				if (Function_163(Global_34573, bParam1) > 15.0f)
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
		if (Function_171() && !*uParam2)
		{
			return 0;
		}
		if (Function_170(iParam0) && !*uParam2)
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
		if (!Function_169(iParam0, uParam5))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_169(int iParam0, int iParam1) //Position: 0xA015 / 40981
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

int Function_170(int iParam0) //Position: 0xA036 / 41014
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

int Function_171() //Position: 0xA074 / 41076
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
						if (Function_172(StackVal, Global_34573) > IntToFloat(iVar1))
						{
							return 1;
						}
					}
				}
			}
			if (Function_172(StackVal, Global_34573) > IntToFloat(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

float Function_172(bool bParam0, bool bParam1) //Position: 0xA12F / 41263
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_17(bParam0);
			vVar0 = { StackVal, StackVal, Function_17(bParam0) };
			Function_173(bParam1);
			vVar3 = { StackVal, StackVal, Function_173(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

vector3 Function_173(bool bParam0) //Position: 0xA1CF / 41423
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

void Function_174(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6) //Position: 0xA23B / 41531
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
			Function_186(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_185(0);
		}
		if (bParam6)
		{
			Function_183(0, GET_THIS_SCRIPT_ID());
			Global_3373 = GET_THIS_SCRIPT_ID();
			Global_3401 = 1;
			Function_181(iParam3);
		}
		Function_179(iParam3);
		if (Function_178(StackVal, 32768))
		{
			Function_175(1);
		}
		Global_16876[iParam36].f_12++;
		Function_45(408, 1, 0, 0);
	}
}

void Function_175(bool bParam0) //Position: 0xA328 / 41768
{
	if (bParam0)
	{
		Function_177(0x10000000);
	}
	else
	{
		Function_176(0x10000000);
	}
	Global_26316.f_172 = 0;
	return;
}

void Function_176(int iParam0) //Position: 0xA34C / 41804
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_177(int iParam0) //Position: 0xA369 / 41833
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

bool Function_178(var uParam0, int iParam1) //Position: 0xA37C / 41852
{
	return (uParam0 && iParam1) == 0;
}

void Function_179(int iParam0) //Position: 0xA389 / 41865
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (!Function_10(StackVal, 524288))
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
			bVar1 = Function_180(iVar0 * 60);
			ADD_TIME(&Global_17483[iParam075] + 264, 0, 0, bVar1, 0);
			Global_16876[iParam06] = Global_17483[iParam075].f_264;
		}
	}
	return;
}

int Function_180(int iParam0) //Position: 0xA42D / 42029
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_181(int iParam0) //Position: 0xA443 / 42051
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
	Function_182(&Var0 + 80[Var0.f_763], &(Global_16876[iParam06]), iParam0);
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

void Function_182(var uParam0, var uParam1, int iParam2) //Position: 0xA4E1 / 42209
{
	uParam0->f_4 = iParam2;
	*uParam0 = uParam1->f_12;
	uParam0->f_8 = 1;
	return;
}

void Function_183(int iParam0, int iParam1) //Position: 0xA4F9 / 42233
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
			Function_184(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_184(int iParam0) //Position: 0xA57B / 42363
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

void Function_185(int iParam0) //Position: 0xA5C9 / 42441
{
	Global_12976.f_76 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 76, 0, 0, (iParam0 + Function_180(900)), 0);
	return;
}

void Function_186(bool bParam0) //Position: 0xA5EB / 42475
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, (bParam0 + Function_180(200)), 0);
	return;
}

void Function_187(vector3 vParam0, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, bool bParam8) //Position: 0xA60C / 42508
{
	int iVar0;
	
	iVar0 = 0;
	if (!*iParam3)
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
			*iParam3 = 1;
		}
	}
	else if (!Function_84(StackVal, StackVal, vParam0))
	{
		if (CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), vParam0, 1.0f, iParam7, 1, 1, 0))
		{
			if (iParam6 != 0)
			{
				Global_25265 = (GET_CURRENT_GAME_TIME() + IntToFloat(iParam6));
			}
			*iParam3 = 1;
		}
	}
	if (*iParam3 && iVar0)
	{
		if (StackVal & 64 == 64)
		{
			Function_186(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_185(0);
		}
		if (bParam8)
		{
			Function_183(0, GET_THIS_SCRIPT_ID());
			Global_3373 = GET_THIS_SCRIPT_ID();
			Function_181(iParam4);
			Global_3401 = 1;
		}
		Function_179(iParam4);
		if (Function_178(StackVal, 32768))
		{
			Function_175(1);
		}
		Global_16876[iParam46].f_12++;
		Function_45(408, 1, 0, 0);
	}
}

vector3 Function_188() //Position: 0xA713 / 42771
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_189(var uParam0, int iParam1) //Position: 0xA71C / 42780
{
	if (Function_143(uParam0, iParam1))
	{
		Function_139(uParam0);
		return 1;
	}
	return 0;
}

void Function_190(var uParam0, int iParam1) //Position: 0xA734 / 42804
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_191(var uParam0, var uParam1, var uParam2, float fParam3, vector3 vParam4) //Position: 0xA743 / 42819
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
		if (Function_192(StackVal, StackVal, Global_30616, "player_herb", &uVar0, 20.0f, 5, vParam4) >= 0)
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

int Function_192(bool bParam0, bool bParam1, var uParam2, float fParam3, int iParam4, vector3 vParam5) //Position: 0xA7E4 / 42980
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

void Function_193(bool bParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0xA878 / 43128
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (bLocal_50)
	{
		vLocal_56 = { -0.008f, 0.036f, -0.008f };
		vLocal_59 = { -3.046f, 4.262f, 13.672f };
	}
	else
	{
		vLocal_56 = { 0.01f, 0.034f, 0.003f };
		vLocal_59 = { -1.221f, 63.601f, -14.377f };
	}
	Function_196(bParam2);
	vLocal_96 = { StackVal, StackVal, Function_196(bParam2) };
	fVar0 = Function_195(uParam3);
	fVar1 = 0.3f;
	fVar2 = 1.5f;
	fLocal_108 = ((fVar0 - fVar2) - fVar1);
	fVar3 = (fLocal_108 * 0.9f);
	if (bLocal_50)
	{
		bLocal_119 = CREATE_PROP_IN_LAYOUT(bParam1, "noTheNoose", "p_gen_noose03x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	}
	else
	{
		bLocal_119 = CREATE_PROP_IN_LAYOUT(bParam1, "noTheNoose", "p_gen_noose03x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	}
	SET_OBJECT_COLLIDE_WITH_OBJECT(bLocal_119, bParam0, 0);
	SET_OBJECT_COLLIDE_WITH_OBJECT(bParam0, bLocal_119, 0);
	SET_OBJECT_COLLIDE_WITH_OBJECT(bParam0, bLocal_120, 0);
	SET_OBJECT_COLLIDE_WITH_OBJECT(bLocal_120, bParam0, 0);
	ATTACH_OBJECTS(bLocal_119, bParam0, "neck", vLocal_56, vLocal_59, 4294967295);
	bLocal_120 = CREATE_LEASH_OBJECT(bParam0, "theNoose", 10.0f, 5, 1, 0.006f, 10.0f, 10000.0f, 200.0f, 8.0f, 100.0f, 1.0f, 1, 0, 0);
	LEASH_ATTACH_TO_OBJECT_BONE(bLocal_120, bParam0, "neck", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0, 1, 1);
	Function_194(bParam0, bLocal_120, bLocal_119);
	LEASH_STAY_CONSTRAINED(bLocal_120, 1);
	LEASH_ATTACH_TO_WORLD(bLocal_120, vLocal_96, 0.0f, 0.0f, 0.0f, 1);
	while (!LEASH_CONSTRAIN(bLocal_120) && !IS_EXITFLAG_SET())
	{
	}
	LEASH_SET_CONSTRAINT_LENGTH(bLocal_120, fLocal_108);
	LEASH_SET_LEASH_LENGTH(bLocal_120, fVar3);
	SET_ACTOR_CUTSCENE_MODE(bParam0, 1);
}

void Function_194(bool bParam0, bool bParam1, bool bParam2) //Position: 0xAA34 / 43572
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_MALE(bParam0))
	{
		vLocal_56 = { -0.008f, 0.036f, -0.008f };
		vLocal_59 = { -3.046f, 4.262f, 13.672f };
	}
	else
	{
		vLocal_56 = { 0.01f, 0.034f, 0.003f };
		vLocal_59 = { -1.221f, 63.601f, -14.377f };
	}
	GET_LOCATOR_OFFSETS(GET_PHYSINST_FROM_OBJECT(bParam2), "attachRope", &vVar0, &vVar3);
	UNK_0xF76F2BB3(&vVar0, &vLocal_59, 0, 0);
	UNK_0x65DAA654(&vVar3, &vLocal_59, 0, 0, 0, 0);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vLocal_56, vVar0, StackVal) };
	LEASH_ATTACH_TO_OBJECT_BONE_VISUAL(bParam1, bParam0, "neck", vVar0, vVar3, 0, 1, 1);
	return;
}

var Function_195(int iParam0) //Position: 0xAAE6 / 43750
{
	if (Global_29005 == Global_30628[0])
	{
		if (VDIST(*iParam0, -2511.156f, 25.09802f, 2779.65f) > 1.0f)
		{
			return 3.0f;
		}
		if (VDIST(*iParam0, -1920.0f, 31.28032f, 2261.344f) > 1.0f)
		{
			return 3.5f;
		}
		if (VDIST(*iParam0, -2925.0f, 18.63521f, 2669.0f) > 1.0f)
		{
			return 3.0f;
		}
		if (VDIST(*iParam0, -2107.098f, 18.16976f, 2014.983f) > 1.0f)
		{
			return 3.4f;
		}
	}
	if (Global_29005 == Global_30628[1])
	{
		if (VDIST(*iParam0, -3935.961f, 28.107f, 2635.271f) > 1.0f)
		{
			return 3.6f;
		}
		if (VDIST(*iParam0, -4424.0f, 25.73199f, 2967.308f) > 1.0f)
		{
			return 3.4f;
		}
		if (VDIST(*iParam0, -4064f, 9.035286f, 3491.478f) > 1.0f)
		{
			return 3.3f;
		}
	}
	if (Global_29005 == Global_30628[2])
	{
		if (VDIST(*iParam0, -1084f, 100.499f, 2904.0f) > 1.0f)
		{
			return 3.0f;
		}
		if (VDIST(*iParam0, -872.724f, 41.17292f, 3066.799f) > 1.0f)
		{
			return 3.0f;
		}
		if (VDIST(*iParam0, -113.557f, 101.4299f, 2772f) > 1.0f)
		{
			return 3.0f;
		}
	}
	if (Global_29005 == Global_30628[3])
	{
		if (VDIST(*iParam0, -3491.979f, 29.20257f, 3781.121f) > 1.0f)
		{
			return 3.0f;
		}
		if (VDIST(*iParam0, -3329.551f, 42.9619f, 3262.086f) > 1.0f)
		{
			return 2.9f;
		}
		if (VDIST(*iParam0, -2375.709f, 80.88108f, 3428.962f) > 1.0f)
		{
			return 3.0f;
		}
	}
	if (Global_29005 == Global_30637[0])
	{
		if (VDIST(*iParam0, 278.2518f, 91.27737f, 923.1232f) > 1.0f)
		{
			return 3.0f;
		}
		if (VDIST(*iParam0, 480.021f, 98.41798f, 1787.462f) > 1.0f)
		{
			return 3.0f;
		}
		if (VDIST(*iParam0, 798.021f, 77.34565f, 1709.07f) > 1.0f)
		{
			return 3.0f;
		}
	}
	if (Global_29005 == Global_30637[1])
	{
		if (VDIST(*iParam0, -321.0f, 123.3054f, 1962.0f) > 1.0f)
		{
			return 3.3f;
		}
		if (VDIST(*iParam0, -683.979f, 152.1264f, 1858.651f) > 1.0f)
		{
			return 3.0f;
		}
		if (VDIST(*iParam0, -664.083f, 174.4142f, 1395.394f) > 1.0f)
		{
			return 3.0f;
		}
	}
	LOG_ERROR("unrecognized tree location, using default");
	return 3.0f;
}

vector3 Function_196(bool bParam0) //Position: 0xADDD / 44509
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

int Function_197(bool bParam0, bool bParam1, int iParam2, int iParam3) //Position: 0xAE04 / 44548
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

void Function_198(bool bParam0, float fParam1, float fParam2, float fParam3) //Position: 0xAE57 / 44631
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

int Function_199(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, vector3 vParam5, vector3 vParam8) //Position: 0xAE9E / 44702
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
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

bool Function_200(bool bParam0) //Position: 0xAFC3 / 44995
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

vector3 Function_201(vector3 vParam0, vector3 vParam3) //Position: 0xAFDA / 45018
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	VNORMALIZE(&vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_202() //Position: 0xAFF8 / 45048
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

bool Function_203(var uParam0, int iParam1, float fParam2, float fParam3) //Position: 0xB00A / 45066
{
	bool bVar0;
	bool bVar1;
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
	bVar0 = Function_205(StackVal, StackVal, Global_30616, "hangingTree", *uParam0, fParam2);
	if (IS_OBJECT_VALID(bVar0))
	{
		bVar1 = GET_OBJECT_NAME(bVar0);
		Function_196(bVar0);
		*(iParam1 + 72) = { StackVal, StackVal, Function_196(bVar0) };
		STRING_CLEAR_TOKENIZER();
		SET_OWNERSHIP_STRAGGLER(bVar1, "_");
		strcpy(&cVar2, STRING_GET_TOKEN(1), 8);
		if (Function_16(StackVal, StackVal, Global_34573, *(iParam1 + 72)) < fParam3)
		{
			return 0;
		}
		iParam1->f_96 = LOCATE_PHYSINST_OF_TYPE(*(iParam1 + 72), 20.0f, "p_gen_hangLocator01x", 1);
		Function_204(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar4, *(iParam1 + 72));
		*iParam1 = { StackVal, StackVal, Function_204(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar4, *(iParam1 + 72)) };
		stradd(&cVar10, &cVar2, 24);
		Function_204(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar10, *(iParam1 + 72));
		*(iParam1 + 12) = { StackVal, StackVal, Function_204(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar10, *(iParam1 + 72)) };
		if (Function_84(StackVal, StackVal, *(iParam1 + 12)))
		{
			return 0;
		}
		stradd(&cVar16, &cVar2, 24);
		Function_204(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar16, *(iParam1 + 72));
		*(iParam1 + 24) = { StackVal, StackVal, Function_204(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar16, *(iParam1 + 72)) };
		if (Function_84(StackVal, StackVal, *(iParam1 + 24)))
		{
			return 0;
		}
		stradd(&cVar22, &cVar2, 24);
		Function_204(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar22, *(iParam1 + 72));
		*(iParam1 + 36) = { StackVal, StackVal, Function_204(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar22, *(iParam1 + 72)) };
		if (Function_84(StackVal, StackVal, *(iParam1 + 36)))
		{
			return 0;
		}
		stradd(&cVar28, &cVar2, 24);
		Function_204(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar28, *(iParam1 + 72));
		*(iParam1 + 48) = { StackVal, StackVal, Function_204(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar28, *(iParam1 + 72)) };
		if (Function_84(StackVal, StackVal, *(iParam1 + 48)))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

vector3 Function_204(bool bParam0, char* cParam1, char* cParam2, char* cParam3, char* cParam4, char* cParam5, vector3 vParam6) //Position: 0xB1C0 / 45504
{
	bool bVar0;
	
	bVar0 = Function_205(StackVal, StackVal, Global_30616, &bParam0, vParam6, 0);
	if (IS_OBJECT_VALID(bVar0))
	{
		Function_196(bVar0);
		return StackVal, StackVal, Function_196(bVar0);
	}
	PRINTSTRING(&bParam0);
	LOG_ERROR("hanging event: Unable to find named flag");
	Function_188();
	return StackVal, StackVal, Function_188();
}

var Function_205(bool bParam0, bool bParam1, vector3 vParam2, float fParam5) //Position: 0xB220 / 45600
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

bool Function_206(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0xB2A3 / 45731
{
	struct<8> Var0;
	bool bVar8;
	bool bVar9;
	
	if (Global_3371 && iParam0->f_32)
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_245(GET_SCRIPT_NAME()) };
		bVar8 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Global_26150, &Var0, 4.203895E-45f, Function_243(*(iParam0 + 8), 0.0f, Global_34573, *(iParam0 + 8)), 0.0f, iParam0->f_52, 20.0f, iParam0->f_52);
		DECOR_SET_INT(bVar8, "script", GET_THIS_SCRIPT_ID());
		if (iParam0->f_56 != 4294967295)
		{
			DECOR_SET_INT(StackVal, bVar8, "category");
			Function_241(&bVar8, iParam0->f_32);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
		*(iParam0 + 8) = { StackVal, StackVal, Global_34574 };
		return 1;
	}
	*uParam3 = 0;
	if (!Function_207(iParam0))
	{
		if (iParam0->f_32 == 1)
		{
			if (*uParam2 == 0)
			{
				Function_7("Still scanning for the proper terrain to run this event.  Move the player around to find a good spawn location.", -1.0f, 1, 2, 1, 0);
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
		Function_7("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 5.0f, 1, 2, 1, 0);
	}
	if (bParam4)
	{
		if (!Function_5(iParam0->f_56, 0, 1, 0, 0))
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
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_245("restrictVol") };
		bVar9 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Global_26150, &Var0, 4.203895E-45f, Function_243(*(iParam0 + 8), 0.0f, Global_34573, *(iParam0 + 8)), 0.0f, iParam0->f_52, 20.0f, iParam0->f_52);
		DECOR_SET_INT(bVar9, "script", GET_THIS_SCRIPT_ID());
		if (iParam0->f_56 != 4294967295)
		{
			DECOR_SET_INT(StackVal, bVar9, "category");
			Function_241(&bVar9, iParam0->f_32);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
	}
	return 1;
}

bool Function_207(int iParam0) //Position: 0xB635 / 46645
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
			Function_240(iParam0 + 4);
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
				vVar3 = { 0.0f, 0.0f, Function_14(1) };
				ROTATE_VECTOR_XZ(&vVar3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar3, StackVal) };
				ITERATE_IN_SPHERE(StackVal, vVar3, Function_14(1));
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
						bVar0 = Function_239(StackVal, StackVal, StackVal, vVar9, 0.01f);
					}
					else
					{
						bVar0 = Function_238(StackVal, StackVal, StackVal, vVar9, 0.1f, "locflag", (iParam0 + 64 + 24)->f_16);
					}
				}
				else if ((iParam0 + 64 + 24)->f_16 == 0)
				{
					bVar0 = Function_236(StackVal, StackVal, StackVal, vVar9, Function_237());
				}
				else
				{
					bVar0 = Function_235(StackVal, StackVal, StackVal, vVar9, Function_237(), "locflag", (iParam0 + 64 + 24)->f_16);
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
			Function_240(iParam0 + 4);
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
					if (Function_234(bVar14))
					{
						if (StackVal == (iParam0 + 64)->f_48)
						{
							if ((StackVal && Global_29008[bVar14]) >= 0)
							{
								GET_OBJECT_POSITION(bVar1, &vVar3);
								if (VDIST(vVar9, vVar3) < fVar13 && VDIST(vVar9, vVar3) > Function_14(1))
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
				Function_233(iParam0 + 8, 99.0f, iParam0 + 8, 10);
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
				Function_232(&vVar9, &vVar6);
				vVar3 = { StackVal, StackVal, Function_232(&vVar9, &vVar6) };
				if (!Function_84(StackVal, StackVal, vVar3))
				{
					PRINTSTRING("Player Pos: ");
					PRINTVECTOR(vVar9);
					PRINTNL();
					Function_15(&fVar13, &fVar12);
					if (VDIST(vVar3, vVar9) < ((fVar13 + ((fVar12 - fVar13) / 2.0f)) * 0.8f))
					{
						iVar2 = Function_229(StackVal, StackVal, iParam0, vVar3);
					}
				}
			}
			else
			{
				iVar2 = Function_225(iParam0);
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
					if (!Function_224(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (iParam0->f_60 == 1)
				{
					if (!Function_223(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (Function_10(StackVal, 131072))
				{
					if (StackVal || Function_222(StackVal, Function_222(StackVal, StackVal, *(iParam0 + 8)), Global_34574))
					{
						return 0;
					}
				}
				if (StackVal & 1024 == 1024)
				{
					if (Function_221(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (!Function_217(iParam0 + 8, iParam0 + 52, 0, iParam0->f_32))
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
				uVar23 = START_CURVE_QUERY(Global_28841, vVar3, Function_216((iParam0 + 64)->f_120, 0), 0.0f, 20.0f, 5.0f, 0);
			}
			else
			{
				uVar23 = START_CURVE_QUERY(Global_28841, vVar9, Function_216((iParam0 + 64)->f_120, 0), 120.0f, 150.0f, 5.0f, 0);
			}
			if (GET_NUM_POINTS_IN_CURVE_QUERY(uVar23) >= 0)
			{
				bVar21 = RAND_INT_RANGE(0, (GET_NUM_POINTS_IN_CURVE_QUERY(uVar23) - 1));
				GET_POINT_FROM_CURVE_QUERY(uVar23, bVar21, &Var15);
				Function_215(&Var15);
				*(iParam0 + 8) = { StackVal, StackVal, Function_215(&Var15) };
				iParam0->f_20 = Var15.f_12;
				(iParam0 + 20)->f_4 = Var15.f_16;
				iParam0->f_48 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(uVar23, bVar21);
				UNK_0xDF93BD7C(uVar23);
			}
			else
			{
				UNK_0xDF93BD7C(uVar23);
				return 0;
			}
			if (iParam0->f_60 == 2)
			{
				if (!Function_224(StackVal, StackVal, *(iParam0 + 8)))
				{
					return 0;
				}
			}
			if (iParam0->f_60 == 1)
			{
				if (!Function_223(StackVal, StackVal, *(iParam0 + 8)))
				{
					return 0;
				}
			}
			if (iParam0->f_60 == 0)
			{
				if (!(StackVal || Function_224(StackVal, Function_223(StackVal, StackVal, *(iParam0 + 8)), *(iParam0 + 8))))
				{
					return 0;
				}
			}
			if (Function_10(StackVal, 131072))
			{
				if (StackVal || Function_222(StackVal, Function_222(StackVal, StackVal, *(iParam0 + 8)), Global_34574))
				{
					return 0;
				}
			}
			if (StackVal && !Function_217(iParam0 + 8, iParam0 + 52, 0, iParam0->f_32) == 262144)
			{
				return 0;
			}
			break;
		
		case 0x00000004:
			if (!Function_212((iParam0 + 64)->f_120) < 0)
			{
				return 0;
			}
			break;
		
		case 0x00000007:
			switch ((iParam0 + 64)->f_128)
			{
				case 0x00000001:
					bVar24 = Function_209(StackVal, Global_29004, Global_29005, Global_29006, 1);
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
						bVar24 = Function_209(StackVal, Global_29004, Global_29005, (Global_29006 + iVar22), 1);
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
	if (Function_208(StackVal, StackVal, *(iParam0 + 8)))
	{
		return 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(*(iParam0 + 8), 10.0f))
	{
		return 0;
	}
	return 1;
}

bool Function_208(vector3 vParam0) //Position: 0xBE5F / 48735
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

bool Function_209(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xBE94 / 48788
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
								return Function_210(&Global_6298, &Global_7189, bParam3);
								break;
							
							case 0x00000001:
								return Function_210(&Global_6364, &Global_7287, bParam3);
								break;
							
							case 0x00000002:
								return Function_210(&Global_6351, &Global_7268, bParam3);
								break;
							
							default:
								return Function_210(&Global_6391, &Global_7327, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_210(&Global_6501, &Global_7490, bParam3);
								break;
							
							case 0x00000001:
								return Function_210(&Global_6402, &Global_7343, bParam3);
								break;
							
							case 0x00000003:
								return Function_210(&Global_6433, &Global_7389, bParam3);
								break;
							
							case 0x00000002:
								return Function_210(&Global_6490, &Global_7474, bParam3);
								break;
							
							case 0x00000004:
								return Function_210(&Global_6537, &Global_7543, bParam3);
								break;
							
							default:
								return Function_210(&Global_6532, &Global_7536, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_210(&Global_6563, &Global_7581, bParam3);
								break;
							
							case 0x00000001:
								return Function_210(&Global_6614, &Global_7657, bParam3);
								break;
							
							case 0x00000002:
								return Function_210(&Global_6643, &Global_7700, bParam3);
								break;
							
							default:
								return Function_210(&Global_6550, &Global_7562, bParam3);
								break;
						}
						break;
					
					case 0x00000003:
						switch (bVar1)
						{
							case 0x00000001:
								return Function_210(&Global_6667, &Global_7735, bParam3);
								break;
							
							default:
								return Function_210(&Global_6704, &Global_7790, bParam3);
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
								return Function_210(&Global_6709, &Global_7797, bParam3);
								break;
							
							case 0x00000001:
								return Function_210(&Global_6764, &Global_7879, bParam3);
								break;
							
							case 0x00000002:
								return Function_210(&Global_6785, &Global_7910, bParam3);
								break;
							
							default:
								return Function_210(&Global_6810, &Global_7947, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_210(&Global_6815, &Global_7954, bParam3);
								break;
							
							default:
								return Function_210(&Global_6928, &Global_8122, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000002:
								return Function_210(&Global_6933, &Global_8129, bParam3);
								break;
							
							case 0x00000001:
								return Function_210(&Global_6962, &Global_8172, bParam3);
								break;
							
							case 0x00000003:
								return Function_210(&Global_6987, &Global_8209, bParam3);
								break;
							
							default:
								return Function_210(&Global_7027, &Global_8268, bParam3);
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
		return Function_210(&Global_6298, &Global_7189, bParam3);
	}
	if (bVar1 == Global_30640[1])
	{
		return Function_210(&Global_6364, &Global_7287, bParam3);
	}
	if (bVar1 == Global_30640[2])
	{
		return Function_210(&Global_6351, &Global_7268, bParam3);
	}
	if (bVar1 == Global_30658[0])
	{
		return Function_210(&Global_6501, &Global_7490, bParam3);
	}
	if (bVar1 == Global_30658[1])
	{
		return Function_210(&Global_6402, &Global_7343, bParam3);
	}
	if (bVar1 == Global_30658[3])
	{
		return Function_210(&Global_6433, &Global_7389, bParam3);
	}
	if (bVar1 == Global_30658[2])
	{
		return Function_210(&Global_6490, &Global_7474, bParam3);
	}
	if (bVar1 == Global_30658[4])
	{
		return Function_210(&Global_6537, &Global_7543, bParam3);
	}
	if (bVar1 == Global_30668[0])
	{
		return Function_210(&Global_6563, &Global_7581, bParam3);
	}
	if (bVar1 == Global_30668[1])
	{
		return Function_210(&Global_6614, &Global_7657, bParam3);
	}
	if (bVar1 == Global_30668[2])
	{
		return Function_210(&Global_6643, &Global_7700, bParam3);
	}
	if (bVar1 == Global_30679[1])
	{
		return Function_210(&Global_6667, &Global_7735, bParam3);
	}
	if (bVar1 == Global_30685[0])
	{
		return Function_210(&Global_6709, &Global_7797, bParam3);
	}
	if (bVar1 == Global_30685[1])
	{
		return Function_210(&Global_6764, &Global_7879, bParam3);
	}
	if (bVar1 == Global_30685[2])
	{
		return Function_210(&Global_6785, &Global_7910, bParam3);
	}
	if (bVar1 == Global_30693[0])
	{
		return Function_210(&Global_6815, &Global_7954, bParam3);
	}
	if (bVar1 == Global_30707[2])
	{
		return Function_210(&Global_6933, &Global_8129, bParam3);
	}
	if (bVar1 == Global_30707[1])
	{
		return Function_210(&Global_6962, &Global_8172, bParam3);
	}
	if (bVar1 == Global_30707[3])
	{
		return Function_210(&Global_6987, &Global_8209, bParam3);
	}
	if (bVar1 == Global_30628[0])
	{
		return Function_210(&Global_6391, &Global_7327, bParam3);
	}
	if (bVar1 == Global_30628[1])
	{
		return Function_210(&Global_6532, &Global_7536, bParam3);
	}
	if (bVar1 == Global_30628[2])
	{
		return Function_210(&Global_6550, &Global_7562, bParam3);
	}
	if (bVar1 == Global_30628[3])
	{
		return Function_210(&Global_6704, &Global_7790, bParam3);
	}
	if (bVar1 == Global_30633[0])
	{
		return Function_210(&Global_6810, &Global_7947, bParam3);
	}
	if (bVar1 == Global_30633[2])
	{
		return Function_210(&Global_6928, &Global_8122, bParam3);
	}
	if (bVar1 == Global_30633[1])
	{
		return Function_210(&Global_7027, &Global_8268, bParam3);
	}
	return "";
}

var Function_210(var uParam0, var uParam1, bool bParam2) //Position: 0xC4AA / 50346
{
	int iVar0;
	
	iVar0 = bParam2;
	if (iVar0 <= *uParam0 || iVar0 > 0)
	{
		return "";
	}
	if (!Function_211(uParam0[iVar02], 2))
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

bool Function_211(var uParam0, int iParam1) //Position: 0xC4FC / 50428
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_212(int iParam0) //Position: 0xC518 / 50456
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
			if (Function_213(GET_SQUAD_FROM_OBJECT(bVar2)) == iParam0)
			{
				iVar0++;
			}
			bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
		}
	}
	DESTROY_ITERATOR(bVar1);
	return iVar0;
}

int Function_213(bool bParam0) //Position: 0xC573 / 50547
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 4294967295;
	}
	bVar0 = Function_214(bParam0);
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

var Function_214(bool bParam0) //Position: 0xC5AB / 50603
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

vector3 Function_215(int iParam0) //Position: 0xC5F1 / 50673
{
	vector3 vVar0;
	
	vVar0.x = *iParam0;
	vVar0.f_4 = StackVal;
	vVar0.f_8 = StackVal;
	return StackVal, StackVal, vVar0;
}

int Function_216(int iParam0, int iParam1) //Position: 0xC610 / 50704
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

bool Function_217(var uParam0, float fParam1, int iParam2, bool bParam3) //Position: 0xC640 / 50752
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
	Function_219(4294967295);
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
			else if (Function_218(uParam0, &uVar0) > fVar5)
			{
				return 0;
			}
		}
		iVar3++;
	}
	return 1;
}

float Function_218(var uParam0, int iParam1) //Position: 0xC710 / 50960
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*iParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

int Function_219(bool bParam0) //Position: 0xC72E / 50990
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
						Function_220(iVar0);
					}
					else if (Global_3386)
					{
						if (Function_16(StackVal, StackVal, Global_34573, vVar1) < 25.0f)
						{
							Function_220(iVar0);
						}
					}
					else if (Function_16(StackVal, StackVal, Global_34573, vVar1) < 55.0f)
					{
						Function_220(iVar0);
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
			Function_220(iVar0);
		}
		iVar0++;
	}
	return 0;
}

void Function_220(int iParam0) //Position: 0xC88F / 51343
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

bool Function_221(vector3 vParam0) //Position: 0xC8F0 / 51440
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

int Function_222(vector3 vParam0) //Position: 0xC991 / 51601
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

bool Function_223(vector3 vParam0) //Position: 0xC9DD / 51677
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

bool Function_224(vector3 vParam0) //Position: 0xCA36 / 51766
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

int Function_225(int iParam0) //Position: 0xCAB3 / 51891
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
		Function_227(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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
	Function_226(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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

void Function_226(struct<33> Param0) //Position: 0xCC4E / 52302
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

void Function_227(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14) //Position: 0xCD7A / 52602
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

void Function_228(bool bParam0) //Position: 0xCDCB / 52683
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

int Function_229(int iParam0, vector3 vParam1) //Position: 0xCE0F / 52751
{
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER(vParam1);
	if (Global_30842[34])
	{
		PRINTVECTOR(vParam1);
		PRINTNL();
	}
	Function_231();
	Function_228(0);
	Function_230(0);
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
		Function_227(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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
	Function_226(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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

void Function_230(bool bParam0) //Position: 0xCFB1 / 53169
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

void Function_231() //Position: 0xD064 / 53348
{
	AMBIENT_SET_DISTANCE_FILTER(0.0f, 24.0f);
	return;
}

vector3 Function_232(var uParam0, int iParam1) //Position: 0xD073 / 53363
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
	GET_POINT_FROM_CURVE_QUERY(uVar10, false, &uVar0);
	bVar6 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(uVar10, false);
	if (IS_OBJECT_VALID(bVar6))
	{
		vVar16 = { StackVal, StackVal, *iParam1 };
		UNK_0x19D652F9(bVar6, 50.0f, &uVar0, &iVar25);
		UNK_0x19D652F9(bVar6, -50.0f, &uVar0, &iVar31);
		Function_215(&iVar25);
		vVar19 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*uParam0, Function_215(&iVar25), StackVal) };
		Function_215(&iVar31);
		vVar22 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*uParam0, Function_215(&iVar31), StackVal) };
		fVar15 = VDOT(&vVar16, &vVar19);
		fVar14 = VDOT(&vVar16, &vVar22);
		Function_15(&fVar7, &fVar8);
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
			Function_215(&iVar31);
			vVar11 = { StackVal, StackVal, Function_215(&iVar31) };
		}
		else
		{
			UNK_0x19D652F9(bVar6, fVar9, &uVar0, &iVar25);
			Function_215(&iVar25);
			vVar11 = { StackVal, StackVal, Function_215(&iVar25) };
		}
	}
	UNK_0xDF93BD7C(uVar10);
	return StackVal, StackVal, vVar11;
}

int Function_233(var uParam0, float fParam1, int iParam2, int iParam3) //Position: 0xD180 / 53632
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
		if (!Function_84(StackVal, StackVal, *iParam2))
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
			if (!Function_84(StackVal, StackVal, *iParam2))
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

bool Function_234(int iParam0) //Position: 0xD2B2 / 53938
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_235(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, var uParam6) //Position: 0xD2C8 / 53960
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
						if (Function_217(&vVar5, &fVar4, 0, 0))
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

var Function_236(bool bParam0, vector3 vParam1, float fParam4) //Position: 0xD370 / 54128
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
				if (Function_217(&vVar5, &uVar4, 0, 0))
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

var Function_237() //Position: 0xD3F9 / 54265
{
	float fVar0;
	int iVar1;
	
	if (Global_3371)
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

var Function_238(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, var uParam6) //Position: 0xD42A / 54314
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

var Function_239(bool bParam0, vector3 vParam1, float fParam4) //Position: 0xD4BF / 54463
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

int Function_240(int iParam0) //Position: 0xD53C / 54588
{
	if (IS_ITERATOR_VALID(*iParam0))
	{
		ITERATE_EVERYWHERE(*iParam0);
		ITERATE_ON_PARTIAL_NAME(*iParam0, Function_276());
		ITERATE_ON_PARTIAL_MODEL_NAME(*iParam0, Function_276());
		ITERATE_ON_OBJECT_TYPE(*iParam0, 4294967295);
		return 1;
	}
	return 0;
}

int Function_241(bool bParam0, int iParam1) //Position: 0xD56D / 54637
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
	Function_219(DECOR_GET_INT(*bParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
		}
		else
		{
			Function_242(iVar0, bParam0, &uVar1, iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(*bParam0);
	return 0;
}

void Function_242(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0xD6CE / 54990
{
	struct<8> Var0;
	
	Global_26155[iParam05].f_8 = *uParam1;
	Global_26155[iParam05].f_16 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_245("stayout") };
	Global_26155[iParam05].f_12 = CREATE_VOLUME_IN_LAYOUT(Global_26150, &Var0, 3, *iParam2, 0.0f, 0.0f, 0.0f, 12.0f, 5.0f, 12.0f);
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	if (bParam3)
	{
		Global_26155[iParam05].f_4 = ADD_BLIP_FOR_COORD(iParam2, 403, 0f, 2, 0);
		SET_BLIP_BLINK(StackVal, 1, 1, 20.0f);
	}
}

var Function_243(bool bParam0, vector3 vParam1) //Position: 0xD769 / 55145
{
	vector3 vVar0;
	var uVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		GET_POSITION(bParam0, &vVar0);
		Function_244(StackVal, StackVal, StackVal, StackVal, vVar0, vParam1, &uVar3);
		return UNK_0x9C40E671(&uVar3);
	}
	return 0.0f;
}

void Function_244(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0xD799 / 55193
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

struct<32> Function_245(bool bParam0) //Position: 0xD7BC / 55228
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_246("0", &cVar8, ""), 4);
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

struct<32> Function_246(char* cParam0, char* cParam1, char* cParam2) //Position: 0xD826 / 55334
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_247(int iParam0) //Position: 0xD845 / 55365
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_252();
	iVar1 = 0;
	if (!Function_4(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_251(iParam0[iVar03], 8);
		}
		else if (Function_250())
		{
			iVar1 = 1;
			Function_251(iParam0[iVar03], 8);
		}
		Function_251(iParam0[iVar03], 16);
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
				Function_251(iParam0[iVar03], 1);
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
							Function_251(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_251(iParam0[iVar03], 2);
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
							Function_251(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_251(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_251(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_251(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_251(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_251(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_251(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_251(iParam0[iVar03], 2);
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

void Function_248() //Position: 0xDBC0 / 56256
{
	if (!Function_249(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_249(int iParam0) //Position: 0xDC00 / 56320
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_250() //Position: 0xDC1C / 56348
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

void Function_251(var uParam0, int iParam1) //Position: 0xDC47 / 56391
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_252() //Position: 0xDC58 / 56408
{
	if (!Function_249(128))
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

void Function_253(bool bParam0) //Position: 0xDC9A / 56474
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

void Function_254(bool bParam0, int iParam1) //Position: 0xDCDC / 56540
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *bParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_253(bParam0[iVar0]);
		iVar0++;
	}
	return;
}

void Function_255(int iParam0) //Position: 0xDD09 / 56585
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

void Function_256(var uParam0, int iParam1) //Position: 0xDD4C / 56652
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_255(uParam0[iVar0]);
		iVar0++;
	}
	return;
}

bool Function_257(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xDD79 / 56697
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

void Function_258(var uParam0, int iParam1) //Position: 0xDDE1 / 56801
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

void Function_259(int iParam0) //Position: 0xDE03 / 56835
{
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(iParam0);
	return;
}

var Function_260(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xDE0E / 56846
{
	return Function_261(uParam0, uParam1, uParam2, 4294967295, uParam3);
}

var Function_261(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xDE22 / 56866
{
	return Function_262(uParam0, uParam1, uParam2, uParam3, uParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_262(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, vector3 vParam6) //Position: 0xDE3B / 56891
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
		Function_267();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, bParam4, iParam5, vParam6);
	if (!Function_200(bVar1))
	{
		if (!Global_30837 && !Global_30838)
		{
			Function_266(bParam0, bParam1, bParam2, bParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_266(bParam0, bParam1, bParam2, bParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && bParam3 != 4294967295)
		{
			while (Function_265(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_200(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_265(bVar0))
				{
					Function_264();
				}
				Function_263(bVar0);
			}
		}
		else if (!bParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != bParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_200(bVar1))
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

void Function_263(int iParam0) //Position: 0xE12E / 57646
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

void Function_264() //Position: 0xE1E2 / 57826
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

bool Function_265(bool bParam0) //Position: 0xE21C / 57884
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

void Function_266(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xE249 / 57929
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

void Function_267() //Position: 0xE39A / 58266
{
	int iVar0;
	
	if (Global_3402)
	{
		if (StackVal || !Global_30742 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_264();
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
	Function_264();
	return;
}

bool Function_268() //Position: 0xE3E5 / 58341
{
	return (RAND_INT_RANGE(0, 1999) / 1000) != 0;
}

var Function_269(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xE3F8 / 58360
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
			Function_251(bParam0[iVar03], 4);
			if (bParam3)
			{
				Function_251(bParam0[iVar03], 8);
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

bool Function_270(int iParam0, int iParam1) //Position: 0xE4C8 / 58568
{
	int iVar0;
	
	iVar0 = (Global_16876[iParam06].f_12 % iParam1);
	return iVar0;
}

var Function_271(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xE4DE / 58590
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_272(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_251(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_272(var uParam0, int iParam1, int iParam2) //Position: 0xE516 / 58646
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_4(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_251(uParam0[iVar03], 4);
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

void Function_273(var uParam0, float fParam1) //Position: 0xE5DA / 58842
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_190(uParam0, 1);
	Function_63(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

var Function_274(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xE5FB / 58875
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
		bVar0 = (bVar0 * (0.75f + ((TO_FLOAT(Function_70(5)) / 100.0f) * 0.5f)));
	}
	if (bParam3)
	{
		if (HAS_ITEM(Function_275(17), Global_34573))
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

var Function_275(bool bParam0) //Position: 0xE6FD / 59133
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

bool Function_276() //Position: 0xE7EE / 59374
{
	var uVar0;
	
	return uVar0;
}

