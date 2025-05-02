//Decompiled with MagicRDR v1.0
//Function Count : 233
//Statics Count : 184
//Natives Count : 460
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
	bool bLocal_23 = false;
	int iLocal_24[3] = { 0, 0, 0 };
	vector3 vLocal_28 = { 0.0f, 0.0f, 0.0f };
	float fLocal_31 = 0.0f;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	bool bLocal_34 = false;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	bool bLocal_39 = false;
	bool bLocal_40 = false;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	bool bLocal_49 = false;
	bool bLocal_50 = false;
	float fLocal_51 = 0.0f;
	float fLocal_52 = 0.0f;
	bool bLocal_53 = false;
	bool bLocal_54 = false;
	vector3 vLocal_55 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_58[2] = {{ 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } };
	bool bLocal_65 = false;
	bool bLocal_66 = false;
	int iLocal_67 = 0;
	var uLocal_68 = 0;
	int iLocal_69 = 0;
	bool bLocal_70 = false;
	bool bLocal_71[2] = { false, false };
	var uLocal_74 = 0;
	bool bLocal_75 = false;
	bool bLocal_76 = false;
	bool bLocal_77 = false;
	bool bLocal_78 = false;
	bool bLocal_79 = false;
	bool bLocal_80 = false;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	bool bLocal_88 = false;
	bool bLocal_89 = false;
	int iLocal_90 = 0;
	bool bLocal_91 = false;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	bool bLocal_94 = false;
	bool bLocal_95 = false;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	vector3 vLocal_99 = { 0.0f, 0.0f, 0.0f };
	int iLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	vector3 vLocal_108 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_111 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_114 = { 0.0f, 0.0f, 0.0f };
	bool bLocal_117 = false;
	int iLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	int iLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	struct<57> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	bool bVar1;
	var uVar3[3];
	var uVar7;
	bool bVar17;
	var uVar69;
	vector3 vVar70;
	vector3 vVar73;
	int iVar76;
	int iVar77;
	vector3 vVar78;
	vector3 vVar81;
	vector3 vVar84;
	struct<9> Var87;
	int iVar100;
	vector3 vVar101;
	bool bVar107;
	var uVar111;
	var uVar112;
	int iVar113;
	var uVar114;
	vector3 vVar117;
	var uVar120;
	int iVar121;
	vector3 vVar126;
	void fVar129;
	vector3 vVar130;
	vector3 vVar133;
	var uVar136;
	vector3 vVar137;
	vector3 vVar140;
	vector3 vVar143;
	vector3 vVar146;
	bool bVar149;
	int iVar150;
	bool bVar151;
	
	iLocal_14 = 0;
	iLocal_15 = 0;
	bLocal_23 = false;
	vLocal_28 = { 0,75f, 0.0f, -3.0f };
	fLocal_31 = 0.0f;
	iLocal_33 = 0;
	bLocal_34 = false;
	iLocal_35 = 0;
	iLocal_36 = 0;
	iLocal_37 = 0;
	iLocal_38 = 0;
	iLocal_41 = 0;
	iLocal_42 = 0;
	iLocal_69 = 0;
	bLocal_76 = false;
	bLocal_88 = false;
	bLocal_89 = false;
	iLocal_90 = 0;
	iLocal_93 = 0;
	bLocal_95 = false;
	iLocal_97 = 0;
	iLocal_98 = 0;
	vLocal_108 = { -0,76f, 1,43f, 0,37f };
	vLocal_111 = { -7,03f, -9,45f, 0.0f };
	iLocal_118 = 0;
	iLocal_121 = 0;
	iLocal_128 = 0;
	iVar0 = 0;
	bVar1 = CREATE_LAYOUT(Function_232());
	uVar7 = 3;
	bVar17 = 17;
	Function_231(&uLocal_81);
	Function_230(&uLocal_81, 0.0f);
	uVar69 = Function_229(0, 1, 1, 0, 0);
	vVar73 = { StackVal, StackVal, Vector(*(&ScriptParam_0 + 20), StackVal, StackVal) + Vector(0.0f, 180.0f, 0.0f) };
	iVar76 = Function_228(38, 3);
	switch (Global_29004)
	{
		case 0x00000000:
			if (iVar76 == 0)
			{
				iLocal_24[0] = 9;
				iLocal_24[1] = 417;
				iLocal_24[2] = 415;
			}
			else if (iVar76 == 1)
			{
				iLocal_24[0] = 16;
				iLocal_24[1] = 423;
				iLocal_24[2] = 421;
			}
			else
			{
				iLocal_24[0] = 99;
				iLocal_24[1] = 403;
				iLocal_24[2] = 405;
			}
			break;
		
		case 0x00000001:
			if (iVar76 == 0)
			{
				iLocal_24[0] = 289;
				iLocal_24[1] = 412;
				iLocal_24[2] = 409;
			}
			else if (iVar76 == 1)
			{
				iLocal_24[0] = 306;
				iLocal_24[1] = 409;
				iLocal_24[2] = 410;
			}
			else
			{
				iLocal_24[0] = 289;
				iLocal_24[1] = 409;
				iLocal_24[2] = 411;
			}
			break;
		
		case 0x00000002:
			if (iVar76 == 0)
			{
				iLocal_24[0] = 9;
				iLocal_24[1] = 417;
				iLocal_24[2] = 403;
			}
			else if (iVar76 == 1)
			{
				iLocal_24[0] = 16;
				iLocal_24[1] = 423;
				iLocal_24[2] = 421;
			}
			else
			{
				iLocal_24[0] = 99;
				iLocal_24[1] = 403;
				iLocal_24[2] = 405;
			}
			break;
	}
	Function_227(&bVar17, iLocal_24[0], 3, 0);
	Function_227(&bVar17, iLocal_24[1], 3, 0);
	Function_227(&bVar17, iLocal_24[2], 3, 0);
	Function_227(&bVar17, 981, 3, 0);
	Function_226(&iLocal_24, 3);
	Function_224(&bVar17, "treasure_hunting_book", 1, 0);
	Function_224(&bVar17, "smoking_stand_loose", 1, 0);
	Function_224(&bVar17, "Treasure_hunter_handoff", 1, 0);
	Function_224(&bVar17, "loot_corpse_solo_male", 1, 0);
	Function_224(&bVar17, "treasure_hunter_handoff", 5, 0);
	Function_224(&bVar17, "custom/treasure_hunter_handoff", 8, 0);
	Function_224(&bVar17, "nthank_you", 5, 0);
	Function_224(&bVar17, "custom/thank_you", 8, 0);
	vVar78.f_8 = -7.0f;
	vVar81.x = 10.0f;
	vVar81.f_8 = 2.0f;
	vVar84.x = -1,5f;
	vVar84.f_8 = -0,5f;
	vVar87 = -2.0f;
	vVar87.f_8 = -3.0f;
	iVar100 = 0;
	iVar121 = 0;
	vVar137 = { StackVal, StackVal, Vector(*(&ScriptParam_0 + 20), StackVal, StackVal) + Vector(0.0f, 180.0f, 0.0f) };
	vVar140 = { StackVal, StackVal, Vector(*(&ScriptParam_0 + 8), StackVal, StackVal) + Vector(7.0f, 0.0f, 0.0f) };
	vVar143 = { StackVal, StackVal, Vector(vVar140, StackVal, StackVal) + Vector(0.0f, 0.0f, -1,8f) };
	Function_224(&bVar17, "$/tune/refGroups/battleSets/treasureHunter01", 7, 0);
	if (Global_3382 == 1)
	{
		iVar0 = 5;
	}
	if (Function_223(0))
	{
		iVar0 = 5;
	}
	iVar150 = 0;
	bVar151 = false;
	Function_222(&iLocal_41, 1);
	Function_222(&iLocal_41, 16);
	while (!IS_EXITFLAG_SET())
	{
		if (iVar0 >= 1)
		{
			vVar140 = { StackVal, StackVal, Vector(*(&ScriptParam_0 + 8), StackVal, StackVal) + Vector(7.0f, 0.0f, 0.0f) };
			vVar143 = { StackVal, StackVal, Vector(vVar140, StackVal, StackVal) + Vector(0.0f, 0.0f, -1,8f) };
			Function_221(StackVal, StackVal, vVar73);
		}
		GET_POSITION(Global_34573, &vVar101);
		Function_220(&bVar91, bVar90);
		bVar149 = 600;
		if (iLocal_90 == 0)
		{
			if (Function_219(&bVar151, &iVar0, &iVar150, &bVar149, bLocal_23))
			{
				if (bVar151)
				{
					Function_218(&bLocal_40);
					Function_218(&bVar90);
					Function_217(&bVar91, 4294967295);
					if (IS_ACTOR_VALID(bLocal_40))
					{
						AI_DONT_HARM_ACTOR(bLocal_40);
					}
					if (IS_ACTOR_VALID(bVar90))
					{
						AI_DONT_HARM_ACTOR(bVar90);
					}
					if (IS_ACTOR_VALID(bVar91[0]))
					{
						AI_DONT_HARM_ACTOR(bVar91[0]);
					}
					if (IS_ACTOR_VALID(bVar91[1]))
					{
						AI_DONT_HARM_ACTOR(bVar91[1]);
					}
				}
				else
				{
					Function_216(&bLocal_40);
					Function_216(&bVar90);
					Function_215(&bVar91, 4294967295);
					if (IS_ACTOR_VALID(bLocal_40))
					{
						AI_CLEAR_DONT_HARM_ACTOR(bLocal_40);
					}
					if (IS_ACTOR_VALID(bVar90))
					{
						AI_CLEAR_DONT_HARM_ACTOR(bVar90);
					}
					if (IS_ACTOR_VALID(bVar91[0]))
					{
						AI_CLEAR_DONT_HARM_ACTOR(bVar91[0]);
					}
					if (IS_ACTOR_VALID(bVar91[1]))
					{
						AI_CLEAR_DONT_HARM_ACTOR(bVar91[1]);
					}
				}
			}
		}
		switch (iVar0)
		{
			case 0x00000000:
				if (Function_210(&bVar17))
				{
					iVar0 = 1;
				}
				bVar149 = 600;
				break;
			
			case 0x00000001:
				if (Function_170(&ScriptParam_0, &bVar149, &iLocal_38, &iLocal_33, 1))
				{
					if (VDIST(vVar101, *(&ScriptParam_0 + 8)) > Function_169())
					{
						iVar0 = 5;
						bVar149 = false;
						break;
					}
					if (Function_168(3) > 1)
					{
						iLocal_45 = 0;
					}
					else
					{
						iLocal_45 = 1;
					}
					bLocal_117 = CREATE_VOLUME_IN_LAYOUT(bVar1, Function_232(), false, *(&ScriptParam_0 + 8), 0.0f, 0.0f, 0.0f, 10.0f, 5.0f, 10.0f);
					ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_117);
					ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_117);
					Function_167(&ScriptParam_0 + 8, 3.0f, &vVar117, &uVar114, &uVar120);
					if (!Function_166(StackVal, StackVal, vVar117))
					{
						bLocal_80 = Function_165(StackVal, StackVal, bVar1, Function_232(), "$/tune/refGroups/battleSets/treasureHunter01", vVar117, 0.0f, 0.0f, 0.0f, 4294967295);
						fLocal_51 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, bVar1, Vector(vVar117, 2, "Cart Volume") + Vector(-0,75f, 0.0f, 1,1f), 0.0f, 0.0f, 0.0f, 1,8f, 3.0f, 2,8f);
						fLocal_52 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, bVar1, Vector(vVar117, 2, "Cart Volume Little") + Vector(1.0f, 0.0f, 1.0f), 0.0f, 0.0f, 0.0f, 0,4f, 3.0f, 1.0f);
					}
					else
					{
						bLocal_80 = Function_165(StackVal, StackVal, bVar1, Function_232(), "$/tune/refGroups/battleSets/treasureHunter01", *(&ScriptParam_0 + 8), 0.0f, 0.0f, 0.0f, 4294967295);
						fLocal_51 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, bVar1, Vector(*(&ScriptParam_0 + 8), 2, "Cart Volume") + Vector(-0,75f, 0.0f, 1,1f), 0.0f, 0.0f, 0.0f, 1,8f, 3.0f, 2,8f);
						fLocal_52 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, bVar1, Vector(vVar117, 2, "Cart Volume Little") + Vector(1.0f, 0.0f, 1.0f), 0.0f, 0.0f, 0.0f, 0,4f, 3.0f, 1.0f);
					}
					if (IS_OBJECT_VALID(bLocal_80))
					{
						Function_164();
						iVar0 = 2;
						bVar149 = false;
					}
					else
					{
						iVar0 = 5;
						bVar149 = false;
					}
				}
				else if (iLocal_33 == 1)
				{
					iVar0 = 5;
					bVar149 = false;
				}
				break;
			
			case 0x00000002:
				bVar107 = CREATE_VOLUME_IN_LAYOUT(bVar1, Function_232(), false, *(&ScriptParam_0 + 8), 0.0f, 0.0f, 0.0f, 30.0f, 30.0f, 30.0f);
				bLocal_40 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_232(), bVar1, StackVal) + Vector(vVar78, *(&ScriptParam_0 + 8), 981), 0.0f, 180.0f, 0.0f);
				ACCESSORIZE_HORSE(bLocal_40, 3);
				SNAP_OBJECT_TO_GROUND(bLocal_40, 2.0f, true, 1092616192);
				Function_163();
				SET_ACTOR_UNKILLABLE(bLocal_40, 1);
				SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_40, bVar107, 2, true);
				bLocal_39 = GET_ACTOR_HEALTH(bVar90);
				bLocal_39 = (bLocal_39 + 1000.0f);
				SET_ACTOR_MAX_HEALTH(bVar90, bLocal_39);
				SET_ACTOR_HEALTH(bVar90, bLocal_39);
				iVar113 = 4294967295;
				Function_161(StackVal, StackVal, &uVar111, &uVar112, &iVar113, 6.0f, *(&ScriptParam_0 + 8));
				vVar146 = { StackVal, StackVal, Vector(*(&ScriptParam_0 + 8), StackVal, StackVal) + Vector(-4,2f, 0.0f, 0.0f) };
				iVar113 = CLEAR_AREA_OF_GRASS(vVar146, 1,2f);
				iVar0 = 4;
				bVar149 = false;
				break;
			
			case 0x00000004:
				iVar77 = 0;
				while (iVar77 <= 3)
				{
					if (iVar77 == 0)
					{
						bVar90 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_232(), bVar1, StackVal) + Vector(vVar84, *(&ScriptParam_0 + 8), iLocal_24[iVar77]), 0.0f, 0.0f, 180.0f);
						SNAP_OBJECT_TO_GROUND(bVar90, 6.0f, true, 1092616192);
						GIVE_WEAPON_TO_ACTOR(bVar90, 40, 0,5f, 1, 1);
						bLocal_53 = CREATE_OBJECTSET_IN_LAYOUT("UnderCartCheck", bVar1, 12, 1);
						DECOR_SET_OBJECT(bVar90, "lootCorpse_objSet", GET_OBJECT_FROM_OBJECTSET(bLocal_53));
						fVar94[0] = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_232(), bVar1, StackVal) + Vector(vVar81, *(&ScriptParam_0 + 8), 2), 0.0f, 0.0f, 0.0f, 3.0f, 3.0f, 3.0f);
						SET_ACTOR_STAY_WITHIN_VOLUME(bVar91[0], fVar94[0], 1, false);
						SET_ACTOR_VISION_XRAY(bVar90, true);
						bLocal_70 = CREATE_OBJECTSET_IN_LAYOUT("ObjsetName", bVar1, 4294967295, 0);
						DECOR_SET_OBJECT(bVar90, "ReturnCorpse", bLocal_70);
						SET_ACTOR_CAN_PLAY_GESTURES(bVar90, false);
						SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bVar90, 0,5f);
						if (iLocal_45 == 1)
						{
							DECOR_SET_INT(bVar90, "iSpecificItem", 11);
						}
						else
						{
							Function_160(bVar90, Function_229(1, 1, 1, 0, 0));
						}
						SET_ACTOR_CAN_BE_HARDLOCKED(bVar90, 0);
						AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar90, true);
					}
					else if (iVar77 == 1)
					{
						bVar91[0] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_232(), bVar1, StackVal) + Vector(vVar81, *(&ScriptParam_0 + 8), iLocal_24[iVar77]), 0.0f, 0.0f, 0.0f);
						SNAP_OBJECT_TO_GROUND(bVar91[0], 6.0f, true, 1092616192);
						DELETE_ALL_WEAPONS_FROM_ACTOR(bVar91[0]);
						GIVE_WEAPON_TO_ACTOR(bVar91[0], 40, 0,5f, 1, 1);
						SET_ACTOR_UPDATE_PRIORITY(bVar91[0], false);
						SET_ACTOR_CAN_PLAY_GESTURES(bVar91[0], false);
						bLocal_71[0] = CREATE_OBJECTSET_IN_LAYOUT("ObjsetName", bVar1, 4294967295, 0);
						DECOR_SET_OBJECT(bVar91[0], "ReturnCorpse", bLocal_71[0]);
						vVar81.f_8 = (vVar81.z + 4.0f);
						TASK_POINT_GUN_AT_OBJECT(bVar91[0], bVar90, -1.0f, 0);
					}
					else
					{
						bVar91[1] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_232(), bVar1, StackVal) + Vector(vVar81, *(&ScriptParam_0 + 8), iLocal_24[iVar77]), 0.0f, 0.0f, 0.0f);
						if (!STREAMING_ARE_BOUNDS_LOADED(Vector(*(&ScriptParam_0 + 8), StackVal, StackVal) + Vector(3.0f, 0.0f, 3.0f), 3.0f))
						{
						}
						bLocal_71[1] = CREATE_OBJECTSET_IN_LAYOUT("ObjsetName", bVar1, 4294967295, 0);
						DECOR_SET_OBJECT(bVar91[0], "ReturnCorpse", bLocal_71[1]);
						SET_ACTOR_UPDATE_PRIORITY(bVar91[1], false);
						SNAP_OBJECT_TO_GROUND(bVar91[1], 6.0f, true, 1092616192);
						DELETE_ALL_WEAPONS_FROM_ACTOR(bVar91[1]);
						GIVE_WEAPON_TO_ACTOR(bVar91[1], 40, 0,5f, 1, 1);
						TASK_POINT_GUN_AT_OBJECT(bVar91[1], bVar90, -1.0f, 0);
						SET_ACTOR_CAN_PLAY_GESTURES(bVar91[1], false);
						fVar94[1] = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_232(), bVar1, StackVal) + Vector(vVar81, *(&ScriptParam_0 + 8), 2), 0.0f, 0.0f, 0.0f, 3.0f, 3.0f, 3.0f);
						SET_ACTOR_STAY_WITHIN_VOLUME(bVar91[1], fVar94[1], 1, false);
					}
					SET_ACTOR_ALLOW_BUMP_REACTIONS(uVar3[iVar77], 0);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(uVar3[iVar77], true);
					iVar77++;
				}
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar90, 13, true);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar91[0], 13, true);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar91[1], 13, true);
				MEMORY_CONSIDER_AS_ENEMY(bVar90, bVar91[0]);
				MEMORY_CONSIDER_AS_ENEMY(bVar90, bVar91[1]);
				Function_159(bVar90, bVar91[0], 4, 1);
				Function_159(bVar90, bVar91[1], 4, 1);
				MEMORY_IDENTIFY(bVar90, bVar91[0]);
				MEMORY_IDENTIFY(bVar90, bVar91[1]);
				if (bLocal_78 == "")
				{
					if (IS_LAYOUTREF_VALID(bVar1))
					{
						bLocal_78 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_232(), bVar90, StackVal) + Vector(vLocal_28, *(&ScriptParam_0 + 8), "$/content/scripting/gringo/SimpleGringo/smoking_stand_loose"), vVar137);
						SNAP_OBJECT_TO_GROUND(bLocal_78, 4.0f, true, 1092616192);
						GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bLocal_78), false);
					}
				}
				Function_158(bLocal_80);
				vVar126 = { StackVal, StackVal, Vector(Function_158(bLocal_80), StackVal, StackVal) + Vector(1,2f, 0.0f, 0,25f) };
				fVar129 = CREATE_COVER_LOCATION_IN_LAYOUT(bVar1, Function_232(), vVar126, 90.0f, 0.0f, 90.0f, 1);
				SNAP_OBJECT_TO_GROUND(fVar129, 0,5f, true, 1092616192);
				TASK_SHOOT_ENEMIES_FROM_COVER(bVar90, GET_COVER_LOCATION_FROM_OBJECT(fVar129), -1.0f, 1086324736);
				TASK_PRIORITY_SET(bVar90, true);
				Function_157(bVar91[0]);
				vVar130 = { StackVal, StackVal, Function_157(bVar91[0]) };
				TASK_SHOOT_ENEMIES_FROM_POSITION(bVar91[0], &vVar130, 0.0f, 3212836864);
				Function_157(bVar91[1]);
				vVar133 = { StackVal, StackVal, Function_157(bVar91[1]) };
				TASK_SHOOT_ENEMIES_FROM_POSITION(bVar91[1], &vVar133, 0.0f, 3212836864);
				SET_ACTOR_VISION_XRAY(bVar91[0], true);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar91[0], 16, true);
				SET_ACTOR_VISION_XRAY(bVar91[1], true);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar91[1], 16, true);
				SET_ACTOR_VISION_XRAY(bVar90, true);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar90, 16, true);
				AI_GOAL_LOOK_AT_ACTOR(bVar91[0], bVar90, 1, 1065353216, 3212836864, 3212836864, 0);
				PRINTVECTOR(*(&ScriptParam_0 + 8));
				PRINTNL();
				PRINTVECTOR(vVar101);
				PRINTNL();
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar90, 0);
				UNK_0x99AFD2D1(bVar90, 1, 1);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar91[0], 0);
				UNK_0x99AFD2D1(bVar91[0], 1, 1);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar91[1], 0);
				UNK_0x99AFD2D1(bVar91[1], 1, 1);
				if ((Function_155(bVar91[0], 0) && Function_155(bVar91[1], 0)) && Function_155(bVar90, 0))
				{
					iVar0 = 3;
					bVar149 = false;
				}
				else
				{
					iVar0 = 5;
					bVar149 = false;
				}
				break;
			
			case 0x00000003:
				Function_154();
				Function_153(&bVar91, 2, &bLocal_23, ScriptParam_0.f_56, 100, 0x42a00000, 1);
				Function_152();
				Function_139(StackVal, StackVal, Function_152(), &bLocal_23, ScriptParam_0.f_56, bVar90, 100, 0x42a00000, 1);
				if (GET_DEBUG_DRAW_STATE())
				{
				}
				if (iVar100 == 12 && iVar100 == 5)
				{
					if (VDIST(vVar101, *(&ScriptParam_0 + 8)) < Function_137(1) && !bLocal_34)
					{
						iVar0 = 5;
						bVar149 = false;
						break;
					}
				}
				if (Function_168(3) > 1)
				{
					if (!Function_155(bVar90, 1))
					{
						if (!Function_155(bVar91[0], 0))
						{
							if (!Function_155(bVar91[1], 0))
							{
								iVar0 = 5;
								bVar149 = false;
								break;
							}
						}
					}
				}
				if (iVar100 <= 4)
				{
					if (Function_134(bVar90, &uLocal_87, &fLocal_31, iLocal_41, iLocal_37, 0x40400000))
					{
						Function_132(&bVar91, &bVar90);
						if (IS_ACTOR_VALID(bVar91[0]))
						{
							COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar91[0], 13, false);
						}
						if (IS_ACTOR_VALID(bVar91[1]))
						{
							COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar91[1], 13, false);
						}
						iVar100 = 4;
					}
					else if (Function_131(&bVar91, 2, &uVar136, &uLocal_87, &fLocal_31, iLocal_41, iLocal_35, 0x40200000))
					{
						Function_132(&bVar91, &bVar90);
						if (IS_ACTOR_VALID(bVar91[0]))
						{
							COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar91[0], 13, false);
						}
						if (IS_ACTOR_VALID(bVar91[1]))
						{
							COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar91[1], 13, false);
						}
						iVar100 = 4;
					}
				}
				else
				{
					if (iVar100 >= 5)
					{
						if (Function_134(bVar90, &uLocal_87, &fLocal_31, iLocal_41, iLocal_36, 0x40400000))
						{
							Function_130(bLocal_66);
							AI_QUICK_EXIT_GRINGO(bVar90, 1);
							TASK_FLEE_ACTOR(bVar90, Global_34573, -1.0f, -1.0f, 0, 0, 0);
							iLocal_36 = 1;
						}
					}
					Function_131(&bVar91, 2, &uVar136, &uLocal_87, &fLocal_31, iLocal_41, iLocal_35, 0x40200000);
				}
				if (Function_24(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &iVar100, &bVar91, bVar90, bVar1, &bVar149, ScriptParam_0, vVar70, vVar73, uVar69))
				{
					iVar0 = 5;
					bVar149 = false;
				}
				break;
			
			case 0x00000005:
				iVar0 = 6;
				bVar149 = false;
				break;
			
			case 0x00000006:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				bVar149 = false;
				break;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(bVar149);
		}
	}
	if (bLocal_95)
	{
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	}
	if (IS_ACTOR_VALID(bVar91[0]))
	{
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(bVar91[0]);
	}
	if (IS_ACTOR_VALID(bVar91[1]))
	{
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(bVar91[1]);
	}
	Function_216(&bLocal_40);
	Function_216(&bVar90);
	Function_215(&bVar91, 4294967295);
	if (IS_ACTOR_VALID(bLocal_40))
	{
		AI_CLEAR_DONT_HARM_ACTOR(bLocal_40);
	}
	if (IS_ACTOR_VALID(bVar90))
	{
		AI_CLEAR_DONT_HARM_ACTOR(bVar90);
	}
	if (IS_ACTOR_VALID(bVar91[0]))
	{
		AI_CLEAR_DONT_HARM_ACTOR(bVar91[0]);
	}
	if (IS_ACTOR_VALID(bVar91[1]))
	{
		AI_CLEAR_DONT_HARM_ACTOR(bVar91[1]);
	}
	if (!bLocal_23)
	{
		Function_21(ScriptParam_0.f_56, 0.0f, 0, 1, 0);
	}
	if (ScriptParam_0.f_32)
	{
		Global_3399 = 0;
	}
	if (IS_BLIP_VALID(bLocal_77))
	{
		REMOVE_BLIP(bLocal_77);
	}
	iVar77 = 0;
	while (iVar77 <= 2)
	{
		Function_19(bVar91[iVar77]);
		iVar77++;
	}
	if (!bLocal_23)
	{
		Function_18(&bLocal_40);
		Function_18(&bVar90);
		Function_17(&bVar91, 4294967295);
		if (IS_OBJECT_VALID(bVar1))
		{
			UNK_0xA936E73B(bVar1, 1);
			MARK_OBJECT_FOR_AGGRESSIVE_CLEANUP(bVar1, 1);
		}
	}
	else
	{
		if (Function_155(bVar90, 0))
		{
			ACTOR_END_FORCE_HOLSTER(bVar90);
			AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar90, 1);
			UNK_0x99AFD2D1(bVar90, 0, 0);
			if (iLocal_118 == 0)
			{
				MEMORY_CLEAR_EVENTS(bVar90, 1);
				MEMORY_CLEAR_ALL(bVar90);
				Function_8(bVar90, 2, Global_34573, 2);
				AI_STOP_IGNORING_ACTOR(bLocal_40);
				iLocal_67 = 1;
			}
			if (iLocal_67 == 0)
			{
				Function_7(bVar90);
			}
		}
		if (Function_155(bVar91[0], 0))
		{
			MEMORY_CONSIDER_AS_ENEMY(bVar91[0], Global_34573);
			Function_8(bVar91[0], 2, 0, 2);
			AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar91[0], 1);
			UNK_0x99AFD2D1(bVar91[0], 0, 0);
		}
		if (Function_155(bVar91[1], 0))
		{
			MEMORY_CONSIDER_AS_ENEMY(bVar91[1], Global_34573);
			Function_8(bVar91[1], 2, 0, 2);
			AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar91[1], 1);
			UNK_0x99AFD2D1(bVar91[1], 0, 0);
		}
		if (Function_155(bLocal_40, 0))
		{
			SET_ACTOR_UNKILLABLE(bLocal_40, 0);
			TASK_STAND_STILL(bLocal_40, -1.0f, 0, 0);
		}
	}
	if (IS_BLIP_VALID(bLocal_22))
	{
		REMOVE_BLIP(bLocal_22);
	}
	if (IS_VOLUME_VALID(bLocal_117))
	{
		DESTROY_VOLUME(bLocal_117);
	}
	if (DECOR_CHECK_EXIST(bVar90, "GiveMap"))
	{
		DECOR_REMOVE(bVar90, "GiveMap");
	}
	Function_6(&uVar111, &uVar112, &iVar113);
	Function_5(&iLocal_24, 3);
	Function_130(bLocal_66);
	REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_117);
	REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_117);
	Function_130(bLocal_66);
	if (IS_VOLUME_VALID(bLocal_117))
	{
		DESTROY_VOLUME(bLocal_117);
	}
	Function_1(&bVar17);
	RELEASE_LAYOUT_REF(bVar1);
	if (IS_OBJECT_VALID(bLocal_49))
	{
		LEASH_BREAK(bLocal_49, 1056964608);
		DESTROY_OBJECT(bLocal_49);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x1140 / 4416
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

void Function_2(var uParam0, int iParam1) //Position: 0x1166 / 4454
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

void Function_3(var uParam0, int iParam1) //Position: 0x1294 / 4756
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_4(var uParam0, int iParam1) //Position: 0x12AE / 4782
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(var uParam0, int iParam1) //Position: 0x12CB / 4811
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

void Function_6(var uParam0, var uParam1, int iParam2) //Position: 0x12ED / 4845
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

void Function_7(bool bParam0) //Position: 0x131A / 4890
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(bLocal_49))
	{
		LEASH_BREAK(bLocal_49, 1056964608);
		DESTROY_OBJECT(bLocal_49);
	}
	if (IS_ACTOR_ALIVE(bLocal_40))
	{
		bVar0 = TASK_SEQUENCE_OPEN();
		TASK_MOUNT(false, bLocal_40, 0, 1, 2, 179);
		TASK_FLEE_ACTOR(false, Global_34573, -1.0f, -1.0f, 0, 0, 0);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(bParam0, bVar0);
		TASK_SEQUENCE_RELEASE(bVar0, 1);
	}
	else
	{
		TASK_FLEE_ACTOR(bParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
	}
	return;
}

int Function_8(bool bParam0, int iParam1, int iParam2, int iParam3) //Position: 0x137C / 4988
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
					Function_9(bVar1, 0, 0, 0, 1);
				}
				bVar0++;
			}
		}
		Function_9(bParam0, iParam1, iParam2, iParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_9(bool bParam0, int iParam1, var uParam2, var uParam3, int iParam4) //Position: 0x145C / 5212
{
	char* cVar0[32];
	
	Function_16();
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
	if (Function_15(bParam0) == 1)
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
	Function_14(bParam0, 0);
	Function_13(bParam0, iParam1);
	Function_12(bParam0, uParam2);
	Function_11(bParam0, uParam3);
	if (Function_10(bParam0) != 5)
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

int Function_10(bool bParam0) //Position: 0x16AA / 5802
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior");
}

void Function_11(bool bParam0, bool bParam1) //Position: 0x16CD / 5837
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_12(bool bParam0, bool bParam1) //Position: 0x16F0 / 5872
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_target", bParam1);
	return;
}

void Function_13(bool bParam0, bool bParam1) //Position: 0x1714 / 5908
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_14(bool bParam0, bool bParam1) //Position: 0x173A / 5946
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_state", bParam1);
	return;
}

int Function_15(bool bParam0) //Position: 0x175D / 5981
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
}

void Function_16() //Position: 0x177B / 6011
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

void Function_17(var uParam0, int iParam1) //Position: 0x17C5 / 6085
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_18(uParam0[iVar0]);
		iVar0++;
	}
	return;
}

void Function_18(bool bParam0) //Position: 0x17F2 / 6130
{
	if (IS_ACTOR_VALID(*bParam0))
	{
		RESET_ANIM_SET_FOR_ACTOR(*bParam0, 0);
		TASK_FLEE_ACTOR(*bParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
		TASK_PRIORITY_SET(*bParam0, false);
	}
	return;
}

int Function_19(bool bParam0) //Position: 0x181D / 6173
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_20(bParam0);
		return 1;
	}
	return 0;
}

void Function_20(bool bParam0) //Position: 0x1833 / 6195
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

bool Function_21(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x185F / 6239
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
		Function_23("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
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
			Function_22(bVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_22(bVar0);
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
			Function_22(bVar0);
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

void Function_22(bool bParam0) //Position: 0x1ABC / 6844
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

void Function_23(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1B02 / 6914
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

bool Function_24(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4, struct<51> Param5, vector3 vParam56, vector3 vParam59, var uParam62) //Position: 0x1B49 / 6985
{
	bParam3 = bParam3;
	switch (*uParam0)
	{
		case 0x00000000:
			if ((IS_ACTOR_VALID((*bParam1)[0]) && IS_ACTOR_VALID((*bParam1)[1])) && IS_ACTOR_VALID(bParam2))
			{
				if (((Function_129((*bParam1)[0], Global_34573) > 50.0f || GET_LAST_ATTACKER(bParam2) != Global_34573) || GET_LAST_ATTACKER((*bParam1)[0]) != Global_34573) || GET_LAST_ATTACKER((*bParam1)[1]) != Global_34573)
				{
					Function_132(bParam1, &bParam2);
					Function_230(&uLocal_81, 0.0f);
					Function_126();
					*uParam0 = 3;
				}
			}
			else
			{
				Function_132(bParam1, &bParam2);
				Function_230(&uLocal_81, 0.0f);
				Function_126();
				*uParam0 = 3;
			}
			break;
		
		case 0x00000003:
			if (Function_122(&uLocal_81, 15.0f))
			{
				if (IS_ACTOR_VALID((*bParam1)[0]))
				{
					COMBAT_CLASS_AI_SET_ATTRIB_BOOL((*bParam1)[0], 13, false);
				}
				if (IS_ACTOR_VALID((*bParam1)[1]))
				{
					COMBAT_CLASS_AI_SET_ATTRIB_BOOL((*bParam1)[1], 13, false);
				}
			}
			Function_121(bParam1, bParam2);
			if (Function_114(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, bParam1, Param5))
			{
				*uParam0 = 4;
			}
			if (IS_ACTOR_VALID(bParam2))
			{
				if (GET_LAST_ATTACKER(bParam2) == Global_34573)
				{
					Function_113(bParam2, &Global_34573);
					*uParam0 = 4;
				}
			}
			if (!Function_155(bParam2, 0))
			{
				if (Function_112(StackVal, StackVal, Global_34573, *(&Param5 + 8)) > 50.0f)
				{
					*uParam0 = 4;
				}
				else
				{
					if (IS_ACTOR_VALID((*bParam1)[0]))
					{
						COMBAT_CLASS_AI_SET_ATTRIB_BOOL((*bParam1)[0], 13, false);
					}
					if (IS_ACTOR_VALID((*bParam1)[1]))
					{
						COMBAT_CLASS_AI_SET_ATTRIB_BOOL((*bParam1)[1], 13, false);
					}
				}
			}
			if (VDIST(Global_34574, vLocal_55) < Function_137(1))
			{
				return 1;
			}
			Function_105(bParam1, bParam2, bParam3);
			break;
		
		case 0x00000004:
			if (bLocal_95)
			{
				Function_103(&iLocal_96, 34, 0, 4294967295, 4294967295);
			}
			if (IS_ACTOR_VALID(bLocal_40))
			{
				SET_ACTOR_UNKILLABLE(bLocal_40, 0);
			}
			if (IS_ACTOR_VALID(bParam2))
			{
				if (GET_LAST_ATTACKER(bParam2) == Global_34573)
				{
					Function_102(Global_34573, bParam2, "TreasureRobbersPlayer_msg01", 0, 5, 60, 1, 1);
				}
				Function_121(bParam1, bParam2);
			}
			Function_105(bParam1, bParam2, bParam3);
			iLocal_35 = 1;
			*uParam0 = 5;
			break;
		
		case 0x00000005:
			Function_101(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, bParam1, bParam2, Param5);
			Function_121(bParam1, bParam2);
			Function_105(bParam1, bParam2, bParam3);
			if (iLocal_98 == 6)
			{
				if (Function_100(bParam1[0], bParam1[1]))
				{
					if (bLocal_95)
					{
						Function_103(&iLocal_96, 3, 0, 4294967295, 4294967295);
					}
					return 1;
				}
			}
			if (Function_99(bParam2, (*bParam1)[0], (*bParam1)[1]))
			{
				if (StackVal && Function_98(StackVal, Function_98(StackVal, StackVal, (*bParam1)[0], 100.0f, *(&Param5 + 8)), (*bParam1)[1], 100.0f, *(&Param5 + 8)))
				{
					if (IS_ACTOR_VALID(bParam2))
					{
						TASK_CLEAR(bParam2);
						MEMORY_CLEAR_EVENTS(bParam2, 1);
						*uParam0 = 6;
					}
					if (bLocal_95)
					{
						Function_103(&iLocal_96, 3, 0, 4294967295, 4294967295);
					}
				}
			}
			if (GET_ITEM_COUNT(SS_GET_STRING(1, 11), Global_34573) >= 0)
			{
				if (IS_BLIP_VALID(bLocal_22))
				{
					REMOVE_BLIP(bLocal_22);
					bLocal_22 = "";
				}
			}
			if (iLocal_42 == 1)
			{
				if (VDIST(Global_34574, vLocal_58[iLocal_433]) < Function_137(1))
				{
					return 1;
				}
				if (VDIST(Global_34574, vLocal_58[iLocal_443]) < Function_137(1))
				{
					Function_19((*bParam1)[iLocal_44]);
				}
			}
			else if (VDIST(Global_34574, vLocal_55) < Function_137(1))
			{
				return 1;
			}
			break;
		
		case 0x00000006:
			if (iLocal_45 == 1)
			{
				if (Function_155(bParam2, 0))
				{
					if (Function_92(StackVal, StackVal, StackVal, StackVal, bParam2, bParam3, vParam56, vParam59))
					{
						*uParam4 = 0;
						Function_159(Global_34573, bParam2, 1, 1);
						Function_91(bParam1, 2, &bLocal_88, &bLocal_89, 0);
						if (bLocal_88)
						{
							Function_86(200, 1, 0);
							Function_85((*bParam1)[0], 4294967295 * 100);
							Function_85((*bParam1)[1], 4294967295 * 100);
						}
						else if (bLocal_89)
						{
							Function_86(100, 1, 0);
							if (Function_155((*bParam1)[0], 0))
							{
								Function_85((*bParam1)[0], 4294967295 * 100);
							}
							else if (Function_155((*bParam1)[1], 0))
							{
								Function_85((*bParam1)[1], 4294967295 * 100);
							}
						}
						else
						{
							Function_86(50, 1, 0);
						}
						*uParam0 = 8;
					}
					else if (VDIST(Global_34574, vLocal_55) < Function_137(1))
					{
						return 1;
					}
				}
				*uParam0 = 12;
			}
			else
			{
				Function_230(&uLocal_46, 0.0f);
				*uParam0 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_83(&bParam2, &Global_34573, &uLocal_68, &iLocal_69, &uLocal_46, bParam3, 35.0f, &bLocal_76, uLocal_74, uParam4, "nthank_you", "nthank_you", "", "", 25.0f, 2, -5.0f, 0, 4.0f, 1, 0, 0, 1, 0, 0x40800000))
			{
				if (bLocal_76)
				{
					*uParam4 = 0;
					Function_159(Global_34573, bParam2, 1, 1);
					Function_91(bParam1, 2, &bLocal_88, &bLocal_89, 0);
					TASK_PRIORITY_SET(bParam2, 2);
					MEMORY_CLEAR_EVENTS(bParam2, 1);
					MEMORY_CLEAR_ALL(bParam2);
					ACTOR_START_FORCE_HOLSTER(bParam2, 1, 0);
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(bParam2, 1);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bParam2, true);
					if (bLocal_88)
					{
						Function_86(200, 1, 0);
						Function_85((*bParam1)[0], 4294967295 * 100);
						Function_85((*bParam1)[1], 4294967295 * 100);
					}
					else if (bLocal_89)
					{
						Function_86(100, 1, 0);
						if (Function_155((*bParam1)[0], 0))
						{
							Function_85((*bParam1)[0], 4294967295 * 100);
						}
						else if (Function_155((*bParam1)[1], 0))
						{
							Function_85((*bParam1)[1], 4294967295 * 100);
						}
					}
					else
					{
						Function_86(50, 1, 0);
					}
					if (IS_VOLUME_VALID(bLocal_117))
					{
						DESTROY_VOLUME(bLocal_117);
					}
					GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bLocal_78), true);
					Function_7(bParam2);
					iLocal_67 = 1;
					iLocal_118 = 1;
					return 1;
				}
			}
			Function_8(bParam2, 2, 0, 2);
			iLocal_67 = 1;
			iLocal_118 = 1;
			return 1;
			break;
		
		case 0x00000008:
			if (Function_63(&bParam2, &Global_34573, &uLocal_81, bParam3, &bLocal_76, uParam4, &Param5))
			{
				Function_41(20, 1, 0);
				TASK_PRIORITY_SET(bParam2, 2);
				MEMORY_CLEAR_EVENTS(bParam2, 1);
				MEMORY_CLEAR_ALL(bParam2);
				ACTOR_START_FORCE_HOLSTER(bParam2, 1, 0);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(bParam2, 1);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bParam2, true);
				if (IS_VOLUME_VALID(bLocal_117))
				{
					DESTROY_VOLUME(bLocal_117);
				}
				GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bLocal_78), true);
				Function_7(bParam2);
				iLocal_67 = 1;
				Function_25(uParam62, 1);
				*uParam0 = 14;
			}
			break;
		
		case 0x0000000C:
			if (bLocal_95)
			{
				Function_103(&iLocal_96, 3, 0, 4294967295, 4294967295);
			}
			Function_105(bParam1, bParam2, bParam3);
			Function_130(bLocal_66);
			if (iLocal_42 == 1)
			{
				if (VDIST(Global_34574, vLocal_58[iLocal_433]) < Function_137(1))
				{
					return 1;
				}
				if (VDIST(Global_34574, vLocal_58[iLocal_443]) < Function_137(1))
				{
					Function_19((*bParam1)[iLocal_44]);
				}
			}
			else if (VDIST(Global_34574, vLocal_55) < Function_137(1))
			{
				return 1;
			}
			if (GET_ITEM_COUNT(SS_GET_STRING(1, 11), Global_34573) >= 0)
			{
				MEMORY_CLEAR_EVENTS(bParam2, 1);
				MEMORY_CLEAR_ALL(bParam2);
				if (IS_VOLUME_VALID(bLocal_117))
				{
					DESTROY_VOLUME(bLocal_117);
				}
				if (IS_BLIP_VALID(bLocal_22))
				{
					REMOVE_BLIP(bLocal_22);
					bLocal_22 = "";
				}
				Function_7(bParam2);
				iLocal_67 = 1;
				if (IS_BLIP_VALID(bLocal_22))
				{
					REMOVE_BLIP(bLocal_22);
				}
				*uParam0 = 14;
			}
			break;
		
		case 0x0000000E:
			if (bLocal_95)
			{
				Function_103(&iLocal_96, 3, 0, 4294967295, 4294967295);
			}
			iLocal_118 = 1;
			return 1;
			break;
	}
	return 0;
}

int Function_25(bool bParam0, bool bParam1) //Position: 0x2210 / 8720
{
	bool bVar0;
	
	bVar0 = Function_40(0);
	if ((Function_40(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_26(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_40(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_26(597, bParam0, 0, 0);
	}
	if ((Function_40(597) + Function_40(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

int Function_26(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x22DB / 8923
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
	Function_39(iParam0, TO_FLOAT(bParam1), 1);
	Function_38(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_27(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_27(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x24FB / 9467
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_37(390))), 32);
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
					bVar19 = (Function_36(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_36(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_34(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_31(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_29(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_28(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_232(), &Var9);
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

var Function_28(int iParam0) //Position: 0x2B28 / 11048
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_29(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2B39 / 11065
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_30("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_30("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_30("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_30(char* cParam0, char* cParam1) //Position: 0x2C2E / 11310
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_31(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2C47 / 11335
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_33(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_32(Function_33(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_32(int iParam0, int iParam1) //Position: 0x2CAC / 11436
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_33(int iParam0, bool bParam1) //Position: 0x2CBE / 11454
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_34(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2CD0 / 11472
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
	if (((Function_35(iParam0) != 19 || Function_35(iParam0) != 17) || Function_35(iParam0) != 10) || Function_35(iParam0) != 9)
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

int Function_35(int iParam0) //Position: 0x2E00 / 11776
{
	return Global_35278[iParam020].f_48;
}

float Function_36(int iParam0) //Position: 0x2E0F / 11791
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_37(int iParam0) //Position: 0x2E48 / 11848
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_38(int iParam0) //Position: 0x2E85 / 11909
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

int Function_39(int iParam0, bool bParam1, bool bParam2) //Position: 0x301F / 12319
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

int Function_40(int iParam0) //Position: 0x3239 / 12857
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

void Function_41(int iParam0, bool bParam1, bool bParam2) //Position: 0x327A / 12922
{
	int iVar0;
	bool bVar1;
	
	if (Function_62(0) && (!Global_3380 || iParam0 == 100))
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
	iVar0 = Function_40(3);
	Function_59();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_57(3, bVar1);
		if (!bParam2)
		{
			if (!Function_56(Global_76848, 4))
			{
				Function_50(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_26(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_36(3));
	iVar0 = Function_40(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_43(4, Function_49(Global_12976.f_156), 1);
				Function_42(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_43(4, Function_49(Global_12976.f_156), 1);
				Function_42(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_43(4, Function_49(Global_12976.f_156), 1);
				Function_42(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_43(4, Function_49(Global_12976.f_156), 1);
				Function_42(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_43(4, Function_49(Global_12976.f_156), 1);
				Function_42(Global_12976.f_152, Global_12976.f_156);
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

void Function_42(int iParam0, int iParam1) //Position: 0x343D / 13373
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

int Function_43(int iParam0, char* cParam1, bool bParam2) //Position: 0x369B / 13979
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
	Function_47(iParam0, cParam1, 0, 1);
	iVar1 = Function_44();
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

int Function_44() //Position: 0x3820 / 14368
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
	Function_45();
	return 0;
}

void Function_45() //Position: 0x38BF / 14527
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
		Function_46(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_46(int iParam0) //Position: 0x396E / 14702
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

int Function_47(int iParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0x39CC / 14796
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
		Function_48(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, uParam3);
	}
	return 1;
}

void Function_48(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x3D1E / 15646
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

var Function_49(int iParam0) //Position: 0x3DA1 / 15777
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

void Function_50(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x3E30 / 15920
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_52(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_51(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_51(char* cParam0, int iParam1) //Position: 0x3E9C / 16028
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

bool Function_52(bool bParam0, var uParam1, int iParam2) //Position: 0x3ED3 / 16083
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
		if (Function_54(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_53(uVar0))
		{
			case 0x00000002:
				if (!Function_56(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_53(char* cParam0) //Position: 0x3F4B / 16203
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

int Function_54(int iParam0) //Position: 0x3FEC / 16364
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_55(&iVar1, 2147483648);
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

void Function_55(int iParam0, int iParam1) //Position: 0x402B / 16427
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

bool Function_56(var uParam0, int iParam1) //Position: 0x403E / 16446
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_57(int iParam0, bool bParam1) //Position: 0x4051 / 16465
{
	bool bVar0;
	int iVar1;
	
	Function_26(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_58(iParam0, 4294967295);
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
	iVar1 = Function_44();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

var Function_58(int iParam0, int iParam1) //Position: 0x41EE / 16878
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

void Function_59() //Position: 0x422F / 16943
{
	Function_61(3, 0.0f);
	Function_60(3, 10000.0f);
	return;
}

int Function_60(int iParam0, int iParam1) //Position: 0x4245 / 16965
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_61(int iParam0, int iParam1) //Position: 0x4285 / 17029
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_62(int iParam0) //Position: 0x42C5 / 17093
{
	return (*&Global_12976 + 104)[iParam0];
}

bool Function_63(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6) //Position: 0x42D4 / 17108
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam5 = *uParam5;
	vVar1 = { StackVal, StackVal, Vector(*(iParam6 + 8), StackVal, StackVal) + Vector(7.0f, 0.0f, 0.0f) };
	vVar4 = { StackVal, StackVal, Vector(vVar1, StackVal, StackVal) + Vector(0.0f, 0.0f, -11.0f) };
	if (IS_ACTOR_VALID(*uParam0))
	{
		if (!IS_ACTOR_ALIVE(*uParam0))
		{
			if (iLocal_128 >= 1)
			{
				iLocal_128 = 5;
			}
		}
	}
	*uParam5 = 0;
	switch (iLocal_128)
	{
		case 0x00000000:
			if (IS_ACTOR_RIDING(Global_34573))
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				Function_81(Global_34573, 0);
				TASK_DISMOUNT(Global_34573, 1);
				Function_230(uParam2, 0.0f);
			}
			iLocal_128 = 1;
			break;
		
		case 0x00000001:
			if (Function_122(uParam2, 1.0f))
			{
				if (IS_ACTOR_VALID(bVar0))
				{
					TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bVar0, true);
				}
				RESET_ANIM_SET_FOR_ACTOR(Global_34573, 0);
				MEMORY_CLEAR_EVENTS(Global_34573, 0);
				ACTOR_START_FORCE_HOLSTER(Global_34573, 1, 0);
				if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(bLocal_79)))
				{
					GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bLocal_79), true);
				}
				if (IS_BLIP_VALID(bLocal_21))
				{
					REMOVE_BLIP(bLocal_21);
				}
				RESET_ANIM_SET_FOR_ACTOR(*uParam0, 0);
				MEMORY_CLEAR_EVENTS(*uParam0, 0);
				MEMORY_CLEAR_ALL(*uParam0);
				ACTOR_START_FORCE_HOLSTER(*uParam0, 1, 0);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(*uParam0, 1);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(*uParam0, true);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(*uParam0, 0);
				AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(*uParam0, false);
				AI_GOAL_LOOK_AT_ACTOR(*uParam0, *uParam1, 1, 1065353216, 3212836864, 3212836864, 0);
				if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(bLocal_78)))
				{
					GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bLocal_78), true);
				}
				if (IS_ACTOR_RIDING(Global_34573))
				{
					TELEPORT_ACTOR(Global_34573, &vVar7, 1, 1, 1);
					RESET_ANIM_SET_FOR_ACTOR(Global_34573, 0);
				}
				if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(bLocal_79)))
				{
					GRINGO_GET_USE_COMPONENT_POSITION_EXT(GET_GRINGO_FROM_OBJECT(bLocal_79), "player_recieve", &vVar7);
					bVar10 = GRINGO_GET_USE_COMPONENT_HEADING_EXT(GET_GRINGO_FROM_OBJECT(bLocal_79), "player_recieve");
					SET_OBJECT_POSITION(Global_34573, vVar7);
					SET_OBJECT_ORIENTATION(Global_34573, 0.0f, bVar10, 0.0f);
					GRINGO_GET_USE_COMPONENT_POSITION_EXT(GET_GRINGO_FROM_OBJECT(bLocal_79), "UseCase1", &vVar7);
					bVar10 = GRINGO_GET_USE_COMPONENT_HEADING_EXT(GET_GRINGO_FROM_OBJECT(bLocal_79), "UseCase1");
					SET_OBJECT_POSITION(*uParam0, vVar7);
					SET_OBJECT_ORIENTATION(*uParam0, 0.0f, bVar10, 0.0f);
					TASK_PRIORITY_SET(Global_34573, true);
				}
				if (IS_ACTOR_RIDING(Global_34573))
				{
					bVar0 = GET_MOUNT(Global_34573);
					TELEPORT_ACTOR(bVar0, &vVar4, 1, 1, 1);
				}
				TASK_STAND_STILL(bVar0, 20.0f, 0, 0);
				SNAP_ACTOR_TO_GRINGO(*uParam0, bLocal_79, "UseCase1", false, 0, 0);
				TASK_USE_GRINGO(*uParam0, GET_GRINGO_FROM_OBJECT(bLocal_79), "UseCase1", true, 1);
				vLocal_114 = { StackVal, StackVal, Vector(vVar7, StackVal, StackVal) + Vector(5.0f, 0.0f, 6.0f) };
				Function_80(StackVal, StackVal, vLocal_114);
				SET_MOVER_FROZEN(Global_34573, true);
				SET_MOVER_FROZEN(*uParam0, true);
				Function_74(uParam3, &bLocal_91, &iLocal_90);
				Function_72(StackVal, StackVal, bLocal_79, bLocal_91, vLocal_108, &vLocal_111);
				Function_230(uParam2, 0.0f);
				CLEAR_ALTERNATE_SPEECH_CONTEXT_FOR_PAIN(*uParam0);
				CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(*uParam0);
				AI_SET_ENABLE_DEAD_BODY_REACTIONS(*uParam0, 0);
				iLocal_128 = 2;
			}
			break;
		
		case 0x00000002:
			Function_72(StackVal, StackVal, bLocal_79, bLocal_91, vLocal_108, &vLocal_111);
			if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(*uParam0)))
			{
				TASK_USE_GRINGO(Global_34573, GET_GRINGO_FROM_OBJECT(bLocal_79), "player_recieve", true, 1);
				TASK_PRIORITY_SET(Global_34573, true);
				Function_102(*uParam0, Global_34573, "TreasureRobbers_msg05", "treasureHunter_msg05", 5, 60, 1, 1);
				Function_230(uParam2, 0.0f);
				iLocal_128 = 3;
			}
			break;
		
		case 0x00000003:
			if ((Function_122(uParam2, 6.0f) || GET_TASK_STATUS(Global_34573, 19) != 0) || DECOR_CHECK_EXIST(*uParam0, "GiveMap"))
			{
				if (!IS_AMBIENT_SPEECH_PLAYING(*uParam0))
				{
					Function_102(Global_34573, *uParam0, "TreasureRobbersPlayer_msg02", "TreasureRobbersPlayer_msg02", 5, 60, 1, 1);
					Function_230(uParam2, 0.0f);
					GRINGO_DEACTIVATE(GET_GRINGO_FROM_OBJECT(bLocal_79));
					SET_MOVER_FROZEN(Global_34573, false);
					SET_PLAYER_CONTROL(0, 1, 0, 0);
					Function_67(&bLocal_91, &iLocal_90);
					if (DECOR_CHECK_EXIST(*uParam0, "GiveMap"))
					{
						DECOR_REMOVE(*uParam0, "GiveMap");
					}
					iLocal_128 = 5;
				}
			}
			break;
		
		case 0x00000005:
			SET_MOVER_FROZEN(*uParam0, false);
			Function_55(&iLocal_41, 1);
			Function_55(&iLocal_41, 16);
			if (iLocal_45 == 1)
			{
				Function_64(11, 0, 1);
				if (DECOR_CHECK_EXIST(*uParam0, "iSpecificItem"))
				{
					DECOR_REMOVE(*uParam0, "iSpecificItem");
				}
			}
			Function_230(&uLocal_81, 0.0f);
			if (IS_BLIP_VALID(bLocal_77))
			{
				REMOVE_BLIP(bLocal_77);
			}
			*uParam4 = 1;
			return 1;
			break;
	}
	return 0;
}

int Function_64(bool bParam0, bool bParam1, int iParam2) //Position: 0x4753 / 18259
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (bParam1)
	{
		if (GET_ITEM_COUNT(Function_66(bParam0), Function_65()) == 0)
		{
			ADD_ITEM(Function_66(bParam0), Function_65(), iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_66(bParam0), Function_65(), iParam2);
	return 1;
}

var Function_65() //Position: 0x479E / 18334
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

var Function_66(bool bParam0) //Position: 0x47B3 / 18355
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

void Function_67(var uParam0, bool bParam1) //Position: 0x48A4 / 18596
{
	SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_ACTOR(Global_34573), 1.0f, false, 1092616192);
	Function_68(1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
	REMOVE_CAMERA_FROM_CHANNEL(*uParam0, 0);
	DESTROY_CAMERA(*uParam0);
	CAMERA_RESET(0);
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	*bParam1 = 0;
	return;
}

void Function_68(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, var uParam9) //Position: 0x48E4 / 18660
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
		bVar0 = Function_65();
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
					RESET_ANIM_SET_FOR_ACTOR(bVar0, 0);
				}
				else
				{
					RESET_ANIM_SET_FOR_ACTOR(bVar0, 1);
				}
			}
			if (Function_71())
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
		Function_26(21, 1, 0, 0);
	}
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam7)
	{
		Function_70();
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
	Function_69(uParam9);
}

void Function_69(bool bParam0) //Position: 0x49D4 / 18900
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

void Function_70() //Position: 0x4A79 / 19065
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

bool Function_71() //Position: 0x4A8E / 19086
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_72(bool bParam0, bool bParam1, vector3 vParam2, bool bParam5) //Position: 0x4A97 / 19095
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	Function_73(bParam0);
	vVar0 = { StackVal, StackVal, Function_73(bParam0) };
	UNK_0xF1A53C41(&vVar6, &vVar0, 1, 0);
	UNK_0xF76F2BB3(&vVar6, bParam5, 1, 4);
	GET_OBJECT_RELATIVE_POSITION(bParam0, vParam2, &vVar3);
	SET_CAMERA_POSITION(bParam1, vVar3);
	SET_CAMERA_DIRECTION(bParam1, vVar6, 1);
}

vector3 Function_73(bool bParam0) //Position: 0x4AD9 / 19161
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

void Function_74(bool bParam0, var uParam1, bool bParam2) //Position: 0x4B00 / 19200
{
	vector3 vVar0;
	bool bVar3;
	
	*bParam2 = 1;
	*uParam1 = CREATE_CAMERA_IN_LAYOUT(bParam0, Function_232(), 0);
	SET_ACTOR_POSTURE(Global_34573, 0);
	Function_157(Global_34573);
	vVar0 = { StackVal, StackVal, Function_157(Global_34573) };
	CLEAR_AMBIENT_OBJECTS_SPHERE(vVar0, 10.0f, 39);
	Function_152();
	bVar3 = CREATE_VOLUME_IN_LAYOUT(bParam0, Function_232(), 2, vVar0, Function_152(), 10.0f, 10.0f, 10.0f);
	DELETE_PROJECTILES_IN_VOLUME(bVar3);
	DESTROY_VOLUME(bVar3);
	Function_75(1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
	SET_CURRENT_CAMERA_ON_CHANNEL(*uParam1, 0, 0f, 0f, 0, 0, 0, 0, 0, 0);
	INIT_CAMERA_FROM_GAME_CAMERA(*uParam1);
	return;
}

void Function_75(bool bParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x4B84 / 19332
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	uParam1 = uParam1;
	if (bParam6)
	{
		UI_PUSH("nCutscenes");
	}
	HUD_CLEAR_HELP();
	UI_DUMP_MESSAGE_QUEUE_TO_NOTES(1);
	HUD_ENABLE(false);
	Function_70();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(Global_34573, "iDrunk", false);
	if (bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_65();
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
			if (Function_71())
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
				Function_157(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_232(), 2, Function_157(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
				DELETE_PROJECTILES_IN_VOLUME(bVar0);
			}
		}
		Function_26(19, 1, 0, 0);
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
	if ((IS_OBJECT_VALID(Function_79()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_79()));
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
	if (Function_78(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_76(0x4000000);
	}
	if (Function_78(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_76(0x8000000);
	}
}

void Function_76(int iParam0) //Position: 0x4E2D / 20013
{
	int iVar0;
	
	if (Function_77(iParam0, 1) && Function_77(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

bool Function_77(int iParam0, int iParam1) //Position: 0x4E61 / 20065
{
	return (iParam0 && iParam1) == 0;
}

bool Function_78(int iParam0) //Position: 0x4E6E / 20078
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_79() //Position: 0x4E8A / 20106
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

void Function_80(vector3 vParam0) //Position: 0x4F09 / 20233
{
	bool bVar0;
	vector3 vVar1;
	
	bVar0 = GET_MOST_RECENT_MOUNT(Global_34573);
	Function_157(Global_34573);
	vVar1 = { StackVal, StackVal, Function_157(Global_34573) };
	if (Function_112(StackVal, StackVal, Global_34573, vParam0) > 10.0f)
	{
		if (IS_ACTOR_VALID(bVar0))
		{
			TELEPORT_ACTOR(bVar0, &vParam0, 1, 1, 1);
			TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
		}
		if (IS_ACTOR_RIDING(Global_34573))
		{
			TELEPORT_ACTOR(Global_34573, &vVar1, 1, 1, 1);
		}
	}
	return;
}

void Function_81(bool bParam0, bool bParam1) //Position: 0x4F62 / 20322
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
	else if (!bParam1 || Function_82(bParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(bParam0, 1);
	}
	return;
}

float Function_82(bool bParam0, bool bParam1) //Position: 0x4FBF / 20415
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

bool Function_83(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, float fParam6, var uParam7, bool bParam8, var uParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, int iParam15, float fParam16, bool bParam17, var uParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, var uParam23, float fParam24) //Position: 0x4FDE / 20446
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
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(*uParam0, true);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(*uParam0, 0);
				*uParam2 = Function_129(*uParam0, Global_34573);
				AI_GOAL_LOOK_AT_ACTOR_NEW(*uParam0, *uParam1, -1.0f, 1);
				bParam8 = CREATE_POINT_IN_LAYOUT(bParam5, Function_232(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
				ATTACH_OBJECTS(bParam8, *uParam1, Function_232(), 0.0f, 0,5f, fParam16, 0.0f, 0.0f, 0.0f, 4294967295);
				if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), *uParam0, 1.0f, iParam14, 1, 1, 0) || Function_129(Global_34573, *uParam0) > 2.0f)
				{
					TASK_FOLLOW_OBJECT_AT_DISTANCE(*uParam0, bParam8, 1.0f, iParam15);
					TASK_PRIORITY_SET(*uParam0, true);
				}
				*uParam3 = 1;
			}
			break;
		
		case 0x00000001:
			if ((Function_129(*uParam0, *uParam1) - *uParam2) < fParam6)
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
				TASK_PRIORITY_SET(*uParam0, true);
				*uParam9 = 0;
				*uParam3 = 4;
			}
			else if (!Function_155(*uParam0, 0))
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
					Function_102(*uParam0, Global_34573, "nThank_You", 0, 5, 60, 1, 1);
				}
				else
				{
					Function_102(*uParam0, Global_34573, bParam12, bParam13, 5, 60, 1, 1);
				}
				*uParam3 = 5;
				Function_230(uParam4, 0.0f);
			}
			else if (!Function_155(*uParam0, 0))
			{
				return 0;
			}
			break;
		
		case 0x00000005:
			if (uParam23 && !Function_84(*uParam0))
			{
				if (fParam24 != -1.0f)
				{
					if (!IS_AMBIENT_SPEECH_PLAYING(*uParam0))
					{
						RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
						Function_8(*uParam0, 4, 0, 1);
					}
				}
				else if (Function_122(uParam4, fParam24))
				{
					RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
					Function_8(*uParam0, 4, 0, 1);
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
							Function_102(Global_34573, *uParam0, bParam20, bParam20, 5, 60, 1, 1);
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
			if (uParam23 && !Function_84(*uParam0))
			{
				if (Function_122(uParam4, fParam24))
				{
					RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
					Function_8(*uParam0, 4, 0, 1);
				}
			}
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(*uParam0, bParam11) && !IS_AMBIENT_SPEECH_PLAYING(Global_34573))
			{
				RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
				*uParam7 = 1;
				if (bParam17)
				{
					Function_8(*uParam0, 4, 0, iParam15);
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

bool Function_84(bool bParam0) //Position: 0x5384 / 21380
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

void Function_85(bool bParam0, bool bParam1) //Position: 0x53A9 / 21417
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_INT(bParam0, "honor", bParam1);
	return;
}

void Function_86(int iParam0, bool bParam1, bool bParam2) //Position: 0x53C9 / 21449
{
	int iVar0;
	bool bVar1;
	
	if (Function_62(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_40(1);
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
			Function_57(1, bVar1);
			if (!bParam2)
			{
				if (!Function_56(Global_76848, 1))
				{
					Function_50(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_90(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_56(Global_76848, 2))
				{
					Function_50(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_26(1, bVar1, 0, 0);
	}
	else
	{
		Function_89(1, (4294967295 * bVar1), 0);
	}
	if (Function_40(1) <= 4294962296)
	{
		Function_88(1, 4294962296, 0);
	}
	else if (Function_40(1) >= 5000)
	{
		Function_88(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_36(1));
	iVar0 = Function_40(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_43(2, Function_87(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_43(2, Function_87(Global_12976.f_152), 0);
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
				Function_43(2, Function_87(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_43(2, Function_87(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_43(2, Function_87(Global_12976.f_152), 1);
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
				Function_43(2, Function_87(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_43(2, Function_87(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_43(2, Function_87(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_43(2, Function_87(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_43(2, Function_87(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_43(2, Function_87(Global_12976.f_152), 1);
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
				Function_43(2, Function_87(Global_12976.f_152), 0);
			}
			break;
	}
	Function_42(Global_12976.f_152, Global_12976.f_156);
	return;
}

var Function_87(int iParam0) //Position: 0x56DE / 22238
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

int Function_88(int iParam0, bool bParam1, bool bParam2) //Position: 0x5781 / 22401
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
		Function_39(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_38(iParam0);
	if (bParam2)
	{
		Function_27(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_89(int iParam0, bool bParam1, int iParam2) //Position: 0x5A1C / 23068
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
	Function_38(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_27(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_90(int iParam0, bool bParam1) //Position: 0x5C17 / 23575
{
	bool bVar0;
	int iVar1;
	
	Function_89(iParam0, bParam1, 0);
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
	iVar1 = Function_58(iParam0, 4294967295);
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
	iVar1 = Function_44();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

void Function_91(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x5DB3 / 23987
{
	int iVar0;
	
	*bParam2 = 1;
	*bParam3 = 0;
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		if (Function_155((*bParam0)[iVar0], bParam4))
		{
			*bParam3 = 1;
		}
		else
		{
			*bParam2 = 0;
		}
		iVar0++;
	}
}

bool Function_92(bool bParam0, bool bParam1, vector3 vParam2, vector3 vParam5) //Position: 0x5DEF / 24047
{
	vector3 vVar0;
	
	GET_OBJECT_RELATIVE_POSITION(bLocal_80, -1.0f, 0.0f, 1.0f, &vVar0);
	switch (iLocal_129)
	{
		case 0x00000000:
			bLocal_65 = CREATE_VOLUME_IN_LAYOUT(bParam1, Function_232(), false, vVar0, 0.0f, 0.0f, 0.0f, 3,5f, 2,5f, 3,5f);
			bLocal_66 = Function_97(bParam1, Function_232(), bLocal_65, Global_34573, 1, 325, 4294967295, 0, 0, 1);
			ATTACH_OBJECTS(bLocal_65, bLocal_66, Function_232(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
			if (bLocal_79 == "")
			{
				if (IS_LAYOUTREF_VALID(GET_LAYOUT_FROM_OBJECT(bParam1)))
				{
					GET_OBJECT_RELATIVE_POSITION(bLocal_80, -2.0f, 0.0f, 0.0f, &vParam2);
					bLocal_79 = CREATE_GRINGO_IN_LAYOUT(bParam1, Function_232(), "$/content/scripting/gringo/SimpleGringo/Treasure_hunter_handoff", vParam2, vParam5);
					SNAP_OBJECT_TO_GROUND(bLocal_79, 0,5f, false, 1092616192);
					GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bLocal_79), false);
				}
			}
			Function_19(bParam0);
			if (IS_BLIP_VALID(bLocal_21))
			{
				REMOVE_BLIP(bLocal_21);
			}
			ACTOR_START_FORCE_HOLSTER(bParam0, 1, 0);
			RESET_ANIM_SET_FOR_ACTOR(bParam0, 1);
			TASK_FACE_ACTOR(bParam0, Global_34573, 1, 3212836864);
			AI_GOAL_LOOK_AT_ACTOR_NEW(bParam0, Global_34573, -1f, 0);
			MEMORY_CLEAR_EVENTS(bParam0, 0);
			MEMORY_SET_WEAPON_DRAW_PREFERENCE(bParam0, 1);
			TASK_PRIORITY_SET(bParam0, true);
			Function_96("treasureHunter_obj01", 0x40f00000, 1, 2, 0, 0, 0);
			Function_102(bParam0, Global_34573, "TreasureRobbers_msg04", 0, 5, 60, 1, 1);
			Function_230(&uLocal_130, 0.0f);
			iLocal_129 = 1;
			break;
		
		case 0x00000001:
			if (IS_ACTOR_VALID(bParam0))
			{
				if (!IS_AMBIENT_SPEECH_PLAYING(bParam0))
				{
					if (Function_122(&uLocal_130, 1.0f))
					{
						if (IS_OBJECT_VALID(bLocal_66))
						{
							if (Function_94())
							{
								if (!IS_ACTOR_HOGTIED(bParam0))
								{
									if (Function_129(Global_34573, bParam0) > 10.0f)
									{
										if (!FIRE_IS_ACTOR_ON_FIRE(bParam0))
										{
											if (GATEWAY_UPDATE(bLocal_66) || Function_93(Global_34573, bParam0))
											{
												TASK_CLEAR(bParam0);
												TASK_STAND_STILL(bParam0, -1.0f, 0, 0);
												Function_130(bLocal_66);
												iLocal_129 = 2;
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
					Function_230(&uLocal_130, 0.0f);
				}
			}
			break;
		
		case 0x00000002:
			return 1;
			break;
	}
	return 0;
}

int Function_93(bool bParam0, bool bParam1) //Position: 0x601E / 24606
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_VALID(bParam1))
		{
			if (IS_ACTOR_RIDING(bParam0))
			{
				if (Function_129(bParam0, bParam1) > (7.0f - 2.0f))
				{
					return 1;
				}
			}
			if (Function_129(bParam0, bParam1) > 2,5f)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool Function_94() //Position: 0x6062 / 24674
{
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (IS_ACTOR_ON_LADDER(Global_34573))
		{
			return 0;
		}
		if (IS_ACTOR_DRAFTED(Global_34573))
		{
			return 0;
		}
		if (IS_ACTOR_RIDING_VEHICLE(Global_34573))
		{
			if (!IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
			{
				return 0;
			}
		}
		if (Function_95())
		{
			return 0;
		}
	}
	return 0;
	return 1;
}

bool Function_95() //Position: 0x60AA / 24746
{
	if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(Global_34573)))
	{
		return 1;
	}
	return 0;
}

void Function_96(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x60BF / 24767
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

var Function_97(bool bParam0, bool bParam1, bool bParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, int iParam9) //Position: 0x6112 / 24850
{
	bool bVar0;
	
	bVar0 = CREATE_GATEWAY_IN_LAYOUT(bParam0, bParam1, bParam2, uParam3, iParam4, iParam6, iParam7, bParam8, iParam9, 1);
	if (IS_OBJECT_VALID(bVar0))
	{
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bParam2);
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bParam2);
		if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam2)))
		{
			REMOVE_BLIP(GET_BLIP_ON_OBJECT(bParam2));
		}
		ADD_BLIP_FOR_OBJECT(bVar0, bParam5, 0.0f, 2, 0);
		DECOR_SET_OBJECT(bVar0, "volrestrict", bParam2);
		DECOR_SET_BOOL(bVar0, "voldestroy", bParam8);
	}
	return bVar0;
}

int Function_98(bool bParam0, float fParam1, vector3 vParam2) //Position: 0x618F / 24975
{
	vector3 vVar0;
	
	Function_157(Global_34573);
	vVar0 = { StackVal, StackVal, Function_157(Global_34573) };
	if (IS_ACTOR_VALID(bParam0))
	{
		if (Function_155(bParam0, 1))
		{
			Function_157(bParam0);
			Function_157(bParam0);
			if (VDIST(vParam2, Function_157(bParam0)) < fParam1 && VDIST(vVar0, Function_157(bParam0)) < fParam1)
			{
				Function_19(bParam0);
				return 1;
			}
			if (IS_ACTOR_HOGTIED(bParam0))
			{
				TASK_FLEE_ACTOR(bParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
				Function_19(bParam0);
				return 1;
			}
		}
		Function_19(bParam0);
		return 1;
	}
	Function_19(bParam0);
	return 1;
	return 0;
}

bool Function_99(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6218 / 25112
{
	if (GET_LAST_ATTACKER(bParam0) == Global_34573)
	{
		return 1;
	}
	if (Function_155(bParam1, 0))
	{
		if (GET_LAST_ATTACKER(bParam1) == Global_34573)
		{
			return 1;
		}
	}
	return 1;
	if (Function_155(bParam1, 0))
	{
		if (GET_LAST_ATTACKER(bParam2) == Global_34573)
		{
			return 1;
		}
	}
	return 1;
	return 0;
}

bool Function_100(int iParam0, int iParam1) //Position: 0x6262 / 25186
{
	if (IS_ACTOR_VALID(*iParam0))
	{
		if (IS_ACTOR_HOGTIED(*iParam0) || Function_129(*iParam0, Global_34573) < 100.0f)
		{
			Function_19(*iParam0);
			TASK_FLEE_ACTOR(*iParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
			TASK_PRIORITY_SET(*iParam0, false);
		}
	}
	if (IS_ACTOR_VALID(*iParam1))
	{
		if (IS_ACTOR_HOGTIED(*iParam1) || Function_129(*iParam1, Global_34573) < 100.0f)
		{
			Function_19(*iParam1);
			TASK_FLEE_ACTOR(*iParam1, Global_34573, -1.0f, -1.0f, 0, 0, 0);
			TASK_PRIORITY_SET(*iParam1, false);
		}
	}
	if (IS_ACTOR_VALID(*iParam0))
	{
		if (IS_ACTOR_HOGTIED(*iParam0) || Function_129(*iParam0, Global_34573) < 100.0f)
		{
			if (IS_ACTOR_VALID(*iParam1))
			{
				if (IS_ACTOR_HOGTIED(*iParam1) || Function_129(*iParam1, Global_34573) < 100.0f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_101(var uParam0, bool bParam1, struct<51> Param2) //Position: 0x632B / 25387
{
	if (iLocal_107 == 0)
	{
		if (!Function_155(bParam1, 0))
		{
			if (IS_ACTOR_VALID((*uParam0)[0]))
			{
				ADD_BLIP_FOR_ACTOR((*uParam0)[0], 322, 0.0f, 3, 0);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL((*uParam0)[0], 13, false);
				Function_113((*uParam0)[0], &Global_34573);
				if (IS_AMBIENT_SPEECH_PLAYING((*uParam0)[0]))
				{
					CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH((*uParam0)[0]);
				}
			}
			if (IS_ACTOR_VALID((*uParam0)[1]))
			{
				ADD_BLIP_FOR_ACTOR((*uParam0)[1], 322, 0.0f, 3, 0);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL((*uParam0)[1], 13, false);
				Function_113((*uParam0)[1], &Global_34573);
				if (IS_AMBIENT_SPEECH_PLAYING((*uParam0)[1]))
				{
					CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH((*uParam0)[1]);
				}
			}
			iLocal_107 = 1;
		}
		else if (Function_114(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, uParam0, Param2))
		{
			Function_159(bParam1, Global_34573, 5, 0);
			if (IS_ACTOR_VALID((*uParam0)[0]))
			{
				TASK_CLEAR((*uParam0)[0]);
				ADD_BLIP_FOR_ACTOR((*uParam0)[0], 322, 0.0f, 3, 0);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL((*uParam0)[0], 13, false);
				Function_113((*uParam0)[0], &Global_34573);
				if (IS_AMBIENT_SPEECH_PLAYING((*uParam0)[0]))
				{
					CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH((*uParam0)[0]);
				}
			}
			if (IS_ACTOR_VALID((*uParam0)[1]))
			{
				TASK_CLEAR((*uParam0)[1]);
				ADD_BLIP_FOR_ACTOR((*uParam0)[1], 322, 0.0f, 3, 0);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL((*uParam0)[1], 13, false);
				Function_113((*uParam0)[1], &Global_34573);
				if (IS_AMBIENT_SPEECH_PLAYING((*uParam0)[1]))
				{
					CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH((*uParam0)[1]);
				}
			}
			iLocal_107 = 1;
		}
	}
}

void Function_102(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x6484 / 25732
{
	bParam1 = bParam1;
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0) && Function_129(bParam0, Global_34573) >= IntToFloat(iParam5))
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

void Function_103(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x6514 / 25876
{
	if (*iParam0 != iParam1)
	{
		*iParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_104(*iParam0), iParam2, iParam3, iParam4);
	}
}

var Function_104(int iParam0) //Position: 0x6538 / 25912
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

void Function_105(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6A75 / 27253
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	
	Function_108();
	vVar0 = { 0,184f, 0.0f, 0.0f };
	if (iLocal_45 == 1)
	{
		switch (iLocal_98)
		{
			case 0x00000000:
				if (!IS_ACTOR_VALID(bParam1))
				{
					if (Function_107(fLocal_51, fLocal_52))
					{
						iLocal_32 = 1;
					}
					Function_106(bLocal_53);
					Function_152();
					bLocal_75 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_232(), bParam2, StackVal) + Vector(vVar0, Function_106(bLocal_53), "$/content/scripting/gringo/simplegringo/loot_corpse_solo_male"), Function_152());
					Function_106(bLocal_53);
					vLocal_99 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar0, Function_106(bLocal_53), StackVal) };
					bLocal_22 = ADD_BLIP_FOR_COORD(&vLocal_99, 335, 0.0f, 3, 0);
					if (iLocal_45 == 1)
					{
						Function_96("treasureHunter_obj03", 0x40f00000, 1, 2, 0, 0, 0);
					}
					SNAP_OBJECT_TO_GROUND(bLocal_75, 1,5f, false, 1092616192);
					Function_158(bLocal_75);
					bVar3 = CREATE_VOLUME_IN_LAYOUT(bParam2, Function_232(), false, Function_158(bLocal_75), 0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 1.0f);
					iLocal_98 = 1;
				}
				break;
			
			case 0x00000001:
				if (iLocal_32 == 0)
				{
					if (Function_155((*bParam0)[0], 0))
					{
						iLocal_43 = 0;
						iLocal_44 = 1;
						DECOR_SET_BOOL((*bParam0)[0], "VolOnly", true);
						DECOR_SET_OBJECT(bLocal_75, "volume", bVar3);
						TASK_GO_NEAR_OBJECT((*bParam0)[iLocal_43], bLocal_75, 1.0f, 3, 0, 1);
						iLocal_98 = 2;
					}
					else if (Function_155((*bParam0)[1], 0))
					{
						iLocal_43 = 1;
						iLocal_44 = 0;
						DECOR_SET_BOOL((*bParam0)[1], "VolOnly", true);
						DECOR_SET_OBJECT(bLocal_75, "volume", bVar3);
						TASK_GO_NEAR_OBJECT((*bParam0)[iLocal_43], bLocal_75, 1.0f, 3, 0, 1);
						TASK_PRIORITY_SET((*bParam0)[iLocal_43], true);
						iLocal_98 = 2;
					}
					else
					{
						iLocal_98 = 6;
					}
				}
				else
				{
					iLocal_98 = 6;
				}
				break;
			
			case 0x00000002:
				if (Function_155((*bParam0)[iLocal_43], 0))
				{
					if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(bLocal_75)))
					{
						if (IS_GRINGO_READY(bLocal_75))
						{
							if (GET_TASK_STATUS((*bParam0)[iLocal_43], 83) == 0)
							{
								Function_157((*bParam0)[iLocal_43]);
								SET_OBJECT_POSITION(bLocal_75, Function_157((*bParam0)[iLocal_43]));
								GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bLocal_75), true);
								if (IS_ACTOR_VALID((*bParam0)[iLocal_44]))
								{
									if (Function_129(Global_34573, (*bParam0)[iLocal_44]) < 70.0f)
									{
										TASK_FOLLOW_ACTOR((*bParam0)[iLocal_44], Global_34573);
										TASK_PRIORITY_SET((*bParam0)[iLocal_44], false);
									}
								}
								TASK_USE_GRINGO((*bParam0)[iLocal_43], GET_GRINGO_FROM_OBJECT(bLocal_75), "UseCase1", true, 1);
								TASK_PRIORITY_SET((*bParam0)[iLocal_43], true);
								Function_230(&uLocal_103, 0.0f);
								iLocal_98 = 4;
							}
						}
					}
				}
				else
				{
					iLocal_98 = 6;
				}
				break;
			
			case 0x00000004:
				if (Function_155((*bParam0)[iLocal_43], 0))
				{
					if (GET_TASK_STATUS((*bParam0)[iLocal_43], 19) != 4 || Function_122(&uLocal_103, 12.0f))
					{
						iLocal_98 = 5;
					}
					else if (GET_TASK_STATUS((*bParam0)[iLocal_43], 19) == 0)
					{
						DESTROY_OBJECT(bLocal_75);
						if (GET_OBJECTSET_SIZE(bLocal_70) >= 0)
						{
							bVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, bLocal_70);
						}
						if (IS_BLIP_VALID(bLocal_22))
						{
							REMOVE_BLIP(bLocal_22);
							bLocal_22 = "";
						}
						if (!IS_BLIP_VALID(bLocal_22))
						{
							Function_20((*bParam0)[iLocal_43]);
							bLocal_22 = ADD_BLIP_FOR_ACTOR((*bParam0)[iLocal_43], 335, 0.0f, 3, 0);
						}
						DECOR_REMOVE(bVar4, "iSpecificItem");
						bLocal_54 = CREATE_OBJECTSET_IN_LAYOUT("corpse", bParam2, 4294967295, 1);
						DECOR_SET_OBJECT((*bParam0)[iLocal_43], "lootCorpse_objSet", GET_OBJECT_FROM_OBJECTSET(bLocal_54));
						DECOR_SET_INT((*bParam0)[iLocal_43], "iSpecificItem", 11);
						TASK_PRIORITY_SET((*bParam0)[iLocal_43], false);
						iLocal_42 = 1;
						iLocal_98 = 5;
					}
				}
				else
				{
					iLocal_98 = 6;
				}
				break;
			
			case 0x00000005:
				if (IS_ACTOR_VALID((*bParam0)[0]))
				{
					TASK_FLEE_ACTOR((*bParam0)[0], Global_34573, -1.0f, -1.0f, 0, 0, 0);
					if (IS_ACTOR_VALID((*bParam0)[1]))
					{
						TASK_FOLLOW_ACTOR((*bParam0)[1], (*bParam0)[0]);
					}
				}
				else if (IS_ACTOR_VALID((*bParam0)[1]))
				{
					TASK_FLEE_ACTOR((*bParam0)[1], Global_34573, -1.0f, -1.0f, 0, 0, 0);
				}
				iLocal_98 = 6;
				break;
			
			case 0x00000006:
				if (!IS_ACTOR_VALID((*bParam0)[0]))
				{
					if (IS_ACTOR_VALID((*bParam0)[1]))
					{
						if (GET_TASK_STATUS((*bParam0)[1], 25) != 1)
						{
							TASK_FLEE_ACTOR((*bParam0)[1], Global_34573, -1.0f, -1.0f, 0, 0, 0);
						}
					}
				}
				if (iLocal_102 == 0)
				{
					if (iLocal_42 == 1)
					{
						if (!IS_ACTOR_VALID((*bParam0)[iLocal_43]))
						{
							if (iLocal_45 == 1)
							{
								Function_96("treasureHunter_obj03", 0x40f00000, 1, 2, 0, 0, 0);
							}
							if (IS_BLIP_VALID(bLocal_22))
							{
								REMOVE_BLIP(bLocal_22);
								bLocal_22 = "";
							}
							if (!IS_BLIP_VALID(bLocal_22))
							{
								bLocal_22 = ADD_BLIP_FOR_COORD(&vLocal_99, 335, 0.0f, 3, 0);
								iLocal_102 = 1;
							}
						}
						else if (IS_ACTOR_HOGTIED((*bParam0)[iLocal_43]))
						{
							if (!IS_BLIP_VALID(bLocal_22))
							{
								bLocal_22 = ADD_BLIP_FOR_COORD(&vLocal_99, 335, 0.0f, 3, 0);
								iLocal_106 = 1;
							}
						}
						else
						{
							if (iLocal_106 == 1)
							{
								if (IS_BLIP_VALID(bLocal_22))
								{
									REMOVE_BLIP(bLocal_22);
									bLocal_22 = "";
								}
								if (!IS_BLIP_VALID(bLocal_22))
								{
									Function_20((*bParam0)[iLocal_43]);
									bLocal_22 = ADD_BLIP_FOR_ACTOR((*bParam0)[iLocal_43], 335, 0.0f, 3, 0);
								}
								iLocal_106 = 0;
							}
							Function_157((*bParam0)[iLocal_43]);
							vLocal_99 = { StackVal, StackVal, Function_157((*bParam0)[iLocal_43]) };
						}
					}
				}
				break;
			}
	}
	return;
}

vector3 Function_106(bool bParam0) //Position: 0x6F7A / 28538
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 1.0f };
	if (IS_OBJECT_VALID(bParam0))
	{
		if (GET_OBJECTSET_SIZE(bParam0) != 0)
		{
			if (IS_OBJECT_VALID(GET_INDEXED_OBJECT_IN_OBJECTSET(false, bParam0)))
			{
				Function_158(GET_INDEXED_OBJECT_IN_OBJECTSET(false, bParam0));
				vVar0 = { StackVal, StackVal, Function_158(GET_INDEXED_OBJECT_IN_OBJECTSET(false, bParam0)) };
			}
		}
	}
	return StackVal, StackVal, vVar0;
}

bool Function_107(bool bParam0, bool bParam1) //Position: 0x6FB5 / 28597
{
	if (GET_OBJECTSET_SIZE(bLocal_53) >= 0)
	{
		bLocal_50 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, bLocal_53);
		if (IS_OBJECT_VALID(bLocal_50))
		{
			if (IS_VOLUME_VALID(bParam0))
			{
				if (IS_OBJECT_IN_VOLUME(bLocal_50, bParam0))
				{
					return 1;
				}
			}
			if (IS_VOLUME_VALID(bParam1))
			{
				if (IS_OBJECT_IN_VOLUME(bLocal_50, bParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_108() //Position: 0x6FFD / 28669
{
	bool bVar0;
	
	if (iLocal_32 == 1)
	{
		if (GET_OBJECTSET_SIZE(bLocal_70) >= 0)
		{
			bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, bLocal_70);
			if (Function_109(Global_34573, bVar0) > 5.0f)
			{
				if (IS_BLIP_VALID(bLocal_22))
				{
					REMOVE_BLIP(bLocal_22);
					bLocal_22 = "";
				}
				DECOR_REMOVE(bVar0, "iSpecificItem");
				Function_64(11, 0, 1);
			}
		}
	}
	return;
}

float Function_109(bool bParam0, bool bParam1) //Position: 0x7056 / 28758
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_111(bParam0);
			vVar0 = { StackVal, StackVal, Function_111(bParam0) };
			Function_110(bParam1);
			vVar3 = { StackVal, StackVal, Function_110(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

vector3 Function_110(bool bParam0) //Position: 0x70F6 / 28918
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

vector3 Function_111(bool bParam0) //Position: 0x7162 / 29026
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

float Function_112(bool bParam0, vector3 vParam1) //Position: 0x71CC / 29132
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_111(bParam0);
		vVar0 = { StackVal, StackVal, Function_111(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

int Function_113(bool bParam0, int iParam1) //Position: 0x7246 / 29254
{
	if (IS_ACTOR_HUMAN(bParam0))
	{
		if (GET_NUM_WEAPONS_IN_INVENTORY(bParam0) == 0)
		{
			TASK_FLEE_ACTOR(bParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
			TASK_PRIORITY_SET(bParam0, false);
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
	MEMORY_REPORT_POSITION_AUTO(bParam0, *iParam1, true);
	TASK_KILL_CHAR(bParam0, *iParam1);
	TASK_PRIORITY_SET(bParam0, true);
	return 1;
}

bool Function_114(var uParam0, struct<51> Param1) //Position: 0x732B / 29483
{
	if (Function_117((*uParam0)[0], 1, 0, 0, 0, 0, 0, 0, 0))
	{
		if (GET_LAST_ATTACKER((*uParam0)[0]) == Global_34573)
		{
			return 1;
		}
	}
	if (Function_117((*uParam0)[1], 1, 0, 0, 0, 0, 0, 0, 0))
	{
		if (GET_LAST_ATTACKER((*uParam0)[1]) == Global_34573)
		{
			return 1;
		}
	}
	if (Function_115(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param1))
	{
		return 1;
	}
	return 0;
}

bool Function_115(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50) //Position: 0x738D / 29581
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(*(&iParam0 + 8), StackVal, StackVal) + Vector(5.0f, 0.0f, 5.0f) };
	if (Function_116(StackVal, StackVal, Global_34573, vVar0, 6.0f))
	{
		return 1;
	}
	return 0;
}

bool Function_116(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x73B6 / 29622
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_111(bParam0);
		if (VDIST(Function_111(bParam0), vParam1) >= fParam4)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

bool Function_117(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x7440 / 29760
{
	int iVar0;
	
	if (bParam1)
	{
		Function_120(&iVar0, 1);
	}
	if (bParam2)
	{
		Function_120(&iVar0, 2);
	}
	if (bParam3)
	{
		Function_120(&iVar0, 4);
	}
	if (bParam4)
	{
		Function_120(&iVar0, 8);
	}
	if (bParam5)
	{
		Function_120(&iVar0, 1024);
	}
	if (bParam7)
	{
		Function_120(&iVar0, 16);
	}
	if (bParam8)
	{
		Function_120(&iVar0, 32);
	}
	if (bParam6)
	{
		Function_120(&iVar0, 1048576);
	}
	return Function_118(uParam0, iVar0);
}

int Function_118(bool bParam0, int iParam1) //Position: 0x74AF / 29871
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (Function_119(iParam1, 1))
			{
				if (IS_ACTOR_CRIPPLED(bParam0, 3) || IS_ACTOR_CRIPPLED(bParam0, 4))
				{
					return 0;
				}
			}
			if (Function_119(iParam1, 2))
			{
				if (IS_ACTOR_HOGTIED(bParam0))
				{
					return 0;
				}
			}
			if (Function_119(iParam1, 4))
			{
				if (IS_ACTOR_BEING_DRAGGED(bParam0, 1.0f))
				{
					return 0;
				}
			}
			if (Function_119(iParam1, 8))
			{
				if (UNK_0x7A207FFE(bParam0))
				{
					return 0;
				}
			}
			if (Function_119(iParam1, 1024))
			{
				if (!IS_ACTOR_RIDING(bParam0) && !IS_ACTOR_RIDING_VEHICLE(bParam0))
				{
					return 0;
				}
			}
			if (Function_119(iParam1, 16))
			{
				if (IS_ACTOR_RAGDOLL(bParam0))
				{
					return 0;
				}
			}
			if (Function_119(iParam1, 32))
			{
				if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
				{
					return 0;
				}
			}
			if (Function_119(iParam1, 64))
			{
				if (GET_ACTOR_INCAPACITATED(bParam0))
				{
					return 0;
				}
			}
			if (AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0) & 16384 == 16384)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

bool Function_119(var uParam0, int iParam1) //Position: 0x7588 / 30088
{
	return (uParam0 && iParam1) == 0;
}

void Function_120(int iParam0, int iParam1) //Position: 0x7595 / 30101
{
	Function_222(iParam0, iParam1);
	return;
}

void Function_121(bool bParam0, bool bParam1) //Position: 0x75A2 / 30114
{
	if (IS_ACTOR_VALID(bParam1))
	{
		switch (iLocal_92)
		{
			case 0x00000000:
				if (Function_155((*bParam0)[0], 0))
				{
					if (Function_129((*bParam0)[0], Global_34573) > 50.0f)
					{
						CLEAR_ALTERNATE_SPEECH_CONTEXT_FOR_PAIN((*bParam0)[0]);
						Function_102((*bParam0)[0], bParam1, "TreasureRobbers_msg01", "treasureHunter_msg01", 5, 60, 1, 1);
						iLocal_93 = 0;
						iLocal_92 = 1;
					}
				}
				else if (Function_155((*bParam0)[1], 0))
				{
					if (Function_129((*bParam0)[1], Global_34573) > 50.0f)
					{
						CLEAR_ALTERNATE_SPEECH_CONTEXT_FOR_PAIN((*bParam0)[1]);
						Function_102((*bParam0)[1], bParam1, "TreasureRobbers_msg01", "treasureHunter_msg01", 5, 60, 1, 1);
						iLocal_93 = 1;
						iLocal_92 = 1;
					}
				}
				break;
			
			case 0x00000001:
				if (Function_155((*bParam0)[iLocal_93], 0))
				{
					if (!IS_AMBIENT_SPEECH_PLAYING((*bParam0)[iLocal_93]))
					{
						iLocal_92 = 2;
					}
				}
				else
				{
					iLocal_92 = 8;
				}
				break;
			
			case 0x00000002:
				if (Function_155((*bParam0)[iLocal_93], 0))
				{
					if (Function_129((*bParam0)[iLocal_93], Global_34573) > 40.0f)
					{
						CLEAR_ALTERNATE_SPEECH_CONTEXT_FOR_PAIN(bParam1);
						Function_102(bParam1, (*bParam0)[iLocal_93], "TreasureRobbers_msg02", "treasureHunter_msg02", 5, 60, 1, 1);
						iLocal_92 = 3;
					}
				}
				else
				{
					iLocal_92 = 8;
				}
				break;
			
			case 0x00000003:
				if (!IS_AMBIENT_SPEECH_PLAYING(bParam1))
				{
					iLocal_92 = 4;
				}
				break;
			
			case 0x00000004:
				if (Function_155((*bParam0)[iLocal_93], 0))
				{
					if (Function_129((*bParam0)[iLocal_93], Global_34573) > 40.0f)
					{
						CLEAR_ALTERNATE_SPEECH_CONTEXT_FOR_PAIN((*bParam0)[iLocal_93]);
						Function_102((*bParam0)[iLocal_93], bParam1, "TreasureRobbers_msg03", "treasureHunter_msg03", 5, 60, 1, 1);
						iLocal_92 = 5;
					}
				}
				else
				{
					iLocal_92 = 8;
				}
				break;
			
			case 0x00000005:
				if (!IS_AMBIENT_SPEECH_PLAYING(bParam1))
				{
					Function_230(&uLocal_84, 0.0f);
					iLocal_92 = 6;
				}
				break;
			
			case 0x00000006:
				if (Function_122(&uLocal_84, 2.0f))
				{
					Function_102(bParam1, Global_34573, "VICTIMIZED", 0, 5, 60, 1, 1);
					Function_230(&uLocal_84, 0.0f);
					iLocal_92 = 7;
				}
				break;
			
			case 0x00000007:
				if (IS_AMBIENT_SPEECH_PLAYING(bParam1))
				{
					if (Function_122(&uLocal_84, 7.0f))
					{
						iLocal_92 = 6;
					}
				}
				else
				{
					Function_230(&uLocal_84, 0.0f);
				}
				break;
			
			case 0x00000008:
				break;
			}
	}
	return;
}

bool Function_122(var uParam0, float fParam1) //Position: 0x7853 / 30803
{
	if (Function_125(uParam0))
	{
		if (Function_123(uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_123(int iParam0) //Position: 0x786F / 30831
{
	if (Function_125(iParam0))
	{
		if (Function_124(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_124(int iParam0) //Position: 0x7937 / 31031
{
	return Function_77(*iParam0, 2);
}

bool Function_125(var uParam0) //Position: 0x7944 / 31044
{
	return Function_77(*uParam0, 1);
}

void Function_126() //Position: 0x7951 / 31057
{
	int iVar0;
	
	bLocal_95 = true;
	if (Global_29004 == 0)
	{
		iVar0 = Function_128(3);
		if (iVar0 == 0)
		{
			bLocal_94 = "FTR_SONG_01";
		}
		else if (iVar0 == 1)
		{
			bLocal_94 = "FTR_SONG_02";
		}
		else if (iVar0 == 2)
		{
			bLocal_94 = "FTR_SONG_04";
		}
	}
	else if (Global_29004 == 2)
	{
		if (Function_127())
		{
			bLocal_94 = "NRT_SONG_04";
		}
		else
		{
			bLocal_94 = "NRT_SONG_05";
		}
	}
	else if (Global_29004 == 1)
	{
		iVar0 = Function_128(3);
		if (iVar0 == 0)
		{
			bLocal_94 = "MEX_SONG_03";
		}
		else if (iVar0 == 1)
		{
			bLocal_94 = "MEX_SONG_04";
		}
		else
		{
			bLocal_94 = "MEX_SONG_06";
		}
	}
	AUDIO_MUSIC_FORCE_TRACK(bLocal_94, "SUSPENSE_LOW", -3.0f, 500, 4294967295, 3212836864, 0);
	iLocal_96 = 7;
	return;
}

bool Function_127() //Position: 0x7A5A / 31322
{
	return (RAND_INT_RANGE(false, 1999) / 1000) != 0;
}

int Function_128(bool bParam0) //Position: 0x7A6D / 31341
{
	bParam0 = (bParam0 * 1000 - 1);
	return (RAND_INT_RANGE(false, bParam0) / 1000);
}

float Function_129(bool bParam0, bool bParam1) //Position: 0x7A86 / 31366
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

void Function_130(bool bParam0) //Position: 0x7B77 / 31607
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

bool Function_131(bool bParam0, int iParam1, var uParam2, var uParam3, float fParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x7C01 / 31745
{
	int iVar0;
	
	iParam7 = iParam7;
	if (!bParam6)
	{
		iVar0 = 0;
		while (iVar0 <= iParam1)
		{
			if (Function_134((*bParam0)[iVar0], uParam3, fParam4, iParam5, bParam6, 0x40400000))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void Function_132(bool bParam0, bool bParam1) //Position: 0x7C49 / 31817
{
	Function_133(38);
	if (IS_ACTOR_VALID(*bParam1))
	{
		if (!IS_BLIP_VALID(bLocal_77))
		{
			if (IS_ACTOR_ALIVE(*bParam1))
			{
				if (iLocal_45 == 1)
				{
					Function_96("treasureHunter_obj02", 0x40f00000, 1, 2, 0, 0, 0);
				}
			}
			bLocal_77 = ADD_BLIP_FOR_ACTOR(*bParam1, 325, 0.0f, 3, 0);
		}
	}
	AI_SPEECH_SET_ALLOW_FOR_ACTOR((*bParam0)[0], 1);
	UNK_0x99AFD2D1((*bParam0)[0], 0, 0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR((*bParam0)[1], 1);
	UNK_0x99AFD2D1((*bParam0)[1], 0, 0);
	return;
}

void Function_133(bool bParam0) //Position: 0x7CCD / 31949
{
	Global_16876[bParam06].f_16++;
	if (Global_16876[bParam06].f_16 == 1)
	{
		Function_26(409, 1, 0, 0);
	}
	return;
}

bool Function_134(bool bParam0, var uParam1, float fParam2, int iParam3, bool bParam4, float fParam5) //Position: 0x7CFE / 31998
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
		fVar0 = Function_129(bParam0, Global_34573);
		if (!Function_77(iParam3, 8))
		{
			if (GET_LAST_ATTACKER(bParam0) == Global_34573)
			{
				*uParam1 = 8;
				Function_135(bParam0);
				return 1;
			}
		}
		if (!Function_77(iParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(bParam0, 1.0f))
			{
				*uParam1 = 2;
				Function_135(bParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(bParam0, 1.0f, 1.0f))
			{
				*uParam1 = 2;
				Function_135(bParam0);
				return 1;
			}
		}
		if (!Function_77(iParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(bParam0) || (((GET_ACTOR_UNDER_RETICLE(Global_34573, 0) != bParam0 && IS_PLAYER_WEAPON_ZOOMED(Global_34573)) && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(Global_34573) != bParam0 && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f))
			{
				if (*fParam2 > 0.0f)
				{
					*uParam1 = 4;
					Function_135(bParam0);
					return 1;
				}
				if (*fParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - *fParam2) < 1,3f)
					{
						*uParam1 = 4;
						Function_135(bParam0);
						return 1;
					}
				}
				*fParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_77(iParam3, 1))
		{
			if (Global_3403 || Global_3404)
			{
				*uParam1 = 1;
				Function_135(bParam0);
				return 1;
			}
		}
		if (!Function_77(iParam3, 16))
		{
			if (UNK_0x7F454A92(bParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(bParam0)) > 2.0f && fVar0 > 18.0f)
				{
					*uParam1 = 16;
					Function_135(bParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_135(bool bParam0) //Position: 0x7E95 / 32405
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(bParam0, 1);
	UNK_0x99AFD2D1(bParam0, 0, 0);
	Function_136(bParam0);
	MEMORY_CONSIDER_AS(Global_34573, bParam0, 2);
	MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
	AI_GOAL_LOOK_CLEAR(bParam0);
	return;
}

void Function_136(bool bParam0) //Position: 0x7EC9 / 32457
{
	SAY_SINGLE_LINE_CONTEXT(bParam0, 60, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

float Function_137(bool bParam0) //Position: 0x7EE0 / 32480
{
	var uVar0;
	float fVar1;
	
	if (!bParam0)
	{
		Function_138(&uVar0, &fVar1);
		if (fVar1 < 60.0f)
		{
			return (fVar1 + 20.0f);
		}
		return (fVar1 + 10.0f);
	}
	return (190.0f + 20.0f);
}

void Function_138(float fParam0, bool bParam1) //Position: 0x7F1B / 32539
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

void Function_139(vector3 vParam0, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7, bool bParam8) //Position: 0x7FA4 / 32676
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
	else if (!Function_166(StackVal, StackVal, vParam0))
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
			Function_151(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_150(0);
		}
		if (bParam8)
		{
			Function_148(0, GET_THIS_SCRIPT_ID());
			Global_3373 = GET_THIS_SCRIPT_ID();
			Function_146(iParam4);
			Global_3401 = 1;
		}
		Function_144(iParam4);
		if (Function_143(StackVal, 32768))
		{
			Function_140(1);
		}
		Global_16876[iParam46].f_12++;
		Function_26(408, 1, 0, 0);
	}
}

void Function_140(bool bParam0) //Position: 0x80AD / 32941
{
	if (bParam0)
	{
		Function_142(0x10000000);
	}
	else
	{
		Function_141(0x10000000);
	}
	Global_26316.f_172 = 0;
	return;
}

void Function_141(int iParam0) //Position: 0x80D1 / 32977
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_142(int iParam0) //Position: 0x80EE / 33006
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

bool Function_143(var uParam0, int iParam1) //Position: 0x8101 / 33025
{
	return (uParam0 && iParam1) == 0;
}

void Function_144(int iParam0) //Position: 0x810E / 33038
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (!Function_77(StackVal, 524288))
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
			bVar1 = Function_145(iVar0 * 60);
			ADD_TIME(&Global_17483[iParam075] + 264, 0, 0, bVar1, 0);
			Global_16876[iParam06] = Global_17483[iParam075].f_264;
		}
	}
	return;
}

int Function_145(int iParam0) //Position: 0x81B2 / 33202
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_146(int iParam0) //Position: 0x81C8 / 33224
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
	Function_147(&Var0 + 80[Var0.f_763], &(Global_16876[iParam06]), iParam0);
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

void Function_147(var uParam0, var uParam1, int iParam2) //Position: 0x8266 / 33382
{
	uParam0->f_4 = iParam2;
	*uParam0 = uParam1->f_12;
	uParam0->f_8 = 1;
	return;
}

void Function_148(int iParam0, bool bParam1) //Position: 0x827E / 33406
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= Global_25267)
	{
		iVar1 = 1;
		Global_25267[iVar058].f_84 = 0;
		if (Global_25267[iVar058].f_44 == bParam1)
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
			Function_149(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_149(int iParam0) //Position: 0x8300 / 33536
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

void Function_150(int iParam0) //Position: 0x834E / 33614
{
	Global_12976.f_76 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 76, 0, 0, (iParam0 + Function_145(900)), 0);
	return;
}

void Function_151(int iParam0) //Position: 0x8370 / 33648
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, (iParam0 + Function_145(200)), 0);
	return;
}

vector3 Function_152() //Position: 0x8391 / 33681
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_153(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6) //Position: 0x839A / 33690
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
			Function_151(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_150(0);
		}
		if (bParam6)
		{
			Function_148(0, GET_THIS_SCRIPT_ID());
			Global_3373 = GET_THIS_SCRIPT_ID();
			Global_3401 = 1;
			Function_146(iParam3);
		}
		Function_144(iParam3);
		if (Function_143(StackVal, 32768))
		{
			Function_140(1);
		}
		Global_16876[iParam36].f_12++;
		Function_26(408, 1, 0, 0);
	}
}

void Function_154() //Position: 0x8487 / 33927
{
	bool bVar0;
	
	if (IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
	{
		bVar0 = GET_MOUNT(Global_34573);
		if (bVar0 == bLocal_40)
		{
			if (IS_OBJECT_VALID(bLocal_49))
			{
				LEASH_BREAK(bLocal_49, 1056964608);
				DESTROY_OBJECT(bLocal_49);
			}
		}
	}
	return;
}

bool Function_155(bool bParam0, bool bParam1) //Position: 0x84BD / 33981
{
	if (bParam1)
	{
		if (IS_ACTOR_HOGTIED(bParam0))
		{
			if (!(GET_TASK_STATUS(bParam0, 25) != 1 || GET_TASK_STATUS(bParam0, 25) != 3))
			{
				MEMORY_CLEAR_EVENTS(bParam0, 0);
				TASK_FLEE_ACTOR(bParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
				TASK_PRIORITY_SET(bParam0, true);
			}
			Function_19(bParam0);
			return 0;
		}
		if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 163840))
		{
			Function_19(bParam0);
			return 0;
		}
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		if (Function_156(bParam0, 0) && !AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 16384))
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

int Function_156(bool bParam0, int iParam1) //Position: 0x8559 / 34137
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

vector3 Function_157(bool bParam0) //Position: 0x85A3 / 34211
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

vector3 Function_158(bool bParam0) //Position: 0x85B4 / 34228
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

int Function_159(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x85DB / 34267
{
	if (IS_ACTOR_VALID(bParam0) && IS_ACTOR_VALID(bParam1))
	{
		if (!bParam0 != GET_PLAYER_ACTOR(0))
		{
			MEMORY_CONSIDER_AS(bParam0, bParam1, bParam2);
			MEMORY_IDENTIFY(bParam0, bParam1);
		}
		if (iParam3 == 1)
		{
			if (!bParam1 != GET_PLAYER_ACTOR(0))
			{
				MEMORY_CONSIDER_AS(bParam1, bParam0, bParam2);
				MEMORY_IDENTIFY(bParam1, bParam0);
			}
		}
	}
	return 1;
}

void Function_160(bool bParam0, bool bParam1) //Position: 0x862E / 34350
{
	bool bVar0;
	
	if (DECOR_CHECK_EXIST(bParam0, "iAdditionalMoney"))
	{
		bVar0 = DECOR_GET_INT(bParam0, "iAdditionalMoney");
		bVar0 = (bVar0 + bParam1);
		DECOR_SET_INT(bParam0, "iAdditionalMoney", bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, "iAdditionalMoney", bParam1);
	}
	return;
}

void Function_161(var uParam0, var uParam1, var uParam2, float fParam3, vector3 vParam4) //Position: 0x86A9 / 34473
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
	}
}

int Function_162(bool bParam0, bool bParam1, var uParam2, float fParam3, int iParam4, vector3 vParam5) //Position: 0x874A / 34634
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

void Function_163() //Position: 0x87DE / 34782
{
	bLocal_49 = CREATE_LEASH_OBJECT(GET_OBJECT_FROM_ACTOR(bLocal_40), Function_232(), 1092616192, 10, 0, 0,006f, 10f, 10000f, 200f, 8f, 100f, 1f, 0, 0, 0);
	if (IS_OBJECT_VALID(bLocal_49))
	{
		LEASH_ATTACH_TO_OBJECT_BONE(bLocal_49, bLocal_40, "LowLip1", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0, 1, 1);
		LEASH_ATTACH_TO_OBJECT(bLocal_49, bLocal_80, 1,5f, 0,82f, -2.0f, 0.0f, 0.0f, 0.0f, 1, 1);
		LEASH_CONSTRAIN(bLocal_49);
		LEASH_RESTART(bLocal_49);
		LEASH_SET_CONSTRAINT_LENGTH(bLocal_49, 2,5f);
		LEASH_SET_LEASH_LENGTH(bLocal_49, 2,5f);
	}
	return;
}

void Function_164() //Position: 0x8880 / 34944
{
	return;
}

var Function_165(var uParam0, bool bParam1, char* cParam2, vector3 vParam3, vector3 vParam6, int iParam9) //Position: 0x8886 / 34950
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	int iVar7;
	bool bVar8;
	
	bVar0 = CREATE_PROPSET_IN_LAYOUT(uParam0, bParam1, cParam2, vParam3, vParam6);
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
				if (Function_71())
				{
					SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_OBJECT(bVar3), true);
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

bool Function_166(vector3 vParam0) //Position: 0x89CF / 35279
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

int Function_167(float fParam0, float fParam1, var uParam2, var uParam3, var uParam4) //Position: 0x89E7 / 35303
{
	vector3 vVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(*fParam0, 1.0f))
	{
		GET_CAMERA_POSITION(GET_GAME_CAMERA(), &vVar0);
		if (VDIST(*fParam0, vVar0) > 175.0f)
		{
		}
		return 0;
	}
	if (FIND_GROUND_INTERSECTION_WITH_MATERIAL(fParam0, fParam1, uParam2, uParam3, uParam4))
	{
		if (!Function_166(StackVal, StackVal, *uParam2))
		{
			return 1;
		}
	}
	*fParam0 = (*fParam0 + 0,01f);
	fParam0->f_8 = (StackVal + 0,01f);
	if (FIND_GROUND_INTERSECTION_WITH_MATERIAL(fParam0, fParam1, uParam2, uParam3, uParam4))
	{
		if (!Function_166(StackVal, StackVal, *uParam2))
		{
			return 1;
		}
	}
	return 0;
}

int Function_168(bool bParam0) //Position: 0x8A74 / 35444
{
	if (Function_71() || Global_34165.f_44)
	{
		return StackVal;
	}
	return StackVal;
}

float Function_169() //Position: 0x8A9C / 35484
{
	float fVar0;
	bool bVar1;
	
	if (Global_3371)
	{
		return 0.0f;
	}
	Function_138(&fVar0, &bVar1);
	if (fVar0 >= 50.0f)
	{
		return (fVar0 - 10.0f);
	}
	return (fVar0 - 20.0f);
}

bool Function_170(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x8ACD / 35533
{
	struct<8> Var0;
	bool bVar8;
	bool bVar9;
	
	if (Global_3371 && iParam0->f_32)
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_208(GET_SCRIPT_NAME()) };
		bVar8 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Global_26150, &Var0, 4,203895E-45f, Function_206(*(iParam0 + 8), 0.0f, Global_34573, *(iParam0 + 8)), 0.0f, iParam0->f_52, 20.0f, iParam0->f_52);
		DECOR_SET_INT(bVar8, "script", GET_THIS_SCRIPT_ID());
		if (iParam0->f_56 != 4294967295)
		{
			DECOR_SET_INT(StackVal, bVar8, "category");
			Function_204(&bVar8, iParam0->f_32);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
		*(iParam0 + 8) = { StackVal, StackVal, Global_34574 };
		return 1;
	}
	*uParam3 = 0;
	if (!Function_171(iParam0))
	{
		if (iParam0->f_32 == 1)
		{
			if (*uParam2 == 0)
			{
				Function_23("Still scanning for the proper terrain to run this event.  Move the player around to find a good spawn location.", -1.0f, 1, 2, 1, 0);
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
		Function_23("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 5.0f, 1, 2, 1, 0);
	}
	if (bParam4)
	{
		if (!Function_21(iParam0->f_56, 0, 1, 0, 0))
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
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_208("restrictVol") };
		bVar9 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Global_26150, &Var0, 4,203895E-45f, Function_206(*(iParam0 + 8), 0.0f, Global_34573, *(iParam0 + 8)), 0.0f, iParam0->f_52, 20.0f, iParam0->f_52);
		DECOR_SET_INT(bVar9, "script", GET_THIS_SCRIPT_ID());
		if (iParam0->f_56 != 4294967295)
		{
			DECOR_SET_INT(StackVal, bVar9, "category");
			Function_204(&bVar9, iParam0->f_32);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
	}
	return 1;
}

bool Function_171(int iParam0) //Position: 0x8E5F / 36447
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
			Function_203(iParam0 + 4);
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
				vVar3 = { 0.0f, 0.0f, Function_137(1) };
				ROTATE_VECTOR_XZ(&vVar3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar3, StackVal) };
				ITERATE_IN_SPHERE(StackVal, vVar3, Function_137(1));
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
						bVar0 = Function_202(StackVal, StackVal, StackVal, vVar9, 0,01f);
					}
					else
					{
						bVar0 = Function_201(StackVal, StackVal, StackVal, vVar9, 0,1f, "locflag", (iParam0 + 64 + 24)->f_16);
					}
				}
				else if ((iParam0 + 64 + 24)->f_16 == 0)
				{
					bVar0 = Function_200(StackVal, StackVal, StackVal, vVar9, Function_169());
				}
				else
				{
					bVar0 = Function_199(StackVal, StackVal, StackVal, vVar9, Function_169(), "locflag", (iParam0 + 64 + 24)->f_16);
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
			Function_203(iParam0 + 4);
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
					if (Function_198(bVar14))
					{
						if (StackVal == (iParam0 + 64)->f_48)
						{
							if ((StackVal && Global_29008[bVar14]) >= 0)
							{
								GET_OBJECT_POSITION(bVar1, &vVar3);
								if (VDIST(vVar9, vVar3) < fVar13 && VDIST(vVar9, vVar3) > Function_137(1))
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
				Function_197(iParam0 + 8, 99.0f, iParam0 + 8, 10);
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
				Function_196(&vVar9, &vVar6);
				vVar3 = { StackVal, StackVal, Function_196(&vVar9, &vVar6) };
				if (!Function_166(StackVal, StackVal, vVar3))
				{
					PRINTSTRING("Player Pos: ");
					PRINTVECTOR(vVar9);
					PRINTNL();
					Function_138(&fVar13, &bVar12);
					if (VDIST(vVar3, vVar9) < ((fVar13 + ((bVar12 - fVar13) / 2.0f)) * 0,8f))
					{
						iVar2 = Function_193(StackVal, StackVal, iParam0, vVar3);
					}
				}
			}
			else
			{
				iVar2 = Function_189(iParam0);
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
					if (!Function_188(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (iParam0->f_60 == 1)
				{
					if (!Function_187(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (Function_77(StackVal, 131072))
				{
					if (StackVal || Function_186(StackVal, Function_186(StackVal, StackVal, *(iParam0 + 8)), Global_34574))
					{
						return 0;
					}
				}
				if (StackVal & 1024 == 1024)
				{
					if (Function_185(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (!Function_181(iParam0 + 8, iParam0 + 52, 0, iParam0->f_32))
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
				vVar3 = { 0.0f, 0.0f, ((fVar13 + bVar12) * -0,5f) };
				ROTATE_VECTOR_XZ(&vVar3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar3, StackVal) };
				bVar23 = START_CURVE_QUERY(Global_28841, vVar3, Function_180((iParam0 + 64)->f_120, 0), 0.0f, 20.0f, 5.0f, 0);
			}
			else
			{
				bVar23 = START_CURVE_QUERY(Global_28841, vVar9, Function_180((iParam0 + 64)->f_120, 0), 120.0f, 150.0f, 5.0f, 0);
			}
			if (GET_NUM_POINTS_IN_CURVE_QUERY(bVar23) >= 0)
			{
				bVar21 = RAND_INT_RANGE(false, (GET_NUM_POINTS_IN_CURVE_QUERY(bVar23) - 1));
				GET_POINT_FROM_CURVE_QUERY(bVar23, bVar21, &Var15);
				Function_179(&Var15);
				*(iParam0 + 8) = { StackVal, StackVal, Function_179(&Var15) };
				iParam0->f_20 = Var15.f_12;
				(iParam0 + 20)->f_4 = Var15.f_16;
				iParam0->f_48 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(bVar23, bVar21);
				UNK_0xDF93BD7C(bVar23);
			}
			else
			{
				UNK_0xDF93BD7C(bVar23);
				return 0;
			}
			if (iParam0->f_60 == 2)
			{
				if (!Function_188(StackVal, StackVal, *(iParam0 + 8)))
				{
					return 0;
				}
			}
			if (iParam0->f_60 == 1)
			{
				if (!Function_187(StackVal, StackVal, *(iParam0 + 8)))
				{
					return 0;
				}
			}
			if (iParam0->f_60 == 0)
			{
				if (!(StackVal || Function_188(StackVal, Function_187(StackVal, StackVal, *(iParam0 + 8)), *(iParam0 + 8))))
				{
					return 0;
				}
			}
			if (Function_77(StackVal, 131072))
			{
				if (StackVal || Function_186(StackVal, Function_186(StackVal, StackVal, *(iParam0 + 8)), Global_34574))
				{
					return 0;
				}
			}
			if (StackVal && !Function_181(iParam0 + 8, iParam0 + 52, 0, iParam0->f_32) == 262144)
			{
				return 0;
			}
			break;
		
		case 0x00000004:
			if (!Function_176((iParam0 + 64)->f_120) < 0)
			{
				return 0;
			}
			break;
		
		case 0x00000007:
			switch ((iParam0 + 64)->f_128)
			{
				case 0x00000001:
					bVar24 = Function_173(StackVal, Global_29004, Global_29005, Global_29006, 1);
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
						bVar24 = Function_173(StackVal, Global_29004, Global_29005, (Global_29006 + iVar22), 1);
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
	if (Function_172(StackVal, StackVal, *(iParam0 + 8)))
	{
		return 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(*(iParam0 + 8), 10.0f))
	{
		return 0;
	}
	return 1;
}

bool Function_172(vector3 vParam0) //Position: 0x9689 / 38537
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

bool Function_173(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x96BE / 38590
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
								return Function_174(&Global_6298, &Global_7189, bParam3);
								break;
							
							case 0x00000001:
								return Function_174(&Global_6364, &Global_7287, bParam3);
								break;
							
							case 0x00000002:
								return Function_174(&Global_6351, &Global_7268, bParam3);
								break;
							
							default:
								return Function_174(&Global_6391, &Global_7327, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_174(&Global_6501, &Global_7490, bParam3);
								break;
							
							case 0x00000001:
								return Function_174(&Global_6402, &Global_7343, bParam3);
								break;
							
							case 0x00000003:
								return Function_174(&Global_6433, &Global_7389, bParam3);
								break;
							
							case 0x00000002:
								return Function_174(&Global_6490, &Global_7474, bParam3);
								break;
							
							case 0x00000004:
								return Function_174(&Global_6537, &Global_7543, bParam3);
								break;
							
							default:
								return Function_174(&Global_6532, &Global_7536, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_174(&Global_6563, &Global_7581, bParam3);
								break;
							
							case 0x00000001:
								return Function_174(&Global_6614, &Global_7657, bParam3);
								break;
							
							case 0x00000002:
								return Function_174(&Global_6643, &Global_7700, bParam3);
								break;
							
							default:
								return Function_174(&Global_6550, &Global_7562, bParam3);
								break;
						}
						break;
					
					case 0x00000003:
						switch (bVar1)
						{
							case 0x00000001:
								return Function_174(&Global_6667, &Global_7735, bParam3);
								break;
							
							default:
								return Function_174(&Global_6704, &Global_7790, bParam3);
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
								return Function_174(&Global_6709, &Global_7797, bParam3);
								break;
							
							case 0x00000001:
								return Function_174(&Global_6764, &Global_7879, bParam3);
								break;
							
							case 0x00000002:
								return Function_174(&Global_6785, &Global_7910, bParam3);
								break;
							
							default:
								return Function_174(&Global_6810, &Global_7947, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_174(&Global_6815, &Global_7954, bParam3);
								break;
							
							default:
								return Function_174(&Global_6928, &Global_8122, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000002:
								return Function_174(&Global_6933, &Global_8129, bParam3);
								break;
							
							case 0x00000001:
								return Function_174(&Global_6962, &Global_8172, bParam3);
								break;
							
							case 0x00000003:
								return Function_174(&Global_6987, &Global_8209, bParam3);
								break;
							
							default:
								return Function_174(&Global_7027, &Global_8268, bParam3);
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
		return Function_174(&Global_6298, &Global_7189, bParam3);
	}
	if (bVar1 == Global_30640[1])
	{
		return Function_174(&Global_6364, &Global_7287, bParam3);
	}
	if (bVar1 == Global_30640[2])
	{
		return Function_174(&Global_6351, &Global_7268, bParam3);
	}
	if (bVar1 == Global_30658[0])
	{
		return Function_174(&Global_6501, &Global_7490, bParam3);
	}
	if (bVar1 == Global_30658[1])
	{
		return Function_174(&Global_6402, &Global_7343, bParam3);
	}
	if (bVar1 == Global_30658[3])
	{
		return Function_174(&Global_6433, &Global_7389, bParam3);
	}
	if (bVar1 == Global_30658[2])
	{
		return Function_174(&Global_6490, &Global_7474, bParam3);
	}
	if (bVar1 == Global_30658[4])
	{
		return Function_174(&Global_6537, &Global_7543, bParam3);
	}
	if (bVar1 == Global_30668[0])
	{
		return Function_174(&Global_6563, &Global_7581, bParam3);
	}
	if (bVar1 == Global_30668[1])
	{
		return Function_174(&Global_6614, &Global_7657, bParam3);
	}
	if (bVar1 == Global_30668[2])
	{
		return Function_174(&Global_6643, &Global_7700, bParam3);
	}
	if (bVar1 == Global_30679[1])
	{
		return Function_174(&Global_6667, &Global_7735, bParam3);
	}
	if (bVar1 == Global_30685[0])
	{
		return Function_174(&Global_6709, &Global_7797, bParam3);
	}
	if (bVar1 == Global_30685[1])
	{
		return Function_174(&Global_6764, &Global_7879, bParam3);
	}
	if (bVar1 == Global_30685[2])
	{
		return Function_174(&Global_6785, &Global_7910, bParam3);
	}
	if (bVar1 == Global_30693[0])
	{
		return Function_174(&Global_6815, &Global_7954, bParam3);
	}
	if (bVar1 == Global_30707[2])
	{
		return Function_174(&Global_6933, &Global_8129, bParam3);
	}
	if (bVar1 == Global_30707[1])
	{
		return Function_174(&Global_6962, &Global_8172, bParam3);
	}
	if (bVar1 == Global_30707[3])
	{
		return Function_174(&Global_6987, &Global_8209, bParam3);
	}
	if (bVar1 == Global_30628[0])
	{
		return Function_174(&Global_6391, &Global_7327, bParam3);
	}
	if (bVar1 == Global_30628[1])
	{
		return Function_174(&Global_6532, &Global_7536, bParam3);
	}
	if (bVar1 == Global_30628[2])
	{
		return Function_174(&Global_6550, &Global_7562, bParam3);
	}
	if (bVar1 == Global_30628[3])
	{
		return Function_174(&Global_6704, &Global_7790, bParam3);
	}
	if (bVar1 == Global_30633[0])
	{
		return Function_174(&Global_6810, &Global_7947, bParam3);
	}
	if (bVar1 == Global_30633[2])
	{
		return Function_174(&Global_6928, &Global_8122, bParam3);
	}
	if (bVar1 == Global_30633[1])
	{
		return Function_174(&Global_7027, &Global_8268, bParam3);
	}
	return "";
}

var Function_174(var uParam0, var uParam1, bool bParam2) //Position: 0x9CD3 / 40147
{
	int iVar0;
	
	iVar0 = bParam2;
	if (iVar0 <= *uParam0 || iVar0 > 0)
	{
		return "";
	}
	if (!Function_175(uParam0[iVar02], 2))
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

bool Function_175(var uParam0, int iParam1) //Position: 0x9D25 / 40229
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_176(int iParam0) //Position: 0x9D41 / 40257
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
			if (Function_177(GET_SQUAD_FROM_OBJECT(bVar2)) == iParam0)
			{
				iVar0++;
			}
			bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
		}
	}
	DESTROY_ITERATOR(bVar1);
	return iVar0;
}

int Function_177(bool bParam0) //Position: 0x9D9C / 40348
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 4294967295;
	}
	bVar0 = Function_178(bParam0);
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

var Function_178(bool bParam0) //Position: 0x9DD4 / 40404
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

vector3 Function_179(int iParam0) //Position: 0x9E1A / 40474
{
	vector3 vVar0;
	
	vVar0.x = *iParam0;
	vVar0.f_4 = StackVal;
	vVar0.f_8 = StackVal;
	return StackVal, StackVal, vVar0;
}

int Function_180(int iParam0, int iParam1) //Position: 0x9E39 / 40505
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

bool Function_181(var uParam0, float fParam1, int iParam2, bool bParam3) //Position: 0x9E69 / 40553
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
	Function_183(4294967295);
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
			else if (Function_182(uParam0, &uVar0) > fVar5)
			{
				return 0;
			}
		}
		iVar3++;
	}
	return 1;
}

float Function_182(var uParam0, int iParam1) //Position: 0x9F39 / 40761
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*iParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

int Function_183(bool bParam0) //Position: 0x9F57 / 40791
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
						Function_184(iVar0);
					}
					else if (Global_3386)
					{
						if (Function_112(StackVal, StackVal, Global_34573, vVar1) < 25.0f)
						{
							Function_184(iVar0);
						}
					}
					else if (Function_112(StackVal, StackVal, Global_34573, vVar1) < 55.0f)
					{
						Function_184(iVar0);
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
			Function_184(iVar0);
		}
		iVar0++;
	}
	return 0;
}

void Function_184(int iParam0) //Position: 0xA0B8 / 41144
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

bool Function_185(vector3 vParam0) //Position: 0xA119 / 41241
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

int Function_186(vector3 vParam0) //Position: 0xA1BA / 41402
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

bool Function_187(vector3 vParam0) //Position: 0xA206 / 41478
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

bool Function_188(vector3 vParam0) //Position: 0xA25F / 41567
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
			{
				if (StackVal || (StackVal || (StackVal || StackVal != 3 != 4) != 5) != 6)
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int Function_189(int iParam0) //Position: 0xA2D0 / 41680
{
	float fVar0;
	bool bVar1;
	
	Function_138(&fVar0, &bVar1);
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER_PLAYER();
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	Function_192(0);
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
		Function_191(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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
	Function_190(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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

void Function_190(struct<33> Param0) //Position: 0xA46B / 42091
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

void Function_191(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14) //Position: 0xA597 / 42391
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

void Function_192(bool bParam0) //Position: 0xA5E8 / 42472
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

int Function_193(int iParam0, vector3 vParam1) //Position: 0xA62C / 42540
{
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER(vParam1);
	if (Global_30842[34])
	{
		PRINTVECTOR(vParam1);
		PRINTNL();
	}
	Function_195();
	Function_192(0);
	Function_194(0);
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
		Function_191(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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
	Function_190(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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

void Function_194(bool bParam0) //Position: 0xA7CE / 42958
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

void Function_195() //Position: 0xA881 / 43137
{
	AMBIENT_SET_DISTANCE_FILTER(0.0f, 24.0f);
	return;
}

vector3 Function_196(var uParam0, int iParam1) //Position: 0xA890 / 43152
{
	var uVar0;
	bool bVar6;
	float fVar7;
	bool bVar8;
	float fVar9;
	bool bVar10;
	vector3 vVar11;
	float fVar14;
	float fVar15;
	vector3 vVar16;
	vector3 vVar19;
	vector3 vVar22;
	int iVar25;
	int iVar31;
	
	bVar10 = START_CURVE_QUERY(Global_28841, *uParam0, 6,726233E-44f, 0.0f, 7.0f, 5.0f, 0);
	if (!GET_NUM_CURVES_IN_CURVE_QUERY(bVar10) < 0)
	{
		UNK_0xDF93BD7C(bVar10);
		vVar11 = { 0.0f, 0.0f, 0.0f };
		return StackVal, StackVal, vVar11;
	}
	GET_POINT_FROM_CURVE_QUERY(bVar10, false, &uVar0);
	bVar6 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(bVar10, false);
	if (IS_OBJECT_VALID(bVar6))
	{
		vVar16 = { StackVal, StackVal, *iParam1 };
		UNK_0x19D652F9(bVar6, 50.0f, &uVar0, &iVar25);
		UNK_0x19D652F9(bVar6, -50.0f, &uVar0, &iVar31);
		Function_179(&iVar25);
		vVar19 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*uParam0, Function_179(&iVar25), StackVal) };
		Function_179(&iVar31);
		vVar22 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*uParam0, Function_179(&iVar31), StackVal) };
		fVar15 = VDOT(&vVar16, &vVar19);
		fVar14 = VDOT(&vVar16, &vVar22);
		Function_138(&fVar7, &bVar8);
		fVar9 = ((fVar7 + bVar8) / 2.0f);
		if (fVar15 > 0.0f && fVar14 > 0.0f)
		{
			UNK_0xDF93BD7C(bVar10);
			vVar11 = { 0.0f, 0.0f, 0.0f };
			return StackVal, StackVal, vVar11;
		}
		if (fVar15 > fVar14)
		{
			UNK_0x19D652F9(bVar6, (fVar9 * -1.0f), &uVar0, &iVar31);
			Function_179(&iVar31);
			vVar11 = { StackVal, StackVal, Function_179(&iVar31) };
		}
		else
		{
			UNK_0x19D652F9(bVar6, fVar9, &uVar0, &iVar25);
			Function_179(&iVar25);
			vVar11 = { StackVal, StackVal, Function_179(&iVar25) };
		}
	}
	UNK_0xDF93BD7C(bVar10);
	return StackVal, StackVal, vVar11;
}

int Function_197(int iParam0, float fParam1, int iParam2, int iParam3) //Position: 0xA99D / 43421
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
	if (!STREAMING_ARE_BOUNDS_LOADED(*iParam0, 1.0f))
	{
		GET_CAMERA_POSITION(GET_GAME_CAMERA(), &vVar4);
		if (VDIST(*iParam0, vVar4) > 175.0f)
		{
			PRINTSTRING("Camera Position: ");
			PRINTVECTOR(vVar4);
			PRINTNL();
			PRINTSTRING("Probe Position: ");
			PRINTVECTOR(*iParam0);
			PRINTNL();
			PRINTSTRING("Distance");
			PRINTFLOAT(VDIST(*iParam0, vVar4));
			PRINTNL();
		}
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(iParam0, fParam1, iParam2, &uVar0))
	{
		if (!Function_166(StackVal, StackVal, *iParam2))
		{
			return 1;
		}
	}
	while (!IS_EXITFLAG_SET() && iVar3 > iParam3)
	{
		*iParam0 = (*iParam0 + 0,01f);
		iParam0->f_8 = (StackVal + 0,01f);
		if (FIND_GROUND_INTERSECTION(iParam0, fParam1, iParam2, &uVar0))
		{
			if (!Function_166(StackVal, StackVal, *iParam2))
			{
				return 1;
			}
		}
		*iParam2 = { StackVal, StackVal, *iParam0 };
		iParam2->f_4 = (StackVal - fParam1);
		if (!iParam3 != 4294967295)
		{
			iVar3++;
		}
		WAIT(false);
	}
	return 0;
}

bool Function_198(int iParam0) //Position: 0xAACF / 43727
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_199(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, var uParam6) //Position: 0xAAE5 / 43749
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
						if (Function_181(&vVar5, &fVar4, 0, 0))
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

var Function_200(bool bParam0, vector3 vParam1, float fParam4) //Position: 0xAB8D / 43917
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
				if (Function_181(&vVar5, &uVar4, 0, 0))
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

var Function_201(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, var uParam6) //Position: 0xAC16 / 44054
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

var Function_202(bool bParam0, vector3 vParam1, float fParam4) //Position: 0xACAB / 44203
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

int Function_203(int iParam0) //Position: 0xAD28 / 44328
{
	if (IS_ITERATOR_VALID(*iParam0))
	{
		ITERATE_EVERYWHERE(*iParam0);
		ITERATE_ON_PARTIAL_NAME(*iParam0, Function_232());
		ITERATE_ON_PARTIAL_MODEL_NAME(*iParam0, Function_232());
		ITERATE_ON_OBJECT_TYPE(*iParam0, 4294967295);
		return 1;
	}
	return 0;
}

int Function_204(bool bParam0, int iParam1) //Position: 0xAD59 / 44377
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
	Function_183(DECOR_GET_INT(*bParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
		}
		else
		{
			Function_205(iVar0, bParam0, &uVar1, iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(*bParam0);
	return 0;
}

void Function_205(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0xAEBA / 44730
{
	struct<8> Var0;
	
	Global_26155[iParam05].f_8 = *uParam1;
	Global_26155[iParam05].f_16 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_208("stayout") };
	Global_26155[iParam05].f_12 = CREATE_VOLUME_IN_LAYOUT(Global_26150, &Var0, 3, *iParam2, 0.0f, 0.0f, 0.0f, 12.0f, 5.0f, 12.0f);
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	if (bParam3)
	{
		Global_26155[iParam05].f_4 = ADD_BLIP_FOR_COORD(iParam2, 403, 0, 2, 0);
		SET_BLIP_BLINK(StackVal, 1, 1, 20.0f);
	}
}

var Function_206(bool bParam0, vector3 vParam1) //Position: 0xAF55 / 44885
{
	vector3 vVar0;
	var uVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		GET_POSITION(bParam0, &vVar0);
		Function_207(StackVal, StackVal, StackVal, StackVal, vVar0, vParam1, &uVar3);
		return UNK_0x9C40E671(&uVar3);
	}
	return 0.0f;
}

void Function_207(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0xAF85 / 44933
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

struct<32> Function_208(bool bParam0) //Position: 0xAFA8 / 44968
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_209("0", &cVar8, ""), 4);
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

struct<32> Function_209(char* cParam0, char* cParam1, char* cParam2) //Position: 0xB012 / 45074
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_210(int iParam0) //Position: 0xB031 / 45105
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_214();
	iVar1 = 0;
	if (!Function_4(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_213(iParam0[iVar03], 8);
		}
		else if (Function_212())
		{
			iVar1 = 1;
			Function_213(iParam0[iVar03], 8);
		}
		Function_213(iParam0[iVar03], 16);
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
				Function_213(iParam0[iVar03], 1);
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
							Function_213(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_213(iParam0[iVar03], 2);
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
							Function_213(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_213(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_213(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_213(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_213(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_213(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_213(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_213(iParam0[iVar03], 2);
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
	Function_211();
	return 1;
}

void Function_211() //Position: 0xB3AC / 45996
{
	if (!Function_78(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_212() //Position: 0xB3EC / 46060
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

void Function_213(var uParam0, int iParam1) //Position: 0xB417 / 46103
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_214() //Position: 0xB428 / 46120
{
	if (!Function_78(128))
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

void Function_215(bool bParam0, int iParam1) //Position: 0xB46A / 46186
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *bParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_216(bParam0[iVar0]);
		iVar0++;
	}
	return;
}

void Function_216(bool bParam0) //Position: 0xB497 / 46231
{
	if (IS_ACTOR_VALID(*bParam0))
	{
		SET_DRAW_ACTOR(*bParam0, true);
		CLEAR_ACTOR_MAX_SPEED(*bParam0);
		if (IS_ACTOR_ANIMAL(*bParam0))
		{
			ANIMAL_SPECIES_REL_SET_CAN_ATTACK(ANIMAL_ACTOR_GET_SPECIES(*bParam0), 0, 1);
		}
		else
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*bParam0, 0, true);
			MEMORY_ALLOW_SHOOTING(*bParam0, true);
		}
	}
	return;
}

void Function_217(var uParam0, int iParam1) //Position: 0xB4D9 / 46297
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_218(uParam0[iVar0]);
		iVar0++;
	}
	return;
}

void Function_218(int iParam0) //Position: 0xB506 / 46342
{
	if (IS_ACTOR_VALID(*iParam0))
	{
		SET_DRAW_ACTOR(*iParam0, false);
		SET_ACTOR_MAX_SPEED(*iParam0, 5);
		if (IS_ACTOR_ANIMAL(*iParam0))
		{
			ANIMAL_SPECIES_REL_SET_CAN_ATTACK(ANIMAL_ACTOR_GET_SPECIES(*iParam0), 0, 0);
		}
		else
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*iParam0, 0, false);
			MEMORY_ALLOW_SHOOTING(*iParam0, false);
		}
	}
	return;
}

bool Function_219(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xB549 / 46409
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

void Function_220(var uParam0, bool bParam1) //Position: 0xB5B1 / 46513
{
	if (IS_ACTOR_VALID((*uParam0)[0]))
	{
		Function_157((*uParam0)[0]);
		vLocal_58[03] = { StackVal, StackVal, Function_157((*uParam0)[0]) };
	}
	if (IS_ACTOR_VALID((*uParam0)[1]))
	{
		Function_157((*uParam0)[1]);
		vLocal_58[13] = { StackVal, StackVal, Function_157((*uParam0)[1]) };
	}
	if (IS_ACTOR_VALID(bParam1))
	{
		Function_157(bParam1);
		vLocal_55 = { StackVal, StackVal, Function_157(bParam1) };
	}
	return;
}

void Function_221(var uParam0, var uParam1, int iParam2) //Position: 0xB5FC / 46588
{
	return;
}

void Function_222(int iParam0, int iParam1) //Position: 0xB602 / 46594
{
	*iParam0 = (*iParam0 || iParam1);
	return;
}

bool Function_223(int iParam0) //Position: 0xB611 / 46609
{
	if (!iParam0 != 0)
	{
		LOG_ERROR("Asking about a player with an index not = 0. Multiplayer Law Enforcement not yet implemented.");
		return 0;
	}
	return Global_3403;
}

var Function_224(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xB687 / 46727
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_225(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_213(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_225(var uParam0, int iParam1, int iParam2) //Position: 0xB6BF / 46783
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_4(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_213(uParam0[iVar03], 4);
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

void Function_226(var uParam0, int iParam1) //Position: 0xB783 / 46979
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

var Function_227(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xB7A5 / 47013
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
			Function_213(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_213(uParam0[iVar03], 8);
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

var Function_228(int iParam0, int iParam1) //Position: 0xB875 / 47221
{
	int iVar0;
	
	iVar0 = (Global_16876[iParam06].f_12 % iParam1);
	return iVar0;
}

var Function_229(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xB88B / 47243
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
		bVar0 = (bVar0 * (0,75f + ((TO_FLOAT(Function_40(5)) / 100.0f) * 0,5f)));
	}
	if (bParam3)
	{
		if (HAS_ITEM(Function_66(17), Global_34573))
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

void Function_230(var uParam0, float fParam1) //Position: 0xB98D / 47501
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_222(uParam0, 1);
	Function_55(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_231(var uParam0) //Position: 0xB9AE / 47534
{
	if (!Function_125(uParam0))
	{
		Function_230(uParam0, 0.0f);
	}
	return;
}

var Function_232() //Position: 0xB9C3 / 47555
{
	var uVar0;
	
	return uVar0;
}

