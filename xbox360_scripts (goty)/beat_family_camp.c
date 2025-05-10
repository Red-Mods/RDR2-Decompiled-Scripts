//Decompiled with MagicRDR v1.0
//Function Count : 177
//Statics Count : 208
//Natives Count : 368
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
	bool bLocal_21 = false;
	bool bLocal_22 = false;
	vector3 vLocal_23 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_26 = { 0.0f, 0.0f, 0.0f };
	struct<9> Local_29 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	bool bLocal_42 = false;
	bool bLocal_43 = false;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	bool bLocal_46 = false;
	bool bLocal_47[1] = { false };
	int iLocal_49[1] = { 0 };
	int iLocal_51 = 0;
	bool bLocal_52 = true;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
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
	bool bLocal_92 = false;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	bool bLocal_96 = false;
	bool bLocal_97 = false;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	bool bLocal_101 = false;
	bool bLocal_102 = false;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	bool bLocal_105 = false;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	int iLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	vector3 vLocal_115 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_118 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_121 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_124 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_127 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_130 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_133 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_136 = { 0.0f, 0.0f, 0.0f };
	float fLocal_139 = 0.0f;
	vector3 vLocal_140 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_143 = { 0.0f, 0.0f, 0.0f };
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	int iLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	bool bLocal_155 = false;
	var uLocal_156 = 0;
	struct<57> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	var uVar0;
	int iVar1;
	int iVar7;
	int iVar9;
	bool bVar10;
	bool bVar14;
	bool bVar18;
	float fVar19;
	int iVar20;
	vector3 vVar21;
	
	iLocal_14 = 0;
	iLocal_15 = 0;
	iLocal_35 = 0;
	iLocal_36 = 0;
	iLocal_37 = 0;
	iLocal_38 = 0;
	iLocal_44 = 0;
	bLocal_92 = false;
	iLocal_93 = 0;
	iLocal_94 = 0;
	iLocal_95 = 1;
	iLocal_99 = 0;
	bLocal_101 = CREATE_LAYOUT(Function_176());
	iLocal_103 = 0;
	iLocal_104 = 0;
	vLocal_124 = { -3.0f, -0.7f, 1.42f };
	vLocal_127 = { -1.89f, 0.5f, -3.99f };
	vLocal_130 = { 0.0f, -0.7f, -1.0f };
	vLocal_133 = { 0.62f, 0.0f, 2.02f };
	vLocal_136 = { -1.04f, 0.0f, -2.83f };
	fLocal_139 = 176.0f;
	vLocal_140 = { 2.64f, 0.0f, -0.3f };
	vLocal_143 = { 0.0f, 0.0f, 0.0f };
	iLocal_150 = 1;
	bLocal_155 = false;
	if (Global_16876[ScriptParam_0.f_566].f_12 == 0)
	{
		iLocal_45 = 0;
	}
	else if ((Global_16876[ScriptParam_0.f_566].f_12 % 2) == 1)
	{
		iLocal_45 = 1;
	}
	else
	{
		iLocal_45 = 0;
	}
	Function_174(&uLocal_39, 0.0f);
	uVar0 = Function_171(0, 1, 1, 0, 0);
	iVar1 = 0;
	iVar7 = 0;
	iVar9 = 0;
	bVar18 = false;
	fVar19 = 0.0f;
	iLocal_98 = Function_170(ScriptParam_0.f_56, 2);
	switch (Global_29004)
	{
		case 0x00000000:
		case 0x00000002:
			if (iLocal_98 == 0)
			{
				iLocal_51 = 89;
			}
			else
			{
				iLocal_51 = 149;
			}
			break;
		
		case 0x00000001:
			iLocal_51 = 268;
			break;
	}
	Function_168(&bLocal_52, "p_gen_noose02x", 0, 0);
	Function_167(&bLocal_52, iLocal_51, 3, 0);
	Function_167(&bLocal_52, 541, 3, 0);
	Function_167(&bLocal_52, 543, 3, 0);
	Function_168(&bLocal_52, "dead_ground_male", 5, 0);
	Function_168(&bLocal_52, "custom/dead_ground_male", 8, 0);
	Function_168(&bLocal_52, "crazy_hermit_waiving_over", 5, 0);
	Function_168(&bLocal_52, "custom/crazy_hermit_waiving_over", 8, 0);
	switch (iLocal_45)
	{
		case 0x00000000:
			Function_168(&bLocal_52, "$/tune/refGroups/campsiteSets/cam_zombieFamily01x", 7, 0);
			break;
		
		case 0x00000001:
			Function_168(&bLocal_52, "$/tune/refGroups/campsiteSets/cam_zombieFamily02x", 7, 0);
			break;
	}
	switch (Global_29004)
	{
		case 0x00000000:
			if (!Function_166("pressDemo3"))
			{
				if (Function_165())
				{
					iLocal_49[0] = 76;
				}
				else
				{
					iLocal_49[0] = 204;
				}
			}
			else
			{
				iLocal_49[0] = 76;
			}
			break;
		
		case 0x00000001:
			if (Function_165())
			{
				iLocal_49[0] = 312;
			}
			else
			{
				iLocal_49[0] = 311;
			}
			break;
		
		case 0x00000002:
			if (Function_165())
			{
				iLocal_49[0] = 203;
			}
			else
			{
				iLocal_49[0] = 33;
			}
			break;
	}
	if (!Function_164(1))
	{
		iLocal_44 = 5;
	}
	else
	{
		iLocal_49[0] = Function_153(1, 1, 1, 4294967295, 1);
		Function_167(&bLocal_52, iLocal_49[0], 3, 0);
		Function_152(iLocal_51);
		Function_152(iLocal_49[0]);
		iVar20 = (RAND_INT_RANGE(0, 2999) / 1000);
		if (iVar20 == 0)
		{
			bVar14 = "sit_ground_drink";
		}
		else if (iVar20 == 1)
		{
			bVar14 = "sit_ground_drink";
		}
		else if (iVar20 == 2)
		{
			bVar14 = "sit_ground_smoke";
		}
		else
		{
			bVar14 = "sit_ground_play_harmonica";
		}
		Function_168(&bLocal_52, bVar14, 1, 0);
		Function_168(&bLocal_52, "Locked_Footlocker", 1, 0);
		Function_168(&bLocal_52, "z_dlc_z_family", 1, 0);
		if (Global_3382 == 1)
		{
			iLocal_44 = 5;
		}
		Function_151();
	}
	while (!IS_EXITFLAG_SET())
	{
		Function_150(StackVal, StackVal, *(&ScriptParam_0 + 8));
		iLocal_109 = 600;
		if (iLocal_38 == 0)
		{
			if (Function_149(&bVar18, &iLocal_44, &iVar1, &iLocal_109, bLocal_92))
			{
				if (bVar18)
				{
					Function_148(&bLocal_47, 4294967295);
					Function_147(&bLocal_105);
				}
				else
				{
					Function_146(&bLocal_47, 4294967295);
					Function_145(&bLocal_105);
				}
			}
		}
		switch (iLocal_44)
		{
			case 0x00000000:
				if (Function_139(&bLocal_52))
				{
					bLocal_102 = CREATE_GRINGO_IN_LAYOUT(bLocal_101, "temp", bVar14, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
					GRINGO_LOAD_ANIMATION_FOR_ACTOR_ENUM_EXT(GET_GRINGO_FROM_OBJECT(bLocal_102), "UseCase1", "UseAnim", iLocal_51);
					iLocal_44 = 4;
					iLocal_109 = 0;
				}
				break;
			
			case 0x00000004:
				if (GRINGO_HAS_ANIMSET_LOADED_FOR_ACTOR_ENUM_EXT(GET_GRINGO_FROM_OBJECT(bLocal_102), "UseCase1", "UseAnim", iLocal_51))
				{
					iLocal_44 = 1;
					iLocal_109 = 0;
				}
				break;
			
			case 0x00000001:
				if (Function_99(&ScriptParam_0, &iLocal_109, &iLocal_104, &iLocal_103, 1))
				{
					iLocal_44 = 2;
					iLocal_109 = 0;
				}
				else if (iLocal_103 == 1)
				{
					iLocal_44 = 5;
					iLocal_109 = 0;
				}
				break;
			
			case 0x00000002:
				if (VDIST(Global_34574, *(&ScriptParam_0 + 8)) > Function_98())
				{
					iLocal_44 = 5;
					iLocal_109 = 0;
					break;
				}
				CREATE_DECAL(StackVal, Vector(*(&ScriptParam_0 + 8), 0, StackVal) + Vector(-2.08f, 0.0f, -0.62f), 0.6f, 1, 1);
				bLocal_46 = CREATE_VOLUME_IN_LAYOUT(bLocal_101, Function_176(), 3, *(&ScriptParam_0 + 8), 0.0f, 0.0f, 0.0f, 30.0f, 15.0f, 30.0f);
				CLEAR_AMBIENT_OBJECTS_VOLUME(bLocal_46, 15);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_46);
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_46);
				bLocal_42 = CREATE_POINT_IN_LAYOUT(bLocal_101, Function_176(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
				ATTACH_OBJECTS(bLocal_42, Global_34573, Function_176(), 0.0f, 0.5f, -1.0f, 0.0f, 0.0f, 0.0f, 4294967295);
				switch (iLocal_45)
				{
					case 0x00000000:
						Function_96(StackVal, StackVal, bLocal_101, Function_176(), "$/tune/refGroups/campsiteSets/cam_zombieFamily01x", *(&ScriptParam_0 + 8), 0.0f, 0.0f, 0.0f, 4294967295);
						break;
					
					case 0x00000001:
						vLocal_124 = { -3.0f, -0.7f, 1.42f };
						vLocal_127 = { -3.9f, -0.7f, -2.88f };
						vLocal_130 = { -2.2f, -0.7f, -0.98f };
						vLocal_133 = { 0.0f, 0.0f, 0.2f };
						vLocal_136 = { -2.92f, 0.0f, -1.73f };
						fLocal_139 = 220.0f;
						Function_96(StackVal, StackVal, bLocal_101, Function_176(), "$/tune/refGroups/campsiteSets/cam_zombieFamily02x", *(&ScriptParam_0 + 8), 0.0f, 0.0f, 0.0f, 4294967295);
						break;
				}
				PRINTVECTOR(*(&ScriptParam_0 + 8));
				PRINTNL();
				PRINTVECTOR(Global_34574);
				PRINTNL();
				vLocal_115 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vLocal_140, *(&ScriptParam_0 + 8), StackVal) };
				vLocal_118 = { 0.0f, 0.0f, 0.0f };
				vLocal_121 = { 0.0f, 0.0f, 0.0f };
				FIND_GROUND_INTERSECTION(&vLocal_115, 2.0f, &vLocal_121, &vLocal_118);
				Function_95(StackVal, Vector(Function_176(), bLocal_101, StackVal) + Vector(vLocal_130, *(&ScriptParam_0 + 8), iLocal_49[0]), vLocal_118);
				bLocal_47[0] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_95(StackVal, Vector(Function_176(), bLocal_101, StackVal) + Vector(vLocal_130, *(&ScriptParam_0 + 8), iLocal_49[0]), vLocal_118));
				Function_88(bLocal_47[0], 1254, 4294967295, 4294967295, 4294967295, 1, 1, 1);
				SNAP_OBJECT_TO_GROUND(bLocal_47[0], 5.0f, false, 1092616192);
				SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_47[0], 0);
				DECOR_SET_BOOL(bLocal_47[0], "CanBeLasso", 0);
				vLocal_115 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vLocal_127, *(&ScriptParam_0 + 8), StackVal) };
				FIND_GROUND_INTERSECTION(&vLocal_115, 3.0f, &vLocal_121, &vLocal_118);
				bLocal_43 = CREATE_PROP_IN_LAYOUT(bLocal_101, Function_176(), "p_gen_stake01x", vLocal_121.x, (vLocal_121.y + 0.08f), vLocal_121.z, 0.0f, 0.0f, 0.0f, 1);
				Function_85(bLocal_47[0], bLocal_43);
				SET_ACTOR_CAN_PLAY_GESTURES(bLocal_47[0], false);
				DECOR_SET_BOOL(bLocal_47[0], "CheckForCamera", 1);
				bLocal_105 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_176(), bLocal_101, StackVal) + Vector(vLocal_133, *(&ScriptParam_0 + 8), iLocal_51), *(&ScriptParam_0 + 20));
				GIVE_WEAPON_TO_ACTOR(bLocal_105, 4, 0, 1, 1);
				bLocal_33 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_176(), bLocal_105, StackVal) + Vector(vLocal_133, *(&ScriptParam_0 + 8), bVar14), 0.0f, 0.0f, 0.0f);
				DECOR_SET_BOOL(bLocal_105, "criminal", 1);
				Function_84(bLocal_105);
				AI_DONT_HARM_ACTOR(bLocal_47[0]);
				MEMORY_CONSIDER_AS(bLocal_105, bLocal_47[0], 0);
				bLocal_34 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_176(), bLocal_105, StackVal) + Vector(vLocal_136, *(&ScriptParam_0 + 8), "z_dlc_z_family"), 0.0f, fLocal_139, 0.0f);
				SNAP_OBJECT_TO_GROUND(bLocal_34, 5.0f, false, 1092616192);
				TASK_USE_GRINGO(bLocal_47[0], GET_GRINGO_FROM_OBJECT(bLocal_34), "UseCase1", 1, 1);
				SNAP_ACTOR_TO_GRINGO(bLocal_47[0], bLocal_34, "UseCase1", 0, 0, 0);
				if (IS_OBJECT_VALID(bVar10))
				{
					UNK_0x6745191B(bVar10, 0.0f, 0.0f, 0.0f);
				}
				SET_ACTOR_CAN_PLAY_GESTURES(bLocal_105, false);
				Function_83(bLocal_105, 0);
				Function_82(bLocal_105);
				SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_ACTOR(bLocal_105), 1.5f, true, 1092616192);
				Function_81(bLocal_105);
				GIVE_WEAPON_TO_ACTOR(bLocal_105, 40, 0, 1, 1);
				MEMORY_REPORT_POSITION_AUTO(bLocal_105, Global_34573, 1);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(bLocal_105, 0);
				UNK_0x99AFD2D1(bLocal_105, 1, 1);
				GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bLocal_33), 0);
				DESTROY_OBJECT(bLocal_102);
				SNAP_OBJECT_TO_GROUND(bLocal_33, 2.0f, true, 1092616192);
				if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(bLocal_33)))
				{
					if (bLocal_155)
					{
						Function_79(&uLocal_156, 1, 0, 4294967295, 4294967295);
					}
					TASK_USE_GRINGO(bLocal_105, GET_GRINGO_FROM_OBJECT(bLocal_33), "UseCase1", 4294967295, 1);
					SNAP_ACTOR_TO_GRINGO(bLocal_105, bLocal_33, "UseCase1", 1, 0, 0);
				}
				vLocal_115 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vLocal_124, *(&ScriptParam_0 + 8), StackVal) };
				vLocal_115.f_4 = (vLocal_115.y + 2.0f);
				vLocal_118 = { 0.0f, 0.0f, 0.0f };
				vVar21 = { 0.0f, 0.0f, 0.0f };
				PRINTSTRING("Probe start pos");
				PRINTVECTOR(vLocal_115);
				PRINTSTRING("nProbe pos");
				PRINTVECTOR(vVar21);
				Function_77(StackVal, StackVal, &uLocal_110, &uLocal_111, &uLocal_112, 2.95f, *(&ScriptParam_0 + 8));
				vLocal_118.f_4 = 270.0f;
				PRINTVECTOR(vLocal_118);
				vLocal_121 = { 0.0f, 0.0f, 0.0f };
				FIND_GROUND_INTERSECTION(&vLocal_115, 2.0f, &vLocal_121, &vLocal_118);
				bLocal_96 = CREATE_GRINGO_IN_LAYOUT(bLocal_101, Function_176(), "$/content/scripting/gringo/SimpleGringo/Locked_Footlocker", vLocal_121, vLocal_143);
				SNAP_OBJECT_TO_GROUND(bLocal_96, 7.0f, true, 1092616192);
				bLocal_97 = GET_GRINGO_FROM_OBJECT(bLocal_96);
				DECOR_SET_OBJECT(GET_OBJECT_FROM_GRINGO(bLocal_97), "nboxOwnerA", bLocal_105);
				Function_73(StackVal, StackVal, bLocal_97, vVar21, 4294967295, 11, 0x3f800000);
				Function_72(&uLocal_113, 1);
				iLocal_44 = 3;
				iLocal_109 = 0;
				break;
			
			case 0x00000003:
				Function_71();
				Function_43(StackVal, StackVal, Function_71(), &bLocal_92, ScriptParam_0.f_56, bLocal_105, 60, 0x42700000, 1);
				Function_71();
				Function_43(StackVal, StackVal, Function_71(), &bLocal_92, ScriptParam_0.f_56, bLocal_47[0], 60, 0x42700000, 1);
				if (!Function_37(ScriptParam_0.f_56, bLocal_105, &iLocal_93, &iLocal_94, 0, 1, 1, 1))
				{
					iLocal_44 = 5;
					iLocal_109 = 0;
					break;
				}
				if (IS_OBJECT_VALID(bLocal_22))
				{
					if (LEASH_IS_BROKEN(bLocal_22))
					{
						RESET_ANIM_SET_FOR_ACTOR(bLocal_47[0], 1);
						iVar9 = 1;
						TASK_MELEE_ATTACK(bLocal_47[0], bLocal_105, -1.0f);
						if (iLocal_99 <= 7)
						{
							iLocal_99 = 7;
							Function_36(bLocal_105, Global_34573, "ZombieFamily_msg05", "ZombieFamily_msg05", 5, 60, 1, 1);
						}
					}
				}
				if (IS_ACTOR_VALID(bLocal_47[0]))
				{
					if (Function_35(Global_34573, bLocal_47[0]) > 1.5f)
					{
						if ((iLocal_99 == 8 && iLocal_99 == 3) && iLocal_99 == 6)
						{
							AI_QUICK_EXIT_GRINGO(bLocal_47[0], 1);
							RESET_ANIM_SET_FOR_ACTOR(bLocal_47[0], 1);
							TASK_CLEAR(bLocal_47[0]);
							TASK_MELEE_ATTACK(bLocal_47[0], Global_34573, -1.0f);
							if (iLocal_99 == 5)
							{
								iLocal_99 = 6;
							}
							else
							{
								iLocal_100 = iLocal_99;
								iLocal_99 = 3;
							}
							Function_34(&uLocal_151);
						}
					}
				}
				if (IS_ACTOR_VALID(bLocal_47[0]))
				{
					if (Function_35(Global_34573, bLocal_105) > 15.0f && iLocal_95)
					{
						if (!IS_AMBIENT_SPEECH_PLAYING(bLocal_105))
						{
							Function_36(bLocal_105, Global_34573, "ZombieFamily_msg04", "ZombieFamily_msg04", 5, 60, 1, 1);
							Function_174(&uLocal_39, 0.0f);
							iLocal_95 = 0;
						}
					}
				}
				if (GET_DEBUG_DRAW_STATE())
				{
					if (IS_ACTOR_VALID(bLocal_105))
					{
						GET_POSITION(bLocal_105, &uLocal_106);
						iLocal_109 = 0;
					}
				}
				if (DECOR_CHECK_EXIST(bLocal_105, "actorStolen") && !iLocal_35)
				{
					iLocal_99 = 7;
					CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bLocal_105);
					Function_36(bLocal_105, Global_34573, "ZombieFamily_msg07", "ZombieFamily_msg07", 5, 60, 1, 1);
					iLocal_35 = 1;
				}
				if (Function_33(bLocal_47[0]) == Global_34573)
				{
					if (iLocal_99 <= 7)
					{
						iLocal_99 = 7;
						CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bLocal_105);
						Function_36(bLocal_105, Global_34573, "ZombieFamily_msg05", "ZombieFamily_msg05", 5, 60, 1, 1);
					}
				}
				if (Function_30(bLocal_105, &uLocal_114, &fVar19, uLocal_113, iLocal_35, 0x40400000))
				{
					Function_36(Global_34573, bLocal_105, "ZombieFamilyPlayer_msg01", "ZombieFamilyPlayer_msg01", 5, 60, 1, 1);
					iLocal_99 = 7;
					iLocal_35 = 1;
				}
				if (Function_29(bLocal_47[0], Global_34573) && iLocal_36 != 0)
				{
					Function_36(Global_34573, bLocal_105, "ZombieFamilyPlayer_msg02", "ZombieFamilyPlayer_msg02", 5, 60, 1, 1);
					iLocal_36 = 1;
				}
				if (Function_27(StackVal, StackVal, Global_34573, *(&ScriptParam_0 + 8)) < Function_25(1))
				{
					iLocal_109 = 0;
					iLocal_44 = 5;
					break;
				}
				if (IS_ACTOR_VALID(bLocal_105))
				{
					if (Function_27(StackVal, StackVal, bLocal_105, *(&ScriptParam_0 + 8)) < Function_25(1))
					{
						Function_23(bLocal_105);
					}
				}
				iLocal_109 = 0;
				if (IS_ACTOR_VALID(bLocal_105))
				{
					if (Function_17(&iLocal_99, &bLocal_47))
					{
						iVar9 = 1;
						iLocal_44 = 5;
					}
				}
				else
				{
					iLocal_44 = 5;
				}
				break;
			
			case 0x00000005:
				iLocal_44 = 6;
				iLocal_109 = 0;
				break;
			
			case 0x00000006:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				iLocal_109 = 0;
				break;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(iLocal_109);
		}
	}
	Function_146(&bLocal_47, 4294967295);
	Function_145(&bLocal_105);
	Function_16(&uLocal_110, &uLocal_111, &uLocal_112);
	Function_15(iLocal_51);
	Function_15(iLocal_49[0]);
	Function_23(bLocal_105);
	Function_23(bLocal_47[0]);
	if (!bLocal_92)
	{
		Function_9(ScriptParam_0.f_56, 0.0f, 0, 1, 0);
		if (IS_OBJECT_VALID(bLocal_101))
		{
			Function_8(&bLocal_105);
			Function_7(&bLocal_47, 4294967295);
			UNK_0xA936E73B(bLocal_101, 1);
			MARK_OBJECT_FOR_AGGRESSIVE_CLEANUP(bLocal_101, 1);
		}
	}
	else if (iVar9 != 0 && iLocal_35 != 0)
	{
		Function_7(&bLocal_47, 4294967295);
		if (IS_ACTOR_VALID(bLocal_105))
		{
			RESET_ANIM_SET_FOR_ACTOR(bLocal_105, 0);
		}
		if (bLocal_155)
		{
			Function_79(&uLocal_156, 1, 0, 4294967295, 4294967295);
		}
		Function_8(&bLocal_105);
	}
	if (Function_5(bLocal_105, 0))
	{
		AI_SPEECH_SET_ALLOW_FOR_ACTOR(bLocal_105, 1);
		UNK_0x99AFD2D1(bLocal_105, 0, 0);
	}
	if (Function_5(bLocal_47[0], 0))
	{
		RESET_ANIM_SET_FOR_ACTOR(bLocal_47[0], 1);
		AI_CLEAR_DONT_HARM_ACTOR(bLocal_47[0]);
		if (IS_ACTOR_VALID(bLocal_105))
		{
			MEMORY_CONSIDER_AS(bLocal_105, bLocal_47[0], 4);
			MEMORY_CONSIDER_AS(bLocal_47[0], bLocal_105, 4);
		}
		if (IS_ACTOR_VALID(bLocal_105))
		{
			if (iVar9 == 0)
			{
				TASK_MELEE_ATTACK(bLocal_47[0], bLocal_105, -1.0f);
			}
		}
	}
	if (ScriptParam_0.f_32)
	{
		Global_3399 = 0;
	}
	if (bLocal_155)
	{
		Function_79(&uLocal_156, 1, 0, 4294967295, 4294967295);
	}
	if (bLocal_155)
	{
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	}
	if (IS_OBJECT_VALID(bVar10))
	{
		UNK_0xE18028C1(bVar10);
		DESTROY_OBJECT(bVar10);
	}
	if (iLocal_37 == 1)
	{
		AUDIO_ENABLE_PLAYER_TAUNTS();
		iLocal_37 = 0;
	}
	if (IS_VOLUME_VALID(bLocal_46))
	{
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_46);
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_46);
	}
	Function_1(&bLocal_52);
	UNK_0xA936E73B(bLocal_101, 1);
	RELEASE_LAYOUT_REF(bLocal_101);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0xF94 / 3988
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

void Function_2(var uParam0, int iParam1) //Position: 0xFBA / 4026
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

void Function_3(var uParam0, int iParam1) //Position: 0x10E8 / 4328
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_4(var uParam0, int iParam1) //Position: 0x1102 / 4354
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_5(bool bParam0, bool bParam1) //Position: 0x111F / 4383
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
			Function_23(bParam0);
			return 0;
		}
		if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 163840))
		{
			Function_23(bParam0);
			return 0;
		}
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		if (Function_6(bParam0, 0) && !AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 16384))
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

int Function_6(bool bParam0, int iParam1) //Position: 0x11BB / 4539
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

void Function_7(bool bParam0, int iParam1) //Position: 0x1205 / 4613
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *bParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_8(bParam0[iVar0]);
		iVar0++;
	}
	return;
}

void Function_8(bool bParam0) //Position: 0x1232 / 4658
{
	if (IS_ACTOR_VALID(*bParam0))
	{
		RESET_ANIM_SET_FOR_ACTOR(*bParam0, 0);
		TASK_FLEE_ACTOR(*bParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
		TASK_PRIORITY_SET(*bParam0, 0);
	}
	return;
}

bool Function_9(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x125D / 4701
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
		Function_11("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
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
			Function_10(bVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_10(bVar0);
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
			Function_10(bVar0);
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

void Function_10(bool bParam0) //Position: 0x14BA / 5306
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

void Function_11(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1500 / 5376
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_12(Global_6269) };
		}
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, &Var0, iParam5);
	}
	else
	{
		iVar4 = "";
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, iVar4, iParam5);
	}
}

struct<16> Function_12(int iParam0) //Position: 0x1577 / 5495
{
	char* cVar0[16];
	
	if (!Function_13())
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

bool Function_13() //Position: 0x15B6 / 5558
{
	if (Function_14(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_14(int iParam0, int iParam1) //Position: 0x15D1 / 5585
{
	return (iParam0 && iParam1) == 0;
}

void Function_15(int iParam0) //Position: 0x15DE / 5598
{
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(iParam0);
	return;
}

void Function_16(var uParam0, var uParam1, int iParam2) //Position: 0x15E9 / 5609
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

bool Function_17(var uParam0, int iParam1) //Position: 0x1616 / 5654
{
	var uVar0;
	
	GET_POSITION(bLocal_105, &uVar0);
	(*iParam1)[0] = (*iParam1)[0];
	switch (*uParam0)
	{
		case 0x00000000:
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bLocal_105, 1.0f, 40.0f, 1, 0, 0) && !IS_AMBIENT_SPEECH_PLAYING(bLocal_105))
			{
				LEASH_CONSTRAIN(bLocal_22);
				Function_36(bLocal_105, (*iParam1)[0], "ZombieFamily_msg01", "ZombieFamily_msg01", 5, 60, 1, 1);
				Function_174(&uLocal_39, 0.0f);
				*uParam0 = 1;
			}
			break;
		
		case 0x00000001:
			if ((Function_19(&uLocal_39, 6.0f) && !IS_AMBIENT_SPEECH_PLAYING(bLocal_105)) && Function_35(Global_34573, bLocal_105) > 40.0f)
			{
				Function_36(bLocal_105, (*iParam1)[0], "ZombieFamily_msg02", "ZombieFamily_msg02", 5, 60, 1, 1);
				Function_174(&uLocal_39, 0.0f);
				*uParam0 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_19(&uLocal_39, 6.0f) && !IS_AMBIENT_SPEECH_PLAYING(bLocal_105))
			{
				AI_QUICK_EXIT_GRINGO(bLocal_105, 1);
				TASK_USE_GRINGO(bLocal_105, GET_GRINGO_FROM_OBJECT(bLocal_34), "Master", 1, 1);
				TASK_PRIORITY_SET(bLocal_105, 1);
				*uParam0 = 8;
			}
			break;
		
		case 0x00000008:
			if (GET_CURRENT_GRINGO(bLocal_105) != GET_GRINGO_FROM_OBJECT(bLocal_34) && iLocal_150)
			{
				Function_36(bLocal_105, (*iParam1)[0], "ZombieFamily_msg03", "ZombieFamily_msg03", 5, 60, 1, 1);
				iLocal_150 = 0;
			}
			if (GET_TASK_STATUS(bLocal_105, 19) == 0)
			{
				RESET_ANIM_SET_FOR_ACTOR(bLocal_105, 1);
				TASK_USE_GRINGO(bLocal_105, GET_GRINGO_FROM_OBJECT(bLocal_33), "UseCase1", 4294967295, 1);
				TASK_PRIORITY_SET(bLocal_105, 1);
				*uParam0 = 9;
			}
			break;
		
		case 0x00000007:
			GRINGO_DEACTIVATE(GET_GRINGO_FROM_OBJECT(bLocal_33));
			GRINGO_DEACTIVATE(GET_GRINGO_FROM_OBJECT(bLocal_34));
			AI_QUICK_EXIT_GRINGO(bLocal_105, 1);
			RESET_ANIM_SET_FOR_ACTOR(bLocal_105, 1);
			Function_18(bLocal_105, &Global_34573);
			TASK_WANDER((*iParam1)[0], 3212836864);
			TASK_PRIORITY_SET((*iParam1)[0], 2);
			return 1;
			break;
		
		case 0x00000003:
			if ((Function_35(Global_34573, (*iParam1)[0]) < 8.0f && Function_19(&uLocal_151, 5.0f)) || (Function_35(Global_34573, (*iParam1)[0]) < 4.0f && Function_19(&uLocal_151, 10.0f)))
			{
				if (iLocal_100 <= 8)
				{
					TASK_USE_GRINGO(bLocal_47[0], GET_GRINGO_FROM_OBJECT(bLocal_34), "UseCase1", 1, 1);
					*uParam0 = 4;
				}
			}
			break;
		
		case 0x00000004:
			if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(bLocal_47[0])))
			{
				*uParam0 = 2;
			}
			break;
		
		case 0x00000009:
			if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(bLocal_105)) && !IS_AMBIENT_SPEECH_PLAYING(bLocal_105))
			{
				Function_36(bLocal_105, Global_34573, "ZombieFamily_msg06", "ZombieFamily_msg06", 5, 60, 1, 1);
				*uParam0 = 5;
			}
			break;
		
		case 0x00000005:
			break;
	}
	return 0;
}

int Function_18(bool bParam0, int iParam1) //Position: 0x18FA / 6394
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

int Function_19(var uParam0, float fParam1) //Position: 0x19DF / 6623
{
	if (Function_22(uParam0))
	{
		if (Function_20(uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_20(int iParam0) //Position: 0x19FB / 6651
{
	if (Function_22(iParam0))
	{
		if (Function_21(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_21(int iParam0) //Position: 0x1AC3 / 6851
{
	return Function_14(*iParam0, 2);
}

bool Function_22(int iParam0) //Position: 0x1AD0 / 6864
{
	return Function_14(*iParam0, 1);
}

int Function_23(bool bParam0) //Position: 0x1ADD / 6877
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_24(bParam0);
		return 1;
	}
	return 0;
}

void Function_24(bool bParam0) //Position: 0x1AF3 / 6899
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

float Function_25(bool bParam0) //Position: 0x1B1F / 6943
{
	var uVar0;
	float fVar1;
	
	if (!bParam0)
	{
		Function_26(&uVar0, &fVar1);
		if (fVar1 < 60.0f)
		{
			return (fVar1 + 20.0f);
		}
		return (fVar1 + 10.0f);
	}
	return (190.0f + 20.0f);
}

void Function_26(float fParam0, int iParam1) //Position: 0x1B5A / 7002
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

float Function_27(bool bParam0, vector3 vParam1) //Position: 0x1BE3 / 7139
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_28(bParam0);
		vVar0 = { StackVal, StackVal, Function_28(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

vector3 Function_28(bool bParam0) //Position: 0x1C5D / 7261
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

int Function_29(bool bParam0, bool bParam1) //Position: 0x1CC7 / 7367
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	if (GET_LAST_ATTACKER(bParam0) == bParam1)
	{
		if (IS_ACTOR_DEAD(bParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_30(bool bParam0, var uParam1, var uParam2, int iParam3, bool bParam4, float fParam5) //Position: 0x1CF8 / 7416
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
		fVar0 = Function_35(bParam0, Global_34573);
		if (!Function_14(iParam3, 8))
		{
			if (GET_LAST_ATTACKER(bParam0) == Global_34573)
			{
				*uParam1 = 8;
				Function_31(bParam0);
				return 1;
			}
		}
		if (!Function_14(iParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(bParam0, 1.0f))
			{
				*uParam1 = 2;
				Function_31(bParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(bParam0, 1.0f, 1.0f))
			{
				*uParam1 = 2;
				Function_31(bParam0);
				return 1;
			}
		}
		if (!Function_14(iParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(bParam0) || (((GET_ACTOR_UNDER_RETICLE(Global_34573, 0) != bParam0 && IS_PLAYER_WEAPON_ZOOMED(Global_34573)) && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(Global_34573) != bParam0 && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f))
			{
				if (*uParam2 > 0.0f)
				{
					*uParam1 = 4;
					Function_31(bParam0);
					return 1;
				}
				if (*uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - *uParam2) < 1.3f)
					{
						*uParam1 = 4;
						Function_31(bParam0);
						return 1;
					}
				}
				*uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_14(iParam3, 1))
		{
			if (Global_3403 || Global_3404)
			{
				*uParam1 = 1;
				Function_31(bParam0);
				return 1;
			}
		}
		if (!Function_14(iParam3, 16))
		{
			if (UNK_0x7F454A92(bParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(bParam0)) > 2.0f && fVar0 > 18.0f)
				{
					*uParam1 = 16;
					Function_31(bParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_31(bool bParam0) //Position: 0x1E8F / 7823
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(bParam0, 1);
	UNK_0x99AFD2D1(bParam0, 0, 0);
	Function_32(bParam0);
	MEMORY_CONSIDER_AS(Global_34573, bParam0, 2);
	MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
	AI_GOAL_LOOK_CLEAR(bParam0);
	return;
}

void Function_32(bool bParam0) //Position: 0x1EC3 / 7875
{
	SAY_SINGLE_LINE_CONTEXT(bParam0, 60, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

int Function_33(bool bParam0) //Position: 0x1EDA / 7898
{
	if (IS_ACTOR_VALID(bParam0))
	{
		return GET_LAST_ATTACKER(bParam0);
	}
	return "";
}

void Function_34(int iParam0) //Position: 0x1EF0 / 7920
{
	Function_174(iParam0, 0.0f);
	return;
}

float Function_35(bool bParam0, bool bParam1) //Position: 0x1EFC / 7932
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

void Function_36(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x1FED / 8173
{
	bParam1 = bParam1;
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0) && Function_35(bParam0, Global_34573) >= IntToFloat(iParam5))
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

bool Function_37(int iParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x207D / 8317
{
	if (StackVal & 64 == 64)
	{
		if (!*uParam2)
		{
			if (IS_ACTOR_VALID(bParam1))
			{
				if (Function_35(Global_34573, bParam1) > 15.0f)
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
		if (Function_40() && !*uParam2)
		{
			return 0;
		}
		if (Function_39(iParam0) && !*uParam2)
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
		if (!Function_38(iParam0, uParam5))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_38(int iParam0, int iParam1) //Position: 0x21AB / 8619
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

int Function_39(int iParam0) //Position: 0x21CC / 8652
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

int Function_40() //Position: 0x220A / 8714
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
						if (Function_41(StackVal, Global_34573) > IntToFloat(iVar1))
						{
							return 1;
						}
					}
				}
			}
			if (Function_41(StackVal, Global_34573) > IntToFloat(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

float Function_41(bool bParam0, bool bParam1) //Position: 0x22C5 / 8901
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_28(bParam0);
			vVar0 = { StackVal, StackVal, Function_28(bParam0) };
			Function_42(bParam1);
			vVar3 = { StackVal, StackVal, Function_42(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

vector3 Function_42(bool bParam0) //Position: 0x2365 / 9061
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

void Function_43(vector3 vParam0, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, bool bParam8) //Position: 0x23D1 / 9169
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
	else if (!Function_70(StackVal, StackVal, vParam0))
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
			Function_69(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_68(0);
		}
		if (bParam8)
		{
			Function_66(0, GET_THIS_SCRIPT_ID());
			Global_3373 = GET_THIS_SCRIPT_ID();
			Function_64(iParam4);
			Global_3401 = 1;
		}
		Function_62(iParam4);
		if (Function_61(StackVal, 32768))
		{
			Function_58(1);
		}
		Global_16876[iParam46].f_12++;
		Function_44(408, 1, 0, 0);
	}
}

int Function_44(int iParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x24D8 / 9432
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
	if (uParam2 && bParam1 == 0)
	{
		Function_45(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, uParam3);
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

void Function_45(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x26F8 / 9976
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
					bVar19 = (Function_54(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_54(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_52(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_49(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_47(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_46(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_176(), &Var9);
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

var Function_46(int iParam0) //Position: 0x2D25 / 11557
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_47(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2D36 / 11574
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_48("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_48("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_48("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_48(char* cParam0, bool bParam1) //Position: 0x2E2B / 11819
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_49(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2E44 / 11844
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_51(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_50(Function_51(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_50(int iParam0, int iParam1) //Position: 0x2EA9 / 11945
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_51(int iParam0, int iParam1) //Position: 0x2EBB / 11963
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_52(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2ECD / 11981
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
	if (((Function_53(iParam0) != 19 || Function_53(iParam0) != 17) || Function_53(iParam0) != 10) || Function_53(iParam0) != 9)
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

int Function_53(int iParam0) //Position: 0x2FFD / 12285
{
	return Global_35278[iParam020].f_48;
}

float Function_54(int iParam0) //Position: 0x300C / 12300
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_55(int iParam0) //Position: 0x3045 / 12357
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_56(int iParam0) //Position: 0x3082 / 12418
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

int Function_57(int iParam0, float fParam1, bool bParam2) //Position: 0x321C / 12828
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

void Function_58(bool bParam0) //Position: 0x3460 / 13408
{
	if (bParam0)
	{
		Function_60(0x10000000);
	}
	else
	{
		Function_59(0x10000000);
	}
	Global_26316.f_172 = 0;
	return;
}

void Function_59(int iParam0) //Position: 0x3484 / 13444
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_60(int iParam0) //Position: 0x34A1 / 13473
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

bool Function_61(var uParam0, int iParam1) //Position: 0x34B4 / 13492
{
	return (uParam0 && iParam1) == 0;
}

void Function_62(int iParam0) //Position: 0x34C1 / 13505
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (!Function_14(StackVal, 524288))
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
			bVar1 = Function_63(iVar0 * 60);
			ADD_TIME(&Global_17483[iParam075] + 264, 0, 0, bVar1, 0);
			Global_16876[iParam06] = Global_17483[iParam075].f_264;
		}
	}
	return;
}

int Function_63(int iParam0) //Position: 0x3565 / 13669
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_64(int iParam0) //Position: 0x357B / 13691
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
	Function_65(&Var0 + 80[Var0.f_763], &(Global_16876[iParam06]), iParam0);
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

void Function_65(var uParam0, var uParam1, int iParam2) //Position: 0x3619 / 13849
{
	uParam0->f_4 = iParam2;
	*uParam0 = uParam1->f_12;
	uParam0->f_8 = 1;
	return;
}

void Function_66(int iParam0, int iParam1) //Position: 0x3631 / 13873
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
			Function_67(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_67(int iParam0) //Position: 0x36B3 / 14003
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

void Function_68(int iParam0) //Position: 0x3701 / 14081
{
	Global_12976.f_76 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 76, 0, 0, (iParam0 + Function_63(900)), 0);
	return;
}

void Function_69(int iParam0) //Position: 0x3723 / 14115
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, (iParam0 + Function_63(200)), 0);
	return;
}

bool Function_70(vector3 vParam0) //Position: 0x3744 / 14148
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_71() //Position: 0x375C / 14172
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_72(var uParam0, int iParam1) //Position: 0x3765 / 14181
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_73(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, float fParam6) //Position: 0x3774 / 14196
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
	Function_82(GET_OBJECT_FROM_GRINGO(bParam0));
	if (bParam4 == 4294967295)
	{
		bVar10 = false;
		Function_76(Global_34573, &uVar3, &bVar10);
		if (bVar10 >= 0)
		{
			PRINTINT(bVar10);
			iVar11 = RAND_INT_RANGE(0, (bVar10 - 1));
			PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(uVar3[iVar11]));
			bParam4 = Function_75(Global_34573, uVar3[iVar11]);
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
		bParam4 = Function_75(Global_34573, bParam4);
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
		bParam5 = Function_74();
	}
	DECOR_SET_INT(GET_OBJECT_FROM_GRINGO(bParam0), "GiveItem", bParam5);
}

int Function_74() //Position: 0x38D4 / 14548
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

int Function_75(bool bParam0, int iParam1) //Position: 0x3930 / 14640
{
	int iVar0;
	
	iVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(bParam0, iParam1);
	return iVar0;
}

void Function_76(bool bParam0, var uParam1, int iParam2) //Position: 0x3941 / 14657
{
	*iParam2 = 0;
	if (Function_75(bParam0, 39) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(bParam0, 6, 1) > _GET_MAX_AMMO_AMOUNT(bParam0, 6))
		{
			(*uParam1)[*iParam2] = 39;
			*iParam2++;
		}
	}
	if (Function_75(bParam0, 41) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(bParam0, 8, 1) > _GET_MAX_AMMO_AMOUNT(bParam0, 8))
		{
			(*uParam1)[*iParam2] = 41;
			*iParam2++;
		}
	}
	if (Function_75(bParam0, 40) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(bParam0, 7, 1) > _GET_MAX_AMMO_AMOUNT(bParam0, 7))
		{
			(*uParam1)[*iParam2] = 40;
			*iParam2++;
		}
	}
	if (Function_75(bParam0, 42) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(bParam0, 9, 1) > _GET_MAX_AMMO_AMOUNT(bParam0, 9))
		{
			(*uParam1)[*iParam2] = 42;
			*iParam2++;
		}
	}
	if (Function_75(bParam0, 43) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(bParam0, 10, 1) > _GET_MAX_AMMO_AMOUNT(bParam0, 10))
		{
			(*uParam1)[*iParam2] = 43;
			*iParam2++;
		}
	}
	if (Function_75(bParam0, 44) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(bParam0, 11, 1) > _GET_MAX_AMMO_AMOUNT(bParam0, 11))
		{
			(*uParam1)[*iParam2] = 44;
			*iParam2++;
		}
	}
	return;
}

void Function_77(var uParam0, var uParam1, var uParam2, float fParam3, vector3 vParam4) //Position: 0x3A61 / 14945
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
		if (Function_78(StackVal, StackVal, Global_30616, "player_herb", &uVar0, 20.0f, 5, vParam4) >= 0)
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

int Function_78(bool bParam0, bool bParam1, var uParam2, float fParam3, int iParam4, vector3 vParam5) //Position: 0x3B02 / 15106
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

void Function_79(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x3B96 / 15254
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_80(*uParam0), iParam2, iParam3, iParam4);
	}
}

var Function_80(int iParam0) //Position: 0x3BBA / 15290
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

void Function_81(bool bParam0) //Position: 0x4119 / 16665
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

void Function_82(bool bParam0) //Position: 0x413F / 16703
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

void Function_83(bool bParam0, bool bParam1) //Position: 0x4173 / 16755
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_INT(bParam0, "honor", bParam1);
	return;
}

void Function_84(bool bParam0) //Position: 0x4193 / 16787
{
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam0, 0);
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bParam0, 0);
	MEMORY_ATTACK_ON_SIGHT(bParam0, 0);
	SET_ACTOR_CAN_PLAY_GESTURES(bParam0, false);
	AI_SET_ALLOW_ATTACK_HOGTIED_ACTORS(bParam0, 1);
	return;
}

void Function_85(bool bParam0, int iParam1) //Position: 0x41BD / 16829
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (IS_ACTOR_MALE(bParam0))
	{
		vLocal_23 = { -0.008f, 0.036f, -0.008f };
		vLocal_26 = { -3.046f, 4.262f, 13.672f };
	}
	else
	{
		vLocal_23 = { 0.01f, 0.034f, 0.003f };
		vLocal_26 = { -1.221f, 63.601f, -14.377f };
	}
	Function_87(iParam1);
	vLocal_29 = { StackVal, StackVal, Function_87(iParam1) };
	fVar0 = 4.0f;
	fVar1 = 0.3f;
	fVar2 = 1.5f;
	fLocal_32 = ((fVar0 - fVar2) - fVar1);
	fVar3 = (fLocal_32 * 0.9f);
	if (IS_ACTOR_MALE(bParam0))
	{
		bLocal_21 = CREATE_PROP_IN_LAYOUT(bLocal_101, "noTheNoose", "p_gen_noose02x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	}
	else
	{
		bLocal_21 = CREATE_PROP_IN_LAYOUT(bLocal_101, "noTheNoose", "p_gen_noose02x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	}
	SET_OBJECT_COLLIDE_WITH_OBJECT(bLocal_21, bParam0, 0);
	SET_OBJECT_COLLIDE_WITH_OBJECT(bParam0, bLocal_21, 0);
	SET_OBJECT_COLLIDE_WITH_OBJECT(bParam0, bLocal_22, 0);
	SET_OBJECT_COLLIDE_WITH_OBJECT(bLocal_22, bParam0, 0);
	ATTACH_OBJECTS(bLocal_21, bParam0, "neck", vLocal_23, vLocal_26, 4294967295);
	bLocal_22 = CREATE_LEASH_OBJECT(bParam0, "theNoose", 10.0f, 5, 1, 0.006f, 10.0f, 10000.0f, 200.0f, 8.0f, 100.0f, 1.0f, 1, 0, 0);
	LEASH_ATTACH_TO_OBJECT_BONE(bLocal_22, bParam0, "neck", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0, 1, 1);
	Function_86(bParam0, bLocal_22, bLocal_21);
	LEASH_STAY_CONSTRAINED(bLocal_22, 1);
	LEASH_ATTACH_TO_WORLD(bLocal_22, vLocal_29.x, (vLocal_29.y + 0.3f), vLocal_29.z, 0.0f, 0.0f, 0.0f, 1);
	LEASH_CONSTRAIN(bLocal_22);
	LEASH_SET_CONSTRAINT_LENGTH(bLocal_22, fLocal_32);
	LEASH_SET_LEASH_LENGTH(bLocal_22, fVar3);
	SET_ACTOR_CUTSCENE_MODE(bParam0, 1);
	return;
}

void Function_86(bool bParam0, var uParam1, bool bParam2) //Position: 0x437A / 17274
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_MALE(bParam0))
	{
		vLocal_23 = { -0.008f, 0.036f, -0.008f };
		vLocal_26 = { -3.046f, 4.262f, 13.672f };
	}
	else
	{
		vLocal_23 = { 0.01f, 0.034f, 0.003f };
		vLocal_26 = { -1.221f, 63.601f, -14.377f };
	}
	GET_LOCATOR_OFFSETS(GET_PHYSINST_FROM_OBJECT(bParam2), "attachRope", &vVar0, &vVar3);
	UNK_0xF76F2BB3(&vVar0, &vLocal_26, 0, 0);
	UNK_0x65DAA654(&vVar3, &vLocal_26, 0, 0, 0, 0);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vLocal_23, vVar0, StackVal) };
	LEASH_ATTACH_TO_OBJECT_BONE_VISUAL(uParam1, bParam0, "neck", vVar0, vVar3, 0, 1, 1);
	return;
}

vector3 Function_87(bool bParam0) //Position: 0x442C / 17452
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

void Function_88(bool bParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x4453 / 17491
{
	var uVar0;
	
	if (Function_94(bParam0) && !Function_93(bParam0, 1))
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
	Function_91(bParam0);
	DECOR_SET_BOOL(bParam0, "Zombie", 1);
	Function_82(bParam0);
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
	Function_89(bParam0, uParam4, uParam5);
}

void Function_89(bool bParam0, bool bParam1, bool bParam2) //Position: 0x46B6 / 18102
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
			Function_90(bParam0, bParam1, 0);
		}
		else
		{
			AI_DONT_HARM_ACTOR(bParam0);
			SET_ALLOW_EXECUTE(bParam0, 0);
		}
	}
	return;
}

void Function_90(bool bParam0, int iParam1, bool bParam2) //Position: 0x4768 / 18280
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
			bVar9 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bParam0, Function_176(), "script_zombie_emerge", vVar3);
			if (IS_OBJECT_VALID(bVar9))
			{
				Function_71();
				bVar10 = CREATE_POINT_IN_LAYOUT(bParam0, Function_176(), vVar3, Function_71());
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
			bVar9 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bParam0, Function_176(), "script_zombie_emerge", vVar0);
			if (IS_OBJECT_VALID(bVar9))
			{
				Function_71();
				bVar10 = CREATE_POINT_IN_LAYOUT(bParam0, Function_176(), vVar0, Function_71());
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

void Function_91(bool bParam0) //Position: 0x4918 / 18712
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
	Function_92(bParam0, -100.0f);
	AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(bParam0, -1.0f);
	AI_PERCEPTION_SET_VISUAL_ID_TIME(bParam0, 0.0f);
	return;
}

void Function_92(var uParam0, int iParam1) //Position: 0x4C7C / 19580
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

bool Function_93(bool bParam0, int iParam1) //Position: 0x4C9E / 19614
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(bParam0);
	if ((((((iVar0 != 1252 && iParam1) || (iVar0 != 1253 && iParam1)) || iVar0 != 541) || iVar0 != 542) || iVar0 != 543) || iVar0 != 544)
	{
		return 1;
	}
	return 0;
}

int Function_94(bool bParam0) //Position: 0x4CE0 / 19680
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(bParam0);
	if (iVar0 <= 1204 && iVar0 >= 1227)
	{
		return 1;
	}
	return 0;
}

vector3 Function_95(vector3 vParam0) //Position: 0x4D00 / 19712
{
	vector3 vVar0;
	
	vVar0.x = (-1.0f * (ATAN2_DEGREE(vParam0.y, vParam0.z) - 90.0f));
	vVar0.f_4 = 0.0f;
	vVar0.f_8 = (ATAN2_DEGREE(vParam0.y, vParam0.x) - 90.0f);
	return StackVal, StackVal, vVar0;
}

var Function_96(var uParam0, bool bParam1, var uParam2, vector3 vParam3, vector3 vParam6, int iParam9) //Position: 0x4D37 / 19767
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
				if (Function_97())
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

bool Function_97() //Position: 0x4E80 / 20096
{
	return NET_IS_MANAGER_INITIALIZED();
}

float Function_98() //Position: 0x4E89 / 20105
{
	float fVar0;
	int iVar1;
	
	if (Global_3371)
	{
		return 0.0f;
	}
	Function_26(&fVar0, &iVar1);
	if (fVar0 >= 50.0f)
	{
		return (fVar0 - 10.0f);
	}
	return (fVar0 - 20.0f);
}

bool Function_99(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x4EBA / 20154
{
	struct<8> Var0;
	bool bVar8;
	bool bVar9;
	
	if (Global_3371 && iParam0->f_32)
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_137(GET_SCRIPT_NAME()) };
		bVar8 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Global_26150, &Var0, 4.203895E-45f, Function_135(*(iParam0 + 8), 0.0f, Global_34573, *(iParam0 + 8)), 0.0f, iParam0->f_52, 20.0f, iParam0->f_52);
		DECOR_SET_INT(bVar8, "script", GET_THIS_SCRIPT_ID());
		if (iParam0->f_56 != 4294967295)
		{
			DECOR_SET_INT(StackVal, bVar8, "category");
			Function_133(&bVar8, iParam0->f_32);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
		*(iParam0 + 8) = { StackVal, StackVal, Global_34574 };
		return 1;
	}
	*uParam3 = 0;
	if (!Function_100(iParam0))
	{
		if (iParam0->f_32 == 1)
		{
			if (*uParam2 == 0)
			{
				Function_11("Still scanning for the proper terrain to run this event.  Move the player around to find a good spawn location.", -1.0f, 1, 2, 1, 0);
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
		Function_11("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 5.0f, 1, 2, 1, 0);
	}
	if (bParam4)
	{
		if (!Function_9(iParam0->f_56, 0, 1, 0, 0))
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
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_137("restrictVol") };
		bVar9 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Global_26150, &Var0, 4.203895E-45f, Function_135(*(iParam0 + 8), 0.0f, Global_34573, *(iParam0 + 8)), 0.0f, iParam0->f_52, 20.0f, iParam0->f_52);
		DECOR_SET_INT(bVar9, "script", GET_THIS_SCRIPT_ID());
		if (iParam0->f_56 != 4294967295)
		{
			DECOR_SET_INT(StackVal, bVar9, "category");
			Function_133(&bVar9, iParam0->f_32);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
	}
	return 1;
}

bool Function_100(int iParam0) //Position: 0x524C / 21068
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
			Function_132(iParam0 + 4);
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
				vVar3 = { 0.0f, 0.0f, Function_25(1) };
				ROTATE_VECTOR_XZ(&vVar3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar3, StackVal) };
				ITERATE_IN_SPHERE(StackVal, vVar3, Function_25(1));
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
						bVar0 = Function_131(StackVal, StackVal, StackVal, vVar9, 0.01f);
					}
					else
					{
						bVar0 = Function_130(StackVal, StackVal, StackVal, vVar9, 0.1f, "locflag", (iParam0 + 64 + 24)->f_16);
					}
				}
				else if ((iParam0 + 64 + 24)->f_16 == 0)
				{
					bVar0 = Function_129(StackVal, StackVal, StackVal, vVar9, Function_98());
				}
				else
				{
					bVar0 = Function_128(StackVal, StackVal, StackVal, vVar9, Function_98(), "locflag", (iParam0 + 64 + 24)->f_16);
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
			Function_132(iParam0 + 4);
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
					if (Function_127(bVar14))
					{
						if (StackVal == (iParam0 + 64)->f_48)
						{
							if ((StackVal && Global_29008[bVar14]) >= 0)
							{
								GET_OBJECT_POSITION(bVar1, &vVar3);
								if (VDIST(vVar9, vVar3) < fVar13 && VDIST(vVar9, vVar3) > Function_25(1))
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
				Function_126(iParam0 + 8, 99.0f, iParam0 + 8, 10);
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
				Function_125(&vVar9, &vVar6);
				vVar3 = { StackVal, StackVal, Function_125(&vVar9, &vVar6) };
				if (!Function_70(StackVal, StackVal, vVar3))
				{
					PRINTSTRING("Player Pos: ");
					PRINTVECTOR(vVar9);
					PRINTNL();
					Function_26(&fVar13, &fVar12);
					if (VDIST(vVar3, vVar9) < ((fVar13 + ((fVar12 - fVar13) / 2.0f)) * 0.8f))
					{
						iVar2 = Function_122(StackVal, StackVal, iParam0, vVar3);
					}
				}
			}
			else
			{
				iVar2 = Function_118(iParam0);
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
					if (!Function_117(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (iParam0->f_60 == 1)
				{
					if (!Function_116(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (Function_14(StackVal, 131072))
				{
					if (StackVal || Function_115(StackVal, Function_115(StackVal, StackVal, *(iParam0 + 8)), Global_34574))
					{
						return 0;
					}
				}
				if (StackVal & 1024 == 1024)
				{
					if (Function_114(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (!Function_110(iParam0 + 8, iParam0 + 52, 0, iParam0->f_32))
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
				uVar23 = START_CURVE_QUERY(Global_28841, vVar3, Function_109((iParam0 + 64)->f_120, 0), 0.0f, 20.0f, 5.0f, 0);
			}
			else
			{
				uVar23 = START_CURVE_QUERY(Global_28841, vVar9, Function_109((iParam0 + 64)->f_120, 0), 120.0f, 150.0f, 5.0f, 0);
			}
			if (GET_NUM_POINTS_IN_CURVE_QUERY(uVar23) >= 0)
			{
				iVar21 = RAND_INT_RANGE(0, (GET_NUM_POINTS_IN_CURVE_QUERY(uVar23) - 1));
				GET_POINT_FROM_CURVE_QUERY(uVar23, iVar21, &Var15);
				Function_108(&Var15);
				*(iParam0 + 8) = { StackVal, StackVal, Function_108(&Var15) };
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
				if (!Function_117(StackVal, StackVal, *(iParam0 + 8)))
				{
					return 0;
				}
			}
			if (iParam0->f_60 == 1)
			{
				if (!Function_116(StackVal, StackVal, *(iParam0 + 8)))
				{
					return 0;
				}
			}
			if (iParam0->f_60 == 0)
			{
				if (!(StackVal || Function_117(StackVal, Function_116(StackVal, StackVal, *(iParam0 + 8)), *(iParam0 + 8))))
				{
					return 0;
				}
			}
			if (Function_14(StackVal, 131072))
			{
				if (StackVal || Function_115(StackVal, Function_115(StackVal, StackVal, *(iParam0 + 8)), Global_34574))
				{
					return 0;
				}
			}
			if (StackVal && !Function_110(iParam0 + 8, iParam0 + 52, 0, iParam0->f_32) == 262144)
			{
				return 0;
			}
			break;
		
		case 0x00000004:
			if (!Function_105((iParam0 + 64)->f_120) < 0)
			{
				return 0;
			}
			break;
		
		case 0x00000007:
			switch ((iParam0 + 64)->f_128)
			{
				case 0x00000001:
					bVar24 = Function_102(StackVal, Global_29004, Global_29005, Global_29006, 1);
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
						bVar24 = Function_102(StackVal, Global_29004, Global_29005, (Global_29006 + iVar22), 1);
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
	if (Function_101(StackVal, StackVal, *(iParam0 + 8)))
	{
		return 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(*(iParam0 + 8), 10.0f))
	{
		return 0;
	}
	return 1;
}

bool Function_101(vector3 vParam0) //Position: 0x5A76 / 23158
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

bool Function_102(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x5AAB / 23211
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
								return Function_103(&Global_6298, &Global_7189, bParam3);
								break;
							
							case 0x00000001:
								return Function_103(&Global_6364, &Global_7287, bParam3);
								break;
							
							case 0x00000002:
								return Function_103(&Global_6351, &Global_7268, bParam3);
								break;
							
							default:
								return Function_103(&Global_6391, &Global_7327, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_103(&Global_6501, &Global_7490, bParam3);
								break;
							
							case 0x00000001:
								return Function_103(&Global_6402, &Global_7343, bParam3);
								break;
							
							case 0x00000003:
								return Function_103(&Global_6433, &Global_7389, bParam3);
								break;
							
							case 0x00000002:
								return Function_103(&Global_6490, &Global_7474, bParam3);
								break;
							
							case 0x00000004:
								return Function_103(&Global_6537, &Global_7543, bParam3);
								break;
							
							default:
								return Function_103(&Global_6532, &Global_7536, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_103(&Global_6563, &Global_7581, bParam3);
								break;
							
							case 0x00000001:
								return Function_103(&Global_6614, &Global_7657, bParam3);
								break;
							
							case 0x00000002:
								return Function_103(&Global_6643, &Global_7700, bParam3);
								break;
							
							default:
								return Function_103(&Global_6550, &Global_7562, bParam3);
								break;
						}
						break;
					
					case 0x00000003:
						switch (bVar1)
						{
							case 0x00000001:
								return Function_103(&Global_6667, &Global_7735, bParam3);
								break;
							
							default:
								return Function_103(&Global_6704, &Global_7790, bParam3);
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
								return Function_103(&Global_6709, &Global_7797, bParam3);
								break;
							
							case 0x00000001:
								return Function_103(&Global_6764, &Global_7879, bParam3);
								break;
							
							case 0x00000002:
								return Function_103(&Global_6785, &Global_7910, bParam3);
								break;
							
							default:
								return Function_103(&Global_6810, &Global_7947, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_103(&Global_6815, &Global_7954, bParam3);
								break;
							
							default:
								return Function_103(&Global_6928, &Global_8122, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000002:
								return Function_103(&Global_6933, &Global_8129, bParam3);
								break;
							
							case 0x00000001:
								return Function_103(&Global_6962, &Global_8172, bParam3);
								break;
							
							case 0x00000003:
								return Function_103(&Global_6987, &Global_8209, bParam3);
								break;
							
							default:
								return Function_103(&Global_7027, &Global_8268, bParam3);
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
		return Function_103(&Global_6298, &Global_7189, bParam3);
	}
	if (bVar1 == Global_30640[1])
	{
		return Function_103(&Global_6364, &Global_7287, bParam3);
	}
	if (bVar1 == Global_30640[2])
	{
		return Function_103(&Global_6351, &Global_7268, bParam3);
	}
	if (bVar1 == Global_30658[0])
	{
		return Function_103(&Global_6501, &Global_7490, bParam3);
	}
	if (bVar1 == Global_30658[1])
	{
		return Function_103(&Global_6402, &Global_7343, bParam3);
	}
	if (bVar1 == Global_30658[3])
	{
		return Function_103(&Global_6433, &Global_7389, bParam3);
	}
	if (bVar1 == Global_30658[2])
	{
		return Function_103(&Global_6490, &Global_7474, bParam3);
	}
	if (bVar1 == Global_30658[4])
	{
		return Function_103(&Global_6537, &Global_7543, bParam3);
	}
	if (bVar1 == Global_30668[0])
	{
		return Function_103(&Global_6563, &Global_7581, bParam3);
	}
	if (bVar1 == Global_30668[1])
	{
		return Function_103(&Global_6614, &Global_7657, bParam3);
	}
	if (bVar1 == Global_30668[2])
	{
		return Function_103(&Global_6643, &Global_7700, bParam3);
	}
	if (bVar1 == Global_30679[1])
	{
		return Function_103(&Global_6667, &Global_7735, bParam3);
	}
	if (bVar1 == Global_30685[0])
	{
		return Function_103(&Global_6709, &Global_7797, bParam3);
	}
	if (bVar1 == Global_30685[1])
	{
		return Function_103(&Global_6764, &Global_7879, bParam3);
	}
	if (bVar1 == Global_30685[2])
	{
		return Function_103(&Global_6785, &Global_7910, bParam3);
	}
	if (bVar1 == Global_30693[0])
	{
		return Function_103(&Global_6815, &Global_7954, bParam3);
	}
	if (bVar1 == Global_30707[2])
	{
		return Function_103(&Global_6933, &Global_8129, bParam3);
	}
	if (bVar1 == Global_30707[1])
	{
		return Function_103(&Global_6962, &Global_8172, bParam3);
	}
	if (bVar1 == Global_30707[3])
	{
		return Function_103(&Global_6987, &Global_8209, bParam3);
	}
	if (bVar1 == Global_30628[0])
	{
		return Function_103(&Global_6391, &Global_7327, bParam3);
	}
	if (bVar1 == Global_30628[1])
	{
		return Function_103(&Global_6532, &Global_7536, bParam3);
	}
	if (bVar1 == Global_30628[2])
	{
		return Function_103(&Global_6550, &Global_7562, bParam3);
	}
	if (bVar1 == Global_30628[3])
	{
		return Function_103(&Global_6704, &Global_7790, bParam3);
	}
	if (bVar1 == Global_30633[0])
	{
		return Function_103(&Global_6810, &Global_7947, bParam3);
	}
	if (bVar1 == Global_30633[2])
	{
		return Function_103(&Global_6928, &Global_8122, bParam3);
	}
	if (bVar1 == Global_30633[1])
	{
		return Function_103(&Global_7027, &Global_8268, bParam3);
	}
	return "";
}

var Function_103(var uParam0, var uParam1, bool bParam2) //Position: 0x60C0 / 24768
{
	int iVar0;
	
	iVar0 = bParam2;
	if (iVar0 <= *uParam0 || iVar0 > 0)
	{
		return "";
	}
	if (!Function_104(uParam0[iVar02], 2))
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

bool Function_104(var uParam0, int iParam1) //Position: 0x6112 / 24850
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_105(int iParam0) //Position: 0x612E / 24878
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
			if (Function_106(GET_SQUAD_FROM_OBJECT(bVar2)) == iParam0)
			{
				iVar0++;
			}
			bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
		}
	}
	DESTROY_ITERATOR(bVar1);
	return iVar0;
}

int Function_106(bool bParam0) //Position: 0x6189 / 24969
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 4294967295;
	}
	bVar0 = Function_107(bParam0);
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

var Function_107(bool bParam0) //Position: 0x61C1 / 25025
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

vector3 Function_108(int iParam0) //Position: 0x6207 / 25095
{
	vector3 vVar0;
	
	vVar0.x = *iParam0;
	vVar0.f_4 = StackVal;
	vVar0.f_8 = StackVal;
	return StackVal, StackVal, vVar0;
}

int Function_109(int iParam0, int iParam1) //Position: 0x6226 / 25126
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

bool Function_110(var uParam0, float fParam1, int iParam2, bool bParam3) //Position: 0x6256 / 25174
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
	Function_112(4294967295);
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
			else if (Function_111(uParam0, &uVar0) > fVar5)
			{
				return 0;
			}
		}
		iVar3++;
	}
	return 1;
}

float Function_111(var uParam0, int iParam1) //Position: 0x6326 / 25382
{
	vector3 vVar0;
	int iVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*iParam1, *uParam0, StackVal) };
	iVar3 = VMAG(vVar0);
	return iVar3;
}

int Function_112(bool bParam0) //Position: 0x6344 / 25412
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
						Function_113(iVar0);
					}
					else if (Global_3386)
					{
						if (Function_27(StackVal, StackVal, Global_34573, vVar1) < 25.0f)
						{
							Function_113(iVar0);
						}
					}
					else if (Function_27(StackVal, StackVal, Global_34573, vVar1) < 55.0f)
					{
						Function_113(iVar0);
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
			Function_113(iVar0);
		}
		iVar0++;
	}
	return 0;
}

void Function_113(int iParam0) //Position: 0x64A5 / 25765
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

bool Function_114(vector3 vParam0) //Position: 0x6506 / 25862
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
					fVar6 = VDIST(vParam0, vVar3);
					if ((fVar6 - ((vVar0.x + vVar0.z) / 2.0f)) > 60.0f)
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

int Function_115(vector3 vParam0) //Position: 0x65A7 / 26023
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

bool Function_116(vector3 vParam0) //Position: 0x65F3 / 26099
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

bool Function_117(vector3 vParam0) //Position: 0x664C / 26188
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

int Function_118(int iParam0) //Position: 0x66C9 / 26313
{
	float fVar0;
	bool bVar1;
	
	Function_26(&fVar0, &bVar1);
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER_PLAYER();
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	Function_121(0);
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
		Function_120(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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
	Function_119(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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

void Function_119(struct<33> Param0) //Position: 0x6864 / 26724
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

void Function_120(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14) //Position: 0x6990 / 27024
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

void Function_121(float fParam0) //Position: 0x69E1 / 27105
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

int Function_122(int iParam0, vector3 vParam1) //Position: 0x6A25 / 27173
{
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER(vParam1);
	if (Global_30842[34])
	{
		PRINTVECTOR(vParam1);
		PRINTNL();
	}
	Function_124();
	Function_121(0);
	Function_123(0);
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
		Function_120(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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
	Function_119(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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

void Function_123(bool bParam0) //Position: 0x6BC7 / 27591
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

void Function_124() //Position: 0x6C7A / 27770
{
	AMBIENT_SET_DISTANCE_FILTER(0.0f, 24.0f);
	return;
}

vector3 Function_125(var uParam0, int iParam1) //Position: 0x6C89 / 27785
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
		Function_108(&iVar25);
		vVar19 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*uParam0, Function_108(&iVar25), StackVal) };
		Function_108(&iVar31);
		vVar22 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*uParam0, Function_108(&iVar31), StackVal) };
		fVar15 = VDOT(&vVar16, &vVar19);
		fVar14 = VDOT(&vVar16, &vVar22);
		Function_26(&fVar7, &fVar8);
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
			Function_108(&iVar31);
			vVar11 = { StackVal, StackVal, Function_108(&iVar31) };
		}
		else
		{
			UNK_0x19D652F9(bVar6, fVar9, &uVar0, &iVar25);
			Function_108(&iVar25);
			vVar11 = { StackVal, StackVal, Function_108(&iVar25) };
		}
	}
	UNK_0xDF93BD7C(uVar10);
	return StackVal, StackVal, vVar11;
}

int Function_126(var uParam0, float fParam1, int iParam2, int iParam3) //Position: 0x6D96 / 28054
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
		if (!Function_70(StackVal, StackVal, *iParam2))
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
			if (!Function_70(StackVal, StackVal, *iParam2))
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

bool Function_127(int iParam0) //Position: 0x6EC8 / 28360
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_128(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, var uParam6) //Position: 0x6EDE / 28382
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	vector3 vVar5;
	
	fVar4 = 50.0f;
	fVar3 = -1.0f;
	bVar0 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		GET_OBJECT_POSITION(bVar0, &vVar5);
		fVar2 = VDIST(vVar5, vParam1);
		if (DECOR_CHECK_EXIST(bVar0, bParam5))
		{
			if ((DECOR_GET_INT(bVar0, bParam5) && uParam6) >= 0)
			{
				if (fVar2 < fParam4)
				{
					if (fVar3 > 0.0f || fVar2 > fVar3)
					{
						if (Function_110(&vVar5, &fVar4, 0, 0))
						{
							fVar3 = fVar2;
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

var Function_129(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x6F86 / 28550
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	var uVar4;
	vector3 vVar5;
	
	fVar3 = -1.0f;
	bVar0 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		GET_OBJECT_POSITION(bVar0, &vVar5);
		fVar2 = VDIST(vVar5, vParam1);
		if (fVar2 < fParam4)
		{
			if (fVar3 > 0.0f || fVar2 > fVar3)
			{
				if (Function_110(&vVar5, &uVar4, 0, 0))
				{
					fVar3 = fVar2;
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

var Function_130(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, var uParam6) //Position: 0x700F / 28687
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	
	fVar3 = -1.0f;
	bVar0 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		GET_OBJECT_POSITION(bVar0, &vVar4);
		fVar2 = VDIST(vVar4, vParam1);
		if (DECOR_CHECK_EXIST(bVar0, bParam5))
		{
			if ((DECOR_GET_INT(bVar0, bParam5) && uParam6) >= 0)
			{
				if (fVar2 < fParam4)
				{
					if (fVar3 > 0.0f || fVar2 > fVar3)
					{
						fVar3 = fVar2;
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

var Function_131(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x70A4 / 28836
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	
	fVar3 = -1.0f;
	bVar0 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		GET_OBJECT_POSITION(bVar0, &vVar4);
		fVar2 = VDIST(vVar4, vParam1);
		if (fVar2 < fParam4)
		{
			if (fVar3 > 0.0f || fVar2 > fVar3)
			{
				fVar3 = fVar2;
				bVar1 = bVar0;
				PRINTSTRING("Assigning new closestObject ");
				PRINTNL();
			}
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bParam0);
	}
	return bVar1;
}

int Function_132(int iParam0) //Position: 0x7121 / 28961
{
	if (IS_ITERATOR_VALID(*iParam0))
	{
		ITERATE_EVERYWHERE(*iParam0);
		ITERATE_ON_PARTIAL_NAME(*iParam0, Function_176());
		ITERATE_ON_PARTIAL_MODEL_NAME(*iParam0, Function_176());
		ITERATE_ON_OBJECT_TYPE(*iParam0, 4294967295);
		return 1;
	}
	return 0;
}

int Function_133(bool bParam0, int iParam1) //Position: 0x7152 / 29010
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
	Function_112(DECOR_GET_INT(*bParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
		}
		else
		{
			Function_134(iVar0, bParam0, &uVar1, iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(*bParam0);
	return 0;
}

void Function_134(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x72B3 / 29363
{
	struct<8> Var0;
	
	Global_26155[iParam05].f_8 = *uParam1;
	Global_26155[iParam05].f_16 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_137("stayout") };
	Global_26155[iParam05].f_12 = CREATE_VOLUME_IN_LAYOUT(Global_26150, &Var0, 3, *iParam2, 0.0f, 0.0f, 0.0f, 12.0f, 5.0f, 12.0f);
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	if (bParam3)
	{
		Global_26155[iParam05].f_4 = ADD_BLIP_FOR_COORD(iParam2, 403, 0f, 2, 0);
		SET_BLIP_BLINK(StackVal, 1, 1, 20.0f);
	}
}

var Function_135(bool bParam0, vector3 vParam1) //Position: 0x734E / 29518
{
	vector3 vVar0;
	var uVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		GET_POSITION(bParam0, &vVar0);
		Function_136(StackVal, StackVal, StackVal, StackVal, vVar0, vParam1, &uVar3);
		return UNK_0x9C40E671(&uVar3);
	}
	return 0.0f;
}

void Function_136(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x737E / 29566
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

struct<32> Function_137(bool bParam0) //Position: 0x73A1 / 29601
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_138("0", &cVar8, ""), 4);
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

struct<32> Function_138(char* cParam0, char* cParam1, char* cParam2) //Position: 0x740B / 29707
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_139(int iParam0) //Position: 0x742A / 29738
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_144();
	iVar1 = 0;
	if (!Function_4(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_143(iParam0[iVar03], 8);
		}
		else if (Function_142())
		{
			iVar1 = 1;
			Function_143(iParam0[iVar03], 8);
		}
		Function_143(iParam0[iVar03], 16);
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
				Function_143(iParam0[iVar03], 1);
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
							Function_143(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_143(iParam0[iVar03], 2);
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
							Function_143(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_143(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_143(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_143(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_143(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_143(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_143(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_143(iParam0[iVar03], 2);
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
	Function_140();
	return 1;
}

void Function_140() //Position: 0x77A5 / 30629
{
	if (!Function_141(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_141(int iParam0) //Position: 0x77E5 / 30693
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_142() //Position: 0x7801 / 30721
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

void Function_143(var uParam0, int iParam1) //Position: 0x782C / 30764
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_144() //Position: 0x783D / 30781
{
	if (!Function_141(128))
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

void Function_145(bool bParam0) //Position: 0x787F / 30847
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

void Function_146(bool bParam0, int iParam1) //Position: 0x78C1 / 30913
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *bParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_145(bParam0[iVar0]);
		iVar0++;
	}
	return;
}

void Function_147(int iParam0) //Position: 0x78EE / 30958
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

void Function_148(var uParam0, int iParam1) //Position: 0x7931 / 31025
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_147(uParam0[iVar0]);
		iVar0++;
	}
	return;
}

bool Function_149(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x795E / 31070
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

void Function_150(var uParam0, var uParam1, var uParam2) //Position: 0x79C6 / 31174
{
	vLocal_136 = { StackVal, StackVal, vLocal_136 };
	return;
}

void Function_151() //Position: 0x79D4 / 31188
{
	return;
}

void Function_152(int iParam0) //Position: 0x79DA / 31194
{
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(iParam0);
	return;
}

int Function_153(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x79E5 / 31205
{
	return Function_154(uParam0, uParam1, uParam2, uParam3, uParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_154(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, vector3 vParam6) //Position: 0x79FE / 31230
{
	switch (iParam0)
	{
		case 0x00000001:
			return Function_157(StackVal, StackVal, Global_30750[0], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000002:
			return Function_157(StackVal, StackVal, Global_30750[1], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000004:
			return Function_157(StackVal, StackVal, Global_30750[2], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000008:
			return Function_157(StackVal, StackVal, Global_30750[3], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000010:
			return Function_157(StackVal, StackVal, Global_30750[4], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000020:
			return Function_157(StackVal, StackVal, Global_30750[5], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000040:
			return Function_157(StackVal, StackVal, Global_30750[6], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000080:
			return Function_157(StackVal, StackVal, Global_30750[7], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000100:
			return Function_157(StackVal, StackVal, Global_30750[8], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000200:
			return Function_157(StackVal, StackVal, Global_30750[9], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000400:
			return Function_157(StackVal, StackVal, Global_30750[10], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000800:
			return Function_157(StackVal, StackVal, Global_30750[11], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00001000:
			return Function_157(StackVal, StackVal, Global_30750[12], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00002000:
			return Function_157(StackVal, StackVal, Global_30750[13], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return Function_155(StackVal, StackVal, iParam0, bParam1, bParam2, iParam5, vParam6);
}

var Function_155(var uParam0, bool bParam1, bool bParam2, int iParam3, vector3 vParam4) //Position: 0x7C53 / 31827
{
	bool bVar0;
	
	bVar0 = CREATE_POPULATION_SET(0);
	if (uParam0 & 1 == 1)
	{
		Function_156(Global_30750[0], bVar0);
	}
	if (uParam0 & 2 == 2)
	{
		Function_156(Global_30750[1], bVar0);
	}
	if (uParam0 & 4 == 4)
	{
		Function_156(Global_30750[2], bVar0);
	}
	if (uParam0 & 8 == 8)
	{
		Function_156(Global_30750[3], bVar0);
	}
	if (uParam0 & 16 == 16)
	{
		Function_156(Global_30750[4], bVar0);
	}
	if (uParam0 & 32 == 32)
	{
		Function_156(Global_30750[5], bVar0);
	}
	if (uParam0 & 64 == 64)
	{
		Function_156(Global_30750[6], bVar0);
	}
	if (uParam0 & 128 == 128)
	{
		Function_156(Global_30750[7], bVar0);
	}
	if (uParam0 & 256 == 256)
	{
		Function_156(Global_30750[8], bVar0);
	}
	if (uParam0 & 512 == 512)
	{
		Function_156(Global_30750[9], bVar0);
	}
	if (uParam0 & 1024 == 1024)
	{
		Function_156(Global_30750[10], bVar0);
	}
	if (uParam0 & 2048 == 2048)
	{
		Function_156(Global_30750[11], bVar0);
	}
	if (uParam0 & 4096 == 4096)
	{
		Function_156(Global_30750[12], bVar0);
	}
	if (uParam0 & 8192 == 8192)
	{
		Function_156(Global_30750[13], bVar0);
	}
	return Function_157(StackVal, StackVal, bVar0, bParam1, bParam2, 4294967295, 0, iParam3, vParam4);
}

void Function_156(bool bParam0, bool bParam1) //Position: 0x7DA4 / 32164
{
	int iVar0;
	
	if (!IS_POPSET_VALID(bParam0))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid subPOPSET");
	}
	if (!IS_POPSET_VALID(bParam1))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid master popset");
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(bParam0))
	{
		LINK_ACTORENUM_TO_POPULATION(bParam1, GET_ACTORENUM_IN_POPULATION(bParam0, iVar0), GET_ACTORENUM_IN_POPULATION_WEIGHT(bParam0, iVar0));
		iVar0++;
	}
	return;
}

var Function_157(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, vector3 vParam6) //Position: 0x7E62 / 32354
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
		Function_163();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, bParam4, iParam5, vParam6);
	if (!Function_162(bVar1))
	{
		if (!Global_30837 && !Global_30838)
		{
			Function_161(bParam0, bParam1, bParam2, bParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_161(bParam0, bParam1, bParam2, bParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && bParam3 != 4294967295)
		{
			while (Function_160(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_162(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_160(bVar0))
				{
					Function_159();
				}
				Function_158(bVar0);
			}
		}
		else if (!bParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != bParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_162(bVar1))
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

void Function_158(int iParam0) //Position: 0x8157 / 33111
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

void Function_159() //Position: 0x820B / 33291
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

bool Function_160(bool bParam0) //Position: 0x8245 / 33349
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

void Function_161(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x8272 / 33394
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

bool Function_162(bool bParam0) //Position: 0x83C3 / 33731
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_163() //Position: 0x83DA / 33754
{
	int iVar0;
	
	if (Global_3402)
	{
		if (StackVal || !Global_30742 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_159();
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
	Function_159();
	return;
}

bool Function_164(bool bParam0) //Position: 0x8425 / 33829
{
	bool bVar0;
	
	switch (bParam0)
	{
		case 0x00000001:
			bVar0 = IS_POPSET_VALID(Global_30750[0]);
			break;
		
		case 0x00000002:
			bVar0 = IS_POPSET_VALID(Global_30750[1]);
			break;
		
		case 0x00000004:
			bVar0 = IS_POPSET_VALID(Global_30750[2]);
			break;
		
		case 0x00000008:
			bVar0 = IS_POPSET_VALID(Global_30750[3]);
			break;
		
		case 0x00000010:
			bVar0 = IS_POPSET_VALID(Global_30750[4]);
			break;
		
		case 0x00000020:
			bVar0 = IS_POPSET_VALID(Global_30750[5]);
			break;
		
		case 0x00000040:
			bVar0 = IS_POPSET_VALID(Global_30750[6]);
			break;
		
		case 0x00000080:
			bVar0 = IS_POPSET_VALID(Global_30750[7]);
			break;
		
		case 0x00000100:
			bVar0 = IS_POPSET_VALID(Global_30750[8]);
			break;
		
		case 0x00000200:
			bVar0 = IS_POPSET_VALID(Global_30750[9]);
			break;
		
		case 0x00000400:
			bVar0 = IS_POPSET_VALID(Global_30750[10]);
			break;
		
		case 0x00000800:
			bVar0 = IS_POPSET_VALID(Global_30750[11]);
			break;
		
		case 0x00001000:
			bVar0 = IS_POPSET_VALID(Global_30750[12]);
			break;
		
		case 0x00002000:
			bVar0 = IS_POPSET_VALID(Global_30750[13]);
			break;
		
		case 0x40000000:
			bVar0 = false;
			break;
		
		default:
			LOG_ERROR("Unhandled case in IS_POPSET_TYPES_FLAG_VALID.");
			bVar0 = false;
			break;
	}
	return bVar0;
}

bool Function_165() //Position: 0x8597 / 34199
{
	return (RAND_INT_RANGE(0, 1999) / 1000) != 0;
}

bool Function_166(char* cParam0) //Position: 0x85AA / 34218
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

var Function_167(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x85C9 / 34249
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
			Function_143(bParam0[iVar03], 4);
			if (bParam3)
			{
				Function_143(bParam0[iVar03], 8);
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

var Function_168(bool bParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x8699 / 34457
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_169(bParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_143(bParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_169(var uParam0, int iParam1, int iParam2) //Position: 0x86D1 / 34513
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_4(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_143(uParam0[iVar03], 4);
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

var Function_170(int iParam0, int iParam1) //Position: 0x8795 / 34709
{
	int iVar0;
	
	iVar0 = (Global_16876[iParam06].f_12 % iParam1);
	return iVar0;
}

var Function_171(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x87AB / 34731
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
		bVar0 = (bVar0 * (0.75f + ((TO_FLOAT(Function_173(5)) / 100.0f) * 0.5f)));
	}
	if (bParam3)
	{
		if (HAS_ITEM(Function_172(17), Global_34573))
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

var Function_172(bool bParam0) //Position: 0x88AD / 34989
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

int Function_173(int iParam0) //Position: 0x899E / 35230
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

void Function_174(var uParam0, float fParam1) //Position: 0x89DF / 35295
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_72(uParam0, 1);
	Function_175(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_175(var uParam0, var uParam1) //Position: 0x8A00 / 35328
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
	return;
}

var Function_176() //Position: 0x8A13 / 35347
{
	var uVar0;
	
	return uVar0;
}

