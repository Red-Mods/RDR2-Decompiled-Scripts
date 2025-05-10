//Decompiled with MagicRDR v1.0
//Function Count : 212
//Statics Count : 182
//Natives Count : 440
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
	var uLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	var uLocal_25 = 0;
	bool bLocal_26 = false;
	bool bLocal_27 = false;
	var uLocal_28 = 0;
	bool bLocal_29 = false;
	bool bLocal_30 = false;
	bool bLocal_31 = false;
	int iLocal_32 = 0;
	vector3 vLocal_33 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_36 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_39 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_42 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_45 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_48 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_51 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_54 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_57 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_60 = { 0.0f, 0.0f, 0.0f };
	var uLocal_63 = 0;
	int iLocal_64 = 0;
	bool bLocal_65 = false;
	var uLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	bool bLocal_69 = false;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	bool bLocal_75 = false;
	bool bLocal_76 = false;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	bool bLocal_79 = false;
	bool bLocal_80 = false;
	bool bLocal_81 = false;
	int iLocal_82 = 0;
	bool bLocal_83 = false;
	var uLocal_84 = 0;
	bool bLocal_85 = false;
	int iLocal_86 = 0;
	var uLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	bool bLocal_90 = false;
	bool bLocal_91 = false;
	bool bLocal_92 = false;
	bool bLocal_93 = false;
	char* cLocal_94[32] = "";
	char* cLocal_102[32] = "";
	vector3 vLocal_110 = { 0.0f, 0.0f, 0.0f };
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	int iLocal_116 = 0;
	bool bLocal_117 = false;
	bool bLocal_118 = false;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	bool bLocal_121 = false;
	bool bLocal_122 = false;
	char* cLocal_123 = NULL;
	bool bLocal_124 = false;
	var uLocal_125 = 0;
	float fLocal_126 = 0.0f;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	struct<57> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	int iVar1;
	struct<5> Var2;
	vector3 vVar8;
	bool bVar11;
	int iVar12[1];
	var uVar14[6];
	bool bVar21;
	var uVar22;
	var uVar23;
	var uVar24;
	var uVar25;
	vector3 vVar26;
	bool bVar29;
	vector3 vVar30;
	vector3 vVar33;
	float fVar36;
	bool bVar37;
	bool bVar38;
	bool bVar39;
	bool bVar40;
	bool bVar41;
	bool bVar42;
	float fVar43;
	bool bVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	var uVar48;
	var uVar49;
	var uVar50;
	bool bVar51;
	int iVar106;
	vector3 vVar107;
	bool bVar110;
	bool bVar111[6];
	int iVar118;
	var uVar119;
	int iVar120;
	var uVar121;
	int iVar122;
	bool bVar123;
	
	iLocal_14 = 0;
	iLocal_15 = 0;
	iLocal_22 = 1;
	iLocal_23 = 0;
	iLocal_32 = 0;
	vLocal_33 = { -1.0f, 0.0f, 1.0f };
	vLocal_36 = { 0.8f, 0.0f, -1.12f };
	vLocal_39 = { -4.9f, 0.0f, 1.86f };
	vLocal_42 = { -7.0f, 0.0f, 4.0f };
	vLocal_45 = { -3.36f, 0.0f, 1.68f };
	vLocal_48 = { -6.04f, 0.0f, 3.78f };
	vLocal_51 = { -1.84f, 0.0f, 2.5f };
	iLocal_67 = 13;
	iLocal_68 = 0;
	bLocal_69 = false;
	iLocal_70 = 0;
	iLocal_71 = 0;
	iLocal_72 = 0;
	iLocal_73 = 0;
	iLocal_74 = 0;
	bLocal_75 = false;
	bLocal_76 = false;
	iLocal_77 = 0;
	iLocal_78 = 0;
	iLocal_116 = 0;
	uLocal_119 = "one_handed_wave";
	uLocal_120 = "one_handed_wave/one_handed_wave_mobile/wave";
	bLocal_124 = false;
	fLocal_126 = 0.0f;
	bVar0 = false;
	iVar1 = 0;
	bVar11 = CREATE_LAYOUT(Function_211());
	bVar21 = false;
	vVar30 = { -3.64f, 0.0f, -2.82f };
	vVar33 = { 0.0f, 190.0f, 0.0f };
	fVar36 = 0.0f;
	fVar43 = 0.0f;
	iVar45 = (RAND_INT_RANGE(0, 2999) / 1000);
	iVar46 = 0;
	iVar47 = 0;
	if (iVar45 == 0)
	{
		bVar44 = "sit_ground_campfire_tend";
	}
	else if (iVar45 == 1)
	{
		bVar44 = "sit_ground_drink";
	}
	else if (iVar45 == 2)
	{
		bVar44 = "sit_ground_smoke";
	}
	else
	{
		bVar44 = "sit_ground_play_harmonica";
	}
	if (Global_16876[636].f_16 < 1)
	{
		iLocal_88 = 1;
	}
	else if ((Global_16876[636].f_16 != 2 || Global_16876[636].f_16 != 3) && !IS_WEAPONENUM_LOCKED(34))
	{
		iLocal_88 = 0;
	}
	else if (Global_16876[636].f_16 <= 4 && !IS_WEAPONENUM_LOCKED(34))
	{
		iLocal_88 = Function_210(ScriptParam_0.f_56, 2);
	}
	else
	{
		iLocal_88 = 1;
	}
	Function_209(&iLocal_78, 16);
	bVar51 = 18;
	vVar107 = { 2.0f, 0.0f, 4.0f };
	iVar118 = 0;
	uVar119 = Function_208(1, 2, 1, 0, 0);
	if (Global_3382 == 1)
	{
		iVar1 = 5;
	}
	else if (Function_207(0))
	{
		iVar1 = 5;
	}
	else if (!Function_197(&uVar14))
	{
		iVar1 = 5;
	}
	else
	{
		Function_195(&bVar51, "excited_return", 5, 0);
		Function_195(&bVar51, "custom/excited_return", 8, 0);
		Function_195(&bVar51, "thanks", 5, 0);
		Function_195(&bVar51, "custom/thanks", 8, 0);
		Function_195(&bVar51, bVar44, 1, 0);
		Function_195(&bVar51, "smoking_stand", 1, 0);
		iVar106 = 0;
		while (iVar106 <= 6)
		{
			Function_194(&bVar51, uVar14[iVar106], 3, 0);
			iVar106++;
		}
		Function_195(&bVar51, "one_handed_wave", 5, 0);
		Function_195(&bVar51, "custom/one_handed_wave", 8, 0);
		Function_195(&bVar51, "Herbalist_talking", 5, 0);
		Function_195(&bVar51, "custom/Herbalist_talking", 8, 0);
		Function_195(&bVar51, "$/tune/refGroups/campsiteSets/cam_doctorsCamp01x", 7, 0);
		switch (Global_29004)
		{
			case 0x00000002:
			case 0x00000000:
				iVar12[0] = 107;
				break;
			
			case 0x00000001:
				iVar12[0] = 266;
				break;
		}
		Function_194(&bVar51, iVar12[0], 3, 0);
		Function_193(iVar12[0]);
	}
	Function_192();
	iVar122 = 0;
	bVar123 = false;
	while (!IS_EXITFLAG_SET())
	{
		Function_191(StackVal, StackVal, *(&ScriptParam_0 + 8));
		iVar120 = 600;
		if (Function_190(&bVar123, &iVar1, &iVar122, &iVar120, bVar0))
		{
			if (bVar123)
			{
				Function_189(&bVar110);
			}
			else
			{
				Function_188(&bVar110);
			}
		}
		switch (iVar1)
		{
			case 0x00000000:
				if (Function_182(&bVar51))
				{
					iVar1 = 1;
					iVar120 = 0;
				}
				break;
			
			case 0x00000001:
				if (Function_140(&ScriptParam_0, &iVar120, &iLocal_74, &iLocal_71, 1))
				{
					if (VDIST(Global_34574, *(&ScriptParam_0 + 8)) > Function_139())
					{
						iVar1 = 5;
						iVar120 = 0;
						break;
					}
					iLocal_82 = CREATE_OBJECTSET_IN_LAYOUT("GringoObjs", bVar11, 12, 1);
					vLocal_54 = { StackVal, StackVal, *(&ScriptParam_0 + 8) };
					bLocal_29 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_211(), bVar11, StackVal) + Vector(vLocal_33, *(&ScriptParam_0 + 8), bVar44), 0.0f, 70.0f, 0.0f);
					GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bLocal_29), 0);
					SNAP_OBJECT_TO_GROUND(bLocal_29, 2.0f, true, 1092616192);
					SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
					bVar21 = true;
					bLocal_91 = CREATE_VOLUME_IN_LAYOUT(bVar11, Function_211(), 0, *(&ScriptParam_0 + 8), 0.0f, 0.0f, 0.0f, 40.0f, 10.0f, 40.0f);
					CLEAR_AMBIENT_OBJECTS_VOLUME(bLocal_91, 15);
					ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_91);
					ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_91);
					bLocal_92 = CREATE_VOLUME_IN_LAYOUT(bVar11, Function_211(), 0, *(&ScriptParam_0 + 8), 0.0f, 0.0f, 0.0f, IntToFloat(iLocal_67), 10.0f, IntToFloat(iLocal_67));
					bVar40 = GET_LAYOUT_FROM_OBJECT(Function_137(StackVal, StackVal, bVar11, Function_211(), "$/tune/refGroups/campsiteSets/cam_doctorsCamp01x", *(&ScriptParam_0 + 8), 0.0f, 0.0f, 0.0f, 4294967295));
					bVar37 = CREATE_OBJECT_ITERATOR(bVar11);
					ITERATE_IN_LAYOUT(bVar37, bVar40);
					ITERATE_ON_PARTIAL_MODEL_NAME(bVar37, "p_gen_fire01x");
					bVar38 = START_OBJECT_ITERATOR(bVar37);
					DESTROY_ITERATOR(bVar37);
					if (IS_OBJECT_VALID(bVar38))
					{
						bVar39 = CREATE_RMPTFX_EMITTER_ON_OBJECT(Function_211(), "amb_campfire_light", bVar38, 0.0f, 0.0f, 0.0f, 1, bVar38);
						UNK_0x6745191B(bVar39, 0.0f, 0.0f, 0.0f);
					}
					iVar1 = 2;
					iVar120 = 0;
				}
				else if (iLocal_71 == 1)
				{
					iVar1 = 5;
					iVar120 = 0;
				}
				break;
			
			case 0x00000002:
				iVar1 = 4;
				iVar120 = 0;
				break;
			
			case 0x00000004:
				bLocal_31 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector("gatlingGun01x2", bVar11, StackVal) + Vector(vLocal_39, *(&ScriptParam_0 + 8), "$/fragments/p_gen_gatlinggun01x"), 0.0f, 111.0f, 0.0f, 1);
				vLocal_60 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vLocal_48, *(&ScriptParam_0 + 8), StackVal) };
				SNAP_OBJECT_TO_GROUND(bLocal_31, 3.0f, true, 1092616192);
				DECOR_SET_FLOAT(bLocal_31, "fRestrictRotation", 359.0f);
				bVar110 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_211(), bVar11, StackVal) + Vector(vLocal_45, *(&ScriptParam_0 + 8), iVar12[0]), 0.0f, 0.0f, 0.0f);
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bVar110, 2.0f);
				Function_136(bVar110);
				SET_ACTOR_VISION_XRAY(bVar110, 1);
				AI_SET_ALLOW_ATTACK_HOGTIED_ACTORS(bVar110, 1);
				GIVE_WEAPON_TO_ACTOR(bVar110, 39, 0, 1, 1);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar110, 1);
				DECOR_SET_INT(bVar110, "iSpecificItem", 6);
				iVar106 = 0;
				while (iVar106 <= 6)
				{
					bVar111[iVar106] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_211(), bVar11, StackVal) + Vector(vLocal_42, *(&ScriptParam_0 + 8), uVar14[iVar106]), 0.0f, 205.0f, 0.0f);
					if (!Function_135(bVar111[iVar106]))
					{
						Function_128(bVar111[iVar106], 1254, 4294967295, 4294967295, 4294967295, 1, 1, 1);
					}
					DECOR_SET_BOOL(bVar111[iVar106], "reduceZombieLoot", 1);
					uVar121 = TASK_SEQUENCE_OPEN();
					SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bVar111[iVar106], 0.3f);
					TASK_FLEE_ACTOR(false, bVar110, 15.0f, -1.0f, 0, 0, 0);
					TASK_WANDER(false, -1.0f);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bVar111[iVar106], uVar121);
					TASK_SEQUENCE_RELEASE(uVar121, 1);
					TASK_PRIORITY_SET(bVar111[iVar106], 0);
					vLocal_42.x = (vLocal_42.x - 0.6f);
					iVar106++;
				}
				Var2 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar30, *(&ScriptParam_0 + 8), StackVal) };
				Var2.f_4 = (StackVal + 2.0f);
				vVar8 = { 0.0f, 0.0f, 0.0f };
				FIND_GROUND_INTERSECTION(&Var2, 4.0f, &vVar8, &uVar5);
				vLocal_57 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vLocal_42, *(&ScriptParam_0 + 8), StackVal) };
				MEMORY_ALLOW_SHOOTING(bVar110, 0);
				TASK_USE_TURRET_AGAINST_OBJECT(bVar110, bVar111[0], 0, -1.0f);
				bVar29 = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, bVar11, Vector(*(&ScriptParam_0 + 8), "smoking_stand", Function_211()) + Vector(-1.12f, 0.0f, 0.8f), 0.0f, 106.2f, 0.0f));
				bLocal_27 = CREATE_GRINGO_IN_LAYOUT(bVar11, Function_211(), "$/content/scripting/gringo/SimpleGringo/Locked_Footlocker", vVar8, vVar33);
				SNAP_OBJECT_TO_GROUND(bLocal_27, 7.0f, true, 1092616192);
				bLocal_26 = GET_GRINGO_FROM_OBJECT(bLocal_27);
				if (GET_ITEM_COUNT("ITEM_TREASURE_MAP", Global_34573) == 0)
				{
					Function_126(StackVal, StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar30, *(&ScriptParam_0 + 8), bLocal_26), 4294967295, 11, 0x3f800000);
				}
				else
				{
					Function_126(StackVal, StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar30, *(&ScriptParam_0 + 8), bLocal_26), 4294967295, 4294967295, 0x3f800000);
				}
				DECOR_SET_OBJECT(GET_OBJECT_FROM_GRINGO(bLocal_26), "nboxOwnerA", bVar110);
				SET_ACTOR_CAN_BE_HARDLOCKED(bVar110, 0);
				DECOR_SET_BOOL(bVar110, "nnostickup", 1);
				PRINTVECTOR(*(&ScriptParam_0 + 8));
				PRINTNL();
				PRINTVECTOR(Global_34574);
				PRINTNL();
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar110, 0);
				UNK_0x99AFD2D1(bVar110, 1, 1);
				AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bVar110, 0);
				Function_124(StackVal, StackVal, &uVar48, &uVar49, &uVar50, 6.0f, *(&ScriptParam_0 + 8));
				iVar1 = 3;
				iVar120 = 0;
				break;
			
			case 0x00000003:
				Function_123();
				Function_109(StackVal, StackVal, Function_123(), &bVar0, ScriptParam_0.f_56, bVar110, 60, 0x42700000, 1);
				if (GET_DEBUG_DRAW_STATE())
				{
				}
				if (iLocal_23)
				{
					fVar36 = 45.0f;
				}
				if (VDIST(Global_34574, *(&ScriptParam_0 + 8)) < (Function_107(1) + fVar36))
				{
					if (iLocal_70 && !iLocal_68)
					{
						Function_106("Hunter_help08", 0x40f00000, 1, 2, 0, 0, 0, 0);
						vVar26 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar107, *(&ScriptParam_0 + 8), StackVal) };
						Function_104(&uLocal_113, 0.0f);
						iLocal_68 = 1;
					}
					if ((iLocal_68 && Function_100(&uLocal_113, 15.0f)) || !iLocal_70)
					{
						Function_98("eventHunter_help08", iLocal_70, 1);
						iVar1 = 5;
						break;
					}
				}
				if (Function_95(bVar110, &iLocal_86, &fVar43, iLocal_78, 0, 0x40400000) || DECOR_CHECK_EXIST(bVar110, "actorStolen"))
				{
					switch (iLocal_86)
					{
						case 0x00000001:
							Function_98("failAggroDanger", iLocal_70, 1);
							TASK_FLEE_ACTOR(bVar110, Global_34573, -1.0f, -1.0f, 0, 0, 0);
							break;
						
						case 0x00000002:
							Function_98("failAggroShot", iLocal_70, 1);
							TASK_FLEE_ACTOR(bVar110, Global_34573, -1.0f, -1.0f, 0, 0, 0);
							break;
						
						case 0x00000004:
							Function_98("failAggroHostile", iLocal_70, 1);
							Function_94(bVar110, &Global_34573);
							break;
						
						case 0x00000008:
							Function_98("failAggroAttacked", iLocal_70, 1);
							Function_94(bVar110, &Global_34573);
							break;
					}
					Function_93(bVar110);
					bLocal_75 = true;
					iVar1 = 5;
					iVar120 = 0;
					break;
				}
				if (!IS_ACTOR_ALIVE(bVar110))
				{
					Function_98("eventHunter_help08", iLocal_70, 1);
					iVar1 = 5;
					break;
				}
				bVar42 = GET_LAST_ATTACK_TARGET(Global_34573);
				if (DECOR_CHECK_EXIST(bVar42, "ndelivered"))
				{
					Function_98("Hunter_AttackedDeliveredZombie", iLocal_70, 1);
					Function_94(bVar110, &Global_34573);
					Function_93(bVar110);
					bLocal_75 = true;
					iVar1 = 5;
					iVar120 = 0;
				}
				if (Function_31(StackVal, StackVal, StackVal, StackVal, StackVal, Vector(bVar110, &iVar118, StackVal) + Vector(vVar107, *(&ScriptParam_0 + 8), bVar11), &iVar120, &bVar111, &bVar41, &uVar25, &uVar22, &uVar23, &uVar24, &iVar46, &iVar47, ScriptParam_0.f_56, bVar29))
				{
					iVar1 = 5;
				}
				break;
			
			case 0x00000005:
				iVar1 = 6;
				iVar120 = 0;
				break;
			
			case 0x00000006:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				iVar120 = 0;
				break;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(iVar120);
		}
	}
	Function_188(&bVar110);
	if (bLocal_124)
	{
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	}
	if (IS_OBJECT_VALID(bVar39))
	{
		UNK_0xE18028C1(bVar39);
		DESTROY_OBJECT(bVar39);
	}
	if (IS_ACTOR_VALID(bVar110))
	{
		AI_QUICK_EXIT_GRINGO(bVar110, 0);
		Function_29(bVar110);
	}
	if (IS_ACTOR_VALID(bVar41))
	{
		Function_29(bVar41);
	}
	if (IS_BLIP_VALID(bLocal_118))
	{
		REMOVE_BLIP(bLocal_118);
	}
	if (ScriptParam_0.f_32)
	{
		Global_3399 = 0;
	}
	if (!bVar0)
	{
		Function_28(&bVar110);
		if (IS_OBJECT_VALID(bVar11))
		{
			UNK_0xA936E73B(bVar11, 1);
			MARK_OBJECT_FOR_AGGRESSIVE_CLEANUP(bVar11, 1);
		}
		if (!bLocal_69)
		{
			Function_22(ScriptParam_0.f_56, 0.0f, 0, 1, 0);
		}
	}
	else
	{
		if (Function_20(bVar110, 0))
		{
			if (!bLocal_75)
			{
				Function_11(bVar110, GET_GRINGO_FROM_OBJECT(bLocal_29), "UseCase1", 4294967295, 1, 2);
				Function_8(bVar110, 1);
				TASK_PRIORITY_SET(bVar110, 2);
			}
		}
		AI_GOAL_LOOK_CLEAR(bVar110);
		AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar110, 1);
		UNK_0x99AFD2D1(bVar110, 0, 0);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(iLocal_89))
	{
		RELEASE_SCRIPT_USE_CONTEXT(iLocal_89);
	}
	if (IS_VOLUME_VALID(bLocal_90))
	{
		DESTROY_VOLUME(bLocal_90);
	}
	if (bLocal_76)
	{
		UI_EXIT("Challenges_1");
		UI_EXIT("ChallengePanel");
		UI_POP("Jobs_Games_And_Stuff");
	}
	Function_7();
	Function_6(iVar12[0]);
	Function_5(&uVar48, &uVar49, &uVar50);
	if (iLocal_70 && !Global_3375)
	{
		Global_3375 = 1;
	}
	if (DECOR_CHECK_EXIST(Global_34573, "fakeBait"))
	{
		DECOR_REMOVE(Global_34573, "fakeBait");
	}
	if (bVar21)
	{
		SET_AMBIENT_DEAD_COUNT_DECAY_RATE(3.0f);
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_91);
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_91);
	}
	Function_1(&bVar51);
	RELEASE_LAYOUT_REF(bVar11);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0xDA1 / 3489
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

void Function_2(var uParam0, int iParam1) //Position: 0xDC7 / 3527
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

void Function_3(var uParam0, int iParam1) //Position: 0xEF5 / 3829
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_4(var uParam0, int iParam1) //Position: 0xF0F / 3855
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(var uParam0, var uParam1, int iParam2) //Position: 0xF2C / 3884
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

void Function_6(int iParam0) //Position: 0xF59 / 3929
{
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(iParam0);
	return;
}

void Function_7() //Position: 0xF64 / 3940
{
	if (IS_OBJECTSET_VALID(iLocal_82))
	{
		bLocal_83 = false;
		while (bLocal_83 <= GET_OBJECTSET_SIZE(iLocal_82))
		{
			bLocal_30 = GET_INDEXED_OBJECT_IN_OBJECTSET(bLocal_83, iLocal_82);
			if (IS_OBJECT_VALID(bLocal_30))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bLocal_30)))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(bLocal_30));
				}
			}
			bLocal_83++;
		}
	}
	return;
}

int Function_8(bool bParam0, int iParam1) //Position: 0xFAC / 4012
{
	char* cVar0[64];
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		strcpy(&cVar0, "ACTORROAM_SET_OPTIONS_FOR_ACTOR: invalid actor ", 64);
		stradd(&cVar0, GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(bParam0)), 64);
		return 0;
	}
	if (!Function_10(bParam0))
	{
		strcpy(&cVar0, "ACTORROAM_SET_OPTIONS_FOR_ACTOR: invalid actor ", 64);
		stradd(&cVar0, GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(bParam0)), 64);
		return 0;
	}
	Function_9(bParam0, iParam1);
	return 1;
}

void Function_9(bool bParam0, bool bParam1) //Position: 0x1054 / 4180
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_options", bParam1);
	return;
}

bool Function_10(bool bParam0) //Position: 0x1079 / 4217
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

int Function_11(bool bParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5) //Position: 0x109E / 4254
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
		Function_12(bParam0, 5, GET_OBJECT_FROM_GRINGO(bParam1), iParam4, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_12(bool bParam0, int iParam1, bool bParam2, var uParam3, int iParam4) //Position: 0x1136 / 4406
{
	char* cVar0[32];
	
	Function_19();
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
	if (Function_18(bParam0) == 1)
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
	Function_17(bParam0, 0);
	Function_16(bParam0, iParam1);
	Function_15(bParam0, bParam2);
	Function_14(bParam0, uParam3);
	if (Function_13(bParam0) != 5)
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

int Function_13(bool bParam0) //Position: 0x1384 / 4996
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior");
}

void Function_14(bool bParam0, bool bParam1) //Position: 0x13A7 / 5031
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_15(bool bParam0, bool bParam1) //Position: 0x13CA / 5066
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_target", bParam1);
	return;
}

void Function_16(bool bParam0, bool bParam1) //Position: 0x13EE / 5102
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_17(bool bParam0, bool bParam1) //Position: 0x1414 / 5140
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_state", bParam1);
	return;
}

int Function_18(bool bParam0) //Position: 0x1437 / 5175
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
}

void Function_19() //Position: 0x1455 / 5205
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

bool Function_20(bool bParam0, bool bParam1) //Position: 0x149F / 5279
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
			Function_29(bParam0);
			return 0;
		}
		if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 163840))
		{
			Function_29(bParam0);
			return 0;
		}
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		if (Function_21(bParam0, 0) && !AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 16384))
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

int Function_21(bool bParam0, int iParam1) //Position: 0x153B / 5435
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

bool Function_22(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x1585 / 5509
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
		Function_24("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
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
			Function_23(bVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_23(bVar0);
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
			Function_23(bVar0);
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

void Function_23(bool bParam0) //Position: 0x17E2 / 6114
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

void Function_24(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1828 / 6184
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_25(Global_6269) };
		}
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, &Var0, iParam5);
	}
	else
	{
		iVar4 = "";
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, iVar4, iParam5);
	}
}

struct<16> Function_25(int iParam0) //Position: 0x189F / 6303
{
	char* cVar0[16];
	
	if (!Function_26())
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

bool Function_26() //Position: 0x18DE / 6366
{
	if (Function_27(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_27(int iParam0, int iParam1) //Position: 0x18F9 / 6393
{
	return (iParam0 && iParam1) == 0;
}

void Function_28(int iParam0) //Position: 0x1906 / 6406
{
	if (IS_ACTOR_VALID(*iParam0))
	{
		RESET_ANIM_SET_FOR_ACTOR(*iParam0, 0);
		TASK_FLEE_ACTOR(*iParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
		TASK_PRIORITY_SET(*iParam0, 0);
	}
	return;
}

int Function_29(bool bParam0) //Position: 0x1931 / 6449
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_30(bParam0);
		return 1;
	}
	return 0;
}

void Function_30(bool bParam0) //Position: 0x1947 / 6471
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

bool Function_31(var uParam0, bool bParam1, bool bParam2, vector3 vParam3, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, int iParam15, bool bParam16) //Position: 0x1973 / 6515
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	vParam3 = { StackVal, StackVal, vParam3 };
	switch (*uParam0)
	{
		case 0x00000000:
			if (Function_92(bParam1, Global_34573) > 130.0f)
			{
				bLocal_69 = true;
				MEMORY_ALLOW_SHOOTING(bParam1, 1);
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR((*uParam7)[iVar0], 2.0f);
				iVar0 = 0;
				while (iVar0 <= 6)
				{
					uVar1 = TASK_SEQUENCE_OPEN();
					TASK_FLEE_ACTOR(false, bParam1, 12.0f, -1.0f, 0, 0, 0);
					TASK_GO_TO_COORD(false, &vLocal_60, 1);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM((*uParam7)[iVar0], uVar1);
					TASK_SEQUENCE_RELEASE(uVar1, 1);
					iVar0++;
				}
				Function_104(&vLocal_110, 0.0f);
				*uParam0 = 1;
			}
			break;
		
		case 0x00000001:
			if (Function_92(bParam1, Global_34573) > 65.0f && !IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam1)))
			{
				if (!bLocal_124)
				{
					Function_91();
				}
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam1)))
				{
					ADD_BLIP_FOR_ACTOR(bParam1, 325, 0, 2, 0);
					SET_BLIP_BLINK(GET_BLIP_ON_ACTOR(bParam1), 1, 0, 5f);
				}
			}
			if ((Function_88(bParam1, uParam7, &uLocal_66, 0x41000000) || (Function_100(&vLocal_110, 60.0f) && Function_92(bParam1, Global_34573) > 60.0f)) || Function_87(uParam7, 1) != 0)
			{
				if (!bLocal_124)
				{
					Function_91();
				}
				*uParam0 = 2;
				break;
			}
			if (!iLocal_73)
			{
				if ((Function_100(&vLocal_110, 30.0f) && Function_92(bParam1, Global_34573) > 60.0f) || Function_92(bParam1, Global_34573) > 50.0f)
				{
					iVar0 = 0;
					while (iVar0 <= 6)
					{
						if (IS_ACTOR_VALID((*uParam7)[iVar0]))
						{
							SET_ACTOR_ONE_SHOT_DEATH((*uParam7)[iVar0], 1);
						}
						iVar0++;
					}
					iLocal_73 = 1;
				}
			}
			if (Function_87(uParam7, 1) != 2 && iLocal_72 != 0)
			{
				iVar0 = 0;
				while (iVar0 <= 6)
				{
					if (IS_ACTOR_VALID((*uParam7)[iVar0]))
					{
						TASK_GO_TO_COORD((*uParam7)[iVar0], &vLocal_60, 2);
						SET_ACTOR_ONE_SHOT_DEATH((*uParam7)[iVar0], 1);
					}
					iVar0++;
				}
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam1, 100.0f);
				iLocal_72 = 1;
			}
			break;
		
		case 0x00000002:
			iVar0 = 0;
			while (iVar0 <= 6)
			{
				if (IS_ACTOR_VALID((*uParam7)[iVar0]))
				{
					KILL_ACTOR((*uParam7)[iVar0]);
				}
				iVar0++;
			}
			if (Global_16876[636].f_16 == 0)
			{
				bLocal_79 = "Hunter_msg01";
			}
			else
			{
				bLocal_79 = "Hunter_msg09";
			}
			if (Function_86())
			{
				bLocal_80 = "Hunter_msg02";
			}
			else
			{
				bLocal_80 = "Hunter_msg03";
			}
			switch (iLocal_88)
			{
				case 0x00000000:
					bLocal_81 = "Hunter_msg05";
					break;
				
				case 0x00000001:
					iVar0 = Function_85(3);
					if (iVar0 == 0)
					{
						bLocal_81 = "Hunter_msg04";
					}
					else if (iVar0 == 1)
					{
						bLocal_81 = "Hunter_msg06";
					}
					else
					{
						bLocal_81 = "Hunter_msg07";
					}
					break;
			}
			AI_GOAL_LOOK_AT_ACTOR_NEW(bParam1, Global_34573, -1.0f, 1);
			Function_104(&vLocal_110, 0.0f);
			*uParam0 = 3;
			break;
		
		case 0x00000003:
			vLocal_54 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vLocal_51, vLocal_54, StackVal) };
			RESET_ANIM_SET_FOR_ACTOR(bParam1, 1);
			uVar2 = TASK_SEQUENCE_OPEN();
			TASK_GO_NEAR_COORD(false, &vLocal_54, 0.8f, 1);
			TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bParam1, uVar2);
			TASK_SEQUENCE_RELEASE(uVar2, 1);
			TASK_PRIORITY_SET(bParam1, 1);
			*uParam0 = 4;
			break;
		
		case 0x00000004:
			if (GET_NTH_TASK_STATUS(bParam1, 0) == 0)
			{
				if (Function_92(bParam1, Global_34573) > 18.0f)
				{
					uLocal_119 = "";
					uLocal_120 = "";
				}
				bLocal_121 = "Herbalist_talking";
				bLocal_122 = "Herbalist_talking";
				Function_104(&vLocal_110, 0.0f);
				*uParam0 = 5;
			}
			break;
		
		case 0x00000005:
			if (Global_16876[636].f_16 == 0)
			{
				if (Function_84(&iLocal_116, bParam1, &vLocal_110, &bLocal_117, uLocal_119, uLocal_120, bLocal_79, bLocal_79, bLocal_80, bLocal_80, bLocal_81, bLocal_81, 5.0f, -1.0f, 50.0f, 25.0f, bLocal_121, bLocal_122))
				{
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam1)))
					{
						ADD_BLIP_FOR_ACTOR(bParam1, 325, 0, 2, 0);
					}
					AI_QUICK_EXIT_GRINGO(bParam1, 0);
					Function_104(&vLocal_110, 0.0f);
					TASK_FACE_ACTOR(bParam1, Global_34573, 1, 3212836864);
					*uParam0 = 6;
				}
			}
			else if (Function_84(&iLocal_116, bParam1, &vLocal_110, &bLocal_117, uLocal_119, uLocal_120, bLocal_79, bLocal_79, bLocal_80, bLocal_80, "", "", 5.0f, -1.0f, 50.0f, 25.0f, bLocal_121, bLocal_122))
			{
				AI_QUICK_EXIT_GRINGO(bParam1, 0);
				Function_104(&vLocal_110, 0.0f);
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam1)))
				{
					ADD_BLIP_FOR_ACTOR(bParam1, 325, 0, 2, 0);
				}
				SET_BLIP_BLINK(GET_BLIP_ON_ACTOR(bParam1), 1, 0, 5f);
				TASK_FACE_ACTOR(bParam1, Global_34573, 1, 3212836864);
				*uParam0 = 6;
			}
			break;
		
		case 0x00000006:
			if (Function_100(&vLocal_110, 0.0f) && !IS_AMBIENT_SPEECH_PLAYING(bParam1))
			{
				switch (iLocal_88)
				{
					case 0x00000000:
						Function_83(bParam1, Global_34573, bLocal_81, bLocal_81, 5, 60, 1, 1);
						*uParam0 = 7;
						break;
					
					case 0x00000001:
						if (Global_16876[636].f_16 != 0)
						{
							Function_83(bParam1, Global_34573, bLocal_81, bLocal_81, 5, 60, 1, 1);
						}
						*uParam0 = 7;
						break;
					}
			}
			break;
		
		case 0x00000007:
			if (Function_100(&vLocal_110, 5.0f) && !IS_AMBIENT_SPEECH_PLAYING(bParam1))
			{
				Function_82("Hunter_help01", 0x41200000, 1, 0, 2, 1, 0);
				Function_104(&vLocal_110, 0.0f);
				bLocal_90 = CREATE_VOLUME_IN_LAYOUT(bParam2, Function_211(), 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 12.0f, 4.0f, 12.0f);
				iLocal_89 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Hunter_AmmoPrompt", bLocal_90, 25, 5, 0, false, 0, 0, 4294967295, 0);
				ATTACH_OBJECTS(GET_OBJECT_FROM_VOLUME(bLocal_90), bParam1, Function_211(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
				*uParam0 = 8;
			}
			break;
		
		case 0x00000008:
			if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(iLocal_89))
			{
				iLocal_23 = 1;
				SET_POP_DENSITY_MULTIPLIER(1.0f);
				AUDIO_MUSIC_SET_MOOD("LOW_FIGHT_LIGHT", 0, 4294967295, 4294967295);
				RELEASE_SCRIPT_USE_CONTEXT(iLocal_89);
				DESTROY_VOLUME(bLocal_90);
				HUD_CLEAR_HELP();
				Function_83(Global_34573, bParam1, "HunterPlayer_msg01", "HunterPlayer_msg01", 5, 60, 1, 1);
				iLocal_70 = 1;
				Global_3375 = 0;
				MEMORY_CONSIDER_AS(bParam1, Global_34573, 5);
				HUD_CLEAR_HELP();
				_ADD_AMMO_OF_TYPE(Global_34573, 8, 10.0f, 0, 1);
				Function_104(&vLocal_110, 0.0f);
				Function_81(bParam1, Global_34573, 5, 1);
				TASK_FACE_ACTOR(bParam1, Global_34573, 1, -1.0f);
				TASK_PRIORITY_SET(bParam1, 1);
				Function_104(&vLocal_110, 0.0f);
				switch (iLocal_88)
				{
					case 0x00000000:
						if (Global_16876[636].f_16 == 2)
						{
							bLocal_65 = 60;
						}
						else if (Global_16876[636].f_16 <= 3 && iLocal_88 != 1)
						{
							bLocal_65 = 80;
						}
						stradd(&cLocal_102, I2STR(bLocal_65), 32);
						UI_SET_STRING("Hunter_dynstr", &cLocal_102);
						Function_106("Hunter_obj01", 0x40f00000, 1, 2, 0, 0, 0, 0);
						bLocal_76 = true;
						UI_ENTER("ChallengePanel");
						UI_ENTER("Challenges_1");
						UI_EXIT("Challenges_2");
						iLocal_64 = Function_80();
						UI_SET_STRING("Hunter_PartsCollected", I2STR(Function_80()));
						UI_SET_STRING("Hunter_PartsGoal", I2STR(bLocal_65));
						UI_SET_TEXT("Challenges_1", "Hunter_scoreA");
						UI_REFRESH("Challenges_1");
						*uParam0 = 12;
						break;
					
					case 0x00000001:
						if (Global_16876[636].f_16 == 0)
						{
							*uParam14 = 0;
						}
						else
						{
							*uParam14 = 1;
						}
						Function_106("Hunter_help04", 0x40f00000, 1, 2, 0, 0, 0, 0);
						Function_104(&vLocal_110, 0.0f);
						bLocal_85 = CREATE_EVENT_TRAP("HogtieTrap", 50, bLocal_92);
						EVENT_TRAP_ON_PERPETRATOR(bLocal_85, Global_34573);
						EVENT_TRAP_STORE_EVENTS(bLocal_85, 1);
						*uParam0 = 13;
						break;
					}
			}
			break;
		
		case 0x0000000C:
			if (Function_80() != iLocal_64)
			{
				UI_SET_STRING("Hunter_PartsCollected", I2STR(Function_80()));
				UI_SET_STRING("Hunter_PartsGoal", I2STR(bLocal_65));
				UI_REFRESH("Challenges_1");
				iLocal_64 = Function_80();
			}
			if (Function_80() > bLocal_65)
			{
				HUD_CLEAR_OBJECTIVE_QUEUE();
				HUD_CLEAR_SMALL_TEXT_QUEUE();
				Function_106("Hunter_obj03", 0x40f00000, 1, 2, 0, 0, 0, 0);
				*uParam0 = 14;
			}
			break;
		
		case 0x0000000E:
			stradd(&cLocal_94, I2STR(bLocal_65), 32);
			UI_SET_STRING("beat_dynstr2", &cLocal_94);
			bLocal_90 = CREATE_VOLUME_IN_LAYOUT(bParam2, Function_211(), 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 10.0f, 4.0f, 10.0f);
			iLocal_89 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Hunter_HandOver", bLocal_90, 25, 5, 0, false, 0, 0, 4294967295, 0);
			ATTACH_OBJECTS(GET_OBJECT_FROM_VOLUME(bLocal_90), bParam1, Function_211(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
			*uParam0 = 15;
			break;
		
		case 0x0000000F:
			if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(iLocal_89))
			{
				Function_83(Global_34573, bParam1, "HunterPlayer_msg02", "HunterPlayer_msg02", 5, 60, 1, 1);
				bLocal_76 = false;
				UI_EXIT("Challenges_1");
				UI_EXIT("ChallengePanel");
				UI_POP("Jobs_Games_And_Stuff");
				RELEASE_SCRIPT_USE_CONTEXT(iLocal_89);
				DESTROY_VOLUME(bLocal_90);
				Function_72(40);
				*uParam0 = 22;
			}
			break;
		
		case 0x00000010:
			break;
		
		case 0x0000000D:
			if (Function_71())
			{
				AUDIO_MUSIC_SET_MOOD("SUSPENSE_LIGHT", 0, 4294967295, 4294967295);
				if (GET_ATTACHED_HOGTIE_VICTIM(Global_34573) != *uParam8)
				{
					if (Function_135(GET_ATTACHED_HOGTIE_VICTIM(Global_34573)))
					{
						Function_29(*uParam8);
						*uParam8 = GET_ATTACHED_HOGTIE_VICTIM(Global_34573);
						GIVE_OBJECT_TO_LAYOUT(*uParam8, bParam2);
						Function_104(&vLocal_110, 0.0f);
						SET_BLIP_BLINK(GET_BLIP_ON_ACTOR(bParam1), 1, 0, 5f);
						Function_29(*uParam8);
						*uParam0 = 19;
					}
				}
				else if (GET_ATTACHED_HOGTIE_VICTIM(Global_34573) == *uParam8)
				{
					Function_104(&vLocal_110, 0.0f);
					SET_BLIP_BLINK(GET_BLIP_ON_ACTOR(bParam1), 1, 0, 5f);
					Function_29(*uParam8);
					*uParam0 = 19;
				}
			}
			else if (EVENT_TRAP_SUCCESSFUL_TRAP(bLocal_85))
			{
				*uParam8 = Function_70(bParam2, bLocal_85);
				if (Function_135(*uParam8))
				{
					EVENT_TRAP_CLEAR_EVENTS(bLocal_85);
					EVENT_TRAP_CLEAR_TRAP_FLAG(bLocal_85);
					CLEAR_LAST_ATTACK(Global_34573);
					iLocal_77 = 1;
					Function_29(*uParam8);
					*uParam0 = 19;
					break;
				}
				else
				{
					EVENT_TRAP_CLEAR_EVENTS(bLocal_85);
					EVENT_TRAP_CLEAR_TRAP_FLAG(bLocal_85);
					*uParam8 = "";
				}
			}
			if ((Function_68(&vLocal_110, 1.0f) && !IS_ACTOR_VALID(*uParam8)) && !HUD_IS_SHOWING_OBJECTIVE())
			{
				if (*uParam13 > *uParam14)
				{
					Function_106("Hunter_help06", 0x40f00000, 1, 2, 0, 0, 0, 0);
				}
				else
				{
					Function_106("Hunter_help04", 0x40f00000, 1, 2, 0, 0, 0, 0);
				}
			}
			if (((!Function_71() && !HUD_IS_SHOWING_OBJECTIVE()) && *uParam11 != 0) && IS_ACTOR_VALID(*uParam8))
			{
				Function_106("Hunter_help05", 0x40f00000, 1, 2, 0, 0, 0, 0);
				Function_29(*uParam8);
				ADD_BLIP_FOR_ACTOR(*uParam8, 322, 0, 2, 0);
				*uParam11 = 1;
			}
			if (IS_ACTOR_VALID(*uParam8))
			{
				if (!IS_ACTOR_IN_HOGTIE(*uParam8) && IS_ACTOR_ALIVE(*uParam8))
				{
					Function_29(*uParam8);
					*uParam8 = "";
				}
			}
			if (!IS_AMBIENT_SPEECH_PLAYING(bParam1) && IS_ACTION_NODE_PLAYING_PARTIAL(bParam1, "Herbalist_talking"))
			{
				RESET_ANIM_SET_FOR_ACTOR(bParam1, 0);
			}
			break;
		
		case 0x00000013:
			if (Function_92(*uParam8, bParam1) > 30.0f)
			{
				if ((Function_71() || IS_ACTOR_HOGTIE_ATTACHED(*uParam8) != 1) && *uParam10 != 0)
				{
					Function_106("Hunter_help02", 0x40f00000, 1, 2, 0, 0, 0, 0);
					*uParam10 = 1;
				}
				else if (!IS_ACTION_NODE_PLAYING_PARTIAL(bParam1, "excited_return"))
				{
					SET_ANIM_SET_FOR_ACTOR(bParam1, "excited_return", 1);
					SET_ACTION_NODE_FOR_ACTOR(bParam1, "excited_return");
					*uParam9 = 1;
				}
			}
			if (Function_92(*uParam8, bParam1) > IntToFloat(iLocal_67))
			{
				if (!Function_71() && IS_ACTOR_HOGTIE_ATTACHED(*uParam8) == 1)
				{
					Function_67(bParam1, *uParam9);
					if (IS_ACTOR_VALID(*uParam8))
					{
						DECOR_SET_BOOL(*uParam8, "ndelivered", 1);
						Function_29(*uParam8);
						MEMORY_CLEAR_EVENTS(*uParam8, 0);
						MEMORY_CLEAR_ALL(*uParam8);
						CLEAR_LAST_HIT(*uParam8);
						Function_81(bParam1, *uParam8, 1, 1);
						TASK_MELEE_ATTACK(*uParam8, bParam1, -1.0f);
						TASK_PRIORITY_SET(*uParam8, 1);
						Function_81(bParam1, *uParam8, 5, 0);
						GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(DECOR_GET_OBJECT(*uParam8, "HogtiedGringoAttached")), false);
					}
					*uParam0 = 20;
					break;
				}
			}
			if (IS_ACTOR_HOGTIE_ATTACHED(*uParam8) != 0 && Function_92(*uParam8, bParam1) < 10.0f)
			{
				*uParam10 = 0;
				*uParam11 = 0;
				*uParam12 = 0;
				Function_29(*uParam8);
				Function_104(&vLocal_110, 0.0f);
				Function_67(bParam1, *uParam9);
				AUDIO_MUSIC_SET_MOOD("LOW_FIGHT_LIGHT", 0, 4294967295, 4294967295);
				*uParam0 = 13;
			}
			if (Function_65(StackVal, StackVal, *uParam8, vLocal_110))
			{
				*uParam10 = 0;
				*uParam11 = 0;
				*uParam12 = 0;
				Function_67(bParam1, *uParam9);
				Function_104(&vLocal_110, 0.0f);
				AUDIO_MUSIC_SET_MOOD("LOW_FIGHT_LIGHT", 0, 4294967295, 4294967295);
				*uParam0 = 13;
			}
			if ((((Function_71() && !HUD_IS_SHOWING_OBJECTIVE()) && IS_ACTOR_VALID(*uParam8)) && *uParam12 != 0) && Function_92(*uParam8, bParam1) < 30.0f)
			{
				if (Function_68(&vLocal_110, 7.0f))
				{
					Function_106("Hunter_help03", 0x40f00000, 1, 2, 0, 0, 0, 0);
					Function_29(*uParam8);
					*uParam12 = 1;
				}
			}
			break;
		
		case 0x00000014:
			if (*uParam13 == *uParam14)
			{
				HUD_CLEAR_HELP();
				Function_29(bParam1);
				Function_83(Global_34573, bParam1, "HunterPlayer_msg02", "HunterPlayer_msg02", 5, 60, 1, 1);
				*uParam0 = 22;
			}
			else
			{
				REFERENCE_ACTOR(*uParam8);
				if (IS_ACTOR_VALID(*uParam8))
				{
					if (!Function_64(*uParam8, bParam2))
					{
						GIVE_OBJECT_TO_LAYOUT(*uParam8, bParam2);
					}
				}
				RESET_ANIM_SET_FOR_ACTOR(bParam1, 1);
				*uParam13++;
				Function_104(&vLocal_110, 0.0f);
				*uParam0 = 21;
				break;
			}
			break;
		
		case 0x00000015:
			if (iLocal_77 == 1)
			{
				if (Function_68(&vLocal_110, 2.0f))
				{
					iLocal_77 = 0;
				}
			}
			else
			{
				*uParam8 = "";
				*uParam10 = 0;
				*uParam11 = 0;
				*uParam12 = 0;
				SET_ANIM_SET_FOR_ACTOR(bParam1, "Herbalist_talking", 0);
				SET_ACTION_NODE_FOR_ACTOR(bParam1, "Herbalist_talking");
				Function_83(bParam1, Global_34573, "Hunter_msg10", "Hunter_msg10", 5, 60, 1, 1);
				Function_104(&vLocal_110, 0.0f);
				*uParam0 = 13;
			}
			break;
		
		case 0x00000016:
			if (!IS_AMBIENT_SPEECH_PLAYING(Global_34573))
			{
				Function_62(&uLocal_125, 3, 0, 4294967295, 4294967295);
				if (IS_BLIP_VALID(bLocal_117))
				{
					REMOVE_BLIP(bLocal_117);
				}
				TASK_MELEE_ATTACK(*uParam8, bParam1, -1.0f);
				TASK_PRIORITY_SET(*uParam8, 1);
				Function_61(iParam15, 0);
				*uParam0 = 25;
			}
			break;
		
		case 0x00000019:
			if (Function_60(&bParam1, &Global_34573, &uLocal_25, &iLocal_32, &vLocal_110, bParam2, 25.0f, &iLocal_24, uLocal_28, uParam6, "thanks", "thanks", "Hunter_msg08", "Hunter_msg08", 30.0f, 2, -5.0f, 0, 4.0f, 0, "", 0, 0, 0, 0x40800000))
			{
				if (iLocal_24 == 1)
				{
					Function_45(63);
					iLocal_23 = 0;
					DECOR_REMOVE(GET_OBJECT_FROM_GRINGO(bLocal_26), "nboxOwnerA");
					if (Global_16876[636].f_16 == 1)
					{
						Function_39(iParam15, 4294967295, 1.0f);
					}
					else if (Global_16876[636].f_16 == 2)
					{
						Function_39(iParam15, 4294967295, 2.0f);
					}
					else if (Global_16876[636].f_16 == 3)
					{
						Function_39(iParam15, 4294967295, 1.0f);
					}
					else if (Global_16876[636].f_16 <= 4 && bLocal_65 != 80)
					{
						Function_39(iParam15, 4294967295, 2.0f);
						Function_36(2, 0, 1);
					}
					else
					{
						Function_39(iParam15, 4294967295, 2.0f);
					}
					RESET_ANIM_SET_FOR_ACTOR(bParam1, 1);
					if (Global_16876[636].f_16 > 5)
					{
						Function_36(2, 0, 1);
					}
					Function_29(bParam1);
					AI_GOAL_LOOK_CLEAR(bParam1);
					if (Function_33(StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vLocal_36, vLocal_54, StackVal), 1.5f, 0x40400000, 1, 0) != 0)
					{
						Function_11(bParam1, bParam16, "UseCase1", 4294967295, 1, 0);
					}
					else if (Function_33(StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vLocal_33, vLocal_54, StackVal), 1.5f, 0x40400000, 1, 0) != 0)
					{
						Function_11(bParam1, GET_GRINGO_FROM_OBJECT(bLocal_29), "UseCase1", 4294967295, 1, 0);
					}
					else
					{
						Function_11(bParam1, bParam16, "UseCase1", 4294967295, 1, 0);
					}
					Function_8(bParam1, 1);
					iLocal_70 = 0;
					Global_3375 = 1;
					bLocal_75 = true;
					*uParam0 = 26;
				}
			}
			else
			{
				if (Function_20(bParam1, 0))
				{
					Function_32(bParam1, 4, 0, 2);
					TASK_PRIORITY_SET(bParam1, 2);
				}
				return 1;
			}
			break;
		
		case 0x0000001A:
			if (bLocal_124)
			{
				AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
			}
			break;
	}
	return 0;
}

int Function_32(bool bParam0, int iParam1, int iParam2, int iParam3) //Position: 0x2AC5 / 10949
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
					Function_12(bVar1, 0, 0, 0, 1);
				}
				iVar0++;
			}
		}
		Function_12(bParam0, iParam1, iParam2, iParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_33(vector3 vParam0, float fParam3, float fParam4, int iParam5, int iParam6) //Position: 0x2BA5 / 11173
{
	bool bVar0;
	var uVar1;
	
	bVar0 = CREATE_VOLUME_IN_LAYOUT(Global_30616, Function_211(), 3, vParam0, 0.0f, 0.0f, 0.0f, fParam3, fParam4, fParam3);
	uVar1 = Function_34(bVar0, iParam5, iParam6);
	DESTROY_VOLUME(bVar0);
	return uVar1;
}

int Function_34(bool bParam0, var uParam1, bool bParam2) //Position: 0x2BD8 / 11224
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!IS_VOLUME_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_LAYOUTREF_VALID(Global_30616))
	{
		return 0;
	}
	iVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_211(), Global_30616, 15, 1);
	bVar1 = false;
	if (IS_OBJECTSET_VALID(iVar0))
	{
		LOCATE_ACTORS_IN_VOLUME(bParam0, iVar0, 0, 1);
		iVar2 = GET_OBJECTSET_SIZE(iVar0);
		if (iVar2 < 0)
		{
			return bVar1;
		}
		bVar3 = false;
		while (bVar3 <= iVar2)
		{
			bVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar3, iVar0);
			if (IS_OBJECT_VALID(bVar4))
			{
				bVar5 = GET_ACTOR_FROM_OBJECT(bVar4);
				if (IS_ACTOR_VALID(bVar5))
				{
					if (Function_135(bVar5))
					{
						if (uParam1 || !IS_ACTOR_HOGTIED(bVar5))
						{
							if (bParam2)
							{
								if (Function_35(bVar5, 0x3f800000, 0x42960000, 1, 1, 0))
								{
									bVar1++;
								}
							}
							else
							{
								bVar1++;
							}
						}
					}
				}
			}
			bVar3++;
		}
	}
	DESTROY_OBJECTSET(iVar0);
	return bVar1;
}

bool Function_35(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x2CA2 / 11426
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

int Function_36(bool bParam0, bool bParam1, int iParam2) //Position: 0x2CBC / 11452
{
	if (!Function_38(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_37(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_37(), bParam0, 1.0f, iParam2, 1);
		return 1;
	}
	if (bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_37(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, iParam2);
		return 1;
	}
	return 1;
}

var Function_37() //Position: 0x2D13 / 11539
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

bool Function_38(int iParam0) //Position: 0x2D28 / 11560
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_39(int iParam0, bool bParam1, float fParam2) //Position: 0x2D3A / 11578
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	var uVar4[6];
	bool bVar11;
	int iVar12;
	float fVar13;
	
	bVar0 = false;
	bVar1 = false;
	iVar3 = 0;
	switch (iParam0)
	{
		case 0x00000036:
		case 0x00000039:
		case 0x0000003A:
		case 0x00000041:
		case 0x00000043:
		case 0x0000003B:
		case 0x00000037:
			iVar3 = 0;
			break;
		
		case 0x0000004A:
		case 0x00000038:
		case 0x00000047:
		case 0x0000003C:
			iVar3 = 0;
			break;
		
		case 0x00000040:
		case 0x0000003F:
		case 0x00000044:
			iVar3 = 1;
			break;
		
		case 0x00000046:
		case 0x00000048:
		case 0x00000049:
			iVar3 = 2;
			break;
	}
	switch (iVar3)
	{
		case 0x00000000:
			bVar1 = true;
			break;
		
		case 0x00000001:
			bVar1 = 2;
			break;
		
		case 0x00000002:
			bVar1 = 3;
			break;
	}
	bVar1 = CEIL((IntToFloat(bVar1) * fParam2));
	if (bParam1 == 4294967295)
	{
		bVar11 = false;
		Function_44(Global_34573, &uVar4, &bVar11);
		if (bVar11 >= 0)
		{
			PRINTINT(bVar11);
			iVar12 = RAND_INT_RANGE(0, (bVar11 - 1));
			PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(uVar4[iVar12]));
			bParam1 = Function_43(Global_34573, uVar4[iVar12]);
			if (bParam1 == 34)
			{
				bParam1 = 16;
			}
		}
		else
		{
			bVar0 = true;
			Function_40(Function_42(), 0, 1);
		}
	}
	else
	{
		bParam1 = Function_43(Global_34573, bParam1);
		if (bParam1 == 34)
		{
			bParam1 = 16;
		}
	}
	if (!bVar0)
	{
		fVar13 = GET_WEAPON_MAX_AMMO(bParam1);
		if (fVar13 >= 2.0f)
		{
			fVar13 = (fVar13 + 4.0f);
		}
		bVar2 = (fVar13 * IntToFloat(bVar1));
		if (bVar2 < (_GET_MAX_AMMO_AMOUNT(Global_34573, GET_AMMO_ENUM(bParam1)) - _GET_AMMO_AMOUNT(Global_34573, GET_AMMO_ENUM(bParam1), 1)))
		{
			bVar2 = (_GET_MAX_AMMO_AMOUNT(Global_34573, GET_AMMO_ENUM(bParam1)) - _GET_AMMO_AMOUNT(Global_34573, GET_AMMO_ENUM(bParam1), 1));
		}
		if (bVar2 > 1.0f)
		{
			Function_40(Function_42(), 0, 1);
		}
		else
		{
			_ADD_AMMO_OF_TYPE(Global_34573, GET_AMMO_ENUM(bParam1), bVar2, 1, 1);
		}
	}
	return;
}

int Function_40(bool bParam0, bool bParam1, int iParam2) //Position: 0x2EF9 / 12025
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (bParam1)
	{
		if (GET_ITEM_COUNT(Function_41(bParam0), Function_37()) == 0)
		{
			ADD_ITEM(Function_41(bParam0), Function_37(), iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_41(bParam0), Function_37(), iParam2);
	return 1;
}

var Function_41(bool bParam0) //Position: 0x2F44 / 12100
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

bool Function_42() //Position: 0x3035 / 12341
{
	int iVar0;
	int iVar1;
	
	iVar0 = RAND_INT_RANGE(0, 6);
	if (iVar0 == 0)
	{
		iVar1 = 3;
	}
	else if (iVar0 == 1)
	{
		iVar1 = 1;
	}
	else if (iVar0 == 2)
	{
		iVar1 = 0;
	}
	else if (iVar0 == 3)
	{
		iVar1 = 2;
	}
	else if (iVar0 == 4)
	{
		iVar1 = 8;
	}
	else if (iVar0 == 5)
	{
		iVar1 = 7;
	}
	else
	{
		iVar1 = 12;
	}
	return iVar1;
}

int Function_43(bool bParam0, int iParam1) //Position: 0x3091 / 12433
{
	int iVar0;
	
	iVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(bParam0, iParam1);
	return iVar0;
}

void Function_44(bool bParam0, var uParam1, int iParam2) //Position: 0x30A2 / 12450
{
	*iParam2 = 0;
	if (Function_43(bParam0, 39) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(bParam0, 6, 1) > _GET_MAX_AMMO_AMOUNT(bParam0, 6))
		{
			(*uParam1)[*iParam2] = 39;
			*iParam2++;
		}
	}
	if (Function_43(bParam0, 41) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(bParam0, 8, 1) > _GET_MAX_AMMO_AMOUNT(bParam0, 8))
		{
			(*uParam1)[*iParam2] = 41;
			*iParam2++;
		}
	}
	if (Function_43(bParam0, 40) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(bParam0, 7, 1) > _GET_MAX_AMMO_AMOUNT(bParam0, 7))
		{
			(*uParam1)[*iParam2] = 40;
			*iParam2++;
		}
	}
	if (Function_43(bParam0, 42) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(bParam0, 9, 1) > _GET_MAX_AMMO_AMOUNT(bParam0, 9))
		{
			(*uParam1)[*iParam2] = 42;
			*iParam2++;
		}
	}
	if (Function_43(bParam0, 43) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(bParam0, 10, 1) > _GET_MAX_AMMO_AMOUNT(bParam0, 10))
		{
			(*uParam1)[*iParam2] = 43;
			*iParam2++;
		}
	}
	if (Function_43(bParam0, 44) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(bParam0, 11, 1) > _GET_MAX_AMMO_AMOUNT(bParam0, 11))
		{
			(*uParam1)[*iParam2] = 44;
			*iParam2++;
		}
	}
	return;
}

void Function_45(int iParam0) //Position: 0x31C2 / 12738
{
	Global_16876[iParam06].f_16++;
	if (Global_16876[iParam06].f_16 == 1)
	{
		Function_46(409, 1, 0, 0);
	}
	return;
}

int Function_46(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x31F3 / 12787
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
	Function_59(iParam0, TO_FLOAT(bParam1), 1);
	Function_58(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_47(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_47(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x3413 / 13331
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_57(390))), 32);
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
					bVar19 = (Function_56(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_56(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_54(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_51(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_49(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_48(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_211(), &Var9);
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

var Function_48(int iParam0) //Position: 0x3A40 / 14912
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_49(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x3A51 / 14929
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
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_50(char* cParam0, bool bParam1) //Position: 0x3B46 / 15174
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_51(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x3B5F / 15199
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_53(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_52(Function_53(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_52(int iParam0, int iParam1) //Position: 0x3BC4 / 15300
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_53(int iParam0, int iParam1) //Position: 0x3BD6 / 15318
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_54(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x3BE8 / 15336
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
		*uParam3 = ROUND((fVar2 * 100.0f));
		*uParam4 = ROUND((fVar3 * 100.0f));
	}
	else
	{
		*uParam3 = ROUND(((fParam1 * 100.0f) / fVar0));
		*uParam4 = ROUND(((fParam2 * 100.0f) / fVar0));
	}
}

int Function_55(int iParam0) //Position: 0x3D18 / 15640
{
	return Global_35278[iParam020].f_48;
}

float Function_56(int iParam0) //Position: 0x3D27 / 15655
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_57(int iParam0) //Position: 0x3D60 / 15712
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_58(int iParam0) //Position: 0x3D9D / 15773
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

int Function_59(int iParam0, float fParam1, bool bParam2) //Position: 0x3F37 / 16183
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

bool Function_60(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, float fParam6, var uParam7, bool bParam8, var uParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, int iParam15, float fParam16, bool bParam17, var uParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, var uParam23, float fParam24) //Position: 0x41C7 / 16839
{
	var uVar0;
	
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
				*uParam2 = Function_92(*uParam0, Global_34573);
				AI_GOAL_LOOK_AT_ACTOR_NEW(*uParam0, *uParam1, -1.0f, 1);
				bParam8 = CREATE_POINT_IN_LAYOUT(bParam5, Function_211(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
				ATTACH_OBJECTS(bParam8, *uParam1, Function_211(), 0.0f, 0.5f, fParam16, 0.0f, 0.0f, 0.0f, 4294967295);
				if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), *uParam0, 1.0f, iParam14, 1, 1, 0) || Function_92(Global_34573, *uParam0) > 2.0f)
				{
					TASK_FOLLOW_OBJECT_AT_DISTANCE(*uParam0, bParam8, 1.0f, iParam15);
					TASK_PRIORITY_SET(*uParam0, 1);
				}
				*uParam3 = 1;
			}
			break;
		
		case 0x00000001:
			if ((Function_92(*uParam0, *uParam1) - *uParam2) < fParam6)
			{
				TASK_FLEE_ACTOR(*uParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
				return 0;
			}
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), *uParam0, 1.0f, iParam14, 1, 1, 0))
			{
				uVar0 = TASK_SEQUENCE_OPEN();
				TASK_FACE_ACTOR(false, *uParam1, 0, 3212836864);
				TASK_FACE_ACTOR(false, *uParam1, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(*uParam0, uVar0);
				TASK_SEQUENCE_RELEASE(uVar0, 1);
				TASK_PRIORITY_SET(*uParam0, 1);
				*uParam9 = 0;
				*uParam3 = 4;
			}
			else if (!Function_20(*uParam0, 0))
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
					Function_83(*uParam0, Global_34573, "nThank_You", 0, 5, 60, 1, 1);
				}
				else
				{
					Function_83(*uParam0, Global_34573, bParam12, bParam13, 5, 60, 1, 1);
				}
				*uParam3 = 5;
				Function_104(bParam4, 0.0f);
			}
			else if (!Function_20(*uParam0, 0))
			{
				return 0;
			}
			break;
		
		case 0x00000005:
			if (uParam23 && !Function_10(*uParam0))
			{
				if (fParam24 != -1.0f)
				{
					if (!IS_AMBIENT_SPEECH_PLAYING(*uParam0))
					{
						RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
						Function_32(*uParam0, 4, 0, 1);
					}
				}
				else if (Function_100(bParam4, fParam24))
				{
					RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
					Function_32(*uParam0, 4, 0, 1);
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
							Function_83(Global_34573, *uParam0, bParam20, bParam20, 5, 60, 1, 1);
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
			if (uParam23 && !Function_10(*uParam0))
			{
				if (Function_100(bParam4, fParam24))
				{
					RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
					Function_32(*uParam0, 4, 0, 1);
				}
			}
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(*uParam0, bParam11) && !IS_AMBIENT_SPEECH_PLAYING(Global_34573))
			{
				RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
				*uParam7 = 1;
				if (bParam17)
				{
					Function_32(*uParam0, 4, 0, iParam15);
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

void Function_61(int iParam0, int iParam1) //Position: 0x456D / 17773
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

void Function_62(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x45F0 / 17904
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_63(*uParam0), iParam2, iParam3, iParam4);
	}
}

var Function_63(int iParam0) //Position: 0x4614 / 17940
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

bool Function_64(bool bParam0, bool bParam1) //Position: 0x4B67 / 19303
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		return 0;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return 0;
	}
	bVar0 = CREATE_OBJECT_ITERATOR(bParam1);
	ITERATE_IN_LAYOUT(bVar0, bParam1);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		if (bVar1 == bParam0)
		{
			DESTROY_ITERATOR(bVar0);
			return 1;
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return 0;
}

bool Function_65(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x4BBE / 19390
{
	if (!IS_ACTOR_VALID(bParam0) || !IS_ACTOR_IN_HOGTIE(bParam0))
	{
		Function_29(bParam0);
		Function_66(&bParam1);
		if (iLocal_77 == 0)
		{
			Function_106("Hunter_help04", 0x40f00000, 1, 2, 0, 0, 0, 0);
		}
		return 1;
	}
	if (Function_71() && GET_ATTACHED_HOGTIE_VICTIM(Global_34573) == bParam0)
	{
		if (Function_135(GET_ATTACHED_HOGTIE_VICTIM(Global_34573)))
		{
			Function_29(bParam0);
			Function_66(&bParam1);
			return 1;
		}
	}
	return 0;
}

void Function_66(bool bParam0) //Position: 0x4C35 / 19509
{
	Function_104(bParam0, 0.0f);
	return;
}

var Function_67(bool bParam0, int iParam1) //Position: 0x4C41 / 19521
{
	if (iParam1 == 1)
	{
		RESET_ANIM_SET_FOR_ACTOR(bParam0, 1);
		TASK_FACE_ACTOR(bParam0, Global_34573, 1, -1.0f);
		TASK_PRIORITY_SET(bParam0, 0);
		iParam1 = 0;
	}
	return iParam1;
}

bool Function_68(bool bParam0, float fParam1) //Position: 0x4C68 / 19560
{
	if (Function_100(bParam0, fParam1))
	{
		Function_69(bParam0);
		return 1;
	}
	return 0;
}

void Function_69(int iParam0) //Position: 0x4C80 / 19584
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

var Function_70(bool bParam0, bool bParam1) //Position: 0x4C94 / 19604
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	if (EVENT_TRAP_SUCCESSFUL_TRAP(bParam1))
	{
		bVar0 = CREATE_OBJECT_ITERATOR(bParam0);
		ITERATE_IN_EVENT_TRAP(bVar0, bParam1);
		bVar6 = START_OBJECT_ITERATOR(bVar0);
		if (IS_OBJECT_VALID(bVar6))
		{
			while (IS_OBJECT_VALID(bVar6))
			{
				bVar1 = GET_EVENT_FROM_OBJECT(bVar6);
				bVar2 = GET_EVENT_TARGET_AS_OBJECT(bVar1);
				bVar3 = GET_EVENT_PERPETRATOR(bVar1);
				bVar4 = GET_ACTOR_FROM_OBJECT(bVar2);
				bVar5 = GET_ACTOR_FROM_OBJECT(bVar3);
				bVar5 = bVar5;
				if (IS_ACTOR_VALID(bVar4))
				{
					if (Function_135(bVar4))
					{
						return bVar4;
					}
				}
				bVar6 = OBJECT_ITERATOR_NEXT(bVar0);
			}
			EVENT_TRAP_CLEAR_EVENTS(bParam1);
		}
		EVENT_TRAP_CLEAR_TRAP_FLAG(bParam1);
	}
	if (IS_ITERATOR_VALID(bVar0))
	{
		DESTROY_ITERATOR(bVar0);
	}
	return bVar4;
}

bool Function_71() //Position: 0x4D27 / 19751
{
	if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(Global_34573)))
	{
		return 1;
	}
	return 0;
}

int Function_72(bool bParam0) //Position: 0x4D3C / 19772
{
	bool bVar0;
	
	bVar0 = Function_79(608);
	if (bVar0 <= bParam0)
	{
		Function_73(608, bVar0);
		bParam0 = (bParam0 - bVar0);
	}
	else
	{
		Function_73(608, bParam0);
		return 1;
	}
	bVar0 = Function_79(605);
	if (bVar0 <= bParam0)
	{
		Function_73(605, bVar0);
		bParam0 = (bParam0 - bVar0);
	}
	else
	{
		Function_73(605, bParam0);
		return 1;
	}
	bVar0 = Function_79(607);
	if (bVar0 <= bParam0)
	{
		Function_73(607, bVar0);
		bParam0 = (bParam0 - bVar0);
	}
	else
	{
		Function_73(607, bParam0);
		return 1;
	}
	bVar0 = Function_79(604);
	if (bVar0 <= bParam0)
	{
		Function_73(604, bVar0);
		bParam0 = (bParam0 - bVar0);
	}
	else
	{
		Function_73(604, bParam0);
		return 1;
	}
	bVar0 = Function_79(606);
	if (bVar0 <= bParam0)
	{
		Function_73(606, bVar0);
		bParam0 = (bParam0 - bVar0);
	}
	else
	{
		Function_73(606, bParam0);
		return 1;
	}
	return 0;
}

int Function_73(int iParam0, bool bParam1) //Position: 0x4E24 / 20004
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
	iVar1 = Function_77(iParam0, 4294967295);
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
	iVar1 = Function_74();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

int Function_74() //Position: 0x4FC0 / 20416
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
	Function_75();
	return 0;
}

void Function_75() //Position: 0x505F / 20575
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
		Function_76(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_76(int iParam0) //Position: 0x510E / 20750
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

var Function_77(int iParam0, int iParam1) //Position: 0x516C / 20844
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

int Function_78(int iParam0, bool bParam1, int iParam2) //Position: 0x51AD / 20909
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
	Function_58(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_47(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_79(int iParam0) //Position: 0x53A8 / 21416
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

int Function_80() //Position: 0x53E9 / 21481
{
	int iVar0;
	
	iVar0 = (iVar0 + Function_79(608));
	iVar0 = (iVar0 + Function_79(605));
	iVar0 = (iVar0 + Function_79(607));
	iVar0 = (iVar0 + Function_79(604));
	iVar0 = (iVar0 + Function_79(606));
	if (iVar0 >= bLocal_65)
	{
		return bLocal_65;
	}
	return iVar0;
}

int Function_81(bool bParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x5435 / 21557
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

void Function_82(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x5488 / 21640
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_25(Global_6269) };
		}
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, uVar4, iParam6);
	}
}

void Function_83(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x5503 / 21763
{
	bParam1 = bParam1;
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0) && Function_92(bParam0, Global_34573) >= IntToFloat(iParam5))
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

bool Function_84(var uParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, var uParam6, var uParam7, bool bParam8, var uParam9, bool bParam10, int iParam11, float fParam12, float fParam13, int iParam14, int iParam15, bool bParam16, bool bParam17) //Position: 0x5593 / 21907
{
	var uVar0;
	
	switch (*uParam0)
	{
		case 0x00000000:
			if (Function_92(bParam1, Global_34573) > 65.0f)
			{
				RESET_ANIM_SET_FOR_ACTOR(bParam1, 1);
				AI_GOAL_LOOK_AT_ACTOR_NEW(bParam1, Global_34573, -1.0f, 1);
				uVar0 = TASK_SEQUENCE_OPEN();
				TASK_FACE_ACTOR(false, Global_34573, 0, 3212836864);
				TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bParam1, uVar0);
				TASK_SEQUENCE_RELEASE(uVar0, 1);
				TASK_PRIORITY_SET(bParam1, 0);
				*uParam0 = 1;
			}
			break;
		
		case 0x00000001:
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam1, 1.0f, iParam14, 1, 0, 0))
			{
				if (GET_NTH_TASK_STATUS(bParam1, 0) == 0)
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam1)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam1));
					}
					*bParam3 = ADD_BLIP_FOR_ACTOR(bParam1, 325, 0, 2, 0);
					SET_BLIP_NAME(*bParam3, GET_ACTOR_ENUM_STRING(bParam1));
					if (IS_STRING_VALID(bParam4))
					{
						SET_ANIM_SET_FOR_ACTOR(bParam1, bParam4, 0);
						SET_ACTION_NODE_FOR_ACTOR(bParam1, bParam5);
					}
					Function_104(iParam2, 0.0f);
					Function_83(bParam1, Global_34573, uParam6, uParam7, 5, 60, 1, 1);
					*uParam0 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_100(iParam2, fParam12) && !IS_AMBIENT_SPEECH_PLAYING(bParam1))
			{
				if (IS_AMBIENT_SPEECH_PLAYING(bParam1))
				{
					CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam1);
				}
				if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam1, 1.0f, iParam15, 1, 0, 0))
				{
					if (IS_STRING_VALID(bParam16))
					{
						RESET_ANIM_SET_FOR_ACTOR(bParam1, 1);
						SET_ANIM_SET_FOR_ACTOR(bParam1, bParam16, 0);
						SET_ACTION_NODE_FOR_ACTOR(bParam1, bParam17);
					}
					Function_83(bParam1, Global_34573, bParam8, uParam9, 5, 60, 1, 1);
					Function_104(iParam2, 0.0f);
					*uParam0 = 3;
				}
			}
			break;
		
		case 0x00000003:
			if (Function_100(iParam2, fParam13) && !IS_AMBIENT_SPEECH_PLAYING(bParam1))
			{
				if (IS_STRING_VALID(bParam10))
				{
					Function_83(bParam1, Global_34573, bParam10, iParam11, 5, 60, 1, 1);
				}
				Function_104(iParam2, 0.0f);
				REMOVE_BLIP(*bParam3);
				return 1;
			}
			break;
	}
	return 0;
}

int Function_85(bool bParam0) //Position: 0x5740 / 22336
{
	bParam0 = (bParam0 * 1000 - 1);
	return (RAND_INT_RANGE(0, bParam0) / 1000);
}

bool Function_86() //Position: 0x5759 / 22361
{
	return (RAND_INT_RANGE(0, 1999) / 1000) != 0;
}

int Function_87(var uParam0, bool bParam1) //Position: 0x576C / 22380
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (Function_20((*uParam0)[iVar0], bParam1))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int Function_88(bool bParam0, int iParam1, var uParam2, var uParam3) //Position: 0x579C / 22428
{
	float fVar0;
	
	uParam3 = uParam3;
	switch (iLocal_22)
	{
		case 0x00000001:
			*uParam2 = Function_90(bParam0, iParam1);
			if (*uParam2 != 4294967295)
			{
				if (Function_20((*iParam1)[*uParam2], 0))
				{
					bLocal_93 = (*iParam1)[*uParam2];
					fVar0 = Function_89(bParam0);
					AI_SET_WEAPON_MIN_RANGE(bParam0, 0.0f);
					AI_SET_WEAPON_MAX_RANGE(bParam0, (fVar0 * 4.0f));
					MEMORY_REPORT_POSITION_AUTO(bParam0, bLocal_93, 1);
					COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(bParam0, 0);
					TASK_USE_TURRET_AGAINST_OBJECT(bParam0, bLocal_31, (*iParam1)[*uParam2], -1.0f);
					iLocal_22 = 2;
					break;
				}
			}
			else
			{
				iLocal_22 = 4;
			}
			iLocal_22 = 4;
			break;
		
		case 0x00000002:
			if (!Function_20(bLocal_93, 0) || Function_90(bParam0, iParam1) == *uParam2)
			{
				iLocal_22 = 1;
			}
			else if (Function_92(bLocal_93, bParam0) < 15.0f)
			{
				TASK_GO_NEAR_COORD(bLocal_93, &vLocal_57, 5.0f, 4);
			}
			break;
		
		case 0x00000004:
			return 1;
			break;
	}
	return 0;
}

var Function_89(int iParam0) //Position: 0x586E / 22638
{
	struct<5> Var0;
	
	if (GET_ACTOR_CURRENT_WEAPON_AI_PARAMETERS(iParam0, &Var0))
	{
		return StackVal;
	}
	return 0.0f;
}

int Function_90(bool bParam0, int iParam1) //Position: 0x5887 / 22663
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = 4294967295;
	fVar2 = 10000.0f;
	iVar0 = 0;
	while (iVar0 <= *iParam1)
	{
		if (IS_ACTOR_VALID((*iParam1)[iVar0]))
		{
			if (IS_ACTOR_ALIVE((*iParam1)[iVar0]))
			{
				fVar3 = Function_92(bParam0, (*iParam1)[iVar0]);
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

void Function_91() //Position: 0x58E2 / 22754
{
	int iVar0;
	
	bLocal_124 = true;
	if (Global_29004 == 0)
	{
		iVar0 = Function_85(4);
		if (iVar0 == 0)
		{
			cLocal_123 = "TC_FTR_SONG_01";
		}
		else if (iVar0 == 1)
		{
			cLocal_123 = "TC_FTR_SONG_02";
		}
		else if (iVar0 == 2)
		{
			cLocal_123 = "TC_FTR_SONG_03";
		}
		else if (iVar0 == 3)
		{
			cLocal_123 = "TC_FTR_SONG_04";
		}
	}
	else if (Global_29004 == 2)
	{
		iVar0 = Function_85(2);
		if (iVar0 == 0)
		{
			cLocal_123 = "TC_NRT_SONG_01";
		}
		else if (iVar0 == 1)
		{
			cLocal_123 = "TC_NRT_SONG_02";
		}
	}
	else if (Global_29004 == 1)
	{
		iVar0 = Function_85(2);
		if (iVar0 == 0)
		{
			cLocal_123 = "TC_MEX_SONG_01";
		}
		else if (iVar0 == 1)
		{
			cLocal_123 = "TC_MEX_SONG_02";
		}
	}
	AUDIO_MUSIC_FORCE_TRACK(cLocal_123, "SUSPENSE_LIGHT", 0.0f, 500, 4294967295, 3212836864, 0);
	return;
}

float Function_92(bool bParam0, bool bParam1) //Position: 0x5A10 / 23056
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

void Function_93(bool bParam0) //Position: 0x5B01 / 23297
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

int Function_94(bool bParam0, bool bParam1) //Position: 0x5B4D / 23373
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

int Function_95(bool bParam0, var uParam1, var uParam2, int iParam3, bool bParam4, float fParam5) //Position: 0x5C32 / 23602
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
		fVar0 = Function_92(bParam0, Global_34573);
		if (!Function_27(iParam3, 8))
		{
			if (GET_LAST_ATTACKER(bParam0) == Global_34573)
			{
				*uParam1 = 8;
				Function_96(bParam0);
				return 1;
			}
		}
		if (!Function_27(iParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(bParam0, 1.0f))
			{
				*uParam1 = 2;
				Function_96(bParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(bParam0, 1.0f, 1.0f))
			{
				*uParam1 = 2;
				Function_96(bParam0);
				return 1;
			}
		}
		if (!Function_27(iParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(bParam0) || (((GET_ACTOR_UNDER_RETICLE(Global_34573, 0) != bParam0 && IS_PLAYER_WEAPON_ZOOMED(Global_34573)) && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(Global_34573) != bParam0 && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f))
			{
				if (*uParam2 > 0.0f)
				{
					*uParam1 = 4;
					Function_96(bParam0);
					return 1;
				}
				if (*uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - *uParam2) < 1.3f)
					{
						*uParam1 = 4;
						Function_96(bParam0);
						return 1;
					}
				}
				*uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_27(iParam3, 1))
		{
			if (Global_3403 || Global_3404)
			{
				*uParam1 = 1;
				Function_96(bParam0);
				return 1;
			}
		}
		if (!Function_27(iParam3, 16))
		{
			if (UNK_0x7F454A92(bParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(bParam0)) > 2.0f && fVar0 > 18.0f)
				{
					*uParam1 = 16;
					Function_96(bParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_96(bool bParam0) //Position: 0x5DC9 / 24009
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(bParam0, 1);
	UNK_0x99AFD2D1(bParam0, 0, 0);
	Function_97(bParam0);
	MEMORY_CONSIDER_AS(Global_34573, bParam0, 2);
	MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
	AI_GOAL_LOOK_CLEAR(bParam0);
	return;
}

void Function_97(bool bParam0) //Position: 0x5DFD / 24061
{
	SAY_SINGLE_LINE_CONTEXT(bParam0, 60, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

void Function_98(int iParam0, bool bParam1, bool bParam2) //Position: 0x5E14 / 24084
{
	if (bParam1)
	{
		HUD_CLEAR_HELP_QUEUE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
		Function_106(iParam0, 0x40f00000, 1, 2, 0, 0, 0, 0);
		if (bParam2)
		{
			Function_99();
		}
	}
	return;
}

void Function_99() //Position: 0x5E3D / 24125
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

bool Function_100(bool bParam0, float fParam1) //Position: 0x5EC6 / 24262
{
	if (Function_103(bParam0))
	{
		if (Function_101(bParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_101(int iParam0) //Position: 0x5EE2 / 24290
{
	if (Function_103(iParam0))
	{
		if (Function_102(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_102(int iParam0) //Position: 0x5FAA / 24490
{
	return Function_27(*iParam0, 2);
}

bool Function_103(int iParam0) //Position: 0x5FB7 / 24503
{
	return Function_27(*iParam0, 1);
}

void Function_104(bool bParam0, float fParam1) //Position: 0x5FC4 / 24516
{
	bParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_209(bParam0, 1);
	Function_105(bParam0, 2);
	bParam0->f_8 = 0.0f;
	return;
}

void Function_105(var uParam0, bool bParam1) //Position: 0x5FE5 / 24549
{
	*uParam0 = (*uParam0 - (*uParam0 && bParam1));
	return;
}

void Function_106(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x5FF8 / 24568
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
			Var0 = { StackVal, StackVal, StackVal, Function_25(Global_6269) };
		}
		PRINT_OBJECTIVE_B(iParam0, iParam1, iParam7, iParam3, iParam2, &Var0, 0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_OBJECTIVE_B(iParam0, iParam1, iParam7, iParam3, iParam2, iVar4, iParam5, iParam6);
	}
}

float Function_107(bool bParam0) //Position: 0x607D / 24701
{
	var uVar0;
	float fVar1;
	
	if (!bParam0)
	{
		Function_108(&uVar0, &fVar1);
		if (fVar1 < 60.0f)
		{
			return (fVar1 + 20.0f);
		}
		return (fVar1 + 10.0f);
	}
	return (190.0f + 20.0f);
}

void Function_108(float fParam0, bool bParam1) //Position: 0x60B8 / 24760
{
	vector3 vVar0;
	
	if (Global_3386 && !Global_3403)
	{
		*fParam0 = 65.0f;
		*bParam1 = 95.0f;
	}
	else if ((!IS_ACTOR_RIDING(GET_PLAYER_ACTOR(0)) && !IS_ACTOR_RIDING_VEHICLE(GET_PLAYER_ACTOR(0))) && !Global_3403)
	{
		*fParam0 = 115.0f;
		*bParam1 = 170.0f;
	}
	else
	{
		GET_ACTOR_VELOCITY(GET_PLAYER_ACTOR(0), &vVar0);
		if (VMAG(vVar0) > 5.0f)
		{
			*fParam0 = 130.0f;
			*bParam1 = 190.0f;
		}
		else
		{
			*fParam0 = 130.0f;
			*bParam1 = 190.0f;
		}
	}
	return;
}

void Function_109(vector3 vParam0, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7, bool bParam8) //Position: 0x6141 / 24897
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
	else if (!Function_122(StackVal, StackVal, vParam0))
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
			Function_121(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_120(0);
		}
		if (bParam8)
		{
			Function_118(0, GET_THIS_SCRIPT_ID());
			Global_3373 = GET_THIS_SCRIPT_ID();
			Function_116(iParam4);
			Global_3401 = 1;
		}
		Function_114(iParam4);
		if (Function_113(StackVal, 32768))
		{
			Function_110(1);
		}
		Global_16876[iParam46].f_12++;
		Function_46(408, 1, 0, 0);
	}
}

void Function_110(bool bParam0) //Position: 0x6248 / 25160
{
	if (bParam0)
	{
		Function_112(0x10000000);
	}
	else
	{
		Function_111(0x10000000);
	}
	Global_26316.f_172 = 0;
	return;
}

void Function_111(int iParam0) //Position: 0x626C / 25196
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_112(int iParam0) //Position: 0x6289 / 25225
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

bool Function_113(var uParam0, int iParam1) //Position: 0x629C / 25244
{
	return (uParam0 && iParam1) == 0;
}

void Function_114(int iParam0) //Position: 0x62A9 / 25257
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (!Function_27(StackVal, 524288))
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
			bVar1 = Function_115(iVar0 * 60);
			ADD_TIME(&Global_17483[iParam075] + 264, 0, 0, bVar1, 0);
			Global_16876[iParam06] = Global_17483[iParam075].f_264;
		}
	}
	return;
}

int Function_115(int iParam0) //Position: 0x634D / 25421
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_116(int iParam0) //Position: 0x6363 / 25443
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
	Function_117(&Var0 + 80[Var0.f_763], &(Global_16876[iParam06]), iParam0);
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

void Function_117(var uParam0, var uParam1, int iParam2) //Position: 0x6401 / 25601
{
	uParam0->f_4 = iParam2;
	*uParam0 = uParam1->f_12;
	uParam0->f_8 = 1;
	return;
}

void Function_118(int iParam0, int iParam1) //Position: 0x6419 / 25625
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
			Function_119(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_119(int iParam0) //Position: 0x649B / 25755
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

void Function_120(int iParam0) //Position: 0x64E9 / 25833
{
	Global_12976.f_76 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 76, 0, 0, (iParam0 + Function_115(900)), 0);
	return;
}

void Function_121(int iParam0) //Position: 0x650B / 25867
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, (iParam0 + Function_115(200)), 0);
	return;
}

bool Function_122(vector3 vParam0) //Position: 0x652C / 25900
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_123() //Position: 0x6544 / 25924
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_124(var uParam0, var uParam1, var uParam2, float fParam3, vector3 vParam4) //Position: 0x654D / 25933
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
		if (Function_125(StackVal, StackVal, Global_30616, "player_herb", &uVar0, 20.0f, 5, vParam4) >= 0)
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

int Function_125(bool bParam0, bool bParam1, var uParam2, float fParam3, int iParam4, vector3 vParam5) //Position: 0x65EE / 26094
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

void Function_126(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, float fParam6) //Position: 0x6682 / 26242
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3[6];
	bool bVar10;
	int iVar11;
	char* cVar12[32];
	float fVar20;
	
	bVar2 = true;
	bVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(vParam1, 1.0f, "p_gen_footlockerfull01x", 1);
	if (IS_PHYSINST_VALID(bVar0))
	{
		bVar1 = GET_OBJECT_FROM_PHYSINST(bVar0);
		if (IS_OBJECT_VALID(bVar1))
		{
			ROTATE_OBJECT_UPRIGHT_TO_GROUND(bVar1, 1, 5.0f);
		}
	}
	DECOR_SET_INT(GET_OBJECT_FROM_GRINGO(bParam0), "GringoDollarAmt", false);
	Function_127(GET_OBJECT_FROM_GRINGO(bParam0));
	if (bParam4 == 4294967295)
	{
		bVar10 = false;
		Function_44(Global_34573, &uVar3, &bVar10);
		if (bVar10 >= 0)
		{
			PRINTINT(bVar10);
			iVar11 = RAND_INT_RANGE(0, (bVar10 - 1));
			PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(uVar3[iVar11]));
			bParam4 = Function_43(Global_34573, uVar3[iVar11]);
			if (bParam4 == 34)
			{
				bParam4 = 16;
			}
		}
		else
		{
			bVar2 = false;
		}
	}
	else
	{
		bParam4 = Function_43(Global_34573, bParam4);
	}
	if (bParam4 == 4294967295)
	{
		bVar2 = false;
	}
	if (bVar2)
	{
		strcpy(&cVar12, "Ammo_", 32);
		straddi(&cVar12, GET_AMMO_ENUM(bParam4), 32);
		PRINTSTRING(&cVar12);
		fVar20 = GET_WEAPON_MAX_AMMO(bParam4);
		if (fVar20 >= 2.0f)
		{
			fParam6 = 2.0f;
		}
		DECOR_SET_INT(GET_OBJECT_FROM_GRINGO(bParam0), &cVar12, FLOOR(((2.0f * fParam6) * GET_WEAPON_MAX_AMMO(bParam4))));
	}
	if (bParam5 != 4294967295 || (bParam5 != 11 && GET_ITEM_COUNT(SS_GET_STRING(1, 11), Global_34573) < 0))
	{
		bParam5 = Function_42();
	}
	DECOR_SET_INT(GET_OBJECT_FROM_GRINGO(bParam0), "GiveItem", bParam5);
}

void Function_127(bool bParam0) //Position: 0x67E2 / 26594
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

void Function_128(bool bParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x6816 / 26646
{
	var uVar0;
	
	if (Function_134(bParam0) && !Function_133(bParam0, 1))
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
	Function_131(bParam0);
	DECOR_SET_BOOL(bParam0, "Zombie", 1);
	Function_127(bParam0);
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
	Function_129(bParam0, uParam4, uParam5);
}

void Function_129(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6A79 / 27257
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
			Function_130(bParam0, bParam1, 0);
		}
		else
		{
			AI_DONT_HARM_ACTOR(bParam0);
			SET_ALLOW_EXECUTE(bParam0, 0);
		}
	}
	return;
}

void Function_130(bool bParam0, int iParam1, bool bParam2) //Position: 0x6B2B / 27435
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
			bVar9 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bParam0, Function_211(), "script_zombie_emerge", vVar3);
			if (IS_OBJECT_VALID(bVar9))
			{
				Function_123();
				bVar10 = CREATE_POINT_IN_LAYOUT(bParam0, Function_211(), vVar3, Function_123());
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
			bVar9 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bParam0, Function_211(), "script_zombie_emerge", vVar0);
			if (IS_OBJECT_VALID(bVar9))
			{
				Function_123();
				bVar10 = CREATE_POINT_IN_LAYOUT(bParam0, Function_211(), vVar0, Function_123());
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

void Function_131(bool bParam0) //Position: 0x6CDB / 27867
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
	Function_132(bParam0, -100.0f);
	AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(bParam0, -1.0f);
	AI_PERCEPTION_SET_VISUAL_ID_TIME(bParam0, 0.0f);
	return;
}

void Function_132(var uParam0, int iParam1) //Position: 0x703F / 28735
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

bool Function_133(bool bParam0, int iParam1) //Position: 0x7061 / 28769
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(bParam0);
	if ((((((iVar0 != 1252 && iParam1) || (iVar0 != 1253 && iParam1)) || iVar0 != 541) || iVar0 != 542) || iVar0 != 543) || iVar0 != 544)
	{
		return 1;
	}
	return 0;
}

int Function_134(bool bParam0) //Position: 0x70A3 / 28835
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(bParam0);
	if (iVar0 <= 1204 && iVar0 >= 1227)
	{
		return 1;
	}
	return 0;
}

bool Function_135(bool bParam0) //Position: 0x70C3 / 28867
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(bParam0);
	if (iVar0 <= 1204 && iVar0 >= 1254)
	{
		return 1;
	}
	if (Function_133(bParam0, 1))
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(bParam0, "Zombie"))
	{
		return DECOR_GET_BOOL(bParam0, "Zombie");
	}
	return 0;
}

void Function_136(bool bParam0) //Position: 0x710E / 28942
{
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam0, 0);
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bParam0, 0);
	MEMORY_ATTACK_ON_SIGHT(bParam0, 0);
	SET_ACTOR_CAN_PLAY_GESTURES(bParam0, false);
	AI_SET_ALLOW_ATTACK_HOGTIED_ACTORS(bParam0, 1);
	return;
}

var Function_137(var uParam0, bool bParam1, var uParam2, vector3 vParam3, vector3 vParam6, int iParam9) //Position: 0x7138 / 28984
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	int iVar7;
	bool bVar8;
	
	bVar0 = CREATE_PROPSET_IN_LAYOUT(uParam0, bParam1, uParam2, vParam3, vParam6);
	bVar1 = GET_LAYOUT_FROM_OBJECT(bVar0);
	bVar2 = CREATE_OBJECT_ITERATOR(bVar1);
	ITERATE_IN_LAYOUT(bVar2, bVar1);
	bVar3 = START_OBJECT_ITERATOR(bVar2);
	while (IS_OBJECT_VALID(bVar3))
	{
		if (!GET_OBJECT_TYPE(bVar3) != 57)
		{
			if (!iParam9 != 4294967295)
			{
				GET_OBJECT_POSITION(bVar3, &vVar4);
				vVar4 = { StackVal, StackVal, Vector(vVar4, StackVal, StackVal) + Vector(0.0f, 4.0f, 0.0f) };
				iVar7 = GET_MATERIAL_AT_VECTOR(&vVar4);
				if (!iVar7 != 0 && (iVar7 && iParam9) < 0)
				{
					PRINTSTRING("Deleting object. Materials were above");
					PRINTNL();
					DESTROY_OBJECT(bVar3);
				}
			}
			if (IS_OBJECT_VALID(bVar3))
			{
				if (DECOR_CHECK_EXIST(bVar3, "rstarInfoSnapping_Type"))
				{
					bVar8 = DECOR_CHECK_STRING(bVar3, "rstarInfoSnapping_Type", "align");
					SNAP_OBJECT_TO_GROUND(bVar3, 10.0f, bVar8, 1092616192);
				}
				NET_OBJECT_SET_REPLICATION_MODE(bVar3, 0);
				if (Function_138())
				{
					SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_OBJECT(bVar3), 1);
				}
			}
		}
		bVar3 = OBJECT_ITERATOR_NEXT(bVar2);
	}
	STORE_MOBILE_LAYOUT_TRANSFORMS(GET_MOBILE_LAYOUT_FROM_OBJECT(bVar0));
	ADD_AI_COVERSET_FOR_PROPSET(bVar0);
	DESTROY_ITERATOR(bVar2);
	return bVar0;
}

bool Function_138() //Position: 0x7281 / 29313
{
	return NET_IS_MANAGER_INITIALIZED();
}

float Function_139() //Position: 0x728A / 29322
{
	float fVar0;
	bool bVar1;
	
	if (Global_3371)
	{
		return 0.0f;
	}
	Function_108(&fVar0, &bVar1);
	if (fVar0 >= 50.0f)
	{
		return (fVar0 - 10.0f);
	}
	return (fVar0 - 20.0f);
}

bool Function_140(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x72BB / 29371
{
	struct<8> Var0;
	bool bVar8;
	bool bVar9;
	
	if (Global_3371 && iParam0->f_32)
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_180(GET_SCRIPT_NAME()) };
		bVar8 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Global_26150, &Var0, 4.203895E-45f, Function_178(*(iParam0 + 8), 0.0f, Global_34573, *(iParam0 + 8)), 0.0f, iParam0->f_52, 20.0f, iParam0->f_52);
		DECOR_SET_INT(bVar8, "script", GET_THIS_SCRIPT_ID());
		if (iParam0->f_56 != 4294967295)
		{
			DECOR_SET_INT(StackVal, bVar8, "category");
			Function_176(&bVar8, iParam0->f_32);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
		*(iParam0 + 8) = { StackVal, StackVal, Global_34574 };
		return 1;
	}
	*uParam3 = 0;
	if (!Function_141(iParam0))
	{
		if (iParam0->f_32 == 1)
		{
			if (*uParam2 == 0)
			{
				Function_24("Still scanning for the proper terrain to run this event.  Move the player around to find a good spawn location.", -1.0f, 1, 2, 1, 0);
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
		Function_24("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 5.0f, 1, 2, 1, 0);
	}
	if (bParam4)
	{
		if (!Function_22(iParam0->f_56, 0, 1, 0, 0))
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
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_180("restrictVol") };
		bVar9 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Global_26150, &Var0, 4.203895E-45f, Function_178(*(iParam0 + 8), 0.0f, Global_34573, *(iParam0 + 8)), 0.0f, iParam0->f_52, 20.0f, iParam0->f_52);
		DECOR_SET_INT(bVar9, "script", GET_THIS_SCRIPT_ID());
		if (iParam0->f_56 != 4294967295)
		{
			DECOR_SET_INT(StackVal, bVar9, "category");
			Function_176(&bVar9, iParam0->f_32);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
	}
	return 1;
}

bool Function_141(int iParam0) //Position: 0x764D / 30285
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	bool bVar12;
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
			Function_175(iParam0 + 4);
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
				vVar3 = { 0.0f, 0.0f, Function_107(1) };
				ROTATE_VECTOR_XZ(&vVar3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar3, StackVal) };
				ITERATE_IN_SPHERE(StackVal, vVar3, Function_107(1));
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
						bVar0 = Function_174(StackVal, StackVal, StackVal, vVar9, 0.01f);
					}
					else
					{
						bVar0 = Function_173(StackVal, StackVal, StackVal, vVar9, 0.1f, "locflag", (iParam0 + 64 + 24)->f_16);
					}
				}
				else if ((iParam0 + 64 + 24)->f_16 == 0)
				{
					bVar0 = Function_172(StackVal, StackVal, StackVal, vVar9, Function_139());
				}
				else
				{
					bVar0 = Function_171(StackVal, StackVal, StackVal, vVar9, Function_139(), "locflag", (iParam0 + 64 + 24)->f_16);
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
			Function_175(iParam0 + 4);
			ITERATE_IN_LAYOUT(StackVal, FIND_NAMED_LAYOUT("regions_layout"));
			fVar13 = 130.0f;
			bVar12 = 190.0f;
			GET_POSITION(GET_PLAYER_ACTOR(0), &vVar3);
			ITERATE_IN_SPHERE(StackVal, StackVal, vVar3);
			bVar1 = START_OBJECT_ITERATOR(StackVal);
			while (IS_OBJECT_VALID(bVar1) && !IS_OBJECT_VALID(bVar0))
			{
				if (DECOR_CHECK_EXIST(bVar1, "regid"))
				{
					bVar14 = DECOR_GET_INT(bVar1, "regid");
					if (Function_170(bVar14))
					{
						if (StackVal == (iParam0 + 64)->f_48)
						{
							if ((StackVal && Global_29008[bVar14]) >= 0)
							{
								GET_OBJECT_POSITION(bVar1, &vVar3);
								if (VDIST(vVar9, vVar3) < fVar13 && VDIST(vVar9, vVar3) > Function_107(1))
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
				Function_169(iParam0 + 8, 99.0f, iParam0 + 8, 10);
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
				Function_168(&vVar9, &vVar6);
				vVar3 = { StackVal, StackVal, Function_168(&vVar9, &vVar6) };
				if (!Function_122(StackVal, StackVal, vVar3))
				{
					PRINTSTRING("Player Pos: ");
					PRINTVECTOR(vVar9);
					PRINTNL();
					Function_108(&fVar13, &bVar12);
					if (VDIST(vVar3, vVar9) < ((fVar13 + ((bVar12 - fVar13) / 2.0f)) * 0.8f))
					{
						iVar2 = Function_165(StackVal, StackVal, iParam0, vVar3);
					}
				}
			}
			else
			{
				iVar2 = Function_161(iParam0);
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
					if (!Function_160(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (iParam0->f_60 == 1)
				{
					if (!Function_159(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (Function_27(StackVal, 131072))
				{
					if (StackVal || Function_158(StackVal, Function_158(StackVal, StackVal, *(iParam0 + 8)), Global_34574))
					{
						return 0;
					}
				}
				if (StackVal & 1024 == 1024)
				{
					if (Function_157(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (!Function_151(iParam0 + 8, iParam0 + 52, 0, iParam0->f_32))
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
				bVar12 = 150.0f;
				vVar3 = { 0.0f, 0.0f, ((fVar13 + bVar12) * -0.5f) };
				ROTATE_VECTOR_XZ(&vVar3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar3, StackVal) };
				uVar23 = START_CURVE_QUERY(Global_28841, vVar3, Function_150((iParam0 + 64)->f_120, 0), 0.0f, 20.0f, 5.0f, 0);
			}
			else
			{
				uVar23 = START_CURVE_QUERY(Global_28841, vVar9, Function_150((iParam0 + 64)->f_120, 0), 120.0f, 150.0f, 5.0f, 0);
			}
			if (GET_NUM_POINTS_IN_CURVE_QUERY(uVar23) >= 0)
			{
				iVar21 = RAND_INT_RANGE(0, (GET_NUM_POINTS_IN_CURVE_QUERY(uVar23) - 1));
				GET_POINT_FROM_CURVE_QUERY(uVar23, iVar21, &Var15);
				Function_149(&Var15);
				*(iParam0 + 8) = { StackVal, StackVal, Function_149(&Var15) };
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
				if (!Function_160(StackVal, StackVal, *(iParam0 + 8)))
				{
					return 0;
				}
			}
			if (iParam0->f_60 == 1)
			{
				if (!Function_159(StackVal, StackVal, *(iParam0 + 8)))
				{
					return 0;
				}
			}
			if (iParam0->f_60 == 0)
			{
				if (!(StackVal || Function_160(StackVal, Function_159(StackVal, StackVal, *(iParam0 + 8)), *(iParam0 + 8))))
				{
					return 0;
				}
			}
			if (Function_27(StackVal, 131072))
			{
				if (StackVal || Function_158(StackVal, Function_158(StackVal, StackVal, *(iParam0 + 8)), Global_34574))
				{
					return 0;
				}
			}
			if (StackVal && !Function_151(iParam0 + 8, iParam0 + 52, 0, iParam0->f_32) == 262144)
			{
				return 0;
			}
			break;
		
		case 0x00000004:
			if (!Function_146((iParam0 + 64)->f_120) < 0)
			{
				return 0;
			}
			break;
		
		case 0x00000007:
			switch ((iParam0 + 64)->f_128)
			{
				case 0x00000001:
					bVar24 = Function_143(StackVal, Global_29004, Global_29005, Global_29006, 1);
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
						bVar24 = Function_143(StackVal, Global_29004, Global_29005, (Global_29006 + iVar22), 1);
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
	if (Function_142(StackVal, StackVal, *(iParam0 + 8)))
	{
		return 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(*(iParam0 + 8), 10.0f))
	{
		return 0;
	}
	return 1;
}

bool Function_142(vector3 vParam0) //Position: 0x7E77 / 32375
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

bool Function_143(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x7EAC / 32428
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
								return Function_144(&Global_6298, &Global_7189, bParam3);
								break;
							
							case 0x00000001:
								return Function_144(&Global_6364, &Global_7287, bParam3);
								break;
							
							case 0x00000002:
								return Function_144(&Global_6351, &Global_7268, bParam3);
								break;
							
							default:
								return Function_144(&Global_6391, &Global_7327, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_144(&Global_6501, &Global_7490, bParam3);
								break;
							
							case 0x00000001:
								return Function_144(&Global_6402, &Global_7343, bParam3);
								break;
							
							case 0x00000003:
								return Function_144(&Global_6433, &Global_7389, bParam3);
								break;
							
							case 0x00000002:
								return Function_144(&Global_6490, &Global_7474, bParam3);
								break;
							
							case 0x00000004:
								return Function_144(&Global_6537, &Global_7543, bParam3);
								break;
							
							default:
								return Function_144(&Global_6532, &Global_7536, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_144(&Global_6563, &Global_7581, bParam3);
								break;
							
							case 0x00000001:
								return Function_144(&Global_6614, &Global_7657, bParam3);
								break;
							
							case 0x00000002:
								return Function_144(&Global_6643, &Global_7700, bParam3);
								break;
							
							default:
								return Function_144(&Global_6550, &Global_7562, bParam3);
								break;
						}
						break;
					
					case 0x00000003:
						switch (bVar1)
						{
							case 0x00000001:
								return Function_144(&Global_6667, &Global_7735, bParam3);
								break;
							
							default:
								return Function_144(&Global_6704, &Global_7790, bParam3);
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
								return Function_144(&Global_6709, &Global_7797, bParam3);
								break;
							
							case 0x00000001:
								return Function_144(&Global_6764, &Global_7879, bParam3);
								break;
							
							case 0x00000002:
								return Function_144(&Global_6785, &Global_7910, bParam3);
								break;
							
							default:
								return Function_144(&Global_6810, &Global_7947, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_144(&Global_6815, &Global_7954, bParam3);
								break;
							
							default:
								return Function_144(&Global_6928, &Global_8122, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000002:
								return Function_144(&Global_6933, &Global_8129, bParam3);
								break;
							
							case 0x00000001:
								return Function_144(&Global_6962, &Global_8172, bParam3);
								break;
							
							case 0x00000003:
								return Function_144(&Global_6987, &Global_8209, bParam3);
								break;
							
							default:
								return Function_144(&Global_7027, &Global_8268, bParam3);
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
		return Function_144(&Global_6298, &Global_7189, bParam3);
	}
	if (bVar1 == Global_30640[1])
	{
		return Function_144(&Global_6364, &Global_7287, bParam3);
	}
	if (bVar1 == Global_30640[2])
	{
		return Function_144(&Global_6351, &Global_7268, bParam3);
	}
	if (bVar1 == Global_30658[0])
	{
		return Function_144(&Global_6501, &Global_7490, bParam3);
	}
	if (bVar1 == Global_30658[1])
	{
		return Function_144(&Global_6402, &Global_7343, bParam3);
	}
	if (bVar1 == Global_30658[3])
	{
		return Function_144(&Global_6433, &Global_7389, bParam3);
	}
	if (bVar1 == Global_30658[2])
	{
		return Function_144(&Global_6490, &Global_7474, bParam3);
	}
	if (bVar1 == Global_30658[4])
	{
		return Function_144(&Global_6537, &Global_7543, bParam3);
	}
	if (bVar1 == Global_30668[0])
	{
		return Function_144(&Global_6563, &Global_7581, bParam3);
	}
	if (bVar1 == Global_30668[1])
	{
		return Function_144(&Global_6614, &Global_7657, bParam3);
	}
	if (bVar1 == Global_30668[2])
	{
		return Function_144(&Global_6643, &Global_7700, bParam3);
	}
	if (bVar1 == Global_30679[1])
	{
		return Function_144(&Global_6667, &Global_7735, bParam3);
	}
	if (bVar1 == Global_30685[0])
	{
		return Function_144(&Global_6709, &Global_7797, bParam3);
	}
	if (bVar1 == Global_30685[1])
	{
		return Function_144(&Global_6764, &Global_7879, bParam3);
	}
	if (bVar1 == Global_30685[2])
	{
		return Function_144(&Global_6785, &Global_7910, bParam3);
	}
	if (bVar1 == Global_30693[0])
	{
		return Function_144(&Global_6815, &Global_7954, bParam3);
	}
	if (bVar1 == Global_30707[2])
	{
		return Function_144(&Global_6933, &Global_8129, bParam3);
	}
	if (bVar1 == Global_30707[1])
	{
		return Function_144(&Global_6962, &Global_8172, bParam3);
	}
	if (bVar1 == Global_30707[3])
	{
		return Function_144(&Global_6987, &Global_8209, bParam3);
	}
	if (bVar1 == Global_30628[0])
	{
		return Function_144(&Global_6391, &Global_7327, bParam3);
	}
	if (bVar1 == Global_30628[1])
	{
		return Function_144(&Global_6532, &Global_7536, bParam3);
	}
	if (bVar1 == Global_30628[2])
	{
		return Function_144(&Global_6550, &Global_7562, bParam3);
	}
	if (bVar1 == Global_30628[3])
	{
		return Function_144(&Global_6704, &Global_7790, bParam3);
	}
	if (bVar1 == Global_30633[0])
	{
		return Function_144(&Global_6810, &Global_7947, bParam3);
	}
	if (bVar1 == Global_30633[2])
	{
		return Function_144(&Global_6928, &Global_8122, bParam3);
	}
	if (bVar1 == Global_30633[1])
	{
		return Function_144(&Global_7027, &Global_8268, bParam3);
	}
	return "";
}

var Function_144(var uParam0, var uParam1, bool bParam2) //Position: 0x84C1 / 33985
{
	int iVar0;
	
	iVar0 = bParam2;
	if (iVar0 <= *uParam0 || iVar0 > 0)
	{
		return "";
	}
	if (!Function_145(uParam0[iVar02], 2))
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

bool Function_145(var uParam0, int iParam1) //Position: 0x8513 / 34067
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_146(int iParam0) //Position: 0x852F / 34095
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
			if (Function_147(GET_SQUAD_FROM_OBJECT(bVar2)) == iParam0)
			{
				iVar0++;
			}
			bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
		}
	}
	DESTROY_ITERATOR(bVar1);
	return iVar0;
}

int Function_147(bool bParam0) //Position: 0x858A / 34186
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 4294967295;
	}
	bVar0 = Function_148(bParam0);
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

var Function_148(bool bParam0) //Position: 0x85C2 / 34242
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

vector3 Function_149(int iParam0) //Position: 0x8608 / 34312
{
	vector3 vVar0;
	
	vVar0.x = *iParam0;
	vVar0.f_4 = StackVal;
	vVar0.f_8 = StackVal;
	return StackVal, StackVal, vVar0;
}

int Function_150(int iParam0, int iParam1) //Position: 0x8627 / 34343
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

bool Function_151(var uParam0, float fParam1, int iParam2, bool bParam3) //Position: 0x8657 / 34391
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
	Function_153(4294967295);
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
			else if (Function_152(uParam0, &uVar0) > fVar5)
			{
				return 0;
			}
		}
		iVar3++;
	}
	return 1;
}

float Function_152(var uParam0, int iParam1) //Position: 0x8727 / 34599
{
	vector3 vVar0;
	int iVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*iParam1, *uParam0, StackVal) };
	iVar3 = VMAG(vVar0);
	return iVar3;
}

int Function_153(bool bParam0) //Position: 0x8745 / 34629
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
						Function_156(iVar0);
					}
					else if (Global_3386)
					{
						if (Function_154(StackVal, StackVal, Global_34573, vVar1) < 25.0f)
						{
							Function_156(iVar0);
						}
					}
					else if (Function_154(StackVal, StackVal, Global_34573, vVar1) < 55.0f)
					{
						Function_156(iVar0);
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
			Function_156(iVar0);
		}
		iVar0++;
	}
	return 0;
}

float Function_154(bool bParam0, vector3 vParam1) //Position: 0x88A6 / 34982
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_155(bParam0);
		vVar0 = { StackVal, StackVal, Function_155(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

vector3 Function_155(bool bParam0) //Position: 0x8920 / 35104
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

void Function_156(int iParam0) //Position: 0x898A / 35210
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

bool Function_157(vector3 vParam0) //Position: 0x89EB / 35307
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

int Function_158(vector3 vParam0) //Position: 0x8A8C / 35468
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

bool Function_159(vector3 vParam0) //Position: 0x8AD8 / 35544
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

bool Function_160(vector3 vParam0) //Position: 0x8B31 / 35633
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

int Function_161(int iParam0) //Position: 0x8BAE / 35758
{
	float fVar0;
	bool bVar1;
	
	Function_108(&fVar0, &bVar1);
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER_PLAYER();
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	Function_164(0);
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
		Function_163(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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
	Function_162(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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

void Function_162(struct<33> Param0) //Position: 0x8D49 / 36169
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

void Function_163(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14) //Position: 0x8E75 / 36469
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

void Function_164(float fParam0) //Position: 0x8EC6 / 36550
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

int Function_165(int iParam0, vector3 vParam1) //Position: 0x8F0A / 36618
{
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER(vParam1);
	if (Global_30842[34])
	{
		PRINTVECTOR(vParam1);
		PRINTNL();
	}
	Function_167();
	Function_164(0);
	Function_166(0);
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
		Function_163(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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
	Function_162(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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

void Function_166(bool bParam0) //Position: 0x90AC / 37036
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

void Function_167() //Position: 0x915F / 37215
{
	AMBIENT_SET_DISTANCE_FILTER(0.0f, 24.0f);
	return;
}

vector3 Function_168(var uParam0, int iParam1) //Position: 0x916E / 37230
{
	var uVar0;
	bool bVar6;
	float fVar7;
	bool bVar8;
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
		Function_149(&iVar25);
		vVar19 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*uParam0, Function_149(&iVar25), StackVal) };
		Function_149(&iVar31);
		vVar22 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*uParam0, Function_149(&iVar31), StackVal) };
		fVar15 = VDOT(&vVar16, &vVar19);
		fVar14 = VDOT(&vVar16, &vVar22);
		Function_108(&fVar7, &bVar8);
		fVar9 = ((fVar7 + bVar8) / 2.0f);
		if (fVar15 > 0.0f && fVar14 > 0.0f)
		{
			UNK_0xDF93BD7C(uVar10);
			vVar11 = { 0.0f, 0.0f, 0.0f };
			return StackVal, StackVal, vVar11;
		}
		if (fVar15 > fVar14)
		{
			UNK_0x19D652F9(bVar6, (fVar9 * -1.0f), &uVar0, &iVar31);
			Function_149(&iVar31);
			vVar11 = { StackVal, StackVal, Function_149(&iVar31) };
		}
		else
		{
			UNK_0x19D652F9(bVar6, fVar9, &uVar0, &iVar25);
			Function_149(&iVar25);
			vVar11 = { StackVal, StackVal, Function_149(&iVar25) };
		}
	}
	UNK_0xDF93BD7C(uVar10);
	return StackVal, StackVal, vVar11;
}

int Function_169(var uParam0, float fParam1, int iParam2, int iParam3) //Position: 0x927B / 37499
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
		if (!Function_122(StackVal, StackVal, *iParam2))
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
			if (!Function_122(StackVal, StackVal, *iParam2))
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

bool Function_170(int iParam0) //Position: 0x93AD / 37805
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_171(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, var uParam6) //Position: 0x93C3 / 37827
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
						if (Function_151(&vVar5, &fVar4, 0, 0))
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

var Function_172(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x946B / 37995
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
				if (Function_151(&vVar5, &uVar4, 0, 0))
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

var Function_173(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, var uParam6) //Position: 0x94F4 / 38132
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

var Function_174(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x9589 / 38281
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

int Function_175(int iParam0) //Position: 0x9606 / 38406
{
	if (IS_ITERATOR_VALID(*iParam0))
	{
		ITERATE_EVERYWHERE(*iParam0);
		ITERATE_ON_PARTIAL_NAME(*iParam0, Function_211());
		ITERATE_ON_PARTIAL_MODEL_NAME(*iParam0, Function_211());
		ITERATE_ON_OBJECT_TYPE(*iParam0, 4294967295);
		return 1;
	}
	return 0;
}

int Function_176(bool bParam0, int iParam1) //Position: 0x9637 / 38455
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
	Function_153(DECOR_GET_INT(*bParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
		}
		else
		{
			Function_177(iVar0, bParam0, &uVar1, iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(*bParam0);
	return 0;
}

void Function_177(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x9798 / 38808
{
	struct<8> Var0;
	
	Global_26155[iParam05].f_8 = *uParam1;
	Global_26155[iParam05].f_16 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_180("stayout") };
	Global_26155[iParam05].f_12 = CREATE_VOLUME_IN_LAYOUT(Global_26150, &Var0, 3, *iParam2, 0.0f, 0.0f, 0.0f, 12.0f, 5.0f, 12.0f);
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	if (bParam3)
	{
		Global_26155[iParam05].f_4 = ADD_BLIP_FOR_COORD(iParam2, 403, 0f, 2, 0);
		SET_BLIP_BLINK(StackVal, 1, 1, 20.0f);
	}
}

var Function_178(bool bParam0, vector3 vParam1) //Position: 0x9833 / 38963
{
	vector3 vVar0;
	var uVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		GET_POSITION(bParam0, &vVar0);
		Function_179(StackVal, StackVal, StackVal, StackVal, vVar0, vParam1, &uVar3);
		return UNK_0x9C40E671(&uVar3);
	}
	return 0.0f;
}

void Function_179(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x9863 / 39011
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

struct<32> Function_180(bool bParam0) //Position: 0x9886 / 39046
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_181("0", &cVar8, ""), 4);
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

struct<32> Function_181(char* cParam0, char* cParam1, char* cParam2) //Position: 0x98F0 / 39152
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_182(int iParam0) //Position: 0x990F / 39183
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_187();
	iVar1 = 0;
	if (!Function_4(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_186(iParam0[iVar03], 8);
		}
		else if (Function_185())
		{
			iVar1 = 1;
			Function_186(iParam0[iVar03], 8);
		}
		Function_186(iParam0[iVar03], 16);
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
				Function_186(iParam0[iVar03], 1);
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
							Function_186(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_186(iParam0[iVar03], 2);
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
							Function_186(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_186(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_186(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_186(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_186(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_186(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_186(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_186(iParam0[iVar03], 2);
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
	Function_183();
	return 1;
}

void Function_183() //Position: 0x9C8A / 40074
{
	if (!Function_184(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_184(int iParam0) //Position: 0x9CCA / 40138
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_185() //Position: 0x9CE6 / 40166
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

void Function_186(var uParam0, int iParam1) //Position: 0x9D11 / 40209
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_187() //Position: 0x9D22 / 40226
{
	if (!Function_184(128))
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

void Function_188(bool bParam0) //Position: 0x9D64 / 40292
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

void Function_189(int iParam0) //Position: 0x9DA6 / 40358
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

bool Function_190(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x9DE9 / 40425
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

void Function_191(var uParam0, var uParam1, var uParam2) //Position: 0x9E51 / 40529
{
	return;
}

void Function_192() //Position: 0x9E57 / 40535
{
	return;
}

void Function_193(int iParam0) //Position: 0x9E5D / 40541
{
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(iParam0);
	return;
}

var Function_194(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x9E68 / 40552
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
			Function_186(bParam0[iVar03], 4);
			if (bParam3)
			{
				Function_186(bParam0[iVar03], 8);
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

var Function_195(bool bParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x9F38 / 40760
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_196(bParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_186(bParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_196(var uParam0, int iParam1, int iParam2) //Position: 0x9F70 / 40816
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_4(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_186(uParam0[iVar03], 4);
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

bool Function_197(int iParam0) //Position: 0xA034 / 41012
{
	int iVar0;
	
	if (!IS_POPSET_VALID(Global_30750[0]))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		(*iParam0)[iVar0] = Function_198(Global_30750[0], 1, 0, 0);
		iVar0++;
	}
	return 1;
}

var Function_198(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xA070 / 41072
{
	return Function_199(uParam0, uParam1, uParam2, 4294967295, uParam3);
}

var Function_199(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xA084 / 41092
{
	return Function_200(uParam0, uParam1, uParam2, uParam3, uParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_200(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, vector3 vParam6) //Position: 0xA09D / 41117
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
		Function_206();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, bParam4, iParam5, vParam6);
	if (!Function_205(bVar1))
	{
		if (!Global_30837 && !Global_30838)
		{
			Function_204(bParam0, bParam1, bParam2, bParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_204(bParam0, bParam1, bParam2, bParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && bParam3 != 4294967295)
		{
			while (Function_203(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_205(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_203(bVar0))
				{
					Function_202();
				}
				Function_201(bVar0);
			}
		}
		else if (!bParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != bParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_205(bVar1))
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

void Function_201(int iParam0) //Position: 0xA390 / 41872
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

void Function_202() //Position: 0xA444 / 42052
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

bool Function_203(bool bParam0) //Position: 0xA47E / 42110
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

void Function_204(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xA4AB / 42155
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

bool Function_205(bool bParam0) //Position: 0xA5FC / 42492
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_206() //Position: 0xA613 / 42515
{
	int iVar0;
	
	if (Global_3402)
	{
		if (StackVal || !Global_30742 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_202();
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
	Function_202();
	return;
}

bool Function_207(int iParam0) //Position: 0xA65E / 42590
{
	if (!iParam0 != 0)
	{
		LOG_ERROR("Asking about a player with an index not = 0. Multiplayer Law Enforcement not yet implemented.");
		return 0;
	}
	return Global_3403;
}

var Function_208(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xA6D4 / 42708
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
		bVar0 = (bVar0 * (0.75f + ((TO_FLOAT(Function_79(5)) / 100.0f) * 0.5f)));
	}
	if (bParam3)
	{
		if (HAS_ITEM(Function_41(17), Global_34573))
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

void Function_209(var uParam0, int iParam1) //Position: 0xA7D6 / 42966
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

int Function_210(int iParam0, int iParam1) //Position: 0xA7E5 / 42981
{
	int iVar0;
	
	iVar0 = (Global_16876[iParam06].f_12 % iParam1);
	return iVar0;
}

var Function_211() //Position: 0xA7FB / 43003
{
	var uVar0;
	
	return uVar0;
}

