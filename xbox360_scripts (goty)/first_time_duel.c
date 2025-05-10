//Decompiled with MagicRDR v1.0
//Function Count : 195
//Statics Count : 394
//Natives Count : 366
//Parameters Count : 51

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	int iLocal_4 = 0;
	var uLocal_5 = 12;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
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
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
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
	var uLocal_90 = 20;
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
	int iLocal_154 = 0;
	int iLocal_155 = 0;
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
	var uLocal_167 = 6;
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
	var uLocal_181 = 2;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	struct<65> Local_195 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 6;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 4;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 4;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	int iLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	bool bLocal_290 = false;
	int iLocal_291 = 0;
	var uLocal_292 = 0;
	int iLocal_293 = 0;
	bool bLocal_294 = false;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	int iLocal_303 = 0;
	bool bLocal_304 = false;
	bool bLocal_305 = false;
	int iLocal_306 = 0;
	bool bLocal_307 = false;
	bool bLocal_308 = false;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	vector3 vLocal_311[3] = {{ 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } };
	vector3 vLocal_321[3] = {{ 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } };
	float fLocal_331[3] = { 0.0f, 0.0f, 0.0f };
	bool bLocal_335 = false;
	bool bLocal_336 = false;
	char* cLocal_337 = NULL;
	bool bLocal_338 = false;
	int iLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	struct<57> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3[1];
	int iVar5[1];
	bool bVar7;
	bool bVar35;
	bool bVar36;
	int iVar37;
	bool bVar38;
	int iVar39;
	var uVar40;
	int iVar41;
	bool bVar42;
	int iVar43;
	bool bVar44;
	var uVar45;
	var uVar49;
	float fVar50;
	bool bVar51;
	
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_4 = 0;
	iLocal_154 = 0;
	iLocal_155 = 0;
	iLocal_188 = 0;
	iLocal_189 = 0;
	iLocal_221 = 0;
	iLocal_223 = 0;
	vLocal_224 = { 120.541f, 73.286f, 2294.929f };
	vLocal_227 = { 120.466f, 73.287f, 2297.131f };
	vLocal_230 = { 121.213f, 73.287f, 2286.793f };
	bLocal_290 = false;
	iLocal_291 = 0;
	iLocal_296 = 0;
	iLocal_303 = 0;
	bLocal_304 = false;
	bLocal_305 = false;
	iLocal_306 = 0;
	iLocal_309 = 0;
	iLocal_310 = 0;
	bLocal_336 = false;
	bLocal_338 = false;
	iLocal_339 = 0;
	uLocal_275 = uLocal_275;
	iVar0 = 0;
	iVar1 = 0;
	bVar2 = CREATE_LAYOUT(Function_194());
	bVar7 = 9;
	Function_193(&uLocal_287, 0.0f);
	bVar36 = false;
	iVar37 = 0;
	Function_191(&bVar7, "duel_player", 5, 0);
	Function_191(&bVar7, "Dueling/duel_player", 8, 0);
	Function_191(&bVar7, "Dueling/duel_Easy_A_npc", 8, 0);
	Function_191(&bVar7, "Dueling/duel_Easy_B_npc", 8, 0);
	Function_191(&bVar7, "beat_duel_short", 1, 0);
	Function_191(&bVar7, "nbeat_duel", 5, 0);
	Function_191(&bVar7, "custom/beat_duel_short", 8, 0);
	Function_191(&bVar7, "Rand_Idle_Stand", 1, 0);
	iVar5[0] = 477;
	Function_190(&bVar7, iVar5[0], 3, 0);
	Function_189(iVar5[0]);
	if (Function_188(2, 1, 3))
	{
		uVar40 = Function_183(2, 1, 3);
	}
	else
	{
		iVar1 = 5;
	}
	if (Function_182(uVar40) != 3 && !ScriptParam_0.f_32)
	{
		iVar1 = 5;
	}
	iVar41 = 0;
	bVar42 = false;
	iVar43 = 0;
	bVar44 = false;
	fVar50 = 0.0f;
	if (Global_3382 == 1)
	{
		iVar1 = 5;
	}
	if (Function_181(0))
	{
		if (iVar41 >= 0)
		{
			iVar1 = 6;
		}
		iVar1 = 5;
	}
	Function_180();
	while (!IS_EXITFLAG_SET())
	{
		bVar51 = 600;
		switch (iVar1)
		{
			case 0x00000000:
				bVar51 = false;
				if (Function_175(&bVar7))
				{
					iVar1 = 1;
				}
				break;
			
			case 0x00000001:
				iVar1 = 2;
				bVar51 = false;
				break;
			
			case 0x00000002:
				if (!Function_172(ScriptParam_0.f_56, 0, 1, 0, 0))
				{
					iVar1 = 5;
					bVar51 = false;
					break;
				}
				if (VDIST(Global_34574, vLocal_224) > Function_170())
				{
					iVar1 = 5;
					bVar51 = false;
					break;
				}
				if (Function_169(StackVal, StackVal, vLocal_224, 0x3f800000, 0x42960000, 1, 1, 0))
				{
					iVar1 = 5;
					bVar51 = false;
					break;
				}
				bLocal_294 = CREATE_VOLUME_IN_LAYOUT(bVar2, Function_194(), 3, vLocal_227, 0.0f, 0.0f, 0.0f, 20.0f, 10.0f, 20.0f);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_294);
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_294);
				bLocal_290 = true;
				bVar3[0] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, bVar2, Vector(vLocal_224, iVar5[0], Function_194()) + Vector(1.0f, 0.0f, 1.0f), *(&ScriptParam_0 + 20));
				DECOR_SET_STRING(bVar3[0], "TAUNT_AUDIO", "DUEL");
				ACTOR_ENABLE_VARIABLE_MESH(bVar3[0], 5, true);
				ACTOR_FORCE_WEAPON_RENDER(bVar3[0], 1, 1);
				AI_DONT_HARM_ACTOR(bVar3[0]);
				SET_ACTOR_CAN_PLAY_GESTURES(bVar3[0], false);
				bVar35 = CREATE_VOLUME_IN_LAYOUT(Global_26150, Function_194(), 3, vLocal_224, 0.0f, 0.0f, 0.0f, ScriptParam_0.f_52, 20.0f, ScriptParam_0.f_52);
				DECOR_SET_INT(bVar35, "script", GET_THIS_SCRIPT_ID());
				Function_162(&bVar35, ScriptParam_0.f_32);
				iLocal_295 = CREATE_GRINGO_IN_LAYOUT(bVar2, Function_194(), "$/content/scripting/gringo/SimpleGringo/beat_duel_short", vLocal_224, 0.0f, 181.463f, 0.0f);
				bVar38 = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, bVar2, Function_194(), Vector(*(&ScriptParam_0 + 20), vLocal_224, "Rand_Idle_Stand") + Vector(0.0f, 90.0f, 0.0f)));
				SNAP_ACTOR_TO_GRINGO(bVar3[0], GET_OBJECT_FROM_GRINGO(bVar38), "UseCase1", 1, 0, 0);
				TASK_USE_GRINGO(bVar3[0], bVar38, "UseCase1", 4294967295, 1);
				TASK_PRIORITY_SET(bVar3[0], 0);
				AI_GOAL_LOOK_AT_ACTOR_NEW(bVar3[0], Global_34573, -1.0f, 1);
				AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bVar3[0], 0);
				DELETE_ALL_WEAPONS_FROM_ACTOR(bVar3[0]);
				GIVE_WEAPON_TO_ACTOR(bVar3[0], 4, 0, 1, 1);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar3[0], 0);
				UNK_0x99AFD2D1(bVar3[0], 1, 1);
				iVar1 = 3;
				bVar51 = false;
				break;
			
			case 0x00000003:
				if (Function_159(bVar3[0], &iLocal_286, &fVar50, uVar49, iLocal_293, 0x40400000))
				{
					switch (iLocal_286)
					{
						case 0x00000001:
							TASK_FLEE_ACTOR(bVar3[0], Global_34573, -1.0f, -1.0f, 0, 0, 0);
							break;
						
						case 0x00000002:
							Function_158(bVar3[0], &Global_34573);
							break;
						
						case 0x00000010:
							TASK_FLEE_ACTOR(bVar3[0], Global_34573, -1.0f, -1.0f, 0, 0, 0);
							break;
						
						case 0x00000004:
							Function_158(bVar3[0], &Global_34573);
							break;
						
						case 0x00000008:
							Function_158(bVar3[0], &Global_34573);
							break;
					}
					Function_157(bVar3[0]);
					bVar44 = true;
					iVar1 = 5;
					bVar51 = false;
					break;
				}
				if (IS_ACTOR_VALID(bVar3[0]))
				{
					if (!Function_156(bVar3[0], Global_34573, 200.0f))
					{
						Function_153("duelHelp05", bLocal_304, 1);
						bVar51 = false;
						iVar1 = 5;
						break;
					}
				}
				if (!bVar42)
				{
					iVar39 = 0;
					iVar39 = 0;
					while (iVar39 <= 1)
					{
						if (!IS_ACTOR_ALIVE(bVar3[iVar39]) && IS_ACTOR_VALID(bVar3[iVar39]))
						{
							bVar42 = true;
						}
						iVar39++;
					}
				}
				if (!Function_146(ScriptParam_0.f_56, bVar3[0], &iVar0, &iVar43, 1, !iLocal_296, 1, 1))
				{
					iVar1 = 5;
					bVar51 = false;
					break;
				}
				if (bVar42 && !iLocal_293)
				{
					iVar1 = 5;
					bVar51 = false;
				}
				else if (Function_42(&iVar41, &bVar3, uVar40, &uVar45, bVar2, &iVar0, &iVar37, &bVar51, ScriptParam_0.f_32))
				{
					iVar1 = 5;
				}
				if (iVar41 >= 0)
				{
					Function_41();
					Function_26(StackVal, StackVal, Function_41(), &bVar36, ScriptParam_0.f_56, bVar3[0], 100, 0x42a00000, 1);
				}
				break;
			
			case 0x00000005:
				iVar1 = 6;
				bVar51 = false;
				break;
			
			case 0x00000006:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				bVar51 = false;
				break;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(bVar51);
		}
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_307))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_307);
	}
	if (IS_VOLUME_VALID(bLocal_308))
	{
		DESTROY_VOLUME(bLocal_308);
	}
	if (bLocal_338)
	{
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	}
	if (ScriptParam_0.f_32)
	{
		Global_3399 = 0;
	}
	if (!bVar36)
	{
		if (Function_22(bVar3[0], 0))
		{
			TASK_WANDER(bVar3[0], -1.0f);
			TASK_PRIORITY_SET(bVar3[0], 2);
		}
		if (IS_OBJECT_VALID(bVar2))
		{
			UNK_0xA936E73B(bVar2, 1);
			MARK_OBJECT_FOR_AGGRESSIVE_CLEANUP(bVar2, 1);
		}
		Function_172(ScriptParam_0.f_56, 0.0f, 0, 1, 0);
	}
	if (iLocal_303 && !bLocal_305)
	{
		Function_8(453, 1, 0, 0);
	}
	if (bLocal_290)
	{
		if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(bLocal_294))
		{
			REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_294);
		}
	}
	if (Function_22(bVar3[0], 0))
	{
		AI_CLEAR_DONT_HARM_ACTOR(bVar3[0]);
		AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bVar3[0], 1);
		AI_QUICK_EXIT_GRINGO(bVar3[0], 0);
		Function_7(bVar3[0]);
		Function_6(bVar3[0], 4294967295 * 50);
		if (bLocal_336)
		{
			TASK_TAUNT_ACTOR_IN_PLACE(bVar3[0], Global_34573, 11.0f);
			Function_157(bVar3[0]);
		}
		else if (!bVar44)
		{
			TASK_FLEE_ACTOR(bVar3[0], Global_34573, -1.0f, -1.0f, 0, 0, 0);
		}
		AI_GOAL_LOOK_CLEAR(bVar3[0]);
		AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar3[0], 1);
		UNK_0x99AFD2D1(bVar3[0], 0, 0);
	}
	Function_5(iVar5[0]);
	SET_HUD_MAP_DRAW_ENABLED(1);
	AI_STOP_IGNORING_ACTORS();
	Function_1(&bVar7);
	RELEASE_LAYOUT_REF(bVar2);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x79F / 1951
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

void Function_2(var uParam0, int iParam1) //Position: 0x7C5 / 1989
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

void Function_3(var uParam0, int iParam1) //Position: 0x8F3 / 2291
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_4(var uParam0, int iParam1) //Position: 0x90D / 2317
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(bool bParam0) //Position: 0x92A / 2346
{
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(bParam0);
	return;
}

void Function_6(bool bParam0, bool bParam1) //Position: 0x935 / 2357
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_INT(bParam0, "honor", bParam1);
	return;
}

void Function_7(bool bParam0) //Position: 0x955 / 2389
{
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	if (DECOR_CHECK_EXIST(bParam0, "nocrime"))
	{
		DECOR_REMOVE(bParam0, "nocrime");
	}
	return;
}

int Function_8(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x987 / 2439
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
	Function_21(iParam0, TO_FLOAT(bParam1), 1);
	Function_20(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_9(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_9(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0xBA7 / 2983
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_19(390))), 32);
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
					bVar19 = (Function_18(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_18(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_16(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_13(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_11(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_10(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_194(), &Var9);
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

var Function_10(int iParam0) //Position: 0x11D4 / 4564
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_11(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x11E5 / 4581
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_12("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_12("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_12("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_12(char* cParam0, bool bParam1) //Position: 0x12DA / 4826
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_13(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x12F3 / 4851
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_15(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_14(Function_15(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_14(int iParam0, int iParam1) //Position: 0x1358 / 4952
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_15(int iParam0, bool bParam1) //Position: 0x136A / 4970
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_16(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x137C / 4988
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
	if (((Function_17(iParam0) != 19 || Function_17(iParam0) != 17) || Function_17(iParam0) != 10) || Function_17(iParam0) != 9)
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

int Function_17(int iParam0) //Position: 0x14AC / 5292
{
	return Global_35278[iParam020].f_48;
}

float Function_18(int iParam0) //Position: 0x14BB / 5307
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_19(int iParam0) //Position: 0x14F4 / 5364
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_20(int iParam0) //Position: 0x1531 / 5425
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

int Function_21(int iParam0, bool bParam1, bool bParam2) //Position: 0x16CB / 5835
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

bool Function_22(bool bParam0, bool bParam1) //Position: 0x190F / 6415
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
		if (Function_23(bParam0, 0) && !AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 16384))
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

int Function_23(bool bParam0, int iParam1) //Position: 0x19AB / 6571
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

int Function_24(bool bParam0) //Position: 0x19F5 / 6645
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_25(bParam0);
		return 1;
	}
	return 0;
}

void Function_25(bool bParam0) //Position: 0x1A0B / 6667
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

void Function_26(vector3 vParam0, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7, bool bParam8) //Position: 0x1A37 / 6711
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
	else if (!Function_40(StackVal, StackVal, vParam0))
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
			Function_39(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_38(0);
		}
		if (bParam8)
		{
			Function_36(0, GET_THIS_SCRIPT_ID());
			Global_3373 = GET_THIS_SCRIPT_ID();
			Function_34(iParam4);
			Global_3401 = 1;
		}
		Function_31(iParam4);
		if (Function_30(StackVal, 32768))
		{
			Function_27(1);
		}
		Global_16876[iParam46].f_12++;
		Function_8(408, 1, 0, 0);
	}
}

void Function_27(bool bParam0) //Position: 0x1B3E / 6974
{
	if (bParam0)
	{
		Function_29(0x10000000);
	}
	else
	{
		Function_28(0x10000000);
	}
	Global_26316.f_172 = 0;
	return;
}

void Function_28(int iParam0) //Position: 0x1B62 / 7010
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_29(int iParam0) //Position: 0x1B7F / 7039
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

bool Function_30(var uParam0, int iParam1) //Position: 0x1B92 / 7058
{
	return (uParam0 && iParam1) == 0;
}

void Function_31(int iParam0) //Position: 0x1B9F / 7071
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (!Function_33(StackVal, 524288))
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
			bVar1 = Function_32(iVar0 * 60);
			ADD_TIME(&Global_17483[iParam075] + 264, 0, 0, bVar1, 0);
			Global_16876[iParam06] = Global_17483[iParam075].f_264;
		}
	}
	return;
}

int Function_32(int iParam0) //Position: 0x1C43 / 7235
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

bool Function_33(var uParam0, int iParam1) //Position: 0x1C59 / 7257
{
	return (uParam0 && iParam1) == 0;
}

void Function_34(int iParam0) //Position: 0x1C66 / 7270
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
	Function_35(&Var0 + 80[Var0.f_763], &(Global_16876[iParam06]), iParam0);
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

void Function_35(var uParam0, var uParam1, int iParam2) //Position: 0x1D04 / 7428
{
	uParam0->f_4 = iParam2;
	*uParam0 = uParam1->f_12;
	uParam0->f_8 = 1;
	return;
}

void Function_36(int iParam0, int iParam1) //Position: 0x1D1C / 7452
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
			Function_37(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_37(int iParam0) //Position: 0x1D9E / 7582
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

void Function_38(int iParam0) //Position: 0x1DEC / 7660
{
	Global_12976.f_76 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 76, 0, 0, (iParam0 + Function_32(900)), 0);
	return;
}

void Function_39(int iParam0) //Position: 0x1E0E / 7694
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, (iParam0 + Function_32(200)), 0);
	return;
}

bool Function_40(vector3 vParam0) //Position: 0x1E2F / 7727
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_41() //Position: 0x1E47 / 7751
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_42(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, var uParam5, var uParam6, var uParam7, var uParam8) //Position: 0x1E50 / 7760
{
	bool bVar0;
	
	bVar0 = false;
	*uParam3 = *uParam3;
	switch (*uParam0)
	{
		case 0x00000000:
			if (Function_145(uParam8))
			{
				return 0;
			}
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), (*uParam1)[0], 1.0f, 25.0f, 1, 1, 0) && MEMORY_GET_IS_VISIBLE((*uParam1)[0], Global_34573))
			{
				AI_GOAL_LOOK_AT_ACTOR_NEW((*uParam1)[0], Global_34573, -1.0f, 1);
				Function_143();
				AI_QUICK_EXIT_GRINGO((*uParam1)[0], 1);
				Function_142((*uParam1)[0], Global_34573, "FIGHT", 0, 5, 60, 1, 1);
				TASK_TAUNT_ACTOR_IN_PLACE((*uParam1)[0], Global_34573, -1.0f);
				*uParam0 = 1;
			}
			break;
		
		case 0x00000001:
			if (!IS_AMBIENT_SPEECH_PLAYING((*uParam1)[0]))
			{
				iLocal_303 = 1;
				bLocal_308 = CREATE_VOLUME_IN_LAYOUT(bParam4, Function_194(), false, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 6.0f, 4.0f, 6.0f);
				bLocal_307 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("acceptDuelChallenge", bLocal_308, 25, 5, 0, false, 0, 0, 4294967295, 0);
				ATTACH_OBJECTS(bLocal_308, (*uParam1)[0], Function_194(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
				Function_141("duelHelp08", 0x41200000, 1, 0, 2, 1, 0);
				bLocal_304 = true;
				Function_193(&uLocal_300, 0.0f);
				*uParam0 = 2;
			}
			break;
		
		case 0x00000002:
			Function_140((*uParam1)[0]);
			if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_307))
			{
				if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(bLocal_307))
				{
					RELEASE_SCRIPT_USE_CONTEXT(bLocal_307);
					DESTROY_VOLUME(bLocal_308);
					AI_GOAL_LOOK_CLEAR((*uParam1)[0]);
					if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(Global_34573)))
					{
						HUD_CLEAR_HELP_QUEUE();
						Function_141("duelHelp01", 0x41200000, 1, 0, 2, 1, 0);
						bLocal_308 = CREATE_VOLUME_IN_LAYOUT(bParam4, Function_194(), false, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 6.0f, 4.0f, 6.0f);
						bLocal_307 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("acceptDuelChallenge", bLocal_308, 25, 5, 0, false, 0, 0, 4294967295, 0);
						ATTACH_OBJECTS(bLocal_308, (*uParam1)[0], Function_194(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
					}
					else if (!IS_ACTOR_ON_FOOT(Global_34573) && !IS_ACTOR_RIDING(Global_34573))
					{
						HUD_CLEAR_HELP_QUEUE();
						Function_141("duelHelp09", 0x41200000, 1, 0, 2, 1, 0);
						bLocal_308 = CREATE_VOLUME_IN_LAYOUT(bParam4, Function_194(), false, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 6.0f, 4.0f, 6.0f);
						bLocal_307 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("acceptDuelChallenge", bLocal_308, 25, 5, 0, false, 0, 0, 4294967295, 0);
						ATTACH_OBJECTS(bLocal_308, (*uParam1)[0], Function_194(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
					}
					else
					{
						if (IS_ACTOR_RIDING(Global_34573))
						{
							Function_138(Global_34573, 0);
							TASK_DISMOUNT(Global_34573, 1);
						}
						SET_PLAYER_CONTROL(0, 0, 0, 0);
						iLocal_293 = 1;
						iLocal_293 = iLocal_293;
						HUD_CLEAR_HELP_QUEUE();
						*uParam0 = 4;
					}
				}
				else if (Function_137(Global_34573, (*uParam1)[0]) < 55.0f)
				{
					TASK_WANDER((*uParam1)[0], -1.0f);
					return 1;
				}
				if (Function_133(&uLocal_300, 30.0f))
				{
					Function_153("duelHelp05", bLocal_304, 1);
					if (Function_137((*uParam1)[0], Global_34573) > 30.0f)
					{
						bLocal_336 = true;
						Function_142((*uParam1)[0], Global_34573, "FIGHT", 0, 5, 60, 1, 1);
					}
					else
					{
						TASK_WANDER((*uParam1)[0], -1.0f);
					}
					return 1;
				}
			}
			break;
		
		case 0x00000003:
			*uParam5 = 1;
			*uParam7 = 0;
			iLocal_296 = 1;
			if (Function_122(StackVal, StackVal, (*uParam1)[0], vLocal_227, uParam6, &iLocal_295, bParam4, uParam7))
			{
				iLocal_296 = 0;
				Function_193(&uLocal_300, 0.0f);
				*uParam0 = 4;
			}
			break;
		
		case 0x00000004:
			Local_233.f_48 = 10.0f;
			Local_233.f_52 = 60.0f;
			if (Function_100(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &iLocal_291, (*uParam1)[0], Global_34573, &bParam4, &vLocal_227, &vLocal_230, &bVar0, &bLocal_294, &uLocal_276, 4, 4294967292, Local_233, &uLocal_281, &uLocal_292, 0, 1, 0))
			{
				if (bVar0)
				{
					AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
					SET_PLAYER_CONTROL(0, 1, 0, 0);
					if (IS_ACTOR_VALID((*uParam1)[0]) && IS_ACTOR_VALID(Global_34573))
					{
						TASK_FLEE_ACTOR((*uParam1)[0], Global_34573, -1.0f, -1.0f, 0, 0, 0);
					}
					Function_44(uParam2, 1, 0, 0);
					bLocal_305 = true;
					Function_43(15);
					return 1;
				}
			}
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			return 1;
			break;
	}
	return 0;
}

void Function_43(int iParam0) //Position: 0x2257 / 8791
{
	Global_16876[iParam06].f_16++;
	if (Global_16876[iParam06].f_16 == 1)
	{
		Function_8(409, 1, 0, 0);
	}
	return;
}

void Function_44(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x2288 / 8840
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	var uVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_98(bParam0))
	{
		Function_96();
		return;
	}
	bVar0 = Function_95(bParam0);
	if (!bVar0 != 1)
	{
		Global_13172[bParam011].f_12++;
		if (Function_94())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_6269 = Function_93(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_92(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_91(Global_6269) };
		}
		if (Function_94())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_85();
		CLEAR_JOURNAL_ENTRY(uVar11);
		SET_JOURNAL_ENTRY_PROGRESS(uVar11, -2.0f, 0, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(uVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(uVar11, 1);
		}
	}
	if (Function_94())
	{
		Function_84();
	}
	Global_13172[bParam011].f_36 = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_82("DEED_COMPLETE", bParam0);
	}
	if (bParam1)
	{
		Global_26281 = GET_CURRENT_GAME_TIME();
	}
	if (StackVal && StackVal != 3 != 4)
	{
		if (bParam3)
		{
			Global_13172[bParam011].f_4 = 4;
		}
		else
		{
			Global_13172[bParam011].f_4 = 3;
		}
		iVar12 = 1;
	}
	if (Global_3421)
	{
		Global_13172[bParam011].f_4 = 0;
	}
	if (iVar12 && !Global_3381)
	{
		if (!bParam3)
		{
			Function_76(bParam0);
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
						switch (Function_93(bParam0))
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
			Function_48(1);
			Function_46(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_45(bParam0, &Var14);
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

void Function_45(int iParam0, int iParam1) //Position: 0x24DC / 9436
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_46(var uParam0, var uParam1) //Position: 0x2516 / 9494
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = uParam0;
	Global_3416 = uParam1;
	if (!Global_3365 && !Function_47())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

bool Function_47() //Position: 0x2558 / 9560
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_48(bool bParam0) //Position: 0x2561 / 9569
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_66();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_50();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_49(&Global_63095, 1);
		Function_49(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_49(var uParam0, int iParam1) //Position: 0x25B2 / 9650
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_50() //Position: 0x25C5 / 9669
{
	Function_64();
	Function_63();
	Function_63();
	Function_62();
	Function_62();
	Function_61();
	Function_61();
	Function_58(0);
	Function_58(0);
	if (!Function_47())
	{
		Function_55();
		Function_54();
		Function_53();
		Function_52();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_51();
	return;
}

void Function_51() //Position: 0x2617 / 9751
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

void Function_52() //Position: 0x271D / 10013
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

void Function_53() //Position: 0x2750 / 10064
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

void Function_54() //Position: 0x28DE / 10462
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

void Function_55() //Position: 0x2A92 / 10898
{
	Function_56(&Global_28260, 1, 0);
	return;
}

void Function_56(int iParam0, bool bParam1, var uParam2) //Position: 0x2AA0 / 10912
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
	
	bVar0 = Function_57();
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

var Function_57() //Position: 0x2C91 / 11409
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_58(int iParam0) //Position: 0x2CA6 / 11430
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
					iVar2 = ((Function_60((50 + iVar4)) + Function_60((183 + iVar4))) + Function_60((90 + iVar4)));
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
	Function_59(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_59(int iParam0, bool bParam1, bool bParam2) //Position: 0x2D4C / 11596
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
		Function_21(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_20(iParam0);
	if (bParam2)
	{
		Function_9(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_60(bool bParam0) //Position: 0x2FE7 / 12263
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_61() //Position: 0x3028 / 12328
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
		iVar2 = ((Function_60((50 + iVar3) + 15) + Function_60((183 + iVar3) + 15)) + Function_60((90 + iVar3) + 15));
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
	Function_59(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_62() //Position: 0x30B1 / 12465
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
			iVar2 = ((Function_60((50 + iVar3) + 8) + Function_60((183 + iVar3) + 8)) + Function_60((90 + iVar3) + 8));
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
	Function_59(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_63() //Position: 0x3148 / 12616
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
		iVar2 = ((Function_60((50 + iVar3)) + Function_60((183 + iVar3))) + Function_60((90 + iVar3)));
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
	Function_59(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_64() //Position: 0x31C7 / 12743
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_65(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_59(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_65(int iParam0, bool bParam1, int iParam2) //Position: 0x3200 / 12800
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
	Function_21(iParam0, bParam1, 1);
	Function_20(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_9(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_66() //Position: 0x340A / 13322
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_75())
	{
		Function_72(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_72(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_67(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_67(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_40(StackVal, StackVal, vVar0))
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

vector3 Function_67(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x34C5 / 13509
{
	int iVar0;
	
	iVar0 = Function_70(uParam2, uParam3);
	if (Function_69(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_68(&Global_63095, 1);
			Function_49(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_68(&Global_63095, 2);
			Function_49(&Global_63095, 1);
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
		Function_68(&Global_63095, 2);
		Function_49(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_41();
	return StackVal, StackVal, Function_41();
}

void Function_68(var uParam0, int iParam1) //Position: 0x35AC / 13740
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_69(int iParam0) //Position: 0x35BB / 13755
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_70(bool bParam0, bool bParam1) //Position: 0x35D1 / 13777
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
				fVar2 = Function_71(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_71(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_69(bVar0) && !bParam1)
	{
		bVar0 = Function_70(bParam0, 1);
	}
	return bVar0;
}

float Function_71(vector3 vParam0, vector3 vParam3) //Position: 0x3698 / 13976
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_72(var uParam0, int iParam1) //Position: 0x36B5 / 14005
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_74(Global_34573, &vVar4);
	if (!Function_73(Global_30640[0]))
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
	if (!Function_73(Global_30640[2]))
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
	if (!Function_73(Global_30640[1]))
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
	if (!Function_73(Global_30658[1]))
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
	if (!Function_73(Global_30658[3]))
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
	if (!Function_73(Global_30658[2]))
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
	if (!Function_73(Global_30658[4]))
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
	if (!Function_73(Global_30668[0]))
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
	if (!Function_73(Global_30668[1]))
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
	if (!Function_73(Global_30668[2]))
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
	if (!Function_73(Global_30679[0]))
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
	if (!Function_73(Global_30685[0]))
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
	if (!Function_73(Global_30685[1]))
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
	if (!Function_73(Global_30685[2]))
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
	if (!Function_73(Global_30693[0]))
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
	if (!Function_73(Global_30693[1]))
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
	if (!Function_73(Global_30693[2]))
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
	if (!Function_73(Global_30707[2]))
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
	if (!Function_73(Global_30707[3]))
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
	if (!Function_73(Global_30707[0]))
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
	if (!Function_73(Global_30717[0]))
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
	if (!Function_73(Global_30723[2]))
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
	if (!Function_73(Global_30723[1]))
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
	if (!Function_73(Global_30723[0]))
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
	if (!Function_73(Global_30679[1]))
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
	if (!Function_73(Global_30707[1]))
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
	Function_68(&Global_63095, 2);
	Function_49(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_40(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_73(int iParam0) //Position: 0x3EDA / 16090
{
	var uVar0;
	
	uVar0 = Global_29008[iParam0];
	return (((Function_33(uVar0, 0x1000000) || Function_33(uVar0, 0x2000000)) || Function_33(uVar0, 0x4000000)) || !Function_33(uVar0, 0x10000000));
}

void Function_74(bool bParam0, int iParam1) //Position: 0x3F15 / 16149
{
	GET_POSITION(bParam0, iParam1);
	return;
}

bool Function_75() //Position: 0x3F22 / 16162
{
	if (Function_33(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_76(bool bParam0) //Position: 0x3F3D / 16189
{
	int iVar0;
	int iVar1;
	
	if (!Function_81(bParam0))
	{
		return;
	}
	switch (Function_95(bParam0))
	{
		case 0x00000001:
			iVar1 = Function_93(bParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_8(12, 1, 0, 0);
				Function_80(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_8(13, 1, 0, 0);
				Function_80(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_8(14, 1, 0, 0);
				Function_80(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_8(15, 1, 0, 0);
				Function_80(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_8(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_93(bParam0))
			{
				case 0x00000000:
					if (Function_79(bParam0) == 1)
					{
						iVar0 = Function_78(bParam0);
						if (Function_77(iVar0))
						{
							if (iVar0 == Global_30723[5])
							{
								Function_80(4, 18);
							}
							else if (iVar0 == Global_30693[3])
							{
								Function_80(4, 10);
							}
							else if (iVar0 == Global_30723[6])
							{
								Function_80(4, 16);
							}
							else if (iVar0 == Global_30668[3])
							{
								Function_80(4, 6);
							}
							else if (iVar0 == Global_30640[13])
							{
								Function_80(4, 3);
							}
							else if (iVar0 == Global_30693[7])
							{
								Function_80(4, 11);
							}
							else if (iVar0 == Global_30640[6])
							{
								Function_80(4, 0);
							}
							else if (iVar0 == Global_30693[10])
							{
								Function_80(4, 15);
							}
							else if (iVar0 == Global_30693[8])
							{
								Function_80(4, 14);
							}
							else if (iVar0 == Global_30640[11])
							{
								Function_80(4, 2);
							}
							else if (iVar0 == Global_30668[6])
							{
								Function_80(4, 7);
							}
							else if (iVar0 == Global_30723[3])
							{
								Function_80(4, 17);
							}
							else if (iVar0 == Global_30685[5])
							{
								Function_80(4, 8);
							}
							else if (iVar0 == Global_30693[9])
							{
								Function_80(4, 13);
							}
							else if (iVar0 == Global_30693[11])
							{
								Function_80(4, 12);
							}
							else if (iVar0 == Global_30640[7])
							{
								Function_80(4, 1);
							}
							else if (iVar0 == Global_30679[3])
							{
								Function_80(4, 5);
							}
							else if (iVar0 == Global_30693[4])
							{
								Function_80(4, 9);
							}
							else if (iVar0 == Global_30658[7])
							{
								Function_80(4, 4);
							}
							else if (iVar0 == Global_30723[4])
							{
								Function_80(4, 19);
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
								Function_8(363, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[1])
							{
								Function_8(364, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[2])
							{
								Function_8(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_78(bParam0) == 0)
			{
				if (Function_79(bParam0) == 1)
				{
					Function_8(458, 1, 0, 0);
					iVar0 = Function_93(bParam0);
					if (Function_77(iVar0))
					{
						if (iVar0 == Global_30668[2])
						{
							Function_80(2, 10);
						}
						else if (iVar0 == Global_30658[2])
						{
							Function_80(2, 11);
						}
						else if (iVar0 == Global_30640[2])
						{
							Function_80(2, 12);
						}
						else if (iVar0 == Global_30658[0])
						{
							Function_80(2, 13);
						}
						else if (iVar0 == Global_30658[3])
						{
							Function_80(2, 14);
						}
						else if (iVar0 == Global_30685[2])
						{
							Function_80(2, 15);
						}
						else if (iVar0 == Global_30685[1])
						{
							Function_80(2, 16);
						}
						else if (iVar0 == Global_30679[1])
						{
							Function_80(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_79(bParam0) == 1)
			{
				Function_8(400, 1, 0, 0);
			}
			switch (Function_93(bParam0))
			{
				case 0x00000001:
					Function_8(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_80(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_80(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_80(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_8(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_80(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_80(6, 9);
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

bool Function_77(int iParam0) //Position: 0x441A / 17434
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_78(bool bParam0) //Position: 0x4430 / 17456
{
	if (!Function_81(bParam0))
	{
		return 4294967295;
	}
	return (SHIFT_RIGHT(Global_13172[bParam011], 4) && 255);
}

int Function_79(bool bParam0) //Position: 0x444F / 17487
{
	if (!Function_81(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_80(int iParam0, bool bParam1) //Position: 0x4469 / 17513
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

bool Function_81(int iParam0) //Position: 0x44D0 / 17616
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

void Function_82(char* cParam0, bool bParam1) //Position: 0x44E7 / 17639
{
	struct<4> Var0;
	
	if (!Function_98(bParam1))
	{
		return;
	}
	switch (Function_95(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_83(Function_93(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_95(bParam1), Function_93(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_95(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_95(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_95(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_95(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_95(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_83(int iParam0) //Position: 0x460B / 17931
{
	char* cVar0[16];
	
	if (!Function_75())
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

void Function_84() //Position: 0x4645 / 17989
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
	PLAYSTAT_INT("HC_MONEY", Function_60(0));
	PLAYSTAT_INT("HC_FAME", Function_60(3));
	PLAYSTAT_INT("HC_HONOR", Function_60(1));
	return;
}

void Function_85() //Position: 0x479D / 18333
{
	int iVar0;
	int iVar1;
	
	if (!Function_90(Global_6269))
	{
		return;
	}
	iVar0 = Function_60(24);
	iVar1 = Function_89(Global_6269);
	if (!Function_90(iVar0) && Function_88(iVar1) < 0)
	{
		Function_59(24, Global_6269, 0);
		Function_86(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_88(Function_89(iVar0)))
	{
		Function_59(24, Global_6269, 0);
		Function_86(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_86(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x481D / 18461
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
		Function_87(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_87(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x4B6F / 19311
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

int Function_88(int iParam0) //Position: 0x4BF2 / 19442
{
	if (!Function_98(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

int Function_89(int iParam0) //Position: 0x4C0C / 19468
{
	if (!Function_90(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_90(int iParam0) //Position: 0x4C26 / 19494
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

struct<16> Function_91(int iParam0) //Position: 0x4C3C / 19516
{
	char* cVar0[16];
	
	if (!Function_75())
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

struct<24> Function_92(char* cParam0) //Position: 0x4C7B / 19579
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

int Function_93(bool bParam0) //Position: 0x4ED1 / 20177
{
	if (!Function_81(bParam0))
	{
		return 4294967295;
	}
	return (SHIFT_RIGHT(Global_13172[bParam011], 12) && 255);
}

bool Function_94() //Position: 0x4EF1 / 20209
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

int Function_95(bool bParam0) //Position: 0x4F1C / 20252
{
	if (!Function_81(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_96() //Position: 0x4F37 / 20279
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
			Function_97(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
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

void Function_97(bool bParam0, var uParam1, var uParam2, var uParam3) //Position: 0x517E / 20862
{
	*uParam3 = (bParam0 && 15);
	*uParam1 = (SHIFT_RIGHT(bParam0, 4) && 255);
	*uParam2 = (SHIFT_RIGHT(bParam0, 12) && 255);
}

bool Function_98(int iParam0) //Position: 0x51A7 / 20903
{
	if (!Function_81(iParam0))
	{
		return 0;
	}
	if (!Function_99(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_99(int iParam0) //Position: 0x51CB / 20939
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_100(var uParam0, bool bParam1, bool bParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9, var uParam10, struct<53> Param11) //Position: 0x51E0 / 20960
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	vector3 vVar5;
	float fVar8;
	float fVar9;
	float fVar10;
	
	switch (*uParam0)
	{
		case 0x00000000:
			if ((!HUD_IS_FADING() && !HUD_IS_FADED()) && !HUD_IS_SHOWING_HELP_TEXT())
			{
				HUD_FADE_OUT(1.0f, 1f, 1);
			}
			if (HUD_IS_FADED())
			{
				STREAMING_OVERRIDE_MAIN_POI(StackVal, StackVal, StackVal, StackVal, Function_120(StackVal, StackVal, *uParam4, 0.0f, *uParam4, *uParam5), 0.0f);
				Function_118(9);
				iLocal_221 = 1;
				Function_36(0, GET_THIS_SCRIPT_ID());
				*uParam54 = Function_109(0, 1, 0, 0, 0, 0, 1, 0);
				if (IS_ACTOR_VALID(*uParam54))
				{
					if (!DECOR_CHECK_EXIST(*uParam54, "HorseLeash"))
					{
						bVar0 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/horseHitch", &Global_34574, 50.0f, 0);
						if (IS_GRINGO_VALID(bVar0))
						{
							bVar4 = GET_ACTOR_FROM_OBJECT(Function_108(bVar0, "UseCase1"));
							if (IS_ACTOR_VALID(bVar4) && !bVar4 != *uParam54)
							{
								DESTROY_ACTOR(GET_ACTOR_FROM_OBJECT(Function_108(bVar0, "UseCase1")));
							}
							DECOR_SET_BOOL(*uParam54, "ignoreactorinduel", true);
							GRINGO_GET_USE_COMPONENT_POSITION_EXT(bVar0, "UseCase1", &vVar1);
							SET_OBJECT_POSITION(*uParam54, vVar1);
							SET_OBJECT_ORIENTATION(*uParam54, 0.0f, GRINGO_GET_USE_COMPONENT_HEADING_EXT(bVar0, "UseCase1"), 0.0f);
							SNAP_ACTOR_TO_GRINGO(*uParam54, GET_OBJECT_FROM_GRINGO(bVar0), "UseCase1", 1, 0, 0);
							TASK_USE_GRINGO(*uParam54, bVar0, "UseCase1", 1, 1);
						}
						else
						{
							LOG_ERROR("Could not find horse hitch gringo for duel");
							DESTROY_ACTOR(*uParam54);
						}
					}
				}
				if (bParam55)
				{
					iLocal_223 = iParam9;
					if (Param11.f_60 <= iParam9)
					{
						iLocal_223 = Param11.f_60;
					}
					if (Param11.f_56 == 0)
					{
						Function_106(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, uParam8, iLocal_223, uParam3, bParam1, Param11, uParam53);
					}
				}
				CLEAR_AMBIENT_OBJECTS_VOLUME(*uParam7, 15);
				HUD_CLEAR_HELP_QUEUE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				*uParam0 = 1;
			}
			break;
		
		case 0x00000001:
			MAKE_ACTOR_READY_FOR_ACTION(Global_34573, 1);
			MAKE_ACTOR_READY_FOR_ACTION(bParam1, 1);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			HUD_ENABLE(1);
			SET_HUD_MAP_DRAW_ENABLED(0);
			TELEPORT_ACTOR(bParam1, uParam5, 1, 1, 1);
			GIVE_WEAPON_TO_ACTOR(bParam1, 4, 0, 1, 1);
			if (Function_60(451) <= 1)
			{
				Local_195.f_60 = 0;
			}
			else if (Function_60(451) <= 3)
			{
				Local_195.f_60 = 1;
			}
			else
			{
				Local_195.f_60 = 2;
			}
			if (iParam56 <= Local_195.f_60)
			{
				Local_195.f_60 = iParam56;
			}
			Local_195.f_52 = Function_15(150, (50 + Function_60(451) * 15));
			Local_195.f_48 = uParam57;
			if (Function_94())
			{
				if (Function_60(451) < 1)
				{
					Local_195.f_60 = 1;
					Local_195.f_48 = 0;
					Local_195.f_52 = 175;
				}
				else
				{
					Local_195.f_60 = 2;
					Local_195.f_48 = 0;
					Local_195.f_52 = 195;
				}
			}
			Local_195 = bParam2;
			Local_195.f_4 = bParam1;
			*(&Local_195 + 8) = { StackVal, StackVal, *uParam4 };
			*(&Local_195 + 20) = { StackVal, StackVal, *uParam5 };
			vVar5 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*(&Local_195 + 20), *(&Local_195 + 8), StackVal) };
			fVar8 = UNK_0x9C40E671(&vVar5);
			fVar9 = Param11.f_48;
			fVar10 = Param11.f_52;
			Local_195.f_32 = CREATE_VOLUME_IN_LAYOUT(*uParam3, "Duel_StayOut", 2, *(&Local_195 + 20), 0.0f, fVar8, 0.0f, fVar9, 10.0f, fVar10);
			Local_195.f_36 = 1;
			Local_195.f_64 = uParam10;
			bLocal_220 = LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Mini_Games/Dueling/Dueling", &Local_195, 25, 0);
			if (!IS_SCRIPT_VALID(bLocal_220))
			{
				Function_103();
				return 0;
			}
			*uParam0 = 2;
			break;
		
		case 0x00000002:
			if (!IS_SCRIPT_VALID(bLocal_220))
			{
				switch (DECOR_GET_INT(bParam2, "iDuelResult"))
				{
					case 0x00001389:
						if (IS_ACTOR_VALID(bParam1))
						{
							Function_102(bParam1);
							*(&Local_195 + 20) = { StackVal, StackVal, Function_102(bParam1) };
						}
						if (IS_ACTOR_VALID(*uParam54))
						{
							if (DECOR_CHECK_EXIST(*uParam54, "ignoreactorinduel"))
							{
								DECOR_REMOVE(*uParam54, "ignoreactorinduel");
							}
						}
						if (bParam55)
						{
							Function_101(uParam53, iLocal_223);
						}
						Function_103();
						*uParam6 = 1;
						return 1;
						break;
					
					case 0x0000138A:
						TASK_FLEE_ACTOR(bParam1, Global_34573, -1.0f, -1.0f, 0, 0, 0);
						if (IS_ACTOR_VALID(bParam1))
						{
							Function_102(bParam1);
							*(&Local_195 + 20) = { StackVal, StackVal, Function_102(bParam1) };
						}
						if (IS_ACTOR_VALID(*uParam54))
						{
							if (DECOR_CHECK_EXIST(*uParam54, "ignoreactorinduel"))
							{
								DECOR_REMOVE(*uParam54, "ignoreactorinduel");
							}
						}
						if (bParam55)
						{
							Function_101(uParam53, iLocal_223);
						}
						Function_103();
						*uParam6 = 1;
						return 1;
						break;
					
					case 0x0000138B:
						if (IS_ACTOR_VALID(*uParam54))
						{
							if (DECOR_CHECK_EXIST(*uParam54, "ignoreactorinduel"))
							{
								DECOR_REMOVE(*uParam54, "ignoreactorinduel");
							}
						}
						Function_103();
						*uParam6 = 1;
						return 1;
						break;
					
					case 0x0000138D:
						if (IS_ACTOR_VALID(*uParam54))
						{
							if (DECOR_CHECK_EXIST(*uParam54, "ignoreactorinduel"))
							{
								DECOR_REMOVE(*uParam54, "ignoreactorinduel");
							}
						}
						Function_103();
						*uParam6 = 1;
						return 1;
						break;
					
					default:
						break;
					}
			}
			break;
	}
	return 1;
}

void Function_101(var uParam0, int iParam1) //Position: 0x573B / 22331
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		SET_ACTOR_ALLOW_WEAPON_REACTIONS((*uParam0)[iVar0], 1);
		iVar0++;
	}
	return;
}

vector3 Function_102(bool bParam0) //Position: 0x575E / 22366
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_103() //Position: 0x576F / 22383
{
	if (iLocal_221)
	{
		Function_104(9);
		iLocal_221 = 0;
	}
	return;
}

void Function_104(int iParam0) //Position: 0x5782 / 22402
{
	Function_105(&Global_28842, iParam0);
	return;
}

void Function_105(var uParam0, var uParam1) //Position: 0x5790 / 22416
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_106(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46) //Position: 0x57AB / 22443
{
	int iVar0;
	vector3 vVar1;
	bool bVar4;
	
	uParam3 = uParam3;
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		vVar1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*(&iParam4 + 64[iVar03]), *(&iParam4 + 36), StackVal) };
		bVar4 = UNK_0x9C40E671(&vVar1);
		(*uParam46)[iVar0] = CREATE_ACTOR_IN_LAYOUT(*uParam2, Function_194(), (*uParam0)[iVar0], *(&iParam4 + 64[iVar03]), 0.0f, bVar4, 0.0f);
		TASK_FACE_COORD((*uParam46)[iVar0], &iParam4 + 36, 1);
		TASK_PRIORITY_SET((*uParam46)[iVar0], 1);
		iVar0++;
	}
	Function_107(uParam46, iParam1, 1, &iParam4);
}

int Function_107(var uParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x582C / 22572
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	
	if (iParam1 < 0)
	{
		return 1;
	}
	iVar0 = 4294967295;
	bVar1 = RAND_INT_RANGE(0, (iParam1 - 1));
	iVar2 = 0;
	while (iVar2 <= iParam1)
	{
		iVar3 = ((iVar2 + bVar1) % iParam1);
		if (IS_ACTOR_MALE((*uParam0)[iVar3]))
		{
			if ((*iParam3 + 140)[iVar3] & 4096 != 0)
			{
				if (UNK_0xE094DB31((*uParam0)[iVar3], 0))
				{
					iVar0 = iVar3;
				}
			}
		}
		iVar2++;
	}
	iVar4 = 4294967295;
	bVar1 = RAND_INT_RANGE(0, (iParam1 - 1));
	iVar5 = 8192 | 16384;
	iVar2 = 0;
	while (iVar2 <= iParam1)
	{
		iVar6 = ((iVar2 + bVar1) % iParam1);
		if (((*iParam3 + 140)[iVar6] && iVar5) != 0)
		{
			iVar4 = iVar6;
		}
		iVar2++;
	}
	iVar7 = 0;
	iVar8 = 0;
	while (iVar8 <= iParam1)
	{
		bVar9 = (*iParam3 + 140)[iVar8];
		if (!bParam2)
		{
			Function_68(&bVar9, 4);
		}
		if (iVar8 == iVar0)
		{
			Function_68(&bVar9, 8);
		}
		if (iVar8 == iVar4)
		{
			Function_68(&bVar9, 16);
		}
		if (bParam2)
		{
			bVar10 = RAND_FLOAT_RANGE(0.0f, 1.0f);
			if (bVar10 < 0.5f || iVar7 <= 3)
			{
				Function_68(&bVar9, 64);
			}
			else
			{
				iVar7++;
			}
		}
		DECOR_SET_INT((*uParam0)[iVar8], "DuelIsCrowdActor", bVar9);
		iVar8++;
	}
	return 1;
}

var Function_108(bool bParam0, bool bParam1) //Position: 0x596F / 22895
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(bParam0, bParam1);
}

var Function_109(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, var uParam6, bool bParam7) //Position: 0x597C / 22908
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	int iVar8;
	int iVar9;
	vector3 vVar10;
	
	if (!IS_ACTOR_VALID(Global_34573))
	{
		return "";
	}
	if (!IS_ACTOR_ALIVE(Global_34573))
	{
		return "";
	}
	bVar0 = (StackVal + 976);
	if (Global_3381)
	{
		Function_117(976, 0, 1);
	}
	bParam7 = bParam7;
	if (!bParam7)
	{
		if (!Function_116())
		{
			return "";
		}
	}
	if (!Function_114())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		bVar1 = IS_ACTOR_ALIVE(Global_12976.f_36);
	}
	Function_113();
	if ((bVar1 && uParam6) && uParam0)
	{
		Function_112(GET_OBJECT_FROM_ACTOR(Global_12976.f_36));
		vVar2 = { StackVal, StackVal, Function_112(GET_OBJECT_FROM_ACTOR(Global_12976.f_36)) };
		Function_112(GET_OBJECT_FROM_ACTOR(Global_34573));
		vVar5 = { StackVal, StackVal, Function_112(GET_OBJECT_FROM_ACTOR(Global_34573)) };
		iVar8 = Function_111(StackVal, StackVal, vVar2, 0, 1, 1);
		if (iVar8 != 4294967294 || iVar8 != 4294967295)
		{
		}
		else
		{
			iVar9 = Function_111(StackVal, StackVal, vVar5, 0, 1, 1);
			if (iVar8 != iVar9)
			{
				if (Function_47() || NET_IS_IN_SESSION())
				{
					RELEASE_ACTOR(Global_12976.f_36);
					Global_12976.f_36 = "";
					CLEAR_ACTORS_HORSE(Global_34573);
				}
				else
				{
					RELEASE_ACTOR(Global_12976.f_36);
					if (!bParam7)
					{
						Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_194(), bVar0, bParam2, bParam3, bParam4, 0.0f, bParam5, 0.0f);
						SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
					}
					else
					{
						Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_194(), 993, bParam2, bParam3, bParam4, 0.0f, bParam5, 0.0f);
						SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
					}
					DELETE_ALL_ACCESSORIES_FROM_ACTOR(Global_12976.f_36);
					if (IS_ACTOR_HORSE(Global_12976.f_36))
					{
						ACCESSORIZE_HORSE(Global_12976.f_36, 4);
					}
					else if (IS_ACTOR_MULE(Global_12976.f_36))
					{
						ACCESSORIZE_HORSE(Global_12976.f_36, 3);
					}
				}
			}
			else
			{
				vVar10 = { bParam2, bParam3, bParam4 };
				if (!Function_40(StackVal, StackVal, vVar10))
				{
					TELEPORT_ACTOR(Global_12976.f_36, &vVar10, 1, 1, 1);
				}
			}
		}
	}
	else if (!bVar1 && (uParam0 || Global_3380))
	{
		if (!bParam7)
		{
			Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_194(), bVar0, bParam2, bParam3, bParam4, 0.0f, bParam5, 0.0f);
			SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
		}
		else
		{
			if (bVar0 != 993)
			{
				(&Global_12976 + 36)->f_8 = (bVar0 - 976);
			}
			Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_194(), 993, bParam2, bParam3, bParam4, 0.0f, bParam5, 0.0f);
			SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
		}
		DELETE_ALL_ACCESSORIES_FROM_ACTOR(Global_12976.f_36);
		if (IS_ACTOR_HORSE(Global_12976.f_36))
		{
			ACCESSORIZE_HORSE(Global_12976.f_36, 4);
		}
		else if (IS_ACTOR_MULE(Global_12976.f_36))
		{
			ACCESSORIZE_HORSE(Global_12976.f_36, 3);
		}
		else if (ANIMAL_ACTOR_GET_SPECIES(Global_12976.f_36) != 9 || ANIMAL_ACTOR_GET_SPECIES(Global_12976.f_36) != 8)
		{
			ACCESSORIZE_HORSE(Global_12976.f_36, 8);
		}
	}
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		bVar1 = IS_ACTOR_ALIVE(Global_12976.f_36);
	}
	if (bVar1)
	{
		if (bParam1)
		{
			MAKE_ACTOR_READY_FOR_ACTION(Global_12976.f_36, 1);
		}
	}
	if (bVar1)
	{
		CLEAR_ACTORS_HORSE(Global_34573);
		SET_ACTORS_HORSE(Global_34573, Global_12976.f_36);
		Function_110(Global_12976.f_36, 0, 0, 0, 0, 0, 0);
	}
	if (Function_47() || NET_IS_IN_SESSION())
	{
		if (IS_ACTOR_VALID(Global_12976.f_36))
		{
			NET_ACTOR_SET_ALLOW_BLIP_SYNC(Global_12976.f_36, 0);
		}
	}
	return Global_12976.f_36;
}

void Function_110(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x5CD2 / 23762
{
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_ACTOR_CAN_BE_TARGETED(bParam0, bParam1);
		SET_ACTOR_CAN_BE_HARDLOCKED(bParam0, iParam2);
		SET_ACTOR_CAN_BE_SOFTLOCKED(bParam0, iParam6);
		SET_ACTOR_CAN_BE_BUMPTARGETED(bParam0, iParam3);
		SET_ACTOR_ONLY_HARDLOCK_IF_HOSTILE(bParam0, iParam5);
		SET_ACTOR_USE_FULLSCREEN_ACQUISITION(bParam0, iParam4);
	}
}

var Function_111(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x5D0F / 23823
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = 145;
	iVar2 = 4294967295;
	while (iVar1 <= 0 && !bVar0)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
			{
				switch (StackVal)
				{
					case 0x00000002:
						if (!bParam3)
						{
							iVar2 = iVar1;
							bVar0 = true;
						}
						break;
					
					case 0x00000006:
						if (!bParam4)
						{
							iVar2 = iVar1;
							bVar0 = true;
						}
						break;
					
					default:
						iVar2 = iVar1;
						bVar0 = true;
						break;
					}
				}
		}
		iVar1 = (iVar1 - 1);
	}
	if (bParam5)
	{
		if (bVar0)
		{
		}
	}
	return iVar2;
}

vector3 Function_112(bool bParam0) //Position: 0x5DAA / 23978
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

void Function_113() //Position: 0x5DD1 / 24017
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

bool Function_114() //Position: 0x5E43 / 24131
{
	if (Function_115() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_115() //Position: 0x5E59 / 24153
{
	return Global_12976.f_152;
}

bool Function_116() //Position: 0x5E64 / 24164
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_117(var uParam0, bool bParam1, bool bParam2) //Position: 0x5E84 / 24196
{
	Global_13038 = uParam0;
	if (bParam1)
	{
		Function_68(&Global_12976 + 36 + 20, 128);
	}
	if (bParam2)
	{
		Function_68(&Global_12976 + 36 + 20, 64);
	}
	return;
}

void Function_118(int iParam0) //Position: 0x5EB1 / 24241
{
	Function_119(&Global_28842, iParam0);
	return;
}

void Function_119(var uParam0, bool bParam1) //Position: 0x5EBF / 24255
{
	int iVar0;
	
	iVar0 = (*uParam0 && bParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

var Function_120(vector3 vParam0, vector3 vParam3) //Position: 0x5EE2 / 24290
{
	var uVar0;
	
	Function_121(StackVal, StackVal, StackVal, StackVal, vParam0, vParam3, &uVar0);
	return UNK_0x9C40E671(&uVar0);
}

void Function_121(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x5EFC / 24316
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

bool Function_122(bool bParam0, vector3 vParam1, var uParam4, var uParam5, var uParam6, var uParam7) //Position: 0x5F1F / 24351
{
	vParam1 = { StackVal, StackVal, vParam1 };
	switch (*uParam4)
	{
		case 0x00000000:
			if (!(HUD_IS_FADED() || HUD_IS_FADING()))
			{
				HUD_FADE_OUT(0.5f, 1f, 1);
				SET_HUD_MAP_DRAW_ENABLED(0);
				*uParam4 = 3;
				*uParam7 = 0;
			}
			break;
		
		case 0x00000003:
			if (HUD_IS_FADED())
			{
				if (IS_ACTOR_VALID(GET_MOUNT(Global_34573)))
				{
					ACTOR_DISMOUNT_NOW(Global_34573);
				}
				if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(*uParam5)))
				{
					Function_127(uParam6, &bLocal_335, &iLocal_306);
					if (!GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(*uParam5)))
					{
						GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(*uParam5), true);
					}
					SNAP_ACTOR_TO_GRINGO(bParam0, *uParam5, "UseCase1", 0, 0, 0);
					TASK_USE_GRINGO(bParam0, GET_GRINGO_FROM_OBJECT(*uParam5), "UseCase1", 1, 1);
					TASK_PRIORITY_SET(bParam0, 1);
					*uParam4 = 6;
				}
			}
			else
			{
				*uParam7 = 0;
			}
			break;
		
		case 0x00000006:
			if (GET_CURRENT_GRINGO(bParam0) == GET_GRINGO_FROM_OBJECT(*uParam5))
			{
				*uParam4 = 4;
				*uParam7 = 0;
			}
			break;
		
		case 0x00000004:
			SNAP_ACTOR_TO_GRINGO(Global_34573, *uParam5, "ChildUse", 0, 0, 0);
			TASK_USE_GRINGO(Global_34573, GET_GRINGO_FROM_OBJECT(*uParam5), "ChildUse", 1, 1);
			TASK_PRIORITY_SET(Global_34573, 1);
			Function_125(StackVal, StackVal, *uParam5, bLocal_335, vLocal_311[iLocal_3103], &(vLocal_321[iLocal_3103]));
			HUD_FADE_IN(1.0f, 1065353216);
			Function_193(&uLocal_300, 0.0f);
			Function_193(&uLocal_297, 0.0f);
			*uParam4 = 11;
			*uParam7 = 0;
			break;
		
		case 0x0000000B:
			*uParam7 = 0;
			Function_124(bParam0);
			if (Function_123(uParam5))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool Function_123(int iParam0) //Position: 0x60AE / 24750
{
	if (Function_133(&uLocal_300, fLocal_331[iLocal_310]))
	{
		iLocal_310++;
		if (iLocal_310 > 3)
		{
			HUD_FADE_OUT(1.0f, 1f, 1);
			return 1;
		}
		Function_125(StackVal, StackVal, *iParam0, bLocal_335, vLocal_311[iLocal_3103], &(vLocal_321[iLocal_3103]));
		Function_193(&uLocal_300, 0.0f);
	}
	return 0;
}

void Function_124(bool bParam0) //Position: 0x6103 / 24835
{
	switch (iLocal_309)
	{
		case 0x00000000:
			Function_142(bParam0, Global_34573, "firstduel_msg01", "firsttimeDuel_msg01", 5, 60, 1, 1);
			Function_193(&uLocal_297, 0.0f);
			iLocal_309 = 1;
			break;
		
		case 0x00000001:
			if (Function_133(&uLocal_297, 2.0f) && !IS_AMBIENT_SPEECH_PLAYING(bParam0))
			{
				Function_142(bParam0, Global_34573, "firstduel_msg02", "firsttimeDuel_msg02", 5, 60, 1, 1);
				Function_193(&uLocal_297, 0.0f);
				iLocal_309 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_133(&uLocal_297, 2.0f) && !IS_AMBIENT_SPEECH_PLAYING(bParam0))
			{
				Function_142(Global_34573, bParam0, "firstduelPlayer_msg01", "firstduelPlayer_msg01", 5, 60, 1, 1);
				iLocal_309 = 3;
			}
			break;
		
		case 0x00000003:
			if (Function_133(&uLocal_297, 2.0f) && !IS_AMBIENT_SPEECH_PLAYING(Global_34573))
			{
				Function_142(bParam0, Global_34573, "firstduel_msg03", "firsttimeDuel_msg03", 5, 60, 1, 1);
				iLocal_309 = 4;
			}
			break;
		
		case 0x00000004:
			if (Function_133(&uLocal_297, 2.0f) && !IS_AMBIENT_SPEECH_PLAYING(bParam0))
			{
				Function_142(bParam0, Global_34573, "firstduel_msg04", "firsttimeDuel_msg04", 5, 60, 1, 1);
				Function_193(&uLocal_297, 0.0f);
				iLocal_309 = 5;
			}
			break;
		
		case 0x00000005:
			if (Function_133(&uLocal_297, 2.0f) && !IS_AMBIENT_SPEECH_PLAYING(bParam0))
			{
				Function_142(Global_34573, bParam0, "firstduelPlayer_msg02", "firstduelPlayer_msg02", 5, 60, 1, 1);
				Function_193(&uLocal_297, 0.0f);
				iLocal_309 = 6;
			}
			break;
	}
	return;
}

void Function_125(bool bParam0, bool bParam1, vector3 vParam2, bool bParam5) //Position: 0x631F / 25375
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	Function_126(bParam0);
	vVar0 = { StackVal, StackVal, Function_126(bParam0) };
	UNK_0xF1A53C41(&vVar6, &vVar0, 1, 0);
	UNK_0xF76F2BB3(&vVar6, bParam5, 1, 4);
	GET_OBJECT_RELATIVE_POSITION(bParam0, vParam2, &vVar3);
	SET_CAMERA_POSITION(bParam1, vVar3);
	SET_CAMERA_DIRECTION(bParam1, vVar6, 1);
}

vector3 Function_126(bool bParam0) //Position: 0x6361 / 25441
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

void Function_127(bool bParam0, var uParam1, bool bParam2) //Position: 0x6388 / 25480
{
	vector3 vVar0;
	bool bVar3;
	
	*bParam2 = 1;
	*uParam1 = CREATE_CAMERA_IN_LAYOUT(bParam0, Function_194(), 0);
	SET_ACTOR_POSTURE(Global_34573, 0);
	Function_102(Global_34573);
	vVar0 = { StackVal, StackVal, Function_102(Global_34573) };
	CLEAR_AMBIENT_OBJECTS_SPHERE(vVar0, 10.0f, 39);
	Function_41();
	bVar3 = CREATE_VOLUME_IN_LAYOUT(bParam0, Function_194(), 2, vVar0, Function_41(), 10.0f, 10.0f, 10.0f);
	DELETE_PROJECTILES_IN_VOLUME(bVar3);
	DESTROY_VOLUME(bVar3);
	Function_128(1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
	SET_CURRENT_CAMERA_ON_CHANNEL(*uParam1, 0, 0f, 0f, 0, 0, 0, 0, 0, 0);
	INIT_CAMERA_FROM_GAME_CAMERA(*uParam1);
	return;
}

void Function_128(bool bParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, var uParam10, bool bParam11) //Position: 0x640C / 25612
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
	Function_132();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(Global_34573, "iDrunk", false);
	if (bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_57();
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
			if (Function_47())
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
				Function_102(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_194(), 2, Function_102(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
				DELETE_PROJECTILES_IN_VOLUME(bVar0);
			}
		}
		Function_8(19, 1, 0, 0);
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
	if (uParam10 && !Function_75())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_131()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_131()));
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
	if (Function_130(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_129(0x4000000);
	}
	if (Function_130(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_129(0x8000000);
	}
}

void Function_129(int iParam0) //Position: 0x66BA / 26298
{
	int iVar0;
	
	if (Function_33(iParam0, 1) && Function_33(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

bool Function_130(int iParam0) //Position: 0x66EE / 26350
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_131() //Position: 0x670A / 26378
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

void Function_132() //Position: 0x6789 / 26505
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

bool Function_133(var uParam0, float fParam1) //Position: 0x679E / 26526
{
	if (Function_136(uParam0))
	{
		if (Function_134(uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_134(int iParam0) //Position: 0x67BA / 26554
{
	if (Function_136(iParam0))
	{
		if (Function_135(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_135(int iParam0) //Position: 0x6882 / 26754
{
	return Function_33(*iParam0, 2);
}

bool Function_136(int iParam0) //Position: 0x688F / 26767
{
	return Function_33(*iParam0, 1);
}

float Function_137(bool bParam0, bool bParam1) //Position: 0x689C / 26780
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

void Function_138(bool bParam0, bool bParam1) //Position: 0x698D / 27021
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
	else if (!bParam1 || Function_139(bParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(bParam0, 1);
	}
	return;
}

float Function_139(bool bParam0, bool bParam1) //Position: 0x69EA / 27114
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

void Function_140(bool bParam0) //Position: 0x6A09 / 27145
{
	if (IS_ACTOR_VALID(bParam0))
	{
		switch (iLocal_339)
		{
			case 0x00000000:
				Function_142(bParam0, Global_34573, "FIGHT", 0, 5, 60, 1, 1);
				iLocal_339 = 1;
				break;
			
			case 0x00000001:
				if (!IS_AMBIENT_SPEECH_PLAYING(bParam0))
				{
					Function_193(&uLocal_340, 0.0f);
					iLocal_339 = 2;
				}
				break;
			
			case 0x00000002:
				if (Function_133(&uLocal_340, 3.0f))
				{
					iLocal_339 = 0;
				}
				break;
			}
	}
	return;
}

void Function_141(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x6A76 / 27254
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_91(Global_6269) };
		}
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

void Function_142(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x6AF1 / 27377
{
	bParam1 = bParam1;
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0) && Function_137(bParam0, Global_34573) >= IntToFloat(iParam5))
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

void Function_143() //Position: 0x6B81 / 27521
{
	int iVar0;
	
	bLocal_338 = true;
	if (Global_29004 == 0)
	{
		iVar0 = Function_144(3);
		if (iVar0 == 0)
		{
			cLocal_337 = "FTR_SONG_02";
		}
		else if (iVar0 == 1)
		{
			cLocal_337 = "FTR_SONG_03";
		}
		else if (iVar0 == 2)
		{
			cLocal_337 = "FTR_SONG_07";
		}
	}
	AUDIO_MUSIC_FORCE_TRACK(cLocal_337, "SUSPENSE", -3.0f, 500, 4294967295, 3212836864, 0);
	return;
}

var Function_144(bool bParam0) //Position: 0x6C03 / 27651
{
	bParam0 = (bParam0 * 1000 - 1);
	return (RAND_INT_RANGE(0, bParam0) / 1000);
}

bool Function_145(bool bParam0) //Position: 0x6C1C / 27676
{
	return 0;
	if (!IS_ACTOR_ON_FOOT(Global_34573))
	{
		if (bParam0)
		{
			HUD_CLEAR_OBJECTIVE_QUEUE();
			PRINT_OBJECTIVE_B("You must be on foot to get challenged to a duel. Once you are on foot the challenger will respond to you.", 10.0f, 1, 2, true, 0, 0, 0);
		}
		return 1;
	}
	return 0;
}

bool Function_146(int iParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x6CB3 / 27827
{
	if (StackVal & 64 == 64)
	{
		if (!*uParam2)
		{
			if (IS_ACTOR_VALID(bParam1))
			{
				if (Function_137(Global_34573, bParam1) > 15.0f)
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
		if (Function_149() && !*uParam2)
		{
			return 0;
		}
		if (Function_148(iParam0) && !*uParam2)
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
		if (!Function_147(iParam0, uParam5))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_147(int iParam0, int iParam1) //Position: 0x6DE1 / 28129
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

int Function_148(int iParam0) //Position: 0x6E02 / 28162
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

int Function_149() //Position: 0x6E40 / 28224
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
						if (Function_150(StackVal, Global_34573) > IntToFloat(iVar1))
						{
							return 1;
						}
					}
				}
			}
			if (Function_150(StackVal, Global_34573) > IntToFloat(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

float Function_150(bool bParam0, bool bParam1) //Position: 0x6EFB / 28411
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_152(bParam0);
			vVar0 = { StackVal, StackVal, Function_152(bParam0) };
			Function_151(bParam1);
			vVar3 = { StackVal, StackVal, Function_151(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

vector3 Function_151(bool bParam0) //Position: 0x6F9B / 28571
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

vector3 Function_152(bool bParam0) //Position: 0x7007 / 28679
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

void Function_153(var uParam0, bool bParam1, bool bParam2) //Position: 0x7071 / 28785
{
	if (bParam1)
	{
		HUD_CLEAR_HELP_QUEUE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
		Function_155(uParam0, 0x40f00000, 1, 2, 0, 0, 0, 0);
		if (bParam2)
		{
			Function_154();
		}
	}
	return;
}

void Function_154() //Position: 0x709A / 28826
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

void Function_155(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x7123 / 28963
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
			Var0 = { StackVal, StackVal, StackVal, Function_91(Global_6269) };
		}
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, &Var0, 0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, iVar4, iParam5, iParam6);
	}
}

bool Function_156(bool bParam0, bool bParam1, int iParam2) //Position: 0x71A8 / 29096
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

void Function_157(bool bParam0) //Position: 0x72B9 / 29369
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

int Function_158(bool bParam0, bool bParam1) //Position: 0x7305 / 29445
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
	if (!IS_ACTOR_VALID(*bParam1))
	{
		LOG_ERROR("VICTIM is invalid in TASK_KILL_ACTOR_RUTHLESS");
		return 0;
	}
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, -1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 37, 2.0f);
	MEMORY_ALLOW_TAKE_COVER(bParam0, 0);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(bParam0, 0);
	MEMORY_REPORT_POSITION_AUTO(bParam0, *bParam1, 1);
	TASK_KILL_CHAR(bParam0, *bParam1);
	TASK_PRIORITY_SET(bParam0, 1);
	return 1;
}

bool Function_159(bool bParam0, var uParam1, var uParam2, var uParam3, bool bParam4, float fParam5) //Position: 0x73EA / 29674
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
		fVar0 = Function_137(bParam0, Global_34573);
		if (!Function_33(uParam3, 8))
		{
			if (GET_LAST_ATTACKER(bParam0) == Global_34573)
			{
				*uParam1 = 8;
				Function_160(bParam0);
				return 1;
			}
		}
		if (!Function_33(uParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(bParam0, 1.0f))
			{
				*uParam1 = 2;
				Function_160(bParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(bParam0, 1.0f, 1.0f))
			{
				*uParam1 = 2;
				Function_160(bParam0);
				return 1;
			}
		}
		if (!Function_33(uParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(bParam0) || (((GET_ACTOR_UNDER_RETICLE(Global_34573, 0) != bParam0 && IS_PLAYER_WEAPON_ZOOMED(Global_34573)) && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(Global_34573) != bParam0 && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f))
			{
				if (*uParam2 > 0.0f)
				{
					*uParam1 = 4;
					Function_160(bParam0);
					return 1;
				}
				if (*uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - *uParam2) < 1.3f)
					{
						*uParam1 = 4;
						Function_160(bParam0);
						return 1;
					}
				}
				*uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_33(uParam3, 1))
		{
			if (Global_3403 || Global_3404)
			{
				*uParam1 = 1;
				Function_160(bParam0);
				return 1;
			}
		}
		if (!Function_33(uParam3, 16))
		{
			if (UNK_0x7F454A92(bParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(bParam0)) > 2.0f && fVar0 > 18.0f)
				{
					*uParam1 = 16;
					Function_160(bParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_160(bool bParam0) //Position: 0x7581 / 30081
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(bParam0, 1);
	UNK_0x99AFD2D1(bParam0, 0, 0);
	Function_161(bParam0);
	MEMORY_CONSIDER_AS(Global_34573, bParam0, 2);
	MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
	AI_GOAL_LOOK_CLEAR(bParam0);
	return;
}

void Function_161(bool bParam0) //Position: 0x75B5 / 30133
{
	SAY_SINGLE_LINE_CONTEXT(bParam0, 60, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

int Function_162(var uParam0, int iParam1) //Position: 0x75CC / 30156
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
	Function_166(DECOR_GET_INT(*uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
		}
		else
		{
			Function_163(iVar0, uParam0, &uVar1, iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(*uParam0);
	return 0;
}

void Function_163(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x772D / 30509
{
	struct<8> Var0;
	
	Global_26155[iParam05].f_8 = *uParam1;
	Global_26155[iParam05].f_16 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_164("stayout") };
	Global_26155[iParam05].f_12 = CREATE_VOLUME_IN_LAYOUT(Global_26150, &Var0, 3, *iParam2, 0.0f, 0.0f, 0.0f, 12.0f, 5.0f, 12.0f);
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	if (bParam3)
	{
		Global_26155[iParam05].f_4 = ADD_BLIP_FOR_COORD(iParam2, 403, 0f, 2, 0);
		SET_BLIP_BLINK(StackVal, 1, 1, 20.0f);
	}
}

struct<32> Function_164(bool bParam0) //Position: 0x77C8 / 30664
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_165("0", &cVar8, ""), 4);
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

struct<32> Function_165(char* cParam0, char* cParam1, char* cParam2) //Position: 0x7832 / 30770
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_166(bool bParam0) //Position: 0x7851 / 30801
{
	bool bVar0;
	vector3 vVar1;
	
	bVar0 = false;
	while (bVar0 <= 25)
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
						Function_168(bVar0);
					}
					else if (Global_3386)
					{
						if (Function_167(StackVal, StackVal, Global_34573, vVar1) < 25.0f)
						{
							Function_168(bVar0);
						}
					}
					else if (Function_167(StackVal, StackVal, Global_34573, vVar1) < 55.0f)
					{
						Function_168(bVar0);
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
			Function_168(bVar0);
		}
		bVar0++;
	}
	return 0;
}

float Function_167(bool bParam0, vector3 vParam1) //Position: 0x79B2 / 31154
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_152(bParam0);
		vVar0 = { StackVal, StackVal, Function_152(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

void Function_168(bool bParam0) //Position: 0x7A2C / 31276
{
	if (IS_VOLUME_VALID(Global_26155[bParam05].f_12))
	{
		REMOVE_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[bParam05].f_12, 0);
		REMOVE_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[bParam05].f_12);
	}
	if (IS_BLIP_VALID(StackVal))
	{
		REMOVE_BLIP(StackVal);
	}
	RELEASE_VOLUME(StackVal);
	RELEASE_VOLUME(Global_26155[bParam05].f_12);
	return;
}

bool Function_169(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) //Position: 0x7A8D / 31373
{
	return CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), vParam0, iParam3, iParam4, iParam5, iParam6, iParam7);
}

float Function_170() //Position: 0x7AA9 / 31401
{
	float fVar0;
	var uVar1;
	
	if (Global_3371)
	{
		return 0.0f;
	}
	Function_171(&fVar0, &uVar1);
	if (fVar0 >= 50.0f)
	{
		return (fVar0 - 10.0f);
	}
	return (fVar0 - 20.0f);
}

void Function_171(var uParam0, int iParam1) //Position: 0x7ADA / 31450
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

bool Function_172(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x7B63 / 31587
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
		Function_174("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
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
			Function_173(bVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_173(bVar0);
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
			Function_173(bVar0);
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

void Function_173(bool bParam0) //Position: 0x7DC0 / 32192
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

void Function_174(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x7E06 / 32262
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_91(Global_6269) };
		}
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, &Var0, iParam5);
	}
	else
	{
		iVar4 = "";
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, iVar4, iParam5);
	}
}

bool Function_175(int iParam0) //Position: 0x7E7D / 32381
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_179();
	iVar1 = 0;
	if (!Function_4(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_178(iParam0[iVar03], 8);
		}
		else if (Function_177())
		{
			iVar1 = 1;
			Function_178(iParam0[iVar03], 8);
		}
		Function_178(iParam0[iVar03], 16);
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
				Function_178(iParam0[iVar03], 1);
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
							Function_178(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_178(iParam0[iVar03], 2);
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
							Function_178(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_178(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_178(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_178(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_178(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_178(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_178(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_178(iParam0[iVar03], 2);
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
	Function_176();
	return 1;
}

void Function_176() //Position: 0x81FA / 33274
{
	if (!Function_130(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_177() //Position: 0x823A / 33338
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

void Function_178(var uParam0, int iParam1) //Position: 0x8265 / 33381
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_179() //Position: 0x8276 / 33398
{
	if (!Function_130(128))
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

void Function_180() //Position: 0x82B8 / 33464
{
	vLocal_311[03] = { 1.12f, 1.62f, -0.74f };
	vLocal_321[03] = { 4.5f, -0.84f, 0.0f };
	fLocal_331[0] = 11.89f;
	vLocal_311[13] = { 1.3f, 1.18f, -0.52f };
	vLocal_321[13] = { 4.81f, -1.06f, 0.0f };
	fLocal_331[1] = 2.0f;
	vLocal_311[23] = { 0.86f, 1.62f, -0.68f };
	vLocal_321[23] = { 4.5f, -0.84f, 0.0f };
	fLocal_331[2] = 7.11f;
	return;
}

bool Function_181(int iParam0) //Position: 0x8359 / 33625
{
	if (!iParam0 != 0)
	{
		LOG_ERROR("Asking about a player with an index not = 0. Multiplayer Law Enforcement not yet implemented.");
		return 0;
	}
	return Global_3403;
}

int Function_182(int iParam0) //Position: 0x83CF / 33743
{
	if (!Function_98(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

int Function_183(bool bParam0, bool bParam1, bool bParam2) //Position: 0x83E9 / 33769
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_187(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_184(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_184(bParam0, bParam1, bParam2, 4294967295);
}

int Function_184(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x8447 / 33863
{
	var uVar0;
	
	if (!Function_186(bParam2))
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
	uVar0 = Function_187(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_185(uVar0);
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

int Function_185(int iParam0) //Position: 0x859C / 34204
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

bool Function_186(int iParam0) //Position: 0x85DA / 34266
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_187(int iParam0, int iParam1, int iParam2) //Position: 0x85EF / 34287
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

bool Function_188(var uParam0, var uParam1, int iParam2) //Position: 0x860F / 34319
{
	var uVar0;
	
	uVar0 = Function_183(uParam0, uParam1, iParam2);
	return Function_98(uVar0);
}

void Function_189(int iParam0) //Position: 0x8625 / 34341
{
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(iParam0);
	return;
}

var Function_190(var uParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x8630 / 34352
{
	int iVar0;
	
	uParam2 = uParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_4(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_178(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_178(uParam0[iVar03], 8);
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

var Function_191(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x8700 / 34560
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_192(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_178(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_192(var uParam0, int iParam1, int iParam2) //Position: 0x8738 / 34616
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_4(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_178(uParam0[iVar03], 4);
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

void Function_193(var uParam0, float fParam1) //Position: 0x87FC / 34812
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_68(uParam0, 1);
	Function_49(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

var Function_194() //Position: 0x881D / 34845
{
	var uVar0;
	
	return uVar0;
}

