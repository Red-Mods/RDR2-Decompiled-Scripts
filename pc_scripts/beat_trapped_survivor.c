//Decompiled with MagicRDR v1.0
//Function Count : 218
//Statics Count : 434
//Natives Count : 399
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
	float fLocal_26 = 0.0f;
	struct<2> Local_27[38];
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
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181[38] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	int iLocal_259[38] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	int iLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	int iLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	int iLocal_345 = 0;
	bool bLocal_346 = false;
	var uLocal_347[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	int iLocal_365 = 0;
	int iLocal_366 = 0;
	var uLocal_367 = 0;
	bool bLocal_368 = false;
	bool bLocal_369 = false;
	bool bLocal_370 = false;
	int iLocal_371 = 0;
	struct<65> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	int iVar4;
	bool bVar5;
	var uVar6;
	int iVar8;
	int iVar9;
	float fVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	var uVar14[8];
	bool bVar23;
	int iVar24;
	bool bVar25;
	struct<573> Var26;
	
	iLocal_18 = 0;
	iLocal_19 = 0;
	iLocal_337 = 8;
	iLocal_342 = 0;
	iLocal_345 = 0;
	bLocal_346 = false;
	bLocal_368 = false;
	bLocal_369 = false;
	bLocal_370 = false;
	iLocal_371 = 0;
	iVar0 = 0;
	bVar1 = false;
	bVar2 = false;
	uVar3 = CREATE_LAYOUT(Function_217());
	bVar5 = false;
	iVar8 = 0;
	fVar10 = 0.0f;
	iVar13 = 4294967295;
	uVar100 = 20;
	iVar141 = 0;
	bVar142 = false;
	iVar143 = 0;
	iVar144 = 0;
	iVar145 = 0;
	iVar146 = 0;
	iVar147 = 0;
	bVar150 = false;
	bVar151 = false;
	bVar152 = false;
	bVar153 = false;
	iVar154 = 0;
	iVar155 = 0;
	if (Global_6625 == 1)
	{
		iVar0 = 5;
	}
	if (Function_216())
	{
		if (!IS_POPSET_VALID(&(Global_46972[3])) || !IS_POPSET_VALID(&(Global_46972[6])))
		{
			iVar0 = 5;
		}
	}
	else if (!IS_POPSET_VALID(&(Global_46972[0])) || !IS_POPSET_VALID(&(Global_46972[6])))
	{
		iVar0 = 5;
	}
	Function_214(&uVar100, "nhanging_B", 5, 0);
	Function_214(&uVar100, "custom/hanging_B", 8, 0);
	Function_214(&uVar100, "bankrobbery_cower", 5, 0);
	Function_214(&uVar100, "custom/bankrobbery_cower", 8, 0);
	Function_214(&uVar100, "z_dlc_z_beat_door", 1, 0);
	Function_214(&uVar100, "z_dlc_z_beat_door", 5, 0);
	Function_214(&uVar100, "custom/z_dlc_z_beat_door", 8, 0);
	Function_214(&uVar100, "Locked_Footlocker", 1, 0);
	switch (Global_43787)
	{
		case 0x00000000:
		case 0x00000002:
			iVar98 = Function_213(ScriptParam_0.f_64, 2);
			if (iVar98 == 0)
			{
				iVar24 = 36;
				bVar23 = 35;
			}
			else if (iVar98 == 1)
			{
				iVar24 = 177;
				bVar23 = 51;
			}
			break;
		
		case 0x00000001:
			iVar24 = 289;
			bVar23 = 237;
			break;
	}
	Function_212(&uVar100, iVar24, 3, 0);
	Function_212(&uVar100, bVar23, 3, 0);
	if (Function_211(bVar23))
	{
		Function_214(&uVar100, "fema_ride_passenger", 5, 0);
	}
	else
	{
		Function_214(&uVar100, "gent_ride_passenger", 5, 0);
	}
	bVar99 = false;
	while (bVar99 <= iLocal_337)
	{
		if (Function_216())
		{
			uVar14[bVar99] = Function_203(&(Global_46972[3]), 1, 0, 1);
			Function_212(&uVar100, uVar14[bVar99], 3, 0);
		}
		else
		{
			uVar14[bVar99] = Function_203(&(Global_46972[0]), 1, 0, 1);
			Function_212(&uVar100, uVar14[bVar99], 3, 0);
		}
		bVar99++;
	}
	bVar25 = Function_203(&(Global_46972[6]), 1, 0, 1);
	Function_212(&uVar100, bVar25, 3, 0);
	Function_202(iVar24);
	Function_202(bVar23);
	Function_201(&uVar14, iLocal_337);
	iVar178 = 0;
	bVar179 = false;
	while (!IS_EXITFLAG_SET())
	{
		iVar4 = 600;
		if (Function_200(&bVar179, &iVar0, &iVar178, &iVar4, bVar1))
		{
			if (bVar179)
			{
				Function_199(&uVar158, 4294967295);
				Function_198(&bVar167);
				Function_198(&bVar168);
				Function_198(&iVar169);
			}
			else
			{
				Function_197(&uVar158, 4294967295);
				Function_196(&bVar167);
				Function_196(&bVar168);
				Function_196(&iVar169);
			}
		}
		switch (iVar0)
		{
			case 0x00000000:
				if (Function_190(&uVar100))
				{
					uVar148 = CREATE_NAV_QUERY(&uVar3, "trapped");
					iVar0 = 1;
					iVar4 = 0;
				}
				break;
			
			case 0x00000001:
				if (Function_152(&ScriptParam_0, &iVar4, &iVar145, &iVar146, 1))
				{
					if (!Function_141(&Var26, &ScriptParam_0 + 60, 73))
					{
						iVar0 = 5;
						iVar4 = 0;
						break;
					}
					if (VDIST(Global_54078, *(&Var26 + 92)) > 50.0f && !bVar5)
					{
						iVar0 = 5;
						iVar4 = 0;
						break;
					}
					if (ABS(FLOOR((StackVal - StackVal))) < 30 && !bVar5)
					{
						iVar0 = 5;
						iVar4 = 0;
						break;
					}
					iLocal_337 = Var26.f_12;
					NAV_QUERY_START_CAN_PATH_TO_POINT(&uVar148, *(&ScriptParam_0 + 16), *(&Var26 + 92), iVar24);
					iVar0 = 4;
					iVar4 = 0;
				}
				else if (iVar146 == 1)
				{
					iVar0 = 5;
					iVar4 = 0;
				}
				break;
			
			case 0x00000004:
				iVar4 = 0;
				if (NAV_QUERY_IS_DONE(&uVar148))
				{
					NAV_QUERY_RECEIVE_CAN_PATH_TO_POINT(&uVar148, &uVar149);
					NAV_QUERY_STOP(&uVar148);
					DESTROY_OBJECT(&uVar148);
					if (uVar149 || bVar5)
					{
						iVar0 = 2;
					}
					else
					{
						if (ScriptParam_0.f_40)
						{
							Function_140();
							PRINT_OBJECTIVE_B("Rider can't path to the nearest landmark. Launch again with the X button.", 10.0f, 1, 2, 1, 0, 0, 0);
						}
						iVar0 = 5;
					}
				}
				break;
			
			case 0x00000002:
				if (VDIST(Global_54078, *(&Var26 + 92)) > 50.0f && !bVar5)
				{
					iVar0 = 5;
					iVar4 = 0;
					break;
				}
				bVar167 = CREATE_ACTOR_IN_LAYOUT(StackVal, &uVar3, Function_217(), bVar23, *(&Var26 + 92), Vector(0.0f, Var26.f_236, 0.0f));
				Function_139(&bVar167);
				TASK_STAND_STILL(&bVar167, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bVar167, true);
				SET_ANIM_SET_FOR_ACTOR(&bVar167, "bankrobbery_cower", 0);
				SET_ACTION_NODE_FOR_ACTOR(&bVar167, "bankrobbery_cower/Random_Variation/A/A_pre");
				SET_ACTOR_CAN_BE_HARDLOCKED(&bVar167, 0);
				DECOR_SET_BOOL(&bVar167, "CanBeLasso", 0);
				DELETE_ALL_WEAPONS_FROM_ACTOR(&bVar167);
				bVar168 = Function_137(StackVal, StackVal, &uVar3, Function_217(), iVar24, Function_217(), bVar25, *(&ScriptParam_0 + 16), *(&ScriptParam_0 + 28));
				SNAP_OBJECT_TO_GROUND(&bVar168, 6.0f, 0, 1092616192);
				iVar169 = GET_MOUNT(&bVar168);
				Function_139(&bVar168);
				Function_136(&bVar168);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bVar168, 1);
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bVar168, 0,2f);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(&bVar167, 0);
				UNK_0x99AFD2D1(&bVar167, 1, 1);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(&bVar168, 0);
				UNK_0x99AFD2D1(&bVar168, 1, 1);
				bVar142 = true;
				uVar170 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uVar3, Function_217(), 0f, *(&Var26 + 92), Vector(0.0f, 0.0f, 0.0f), Vector(30.0f, 30.0f, 30.0f));
				CLEAR_AMBIENT_OBJECTS_SPHERE(*(&Var26 + 92), 30.0f, 15);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar170);
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar170);
				uVar171 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uVar3, Function_217(), 0f, *(&ScriptParam_0 + 16), Vector(0.0f, 0.0f, 0.0f), Vector(35.0f, 10.0f, 35.0f));
				CLEAR_AMBIENT_OBJECTS_VOLUME(&uVar171, 15);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar171);
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar171);
				ATTACH_OBJECTS(StackVal, StackVal, GET_OBJECT_FROM_VOLUME(&uVar171), &bVar168, Function_217(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
				Function_134(StackVal, &uVar11, &uVar12, &iVar13, 8.0f, *(&ScriptParam_0 + 16));
				Function_133(&iVar9, 1);
				Function_133(&iVar9, 16);
				Function_133(&iVar9, 2);
				uVar158[0] = CREATE_ACTOR_IN_LAYOUT(StackVal, &uVar3, Function_217(), uVar14[0], *(&Var26 + 104), Vector(0.0f, Var26.f_240, 0.0f));
				uLocal_347[0] = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(StackVal, &uVar3, Function_217(), "z_dlc_z_beat_door", *(&Var26 + 104), Vector(0.0f, Var26.f_240, 0.0f)));
				if (iLocal_337 >= 1)
				{
					uVar158[1] = CREATE_ACTOR_IN_LAYOUT(StackVal, &uVar3, Function_217(), uVar14[1], *(&Var26 + 116), Vector(0.0f, Var26.f_244, 0.0f));
					uLocal_347[1] = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(StackVal, &uVar3, Function_217(), "z_dlc_z_beat_door", *(&Var26 + 116), Vector(0.0f, Var26.f_244, 0.0f)));
				}
				if (iLocal_337 >= 2)
				{
					uVar158[2] = CREATE_ACTOR_IN_LAYOUT(StackVal, &uVar3, Function_217(), uVar14[2], *(&Var26 + 128), Vector(0.0f, Var26.f_248, 0.0f));
					uLocal_347[2] = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(StackVal, &uVar3, Function_217(), "z_dlc_z_beat_door", *(&Var26 + 128), Vector(0.0f, Var26.f_248, 0.0f)));
				}
				if (iLocal_337 >= 3)
				{
					uVar158[3] = CREATE_ACTOR_IN_LAYOUT(StackVal, &uVar3, Function_217(), uVar14[3], *(&Var26 + 140), Vector(0.0f, Var26.f_252, 0.0f));
					uLocal_347[3] = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(StackVal, &uVar3, Function_217(), "z_dlc_z_beat_door", *(&Var26 + 140), Vector(0.0f, Var26.f_252, 0.0f)));
				}
				if (iLocal_337 >= 4)
				{
					uVar158[4] = CREATE_ACTOR_IN_LAYOUT(StackVal, &uVar3, Function_217(), uVar14[4], *(&Var26 + 152), Vector(0.0f, Var26.f_256, 0.0f));
					uLocal_347[4] = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(StackVal, &uVar3, Function_217(), "z_dlc_z_beat_door", *(&Var26 + 152), Vector(0.0f, Var26.f_256, 0.0f)));
				}
				if (iLocal_337 >= 5)
				{
					uVar158[5] = CREATE_ACTOR_IN_LAYOUT(StackVal, &uVar3, Function_217(), uVar14[5], *(&Var26 + 164), Vector(0.0f, Var26.f_260, 0.0f));
					uLocal_347[5] = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(StackVal, &uVar3, Function_217(), "z_dlc_z_beat_door", *(&Var26 + 164), Vector(0.0f, Var26.f_260, 0.0f)));
				}
				if (iLocal_337 >= 6)
				{
					uVar158[6] = CREATE_ACTOR_IN_LAYOUT(StackVal, &uVar3, Function_217(), uVar14[6], *(&Var26 + 176), Vector(0.0f, Var26.f_264, 0.0f));
					uLocal_347[6] = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(StackVal, &uVar3, Function_217(), "z_dlc_z_beat_door", *(&Var26 + 176), Vector(0.0f, Var26.f_264, 0.0f)));
				}
				if (iLocal_337 >= 7)
				{
					uVar158[7] = CREATE_ACTOR_IN_LAYOUT(StackVal, &uVar3, Function_217(), uVar14[7], *(&Var26 + 188), Vector(0.0f, Var26.f_268, 0.0f));
					uLocal_347[7] = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(StackVal, &uVar3, Function_217(), "z_dlc_z_beat_door", *(&Var26 + 188), Vector(0.0f, Var26.f_268, 0.0f)));
				}
				bVar99 = false;
				while (bVar99 <= iLocal_337)
				{
					if (!Function_132(&(uVar158[bVar99])))
					{
						Function_125(&(uVar158[bVar99]), 1254, 4294967295, 4294967295, 4294967295, 1, 1, 1);
					}
					bVar99++;
				}
				iVar172 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uVar3, Function_217()));
				if (StackVal >= 1)
				{
					uVar173 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uVar3, Function_217()));
				}
				bVar99 = false;
				while (bVar99 <= iLocal_337)
				{
					TASK_USE_GRINGO(&(uVar158[bVar99]), &(uLocal_347[bVar99]), "UseCase1", 4294967295, 1);
					SNAP_ACTOR_TO_GRINGO(&(uVar158[bVar99]), GET_OBJECT_FROM_GRINGO(&(uLocal_347[bVar99])), "UseCase1", 1, 0, 0);
					if (Function_123(Var26.f_16, Function_124(bVar99)))
					{
						SQUAD_JOIN(&(uVar158[bVar99]), &iVar172);
					}
					else if (Function_123(Var26.f_20, Function_124(bVar99)))
					{
						SQUAD_JOIN(&(uVar158[bVar99]), &uVar173);
					}
					else
					{
						iVar0 = 5;
						iVar4 = 0;
						break;
					}
					bVar99++;
				}
				uVar174 = CREATE_GRINGO_IN_LAYOUT(StackVal, &uVar3, Function_217(), "$/content/scripting/gringo/SimpleGringo/Locked_Footlocker", *(&Var26 + 200), Vector(0.0f, Var26.f_280, 0.0f));
				uVar175 = GET_GRINGO_FROM_OBJECT(&uVar174);
				Function_121(StackVal, &uVar175, Vector(0.0f, 0.0f, 0.0f), 4294967295, 11, 0x3f800000);
				iVar0 = 3;
				iVar4 = 0;
				break;
			
			case 0x00000003:
				Function_120();
				Function_119(StackVal, Function_120(), &bVar1, ScriptParam_0.f_64, &bVar168, 60, 0x42700000, 1);
				Function_120();
				Function_119(StackVal, Function_120(), &bVar1, ScriptParam_0.f_64, &bVar167, 60, 0x42700000, 1);
				Function_106(&uVar158, iLocal_337, &bVar1, ScriptParam_0.f_64, 60, 0x42700000, 1);
				if (!Function_100(ScriptParam_0.f_64, &bVar168, &iVar144, &iVar143, 1, 1, 1, 0))
				{
					TASK_FLEE_ACTOR(&bVar168, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
					iVar0 = 5;
					iVar4 = 0;
					break;
				}
				if (!bVar156)
				{
					if (Function_97(Var26.f_572))
					{
						Function_95(&Var26, &iVar176, &iVar177, &uVar3);
						bVar156 = true;
					}
				}
				if (!bLocal_368)
				{
					if (Function_94(&uVar158, iLocal_337, 55.0f))
					{
						Function_92();
					}
				}
				bVar150 = true;
				if (IS_ACTOR_VALID(&bVar168))
				{
					if (Function_91(&bVar168, &Global_54076) > 200.0f)
					{
						bVar150 = false;
					}
				}
				if (IS_ACTOR_VALID(&bVar167))
				{
					if (Function_91(&bVar167, &Global_54076) > 200.0f)
					{
						bVar150 = false;
					}
				}
				if (Function_94(&uVar158, iLocal_337, 250.0f))
				{
					bVar150 = false;
				}
				if (bVar150)
				{
					if (Function_89(&bVar167, 0) && !bVar151)
					{
						Function_87("HangingUnlawful_fail01", bVar152, 1);
					}
					iVar0 = 5;
					iVar4 = 0;
				}
				Function_133(&iVar9, 4);
				iVar155 = Function_84(&iVar169, &uVar6, &fVar10, iVar9, 0, 0x40400000);
				Function_83(&iVar9, 4);
				if ((Function_84(&bVar168, &uVar6, &fVar10, iVar9, 0, 0x40400000) || Function_84(&bVar167, &uVar6, &fVar10, iVar9, 0, 0x40400000)) || iVar155)
				{
					bVar2 = true;
					iVar144 = 1;
					bVar153 = true;
					if (Function_89(&bVar168, 0))
					{
						RESET_ANIM_SET_FOR_ACTOR(&bVar168, 1);
						Function_82(&bVar168, &Global_54076);
						Function_80(&bVar168);
						Function_79(&bVar168);
					}
					if (Function_89(&bVar167, 0))
					{
						RESET_ANIM_SET_FOR_ACTOR(&bVar167, 1);
						TASK_FLEE_ACTOR(&bVar167, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
					}
					bVar99 = false;
					while (bVar99 <= iLocal_337)
					{
						if (Function_89(&(uVar158[bVar99]), 0))
						{
							if (GET_TASK_STATUS(&(uVar158[bVar99]), 6) == 1)
							{
								RESET_ANIM_SET_FOR_ACTOR(&(uVar158[bVar99]), 1);
							}
							TASK_CLEAR(&(uVar158[bVar99]));
						}
						bVar99++;
					}
					iVar0 = 5;
					iVar4 = 0;
					break;
				}
				if (!Function_89(&bVar167, 0))
				{
					Function_87("HangingUnlawful_fail02", bVar152, 1);
					iVar0 = 5;
					iVar4 = 0;
				}
				if (Function_16(&iVar141, &uVar158, &bVar167, &bVar168, &iVar169, &Var26, &uVar3, &iVar144, &bVar152, &iVar154, &iVar172, &uVar173, &iVar176, &iVar177, ScriptParam_0.f_64))
				{
					bVar153 = true;
					iVar0 = 5;
					iVar4 = 0;
				}
				if (Global_6625)
				{
					iVar0 = 5;
					iVar4 = 0;
				}
				break;
			
			case 0x00000005:
				iVar0 = 6;
				iVar4 = 0;
				break;
			
			case 0x00000006:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				iVar4 = 0;
				break;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(iVar4);
		}
	}
	if (bLocal_368)
	{
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	}
	if (IS_OBJECT_VALID(&uVar148))
	{
		NAV_QUERY_STOP(&uVar148);
		DESTROY_OBJECT(&uVar148);
	}
	Function_197(&uVar158, 4294967295);
	Function_196(&bVar167);
	Function_196(&bVar168);
	Function_196(&iVar169);
	Function_15(&uVar11, &uVar12, &iVar13);
	Function_14(iVar24);
	Function_14(bVar23);
	Function_13(&uVar14, iLocal_337);
	if (!bVar153)
	{
		Function_12(&iVar169);
		Function_12(&bVar167);
		Function_11(&uVar158, 4294967295);
		Function_12(&bVar168);
	}
	Function_10(&iVar176);
	Function_10(&iVar177);
	if (ScriptParam_0.f_40)
	{
		Global_6642 = 0;
	}
	if (!bVar1)
	{
		Function_5(ScriptParam_0.f_64, 0.0f, 0, 1, 0);
	}
	if (Function_89(&bVar167, 0))
	{
		Function_80(&bVar167);
		AI_SPEECH_SET_ALLOW_FOR_ACTOR(&bVar167, 1);
		UNK_0x99AFD2D1(&bVar167, 0, 0);
	}
	if (Function_89(&bVar168, 0))
	{
		Function_80(&bVar168);
		ACTOR_END_FORCE_HOLSTER(&bVar168);
		MEMORY_CLEAR_WEAPON_DRAW_PREFERENCE(&bVar168);
		AI_SPEECH_SET_ALLOW_FOR_ACTOR(&bVar168, 1);
		UNK_0x99AFD2D1(&bVar168, 0, 0);
	}
	bVar99 = false;
	while (bVar99 <= iLocal_337)
	{
		Function_80(&(uVar158[bVar99]));
		bVar99++;
	}
	Function_1(&uVar100);
	if (bVar142)
	{
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar170);
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar170);
	}
	if (!bVar1 && !bVar2)
	{
		Function_12(&iVar169);
		Function_12(&bVar167);
		Function_11(&uVar158, 4294967295);
		Function_12(&bVar168);
		if (IS_OBJECT_VALID(&uVar3))
		{
			UNK_0xA936E73B(&uVar3, 1);
			MARK_OBJECT_FOR_AGGRESSIVE_CLEANUP(&uVar3, 1);
		}
	}
	RELEASE_LAYOUT_REF(&uVar3);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0xF46 / 3910
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

void Function_2(struct<2>[] Param0, int iParam1) //Position: 0xF6E / 3950
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

void Function_3(struct<13> Param0) //Position: 0x10B9 / 4281
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_4(struct<13> Param0) //Position: 0x10D6 / 4310
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_5(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x10F4 / 4340
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
		Function_7("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
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
			Function_6(&bVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_6(&bVar0);
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
			Function_6(&bVar0);
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

void Function_6(bool bParam0) //Position: 0x1360 / 4960
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

void Function_7(var uParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x13AA / 5034
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_8(Global_10966) };
		}
		PRINT_SMALL_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &Var0, &iParam5);
	}
	else
	{
		uVar4 = "";
		PRINT_SMALL_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &uVar4, &iParam5);
	}
}

struct<16> Function_8(int iParam0) //Position: 0x142F / 5167
{
	char* cVar0[16];
	
	if (!Function_9())
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

bool Function_9() //Position: 0x146E / 5230
{
	if (Function_123(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_10(int iParam0) //Position: 0x1489 / 5257
{
	int iVar0;
	var uVar1;
	
	if (IS_OBJECTSET_VALID(&iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= GET_OBJECTSET_SIZE(&iParam0))
		{
			uVar1 = GET_DOOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(iVar0, &iParam0));
			if (IS_DOOR_VALID(&uVar1))
			{
				SET_DOOR_LOCK(&uVar1, 0);
			}
			iVar0++;
		}
		DESTROY_OBJECTSET(&iParam0);
	}
	return;
}

void Function_11(var[] uParam0, int iParam1) //Position: 0x14D3 / 5331
{
	int iVar0;
	
	if (&iParam1 == 4294967295)
	{
		iParam1 = uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= &iParam1)
	{
		Function_12(&(uParam0[iVar0]));
		iVar0++;
	}
	return;
}

void Function_12(bool bParam0) //Position: 0x1505 / 5381
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		RESET_ANIM_SET_FOR_ACTOR(&bParam0, 0);
		TASK_FLEE_ACTOR(&bParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
		TASK_PRIORITY_SET(&bParam0, false);
	}
	return;
}

void Function_13(var[] uParam0, int iParam1) //Position: 0x1535 / 5429
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

void Function_14(bool bParam0) //Position: 0x1558 / 5464
{
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(bParam0);
	return;
}

void Function_15(var uParam0, var uParam1, float fParam2) //Position: 0x1563 / 5475
{
	if (uParam0 != 4294967295)
	{
		RESET_THIS_TREE_TYPE_CLEARING(uParam0);
	}
	if (uParam1 != 4294967295)
	{
		RESET_THIS_BREAKABLE_TREE_CLEARING(uParam1);
	}
	if (fParam2 != 4294967295)
	{
		RESET_THIS_TREE_TYPE_CLEARING(fParam2);
	}
	return;
}

bool Function_16(var uParam0, int[] iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14) //Position: 0x1596 / 5526
{
	int iVar0;
	bool bVar1;
	
	bVar1 = false;
	switch (uParam0)
	{
		case 0x00000000:
			if (VDIST(Global_54078, (&iParam5 + 92)) < 225.0f)
			{
				Function_77(StackVal, &bParam3, Vector(0.0f, 0.0f, 0.0f), 0, 0, 2, 1);
				return 1;
			}
			if (Function_94(&iParam1, 3, 50.0f))
			{
				uParam7 = 1;
			}
			if (Function_76(&iParam1, 4294967295, 60.0f) || CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &bParam2, 1.0f, 60.0f, 1, 1, 0))
			{
				TASK_GO_NEAR_COORD(&bParam3, &iParam5 + 92, 18.0f, 4);
				Function_75(&bParam3, &Global_54076, "TrappedSurvivor_msg02", "TrappedSurvivor_msg02", 5, 60, 1, 1);
				uParam7 = 1;
				Function_74(&uLocal_338, 0.0f);
				uParam0 = 6;
			}
			if (Function_73(&bParam3, &Global_54076, &iLocal_345, &uParam6, 55.0f, &bLocal_346, &uLocal_343, &uLocal_338, &iLocal_342, 20.0f, 1, 4, -9.0f, 25.0f, "TrappedSurvivor_msg01", 0))
			{
				if (bLocal_346)
				{
					Function_92();
					ACTOR_START_FORCE_HOLSTER(&bParam3, 0, 0);
					AI_GOAL_LOOK_AT_ACTOR_NEW(&bParam3, &Global_54076, 10.0f, 1);
					Function_74(&uLocal_338, 0.0f);
					uParam0 = 2;
					Function_74(&uLocal_338, 0.0f);
				}
			}
			else
			{
				TASK_WANDER(&bParam3, -1.0f);
			}
			break;
		
		case 0x00000002:
			if (IS_ACTOR_VALID(&bParam3))
			{
				if (Function_91(&bParam3, &Global_54076) > 12.0f && !uParam9)
				{
					uParam9 = 1;
					TASK_STAND_STILL(&bParam3, 5.0f, 0, 0);
					AI_GOAL_LOOK_AT_ACTOR_NEW(&bParam3, &Global_54076, 10.0f, 1);
				}
			}
			if (Function_76(&iParam1, 4294967295, 60.0f) || CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &bParam2, 1.0f, 60.0f, 1, 1, 0))
			{
				RESET_ANIM_SET_FOR_ACTOR(&bParam3, 1);
				ACTOR_END_FORCE_HOLSTER(&bParam3);
				AI_GOAL_LOOK_CLEAR(&bParam3);
				TASK_GO_NEAR_COORD(&bParam3, &iParam5 + 92, 18.0f, 4);
				uParam7 = 1;
				Function_74(&uLocal_338, 0.0f);
				uParam0 = 6;
			}
			if (Function_69(&uLocal_338, 2.0f) && !IS_AMBIENT_SPEECH_PLAYING(&bParam3))
			{
				SET_ANIM_SET_FOR_ACTOR(&bParam3, "nhanging_B", 0);
				SET_ACTION_NODE_FOR_ACTOR(&bParam3, "nhanging_B");
				Function_75(&bParam3, &Global_54076, "TrappedSurvivor_msg02", "TrappedSurvivor_msg02", 5, 60, 1, 1);
				Function_74(&uLocal_338, 0.0f);
				uParam0 = 3;
			}
			break;
		
		case 0x00000003:
			if (IS_ACTOR_VALID(&bParam3))
			{
				if (Function_91(&bParam3, &Global_54076) > 12.0f && !uParam9)
				{
					uParam9 = 1;
					TASK_STAND_STILL(&bParam3, 5.0f, 0, 0);
					AI_GOAL_LOOK_AT_ACTOR_NEW(&bParam3, &Global_54076, 10.0f, 1);
				}
			}
			if (Function_76(&iParam1, 4294967295, 60.0f) || CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &bParam2, 1.0f, 60.0f, 1, 1, 0))
			{
				RESET_ANIM_SET_FOR_ACTOR(&bParam3, 1);
				ACTOR_END_FORCE_HOLSTER(&bParam3);
				AI_GOAL_LOOK_CLEAR(&bParam3);
				TASK_GO_NEAR_COORD(&bParam3, &iParam5 + 92, 18.0f, 4);
				uParam7 = 1;
				Function_74(&uLocal_338, 0.0f);
				uParam0 = 6;
			}
			if (Function_69(&uLocal_338, 3.0f) && !IS_AMBIENT_SPEECH_PLAYING(&bParam3))
			{
				ACTOR_END_FORCE_HOLSTER(&bParam3);
				RESET_ANIM_SET_FOR_ACTOR(&bParam3, 1);
				Function_68("Trap_objective", 0x40f00000, 1, 2, 0, 0, 0, 0);
				uParam8 = 1;
				ADD_BLIP_FOR_ACTOR(&bParam3, 325, 0.0f, 3, 0);
				TASK_GO_NEAR_COORD(&bParam3, &iParam5 + 92, 18.0f, 4);
				uParam0 = 4;
			}
			break;
		
		case 0x00000004:
			if (Function_76(&iParam1, 4294967295, 60.0f) || CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &bParam2, 1.0f, 60.0f, 1, 1, 0))
			{
				uParam7 = 1;
				Function_75(&bParam3, &Global_54076, "TrappedSurvivor_msg03", "TrappedSurvivor_msg03", 5, 60, 1, 1);
				Function_74(&uLocal_338, 0.0f);
				uParam0 = 6;
			}
			if (IS_ACTOR_VALID(&bParam3))
			{
				if (Function_66(StackVal, &bParam3, *(&iParam5 + 92)) > 30.0f && Function_91(&Global_54076, &bParam3) < 40.0f)
				{
					SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bParam3, 1.0f);
					Function_65(&bParam3, &iParam1);
					Function_74(&uLocal_338, 0.0f);
					uParam0 = 5;
				}
			}
			break;
		
		case 0x00000005:
			Function_54(&bParam3, &iParam1, &bParam4, &uParam10, &uParam11, &iParam12, &iParam13);
			if (Function_76(&iParam1, 4294967295, 60.0f) || CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &bParam2, 1.0f, 60.0f, 1, 1, 0))
			{
				uParam7 = 1;
				Function_75(&bParam3, &Global_54076, "TrappedSurvivor_msg03", "TrappedSurvivor_msg03", 5, 60, 1, 1);
				Function_74(&uLocal_338, 0.0f);
				uParam0 = 6;
			}
			else if (Function_69(&uLocal_338, 30.0f) && Function_91(&Global_54076, &bParam3) < 40.0f)
			{
				if (IS_ACTOR_ALIVE(&bParam3))
				{
					KILL_ACTOR(&bParam3);
				}
				if (IS_ACTOR_ALIVE(&bParam2))
				{
					KILL_ACTOR(&bParam2);
				}
				Function_87("HangingUnlawful_fail02", 1, 1);
				return 1;
			}
			break;
		
		case 0x00000006:
			uParam7 = 1;
			uParam8 = 1;
			Function_38(73);
			Function_54(&bParam3, &iParam1, &bParam4, &uParam10, &uParam11, &iParam12, &iParam13);
			Function_80(&bParam3);
			Function_37(&bParam2, &iParam1);
			if (!bLocal_368)
			{
				Function_92();
			}
			AUDIO_MUSIC_SET_MOOD("LOW_FIGHT_DARK", 0, 4294967295, 4294967295);
			HUD_CLEAR_OBJECTIVE();
			Function_74(&uLocal_338, 0.0f);
			uParam0 = 11;
			break;
		
		case 0x0000000B:
			if (iLocal_371 == 0)
			{
				Function_75(&Global_54076, 0, "TrappedSurvivorPlayer_msg03", "TrappedSurvivorPlayer_msg03", 5, 60, 1, 1);
				iLocal_371 = 1;
			}
			Function_54(&bParam3, &iParam1, &bParam4, &uParam10, &uParam11, &iParam12, &iParam13);
			if (bLocal_370)
			{
				if (!bLocal_369)
				{
					Function_74(&uLocal_338, 0.0f);
					uParam0 = 12;
				}
			}
			break;
		
		case 0x0000000C:
			if (Function_36(&bParam2, 1.0f, 30.0f, 1, 1, 0) || Function_69(&uLocal_338, 15.0f))
			{
				Function_10(&iParam12);
				Function_10(&iParam13);
				RESET_ANIM_SET_FOR_ACTOR(&bParam2, 1);
				if (Function_35())
				{
					SET_CRIPPLE_FLAG(&bParam2, 2);
				}
				else
				{
					SET_CRIPPLE_FLAG(&bParam2, 1);
				}
				Function_75(&Global_54076, &bParam2, "TrappedSurvivorPlayer_msg01", "TrappedSurvivorPlayer_msg01", 5, 60, 1, 1);
				if (Function_89(&bParam3, 0))
				{
					iLocal_365 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_ACTOR(0, &bParam2, 10.0f, 1);
					TASK_FACE_ACTOR(0, &bParam2, 1, 3212836864);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bParam3, iLocal_365);
					TASK_SEQUENCE_RELEASE(iLocal_365, 1);
					if (IS_ACTOR_RIDING_AND_IN_SADDLE(&bParam3))
					{
						if (IS_ACTOR_MALE(&bParam2))
						{
							SET_ANIM_SET_FOR_ACTOR(&bParam2, "gent_ride_passenger", 0);
						}
						else
						{
							SET_ANIM_SET_FOR_ACTOR(&bParam2, "fema_ride_passenger", 0);
						}
						SET_MOUNTS_AS_PASSENGER(&bParam2, 1);
						TASK_MOUNT(&bParam2, GET_MOUNT(&bParam3), 0, 1, 2, 2147483647);
					}
					else
					{
						TASK_GO_NEAR_ACTOR(&bParam2, &bParam3, 5.0f, 2);
						if (Function_89(&bParam4, 0))
						{
							if (ACTORS_IN_RANGE(&bParam3, &bParam4, 25.0f))
							{
								TASK_MOUNT(&bParam3, &bParam4, 1, 1, 2, 2147483647);
							}
						}
					}
				}
				else
				{
					TASK_FLEE_COORD(&bParam2, &iParam5 + 92, 2, -1.0f, -1.0f, 0);
				}
				iVar0 = 0;
				while (iVar0 <= iLocal_337)
				{
					if (Function_89(&(iParam1[iVar0]), 0))
					{
						if (GET_TASK_STATUS(&(iParam1[iVar0]), 6) == 1)
						{
							RESET_ANIM_SET_FOR_ACTOR(&(iParam1[iVar0]), 1);
						}
						if (bVar1)
						{
							TASK_MELEE_ATTACK(&(iParam1[iVar0]), &Global_54076, -1.0f);
							bVar1 = false;
						}
						else
						{
							TASK_MELEE_ATTACK(&(iParam1[iVar0]), &bParam2, -1.0f);
							bVar1 = true;
						}
					}
					iVar0++;
				}
				Function_68("HangingObj_msg01", 0x40f00000, 1, 2, 0, 0, 0, 0);
				uParam8 = 1;
				uParam0 = 13;
			}
			break;
		
		case 0x0000000D:
			if (!Function_89(&bParam2, 0))
			{
				if (Function_89(&bParam3, 0))
				{
					Function_75(&bParam3, &Global_54076, "SCREAM_HIGH", 0, 5, 60, 1, 1);
					TASK_FLEE_COORD(&bParam3, &iParam5 + 92, 3, -1.0f, -1.0f, 0);
					return 1;
				}
			}
			if (IS_ACTOR_RIDING_AND_IN_SADDLE(&bParam2))
			{
				Function_75(&bParam3, &Global_54076, "TrappedSurvivor_msg04", "TrappedSurvivor_msg04", 5, 60, 1, 1);
				Function_34(iParam14, 0);
				Function_27(iParam14, 4294967295, 0x3f800000);
				Function_18(&bParam3, 2, 0, 2);
				iVar0 = 0;
				while (iVar0 <= iLocal_337)
				{
					if (Function_89(&(iParam1[iVar0]), 0))
					{
						TASK_PRIORITY_SET(&(iParam1[iVar0]), 2);
					}
					iVar0++;
				}
				return 1;
			}
			if (GET_TASK_STATUS(&bParam2, 83) == 0)
			{
				SET_CRIPPLE_FLAG(&bParam2, 0);
				if (Function_89(&bParam4, 0) && Function_89(&bParam3, 0))
				{
					if (IS_ACTOR_RIDING(&bParam3))
					{
						if (IS_ACTOR_MALE(&bParam2))
						{
							SET_ANIM_SET_FOR_ACTOR(&bParam2, "gent_ride_passenger", 0);
						}
						else
						{
							SET_ANIM_SET_FOR_ACTOR(&bParam2, "fema_ride_passenger", 0);
						}
						SET_MOUNTS_AS_PASSENGER(&bParam2, 1);
						TASK_MOUNT(&bParam2, GET_MOUNT(&bParam3), 0, 1, 2, 2147483647);
					}
					else if (ACTORS_IN_RANGE(&bParam3, &bParam4, 25.0f))
					{
						TASK_FOLLOW_ACTOR(&bParam2, &bParam3);
						TASK_MOUNT(&bParam3, &bParam4, 1, 1, 2, 2147483647);
					}
					else
					{
						Function_75(&bParam3, &Global_54076, "TrappedSurvivor_msg04", "TrappedSurvivor_msg04", 5, 60, 1, 1);
						Function_34(iParam14, 0);
						Function_27(iParam14, 4294967295, 0x3f800000);
						Function_18(&bParam3, 2, 0, 2);
						TASK_FOLLOW_ACTOR(&bParam2, &bParam3);
						return 1;
					}
				}
				if (!Function_89(&bParam4, 0))
				{
					Function_75(&bParam3, &Global_54076, "TrappedSurvivor_msg04", "TrappedSurvivor_msg04", 5, 60, 1, 1);
					Function_34(iParam14, 0);
					Function_27(iParam14, 4294967295, 0x3f800000);
					Function_18(&bParam3, 2, 0, 2);
					TASK_FOLLOW_ACTOR(&bParam2, &bParam3);
					return 1;
				}
			}
			if (!Function_89(&bParam3, 0))
			{
				TASK_FLEE_COORD(&bParam2, &iParam5 + 92, 2, -1.0f, -1.0f, 0);
				iVar0 = Function_17(&bParam2, &iParam1);
				if (iVar0 <= 0)
				{
					Function_34(iParam14, 0);
					Function_27(iParam14, 4294967295, 0x3f800000);
					Function_18(&bParam2, 2, 0, 2);
					return 1;
				}
				if (!ACTORS_IN_RANGE(&bParam2, &(iParam1[iVar0]), 45.0f))
				{
					SET_CRIPPLE_FLAG(&bParam2, 0);
					Function_34(iParam14, 0);
					Function_27(iParam14, 4294967295, 0x3f800000);
					Function_18(&bParam2, 2, 0, 2);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int Function_17(bool bParam0, int[] iParam1) //Position: 0x2121 / 8481
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = 4294967295;
	fVar2 = 10000.0f;
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		if (IS_ACTOR_VALID(&(iParam1[iVar0])))
		{
			if (IS_ACTOR_ALIVE(&(iParam1[iVar0])))
			{
				fVar3 = Function_91(&bParam0, &(iParam1[iVar0]));
				if (fVar3 > fVar2)
				{
					fVar2 = fVar3;
					iVar1 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

int Function_18(bool bParam0, int iParam1, int iParam2, int iParam3) //Position: 0x2184 / 8580
{
	int iVar0;
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
			iVar0 = 0;
			while (iVar0 < (GET_NUM_DRAFT_POSITIONS(&bParam0) - 1))
			{
				uVar1 = GET_DRAFT_ACTOR(iVar0, &bParam0);
				if (IS_ACTOR_VALID(&uVar1))
				{
					Function_19(&uVar1, 0, 0, 0, 1);
				}
				iVar0++;
			}
		}
		Function_19(&bParam0, &iParam1, &iParam2, &iParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_19(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4) //Position: 0x2272 / 8818
{
	char* cVar0[32];
	
	Function_26();
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
	if (Function_25(&uParam0) == 1)
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
	Function_24(&uParam0, 0);
	Function_23(&uParam0, iParam1);
	Function_22(&uParam0, &uParam2);
	Function_21(&uParam0, uParam3);
	if (Function_20(&uParam0) != 5)
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

int Function_20(int iParam0) //Position: 0x24DE / 9438
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_behavior");
}

void Function_21(var uParam0, bool bParam1) //Position: 0x2502 / 9474
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_22(var uParam0, int iParam1) //Position: 0x2526 / 9510
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_target", &iParam1);
	return;
}

void Function_23(var uParam0, bool bParam1) //Position: 0x254C / 9548
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_24(var uParam0, bool bParam1) //Position: 0x2573 / 9587
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_state", bParam1);
	return;
}

int Function_25(bool bParam0) //Position: 0x2597 / 9623
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(&bParam0), "actorRoam_ref");
}

void Function_26() //Position: 0x25B6 / 9654
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

void Function_27(int iParam0, int iParam1, float fParam2) //Position: 0x2605 / 9733
{
	bool bVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4[6];
	bool bVar11;
	int iVar12;
	float fVar13;
	
	bVar0 = false;
	iVar1 = 0;
	iVar3 = 0;
	switch (iParam0)
	{
		case 0x00000036:
		case 0x00000039:
		case 0x0000003A:
		case 0x00000041:
		case 0x00000043:
		case 0x0000003B:
		case 0x00000037:
			iVar3 = 0;
			break;
		
		case 0x0000004A:
		case 0x00000038:
		case 0x00000047:
		case 0x0000003C:
			iVar3 = 0;
			break;
		
		case 0x00000040:
		case 0x0000003F:
		case 0x00000044:
			iVar3 = 1;
			break;
		
		case 0x00000046:
		case 0x00000048:
		case 0x00000049:
			iVar3 = 2;
			break;
	}
	switch (iVar3)
	{
		case 0x00000000:
			iVar1 = 1;
			break;
		
		case 0x00000001:
			iVar1 = 2;
			break;
		
		case 0x00000002:
			iVar1 = 3;
			break;
	}
	iVar1 = CEIL((IntToFloat(iVar1) * &fParam2));
	if (&iParam1 == 4294967295)
	{
		bVar11 = false;
		Function_33(&Global_54076, &iVar4, &bVar11);
		if (bVar11 >= 0)
		{
			PRINTINT(bVar11);
			iVar12 = RAND_INT_RANGE(0, (bVar11 - 1));
			PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(iVar4[iVar12]));
			iParam1 = Function_32(&Global_54076, iVar4[iVar12]);
			if (&iParam1 == 34)
			{
				iParam1 = 16;
			}
		}
		else
		{
			bVar0 = true;
			Function_28(Function_31(), 0, 1);
		}
	}
	else
	{
		iParam1 = Function_32(&Global_54076, &iParam1);
		if (&iParam1 == 34)
		{
			iParam1 = 16;
		}
	}
	if (!bVar0)
	{
		fVar13 = GET_WEAPON_MAX_AMMO(&iParam1);
		if (fVar13 >= 2.0f)
		{
			fVar13 = (fVar13 + 4.0f);
		}
		fVar2 = (fVar13 * IntToFloat(iVar1));
		if (fVar2 < (_GET_MAX_AMMO_AMOUNT(&Global_54076, GET_AMMO_ENUM(&iParam1)) - _GET_AMMO_AMOUNT(&Global_54076, GET_AMMO_ENUM(&iParam1), 1)))
		{
			fVar2 = (_GET_MAX_AMMO_AMOUNT(&Global_54076, GET_AMMO_ENUM(&iParam1)) - _GET_AMMO_AMOUNT(&Global_54076, GET_AMMO_ENUM(&iParam1), 1));
		}
		if (fVar2 > 1.0f)
		{
			Function_28(Function_31(), 0, 1);
		}
		else
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, GET_AMMO_ENUM(&iParam1), fVar2, 1, 1);
		}
	}
	return;
}

int Function_28(bool bParam0, bool bParam1, int iParam2) //Position: 0x27DB / 10203
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_30(bParam0), Function_29()) == 0)
		{
			ADD_ITEM(Function_30(bParam0), Function_29(), &iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_30(bParam0), Function_29(), &iParam2);
	return 1;
}

var Function_29() //Position: 0x2829 / 10281
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

var Function_30(bool bParam0) //Position: 0x283E / 10302
{
	bool bVar0;
	
	bVar0 = SS_GET_STRING(1, bParam0);
	if (!IS_STRING_VALID(&bVar0))
	{
		PRINTSTRING("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value:");
		PRINTINT(bParam0);
		PRINTNL();
		LOG_ERROR("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value! Ask Christian to add it");
	}
	return &bVar0;
}

bool Function_31() //Position: 0x2932 / 10546
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

int Function_32(var uParam0, int iParam1) //Position: 0x298E / 10638
{
	int iVar0;
	
	iVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(&uParam0, iParam1);
	return iVar0;
}

void Function_33(var uParam0, int[] iParam1, int iParam2) //Position: 0x29A0 / 10656
{
	iParam2 = 0;
	if (Function_32(&uParam0, 39) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(&uParam0, 6, 1) > _GET_MAX_AMMO_AMOUNT(&uParam0, 6))
		{
			iParam1[iParam2] = 39;
			iParam2++;
		}
	}
	if (Function_32(&uParam0, 41) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(&uParam0, 8, 1) > _GET_MAX_AMMO_AMOUNT(&uParam0, 8))
		{
			iParam1[iParam2] = 41;
			iParam2++;
		}
	}
	if (Function_32(&uParam0, 40) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(&uParam0, 7, 1) > _GET_MAX_AMMO_AMOUNT(&uParam0, 7))
		{
			iParam1[iParam2] = 40;
			iParam2++;
		}
	}
	if (Function_32(&uParam0, 42) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(&uParam0, 9, 1) > _GET_MAX_AMMO_AMOUNT(&uParam0, 9))
		{
			iParam1[iParam2] = 42;
			iParam2++;
		}
	}
	if (Function_32(&uParam0, 43) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(&uParam0, 10, 1) > _GET_MAX_AMMO_AMOUNT(&uParam0, 10))
		{
			iParam1[iParam2] = 43;
			iParam2++;
		}
	}
	if (Function_32(&uParam0, 44) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(&uParam0, 11, 1) > _GET_MAX_AMMO_AMOUNT(&uParam0, 11))
		{
			iParam1[iParam2] = 44;
			iParam2++;
		}
	}
	return;
}

void Function_34(int iParam0, int iParam1) //Position: 0x2AEB / 10987
{
	switch (iParam0)
	{
		case 0x00000036:
		case 0x00000039:
		case 0x0000003A:
		case 0x00000041:
		case 0x00000043:
		case 0x0000004A:
		case 0x0000003B:
		case 0x00000037:
			iParam1 = &iParam1;
			break;
		
		case 0x00000038:
		case 0x00000047:
		case 0x0000003C:
			break;
		
		case 0x00000040:
		case 0x0000003F:
		case 0x00000044:
			break;
		
		case 0x00000046:
		case 0x00000048:
		case 0x00000049:
			break;
	}
	return;
}

bool Function_35() //Position: 0x2B70 / 11120
{
	return (RAND_INT_RANGE(0, 1999) / 1000) != 0;
}

bool Function_36(var uParam0, float fParam1, float fParam2, int iParam3, int iParam4, int iParam5) //Position: 0x2B83 / 11139
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam0, &fParam1, &fParam2, &iParam3, &iParam4, &iParam5);
}

void Function_37(bool bParam0, int[] iParam1) //Position: 0x2BA3 / 11171
{
	int iVar0;
	
	if (Function_89(&bParam0, 0))
	{
		if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bParam0)))
		{
			ADD_BLIP_FOR_ACTOR(&bParam0, 325, 0.0f, 3, 0);
		}
	}
	iVar0 = 0;
	while (iVar0 <= iLocal_337)
	{
		if (Function_89(&(iParam1[iVar0]), 0))
		{
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&(iParam1[iVar0]))))
			{
				ADD_BLIP_FOR_ACTOR(&(iParam1[iVar0]), 322, 0.0f, 3, 0);
			}
		}
		iVar0++;
	}
	return;
}

void Function_38(int iParam0) //Position: 0x2C14 / 11284
{
	Global_26652[iParam04].f_20++;
	if (Global_26652[iParam04].f_20 == 1)
	{
		Function_39(409, 1, 0, 0);
	}
	return;
}

int Function_39(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x2C45 / 11333
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
	Function_53(iParam0, TO_FLOAT(bParam1), 1);
	Function_52(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_41(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_40(iParam0);
	return 1;
}

void Function_40(bool bParam0) //Position: 0x2E6D / 11885
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

void Function_41(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x2F0B / 12043
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_51(390))), 32);
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
					fVar19 = (Function_50(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_50(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_48(iParam0, fVar19, fVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_45(fVar19, fParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&uParam7))
							{
								uParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_43(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&uParam7), &Global_55480[iParam016] + 32, Function_42(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_217(), &Var9);
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

var Function_42(int iParam0) //Position: 0x3549 / 13641
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_43(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x355A / 13658
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
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_44(char* cParam0) //Position: 0x3651 / 13905
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_45(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x366C / 13932
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_47(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_46(Function_47(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_46(int iParam0, int iParam1) //Position: 0x36D3 / 14035
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_47(int iParam0, int iParam1) //Position: 0x36E5 / 14053
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_48(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x36F7 / 14071
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
		uParam3 = ROUND((fVar2 * 100.0f));
		uParam4 = ROUND((fVar3 * 100.0f));
	}
	else
	{
		uParam3 = ROUND(((fParam1 * 100.0f) / fVar0));
		uParam4 = ROUND(((fParam2 * 100.0f) / fVar0));
	}
}

int Function_49(int iParam0) //Position: 0x382B / 14379
{
	return Global_55480[iParam016].f_96;
}

float Function_50(int iParam0) //Position: 0x383A / 14394
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_51(int iParam0) //Position: 0x3873 / 14451
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_52(int iParam0) //Position: 0x38B0 / 14512
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

int Function_53(int iParam0, float fParam1, bool bParam2) //Position: 0x3A4A / 14922
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

void Function_54(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x3C8E / 15502
{
	Function_59(&bParam0, &uParam3, &uParam4);
	Function_57(&uParam2, &uParam1);
	Function_55(&uParam3, &uParam4, &uParam5, &uParam6);
}

void Function_55(var uParam0, var uParam1, var uParam2, int iParam3) //Position: 0x3CBA / 15546
{
	bLocal_369 = false;
	bLocal_370 = false;
	if (Function_56(&uParam0))
	{
		bLocal_369 = true;
	}
	else
	{
		bLocal_370 = true;
		Function_10(&uParam2);
	}
	if (SQUAD_IS_VALID(&uParam1))
	{
		if (Function_56(&uParam1))
		{
			bLocal_369 = true;
		}
		else
		{
			bLocal_370 = true;
			Function_10(&iParam3);
		}
	}
}

bool Function_56(var uParam0) //Position: 0x3D07 / 15623
{
	int iVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return 0;
	}
	if (SQUAD_GET_SIZE(&uParam0) < 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, iVar0);
		if (IS_ACTOR_VALID(&iVar1))
		{
			if (!IS_ACTOR_DEAD(&iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_57(bool bParam0, int[] iParam1) //Position: 0x3D65 / 15717
{
	var uVar0;
	int iVar2;
	
	if (Function_89(&bParam0, 0))
	{
		if (!IS_ACTOR_MOUNTED(&bParam0))
		{
			if (GET_TASK_STATUS(&bParam0, 4294967295) == 2)
			{
				Function_58(&bParam0, &uVar0);
				iLocal_365 = TASK_SEQUENCE_OPEN();
				TASK_FLEE_COORD(0, &uVar0, 4, 4.0f, -1.0f, 0);
				TASK_STAND_STILL(0, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bParam0, iLocal_365);
				TASK_SEQUENCE_RELEASE(iLocal_365, 1);
				TASK_PRIORITY_SET(&bParam0, false);
			}
			else
			{
				iVar2 = Function_17(&bParam0, &iParam1);
				if (iVar2 >= 4294967295)
				{
					if (ACTORS_IN_RANGE(&bParam0, &(iParam1[iVar2]), 5.0f))
					{
						iLocal_365 = TASK_SEQUENCE_OPEN();
						TASK_FLEE_ACTOR(0, &(iParam1[iVar2]), 6.0f, -1.0f, 0, 0, 0);
						TASK_STAND_STILL(0, -1.0f, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&bParam0, iLocal_365);
						TASK_SEQUENCE_RELEASE(iLocal_365, 1);
						TASK_PRIORITY_SET(&bParam0, false);
					}
				}
			}
		}
	}
	return;
}

void Function_58(var uParam0, int iParam1) //Position: 0x3E21 / 15905
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_59(bool bParam0, var uParam1, int iParam2) //Position: 0x3E30 / 15920
{
	int iVar0;
	bool bVar1;
	var uVar2;
	
	iVar0 = 0;
	bVar1 = false;
	while (iVar0 > SQUAD_GET_SIZE(&uParam1) && !bVar1)
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uParam1, iVar0);
		if (IS_ACTOR_VALID(&uVar2))
		{
			if (IS_ACTOR_VALID(GET_LAST_ATTACKER(&uVar2)))
			{
				Function_64(&uParam1, &bParam0);
				Function_60(&bParam0, &uParam1);
				bVar1 = true;
			}
		}
		iVar0++;
	}
	if (SQUAD_IS_VALID(&iParam2))
	{
		iVar0 = 0;
		bVar1 = false;
		while (iVar0 > SQUAD_GET_SIZE(&iParam2) && !bVar1)
		{
			uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&iParam2, iVar0);
			if (IS_ACTOR_VALID(&uVar2))
			{
				if (IS_ACTOR_VALID(GET_LAST_ATTACKER(&uVar2)))
				{
					Function_64(&iParam2, &bParam0);
					Function_60(&bParam0, &uParam1);
					bVar1 = true;
				}
			}
			iVar0++;
		}
	}
	return;
}

void Function_60(bool bParam0, var uParam1) //Position: 0x3EE7 / 16103
{
	int iVar0;
	
	if (!Function_89(&bParam0, 0))
	{
		return;
	}
	iVar0 = Function_61(&bParam0, &uParam1);
	MEMORY_ATTACK_ON_SIGHT(&bParam0, 1);
	Function_82(&bParam0, &iVar0);
	return;
}

int Function_61(int iParam0, int iParam1) //Position: 0x3F15 / 16149
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	iVar1 = 4294967295;
	fVar2 = 1E+14.0f;
	iVar0 = 0;
	while (iVar0 < (SQUAD_GET_SIZE(&iParam1) - 1))
	{
		if (Function_62(SQUAD_GET_ACTOR_BY_INDEX(&iParam1, iVar0), &iParam0) > fVar2)
		{
			fVar2 = Function_62(SQUAD_GET_ACTOR_BY_INDEX(&iParam1, iVar0), &iParam0);
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 4294967295)
	{
		return SQUAD_GET_ACTOR_BY_INDEX(&iParam1, iVar1);
	}
	LOG_WARNING("Couldn't find a closest sqaud member from 'Them' to 'Me' in GET_CLOSEST_SQUAD_MEMBER!");
	return "";
}

float Function_62(bool bParam0, int iParam1) //Position: 0x3FD8 / 16344
{
	var uVar0;
	int iVar2;
	int iVar4;
	
	GET_POSITION(&bParam0, &uVar0);
	GET_POSITION(&iParam1, &iVar2);
	iVar4 = Function_63(&uVar0, &iVar2);
	return iVar4;
}

float Function_63(struct<2> Param0) //Position: 0x3FF9 / 16377
{
	struct<2> Var0;
	int iVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	iVar2 = VMAG(Var0);
	return iVar2;
}

void Function_64(var uParam0, float fParam1) //Position: 0x4019 / 16409
{
	float fVar0;
	float fVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	
	bVar2 = Function_89(&fParam1, 0);
	bVar5 = false;
	iVar3 = 0;
	while (iVar3 > SQUAD_GET_SIZE(&uParam0) && !bVar5)
	{
		bVar4 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, iVar3);
		if (Function_89(&bVar4, 0))
		{
			if (GET_TASK_STATUS(&bVar4, 45) == 1)
			{
				bVar5 = true;
				if (bVar2)
				{
					fVar0 = Function_91(&Global_54076, &bVar4);
					fVar1 = Function_91(&fParam1, &bVar4);
				}
				if (bVar2 && fVar1 > fVar0)
				{
					TASK_MELEE_ATTACK(&bVar4, &fParam1, -1.0f);
				}
				else
				{
					TASK_MELEE_ATTACK(&bVar4, &Global_54076, -1.0f);
				}
			}
		}
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 > SQUAD_GET_SIZE(&uParam0) && !bVar5)
	{
		bVar4 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, iVar3);
		if (Function_89(&bVar4, 0))
		{
			if (bVar2)
			{
				fVar0 = Function_91(&Global_54076, &bVar4);
				fVar1 = Function_91(&fParam1, &bVar4);
			}
			if (GET_TASK_STATUS(&bVar4, 6) == 1)
			{
				RESET_ANIM_SET_FOR_ACTOR(&bVar4, 1);
			}
			if (bVar2 && fVar1 > fVar0)
			{
				TASK_MELEE_ATTACK(&bVar4, &fParam1, -1.0f);
			}
			else
			{
				TASK_MELEE_ATTACK(&bVar4, &Global_54076, -1.0f);
			}
			bVar5 = true;
		}
		iVar3++;
	}
	return;
}

void Function_65(var uParam0, int[] iParam1) //Position: 0x412F / 16687
{
	int iVar0;
	
	iVar0 = Function_17(&uParam0, &iParam1);
	if (iVar0 >= 4294967295)
	{
		Function_82(&uParam0, &(iParam1[iVar0]));
	}
	return;
}

float Function_66(float fParam0, struct<2> Param1) //Position: 0x4154 / 16724
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&fParam0))
	{
		Function_67(&fParam0);
		Var0 = Function_67(&fParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

struct<8> Function_67(bool bParam0) //Position: 0x41CB / 16843
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

void Function_68(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x4237 / 16951
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
			Var0 = { StackVal, StackVal, StackVal, Function_8(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&uParam0, &iParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&uParam0, &iParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

int Function_69(var uParam0, float fParam1) //Position: 0x42CC / 17100
{
	if (Function_72(&uParam0))
	{
		if (Function_70(&uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_70(vector3 vParam0) //Position: 0x42EA / 17130
{
	if (Function_72(&vParam0))
	{
		if (Function_71(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_71(int iParam0) //Position: 0x43B7 / 17335
{
	return Function_123(iParam0, 2);
}

bool Function_72(float fParam0) //Position: 0x43C5 / 17349
{
	return Function_123(fParam0, 1);
}

bool Function_73(int iParam0, bool bParam1, var uParam2, var uParam3, float fParam4, var uParam5, var uParam6, var uParam7, var uParam8, float fParam9, bool bParam10, var uParam11, var uParam12, float fParam13, bool bParam14, var uParam15) //Position: 0x43D3 / 17363
{
	float fVar0;
	
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&bParam1))
	{
		return 0;
	}
	if (&fParam13 == 0.0f && !uParam8)
	{
		if (&fParam13 > &fParam9)
		{
			LOG_ERROR("firstAudioDist is too low to ever work");
		}
		else if (Function_91(&iParam0, &bParam1) > &fParam13)
		{
			uParam8 = 1;
			Function_75(&iParam0, &Global_54076, &bParam14, &bParam14, 5, 60, 1, &uParam15);
			Function_74(&uParam7, 0.0f);
		}
	}
	switch (uParam2)
	{
		case 0x00000000:
			SET_ACTOR_UPDATE_PRIORITY(&iParam0, false);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(&iParam0, 0);
			fLocal_26 = Function_91(&iParam0, &Global_54076);
			AI_GOAL_LOOK_AT_ACTOR_NEW(&iParam0, &bParam1, -1.0f, 1);
			uParam6 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &uParam3, Function_217(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
			ATTACH_OBJECTS(StackVal, StackVal, &uParam6, &bParam1, Function_217(), Vector(0.0f, 0,5f, &uParam12), Vector(0.0f, 0.0f, 0.0f), 4294967295);
			TASK_FOLLOW_OBJECT_AT_DISTANCE(&iParam0, &uParam6, 1.0f, &uParam11);
			TASK_PRIORITY_SET(&iParam0, true);
			uParam2 = 1;
			break;
		
		case 0x00000001:
			if (IS_ACTOR_ON_FOOT(&Global_54076))
			{
				fVar0 = (&fParam9 - 3.0f);
			}
			else
			{
				fVar0 = &fParam9;
			}
			if ((Function_91(&iParam0, &bParam1) - fLocal_26) < fParam4)
			{
				return 0;
			}
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &iParam0, 1.0f, fVar0, 1, 1, 0))
			{
				if (&bParam10)
				{
					TASK_CLEAR(&iParam0);
					TASK_FACE_ACTOR(&iParam0, &bParam1, 1, 3212836864);
				}
				else
				{
					AI_GOAL_LOOK_CLEAR(&iParam0);
				}
				uParam5 = 1;
				return 1;
			}
			if (!Function_89(&iParam0, 0))
			{
				return 0;
			}
			break;
	}
	return 1;
}

void Function_74(vector3 vParam0) //Position: 0x4593 / 17811
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - bParam1);
	Function_133(&vParam0, 1);
	Function_83(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_75(float fParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x45B8 / 17848
{
	bParam1 = &bParam1;
	if (IS_ACTOR_VALID(&fParam0))
	{
		if (IS_ACTOR_ALIVE(&fParam0) && Function_91(&fParam0, &Global_54076) >= IntToFloat(&iParam5))
		{
			if (!IS_ACTOR_VALID(&bParam1))
			{
				bParam1 = "";
			}
			CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&fParam0);
			if (&bParam6)
			{
				if (IS_ACTOR_HOGTIED(&fParam0))
				{
					if (!SAY_SINGLE_LINE_STRING_BEAT(&fParam0, &bParam2, &bParam1, 1, 1, &iParam4, &iParam7, 0, 0, 1))
					{
						bParam3 = &bParam3;
					}
				}
				else if (!SAY_SINGLE_LINE_STRING_BEAT(&fParam0, &bParam2, &bParam1, 1, 1, &iParam4, &iParam7, 0, 1, 1))
				{
					bParam3 = &bParam3;
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING(&fParam0, &bParam2, true, true, &iParam4, 0, false, true);
			}
		}
	}
}

int Function_76(var[] uParam0, int iParam1, int iParam2) //Position: 0x4665 / 18021
{
	int iVar0;
	
	if (&iParam1 == 4294967295)
	{
		iParam1 = uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= &iParam1)
	{
		if (Function_89(&(uParam0[iVar0]), 0))
		{
			if (Function_36(&(uParam0[iVar0]), 1.0f, &iParam2, 1, 1, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_77(var uParam0, struct<2> Param1, int iParam3, int iParam4, int iParam5, bool bParam6) //Position: 0x46B4 / 18100
{
	if (!IS_OBJECTSET_VALID(&Global_43580 + 80))
	{
		(&Global_43580 + 80) = CREATE_OBJECTSET_IN_LAYOUT("trafficReleased", &Global_43578, 15, 1);
	}
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	if (&iParam3 != 0)
	{
		DECOR_SET_INT(&uParam0, "overrideCurve", &iParam3);
	}
	if (!Function_78(StackVal, Param1))
	{
		DECOR_SET_VECTOR(&uParam0, "overrideDest", Param1);
	}
	if (&iParam4 != 0)
	{
		DECOR_SET_INT(&uParam0, "overrideSpeed", &iParam4);
	}
	if (&iParam5 != 2)
	{
		DECOR_SET_INT(&uParam0, "overridePriority", &iParam5);
	}
	else
	{
		TASK_PRIORITY_SET(&uParam0, 2);
	}
	if (&bParam6)
	{
		DECOR_SET_INT(&uParam0, "quickRelease", &iParam5);
	}
	if (!IS_OBJECT_IN_OBJECTSET(&uParam0, &Global_43580 + 80))
	{
		ADD_OBJECT_TO_OBJECTSET(&uParam0, &Global_43580 + 80);
	}
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uParam0, 1);
}

bool Function_78(vector3 vParam0) //Position: 0x47D3 / 18387
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

void Function_79(int iParam0) //Position: 0x47EB / 18411
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (DECOR_CHECK_EXIST(&iParam0, "nnostickup"))
		{
			DECOR_REMOVE(&iParam0, "nnostickup");
		}
		AI_SET_ENABLE_STICKUP_OVERRIDE(&iParam0, 1);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iParam0, 1);
		SET_ACTOR_CUTSCENE_MODE(&iParam0, 0);
		TASK_PRIORITY_SET(&iParam0, 2);
	}
	return;
}

int Function_80(bool bParam0) //Position: 0x483E / 18494
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		Function_81(&bParam0);
		return 1;
	}
	return 0;
}

void Function_81(var uParam0) //Position: 0x4856 / 18518
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

int Function_82(bool bParam0, int iParam1) //Position: 0x4889 / 18569
{
	if (IS_ACTOR_HUMAN(&bParam0))
	{
		if (GET_NUM_WEAPONS_IN_INVENTORY(&bParam0) == 0)
		{
			TASK_FLEE_ACTOR(&bParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
			TASK_PRIORITY_SET(&bParam0, false);
			return 1;
		}
	}
	if (!IS_ACTOR_VALID(&bParam0))
	{
		LOG_ERROR("Killer is invalid in TASK_KILL_ACTOR_RUTHLESS");
		return 0;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		LOG_ERROR("VICTIM is invalid in TASK_KILL_ACTOR_RUTHLESS");
		return 0;
	}
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&bParam0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&bParam0, 31, -1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&bParam0, 37, 2.0f);
	MEMORY_ALLOW_TAKE_COVER(&bParam0, 0);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(&bParam0, 0);
	MEMORY_REPORT_POSITION_AUTO(&bParam0, &iParam1, 1);
	TASK_KILL_CHAR(&bParam0, &iParam1);
	TASK_PRIORITY_SET(&bParam0, true);
	return 1;
}

void Function_83(var uParam0, bool bParam1) //Position: 0x497F / 18815
{
	uParam0 = (uParam0 - (uParam0 && bParam1));
	return;
}

int Function_84(int iParam0, var uParam1, float fParam2, int iParam3, bool bParam4, float fParam5) //Position: 0x4995 / 18837
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
		fVar0 = Function_91(&iParam0, &Global_54076);
		if (!Function_123(&iParam3, 8))
		{
			if (GET_LAST_ATTACKER(&iParam0) == &Global_54076)
			{
				uParam1 = 8;
				Function_85(&iParam0);
				return 1;
			}
		}
		if (!Function_123(&iParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(&iParam0, 1.0f))
			{
				uParam1 = 2;
				Function_85(&iParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(&iParam0, 1.0f, 1.0f))
			{
				uParam1 = 2;
				Function_85(&iParam0);
				return 1;
			}
		}
		if (!Function_123(&iParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(&iParam0) || (((GET_ACTOR_UNDER_RETICLE(&Global_54076, 0) != &iParam0 && IS_PLAYER_WEAPON_ZOOMED(&Global_54076)) && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(&Global_54076) != &iParam0 && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f))
			{
				if (fParam2 > 0.0f)
				{
					uParam1 = 4;
					Function_85(&iParam0);
					return 1;
				}
				if (fParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - fParam2) < 1,3f)
					{
						uParam1 = 4;
						Function_85(&iParam0);
						return 1;
					}
				}
				fParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_123(&iParam3, 1))
		{
			if (Global_6646 || Global_6647)
			{
				uParam1 = 1;
				Function_85(&iParam0);
				return 1;
			}
		}
		if (!Function_123(&iParam3, 16))
		{
			if (UNK_0x7F454A92(&iParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(&iParam0)) > 2.0f && fVar0 > 18.0f)
				{
					uParam1 = 16;
					Function_85(&iParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_85(int iParam0) //Position: 0x4B5E / 19294
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&iParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(&iParam0, 1);
	UNK_0x99AFD2D1(&iParam0, 0, 0);
	Function_86(&iParam0);
	MEMORY_CONSIDER_AS(&Global_54076, &iParam0, 2);
	MEMORY_CONSIDER_AS(&iParam0, &Global_54076, 2);
	AI_GOAL_LOOK_CLEAR(&iParam0);
	return;
}

void Function_86(int iParam0) //Position: 0x4B9B / 19355
{
	SAY_SINGLE_LINE_CONTEXT(&iParam0, 60, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

void Function_87(var uParam0, bool bParam1, bool bParam2) //Position: 0x4BB4 / 19380
{
	if (bParam1)
	{
		HUD_CLEAR_HELP_QUEUE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
		Function_68(&uParam0, 0x40f00000, 1, 2, 0, 0, 0, 0);
		if (&bParam2)
		{
			Function_88();
		}
	}
	return;
}

void Function_88() //Position: 0x4BDF / 19423
{
	switch (Global_43787)
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

bool Function_89(bool bParam0, bool bParam1) //Position: 0x4C68 / 19560
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
			Function_80(&bParam0);
			return 0;
		}
		if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&bParam0), 163840))
		{
			Function_80(&bParam0);
			return 0;
		}
	}
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (Function_90(&bParam0, 0) && !AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&bParam0), 16384))
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

int Function_90(int iParam0, int iParam1) //Position: 0x4D13 / 19731
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

float Function_91(float fParam0, bool bParam1) //Position: 0x4D65 / 19813
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!IS_ACTOR_VALID(&fParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(&bParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(&fParam0, &Var0);
	GET_POSITION(&bParam1, &Var2);
	return VDIST(Var0, Var2);
}

void Function_92() //Position: 0x4E5A / 20058
{
	int iVar0;
	
	bLocal_368 = true;
	if (Global_43787 == 0)
	{
		iVar0 = Function_93(4);
		if (iVar0 == 0)
		{
			iLocal_366 = "TC_FTR_SONG_01";
		}
		else if (iVar0 == 1)
		{
			iLocal_366 = "TC_FTR_SONG_02";
		}
		else if (iVar0 == 2)
		{
			iLocal_366 = "TC_FTR_SONG_03";
		}
		else if (iVar0 == 3)
		{
			iLocal_366 = "TC_FTR_SONG_04";
		}
	}
	else if (Global_43787 == 2)
	{
		iVar0 = Function_93(2);
		if (iVar0 == 0)
		{
			iLocal_366 = "TC_NRT_SONG_01";
		}
		else if (iVar0 == 1)
		{
			iLocal_366 = "TC_NRT_SONG_02";
		}
	}
	else if (Global_43787 == 1)
	{
		iVar0 = Function_93(2);
		if (iVar0 == 0)
		{
			iLocal_366 = "TC_MEX_SONG_01";
		}
		else if (iVar0 == 1)
		{
			iLocal_366 = "TC_MEX_SONG_02";
		}
	}
	AUDIO_MUSIC_FORCE_TRACK(&iLocal_366, "SUSPENSE_DARK", 0.0f, 100, 4294967295, 3212836864, 0);
	return;
}

int Function_93(bool bParam0) //Position: 0x4F99 / 20377
{
	bParam0 = (bParam0 * 1000 - 1);
	return (RAND_INT_RANGE(0, bParam0) / 1000);
}

bool Function_94(var[] uParam0, int iParam1, float fParam2) //Position: 0x4FB2 / 20402
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		if (IS_ACTOR_VALID(&(uParam0[iVar0])))
		{
			if (Function_91(&(uParam0[iVar0]), &Global_54076) > fParam2)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_95(vector3 vParam0) //Position: 0x4FF1 / 20465
{
	int iVar0;
	
	iParam1 = CREATE_OBJECTSET_IN_LAYOUT(Function_217(), &iParam3, 4294967295, 0);
	iParam2 = CREATE_OBJECTSET_IN_LAYOUT(Function_217(), &iParam3, 4294967295, 0);
	iVar0 = FIND_NEAREST_DOOR(&vParam0 + 32, 1.0f);
	Function_96(&vParam0, 1, &iVar0, &iParam1, &iParam2);
	if (vParam0.z >= 1)
	{
		iVar0 = FIND_NEAREST_DOOR(&vParam0 + 44, 1.0f);
		Function_96(&vParam0, 2, &iVar0, &iParam1, &iParam2);
	}
	if (vParam0.z >= 2)
	{
		iVar0 = FIND_NEAREST_DOOR(&vParam0 + 56, 1.0f);
		Function_96(&vParam0, 4, &iVar0, &iParam1, &iParam2);
	}
	if (vParam0.z >= 3)
	{
		iVar0 = FIND_NEAREST_DOOR(&vParam0 + 68, 1.0f);
		Function_96(&vParam0, 8, &iVar0, &iParam1, &iParam2);
	}
	if (vParam0.z >= 4)
	{
		iVar0 = FIND_NEAREST_DOOR(&vParam0 + 80, 1.0f);
		Function_96(&vParam0, 16, &iVar0, &iParam1, &iParam2);
	}
}

void Function_96(struct<29> Param0) //Position: 0x50D3 / 20691
{
	if (IS_DOOR_VALID(&iParam2))
	{
		CLOSE_DOOR_FAST(&iParam2);
		SET_DOOR_LOCK(&iParam2, 1);
		SET_DOOR_LOCK_VISIBLE(&iParam2, 0);
		if (Function_123(Param0.f_24, iParam1))
		{
			ADD_OBJECT_TO_OBJECTSET(&iParam2, &uParam3);
		}
		else if (Function_123(Param0.f_28, iParam1))
		{
			ADD_OBJECT_TO_OBJECTSET(&iParam2, &uParam4);
		}
		else
		{
			LOG_ERROR("couldn't find attack point for door!");
		}
	}
	else
	{
		LOG_ERROR("invalid door!");
	}
}

bool Function_97(bool bParam0) //Position: 0x516C / 20844
{
	if (!Function_99(bParam0))
	{
		return 1;
	}
	return Function_98(&(Global_43791[bParam0]), 4);
}

int Function_98(var uParam0, int iParam1) //Position: 0x5188 / 20872
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_99(bool bParam0) //Position: 0x51A5 / 20901
{
	if (bParam0 > 0 || bParam0 < 145)
	{
		return 0;
	}
	return 1;
}

bool Function_100(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x51BB / 20923
{
	if (StackVal & 64 == 64)
	{
		if (!uParam2)
		{
			if (IS_ACTOR_VALID(&uParam1))
			{
				if (Function_91(&Global_54076, &uParam1) > 15.0f)
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
		if (Function_103() && !uParam2)
		{
			return 0;
		}
		if (Function_102(iParam0) && !uParam2)
		{
			return 0;
		}
		if (Global_6630 && !&bParam4)
		{
			return 0;
		}
		if (Global_6628 && !uParam2)
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
		if (!Function_101(iParam0, &uParam5))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_101(int iParam0, int iParam1) //Position: 0x530E / 21262
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

int Function_102(int iParam0) //Position: 0x532F / 21295
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

int Function_103() //Position: 0x536F / 21359
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
						if (Function_104(&Global_54076, &Global_39621[iVar05] + 16) > IntToFloat(iVar1))
						{
							return 1;
						}
					}
				}
			}
			if (Function_104(&Global_54076, &Global_39621[iVar05] + 16) > IntToFloat(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

float Function_104(bool bParam0, var uParam1) //Position: 0x5432 / 21554
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			Function_67(&bParam0);
			Var0 = Function_67(&bParam0);
			Function_105(&uParam1);
			Var2 = Function_105(&uParam1);
			return VDIST(Var0, Var2);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

struct<8> Function_105(int iParam0) //Position: 0x54D4 / 21716
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

void Function_106(var[] uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6) //Position: 0x5542 / 21826
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
			Function_118(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_117(0);
		}
		if (&bParam6)
		{
			Function_115(0, GET_THIS_SCRIPT_ID());
			Global_6615 = GET_THIS_SCRIPT_ID();
			Global_6644 = 1;
			Function_113(iParam3);
		}
		Function_111(iParam3);
		if (Function_110(StackVal, 32768))
		{
			Function_107(1);
		}
		Global_26652[iParam34].f_16++;
		Function_39(408, 1, 0, 0);
	}
}

void Function_107(bool bParam0) //Position: 0x563B / 22075
{
	if (bParam0)
	{
		Function_109(0x10000000);
	}
	else
	{
		Function_108(0x10000000);
	}
	Global_39922.f_304 = 0;
	return;
}

void Function_108(int iParam0) //Position: 0x5660 / 22112
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_109(int iParam0) //Position: 0x567D / 22141
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

bool Function_110(var uParam0, int iParam1) //Position: 0x5690 / 22160
{
	return (uParam0 && iParam1) == 0;
}

void Function_111(int iParam0) //Position: 0x569D / 22173
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (!Function_123(StackVal, 524288))
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
			bVar1 = Function_112(iVar0 * 60);
			ADD_TIME(&Global_27462[iParam052] + 376, 0, 0, bVar1, 0);
			Global_26652[iParam04] = &Global_27462[iParam052] + 376;
		}
	}
	return;
}

int Function_112(int iParam0) //Position: 0x5743 / 22339
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_113(int iParam0) //Position: 0x575A / 22362
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
	Function_114(&Var0 + 80[Var0.f_762], &(Global_26652[iParam04]), iParam0);
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

void Function_114(vector3 vParam0) //Position: 0x57F9 / 22521
{
	vParam0.y = iParam2;
	vParam0 = Param1.f_16;
	vParam0.f_8 = 1;
	return;
}

void Function_115(int iParam0, bool bParam1) //Position: 0x5815 / 22549
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
			Function_116(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_116(struct<113> Param0) //Position: 0x589C / 22684
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

void Function_117(int iParam0) //Position: 0x58FA / 22778
{
	*(&Global_21369 + 136) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 136, 0, 0, (&iParam0 + Function_112(900)), 0);
	return;
}

void Function_118(bool bParam0) //Position: 0x591E / 22814
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, (&bParam0 + Function_112(200)), 0);
	return;
}

void Function_119(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7) //Position: 0x5941 / 22849
{
	int iVar0;
	
	iVar0 = 0;
	if (!iParam2)
	{
		iVar0 = 1;
	}
	if (IS_ACTOR_VALID(&iParam4))
	{
		if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &iParam4, 1.0f, &iParam6, 1, 1, 0))
		{
			if (&iParam5 != 0)
			{
				Global_38378 = (GET_CURRENT_GAME_TIME() + IntToFloat(&iParam5));
			}
			iParam2 = 1;
		}
	}
	else if (!Function_78(StackVal, Param0))
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
			Function_118(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_117(0);
		}
		if (&bParam7)
		{
			Function_115(0, GET_THIS_SCRIPT_ID());
			Global_6615 = GET_THIS_SCRIPT_ID();
			Function_113(iParam3);
			Global_6644 = 1;
		}
		Function_111(iParam3);
		if (Function_110(StackVal, 32768))
		{
			Function_107(1);
		}
		Global_26652[iParam34].f_16++;
		Function_39(408, 1, 0, 0);
	}
}

struct<8> Function_120() //Position: 0x5A56 / 23126
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_121(var uParam0, struct<2> Param1, int iParam3, int iParam4, float fParam5) //Position: 0x5A60 / 23136
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
	Function_122(GET_OBJECT_FROM_GRINGO(&uParam0));
	if (&iParam3 == 4294967295)
	{
		bVar10 = false;
		Function_33(&Global_54076, &uVar3, &bVar10);
		if (bVar10 >= 0)
		{
			PRINTINT(bVar10);
			iVar11 = RAND_INT_RANGE(0, (bVar10 - 1));
			PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(uVar3[iVar11]));
			iParam3 = Function_32(&Global_54076, uVar3[iVar11]);
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
		iParam3 = Function_32(&Global_54076, &iParam3);
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
		iParam4 = Function_31();
	}
	DECOR_SET_INT(GET_OBJECT_FROM_GRINGO(&uParam0), "GiveItem", &iParam4);
}

void Function_122(bool bParam0) //Position: 0x5BDE / 23518
{
	if (!IS_OBJECT_VALID(&bParam0))
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(&bParam0, "nocrime"))
	{
		DECOR_SET_BOOL(&bParam0, "nocrime", 1);
	}
	return;
}

bool Function_123(int iParam0, int iParam1) //Position: 0x5C15 / 23573
{
	return (iParam0 && iParam1) == 0;
}

int Function_124(bool bParam0) //Position: 0x5C22 / 23586
{
	return SHIFT_LEFT(1, bParam0);
}

void Function_125(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x5C2E / 23598
{
	var uVar0;
	
	if (Function_131(&uParam0) && !Function_130(&uParam0, 1))
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
	Function_128(&uParam0);
	DECOR_SET_BOOL(&uParam0, "Zombie", 1);
	Function_122(&uParam0);
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
	Function_126(&uParam0, &uParam4, &uParam5);
}

void Function_126(var uParam0, int iParam1, bool bParam2) //Position: 0x5ECB / 24267
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
			Function_127(&uParam0, &iParam1, 0);
		}
		else
		{
			AI_DONT_HARM_ACTOR(&uParam0);
			SET_ALLOW_EXECUTE(&uParam0, 0);
		}
	}
	return;
}

void Function_127(var uParam0, int iParam1, bool bParam2) //Position: 0x5F88 / 24456
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
			uVar6 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(&uParam0, Function_217(), "script_zombie_emerge", Var2);
			if (IS_OBJECT_VALID(&uVar6))
			{
				Function_120();
				uVar7 = CREATE_POINT_IN_LAYOUT(&uParam0, Function_217(), Var2, Function_120());
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
			uVar6 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(&uParam0, Function_217(), "script_zombie_emerge", Var0);
			if (IS_OBJECT_VALID(&uVar6))
			{
				Function_120();
				uVar7 = CREATE_POINT_IN_LAYOUT(&uParam0, Function_217(), Var0, Function_120());
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

void Function_128(int iParam0) //Position: 0x6154 / 24916
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
	Function_129(&iParam0, -100.0f);
	AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(&iParam0, -1.0f);
	AI_PERCEPTION_SET_VISUAL_ID_TIME(&iParam0, 0.0f);
	return;
}

void Function_129(var uParam0, int iParam1) //Position: 0x6512 / 25874
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

bool Function_130(var uParam0, int iParam1) //Position: 0x6535 / 25909
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(&uParam0);
	if ((((((iVar0 != 1252 && iParam1) || (iVar0 != 1253 && iParam1)) || iVar0 != 541) || iVar0 != 542) || iVar0 != 543) || iVar0 != 544)
	{
		return 1;
	}
	return 0;
}

int Function_131(int iParam0) //Position: 0x657A / 25978
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(&iParam0);
	if (iVar0 <= 1204 && iVar0 >= 1227)
	{
		return 1;
	}
	return 0;
}

bool Function_132(int iParam0) //Position: 0x659B / 26011
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(&iParam0);
	if (iVar0 <= 1204 && iVar0 >= 1254)
	{
		return 1;
	}
	if (Function_130(&iParam0, 1))
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(&iParam0, "Zombie"))
	{
		return DECOR_GET_BOOL(&iParam0, "Zombie");
	}
	return 0;
}

void Function_133(var uParam0, bool bParam1) //Position: 0x65EA / 26090
{
	uParam0 = (uParam0 || bParam1);
	return;
}

void Function_134(var uParam0, var uParam1, var uParam2, float fParam3, struct<2> Param4) //Position: 0x65FB / 26107
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
		if (Function_135(StackVal, &Global_46715, "player_herb", &uVar0, 20.0f, 5, Param4) >= 0)
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

int Function_135(char* cParam0, var uParam1, char*[] cParam2, float fParam3, int iParam4, struct<2> Param5) //Position: 0x66A6 / 26278
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

void Function_136(bool bParam0) //Position: 0x674C / 26444
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		SET_ACTOR_CAN_BE_HARDLOCKED(&bParam0, 0);
		AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&bParam0, 0);
	}
	return;
}

var Function_137(var uParam0, var uParam1, bool bParam2, var uParam3, bool bParam4, struct<2> Param5, struct<2> Param7) //Position: 0x6769 / 26473
{
	var uVar0;
	var uVar1;
	
	if (!IS_LAYOUTREF_VALID(&uParam0))
	{
		LOG_ERROR("Layout is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_138(bParam2))
	{
		LOG_ERROR("riderTypeName is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_138(bParam4))
	{
		bParam4 = 976;
	}
	uVar1 = CREATE_ACTOR_IN_LAYOUT(&uParam0, &uParam3, bParam4, Param5, Param7);
	if (!IS_ACTOR_VALID(&uVar1))
	{
		uVar0 = &uVar1;
		return "";
	}
	uVar0 = CREATE_ACTOR_IN_LAYOUT(&uParam0, &uParam1, bParam2, Param5, Param7);
	if (!IS_ACTOR_VALID(&uVar1))
	{
		uVar0 = &uVar1;
		return "";
	}
	if (!IS_ACTOR_VALID(&uVar0))
	{
		DESTROY_ACTOR(&uVar1);
		return "";
	}
	ACCESSORIZE_HORSE(&uVar1, 3);
	ACTOR_MOUNT_ACTOR(&uVar0, &uVar1);
	return &uVar0;
}

bool Function_138(int iParam0) //Position: 0x68A1 / 26785
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_139(int iParam0) //Position: 0x68B8 / 26808
{
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&iParam0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iParam0, 0);
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&iParam0, 0);
	MEMORY_ATTACK_ON_SIGHT(&iParam0, 0);
	SET_ACTOR_CAN_PLAY_GESTURES(&iParam0, false);
	AI_SET_ALLOW_ATTACK_HOGTIED_ACTORS(&iParam0, 1);
	return;
}

void Function_140() //Position: 0x68E8 / 26856
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

bool Function_141(struct<573> Param0) //Position: 0x68FA / 26874
{
	int iVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 38)
	{
		iLocal_259[iVar0] = 0;
		iVar0++;
	}
	if (!Function_142(StackVal, Global_54078, &iParam2, &uParam1))
	{
		return 0;
	}
	iVar2 = 4294967295;
	fVar3 = 1500.0f;
	iVar0 = 0;
	while (iVar0 <= 38)
	{
		fVar1 = Function_66(StackVal, &Global_54076, Local_27[iVar02]);
		if ((fVar1 > fVar3 && fVar1 < 80.0f) && iLocal_259[iVar0])
		{
			fVar3 = fVar1;
			iVar2 = iVar0;
		}
		iVar0++;
	}
	if (iVar2 == 4294967295)
	{
		return 0;
	}
	Param0 = iVar2;
	Param0.f_572 = uLocal_181[iVar2];
	switch (iVar2)
	{
		case 0x00000000:
			Param0.f_4 = 1;
			Param0.f_8 = 1;
			Param0.f_12 = 4;
			Function_133(&Param0 + 16, 1);
			Function_133(&Param0 + 16, 2);
			Function_133(&Param0 + 16, 4);
			Function_133(&Param0 + 16, 8);
			Function_133(&Param0 + 24, 1);
			(&Param0 + 32) = Vector(-1043,64f, 184,07f, 1373,09f);
			*(&Param0 + 104) = Vector(-1043,76f, 183,985f, 1371,5f);
			Param0.f_240 = -179,9999f;
			*(&Param0 + 116) = Vector(-1042,58f, 183,985f, 1371,5f);
			Param0.f_244 = 173,9998f;
			*(&Param0 + 128) = Vector(-1041,04f, 184,059f, 1372,95f);
			Param0.f_248 = 99,58986f;
			*(&Param0 + 140) = Vector(-1043,66f, 184,053f, 1377,79f);
			Param0.f_252 = 0,565044f;
			*(&Param0 + 200) = Vector(-1046,044f, 184,066f, 1374,279f);
			Param0.f_280 = 286,941f;
			*(&Param0 + 92) = Vector(-1045,249f, 184,066f, 1373,642f);
			Param0.f_236 = -88,668f;
			*(&Param0 + 284) = Vector(-1044,695f, 184,065f, 1375,734f);
			Param0.f_416 = -18,448f;
			*(&Param0 + 296) = Vector(-1053,774f, 185,389f, 1370,258f);
			Param0.f_420 = 354,495f;
			*(&Param0 + 308) = Vector(-1054,425f, 186,099f, 1366,013f);
			Param0.f_424 = 265,925f;
			*(&Param0 + 320) = Vector(-1056,458f, 187,239f, 1358,889f);
			Param0.f_428 = 239,03f;
			*(&Param0 + 332) = Vector(-1057,215f, 190,47f, 1344,799f);
			Param0.f_432 = 223,394f;
			*(&Param0 + 344) = Vector(-1047,867f, 188,264f, 1348,867f);
			Param0.f_436 = 193,01f;
			*(&Param0 + 212) = Vector(-1041,799f, 183,893f, 1366,241f);
			Param0.f_272 = 325,669f;
			*(&Param0 + 224) = Vector(-1043,816f, 183,985f, 1369,669f);
			Param0.f_276 = 280,2f;
			*(&Param0 + 356) = Vector(-1030,516f, 181,428f, 1404,631f);
			Param0.f_440 = 94,717f;
			*(&Param0 + 368) = Vector(-1036,633f, 184,142f, 1368,585f);
			Param0.f_444 = 85,044f;
			*(&Param0 + 380) = Vector(-1045,459f, 184,036f, 1363,097f);
			Param0.f_448 = -115,12f;
			*(&Param0 + 392) = Vector(-1046,278f, 184,161f, 1364,55f);
			Param0.f_452 = -112,101f;
			*(&Param0 + 404) = Vector(-1047,026f, 184,393f, 1366,827f);
			Param0.f_456 = -87,709f;
			Param0.f_560 = 397;
			Param0.f_564 = 405;
			Param0.f_568 = 79;
			*(&Param0 + 472) = "look_distance_binocs";
			*(&Param0 + 480) = "lean_rail_forward";
			*(&Param0 + 488) = "stand_lookdistance_w_any";
			*(&Param0 + 496) = "stand_lookdistance_w_any";
			*(&Param0 + 504) = "rand_idle_stand_nospawn";
			return 1;
			break;
		
		case 0x00000001:
			*(&Param0 + 92) = Vector(-521,368f, 146,586f, 1891,315f);
			Param0.f_236 = -179,119f;
			*(&Param0 + 284) = Vector(-523,722f, 146,684f, 1891,792f);
			Param0.f_416 = 122,121f;
			*(&Param0 + 296) = Vector(-449,691f, 139,105f, 1918,196f);
			Param0.f_420 = -68,076f;
			*(&Param0 + 308) = Vector(-458,146f, 142,659f, 1898,084f);
			Param0.f_424 = -89,19f;
			*(&Param0 + 320) = Vector(-494,67f, 144,473f, 1926,247f);
			Param0.f_428 = -6,687f;
			*(&Param0 + 332) = Vector(-519,423f, 146,583f, 1893,947f);
			Param0.f_432 = -126,933f;
			*(&Param0 + 344) = Vector(-531,255f, 146,607f, 1885,477f);
			Param0.f_436 = -143,417f;
			*(&Param0 + 356) = Vector(-451,303f, 139,082f, 1913,837f);
			Param0.f_440 = 164,89f;
			*(&Param0 + 368) = Vector(-453,817f, 139,488f, 1915,016f);
			Param0.f_444 = 164,346f;
			*(&Param0 + 380) = Vector(-474,27f, 142,493f, 1909,429f);
			Param0.f_448 = -113,01f;
			*(&Param0 + 392) = Vector(-475,55f, 142,529f, 1912,434f);
			Param0.f_452 = -76,121f;
			*(&Param0 + 404) = Vector(-473,102f, 142,376f, 1914,772f);
			Param0.f_456 = -29,518f;
			Param0.f_560 = 467;
			Param0.f_564 = 476;
			Param0.f_568 = 77;
			*(&Param0 + 472) = "look_distance_binocs";
			*(&Param0 + 480) = "stand_lookdistance_w_any";
			*(&Param0 + 488) = "rand_idle_stand_nospawn";
			*(&Param0 + 496) = "look_distance_binocs";
			*(&Param0 + 504) = "smoking_stand";
			return 1;
			break;
		
		case 0x00000002:
			*(&Param0 + 92) = Vector(151,25f, 128,174f, 1380,784f);
			Param0.f_236 = -122,151f;
			*(&Param0 + 284) = Vector(150,778f, 128,296f, 1382,712f);
			Param0.f_416 = 211,988f;
			*(&Param0 + 296) = Vector(147,231f, 129,748f, 1404,047f);
			Param0.f_420 = -209,521f;
			*(&Param0 + 308) = Vector(172,179f, 129,506f, 1372,843f);
			Param0.f_424 = -357,07f;
			*(&Param0 + 320) = Vector(146,34f, 128,799f, 1392,335f);
			Param0.f_428 = 96,535f;
			*(&Param0 + 332) = Vector(152,955f, 128,059f, 1379,6f);
			Param0.f_432 = 31,365f;
			*(&Param0 + 344) = Vector(157,175f, 126,274f, 1369,714f);
			Param0.f_436 = 59,118f;
			*(&Param0 + 356) = Vector(144,219f, 125,793f, 1365,431f);
			Param0.f_440 = -135,337f;
			*(&Param0 + 368) = Vector(141,842f, 125,987f, 1368,622f);
			Param0.f_444 = -79,663f;
			*(&Param0 + 380) = Vector(139,218f, 128,935f, 1399,063f);
			Param0.f_448 = -100,419f;
			*(&Param0 + 392) = Vector(138,62f, 129,247f, 1403,252f);
			Param0.f_452 = -77,321f;
			*(&Param0 + 404) = Vector(141,014f, 129,526f, 1407,641f);
			Param0.f_456 = -53,768f;
			Param0.f_560 = 467;
			Param0.f_564 = 476;
			Param0.f_568 = 77;
			*(&Param0 + 472) = "look_distance_binocs";
			*(&Param0 + 480) = "stand_lookdistance_w_any";
			*(&Param0 + 488) = "rand_idle_sit_ground";
			*(&Param0 + 496) = "rand_idle_stand_nospawn";
			*(&Param0 + 504) = "rand_idle_sit_ground";
			return 1;
			break;
		
		case 0x00000003:
			*(&Param0 + 92) = Vector(-730,995f, 226,993f, 1106,784f);
			Param0.f_236 = 164,146f;
			*(&Param0 + 284) = Vector(-734,587f, 226,92f, 1105,764f);
			Param0.f_416 = 164,146f;
			*(&Param0 + 296) = Vector(-749,864f, 196,97f, 1184,389f);
			Param0.f_420 = 125,436f;
			*(&Param0 + 308) = Vector(-774,53f, 204,852f, 1188,59f);
			Param0.f_424 = 287,751f;
			*(&Param0 + 320) = Vector(-776,806f, 218,112f, 1158,521f);
			Param0.f_428 = 170,346f;
			*(&Param0 + 332) = Vector(-737,576f, 228,798f, 1153,567f);
			Param0.f_432 = 135,004f;
			*(&Param0 + 344) = Vector(-733,547f, 226,939f, 1114,264f);
			Param0.f_436 = 164,146f;
			*(&Param0 + 356) = Vector(-770.0f, 186,54f, 1217,98f);
			Param0.f_440 = 254,894f;
			*(&Param0 + 368) = Vector(-769,202f, 187,017f, 1215,354f);
			Param0.f_444 = 213,121f;
			*(&Param0 + 380) = Vector(-724,041f, 227,581f, 1138,394f);
			Param0.f_448 = -181,478f;
			*(&Param0 + 392) = Vector(-721,611f, 227,2f, 1138,716f);
			Param0.f_452 = -197,486f;
			*(&Param0 + 404) = Vector(-719,776f, 226,926f, 1140,08f);
			Param0.f_456 = -210,832f;
			Param0.f_560 = 467;
			Param0.f_564 = 476;
			Param0.f_568 = 79;
			*(&Param0 + 472) = "stand_lookdistance_w_any";
			*(&Param0 + 480) = "look_distance_binocs";
			*(&Param0 + 488) = "stand_lookdistance_w_any";
			*(&Param0 + 496) = "look_distance_binocs";
			*(&Param0 + 504) = "rand_idle_stand_nospawn";
			return 1;
			break;
		
		case 0x00000004:
			Param0.f_4 = 1;
			Param0.f_8 = 1;
			Param0.f_12 = 6;
			Function_133(&Param0 + 16, 1);
			Function_133(&Param0 + 16, 2);
			Function_133(&Param0 + 16, 4);
			Function_133(&Param0 + 16, 8);
			Function_133(&Param0 + 16, 16);
			Function_133(&Param0 + 16, 32);
			Function_133(&Param0 + 24, 1);
			*(&Param0 + 32) = Vector(-844,56f, 189,67f, 1587,96f);
			*(&Param0 + 104) = Vector(-844,573f, 189,676f, 1588,92f);
			Param0.f_240 = 2,999898f;
			*(&Param0 + 116) = Vector(-842,248f, 189,678f, 1588,95f);
			Param0.f_244 = -0,00023f;
			*(&Param0 + 128) = Vector(-840,159f, 189,685f, 1586,24f);
			Param0.f_248 = 84,58977f;
			*(&Param0 + 140) = Vector(-840,175f, 189,711f, 1581,26f);
			Param0.f_252 = 90,56493f;
			*(&Param0 + 152) = Vector(-849,108f, 189,698f, 1586,2f);
			Param0.f_256 = -92,41016f;
			*(&Param0 + 164) = Vector(-849,05f, 189,763f, 1580,9f);
			Param0.f_260 = -89,43497f;
			*(&Param0 + 200) = Vector(-842,3f, 189,73f, 1584,924f);
			Param0.f_280 = 90,843f;
			*(&Param0 + 92) = Vector(-844,7f, 189,73f, 1582,449f);
			Param0.f_236 = 146,157f;
			*(&Param0 + 284) = Vector(-846,056f, 189,73f, 1583,987f);
			Param0.f_416 = 205,311f;
			*(&Param0 + 296) = Vector(-843,001f, 189,753f, 1586,391f);
			Param0.f_420 = 135,908f;
			*(&Param0 + 308) = Vector(-842,564f, 189,753f, 1584,934f);
			Param0.f_424 = 138,891f;
			*(&Param0 + 320) = Vector(-842,706f, 189,753f, 1581,665f);
			Param0.f_428 = 157,555f;
			*(&Param0 + 332) = Vector(-846,521f, 189,753f, 1581,64f);
			Param0.f_432 = 201,029f;
			*(&Param0 + 344) = Vector(-847,189f, 189,758f, 1583,797f);
			Param0.f_436 = 214,574f;
			*(&Param0 + 212) = Vector(-850,748f, 189,708f, 1596,198f);
			Param0.f_272 = 26,239f;
			*(&Param0 + 224) = Vector(-844,908f, 189,696f, 1593,825f);
			Param0.f_276 = 64,685f;
			*(&Param0 + 356) = Vector(-848,939f, 189,767f, 1598,81f);
			Param0.f_440 = 10,155f;
			*(&Param0 + 368) = Vector(-847,679f, 189,716f, 1596,793f);
			Param0.f_444 = 29,877f;
			*(&Param0 + 380) = Vector(-839,291f, 189,667f, 1591,667f);
			Param0.f_448 = 35,551f;
			*(&Param0 + 392) = Vector(-838,08f, 189,66f, 1588,806f);
			Param0.f_452 = 71,249f;
			*(&Param0 + 404) = Vector(-837,333f, 189,679f, 1586,46f);
			Param0.f_456 = 94,667f;
			Param0.f_560 = 397;
			Param0.f_564 = 405;
			Param0.f_568 = 77;
			*(&Param0 + 472) = "look_distance_binocs";
			*(&Param0 + 480) = "stand_lookdistance_w_any";
			*(&Param0 + 488) = "smoking_stand";
			*(&Param0 + 496) = "look_distance_binocs";
			*(&Param0 + 504) = "rand_idle_stand_nospawn";
			return 1;
			break;
		
		case 0x00000005:
			Param0.f_4 = 1;
			Param0.f_8 = 1;
			Param0.f_12 = 4;
			Function_133(&Param0 + 16, 1);
			Function_133(&Param0 + 16, 2);
			Function_133(&Param0 + 16, 4);
			Function_133(&Param0 + 16, 8);
			Function_133(&Param0 + 24, 1);
			*(&Param0 + 32) = Vector(-487,17f, 20,49f, 3035,54f);
			*(&Param0 + 104) = Vector(-488,044f, 20,4865f, 3036,66f);
			Param0.f_240 = 20,99981f;
			*(&Param0 + 116) = Vector(-486,71f, 19,977f, 3036,24f);
			Param0.f_244 = 17,99883f;
			*(&Param0 + 128) = Vector(-484,803f, 19,8811f, 3035,45f);
			Param0.f_248 = 24,5889f;
			*(&Param0 + 140) = Vector(-484,106f, 20,4865f, 3033.0f);
			Param0.f_252 = 105,5649f;
			*(&Param0 + 200) = Vector(-486,369f, 20,486f, 3032,765f);
			Param0.f_280 = -70,094f;
			*(&Param0 + 92) = Vector(-487,694f, 20,49f, 3033,49f);
			Param0.f_236 = 0,565f;
			*(&Param0 + 284) = Vector(-489,403f, 20,486f, 3033,522f);
			Param0.f_416 = 276,065f;
			*(&Param0 + 296) = Vector(-488,69f, 20,486f, 3033,605f);
			Param0.f_420 = 201,913f;
			*(&Param0 + 308) = Vector(-486,68f, 20,486f, 3032,768f);
			Param0.f_424 = 162,737f;
			*(&Param0 + 320) = Vector(-486,741f, 20,531f, 3035,47f);
			Param0.f_428 = 293,469f;
			*(&Param0 + 332) = Vector(-482,366f, 18,738f, 3038,164f);
			Param0.f_432 = 313,726f;
			*(&Param0 + 344) = Vector(-484,913f, 18,703f, 3039,667f);
			Param0.f_436 = 316,633f;
			*(&Param0 + 212) = Vector(-487,966f, 20,129f, 3021,113f);
			Param0.f_272 = 330,593f;
			*(&Param0 + 224) = Vector(-488,722f, 20,086f, 3027,707f);
			Param0.f_276 = 349,407f;
			*(&Param0 + 356) = Vector(-482,899f, 24,255f, 2998,045f);
			Param0.f_440 = -53,102f;
			*(&Param0 + 368) = Vector(-481,382f, 23,808f, 2999,786f);
			Param0.f_444 = 301,392f;
			*(&Param0 + 380) = Vector(-482,899f, 24,255f, 2998,045f);
			Param0.f_448 = -53,102f;
			*(&Param0 + 392) = Vector(-487,486f, 20,086f, 3028,202f);
			Param0.f_452 = -167,584f;
			*(&Param0 + 404) = Vector(-489,176f, 20,086f, 3028,246f);
			Param0.f_456 = -152,339f;
			Param0.f_560 = 397;
			Param0.f_564 = 405;
			Param0.f_568 = 22;
			*(&Param0 + 472) = "rand_idle_stand_nospawn";
			*(&Param0 + 480) = "smoking_stand";
			*(&Param0 + 488) = "mex_gateGuards";
			*(&Param0 + 496) = "stand_lookdistance_w_any";
			*(&Param0 + 504) = "stand_lookdistance_w_any";
			return 1;
			break;
		
		case 0x00000006:
			*(&Param0 + 92) = Vector(-2905,192f, 13,051f, 2946,404f);
			Param0.f_236 = 312,984f;
			*(&Param0 + 284) = Vector(-2904,496f, 13,051f, 2946,997f);
			Param0.f_416 = 41,838f;
			*(&Param0 + 296) = Vector(-2904,536f, 13,051f, 2953,111f);
			Param0.f_420 = 307,91f;
			*(&Param0 + 308) = Vector(-2911,311f, 13,051f, 2946,005f);
			Param0.f_424 = 284,013f;
			*(&Param0 + 320) = Vector(-2898,622f, 13,051f, 2947,662f);
			Param0.f_428 = 108,233f;
			*(&Param0 + 332) = Vector(-2904,868f, 16,386f, 2949,784f);
			Param0.f_432 = 328,827f;
			*(&Param0 + 344) = Vector(-2902,199f, 16,386f, 2946,815f);
			Param0.f_436 = 114,53f;
			*(&Param0 + 356) = Vector(-2923,811f, 13,051f, 2987,644f);
			Param0.f_440 = 357,746f;
			*(&Param0 + 368) = Vector(-2922,137f, 13,051f, 2988,013f);
			Param0.f_444 = 364,468f;
			*(&Param0 + 380) = Vector(-2909,802f, 13,051f, 2956,361f);
			Param0.f_448 = -62,669f;
			*(&Param0 + 392) = Vector(-2908,425f, 13,051f, 2957,893f);
			Param0.f_452 = -38,495f;
			*(&Param0 + 404) = Vector(-2905,681f, 13,051f, 2959,029f);
			Param0.f_456 = -8,715f;
			Param0.f_560 = 477;
			Param0.f_564 = 485;
			Param0.f_568 = 22;
			*(&Param0 + 472) = "rand_idle_stand_nospawn";
			*(&Param0 + 480) = "smoking_stand";
			*(&Param0 + 488) = "mex_gateGuards";
			*(&Param0 + 496) = "stand_lookdistance_w_any";
			*(&Param0 + 504) = "stand_lookdistance_w_any";
			return 1;
			break;
		
		case 0x00000007:
			*(&Param0 + 92) = Vector(-1233,827f, 22,095f, 3208,098f);
			Param0.f_236 = 248,968f;
			*(&Param0 + 284) = Vector(-1237,779f, 22,244f, 3208,536f);
			Param0.f_416 = 207,731f;
			*(&Param0 + 296) = Vector(-1229,405f, 21,94f, 3217,18f);
			Param0.f_420 = 149,427f;
			*(&Param0 + 308) = Vector(-1228,144f, 22,102f, 3209,255f);
			Param0.f_424 = 215,192f;
			*(&Param0 + 320) = Vector(-1234,135f, 22,267f, 3211,285f);
			Param0.f_428 = 149,545f;
			*(&Param0 + 332) = Vector(-1238,036f, 22,308f, 3212,325f);
			Param0.f_432 = 183,189f;
			*(&Param0 + 344) = Vector(-1243,854f, 22,357f, 3208,741f);
			Param0.f_436 = 8,496f;
			*(&Param0 + 356) = Vector(-1218,27f, 27,662f, 3193,786f);
			Param0.f_440 = 249,759f;
			*(&Param0 + 368) = Vector(-1218,865f, 28,116f, 3191,976f);
			Param0.f_444 = 290,965f;
			*(&Param0 + 380) = Vector(-1253,576f, 25,628f, 3203,651f);
			Param0.f_448 = 98,62f;
			*(&Param0 + 392) = Vector(-1250,586f, 24,286f, 3205,825f);
			Param0.f_452 = -233,204f;
			*(&Param0 + 404) = Vector(-1247,739f, 22,92f, 3212,752f);
			Param0.f_456 = 109,765f;
			Param0.f_560 = 397;
			Param0.f_564 = 405;
			Param0.f_568 = 76;
			*(&Param0 + 472) = "rand_idle_stand_nospawn";
			*(&Param0 + 480) = "smoking_stand";
			*(&Param0 + 488) = "mex_gateGuards";
			*(&Param0 + 496) = "stand_lookdistance_w_any";
			*(&Param0 + 504) = "stand_lookdistance_w_any";
			return 1;
			break;
		
		case 0x00000008:
			*(&Param0 + 92) = Vector(-3434,034f, 23,592f, 2497,243f);
			Param0.f_236 = 167,141f;
			*(&Param0 + 284) = Vector(-3434,139f, 23,592f, 2495,984f);
			Param0.f_416 = 37,012f;
			*(&Param0 + 296) = Vector(-3434,783f, 23,592f, 2498,666f);
			Param0.f_420 = 100,492f;
			*(&Param0 + 308) = Vector(-3436,673f, 23,592f, 2504,258f);
			Param0.f_424 = 81,012f;
			*(&Param0 + 320) = Vector(-3447,594f, 23,11f, 2499,735f);
			Param0.f_428 = -248,865f;
			*(&Param0 + 332) = Vector(-3439,235f, 23,568f, 2497,12f);
			Param0.f_432 = -133,729f;
			*(&Param0 + 344) = Vector(-3439,446f, 23,589f, 2500,905f);
			Param0.f_436 = -51,482f;
			*(&Param0 + 356) = Vector(-3469,012f, 21,584f, 2492,979f);
			Param0.f_440 = 333,678f;
			*(&Param0 + 368) = Vector(-3464,167f, 21,781f, 2495,026f);
			Param0.f_444 = 361,907f;
			*(&Param0 + 380) = Vector(-3428,34f, 24,077f, 2495,796f);
			Param0.f_448 = 97,657f;
			*(&Param0 + 392) = Vector(-3428,279f, 24,059f, 2499,195f);
			Param0.f_452 = -294,858f;
			*(&Param0 + 404) = Vector(-3428,886f, 23,983f, 2502,291f);
			Param0.f_456 = 109,765f;
			Param0.f_560 = 397;
			Param0.f_564 = 405;
			Param0.f_568 = 76;
			*(&Param0 + 472) = "rand_idle_stand";
			*(&Param0 + 480) = "rand_idle_nearwall";
			*(&Param0 + 488) = "look_distance_binocs";
			*(&Param0 + 496) = "sit_ground_smoke";
			*(&Param0 + 504) = "sit_ground_drink";
			return 1;
			break;
		
		case 0x00000009:
			Param0.f_4 = 1;
			Param0.f_8 = 1;
			Param0.f_12 = 5;
			Function_133(&Param0 + 16, 1);
			Function_133(&Param0 + 16, 2);
			Function_133(&Param0 + 16, 4);
			Function_133(&Param0 + 16, 8);
			Function_133(&Param0 + 16, 16);
			Function_133(&Param0 + 24, 1);
			*(&Param0 + 32) = Vector(-1864,28f, 25,66f, 3302,02f);
			*(&Param0 + 104) = Vector(-1868,72f, 24,9242f, 3306,34f);
			Param0.f_240 = -89,99975f;
			*(&Param0 + 116) = Vector(-1868,69f, 24,9242f, 3304,97f);
			Param0.f_244 = -86,99978f;
			*(&Param0 + 128) = Vector(-1868,72f, 24,924f, 3302,9f);
			Param0.f_248 = -98,40996f;
			*(&Param0 + 140) = Vector(-1865,04f, 25,6375f, 3300,95f);
			Param0.f_252 = 176,9998f;
			*(&Param0 + 152) = Vector(-1863,99f, 25,6389f, 3300,97f);
			Param0.f_256 = -179,9999f;
			*(&Param0 + 200) = Vector(-1862,495f, 25,664f, 3304,42f);
			Param0.f_280 = -89,2f;
			*(&Param0 + 92) = Vector(-1864,42f, 25,674f, 3306,345f);
			Param0.f_236 = -56,932f;
			*(&Param0 + 284) = Vector(-1864,862f, 25,674f, 3304,466f);
			Param0.f_416 = 0.0f;
			*(&Param0 + 296) = Vector(-2902,199f, 16,386f, 2946,815f);
			Param0.f_420 = 114,53f;
			*(&Param0 + 308) = Vector(-1873,356f, 24,896f, 3310,485f);
			Param0.f_424 = 0,623f;
			*(&Param0 + 320) = Vector(-1872,139f, 24,92f, 3300,956f);
			Param0.f_428 = 77,585f;
			*(&Param0 + 332) = Vector(-1858,381f, 24,984f, 3304,77f);
			Param0.f_432 = 26,821f;
			*(&Param0 + 344) = Vector(-1860,552f, 24,924f, 3307,563f);
			Param0.f_436 = 164,044f;
			*(&Param0 + 212) = Vector(-1871,698f, 24,924f, 3305,057f);
			Param0.f_272 = 79,722f;
			*(&Param0 + 224) = Vector(-1875,491f, 24,835f, 3300,441f);
			Param0.f_276 = 91,447f;
			*(&Param0 + 356) = Vector(-1872,12f, 24,921f, 3303,856f);
			Param0.f_440 = 261,993f;
			*(&Param0 + 368) = Vector(-1872,723f, 24,921f, 3306,976f);
			Param0.f_444 = 289,613f;
			*(&Param0 + 380) = Vector(-1850,137f, 24,398f, 3309,046f);
			Param0.f_448 = 109,765f;
			*(&Param0 + 392) = Vector(-1851,146f, 24,532f, 3312,827f);
			Param0.f_452 = 67,212f;
			*(&Param0 + 404) = Vector(-1851,819f, 24,731f, 3315,765f);
			Param0.f_456 = -306,112f;
			Param0.f_560 = 486;
			Param0.f_564 = 494;
			Param0.f_568 = 78;
			*(&Param0 + 472) = "smoking_stand";
			*(&Param0 + 480) = "stand_lookdistance_w_any";
			*(&Param0 + 488) = "sit_ground_campfire_tend";
			*(&Param0 + 496) = "rand_idle_stand";
			*(&Param0 + 504) = "stand_lookdistance_w_any";
			return 1;
			break;
		
		case 0x0000000A:
			*(&Param0 + 92) = Vector(-2832,227f, 20,209f, 3075,762f);
			Param0.f_236 = -3,07f;
			*(&Param0 + 284) = Vector(-2830,373f, 20,075f, 3077,06f);
			Param0.f_416 = -49,594f;
			*(&Param0 + 296) = Vector(-2826,955f, 20,214f, 3077,9f);
			Param0.f_420 = 319,696f;
			*(&Param0 + 308) = Vector(-2832,744f, 20,214f, 3074,063f);
			Param0.f_424 = 267,808f;
			*(&Param0 + 320) = Vector(-2832,834f, 20,214f, 3078,073f);
			Param0.f_428 = 322,501f;
			*(&Param0 + 332) = Vector(-2829,047f, 20,214f, 3074,01f);
			Param0.f_432 = 106,676f;
			*(&Param0 + 344) = Vector(-2828,971f, 20,214f, 3078,144f);
			Param0.f_436 = 32,525f;
			*(&Param0 + 356) = Vector(-2811,083f, 20,081f, 3077,154f);
			Param0.f_440 = 111,684f;
			*(&Param0 + 368) = Vector(-2810,745f, 20,068f, 3080,057f);
			Param0.f_444 = 87,989f;
			*(&Param0 + 380) = Vector(-2846,263f, 19,079f, 3081,674f);
			Param0.f_448 = -65,932f;
			*(&Param0 + 392) = Vector(-2844,673f, 19,075f, 3084,467f);
			Param0.f_452 = -62,778f;
			*(&Param0 + 404) = Vector(-2843,999f, 19,117f, 3088,225f);
			Param0.f_456 = -110,34f;
			Param0.f_560 = 486;
			Param0.f_564 = 494;
			Param0.f_568 = 79;
			*(&Param0 + 472) = "look_out_window_L";
			*(&Param0 + 480) = "stand_guntricks_e_any";
			*(&Param0 + 488) = "look_distance_binocs";
			*(&Param0 + 496) = "sit_ground_smoke";
			*(&Param0 + 504) = "look_distance_binocs";
			return 1;
			break;
		
		case 0x0000000B:
			*(&Param0 + 92) = Vector(-1272,701f, 109,427f, 2763,055f);
			Param0.f_236 = 29,99f;
			*(&Param0 + 284) = Vector(-1274,066f, 109,427f, 2764,018f);
			Param0.f_416 = -55,118f;
			*(&Param0 + 296) = Vector(-1278,487f, 109,427f, 2761,758f);
			Param0.f_420 = 63,9346f;
			*(&Param0 + 308) = Vector(-1262,722f, 109,427f, 2760,963f);
			Param0.f_424 = -80,99f;
			*(&Param0 + 320) = Vector(-1304,522f, 111,436f, 2730,135f);
			Param0.f_428 = 122,76f;
			*(&Param0 + 332) = Vector(-1292,069f, 109,67f, 2775,973f);
			Param0.f_432 = 44,4f;
			*(&Param0 + 344) = Vector(-1265,553f, 109,427f, 2745,011f);
			Param0.f_436 = -98,76f;
			*(&Param0 + 356) = Vector(-1246,312f, 109,427f, 2747,819f);
			Param0.f_440 = 182,339f;
			*(&Param0 + 368) = Vector(-1243,976f, 109,427f, 2747,764f);
			Param0.f_444 = 167,543f;
			*(&Param0 + 380) = Vector(-1300,97f, 108,586f, 2749,941f);
			Param0.f_448 = -26,038f;
			*(&Param0 + 392) = Vector(-1297,268f, 108,688f, 2751,153f);
			Param0.f_452 = 5,012f;
			*(&Param0 + 404) = Vector(-1292,78f, 108,424f, 2750,432f);
			Param0.f_456 = 4,55f;
			Param0.f_560 = 477;
			Param0.f_564 = 485;
			Param0.f_568 = 78;
			*(&Param0 + 472) = "rand_idle_stand_nospawn";
			*(&Param0 + 480) = "smoking_stand";
			*(&Param0 + 488) = "mex_gateGuards";
			*(&Param0 + 496) = "stand_lookdistance_w_any";
			*(&Param0 + 504) = "stand_lookdistance_w_any";
			return 1;
			break;
		
		case 0x0000000C:
			Param0.f_4 = 1;
			Param0.f_8 = 1;
			Param0.f_12 = 4;
			Function_133(&Param0 + 16, 1);
			Function_133(&Param0 + 16, 2);
			Function_133(&Param0 + 16, 4);
			Function_133(&Param0 + 16, 8);
			Function_133(&Param0 + 24, 1);
			*(&Param0 + 32) = Vector(-2830,17f, 50,33f, 2415,78f);
			*(&Param0 + 104) = Vector(-2832,45f, 50,0466f, 2420,44f);
			Param0.f_240 = 12,00024f;
			*(&Param0 + 116) = Vector(-2829,74f, 50,1411f, 2419,64f);
			Param0.f_244 = 15,00032f;
			*(&Param0 + 128) = Vector(-2828,89f, 50,3678f, 2416,18f);
			Param0.f_248 = 104,9996f;
			*(&Param0 + 140) = Vector(-2829,24f, 50,3678f, 2415,13f);
			Param0.f_252 = 104,9996f;
			*(&Param0 + 200) = Vector(-2833,559f, 50,331f, 2416,961f);
			Param0.f_280 = -89,2f;
			*(&Param0 + 92) = Vector(-2833,559f, 50,331f, 2416,961f);
			Param0.f_236 = -168,258f;
			*(&Param0 + 284) = Vector(-2821,639f, 49,173f, 2427,109f);
			Param0.f_416 = -119,337f;
			*(&Param0 + 296) = Vector(-2835,485f, 50,331f, 2416,255f);
			Param0.f_420 = 231,268f;
			*(&Param0 + 308) = Vector(-2833,374f, 50,331f, 2418,789f);
			Param0.f_424 = 338,044f;
			*(&Param0 + 320) = Vector(-2833,52f, 50,332f, 2414,594f);
			Param0.f_428 = 254,386f;
			*(&Param0 + 332) = Vector(-2831,958f, 50,332f, 2414,271f);
			Param0.f_432 = 200,957f;
			*(&Param0 + 344) = Vector(-2830,995f, 50,331f, 2418,192f);
			Param0.f_436 = 350,198f;
			*(&Param0 + 212) = Vector(-2825,655f, 50,111f, 2414,417f);
			Param0.f_272 = 213,931f;
			*(&Param0 + 224) = Vector(-2829,398f, 50,356f, 2412,87f);
			Param0.f_276 = 224,086f;
			*(&Param0 + 356) = Vector(-2815,583f, 49,017f, 2430,97f);
			Param0.f_440 = 342,394f;
			*(&Param0 + 368) = Vector(-2812,155f, 48,658f, 2430,972f);
			Param0.f_444 = 6,16f;
			*(&Param0 + 380) = Vector(-2827,84f, 49,976f, 2410,743f);
			Param0.f_448 = -80,811f;
			*(&Param0 + 392) = Vector(-2830,188f, 49,89f, 2408,717f);
			Param0.f_452 = 317,22f;
			*(&Param0 + 404) = Vector(-2832,734f, 49,902f, 2407,827f);
			Param0.f_456 = 321,988f;
			Param0.f_560 = 397;
			Param0.f_564 = 405;
			Param0.f_568 = 79;
			*(&Param0 + 472) = "rand_idle_nearwall";
			*(&Param0 + 480) = "stand_lookdistance_w_any";
			*(&Param0 + 488) = "look_distance_binocs";
			*(&Param0 + 496) = "rand_idle_stand";
			*(&Param0 + 504) = "smoking_stand";
			return 1;
			break;
		
		case 0x0000000D:
			*(&Param0 + 92) = Vector(-2867,112f, 82,255f, 2162,143f);
			Param0.f_236 = 110,078f;
			*(&Param0 + 284) = Vector(-2866,419f, 82,234f, 2164,325f);
			Param0.f_416 = 31,229f;
			*(&Param0 + 296) = Vector(-2850,979f, 80,521f, 2154,977f);
			Param0.f_420 = 164,031f;
			*(&Param0 + 308) = Vector(-2884,095f, 78,701f, 2174,188f);
			Param0.f_424 = 156,755f;
			*(&Param0 + 320) = Vector(-2852,32f, 74,649f, 2158,667f);
			Param0.f_428 = 197,574f;
			*(&Param0 + 332) = Vector(-2858,007f, 73,678f, 2162,392f);
			Param0.f_432 = 236,86f;
			*(&Param0 + 344) = Vector(-2882,746f, 72,493f, 2184,76f);
			Param0.f_436 = 218,101f;
			*(&Param0 + 356) = Vector(-2883,305f, 61,315f, 2226,45f);
			Param0.f_440 = -27,584f;
			*(&Param0 + 368) = Vector(-2883,679f, 61,567f, 2223,738f);
			Param0.f_444 = -42,562f;
			*(&Param0 + 380) = Vector(-2874,792f, 63,259f, 2214,952f);
			Param0.f_448 = -255,969f;
			*(&Param0 + 392) = Vector(-2876,241f, 63,709f, 2212,9f);
			Param0.f_452 = 90,764f;
			*(&Param0 + 404) = Vector(-2878,6f, 63,473f, 2211,664f);
			Param0.f_456 = 161,002f;
			Param0.f_560 = 486;
			Param0.f_564 = 494;
			Param0.f_568 = 77;
			*(&Param0 + 472) = "rand_idle_stand_nospawn";
			*(&Param0 + 480) = "smoking_stand";
			*(&Param0 + 488) = "mex_gateGuards";
			*(&Param0 + 496) = "stand_lookdistance_w_any";
			*(&Param0 + 504) = "stand_lookdistance_w_any";
			return 1;
			break;
		
		case 0x0000000E:
			*(&Param0 + 92) = Vector(-3133,579f, 56,069f, 3318,745f);
			Param0.f_236 = 23,401f;
			*(&Param0 + 284) = Vector(-3140.0f, 57,274f, 3321,29f);
			Param0.f_416 = 123,934f;
			*(&Param0 + 296) = Vector(-3126,042f, 55,027f, 3326,012f);
			Param0.f_420 = 196,906f;
			*(&Param0 + 308) = Vector(-3133,949f, 56,603f, 3310,508f);
			Param0.f_424 = 34,806f;
			*(&Param0 + 320) = Vector(-3122,084f, 70,286f, 3310,626f);
			Param0.f_428 = -60,894f;
			*(&Param0 + 332) = Vector(-3126,811f, 71,742f, 3317,18f);
			Param0.f_432 = -229,938f;
			*(&Param0 + 344) = Vector(-3213,753f, 51,393f, 3308,028f);
			Param0.f_436 = 69,139f;
			*(&Param0 + 356) = Vector(-3164,914f, 40,289f, 3361,648f);
			Param0.f_440 = 168,955f;
			*(&Param0 + 368) = Vector(-3161,107f, 40,583f, 3362,443f);
			Param0.f_444 = 206,087f;
			*(&Param0 + 380) = Vector(-3171,199f, 39,153f, 3269,472f);
			Param0.f_448 = -11,678f;
			*(&Param0 + 392) = Vector(-3167,472f, 39,153f, 3268,428f);
			Param0.f_452 = -3,977f;
			*(&Param0 + 404) = Vector(-3163,745f, 39,153f, 3269,671f);
			Param0.f_456 = -42,562f;
			Param0.f_560 = 397;
			Param0.f_564 = 405;
			Param0.f_568 = 77;
			*(&Param0 + 472) = "stand_lookdistance_w_any";
			*(&Param0 + 480) = "look_distance_binocs";
			*(&Param0 + 488) = "rand_idle_stand";
			*(&Param0 + 496) = "rand_idle_stand";
			*(&Param0 + 504) = "smoking_stand";
			return 1;
			break;
		
		case 0x0000000F:
			*(&Param0 + 92) = Vector(-2336,926f, 17,067f, 3170,493f);
			Param0.f_236 = -2,14f;
			*(&Param0 + 284) = Vector(-2336,072f, 17,067f, 3169,268f);
			Param0.f_416 = -86,214f;
			*(&Param0 + 296) = Vector(-2336,887f, 17,067f, 3166,954f);
			Param0.f_420 = -2,14f;
			*(&Param0 + 308) = Vector(-2330,964f, 17,067f, 3163,609f);
			Param0.f_424 = -23,4f;
			*(&Param0 + 320) = Vector(-2327,604f, 17,067f, 3172,758f);
			Param0.f_428 = -118,706f;
			*(&Param0 + 332) = Vector(-2335,599f, 17,067f, 3174,808f);
			Param0.f_432 = 197,731f;
			*(&Param0 + 344) = Vector(-2340,001f, 17,067f, 3172,798f);
			Param0.f_436 = -13,714f;
			*(&Param0 + 356) = Vector(-2322,803f, 17,067f, 3145,059f);
			Param0.f_440 = 311,211f;
			*(&Param0 + 368) = Vector(-2320,44f, 17,067f, 3146,652f);
			Param0.f_444 = -25,28f;
			*(&Param0 + 380) = Vector(-2316,756f, 17,07f, 3148,32f);
			Param0.f_448 = 5,107f;
			*(&Param0 + 392) = Vector(-2328,458f, 17,067f, 3180,156f);
			Param0.f_452 = 58,412f;
			*(&Param0 + 404) = Vector(-2325,201f, 17,067f, 3177,577f);
			Param0.f_456 = 58,218f;
			Param0.f_560 = 486;
			Param0.f_564 = 494;
			Param0.f_568 = 22;
			*(&Param0 + 472) = "rand_idle_stand_nospaw";
			*(&Param0 + 480) = "look_distance_binocs";
			*(&Param0 + 488) = "look_distance_binocs";
			*(&Param0 + 496) = "rand_idle_nearwall";
			*(&Param0 + 504) = "pee";
			return 1;
			break;
		
		case 0x00000010:
			*(&Param0 + 92) = Vector(-2337,728f, 17,067f, 3170,294f);
			Param0.f_236 = 9,971f;
			*(&Param0 + 284) = Vector(-1946,763f, 30,337f, 3468,948f);
			Param0.f_416 = -88,999f;
			*(&Param0 + 296) = Vector(-1950,671f, 30,338f, 3467,57f);
			Param0.f_420 = 237,607f;
			*(&Param0 + 308) = Vector(-1950,803f, 30,338f, 3470,875f);
			Param0.f_424 = 283,753f;
			*(&Param0 + 320) = Vector(-1948,542f, 30,338f, 3470,916f);
			Param0.f_428 = 342,294f;
			*(&Param0 + 332) = Vector(-1946,635f, 30,338f, 3470,909f);
			Param0.f_432 = 314,856f;
			*(&Param0 + 344) = Vector(-1946,089f, 30,338f, 3466,877f);
			Param0.f_436 = 171,423f;
			*(&Param0 + 356) = Vector(-1931,435f, 31,592f, 3460,451f);
			Param0.f_440 = 5,107f;
			*(&Param0 + 368) = Vector(-1929,337f, 31,849f, 3461,238f);
			Param0.f_444 = 58,412f;
			*(&Param0 + 380) = Vector(-1927,96f, 31,946f, 3462,877f);
			Param0.f_448 = 58,218f;
			*(&Param0 + 392) = Vector(-1949,424f, 30,218f, 3461,784f);
			Param0.f_452 = -206,774f;
			*(&Param0 + 404) = Vector(-1946,031f, 30,195f, 3462,501f);
			Param0.f_456 = 172,571f;
			Param0.f_560 = 397;
			Param0.f_564 = 405;
			Param0.f_568 = 76;
			*(&Param0 + 472) = "look_distance_binocs";
			*(&Param0 + 480) = "stand_lookdistance_w_any";
			*(&Param0 + 488) = "sit_ground_only";
			*(&Param0 + 496) = "sit_ground_smoke";
			*(&Param0 + 504) = "sit_ground_only";
			return 1;
			break;
		
		case 0x00000011:
			*(&Param0 + 92) = Vector(-4314,102f, 5,097f, 3744,501f);
			Param0.f_236 = 43,016f;
			*(&Param0 + 284) = Vector(-4317,295f, 5,097f, 3743,768f);
			Param0.f_416 = -91,905f;
			*(&Param0 + 296) = Vector(-4310,602f, 5,097f, 3745,569f);
			Param0.f_420 = 37,237f;
			*(&Param0 + 308) = Vector(-4313,688f, 5,097f, 3745,833f);
			Param0.f_424 = 345,341f;
			*(&Param0 + 320) = Vector(-4314,063f, 5,097f, 3742,018f);
			Param0.f_428 = 175,597f;
			*(&Param0 + 332) = Vector(-4317,56f, 5,097f, 3741,946f);
			Param0.f_432 = 225,245f;
			*(&Param0 + 344) = Vector(-4317,576f, 5,097f, 3745,841f);
			Param0.f_436 = 315,983f;
			*(&Param0 + 356) = Vector(-4290,656f, 3,974f, 3728,148f);
			Param0.f_440 = -91,776f;
			*(&Param0 + 368) = Vector(-4290,388f, 3,801f, 3730,024f);
			Param0.f_444 = -42,776f;
			*(&Param0 + 380) = Vector(-4315,129f, 4,818f, 3751,202f);
			Param0.f_448 = -11,666f;
			*(&Param0 + 392) = Vector(-4313,023f, 4,706f, 3751,904f);
			Param0.f_452 = 0,707f;
			*(&Param0 + 404) = Vector(-4308,537f, 4,79f, 3750,439f);
			Param0.f_456 = -24,694f;
			Param0.f_560 = 397;
			Param0.f_564 = 405;
			Param0.f_568 = 77;
			*(&Param0 + 472) = "look_distance_binocs";
			*(&Param0 + 480) = "smoking_stand";
			*(&Param0 + 488) = "rand_idle_nearwall";
			*(&Param0 + 496) = "sit_barrel";
			*(&Param0 + 504) = "look_distance_binocs";
			return 1;
			break;
		
		case 0x00000012:
			Param0.f_4 = 2;
			Param0.f_8 = 2;
			Param0.f_12 = 7;
			Function_133(&Param0 + 16, 1);
			Function_133(&Param0 + 16, 2);
			Function_133(&Param0 + 16, 4);
			Function_133(&Param0 + 16, 8);
			Function_133(&Param0 + 16, 16);
			Function_133(&Param0 + 16, 32);
			Function_133(&Param0 + 16, 64);
			Function_133(&Param0 + 24, 1);
			Function_133(&Param0 + 28, 2);
			*(&Param0 + 32) = Vector(-4015,39f, 21,47f, 2401,58f);
			*(&Param0 + 44) = Vector(-4019,6f, 21,47f, 2397,61f);
			*(&Param0 + 104) = Vector(-4017,411f, 21,0644f, 2403,306f);
			Param0.f_240 = 18.0f;
			*(&Param0 + 116) = Vector(-4016,05f, 21,47f, 2402,87f);
			Param0.f_244 = 21.0f;
			*(&Param0 + 128) = Vector(-4014,66f, 21,47f, 2402,34f);
			Param0.f_248 = 26,99f;
			*(&Param0 + 140) = Vector(-4012,81f, 21,0831f, 2401,69f);
			Param0.f_252 = 20,99f;
			*(&Param0 + 152) = Vector(-4021,25f, 21,0831f, 2396,7f);
			Param0.f_256 = -158,9996f;
			*(&Param0 + 164) = Vector(-4019,22f, 21,0901f, 2395,92f);
			Param0.f_260 = -155,9994f;
			*(&Param0 + 176) = Vector(-4018,17f, 21,0922f, 2395,57f);
			Param0.f_264 = -158,9997f;
			*(&Param0 + 200) = Vector(-4013,456f, 21,468f, 2397,704f);
			Param0.f_280 = -70,274f;
			*(&Param0 + 92) = Vector(-4017,441f, 21,468f, 2397,854f);
			Param0.f_236 = 108,646f;
			*(&Param0 + 284) = Vector(-4015,457f, 21,468f, 2398,76f);
			Param0.f_416 = 172,429f;
			*(&Param0 + 296) = Vector(-4013,634f, 21,468f, 2397,108f);
			Param0.f_420 = 158,005f;
			*(&Param0 + 308) = Vector(-4013,326f, 21,468f, 2399,415f);
			Param0.f_424 = 73,958f;
			*(&Param0 + 320) = Vector(-4016,929f, 21,468f, 2397,175f);
			Param0.f_428 = 198,278f;
			*(&Param0 + 332) = Vector(-4018,968f, 21,468f, 2399,702f);
			Param0.f_432 = 248,481f;
			*(&Param0 + 344) = Vector(-4018,745f, 21,469f, 2400,946f);
			Param0.f_436 = 16,41f;
			*(&Param0 + 212) = Vector(-4007,415f, 21,083f, 2402,38f);
			Param0.f_272 = 234,336f;
			*(&Param0 + 224) = Vector(-4008,202f, 20,972f, 2395,384f);
			Param0.f_276 = 193,987f;
			*(&Param0 + 356) = Vector(-4019,287f, 20,967f, 2406,868f);
			Param0.f_440 = 8,376f;
			*(&Param0 + 368) = Vector(-4017,313f, 20,995f, 2406,151f);
			Param0.f_444 = 33,251f;
			*(&Param0 + 380) = Vector(-4020,812f, 21,39f, 2389,644f);
			Param0.f_448 = -136,243f;
			*(&Param0 + 392) = Vector(-4017,785f, 21,265f, 2386,962f);
			Param0.f_452 = 177,627f;
			*(&Param0 + 404) = Vector(-4012,265f, 21,024f, 2388,6f);
			Param0.f_456 = 120,35f;
			Param0.f_560 = 467;
			Param0.f_564 = 476;
			Param0.f_568 = 22;
			*(&Param0 + 472) = "rand_idle_nearwall";
			*(&Param0 + 480) = "rand_idle_stand";
			*(&Param0 + 488) = "sit_barrel";
			*(&Param0 + 496) = "look_distance_binocs";
			*(&Param0 + 504) = "look_distance_binocs";
			return 1;
			break;
		
		case 0x00000013:
			*(&Param0 + 92) = Vector(-276,02f, 73,201f, 2393,458f);
			Param0.f_236 = 179,686f;
			*(&Param0 + 284) = Vector(-274,324f, 73,201f, 2393,741f);
			Param0.f_416 = 51,013f;
			*(&Param0 + 296) = Vector(-289,984f, 72,456f, 2419,312f);
			Param0.f_420 = -183,278f;
			*(&Param0 + 308) = Vector(-273,119f, 73,18f, 2396,791f);
			Param0.f_424 = 270,616f;
			*(&Param0 + 320) = Vector(-273,986f, 73,155f, 2398,214f);
			Param0.f_428 = 270,616f;
			*(&Param0 + 332) = Vector(-277,702f, 73,155f, 2397,789f);
			Param0.f_432 = 121,425f;
			*(&Param0 + 344) = Vector(-278,525f, 73,138f, 2390,977f);
			Param0.f_436 = 44,233f;
			*(&Param0 + 356) = Vector(-292,719f, 75,262f, 2378,368f);
			Param0.f_440 = 137,598f;
			*(&Param0 + 368) = Vector(-297,222f, 75,295f, 2379,061f);
			Param0.f_444 = 207,699f;
			*(&Param0 + 380) = Vector(-286,079f, 75,299f, 2369,13f);
			Param0.f_448 = 248,664f;
			*(&Param0 + 392) = Vector(-284,174f, 75,289f, 2372,132f);
			Param0.f_452 = -79,602f;
			*(&Param0 + 404) = Vector(-282,211f, 74,962f, 2375,943f);
			Param0.f_456 = -18,74f;
			Param0.f_560 = 397;
			Param0.f_564 = 405;
			Param0.f_568 = 76;
			*(&Param0 + 472) = "stand_lookdistance_w_any";
			*(&Param0 + 480) = "nsit_docks";
			*(&Param0 + 488) = "look_out_window_R";
			*(&Param0 + 496) = "look_distance_binocs";
			*(&Param0 + 504) = "look_distance_binocs";
			return 1;
			break;
		
		case 0x00000014:
			*(&Param0 + 92) = Vector(-1910,925f, 29,066f, 2263,904f);
			Param0.f_236 = 0.0f;
			*(&Param0 + 284) = Vector(-1911,897f, 29,17f, 2259,949f);
			Param0.f_416 = 0.0f;
			*(&Param0 + 284) = Vector(-1920,034f, 31,008f, 2265,405f);
			Param0.f_416 = 221,236f;
			*(&Param0 + 296) = Vector(-1892,769f, 30,055f, 2254,382f);
			Param0.f_420 = 221,236f;
			*(&Param0 + 308) = Vector(-1877,283f, 26,099f, 2289,581f);
			Param0.f_424 = 152,442f;
			*(&Param0 + 320) = Vector(-1895,984f, 26,887f, 2247,959f);
			Param0.f_428 = 333,899f;
			*(&Param0 + 344) = Vector(-1909,376f, 29,083f, 2265,966f);
			Param0.f_436 = 221,236f;
			*(&Param0 + 356) = Vector(-1897,51f, 26,15f, 2271,694f);
			Param0.f_440 = 19,763f;
			*(&Param0 + 368) = Vector(-1894,347f, 26,128f, 2268,736f);
			Param0.f_444 = 48,841f;
			*(&Param0 + 380) = Vector(-1917,895f, 28,101f, 2245,381f);
			Param0.f_448 = -178,708f;
			*(&Param0 + 392) = Vector(-1921,323f, 28,113f, 2244,031f);
			Param0.f_452 = 199,115f;
			*(&Param0 + 404) = Vector(-1926,575f, 28,202f, 2244,469f);
			Param0.f_456 = -174,429f;
			Param0.f_560 = 486;
			Param0.f_564 = 494;
			Param0.f_568 = 78;
			*(&Param0 + 472) = "look_distance_binocs";
			*(&Param0 + 480) = "stand_lookdistance_w_any";
			*(&Param0 + 488) = "look_distance_binocs";
			*(&Param0 + 496) = "stand_lookdistance_w_any";
			*(&Param0 + 504) = "look_distance_binocs";
			return 1;
			break;
		
		case 0x00000015:
			Param0.f_4 = 1;
			Param0.f_8 = 1;
			Param0.f_12 = 4;
			Function_133(&Param0 + 16, 1);
			Function_133(&Param0 + 16, 2);
			Function_133(&Param0 + 16, 4);
			Function_133(&Param0 + 16, 8);
			Function_133(&Param0 + 24, 1);
			*(&Param0 + 32) = Vector(124,8f, 72,42f, 2674,02f);
			*(&Param0 + 104) = Vector(125,233f, 72,4417f, 2675,04f);
			Param0.f_240 = 27,58978f;
			*(&Param0 + 116) = Vector(119,64f, 72,3106f, 2670,55f);
			Param0.f_244 = -68,4101f;
			*(&Param0 + 128) = Vector(120,486f, 72,2827f, 2672,62f);
			Param0.f_248 = -65,41f;
			*(&Param0 + 140) = Vector(121,484f, 72,2827f, 2674,54f);
			Param0.f_252 = -62,41014f;
			*(&Param0 + 200) = Vector(121,695f, 72,413f, 2670,63f);
			Param0.f_280 = 115,156f;
			*(&Param0 + 92) = Vector(123,42f, 72,41f, 2670,18f);
			Param0.f_236 = -63,854f;
			*(&Param0 + 284) = Vector(124,188f, 72,409f, 2671,846f);
			Param0.f_416 = 180,71f;
			*(&Param0 + 296) = Vector(129,244f, 72,501f, 2674,226f);
			Param0.f_420 = 222,542f;
			*(&Param0 + 308) = Vector(121,386f, 72,413f, 2669,545f);
			Param0.f_424 = 222,542f;
			*(&Param0 + 320) = Vector(125,005f, 72,412f, 2671,428f);
			Param0.f_428 = 163,679f;
			*(&Param0 + 332) = Vector(122,952f, 72,413f, 2673,766f);
			Param0.f_432 = 305,582f;
			*(&Param0 + 344) = Vector(121,713f, 72,413f, 2670,76f);
			Param0.f_436 = 210,612f;
			*(&Param0 + 356) = Vector(92,981f, 71,278f, 2684,761f);
			Param0.f_440 = 195,17f;
			*(&Param0 + 368) = Vector(96,374f, 71,278f, 2684,102f);
			Param0.f_444 = 211,049f;
			*(&Param0 + 380) = Vector(99,038f, 71,278f, 2683,421f);
			Param0.f_448 = -178,708f;
			*(&Param0 + 392) = Vector(104,447f, 71,802f, 2673,734f);
			Param0.f_452 = 108,966f;
			*(&Param0 + 404) = Vector(107,48f, 72,023f, 2671,56f);
			Param0.f_456 = 105,112f;
			Param0.f_560 = 397;
			Param0.f_564 = 405;
			Param0.f_568 = 78;
			*(&Param0 + 472) = "look_distance_binocs";
			*(&Param0 + 480) = "look_distance_binocs";
			*(&Param0 + 488) = "rand_idle_nearwall";
			*(&Param0 + 496) = "stand_lookdistance_w_any";
			*(&Param0 + 504) = "smoking_stand";
			return 1;
			break;
		
		case 0x00000016:
			*(&Param0 + 92) = Vector(-2302,359f, 24,248f, 3007,561f);
			Param0.f_236 = 69,576f;
			*(&Param0 + 284) = Vector(-2302,725f, 24,279f, 3009,553f);
			Param0.f_416 = -136,418f;
			*(&Param0 + 296) = Vector(-2301,099f, 24,287f, 3008,008f);
			Param0.f_420 = 104,512f;
			*(&Param0 + 308) = Vector(-2310,734f, 24,094f, 3005,089f);
			Param0.f_424 = 285,688f;
			*(&Param0 + 320) = Vector(-2307,478f, 24,094f, 3008,271f);
			Param0.f_428 = 357,122f;
			*(&Param0 + 332) = Vector(-2311,779f, 24,094f, 3006,169f);
			Param0.f_432 = 163,369f;
			*(&Param0 + 344) = Vector(-2308,875f, 24,094f, 3012,738f);
			Param0.f_436 = 60,202f;
			*(&Param0 + 356) = Vector(-2285,946f, 23,773f, 3003,648f);
			Param0.f_440 = 276,733f;
			*(&Param0 + 368) = Vector(-2287,244f, 23,374f, 3005,345f);
			Param0.f_444 = 266,906f;
			*(&Param0 + 380) = Vector(-2318,237f, 23,09f, 3000,99f);
			Param0.f_448 = -112,242f;
			*(&Param0 + 392) = Vector(-2320,324f, 23,09f, 3003,359f);
			Param0.f_452 = -108,476f;
			*(&Param0 + 404) = Vector(-2318,79f, 23,09f, 3006,107f);
			Param0.f_456 = -66,319f;
			Param0.f_560 = 486;
			Param0.f_564 = 494;
			Param0.f_568 = 76;
			*(&Param0 + 472) = "rand_idle_nearwall";
			*(&Param0 + 480) = "look_out_window_L";
			*(&Param0 + 488) = "rand_idle_nearwall_shoulder_L";
			*(&Param0 + 496) = "look_distance_binocs";
			*(&Param0 + 504) = "look_distance_binocs";
			return 1;
			break;
		
		case 0x00000017:
			*(&Param0 + 92) = Vector(-2006,736f, 42,176f, 3043,272f);
			Param0.f_236 = 88,686f;
			*(&Param0 + 284) = Vector(-2006,836f, 42,042f, 3045,16f);
			Param0.f_416 = 31,174f;
			*(&Param0 + 296) = Vector(-2007,755f, 42,041f, 3041,964f);
			Param0.f_420 = 228,602f;
			*(&Param0 + 308) = Vector(-2012,868f, 42,041f, 3048,789f);
			Param0.f_424 = 282,164f;
			*(&Param0 + 320) = Vector(-2009,239f, 42,129f, 3051,271f);
			Param0.f_428 = 331,148f;
			*(&Param0 + 332) = Vector(-2006,306f, 42,041f, 3052,617f);
			Param0.f_432 = 0,34f;
			*(&Param0 + 344) = Vector(-2001,105f, 42,041f, 3046,785f);
			Param0.f_436 = 77,931f;
			*(&Param0 + 356) = Vector(-2027,215f, 42,041f, 3014,213f);
			Param0.f_440 = 300,121f;
			*(&Param0 + 368) = Vector(-2023,29f, 42,041f, 3020,031f);
			Param0.f_444 = 342,792f;
			*(&Param0 + 380) = Vector(-2000,098f, 42,041f, 3036,175f);
			Param0.f_448 = -108,44f;
			*(&Param0 + 392) = Vector(-1999,392f, 42,041f, 3033,619f);
			Param0.f_452 = -90,929f;
			*(&Param0 + 404) = Vector(-2000,346f, 42,041f, 3030,437f);
			Param0.f_456 = -92,428f;
			Param0.f_560 = 486;
			Param0.f_564 = 494;
			Param0.f_568 = 22;
			*(&Param0 + 472) = "rand_idle_stand";
			*(&Param0 + 480) = "smoking_stand";
			*(&Param0 + 488) = "mex_gateGuards";
			*(&Param0 + 496) = "stand_lookdistance_w_any";
			*(&Param0 + 504) = "stand_lookdistance_w_any";
			return 1;
			break;
		
		case 0x00000018:
			Param0.f_4 = 2;
			Param0.f_8 = 5;
			Param0.f_12 = 7;
			Function_133(&Param0 + 16, 1);
			Function_133(&Param0 + 16, 2);
			Function_133(&Param0 + 16, 4);
			Function_133(&Param0 + 16, 8);
			Function_133(&Param0 + 20, 16);
			Function_133(&Param0 + 20, 32);
			Function_133(&Param0 + 20, 64);
			Function_133(&Param0 + 24, 1);
			Function_133(&Param0 + 24, 2);
			Function_133(&Param0 + 24, 4);
			Function_133(&Param0 + 28, 8);
			Function_133(&Param0 + 28, 16);
			*(&Param0 + 32) = Vector(-933,046f, 102,412f, 2754,824f);
			*(&Param0 + 44) = Vector(-934,29f, 102,412f, 2753,085f);
			*(&Param0 + 56) = Vector(-936,489f, 102,412f, 2749,95f);
			*(&Param0 + 68) = Vector(-924,889f, 102,412f, 2749,364f);
			*(&Param0 + 80) = Vector(-926,622f, 102,412f, 2746,998f);
			*(&Param0 + 104) = Vector(-934,086f, 102,412f, 2754,75f);
			Param0.f_240 = -51,43177f;
			*(&Param0 + 116) = Vector(-934,93f, 102,412f, 2753,63f);
			Param0.f_244 = -57,54f;
			*(&Param0 + 128) = Vector(-936,926f, 102,403f, 2750,86f);
			Param0.f_248 = -56,40995f;
			*(&Param0 + 140) = Vector(-931,301f, 102,412f, 2758,66f);
			Param0.f_252 = -56,43486f;
			*(&Param0 + 152) = Vector(-924,354f, 102,412f, 2748,71f);
			Param0.f_256 = 134,459f;
			*(&Param0 + 164) = Vector(-925,075f, 102,412f, 2747,82f);
			Param0.f_260 = 122,492f;
			*(&Param0 + 176) = Vector(-925,893f, 102,412f, 2746,57f);
			Param0.f_264 = 115,843f;
			*(&Param0 + 200) = Vector(-932,868f, 102,415f, 2746,785f);
			Param0.f_280 = 212,28f;
			*(&Param0 + 92) = Vector(-929,793f, 102,412f, 2750,46f);
			Param0.f_236 = -50,84f;
			*(&Param0 + 212) = Vector(-940,871f, 102,342f, 2749,936f);
			Param0.f_272 = 178,269f;
			*(&Param0 + 224) = Vector(-939,418f, 102,266f, 2752,68f);
			Param0.f_276 = 120,908f;
			*(&Param0 + 284) = Vector(-930,626f, 102,4122f, 2752.0f);
			Param0.f_416 = -28,78f;
			*(&Param0 + 296) = Vector(-924,765f, 102,412f, 2753,702f);
			Param0.f_420 = 72,373f;
			*(&Param0 + 308) = Vector(-927,281f, 102,412f, 2754,368f);
			Param0.f_424 = 69,79f;
			*(&Param0 + 320) = Vector(-929,789f, 102,504f, 2756,111f);
			Param0.f_428 = 341,777f;
			*(&Param0 + 332) = Vector(-934,494f, 102,42f, 2747,736f);
			Param0.f_432 = 269,014f;
			*(&Param0 + 344) = Vector(-932,133f, 102,413f, 2746,273f);
			Param0.f_436 = 145,15f;
			*(&Param0 + 356) = Vector(-976,159f, 103,637f, 2719,504f);
			Param0.f_440 = -191,58f;
			*(&Param0 + 368) = Vector(-974,168f, 103,637f, 2720,047f);
			Param0.f_444 = 486,238f;
			*(&Param0 + 380) = Vector(-933,686f, 102,412f, 2758,172f);
			Param0.f_448 = 297,957f;
			*(&Param0 + 392) = Vector(-930,962f, 102,387f, 2762,141f);
			Param0.f_452 = -89,501f;
			*(&Param0 + 404) = Vector(-932,674f, 102,412f, 2759,572f);
			Param0.f_456 = -38,718f;
			Param0.f_560 = 477;
			Param0.f_564 = 485;
			Param0.f_568 = 79;
			*(&Param0 + 472) = "rand_idle_stand_nospawn";
			*(&Param0 + 480) = "smoking_stand";
			*(&Param0 + 488) = "mex_gateGuards";
			*(&Param0 + 496) = "stand_lookdistance_w_any";
			*(&Param0 + 504) = "stand_lookdistance_w_any";
			return 1;
			break;
		
		case 0x00000019:
			*(&Param0 + 92) = Vector(-594,268f, 30,877f, 4008,359f);
			Param0.f_236 = 170,652f;
			*(&Param0 + 284) = Vector(-597,294f, 30,877f, 4005,67f);
			Param0.f_416 = -138,782f;
			*(&Param0 + 296) = Vector(-639,225f, 13,58f, 3993,509f);
			Param0.f_420 = -292,51f;
			*(&Param0 + 308) = Vector(-628,453f, 20,346f, 4004,586f);
			Param0.f_424 = -336,107f;
			*(&Param0 + 320) = Vector(-619,798f, 20,664f, 3987,649f);
			Param0.f_428 = -308,869f;
			*(&Param0 + 332) = Vector(-596.0f, 30,877f, 4002,884f);
			Param0.f_432 = 43,992f;
			*(&Param0 + 344) = Vector(-598,929f, 30,877f, 4007,492f);
			Param0.f_436 = 115,375f;
			*(&Param0 + 356) = Vector(-656,717f, 13,171f, 3987,879f);
			Param0.f_440 = 206,407f;
			*(&Param0 + 368) = Vector(-654,461f, 13,465f, 3985,152f);
			Param0.f_444 = 227,436f;
			*(&Param0 + 380) = Vector(-651,5f, 13,744f, 3982,614f);
			Param0.f_448 = -118,83f;
			*(&Param0 + 392) = Vector(-633,228f, 21,456f, 4015,153f);
			Param0.f_452 = -24,598f;
			*(&Param0 + 404) = Vector(-629,02f, 22,181f, 4014,968f);
			Param0.f_456 = 0,56f;
			Param0.f_560 = 516;
			Param0.f_564 = 531;
			Param0.f_568 = 241;
			*(&Param0 + 472) = "stand_lookdistance_w_any";
			*(&Param0 + 480) = "look_distance_binocs";
			*(&Param0 + 488) = "stand_lookdistance_w_any";
			*(&Param0 + 496) = "stand_lookdistance_w_any";
			*(&Param0 + 504) = "rand_idle_nearwall";
			return 1;
			break;
		
		case 0x0000001A:
			*(&Param0 + 92) = Vector(-2229,454f, 23,263f, 4452,343f);
			Param0.f_236 = 15,678f;
			*(&Param0 + 284) = Vector(-2228,686f, 23,263f, 4453,672f);
			Param0.f_416 = 269,799f;
			*(&Param0 + 296) = Vector(-2227,613f, 23,264f, 4451,309f);
			Param0.f_420 = 172,945f;
			*(&Param0 + 308) = Vector(-2232,662f, 23,09f, 4453,425f);
			Param0.f_424 = 301,728f;
			*(&Param0 + 320) = Vector(-2235,676f, 23,09f, 4450,952f);
			Param0.f_428 = 318,266f;
			*(&Param0 + 332) = Vector(-2237,908f, 23,09f, 4450,775f);
			Param0.f_432 = 167,035f;
			*(&Param0 + 344) = Vector(-2234,18f, 23,084f, 4457,452f);
			Param0.f_436 = 64,468f;
			*(&Param0 + 356) = Vector(-2261,394f, 23,09f, 4470,363f);
			Param0.f_440 = 16,854f;
			*(&Param0 + 368) = Vector(-2258,274f, 23,09f, 4467,679f);
			Param0.f_444 = 26,089f;
			*(&Param0 + 380) = Vector(-2256,098f, 23,09f, 4464,197f);
			Param0.f_448 = 42,078f;
			*(&Param0 + 392) = Vector(-2235,659f, 22,666f, 4469,637f);
			Param0.f_452 = -24,598f;
			*(&Param0 + 404) = Vector(-2232,33f, 22,295f, 4469,952f);
			Param0.f_456 = 0,56f;
			Param0.f_560 = 496;
			Param0.f_564 = 504;
			Param0.f_568 = 241;
			*(&Param0 + 472) = "rand_idle_nearwall";
			*(&Param0 + 480) = "rand_idle_nearwall";
			*(&Param0 + 488) = "stand_lookdistance_w_any";
			*(&Param0 + 496) = "look_out_window_R";
			*(&Param0 + 504) = "look_distance_binocs";
			return 1;
			break;
		
		case 0x0000001B:
			Param0.f_4 = 2;
			Param0.f_8 = 2;
			Param0.f_12 = 5;
			Function_133(&Param0 + 16, 1);
			Function_133(&Param0 + 16, 2);
			Function_133(&Param0 + 16, 4);
			Function_133(&Param0 + 20, 8);
			Function_133(&Param0 + 20, 16);
			Function_133(&Param0 + 24, 1);
			Function_133(&Param0 + 28, 2);
			*(&Param0 + 32) = Vector(-2146,41f, 18,68f, 4968,09f);
			*(&Param0 + 44) = Vector(-2148,09f, 18,6f, 4975,03f);
			*(&Param0 + 104) = Vector(-2146,39f, 18,6664f, 4967,08f);
			Param0.f_240 = -179,9999f;
			*(&Param0 + 116) = Vector(-2149,77f, 18,6475f, 4967,08f);
			Param0.f_244 = 173,9998f;
			*(&Param0 + 128) = Vector(-2151,57f, 18,6481f, 4967,2f);
			Param0.f_248 = -167,4099f;
			*(&Param0 + 140) = Vector(-2149,26f, 18,5743f, 4974,89f);
			Param0.f_252 = -83,4349f;
			*(&Param0 + 152) = Vector(-2150,66f, 18,567f, 4974,58f);
			Param0.f_256 = 0,565044f;
			*(&Param0 + 200) = Vector(-2150,144f, 18,767f, 4969,001f);
			Param0.f_280 = -10.0f;
			*(&Param0 + 92) = Vector(-2150,144f, 18,769f, 4970,876f);
			Param0.f_236 = -91,877f;
			*(&Param0 + 284) = Vector(-2151,557f, 18,769f, 4968,783f);
			Param0.f_416 = -2,067f;
			*(&Param0 + 296) = Vector(-2151,326f, 18,923f, 4972,898f);
			Param0.f_420 = 310,943f;
			*(&Param0 + 308) = Vector(-2151,132f, 18,779f, 4969,101f);
			Param0.f_424 = 258,013f;
			*(&Param0 + 320) = Vector(-2144,955f, 18,687f, 4969,136f);
			Param0.f_428 = 175,623f;
			*(&Param0 + 332) = Vector(-2144,075f, 18,72f, 4976,095f);
			Param0.f_432 = 60,675f;
			*(&Param0 + 344) = Vector(-2143,88f, 18,554f, 4973,849f);
			Param0.f_436 = 107,552f;
			*(&Param0 + 212) = Vector(-2145,371f, 16,058f, 4946,544f);
			Param0.f_272 = 35,385f;
			*(&Param0 + 224) = Vector(-2142,939f, 17,556f, 4955,767f);
			Param0.f_276 = 40,164f;
			*(&Param0 + 356) = Vector(-2153,897f, 18,18f, 4961,988f);
			Param0.f_440 = -180,427f;
			*(&Param0 + 368) = Vector(-2151,259f, 18,206f, 4961,947f);
			Param0.f_444 = 161,988f;
			*(&Param0 + 380) = Vector(-2160,059f, 18,784f, 4975,642f);
			Param0.f_448 = -66,278f;
			*(&Param0 + 392) = Vector(-2160,758f, 18,991f, 4972,499f);
			Param0.f_452 = -91,17f;
			*(&Param0 + 404) = Vector(-2162,294f, 18,654f, 4970,544f);
			Param0.f_456 = -94,479f;
			Param0.f_560 = 406;
			Param0.f_564 = 414;
			Param0.f_568 = 240;
			*(&Param0 + 472) = "rand_idle_stand";
			*(&Param0 + 480) = "rand_idle_nearwall";
			*(&Param0 + 488) = "look_out_window_L";
			*(&Param0 + 496) = "rand_idle_nearwall";
			*(&Param0 + 504) = "rand_idle_stand";
			return 1;
			break;
		
		case 0x0000001C:
			*(&Param0 + 92) = Vector(-3860,593f, 7,026f, 4319,981f);
			Param0.f_236 = -90,815f;
			*(&Param0 + 284) = Vector(-3859,166f, 7,134f, 4320,9f);
			Param0.f_416 = 136,441f;
			*(&Param0 + 296) = Vector(-3844,011f, 9,254f, 4311,946f);
			Param0.f_420 = -21,903f;
			*(&Param0 + 308) = Vector(-3863,951f, 7,777f, 4303,869f);
			Param0.f_424 = -21,903f;
			*(&Param0 + 320) = Vector(-3852.0f, 8,637f, 4312.0f);
			Param0.f_428 = -64,114f;
			*(&Param0 + 332) = Vector(-3832.0f, 12,518f, 4336.0f);
			Param0.f_432 = -129,939f;
			*(&Param0 + 344) = Vector(-3899,941f, 8,031f, 4340,052f);
			Param0.f_436 = -228,003f;
			*(&Param0 + 356) = Vector(-3888,227f, 7,087f, 4312,428f);
			Param0.f_440 = -180,427f;
			*(&Param0 + 368) = Vector(-3886,172f, 7,144f, 4312,964f);
			Param0.f_444 = 153,52f;
			*(&Param0 + 380) = Vector(-3883,771f, 7,16f, 4314,396f);
			Param0.f_448 = 81,666f;
			*(&Param0 + 392) = Vector(-3904,027f, 8,026f, 4346,417f);
			Param0.f_452 = 2,248f;
			*(&Param0 + 404) = Vector(-3907,203f, 8,013f, 4347,759f);
			Param0.f_456 = -21,903f;
			Param0.f_560 = 516;
			Param0.f_564 = 531;
			Param0.f_568 = 241;
			*(&Param0 + 472) = "look_distance_binocs";
			*(&Param0 + 480) = "look_distance_binocs";
			*(&Param0 + 488) = "rand_idle_stand";
			*(&Param0 + 496) = "rand_idle_stand";
			*(&Param0 + 504) = "look_distance_binocs";
			return 1;
			break;
		
		case 0x0000001D:
			*(&Param0 + 92) = Vector(-2718,606f, 56,177f, 4626,842f);
			Param0.f_236 = 82,944f;
			*(&Param0 + 284) = Vector(-2720,237f, 56,14f, 4631,692f);
			Param0.f_416 = 158,989f;
			*(&Param0 + 296) = Vector(-2729,397f, 48,497f, 4677,15f);
			Param0.f_420 = -110,579f;
			*(&Param0 + 308) = Vector(-2741,735f, 54,206f, 4660,338f);
			Param0.f_424 = -119,906f;
			*(&Param0 + 320) = Vector(-2751,354f, 54,564f, 4652,214f);
			Param0.f_428 = 18,414f;
			*(&Param0 + 332) = Vector(-2719,352f, 56,14f, 4623,413f);
			Param0.f_432 = 150,864f;
			*(&Param0 + 344) = Vector(-2724,634f, 56,107f, 4623,532f);
			Param0.f_436 = 81,922f;
			*(&Param0 + 356) = Vector(-2745,797f, 47,988f, 4625,989f);
			Param0.f_440 = -26,293f;
			*(&Param0 + 368) = Vector(-2747,859f, 47,693f, 4624,839f);
			Param0.f_444 = 357,726f;
			*(&Param0 + 380) = Vector(-2713,109f, 45,646f, 4660,732f);
			Param0.f_448 = -61,194f;
			*(&Param0 + 392) = Vector(-2711,452f, 45,176f, 4662,766f);
			Param0.f_452 = -86,959f;
			*(&Param0 + 404) = Vector(-2709,494f, 44,534f, 4665,703f);
			Param0.f_456 = 322,758f;
			Param0.f_560 = 406;
			Param0.f_564 = 414;
			Param0.f_568 = 240;
			*(&Param0 + 472) = "look_distance_binocs";
			*(&Param0 + 480) = "stand_lookdistance_w_any";
			*(&Param0 + 488) = "rand_idle_stand";
			*(&Param0 + 496) = "sit_ground_smoke";
			*(&Param0 + 504) = "look_distance_binocs";
			return 1;
			break;
		
		case 0x0000001E:
			*(&Param0 + 92) = Vector(-1467,45f, 20,603f, 4901,757f);
			Param0.f_236 = -162,78f;
			*(&Param0 + 284) = Vector(-1466,004f, 20,603f, 4902,112f);
			Param0.f_416 = -93,268f;
			*(&Param0 + 296) = Vector(-1451,772f, 19,108f, 4898,179f);
			Param0.f_420 = -160,576f;
			*(&Param0 + 308) = Vector(-1454,196f, 19,055f, 4894,595f);
			Param0.f_424 = -38,336f;
			*(&Param0 + 320) = Vector(-1450,552f, 19,693f, 4912,277f);
			Param0.f_428 = -90,774f;
			*(&Param0 + 332) = Vector(-1450,581f, 19,693f, 4914,392f);
			Param0.f_432 = -90,774f;
			*(&Param0 + 344) = Vector(-1465,731f, 20,603f, 4897,664f);
			Param0.f_436 = 301,206f;
			*(&Param0 + 356) = Vector(-1430,556f, 17,862f, 4892,925f);
			Param0.f_440 = 108,339f;
			*(&Param0 + 368) = Vector(-1431,704f, 17,763f, 4891,236f);
			Param0.f_444 = 133,614f;
			*(&Param0 + 380) = Vector(-1473,657f, 20,603f, 4911,594f);
			Param0.f_448 = -119,795f;
			*(&Param0 + 392) = Vector(-1473,616f, 20,603f, 4915,059f);
			Param0.f_452 = -86,959f;
			*(&Param0 + 404) = Vector(-1471,429f, 20,603f, 4917,822f);
			Param0.f_456 = -35,592f;
			Param0.f_560 = 516;
			Param0.f_564 = 531;
			Param0.f_568 = 239;
			*(&Param0 + 472) = "rand_idle_nearwall_shoulder_R";
			*(&Param0 + 480) = "stand_lookdistance_w_any";
			*(&Param0 + 488) = "rand_idle_stand";
			*(&Param0 + 496) = "rand_idle_sit_ground";
			*(&Param0 + 504) = "smoking_stand";
			return 1;
			break;
		
		case 0x0000001F:
			*(&Param0 + 92) = Vector(-3372,019f, 56,259f, 4774,489f);
			Param0.f_236 = -19,982f;
			*(&Param0 + 284) = Vector(-3371,442f, 56,214f, 4771,472f);
			Param0.f_416 = -76,399f;
			*(&Param0 + 296) = Vector(-3393,076f, 54,674f, 4743,264f);
			Param0.f_420 = 286,167f;
			*(&Param0 + 308) = Vector(-3393,214f, 55,216f, 4756,916f);
			Param0.f_424 = 107,552f;
			*(&Param0 + 320) = Vector(-3383,994f, 55,505f, 4741,233f);
			Param0.f_428 = 74,847f;
			*(&Param0 + 332) = Vector(-3382,398f, 55,677f, 4740,638f);
			Param0.f_432 = 331,954f;
			*(&Param0 + 344) = Vector(-3376,667f, 55,897f, 4740,309f);
			Param0.f_436 = 338,64f;
			*(&Param0 + 356) = Vector(-3391,581f, 46,292f, 4692,715f);
			Param0.f_440 = -74,949f;
			*(&Param0 + 368) = Vector(-3392,009f, 45,853f, 4690,46f);
			Param0.f_444 = 293,54f;
			*(&Param0 + 380) = Vector(-3391,6f, 54,824f, 4744.0f);
			Param0.f_448 = -8,776f;
			*(&Param0 + 392) = Vector(-3389,719f, 55,082f, 4743,2f);
			Param0.f_452 = -2,587f;
			*(&Param0 + 404) = Vector(-3387,438f, 55,154f, 4743,16f);
			Param0.f_456 = 18,612f;
			Param0.f_560 = 516;
			Param0.f_564 = 531;
			Param0.f_568 = 239;
			*(&Param0 + 472) = "rand_idle_nearwall";
			*(&Param0 + 480) = "stand_lookdistance_w_any";
			*(&Param0 + 488) = "rand_idle_stand";
			*(&Param0 + 496) = "rand_idle_stand";
			*(&Param0 + 504) = "rand_idle_stand";
			return 1;
			break;
		
		case 0x00000020:
			*(&Param0 + 92) = Vector(-1200,815f, 19,177f, 4963,429f);
			Param0.f_236 = -227,436f;
			*(&Param0 + 284) = Vector(-1200,294f, 19,035f, 4966,604f);
			Param0.f_416 = 224,446f;
			*(&Param0 + 296) = Vector(-1201,298f, 19,075f, 4967,346f);
			Param0.f_420 = 21,338f;
			*(&Param0 + 308) = Vector(-1204,447f, 19,075f, 4963,138f);
			Param0.f_424 = 236,595f;
			*(&Param0 + 320) = Vector(-1200,658f, 19,075f, 4960,558f);
			Param0.f_428 = 203,712f;
			*(&Param0 + 332) = Vector(-1205,747f, 19,075f, 4961,868f);
			Param0.f_432 = 183,278f;
			*(&Param0 + 344) = Vector(-1202,148f, 19,075f, 4958,978f);
			Param0.f_436 = 288,224f;
			*(&Param0 + 356) = Vector(-1179,418f, 17,055f, 4982,803f);
			Param0.f_440 = -40,128f;
			*(&Param0 + 368) = Vector(-1181,623f, 17,064f, 4980,798f);
			Param0.f_444 = 293,54f;
			*(&Param0 + 380) = Vector(-1188,151f, 18,071f, 4968,483f);
			Param0.f_448 = -8,776f;
			*(&Param0 + 392) = Vector(-1185,913f, 18,071f, 4968,297f);
			Param0.f_452 = -25,341f;
			*(&Param0 + 404) = Vector(-1184,545f, 18,071f, 4969,665f);
			Param0.f_456 = -40,868f;
			Param0.f_560 = 496;
			Param0.f_564 = 504;
			Param0.f_568 = 253;
			*(&Param0 + 472) = "rand_idle_stand";
			*(&Param0 + 480) = "rand_idle_nearwall";
			*(&Param0 + 488) = "look_distance_binocs";
			*(&Param0 + 496) = "look_distance_binocs";
			*(&Param0 + 504) = "rand_idle_nearwall";
			return 1;
			break;
		
		case 0x00000021:
			*(&Param0 + 92) = Vector(-2426,763f, 9,035f, 3938,964f);
			Param0.f_236 = 233,065f;
			*(&Param0 + 284) = Vector(-2422,158f, 8,849f, 3944.0f);
			Param0.f_416 = 269,799f;
			*(&Param0 + 296) = Vector(-2424.0f, 8,849f, 3944.0f);
			Param0.f_420 = 395,053f;
			*(&Param0 + 308) = Vector(-2425,238f, 8,849f, 3942,791f);
			Param0.f_424 = 326,055f;
			*(&Param0 + 320) = Vector(-2414,324f, 11,967f, 3926,785f);
			Param0.f_428 = 305,944f;
			*(&Param0 + 332) = Vector(-2420.0f, 8,32f, 3948.0f);
			Param0.f_432 = 254,555f;
			*(&Param0 + 344) = Vector(-2420.0f, 9,035f, 3936.0f);
			Param0.f_436 = 269,799f;
			*(&Param0 + 356) = Vector(-2386,303f, 13,951f, 3929,351f);
			Param0.f_440 = 106,469f;
			*(&Param0 + 368) = Vector(-2386,661f, 13,959f, 3927,133f);
			Param0.f_444 = 135,426f;
			*(&Param0 + 380) = Vector(-2426,256f, 9,03f, 3940,356f);
			Param0.f_448 = 40,635f;
			*(&Param0 + 392) = Vector(-2422,997f, 9,026f, 3940,204f);
			Param0.f_452 = -25,341f;
			*(&Param0 + 404) = Vector(-2421,01f, 8,873f, 3942,721f);
			Param0.f_456 = -71,706f;
			Param0.f_560 = 496;
			Param0.f_564 = 504;
			Param0.f_568 = 317;
			*(&Param0 + 472) = "rand_idle_sit_ground";
			*(&Param0 + 480) = "rand_idle_sit_ground";
			*(&Param0 + 488) = "stand_lookdistance_w_any";
			*(&Param0 + 496) = "look_distance_binocs";
			*(&Param0 + 504) = "stand_lookdistance_w_any";
			return 1;
			break;
		
		case 0x00000022:
			*(&Param0 + 92) = Vector(-2804,866f, 16,508f, 3992,555f);
			Param0.f_236 = -74,028f;
			*(&Param0 + 284) = Vector(-2807,604f, 16,364f, 3994,217f);
			Param0.f_416 = -233,627f;
			*(&Param0 + 296) = Vector(-2802,868f, 16,447f, 3993,188f);
			Param0.f_420 = -221,419f;
			*(&Param0 + 308) = Vector(-2791,689f, 14,463f, 4004,19f);
			Param0.f_424 = 233,065f;
			*(&Param0 + 320) = Vector(-2801,971f, 14,191f, 3979,248f);
			Param0.f_428 = -382,11f;
			*(&Param0 + 332) = Vector(-2821,742f, 15,093f, 4018,304f);
			Param0.f_432 = 203,293f;
			*(&Param0 + 344) = Vector(-2801,382f, 16,272f, 3993,622f);
			Param0.f_436 = -116,089f;
			*(&Param0 + 356) = Vector(-2807,759f, 14,284f, 3978,753f);
			Param0.f_440 = 254,933f;
			*(&Param0 + 368) = Vector(-2804,269f, 13,895f, 3976,22f);
			Param0.f_444 = 172,987f;
			*(&Param0 + 380) = Vector(-2799,801f, 16,116f, 3995,266f);
			Param0.f_448 = -3,069f;
			*(&Param0 + 392) = Vector(-2796,837f, 15,872f, 3995,54f);
			Param0.f_452 = 7,12f;
			*(&Param0 + 404) = Vector(-2793,27f, 15,448f, 3995,925f);
			Param0.f_456 = 73,417f;
			Param0.f_560 = 406;
			Param0.f_564 = 414;
			Param0.f_568 = 241;
			*(&Param0 + 472) = "rand_idle_sit_ground";
			*(&Param0 + 480) = "rand_idle_sit_ground";
			*(&Param0 + 488) = "rand_idle_stand";
			*(&Param0 + 496) = "sit_ground_smoke";
			*(&Param0 + 504) = "stand_lookdistance_w_any";
			return 1;
			break;
		
		case 0x00000023:
			*(&Param0 + 92) = Vector(-1356,416f, 13,051f, 4308,14f);
			Param0.f_236 = -57,053f;
			*(&Param0 + 284) = Vector(-1354,682f, 13,042f, 4311,322f);
			Param0.f_416 = -148,611f;
			*(&Param0 + 296) = Vector(-1388,408f, 13,01f, 4308,178f);
			Param0.f_420 = 110,556f;
			*(&Param0 + 308) = Vector(-1346,633f, 13,031f, 4275,531f);
			Param0.f_424 = -18,343f;
			*(&Param0 + 320) = Vector(-1348,937f, 13,04f, 4295,117f);
			Param0.f_428 = -378,398f;
			*(&Param0 + 332) = Vector(-1372,707f, 13,051f, 4300,24f);
			Param0.f_432 = 147,232f;
			*(&Param0 + 344) = Vector(-1358,335f, 13,074f, 4307,753f);
			Param0.f_436 = 29,057f;
			*(&Param0 + 356) = Vector(-1397,48f, 13,051f, 4300,768f);
			Param0.f_440 = 254,933f;
			*(&Param0 + 368) = Vector(-1398,932f, 13,051f, 4303,633f);
			Param0.f_444 = -84,533f;
			*(&Param0 + 380) = Vector(-1329,279f, 13,051f, 4284,976f);
			Param0.f_448 = 173,771f;
			*(&Param0 + 392) = Vector(-1327,024f, 13,051f, 4284,387f);
			Param0.f_452 = -168,443f;
			*(&Param0 + 404) = Vector(-1323,689f, 13,051f, 4284,289f);
			Param0.f_456 = 193,516f;
			Param0.f_560 = 406;
			Param0.f_564 = 414;
			Param0.f_568 = 240;
			*(&Param0 + 472) = "rand_idle_sit_ground";
			*(&Param0 + 480) = "stand_lookdistance_w_any";
			*(&Param0 + 488) = "look_distance_binocs";
			*(&Param0 + 496) = "stand_lookdistance_w_any";
			*(&Param0 + 504) = "rand_idle_nearwall";
			return 1;
			break;
		
		case 0x00000024:
			*(&Param0 + 92) = Vector(-3724,915f, 11,88f, 4784,509f);
			Param0.f_236 = -38,444f;
			*(&Param0 + 284) = Vector(-3727,532f, 12,046f, 4789,082f);
			Param0.f_416 = -235,401f;
			*(&Param0 + 296) = Vector(-3750,316f, 12,608f, 4780,991f);
			Param0.f_420 = 144,385f;
			*(&Param0 + 308) = Vector(-3728,437f, 8,915f, 4752,855f);
			Param0.f_424 = 107,823f;
			*(&Param0 + 320) = Vector(-3730,176f, 9,026f, 4800,344f);
			Param0.f_428 = -329,341f;
			*(&Param0 + 332) = Vector(-3706,888f, 9,246f, 4771,759f);
			Param0.f_432 = -306,654f;
			*(&Param0 + 344) = Vector(-3719,76f, 12,307f, 4781,099f);
			Param0.f_436 = -59,906f;
			*(&Param0 + 356) = Vector(-3584,686f, 10,095f, 4686,505f);
			Param0.f_440 = 100,477f;
			*(&Param0 + 368) = Vector(-3585,128f, 10,045f, 4683,631f);
			Param0.f_444 = -278,036f;
			*(&Param0 + 380) = Vector(-3570,844f, 9,989f, 4674,944f);
			Param0.f_448 = 350,008f;
			*(&Param0 + 392) = Vector(-3568,908f, 10,055f, 4675,852f);
			Param0.f_452 = -49,8f;
			*(&Param0 + 404) = Vector(-3567,841f, 10,039f, 4678,223f);
			Param0.f_456 = 265,068f;
			Param0.f_560 = 406;
			Param0.f_564 = 414;
			Param0.f_568 = 239;
			*(&Param0 + 472) = "look_distance_binocs";
			*(&Param0 + 480) = "stand_lookdistance_w_any";
			*(&Param0 + 488) = "look_distance_binocs";
			*(&Param0 + 496) = "stand_lookdistance_w_any";
			*(&Param0 + 504) = "rand_idle_stand";
			return 1;
			break;
		
		case 0x00000025:
			*(&Param0 + 92) = Vector(-526,81f, 28,612f, 3584,959f);
			Param0.f_236 = -308,869f;
			*(&Param0 + 284) = Vector(-527,271f, 28,612f, 3588,612f);
			Param0.f_416 = 60,574f;
			*(&Param0 + 296) = Vector(-529,658f, 28,612f, 3586,341f);
			Param0.f_420 = -103,683f;
			*(&Param0 + 308) = Vector(-528.0f, 25,507f, 3608.0f);
			Param0.f_424 = 160,145f;
			*(&Param0 + 320) = Vector(-538,364f, 23,361f, 3619,907f);
			Param0.f_428 = 160,145f;
			*(&Param0 + 332) = Vector(-532,38f, 28,612f, 3587,525f);
			Param0.f_432 = -232,137f;
			*(&Param0 + 344) = Vector(-527,66f, 28,613f, 3590,663f);
			Param0.f_436 = -140,986f;
			*(&Param0 + 356) = Vector(-564,538f, 15,055f, 3636,173f);
			Param0.f_440 = -22,224f;
			*(&Param0 + 368) = Vector(-567,414f, 15,094f, 3634,904f);
			Param0.f_444 = 321,605f;
			*(&Param0 + 380) = Vector(-569,655f, 15,05f, 3634,228f);
			Param0.f_448 = -53,107f;
			*(&Param0 + 392) = Vector(-527,458f, 23,583f, 3615,537f);
			Param0.f_452 = -60,895f;
			*(&Param0 + 404) = Vector(-525,772f, 23,583f, 3617,813f);
			Param0.f_456 = -32,665f;
			Param0.f_560 = 406;
			Param0.f_564 = 414;
			Param0.f_568 = 253;
			*(&Param0 + 472) = "rand_idle_sit_ground";
			*(&Param0 + 480) = "look_distance_binocs";
			*(&Param0 + 488) = "stand_lookdistance_w_any";
			*(&Param0 + 496) = "look_distance_binocs";
			*(&Param0 + 504) = "stand_lookdistance_w_any";
			return 1;
			break;
	}
	return 0;
}

bool Function_142(struct<2> Param0, var uParam2, float fParam3) //Position: 0xCE49 / 52809
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	Local_27[02] = Vector(-1045,249f, 184,066f, 1373,642f);
	uLocal_181[0] = Global_46926[5];
	Local_27[12] = Vector(-521,368f, 146,586f, 1891,315f);
	uLocal_181[1] = Global_46926[6];
	Local_27[22] = Vector(151,25f, 128,174f, 1380,784f);
	uLocal_181[2] = Global_46914[2];
	Local_27[32] = Vector(-730,995f, 226,993f, 1106,784f);
	uLocal_181[3] = Global_46926[3];
	Local_27[42] = Vector(-844,7f, 189,73f, 1582,449f);
	uLocal_181[4] = Global_46926[4];
	Local_27[52] = Vector(-487,694f, 20,486f, 3033,49f);
	uLocal_181[5] = Global_46816[3];
	Local_27[62] = Vector(-2905,192f, 13,051f, 2946,404f);
	uLocal_181[6] = Global_46760[15];
	Local_27[72] = Vector(-1233,827f, 22,095f, 3208,098f);
	uLocal_181[7] = Global_46816[5];
	Local_27[82] = Vector(-3434,034f, 23,592f, 2497,243f);
	uLocal_181[8] = Global_46760[9];
	Local_27[92] = Vector(-1864,42f, 25,674f, 3306,345f);
	uLocal_181[9] = Global_46760[5];
	Local_27[102] = Vector(-2832,227f, 20,209f, 3075,762f);
	uLocal_181[10] = Global_46838[1];
	Local_27[112] = Vector(-1272,701f, 109,427f, 2763,055f);
	uLocal_181[11] = Global_46816[6];
	Local_27[122] = Vector(-2833,559f, 50,331f, 2416,961f);
	uLocal_181[12] = Global_46760[10];
	Local_27[132] = Vector(-2867,112f, 82,255f, 2162,143f);
	uLocal_181[13] = Global_46760[7];
	Local_27[142] = Vector(-3133,579f, 56,069f, 3318,745f);
	uLocal_181[14] = Global_46838[3];
	Local_27[152] = Vector(-2336,926f, 17,067f, 3170,493f);
	uLocal_181[15] = Global_46760[3];
	Local_27[162] = Vector(-1948,69f, 30,068f, 3468,263f);
	uLocal_181[16] = Global_46760[13];
	Local_27[172] = Vector(-4314,102f, 5,097f, 3744,501f);
	uLocal_181[17] = Global_46796[6];
	Local_27[182] = Vector(-4017,441f, 21,468f, 2397,854f);
	uLocal_181[18] = Global_46796[7];
	Local_27[192] = Vector(-276,02f, 73,201f, 2393,458f);
	uLocal_181[19] = Global_46816[7];
	Local_27[202] = Vector(-1910,925f, 29,066f, 2263,904f);
	uLocal_181[20] = Global_46760[6];
	Local_27[212] = Vector(122,293f, 72,409f, 2669,889f);
	uLocal_181[21] = Global_46816[8];
	Local_27[222] = Vector(-2302,359f, 24,248f, 3007,561f);
	uLocal_181[22] = Global_46760[14];
	Local_27[232] = Vector(-2006,736f, 42,176f, 3043,272f);
	uLocal_181[23] = Global_46760[16];
	Local_27[242] = Vector(-929,793f, 102,412f, 2750,46f);
	uLocal_181[24] = Global_46816[9];
	Local_27[252] = Vector(-594,268f, 30,877f, 4008,359f);
	uLocal_181[25] = Global_46894[5];
	Local_27[262] = Vector(-2229,454f, 23,263f, 4452,343f);
	uLocal_181[26] = Global_46866[3];
	Local_27[272] = Vector(-2150,144f, 18,769f, 4970,876f);
	uLocal_181[27] = Global_46866[12];
	Local_27[282] = Vector(-3859,27f, 6,942f, 4318,333f);
	uLocal_181[28] = Global_46850[4];
	Local_27[292] = Vector(-2718,606f, 56,177f, 4626,842f);
	uLocal_181[29] = Global_46866[7];
	Local_27[302] = Vector(-2150,144f, 18,769f, 4970,876f);
	uLocal_181[30] = Global_46866[8];
	Local_27[312] = Vector(-3372,019f, 56,259f, 4774,489f);
	uLocal_181[31] = Global_46850[5];
	Local_27[322] = Vector(-1200,815f, 19,177f, 4963,429f);
	uLocal_181[32] = Global_46866[9];
	Local_27[332] = Vector(-2804,866f, 16,508f, 3992,555f);
	uLocal_181[33] = Global_46866[6];
	Local_27[342] = Vector(-2804,866f, 16,508f, 3992,555f);
	uLocal_181[34] = Global_46866[5];
	Local_27[352] = Vector(-1356,416f, 13,051f, 4308,14f);
	uLocal_181[35] = Global_46866[4];
	Local_27[362] = Vector(-3724,915f, 11,88f, 4784,509f);
	uLocal_181[36] = Global_46850[3];
	Local_27[372] = Vector(-526,81f, 28,612f, 3584,959f);
	uLocal_181[37] = Global_46894[6];
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= 38)
	{
		if (!iLocal_259[iVar1])
		{
			if (VDIST(Param0, Local_27[iVar12]) > 225.0f && VDIST(Param0, Local_27[iVar12]) < 50.0f)
			{
				if (Function_149(&(Local_27[iVar12]), &fParam3, 0, 0))
				{
					uVar2 = Function_148(StackVal, Local_27[iVar12], 1);
					if (Global_46722[Global_43787] == Function_146(uVar2))
					{
						if (Function_143(iVar1, uParam2))
						{
							iVar0 = 1;
							iLocal_259[iVar1] = 1;
						}
					}
				}
			}
		}
		else
		{
			iVar0 = 1;
		}
		iVar1++;
	}
	return iVar0;
}

bool Function_143(int iParam0, int iParam1) //Position: 0xD419 / 54297
{
	switch (iParam1)
	{
		case 0x0000003D:
		case 0x0000003E:
		case 0x00000049:
			return Function_144(iParam0);
			break;
	}
	return 0;
}

int Function_144(int iParam0) //Position: 0xD442 / 54338
{
	switch (iParam0)
	{
		case 0x00000004:
			if (Function_145(37))
			{
				return 1;
			}
			break;
		
		case 0x00000015:
			if (Function_145(7))
			{
				return 1;
			}
			break;
		
		case 0x00000000:
		case 0x00000005:
		case 0x00000009:
		case 0x0000000C:
		case 0x00000012:
		case 0x00000018:
		case 0x0000001B:
			return 1;
			break;
	}
	return 0;
}

bool Function_145(int iParam0) //Position: 0xD4A4 / 54436
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_146(int iParam0) //Position: 0xD4B9 / 54457
{
	return Function_147(iParam0);
}

int Function_147(bool bParam0) //Position: 0xD4C4 / 54468
{
	bool bVar0;
	
	bVar0 = 4294967295;
	if (!bParam0 != 4294967295 && Function_99(bParam0))
	{
		if (StackVal == 1)
		{
			bVar0 = bParam0;
		}
		else if (StackVal == 2)
		{
			bVar0 = Global_44085[bParam09];
		}
		else
		{
			bVar0 = Global_44085[bParam09];
			bVar0 = Global_44085[bVar09];
		}
	}
	return bVar0;
}

var Function_148(struct<2> Param0, bool bParam2) //Position: 0xD51C / 54556
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 4294967295;
	while (iVar1 > 146 && !bVar0)
	{
		if (StackVal == 2)
		{
			if (IS_VOLUME_VALID(&Global_44085[iVar19] + 8))
			{
				if (IS_POINT_IN_VOLUME(Param0, &Global_44085[iVar19] + 8))
				{
					iVar2 = iVar1;
					bVar0 = true;
				}
			}
		}
		iVar1++;
	}
	if (&bParam2)
	{
		if (bVar0)
		{
		}
	}
	return iVar2;
}

bool Function_149(struct<2> Param0, int iParam2, bool bParam3) //Position: 0xD588 / 54664
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
	Function_150(4294967295);
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
			else if (Function_63(&Param0, &uVar0) > fVar4)
			{
				return 0;
			}
		}
		iVar2++;
	}
	return 1;
}

int Function_150(int iParam0) //Position: 0xD664 / 54884
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
						Function_151(iVar0);
					}
					else if (Global_6629)
					{
						if (Function_66(StackVal, &Global_54076, Var1) < 25.0f)
						{
							Function_151(iVar0);
						}
					}
					else if (Function_66(StackVal, &Global_54076, Var1) < 55.0f)
					{
						Function_151(iVar0);
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
			Function_151(iVar0);
		}
		iVar0++;
	}
	return 0;
}

void Function_151(int iParam0) //Position: 0xD7D2 / 55250
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

bool Function_152(struct<65> Param0) //Position: 0xD83A / 55354
{
	struct<8> Var0;
	var uVar8;
	var uVar9;
	
	if (Global_6612 && Param0.f_40)
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_188(GET_SCRIPT_NAME()) };
		uVar8 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Vector(*(&Param0 + 16), Function_186(0.0f, &Global_54076, *(&Param0 + 16)), 0.0f), Vector(Param0.f_60, 20.0f, Param0.f_60));
		DECOR_SET_INT(&uVar8, "script", GET_THIS_SCRIPT_ID());
		if (Param0.f_64 != 4294967295)
		{
			DECOR_SET_INT(StackVal, &uVar8, "category");
			Function_184(&uVar8, Param0.f_40);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
		*(&Param0 + 16) = Global_54078;
		return 1;
	}
	uParam3 = 0;
	if (!Function_153(&Param0))
	{
		if (Param0.f_40 == 1)
		{
			if (uParam2 == 0)
			{
				Function_7("Still scanning for the proper terrain to run this event.  Move the player around to find a good spawn location.", -1.0f, 1, 2, 1, 0);
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
		Function_7("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 5.0f, 1, 2, 1, 0);
	}
	if (&bParam4)
	{
		if (!Function_5(Param0.f_64, 0, 1, 0, 0))
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
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_188("restrictVol") };
		uVar9 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Vector(*(&Param0 + 16), Function_186(0.0f, &Global_54076, *(&Param0 + 16)), 0.0f), Vector(Param0.f_60, 20.0f, Param0.f_60));
		DECOR_SET_INT(&uVar9, "script", GET_THIS_SCRIPT_ID());
		if (Param0.f_64 != 4294967295)
		{
			DECOR_SET_INT(StackVal, &uVar9, "category");
			Function_184(&uVar9, Param0.f_40);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
	}
	return 1;
}

bool Function_153(struct<73> Param0) //Position: 0xDBF8 / 56312
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
			Function_183(&Param0 + 8);
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
				Var3 = Vector(0.0f, 0.0f, Function_182(1));
				ROTATE_VECTOR_XZ(&Var3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				Var3 = Vector(StackVal, StackVal, StackVal) + Vector(Var7, Var3, StackVal);
				ITERATE_IN_SPHERE(&Param0 + 8, Var3, Function_182(1));
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
						uVar0 = Function_181(StackVal, &Param0 + 8, Var7, 0,01f);
					}
					else
					{
						uVar0 = Function_180(StackVal, &Param0 + 8, Var7, 0,1f, "locflag", (&Param0 + 72 + 36)->f_24);
					}
				}
				else if ((&Param0 + 72 + 36)->f_24 == 0)
				{
					uVar0 = Function_178(StackVal, &Param0 + 8, Var7, Function_179());
				}
				else
				{
					uVar0 = Function_177(StackVal, &Param0 + 8, Var7, Function_179(), "locflag", (&Param0 + 72 + 36)->f_24);
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
			Function_183(&Param0 + 8);
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
					if (Function_99(bVar11))
					{
						if (StackVal == (&Param0 + 72)->f_68)
						{
							if ((StackVal && Global_43791[bVar11]) >= 0)
							{
								GET_OBJECT_POSITION(&uVar1, &Var3);
								if (VDIST(Var7, Var3) < fVar10 && VDIST(Var7, Var3) > Function_182(1))
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
				Function_176(&Param0 + 16, 99.0f, &Param0 + 16, 10);
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
				Function_175(&Var7, &uVar5);
				Var3 = Function_175(&Var7, &uVar5);
				if (!Function_78(StackVal, Var3))
				{
					PRINTSTRING("Player Pos: ");
					PRINTVECTOR(Var7);
					PRINTNL();
					Function_174(&fVar10, &fVar9);
					if (VDIST(Var3, Var7) < ((fVar10 + ((fVar9 - fVar10) / 2.0f)) * 0,8f))
					{
						iVar2 = Function_171(StackVal, &Param0, Var3);
					}
				}
			}
			else
			{
				iVar2 = Function_167(&Param0);
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
					if (!Function_166(StackVal, *(&Param0 + 16)))
					{
						return 0;
					}
				}
				if (Param0.f_68 == 1)
				{
					if (!Function_165(StackVal, *(&Param0 + 16)))
					{
						return 0;
					}
				}
				if (Function_123(StackVal, 131072))
				{
					if (StackVal || Function_164(Function_164(StackVal, *(&Param0 + 16)), Global_54078))
					{
						return 0;
					}
				}
				if (StackVal & 1024 == 1024)
				{
					if (Function_163(StackVal, *(&Param0 + 16)))
					{
						return 0;
					}
				}
				if (!Function_149(&Param0 + 16, &Param0 + 60, 0, Param0.f_40))
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
				uVar17 = START_CURVE_QUERY(&Global_43578, Var3, Function_162((&Param0 + 72)->f_148, 0), 0.0f, 20.0f, 5.0f, 0);
			}
			else
			{
				uVar17 = START_CURVE_QUERY(&Global_43578, Var7, Function_162((&Param0 + 72)->f_148, 0), 120.0f, 150.0f, 5.0f, 0);
			}
			if (GET_NUM_POINTS_IN_CURVE_QUERY(&uVar17) >= 0)
			{
				iVar15 = RAND_INT_RANGE(0, (GET_NUM_POINTS_IN_CURVE_QUERY(&uVar17) - 1));
				GET_POINT_FROM_CURVE_QUERY(&uVar17, iVar15, &Var12);
				Function_161(&Var12);
				*(&Param0 + 16) = Function_161(&Var12);
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
				if (!Function_166(StackVal, *(&Param0 + 16)))
				{
					return 0;
				}
			}
			if (Param0.f_68 == 1)
			{
				if (!Function_165(StackVal, *(&Param0 + 16)))
				{
					return 0;
				}
			}
			if (Param0.f_68 == 0)
			{
				if (!(StackVal || Function_166(Function_165(StackVal, *(&Param0 + 16)), *(&Param0 + 16))))
				{
					return 0;
				}
			}
			if (Function_123(StackVal, 131072))
			{
				if (StackVal || Function_164(Function_164(StackVal, *(&Param0 + 16)), Global_54078))
				{
					return 0;
				}
			}
			if (StackVal && !Function_149(&Param0 + 16, &Param0 + 60, 0, Param0.f_40) == 262144)
			{
				return 0;
			}
			break;
		
		case 0x00000004:
			if (!Function_158((&Param0 + 72)->f_148) < 0)
			{
				return 0;
			}
			break;
		
		case 0x00000007:
			switch ((&Param0 + 72)->f_156)
			{
				case 0x00000001:
					iVar18 = Function_155(StackVal, Global_43787, Global_43788, Global_43789, 1);
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
						iVar18 = Function_155(StackVal, Global_43787, Global_43788, (Global_43789 + iVar16), 1);
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
	if (Function_154(StackVal, *(&Param0 + 16)))
	{
		return 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(*(&Param0 + 16), 10.0f))
	{
		return 0;
	}
	return 1;
}

bool Function_154(struct<2> Param0) //Position: 0xE4BF / 58559
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

int Function_155(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xE4F6 / 58614
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
								return Function_156(&Global_11014, &Global_12796, bParam3);
								break;
							
							case 0x00000001:
								return Function_156(&Global_11146, &Global_12992, bParam3);
								break;
							
							case 0x00000002:
								return Function_156(&Global_11120, &Global_12954, bParam3);
								break;
							
							default:
								return Function_156(&Global_11200, &Global_13072, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_156(&Global_11420, &Global_13398, bParam3);
								break;
							
							case 0x00000001:
								return Function_156(&Global_11222, &Global_13104, bParam3);
								break;
							
							case 0x00000003:
								return Function_156(&Global_11284, &Global_13196, bParam3);
								break;
							
							case 0x00000002:
								return Function_156(&Global_11398, &Global_13366, bParam3);
								break;
							
							case 0x00000004:
								return Function_156(&Global_11492, &Global_13504, bParam3);
								break;
							
							default:
								return Function_156(&Global_11482, &Global_13490, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_156(&Global_11544, &Global_13580, bParam3);
								break;
							
							case 0x00000001:
								return Function_156(&Global_11646, &Global_13732, bParam3);
								break;
							
							case 0x00000002:
								return Function_156(&Global_11704, &Global_13818, bParam3);
								break;
							
							default:
								return Function_156(&Global_11518, &Global_13542, bParam3);
								break;
						}
						break;
					
					case 0x00000003:
						switch (bVar1)
						{
							case 0x00000001:
								return Function_156(&Global_11752, &Global_13888, bParam3);
								break;
							
							default:
								return Function_156(&Global_11826, &Global_13998, bParam3);
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
								return Function_156(&Global_11836, &Global_14012, bParam3);
								break;
							
							case 0x00000001:
								return Function_156(&Global_11946, &Global_14176, bParam3);
								break;
							
							case 0x00000002:
								return Function_156(&Global_11988, &Global_14238, bParam3);
								break;
							
							default:
								return Function_156(&Global_12038, &Global_14312, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_156(&Global_12048, &Global_14326, bParam3);
								break;
							
							default:
								return Function_156(&Global_12274, &Global_14662, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000002:
								return Function_156(&Global_12284, &Global_14676, bParam3);
								break;
							
							case 0x00000001:
								return Function_156(&Global_12342, &Global_14762, bParam3);
								break;
							
							case 0x00000003:
								return Function_156(&Global_12392, &Global_14836, bParam3);
								break;
							
							default:
								return Function_156(&Global_12472, &Global_14954, bParam3);
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
		return Function_156(&Global_11014, &Global_12796, bParam3);
	}
	if (bVar1 == Global_46760[1])
	{
		return Function_156(&Global_11146, &Global_12992, bParam3);
	}
	if (bVar1 == Global_46760[2])
	{
		return Function_156(&Global_11120, &Global_12954, bParam3);
	}
	if (bVar1 == Global_46796[0])
	{
		return Function_156(&Global_11420, &Global_13398, bParam3);
	}
	if (bVar1 == Global_46796[1])
	{
		return Function_156(&Global_11222, &Global_13104, bParam3);
	}
	if (bVar1 == Global_46796[3])
	{
		return Function_156(&Global_11284, &Global_13196, bParam3);
	}
	if (bVar1 == Global_46796[2])
	{
		return Function_156(&Global_11398, &Global_13366, bParam3);
	}
	if (bVar1 == Global_46796[4])
	{
		return Function_156(&Global_11492, &Global_13504, bParam3);
	}
	if (bVar1 == Global_46816[0])
	{
		return Function_156(&Global_11544, &Global_13580, bParam3);
	}
	if (bVar1 == Global_46816[1])
	{
		return Function_156(&Global_11646, &Global_13732, bParam3);
	}
	if (bVar1 == Global_46816[2])
	{
		return Function_156(&Global_11704, &Global_13818, bParam3);
	}
	if (bVar1 == Global_46838[1])
	{
		return Function_156(&Global_11752, &Global_13888, bParam3);
	}
	if (bVar1 == Global_46850[0])
	{
		return Function_156(&Global_11836, &Global_14012, bParam3);
	}
	if (bVar1 == Global_46850[1])
	{
		return Function_156(&Global_11946, &Global_14176, bParam3);
	}
	if (bVar1 == Global_46850[2])
	{
		return Function_156(&Global_11988, &Global_14238, bParam3);
	}
	if (bVar1 == Global_46866[0])
	{
		return Function_156(&Global_12048, &Global_14326, bParam3);
	}
	if (bVar1 == Global_46894[2])
	{
		return Function_156(&Global_12284, &Global_14676, bParam3);
	}
	if (bVar1 == Global_46894[1])
	{
		return Function_156(&Global_12342, &Global_14762, bParam3);
	}
	if (bVar1 == Global_46894[3])
	{
		return Function_156(&Global_12392, &Global_14836, bParam3);
	}
	if (bVar1 == Global_46736[0])
	{
		return Function_156(&Global_11200, &Global_13072, bParam3);
	}
	if (bVar1 == Global_46736[1])
	{
		return Function_156(&Global_11482, &Global_13490, bParam3);
	}
	if (bVar1 == Global_46736[2])
	{
		return Function_156(&Global_11518, &Global_13542, bParam3);
	}
	if (bVar1 == Global_46736[3])
	{
		return Function_156(&Global_11826, &Global_13998, bParam3);
	}
	if (bVar1 == Global_46746[0])
	{
		return Function_156(&Global_12038, &Global_14312, bParam3);
	}
	if (bVar1 == Global_46746[2])
	{
		return Function_156(&Global_12274, &Global_14662, bParam3);
	}
	if (bVar1 == Global_46746[1])
	{
		return Function_156(&Global_12472, &Global_14954, bParam3);
	}
	return "";
}

var Function_156(struct<2>[] Param0, vector3[] vParam1, bool bParam2) //Position: 0xEB0C / 60172
{
	int iVar0;
	
	iVar0 = bParam2;
	if (iVar0 <= Param0 || iVar0 > 0)
	{
		return "";
	}
	if (!Function_157(&(Param0[iVar02]), 2))
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

bool Function_157(var uParam0, int iParam1) //Position: 0xEB66 / 60262
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_158(int iParam0) //Position: 0xEB83 / 60291
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
			if (Function_159(GET_SQUAD_FROM_OBJECT(&iVar2)) == &iParam0)
			{
				iVar0++;
			}
			iVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
		}
	}
	DESTROY_ITERATOR(&uVar1);
	return iVar0;
}

int Function_159(int iParam0) //Position: 0xEBEB / 60395
{
	var uVar0;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return 4294967295;
	}
	uVar0 = Function_160(&iParam0);
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

var Function_160(var uParam0) //Position: 0xEC29 / 60457
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

struct<8> Function_161(vector3 vParam0) //Position: 0xEC76 / 60534
{
	struct<2> Var0;
	
	Var0 = vParam0;
	Var0.f_4 = vParam0.y;
	Var0.f_8 = vParam0.z;
	return StackVal, Var0;
}

int Function_162(int iParam0, int iParam1) //Position: 0xEC98 / 60568
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

bool Function_163(struct<2> Param0) //Position: 0xECCA / 60618
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

int Function_164(struct<2> Param0) //Position: 0xED6F / 60783
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

bool Function_165(struct<2> Param0) //Position: 0xEDBD / 60861
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

bool Function_166(struct<2> Param0) //Position: 0xEE18 / 60952
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

int Function_167(bool bParam0) //Position: 0xEE97 / 61079
{
	float fVar0;
	bool bVar1;
	
	Function_174(&fVar0, &bVar1);
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER_PLAYER();
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	Function_170(0);
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
		Function_169(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, (&bParam0 + 72 + 84));
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
	Function_168(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&bParam0 + 72 + 84));
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

void Function_168(struct<33> Param0) //Position: 0xF049 / 61513
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

void Function_169(struct<5> Param0, var uParam5, var uParam6, var uParam7) //Position: 0xF175 / 61813
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

void Function_170(float fParam0) //Position: 0xF1C6 / 61894
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

int Function_171(int iParam0, struct<2> Param1) //Position: 0xF20D / 61965
{
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER(Param1);
	if (Global_47151[34])
	{
		PRINTVECTOR(Param1);
		PRINTNL();
	}
	Function_173();
	Function_170(0);
	Function_172(0);
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
		Function_169(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iParam0 + 72 + 84));
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
	Function_168(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iParam0 + 72 + 84));
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

void Function_172(bool bParam0) //Position: 0xF3C2 / 62402
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

void Function_173() //Position: 0xF475 / 62581
{
	AMBIENT_SET_DISTANCE_FILTER(0.0f, 24.0f);
	return;
}

void Function_174(float fParam0, int iParam1) //Position: 0xF484 / 62596
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

struct<8> Function_175(struct<2> Param0) //Position: 0xF515 / 62741
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
		Function_161(&iVar18);
		uVar14 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Function_161(&iVar18), StackVal);
		Function_161(&iVar21);
		uVar16 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Function_161(&iVar21), StackVal);
		fVar11 = VDOT(&uVar12, &uVar14);
		fVar10 = VDOT(&uVar12, &uVar16);
		Function_174(&fVar4, &fVar5);
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
			Function_161(&iVar21);
			Var8 = Function_161(&iVar21);
		}
		else
		{
			UNK_0x19D652F9(&uVar3, fVar6, &uVar0, &iVar18);
			Function_161(&iVar18);
			Var8 = Function_161(&iVar18);
		}
	}
	UNK_0xDF93BD7C(&uVar7);
	return StackVal, Var8;
}

int Function_176(struct<2> Param0, struct<5> Param2) //Position: 0xF62F / 63023
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
		if (!Function_78(StackVal, Param2))
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
			if (!Function_78(StackVal, Param2))
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

var Function_177(var uParam0, struct<2> Param1, float fParam3, int iParam4, var uParam5) //Position: 0xF772 / 63346
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
						if (Function_149(&Var5, &fVar4, 0, 0))
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

var Function_178(var uParam0, struct<2> Param1, float fParam3) //Position: 0xF827 / 63527
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
				if (Function_149(&Var5, &uVar4, 0, 0))
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

var Function_179() //Position: 0xF8B9 / 63673
{
	float fVar0;
	int iVar1;
	
	if (Global_6612)
	{
		return 0.0f;
	}
	Function_174(&fVar0, &iVar1);
	if (fVar0 >= 50.0f)
	{
		return (fVar0 - 10.0f);
	}
	return (fVar0 - 20.0f);
}

var Function_180(var uParam0, struct<2> Param1, float fParam3, int iParam4, var uParam5) //Position: 0xF8EA / 63722
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

var Function_181(var uParam0, struct<2> Param1, float fParam3) //Position: 0xF98C / 63884
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

float Function_182(bool bParam0) //Position: 0xFA12 / 64018
{
	var uVar0;
	float fVar1;
	
	if (!&bParam0)
	{
		Function_174(&uVar0, &fVar1);
		if (fVar1 < 60.0f)
		{
			return (fVar1 + 20.0f);
		}
		return (fVar1 + 10.0f);
	}
	return (190.0f + 20.0f);
}

int Function_183(int iParam0) //Position: 0xFA4E / 64078
{
	if (IS_ITERATOR_VALID(&iParam0))
	{
		ITERATE_EVERYWHERE(&iParam0);
		ITERATE_ON_PARTIAL_NAME(&iParam0, Function_217());
		ITERATE_ON_PARTIAL_MODEL_NAME(&iParam0, Function_217());
		ITERATE_ON_OBJECT_TYPE(&iParam0, 4294967295);
		return 1;
	}
	return 0;
}

int Function_184(var uParam0, int iParam1) //Position: 0xFA84 / 64132
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
	Function_150(DECOR_GET_INT(&uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
		}
		else
		{
			Function_185(iVar0, &uParam0, &uVar1, &iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(&uParam0);
	return 0;
}

void Function_185(int iParam0, var uParam1, struct<2> Param2) //Position: 0xFBEE / 64494
{
	struct<8> Var0;
	
	*(&Global_39621[iParam05] + 16) = &uParam1;
	Global_39621[iParam05].f_32 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_188("stayout") };
	*(&Global_39621[iParam05] + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Param2, Vector(0.0f, 0.0f, 0.0f), Vector(12.0f, 5.0f, 12.0f));
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&Global_39621[iParam05] + 24, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&Global_39621[iParam05] + 24);
	if (&bParam3)
	{
		*(&Global_39621[iParam05] + 8) = ADD_BLIP_FOR_COORD(&Param2, 403, 0, 2, 0);
		SET_BLIP_BLINK(&Global_39621[iParam05] + 8, 1, 1, 20.0f);
	}
}

var Function_186(var uParam0, struct<2> Param1) //Position: 0xFC96 / 64662
{
	struct<2> Var0;
	var uVar2;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		GET_POSITION(&uParam0, &Var0);
		Function_187(StackVal, StackVal, Var0, Param1, &uVar2);
		return UNK_0x9C40E671(&uVar2);
	}
	return 0.0f;
}

void Function_187(var uParam0, float fParam1, float fParam2, float fParam3, var uParam4) //Position: 0xFCC4 / 64708
{
	uParam4 = Vector((GET_X(&fParam2) - GET_X(&uParam0)), 0.0f, (GET_Z(&fParam2) - GET_Z(&uParam0)));
}

struct<32> Function_188(char* cParam0) //Position: 0xFCE8 / 64744
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_189("0", &cVar8, ""), 4);
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

struct<32> Function_189(char* cParam0) //Position: 0xFD54 / 64852
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_190(struct<2>[] Param0) //Position: 0xFD76 / 64886
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_195();
	iVar1 = 0;
	if (!Function_4(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_194(&(Param0[iVar02]), 8);
		}
		else if (Function_193())
		{
			iVar1 = 1;
			Function_194(&(Param0[iVar02]), 8);
		}
		Function_194(&(Param0[iVar02]), 16);
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
				Function_194(&(Param0[iVar02]), 1);
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
							Function_194(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_194(&(Param0[iVar02]), 2);
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
							Function_194(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_194(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_194(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_194(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_194(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_194(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_194(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_194(&(Param0[iVar02]), 2);
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
	Function_191();
	return 1;
}

void Function_191() //Position: 0x10139 / 65849
{
	if (!Function_192(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_192(int iParam0) //Position: 0x10179 / 65913
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_193() //Position: 0x10195 / 65941
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

void Function_194(struct<13> Param0) //Position: 0x101C3 / 65987
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_195() //Position: 0x101D6 / 66006
{
	if (!Function_192(128))
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

void Function_196(int iParam0) //Position: 0x10218 / 66072
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
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 0, 1);
			MEMORY_ALLOW_SHOOTING(&iParam0, 1);
		}
	}
	return;
}

void Function_197(var[] uParam0, int iParam1) //Position: 0x10261 / 66145
{
	int iVar0;
	
	if (&iParam1 == 4294967295)
	{
		iParam1 = uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= &iParam1)
	{
		Function_196(&(uParam0[iVar0]));
		iVar0++;
	}
	return;
}

void Function_198(int iParam0) //Position: 0x10293 / 66195
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

void Function_199(var[] uParam0, int iParam1) //Position: 0x102DD / 66269
{
	int iVar0;
	
	if (&iParam1 == 4294967295)
	{
		iParam1 = uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= &iParam1)
	{
		Function_198(&(uParam0[iVar0]));
		iVar0++;
	}
	return;
}

bool Function_200(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x1030F / 66319
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

void Function_201(var[] uParam0, int iParam1) //Position: 0x10387 / 66439
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

void Function_202(bool bParam0) //Position: 0x103AA / 66474
{
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(bParam0);
	return;
}

var Function_203(var uParam0, int iParam1, int iParam2, int iParam3) //Position: 0x103B5 / 66485
{
	return Function_204(&uParam0, iParam1, &iParam2, 4294967295, &iParam3);
}

var Function_204(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x103CC / 66508
{
	return Function_205(StackVal, &uParam0, uParam1, &uParam2, &uParam3, &uParam4, 0, Vector(0.0f, 0.0f, 0.0f));
}

var Function_205(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, float fParam5, struct<2> Param6) //Position: 0x103EA / 66538
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!IS_POPSET_VALID(&uParam0))
	{
		LOG_ERROR("Trying to get a random member of an invalid popset");
		return 4294967295;
	}
	if (bParam1)
	{
		Function_210();
	}
	iVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, iParam2, iParam3, bParam4, fParam5, Param6);
	if (!Function_138(iVar1))
	{
		if (!Global_47146 && !Global_47147)
		{
			Function_209(&uParam0, bParam1, iParam2, iParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_209(&uParam0, bParam1, iParam2, iParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	iVar0 = iVar1;
	if (bParam1 || (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(iVar1)))
	{
		if (bParam1 && iParam3 != 4294967295)
		{
			while (Function_208(iVar0) && iVar2 > 20)
			{
				iVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_138(iVar1))
				{
					iVar0 = iVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_208(iVar0))
				{
					Function_207();
				}
				Function_206(iVar0);
			}
		}
		else if (!iParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(iVar1) != iParam3 && iVar2 > 20)
			{
				iVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_138(iVar1))
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

void Function_206(int iParam0) //Position: 0x106E3 / 67299
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

void Function_207() //Position: 0x10797 / 67479
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

bool Function_208(int iParam0) //Position: 0x107D2 / 67538
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

void Function_209(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x107FF / 67583
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

void Function_210() //Position: 0x1095A / 67930
{
	int iVar0;
	
	if (Global_6645)
	{
		if (StackVal || !&Global_46956 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_207();
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
	Function_207();
	return;
}

bool Function_211(int iParam0) //Position: 0x109A6 / 68006
{
	if (iParam0 <= 6)
	{
		return 1;
	}
	if (iParam0 == 17)
	{
		return 1;
	}
	if (iParam0 == 49)
	{
		return 1;
	}
	if (iParam0 < 19 && iParam0 > 25)
	{
		return 1;
	}
	if (iParam0 < 50 && iParam0 > 80)
	{
		return 1;
	}
	if (iParam0 < 211 && iParam0 > 217)
	{
		return 1;
	}
	if (iParam0 < 236 && iParam0 > 254)
	{
		return 1;
	}
	if (iParam0 < 312 && iParam0 > 319)
	{
		return 1;
	}
	return 0;
}

var Function_212(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x10A2E / 68142
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
			Function_194(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_194(&(Param0[iVar02]), 8);
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

var Function_213(int iParam0, int iParam1) //Position: 0x10B0A / 68362
{
	int iVar0;
	
	iVar0 = (Global_26652[iParam04].f_16 % iParam1);
	return iVar0;
}

var Function_214(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x10B20 / 68384
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_215(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_194(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_215(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x10B5E / 68446
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_4(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_194(&(Param0[iVar02]), 4);
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

bool Function_216() //Position: 0x10C2D / 68653
{
	if (Global_43787 != 2)
	{
		return 1;
	}
	return 0;
}

float Function_217() //Position: 0x10C3D / 68669
{
	var uVar0;
	
	return &uVar0;
}

