//Decompiled with MagicRDR v1.0
//Function Count : 232
//Statics Count : 263
//Natives Count : 442
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
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	bool bLocal_25 = false;
	int iLocal_26 = 0;
	bool bLocal_27 = false;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	bool bLocal_31 = false;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	bool bLocal_40 = false;
	bool bLocal_41 = false;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	bool bLocal_44[1] = { false };
	int iLocal_46[1] = { 0 };
	int iLocal_48 = 0;
	bool bLocal_49 = true;
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
	bool bLocal_107 = false;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	bool bLocal_110 = false;
	bool bLocal_111 = false;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	bool bLocal_114 = false;
	bool bLocal_115 = false;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	bool bLocal_118 = false;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	int iLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	int iLocal_129 = 0;
	var uLocal_130 = 0;
	vector3 vLocal_131 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_134 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_137 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_140 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_143 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_146 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_149 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_152 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_155 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_158 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_161 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_164 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_167 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_170 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_173 = { 0.0f, 0.0f, 0.0f };
	float fLocal_176 = 0.0f;
	vector3 vLocal_177 = { 0.0f, 0.0f, 0.0f };
	int iLocal_180 = 0;
	bool bLocal_181 = false;
	bool bLocal_182 = false;
	char* cLocal_183 = NULL;
	bool bLocal_184 = false;
	int iLocal_185 = 0;
	int iLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	float fLocal_192 = 0.0f;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	bool bLocal_195 = false;
	int iLocal_196 = 0;
	vector3 vLocal_197 = { 0.0f, 0.0f, 0.0f };
	int iLocal_200 = 0;
	int iLocal_201 = 0;
	int iLocal_202 = 0;
	int iLocal_203 = 0;
	int iLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	float fLocal_208 = 0.0f;
	var uLocal_209 = 0;
	int iLocal_210 = 0;
	int iLocal_211 = 0;
	struct<57> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	var uVar0;
	int iVar6;
	int iVar8;
	bool bVar9;
	vector3 vVar10;
	vector3 vVar13;
	float fVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	vector3 vVar21;
	
	iLocal_14 = 0;
	iLocal_15 = 0;
	iLocal_23 = 0;
	iLocal_24 = 1;
	bLocal_25 = false;
	iLocal_26 = 0;
	iLocal_28 = 0;
	iLocal_29 = 0;
	iLocal_30 = 0;
	bLocal_31 = false;
	iLocal_32 = 0;
	iLocal_33 = 0;
	iLocal_42 = 0;
	bLocal_107 = false;
	iLocal_108 = 0;
	iLocal_109 = 0;
	iLocal_113 = 0;
	bLocal_114 = CREATE_LAYOUT(Function_231());
	iLocal_116 = 0;
	iLocal_117 = 0;
	vLocal_131 = { 1.0f, 0.0f, 1.0f };
	vLocal_143 = { -1.04f, 1.38f, 0.46f };
	vLocal_146 = { -3.48f, -53.07f, 0.0f };
	vLocal_149 = { 0.86f, 1.43f, -1.04f };
	vLocal_152 = { -3.48f, 134.64f, 0.0f };
	vLocal_155 = { -2.0f, -0.7f, -2.0f };
	vLocal_158 = { -2.06f, 0.0f, 1.04f };
	vLocal_161 = { -0.69f, 0.0f, 1.56f };
	vLocal_164 = { -0.66f, 0.0f, -1.47f };
	vLocal_167 = { 2.64f, 0.0f, -0.3f };
	vLocal_170 = { 180.0f, 0.0f, 180.0f };
	vLocal_173 = { 0.0f, 0.0f, 0.0f };
	fLocal_176 = 1.0f;
	vLocal_177 = { 0.0f, 0.0f, 0.0f };
	bLocal_184 = false;
	iLocal_193 = 0;
	iLocal_194 = 0;
	iLocal_196 = 0;
	iLocal_200 = 0;
	iLocal_201 = 1;
	iLocal_202 = 0;
	iLocal_203 = 0;
	iLocal_204 = 0;
	fLocal_208 = 2.0f;
	iLocal_210 = 0;
	iLocal_211 = 0;
	if (Global_16876[ScriptParam_0.f_566].f_12 == 0)
	{
		iLocal_43 = 0;
	}
	else if ((Global_16876[ScriptParam_0.f_566].f_12 % 2) == 1)
	{
		iLocal_43 = 1;
	}
	else
	{
		iLocal_43 = 0;
	}
	Function_230(&uLocal_37, 0.0f);
	uVar0 = Function_228(0, 1, 1, 0, 0);
	iVar6 = 0;
	iVar8 = 0;
	fVar16 = 0.0f;
	iLocal_112 = Function_227(1, 2);
	switch (Global_29004)
	{
		case 0x00000000:
			if (iLocal_112 == 0)
			{
				iLocal_48 = 217;
			}
			else
			{
				iLocal_48 = 155;
			}
			break;
		
		case 0x00000001:
			if (iLocal_112 == 0)
			{
				iLocal_48 = 319;
			}
			else
			{
				iLocal_48 = 320;
			}
			break;
		
		case 0x00000002:
			if (iLocal_112 == 0)
			{
				iLocal_48 = 218;
			}
			else
			{
				iLocal_48 = 168;
			}
			break;
	}
	Function_226(&bLocal_49, iLocal_48, 3, 0);
	Function_226(&bLocal_49, 541, 3, 0);
	Function_226(&bLocal_49, 543, 3, 0);
	Function_224(&bLocal_49, "dead_ground_male", 5, 0);
	Function_224(&bLocal_49, "custom/dead_ground_male", 8, 0);
	Function_224(&bLocal_49, "stand_shakehands", 5, 0);
	Function_224(&bLocal_49, "custom/stand_shakehands", 8, 0);
	Function_224(&bLocal_49, "crazy_hermit_waiving_over", 5, 0);
	Function_224(&bLocal_49, "custom/crazy_hermit_waiving_over", 8, 0);
	Function_224(&bLocal_49, "emo_hug", 5, 0);
	Function_224(&bLocal_49, "custom/emo_hug", 8, 0);
	switch (iLocal_43)
	{
		case 0x00000000:
			switch (Global_29004)
			{
				case 0x00000000:
					if (!Function_223("pressDemo3"))
					{
						if (Function_222())
						{
							iLocal_46[0] = 76;
						}
						else
						{
							iLocal_46[0] = 204;
						}
					}
					else
					{
						iLocal_46[0] = 76;
					}
					break;
				
				case 0x00000001:
					if (Function_222())
					{
						iLocal_46[0] = 312;
					}
					else
					{
						iLocal_46[0] = 311;
					}
					break;
				
				case 0x00000002:
					if (Function_222())
					{
						iLocal_46[0] = 203;
					}
					else
					{
						iLocal_46[0] = 33;
					}
					break;
			}
			Function_226(&bLocal_49, iLocal_46[0], 3, 0);
			Function_224(&bLocal_49, "$/tune/refGroups/campsiteSets/cam_hermitGruesome01x", 7, 0);
			break;
		
		case 0x00000001:
			iLocal_46[0] = RAND_INT_RANGE(1031, 1039);
			Function_226(&bLocal_49, iLocal_46[0], 3, 0);
			Function_224(&bLocal_49, "$/tune/refGroups/campsiteSets/cam_hermitNormal01x", 7, 0);
			break;
	}
	Function_221(iLocal_48);
	Function_221(iLocal_46[0]);
	iVar18 = (RAND_INT_RANGE(0, 2999) / 1000);
	if (iVar18 == 0)
	{
		bVar17 = "sit_ground_campfire_tend";
	}
	else if (iVar18 == 1)
	{
		bVar17 = "sit_ground_drink";
	}
	else if (iVar18 == 2)
	{
		bVar17 = "sit_ground_smoke";
	}
	else
	{
		bVar17 = "sit_ground_play_harmonica";
	}
	Function_224(&bLocal_49, "nthank_you", 5, 0);
	Function_224(&bLocal_49, "custom/thank_you", 8, 0);
	Function_224(&bLocal_49, bVar17, 1, 0);
	Function_224(&bLocal_49, "Locked_Footlocker", 1, 0);
	Function_224(&bLocal_49, "nstreetdog", 8, 0);
	Function_224(&bLocal_49, "Emo_hug", 1, 0);
	if (Global_3382 == 1)
	{
		iLocal_42 = 5;
	}
	Function_220();
	iVar19 = 0;
	bVar20 = false;
	while (!IS_EXITFLAG_SET())
	{
		Function_219(StackVal, StackVal, *(&ScriptParam_0 + 8));
		iLocal_125 = 600;
		if (bLocal_31 == 0)
		{
			if (Function_218(&bVar20, &iLocal_42, &iVar19, &iLocal_125, bLocal_107))
			{
				if (bVar20)
				{
					Function_217(&bLocal_44, 4294967295);
					Function_216(&bLocal_118);
				}
				else
				{
					Function_215(&bLocal_44, 4294967295);
					Function_214(&bLocal_118);
				}
			}
		}
		switch (iLocal_42)
		{
			case 0x00000000:
				if (Function_209(&bLocal_49))
				{
					bLocal_115 = CREATE_GRINGO_IN_LAYOUT(bLocal_114, "temp", bVar17, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
					GRINGO_LOAD_ANIMATION_FOR_ACTOR_ENUM_EXT(GET_GRINGO_FROM_OBJECT(bLocal_115), "UseCase1", "UseAnim", iLocal_48);
					iLocal_42 = 4;
					iLocal_125 = 0;
				}
				break;
			
			case 0x00000004:
				if (GRINGO_HAS_ANIMSET_LOADED_FOR_ACTOR_ENUM_EXT(GET_GRINGO_FROM_OBJECT(bLocal_115), "UseCase1", "UseAnim", iLocal_48))
				{
					iLocal_42 = 1;
					iLocal_125 = 0;
				}
				break;
			
			case 0x00000001:
				if (Function_169(&ScriptParam_0, &iLocal_125, &iLocal_117, &iLocal_116, 1))
				{
					iLocal_42 = 2;
					iLocal_125 = 0;
				}
				else if (iLocal_116 == 1)
				{
					iLocal_42 = 5;
					iLocal_125 = 0;
				}
				break;
			
			case 0x00000002:
				if (VDIST(Global_34574, *(&ScriptParam_0 + 8)) > Function_168())
				{
					iLocal_42 = 5;
					iLocal_125 = 0;
					break;
				}
				bLocal_41 = CREATE_POINT_IN_LAYOUT(bLocal_114, Function_231(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
				ATTACH_OBJECTS(bLocal_41, Global_34573, Function_231(), 0.0f, 0.5f, -1.0f, 0.0f, 0.0f, 0.0f, 4294967295);
				PRINTVECTOR(*(&ScriptParam_0 + 8));
				PRINTNL();
				PRINTVECTOR(Global_34574);
				PRINTNL();
				switch (iLocal_43)
				{
					case 0x00000000:
						iLocal_112 = 0;
						while (iLocal_112 <= 1)
						{
							vLocal_134 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vLocal_167, *(&ScriptParam_0 + 8), StackVal) };
							vLocal_137 = { 0.0f, 0.0f, 0.0f };
							vLocal_140 = { 0.0f, 0.0f, 0.0f };
							FIND_GROUND_INTERSECTION(&vLocal_134, 2.0f, &vLocal_140, &vLocal_137);
							Function_167(iLocal_46[iLocal_112], vLocal_140, vLocal_137);
							bLocal_44[iLocal_112] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, bLocal_114, Function_231(), Function_167(iLocal_46[iLocal_112], vLocal_140, vLocal_137));
							HOGTIE_ACTOR(bLocal_44[iLocal_112]);
							TASK_FLEE_ACTOR(bLocal_44[iLocal_112], Global_34573, -1.0f, -1.0f, 0, 0, 0);
							SET_ACTOR_CAN_PLAY_GESTURES(bLocal_44[iLocal_112], false);
							DECOR_SET_BOOL(bLocal_44[iLocal_112], "CheckForCamera", true);
							Function_166(bLocal_44[iLocal_112], 4294967295 * 50);
							iLocal_112++;
						}
						bLocal_22 = Function_165(StackVal, StackVal, bLocal_114, Function_231(), "$/tune/refGroups/campsiteSets/cam_hermitGruesome01x", *(&ScriptParam_0 + 8), 0.0f, 0.0f, 0.0f, 4294967295);
						bVar9 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_231(), bLocal_114, StackVal) + Vector(vVar10, *(&ScriptParam_0 + 8), "amb_campfire_light"));
						bLocal_118 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_231(), bLocal_114, StackVal) + Vector(vLocal_158, *(&ScriptParam_0 + 8), iLocal_48), *(&ScriptParam_0 + 20));
						bLocal_21 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_231(), bLocal_118, StackVal) + Vector(vLocal_161, *(&ScriptParam_0 + 8), bVar17), 0.0f, 0.0f, 0.0f);
						DECOR_SET_BOOL(bLocal_118, "criminal", true);
						break;
					
					case 0x00000001:
						bLocal_44[0] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_231(), bLocal_114, StackVal) + Vector(vLocal_131, *(&ScriptParam_0 + 8), iLocal_46[0]), 0.0f, 0.0f, 10.0f);
						TASK_STAND_STILL(bLocal_44[0], -1.0f, 0, 0);
						SET_ACTION_NODE_FOR_ACTOR(bLocal_44[0], "streetDog_Main/navigation_streetdog/Default/DefaultGait/Idles/Sitting/sit_pre");
						Function_166(bLocal_44[0], 0);
						Function_164(bLocal_44[0]);
						Function_165(StackVal, StackVal, bLocal_114, Function_231(), "$/tune/refGroups/campsiteSets/cam_hermitNormal01x", *(&ScriptParam_0 + 8), 0.0f, 0.0f, 0.0f, 4294967295);
						bLocal_118 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_231(), bLocal_114, StackVal) + Vector(vLocal_158, *(&ScriptParam_0 + 8), iLocal_48), 180.0f, 0.0f, 0.0f);
						bLocal_21 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_231(), bLocal_118, StackVal) + Vector(vLocal_164, *(&ScriptParam_0 + 8), bVar17), 180.0f, 0.0f, 0.0f);
						bVar9 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_231(), bLocal_114, StackVal) + Vector(vVar13, *(&ScriptParam_0 + 8), "amb_campfire_light"));
						break;
				}
				if (IS_OBJECT_VALID(bVar9))
				{
					UNK_0x6745191B(bVar9, 0.0f, 0.0f, 0.0f);
				}
				SET_ACTOR_CAN_PLAY_GESTURES(bLocal_118, false);
				Function_166(bLocal_118, 0);
				Function_164(bLocal_118);
				SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_ACTOR(bLocal_118), 1.5f, true, 1092616192);
				Function_163(bLocal_118);
				GIVE_WEAPON_TO_ACTOR(bLocal_118, 39, 0, 1, 1);
				MEMORY_REPORT_POSITION_AUTO(bLocal_118, Global_34573, 1);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(bLocal_118, 0);
				UNK_0x99AFD2D1(bLocal_118, 1, 1);
				GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bLocal_21), 0);
				DESTROY_OBJECT(bLocal_115);
				SNAP_OBJECT_TO_GROUND(bLocal_21, 2.0f, true, 1092616192);
				if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(bLocal_21)))
				{
					if (bLocal_184)
					{
						Function_161(&iLocal_185, 1, 0, 4294967295, 4294967295);
					}
					TASK_USE_GRINGO(bLocal_118, GET_GRINGO_FROM_OBJECT(bLocal_21), "UseCase1", 4294967295, 1);
					SNAP_ACTOR_TO_GRINGO(bLocal_118, bLocal_21, "UseCase1", 1, 0, 0);
				}
				vLocal_134 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vLocal_155, *(&ScriptParam_0 + 8), StackVal) };
				vLocal_134.f_4 = (vLocal_134.y + 2.0f);
				vLocal_137 = { 0.0f, 0.0f, 0.0f };
				vVar21 = { 0.0f, 0.0f, 0.0f };
				PRINTSTRING("Probe start pos");
				PRINTVECTOR(vLocal_134);
				PRINTSTRING("nProbe pos");
				PRINTVECTOR(vVar21);
				Function_159(StackVal, StackVal, &uLocal_126, &uLocal_127, &uLocal_128, 2.75f, *(&ScriptParam_0 + 8));
				vLocal_137.f_4 = 270.0f;
				PRINTVECTOR(vLocal_137);
				vLocal_140 = { 0.0f, 0.0f, 0.0f };
				FIND_GROUND_INTERSECTION(&vLocal_134, 2.0f, &vLocal_140, &vLocal_137);
				bLocal_110 = CREATE_GRINGO_IN_LAYOUT(bLocal_114, Function_231(), "$/content/scripting/gringo/SimpleGringo/Locked_Footlocker", vLocal_140, vLocal_170);
				SNAP_OBJECT_TO_GROUND(bLocal_110, 7.0f, true, 1092616192);
				bLocal_111 = GET_GRINGO_FROM_OBJECT(bLocal_110);
				Function_155(StackVal, StackVal, bLocal_111, vVar21, 2, 4294967295, 4294967295);
				Function_154(&iLocal_129, 1);
				iLocal_42 = 3;
				Function_153(&iLocal_125);
				iLocal_125 = 0;
				break;
			
			case 0x00000003:
				Function_153(&iLocal_125);
				Function_152();
				Function_139(StackVal, StackVal, Function_152(), &bLocal_107, ScriptParam_0.f_56, bLocal_118, 100, 0x42a00000, 1);
				Function_152();
				Function_139(StackVal, StackVal, Function_152(), &bLocal_107, ScriptParam_0.f_56, bLocal_44[0], 100, 0x42a00000, 1);
				if (!Function_133(ScriptParam_0.f_56, bLocal_118, &iLocal_108, &iLocal_109, 0, 1, 1, 1))
				{
					iLocal_42 = 5;
					iLocal_125 = 0;
					break;
				}
				if (GET_DEBUG_DRAW_STATE())
				{
					if (IS_ACTOR_VALID(bLocal_118))
					{
						GET_POSITION(bLocal_118, &uLocal_122);
						iLocal_125 = 0;
					}
				}
				switch (iLocal_43)
				{
					case 0x00000000:
						if (Function_130(bLocal_118, &uLocal_130, &fVar16, iLocal_129, bLocal_25, 0x40400000))
						{
							iLocal_113 = 3;
							bLocal_25 = true;
						}
						break;
					
					case 0x00000001:
						if (Function_130(bLocal_118, &uLocal_130, &fVar16, iLocal_129, bLocal_25, 0x40400000) || Function_130(bLocal_44[0], &uLocal_130, &fVar16, iLocal_129, bLocal_25, 0x40400000))
						{
							iLocal_113 = 3;
							bLocal_25 = true;
						}
						break;
				}
				switch (iLocal_43)
				{
					case 0x00000000:
						if (IS_ACTOR_VALID(bLocal_44[0]))
						{
							Function_129(bLocal_44[0]);
							if (Function_127(StackVal, StackVal, Global_34573, Function_129(bLocal_44[0])) < Function_125(1))
							{
								iLocal_125 = 0;
								iLocal_42 = 5;
								break;
							}
							else
							{
								Function_129(bLocal_44[0]);
								if (VDIST(Function_129(bLocal_44[0]), *(&ScriptParam_0 + 8)) < 20.0f)
								{
									TASK_FLEE_ACTOR(bLocal_44[0], Global_34573, -1.0f, -1.0f, 0, 0, 0);
									Function_124(bLocal_44[0]);
									iVar8 = 1;
									iLocal_125 = 0;
									iLocal_42 = 5;
								}
							}
						}
						else if (Function_127(StackVal, StackVal, Global_34573, *(&ScriptParam_0 + 8)) < Function_125(1))
						{
							iLocal_125 = 0;
							iLocal_42 = 5;
							break;
						}
						break;
					
					case 0x00000001:
						if (Function_127(StackVal, StackVal, Global_34573, *(&ScriptParam_0 + 8)) < Function_125(1))
						{
							iLocal_125 = 0;
							iLocal_42 = 5;
							break;
						}
						break;
				}
				if (IS_ACTOR_VALID(bLocal_118))
				{
					if (Function_127(StackVal, StackVal, bLocal_118, *(&ScriptParam_0 + 8)) < Function_125(1))
					{
						Function_122(bLocal_118);
					}
				}
				switch (iLocal_43)
				{
					case 0x00000000:
						if (Function_82(&iLocal_113, &bLocal_44, uVar0))
						{
							iVar8 = 1;
							iLocal_42 = 5;
						}
						break;
					
					case 0x00000001:
						iLocal_125 = 0;
						if (IS_ACTOR_VALID(bLocal_118))
						{
							if (Function_29(&iLocal_113, &bLocal_44))
							{
								iVar8 = 1;
								iLocal_42 = 5;
							}
						}
						else
						{
							iLocal_42 = 5;
						}
						break;
				}
				break;
			
			case 0x00000005:
				iLocal_42 = 6;
				iLocal_125 = 0;
				break;
			
			case 0x00000006:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				iLocal_125 = 0;
				break;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(iLocal_125);
		}
	}
	Function_215(&bLocal_44, 4294967295);
	Function_214(&bLocal_118);
	Function_28(&uLocal_126, &uLocal_127, &uLocal_128);
	Function_27(iLocal_48);
	Function_27(iLocal_46[0]);
	Function_122(bLocal_118);
	Function_122(bLocal_44[0]);
	if (!bLocal_107)
	{
		Function_21(ScriptParam_0.f_56, 0.0f, 0, 1, 0);
		if (IS_OBJECT_VALID(bLocal_114))
		{
			Function_20(&bLocal_118);
			Function_19(&bLocal_44, 4294967295);
			UNK_0xA936E73B(bLocal_114, 1);
			MARK_OBJECT_FOR_AGGRESSIVE_CLEANUP(bLocal_114, 1);
		}
	}
	else if (iVar8 != 0 && bLocal_25 != 0)
	{
		switch (iLocal_43)
		{
			case 0x00000000:
				Function_19(&bLocal_44, 4294967295);
				if (IS_ACTOR_VALID(bLocal_118))
				{
					RESET_ANIM_SET_FOR_ACTOR(bLocal_118, 0);
				}
				if (bLocal_184)
				{
					Function_161(&iLocal_185, 1, 0, 4294967295, 4294967295);
				}
				Function_20(&bLocal_118);
				break;
			
			case 0x00000001:
				if (bLocal_184)
				{
					Function_161(&iLocal_185, 1, 0, 4294967295, 4294967295);
				}
				Function_10(bLocal_118, GET_GRINGO_FROM_OBJECT(bLocal_21), "UseCase1", 4294967295, 1, 2);
				Function_7(bLocal_118, 1);
				if (IS_ACTOR_VALID(bLocal_44[0]))
				{
					if (IS_ACTOR_VALID(bLocal_118))
					{
						RESET_ANIM_SET_FOR_ACTOR(bLocal_44[0], 0);
						TASK_FOLLOW_ACTOR(bLocal_44[0], bLocal_118);
					}
					else
					{
						Function_19(&bLocal_44, 4294967295);
					}
				}
				break;
			}
	}
	if (Function_5(bLocal_118, 0))
	{
		AI_SPEECH_SET_ALLOW_FOR_ACTOR(bLocal_118, 1);
		UNK_0x99AFD2D1(bLocal_118, 0, 0);
	}
	if (ScriptParam_0.f_32)
	{
		Global_3399 = 0;
	}
	if (bLocal_184)
	{
		Function_161(&iLocal_185, 1, 0, 4294967295, 4294967295);
	}
	if (bLocal_184)
	{
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	}
	if (DECOR_CHECK_EXIST(Global_34573, "RunNewCamera"))
	{
		DECOR_REMOVE(Global_34573, "RunNewCamera");
	}
	if (IS_OBJECT_VALID(bVar9))
	{
		UNK_0xE18028C1(bVar9);
		DESTROY_OBJECT(bVar9);
	}
	if (iLocal_28 == 1)
	{
		AUDIO_ENABLE_PLAYER_TAUNTS();
		iLocal_28 = 0;
	}
	REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_181);
	REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_181);
	if (IS_VOLUME_VALID(bLocal_181))
	{
		DESTROY_VOLUME(bLocal_181);
	}
	Function_1(&bLocal_49);
	UNK_0xA936E73B(bLocal_114, 1);
	RELEASE_LAYOUT_REF(bLocal_114);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0xF30 / 3888
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

void Function_2(var uParam0, int iParam1) //Position: 0xF56 / 3926
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

void Function_3(var uParam0, int iParam1) //Position: 0x1084 / 4228
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_4(var uParam0, int iParam1) //Position: 0x109E / 4254
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_5(bool bParam0, bool bParam1) //Position: 0x10BB / 4283
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
			Function_122(bParam0);
			return 0;
		}
		if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 163840))
		{
			Function_122(bParam0);
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

int Function_6(bool bParam0, int iParam1) //Position: 0x1157 / 4439
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

int Function_7(bool bParam0, int iParam1) //Position: 0x11A1 / 4513
{
	char* cVar0[64];
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		strcpy(&cVar0, "ACTORROAM_SET_OPTIONS_FOR_ACTOR: invalid actor ", 64);
		stradd(&cVar0, GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(bParam0)), 64);
		return 0;
	}
	if (!Function_9(bParam0))
	{
		strcpy(&cVar0, "ACTORROAM_SET_OPTIONS_FOR_ACTOR: invalid actor ", 64);
		stradd(&cVar0, GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(bParam0)), 64);
		return 0;
	}
	Function_8(bParam0, iParam1);
	return 1;
}

void Function_8(bool bParam0, bool bParam1) //Position: 0x1249 / 4681
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_options", bParam1);
	return;
}

bool Function_9(bool bParam0) //Position: 0x126E / 4718
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

int Function_10(bool bParam0, bool bParam1, bool bParam2, int iParam3, var uParam4, int iParam5) //Position: 0x1293 / 4755
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
		Function_11(bParam0, 5, GET_OBJECT_FROM_GRINGO(bParam1), uParam4, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_11(bool bParam0, int iParam1, bool bParam2, var uParam3, int iParam4) //Position: 0x132B / 4907
{
	char* cVar0[32];
	
	Function_18();
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
	if (Function_17(bParam0) == 1)
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
	Function_16(bParam0, 0);
	Function_15(bParam0, iParam1);
	Function_14(bParam0, bParam2);
	Function_13(bParam0, uParam3);
	if (Function_12(bParam0) != 5)
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

int Function_12(bool bParam0) //Position: 0x1579 / 5497
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior");
}

void Function_13(bool bParam0, bool bParam1) //Position: 0x159C / 5532
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_14(bool bParam0, bool bParam1) //Position: 0x15BF / 5567
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_target", bParam1);
	return;
}

void Function_15(bool bParam0, bool bParam1) //Position: 0x15E3 / 5603
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_16(bool bParam0, bool bParam1) //Position: 0x1609 / 5641
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_state", bParam1);
	return;
}

int Function_17(bool bParam0) //Position: 0x162C / 5676
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
}

void Function_18() //Position: 0x164A / 5706
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

void Function_19(bool bParam0, int iParam1) //Position: 0x1694 / 5780
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *bParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_20(bParam0[iVar0]);
		iVar0++;
	}
	return;
}

void Function_20(bool bParam0) //Position: 0x16C1 / 5825
{
	if (IS_ACTOR_VALID(*bParam0))
	{
		RESET_ANIM_SET_FOR_ACTOR(*bParam0, 0);
		TASK_FLEE_ACTOR(*bParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
		TASK_PRIORITY_SET(*bParam0, 0);
	}
	return;
}

bool Function_21(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x16EC / 5868
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

void Function_22(bool bParam0) //Position: 0x1949 / 6473
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

void Function_23(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x198F / 6543
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_24(Global_6269) };
		}
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, &Var0, iParam5);
	}
	else
	{
		iVar4 = "";
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, iVar4, iParam5);
	}
}

struct<16> Function_24(int iParam0) //Position: 0x1A06 / 6662
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

bool Function_25() //Position: 0x1A45 / 6725
{
	if (Function_26(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_26(int iParam0, int iParam1) //Position: 0x1A60 / 6752
{
	return (iParam0 && iParam1) == 0;
}

void Function_27(bool bParam0) //Position: 0x1A6D / 6765
{
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(bParam0);
	return;
}

void Function_28(var uParam0, var uParam1, int iParam2) //Position: 0x1A78 / 6776
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

bool Function_29(var uParam0, int iParam1) //Position: 0x1AA5 / 6821
{
	var uVar0;
	
	GET_POSITION(bLocal_118, &uVar0);
	switch (*uParam0)
	{
		case 0x00000000:
			if (iLocal_30 == 0)
			{
				if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bLocal_118, 1.0f, 47.0f, 1, 0, 0))
				{
					SET_ACTOR_VISION_MAX_RANGE(bLocal_118, 80.0f, 1);
					SET_ACTOR_VISION_FIELD_OF_VIEW(bLocal_118, 359.0f);
					MEMORY_REPORT_POSITION(bLocal_118, Global_34573, &uVar0);
					AI_QUICK_EXIT_GRINGO(bLocal_118, 1);
					TASK_FACE_ACTOR(bLocal_118, Global_34573, 1, 3212836864);
					Function_80();
					AI_SET_SHOTS_PER_BURST(bLocal_118, 1);
					Function_79(bLocal_118, Global_34573);
					COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bLocal_118, 13, 1);
					TASK_PRIORITY_SET(bLocal_118, 1);
					Function_230(&uLocal_37, 0.0f);
					Function_78(1);
					iLocal_201 = 0;
					*uParam0 = 1;
				}
			}
			else if (IS_ACTOR_VALID(bLocal_118))
			{
				if (Function_77(Global_34573, bLocal_118) >= 25.0f)
				{
					GRINGO_DEACTIVATE(GET_GRINGO_FROM_OBJECT(bLocal_21));
					AI_QUICK_EXIT_GRINGO(bLocal_118, 1);
					Function_230(&uLocal_37, 0.0f);
					*uParam0 = 2;
				}
			}
			break;
		
		case 0x00000001:
			if (Function_76((*iParam1)[0]))
			{
				*uParam0 = 3;
			}
			Function_230(&uLocal_37, 0.0f);
			*uParam0 = 2;
			break;
		
		case 0x00000002:
			if (iLocal_201 == 0)
			{
				if (Function_72(&uLocal_37, 2.0f))
				{
					CLEAR_ALTERNATE_SPEECH_CONTEXT_FOR_PAIN(bLocal_118);
					CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bLocal_118);
					Function_71(bLocal_118, Global_34573, "eventCrazyHermit_msg01", "eventCrazyHermit_msg01", 2, 60, 1, 1);
					iLocal_201 = 1;
				}
			}
			if (iLocal_30 == 0)
			{
				if (IS_ACTOR_VALID(bLocal_118))
				{
					if (Function_77(Global_34573, bLocal_118) < 55.0f || (Function_72(&uLocal_37, 10.0f) && Function_77(Global_34573, bLocal_118) < 30.0f))
					{
						if (Function_76((*iParam1)[0]) == 0)
						{
							if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(bLocal_21)))
							{
								if (bLocal_184)
								{
									Function_161(&iLocal_185, 1, 0, 4294967295, 4294967295);
								}
								RESET_ANIM_SET_FOR_ACTOR(bLocal_118, 0);
								TASK_CLEAR(bLocal_118);
								iLocal_30 = 1;
								TASK_USE_GRINGO(bLocal_118, GET_GRINGO_FROM_OBJECT(bLocal_21), "UseCase1", 4294967295, 1);
							}
							*uParam0 = 0;
						}
					}
				}
			}
			if (Function_76((*iParam1)[0]))
			{
				*uParam0 = 3;
			}
			Function_70();
			if (Function_72(&uLocal_37, 2.0f))
			{
				TASK_POINT_GUN_AT_OBJECT(bLocal_118, Global_34573, -1.0f, 0);
				Function_230(&uLocal_37, 0.0f);
				*uParam0 = 3;
			}
			break;
		
		case 0x00000003:
			if (iLocal_201 == 0)
			{
				if (Function_72(&uLocal_37, 2.0f))
				{
					CLEAR_ALTERNATE_SPEECH_CONTEXT_FOR_PAIN(bLocal_118);
					CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bLocal_118);
					Function_71(bLocal_118, Global_34573, "eventCrazyHermit_msg01", "eventCrazyHermit_msg01", 2, 60, 1, 1);
					iLocal_201 = 1;
				}
			}
			if (iLocal_30 == 0)
			{
				if (IS_ACTOR_VALID(bLocal_118))
				{
					if (Function_77(Global_34573, bLocal_118) < 55.0f || (Function_72(&uLocal_37, 10.0f) && Function_77(Global_34573, bLocal_118) < 30.0f))
					{
						if (Function_76((*iParam1)[0]) == 0)
						{
							if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(bLocal_21)))
							{
								if (bLocal_184)
								{
									Function_161(&iLocal_185, 1, 0, 4294967295, 4294967295);
								}
								RESET_ANIM_SET_FOR_ACTOR(bLocal_118, 0);
								TASK_CLEAR(bLocal_118);
								iLocal_30 = 1;
								TASK_USE_GRINGO(bLocal_118, GET_GRINGO_FROM_OBJECT(bLocal_21), "UseCase1", 4294967295, 1);
							}
							*uParam0 = 0;
						}
					}
				}
			}
			else
			{
				iLocal_202 = 1;
			}
			Function_70();
			if (Function_76((*iParam1)[0]) || iLocal_202)
			{
				if (iLocal_23 == 0)
				{
					COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bLocal_118, 13, 0);
					COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bLocal_118, 0.0f, 0.0f);
					AI_RESET_FIRING_FSM(bLocal_118);
					CLEAR_ALTERNATE_SPEECH_CONTEXT_FOR_PAIN(bLocal_118);
					CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bLocal_118);
					Function_71(bLocal_118, Global_34573, "eventCrazyHermit_msg02", "eventCrazyHermit_msg02", 5, 60, 1, 1);
					if (bLocal_184)
					{
						Function_161(&iLocal_185, 34, 0, 4294967295, 4294967295);
					}
					Function_69(bLocal_118, &Global_34573);
					RESET_ANIM_SET_FOR_ACTOR((*iParam1)[0], 1);
					Function_69((*iParam1)[0], &Global_34573);
					Function_166((*iParam1)[0], 0);
					TASK_PRIORITY_SET(bLocal_118, 0);
					ADD_BLIP_FOR_ACTOR(bLocal_118, 322, 0.0f, 3, 0);
					ADD_BLIP_FOR_ACTOR((*iParam1)[0], 322, 0.0f, 3, 0);
					iLocal_23 = 1;
				}
			}
			if (Function_68(bLocal_118, &bLocal_27))
			{
				switch (bLocal_27)
				{
					case 0x00000000:
						if (iLocal_203 == 0)
						{
							Function_71(bLocal_118, Global_34573, "eventCrazyHermit_msg03", "eventCrazyHermit_msg03", 5, 60, 1, 1);
							iLocal_203 = 1;
						}
						AI_SPEECH_SET_ALLOW_FOR_ACTOR(bLocal_118, 1);
						UNK_0x99AFD2D1(bLocal_118, 0, 0);
						Function_30(50, 1, 0);
						return 1;
						break;
					
					case 0x00000001:
						if (iLocal_203 == 0)
						{
							Function_71(Global_34573, 0, "eventCrazyHermitPlayer_msg01", "eventCrazyHermitPlayer_msg01", 5, 60, 1, 1);
							iLocal_203 = 1;
						}
						return 1;
						break;
					
					case 0x00000002:
						if (iLocal_203 == 0)
						{
							Function_71(bLocal_118, Global_34573, "eventCrazyHermit_msg03", "eventCrazyHermit_msg03", 5, 60, 1, 1);
							iLocal_203 = 1;
						}
						AI_SPEECH_SET_ALLOW_FOR_ACTOR(bLocal_118, 1);
						UNK_0x99AFD2D1(bLocal_118, 0, 0);
						Function_30(50, 1, 0);
						return 1;
						break;
					}
			}
			break;
	}
	return 0;
}

void Function_30(int iParam0, bool bParam1, bool bParam2) //Position: 0x1FB0 / 8112
{
	int iVar0;
	bool bVar1;
	
	if (Function_67(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_66())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_65(1);
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
			Function_64(1, bVar1);
			if (!bParam2)
			{
				if (!Function_63(Global_76848, 1))
				{
					Function_57(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_55(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_63(Global_76848, 2))
				{
					Function_57(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_54(1, bVar1, 0, 0);
	}
	else
	{
		Function_53(1, (4294967295 * bVar1), 0);
	}
	if (Function_65(1) <= 4294962296)
	{
		Function_40(1, 4294962296, 0);
	}
	else if (Function_65(1) >= 5000)
	{
		Function_40(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_39(1));
	iVar0 = Function_65(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_32(2, Function_38(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_32(2, Function_38(Global_12976.f_152), 0);
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
				Function_32(2, Function_38(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_32(2, Function_38(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_32(2, Function_38(Global_12976.f_152), 1);
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
				Function_32(2, Function_38(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_32(2, Function_38(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_32(2, Function_38(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_32(2, Function_38(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_32(2, Function_38(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_32(2, Function_38(Global_12976.f_152), 1);
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
				Function_32(2, Function_38(Global_12976.f_152), 0);
			}
			break;
	}
	Function_31(Global_12976.f_152, Global_12976.f_156);
	return;
}

void Function_31(int iParam0, int iParam1) //Position: 0x22D1 / 8913
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

int Function_32(int iParam0, char* cParam1, bool bParam2) //Position: 0x252F / 9519
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
	Function_36(iParam0, cParam1, 0, 1);
	iVar1 = Function_33();
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

int Function_33() //Position: 0x26B4 / 9908
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
	Function_34();
	return 0;
}

void Function_34() //Position: 0x2753 / 10067
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
		Function_35(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_35(int iParam0) //Position: 0x2802 / 10242
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

int Function_36(int iParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0x2860 / 10336
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
		Function_37(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, uParam3);
	}
	return 1;
}

void Function_37(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x2BB2 / 11186
{
	CLEAR_STAT_MESSAGE();
	if (!Global_49306)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 1, false, 0, 0);
		}
		else if (bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 0, false, 0, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 1, 0, 0, false, 0, 0);
		}
	}
}

var Function_38(int iParam0) //Position: 0x2C35 / 11317
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

float Function_39(int iParam0) //Position: 0x2CD8 / 11480
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

int Function_40(int iParam0, bool bParam1, bool bParam2) //Position: 0x2D11 / 11537
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
		Function_52(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_51(iParam0);
	if (bParam2)
	{
		Function_41(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_41(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x2FAC / 12204
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_50(390))), 32);
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
					bVar19 = (Function_39(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_39(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_48(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_45(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_43(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_42(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_231(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_42(int iParam0) //Position: 0x35D9 / 13785
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_43(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x35EA / 13802
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_44("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_44("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_44("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_44(char* cParam0, bool bParam1) //Position: 0x36DF / 14047
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_45(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x36F8 / 14072
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_47(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_46(Function_47(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_46(int iParam0, int iParam1) //Position: 0x375D / 14173
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_47(int iParam0, bool bParam1) //Position: 0x376F / 14191
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_48(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x3781 / 14209
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
	if (((Function_49(iParam0) != 19 || Function_49(iParam0) != 17) || Function_49(iParam0) != 10) || Function_49(iParam0) != 9)
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

int Function_49(int iParam0) //Position: 0x38B1 / 14513
{
	return Global_35278[iParam020].f_48;
}

var Function_50(int iParam0) //Position: 0x38C0 / 14528
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_51(int iParam0) //Position: 0x38FD / 14589
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

int Function_52(int iParam0, bool bParam1, bool bParam2) //Position: 0x3A97 / 14999
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

int Function_53(int iParam0, bool bParam1, int iParam2) //Position: 0x3CDB / 15579
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
	Function_51(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_41(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_54(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x3ED6 / 16086
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
	Function_52(iParam0, TO_FLOAT(bParam1), 1);
	Function_51(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_41(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

int Function_55(int iParam0, bool bParam1) //Position: 0x415A / 16730
{
	bool bVar0;
	int iVar1;
	
	Function_53(iParam0, bParam1, 0);
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
	iVar1 = Function_56(iParam0, 4294967295);
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
	iVar1 = Function_33();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

var Function_56(int iParam0, int iParam1) //Position: 0x42F6 / 17142
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

void Function_57(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x4337 / 17207
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_59(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_58(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_58(char* cParam0, int iParam1) //Position: 0x43A3 / 17315
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

bool Function_59(bool bParam0, var uParam1, int iParam2) //Position: 0x43DA / 17370
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
		if (Function_61(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_60(uVar0))
		{
			case 0x00000002:
				if (!Function_63(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_60(char* cParam0) //Position: 0x4452 / 17490
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

int Function_61(int iParam0) //Position: 0x44F3 / 17651
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_62(&iVar1, 2147483648);
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

void Function_62(int iParam0, int iParam1) //Position: 0x4530 / 17712
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

bool Function_63(var uParam0, int iParam1) //Position: 0x4543 / 17731
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_64(int iParam0, bool bParam1) //Position: 0x4556 / 17750
{
	bool bVar0;
	int iVar1;
	
	Function_54(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_56(iParam0, 4294967295);
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
	iVar1 = Function_33();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

int Function_65(bool bParam0) //Position: 0x46F3 / 18163
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

bool Function_66() //Position: 0x4734 / 18228
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

var Function_67(int iParam0) //Position: 0x475F / 18271
{
	return (*&Global_12976 + 104)[iParam0];
}

bool Function_68(bool bParam0, int iParam1) //Position: 0x476E / 18286
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		*iParam1 = 1;
		return 1;
	}
	if (!Function_5(bParam0, 0))
	{
		*iParam1 = 1;
		return 1;
	}
	if (IS_ACTOR_HOGTIED(bParam0))
	{
		*iParam1 = 0;
		return 1;
	}
	if (AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 65536))
	{
		*iParam1 = 2;
		return 1;
	}
	return 0;
}

int Function_69(bool bParam0, int iParam1) //Position: 0x47BD / 18365
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

void Function_70() //Position: 0x48A2 / 18594
{
	if (Function_5(bLocal_118, 0))
	{
		switch (iLocal_200)
		{
			case 0x00000000:
				if (IS_ACTOR_HOGTIED(bLocal_118))
				{
					Function_122(bLocal_118);
					if (bLocal_184)
					{
						Function_161(&iLocal_185, 34, 0, 4294967295, 4294967295);
					}
					Function_69(bLocal_118, &Global_34573);
					Function_124(bLocal_118);
					iLocal_200 = 1;
				}
				break;
			
			case 0x00000001:
				if (!IS_ACTOR_HOGTIED(bLocal_118))
				{
					if (bLocal_184)
					{
						Function_161(&iLocal_185, 34, 0, 4294967295, 4294967295);
					}
					Function_69(bLocal_118, &Global_34573);
					iLocal_200 = 0;
				}
				break;
			}
	}
	return;
}

void Function_71(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x491C / 18716
{
	bParam1 = bParam1;
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0) && Function_77(bParam0, Global_34573) >= IntToFloat(iParam5))
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

bool Function_72(var uParam0, float fParam1) //Position: 0x49AC / 18860
{
	if (Function_75(uParam0))
	{
		if (Function_73(uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_73(int iParam0) //Position: 0x49C8 / 18888
{
	if (Function_75(iParam0))
	{
		if (Function_74(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_74(int iParam0) //Position: 0x4A90 / 19088
{
	return Function_26(*iParam0, 2);
}

bool Function_75(int iParam0) //Position: 0x4A9D / 19101
{
	return Function_26(*iParam0, 1);
}

bool Function_76(bool bParam0) //Position: 0x4AAA / 19114
{
	if (GET_LAST_ATTACKER(bLocal_118) == Global_34573)
	{
		return 1;
	}
	if (bLocal_25)
	{
		return 1;
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		if (GET_LAST_ATTACKER(bParam0) == Global_34573)
		{
			return 1;
		}
	}
	if (IS_ACTOR_VALID(bLocal_118))
	{
		if (Function_77(Global_34573, bLocal_118) > 12.0f)
		{
			return 1;
		}
	}
	return 0;
}

float Function_77(bool bParam0, bool bParam1) //Position: 0x4AF5 / 19189
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

void Function_78(int iParam0) //Position: 0x4BE6 / 19430
{
	Global_16876[iParam06].f_16++;
	if (Global_16876[iParam06].f_16 == 1)
	{
		Function_54(409, 1, 0, 0);
	}
	return;
}

void Function_79(bool bParam0, bool bParam1) //Position: 0x4C17 / 19479
{
	var uVar0;
	
	GET_POSITION(bParam0, &uVar0);
	TASK_SHOOT_FROM_POSITION(bParam0, bParam1, &uVar0);
	return;
}

void Function_80() //Position: 0x4C2D / 19501
{
	int iVar0;
	
	bLocal_184 = true;
	if (Global_29004 == 0)
	{
		iVar0 = Function_81(3);
		if (iVar0 == 0)
		{
			cLocal_183 = "FTR_SONG_01";
		}
		else if (iVar0 == 1)
		{
			cLocal_183 = "FTR_SONG_02";
		}
		else if (iVar0 == 2)
		{
			cLocal_183 = "FTR_SONG_04";
		}
	}
	else if (Global_29004 == 2)
	{
		cLocal_183 = "NRT_SONG_05";
	}
	else if (Global_29004 == 1)
	{
		iVar0 = Function_81(3);
		if (iVar0 == 0)
		{
			cLocal_183 = "MEX_SONG_04";
		}
		else if (iVar0 == 1)
		{
			cLocal_183 = "MEX_SONG_06";
		}
		else
		{
			cLocal_183 = "MEX_SONG_07";
		}
	}
	AUDIO_MUSIC_FORCE_TRACK(cLocal_183, "IDLE", 0.0f, 500, 4294967295, 3212836864, 0);
	iLocal_185 = 1;
	return;
}

int Function_81(bool bParam0) //Position: 0x4D11 / 19729
{
	bParam0 = (bParam0 * 1000 - 1);
	return (RAND_INT_RANGE(0, bParam0) / 1000);
}

bool Function_82(var uParam0, int iParam1, int iParam2) //Position: 0x4D2A / 19754
{
	switch (*uParam0)
	{
		case 0x00000000:
			if (!Function_5(bLocal_118, 0))
			{
				if (bLocal_184)
				{
					Function_161(&iLocal_185, 1, 0, 4294967295, 4294967295);
				}
				iLocal_28 = 1;
				ADD_COMPANION_PERMANENT();
				*uParam0 = 4;
				break;
			}
			if (iLocal_30 == 0)
			{
				if (IS_ACTOR_VALID(bLocal_118))
				{
					if (Function_77(Global_34573, bLocal_118) > 55.0f)
					{
						SET_ACTOR_VISION_MAX_RANGE(bLocal_118, 80.0f, 1);
						SET_ACTOR_VISION_FIELD_OF_VIEW(bLocal_118, 359.0f);
						GRINGO_DEACTIVATE(GET_GRINGO_FROM_OBJECT(bLocal_21));
						RESET_ANIM_SET_FOR_ACTOR(bLocal_118, 1);
						DELETE_ALL_WEAPONS_FROM_ACTOR((*iParam1)[0]);
						TASK_CLEAR(bLocal_118);
						MEMORY_IDENTIFY(bLocal_118, Global_34573);
						Function_80();
						AI_GOAL_LOOK_AT_ACTOR(bLocal_118, Global_34573, 1, 1065353216, 3212836864, 3212836864, 0);
						TASK_FACE_ACTOR(bLocal_118, Global_34573, 1, -1.0f);
						Function_230(&uLocal_37, 0.0f);
						Function_78(1);
						*uParam0 = 1;
					}
				}
			}
			else if (IS_ACTOR_VALID(bLocal_118))
			{
				if (Function_77(Global_34573, bLocal_118) >= 25.0f)
				{
					GRINGO_DEACTIVATE(GET_GRINGO_FROM_OBJECT(bLocal_21));
					AI_QUICK_EXIT_GRINGO(bLocal_118, 1);
					Function_230(&uLocal_37, 0.0f);
					*uParam0 = 3;
				}
			}
			break;
		
		case 0x00000001:
			if (Function_72(&uLocal_37, 1.0f))
			{
				TASK_FACE_ACTOR(bLocal_118, Global_34573, 1, 3212836864);
			}
			if (Function_72(&uLocal_37, 2.0f))
			{
				if (Function_121(bLocal_118, Global_34573, 0x3f000000))
				{
					ADD_BLIP_FOR_ACTOR(bLocal_118, 325, 0.0f, 3, 0);
					SET_ANIM_SET_FOR_ACTOR(bLocal_118, "crazy_hermit_waiving_over", 0);
					SET_ACTION_NODE_FOR_ACTOR(bLocal_118, "crazy_hermit_waiving_over/wave");
					CLEAR_ALTERNATE_SPEECH_CONTEXT_FOR_PAIN(bLocal_118);
					CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bLocal_118);
					Function_71(bLocal_118, Global_34573, "eventCrazyHermit_msg04", "eventCrazyHermit_msg04", 5, 60, 1, 1);
					Function_230(&uLocal_37, 0.0f);
					*uParam0 = 3;
				}
			}
			if (IS_ACTOR_VALID(bLocal_118))
			{
				if (Function_77(Global_34573, bLocal_118) > 15.0f)
				{
					Function_230(&uLocal_37, 0.0f);
					*uParam0 = 3;
				}
			}
			break;
		
		case 0x00000003:
			Function_70();
			if (iLocal_204 == 0)
			{
				if (IS_ACTOR_VALID(bLocal_118))
				{
					if ((bLocal_25 && iLocal_23 != 0) || iLocal_30)
					{
						COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bLocal_118, 13, 0);
						COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bLocal_118, 0.0f, 0.0f);
						AI_RESET_FIRING_FSM(bLocal_118);
						RESET_ANIM_SET_FOR_ACTOR(bLocal_118, 1);
						AI_QUICK_EXIT_GRINGO(bLocal_118, 1);
						Function_124(bLocal_118);
						TASK_CLEAR(bLocal_118);
						if (bLocal_184)
						{
							Function_161(&iLocal_185, 34, 0, 4294967295, 4294967295);
						}
						Function_69(bLocal_118, &Global_34573);
						Function_120(bLocal_118, Global_34573, 4, 1);
						AI_SPEECH_SET_ALLOW_FOR_ACTOR(bLocal_118, 1);
						UNK_0x99AFD2D1(bLocal_118, 0, 0);
						Function_122(bLocal_118);
						ADD_BLIP_FOR_ACTOR(bLocal_118, 322, 0.0f, 3, 0);
						iLocal_23 = 1;
						iLocal_204 = 1;
					}
					else if (Function_77(Global_34573, bLocal_118) > 12.0f && iLocal_23 != 0)
					{
						if (!IS_AMBIENT_SPEECH_PLAYING(bLocal_118))
						{
							iLocal_23 = 1;
							if (IS_BLIP_VALID(bLocal_40))
							{
								REMOVE_BLIP(bLocal_40);
							}
							AI_QUICK_EXIT_GRINGO(bLocal_118, 1);
							COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bLocal_118, 13, 0);
							COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bLocal_118, 0.0f, 0.0f);
							AI_RESET_FIRING_FSM(bLocal_118);
							Function_124(bLocal_118);
							TASK_CLEAR(bLocal_118);
							RESET_ANIM_SET_FOR_ACTOR(bLocal_118, 1);
							Function_122(bLocal_118);
							ADD_BLIP_FOR_ACTOR(bLocal_118, 322, 0.0f, 3, 0);
							if (bLocal_184)
							{
								Function_161(&iLocal_185, 34, 0, 4294967295, 4294967295);
							}
							Function_69(bLocal_118, &Global_34573);
							Function_120(bLocal_118, Global_34573, 4, 1);
							Function_230(&uLocal_37, 0.0f);
							iLocal_32 = 1;
							Function_122(bLocal_118);
							ADD_BLIP_FOR_ACTOR(bLocal_118, 322, 0.0f, 3, 0);
							CLEAR_ALTERNATE_SPEECH_CONTEXT_FOR_PAIN(bLocal_118);
							CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bLocal_118);
							Function_71(bLocal_118, Global_34573, "eventCrazyHermit_msg05", "eventCrazyHermit_msg05", 5, 60, 1, 1);
							AI_SPEECH_SET_ALLOW_FOR_ACTOR(bLocal_118, 1);
							UNK_0x99AFD2D1(bLocal_118, 0, 0);
							iLocal_204 = 1;
							TASK_PRIORITY_SET(bLocal_118, 1);
						}
					}
				}
			}
			else if (iLocal_30 == 1)
			{
				if (iLocal_33 == 0)
				{
					if (Function_77(Global_34573, bLocal_118) > 30.0f)
					{
						AI_QUICK_EXIT_GRINGO(bLocal_118, 1);
						if (bLocal_184)
						{
							Function_161(&iLocal_185, 34, 0, 4294967295, 4294967295);
						}
						Function_69(bLocal_118, &Global_34573);
						iLocal_33 = 1;
					}
				}
			}
			if (iLocal_30 == 0)
			{
				if (IS_ACTOR_VALID(bLocal_118))
				{
					if (Function_77(Global_34573, bLocal_118) < 55.0f || (Function_72(&uLocal_37, 10.0f) && Function_77(Global_34573, bLocal_118) < 30.0f))
					{
						if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(bLocal_21)))
						{
							if (bLocal_184)
							{
								Function_161(&iLocal_185, 1, 0, 4294967295, 4294967295);
							}
							RESET_ANIM_SET_FOR_ACTOR(bLocal_118, 1);
							TASK_CLEAR(bLocal_118);
							TASK_USE_GRINGO(bLocal_118, GET_GRINGO_FROM_OBJECT(bLocal_21), "UseCase1", 4294967295, 1);
						}
						iLocal_30 = 1;
						Function_122(bLocal_118);
						*uParam0 = 0;
					}
				}
			}
			if (IS_ACTOR_VALID(bLocal_118))
			{
				if (Function_68(bLocal_118, &bLocal_27))
				{
					Function_71(Global_34573, bLocal_118, "eventCrazyHermitPlayer_msg01", "eventCrazyHermitPlayer_msg01", 5, 60, 1, 1);
					if (Function_5((*iParam1)[0], 0))
					{
						if ((IS_ACTOR_VALID((*iParam1)[0]) && Function_77((*iParam1)[0], Global_34573) > 30.0f) && IS_ACTOR_HOGTIED((*iParam1)[0]))
						{
							if (bLocal_184)
							{
								Function_161(&iLocal_185, 1, 0, 4294967295, 4294967295);
							}
							iLocal_28 = 1;
							ADD_COMPANION_PERMANENT();
							*uParam0 = 4;
						}
						else if (Function_5((*iParam1)[0], 0) && !IS_ACTOR_HOGTIED((*iParam1)[0]))
						{
							if (iLocal_29 == 1)
							{
								return 1;
							}
							Function_230(&uLocal_34, 0.0f);
							*uParam0 = 5;
						}
					}
					else
					{
						return 1;
					}
				}
			}
			break;
		
		case 0x00000004:
			Function_70();
			if (IS_ACTOR_VALID((*iParam1)[0]))
			{
				if (IS_ACTOR_HOGTIED((*iParam1)[0]))
				{
					if (!Function_118((*iParam1)[0], &iLocal_180))
					{
						if (iLocal_24 && Function_77((*iParam1)[0], Global_34573) > 35.0f)
						{
							ADD_COMPANION_PERMANENT();
							AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(Global_34573, 428, 0);
							iLocal_28 = 1;
							STOP_PED_SPEAKING((*iParam1)[0], 1);
							STOP_PED_SPEAKING((*iParam1)[0], 0);
							Function_71((*iParam1)[0], Global_34573, "eventCrazyHermit_msg06", "eventCrazyHermit_msg06", 5, 60, 1, 1);
							ADD_BLIP_FOR_ACTOR((*iParam1)[0], 325, 0.0f, 3, 0);
							iLocal_24 = 0;
						}
					}
				}
				iLocal_125 = 0;
				if (Function_118((*iParam1)[0], &iLocal_180))
				{
					if (GET_LAST_ATTACKER((*iParam1)[0]) != Global_34573)
					{
						MEMORY_CLEAR_EVENTS((*iParam1)[0], 0);
						Function_122((*iParam1)[0]);
						Function_230(&uLocal_34, 0.0f);
						*uParam0 = 5;
					}
					else if (GET_LAST_ATTACKER((*iParam1)[0]) == Global_34573)
					{
					}
				}
			}
			else
			{
				return 1;
			}
			break;
		
		case 0x00000005:
			Function_70();
			if (Function_84((*iParam1)[0], Global_34573, bLocal_114, &iLocal_26, &iLocal_194, iParam2))
			{
				if (iLocal_26 == 1)
				{
					if (iLocal_28 == 1)
					{
						AUDIO_ENABLE_PLAYER_TAUNTS();
						iLocal_28 = 0;
					}
					if (Function_5(bLocal_118, 0))
					{
						Function_30(100, 1, 0);
					}
					else
					{
						Function_30(50, 1, 0);
					}
					AI_SPEECH_SET_ALLOW_FOR_ACTOR((*iParam1)[0], 1);
					UNK_0x99AFD2D1((*iParam1)[0], 0, 0);
					MEMORY_CLEAR_ALL((*iParam1)[0]);
					Function_83((*iParam1)[0], 4, 0, 1);
					return 1;
				}
			}
			if (Function_5((*iParam1)[0], 0))
			{
				Function_83((*iParam1)[0], 4, 0, 1);
			}
			return 1;
			break;
	}
	return 0;
}

int Function_83(bool bParam0, int iParam1, int iParam2, int iParam3) //Position: 0x5410 / 21520
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
					Function_11(bVar1, 0, 0, 0, 1);
				}
				bVar0++;
			}
		}
		Function_11(bParam0, iParam1, iParam2, iParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

bool Function_84(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x54F0 / 21744
{
	int iVar0;
	
	iVar0 = 30;
	iLocal_125 = 0;
	if (*uParam4 <= 0 && *uParam4 > 3)
	{
		if (Function_5(bParam0, 0))
		{
			if (Function_77(bParam0, bParam1) < IntToFloat(iVar0))
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				return 0;
			}
		}
	}
	if (*uParam4 <= 0 && *uParam4 >= 3)
	{
		if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
		{
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			return 0;
		}
	}
	switch (*uParam4)
	{
		case 0x00000000:
			MEMORY_CLEAR_EVENTS(bParam0, 0);
			ACTOR_START_FORCE_HOLSTER(bParam0, 1, 0);
			MEMORY_SET_WEAPON_DRAW_PREFERENCE(bParam0, 1);
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bParam0, 1);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
			Function_129(bParam0);
			vLocal_197 = { StackVal, StackVal, Function_129(bParam0) };
			bLocal_195 = CREATE_GRINGO_IN_LAYOUT(bLocal_114, Function_231(), "$/content/scripting/gringo/SimpleGringo/Emo_hug", vLocal_197, 0.0f, 0.0f, 0.0f);
			SNAP_OBJECT_TO_GROUND(bLocal_195, 7.0f, true, 1092616192);
			vLocal_197 = { StackVal, StackVal, Vector(vLocal_197, StackVal, StackVal) + Vector(0.0f, 0.0f, 6.0f) };
			Function_117(StackVal, StackVal, vLocal_197);
			*uParam4 = 3;
			break;
		
		case 0x00000003:
			if (iLocal_196 == 0)
			{
				if (Function_72(&uLocal_34, 3.3f) || DECOR_CHECK_EXIST(Global_34573, "RunNewCamera"))
				{
					RESET_ANIM_SET_FOR_ACTOR(bParam0, 0);
					RESET_ANIM_SET_FOR_ACTOR(Global_34573, 0);
					AI_QUICK_EXIT_GRINGO(bParam0, 1);
					AI_QUICK_EXIT_GRINGO(Global_34573, 1);
					MAKE_ACTOR_READY_FOR_ACTION(bParam0, 1);
					MAKE_ACTOR_READY_FOR_ACTION(Global_34573, 1);
					Function_112(uParam2, &bLocal_182, &bLocal_31);
					Function_110(bLocal_182, &vLocal_143, &vLocal_146);
					if (DECOR_CHECK_EXIST(Global_34573, "RunNewCamera"))
					{
						DECOR_REMOVE(Global_34573, "RunNewCamera");
					}
					iLocal_196 = 1;
				}
			}
			if (IS_ACTOR_ALIVE(bParam0))
			{
				if (!FIRE_IS_ACTOR_ON_FIRE(bParam0))
				{
					if (!IS_ACTOR_HOGTIED(bParam0))
					{
						if (Function_108())
						{
							if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(Global_34573)))
							{
								if (Function_85(&iLocal_193, bParam0, uParam2, uParam5))
								{
									*uParam4 = 4;
								}
							}
						}
					}
				}
			}
			else
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				*uParam4 = 6;
			}
			iLocal_125 = 0;
			break;
		
		case 0x00000004:
			*uParam4 = 5;
			break;
		
		case 0x00000005:
			*uParam4 = 6;
			break;
		
		case 0x00000006:
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			*uParam3 = 1;
			return 1;
			break;
	}
	return 1;
}

bool Function_85(var uParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x5712 / 22290
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	int iVar9;
	
	iVar9 = 1;
	if (IS_ACTOR_VALID(bParam1))
	{
		if (!IS_ACTOR_ALIVE(bParam1))
		{
			if (*uParam0 >= 0)
			{
				Function_101(&bLocal_182, &bLocal_31);
				ACTOR_END_FORCE_HOLSTER(Global_34573);
				return 1;
			}
		}
	}
	switch (*uParam0)
	{
		case 0x00000000:
			ACTOR_START_FORCE_HOLSTER(Global_34573, 1, 0);
			RESET_ANIM_SET_FOR_ACTOR(bParam1, 0);
			RESET_ANIM_SET_FOR_ACTOR(Global_34573, 0);
			Function_129(Global_34573);
			Function_100(StackVal, StackVal, uParam2, Function_129(Global_34573));
			Function_230(&uLocal_37, 0.0f);
			AI_GOAL_LOOK_AT_ACTOR(Global_34573, bParam1, 0, 1065353216, 3212836864, 3212836864, 0);
			Function_99(bLocal_41);
			vVar0 = { StackVal, StackVal, Function_99(bLocal_41) };
			Function_97(&vVar0, 5.0f, &vVar3, &uVar6, &iVar9);
			SET_OBJECT_POSITION(bParam1, vVar3);
			MEMORY_SET_WEAPON_DRAW_PREFERENCE(Global_34573, 1);
			Function_94(bParam1, Global_34573);
			Function_93(bParam1, 0);
			Function_88(20, 1, 0);
			Function_30(50, 1, 0);
			Function_87(uParam3, 1);
			CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam1);
			if (IS_ACTOR_MALE(bParam1))
			{
				SET_LINKED_ANIM_TARGET(Global_34573, bParam1);
				SET_ANIM_SET_FOR_ACTOR(Global_34573, "emo_hug", 0);
				SET_ACTION_NODE_FOR_ACTOR(Global_34573, "emo_hug/emo_hug");
				Function_230(&uLocal_37, 0.0f);
				*uParam0 = 1;
			}
			else
			{
				SET_LINKED_ANIM_TARGET(Global_34573, bParam1);
				SET_ANIM_SET_FOR_ACTOR(Global_34573, "stand_shakehands", 0);
				SET_ACTION_NODE_FOR_ACTOR(Global_34573, "stand_shakehands/hug");
				CLEAR_ALTERNATE_SPEECH_CONTEXT_FOR_PAIN(bParam1);
				CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam1);
				Function_71(bParam1, Global_34573, "nThank_You", 0, 5, 60, 1, 1);
				Function_230(&uLocal_37, 0.0f);
				*uParam0 = 1;
			}
			break;
		
		case 0x00000001:
			Function_86(&bParam1);
			if (Function_72(&uLocal_37, 2.0f))
			{
				Function_110(bLocal_182, &vLocal_149, &vLocal_152);
				Function_230(&uLocal_37, 0.0f);
				SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_ACTOR(bParam1), 0.5f, false, 1092616192);
				*uParam0 = 2;
			}
			break;
		
		case 0x00000002:
			Function_86(&bParam1);
			if (IS_ACTOR_MALE(bParam1))
			{
				if (Function_72(&uLocal_37, 2.0f))
				{
					Function_71(Global_34573, bParam1, "eventCrazyHermitPlayer_msg02", "eventCrazyHermitPlayer_msg02", 5, 60, 1, 1);
					Function_101(&bLocal_182, &bLocal_31);
					ACTOR_END_FORCE_HOLSTER(Global_34573);
					return 1;
				}
			}
			if (Function_72(&uLocal_37, 2.0f))
			{
				RESET_ANIM_SET_FOR_ACTOR(bParam1, 0);
				Function_71(Global_34573, bParam1, "eventCrazyHermitPlayer_msg02", "eventCrazyHermitPlayer_msg02", 5, 60, 1, 1);
				Function_101(&bLocal_182, &bLocal_31);
				ACTOR_END_FORCE_HOLSTER(Global_34573);
				return 1;
			}
			break;
	}
	return 0;
}

void Function_86(bool bParam0) //Position: 0x59CA / 22986
{
	switch (iLocal_186)
	{
		case 0x00000000:
			if (Function_5(*bParam0, 0))
			{
				if (IS_ACTOR_MALE(*bParam0))
				{
					if (!IS_AMBIENT_SPEECH_PLAYING(*bParam0))
					{
						if (Function_77(*bParam0, Global_34573) > 50.0f)
						{
							Function_230(&uLocal_188, 0.0f);
							fLocal_192 = 0.5f;
							iLocal_186 = 1;
						}
					}
				}
			}
			break;
		
		case 0x00000001:
			if (Function_5(*bParam0, 0))
			{
				if (Function_72(&uLocal_188, fLocal_192))
				{
					if (Function_77(*bParam0, Global_34573) > 40.0f)
					{
						Function_71(*bParam0, Global_34573, "Major_Shock", 0, 5, 60, 1, 1);
						iLocal_186 = 0;
					}
				}
			}
			else
			{
				iLocal_186 = 2;
			}
			break;
		
		case 0x00000002:
			break;
	}
	return;
}

int Function_87(bool bParam0, bool bParam1) //Position: 0x5A7D / 23165
{
	bool bVar0;
	
	bVar0 = Function_65(0);
	if ((Function_65(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_54(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_65(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_54(597, bParam0, 0, 0);
	}
	if ((Function_65(597) + Function_65(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

void Function_88(int iParam0, bool bParam1, bool bParam2) //Position: 0x5B48 / 23368
{
	int iVar0;
	bool bVar1;
	
	if (Function_67(0) && (!Global_3380 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_66())
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
	iVar0 = Function_65(3);
	Function_90();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_64(3, bVar1);
		if (!bParam2)
		{
			if (!Function_63(Global_76848, 4))
			{
				Function_57(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_54(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_39(3));
	iVar0 = Function_65(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_32(4, Function_89(Global_12976.f_156), 1);
				Function_31(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_32(4, Function_89(Global_12976.f_156), 1);
				Function_31(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_32(4, Function_89(Global_12976.f_156), 1);
				Function_31(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_32(4, Function_89(Global_12976.f_156), 1);
				Function_31(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_32(4, Function_89(Global_12976.f_156), 1);
				Function_31(Global_12976.f_152, Global_12976.f_156);
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

var Function_89(int iParam0) //Position: 0x5D17 / 23831
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

void Function_90() //Position: 0x5DA6 / 23974
{
	Function_92(3, 0.0f);
	Function_91(3, 10000.0f);
	return;
}

int Function_91(int iParam0, int iParam1) //Position: 0x5DBC / 23996
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_92(int iParam0, int iParam1) //Position: 0x5DFC / 24060
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

void Function_93(bool bParam0, bool bParam1) //Position: 0x5E3C / 24124
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_CONVERSE_ENABLE(bParam0);
	}
	else
	{
		AI_CONVERSE_DISABLE(bParam0);
	}
	return;
}

void Function_94(var uParam0, bool bParam1) //Position: 0x5E5E / 24158
{
	vector3 vVar0;
	
	GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(bParam1), &vVar0);
	Function_95(StackVal, StackVal, uParam0, vVar0);
	return;
}

void Function_95(bool bParam0, vector3 vParam1) //Position: 0x5E78 / 24184
{
	if (!IS_ACTOR_VALID(GET_MOUNT(bParam0)))
	{
		SET_ACTOR_HEADING(StackVal, Function_96(StackVal, bParam0, bParam0, vParam1), 1);
	}
	else
	{
		SET_ACTOR_HEADING(StackVal, Function_96(StackVal, GET_MOUNT(bParam0), bParam0, vParam1), 1);
	}
}

var Function_96(bool bParam0, vector3 vParam1) //Position: 0x5EB0 / 24240
{
	vector3 vVar0;
	
	Function_129(bParam0);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_129(bParam0), vParam1, StackVal) };
	VNORMALIZE(&vVar0);
	PRINTSTRING("GET_ACTOR_HEADING_TO_POSITION: Found unit vector of ");
	PRINTVECTOR(vVar0);
	PRINTSTRING(", got heading of ");
	PRINTFLOAT(UNK_0x9C40E671(&vVar0));
	PRINTNL();
	return UNK_0x9C40E671(&vVar0);
}

int Function_97(var uParam0, float fParam1, var uParam2, var uParam3, var uParam4) //Position: 0x5F33 / 24371
{
	vector3 vVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(*uParam0, 1.0f))
	{
		GET_CAMERA_POSITION(GET_GAME_CAMERA(), &vVar0);
		if (VDIST(*uParam0, vVar0) > 175.0f)
		{
		}
		return 0;
	}
	if (FIND_GROUND_INTERSECTION_WITH_MATERIAL(uParam0, fParam1, uParam2, uParam3, uParam4))
	{
		if (!Function_98(StackVal, StackVal, *uParam2))
		{
			return 1;
		}
	}
	*uParam0 = (*uParam0 + 0.01f);
	uParam0->f_8 = (StackVal + 0.01f);
	if (FIND_GROUND_INTERSECTION_WITH_MATERIAL(uParam0, fParam1, uParam2, uParam3, uParam4))
	{
		if (!Function_98(StackVal, StackVal, *uParam2))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_98(vector3 vParam0) //Position: 0x5FC0 / 24512
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_99(bool bParam0) //Position: 0x5FD8 / 24536
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

void Function_100(bool bParam0, vector3 vParam1) //Position: 0x5FFF / 24575
{
	bLocal_181 = CREATE_VOLUME_IN_LAYOUT(bParam0, Function_231(), 0, vParam1, 0.0f, 0.0f, 0.0f, 30.0f, 35.0f, 30.0f);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_181);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_181);
}

void Function_101(bool bParam0, bool bParam1) //Position: 0x6032 / 24626
{
	SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_ACTOR(Global_34573), 1.0f, false, 1092616192);
	Function_102(1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
	REMOVE_CAMERA_FROM_CHANNEL(*bParam0, 0);
	DESTROY_CAMERA(*bParam0);
	CAMERA_RESET(0);
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	*bParam1 = 0;
	return;
}

void Function_102(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, var uParam9) //Position: 0x6072 / 24690
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
		bVar0 = Function_107();
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
			if (Function_106())
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
			SET_ACTOR_INVULNERABILITY(bVar0, 0);
			if (Global_34108[0])
			{
				Global_34108[0] = 0;
				UI_CHEAT_SET_VALUE(0, 0);
			}
		}
		Function_54(21, 1, 0, 0);
	}
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam7)
	{
		Function_105();
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
	Function_103(uParam9);
}

void Function_103(int iParam0) //Position: 0x6162 / 24930
{
	iParam0 = iParam0;
	HUD_ENABLE(iParam0);
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	PRINT_SMALL_B("Common_Null", 0.1f, 0, 2, 1, 0, 0);
	SET_TIME_ACCELERATION(Global_63398);
	STREAMING_UNLOAD_SCENE();
	AI_STOP_IGNORING_ACTORS();
	if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol")))
	{
		DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol"));
	}
	if (!Global_3380)
	{
		Function_104();
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

void Function_104() //Position: 0x6211 / 25105
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		if (GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(Global_12976.f_36)) != bVar0)
		{
			LOG_ERROR("PLAYERHORSE NOT IN PLAYER HORSE! WHY? FIXING");
			GIVE_OBJECT_TO_LAYOUT(Global_12976.f_36, bVar0);
		}
	}
	return;
}

void Function_105() //Position: 0x6283 / 25219
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

bool Function_106() //Position: 0x6298 / 25240
{
	return NET_IS_MANAGER_INITIALIZED();
}

var Function_107() //Position: 0x62A1 / 25249
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

bool Function_108() //Position: 0x62B6 / 25270
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
		if (Function_109())
		{
			return 0;
		}
	}
	return 0;
	return 1;
}

bool Function_109() //Position: 0x62FE / 25342
{
	if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(Global_34573)))
	{
		return 1;
	}
	return 0;
}

void Function_110(bool bParam0, var uParam1, int iParam2) //Position: 0x6313 / 25363
{
	float fVar0;
	vector3 vVar1;
	
	fVar0 = Function_111(Global_34573);
	GET_OBJECT_RELATIVE_POSITION(GET_OBJECT_FROM_ACTOR(Global_34573), *uParam1, &vVar1);
	SET_CAMERA_POSITION(bParam0, vVar1);
	SET_CAMERA_ORIENTATION(StackVal, StackVal, bParam0, (*iParam2 + fVar0), 0);
	return;
}

var Function_111(bool bParam0) //Position: 0x634E / 25422
{
	return GET_HEADING(bParam0);
}

void Function_112(bool bParam0, var uParam1, bool bParam2) //Position: 0x6359 / 25433
{
	vector3 vVar0;
	bool bVar3;
	
	*bParam2 = 1;
	*uParam1 = CREATE_CAMERA_IN_LAYOUT(bParam0, Function_231(), 0);
	SET_ACTOR_POSTURE(Global_34573, 0);
	Function_129(Global_34573);
	vVar0 = { StackVal, StackVal, Function_129(Global_34573) };
	CLEAR_AMBIENT_OBJECTS_SPHERE(vVar0, 10.0f, 39);
	Function_152();
	bVar3 = CREATE_VOLUME_IN_LAYOUT(bParam0, Function_231(), 2, vVar0, Function_152(), 10.0f, 10.0f, 10.0f);
	DELETE_PROJECTILES_IN_VOLUME(bVar3);
	DESTROY_VOLUME(bVar3);
	Function_113(1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
	SET_CURRENT_CAMERA_ON_CHANNEL(*uParam1, 0, 0f, 0f, 0, 0, 0, 0, 0, 0);
	INIT_CAMERA_FROM_GAME_CAMERA(*uParam1);
	return;
}

void Function_113(bool bParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, var uParam10, bool bParam11) //Position: 0x63DD / 25565
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
	HUD_ENABLE(0);
	Function_105();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(Global_34573, "iDrunk", false);
	if (bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_107();
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
			if (Function_106())
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
						TASK_OVERRIDE_SET_POSTURE(bVar1, 0);
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
					TASK_OVERRIDE_SET_POSTURE(bVar1, 0);
				}
			}
			SET_ACTOR_HEALTH(bVar1, GET_ACTOR_MAX_HEALTH(bVar1));
			SET_ACTOR_INVULNERABILITY(bVar1, 1);
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
				Function_129(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_231(), 2, Function_129(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
				DELETE_PROJECTILES_IN_VOLUME(bVar0);
			}
		}
		Function_54(19, 1, 0, 0);
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
	if (uParam10 && !Function_25())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_116()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_116()));
		DECOR_SET_BOOL(Global_34573, "nquitBinos", true);
		UNK_0xE6C1DBD9(0);
		SET_DRAW_ACTOR(Global_34573, 1);
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
	if (Function_115(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_114(0x4000000);
	}
	if (Function_115(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_114(0x8000000);
	}
}

void Function_114(int iParam0) //Position: 0x668B / 26251
{
	int iVar0;
	
	if (Function_26(iParam0, 1) && Function_26(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

bool Function_115(int iParam0) //Position: 0x66BF / 26303
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_116() //Position: 0x66DB / 26331
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

void Function_117(vector3 vParam0) //Position: 0x675A / 26458
{
	bool bVar0;
	vector3 vVar1;
	
	bVar0 = GET_MOST_RECENT_MOUNT(Global_34573);
	Function_129(Global_34573);
	vVar1 = { StackVal, StackVal, Function_129(Global_34573) };
	if (Function_127(StackVal, StackVal, Global_34573, vParam0) > 10.0f)
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

bool Function_118(bool bParam0, int iParam1) //Position: 0x67B3 / 26547
{
	bool bVar0;
	bool bVar1;
	
	if (*iParam1 == 0)
	{
		bVar1 = DECOR_GET_OBJECT(bParam0, "HogtiedGringoAttached");
		if (IS_OBJECT_VALID(bVar1))
		{
			if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(Global_34573)))
			{
				if (GET_CURRENT_GRINGO(Global_34573) == GET_GRINGO_FROM_OBJECT(bVar1))
				{
					bVar0 = GET_ACTOR_FROM_OBJECT(Function_119(GET_GRINGO_FROM_OBJECT(bVar1), "Cut_Free"));
					if (IS_ACTOR_VALID(bVar0))
					{
						if (IS_ACTOR_LOCAL_PLAYER(bVar0))
						{
							*iParam1 = 1;
						}
					}
				}
			}
		}
	}
	if (*iParam1 == 1)
	{
		return 1;
	}
	return 0;
}

var Function_119(bool bParam0, bool bParam1) //Position: 0x6837 / 26679
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(bParam0, bParam1);
}

int Function_120(bool bParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x6844 / 26692
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

bool Function_121(bool bParam0, bool bParam1, float fParam2) //Position: 0x6897 / 26775
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	var uVar9;
	
	if (IS_ACTOR_VALID(bParam0) && IS_ACTOR_VALID(bParam1))
	{
		GET_POSITION(bParam0, &vVar0);
		GET_POSITION(bParam1, &vVar3);
		vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar0, vVar3, StackVal) };
		VNORMALIZE(&vVar6);
		GET_ACTOR_AXIS(bParam0, &uVar9, 2);
		if (VDOT(&uVar9, &vVar6) >= fParam2)
		{
			return 1;
		}
		return 0;
	}
	LOG_ERROR("IS_ACTOR_FACING_ACTOR got an invalid Actor(s)! Returning FALSE!");
	return 0;
}

int Function_122(bool bParam0) //Position: 0x6931 / 26929
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_123(bParam0);
		return 1;
	}
	return 0;
}

void Function_123(bool bParam0) //Position: 0x6947 / 26951
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

void Function_124(bool bParam0) //Position: 0x6973 / 26995
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

float Function_125(bool bParam0) //Position: 0x69BF / 27071
{
	var uVar0;
	float fVar1;
	
	if (!bParam0)
	{
		Function_126(&uVar0, &fVar1);
		if (fVar1 < 60.0f)
		{
			return (fVar1 + 20.0f);
		}
		return (fVar1 + 10.0f);
	}
	return (190.0f + 20.0f);
}

void Function_126(float fParam0, int iParam1) //Position: 0x69FA / 27130
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

float Function_127(bool bParam0, vector3 vParam1) //Position: 0x6A83 / 27267
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_128(bParam0);
		vVar0 = { StackVal, StackVal, Function_128(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

vector3 Function_128(bool bParam0) //Position: 0x6AFD / 27389
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

vector3 Function_129(bool bParam0) //Position: 0x6B67 / 27495
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

bool Function_130(bool bParam0, var uParam1, float fParam2, int iParam3, bool bParam4, float fParam5) //Position: 0x6B78 / 27512
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
		fVar0 = Function_77(bParam0, Global_34573);
		if (!Function_26(iParam3, 8))
		{
			if (GET_LAST_ATTACKER(bParam0) == Global_34573)
			{
				*uParam1 = 8;
				Function_131(bParam0);
				return 1;
			}
		}
		if (!Function_26(iParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(bParam0, 1.0f))
			{
				*uParam1 = 2;
				Function_131(bParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(bParam0, 1.0f, 1.0f))
			{
				*uParam1 = 2;
				Function_131(bParam0);
				return 1;
			}
		}
		if (!Function_26(iParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(bParam0) || (((GET_ACTOR_UNDER_RETICLE(Global_34573, 0) != bParam0 && IS_PLAYER_WEAPON_ZOOMED(Global_34573)) && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(Global_34573) != bParam0 && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f))
			{
				if (*fParam2 > 0.0f)
				{
					*uParam1 = 4;
					Function_131(bParam0);
					return 1;
				}
				if (*fParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - *fParam2) < 1.3f)
					{
						*uParam1 = 4;
						Function_131(bParam0);
						return 1;
					}
				}
				*fParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_26(iParam3, 1))
		{
			if (Global_3403 || Global_3404)
			{
				*uParam1 = 1;
				Function_131(bParam0);
				return 1;
			}
		}
		if (!Function_26(iParam3, 16))
		{
			if (UNK_0x7F454A92(bParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(bParam0)) > 2.0f && fVar0 > 18.0f)
				{
					*uParam1 = 16;
					Function_131(bParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_131(bool bParam0) //Position: 0x6D0F / 27919
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(bParam0, 1);
	UNK_0x99AFD2D1(bParam0, 0, 0);
	Function_132(bParam0);
	MEMORY_CONSIDER_AS(Global_34573, bParam0, 2);
	MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
	AI_GOAL_LOOK_CLEAR(bParam0);
	return;
}

void Function_132(bool bParam0) //Position: 0x6D43 / 27971
{
	SAY_SINGLE_LINE_CONTEXT(bParam0, 60, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

bool Function_133(int iParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x6D5A / 27994
{
	if (StackVal & 64 == 64)
	{
		if (!*uParam2)
		{
			if (IS_ACTOR_VALID(bParam1))
			{
				if (Function_77(Global_34573, bParam1) > 15.0f)
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
		if (Function_136() && !*uParam2)
		{
			return 0;
		}
		if (Function_135(iParam0) && !*uParam2)
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
		if (!Function_134(iParam0, uParam5))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_134(int iParam0, int iParam1) //Position: 0x6E88 / 28296
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

int Function_135(int iParam0) //Position: 0x6EA9 / 28329
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

int Function_136() //Position: 0x6EE7 / 28391
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
						if (Function_137(StackVal, Global_34573) > IntToFloat(iVar1))
						{
							return 1;
						}
					}
				}
			}
			if (Function_137(StackVal, Global_34573) > IntToFloat(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

float Function_137(bool bParam0, bool bParam1) //Position: 0x6FA2 / 28578
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_128(bParam0);
			vVar0 = { StackVal, StackVal, Function_128(bParam0) };
			Function_138(bParam1);
			vVar3 = { StackVal, StackVal, Function_138(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

vector3 Function_138(bool bParam0) //Position: 0x7042 / 28738
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

void Function_139(vector3 vParam0, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, bool bParam8) //Position: 0x70AE / 28846
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
	else if (!Function_98(StackVal, StackVal, vParam0))
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
		Function_54(408, 1, 0, 0);
	}
}

void Function_140(bool bParam0) //Position: 0x71B5 / 29109
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

void Function_141(int iParam0) //Position: 0x71D9 / 29145
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_142(int iParam0) //Position: 0x71F6 / 29174
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

bool Function_143(var uParam0, int iParam1) //Position: 0x7209 / 29193
{
	return (uParam0 && iParam1) == 0;
}

void Function_144(int iParam0) //Position: 0x7216 / 29206
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (!Function_26(StackVal, 524288))
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

int Function_145(int iParam0) //Position: 0x72BA / 29370
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_146(int iParam0) //Position: 0x72D0 / 29392
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

void Function_147(var uParam0, var uParam1, int iParam2) //Position: 0x736E / 29550
{
	uParam0->f_4 = iParam2;
	*uParam0 = uParam1->f_12;
	uParam0->f_8 = 1;
	return;
}

void Function_148(int iParam0, int iParam1) //Position: 0x7386 / 29574
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
			Function_149(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_149(int iParam0) //Position: 0x7408 / 29704
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

void Function_150(int iParam0) //Position: 0x7456 / 29782
{
	Global_12976.f_76 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 76, 0, 0, (iParam0 + Function_145(900)), 0);
	return;
}

void Function_151(var uParam0) //Position: 0x7478 / 29816
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, (uParam0 + Function_145(200)), 0);
	return;
}

vector3 Function_152() //Position: 0x7499 / 29849
{
	return 0.0f, 0.0f, 0.0f;
}

int Function_153(int iParam0) //Position: 0x74A2 / 29858
{
	switch (iLocal_211)
	{
		case 0x00000000:
			if (iLocal_43 == 0)
			{
				GET_OBJECT_POSITION(bLocal_22, &vLocal_173);
				CREATE_DECAL(StackVal, Vector(vLocal_173, 0, StackVal) + Vector(0.3f, 0.3f, -1.5f), 0.6f, 1, 1);
				CREATE_DECAL(StackVal, Vector(vLocal_173, 0, StackVal) + Vector(-1.0f, 0.3f, 1.5f), 0.6f, 1, 1);
				CREATE_DECAL(StackVal, Vector(vLocal_173, 0, StackVal) + Vector(1.2f, 0.3f, 0.5f), 0.6f, 1, 1);
				*iParam0 = 0;
				iLocal_211 = 1;
			}
			else
			{
				iLocal_211 = 3;
			}
			break;
		
		case 0x00000001:
			iLocal_211 = 2;
			break;
		
		case 0x00000002:
			iLocal_211 = 3;
			break;
		
		case 0x00000003:
			return 1;
			break;
	}
	return 0;
}

void Function_154(var uParam0, int iParam1) //Position: 0x7550 / 30032
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_155(bool bParam0, vector3 vParam1, int iParam4, bool bParam5, bool bParam6) //Position: 0x755F / 30047
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
	DECOR_SET_INT(GET_OBJECT_FROM_GRINGO(bParam0), "GringoDollarAmt", Function_228(iParam4, 1, 1, 0, 0));
	Function_164(GET_OBJECT_FROM_GRINGO(bParam0));
	if (bParam5 == 4294967295)
	{
		bVar9 = false;
		Function_158(Global_34573, &uVar2, &bVar9);
		if (bVar9 >= 0)
		{
			PRINTINT(bVar9);
			iVar10 = RAND_INT_RANGE(0, (bVar9 - 1));
			PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(uVar2[iVar10]));
			bParam5 = Function_157(Global_34573, uVar2[iVar10]);
		}
		else
		{
			LOG_ERROR("Player has no valid weapon categories");
		}
	}
	else
	{
		bParam5 = Function_157(Global_34573, bParam5);
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
		bParam6 = Function_156();
	}
	DECOR_SET_INT(GET_OBJECT_FROM_GRINGO(bParam0), "GiveItem", bParam6);
}

int Function_156() //Position: 0x76D0 / 30416
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

int Function_157(bool bParam0, int iParam1) //Position: 0x772B / 30507
{
	int iVar0;
	
	iVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(bParam0, iParam1);
	return iVar0;
}

void Function_158(bool bParam0, var uParam1, int iParam2) //Position: 0x773C / 30524
{
	*iParam2 = 0;
	if (Function_157(bParam0, 39) != 4294967295)
	{
		(*uParam1)[*iParam2] = 39;
		*iParam2++;
	}
	if (Function_157(bParam0, 41) != 4294967295)
	{
		(*uParam1)[*iParam2] = 41;
		*iParam2++;
	}
	if (Function_157(bParam0, 40) != 4294967295)
	{
		(*uParam1)[*iParam2] = 40;
		*iParam2++;
	}
	if (Function_157(bParam0, 42) != 4294967295)
	{
		(*uParam1)[*iParam2] = 42;
		*iParam2++;
	}
	if (Function_157(bParam0, 43) != 4294967295)
	{
		(*uParam1)[*iParam2] = 43;
		*iParam2++;
	}
	if (Function_157(bParam0, 48) != 4294967295)
	{
		(*uParam1)[*iParam2] = 48;
		*iParam2++;
	}
	if (Function_157(bParam0, 44) != 4294967295)
	{
		(*uParam1)[*iParam2] = 44;
		*iParam2++;
	}
	return;
}

void Function_159(var uParam0, var uParam1, var uParam2, float fParam3, vector3 vParam4) //Position: 0x780A / 30730
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
		if (Function_160(StackVal, StackVal, Global_30616, "player_herb", &uVar0, 20.0f, 5, vParam4) >= 0)
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

int Function_160(bool bParam0, bool bParam1, var uParam2, float fParam3, int iParam4, vector3 vParam5) //Position: 0x78AB / 30891
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

void Function_161(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x793F / 31039
{
	if (*iParam0 != iParam1)
	{
		*iParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_162(*iParam0), iParam2, iParam3, iParam4);
	}
}

var Function_162(int iParam0) //Position: 0x7963 / 31075
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

void Function_163(bool bParam0) //Position: 0x7EB6 / 32438
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

void Function_164(bool bParam0) //Position: 0x7EDC / 32476
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

var Function_165(var uParam0, bool bParam1, char* cParam2, vector3 vParam3, vector3 vParam6, int iParam9) //Position: 0x7F10 / 32528
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
				if (Function_106())
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

void Function_166(bool bParam0, bool bParam1) //Position: 0x8070 / 32880
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_INT(bParam0, "honor", bParam1);
	return;
}

vector3 Function_167(vector3 vParam0) //Position: 0x8090 / 32912
{
	vector3 vVar0;
	
	vVar0.x = (-1.0f * (ATAN2_DEGREE(vParam0.y, vParam0.z) - 90.0f));
	vVar0.f_4 = 0.0f;
	vVar0.f_8 = (ATAN2_DEGREE(vParam0.y, vParam0.x) - 90.0f);
	return StackVal, StackVal, vVar0;
}

float Function_168() //Position: 0x80C7 / 32967
{
	float fVar0;
	int iVar1;
	
	if (Global_3371)
	{
		return 0.0f;
	}
	Function_126(&fVar0, &iVar1);
	if (fVar0 >= 50.0f)
	{
		return (fVar0 - 10.0f);
	}
	return (fVar0 - 20.0f);
}

bool Function_169(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x80F8 / 33016
{
	struct<8> Var0;
	bool bVar8;
	bool bVar9;
	
	if (Global_3371 && iParam0->f_32)
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_207(GET_SCRIPT_NAME()) };
		bVar8 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Global_26150, &Var0, 4.203895E-45f, Function_205(*(iParam0 + 8), 0.0f, Global_34573, *(iParam0 + 8)), 0.0f, iParam0->f_52, 20.0f, iParam0->f_52);
		DECOR_SET_INT(bVar8, "script", GET_THIS_SCRIPT_ID());
		if (iParam0->f_56 != 4294967295)
		{
			DECOR_SET_INT(StackVal, bVar8, "category");
			Function_203(&bVar8, iParam0->f_32);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
		*(iParam0 + 8) = { StackVal, StackVal, Global_34574 };
		return 1;
	}
	*uParam3 = 0;
	if (!Function_170(iParam0))
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
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_207("restrictVol") };
		bVar9 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Global_26150, &Var0, 4.203895E-45f, Function_205(*(iParam0 + 8), 0.0f, Global_34573, *(iParam0 + 8)), 0.0f, iParam0->f_52, 20.0f, iParam0->f_52);
		DECOR_SET_INT(bVar9, "script", GET_THIS_SCRIPT_ID());
		if (iParam0->f_56 != 4294967295)
		{
			DECOR_SET_INT(StackVal, bVar9, "category");
			Function_203(&bVar9, iParam0->f_32);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
	}
	return 1;
}

bool Function_170(int iParam0) //Position: 0x848A / 33930
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
			Function_202(iParam0 + 4);
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
				vVar3 = { 0.0f, 0.0f, Function_125(1) };
				ROTATE_VECTOR_XZ(&vVar3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar3, StackVal) };
				ITERATE_IN_SPHERE(StackVal, vVar3, Function_125(1));
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
						bVar0 = Function_201(StackVal, StackVal, StackVal, vVar9, 0.01f);
					}
					else
					{
						bVar0 = Function_200(StackVal, StackVal, StackVal, vVar9, 0.1f, "locflag", (iParam0 + 64 + 24)->f_16);
					}
				}
				else if ((iParam0 + 64 + 24)->f_16 == 0)
				{
					bVar0 = Function_199(StackVal, StackVal, StackVal, vVar9, Function_168());
				}
				else
				{
					bVar0 = Function_198(StackVal, StackVal, StackVal, vVar9, Function_168(), "locflag", (iParam0 + 64 + 24)->f_16);
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
			Function_202(iParam0 + 4);
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
					if (Function_197(bVar14))
					{
						if (StackVal == (iParam0 + 64)->f_48)
						{
							if ((StackVal && Global_29008[bVar14]) >= 0)
							{
								GET_OBJECT_POSITION(bVar1, &vVar3);
								if (VDIST(vVar9, vVar3) < fVar13 && VDIST(vVar9, vVar3) > Function_125(1))
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
				Function_196(iParam0 + 8, 99.0f, iParam0 + 8, 10);
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
				Function_195(&vVar9, &vVar6);
				vVar3 = { StackVal, StackVal, Function_195(&vVar9, &vVar6) };
				if (!Function_98(StackVal, StackVal, vVar3))
				{
					PRINTSTRING("Player Pos: ");
					PRINTVECTOR(vVar9);
					PRINTNL();
					Function_126(&fVar13, &fVar12);
					if (VDIST(vVar3, vVar9) < ((fVar13 + ((fVar12 - fVar13) / 2.0f)) * 0.8f))
					{
						iVar2 = Function_192(StackVal, StackVal, iParam0, vVar3);
					}
				}
			}
			else
			{
				iVar2 = Function_188(iParam0);
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
					if (!Function_187(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (iParam0->f_60 == 1)
				{
					if (!Function_186(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (Function_26(StackVal, 131072))
				{
					if (StackVal || Function_185(StackVal, Function_185(StackVal, StackVal, *(iParam0 + 8)), Global_34574))
					{
						return 0;
					}
				}
				if (StackVal & 1024 == 1024)
				{
					if (Function_184(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (!Function_180(iParam0 + 8, iParam0 + 52, 0, iParam0->f_32))
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
				uVar23 = START_CURVE_QUERY(Global_28841, vVar3, Function_179((iParam0 + 64)->f_120, 0), 0.0f, 20.0f, 5.0f, 0);
			}
			else
			{
				uVar23 = START_CURVE_QUERY(Global_28841, vVar9, Function_179((iParam0 + 64)->f_120, 0), 120.0f, 150.0f, 5.0f, 0);
			}
			if (GET_NUM_POINTS_IN_CURVE_QUERY(uVar23) >= 0)
			{
				iVar21 = RAND_INT_RANGE(0, (GET_NUM_POINTS_IN_CURVE_QUERY(uVar23) - 1));
				GET_POINT_FROM_CURVE_QUERY(uVar23, iVar21, &Var15);
				Function_178(&Var15);
				*(iParam0 + 8) = { StackVal, StackVal, Function_178(&Var15) };
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
				if (!Function_187(StackVal, StackVal, *(iParam0 + 8)))
				{
					return 0;
				}
			}
			if (iParam0->f_60 == 1)
			{
				if (!Function_186(StackVal, StackVal, *(iParam0 + 8)))
				{
					return 0;
				}
			}
			if (iParam0->f_60 == 0)
			{
				if (!(StackVal || Function_187(StackVal, Function_186(StackVal, StackVal, *(iParam0 + 8)), *(iParam0 + 8))))
				{
					return 0;
				}
			}
			if (Function_26(StackVal, 131072))
			{
				if (StackVal || Function_185(StackVal, Function_185(StackVal, StackVal, *(iParam0 + 8)), Global_34574))
				{
					return 0;
				}
			}
			if (StackVal && !Function_180(iParam0 + 8, iParam0 + 52, 0, iParam0->f_32) == 262144)
			{
				return 0;
			}
			break;
		
		case 0x00000004:
			if (!Function_175((iParam0 + 64)->f_120) < 0)
			{
				return 0;
			}
			break;
		
		case 0x00000007:
			switch ((iParam0 + 64)->f_128)
			{
				case 0x00000001:
					bVar24 = Function_172(StackVal, Global_29004, Global_29005, Global_29006, 1);
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
						bVar24 = Function_172(StackVal, Global_29004, Global_29005, (Global_29006 + iVar22), 1);
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
	if (Function_171(StackVal, StackVal, *(iParam0 + 8)))
	{
		return 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(*(iParam0 + 8), 10.0f))
	{
		return 0;
	}
	return 1;
}

bool Function_171(vector3 vParam0) //Position: 0x8CB4 / 36020
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

bool Function_172(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x8CE9 / 36073
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
								return Function_173(&Global_6298, &Global_7189, bParam3);
								break;
							
							case 0x00000001:
								return Function_173(&Global_6364, &Global_7287, bParam3);
								break;
							
							case 0x00000002:
								return Function_173(&Global_6351, &Global_7268, bParam3);
								break;
							
							default:
								return Function_173(&Global_6391, &Global_7327, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_173(&Global_6501, &Global_7490, bParam3);
								break;
							
							case 0x00000001:
								return Function_173(&Global_6402, &Global_7343, bParam3);
								break;
							
							case 0x00000003:
								return Function_173(&Global_6433, &Global_7389, bParam3);
								break;
							
							case 0x00000002:
								return Function_173(&Global_6490, &Global_7474, bParam3);
								break;
							
							case 0x00000004:
								return Function_173(&Global_6537, &Global_7543, bParam3);
								break;
							
							default:
								return Function_173(&Global_6532, &Global_7536, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_173(&Global_6563, &Global_7581, bParam3);
								break;
							
							case 0x00000001:
								return Function_173(&Global_6614, &Global_7657, bParam3);
								break;
							
							case 0x00000002:
								return Function_173(&Global_6643, &Global_7700, bParam3);
								break;
							
							default:
								return Function_173(&Global_6550, &Global_7562, bParam3);
								break;
						}
						break;
					
					case 0x00000003:
						switch (bVar1)
						{
							case 0x00000001:
								return Function_173(&Global_6667, &Global_7735, bParam3);
								break;
							
							default:
								return Function_173(&Global_6704, &Global_7790, bParam3);
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
								return Function_173(&Global_6709, &Global_7797, bParam3);
								break;
							
							case 0x00000001:
								return Function_173(&Global_6764, &Global_7879, bParam3);
								break;
							
							case 0x00000002:
								return Function_173(&Global_6785, &Global_7910, bParam3);
								break;
							
							default:
								return Function_173(&Global_6810, &Global_7947, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_173(&Global_6815, &Global_7954, bParam3);
								break;
							
							default:
								return Function_173(&Global_6928, &Global_8122, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000002:
								return Function_173(&Global_6933, &Global_8129, bParam3);
								break;
							
							case 0x00000001:
								return Function_173(&Global_6962, &Global_8172, bParam3);
								break;
							
							case 0x00000003:
								return Function_173(&Global_6987, &Global_8209, bParam3);
								break;
							
							default:
								return Function_173(&Global_7027, &Global_8268, bParam3);
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
		return Function_173(&Global_6298, &Global_7189, bParam3);
	}
	if (bVar1 == Global_30640[1])
	{
		return Function_173(&Global_6364, &Global_7287, bParam3);
	}
	if (bVar1 == Global_30640[2])
	{
		return Function_173(&Global_6351, &Global_7268, bParam3);
	}
	if (bVar1 == Global_30658[0])
	{
		return Function_173(&Global_6501, &Global_7490, bParam3);
	}
	if (bVar1 == Global_30658[1])
	{
		return Function_173(&Global_6402, &Global_7343, bParam3);
	}
	if (bVar1 == Global_30658[3])
	{
		return Function_173(&Global_6433, &Global_7389, bParam3);
	}
	if (bVar1 == Global_30658[2])
	{
		return Function_173(&Global_6490, &Global_7474, bParam3);
	}
	if (bVar1 == Global_30658[4])
	{
		return Function_173(&Global_6537, &Global_7543, bParam3);
	}
	if (bVar1 == Global_30668[0])
	{
		return Function_173(&Global_6563, &Global_7581, bParam3);
	}
	if (bVar1 == Global_30668[1])
	{
		return Function_173(&Global_6614, &Global_7657, bParam3);
	}
	if (bVar1 == Global_30668[2])
	{
		return Function_173(&Global_6643, &Global_7700, bParam3);
	}
	if (bVar1 == Global_30679[1])
	{
		return Function_173(&Global_6667, &Global_7735, bParam3);
	}
	if (bVar1 == Global_30685[0])
	{
		return Function_173(&Global_6709, &Global_7797, bParam3);
	}
	if (bVar1 == Global_30685[1])
	{
		return Function_173(&Global_6764, &Global_7879, bParam3);
	}
	if (bVar1 == Global_30685[2])
	{
		return Function_173(&Global_6785, &Global_7910, bParam3);
	}
	if (bVar1 == Global_30693[0])
	{
		return Function_173(&Global_6815, &Global_7954, bParam3);
	}
	if (bVar1 == Global_30707[2])
	{
		return Function_173(&Global_6933, &Global_8129, bParam3);
	}
	if (bVar1 == Global_30707[1])
	{
		return Function_173(&Global_6962, &Global_8172, bParam3);
	}
	if (bVar1 == Global_30707[3])
	{
		return Function_173(&Global_6987, &Global_8209, bParam3);
	}
	if (bVar1 == Global_30628[0])
	{
		return Function_173(&Global_6391, &Global_7327, bParam3);
	}
	if (bVar1 == Global_30628[1])
	{
		return Function_173(&Global_6532, &Global_7536, bParam3);
	}
	if (bVar1 == Global_30628[2])
	{
		return Function_173(&Global_6550, &Global_7562, bParam3);
	}
	if (bVar1 == Global_30628[3])
	{
		return Function_173(&Global_6704, &Global_7790, bParam3);
	}
	if (bVar1 == Global_30633[0])
	{
		return Function_173(&Global_6810, &Global_7947, bParam3);
	}
	if (bVar1 == Global_30633[2])
	{
		return Function_173(&Global_6928, &Global_8122, bParam3);
	}
	if (bVar1 == Global_30633[1])
	{
		return Function_173(&Global_7027, &Global_8268, bParam3);
	}
	return "";
}

var Function_173(var uParam0, var uParam1, bool bParam2) //Position: 0x92FE / 37630
{
	int iVar0;
	
	iVar0 = bParam2;
	if (iVar0 <= *uParam0 || iVar0 > 0)
	{
		return "";
	}
	if (!Function_174(uParam0[iVar02], 2))
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

bool Function_174(var uParam0, int iParam1) //Position: 0x9350 / 37712
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_175(int iParam0) //Position: 0x936C / 37740
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
			if (Function_176(GET_SQUAD_FROM_OBJECT(bVar2)) == iParam0)
			{
				iVar0++;
			}
			bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
		}
	}
	DESTROY_ITERATOR(bVar1);
	return iVar0;
}

int Function_176(bool bParam0) //Position: 0x93C7 / 37831
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 4294967295;
	}
	bVar0 = Function_177(bParam0);
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

var Function_177(bool bParam0) //Position: 0x93FF / 37887
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

vector3 Function_178(int iParam0) //Position: 0x9445 / 37957
{
	vector3 vVar0;
	
	vVar0.x = *iParam0;
	vVar0.f_4 = StackVal;
	vVar0.f_8 = StackVal;
	return StackVal, StackVal, vVar0;
}

int Function_179(int iParam0, int iParam1) //Position: 0x9464 / 37988
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

bool Function_180(var uParam0, float fParam1, int iParam2, bool bParam3) //Position: 0x9494 / 38036
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
	Function_182(4294967295);
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
			else if (Function_181(uParam0, &uVar0) > fVar5)
			{
				return 0;
			}
		}
		iVar3++;
	}
	return 1;
}

float Function_181(var uParam0, int iParam1) //Position: 0x9564 / 38244
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*iParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

int Function_182(bool bParam0) //Position: 0x9582 / 38274
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
						Function_183(iVar0);
					}
					else if (Global_3386)
					{
						if (Function_127(StackVal, StackVal, Global_34573, vVar1) < 25.0f)
						{
							Function_183(iVar0);
						}
					}
					else if (Function_127(StackVal, StackVal, Global_34573, vVar1) < 55.0f)
					{
						Function_183(iVar0);
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
			Function_183(iVar0);
		}
		iVar0++;
	}
	return 0;
}

void Function_183(int iParam0) //Position: 0x96E3 / 38627
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

bool Function_184(vector3 vParam0) //Position: 0x9744 / 38724
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

int Function_185(vector3 vParam0) //Position: 0x97E5 / 38885
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

bool Function_186(vector3 vParam0) //Position: 0x9831 / 38961
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

bool Function_187(vector3 vParam0) //Position: 0x988A / 39050
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

int Function_188(int iParam0) //Position: 0x9907 / 39175
{
	float fVar0;
	bool bVar1;
	
	Function_126(&fVar0, &bVar1);
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER_PLAYER();
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	Function_191(0);
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
		Function_190(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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
	Function_189(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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

void Function_189(struct<33> Param0) //Position: 0x9AA2 / 39586
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

void Function_190(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14) //Position: 0x9BCE / 39886
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

void Function_191(bool bParam0) //Position: 0x9C1F / 39967
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

int Function_192(int iParam0, vector3 vParam1) //Position: 0x9C63 / 40035
{
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER(vParam1);
	if (Global_30842[34])
	{
		PRINTVECTOR(vParam1);
		PRINTNL();
	}
	Function_194();
	Function_191(0);
	Function_193(0);
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
		Function_190(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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
	Function_189(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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

void Function_193(bool bParam0) //Position: 0x9E05 / 40453
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

void Function_194() //Position: 0x9EB8 / 40632
{
	AMBIENT_SET_DISTANCE_FILTER(0.0f, 24.0f);
	return;
}

vector3 Function_195(var uParam0, int iParam1) //Position: 0x9EC7 / 40647
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
		Function_178(&iVar25);
		vVar19 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*uParam0, Function_178(&iVar25), StackVal) };
		Function_178(&iVar31);
		vVar22 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*uParam0, Function_178(&iVar31), StackVal) };
		fVar15 = VDOT(&vVar16, &vVar19);
		fVar14 = VDOT(&vVar16, &vVar22);
		Function_126(&fVar7, &fVar8);
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
			Function_178(&iVar31);
			vVar11 = { StackVal, StackVal, Function_178(&iVar31) };
		}
		else
		{
			UNK_0x19D652F9(bVar6, fVar9, &uVar0, &iVar25);
			Function_178(&iVar25);
			vVar11 = { StackVal, StackVal, Function_178(&iVar25) };
		}
	}
	UNK_0xDF93BD7C(uVar10);
	return StackVal, StackVal, vVar11;
}

int Function_196(var uParam0, float fParam1, int iParam2, int iParam3) //Position: 0x9FD4 / 40916
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
		if (!Function_98(StackVal, StackVal, *iParam2))
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
			if (!Function_98(StackVal, StackVal, *iParam2))
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

bool Function_197(int iParam0) //Position: 0xA106 / 41222
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_198(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, var uParam6) //Position: 0xA11C / 41244
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
						if (Function_180(&vVar5, &fVar4, 0, 0))
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

var Function_199(bool bParam0, vector3 vParam1, float fParam4) //Position: 0xA1C4 / 41412
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
				if (Function_180(&vVar5, &uVar4, 0, 0))
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

var Function_200(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, var uParam6) //Position: 0xA24D / 41549
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

var Function_201(bool bParam0, vector3 vParam1, float fParam4) //Position: 0xA2E2 / 41698
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

int Function_202(int iParam0) //Position: 0xA35F / 41823
{
	if (IS_ITERATOR_VALID(*iParam0))
	{
		ITERATE_EVERYWHERE(*iParam0);
		ITERATE_ON_PARTIAL_NAME(*iParam0, Function_231());
		ITERATE_ON_PARTIAL_MODEL_NAME(*iParam0, Function_231());
		ITERATE_ON_OBJECT_TYPE(*iParam0, 4294967295);
		return 1;
	}
	return 0;
}

int Function_203(bool bParam0, int iParam1) //Position: 0xA390 / 41872
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
	Function_182(DECOR_GET_INT(*bParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
		}
		else
		{
			Function_204(iVar0, bParam0, &uVar1, iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(*bParam0);
	return 0;
}

void Function_204(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0xA4F1 / 42225
{
	struct<8> Var0;
	
	Global_26155[iParam05].f_8 = *uParam1;
	Global_26155[iParam05].f_16 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_207("stayout") };
	Global_26155[iParam05].f_12 = CREATE_VOLUME_IN_LAYOUT(Global_26150, &Var0, 3, *iParam2, 0.0f, 0.0f, 0.0f, 12.0f, 5.0f, 12.0f);
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	if (bParam3)
	{
		Global_26155[iParam05].f_4 = ADD_BLIP_FOR_COORD(iParam2, 403, 0f, 2, 0);
		SET_BLIP_BLINK(StackVal, 1, 1, 20.0f);
	}
}

var Function_205(bool bParam0, vector3 vParam1) //Position: 0xA58C / 42380
{
	vector3 vVar0;
	var uVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		GET_POSITION(bParam0, &vVar0);
		Function_206(StackVal, StackVal, StackVal, StackVal, vVar0, vParam1, &uVar3);
		return UNK_0x9C40E671(&uVar3);
	}
	return 0.0f;
}

void Function_206(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0xA5BC / 42428
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

struct<32> Function_207(bool bParam0) //Position: 0xA5DF / 42463
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_208("0", &cVar8, ""), 4);
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

struct<32> Function_208(char* cParam0, char* cParam1, char* cParam2) //Position: 0xA649 / 42569
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_209(int iParam0) //Position: 0xA668 / 42600
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_213();
	iVar1 = 0;
	if (!Function_4(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_212(iParam0[iVar03], 8);
		}
		else if (Function_211())
		{
			iVar1 = 1;
			Function_212(iParam0[iVar03], 8);
		}
		Function_212(iParam0[iVar03], 16);
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
				Function_212(iParam0[iVar03], 1);
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
							Function_212(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_212(iParam0[iVar03], 2);
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
							Function_212(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_212(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_212(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_212(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_212(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_212(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_212(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_212(iParam0[iVar03], 2);
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
	Function_210();
	return 1;
}

void Function_210() //Position: 0xA9E3 / 43491
{
	if (!Function_115(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_211() //Position: 0xAA23 / 43555
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

void Function_212(var uParam0, int iParam1) //Position: 0xAA4E / 43598
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_213() //Position: 0xAA5F / 43615
{
	if (!Function_115(128))
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

void Function_214(bool bParam0) //Position: 0xAAA1 / 43681
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

void Function_215(bool bParam0, int iParam1) //Position: 0xAAE3 / 43747
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *bParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_214(bParam0[iVar0]);
		iVar0++;
	}
	return;
}

void Function_216(int iParam0) //Position: 0xAB10 / 43792
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

void Function_217(var uParam0, int iParam1) //Position: 0xAB53 / 43859
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_216(uParam0[iVar0]);
		iVar0++;
	}
	return;
}

bool Function_218(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xAB80 / 43904
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

void Function_219(var uParam0, var uParam1, var uParam2) //Position: 0xABE8 / 44008
{
	return;
}

void Function_220() //Position: 0xABEE / 44014
{
	return;
}

void Function_221(int iParam0) //Position: 0xABF4 / 44020
{
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(iParam0);
	return;
}

bool Function_222() //Position: 0xABFF / 44031
{
	return (RAND_INT_RANGE(0, 1999) / 1000) != 0;
}

bool Function_223(bool bParam0) //Position: 0xAC12 / 44050
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

var Function_224(bool bParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xAC31 / 44081
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_225(bParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_212(bParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_225(var uParam0, int iParam1, int iParam2) //Position: 0xAC69 / 44137
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_4(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_212(uParam0[iVar03], 4);
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

var Function_226(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xAD2D / 44333
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
			Function_212(bParam0[iVar03], 4);
			if (bParam3)
			{
				Function_212(bParam0[iVar03], 8);
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

var Function_227(int iParam0, int iParam1) //Position: 0xADFD / 44541
{
	int iVar0;
	
	iVar0 = (Global_16876[iParam06].f_12 % iParam1);
	return iVar0;
}

var Function_228(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xAE13 / 44563
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
		bVar0 = (bVar0 * (0.75f + ((TO_FLOAT(Function_65(5)) / 100.0f) * 0.5f)));
	}
	if (bParam3)
	{
		if (HAS_ITEM(Function_229(17), Global_34573))
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

var Function_229(bool bParam0) //Position: 0xAF15 / 44821
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

void Function_230(var uParam0, float fParam1) //Position: 0xB006 / 45062
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_154(uParam0, 1);
	Function_62(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

var Function_231() //Position: 0xB027 / 45095
{
	var uVar0;
	
	return uVar0;
}

