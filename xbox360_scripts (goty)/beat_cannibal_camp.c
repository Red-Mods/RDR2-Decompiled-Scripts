//Decompiled with MagicRDR v1.0
//Function Count : 152
//Statics Count : 216
//Natives Count : 302
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
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	bool bLocal_30 = false;
	bool bLocal_31 = false;
	int iLocal_32 = 0;
	bool bLocal_33 = false;
	bool bLocal_34 = false;
	var uLocal_35[1] = { 0 };
	var uLocal_37[1] = { 0 };
	int iLocal_39 = 0;
	bool bLocal_40 = true;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
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
	bool bLocal_80 = false;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	bool bLocal_83 = false;
	bool bLocal_84 = false;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	bool bLocal_87 = false;
	bool bLocal_88 = false;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	bool bLocal_91 = false;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	int iLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	vector3 vLocal_101 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_104 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_107 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_110 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_113 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_116 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_119 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_122 = { 0.0f, 0.0f, 0.0f };
	float fLocal_125 = 0.0f;
	int iLocal_126 = 0;
	vector3 vLocal_127 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_130 = { 0.0f, 0.0f, 0.0f };
	float fLocal_133 = 0.0f;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	int iLocal_138 = 0;
	var uLocal_139 = 0;
	bool bLocal_140 = false;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	int iLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	struct<57> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	var uVar0;
	int iVar6;
	int iVar8;
	bool bVar9;
	float fVar17;
	bool bVar18;
	int iVar19;
	int iVar20;
	bool bVar21;
	vector3 vVar22;
	
	iLocal_14 = 0;
	iLocal_15 = 0;
	iLocal_22 = 0;
	iLocal_23 = 0;
	iLocal_24 = 0;
	iLocal_25 = 0;
	iLocal_26 = 0;
	iLocal_32 = 0;
	bLocal_80 = false;
	iLocal_81 = 0;
	iLocal_82 = 0;
	iLocal_86 = 0;
	bLocal_87 = CREATE_LAYOUT(Function_151());
	iLocal_89 = 0;
	iLocal_90 = 0;
	vLocal_110 = { 0.44f, 0.0f, -2.08f };
	vLocal_113 = { -1.32f, 0.0f, -2.2f };
	vLocal_116 = { -2.32f, 0.0f, 0.44f };
	vLocal_119 = { 0.44f, 0.0f, 1.2f };
	vLocal_122 = { -0.88f, 0.0f, -1.0f };
	fLocal_125 = 227.52f;
	iLocal_126 = 0;
	vLocal_127 = { 2.64f, 0.0f, -0.3f };
	vLocal_130 = { 0.0f, 289.0f, 0.0f };
	fLocal_133 = 18.0f;
	iLocal_138 = 0;
	bLocal_140 = false;
	if (Global_16876[ScriptParam_0.f_566].f_12 == 0)
	{
		bLocal_33 = false;
	}
	else if ((Global_16876[ScriptParam_0.f_566].f_12 % 2) == 1)
	{
		bLocal_33 = true;
	}
	else
	{
		bLocal_33 = false;
	}
	Function_149(&uLocal_27, 0.0f);
	uVar0 = Function_146(0, 1, 1, 0, 0);
	iVar6 = 0;
	iVar8 = 0;
	fVar17 = 0.0f;
	switch (Global_29004)
	{
		case 0x00000000:
		case 0x00000002:
			iLocal_85 = Function_145(ScriptParam_0.f_56, 2);
			if (iLocal_85 == 0)
			{
				if (Function_144())
				{
					iLocal_39 = 39;
				}
				else
				{
					iLocal_39 = 168;
				}
			}
			else if (Function_144())
			{
				iLocal_39 = 9;
			}
			else
			{
				iLocal_39 = 176;
			}
			break;
		
		case 0x00000001:
			iLocal_85 = Function_145(ScriptParam_0.f_56, 2);
			if (iLocal_85 == 0)
			{
				iLocal_39 = 276;
			}
			else
			{
				iLocal_39 = 269;
			}
			break;
	}
	Function_142(&bLocal_40, "p_gen_noose03x", 0, 0);
	Function_141(&bLocal_40, iLocal_39, 3, 0);
	Function_141(&bLocal_40, 541, 3, 0);
	Function_141(&bLocal_40, 543, 3, 0);
	Function_142(&bLocal_40, "dead_ground_male", 5, 0);
	Function_142(&bLocal_40, "custom/dead_ground_male", 8, 0);
	Function_142(&bLocal_40, "crazy_hermit_waiving_over", 5, 0);
	Function_142(&bLocal_40, "custom/crazy_hermit_waiving_over", 8, 0);
	switch (bLocal_33)
	{
		case 0x00000000:
			Function_142(&bLocal_40, "$/tune/refGroups/campsiteSets/cam_canibal01x", 7, 0);
			Function_142(&bLocal_40, "$/content/DLC/ZombiePack/Gringos/DLC_Rand_Idle_Sit_Ground_Player", 1, 0);
			break;
		
		case 0x00000001:
			Function_142(&bLocal_40, "$/tune/refGroups/campsiteSets/cam_canibal02x", 7, 0);
			Function_142(&bLocal_40, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground_player", 1, 0);
			break;
	}
	Function_141(&bLocal_40, uLocal_37[0], 3, 0);
	Function_140(iLocal_39);
	Function_140(uLocal_37[0]);
	iVar19 = (RAND_INT_RANGE(0, 2999) / 1000);
	bVar18 = "DLC_cannibal_man";
	Function_142(&bLocal_40, bVar18, 1, 0);
	Function_142(&bLocal_40, "Locked_Footlocker", 1, 0);
	if (Global_3382 == 1)
	{
		iLocal_32 = 5;
	}
	Function_139();
	iVar20 = 0;
	bVar21 = false;
	while (!IS_EXITFLAG_SET())
	{
		Function_138(StackVal, StackVal, *(&ScriptParam_0 + 8));
		iLocal_95 = 600;
		if (iLocal_25 == 0)
		{
			if (Function_137(&bVar21, &iLocal_32, &iVar20, &iLocal_95, bLocal_80))
			{
				if (bVar21)
				{
					Function_136(&uLocal_35, 4294967295);
					Function_135(&bLocal_91);
				}
				else
				{
					Function_134(&uLocal_35, 4294967295);
					Function_133(&bLocal_91);
				}
			}
		}
		switch (iLocal_32)
		{
			case 0x00000000:
				if (Function_127(&bLocal_40))
				{
					bLocal_88 = CREATE_GRINGO_IN_LAYOUT(bLocal_87, "temp", bVar18, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
					GRINGO_LOAD_ANIMATION_FOR_ACTOR_ENUM_EXT(GET_GRINGO_FROM_OBJECT(bLocal_88), "UseCase1", "UseAnim", iLocal_39);
					iLocal_32 = 4;
					iLocal_95 = 0;
				}
				break;
			
			case 0x00000004:
				if (GRINGO_HAS_ANIMSET_LOADED_FOR_ACTOR_ENUM_EXT(GET_GRINGO_FROM_OBJECT(bLocal_88), "UseCase1", "UseAnim", iLocal_39))
				{
					iLocal_32 = 1;
					iLocal_95 = 0;
				}
				break;
			
			case 0x00000001:
				if (Function_87(&ScriptParam_0, &iLocal_95, &iLocal_90, &iLocal_89, 1))
				{
					iLocal_32 = 2;
					iLocal_95 = 0;
				}
				else if (iLocal_89 == 1)
				{
					iLocal_32 = 5;
					iLocal_95 = 0;
				}
				break;
			
			case 0x00000002:
				if (VDIST(Global_34574, *(&ScriptParam_0 + 8)) > Function_86())
				{
					iLocal_32 = 5;
					iLocal_95 = 0;
					break;
				}
				bLocal_34 = CREATE_VOLUME_IN_LAYOUT(bLocal_87, Function_151(), 3, *(&ScriptParam_0 + 8), 0.0f, 0.0f, 0.0f, 30.0f, 15.0f, 30.0f);
				CLEAR_AMBIENT_OBJECTS_VOLUME(bLocal_34, 15);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_34);
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_34);
				bLocal_30 = CREATE_POINT_IN_LAYOUT(bLocal_87, Function_151(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
				ATTACH_OBJECTS(bLocal_30, Global_34573, Function_151(), 0.0f, 0.5f, -1.0f, 0.0f, 0.0f, 0.0f, 4294967295);
				switch (bLocal_33)
				{
					case 0x00000000:
						Function_84(StackVal, StackVal, bLocal_87, Function_151(), "$/tune/refGroups/campsiteSets/cam_canibal01x", *(&ScriptParam_0 + 8), 0.0f, 0.0f, 0.0f, 4294967295);
						break;
					
					case 0x00000001:
						vLocal_116 = { -3.0f, -0.7f, 1.42f };
						vLocal_119 = { 1.14f, 0.0f, 0.94f };
						vLocal_110 = { 0.94f, 0.0f, 1.58f };
						vLocal_113 = { -1.32f, 0.0f, -2.2f };
						vLocal_122 = { -1.14f, 0.0f, -0.06f };
						fLocal_125 = 239.12f;
						fLocal_133 = 48.5f;
						vLocal_116 = { 0.18f, 0.0f, 1.94f };
						vLocal_130 = { 0.0f, 0.0f, 0.0f };
						Function_84(StackVal, StackVal, bLocal_87, Function_151(), "$/tune/refGroups/campsiteSets/cam_canibal02x", *(&ScriptParam_0 + 8), 0.0f, 0.0f, 0.0f, 4294967295);
						break;
				}
				CREATE_DECAL(StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vLocal_110, *(&ScriptParam_0 + 8), 0), 0.4f, 1, 1);
				CREATE_DECAL(StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vLocal_113, *(&ScriptParam_0 + 8), 0), 0.6f, 1, 1);
				switch (bLocal_33)
				{
					case 0x00000000:
						bLocal_31 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, StackVal, Vector("DLC_Rand_Idle_Sit_Ground_Player", bLocal_87, StackVal) + Vector(vLocal_122, *(&ScriptParam_0 + 8), "DLC_Rand_Idle_Sit_Ground_Player"), 0.0f, fLocal_125, 0.0f);
						break;
					
					case 0x00000001:
						bLocal_31 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, StackVal, Vector("Rand_Idle_Sit_Ground_Player", bLocal_87, StackVal) + Vector(vLocal_122, *(&ScriptParam_0 + 8), "Rand_Idle_Sit_Ground_Player"), 0.0f, fLocal_125, 0.0f);
						break;
				}
				PRINTVECTOR(*(&ScriptParam_0 + 8));
				PRINTNL();
				PRINTVECTOR(Global_34574);
				PRINTNL();
				vLocal_101 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vLocal_127, *(&ScriptParam_0 + 8), StackVal) };
				vLocal_104 = { 0.0f, 0.0f, 0.0f };
				vLocal_107 = { 0.0f, 0.0f, 0.0f };
				FIND_GROUND_INTERSECTION(&vLocal_101, 2.0f, &vLocal_107, &vLocal_104);
				bLocal_91 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_151(), bLocal_87, StackVal) + Vector(vLocal_119, *(&ScriptParam_0 + 8), iLocal_39), 0.0f, fLocal_133, 0.0f);
				bLocal_21 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_151(), bLocal_91, StackVal) + Vector(vLocal_119, *(&ScriptParam_0 + 8), bVar18), 0.0f, fLocal_133, 0.0f);
				DECOR_SET_BOOL(bLocal_91, "criminal", 1);
				if (IS_OBJECT_VALID(bVar9))
				{
					UNK_0x6745191B(bVar9, 0.0f, 0.0f, 0.0f);
				}
				Function_83(bLocal_91);
				Function_82(bLocal_91, 0);
				Function_81(bLocal_91);
				SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_ACTOR(bLocal_91), 1.5f, true, 1092616192);
				Function_80(bLocal_91);
				GIVE_WEAPON_TO_ACTOR(bLocal_91, 39, 0, 1, 1);
				MEMORY_REPORT_POSITION_AUTO(bLocal_91, Global_34573, 1);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(bLocal_91, 0);
				UNK_0x99AFD2D1(bLocal_91, 1, 1);
				GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bLocal_21), 0);
				DESTROY_OBJECT(bLocal_88);
				SNAP_OBJECT_TO_GROUND(bLocal_21, 2.0f, true, 1092616192);
				if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(bLocal_21)))
				{
					if (bLocal_140)
					{
						Function_78(&uLocal_141, 1, 0, 4294967295, 4294967295);
					}
					TASK_USE_GRINGO(bLocal_91, GET_GRINGO_FROM_OBJECT(bLocal_21), "UseCase1", 4294967295, 1);
					SNAP_ACTOR_TO_GRINGO(bLocal_91, bLocal_21, "UseCase1", 1, 0, 0);
				}
				vLocal_101 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vLocal_116, *(&ScriptParam_0 + 8), StackVal) };
				vLocal_101.f_4 = (vLocal_101.y + 2.0f);
				vLocal_104 = { 0.0f, 0.0f, 0.0f };
				vVar22 = { 0.0f, 0.0f, 0.0f };
				PRINTSTRING("Probe start pos");
				PRINTVECTOR(vLocal_101);
				PRINTSTRING("nProbe pos");
				PRINTVECTOR(vVar22);
				Function_76(StackVal, StackVal, &uLocal_96, &uLocal_97, &uLocal_98, 2.75f, *(&ScriptParam_0 + 8));
				vLocal_104.f_4 = 270.0f;
				PRINTVECTOR(vLocal_104);
				vLocal_107 = { 0.0f, 0.0f, 0.0f };
				FIND_GROUND_INTERSECTION(&vLocal_101, 4.0f, &vLocal_107, &vLocal_104);
				bLocal_83 = CREATE_GRINGO_IN_LAYOUT(bLocal_87, Function_151(), "$/content/scripting/gringo/SimpleGringo/Locked_Footlocker", vLocal_107, vLocal_130);
				SNAP_OBJECT_TO_GROUND(bLocal_83, 7.0f, true, 1092616192);
				bLocal_84 = GET_GRINGO_FROM_OBJECT(bLocal_83);
				Function_72(StackVal, StackVal, bLocal_84, vVar22, 4294967295, 11, 0x3f800000);
				DECOR_SET_OBJECT(GET_OBJECT_FROM_GRINGO(bLocal_84), "nboxOwnerA", bLocal_91);
				Function_71(&uLocal_99, 1);
				iLocal_32 = 3;
				iLocal_95 = 0;
				break;
			
			case 0x00000003:
				Function_70();
				Function_42(StackVal, StackVal, Function_70(), &bLocal_80, ScriptParam_0.f_56, bLocal_91, 60, 0x42700000, 1);
				if (!Function_36(ScriptParam_0.f_56, bLocal_91, &iLocal_81, &iLocal_82, 0, 1, 1, 1))
				{
					iLocal_32 = 5;
					iLocal_95 = 0;
					break;
				}
				if (GET_DEBUG_DRAW_STATE())
				{
					if (IS_ACTOR_VALID(bLocal_91))
					{
						GET_POSITION(bLocal_91, &uLocal_92);
						iLocal_95 = 0;
					}
				}
				if (!Function_34(bLocal_91, 0))
				{
					iLocal_95 = 0;
					iLocal_32 = 5;
					break;
				}
				if (Function_31(bLocal_91, &uLocal_100, &fVar17, uLocal_99, iLocal_22, 0x40400000))
				{
					Function_30(Global_34573, bLocal_91, "CannibalManHeadPlayer_msg01", "CannibalManHeadPlayer_msg01", 5, 60, 1, 1);
					iLocal_86 = 11;
					iLocal_22 = 1;
				}
				if (Function_28(StackVal, StackVal, Global_34573, *(&ScriptParam_0 + 8)) < Function_26(1))
				{
					iLocal_95 = 0;
					iLocal_32 = 5;
					break;
				}
				if (IS_ACTOR_VALID(bLocal_91))
				{
					if (Function_28(StackVal, StackVal, bLocal_91, *(&ScriptParam_0 + 8)) < Function_26(1))
					{
						Function_24(bLocal_91);
					}
					if (DECOR_CHECK_EXIST(bLocal_91, "actorStolen") && !iLocal_22)
					{
						switch (bLocal_33)
						{
							case 0x00000000:
								CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bLocal_91);
								Function_30(bLocal_91, Global_34573, "CannibalManEating_msg11", "CannibalManEating_msg11", 5, 60, 1, 1);
								break;
							
							case 0x00000001:
								CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bLocal_91);
								Function_30(bLocal_91, Global_34573, "CannibalManHead_msg09", "CannibalManHead_msg09", 5, 60, 1, 1);
								break;
						}
						iLocal_86 = 11;
						iLocal_22 = 1;
					}
				}
				iLocal_95 = 0;
				if (IS_ACTOR_VALID(bLocal_91))
				{
					if (Function_15(&iLocal_86))
					{
						iVar8 = 1;
						iLocal_32 = 5;
					}
				}
				else
				{
					iLocal_32 = 5;
				}
				break;
			
			case 0x00000005:
				iLocal_32 = 6;
				iLocal_95 = 0;
				break;
			
			case 0x00000006:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				iLocal_95 = 0;
				break;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(iLocal_95);
		}
	}
	Function_134(&uLocal_35, 4294967295);
	Function_133(&bLocal_91);
	Function_14(&uLocal_96, &uLocal_97, &uLocal_98);
	Function_13(iLocal_39);
	Function_13(uLocal_37[0]);
	Function_24(bLocal_91);
	Function_24(uLocal_35[0]);
	if (DECOR_CHECK_EXIST(Global_34573, "Vomit"))
	{
		DECOR_REMOVE(Global_34573, "Vomit");
	}
	if (!bLocal_80)
	{
		Function_7(ScriptParam_0.f_56, 0.0f, 0, 1, 0);
		if (IS_OBJECT_VALID(bLocal_87))
		{
			Function_6(&bLocal_91);
			Function_5(&uLocal_35, 4294967295);
			UNK_0xA936E73B(bLocal_87, 1);
			MARK_OBJECT_FOR_AGGRESSIVE_CLEANUP(bLocal_87, 1);
		}
	}
	else if (iVar8 != 0 && iLocal_22 != 0)
	{
		Function_5(&uLocal_35, 4294967295);
		if (IS_ACTOR_VALID(bLocal_91))
		{
			RESET_ANIM_SET_FOR_ACTOR(bLocal_91, 0);
		}
		if (bLocal_140)
		{
			Function_78(&uLocal_141, 1, 0, 4294967295, 4294967295);
		}
		Function_6(&bLocal_91);
	}
	if (Function_34(bLocal_91, 0))
	{
		Function_24(bLocal_91);
		AI_SPEECH_SET_ALLOW_FOR_ACTOR(bLocal_91, 1);
		UNK_0x99AFD2D1(bLocal_91, 0, 0);
	}
	if (ScriptParam_0.f_32)
	{
		Global_3399 = 0;
	}
	if (bLocal_140)
	{
		Function_78(&uLocal_141, 1, 0, 4294967295, 4294967295);
	}
	if (bLocal_140)
	{
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	}
	if (IS_OBJECT_VALID(bVar9))
	{
		UNK_0xE18028C1(bVar9);
		DESTROY_OBJECT(bVar9);
	}
	if (iLocal_23 == 1)
	{
		AUDIO_ENABLE_PLAYER_TAUNTS();
		iLocal_23 = 0;
	}
	if (IS_VOLUME_VALID(bLocal_34))
	{
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_34);
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_34);
	}
	Function_1(&bLocal_40);
	UNK_0xA936E73B(bLocal_87, 1);
	RELEASE_LAYOUT_REF(bLocal_87);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0xD03 / 3331
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

void Function_2(var uParam0, int iParam1) //Position: 0xD29 / 3369
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

void Function_3(var uParam0, int iParam1) //Position: 0xE57 / 3671
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_4(var uParam0, int iParam1) //Position: 0xE71 / 3697
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(var uParam0, int iParam1) //Position: 0xE8E / 3726
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_6(uParam0[iVar0]);
		iVar0++;
	}
	return;
}

void Function_6(bool bParam0) //Position: 0xEBB / 3771
{
	if (IS_ACTOR_VALID(*bParam0))
	{
		RESET_ANIM_SET_FOR_ACTOR(*bParam0, 0);
		TASK_FLEE_ACTOR(*bParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
		TASK_PRIORITY_SET(*bParam0, 0);
	}
	return;
}

bool Function_7(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xEE6 / 3814
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
		Function_9("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
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
			Function_8(bVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_8(bVar0);
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
			Function_8(bVar0);
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

void Function_8(bool bParam0) //Position: 0x1143 / 4419
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

void Function_9(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1189 / 4489
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_10(Global_6269) };
		}
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, &Var0, iParam5);
	}
	else
	{
		iVar4 = "";
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, iVar4, iParam5);
	}
}

struct<16> Function_10(int iParam0) //Position: 0x1200 / 4608
{
	char* cVar0[16];
	
	if (!Function_11())
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

bool Function_11() //Position: 0x123F / 4671
{
	if (Function_12(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_12(int iParam0, int iParam1) //Position: 0x125A / 4698
{
	return (iParam0 && iParam1) == 0;
}

void Function_13(int iParam0) //Position: 0x1267 / 4711
{
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(iParam0);
	return;
}

void Function_14(var uParam0, var uParam1, int iParam2) //Position: 0x1272 / 4722
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

bool Function_15(int iParam0) //Position: 0x129F / 4767
{
	var uVar0;
	
	GET_POSITION(bLocal_91, &uVar0);
	switch (*iParam0)
	{
		case 0x00000000:
			if (iLocal_24 == 0)
			{
				if (Function_23(Global_34573, bLocal_91) > 20.0f || CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bLocal_91, 1.0f, 20.0f, 1, 1, 0))
				{
					switch (bLocal_33)
					{
						case 0x00000000:
							if (!IS_AMBIENT_SPEECH_PLAYING(bLocal_91))
							{
								ADD_BLIP_FOR_ACTOR(bLocal_91, 325, 0, 2, 0);
								Function_30(bLocal_91, Global_34573, "CannibalManEating_msg02", "CannibalManEating_msg02", 5, 60, 1, 1);
								Function_149(&uLocal_144, 0.0f);
								*iParam0 = 1;
							}
							break;
						
						case 0x00000001:
							if (!IS_AMBIENT_SPEECH_PLAYING(bLocal_91))
							{
								ADD_BLIP_FOR_ACTOR(bLocal_91, 325, 0, 2, 0);
								Function_30(bLocal_91, Global_34573, "CannibalManHead_msg01", "CannibalManHead_msg01", 5, 60, 1, 1);
								Function_149(&uLocal_144, 0.0f);
								*iParam0 = 1;
							}
							break;
						}
					}
			}
			break;
		
		case 0x00000001:
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bLocal_91, 1.0f, 55.0f, 1, 0, 0))
			{
				if (!IS_AMBIENT_SPEECH_PLAYING(bLocal_91))
				{
					switch (bLocal_33)
					{
						case 0x00000000:
							if (Function_19(&uLocal_144, 8.0f))
							{
								Function_30(bLocal_91, Global_34573, "CannibalManEating_msg03", "CannibalManEating_msg03", 5, 60, 1, 1);
								Function_149(&uLocal_144, 0.0f);
								*iParam0 = 5;
							}
							break;
						
						case 0x00000001:
							if (Function_19(&uLocal_144, 8.0f))
							{
								DECOR_SET_BOOL(bLocal_91, "Eating_Done", 1);
								Function_149(&uLocal_144, 0.0f);
								*iParam0 = 4;
							}
							break;
						}
					}
			}
			break;
		
		case 0x00000004:
			if (Function_23(Global_34573, bLocal_91) > 45.0f)
			{
				Function_18(bLocal_91);
			}
			break;
		
		case 0x00000005:
			if (GET_CURRENT_GRINGO(Global_34573) == GET_GRINGO_FROM_OBJECT(bLocal_31))
			{
				Function_149(&uLocal_147, 0.0f);
				*iParam0 = 8;
			}
			if (Function_19(&uLocal_144, 12.0f) && !IS_AMBIENT_SPEECH_PLAYING(bLocal_91))
			{
				Function_30(bLocal_91, Global_34573, "CannibalManEating_msg04", "CannibalManEating_msg04", 5, 60, 1, 1);
				Function_149(&uLocal_144, 0.0f);
				*iParam0 = 6;
			}
			break;
		
		case 0x00000006:
			if (GET_CURRENT_GRINGO(Global_34573) == GET_GRINGO_FROM_OBJECT(bLocal_31))
			{
				Function_149(&uLocal_147, 0.0f);
				*iParam0 = 8;
			}
			if (Function_23(Global_34573, bLocal_91) > 45.0f)
			{
				if (Function_19(&uLocal_144, 10.0f) && !IS_AMBIENT_SPEECH_PLAYING(bLocal_91))
				{
					Function_30(bLocal_91, Global_34573, "CannibalManEating_msg09", "CannibalManEating_msg09", 5, 60, 1, 1);
					Function_149(&uLocal_144, 0.0f);
					*iParam0 = 7;
				}
			}
			break;
		
		case 0x00000007:
			if (GET_CURRENT_GRINGO(Global_34573) == GET_GRINGO_FROM_OBJECT(bLocal_31))
			{
				Function_149(&uLocal_147, 0.0f);
				*iParam0 = 8;
			}
			if (Function_23(Global_34573, bLocal_91) > 45.0f)
			{
				if (Function_19(&uLocal_144, 9.0f) && !IS_AMBIENT_SPEECH_PLAYING(bLocal_91))
				{
					Function_30(bLocal_91, Global_34573, "CannibalManEating_msg10", "CannibalManEating_msg10", 5, 60, 1, 1);
					Function_149(&uLocal_144, 0.0f);
					*iParam0 = 10;
				}
			}
			break;
		
		case 0x00000008:
			Function_17(bLocal_91);
			if (GET_CURRENT_GRINGO(Global_34573) == GET_GRINGO_FROM_OBJECT(bLocal_31) && !IS_AMBIENT_SPEECH_PLAYING(Global_34573))
			{
				*iParam0 = 9;
				Function_30(Global_34573, bLocal_91, "CannibalManPlayer_msg01", "CannibalManPlayer_msg01", 5, 60, 1, 1);
			}
			else if ((Function_19(&uLocal_147, 16.0f) && !DECOR_CHECK_EXIST(Global_34573, "Vomit")) && !IS_AMBIENT_SPEECH_PLAYING(bLocal_91))
			{
				Function_149(&uLocal_144, 2.0f);
				DECOR_SET_BOOL(Global_34573, "Vomit", 1);
				Function_30(Global_34573, bLocal_91, "CannibalManPlayer_msg02", "CannibalManPlayer_msg02", 5, 60, 1, 1);
			}
			break;
		
		case 0x00000009:
			break;
		
		case 0x0000000A:
			if (!IS_AMBIENT_SPEECH_PLAYING(bLocal_91) || Function_19(&uLocal_144, 5.0f))
			{
				*iParam0 = 11;
			}
			break;
		
		case 0x0000000B:
			Function_24(bLocal_91);
			GRINGO_DEACTIVATE(GET_GRINGO_FROM_OBJECT(bLocal_21));
			AI_QUICK_EXIT_GRINGO(bLocal_91, 1);
			Function_16(bLocal_91, &Global_34573);
			return 1;
			break;
	}
	return 0;
}

int Function_16(bool bParam0, int iParam1) //Position: 0x177F / 6015
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

int Function_17(bool bParam0) //Position: 0x1864 / 6244
{
	if (iLocal_126 != 0 && !IS_AMBIENT_SPEECH_PLAYING(bParam0))
	{
		if ((Function_19(&uLocal_144, 6.0f) && !IS_AMBIENT_SPEECH_PLAYING(bParam0)) && !IS_AMBIENT_SPEECH_PLAYING(Global_34573))
		{
			DECOR_SET_BOOL(bParam0, "nSit_Still", 1);
			iLocal_126++;
			Function_149(&uLocal_144, 0.0f);
			Function_30(bParam0, Global_34573, "CannibalManEating_msg01", "CannibalManEating_msg01", 5, 60, 1, 1);
		}
	}
	else if (iLocal_126 != 1 && !IS_AMBIENT_SPEECH_PLAYING(bParam0))
	{
		if ((Function_19(&uLocal_144, 7.0f) && !IS_AMBIENT_SPEECH_PLAYING(bParam0)) && !IS_AMBIENT_SPEECH_PLAYING(Global_34573))
		{
			iLocal_126++;
			Function_149(&uLocal_144, 0.0f);
			Function_30(bParam0, Global_34573, "CannibalManEating_msg05", "CannibalManEating_msg05", 5, 60, 1, 1);
		}
	}
	else if (iLocal_126 == 2)
	{
		if ((Function_19(&uLocal_144, 8.0f) && !IS_AMBIENT_SPEECH_PLAYING(bParam0)) && !IS_AMBIENT_SPEECH_PLAYING(Global_34573))
		{
			iLocal_126++;
			Function_149(&uLocal_144, 0.0f);
			Function_30(bParam0, Global_34573, "CannibalManEating_msg06", "CannibalManEating_msg06", 5, 60, 1, 1);
		}
	}
	else if (iLocal_126 == 3)
	{
		if ((Function_19(&uLocal_144, 10.0f) && !IS_AMBIENT_SPEECH_PLAYING(bParam0)) && !IS_AMBIENT_SPEECH_PLAYING(Global_34573))
		{
			iLocal_126++;
			Function_149(&uLocal_144, 0.0f);
			Function_30(bParam0, Global_34573, "CannibalManEating_msg07", "CannibalManEating_msg07", 5, 60, 1, 1);
		}
	}
	else if (iLocal_126 == 4)
	{
		if ((Function_19(&uLocal_144, 8.0f) && !IS_AMBIENT_SPEECH_PLAYING(bParam0)) && !IS_AMBIENT_SPEECH_PLAYING(Global_34573))
		{
			iLocal_126++;
			Function_149(&uLocal_144, 0.0f);
			Function_30(bParam0, Global_34573, "CannibalManEating_msg08", "CannibalManEating_msg08", 5, 60, 1, 1);
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_18(bool bParam0) //Position: 0x1AC2 / 6850
{
	float fVar0;
	
	fVar0 = 0.0f;
	if (iLocal_138)
	{
		iLocal_126 = RAND_INT_RANGE_DIFFERENT(iLocal_151, 0, 6);
		fVar0 = 15.0f;
	}
	if (iLocal_126 != 0 && !IS_AMBIENT_SPEECH_PLAYING(bParam0))
	{
		if ((Function_19(&uLocal_144, (8.0f + fVar0)) && !IS_AMBIENT_SPEECH_PLAYING(bParam0)) && !IS_AMBIENT_SPEECH_PLAYING(Global_34573))
		{
			iLocal_126++;
			iLocal_151 = 0;
			Function_149(&uLocal_144, 0.0f);
			Function_30(bParam0, 0, "CannibalManHead_msg02", "CannibalManHead_msg02", 5, 60, 1, 1);
		}
	}
	else if (iLocal_126 != 1 && !IS_AMBIENT_SPEECH_PLAYING(bParam0))
	{
		if ((Function_19(&uLocal_144, (8.0f + fVar0)) && !IS_AMBIENT_SPEECH_PLAYING(bParam0)) && !IS_AMBIENT_SPEECH_PLAYING(Global_34573))
		{
			iLocal_126++;
			iLocal_151 = 1;
			Function_149(&uLocal_144, 0.0f);
			Function_30(bParam0, 0, "CannibalManHead_msg03", "CannibalManHead_msg03", 5, 60, 1, 1);
		}
	}
	else if (iLocal_126 == 2)
	{
		if ((Function_19(&uLocal_144, (8.0f + fVar0)) && !IS_AMBIENT_SPEECH_PLAYING(bParam0)) && !IS_AMBIENT_SPEECH_PLAYING(Global_34573))
		{
			iLocal_126++;
			iLocal_151 = 2;
			Function_149(&uLocal_144, 0.0f);
			Function_30(bParam0, 0, "CannibalManHead_msg04", "CannibalManHead_msg04", 5, 60, 1, 1);
		}
	}
	else if (iLocal_126 == 3)
	{
		if ((Function_19(&uLocal_144, (8.0f + fVar0)) && !IS_AMBIENT_SPEECH_PLAYING(bParam0)) && !IS_AMBIENT_SPEECH_PLAYING(Global_34573))
		{
			iLocal_126++;
			iLocal_151 = 3;
			Function_149(&uLocal_144, 0.0f);
			Function_30(bParam0, 0, "CannibalManHead_msg05", "CannibalManHead_msg05", 5, 60, 1, 1);
		}
	}
	else if (iLocal_126 == 4)
	{
		if ((Function_19(&uLocal_144, (8.0f + fVar0)) && !IS_AMBIENT_SPEECH_PLAYING(bParam0)) && !IS_AMBIENT_SPEECH_PLAYING(Global_34573))
		{
			iLocal_126++;
			iLocal_151 = 4;
			Function_149(&uLocal_144, 0.0f);
			Function_30(bParam0, 0, "CannibalManHead_msg06", "CannibalManHead_msg06", 5, 60, 1, 1);
		}
	}
	else if (iLocal_126 == 5)
	{
		if ((Function_19(&uLocal_144, (8.0f + fVar0)) && !IS_AMBIENT_SPEECH_PLAYING(bParam0)) && !IS_AMBIENT_SPEECH_PLAYING(Global_34573))
		{
			iLocal_126++;
			iLocal_151 = 5;
			Function_149(&uLocal_144, 0.0f);
			Function_30(bParam0, 0, "CannibalManHead_msg07", "CannibalManHead_msg07", 5, 60, 1, 1);
		}
	}
	else if (iLocal_126 == 6)
	{
		if ((Function_19(&uLocal_144, (7.0f + fVar0)) && !IS_AMBIENT_SPEECH_PLAYING(bParam0)) && !IS_AMBIENT_SPEECH_PLAYING(Global_34573))
		{
			iLocal_138 = 1;
			iLocal_126++;
			iLocal_151 = 6;
			Function_149(&uLocal_144, 0.0f);
			Function_30(bParam0, 0, "CannibalManHead_msg08", "CannibalManHead_msg08", 5, 60, 1, 1);
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

bool Function_19(var uParam0, float fParam1) //Position: 0x1E10 / 7696
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

float Function_20(int iParam0) //Position: 0x1E2C / 7724
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

bool Function_21(int iParam0) //Position: 0x1EF4 / 7924
{
	return Function_12(*iParam0, 2);
}

bool Function_22(int iParam0) //Position: 0x1F01 / 7937
{
	return Function_12(*iParam0, 1);
}

float Function_23(bool bParam0, bool bParam1) //Position: 0x1F0E / 7950
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

int Function_24(bool bParam0) //Position: 0x1FFF / 8191
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_25(bParam0);
		return 1;
	}
	return 0;
}

void Function_25(bool bParam0) //Position: 0x2015 / 8213
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

float Function_26(bool bParam0) //Position: 0x2041 / 8257
{
	var uVar0;
	float fVar1;
	
	if (!bParam0)
	{
		Function_27(&uVar0, &fVar1);
		if (fVar1 < 60.0f)
		{
			return (fVar1 + 20.0f);
		}
		return (fVar1 + 10.0f);
	}
	return (190.0f + 20.0f);
}

void Function_27(float fParam0, int iParam1) //Position: 0x207C / 8316
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

float Function_28(bool bParam0, vector3 vParam1) //Position: 0x2105 / 8453
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_29(bParam0);
		vVar0 = { StackVal, StackVal, Function_29(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

vector3 Function_29(bool bParam0) //Position: 0x217F / 8575
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

void Function_30(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x21E9 / 8681
{
	bParam1 = bParam1;
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0) && Function_23(bParam0, Global_34573) >= IntToFloat(iParam5))
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

bool Function_31(bool bParam0, var uParam1, var uParam2, int iParam3, bool bParam4, float fParam5) //Position: 0x2279 / 8825
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
		fVar0 = Function_23(bParam0, Global_34573);
		if (!Function_12(iParam3, 8))
		{
			if (GET_LAST_ATTACKER(bParam0) == Global_34573)
			{
				*uParam1 = 8;
				Function_32(bParam0);
				return 1;
			}
		}
		if (!Function_12(iParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(bParam0, 1.0f))
			{
				*uParam1 = 2;
				Function_32(bParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(bParam0, 1.0f, 1.0f))
			{
				*uParam1 = 2;
				Function_32(bParam0);
				return 1;
			}
		}
		if (!Function_12(iParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(bParam0) || (((GET_ACTOR_UNDER_RETICLE(Global_34573, 0) != bParam0 && IS_PLAYER_WEAPON_ZOOMED(Global_34573)) && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(Global_34573) != bParam0 && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f))
			{
				if (*uParam2 > 0.0f)
				{
					*uParam1 = 4;
					Function_32(bParam0);
					return 1;
				}
				if (*uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - *uParam2) < 1.3f)
					{
						*uParam1 = 4;
						Function_32(bParam0);
						return 1;
					}
				}
				*uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_12(iParam3, 1))
		{
			if (Global_3403 || Global_3404)
			{
				*uParam1 = 1;
				Function_32(bParam0);
				return 1;
			}
		}
		if (!Function_12(iParam3, 16))
		{
			if (UNK_0x7F454A92(bParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(bParam0)) > 2.0f && fVar0 > 18.0f)
				{
					*uParam1 = 16;
					Function_32(bParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_32(bool bParam0) //Position: 0x2410 / 9232
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(bParam0, 1);
	UNK_0x99AFD2D1(bParam0, 0, 0);
	Function_33(bParam0);
	MEMORY_CONSIDER_AS(Global_34573, bParam0, 2);
	MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
	AI_GOAL_LOOK_CLEAR(bParam0);
	return;
}

void Function_33(bool bParam0) //Position: 0x2444 / 9284
{
	SAY_SINGLE_LINE_CONTEXT(bParam0, 60, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

bool Function_34(bool bParam0, bool bParam1) //Position: 0x245B / 9307
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
			Function_24(bParam0);
			return 0;
		}
		if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 163840))
		{
			Function_24(bParam0);
			return 0;
		}
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		if (Function_35(bParam0, 0) && !AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 16384))
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

int Function_35(bool bParam0, bool bParam1) //Position: 0x24F7 / 9463
{
	bool bVar0;
	int iVar1;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (bParam1 && IS_ACTOR_HOGTIED(bParam0))
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

bool Function_36(int iParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x2541 / 9537
{
	if (StackVal & 64 == 64)
	{
		if (!*uParam2)
		{
			if (IS_ACTOR_VALID(bParam1))
			{
				if (Function_23(Global_34573, bParam1) > 15.0f)
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
		if (Function_39() && !*uParam2)
		{
			return 0;
		}
		if (Function_38(iParam0) && !*uParam2)
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
		if (!Function_37(iParam0, uParam5))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_37(int iParam0, int iParam1) //Position: 0x266F / 9839
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

int Function_38(int iParam0) //Position: 0x2690 / 9872
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

int Function_39() //Position: 0x26CE / 9934
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
						if (Function_40(StackVal, Global_34573) > IntToFloat(iVar1))
						{
							return 1;
						}
					}
				}
			}
			if (Function_40(StackVal, Global_34573) > IntToFloat(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

float Function_40(bool bParam0, bool bParam1) //Position: 0x2789 / 10121
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_29(bParam0);
			vVar0 = { StackVal, StackVal, Function_29(bParam0) };
			Function_41(bParam1);
			vVar3 = { StackVal, StackVal, Function_41(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

vector3 Function_41(bool bParam0) //Position: 0x2829 / 10281
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

void Function_42(vector3 vParam0, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7, bool bParam8) //Position: 0x2895 / 10389
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
	else if (!Function_69(StackVal, StackVal, vParam0))
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
			Function_68(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_67(0);
		}
		if (bParam8)
		{
			Function_65(0, GET_THIS_SCRIPT_ID());
			Global_3373 = GET_THIS_SCRIPT_ID();
			Function_63(iParam4);
			Global_3401 = 1;
		}
		Function_61(iParam4);
		if (Function_60(StackVal, 32768))
		{
			Function_57(1);
		}
		Global_16876[iParam46].f_12++;
		Function_43(408, 1, 0, 0);
	}
}

int Function_43(int iParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x299C / 10652
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
	Function_56(iParam0, TO_FLOAT(bParam1), 1);
	Function_55(iParam0);
	if (uParam2 && bParam1 == 0)
	{
		Function_44(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, uParam3);
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

void Function_44(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x2BBC / 11196
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_54(390))), 32);
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
					bVar19 = (Function_53(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_53(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_51(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_48(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_46(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_45(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_151(), &Var9);
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

var Function_45(int iParam0) //Position: 0x31E9 / 12777
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_46(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x31FA / 12794
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_47("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_47("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_47("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_47(char* cParam0, bool bParam1) //Position: 0x32EF / 13039
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_48(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x3308 / 13064
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_50(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_49(Function_50(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_49(int iParam0, int iParam1) //Position: 0x336D / 13165
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_50(int iParam0, int iParam1) //Position: 0x337F / 13183
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_51(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x3391 / 13201
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
	if (((Function_52(iParam0) != 19 || Function_52(iParam0) != 17) || Function_52(iParam0) != 10) || Function_52(iParam0) != 9)
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

int Function_52(int iParam0) //Position: 0x34C1 / 13505
{
	return Global_35278[iParam020].f_48;
}

float Function_53(int iParam0) //Position: 0x34D0 / 13520
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_54(int iParam0) //Position: 0x3509 / 13577
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_55(int iParam0) //Position: 0x3546 / 13638
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

int Function_56(int iParam0, float fParam1, bool bParam2) //Position: 0x36E0 / 14048
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

void Function_57(bool bParam0) //Position: 0x3924 / 14628
{
	if (bParam0)
	{
		Function_59(0x10000000);
	}
	else
	{
		Function_58(0x10000000);
	}
	Global_26316.f_172 = 0;
	return;
}

void Function_58(int iParam0) //Position: 0x3948 / 14664
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_59(int iParam0) //Position: 0x3965 / 14693
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

bool Function_60(var uParam0, int iParam1) //Position: 0x3978 / 14712
{
	return (uParam0 && iParam1) == 0;
}

void Function_61(int iParam0) //Position: 0x3985 / 14725
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (!Function_12(StackVal, 524288))
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
			bVar1 = Function_62(iVar0 * 60);
			ADD_TIME(&Global_17483[iParam075] + 264, 0, 0, bVar1, 0);
			Global_16876[iParam06] = Global_17483[iParam075].f_264;
		}
	}
	return;
}

int Function_62(int iParam0) //Position: 0x3A29 / 14889
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_63(int iParam0) //Position: 0x3A3F / 14911
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
	Function_64(&Var0 + 80[Var0.f_763], &(Global_16876[iParam06]), iParam0);
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

void Function_64(var uParam0, var uParam1, int iParam2) //Position: 0x3ADD / 15069
{
	uParam0->f_4 = iParam2;
	*uParam0 = uParam1->f_12;
	uParam0->f_8 = 1;
	return;
}

void Function_65(int iParam0, int iParam1) //Position: 0x3AF5 / 15093
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
			Function_66(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_66(int iParam0) //Position: 0x3B77 / 15223
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

void Function_67(int iParam0) //Position: 0x3BC5 / 15301
{
	Global_12976.f_76 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 76, 0, 0, (iParam0 + Function_62(900)), 0);
	return;
}

void Function_68(int iParam0) //Position: 0x3BE7 / 15335
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, (iParam0 + Function_62(200)), 0);
	return;
}

bool Function_69(vector3 vParam0) //Position: 0x3C08 / 15368
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_70() //Position: 0x3C20 / 15392
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_71(var uParam0, int iParam1) //Position: 0x3C29 / 15401
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_72(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, float fParam6) //Position: 0x3C38 / 15416
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
	Function_81(GET_OBJECT_FROM_GRINGO(bParam0));
	if (bParam4 == 4294967295)
	{
		bVar10 = false;
		Function_75(Global_34573, &uVar3, &bVar10);
		if (bVar10 >= 0)
		{
			PRINTINT(bVar10);
			iVar11 = RAND_INT_RANGE(0, (bVar10 - 1));
			PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(uVar3[iVar11]));
			bParam4 = Function_74(Global_34573, uVar3[iVar11]);
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
		bParam4 = Function_74(Global_34573, bParam4);
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
		bParam5 = Function_73();
	}
	DECOR_SET_INT(GET_OBJECT_FROM_GRINGO(bParam0), "GiveItem", bParam5);
}

int Function_73() //Position: 0x3D98 / 15768
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

int Function_74(bool bParam0, int iParam1) //Position: 0x3DF4 / 15860
{
	int iVar0;
	
	iVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(bParam0, iParam1);
	return iVar0;
}

void Function_75(bool bParam0, var uParam1, int iParam2) //Position: 0x3E05 / 15877
{
	*iParam2 = 0;
	if (Function_74(bParam0, 39) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(bParam0, 6, 1) > _GET_MAX_AMMO_AMOUNT(bParam0, 6))
		{
			(*uParam1)[*iParam2] = 39;
			*iParam2++;
		}
	}
	if (Function_74(bParam0, 41) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(bParam0, 8, 1) > _GET_MAX_AMMO_AMOUNT(bParam0, 8))
		{
			(*uParam1)[*iParam2] = 41;
			*iParam2++;
		}
	}
	if (Function_74(bParam0, 40) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(bParam0, 7, 1) > _GET_MAX_AMMO_AMOUNT(bParam0, 7))
		{
			(*uParam1)[*iParam2] = 40;
			*iParam2++;
		}
	}
	if (Function_74(bParam0, 42) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(bParam0, 9, 1) > _GET_MAX_AMMO_AMOUNT(bParam0, 9))
		{
			(*uParam1)[*iParam2] = 42;
			*iParam2++;
		}
	}
	if (Function_74(bParam0, 43) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(bParam0, 10, 1) > _GET_MAX_AMMO_AMOUNT(bParam0, 10))
		{
			(*uParam1)[*iParam2] = 43;
			*iParam2++;
		}
	}
	if (Function_74(bParam0, 44) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(bParam0, 11, 1) > _GET_MAX_AMMO_AMOUNT(bParam0, 11))
		{
			(*uParam1)[*iParam2] = 44;
			*iParam2++;
		}
	}
	return;
}

void Function_76(var uParam0, var uParam1, var uParam2, float fParam3, vector3 vParam4) //Position: 0x3F25 / 16165
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
		if (Function_77(StackVal, StackVal, Global_30616, "player_herb", &uVar0, 20.0f, 5, vParam4) >= 0)
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

int Function_77(bool bParam0, bool bParam1, var uParam2, float fParam3, int iParam4, vector3 vParam5) //Position: 0x3FC6 / 16326
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

void Function_78(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x405C / 16476
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_79(*uParam0), iParam2, iParam3, iParam4);
	}
}

var Function_79(int iParam0) //Position: 0x4080 / 16512
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

void Function_80(bool bParam0) //Position: 0x45D3 / 17875
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

void Function_81(bool bParam0) //Position: 0x45F9 / 17913
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

void Function_82(bool bParam0, bool bParam1) //Position: 0x462D / 17965
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_INT(bParam0, "honor", bParam1);
	return;
}

void Function_83(bool bParam0) //Position: 0x464D / 17997
{
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam0, 0);
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bParam0, 0);
	MEMORY_ATTACK_ON_SIGHT(bParam0, 0);
	SET_ACTOR_CAN_PLAY_GESTURES(bParam0, false);
	AI_SET_ALLOW_ATTACK_HOGTIED_ACTORS(bParam0, 1);
	return;
}

var Function_84(var uParam0, bool bParam1, var uParam2, vector3 vParam3, vector3 vParam6, int iParam9) //Position: 0x4677 / 18039
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
				if (Function_85())
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

bool Function_85() //Position: 0x47C0 / 18368
{
	return NET_IS_MANAGER_INITIALIZED();
}

float Function_86() //Position: 0x47C9 / 18377
{
	float fVar0;
	int iVar1;
	
	if (Global_3371)
	{
		return 0.0f;
	}
	Function_27(&fVar0, &iVar1);
	if (fVar0 >= 50.0f)
	{
		return (fVar0 - 10.0f);
	}
	return (fVar0 - 20.0f);
}

bool Function_87(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x47FA / 18426
{
	struct<8> Var0;
	bool bVar8;
	bool bVar9;
	
	if (Global_3371 && iParam0->f_32)
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_125(GET_SCRIPT_NAME()) };
		bVar8 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Global_26150, &Var0, 4.203895E-45f, Function_123(*(iParam0 + 8), 0.0f, Global_34573, *(iParam0 + 8)), 0.0f, iParam0->f_52, 20.0f, iParam0->f_52);
		DECOR_SET_INT(bVar8, "script", GET_THIS_SCRIPT_ID());
		if (iParam0->f_56 != 4294967295)
		{
			DECOR_SET_INT(StackVal, bVar8, "category");
			Function_121(&bVar8, iParam0->f_32);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
		*(iParam0 + 8) = { StackVal, StackVal, Global_34574 };
		return 1;
	}
	*uParam3 = 0;
	if (!Function_88(iParam0))
	{
		if (iParam0->f_32 == 1)
		{
			if (*uParam2 == 0)
			{
				Function_9("Still scanning for the proper terrain to run this event.  Move the player around to find a good spawn location.", -1.0f, 1, 2, 1, 0);
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
		Function_9("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 5.0f, 1, 2, 1, 0);
	}
	if (bParam4)
	{
		if (!Function_7(iParam0->f_56, 0, 1, 0, 0))
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
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_125("restrictVol") };
		bVar9 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Global_26150, &Var0, 4.203895E-45f, Function_123(*(iParam0 + 8), 0.0f, Global_34573, *(iParam0 + 8)), 0.0f, iParam0->f_52, 20.0f, iParam0->f_52);
		DECOR_SET_INT(bVar9, "script", GET_THIS_SCRIPT_ID());
		if (iParam0->f_56 != 4294967295)
		{
			DECOR_SET_INT(StackVal, bVar9, "category");
			Function_121(&bVar9, iParam0->f_32);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
	}
	return 1;
}

bool Function_88(int iParam0) //Position: 0x4B8C / 19340
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	float fVar12;
	float fVar13;
	int iVar14;
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
			Function_120(iParam0 + 4);
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
				vVar3 = { 0.0f, 0.0f, Function_26(1) };
				ROTATE_VECTOR_XZ(&vVar3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar3, StackVal) };
				ITERATE_IN_SPHERE(StackVal, vVar3, Function_26(1));
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
						bVar0 = Function_119(StackVal, StackVal, StackVal, vVar9, 0.01f);
					}
					else
					{
						bVar0 = Function_118(StackVal, StackVal, StackVal, vVar9, 0.1f, "locflag", (iParam0 + 64 + 24)->f_16);
					}
				}
				else if ((iParam0 + 64 + 24)->f_16 == 0)
				{
					bVar0 = Function_117(StackVal, StackVal, StackVal, vVar9, Function_86());
				}
				else
				{
					bVar0 = Function_116(StackVal, StackVal, StackVal, vVar9, Function_86(), "locflag", (iParam0 + 64 + 24)->f_16);
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
			Function_120(iParam0 + 4);
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
					iVar14 = DECOR_GET_INT(bVar1, "regid");
					if (Function_115(iVar14))
					{
						if (StackVal == (iParam0 + 64)->f_48)
						{
							if ((StackVal && Global_29008[iVar14]) >= 0)
							{
								GET_OBJECT_POSITION(bVar1, &vVar3);
								if (VDIST(vVar9, vVar3) < fVar13 && VDIST(vVar9, vVar3) > Function_26(1))
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
				Function_114(iParam0 + 8, 99.0f, iParam0 + 8, 10);
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
				Function_113(&vVar9, &vVar6);
				vVar3 = { StackVal, StackVal, Function_113(&vVar9, &vVar6) };
				if (!Function_69(StackVal, StackVal, vVar3))
				{
					PRINTSTRING("Player Pos: ");
					PRINTVECTOR(vVar9);
					PRINTNL();
					Function_27(&fVar13, &fVar12);
					if (VDIST(vVar3, vVar9) < ((fVar13 + ((fVar12 - fVar13) / 2.0f)) * 0.8f))
					{
						iVar2 = Function_110(StackVal, StackVal, iParam0, vVar3);
					}
				}
			}
			else
			{
				iVar2 = Function_106(iParam0);
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
					if (!Function_105(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (iParam0->f_60 == 1)
				{
					if (!Function_104(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (Function_12(StackVal, 131072))
				{
					if (StackVal || Function_103(StackVal, Function_103(StackVal, StackVal, *(iParam0 + 8)), Global_34574))
					{
						return 0;
					}
				}
				if (StackVal & 1024 == 1024)
				{
					if (Function_102(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (!Function_98(iParam0 + 8, iParam0 + 52, 0, iParam0->f_32))
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
				uVar23 = START_CURVE_QUERY(Global_28841, vVar3, Function_97((iParam0 + 64)->f_120, 0), 0.0f, 20.0f, 5.0f, 0);
			}
			else
			{
				uVar23 = START_CURVE_QUERY(Global_28841, vVar9, Function_97((iParam0 + 64)->f_120, 0), 120.0f, 150.0f, 5.0f, 0);
			}
			if (GET_NUM_POINTS_IN_CURVE_QUERY(uVar23) >= 0)
			{
				iVar21 = RAND_INT_RANGE(0, (GET_NUM_POINTS_IN_CURVE_QUERY(uVar23) - 1));
				GET_POINT_FROM_CURVE_QUERY(uVar23, iVar21, &Var15);
				Function_96(&Var15);
				*(iParam0 + 8) = { StackVal, StackVal, Function_96(&Var15) };
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
				if (!Function_105(StackVal, StackVal, *(iParam0 + 8)))
				{
					return 0;
				}
			}
			if (iParam0->f_60 == 1)
			{
				if (!Function_104(StackVal, StackVal, *(iParam0 + 8)))
				{
					return 0;
				}
			}
			if (iParam0->f_60 == 0)
			{
				if (!(StackVal || Function_105(StackVal, Function_104(StackVal, StackVal, *(iParam0 + 8)), *(iParam0 + 8))))
				{
					return 0;
				}
			}
			if (Function_12(StackVal, 131072))
			{
				if (StackVal || Function_103(StackVal, Function_103(StackVal, StackVal, *(iParam0 + 8)), Global_34574))
				{
					return 0;
				}
			}
			if (StackVal && !Function_98(iParam0 + 8, iParam0 + 52, 0, iParam0->f_32) == 262144)
			{
				return 0;
			}
			break;
		
		case 0x00000004:
			if (!Function_93((iParam0 + 64)->f_120) < 0)
			{
				return 0;
			}
			break;
		
		case 0x00000007:
			switch ((iParam0 + 64)->f_128)
			{
				case 0x00000001:
					bVar24 = Function_90(StackVal, Global_29004, Global_29005, Global_29006, 1);
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
						bVar24 = Function_90(StackVal, Global_29004, Global_29005, (Global_29006 + iVar22), 1);
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
	if (Function_89(StackVal, StackVal, *(iParam0 + 8)))
	{
		return 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(*(iParam0 + 8), 10.0f))
	{
		return 0;
	}
	return 1;
}

bool Function_89(vector3 vParam0) //Position: 0x53B6 / 21430
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= GET_OBJECTSET_SIZE(Global_25964))
	{
		if (IS_POINT_IN_VOLUME(vParam0, GET_VOLUME_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(iVar0, Global_25964))))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool Function_90(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x53EB / 21483
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
								return Function_91(&Global_6298, &Global_7189, bParam3);
								break;
							
							case 0x00000001:
								return Function_91(&Global_6364, &Global_7287, bParam3);
								break;
							
							case 0x00000002:
								return Function_91(&Global_6351, &Global_7268, bParam3);
								break;
							
							default:
								return Function_91(&Global_6391, &Global_7327, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_91(&Global_6501, &Global_7490, bParam3);
								break;
							
							case 0x00000001:
								return Function_91(&Global_6402, &Global_7343, bParam3);
								break;
							
							case 0x00000003:
								return Function_91(&Global_6433, &Global_7389, bParam3);
								break;
							
							case 0x00000002:
								return Function_91(&Global_6490, &Global_7474, bParam3);
								break;
							
							case 0x00000004:
								return Function_91(&Global_6537, &Global_7543, bParam3);
								break;
							
							default:
								return Function_91(&Global_6532, &Global_7536, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_91(&Global_6563, &Global_7581, bParam3);
								break;
							
							case 0x00000001:
								return Function_91(&Global_6614, &Global_7657, bParam3);
								break;
							
							case 0x00000002:
								return Function_91(&Global_6643, &Global_7700, bParam3);
								break;
							
							default:
								return Function_91(&Global_6550, &Global_7562, bParam3);
								break;
						}
						break;
					
					case 0x00000003:
						switch (bVar1)
						{
							case 0x00000001:
								return Function_91(&Global_6667, &Global_7735, bParam3);
								break;
							
							default:
								return Function_91(&Global_6704, &Global_7790, bParam3);
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
								return Function_91(&Global_6709, &Global_7797, bParam3);
								break;
							
							case 0x00000001:
								return Function_91(&Global_6764, &Global_7879, bParam3);
								break;
							
							case 0x00000002:
								return Function_91(&Global_6785, &Global_7910, bParam3);
								break;
							
							default:
								return Function_91(&Global_6810, &Global_7947, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_91(&Global_6815, &Global_7954, bParam3);
								break;
							
							default:
								return Function_91(&Global_6928, &Global_8122, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000002:
								return Function_91(&Global_6933, &Global_8129, bParam3);
								break;
							
							case 0x00000001:
								return Function_91(&Global_6962, &Global_8172, bParam3);
								break;
							
							case 0x00000003:
								return Function_91(&Global_6987, &Global_8209, bParam3);
								break;
							
							default:
								return Function_91(&Global_7027, &Global_8268, bParam3);
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
		return Function_91(&Global_6298, &Global_7189, bParam3);
	}
	if (bVar1 == Global_30640[1])
	{
		return Function_91(&Global_6364, &Global_7287, bParam3);
	}
	if (bVar1 == Global_30640[2])
	{
		return Function_91(&Global_6351, &Global_7268, bParam3);
	}
	if (bVar1 == Global_30658[0])
	{
		return Function_91(&Global_6501, &Global_7490, bParam3);
	}
	if (bVar1 == Global_30658[1])
	{
		return Function_91(&Global_6402, &Global_7343, bParam3);
	}
	if (bVar1 == Global_30658[3])
	{
		return Function_91(&Global_6433, &Global_7389, bParam3);
	}
	if (bVar1 == Global_30658[2])
	{
		return Function_91(&Global_6490, &Global_7474, bParam3);
	}
	if (bVar1 == Global_30658[4])
	{
		return Function_91(&Global_6537, &Global_7543, bParam3);
	}
	if (bVar1 == Global_30668[0])
	{
		return Function_91(&Global_6563, &Global_7581, bParam3);
	}
	if (bVar1 == Global_30668[1])
	{
		return Function_91(&Global_6614, &Global_7657, bParam3);
	}
	if (bVar1 == Global_30668[2])
	{
		return Function_91(&Global_6643, &Global_7700, bParam3);
	}
	if (bVar1 == Global_30679[1])
	{
		return Function_91(&Global_6667, &Global_7735, bParam3);
	}
	if (bVar1 == Global_30685[0])
	{
		return Function_91(&Global_6709, &Global_7797, bParam3);
	}
	if (bVar1 == Global_30685[1])
	{
		return Function_91(&Global_6764, &Global_7879, bParam3);
	}
	if (bVar1 == Global_30685[2])
	{
		return Function_91(&Global_6785, &Global_7910, bParam3);
	}
	if (bVar1 == Global_30693[0])
	{
		return Function_91(&Global_6815, &Global_7954, bParam3);
	}
	if (bVar1 == Global_30707[2])
	{
		return Function_91(&Global_6933, &Global_8129, bParam3);
	}
	if (bVar1 == Global_30707[1])
	{
		return Function_91(&Global_6962, &Global_8172, bParam3);
	}
	if (bVar1 == Global_30707[3])
	{
		return Function_91(&Global_6987, &Global_8209, bParam3);
	}
	if (bVar1 == Global_30628[0])
	{
		return Function_91(&Global_6391, &Global_7327, bParam3);
	}
	if (bVar1 == Global_30628[1])
	{
		return Function_91(&Global_6532, &Global_7536, bParam3);
	}
	if (bVar1 == Global_30628[2])
	{
		return Function_91(&Global_6550, &Global_7562, bParam3);
	}
	if (bVar1 == Global_30628[3])
	{
		return Function_91(&Global_6704, &Global_7790, bParam3);
	}
	if (bVar1 == Global_30633[0])
	{
		return Function_91(&Global_6810, &Global_7947, bParam3);
	}
	if (bVar1 == Global_30633[2])
	{
		return Function_91(&Global_6928, &Global_8122, bParam3);
	}
	if (bVar1 == Global_30633[1])
	{
		return Function_91(&Global_7027, &Global_8268, bParam3);
	}
	return "";
}

var Function_91(var uParam0, var uParam1, bool bParam2) //Position: 0x5A00 / 23040
{
	int iVar0;
	
	iVar0 = bParam2;
	if (iVar0 <= *uParam0 || iVar0 > 0)
	{
		return "";
	}
	if (!Function_92(uParam0[iVar02], 2))
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

bool Function_92(var uParam0, int iParam1) //Position: 0x5A52 / 23122
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_93(int iParam0) //Position: 0x5A6E / 23150
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
			if (Function_94(GET_SQUAD_FROM_OBJECT(bVar2)) == iParam0)
			{
				iVar0++;
			}
			bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
		}
	}
	DESTROY_ITERATOR(bVar1);
	return iVar0;
}

int Function_94(bool bParam0) //Position: 0x5AC9 / 23241
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 4294967295;
	}
	bVar0 = Function_95(bParam0);
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

var Function_95(bool bParam0) //Position: 0x5B01 / 23297
{
	bool bVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return "";
	}
	iVar1 = 0;
	while (iVar1 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar0 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, iVar1);
		if (IS_ACTOR_VALID(bVar0) && IS_ACTOR_ALIVE(bVar0))
		{
			return bVar0;
		}
		iVar1++;
	}
	return "";
}

vector3 Function_96(int iParam0) //Position: 0x5B47 / 23367
{
	vector3 vVar0;
	
	vVar0.x = *iParam0;
	vVar0.f_4 = StackVal;
	vVar0.f_8 = StackVal;
	return StackVal, StackVal, vVar0;
}

int Function_97(int iParam0, int iParam1) //Position: 0x5B66 / 23398
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

bool Function_98(var uParam0, float fParam1, int iParam2, bool bParam3) //Position: 0x5B96 / 23446
{
	var uVar0;
	int iVar3;
	bool bVar4;
	float fVar5;
	int iVar6;
	
	if (bParam3)
	{
		return 1;
	}
	bVar4 = false;
	Function_100(4294967295);
	iVar3 = 0;
	while (iVar3 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			iVar6 = DECOR_GET_INT(StackVal, "category");
			if (iParam2 != 0)
			{
				if (iVar6 != iParam2 && iParam2 != 256)
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
			if (Global_3386 && iVar6 != 512)
			{
			}
			else if (Function_99(uParam0, &uVar0) > fVar5)
			{
				return 0;
			}
		}
		iVar3++;
	}
	return 1;
}

float Function_99(var uParam0, int iParam1) //Position: 0x5C66 / 23654
{
	vector3 vVar0;
	int iVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*iParam1, *uParam0, StackVal) };
	iVar3 = VMAG(vVar0);
	return iVar3;
}

int Function_100(bool bParam0) //Position: 0x5C84 / 23684
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
						Function_101(iVar0);
					}
					else if (Global_3386)
					{
						if (Function_28(StackVal, StackVal, Global_34573, vVar1) < 25.0f)
						{
							Function_101(iVar0);
						}
					}
					else if (Function_28(StackVal, StackVal, Global_34573, vVar1) < 55.0f)
					{
						Function_101(iVar0);
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
			Function_101(iVar0);
		}
		iVar0++;
	}
	return 0;
}

void Function_101(int iParam0) //Position: 0x5DE5 / 24037
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

bool Function_102(vector3 vParam0) //Position: 0x5E46 / 24134
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

int Function_103(vector3 vParam0) //Position: 0x5EE7 / 24295
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

bool Function_104(vector3 vParam0) //Position: 0x5F33 / 24371
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

bool Function_105(vector3 vParam0) //Position: 0x5F8C / 24460
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

int Function_106(int iParam0) //Position: 0x6009 / 24585
{
	float fVar0;
	int iVar1;
	
	Function_27(&fVar0, &iVar1);
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER_PLAYER();
	AMBIENT_SET_DISTANCE_FILTER(fVar0, iVar1);
	Function_109(0);
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
		Function_108(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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
	Function_107(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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

void Function_107(struct<33> Param0) //Position: 0x61A4 / 24996
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

void Function_108(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14) //Position: 0x62D0 / 25296
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

void Function_109(float fParam0) //Position: 0x6321 / 25377
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

int Function_110(int iParam0, vector3 vParam1) //Position: 0x6365 / 25445
{
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER(vParam1);
	if (Global_30842[34])
	{
		PRINTVECTOR(vParam1);
		PRINTNL();
	}
	Function_112();
	Function_109(0);
	Function_111(0);
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
		Function_108(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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
	Function_107(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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

void Function_111(bool bParam0) //Position: 0x6507 / 25863
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

void Function_112() //Position: 0x65BA / 26042
{
	AMBIENT_SET_DISTANCE_FILTER(0.0f, 24.0f);
	return;
}

vector3 Function_113(var uParam0, int iParam1) //Position: 0x65C9 / 26057
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
		Function_96(&iVar25);
		vVar19 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*uParam0, Function_96(&iVar25), StackVal) };
		Function_96(&iVar31);
		vVar22 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*uParam0, Function_96(&iVar31), StackVal) };
		fVar15 = VDOT(&vVar16, &vVar19);
		fVar14 = VDOT(&vVar16, &vVar22);
		Function_27(&fVar7, &fVar8);
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
			Function_96(&iVar31);
			vVar11 = { StackVal, StackVal, Function_96(&iVar31) };
		}
		else
		{
			UNK_0x19D652F9(bVar6, fVar9, &uVar0, &iVar25);
			Function_96(&iVar25);
			vVar11 = { StackVal, StackVal, Function_96(&iVar25) };
		}
	}
	UNK_0xDF93BD7C(uVar10);
	return StackVal, StackVal, vVar11;
}

int Function_114(var uParam0, float fParam1, int iParam2, int iParam3) //Position: 0x66D6 / 26326
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
		if (!Function_69(StackVal, StackVal, *iParam2))
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
			if (!Function_69(StackVal, StackVal, *iParam2))
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

bool Function_115(int iParam0) //Position: 0x6808 / 26632
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_116(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, var uParam6) //Position: 0x681E / 26654
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
						if (Function_98(&vVar5, &fVar4, 0, 0))
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

var Function_117(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x68C6 / 26822
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
				if (Function_98(&vVar5, &uVar4, 0, 0))
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

var Function_118(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, var uParam6) //Position: 0x694F / 26959
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

var Function_119(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x69E4 / 27108
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

int Function_120(int iParam0) //Position: 0x6A61 / 27233
{
	if (IS_ITERATOR_VALID(*iParam0))
	{
		ITERATE_EVERYWHERE(*iParam0);
		ITERATE_ON_PARTIAL_NAME(*iParam0, Function_151());
		ITERATE_ON_PARTIAL_MODEL_NAME(*iParam0, Function_151());
		ITERATE_ON_OBJECT_TYPE(*iParam0, 4294967295);
		return 1;
	}
	return 0;
}

int Function_121(bool bParam0, int iParam1) //Position: 0x6A92 / 27282
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
	Function_100(DECOR_GET_INT(*bParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
		}
		else
		{
			Function_122(iVar0, bParam0, &uVar1, iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(*bParam0);
	return 0;
}

void Function_122(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x6BF3 / 27635
{
	struct<8> Var0;
	
	Global_26155[iParam05].f_8 = *uParam1;
	Global_26155[iParam05].f_16 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_125("stayout") };
	Global_26155[iParam05].f_12 = CREATE_VOLUME_IN_LAYOUT(Global_26150, &Var0, 3, *iParam2, 0.0f, 0.0f, 0.0f, 12.0f, 5.0f, 12.0f);
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	if (bParam3)
	{
		Global_26155[iParam05].f_4 = ADD_BLIP_FOR_COORD(iParam2, 403, 0f, 2, 0);
		SET_BLIP_BLINK(StackVal, 1, 1, 20.0f);
	}
}

var Function_123(bool bParam0, vector3 vParam1) //Position: 0x6C8E / 27790
{
	vector3 vVar0;
	var uVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		GET_POSITION(bParam0, &vVar0);
		Function_124(StackVal, StackVal, StackVal, StackVal, vVar0, vParam1, &uVar3);
		return UNK_0x9C40E671(&uVar3);
	}
	return 0.0f;
}

void Function_124(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x6CBE / 27838
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

struct<32> Function_125(bool bParam0) //Position: 0x6CE1 / 27873
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_126("0", &cVar8, ""), 4);
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

struct<32> Function_126(char* cParam0, char* cParam1, char* cParam2) //Position: 0x6D4B / 27979
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_127(int iParam0) //Position: 0x6D6A / 28010
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_132();
	iVar1 = 0;
	if (!Function_4(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_131(iParam0[iVar03], 8);
		}
		else if (Function_130())
		{
			iVar1 = 1;
			Function_131(iParam0[iVar03], 8);
		}
		Function_131(iParam0[iVar03], 16);
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
				Function_131(iParam0[iVar03], 1);
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
							Function_131(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_131(iParam0[iVar03], 2);
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
							Function_131(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_131(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_131(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_131(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_131(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_131(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_131(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_131(iParam0[iVar03], 2);
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
	Function_128();
	return 1;
}

void Function_128() //Position: 0x70E5 / 28901
{
	if (!Function_129(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_129(int iParam0) //Position: 0x7125 / 28965
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_130() //Position: 0x7141 / 28993
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

void Function_131(var uParam0, int iParam1) //Position: 0x716C / 29036
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_132() //Position: 0x717D / 29053
{
	if (!Function_129(128))
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

void Function_133(bool bParam0) //Position: 0x71BF / 29119
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

void Function_134(var uParam0, int iParam1) //Position: 0x7201 / 29185
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_133(uParam0[iVar0]);
		iVar0++;
	}
	return;
}

void Function_135(int iParam0) //Position: 0x722E / 29230
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

void Function_136(var uParam0, int iParam1) //Position: 0x7271 / 29297
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_135(uParam0[iVar0]);
		iVar0++;
	}
	return;
}

bool Function_137(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x729E / 29342
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

void Function_138(var uParam0, var uParam1, var uParam2) //Position: 0x7306 / 29446
{
	vLocal_122 = { StackVal, StackVal, vLocal_122 };
	return;
}

void Function_139() //Position: 0x7314 / 29460
{
	return;
}

void Function_140(int iParam0) //Position: 0x731A / 29466
{
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(iParam0);
	return;
}

var Function_141(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x7325 / 29477
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
			Function_131(bParam0[iVar03], 4);
			if (bParam3)
			{
				Function_131(bParam0[iVar03], 8);
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

var Function_142(bool bParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x73F5 / 29685
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_143(bParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_131(bParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_143(var uParam0, int iParam1, int iParam2) //Position: 0x742D / 29741
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_4(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_131(uParam0[iVar03], 4);
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

bool Function_144() //Position: 0x74F1 / 29937
{
	return (RAND_INT_RANGE(0, 1999) / 1000) != 0;
}

int Function_145(int iParam0, int iParam1) //Position: 0x7504 / 29956
{
	int iVar0;
	
	iVar0 = (Global_16876[iParam06].f_12 % iParam1);
	return iVar0;
}

var Function_146(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x751A / 29978
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
		bVar0 = (bVar0 * (0.75f + ((TO_FLOAT(Function_148(5)) / 100.0f) * 0.5f)));
	}
	if (bParam3)
	{
		if (HAS_ITEM(Function_147(17), Global_34573))
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

var Function_147(bool bParam0) //Position: 0x761C / 30236
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

int Function_148(int iParam0) //Position: 0x770D / 30477
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

void Function_149(var uParam0, float fParam1) //Position: 0x774E / 30542
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_71(uParam0, 1);
	Function_150(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_150(var uParam0, var uParam1) //Position: 0x776F / 30575
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
	return;
}

var Function_151() //Position: 0x7782 / 30594
{
	var uVar0;
	
	return uVar0;
}

