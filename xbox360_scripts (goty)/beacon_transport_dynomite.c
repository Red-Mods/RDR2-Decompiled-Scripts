//Decompiled with MagicRDR v1.0
//Function Count : 356
//Statics Count : 253
//Natives Count : 450
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
	var uLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 3;
	var uLocal_40 = 0;
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
	var uLocal_53 = 3;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 3;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 3;
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
	var uLocal_80 = 3;
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
	var uLocal_94 = 3;
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
	var uLocal_109 = 3;
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
	var uLocal_122 = 3;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 3;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
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
	var uLocal_151 = 0;
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
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	bool bLocal_185 = false;
	bool bLocal_186 = false;
	bool bLocal_187 = false;
	bool bLocal_188 = false;
	struct<8> Local_189 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_197 = 0;
	int iLocal_198 = 0;
	int iLocal_199 = 0;
	int iLocal_200 = 0;
	float fLocal_201 = 0.0f;
	struct<65> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0[2];
	int iVar3[2];
	bool bVar6;
	int iVar7;
	bool bVar8;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	bool bVar57;
	int iVar58;
	bool bVar59;
	int iVar60;
	int iVar386;
	int iVar421;
	bool bVar422;
	bool bVar423;
	bool bVar424;
	bool bVar425;
	bool bVar427;
	int iVar428;
	int iVar429;
	int iVar430;
	int iVar431;
	float fVar432;
	var uVar433;
	var uVar434;
	var uVar435;
	int iVar436;
	int iVar437;
	var uVar438;
	var uVar441[3];
	vector3 vVar445;
	vector3 vVar448;
	vector3 vVar451;
	vector3 vVar454;
	vector3 vVar457;
	vector3 vVar460;
	vector3 vVar463;
	vector3 vVar466;
	struct<9> Var469;
	vector3 vVar478;
	vector3 vVar481;
	vector3 vVar484;
	var uVar487;
	vector3 vVar490;
	var uVar493;
	int iVar496;
	bool bVar497;
	vector3 vVar498;
	vector3 vVar501;
	vector3 vVar504;
	
	iLocal_14 = 0;
	iLocal_15 = 0;
	iLocal_24 = 0;
	iLocal_197 = 0;
	iLocal_198 = 0;
	iLocal_199 = 0;
	iLocal_200 = 0;
	fLocal_201 = 0.0f;
	bVar8 = 14;
	iVar53 = 0;
	iVar54 = 0;
	iVar55 = RAND_INT_RANGE(1, 4);
	iVar56 = 0;
	Function_355(&uLocal_182, 0.0f);
	Local_189 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_353("eventDynoLay") };
	bVar57 = CREATE_LAYOUT(&Local_189);
	if (ScriptParam_0.f_32)
	{
		SET_WEAPONENUM_LOCKED(24, 0);
	}
	if (IS_WEAPONENUM_LOCKED(24))
	{
		iVar54 = 1;
	}
	if (!IS_POPSET_VALID(Global_30750[0]))
	{
		iVar56 = 5;
	}
	else
	{
		switch (Global_29004)
		{
			case 0x00000000:
				iVar52 = Function_352(37, 3);
				if (iVar52 == 0)
				{
					iVar3[1] = 158;
				}
				else if (iVar52 == 1)
				{
					iVar3[1] = 161;
				}
				else
				{
					iVar3[1] = 161;
				}
				break;
			
			case 0x00000001:
				iVar52 = Function_352(37, 3);
				if (iVar52 == 0)
				{
					iVar3[1] = 287;
				}
				else if (iVar52 == 1)
				{
					iVar3[1] = 290;
				}
				else
				{
					iVar3[1] = 161;
				}
				break;
			
			case 0x00000002:
				iVar52 = Function_352(37, 3);
				if (iVar52 == 0)
				{
					iVar3[1] = 165;
				}
				else if (iVar52 == 1)
				{
					iVar3[1] = 166;
				}
				else
				{
					iVar3[1] = 161;
				}
				break;
		}
		iVar3[0] = Function_350(Global_30750[0], 1, 2, 1);
		switch (iVar55)
		{
			case 0x00000001:
				iVar7 = 1195;
				break;
			
			case 0x00000002:
				iVar7 = 1196;
				break;
			
			case 0x00000003:
				iVar7 = 1200;
				break;
			
			case 0x00000004:
				iVar7 = 1201;
				break;
			
			default:
				iVar7 = 1196;
				break;
		}
		if ((iVar3[0] != 4294967295 || iVar3[1] != 4294967295) || iVar7 != 4294967295)
		{
			iVar56 = 5;
		}
		else
		{
			Function_349(&bVar8, iVar3[0], 3, 0);
			Function_349(&bVar8, iVar3[1], 3, 0);
			Function_347(&bVar8, "dynamite_table", 1, 0);
			Function_347(&bVar8, "locked_footlocker", 1, 0);
			Function_347(&bVar8, "rand_idle_stand", 1, 0);
			Function_349(&bVar8, iVar7, 3, 0);
			Function_349(&bVar8, 977, 3, 0);
			Function_347(&bVar8, "one_handed_wave", 5, 0);
			Function_347(&bVar8, "custom/one_handed_wave", 8, 0);
			Function_347(&bVar8, "smoking_stand_loose", 1, 0);
			Function_347(&bVar8, "throw_dynamite01x", 0, 0);
			Function_347(&bVar8, "Herbalist_talking", 5, 0);
			Function_347(&bVar8, "custom/Herbalist_talking", 8, 0);
			Function_346(&iVar3, 2);
		}
	}
	*(&iVar60 + 56) = 3;
	*(&iVar60 + 112) = 3;
	*(&iVar60 + 128) = 3;
	*(&iVar60 + 144) = 3;
	*(&iVar60 + 220) = 3;
	*(&iVar60 + 276) = 3;
	*(&iVar60 + 336) = 3;
	*(&iVar60 + 388) = 3;
	*(&iVar60 + 404) = 3;
	*(&iVar60 + 640) = 11;
	*(&iVar60 + 872) = 3;
	*(&iVar60 + 1004 + 100) = 6;
	*(&iVar60 + 1004 + 132) = 6;
	*(&iVar60 + 1228) = 6;
	*(&iVar386 + 20) = 1;
	bVar427 = false;
	iVar428 = 0;
	iVar429 = 0;
	iVar430 = 0;
	iVar431 = 0;
	iVar436 = 0;
	vVar445 = { 4.0f, 0.0f, 0.0f };
	vVar448 = { 8.0f, 0.0f, 0.0f };
	vVar451 = { -0.5f, 0.0f, 1.3f };
	vVar454 = { 5.0f, 0.0f, -1.7f };
	vVar457 = { 2.0f, 0.0f, -2.0f };
	vVar460 = { 0.2f, 0.0f, 2.0f };
	vVar463 = { 0.2f, 0.0f, -1.0f };
	vVar466 = { 0.2f, 0.0f, -2.3f };
	vVar469 = { -1.5f, 0.0f, -0.5f };
	vVar472 = { -0.2f, 0.0f, -2.0f };
	vVar475 = { 0.2f, 0.0f, -1.9f };
	vVar478 = { -1.5f, 0.0f, 1.5f };
	vVar481 = { 1.0f, 0.0f, 2.0f };
	vVar484 = { -0.3f, 0.0f, 1.2f };
	if (Global_3382 == 1)
	{
		iVar56 = 5;
	}
	iVar496 = 0;
	bVar497 = false;
	while (!IS_EXITFLAG_SET())
	{
		iVar437 = 600;
		if (Function_345(&bVar497, &iVar56, &iVar496, &iVar437, bVar427))
		{
			if (bVar497)
			{
				Function_343(&bVar0, 4294967295);
			}
			else
			{
				Function_341(&bVar0, 4294967295);
			}
		}
		switch (iVar56)
		{
			case 0x00000000:
				if (Function_335(&bVar8))
				{
					iVar56 = 1;
				}
				iVar437 = 600;
				break;
			
			case 0x00000001:
				if (ScriptParam_0.f_36)
				{
					iVar436 = 0;
				}
				if (Function_298(&ScriptParam_0, &iVar437, &iVar436, &iVar430, 1))
				{
					Function_292(&iLocal_25, Function_293(0, 2, 2));
					Function_291();
					Function_270(StackVal, StackVal, &iLocal_25, 0, 396, Function_291(), 1, 1, 0);
					if (ScriptParam_0.f_64 == 0)
					{
						ScriptParam_0.f_64 = 1;
					}
					iVar56 = 2;
				}
				else if (iVar430 == 1)
				{
					iVar56 = 5;
				}
				break;
			
			case 0x00000002:
				if (VDIST(Global_34574, *(&ScriptParam_0 + 8)) > Function_269())
				{
					iVar56 = 5;
					iVar437 = 0;
					break;
				}
				PRINTVECTOR(*(&ScriptParam_0 + 8));
				PRINTNL();
				PRINTVECTOR(Global_34574);
				PRINTNL();
				Local_189 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_353("dynoGuy") };
				bVar0[0] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(&Local_189, bVar57, StackVal) + Vector(vVar463, *(&ScriptParam_0 + 8), iVar3[0]), 0.0f, 90.0f, 0.0f);
				Local_189 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_353("dynoGuy") };
				bVar0[1] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(&Local_189, bVar57, StackVal) + Vector(vVar460, *(&ScriptParam_0 + 8), iVar3[1]), 0.0f, 90.0f, 0.0f);
				fVar432 = GET_HEADING(Global_34573);
				SET_ACTOR_CAN_PLAY_GESTURES(bVar0[0], false);
				SET_ACTOR_CAN_PLAY_GESTURES(bVar0[1], false);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar0[1], 0);
				UNK_0x99AFD2D1(bVar0[1], 1, 1);
				vVar490 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*(&ScriptParam_0 + 8), Global_34574, StackVal) };
				vVar490 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) / Vector(FtoV(Function_268(StackVal, vVar490, Global_34573, *(&ScriptParam_0 + 8))), StackVal, StackVal) };
				VSCALE(&vVar490, 7.0f);
				Local_189 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_353("dynoVehicle") };
				bVar6 = Function_264(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Vector(iVar7, &Local_189, bVar57) - Vector(vVar490, *(&ScriptParam_0 + 8), 977), 0.0f, (fVar432 + 90.0f), 0.0f, 1, 976, 976, 976, 4);
				SNAP_OBJECT_TO_GROUND(bVar6, 10.0f, false, 1092616192);
				ENABLE_VEHICLE_SEAT(bVar6, 0, 0);
				ENABLE_VEHICLE_SEAT(bVar6, 1, 0);
				Function_261(bVar6, &uVar441);
				iVar52 = 0;
				while (iVar52 < 1)
				{
					TASK_STAND_STILL(bVar0[iVar52], -1.0f, 0, 0);
					Function_260(bVar0[iVar52]);
					GIVE_WEAPON_TO_ACTOR(bVar0[iVar52], 39, 0, 1, 1);
					iVar52++;
				}
				iVar421 = CREATE_OBJECTSET_IN_LAYOUT("barrelgrpset", Global_30616, 8, 0);
				bVar424 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, Vector(Global_30616, StackVal, StackVal) + Vector(vVar478, *(&ScriptParam_0 + 8), Function_259()), 0.0f, 0.0f, 0.0f);
				DECOR_SET_STRING(bVar424, "UseAnim", "putdown");
				ADD_OBJECT_TO_OBJECTSET(bVar424, iVar421);
				iVar429 = 1;
				bVar423 = CREATE_PROP_IN_LAYOUT(bVar57, Function_259(), "p_gen_table05x", *(&ScriptParam_0 + 8), *(&ScriptParam_0 + 20), 1);
				SNAP_OBJECT_TO_GROUND(bVar423, 10.0f, false, 1092616192);
				if (iVar54 == 0)
				{
					GET_OBJECT_RELATIVE_POSITION(bVar423, -0.1536f, 0.8085f, 0.3099f, &uVar493);
					SET_DRAW_OBJECT(CREATE_WEAPON_PICKUP(bVar57, 24, &uVar493, 223.1619f, 0.0f, 0, -1.0f), 0);
					GET_OBJECT_RELATIVE_POSITION(bVar423, -0.0797f, 0.8085f, -0.2423f, &uVar493);
					SET_DRAW_OBJECT(CREATE_WEAPON_PICKUP(bVar57, 24, &uVar493, 345.9663f, 0.0f, 0, -1.0f), 0);
				}
				Local_189 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_353("dynoGrg") };
				bVar425 = CREATE_GRINGO_ON_OBJECT(bVar423, &Local_189, "$/content/scripting/gringo/SimpleGringo/dynamite_table", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
				TASK_USE_GRINGO(bVar0[0], GET_GRINGO_FROM_OBJECT(bVar425), "UseCase1", 4294967295, 1);
				DECOR_SET_BOOL(bVar425, "NoPropRecreate", 1);
				SNAP_ACTOR_TO_GRINGO(bVar0[0], bVar425, "UseCase1", 1, 0, 0);
				bLocal_186 = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_259(), bVar57, StackVal) + Vector(vVar481, *(&ScriptParam_0 + 8), "smoking_stand_loose"), 0.0f, 90.0f, 0.0f));
				bLocal_186 = bLocal_186;
				bLocal_187 = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_259(), bVar57, StackVal) + Vector(vVar481, *(&ScriptParam_0 + 8), "rand_idle_stand"), 0.0f, 90.0f, 0.0f));
				ATTACH_OBJECTS(GET_OBJECT_FROM_GRINGO(bLocal_187), bVar0[1], Function_259(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
				bVar422 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_259(), bVar57, StackVal) + Vector(vVar466, *(&ScriptParam_0 + 8), "p_gen_powderKeg02x"), *(&ScriptParam_0 + 20), 1);
				SNAP_OBJECT_TO_GROUND(bVar422, 4.0f, true, 1092616192);
				if (!IS_WEAPONENUM_LOCKED(24))
				{
					DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0[0]);
					GIVE_WEAPON_TO_ACTOR(bVar0[0], 24, 0, 1, 1);
				}
				iVar52 = 0;
				while (iVar52 <= 2)
				{
					bVar422 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_259(), bVar57, StackVal) + Vector(vVar469, *(&ScriptParam_0 + 8), "p_gen_dynamite01x"), 0.0f, 180.0f, 0.0f, 1);
					vVar469.f_8 = (vVar469.z + 0.2f);
					vVar469 = (vVar469.x + 0.1f);
					SNAP_OBJECT_TO_GROUND(bVar422, 4.0f, true, 1092616192);
					iVar52++;
				}
				bVar422 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_259(), bVar57, StackVal) + Vector(vVar457, *(&ScriptParam_0 + 8), "p_gen_bedRollClosed01x"), 0.0f, 90.0f, 0.0f, 1);
				SNAP_OBJECT_TO_GROUND(bVar422, 4.0f, true, 1092616192);
				vVar498 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar451, *(&ScriptParam_0 + 8), StackVal) };
				vVar501 = { 0.0f, 0.0f, 0.0f };
				vVar504 = { 0.0f, 0.0f, 0.0f };
				FIND_GROUND_INTERSECTION(&vVar498, 2.0f, &vVar504, &vVar501);
				bLocal_185 = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(bVar57, Function_259(), "$/content/scripting/gringo/SimpleGringo/locked_footlocker", vVar504, 0.0f, 130.0f, 0.0f));
				Function_252(StackVal, StackVal, bLocal_185, vVar504, 1, 4294967295, 4294967295);
				DECOR_SET_OBJECT(GET_OBJECT_FROM_GRINGO(bLocal_185), "nboxOwnerA", bVar0[0]);
				DECOR_SET_OBJECT(GET_OBJECT_FROM_GRINGO(bLocal_185), "nboxOwnerB", bVar0[1]);
				Function_251(StackVal, StackVal, &iLocal_25, *(&ScriptParam_0 + 8));
				Function_250(&iLocal_25, 1);
				Function_249(bVar0[0]);
				Function_270(StackVal, StackVal, &iLocal_25, GET_OBJECT_FROM_ACTOR(bVar0[0]), 4294967295, Function_249(bVar0[0]), 0, 0, 0);
				Function_247(StackVal, StackVal, &uVar433, &uVar434, &uVar435, 3.0f, *(&ScriptParam_0 + 8));
				iVar56 = 3;
				iVar437 = 0;
				break;
			
			case 0x00000003:
				iVar52 = 0;
				while (iVar52 <= GET_NUM_DRAFTED_ACTORS(bVar6))
				{
					if (GET_LAST_ATTACKER(GET_DRAFT_ACTOR(iVar52, bVar6)) == Global_34573)
					{
						Function_245(&bVar0, 2);
						Function_243("beaconDynamite_help01", iLocal_198, 1);
						iVar56 = 5;
						break;
					}
					iVar52++;
				}
				iVar52 = 0;
				while (iVar52 <= 3)
				{
					if (!IS_OBJECT_VALID(uVar441[iVar52]))
					{
						iVar58 = 0;
						while (iVar58 < (GET_NUM_DRAFT_POSITIONS(bVar6) - 1))
						{
							bVar59 = GET_DRAFT_ACTOR(iVar58, bVar6);
							if (IS_ACTOR_VALID(bVar59))
							{
								KILL_ACTOR(bVar59);
							}
							iVar58++;
						}
						iVar58 = 0;
						while (iVar58 < (GET_NUM_AVAILABLE_SEATS(bVar6) - 1))
						{
							bVar59 = GET_ACTOR_IN_VEHICLE_SEAT(bVar6, iVar58);
							if (IS_ACTOR_VALID(bVar59))
							{
								KILL_ACTOR(bVar59);
							}
							iVar58++;
						}
						Function_242(&uVar487, "CannonballExplosion", 0, 1);
						Function_243("beaconDynamite_help01", iLocal_198, 1);
						iVar56 = 5;
						break;
					}
					iVar52++;
				}
				iVar52 = 0;
				while (iVar52 < 1)
				{
					if (IS_ACTOR_VALID(bVar0[iVar52]))
					{
						if (DECOR_CHECK_EXIST(bVar0[iVar52], "actorStolen"))
						{
							Function_243("beaconDynamite_help04", iLocal_198, 1);
							iLocal_23 = 1;
							iVar56 = 5;
							break;
						}
					}
					iVar52++;
				}
				Function_291();
				Function_241(StackVal, StackVal, Function_291(), &bVar427, ScriptParam_0.f_56, bVar6, 100, 0x42a00000, 1);
				Function_229(&bVar0, 2, &bVar427, ScriptParam_0.f_56, 100, 0x42a00000, 1);
				if (!Function_222(ScriptParam_0.f_56, bVar0[0], &iVar428, &iVar431, 0, 1, 1, 1))
				{
					iVar56 = 5;
					break;
				}
				if (GET_DEBUG_DRAW_STATE())
				{
					if (IS_ACTOR_VALID(bVar0[0]))
					{
						GET_POSITION(bVar0[0], &uVar438);
						iVar437 = 0;
					}
				}
				if (Function_218(&bVar0, 2, &uLocal_22, &iLocal_21, &fLocal_201, iLocal_24, iLocal_23, 0x40200000))
				{
					iLocal_23 = 1;
					switch (iLocal_21)
					{
						case 0x00000001:
							RESET_ANIM_SET_FOR_ACTOR(bVar0[0], 1);
							Function_217(bVar0[0]);
							TASK_FLEE_ACTOR(bVar0[0], Global_34573, -1.0f, -1.0f, 0, 0, 0);
							RESET_ANIM_SET_FOR_ACTOR(bVar0[1], 1);
							Function_217(bVar0[1]);
							TASK_FLEE_ACTOR(bVar0[1], Global_34573, -1.0f, -1.0f, 0, 0, 0);
							Function_243("beaconDynamite_help03", iLocal_198, 1);
							break;
						
						case 0x00000002:
						case 0x00000010:
							RESET_ANIM_SET_FOR_ACTOR(bVar0[0], 1);
							TASK_FLEE_ACTOR(bVar0[0], Global_34573, -1.0f, -1.0f, 0, 0, 0);
							Function_217(bVar0[0]);
							RESET_ANIM_SET_FOR_ACTOR(bVar0[1], 1);
							TASK_FLEE_ACTOR(bVar0[1], Global_34573, -1.0f, -1.0f, 0, 0, 0);
							Function_217(bVar0[1]);
							Function_243("beaconDynamite_help02", iLocal_198, 1);
							break;
						
						case 0x00000004:
							RESET_ANIM_SET_FOR_ACTOR(bVar0[0], 1);
							TASK_FLEE_ACTOR(bVar0[0], Global_34573, -1.0f, -1.0f, 0, 0, 0);
							Function_217(bVar0[0]);
							RESET_ANIM_SET_FOR_ACTOR(bVar0[1], 1);
							TASK_FLEE_ACTOR(bVar0[1], Global_34573, -1.0f, -1.0f, 0, 0, 0);
							Function_217(bVar0[1]);
							Function_243("beaconDynamite_help02", iLocal_198, 1);
							break;
						
						case 0x00000008:
							Function_243("beaconDynamite_help01", iLocal_198, 1);
							Function_245(&bVar0, 2);
							break;
					}
					DECOR_SET_OBJECT(GET_OBJECT_FROM_GRINGO(bLocal_185), "nboxOwnerA", false);
					DECOR_SET_OBJECT(GET_OBJECT_FROM_GRINGO(bLocal_185), "nboxOwnerB", false);
					iVar56 = 5;
					iVar437 = 0;
					break;
				}
				iVar52 = 0;
				while (iVar52 <= 2)
				{
					if (!IS_ACTOR_VALID(bVar0[iVar52]))
					{
						iVar56 = 5;
						iVar437 = 0;
						break;
					}
					iVar52++;
				}
				if (IS_ACTOR_VALID(bVar0[0]))
				{
					if (!Function_214(bVar0[0], Global_34573, Function_215(1)))
					{
						iVar437 = 0;
						iVar56 = 5;
						break;
					}
				}
				else if (Function_268(StackVal, StackVal, Global_34573, *(&ScriptParam_0 + 8)) < Function_215(1))
				{
					iVar437 = 0;
					iVar56 = 5;
					break;
				}
				if (Function_114(&iVar53, &bVar0, bVar6))
				{
					Function_32(&iLocal_25);
					iLocal_197 = 1;
					iLocal_199 = 1;
					Function_31(bVar6);
					Function_28(bVar0[0], 0);
					Function_28(bVar0[1], 0);
					Function_25(3);
					ScriptParam_0.f_36 = 1;
					ScriptParam_0.f_48 = 1;
					Function_291();
					Function_291();
					Function_20(StackVal, StackVal, StackVal, StackVal, 32, 2, GET_ASSET_ID("$/content/Ambient/Roaming/event_proc_transport", 4), Function_291(), Function_291(), 0, 0, 0, 4294967295, 0, 0, 0, &iVar386, 1, 1, 0x40a00000, 4294967295, 0, 0);
					iVar56 = 5;
				}
				break;
			
			case 0x00000005:
				iVar56 = 6;
				iVar437 = 0;
				break;
			
			case 0x00000006:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				iVar437 = 0;
				break;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(iVar437);
		}
	}
	if (iLocal_199 != 0 && iLocal_23 != 0)
	{
		Function_18(&bVar0, 4294967295);
	}
	if (IS_ACTOR_VALID(bVar6))
	{
		ENABLE_VEHICLE_SEAT(bVar6, 0, 1);
		ENABLE_VEHICLE_SEAT(bVar6, 1, 1);
	}
	Function_341(&bVar0, 4294967295);
	Function_17(&uVar433, &uVar434, &uVar435);
	Function_16(&iVar3, 2);
	if (IS_BLIP_VALID(bLocal_188))
	{
		REMOVE_BLIP(bLocal_188);
	}
	if (ScriptParam_0.f_32)
	{
		Global_3399 = 0;
	}
	if (!bVar427)
	{
		Function_10(ScriptParam_0.f_56, 0.0f, 0, 1, 0);
	}
	if (Function_6(bVar0[1], 0))
	{
		AI_GOAL_LOOK_CLEAR(bVar0[1]);
		AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar0[1], 1);
		UNK_0x99AFD2D1(bVar0[1], 0, 0);
	}
	if (!bVar427)
	{
		Function_18(&bVar0, 4294967295);
		if (IS_OBJECT_VALID(bVar57))
		{
			UNK_0xA936E73B(bVar57, 1);
			MARK_OBJECT_FOR_AGGRESSIVE_CLEANUP(bVar57, 1);
		}
	}
	else if (iVar429 && IS_OBJECTSET_VALID(iVar421))
	{
		Function_5(iVar421);
		DESTROY_OBJECTSET(iVar421);
	}
	Function_1(&bVar8);
	if (iLocal_197 == 0)
	{
		Function_32(&iLocal_25);
	}
	RELEASE_LAYOUT_REF(bVar57);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x10C4 / 4292
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

void Function_2(var uParam0, int iParam1) //Position: 0x10EA / 4330
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

void Function_3(var uParam0, int iParam1) //Position: 0x1218 / 4632
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_4(var uParam0, int iParam1) //Position: 0x1232 / 4658
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(int iParam0) //Position: 0x124F / 4687
{
	bool bVar0;
	
	if (!IS_OBJECTSET_VALID(iParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(iParam0) >= 0)
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(0, iParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(bVar0, iParam0);
		}
		CLEAN_OBJECTSET(iParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			RELEASE_OBJECT_REF(bVar0);
		}
	}
	return;
}

bool Function_6(bool bParam0, bool bParam1) //Position: 0x1294 / 4756
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
			Function_8(bParam0);
			return 0;
		}
		if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 163840))
		{
			Function_8(bParam0);
			return 0;
		}
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		if (Function_7(bParam0, 0) && !AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 16384))
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

int Function_7(bool bParam0, int iParam1) //Position: 0x1330 / 4912
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

int Function_8(bool bParam0) //Position: 0x137A / 4986
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_9(bParam0);
		return 1;
	}
	return 0;
}

void Function_9(bool bParam0) //Position: 0x1390 / 5008
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

bool Function_10(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x13BC / 5052
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
		Function_12("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
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
			Function_11(bVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_11(bVar0);
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
			Function_11(bVar0);
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

void Function_11(bool bParam0) //Position: 0x1619 / 5657
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

void Function_12(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x165F / 5727
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

struct<16> Function_13(int iParam0) //Position: 0x16D6 / 5846
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

bool Function_14() //Position: 0x1715 / 5909
{
	if (Function_15(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_15(bool bParam0, int iParam1) //Position: 0x1730 / 5936
{
	return (bParam0 && iParam1) == 0;
}

void Function_16(var uParam0, int iParam1) //Position: 0x173D / 5949
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

void Function_17(var uParam0, var uParam1, int iParam2) //Position: 0x175F / 5983
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

void Function_18(bool bParam0, int iParam1) //Position: 0x178C / 6028
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *bParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_19(bParam0[iVar0]);
		iVar0++;
	}
	return;
}

void Function_19(bool bParam0) //Position: 0x17B9 / 6073
{
	if (IS_ACTOR_VALID(*bParam0))
	{
		RESET_ANIM_SET_FOR_ACTOR(*bParam0, 0);
		TASK_FLEE_ACTOR(*bParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
		TASK_PRIORITY_SET(*bParam0, 0);
	}
	return;
}

int Function_20(int iParam0, var uParam1, var uParam2, vector3 vParam3, vector3 vParam6, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22) //Position: 0x17E4 / 6116
{
	int iVar0;
	
	uParam13 = uParam13;
	uParam14 = uParam14;
	uParam15 = uParam15;
	iVar0 = 0;
	while (iVar0 <= Global_25267)
	{
		if (Global_25267[iVar058] != iParam0 || iParam0 != 4096)
		{
			if (Function_24(&(Global_25267[iVar058]), 4))
			{
				if (!IS_SCRIPT_VALID(Global_25267[iVar058].f_44))
				{
					Global_25267[iVar058].f_4 = uParam9;
					Global_25267[iVar058].f_68 = uParam21;
					Global_25267[iVar058].f_84 = uParam22;
					Global_25267[iVar058].f_64 = uParam19;
					Global_25267[iVar058].f_72 = uParam20;
					Global_25267[iVar058].f_12 = 4294967295;
					Global_25267[iVar058].f_16 = uParam2;
					*(&Global_25267[iVar058] + 20) = { StackVal, StackVal, vParam3 };
					*(&Global_25267[iVar058] + 32) = { StackVal, StackVal, vParam6 };
					Global_25267[iVar058].f_56 = uParam10;
					Global_25267[iVar058].f_48 = uParam12;
					Global_25267[iVar058].f_52 = uParam11;
					Global_25267[iVar058].f_76 = uParam17;
					Global_25267[iVar058].f_80 = uParam18;
					Global_25267[iVar058].f_88 = 0.0f;
					Function_23(uParam16, &Global_25267[iVar058] + 92);
					Global_25267[iVar058].f_92 = uParam1;
					Function_22(&(Global_25267[iVar058]), 1);
					Function_21(&(Global_25267[iVar058]), 4);
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_21(var uParam0, int iParam1) //Position: 0x1926 / 6438
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

void Function_22(var uParam0, int iParam1) //Position: 0x1940 / 6464
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_23(int iParam0, int iParam1) //Position: 0x1951 / 6481
{
	*iParam1 = *iParam0;
	iParam1->f_16 = iParam0->f_16;
	iParam1->f_20 = iParam0->f_20;
	iParam1->f_4 = StackVal;
	iParam1->f_8 = StackVal;
	*(iParam1 + 24) = { StackVal, *(iParam0 + 24) };
	(iParam1 + 24)->f_8 = StackVal;
	(iParam1 + 24)->f_12 = (iParam0 + 24)->f_12;
	(iParam1 + 24)->f_16 = (iParam0 + 24)->f_16;
	(iParam1 + 24)->f_20 = (iParam0 + 24)->f_20;
	iParam1->f_48 = iParam0->f_48;
	(iParam1 + 48)->f_4 = StackVal;
	(iParam1 + 48)->f_8 = StackVal;
	iParam1->f_60 = iParam0->f_60;
	(iParam1 + 60)->f_4 = StackVal;
	(iParam1 + 60)->f_8 = StackVal;
	(iParam1 + 60)->f_12 = (iParam0 + 60)->f_12;
	(iParam1 + 60)->f_16 = (iParam0 + 60)->f_16;
	(iParam1 + 60)->f_20 = (iParam0 + 60)->f_20;
	(iParam1 + 60)->f_24 = (iParam0 + 60)->f_24;
	(iParam1 + 60)->f_32 = (iParam0 + 60)->f_32;
	(iParam1 + 60)->f_36 = (iParam0 + 60)->f_36;
	(iParam1 + 60)->f_40 = (iParam0 + 60)->f_40;
	(iParam1 + 60)->f_44 = (iParam0 + 60)->f_44;
	(iParam1 + 60)->f_52 = (iParam0 + 60)->f_52;
	(iParam1 + 60)->f_48 = (iParam0 + 60)->f_48;
	(iParam1 + 60)->f_56 = (iParam0 + 60)->f_56;
	(iParam1 + 60)->f_28 = (iParam0 + 60)->f_28;
	iParam1->f_120 = iParam0->f_120;
	(iParam1 + 120)->f_4 = StackVal;
	iParam1->f_128 = iParam0->f_128;
	(iParam1 + 128)->f_4 = StackVal;
	(iParam1 + 128)->f_8 = StackVal;
	return;
}

bool Function_24(var uParam0, int iParam1) //Position: 0x1ABD / 6845
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_25(int iParam0) //Position: 0x1ADA / 6874
{
	return Function_26(iParam0);
}

int Function_26(bool bParam0) //Position: 0x1AE5 / 6885
{
	bool bVar0;
	
	bVar0 = Function_27();
	if (!IS_OBJECT_VALID(bVar0))
	{
		LOG_ERROR("TRANSPORT_EXTERNAL_SET_MISSION_TYPE - Invalid externalObject?");
		return 0;
	}
	DECOR_SET_INT(bVar0, "trnsMissType", bParam0);
	return 1;
}

var Function_27() //Position: 0x1B56 / 6998
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

int Function_28(var uParam0, int iParam1) //Position: 0x1C1C / 7196
{
	return Function_29(uParam0, iParam1);
}

int Function_29(bool bParam0, int iParam1) //Position: 0x1C29 / 7209
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	bVar0 = Function_27();
	if (!IS_ACTOR_VALID(bParam0))
	{
		LOG_ERROR("TRANSPORT_EXTERNAL_ADD_NECESSARY_ACTOR - Invalid actor passed in?");
		return 0;
	}
	if (!IS_OBJECT_VALID(bVar0))
	{
		LOG_ERROR("TRANSPORT_EXTERNAL_ADD_NECESSARY_ACTOR - Invalid externalObject?");
		return 0;
	}
	iVar1 = GET_OBJECTSET_FROM_OBJECT(DECOR_GET_OBJECT(bVar0, "trnsNecActors"));
	if (!IS_OBJECTSET_VALID(iVar1))
	{
		memcpy(&uVar2, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_353("TrnExtObjSet"), 6);
		iVar1 = CREATE_OBJECTSET_IN_LAYOUT(&uVar2, Global_6290, 15, 1);
		DECOR_SET_OBJECT(bVar0, "trnsNecActors", GET_OBJECT_FROM_OBJECTSET(iVar1));
	}
	ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), iVar1);
	Function_30(bParam0, iParam1);
	return 1;
}

int Function_30(bool bParam0, bool bParam1) //Position: 0x1D4E / 7502
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "transNecType", bParam1);
	return 1;
}

int Function_31(bool bParam0) //Position: 0x1D7A / 7546
{
	bool bVar0;
	
	bVar0 = Function_27();
	if (!IS_OBJECT_VALID(bVar0))
	{
		LOG_ERROR("TRANSPORT_EXTERNAL_SET_VEHICLE - Invalid externalObject?");
		return 0;
	}
	if (!IS_ACTOR_VALID(bParam0))
	{
		LOG_ERROR("TRANSPORT_EXTERNAL_SET_VEHICLE - Invalid transportVehicle");
		return 0;
	}
	DECOR_SET_OBJECT(bVar0, "trnsVehicle", GET_OBJECT_FROM_ACTOR(bParam0));
	return 1;
}

void Function_32(int iParam0) //Position: 0x1E32 / 7730
{
	if (IS_BLIP_VALID(iParam0->f_36))
	{
		REMOVE_BLIP(iParam0->f_36);
	}
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Global_34573), "procstop"))
	{
		DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(Global_34573), "procstop");
	}
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Global_34573), "procRideObj"))
	{
		DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(Global_34573), "procRideObj");
	}
	if (iParam0->f_532 == 5)
	{
		if (Function_15(iParam0->f_584, 32768))
		{
			Function_113(256);
		}
	}
	Function_112();
	Function_110(1);
	if (Function_15(iParam0->f_584, 32))
	{
		if (Function_108(iParam0->f_624))
		{
			switch (iParam0->f_620)
			{
				case 0x00000002:
					Function_49(iParam0->f_624, 1, 0, 0);
					break;
				
				case 0x00000003:
					Function_47(iParam0->f_624);
					break;
				
				default:
					Function_39(iParam0->f_624);
					break;
				}
			}
	}
	if (SQUAD_IS_VALID(iParam0->f_568))
	{
		Function_33(iParam0, 0);
	}
	if (IS_VOLUME_VALID(iParam0->f_504))
	{
		DESTROY_VOLUME(iParam0->f_504);
	}
	if (IS_OBJECTSET_VALID(iParam0->f_540))
	{
		DESTROY_OBJECTSET(iParam0->f_540);
	}
	if (IS_LAYOUTREF_VALID(iParam0->f_28))
	{
		RELEASE_LAYOUT_OBJECTS(iParam0->f_28);
		DESTROY_LAYOUT(iParam0->f_28);
	}
	if (Function_15(iParam0->f_584, 64))
	{
		Global_13111 = 0;
	}
	if (Function_15(iParam0->f_584, 16))
	{
		Global_3382 = 0;
	}
	return;
}

void Function_33(int iParam0, bool bParam1) //Position: 0x1F8F / 8079
{
	if (SQUAD_IS_VALID(iParam0->f_568))
	{
		Function_38(iParam0->f_568);
		Function_36(iParam0 + 568, 1, 0);
		if (bParam1 == 1)
		{
			Function_35(iParam0->f_568);
			Function_38(iParam0->f_568);
			Function_34(iParam0->f_568, Global_34573, -1.0f, -1.0f, 0, 1);
		}
		Function_36(iParam0 + 568, 0, 0);
		SQUAD_MAKE_EMPTY(iParam0->f_568);
		DESTROY_OBJECT(iParam0->f_568);
	}
	return;
}

void Function_34(bool bParam0, bool bParam1, float fParam2, float fParam3, int iParam4, int iParam5) //Position: 0x1FF4 / 8180
{
	int iVar0;
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
	iVar0 = 0;
	while (iVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, iVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			TASK_CLEAR(bVar1);
			TASK_FLEE_ACTOR(bVar1, bParam1, fParam2, fParam3, iParam4, 0, 0);
			TASK_PRIORITY_SET(bVar1, iParam5);
		}
		iVar0++;
	}
}

void Function_35(bool bParam0) //Position: 0x2062 / 8290
{
	int iVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		MEMORY_CLEAR_ALL(SQUAD_GET_ACTOR_BY_INDEX(bParam0, iVar0));
		iVar0++;
	}
	return;
}

void Function_36(var uParam0, bool bParam1, bool bParam2) //Position: 0x2097 / 8343
{
	int iVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(*uParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= SQUAD_GET_SIZE(*uParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*uParam0, iVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			SQUAD_LEAVE(bVar1);
			if (bParam2)
			{
				if (!Function_37(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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
			iVar0++;
		}
	}
	return;
}

bool Function_37(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x2113 / 8467
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void Function_38(bool bParam0) //Position: 0x212D / 8493
{
	int iVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		TASK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(bParam0, iVar0));
		iVar0++;
	}
	return;
}

void Function_39(int iParam0) //Position: 0x215F / 8543
{
	int iVar0;
	
	if (!Function_108(iParam0))
	{
		Function_45();
		return;
	}
	iVar0 = Function_44(iParam0);
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_40("DEED_CANCEL", iParam0);
	}
	Global_13172[iParam011].f_4 = 0;
	Global_3376 = 1;
	return;
}

void Function_40(char* cParam0, int iParam1) //Position: 0x21B2 / 8626
{
	struct<4> Var0;
	
	if (!Function_108(iParam1))
	{
		return;
	}
	switch (Function_44(iParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_41(Function_42(iParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_44(iParam1), Function_42(iParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_44(iParam1), iParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_44(iParam1), iParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_44(iParam1), iParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_44(iParam1), iParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_44(iParam1), iParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_41(int iParam0) //Position: 0x22D6 / 8918
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

int Function_42(int iParam0) //Position: 0x2310 / 8976
{
	if (!Function_43(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[iParam011], 12) & 255;
}

bool Function_43(int iParam0) //Position: 0x2330 / 9008
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_44(int iParam0) //Position: 0x2347 / 9031
{
	if (!Function_43(iParam0))
	{
		return 0;
	}
	return Global_13172[iParam011] & 15;
}

void Function_45() //Position: 0x2362 / 9058
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
			Function_46(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
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

void Function_46(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x25A9 / 9641
{
	*uParam3 = iParam0 & 15;
	*uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

void Function_47(int iParam0) //Position: 0x25D2 / 9682
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	var uVar11;
	
	if (!Function_108(iParam0))
	{
		return;
	}
	iVar0 = Function_44(iParam0);
	if (StackVal == 2)
	{
		Function_40("nDEED_FAIL", iParam0);
	}
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_13172[iParam011].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_48(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_13(Global_6269) };
		}
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(uVar11);
	}
	Global_3376 = 1;
	return;
}

struct<24> Function_48(char* cParam0) //Position: 0x2678 / 9848
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

void Function_49(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x28CE / 10446
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	var uVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_108(iParam0))
	{
		Function_45();
		return;
	}
	iVar0 = Function_44(iParam0);
	if (!iVar0 != 1)
	{
		Global_13172[iParam011].f_12++;
		if (Function_107())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", iVar0);
		}
	}
	else
	{
		Global_6269 = Function_42(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_48(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_13(Global_6269) };
		}
		if (Function_107())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_101();
		CLEAR_JOURNAL_ENTRY(uVar11);
		SET_JOURNAL_ENTRY_PROGRESS(uVar11, -2.0f, 0, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(uVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(uVar11, 1);
		}
	}
	if (Function_107())
	{
		Function_100();
	}
	Global_13172[iParam011].f_36 = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_40("DEED_COMPLETE", iParam0);
	}
	if (bParam1)
	{
		Global_26281 = GET_CURRENT_GAME_TIME();
	}
	if (StackVal && StackVal != 3 != 4)
	{
		if (bParam3)
		{
			Global_13172[iParam011].f_4 = 4;
		}
		else
		{
			Global_13172[iParam011].f_4 = 3;
		}
		iVar12 = 1;
	}
	if (Global_3421)
	{
		Global_13172[iParam011].f_4 = 0;
	}
	if (iVar12 && !Global_3381)
	{
		if (!bParam3)
		{
			Function_94(iParam0);
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
						switch (Function_42(iParam0))
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
			Function_53(1);
			Function_51(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_50(iParam0, &Var14);
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

void Function_50(int iParam0, int iParam1) //Position: 0x2B22 / 11042
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_51(bool bParam0, int iParam1) //Position: 0x2B5C / 11100
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = bParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_52())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", 1);
	return;
}

bool Function_52() //Position: 0x2B9E / 11166
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_53(bool bParam0) //Position: 0x2BA7 / 11175
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_84();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_55();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_54(&Global_63095, 1);
		Function_54(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_54(int iParam0, int iParam1) //Position: 0x2BF8 / 11256
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

void Function_55() //Position: 0x2C0B / 11275
{
	Function_82();
	Function_81();
	Function_81();
	Function_80();
	Function_80();
	Function_79();
	Function_79();
	Function_63(0);
	Function_63(0);
	if (!Function_52())
	{
		Function_60();
		Function_59();
		Function_58();
		Function_57();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_56();
	return;
}

void Function_56() //Position: 0x2C5D / 11357
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

void Function_57() //Position: 0x2D63 / 11619
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

void Function_58() //Position: 0x2D96 / 11670
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

void Function_59() //Position: 0x2F24 / 12068
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

void Function_60() //Position: 0x30D8 / 12504
{
	Function_61(&Global_28260, 1, 0);
	return;
}

void Function_61(int iParam0, bool bParam1, var uParam2) //Position: 0x30E6 / 12518
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
	
	bVar0 = Function_62();
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

var Function_62() //Position: 0x32D7 / 13015
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_63(int iParam0) //Position: 0x32EC / 13036
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
					iVar2 = ((Function_78((50 + iVar4)) + Function_78((183 + iVar4))) + Function_78((90 + iVar4)));
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
	Function_64(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_64(int iParam0, bool bParam1, bool bParam2) //Position: 0x3392 / 13202
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
		Function_77(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_76(iParam0);
	if (bParam2)
	{
		Function_65(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_65(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x362D / 13869
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_75(390))), 32);
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
					bVar19 = (Function_74(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_74(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_72(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_69(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_67(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_66(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_259(), &Var9);
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

var Function_66(int iParam0) //Position: 0x3C5A / 15450
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_67(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x3C6B / 15467
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_68("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_68("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_68("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_68(char* cParam0, bool bParam1) //Position: 0x3D60 / 15712
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_69(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x3D79 / 15737
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_71(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_70(Function_71(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_70(int iParam0, int iParam1) //Position: 0x3DDE / 15838
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_71(int iParam0, int iParam1) //Position: 0x3DF0 / 15856
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_72(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x3E02 / 15874
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
	if (((Function_73(iParam0) != 19 || Function_73(iParam0) != 17) || Function_73(iParam0) != 10) || Function_73(iParam0) != 9)
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

int Function_73(int iParam0) //Position: 0x3F32 / 16178
{
	return Global_35278[iParam020].f_48;
}

float Function_74(int iParam0) //Position: 0x3F41 / 16193
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_75(int iParam0) //Position: 0x3F7A / 16250
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_76(int iParam0) //Position: 0x3FB7 / 16311
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

int Function_77(int iParam0, bool bParam1, bool bParam2) //Position: 0x4173 / 16755
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

int Function_78(int iParam0) //Position: 0x43B7 / 17335
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

struct<8> Function_79() //Position: 0x43F8 / 17400
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
		iVar2 = ((Function_78((50 + iVar3) + 15) + Function_78((183 + iVar3) + 15)) + Function_78((90 + iVar3) + 15));
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
	Function_64(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_80() //Position: 0x4481 / 17537
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
			iVar2 = ((Function_78((50 + iVar3) + 8) + Function_78((183 + iVar3) + 8)) + Function_78((90 + iVar3) + 8));
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
	Function_64(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_81() //Position: 0x4518 / 17688
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
		iVar2 = ((Function_78((50 + iVar3)) + Function_78((183 + iVar3))) + Function_78((90 + iVar3)));
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
	Function_64(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_82() //Position: 0x4597 / 17815
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_83(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_64(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_83(int iParam0, bool bParam1, int iParam2) //Position: 0x45D0 / 17872
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
	Function_77(iParam0, bParam1, 1);
	Function_76(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_65(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_84() //Position: 0x47DA / 18394
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_14())
	{
		Function_91(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_91(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_86(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_86(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_85(StackVal, StackVal, vVar0))
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

bool Function_85(vector3 vParam0) //Position: 0x4895 / 18581
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_86(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x48AD / 18605
{
	int iVar0;
	
	iVar0 = Function_89(uParam2, uParam3);
	if (Function_88(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_87(&Global_63095, 1);
			Function_54(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_87(&Global_63095, 2);
			Function_54(&Global_63095, 1);
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
		Function_87(&Global_63095, 2);
		Function_54(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_291();
	return StackVal, StackVal, Function_291();
}

void Function_87(var uParam0, int iParam1) //Position: 0x4994 / 18836
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_88(int iParam0) //Position: 0x49A3 / 18851
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_89(bool bParam0, bool bParam1) //Position: 0x49B9 / 18873
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
				fVar2 = Function_90(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_90(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_88(bVar0) && !bParam1)
	{
		bVar0 = Function_89(bParam0, 1);
	}
	return bVar0;
}

float Function_90(vector3 vParam0, vector3 vParam3) //Position: 0x4A80 / 19072
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_91(var uParam0, int iParam1) //Position: 0x4A9D / 19101
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	float fVar10;
	
	*uParam0 = *uParam0;
	fVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_93(Global_34573, &vVar4);
	if (!Function_92(Global_30640[0]))
	{
		vVar7 = { -2158.996f, 19.93287f, 2597.94f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 90.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_92(Global_30640[2]))
	{
		vVar7 = { -2424.093f, 26.36347f, 2122.362f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -130.87f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_92(Global_30640[1]))
	{
		vVar7 = { -3242.193f, 19.4623f, 2725.147f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 90.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_92(Global_30658[1]))
	{
		vVar7 = { -3658.131f, 42.81397f, 2092.973f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -135.09f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_92(Global_30658[3]))
	{
		vVar7 = { -4454.145f, 9.204829f, 3220.642f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 206.26f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_92(Global_30658[2]))
	{
		GET_VOLUME_CENTER(StackVal, &vVar7);
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 0.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_92(Global_30658[4]))
	{
		vVar7 = { -3669.226f, 8.477426f, 3491.648f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 106.17f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_92(Global_30668[0]))
	{
		vVar7 = { -821.1879f, 93.8091f, 2435.436f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 343.64f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_92(Global_30668[1]))
	{
		vVar7 = { 124.6513f, 76.73672f, 2235.506f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 165.38f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_92(Global_30668[2]))
	{
		GET_VOLUME_CENTER(StackVal, &vVar7);
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 0.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_92(Global_30679[0]))
	{
		vVar7 = { -3195.612f, 41.29269f, 3752.929f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -97.3f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_92(Global_30685[0]))
	{
		vVar7 = { -4287.014f, 18.13315f, 4453.605f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -6.71f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_92(Global_30685[1]))
	{
		vVar7 = { -4708.083f, 3.172676f, 3968.105f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -90.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_92(Global_30685[2]))
	{
		vVar7 = { -3245.478f, 39.28797f, 4563.465f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -90.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_92(Global_30693[0]))
	{
		vVar7 = { -2687.509f, 31.4827f, 4295.249f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -90.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_92(Global_30693[1]))
	{
		vVar7 = { -1719.171f, 11.29226f, 4214.298f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -180.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_92(Global_30693[2]))
	{
		vVar7 = { -1462.607f, 16.54457f, 3952.801f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 22.55f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_92(Global_30707[2]))
	{
		vVar7 = { -819.4399f, 13.11084f, 3712.137f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -135.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_92(Global_30707[3]))
	{
		vVar7 = { 343.2535f, 79.47575f, 3448.062f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -104.45f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_92(Global_30707[0]))
	{
		vVar7 = { -465.2258f, 20.61027f, 3913.855f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -90.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_92(Global_30717[0]))
	{
		vVar7 = { 757.22f, 86.90343f, 1271.724f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 270.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_92(Global_30723[2]))
	{
		vVar7 = { -298.7082f, 84.35147f, 2134.708f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 59.3f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_92(Global_30723[1]))
	{
		vVar7 = { -448.9981f, 153.3878f, 1631.183f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 20.74f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_92(Global_30723[0]))
	{
		vVar7 = { -884.3423f, 202.5276f, 1006.602f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 94.65f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_92(Global_30679[1]))
	{
		vVar7 = { -2679.319f, 71.65485f, 3424.564f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -135.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_92(Global_30707[1]))
	{
		vVar7 = { -720.3301f, 67.5125f, 3293.269f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -39.9f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	vVar7 = { -63.861f, 116.861f, 1414.684f };
	fVar10 = VDIST(vVar4, vVar7);
	if (fVar10 > fVar0)
	{
		fVar0 = fVar10;
		vVar1 = { StackVal, StackVal, vVar7 };
	}
	Function_87(&Global_63095, 2);
	Function_54(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_85(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_92(int iParam0) //Position: 0x52C2 / 21186
{
	int iVar0;
	
	iVar0 = Global_29008[iParam0];
	return (((Function_15(iVar0, 0x1000000) || Function_15(iVar0, 0x2000000)) || Function_15(iVar0, 0x4000000)) || !Function_15(iVar0, 0x10000000));
}

void Function_93(bool bParam0, int iParam1) //Position: 0x52FD / 21245
{
	GET_POSITION(bParam0, iParam1);
	return;
}

void Function_94(int iParam0) //Position: 0x530A / 21258
{
	int iVar0;
	int iVar1;
	
	if (!Function_43(iParam0))
	{
		return;
	}
	switch (Function_44(iParam0))
	{
		case 0x00000001:
			iVar1 = Function_42(iParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_99(12, 1, 0, 0);
				Function_98(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_99(13, 1, 0, 0);
				Function_98(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_99(14, 1, 0, 0);
				Function_98(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_99(15, 1, 0, 0);
				Function_98(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_99(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_42(iParam0))
			{
				case 0x00000000:
					if (Function_97(iParam0) == 1)
					{
						iVar0 = Function_96(iParam0);
						if (Function_95(iVar0))
						{
							if (iVar0 == Global_30723[5])
							{
								Function_98(4, 18);
							}
							else if (iVar0 == Global_30693[3])
							{
								Function_98(4, 10);
							}
							else if (iVar0 == Global_30723[6])
							{
								Function_98(4, 16);
							}
							else if (iVar0 == Global_30668[3])
							{
								Function_98(4, 6);
							}
							else if (iVar0 == Global_30640[13])
							{
								Function_98(4, 3);
							}
							else if (iVar0 == Global_30693[7])
							{
								Function_98(4, 11);
							}
							else if (iVar0 == Global_30640[6])
							{
								Function_98(4, 0);
							}
							else if (iVar0 == Global_30693[10])
							{
								Function_98(4, 15);
							}
							else if (iVar0 == Global_30693[8])
							{
								Function_98(4, 14);
							}
							else if (iVar0 == Global_30640[11])
							{
								Function_98(4, 2);
							}
							else if (iVar0 == Global_30668[6])
							{
								Function_98(4, 7);
							}
							else if (iVar0 == Global_30723[3])
							{
								Function_98(4, 17);
							}
							else if (iVar0 == Global_30685[5])
							{
								Function_98(4, 8);
							}
							else if (iVar0 == Global_30693[9])
							{
								Function_98(4, 13);
							}
							else if (iVar0 == Global_30693[11])
							{
								Function_98(4, 12);
							}
							else if (iVar0 == Global_30640[7])
							{
								Function_98(4, 1);
							}
							else if (iVar0 == Global_30679[3])
							{
								Function_98(4, 5);
							}
							else if (iVar0 == Global_30693[4])
							{
								Function_98(4, 9);
							}
							else if (iVar0 == Global_30658[7])
							{
								Function_98(4, 4);
							}
							else if (iVar0 == Global_30723[4])
							{
								Function_98(4, 19);
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
								Function_99(363, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[1])
							{
								Function_99(364, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[2])
							{
								Function_99(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_96(iParam0) == 0)
			{
				if (Function_97(iParam0) == 1)
				{
					Function_99(458, 1, 0, 0);
					iVar0 = Function_42(iParam0);
					if (Function_95(iVar0))
					{
						if (iVar0 == Global_30668[2])
						{
							Function_98(2, 10);
						}
						else if (iVar0 == Global_30658[2])
						{
							Function_98(2, 11);
						}
						else if (iVar0 == Global_30640[2])
						{
							Function_98(2, 12);
						}
						else if (iVar0 == Global_30658[0])
						{
							Function_98(2, 13);
						}
						else if (iVar0 == Global_30658[3])
						{
							Function_98(2, 14);
						}
						else if (iVar0 == Global_30685[2])
						{
							Function_98(2, 15);
						}
						else if (iVar0 == Global_30685[1])
						{
							Function_98(2, 16);
						}
						else if (iVar0 == Global_30679[1])
						{
							Function_98(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_97(iParam0) == 1)
			{
				Function_99(400, 1, 0, 0);
			}
			switch (Function_42(iParam0))
			{
				case 0x00000001:
					Function_99(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_98(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_98(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_98(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_99(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_98(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_98(6, 9);
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

bool Function_95(int iParam0) //Position: 0x57E6 / 22502
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_96(int iParam0) //Position: 0x57FC / 22524
{
	if (!Function_43(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[iParam011], 4) & 255;
}

int Function_97(int iParam0) //Position: 0x581B / 22555
{
	if (!Function_43(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_12;
}

void Function_98(int iParam0, bool bParam1) //Position: 0x5835 / 22581
{
	bool bVar0;
	
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	bVar0 = SHIFT_LEFT(1, bParam1);
	(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || bVar0);
	return;
	return;
}

int Function_99(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x589C / 22684
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
	Function_77(iParam0, TO_FLOAT(bParam1), 1);
	Function_76(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_65(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, bParam3);
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

void Function_100() //Position: 0x5ABC / 23228
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
	PLAYSTAT_INT("HC_MONEY", Function_78(0));
	PLAYSTAT_INT("HC_FAME", Function_78(3));
	PLAYSTAT_INT("HC_HONOR", Function_78(1));
	return;
}

void Function_101() //Position: 0x5C14 / 23572
{
	int iVar0;
	int iVar1;
	
	if (!Function_106(Global_6269))
	{
		return;
	}
	iVar0 = Function_78(24);
	iVar1 = Function_105(Global_6269);
	if (!Function_106(iVar0) && Function_104(iVar1) < 0)
	{
		Function_64(24, Global_6269, 0);
		Function_102(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_104(Function_105(iVar0)))
	{
		Function_64(24, Global_6269, 0);
		Function_102(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_102(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x5C94 / 23700
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
		Function_103(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_103(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x5FE6 / 24550
{
	CLEAR_STAT_MESSAGE();
	if (!Global_49306)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 1, 0, 0, 0);
		}
		else if (bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 1, 0, 0, 0, 0, 0);
		}
	}
}

int Function_104(int iParam0) //Position: 0x6069 / 24681
{
	if (!Function_108(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

int Function_105(int iParam0) //Position: 0x6083 / 24707
{
	if (!Function_106(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_106(int iParam0) //Position: 0x609D / 24733
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_107() //Position: 0x60B3 / 24755
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

bool Function_108(int iParam0) //Position: 0x60DE / 24798
{
	if (!Function_43(iParam0))
	{
		return 0;
	}
	if (!Function_109(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_109(int iParam0) //Position: 0x6102 / 24834
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_110(int iParam0) //Position: 0x6117 / 24855
{
	if (iParam0 != 1 && !GET_THIS_SCRIPT_ID() != Global_8721)
	{
		return;
	}
	if (Global_8717[iParam0])
	{
		Global_8717[iParam0] = 0;
	}
	if (!Function_111())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_111() //Position: 0x6153 / 24915
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

void Function_112() //Position: 0x6178 / 24952
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_113(int iParam0) //Position: 0x618C / 24972
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

bool Function_114(var uParam0, var uParam1, bool bParam2) //Position: 0x61A9 / 25001
{
	switch (Function_189(&iLocal_25))
	{
		case 0x00000002:
			Function_140(&iLocal_25, 2);
			break;
		
		case 0x00000003:
			Function_140(&iLocal_25, 3);
			break;
		
		case 0x00000004:
			Function_140(&iLocal_25, 4);
			break;
		
		case 0x00000001:
			break;
	}
	Function_124(StackVal, StackVal, &iLocal_25, Global_34574, 1, 0x41c80000, 0x42c80000);
	switch (*uParam0)
	{
		case 0x00000000:
			if (Function_123(&iLocal_200, (*uParam1)[1], &uLocal_182, &bLocal_188, "one_handed_wave", "one_handed_wave/one_handed_wave_mobile/wave", "transportDynamite_msg01", "transportDynamite_msg01", "transportDynamite_msg02", "transportDynamite_msg02", "", "", 5.0f, -1.0f, 50.0f, 25.0f, "Herbalist_talking", "Herbalist_talking"))
			{
				RESET_ANIM_SET_FOR_ACTOR((*uParam1)[1], 1);
				Function_355(&uLocal_182, 0.0f);
				*uParam0 = 1;
			}
			break;
		
		case 0x00000001:
			AI_SPEECH_SET_ALLOW_FOR_ACTOR((*uParam1)[1], 1);
			UNK_0x99AFD2D1((*uParam1)[1], 0, 0);
			AI_GOAL_LOOK_CLEAR((*uParam1)[1]);
			if (Function_119(&uLocal_182, 2.0f))
			{
				if (IS_ACTOR_VALID(bParam2))
				{
					ENABLE_VEHICLE_SEAT(bParam2, 0, 1);
					ENABLE_VEHICLE_SEAT(bParam2, 1, 1);
				}
				iLocal_198 = 1;
				Function_118("beaconDynamite_obj01", 0x40f00000, 1, 2, 0, 0, 0, 0);
				if (IS_BLIP_VALID(bLocal_188))
				{
					REMOVE_BLIP(bLocal_188);
				}
				bLocal_188 = ADD_BLIP_FOR_OBJECT(bParam2, 325, 0.0f, 3, 0);
				Function_355(&uLocal_182, 0.0f);
				*uParam0 = 2;
				TASK_USE_GRINGO((*uParam1)[1], bLocal_186, "UseCase1", 4294967295, 1);
			}
			break;
		
		case 0x00000002:
			if (Global_34573 == GET_ACTOR_IN_VEHICLE_SEAT(bParam2, 0))
			{
				if (!IS_AMBIENT_SPEECH_PLAYING(Global_34573))
				{
					Function_116(Global_34573, (*uParam1)[1], "transportDynamitePlayer_msg01", 0, 5, 60, 1, 1);
				}
				if (IS_BLIP_VALID(bLocal_188))
				{
					REMOVE_BLIP(bLocal_188);
				}
				Function_115(37);
				return 1;
			}
			break;
	}
	return 0;
}

void Function_115(bool bParam0) //Position: 0x6429 / 25641
{
	Global_16876[bParam06].f_16++;
	if (Global_16876[bParam06].f_16 == 1)
	{
		Function_99(409, 1, 0, 0);
	}
	return;
}

void Function_116(bool bParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x645A / 25690
{
	bParam1 = bParam1;
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0) && Function_117(bParam0, Global_34573) >= IntToFloat(iParam5))
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
						iParam3 = iParam3;
					}
				}
				else if (!SAY_SINGLE_LINE_STRING_BEAT(bParam0, bParam2, bParam1, 1, 1, iParam4, iParam7, 0, 1, 1))
				{
					iParam3 = iParam3;
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING(bParam0, bParam2, true, true, iParam4, 0, false, true);
			}
		}
	}
}

float Function_117(bool bParam0, bool bParam1) //Position: 0x64EA / 25834
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

void Function_118(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x65DB / 26075
{
	struct<4> Var0;
	var uVar4;
	
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
		PRINT_OBJECTIVE_B(uParam0, iParam1, iParam7, iParam3, iParam2, &Var0, 0, iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(uParam0, iParam1, iParam7, iParam3, iParam2, uVar4, iParam5, iParam6);
	}
}

bool Function_119(var uParam0, float fParam1) //Position: 0x6660 / 26208
{
	if (Function_122(uParam0))
	{
		if (Function_120(uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_120(float fParam0) //Position: 0x667C / 26236
{
	if (Function_122(fParam0))
	{
		if (Function_121(fParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_121(int iParam0) //Position: 0x6744 / 26436
{
	return Function_15(*iParam0, 2);
}

bool Function_122(float fParam0) //Position: 0x6751 / 26449
{
	return Function_15(*fParam0, 1);
}

bool Function_123(var uParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, var uParam6, var uParam7, bool bParam8, var uParam9, bool bParam10, var uParam11, float fParam12, float fParam13, int iParam14, int iParam15, bool bParam16, bool bParam17) //Position: 0x675E / 26462
{
	var uVar0;
	
	switch (*uParam0)
	{
		case 0x00000000:
			if (Function_117(bParam1, Global_34573) > 65.0f)
			{
				RESET_ANIM_SET_FOR_ACTOR(bParam1, 1);
				AI_GOAL_LOOK_AT_ACTOR_NEW(bParam1, Global_34573, -1.0f, 1);
				uVar0 = TASK_SEQUENCE_OPEN();
				TASK_FACE_ACTOR(0, Global_34573, 0, 3212836864);
				TASK_FACE_ACTOR(0, Global_34573, 1, 3212836864);
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
					*uParam3 = ADD_BLIP_FOR_ACTOR(bParam1, 325, 0, 2, 0);
					SET_BLIP_NAME(*uParam3, GET_ACTOR_ENUM_STRING(bParam1));
					SET_ANIM_SET_FOR_ACTOR(bParam1, bParam4, 0);
					SET_ACTION_NODE_FOR_ACTOR(bParam1, bParam5);
					Function_355(uParam2, 0.0f);
					Function_116(bParam1, Global_34573, uParam6, uParam7, 5, 60, 1, 1);
					*uParam0 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_119(uParam2, fParam12) && !IS_AMBIENT_SPEECH_PLAYING(bParam1))
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
					Function_116(bParam1, Global_34573, bParam8, uParam9, 5, 60, 1, 1);
					Function_355(uParam2, 0.0f);
					*uParam0 = 3;
				}
			}
			break;
		
		case 0x00000003:
			if (Function_119(uParam2, fParam13) && !IS_AMBIENT_SPEECH_PLAYING(bParam1))
			{
				if (IS_STRING_VALID(bParam10))
				{
					Function_116(bParam1, Global_34573, bParam10, uParam11, 5, 60, 1, 1);
				}
				Function_355(uParam2, 0.0f);
				REMOVE_BLIP(*uParam3);
				return 1;
			}
			break;
	}
	return 0;
}

var Function_124(int iParam0, vector3 vParam1, var uParam4, float fParam5, float fParam6) //Position: 0x68F0 / 26864
{
	vector3 vVar0;
	
	Function_139(iParam0);
	Function_136(iParam0);
	Function_126(iParam0, uParam4, 0);
	if (IS_OBJECT_VALID(*iParam0))
	{
		Function_125(*iParam0);
		vVar0 = { StackVal, StackVal, Function_125(*iParam0) };
		if (!IS_BLIP_VALID(iParam0->f_36))
		{
			if (WOULD_ACTOR_BE_VISIBLE(0, &vVar0, 3212836864) || VDIST(vParam1, *(iParam0 + 4)) > fParam5)
			{
				iParam0->f_32 = 1;
			}
		}
	}
	if (VDIST(vParam1, *(iParam0 + 4)) < fParam6)
	{
		iParam0->f_32 = 0;
	}
	else if ((!IS_BLIP_VALID(iParam0->f_36) && iParam0->f_32 != 0) && IS_OBJECT_VALID(*iParam0))
	{
		iParam0->f_36 = ADD_BLIP_FOR_OBJECT(*iParam0, iParam0->f_40, 0f, 2, 0);
	}
	if (!Function_15(iParam0->f_584, 4096))
	{
		if (!iParam0->f_40 != 4294967295)
		{
			if ((!IS_BLIP_VALID(iParam0->f_36) && iParam0->f_32 != 1) && IS_OBJECT_VALID(*iParam0))
			{
				iParam0->f_36 = ADD_BLIP_FOR_OBJECT(*iParam0, iParam0->f_40, 0f, 2, 0);
				SET_BLIP_BLINK(iParam0->f_36, 1, 0, 5f);
			}
		}
		if (iParam0->f_32 != 0 && IS_BLIP_VALID(iParam0->f_36))
		{
			REMOVE_BLIP(iParam0->f_36);
		}
	}
	if (iParam0->f_32 != 1 && SQUAD_IS_VALID(iParam0->f_568))
	{
		Function_33(iParam0, 1);
	}
	return iParam0->f_32;
}

vector3 Function_125(bool bParam0) //Position: 0x6A16 / 27158
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

void Function_126(int iParam0, int iParam1, int iParam2) //Position: 0x6A3D / 27197
{
	if (iParam2 == 1)
	{
		if (Function_135(iParam0, iParam1, iParam2))
		{
			Function_134(iParam0);
		}
		else if (Function_133(iParam0, iParam1))
		{
			Function_131(iParam0);
		}
		if (Function_129(iParam0, iParam1, iParam2))
		{
			Function_127(iParam0);
		}
	}
	else if (Function_135(iParam0, iParam1, 0))
	{
		Function_134(iParam0);
	}
	else if (Function_129(iParam0, iParam1, 0))
	{
		Function_127(iParam0);
	}
	else if (Function_133(iParam0, iParam1))
	{
		Function_131(iParam0);
	}
	return;
}

void Function_127(int iParam0) //Position: 0x6AB7 / 27319
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
			Function_128(iParam0 + 336[iParam0->f_4804], 0x41200000, 1, 0, 2, 1, 0);
		}
		iParam0->f_480++;
	}
	return;
}

void Function_128(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x6B51 / 27473
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_13(Global_6269) };
		}
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, uVar4, iParam6);
	}
}

bool Function_129(int iParam0, int iParam1, int iParam2) //Position: 0x6BCC / 27596
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	iVar0 = 0;
	fVar2 = VDIST(Global_34574, *(iParam0 + 4));
	fVar3 = VDIST(Global_34574, *(iParam0 + 16));
	if (fVar2 >= fVar3)
	{
		fVar1 = fVar2;
	}
	else
	{
		fVar1 = fVar3;
	}
	if (Global_63096 != 1 || Global_3394 != 1)
	{
		iVar0 = 0;
	}
	else if (iParam1 != 1 && fVar1 < 25.0f)
	{
		iVar0 = 0;
	}
	else if (Function_130() && iParam2 != 0)
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

bool Function_130() //Position: 0x6C6A / 27754
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

var Function_131(int iParam0) //Position: 0x6C97 / 27799
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (!Function_15(iParam0->f_584, 8) && iParam0->f_328 > 3)
	{
		if (VDIST(Global_34574, *(iParam0 + 4)) < VDIST(Global_34574, *(iParam0 + 16)) && IS_STRING_VALID(iParam0 + 276[iParam0->f_3284]))
		{
			iVar1 = 1;
		}
		if (iVar1 == 1)
		{
			if (IS_STRING_VALID(iParam0 + 276[iParam0->f_3284]))
			{
				Function_12(iParam0 + 276[iParam0->f_3284], 3.0f, 0, 2, 1, 0);
				iParam0->f_328++;
				Function_132(iParam0 + 44);
				iVar0 = 1;
			}
		}
		else if (IS_STRING_VALID(iParam0 + 220[iParam0->f_2724]))
		{
			Function_12(iParam0 + 220[iParam0->f_2724], 3.0f, 0, 2, 1, 0);
			iParam0->f_272++;
			iParam0->f_272 = (iParam0->f_272 % 3);
			Function_132(iParam0 + 44);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void Function_132(int iParam0) //Position: 0x6D7C / 28028
{
	Function_355(iParam0, 0.0f);
	return;
}

bool Function_133(int iParam0, int iParam1) //Position: 0x6D88 / 28040
{
	int iVar0;
	float fVar1;
	
	iVar0 = 0;
	if (VDIST(Global_34574, *(iParam0 + 4)) >= VDIST(Global_34574, *(iParam0 + 16)))
	{
		fVar1 = VDIST(Global_34574, *(iParam0 + 4));
	}
	else
	{
		fVar1 = VDIST(Global_34574, *(iParam0 + 16));
	}
	if (Global_63096 == 1)
	{
		iVar0 = 0;
	}
	else if (iParam1 != 1 && fVar1 < 25.0f)
	{
		iVar0 = 0;
	}
	else if (!IS_STRING_VALID(iParam0 + 220[04]))
	{
		iVar0 = 0;
	}
	else if (Function_130())
	{
		iVar0 = 0;
	}
	else if (Function_119(iParam0 + 44, 8.0f))
	{
		iVar0 = 1;
	}
	return iVar0;
}

void Function_134(int iParam0) //Position: 0x6E2B / 28203
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
			Function_118(iParam0 + 56[iParam0->f_1084], 8.5f, (*iParam0 + 128)[iParam0->f_108], 2, 0, 0, 0, 0);
		}
		iParam0->f_108++;
	}
	return;
}

bool Function_135(int iParam0, int iParam1, int iParam2) //Position: 0x6ECD / 28365
{
	int iVar0;
	float fVar1;
	
	iVar0 = 0;
	if (VDIST(Global_34574, *(iParam0 + 4)) >= VDIST(Global_34574, *(iParam0 + 16)))
	{
		fVar1 = VDIST(Global_34574, *(iParam0 + 4));
	}
	else
	{
		fVar1 = VDIST(Global_34574, *(iParam0 + 16));
	}
	if (Global_63096 == 1)
	{
		iVar0 = 0;
	}
	else if (iParam1 != 1 && fVar1 < 25.0f)
	{
		iVar0 = 0;
	}
	else if (!IS_STRING_VALID(iParam0 + 56[04]))
	{
		iVar0 = 0;
	}
	else if (Function_130() && iParam2 != 0)
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

void Function_136(int iParam0) //Position: 0x6F84 / 28548
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	vector3 vVar9;
	var uVar12;
	int iVar13;
	
	if (SQUAD_IS_VALID(iParam0->f_568) && Function_119(iParam0 + 572, 7.0f))
	{
		Function_138(iParam0);
		vVar0 = { StackVal, StackVal, Function_138(iParam0) };
		if (Function_85(StackVal, StackVal, vVar0))
		{
			iVar13 = 0;
			while (iVar13 < (SQUAD_GET_SIZE(iParam0->f_568) - 1))
			{
				uVar12 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_568, iVar13);
				vVar9 = { 0.0f, 0.0f, RAND_FLOAT_RANGE(3.0f, 6.0f) };
				ROTATE_VECTOR_XZ(&vVar9, RAND_FLOAT_RANGE(0.0f, 360.0f), 0);
				vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar0, StackVal) };
				FIND_GROUND_INTERSECTION(&vVar3, 100.0f, &vVar3, &uVar6);
				TASK_BIRD_LAND_AT_COORD(uVar12, &vVar3);
				iVar13++;
			}
			Function_137(iParam0->f_568, 1);
			Function_132(iParam0 + 572);
		}
		else
		{
			Function_33(iParam0, 1);
		}
	}
	return;
}

void Function_137(bool bParam0, int iParam1) //Position: 0x7030 / 28720
{
	int iVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	while (iVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, iVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			TASK_PRIORITY_SET(bVar1, iParam1);
		}
		iVar0++;
	}
	return;
}

vector3 Function_138(int iParam0) //Position: 0x706B / 28779
{
	return StackVal, StackVal, *(iParam0 + 4);
}

void Function_139(int iParam0) //Position: 0x7077 / 28791
{
	if (GET_DEBUG_DRAW_STATE())
	{
	}
	return;
}

void Function_140(var uParam0, int iParam1) //Position: 0x7083 / 28803
{
	int iVar0;
	
	if (uParam0->f_620 != 0 && iParam1 != 1)
	{
		uParam0->f_620 = iParam1;
	}
	else if (uParam0->f_620 == 1)
	{
		uParam0->f_620 = iParam1;
		if (uParam0->f_488 != 4294967295)
		{
			if (uParam0->f_620 == 2)
			{
				iVar0 = Function_188(uParam0);
				if ((iVar0 == 4294967295 && iVar0 == 0) && Function_187(uParam0) != 1)
				{
					Function_166(uParam0->f_488, iVar0, 1);
				}
				if (uParam0->f_484 != 1 || uParam0->f_484 != 0)
				{
					Function_163(200, 1, 0);
				}
				else
				{
					Function_144(50, 1, 0);
				}
				if (uParam0->f_332 > 0)
				{
					Function_143(uParam0->f_332, 1);
				}
				else
				{
					Function_141(uParam0->f_332, 1);
				}
			}
			else if (uParam0->f_620 == 3)
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

int Function_141(bool bParam0, bool bParam1) //Position: 0x7158 / 29016
{
	bool bVar0;
	
	bVar0 = Function_78(0);
	if ((Function_78(0) - bParam0) <= 0)
	{
		bParam0 = bVar0;
	}
	if (bParam0 >= 0)
	{
		Function_142(0, bParam0, 0);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, (bParam0 * 4294967295), 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_78(0));
	return 1;
}

int Function_142(int iParam0, bool bParam1, int iParam2) //Position: 0x71E8 / 29160
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
	Function_76(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_65(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_143(bool bParam0, bool bParam1) //Position: 0x73E3 / 29667
{
	bool bVar0;
	
	bVar0 = Function_78(0);
	if ((Function_78(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_99(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_78(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_99(597, bParam0, 0, 0);
	}
	if ((Function_78(597) + Function_78(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

void Function_144(int iParam0, bool bParam1, bool bParam2) //Position: 0x74AE / 29870
{
	int iVar0;
	bool bVar1;
	
	if (Function_162(0) && (!Global_3380 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_107())
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
	iVar0 = Function_78(3);
	Function_159();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_157(3, bVar1);
		if (!bParam2)
		{
			if (!Function_156(Global_76848, 4))
			{
				Function_151(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_99(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_74(3));
	iVar0 = Function_78(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_146(4, Function_150(Global_12976.f_156), 1);
				Function_145(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_146(4, Function_150(Global_12976.f_156), 1);
				Function_145(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_146(4, Function_150(Global_12976.f_156), 1);
				Function_145(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_146(4, Function_150(Global_12976.f_156), 1);
				Function_145(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_146(4, Function_150(Global_12976.f_156), 1);
				Function_145(Global_12976.f_152, Global_12976.f_156);
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

void Function_145(int iParam0, int iParam1) //Position: 0x767D / 30333
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

int Function_146(int iParam0, char* cParam1, bool bParam2) //Position: 0x78DB / 30939
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
	Function_102(iParam0, cParam1, 0, 1);
	iVar1 = Function_147();
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

int Function_147() //Position: 0x7A60 / 31328
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
	Function_148();
	return 0;
}

void Function_148() //Position: 0x7AFF / 31487
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
		Function_149(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_149(int iParam0) //Position: 0x7BAE / 31662
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

var Function_150(int iParam0) //Position: 0x7C0C / 31756
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

void Function_151(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x7C9B / 31899
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_153(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_152(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_152(char* cParam0, int iParam1) //Position: 0x7D07 / 32007
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

bool Function_153(bool bParam0, var uParam1, int iParam2) //Position: 0x7D3E / 32062
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
		if (Function_155(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_154(uVar0))
		{
			case 0x00000002:
				if (!Function_156(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_154(char* cParam0) //Position: 0x7DB6 / 32182
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

int Function_155(int iParam0) //Position: 0x7E57 / 32343
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_54(&iVar1, 2147483648);
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

bool Function_156(var uParam0, int iParam1) //Position: 0x7E94 / 32404
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_157(int iParam0, bool bParam1) //Position: 0x7EA7 / 32423
{
	bool bVar0;
	int iVar1;
	
	Function_99(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_158(iParam0, 4294967295);
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
	iVar1 = Function_147();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

var Function_158(int iParam0, int iParam1) //Position: 0x8045 / 32837
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

void Function_159() //Position: 0x8086 / 32902
{
	Function_161(3, 0.0f);
	Function_160(3, 10000.0f);
	return;
}

int Function_160(int iParam0, int iParam1) //Position: 0x809C / 32924
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_161(int iParam0, int iParam1) //Position: 0x80DC / 32988
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_162(int iParam0) //Position: 0x811C / 33052
{
	return (*&Global_12976 + 104)[iParam0];
}

void Function_163(int iParam0, bool bParam1, bool bParam2) //Position: 0x812B / 33067
{
	int iVar0;
	bool bVar1;
	
	if (Function_162(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_107())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_78(1);
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
			Function_157(1, bVar1);
			if (!bParam2)
			{
				if (!Function_156(Global_76848, 1))
				{
					Function_151(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_165(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_156(Global_76848, 2))
				{
					Function_151(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_99(1, bVar1, 0, 0);
	}
	else
	{
		Function_142(1, (4294967295 * bVar1), 0);
	}
	if (Function_78(1) <= 4294962296)
	{
		Function_64(1, 4294962296, 0);
	}
	else if (Function_78(1) >= 5000)
	{
		Function_64(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_74(1));
	iVar0 = Function_78(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_146(2, Function_164(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_146(2, Function_164(Global_12976.f_152), 0);
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
				Function_146(2, Function_164(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_146(2, Function_164(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_146(2, Function_164(Global_12976.f_152), 1);
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
				Function_146(2, Function_164(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_146(2, Function_164(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_146(2, Function_164(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_146(2, Function_164(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_146(2, Function_164(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_146(2, Function_164(Global_12976.f_152), 1);
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
				Function_146(2, Function_164(Global_12976.f_152), 0);
			}
			break;
	}
	Function_145(Global_12976.f_152, Global_12976.f_156);
	return;
}

var Function_164(int iParam0) //Position: 0x844C / 33868
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

int Function_165(int iParam0, bool bParam1) //Position: 0x84EF / 34031
{
	bool bVar0;
	int iVar1;
	
	Function_142(iParam0, bParam1, 0);
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
	iVar1 = Function_158(iParam0, 4294967295);
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
	iVar1 = Function_147();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

void Function_166(int iParam0, char* cParam1, bool bParam2) //Position: 0x868B / 34443
{
	char* cVar0[32];
	
	if (!Function_186(3))
	{
		return;
	}
	if (Function_52())
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
						if (IS_PS3() || Function_185())
						{
							Function_167(4, 16, 0, 0, 0);
						}
						break;
					
					case 0x0000000E:
						Function_167(5, 16, 0, 0, 0);
						break;
					
					case 0x0000000C:
						Function_167(7, 16, 0, 0, 0);
						break;
					}
			}
			strcpy(&cVar0, "PROCTHEME_ATTACK", 32);
			break;
		
		case 0x00000000:
			switch (cParam1)
			{
				case 0x00000019:
					if (IS_PS3() || Function_185())
					{
						Function_167(4, 8, 0, 0, 0);
					}
					break;
				
				case 0x0000000E:
					Function_167(5, 8, 0, 0, 0);
					break;
				
				case 0x00000018:
					Function_167(6, 8, 0, 0, 0);
					break;
				
				case 0x0000000C:
					Function_167(7, 8, 0, 0, 0);
					break;
			}
			strcpy(&cVar0, "PROCTHEME_BOUNTY_HUNTER", 32);
			break;
	}
	return;
}

void Function_167(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x87A7 / 34727
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_184(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_186(3) || iParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_183(bParam0, 2))
	{
		Function_99(456, 1, 0, 0);
		Function_182(bParam0, 2);
		if (!bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_128(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_181(bParam0, iParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || iParam1);
		Function_182(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_180(0, 0, 1, 1))
			{
				Function_53(1);
				Function_51(1, 0);
			}
			else
			{
				Function_179();
			}
		}
		Function_174(bParam0);
		if (StackVal && !Function_15(((((!Function_130() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_15((((Function_130() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_14())
		{
			if (!Function_156(Global_76846, 2))
			{
				Function_151(Global_34573, 2, 1, 0);
			}
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_169();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_168(3, iParam1);
				break;
			
			case 0x00000005:
				Function_168(3, SHIFT_LEFT(iParam1, 6));
				break;
			
			case 0x00000006:
				Function_168(3, SHIFT_LEFT(iParam1, 12));
				break;
			
			case 0x00000007:
				Function_168(3, SHIFT_LEFT(iParam1, 18));
				break;
			
			case 0x00000008:
				Function_168(3, SHIFT_LEFT(iParam1, 24));
				break;
			
			case 0x00000009:
				Function_168(2, SHIFT_LEFT(iParam1, 18));
				break;
			
			case 0x0000000A:
				Function_98(2, 24);
				break;
			
			case 0x00000003:
				Function_98(2, 25);
				break;
			
			case 0x0000000F:
				Function_98(2, 26);
				break;
			
			case 0x0000000D:
				Function_98(2, 27);
				break;
			
			case 0x0000000E:
				Function_98(2, 28);
				break;
			}
	}
}

void Function_168(int iParam0, bool bParam1) //Position: 0x8A3D / 35389
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

void Function_169() //Position: 0x8AA8 / 35496
{
	if (Function_184(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_173(Global_28180);
			Global_28180.f_8 = Function_170(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_173(Global_28180);
			Global_28180.f_8 = Function_170(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_170(int iParam0, int iParam1) //Position: 0x8B23 / 35619
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
					if (Function_172(6, 0) || Function_172(12, 0))
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
					if (Function_171(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_172(5, 0))
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
					if (Function_171(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_171(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_171(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_171(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_172(26, 0))
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
					if (Function_171(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_171(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_171(27) && iVar18)
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
					if (Function_171(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_171(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_171(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_171(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_172(17, 0) && iVar15)
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
					if (Function_171(19) && iVar19)
					{
						vVar0 = { -1708.36f, 46.18f, 2175.89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_172(6, 0) && Function_171(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_171(17) && iVar19)
					{
						vVar0 = { -1687.208f, 53.208f, 2140.491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_172(9, 0) && Function_171(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_171(15) && iVar19)
					{
						vVar0 = { -1709.084f, 55.216f, 2104.631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_172(8, 0) && iVar19)
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
	if (Function_85(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_85(StackVal, StackVal, vVar3))
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
	if (!Function_85(StackVal, StackVal, vVar3))
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

int Function_171(int iParam0) //Position: 0x9714 / 38676
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_172(int iParam0, bool bParam1) //Position: 0x9729 / 38697
{
	int iVar0;
	
	iVar0 = Function_105(iParam0);
	if (!Function_43(iVar0))
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

int Function_173(int iParam0) //Position: 0x9766 / 38758
{
	int iVar0;
	int iVar1;
	
	if (!Function_184(iParam0))
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

void Function_174(bool bParam0) //Position: 0x97B5 / 38837
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
			if (Function_181(bParam0, Function_178(bVar24)))
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
			if (Function_181(bParam0, Function_178(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_177(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), 0, 0);
		Function_176(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_175(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_175(int iParam0) //Position: 0x9965 / 39269
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_184(iParam0))
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

void Function_176(var uParam0, int iParam1) //Position: 0x99BC / 39356
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

var Function_177(int iParam0) //Position: 0x99E1 / 39393
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_184(iParam0))
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

int Function_178(bool bParam0) //Position: 0x9A37 / 39479
{
	return SHIFT_LEFT(1, bParam0);
}

void Function_179() //Position: 0x9A43 / 39491
{
	return;
}

bool Function_180(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x9A49 / 39497
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

bool Function_181(bool bParam0, int iParam1) //Position: 0x9AED / 39661
{
	int iVar0;
	
	if (!Function_184(bParam0))
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

void Function_182(int iParam0, int iParam1) //Position: 0x9B4C / 39756
{
	if (!Function_184(iParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[iParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_183(int iParam0, int iParam1) //Position: 0x9BA1 / 39841
{
	int iVar0;
	
	if (!Function_184(iParam0))
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

bool Function_184(int iParam0) //Position: 0x9BCE / 39886
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_185() //Position: 0x9BE4 / 39908
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_15(GET_GAME_EDITION(), 16);
	}
	return 0;
}

bool Function_186(int iParam0) //Position: 0x9C14 / 39956
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

int Function_187(int iParam0) //Position: 0x9C30 / 39984
{
	return !Function_15(iParam0->f_584, 16384);
}

var Function_188(int iParam0) //Position: 0x9C42 / 40002
{
	return iParam0->f_492;
}

int Function_189(int iParam0) //Position: 0x9C4D / 40013
{
	iParam0->f_616 = Function_190(iParam0);
	Function_139(iParam0);
	return iParam0->f_616;
}

var Function_190(int iParam0) //Position: 0x9C67 / 40039
{
	int iVar0;
	int iVar1[3];
	char* cVar5[64];
	int iVar21;
	
	iVar0 = 0;
	if (Function_212(0))
	{
		iVar1[0] = "Pass";
		iVar1[1] = "Fail";
		iVar1[2] = "Cancel";
		strcpy(&cVar5, "RDR PROCMISSION MENU - ", 64);
		stradd(&cVar5, GET_SHORT_SCRIPT_NAME(), 64);
		iVar21 = Function_198(iParam0 + 588, &iVar1, &cVar5, GET_DEBUG_PADINDEX(), 0);
		if (iVar21 == 0)
		{
			Function_191();
			iVar0 = 2;
		}
		else if (iVar21 == 1)
		{
			Function_191();
			iVar0 = 3;
		}
		else if (iVar21 == 2)
		{
			Function_191();
			iVar0 = 4;
		}
		else
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void Function_191() //Position: 0x9D0B / 40203
{
	Function_193();
	Function_192(10, 3);
	return;
}

void Function_192(int iParam0, int iParam1) //Position: 0x9D1A / 40218
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

void Function_193() //Position: 0x9E51 / 40529
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_197())
	{
		Function_196(10, 3);
	}
	else
	{
		Function_194();
	}
	Global_30920 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_62(), 0);
	AI_CLEAR_DONT_HARM_ACTOR(Function_62());
	UI_POP("nDebugMenu");
	return;
}

void Function_194() //Position: 0x9E9C / 40604
{
	Function_195(25, 2);
	return;
}

void Function_195(int iParam0, int iParam1) //Position: 0x9EA8 / 40616
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

void Function_196(int iParam0, int iParam1) //Position: 0xA0A6 / 41126
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

bool Function_197() //Position: 0xA1DD / 41437
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
				if (!Function_15(Global_78480.f_124, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

var Function_198(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xA244 / 41540
{
	struct<33> Var0;
	
	if ((Global_62478 || Global_62479) || Global_62480)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	uParam0->f_12 = uParam3;
	uParam0->f_16 = uParam4;
	Function_211(&Var15, &Var0);
	uVar20 = Function_210(*uParam1, &Var15);
	Function_209(uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_208(uParam0, uVar20);
	Function_206(StackVal, uParam0, Var15.f_12);
	Function_204(StackVal, uParam0, Var15.f_12);
	iVar21 = Function_203(*uParam1, uParam0, &Var15);
	while (!Var15.f_16 && iVar21 > *uParam1)
	{
		strcpy(&Var0, (*uParam1)[iVar21], 32);
		if (Function_200(&Var15, &Var0, uParam0, 9, 6, 28, 4294967295))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar21;
		}
		iVar21++;
	}
	Function_199(StackVal, Var0.f_32, Var15.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_199(int iParam0, int iParam1, int iParam2) //Position: 0xA30B / 41739
{
	char* cVar0;
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
			cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(cVar0))
			{
				GUI_SET_TEXT(cVar0, " ");
			}
			bVar1++;
		}
	}
	return;
}

bool Function_200(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xA367 / 41831
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
				Function_202(bParam1->f_32, bParam1->f_36, bParam1->f_40, &cVar0, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
				bParam1->f_32++;
				if ((IS_BUTTON_PRESSED(uParam2->f_12, bParam3, 1, 0) || IS_BUTTON_PRESSED(uParam2->f_16, bParam3, 1, 0)) || IS_DEBUGKEY_PRESSED(iParam5))
				{
					uParam2->f_24 = bParam3;
					return 1;
				}
				if ((IS_BUTTON_PRESSED(uParam2->f_12, bParam4, 1, 0) || IS_BUTTON_PRESSED(uParam2->f_16, bParam4, 1, 0)) || IS_DEBUGKEY_PRESSED(iParam6))
				{
					uParam2->f_24 = bParam4;
					return 1;
				}
			}
			Function_202(bParam1->f_32, bParam1->f_36, bParam1->f_40, bParam1, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
				Function_199(StackVal, bParam1->f_32, uParam0->f_12);
				return 0;
			}
		}
		Function_201(bParam1->f_32);
	}
	else
	{
		Function_201(bParam1->f_32);
	}
	return 0;
}

void Function_201(bool bParam0) //Position: 0xA4ED / 42221
{
	char* cVar0;
	char* cVar1[16];
	
	strcpy(&cVar1, "DB_MENU_", 16);
	stradd(&cVar1, I2STR(bParam0), 16);
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar1);
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_SET_TEXT(cVar0, " ");
	}
	return;
}

void Function_202(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0xA527 / 42279
{
	struct<13> Var0;
	char* cVar13[64];
	
	strcpy(&cVar9, "DB_MENU_", 16);
	stradd(&cVar9, I2STR(bParam0), 16);
	cVar4 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar9);
	if (!GUI_WINDOW_VALID(cVar4))
	{
		Var0 = uParam1;
		Var0.f_4 = uParam2;
		Var0.f_8 = (Var0 + (500.0f * fParam8));
		Var0.f_12 = (StackVal + (55.0f * fParam8));
		cVar4 = GUI_MAKE_TEXT(Global_13043, &Var0, &cVar9, "nberrylium", fParam8);
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
	GUI_SET_TEXT(cVar4, &cVar13);
	GUI_SET_TEXT_COLOR(cVar4, &Var5);
}

var Function_203(int iParam0, var uParam1, int iParam2) //Position: 0xA5D5 / 42453
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_204(var uParam0, int iParam1, int iParam2) //Position: 0xA5F9 / 42489
{
	switch (Function_205())
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

int Function_205() //Position: 0xA695 / 42645
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

void Function_206(var uParam0, int iParam1, int iParam2) //Position: 0xA6D1 / 42705
{
	switch (Function_207(uParam0))
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

int Function_207(int iParam0) //Position: 0xA769 / 42857
{
	float fVar0;
	float fVar1;
	
	fVar0 = (GET_STICK_Y(GET_PLAYER_PADINDEX(Function_62()), 0, 1) + GET_STICK_Y(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar0 >= -0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 12, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 12, 1, 0))
	{
		if (!Function_15(*iParam0, 0x40000000))
		{
			Function_87(iParam0, 0x40000000);
			return 1;
		}
	}
	if ((fVar0 <= 0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 14, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 14, 1, 0))
	{
		if (!Function_15(*iParam0, 0x40000000))
		{
			Function_87(iParam0, 0x40000000);
			return 2;
		}
	}
	Function_54(iParam0, 0x40000000);
	fVar1 = (GET_STICK_X(GET_PLAYER_PADINDEX(Function_62()), 0, 1) + GET_STICK_X(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar1 >= -0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 15, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 15, 1, 0))
	{
		if (!Function_15(*iParam0, 0x20000000))
		{
			Function_87(iParam0, 0x20000000);
			return 3;
		}
	}
	if ((fVar1 <= 0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 13, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 13, 1, 0))
	{
		if (!Function_15(*iParam0, 0x20000000))
		{
			Function_87(iParam0, 0x20000000);
			return 4;
		}
	}
	Function_54(iParam0, 0x20000000);
	return 0;
}

var Function_208(var uParam0, int iParam1) //Position: 0xA8B4 / 43188
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
		if (IS_BUTTON_PRESSED(uParam0->f_12, 13, 1, 0))
		{
			iVar0++;
			uParam0->f_20 = iVar0;
			uParam0->f_4 = 0;
			uParam0->f_8 = 0;
		}
		else if (IS_BUTTON_PRESSED(uParam0->f_12, 15, 1, 0))
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
		if (IS_BUTTON_PRESSED(uParam0->f_12, 15, 1, 0))
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
		if (IS_BUTTON_PRESSED(uParam0->f_12, 13, 1, 0))
		{
			iVar0++;
			uParam0->f_20 = iVar0;
			uParam0->f_4 = 0;
			uParam0->f_8 = 0;
		}
	}
	return iVar0;
}

void Function_209(char* cParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xAA03 / 43523
{
	struct<13> Var0;
	
	strcpy(&cVar9, "DB_MENU_TITLE", 16);
	cVar4 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar9);
	if (!GUI_WINDOW_VALID(cVar4))
	{
		Var0 = 0.0f;
		Var0.f_4 = 50.0f;
		Var0.f_8 = 1280.0f;
		Var0.f_12 = 150.0f;
		cVar4 = GUI_MAKE_TEXT(Global_13043, &Var0, &cVar9, "nberrylium", 2.0f);
	}
	Var5 = uParam1;
	Var5.f_4 = uParam2;
	Var5.f_8 = uParam3;
	Var5.f_12 = uParam4;
	GUI_SET_TEXT(cVar4, cParam0);
	GUI_SET_TEXT_COLOR(cVar4, &Var5);
	GUI_SET_TEXT_JUSTIFY(cVar4, 1);
}

var Function_210(int iParam0, int iParam1) //Position: 0xAA96 / 43670
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_211(var uParam0, int iParam1) //Position: 0xAAB0 / 43696
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

bool Function_212(int iParam0) //Position: 0xAAFE / 43774
{
	if (!Function_213(iParam0))
	{
		return 0;
	}
	return Global_30920;
}

bool Function_213(int iParam0) //Position: 0xAB12 / 43794
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

bool Function_214(bool bParam0, bool bParam1, int iParam2) //Position: 0xAB36 / 43830
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_VALID(bParam1))
		{
			if (ACTORS_IN_RANGE(bParam0, bParam1, iParam2))
			{
				return 1;
			}
		}
		LOG_ERROR("Attempting to check whether an actor is in range of an actor, where at least one is INVALID! Returning FALSE.");
	}
	else
	{
		LOG_ERROR("Attempting to check whether an actor is in range of an actor, where at least one is INVALID! Returning FALSE.");
	}
	return 0;
}

float Function_215(bool bParam0) //Position: 0xAC47 / 44103
{
	var uVar0;
	float fVar1;
	
	if (!bParam0)
	{
		Function_216(&uVar0, &fVar1);
		if (fVar1 < 60.0f)
		{
			return (fVar1 + 20.0f);
		}
		return (fVar1 + 10.0f);
	}
	return (190.0f + 20.0f);
}

void Function_216(float fParam0, int iParam1) //Position: 0xAC82 / 44162
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

void Function_217(bool bParam0) //Position: 0xAD0B / 44299
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

bool Function_218(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, var uParam7) //Position: 0xAD57 / 44375
{
	int iVar0;
	
	uParam7 = uParam7;
	if (!bParam6)
	{
		iVar0 = 0;
		while (iVar0 <= iParam1)
		{
			if (Function_219((*uParam0)[iVar0], uParam3, uParam4, uParam5, bParam6, 0x40400000))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool Function_219(bool bParam0, var uParam1, var uParam2, int iParam3, bool bParam4, float fParam5) //Position: 0xAD9F / 44447
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
		fVar0 = Function_117(bParam0, Global_34573);
		if (!Function_15(iParam3, 8))
		{
			if (GET_LAST_ATTACKER(bParam0) == Global_34573)
			{
				*uParam1 = 8;
				Function_220(bParam0);
				return 1;
			}
		}
		if (!Function_15(iParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(bParam0, 1.0f))
			{
				*uParam1 = 2;
				Function_220(bParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(bParam0, 1.0f, 1.0f))
			{
				*uParam1 = 2;
				Function_220(bParam0);
				return 1;
			}
		}
		if (!Function_15(iParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(bParam0) || (((GET_ACTOR_UNDER_RETICLE(Global_34573, 0) != bParam0 && IS_PLAYER_WEAPON_ZOOMED(Global_34573)) && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(Global_34573) != bParam0 && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f))
			{
				if (*uParam2 > 0.0f)
				{
					*uParam1 = 4;
					Function_220(bParam0);
					return 1;
				}
				if (*uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - *uParam2) < 1.3f)
					{
						*uParam1 = 4;
						Function_220(bParam0);
						return 1;
					}
				}
				*uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_15(iParam3, 1))
		{
			if (Global_3403 || Global_3404)
			{
				*uParam1 = 1;
				Function_220(bParam0);
				return 1;
			}
		}
		if (!Function_15(iParam3, 16))
		{
			if (UNK_0x7F454A92(bParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(bParam0)) > 2.0f && fVar0 > 18.0f)
				{
					*uParam1 = 16;
					Function_220(bParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_220(bool bParam0) //Position: 0xAF36 / 44854
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(bParam0, 1);
	UNK_0x99AFD2D1(bParam0, 0, 0);
	Function_221(bParam0);
	MEMORY_CONSIDER_AS(Global_34573, bParam0, 2);
	MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
	AI_GOAL_LOOK_CLEAR(bParam0);
	return;
}

void Function_221(bool bParam0) //Position: 0xAF6A / 44906
{
	SAY_SINGLE_LINE_CONTEXT(bParam0, 60, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

bool Function_222(int iParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0xAF81 / 44929
{
	if (StackVal & 64 == 64)
	{
		if (!*uParam2)
		{
			if (IS_ACTOR_VALID(bParam1))
			{
				if (Function_117(Global_34573, bParam1) > 15.0f)
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
		if (Function_225() && !*uParam2)
		{
			return 0;
		}
		if (Function_224(iParam0) && !*uParam2)
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
		if (!Function_223(iParam0, uParam5))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_223(int iParam0, int iParam1) //Position: 0xB0AF / 45231
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

int Function_224(int iParam0) //Position: 0xB0D0 / 45264
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

int Function_225() //Position: 0xB10E / 45326
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
						if (Function_226(StackVal, Global_34573) > IntToFloat(iVar1))
						{
							return 1;
						}
					}
				}
			}
			if (Function_226(StackVal, Global_34573) > IntToFloat(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

float Function_226(bool bParam0, bool bParam1) //Position: 0xB1C9 / 45513
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_228(bParam0);
			vVar0 = { StackVal, StackVal, Function_228(bParam0) };
			Function_227(bParam1);
			vVar3 = { StackVal, StackVal, Function_227(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

vector3 Function_227(bool bParam0) //Position: 0xB269 / 45673
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

vector3 Function_228(bool bParam0) //Position: 0xB2D5 / 45781
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

void Function_229(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6) //Position: 0xB33F / 45887
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
			Function_240(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_239(0);
		}
		if (bParam6)
		{
			Function_237(0, GET_THIS_SCRIPT_ID());
			Global_3373 = GET_THIS_SCRIPT_ID();
			Global_3401 = 1;
			Function_235(iParam3);
		}
		Function_233(iParam3);
		if (Function_232(StackVal, 32768))
		{
			Function_230(1);
		}
		Global_16876[iParam36].f_12++;
		Function_99(408, 1, 0, 0);
	}
}

void Function_230(bool bParam0) //Position: 0xB42C / 46124
{
	if (bParam0)
	{
		Function_231(0x10000000);
	}
	else
	{
		Function_113(0x10000000);
	}
	Global_26316.f_172 = 0;
	return;
}

void Function_231(int iParam0) //Position: 0xB450 / 46160
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

bool Function_232(var uParam0, int iParam1) //Position: 0xB463 / 46179
{
	return (uParam0 && iParam1) == 0;
}

void Function_233(int iParam0) //Position: 0xB470 / 46192
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (!Function_15(StackVal, 524288))
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
			bVar1 = Function_234(iVar0 * 60);
			ADD_TIME(&Global_17483[iParam075] + 264, 0, 0, bVar1, 0);
			Global_16876[iParam06] = Global_17483[iParam075].f_264;
		}
	}
	return;
}

int Function_234(int iParam0) //Position: 0xB514 / 46356
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_235(int iParam0) //Position: 0xB52A / 46378
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
	Function_236(&Var0 + 80[Var0.f_763], &(Global_16876[iParam06]), iParam0);
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

void Function_236(var uParam0, var uParam1, int iParam2) //Position: 0xB5C8 / 46536
{
	uParam0->f_4 = iParam2;
	*uParam0 = uParam1->f_12;
	uParam0->f_8 = 1;
	return;
}

void Function_237(int iParam0, int iParam1) //Position: 0xB5E0 / 46560
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
			Function_238(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_238(int iParam0) //Position: 0xB662 / 46690
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

void Function_239(int iParam0) //Position: 0xB6B0 / 46768
{
	Global_12976.f_76 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 76, 0, 0, (iParam0 + Function_234(900)), 0);
	return;
}

void Function_240(bool bParam0) //Position: 0xB6D2 / 46802
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, (bParam0 + Function_234(200)), 0);
	return;
}

void Function_241(vector3 vParam0, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7, bool bParam8) //Position: 0xB6F3 / 46835
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
	else if (!Function_85(StackVal, StackVal, vParam0))
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
			Function_240(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_239(0);
		}
		if (bParam8)
		{
			Function_237(0, GET_THIS_SCRIPT_ID());
			Global_3373 = GET_THIS_SCRIPT_ID();
			Function_235(iParam4);
			Global_3401 = 1;
		}
		Function_233(iParam4);
		if (Function_232(StackVal, 32768))
		{
			Function_230(1);
		}
		Global_16876[iParam46].f_12++;
		Function_99(408, 1, 0, 0);
	}
}

void Function_242(var uParam0, var uParam1, bool bParam2, int iParam3) //Position: 0xB7FA / 47098
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	_CREATE_EXPLOSION(uParam0, uParam1, bParam2, &vVar0, iParam3);
}

void Function_243(var uParam0, bool bParam1, bool bParam2) //Position: 0xB816 / 47126
{
	if (bParam1)
	{
		HUD_CLEAR_HELP_QUEUE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
		Function_118(uParam0, 0x40f00000, 1, 2, 0, 0, 0, 0);
		if (bParam2)
		{
			Function_244();
		}
	}
	return;
}

void Function_244() //Position: 0xB83F / 47167
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

void Function_245(bool bParam0, int iParam1) //Position: 0xB8C8 / 47304
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		if (IS_ACTOR_VALID((*bParam0)[iVar0]))
		{
			MAKE_ACTOR_READY_FOR_ACTION((*bParam0)[iVar0], 1);
			Function_246((*bParam0)[iVar0], &Global_34573);
		}
		iVar0++;
	}
	return;
}

int Function_246(bool bParam0, int iParam1) //Position: 0xB905 / 47365
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

void Function_247(var uParam0, var uParam1, var uParam2, float fParam3, vector3 vParam4) //Position: 0xB9EA / 47594
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
		if (Function_248(StackVal, StackVal, Global_30616, "player_herb", &uVar0, 20.0f, 5, vParam4) >= 0)
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

int Function_248(bool bParam0, bool bParam1, var uParam2, float fParam3, int iParam4, vector3 vParam5) //Position: 0xBA8B / 47755
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

vector3 Function_249(bool bParam0) //Position: 0xBB1F / 47903
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_250(int iParam0, int iParam1) //Position: 0xBB30 / 47920
{
	if (iParam1 == 1)
	{
		Function_87(iParam0 + 584, 8);
	}
	else
	{
		Function_54(iParam0 + 584, 8);
	}
	return;
}

void Function_251(int iParam0, vector3 vParam1) //Position: 0xBB53 / 47955
{
	*(iParam0 + 4) = { StackVal, StackVal, vParam1 };
}

void Function_252(bool bParam0, vector3 vParam1, var uParam4, bool bParam5, bool bParam6) //Position: 0xBB65 / 47973
{
	bool bVar0;
	bool bVar1;
	var uVar2[6];
	bool bVar9;
	int iVar10;
	char* cVar11[32];
	
	bVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(vParam1, 1.0f, "p_gen_footlockerfull01x", 1);
	if (IS_PHYSINST_VALID(bVar0))
	{
		bVar1 = GET_OBJECT_FROM_PHYSINST(bVar0);
		if (IS_OBJECT_VALID(bVar1))
		{
			ROTATE_OBJECT_UPRIGHT_TO_GROUND(bVar1, 1, 5.0f);
		}
	}
	DECOR_SET_INT(GET_OBJECT_FROM_GRINGO(bParam0), "GringoDollarAmt", Function_257(uParam4, 1, 1, 0, 0));
	Function_256(GET_OBJECT_FROM_GRINGO(bParam0));
	if (bParam5 == 4294967295)
	{
		bVar9 = false;
		Function_255(Global_34573, &uVar2, &bVar9);
		if (bVar9 >= 0)
		{
			PRINTINT(bVar9);
			iVar10 = RAND_INT_RANGE(0, (bVar9 - 1));
			PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(uVar2[iVar10]));
			bParam5 = Function_254(Global_34573, uVar2[iVar10]);
		}
		else
		{
			LOG_ERROR("Player has no valid weapon categories");
		}
	}
	else
	{
		bParam5 = Function_254(Global_34573, bParam5);
	}
	if (bParam5 == 4294967295)
	{
		LOG_ERROR("Trying to give invalid ammo");
	}
	strcpy(&cVar11, "Ammo_", 32);
	straddi(&cVar11, GET_AMMO_ENUM(bParam5), 32);
	PRINTSTRING(&cVar11);
	DECOR_SET_INT(GET_OBJECT_FROM_GRINGO(bParam0), &cVar11, FLOOR((2.0f * GET_WEAPON_MAX_AMMO(bParam5))));
	if (bParam6 == 4294967295)
	{
		bParam6 = Function_253();
	}
	DECOR_SET_INT(GET_OBJECT_FROM_GRINGO(bParam0), "GiveItem", bParam6);
}

int Function_253() //Position: 0xBCD6 / 48342
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
		iVar1 = 6;
	}
	else
	{
		iVar1 = 7;
	}
	return iVar1;
}

int Function_254(bool bParam0, int iParam1) //Position: 0xBD31 / 48433
{
	int iVar0;
	
	iVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(bParam0, iParam1);
	return iVar0;
}

void Function_255(bool bParam0, var uParam1, int iParam2) //Position: 0xBD42 / 48450
{
	*iParam2 = 0;
	if (Function_254(bParam0, 39) != 4294967295)
	{
		(*uParam1)[*iParam2] = 39;
		*iParam2++;
	}
	if (Function_254(bParam0, 41) != 4294967295)
	{
		(*uParam1)[*iParam2] = 41;
		*iParam2++;
	}
	if (Function_254(bParam0, 40) != 4294967295)
	{
		(*uParam1)[*iParam2] = 40;
		*iParam2++;
	}
	if (Function_254(bParam0, 42) != 4294967295)
	{
		(*uParam1)[*iParam2] = 42;
		*iParam2++;
	}
	if (Function_254(bParam0, 43) != 4294967295)
	{
		(*uParam1)[*iParam2] = 43;
		*iParam2++;
	}
	if (Function_254(bParam0, 48) != 4294967295)
	{
		(*uParam1)[*iParam2] = 48;
		*iParam2++;
	}
	if (Function_254(bParam0, 44) != 4294967295)
	{
		(*uParam1)[*iParam2] = 44;
		*iParam2++;
	}
	return;
}

void Function_256(bool bParam0) //Position: 0xBE10 / 48656
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

var Function_257(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xBE44 / 48708
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
		bVar0 = (bVar0 * (0.75f + ((TO_FLOAT(Function_78(5)) / 100.0f) * 0.5f)));
	}
	if (bParam3)
	{
		if (HAS_ITEM(Function_258(17), Global_34573))
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

var Function_258(bool bParam0) //Position: 0xBF46 / 48966
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

var Function_259() //Position: 0xC077 / 49271
{
	int iVar0;
	
	return iVar0;
}

void Function_260(bool bParam0) //Position: 0xC07F / 49279
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

void Function_261(var uParam0, int iParam1) //Position: 0xC0A5 / 49317
{
	Function_262(uParam0, iParam1);
	return;
}

void Function_262(bool bParam0, int iParam1) //Position: 0xC0B2 / 49330
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
	bVar0 = Function_263(GET_OBJECT_FROM_ACTOR(bParam0));
	if (IS_LAYOUTREF_VALID(bVar0))
	{
		GET_POSITION(bParam0, &vVar5);
		vVar8[03] = { 0.1f, 1.22f, 0.0f };
		vVar8[13] = { 0.05f, 1.22f, 0.3f };
		vVar8[23] = { -0.1f, 1.22f, 0.45f };
		vVar18[03] = { 0.0f, 0.0f, 0.0f };
		vVar18[13] = { 0.0f, 95.0f, 0.0f };
		vVar18[23] = { 0.0f, -135.0f, 0.0f };
		memcpy(&(Var28[04]), StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_353("ntransTntA"), 4);
		memcpy(&(Var28[14]), StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_353("ntransTntB"), 4);
		memcpy(&(Var28[24]), StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_353("ntransTntC"), 4);
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
					ATTACH_OBJECTS(bVar1[iVar45], bParam0, Function_259(), vVar8[iVar453], vVar18[iVar453], 4294967295);
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

var Function_263(bool bParam0) //Position: 0xC2E5 / 49893
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

var Function_264(bool bParam0, bool bParam1, int iParam2, int iParam3, vector3 vParam4, vector3 vParam7, var uParam10, int iParam11, int iParam12, int iParam13, int iParam14) //Position: 0xC33F / 49983
{
	bool bVar0;
	int iVar1[6];
	bool bVar8;
	int iVar9;
	int iVar10;
	char* cVar11[16];
	bool bVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	
	bVar0 = CREATE_ACTOR_IN_LAYOUT(bParam0, bParam1, iParam2, vParam4, vParam7);
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
			if (Function_267(Global_30750[6], 4, 23, 0) && uParam10)
			{
				iVar16 = Function_266(StackVal, StackVal, Global_30750[6], vParam4, 4, 23, 0);
				if (Function_265(iVar16, &iVar1))
				{
					iVar16 = 976;
				}
				iVar1[iVar9] = iVar16;
				bVar15 = CREATE_ACTOR_IN_LAYOUT(bVar0, &cVar11, iVar16, vParam4, vParam7);
			}
			iVar17 = 4294967295;
			if (!IS_ACTOR_VALID(bVar15))
			{
				switch (iVar9)
				{
					case 0x00000000:
						iVar17 = iParam3;
						break;
					
					case 0x00000001:
						iVar17 = iParam11;
						break;
					
					case 0x00000002:
						iVar17 = iParam12;
						break;
					
					case 0x00000003:
						iVar17 = iParam13;
						break;
					
					default:
						iVar17 = iParam3;
						break;
				}
				if ((iVar17 != 4294967295 || iVar17 > 976) || iVar17 < 1007)
				{
					LOG_ERROR("Malformed Coach horses");
					return bVar0;
				}
				bVar15 = CREATE_ACTOR_IN_LAYOUT(bVar0, &cVar11, iVar17, vParam4, vParam7);
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
	if (iParam2 == 1197)
	{
		iVar18 = 2;
		while (iVar18 < (GET_NUM_AVAILABLE_SEATS(bVar0) - 1))
		{
			ENABLE_VEHICLE_SEAT(bVar0, iVar18, 0);
			iVar18++;
		}
	}
	return bVar0;
}

bool Function_265(int iParam0, int iParam1) //Position: 0xC573 / 50547
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

var Function_266(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6) //Position: 0xC5A5 / 50597
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam4, bParam5, bParam6, 1, vParam1);
}

int Function_267(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xC5BD / 50621
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

float Function_268(bool bParam0, vector3 vParam1) //Position: 0xC5E4 / 50660
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_228(bParam0);
		vVar0 = { StackVal, StackVal, Function_228(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

float Function_269() //Position: 0xC65E / 50782
{
	float fVar0;
	int iVar1;
	
	if (Global_3371)
	{
		return 0.0f;
	}
	Function_216(&fVar0, &iVar1);
	if (fVar0 >= 50.0f)
	{
		return (fVar0 - 10.0f);
	}
	return (fVar0 - 20.0f);
}

void Function_270(int iParam0, bool bParam1, var uParam2, vector3 vParam3, int iParam6, bool bParam7, int iParam8) //Position: 0xC68F / 50831
{
	struct<8> Var0;
	bool bVar8;
	int iVar9;
	
	iVar9 = 0;
	Function_290(iParam0);
	if (IS_OBJECT_VALID(bParam1))
	{
		*iParam0 = bParam1;
		bVar8 = bParam1;
	}
	iParam0->f_40 = uParam2;
	if (!Function_85(StackVal, StackVal, vParam3))
	{
		*(iParam0 + 4) = { StackVal, StackVal, vParam3 };
	}
	if (iParam6 == 1)
	{
		Function_87(iParam0 + 584, 4);
	}
	else
	{
		Function_54(iParam0 + 584, 4);
	}
	if (bParam7)
	{
		if (Function_43(iParam0->f_624))
		{
			Function_289(iParam0->f_624, 1);
			Function_87(iParam0 + 584, 32);
		}
		else
		{
			LOG_ERROR("PROCMISSION_SETUP found an invalid deed");
		}
	}
	Function_87(iParam0 + 584, 1024);
	iParam0->f_564 = iParam8;
	if (iParam8 >= 0)
	{
		if (!IS_OBJECT_VALID(bVar8))
		{
			bVar8 = CREATE_POINT_IN_LAYOUT(iParam0->f_28, &Var0, vParam3, 0.0f, 0.0f, 0.0f);
			iVar9 = 1;
		}
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_353("nbirdSquad") };
		iParam0->f_568 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(iParam0->f_28, &Var0));
		if (SQUAD_IS_VALID(iParam0->f_568))
		{
			Function_273(iParam0->f_28, iParam0->f_568, iParam8, bVar8, 1129, 0x41200000);
			Function_272(iParam0->f_568, 0);
		}
		if (iVar9 == 1)
		{
			DESTROY_OBJECT(bVar8);
		}
		Function_132(iParam0 + 572);
	}
	Function_132(iParam0 + 44);
	Function_271(0);
}

void Function_271(int iParam0) //Position: 0xC7DE / 51166
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, 0, (iParam0 + Function_234(105)), 0);
	return;
}

void Function_272(bool bParam0, bool bParam1) //Position: 0xC7FF / 51199
{
	int iVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, iVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			SET_ACTOR_UPDATE_PRIORITY(bVar1, bParam1);
		}
		iVar0++;
	}
	return;
}

void Function_273(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, float fParam5) //Position: 0xC840 / 51264
{
	vector3 vVar0;
	vector3 vVar3;
	struct<8> Var6;
	struct<2> Var14;
	int iVar16;
	int iVar17;
	
	Function_287(10.0f);
	Var14 = { StackVal, Function_287(10.0f) };
	if (SQUAD_IS_VALID(bParam1))
	{
		if (!Function_286(iParam4) || iParam4 != 0)
		{
			iVar16 = Function_276(128, 0, 0, 4294967295, 0);
		}
		else
		{
			iVar16 = iParam4;
		}
		iVar17 = 0;
		while (iVar17 < (iParam2 - 1))
		{
			Function_274(&Var14, iVar17);
			GET_OBJECT_RELATIVE_POSITION(uParam3, Function_274(&Var14, iVar17), &vVar0);
			vVar0.f_4 = (vVar0.y + (fParam5 + RAND_FLOAT_RANGE(0.0f, 20.0f)));
			vVar3.f_4 = RAND_FLOAT_RANGE(0.0f, 360.0f);
			Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_353("genbird_") };
			SQUAD_JOIN(CREATE_ACTOR_IN_LAYOUT(bParam0, &Var6, iVar16, vVar0, vVar3), bParam1);
			iVar17++;
		}
	}
	else
	{
		LOG_ERROR("CREATE_BIRD_SQUAD_IN_LAYOUT - birdSquad passed in is not squad");
	}
}

vector3 Function_274(var uParam0, int iParam1) //Position: 0xC932 / 51506
{
	vector3 vVar0;
	
	if (!Function_275(uParam0))
	{
		LOG_ERROR("Attempting to GET_FORMATION_POSITION with invalid FORMATION");
		return 0.0f, 0.0f, 0.0f;
	}
	if (iParam1 <= 0)
	{
		PRINTSTRING(GET_OBJECT_NAME(*uParam0));
		LOG_ERROR("Attempting to get invalid formation index - less than zero");
		return 0.0f, 0.0f, 0.0f;
	}
	if (iParam1 >= (GET_NUM_FORMATION_LOCATIONS(*uParam0) - 1))
	{
		PRINTSTRING(GET_OBJECT_NAME(*uParam0));
		PRINTSTRING(" ");
		PRINTINT(GET_NUM_FORMATION_LOCATIONS(*uParam0));
		PRINTNL();
		LOG_ERROR("Attempting to get invalid formation index - too large!");
		return 0.0f, 0.0f, 0.0f;
	}
	GET_FORMATION_LOCATION(*uParam0, iParam1, &vVar0);
	vVar0.x = (StackVal * vVar0.x);
	vVar0.f_4 = (StackVal * vVar0.y);
	vVar0.f_8 = (StackVal * vVar0.z);
	return StackVal, StackVal, vVar0;
}

bool Function_275(int iParam0) //Position: 0xCA73 / 51827
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

var Function_276(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xCA95 / 51861
{
	return Function_277(uParam0, uParam1, uParam2, uParam3, uParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_277(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, vector3 vParam6) //Position: 0xCAAE / 51886
{
	switch (iParam0)
	{
		case 0x00000001:
			return Function_280(StackVal, StackVal, Global_30750[0], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000002:
			return Function_280(StackVal, StackVal, Global_30750[1], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000004:
			return Function_280(StackVal, StackVal, Global_30750[2], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000008:
			return Function_280(StackVal, StackVal, Global_30750[3], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000010:
			return Function_280(StackVal, StackVal, Global_30750[4], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000020:
			return Function_280(StackVal, StackVal, Global_30750[5], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000040:
			return Function_280(StackVal, StackVal, Global_30750[6], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000080:
			return Function_280(StackVal, StackVal, Global_30750[7], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000100:
			return Function_280(StackVal, StackVal, Global_30750[8], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000200:
			return Function_280(StackVal, StackVal, Global_30750[9], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000400:
			return Function_280(StackVal, StackVal, Global_30750[10], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000800:
			return Function_280(StackVal, StackVal, Global_30750[11], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00001000:
			return Function_280(StackVal, StackVal, Global_30750[12], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00002000:
			return Function_280(StackVal, StackVal, Global_30750[13], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return Function_278(StackVal, StackVal, iParam0, bParam1, bParam2, iParam5, vParam6);
}

var Function_278(var uParam0, bool bParam1, bool bParam2, int iParam3, vector3 vParam4) //Position: 0xCD03 / 52483
{
	bool bVar0;
	
	bVar0 = CREATE_POPULATION_SET(0);
	if (uParam0 & 1 == 1)
	{
		Function_279(Global_30750[0], bVar0);
	}
	if (uParam0 & 2 == 2)
	{
		Function_279(Global_30750[1], bVar0);
	}
	if (uParam0 & 4 == 4)
	{
		Function_279(Global_30750[2], bVar0);
	}
	if (uParam0 & 8 == 8)
	{
		Function_279(Global_30750[3], bVar0);
	}
	if (uParam0 & 16 == 16)
	{
		Function_279(Global_30750[4], bVar0);
	}
	if (uParam0 & 32 == 32)
	{
		Function_279(Global_30750[5], bVar0);
	}
	if (uParam0 & 64 == 64)
	{
		Function_279(Global_30750[6], bVar0);
	}
	if (uParam0 & 128 == 128)
	{
		Function_279(Global_30750[7], bVar0);
	}
	if (uParam0 & 256 == 256)
	{
		Function_279(Global_30750[8], bVar0);
	}
	if (uParam0 & 512 == 512)
	{
		Function_279(Global_30750[9], bVar0);
	}
	if (uParam0 & 1024 == 1024)
	{
		Function_279(Global_30750[10], bVar0);
	}
	if (uParam0 & 2048 == 2048)
	{
		Function_279(Global_30750[11], bVar0);
	}
	if (uParam0 & 4096 == 4096)
	{
		Function_279(Global_30750[12], bVar0);
	}
	if (uParam0 & 8192 == 8192)
	{
		Function_279(Global_30750[13], bVar0);
	}
	return Function_280(StackVal, StackVal, bVar0, bParam1, bParam2, 4294967295, 0, iParam3, vParam4);
}

void Function_279(bool bParam0, bool bParam1) //Position: 0xCE54 / 52820
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

var Function_280(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, vector3 vParam6) //Position: 0xCF12 / 53010
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!IS_POPSET_VALID(bParam0))
	{
		LOG_ERROR("Trying to get a random member of an invalid popset");
		return 4294967295;
	}
	if (bParam1)
	{
		Function_285();
	}
	iVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, bParam4, iParam5, vParam6);
	if (!Function_286(iVar1))
	{
		if (!Global_30837 && !Global_30838)
		{
			Function_284(bParam0, bParam1, bParam2, bParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_284(bParam0, bParam1, bParam2, bParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	iVar0 = iVar1;
	if (bParam1 || (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(iVar1)))
	{
		if (bParam1 && bParam3 != 4294967295)
		{
			while (Function_283(iVar0) && iVar2 > 20)
			{
				iVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_286(iVar1))
				{
					iVar0 = iVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_283(iVar0))
				{
					Function_282();
				}
				Function_281(iVar0);
			}
		}
		else if (!bParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(iVar1) != bParam3 && iVar2 > 20)
			{
				iVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_286(iVar1))
				{
					iVar0 = iVar1;
				}
				iVar2++;
			}
		}
	}
	if (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(iVar0))
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
	return iVar0;
}

void Function_281(int iParam0) //Position: 0xD205 / 53765
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

void Function_282() //Position: 0xD2B9 / 53945
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

bool Function_283(int iParam0) //Position: 0xD2F3 / 54003
{
	int iVar0;
	
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if ((*&Global_30742 + 8)[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_284(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xD320 / 54048
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

void Function_285() //Position: 0xD471 / 54385
{
	int iVar0;
	
	if (Global_3402)
	{
		if (StackVal || !Global_30742 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_282();
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
	Function_282();
	return;
}

bool Function_286(int iParam0) //Position: 0xD4BC / 54460
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_287(int iParam0) //Position: 0xD4D3 / 54483
{
	Function_288(iParam0, 10);
	return StackVal, Function_288(iParam0, 10);
}

struct<8> Function_288(var uParam0, int iParam1) //Position: 0xD4E0 / 54496
{
	struct<2> Var0;
	
	Var0.f_4 = uParam0;
	Var0 = Global_26121[iParam1];
	return StackVal, Var0;
}

void Function_289(int iParam0, int iParam1) //Position: 0xD4F9 / 54521
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	var uVar11;
	
	if (!Function_108(iParam0))
	{
		Function_45();
		return;
	}
	iVar0 = Function_44(iParam0);
	Global_13172[iParam011].f_4 = 1;
	if (!Global_34165.f_36 && iParam1)
	{
		Function_53(1);
	}
	if (iVar0 == 1)
	{
		Global_6269 = Function_42(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_48(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_13(Global_6269) };
		}
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		SET_JOURNAL_ENTRY_PROGRESS(uVar11, -2.0f, 0, 0);
		CLEAR_JOURNAL_ENTRY(uVar11);
		APPEND_JOURNAL_ENTRY(uVar11, 0);
	}
	return;
}

void Function_290(var uParam0) //Position: 0xD59F / 54687
{
	struct<8> Var0;
	
	if (!IS_LAYOUTREF_VALID(uParam0->f_28))
	{
		strcpy(&Var0, "procMisslayout", 32);
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_353(&Var0) };
		uParam0->f_28 = CREATE_LAYOUT(&Var0);
		if (!IS_LAYOUTREF_VALID(uParam0->f_28))
		{
			LOG_ERROR("couldn't create internal procmission layout");
		}
	}
	return;
}

vector3 Function_291() //Position: 0xD614 / 54804
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_292(int iParam0, int iParam1) //Position: 0xD61D / 54813
{
	if (Function_43(iParam1))
	{
		iParam0->f_624 = iParam1;
		Function_87(iParam0 + 584, 32);
	}
	else
	{
		LOG_ERROR("PROCMISSION_SET_DEED received an invalid deed");
	}
	return;
}

int Function_293(bool bParam0, bool bParam1, bool bParam2) //Position: 0xD672 / 54898
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_297(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_294(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_294(bParam0, bParam1, bParam2, 4294967295);
}

int Function_294(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xD6D0 / 54992
{
	var uVar0;
	
	if (!Function_296(bParam2))
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
	uVar0 = Function_297(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_295(uVar0);
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

int Function_295(int iParam0) //Position: 0xD825 / 55333
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

bool Function_296(int iParam0) //Position: 0xD863 / 55395
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_297(int iParam0, int iParam1, int iParam2) //Position: 0xD878 / 55416
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

bool Function_298(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0xD898 / 55448
{
	struct<8> Var0;
	bool bVar8;
	bool bVar9;
	
	if (Global_3371 && iParam0->f_32)
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_353(GET_SCRIPT_NAME()) };
		bVar8 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Global_26150, &Var0, 4.203895E-45f, Function_333(*(iParam0 + 8), 0.0f, Global_34573, *(iParam0 + 8)), 0.0f, iParam0->f_52, 20.0f, iParam0->f_52);
		DECOR_SET_INT(bVar8, "script", GET_THIS_SCRIPT_ID());
		if (iParam0->f_56 != 4294967295)
		{
			DECOR_SET_INT(StackVal, bVar8, "category");
			Function_331(&bVar8, iParam0->f_32);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
		*(iParam0 + 8) = { StackVal, StackVal, Global_34574 };
		return 1;
	}
	*uParam3 = 0;
	if (!Function_299(iParam0))
	{
		if (iParam0->f_32 == 1)
		{
			if (*uParam2 == 0)
			{
				Function_12("Still scanning for the proper terrain to run this event.  Move the player around to find a good spawn location.", -1.0f, 1, 2, 1, 0);
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
		Function_12("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 5.0f, 1, 2, 1, 0);
	}
	if (bParam4)
	{
		if (!Function_10(iParam0->f_56, 0, 1, 0, 0))
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
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_353("restrictVol") };
		bVar9 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Global_26150, &Var0, 4.203895E-45f, Function_333(*(iParam0 + 8), 0.0f, Global_34573, *(iParam0 + 8)), 0.0f, iParam0->f_52, 20.0f, iParam0->f_52);
		DECOR_SET_INT(bVar9, "script", GET_THIS_SCRIPT_ID());
		if (iParam0->f_56 != 4294967295)
		{
			DECOR_SET_INT(StackVal, bVar9, "category");
			Function_331(&bVar9, iParam0->f_32);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
	}
	return 1;
}

bool Function_299(int iParam0) //Position: 0xDC2A / 56362
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
			Function_330(iParam0 + 4);
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
				vVar3 = { 0.0f, 0.0f, Function_215(1) };
				ROTATE_VECTOR_XZ(&vVar3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar3, StackVal) };
				ITERATE_IN_SPHERE(StackVal, vVar3, Function_215(1));
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
						bVar0 = Function_329(StackVal, StackVal, StackVal, vVar9, 0.01f);
					}
					else
					{
						bVar0 = Function_328(StackVal, StackVal, StackVal, vVar9, 0.1f, "locflag", (iParam0 + 64 + 24)->f_16);
					}
				}
				else if ((iParam0 + 64 + 24)->f_16 == 0)
				{
					bVar0 = Function_327(StackVal, StackVal, StackVal, vVar9, Function_269());
				}
				else
				{
					bVar0 = Function_326(StackVal, StackVal, StackVal, vVar9, Function_269(), "locflag", (iParam0 + 64 + 24)->f_16);
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
			Function_330(iParam0 + 4);
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
					if (Function_95(iVar14))
					{
						if (StackVal == (iParam0 + 64)->f_48)
						{
							if ((StackVal && Global_29008[iVar14]) >= 0)
							{
								GET_OBJECT_POSITION(bVar1, &vVar3);
								if (VDIST(vVar9, vVar3) < fVar13 && VDIST(vVar9, vVar3) > Function_215(1))
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
				Function_325(iParam0 + 8, 99.0f, iParam0 + 8, 10);
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
				Function_324(&vVar9, &vVar6);
				vVar3 = { StackVal, StackVal, Function_324(&vVar9, &vVar6) };
				if (!Function_85(StackVal, StackVal, vVar3))
				{
					PRINTSTRING("Player Pos: ");
					PRINTVECTOR(vVar9);
					PRINTNL();
					Function_216(&fVar13, &fVar12);
					if (VDIST(vVar3, vVar9) < ((fVar13 + ((fVar12 - fVar13) / 2.0f)) * 0.8f))
					{
						iVar2 = Function_321(StackVal, StackVal, iParam0, vVar3);
					}
				}
			}
			else
			{
				iVar2 = Function_317(iParam0);
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
					if (!Function_316(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (iParam0->f_60 == 1)
				{
					if (!Function_315(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (Function_15(StackVal, 131072))
				{
					if (StackVal || Function_314(StackVal, Function_314(StackVal, StackVal, *(iParam0 + 8)), Global_34574))
					{
						return 0;
					}
				}
				if (StackVal & 1024 == 1024)
				{
					if (Function_313(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (!Function_309(iParam0 + 8, iParam0 + 52, 0, iParam0->f_32))
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
				uVar23 = START_CURVE_QUERY(Global_28841, vVar3, Function_308((iParam0 + 64)->f_120, 0), 0.0f, 20.0f, 5.0f, 0);
			}
			else
			{
				uVar23 = START_CURVE_QUERY(Global_28841, vVar9, Function_308((iParam0 + 64)->f_120, 0), 120.0f, 150.0f, 5.0f, 0);
			}
			if (GET_NUM_POINTS_IN_CURVE_QUERY(uVar23) >= 0)
			{
				iVar21 = RAND_INT_RANGE(0, (GET_NUM_POINTS_IN_CURVE_QUERY(uVar23) - 1));
				GET_POINT_FROM_CURVE_QUERY(uVar23, iVar21, &Var15);
				Function_307(&Var15);
				*(iParam0 + 8) = { StackVal, StackVal, Function_307(&Var15) };
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
				if (!Function_316(StackVal, StackVal, *(iParam0 + 8)))
				{
					return 0;
				}
			}
			if (iParam0->f_60 == 1)
			{
				if (!Function_315(StackVal, StackVal, *(iParam0 + 8)))
				{
					return 0;
				}
			}
			if (iParam0->f_60 == 0)
			{
				if (!(StackVal || Function_316(StackVal, Function_315(StackVal, StackVal, *(iParam0 + 8)), *(iParam0 + 8))))
				{
					return 0;
				}
			}
			if (Function_15(StackVal, 131072))
			{
				if (StackVal || Function_314(StackVal, Function_314(StackVal, StackVal, *(iParam0 + 8)), Global_34574))
				{
					return 0;
				}
			}
			if (StackVal && !Function_309(iParam0 + 8, iParam0 + 52, 0, iParam0->f_32) == 262144)
			{
				return 0;
			}
			break;
		
		case 0x00000004:
			if (!Function_304((iParam0 + 64)->f_120) < 0)
			{
				return 0;
			}
			break;
		
		case 0x00000007:
			switch ((iParam0 + 64)->f_128)
			{
				case 0x00000001:
					bVar24 = Function_301(StackVal, Global_29004, Global_29005, Global_29006, 1);
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
						bVar24 = Function_301(StackVal, Global_29004, Global_29005, (Global_29006 + iVar22), 1);
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
	if (Function_300(StackVal, StackVal, *(iParam0 + 8)))
	{
		return 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(*(iParam0 + 8), 10.0f))
	{
		return 0;
	}
	return 1;
}

bool Function_300(vector3 vParam0) //Position: 0xE454 / 58452
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

bool Function_301(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xE489 / 58505
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
								return Function_302(&Global_6298, &Global_7189, bParam3);
								break;
							
							case 0x00000001:
								return Function_302(&Global_6364, &Global_7287, bParam3);
								break;
							
							case 0x00000002:
								return Function_302(&Global_6351, &Global_7268, bParam3);
								break;
							
							default:
								return Function_302(&Global_6391, &Global_7327, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_302(&Global_6501, &Global_7490, bParam3);
								break;
							
							case 0x00000001:
								return Function_302(&Global_6402, &Global_7343, bParam3);
								break;
							
							case 0x00000003:
								return Function_302(&Global_6433, &Global_7389, bParam3);
								break;
							
							case 0x00000002:
								return Function_302(&Global_6490, &Global_7474, bParam3);
								break;
							
							case 0x00000004:
								return Function_302(&Global_6537, &Global_7543, bParam3);
								break;
							
							default:
								return Function_302(&Global_6532, &Global_7536, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_302(&Global_6563, &Global_7581, bParam3);
								break;
							
							case 0x00000001:
								return Function_302(&Global_6614, &Global_7657, bParam3);
								break;
							
							case 0x00000002:
								return Function_302(&Global_6643, &Global_7700, bParam3);
								break;
							
							default:
								return Function_302(&Global_6550, &Global_7562, bParam3);
								break;
						}
						break;
					
					case 0x00000003:
						switch (bVar1)
						{
							case 0x00000001:
								return Function_302(&Global_6667, &Global_7735, bParam3);
								break;
							
							default:
								return Function_302(&Global_6704, &Global_7790, bParam3);
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
								return Function_302(&Global_6709, &Global_7797, bParam3);
								break;
							
							case 0x00000001:
								return Function_302(&Global_6764, &Global_7879, bParam3);
								break;
							
							case 0x00000002:
								return Function_302(&Global_6785, &Global_7910, bParam3);
								break;
							
							default:
								return Function_302(&Global_6810, &Global_7947, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_302(&Global_6815, &Global_7954, bParam3);
								break;
							
							default:
								return Function_302(&Global_6928, &Global_8122, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000002:
								return Function_302(&Global_6933, &Global_8129, bParam3);
								break;
							
							case 0x00000001:
								return Function_302(&Global_6962, &Global_8172, bParam3);
								break;
							
							case 0x00000003:
								return Function_302(&Global_6987, &Global_8209, bParam3);
								break;
							
							default:
								return Function_302(&Global_7027, &Global_8268, bParam3);
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
		return Function_302(&Global_6298, &Global_7189, bParam3);
	}
	if (bVar1 == Global_30640[1])
	{
		return Function_302(&Global_6364, &Global_7287, bParam3);
	}
	if (bVar1 == Global_30640[2])
	{
		return Function_302(&Global_6351, &Global_7268, bParam3);
	}
	if (bVar1 == Global_30658[0])
	{
		return Function_302(&Global_6501, &Global_7490, bParam3);
	}
	if (bVar1 == Global_30658[1])
	{
		return Function_302(&Global_6402, &Global_7343, bParam3);
	}
	if (bVar1 == Global_30658[3])
	{
		return Function_302(&Global_6433, &Global_7389, bParam3);
	}
	if (bVar1 == Global_30658[2])
	{
		return Function_302(&Global_6490, &Global_7474, bParam3);
	}
	if (bVar1 == Global_30658[4])
	{
		return Function_302(&Global_6537, &Global_7543, bParam3);
	}
	if (bVar1 == Global_30668[0])
	{
		return Function_302(&Global_6563, &Global_7581, bParam3);
	}
	if (bVar1 == Global_30668[1])
	{
		return Function_302(&Global_6614, &Global_7657, bParam3);
	}
	if (bVar1 == Global_30668[2])
	{
		return Function_302(&Global_6643, &Global_7700, bParam3);
	}
	if (bVar1 == Global_30679[1])
	{
		return Function_302(&Global_6667, &Global_7735, bParam3);
	}
	if (bVar1 == Global_30685[0])
	{
		return Function_302(&Global_6709, &Global_7797, bParam3);
	}
	if (bVar1 == Global_30685[1])
	{
		return Function_302(&Global_6764, &Global_7879, bParam3);
	}
	if (bVar1 == Global_30685[2])
	{
		return Function_302(&Global_6785, &Global_7910, bParam3);
	}
	if (bVar1 == Global_30693[0])
	{
		return Function_302(&Global_6815, &Global_7954, bParam3);
	}
	if (bVar1 == Global_30707[2])
	{
		return Function_302(&Global_6933, &Global_8129, bParam3);
	}
	if (bVar1 == Global_30707[1])
	{
		return Function_302(&Global_6962, &Global_8172, bParam3);
	}
	if (bVar1 == Global_30707[3])
	{
		return Function_302(&Global_6987, &Global_8209, bParam3);
	}
	if (bVar1 == Global_30628[0])
	{
		return Function_302(&Global_6391, &Global_7327, bParam3);
	}
	if (bVar1 == Global_30628[1])
	{
		return Function_302(&Global_6532, &Global_7536, bParam3);
	}
	if (bVar1 == Global_30628[2])
	{
		return Function_302(&Global_6550, &Global_7562, bParam3);
	}
	if (bVar1 == Global_30628[3])
	{
		return Function_302(&Global_6704, &Global_7790, bParam3);
	}
	if (bVar1 == Global_30633[0])
	{
		return Function_302(&Global_6810, &Global_7947, bParam3);
	}
	if (bVar1 == Global_30633[2])
	{
		return Function_302(&Global_6928, &Global_8122, bParam3);
	}
	if (bVar1 == Global_30633[1])
	{
		return Function_302(&Global_7027, &Global_8268, bParam3);
	}
	return "";
}

var Function_302(var uParam0, var uParam1, bool bParam2) //Position: 0xEA9E / 60062
{
	int iVar0;
	
	iVar0 = bParam2;
	if (iVar0 <= *uParam0 || iVar0 > 0)
	{
		return "";
	}
	if (!Function_303(uParam0[iVar02], 2))
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

bool Function_303(var uParam0, int iParam1) //Position: 0xEAF0 / 60144
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_304(int iParam0) //Position: 0xEB0C / 60172
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
			if (Function_305(GET_SQUAD_FROM_OBJECT(bVar2)) == iParam0)
			{
				iVar0++;
			}
			bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
		}
	}
	DESTROY_ITERATOR(bVar1);
	return iVar0;
}

int Function_305(bool bParam0) //Position: 0xEB67 / 60263
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 4294967295;
	}
	bVar0 = Function_306(bParam0);
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

var Function_306(bool bParam0) //Position: 0xEB9F / 60319
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

vector3 Function_307(int iParam0) //Position: 0xEBE5 / 60389
{
	vector3 vVar0;
	
	vVar0.x = *iParam0;
	vVar0.f_4 = StackVal;
	vVar0.f_8 = StackVal;
	return StackVal, StackVal, vVar0;
}

int Function_308(int iParam0, int iParam1) //Position: 0xEC04 / 60420
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

bool Function_309(var uParam0, float fParam1, int iParam2, bool bParam3) //Position: 0xEC34 / 60468
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
	Function_311(4294967295);
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
			else if (Function_310(uParam0, &uVar0) > fVar5)
			{
				return 0;
			}
		}
		iVar3++;
	}
	return 1;
}

float Function_310(var uParam0, int iParam1) //Position: 0xED04 / 60676
{
	vector3 vVar0;
	int iVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*iParam1, *uParam0, StackVal) };
	iVar3 = VMAG(vVar0);
	return iVar3;
}

int Function_311(bool bParam0) //Position: 0xED22 / 60706
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
						Function_312(iVar0);
					}
					else if (Global_3386)
					{
						if (Function_268(StackVal, StackVal, Global_34573, vVar1) < 25.0f)
						{
							Function_312(iVar0);
						}
					}
					else if (Function_268(StackVal, StackVal, Global_34573, vVar1) < 55.0f)
					{
						Function_312(iVar0);
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
			Function_312(iVar0);
		}
		iVar0++;
	}
	return 0;
}

void Function_312(int iParam0) //Position: 0xEE83 / 61059
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

bool Function_313(vector3 vParam0) //Position: 0xEEE4 / 61156
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

int Function_314(vector3 vParam0) //Position: 0xEF85 / 61317
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

bool Function_315(vector3 vParam0) //Position: 0xEFD1 / 61393
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

bool Function_316(vector3 vParam0) //Position: 0xF02A / 61482
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

int Function_317(int iParam0) //Position: 0xF0A7 / 61607
{
	float fVar0;
	int iVar1;
	
	Function_216(&fVar0, &iVar1);
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER_PLAYER();
	AMBIENT_SET_DISTANCE_FILTER(fVar0, iVar1);
	Function_320(0);
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
		Function_319(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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
	Function_318(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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

void Function_318(struct<33> Param0) //Position: 0xF242 / 62018
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

void Function_319(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14) //Position: 0xF36E / 62318
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

void Function_320(float fParam0) //Position: 0xF3BF / 62399
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

int Function_321(int iParam0, vector3 vParam1) //Position: 0xF403 / 62467
{
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER(vParam1);
	if (Global_30842[34])
	{
		PRINTVECTOR(vParam1);
		PRINTNL();
	}
	Function_323();
	Function_320(0);
	Function_322(0);
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
		Function_319(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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
	Function_318(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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

void Function_322(bool bParam0) //Position: 0xF5A5 / 62885
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

void Function_323() //Position: 0xF658 / 63064
{
	AMBIENT_SET_DISTANCE_FILTER(0.0f, 24.0f);
	return;
}

vector3 Function_324(var uParam0, int iParam1) //Position: 0xF667 / 63079
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
		Function_307(&iVar25);
		vVar19 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*uParam0, Function_307(&iVar25), StackVal) };
		Function_307(&iVar31);
		vVar22 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*uParam0, Function_307(&iVar31), StackVal) };
		fVar15 = VDOT(&vVar16, &vVar19);
		fVar14 = VDOT(&vVar16, &vVar22);
		Function_216(&fVar7, &fVar8);
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
			Function_307(&iVar31);
			vVar11 = { StackVal, StackVal, Function_307(&iVar31) };
		}
		else
		{
			UNK_0x19D652F9(bVar6, fVar9, &uVar0, &iVar25);
			Function_307(&iVar25);
			vVar11 = { StackVal, StackVal, Function_307(&iVar25) };
		}
	}
	UNK_0xDF93BD7C(uVar10);
	return StackVal, StackVal, vVar11;
}

int Function_325(var uParam0, float fParam1, int iParam2, int iParam3) //Position: 0xF774 / 63348
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
		if (!Function_85(StackVal, StackVal, *iParam2))
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
			if (!Function_85(StackVal, StackVal, *iParam2))
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

var Function_326(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, var uParam6) //Position: 0xF8A6 / 63654
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
						if (Function_309(&vVar5, &fVar4, 0, 0))
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

var Function_327(bool bParam0, vector3 vParam1, float fParam4) //Position: 0xF94E / 63822
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
				if (Function_309(&vVar5, &uVar4, 0, 0))
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

var Function_328(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, var uParam6) //Position: 0xF9D7 / 63959
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

var Function_329(bool bParam0, vector3 vParam1, float fParam4) //Position: 0xFA6C / 64108
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

int Function_330(int iParam0) //Position: 0xFAE9 / 64233
{
	if (IS_ITERATOR_VALID(*iParam0))
	{
		ITERATE_EVERYWHERE(*iParam0);
		ITERATE_ON_PARTIAL_NAME(*iParam0, Function_259());
		ITERATE_ON_PARTIAL_MODEL_NAME(*iParam0, Function_259());
		ITERATE_ON_OBJECT_TYPE(*iParam0, 4294967295);
		return 1;
	}
	return 0;
}

int Function_331(bool bParam0, int iParam1) //Position: 0xFB1A / 64282
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
	Function_311(DECOR_GET_INT(*bParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
		}
		else
		{
			Function_332(iVar0, bParam0, &uVar1, iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(*bParam0);
	return 0;
}

void Function_332(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0xFC7B / 64635
{
	struct<8> Var0;
	
	Global_26155[iParam05].f_8 = *uParam1;
	Global_26155[iParam05].f_16 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_353("stayout") };
	Global_26155[iParam05].f_12 = CREATE_VOLUME_IN_LAYOUT(Global_26150, &Var0, 3, *iParam2, 0.0f, 0.0f, 0.0f, 12.0f, 5.0f, 12.0f);
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	if (bParam3)
	{
		Global_26155[iParam05].f_4 = ADD_BLIP_FOR_COORD(iParam2, 403, 0f, 2, 0);
		SET_BLIP_BLINK(StackVal, 1, 1, 20.0f);
	}
}

var Function_333(bool bParam0, vector3 vParam1) //Position: 0xFD16 / 64790
{
	vector3 vVar0;
	var uVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		GET_POSITION(bParam0, &vVar0);
		Function_334(StackVal, StackVal, StackVal, StackVal, vVar0, vParam1, &uVar3);
		return UNK_0x9C40E671(&uVar3);
	}
	return 0.0f;
}

void Function_334(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0xFD46 / 64838
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

bool Function_335(int iParam0) //Position: 0xFD69 / 64873
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_340();
	iVar1 = 0;
	if (!Function_4(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_339(iParam0[iVar03], 8);
		}
		else if (Function_338())
		{
			iVar1 = 1;
			Function_339(iParam0[iVar03], 8);
		}
		Function_339(iParam0[iVar03], 16);
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
				Function_339(iParam0[iVar03], 1);
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
							Function_339(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_339(iParam0[iVar03], 2);
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
							Function_339(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_339(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_339(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_339(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_339(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_339(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_339(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_339(iParam0[iVar03], 2);
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
	Function_336();
	return 1;
}

void Function_336() //Position: 0x100E4 / 65764
{
	if (!Function_337(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_337(int iParam0) //Position: 0x10124 / 65828
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_338() //Position: 0x10140 / 65856
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

void Function_339(var uParam0, int iParam1) //Position: 0x1016B / 65899
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_340() //Position: 0x1017C / 65916
{
	if (!Function_337(128))
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

void Function_341(bool bParam0, int iParam1) //Position: 0x101BE / 65982
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *bParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_342(bParam0[iVar0]);
		iVar0++;
	}
	return;
}

void Function_342(int iParam0) //Position: 0x101EB / 66027
{
	if (IS_ACTOR_VALID(*iParam0))
	{
		SET_DRAW_ACTOR(*iParam0, 1);
		CLEAR_ACTOR_MAX_SPEED(*iParam0);
		if (IS_ACTOR_ANIMAL(*iParam0))
		{
			ANIMAL_SPECIES_REL_SET_CAN_ATTACK(ANIMAL_ACTOR_GET_SPECIES(*iParam0), 0, 1);
		}
		else
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*iParam0, 0, 1);
			MEMORY_ALLOW_SHOOTING(*iParam0, 1);
		}
	}
	return;
}

void Function_343(var uParam0, int iParam1) //Position: 0x1022D / 66093
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_344(uParam0[iVar0]);
		iVar0++;
	}
	return;
}

void Function_344(int iParam0) //Position: 0x1025A / 66138
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

bool Function_345(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x1029D / 66205
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

void Function_346(var uParam0, int iParam1) //Position: 0x10305 / 66309
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

var Function_347(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x10327 / 66343
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_348(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_339(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_348(var uParam0, int iParam1, int iParam2) //Position: 0x1035F / 66399
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_4(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_339(uParam0[iVar03], 4);
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

var Function_349(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x10423 / 66595
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
			Function_339(bParam0[iVar03], 4);
			if (bParam3)
			{
				Function_339(bParam0[iVar03], 8);
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

int Function_350(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x104F3 / 66803
{
	return Function_351(uParam0, uParam1, uParam2, 4294967295, uParam3);
}

var Function_351(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x10507 / 66823
{
	return Function_280(uParam0, uParam1, uParam2, uParam3, uParam4, 0, 0.0f, 0.0f, 0.0f);
}

int Function_352(int iParam0, int iParam1) //Position: 0x10520 / 66848
{
	int iVar0;
	
	iVar0 = (Global_16876[iParam06].f_12 % iParam1);
	return iVar0;
}

struct<32> Function_353(bool bParam0) //Position: 0x10536 / 66870
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_354("0", &cVar8, ""), 4);
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

struct<32> Function_354(char* cParam0, char* cParam1, char* cParam2) //Position: 0x105A0 / 66976
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_355(var uParam0, float fParam1) //Position: 0x105BF / 67007
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_87(uParam0, 1);
	Function_54(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

