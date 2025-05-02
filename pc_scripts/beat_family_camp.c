//Decompiled with MagicRDR v1.0
//Function Count : 177
//Statics Count : 258
//Natives Count : 366
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
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	struct<2> Local_31 = { 0, 0 } ;
	var uLocal_33 = 0;
	struct<2> Local_34 = { 0, 0 } ;
	var uLocal_36 = 0;
	struct<9> Local_37 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61[1] = { 0 };
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	int iLocal_65[1] = { 0 };
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 13;
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
	bool bLocal_124 = false;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	bool bLocal_141 = false;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	int iLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	struct<2> Local_152 = { 0, 0 } ;
	var uLocal_154 = 0;
	struct<2> Local_155 = { 0, 0 } ;
	var uLocal_157 = 0;
	struct<2> Local_158 = { 0, 0 } ;
	var uLocal_160 = 0;
	struct<2> Local_161 = { 0, 0 } ;
	var uLocal_163 = 0;
	struct<2> Local_164 = { 0, 0 } ;
	var uLocal_166 = 0;
	struct<2> Local_167 = { 0, 0 } ;
	var uLocal_169 = 0;
	struct<2> Local_170 = { 0, 0 } ;
	var uLocal_172 = 0;
	struct<2> Local_173 = { 0, 0 } ;
	var uLocal_175 = 0;
	float fLocal_176 = 0.0f;
	struct<2> Local_177 = { 0, 0 } ;
	var uLocal_179 = 0;
	struct<2> Local_180 = { 0, 0 } ;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	int iLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	bool bLocal_194 = false;
	var uLocal_195 = 0;
	struct<65> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	var uVar0;
	int iVar1;
	int iVar6;
	int iVar8;
	var uVar9;
	int iVar12;
	bool bVar15;
	float fVar16;
	int iVar17;
	struct<2> Var18;
	
	iLocal_18 = 0;
	iLocal_19 = 0;
	iLocal_45 = 0;
	iLocal_46 = 0;
	iLocal_47 = 0;
	iLocal_48 = 0;
	iLocal_57 = 0;
	bLocal_124 = false;
	iLocal_125 = 0;
	iLocal_126 = 0;
	iLocal_127 = 1;
	iLocal_133 = 0;
	uLocal_135 = CREATE_LAYOUT(Function_176());
	iLocal_139 = 0;
	iLocal_140 = 0;
	Local_161 = Vector(-3.0f, -0,7f, 1,42f);
	Local_164 = Vector(-1,89f, 0,5f, -3,99f);
	Local_167 = Vector(0.0f, -0,7f, -1.0f);
	Local_170 = Vector(0,62f, 0.0f, 2,02f);
	Local_173 = Vector(-1,04f, 0.0f, -2,83f);
	fLocal_176 = 176.0f;
	Local_177 = Vector(2,64f, 0.0f, -0,3f);
	Local_180 = Vector(0.0f, 0.0f, 0.0f);
	iLocal_187 = 1;
	bLocal_194 = false;
	if (Global_26652[ScriptParam_0.f_644].f_16 == 0)
	{
		iLocal_58 = 0;
	}
	else if ((Global_26652[ScriptParam_0.f_644].f_16 % 2) == 1)
	{
		iLocal_58 = 1;
	}
	else
	{
		iLocal_58 = 0;
	}
	Function_174(&uLocal_49, 0.0f);
	uVar0 = Function_171(0, 1, 1, 0, 0);
	iVar1 = 0;
	iVar6 = 0;
	iVar8 = 0;
	bVar15 = false;
	fVar16 = 0.0f;
	iLocal_132 = Function_170(ScriptParam_0.f_64, 2);
	switch (Global_43787)
	{
		case 0x00000000:
		case 0x00000002:
			if (iLocal_132 == 0)
			{
				iLocal_69 = 89;
			}
			else
			{
				iLocal_69 = 149;
			}
			break;
		
		case 0x00000001:
			iLocal_69 = 268;
			break;
	}
	Function_168(&iLocal_70, "p_gen_noose02x", 0, 0);
	Function_167(&iLocal_70, iLocal_69, 3, 0);
	Function_167(&iLocal_70, 541, 3, 0);
	Function_167(&iLocal_70, 543, 3, 0);
	Function_168(&iLocal_70, "dead_ground_male", 5, 0);
	Function_168(&iLocal_70, "custom/dead_ground_male", 8, 0);
	Function_168(&iLocal_70, "crazy_hermit_waiving_over", 5, 0);
	Function_168(&iLocal_70, "custom/crazy_hermit_waiving_over", 8, 0);
	switch (iLocal_58)
	{
		case 0x00000000:
			Function_168(&iLocal_70, "$/tune/refGroups/campsiteSets/cam_zombieFamily01x", 7, 0);
			break;
		
		case 0x00000001:
			Function_168(&iLocal_70, "$/tune/refGroups/campsiteSets/cam_zombieFamily02x", 7, 0);
			break;
	}
	switch (Global_43787)
	{
		case 0x00000000:
			if (!Function_166("pressDemo3"))
			{
				if (Function_165())
				{
					iLocal_65[0] = 76;
				}
				else
				{
					iLocal_65[0] = 204;
				}
			}
			else
			{
				iLocal_65[0] = 76;
			}
			break;
		
		case 0x00000001:
			if (Function_165())
			{
				iLocal_65[0] = 312;
			}
			else
			{
				iLocal_65[0] = 311;
			}
			break;
		
		case 0x00000002:
			if (Function_165())
			{
				iLocal_65[0] = 203;
			}
			else
			{
				iLocal_65[0] = 33;
			}
			break;
	}
	if (!Function_164(1))
	{
		iLocal_57 = 5;
	}
	else
	{
		iLocal_65[0] = Function_153(1, 1, 1, 4294967295, 1);
		Function_167(&iLocal_70, iLocal_65[0], 3, 0);
		Function_152(iLocal_69);
		Function_152(iLocal_65[0]);
		iVar17 = (RAND_INT_RANGE(0, 2999) / 1000);
		if (iVar17 == 0)
		{
			iVar12 = "sit_ground_drink";
		}
		else if (iVar17 == 1)
		{
			iVar12 = "sit_ground_drink";
		}
		else if (iVar17 == 2)
		{
			iVar12 = "sit_ground_smoke";
		}
		else
		{
			iVar12 = "sit_ground_play_harmonica";
		}
		Function_168(&iLocal_70, &iVar12, 1, 0);
		Function_168(&iLocal_70, "Locked_Footlocker", 1, 0);
		Function_168(&iLocal_70, "z_dlc_z_family", 1, 0);
		if (Global_6625 == 1)
		{
			iLocal_57 = 5;
		}
		Function_151();
	}
	while (!IS_EXITFLAG_SET())
	{
		Function_150(StackVal, *(&ScriptParam_0 + 16));
		iLocal_146 = 600;
		if (iLocal_48 == 0)
		{
			if (Function_149(&bVar15, &iLocal_57, &iVar1, &iLocal_146, bLocal_124))
			{
				if (bVar15)
				{
					Function_148(&uLocal_61, 4294967295);
					Function_147(&bLocal_141);
				}
				else
				{
					Function_146(&uLocal_61, 4294967295);
					Function_145(&bLocal_141);
				}
			}
		}
		switch (iLocal_57)
		{
			case 0x00000000:
				if (Function_139(&iLocal_70))
				{
					uLocal_137 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &uLocal_135, "temp", &iVar12, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
					GRINGO_LOAD_ANIMATION_FOR_ACTOR_ENUM_EXT(GET_GRINGO_FROM_OBJECT(&uLocal_137), "UseCase1", "UseAnim", iLocal_69);
					iLocal_57 = 4;
					iLocal_146 = 0;
				}
				break;
			
			case 0x00000004:
				if (GRINGO_HAS_ANIMSET_LOADED_FOR_ACTOR_ENUM_EXT(GET_GRINGO_FROM_OBJECT(&uLocal_137), "UseCase1", "UseAnim", iLocal_69))
				{
					iLocal_57 = 1;
					iLocal_146 = 0;
				}
				break;
			
			case 0x00000001:
				if (Function_99(&ScriptParam_0, &iLocal_146, &iLocal_140, &iLocal_139, 1))
				{
					iLocal_57 = 2;
					iLocal_146 = 0;
				}
				else if (iLocal_139 == 1)
				{
					iLocal_57 = 5;
					iLocal_146 = 0;
				}
				break;
			
			case 0x00000002:
				if (VDIST(Global_54078, *(&ScriptParam_0 + 16)) > Function_98())
				{
					iLocal_57 = 5;
					iLocal_146 = 0;
					break;
				}
				CREATE_DECAL(Vector(StackVal, StackVal, StackVal) + Vector(Vector(-0,62f, 0.0f, -2,08f), *(&ScriptParam_0 + 16), 0), 0,6f, 1, 1);
				uLocal_59 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uLocal_135, Function_176(), 4,203895E-45f, *(&ScriptParam_0 + 16), Vector(0.0f, 0.0f, 0.0f), Vector(30.0f, 15.0f, 30.0f));
				CLEAR_AMBIENT_OBJECTS_VOLUME(&uLocal_59, 15);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_59);
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_59);
				uLocal_53 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &uLocal_135, Function_176(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
				ATTACH_OBJECTS(StackVal, StackVal, &uLocal_53, &Global_54076, Function_176(), Vector(0.0f, 0,5f, -1.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
				switch (iLocal_58)
				{
					case 0x00000000:
						Function_97(StackVal, StackVal, &uLocal_135, Function_176(), "$/tune/refGroups/campsiteSets/cam_zombieFamily01x", *(&ScriptParam_0 + 16), Vector(0.0f, 0.0f, 0.0f), 4294967295);
						break;
					
					case 0x00000001:
						Local_161 = Vector(-3.0f, -0,7f, 1,42f);
						Local_164 = Vector(-3,9f, -0,7f, -2,88f);
						Local_167 = Vector(-2,2f, -0,7f, -0,98f);
						Local_170 = Vector(0.0f, 0.0f, 0,2f);
						Local_173 = Vector(-2,92f, 0.0f, -1,73f);
						fLocal_176 = 220.0f;
						Function_97(StackVal, StackVal, &uLocal_135, Function_176(), "$/tune/refGroups/campsiteSets/cam_zombieFamily02x", *(&ScriptParam_0 + 16), Vector(0.0f, 0.0f, 0.0f), 4294967295);
						break;
				}
				PRINTVECTOR(*(&ScriptParam_0 + 16));
				PRINTNL();
				PRINTVECTOR(Global_54078);
				PRINTNL();
				Local_152 = Vector(StackVal, StackVal, StackVal) + Vector(Local_177, *(&ScriptParam_0 + 16), StackVal);
				Local_155 = Vector(0.0f, 0.0f, 0.0f);
				Local_158 = Vector(0.0f, 0.0f, 0.0f);
				FIND_GROUND_INTERSECTION(&Local_152, 2.0f, &Local_158, &Local_155);
				Function_96(Vector(Function_176(), &uLocal_135, StackVal) + Vector(Local_167, *(&ScriptParam_0 + 16), iLocal_65[0]), Local_155);
				uLocal_61[0] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, StackVal, Function_96(Vector(Function_176(), &uLocal_135, StackVal) + Vector(Local_167, *(&ScriptParam_0 + 16), iLocal_65[0]), Local_155));
				Function_89(&(uLocal_61[0]), 1254, 4294967295, 4294967295, 4294967295, 1, 1, 1);
				SNAP_OBJECT_TO_GROUND(&(uLocal_61[0]), 5.0f, 0, 1092616192);
				SET_ACTOR_ALLOW_WEAPON_REACTIONS(&(uLocal_61[0]), 0);
				DECOR_SET_BOOL(&(uLocal_61[0]), "CanBeLasso", 0);
				Local_152 = Vector(StackVal, StackVal, StackVal) + Vector(Local_164, *(&ScriptParam_0 + 16), StackVal);
				FIND_GROUND_INTERSECTION(&Local_152, 3.0f, &Local_158, &Local_155);
				uLocal_55 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, &uLocal_135, Vector(Function_176(), "p_gen_stake01x", (Local_158 + 0,08f)), Vector(0.0f, 0.0f, 0.0f), 1);
				Function_86(&(uLocal_61[0]), &uLocal_55);
				SET_ACTOR_CAN_PLAY_GESTURES(&(uLocal_61[0]), false);
				DECOR_SET_BOOL(&(uLocal_61[0]), "CheckForCamera", 1);
				bLocal_141 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, Vector(Function_176(), &uLocal_135, StackVal) + Vector(Local_170, *(&ScriptParam_0 + 16), iLocal_69), *(&ScriptParam_0 + 28));
				GIVE_WEAPON_TO_ACTOR(&bLocal_141, 4, 0f, 1, 1);
				uLocal_41 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_176(), &bLocal_141, StackVal) + Vector(Local_170, *(&ScriptParam_0 + 16), &iVar12), Vector(0.0f, 0.0f, 0.0f));
				DECOR_SET_BOOL(&bLocal_141, "criminal", 1);
				Function_85(&bLocal_141);
				AI_DONT_HARM_ACTOR(&(uLocal_61[0]));
				MEMORY_CONSIDER_AS(&bLocal_141, &(uLocal_61[0]), 0);
				uLocal_43 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_176(), &bLocal_141, StackVal) + Vector(Local_173, *(&ScriptParam_0 + 16), "z_dlc_z_family"), Vector(0.0f, fLocal_176, 0.0f));
				SNAP_OBJECT_TO_GROUND(&uLocal_43, 5.0f, 0, 1092616192);
				TASK_USE_GRINGO(&(uLocal_61[0]), GET_GRINGO_FROM_OBJECT(&uLocal_43), "UseCase1", 1, 1);
				SNAP_ACTOR_TO_GRINGO(&(uLocal_61[0]), &uLocal_43, "UseCase1", 0, 0, 0);
				if (IS_OBJECT_VALID(&uVar9))
				{
					UNK_0x6745191B(StackVal, &uVar9, Vector(0.0f, 0.0f, 0.0f));
				}
				SET_ACTOR_CAN_PLAY_GESTURES(&bLocal_141, false);
				Function_84(&bLocal_141, 0);
				Function_83(&bLocal_141);
				SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_ACTOR(&bLocal_141), 1,5f, 1, 1092616192);
				Function_82(&bLocal_141);
				GIVE_WEAPON_TO_ACTOR(&bLocal_141, 40, 0f, 1, 1);
				MEMORY_REPORT_POSITION_AUTO(&bLocal_141, &Global_54076, 1);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(&bLocal_141, 0);
				UNK_0x99AFD2D1(&bLocal_141, 1, 1);
				GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uLocal_41), 0);
				DESTROY_OBJECT(&uLocal_137);
				SNAP_OBJECT_TO_GROUND(&uLocal_41, 2.0f, 1, 1092616192);
				if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&uLocal_41)))
				{
					if (bLocal_194)
					{
						Function_80(&uLocal_195, 1, 0, 4294967295, 4294967295);
					}
					TASK_USE_GRINGO(&bLocal_141, GET_GRINGO_FROM_OBJECT(&uLocal_41), "UseCase1", 4294967295, 1);
					SNAP_ACTOR_TO_GRINGO(&bLocal_141, &uLocal_41, "UseCase1", 1, 0, 0);
				}
				Local_152 = Vector(StackVal, StackVal, StackVal) + Vector(Local_161, *(&ScriptParam_0 + 16), StackVal);
				Local_152.f_4 = (StackVal + 2.0f);
				Local_155 = Vector(0.0f, 0.0f, 0.0f);
				Var18 = Vector(0.0f, 0.0f, 0.0f);
				PRINTSTRING("Probe start pos");
				PRINTVECTOR(Local_152);
				PRINTSTRING("nProbe pos");
				PRINTVECTOR(Var18);
				Function_78(StackVal, &uLocal_147, &uLocal_148, &uLocal_149, 2,95f, *(&ScriptParam_0 + 16));
				Local_155.f_4 = 270.0f;
				PRINTVECTOR(Local_155);
				Local_158 = Vector(0.0f, 0.0f, 0.0f);
				FIND_GROUND_INTERSECTION(&Local_152, 2.0f, &Local_158, &Local_155);
				uLocal_128 = CREATE_GRINGO_IN_LAYOUT(&uLocal_135, Function_176(), "$/content/scripting/gringo/SimpleGringo/Locked_Footlocker", Local_158, Local_180);
				SNAP_OBJECT_TO_GROUND(&uLocal_128, 7.0f, 1, 1092616192);
				uLocal_130 = GET_GRINGO_FROM_OBJECT(&uLocal_128);
				DECOR_SET_OBJECT(GET_OBJECT_FROM_GRINGO(&uLocal_130), "nboxOwnerA", &bLocal_141);
				Function_74(StackVal, &uLocal_130, Var18, 4294967295, 11, 0x3f800000);
				Function_73(&uLocal_150, 1);
				iLocal_57 = 3;
				iLocal_146 = 0;
				break;
			
			case 0x00000003:
				Function_72();
				Function_43(StackVal, Function_72(), &bLocal_124, ScriptParam_0.f_64, &bLocal_141, 60, 0x42700000, 1);
				Function_72();
				Function_43(StackVal, Function_72(), &bLocal_124, ScriptParam_0.f_64, &(uLocal_61[0]), 60, 0x42700000, 1);
				if (!Function_37(ScriptParam_0.f_64, &bLocal_141, &iLocal_125, &iLocal_126, 0, 1, 1, 1))
				{
					iLocal_57 = 5;
					iLocal_146 = 0;
					break;
				}
				if (IS_OBJECT_VALID(&uLocal_29))
				{
					if (LEASH_IS_BROKEN(&uLocal_29))
					{
						RESET_ANIM_SET_FOR_ACTOR(&(uLocal_61[0]), 1);
						iVar8 = 1;
						TASK_MELEE_ATTACK(&(uLocal_61[0]), &bLocal_141, -1.0f);
						if (iLocal_133 <= 7)
						{
							iLocal_133 = 7;
							Function_36(&bLocal_141, &Global_54076, "ZombieFamily_msg05", "ZombieFamily_msg05", 5, 60, 1, 1);
						}
					}
				}
				if (IS_ACTOR_VALID(&(uLocal_61[0])))
				{
					if (Function_35(&Global_54076, &(uLocal_61[0])) > 1,5f)
					{
						if ((iLocal_133 == 8 && iLocal_133 == 3) && iLocal_133 == 6)
						{
							AI_QUICK_EXIT_GRINGO(&(uLocal_61[0]), 1);
							RESET_ANIM_SET_FOR_ACTOR(&(uLocal_61[0]), 1);
							TASK_CLEAR(&(uLocal_61[0]));
							TASK_MELEE_ATTACK(&(uLocal_61[0]), &Global_54076, -1.0f);
							if (iLocal_133 == 5)
							{
								iLocal_133 = 6;
							}
							else
							{
								iLocal_134 = iLocal_133;
								iLocal_133 = 3;
							}
							Function_34(&uLocal_188);
						}
					}
				}
				if (IS_ACTOR_VALID(&(uLocal_61[0])))
				{
					if (Function_35(&Global_54076, &bLocal_141) > 15.0f && iLocal_127)
					{
						if (!IS_AMBIENT_SPEECH_PLAYING(&bLocal_141))
						{
							Function_36(&bLocal_141, &Global_54076, "ZombieFamily_msg04", "ZombieFamily_msg04", 5, 60, 1, 1);
							Function_174(&uLocal_49, 0.0f);
							iLocal_127 = 0;
						}
					}
				}
				if (GET_DEBUG_DRAW_STATE())
				{
					if (IS_ACTOR_VALID(&bLocal_141))
					{
						GET_POSITION(&bLocal_141, &uLocal_143);
						iLocal_146 = 0;
					}
				}
				if (DECOR_CHECK_EXIST(&bLocal_141, "actorStolen") && !iLocal_45)
				{
					iLocal_133 = 7;
					CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&bLocal_141);
					Function_36(&bLocal_141, &Global_54076, "ZombieFamily_msg07", "ZombieFamily_msg07", 5, 60, 1, 1);
					iLocal_45 = 1;
				}
				if (Function_33(&(uLocal_61[0])) == &Global_54076)
				{
					if (iLocal_133 <= 7)
					{
						iLocal_133 = 7;
						CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&bLocal_141);
						Function_36(&bLocal_141, &Global_54076, "ZombieFamily_msg05", "ZombieFamily_msg05", 5, 60, 1, 1);
					}
				}
				if (Function_30(&bLocal_141, &uLocal_151, &fVar16, uLocal_150, iLocal_45, 0x40400000))
				{
					Function_36(&Global_54076, &bLocal_141, "ZombieFamilyPlayer_msg01", "ZombieFamilyPlayer_msg01", 5, 60, 1, 1);
					iLocal_133 = 7;
					iLocal_45 = 1;
				}
				if (Function_29(&(uLocal_61[0]), &Global_54076) && iLocal_46 != 0)
				{
					Function_36(&Global_54076, &bLocal_141, "ZombieFamilyPlayer_msg02", "ZombieFamilyPlayer_msg02", 5, 60, 1, 1);
					iLocal_46 = 1;
				}
				if (Function_27(StackVal, &Global_54076, *(&ScriptParam_0 + 16)) < Function_25(1))
				{
					iLocal_146 = 0;
					iLocal_57 = 5;
					break;
				}
				if (IS_ACTOR_VALID(&bLocal_141))
				{
					if (Function_27(StackVal, &bLocal_141, *(&ScriptParam_0 + 16)) < Function_25(1))
					{
						Function_23(&bLocal_141);
					}
				}
				iLocal_146 = 0;
				if (IS_ACTOR_VALID(&bLocal_141))
				{
					if (Function_17(&iLocal_133, &uLocal_61))
					{
						iVar8 = 1;
						iLocal_57 = 5;
					}
				}
				else
				{
					iLocal_57 = 5;
				}
				break;
			
			case 0x00000005:
				iLocal_57 = 6;
				iLocal_146 = 0;
				break;
			
			case 0x00000006:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				iLocal_146 = 0;
				break;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(iLocal_146);
		}
	}
	Function_146(&uLocal_61, 4294967295);
	Function_145(&bLocal_141);
	Function_16(&uLocal_147, &uLocal_148, &uLocal_149);
	Function_15(iLocal_69);
	Function_15(iLocal_65[0]);
	Function_23(&bLocal_141);
	Function_23(&(uLocal_61[0]));
	if (!bLocal_124)
	{
		Function_9(ScriptParam_0.f_64, 0.0f, 0, 1, 0);
		if (IS_OBJECT_VALID(&uLocal_135))
		{
			Function_8(&bLocal_141);
			Function_7(&uLocal_61, 4294967295);
			UNK_0xA936E73B(&uLocal_135, 1);
			MARK_OBJECT_FOR_AGGRESSIVE_CLEANUP(&uLocal_135, 1);
		}
	}
	else if (iVar8 != 0 && iLocal_45 != 0)
	{
		Function_7(&uLocal_61, 4294967295);
		if (IS_ACTOR_VALID(&bLocal_141))
		{
			RESET_ANIM_SET_FOR_ACTOR(&bLocal_141, 0);
		}
		if (bLocal_194)
		{
			Function_80(&uLocal_195, 1, 0, 4294967295, 4294967295);
		}
		Function_8(&bLocal_141);
	}
	if (Function_5(&bLocal_141, 0))
	{
		AI_SPEECH_SET_ALLOW_FOR_ACTOR(&bLocal_141, 1);
		UNK_0x99AFD2D1(&bLocal_141, 0, 0);
	}
	if (Function_5(&(uLocal_61[0]), 0))
	{
		RESET_ANIM_SET_FOR_ACTOR(&(uLocal_61[0]), 1);
		AI_CLEAR_DONT_HARM_ACTOR(&(uLocal_61[0]));
		if (IS_ACTOR_VALID(&bLocal_141))
		{
			MEMORY_CONSIDER_AS(&bLocal_141, &(uLocal_61[0]), 4);
			MEMORY_CONSIDER_AS(&(uLocal_61[0]), &bLocal_141, 4);
		}
		if (IS_ACTOR_VALID(&bLocal_141))
		{
			if (iVar8 == 0)
			{
				TASK_MELEE_ATTACK(&(uLocal_61[0]), &bLocal_141, -1.0f);
			}
		}
	}
	if (ScriptParam_0.f_40)
	{
		Global_6642 = 0;
	}
	if (bLocal_194)
	{
		Function_80(&uLocal_195, 1, 0, 4294967295, 4294967295);
	}
	if (bLocal_194)
	{
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	}
	if (IS_OBJECT_VALID(&uVar9))
	{
		UNK_0xE18028C1(&uVar9);
		DESTROY_OBJECT(&uVar9);
	}
	if (iLocal_47 == 1)
	{
		AUDIO_ENABLE_PLAYER_TAUNTS();
		iLocal_47 = 0;
	}
	if (IS_VOLUME_VALID(&uLocal_59))
	{
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_59);
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_59);
	}
	Function_1(&iLocal_70);
	UNK_0xA936E73B(&uLocal_135, 1);
	RELEASE_LAYOUT_REF(&uLocal_135);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x103D / 4157
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

void Function_2(struct<2>[] Param0, int iParam1) //Position: 0x1065 / 4197
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

void Function_3(struct<13> Param0) //Position: 0x11B0 / 4528
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_4(struct<13> Param0) //Position: 0x11CD / 4557
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_5(bool bParam0, bool bParam1) //Position: 0x11EB / 4587
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
			Function_23(&bParam0);
			return 0;
		}
		if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&bParam0), 163840))
		{
			Function_23(&bParam0);
			return 0;
		}
	}
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (Function_6(&bParam0, 0) && !AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&bParam0), 16384))
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

int Function_6(int iParam0, int iParam1) //Position: 0x1296 / 4758
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

void Function_7(var[] uParam0, int iParam1) //Position: 0x12E8 / 4840
{
	int iVar0;
	
	if (&iParam1 == 4294967295)
	{
		iParam1 = uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= &iParam1)
	{
		Function_8(&(uParam0[iVar0]));
		iVar0++;
	}
	return;
}

void Function_8(bool bParam0) //Position: 0x131A / 4890
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		RESET_ANIM_SET_FOR_ACTOR(&bParam0, 0);
		TASK_FLEE_ACTOR(&bParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
		TASK_PRIORITY_SET(&bParam0, false);
	}
	return;
}

bool Function_9(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x134A / 4938
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
		Function_11("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
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
			Function_10(&bVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_10(&bVar0);
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
			Function_10(&bVar0);
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

void Function_10(bool bParam0) //Position: 0x15B6 / 5558
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

void Function_11(var uParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1600 / 5632
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_12(Global_10966) };
		}
		PRINT_SMALL_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &Var0, &iParam5);
	}
	else
	{
		uVar4 = "";
		PRINT_SMALL_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &uVar4, &iParam5);
	}
}

struct<16> Function_12(int iParam0) //Position: 0x1685 / 5765
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

bool Function_13() //Position: 0x16C4 / 5828
{
	if (Function_14(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_14(int iParam0, int iParam1) //Position: 0x16DF / 5855
{
	return (iParam0 && iParam1) == 0;
}

void Function_15(int iParam0) //Position: 0x16EC / 5868
{
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(iParam0);
	return;
}

void Function_16(var uParam0, var uParam1, int iParam2) //Position: 0x16F7 / 5879
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

bool Function_17(var uParam0, int[] iParam1) //Position: 0x172A / 5930
{
	var uVar0;
	
	GET_POSITION(&bLocal_141, &uVar0);
	iParam1[0] = &iParam1[0];
	switch (uParam0)
	{
		case 0x00000000:
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &bLocal_141, 1.0f, 40.0f, 1, 0, 0) && !IS_AMBIENT_SPEECH_PLAYING(&bLocal_141))
			{
				LEASH_CONSTRAIN(&uLocal_29);
				Function_36(&bLocal_141, &(iParam1[0]), "ZombieFamily_msg01", "ZombieFamily_msg01", 5, 60, 1, 1);
				Function_174(&uLocal_49, 0.0f);
				uParam0 = 1;
			}
			break;
		
		case 0x00000001:
			if ((Function_19(&uLocal_49, 6.0f) && !IS_AMBIENT_SPEECH_PLAYING(&bLocal_141)) && Function_35(&Global_54076, &bLocal_141) > 40.0f)
			{
				Function_36(&bLocal_141, &(iParam1[0]), "ZombieFamily_msg02", "ZombieFamily_msg02", 5, 60, 1, 1);
				Function_174(&uLocal_49, 0.0f);
				uParam0 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_19(&uLocal_49, 6.0f) && !IS_AMBIENT_SPEECH_PLAYING(&bLocal_141))
			{
				AI_QUICK_EXIT_GRINGO(&bLocal_141, 1);
				TASK_USE_GRINGO(&bLocal_141, GET_GRINGO_FROM_OBJECT(&uLocal_43), "Master", 1, 1);
				TASK_PRIORITY_SET(&bLocal_141, true);
				uParam0 = 8;
			}
			break;
		
		case 0x00000008:
			if (GET_CURRENT_GRINGO(&bLocal_141) != GET_GRINGO_FROM_OBJECT(&uLocal_43) && iLocal_187)
			{
				Function_36(&bLocal_141, &(iParam1[0]), "ZombieFamily_msg03", "ZombieFamily_msg03", 5, 60, 1, 1);
				iLocal_187 = 0;
			}
			if (GET_TASK_STATUS(&bLocal_141, 19) == 0)
			{
				RESET_ANIM_SET_FOR_ACTOR(&bLocal_141, 1);
				TASK_USE_GRINGO(&bLocal_141, GET_GRINGO_FROM_OBJECT(&uLocal_41), "UseCase1", 4294967295, 1);
				TASK_PRIORITY_SET(&bLocal_141, true);
				uParam0 = 9;
			}
			break;
		
		case 0x00000007:
			GRINGO_DEACTIVATE(GET_GRINGO_FROM_OBJECT(&uLocal_41));
			GRINGO_DEACTIVATE(GET_GRINGO_FROM_OBJECT(&uLocal_43));
			AI_QUICK_EXIT_GRINGO(&bLocal_141, 1);
			RESET_ANIM_SET_FOR_ACTOR(&bLocal_141, 1);
			Function_18(&bLocal_141, &Global_54076);
			TASK_WANDER(&(iParam1[0]), 3212836864);
			TASK_PRIORITY_SET(&(iParam1[0]), 2);
			return 1;
			break;
		
		case 0x00000003:
			if ((Function_35(&Global_54076, &(iParam1[0])) < 8.0f && Function_19(&uLocal_188, 5.0f)) || (Function_35(&Global_54076, &(iParam1[0])) < 4.0f && Function_19(&uLocal_188, 10.0f)))
			{
				if (iLocal_134 <= 8)
				{
					TASK_USE_GRINGO(&(uLocal_61[0]), GET_GRINGO_FROM_OBJECT(&uLocal_43), "UseCase1", 1, 1);
					uParam0 = 4;
				}
			}
			break;
		
		case 0x00000004:
			if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&(uLocal_61[0]))))
			{
				uParam0 = 2;
			}
			break;
		
		case 0x00000009:
			if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&bLocal_141)) && !IS_AMBIENT_SPEECH_PLAYING(&bLocal_141))
			{
				Function_36(&bLocal_141, &Global_54076, "ZombieFamily_msg06", "ZombieFamily_msg06", 5, 60, 1, 1);
				uParam0 = 5;
			}
			break;
		
		case 0x00000005:
			break;
	}
	return 0;
}

int Function_18(var uParam0, int iParam1) //Position: 0x1A4C / 6732
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

int Function_19(var uParam0, float fParam1) //Position: 0x1B42 / 6978
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

float Function_20(vector3 vParam0) //Position: 0x1B60 / 7008
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

bool Function_21(int iParam0) //Position: 0x1C2D / 7213
{
	return Function_14(iParam0, 2);
}

bool Function_22(int iParam0) //Position: 0x1C3B / 7227
{
	return Function_14(iParam0, 1);
}

int Function_23(bool bParam0) //Position: 0x1C49 / 7241
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		Function_24(&bParam0);
		return 1;
	}
	return 0;
}

void Function_24(var uParam0) //Position: 0x1C61 / 7265
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

float Function_25(bool bParam0) //Position: 0x1C94 / 7316
{
	var uVar0;
	float fVar1;
	
	if (!&bParam0)
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

void Function_26(float fParam0, int iParam1) //Position: 0x1CD0 / 7376
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

float Function_27(bool bParam0, struct<2> Param1) //Position: 0x1D61 / 7521
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&bParam0))
	{
		Function_28(&bParam0);
		Var0 = Function_28(&bParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

struct<8> Function_28(int iParam0) //Position: 0x1DD8 / 7640
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

int Function_29(int iParam0, bool bParam1) //Position: 0x1E44 / 7748
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&bParam1))
	{
		return 0;
	}
	if (GET_LAST_ATTACKER(&iParam0) == &bParam1)
	{
		if (IS_ACTOR_DEAD(&iParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_30(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, float fParam5) //Position: 0x1E7A / 7802
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
		fVar0 = Function_35(&iParam0, &Global_54076);
		if (!Function_14(&iParam3, 8))
		{
			if (GET_LAST_ATTACKER(&iParam0) == &Global_54076)
			{
				uParam1 = 8;
				Function_31(&iParam0);
				return 1;
			}
		}
		if (!Function_14(&iParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(&iParam0, 1.0f))
			{
				uParam1 = 2;
				Function_31(&iParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(&iParam0, 1.0f, 1.0f))
			{
				uParam1 = 2;
				Function_31(&iParam0);
				return 1;
			}
		}
		if (!Function_14(&iParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(&iParam0) || (((GET_ACTOR_UNDER_RETICLE(&Global_54076, 0) != &iParam0 && IS_PLAYER_WEAPON_ZOOMED(&Global_54076)) && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(&Global_54076) != &iParam0 && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f))
			{
				if (uParam2 > 0.0f)
				{
					uParam1 = 4;
					Function_31(&iParam0);
					return 1;
				}
				if (uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - uParam2) < 1,3f)
					{
						uParam1 = 4;
						Function_31(&iParam0);
						return 1;
					}
				}
				uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_14(&iParam3, 1))
		{
			if (Global_6646 || Global_6647)
			{
				uParam1 = 1;
				Function_31(&iParam0);
				return 1;
			}
		}
		if (!Function_14(&iParam3, 16))
		{
			if (UNK_0x7F454A92(&iParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(&iParam0)) > 2.0f && fVar0 > 18.0f)
				{
					uParam1 = 16;
					Function_31(&iParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_31(int iParam0) //Position: 0x2043 / 8259
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&iParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(&iParam0, 1);
	UNK_0x99AFD2D1(&iParam0, 0, 0);
	Function_32(&iParam0);
	MEMORY_CONSIDER_AS(&Global_54076, &iParam0, 2);
	MEMORY_CONSIDER_AS(&iParam0, &Global_54076, 2);
	AI_GOAL_LOOK_CLEAR(&iParam0);
	return;
}

void Function_32(int iParam0) //Position: 0x2080 / 8320
{
	SAY_SINGLE_LINE_CONTEXT(&iParam0, 60, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

int Function_33(int iParam0) //Position: 0x2099 / 8345
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		return GET_LAST_ATTACKER(&iParam0);
	}
	return "";
}

void Function_34(int iParam0) //Position: 0x20B1 / 8369
{
	Function_174(&iParam0, 0.0f);
	return;
}

float Function_35(var uParam0, bool bParam1) //Position: 0x20BE / 8382
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!IS_ACTOR_VALID(&uParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(&bParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(&uParam0, &Var0);
	GET_POSITION(&bParam1, &Var2);
	return VDIST(Var0, Var2);
}

void Function_36(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x21B3 / 8627
{
	iParam1 = &iParam1;
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_ACTOR_ALIVE(&iParam0) && Function_35(&iParam0, &Global_54076) >= IntToFloat(&iParam5))
		{
			if (!IS_ACTOR_VALID(&iParam1))
			{
				iParam1 = "";
			}
			CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&iParam0);
			if (&bParam6)
			{
				if (IS_ACTOR_HOGTIED(&iParam0))
				{
					if (!SAY_SINGLE_LINE_STRING_BEAT(&iParam0, &bParam2, &iParam1, 1, 1, &iParam4, &iParam7, 0, 0, 1))
					{
						bParam3 = &bParam3;
					}
				}
				else if (!SAY_SINGLE_LINE_STRING_BEAT(&iParam0, &bParam2, &iParam1, 1, 1, &iParam4, &iParam7, 0, 1, 1))
				{
					bParam3 = &bParam3;
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING(&iParam0, &bParam2, true, true, &iParam4, 0, false, true);
			}
		}
	}
}

bool Function_37(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x2260 / 8800
{
	if (StackVal & 64 == 64)
	{
		if (!uParam2)
		{
			if (IS_ACTOR_VALID(&uParam1))
			{
				if (Function_35(&Global_54076, &uParam1) > 15.0f)
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
		if (Function_40() && !uParam2)
		{
			return 0;
		}
		if (Function_39(iParam0) && !uParam2)
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
		if (!Function_38(iParam0, &uParam5))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_38(int iParam0, int iParam1) //Position: 0x23A3 / 9123
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

int Function_39(int iParam0) //Position: 0x23C4 / 9156
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

int Function_40() //Position: 0x2404 / 9220
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
						if (Function_41(&Global_54076, &Global_39621[iVar05] + 16) > IntToFloat(iVar1))
						{
							return 1;
						}
					}
				}
			}
			if (Function_41(&Global_54076, &Global_39621[iVar05] + 16) > IntToFloat(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

float Function_41(int iParam0, var uParam1) //Position: 0x24C7 / 9415
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			Function_28(&iParam0);
			Var0 = Function_28(&iParam0);
			Function_42(&uParam1);
			Var2 = Function_42(&uParam1);
			return VDIST(Var0, Var2);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

struct<8> Function_42(bool bParam0) //Position: 0x2569 / 9577
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

void Function_43(struct<2> Param0, int iParam2, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7) //Position: 0x25D7 / 9687
{
	int iVar0;
	
	iVar0 = 0;
	if (!iParam2)
	{
		iVar0 = 1;
	}
	if (IS_ACTOR_VALID(&uParam4))
	{
		if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam4, 1.0f, &iParam6, 1, 1, 0))
		{
			if (&iParam5 != 0)
			{
				Global_38378 = (GET_CURRENT_GAME_TIME() + IntToFloat(&iParam5));
			}
			iParam2 = 1;
		}
	}
	else if (!Function_71(StackVal, Param0))
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
			Function_70(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_69(0);
		}
		if (&bParam7)
		{
			Function_67(0, GET_THIS_SCRIPT_ID());
			Global_6615 = GET_THIS_SCRIPT_ID();
			Function_65(iParam3);
			Global_6644 = 1;
		}
		Function_63(iParam3);
		if (Function_62(StackVal, 32768))
		{
			Function_59(1);
		}
		Global_26652[iParam34].f_16++;
		Function_44(408, 1, 0, 0);
	}
}

int Function_44(int iParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x26EC / 9964
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
	if (uParam2 && bParam1 == 0)
	{
		Function_46(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &uParam3);
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
	Function_45(iParam0);
	return 1;
}

void Function_45(bool bParam0) //Position: 0x2914 / 10516
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

void Function_46(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x29B2 / 10674
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
					fVar19 = (Function_55(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_55(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_53(iParam0, fVar19, fVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_50(fVar19, fParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&uParam7))
							{
								uParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_48(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&uParam7), &Global_55480[iParam016] + 32, Function_47(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_176(), &Var9);
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

var Function_47(int iParam0) //Position: 0x2FF0 / 12272
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_48(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x3001 / 12289
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
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_49(char* cParam0) //Position: 0x30F8 / 12536
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_50(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x3113 / 12563
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_52(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_51(Function_52(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_51(int iParam0, int iParam1) //Position: 0x317A / 12666
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_52(int iParam0, int iParam1) //Position: 0x318C / 12684
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_53(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x319E / 12702
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
		uParam3 = ROUND((fVar2 * 100.0f));
		uParam4 = ROUND((fVar3 * 100.0f));
	}
	else
	{
		uParam3 = ROUND(((fParam1 * 100.0f) / fVar0));
		uParam4 = ROUND(((fParam2 * 100.0f) / fVar0));
	}
}

int Function_54(int iParam0) //Position: 0x32D2 / 13010
{
	return Global_55480[iParam016].f_96;
}

float Function_55(int iParam0) //Position: 0x32E1 / 13025
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_56(int iParam0) //Position: 0x331A / 13082
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_57(int iParam0) //Position: 0x3357 / 13143
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

int Function_58(int iParam0, float fParam1, bool bParam2) //Position: 0x34F1 / 13553
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

void Function_59(bool bParam0) //Position: 0x3735 / 14133
{
	if (bParam0)
	{
		Function_61(0x10000000);
	}
	else
	{
		Function_60(0x10000000);
	}
	Global_39922.f_304 = 0;
	return;
}

void Function_60(int iParam0) //Position: 0x375A / 14170
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_61(int iParam0) //Position: 0x3777 / 14199
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

bool Function_62(var uParam0, int iParam1) //Position: 0x378A / 14218
{
	return (uParam0 && iParam1) == 0;
}

void Function_63(int iParam0) //Position: 0x3797 / 14231
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (!Function_14(StackVal, 524288))
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
			bVar1 = Function_64(iVar0 * 60);
			ADD_TIME(&Global_27462[iParam052] + 376, 0, 0, bVar1, 0);
			Global_26652[iParam04] = &Global_27462[iParam052] + 376;
		}
	}
	return;
}

int Function_64(int iParam0) //Position: 0x383D / 14397
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_65(int iParam0) //Position: 0x3854 / 14420
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
	Function_66(&Var0 + 80[Var0.f_762], &(Global_26652[iParam04]), iParam0);
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

void Function_66(vector3 vParam0) //Position: 0x38F3 / 14579
{
	vParam0.y = iParam2;
	vParam0 = Param1.f_16;
	vParam0.f_8 = 1;
	return;
}

void Function_67(int iParam0, int iParam1) //Position: 0x390F / 14607
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
			Function_68(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_68(struct<113> Param0) //Position: 0x3996 / 14742
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

void Function_69(int iParam0) //Position: 0x39F4 / 14836
{
	*(&Global_21369 + 136) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 136, 0, 0, (&iParam0 + Function_64(900)), 0);
	return;
}

void Function_70(int iParam0) //Position: 0x3A18 / 14872
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, (&iParam0 + Function_64(200)), 0);
	return;
}

bool Function_71(vector3 vParam0) //Position: 0x3A3B / 14907
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

struct<8> Function_72() //Position: 0x3A53 / 14931
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_73(var uParam0, bool bParam1) //Position: 0x3A5D / 14941
{
	uParam0 = (uParam0 || bParam1);
	return;
}

void Function_74(var uParam0, struct<2> Param1, int iParam3, int iParam4, float fParam5) //Position: 0x3A6E / 14958
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
	Function_83(GET_OBJECT_FROM_GRINGO(&uParam0));
	if (&iParam3 == 4294967295)
	{
		bVar10 = false;
		Function_77(&Global_54076, &uVar3, &bVar10);
		if (bVar10 >= 0)
		{
			PRINTINT(bVar10);
			iVar11 = RAND_INT_RANGE(0, (bVar10 - 1));
			PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(uVar3[iVar11]));
			iParam3 = Function_76(&Global_54076, uVar3[iVar11]);
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
		iParam3 = Function_76(&Global_54076, &iParam3);
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
		iParam4 = Function_75();
	}
	DECOR_SET_INT(GET_OBJECT_FROM_GRINGO(&uParam0), "GiveItem", &iParam4);
}

float Function_75() //Position: 0x3BEC / 15340
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

int Function_76(var uParam0, int iParam1) //Position: 0x3C48 / 15432
{
	int iVar0;
	
	iVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(&uParam0, iParam1);
	return iVar0;
}

void Function_77(var uParam0, int[] iParam1, bool bParam2) //Position: 0x3C5A / 15450
{
	bParam2 = 0;
	if (Function_76(&uParam0, 39) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(&uParam0, 6, 1) > _GET_MAX_AMMO_AMOUNT(&uParam0, 6))
		{
			iParam1[bParam2] = 39;
			bParam2++;
		}
	}
	if (Function_76(&uParam0, 41) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(&uParam0, 8, 1) > _GET_MAX_AMMO_AMOUNT(&uParam0, 8))
		{
			iParam1[bParam2] = 41;
			bParam2++;
		}
	}
	if (Function_76(&uParam0, 40) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(&uParam0, 7, 1) > _GET_MAX_AMMO_AMOUNT(&uParam0, 7))
		{
			iParam1[bParam2] = 40;
			bParam2++;
		}
	}
	if (Function_76(&uParam0, 42) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(&uParam0, 9, 1) > _GET_MAX_AMMO_AMOUNT(&uParam0, 9))
		{
			iParam1[bParam2] = 42;
			bParam2++;
		}
	}
	if (Function_76(&uParam0, 43) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(&uParam0, 10, 1) > _GET_MAX_AMMO_AMOUNT(&uParam0, 10))
		{
			iParam1[bParam2] = 43;
			bParam2++;
		}
	}
	if (Function_76(&uParam0, 44) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(&uParam0, 11, 1) > _GET_MAX_AMMO_AMOUNT(&uParam0, 11))
		{
			iParam1[bParam2] = 44;
			bParam2++;
		}
	}
	return;
}

void Function_78(var uParam0, var uParam1, var uParam2, float fParam3, struct<2> Param4) //Position: 0x3DA5 / 15781
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
		if (Function_79(StackVal, &Global_46715, "player_herb", &uVar0, 20.0f, 5, Param4) >= 0)
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

int Function_79(char* cParam0, var uParam1, char*[] cParam2, float fParam3, int iParam4, struct<2> Param5) //Position: 0x3E50 / 15952
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

void Function_80(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x3EF6 / 16118
{
	if (uParam0 != iParam1)
	{
		uParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_81(uParam0), &iParam2, &iParam3, &iParam4);
	}
}

var Function_81(int iParam0) //Position: 0x3F20 / 16160
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

void Function_82(int iParam0) //Position: 0x454E / 17742
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

void Function_83(int iParam0) //Position: 0x4577 / 17783
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

void Function_84(var uParam0, bool bParam1) //Position: 0x45AE / 17838
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_INT(&uParam0, "honor", bParam1);
	return;
}

void Function_85(int iParam0) //Position: 0x45D0 / 17872
{
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&iParam0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iParam0, 0);
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&iParam0, 0);
	MEMORY_ATTACK_ON_SIGHT(&iParam0, 0);
	SET_ACTOR_CAN_PLAY_GESTURES(&iParam0, false);
	AI_SET_ALLOW_ATTACK_HOGTIED_ACTORS(&iParam0, 1);
	return;
}

void Function_86(float fParam0, int iParam1) //Position: 0x4600 / 17920
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (IS_ACTOR_MALE(&fParam0))
	{
		Local_31 = Vector(-0,008f, 0,036f, -0,008f);
		Local_34 = Vector(-3,046f, 4,262f, 13,672f);
	}
	else
	{
		Local_31 = Vector(0,01f, 0,034f, 0,003f);
		Local_34 = Vector(-1,221f, 63,601f, -14,377f);
	}
	Function_88(&iParam1);
	vLocal_37 = Function_88(&iParam1);
	fVar0 = 4.0f;
	fVar1 = 0,3f;
	fVar2 = 1,5f;
	fLocal_40 = ((fVar0 - fVar2) - fVar1);
	fVar3 = (fLocal_40 * 0,9f);
	if (IS_ACTOR_MALE(&fParam0))
	{
		uLocal_27 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &uLocal_135, "noTheNoose", "p_gen_noose02x", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	}
	else
	{
		uLocal_27 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &uLocal_135, "noTheNoose", "p_gen_noose02x", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	}
	SET_OBJECT_COLLIDE_WITH_OBJECT(&uLocal_27, &fParam0, 0);
	SET_OBJECT_COLLIDE_WITH_OBJECT(&fParam0, &uLocal_27, 0);
	SET_OBJECT_COLLIDE_WITH_OBJECT(&fParam0, &uLocal_29, 0);
	SET_OBJECT_COLLIDE_WITH_OBJECT(&uLocal_29, &fParam0, 0);
	ATTACH_OBJECTS(&uLocal_27, &fParam0, "neck", Local_31, Local_34, 4294967295);
	uLocal_29 = CREATE_LEASH_OBJECT(&fParam0, "theNoose", 10.0f, 5, 1, 0,006f, 10.0f, 10000.0f, 200.0f, 8.0f, 100.0f, 1.0f, 1, 0, 0);
	LEASH_ATTACH_TO_OBJECT_BONE(StackVal, StackVal, &uLocal_29, &fParam0, "neck", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0, 1, 1);
	Function_87(&fParam0, &uLocal_29, &uLocal_27);
	LEASH_STAY_CONSTRAINED(&uLocal_29, 1);
	LEASH_ATTACH_TO_WORLD(StackVal, StackVal, &uLocal_29, Vector(vLocal_37.x, (vLocal_37.y + 0,3f), vLocal_37.z), Vector(0.0f, 0.0f, 0.0f), 1);
	LEASH_CONSTRAIN(&uLocal_29);
	LEASH_SET_CONSTRAINT_LENGTH(&uLocal_29, fLocal_40);
	LEASH_SET_LEASH_LENGTH(&uLocal_29, fVar3);
	SET_ACTOR_CUTSCENE_MODE(&fParam0, 1);
	return;
}

void Function_87(float fParam0, float fParam1, int iParam2) //Position: 0x47E2 / 18402
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_MALE(&fParam0))
	{
		Local_31 = Vector(-0,008f, 0,036f, -0,008f);
		Local_34 = Vector(-3,046f, 4,262f, 13,672f);
	}
	else
	{
		Local_31 = Vector(0,01f, 0,034f, 0,003f);
		Local_34 = Vector(-1,221f, 63,601f, -14,377f);
	}
	GET_LOCATOR_OFFSETS(GET_PHYSINST_FROM_OBJECT(&iParam2), "attachRope", &Var0, &Var2);
	UNK_0xF76F2BB3(&Var0, &Local_34, 0, 0);
	UNK_0x65DAA654(&Var2, &Local_34, 0, 0, 0, 0);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(Local_31, Var0, StackVal);
	LEASH_ATTACH_TO_OBJECT_BONE_VISUAL(&fParam1, &fParam0, "neck", Var0, Var2, 0, 1, 1);
	return;
}

struct<8> Function_88(bool bParam0) //Position: 0x4897 / 18583
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&bParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_POSITION(&bParam0, &Var0);
	return StackVal, Var0;
}

void Function_89(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x48C0 / 18624
{
	var uVar0;
	
	if (Function_95(&uParam0) && !Function_94(&uParam0, 1))
	{
		LOG_ERROR("Calling MAKE_ACTOR_ZOMBIE() on a CUSTOM ZOMBIE! Don't do that!");
		return;
	}
	TURN_ACTOR_INTO_ZOMBIE(&uParam0, &iParam1);
	if (&iParam2 == 4294967294 && &iParam3 == 4294967294)
	{
		if (&iParam2 == 4294967295)
		{
			iParam2 = RAND_INT_RANGE(0, 4);
		}
		if (&iParam3 == 4294967295)
		{
			iParam3 = RAND_INT_RANGE(0, 4);
		}
		if (!ADD_ZOMBIE_TO_ACTOR(&uParam0, &iParam2, &iParam3))
		{
			LOG_ERROR("MAKE_ACTOR_ZOMBIE: Failed to apply bloody head/body textures!");
		}
	}
	if (&bParam6)
	{
		DEEQUIP_ACCESSORY(&uParam0, 0);
	}
	if (&bParam7)
	{
		DELETE_ALL_WEAPONS_FROM_ACTOR(&uParam0);
	}
	Function_92(&uParam0);
	DECOR_SET_BOOL(&uParam0, "Zombie", 1);
	Function_83(&uParam0);
	SET_ACTOR_ALLOW_DISARM(&uParam0, 0);
	SET_CRIPPLE_ENABLE(&uParam0, 0);
	SET_CRIPPLE_FLAG(&uParam0, 0);
	SET_ALLOW_COLD_WEATHER_BREATH(&uParam0, 0);
	SET_ACTOR_CAN_PLAY_GESTURES(&uParam0, false);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&uParam0, 0);
	SET_ACTOR_ALLOW_NM_BUMP_REACTIONS(&uParam0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uParam0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTION_FLEE(&uParam0, 0);
	SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(&uParam0, 1);
	COMBAT_CLASS_AI_SET_FIGHT_DESIRED_DISTANCE(&uParam0, 0.0f, 1,115f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 28, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 33, 15.0f);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&uParam0, 155.0f);
	AI_SET_NAV_HAZARD_AVOIDANCE_ENABLED(&uParam0, 0, 0);
	uVar0 = AI_PREDICATE_FIND_NAMED("NonToxic", 0);
	if (AI_PREDICATE_IS_VALID(&uVar0))
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(&uParam0, &uVar0, 1);
	}
	if (&iParam1 <= 1204 && &iParam1 >= 1213)
	{
		DECOR_SET_BOOL(&uParam0, "FastZombie", 1);
	}
	else if (&iParam1 <= 1214 && &iParam1 >= 1221)
	{
		DECOR_SET_BOOL(&uParam0, "BruiserZombie", 1);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 28, 12,5f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 29, 12.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 30, 0,5f);
	}
	SET_ACTOR_HARD_LOCK_AQUIRE_BONE_CASUAL(&uParam0, "head");
	if (&iParam1 <= 1214 && &iParam1 >= 1221)
	{
		SET_ACTOR_BASE_SCORE(&uParam0, 220.0f, 0);
		SET_ACTOR_BASE_SCORE(&uParam0, 2030.0f, 1);
	}
	else
	{
		SET_ACTOR_BASE_SCORE(&uParam0, 220.0f, 0);
		SET_ACTOR_BASE_SCORE(&uParam0, 2020.0f, 1);
	}
	Function_90(&uParam0, &uParam4, &uParam5);
}

void Function_90(var uParam0, int iParam1, bool bParam2) //Position: 0x4B5D / 19293
{
	switch (&iParam1)
	{
		case 0x00000000:
			if (!IS_ACTION_NODE_PLAYING(&uParam0, "zombie/PlayDead"))
			{
				SET_ACTION_NODE_FOR_ACTOR(&uParam0, "zombie/PlayDead");
			}
			break;
		
		case 0x00000001:
		case 0x00000002:
			if (!IS_ACTION_NODE_PLAYING(&uParam0, "zombie/GroundSpawn"))
			{
				SET_ACTION_NODE_FOR_ACTOR(&uParam0, "zombie/GroundSpawn");
			}
			break;
	}
	if (&iParam1 != 4294967295)
	{
		if (&bParam2)
		{
			Function_91(&uParam0, &iParam1, 0);
		}
		else
		{
			AI_DONT_HARM_ACTOR(&uParam0);
			SET_ALLOW_EXECUTE(&uParam0, 0);
		}
	}
	return;
}

void Function_91(var uParam0, int iParam1, bool bParam2) //Position: 0x4C1A / 19482
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	var uVar6;
	var uVar7;
	
	SET_ALLOW_EXECUTE(&uParam0, 1);
	AI_CLEAR_DONT_HARM_ACTOR(&uParam0);
	switch (&iParam1)
	{
		case 0x00000001:
			GET_POSITION(&uParam0, &Var0);
			GET_ACTOR_AXIS(&uParam0, &Var2, 2);
			Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Vector(Var2, Var0, StackVal) * Vector(0,75f, 0,75f, 0,75f), StackVal, StackVal);
			FIND_GROUND_INTERSECTION(&Var0, 10.0f, &Var2, &Var4);
			Var2.f_4 = (StackVal + 0,05f);
			uVar6 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(&uParam0, Function_176(), "script_zombie_emerge", Var2);
			if (IS_OBJECT_VALID(&uVar6))
			{
				Function_72();
				uVar7 = CREATE_POINT_IN_LAYOUT(&uParam0, Function_176(), Var2, Function_72());
				SNAP_OBJECT_TO_GROUND(&uVar7, 2,5f, 1, 1092616192);
				GET_OBJECT_ORIENTATION(&uVar7, &Var4);
				DESTROY_OBJECT(&uVar7);
				UNK_0x6745191B(&uVar6, Var4);
			}
			break;
		
		case 0x00000002:
			GET_POSITION(&uParam0, &Var0);
			GET_ACTOR_AXIS(&uParam0, &Var2, 2);
			Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Vector(Var2, Var0, StackVal) * Vector(0,75f, 0,75f, 0,75f), StackVal, StackVal);
			uVar6 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(&uParam0, Function_176(), "script_zombie_emerge", Var0);
			if (IS_OBJECT_VALID(&uVar6))
			{
				Function_72();
				uVar7 = CREATE_POINT_IN_LAYOUT(&uParam0, Function_176(), Var0, Function_72());
				SNAP_OBJECT_TO_GROUND(&uVar7, 2,5f, 1, 1092616192);
				GET_OBJECT_ORIENTATION(&uVar7, &Var4);
				DESTROY_OBJECT(&uVar7);
				UNK_0x6745191B(&uVar6, Var4);
			}
			break;
	}
	if (!&bParam2)
	{
		if (!DECOR_CHECK_EXIST(&uParam0, "WakeUp"))
		{
			DECOR_SET_BOOL(&uParam0, "WakeUp", 1);
		}
	}
	else if (!DECOR_CHECK_EXIST(&uParam0, "WakeUpFast"))
	{
		DECOR_SET_BOOL(&uParam0, "WakeUpFast", 1);
	}
	return;
}

void Function_92(int iParam0) //Position: 0x4DE6 / 19942
{
	COMBAT_CLASS_AI_CLEAR_ALL_ATTRIBS(&iParam0);
	COMBAT_CLASS_AI_SET_FIGHT_ATTACK_DISTANCE(&iParam0, 0,4f, 1,1f);
	COMBAT_CLASS_AI_SET_FIGHT_DESIRED_DISTANCE(&iParam0, 0,6f, 1,1f);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS(&iParam0, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 29, 3,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 30, 1.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&iParam0, 50.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&iParam0, 1.0f, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 4, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 1, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 2, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 3, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 8, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 9, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 5, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 6, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 7, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 10, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 11, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 12, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 14, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 17, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 18, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 31, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 0, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 1, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 2, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 4, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 5, 80.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 3, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 6, 0,25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 7, 11.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 10, (2.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 11, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 12, 6.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 13, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 14, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 15, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 17, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 18, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 20, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 21, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 22, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 23, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 24, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 25, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 26, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 27, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 28, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 32, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 33, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 34, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 35, 12.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 36, 0,75f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 37, 12.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 41, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 42, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 43, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 44, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 48, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 49, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 46, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 47, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 45, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 53, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 54, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 55, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 56, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 57, -0,05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 58, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 59, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 60, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 61, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 63, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 50, -0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 51, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 52, 0,25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 8, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 62, -1.0f);
	TOUGH_ARMOUR_SET_TUNING_REGENERATION_RATE(&iParam0, 10.0f);
	TOUGH_ARMOUR_SET_TUNING_PAD_ARMOUR(&iParam0, 0.0f);
	Function_93(&iParam0, -100.0f);
	AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(&iParam0, -1.0f);
	AI_PERCEPTION_SET_VISUAL_ID_TIME(&iParam0, 0.0f);
	return;
}

void Function_93(var uParam0, int iParam1) //Position: 0x51A4 / 20900
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		TOUGH_ARMOUR_SET_TUNING_HIT_DEDUCTION(&uParam0, iVar0, iParam1);
		iVar0++;
	}
	return;
}

bool Function_94(var uParam0, int iParam1) //Position: 0x51C7 / 20935
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(&uParam0);
	if ((((((iVar0 != 1252 && iParam1) || (iVar0 != 1253 && iParam1)) || iVar0 != 541) || iVar0 != 542) || iVar0 != 543) || iVar0 != 544)
	{
		return 1;
	}
	return 0;
}

int Function_95(int iParam0) //Position: 0x520C / 21004
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(&iParam0);
	if (iVar0 <= 1204 && iVar0 >= 1227)
	{
		return 1;
	}
	return 0;
}

struct<8> Function_96(vector3 vParam0) //Position: 0x522D / 21037
{
	struct<2> Var0;
	
	Var0 = (-1.0f * (ATAN2_DEGREE(vParam0.y, vParam0.z) - 90.0f));
	Var0.f_4 = 0.0f;
	Var0.f_8 = (ATAN2_DEGREE(vParam0.y, vParam0.x) - 90.0f);
	return StackVal, Var0;
}

var Function_97(var uParam0, var uParam1, var uParam2, struct<2> Param3, struct<2> Param5, int iParam7) //Position: 0x5264 / 21092
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

float Function_98() //Position: 0x53BB / 21435
{
	float fVar0;
	int iVar1;
	
	if (Global_6612)
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

bool Function_99(struct<65> Param0) //Position: 0x53EC / 21484
{
	struct<8> Var0;
	var uVar8;
	var uVar9;
	
	if (Global_6612 && Param0.f_40)
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_137(GET_SCRIPT_NAME()) };
		uVar8 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Vector((&Param0 + 16), Function_135(0.0f, &Global_54076, *(&Param0 + 16)), 0.0f), Vector(Param0.f_60, 20.0f, Param0.f_60));
		DECOR_SET_INT(&uVar8, "script", GET_THIS_SCRIPT_ID());
		if (Param0.f_64 != 4294967295)
		{
			DECOR_SET_INT(StackVal, &uVar8, "category");
			Function_133(&uVar8, Param0.f_40);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
		*(&Param0 + 16) = Global_54078;
		return 1;
	}
	uParam3 = 0;
	if (!Function_100(&Param0))
	{
		if (Param0.f_40 == 1)
		{
			if (uParam2 == 0)
			{
				Function_11("Still scanning for the proper terrain to run this event.  Move the player around to find a good spawn location.", -1.0f, 1, 2, 1, 0);
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
		Function_11("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 5.0f, 1, 2, 1, 0);
	}
	if (&bParam4)
	{
		if (!Function_9(Param0.f_64, 0, 1, 0, 0))
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
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_137("restrictVol") };
		uVar9 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Vector(*(&Param0 + 16), Function_135(0.0f, &Global_54076, *(&Param0 + 16)), 0.0f), Vector(Param0.f_60, 20.0f, Param0.f_60));
		DECOR_SET_INT(&uVar9, "script", GET_THIS_SCRIPT_ID());
		if (Param0.f_64 != 4294967295)
		{
			DECOR_SET_INT(StackVal, &uVar9, "category");
			Function_133(&uVar9, Param0.f_40);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
	}
	return 1;
}

bool Function_100(struct<73> Param0) //Position: 0x57AA / 22442
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
			Function_132(&Param0 + 8);
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
				Var3 = Vector(0.0f, 0.0f, Function_25(1));
				ROTATE_VECTOR_XZ(&Var3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				Var3 = Vector(StackVal, StackVal, StackVal) + Vector(Var7, Var3, StackVal);
				ITERATE_IN_SPHERE(&Param0 + 8, Var3, Function_25(1));
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
						uVar0 = Function_131(StackVal, &Param0 + 8, Var7, 0,01f);
					}
					else
					{
						uVar0 = Function_130(StackVal, &Param0 + 8, Var7, 0,1f, "locflag", (&Param0 + 72 + 36)->f_24);
					}
				}
				else if ((&Param0 + 72 + 36)->f_24 == 0)
				{
					uVar0 = Function_129(StackVal, &Param0 + 8, Var7, Function_98());
				}
				else
				{
					uVar0 = Function_128(StackVal, &Param0 + 8, Var7, Function_98(), "locflag", (&Param0 + 72 + 36)->f_24);
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
			Function_132(&Param0 + 8);
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
					if (Function_127(bVar11))
					{
						if (StackVal == (&Param0 + 72)->f_68)
						{
							if ((StackVal && Global_43791[bVar11]) >= 0)
							{
								GET_OBJECT_POSITION(&uVar1, &Var3);
								if (VDIST(Var7, Var3) < fVar10 && VDIST(Var7, Var3) > Function_25(1))
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
				Function_126(&Param0 + 16, 99.0f, &Param0 + 16, 10);
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
				Function_125(&Var7, &uVar5);
				Var3 = Function_125(&Var7, &uVar5);
				if (!Function_71(StackVal, Var3))
				{
					PRINTSTRING("Player Pos: ");
					PRINTVECTOR(Var7);
					PRINTNL();
					Function_26(&fVar10, &fVar9);
					if (VDIST(Var3, Var7) < ((fVar10 + ((fVar9 - fVar10) / 2.0f)) * 0,8f))
					{
						iVar2 = Function_122(StackVal, &Param0, Var3);
					}
				}
			}
			else
			{
				iVar2 = Function_118(&Param0);
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
					if (!Function_117(StackVal, *(&Param0 + 16)))
					{
						return 0;
					}
				}
				if (Param0.f_68 == 1)
				{
					if (!Function_116(StackVal, *(&Param0 + 16)))
					{
						return 0;
					}
				}
				if (Function_14(StackVal, 131072))
				{
					if (StackVal || Function_115(Function_115(StackVal, *(&Param0 + 16)), Global_54078))
					{
						return 0;
					}
				}
				if (StackVal & 1024 == 1024)
				{
					if (Function_114(StackVal, *(&Param0 + 16)))
					{
						return 0;
					}
				}
				if (!Function_110(&Param0 + 16, &Param0 + 60, 0, Param0.f_40))
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
				uVar17 = START_CURVE_QUERY(&Global_43578, Var3, Function_109((&Param0 + 72)->f_148, 0), 0.0f, 20.0f, 5.0f, 0);
			}
			else
			{
				uVar17 = START_CURVE_QUERY(&Global_43578, Var7, Function_109((&Param0 + 72)->f_148, 0), 120.0f, 150.0f, 5.0f, 0);
			}
			if (GET_NUM_POINTS_IN_CURVE_QUERY(&uVar17) >= 0)
			{
				iVar15 = RAND_INT_RANGE(0, (GET_NUM_POINTS_IN_CURVE_QUERY(&uVar17) - 1));
				GET_POINT_FROM_CURVE_QUERY(&uVar17, iVar15, &Var12);
				Function_108(&Var12);
				*(&Param0 + 16) = Function_108(&Var12);
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
				if (!Function_117(StackVal, *(&Param0 + 16)))
				{
					return 0;
				}
			}
			if (Param0.f_68 == 1)
			{
				if (!Function_116(StackVal, *(&Param0 + 16)))
				{
					return 0;
				}
			}
			if (Param0.f_68 == 0)
			{
				if (!(StackVal || Function_117(Function_116(StackVal, *(&Param0 + 16)), *(&Param0 + 16))))
				{
					return 0;
				}
			}
			if (Function_14(StackVal, 131072))
			{
				if (StackVal || Function_115(Function_115(StackVal, *(&Param0 + 16)), Global_54078))
				{
					return 0;
				}
			}
			if (StackVal && !Function_110(&Param0 + 16, &Param0 + 60, 0, Param0.f_40) == 262144)
			{
				return 0;
			}
			break;
		
		case 0x00000004:
			if (!Function_105((&Param0 + 72)->f_148) < 0)
			{
				return 0;
			}
			break;
		
		case 0x00000007:
			switch ((&Param0 + 72)->f_156)
			{
				case 0x00000001:
					iVar18 = Function_102(StackVal, Global_43787, Global_43788, Global_43789, 1);
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
						iVar18 = Function_102(StackVal, Global_43787, Global_43788, (Global_43789 + iVar16), 1);
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
	if (Function_101(StackVal, *(&Param0 + 16)))
	{
		return 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(*(&Param0 + 16), 10.0f))
	{
		return 0;
	}
	return 1;
}

bool Function_101(struct<2> Param0) //Position: 0x6071 / 24689
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

int Function_102(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x60A8 / 24744
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
								return Function_103(&Global_11014, &Global_12796, bParam3);
								break;
							
							case 0x00000001:
								return Function_103(&Global_11146, &Global_12992, bParam3);
								break;
							
							case 0x00000002:
								return Function_103(&Global_11120, &Global_12954, bParam3);
								break;
							
							default:
								return Function_103(&Global_11200, &Global_13072, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_103(&Global_11420, &Global_13398, bParam3);
								break;
							
							case 0x00000001:
								return Function_103(&Global_11222, &Global_13104, bParam3);
								break;
							
							case 0x00000003:
								return Function_103(&Global_11284, &Global_13196, bParam3);
								break;
							
							case 0x00000002:
								return Function_103(&Global_11398, &Global_13366, bParam3);
								break;
							
							case 0x00000004:
								return Function_103(&Global_11492, &Global_13504, bParam3);
								break;
							
							default:
								return Function_103(&Global_11482, &Global_13490, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_103(&Global_11544, &Global_13580, bParam3);
								break;
							
							case 0x00000001:
								return Function_103(&Global_11646, &Global_13732, bParam3);
								break;
							
							case 0x00000002:
								return Function_103(&Global_11704, &Global_13818, bParam3);
								break;
							
							default:
								return Function_103(&Global_11518, &Global_13542, bParam3);
								break;
						}
						break;
					
					case 0x00000003:
						switch (bVar1)
						{
							case 0x00000001:
								return Function_103(&Global_11752, &Global_13888, bParam3);
								break;
							
							default:
								return Function_103(&Global_11826, &Global_13998, bParam3);
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
								return Function_103(&Global_11836, &Global_14012, bParam3);
								break;
							
							case 0x00000001:
								return Function_103(&Global_11946, &Global_14176, bParam3);
								break;
							
							case 0x00000002:
								return Function_103(&Global_11988, &Global_14238, bParam3);
								break;
							
							default:
								return Function_103(&Global_12038, &Global_14312, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_103(&Global_12048, &Global_14326, bParam3);
								break;
							
							default:
								return Function_103(&Global_12274, &Global_14662, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000002:
								return Function_103(&Global_12284, &Global_14676, bParam3);
								break;
							
							case 0x00000001:
								return Function_103(&Global_12342, &Global_14762, bParam3);
								break;
							
							case 0x00000003:
								return Function_103(&Global_12392, &Global_14836, bParam3);
								break;
							
							default:
								return Function_103(&Global_12472, &Global_14954, bParam3);
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
		return Function_103(&Global_11014, &Global_12796, bParam3);
	}
	if (bVar1 == Global_46760[1])
	{
		return Function_103(&Global_11146, &Global_12992, bParam3);
	}
	if (bVar1 == Global_46760[2])
	{
		return Function_103(&Global_11120, &Global_12954, bParam3);
	}
	if (bVar1 == Global_46796[0])
	{
		return Function_103(&Global_11420, &Global_13398, bParam3);
	}
	if (bVar1 == Global_46796[1])
	{
		return Function_103(&Global_11222, &Global_13104, bParam3);
	}
	if (bVar1 == Global_46796[3])
	{
		return Function_103(&Global_11284, &Global_13196, bParam3);
	}
	if (bVar1 == Global_46796[2])
	{
		return Function_103(&Global_11398, &Global_13366, bParam3);
	}
	if (bVar1 == Global_46796[4])
	{
		return Function_103(&Global_11492, &Global_13504, bParam3);
	}
	if (bVar1 == Global_46816[0])
	{
		return Function_103(&Global_11544, &Global_13580, bParam3);
	}
	if (bVar1 == Global_46816[1])
	{
		return Function_103(&Global_11646, &Global_13732, bParam3);
	}
	if (bVar1 == Global_46816[2])
	{
		return Function_103(&Global_11704, &Global_13818, bParam3);
	}
	if (bVar1 == Global_46838[1])
	{
		return Function_103(&Global_11752, &Global_13888, bParam3);
	}
	if (bVar1 == Global_46850[0])
	{
		return Function_103(&Global_11836, &Global_14012, bParam3);
	}
	if (bVar1 == Global_46850[1])
	{
		return Function_103(&Global_11946, &Global_14176, bParam3);
	}
	if (bVar1 == Global_46850[2])
	{
		return Function_103(&Global_11988, &Global_14238, bParam3);
	}
	if (bVar1 == Global_46866[0])
	{
		return Function_103(&Global_12048, &Global_14326, bParam3);
	}
	if (bVar1 == Global_46894[2])
	{
		return Function_103(&Global_12284, &Global_14676, bParam3);
	}
	if (bVar1 == Global_46894[1])
	{
		return Function_103(&Global_12342, &Global_14762, bParam3);
	}
	if (bVar1 == Global_46894[3])
	{
		return Function_103(&Global_12392, &Global_14836, bParam3);
	}
	if (bVar1 == Global_46736[0])
	{
		return Function_103(&Global_11200, &Global_13072, bParam3);
	}
	if (bVar1 == Global_46736[1])
	{
		return Function_103(&Global_11482, &Global_13490, bParam3);
	}
	if (bVar1 == Global_46736[2])
	{
		return Function_103(&Global_11518, &Global_13542, bParam3);
	}
	if (bVar1 == Global_46736[3])
	{
		return Function_103(&Global_11826, &Global_13998, bParam3);
	}
	if (bVar1 == Global_46746[0])
	{
		return Function_103(&Global_12038, &Global_14312, bParam3);
	}
	if (bVar1 == Global_46746[2])
	{
		return Function_103(&Global_12274, &Global_14662, bParam3);
	}
	if (bVar1 == Global_46746[1])
	{
		return Function_103(&Global_12472, &Global_14954, bParam3);
	}
	return "";
}

var Function_103(struct<2>[] Param0, vector3[] vParam1, bool bParam2) //Position: 0x66BE / 26302
{
	int iVar0;
	
	iVar0 = bParam2;
	if (iVar0 <= Param0 || iVar0 > 0)
	{
		return "";
	}
	if (!Function_104(&(Param0[iVar02]), 2))
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

bool Function_104(var uParam0, int iParam1) //Position: 0x6718 / 26392
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_105(int iParam0) //Position: 0x6735 / 26421
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
			if (Function_106(GET_SQUAD_FROM_OBJECT(&iVar2)) == &iParam0)
			{
				iVar0++;
			}
			iVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
		}
	}
	DESTROY_ITERATOR(&uVar1);
	return iVar0;
}

int Function_106(int iParam0) //Position: 0x679D / 26525
{
	var uVar0;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return 4294967295;
	}
	uVar0 = Function_107(&iParam0);
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

var Function_107(var uParam0) //Position: 0x67DB / 26587
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

struct<8> Function_108(vector3 vParam0) //Position: 0x6828 / 26664
{
	struct<2> Var0;
	
	Var0 = vParam0;
	Var0.f_4 = vParam0.y;
	Var0.f_8 = vParam0.z;
	return StackVal, Var0;
}

int Function_109(int iParam0, int iParam1) //Position: 0x684A / 26698
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

bool Function_110(struct<2> Param0, int iParam2, bool bParam3) //Position: 0x687C / 26748
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
	Function_112(4294967295);
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
			else if (Function_111(&Param0, &uVar0) > fVar4)
			{
				return 0;
			}
		}
		iVar2++;
	}
	return 1;
}

float Function_111(struct<2> Param0) //Position: 0x6958 / 26968
{
	struct<2> Var0;
	int iVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	iVar2 = VMAG(Var0);
	return iVar2;
}

int Function_112(int iParam0) //Position: 0x6977 / 26999
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
						Function_113(iVar0);
					}
					else if (Global_6629)
					{
						if (Function_27(StackVal, &Global_54076, Var1) < 25.0f)
						{
							Function_113(iVar0);
						}
					}
					else if (Function_27(StackVal, &Global_54076, Var1) < 55.0f)
					{
						Function_113(iVar0);
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
			Function_113(iVar0);
		}
		iVar0++;
	}
	return 0;
}

void Function_113(int iParam0) //Position: 0x6AE5 / 27365
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

bool Function_114(struct<2> Param0) //Position: 0x6B4D / 27469
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

int Function_115(struct<2> Param0) //Position: 0x6BF2 / 27634
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

bool Function_116(struct<2> Param0) //Position: 0x6C40 / 27712
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

bool Function_117(struct<2> Param0) //Position: 0x6C9B / 27803
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

int Function_118(bool bParam0) //Position: 0x6D1A / 27930
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
		Function_120(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, (&bParam0 + 72 + 84));
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
	Function_119(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&bParam0 + 72 + 84));
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

void Function_119(struct<33> Param0) //Position: 0x6ECC / 28364
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

void Function_120(struct<5> Param0, var uParam5, var uParam6, var uParam7) //Position: 0x6FF8 / 28664
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

void Function_121(float fParam0) //Position: 0x7049 / 28745
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

int Function_122(int iParam0, struct<2> Param1) //Position: 0x7090 / 28816
{
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER(Param1);
	if (Global_47151[34])
	{
		PRINTVECTOR(Param1);
		PRINTNL();
	}
	Function_124();
	Function_121(0);
	Function_123(0);
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
		Function_120(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iParam0 + 72 + 84));
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
	Function_119(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iParam0 + 72 + 84));
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

void Function_123(bool bParam0) //Position: 0x7245 / 29253
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

void Function_124() //Position: 0x72F8 / 29432
{
	AMBIENT_SET_DISTANCE_FILTER(0.0f, 24.0f);
	return;
}

struct<8> Function_125(struct<2> Param0) //Position: 0x7307 / 29447
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
		Function_108(&iVar18);
		uVar14 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Function_108(&iVar18), StackVal);
		Function_108(&iVar21);
		uVar16 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Function_108(&iVar21), StackVal);
		fVar11 = VDOT(&uVar12, &uVar14);
		fVar10 = VDOT(&uVar12, &uVar16);
		Function_26(&fVar4, &fVar5);
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
			Function_108(&iVar21);
			Var8 = Function_108(&iVar21);
		}
		else
		{
			UNK_0x19D652F9(&uVar3, fVar6, &uVar0, &iVar18);
			Function_108(&iVar18);
			Var8 = Function_108(&iVar18);
		}
	}
	UNK_0xDF93BD7C(&uVar7);
	return StackVal, Var8;
}

int Function_126(struct<2> Param0, struct<5> Param2) //Position: 0x7421 / 29729
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
		if (!Function_71(StackVal, Param2))
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
			if (!Function_71(StackVal, Param2))
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

bool Function_127(bool bParam0) //Position: 0x7564 / 30052
{
	if (bParam0 > 0 || bParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_128(var uParam0, struct<2> Param1, float fParam3, int iParam4, var uParam5) //Position: 0x757A / 30074
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
						if (Function_110(&Var5, &fVar4, 0, 0))
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

var Function_129(var uParam0, struct<2> Param1, float fParam3) //Position: 0x762F / 30255
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
				if (Function_110(&Var5, &uVar4, 0, 0))
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

var Function_130(var uParam0, struct<2> Param1, float fParam3, int iParam4, var uParam5) //Position: 0x76C1 / 30401
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

var Function_131(var uParam0, struct<2> Param1, float fParam3) //Position: 0x7763 / 30563
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

int Function_132(int iParam0) //Position: 0x77E9 / 30697
{
	if (IS_ITERATOR_VALID(&iParam0))
	{
		ITERATE_EVERYWHERE(&iParam0);
		ITERATE_ON_PARTIAL_NAME(&iParam0, Function_176());
		ITERATE_ON_PARTIAL_MODEL_NAME(&iParam0, Function_176());
		ITERATE_ON_OBJECT_TYPE(&iParam0, 4294967295);
		return 1;
	}
	return 0;
}

int Function_133(var uParam0, int iParam1) //Position: 0x781F / 30751
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
	Function_112(DECOR_GET_INT(&uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
		}
		else
		{
			Function_134(iVar0, &uParam0, &uVar1, &iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(&uParam0);
	return 0;
}

void Function_134(int iParam0, var uParam1, struct<2> Param2) //Position: 0x7989 / 31113
{
	struct<8> Var0;
	
	*(&Global_39621[iParam05] + 16) = &uParam1;
	Global_39621[iParam05].f_32 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_137("stayout") };
	*(&Global_39621[iParam05] + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Param2, Vector(0.0f, 0.0f, 0.0f), Vector(12.0f, 5.0f, 12.0f));
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&Global_39621[iParam05] + 24, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&Global_39621[iParam05] + 24);
	if (&bParam3)
	{
		*(&Global_39621[iParam05] + 8) = ADD_BLIP_FOR_COORD(&Param2, 403, 0, 2, 0);
		SET_BLIP_BLINK(&Global_39621[iParam05] + 8, 1, 1, 20.0f);
	}
}

var Function_135(var uParam0, struct<2> Param1) //Position: 0x7A31 / 31281
{
	struct<2> Var0;
	var uVar2;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		GET_POSITION(&uParam0, &Var0);
		Function_136(StackVal, StackVal, Var0, Param1, &uVar2);
		return UNK_0x9C40E671(&uVar2);
	}
	return 0.0f;
}

void Function_136(var uParam0, float fParam1, float fParam2, float fParam3, var uParam4) //Position: 0x7A5F / 31327
{
	uParam4 = Vector((GET_X(&fParam2) - GET_X(&uParam0)), 0.0f, (GET_Z(&fParam2) - GET_Z(&uParam0)));
}

struct<32> Function_137(char* cParam0) //Position: 0x7A83 / 31363
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_138("0", &cVar8, ""), 4);
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

struct<32> Function_138(char* cParam0) //Position: 0x7AEF / 31471
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_139(struct<2>[] Param0) //Position: 0x7B11 / 31505
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_144();
	iVar1 = 0;
	if (!Function_4(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_143(&(Param0[iVar02]), 8);
		}
		else if (Function_142())
		{
			iVar1 = 1;
			Function_143(&(Param0[iVar02]), 8);
		}
		Function_143(&(Param0[iVar02]), 16);
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
				Function_143(&(Param0[iVar02]), 1);
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
							Function_143(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_143(&(Param0[iVar02]), 2);
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
							Function_143(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_143(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_143(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_143(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_143(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_143(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_143(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_143(&(Param0[iVar02]), 2);
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

void Function_140() //Position: 0x7ED3 / 32467
{
	if (!Function_141(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_141(int iParam0) //Position: 0x7F13 / 32531
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_142() //Position: 0x7F2F / 32559
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

void Function_143(struct<13> Param0) //Position: 0x7F5D / 32605
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_144() //Position: 0x7F70 / 32624
{
	if (!Function_141(128))
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

void Function_145(bool bParam0) //Position: 0x7FB2 / 32690
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

void Function_146(var[] uParam0, int iParam1) //Position: 0x8000 / 32768
{
	int iVar0;
	
	if (&iParam1 == 4294967295)
	{
		iParam1 = uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= &iParam1)
	{
		Function_145(&(uParam0[iVar0]));
		iVar0++;
	}
	return;
}

void Function_147(int iParam0) //Position: 0x8032 / 32818
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

void Function_148(var[] uParam0, int iParam1) //Position: 0x807C / 32892
{
	int iVar0;
	
	if (&iParam1 == 4294967295)
	{
		iParam1 = uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= &iParam1)
	{
		Function_147(&(uParam0[iVar0]));
		iVar0++;
	}
	return;
}

bool Function_149(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x80AE / 32942
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

void Function_150(var uParam0, var uParam1) //Position: 0x8126 / 33062
{
	Local_173 = Local_173;
	return;
}

void Function_151() //Position: 0x8133 / 33075
{
	return;
}

void Function_152(int iParam0) //Position: 0x8139 / 33081
{
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(iParam0);
	return;
}

int Function_153(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x8144 / 33092
{
	return Function_154(StackVal, uParam0, uParam1, &uParam2, &uParam3, &uParam4, 0, Vector(0.0f, 0.0f, 0.0f));
}

var Function_154(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, float fParam5, struct<2> Param6) //Position: 0x8161 / 33121
{
	switch (iParam0)
	{
		case 0x00000001:
			return Function_157(StackVal, &(Global_46972[0]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000002:
			return Function_157(StackVal, &(Global_46972[1]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000004:
			return Function_157(StackVal, &(Global_46972[2]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000008:
			return Function_157(StackVal, &(Global_46972[3]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000010:
			return Function_157(StackVal, &(Global_46972[4]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000020:
			return Function_157(StackVal, &(Global_46972[5]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000040:
			return Function_157(StackVal, &(Global_46972[6]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000080:
			return Function_157(StackVal, &(Global_46972[7]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000100:
			return Function_157(StackVal, &(Global_46972[8]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000200:
			return Function_157(StackVal, &(Global_46972[9]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000400:
			return Function_157(StackVal, &(Global_46972[10]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000800:
			return Function_157(StackVal, &(Global_46972[11]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00001000:
			return Function_157(StackVal, &(Global_46972[12]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00002000:
			return Function_157(StackVal, &(Global_46972[13]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return Function_155(StackVal, iParam0, bParam1, iParam2, fParam5, Param6);
}

var Function_155(var uParam0, bool bParam1, int iParam2, float fParam3, struct<2> Param4) //Position: 0x83C4 / 33732
{
	bool bVar0;
	
	bVar0 = CREATE_POPULATION_SET(0);
	if (uParam0 & 1 == 1)
	{
		Function_156(&(Global_46972[0]), &bVar0);
	}
	if (uParam0 & 2 == 2)
	{
		Function_156(&(Global_46972[1]), &bVar0);
	}
	if (uParam0 & 4 == 4)
	{
		Function_156(&(Global_46972[2]), &bVar0);
	}
	if (uParam0 & 8 == 8)
	{
		Function_156(&(Global_46972[3]), &bVar0);
	}
	if (uParam0 & 16 == 16)
	{
		Function_156(&(Global_46972[4]), &bVar0);
	}
	if (uParam0 & 32 == 32)
	{
		Function_156(&(Global_46972[5]), &bVar0);
	}
	if (uParam0 & 64 == 64)
	{
		Function_156(&(Global_46972[6]), &bVar0);
	}
	if (uParam0 & 128 == 128)
	{
		Function_156(&(Global_46972[7]), &bVar0);
	}
	if (uParam0 & 256 == 256)
	{
		Function_156(&(Global_46972[8]), &bVar0);
	}
	if (uParam0 & 512 == 512)
	{
		Function_156(&(Global_46972[9]), &bVar0);
	}
	if (uParam0 & 1024 == 1024)
	{
		Function_156(&(Global_46972[10]), &bVar0);
	}
	if (uParam0 & 2048 == 2048)
	{
		Function_156(&(Global_46972[11]), &bVar0);
	}
	if (uParam0 & 4096 == 4096)
	{
		Function_156(&(Global_46972[12]), &bVar0);
	}
	if (uParam0 & 8192 == 8192)
	{
		Function_156(&(Global_46972[13]), &bVar0);
	}
	return Function_157(StackVal, &bVar0, bParam1, iParam2, 4294967295, 0, fParam3, Param4);
}

void Function_156(var uParam0, bool bParam1) //Position: 0x8533 / 34099
{
	int iVar0;
	
	if (!IS_POPSET_VALID(&uParam0))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid subPOPSET");
	}
	if (!IS_POPSET_VALID(&bParam1))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid master popset");
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0))
	{
		LINK_ACTORENUM_TO_POPULATION(&bParam1, GET_ACTORENUM_IN_POPULATION(&uParam0, iVar0), GET_ACTORENUM_IN_POPULATION_WEIGHT(&uParam0, iVar0));
		iVar0++;
	}
	return;
}

var Function_157(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, float fParam5, struct<2> Param6) //Position: 0x85F7 / 34295
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!IS_POPSET_VALID(&bParam0))
	{
		LOG_ERROR("Trying to get a random member of an invalid popset");
		return 4294967295;
	}
	if (bParam1)
	{
		Function_163();
	}
	iVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&bParam0, iParam2, iParam3, bParam4, fParam5, Param6);
	if (!Function_162(iVar1))
	{
		if (!Global_47146 && !Global_47147)
		{
			Function_161(&bParam0, bParam1, iParam2, iParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_161(&bParam0, bParam1, iParam2, iParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	iVar0 = iVar1;
	if (bParam1 || (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(iVar1)))
	{
		if (bParam1 && iParam3 != 4294967295)
		{
			while (Function_160(iVar0) && iVar2 > 20)
			{
				iVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&bParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_162(iVar1))
				{
					iVar0 = iVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_160(iVar0))
				{
					Function_159();
				}
				Function_158(iVar0);
			}
		}
		else if (!iParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(iVar1) != iParam3 && iVar2 > 20)
			{
				iVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&bParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_162(iVar1))
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

void Function_158(int iParam0) //Position: 0x88F0 / 35056
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

void Function_159() //Position: 0x89A4 / 35236
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

bool Function_160(int iParam0) //Position: 0x89DF / 35295
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

void Function_161(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x8A0C / 35340
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

bool Function_162(int iParam0) //Position: 0x8B67 / 35687
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_163() //Position: 0x8B7E / 35710
{
	int iVar0;
	
	if (Global_6645)
	{
		if (StackVal || !&Global_46956 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_159();
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
	Function_159();
	return;
}

bool Function_164(bool bParam0) //Position: 0x8BCA / 35786
{
	bool bVar0;
	
	switch (bParam0)
	{
		case 0x00000001:
			bVar0 = IS_POPSET_VALID(&(Global_46972[0]));
			break;
		
		case 0x00000002:
			bVar0 = IS_POPSET_VALID(&(Global_46972[1]));
			break;
		
		case 0x00000004:
			bVar0 = IS_POPSET_VALID(&(Global_46972[2]));
			break;
		
		case 0x00000008:
			bVar0 = IS_POPSET_VALID(&(Global_46972[3]));
			break;
		
		case 0x00000010:
			bVar0 = IS_POPSET_VALID(&(Global_46972[4]));
			break;
		
		case 0x00000020:
			bVar0 = IS_POPSET_VALID(&(Global_46972[5]));
			break;
		
		case 0x00000040:
			bVar0 = IS_POPSET_VALID(&(Global_46972[6]));
			break;
		
		case 0x00000080:
			bVar0 = IS_POPSET_VALID(&(Global_46972[7]));
			break;
		
		case 0x00000100:
			bVar0 = IS_POPSET_VALID(&(Global_46972[8]));
			break;
		
		case 0x00000200:
			bVar0 = IS_POPSET_VALID(&(Global_46972[9]));
			break;
		
		case 0x00000400:
			bVar0 = IS_POPSET_VALID(&(Global_46972[10]));
			break;
		
		case 0x00000800:
			bVar0 = IS_POPSET_VALID(&(Global_46972[11]));
			break;
		
		case 0x00001000:
			bVar0 = IS_POPSET_VALID(&(Global_46972[12]));
			break;
		
		case 0x00002000:
			bVar0 = IS_POPSET_VALID(&(Global_46972[13]));
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

bool Function_165() //Position: 0x8D4A / 36170
{
	return (RAND_INT_RANGE(0, 1999) / 1000) != 0;
}

bool Function_166(int iParam0) //Position: 0x8D5D / 36189
{
	var uVar0;
	
	uVar0 = _GET_PARAM_VALUE(&iParam0, "blah");
	if (IS_STRING_VALID(&uVar0))
	{
		return 1;
	}
	return 0;
}

var Function_167(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x8D7F / 36223
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
			Function_143(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_143(&(Param0[iVar02]), 8);
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

var Function_168(struct<2>[] Param0, int iParam1, int iParam2, bool bParam3) //Position: 0x8E5B / 36443
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&iParam1, iParam2);
	iVar0 = Function_169(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_143(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_169(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x8E99 / 36505
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_4(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_143(&(Param0[iVar02]), 4);
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

var Function_170(int iParam0, int iParam1) //Position: 0x8F68 / 36712
{
	int iVar0;
	
	iVar0 = (Global_26652[iParam04].f_16 % iParam1);
	return iVar0;
}

var Function_171(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x8F7E / 36734
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
		fVar0 = (fVar0 * (0,75f + ((TO_FLOAT(Function_173(5)) / 100.0f) * 0,5f)));
	}
	if (&bParam3)
	{
		if (HAS_ITEM(Function_172(17), &Global_54076))
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

var Function_172(bool bParam0) //Position: 0x9085 / 36997
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

int Function_173(int iParam0) //Position: 0x9179 / 37241
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[iParam0]);
}

void Function_174(vector3 vParam0) //Position: 0x91BA / 37306
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_73(&vParam0, 1);
	Function_175(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_175(var uParam0, var uParam1) //Position: 0x91DF / 37343
{
	uParam0 = (uParam0 - (uParam0 && uParam1));
	return;
}

var Function_176() //Position: 0x91F5 / 37365
{
	var uVar0;
	
	return &uVar0;
}

