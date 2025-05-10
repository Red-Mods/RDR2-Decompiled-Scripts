//Decompiled with MagicRDR v1.0
//Function Count : 219
//Statics Count : 207
//Natives Count : 381
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
	float fLocal_22 = 0.0f;
	bool bLocal_23[7] = { false, false, false, false, false, false, false };
	int iLocal_31[2] = { 0, 0 };
	bool bLocal_34 = false;
	bool bLocal_35 = false;
	bool bLocal_36 = false;
	var uLocal_37[5] = { 0, 0, 0, 0, 0 };
	bool bLocal_43 = false;
	vector3 vLocal_44[5] = {{ 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } };
	var uLocal_60[2] = { 0, 0 };
	vector3 vLocal_63 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_66 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_69 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_72 = { 0.0f, 0.0f, 0.0f };
	float fLocal_75 = 0.0f;
	vector3 vLocal_76 = { 0.0f, 0.0f, 0.0f };
	float fLocal_79 = 0.0f;
	vector3 vLocal_80 = { 0.0f, 0.0f, 0.0f };
	float fLocal_83 = 0.0f;
	int iLocal_84 = 0;
	var uLocal_85 = 0;
	vector3 vLocal_86[2] = {{ 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } };
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	bool bLocal_95 = false;
	bool bLocal_96 = false;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	bool bLocal_105 = false;
	int iLocal_106 = 0;
	bool bLocal_107 = false;
	bool bLocal_108 = false;
	bool bLocal_109 = false;
	bool bLocal_110 = false;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	bool bLocal_113 = false;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	bool bLocal_116 = false;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	struct<8> Local_119 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_127 = false;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	bool bLocal_130 = false;
	bool bLocal_131 = false;
	bool bLocal_132 = false;
	bool bLocal_133 = false;
	int iLocal_134 = 0;
	var uLocal_135 = 0;
	int iLocal_136 = 0;
	bool bLocal_137 = false;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	int iLocal_140[5] = { 0, 0, 0, 0, 0 };
	bool bLocal_146 = false;
	bool bLocal_147 = false;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	int iLocal_150 = 0;
	bool bLocal_151 = false;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	char* cLocal_154 = NULL;
	bool bLocal_155 = false;
	struct<57> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3[6];
	bool bVar10;
	int iVar11;
	var uVar12;
	bool bVar13;
	int iVar86;
	int iVar87;
	var uVar88;
	int iVar89;
	bool bVar90;
	bool bVar91;
	int iVar93;
	bool bVar94;
	int iVar95;
	bool bVar96;
	
	iLocal_14 = 0;
	iLocal_15 = 0;
	iLocal_21 = 0;
	fLocal_22 = 0.0f;
	iLocal_93 = 0;
	iLocal_94 = 0;
	bLocal_95 = true;
	bLocal_96 = false;
	iLocal_97 = 0;
	iLocal_98 = 0;
	iLocal_99 = 0;
	iLocal_100 = 0;
	iLocal_101 = 0;
	iLocal_102 = 0;
	iLocal_103 = 0;
	iLocal_104 = 0;
	bLocal_105 = false;
	iLocal_106 = 0;
	bLocal_107 = false;
	bLocal_108 = false;
	bLocal_109 = false;
	iLocal_129 = 0;
	iLocal_150 = 0;
	iLocal_153 = 0;
	bLocal_155 = false;
	iVar0 = 0;
	iVar1 = 0;
	bVar2 = CREATE_LAYOUT(Function_218());
	iVar3[0] = CREATE_POINT_IN_LAYOUT(bVar2, "Box01", -0.2782117f, 1.190343f, -0.3168345f, 0.0f, 8.446964f, 0.0f);
	iVar3[1] = CREATE_POINT_IN_LAYOUT(bVar2, "Box02", 0.3035942f, 1.190343f, -0.464067f, 0.0f, -5.249742f, 0.0f);
	iVar3[2] = CREATE_POINT_IN_LAYOUT(bVar2, "Box03", -0.357126f, 1.190343f, 0.5068948f, 0.0f, 2.257329f, 0.0f);
	iVar3[3] = CREATE_POINT_IN_LAYOUT(bVar2, "Box04", 0.2469973f, 1.190343f, 0.5566425f, 0.0f, 8.310966f, 0.0f);
	iVar3[4] = CREATE_POINT_IN_LAYOUT(bVar2, "Box05", 0.2282872f, 1.190343f, 1.404086f, 0.0f, 0.0f, 0.0f);
	iVar3[5] = CREATE_POINT_IN_LAYOUT(bVar2, "Box06", -0.3566571f, 1.190343f, 1.410799f, 0.0f, -6.674304f, 0.0f);
	bVar10 = false;
	iVar11 = 0;
	uVar12 = Function_216(2, 1, 1, 0, 0);
	bVar13 = 24;
	Function_215(&bLocal_110, 0.0f);
	iVar86 = 0;
	iVar87 = 8;
	if (Function_214(1, 1, 3))
	{
		uVar88 = Function_209(1, 1, 3);
	}
	else
	{
		iVar0 = 5;
	}
	vLocal_44[13] = { -10.0f, 0.0f, -10.0f };
	vLocal_44[23] = { 4.0f, 0.0f, 0.0f };
	vLocal_44[33] = { 6.0f, 0.0f, -6.0f };
	vLocal_44[43] = { 3.0f, 0.0f, 5.0f };
	if (!IS_POPSET_VALID(Global_30750[4]) || !Function_208(1))
	{
		iVar0 = 5;
	}
	else
	{
		uLocal_60[0] = Function_204(1, 0, 0, 0, 1);
		uLocal_60[1] = Function_204(1, 0, 0, 0, 1);
		iLocal_140[1] = 474;
		iVar89 = 2;
		while (iVar89 < 4)
		{
			iLocal_140[iVar89] = Function_196(Global_30750[4], 1, 2, 1);
			iVar89++;
		}
		iVar89 = 2;
		while (iVar89 < 4)
		{
			if (iLocal_140[iVar89] == 4294967295)
			{
				iVar0 = 5;
			}
			else
			{
				Function_195(&bVar13, iLocal_140[iVar89], 3, 0);
			}
			iVar89++;
		}
		if (iVar0 != 5)
		{
			if (uLocal_60[0] != 4294967295 || uLocal_60[1] != 4294967295)
			{
				iVar0 = 5;
			}
			else
			{
				Function_195(&bVar13, uLocal_60[0], 3, 0);
				Function_195(&bVar13, uLocal_60[1], 3, 0);
			}
		}
		if (iVar0 != 5)
		{
			Function_195(&bVar13, 1129, 3, 0);
			Function_193(&bVar13, "rand_idle_stand", 1, 0);
			Function_193(&bVar13, "loot_solo_loop", 1, 0);
			Function_193(&bVar13, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
			Function_193(&bVar13, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
			Function_193(&bVar13, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
			Function_193(&bVar13, "dead_ground_male", 5, 0);
			Function_193(&bVar13, "one_handed_wave", 5, 0);
			Function_193(&bVar13, "custom/one_handed_wave", 8, 0);
			Function_193(&bVar13, "excited_return", 5, 0);
			Function_193(&bVar13, "custom/excited_return", 8, 0);
			Function_193(&bVar13, "stand_wringhands_mobile", 5, 0);
			Function_193(&bVar13, "custom/stand_wringhands_mobile", 8, 0);
			Function_193(&bVar13, "thanks", 5, 0);
			Function_193(&bVar13, "custom/thanks", 8, 0);
			Function_195(&bVar13, iLocal_140[1], 3, 0);
			Function_195(&bVar13, 1199, 3, 0);
			iVar89 = 0;
			while (iVar89 <= 4)
			{
				Function_192(iLocal_140[iVar89 + 1]);
				iVar89++;
			}
		}
	}
	iVar93 = 0;
	if (Global_3382 == 1)
	{
		iVar0 = 5;
	}
	if (Function_191(0))
	{
		iVar0 = 5;
	}
	iVar95 = 0;
	bVar96 = false;
	if (Function_190())
	{
		iLocal_84 = "firstTimeManza_help01";
		uLocal_85 = "firstTimeManza_help09";
		vLocal_86[03] = { -1.0f, 1.0f, -4.0f };
		vLocal_86[13] = { 4.0f, 1.0f, -4.5f };
		vLocal_69 = { -426.631f, 151.292f, 1618.09f };
		vLocal_72 = { -147.76f, 122.799f, 1725.989f };
		fLocal_75 = 284.786f;
		vLocal_76 = { -135.568f, 124.758f, 1747.316f };
		fLocal_79 = 228.799f;
		vLocal_80 = { -147.171f, 123.617f, 1736.58f };
		fLocal_83 = 0.0f;
	}
	else
	{
		iLocal_84 = "firstTimeManza_help15";
		uLocal_85 = "firstTimeManza_help14";
		vLocal_86[03] = { -1.0f, 1.0f, -4.0f };
		vLocal_86[13] = { 4.0f, 1.0f, -4.5f };
		vLocal_69 = { -426.631f, 151.292f, 1618.09f };
		vLocal_72 = { -289.96f, 131.27f, 1315.04f };
		fLocal_75 = 14.89f;
		vLocal_76 = { -313.781f, 131.471f, 1308.167f };
		fLocal_79 = 343.72f;
		vLocal_80 = { -296.923f, 129.574f, 1298.41f };
		fLocal_83 = 197.0f;
	}
	while (!IS_EXITFLAG_SET())
	{
		bVar94 = 600;
		if (Function_189(&bVar96, &iVar0, &iVar95, &bVar94, bVar10))
		{
			if (bVar96)
			{
				Function_187(&uLocal_37, 4294967295);
			}
			else
			{
				Function_185(&uLocal_37, 4294967295);
			}
		}
		switch (iVar0)
		{
			case 0x00000000:
				if (Function_179(&bVar13))
				{
					bLocal_35 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_218(), bVar2, StackVal) + Vector(vLocal_86[03], vLocal_72, "loot_solo_loop"), 0.0f, (fLocal_75 - 40.0f), 0.0f);
					bLocal_36 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_218(), bVar2, StackVal) + Vector(vLocal_86[13], vLocal_72, "loot_solo_loop"), 0.0f, (fLocal_75 + 30.0f), 0.0f);
					GRINGO_LOAD_ANIMATION_FOR_ACTOR_ENUM_EXT(GET_GRINGO_FROM_OBJECT(bLocal_35), "UseCase1", "UseAnim", iLocal_140[2]);
					bVar94 = false;
					iVar0 = 1;
				}
				break;
			
			case 0x00000001:
				if (VDIST(Global_34574, vLocal_69) > 35.0f && !ScriptParam_0.f_32)
				{
					iVar0 = 5;
					bVar94 = false;
					break;
				}
				if (Function_178(StackVal, StackVal, vLocal_69, 0x3f800000, 0x42960000, 1, 1, 0) && !ScriptParam_0.f_32)
				{
					iVar0 = 5;
					break;
				}
				if (!Function_175(Global_30723[1]))
				{
					iVar0 = 5;
					break;
				}
				if (!bLocal_109)
				{
					if (GRINGO_HAS_ANIMSET_LOADED_FOR_ACTOR_ENUM_EXT(GET_GRINGO_FROM_OBJECT(bLocal_35), "UseCase1", "UseAnim", uLocal_60[0]))
					{
						bLocal_109 = true;
					}
				}
				if (!bLocal_108)
				{
					uLocal_37[0] = Function_172(&Global_7148, &Global_8447, 1, 0, 0, 1);
					bLocal_107 = true;
				}
				if (IS_ACTOR_VALID(uLocal_37[0]))
				{
					bLocal_108 = true;
					if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), uLocal_37[0], 1.0f, 45.0f, 1, 1, 0))
					{
						TELEPORT_ACTOR(uLocal_37[0], &vLocal_69, 1, 1, 1);
						TASK_FACE_ACTOR(uLocal_37[0], Global_34573, 1, -1.0f);
						DECOR_SET_BOOL(uLocal_37[0], "Stop_Crying", true);
					}
					else
					{
						iVar0 = 5;
					}
				}
				else
				{
					bVar94 = 1000;
					iLocal_129++;
				}
				if (iLocal_129 >= 8)
				{
					if (ScriptParam_0.f_32 == 1)
					{
						Function_171("RC ACTOR could not be stolen, please relaunch with X", 0x40800000, 0, 2, 1, 0);
					}
					iVar0 = 5;
				}
				if (bLocal_108)
				{
					if (bLocal_109)
					{
						bVar94 = false;
						iVar0 = 2;
					}
				}
				break;
			
			case 0x00000002:
				bVar91 = CREATE_VOLUME_IN_LAYOUT(bVar2, Function_218(), false, vLocal_72, 0.0f, 0.0f, 0.0f, 30.0f, 30.0f, 30.0f);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar91);
				SET_ACTOR_CAN_PLAY_GESTURES(uLocal_37[0], false);
				AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(uLocal_37[0], 0);
				SET_ACTOR_CAN_BE_HARDLOCKED(uLocal_37[0], 0);
				TASK_STAND_STILL(uLocal_37[0], -1.0f, 0, 0);
				if (bLocal_108)
				{
					bLocal_43 = Function_167(StackVal, StackVal, bVar2, Function_218(), 1199, 976, vLocal_72, 0.0f, fLocal_75, 0.0f, 1, 976, 976, 976, 2);
					AI_GLOBAL_SET_PERMANENT_DANGER(bLocal_43, 1);
					START_VEHICLE(bLocal_43);
					iVar89 = 0;
					while (iVar89 <= 6)
					{
						GET_OBJECT_POSITION(iVar3[iVar89], &vLocal_63);
						GET_OBJECT_ORIENTATION(iVar3[iVar89], &vLocal_66);
						bLocal_23[iVar89] = CREATE_PROP_IN_LAYOUT(bVar2, Function_218(), "p_gen_crate15x", vLocal_72, 0.0f, 0.0f, 0.0f, 0);
						ATTACH_OBJECTS_NO_DRV(bLocal_23[iVar89], bLocal_43, Function_218(), vLocal_63, vLocal_66);
						SET_OBJECT_COLLIDE_WITH_MOVABLES(bLocal_23[iVar89], 0);
						iVar89++;
					}
					PRINTVECTOR(*(&ScriptParam_0 + 8));
					PRINTNL();
					PRINTVECTOR(Global_34574);
					PRINTNL();
					Function_165(ScriptParam_0.f_56, 0.0f, 1, 0, ScriptParam_0.f_32);
					bVar90 = CREATE_VOLUME_IN_LAYOUT(Global_26150, Function_218(), 3, vLocal_69, 0.0f, 0.0f, 0.0f, ScriptParam_0.f_52, 30.0f, ScriptParam_0.f_52);
					DECOR_SET_INT(bVar90, "script", GET_THIS_SCRIPT_ID());
					Function_160(&bVar90, ScriptParam_0.f_32);
					AI_SPEECH_SET_ALLOW_FOR_ACTOR(uLocal_37[0], 0);
					UNK_0x99AFD2D1(uLocal_37[0], 1, 1);
					AI_SPEECH_SET_ALLOW_FOR_ACTOR(uLocal_37[1], 0);
					UNK_0x99AFD2D1(uLocal_37[1], 1, 1);
					Function_159(&iVar93, 1);
					Function_159(&iLocal_136, 1);
					iVar87 = 0;
					iVar0 = 3;
					bVar94 = false;
				}
				break;
			
			case 0x00000003:
				Function_158();
				Function_145(StackVal, StackVal, Function_158(), &bVar10, ScriptParam_0.f_56, uLocal_37[0], 100, 0x42a00000, 1);
				if (Function_142(uLocal_37[0], &iLocal_134, &fLocal_22, 0, 0, 0x40400000))
				{
					switch (iLocal_134)
					{
						case 0x00000008:
							Function_140("victimFailAggroAttacked", iLocal_97, 1);
							break;
						
						case 0x00000001:
						case 0x00000010:
							Function_140("victimFailAggroDanger", iLocal_97, 1);
							break;
						
						case 0x00000004:
							Function_140("victimFailAggroHostile", iLocal_97, 1);
							break;
						
						case 0x00000002:
							Function_140("victimFailAggroShot", iLocal_97, 1);
							break;
					}
					iVar89 = 0;
					while (iVar89 <= 5)
					{
						if (Function_138(uLocal_37[iVar89], 0))
						{
							TASK_WANDER(uLocal_37[iVar89], 3212836864);
							TASK_PRIORITY_SET(uLocal_37[iVar89], 2);
						}
						iVar89++;
					}
					RESET_ANIM_SET_FOR_ACTOR(uLocal_37[0], 1);
					Function_137(uLocal_37[0]);
					TASK_FLEE_ACTOR(uLocal_37[0], Global_34573, -1.0f, -1.0f, 0, 0, 0);
					iVar11 = 1;
					iVar0 = 5;
					bVar94 = false;
					break;
				}
				if (iLocal_98 && iVar1 > 9)
				{
					if (Function_135(&bLocal_137) < 300.0f)
					{
						Function_140("firstTimeChuparosa_timeout", iLocal_98, 1);
						iVar0 = 5;
						break;
					}
				}
				switch (iLocal_93)
				{
					case 0x00000000:
						if (!Function_134(&(uLocal_37[0]), &Global_34573, 150.0f, 0))
						{
							iVar0 = 5;
							bVar94 = false;
							break;
						}
						break;
					
					case 0x00000001:
						if (!Function_138(uLocal_37[0], 0))
						{
							Function_140("firstTimeManza_help02", iLocal_97, 1);
							iVar0 = 5;
							bVar94 = false;
							break;
						}
						if (!iLocal_99)
						{
							if (!Function_133(StackVal, StackVal, Global_34573, vLocal_72, 700.0f))
							{
								Function_132(uLocal_85, 0x41200000, 1, 0, 2, 1, 0);
								iLocal_99 = 1;
							}
						}
						if (!Function_133(StackVal, StackVal, Global_34573, vLocal_72, 800.0f) && iLocal_101 != 0)
						{
							Function_140("firstTimeManza_help03", iLocal_97, 1);
							iVar0 = 5;
							bVar94 = false;
							break;
						}
						if (!Function_131(bLocal_43, 1, 1, 3) && !bLocal_105 != 1)
						{
							if (iLocal_103)
							{
								Function_128("firstTimeManza_help12", 0x40f00000, 1, 2, 0, 0, 0, 0);
								iVar0 = 5;
								break;
							}
							else
							{
								Function_128("firstTimeManza_help08", 0x40f00000, 1, 2, 0, 0, 0, 0);
								iVar0 = 5;
								break;
							}
						}
						break;
					
					case 0x00000002:
						if (!Function_138(uLocal_37[0], 0))
						{
							Function_140("firstTimeManza_help02", iLocal_97, 1);
							iVar0 = 5;
						}
						if (!iLocal_100)
						{
							if (!Function_133(Global_34573, -431.522f, 152.568f, 1635.127f, 500.0f))
							{
								Function_132("firstTimeManza_help13", 0x41200000, 1, 0, 2, 1, 0);
								iLocal_100 = 1;
							}
						}
						if (!Function_133(Global_34573, -431.522f, 152.568f, 1635.127f, 600.0f))
						{
							if (iLocal_101 == 0)
							{
								Function_140("firstTimeManza_help03", iLocal_97, 1);
								iVar0 = 5;
								bVar94 = false;
								break;
							}
							else if (iLocal_101 == 1)
							{
								Function_140("firstTimeManza_help04", iLocal_97, 1);
								iVar0 = 5;
								bVar94 = false;
								break;
							}
						}
						if (!Function_131(bLocal_43, 1, 1, 3))
						{
							if (iLocal_103)
							{
								Function_128("firstTimeManza_help12", 0x40f00000, 1, 2, 0, 0, 0, 0);
								iVar0 = 5;
								break;
							}
							else
							{
								Function_128("firstTimeManza_help08", 0x40f00000, 1, 2, 0, 0, 0, 0);
								iVar0 = 5;
								break;
							}
						}
						break;
				}
				if (Function_50(&iVar1, &uLocal_37, uVar88, bVar2, uVar12, &bVar94))
				{
					iVar11 = 1;
					iVar0 = 5;
				}
				Function_39(bVar2);
				Function_24(&iVar87, &uLocal_37, bVar2);
				break;
			
			case 0x00000005:
				iVar0 = 6;
				bVar94 = false;
				break;
			
			case 0x00000006:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				bVar94 = false;
				break;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(bVar94);
		}
	}
	iVar89 = 0;
	while (iVar89 <= 6)
	{
		if (IS_OBJECT_VALID(iVar3[iVar89]))
		{
			RELEASE_OBJECT_REF(iVar3[iVar89]);
		}
		iVar89++;
	}
	Function_21();
	if (bLocal_155)
	{
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	}
	if (!IS_PLAYER_CONTROLLABLE(0))
	{
		TASK_CLEAR(Global_34573);
		SET_PLAYER_CONTROL(0, 1, 0, 0);
	}
	if (IS_AMBIENT_SPEECH_PLAYING(Global_34573))
	{
		CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(Global_34573);
	}
	if (IS_AMBIENT_SPEECH_PLAYING(uLocal_37[0]))
	{
		CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(uLocal_37[0]);
	}
	Function_185(&uLocal_37, 4294967295);
	Function_19(bLocal_43);
	if (iVar11 == 0)
	{
		Function_17(&uLocal_37, 4294967295);
	}
	iVar89 = 0;
	while (iVar89 <= 4)
	{
		Function_16(iLocal_140[iVar89 + 1]);
		iVar89++;
	}
	if (IS_BLIP_VALID(bLocal_127))
	{
		REMOVE_BLIP(bLocal_127);
	}
	Function_14(uLocal_37[0]);
	Function_14(bLocal_43);
	if (ScriptParam_0.f_32)
	{
		Global_3399 = 0;
	}
	if (Function_138(uLocal_37[0], 0))
	{
		AI_SPEECH_SET_ALLOW_FOR_ACTOR(uLocal_37[0], 1);
		UNK_0x99AFD2D1(uLocal_37[0], 0, 0);
	}
	if (Function_138(uLocal_37[1], 0))
	{
		AI_SPEECH_SET_ALLOW_FOR_ACTOR(uLocal_37[1], 1);
		UNK_0x99AFD2D1(uLocal_37[1], 0, 0);
	}
	if (bLocal_96)
	{
		Function_13();
	}
	Function_9(&bVar13);
	if (bLocal_107)
	{
		if (bLocal_108)
		{
			AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(uLocal_37[0], 1);
			AI_GOAL_LOOK_CLEAR(uLocal_37[0]);
			RESET_ANIM_SET_FOR_ACTOR(uLocal_37[0], 1);
			DECOR_REMOVE(uLocal_37[0], "Stop_Crying");
		}
		Function_1(&Global_7148, &Global_8447, 1, 0);
	}
	REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar91);
	REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar91);
	if (!bVar10)
	{
		Function_17(&uLocal_37, 4294967295);
		if (IS_OBJECT_VALID(bVar2))
		{
			UNK_0xA936E73B(bVar2, 1);
			MARK_OBJECT_FOR_AGGRESSIVE_CLEANUP(bVar2, 1);
		}
	}
	RELEASE_LAYOUT_REF(bVar2);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x104C / 4172
{
	int iVar0;
	
	iVar0 = iParam2;
	if (!iVar0 > *uParam0 && iVar0 <= 0)
	{
		return;
	}
	if (!Function_8(uParam0[iVar02], 1))
	{
		return;
	}
	if (!Function_8(uParam0[iVar02], 2))
	{
		return;
	}
	if (Function_8(uParam0[iVar02], 8))
	{
		STREAMING_EVICT_ACTOR((*uParam1)[iVar03], 4294967295);
		Function_7(uParam0[iVar02], 8);
	}
	Function_7(uParam0[iVar02], 1);
	if (!IS_PERS_CHAR_VALID(StackVal))
	{
		return;
	}
	Function_6(StackVal);
	if (bParam3)
	{
		Function_2(uParam0, uParam1, iParam2, 0);
	}
}

void Function_2(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x10E6 / 4326
{
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (!IS_PERS_CHAR_ALIVE(StackVal))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(StackVal) > GET_CURRENT_GAME_TIME())
			{
				Function_5(uParam0[iParam22], 4);
				uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
				ADD_TIME(uParam0[iParam22] + 4, Function_4(Global_29007), Function_3(Global_29007), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_8(uParam0[iParam22], 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(StackVal, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(StackVal);
			uParam1[iParam23]->f_8 = "";
		}
	}
	else if (!Function_8(uParam0[iParam22], 1) && !bParam3)
	{
		Function_5(uParam0[iParam22], 4);
		uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
		ADD_TIME(uParam0[iParam22] + 4, Function_4(Global_29007), Function_3(Global_29007), false, 0);
	}
}

int Function_3(int iParam0) //Position: 0x1235 / 4661
{
	switch (iParam0)
	{
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
			return 0;
			break;
		
		default:
			return 12;
			break;
	}
	return 0;
}

int Function_4(int iParam0) //Position: 0x1260 / 4704
{
	switch (iParam0)
	{
		case 0x00000003:
			return 5;
			break;
		
		case 0x00000004:
			return 3;
			break;
		
		case 0x00000005:
			break;
			return 1;
		
		default:
			return 0;
			break;
	}
	return 0;
}

void Function_5(var uParam0, int iParam1) //Position: 0x1294 / 4756
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

int Function_6(bool bParam0) //Position: 0x12A3 / 4771
{
	bool bVar0;
	bool bVar1;
	
	if (IS_PERS_CHAR_VALID(bParam0))
	{
		SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bParam0, 0);
		bVar0 = GET_ACTOR_FROM_PERS_CHAR(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			TASK_CLEAR(bVar0);
			DEREFERENCE_ACTOR(bVar0);
			TASK_PRIORITY_SET(bVar0, 3);
			SET_ACTOR_UPDATE_PRIORITY(bVar0, 2);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(bVar0, 0);
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar0, 1);
		}
		bVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
		if (IS_OBJECT_VALID(bVar1))
		{
			return GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(bVar1), "ScriptStructure", "stolen_flag", 0);
		}
	}
	return 0;
}

void Function_7(var uParam0, int iParam1) //Position: 0x133D / 4925
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_8(var uParam0, int iParam1) //Position: 0x1354 / 4948
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_9(int iParam0) //Position: 0x1370 / 4976
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_10(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_10(var uParam0, int iParam1) //Position: 0x1396 / 5014
{
	if (Function_12(uParam0[iParam13], 4))
	{
		if (Function_12(uParam0[iParam13], 1))
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
			Function_11(uParam0[iParam13], 1);
			Function_11(uParam0[iParam13], 2);
			Function_11(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_11(var uParam0, int iParam1) //Position: 0x14C4 / 5316
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_12(int iParam0, int iParam1) //Position: 0x14DE / 5342
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_13() //Position: 0x14FB / 5371
{
	if (Global_28185 == 2)
	{
		Global_28185.f_4 = 3;
	}
	*(&Global_28185 + 24) = { 0.0f, 0.0f, 0.0f };
	*(&Global_28185 + 36) = { 0.0f, 0.0f, 0.0f };
	CLEAR_GPS_PATH(1);
	return;
}

int Function_14(bool bParam0) //Position: 0x1526 / 5414
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_15(bParam0);
		return 1;
	}
	return 0;
}

void Function_15(bool bParam0) //Position: 0x153C / 5436
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

void Function_16(bool bParam0) //Position: 0x1568 / 5480
{
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(bParam0);
	return;
}

void Function_17(var uParam0, int iParam1) //Position: 0x1573 / 5491
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

void Function_18(int iParam0) //Position: 0x15A0 / 5536
{
	if (IS_ACTOR_VALID(*iParam0))
	{
		RESET_ANIM_SET_FOR_ACTOR(*iParam0, 0);
		TASK_FLEE_ACTOR(*iParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
		TASK_PRIORITY_SET(*iParam0, 0);
	}
	return;
}

int Function_19(bool bParam0) //Position: 0x15CB / 5579
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (!Function_20(bParam0))
		{
			RELEASE_ACTOR(bParam0);
			return 1;
		}
	}
	return 0;
}

bool Function_20(bool bParam0) //Position: 0x15EA / 5610
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(GET_OBJECT_FROM_ACTOR(bParam0))) == GET_GC_LAYOUT())
		{
			return 1;
		}
	}
	return 0;
}

void Function_21() //Position: 0x160C / 5644
{
	if (SQUAD_IS_VALID(bLocal_146))
	{
		Function_23(bLocal_146);
		Function_22(bLocal_146);
		SQUAD_MAKE_EMPTY(bLocal_146);
		DESTROY_OBJECT(bLocal_146);
	}
	return;
}

void Function_22(bool bParam0) //Position: 0x1631 / 5681
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			SQUAD_LEAVE(bVar1);
			RELEASE_ACTOR(bVar1);
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_23(bool bParam0) //Position: 0x1675 / 5749
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		TASK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0));
		bVar0++;
	}
	return;
}

void Function_24(var uParam0, var uParam1, bool bParam2) //Position: 0x16A7 / 5799
{
	if (iLocal_102 == 0)
	{
		iLocal_128 = 0;
		while (iLocal_128 <= 5)
		{
			if (iLocal_128 >= 0)
			{
				if (IS_ACTOR_VALID((*uParam1)[iLocal_128]))
				{
					if (ACTORS_IN_RANGE((*uParam1)[iLocal_128], Global_34573, 33.0f))
					{
						if (MEMORY_GET_IS_VISIBLE((*uParam1)[iLocal_128], Global_34573))
						{
							MEMORY_SET_WEAPON_DRAW_PREFERENCE((*uParam1)[iLocal_128], 0);
							Function_37((*uParam1)[4], Global_34573, "TAUNT_FIGHT", 0, 5, 60, 1, 1);
							Function_36(&bLocal_110);
							iLocal_102 = 1;
							AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
							*uParam0 = 6;
						}
					}
					if (Function_142((*uParam1)[iLocal_128], &uLocal_135, &fLocal_22, 0, 0, 0x40400000))
					{
						iLocal_102 = 1;
						AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
						*uParam0 = 6;
					}
				}
			}
			iLocal_128++;
		}
	}
	switch (*uParam0)
	{
		case 0x00000000:
			GET_OBJECT_POSITION(bLocal_43, &vLocal_63);
			if (STREAMING_ARE_BOUNDS_LOADED(vLocal_63, 10.0f))
			{
				SNAP_OBJECT_TO_GROUND(bLocal_35, 5.0f, false, 5.0f);
				SNAP_OBJECT_TO_GROUND(bLocal_36, 5.0f, false, 5.0f);
				GET_OBJECT_POSITION(bLocal_43, &vLocal_63);
				iLocal_128 = 0;
				while (iLocal_128 <= 5)
				{
					if (iLocal_128 >= 0)
					{
						(*uParam1)[iLocal_128] = Function_33(StackVal, StackVal, bParam2, Function_218(), iLocal_140[iLocal_128], vLocal_44[iLocal_1283], 0.0f, 0.0f, 0.0f, bLocal_43);
						TASK_STAND_STILL((*uParam1)[iLocal_128], -1.0f, 0, 0);
						MEMORY_CONSIDER_AS((*uParam1)[iLocal_128], Global_34573, 2);
						Function_32((*uParam1)[iLocal_128]);
						MEMORY_ATTACK_ON_SIGHT((*uParam1)[iLocal_128], 0);
						DECOR_SET_BOOL((*uParam1)[iLocal_128], "criminal", true);
					}
					iLocal_128++;
				}
				CREATE_CORPSE_IN_LAYOUT_RANDOM(StackVal, StackVal, StackVal, Vector(Function_218(), bParam2, StackVal) + Vector(vLocal_86[03], vLocal_72, uLocal_60[0]), 0.0f, (fLocal_75 - 40.0f), 0.0f, "dead_ground_male");
				CREATE_CORPSE_IN_LAYOUT_RANDOM(StackVal, StackVal, StackVal, Vector(Function_218(), bParam2, StackVal) + Vector(vLocal_86[13], vLocal_72, uLocal_60[1]), 0.0f, (fLocal_75 + 30.0f), 0.0f, "dead_ground_male");
				CREATE_DECAL(StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vLocal_86[03], vLocal_72, 0), 1.0f, 1, 0);
				CREATE_DECAL(StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vLocal_86[13], vLocal_72, 0), 1.0f, 1, 0);
				CREATE_GRINGO_IN_LAYOUT(bParam2, Function_218(), "pee", vLocal_76, 0.0f, fLocal_79, 0.0f);
				vLocal_63 = { StackVal, StackVal, vLocal_76 };
				bLocal_130 = LOCATE_GRINGO_OF_TYPE("pee", &vLocal_63, 3.0f, 0);
				SNAP_ACTOR_TO_GRINGO((*uParam1)[1], GET_OBJECT_FROM_GRINGO(bLocal_130), "UseCase1", 1, 0, 0);
				TASK_USE_GRINGO((*uParam1)[1], bLocal_130, "UseCase1", 4294967295, 1);
				iLocal_31[0] = CREATE_GRINGO_IN_LAYOUT(bParam2, Function_218(), "stand_lookdistance_w_any", vLocal_80, 0.0f, fLocal_83, 0.0f);
				SNAP_OBJECT_TO_GROUND(iLocal_31[0], 5.0f, false, 1092616192);
				DECOR_SET_BOOL((*uParam1)[1], "VolOnly", true);
				bLocal_131 = CREATE_VOLUME_IN_LAYOUT(bParam2, Function_218(), false, vLocal_80, 0.0f, fLocal_83, 0.0f, 3.0f, 3.0f, 3.0f);
				DECOR_SET_OBJECT(iLocal_31[0], "volume", bLocal_131);
				iLocal_31[1] = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_218(), bParam2, StackVal) + Vector(vLocal_44[33], vLocal_72, "stand_lookdistance_w_any"), 0.0f, 0.0f, 0.0f);
				SNAP_OBJECT_TO_GROUND(iLocal_31[1], 5.0f, false, 1092616192);
				DECOR_SET_BOOL((*uParam1)[3], "VolOnly", true);
				bLocal_131 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_218(), bParam2, StackVal) + Vector(vLocal_44[33], vLocal_72, 0), 0.0f, 0.0f, 0.0f, 3.0f, 3.0f, 3.0f);
				DECOR_SET_OBJECT(iLocal_31[1], "volume", bLocal_131);
				SNAP_ACTOR_TO_GRINGO((*uParam1)[3], iLocal_31[1], "UseCase1", 1, 0, 0);
				TASK_USE_GRINGO((*uParam1)[3], GET_GRINGO_FROM_OBJECT(iLocal_31[1]), "UseCase1", 4294967295, 1);
				bLocal_34 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_218(), bParam2, StackVal) + Vector(vLocal_44[43], vLocal_72, "rand_idle_stand"), 0.0f, 0.0f, 0.0f);
				SNAP_ACTOR_TO_GRINGO((*uParam1)[4], bLocal_34, "UseCase1", 1, 0, 0);
				TASK_USE_GRINGO((*uParam1)[4], GET_GRINGO_FROM_OBJECT(bLocal_34), "UseCase1", 4294967295, 1);
				*uParam0 = 1;
			}
			break;
		
		case 0x00000001:
			SNAP_ACTOR_TO_GRINGO((*uParam1)[2], bLocal_35, "UseCase1", 1, 0, 0);
			TASK_USE_GRINGO((*uParam1)[2], GET_GRINGO_FROM_OBJECT(bLocal_35), "UseCase1", 4294967295, 1);
			*uParam0 = 2;
			break;
		
		case 0x00000002:
			if (ACTORS_IN_RANGE(Global_34573, bLocal_43, 35.0f))
			{
				Function_37((*uParam1)[1], (*uParam1)[2], "firstTimeManza_msg04", "firstTimeManza_msg04", 2, 60, 1, 1);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR((*uParam1)[1], 1);
				UNK_0x99AFD2D1((*uParam1)[1], 0, 0);
				TASK_USE_GRINGO((*uParam1)[2], GET_GRINGO_FROM_OBJECT(bLocal_36), "UseCase1", 1, 1);
				Function_215(&bLocal_113, 0.0f);
				*uParam0 = 4;
			}
			break;
		
		case 0x00000003:
			break;
		
		case 0x00000004:
			if (Function_29(&bLocal_113, 5.0f))
			{
				TASK_VEHICLE_ENTER_SPECIFIC_LOCATION((*uParam1)[4], bLocal_43, 0, 2, 0);
				*uParam0 = 5;
			}
			break;
		
		case 0x00000005:
			if (GET_ACTOR_IN_VEHICLE_SEAT(bLocal_43, false) == (*uParam1)[4])
			{
				iLocal_103 = 1;
				TASK_CLEAR((*uParam1)[4]);
				TASK_CLEAR((*uParam1)[2]);
				Function_158();
				vLocal_63 = { StackVal, StackVal, Function_158() };
				Function_27((*uParam1)[4], 0.0f, 0.0f, 0.0f, 16, 4, 2, 1);
				Function_27((*uParam1)[1], 0.0f, 0.0f, 0.0f, 16, 4, 2, 1);
				Function_27((*uParam1)[3], 0.0f, 0.0f, 0.0f, 16, 4, 2, 1);
				*uParam0 = 7;
			}
			break;
		
		case 0x00000006:
			iLocal_128 = 0;
			while (iLocal_128 <= 5)
			{
				if (iLocal_128 >= 0)
				{
					if (Function_138((*uParam1)[iLocal_128], 0))
					{
						RESET_ANIM_SET_FOR_ACTOR((*uParam1)[iLocal_128], 1);
						Function_26((*uParam1)[iLocal_128], Global_34573, 4, 1);
						ADD_BLIP_FOR_ACTOR((*uParam1)[iLocal_128], 322, 0, 2, 0);
						if (!IS_ACTOR_RIDING_AND_IN_SADDLE((*uParam1)[iLocal_128]) && !IS_ACTOR_RIDING_VEHICLE((*uParam1)[iLocal_128]))
						{
							Function_25((*uParam1)[iLocal_128], &Global_34573);
						}
						else
						{
							Function_26((*uParam1)[iLocal_128], Global_34573, 4, 1);
							ADD_BLIP_FOR_ACTOR((*uParam1)[iLocal_128], 322, 0, 2, 0);
						}
					}
				}
				iLocal_128++;
			}
			*uParam0 = 7;
			break;
		
		case 0x00000007:
			if (iLocal_103 == 1)
			{
				if (GET_ACTOR_IN_VEHICLE_SEAT(bLocal_43, false) != (*uParam1)[4])
				{
					iLocal_103 = 0;
				}
			}
			if (ACTORS_IN_RANGE(Global_34573, (*uParam1)[0], 70.0f))
			{
				iLocal_128 = 0;
				while (iLocal_128 <= 5)
				{
					if (iLocal_128 >= 0)
					{
						if (IS_ACTOR_VALID((*uParam1)[iLocal_128]))
						{
							Function_15((*uParam1)[iLocal_128]);
							TASK_FLEE_ACTOR((*uParam1)[iLocal_128], (*uParam1)[0], -1.0f, -1.0f, 0, 0, 0);
							RELEASE_ACTOR((*uParam1)[iLocal_128]);
						}
					}
					iLocal_128++;
				}
				iLocal_94 = 1;
				*uParam0 = 8;
			}
			if (iLocal_102 == 1)
			{
				if (iLocal_94 == 0)
				{
					if (((!Function_138((*uParam1)[1], 1) && !Function_138((*uParam1)[2], 1)) && !Function_138((*uParam1)[4], 1)) && !Function_138((*uParam1)[3], 1))
					{
						iLocal_94 = 1;
					}
				}
			}
			if (bLocal_105 == 1)
			{
				*uParam0 = 8;
			}
			break;
		
		case 0x00000008:
			break;
	}
	return;
}

int Function_25(bool bParam0, int iParam1) //Position: 0x1DA8 / 7592
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

int Function_26(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x1E8D / 7821
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

void Function_27(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x1EE0 / 7904
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
	if (!Function_28(StackVal, StackVal, vParam1))
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

bool Function_28(vector3 vParam0) //Position: 0x1FE8 / 8168
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

bool Function_29(bool bParam0, float fParam1) //Position: 0x2000 / 8192
{
	if (Function_30(bParam0))
	{
		if (Function_135(bParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_30(int iParam0) //Position: 0x201C / 8220
{
	return Function_31(*iParam0, 1);
}

bool Function_31(var uParam0, int iParam1) //Position: 0x2029 / 8233
{
	return (uParam0 && iParam1) == 0;
}

void Function_32(bool bParam0) //Position: 0x2036 / 8246
{
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(bParam0, "nocrime"))
	{
		DECOR_SET_BOOL(bParam0, "nocrime", true);
	}
	return;
}

var Function_33(bool bParam0, bool bParam1, bool bParam2, vector3 vParam3, vector3 vParam6, var uParam9) //Position: 0x206A / 8298
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	
	vVar0 = { StackVal, StackVal, vParam3 };
	vVar3 = { StackVal, StackVal, vParam6 };
	Function_34(uParam9, 0, &vVar0, &vVar3);
	bVar6 = CREATE_ACTOR_IN_LAYOUT(bParam0, bParam1, bParam2, vVar0, vVar3);
	SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_ACTOR(bVar6), 50.0f, false, 1092616192);
	return bVar6;
}

void Function_34(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x20B5 / 8373
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (GET_OBJECT_RELATIVE_POSITION(bParam0, *uParam2, &vVar0))
	{
		if (bParam1)
		{
			if (!Function_35(&vVar0, uParam2))
			{
				*uParam2 = { StackVal, StackVal, vVar0 };
			}
		}
		else
		{
			*uParam2 = { StackVal, StackVal, vVar0 };
		}
	}
	else
	{
		LOG_ERROR("Failed to get object relative position - perhaps the object type does not support transformations");
	}
	if (!GET_OBJECT_RELATIVE_ORIENTATION(bParam0, *uParam3, &vVar0))
	{
		LOG_ERROR("Failed to get object relative rotation - perhaps the object type does not support transformations");
		*uParam3 = { StackVal, StackVal, vVar0 };
	}
}

bool Function_35(int iParam0, int iParam1) //Position: 0x21DD / 8669
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(*iParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_28(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	*iParam0 = (*iParam0 + 0.01f);
	iParam0->f_8 = (StackVal + 0.01f);
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_28(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	return 0;
}

void Function_36(bool bParam0) //Position: 0x2248 / 8776
{
	Function_215(bParam0, 0.0f);
	return;
}

void Function_37(bool bParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x2254 / 8788
{
	bParam1 = bParam1;
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0) && Function_38(bParam0, Global_34573) >= IntToFloat(iParam5))
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

float Function_38(bool bParam0, bool bParam1) //Position: 0x22E4 / 8932
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

void Function_39(bool bParam0) //Position: 0x23D5 / 9173
{
	bool bVar0;
	vector3 vVar1;
	int iVar4;
	vector3 vVar5;
	vector3 vVar11;
	bool bVar14;
	bool bVar15;
	
	switch (iLocal_150)
	{
		case 0x00000000:
			if (!IS_OBJECT_VALID(bVar0))
			{
				Local_119 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_48("nbirdpoint") };
				vVar1 = { StackVal, StackVal, vLocal_72 };
				bVar0 = CREATE_POINT_IN_LAYOUT(bParam0, &Local_119, vVar1, 0.0f, 0.0f, 0.0f);
				iVar4 = 1;
			}
			Local_119 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_48("nbirdSquad") };
			bLocal_146 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bParam0, &Local_119));
			if (SQUAD_IS_VALID(bLocal_146))
			{
				Function_42(Global_28841, bLocal_146, 6, bVar0, 1129, 33.0f);
				Function_41(bLocal_146, 0);
			}
			if (iVar4 == 1)
			{
				DESTROY_OBJECT(bVar0);
			}
			Function_36(&bLocal_147);
			iLocal_150 = 1;
			break;
		
		case 0x00000001:
			if (Function_29(&bLocal_147, 7.0f))
			{
				vVar1 = { StackVal, StackVal, vLocal_72 };
				bVar15 = false;
				while (bVar15 < (SQUAD_GET_SIZE(bLocal_146) - 1))
				{
					bVar14 = SQUAD_GET_ACTOR_BY_INDEX(bLocal_146, bVar15);
					vVar11 = { 0.0f, 0.0f, RAND_FLOAT_RANGE(3.0f, 9.0f) };
					ROTATE_VECTOR_XZ(&vVar11, RAND_FLOAT_RANGE(0.0f, 360.0f), 0);
					vVar5 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar11, vVar1, StackVal) };
					TASK_BIRD_SOAR_AT_COORD(bVar14, &vVar5, -1.0f, 1106247680);
					bVar15++;
				}
				Function_40(bLocal_146, 1);
				Function_36(&bLocal_147);
			}
			break;
		
		case 0x00000002:
			Function_21();
			iLocal_150 = 3;
			break;
		
		case 0x00000003:
			break;
	}
	return;
}

void Function_40(bool bParam0, int iParam1) //Position: 0x250D / 9485
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			TASK_PRIORITY_SET(bVar1, iParam1);
		}
		bVar0++;
	}
	return;
}

void Function_41(bool bParam0, bool bParam1) //Position: 0x2548 / 9544
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			SET_ACTOR_UPDATE_PRIORITY(bVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_42(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0x2589 / 9609
{
	vector3 vVar0;
	vector3 vVar3;
	struct<8> Var6;
	struct<2> Var14;
	bool bVar16;
	int iVar17;
	
	Function_46(10.0f);
	Var14 = { StackVal, Function_46(10.0f) };
	if (SQUAD_IS_VALID(bParam1))
	{
		if (!Function_45(bParam4) || bParam4 != 0)
		{
			bVar16 = Function_204(128, 0, 0, 4294967295, 0);
		}
		else
		{
			bVar16 = bParam4;
		}
		iVar17 = 0;
		while (iVar17 < (iParam2 - 1))
		{
			Function_43(&Var14, iVar17);
			GET_OBJECT_RELATIVE_POSITION(uParam3, Function_43(&Var14, iVar17), &vVar0);
			vVar0.f_4 = (vVar0.y + (fParam5 + RAND_FLOAT_RANGE(0.0f, 20.0f)));
			vVar3.f_4 = RAND_FLOAT_RANGE(0.0f, 360.0f);
			Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_48("genbird_") };
			SQUAD_JOIN(CREATE_ACTOR_IN_LAYOUT(bParam0, &Var6, bVar16, vVar0, vVar3), bParam1);
			iVar17++;
		}
	}
	else
	{
		LOG_ERROR("CREATE_BIRD_SQUAD_IN_LAYOUT - birdSquad passed in is not squad");
	}
}

vector3 Function_43(var uParam0, bool bParam1) //Position: 0x267B / 9851
{
	vector3 vVar0;
	
	if (!Function_44(uParam0))
	{
		LOG_ERROR("Attempting to GET_FORMATION_POSITION with invalid FORMATION");
		return 0.0f, 0.0f, 0.0f;
	}
	if (bParam1 <= 0)
	{
		PRINTSTRING(GET_OBJECT_NAME(*uParam0));
		LOG_ERROR("Attempting to get invalid formation index - less than zero");
		return 0.0f, 0.0f, 0.0f;
	}
	if (bParam1 >= (GET_NUM_FORMATION_LOCATIONS(*uParam0) - 1))
	{
		PRINTSTRING(GET_OBJECT_NAME(*uParam0));
		PRINTSTRING(" ");
		PRINTINT(GET_NUM_FORMATION_LOCATIONS(*uParam0));
		PRINTNL();
		LOG_ERROR("Attempting to get invalid formation index - too large!");
		return 0.0f, 0.0f, 0.0f;
	}
	GET_FORMATION_LOCATION(*uParam0, bParam1, &vVar0);
	vVar0.x = (StackVal * vVar0.x);
	vVar0.f_4 = (StackVal * vVar0.y);
	vVar0.f_8 = (StackVal * vVar0.z);
	return StackVal, StackVal, vVar0;
}

bool Function_44(int iParam0) //Position: 0x27BC / 10172
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

bool Function_45(bool bParam0) //Position: 0x27DE / 10206
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_46(int iParam0) //Position: 0x27F5 / 10229
{
	Function_47(iParam0, 10);
	return StackVal, Function_47(iParam0, 10);
}

struct<8> Function_47(var uParam0, int iParam1) //Position: 0x2802 / 10242
{
	struct<2> Var0;
	
	Var0.f_4 = uParam0;
	Var0 = Global_26121[iParam1];
	return StackVal, Var0;
}

struct<32> Function_48(bool bParam0) //Position: 0x281B / 10267
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_49("0", &cVar8, ""), 4);
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

struct<32> Function_49(char* cParam0, char* cParam1, char* cParam2) //Position: 0x2885 / 10373
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_50(var uParam0, var uParam1, var uParam2, bool bParam3, var uParam4, var uParam5) //Position: 0x28A4 / 10404
{
	bool bVar0;
	bool bVar1;
	
	uParam2 = uParam2;
	switch (*uParam0)
	{
		case 0x00000000:
			*uParam0 = 1;
			break;
		
		case 0x00000001:
			if (Function_127(&iLocal_21, (*uParam1)[0], &bLocal_110, &bLocal_127, "one_handed_wave", "one_handed_wave/one_handed_wave_mobile/wave", "firstTimeManza_msg03", "firstTimeManza_msg03", "firstTimeManza_msg01", "firstTimeManza_msg01", "", "", 5.0f, 5.0f, 35.0f, 20.0f, "stand_wringhands_mobile", "stand_wringhands_mobile"))
			{
				AI_GOAL_LOOK_AT_ACTOR_NEW((*uParam1)[0], Global_34573, -1f, 0);
				*uParam0 = 2;
				Function_215(&bLocal_110, 0.0f);
				Function_36(&bLocal_137);
			}
			break;
		
		case 0x00000002:
			if (Function_125(&bLocal_110, 0.0f))
			{
				Function_37((*uParam1)[0], Global_34573, "firstTimeManza_msg02", "firstTimeManza_msg02", 5, 60, 1, 1);
			}
			if (!IS_AMBIENT_SPEECH_PLAYING((*uParam1)[0]))
			{
				bLocal_132 = CREATE_VOLUME_IN_LAYOUT(bParam3, Function_218(), false, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 10.0f, 4.0f, 10.0f);
				bLocal_133 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("firstTimeManza_context", bLocal_132, 10, 5, 0, false, 0, 0, 4294967295, 0);
				ATTACH_OBJECTS(GET_OBJECT_FROM_VOLUME(bLocal_132), (*uParam1)[0], Function_218(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
				*uParam0 = 3;
				Function_36(&bLocal_137);
			}
			break;
		
		case 0x00000003:
			if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(bLocal_133))
			{
				Function_124();
				AI_GOAL_LOOK_CLEAR((*uParam1)[0]);
				SAY_SINGLE_LINE_CONTEXT(Global_34573, 344, (*uParam1)[0], 1, 0, 5, 4294967295, 4294967295, 0, 1);
				Function_15((*uParam1)[0]);
				RELEASE_SCRIPT_USE_CONTEXT(bLocal_133);
				DESTROY_VOLUME(bLocal_132);
				iLocal_97 = 1;
				iLocal_98 = 1;
				iLocal_98 = iLocal_98;
				*uParam0 = 4;
				Function_36(&bLocal_137);
			}
			break;
		
		case 0x00000004:
			if (!IS_AMBIENT_SPEECH_PLAYING((*uParam1)[0]))
			{
				iLocal_93 = 1;
				Function_128("firstTimeManza_help11", 0x40f00000, 1, 2, 0, 0, 0, 0);
				*uParam0 = 5;
				Function_36(&bLocal_137);
			}
			break;
		
		case 0x00000005:
			if (!iLocal_106)
			{
				if (!Function_123())
				{
					HUD_CLEAR_HELP();
					Function_132(iLocal_84, 8.0f, 1, 0, 2, 1, 0);
					iLocal_106 = 1;
				}
			}
			if (iLocal_104 == 0)
			{
				if (iLocal_94 == 1)
				{
					if (Function_135(&bLocal_110) < 2.0f)
					{
						AUDIO_MUSIC_SET_MOOD("DRAMATIC_LOW", 0, 4294967295, 4294967295);
						iLocal_104 = 1;
					}
				}
				else if (iLocal_94 == 0)
				{
					Function_36(&bLocal_110);
				}
				if (Global_34573 == GET_ACTOR_IN_VEHICLE_SEAT(bLocal_43, false))
				{
					AUDIO_MUSIC_SET_MOOD("DRAMATIC_LOW", 0, 4294967295, 4294967295);
					iLocal_104 = 1;
				}
			}
			if (iLocal_104 == 1)
			{
				Function_128("firstTimeManza_help05", 0x40f00000, 1, 2, 0, 0, 0, 0);
				bLocal_151 = Function_122(bParam3, "gManzanita", -431.522f, 152.568f, 1635.127f, 0.0f, 0.0f, 0.0f, Global_34573, 4.0f, 1, 3, 4294967295, 4294967295, 1, 3212836864, 3212836864, 1);
				ADD_BLIP_FOR_OBJECT(bLocal_151, 330, 0f, 2, 0);
				SET_BLIP_PRIORITY(GET_BLIP_ON_OBJECT(bLocal_151), 3);
				SET_BLIP_NAME(GET_BLIP_ON_OBJECT(bLocal_151), "firstTimeManza_gatewayBlip");
				TELEPORT_ACTOR_WITH_HEADING((*uParam1)[0], -435.469f, 152.436f, 1637.698f, 260.0f, 1, 1, 1);
				TASK_STAND_STILL((*uParam1)[0], -1.0f, 0, 0);
				iLocal_101 = 1;
				Function_121(bLocal_43);
				bLocal_96 = true;
				GET_OBJECT_POSITION(bLocal_151, &vLocal_63);
				Function_119(StackVal, StackVal, vLocal_63, 0, 16, 1);
				iLocal_93 = 2;
				*uParam0 = 6;
				Function_36(&bLocal_137);
			}
			break;
		
		case 0x00000006:
			Function_118();
			if (Function_38(bLocal_43, (*uParam1)[0]) > 66.0f)
			{
				RESET_ANIM_SET_FOR_ACTOR((*uParam1)[0], 1);
				TASK_FACE_ACTOR((*uParam1)[0], Global_34573, 1, -1.0f);
				SET_ANIM_SET_FOR_ACTOR((*uParam1)[0], "excited_return", 0);
				SET_ACTION_NODE_FOR_ACTOR((*uParam1)[0], "excited_return/mobile_and_loop/loop");
				*uParam0 = 7;
				Function_36(&bLocal_137);
			}
			break;
		
		case 0x00000007:
			Function_118();
			if (GATEWAY_UPDATE(bLocal_151))
			{
				if (!iLocal_152)
				{
					if (Global_34573 != GET_ACTOR_IN_VEHICLE_SEAT(bLocal_43, false))
					{
						Function_132("firstTimeManza_help10", 9.0f, 1, 0, 2, 1, 0);
					}
					iLocal_152 = 1;
				}
				if (Global_34573 == GET_ACTOR_IN_VEHICLE_SEAT(bLocal_43, false))
				{
					AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
					Function_37(Global_34573, uLocal_37[0], "firstTimeManzaPlayer_msg01", "firstTimeManzaPlayer_msg01", 5, 60, 1, 1);
					STOP_VEHICLE(bLocal_43);
					RESET_ANIM_SET_FOR_ACTOR((*uParam1)[0], 1);
					TASK_FACE_ACTOR((*uParam1)[0], Global_34573, 1, -1.0f);
					Function_121((*uParam1)[0]);
					bLocal_96 = false;
					Function_13();
					Function_117(bLocal_151);
					iLocal_153 = 0;
					*uParam0 = 8;
					Function_36(&bLocal_137);
				}
			}
			break;
		
		case 0x00000008:
			*uParam5 = 0;
			if (Function_115(&uLocal_37) && !IS_AMBIENT_SPEECH_PLAYING((*uParam1)[0]))
			{
				iLocal_97 = 0;
				*uParam0 = 9;
				Function_36(&bLocal_137);
			}
			break;
		
		case 0x00000009:
			vLocal_63 = { -453.147f, 153.642f, 1629.196f };
			AI_SPEECH_SET_ALLOW_FOR_ACTOR((*uParam1)[0], 1);
			UNK_0x99AFD2D1((*uParam1)[0], 0, 0);
			Function_114(uParam4, 1);
			iLocal_94 = 1;
			bLocal_95 = true;
			bVar0 = false;
			while (bVar0 <= 5)
			{
				if (bVar0 >= 0)
				{
					if (IS_ACTOR_ALIVE((*uParam1)[bVar0]))
					{
						iLocal_94 = 0;
					}
					else
					{
						bLocal_95 = false;
					}
				}
				bVar0++;
			}
			if (iLocal_94)
			{
				Function_109(50, 1, 0);
			}
			else if (bLocal_95)
			{
				Function_109(200, 1, 0);
			}
			else
			{
				Function_109(100, 1, 0);
			}
			bVar0 = false;
			while (bVar0 <= 5)
			{
				if (bVar0 >= 0)
				{
					if (IS_ACTOR_VALID((*uParam1)[bVar0]))
					{
						Function_121((*uParam1)[bVar0]);
						AI_SPEECH_SET_ALLOW_FOR_ACTOR((*uParam1)[bVar0], 1);
						UNK_0x99AFD2D1((*uParam1)[bVar0], 0, 0);
					}
				}
				bVar0++;
			}
			Function_85(20, 1, 0);
			Function_70(16);
			Function_66(uParam2, 2);
			*uParam0 = 10;
			break;
		
		case 0x0000000A:
			if (bLocal_107)
			{
				if (!IS_AMBIENT_SPEECH_PLAYING((*uParam1)[0]))
				{
					MEMORY_CLEAR_ALL((*uParam1)[0]);
					Function_1(&Global_7148, &Global_8447, 1, 0);
					vLocal_63 = { -453.338f, 153.643f, 1613.641f };
					bVar0 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(false, &vLocal_63, 3.0f, 1);
					TASK_WANDER(false, 3212836864);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM((*uParam1)[0], bVar0);
					TASK_SEQUENCE_RELEASE(bVar0, 1);
					bLocal_107 = false;
				}
			}
			if (!Function_61(Global_34573, bLocal_43, Function_64(1)))
			{
				*uParam0 = 11;
				return 1;
			}
			if (GET_ACTOR_IN_VEHICLE_SEAT(bLocal_43, false) != Global_34573 && IS_ACTOR_DRIVING_VEHICLE(Global_34573))
			{
				bVar1 = Function_51(3, 19, Global_34573, bLocal_43, 0);
				SET_CRIME_WITNESSED(bVar1, 3);
				*uParam0 = 11;
				return 1;
			}
			break;
	}
	return 0;
}

var Function_51(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x3001 / 12289
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!Function_60(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_59(iParam1))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeType");
		return "";
	}
	if (!IS_ACTOR_VALID(bParam2))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid criminal");
		return "";
	}
	if (!IS_OBJECT_VALID(bParam3) && !iParam0 != 4)
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid victim");
		return "";
	}
	if (!Function_54(1))
	{
		LOG_ERROR("Crime is disabled: CREATE_CRIME_EVENT failure");
		return "";
	}
	bVar3 = CREATE_CRIME_IN_LAYOUT(Global_26314);
	bVar4 = FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes");
	if ((IS_CRIME_VALID(bVar3) && IS_OBJECT_VALID(bVar4)) && GET_OBJECT_TYPE(bVar4) != 2)
	{
		SET_CRIME_TYPE(bVar3, iParam1);
		SET_CRIME_VICTIM(bVar3, bParam3);
		SET_CRIME_CRIMINAL(bVar3, bParam2);
		SET_CRIME_BEGIN_TIMESTAMP(bVar3, GET_CURRENT_GAME_TIME());
		SET_CRIME_END_TIMESTAMP(bVar3, GET_CURRENT_GAME_TIME());
		GET_OBJECT_POSITION(bParam3, &vVar0);
		SET_CRIME_POSITION(bVar3, vVar0);
		bVar5 = CREATE_OBJECTSET_IN_LAYOUT(Function_218(), Global_26314, 3, 0);
		SET_CRIME_OBJECTSET(bVar3, bVar5);
		if (!bParam4)
		{
			SET_CRIME_WITNESSED(bVar3, 1);
		}
		else
		{
			SET_CRIME_WITNESSED(bVar3, 3);
			Function_52();
		}
		SET_CRIME_FACTION(StackVal, bVar3);
		SET_CRIME_TALLIED(bVar3, 0);
		SET_CRIME_COUNTER(bVar3, 1);
		SET_CRIME_WORLD_REGION(bVar3, Global_26361.f_12);
		if ((Global_26998[iParam118].f_20 != 2 || Global_26998[iParam118].f_20 != 3) || Global_26998[iParam118].f_20 != 4)
		{
			SET_CRIME_IN_PROGRESS(bVar3, 1);
		}
		else
		{
			SET_CRIME_IN_PROGRESS(bVar3, 0);
		}
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_CRIME(bVar3), GET_OBJECTSET_FROM_OBJECT(bVar4));
		SET_ACTOR_TIME_OF_LAST_CRIME(bParam2, GET_CURRENT_GAME_TIME());
	}
	return bVar3;
}

void Function_52() //Position: 0x3291 / 12945
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	iVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_53(bVar0, iVar1);
	bVar2 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar2))
	{
		bVar3 = GET_CRIME_FROM_OBJECT(bVar2);
		if (IS_CRIME_VALID(bVar3))
		{
			SET_CRIME_WITNESSED(bVar3, 3);
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

void Function_53(bool bParam0, bool bParam1) //Position: 0x32F4 / 13044
{
	ITERATE_EVERYWHERE(bParam0);
	ITERATE_ON_OBJECT_TYPE(bParam0, 31);
	if (!bParam1 != "")
	{
		ITERATE_IN_SET(bParam0, bParam1);
	}
	else
	{
		ITERATE_IN_LAYOUT(bParam0, GET_ITERATOR_PARENT(bParam0));
	}
	return;
}

bool Function_54(bool bParam0) //Position: 0x3323 / 13091
{
	if (Function_58(256))
	{
		return 0;
	}
	if (Function_58(262144))
	{
		return 0;
	}
	if (Function_57())
	{
		return 0;
	}
	if (!Function_58(1))
	{
		return 0;
	}
	if (!Function_58(4096))
	{
		return 0;
	}
	if (bParam0 && Function_56(12))
	{
		return 0;
	}
	if (Global_3378)
	{
		return 0;
	}
	if (Function_58(2048))
	{
		return 0;
	}
	if (Function_55() || !bParam0)
	{
		if (Global_29007 != 2 || Global_29007 != 5)
		{
			return 0;
		}
	}
	return 1;
}

var Function_55() //Position: 0x3399 / 13209
{
	return NET_IS_MANAGER_INITIALIZED();
}

int Function_56(int iParam0) //Position: 0x33A2 / 13218
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_57() //Position: 0x33B3 / 13235
{
	if (Global_30619 == 2)
	{
		if (StackVal == 1)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_58(int iParam0) //Position: 0x33CC / 13260
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_59(int iParam0) //Position: 0x33EA / 13290
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_60(int iParam0) //Position: 0x3400 / 13312
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_61(bool bParam0, bool bParam1, float fParam2) //Position: 0x3415 / 13333
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_63(bParam0);
			Function_62(bParam1);
			if (VDIST(Function_63(bParam0), Function_62(bParam1)) >= fParam2)
			{
				return 1;
			}
		}
		LOG_ERROR("Attempting to check whether an actor is in range of an object, where at least one is INVALID! Returning FALSE.");
	}
	else
	{
		LOG_ERROR("Attempting to check whether an actor is in range of an object, where at least one is INVALID! Returning FALSE.");
	}
	return 0;
}

vector3 Function_62(bool bParam0) //Position: 0x352F / 13615
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

vector3 Function_63(bool bParam0) //Position: 0x359B / 13723
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

var Function_64(bool bParam0) //Position: 0x3605 / 13829
{
	var uVar0;
	float fVar1;
	
	if (!bParam0)
	{
		Function_65(&uVar0, &fVar1);
		if (fVar1 < 60.0f)
		{
			return (fVar1 + 20.0f);
		}
		return (fVar1 + 10.0f);
	}
	return (190.0f + 20.0f);
}

void Function_65(var uParam0, int iParam1) //Position: 0x3640 / 13888
{
	vector3 vVar0;
	
	if (Global_3386 && !Global_3403)
	{
		*uParam0 = 65.0f;
		*iParam1 = 95.0f;
	}
	else if ((!IS_ACTOR_RIDING(GET_PLAYER_ACTOR(0)) && !IS_ACTOR_RIDING_VEHICLE(GET_PLAYER_ACTOR(0))) && !Global_3403)
	{
		*uParam0 = 115.0f;
		*iParam1 = 170.0f;
	}
	else
	{
		GET_ACTOR_VELOCITY(GET_PLAYER_ACTOR(0), &vVar0);
		if (VMAG(vVar0) > 5.0f)
		{
			*uParam0 = 130.0f;
			*iParam1 = 190.0f;
		}
		else
		{
			*uParam0 = 130.0f;
			*iParam1 = 190.0f;
		}
	}
	return;
}

void Function_66(int iParam0, int iParam1) //Position: 0x36C9 / 14025
{
	if (!Function_67(iParam0))
	{
		return;
	}
	Global_13172[iParam011].f_12 = iParam1;
	return;
}

bool Function_67(int iParam0) //Position: 0x36E4 / 14052
{
	if (!Function_69(iParam0))
	{
		return 0;
	}
	if (!Function_68(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_68(int iParam0) //Position: 0x3708 / 14088
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_69(int iParam0) //Position: 0x371D / 14109
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

void Function_70(int iParam0) //Position: 0x3734 / 14132
{
	Global_16876[iParam06].f_16++;
	if (Global_16876[iParam06].f_16 == 1)
	{
		Function_71(409, 1, 0, 0);
	}
	return;
}

int Function_71(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x3765 / 14181
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
	Function_84(iParam0, TO_FLOAT(bParam1), 1);
	Function_83(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_72(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_72(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x3985 / 14725
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_82(390))), 32);
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
					bVar19 = (Function_81(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_81(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_79(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_76(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_74(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_73(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_218(), &Var9);
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

var Function_73(int iParam0) //Position: 0x3FB2 / 16306
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_74(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x3FC3 / 16323
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_75("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_75("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_75("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_75(char* cParam0, bool bParam1) //Position: 0x40BB / 16571
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_76(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x40D4 / 16596
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_78(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_77(Function_78(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_77(int iParam0, int iParam1) //Position: 0x4139 / 16697
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_78(int iParam0, bool bParam1) //Position: 0x414B / 16715
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_79(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x415D / 16733
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
	if (((Function_80(iParam0) != 19 || Function_80(iParam0) != 17) || Function_80(iParam0) != 10) || Function_80(iParam0) != 9)
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

int Function_80(int iParam0) //Position: 0x428D / 17037
{
	return Global_35278[iParam020].f_48;
}

float Function_81(int iParam0) //Position: 0x429C / 17052
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_82(int iParam0) //Position: 0x42D5 / 17109
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_83(int iParam0) //Position: 0x4312 / 17170
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

int Function_84(int iParam0, bool bParam1, bool bParam2) //Position: 0x44AC / 17580
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

void Function_85(int iParam0, bool bParam1, bool bParam2) //Position: 0x46F0 / 18160
{
	int iVar0;
	bool bVar1;
	
	if (Function_108(0) && (!Global_3380 || iParam0 == 100))
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
	iVar0 = Function_106(3);
	Function_103();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_101(3, bVar1);
		if (!bParam2)
		{
			if (!Function_100(Global_76848, 4))
			{
				Function_94(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_71(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_81(3));
	iVar0 = Function_106(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_87(4, Function_93(Global_12976.f_156), 1);
				Function_86(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_87(4, Function_93(Global_12976.f_156), 1);
				Function_86(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_87(4, Function_93(Global_12976.f_156), 1);
				Function_86(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_87(4, Function_93(Global_12976.f_156), 1);
				Function_86(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_87(4, Function_93(Global_12976.f_156), 1);
				Function_86(Global_12976.f_152, Global_12976.f_156);
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

void Function_86(int iParam0, int iParam1) //Position: 0x48BF / 18623
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

int Function_87(int iParam0, char* cParam1, bool bParam2) //Position: 0x4B1D / 19229
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
	Function_91(iParam0, cParam1, 0, 1);
	iVar1 = Function_88();
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

int Function_88() //Position: 0x4CA2 / 19618
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
	Function_89();
	return 0;
}

void Function_89() //Position: 0x4D41 / 19777
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
		Function_90(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_90(int iParam0) //Position: 0x4DF0 / 19952
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

int Function_91(int iParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0x4E4E / 20046
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
		Function_92(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, uParam3);
	}
	return 1;
}

void Function_92(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x51A0 / 20896
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

var Function_93(int iParam0) //Position: 0x5223 / 21027
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

void Function_94(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x52B2 / 21170
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_96(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_95(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_95(char* cParam0, int iParam1) //Position: 0x531E / 21278
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

bool Function_96(bool bParam0, var uParam1, int iParam2) //Position: 0x5355 / 21333
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
		if (Function_98(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_97(uVar0))
		{
			case 0x00000002:
				if (!Function_100(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_97(char* cParam0) //Position: 0x53CD / 21453
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

int Function_98(int iParam0) //Position: 0x546E / 21614
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_99(&iVar1, 2147483648);
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

void Function_99(int iParam0, int iParam1) //Position: 0x54AB / 21675
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

bool Function_100(var uParam0, int iParam1) //Position: 0x54BE / 21694
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_101(int iParam0, bool bParam1) //Position: 0x54D1 / 21713
{
	bool bVar0;
	int iVar1;
	
	Function_71(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_102(iParam0, 4294967295);
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
	iVar1 = Function_88();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

var Function_102(int iParam0, int iParam1) //Position: 0x566E / 22126
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

void Function_103() //Position: 0x56AF / 22191
{
	Function_105(3, 0.0f);
	Function_104(3, 10000.0f);
	return;
}

int Function_104(int iParam0, int iParam1) //Position: 0x56C5 / 22213
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_105(int iParam0, int iParam1) //Position: 0x5705 / 22277
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

int Function_106(bool bParam0) //Position: 0x5745 / 22341
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

bool Function_107() //Position: 0x5786 / 22406
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

var Function_108(int iParam0) //Position: 0x57B1 / 22449
{
	return (*&Global_12976 + 104)[iParam0];
}

void Function_109(int iParam0, bool bParam1, bool bParam2) //Position: 0x57C0 / 22464
{
	int iVar0;
	bool bVar1;
	
	if (Function_108(0) && !Global_3380)
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
	iVar0 = Function_106(1);
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
			Function_101(1, bVar1);
			if (!bParam2)
			{
				if (!Function_100(Global_76848, 1))
				{
					Function_94(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_113(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_100(Global_76848, 2))
				{
					Function_94(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_71(1, bVar1, 0, 0);
	}
	else
	{
		Function_112(1, (4294967295 * bVar1), 0);
	}
	if (Function_106(1) <= 4294962296)
	{
		Function_111(1, 4294962296, 0);
	}
	else if (Function_106(1) >= 5000)
	{
		Function_111(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_81(1));
	iVar0 = Function_106(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_87(2, Function_110(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_87(2, Function_110(Global_12976.f_152), 0);
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
				Function_87(2, Function_110(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_87(2, Function_110(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_87(2, Function_110(Global_12976.f_152), 1);
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
				Function_87(2, Function_110(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_87(2, Function_110(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_87(2, Function_110(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_87(2, Function_110(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_87(2, Function_110(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_87(2, Function_110(Global_12976.f_152), 1);
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
				Function_87(2, Function_110(Global_12976.f_152), 0);
			}
			break;
	}
	Function_86(Global_12976.f_152, Global_12976.f_156);
	return;
}

var Function_110(int iParam0) //Position: 0x5AE1 / 23265
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

int Function_111(int iParam0, bool bParam1, bool bParam2) //Position: 0x5B84 / 23428
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
		Function_84(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_83(iParam0);
	if (bParam2)
	{
		Function_72(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_112(int iParam0, bool bParam1, int iParam2) //Position: 0x5E1F / 24095
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
	Function_83(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_72(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_113(int iParam0, bool bParam1) //Position: 0x601A / 24602
{
	bool bVar0;
	int iVar1;
	
	Function_112(iParam0, bParam1, 0);
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
	iVar1 = Function_102(iParam0, 4294967295);
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
	iVar1 = Function_88();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

int Function_114(bool bParam0, bool bParam1) //Position: 0x61B6 / 25014
{
	bool bVar0;
	
	bVar0 = Function_106(0);
	if ((Function_106(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_71(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_106(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_71(597, bParam0, 0, 0);
	}
	if ((Function_106(597) + Function_106(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

int Function_115(int iParam0) //Position: 0x6281 / 25217
{
	vector3 vVar0;
	
	if (!Function_30(&bLocal_116))
	{
		Function_116(&bLocal_116);
	}
	switch (iLocal_153)
	{
		case 0x00000000:
			if (IS_ACTOR_RIDING_VEHICLE(Global_34573) && GET_VEHICLE(Global_34573) != bLocal_43)
			{
				Function_13();
				iLocal_153 = 1;
			}
			break;
		
		case 0x00000001:
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			ACTOR_START_FORCE_HOLSTER(Global_34573, 0, 0);
			TASK_CLEAR(Global_34573);
			if (IS_ACTOR_RIDING_VEHICLE(Global_34573) && GET_VEHICLE(Global_34573) != bLocal_43)
			{
				STOP_VEHICLE(GET_VEHICLE(Global_34573));
				TASK_STAND_STILL(Global_34573, -1.0f, 0, 0);
			}
			Function_36(&bLocal_116);
			iLocal_153 = 2;
			break;
		
		case 0x00000002:
			GET_ACTOR_VELOCITY(Global_34573, &vVar0);
			if (VMAG(vVar0) > 5.5f)
			{
				Function_36(&bLocal_116);
				iLocal_153 = 3;
			}
			break;
		
		case 0x00000003:
			TASK_CLEAR(Global_34573);
			TASK_VEHICLE_LEAVE(Global_34573);
			iLocal_153 = 4;
			break;
		
		case 0x00000004:
			if (!IS_ACTOR_RIDING_VEHICLE(Global_34573))
			{
				START_VEHICLE(bLocal_43);
				RESET_ANIM_SET_FOR_ACTOR((*iParam0)[0], 1);
				SET_ANIM_SET_FOR_ACTOR((*iParam0)[0], "thanks", 0);
				SET_ACTION_NODE_FOR_ACTOR((*iParam0)[0], "thanks");
				Function_37((*iParam0)[0], Global_34573, "firstTimeManza_msg05", "firstTimeManza_msg05", 5, 60, 1, 1);
				START_VEHICLE(bLocal_43);
				TASK_CLEAR(Global_34573);
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				iLocal_153 = 6;
			}
			break;
		
		case 0x00000006:
			return 1;
			break;
	}
	return 0;
}

void Function_116(int iParam0) //Position: 0x63F1 / 25585
{
	if (!Function_30(iParam0))
	{
		Function_215(iParam0, 0.0f);
	}
	return;
}

void Function_117(bool bParam0) //Position: 0x6406 / 25606
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

void Function_118() //Position: 0x6490 / 25744
{
	if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_43)))
	{
		if (!Global_34573 != GET_ACTOR_IN_VEHICLE_SEAT(bLocal_43, false))
		{
			iLocal_101 = 0;
			ADD_BLIP_FOR_ACTOR(bLocal_43, 325, 0.0f, 3, 0);
			SET_BLIP_NAME(GET_BLIP_ON_ACTOR(bLocal_43), "firstTimeManza_missingWagon");
		}
	}
	else if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_43)))
	{
		if (Global_34573 == GET_ACTOR_IN_VEHICLE_SEAT(bLocal_43, false))
		{
			iLocal_101 = 1;
			Function_121(bLocal_43);
		}
	}
	if (bLocal_96 == 1)
	{
		if (!Global_34573 != GET_ACTOR_IN_VEHICLE_SEAT(bLocal_43, false))
		{
			bLocal_96 = false;
			Function_13();
		}
	}
	else if (bLocal_96 == 0)
	{
		if (Global_34573 == GET_ACTOR_IN_VEHICLE_SEAT(bLocal_43, false))
		{
			bLocal_96 = true;
			GET_OBJECT_POSITION(bLocal_151, &vLocal_63);
			Function_119(StackVal, StackVal, vLocal_63, 0, 16, 0);
		}
	}
	return;
}

void Function_119(vector3 vParam0, int iParam3, int iParam4, int iParam5) //Position: 0x654C / 25932
{
	*(&Global_28185 + 24) = { StackVal, StackVal, vParam0 };
	*(&Global_28185 + 36) = { StackVal, StackVal, vParam0 };
	Global_28185 = 2;
	Global_28185.f_4 = 0;
	Global_28185.f_60 = iParam3;
	Global_28185.f_16 = iParam4;
	if (iParam4 & 16 >= 0)
	{
		Global_28185.f_16 |= 131072;
	}
	if (iParam4 & 32 >= 0)
	{
		Global_28185.f_16 |= 262144;
	}
	if (!IS_OBJECTSET_VALID(Global_28185.f_12))
	{
		Global_28185.f_12 = CREATE_OBJECTSET_IN_LAYOUT(StackVal, "MissionGPSPath", 36, 1);
	}
	if (GET_OBJECTSET_SIZE(Global_28185.f_12) >= 0)
	{
		Function_120(Global_28185.f_12);
		CLEAN_OBJECTSET(Global_28185.f_12);
	}
	Global_28185.f_92 = 0;
	Global_28210.f_96 = iParam5;
}

void Function_120(bool bParam0) //Position: 0x6608 / 26120
{
	bool bVar0;
	
	if (!IS_OBJECTSET_VALID(bParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(bParam0) >= 0)
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, bParam0);
		REMOVE_OBJECT_FROM_OBJECTSET(bVar0, bParam0);
		CLEAN_OBJECTSET(bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			RELEASE_CURVE(GET_CURVE_FROM_OBJECT(bVar0));
		}
	}
	return;
}

void Function_121(bool bParam0) //Position: 0x6648 / 26184
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		bVar0 = GET_BLIP_ON_OBJECT(bParam0);
		while (IS_BLIP_VALID(bVar0))
		{
			REMOVE_BLIP(bVar0);
			bVar0 = GET_BLIP_ON_OBJECT(bParam0);
		}
	}
	return;
}

var Function_122(bool bParam0, bool bParam1, vector3 vParam2, vector3 vParam5, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, float fParam15, float fParam16, int iParam17) //Position: 0x6674 / 26228
{
	vector3 vVar0;
	bool bVar3;
	char* cVar4[32];
	bool bVar12;
	bool bVar13;
	
	vVar0 = { uParam9, 2.0f, uParam9 };
	vParam2.f_4 = (vParam2.y + 0.75f);
	bVar3 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(bParam0, bParam1, vParam2, vParam5, vVar0, iParam11, uParam8, iParam10, iParam13, 0, iParam14, iParam17);
	if (IS_OBJECT_VALID(bVar3))
	{
		strcpy(&cVar4, bParam1, 32);
		if (IS_STRING_VALID(bParam1))
		{
			stradd(&cVar4, "restrict", 32);
		}
		bVar12 = CREATE_VOLUME_IN_LAYOUT(bParam0, &cVar4, 2, vParam2, vParam5, 5.0f, 5.0f, 5.0f);
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar12);
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar12);
		if (iParam12 != 4294967295)
		{
			bVar13 = ADD_BLIP_FOR_OBJECT(bVar3, iParam12, 0.0f, 2, 0);
		}
		if (fParam15 < -1.0f)
		{
			SET_BLIP_MAX_DISTANCE(bVar13, fParam15);
		}
		if (fParam16 < -1.0f)
		{
			SET_BLIP_MIN_DISTANCE(bVar13, fParam16);
		}
		DECOR_SET_OBJECT(bVar3, "volrestrict", bVar12);
	}
	return bVar3;
}

bool Function_123() //Position: 0x673F / 26431
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_124() //Position: 0x676C / 26476
{
	bLocal_155 = true;
	if (Global_29004 == 2)
	{
		if (Function_190())
		{
			cLocal_154 = "NRT_SONG_04";
		}
		else
		{
			cLocal_154 = "NRT_SONG_05";
		}
	}
	AUDIO_MUSIC_FORCE_TRACK(cLocal_154, "PASTORAL", 0.0f, 500, 4294967295, 3212836864, 0);
	return;
}

bool Function_125(int iParam0, float fParam1) //Position: 0x67C0 / 26560
{
	if (Function_29(iParam0, fParam1))
	{
		Function_126(iParam0);
		return 1;
	}
	return 0;
}

void Function_126(float fParam0) //Position: 0x67D8 / 26584
{
	fParam0->f_4 = 0.0f;
	fParam0->f_8 = 0.0f;
	*fParam0 = 0;
	return;
}

bool Function_127(var uParam0, bool bParam1, int iParam2, var uParam3, bool bParam4, bool bParam5, var uParam6, var uParam7, bool bParam8, var uParam9, bool bParam10, var uParam11, var uParam12, float fParam13, int iParam14, int iParam15, bool bParam16, bool bParam17) //Position: 0x67EC / 26604
{
	bool bVar0;
	
	switch (*uParam0)
	{
		case 0x00000000:
			if (Function_38(bParam1, Global_34573) > 65.0f)
			{
				RESET_ANIM_SET_FOR_ACTOR(bParam1, 1);
				AI_GOAL_LOOK_AT_ACTOR_NEW(bParam1, Global_34573, -1.0f, 1);
				bVar0 = TASK_SEQUENCE_OPEN();
				TASK_FACE_ACTOR(false, Global_34573, 0, 3212836864);
				TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bParam1, bVar0);
				TASK_SEQUENCE_RELEASE(bVar0, 1);
				TASK_PRIORITY_SET(bParam1, 0);
				*uParam0 = 1;
			}
			break;
		
		case 0x00000001:
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam1, 1.0f, iParam14, 1, 0, 0))
			{
				if (GET_NTH_TASK_STATUS(bParam1, false) == 0)
				{
					*uParam3 = ADD_BLIP_FOR_ACTOR(bParam1, 325, 0, 2, 0);
					SET_BLIP_NAME(*uParam3, GET_ACTOR_ENUM_STRING(bParam1));
					SET_ANIM_SET_FOR_ACTOR(bParam1, bParam4, 0);
					SET_ACTION_NODE_FOR_ACTOR(bParam1, bParam5);
					Function_215(iParam2, 0.0f);
					Function_37(bParam1, Global_34573, uParam6, uParam7, 5, 60, 1, 1);
					*uParam0 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_29(iParam2, uParam12) && !IS_AMBIENT_SPEECH_PLAYING(bParam1))
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
					Function_37(bParam1, Global_34573, bParam8, uParam9, 5, 60, 1, 1);
					Function_215(iParam2, 0.0f);
					*uParam0 = 3;
				}
			}
			break;
		
		case 0x00000003:
			if (Function_29(iParam2, fParam13) && !IS_AMBIENT_SPEECH_PLAYING(bParam1))
			{
				if (IS_STRING_VALID(bParam10))
				{
					Function_37(bParam1, Global_34573, bParam10, uParam11, 5, 60, 1, 1);
				}
				Function_215(iParam2, 0.0f);
				REMOVE_BLIP(*uParam3);
				return 1;
			}
			break;
	}
	return 0;
}

void Function_128(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x697E / 27006
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
			Var0 = { StackVal, StackVal, StackVal, Function_129(Global_6269) };
		}
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, &Var0, 0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, iVar4, iParam5, iParam6);
	}
}

struct<16> Function_129(int iParam0) //Position: 0x6A03 / 27139
{
	char* cVar0[16];
	
	if (!Function_130())
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

bool Function_130() //Position: 0x6A42 / 27202
{
	if (Function_31(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_131(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x6A5D / 27229
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_VEHICLE(bParam0))
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_DRAFT_VEHICLE(bParam0))
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (iParam1 == 4294967295)
	{
		if (GET_NUM_DRAFTED_ACTORS(bParam0) <= 1)
		{
			if (bParam2)
			{
			}
			return 0;
		}
	}
	if (GET_NUM_DRAFTED_ACTORS(bParam0) <= iParam1)
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (iParam3 == 4294967295)
	{
		if (GET_VEHICLE_WHEEL_COUNT_INITIAL(bParam0) == 2)
		{
			if (GET_VEHICLE_WHEEL_COUNT_CURRENT(bParam0) <= 2)
			{
				if (bParam2)
				{
				}
				return 0;
			}
		}
		if (GET_VEHICLE_WHEEL_COUNT_CURRENT(bParam0) <= 3)
		{
			if (bParam2)
			{
			}
			return 0;
		}
	}
	if (GET_VEHICLE_WHEEL_COUNT_CURRENT(bParam0) <= iParam3)
	{
		if (bParam2)
		{
		}
		return 0;
	}
	return 1;
}

void Function_132(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x6B16 / 27414
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_129(Global_6269) };
		}
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

bool Function_133(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x6B91 / 27537
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_63(bParam0);
		if (VDIST(Function_63(bParam0), vParam1) >= fParam4)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

bool Function_134(var uParam0, var uParam1, float fParam2, bool bParam3) //Position: 0x6C1B / 27675
{
	if (!Function_138(*uParam0, 0))
	{
		if (GET_LAST_ATTACKER(*uParam0) == Global_34573)
		{
			if (bParam3)
			{
				Function_109(4294967196, 1, 0);
			}
		}
		return 0;
	}
	if (Function_38(*uParam0, *uParam1) < fParam2 && fParam2 == -1.0f)
	{
		return 0;
	}
	if (GET_LAST_ATTACKER(*uParam0) == Global_34573)
	{
		if (bParam3)
		{
			Function_109(4294967196, 1, 0);
		}
		TASK_KILL_CHAR(*uParam0, Global_34573);
		return 0;
	}
	return 1;
}

float Function_135(int iParam0) //Position: 0x6C93 / 27795
{
	if (Function_30(iParam0))
	{
		if (Function_136(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_136(int iParam0) //Position: 0x6D5B / 27995
{
	return Function_31(*iParam0, 2);
}

void Function_137(bool bParam0) //Position: 0x6D68 / 28008
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

bool Function_138(bool bParam0, bool bParam1) //Position: 0x6DB4 / 28084
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
			Function_14(bParam0);
			return 0;
		}
		if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 163840))
		{
			Function_14(bParam0);
			return 0;
		}
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		if (Function_139(bParam0, 0) && !AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 16384))
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

int Function_139(bool bParam0, int iParam1) //Position: 0x6E50 / 28240
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

void Function_140(var uParam0, bool bParam1, bool bParam2) //Position: 0x6E9A / 28314
{
	if (bParam1)
	{
		HUD_CLEAR_HELP_QUEUE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
		Function_128(uParam0, 0x40f00000, 1, 2, 0, 0, 0, 0);
		if (bParam2)
		{
			Function_141();
		}
	}
	return;
}

void Function_141() //Position: 0x6EC3 / 28355
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

bool Function_142(bool bParam0, var uParam1, float fParam2, int iParam3, bool bParam4, float fParam5) //Position: 0x6F4C / 28492
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
		fVar0 = Function_38(bParam0, Global_34573);
		if (!Function_31(iParam3, 8))
		{
			if (GET_LAST_ATTACKER(bParam0) == Global_34573)
			{
				*uParam1 = 8;
				Function_143(bParam0);
				return 1;
			}
		}
		if (!Function_31(iParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(bParam0, 1.0f))
			{
				*uParam1 = 2;
				Function_143(bParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(bParam0, 1.0f, 1.0f))
			{
				*uParam1 = 2;
				Function_143(bParam0);
				return 1;
			}
		}
		if (!Function_31(iParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(bParam0) || (((GET_ACTOR_UNDER_RETICLE(Global_34573, 0) != bParam0 && IS_PLAYER_WEAPON_ZOOMED(Global_34573)) && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(Global_34573) != bParam0 && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f))
			{
				if (*fParam2 > 0.0f)
				{
					*uParam1 = 4;
					Function_143(bParam0);
					return 1;
				}
				if (*fParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - *fParam2) < 1.3f)
					{
						*uParam1 = 4;
						Function_143(bParam0);
						return 1;
					}
				}
				*fParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_31(iParam3, 1))
		{
			if (Global_3403 || Global_3404)
			{
				*uParam1 = 1;
				Function_143(bParam0);
				return 1;
			}
		}
		if (!Function_31(iParam3, 16))
		{
			if (UNK_0x7F454A92(bParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(bParam0)) > 2.0f && fVar0 > 18.0f)
				{
					*uParam1 = 16;
					Function_143(bParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_143(bool bParam0) //Position: 0x70E3 / 28899
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(bParam0, 1);
	UNK_0x99AFD2D1(bParam0, 0, 0);
	Function_144(bParam0);
	MEMORY_CONSIDER_AS(Global_34573, bParam0, 2);
	MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
	AI_GOAL_LOOK_CLEAR(bParam0);
	return;
}

void Function_144(bool bParam0) //Position: 0x7117 / 28951
{
	SAY_SINGLE_LINE_CONTEXT(bParam0, 60, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

void Function_145(vector3 vParam0, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7, bool bParam8) //Position: 0x712E / 28974
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
	else if (!Function_28(StackVal, StackVal, vParam0))
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
			Function_157(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_156(0);
		}
		if (bParam8)
		{
			Function_154(0, GET_THIS_SCRIPT_ID());
			Global_3373 = GET_THIS_SCRIPT_ID();
			Function_152(iParam4);
			Global_3401 = 1;
		}
		Function_150(iParam4);
		if (Function_149(StackVal, 32768))
		{
			Function_146(1);
		}
		Global_16876[iParam46].f_12++;
		Function_71(408, 1, 0, 0);
	}
}

void Function_146(bool bParam0) //Position: 0x7235 / 29237
{
	if (bParam0)
	{
		Function_148(0x10000000);
	}
	else
	{
		Function_147(0x10000000);
	}
	Global_26316.f_172 = 0;
	return;
}

void Function_147(int iParam0) //Position: 0x7259 / 29273
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_148(int iParam0) //Position: 0x7276 / 29302
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

bool Function_149(var uParam0, int iParam1) //Position: 0x7289 / 29321
{
	return (uParam0 && iParam1) == 0;
}

void Function_150(int iParam0) //Position: 0x7296 / 29334
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (!Function_31(StackVal, 524288))
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
			bVar1 = Function_151(iVar0 * 60);
			ADD_TIME(&Global_17483[iParam075] + 264, 0, 0, bVar1, 0);
			Global_16876[iParam06] = Global_17483[iParam075].f_264;
		}
	}
	return;
}

int Function_151(int iParam0) //Position: 0x733A / 29498
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_152(int iParam0) //Position: 0x7350 / 29520
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
	Function_153(&Var0 + 80[Var0.f_763], &(Global_16876[iParam06]), iParam0);
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

void Function_153(var uParam0, var uParam1, int iParam2) //Position: 0x73EE / 29678
{
	uParam0->f_4 = iParam2;
	*uParam0 = uParam1->f_12;
	uParam0->f_8 = 1;
	return;
}

void Function_154(int iParam0, int iParam1) //Position: 0x7406 / 29702
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
			Function_155(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_155(int iParam0) //Position: 0x7488 / 29832
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

void Function_156(int iParam0) //Position: 0x74D6 / 29910
{
	Global_12976.f_76 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 76, 0, 0, (iParam0 + Function_151(900)), 0);
	return;
}

void Function_157(var uParam0) //Position: 0x74F8 / 29944
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, (uParam0 + Function_151(200)), 0);
	return;
}

vector3 Function_158() //Position: 0x7519 / 29977
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_159(int iParam0, int iParam1) //Position: 0x7522 / 29986
{
	*iParam0 = (*iParam0 || iParam1);
	return;
}

int Function_160(var uParam0, int iParam1) //Position: 0x7531 / 30001
{
	int iVar0;
	var uVar1;
	
	if (!IS_VOLUME_VALID(*uParam0))
	{
		LOG_ERROR("Passed an invalid volume into ADD_AMBIENT_VOLUME_RESTRICTION");
	}
	if (DECOR_CHECK_EXIST(*uParam0, "script"))
	{
		if (!IS_SCRIPT_VALID(DECOR_GET_INT(*uParam0, "script")))
		{
			LOG_ERROR("Passed an invalid script ID into ADD_AMBIENT_VOLUME_RESTRICTION");
		}
	}
	GET_VOLUME_CENTER(*uParam0, &uVar1);
	Function_162(DECOR_GET_INT(*uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
		}
		else
		{
			Function_161(iVar0, uParam0, &uVar1, iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(*uParam0);
	return 0;
}

void Function_161(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x7692 / 30354
{
	struct<8> Var0;
	
	Global_26155[iParam05].f_8 = *uParam1;
	Global_26155[iParam05].f_16 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_48("stayout") };
	Global_26155[iParam05].f_12 = CREATE_VOLUME_IN_LAYOUT(Global_26150, &Var0, 3, *iParam2, 0.0f, 0.0f, 0.0f, 12.0f, 5.0f, 12.0f);
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	if (bParam3)
	{
		Global_26155[iParam05].f_4 = ADD_BLIP_FOR_COORD(iParam2, 403, 0f, 2, 0);
		SET_BLIP_BLINK(StackVal, 1, 1, 20.0f);
	}
}

int Function_162(bool bParam0) //Position: 0x772D / 30509
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
						Function_164(iVar0);
					}
					else if (Global_3386)
					{
						if (Function_163(StackVal, StackVal, Global_34573, vVar1) < 25.0f)
						{
							Function_164(iVar0);
						}
					}
					else if (Function_163(StackVal, StackVal, Global_34573, vVar1) < 55.0f)
					{
						Function_164(iVar0);
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
			Function_164(iVar0);
		}
		iVar0++;
	}
	return 0;
}

float Function_163(bool bParam0, vector3 vParam1) //Position: 0x788E / 30862
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_63(bParam0);
		vVar0 = { StackVal, StackVal, Function_63(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

void Function_164(int iParam0) //Position: 0x7908 / 30984
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

int Function_165(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x7969 / 31081
{
	bool bVar0;
	bool bVar1;
	
	if (Global_30842[16])
	{
		PRINTSTRING(GET_ASSET_NAME(Global_17483[iParam075].f_96, 4));
	}
	uParam1 = uParam1;
	if (bParam4)
	{
		HUD_CLEAR_OBJECTIVE_QUEUE();
		Global_3399 = 0;
		Function_171("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
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
			Function_166(bVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_166(bVar0);
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
			Function_166(bVar0);
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

void Function_166(bool bParam0) //Position: 0x7BC6 / 31686
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

var Function_167(bool bParam0, bool bParam1, bool bParam2, int iParam3, vector3 vParam4, vector3 vParam7, var uParam10, int iParam11, int iParam12, int iParam13, int iParam14) //Position: 0x7C0C / 31756
{
	bool bVar0;
	int iVar1[6];
	bool bVar8;
	int iVar9;
	int iVar10;
	char* cVar11[16];
	bool bVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	
	bVar0 = CREATE_ACTOR_IN_LAYOUT(bParam0, bParam1, bParam2, vParam4, vParam7);
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
			if (Function_170(Global_30750[6], 4, 23, 0) && uParam10)
			{
				bVar16 = Function_169(StackVal, StackVal, Global_30750[6], vParam4, 4, 23, 0);
				if (Function_168(bVar16, &iVar1))
				{
					bVar16 = 976;
				}
				iVar1[iVar9] = bVar16;
				bVar15 = CREATE_ACTOR_IN_LAYOUT(bVar0, &cVar11, bVar16, vParam4, vParam7);
			}
			bVar17 = 4294967295;
			if (!IS_ACTOR_VALID(bVar15))
			{
				switch (iVar9)
				{
					case 0x00000000:
						bVar17 = iParam3;
						break;
					
					case 0x00000001:
						bVar17 = iParam11;
						break;
					
					case 0x00000002:
						bVar17 = iParam12;
						break;
					
					case 0x00000003:
						bVar17 = iParam13;
						break;
					
					default:
						bVar17 = iParam3;
						break;
				}
				if ((bVar17 != 4294967295 || bVar17 > 976) || bVar17 < 1007)
				{
					LOG_ERROR("Malformed Coach horses");
					return bVar0;
				}
				bVar15 = CREATE_ACTOR_IN_LAYOUT(bVar0, &cVar11, bVar17, vParam4, vParam7);
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
	if (bParam2 == 1197)
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

bool Function_168(int iParam0, int iParam1) //Position: 0x7E40 / 32320
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

var Function_169(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6) //Position: 0x7E72 / 32370
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam4, bParam5, bParam6, 1, vParam1);
}

int Function_170(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x7E8A / 32394
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

void Function_171(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x7EB1 / 32433
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_129(Global_6269) };
		}
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, &Var0, iParam5);
	}
	else
	{
		iVar4 = "";
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, iVar4, iParam5);
	}
}

var Function_172(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5) //Position: 0x7F28 / 32552
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	
	iVar0 = uParam2;
	if (!iVar0 > *uParam0 && iVar0 <= 0)
	{
		return "";
	}
	if (Function_8(uParam0[iVar02], 1))
	{
		return "";
	}
	if (!Function_8(uParam0[iVar02], 2))
	{
		return "";
	}
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (IS_PERS_CHAR_ALIVE(StackVal) || uParam3)
		{
			if (!IS_PERS_CHAR_ALIVE(StackVal))
			{
				REVIVE_PERS_CHAR(StackVal, 1);
			}
			if (!Function_8(uParam0[iVar02], 8))
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], 1, false);
				Function_5(uParam0[iVar02], 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
			bVar1 = GET_ACTOR_FROM_PERS_CHAR(StackVal);
		}
	}
	else if (IS_EARLIER_THAN(StackVal, 0) || uParam3)
	{
		GET_POSITION(GET_PLAYER_ACTOR(0), &vVar2);
		uParam1[iVar03]->f_8 = Function_174(StackVal, StackVal, StackVal, Global_6289, Function_218(), (*uParam1)[iVar03], vVar2, 0x42700000);
		if (IS_PERS_CHAR_VALID(StackVal))
		{
			if (!Function_8(uParam0[iVar02], 8))
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], 1, false);
				Function_5(uParam0[iVar02], 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
			bVar1 = GET_ACTOR_FROM_PERS_CHAR(StackVal);
		}
	}
	if (!IS_ACTOR_VALID(bVar1))
	{
		return "";
	}
	Function_5(uParam0[iVar02], 1);
	Function_173(StackVal, 1);
	if (bParam5)
	{
		MAKE_ACTOR_READY_FOR_ACTION(bVar1, 1);
	}
	if (!bParam4)
	{
		if (IS_ACTOR_HOGTIED(bVar1))
		{
			FREE_FROM_HOGTIE(bVar1);
		}
	}
	return bVar1;
}

int Function_173(bool bParam0, bool bParam1) //Position: 0x80C0 / 32960
{
	bool bVar0;
	bool bVar1;
	
	if (IS_PERS_CHAR_VALID(bParam0))
	{
		bVar0 = GET_ACTOR_FROM_PERS_CHAR(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			TASK_CLEAR(bVar0);
			REFERENCE_ACTOR(bVar0);
			TASK_PRIORITY_SET(bVar0, 1);
			SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(bVar0, 1);
			if (bParam1)
			{
				if (IS_ACTOR_HOGTIED(bVar0))
				{
					FREE_FROM_HOGTIE(bVar0);
				}
			}
		}
		bVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
		if (GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(bVar1), "ScriptStructure", "stolen_flag", 1))
		{
			SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bParam0, 1);
			return 1;
		}
	}
	return 0;
}

var Function_174(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, float fParam7) //Position: 0x8162 / 33122
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	struct<73> Var5;
	
	if (fParam7 > 1.0f)
	{
		fParam7 = 60.0f;
	}
	bVar3 = CREATE_PERS_CHAR_IN_LAYOUT(uParam0, uParam1, uParam2, vParam4, fParam7);
	if (!IS_PERS_CHAR_VALID(bVar3))
	{
		return "";
	}
	bVar4 = CREATE_GRINGO_ON_OBJECT_BY_ID(GET_OBJECT_FROM_PERS_CHAR(bVar3), "Persistent_Char_Brain", uParam3, vVar0, vVar0);
	if (IS_OBJECT_VALID(bVar4))
	{
		ATTACH_OBJECTS(bVar4, GET_OBJECT_FROM_PERS_CHAR(bVar3), Function_218(), 0.0f, 1.5f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
	}
	else
	{
		DESTROY_PERS_CHAR(bVar3);
		return "";
	}
	*(&Var5 + 36) = { StackVal, StackVal, vParam4 };
	Var5 = { StackVal, StackVal, *(&Var5 + 36) };
	*(&Var5 + 12) = { StackVal, StackVal, *(&Var5 + 36) };
	*(&Var5 + 24) = { StackVal, StackVal, *(&Var5 + 36) };
	*(&Var5 + 48) = { StackVal, StackVal, *(&Var5 + 36) };
	*(&Var5 + 60) = { StackVal, StackVal, *(&Var5 + 36) };
	Var5.f_72 = uParam0;
	GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(bVar4), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &Var5, 20);
	return bVar3;
}

bool Function_175(int iParam0) //Position: 0x827B / 33403
{
	if (!Function_177(iParam0))
	{
		return 1;
	}
	return Function_176(&(Global_29008[iParam0]), 4);
}

int Function_176(var uParam0, int iParam1) //Position: 0x8297 / 33431
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_177(bool bParam0) //Position: 0x82B3 / 33459
{
	if (bParam0 > 0 || bParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_178(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) //Position: 0x82C9 / 33481
{
	return CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), vParam0, iParam3, iParam4, iParam5, iParam6, iParam7);
}

bool Function_179(int iParam0) //Position: 0x82E5 / 33509
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_184();
	iVar1 = 0;
	if (!Function_12(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_183(iParam0[iVar03], 8);
		}
		else if (Function_182())
		{
			iVar1 = 1;
			Function_183(iParam0[iVar03], 8);
		}
		Function_183(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_12(iParam0[iVar03], 4))
		{
			if (!Function_12(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_12(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_12(iParam0[03], 8) || iVar1));
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
				Function_183(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_12(iParam0[iVar03], 4))
		{
			if (!Function_12(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_183(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_183(iParam0[iVar03], 2);
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
							Function_183(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_183(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_183(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_183(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_183(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_183(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_183(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_183(iParam0[iVar03], 2);
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
	Function_180();
	return 1;
}

void Function_180() //Position: 0x8660 / 34400
{
	if (!Function_181(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_181(int iParam0) //Position: 0x86A0 / 34464
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_182() //Position: 0x86BC / 34492
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

void Function_183(var uParam0, int iParam1) //Position: 0x86E7 / 34535
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_184() //Position: 0x86F8 / 34552
{
	if (!Function_181(128))
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

void Function_185(var uParam0, int iParam1) //Position: 0x873A / 34618
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_186(uParam0[iVar0]);
		iVar0++;
	}
	return;
}

void Function_186(int iParam0) //Position: 0x8767 / 34663
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

void Function_187(var uParam0, int iParam1) //Position: 0x87A9 / 34729
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_188(uParam0[iVar0]);
		iVar0++;
	}
	return;
}

void Function_188(int iParam0) //Position: 0x87D6 / 34774
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

bool Function_189(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x8819 / 34841
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

bool Function_190() //Position: 0x8881 / 34945
{
	return (RAND_INT_RANGE(0, 1999) / 1000) != 0;
}

bool Function_191(int iParam0) //Position: 0x8894 / 34964
{
	if (!iParam0 != 0)
	{
		LOG_ERROR("Asking about a player with an index not = 0. Multiplayer Law Enforcement not yet implemented.");
		return 0;
	}
	return Global_3403;
}

void Function_192(int iParam0) //Position: 0x890A / 35082
{
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(iParam0);
	return;
}

var Function_193(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x8915 / 35093
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_194(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_183(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_194(var uParam0, int iParam1, int iParam2) //Position: 0x894D / 35149
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_12(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_183(uParam0[iVar03], 4);
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

var Function_195(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x8A11 / 35345
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (!Function_12(bParam0[iVar03], 4))
		{
			(*bParam0)[iVar03] = iParam1;
			bParam0[iVar03]->f_4 = 3;
			Function_183(bParam0[iVar03], 4);
			if (bParam3)
			{
				Function_183(bParam0[iVar03], 8);
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

int Function_196(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x8AE1 / 35553
{
	return Function_197(uParam0, uParam1, uParam2, 4294967295, uParam3);
}

var Function_197(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x8AF5 / 35573
{
	return Function_198(bParam0, bParam1, bParam2, bParam3, bParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_198(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, vector3 vParam6) //Position: 0x8B0E / 35598
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
		Function_203();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, bParam4, iParam5, vParam6);
	if (!Function_45(bVar1))
	{
		if (!Global_30837 && !Global_30838)
		{
			Function_202(bParam0, bParam1, bParam2, bParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_202(bParam0, bParam1, bParam2, bParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && bParam3 != 4294967295)
		{
			while (Function_201(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_45(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_201(bVar0))
				{
					Function_200();
				}
				Function_199(bVar0);
			}
		}
		else if (!bParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != bParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_45(bVar1))
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

void Function_199(int iParam0) //Position: 0x8E01 / 36353
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

void Function_200() //Position: 0x8EB5 / 36533
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

bool Function_201(bool bParam0) //Position: 0x8EEF / 36591
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

void Function_202(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x8F1C / 36636
{
	bool bVar0;
	
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
	bVar0 = false;
	while (bVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(bParam0))
	{
		PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(GET_ACTORENUM_IN_POPULATION(bParam0, bVar0)));
		PRINTSTRING("n  Weight=");
		PRINTFLOAT(GET_ACTORENUM_IN_POPULATION_WEIGHT(bParam0, bVar0));
		PRINTSTRING("  Streamed=");
		if (STREAMING_IS_ACTOR_LOADED(GET_ACTORENUM_IN_POPULATION(bParam0, bVar0), 4294967295))
		{
			PRINTSTRING("TRUE");
		}
		else
		{
			PRINTSTRING("FALSE");
		}
		PRINTNL();
		bVar0++;
	}
}

void Function_203() //Position: 0x906D / 36973
{
	int iVar0;
	
	if (Global_3402)
	{
		if (StackVal || !Global_30742 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_200();
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
	Function_200();
	return;
}

var Function_204(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x90B8 / 37048
{
	return Function_205(iParam0, iParam1, iParam2, iParam3, iParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_205(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, vector3 vParam6) //Position: 0x90D1 / 37073
{
	switch (iParam0)
	{
		case 0x00000001:
			return Function_198(StackVal, StackVal, Global_30750[0], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000002:
			return Function_198(StackVal, StackVal, Global_30750[1], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000004:
			return Function_198(StackVal, StackVal, Global_30750[2], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000008:
			return Function_198(StackVal, StackVal, Global_30750[3], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000010:
			return Function_198(StackVal, StackVal, Global_30750[4], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000020:
			return Function_198(StackVal, StackVal, Global_30750[5], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000040:
			return Function_198(StackVal, StackVal, Global_30750[6], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000080:
			return Function_198(StackVal, StackVal, Global_30750[7], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000100:
			return Function_198(StackVal, StackVal, Global_30750[8], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000200:
			return Function_198(StackVal, StackVal, Global_30750[9], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000400:
			return Function_198(StackVal, StackVal, Global_30750[10], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000800:
			return Function_198(StackVal, StackVal, Global_30750[11], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00001000:
			return Function_198(StackVal, StackVal, Global_30750[12], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00002000:
			return Function_198(StackVal, StackVal, Global_30750[13], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return Function_206(StackVal, StackVal, iParam0, bParam1, bParam2, iParam5, vParam6);
}

var Function_206(var uParam0, bool bParam1, bool bParam2, int iParam3, vector3 vParam4) //Position: 0x9326 / 37670
{
	bool bVar0;
	
	bVar0 = CREATE_POPULATION_SET(0);
	if (uParam0 & 1 == 1)
	{
		Function_207(Global_30750[0], bVar0);
	}
	if (uParam0 & 2 == 2)
	{
		Function_207(Global_30750[1], bVar0);
	}
	if (uParam0 & 4 == 4)
	{
		Function_207(Global_30750[2], bVar0);
	}
	if (uParam0 & 8 == 8)
	{
		Function_207(Global_30750[3], bVar0);
	}
	if (uParam0 & 16 == 16)
	{
		Function_207(Global_30750[4], bVar0);
	}
	if (uParam0 & 32 == 32)
	{
		Function_207(Global_30750[5], bVar0);
	}
	if (uParam0 & 64 == 64)
	{
		Function_207(Global_30750[6], bVar0);
	}
	if (uParam0 & 128 == 128)
	{
		Function_207(Global_30750[7], bVar0);
	}
	if (uParam0 & 256 == 256)
	{
		Function_207(Global_30750[8], bVar0);
	}
	if (uParam0 & 512 == 512)
	{
		Function_207(Global_30750[9], bVar0);
	}
	if (uParam0 & 1024 == 1024)
	{
		Function_207(Global_30750[10], bVar0);
	}
	if (uParam0 & 2048 == 2048)
	{
		Function_207(Global_30750[11], bVar0);
	}
	if (uParam0 & 4096 == 4096)
	{
		Function_207(Global_30750[12], bVar0);
	}
	if (uParam0 & 8192 == 8192)
	{
		Function_207(Global_30750[13], bVar0);
	}
	return Function_198(StackVal, StackVal, bVar0, bParam1, bParam2, 4294967295, 0, iParam3, vParam4);
}

void Function_207(bool bParam0, bool bParam1) //Position: 0x9477 / 38007
{
	bool bVar0;
	
	if (!IS_POPSET_VALID(bParam0))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid subPOPSET");
	}
	if (!IS_POPSET_VALID(bParam1))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid master popset");
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(bParam0))
	{
		LINK_ACTORENUM_TO_POPULATION(bParam1, GET_ACTORENUM_IN_POPULATION(bParam0, bVar0), GET_ACTORENUM_IN_POPULATION_WEIGHT(bParam0, bVar0));
		bVar0++;
	}
	return;
}

bool Function_208(int iParam0) //Position: 0x9535 / 38197
{
	bool bVar0;
	
	switch (iParam0)
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

int Function_209(bool bParam0, bool bParam1, bool bParam2) //Position: 0x96A7 / 38567
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_213(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_210(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_210(bParam0, bParam1, bParam2, 4294967295);
}

int Function_210(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x9705 / 38661
{
	var uVar0;
	
	if (!Function_212(bParam2))
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
	uVar0 = Function_213(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_211(uVar0);
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

int Function_211(int iParam0) //Position: 0x985A / 39002
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

bool Function_212(int iParam0) //Position: 0x9898 / 39064
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_213(int iParam0, int iParam1, int iParam2) //Position: 0x98AD / 39085
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

bool Function_214(var uParam0, var uParam1, int iParam2) //Position: 0x98CD / 39117
{
	var uVar0;
	
	uVar0 = Function_209(uParam0, uParam1, iParam2);
	return Function_67(uVar0);
}

void Function_215(int iParam0, float fParam1) //Position: 0x98E3 / 39139
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_159(iParam0, 1);
	Function_99(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

var Function_216(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x9904 / 39172
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
		bVar0 = (bVar0 * (0.75f + ((TO_FLOAT(Function_106(5)) / 100.0f) * 0.5f)));
	}
	if (bParam3)
	{
		if (HAS_ITEM(Function_217(17), Global_34573))
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

var Function_217(bool bParam0) //Position: 0x9A06 / 39430
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

var Function_218() //Position: 0x9AF7 / 39671
{
	var uVar0;
	
	return uVar0;
}

