//Decompiled with MagicRDR v1.0
//Function Count : 237
//Statics Count : 238
//Natives Count : 461
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
	bool bLocal_31 = false;
	int iLocal_32[3] = { 0, 0, 0 };
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	struct<2> Local_40 = { 0, 0 } ;
	var uLocal_42 = 0;
	float fLocal_43 = 0.0f;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	bool bLocal_46 = false;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	float fLocal_51 = 0.0f;
	bool bLocal_52 = false;
	var uLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
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
	int iLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	struct<2> Local_75 = { 0, 0 } ;
	var uLocal_77 = 0;
	struct<2> Local_78[2];
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	bool bLocal_90 = false;
	var uLocal_91 = 0;
	int iLocal_92 = 0;
	var uLocal_93 = 0;
	int iLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97[2] = { 0, 0 };
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	bool bLocal_105 = false;
	var uLocal_106 = 0;
	bool bLocal_107 = false;
	int iLocal_108 = 0;
	var uLocal_109 = 0;
	int iLocal_110 = 0;
	var uLocal_111 = 0;
	float fLocal_112 = 0.0f;
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
	bool bLocal_125 = false;
	bool bLocal_126 = false;
	int iLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	bool bLocal_134 = false;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	int iLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	struct<2> Local_148 = { 0, 0 } ;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	struct<2> Local_154 = { 0, 0 } ;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	int iLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	int iLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	struct<65> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	var uVar1;
	var uVar3[3];
	var uVar7;
	var uVar14;
	var uVar49;
	struct<2> Var50;
	struct<2> Var52;
	int iVar54;
	int iVar55;
	struct<2> Var56;
	struct<2> Var58;
	struct<2> Var60;
	struct<9> Var62;
	int iVar74;
	struct<2> Var75;
	var uVar79;
	var uVar83;
	var uVar84;
	int iVar85;
	var uVar86;
	struct<2> Var88;
	var uVar90;
	int iVar91;
	struct<2> Var96;
	var uVar98;
	var uVar99;
	var uVar101;
	var uVar103;
	struct<2> Var104;
	struct<2> Var106;
	var uVar108;
	struct<2> Var110;
	bool bVar112;
	int iVar113;
	bool bVar114;
	
	iLocal_18 = 0;
	iLocal_19 = 0;
	bLocal_31 = false;
	Local_40 = Vector(0,75f, 0.0f, -3.0f);
	fLocal_43 = 0.0f;
	iLocal_45 = 0;
	bLocal_46 = false;
	iLocal_47 = 0;
	iLocal_48 = 0;
	iLocal_49 = 0;
	iLocal_50 = 0;
	iLocal_54 = 0;
	iLocal_55 = 0;
	iLocal_94 = 0;
	bLocal_107 = false;
	bLocal_125 = false;
	bLocal_126 = false;
	iLocal_127 = 0;
	iLocal_131 = 0;
	bLocal_134 = false;
	iLocal_136 = 0;
	iLocal_137 = 0;
	Local_148 = Vector(-0,76f, 1,43f, 0,37f);
	uLocal_151 = Vector(-7,03f, -9,45f, 0.0f);
	iLocal_159 = 0;
	iLocal_163 = 0;
	iLocal_170 = 0;
	iVar0 = 0;
	uVar1 = CREATE_LAYOUT(Function_236());
	uVar7 = 3;
	uVar14 = 17;
	Function_235(&uLocal_116);
	Function_234(&uLocal_116, 0.0f);
	uVar49 = Function_233(0, 1, 1, 0, 0);
	Var52 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, 180.0f, 0.0f), *(&ScriptParam_0 + 28), StackVal);
	iVar54 = Function_232(38, 3);
	switch (Global_43787)
	{
		case 0x00000000:
			if (iVar54 == 0)
			{
				iLocal_32[0] = 9;
				iLocal_32[1] = 417;
				iLocal_32[2] = 415;
			}
			else if (iVar54 == 1)
			{
				iLocal_32[0] = 16;
				iLocal_32[1] = 423;
				iLocal_32[2] = 421;
			}
			else
			{
				iLocal_32[0] = 99;
				iLocal_32[1] = 403;
				iLocal_32[2] = 405;
			}
			break;
		
		case 0x00000001:
			if (iVar54 == 0)
			{
				iLocal_32[0] = 289;
				iLocal_32[1] = 412;
				iLocal_32[2] = 409;
			}
			else if (iVar54 == 1)
			{
				iLocal_32[0] = 306;
				iLocal_32[1] = 409;
				iLocal_32[2] = 410;
			}
			else
			{
				iLocal_32[0] = 289;
				iLocal_32[1] = 409;
				iLocal_32[2] = 411;
			}
			break;
		
		case 0x00000002:
			if (iVar54 == 0)
			{
				iLocal_32[0] = 9;
				iLocal_32[1] = 417;
				iLocal_32[2] = 403;
			}
			else if (iVar54 == 1)
			{
				iLocal_32[0] = 16;
				iLocal_32[1] = 423;
				iLocal_32[2] = 421;
			}
			else
			{
				iLocal_32[0] = 99;
				iLocal_32[1] = 403;
				iLocal_32[2] = 405;
			}
			break;
	}
	Function_231(&uVar14, iLocal_32[0], 3, 0);
	Function_231(&uVar14, iLocal_32[1], 3, 0);
	Function_231(&uVar14, iLocal_32[2], 3, 0);
	Function_231(&uVar14, 981, 3, 0);
	Function_230(&iLocal_32, 3);
	Function_228(&uVar14, "treasure_hunting_book", 1, 0);
	Function_228(&uVar14, "smoking_stand_loose", 1, 0);
	Function_228(&uVar14, "Treasure_hunter_handoff", 1, 0);
	Function_228(&uVar14, "loot_corpse_solo_male", 1, 0);
	Function_228(&uVar14, "treasure_hunter_handoff", 5, 0);
	Function_228(&uVar14, "custom/treasure_hunter_handoff", 8, 0);
	Function_228(&uVar14, "nthank_you", 5, 0);
	Function_228(&uVar14, "custom/thank_you", 8, 0);
	Var56.f_8 = -7.0f;
	Var58 = 10.0f;
	Var58.f_8 = 2.0f;
	Var60 = -1,5f;
	Var60.f_8 = -0,5f;
	vVar62 = -2.0f;
	vVar62.f_8 = -3.0f;
	iVar74 = 0;
	iVar91 = 0;
	Var104 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, 180.0f, 0.0f), *(&ScriptParam_0 + 28), StackVal);
	Var106 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, 0.0f, 7.0f), *(&ScriptParam_0 + 16), StackVal);
	uVar108 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(-1,8f, 0.0f, 0.0f), Var106, StackVal);
	Function_228(&uVar14, "$/tune/refGroups/battleSets/treasureHunter01", 7, 0);
	if (Global_6625 == 1)
	{
		iVar0 = 5;
	}
	if (Function_227(0))
	{
		iVar0 = 5;
	}
	iVar113 = 0;
	bVar114 = false;
	Function_226(&iLocal_54, 1);
	Function_226(&iLocal_54, 16);
	while (!IS_EXITFLAG_SET())
	{
		if (iVar0 >= 1)
		{
			Var106 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, 0.0f, 7.0f), *(&ScriptParam_0 + 16), StackVal);
			uVar108 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(-1,8f, 0.0f, 0.0f), Var106, StackVal);
			Function_225(StackVal, Var52);
		}
		GET_POSITION(&Global_54076, &Var75);
		Function_224(&uVar65, &bVar64);
		bVar112 = 600;
		if (iLocal_127 == 0)
		{
			if (Function_223(&bVar114, &iVar0, &iVar113, &bVar112, bLocal_31))
			{
				if (bVar114)
				{
					Function_222(&bLocal_52);
					Function_222(&bVar64);
					Function_221(&uVar65, 4294967295);
					if (IS_ACTOR_VALID(&bLocal_52))
					{
						AI_DONT_HARM_ACTOR(&bLocal_52);
					}
					if (IS_ACTOR_VALID(&bVar64))
					{
						AI_DONT_HARM_ACTOR(&bVar64);
					}
					if (IS_ACTOR_VALID(&(uVar65[0])))
					{
						AI_DONT_HARM_ACTOR(&(uVar65[0]));
					}
					if (IS_ACTOR_VALID(&(uVar65[1])))
					{
						AI_DONT_HARM_ACTOR(&(uVar65[1]));
					}
				}
				else
				{
					Function_220(&bLocal_52);
					Function_220(&bVar64);
					Function_219(&uVar65, 4294967295);
					if (IS_ACTOR_VALID(&bLocal_52))
					{
						AI_CLEAR_DONT_HARM_ACTOR(&bLocal_52);
					}
					if (IS_ACTOR_VALID(&bVar64))
					{
						AI_CLEAR_DONT_HARM_ACTOR(&bVar64);
					}
					if (IS_ACTOR_VALID(&(uVar65[0])))
					{
						AI_CLEAR_DONT_HARM_ACTOR(&(uVar65[0]));
					}
					if (IS_ACTOR_VALID(&(uVar65[1])))
					{
						AI_CLEAR_DONT_HARM_ACTOR(&(uVar65[1]));
					}
				}
			}
		}
		switch (iVar0)
		{
			case 0x00000000:
				if (Function_214(&uVar14))
				{
					iVar0 = 1;
				}
				bVar112 = 600;
				break;
			
			case 0x00000001:
				if (Function_174(&ScriptParam_0, &bVar112, &iLocal_50, &iLocal_45, 1))
				{
					if (VDIST(Var75, *(&ScriptParam_0 + 16)) > Function_173())
					{
						iVar0 = 5;
						bVar112 = false;
						break;
					}
					if (Function_172(3) > 1)
					{
						iLocal_58 = 0;
					}
					else
					{
						iLocal_58 = 1;
					}
					uLocal_157 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uVar1, Function_236(), 0f, *(&ScriptParam_0 + 16), Vector(0.0f, 0.0f, 0.0f), Vector(10.0f, 5.0f, 10.0f));
					ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_157);
					ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_157);
					Function_171(&ScriptParam_0 + 16, 3.0f, &Var88, &uVar86, &uVar90);
					if (!Function_170(StackVal, Var88))
					{
						uLocal_114 = Function_169(StackVal, StackVal, &uVar1, Function_236(), "$/tune/refGroups/battleSets/treasureHunter01", Var88, Vector(0.0f, 0.0f, 0.0f), 4294967295);
						uLocal_67 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Vector("Cart Volume", &uVar1, StackVal) + Vector(Vector(1,1f, 0.0f, -0,75f), Var88, 2), Vector(0.0f, 0.0f, 0.0f), Vector(1,8f, 3.0f, 2,8f));
						uLocal_69 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Vector("Cart Volume Little", &uVar1, StackVal) + Vector(Vector(1.0f, 0.0f, 1.0f), Var88, 2), Vector(0.0f, 0.0f, 0.0f), Vector(0,4f, 3.0f, 1.0f));
					}
					else
					{
						uLocal_114 = Function_169(StackVal, StackVal, &uVar1, Function_236(), "$/tune/refGroups/battleSets/treasureHunter01", *(&ScriptParam_0 + 16), Vector(0.0f, 0.0f, 0.0f), 4294967295);
						uLocal_67 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Vector("Cart Volume", &uVar1, StackVal) + Vector(Vector(1,1f, 0.0f, -0,75f), *(&ScriptParam_0 + 16), 2), Vector(0.0f, 0.0f, 0.0f), Vector(1,8f, 3.0f, 2,8f));
						uLocal_69 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Vector("Cart Volume Little", &uVar1, StackVal) + Vector(Vector(1.0f, 0.0f, 1.0f), Var88, 2), Vector(0.0f, 0.0f, 0.0f), Vector(0,4f, 3.0f, 1.0f));
					}
					if (IS_OBJECT_VALID(&uLocal_114))
					{
						Function_168();
						iVar0 = 2;
						bVar112 = false;
					}
					else
					{
						iVar0 = 5;
						bVar112 = false;
					}
				}
				else if (iLocal_45 == 1)
				{
					iVar0 = 5;
					bVar112 = false;
				}
				break;
			
			case 0x00000002:
				uVar79 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uVar1, Function_236(), 0f, *(&ScriptParam_0 + 16), Vector(0.0f, 0.0f, 0.0f), Vector(30.0f, 30.0f, 30.0f));
				bLocal_52 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_236(), &uVar1, StackVal) + Vector(Var56, *(&ScriptParam_0 + 16), 981), Vector(0.0f, 180.0f, 0.0f));
				ACCESSORIZE_HORSE(&bLocal_52, 3);
				SNAP_OBJECT_TO_GROUND(&bLocal_52, 2.0f, 1, 1092616192);
				Function_167();
				SET_ACTOR_UNKILLABLE(&bLocal_52, 1);
				SET_ACTOR_STAY_WITHIN_VOLUME(&bLocal_52, &uVar79, 2, true);
				fLocal_51 = GET_ACTOR_HEALTH(&bVar64);
				fLocal_51 = (fLocal_51 + 1000.0f);
				SET_ACTOR_MAX_HEALTH(&bVar64, fLocal_51);
				SET_ACTOR_HEALTH(&bVar64, fLocal_51);
				iVar85 = 4294967295;
				Function_165(StackVal, &uVar83, &uVar84, &iVar85, 6.0f, *(&ScriptParam_0 + 16));
				Var110 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, 0.0f, -4,2f), *(&ScriptParam_0 + 16), StackVal);
				iVar85 = CLEAR_AREA_OF_GRASS(Var110, 1,2f);
				iVar0 = 4;
				bVar112 = false;
				break;
			
			case 0x00000004:
				iVar55 = 0;
				while (iVar55 <= 3)
				{
					if (iVar55 == 0)
					{
						bVar64 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_236(), &uVar1, StackVal) + Vector(Var60, *(&ScriptParam_0 + 16), iLocal_32[iVar55]), Vector(0.0f, 0.0f, 180.0f));
						SNAP_OBJECT_TO_GROUND(&bVar64, 6.0f, 1, 1092616192);
						GIVE_WEAPON_TO_ACTOR(&bVar64, 40, 0,5f, 1, 1);
						iLocal_71 = CREATE_OBJECTSET_IN_LAYOUT("UnderCartCheck", &uVar1, 12, 1);
						DECOR_SET_OBJECT(&bVar64, "lootCorpse_objSet", GET_OBJECT_FROM_OBJECTSET(&iLocal_71));
						uVar68[0] = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Vector(Function_236(), &uVar1, StackVal) + Vector(Var58, *(&ScriptParam_0 + 16), 2), Vector(0.0f, 0.0f, 0.0f), Vector(3.0f, 3.0f, 3.0f));
						SET_ACTOR_STAY_WITHIN_VOLUME(&(uVar65[0]), &(uVar68[0]), 1, false);
						SET_ACTOR_VISION_XRAY(&bVar64, 1);
						uLocal_95 = CREATE_OBJECTSET_IN_LAYOUT("ObjsetName", &uVar1, 4294967295, 0);
						DECOR_SET_OBJECT(&bVar64, "ReturnCorpse", &uLocal_95);
						SET_ACTOR_CAN_PLAY_GESTURES(&bVar64, false);
						SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bVar64, 0,5f);
						if (iLocal_58 == 1)
						{
							DECOR_SET_INT(&bVar64, "iSpecificItem", 11);
						}
						else
						{
							Function_164(&bVar64, Function_233(1, 1, 1, 0, 0));
						}
						SET_ACTOR_CAN_BE_HARDLOCKED(&bVar64, 0);
						AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&bVar64, 1);
					}
					else if (iVar55 == 1)
					{
						uVar65[0] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_236(), &uVar1, StackVal) + Vector(Var58, *(&ScriptParam_0 + 16), iLocal_32[iVar55]), Vector(0.0f, 0.0f, 0.0f));
						SNAP_OBJECT_TO_GROUND(&(uVar65[0]), 6.0f, 1, 1092616192);
						DELETE_ALL_WEAPONS_FROM_ACTOR(&(uVar65[0]));
						GIVE_WEAPON_TO_ACTOR(&(uVar65[0]), 40, 0,5f, 1, 1);
						SET_ACTOR_UPDATE_PRIORITY(&(uVar65[0]), false);
						SET_ACTOR_CAN_PLAY_GESTURES(&(uVar65[0]), false);
						uLocal_97[0] = CREATE_OBJECTSET_IN_LAYOUT("ObjsetName", &uVar1, 4294967295, 0);
						DECOR_SET_OBJECT(&(uVar65[0]), "ReturnCorpse", &(uLocal_97[0]));
						Var58.f_8 = (StackVal + 4.0f);
						TASK_POINT_GUN_AT_OBJECT(&(uVar65[0]), &bVar64, -1.0f, 0);
					}
					else
					{
						uVar65[1] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_236(), &uVar1, StackVal) + Vector(Var58, *(&ScriptParam_0 + 16), iLocal_32[iVar55]), Vector(0.0f, 0.0f, 0.0f));
						if (!STREAMING_ARE_BOUNDS_LOADED(Vector(StackVal, StackVal, StackVal) + Vector(Vector(3.0f, 0.0f, 3.0f), *(&ScriptParam_0 + 16), StackVal), 3.0f))
						{
						}
						uLocal_97[1] = CREATE_OBJECTSET_IN_LAYOUT("ObjsetName", &uVar1, 4294967295, 0);
						DECOR_SET_OBJECT(&(uVar65[0]), "ReturnCorpse", &(uLocal_97[1]));
						SET_ACTOR_UPDATE_PRIORITY(&(uVar65[1]), false);
						SNAP_OBJECT_TO_GROUND(&(uVar65[1]), 6.0f, 1, 1092616192);
						DELETE_ALL_WEAPONS_FROM_ACTOR(&(uVar65[1]));
						GIVE_WEAPON_TO_ACTOR(&(uVar65[1]), 40, 0,5f, 1, 1);
						TASK_POINT_GUN_AT_OBJECT(&(uVar65[1]), &bVar64, -1.0f, 0);
						SET_ACTOR_CAN_PLAY_GESTURES(&(uVar65[1]), false);
						uVar68[1] = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Vector(Function_236(), &uVar1, StackVal) + Vector(Var58, *(&ScriptParam_0 + 16), 2), Vector(0.0f, 0.0f, 0.0f), Vector(3.0f, 3.0f, 3.0f));
						SET_ACTOR_STAY_WITHIN_VOLUME(&(uVar65[1]), &(uVar68[1]), 1, false);
					}
					SET_ACTOR_ALLOW_BUMP_REACTIONS(&(uVar3[iVar55]), 0);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&(uVar3[iVar55]), 1);
					iVar55++;
				}
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&bVar64, 13, true);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&(uVar65[0]), 13, true);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&(uVar65[1]), 13, true);
				MEMORY_CONSIDER_AS_ENEMY(&bVar64, &(uVar65[0]));
				MEMORY_CONSIDER_AS_ENEMY(&bVar64, &(uVar65[1]));
				Function_163(&bVar64, &(uVar65[0]), 4, 1);
				Function_163(&bVar64, &(uVar65[1]), 4, 1);
				MEMORY_IDENTIFY(&bVar64, &(uVar65[0]));
				MEMORY_IDENTIFY(&bVar64, &(uVar65[1]));
				if (&iLocal_110 == "")
				{
					if (IS_LAYOUTREF_VALID(&uVar1))
					{
						iLocal_110 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, Vector(Function_236(), &bVar64, StackVal) + Vector(Local_40, (&ScriptParam_0 + 16), "$/content/scripting/gringo/SimpleGringo/smoking_stand_loose"), Var104);
						SNAP_OBJECT_TO_GROUND(&iLocal_110, 4.0f, 1, 1092616192);
						GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&iLocal_110), false);
					}
				}
				Function_162(&uLocal_114);
				Var96 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(0,25f, 0.0f, 1,2f), Function_162(&uLocal_114), StackVal);
				uVar98 = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, &uVar1, Function_236(), Var96, Vector(90.0f, 0.0f, 90.0f), 1);
				SNAP_OBJECT_TO_GROUND(&uVar98, 0,5f, 1, 1092616192);
				TASK_SHOOT_ENEMIES_FROM_COVER(&bVar64, GET_COVER_LOCATION_FROM_OBJECT(&uVar98), -1.0f, 1086324736);
				TASK_PRIORITY_SET(&bVar64, true);
				Function_161(&(uVar65[0]));
				uVar99 = Function_161(&(uVar65[0]));
				TASK_SHOOT_ENEMIES_FROM_POSITION(&(uVar65[0]), &uVar99, 0.0f, -1f);
				Function_161(&(uVar65[1]));
				uVar101 = Function_161(&(uVar65[1]));
				TASK_SHOOT_ENEMIES_FROM_POSITION(&(uVar65[1]), &uVar101, 0.0f, -1f);
				SET_ACTOR_VISION_XRAY(&(uVar65[0]), 1);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&(uVar65[0]), 16, true);
				SET_ACTOR_VISION_XRAY(&(uVar65[1]), 1);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&(uVar65[1]), 16, true);
				SET_ACTOR_VISION_XRAY(&bVar64, 1);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&bVar64, 16, true);
				AI_GOAL_LOOK_AT_ACTOR(&(uVar65[0]), &bVar64, 1, 1065353216, 3212836864, 3212836864, 0);
				PRINTVECTOR(*(&ScriptParam_0 + 16));
				PRINTNL();
				PRINTVECTOR(Var75);
				PRINTNL();
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(&bVar64, 0);
				UNK_0x99AFD2D1(&bVar64, 1, 1);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(&(uVar65[0]), 0);
				UNK_0x99AFD2D1(&(uVar65[0]), 1, 1);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(&(uVar65[1]), 0);
				UNK_0x99AFD2D1(&(uVar65[1]), 1, 1);
				if ((Function_159(&(uVar65[0]), 0) && Function_159(&(uVar65[1]), 0)) && Function_159(&bVar64, 0))
				{
					iVar0 = 3;
					bVar112 = false;
				}
				else
				{
					iVar0 = 5;
					bVar112 = false;
				}
				break;
			
			case 0x00000003:
				Function_158();
				Function_157(&uVar65, 2, &bLocal_31, ScriptParam_0.f_64, 100, 0x42a00000, 1);
				Function_156();
				Function_143(StackVal, Function_156(), &bLocal_31, ScriptParam_0.f_64, &bVar64, 100, 0x42a00000, 1);
				if (GET_DEBUG_DRAW_STATE())
				{
				}
				if (iVar74 == 12 && iVar74 == 5)
				{
					if (VDIST(Var75, *(&ScriptParam_0 + 16)) < Function_141(1) && !bLocal_46)
					{
						iVar0 = 5;
						bVar112 = false;
						break;
					}
				}
				if (Function_172(3) > 1)
				{
					if (!Function_159(&bVar64, 1))
					{
						if (!Function_159(&(uVar65[0]), 0))
						{
							if (!Function_159(&(uVar65[1]), 0))
							{
								iVar0 = 5;
								bVar112 = false;
								break;
							}
						}
					}
				}
				if (iVar74 <= 4)
				{
					if (Function_138(&bVar64, &uLocal_124, &fLocal_43, iLocal_54, iLocal_49, 0x40400000))
					{
						Function_136(&uVar65, &bVar64);
						if (IS_ACTOR_VALID(&(uVar65[0])))
						{
							COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&(uVar65[0]), 13, false);
						}
						if (IS_ACTOR_VALID(&(uVar65[1])))
						{
							COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&(uVar65[1]), 13, false);
						}
						iVar74 = 4;
					}
					else if (Function_135(&uVar65, 2, &uVar103, &uLocal_124, &fLocal_43, iLocal_54, iLocal_47, 0x40200000))
					{
						Function_136(&uVar65, &bVar64);
						if (IS_ACTOR_VALID(&(uVar65[0])))
						{
							COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&(uVar65[0]), 13, false);
						}
						if (IS_ACTOR_VALID(&(uVar65[1])))
						{
							COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&(uVar65[1]), 13, false);
						}
						iVar74 = 4;
					}
				}
				else
				{
					if (iVar74 >= 5)
					{
						if (Function_138(&bVar64, &uLocal_124, &fLocal_43, iLocal_54, iLocal_48, 0x40400000))
						{
							Function_134(&bLocal_90);
							AI_QUICK_EXIT_GRINGO(&bVar64, 1);
							TASK_FLEE_ACTOR(&bVar64, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
							iLocal_48 = 1;
						}
					}
					Function_135(&uVar65, 2, &uVar103, &uLocal_124, &fLocal_43, iLocal_54, iLocal_47, 0x40200000);
				}
				if (Function_27(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &iVar74, &uVar65, &bVar64, &uVar1, &bVar112, ScriptParam_0, Var50, Var52, uVar49))
				{
					iVar0 = 5;
					bVar112 = false;
				}
				break;
			
			case 0x00000005:
				iVar0 = 6;
				bVar112 = false;
				break;
			
			case 0x00000006:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				bVar112 = false;
				break;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(bVar112);
		}
	}
	if (bLocal_134)
	{
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	}
	if (IS_ACTOR_VALID(&(uVar65[0])))
	{
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(&(uVar65[0]));
	}
	if (IS_ACTOR_VALID(&(uVar65[1])))
	{
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(&(uVar65[1]));
	}
	Function_220(&bLocal_52);
	Function_220(&bVar64);
	Function_219(&uVar65, 4294967295);
	if (IS_ACTOR_VALID(&bLocal_52))
	{
		AI_CLEAR_DONT_HARM_ACTOR(&bLocal_52);
	}
	if (IS_ACTOR_VALID(&bVar64))
	{
		AI_CLEAR_DONT_HARM_ACTOR(&bVar64);
	}
	if (IS_ACTOR_VALID(&(uVar65[0])))
	{
		AI_CLEAR_DONT_HARM_ACTOR(&(uVar65[0]));
	}
	if (IS_ACTOR_VALID(&(uVar65[1])))
	{
		AI_CLEAR_DONT_HARM_ACTOR(&(uVar65[1]));
	}
	if (!bLocal_31)
	{
		Function_21(ScriptParam_0.f_64, 0.0f, 0, 1, 0);
	}
	if (ScriptParam_0.f_40)
	{
		Global_6642 = 0;
	}
	if (IS_BLIP_VALID(&iLocal_108))
	{
		REMOVE_BLIP(&iLocal_108);
	}
	iVar55 = 0;
	while (iVar55 <= 2)
	{
		Function_19(&(uVar65[iVar55]));
		iVar55++;
	}
	if (!bLocal_31)
	{
		Function_18(&bLocal_52);
		Function_18(&bVar64);
		Function_17(&uVar65, 4294967295);
		if (IS_OBJECT_VALID(&uVar1))
		{
			UNK_0xA936E73B(&uVar1, 1);
			MARK_OBJECT_FOR_AGGRESSIVE_CLEANUP(&uVar1, 1);
		}
	}
	else
	{
		if (Function_159(&bVar64, 0))
		{
			ACTOR_END_FORCE_HOLSTER(&bVar64);
			AI_SPEECH_SET_ALLOW_FOR_ACTOR(&bVar64, 1);
			UNK_0x99AFD2D1(&bVar64, 0, 0);
			if (iLocal_159 == 0)
			{
				MEMORY_CLEAR_EVENTS(&bVar64, 1);
				MEMORY_CLEAR_ALL(&bVar64);
				Function_8(&bVar64, 2, &Global_54076, 2);
				AI_STOP_IGNORING_ACTOR(&bLocal_52);
				iLocal_92 = 1;
			}
			if (iLocal_92 == 0)
			{
				Function_7(&bVar64);
			}
		}
		if (Function_159(&(uVar65[0]), 0))
		{
			MEMORY_CONSIDER_AS_ENEMY(&(uVar65[0]), &Global_54076);
			Function_8(&(uVar65[0]), 2, 0, 2);
			AI_SPEECH_SET_ALLOW_FOR_ACTOR(&(uVar65[0]), 1);
			UNK_0x99AFD2D1(&(uVar65[0]), 0, 0);
		}
		if (Function_159(&(uVar65[1]), 0))
		{
			MEMORY_CONSIDER_AS_ENEMY(&(uVar65[1]), &Global_54076);
			Function_8(&(uVar65[1]), 2, 0, 2);
			AI_SPEECH_SET_ALLOW_FOR_ACTOR(&(uVar65[1]), 1);
			UNK_0x99AFD2D1(&(uVar65[1]), 0, 0);
		}
		if (Function_159(&bLocal_52, 0))
		{
			SET_ACTOR_UNKILLABLE(&bLocal_52, 0);
			TASK_STAND_STILL(&bLocal_52, -1.0f, 0, 0);
		}
	}
	if (IS_BLIP_VALID(&uLocal_29))
	{
		REMOVE_BLIP(&uLocal_29);
	}
	if (IS_VOLUME_VALID(&uLocal_157))
	{
		DESTROY_VOLUME(&uLocal_157);
	}
	if (DECOR_CHECK_EXIST(&bVar64, "GiveMap"))
	{
		DECOR_REMOVE(&bVar64, "GiveMap");
	}
	Function_6(&uVar83, &uVar84, &iVar85);
	Function_5(&iLocal_32, 3);
	Function_134(&bLocal_90);
	REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_157);
	REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_157);
	Function_134(&bLocal_90);
	if (IS_VOLUME_VALID(&uLocal_157))
	{
		DESTROY_VOLUME(&uLocal_157);
	}
	Function_1(&uVar14);
	RELEASE_LAYOUT_REF(&uVar1);
	if (IS_OBJECT_VALID(&uLocal_63))
	{
		LEASH_BREAK(&uLocal_63, 1056964608);
		DESTROY_OBJECT(&uLocal_63);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x1241 / 4673
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

void Function_2(struct<2>[] Param0, int iParam1) //Position: 0x1269 / 4713
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

void Function_3(struct<13> Param0) //Position: 0x13B4 / 5044
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_4(struct<13> Param0) //Position: 0x13D1 / 5073
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(var[] uParam0, int iParam1) //Position: 0x13EF / 5103
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

void Function_6(var uParam0, var uParam1, int iParam2) //Position: 0x1412 / 5138
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

void Function_7(bool bParam0) //Position: 0x1445 / 5189
{
	int iVar0;
	
	if (IS_OBJECT_VALID(&uLocal_63))
	{
		LEASH_BREAK(&uLocal_63, 1056964608);
		DESTROY_OBJECT(&uLocal_63);
	}
	if (IS_ACTOR_ALIVE(&bLocal_52))
	{
		iVar0 = TASK_SEQUENCE_OPEN();
		TASK_MOUNT(0, &bLocal_52, 0, 1, 2, 179);
		TASK_FLEE_ACTOR(false, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(&bParam0, iVar0);
		TASK_SEQUENCE_RELEASE(iVar0, 1);
	}
	else
	{
		TASK_FLEE_ACTOR(&bParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
	}
	return;
}

int Function_8(bool bParam0, int iParam1, int iParam2, int iParam3) //Position: 0x14B0 / 5296
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
					Function_9(&uVar1, 0, 0, 0, 1);
				}
				bVar0++;
			}
		}
		Function_9(&bParam0, &iParam1, &iParam2, &iParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_9(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4) //Position: 0x159E / 5534
{
	char* cVar0[32];
	
	Function_16();
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
	if (Function_15(&uParam0) == 1)
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
	Function_14(&uParam0, 0);
	Function_13(&uParam0, iParam1);
	Function_12(&uParam0, &uParam2);
	Function_11(&uParam0, uParam3);
	if (Function_10(&uParam0) != 5)
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

int Function_10(int iParam0) //Position: 0x180A / 6154
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_behavior");
}

void Function_11(var uParam0, bool bParam1) //Position: 0x182E / 6190
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_12(var uParam0, int iParam1) //Position: 0x1852 / 6226
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_target", &iParam1);
	return;
}

void Function_13(var uParam0, bool bParam1) //Position: 0x1878 / 6264
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_14(var uParam0, bool bParam1) //Position: 0x189F / 6303
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_state", bParam1);
	return;
}

int Function_15(bool bParam0) //Position: 0x18C3 / 6339
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(&bParam0), "actorRoam_ref");
}

void Function_16() //Position: 0x18E2 / 6370
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

void Function_17(var[] uParam0, int iParam1) //Position: 0x1931 / 6449
{
	int iVar0;
	
	if (&iParam1 == 4294967295)
	{
		iParam1 = uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= &iParam1)
	{
		Function_18(&(uParam0[iVar0]));
		iVar0++;
	}
	return;
}

void Function_18(int iParam0) //Position: 0x1963 / 6499
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		RESET_ANIM_SET_FOR_ACTOR(&iParam0, 0);
		TASK_FLEE_ACTOR(&iParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
		TASK_PRIORITY_SET(&iParam0, false);
	}
	return;
}

int Function_19(int iParam0) //Position: 0x1993 / 6547
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		Function_20(&iParam0);
		return 1;
	}
	return 0;
}

void Function_20(int iParam0) //Position: 0x19AB / 6571
{
	int iVar0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		iVar0 = GET_BLIP_ON_ACTOR(&iParam0);
		while (IS_BLIP_VALID(&iVar0))
		{
			REMOVE_BLIP(&iVar0);
			iVar0 = GET_BLIP_ON_ACTOR(&iParam0);
		}
	}
	return;
}

bool Function_21(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x19DE / 6622
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
		Function_23("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
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
			Function_22(&bVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_22(&bVar0);
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
			Function_22(&bVar0);
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

void Function_22(bool bParam0) //Position: 0x1C4A / 7242
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

void Function_23(var uParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1C94 / 7316
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_24(Global_10966) };
		}
		PRINT_SMALL_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &Var0, &iParam5);
	}
	else
	{
		uVar4 = "";
		PRINT_SMALL_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &uVar4, &iParam5);
	}
}

struct<16> Function_24(int iParam0) //Position: 0x1D19 / 7449
{
	char* cVar0[16];
	
	if (!Function_25())
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

bool Function_25() //Position: 0x1D58 / 7512
{
	if (Function_26(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_26(int iParam0, bool bParam1) //Position: 0x1D73 / 7539
{
	return (iParam0 && bParam1) == 0;
}

bool Function_27(var uParam0, bool[] bParam1, int iParam3, var uParam4, struct<31> Param5, struct<2> Param36, struct<2> Param38, var uParam40) //Position: 0x1D80 / 7552
{
	iParam3 = &iParam3;
	switch (uParam0)
	{
		case 0x00000000:
			if ((IS_ACTOR_VALID(&(bParam1[0])) && IS_ACTOR_VALID(&(bParam1[1]))) && IS_ACTOR_VALID(&bParam2))
			{
				if (((Function_133(&(bParam1[0]), &Global_54076) > 50.0f || GET_LAST_ATTACKER(&bParam2) != &Global_54076) || GET_LAST_ATTACKER(&(bParam1[0])) != &Global_54076) || GET_LAST_ATTACKER(&(bParam1[1])) != &Global_54076)
				{
					Function_136(&bParam1, &bParam2);
					Function_234(&uLocal_116, 0.0f);
					Function_130();
					uParam0 = 3;
				}
			}
			else
			{
				Function_136(&bParam1, &bParam2);
				Function_234(&uLocal_116, 0.0f);
				Function_130();
				uParam0 = 3;
			}
			break;
		
		case 0x00000003:
			if (Function_126(&uLocal_116, 15.0f))
			{
				if (IS_ACTOR_VALID(&(bParam1[0])))
				{
					COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&(bParam1[0]), 13, false);
				}
				if (IS_ACTOR_VALID(&(bParam1[1])))
				{
					COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&(bParam1[1]), 13, false);
				}
			}
			Function_125(&bParam1, &bParam2);
			if (Function_118(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &bParam1, Param5))
			{
				uParam0 = 4;
			}
			if (IS_ACTOR_VALID(&bParam2))
			{
				if (GET_LAST_ATTACKER(&bParam2) == &Global_54076)
				{
					Function_117(&bParam2, &Global_54076);
					uParam0 = 4;
				}
			}
			if (!Function_159(&bParam2, 0))
			{
				if (Function_116(StackVal, &Global_54076, (&Param5 + 16)) > 50.0f)
				{
					uParam0 = 4;
				}
				else
				{
					if (IS_ACTOR_VALID(&(bParam1[0])))
					{
						COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&(bParam1[0]), 13, false);
					}
					if (IS_ACTOR_VALID(&(bParam1[1])))
					{
						COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&(bParam1[1]), 13, false);
					}
				}
			}
			if (VDIST(Global_54078, Local_75) < Function_141(1))
			{
				return 1;
			}
			Function_109(&bParam1, &bParam2, &iParam3);
			break;
		
		case 0x00000004:
			if (bLocal_134)
			{
				Function_107(&iLocal_135, 34, 0, 4294967295, 4294967295);
			}
			if (IS_ACTOR_VALID(&bLocal_52))
			{
				SET_ACTOR_UNKILLABLE(&bLocal_52, 0);
			}
			if (IS_ACTOR_VALID(&bParam2))
			{
				if (GET_LAST_ATTACKER(&bParam2) == &Global_54076)
				{
					Function_106(&Global_54076, &bParam2, "TreasureRobbersPlayer_msg01", 0, 5, 60, 1, 1);
				}
				Function_125(&bParam1, &bParam2);
			}
			Function_109(&bParam1, &bParam2, &iParam3);
			iLocal_47 = 1;
			uParam0 = 5;
			break;
		
		case 0x00000005:
			Function_105(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &bParam1, &bParam2, Param5);
			Function_125(&bParam1, &bParam2);
			Function_109(&bParam1, &bParam2, &iParam3);
			if (iLocal_137 == 6)
			{
				if (Function_104(&(bParam1[0]), &(bParam1[1])))
				{
					if (bLocal_134)
					{
						Function_107(&iLocal_135, 3, 0, 4294967295, 4294967295);
					}
					return 1;
				}
			}
			if (Function_103(&bParam2, &(bParam1[0]), &(bParam1[1])))
			{
				if (StackVal && Function_102(Function_102(StackVal, &(bParam1[0]), 100.0f, *(&Param5 + 16)), &(bParam1[1]), 100.0f, *(&Param5 + 16)))
				{
					if (IS_ACTOR_VALID(&bParam2))
					{
						TASK_CLEAR(&bParam2);
						MEMORY_CLEAR_EVENTS(&bParam2, 1);
						uParam0 = 6;
					}
					if (bLocal_134)
					{
						Function_107(&iLocal_135, 3, 0, 4294967295, 4294967295);
					}
				}
			}
			if (GET_ITEM_COUNT(SS_GET_STRING(1, 11), &Global_54076) >= 0)
			{
				if (IS_BLIP_VALID(&uLocal_29))
				{
					REMOVE_BLIP(&uLocal_29);
					uLocal_29 = "";
				}
			}
			if (iLocal_55 == 1)
			{
				if (VDIST(Global_54078, Local_78[iLocal_562]) < Function_141(1))
				{
					return 1;
				}
				if (VDIST(Global_54078, Local_78[iLocal_572]) < Function_141(1))
				{
					Function_19(&(bParam1[iLocal_57]));
				}
			}
			else if (VDIST(Global_54078, Local_75) < Function_141(1))
			{
				return 1;
			}
			break;
		
		case 0x00000006:
			if (iLocal_58 == 1)
			{
				if (Function_159(&bParam2, 0))
				{
					if (Function_96(StackVal, StackVal, &bParam2, &iParam3, Param36, Param38))
					{
						uParam4 = 0;
						Function_163(&Global_54076, &bParam2, 1, 1);
						Function_95(&bParam1, 2, &bLocal_125, &bLocal_126, 0);
						if (bLocal_125)
						{
							Function_90(200, 1, 0);
							Function_89(&(bParam1[0]), 4294967295 * 100);
							Function_89(&(bParam1[1]), 4294967295 * 100);
						}
						else if (bLocal_126)
						{
							Function_90(100, 1, 0);
							if (Function_159(&(bParam1[0]), 0))
							{
								Function_89(&(bParam1[0]), 4294967295 * 100);
							}
							else if (Function_159(&(bParam1[1]), 0))
							{
								Function_89(&(bParam1[1]), 4294967295 * 100);
							}
						}
						else
						{
							Function_90(50, 1, 0);
						}
						uParam0 = 8;
					}
					else if (VDIST(Global_54078, Local_75) < Function_141(1))
					{
						return 1;
					}
				}
				uParam0 = 12;
			}
			else
			{
				Function_234(&uLocal_59, 0.0f);
				uParam0 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_87(&bParam2, &Global_54076, &uLocal_93, &iLocal_94, &uLocal_59, &iParam3, 35.0f, &bLocal_107, &uLocal_103, &uParam4, "nthank_you", "nthank_you", "", "", 25.0f, 2, -5.0f, 0, 4.0f, 1, 0, 0, 1, 0, 0x40800000))
			{
				if (bLocal_107)
				{
					uParam4 = 0;
					Function_163(&Global_54076, &bParam2, 1, 1);
					Function_95(&bParam1, 2, &bLocal_125, &bLocal_126, 0);
					TASK_PRIORITY_SET(&bParam2, 2);
					MEMORY_CLEAR_EVENTS(&bParam2, 1);
					MEMORY_CLEAR_ALL(&bParam2);
					ACTOR_START_FORCE_HOLSTER(&bParam2, 1, 0);
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bParam2, 1);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bParam2, 1);
					if (bLocal_125)
					{
						Function_90(200, 1, 0);
						Function_89(&(bParam1[0]), 4294967295 * 100);
						Function_89(&(bParam1[1]), 4294967295 * 100);
					}
					else if (bLocal_126)
					{
						Function_90(100, 1, 0);
						if (Function_159(&(bParam1[0]), 0))
						{
							Function_89(&(bParam1[0]), 4294967295 * 100);
						}
						else if (Function_159(&(bParam1[1]), 0))
						{
							Function_89(&(bParam1[1]), 4294967295 * 100);
						}
					}
					else
					{
						Function_90(50, 1, 0);
					}
					if (IS_VOLUME_VALID(&uLocal_157))
					{
						DESTROY_VOLUME(&uLocal_157);
					}
					GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&iLocal_110), true);
					Function_7(&bParam2);
					iLocal_92 = 1;
					iLocal_159 = 1;
					return 1;
				}
			}
			Function_8(&bParam2, 2, 0, 2);
			iLocal_92 = 1;
			iLocal_159 = 1;
			return 1;
			break;
		
		case 0x00000008:
			if (Function_68(&bParam2, &Global_54076, &uLocal_116, &iParam3, &bLocal_107, &uParam4, &Param5))
			{
				Function_45(20, 1, 0);
				TASK_PRIORITY_SET(&bParam2, 2);
				MEMORY_CLEAR_EVENTS(&bParam2, 1);
				MEMORY_CLEAR_ALL(&bParam2);
				ACTOR_START_FORCE_HOLSTER(&bParam2, 1, 0);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bParam2, 1);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bParam2, 1);
				if (IS_VOLUME_VALID(&uLocal_157))
				{
					DESTROY_VOLUME(&uLocal_157);
				}
				GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&iLocal_110), true);
				Function_7(&bParam2);
				iLocal_92 = 1;
				Function_28(uParam40, 1, 1);
				uParam0 = 14;
			}
			break;
		
		case 0x0000000C:
			if (bLocal_134)
			{
				Function_107(&iLocal_135, 3, 0, 4294967295, 4294967295);
			}
			Function_109(&bParam1, &bParam2, &iParam3);
			Function_134(&bLocal_90);
			if (iLocal_55 == 1)
			{
				if (VDIST(Global_54078, Local_78[iLocal_562]) < Function_141(1))
				{
					return 1;
				}
				if (VDIST(Global_54078, Local_78[iLocal_572]) < Function_141(1))
				{
					Function_19(&(bParam1[iLocal_57]));
				}
			}
			else if (VDIST(Global_54078, Local_75) < Function_141(1))
			{
				return 1;
			}
			if (GET_ITEM_COUNT(SS_GET_STRING(1, 11), &Global_54076) >= 0)
			{
				MEMORY_CLEAR_EVENTS(&bParam2, 1);
				MEMORY_CLEAR_ALL(&bParam2);
				if (IS_VOLUME_VALID(&uLocal_157))
				{
					DESTROY_VOLUME(&uLocal_157);
				}
				if (IS_BLIP_VALID(&uLocal_29))
				{
					REMOVE_BLIP(&uLocal_29);
					uLocal_29 = "";
				}
				Function_7(&bParam2);
				iLocal_92 = 1;
				if (IS_BLIP_VALID(&uLocal_29))
				{
					REMOVE_BLIP(&uLocal_29);
				}
				uParam0 = 14;
			}
			break;
		
		case 0x0000000E:
			if (bLocal_134)
			{
				Function_107(&iLocal_135, 3, 0, 4294967295, 4294967295);
			}
			iLocal_159 = 1;
			return 1;
			break;
	}
	return 0;
}

int Function_28(bool bParam0, bool bParam1, bool bParam2) //Position: 0x24FA / 9466
{
	bool bVar0;
	
	bVar0 = Function_44(0);
	if ((Function_44(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_29(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_44(0));
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_6627)
	{
		Function_29(597, bParam0, 0, 0);
	}
	if (&bParam2)
	{
		if ((Function_44(597) + Function_44(450)) >= 10000)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
			{
				AWARD_ACHIEVEMENT(24);
			}
		}
	}
	return 1;
}

int Function_29(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x25CC / 9676
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
	Function_43(iParam0, TO_FLOAT(bParam1), 1);
	Function_42(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_31(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_30(iParam0);
	return 1;
}

void Function_30(bool bParam0) //Position: 0x27F4 / 10228
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

void Function_31(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x2892 / 10386
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_41(390))), 32);
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
					fVar19 = (Function_40(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_40(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_38(iParam0, fVar19, fVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_35(fVar19, fParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_33(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_32(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_236(), &Var9);
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

var Function_32(int iParam0) //Position: 0x2ED0 / 11984
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_33(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2EE1 / 12001
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_34("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_34("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_34("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_34(char* cParam0) //Position: 0x2FD8 / 12248
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_35(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2FF3 / 12275
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_37(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_36(Function_37(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_36(int iParam0, int iParam1) //Position: 0x305A / 12378
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_37(int iParam0, bool bParam1) //Position: 0x306C / 12396
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_38(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x307E / 12414
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
	if (((Function_39(iParam0) != 19 || Function_39(iParam0) != 17) || Function_39(iParam0) != 10) || Function_39(iParam0) != 9)
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

int Function_39(int iParam0) //Position: 0x31B2 / 12722
{
	return Global_55480[iParam016].f_96;
}

float Function_40(int iParam0) //Position: 0x31C1 / 12737
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_41(int iParam0) //Position: 0x31FA / 12794
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_42(int iParam0) //Position: 0x3237 / 12855
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

int Function_43(int iParam0, float fParam1, bool bParam2) //Position: 0x33D1 / 13265
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

int Function_44(int iParam0) //Position: 0x3615 / 13845
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[iParam0]);
}

void Function_45(int iParam0, bool bParam1, bool bParam2) //Position: 0x3656 / 13910
{
	int iVar0;
	bool bVar1;
	
	if (Function_67(0) && (!Global_6623 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_66())
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
	iVar0 = Function_44(3);
	Function_63();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (&bParam1)
	{
		Function_61(3, bVar1);
		if (!&bParam2)
		{
			if (!Function_60(Global_119936, 4))
			{
				Function_54(&Global_54076, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_29(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_40(3));
	iVar0 = Function_44(3);
	switch (Global_21369.f_248)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_21369.f_248 = 1;
				Function_47(4, Function_53(Global_21369.f_248), 1);
				Function_46(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_21369.f_248 = 2;
				Function_47(4, Function_53(Global_21369.f_248), 1);
				Function_46(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_21369.f_248 = 3;
				Function_47(4, Function_53(Global_21369.f_248), 1);
				Function_46(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_21369.f_248 = 4;
				Function_47(4, Function_53(Global_21369.f_248), 1);
				Function_46(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_21369.f_248 = 5;
				Function_47(4, Function_53(Global_21369.f_248), 1);
				Function_46(Global_21369.f_244, Global_21369.f_248);
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

void Function_46(int iParam0, int iParam1) //Position: 0x382A / 14378
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

int Function_47(int iParam0, char* cParam1) //Position: 0x3A94 / 14996
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
	Function_51(iParam0, &cParam1, 0, 1);
	iVar1 = Function_48();
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

int Function_48() //Position: 0x3C24 / 15396
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
	Function_49();
	return 0;
}

void Function_49() //Position: 0x3CC5 / 15557
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
		Function_50(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_50(int iParam0) //Position: 0x3D83 / 15747
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

int Function_51(int iParam0, char* cParam1) //Position: 0x3DE9 / 15849
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
		Function_52(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &uParam3);
	}
	return 1;
}

void Function_52(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x4151 / 16721
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

var Function_53(int iParam0) //Position: 0x41D9 / 16857
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

void Function_54(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x4268 / 17000
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_56(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_55(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_55(char* cParam0) //Position: 0x42DD / 17117
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

bool Function_56(int iParam0, var uParam1, int iParam2) //Position: 0x4317 / 17175
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
		if (Function_58(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_57(uVar0))
		{
			case 0x00000002:
				if (!Function_60(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_57(char* cParam0) //Position: 0x4393 / 17299
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

int Function_58(int iParam0) //Position: 0x4434 / 17460
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_59(&iVar1, 2147483648);
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

void Function_59(int iParam0, int iParam1) //Position: 0x4471 / 17521
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
	return;
}

bool Function_60(var uParam0, int iParam1) //Position: 0x4487 / 17543
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_61(int iParam0, bool bParam1) //Position: 0x449A / 17562
{
	bool bVar0;
	int iVar1;
	
	Function_29(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_62(iParam0, 4294967295);
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
	iVar1 = Function_48();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

var Function_62(int iParam0, int iParam1) //Position: 0x4646 / 17990
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

void Function_63() //Position: 0x468B / 18059
{
	Function_65(3, 0.0f);
	Function_64(3, 10000.0f);
	return;
}

int Function_64(int iParam0, int iParam1) //Position: 0x46A1 / 18081
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_65(int iParam0, int iParam1) //Position: 0x46E1 / 18145
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

bool Function_66() //Position: 0x4721 / 18209
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

var Function_67(int iParam0) //Position: 0x474C / 18252
{
	return (*&Global_21369 + 168)[iParam0];
}

bool Function_68(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6) //Position: 0x475B / 18267
{
	var uVar0;
	struct<2> Var1;
	var uVar3;
	struct<2> Var5;
	float fVar7;
	
	uParam5 = uParam5;
	Var1 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, 0.0f, 7.0f), *(&iParam6 + 16), StackVal);
	uVar3 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(-11.0f, 0.0f, 0.0f), Var1, StackVal);
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (!IS_ACTOR_ALIVE(&bParam0))
		{
			if (iLocal_170 >= 1)
			{
				iLocal_170 = 5;
			}
		}
	}
	uParam5 = 0;
	switch (iLocal_170)
	{
		case 0x00000000:
			if (IS_ACTOR_RIDING(&Global_54076))
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				Function_85(&Global_54076, 0);
				TASK_DISMOUNT(&Global_54076, 1);
				Function_234(&uParam2, 0.0f);
			}
			iLocal_170 = 1;
			UNK_0xF413FDB2(1);
			break;
		
		case 0x00000001:
			if (Function_126(&uParam2, 1.0f))
			{
				if (IS_ACTOR_VALID(&uVar0))
				{
					TASK_STAND_STILL(&uVar0, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&uVar0, true);
				}
				RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
				MEMORY_CLEAR_EVENTS(&Global_54076, 0);
				ACTOR_START_FORCE_HOLSTER(&Global_54076, 1, 0);
				if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&fLocal_112)))
				{
					GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&fLocal_112), true);
				}
				if (IS_BLIP_VALID(&uLocal_27))
				{
					REMOVE_BLIP(&uLocal_27);
				}
				RESET_ANIM_SET_FOR_ACTOR(&bParam0, 0);
				MEMORY_CLEAR_EVENTS(&bParam0, 0);
				MEMORY_CLEAR_ALL(&bParam0);
				ACTOR_START_FORCE_HOLSTER(&bParam0, 1, 0);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bParam0, 1);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bParam0, 1);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(&bParam0, 0);
				AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&bParam0, 0);
				AI_GOAL_LOOK_AT_ACTOR(&bParam0, &uParam1, 1, 1065353216, 3212836864, 3212836864, 0);
				SET_ACTOR_INVULNERABILITY(&bParam0, 1);
				if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&iLocal_110)))
				{
					GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&iLocal_110), true);
				}
				if (IS_ACTOR_RIDING(&Global_54076))
				{
					TELEPORT_ACTOR(&Global_54076, &Var5, 1, 1, 1);
					RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
				}
				if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&fLocal_112)))
				{
					GRINGO_GET_USE_COMPONENT_POSITION_EXT(GET_GRINGO_FROM_OBJECT(&fLocal_112), "player_recieve", &Var5);
					fVar7 = GRINGO_GET_USE_COMPONENT_HEADING_EXT(GET_GRINGO_FROM_OBJECT(&fLocal_112), "player_recieve");
					SET_OBJECT_POSITION(&Global_54076, Var5);
					SET_OBJECT_ORIENTATION(StackVal, &Global_54076, Vector(0.0f, fVar7, 0.0f));
					GRINGO_GET_USE_COMPONENT_POSITION_EXT(GET_GRINGO_FROM_OBJECT(&fLocal_112), "UseCase1", &Var5);
					fVar7 = GRINGO_GET_USE_COMPONENT_HEADING_EXT(GET_GRINGO_FROM_OBJECT(&fLocal_112), "UseCase1");
					SET_OBJECT_POSITION(&bParam0, Var5);
					SET_OBJECT_ORIENTATION(StackVal, &bParam0, Vector(0.0f, fVar7, 0.0f));
					TASK_PRIORITY_SET(&Global_54076, true);
				}
				if (IS_ACTOR_RIDING(&Global_54076))
				{
					uVar0 = GET_MOUNT(&Global_54076);
					TELEPORT_ACTOR(&uVar0, &uVar3, 1, 1, 1);
				}
				TASK_STAND_STILL(&uVar0, 20.0f, 0, 0);
				SNAP_ACTOR_TO_GRINGO(&bParam0, &fLocal_112, "UseCase1", false, 0, 0);
				TASK_USE_GRINGO(&bParam0, GET_GRINGO_FROM_OBJECT(&fLocal_112), "UseCase1", 1, 1);
				Local_154 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(6.0f, 0.0f, 5.0f), Var5, StackVal);
				Function_84(StackVal, Local_154);
				SET_MOVER_FROZEN(&Global_54076, 1);
				SET_MOVER_FROZEN(&bParam0, 1);
				Function_79(&uParam3, &uLocal_128, &iLocal_127);
				Function_77(StackVal, &fLocal_112, &uLocal_128, Local_148, &uLocal_151);
				Function_234(&uParam2, 0.0f);
				CLEAR_ALTERNATE_SPEECH_CONTEXT_FOR_PAIN(&bParam0);
				CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&bParam0);
				AI_SET_ENABLE_DEAD_BODY_REACTIONS(&bParam0, 0);
				iLocal_170 = 2;
			}
			break;
		
		case 0x00000002:
			Function_77(StackVal, &fLocal_112, &uLocal_128, Local_148, &uLocal_151);
			if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&bParam0)))
			{
				TASK_USE_GRINGO(&Global_54076, GET_GRINGO_FROM_OBJECT(&fLocal_112), "player_recieve", 1, 1);
				TASK_PRIORITY_SET(&Global_54076, true);
				Function_106(&bParam0, &Global_54076, "TreasureRobbers_msg05", "treasureHunter_msg05", 5, 60, 1, 1);
				Function_234(&uParam2, 0.0f);
				iLocal_170 = 3;
			}
			break;
		
		case 0x00000003:
			if ((Function_126(&uParam2, 6.0f) || GET_TASK_STATUS(&Global_54076, 19) != 0) || DECOR_CHECK_EXIST(&bParam0, "GiveMap"))
			{
				if (!IS_AMBIENT_SPEECH_PLAYING(&bParam0))
				{
					Function_106(&Global_54076, &bParam0, "TreasureRobbersPlayer_msg02", "TreasureRobbersPlayer_msg02", 5, 60, 1, 1);
					Function_234(&uParam2, 0.0f);
					GRINGO_DEACTIVATE(GET_GRINGO_FROM_OBJECT(&fLocal_112));
					SET_MOVER_FROZEN(&Global_54076, 0);
					SET_PLAYER_CONTROL(0, 1, 0, 0);
					Function_72(&uLocal_128, &iLocal_127);
					SET_ACTOR_INVULNERABILITY(&bParam0, 0);
					if (DECOR_CHECK_EXIST(&bParam0, "GiveMap"))
					{
						DECOR_REMOVE(&bParam0, "GiveMap");
					}
					iLocal_170 = 5;
				}
			}
			break;
		
		case 0x00000005:
			SET_MOVER_FROZEN(&bParam0, 0);
			Function_59(&iLocal_54, 1);
			Function_59(&iLocal_54, 16);
			if (iLocal_58 == 1)
			{
				Function_69(11, 0, 1);
				if (DECOR_CHECK_EXIST(&bParam0, "iSpecificItem"))
				{
					DECOR_REMOVE(&bParam0, "iSpecificItem");
				}
			}
			Function_234(&uLocal_116, 0.0f);
			if (IS_BLIP_VALID(&iLocal_108))
			{
				REMOVE_BLIP(&iLocal_108);
			}
			uParam4 = 1;
			UNK_0xF413FDB2(0);
			return 1;
			break;
	}
	return 0;
}

int Function_69(bool bParam0, bool bParam1, int iParam2) //Position: 0x4C4E / 19534
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_71(bParam0), Function_70()) == 0)
		{
			ADD_ITEM(Function_71(bParam0), Function_70(), &iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_71(bParam0), Function_70(), &iParam2);
	return 1;
}

var Function_70() //Position: 0x4C9C / 19612
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

var Function_71(bool bParam0) //Position: 0x4CB1 / 19633
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

void Function_72(var uParam0, bool bParam1) //Position: 0x4DA5 / 19877
{
	SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_ACTOR(&Global_54076), 1.0f, 0, 1092616192);
	Function_73(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
	REMOVE_CAMERA_FROM_CHANNEL(&uParam0, 0);
	DESTROY_CAMERA(&uParam0);
	CAMERA_RESET(0);
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	bParam1 = 0;
	return;
}

void Function_73(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, var uParam9, var uParam10) //Position: 0x4DEA / 19946
{
	var uVar0;
	
	bParam1 = &bParam1;
	if (&bParam6)
	{
		CAMERA_RESET(0);
	}
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		if (&bParam3)
		{
			SET_PLAYER_CONTROL(0, 1, 0, 0);
		}
		uVar0 = Function_70();
		if (IS_ACTOR_VALID(&uVar0))
		{
			if (&bParam2)
			{
				TASK_CLEAR(&uVar0);
			}
			if (!&bParam1)
			{
				if (HUD_IS_FADED())
				{
					RESET_ANIM_SET_FOR_ACTOR(&uVar0, 0);
				}
				else
				{
					RESET_ANIM_SET_FOR_ACTOR(&uVar0, 1);
				}
			}
			ACTOR_END_FORCE_HOLSTER(&uVar0);
			SET_ACTOR_INVULNERABILITY(&uVar0, 0);
			if (Global_53410[0])
			{
				Global_53410[0] = 0;
				UI_CHEAT_SET_VALUE(0, 0);
			}
		}
		Function_29(21, 1, 0, 0);
	}
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (&bParam7)
	{
		Function_76();
	}
	if (&bParam4)
	{
		ENABLE_USE_CONTEXTS(1);
	}
	if (&bParam8)
	{
		UI_POP("nCutscenes");
	}
	AUDIO_ENABLE_PLAYER_TAUNTS();
	Function_74(&uParam9, &uParam10);
}

void Function_74(var uParam0, bool bParam1) //Position: 0x4EB9 / 20153
{
	uParam0 = &uParam0;
	HUD_ENABLE(&uParam0);
	if (&bParam1)
	{
		HUD_CLEAR_SMALL_TEXT_QUEUE();
		PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	}
	SET_TIME_ACCELERATION(Global_99471);
	STREAMING_UNLOAD_SCENE();
	AI_STOP_IGNORING_ACTORS();
	if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol")))
	{
		DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol"));
	}
	if (!Global_6623)
	{
		Function_75();
	}
	ACTOR_DATA_GRAVITY_LIMIT(0);
	Global_99146 = 0;
	Global_99147 = 0;
	if (IS_VOLUME_VALID(&Global_99170))
	{
		if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&Global_99170))
		{
			REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Global_99170);
		}
		if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&Global_99170))
		{
			REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Global_99170);
		}
	}
	SET_TREE_COST_MODIFIER(1.0f);
	SET_USES_QUAD_IK_FIX(0);
	return;
}

void Function_75() //Position: 0x4F88 / 20360
{
	int iVar0;
	
	iVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		if (GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(&Global_21369 + 72)) != &iVar0)
		{
			LOG_ERROR("PLAYERHORSE NOT IN PLAYER HORSE! WHY? FIXING");
			GIVE_OBJECT_TO_LAYOUT(&Global_21369 + 72, &iVar0);
		}
	}
	return;
}

void Function_76() //Position: 0x5000 / 20480
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_77(float fParam0, var uParam1, struct<2> Param2, var uParam4) //Position: 0x5015 / 20501
{
	var uVar0;
	struct<2> Var2;
	struct<2> Var4;
	
	Function_78(&fParam0);
	uVar0 = Function_78(&fParam0);
	UNK_0xF1A53C41(&Var4, &uVar0, 1, 0);
	UNK_0xF76F2BB3(&Var4, &uParam4, 1, 4);
	GET_OBJECT_RELATIVE_POSITION(&fParam0, Param2, &Var2);
	SET_CAMERA_POSITION(&uParam1, Var2);
	SET_CAMERA_DIRECTION(&uParam1, Var4, 1);
}

struct<8> Function_78(int iParam0) //Position: 0x505B / 20571
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_ORIENTATION(&iParam0, &Var0);
	return StackVal, Var0;
}

void Function_79(var uParam0, var uParam1, float fParam2) //Position: 0x5084 / 20612
{
	struct<2> Var0;
	var uVar2;
	
	fParam2 = 1;
	uParam1 = CREATE_CAMERA_IN_LAYOUT(&uParam0, Function_236(), 0);
	SET_ACTOR_POSTURE(&Global_54076, 0);
	Function_161(&Global_54076);
	Var0 = Function_161(&Global_54076);
	CLEAR_AMBIENT_OBJECTS_SPHERE(Var0, 10.0f, 39);
	Function_156();
	uVar2 = CREATE_VOLUME_IN_LAYOUT(StackVal, &uParam0, Function_236(), 2,802597E-45f, Var0, Function_156(), Vector(10.0f, 10.0f, 10.0f));
	DELETE_PROJECTILES_IN_VOLUME(&uVar2);
	DESTROY_VOLUME(&uVar2);
	Function_80(1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
	SET_CURRENT_CAMERA_ON_CHANNEL(&uParam1, 0, 0f, 0f, 0, 0, 0, 0, 0, 0);
	INIT_CAMERA_FROM_GAME_CAMERA(&uParam1);
	return;
}

void Function_80(bool bParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, var uParam7, bool bParam8, bool bParam9, var uParam10, bool bParam11, var uParam12, var uParam13) //Position: 0x5119 / 20761
{
	var uVar0;
	int iVar1;
	var uVar2;
	
	uParam1 = &uParam1;
	if (&bParam6)
	{
		UI_PUSH("nCutscenes");
	}
	HUD_CLEAR_HELP();
	UI_DUMP_MESSAGE_QUEUE_TO_NOTES(1);
	HUD_ENABLE(0);
	Function_76();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(&Global_54076, "iDrunk", false);
	if (&bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		iVar1 = Function_70();
		if (IS_ACTOR_VALID(&iVar1))
		{
			if (GET_WEAPON_IN_HAND(&iVar1) != 4294967295)
			{
				Global_119938 = 1;
			}
			else
			{
				Global_119938 = 0;
			}
			if (&bParam3)
			{
				TASK_CLEAR(&iVar1);
			}
			if (&bParam11)
			{
				uVar2 = GET_ATTACHED_HOGTIE_VICTIM(&iVar1);
				if (IS_ACTOR_VALID(&uVar2))
				{
					FREE_FROM_HOGTIE(&uVar2);
					HOGTIE_ACTOR(&uVar2);
				}
			}
			if (bParam0)
			{
				ACTOR_START_FORCE_HOLSTER(&iVar1, 0, 0);
			}
			if (&bParam2)
			{
				SET_PLAYER_POSTURE(0, 0, 0);
				TASK_OVERRIDE_SET_POSTURE(&iVar1, 0);
			}
			SET_ACTOR_HEALTH(&iVar1, GET_ACTOR_MAX_HEALTH(&iVar1));
			SET_ACTOR_INVULNERABILITY(&iVar1, 1);
			AI_IGNORE_ACTOR(&iVar1);
		}
		SET_PLAYER_CONTROL(0, 0, 0, 0);
		if (IS_PLAYER_DEADEYE(0))
		{
			CANCEL_DEADEYE();
			CANCEL_TIME_WARP(1);
		}
		if (&bParam8)
		{
			if (IS_VOLUME_VALID(&uParam7))
			{
				FIRE_STOP_FLAMES_IN_VOLUME(&uParam7);
				DELETE_PROJECTILES_IN_VOLUME(&uParam7);
			}
			else
			{
				FIRE_STOP_ALL_FIRES();
				Function_161(&iVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_236(), 2,802597E-45f, Function_161(&iVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
				DELETE_PROJECTILES_IN_VOLUME(&uVar0);
			}
		}
		Function_29(19, 1, 0, 0);
	}
	SET_TIME_ACCELERATION(0.0f);
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(1);
	}
	if (&bParam4)
	{
		ENABLE_USE_CONTEXTS(0);
	}
	AI_GLOBAL_CLEAR_ALL_DANGER();
	if (uParam10 && !Function_25())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_83()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_83()));
		DECOR_SET_BOOL(&Global_54076, "nquitBinos", 1);
		UNK_0xE6C1DBD9(0);
		SET_DRAW_ACTOR(&Global_54076, 1);
		SHOW_PHYSINST(GET_PHYSINST_FROM_ACTOR(&Global_54076));
		if (UI_ISACTIVE("BinocularsUI"))
		{
			UI_POP("BinocularsUI");
		}
	}
	ACTOR_DATA_GRAVITY_LIMIT(1);
	ENABLE_PIP(0, 0, 1);
	Global_99146 = 1;
	Global_99168 = GET_THIS_SCRIPT_ID();
	Global_99170 = "";
	if (IS_VOLUME_VALID(&uVar0))
	{
		DESTROY_VOLUME(&uVar0);
	}
	if (Function_82(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_81(0x4000000);
	}
	if (Function_82(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_81(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&uParam12);
	SET_USES_QUAD_IK_FIX(&uParam13);
}

void Function_81(int iParam0) //Position: 0x53CB / 21451
{
	int iVar0;
	
	if (Function_26(iParam0, 1) && Function_26(Global_39556, 1))
	{
	}
	iVar0 = (Global_39556 && iParam0);
	Global_39556 = (Global_39556 - iVar0);
	Global_39556 |= 1073741824;
	return;
}

bool Function_82(int iParam0) //Position: 0x53FF / 21503
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_83() //Position: 0x541B / 21531
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	uVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_LAYOUTREF_VALID(&uVar0))
	{
		uVar1 = CREATE_OBJECT_ITERATOR(&uVar0);
		iVar2 = START_OBJECT_ITERATOR(&uVar1);
		ITERATE_ON_OBJECT_TYPE(&uVar1, 42);
		if (IS_OBJECT_VALID(&iVar2))
		{
			while (IS_OBJECT_VALID(&iVar2))
			{
				PRINTSTRING(GET_OBJECT_NAME(&iVar2));
				PRINTNL();
				if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(&iVar2), "bino_camera"))
				{
					return &iVar2;
				}
				iVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
			}
		}
		DESTROY_ITERATOR(&uVar1);
	}
	return "";
}

void Function_84(struct<2> Param0) //Position: 0x54A9 / 21673
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_MOST_RECENT_MOUNT(&Global_54076);
	Function_161(&Global_54076);
	uVar1 = Function_161(&Global_54076);
	if (Function_116(StackVal, &Global_54076, Param0) > 10.0f)
	{
		if (IS_ACTOR_VALID(&uVar0))
		{
			TELEPORT_ACTOR(&uVar0, &Param0, 1, 1, 1);
			TASK_STAND_STILL(&uVar0, -1.0f, 0, 0);
		}
		if (IS_ACTOR_RIDING(&Global_54076))
		{
			TELEPORT_ACTOR(&Global_54076, &uVar1, 1, 1, 1);
		}
	}
	return;
}

void Function_85(var uParam0, bool bParam1) //Position: 0x550A / 21770
{
	var uVar0;
	var uVar1;
	
	if (IS_ACTOR_RIDING(&uParam0))
	{
		uVar0 = GET_MOUNT(&uParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			RESET_ACTOR_GAITS(&uVar0, 1);
		}
	}
	else if (IS_ACTOR_INSIDE_VEHICLE(&uParam0))
	{
		uVar1 = GET_VEHICLE(&uParam0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			STOP_VEHICLE(&uVar1);
		}
	}
	else if (!&bParam1 || Function_86(&uParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(&uParam0, 1);
	}
	return;
}

float Function_86(var uParam0, bool bParam1) //Position: 0x5574 / 21876
{
	struct<2> Var0;
	
	GET_ACTOR_VELOCITY(&uParam0, &Var0);
	if (&bParam1)
	{
		Var0.f_4 = 0.0f;
	}
	return VMAG(Var0);
}

bool Function_87(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, bool bParam12, bool bParam13, var uParam14, int iParam15, var uParam16, bool bParam17, var uParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, var uParam23, float fParam24) //Position: 0x5595 / 21909
{
	int iVar0;
	
	uParam9 = uParam9;
	uParam18 = &uParam18;
	bParam17 = &bParam17;
	if (!IS_ACTOR_VALID(&bParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&bParam1))
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
				uParam2 = Function_133(&bParam0, &Global_54076);
				AI_GOAL_LOOK_AT_ACTOR_NEW(&bParam0, &bParam1, -1.0f, 1);
				uParam8 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &uParam5, Function_236(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
				ATTACH_OBJECTS(StackVal, StackVal, &uParam8, &bParam1, Function_236(), Vector(0.0f, 0,5f, &uParam16), Vector(0.0f, 0.0f, 0.0f), 4294967295);
				if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &bParam0, 1.0f, &uParam14, 1, 1, 0) || Function_133(&Global_54076, &bParam0) > 2.0f)
				{
					TASK_FOLLOW_OBJECT_AT_DISTANCE(&bParam0, &uParam8, 1.0f, &iParam15);
					TASK_PRIORITY_SET(&bParam0, true);
				}
				uParam3 = 1;
			}
			break;
		
		case 0x00000001:
			if ((Function_133(&bParam0, &bParam1) - uParam2) < fParam6)
			{
				TASK_FLEE_ACTOR(&bParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
				return 0;
			}
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &bParam0, 1.0f, &uParam14, 1, 1, 0))
			{
				iVar0 = TASK_SEQUENCE_OPEN();
				TASK_FACE_ACTOR(0, &bParam1, 0, 3212836864);
				TASK_FACE_ACTOR(0, &bParam1, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bParam0, iVar0);
				TASK_SEQUENCE_RELEASE(iVar0, 1);
				TASK_PRIORITY_SET(&bParam0, true);
				uParam9 = 0;
				uParam3 = 4;
			}
			else if (!Function_159(&bParam0, 0))
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
			TASK_FACE_ACTOR(&bParam0, &bParam1, 1, 3212836864);
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
					Function_106(&bParam0, &Global_54076, "nThank_You", 0, 5, 60, 1, 1);
				}
				else
				{
					Function_106(&bParam0, &Global_54076, &bParam12, &bParam13, 5, 60, 1, 1);
				}
				uParam3 = 5;
				Function_234(&uParam4, 0.0f);
			}
			else if (!Function_159(&bParam0, 0))
			{
				return 0;
			}
			break;
		
		case 0x00000005:
			if (uParam23 && !Function_88(&bParam0))
			{
				if (&fParam24 != -1.0f)
				{
					if (!IS_AMBIENT_SPEECH_PLAYING(&bParam0))
					{
						RESET_ANIM_SET_FOR_ACTOR(&bParam0, 1);
						Function_8(&bParam0, 4, 0, 1);
					}
				}
				else if (Function_126(&uParam4, &fParam24))
				{
					RESET_ANIM_SET_FOR_ACTOR(&bParam0, 1);
					Function_8(&bParam0, 4, 0, 1);
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
							Function_106(&Global_54076, &bParam0, &bParam20, &bParam20, 5, 60, 1, 1);
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
			if (uParam23 && !Function_88(&bParam0))
			{
				if (Function_126(&uParam4, &fParam24))
				{
					RESET_ANIM_SET_FOR_ACTOR(&bParam0, 1);
					Function_8(&bParam0, 4, 0, 1);
				}
			}
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(&bParam0, &uParam11) && !IS_AMBIENT_SPEECH_PLAYING(&Global_54076))
			{
				RESET_ANIM_SET_FOR_ACTOR(&bParam0, 1);
				uParam7 = 1;
				if (&bParam17)
				{
					Function_8(&bParam0, 4, 0, &iParam15);
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

bool Function_88(bool bParam0) //Position: 0x59BA / 22970
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

void Function_89(var uParam0, bool bParam1) //Position: 0x59E2 / 23010
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_INT(&uParam0, "honor", bParam1);
	return;
}

void Function_90(int iParam0, bool bParam1, bool bParam2) //Position: 0x5A04 / 23044
{
	int iVar0;
	bool bVar1;
	
	if (Function_67(0) && !Global_6623)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_66())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_252 = (Global_21369.f_252 + iParam0);
		return;
	}
	iVar0 = Function_44(1);
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
			Function_61(1, bVar1);
			if (!&bParam2)
			{
				if (!Function_60(Global_119936, 1))
				{
					Function_54(&Global_54076, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_94(1, (4294967295 * bVar1));
			if (!Global_6623)
			{
				if (!Function_60(Global_119936, 2))
				{
					Function_54(&Global_54076, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_29(1, bVar1, 0, 0);
	}
	else
	{
		Function_93(1, (4294967295 * bVar1), 0);
	}
	if (Function_44(1) <= 4294962296)
	{
		Function_92(1, 4294962296, 0);
	}
	else if (Function_44(1) >= 5000)
	{
		Function_92(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_40(1));
	iVar0 = Function_44(1);
	switch (Global_21369.f_244)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_21369.f_244 = 1;
				Function_47(2, Function_91(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_21369.f_244 = 0;
				Function_47(2, Function_91(Global_21369.f_244), 0);
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
				Function_47(2, Function_91(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_21369.f_244 = 1;
				Function_47(2, Function_91(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_21369.f_244 = 3;
				Function_47(2, Function_91(Global_21369.f_244), 1);
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
				Function_47(2, Function_91(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_21369.f_244 = 4;
				Function_47(2, Function_91(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_21369.f_244 = 3;
				Function_47(2, Function_91(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_21369.f_244 = 5;
				Function_47(2, Function_91(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_21369.f_244 = 4;
				Function_47(2, Function_91(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_21369.f_244 = 6;
				Function_47(2, Function_91(Global_21369.f_244), 1);
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
				Function_47(2, Function_91(Global_21369.f_244), 0);
			}
			break;
	}
	Function_46(Global_21369.f_244, Global_21369.f_248);
	return;
}

var Function_91(int iParam0) //Position: 0x5D2B / 23851
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

int Function_92(int iParam0, bool bParam1, bool bParam2) //Position: 0x5DCE / 24014
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
		Function_43(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_42(iParam0);
	if (&bParam2)
	{
		Function_31(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_93(int iParam0, bool bParam1, int iParam2) //Position: 0x606A / 24682
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
	Function_42(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_31(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_94(int iParam0, bool bParam1) //Position: 0x6267 / 25191
{
	bool bVar0;
	int iVar1;
	
	Function_93(iParam0, bParam1, 0);
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
	iVar1 = Function_62(iParam0, 4294967295);
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
	iVar1 = Function_48();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

void Function_95(bool[] bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x6412 / 25618
{
	int iVar0;
	
	bParam2 = 1;
	bParam3 = 0;
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		if (Function_159(&(bParam0[iVar0]), &bParam4))
		{
			bParam3 = 1;
		}
		else
		{
			bParam2 = 0;
		}
		iVar0++;
	}
}

bool Function_96(bool bParam0, var uParam1, struct<2> Param2, struct<2> Param4) //Position: 0x6455 / 25685
{
	struct<2> Var0;
	
	GET_OBJECT_RELATIVE_POSITION(StackVal, &uLocal_114, Vector(-1.0f, 0.0f, 1.0f), &Var0);
	switch (iLocal_171)
	{
		case 0x00000000:
			uLocal_88 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uParam1, Function_236(), 0f, Var0, Vector(0.0f, 0.0f, 0.0f), Vector(3,5f, 2,5f, 3,5f));
			bLocal_90 = Function_101(&uParam1, Function_236(), &uLocal_88, &Global_54076, 1, 325, 4294967295, 0, 0, 1);
			ATTACH_OBJECTS(StackVal, StackVal, &uLocal_88, &bLocal_90, Function_236(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
			if (&fLocal_112 == "")
			{
				if (IS_LAYOUTREF_VALID(GET_LAYOUT_FROM_OBJECT(&uParam1)))
				{
					GET_OBJECT_RELATIVE_POSITION(StackVal, &uLocal_114, Vector(-2.0f, 0.0f, 0.0f), &Param2);
					fLocal_112 = CREATE_GRINGO_IN_LAYOUT(&uParam1, Function_236(), "$/content/scripting/gringo/SimpleGringo/Treasure_hunter_handoff", Param2, Param4);
					SNAP_OBJECT_TO_GROUND(&fLocal_112, 0,5f, 0, 1092616192);
					GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&fLocal_112), false);
				}
			}
			Function_19(&bParam0);
			if (IS_BLIP_VALID(&uLocal_27))
			{
				REMOVE_BLIP(&uLocal_27);
			}
			ACTOR_START_FORCE_HOLSTER(&bParam0, 1, 0);
			RESET_ANIM_SET_FOR_ACTOR(&bParam0, 1);
			TASK_FACE_ACTOR(&bParam0, &Global_54076, 1, 3212836864);
			AI_GOAL_LOOK_AT_ACTOR_NEW(&bParam0, &Global_54076, -1f, 0);
			MEMORY_CLEAR_EVENTS(&bParam0, 0);
			MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bParam0, 1);
			TASK_PRIORITY_SET(&bParam0, true);
			Function_100("treasureHunter_obj01", 0x40f00000, 1, 2, 0, 0, 0, 0);
			Function_106(&bParam0, &Global_54076, "TreasureRobbers_msg04", 0, 5, 60, 1, 1);
			Function_234(&uLocal_172, 0.0f);
			iLocal_171 = 1;
			break;
		
		case 0x00000001:
			if (IS_ACTOR_VALID(&bParam0))
			{
				if (!IS_AMBIENT_SPEECH_PLAYING(&bParam0))
				{
					if (Function_126(&uLocal_172, 1.0f))
					{
						if (IS_OBJECT_VALID(&bLocal_90))
						{
							if (Function_98())
							{
								if (!IS_ACTOR_HOGTIED(&bParam0))
								{
									if (Function_133(&Global_54076, &bParam0) > 10.0f)
									{
										if (!FIRE_IS_ACTOR_ON_FIRE(&bParam0))
										{
											if (GATEWAY_UPDATE(&bLocal_90) || Function_97(&Global_54076, &bParam0))
											{
												TASK_CLEAR(&bParam0);
												TASK_STAND_STILL(&bParam0, -1.0f, 0, 0);
												Function_134(&bLocal_90);
												iLocal_171 = 2;
											}
										}
									}
								}
							}
						}
					}
				}
				else
				{
					Function_234(&uLocal_172, 0.0f);
				}
			}
			break;
		
		case 0x00000002:
			return 1;
			break;
	}
	return 0;
}

int Function_97(int iParam0, bool bParam1) //Position: 0x66B6 / 26294
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_ACTOR_VALID(&bParam1))
		{
			if (IS_ACTOR_RIDING(&iParam0))
			{
				if (Function_133(&iParam0, &bParam1) > (7.0f - 2.0f))
				{
					return 1;
				}
			}
			if (Function_133(&iParam0, &bParam1) > 2,5f)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool Function_98() //Position: 0x6701 / 26369
{
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (IS_ACTOR_ON_LADDER(&Global_54076))
		{
			return 0;
		}
		if (IS_ACTOR_DRAFTED(&Global_54076))
		{
			return 0;
		}
		if (IS_ACTOR_RIDING_VEHICLE(&Global_54076))
		{
			if (!IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
			{
				return 0;
			}
		}
		if (Function_99())
		{
			return 0;
		}
	}
	return 0;
	return 1;
}

bool Function_99() //Position: 0x674E / 26446
{
	if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(&Global_54076)))
	{
		return 1;
	}
	return 0;
}

void Function_100(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x6764 / 26468
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
		Var0 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_24(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&iParam0, &iParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&iParam0, &iParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

var Function_101(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, var uParam6, var uParam7, var uParam8, var uParam9) //Position: 0x67F9 / 26617
{
	var uVar0;
	
	uVar0 = CREATE_GATEWAY_IN_LAYOUT(&uParam0, &uParam1, &uParam2, &uParam3, iParam4, &uParam6, &uParam7, &uParam8, &uParam9, 1);
	if (IS_OBJECT_VALID(&uVar0))
	{
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uParam2);
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uParam2);
		if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&uParam2)))
		{
			REMOVE_BLIP(GET_BLIP_ON_OBJECT(&uParam2));
		}
		ADD_BLIP_FOR_OBJECT(&uVar0, iParam5, 0.0f, 2, 0);
		DECOR_SET_OBJECT(&uVar0, "volrestrict", &uParam2);
		DECOR_SET_BOOL(&uVar0, "voldestroy", &uParam8);
	}
	return &uVar0;
}

int Function_102(int iParam0, float fParam1, struct<2> Param2) //Position: 0x688A / 26762
{
	struct<2> Var0;
	
	Function_161(&Global_54076);
	Var0 = Function_161(&Global_54076);
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (Function_159(&iParam0, 1))
		{
			Function_161(&iParam0);
			Function_161(&iParam0);
			if (VDIST(Param2, Function_161(&iParam0)) < fParam1 && VDIST(Var0, Function_161(&iParam0)) < fParam1)
			{
				Function_19(&iParam0);
				return 1;
			}
			if (IS_ACTOR_HOGTIED(&iParam0))
			{
				TASK_FLEE_ACTOR(&iParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
				Function_19(&iParam0);
				return 1;
			}
		}
		Function_19(&iParam0);
		return 1;
	}
	Function_19(&iParam0);
	return 1;
	return 0;
}

bool Function_103(int iParam0, int iParam1, int iParam2) //Position: 0x691E / 26910
{
	if (GET_LAST_ATTACKER(&iParam0) == &Global_54076)
	{
		return 1;
	}
	if (Function_159(&iParam1, 0))
	{
		if (GET_LAST_ATTACKER(&iParam1) == &Global_54076)
		{
			return 1;
		}
	}
	return 1;
	if (Function_159(&iParam1, 0))
	{
		if (GET_LAST_ATTACKER(&iParam2) == &Global_54076)
		{
			return 1;
		}
	}
	return 1;
	return 0;
}

bool Function_104(int iParam0, int iParam1) //Position: 0x6970 / 26992
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_ACTOR_HOGTIED(&iParam0) || Function_133(&iParam0, &Global_54076) < 100.0f)
		{
			Function_19(&iParam0);
			TASK_FLEE_ACTOR(&iParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
			TASK_PRIORITY_SET(&iParam0, false);
		}
	}
	if (IS_ACTOR_VALID(&iParam1))
	{
		if (IS_ACTOR_HOGTIED(&iParam1) || Function_133(&iParam1, &Global_54076) < 100.0f)
		{
			Function_19(&iParam1);
			TASK_FLEE_ACTOR(&iParam1, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
			TASK_PRIORITY_SET(&iParam1, false);
		}
	}
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_ACTOR_HOGTIED(&iParam0) || Function_133(&iParam0, &Global_54076) < 100.0f)
		{
			if (IS_ACTOR_VALID(&iParam1))
			{
				if (IS_ACTOR_HOGTIED(&iParam1) || Function_133(&iParam1, &Global_54076) < 100.0f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_105(var[] uParam0, struct<31> Param2) //Position: 0x6A51 / 27217
{
	if (iLocal_147 == 0)
	{
		if (!Function_159(&iParam1, 0))
		{
			if (IS_ACTOR_VALID(&(uParam0[0])))
			{
				ADD_BLIP_FOR_ACTOR(&(uParam0[0]), 322, 0.0f, 3, 0);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&(uParam0[0]), 13, false);
				Function_117(&(uParam0[0]), &Global_54076);
				if (IS_AMBIENT_SPEECH_PLAYING(&(uParam0[0])))
				{
					CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&(uParam0[0]));
				}
			}
			if (IS_ACTOR_VALID(&(uParam0[1])))
			{
				ADD_BLIP_FOR_ACTOR(&(uParam0[1]), 322, 0.0f, 3, 0);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&(uParam0[1]), 13, false);
				Function_117(&(uParam0[1]), &Global_54076);
				if (IS_AMBIENT_SPEECH_PLAYING(&(uParam0[1])))
				{
					CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&(uParam0[1]));
				}
			}
			iLocal_147 = 1;
		}
		else if (Function_118(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &uParam0, Param2))
		{
			Function_163(&iParam1, &Global_54076, 5, 0);
			if (IS_ACTOR_VALID(&(uParam0[0])))
			{
				TASK_CLEAR(&(uParam0[0]));
				ADD_BLIP_FOR_ACTOR(&(uParam0[0]), 322, 0.0f, 3, 0);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&(uParam0[0]), 13, false);
				Function_117(&(uParam0[0]), &Global_54076);
				if (IS_AMBIENT_SPEECH_PLAYING(&(uParam0[0])))
				{
					CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&(uParam0[0]));
				}
			}
			if (IS_ACTOR_VALID(&(uParam0[1])))
			{
				TASK_CLEAR(&(uParam0[1]));
				ADD_BLIP_FOR_ACTOR(&(uParam0[1]), 322, 0.0f, 3, 0);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&(uParam0[1]), 13, false);
				Function_117(&(uParam0[1]), &Global_54076);
				if (IS_AMBIENT_SPEECH_PLAYING(&(uParam0[1])))
				{
					CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&(uParam0[1]));
				}
			}
			iLocal_147 = 1;
		}
	}
}

void Function_106(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x6BE2 / 27618
{
	bParam1 = &bParam1;
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (IS_ACTOR_ALIVE(&bParam0) && Function_133(&bParam0, &Global_54076) >= IntToFloat(&iParam5))
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

void Function_107(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x6C8F / 27791
{
	if (iParam0 != iParam1)
	{
		iParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_108(iParam0), &iParam2, &iParam3, &iParam4);
	}
}

var Function_108(int iParam0) //Position: 0x6CB9 / 27833
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

void Function_109(bool[] bParam0, int iParam2) //Position: 0x720E / 29198
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	
	Function_112();
	Var0 = Vector(0,184f, 0.0f, 0.0f);
	if (iLocal_58 == 1)
	{
		switch (iLocal_137)
		{
			case 0x00000000:
				if (!IS_ACTOR_VALID(&bParam1))
				{
					if (Function_111(&uLocal_67, &uLocal_69))
					{
						iLocal_44 = 1;
					}
					Function_110(&iLocal_71);
					Function_156();
					bLocal_105 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, Vector(Function_236(), &iParam2, StackVal) + Vector(Var0, Function_110(&iLocal_71), "$/content/scripting/gringo/simplegringo/loot_corpse_solo_male"), Function_156());
					Function_110(&iLocal_71);
					iLocal_138 = Vector(StackVal, StackVal, StackVal) + Vector(Var0, Function_110(&iLocal_71), StackVal);
					uLocal_29 = ADD_BLIP_FOR_COORD(&iLocal_138, 335, 0.0f, 3, 0);
					if (iLocal_58 == 1)
					{
						Function_100("treasureHunter_obj03", 0x40f00000, 1, 2, 0, 0, 0, 0);
					}
					SNAP_OBJECT_TO_GROUND(&bLocal_105, 1,5f, 0, 1092616192);
					Function_162(&bLocal_105);
					uVar2 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &iParam2, Function_236(), 0f, Function_162(&bLocal_105), Vector(0.0f, 0.0f, 0.0f), Vector(1.0f, 2.0f, 1.0f));
					iLocal_137 = 1;
				}
				break;
			
			case 0x00000001:
				if (iLocal_44 == 0)
				{
					if (Function_159(&(bParam0[0]), 0))
					{
						iLocal_56 = 0;
						iLocal_57 = 1;
						DECOR_SET_BOOL(&(bParam0[0]), "VolOnly", 1);
						DECOR_SET_OBJECT(&bLocal_105, "volume", &uVar2);
						TASK_GO_NEAR_OBJECT(&(bParam0[iLocal_56]), &bLocal_105, 1.0f, 3, 0, 1);
						iLocal_137 = 2;
					}
					else if (Function_159(&(bParam0[1]), 0))
					{
						iLocal_56 = 1;
						iLocal_57 = 0;
						DECOR_SET_BOOL(&(bParam0[1]), "VolOnly", 1);
						DECOR_SET_OBJECT(&bLocal_105, "volume", &uVar2);
						TASK_GO_NEAR_OBJECT(&(bParam0[iLocal_56]), &bLocal_105, 1.0f, 3, 0, 1);
						TASK_PRIORITY_SET(&(bParam0[iLocal_56]), true);
						iLocal_137 = 2;
					}
					else
					{
						iLocal_137 = 6;
					}
				}
				else
				{
					iLocal_137 = 6;
				}
				break;
			
			case 0x00000002:
				if (Function_159(&(bParam0[iLocal_56]), 0))
				{
					if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&bLocal_105)))
					{
						if (IS_GRINGO_READY(&bLocal_105))
						{
							if (GET_TASK_STATUS(&(bParam0[iLocal_56]), 83) == 0)
							{
								Function_161(&(bParam0[iLocal_56]));
								SET_OBJECT_POSITION(&bLocal_105, Function_161(&(bParam0[iLocal_56])));
								GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&bLocal_105), true);
								if (IS_ACTOR_VALID(&(bParam0[iLocal_57])))
								{
									if (Function_133(&Global_54076, &(bParam0[iLocal_57])) < 70.0f)
									{
										TASK_FOLLOW_ACTOR(&(bParam0[iLocal_57]), &Global_54076);
										TASK_PRIORITY_SET(&(bParam0[iLocal_57]), false);
									}
								}
								TASK_USE_GRINGO(&(bParam0[iLocal_56]), GET_GRINGO_FROM_OBJECT(&bLocal_105), "UseCase1", 1, 1);
								TASK_PRIORITY_SET(&(bParam0[iLocal_56]), true);
								Function_234(&uLocal_142, 0.0f);
								iLocal_137 = 4;
							}
						}
					}
				}
				else
				{
					iLocal_137 = 6;
				}
				break;
			
			case 0x00000004:
				if (Function_159(&(bParam0[iLocal_56]), 0))
				{
					if (GET_TASK_STATUS(&(bParam0[iLocal_56]), 19) != 4 || Function_126(&uLocal_142, 12.0f))
					{
						iLocal_137 = 5;
					}
					else if (GET_TASK_STATUS(&(bParam0[iLocal_56]), 19) == 0)
					{
						DESTROY_OBJECT(&bLocal_105);
						if (GET_OBJECTSET_SIZE(&uLocal_95) >= 0)
						{
							uVar3 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uLocal_95);
						}
						if (IS_BLIP_VALID(&uLocal_29))
						{
							REMOVE_BLIP(&uLocal_29);
							uLocal_29 = "";
						}
						if (!IS_BLIP_VALID(&uLocal_29))
						{
							Function_20(&(bParam0[iLocal_56]));
							uLocal_29 = ADD_BLIP_FOR_ACTOR(&(bParam0[iLocal_56]), 335, 0.0f, 3, 0);
						}
						DECOR_REMOVE(&uVar3, "iSpecificItem");
						uLocal_73 = CREATE_OBJECTSET_IN_LAYOUT("corpse", &iParam2, 4294967295, 1);
						DECOR_SET_OBJECT(&(bParam0[iLocal_56]), "lootCorpse_objSet", GET_OBJECT_FROM_OBJECTSET(&uLocal_73));
						DECOR_SET_INT(&(bParam0[iLocal_56]), "iSpecificItem", 11);
						TASK_PRIORITY_SET(&(bParam0[iLocal_56]), false);
						iLocal_55 = 1;
						iLocal_137 = 5;
					}
				}
				else
				{
					iLocal_137 = 6;
				}
				break;
			
			case 0x00000005:
				if (IS_ACTOR_VALID(&(bParam0[0])))
				{
					TASK_FLEE_ACTOR(&(bParam0[0]), &Global_54076, -1.0f, -1.0f, 0, 0, 0);
					if (IS_ACTOR_VALID(&(bParam0[1])))
					{
						TASK_FOLLOW_ACTOR(&(bParam0[1]), &(bParam0[0]));
					}
				}
				else if (IS_ACTOR_VALID(&(bParam0[1])))
				{
					TASK_FLEE_ACTOR(&(bParam0[1]), &Global_54076, -1.0f, -1.0f, 0, 0, 0);
				}
				iLocal_137 = 6;
				break;
			
			case 0x00000006:
				if (!IS_ACTOR_VALID(&(bParam0[0])))
				{
					if (IS_ACTOR_VALID(&(bParam0[1])))
					{
						if (GET_TASK_STATUS(&(bParam0[1]), 25) != 1)
						{
							TASK_FLEE_ACTOR(&(bParam0[1]), &Global_54076, -1.0f, -1.0f, 0, 0, 0);
						}
					}
				}
				if (iLocal_141 == 0)
				{
					if (iLocal_55 == 1)
					{
						if (!IS_ACTOR_VALID(&(bParam0[iLocal_56])))
						{
							if (iLocal_58 == 1)
							{
								Function_100("treasureHunter_obj03", 0x40f00000, 1, 2, 0, 0, 0, 0);
							}
							if (IS_BLIP_VALID(&uLocal_29))
							{
								REMOVE_BLIP(&uLocal_29);
								uLocal_29 = "";
							}
							if (!IS_BLIP_VALID(&uLocal_29))
							{
								uLocal_29 = ADD_BLIP_FOR_COORD(&iLocal_138, 335, 0.0f, 3, 0);
								iLocal_141 = 1;
							}
						}
						else if (IS_ACTOR_HOGTIED(&(bParam0[iLocal_56])))
						{
							if (!IS_BLIP_VALID(&uLocal_29))
							{
								uLocal_29 = ADD_BLIP_FOR_COORD(&iLocal_138, 335, 0.0f, 3, 0);
								iLocal_146 = 1;
							}
						}
						else
						{
							if (iLocal_146 == 1)
							{
								if (IS_BLIP_VALID(&uLocal_29))
								{
									REMOVE_BLIP(&uLocal_29);
									uLocal_29 = "";
								}
								if (!IS_BLIP_VALID(&uLocal_29))
								{
									Function_20(&(bParam0[iLocal_56]));
									uLocal_29 = ADD_BLIP_FOR_ACTOR(&(bParam0[iLocal_56]), 335, 0.0f, 3, 0);
								}
								iLocal_146 = 0;
							}
							Function_161(&(bParam0[iLocal_56]));
							iLocal_138 = Function_161(&(bParam0[iLocal_56]));
						}
					}
				}
				break;
			}
	}
	return;
}

struct<8> Function_110(int iParam0) //Position: 0x779A / 30618
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 1.0f);
	if (IS_OBJECT_VALID(&iParam0))
	{
		if (GET_OBJECTSET_SIZE(&iParam0) != 0)
		{
			if (IS_OBJECT_VALID(GET_INDEXED_OBJECT_IN_OBJECTSET(false, &iParam0)))
			{
				Function_162(GET_INDEXED_OBJECT_IN_OBJECTSET(false, &iParam0));
				Var0 = Function_162(GET_INDEXED_OBJECT_IN_OBJECTSET(false, &iParam0));
			}
		}
	}
	return StackVal, Var0;
}

bool Function_111(int iParam0, int iParam1) //Position: 0x77D8 / 30680
{
	if (GET_OBJECTSET_SIZE(&iLocal_71) >= 0)
	{
		uLocal_65 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &iLocal_71);
		if (IS_OBJECT_VALID(&uLocal_65))
		{
			if (IS_VOLUME_VALID(&iParam0))
			{
				if (IS_OBJECT_IN_VOLUME(&uLocal_65, &iParam0))
				{
					return 1;
				}
			}
			if (IS_VOLUME_VALID(&iParam1))
			{
				if (IS_OBJECT_IN_VOLUME(&uLocal_65, &iParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_112() //Position: 0x782A / 30762
{
	var uVar0;
	
	if (iLocal_44 == 1)
	{
		if (GET_OBJECTSET_SIZE(&uLocal_95) >= 0)
		{
			uVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uLocal_95);
			if (Function_113(&Global_54076, &uVar0) > 5.0f)
			{
				if (IS_BLIP_VALID(&uLocal_29))
				{
					REMOVE_BLIP(&uLocal_29);
					uLocal_29 = "";
				}
				DECOR_REMOVE(&uVar0, "iSpecificItem");
				Function_69(11, 0, 1);
			}
		}
	}
	return;
}

float Function_113(int iParam0, var uParam1) //Position: 0x788C / 30860
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			Function_115(&iParam0);
			Var0 = Function_115(&iParam0);
			Function_114(&uParam1);
			Var2 = Function_114(&uParam1);
			return VDIST(Var0, Var2);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

struct<8> Function_114(int iParam0) //Position: 0x792E / 31022
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

struct<8> Function_115(int iParam0) //Position: 0x799C / 31132
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

float Function_116(var uParam0, struct<2> Param1) //Position: 0x7A08 / 31240
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_115(&uParam0);
		Var0 = Function_115(&uParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

int Function_117(var uParam0, int iParam1) //Position: 0x7A7F / 31359
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

bool Function_118(var[] uParam0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31) //Position: 0x7B75 / 31605
{
	if (Function_121(&(uParam0[0]), 1, 0, 0, 0, 0, 0, 0, 0))
	{
		if (GET_LAST_ATTACKER(&(uParam0[0])) == &Global_54076)
		{
			return 1;
		}
	}
	if (Function_121(&(uParam0[1]), 1, 0, 0, 0, 0, 0, 0, 0))
	{
		if (GET_LAST_ATTACKER(&(uParam0[1])) == &Global_54076)
		{
			return 1;
		}
	}
	if (Function_119(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param1))
	{
		return 1;
	}
	return 0;
}

bool Function_119(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30) //Position: 0x7BE1 / 31713
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(5.0f, 0.0f, 5.0f), (&iParam0 + 16), StackVal);
	if (Function_120(StackVal, &Global_54076, Var0, 6.0f))
	{
		return 1;
	}
	return 0;
}

bool Function_120(int iParam0, struct<2> Param1, float fParam3) //Position: 0x7C0B / 31755
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		Function_115(&iParam0);
		if (VDIST(Function_115(&iParam0), Param1) >= fParam3)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

bool Function_121(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x7C97 / 31895
{
	int iVar0;
	
	if (bParam1)
	{
		Function_124(&iVar0, 1);
	}
	if (&bParam2)
	{
		Function_124(&iVar0, 2);
	}
	if (&bParam3)
	{
		Function_124(&iVar0, 4);
	}
	if (&bParam4)
	{
		Function_124(&iVar0, 8);
	}
	if (&bParam5)
	{
		Function_124(&iVar0, 1024);
	}
	if (&bParam7)
	{
		Function_124(&iVar0, 16);
	}
	if (&bParam8)
	{
		Function_124(&iVar0, 32);
	}
	if (&bParam6)
	{
		Function_124(&iVar0, 1048576);
	}
	return Function_122(&uParam0, iVar0);
}

int Function_122(int iParam0, int iParam1) //Position: 0x7D0E / 32014
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_ACTOR_ALIVE(&iParam0))
		{
			if (Function_123(&iParam1, 1))
			{
				if (IS_ACTOR_CRIPPLED(&iParam0, 3) || IS_ACTOR_CRIPPLED(&iParam0, 4))
				{
					return 0;
				}
			}
			if (Function_123(&iParam1, 2))
			{
				if (IS_ACTOR_HOGTIED(&iParam0))
				{
					return 0;
				}
			}
			if (Function_123(&iParam1, 4))
			{
				if (IS_ACTOR_BEING_DRAGGED(&iParam0, 1.0f))
				{
					return 0;
				}
			}
			if (Function_123(&iParam1, 8))
			{
				if (UNK_0x7A207FFE(&iParam0))
				{
					return 0;
				}
			}
			if (Function_123(&iParam1, 1024))
			{
				if (!IS_ACTOR_RIDING(&iParam0) && !IS_ACTOR_RIDING_VEHICLE(&iParam0))
				{
					return 0;
				}
			}
			if (Function_123(&iParam1, 16))
			{
				if (IS_ACTOR_RAGDOLL(&iParam0))
				{
					return 0;
				}
			}
			if (Function_123(&iParam1, 32))
			{
				if (FIRE_IS_ACTOR_ON_FIRE(&iParam0))
				{
					return 0;
				}
			}
			if (Function_123(&iParam1, 64))
			{
				if (GET_ACTOR_INCAPACITATED(&iParam0))
				{
					return 0;
				}
			}
			if (AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&iParam0) & 16384 == 16384)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

bool Function_123(var uParam0, int iParam1) //Position: 0x7DFC / 32252
{
	return (uParam0 && iParam1) == 0;
}

void Function_124(int iParam0, int iParam1) //Position: 0x7E09 / 32265
{
	Function_226(&iParam0, iParam1);
	return;
}

void Function_125(bool[] bParam0) //Position: 0x7E17 / 32279
{
	if (IS_ACTOR_VALID(&bParam1))
	{
		switch (iLocal_130)
		{
			case 0x00000000:
				if (Function_159(&(bParam0[0]), 0))
				{
					if (Function_133(&(bParam0[0]), &Global_54076) > 50.0f)
					{
						CLEAR_ALTERNATE_SPEECH_CONTEXT_FOR_PAIN(&(bParam0[0]));
						Function_106(&(bParam0[0]), &bParam1, "TreasureRobbers_msg01", "treasureHunter_msg01", 5, 60, 1, 1);
						iLocal_131 = 0;
						iLocal_130 = 1;
					}
				}
				else if (Function_159(&(bParam0[1]), 0))
				{
					if (Function_133(&(bParam0[1]), &Global_54076) > 50.0f)
					{
						CLEAR_ALTERNATE_SPEECH_CONTEXT_FOR_PAIN(&(bParam0[1]));
						Function_106(&(bParam0[1]), &bParam1, "TreasureRobbers_msg01", "treasureHunter_msg01", 5, 60, 1, 1);
						iLocal_131 = 1;
						iLocal_130 = 1;
					}
				}
				break;
			
			case 0x00000001:
				if (Function_159(&(bParam0[iLocal_131]), 0))
				{
					if (!IS_AMBIENT_SPEECH_PLAYING(&(bParam0[iLocal_131])))
					{
						iLocal_130 = 2;
					}
				}
				else
				{
					iLocal_130 = 8;
				}
				break;
			
			case 0x00000002:
				if (Function_159(&(bParam0[iLocal_131]), 0))
				{
					if (Function_133(&(bParam0[iLocal_131]), &Global_54076) > 40.0f)
					{
						CLEAR_ALTERNATE_SPEECH_CONTEXT_FOR_PAIN(&bParam1);
						Function_106(&bParam1, &(bParam0[iLocal_131]), "TreasureRobbers_msg02", "treasureHunter_msg02", 5, 60, 1, 1);
						iLocal_130 = 3;
					}
				}
				else
				{
					iLocal_130 = 8;
				}
				break;
			
			case 0x00000003:
				if (!IS_AMBIENT_SPEECH_PLAYING(&bParam1))
				{
					iLocal_130 = 4;
				}
				break;
			
			case 0x00000004:
				if (Function_159(&(bParam0[iLocal_131]), 0))
				{
					if (Function_133(&(bParam0[iLocal_131]), &Global_54076) > 40.0f)
					{
						CLEAR_ALTERNATE_SPEECH_CONTEXT_FOR_PAIN(&(bParam0[iLocal_131]));
						Function_106(&(bParam0[iLocal_131]), &bParam1, "TreasureRobbers_msg03", "treasureHunter_msg03", 5, 60, 1, 1);
						iLocal_130 = 5;
					}
				}
				else
				{
					iLocal_130 = 8;
				}
				break;
			
			case 0x00000005:
				if (!IS_AMBIENT_SPEECH_PLAYING(&bParam1))
				{
					Function_234(&uLocal_120, 0.0f);
					iLocal_130 = 6;
				}
				break;
			
			case 0x00000006:
				if (Function_126(&uLocal_120, 2.0f))
				{
					Function_106(&bParam1, &Global_54076, "VICTIMIZED", 0, 5, 60, 1, 1);
					Function_234(&uLocal_120, 0.0f);
					iLocal_130 = 7;
				}
				break;
			
			case 0x00000007:
				if (IS_AMBIENT_SPEECH_PLAYING(&bParam1))
				{
					if (Function_126(&uLocal_120, 7.0f))
					{
						iLocal_130 = 6;
					}
				}
				else
				{
					Function_234(&uLocal_120, 0.0f);
				}
				break;
			
			case 0x00000008:
				break;
			}
	}
	return;
}

bool Function_126(var uParam0, float fParam1) //Position: 0x80FB / 33019
{
	if (Function_129(&uParam0))
	{
		if (Function_127(&uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_127(vector3 vParam0) //Position: 0x8119 / 33049
{
	if (Function_129(&vParam0))
	{
		if (Function_128(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_128(int iParam0) //Position: 0x81E6 / 33254
{
	return Function_26(iParam0, 2);
}

bool Function_129(var uParam0) //Position: 0x81F4 / 33268
{
	return Function_26(uParam0, 1);
}

void Function_130() //Position: 0x8202 / 33282
{
	int iVar0;
	
	bLocal_134 = true;
	if (Global_43787 == 0)
	{
		iVar0 = Function_132(3);
		if (iVar0 == 0)
		{
			uLocal_132 = "FTR_SONG_01";
		}
		else if (iVar0 == 1)
		{
			uLocal_132 = "FTR_SONG_02";
		}
		else if (iVar0 == 2)
		{
			uLocal_132 = "FTR_SONG_04";
		}
	}
	else if (Global_43787 == 2)
	{
		if (Function_131())
		{
			uLocal_132 = "NRT_SONG_04";
		}
		else
		{
			uLocal_132 = "NRT_SONG_05";
		}
	}
	else if (Global_43787 == 1)
	{
		iVar0 = Function_132(3);
		if (iVar0 == 0)
		{
			uLocal_132 = "MEX_SONG_03";
		}
		else if (iVar0 == 1)
		{
			uLocal_132 = "MEX_SONG_04";
		}
		else
		{
			uLocal_132 = "MEX_SONG_06";
		}
	}
	AUDIO_MUSIC_FORCE_TRACK(&uLocal_132, "SUSPENSE_LOW", -3.0f, 500, 4294967295, 3212836864, 0);
	iLocal_135 = 7;
	return;
}

bool Function_131() //Position: 0x8314 / 33556
{
	return (RAND_INT_RANGE(0, 1999) / 1000) != 0;
}

int Function_132(bool bParam0) //Position: 0x8327 / 33575
{
	bParam0 = (bParam0 * 1000 - 1);
	return (RAND_INT_RANGE(0, bParam0) / 1000);
}

float Function_133(bool bParam0, bool bParam1) //Position: 0x8340 / 33600
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!IS_ACTOR_VALID(&bParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(&bParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(&bParam0, &Var0);
	GET_POSITION(&bParam1, &Var2);
	return VDIST(Var0, Var2);
}

void Function_134(bool bParam0) //Position: 0x8435 / 33845
{
	var uVar0;
	
	if (IS_OBJECT_VALID(&bParam0))
	{
		if (DECOR_CHECK_EXIST(&bParam0, "volrestrict"))
		{
			uVar0 = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(&bParam0, "volrestrict"));
			if (IS_VOLUME_VALID(&uVar0))
			{
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar0);
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar0);
				if (DECOR_CHECK_EXIST(&bParam0, "voldestroy"))
				{
					if (DECOR_GET_BOOL(&bParam0, "voldestroy"))
					{
						DESTROY_OBJECT(&uVar0);
					}
				}
				else
				{
					DESTROY_OBJECT(&uVar0);
				}
			}
		}
		DESTROY_OBJECT(&bParam0);
	}
	return;
}

bool Function_135(var[] uParam0, int iParam1, var uParam2, var uParam3, float fParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x84CB / 33995
{
	int iVar0;
	
	iParam7 = &iParam7;
	if (!&bParam6)
	{
		iVar0 = 0;
		while (iVar0 <= iParam1)
		{
			if (Function_138(&(uParam0[iVar0]), &uParam3, &fParam4, &iParam5, &bParam6, 0x40400000))
			{
				uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void Function_136(var[] uParam0) //Position: 0x851D / 34077
{
	Function_137(38);
	if (IS_ACTOR_VALID(&iParam1))
	{
		if (!IS_BLIP_VALID(&iLocal_108))
		{
			if (IS_ACTOR_ALIVE(&iParam1))
			{
				if (iLocal_58 == 1)
				{
					Function_100("treasureHunter_obj02", 0x40f00000, 1, 2, 0, 0, 0, 0);
				}
			}
			iLocal_108 = ADD_BLIP_FOR_ACTOR(&iParam1, 325, 0.0f, 3, 0);
		}
	}
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(&(uParam0[0]), 1);
	UNK_0x99AFD2D1(&(uParam0[0]), 0, 0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(&(uParam0[1]), 1);
	UNK_0x99AFD2D1(&(uParam0[1]), 0, 0);
	return;
}

void Function_137(bool bParam0) //Position: 0x85AF / 34223
{
	Global_26652[bParam04].f_20++;
	if (Global_26652[bParam04].f_20 == 1)
	{
		Function_29(409, 1, 0, 0);
	}
	return;
}

bool Function_138(int iParam0, var uParam1, float fParam2, int iParam3, bool bParam4, float fParam5) //Position: 0x85E0 / 34272
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
		fVar0 = Function_133(&iParam0, &Global_54076);
		if (!Function_26(&iParam3, 8))
		{
			if (GET_LAST_ATTACKER(&iParam0) == &Global_54076)
			{
				uParam1 = 8;
				Function_139(&iParam0);
				return 1;
			}
		}
		if (!Function_26(&iParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(&iParam0, 1.0f))
			{
				uParam1 = 2;
				Function_139(&iParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(&iParam0, 1.0f, 1.0f))
			{
				uParam1 = 2;
				Function_139(&iParam0);
				return 1;
			}
		}
		if (!Function_26(&iParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(&iParam0) || (((GET_ACTOR_UNDER_RETICLE(&Global_54076, 0) != &iParam0 && IS_PLAYER_WEAPON_ZOOMED(&Global_54076)) && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(&Global_54076) != &iParam0 && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f))
			{
				if (fParam2 > 0.0f)
				{
					uParam1 = 4;
					Function_139(&iParam0);
					return 1;
				}
				if (fParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - fParam2) < 1,3f)
					{
						uParam1 = 4;
						Function_139(&iParam0);
						return 1;
					}
				}
				fParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_26(&iParam3, 1))
		{
			if (Global_6646 || Global_6647)
			{
				uParam1 = 1;
				Function_139(&iParam0);
				return 1;
			}
		}
		if (!Function_26(&iParam3, 16))
		{
			if (UNK_0x7F454A92(&iParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(&iParam0)) > 2.0f && fVar0 > 18.0f)
				{
					uParam1 = 16;
					Function_139(&iParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_139(int iParam0) //Position: 0x87A9 / 34729
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&iParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(&iParam0, 1);
	UNK_0x99AFD2D1(&iParam0, 0, 0);
	Function_140(&iParam0);
	MEMORY_CONSIDER_AS(&Global_54076, &iParam0, 2);
	MEMORY_CONSIDER_AS(&iParam0, &Global_54076, 2);
	AI_GOAL_LOOK_CLEAR(&iParam0);
	return;
}

void Function_140(int iParam0) //Position: 0x87E6 / 34790
{
	SAY_SINGLE_LINE_CONTEXT(&iParam0, 60, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

float Function_141(bool bParam0) //Position: 0x87FF / 34815
{
	var uVar0;
	float fVar1;
	
	if (!&bParam0)
	{
		Function_142(&uVar0, &fVar1);
		if (fVar1 < 60.0f)
		{
			return (fVar1 + 20.0f);
		}
		return (fVar1 + 10.0f);
	}
	return (190.0f + 20.0f);
}

void Function_142(float fParam0, bool bParam1) //Position: 0x883B / 34875
{
	struct<2> Var0;
	
	if (Global_6629 && !Global_6646)
	{
		fParam0 = 65.0f;
		bParam1 = 95.0f;
	}
	else if ((!IS_ACTOR_RIDING(GET_PLAYER_ACTOR(0)) && !IS_ACTOR_RIDING_VEHICLE(GET_PLAYER_ACTOR(0))) && !Global_6646)
	{
		fParam0 = 115.0f;
		bParam1 = 170.0f;
	}
	else
	{
		GET_ACTOR_VELOCITY(GET_PLAYER_ACTOR(0), &Var0);
		if (VMAG(Var0) > 5.0f)
		{
			fParam0 = 130.0f;
			bParam1 = 190.0f;
		}
		else
		{
			fParam0 = 130.0f;
			bParam1 = 190.0f;
		}
	}
	return;
}

void Function_143(struct<2> Param0, var uParam2, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7) //Position: 0x88CC / 35020
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
	else if (!Function_170(StackVal, Param0))
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
			Function_155(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_154(0);
		}
		if (&bParam7)
		{
			Function_152(0, GET_THIS_SCRIPT_ID());
			Global_6615 = GET_THIS_SCRIPT_ID();
			Function_150(iParam3);
			Global_6644 = 1;
		}
		Function_148(iParam3);
		if (Function_147(StackVal, 32768))
		{
			Function_144(1);
		}
		Global_26652[iParam34].f_16++;
		Function_29(408, 1, 0, 0);
	}
}

void Function_144(bool bParam0) //Position: 0x89E1 / 35297
{
	if (bParam0)
	{
		Function_146(0x10000000);
	}
	else
	{
		Function_145(0x10000000);
	}
	Global_39922.f_304 = 0;
	return;
}

void Function_145(int iParam0) //Position: 0x8A06 / 35334
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_146(int iParam0) //Position: 0x8A23 / 35363
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

bool Function_147(var uParam0, int iParam1) //Position: 0x8A36 / 35382
{
	return (uParam0 && iParam1) == 0;
}

void Function_148(int iParam0) //Position: 0x8A43 / 35395
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (!Function_26(StackVal, 524288))
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
			bVar1 = Function_149(iVar0 * 60);
			ADD_TIME(&Global_27462[iParam052] + 376, 0, 0, bVar1, 0);
			Global_26652[iParam04] = &Global_27462[iParam052] + 376;
		}
	}
	return;
}

int Function_149(int iParam0) //Position: 0x8AE9 / 35561
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_150(int iParam0) //Position: 0x8B00 / 35584
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
	Function_151(&Var0 + 80[Var0.f_762], &(Global_26652[iParam04]), iParam0);
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

void Function_151(vector3 vParam0) //Position: 0x8B9F / 35743
{
	vParam0.y = iParam2;
	vParam0 = Param1.f_16;
	vParam0.f_8 = 1;
	return;
}

void Function_152(int iParam0, bool bParam1) //Position: 0x8BBB / 35771
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
			Function_153(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_153(struct<113> Param0) //Position: 0x8C42 / 35906
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

void Function_154(int iParam0) //Position: 0x8CA0 / 36000
{
	*(&Global_21369 + 136) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 136, 0, 0, (&iParam0 + Function_149(900)), 0);
	return;
}

void Function_155(int iParam0) //Position: 0x8CC4 / 36036
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, (&iParam0 + Function_149(200)), 0);
	return;
}

struct<8> Function_156() //Position: 0x8CE7 / 36071
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_157(var[] uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6) //Position: 0x8CF1 / 36081
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
			Function_155(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_154(0);
		}
		if (&bParam6)
		{
			Function_152(0, GET_THIS_SCRIPT_ID());
			Global_6615 = GET_THIS_SCRIPT_ID();
			Global_6644 = 1;
			Function_150(iParam3);
		}
		Function_148(iParam3);
		if (Function_147(StackVal, 32768))
		{
			Function_144(1);
		}
		Global_26652[iParam34].f_16++;
		Function_29(408, 1, 0, 0);
	}
}

void Function_158() //Position: 0x8DEA / 36330
{
	int iVar0;
	
	if (IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
	{
		iVar0 = GET_MOUNT(&Global_54076);
		if (&iVar0 == &bLocal_52)
		{
			if (IS_OBJECT_VALID(&uLocal_63))
			{
				LEASH_BREAK(&uLocal_63, 1056964608);
				DESTROY_OBJECT(&uLocal_63);
			}
		}
	}
	return;
}

bool Function_159(bool bParam0, bool bParam1) //Position: 0x8E28 / 36392
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
			Function_19(&bParam0);
			return 0;
		}
		if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&bParam0), 163840))
		{
			Function_19(&bParam0);
			return 0;
		}
	}
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (Function_160(&bParam0, 0) && !AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&bParam0), 16384))
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

int Function_160(int iParam0, int iParam1) //Position: 0x8ED3 / 36563
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

struct<8> Function_161(int iParam0) //Position: 0x8F25 / 36645
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

struct<8> Function_162(bool bParam0) //Position: 0x8F37 / 36663
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

int Function_163(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x8F60 / 36704
{
	if (IS_ACTOR_VALID(&iParam0) && IS_ACTOR_VALID(&bParam1))
	{
		if (!&iParam0 != GET_PLAYER_ACTOR(0))
		{
			MEMORY_CONSIDER_AS(&iParam0, &bParam1, bParam2);
			MEMORY_IDENTIFY(&iParam0, &bParam1);
		}
		if (&iParam3 == 1)
		{
			if (!&bParam1 != GET_PLAYER_ACTOR(0))
			{
				MEMORY_CONSIDER_AS(&bParam1, &iParam0, bParam2);
				MEMORY_IDENTIFY(&bParam1, &iParam0);
			}
		}
	}
	return 1;
}

void Function_164(var uParam0, bool bParam1) //Position: 0x8FC0 / 36800
{
	bool bVar0;
	
	if (DECOR_CHECK_EXIST(&uParam0, "iAdditionalMoney"))
	{
		bVar0 = DECOR_GET_INT(&uParam0, "iAdditionalMoney");
		bVar0 = (bVar0 + bParam1);
		DECOR_SET_INT(&uParam0, "iAdditionalMoney", bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, "iAdditionalMoney", bParam1);
	}
	return;
}

void Function_165(var uParam0, var uParam1, var uParam2, float fParam3, struct<2> Param4) //Position: 0x903F / 36927
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
		if (Function_166(StackVal, &Global_46715, "player_herb", &uVar0, 20.0f, 5, Param4) >= 0)
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

int Function_166(char* cParam0, var uParam1, char*[] cParam2, float fParam3, int iParam4, struct<2> Param5) //Position: 0x90EA / 37098
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

void Function_167() //Position: 0x9190 / 37264
{
	uLocal_63 = CREATE_LEASH_OBJECT(GET_OBJECT_FROM_ACTOR(&bLocal_52), Function_236(), 10f, 10, 0, 0,006f, 10f, 10000f, 200f, 8f, 100f, 1f, 0, 0, 0);
	if (IS_OBJECT_VALID(&uLocal_63))
	{
		LEASH_ATTACH_TO_OBJECT_BONE(StackVal, StackVal, &uLocal_63, &bLocal_52, "LowLip1", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0, 1, 1);
		LEASH_ATTACH_TO_OBJECT(StackVal, StackVal, &uLocal_63, &uLocal_114, Vector(1,5f, 0,82f, -2.0f), Vector(0.0f, 0.0f, 0.0f), 1, 1);
		LEASH_CONSTRAIN(&uLocal_63);
		LEASH_RESTART(&uLocal_63);
		LEASH_SET_CONSTRAINT_LENGTH(&uLocal_63, 2,5f);
		LEASH_SET_LEASH_LENGTH(&uLocal_63, 2,5f);
	}
	return;
}

void Function_168() //Position: 0x9241 / 37441
{
	return;
}

var Function_169(var uParam0, var uParam1, var uParam2, struct<2> Param3, struct<2> Param5, int iParam7) //Position: 0x9247 / 37447
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

bool Function_170(vector3 vParam0) //Position: 0x939E / 37790
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

int Function_171(vector3 vParam0) //Position: 0x93B6 / 37814
{
	struct<2> Var0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(vParam0, 1.0f))
	{
		GET_CAMERA_POSITION(GET_GAME_CAMERA(), &Var0);
		if (VDIST(vParam0, Var0) > 175.0f)
		{
		}
		return 0;
	}
	if (FIND_GROUND_INTERSECTION_WITH_MATERIAL(&vParam0, fParam1, &Param2, &uParam3, &uParam4))
	{
		if (!Function_170(StackVal, Param2))
		{
			return 1;
		}
	}
	vParam0 = (vParam0 + 0,01f);
	vParam0.f_8 = (vParam0.z + 0,01f);
	if (FIND_GROUND_INTERSECTION_WITH_MATERIAL(&vParam0, fParam1, &Param2, &uParam3, &uParam4))
	{
		if (!Function_170(StackVal, Param2))
		{
			return 1;
		}
	}
	return 0;
}

int Function_172(int iParam0) //Position: 0x9453 / 37971
{
	if (0 | Global_53524.f_44)
	{
		return StackVal;
	}
	return StackVal;
}

float Function_173() //Position: 0x947B / 38011
{
	float fVar0;
	bool bVar1;
	
	if (Global_6612)
	{
		return 0.0f;
	}
	Function_142(&fVar0, &bVar1);
	if (fVar0 >= 50.0f)
	{
		return (fVar0 - 10.0f);
	}
	return (fVar0 - 20.0f);
}

bool Function_174(struct<65> Param0) //Position: 0x94AC / 38060
{
	struct<8> Var0;
	var uVar8;
	var uVar9;
	
	if (Global_6612 && Param0.f_40)
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_212(GET_SCRIPT_NAME()) };
		uVar8 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Vector(*(&Param0 + 16), Function_210(0.0f, &Global_54076, *(&Param0 + 16)), 0.0f), Vector(Param0.f_60, 20.0f, Param0.f_60));
		DECOR_SET_INT(&uVar8, "script", GET_THIS_SCRIPT_ID());
		if (Param0.f_64 != 4294967295)
		{
			DECOR_SET_INT(StackVal, &uVar8, "category");
			Function_208(&uVar8, Param0.f_40);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
		*(&Param0 + 16) = Global_54078;
		return 1;
	}
	uParam3 = 0;
	if (!Function_175(&Param0))
	{
		if (Param0.f_40 == 1)
		{
			if (uParam2 == 0)
			{
				Function_23("Still scanning for the proper terrain to run this event.  Move the player around to find a good spawn location.", -1.0f, 1, 2, 1, 0);
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
		Function_23("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 5.0f, 1, 2, 1, 0);
	}
	if (&bParam4)
	{
		if (!Function_21(Param0.f_64, 0, 1, 0, 0))
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
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_212("restrictVol") };
		uVar9 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Vector(*(&Param0 + 16), Function_210(0.0f, &Global_54076, *(&Param0 + 16)), 0.0f), Vector(Param0.f_60, 20.0f, Param0.f_60));
		DECOR_SET_INT(&uVar9, "script", GET_THIS_SCRIPT_ID());
		if (Param0.f_64 != 4294967295)
		{
			DECOR_SET_INT(StackVal, &uVar9, "category");
			Function_208(&uVar9, Param0.f_40);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
	}
	return 1;
}

bool Function_175(struct<73> Param0) //Position: 0x986A / 39018
{
	var uVar0;
	var uVar1;
	int iVar2;
	struct<2> Var3;
	var uVar5;
	struct<2> Var7;
	bool bVar9;
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
			Function_207(&Param0 + 8);
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
				Var3 = Vector(0.0f, 0.0f, Function_141(1));
				ROTATE_VECTOR_XZ(&Var3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				Var3 = Vector(StackVal, StackVal, StackVal) + Vector(Var7, Var3, StackVal);
				ITERATE_IN_SPHERE(&Param0 + 8, Var3, Function_141(1));
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
						uVar0 = Function_206(StackVal, &Param0 + 8, Var7, 0,01f);
					}
					else
					{
						uVar0 = Function_205(StackVal, &Param0 + 8, Var7, 0,1f, "locflag", (&Param0 + 72 + 36)->f_24);
					}
				}
				else if ((&Param0 + 72 + 36)->f_24 == 0)
				{
					uVar0 = Function_204(StackVal, &Param0 + 8, Var7, Function_173());
				}
				else
				{
					uVar0 = Function_203(StackVal, &Param0 + 8, Var7, Function_173(), "locflag", (&Param0 + 72 + 36)->f_24);
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
			Function_207(&Param0 + 8);
			ITERATE_IN_LAYOUT(&Param0 + 8, FIND_NAMED_LAYOUT("regions_layout"));
			fVar10 = 130.0f;
			bVar9 = 190.0f;
			GET_POSITION(GET_PLAYER_ACTOR(0), &Var3);
			ITERATE_IN_SPHERE(StackVal, &Param0 + 8, Var3);
			uVar1 = START_OBJECT_ITERATOR(&Param0 + 8);
			while (IS_OBJECT_VALID(&uVar1) && !IS_OBJECT_VALID(&uVar0))
			{
				if (DECOR_CHECK_EXIST(&uVar1, "regid"))
				{
					bVar11 = DECOR_GET_INT(&uVar1, "regid");
					if (Function_202(bVar11))
					{
						if (StackVal == (&Param0 + 72)->f_68)
						{
							if ((StackVal && Global_43791[bVar11]) >= 0)
							{
								GET_OBJECT_POSITION(&uVar1, &Var3);
								if (VDIST(Var7, Var3) < fVar10 && VDIST(Var7, Var3) > Function_141(1))
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
				Function_201(&Param0 + 16, 99.0f, &Param0 + 16, 10);
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
				Function_200(&Var7, &uVar5);
				Var3 = Function_200(&Var7, &uVar5);
				if (!Function_170(StackVal, Var3))
				{
					PRINTSTRING("Player Pos: ");
					PRINTVECTOR(Var7);
					PRINTNL();
					Function_142(&fVar10, &bVar9);
					if (VDIST(Var3, Var7) < ((fVar10 + ((bVar9 - fVar10) / 2.0f)) * 0,8f))
					{
						iVar2 = Function_197(StackVal, &Param0, Var3);
					}
				}
			}
			else
			{
				iVar2 = Function_193(&Param0);
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
					if (!Function_192(StackVal, *(&Param0 + 16)))
					{
						return 0;
					}
				}
				if (Param0.f_68 == 1)
				{
					if (!Function_191(StackVal, *(&Param0 + 16)))
					{
						return 0;
					}
				}
				if (Function_26(StackVal, 131072))
				{
					if (StackVal || Function_190(Function_190(StackVal, *(&Param0 + 16)), Global_54078))
					{
						return 0;
					}
				}
				if (StackVal & 1024 == 1024)
				{
					if (Function_189(StackVal, *(&Param0 + 16)))
					{
						return 0;
					}
				}
				if (!Function_185(&Param0 + 16, &Param0 + 60, 0, Param0.f_40))
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
				bVar9 = 150.0f;
				Var3 = Vector(0.0f, 0.0f, ((fVar10 + bVar9) * -0,5f));
				ROTATE_VECTOR_XZ(&Var3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				Var3 = Vector(StackVal, StackVal, StackVal) + Vector(Var7, Var3, StackVal);
				uVar17 = START_CURVE_QUERY(&Global_43578, Var3, Function_184((&Param0 + 72)->f_148, 0), 0.0f, 20.0f, 5.0f, 0);
			}
			else
			{
				uVar17 = START_CURVE_QUERY(&Global_43578, Var7, Function_184((&Param0 + 72)->f_148, 0), 120.0f, 150.0f, 5.0f, 0);
			}
			if (GET_NUM_POINTS_IN_CURVE_QUERY(&uVar17) >= 0)
			{
				bVar15 = RAND_INT_RANGE(0, (GET_NUM_POINTS_IN_CURVE_QUERY(&uVar17) - 1));
				GET_POINT_FROM_CURVE_QUERY(&uVar17, bVar15, &Var12);
				Function_183(&Var12);
				*(&Param0 + 16) = Function_183(&Var12);
				Param0.f_28 = Var12.f_12;
				(&Param0 + 28)->f_4 = Var12.f_16;
				Param0.f_56 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(&uVar17, bVar15);
				UNK_0xDF93BD7C(&uVar17);
			}
			else
			{
				UNK_0xDF93BD7C(&uVar17);
				return 0;
			}
			if (Param0.f_68 == 2)
			{
				if (!Function_192(StackVal, *(&Param0 + 16)))
				{
					return 0;
				}
			}
			if (Param0.f_68 == 1)
			{
				if (!Function_191(StackVal, *(&Param0 + 16)))
				{
					return 0;
				}
			}
			if (Param0.f_68 == 0)
			{
				if (!(StackVal || Function_192(Function_191(StackVal, *(&Param0 + 16)), *(&Param0 + 16))))
				{
					return 0;
				}
			}
			if (Function_26(StackVal, 131072))
			{
				if (StackVal || Function_190(Function_190(StackVal, *(&Param0 + 16)), Global_54078))
				{
					return 0;
				}
			}
			if (StackVal && !Function_185(&Param0 + 16, &Param0 + 60, 0, Param0.f_40) == 262144)
			{
				return 0;
			}
			break;
		
		case 0x00000004:
			if (!Function_180((&Param0 + 72)->f_148) < 0)
			{
				return 0;
			}
			break;
		
		case 0x00000007:
			switch ((&Param0 + 72)->f_156)
			{
				case 0x00000001:
					iVar18 = Function_177(StackVal, Global_43787, Global_43788, Global_43789, 1);
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
						iVar18 = Function_177(StackVal, Global_43787, Global_43788, (Global_43789 + iVar16), 1);
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
	if (Function_176(StackVal, *(&Param0 + 16)))
	{
		return 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(*(&Param0 + 16), 10.0f))
	{
		return 0;
	}
	return 1;
}

bool Function_176(struct<2> Param0) //Position: 0xA131 / 41265
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

int Function_177(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xA168 / 41320
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
								return Function_178(&Global_11014, &Global_12796, bParam3);
								break;
							
							case 0x00000001:
								return Function_178(&Global_11146, &Global_12992, bParam3);
								break;
							
							case 0x00000002:
								return Function_178(&Global_11120, &Global_12954, bParam3);
								break;
							
							default:
								return Function_178(&Global_11200, &Global_13072, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_178(&Global_11420, &Global_13398, bParam3);
								break;
							
							case 0x00000001:
								return Function_178(&Global_11222, &Global_13104, bParam3);
								break;
							
							case 0x00000003:
								return Function_178(&Global_11284, &Global_13196, bParam3);
								break;
							
							case 0x00000002:
								return Function_178(&Global_11398, &Global_13366, bParam3);
								break;
							
							case 0x00000004:
								return Function_178(&Global_11492, &Global_13504, bParam3);
								break;
							
							default:
								return Function_178(&Global_11482, &Global_13490, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_178(&Global_11544, &Global_13580, bParam3);
								break;
							
							case 0x00000001:
								return Function_178(&Global_11646, &Global_13732, bParam3);
								break;
							
							case 0x00000002:
								return Function_178(&Global_11704, &Global_13818, bParam3);
								break;
							
							default:
								return Function_178(&Global_11518, &Global_13542, bParam3);
								break;
						}
						break;
					
					case 0x00000003:
						switch (bVar1)
						{
							case 0x00000001:
								return Function_178(&Global_11752, &Global_13888, bParam3);
								break;
							
							default:
								return Function_178(&Global_11826, &Global_13998, bParam3);
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
								return Function_178(&Global_11836, &Global_14012, bParam3);
								break;
							
							case 0x00000001:
								return Function_178(&Global_11946, &Global_14176, bParam3);
								break;
							
							case 0x00000002:
								return Function_178(&Global_11988, &Global_14238, bParam3);
								break;
							
							default:
								return Function_178(&Global_12038, &Global_14312, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_178(&Global_12048, &Global_14326, bParam3);
								break;
							
							default:
								return Function_178(&Global_12274, &Global_14662, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000002:
								return Function_178(&Global_12284, &Global_14676, bParam3);
								break;
							
							case 0x00000001:
								return Function_178(&Global_12342, &Global_14762, bParam3);
								break;
							
							case 0x00000003:
								return Function_178(&Global_12392, &Global_14836, bParam3);
								break;
							
							default:
								return Function_178(&Global_12472, &Global_14954, bParam3);
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
		return Function_178(&Global_11014, &Global_12796, bParam3);
	}
	if (bVar1 == Global_46760[1])
	{
		return Function_178(&Global_11146, &Global_12992, bParam3);
	}
	if (bVar1 == Global_46760[2])
	{
		return Function_178(&Global_11120, &Global_12954, bParam3);
	}
	if (bVar1 == Global_46796[0])
	{
		return Function_178(&Global_11420, &Global_13398, bParam3);
	}
	if (bVar1 == Global_46796[1])
	{
		return Function_178(&Global_11222, &Global_13104, bParam3);
	}
	if (bVar1 == Global_46796[3])
	{
		return Function_178(&Global_11284, &Global_13196, bParam3);
	}
	if (bVar1 == Global_46796[2])
	{
		return Function_178(&Global_11398, &Global_13366, bParam3);
	}
	if (bVar1 == Global_46796[4])
	{
		return Function_178(&Global_11492, &Global_13504, bParam3);
	}
	if (bVar1 == Global_46816[0])
	{
		return Function_178(&Global_11544, &Global_13580, bParam3);
	}
	if (bVar1 == Global_46816[1])
	{
		return Function_178(&Global_11646, &Global_13732, bParam3);
	}
	if (bVar1 == Global_46816[2])
	{
		return Function_178(&Global_11704, &Global_13818, bParam3);
	}
	if (bVar1 == Global_46838[1])
	{
		return Function_178(&Global_11752, &Global_13888, bParam3);
	}
	if (bVar1 == Global_46850[0])
	{
		return Function_178(&Global_11836, &Global_14012, bParam3);
	}
	if (bVar1 == Global_46850[1])
	{
		return Function_178(&Global_11946, &Global_14176, bParam3);
	}
	if (bVar1 == Global_46850[2])
	{
		return Function_178(&Global_11988, &Global_14238, bParam3);
	}
	if (bVar1 == Global_46866[0])
	{
		return Function_178(&Global_12048, &Global_14326, bParam3);
	}
	if (bVar1 == Global_46894[2])
	{
		return Function_178(&Global_12284, &Global_14676, bParam3);
	}
	if (bVar1 == Global_46894[1])
	{
		return Function_178(&Global_12342, &Global_14762, bParam3);
	}
	if (bVar1 == Global_46894[3])
	{
		return Function_178(&Global_12392, &Global_14836, bParam3);
	}
	if (bVar1 == Global_46736[0])
	{
		return Function_178(&Global_11200, &Global_13072, bParam3);
	}
	if (bVar1 == Global_46736[1])
	{
		return Function_178(&Global_11482, &Global_13490, bParam3);
	}
	if (bVar1 == Global_46736[2])
	{
		return Function_178(&Global_11518, &Global_13542, bParam3);
	}
	if (bVar1 == Global_46736[3])
	{
		return Function_178(&Global_11826, &Global_13998, bParam3);
	}
	if (bVar1 == Global_46746[0])
	{
		return Function_178(&Global_12038, &Global_14312, bParam3);
	}
	if (bVar1 == Global_46746[2])
	{
		return Function_178(&Global_12274, &Global_14662, bParam3);
	}
	if (bVar1 == Global_46746[1])
	{
		return Function_178(&Global_12472, &Global_14954, bParam3);
	}
	return "";
}

var Function_178(struct<2>[] Param0, vector3[] vParam1, bool bParam2) //Position: 0xA77E / 42878
{
	int iVar0;
	
	iVar0 = bParam2;
	if (iVar0 <= Param0 || iVar0 > 0)
	{
		return "";
	}
	if (!Function_179(&(Param0[iVar02]), 2))
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

bool Function_179(var uParam0, int iParam1) //Position: 0xA7D8 / 42968
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_180(int iParam0) //Position: 0xA7F5 / 42997
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
			if (Function_181(GET_SQUAD_FROM_OBJECT(&iVar2)) == &iParam0)
			{
				iVar0++;
			}
			iVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
		}
	}
	DESTROY_ITERATOR(&uVar1);
	return iVar0;
}

int Function_181(int iParam0) //Position: 0xA85D / 43101
{
	var uVar0;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return 4294967295;
	}
	uVar0 = Function_182(&iParam0);
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

var Function_182(var uParam0) //Position: 0xA89B / 43163
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

struct<8> Function_183(vector3 vParam0) //Position: 0xA8E8 / 43240
{
	struct<2> Var0;
	
	Var0 = vParam0;
	Var0.f_4 = vParam0.y;
	Var0.f_8 = vParam0.z;
	return StackVal, Var0;
}

int Function_184(int iParam0, int iParam1) //Position: 0xA90A / 43274
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

bool Function_185(struct<2> Param0, int iParam2, bool bParam3) //Position: 0xA93C / 43324
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
	Function_187(4294967295);
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
			else if (Function_186(&Param0, &uVar0) > fVar4)
			{
				return 0;
			}
		}
		iVar2++;
	}
	return 1;
}

float Function_186(struct<2> Param0) //Position: 0xAA18 / 43544
{
	struct<2> Var0;
	bool bVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	bVar2 = VMAG(Var0);
	return bVar2;
}

int Function_187(int iParam0) //Position: 0xAA37 / 43575
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
						Function_188(iVar0);
					}
					else if (Global_6629)
					{
						if (Function_116(StackVal, &Global_54076, Var1) < 25.0f)
						{
							Function_188(iVar0);
						}
					}
					else if (Function_116(StackVal, &Global_54076, Var1) < 55.0f)
					{
						Function_188(iVar0);
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
			Function_188(iVar0);
		}
		iVar0++;
	}
	return 0;
}

void Function_188(int iParam0) //Position: 0xABA5 / 43941
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

bool Function_189(struct<2> Param0) //Position: 0xAC0D / 44045
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

int Function_190(struct<2> Param0) //Position: 0xACB2 / 44210
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

bool Function_191(struct<2> Param0) //Position: 0xAD00 / 44288
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

bool Function_192(struct<2> Param0) //Position: 0xAD5B / 44379
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

int Function_193(bool bParam0) //Position: 0xADDA / 44506
{
	float fVar0;
	bool bVar1;
	
	Function_142(&fVar0, &bVar1);
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER_PLAYER();
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	Function_196(0);
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
		Function_195(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, (&bParam0 + 72 + 84));
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
	Function_194(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&bParam0 + 72 + 84));
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

void Function_194(struct<33> Param0) //Position: 0xAF8C / 44940
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

void Function_195(struct<5> Param0, var uParam5, var uParam6, var uParam7) //Position: 0xB0B8 / 45240
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

void Function_196(float fParam0) //Position: 0xB109 / 45321
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

int Function_197(int iParam0, struct<2> Param1) //Position: 0xB150 / 45392
{
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER(Param1);
	if (Global_47151[34])
	{
		PRINTVECTOR(Param1);
		PRINTNL();
	}
	Function_199();
	Function_196(0);
	Function_198(0);
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
		Function_195(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iParam0 + 72 + 84));
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
	Function_194(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iParam0 + 72 + 84));
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

void Function_198(bool bParam0) //Position: 0xB305 / 45829
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

void Function_199() //Position: 0xB3B8 / 46008
{
	AMBIENT_SET_DISTANCE_FILTER(0.0f, 24.0f);
	return;
}

struct<8> Function_200(struct<2> Param0) //Position: 0xB3C7 / 46023
{
	var uVar0;
	var uVar3;
	float fVar4;
	bool bVar5;
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
	GET_POINT_FROM_CURVE_QUERY(&uVar7, false, &uVar0);
	uVar3 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(&uVar7, false);
	if (IS_OBJECT_VALID(&uVar3))
	{
		uVar12 = Param1;
		UNK_0x19D652F9(&uVar3, 50.0f, &uVar0, &iVar18);
		UNK_0x19D652F9(&uVar3, -50.0f, &uVar0, &iVar21);
		Function_183(&iVar18);
		uVar14 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Function_183(&iVar18), StackVal);
		Function_183(&iVar21);
		uVar16 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Function_183(&iVar21), StackVal);
		fVar11 = VDOT(&uVar12, &uVar14);
		fVar10 = VDOT(&uVar12, &uVar16);
		Function_142(&fVar4, &bVar5);
		fVar6 = ((fVar4 + bVar5) / 2.0f);
		if (fVar11 > 0.0f && fVar10 > 0.0f)
		{
			UNK_0xDF93BD7C(&uVar7);
			Var8 = Vector(0.0f, 0.0f, 0.0f);
			return StackVal, Var8;
		}
		if (fVar11 > fVar10)
		{
			UNK_0x19D652F9(&uVar3, (fVar6 * -1.0f), &uVar0, &iVar21);
			Function_183(&iVar21);
			Var8 = Function_183(&iVar21);
		}
		else
		{
			UNK_0x19D652F9(&uVar3, fVar6, &uVar0, &iVar18);
			Function_183(&iVar18);
			Var8 = Function_183(&iVar18);
		}
	}
	UNK_0xDF93BD7C(&uVar7);
	return StackVal, Var8;
}

int Function_201(struct<2> Param0, struct<5> Param2) //Position: 0xB4E1 / 46305
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
		if (!Function_170(StackVal, Param2))
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
			if (!Function_170(StackVal, Param2))
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
		WAIT(false);
	}
	return 0;
}

bool Function_202(bool bParam0) //Position: 0xB624 / 46628
{
	if (bParam0 > 0 || bParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_203(var uParam0, struct<2> Param1, float fParam3, int iParam4, var uParam5) //Position: 0xB63A / 46650
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
						if (Function_185(&Var5, &fVar4, 0, 0))
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

var Function_204(var uParam0, struct<2> Param1, float fParam3) //Position: 0xB6EF / 46831
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
				if (Function_185(&Var5, &uVar4, 0, 0))
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

var Function_205(var uParam0, struct<2> Param1, float fParam3, int iParam4, var uParam5) //Position: 0xB781 / 46977
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

var Function_206(var uParam0, struct<2> Param1, float fParam3) //Position: 0xB823 / 47139
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

int Function_207(int iParam0) //Position: 0xB8A9 / 47273
{
	if (IS_ITERATOR_VALID(&iParam0))
	{
		ITERATE_EVERYWHERE(&iParam0);
		ITERATE_ON_PARTIAL_NAME(&iParam0, Function_236());
		ITERATE_ON_PARTIAL_MODEL_NAME(&iParam0, Function_236());
		ITERATE_ON_OBJECT_TYPE(&iParam0, 4294967295);
		return 1;
	}
	return 0;
}

int Function_208(var uParam0, int iParam1) //Position: 0xB8DF / 47327
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
	Function_187(DECOR_GET_INT(&uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
		}
		else
		{
			Function_209(iVar0, &uParam0, &uVar1, &iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(&uParam0);
	return 0;
}

void Function_209(int iParam0, var uParam1, struct<2> Param2) //Position: 0xBA49 / 47689
{
	struct<8> Var0;
	
	*(&Global_39621[iParam05] + 16) = &uParam1;
	Global_39621[iParam05].f_32 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_212("stayout") };
	*(&Global_39621[iParam05] + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Param2, Vector(0.0f, 0.0f, 0.0f), Vector(12.0f, 5.0f, 12.0f));
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&Global_39621[iParam05] + 24, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&Global_39621[iParam05] + 24);
	if (&bParam3)
	{
		*(&Global_39621[iParam05] + 8) = ADD_BLIP_FOR_COORD(&Param2, 403, 0, 2, 0);
		SET_BLIP_BLINK(&Global_39621[iParam05] + 8, 1, 1, 20.0f);
	}
}

var Function_210(var uParam0, struct<2> Param1) //Position: 0xBAF1 / 47857
{
	struct<2> Var0;
	var uVar2;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		GET_POSITION(&uParam0, &Var0);
		Function_211(StackVal, StackVal, Var0, Param1, &uVar2);
		return UNK_0x9C40E671(&uVar2);
	}
	return 0.0f;
}

void Function_211(var uParam0, float fParam1, float fParam2, float fParam3, var uParam4) //Position: 0xBB1F / 47903
{
	uParam4 = Vector((GET_X(&fParam2) - GET_X(&uParam0)), 0.0f, (GET_Z(&fParam2) - GET_Z(&uParam0)));
}

struct<32> Function_212(char* cParam0) //Position: 0xBB43 / 47939
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_213("0", &cVar8, ""), 4);
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

struct<32> Function_213(char* cParam0) //Position: 0xBBAF / 48047
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_214(struct<2>[] Param0) //Position: 0xBBD1 / 48081
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_218();
	iVar1 = 0;
	if (!Function_4(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_217(&(Param0[iVar02]), 8);
		}
		else if (Function_216())
		{
			iVar1 = 1;
			Function_217(&(Param0[iVar02]), 8);
		}
		Function_217(&(Param0[iVar02]), 16);
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
				Function_217(&(Param0[iVar02]), 1);
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
							Function_217(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_217(&(Param0[iVar02]), 2);
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
							Function_217(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_217(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_217(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_217(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_217(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_217(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_217(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_217(&(Param0[iVar02]), 2);
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
	Function_215();
	return 1;
}

void Function_215() //Position: 0xBF93 / 49043
{
	if (!Function_82(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_216() //Position: 0xBFD3 / 49107
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

void Function_217(struct<13> Param0) //Position: 0xC002 / 49154
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_218() //Position: 0xC015 / 49173
{
	if (!Function_82(128))
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

void Function_219(var[] uParam0, int iParam1) //Position: 0xC057 / 49239
{
	int iVar0;
	
	if (&iParam1 == 4294967295)
	{
		iParam1 = uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= &iParam1)
	{
		Function_220(&(uParam0[iVar0]));
		iVar0++;
	}
	return;
}

void Function_220(int iParam0) //Position: 0xC089 / 49289
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
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 0, true);
			MEMORY_ALLOW_SHOOTING(&iParam0, 1);
		}
	}
	return;
}

void Function_221(var[] uParam0, int iParam1) //Position: 0xC0D2 / 49362
{
	int iVar0;
	
	if (&iParam1 == 4294967295)
	{
		iParam1 = uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= &iParam1)
	{
		Function_222(&(uParam0[iVar0]));
		iVar0++;
	}
	return;
}

void Function_222(int iParam0) //Position: 0xC104 / 49412
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
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 0, false);
			MEMORY_ALLOW_SHOOTING(&iParam0, 0);
		}
	}
	return;
}

bool Function_223(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xC14E / 49486
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

void Function_224(var[] uParam0) //Position: 0xC1C6 / 49606
{
	if (IS_ACTOR_VALID(&(uParam0[0])))
	{
		Function_161(&(uParam0[0]));
		Local_78[02] = Function_161(&(uParam0[0]));
	}
	if (IS_ACTOR_VALID(&(uParam0[1])))
	{
		Function_161(&(uParam0[1]));
		Local_78[12] = Function_161(&(uParam0[1]));
	}
	if (IS_ACTOR_VALID(&iParam1))
	{
		Function_161(&iParam1);
		Local_75 = Function_161(&iParam1);
	}
	return;
}

void Function_225(var uParam0, int iParam1) //Position: 0xC218 / 49688
{
	return;
}

void Function_226(int iParam0, int iParam1) //Position: 0xC21E / 49694
{
	iParam0 = (iParam0 || iParam1);
	return;
}

bool Function_227(int iParam0) //Position: 0xC22F / 49711
{
	if (!iParam0 != 0)
	{
		LOG_ERROR("Asking about a player with an index not = 0. Multiplayer Law Enforcement not yet implemented.");
		return 0;
	}
	return Global_6646;
}

var Function_228(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0xC2A5 / 49829
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_229(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_217(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_229(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0xC2E3 / 49891
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_4(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_217(&(Param0[iVar02]), 4);
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

void Function_230(var[] uParam0, int iParam1) //Position: 0xC3B2 / 50098
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

var Function_231(struct<2>[] Param0, int iParam1, int iParam2, bool bParam3) //Position: 0xC3D5 / 50133
{
	int iVar0;
	
	iParam2 = &iParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_4(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = iParam1;
			Param0[iVar02].f_8 = 3;
			Function_217(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_217(&(Param0[iVar02]), 8);
			}
			return iVar0;
		}
		if (iParam1 == &Param0[iVar02])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

var Function_232(int iParam0, int iParam1) //Position: 0xC4B1 / 50353
{
	int iVar0;
	
	iVar0 = (Global_26652[iParam04].f_16 % iParam1);
	return iVar0;
}

var Function_233(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xC4C7 / 50375
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
		fVar0 = (fVar0 * (0,75f + ((TO_FLOAT(Function_44(5)) / 100.0f) * 0,5f)));
	}
	if (&bParam3)
	{
		if (HAS_ITEM(Function_71(17), &Global_54076))
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

void Function_234(vector3 vParam0) //Position: 0xC5CE / 50638
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_226(&vParam0, 1);
	Function_59(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_235(var uParam0) //Position: 0xC5F3 / 50675
{
	if (!Function_129(&uParam0))
	{
		Function_234(&uParam0, 0.0f);
	}
	return;
}

var Function_236() //Position: 0xC60A / 50698
{
	var uVar0;
	
	return &uVar0;
}

