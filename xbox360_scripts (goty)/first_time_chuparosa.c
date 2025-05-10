//Decompiled with MagicRDR v1.0
//Function Count : 302
//Statics Count : 353
//Natives Count : 415
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
	float fLocal_20 = 0.0f;
	bool bLocal_21 = false;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
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
	var uLocal_36 = 3;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
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
	var uLocal_50 = 3;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 3;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 3;
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
	var uLocal_77 = 3;
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
	var uLocal_91 = 3;
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
	var uLocal_106 = 3;
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
	var uLocal_119 = 3;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 3;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
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
	int iLocal_179 = 0;
	int iLocal_180 = 0;
	int iLocal_181 = 0;
	bool bLocal_182 = false;
	float fLocal_183 = 0.0f;
	bool bLocal_184 = false;
	vector3 vLocal_185 = { 0.0f, 0.0f, 0.0f };
	bool bLocal_188 = false;
	bool bLocal_189 = false;
	vector3 vLocal_190[5] = {{ 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } };
	vector3 vLocal_206[4] = {{ 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } };
	vector3 vLocal_219[2] = {{ 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } };
	vector3 vLocal_226[2] = {{ 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } };
	int iLocal_233 = 0;
	vector3 vLocal_234 = { 0.0f, 0.0f, 0.0f };
	bool bLocal_237 = false;
	vector3 vLocal_238 = { 0.0f, 0.0f, 0.0f };
	float fLocal_241 = 0.0f;
	var uLocal_242 = 0;
	bool bLocal_243 = false;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	bool bLocal_246 = false;
	bool bLocal_247 = false;
	int iLocal_248 = 0;
	bool bLocal_249 = false;
	bool bLocal_250 = false;
	bool bLocal_251 = false;
	bool bLocal_252 = false;
	bool bLocal_253 = false;
	bool bLocal_254 = false;
	bool bLocal_255 = false;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	vector3 vLocal_265[3] = {{ 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } };
	vector3 vLocal_275[3] = {{ 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } };
	vector3 vLocal_285 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_288 = { 0.0f, 0.0f, 0.0f };
	bool bLocal_291 = false;
	bool bLocal_292 = false;
	bool bLocal_293 = false;
	float fLocal_294 = 0.0f;
	bool bLocal_295 = false;
	bool bLocal_296 = false;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	char* cLocal_299 = NULL;
	bool bLocal_300 = false;
	int iLocal_301 = 0;
	struct<57> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3[14];
	bool bVar18[4];
	int iVar23[6];
	bool bVar30;
	bool bVar31[4];
	bool bVar36;
	bool bVar37;
	vector3 vVar38;
	bool bVar41;
	bool bVar42;
	bool bVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	var uVar47;
	bool bVar48[14];
	bool bVar63;
	int iVar118;
	var uVar119;
	int iVar120;
	bool bVar121;
	int iVar122;
	struct<6> Var123;
	struct<6> Var129;
	struct<6> Var135;
	struct<6> Var141;
	bool bVar147;
	bool bVar148;
	bool bVar149;
	bool bVar150;
	bool bVar151;
	int iVar153;
	bool bVar154;
	
	iLocal_14 = 0;
	iLocal_15 = 0;
	bLocal_21 = false;
	iLocal_179 = 0;
	iLocal_180 = 0;
	iLocal_181 = 0;
	bLocal_182 = false;
	fLocal_183 = 0.0f;
	vLocal_234 = { -2557.061f, 26.102f, 4502.985f };
	vLocal_238 = { -2735.128f, 32.517f, 4256.27f };
	fLocal_241 = 130.329f;
	bLocal_243 = false;
	iLocal_244 = 0;
	iLocal_245 = 1;
	bLocal_246 = false;
	bLocal_247 = false;
	iLocal_248 = 1;
	bLocal_249 = true;
	iLocal_258 = 0;
	iLocal_259 = 0;
	iLocal_263 = 1;
	bLocal_300 = false;
	iVar0 = 0;
	iVar1 = 0;
	bVar2 = CREATE_LAYOUT(Function_301());
	iVar3[0] = CREATE_POINT_IN_LAYOUT(bVar2, "Sack00", -0.2520187f, 1.491357f, -0.5765639f, 113.41f, 90.0f, 0.0f);
	iVar3[1] = CREATE_POINT_IN_LAYOUT(bVar2, "Sack01", 0.02637131f, 1.538229f, -0.5221871f, 113.41f, 90.0f, 0.0f);
	iVar3[2] = CREATE_POINT_IN_LAYOUT(bVar2, "Sack02", 0.3096541f, 1.550158f, -0.5424162f, 113.4098f, 90.0f, 0.0f);
	iVar3[3] = CREATE_POINT_IN_LAYOUT(bVar2, "Sack03", -0.4165353f, 1.596779f, -0.07554072f, -103.3987f, 90.0f, 0.0f);
	iVar3[4] = CREATE_POINT_IN_LAYOUT(bVar2, "Sack04", -0.1230195f, 1.60274f, -0.1512939f, -103.3671f, 89.06715f, 13.399f);
	iVar3[5] = CREATE_POINT_IN_LAYOUT(bVar2, "Sack05", 0.1624664f, 1.578784f, -0.1568331f, -123.6742f, 90.0f, 0.0f);
	iVar3[6] = CREATE_POINT_IN_LAYOUT(bVar2, "Sack06", -0.1900117f, 1.576428f, 0.3473004f, 129.7944f, 95.26188f, 10.95264f);
	iVar3[7] = CREATE_POINT_IN_LAYOUT(bVar2, "Sack07", 0.1188243f, 1.56953f, 0.4436796f, 103.994f, 90.0f, 0.0f);
	iVar3[8] = CREATE_POINT_IN_LAYOUT(bVar2, "Sack08", 0.3579013f, 1.622782f, 0.4045452f, 103.9941f, 90.0f, 0.0f);
	iVar3[9] = CREATE_POINT_IN_LAYOUT(bVar2, "Sack09", -0.534498f, 1.499351f, -0.5765639f, 113.41f, 90.0f, 0.0f);
	iVar3[10] = CREATE_POINT_IN_LAYOUT(bVar2, "Sack010", 0.4002378f, 1.635943f, -0.1568331f, -123.6742f, 90.0f, 0.0f);
	iVar3[11] = CREATE_POINT_IN_LAYOUT(bVar2, "Sack011", -0.4872397f, 1.663396f, 0.3515187f, 132.6347f, 92.76398f, 8.11237f);
	iVar3[12] = CREATE_POINT_IN_LAYOUT(bVar2, "Sack012", -0.1757496f, 1.258301f, 1.588476f, 0.0f, 4.646807f, 0.0f);
	iVar3[13] = CREATE_POINT_IN_LAYOUT(bVar2, "Sack013", 0.3935626f, 1.258301f, 1.429322f, 0.0f, -7.571244f, 0.0f);
	bVar42 = false;
	iVar44 = 0;
	iVar45 = 0;
	uVar47 = Function_299(2, 2, 1, 0, 0);
	vLocal_265[03] = { -2653.0f, 31.122f, 4232.104f };
	vLocal_265[13] = { -2736.69f, 32.243f, 4295.587f };
	vLocal_265[23] = { -2758.32f, 32.125f, 4261.474f };
	vLocal_275[03] = { 0.0f, 144.0f, 0.0f };
	vLocal_275[13] = { 0.0f, 161.0f, 0.0f };
	vLocal_275[23] = { 0.0f, 141.0f, 0.0f };
	bVar63 = 18;
	Function_298(&bLocal_255, 0.0f);
	iVar118 = 0;
	bVar121 = false;
	if (Function_297(2, 0, 3))
	{
		uVar119 = Function_292(2, 0, 3);
		bVar121 = Function_291(uVar119) < 1;
	}
	else
	{
		iVar0 = 5;
	}
	vLocal_190[03] = { -2723.042f, 32.597f, 4244.882f };
	vLocal_190[13] = { -2726.575f, 33.194f, 4267.749f };
	vLocal_190[23] = { -2743.296f, 33.018f, 4272.273f };
	vLocal_190[33] = { -2726.251f, 32.706f, 4252.12f };
	vLocal_190[43] = { -2725.266f, 32.769f, 4261.321f };
	vVar38 = { -2729.765f, 32.666f, 4257.792f };
	vLocal_226[03] = { -2731.564f, 32.828f, 4254.517f };
	vLocal_226[13] = { -2732.837f, 32.587f, 4253.192f };
	vLocal_219[03] = { -2730.394f, 32.742f, 4253.734f };
	vLocal_219[13] = { -2731.584f, 32.582f, 4252.395f };
	vLocal_206[03] = { -2712.44f, 32.832f, 4279.707f };
	vLocal_206[13] = { -2717.876f, 32.828f, 4284.475f };
	vLocal_206[23] = { -2736.411f, 32.493f, 4287.633f };
	vLocal_206[33] = { -2734.151f, 32.683f, 4283.529f };
	iVar122 = 0;
	if (!IS_POPSET_VALID(Global_30750[0]))
	{
		iVar0 = 5;
	}
	else
	{
		iVar23[0] = 262;
		iVar23[1] = 297;
		iVar23[2] = Function_289(Global_30750[0], 1, 2, 1);
		iVar23[3] = Function_289(Global_30750[0], 1, 2, 1);
		iVar23[4] = 311;
		bVar37 = Function_289(Global_30750[2], 1, 2, 1);
		iVar120 = 0;
		while (iVar120 <= 5)
		{
			if (iVar23[iVar120] == 4294967295)
			{
				iVar0 = 5;
			}
			else
			{
				Function_288(&bVar63, iVar23[iVar120], 3, 0);
			}
			iVar120++;
		}
		if (iVar0 != 5)
		{
			if (bVar37 == 4294967295)
			{
				iVar0 = 5;
			}
			else
			{
				Function_288(&bVar63, bVar37, 3, 0);
			}
			Function_288(&bVar63, 1199, 3, 0);
			Function_286(&bVar63, "multistage_movebox", 1, 0);
			Function_286(&bVar63, "smoking_stand", 1, 0);
			Function_286(&bVar63, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
			Function_286(&bVar63, "Stolen_Pleading_Panic_Return", 5, 0);
			Function_286(&bVar63, "custom/Stolen_Pleading_Panic_Return", 8, 0);
			Function_286(&bVar63, "thanks", 5, 0);
			Function_286(&bVar63, "custom/thanks", 8, 0);
			Function_285(&iVar23, 6);
		}
		if (Global_3382 == 1)
		{
			iVar0 = 5;
		}
		if (Function_284(0))
		{
			iVar0 = 5;
		}
	}
	iVar153 = 0;
	bVar154 = false;
	while (!IS_EXITFLAG_SET())
	{
		if (Function_283(&bVar154, &iVar0, &iVar153, &bVar150, bVar42))
		{
			if (bVar154)
			{
				Function_282(&bVar31, 4294967295);
				Function_281(&bVar30);
				Function_281(&bVar36);
			}
			else
			{
				Function_280(&bVar31, 4294967295);
				Function_279(&bVar30);
				Function_279(&bVar36);
			}
		}
		bVar150 = 600;
		switch (iVar0)
		{
			case 0x00000000:
				if (Function_273(&bVar63))
				{
					iVar0 = 1;
				}
				break;
			
			case 0x00000001:
				iVar0 = 2;
				break;
			
			case 0x00000002:
				if (!Function_268(ScriptParam_0.f_56, bVar30, &iVar44, &iVar45, bLocal_247, !iLocal_261, 1, 0))
				{
					iVar0 = 5;
					bVar150 = false;
					break;
				}
				if (VDIST(Global_34574, vLocal_238) > 35.0f)
				{
					iVar0 = 5;
					bVar150 = false;
					break;
				}
				if (Function_267(StackVal, StackVal, vLocal_238, 0x3f800000, 0x42960000, 1, 1, 0))
				{
					iVar0 = 5;
					break;
				}
				Function_266(&bLocal_296);
				bLocal_293 = CREATE_VOLUME_IN_LAYOUT(bVar2, "vWorkerWander", 2, -2735.136f, 33.121f, 4269.531f, 0.0f, 10.0f, 0.0f, 18.0f, 20.0f, 10.0f);
				bVar149 = CREATE_VOLUME_IN_LAYOUT(bVar2, Function_301(), false, vLocal_238, 0.0f, 0.0f, 0.0f, 5.0f, 5.0f, 5.0f);
				bVar41 = CREATE_VOLUME_IN_LAYOUT(bVar2, "vLawmanWander", 3, -2726.448f, 32.702f, 4258.956f, 0.0f, 0.0f, 0.0f, 3.0f, 10.0f, 3.0f);
				CLEAR_AMBIENT_OBJECTS_VOLUME(bVar148, 15);
				CLEAR_AMBIENT_OBJECTS_VOLUME(bVar149, 15);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar148);
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar148);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar149);
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar149);
				bVar31[0] = CREATE_ACTOR_IN_LAYOUT(bVar2, Function_301(), iVar23[0], vLocal_190[03], 0.0f, 0.0f, 0.0f);
				SET_ACTOR_UPDATE_PRIORITY(bVar31[0], false);
				TASK_STAND_STILL(bVar31[0], -1.0f, 0, 0);
				bVar31[1] = CREATE_ACTOR_IN_LAYOUT(bVar2, Function_301(), iVar23[1], vLocal_190[13], 0.0f, 0.0f, 0.0f);
				SET_ACTOR_UPDATE_PRIORITY(bVar31[1], false);
				TASK_WANDER_IN_VOLUME(bVar31[1], bLocal_293, -1.0f);
				bVar31[2] = CREATE_ACTOR_IN_LAYOUT(bVar2, Function_301(), iVar23[2], vLocal_190[23], 0.0f, 0.0f, 0.0f);
				SET_ACTOR_UPDATE_PRIORITY(bVar31[2], false);
				TASK_WANDER_IN_VOLUME(bVar31[2], bLocal_293, -1.0f);
				bVar31[3] = CREATE_ACTOR_IN_LAYOUT(bVar2, Function_301(), iVar23[3], vLocal_190[33], 0.0f, 0.0f, 0.0f);
				SET_ACTOR_UPDATE_PRIORITY(bVar31[3], false);
				TASK_STAND_STILL(bVar31[3], -1.0f, 0, 0);
				bVar30 = CREATE_ACTOR_IN_LAYOUT(bVar2, Function_301(), iVar23[4], vLocal_190[43], 0.0f, 0.0f, 0.0f);
				SET_ACTOR_CAN_PLAY_GESTURES(bVar30, false);
				SET_ACTOR_UPDATE_PRIORITY(bVar30, false);
				bLocal_189 = CREATE_GRINGO_IN_LAYOUT(bVar2, "smoking_stand", "smoking_stand", vLocal_190[43], 0.0f, 0.0f, 0.0f);
				GRINGO_SET_ALL_USES_OWNERSHIP(GET_GRINGO_FROM_OBJECT(bLocal_189), bVar30);
				bVar36 = CREATE_ACTOR_IN_LAYOUT(bVar2, Function_301(), bVar37, vVar38, 0.0f, 0.0f, 0.0f);
				SET_ACTOR_CAN_PLAY_GESTURES(bVar36, false);
				TASK_WANDER_IN_VOLUME(bVar36, bVar41, -1f);
				SET_ACTOR_STAY_WITHIN_VOLUME(bVar36, bVar41, 1, 0);
				Function_265(bVar36);
				Function_264(bVar36, 0);
				Function_263(bVar30);
				bLocal_254 = Function_259(StackVal, StackVal, bVar2, Function_301(), 1199, 977, vLocal_238, 0.0f, fLocal_241, 0.0f, 1, 976, 976, 976, 2);
				iVar120 = 0;
				while (iVar120 <= 14)
				{
					GET_OBJECT_POSITION(iVar3[iVar120], &vLocal_285);
					GET_OBJECT_ORIENTATION(iVar3[iVar120], &vLocal_288);
					bVar48[iVar120] = CREATE_PROP_IN_LAYOUT(bVar2, Function_301(), "p_gen_sackcorn02x", vLocal_238, 0.0f, 0.0f, 0.0f, 0);
					ATTACH_OBJECTS_NO_DRV(bVar48[iVar120], bLocal_254, Function_301(), vLocal_285, vLocal_288);
					SET_OBJECT_COLLIDE_WITH_MOVABLES(bVar48[iVar120], 0);
					iVar120++;
				}
				WAIT(16);
				iVar120 = 0;
				while (iVar120 <= 14)
				{
					GET_OBJECT_POSITION(bVar48[iVar120], &vLocal_185);
					bLocal_188 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/multistage_corn", &vLocal_185, 0.4f, 0);
					if (IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(bLocal_188)))
					{
						DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(bLocal_188));
					}
					iVar120++;
				}
				PRINTVECTOR(*(&ScriptParam_0 + 8));
				PRINTNL();
				PRINTVECTOR(Global_34574);
				PRINTNL();
				if (!Function_256(ScriptParam_0.f_56, 0.0f, 1, 0, ScriptParam_0.f_32))
				{
					iVar0 = 5;
					bVar150 = false;
					break;
				}
				bVar147 = CREATE_VOLUME_IN_LAYOUT(Global_26150, Function_301(), 3, vLocal_238, 0.0f, 0.0f, 0.0f, ScriptParam_0.f_52, 20.0f, ScriptParam_0.f_52);
				DECOR_SET_INT(bVar147, "script", GET_THIS_SCRIPT_ID());
				Function_252(&bVar147, ScriptParam_0.f_32);
				Var123 = { StackVal, StackVal, vLocal_206[23] };
				Var129 = { StackVal, StackVal, vLocal_206[33] };
				Var135 = { StackVal, StackVal, vLocal_206[03] };
				Var141 = { StackVal, StackVal, vLocal_206[13] };
				Function_251(StackVal, StackVal, StackVal, StackVal, StackVal, bVar31[0], Var123, &bVar2);
				Function_251(StackVal, StackVal, StackVal, StackVal, StackVal, bVar31[1], Var129, &bVar2);
				Function_251(StackVal, StackVal, StackVal, StackVal, StackVal, bVar31[2], Var135, &bVar2);
				Function_251(StackVal, StackVal, StackVal, StackVal, StackVal, bVar31[3], Var141, &bVar2);
				bVar151 = CREATE_PROP_IN_LAYOUT(bVar2, Function_301(), "p_gen_sackcorn02x", vLocal_219[03], 0.0f, 310.0f, 0.0f, 0);
				SNAP_OBJECT_TO_GROUND(bVar151, 6.0f, true, 1092616192);
				bVar18[0] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/multistage_corn", &(vLocal_219[03]), 0.4f, 0);
				GRINGO_UPDATE_BOOL(bVar18[0], "UseCase1", "DisableResetProp", 1);
				GRINGO_SET_ALL_USES_OWNERSHIP(bVar18[0], bVar31[0]);
				bVar151 = CREATE_PROP_IN_LAYOUT(bVar2, Function_301(), "p_gen_sackcorn02x", vLocal_219[13], 0.0f, 320.0f, 0.0f, 0);
				SNAP_OBJECT_TO_GROUND(bVar151, 6.0f, true, 1092616192);
				bVar18[1] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/multistage_corn", &(vLocal_219[13]), 0.4f, 0);
				GRINGO_UPDATE_BOOL(bVar18[1], "UseCase1", "DisableResetProp", 1);
				GRINGO_SET_ALL_USES_OWNERSHIP(bVar18[1], bVar31[2]);
				bVar151 = CREATE_PROP_IN_LAYOUT(bVar2, Function_301(), "p_gen_sackcorn02x", vLocal_226[03], 0.0f, 240.0f, 0.0f, 0);
				SNAP_OBJECT_TO_GROUND(bVar151, 6.0f, true, 1092616192);
				bVar18[2] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/multistage_corn", &(vLocal_226[03]), 0.4f, 0);
				GRINGO_UPDATE_BOOL(bVar18[2], "UseCase1", "DisableResetProp", 1);
				GRINGO_SET_ALL_USES_OWNERSHIP(bVar18[2], bVar31[3]);
				bVar151 = CREATE_PROP_IN_LAYOUT(bVar2, Function_301(), "p_gen_sackcorn02x", vLocal_226[13], 0.0f, 260.0f, 0.0f, 0);
				SNAP_OBJECT_TO_GROUND(bVar151, 6.0f, true, 1092616192);
				bVar18[3] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/multistage_corn", &(vLocal_226[13]), 0.4f, 0);
				GRINGO_UPDATE_BOOL(bVar18[3], "UseCase1", "DisableResetProp", 1);
				GRINGO_SET_ALL_USES_OWNERSHIP(bVar18[3], bVar31[1]);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar31[0], 0);
				UNK_0x99AFD2D1(bVar31[0], 1, 1);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar31[1], 0);
				UNK_0x99AFD2D1(bVar31[1], 1, 1);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar30, 0);
				UNK_0x99AFD2D1(bVar30, 1, 1);
				iVar0 = 3;
				bVar150 = false;
				break;
			
			case 0x00000003:
				Function_250(&bVar31, 4, &bVar42, ScriptParam_0.f_56, 100, 0x42a00000, 1);
				Function_249();
				Function_238(StackVal, StackVal, Function_249(), &bVar42, ScriptParam_0.f_56, bVar30, 100, 0x42a00000, 1);
				Function_237(&bVar43);
				if (!iLocal_180)
				{
					if (Global_34573 == GET_ACTOR_IN_VEHICLE_SEAT(bLocal_254, false))
					{
						bLocal_253 = GET_VEHICLE(Global_34573);
						TELEPORT_ACTOR(bVar30, &vLocal_234, 1, 1, 1);
						iLocal_180 = 1;
						Function_236(bLocal_254);
						bLocal_237 = Function_228(3, 30, Global_34573, bVar31[0], 0);
						SET_CRIME_WITNESSED(bLocal_237, 3);
					}
				}
				if (iLocal_261)
				{
					if (Function_226(&bLocal_296) < 300.0f)
					{
						Function_224("firstTimeChuparosa_timeout", iLocal_261, 1);
						iVar0 = 5;
						break;
					}
				}
				if (Function_223(2048))
				{
					iVar0 = 5;
					break;
				}
				if (!Function_268(ScriptParam_0.f_56, bVar30, &iVar44, &iVar45, bLocal_247, iLocal_263, 1, 0) || ((Global_3404 || Global_3403) && !bLocal_247))
				{
					iVar0 = 5;
					bVar150 = false;
					break;
				}
				if (!iLocal_261)
				{
					if (Function_284(0))
					{
						iVar1 = 14;
					}
					if (!iLocal_179)
					{
						if (((Function_220(bVar31[0], &iLocal_233, &fLocal_183, 0, 0, 0x40400000) || Function_220(bVar31[1], &iLocal_233, &fLocal_183, 0, 0, 0x40400000)) || Function_220(bVar31[2], &iLocal_233, &fLocal_183, 0, 0, 0x40400000)) || Function_220(bVar31[3], &iLocal_233, &fLocal_183, 0, 0, 0x40400000))
						{
							iLocal_179 = 1;
							switch (iLocal_233)
							{
								case 0x00000001:
									Function_219(&bVar31, 4294967295);
									iLocal_184 = 0;
									while (iLocal_184 <= 4)
									{
										TASK_CLEAR(bVar31[iLocal_184]);
										iLocal_184++;
									}
									break;
								
								case 0x00000002:
								case 0x00000010:
									Function_219(&bVar31, 4294967295);
									iLocal_184 = 0;
									while (iLocal_184 <= 4)
									{
										TASK_CLEAR(bVar31[iLocal_184]);
										iLocal_184++;
									}
									break;
								
								case 0x00000004:
									iLocal_184 = 0;
									while (iLocal_184 <= 4)
									{
										TASK_CLEAR(bVar31[iLocal_184]);
										iLocal_184++;
									}
									Function_219(&bVar31, 4294967295);
									break;
								
								case 0x00000008:
									Function_219(&bVar31, 4294967295);
									Function_218(bVar31[iVar46], &Global_34573);
									break;
								}
							}
						}
				}
				if (bLocal_247)
				{
					Function_217(&iVar122, 1);
					Function_217(&iVar122, 16);
				}
				else
				{
					iVar122 = 0;
				}
				if (Function_220(bVar30, &iLocal_233, &fLocal_183, iVar122, 0, 0x40400000))
				{
					switch (iLocal_233)
					{
						case 0x00000001:
							Function_224("failAggroDanger", iLocal_261, 1);
							Function_265(bVar30);
							TASK_FLEE_ACTOR(bVar30, Global_34573, -1.0f, -1.0f, 0, 0, 0);
							break;
						
						case 0x00000002:
						case 0x00000010:
							Function_224("failAggroShot", iLocal_261, 1);
							Function_265(bVar30);
							TASK_CLEAR(bVar30);
							break;
						
						case 0x00000004:
							Function_224("failAggroHostile", iLocal_261, 1);
							Function_265(bVar30);
							TASK_CLEAR(bVar30);
							break;
						
						case 0x00000008:
							Function_224("failAggroAttacked", iLocal_261, 1);
							Function_218(bVar30, &Global_34573);
							break;
					}
					iVar0 = 5;
					bVar150 = false;
					break;
				}
				if (!iLocal_248 && !bLocal_249)
				{
					Function_236(bLocal_253);
					Function_216("firstTimeChuparosa_wagonsDestroyed", 0x40f00000, 1, 2, 0, 0, 0, 0);
					iVar0 = 5;
					bVar150 = false;
					break;
				}
				if (IS_ACTOR_VALID(bLocal_253))
				{
					if (!Function_215(bLocal_253, 1, 1, 4294967295))
					{
						Function_236(bLocal_253);
						Function_216("firstTimeChuparosa_wagonDestroyed", 0x40f00000, 1, 2, 0, 0, 0, 0);
						iVar0 = 5;
						bVar150 = false;
						break;
					}
				}
				if (bLocal_243 != 1 && IS_ACTOR_VALID(bVar30))
				{
					if (!IS_ACTOR_ALIVE(bVar30))
					{
						Function_224("crimeWagonThief_fail03", iLocal_261, 1);
						iVar0 = 5;
						bVar150 = false;
						break;
					}
				}
				else if (bLocal_243 == 1)
				{
					Function_224("crimeWagonThief_fail03", iLocal_261, 1);
					iVar0 = 5;
					bVar150 = false;
					break;
				}
				if (!iLocal_264)
				{
					if (!Function_212(&bVar31, 4, Function_213(1)))
					{
						iLocal_184 = 0;
						while (iLocal_184 <= 4)
						{
							TASK_CLEAR(bVar31[iLocal_184]);
							iLocal_184++;
						}
						iLocal_259 = 3;
						iLocal_264 = 1;
					}
				}
				if (iVar0 != 5)
				{
					switch (iVar1)
					{
						case 0x00000000:
						case 0x00000006:
						case 0x00000001:
						case 0x00000002:
						case 0x00000003:
						case 0x00000007:
							if (!Function_211(StackVal, StackVal, Global_34573, vLocal_238, Function_213(1)))
							{
								Function_224("firstTimeChuparosa_timeout", iLocal_261, 1);
								bVar150 = false;
								iVar0 = 5;
							}
							break;
						
						case 0x00000009:
							if (IS_ACTOR_VALID(bLocal_253))
							{
								if (!Function_210(Global_34573, bLocal_253, Function_213(1)))
								{
									Function_216("firstTimeChuparosa_help04", 0x40f00000, 1, 2, 0, 0, 0, 0);
									iVar0 = 5;
									bVar150 = false;
								}
							}
							break;
						
						case 0x00000008:
							bLocal_295 = VDIST(Global_34574, vLocal_234);
							if (!Function_211(StackVal, StackVal, Global_34573, vLocal_234, fLocal_294))
							{
								Function_216("firstTimeChuparosa_help04", 0x40f00000, 1, 2, 0, 0, 0, 0);
								iVar0 = 5;
								bVar150 = false;
							}
							if (IS_ACTOR_VALID(bLocal_253))
							{
								if (!Function_210(Global_34573, bLocal_253, Function_213(1)))
								{
									Function_216("firstTimeChuparosa_help04", 0x40f00000, 1, 2, 0, 0, 0, 0);
									iVar0 = 5;
									bVar150 = false;
								}
							}
							break;
						}
				}
				Function_112(&iVar1, &iVar118, bVar30, uVar119, bVar2, &bVar43, uVar47, &bVar150);
				Function_105(&bVar31, &bVar18);
				if (iVar1 == 14)
				{
					iVar0 = 5;
					bVar150 = false;
				}
				if (iVar1 != 13 && iLocal_259 <= 3)
				{
					iVar0 = 5;
					bVar150 = false;
				}
				break;
			
			case 0x00000005:
				iVar0 = 6;
				bVar150 = false;
				break;
			
			case 0x00000006:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				bVar150 = false;
				break;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(bVar150);
		}
	}
	if (bLocal_21)
	{
		Function_22(&uLocal_22);
	}
	if (bLocal_300)
	{
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	}
	Function_280(&bVar31, 4294967295);
	Function_279(&bVar30);
	Function_279(&bVar36);
	Function_21(&iVar23, 5);
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_291))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_291);
	}
	if (bLocal_246)
	{
		Function_20();
	}
	Function_18(bVar30);
	if (IS_BLIP_VALID(bLocal_250))
	{
		REMOVE_BLIP(bLocal_250);
	}
	if (IS_BLIP_VALID(bLocal_251))
	{
		REMOVE_BLIP(bLocal_251);
	}
	if (IS_BLIP_VALID(bLocal_252))
	{
		REMOVE_BLIP(bLocal_252);
	}
	Function_236(bLocal_254);
	Function_236(bLocal_253);
	if (ScriptParam_0.f_32)
	{
		Global_3399 = 0;
	}
	if (!bVar43)
	{
		Function_256(ScriptParam_0.f_56, 0.0f, 0, 1, 0);
	}
	if (!bVar42)
	{
		Function_17(&bVar36);
		Function_17(&bVar30);
		Function_16(&bVar31, 4294967295);
		if (IS_OBJECT_VALID(bVar2))
		{
			UNK_0xA936E73B(bVar2, 1);
			MARK_OBJECT_FOR_AGGRESSIVE_CLEANUP(bVar2, 1);
		}
	}
	else
	{
		iVar120 = 0;
		while (iVar120 <= 4)
		{
			if (Function_14(bVar31[iVar120], 0))
			{
				RESET_ANIM_SET_FOR_ACTOR(bVar31[iVar120], 1);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar31[iVar120], 1);
				UNK_0x99AFD2D1(bVar31[iVar120], 0, 0);
				Function_265(bVar31[iVar120]);
				TASK_CLEAR(bVar31[iVar120]);
			}
			iVar120++;
		}
		if (Function_14(bVar30, 0))
		{
			if (bLocal_182)
			{
				RESET_ANIM_SET_FOR_ACTOR(bVar30, 0);
			}
			TASK_CLEAR(bVar30);
			AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar30, 1);
			UNK_0x99AFD2D1(bVar30, 0, 0);
			Function_265(bVar30);
			AI_GOAL_LOOK_CLEAR(bVar30);
			if (!bLocal_247)
			{
				Function_5(bVar30, 4, 0, 2);
			}
		}
		if (Function_14(bVar36, 0))
		{
			CLEAR_ACTOR_STAY_WITHIN_VOLUME(bVar36);
			AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar36, 1);
			UNK_0x99AFD2D1(bVar36, 0, 0);
			Function_265(bVar36);
			RELEASE_ACTOR_AS_AMBIENT(bVar36);
		}
	}
	if (IS_ACTOR_VALID(bLocal_254))
	{
		RELEASE_ACTOR(bLocal_254);
	}
	if (IS_ACTOR_VALID(bLocal_254))
	{
		RELEASE_ACTOR(bLocal_254);
	}
	REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar148);
	REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar148);
	REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar149);
	REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar149);
	Function_1(&bVar63);
	RELEASE_LAYOUT_REF(bVar2);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x169E / 5790
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

void Function_2(var uParam0, int iParam1) //Position: 0x16C4 / 5828
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

void Function_3(var uParam0, int iParam1) //Position: 0x17F2 / 6130
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_4(var uParam0, int iParam1) //Position: 0x180C / 6156
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_5(bool bParam0, int iParam1, var uParam2, var uParam3) //Position: 0x1829 / 6185
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
					Function_6(bVar1, 0, 0, 0, 1);
				}
				bVar0++;
			}
		}
		Function_6(bParam0, iParam1, uParam2, uParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_6(bool bParam0, int iParam1, var uParam2, var uParam3, int iParam4) //Position: 0x1909 / 6409
{
	char* cVar0[32];
	
	Function_13();
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
	if (Function_12(bParam0) == 1)
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
	Function_11(bParam0, 0);
	Function_10(bParam0, iParam1);
	Function_9(bParam0, uParam2);
	Function_8(bParam0, uParam3);
	if (Function_7(bParam0) != 5)
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

int Function_7(bool bParam0) //Position: 0x1B57 / 6999
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior");
}

void Function_8(bool bParam0, bool bParam1) //Position: 0x1B7A / 7034
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_9(bool bParam0, bool bParam1) //Position: 0x1B9D / 7069
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_target", bParam1);
	return;
}

void Function_10(bool bParam0, bool bParam1) //Position: 0x1BC1 / 7105
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_11(bool bParam0, bool bParam1) //Position: 0x1BE7 / 7143
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_state", bParam1);
	return;
}

int Function_12(bool bParam0) //Position: 0x1C0A / 7178
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
}

void Function_13() //Position: 0x1C28 / 7208
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

bool Function_14(bool bParam0, bool bParam1) //Position: 0x1C72 / 7282
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
			Function_18(bParam0);
			return 0;
		}
		if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 163840))
		{
			Function_18(bParam0);
			return 0;
		}
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		if (Function_15(bParam0, 0) && !AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 16384))
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

int Function_15(bool bParam0, int iParam1) //Position: 0x1D0E / 7438
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

void Function_16(var uParam0, int iParam1) //Position: 0x1D58 / 7512
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_17(uParam0[iVar0]);
		iVar0++;
	}
	return;
}

void Function_17(bool bParam0) //Position: 0x1D85 / 7557
{
	if (IS_ACTOR_VALID(*bParam0))
	{
		RESET_ANIM_SET_FOR_ACTOR(*bParam0, 0);
		TASK_FLEE_ACTOR(*bParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
		TASK_PRIORITY_SET(*bParam0, 0);
	}
	return;
}

int Function_18(bool bParam0) //Position: 0x1DB0 / 7600
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_19(bParam0);
		return 1;
	}
	return 0;
}

void Function_19(bool bParam0) //Position: 0x1DC6 / 7622
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

void Function_20() //Position: 0x1DF2 / 7666
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

void Function_21(var uParam0, int iParam1) //Position: 0x1E1D / 7709
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

void Function_22(int iParam0) //Position: 0x1E3F / 7743
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
		if (Function_104(iParam0->f_584, 32768))
		{
			Function_103(256);
		}
	}
	Function_102();
	Function_100(1);
	if (Function_104(iParam0->f_584, 32))
	{
		if (Function_98(iParam0->f_624))
		{
			switch (iParam0->f_620)
			{
				case 0x00000002:
					Function_41(iParam0->f_624, 1, 0, 0);
					break;
				
				case 0x00000003:
					Function_38(iParam0->f_624);
					break;
				
				default:
					Function_29(iParam0->f_624);
					break;
				}
			}
	}
	if (SQUAD_IS_VALID(iParam0->f_568))
	{
		Function_23(iParam0, 0);
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
	if (Function_104(iParam0->f_584, 64))
	{
		Global_13111 = 0;
	}
	if (Function_104(iParam0->f_584, 16))
	{
		Global_3382 = 0;
	}
	return;
}

void Function_23(int iParam0, bool bParam1) //Position: 0x1F9C / 8092
{
	if (SQUAD_IS_VALID(iParam0->f_568))
	{
		Function_28(iParam0->f_568);
		Function_26(iParam0 + 568, 1, 0);
		if (bParam1 == 1)
		{
			Function_25(iParam0->f_568);
			Function_28(iParam0->f_568);
			Function_24(iParam0->f_568, Global_34573, -1.0f, -1.0f, 0, 1);
		}
		Function_26(iParam0 + 568, 0, 0);
		SQUAD_MAKE_EMPTY(iParam0->f_568);
		DESTROY_OBJECT(iParam0->f_568);
	}
	return;
}

void Function_24(bool bParam0, bool bParam1, float fParam2, float fParam3, int iParam4, int iParam5) //Position: 0x2001 / 8193
{
	bool bVar0;
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
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			TASK_CLEAR(bVar1);
			TASK_FLEE_ACTOR(bVar1, bParam1, fParam2, fParam3, iParam4, 0, 0);
			TASK_PRIORITY_SET(bVar1, iParam5);
		}
		bVar0++;
	}
}

void Function_25(bool bParam0) //Position: 0x206F / 8303
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		MEMORY_CLEAR_ALL(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0));
		bVar0++;
	}
	return;
}

void Function_26(var uParam0, bool bParam1, bool bParam2) //Position: 0x20A4 / 8356
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(*uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(*uParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*uParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			SQUAD_LEAVE(bVar1);
			if (bParam2)
			{
				if (!Function_27(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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
			bVar0++;
		}
	}
	return;
}

bool Function_27(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x2120 / 8480
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void Function_28(bool bParam0) //Position: 0x213A / 8506
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

void Function_29(int iParam0) //Position: 0x216C / 8556
{
	int iVar0;
	
	if (!Function_98(iParam0))
	{
		Function_36();
		return;
	}
	iVar0 = Function_35(iParam0);
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_30("DEED_CANCEL", iParam0);
	}
	Global_13172[iParam011].f_4 = 0;
	Global_3376 = 1;
	return;
}

void Function_30(char* cParam0, int iParam1) //Position: 0x21BF / 8639
{
	struct<4> Var0;
	
	if (!Function_98(iParam1))
	{
		return;
	}
	switch (Function_35(iParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_31(Function_33(iParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_35(iParam1), Function_33(iParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_35(iParam1), iParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_35(iParam1), iParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_35(iParam1), iParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_35(iParam1), iParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_35(iParam1), iParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_31(int iParam0) //Position: 0x22E3 / 8931
{
	char* cVar0[16];
	
	if (!Function_32())
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

bool Function_32() //Position: 0x231D / 8989
{
	if (Function_104(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

int Function_33(int iParam0) //Position: 0x2338 / 9016
{
	if (!Function_34(iParam0))
	{
		return 4294967295;
	}
	return (SHIFT_RIGHT(Global_13172[iParam011], 12) && 255);
}

bool Function_34(int iParam0) //Position: 0x2358 / 9048
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_35(int iParam0) //Position: 0x236F / 9071
{
	if (!Function_34(iParam0))
	{
		return 0;
	}
	return Global_13172[iParam011] & 15;
}

void Function_36() //Position: 0x238A / 9098
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
			Function_37(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
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

void Function_37(bool bParam0, var uParam1, var uParam2, var uParam3) //Position: 0x25D1 / 9681
{
	*uParam3 = (bParam0 && 15);
	*uParam1 = (SHIFT_RIGHT(bParam0, 4) && 255);
	*uParam2 = (SHIFT_RIGHT(bParam0, 12) && 255);
}

void Function_38(int iParam0) //Position: 0x25FA / 9722
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	var uVar11;
	
	if (!Function_98(iParam0))
	{
		return;
	}
	iVar0 = Function_35(iParam0);
	if (StackVal == 2)
	{
		Function_30("nDEED_FAIL", iParam0);
	}
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_13172[iParam011].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_40(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_39(Global_6269) };
		}
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(uVar11);
	}
	Global_3376 = 1;
	return;
}

struct<16> Function_39(int iParam0) //Position: 0x26A0 / 9888
{
	char* cVar0[16];
	
	if (!Function_32())
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

struct<24> Function_40(char* cParam0) //Position: 0x26DF / 9951
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

void Function_41(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x2935 / 10549
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	var uVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_98(iParam0))
	{
		Function_36();
		return;
	}
	bVar0 = Function_35(iParam0);
	if (!bVar0 != 1)
	{
		Global_13172[iParam011].f_12++;
		if (Function_97())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_6269 = Function_33(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_40(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_39(Global_6269) };
		}
		if (Function_97())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_91();
		CLEAR_JOURNAL_ENTRY(uVar11);
		SET_JOURNAL_ENTRY_PROGRESS(uVar11, -2.0f, 0, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(uVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(uVar11, 1);
		}
	}
	if (Function_97())
	{
		Function_90();
	}
	Global_13172[iParam011].f_36 = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_30("DEED_COMPLETE", iParam0);
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
			Function_85(iParam0);
		}
		if (bParam1)
		{
			if (bParam2)
			{
				switch (bVar0)
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
						switch (Function_33(iParam0))
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
			Function_45(1);
			Function_43(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_42(iParam0, &Var14);
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

void Function_42(int iParam0, int iParam1) //Position: 0x2B89 / 11145
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_43(bool bParam0, int iParam1) //Position: 0x2BC3 / 11203
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = bParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_44())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

bool Function_44() //Position: 0x2C05 / 11269
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_45(bool bParam0) //Position: 0x2C0E / 11278
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_76();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_47();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_46(&Global_63095, 1);
		Function_46(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_46(int iParam0, int iParam1) //Position: 0x2C5F / 11359
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

void Function_47() //Position: 0x2C72 / 11378
{
	Function_74();
	Function_73();
	Function_73();
	Function_72();
	Function_72();
	Function_71();
	Function_71();
	Function_55(0);
	Function_55(0);
	if (!Function_44())
	{
		Function_52();
		Function_51();
		Function_50();
		Function_49();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_48();
	return;
}

void Function_48() //Position: 0x2CC4 / 11460
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

void Function_49() //Position: 0x2DCA / 11722
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

void Function_50() //Position: 0x2DFD / 11773
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

void Function_51() //Position: 0x2F8B / 12171
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

void Function_52() //Position: 0x313F / 12607
{
	Function_53(&Global_28260, 1, 0);
	return;
}

void Function_53(int iParam0, bool bParam1, var uParam2) //Position: 0x314D / 12621
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
	
	bVar0 = Function_54();
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

var Function_54() //Position: 0x333E / 13118
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_55(int iParam0) //Position: 0x3353 / 13139
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
					iVar2 = ((Function_70((50 + iVar4)) + Function_70((183 + iVar4))) + Function_70((90 + iVar4)));
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
	Function_56(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_56(int iParam0, bool bParam1, bool bParam2) //Position: 0x33F9 / 13305
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
		Function_69(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_68(iParam0);
	if (bParam2)
	{
		Function_57(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_57(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x3694 / 13972
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_67(390))), 32);
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
					bVar19 = (Function_66(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_66(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_64(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_61(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_59(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_58(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_301(), &Var9);
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

var Function_58(int iParam0) //Position: 0x3CC1 / 15553
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_59(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x3CD2 / 15570
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_60("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_60("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_60("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_60(char* cParam0, bool bParam1) //Position: 0x3DC7 / 15815
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_61(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x3DE0 / 15840
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_63(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_62(Function_63(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_62(int iParam0, int iParam1) //Position: 0x3E45 / 15941
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_63(int iParam0, bool bParam1) //Position: 0x3E57 / 15959
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_64(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x3E69 / 15977
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
	if (((Function_65(iParam0) != 19 || Function_65(iParam0) != 17) || Function_65(iParam0) != 10) || Function_65(iParam0) != 9)
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

int Function_65(int iParam0) //Position: 0x3F99 / 16281
{
	return Global_35278[iParam020].f_48;
}

float Function_66(int iParam0) //Position: 0x3FA8 / 16296
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_67(int iParam0) //Position: 0x3FE1 / 16353
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_68(int iParam0) //Position: 0x4032 / 16434
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

int Function_69(int iParam0, bool bParam1, bool bParam2) //Position: 0x41CC / 16844
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

int Function_70(bool bParam0) //Position: 0x4410 / 17424
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_71() //Position: 0x4451 / 17489
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
		iVar2 = ((Function_70((50 + iVar3) + 15) + Function_70((183 + iVar3) + 15)) + Function_70((90 + iVar3) + 15));
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
	Function_56(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_72() //Position: 0x44DA / 17626
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
			iVar2 = ((Function_70((50 + iVar3) + 8) + Function_70((183 + iVar3) + 8)) + Function_70((90 + iVar3) + 8));
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
	Function_56(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_73() //Position: 0x4571 / 17777
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
		iVar2 = ((Function_70((50 + iVar3)) + Function_70((183 + iVar3))) + Function_70((90 + iVar3)));
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
	Function_56(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_74() //Position: 0x45F0 / 17904
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_75(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_56(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_75(int iParam0, bool bParam1, int iParam2) //Position: 0x4629 / 17961
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
	Function_69(iParam0, bParam1, 1);
	Function_68(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_57(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_76() //Position: 0x4833 / 18483
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_32())
	{
		Function_82(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_82(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_78(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_78(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_77(StackVal, StackVal, vVar0))
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

bool Function_77(vector3 vParam0) //Position: 0x48EE / 18670
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_78(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x4906 / 18694
{
	int iVar0;
	
	iVar0 = Function_80(uParam2, uParam3);
	if (Function_79(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_217(&Global_63095, 1);
			Function_46(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_217(&Global_63095, 2);
			Function_46(&Global_63095, 1);
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
		Function_217(&Global_63095, 2);
		Function_46(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_249();
	return StackVal, StackVal, Function_249();
}

bool Function_79(int iParam0) //Position: 0x49ED / 18925
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_80(bool bParam0, bool bParam1) //Position: 0x4A03 / 18947
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
				fVar2 = Function_81(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_81(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_79(bVar0) && !bParam1)
	{
		bVar0 = Function_80(bParam0, 1);
	}
	return bVar0;
}

float Function_81(vector3 vParam0, vector3 vParam3) //Position: 0x4ACA / 19146
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_82(var uParam0, int iParam1) //Position: 0x4AE7 / 19175
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_84(Global_34573, &vVar4);
	if (!Function_83(Global_30640[0]))
	{
		vVar7 = { -2158.996f, 19.93287f, 2597.94f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30640[2]))
	{
		vVar7 = { -2424.093f, 26.36347f, 2122.362f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -130.87f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30640[1]))
	{
		vVar7 = { -3242.193f, 19.4623f, 2725.147f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30658[1]))
	{
		vVar7 = { -3658.131f, 42.81397f, 2092.973f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -135.09f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30658[3]))
	{
		vVar7 = { -4454.145f, 9.204829f, 3220.642f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 206.26f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30658[2]))
	{
		GET_VOLUME_CENTER(StackVal, &vVar7);
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 0.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30658[4]))
	{
		vVar7 = { -3669.226f, 8.477426f, 3491.648f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 106.17f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30668[0]))
	{
		vVar7 = { -821.1879f, 93.8091f, 2435.436f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 343.64f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30668[1]))
	{
		vVar7 = { 124.6513f, 76.73672f, 2235.506f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 165.38f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30668[2]))
	{
		GET_VOLUME_CENTER(StackVal, &vVar7);
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 0.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30679[0]))
	{
		vVar7 = { -3195.612f, 41.29269f, 3752.929f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -97.3f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30685[0]))
	{
		vVar7 = { -4287.014f, 18.13315f, 4453.605f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -6.71f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30685[1]))
	{
		vVar7 = { -4708.083f, 3.172676f, 3968.105f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30685[2]))
	{
		vVar7 = { -3245.478f, 39.28797f, 4563.465f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30693[0]))
	{
		vVar7 = { -2687.509f, 31.4827f, 4295.249f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30693[1]))
	{
		vVar7 = { -1719.171f, 11.29226f, 4214.298f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -180.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30693[2]))
	{
		vVar7 = { -1462.607f, 16.54457f, 3952.801f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 22.55f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30707[2]))
	{
		vVar7 = { -819.4399f, 13.11084f, 3712.137f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -135.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30707[3]))
	{
		vVar7 = { 343.2535f, 79.47575f, 3448.062f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -104.45f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30707[0]))
	{
		vVar7 = { -465.2258f, 20.61027f, 3913.855f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30717[0]))
	{
		vVar7 = { 757.22f, 86.90343f, 1271.724f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 270.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30723[2]))
	{
		vVar7 = { -298.7082f, 84.35147f, 2134.708f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 59.3f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30723[1]))
	{
		vVar7 = { -448.9981f, 153.3878f, 1631.183f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 20.74f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30723[0]))
	{
		vVar7 = { -884.3423f, 202.5276f, 1006.602f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 94.65f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30679[1]))
	{
		vVar7 = { -2679.319f, 71.65485f, 3424.564f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -135.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30707[1]))
	{
		vVar7 = { -720.3301f, 67.5125f, 3293.269f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -39.9f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	vVar7 = { -63.861f, 116.861f, 1414.684f };
	bVar10 = VDIST(vVar4, vVar7);
	if (bVar10 > bVar0)
	{
		bVar0 = bVar10;
		vVar1 = { StackVal, StackVal, vVar7 };
	}
	Function_217(&Global_63095, 2);
	Function_46(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_77(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_83(int iParam0) //Position: 0x530C / 21260
{
	var uVar0;
	
	uVar0 = Global_29008[iParam0];
	return (((Function_104(uVar0, 0x1000000) || Function_104(uVar0, 0x2000000)) || Function_104(uVar0, 0x4000000)) || !Function_104(uVar0, 0x10000000));
}

void Function_84(bool bParam0, int iParam1) //Position: 0x5347 / 21319
{
	GET_POSITION(bParam0, iParam1);
	return;
}

void Function_85(int iParam0) //Position: 0x5354 / 21332
{
	int iVar0;
	int iVar1;
	
	if (!Function_34(iParam0))
	{
		return;
	}
	switch (Function_35(iParam0))
	{
		case 0x00000001:
			iVar1 = Function_33(iParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_89(12, 1, 0, 0);
				Function_88(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_89(13, 1, 0, 0);
				Function_88(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_89(14, 1, 0, 0);
				Function_88(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_89(15, 1, 0, 0);
				Function_88(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_89(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_33(iParam0))
			{
				case 0x00000000:
					if (Function_291(iParam0) == 1)
					{
						iVar0 = Function_87(iParam0);
						if (Function_86(iVar0))
						{
							if (iVar0 == Global_30723[5])
							{
								Function_88(4, 18);
							}
							else if (iVar0 == Global_30693[3])
							{
								Function_88(4, 10);
							}
							else if (iVar0 == Global_30723[6])
							{
								Function_88(4, 16);
							}
							else if (iVar0 == Global_30668[3])
							{
								Function_88(4, 6);
							}
							else if (iVar0 == Global_30640[13])
							{
								Function_88(4, 3);
							}
							else if (iVar0 == Global_30693[7])
							{
								Function_88(4, 11);
							}
							else if (iVar0 == Global_30640[6])
							{
								Function_88(4, 0);
							}
							else if (iVar0 == Global_30693[10])
							{
								Function_88(4, 15);
							}
							else if (iVar0 == Global_30693[8])
							{
								Function_88(4, 14);
							}
							else if (iVar0 == Global_30640[11])
							{
								Function_88(4, 2);
							}
							else if (iVar0 == Global_30668[6])
							{
								Function_88(4, 7);
							}
							else if (iVar0 == Global_30723[3])
							{
								Function_88(4, 17);
							}
							else if (iVar0 == Global_30685[5])
							{
								Function_88(4, 8);
							}
							else if (iVar0 == Global_30693[9])
							{
								Function_88(4, 13);
							}
							else if (iVar0 == Global_30693[11])
							{
								Function_88(4, 12);
							}
							else if (iVar0 == Global_30640[7])
							{
								Function_88(4, 1);
							}
							else if (iVar0 == Global_30679[3])
							{
								Function_88(4, 5);
							}
							else if (iVar0 == Global_30693[4])
							{
								Function_88(4, 9);
							}
							else if (iVar0 == Global_30658[7])
							{
								Function_88(4, 4);
							}
							else if (iVar0 == Global_30723[4])
							{
								Function_88(4, 19);
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
								Function_89(363, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[1])
							{
								Function_89(364, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[2])
							{
								Function_89(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_87(iParam0) == 0)
			{
				if (Function_291(iParam0) == 1)
				{
					Function_89(458, 1, 0, 0);
					iVar0 = Function_33(iParam0);
					if (Function_86(iVar0))
					{
						if (iVar0 == Global_30668[2])
						{
							Function_88(2, 10);
						}
						else if (iVar0 == Global_30658[2])
						{
							Function_88(2, 11);
						}
						else if (iVar0 == Global_30640[2])
						{
							Function_88(2, 12);
						}
						else if (iVar0 == Global_30658[0])
						{
							Function_88(2, 13);
						}
						else if (iVar0 == Global_30658[3])
						{
							Function_88(2, 14);
						}
						else if (iVar0 == Global_30685[2])
						{
							Function_88(2, 15);
						}
						else if (iVar0 == Global_30685[1])
						{
							Function_88(2, 16);
						}
						else if (iVar0 == Global_30679[1])
						{
							Function_88(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_291(iParam0) == 1)
			{
				Function_89(400, 1, 0, 0);
			}
			switch (Function_33(iParam0))
			{
				case 0x00000001:
					Function_89(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_88(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_88(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_88(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_89(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_88(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_88(6, 9);
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

bool Function_86(int iParam0) //Position: 0x5830 / 22576
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_87(int iParam0) //Position: 0x5846 / 22598
{
	if (!Function_34(iParam0))
	{
		return 4294967295;
	}
	return (SHIFT_RIGHT(Global_13172[iParam011], 4) && 255);
}

void Function_88(int iParam0, bool bParam1) //Position: 0x5865 / 22629
{
	bool bVar0;
	
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	bVar0 = SHIFT_LEFT(true, bParam1);
	(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || bVar0);
	return;
	return;
}

int Function_89(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x58CC / 22732
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
	Function_69(iParam0, TO_FLOAT(bParam1), 1);
	Function_68(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_57(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_90() //Position: 0x5AEC / 23276
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
	PLAYSTAT_INT("HC_MONEY", Function_70(0));
	PLAYSTAT_INT("HC_FAME", Function_70(3));
	PLAYSTAT_INT("HC_HONOR", Function_70(1));
	return;
}

void Function_91() //Position: 0x5C44 / 23620
{
	int iVar0;
	int iVar1;
	
	if (!Function_96(Global_6269))
	{
		return;
	}
	iVar0 = Function_70(24);
	iVar1 = Function_95(Global_6269);
	if (!Function_96(iVar0) && Function_94(iVar1) < 0)
	{
		Function_56(24, Global_6269, 0);
		Function_92(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_94(Function_95(iVar0)))
	{
		Function_56(24, Global_6269, 0);
		Function_92(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_92(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x5CC4 / 23748
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
		Function_93(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_93(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x6016 / 24598
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

int Function_94(int iParam0) //Position: 0x6099 / 24729
{
	if (!Function_98(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

int Function_95(int iParam0) //Position: 0x60B3 / 24755
{
	if (!Function_96(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_96(int iParam0) //Position: 0x60CD / 24781
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_97() //Position: 0x60E3 / 24803
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

bool Function_98(int iParam0) //Position: 0x610E / 24846
{
	if (!Function_34(iParam0))
	{
		return 0;
	}
	if (!Function_99(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_99(int iParam0) //Position: 0x6132 / 24882
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_100(int iParam0) //Position: 0x6147 / 24903
{
	if (iParam0 != 1 && !GET_THIS_SCRIPT_ID() != Global_8721)
	{
		return;
	}
	if (Global_8717[iParam0])
	{
		Global_8717[iParam0] = 0;
	}
	if (!Function_101())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_101() //Position: 0x6183 / 24963
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

void Function_102() //Position: 0x61A8 / 25000
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_103(int iParam0) //Position: 0x61BC / 25020
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

bool Function_104(bool bParam0, int iParam1) //Position: 0x61D9 / 25049
{
	return (bParam0 && iParam1) == 0;
}

void Function_105(bool bParam0, int iParam1) //Position: 0x61E6 / 25062
{
	bool bVar0;
	
	if (iLocal_181 == 0)
	{
		if (iLocal_261 == 1)
		{
			iLocal_181 = 1;
			Function_219(bParam0, 4294967295);
		}
	}
	iLocal_184 = 0;
	while (iLocal_184 <= 4)
	{
		if (IS_ACTOR_VALID((*bParam0)[iLocal_184]))
		{
			if (!(GET_TASK_STATUS((*bParam0)[iLocal_184], 19) != 3 || GET_TASK_STATUS((*bParam0)[iLocal_184], 19) != 1))
			{
				TASK_WANDER_IN_VOLUME((*bParam0)[iLocal_184], bLocal_293, -1.0f);
			}
		}
		iLocal_184++;
	}
	switch (iLocal_259)
	{
		case 0x00000000:
			if ((CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), (*bParam0)[1], 1.0f, 30.0f, 1, 1, 0) || CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), (*bParam0)[0], 1.0f, 30.0f, 1, 1, 0)) || Function_110(&bLocal_255, 5.0f))
			{
				Function_108((*bParam0)[1], (*bParam0)[0], "firstTimeChuparosa_msg03", "firstTimeChuparosa_msg03", 5, 60, 0, 1);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR((*bParam0)[1], 1);
				UNK_0x99AFD2D1((*bParam0)[1], 0, 0);
				if (IS_GRINGO_VALID((*iParam1)[1]))
				{
					TASK_USE_GRINGO((*bParam0)[0], (*iParam1)[1], "UseCase1", 1, 1);
				}
				if (IS_GRINGO_VALID((*iParam1)[0]))
				{
					TASK_USE_GRINGO((*bParam0)[3], (*iParam1)[0], "UseCase1", 1, 1);
				}
				Function_298(&bLocal_255, 0.0f);
				iLocal_259 = 1;
			}
			break;
		
		case 0x00000001:
			if (iLocal_261 || iLocal_262)
			{
				if (Function_106(Global_34573, bLocal_254) > 60.0f)
				{
					Function_108((*bParam0)[0], (*bParam0)[1], "firstTimeChuparosa_msg04", "firstTimeChuparosa_msg04", 5, 60, 0, 1);
					DECOR_SET_FLOAT((*bParam0)[1], "workerTimer", GET_CURRENT_GAME_TIME());
					AI_SPEECH_SET_ALLOW_FOR_ACTOR((*bParam0)[0], 1);
					UNK_0x99AFD2D1((*bParam0)[0], 0, 0);
					if (IS_GRINGO_VALID((*iParam1)[2]))
					{
						AI_QUICK_EXIT_GRINGO((*bParam0)[2], 1);
						bVar0 = TASK_SEQUENCE_OPEN();
						TASK_GO_NEAR_OBJECT(false, GET_OBJECT_FROM_GRINGO((*iParam1)[1]), 5.0f, 1, 0, 1);
						TASK_USE_GRINGO(false, (*iParam1)[2], "UseCase1", 1, 1);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM((*bParam0)[2], bVar0);
						TASK_SEQUENCE_RELEASE(bVar0, 1);
					}
					if (IS_GRINGO_VALID((*iParam1)[3]))
					{
						AI_QUICK_EXIT_GRINGO((*bParam0)[1], 1);
						bVar0 = TASK_SEQUENCE_OPEN();
						TASK_GO_NEAR_OBJECT(false, GET_OBJECT_FROM_GRINGO((*iParam1)[3]), 5.0f, 1, 0, 1);
						TASK_USE_GRINGO(false, (*iParam1)[3], "UseCase1", 1, 1);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM((*bParam0)[1], bVar0);
						TASK_SEQUENCE_RELEASE(bVar0, 1);
					}
					iLocal_259 = 2;
				}
			}
			break;
		
		case 0x00000002:
			iLocal_184 = 0;
			while (iLocal_184 <= 4)
			{
				if (IS_ACTOR_VALID((*bParam0)[iLocal_184]))
				{
					if (GET_TASK_STATUS((*bParam0)[iLocal_184], 19) == 0)
					{
						vLocal_185 = { -2698.77f, 33.394f, 4287.308f };
						bVar0 = TASK_SEQUENCE_OPEN();
						TASK_GO_NEAR_COORD(false, &vLocal_185, 3.3f, 1);
						TASK_WANDER(false, -1.0f);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM((*bParam0)[iLocal_184], bVar0);
						TASK_SEQUENCE_RELEASE(bVar0, 1);
					}
				}
				iLocal_184++;
			}
			if (((GET_TASK_STATUS((*bParam0)[0], 0) >= 1 && GET_TASK_STATUS((*bParam0)[1], 0) >= 1) && GET_TASK_STATUS((*bParam0)[2], 0) >= 1) && GET_TASK_STATUS((*bParam0)[3], 0) >= 1)
			{
				iLocal_259 = 3;
			}
			break;
		
		case 0x00000003:
			iLocal_184 = 0;
			while (iLocal_184 <= 4)
			{
				if (IS_ACTOR_VALID((*bParam0)[iLocal_184]))
				{
					TASK_CLEAR((*bParam0)[iLocal_184]);
				}
				iLocal_184++;
			}
			iLocal_259 = 4;
			break;
	}
	return;
}

float Function_106(bool bParam0, bool bParam1) //Position: 0x655D / 25949
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_107(bParam0);
			vVar0 = { StackVal, StackVal, Function_107(bParam0) };
			Function_107(bParam1);
			vVar3 = { StackVal, StackVal, Function_107(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between two objects, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

vector3 Function_107(bool bParam0) //Position: 0x65F8 / 26104
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

void Function_108(bool bParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x6664 / 26212
{
	bParam1 = bParam1;
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0) && Function_109(bParam0, Global_34573) >= IntToFloat(iParam5))
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

float Function_109(bool bParam0, bool bParam1) //Position: 0x66F4 / 26356
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

bool Function_110(bool bParam0, float fParam1) //Position: 0x67E5 / 26597
{
	if (Function_111(bParam0))
	{
		if (Function_226(bParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_111(bool bParam0) //Position: 0x6801 / 26625
{
	return Function_104(*bParam0, 1);
}

int Function_112(var uParam0, var uParam1, bool bParam2, var uParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x680E / 26638
{
	switch (*uParam0)
	{
		case 0x0000000E:
			break;
		
		case 0x00000000:
			*uParam7 = 0;
			if (Function_109(Global_34573, bParam2) > 100.0f)
			{
				if (Function_209(&bParam2, &Global_34573, uParam1, bParam4, 55.0f, &bLocal_243, uLocal_242, &bLocal_255, &iLocal_258, 0x41600000, 1, 2, 3231711232, 0, 0, 0))
				{
					if (bLocal_243)
					{
						bLocal_247 = true;
						Function_108(bParam2, Global_34573, "firstTimeChuparosa_msg01", "firstTimeChuparosa_msg01", 5, 60, 1, 1);
						bLocal_250 = ADD_BLIP_FOR_ACTOR(bParam2, 325, 0.0f, 3, 0);
						*uParam5 = 1;
						Function_208(uParam3, 2);
						AI_GOAL_LOOK_AT_ACTOR_NEW(bParam2, Global_34573, -1.0f, 1);
						Function_207(&bLocal_296);
						*uParam0 = 1;
						Function_298(&bLocal_255, 0.0f);
					}
				}
				else
				{
					TASK_WANDER(bParam2, -1.0f);
					*uParam0 = 13;
				}
			}
			break;
		
		case 0x00000001:
			if (Function_110(&bLocal_255, 3.0f))
			{
				Function_216("firstTimeChuparosa_obj01", 0x40f00000, 1, 2, 0, 0, 0, 0);
				iLocal_184 = Function_204();
				if (!Function_77(StackVal, StackVal, vLocal_265[iLocal_1843]))
				{
					SET_OBJECT_POSITION_ON_GROUND(bLocal_189, vLocal_265[iLocal_1843]);
					SET_OBJECT_ORIENTATION(bLocal_189, vLocal_275[iLocal_1843]);
					RESET_ANIM_SET_FOR_ACTOR(bParam2, 1);
					TASK_USE_GRINGO(bParam2, GET_GRINGO_FROM_OBJECT(bLocal_189), "UseCase1", 4294967295, 2);
					AI_GOAL_LOOK_CLEAR(bParam2);
					iLocal_260 = 0;
					Function_298(&bLocal_255, 0.0f);
					Function_207(&bLocal_296);
					*uParam0 = 2;
				}
				else
				{
					SET_OBJECT_POSITION_ON_GROUND(bLocal_189, vLocal_265[03]);
					SET_OBJECT_ORIENTATION(bLocal_189, vLocal_275[03]);
					RESET_ANIM_SET_FOR_ACTOR(bParam2, 1);
					TASK_USE_GRINGO(bParam2, GET_GRINGO_FROM_OBJECT(bLocal_189), "UseCase1", 4294967295, 2);
					AI_GOAL_LOOK_CLEAR(bParam2);
					iLocal_260 = 0;
					Function_298(&bLocal_255, 0.0f);
					Function_207(&bLocal_296);
					*uParam0 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (GET_TASK_STATUS(bParam2, 19) != 1 && IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(GET_CURRENT_GRINGO(bParam2))))
			{
				if (ACTORS_IN_RANGE(bParam2, Global_34573, 14.0f))
				{
					RESET_ANIM_SET_FOR_ACTOR(bParam2, 1);
					TASK_CLEAR(bParam2);
					AI_GOAL_LOOK_AT_ACTOR_NEW(bParam2, Global_34573, -1.0f, 1);
					Function_203(&iLocal_260, bParam2, 3212836864);
					Function_298(&bLocal_255, 0.0f);
					Function_207(&bLocal_296);
					*uParam0 = 3;
				}
				if (Function_110(&bLocal_255, (15.0f + 5.0f)))
				{
					iLocal_262 = 1;
					DESTROY_OBJECT(bLocal_189);
					REMOVE_BLIP(bLocal_250);
					TASK_WANDER(bParam2, -1.0f);
					*uParam0 = 13;
				}
			}
			else
			{
				Function_207(&bLocal_255);
			}
			break;
		
		case 0x00000003:
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam2, 1.0f, 10.0f, 1, 1, 0))
			{
				if (Function_203(&iLocal_260, bParam2, 3212836864))
				{
					Function_201();
					Function_108(bParam2, Global_34573, "firstTimeChuparosa_msg02", "firstTimeChuparosa_msg02", 5, 60, 1, 1);
					Function_298(&bLocal_255, 0.0f);
					Function_207(&bLocal_296);
					*uParam0 = 4;
				}
				if (Function_110(&bLocal_255, 15.0f))
				{
					iLocal_262 = 1;
					DESTROY_OBJECT(bLocal_189);
					REMOVE_BLIP(bLocal_250);
					TASK_WANDER(bParam2, -1.0f);
					*uParam0 = 13;
				}
			}
			else
			{
				Function_207(&bLocal_255);
			}
			break;
		
		case 0x00000004:
			if (!IS_AMBIENT_SPEECH_PLAYING(bParam2))
			{
				AI_GOAL_LOOK_CLEAR(bParam2);
				RESET_ANIM_SET_FOR_ACTOR(bParam2, 1);
				bLocal_292 = CREATE_VOLUME_IN_LAYOUT(bParam4, Function_301(), false, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 15.0f, 4.0f, 15.0f);
				bLocal_291 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("firstTimeChuparosa_context", bLocal_292, 10, 5, 0, false, 0, 0, 4294967295, 0);
				ATTACH_OBJECTS(GET_OBJECT_FROM_VOLUME(bLocal_292), bParam2, Function_301(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
				Function_207(&bLocal_255);
				Function_207(&bLocal_296);
				*uParam0 = 5;
			}
			if (Function_110(&bLocal_255, 15.0f))
			{
				iLocal_262 = 1;
				DESTROY_OBJECT(bLocal_189);
				REMOVE_BLIP(bLocal_250);
				TASK_WANDER(bParam2, -1.0f);
				RELEASE_SCRIPT_USE_CONTEXT(bLocal_291);
				DESTROY_VOLUME(bLocal_292);
				*uParam0 = 13;
			}
			break;
		
		case 0x00000005:
			if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(bLocal_291))
			{
				Function_200(&uLocal_22, Function_292(1, 3, 2));
				Function_176(&uLocal_22, 0, 4294967295, 0.0f, 0.0f, 0.0f, 1, 1, 0);
				Function_145(&uLocal_22);
				bLocal_21 = true;
				Function_143(&iLocal_301, 7, 0, 4294967295, 4294967295);
				AI_GOAL_LOOK_CLEAR(bParam2);
				if (!IS_AMBIENT_SPEECH_PLAYING(Global_34573))
				{
					Function_108(Global_34573, bParam2, "firstTimeChuparosaPlayer_msg01", 0, 5, 60, 1, 1);
				}
				Function_19(bParam2);
				RELEASE_SCRIPT_USE_CONTEXT(bLocal_291);
				DESTROY_VOLUME(bLocal_292);
				iLocal_263 = 0;
				iLocal_261 = 1;
				Function_207(&bLocal_296);
				*uParam0 = 6;
			}
			if (!iLocal_261)
			{
				if (Function_110(&bLocal_255, 15.0f))
				{
					iLocal_262 = 1;
					DESTROY_OBJECT(bLocal_189);
					REMOVE_BLIP(bLocal_250);
					TASK_WANDER(bParam2, -1.0f);
					RELEASE_SCRIPT_USE_CONTEXT(bLocal_291);
					DESTROY_VOLUME(bLocal_292);
					*uParam0 = 13;
				}
			}
			break;
		
		case 0x00000006:
			if (!IS_AMBIENT_SPEECH_PLAYING(Global_34573))
			{
				SET_OBJECT_POSITION_ON_GROUND(bLocal_189, vLocal_234);
				SET_OBJECT_ORIENTATION(bLocal_189, 0.0f, 240.0f, 0.0f);
				iLocal_184 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_COORD(false, &vLocal_234, 5.0f, 3);
				TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(bLocal_189), "UseCase1", 4294967295, 2);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bParam2, iLocal_184);
				TASK_SEQUENCE_RELEASE(bLocal_184, 1);
				iLocal_260 = 0;
				bLocal_251 = ADD_BLIP_FOR_ACTOR(bLocal_254, 325, 0.0f, 3, 0);
				SET_BLIP_NAME(bLocal_251, "firstTimeChuparosa_supply_wagon");
				SET_BLIP_BLINK(bLocal_251, 1, 0, 5f);
				Function_216("firstTimeChuparosa_help01", 0x40f00000, 1, 2, 0, 0, 0, 0);
				Function_207(&bLocal_296);
				*uParam0 = 7;
			}
			break;
		
		case 0x00000007:
			if (IS_ACTOR_VALID(bLocal_253))
			{
				if (Function_284(0) && Global_34573 != GET_ACTOR_IN_VEHICLE_SEAT(bLocal_253, false))
				{
					Function_216("firstTimeChuparosa_obj02", 0x40f00000, 1, 2, 0, 0, 0, 0);
					*uParam0 = 9;
				}
			}
			if (iLocal_248)
			{
				if (!Function_215(bLocal_254, 1, 1, 4294967295))
				{
					iLocal_248 = 0;
					Function_236(bLocal_254);
				}
			}
			break;
		
		case 0x00000009:
			Function_207(&bLocal_296);
			Function_140();
			Function_143(&iLocal_301, 10, 0, 4294967295, 4294967295);
			if (!Function_215(bLocal_253, 1, 1, 4294967295))
			{
				Function_236(bLocal_253);
			}
			if (Global_34573 != GET_ACTOR_IN_VEHICLE_SEAT(bLocal_253, false) && !Function_284(0))
			{
				Function_143(&iLocal_301, 11, 0, 4294967295, 4294967295);
				GET_OBJECT_POSITION(bParam2, &vLocal_285);
				fLocal_294 = VDIST(vLocal_285, Global_34574);
				fLocal_294 = (fLocal_294 + 200.0f);
				bLocal_250 = ADD_BLIP_FOR_ACTOR(bParam2, 325, 0.0f, 3, 0);
				SET_BLIP_NAME(bLocal_250, GET_ACTOR_ENUM_STRING(bParam2));
				SET_BLIP_BLINK(bLocal_250, 1, 0, 5f);
				Function_216("firstTimeChuparosa_help02", 0x40f00000, 1, 2, 0, 0, 0, 0);
				*uParam0 = 8;
			}
			break;
		
		case 0x00000008:
			Function_140();
			if (!Function_215(bLocal_253, 1, 1, 4294967295))
			{
				Function_236(bLocal_253);
			}
			if (Function_284(0))
			{
				Function_19(bParam2);
				Function_216("firstTimeChuparosa_obj02", 0x40f00000, 1, 2, 0, 0, 0, 0);
				*uParam0 = 9;
			}
			if (iLocal_245)
			{
				if (Global_34573 == GET_ACTOR_IN_VEHICLE_SEAT(bLocal_253, false))
				{
					if (Function_109(Global_34573, bParam2) > 50.0f)
					{
						if (Function_203(&iLocal_260, bParam2, 3212836864))
						{
							SET_ANIM_SET_FOR_ACTOR(bParam2, "Stolen_Pleading_Panic_Return", 0);
							SET_ACTION_NODE_FOR_ACTOR(bParam2, "Stolen_Pleading_Panic_Return/excited_return/mobile_and_loop/loop");
							bLocal_182 = true;
							iLocal_245 = 0;
						}
					}
				}
			}
			if (Function_109(bLocal_253, bParam2) > 14.0f)
			{
				if (!iLocal_244)
				{
					Function_216("firstTimeChuparosa_help03", 0x40f00000, 1, 2, 0, 0, 0, 0);
					RESET_ANIM_SET_FOR_ACTOR(bParam2, 1);
					iLocal_244 = 1;
				}
				if (Global_34573 != GET_ACTOR_IN_VEHICLE_SEAT(bLocal_253, false))
				{
					Function_143(&iLocal_301, 3, 0, 4294967295, 4294967295);
					if (!IS_AMBIENT_SPEECH_PLAYING(Global_34573))
					{
						Function_108(Global_34573, bParam2, "firstTimeChuparosaPlayer_msg02", 0, 5, 60, 1, 1);
					}
					Function_236(bLocal_253);
					*uParam0 = 10;
				}
			}
			break;
		
		case 0x0000000A:
			Function_207(&bLocal_296);
			if (!IS_AMBIENT_SPEECH_PLAYING(Global_34573))
			{
				Function_108(bParam2, Global_34573, "firstTimeChuparosa_msg05", "firstTimeChuparosa_msg05", 5, 60, 1, 1);
				RESET_ANIM_SET_FOR_ACTOR(bParam2, 1);
				SET_ANIM_SET_FOR_ACTOR(bParam2, "thanks", 0);
				SET_ACTION_NODE_FOR_ACTOR(bParam2, "thanks");
				bLocal_182 = false;
				Function_236(bParam2);
				Function_236(bLocal_253);
				Function_139(bParam6, 1);
				Function_135(4294967196, 1, 0);
				Function_116(20, 1, 0);
				Function_115(14);
				iLocal_261 = 0;
				*uParam0 = 11;
			}
			break;
		
		case 0x0000000B:
			Function_207(&bLocal_296);
			if (!IS_AMBIENT_SPEECH_PLAYING(bParam2) && !Function_114(bParam2, bLocal_253, 0))
			{
				TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(bParam2, bLocal_253, 0, 4, 1);
			}
			if (Function_114(bParam2, bLocal_253, 0))
			{
				Function_108(bParam2, Global_34573, "firstTimeChuparosa_msg06", "firstTimeChuparosa_msg06", 5, 60, 1, 1);
				*uParam0 = 12;
			}
			break;
		
		case 0x0000000C:
			Function_207(&bLocal_296);
			if (!IS_AMBIENT_SPEECH_PLAYING(bParam2))
			{
				Function_19(bParam2);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(bParam2, 1);
				UNK_0x99AFD2D1(bParam2, 0, 0);
				Function_113(bParam2, 0.0f, 0.0f, 0.0f, 16, 4, 2, 1);
				*uParam0 = 13;
			}
			break;
		
		case 0x0000000D:
			break;
	}
	return 0;
}

void Function_113(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x71E8 / 29160
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
	if (!Function_77(StackVal, StackVal, vParam1))
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

bool Function_114(bool bParam0, bool bParam1, bool bParam2) //Position: 0x72F0 / 29424
{
	int iVar0;
	
	if (GET_ACTOR_IN_VEHICLE_SEAT(bParam1, bParam2) != bParam0)
	{
		return 0;
	}
	GET_ACTOR_VEHICLE_STATE(bParam0, &bParam2, &iVar0);
	if (iVar0 == 1)
	{
		return 1;
	}
	return 0;
}

void Function_115(int iParam0) //Position: 0x7317 / 29463
{
	Global_16876[iParam06].f_16++;
	if (Global_16876[iParam06].f_16 == 1)
	{
		Function_89(409, 1, 0, 0);
	}
	return;
}

void Function_116(int iParam0, bool bParam1, bool bParam2) //Position: 0x7348 / 29512
{
	int iVar0;
	bool bVar1;
	
	if (Function_134(0) && (!Global_3380 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_97())
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
	iVar0 = Function_70(3);
	Function_131();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_129(3, bVar1);
		if (!bParam2)
		{
			if (!Function_128(Global_76848, 4))
			{
				Function_123(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_89(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_66(3));
	iVar0 = Function_70(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_118(4, Function_122(Global_12976.f_156), 1);
				Function_117(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_118(4, Function_122(Global_12976.f_156), 1);
				Function_117(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_118(4, Function_122(Global_12976.f_156), 1);
				Function_117(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_118(4, Function_122(Global_12976.f_156), 1);
				Function_117(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_118(4, Function_122(Global_12976.f_156), 1);
				Function_117(Global_12976.f_152, Global_12976.f_156);
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

void Function_117(int iParam0, int iParam1) //Position: 0x7517 / 29975
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

int Function_118(int iParam0, char* cParam1, bool bParam2) //Position: 0x7775 / 30581
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
	Function_92(iParam0, cParam1, 0, 1);
	iVar1 = Function_119();
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

int Function_119() //Position: 0x78FA / 30970
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
	Function_120();
	return 0;
}

void Function_120() //Position: 0x7999 / 31129
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
		Function_121(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_121(int iParam0) //Position: 0x7A48 / 31304
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

var Function_122(int iParam0) //Position: 0x7AA6 / 31398
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

void Function_123(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x7B35 / 31541
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_125(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_124(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_124(char* cParam0, int iParam1) //Position: 0x7BA1 / 31649
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

bool Function_125(bool bParam0, var uParam1, int iParam2) //Position: 0x7BD8 / 31704
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
		if (Function_127(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_126(uVar0))
		{
			case 0x00000002:
				if (!Function_128(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_126(char* cParam0) //Position: 0x7C50 / 31824
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

int Function_127(int iParam0) //Position: 0x7CF1 / 31985
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_46(&iVar1, 2147483648);
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

bool Function_128(var uParam0, int iParam1) //Position: 0x7D2E / 32046
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_129(int iParam0, bool bParam1) //Position: 0x7D41 / 32065
{
	bool bVar0;
	int iVar1;
	
	Function_89(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_130(iParam0, 4294967295);
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
	iVar1 = Function_119();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

var Function_130(int iParam0, int iParam1) //Position: 0x7EDE / 32478
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

void Function_131() //Position: 0x7F1F / 32543
{
	Function_133(3, 0.0f);
	Function_132(3, 10000.0f);
	return;
}

int Function_132(int iParam0, int iParam1) //Position: 0x7F35 / 32565
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_133(int iParam0, int iParam1) //Position: 0x7F75 / 32629
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_134(int iParam0) //Position: 0x7FB5 / 32693
{
	return (*&Global_12976 + 104)[iParam0];
}

void Function_135(int iParam0, bool bParam1, bool bParam2) //Position: 0x7FC4 / 32708
{
	int iVar0;
	bool bVar1;
	
	if (Function_134(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_97())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_70(1);
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
			Function_129(1, bVar1);
			if (!bParam2)
			{
				if (!Function_128(Global_76848, 1))
				{
					Function_123(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_138(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_128(Global_76848, 2))
				{
					Function_123(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_89(1, bVar1, 0, 0);
	}
	else
	{
		Function_137(1, (4294967295 * bVar1), 0);
	}
	if (Function_70(1) <= 4294962296)
	{
		Function_56(1, 4294962296, 0);
	}
	else if (Function_70(1) >= 5000)
	{
		Function_56(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_66(1));
	iVar0 = Function_70(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_118(2, Function_136(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_118(2, Function_136(Global_12976.f_152), 0);
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
				Function_118(2, Function_136(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_118(2, Function_136(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_118(2, Function_136(Global_12976.f_152), 1);
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
				Function_118(2, Function_136(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_118(2, Function_136(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_118(2, Function_136(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_118(2, Function_136(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_118(2, Function_136(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_118(2, Function_136(Global_12976.f_152), 1);
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
				Function_118(2, Function_136(Global_12976.f_152), 0);
			}
			break;
	}
	Function_117(Global_12976.f_152, Global_12976.f_156);
	return;
}

var Function_136(int iParam0) //Position: 0x82E7 / 33511
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

int Function_137(int iParam0, bool bParam1, int iParam2) //Position: 0x838A / 33674
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
	Function_68(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_57(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_138(int iParam0, bool bParam1) //Position: 0x8585 / 34181
{
	bool bVar0;
	int iVar1;
	
	Function_137(iParam0, bParam1, 0);
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
	iVar1 = Function_130(iParam0, 4294967295);
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
	iVar1 = Function_119();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

int Function_139(bool bParam0, bool bParam1) //Position: 0x8721 / 34593
{
	bool bVar0;
	
	bVar0 = Function_70(0);
	if ((Function_70(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_89(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_70(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_89(597, bParam0, 0, 0);
	}
	if ((Function_70(597) + Function_70(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

void Function_140() //Position: 0x87EC / 34796
{
	if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_253)))
	{
		if (!Global_34573 != GET_ACTOR_IN_VEHICLE_SEAT(bLocal_253, false))
		{
			ADD_BLIP_FOR_ACTOR(bLocal_253, 325, 0.0f, 3, 0);
			SET_BLIP_NAME(GET_BLIP_ON_ACTOR(bLocal_253), "firstTimeChuparosa_supply_wagon");
		}
	}
	else if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_253)))
	{
		if (IS_ACTOR_DRIVING_VEHICLE(Global_34573))
		{
			if (Global_34573 == GET_ACTOR_IN_VEHICLE_SEAT(bLocal_254, false))
			{
				Function_236(bLocal_253);
				bLocal_253 = GET_VEHICLE(Global_34573);
			}
		}
	}
	if (bLocal_246 == 1)
	{
		if (Function_284(0) || !Global_34573 != GET_ACTOR_IN_VEHICLE_SEAT(bLocal_253, false))
		{
			bLocal_246 = false;
			Function_20();
		}
	}
	else if (bLocal_246 == 0)
	{
		if (Global_34573 != GET_ACTOR_IN_VEHICLE_SEAT(bLocal_253, false) && !Function_284(0))
		{
			bLocal_246 = true;
			Function_141(StackVal, StackVal, vLocal_234, 2, 48, 1);
		}
	}
	return;
}

void Function_141(vector3 vParam0, var uParam3, var uParam4, var uParam5) //Position: 0x88BB / 35003
{
	*(&Global_28185 + 24) = { StackVal, StackVal, vParam0 };
	*(&Global_28185 + 36) = { StackVal, StackVal, vParam0 };
	Global_28185 = 2;
	Global_28185.f_4 = 0;
	Global_28185.f_60 = uParam3;
	Global_28185.f_16 = uParam4;
	if (uParam4 & 16 >= 0)
	{
		Global_28185.f_16 |= 131072;
	}
	if (uParam4 & 32 >= 0)
	{
		Global_28185.f_16 |= 262144;
	}
	if (!IS_OBJECTSET_VALID(Global_28185.f_12))
	{
		Global_28185.f_12 = CREATE_OBJECTSET_IN_LAYOUT(StackVal, "MissionGPSPath", 36, 1);
	}
	if (GET_OBJECTSET_SIZE(Global_28185.f_12) >= 0)
	{
		Function_142(Global_28185.f_12);
		CLEAN_OBJECTSET(Global_28185.f_12);
	}
	Global_28185.f_92 = 0;
	Global_28210.f_96 = uParam5;
}

void Function_142(bool bParam0) //Position: 0x8977 / 35191
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

void Function_143(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x89B7 / 35255
{
	if (*iParam0 != iParam1)
	{
		*iParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_144(*iParam0), iParam2, iParam3, iParam4);
	}
}

var Function_144(int iParam0) //Position: 0x89DB / 35291
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

void Function_145(int iParam0) //Position: 0x8F2E / 36654
{
	if (Function_104(iParam0->f_584, 4))
	{
		Function_175();
	}
	if (IS_BLIP_VALID(iParam0->f_36))
	{
		REMOVE_BLIP(iParam0->f_36);
	}
	Function_174(1);
	if (Function_104(iParam0->f_584, 32))
	{
		if (Function_34(iParam0->f_624))
		{
			Function_173(iParam0->f_624, 1);
		}
	}
	if (SQUAD_IS_VALID(iParam0->f_568))
	{
		Function_23(iParam0, 0);
	}
	Function_217(iParam0 + 584, 16);
	Global_3382 = 1;
	if (Function_104(iParam0->f_584, 64))
	{
		Global_13111 = 4294967295;
	}
	Function_146(iParam0, 1);
	return;
}

void Function_146(var uParam0, int iParam1) //Position: 0x8FAF / 36783
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
				iVar0 = Function_172(uParam0);
				if ((iVar0 == 4294967295 && iVar0 == 0) && Function_171(uParam0) != 1)
				{
					Function_148(uParam0->f_488, iVar0, 1);
				}
				if (uParam0->f_484 != 1 || uParam0->f_484 != 0)
				{
					Function_135(200, 1, 0);
				}
				else
				{
					Function_116(50, 1, 0);
				}
				if (uParam0->f_332 > 0)
				{
					Function_139(uParam0->f_332, 1);
				}
				else
				{
					Function_147(uParam0->f_332, 1);
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

int Function_147(bool bParam0, bool bParam1) //Position: 0x9084 / 36996
{
	bool bVar0;
	
	bVar0 = Function_70(0);
	if ((Function_70(0) - bParam0) <= 0)
	{
		bParam0 = bVar0;
	}
	if (bParam0 >= 0)
	{
		Function_137(0, bParam0, 0);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, (bParam0 * 4294967295), 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_70(0));
	return 1;
}

void Function_148(int iParam0, char* cParam1, bool bParam2) //Position: 0x9114 / 37140
{
	char* cVar0[32];
	
	if (!Function_170(3))
	{
		return;
	}
	if (Function_44())
	{
		return;
	}
	if (Function_32())
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
						if (IS_PS3() || Function_169())
						{
							Function_149(4, 16, 0, 0, 0);
						}
						break;
					
					case 0x0000000E:
						Function_149(5, 16, 0, 0, 0);
						break;
					
					case 0x0000000C:
						Function_149(7, 16, 0, 0, 0);
						break;
					}
			}
			strcpy(&cVar0, "PROCTHEME_ATTACK", 32);
			break;
		
		case 0x00000000:
			switch (cParam1)
			{
				case 0x00000019:
					if (IS_PS3() || Function_169())
					{
						Function_149(4, 8, 0, 0, 0);
					}
					break;
				
				case 0x0000000E:
					Function_149(5, 8, 0, 0, 0);
					break;
				
				case 0x00000018:
					Function_149(6, 8, 0, 0, 0);
					break;
				
				case 0x0000000C:
					Function_149(7, 8, 0, 0, 0);
					break;
			}
			strcpy(&cVar0, "PROCTHEME_BOUNTY_HUNTER", 32);
			break;
	}
	return;
}

void Function_149(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x9230 / 37424
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_168(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_170(3) || iParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_167(bParam0, 2))
	{
		Function_89(456, 1, 0, 0);
		Function_166(bParam0, 2);
		if (!bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_165(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_164(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_166(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_163(0, 0, 1, 1))
			{
				Function_45(1);
				Function_43(1, 0);
			}
			else
			{
				Function_162();
			}
		}
		Function_157(bParam0);
		if (StackVal && !Function_104(((((!Function_156() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_104((((Function_156() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_32())
		{
			if (!Function_128(Global_76846, 2))
			{
				Function_123(Global_34573, 2, 1, 0);
			}
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_151();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_150(3, bParam1);
				break;
			
			case 0x00000005:
				Function_150(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_150(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_150(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_150(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_150(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_88(2, 24);
				break;
			
			case 0x00000003:
				Function_88(2, 25);
				break;
			
			case 0x0000000F:
				Function_88(2, 26);
				break;
			
			case 0x0000000D:
				Function_88(2, 27);
				break;
			
			case 0x0000000E:
				Function_88(2, 28);
				break;
			}
	}
}

void Function_150(int iParam0, bool bParam1) //Position: 0x94C6 / 38086
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

void Function_151() //Position: 0x9531 / 38193
{
	if (Function_168(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_155(Global_28180);
			Global_28180.f_8 = Function_152(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_155(Global_28180);
			Global_28180.f_8 = Function_152(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_152(int iParam0, int iParam1) //Position: 0x95AC / 38316
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
					if (Function_154(6, 0) || Function_154(12, 0))
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
					if (Function_153(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_154(5, 0))
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
					if (Function_153(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_153(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_153(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_153(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_154(26, 0))
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
					if (Function_153(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_153(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_153(27) && iVar18)
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
					if (Function_153(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_153(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_153(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_153(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_154(17, 0) && iVar15)
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
					if (Function_153(19) && iVar19)
					{
						vVar0 = { -1708.36f, 46.18f, 2175.89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_154(6, 0) && Function_153(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_153(17) && iVar19)
					{
						vVar0 = { -1687.208f, 53.208f, 2140.491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_154(9, 0) && Function_153(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_153(15) && iVar19)
					{
						vVar0 = { -1709.084f, 55.216f, 2104.631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_154(8, 0) && iVar19)
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
	if (Function_77(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_77(StackVal, StackVal, vVar3))
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
	if (!Function_77(StackVal, StackVal, vVar3))
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

int Function_153(int iParam0) //Position: 0xA19D / 41373
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_154(int iParam0, bool bParam1) //Position: 0xA1B2 / 41394
{
	int iVar0;
	
	iVar0 = Function_95(iParam0);
	if (!Function_34(iVar0))
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

int Function_155(int iParam0) //Position: 0xA1EF / 41455
{
	int iVar0;
	int iVar1;
	
	if (!Function_168(iParam0))
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

bool Function_156() //Position: 0xA23E / 41534
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_157(bool bParam0) //Position: 0xA26B / 41579
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
			if (Function_164(bParam0, Function_161(bVar24)))
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
			if (Function_164(bParam0, Function_161(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_160(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), 0, 0);
		Function_159(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_158(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_158(int iParam0) //Position: 0xA41B / 42011
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_168(iParam0))
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

void Function_159(var uParam0, int iParam1) //Position: 0xA472 / 42098
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

var Function_160(int iParam0) //Position: 0xA497 / 42135
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_168(iParam0))
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

int Function_161(bool bParam0) //Position: 0xA4ED / 42221
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_162() //Position: 0xA4F9 / 42233
{
	return;
}

bool Function_163(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0xA4FF / 42239
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

bool Function_164(bool bParam0, int iParam1) //Position: 0xA5A3 / 42403
{
	int iVar0;
	
	if (!Function_168(bParam0))
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

void Function_165(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0xA602 / 42498
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_39(Global_6269) };
		}
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

void Function_166(int iParam0, int iParam1) //Position: 0xA67D / 42621
{
	if (!Function_168(iParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[iParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_167(int iParam0, int iParam1) //Position: 0xA6D2 / 42706
{
	int iVar0;
	
	if (!Function_168(iParam0))
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

bool Function_168(int iParam0) //Position: 0xA6FF / 42751
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_169() //Position: 0xA715 / 42773
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_104(GET_GAME_EDITION(), 16);
	}
	return 0;
}

bool Function_170(int iParam0) //Position: 0xA745 / 42821
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

int Function_171(int iParam0) //Position: 0xA761 / 42849
{
	return !Function_104(iParam0->f_584, 16384);
}

var Function_172(int iParam0) //Position: 0xA773 / 42867
{
	return iParam0->f_492;
}

void Function_173(int iParam0, int iParam1) //Position: 0xA77E / 42878
{
	int iVar0;
	
	if (!Function_98(iParam0))
	{
		Function_36();
		return;
	}
	if (StackVal == 2)
	{
		return;
	}
	if (!StackVal != 1)
	{
		return;
	}
	iVar0 = Function_35(iParam0);
	Global_13172[iParam011].f_4 = 2;
	if (!Global_34165.f_36 && iParam1)
	{
		Function_45(1);
	}
	if (iVar0 == 1)
	{
		Global_6269 = Function_33(iParam0);
	}
	Global_3376 = 1;
	return;
}

void Function_174(int iParam0) //Position: 0xA7E5 / 42981
{
	if (!Global_8717[iParam0])
	{
		Global_8717[iParam0] = 1;
		if (iParam0 == 1)
		{
			Global_8721 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_101())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_175() //Position: 0xA81A / 43034
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_176(int iParam0, bool bParam1, var uParam2, vector3 vParam3, int iParam6, bool bParam7, int iParam8) //Position: 0xA82E / 43054
{
	struct<8> Var0;
	bool bVar8;
	int iVar9;
	
	iVar9 = 0;
	Function_199(iParam0);
	if (IS_OBJECT_VALID(bParam1))
	{
		*iParam0 = bParam1;
		bVar8 = bParam1;
	}
	iParam0->f_40 = uParam2;
	if (!Function_77(StackVal, StackVal, vParam3))
	{
		*(iParam0 + 4) = { StackVal, StackVal, vParam3 };
	}
	if (iParam6 == 1)
	{
		Function_217(iParam0 + 584, 4);
	}
	else
	{
		Function_46(iParam0 + 584, 4);
	}
	if (bParam7)
	{
		if (Function_34(iParam0->f_624))
		{
			Function_198(iParam0->f_624, 1);
			Function_217(iParam0 + 584, 32);
		}
		else
		{
			LOG_ERROR("PROCMISSION_SETUP found an invalid deed");
		}
	}
	Function_217(iParam0 + 584, 1024);
	iParam0->f_564 = iParam8;
	if (iParam8 >= 0)
	{
		if (!IS_OBJECT_VALID(bVar8))
		{
			bVar8 = CREATE_POINT_IN_LAYOUT(iParam0->f_28, &Var0, vParam3, 0.0f, 0.0f, 0.0f);
			iVar9 = 1;
		}
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_196("nbirdSquad") };
		iParam0->f_568 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(iParam0->f_28, &Var0));
		if (SQUAD_IS_VALID(iParam0->f_568))
		{
			Function_180(iParam0->f_28, iParam0->f_568, iParam8, bVar8, 1129, 0x41200000);
			Function_179(iParam0->f_568, 0);
		}
		if (iVar9 == 1)
		{
			DESTROY_OBJECT(bVar8);
		}
		Function_207(iParam0 + 572);
	}
	Function_207(iParam0 + 44);
	Function_177(0);
}

void Function_177(int iParam0) //Position: 0xA97D / 43389
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, 0, (iParam0 + Function_178(105)), 0);
	return;
}

int Function_178(int iParam0) //Position: 0xA99E / 43422
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_179(bool bParam0, bool bParam1) //Position: 0xA9B4 / 43444
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

void Function_180(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0xA9F5 / 43509
{
	vector3 vVar0;
	vector3 vVar3;
	struct<8> Var6;
	struct<2> Var14;
	bool bVar16;
	int iVar17;
	
	Function_194(10.0f);
	Var14 = { StackVal, Function_194(10.0f) };
	if (SQUAD_IS_VALID(bParam1))
	{
		if (!Function_193(bParam4) || bParam4 != 0)
		{
			bVar16 = Function_183(128, 0, 0, 4294967295, 0);
		}
		else
		{
			bVar16 = bParam4;
		}
		iVar17 = 0;
		while (iVar17 < (iParam2 - 1))
		{
			Function_181(&Var14, iVar17);
			GET_OBJECT_RELATIVE_POSITION(uParam3, Function_181(&Var14, iVar17), &vVar0);
			vVar0.f_4 = (vVar0.y + (fParam5 + RAND_FLOAT_RANGE(0.0f, 20.0f)));
			vVar3.f_4 = RAND_FLOAT_RANGE(0.0f, 360.0f);
			Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_196("genbird_") };
			SQUAD_JOIN(CREATE_ACTOR_IN_LAYOUT(bParam0, &Var6, bVar16, vVar0, vVar3), bParam1);
			iVar17++;
		}
	}
	else
	{
		LOG_ERROR("CREATE_BIRD_SQUAD_IN_LAYOUT - birdSquad passed in is not squad");
	}
}

vector3 Function_181(var uParam0, bool bParam1) //Position: 0xAAE7 / 43751
{
	vector3 vVar0;
	
	if (!Function_182(uParam0))
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

bool Function_182(int iParam0) //Position: 0xAC28 / 44072
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

var Function_183(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xAC4A / 44106
{
	return Function_184(uParam0, uParam1, uParam2, uParam3, uParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_184(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, vector3 vParam6) //Position: 0xAC63 / 44131
{
	switch (iParam0)
	{
		case 0x00000001:
			return Function_187(StackVal, StackVal, Global_30750[0], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000002:
			return Function_187(StackVal, StackVal, Global_30750[1], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000004:
			return Function_187(StackVal, StackVal, Global_30750[2], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000008:
			return Function_187(StackVal, StackVal, Global_30750[3], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000010:
			return Function_187(StackVal, StackVal, Global_30750[4], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000020:
			return Function_187(StackVal, StackVal, Global_30750[5], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000040:
			return Function_187(StackVal, StackVal, Global_30750[6], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000080:
			return Function_187(StackVal, StackVal, Global_30750[7], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000100:
			return Function_187(StackVal, StackVal, Global_30750[8], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000200:
			return Function_187(StackVal, StackVal, Global_30750[9], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000400:
			return Function_187(StackVal, StackVal, Global_30750[10], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000800:
			return Function_187(StackVal, StackVal, Global_30750[11], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00001000:
			return Function_187(StackVal, StackVal, Global_30750[12], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00002000:
			return Function_187(StackVal, StackVal, Global_30750[13], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return Function_185(StackVal, StackVal, iParam0, bParam1, bParam2, iParam5, vParam6);
}

var Function_185(var uParam0, bool bParam1, bool bParam2, int iParam3, vector3 vParam4) //Position: 0xAEB8 / 44728
{
	bool bVar0;
	
	bVar0 = CREATE_POPULATION_SET(0);
	if (uParam0 & 1 == 1)
	{
		Function_186(Global_30750[0], bVar0);
	}
	if (uParam0 & 2 == 2)
	{
		Function_186(Global_30750[1], bVar0);
	}
	if (uParam0 & 4 == 4)
	{
		Function_186(Global_30750[2], bVar0);
	}
	if (uParam0 & 8 == 8)
	{
		Function_186(Global_30750[3], bVar0);
	}
	if (uParam0 & 16 == 16)
	{
		Function_186(Global_30750[4], bVar0);
	}
	if (uParam0 & 32 == 32)
	{
		Function_186(Global_30750[5], bVar0);
	}
	if (uParam0 & 64 == 64)
	{
		Function_186(Global_30750[6], bVar0);
	}
	if (uParam0 & 128 == 128)
	{
		Function_186(Global_30750[7], bVar0);
	}
	if (uParam0 & 256 == 256)
	{
		Function_186(Global_30750[8], bVar0);
	}
	if (uParam0 & 512 == 512)
	{
		Function_186(Global_30750[9], bVar0);
	}
	if (uParam0 & 1024 == 1024)
	{
		Function_186(Global_30750[10], bVar0);
	}
	if (uParam0 & 2048 == 2048)
	{
		Function_186(Global_30750[11], bVar0);
	}
	if (uParam0 & 4096 == 4096)
	{
		Function_186(Global_30750[12], bVar0);
	}
	if (uParam0 & 8192 == 8192)
	{
		Function_186(Global_30750[13], bVar0);
	}
	return Function_187(StackVal, StackVal, bVar0, bParam1, bParam2, 4294967295, 0, iParam3, vParam4);
}

void Function_186(bool bParam0, bool bParam1) //Position: 0xB009 / 45065
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

var Function_187(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, vector3 vParam6) //Position: 0xB0C7 / 45255
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
		Function_192();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, bParam4, iParam5, vParam6);
	if (!Function_193(bVar1))
	{
		if (!Global_30837 && !Global_30838)
		{
			Function_191(bParam0, bParam1, bParam2, bParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_191(bParam0, bParam1, bParam2, bParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && bParam3 != 4294967295)
		{
			while (Function_190(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_193(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_190(bVar0))
				{
					Function_189();
				}
				Function_188(bVar0);
			}
		}
		else if (!bParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != bParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_193(bVar1))
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

void Function_188(int iParam0) //Position: 0xB3BA / 46010
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

void Function_189() //Position: 0xB46E / 46190
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

bool Function_190(bool bParam0) //Position: 0xB4A8 / 46248
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

void Function_191(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xB4D5 / 46293
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

void Function_192() //Position: 0xB626 / 46630
{
	int iVar0;
	
	if (Global_3402)
	{
		if (StackVal || !Global_30742 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_189();
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
	Function_189();
	return;
}

bool Function_193(bool bParam0) //Position: 0xB671 / 46705
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_194(int iParam0) //Position: 0xB688 / 46728
{
	Function_195(iParam0, 10);
	return StackVal, Function_195(iParam0, 10);
}

struct<8> Function_195(var uParam0, int iParam1) //Position: 0xB695 / 46741
{
	struct<2> Var0;
	
	Var0.f_4 = uParam0;
	Var0 = Global_26121[iParam1];
	return StackVal, Var0;
}

struct<32> Function_196(bool bParam0) //Position: 0xB6AE / 46766
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_197("0", &cVar8, ""), 4);
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

struct<32> Function_197(char* cParam0, char* cParam1, char* cParam2) //Position: 0xB718 / 46872
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_198(int iParam0, int iParam1) //Position: 0xB737 / 46903
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	var uVar11;
	
	if (!Function_98(iParam0))
	{
		Function_36();
		return;
	}
	iVar0 = Function_35(iParam0);
	Global_13172[iParam011].f_4 = 1;
	if (!Global_34165.f_36 && iParam1)
	{
		Function_45(1);
	}
	if (iVar0 == 1)
	{
		Global_6269 = Function_33(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_40(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_39(Global_6269) };
		}
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		SET_JOURNAL_ENTRY_PROGRESS(uVar11, -2.0f, 0, 0);
		CLEAR_JOURNAL_ENTRY(uVar11);
		APPEND_JOURNAL_ENTRY(uVar11, 0);
	}
	return;
}

void Function_199(int iParam0) //Position: 0xB7DD / 47069
{
	struct<8> Var0;
	
	if (!IS_LAYOUTREF_VALID(iParam0->f_28))
	{
		strcpy(&Var0, "procMisslayout", 32);
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_196(&Var0) };
		iParam0->f_28 = CREATE_LAYOUT(&Var0);
		if (!IS_LAYOUTREF_VALID(iParam0->f_28))
		{
			LOG_ERROR("couldn't create internal procmission layout");
		}
	}
	return;
}

void Function_200(int iParam0, int iParam1) //Position: 0xB852 / 47186
{
	if (Function_34(iParam1))
	{
		iParam0->f_624 = iParam1;
		Function_217(iParam0 + 584, 32);
	}
	else
	{
		LOG_ERROR("PROCMISSION_SET_DEED received an invalid deed");
	}
	return;
}

void Function_201() //Position: 0xB8A7 / 47271
{
	int iVar0;
	
	bLocal_300 = true;
	if (Global_29004 == 1)
	{
		iVar0 = Function_202(4);
		if (iVar0 == 0)
		{
			cLocal_299 = "MEX_SONG_04";
		}
		else if (iVar0 == 1)
		{
			cLocal_299 = "MEX_SONG_05";
		}
		else if (iVar0 == 2)
		{
			cLocal_299 = "MEX_SONG_06";
		}
		else if (iVar0 == 3)
		{
			cLocal_299 = "MEX_SONG_07";
		}
	}
	AUDIO_MUSIC_FORCE_TRACK(cLocal_299, "PASTORAL", 0.0f, 500, 4294967295, 3212836864, 0);
	iLocal_301 = 3;
	return;
}

var Function_202(bool bParam0) //Position: 0xB943 / 47427
{
	bParam0 = (bParam0 * 1000 - 1);
	return (RAND_INT_RANGE(0, bParam0) / 1000);
}

bool Function_203(int iParam0, bool bParam1, bool bParam2) //Position: 0xB95C / 47452
{
	bool bVar0;
	
	switch (*iParam0)
	{
		case 0x00000000:
			AI_QUICK_EXIT_GRINGO(bParam1, 1);
			bVar0 = TASK_SEQUENCE_OPEN();
			TASK_FACE_ACTOR(false, Global_34573, 0, 3212836864);
			TASK_FACE_ACTOR(false, Global_34573, 1, bParam2);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bParam1, bVar0);
			TASK_SEQUENCE_RELEASE(bVar0, 1);
			TASK_PRIORITY_SET(bParam1, 0);
			*iParam0 = 1;
			break;
		
		case 0x00000001:
			if (GET_NTH_TASK_STATUS(bParam1, false) == 0)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int Function_204() //Position: 0xB9C5 / 47557
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 9999.9f;
	iVar1 = 4294967295;
	iVar2 = 3;
	iVar3 = 0;
	while (iVar3 <= iVar2)
	{
		if (Function_205(StackVal, StackVal, Global_34573, vLocal_265[iVar33]) > fVar0)
		{
			fVar0 = Function_205(StackVal, StackVal, Global_34573, vLocal_265[iVar33]);
			iVar1 = iVar3;
		}
		iVar3++;
	}
	return iVar1;
}

float Function_205(bool bParam0, vector3 vParam1) //Position: 0xBA17 / 47639
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_206(bParam0);
		vVar0 = { StackVal, StackVal, Function_206(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

vector3 Function_206(bool bParam0) //Position: 0xBA91 / 47761
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

void Function_207(bool bParam0) //Position: 0xBAFB / 47867
{
	Function_298(bParam0, 0.0f);
	return;
}

void Function_208(int iParam0, float fParam1) //Position: 0xBB07 / 47879
{
	if (!Function_98(iParam0))
	{
		return;
	}
	Global_13172[iParam011].f_12 = fParam1;
	return;
}

bool Function_209(var uParam0, var uParam1, var uParam2, bool bParam3, float fParam4, var uParam5, bool bParam6, var uParam7, var uParam8, float fParam9, bool bParam10, int iParam11, float fParam12, float fParam13, var uParam14, int iParam15) //Position: 0xBB22 / 47906
{
	float fVar0;
	
	if (!IS_ACTOR_VALID(*uParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(*uParam1))
	{
		return 0;
	}
	if (fParam13 == 0.0f && !*uParam8)
	{
		if (fParam13 > fParam9)
		{
			LOG_ERROR("firstAudioDist is too low to ever work");
		}
		else if (Function_109(*uParam0, *uParam1) > fParam13)
		{
			*uParam8 = 1;
			Function_108(*uParam0, Global_34573, uParam14, uParam14, 5, 60, 1, iParam15);
			Function_298(uParam7, 0.0f);
		}
	}
	switch (*uParam2)
	{
		case 0x00000000:
			SET_ACTOR_UPDATE_PRIORITY(*uParam0, false);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(*uParam0, 0);
			fLocal_20 = Function_109(*uParam0, Global_34573);
			AI_GOAL_LOOK_AT_ACTOR_NEW(*uParam0, *uParam1, -1.0f, 1);
			bParam6 = CREATE_POINT_IN_LAYOUT(bParam3, Function_301(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
			ATTACH_OBJECTS(bParam6, *uParam1, Function_301(), 0.0f, 0.5f, fParam12, 0.0f, 0.0f, 0.0f, 4294967295);
			TASK_FOLLOW_OBJECT_AT_DISTANCE(*uParam0, bParam6, 1.0f, iParam11);
			TASK_PRIORITY_SET(*uParam0, 1);
			*uParam2 = 1;
			break;
		
		case 0x00000001:
			if (IS_ACTOR_ON_FOOT(Global_34573))
			{
				fVar0 = (fParam9 - 3.0f);
			}
			else
			{
				fVar0 = fParam9;
			}
			if ((Function_109(*uParam0, *uParam1) - fLocal_20) < fParam4)
			{
				return 0;
			}
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), *uParam0, 1.0f, fVar0, 1, 1, 0))
			{
				if (bParam10)
				{
					TASK_CLEAR(*uParam0);
					TASK_FACE_ACTOR(*uParam0, *uParam1, 1, 3212836864);
				}
				else
				{
					AI_GOAL_LOOK_CLEAR(*uParam0);
				}
				*uParam5 = 1;
				return 1;
			}
			if (!Function_14(*uParam0, 0))
			{
				return 0;
			}
			break;
	}
	return 1;
}

bool Function_210(bool bParam0, bool bParam1, int iParam2) //Position: 0xBCB0 / 48304
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

bool Function_211(bool bParam0, vector3 vParam1, float fParam4) //Position: 0xBDC1 / 48577
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_206(bParam0);
		if (VDIST(Function_206(bParam0), vParam1) >= fParam4)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

bool Function_212(var uParam0, int iParam1, float fParam2) //Position: 0xBE4B / 48715
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		if (IS_ACTOR_VALID((*uParam0)[iVar0]))
		{
			if (Function_109((*uParam0)[iVar0], Global_34573) > fParam2)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int Function_213(bool bParam0) //Position: 0xBE85 / 48773
{
	var uVar0;
	float fVar1;
	
	if (!bParam0)
	{
		Function_214(&uVar0, &fVar1);
		if (fVar1 < 60.0f)
		{
			return (fVar1 + 20.0f);
		}
		return (fVar1 + 10.0f);
	}
	return (190.0f + 20.0f);
}

void Function_214(var uParam0, int iParam1) //Position: 0xBEC0 / 48832
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

bool Function_215(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0xBF49 / 48969
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

void Function_216(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0xC003 / 49155
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
			Var0 = { StackVal, StackVal, StackVal, Function_39(Global_6269) };
		}
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, &Var0, 0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, iVar4, iParam5, iParam6);
	}
}

void Function_217(int iParam0, int iParam1) //Position: 0xC088 / 49288
{
	*iParam0 = (*iParam0 || iParam1);
	return;
}

int Function_218(bool bParam0, int iParam1) //Position: 0xC097 / 49303
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

void Function_219(bool bParam0, bool bParam1) //Position: 0xC17C / 49532
{
	int iVar0;
	
	if (bParam1 == 4294967295)
	{
		bParam1 = *bParam0;
	}
	iVar0 = 0;
	while (iVar0 <= bParam1)
	{
		Function_265((*bParam0)[iVar0]);
		iVar0++;
	}
	return;
}

bool Function_220(bool bParam0, int iParam1, float fParam2, int iParam3, bool bParam4, float fParam5) //Position: 0xC1A9 / 49577
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
		fVar0 = Function_109(bParam0, Global_34573);
		if (!Function_104(iParam3, 8))
		{
			if (GET_LAST_ATTACKER(bParam0) == Global_34573)
			{
				*iParam1 = 8;
				Function_221(bParam0);
				return 1;
			}
		}
		if (!Function_104(iParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(bParam0, 1.0f))
			{
				*iParam1 = 2;
				Function_221(bParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(bParam0, 1.0f, 1.0f))
			{
				*iParam1 = 2;
				Function_221(bParam0);
				return 1;
			}
		}
		if (!Function_104(iParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(bParam0) || (((GET_ACTOR_UNDER_RETICLE(Global_34573, 0) != bParam0 && IS_PLAYER_WEAPON_ZOOMED(Global_34573)) && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(Global_34573) != bParam0 && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f))
			{
				if (*fParam2 > 0.0f)
				{
					*iParam1 = 4;
					Function_221(bParam0);
					return 1;
				}
				if (*fParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - *fParam2) < 1.3f)
					{
						*iParam1 = 4;
						Function_221(bParam0);
						return 1;
					}
				}
				*fParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_104(iParam3, 1))
		{
			if (Global_3403 || Global_3404)
			{
				*iParam1 = 1;
				Function_221(bParam0);
				return 1;
			}
		}
		if (!Function_104(iParam3, 16))
		{
			if (UNK_0x7F454A92(bParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(bParam0)) > 2.0f && fVar0 > 18.0f)
				{
					*iParam1 = 16;
					Function_221(bParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_221(bool bParam0) //Position: 0xC340 / 49984
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(bParam0, 1);
	UNK_0x99AFD2D1(bParam0, 0, 0);
	Function_222(bParam0);
	MEMORY_CONSIDER_AS(Global_34573, bParam0, 2);
	MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
	AI_GOAL_LOOK_CLEAR(bParam0);
	return;
}

void Function_222(bool bParam0) //Position: 0xC374 / 50036
{
	SAY_SINGLE_LINE_CONTEXT(bParam0, 60, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

bool Function_223(int iParam0) //Position: 0xC38B / 50059
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_224(int iParam0, bool bParam1, bool bParam2) //Position: 0xC3A9 / 50089
{
	if (bParam1)
	{
		HUD_CLEAR_HELP_QUEUE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
		Function_216(iParam0, 0x40f00000, 1, 2, 0, 0, 0, 0);
		if (bParam2)
		{
			Function_225();
		}
	}
	return;
}

void Function_225() //Position: 0xC3D2 / 50130
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

float Function_226(bool bParam0) //Position: 0xC45B / 50267
{
	if (Function_111(bParam0))
	{
		if (Function_227(bParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_227(int iParam0) //Position: 0xC523 / 50467
{
	return Function_104(*iParam0, 2);
}

var Function_228(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xC530 / 50480
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!Function_235(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_234(iParam1))
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
	if (!Function_231(1))
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
		bVar5 = CREATE_OBJECTSET_IN_LAYOUT(Function_301(), Global_26314, 3, 0);
		SET_CRIME_OBJECTSET(bVar3, bVar5);
		if (!bParam4)
		{
			SET_CRIME_WITNESSED(bVar3, 1);
		}
		else
		{
			SET_CRIME_WITNESSED(bVar3, 3);
			Function_229();
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

void Function_229() //Position: 0xC7C0 / 51136
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	iVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_230(bVar0, iVar1);
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

void Function_230(bool bParam0, bool bParam1) //Position: 0xC823 / 51235
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

bool Function_231(bool bParam0) //Position: 0xC852 / 51282
{
	if (Function_223(256))
	{
		return 0;
	}
	if (Function_223(262144))
	{
		return 0;
	}
	if (Function_233())
	{
		return 0;
	}
	if (!Function_223(1))
	{
		return 0;
	}
	if (!Function_223(4096))
	{
		return 0;
	}
	if (bParam0 && Function_232(12))
	{
		return 0;
	}
	if (Global_3378)
	{
		return 0;
	}
	if (Function_223(2048))
	{
		return 0;
	}
	if (Function_44() || !bParam0)
	{
		if (Global_29007 != 2 || Global_29007 != 5)
		{
			return 0;
		}
	}
	return 1;
}

int Function_232(int iParam0) //Position: 0xC8C8 / 51400
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_233() //Position: 0xC8D9 / 51417
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

bool Function_234(int iParam0) //Position: 0xC8F2 / 51442
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_235(int iParam0) //Position: 0xC908 / 51464
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_236(bool bParam0) //Position: 0xC91D / 51485
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

void Function_237(bool bParam0) //Position: 0xC949 / 51529
{
	if (*bParam0)
	{
		return;
	}
	if (IS_ACTOR_VALID(bLocal_254))
	{
		if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bLocal_254, 1065353216, 1117126656, 1, 1, 0))
		{
			*bParam0 = 1;
		}
	}
	return;
}

void Function_238(vector3 vParam0, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7, bool bParam8) //Position: 0xC97D / 51581
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
	else if (!Function_77(StackVal, StackVal, vParam0))
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
			Function_248(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_247(0);
		}
		if (bParam8)
		{
			Function_245(0, GET_THIS_SCRIPT_ID());
			Global_3373 = GET_THIS_SCRIPT_ID();
			Function_243(iParam4);
			Global_3401 = 1;
		}
		Function_242(iParam4);
		if (Function_241(StackVal, 32768))
		{
			Function_239(1);
		}
		Global_16876[iParam46].f_12++;
		Function_89(408, 1, 0, 0);
	}
}

void Function_239(bool bParam0) //Position: 0xCA84 / 51844
{
	if (bParam0)
	{
		Function_240(0x10000000);
	}
	else
	{
		Function_103(0x10000000);
	}
	Global_26316.f_172 = 0;
	return;
}

void Function_240(int iParam0) //Position: 0xCAA8 / 51880
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

bool Function_241(var uParam0, int iParam1) //Position: 0xCABB / 51899
{
	return (uParam0 && iParam1) == 0;
}

void Function_242(int iParam0) //Position: 0xCAC8 / 51912
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (!Function_104(StackVal, 524288))
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
			bVar1 = Function_178(iVar0 * 60);
			ADD_TIME(&Global_17483[iParam075] + 264, 0, 0, bVar1, 0);
			Global_16876[iParam06] = Global_17483[iParam075].f_264;
		}
	}
	return;
}

void Function_243(int iParam0) //Position: 0xCB6C / 52076
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
	Function_244(&Var0 + 80[Var0.f_763], &(Global_16876[iParam06]), iParam0);
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

void Function_244(var uParam0, var uParam1, int iParam2) //Position: 0xCC0A / 52234
{
	uParam0->f_4 = iParam2;
	*uParam0 = uParam1->f_12;
	uParam0->f_8 = 1;
	return;
}

void Function_245(int iParam0, int iParam1) //Position: 0xCC22 / 52258
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
			Function_246(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_246(int iParam0) //Position: 0xCCA4 / 52388
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

void Function_247(int iParam0) //Position: 0xCCF2 / 52466
{
	Global_12976.f_76 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 76, 0, 0, (iParam0 + Function_178(900)), 0);
	return;
}

void Function_248(int iParam0) //Position: 0xCD14 / 52500
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, (iParam0 + Function_178(200)), 0);
	return;
}

vector3 Function_249() //Position: 0xCD35 / 52533
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_250(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6) //Position: 0xCD3E / 52542
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
			Function_248(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_247(0);
		}
		if (bParam6)
		{
			Function_245(0, GET_THIS_SCRIPT_ID());
			Global_3373 = GET_THIS_SCRIPT_ID();
			Global_3401 = 1;
			Function_243(iParam3);
		}
		Function_242(iParam3);
		if (Function_241(StackVal, 32768))
		{
			Function_239(1);
		}
		Global_16876[iParam36].f_12++;
		Function_89(408, 1, 0, 0);
	}
}

void Function_251(bool bParam0, vector3 vParam1, var uParam4, var uParam5, var uParam6, bool bParam7) //Position: 0xCE2B / 52779
{
	bool bVar0;
	
	bVar0 = CREATE_POINT_IN_LAYOUT(*bParam7, Function_301(), vParam1, *(&vParam1 + 12));
	DECOR_SET_OBJECT(bParam0, "MoveObj_Dest", bVar0);
}

int Function_252(var uParam0, int iParam1) //Position: 0xCE5F / 52831
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
	Function_254(DECOR_GET_INT(*uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
		}
		else
		{
			Function_253(iVar0, uParam0, &uVar1, iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(*uParam0);
	return 0;
}

void Function_253(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0xCFC0 / 53184
{
	struct<8> Var0;
	
	Global_26155[iParam05].f_8 = *uParam1;
	Global_26155[iParam05].f_16 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_196("stayout") };
	Global_26155[iParam05].f_12 = CREATE_VOLUME_IN_LAYOUT(Global_26150, &Var0, 3, *iParam2, 0.0f, 0.0f, 0.0f, 12.0f, 5.0f, 12.0f);
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	if (bParam3)
	{
		Global_26155[iParam05].f_4 = ADD_BLIP_FOR_COORD(iParam2, 403, 0f, 2, 0);
		SET_BLIP_BLINK(StackVal, 1, 1, 20.0f);
	}
}

int Function_254(bool bParam0) //Position: 0xD05B / 53339
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
						Function_255(iVar0);
					}
					else if (Global_3386)
					{
						if (Function_205(StackVal, StackVal, Global_34573, vVar1) < 25.0f)
						{
							Function_255(iVar0);
						}
					}
					else if (Function_205(StackVal, StackVal, Global_34573, vVar1) < 55.0f)
					{
						Function_255(iVar0);
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
			Function_255(iVar0);
		}
		iVar0++;
	}
	return 0;
}

void Function_255(int iParam0) //Position: 0xD1BC / 53692
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

bool Function_256(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xD21D / 53789
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
		Function_258("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
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
			Function_257(bVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_257(bVar0);
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
			Function_257(bVar0);
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

void Function_257(bool bParam0) //Position: 0xD47A / 54394
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

void Function_258(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0xD4C0 / 54464
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_39(Global_6269) };
		}
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, &Var0, iParam5);
	}
	else
	{
		iVar4 = "";
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, iVar4, iParam5);
	}
}

var Function_259(bool bParam0, bool bParam1, bool bParam2, int iParam3, vector3 vParam4, vector3 vParam7, var uParam10, int iParam11, int iParam12, int iParam13, int iParam14) //Position: 0xD537 / 54583
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
			if (Function_262(Global_30750[6], 4, 23, 0) && uParam10)
			{
				bVar16 = Function_261(StackVal, StackVal, Global_30750[6], vParam4, 4, 23, 0);
				if (Function_260(bVar16, &iVar1))
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

bool Function_260(int iParam0, int iParam1) //Position: 0xD76B / 55147
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

var Function_261(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6) //Position: 0xD79D / 55197
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam4, bParam5, bParam6, 1, vParam1);
}

int Function_262(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xD7B5 / 55221
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

void Function_263(bool bParam0) //Position: 0xD7DC / 55260
{
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_ACTOR_CAN_BE_HARDLOCKED(bParam0, 0);
		AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bParam0, 0);
	}
	return;
}

int Function_264(bool bParam0, bool bParam1) //Position: 0xD7F6 / 55286
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_OBJECTSET_VALID(bVar0))
	{
		bVar1 = CREATE_OBJECT_ITERATOR(Global_26314);
		ITERATE_EVERYWHERE(bVar1);
		ITERATE_ON_OBJECT_TYPE(bVar1, 2);
		ITERATE_ON_PARTIAL_NAME(bVar1, "nSharedLaw");
		bVar0 = GET_OBJECTSET_FROM_OBJECT(START_OBJECT_ITERATOR(bVar1));
		DESTROY_ITERATOR(bVar1);
	}
	else
	{
		bVar0 = bParam1;
	}
	if (!IS_OBJECTSET_VALID(bVar0))
	{
		return 0;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return 0;
	}
	if (IS_OBJECT_IN_OBJECTSET(bParam0, bVar0))
	{
		return 0;
	}
	ADD_OBJECT_TO_OBJECTSET(bParam0, bVar0);
	CLEAN_OBJECTSET(bVar0);
	return 1;
}

void Function_265(bool bParam0) //Position: 0xD86F / 55407
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

void Function_266(bool bParam0) //Position: 0xD8BB / 55483
{
	if (!Function_111(bParam0))
	{
		Function_298(bParam0, 0.0f);
	}
	return;
}

bool Function_267(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) //Position: 0xD8D0 / 55504
{
	return CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), vParam0, iParam3, iParam4, iParam5, iParam6, iParam7);
}

bool Function_268(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0xD8EC / 55532
{
	if (StackVal & 64 == 64)
	{
		if (!*iParam2)
		{
			if (IS_ACTOR_VALID(bParam1))
			{
				if (Function_109(Global_34573, bParam1) > 15.0f)
				{
					*iParam2 = 1;
				}
			}
		}
		if (Global_3394 && !*iParam2)
		{
			return 0;
		}
		if ((Global_3367 && Global_6281 == GET_THIS_SCRIPT_ID()) && !*iParam2)
		{
			return 0;
		}
		if (Function_271() && !*iParam2)
		{
			return 0;
		}
		if (Function_270(iParam0) && !*iParam2)
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
		if (Global_3403 && iParam7)
		{
			*iParam3 = 1;
			return 0;
		}
		if (Global_3404 && iParam7)
		{
			*iParam3 = 1;
			return 0;
		}
		if (Global_3392 && !*iParam2)
		{
			return 0;
		}
		if (Global_3393 && !*iParam2)
		{
			return 0;
		}
		if (bParam6)
		{
			if (Global_63096 && !*iParam2)
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
		if (!Function_269(iParam0, iParam5))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_269(int iParam0, int iParam1) //Position: 0xDA1A / 55834
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

int Function_270(int iParam0) //Position: 0xDA3B / 55867
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

int Function_271() //Position: 0xDA79 / 55929
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
						if (Function_272(StackVal, Global_34573) > IntToFloat(iVar1))
						{
							return 1;
						}
					}
				}
			}
			if (Function_272(StackVal, Global_34573) > IntToFloat(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

float Function_272(bool bParam0, bool bParam1) //Position: 0xDB34 / 56116
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_206(bParam0);
			vVar0 = { StackVal, StackVal, Function_206(bParam0) };
			Function_107(bParam1);
			vVar3 = { StackVal, StackVal, Function_107(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

bool Function_273(int iParam0) //Position: 0xDBD4 / 56276
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_278();
	iVar1 = 0;
	if (!Function_4(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_277(iParam0[iVar03], 8);
		}
		else if (Function_276())
		{
			iVar1 = 1;
			Function_277(iParam0[iVar03], 8);
		}
		Function_277(iParam0[iVar03], 16);
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
				Function_277(iParam0[iVar03], 1);
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
							Function_277(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_277(iParam0[iVar03], 2);
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
							Function_277(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_277(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_277(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_277(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_277(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_277(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_277(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_277(iParam0[iVar03], 2);
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
	Function_274();
	return 1;
}

void Function_274() //Position: 0xDF4F / 57167
{
	if (!Function_275(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_275(int iParam0) //Position: 0xDF8F / 57231
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_276() //Position: 0xDFAB / 57259
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

void Function_277(var uParam0, int iParam1) //Position: 0xDFD6 / 57302
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_278() //Position: 0xDFE7 / 57319
{
	if (!Function_275(128))
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

void Function_279(bool bParam0) //Position: 0xE029 / 57385
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

void Function_280(bool bParam0, int iParam1) //Position: 0xE06B / 57451
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *bParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_279(bParam0[iVar0]);
		iVar0++;
	}
	return;
}

void Function_281(int iParam0) //Position: 0xE098 / 57496
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

void Function_282(var uParam0, int iParam1) //Position: 0xE0DB / 57563
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_281(uParam0[iVar0]);
		iVar0++;
	}
	return;
}

bool Function_283(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xE108 / 57608
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

bool Function_284(int iParam0) //Position: 0xE170 / 57712
{
	if (!iParam0 != 0)
	{
		LOG_ERROR("Asking about a player with an index not = 0. Multiplayer Law Enforcement not yet implemented.");
		return 0;
	}
	return Global_3403;
}

void Function_285(var uParam0, int iParam1) //Position: 0xE1E6 / 57830
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

var Function_286(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xE208 / 57864
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_287(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_277(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_287(var uParam0, int iParam1, int iParam2) //Position: 0xE240 / 57920
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_4(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_277(uParam0[iVar03], 4);
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

var Function_288(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xE304 / 58116
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
			Function_277(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_277(uParam0[iVar03], 8);
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

int Function_289(var uParam0, int iParam1, int iParam2, int iParam3) //Position: 0xE3D4 / 58324
{
	return Function_290(uParam0, iParam1, iParam2, 4294967295, iParam3);
}

var Function_290(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xE3E8 / 58344
{
	return Function_187(uParam0, uParam1, uParam2, uParam3, uParam4, 0, 0.0f, 0.0f, 0.0f);
}

int Function_291(int iParam0) //Position: 0xE401 / 58369
{
	if (!Function_34(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_12;
}

int Function_292(bool bParam0, bool bParam1, bool bParam2) //Position: 0xE41B / 58395
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_296(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_293(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_293(bParam0, bParam1, bParam2, 4294967295);
}

int Function_293(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xE479 / 58489
{
	var uVar0;
	
	if (!Function_295(bParam2))
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
	uVar0 = Function_296(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_294(uVar0);
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

int Function_294(int iParam0) //Position: 0xE5CE / 58830
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

bool Function_295(int iParam0) //Position: 0xE60C / 58892
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_296(int iParam0, int iParam1, int iParam2) //Position: 0xE621 / 58913
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

bool Function_297(var uParam0, var uParam1, int iParam2) //Position: 0xE641 / 58945
{
	var uVar0;
	
	uVar0 = Function_292(uParam0, uParam1, iParam2);
	return Function_98(uVar0);
}

void Function_298(bool bParam0, float fParam1) //Position: 0xE657 / 58967
{
	bParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_217(bParam0, 1);
	Function_46(bParam0, 2);
	bParam0->f_8 = 0.0f;
	return;
}

var Function_299(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xE678 / 59000
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
		bVar0 = (bVar0 * (0.75f + ((TO_FLOAT(Function_70(5)) / 100.0f) * 0.5f)));
	}
	if (bParam3)
	{
		if (HAS_ITEM(Function_300(17), Global_34573))
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

var Function_300(bool bParam0) //Position: 0xE77A / 59258
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

var Function_301() //Position: 0xE86B / 59499
{
	var uVar0;
	
	return uVar0;
}

