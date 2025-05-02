//Decompiled with MagicRDR v1.0
//Function Count : 152
//Statics Count : 266
//Natives Count : 299
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
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46[1] = { 0 };
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50[1] = { 0 };
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 13;
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
	bool bLocal_109 = false;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	bool bLocal_124 = false;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	int iLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	struct<2> Local_135 = { 0, 0 } ;
	var uLocal_137 = 0;
	struct<2> Local_138 = { 0, 0 } ;
	var uLocal_140 = 0;
	struct<2> Local_141 = { 0, 0 } ;
	var uLocal_143 = 0;
	struct<2> Local_144 = { 0, 0 } ;
	var uLocal_146 = 0;
	struct<2> Local_147 = { 0, 0 } ;
	var uLocal_149 = 0;
	struct<2> Local_150 = { 0, 0 } ;
	var uLocal_152 = 0;
	struct<2> Local_153 = { 0, 0 } ;
	var uLocal_155 = 0;
	struct<2> Local_156 = { 0, 0 } ;
	var uLocal_158 = 0;
	float fLocal_159 = 0.0f;
	int iLocal_160 = 0;
	struct<2> Local_161 = { 0, 0 } ;
	var uLocal_163 = 0;
	struct<2> Local_164 = { 0, 0 } ;
	var uLocal_166 = 0;
	float fLocal_167 = 0.0f;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	int iLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	bool bLocal_175 = false;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	int iLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	struct<65> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	var uVar0;
	int iVar5;
	int iVar7;
	var uVar8;
	float fVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	bool bVar18;
	struct<2> Var19;
	
	iLocal_18 = 0;
	iLocal_19 = 0;
	iLocal_29 = 0;
	iLocal_30 = 0;
	iLocal_31 = 0;
	iLocal_32 = 0;
	iLocal_33 = 0;
	iLocal_42 = 0;
	bLocal_109 = false;
	iLocal_110 = 0;
	iLocal_111 = 0;
	iLocal_117 = 0;
	uLocal_118 = CREATE_LAYOUT(Function_151());
	iLocal_122 = 0;
	iLocal_123 = 0;
	Local_144 = Vector(0,44f, 0.0f, -2,08f);
	Local_147 = Vector(-1,32f, 0.0f, -2,2f);
	Local_150 = Vector(-2,32f, 0.0f, 0,44f);
	Local_153 = Vector(0,44f, 0.0f, 1,2f);
	Local_156 = Vector(-0,88f, 0.0f, -1.0f);
	fLocal_159 = 227,52f;
	iLocal_160 = 0;
	Local_161 = Vector(2,64f, 0.0f, -0,3f);
	Local_164 = Vector(0.0f, 289.0f, 0.0f);
	fLocal_167 = 18.0f;
	iLocal_172 = 0;
	bLocal_175 = false;
	if (Global_26652[ScriptParam_0.f_644].f_16 == 0)
	{
		iLocal_43 = 0;
	}
	else if ((Global_26652[ScriptParam_0.f_644].f_16 % 2) == 1)
	{
		iLocal_43 = 1;
	}
	else
	{
		iLocal_43 = 0;
	}
	Function_149(&uLocal_34, 0.0f);
	uVar0 = Function_146(0, 1, 1, 0, 0);
	iVar5 = 0;
	iVar7 = 0;
	fVar14 = 0.0f;
	switch (Global_43787)
	{
		case 0x00000000:
		case 0x00000002:
			iLocal_116 = Function_145(ScriptParam_0.f_64, 2);
			if (iLocal_116 == 0)
			{
				if (Function_144())
				{
					iLocal_54 = 39;
				}
				else
				{
					iLocal_54 = 168;
				}
			}
			else if (Function_144())
			{
				iLocal_54 = 9;
			}
			else
			{
				iLocal_54 = 176;
			}
			break;
		
		case 0x00000001:
			iLocal_116 = Function_145(ScriptParam_0.f_64, 2);
			if (iLocal_116 == 0)
			{
				iLocal_54 = 276;
			}
			else
			{
				iLocal_54 = 269;
			}
			break;
	}
	Function_142(&iLocal_55, "p_gen_noose03x", 0, 0);
	Function_141(&iLocal_55, iLocal_54, 3, 0);
	Function_141(&iLocal_55, 541, 3, 0);
	Function_141(&iLocal_55, 543, 3, 0);
	Function_142(&iLocal_55, "dead_ground_male", 5, 0);
	Function_142(&iLocal_55, "custom/dead_ground_male", 8, 0);
	Function_142(&iLocal_55, "crazy_hermit_waiving_over", 5, 0);
	Function_142(&iLocal_55, "custom/crazy_hermit_waiving_over", 8, 0);
	switch (iLocal_43)
	{
		case 0x00000000:
			Function_142(&iLocal_55, "$/tune/refGroups/campsiteSets/cam_canibal01x", 7, 0);
			Function_142(&iLocal_55, "$/content/DLC/ZombiePack/Gringos/DLC_Rand_Idle_Sit_Ground_Player", 1, 0);
			break;
		
		case 0x00000001:
			Function_142(&iLocal_55, "$/tune/refGroups/campsiteSets/cam_canibal02x", 7, 0);
			Function_142(&iLocal_55, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground_player", 1, 0);
			break;
	}
	Function_141(&iLocal_55, uLocal_50[0], 3, 0);
	Function_140(iLocal_54);
	Function_140(uLocal_50[0]);
	iVar16 = (RAND_INT_RANGE(0, 2999) / 1000);
	iVar15 = "DLC_cannibal_man";
	Function_142(&iLocal_55, &iVar15, 1, 0);
	Function_142(&iLocal_55, "Locked_Footlocker", 1, 0);
	if (Global_6625 == 1)
	{
		iLocal_42 = 5;
	}
	Function_139();
	iVar17 = 0;
	bVar18 = false;
	while (!IS_EXITFLAG_SET())
	{
		Function_138(StackVal, *(&ScriptParam_0 + 16));
		iLocal_129 = 600;
		if (iLocal_32 == 0)
		{
			if (Function_137(&bVar18, &iLocal_42, &iVar17, &iLocal_129, bLocal_109))
			{
				if (bVar18)
				{
					Function_136(&uLocal_46, 4294967295);
					Function_135(&bLocal_124);
				}
				else
				{
					Function_134(&uLocal_46, 4294967295);
					Function_133(&bLocal_124);
				}
			}
		}
		switch (iLocal_42)
		{
			case 0x00000000:
				if (Function_127(&iLocal_55))
				{
					uLocal_120 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &uLocal_118, "temp", &iVar15, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
					GRINGO_LOAD_ANIMATION_FOR_ACTOR_ENUM_EXT(GET_GRINGO_FROM_OBJECT(&uLocal_120), "UseCase1", "UseAnim", iLocal_54);
					iLocal_42 = 4;
					iLocal_129 = 0;
				}
				break;
			
			case 0x00000004:
				if (GRINGO_HAS_ANIMSET_LOADED_FOR_ACTOR_ENUM_EXT(GET_GRINGO_FROM_OBJECT(&uLocal_120), "UseCase1", "UseAnim", iLocal_54))
				{
					iLocal_42 = 1;
					iLocal_129 = 0;
				}
				break;
			
			case 0x00000001:
				if (Function_87(&ScriptParam_0, &iLocal_129, &iLocal_123, &iLocal_122, 1))
				{
					iLocal_42 = 2;
					iLocal_129 = 0;
				}
				else if (iLocal_122 == 1)
				{
					iLocal_42 = 5;
					iLocal_129 = 0;
				}
				break;
			
			case 0x00000002:
				if (VDIST(Global_54078, *(&ScriptParam_0 + 16)) > Function_86())
				{
					iLocal_42 = 5;
					iLocal_129 = 0;
					break;
				}
				uLocal_44 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uLocal_118, Function_151(), 4,203895E-45f, *(&ScriptParam_0 + 16), Vector(0.0f, 0.0f, 0.0f), Vector(30.0f, 15.0f, 30.0f));
				CLEAR_AMBIENT_OBJECTS_VOLUME(&uLocal_44, 15);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_44);
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_44);
				uLocal_38 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &uLocal_118, Function_151(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
				ATTACH_OBJECTS(StackVal, StackVal, &uLocal_38, &Global_54076, Function_151(), Vector(0.0f, 0,5f, -1.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
				switch (iLocal_43)
				{
					case 0x00000000:
						Function_85(StackVal, StackVal, &uLocal_118, Function_151(), "$/tune/refGroups/campsiteSets/cam_canibal01x", *(&ScriptParam_0 + 16), Vector(0.0f, 0.0f, 0.0f), 4294967295);
						break;
					
					case 0x00000001:
						Local_150 = Vector(-3.0f, -0,7f, 1,42f);
						Local_153 = Vector(1,14f, 0.0f, 0,94f);
						Local_144 = Vector(0,94f, 0.0f, 1,58f);
						Local_147 = Vector(-1,32f, 0.0f, -2,2f);
						Local_156 = Vector(-1,14f, 0.0f, -0,06f);
						fLocal_159 = 239,12f;
						fLocal_167 = 48,5f;
						Local_150 = Vector(0,18f, 0.0f, 1,94f);
						Local_164 = Vector(0.0f, 0.0f, 0.0f);
						Function_85(StackVal, StackVal, &uLocal_118, Function_151(), "$/tune/refGroups/campsiteSets/cam_canibal02x", *(&ScriptParam_0 + 16), Vector(0.0f, 0.0f, 0.0f), 4294967295);
						break;
				}
				CREATE_DECAL(Vector(StackVal, StackVal, StackVal) + Vector(Local_144, *(&ScriptParam_0 + 16), 0), 0,4f, 1, 1);
				CREATE_DECAL(Vector(StackVal, StackVal, StackVal) + Vector(Local_147, *(&ScriptParam_0 + 16), 0), 0,6f, 1, 1);
				switch (iLocal_43)
				{
					case 0x00000000:
						uLocal_40 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, StackVal, Vector("DLC_Rand_Idle_Sit_Ground_Player", &uLocal_118, StackVal) + Vector(Local_156, *(&ScriptParam_0 + 16), "DLC_Rand_Idle_Sit_Ground_Player"), Vector(0.0f, fLocal_159, 0.0f));
						break;
					
					case 0x00000001:
						uLocal_40 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, StackVal, Vector("Rand_Idle_Sit_Ground_Player", &uLocal_118, StackVal) + Vector(Local_156, *(&ScriptParam_0 + 16), "Rand_Idle_Sit_Ground_Player"), Vector(0.0f, fLocal_159, 0.0f));
						break;
				}
				PRINTVECTOR(*(&ScriptParam_0 + 16));
				PRINTNL();
				PRINTVECTOR(Global_54078);
				PRINTNL();
				Local_135 = Vector(StackVal, StackVal, StackVal) + Vector(Local_161, *(&ScriptParam_0 + 16), StackVal);
				Local_138 = Vector(0.0f, 0.0f, 0.0f);
				Local_141 = Vector(0.0f, 0.0f, 0.0f);
				FIND_GROUND_INTERSECTION(&Local_135, 2.0f, &Local_141, &Local_138);
				bLocal_124 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_151(), &uLocal_118, StackVal) + Vector(Local_153, *(&ScriptParam_0 + 16), iLocal_54), Vector(0.0f, fLocal_167, 0.0f));
				uLocal_27 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_151(), &bLocal_124, StackVal) + Vector(Local_153, *(&ScriptParam_0 + 16), &iVar15), Vector(0.0f, fLocal_167, 0.0f));
				DECOR_SET_BOOL(&bLocal_124, "criminal", 1);
				if (IS_OBJECT_VALID(&uVar8))
				{
					UNK_0x6745191B(StackVal, &uVar8, Vector(0.0f, 0.0f, 0.0f));
				}
				Function_84(&bLocal_124);
				Function_83(&bLocal_124, 0);
				Function_82(&bLocal_124);
				SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_ACTOR(&bLocal_124), 1,5f, 1, 1092616192);
				Function_81(&bLocal_124);
				GIVE_WEAPON_TO_ACTOR(&bLocal_124, 39, 0f, 1, 1);
				MEMORY_REPORT_POSITION_AUTO(&bLocal_124, &Global_54076, 1);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(&bLocal_124, 0);
				UNK_0x99AFD2D1(&bLocal_124, 1, 1);
				GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uLocal_27), 0);
				DESTROY_OBJECT(&uLocal_120);
				SNAP_OBJECT_TO_GROUND(&uLocal_27, 2.0f, 1, 1092616192);
				if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&uLocal_27)))
				{
					if (bLocal_175)
					{
						Function_79(&uLocal_176, 1, 0, 4294967295, 4294967295);
					}
					TASK_USE_GRINGO(&bLocal_124, GET_GRINGO_FROM_OBJECT(&uLocal_27), "UseCase1", 4294967295, 1);
					SNAP_ACTOR_TO_GRINGO(&bLocal_124, &uLocal_27, "UseCase1", 1, 0, 0);
				}
				Local_135 = Vector(StackVal, StackVal, StackVal) + Vector(Local_150, *(&ScriptParam_0 + 16), StackVal);
				Local_135.f_4 = (StackVal + 2.0f);
				Local_138 = Vector(0.0f, 0.0f, 0.0f);
				Var19 = Vector(0.0f, 0.0f, 0.0f);
				PRINTSTRING("Probe start pos");
				PRINTVECTOR(Local_135);
				PRINTSTRING("nProbe pos");
				PRINTVECTOR(Var19);
				Function_77(StackVal, &uLocal_130, &uLocal_131, &uLocal_132, 2,75f, *(&ScriptParam_0 + 16));
				Local_138.f_4 = 270.0f;
				PRINTVECTOR(Local_138);
				Local_141 = Vector(0.0f, 0.0f, 0.0f);
				FIND_GROUND_INTERSECTION(&Local_135, 4.0f, &Local_141, &Local_138);
				uLocal_112 = CREATE_GRINGO_IN_LAYOUT(&uLocal_118, Function_151(), "$/content/scripting/gringo/SimpleGringo/Locked_Footlocker", Local_141, Local_164);
				SNAP_OBJECT_TO_GROUND(&uLocal_112, 7.0f, 1, 1092616192);
				uLocal_114 = GET_GRINGO_FROM_OBJECT(&uLocal_112);
				Function_73(StackVal, &uLocal_114, Var19, 4294967295, 11, 0x3f800000);
				DECOR_SET_OBJECT(GET_OBJECT_FROM_GRINGO(&uLocal_114), "nboxOwnerA", &bLocal_124);
				Function_72(&uLocal_133, 1);
				iLocal_42 = 3;
				iLocal_129 = 0;
				break;
			
			case 0x00000003:
				Function_71();
				Function_42(StackVal, Function_71(), &bLocal_109, ScriptParam_0.f_64, &bLocal_124, 60, 0x42700000, 1);
				if (!Function_36(ScriptParam_0.f_64, &bLocal_124, &iLocal_110, &iLocal_111, 0, 1, 1, 1))
				{
					iLocal_42 = 5;
					iLocal_129 = 0;
					break;
				}
				if (GET_DEBUG_DRAW_STATE())
				{
					if (IS_ACTOR_VALID(&bLocal_124))
					{
						GET_POSITION(&bLocal_124, &uLocal_126);
						iLocal_129 = 0;
					}
				}
				if (!Function_34(&bLocal_124, 0))
				{
					iLocal_129 = 0;
					iLocal_42 = 5;
					break;
				}
				if (Function_31(&bLocal_124, &uLocal_134, &fVar14, uLocal_133, iLocal_29, 0x40400000))
				{
					Function_30(&Global_54076, &bLocal_124, "CannibalManHeadPlayer_msg01", "CannibalManHeadPlayer_msg01", 5, 60, 1, 1);
					iLocal_117 = 11;
					iLocal_29 = 1;
				}
				if (Function_28(StackVal, &Global_54076, *(&ScriptParam_0 + 16)) < Function_26(1))
				{
					iLocal_129 = 0;
					iLocal_42 = 5;
					break;
				}
				if (IS_ACTOR_VALID(&bLocal_124))
				{
					if (Function_28(StackVal, &bLocal_124, *(&ScriptParam_0 + 16)) < Function_26(1))
					{
						Function_24(&bLocal_124);
					}
					if (DECOR_CHECK_EXIST(&bLocal_124, "actorStolen") && !iLocal_29)
					{
						switch (iLocal_43)
						{
							case 0x00000000:
								CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&bLocal_124);
								Function_30(&bLocal_124, &Global_54076, "CannibalManEating_msg11", "CannibalManEating_msg11", 5, 60, 1, 1);
								break;
							
							case 0x00000001:
								CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&bLocal_124);
								Function_30(&bLocal_124, &Global_54076, "CannibalManHead_msg09", "CannibalManHead_msg09", 5, 60, 1, 1);
								break;
						}
						iLocal_117 = 11;
						iLocal_29 = 1;
					}
				}
				iLocal_129 = 0;
				if (IS_ACTOR_VALID(&bLocal_124))
				{
					if (Function_15(&iLocal_117))
					{
						iVar7 = 1;
						iLocal_42 = 5;
					}
				}
				else
				{
					iLocal_42 = 5;
				}
				break;
			
			case 0x00000005:
				iLocal_42 = 6;
				iLocal_129 = 0;
				break;
			
			case 0x00000006:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				iLocal_129 = 0;
				break;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(iLocal_129);
		}
	}
	Function_134(&uLocal_46, 4294967295);
	Function_133(&bLocal_124);
	Function_14(&uLocal_130, &uLocal_131, &uLocal_132);
	Function_13(iLocal_54);
	Function_13(uLocal_50[0]);
	Function_24(&bLocal_124);
	Function_24(&(uLocal_46[0]));
	if (DECOR_CHECK_EXIST(&Global_54076, "Vomit"))
	{
		DECOR_REMOVE(&Global_54076, "Vomit");
	}
	if (!bLocal_109)
	{
		Function_7(ScriptParam_0.f_64, 0.0f, 0, 1, 0);
		if (IS_OBJECT_VALID(&uLocal_118))
		{
			Function_6(&bLocal_124);
			Function_5(&uLocal_46, 4294967295);
			UNK_0xA936E73B(&uLocal_118, 1);
			MARK_OBJECT_FOR_AGGRESSIVE_CLEANUP(&uLocal_118, 1);
		}
	}
	else if (iVar7 != 0 && iLocal_29 != 0)
	{
		Function_5(&uLocal_46, 4294967295);
		if (IS_ACTOR_VALID(&bLocal_124))
		{
			RESET_ANIM_SET_FOR_ACTOR(&bLocal_124, 0);
		}
		if (bLocal_175)
		{
			Function_79(&uLocal_176, 1, 0, 4294967295, 4294967295);
		}
		Function_6(&bLocal_124);
	}
	if (Function_34(&bLocal_124, 0))
	{
		Function_24(&bLocal_124);
		AI_SPEECH_SET_ALLOW_FOR_ACTOR(&bLocal_124, 1);
		UNK_0x99AFD2D1(&bLocal_124, 0, 0);
	}
	if (ScriptParam_0.f_40)
	{
		Global_6642 = 0;
	}
	if (bLocal_175)
	{
		Function_79(&uLocal_176, 1, 0, 4294967295, 4294967295);
	}
	if (bLocal_175)
	{
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	}
	if (IS_OBJECT_VALID(&uVar8))
	{
		UNK_0xE18028C1(&uVar8);
		DESTROY_OBJECT(&uVar8);
	}
	if (iLocal_30 == 1)
	{
		AUDIO_ENABLE_PLAYER_TAUNTS();
		iLocal_30 = 0;
	}
	if (IS_VOLUME_VALID(&uLocal_44))
	{
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_44);
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_44);
	}
	Function_1(&iLocal_55);
	UNK_0xA936E73B(&uLocal_118, 1);
	RELEASE_LAYOUT_REF(&uLocal_118);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0xD72 / 3442
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

void Function_2(struct<2>[] Param0, int iParam1) //Position: 0xD9A / 3482
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

void Function_3(struct<13> Param0) //Position: 0xEE5 / 3813
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_4(struct<13> Param0) //Position: 0xF02 / 3842
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(var[] uParam0, int iParam1) //Position: 0xF20 / 3872
{
	int iVar0;
	
	if (&iParam1 == 4294967295)
	{
		iParam1 = uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= &iParam1)
	{
		Function_6(&(uParam0[iVar0]));
		iVar0++;
	}
	return;
}

void Function_6(bool bParam0) //Position: 0xF52 / 3922
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		RESET_ANIM_SET_FOR_ACTOR(&bParam0, 0);
		TASK_FLEE_ACTOR(&bParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
		TASK_PRIORITY_SET(&bParam0, false);
	}
	return;
}

bool Function_7(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xF82 / 3970
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
		Function_9("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
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
			Function_8(&bVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_8(&bVar0);
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
			Function_8(&bVar0);
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

void Function_8(bool bParam0) //Position: 0x11EE / 4590
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

void Function_9(var uParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1238 / 4664
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_10(Global_10966) };
		}
		PRINT_SMALL_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &Var0, &iParam5);
	}
	else
	{
		uVar4 = "";
		PRINT_SMALL_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &uVar4, &iParam5);
	}
}

struct<16> Function_10(int iParam0) //Position: 0x12BD / 4797
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

bool Function_11() //Position: 0x12FC / 4860
{
	if (Function_12(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_12(int iParam0, int iParam1) //Position: 0x1317 / 4887
{
	return (iParam0 && iParam1) == 0;
}

void Function_13(int iParam0) //Position: 0x1324 / 4900
{
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(iParam0);
	return;
}

void Function_14(var uParam0, var uParam1, int iParam2) //Position: 0x132F / 4911
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

bool Function_15(int iParam0) //Position: 0x1362 / 4962
{
	var uVar0;
	
	GET_POSITION(&bLocal_124, &uVar0);
	switch (iParam0)
	{
		case 0x00000000:
			if (iLocal_31 == 0)
			{
				if (Function_23(&Global_54076, &bLocal_124) > 20.0f || CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &bLocal_124, 1.0f, 20.0f, 1, 1, 0))
				{
					switch (iLocal_43)
					{
						case 0x00000000:
							if (!IS_AMBIENT_SPEECH_PLAYING(&bLocal_124))
							{
								ADD_BLIP_FOR_ACTOR(&bLocal_124, 325, 0, 2, 0);
								Function_30(&bLocal_124, &Global_54076, "CannibalManEating_msg02", "CannibalManEating_msg02", 5, 60, 1, 1);
								Function_149(&uLocal_179, 0.0f);
								iParam0 = 1;
							}
							break;
						
						case 0x00000001:
							if (!IS_AMBIENT_SPEECH_PLAYING(&bLocal_124))
							{
								ADD_BLIP_FOR_ACTOR(&bLocal_124, 325, 0, 2, 0);
								Function_30(&bLocal_124, &Global_54076, "CannibalManHead_msg01", "CannibalManHead_msg01", 5, 60, 1, 1);
								Function_149(&uLocal_179, 0.0f);
								iParam0 = 1;
							}
							break;
						}
					}
			}
			break;
		
		case 0x00000001:
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &bLocal_124, 1.0f, 55.0f, 1, 0, 0))
			{
				if (!IS_AMBIENT_SPEECH_PLAYING(&bLocal_124))
				{
					switch (iLocal_43)
					{
						case 0x00000000:
							if (Function_19(&uLocal_179, 8.0f))
							{
								Function_30(&bLocal_124, &Global_54076, "CannibalManEating_msg03", "CannibalManEating_msg03", 5, 60, 1, 1);
								Function_149(&uLocal_179, 0.0f);
								iParam0 = 5;
							}
							break;
						
						case 0x00000001:
							if (Function_19(&uLocal_179, 8.0f))
							{
								DECOR_SET_BOOL(&bLocal_124, "Eating_Done", 1);
								Function_149(&uLocal_179, 0.0f);
								iParam0 = 4;
							}
							break;
						}
					}
			}
			break;
		
		case 0x00000004:
			if (Function_23(&Global_54076, &bLocal_124) > 45.0f)
			{
				Function_18(&bLocal_124);
			}
			break;
		
		case 0x00000005:
			if (GET_CURRENT_GRINGO(&Global_54076) == GET_GRINGO_FROM_OBJECT(&uLocal_40))
			{
				Function_149(&uLocal_183, 0.0f);
				iParam0 = 8;
			}
			if (Function_19(&uLocal_179, 12.0f) && !IS_AMBIENT_SPEECH_PLAYING(&bLocal_124))
			{
				Function_30(&bLocal_124, &Global_54076, "CannibalManEating_msg04", "CannibalManEating_msg04", 5, 60, 1, 1);
				Function_149(&uLocal_179, 0.0f);
				iParam0 = 6;
			}
			break;
		
		case 0x00000006:
			if (GET_CURRENT_GRINGO(&Global_54076) == GET_GRINGO_FROM_OBJECT(&uLocal_40))
			{
				Function_149(&uLocal_183, 0.0f);
				iParam0 = 8;
			}
			if (Function_23(&Global_54076, &bLocal_124) > 45.0f)
			{
				if (Function_19(&uLocal_179, 10.0f) && !IS_AMBIENT_SPEECH_PLAYING(&bLocal_124))
				{
					Function_30(&bLocal_124, &Global_54076, "CannibalManEating_msg09", "CannibalManEating_msg09", 5, 60, 1, 1);
					Function_149(&uLocal_179, 0.0f);
					iParam0 = 7;
				}
			}
			break;
		
		case 0x00000007:
			if (GET_CURRENT_GRINGO(&Global_54076) == GET_GRINGO_FROM_OBJECT(&uLocal_40))
			{
				Function_149(&uLocal_183, 0.0f);
				iParam0 = 8;
			}
			if (Function_23(&Global_54076, &bLocal_124) > 45.0f)
			{
				if (Function_19(&uLocal_179, 9.0f) && !IS_AMBIENT_SPEECH_PLAYING(&bLocal_124))
				{
					Function_30(&bLocal_124, &Global_54076, "CannibalManEating_msg10", "CannibalManEating_msg10", 5, 60, 1, 1);
					Function_149(&uLocal_179, 0.0f);
					iParam0 = 10;
				}
			}
			break;
		
		case 0x00000008:
			Function_17(&bLocal_124);
			if (GET_CURRENT_GRINGO(&Global_54076) == GET_GRINGO_FROM_OBJECT(&uLocal_40) && !IS_AMBIENT_SPEECH_PLAYING(&Global_54076))
			{
				iParam0 = 9;
				Function_30(&Global_54076, &bLocal_124, "CannibalManPlayer_msg01", "CannibalManPlayer_msg01", 5, 60, 1, 1);
			}
			else if ((Function_19(&uLocal_183, 16.0f) && !DECOR_CHECK_EXIST(&Global_54076, "Vomit")) && !IS_AMBIENT_SPEECH_PLAYING(&bLocal_124))
			{
				Function_149(&uLocal_179, 2.0f);
				DECOR_SET_BOOL(&Global_54076, "Vomit", 1);
				Function_30(&Global_54076, &bLocal_124, "CannibalManPlayer_msg02", "CannibalManPlayer_msg02", 5, 60, 1, 1);
			}
			break;
		
		case 0x00000009:
			break;
		
		case 0x0000000A:
			if (!IS_AMBIENT_SPEECH_PLAYING(&bLocal_124) || Function_19(&uLocal_179, 5.0f))
			{
				iParam0 = 11;
			}
			break;
		
		case 0x0000000B:
			Function_24(&bLocal_124);
			GRINGO_DEACTIVATE(GET_GRINGO_FROM_OBJECT(&uLocal_27));
			AI_QUICK_EXIT_GRINGO(&bLocal_124, 1);
			Function_16(&bLocal_124, &Global_54076);
			return 1;
			break;
	}
	return 0;
}

int Function_16(var uParam0, int iParam1) //Position: 0x1886 / 6278
{
	if (IS_ACTOR_HUMAN(&uParam0))
	{
		if (GET_NUM_WEAPONS_IN_INVENTORY(&uParam0) == 0)
		{
			TASK_FLEE_ACTOR(&uParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
			TASK_PRIORITY_SET(&uParam0, false);
			return 1;
		}
	}
	if (!IS_ACTOR_VALID(&uParam0))
	{
		LOG_ERROR("Killer is invalid in TASK_KILL_ACTOR_RUTHLESS");
		return 0;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		LOG_ERROR("VICTIM is invalid in TASK_KILL_ACTOR_RUTHLESS");
		return 0;
	}
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 31, -1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 37, 2.0f);
	MEMORY_ALLOW_TAKE_COVER(&uParam0, 0);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(&uParam0, 0);
	MEMORY_REPORT_POSITION_AUTO(&uParam0, &iParam1, 1);
	TASK_KILL_CHAR(&uParam0, &iParam1);
	TASK_PRIORITY_SET(&uParam0, true);
	return 1;
}

int Function_17(int iParam0) //Position: 0x197C / 6524
{
	if (iLocal_160 != 0 && !IS_AMBIENT_SPEECH_PLAYING(&iParam0))
	{
		if ((Function_19(&uLocal_179, 6.0f) && !IS_AMBIENT_SPEECH_PLAYING(&iParam0)) && !IS_AMBIENT_SPEECH_PLAYING(&Global_54076))
		{
			DECOR_SET_BOOL(&iParam0, "nSit_Still", 1);
			iLocal_160++;
			Function_149(&uLocal_179, 0.0f);
			Function_30(&iParam0, &Global_54076, "CannibalManEating_msg01", "CannibalManEating_msg01", 5, 60, 1, 1);
		}
	}
	else if (iLocal_160 != 1 && !IS_AMBIENT_SPEECH_PLAYING(&iParam0))
	{
		if ((Function_19(&uLocal_179, 7.0f) && !IS_AMBIENT_SPEECH_PLAYING(&iParam0)) && !IS_AMBIENT_SPEECH_PLAYING(&Global_54076))
		{
			iLocal_160++;
			Function_149(&uLocal_179, 0.0f);
			Function_30(&iParam0, &Global_54076, "CannibalManEating_msg05", "CannibalManEating_msg05", 5, 60, 1, 1);
		}
	}
	else if (iLocal_160 == 2)
	{
		if ((Function_19(&uLocal_179, 8.0f) && !IS_AMBIENT_SPEECH_PLAYING(&iParam0)) && !IS_AMBIENT_SPEECH_PLAYING(&Global_54076))
		{
			iLocal_160++;
			Function_149(&uLocal_179, 0.0f);
			Function_30(&iParam0, &Global_54076, "CannibalManEating_msg06", "CannibalManEating_msg06", 5, 60, 1, 1);
		}
	}
	else if (iLocal_160 == 3)
	{
		if ((Function_19(&uLocal_179, 10.0f) && !IS_AMBIENT_SPEECH_PLAYING(&iParam0)) && !IS_AMBIENT_SPEECH_PLAYING(&Global_54076))
		{
			iLocal_160++;
			Function_149(&uLocal_179, 0.0f);
			Function_30(&iParam0, &Global_54076, "CannibalManEating_msg07", "CannibalManEating_msg07", 5, 60, 1, 1);
		}
	}
	else if (iLocal_160 == 4)
	{
		if ((Function_19(&uLocal_179, 8.0f) && !IS_AMBIENT_SPEECH_PLAYING(&iParam0)) && !IS_AMBIENT_SPEECH_PLAYING(&Global_54076))
		{
			iLocal_160++;
			Function_149(&uLocal_179, 0.0f);
			Function_30(&iParam0, &Global_54076, "CannibalManEating_msg08", "CannibalManEating_msg08", 5, 60, 1, 1);
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_18(int iParam0) //Position: 0x1BF1 / 7153
{
	float fVar0;
	
	fVar0 = 0.0f;
	if (iLocal_172)
	{
		iLocal_160 = RAND_INT_RANGE_DIFFERENT(iLocal_188, 0, 6);
		fVar0 = 15.0f;
	}
	if (iLocal_160 != 0 && !IS_AMBIENT_SPEECH_PLAYING(&iParam0))
	{
		if ((Function_19(&uLocal_179, (8.0f + fVar0)) && !IS_AMBIENT_SPEECH_PLAYING(&iParam0)) && !IS_AMBIENT_SPEECH_PLAYING(&Global_54076))
		{
			iLocal_160++;
			iLocal_188 = 0;
			Function_149(&uLocal_179, 0.0f);
			Function_30(&iParam0, 0, "CannibalManHead_msg02", "CannibalManHead_msg02", 5, 60, 1, 1);
		}
	}
	else if (iLocal_160 != 1 && !IS_AMBIENT_SPEECH_PLAYING(&iParam0))
	{
		if ((Function_19(&uLocal_179, (8.0f + fVar0)) && !IS_AMBIENT_SPEECH_PLAYING(&iParam0)) && !IS_AMBIENT_SPEECH_PLAYING(&Global_54076))
		{
			iLocal_160++;
			iLocal_188 = 1;
			Function_149(&uLocal_179, 0.0f);
			Function_30(&iParam0, 0, "CannibalManHead_msg03", "CannibalManHead_msg03", 5, 60, 1, 1);
		}
	}
	else if (iLocal_160 == 2)
	{
		if ((Function_19(&uLocal_179, (8.0f + fVar0)) && !IS_AMBIENT_SPEECH_PLAYING(&iParam0)) && !IS_AMBIENT_SPEECH_PLAYING(&Global_54076))
		{
			iLocal_160++;
			iLocal_188 = 2;
			Function_149(&uLocal_179, 0.0f);
			Function_30(&iParam0, 0, "CannibalManHead_msg04", "CannibalManHead_msg04", 5, 60, 1, 1);
		}
	}
	else if (iLocal_160 == 3)
	{
		if ((Function_19(&uLocal_179, (8.0f + fVar0)) && !IS_AMBIENT_SPEECH_PLAYING(&iParam0)) && !IS_AMBIENT_SPEECH_PLAYING(&Global_54076))
		{
			iLocal_160++;
			iLocal_188 = 3;
			Function_149(&uLocal_179, 0.0f);
			Function_30(&iParam0, 0, "CannibalManHead_msg05", "CannibalManHead_msg05", 5, 60, 1, 1);
		}
	}
	else if (iLocal_160 == 4)
	{
		if ((Function_19(&uLocal_179, (8.0f + fVar0)) && !IS_AMBIENT_SPEECH_PLAYING(&iParam0)) && !IS_AMBIENT_SPEECH_PLAYING(&Global_54076))
		{
			iLocal_160++;
			iLocal_188 = 4;
			Function_149(&uLocal_179, 0.0f);
			Function_30(&iParam0, 0, "CannibalManHead_msg06", "CannibalManHead_msg06", 5, 60, 1, 1);
		}
	}
	else if (iLocal_160 == 5)
	{
		if ((Function_19(&uLocal_179, (8.0f + fVar0)) && !IS_AMBIENT_SPEECH_PLAYING(&iParam0)) && !IS_AMBIENT_SPEECH_PLAYING(&Global_54076))
		{
			iLocal_160++;
			iLocal_188 = 5;
			Function_149(&uLocal_179, 0.0f);
			Function_30(&iParam0, 0, "CannibalManHead_msg07", "CannibalManHead_msg07", 5, 60, 1, 1);
		}
	}
	else if (iLocal_160 == 6)
	{
		if ((Function_19(&uLocal_179, (7.0f + fVar0)) && !IS_AMBIENT_SPEECH_PLAYING(&iParam0)) && !IS_AMBIENT_SPEECH_PLAYING(&Global_54076))
		{
			iLocal_172 = 1;
			iLocal_160++;
			iLocal_188 = 6;
			Function_149(&uLocal_179, 0.0f);
			Function_30(&iParam0, 0, "CannibalManHead_msg08", "CannibalManHead_msg08", 5, 60, 1, 1);
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

bool Function_19(var uParam0, float fParam1) //Position: 0x1F56 / 8022
{
	if (Function_22(&uParam0))
	{
		if (Function_20(&uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_20(vector3 vParam0) //Position: 0x1F74 / 8052
{
	if (Function_22(&vParam0))
	{
		if (Function_21(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_21(int iParam0) //Position: 0x2041 / 8257
{
	return Function_12(iParam0, 2);
}

bool Function_22(int iParam0) //Position: 0x204F / 8271
{
	return Function_12(iParam0, 1);
}

float Function_23(var uParam0, int iParam1) //Position: 0x205D / 8285
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!IS_ACTOR_VALID(&uParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(&uParam0, &Var0);
	GET_POSITION(&iParam1, &Var2);
	return VDIST(Var0, Var2);
}

int Function_24(bool bParam0) //Position: 0x2152 / 8530
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		Function_25(&bParam0);
		return 1;
	}
	return 0;
}

void Function_25(var uParam0) //Position: 0x216A / 8554
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

float Function_26(bool bParam0) //Position: 0x219D / 8605
{
	var uVar0;
	float fVar1;
	
	if (!&bParam0)
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

void Function_27(float fParam0, int iParam1) //Position: 0x21D9 / 8665
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

float Function_28(int iParam0, struct<2> Param1) //Position: 0x226A / 8810
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		Function_29(&iParam0);
		Var0 = Function_29(&iParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

struct<8> Function_29(bool bParam0) //Position: 0x22E1 / 8929
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&bParam0))
	{
		GET_POSITION(&bParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID actor. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

void Function_30(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x234D / 9037
{
	iParam1 = &iParam1;
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_ALIVE(&uParam0) && Function_23(&uParam0, &Global_54076) >= IntToFloat(&iParam5))
		{
			if (!IS_ACTOR_VALID(&iParam1))
			{
				iParam1 = "";
			}
			CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&uParam0);
			if (&bParam6)
			{
				if (IS_ACTOR_HOGTIED(&uParam0))
				{
					if (!SAY_SINGLE_LINE_STRING_BEAT(&uParam0, &iParam2, &iParam1, 1, 1, &iParam4, &iParam7, 0, 0, 1))
					{
						bParam3 = &bParam3;
					}
				}
				else if (!SAY_SINGLE_LINE_STRING_BEAT(&uParam0, &iParam2, &iParam1, 1, 1, &iParam4, &iParam7, 0, 1, 1))
				{
					bParam3 = &bParam3;
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING(&uParam0, &iParam2, true, true, &iParam4, 0, false, true);
			}
		}
	}
}

bool Function_31(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, float fParam5) //Position: 0x23FA / 9210
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
		fVar0 = Function_23(&iParam0, &Global_54076);
		if (!Function_12(&iParam3, 8))
		{
			if (GET_LAST_ATTACKER(&iParam0) == &Global_54076)
			{
				uParam1 = 8;
				Function_32(&iParam0);
				return 1;
			}
		}
		if (!Function_12(&iParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(&iParam0, 1.0f))
			{
				uParam1 = 2;
				Function_32(&iParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(&iParam0, 1.0f, 1.0f))
			{
				uParam1 = 2;
				Function_32(&iParam0);
				return 1;
			}
		}
		if (!Function_12(&iParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(&iParam0) || (((GET_ACTOR_UNDER_RETICLE(&Global_54076, 0) != &iParam0 && IS_PLAYER_WEAPON_ZOOMED(&Global_54076)) && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(&Global_54076) != &iParam0 && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f))
			{
				if (uParam2 > 0.0f)
				{
					uParam1 = 4;
					Function_32(&iParam0);
					return 1;
				}
				if (uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - uParam2) < 1,3f)
					{
						uParam1 = 4;
						Function_32(&iParam0);
						return 1;
					}
				}
				uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_12(&iParam3, 1))
		{
			if (Global_6646 || Global_6647)
			{
				uParam1 = 1;
				Function_32(&iParam0);
				return 1;
			}
		}
		if (!Function_12(&iParam3, 16))
		{
			if (UNK_0x7F454A92(&iParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(&iParam0)) > 2.0f && fVar0 > 18.0f)
				{
					uParam1 = 16;
					Function_32(&iParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_32(int iParam0) //Position: 0x25C3 / 9667
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&iParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(&iParam0, 1);
	UNK_0x99AFD2D1(&iParam0, 0, 0);
	Function_33(&iParam0);
	MEMORY_CONSIDER_AS(&Global_54076, &iParam0, 2);
	MEMORY_CONSIDER_AS(&iParam0, &Global_54076, 2);
	AI_GOAL_LOOK_CLEAR(&iParam0);
	return;
}

void Function_33(int iParam0) //Position: 0x2600 / 9728
{
	SAY_SINGLE_LINE_CONTEXT(&iParam0, 60, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

bool Function_34(bool bParam0, bool bParam1) //Position: 0x2619 / 9753
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
			Function_24(&bParam0);
			return 0;
		}
		if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&bParam0), 163840))
		{
			Function_24(&bParam0);
			return 0;
		}
	}
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (Function_35(&bParam0, 0) && !AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&bParam0), 16384))
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

int Function_35(int iParam0, bool bParam1) //Position: 0x26C4 / 9924
{
	var uVar0;
	int iVar1;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (bParam1 && IS_ACTOR_HOGTIED(&iParam0))
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

bool Function_36(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x2716 / 10006
{
	if (StackVal & 64 == 64)
	{
		if (!uParam2)
		{
			if (IS_ACTOR_VALID(&uParam1))
			{
				if (Function_23(&Global_54076, &uParam1) > 15.0f)
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
		if (Function_39() && !uParam2)
		{
			return 0;
		}
		if (Function_38(iParam0) && !uParam2)
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
		if (!Function_37(iParam0, &uParam5))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_37(int iParam0, int iParam1) //Position: 0x2859 / 10329
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

int Function_38(int iParam0) //Position: 0x287A / 10362
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

int Function_39() //Position: 0x28BA / 10426
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
						if (Function_40(&Global_54076, &Global_39621[iVar05] + 16) > IntToFloat(iVar1))
						{
							return 1;
						}
					}
				}
			}
			if (Function_40(&Global_54076, &Global_39621[iVar05] + 16) > IntToFloat(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

float Function_40(bool bParam0, var uParam1) //Position: 0x297D / 10621
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			Function_29(&bParam0);
			Var0 = Function_29(&bParam0);
			Function_41(&uParam1);
			Var2 = Function_41(&uParam1);
			return VDIST(Var0, Var2);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

struct<8> Function_41(bool bParam0) //Position: 0x2A1F / 10783
{
	struct<2> Var0;
	
	if (IS_OBJECT_VALID(&bParam0))
	{
		GET_OBJECT_POSITION(&bParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID object. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

void Function_42(struct<2> Param0, var uParam2, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7) //Position: 0x2A8D / 10893
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
	else if (!Function_70(StackVal, Param0))
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
			Function_69(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_68(0);
		}
		if (&bParam7)
		{
			Function_66(0, GET_THIS_SCRIPT_ID());
			Global_6615 = GET_THIS_SCRIPT_ID();
			Function_64(iParam3);
			Global_6644 = 1;
		}
		Function_62(iParam3);
		if (Function_61(StackVal, 32768))
		{
			Function_58(1);
		}
		Global_26652[iParam34].f_16++;
		Function_43(408, 1, 0, 0);
	}
}

int Function_43(int iParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x2BA2 / 11170
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
	Function_57(iParam0, TO_FLOAT(bParam1), 1);
	Function_56(iParam0);
	if (uParam2 && bParam1 == 0)
	{
		Function_45(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &uParam3);
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
	Function_44(iParam0);
	return 1;
}

void Function_44(bool bParam0) //Position: 0x2DCA / 11722
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

void Function_45(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x2E68 / 11880
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_55(390))), 32);
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
					fVar19 = (Function_54(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_54(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_52(iParam0, fVar19, fVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_49(fVar19, fParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&uParam7))
							{
								uParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_47(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&uParam7), &Global_55480[iParam016] + 32, Function_46(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_151(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, 4294967295, 0, iVar2, 0, 1, 0, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, 4294967295, 0, iVar2, 0, 0, 0, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_46(int iParam0) //Position: 0x34A6 / 13478
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_47(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x34B7 / 13495
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
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_48(char* cParam0) //Position: 0x35AE / 13742
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_49(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x35C9 / 13769
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_51(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_50(Function_51(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_50(int iParam0, int iParam1) //Position: 0x3630 / 13872
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_51(int iParam0, int iParam1) //Position: 0x3642 / 13890
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_52(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x3654 / 13908
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
		uParam3 = ROUND((fVar2 * 100.0f));
		uParam4 = ROUND((fVar3 * 100.0f));
	}
	else
	{
		uParam3 = ROUND(((fParam1 * 100.0f) / fVar0));
		uParam4 = ROUND(((fParam2 * 100.0f) / fVar0));
	}
}

int Function_53(int iParam0) //Position: 0x3788 / 14216
{
	return Global_55480[iParam016].f_96;
}

float Function_54(int iParam0) //Position: 0x3797 / 14231
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_55(int iParam0) //Position: 0x37D0 / 14288
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_56(int iParam0) //Position: 0x380D / 14349
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

int Function_57(int iParam0, float fParam1, bool bParam2) //Position: 0x39A7 / 14759
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

void Function_58(bool bParam0) //Position: 0x3BEB / 15339
{
	if (bParam0)
	{
		Function_60(0x10000000);
	}
	else
	{
		Function_59(0x10000000);
	}
	Global_39922.f_304 = 0;
	return;
}

void Function_59(int iParam0) //Position: 0x3C10 / 15376
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_60(int iParam0) //Position: 0x3C2D / 15405
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

bool Function_61(var uParam0, int iParam1) //Position: 0x3C40 / 15424
{
	return (uParam0 && iParam1) == 0;
}

void Function_62(int iParam0) //Position: 0x3C4D / 15437
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (!Function_12(StackVal, 524288))
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
			bVar1 = Function_63(iVar0 * 60);
			ADD_TIME(&Global_27462[iParam052] + 376, 0, 0, bVar1, 0);
			Global_26652[iParam04] = &Global_27462[iParam052] + 376;
		}
	}
	return;
}

int Function_63(int iParam0) //Position: 0x3CF3 / 15603
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_64(int iParam0) //Position: 0x3D0A / 15626
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
	Function_65(&Var0 + 80[Var0.f_762], &(Global_26652[iParam04]), iParam0);
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

void Function_65(vector3 vParam0) //Position: 0x3DA9 / 15785
{
	vParam0.y = iParam2;
	vParam0 = Param1.f_16;
	vParam0.f_8 = 1;
	return;
}

void Function_66(int iParam0, int iParam1) //Position: 0x3DC5 / 15813
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
			Function_67(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_67(struct<113> Param0) //Position: 0x3E4C / 15948
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

void Function_68(int iParam0) //Position: 0x3EAA / 16042
{
	*(&Global_21369 + 136) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 136, 0, 0, (&iParam0 + Function_63(900)), 0);
	return;
}

void Function_69(int iParam0) //Position: 0x3ECE / 16078
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, (&iParam0 + Function_63(200)), 0);
	return;
}

bool Function_70(vector3 vParam0) //Position: 0x3EF1 / 16113
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

struct<8> Function_71() //Position: 0x3F09 / 16137
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_72(var uParam0, bool bParam1) //Position: 0x3F13 / 16147
{
	uParam0 = (uParam0 || bParam1);
	return;
}

void Function_73(var uParam0, struct<2> Param1, int iParam3, int iParam4, float fParam5) //Position: 0x3F24 / 16164
{
	var uVar0;
	var uVar1;
	bool bVar2;
	var uVar3[6];
	bool bVar10;
	int iVar11;
	char* cVar12[32];
	float fVar20;
	
	bVar2 = true;
	uVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Param1, 1.0f, "p_gen_footlockerfull01x", 1);
	if (IS_PHYSINST_VALID(&uVar0))
	{
		uVar1 = GET_OBJECT_FROM_PHYSINST(&uVar0);
		if (IS_OBJECT_VALID(&uVar1))
		{
			ROTATE_OBJECT_UPRIGHT_TO_GROUND(&uVar1, 1, 5.0f);
		}
	}
	DECOR_SET_INT(GET_OBJECT_FROM_GRINGO(&uParam0), "GringoDollarAmt", false);
	Function_82(GET_OBJECT_FROM_GRINGO(&uParam0));
	if (&iParam3 == 4294967295)
	{
		bVar10 = false;
		Function_76(&Global_54076, &uVar3, &bVar10);
		if (bVar10 >= 0)
		{
			PRINTINT(bVar10);
			iVar11 = RAND_INT_RANGE(0, (bVar10 - 1));
			PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(uVar3[iVar11]));
			iParam3 = Function_75(&Global_54076, uVar3[iVar11]);
			if (&iParam3 == 34)
			{
				iParam3 = 16;
			}
		}
		else
		{
			bVar2 = false;
		}
	}
	else
	{
		iParam3 = Function_75(&Global_54076, &iParam3);
	}
	if (&iParam3 == 4294967295)
	{
		bVar2 = false;
	}
	if (bVar2)
	{
		strcpy(&cVar12, "Ammo_", 32);
		straddi(&cVar12, GET_AMMO_ENUM(&iParam3), 32);
		PRINTSTRING(&cVar12);
		fVar20 = GET_WEAPON_MAX_AMMO(&iParam3);
		if (fVar20 >= 2.0f)
		{
			fParam5 = 2.0f;
		}
		DECOR_SET_INT(GET_OBJECT_FROM_GRINGO(&uParam0), &cVar12, FLOOR(((2.0f * &fParam5) * GET_WEAPON_MAX_AMMO(&iParam3))));
	}
	if (&iParam4 != 4294967295 || (&iParam4 != 11 && GET_ITEM_COUNT(SS_GET_STRING(1, 11), &Global_54076) < 0))
	{
		iParam4 = Function_74();
	}
	DECOR_SET_INT(GET_OBJECT_FROM_GRINGO(&uParam0), "GiveItem", &iParam4);
}

float Function_74() //Position: 0x40A5 / 16549
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

int Function_75(var uParam0, int iParam1) //Position: 0x4101 / 16641
{
	int iVar0;
	
	iVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(&uParam0, iParam1);
	return iVar0;
}

void Function_76(var uParam0, int[] iParam1, bool bParam2) //Position: 0x4113 / 16659
{
	bParam2 = 0;
	if (Function_75(&uParam0, 39) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(&uParam0, 6, 1) > _GET_MAX_AMMO_AMOUNT(&uParam0, 6))
		{
			iParam1[bParam2] = 39;
			bParam2++;
		}
	}
	if (Function_75(&uParam0, 41) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(&uParam0, 8, 1) > _GET_MAX_AMMO_AMOUNT(&uParam0, 8))
		{
			iParam1[bParam2] = 41;
			bParam2++;
		}
	}
	if (Function_75(&uParam0, 40) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(&uParam0, 7, 1) > _GET_MAX_AMMO_AMOUNT(&uParam0, 7))
		{
			iParam1[bParam2] = 40;
			bParam2++;
		}
	}
	if (Function_75(&uParam0, 42) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(&uParam0, 9, 1) > _GET_MAX_AMMO_AMOUNT(&uParam0, 9))
		{
			iParam1[bParam2] = 42;
			bParam2++;
		}
	}
	if (Function_75(&uParam0, 43) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(&uParam0, 10, 1) > _GET_MAX_AMMO_AMOUNT(&uParam0, 10))
		{
			iParam1[bParam2] = 43;
			bParam2++;
		}
	}
	if (Function_75(&uParam0, 44) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(&uParam0, 11, 1) > _GET_MAX_AMMO_AMOUNT(&uParam0, 11))
		{
			iParam1[bParam2] = 44;
			bParam2++;
		}
	}
	return;
}

void Function_77(var uParam0, var uParam1, var uParam2, float fParam3, struct<2> Param4) //Position: 0x425E / 16990
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
		if (Function_78(StackVal, &Global_46715, "player_herb", &uVar0, 20.0f, 5, Param4) >= 0)
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

int Function_78(char* cParam0, var uParam1, char*[] cParam2, float fParam3, int iParam4, struct<2> Param5) //Position: 0x4309 / 17161
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

void Function_79(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x43AF / 17327
{
	if (uParam0 != iParam1)
	{
		uParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_80(uParam0), &iParam2, &iParam3, &iParam4);
	}
}

var Function_80(int iParam0) //Position: 0x43D9 / 17369
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

void Function_81(int iParam0) //Position: 0x492E / 18734
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

void Function_82(int iParam0) //Position: 0x4957 / 18775
{
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(&iParam0, "nocrime"))
	{
		DECOR_SET_BOOL(&iParam0, "nocrime", 1);
	}
	return;
}

void Function_83(var uParam0, bool bParam1) //Position: 0x498E / 18830
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_INT(&uParam0, "honor", bParam1);
	return;
}

void Function_84(bool bParam0) //Position: 0x49B0 / 18864
{
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&bParam0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bParam0, 0);
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&bParam0, 0);
	MEMORY_ATTACK_ON_SIGHT(&bParam0, 0);
	SET_ACTOR_CAN_PLAY_GESTURES(&bParam0, false);
	AI_SET_ALLOW_ATTACK_HOGTIED_ACTORS(&bParam0, 1);
	return;
}

var Function_85(var uParam0, var uParam1, var uParam2, struct<2> Param3, struct<2> Param5, int iParam7) //Position: 0x49E0 / 18912
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	struct<2> Var4;
	int iVar6;
	int iVar7;
	
	uVar0 = CREATE_PROPSET_IN_LAYOUT(&uParam0, &uParam1, &uParam2, Param3, Param5);
	uVar1 = GET_LAYOUT_FROM_OBJECT(&uVar0);
	uVar2 = CREATE_OBJECT_ITERATOR(&uVar1);
	ITERATE_IN_LAYOUT(&uVar2, &uVar1);
	iVar3 = START_OBJECT_ITERATOR(&uVar2);
	while (IS_OBJECT_VALID(&iVar3))
	{
		if (!GET_OBJECT_TYPE(&iVar3) != 57)
		{
			if (!&iParam7 != 4294967295)
			{
				GET_OBJECT_POSITION(&iVar3, &Var4);
				Var4 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, 4.0f, 0.0f), Var4, StackVal);
				iVar6 = GET_MATERIAL_AT_VECTOR(&Var4);
				if (!iVar6 != 0 && (iVar6 && iParam7) < 0)
				{
					PRINTSTRING("Deleting object. Materials were above");
					PRINTNL();
					DESTROY_OBJECT(&iVar3);
				}
			}
			if (IS_OBJECT_VALID(&iVar3))
			{
				if (DECOR_CHECK_EXIST(&iVar3, "rstarInfoSnapping_Type"))
				{
					iVar7 = DECOR_CHECK_STRING(&iVar3, "rstarInfoSnapping_Type", "align");
					SNAP_OBJECT_TO_GROUND(&iVar3, 10.0f, iVar7, 1092616192);
				}
				NET_OBJECT_SET_REPLICATION_MODE(&iVar3, 0);
			}
		}
		iVar3 = OBJECT_ITERATOR_NEXT(&uVar2);
	}
	STORE_MOBILE_LAYOUT_TRANSFORMS(GET_MOBILE_LAYOUT_FROM_OBJECT(&uVar0));
	ADD_AI_COVERSET_FOR_PROPSET(&uVar0);
	DESTROY_ITERATOR(&uVar2);
	return &uVar0;
}

float Function_86() //Position: 0x4B37 / 19255
{
	float fVar0;
	int iVar1;
	
	if (Global_6612)
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

bool Function_87(struct<65> Param0) //Position: 0x4B68 / 19304
{
	struct<8> Var0;
	var uVar8;
	var uVar9;
	
	if (Global_6612 && Param0.f_40)
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_125(GET_SCRIPT_NAME()) };
		uVar8 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Vector((&Param0 + 16), Function_123(0.0f, &Global_54076, *(&Param0 + 16)), 0.0f), Vector(Param0.f_60, 20.0f, Param0.f_60));
		DECOR_SET_INT(&uVar8, "script", GET_THIS_SCRIPT_ID());
		if (Param0.f_64 != 4294967295)
		{
			DECOR_SET_INT(StackVal, &uVar8, "category");
			Function_121(&uVar8, Param0.f_40);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
		*(&Param0 + 16) = Global_54078;
		return 1;
	}
	uParam3 = 0;
	if (!Function_88(&Param0))
	{
		if (Param0.f_40 == 1)
		{
			if (uParam2 == 0)
			{
				Function_9("Still scanning for the proper terrain to run this event.  Move the player around to find a good spawn location.", -1.0f, 1, 2, 1, 0);
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
		Function_9("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 5.0f, 1, 2, 1, 0);
	}
	if (&bParam4)
	{
		if (!Function_7(Param0.f_64, 0, 1, 0, 0))
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
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_125("restrictVol") };
		uVar9 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Vector(*(&Param0 + 16), Function_123(0.0f, &Global_54076, *(&Param0 + 16)), 0.0f), Vector(Param0.f_60, 20.0f, Param0.f_60));
		DECOR_SET_INT(&uVar9, "script", GET_THIS_SCRIPT_ID());
		if (Param0.f_64 != 4294967295)
		{
			DECOR_SET_INT(StackVal, &uVar9, "category");
			Function_121(&uVar9, Param0.f_40);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
	}
	return 1;
}

bool Function_88(struct<73> Param0) //Position: 0x4F26 / 20262
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
			Function_120(&Param0 + 8);
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
				Var3 = Vector(0.0f, 0.0f, Function_26(1));
				ROTATE_VECTOR_XZ(&Var3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				Var3 = Vector(StackVal, StackVal, StackVal) + Vector(Var7, Var3, StackVal);
				ITERATE_IN_SPHERE(&Param0 + 8, Var3, Function_26(1));
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
						uVar0 = Function_119(StackVal, &Param0 + 8, Var7, 0,01f);
					}
					else
					{
						uVar0 = Function_118(StackVal, &Param0 + 8, Var7, 0,1f, "locflag", (&Param0 + 72 + 36)->f_24);
					}
				}
				else if ((&Param0 + 72 + 36)->f_24 == 0)
				{
					uVar0 = Function_117(StackVal, &Param0 + 8, Var7, Function_86());
				}
				else
				{
					uVar0 = Function_116(StackVal, &Param0 + 8, Var7, Function_86(), "locflag", (&Param0 + 72 + 36)->f_24);
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
			Function_120(&Param0 + 8);
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
					if (Function_115(bVar11))
					{
						if (StackVal == (&Param0 + 72)->f_68)
						{
							if ((StackVal && Global_43791[bVar11]) >= 0)
							{
								GET_OBJECT_POSITION(&uVar1, &Var3);
								if (VDIST(Var7, Var3) < fVar10 && VDIST(Var7, Var3) > Function_26(1))
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
				Function_114(&Param0 + 16, 99.0f, &Param0 + 16, 10);
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
				Function_113(&Var7, &uVar5);
				Var3 = Function_113(&Var7, &uVar5);
				if (!Function_70(StackVal, Var3))
				{
					PRINTSTRING("Player Pos: ");
					PRINTVECTOR(Var7);
					PRINTNL();
					Function_27(&fVar10, &fVar9);
					if (VDIST(Var3, Var7) < ((fVar10 + ((fVar9 - fVar10) / 2.0f)) * 0,8f))
					{
						iVar2 = Function_110(StackVal, &Param0, Var3);
					}
				}
			}
			else
			{
				iVar2 = Function_106(&Param0);
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
					if (!Function_105(StackVal, *(&Param0 + 16)))
					{
						return 0;
					}
				}
				if (Param0.f_68 == 1)
				{
					if (!Function_104(StackVal, *(&Param0 + 16)))
					{
						return 0;
					}
				}
				if (Function_12(StackVal, 131072))
				{
					if (StackVal || Function_103(Function_103(StackVal, *(&Param0 + 16)), Global_54078))
					{
						return 0;
					}
				}
				if (StackVal & 1024 == 1024)
				{
					if (Function_102(StackVal, *(&Param0 + 16)))
					{
						return 0;
					}
				}
				if (!Function_98(&Param0 + 16, &Param0 + 60, 0, Param0.f_40))
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
				uVar17 = START_CURVE_QUERY(&Global_43578, Var3, Function_97((&Param0 + 72)->f_148, 0), 0.0f, 20.0f, 5.0f, 0);
			}
			else
			{
				uVar17 = START_CURVE_QUERY(&Global_43578, Var7, Function_97((&Param0 + 72)->f_148, 0), 120.0f, 150.0f, 5.0f, 0);
			}
			if (GET_NUM_POINTS_IN_CURVE_QUERY(&uVar17) >= 0)
			{
				iVar15 = RAND_INT_RANGE(0, (GET_NUM_POINTS_IN_CURVE_QUERY(&uVar17) - 1));
				GET_POINT_FROM_CURVE_QUERY(&uVar17, iVar15, &Var12);
				Function_96(&Var12);
				*(&Param0 + 16) = Function_96(&Var12);
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
				if (!Function_105(StackVal, *(&Param0 + 16)))
				{
					return 0;
				}
			}
			if (Param0.f_68 == 1)
			{
				if (!Function_104(StackVal, *(&Param0 + 16)))
				{
					return 0;
				}
			}
			if (Param0.f_68 == 0)
			{
				if (!(StackVal || Function_105(Function_104(StackVal, *(&Param0 + 16)), *(&Param0 + 16))))
				{
					return 0;
				}
			}
			if (Function_12(StackVal, 131072))
			{
				if (StackVal || Function_103(Function_103(StackVal, *(&Param0 + 16)), Global_54078))
				{
					return 0;
				}
			}
			if (StackVal && !Function_98(&Param0 + 16, &Param0 + 60, 0, Param0.f_40) == 262144)
			{
				return 0;
			}
			break;
		
		case 0x00000004:
			if (!Function_93((&Param0 + 72)->f_148) < 0)
			{
				return 0;
			}
			break;
		
		case 0x00000007:
			switch ((&Param0 + 72)->f_156)
			{
				case 0x00000001:
					iVar18 = Function_90(StackVal, Global_43787, Global_43788, Global_43789, 1);
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
						iVar18 = Function_90(StackVal, Global_43787, Global_43788, (Global_43789 + iVar16), 1);
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
	if (Function_89(StackVal, *(&Param0 + 16)))
	{
		return 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(*(&Param0 + 16), 10.0f))
	{
		return 0;
	}
	return 1;
}

bool Function_89(struct<2> Param0) //Position: 0x57ED / 22509
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= GET_OBJECTSET_SIZE(&Global_39246))
	{
		if (IS_POINT_IN_VOLUME(Param0, GET_VOLUME_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(iVar0, &Global_39246))))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int Function_90(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x5824 / 22564
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
								return Function_91(&Global_11014, &Global_12796, bParam3);
								break;
							
							case 0x00000001:
								return Function_91(&Global_11146, &Global_12992, bParam3);
								break;
							
							case 0x00000002:
								return Function_91(&Global_11120, &Global_12954, bParam3);
								break;
							
							default:
								return Function_91(&Global_11200, &Global_13072, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_91(&Global_11420, &Global_13398, bParam3);
								break;
							
							case 0x00000001:
								return Function_91(&Global_11222, &Global_13104, bParam3);
								break;
							
							case 0x00000003:
								return Function_91(&Global_11284, &Global_13196, bParam3);
								break;
							
							case 0x00000002:
								return Function_91(&Global_11398, &Global_13366, bParam3);
								break;
							
							case 0x00000004:
								return Function_91(&Global_11492, &Global_13504, bParam3);
								break;
							
							default:
								return Function_91(&Global_11482, &Global_13490, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_91(&Global_11544, &Global_13580, bParam3);
								break;
							
							case 0x00000001:
								return Function_91(&Global_11646, &Global_13732, bParam3);
								break;
							
							case 0x00000002:
								return Function_91(&Global_11704, &Global_13818, bParam3);
								break;
							
							default:
								return Function_91(&Global_11518, &Global_13542, bParam3);
								break;
						}
						break;
					
					case 0x00000003:
						switch (bVar1)
						{
							case 0x00000001:
								return Function_91(&Global_11752, &Global_13888, bParam3);
								break;
							
							default:
								return Function_91(&Global_11826, &Global_13998, bParam3);
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
								return Function_91(&Global_11836, &Global_14012, bParam3);
								break;
							
							case 0x00000001:
								return Function_91(&Global_11946, &Global_14176, bParam3);
								break;
							
							case 0x00000002:
								return Function_91(&Global_11988, &Global_14238, bParam3);
								break;
							
							default:
								return Function_91(&Global_12038, &Global_14312, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_91(&Global_12048, &Global_14326, bParam3);
								break;
							
							default:
								return Function_91(&Global_12274, &Global_14662, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000002:
								return Function_91(&Global_12284, &Global_14676, bParam3);
								break;
							
							case 0x00000001:
								return Function_91(&Global_12342, &Global_14762, bParam3);
								break;
							
							case 0x00000003:
								return Function_91(&Global_12392, &Global_14836, bParam3);
								break;
							
							default:
								return Function_91(&Global_12472, &Global_14954, bParam3);
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
		return Function_91(&Global_11014, &Global_12796, bParam3);
	}
	if (bVar1 == Global_46760[1])
	{
		return Function_91(&Global_11146, &Global_12992, bParam3);
	}
	if (bVar1 == Global_46760[2])
	{
		return Function_91(&Global_11120, &Global_12954, bParam3);
	}
	if (bVar1 == Global_46796[0])
	{
		return Function_91(&Global_11420, &Global_13398, bParam3);
	}
	if (bVar1 == Global_46796[1])
	{
		return Function_91(&Global_11222, &Global_13104, bParam3);
	}
	if (bVar1 == Global_46796[3])
	{
		return Function_91(&Global_11284, &Global_13196, bParam3);
	}
	if (bVar1 == Global_46796[2])
	{
		return Function_91(&Global_11398, &Global_13366, bParam3);
	}
	if (bVar1 == Global_46796[4])
	{
		return Function_91(&Global_11492, &Global_13504, bParam3);
	}
	if (bVar1 == Global_46816[0])
	{
		return Function_91(&Global_11544, &Global_13580, bParam3);
	}
	if (bVar1 == Global_46816[1])
	{
		return Function_91(&Global_11646, &Global_13732, bParam3);
	}
	if (bVar1 == Global_46816[2])
	{
		return Function_91(&Global_11704, &Global_13818, bParam3);
	}
	if (bVar1 == Global_46838[1])
	{
		return Function_91(&Global_11752, &Global_13888, bParam3);
	}
	if (bVar1 == Global_46850[0])
	{
		return Function_91(&Global_11836, &Global_14012, bParam3);
	}
	if (bVar1 == Global_46850[1])
	{
		return Function_91(&Global_11946, &Global_14176, bParam3);
	}
	if (bVar1 == Global_46850[2])
	{
		return Function_91(&Global_11988, &Global_14238, bParam3);
	}
	if (bVar1 == Global_46866[0])
	{
		return Function_91(&Global_12048, &Global_14326, bParam3);
	}
	if (bVar1 == Global_46894[2])
	{
		return Function_91(&Global_12284, &Global_14676, bParam3);
	}
	if (bVar1 == Global_46894[1])
	{
		return Function_91(&Global_12342, &Global_14762, bParam3);
	}
	if (bVar1 == Global_46894[3])
	{
		return Function_91(&Global_12392, &Global_14836, bParam3);
	}
	if (bVar1 == Global_46736[0])
	{
		return Function_91(&Global_11200, &Global_13072, bParam3);
	}
	if (bVar1 == Global_46736[1])
	{
		return Function_91(&Global_11482, &Global_13490, bParam3);
	}
	if (bVar1 == Global_46736[2])
	{
		return Function_91(&Global_11518, &Global_13542, bParam3);
	}
	if (bVar1 == Global_46736[3])
	{
		return Function_91(&Global_11826, &Global_13998, bParam3);
	}
	if (bVar1 == Global_46746[0])
	{
		return Function_91(&Global_12038, &Global_14312, bParam3);
	}
	if (bVar1 == Global_46746[2])
	{
		return Function_91(&Global_12274, &Global_14662, bParam3);
	}
	if (bVar1 == Global_46746[1])
	{
		return Function_91(&Global_12472, &Global_14954, bParam3);
	}
	return "";
}

var Function_91(struct<2>[] Param0, vector3[] vParam1, bool bParam2) //Position: 0x5E3A / 24122
{
	int iVar0;
	
	iVar0 = bParam2;
	if (iVar0 <= Param0 || iVar0 > 0)
	{
		return "";
	}
	if (!Function_92(&(Param0[iVar02]), 2))
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

bool Function_92(var uParam0, int iParam1) //Position: 0x5E94 / 24212
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_93(int iParam0) //Position: 0x5EB1 / 24241
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
			if (Function_94(GET_SQUAD_FROM_OBJECT(&iVar2)) == &iParam0)
			{
				iVar0++;
			}
			iVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
		}
	}
	DESTROY_ITERATOR(&uVar1);
	return iVar0;
}

int Function_94(int iParam0) //Position: 0x5F19 / 24345
{
	var uVar0;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return 4294967295;
	}
	uVar0 = Function_95(&iParam0);
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

var Function_95(var uParam0) //Position: 0x5F57 / 24407
{
	int iVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return "";
	}
	iVar1 = 0;
	while (iVar1 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		iVar0 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, iVar1);
		if (IS_ACTOR_VALID(&iVar0) && IS_ACTOR_ALIVE(&iVar0))
		{
			return &iVar0;
		}
		iVar1++;
	}
	return "";
}

struct<8> Function_96(vector3 vParam0) //Position: 0x5FA4 / 24484
{
	struct<2> Var0;
	
	Var0 = vParam0;
	Var0.f_4 = vParam0.y;
	Var0.f_8 = vParam0.z;
	return StackVal, Var0;
}

int Function_97(int iParam0, int iParam1) //Position: 0x5FC6 / 24518
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

bool Function_98(struct<2> Param0, int iParam2, bool bParam3) //Position: 0x5FF8 / 24568
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
	Function_100(4294967295);
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
			else if (Function_99(&Param0, &uVar0) > fVar4)
			{
				return 0;
			}
		}
		iVar2++;
	}
	return 1;
}

float Function_99(struct<2> Param0) //Position: 0x60D4 / 24788
{
	struct<2> Var0;
	int iVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	iVar2 = VMAG(Var0);
	return iVar2;
}

int Function_100(int iParam0) //Position: 0x60F3 / 24819
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
						Function_101(iVar0);
					}
					else if (Global_6629)
					{
						if (Function_28(StackVal, &Global_54076, Var1) < 25.0f)
						{
							Function_101(iVar0);
						}
					}
					else if (Function_28(StackVal, &Global_54076, Var1) < 55.0f)
					{
						Function_101(iVar0);
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
			Function_101(iVar0);
		}
		iVar0++;
	}
	return 0;
}

void Function_101(int iParam0) //Position: 0x6261 / 25185
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

bool Function_102(struct<2> Param0) //Position: 0x62C9 / 25289
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

int Function_103(struct<2> Param0) //Position: 0x636E / 25454
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

bool Function_104(struct<2> Param0) //Position: 0x63BC / 25532
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

bool Function_105(struct<2> Param0) //Position: 0x6417 / 25623
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

int Function_106(bool bParam0) //Position: 0x6496 / 25750
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
		Function_108(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, (&bParam0 + 72 + 84));
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
	Function_107(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&bParam0 + 72 + 84));
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

void Function_107(struct<33> Param0) //Position: 0x6648 / 26184
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

void Function_108(struct<5> Param0, var uParam5, var uParam6, var uParam7) //Position: 0x6774 / 26484
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

void Function_109(float fParam0) //Position: 0x67C5 / 26565
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

int Function_110(int iParam0, struct<2> Param1) //Position: 0x680C / 26636
{
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER(Param1);
	if (Global_47151[34])
	{
		PRINTVECTOR(Param1);
		PRINTNL();
	}
	Function_112();
	Function_109(0);
	Function_111(0);
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
		Function_108(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iParam0 + 72 + 84));
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
	Function_107(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iParam0 + 72 + 84));
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

void Function_111(bool bParam0) //Position: 0x69C1 / 27073
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

void Function_112() //Position: 0x6A74 / 27252
{
	AMBIENT_SET_DISTANCE_FILTER(0.0f, 24.0f);
	return;
}

struct<8> Function_113(struct<2> Param0) //Position: 0x6A83 / 27267
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
		Function_96(&iVar18);
		uVar14 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Function_96(&iVar18), StackVal);
		Function_96(&iVar21);
		uVar16 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Function_96(&iVar21), StackVal);
		fVar11 = VDOT(&uVar12, &uVar14);
		fVar10 = VDOT(&uVar12, &uVar16);
		Function_27(&fVar4, &fVar5);
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
			Function_96(&iVar21);
			Var8 = Function_96(&iVar21);
		}
		else
		{
			UNK_0x19D652F9(&uVar3, fVar6, &uVar0, &iVar18);
			Function_96(&iVar18);
			Var8 = Function_96(&iVar18);
		}
	}
	UNK_0xDF93BD7C(&uVar7);
	return StackVal, Var8;
}

int Function_114(struct<2> Param0, struct<5> Param2) //Position: 0x6B9D / 27549
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
		if (!Function_70(StackVal, Param2))
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
			if (!Function_70(StackVal, Param2))
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

bool Function_115(bool bParam0) //Position: 0x6CE0 / 27872
{
	if (bParam0 > 0 || bParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_116(var uParam0, struct<2> Param1, float fParam3, int iParam4, var uParam5) //Position: 0x6CF6 / 27894
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
						if (Function_98(&Var5, &fVar4, 0, 0))
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

var Function_117(var uParam0, struct<2> Param1, float fParam3) //Position: 0x6DAB / 28075
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
				if (Function_98(&Var5, &uVar4, 0, 0))
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

var Function_118(var uParam0, struct<2> Param1, float fParam3, int iParam4, var uParam5) //Position: 0x6E3D / 28221
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

var Function_119(var uParam0, struct<2> Param1, float fParam3) //Position: 0x6EDF / 28383
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

int Function_120(int iParam0) //Position: 0x6F65 / 28517
{
	if (IS_ITERATOR_VALID(&iParam0))
	{
		ITERATE_EVERYWHERE(&iParam0);
		ITERATE_ON_PARTIAL_NAME(&iParam0, Function_151());
		ITERATE_ON_PARTIAL_MODEL_NAME(&iParam0, Function_151());
		ITERATE_ON_OBJECT_TYPE(&iParam0, 4294967295);
		return 1;
	}
	return 0;
}

int Function_121(var uParam0, int iParam1) //Position: 0x6F9B / 28571
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
	Function_100(DECOR_GET_INT(&uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
		}
		else
		{
			Function_122(iVar0, &uParam0, &uVar1, &iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(&uParam0);
	return 0;
}

void Function_122(int iParam0, var uParam1, struct<2> Param2) //Position: 0x7105 / 28933
{
	struct<8> Var0;
	
	*(&Global_39621[iParam05] + 16) = &uParam1;
	Global_39621[iParam05].f_32 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_125("stayout") };
	*(&Global_39621[iParam05] + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Param2, Vector(0.0f, 0.0f, 0.0f), Vector(12.0f, 5.0f, 12.0f));
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&Global_39621[iParam05] + 24, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&Global_39621[iParam05] + 24);
	if (&bParam3)
	{
		*(&Global_39621[iParam05] + 8) = ADD_BLIP_FOR_COORD(&Param2, 403, 0, 2, 0);
		SET_BLIP_BLINK(&Global_39621[iParam05] + 8, 1, 1, 20.0f);
	}
}

var Function_123(var uParam0, struct<2> Param1) //Position: 0x71AD / 29101
{
	struct<2> Var0;
	var uVar2;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		GET_POSITION(&uParam0, &Var0);
		Function_124(StackVal, StackVal, Var0, Param1, &uVar2);
		return UNK_0x9C40E671(&uVar2);
	}
	return 0.0f;
}

void Function_124(var uParam0, float fParam1, float fParam2, float fParam3, var uParam4) //Position: 0x71DB / 29147
{
	uParam4 = Vector((GET_X(&fParam2) - GET_X(&uParam0)), 0.0f, (GET_Z(&fParam2) - GET_Z(&uParam0)));
}

struct<32> Function_125(char* cParam0) //Position: 0x71FF / 29183
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_126("0", &cVar8, ""), 4);
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

struct<32> Function_126(char* cParam0) //Position: 0x726B / 29291
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_127(struct<2>[] Param0) //Position: 0x728D / 29325
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_132();
	iVar1 = 0;
	if (!Function_4(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_131(&(Param0[iVar02]), 8);
		}
		else if (Function_130())
		{
			iVar1 = 1;
			Function_131(&(Param0[iVar02]), 8);
		}
		Function_131(&(Param0[iVar02]), 16);
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
				Function_131(&(Param0[iVar02]), 1);
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
							Function_131(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_131(&(Param0[iVar02]), 2);
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
							Function_131(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_131(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_131(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_131(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_131(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_131(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_131(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_131(&(Param0[iVar02]), 2);
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

void Function_128() //Position: 0x764F / 30287
{
	if (!Function_129(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_129(int iParam0) //Position: 0x768F / 30351
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_130() //Position: 0x76AB / 30379
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

void Function_131(struct<13> Param0) //Position: 0x76D9 / 30425
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_132() //Position: 0x76EC / 30444
{
	if (!Function_129(128))
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

void Function_133(bool bParam0) //Position: 0x772E / 30510
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		SET_DRAW_ACTOR(&bParam0, 1);
		CLEAR_ACTOR_MAX_SPEED(&bParam0);
		if (IS_ACTOR_ANIMAL(&bParam0))
		{
			ANIMAL_SPECIES_REL_SET_CAN_ATTACK(ANIMAL_ACTOR_GET_SPECIES(&bParam0), 0, 1);
		}
		else
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&bParam0, 0, 1);
			MEMORY_ALLOW_SHOOTING(&bParam0, 1);
		}
	}
	return;
}

void Function_134(var[] uParam0, int iParam1) //Position: 0x7777 / 30583
{
	int iVar0;
	
	if (&iParam1 == 4294967295)
	{
		iParam1 = uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= &iParam1)
	{
		Function_133(&(uParam0[iVar0]));
		iVar0++;
	}
	return;
}

void Function_135(int iParam0) //Position: 0x77A9 / 30633
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

void Function_136(var[] uParam0, int iParam1) //Position: 0x77F3 / 30707
{
	int iVar0;
	
	if (&iParam1 == 4294967295)
	{
		iParam1 = uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= &iParam1)
	{
		Function_135(&(uParam0[iVar0]));
		iVar0++;
	}
	return;
}

bool Function_137(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x7825 / 30757
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

void Function_138(var uParam0, var uParam1) //Position: 0x789D / 30877
{
	Local_156 = Local_156;
	return;
}

void Function_139() //Position: 0x78AA / 30890
{
	return;
}

void Function_140(int iParam0) //Position: 0x78B0 / 30896
{
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(iParam0);
	return;
}

var Function_141(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x78BB / 30907
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
			Function_131(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_131(&(Param0[iVar02]), 8);
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

var Function_142(struct<2>[] Param0, int iParam1, int iParam2, bool bParam3) //Position: 0x7997 / 31127
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&iParam1, iParam2);
	iVar0 = Function_143(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_131(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_143(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x79D5 / 31189
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_4(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_131(&(Param0[iVar02]), 4);
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

bool Function_144() //Position: 0x7AA4 / 31396
{
	return (RAND_INT_RANGE(0, 1999) / 1000) != 0;
}

int Function_145(int iParam0, int iParam1) //Position: 0x7AB7 / 31415
{
	int iVar0;
	
	iVar0 = (Global_26652[iParam04].f_16 % iParam1);
	return iVar0;
}

var Function_146(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x7ACD / 31437
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
		fVar0 = (fVar0 * (0,75f + ((TO_FLOAT(Function_148(5)) / 100.0f) * 0,5f)));
	}
	if (&bParam3)
	{
		if (HAS_ITEM(Function_147(17), &Global_54076))
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

var Function_147(bool bParam0) //Position: 0x7BD4 / 31700
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

int Function_148(int iParam0) //Position: 0x7CC8 / 31944
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[iParam0]);
}

void Function_149(vector3 vParam0) //Position: 0x7D09 / 32009
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_72(&vParam0, 1);
	Function_150(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_150(var uParam0, var uParam1) //Position: 0x7D2E / 32046
{
	uParam0 = (uParam0 - (uParam0 && uParam1));
	return;
}

var Function_151() //Position: 0x7D44 / 32068
{
	var uVar0;
	
	return &uVar0;
}

