//Decompiled with MagicRDR v1.0
//Function Count : 262
//Statics Count : 320
//Natives Count : 413
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
	vector3 vLocal_21[38] = {{ 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } };
	var uLocal_136[38] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_175[38] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_214 = 0;
	bool bLocal_215[5] = { false, false, false, false, false };
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	int iLocal_224 = 0;
	bool bLocal_225 = false;
	bool bLocal_226 = false;
	int iLocal_227 = 0;
	bool bLocal_228 = false;
	int iLocal_229 = 0;
	bool bLocal_230[5] = { false, false, false, false, false };
	int iLocal_236 = 0;
	bool bLocal_237 = false;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	bool bLocal_241 = false;
	struct<9> Local_242 = { 0, 0, 0, 0, 0, 0, 0, 5, 0 } ;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	float fLocal_255 = 0.0f;
	bool bLocal_256 = false;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	int iLocal_260 = 0;
	var uLocal_261 = 0;
	int iLocal_262 = 0;
	bool bLocal_263 = false;
	float fLocal_264 = 0.0f;
	var uLocal_265 = 0;
	int iLocal_266 = 0;
	bool bLocal_267 = false;
	int iLocal_268 = 0;
	struct<57> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	var uVar1;
	bool bVar2;
	bool bVar3[5];
	int iVar9[5];
	int iVar15[5];
	bool bVar21;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	bool bVar80;
	int iVar81;
	vector3 vVar85;
	vector3 vVar91;
	int iVar94;
	bool bVar95;
	bool bVar96;
	int iVar97;
	int iVar98;
	int iVar99;
	vector3 vVar101;
	vector3 vVar104;
	int iVar107;
	int iVar108;
	float fVar109;
	int iVar111;
	vector3 vVar112;
	vector3 vVar115;
	vector3 vVar118;
	bool bVar124;
	bool bVar125;
	bool bVar126;
	bool bVar127;
	bool bVar128;
	char* cVar129[32];
	char* cVar137[32];
	struct<453> Var145;
	
	iLocal_14 = 0;
	iLocal_15 = 0;
	iLocal_214 = 1;
	iLocal_224 = 4294967295;
	bLocal_225 = false;
	bLocal_226 = false;
	bLocal_228 = false;
	iLocal_229 = 0;
	bLocal_241 = false;
	fLocal_255 = 40.0f;
	bLocal_256 = 40;
	iLocal_260 = 0;
	iLocal_262 = 0;
	bLocal_263 = false;
	fLocal_264 = 0.0f;
	bLocal_267 = false;
	iLocal_268 = 0;
	iVar0 = 0;
	bVar2 = CREATE_LAYOUT(Function_261());
	bVar21 = 18;
	Function_260(&uLocal_238, 0.0f);
	iVar77 = 0;
	iVar78 = 0;
	bVar80 = false;
	iVar81 = 0;
	iVar94 = 0;
	bVar95 = true;
	bVar96 = false;
	iVar97 = 0;
	iVar98 = 0;
	iVar99 = 0;
	iVar108 = 0;
	vLocal_242 = -5.5f;
	vLocal_242.f_8 = 1.06f;
	vLocal_245.f_8 = 1.58f;
	iVar111 = 0;
	vVar115 = { 1.1f, 0.0f, 0.0f };
	vVar118 = { -1.1f, 0.0f, 0.0f };
	bVar276 = false;
	if (!IS_POPSET_VALID(Global_30750[6]))
	{
		iVar0 = 5;
	}
	else
	{
		Function_258(&bVar21, "bankrobbery_cower", 5, 0);
		Function_258(&bVar21, "custom/bankrobbery_cower", 8, 0);
		Function_258(&bVar21, "nhanging_B", 5, 0);
		Function_258(&bVar21, "custom/hanging_B", 8, 0);
		Function_258(&bVar21, "beat_rob_player", 5, 0);
		Function_258(&bVar21, "custom/beat_rob_player", 8, 0);
		if (Global_29004 == 1)
		{
			iVar9[4] = 294;
			if (Function_257(ScriptParam_0.f_56, 2) == 0)
			{
				iVar9[0] = 499;
				Function_255(&iVar9, 496, 504, 499);
			}
			else
			{
				iVar9[0] = 501;
				Function_255(&iVar9, 496, 504, 501);
			}
		}
		else
		{
			if (Function_257(ScriptParam_0.f_56, 2) == 0)
			{
				iVar9[4] = 29;
			}
			else
			{
				iVar9[4] = 15;
			}
			if (Function_257(61, 2) == 0)
			{
				iVar9[0] = 420;
				Function_255(&iVar9, 467, 476, 470);
			}
			else
			{
				iVar9[0] = 474;
				Function_255(&iVar9, 467, 476, 474);
			}
		}
		iLocal_227 = iVar9[0];
		iVar76 = 0;
		while (iVar76 <= 5)
		{
			iVar15[iVar76] = Function_247(Global_30750[6], 1, 0, 1);
			if (iVar15[iVar76] == 4294967295)
			{
				iVar15[iVar76] = 976;
			}
			else
			{
				Function_246(&bVar21, iVar15[iVar76], 3, 0);
			}
			iVar76++;
		}
		iVar76 = 0;
		while (iVar76 <= 5)
		{
			Function_246(&bVar21, iVar9[iVar76], 3, 0);
			iVar76++;
		}
		Function_245(&iVar9, 5);
		if (Global_3382 == 1)
		{
			iVar0 = 5;
		}
	}
	Function_244();
	iVar277 = 0;
	bVar278 = false;
	while (!IS_EXITFLAG_SET())
	{
		Function_243(StackVal, StackVal, *(&ScriptParam_0 + 8));
		iVar107 = 600;
		if (Function_242(&bVar278, &iVar0, &iVar277, &iVar107, bLocal_228))
		{
			if (bVar278)
			{
				Function_240(&bVar3, 4294967295);
				Function_240(&bLocal_215, 4294967295);
			}
			else
			{
				Function_238(&bVar3, 4294967295);
				Function_238(&bLocal_215, 4294967295);
			}
		}
		switch (iVar0)
		{
			case 0x00000000:
				if (Function_232(&bVar21))
				{
					iVar0 = 1;
					iVar107 = 600;
				}
				break;
			
			case 0x00000001:
				if (Function_197(&ScriptParam_0, &iVar107, &iVar99, &iVar94, 1))
				{
					if (!Function_185(&Var145, &ScriptParam_0 + 52, 73))
					{
						iVar0 = 5;
						iVar107 = 0;
						break;
					}
					if (VDIST(Global_34574, *(&Var145 + 92)) > 50.0f)
					{
						iVar0 = 5;
						iVar107 = 0;
						break;
					}
					if (ABS(FLOOR((StackVal - StackVal))) >= 30)
					{
						iVar0 = 5;
						iVar107 = 0;
						break;
					}
					iVar0 = 2;
					iVar107 = 0;
				}
				else if (iVar94 == 1)
				{
					iVar0 = 5;
					iVar107 = 0;
				}
				break;
			
			case 0x00000002:
				bVar128 = Function_183();
				stradd(&cVar129, I2STR(bLocal_256), 32);
				stradd(&cVar129, " ", 32);
				strcpy(&cVar137, "ammo_", 32);
				stradd(&cVar137, GET_AMMO_ENUM_STRING_FROM_ENUM(bVar128), 32);
				stradd(&cVar129, UI_GET_STRING(&cVar137), 32);
				UI_SET_STRING("Trap_dynamicNumber", &cVar129);
				bLocal_237 = CREATE_VOLUME_IN_LAYOUT(bVar2, Function_261(), 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 20.0f, 7.0f, 20.0f);
				iLocal_236 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Trap_AcceptContext", bLocal_237, 25, 5, 0, false, 0, 0, 4294967295, 0);
				if (IS_SCRIPT_USE_CONTEXT_VALID(iLocal_236))
				{
				}
				else
				{
					iVar0 = 5;
					iVar107 = 0;
					break;
				}
				if (VDIST(Global_34574, *(&ScriptParam_0 + 8)) > Function_182())
				{
					PRINTVECTOR(*(&ScriptParam_0 + 8));
					PRINTNL();
					PRINTVECTOR(Global_34574);
					PRINTNL();
					iVar0 = 5;
					iVar107 = 0;
					break;
				}
				PRINTVECTOR(*(&ScriptParam_0 + 8));
				PRINTNL();
				PRINTVECTOR(Global_34574);
				PRINTNL();
				Function_181(StackVal, StackVal, StackVal, StackVal, Global_34574, *(&ScriptParam_0 + 8));
				vVar85 = { StackVal, StackVal, Function_181(StackVal, StackVal, StackVal, StackVal, Global_34574, *(&ScriptParam_0 + 8)) };
				fVar109 = UNK_0x9C40E671(&vVar85);
				vVar101 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*(&ScriptParam_0 + 8), Global_34574, StackVal) };
				vVar101 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) / Vector(FtoV(Function_180(StackVal, vVar101, Global_34573, *(&ScriptParam_0 + 8))), StackVal, StackVal) };
				vVar104 = { StackVal, StackVal, vVar101 };
				VSCALE(&vVar101, 6.0f);
				VSCALE(&vVar104, 8.0f);
				bVar3[4] = Function_178(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, bVar2, Vector(Function_261(), iVar9[4], Function_261()) + Vector(vVar104, *(&ScriptParam_0 + 8), iVar15[4]), *(&ScriptParam_0 + 20));
				SNAP_OBJECT_TO_GROUND(bVar3[4], 6.0f, false, 1092616192);
				SET_ACTOR_CAN_PLAY_GESTURES(bVar3[4], false);
				Function_177(bVar3[4], 0);
				Function_176(bVar3[4], 0);
				Function_175(bVar3[4]);
				ACTOR_START_FORCE_HOLSTER(bVar3[4], 0, 0);
				vVar101 = { StackVal, StackVal, -Vector(vVar101, StackVal, StackVal) };
				Function_181(StackVal, StackVal, StackVal, StackVal, vVar101, vVar104);
				vVar85 = { StackVal, StackVal, Function_181(StackVal, StackVal, StackVal, StackVal, vVar101, vVar104) };
				fVar109 = UNK_0x9C40E671(&vVar85);
				iVar76 = 0;
				iVar76 = 0;
				while (iVar76 <= 4)
				{
					if (iVar76 < 1)
					{
						vVar112 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar115, *(&Var145 + 92), StackVal) };
						vVar115.x = (vVar115.x - 0.7f);
					}
					else
					{
						vVar112 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar118, *(&Var145 + 92), StackVal) };
						vVar118.x = (vVar118.x - 0.8f);
					}
					bVar3[iVar76] = CREATE_ACTOR_IN_LAYOUT(bVar2, Function_261(), iVar9[iVar76], vVar112, 0.0f, fVar109, 0.0f);
					AI_GLOBAL_SET_PERMANENT_DANGER(bVar3[iVar76], 1);
					SET_ACTOR_CAN_PLAY_GESTURES(bVar3[iVar76], false);
					Function_175(bVar3[iVar76]);
					MEMORY_ATTACK_ON_SIGHT(bVar3[iVar76], 0);
					SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_ACTOR(bVar3[iVar76]), 2.0f, true, 1092616192);
					Function_176(bVar3[iVar76], 0);
					iVar76++;
				}
				iVar76 = 0;
				while (iVar76 <= 5)
				{
					Function_174(bVar3[iVar76]);
					DELETE_ALL_WEAPONS_FROM_ACTOR(bVar3[iVar76]);
					GIVE_WEAPON_TO_ACTOR(bVar3[iVar76], 4, 0, 1, 1);
					iVar279 = 0;
					while (iVar279 <= 5)
					{
						if (iVar76 != iVar279)
						{
							MEMORY_CONSIDER_AS(bVar3[iVar76], bVar3[iVar279], 0);
						}
						iVar279++;
					}
					iVar76++;
				}
				vVar91 = { StackVal, StackVal, *(&Var145 + 116) };
				Function_181(StackVal, StackVal, StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar101, *(&ScriptParam_0 + 8), StackVal), vVar91);
				vVar85 = { StackVal, StackVal, Function_181(StackVal, StackVal, StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar101, *(&ScriptParam_0 + 8), StackVal), vVar91) };
				fVar109 = UNK_0x9C40E671(&vVar85);
				bLocal_215[0] = CREATE_ACTOR_IN_LAYOUT(bVar2, Function_261(), iVar15[0], *(&Var145 + 356), 0.0f, Var145.f_440, 0.0f);
				bLocal_215[1] = CREATE_ACTOR_IN_LAYOUT(bVar2, Function_261(), iVar15[1], *(&Var145 + 368), 0.0f, Var145.f_444, 0.0f);
				bLocal_215[2] = CREATE_ACTOR_IN_LAYOUT(bVar2, Function_261(), iVar15[2], *(&Var145 + 380), 0.0f, Var145.f_448, 0.0f);
				bLocal_215[3] = CREATE_ACTOR_IN_LAYOUT(bVar2, Function_261(), iVar15[3], *(&Var145 + 392), 0.0f, Var145.f_452, 0.0f);
				iVar76 = 0;
				while (iVar76 <= 4)
				{
					TASK_STAND_STILL(bLocal_215[iVar76], -1.0f, 0, 0);
					ACCESSORIZE_HORSE(bLocal_215[iVar76], 3);
					iVar76++;
				}
				bLocal_215[4] = GET_MOUNT(bVar3[4]);
				TASK_CLEAR(bVar3[4]);
				TASK_FACE_ACTOR(bVar3[4], Global_34573, 1, 3212836864);
				TASK_PRIORITY_SET(bVar3[4], 0);
				iVar76 = 0;
				iVar76 = 0;
				while (iVar76 <= 4)
				{
					TASK_CROUCH(bVar3[iVar76], -1.0f);
					TASK_PRIORITY_SET(bVar3[iVar76], 0);
					iVar76++;
				}
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar3[4], 0);
				UNK_0x99AFD2D1(bVar3[4], 1, 1);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar3[1], 0);
				UNK_0x99AFD2D1(bVar3[1], 1, 1);
				Function_172(StackVal, StackVal, &uLocal_221, &uLocal_222, &iLocal_224, 4.0f, *(&ScriptParam_0 + 8));
				Function_171(&iVar81, 1);
				Function_171(&iVar81, 16);
				Function_171(&iVar81, 2);
				bVar276 = true;
				bVar124 = CREATE_VOLUME_IN_LAYOUT(bVar2, Function_261(), 0, *(&Var145 + 92), 0.0f, 0.0f, 0.0f, 30.0f, 30.0f, 30.0f);
				CLEAR_AMBIENT_OBJECTS_SPHERE(*(&Var145 + 92), 30.0f, 15);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar124);
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar124);
				bVar125 = CREATE_VOLUME_IN_LAYOUT(bVar2, Function_261(), 0, *(&ScriptParam_0 + 8), 0.0f, 0.0f, 0.0f, 35.0f, 10.0f, 35.0f);
				CLEAR_AMBIENT_OBJECTS_VOLUME(bVar125, 15);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar125);
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar125);
				ATTACH_OBJECTS(GET_OBJECT_FROM_VOLUME(bVar125), bVar3[4], Function_261(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
				bVar126 = CREATE_GRINGO_IN_LAYOUT(bVar2, Function_261(), "$/content/scripting/gringo/SimpleGringo/Locked_Footlocker", *(&Var145 + 200), 0.0f, Var145.f_280, 0.0f);
				bVar127 = GET_GRINGO_FROM_OBJECT(bVar126);
				Function_167(bVar127, 0.0f, 0.0f, 0.0f, 4294967295, 11, 3.0f);
				iVar0 = 3;
				iVar107 = 0;
				break;
			
			case 0x00000003:
				Function_154(&bVar3, 5, &bLocal_228, ScriptParam_0.f_56, 60, 0x42700000, 1);
				if (!Function_148(ScriptParam_0.f_56, bVar3[4], &iVar78, &iVar108, iVar78, 1, 1, 1))
				{
					iVar0 = 5;
					iVar107 = 0;
					break;
				}
				if (!Function_144(StackVal, StackVal, Global_34573, *(&Var145 + 92), Function_146(1)))
				{
					iVar107 = 0;
					iVar0 = 5;
					break;
				}
				if (!bVar80)
				{
					iVar76 = 0;
					while (iVar76 <= 5)
					{
						if (GET_LAST_ATTACKER(bLocal_215[iVar76]) == Global_34573)
						{
							bVar80 = true;
						}
						else if (GET_RIDER(bLocal_215[iVar76]) == Global_34573)
						{
							bVar80 = true;
						}
						if (bVar80)
						{
							if (iVar77 <= 10)
							{
								HUD_CLEAR_HELP_QUEUE();
								Function_143(bVar3[1], Global_34573, "MINOR_SHOCK", 0, 5, 60, 1, 1);
								iVar77 = 10;
							}
						}
						iVar76++;
					}
				}
				if (Function_139(&bVar3, 5, &iVar79, &uVar1, &fLocal_264, iVar81, bVar80, 0x40200000))
				{
					if (iVar77 <= 10)
					{
						if (iVar77 >= 4)
						{
							Function_143(Global_34573, 0, "HomesteadTrapPlayer_msg01", "HomesteadTrapPlayer_msg01", 5, 60, 1, 1);
							iVar77 = 10;
						}
						else
						{
							iVar76 = 0;
							while (iVar76 <= 5)
							{
								if (iVar76 == iVar79)
								{
									ACTOR_END_FORCE_HOLSTER(bVar3[iVar79]);
									Function_138(bVar3[iVar79], &Global_34573);
								}
								else
								{
									TASK_FLEE_ACTOR(bVar3[iVar79], Global_34573, -1.0f, -1.0f, 0, 0, 0);
								}
								iVar76++;
							}
							HUD_CLEAR_OBJECTIVE_QUEUE();
							iVar111 = 1;
							iVar0 = 5;
							iVar107 = 0;
							break;
						}
					}
					bVar80 = true;
				}
				if (!bVar96)
				{
					iVar76 = 0;
					bVar95 = true;
					iVar76 = 0;
					while (iVar76 <= 5)
					{
						if (IS_ACTOR_VALID(bVar3[iVar76]))
						{
							if (Function_136(bVar3[iVar76], 1))
							{
								bVar95 = false;
							}
							if (Global_34573 == GET_LAST_ATTACKER(bVar3[iVar76]))
							{
								if (iVar77 <= 10)
								{
									iVar77 = 10;
								}
							}
						}
						iVar76++;
					}
					if (bVar95)
					{
						Function_84(GET_ACTOR_ENUM_FACTION(iLocal_227));
						Function_79(5, 1, 0);
						Function_78(&bVar3, 5, &bLocal_225, &bLocal_226, 0);
						if (bLocal_226)
						{
							Function_54(50, 1, 0);
						}
						else if (bLocal_225)
						{
							Function_54(100, 1, 0);
						}
						bVar96 = true;
						iVar0 = 5;
						iVar107 = 0;
						break;
					}
				}
				if (IS_ACTOR_VALID(bVar3[1]))
				{
					if (Function_53(bVar3[1], Global_34573, 30.0f) && iVar77 > 5)
					{
						if (Function_51(&bVar3, 4, 0x42960000) && Function_50(Global_34573, bVar3[4]) < Function_50(Global_34573, bVar3[1]))
						{
							Function_143(bVar3[4], Global_34573, "HomesteadTrap_msg06", "HomesteadTrap_msg06", 5, 60, 1, 1);
							AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar3[4], 1);
							UNK_0x99AFD2D1(bVar3[4], 0, 0);
							iVar77 = 10;
						}
					}
				}
				if (Function_17(&iVar77, &bVar3, &bLocal_215, &Var145, &bVar2, bVar128))
				{
					iVar111 = 1;
					iVar0 = 5;
					iVar107 = 0;
				}
				break;
			
			case 0x00000005:
				iVar0 = 6;
				iVar107 = 0;
				break;
			
			case 0x00000006:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				iVar107 = 0;
				break;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(iVar107);
		}
	}
	if (bLocal_267)
	{
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	}
	Function_238(&bVar3, 4294967295);
	Function_238(&bLocal_215, 4294967295);
	Function_16(&iVar9, 5);
	Function_15(&uLocal_221, &uLocal_222, &iLocal_224);
	if (ScriptParam_0.f_32)
	{
		Global_3399 = 0;
	}
	if (!bLocal_228)
	{
		Function_9(ScriptParam_0.f_56, 0.0f, 0, 1, 0);
	}
	if (!bLocal_228)
	{
		Function_9(ScriptParam_0.f_56, 0.0f, 0, 1, 0);
	}
	iVar76 = 0;
	while (iVar76 <= 5)
	{
		if (IS_BLIP_VALID(bLocal_230[iVar76]))
		{
			REMOVE_BLIP(bLocal_230[iVar76]);
		}
		Function_7(bVar3[iVar76]);
		iVar76++;
	}
	Function_7(bVar3[4]);
	if (!bLocal_228)
	{
		Function_5(&bVar3, 4294967295);
		Function_5(&bLocal_215, 4294967295);
		if (IS_OBJECT_VALID(bVar2))
		{
			UNK_0xA936E73B(bVar2, 1);
			MARK_OBJECT_FOR_AGGRESSIVE_CLEANUP(bVar2, 1);
		}
	}
	if (Function_136(bVar3[4], 0))
	{
		AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar3[4], 1);
		UNK_0x99AFD2D1(bVar3[4], 0, 0);
	}
	if (Function_136(bVar3[1], 0))
	{
		AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar3[1], 1);
		UNK_0x99AFD2D1(bVar3[1], 0, 0);
	}
	if (iVar111 == 0)
	{
		Function_5(&bVar3, 4294967295);
	}
	if (IS_VOLUME_VALID(bLocal_237))
	{
		DESTROY_VOLUME(bLocal_237);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(iLocal_236))
	{
		RELEASE_SCRIPT_USE_CONTEXT(iLocal_236);
	}
	Function_1(&bVar21);
	if (bVar276)
	{
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar124);
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar124);
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar125);
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar125);
	}
	RELEASE_LAYOUT_REF(bVar2);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0xD5A / 3418
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

void Function_2(var uParam0, int iParam1) //Position: 0xD80 / 3456
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

void Function_3(var uParam0, int iParam1) //Position: 0xEAE / 3758
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_4(var uParam0, int iParam1) //Position: 0xEC8 / 3784
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(bool bParam0, int iParam1) //Position: 0xEE5 / 3813
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *bParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_6(bParam0[iVar0]);
		iVar0++;
	}
	return;
}

void Function_6(int iParam0) //Position: 0xF12 / 3858
{
	if (IS_ACTOR_VALID(*iParam0))
	{
		RESET_ANIM_SET_FOR_ACTOR(*iParam0, 0);
		TASK_FLEE_ACTOR(*iParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
		TASK_PRIORITY_SET(*iParam0, 0);
	}
	return;
}

int Function_7(bool bParam0) //Position: 0xF3D / 3901
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_8(bParam0);
		return 1;
	}
	return 0;
}

void Function_8(bool bParam0) //Position: 0xF53 / 3923
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

bool Function_9(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xF7F / 3967
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
		Function_11("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
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
			Function_10(bVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_10(bVar0);
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
			Function_10(bVar0);
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

void Function_10(bool bParam0) //Position: 0x11DC / 4572
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

void Function_11(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1222 / 4642
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_12(Global_6269) };
		}
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, &Var0, iParam5);
	}
	else
	{
		iVar4 = "";
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, iVar4, iParam5);
	}
}

struct<16> Function_12(int iParam0) //Position: 0x1299 / 4761
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

bool Function_13() //Position: 0x12D8 / 4824
{
	if (Function_14(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_14(bool bParam0, int iParam1) //Position: 0x12F3 / 4851
{
	return (bParam0 && iParam1) == 0;
}

void Function_15(var uParam0, var uParam1, int iParam2) //Position: 0x1300 / 4864
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

void Function_16(var uParam0, bool bParam1) //Position: 0x132D / 4909
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= bParam1)
	{
		CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION((*uParam0)[iVar0]);
		iVar0++;
	}
	return;
}

bool Function_17(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, bool bParam5) //Position: 0x134F / 4943
{
	int iVar0;
	bool bVar1;
	
	bVar1 = true;
	switch (*uParam0)
	{
		case 0x00000000:
			if (VDIST(Global_34574, *(iParam3 + 92)) < 225.0f)
			{
				Function_48((*uParam1)[4], 0.0f, 0.0f, 0.0f, 0, 0, 2, 1);
				return 1;
			}
			if (Function_47(uParam1[4], &Global_34573, &iLocal_262, *uParam4, 55.0f, &bLocal_263, uLocal_261, &uLocal_257, &iLocal_260, 25.0f, 1, 4, -9.0f, 25.0f, "HomesteadTrap_msg01", 0))
			{
				if (bLocal_263)
				{
					Function_44();
					ACTOR_START_FORCE_HOLSTER((*uParam1)[4], 0, 0);
					AI_GOAL_LOOK_AT_ACTOR_NEW((*uParam1)[4], Global_34573, 10.0f, 1);
					*uParam0 = 1;
					Function_260(&uLocal_257, 0.0f);
				}
			}
			else
			{
				TASK_WANDER((*uParam1)[4], -1.0f);
				return 1;
			}
			break;
		
		case 0x00000001:
			if (IS_ACTOR_VALID((*uParam1)[4]))
			{
				if (Function_50((*uParam1)[4], Global_34573) > 12.0f && !iLocal_229)
				{
					iLocal_229 = 1;
					TASK_STAND_STILL((*uParam1)[4], -1.0f, 0, 0);
					AI_GOAL_LOOK_AT_ACTOR_NEW((*uParam1)[4], Global_34573, 10.0f, 1);
				}
			}
			if (Function_40(&uLocal_257, 3.0f) && !IS_AMBIENT_SPEECH_PLAYING((*uParam1)[4]))
			{
				SET_ANIM_SET_FOR_ACTOR((*uParam1)[4], "nhanging_B", 0);
				SET_ACTION_NODE_FOR_ACTOR((*uParam1)[4], "nhanging_B");
				Function_143((*uParam1)[4], Global_34573, "HomesteadTrap_msg02", "HomesteadTrap_msg02", 5, 60, 1, 1);
				TASK_STAND_STILL((*uParam1)[4], -1.0f, 0, 0);
				Function_260(&uLocal_257, 0.0f);
				*uParam0 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_40(&uLocal_257, 3.0f) && !IS_AMBIENT_SPEECH_PLAYING((*uParam1)[4]))
			{
				ACTOR_END_FORCE_HOLSTER((*uParam1)[4]);
				RESET_ANIM_SET_FOR_ACTOR((*uParam1)[4], 1);
				Function_39("Trap_objective", 0x40f00000, 1, 2, 0, 0, 0, 0);
				ADD_BLIP_FOR_ACTOR((*uParam1)[4], 325, 0.0f, 3, 0);
				uLocal_223 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_COORD(false, iParam3 + 92, 18.0f, 4);
				TASK_FACE_ACTOR(0, Global_34573, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM((*uParam1)[4], uLocal_223);
				TASK_SEQUENCE_RELEASE(uLocal_223, 1);
				*uParam0 = 4;
			}
			break;
		
		case 0x00000004:
			if (StackVal || (StackVal && Function_180((CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), (*uParam1)[4], 1.0f, 18.0f, 1, 0, 0) && GET_TASK_STATUS((*uParam1)[4], 22) != 1), Function_40(&uLocal_238, 12.0f), Global_34573, *(iParam3 + 92)) > 20.0f))
			{
				Function_24(61);
				RESET_ANIM_SET_FOR_ACTOR((*uParam1)[4], 1);
				TASK_CLEAR((*uParam1)[4]);
				TASK_POINT_GUN_AT_OBJECT((*uParam1)[4], GET_OBJECT_FROM_ACTOR(Global_34573), -1.0f, 1);
				TASK_PRIORITY_SET((*uParam1)[4], 0);
				Function_23((*uParam1)[4], Global_34573, 4, 1);
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= 4)
				{
					MEMORY_SET_WEAPON_DRAW_PREFERENCE((*uParam1)[iVar0], 0);
					ACTOR_DRAW_ANY_WEAPON((*uParam1)[iVar0], 1);
					AI_GOAL_AIM_AT_OBJECT((*uParam1)[iVar0], Global_34573, 1);
					AI_GOAL_LOOK_AT_ACTOR((*uParam1)[iVar0], Global_34573, 0, 1065353216, 3212836864, 3212836864, 0);
					TASK_SURROUND_ACTOR((*uParam1)[iVar0], Global_34573, 1.0f, 13.5f, 1, -1.0f);
					TASK_PRIORITY_SET((*uParam1)[iVar0], 0);
					iVar0++;
				}
				uLocal_223 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_ACTOR(0, Global_34573, 11.0f, 3);
				TASK_FACE_ACTOR(0, Global_34573, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM((*uParam1)[4], uLocal_223);
				TASK_SEQUENCE_RELEASE(uLocal_223, 1);
				AI_GOAL_AIM_CLEAR((*uParam1)[4]);
				Function_260(&uLocal_238, 0.0f);
				iLocal_229 = 0;
				*uParam0 = 5;
			}
			break;
		
		case 0x00000005:
			if (Function_50((*uParam1)[4], Global_34573) > 12.0f && !iLocal_229)
			{
				iLocal_229 = 1;
				TASK_STAND_STILL((*uParam1)[4], 5.0f, 0, 0);
				AI_GOAL_LOOK_AT_ACTOR_NEW((*uParam1)[4], Global_34573, 10.0f, 1);
			}
			iVar0 = 0;
			if (Function_40(&uLocal_238, 6.0f) || Function_51(uParam1, 4, 35.0f))
			{
				Function_143((*uParam1)[4], Global_34573, "HomesteadTrap_msg03", "HomesteadTrap_msg03", 5, 60, 1, 1);
				AUDIO_MUSIC_SET_MOOD("SUSPENSE_LIGHT", 0, 4294967295, 4294967295);
				Function_7((*uParam1)[4]);
				if (Function_180(StackVal, StackVal, Global_34573, *(iParam3 + 92)) > 32.0f)
				{
					Function_260(&uLocal_238, 0.0f);
					*uParam0 = 6;
					bLocal_241 = true;
				}
				else
				{
					*uParam0 = 10;
				}
				if (bLocal_241)
				{
					uLocal_223 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_ACTOR(0, Global_34573, 11.0f, 3);
					TASK_FACE_ACTOR(0, Global_34573, 0, 3212836864);
					TASK_POINT_GUN_AT_OBJECT(false, Global_34573, -1.0f, 1);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM((*uParam1)[4], uLocal_223);
					TASK_SEQUENCE_RELEASE(uLocal_223, 1);
				}
			}
			break;
		
		case 0x00000006:
			if (((GET_NTH_TASK_STATUS((*uParam1)[4], 1) != 0 && Function_51(uParam1, 4, 30.0f)) || Function_40(&uLocal_238, 6.0f)) && iLocal_214)
			{
				ATTACH_OBJECTS(GET_OBJECT_FROM_VOLUME(bLocal_237), (*uParam1)[4], Function_261(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
				Function_22("eventRoadsideAmbush_help01", 0x41200000, 1, 0, 2, 1, 0);
				Function_260(&uLocal_238, 0.0f);
				iLocal_214 = 0;
			}
			if (IS_SCRIPT_USE_CONTEXT_VALID(iLocal_236))
			{
				if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(iLocal_236))
				{
					CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH((*uParam1)[4]);
					RESET_ANIM_SET_FOR_ACTOR((*uParam1)[4], 1);
					HUD_CLEAR_HELP();
					AI_SPEECH_SET_ALLOW_FOR_ACTOR((*uParam1)[4], 1);
					UNK_0x99AFD2D1((*uParam1)[4], 0, 0);
					RELEASE_SCRIPT_USE_CONTEXT(iLocal_236);
					DESTROY_VOLUME(bLocal_237);
					*uParam0 = 7;
					break;
				}
			}
			if (Function_180(StackVal, StackVal, Global_34573, *(iParam3 + 92)) < 42.0f || Function_40(&uLocal_238, 15.0f))
			{
				Function_143((*uParam1)[4], Global_34573, "HomesteadTrap_msg05", "HomesteadTrap_msg05", 5, 60, 1, 1);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR((*uParam1)[4], 1);
				UNK_0x99AFD2D1((*uParam1)[4], 0, 0);
				*uParam0 = 10;
			}
			break;
		
		case 0x0000000A:
			if (bLocal_267)
			{
				AUDIO_MUSIC_SET_MOOD("LOW_FIGHT_MEDIUM", 0, 4294967295, 4294967295);
			}
			else
			{
				Function_44();
				AUDIO_MUSIC_SET_MOOD("LOW_FIGHT_MEDIUM", 0, 4294967295, 4294967295);
			}
			Function_21(0);
			if (IS_SCRIPT_USE_CONTEXT_VALID(iLocal_236))
			{
				RELEASE_SCRIPT_USE_CONTEXT(iLocal_236);
			}
			if (IS_VOLUME_VALID(bLocal_237))
			{
				DESTROY_VOLUME(bLocal_237);
			}
			HUD_CLEAR_HELP();
			Function_7((*uParam1)[4]);
			iVar0 = 0;
			while (iVar0 <= 5)
			{
				if (Function_136((*uParam1)[iVar0], 0))
				{
					if (!IS_BLIP_VALID(bLocal_230[iVar0]))
					{
						bLocal_230[iVar0] = ADD_BLIP_FOR_ACTOR((*uParam1)[iVar0], 322, 0, 2, 0);
					}
					Function_23((*uParam1)[iVar0], Global_34573, 4, 1);
					AI_GOAL_AIM_CLEAR((*uParam1)[iVar0]);
					ACTOR_END_FORCE_HOLSTER((*uParam1)[iVar0]);
					Function_138((*uParam1)[iVar0], &Global_34573);
					TASK_PRIORITY_SET((*uParam1)[iVar0], 0);
				}
				iVar0++;
			}
			*uParam0 = 12;
			break;
		
		case 0x0000000C:
			Function_21(0);
			break;
		
		case 0x00000007:
			if (!IS_AMBIENT_SPEECH_PLAYING(Global_34573))
			{
				if (_GET_AMMO_AMOUNT(Global_34573, bParam5, 1) <= fLocal_255)
				{
					Function_143(Global_34573, 0, "HomesteadTrapPlayer_msg02", "HomesteadTrapPlayer_msg02", 5, 60, 1, 1);
					Function_20(bParam5, fLocal_255, 1);
					DECOR_SET_INT((*uParam1)[4], "iSSAmmoType", bParam5);
					DECOR_SET_FLOAT((*uParam1)[4], "fSSAmmoAmt", (fLocal_255 + 12.0f));
					Function_260(&uLocal_238, 0.0f);
					AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
					*uParam0 = 8;
					iVar0 = 0;
					while (iVar0 <= 5)
					{
						COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*uParam1)[iVar0], 28, 0.0f);
						COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*uParam1)[iVar0], 31, -1.0f);
						COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*uParam1)[iVar0], 37, 2.0f);
						COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*uParam1)[iVar0], 38, 0.5f);
						COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION((*uParam1)[iVar0], 0);
						MEMORY_CLEAR_WEAPON_DRAW_PREFERENCE((*uParam1)[iVar0]);
						MEMORY_CONSIDER_AS((*uParam1)[iVar0], Global_34573, 2);
						iVar0++;
					}
				}
				else
				{
					Function_18("Trap_notEnoughAmmo", 1, 1);
					AI_SPEECH_SET_ALLOW_FOR_ACTOR((*uParam1)[4], 1);
					UNK_0x99AFD2D1((*uParam1)[4], 0, 0);
					*uParam0 = 10;
				}
			}
			break;
		
		case 0x00000008:
			if (!IS_AMBIENT_SPEECH_PLAYING(Global_34573))
			{
				iVar0 = 0;
				while (iVar0 <= 4)
				{
					bLocal_248 = RAND_FLOAT_RANGE(0.5f, 4.0f);
					uLocal_223 = TASK_SEQUENCE_OPEN();
					AI_GOAL_AIM_CLEAR((*uParam1)[iVar0]);
					TASK_FACE_ACTOR(0, Global_34573, 1, bLocal_248);
					TASK_MOUNT(0, (*uParam2)[iVar0], 1, 1, 2, 2147483647);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM((*uParam1)[iVar0], uLocal_223);
					TASK_SEQUENCE_RELEASE(uLocal_223, 1);
					TASK_PRIORITY_SET((*uParam1)[iVar0], 0);
					iVar0++;
				}
				Function_143((*uParam1)[4], Global_34573, "HomesteadTrap_msg04", "HomesteadTrap_msg04", 5, 60, 1, 1);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE((*uParam1)[4], 1);
				ACTOR_HOLSTER_WEAPON((*uParam1)[4], 1);
				uLocal_223 = TASK_SEQUENCE_OPEN();
				TASK_FACE_ACTOR(0, Global_34573, 1, -1.0f);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM((*uParam1)[4], uLocal_223);
				TASK_SEQUENCE_RELEASE(uLocal_223, 1);
				TASK_PRIORITY_SET((*uParam1)[4], 0);
				*uParam0 = 9;
			}
			break;
		
		case 0x00000009:
			bVar1 = true;
			iVar0 = 0;
			while (iVar0 <= 5)
			{
				if (!IS_ACTOR_RIDING_AND_IN_SADDLE((*uParam1)[iVar0]))
				{
					bVar1 = false;
				}
				else if (!iLocal_249[iVar0])
				{
					MEMORY_SET_WEAPON_DRAW_PREFERENCE((*uParam1)[iVar0], 1);
					Function_48((*uParam1)[iVar0], 0.0f, 0.0f, 0.0f, 0, 0, 2, 1);
					iLocal_249[iVar0] = 1;
				}
				iVar0++;
			}
			if (bVar1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_18(int iParam0, bool bParam1, bool bParam2) //Position: 0x1CD8 / 7384
{
	if (bParam1)
	{
		HUD_CLEAR_HELP_QUEUE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
		Function_39(iParam0, 0x40f00000, 1, 2, 0, 0, 0, 0);
		if (bParam2)
		{
			Function_19();
		}
	}
	return;
}

void Function_19() //Position: 0x1D01 / 7425
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

void Function_20(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1D8A / 7562
{
	bool bVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	bool bVar5;
	bool bVar6;
	
	bVar0 = GET_WEAPONENUM_FOR_AMMOENUM(Global_34573, bParam0);
	fVar1 = _GET_AMMO_AMOUNT(Global_34573, bParam0, 0);
	fVar2 = ACTOR_GET_WEAPON_AMMO(Global_34573, bVar0);
	if (fVar1 <= bParam1)
	{
		fVar3 = bParam1;
		fVar4 = 0.0f;
	}
	else
	{
		fVar3 = fVar1;
		fVar4 = (bParam1 - fVar3);
	}
	if (fVar4 == 0.0f)
	{
		ACTOR_SET_WEAPON_AMMO(Global_34573, bVar0, (fVar2 - fVar4));
	}
	if (fVar3 == 0.0f)
	{
		_SET_ACTOR_AMMO_OF_TYPE(Global_34573, bParam0, (fVar1 - fVar3), 0);
	}
	if (bParam2)
	{
		bVar5 = FLOOR(bParam1);
		bVar5 = (bVar5 * 4294967295);
		if (bParam0 == 10)
		{
			bVar6 = "ammo_shotgun";
		}
		else if (bParam0 == 8)
		{
			bVar6 = "ammo_repeater";
		}
		else if (bParam0 == 7)
		{
			bVar6 = "ammo_revolver";
		}
		else if (bParam0 == 11)
		{
			bVar6 = "ammo_sniperrifle";
		}
		else if (bParam0 == 6)
		{
			bVar6 = "ammo_pistol";
		}
		else if (bParam0 == 9)
		{
			bVar6 = "ammo_rifle";
		}
		SET_STAT_MESSAGE(STRING_TO_HASH(bVar6), INT_TO_STRING(bVar5), 5.0f, Function_261(), 2, 4294967295, 0, 1, 0, 0, 0, 0, 0);
	}
	return;
}

void Function_21(bool bParam0) //Position: 0x1EC1 / 7873
{
	switch (iLocal_268)
	{
		case 0x00000000:
			if (!IS_AMBIENT_SPEECH_PLAYING(Global_34573))
			{
				if (!IS_AMBIENT_SPEECH_PLAYING(bParam0))
				{
					iLocal_268 = 1;
				}
			}
			break;
		
		case 0x00000001:
			break;
	}
	return;
}

void Function_22(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x1EF8 / 7928
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_12(Global_6269) };
		}
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, uVar4, iParam6);
	}
}

int Function_23(bool bParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x1F73 / 8051
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

void Function_24(int iParam0) //Position: 0x1FC6 / 8134
{
	Global_16876[iParam06].f_16++;
	if (Global_16876[iParam06].f_16 == 1)
	{
		Function_25(409, 1, 0, 0);
	}
	return;
}

int Function_25(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x1FF7 / 8183
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
	Function_38(iParam0, TO_FLOAT(bParam1), 1);
	Function_37(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_26(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_26(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x2217 / 8727
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_36(390))), 32);
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
					bVar19 = (Function_35(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_35(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_33(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_30(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_28(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_27(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_261(), &Var9);
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

var Function_27(int iParam0) //Position: 0x2844 / 10308
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_28(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2855 / 10325
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_29("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_29("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_29("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_29(char* cParam0, bool bParam1) //Position: 0x294A / 10570
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_30(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2963 / 10595
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_32(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_31(Function_32(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_31(int iParam0, int iParam1) //Position: 0x29C8 / 10696
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_32(int iParam0, int iParam1) //Position: 0x29DA / 10714
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_33(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x29EC / 10732
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
	if (((Function_34(iParam0) != 19 || Function_34(iParam0) != 17) || Function_34(iParam0) != 10) || Function_34(iParam0) != 9)
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

int Function_34(int iParam0) //Position: 0x2B1C / 11036
{
	return Global_35278[iParam020].f_48;
}

float Function_35(int iParam0) //Position: 0x2B2B / 11051
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_36(int iParam0) //Position: 0x2B64 / 11108
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_37(int iParam0) //Position: 0x2BA1 / 11169
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

int Function_38(int iParam0, bool bParam1, bool bParam2) //Position: 0x2D3B / 11579
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

void Function_39(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x2F7F / 12159
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
			Var0 = { StackVal, StackVal, StackVal, Function_12(Global_6269) };
		}
		PRINT_OBJECTIVE_B(iParam0, iParam1, iParam7, iParam3, iParam2, &Var0, 0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_OBJECTIVE_B(iParam0, iParam1, iParam7, iParam3, iParam2, iVar4, iParam5, iParam6);
	}
}

int Function_40(var uParam0, float fParam1) //Position: 0x3004 / 12292
{
	if (Function_43(uParam0))
	{
		if (Function_41(uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_41(bool bParam0) //Position: 0x3020 / 12320
{
	if (Function_43(bParam0))
	{
		if (Function_42(bParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_42(int iParam0) //Position: 0x30E8 / 12520
{
	return Function_14(*iParam0, 2);
}

bool Function_43(bool bParam0) //Position: 0x30F5 / 12533
{
	return Function_14(*bParam0, 1);
}

void Function_44() //Position: 0x3102 / 12546
{
	int iVar0;
	
	bLocal_267 = true;
	if (Global_29004 == 0)
	{
		iVar0 = Function_46(4);
		if (iVar0 == 0)
		{
			iLocal_266 = "TC_FTR_SONG_01";
		}
		else if (iVar0 == 1)
		{
			iLocal_266 = "TC_FTR_SONG_02";
		}
		else if (iVar0 == 2)
		{
			iLocal_266 = "TC_FTR_SONG_03";
		}
		else
		{
			iLocal_266 = "TC_FTR_SONG_04";
		}
	}
	else if (Global_29004 == 2)
	{
		iVar0 = Function_46(2);
		if (iVar0 == 0)
		{
			iLocal_266 = "TC_NRT_SONG_01";
		}
		else if (iVar0 == 1)
		{
			iLocal_266 = "TC_NRT_SONG_02";
		}
	}
	else if (Global_29004 == 1)
	{
		if (Function_45())
		{
			iLocal_266 = "TC_MEX_SONG_01";
		}
		else
		{
			iLocal_266 = "TC_MEX_SONG_02";
		}
	}
	AUDIO_MUSIC_FORCE_TRACK(iLocal_266, "SUSPENSE_DARK", -3.0f, 500, 4294967295, 3212836864, 0);
	return;
}

bool Function_45() //Position: 0x322B / 12843
{
	return (RAND_INT_RANGE(0, 1999) / 1000) != 0;
}

int Function_46(bool bParam0) //Position: 0x323E / 12862
{
	bParam0 = (bParam0 * 1000 - 1);
	return (RAND_INT_RANGE(0, bParam0) / 1000);
}

bool Function_47(var uParam0, var uParam1, var uParam2, bool bParam3, float fParam4, var uParam5, bool bParam6, var uParam7, var uParam8, float fParam9, bool bParam10, int iParam11, float fParam12, float fParam13, bool bParam14, int iParam15) //Position: 0x3257 / 12887
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
		else if (Function_50(*uParam0, *uParam1) > fParam13)
		{
			*uParam8 = 1;
			Function_143(*uParam0, Global_34573, bParam14, bParam14, 5, 60, 1, iParam15);
			Function_260(uParam7, 0.0f);
		}
	}
	switch (*uParam2)
	{
		case 0x00000000:
			SET_ACTOR_UPDATE_PRIORITY(*uParam0, false);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(*uParam0, 0);
			fLocal_20 = Function_50(*uParam0, Global_34573);
			AI_GOAL_LOOK_AT_ACTOR_NEW(*uParam0, *uParam1, -1.0f, 1);
			bParam6 = CREATE_POINT_IN_LAYOUT(bParam3, Function_261(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
			ATTACH_OBJECTS(bParam6, *uParam1, Function_261(), 0.0f, 0.5f, fParam12, 0.0f, 0.0f, 0.0f, 4294967295);
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
			if ((Function_50(*uParam0, *uParam1) - fLocal_20) < fParam4)
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
			if (!Function_136(*uParam0, 0))
			{
				return 0;
			}
			break;
	}
	return 1;
}

void Function_48(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x33E5 / 13285
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
	if (!Function_49(StackVal, StackVal, vParam1))
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

bool Function_49(vector3 vParam0) //Position: 0x34ED / 13549
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

float Function_50(bool bParam0, bool bParam1) //Position: 0x3505 / 13573
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

int Function_51(var uParam0, int iParam1, bool bParam2) //Position: 0x35F6 / 13814
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		if (Function_136((*uParam0)[iVar0], 0))
		{
			if (Function_52((*uParam0)[iVar0], 1.0f, bParam2, 1, 1, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_52(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x363C / 13884
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

int Function_53(bool bParam0, bool bParam1, int iParam2) //Position: 0x3656 / 13910
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

void Function_54(int iParam0, bool bParam1, bool bParam2) //Position: 0x3767 / 14183
{
	int iVar0;
	bool bVar1;
	
	if (Function_77(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_76())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_75(1);
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
			Function_74(1, bVar1);
			if (!bParam2)
			{
				if (!Function_73(Global_76848, 1))
				{
					Function_67(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_65(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_73(Global_76848, 2))
				{
					Function_67(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_25(1, bVar1, 0, 0);
	}
	else
	{
		Function_64(1, (4294967295 * bVar1), 0);
	}
	if (Function_75(1) <= 4294962296)
	{
		Function_63(1, 4294962296, 0);
	}
	else if (Function_75(1) >= 5000)
	{
		Function_63(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_35(1));
	iVar0 = Function_75(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_56(2, Function_62(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_56(2, Function_62(Global_12976.f_152), 0);
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
				Function_56(2, Function_62(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_56(2, Function_62(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_56(2, Function_62(Global_12976.f_152), 1);
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
				Function_56(2, Function_62(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_56(2, Function_62(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_56(2, Function_62(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_56(2, Function_62(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_56(2, Function_62(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_56(2, Function_62(Global_12976.f_152), 1);
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
				Function_56(2, Function_62(Global_12976.f_152), 0);
			}
			break;
	}
	Function_55(Global_12976.f_152, Global_12976.f_156);
	return;
}

void Function_55(int iParam0, int iParam1) //Position: 0x3A88 / 14984
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

int Function_56(int iParam0, char* cParam1, bool bParam2) //Position: 0x3CE6 / 15590
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
	Function_60(iParam0, cParam1, 0, 1);
	iVar1 = Function_57();
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

int Function_57() //Position: 0x3E6B / 15979
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
	Function_58();
	return 0;
}

void Function_58() //Position: 0x3F0A / 16138
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
		Function_59(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_59(int iParam0) //Position: 0x3FB9 / 16313
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

int Function_60(int iParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0x4019 / 16409
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
		Function_61(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, uParam3);
	}
	return 1;
}

void Function_61(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x436B / 17259
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

var Function_62(int iParam0) //Position: 0x43EE / 17390
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

int Function_63(int iParam0, bool bParam1, bool bParam2) //Position: 0x4491 / 17553
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
		Function_38(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_37(iParam0);
	if (bParam2)
	{
		Function_26(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_64(int iParam0, bool bParam1, int iParam2) //Position: 0x472C / 18220
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
	Function_37(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_26(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_65(int iParam0, bool bParam1) //Position: 0x4927 / 18727
{
	bool bVar0;
	int iVar1;
	
	Function_64(iParam0, bParam1, 0);
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
	iVar1 = Function_66(iParam0, 4294967295);
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
	iVar1 = Function_57();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

var Function_66(int iParam0, int iParam1) //Position: 0x4AC3 / 19139
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

void Function_67(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x4B04 / 19204
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_69(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_68(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_68(char* cParam0, int iParam1) //Position: 0x4B70 / 19312
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

bool Function_69(bool bParam0, var uParam1, int iParam2) //Position: 0x4BA7 / 19367
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
		if (Function_71(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_70(uVar0))
		{
			case 0x00000002:
				if (!Function_73(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_70(char* cParam0) //Position: 0x4C1F / 19487
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

int Function_71(int iParam0) //Position: 0x4CC0 / 19648
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_72(&iVar1, 2147483648);
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

void Function_72(int iParam0, int iParam1) //Position: 0x4CFD / 19709
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

bool Function_73(var uParam0, int iParam1) //Position: 0x4D10 / 19728
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_74(int iParam0, bool bParam1) //Position: 0x4D23 / 19747
{
	bool bVar0;
	int iVar1;
	
	Function_25(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_66(iParam0, 4294967295);
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
	iVar1 = Function_57();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

int Function_75(int iParam0) //Position: 0x4EC0 / 20160
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

bool Function_76() //Position: 0x4F01 / 20225
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

var Function_77(int iParam0) //Position: 0x4F2C / 20268
{
	return (*&Global_12976 + 104)[iParam0];
}

void Function_78(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x4F3B / 20283
{
	int iVar0;
	
	*uParam2 = 1;
	*uParam3 = 0;
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		if (Function_136((*uParam0)[iVar0], bParam4))
		{
			*uParam3 = 1;
		}
		else
		{
			*uParam2 = 0;
		}
		iVar0++;
	}
}

void Function_79(int iParam0, bool bParam1, bool bParam2) //Position: 0x4F77 / 20343
{
	int iVar0;
	bool bVar1;
	
	if (Function_77(0) && (!Global_3380 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_76())
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
	iVar0 = Function_75(3);
	Function_81();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_74(3, bVar1);
		if (!bParam2)
		{
			if (!Function_73(Global_76848, 4))
			{
				Function_67(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_25(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_35(3));
	iVar0 = Function_75(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_56(4, Function_80(Global_12976.f_156), 1);
				Function_55(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_56(4, Function_80(Global_12976.f_156), 1);
				Function_55(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_56(4, Function_80(Global_12976.f_156), 1);
				Function_55(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_56(4, Function_80(Global_12976.f_156), 1);
				Function_55(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_56(4, Function_80(Global_12976.f_156), 1);
				Function_55(Global_12976.f_152, Global_12976.f_156);
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

var Function_80(int iParam0) //Position: 0x5146 / 20806
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

void Function_81() //Position: 0x51D5 / 20949
{
	Function_83(3, 0.0f);
	Function_82(3, 10000.0f);
	return;
}

int Function_82(int iParam0, int iParam1) //Position: 0x51EB / 20971
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_83(int iParam0, int iParam1) //Position: 0x522B / 21035
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

void Function_84(int iParam0) //Position: 0x526B / 21099
{
	if (!IS_FACTION_VALID(iParam0))
	{
		return;
	}
	if (!Function_135(3))
	{
		return;
	}
	if (Function_134())
	{
		return;
	}
	if (Function_13())
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000019:
			if (IS_PS3() || Function_133())
			{
				Function_85(4, 16, 0, 0, 1);
			}
			break;
		
		case 0x0000000E:
			Function_85(5, 16, 0, 0, 1);
			break;
		
		case 0x0000000C:
			Function_85(7, 16, 0, 0, 1);
			break;
	}
	return;
}

void Function_85(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x52D9 / 21209
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_132(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_135(3) || iParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_131(bParam0, 2))
	{
		Function_25(456, 1, 0, 0);
		Function_130(bParam0, 2);
		if (!bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_22(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_129(bParam0, iParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || iParam1);
		Function_130(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_128(0, 0, 1, 1))
			{
				Function_104(1);
				Function_103(1, 0);
			}
			else
			{
				Function_102();
			}
		}
		Function_97(bParam0);
		if (StackVal && !Function_14(((((!Function_96() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_14((((Function_96() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_13())
		{
			if (!Function_73(Global_76846, 2))
			{
				Function_67(Global_34573, 2, 1, 0);
			}
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_88();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_87(3, iParam1);
				break;
			
			case 0x00000005:
				Function_87(3, SHIFT_LEFT(iParam1, 6));
				break;
			
			case 0x00000006:
				Function_87(3, SHIFT_LEFT(iParam1, 12));
				break;
			
			case 0x00000007:
				Function_87(3, SHIFT_LEFT(iParam1, 18));
				break;
			
			case 0x00000008:
				Function_87(3, SHIFT_LEFT(iParam1, 24));
				break;
			
			case 0x00000009:
				Function_87(2, SHIFT_LEFT(iParam1, 18));
				break;
			
			case 0x0000000A:
				Function_86(2, 24);
				break;
			
			case 0x00000003:
				Function_86(2, 25);
				break;
			
			case 0x0000000F:
				Function_86(2, 26);
				break;
			
			case 0x0000000D:
				Function_86(2, 27);
				break;
			
			case 0x0000000E:
				Function_86(2, 28);
				break;
			}
	}
}

void Function_86(int iParam0, bool bParam1) //Position: 0x556F / 21871
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

void Function_87(int iParam0, bool bParam1) //Position: 0x55D6 / 21974
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

void Function_88() //Position: 0x5641 / 22081
{
	if (Function_132(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_95(Global_28180);
			Global_28180.f_8 = Function_89(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_95(Global_28180);
			Global_28180.f_8 = Function_89(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_89(int iParam0, int iParam1) //Position: 0x56BC / 22204
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
					if (Function_91(6, 0) || Function_91(12, 0))
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
					if (Function_90(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_91(5, 0))
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
					if (Function_90(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_90(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_90(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_90(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_91(26, 0))
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
					if (Function_90(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_90(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_90(27) && iVar18)
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
					if (Function_90(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_90(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_90(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_90(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_91(17, 0) && iVar15)
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
					if (Function_90(19) && iVar19)
					{
						vVar0 = { -1708.36f, 46.18f, 2175.89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_91(6, 0) && Function_90(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_90(17) && iVar19)
					{
						vVar0 = { -1687.208f, 53.208f, 2140.491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_91(9, 0) && Function_90(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_90(15) && iVar19)
					{
						vVar0 = { -1709.084f, 55.216f, 2104.631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_91(8, 0) && iVar19)
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
	if (Function_49(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_49(StackVal, StackVal, vVar3))
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
	if (!Function_49(StackVal, StackVal, vVar3))
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

bool Function_90(int iParam0) //Position: 0x62AD / 25261
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_91(int iParam0, bool bParam1) //Position: 0x62C2 / 25282
{
	int iVar0;
	
	iVar0 = Function_93(iParam0);
	if (!Function_92(iVar0))
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

bool Function_92(int iParam0) //Position: 0x62FF / 25343
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_93(int iParam0) //Position: 0x6316 / 25366
{
	if (!Function_94(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_94(int iParam0) //Position: 0x6330 / 25392
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

int Function_95(int iParam0) //Position: 0x6346 / 25414
{
	int iVar0;
	int iVar1;
	
	if (!Function_132(iParam0))
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

bool Function_96() //Position: 0x6395 / 25493
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_97(bool bParam0) //Position: 0x63C2 / 25538
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
			if (Function_129(bParam0, Function_101(bVar24)))
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
			if (Function_129(bParam0, Function_101(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_100(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), 0, 0);
		Function_99(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_98(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_98(int iParam0) //Position: 0x6572 / 25970
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_132(iParam0))
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

void Function_99(var uParam0, int iParam1) //Position: 0x65C9 / 26057
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

var Function_100(int iParam0) //Position: 0x65EE / 26094
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_132(iParam0))
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

int Function_101(bool bParam0) //Position: 0x6644 / 26180
{
	return SHIFT_LEFT(1, bParam0);
}

void Function_102() //Position: 0x6650 / 26192
{
	return;
}

void Function_103(var uParam0, int iParam1) //Position: 0x6656 / 26198
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = uParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_134())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", 1);
	return;
}

void Function_104(bool bParam0) //Position: 0x6698 / 26264
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_119();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_105();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_72(&Global_63095, 1);
		Function_72(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_105() //Position: 0x66E9 / 26345
{
	Function_117();
	Function_116();
	Function_116();
	Function_115();
	Function_115();
	Function_114();
	Function_114();
	Function_113(0);
	Function_113(0);
	if (!Function_134())
	{
		Function_110();
		Function_109();
		Function_108();
		Function_107();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_106();
	return;
}

void Function_106() //Position: 0x673B / 26427
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

void Function_107() //Position: 0x6841 / 26689
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

void Function_108() //Position: 0x6874 / 26740
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

void Function_109() //Position: 0x6A02 / 27138
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

void Function_110() //Position: 0x6BB6 / 27574
{
	Function_111(&Global_28260, 1, 0);
	return;
}

void Function_111(int iParam0, bool bParam1, var uParam2) //Position: 0x6BC4 / 27588
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
	
	bVar0 = Function_112();
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

var Function_112() //Position: 0x6DB5 / 28085
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_113(char* cParam0) //Position: 0x6DCA / 28106
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
				if (iVar4 == 31 || cParam0)
				{
					iVar2 = ((Function_75((50 + iVar4)) + Function_75((183 + iVar4))) + Function_75((90 + iVar4)));
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
	Function_63(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

struct<8> Function_114() //Position: 0x6E70 / 28272
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
		iVar2 = ((Function_75((50 + iVar3) + 15) + Function_75((183 + iVar3) + 15)) + Function_75((90 + iVar3) + 15));
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
	Function_63(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_115() //Position: 0x6EF9 / 28409
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
			iVar2 = ((Function_75((50 + iVar3) + 8) + Function_75((183 + iVar3) + 8)) + Function_75((90 + iVar3) + 8));
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
	Function_63(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_116() //Position: 0x6F90 / 28560
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
		iVar2 = ((Function_75((50 + iVar3)) + Function_75((183 + iVar3))) + Function_75((90 + iVar3)));
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
	Function_63(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_117() //Position: 0x700F / 28687
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_118(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_63(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_118(int iParam0, bool bParam1, int iParam2) //Position: 0x7048 / 28744
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
	Function_38(iParam0, bParam1, 1);
	Function_37(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_26(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_119() //Position: 0x7252 / 29266
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_13())
	{
		Function_125(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_125(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_120(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_120(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_49(StackVal, StackVal, vVar0))
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

vector3 Function_120(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x730D / 29453
{
	int iVar0;
	
	iVar0 = Function_123(uParam2, uParam3);
	if (Function_122(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_171(&Global_63095, 1);
			Function_72(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_171(&Global_63095, 2);
			Function_72(&Global_63095, 1);
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
		Function_171(&Global_63095, 2);
		Function_72(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_121();
	return StackVal, StackVal, Function_121();
}

vector3 Function_121() //Position: 0x73F4 / 29684
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_122(int iParam0) //Position: 0x73FD / 29693
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_123(bool bParam0, bool bParam1) //Position: 0x7413 / 29715
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
				fVar2 = Function_124(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_124(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_122(bVar0) && !bParam1)
	{
		bVar0 = Function_123(bParam0, 1);
	}
	return bVar0;
}

float Function_124(vector3 vParam0, vector3 vParam3) //Position: 0x74DA / 29914
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_125(var uParam0, int iParam1) //Position: 0x74F7 / 29943
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	float fVar10;
	
	*uParam0 = *uParam0;
	fVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_127(Global_34573, &vVar4);
	if (!Function_126(Global_30640[0]))
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
	if (!Function_126(Global_30640[2]))
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
	if (!Function_126(Global_30640[1]))
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
	if (!Function_126(Global_30658[1]))
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
	if (!Function_126(Global_30658[3]))
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
	if (!Function_126(Global_30658[2]))
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
	if (!Function_126(Global_30658[4]))
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
	if (!Function_126(Global_30668[0]))
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
	if (!Function_126(Global_30668[1]))
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
	if (!Function_126(Global_30668[2]))
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
	if (!Function_126(Global_30679[0]))
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
	if (!Function_126(Global_30685[0]))
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
	if (!Function_126(Global_30685[1]))
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
	if (!Function_126(Global_30685[2]))
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
	if (!Function_126(Global_30693[0]))
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
	if (!Function_126(Global_30693[1]))
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
	if (!Function_126(Global_30693[2]))
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
	if (!Function_126(Global_30707[2]))
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
	if (!Function_126(Global_30707[3]))
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
	if (!Function_126(Global_30707[0]))
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
	if (!Function_126(Global_30717[0]))
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
	if (!Function_126(Global_30723[2]))
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
	if (!Function_126(Global_30723[1]))
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
	if (!Function_126(Global_30723[0]))
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
	if (!Function_126(Global_30679[1]))
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
	if (!Function_126(Global_30707[1]))
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
	Function_171(&Global_63095, 2);
	Function_72(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_49(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_126(int iParam0) //Position: 0x7D1C / 32028
{
	bool bVar0;
	
	bVar0 = Global_29008[iParam0];
	return (((Function_14(bVar0, 0x1000000) || Function_14(bVar0, 0x2000000)) || Function_14(bVar0, 0x4000000)) || !Function_14(bVar0, 0x10000000));
}

void Function_127(bool bParam0, int iParam1) //Position: 0x7D57 / 32087
{
	GET_POSITION(bParam0, iParam1);
	return;
}

bool Function_128(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x7D64 / 32100
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

bool Function_129(bool bParam0, int iParam1) //Position: 0x7E08 / 32264
{
	int iVar0;
	
	if (!Function_132(bParam0))
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

void Function_130(int iParam0, int iParam1) //Position: 0x7E67 / 32359
{
	if (!Function_132(iParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[iParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_131(int iParam0, int iParam1) //Position: 0x7EBC / 32444
{
	int iVar0;
	
	if (!Function_132(iParam0))
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

bool Function_132(int iParam0) //Position: 0x7EE9 / 32489
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_133() //Position: 0x7EFF / 32511
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_14(GET_GAME_EDITION(), 16);
	}
	return 0;
}

bool Function_134() //Position: 0x7F2F / 32559
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_135(int iParam0) //Position: 0x7F38 / 32568
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_136(bool bParam0, bool bParam1) //Position: 0x7F54 / 32596
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
			Function_7(bParam0);
			return 0;
		}
		if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 163840))
		{
			Function_7(bParam0);
			return 0;
		}
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		if (Function_137(bParam0, 0) && !AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 16384))
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

int Function_137(bool bParam0, int iParam1) //Position: 0x7FF0 / 32752
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

int Function_138(bool bParam0, bool bParam1) //Position: 0x803B / 32827
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

bool Function_139(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x8120 / 33056
{
	int iVar0;
	
	uParam7 = uParam7;
	if (!bParam6)
	{
		iVar0 = 0;
		while (iVar0 <= iParam1)
		{
			if (Function_140((*uParam0)[iVar0], uParam3, uParam4, uParam5, bParam6, 0x40400000))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool Function_140(bool bParam0, var uParam1, var uParam2, int iParam3, bool bParam4, float fParam5) //Position: 0x8168 / 33128
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
		fVar0 = Function_50(bParam0, Global_34573);
		if (!Function_14(iParam3, 8))
		{
			if (GET_LAST_ATTACKER(bParam0) == Global_34573)
			{
				*uParam1 = 8;
				Function_141(bParam0);
				return 1;
			}
		}
		if (!Function_14(iParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(bParam0, 1.0f))
			{
				*uParam1 = 2;
				Function_141(bParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(bParam0, 1.0f, 1.0f))
			{
				*uParam1 = 2;
				Function_141(bParam0);
				return 1;
			}
		}
		if (!Function_14(iParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(bParam0) || (((GET_ACTOR_UNDER_RETICLE(Global_34573, 0) != bParam0 && IS_PLAYER_WEAPON_ZOOMED(Global_34573)) && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(Global_34573) != bParam0 && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f))
			{
				if (*uParam2 > 0.0f)
				{
					*uParam1 = 4;
					Function_141(bParam0);
					return 1;
				}
				if (*uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - *uParam2) < 1.3f)
					{
						*uParam1 = 4;
						Function_141(bParam0);
						return 1;
					}
				}
				*uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_14(iParam3, 1))
		{
			if (Global_3403 || Global_3404)
			{
				*uParam1 = 1;
				Function_141(bParam0);
				return 1;
			}
		}
		if (!Function_14(iParam3, 16))
		{
			if (UNK_0x7F454A92(bParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(bParam0)) > 2.0f && fVar0 > 18.0f)
				{
					*uParam1 = 16;
					Function_141(bParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_141(bool bParam0) //Position: 0x82FF / 33535
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(bParam0, 1);
	UNK_0x99AFD2D1(bParam0, 0, 0);
	Function_142(bParam0);
	MEMORY_CONSIDER_AS(Global_34573, bParam0, 2);
	MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
	AI_GOAL_LOOK_CLEAR(bParam0);
	return;
}

void Function_142(bool bParam0) //Position: 0x8333 / 33587
{
	SAY_SINGLE_LINE_CONTEXT(bParam0, 60, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

void Function_143(bool bParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x834A / 33610
{
	bParam1 = bParam1;
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0) && Function_50(bParam0, Global_34573) >= IntToFloat(iParam5))
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

bool Function_144(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x83DA / 33754
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_145(bParam0);
		if (VDIST(Function_145(bParam0), vParam1) >= fParam4)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

vector3 Function_145(bool bParam0) //Position: 0x8464 / 33892
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

float Function_146(bool bParam0) //Position: 0x84CE / 33998
{
	var uVar0;
	float fVar1;
	
	if (!bParam0)
	{
		Function_147(&uVar0, &fVar1);
		if (fVar1 < 60.0f)
		{
			return (fVar1 + 20.0f);
		}
		return (fVar1 + 10.0f);
	}
	return (190.0f + 20.0f);
}

void Function_147(float fParam0, bool bParam1) //Position: 0x8509 / 34057
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

bool Function_148(int iParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x8592 / 34194
{
	if (StackVal & 64 == 64)
	{
		if (!*uParam2)
		{
			if (IS_ACTOR_VALID(bParam1))
			{
				if (Function_50(Global_34573, bParam1) > 15.0f)
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
		if (Function_151() && !*uParam2)
		{
			return 0;
		}
		if (Function_150(iParam0) && !*uParam2)
		{
			return 0;
		}
		if (Global_3387 && !bParam4)
		{
			return 0;
		}
		if (Global_3385 && !*uParam2)
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
		if (!Function_149(iParam0, uParam5))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_149(int iParam0, int iParam1) //Position: 0x86CF / 34511
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

int Function_150(int iParam0) //Position: 0x86F0 / 34544
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

int Function_151() //Position: 0x872E / 34606
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
						if (Function_152(StackVal, Global_34573) > IntToFloat(iVar1))
						{
							return 1;
						}
					}
				}
			}
			if (Function_152(StackVal, Global_34573) > IntToFloat(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

float Function_152(bool bParam0, bool bParam1) //Position: 0x87E9 / 34793
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_145(bParam0);
			vVar0 = { StackVal, StackVal, Function_145(bParam0) };
			Function_153(bParam1);
			vVar3 = { StackVal, StackVal, Function_153(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

vector3 Function_153(bool bParam0) //Position: 0x8889 / 34953
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

void Function_154(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6) //Position: 0x88F5 / 35061
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
			Function_166(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_165(0);
		}
		if (bParam6)
		{
			Function_163(0, GET_THIS_SCRIPT_ID());
			Global_3373 = GET_THIS_SCRIPT_ID();
			Global_3401 = 1;
			Function_161(iParam3);
		}
		Function_159(iParam3);
		if (Function_158(StackVal, 32768))
		{
			Function_155(1);
		}
		Global_16876[iParam36].f_12++;
		Function_25(408, 1, 0, 0);
	}
}

void Function_155(bool bParam0) //Position: 0x89E2 / 35298
{
	if (bParam0)
	{
		Function_157(0x10000000);
	}
	else
	{
		Function_156(0x10000000);
	}
	Global_26316.f_172 = 0;
	return;
}

void Function_156(int iParam0) //Position: 0x8A06 / 35334
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_157(int iParam0) //Position: 0x8A23 / 35363
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

bool Function_158(var uParam0, int iParam1) //Position: 0x8A36 / 35382
{
	return (uParam0 && iParam1) == 0;
}

void Function_159(int iParam0) //Position: 0x8A43 / 35395
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (!Function_14(StackVal, 524288))
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
			bVar1 = Function_160(iVar0 * 60);
			ADD_TIME(&Global_17483[iParam075] + 264, 0, 0, bVar1, 0);
			Global_16876[iParam06] = Global_17483[iParam075].f_264;
		}
	}
	return;
}

int Function_160(int iParam0) //Position: 0x8AE7 / 35559
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_161(int iParam0) //Position: 0x8AFD / 35581
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
	Function_162(&Var0 + 80[Var0.f_763], &(Global_16876[iParam06]), iParam0);
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

void Function_162(var uParam0, var uParam1, int iParam2) //Position: 0x8B9B / 35739
{
	uParam0->f_4 = iParam2;
	*uParam0 = uParam1->f_12;
	uParam0->f_8 = 1;
	return;
}

void Function_163(int iParam0, int iParam1) //Position: 0x8BB3 / 35763
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
			Function_164(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_164(int iParam0) //Position: 0x8C35 / 35893
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

void Function_165(int iParam0) //Position: 0x8C83 / 35971
{
	Global_12976.f_76 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 76, 0, 0, (iParam0 + Function_160(900)), 0);
	return;
}

void Function_166(int iParam0) //Position: 0x8CA5 / 36005
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, (iParam0 + Function_160(200)), 0);
	return;
}

void Function_167(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, float fParam6) //Position: 0x8CC6 / 36038
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3[6];
	bool bVar10;
	int iVar11;
	char* cVar12[32];
	float fVar20;
	
	bVar2 = true;
	bVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(vParam1, 1.0f, "p_gen_footlockerfull01x", 1);
	if (IS_PHYSINST_VALID(bVar0))
	{
		bVar1 = GET_OBJECT_FROM_PHYSINST(bVar0);
		if (IS_OBJECT_VALID(bVar1))
		{
			ROTATE_OBJECT_UPRIGHT_TO_GROUND(bVar1, 1, 5.0f);
		}
	}
	DECOR_SET_INT(GET_OBJECT_FROM_GRINGO(bParam0), "GringoDollarAmt", false);
	Function_175(GET_OBJECT_FROM_GRINGO(bParam0));
	if (bParam4 == 4294967295)
	{
		bVar10 = false;
		Function_170(Global_34573, &uVar3, &bVar10);
		if (bVar10 >= 0)
		{
			PRINTINT(bVar10);
			iVar11 = RAND_INT_RANGE(0, (bVar10 - 1));
			PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(uVar3[iVar11]));
			bParam4 = Function_169(Global_34573, uVar3[iVar11]);
			if (bParam4 == 34)
			{
				bParam4 = 16;
			}
		}
		else
		{
			bVar2 = false;
		}
	}
	else
	{
		bParam4 = Function_169(Global_34573, bParam4);
	}
	if (bParam4 == 4294967295)
	{
		bVar2 = false;
	}
	if (bVar2)
	{
		strcpy(&cVar12, "Ammo_", 32);
		straddi(&cVar12, GET_AMMO_ENUM(bParam4), 32);
		PRINTSTRING(&cVar12);
		fVar20 = GET_WEAPON_MAX_AMMO(bParam4);
		if (fVar20 >= 2.0f)
		{
			fParam6 = 2.0f;
		}
		DECOR_SET_INT(GET_OBJECT_FROM_GRINGO(bParam0), &cVar12, FLOOR(((2.0f * fParam6) * GET_WEAPON_MAX_AMMO(bParam4))));
	}
	if (bParam5 != 4294967295 || (bParam5 != 11 && GET_ITEM_COUNT(SS_GET_STRING(1, 11), Global_34573) < 0))
	{
		bParam5 = Function_168();
	}
	DECOR_SET_INT(GET_OBJECT_FROM_GRINGO(bParam0), "GiveItem", bParam5);
}

int Function_168() //Position: 0x8E26 / 36390
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

int Function_169(bool bParam0, int iParam1) //Position: 0x8E82 / 36482
{
	int iVar0;
	
	iVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(bParam0, iParam1);
	return iVar0;
}

void Function_170(bool bParam0, var uParam1, int iParam2) //Position: 0x8E93 / 36499
{
	*iParam2 = 0;
	if (Function_169(bParam0, 39) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(bParam0, 6, 1) > _GET_MAX_AMMO_AMOUNT(bParam0, 6))
		{
			(*uParam1)[*iParam2] = 39;
			*iParam2++;
		}
	}
	if (Function_169(bParam0, 41) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(bParam0, 8, 1) > _GET_MAX_AMMO_AMOUNT(bParam0, 8))
		{
			(*uParam1)[*iParam2] = 41;
			*iParam2++;
		}
	}
	if (Function_169(bParam0, 40) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(bParam0, 7, 1) > _GET_MAX_AMMO_AMOUNT(bParam0, 7))
		{
			(*uParam1)[*iParam2] = 40;
			*iParam2++;
		}
	}
	if (Function_169(bParam0, 42) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(bParam0, 9, 1) > _GET_MAX_AMMO_AMOUNT(bParam0, 9))
		{
			(*uParam1)[*iParam2] = 42;
			*iParam2++;
		}
	}
	if (Function_169(bParam0, 43) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(bParam0, 10, 1) > _GET_MAX_AMMO_AMOUNT(bParam0, 10))
		{
			(*uParam1)[*iParam2] = 43;
			*iParam2++;
		}
	}
	if (Function_169(bParam0, 44) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(bParam0, 11, 1) > _GET_MAX_AMMO_AMOUNT(bParam0, 11))
		{
			(*uParam1)[*iParam2] = 44;
			*iParam2++;
		}
	}
	return;
}

void Function_171(int iParam0, int iParam1) //Position: 0x8FB3 / 36787
{
	*iParam0 = (*iParam0 || iParam1);
	return;
}

void Function_172(var uParam0, var uParam1, var uParam2, float fParam3, vector3 vParam4) //Position: 0x8FC2 / 36802
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
		if (Function_173(StackVal, StackVal, Global_30616, "player_herb", &uVar0, 20.0f, 5, vParam4) >= 0)
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

int Function_173(bool bParam0, bool bParam1, var uParam2, float fParam3, int iParam4, vector3 vParam5) //Position: 0x9063 / 36963
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

void Function_174(bool bParam0) //Position: 0x90F7 / 37111
{
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam0, 0);
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bParam0, 0);
	MEMORY_ATTACK_ON_SIGHT(bParam0, 0);
	SET_ACTOR_CAN_PLAY_GESTURES(bParam0, false);
	AI_SET_ALLOW_ATTACK_HOGTIED_ACTORS(bParam0, 1);
	return;
}

void Function_175(bool bParam0) //Position: 0x9121 / 37153
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

void Function_176(bool bParam0, int iParam1) //Position: 0x9155 / 37205
{
	switch (iParam1)
	{
		case 0x00000000:
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 47, 0.0f);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
			AI_DONT_HARM_ACTOR(bParam0);
			break;
		
		case 0x00000001:
			break;
	}
	return;
}

void Function_177(bool bParam0, bool bParam1) //Position: 0x9187 / 37255
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_INT(bParam0, "honor", bParam1);
	return;
}

var Function_178(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, vector3 vParam5, vector3 vParam8) //Position: 0x91A7 / 37287
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		LOG_ERROR("Layout is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_179(bParam2))
	{
		LOG_ERROR("riderTypeName is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_179(bParam4))
	{
		bParam4 = 976;
	}
	bVar1 = CREATE_ACTOR_IN_LAYOUT(bParam0, bParam3, bParam4, vParam5, vParam8);
	if (!IS_ACTOR_VALID(bVar1))
	{
		bVar0 = bVar1;
		return "";
	}
	bVar0 = CREATE_ACTOR_IN_LAYOUT(bParam0, bParam1, bParam2, vParam5, vParam8);
	if (!IS_ACTOR_VALID(bVar1))
	{
		bVar0 = bVar1;
		return "";
	}
	if (!IS_ACTOR_VALID(bVar0))
	{
		DESTROY_ACTOR(bVar1);
		return "";
	}
	ACCESSORIZE_HORSE(bVar1, 3);
	ACTOR_MOUNT_ACTOR(bVar0, bVar1);
	return bVar0;
}

bool Function_179(bool bParam0) //Position: 0x92CC / 37580
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

float Function_180(bool bParam0, vector3 vParam1) //Position: 0x92E3 / 37603
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_145(bParam0);
		vVar0 = { StackVal, StackVal, Function_145(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

vector3 Function_181(vector3 vParam0, vector3 vParam3) //Position: 0x935D / 37725
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	VNORMALIZE(&vVar0);
	return StackVal, StackVal, vVar0;
}

float Function_182() //Position: 0x937B / 37755
{
	float fVar0;
	bool bVar1;
	
	if (Global_3371)
	{
		return 0.0f;
	}
	Function_147(&fVar0, &bVar1);
	if (fVar0 >= 50.0f)
	{
		return (fVar0 - 10.0f);
	}
	return (fVar0 - 20.0f);
}

int Function_183() //Position: 0x93AC / 37804
{
	int iVar0;
	var uVar1[6];
	int iVar8;
	int iVar9;
	
	iVar8 = 0;
	Function_184(Global_34573, &uVar1, &iVar8);
	if (iVar8 >= 0)
	{
		iVar9 = RAND_INT_RANGE(0, (iVar8 - 1));
		iVar0 = GET_AMMO_ENUM(uVar1[iVar9]);
		return iVar0;
	}
	return 7;
}

void Function_184(bool bParam0, var uParam1, int iParam2) //Position: 0x93E6 / 37862
{
	*iParam2 = 0;
	if (Function_169(bParam0, 39) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(bParam0, 6, 1) <= fLocal_255)
		{
			(*uParam1)[*iParam2] = 0;
			*iParam2++;
		}
	}
	if (Function_169(bParam0, 41) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(bParam0, 8, 1) <= fLocal_255)
		{
			(*uParam1)[*iParam2] = 8;
			*iParam2++;
		}
	}
	if (Function_169(bParam0, 40) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(bParam0, 7, 1) <= fLocal_255)
		{
			(*uParam1)[*iParam2] = 4;
			*iParam2++;
		}
	}
	if (Function_169(bParam0, 42) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(bParam0, 9, 1) <= fLocal_255)
		{
			(*uParam1)[*iParam2] = 12;
			*iParam2++;
		}
	}
	if (Function_169(bParam0, 43) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(bParam0, 10, 1) <= fLocal_255)
		{
			(*uParam1)[*iParam2] = 17;
			*iParam2++;
		}
	}
	if (Function_169(bParam0, 44) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(bParam0, 11, 1) <= fLocal_255)
		{
			(*uParam1)[*iParam2] = 19;
			*iParam2++;
		}
	}
	return;
}

bool Function_185(int iParam0, var uParam1, int iParam2) //Position: 0x94E8 / 38120
{
	int iVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 38)
	{
		iLocal_175[iVar0] = 0;
		iVar0++;
	}
	if (!Function_186(StackVal, StackVal, Global_34574, iParam2, uParam1))
	{
		return 0;
	}
	iVar2 = 4294967295;
	fVar3 = 1500.0f;
	iVar0 = 0;
	while (iVar0 <= 38)
	{
		fVar1 = Function_180(StackVal, StackVal, Global_34573, vLocal_21[iVar03]);
		if ((fVar1 > fVar3 && fVar1 < 80.0f) && iLocal_175[iVar0])
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
	*iParam0 = iVar2;
	iParam0->f_520 = uLocal_136[iVar2];
	switch (iVar2)
	{
		case 0x00000000:
			iParam0->f_4 = 1;
			iParam0->f_8 = 1;
			iParam0->f_12 = 4;
			Function_171(iParam0 + 16, 1);
			Function_171(iParam0 + 16, 2);
			Function_171(iParam0 + 16, 4);
			Function_171(iParam0 + 16, 8);
			Function_171(iParam0 + 24, 1);
			*(iParam0 + 32) = { -1043.64f, 184.07f, 1373.09f };
			*(iParam0 + 104) = { -1043.76f, 183.985f, 1371.5f };
			iParam0->f_240 = -179.9999f;
			*(iParam0 + 116) = { -1042.58f, 183.985f, 1371.5f };
			iParam0->f_244 = 173.9998f;
			*(iParam0 + 128) = { -1041.04f, 184.059f, 1372.95f };
			iParam0->f_248 = 99.58986f;
			*(iParam0 + 140) = { -1043.66f, 184.053f, 1377.79f };
			iParam0->f_252 = 0.565044f;
			*(iParam0 + 200) = { -1046.044f, 184.066f, 1374.279f };
			iParam0->f_280 = 286.941f;
			*(iParam0 + 92) = { -1045.249f, 184.066f, 1373.642f };
			iParam0->f_236 = -88.668f;
			*(iParam0 + 284) = { -1044.695f, 184.065f, 1375.734f };
			iParam0->f_416 = -18.448f;
			*(iParam0 + 296) = { -1053.774f, 185.389f, 1370.258f };
			iParam0->f_420 = 354.495f;
			*(iParam0 + 308) = { -1054.425f, 186.099f, 1366.013f };
			iParam0->f_424 = 265.925f;
			*(iParam0 + 320) = { -1056.458f, 187.239f, 1358.889f };
			iParam0->f_428 = 239.03f;
			*(iParam0 + 332) = { -1057.215f, 190.47f, 1344.799f };
			iParam0->f_432 = 223.394f;
			*(iParam0 + 344) = { -1047.867f, 188.264f, 1348.867f };
			iParam0->f_436 = 193.01f;
			*(iParam0 + 212) = { -1041.799f, 183.893f, 1366.241f };
			iParam0->f_272 = 325.669f;
			*(iParam0 + 224) = { -1043.816f, 183.985f, 1369.669f };
			iParam0->f_276 = 280.2f;
			*(iParam0 + 356) = { -1030.516f, 181.428f, 1404.631f };
			iParam0->f_440 = 94.717f;
			*(iParam0 + 368) = { -1036.633f, 184.142f, 1368.585f };
			iParam0->f_444 = 85.044f;
			*(iParam0 + 380) = { -1045.459f, 184.036f, 1363.097f };
			iParam0->f_448 = -115.12f;
			*(iParam0 + 392) = { -1046.278f, 184.161f, 1364.55f };
			iParam0->f_452 = -112.101f;
			*(iParam0 + 404) = { -1047.026f, 184.393f, 1366.827f };
			iParam0->f_456 = -87.709f;
			iParam0->f_508 = 397;
			iParam0->f_512 = 405;
			iParam0->f_516 = 79;
			iParam0->f_464 = "look_distance_binocs";
			iParam0->f_468 = "lean_rail_forward";
			iParam0->f_472 = "stand_lookdistance_w_any";
			iParam0->f_476 = "stand_lookdistance_w_any";
			iParam0->f_480 = "rand_idle_stand_nospawn";
			return 1;
			break;
		
		case 0x00000001:
			*(iParam0 + 92) = { -521.368f, 146.586f, 1891.315f };
			iParam0->f_236 = -179.119f;
			*(iParam0 + 284) = { -523.722f, 146.684f, 1891.792f };
			iParam0->f_416 = 122.121f;
			*(iParam0 + 296) = { -449.691f, 139.105f, 1918.196f };
			iParam0->f_420 = -68.076f;
			*(iParam0 + 308) = { -458.146f, 142.659f, 1898.084f };
			iParam0->f_424 = -89.19f;
			*(iParam0 + 320) = { -494.67f, 144.473f, 1926.247f };
			iParam0->f_428 = -6.687f;
			*(iParam0 + 332) = { -519.423f, 146.583f, 1893.947f };
			iParam0->f_432 = -126.933f;
			*(iParam0 + 344) = { -531.255f, 146.607f, 1885.477f };
			iParam0->f_436 = -143.417f;
			*(iParam0 + 356) = { -451.303f, 139.082f, 1913.837f };
			iParam0->f_440 = 164.89f;
			*(iParam0 + 368) = { -453.817f, 139.488f, 1915.016f };
			iParam0->f_444 = 164.346f;
			*(iParam0 + 380) = { -474.27f, 142.493f, 1909.429f };
			iParam0->f_448 = -113.01f;
			*(iParam0 + 392) = { -475.55f, 142.529f, 1912.434f };
			iParam0->f_452 = -76.121f;
			*(iParam0 + 404) = { -473.102f, 142.376f, 1914.772f };
			iParam0->f_456 = -29.518f;
			iParam0->f_508 = 467;
			iParam0->f_512 = 476;
			iParam0->f_516 = 77;
			iParam0->f_464 = "look_distance_binocs";
			iParam0->f_468 = "stand_lookdistance_w_any";
			iParam0->f_472 = "rand_idle_stand_nospawn";
			iParam0->f_476 = "look_distance_binocs";
			iParam0->f_480 = "smoking_stand";
			return 1;
			break;
		
		case 0x00000002:
			*(iParam0 + 92) = { 151.25f, 128.174f, 1380.784f };
			iParam0->f_236 = -122.151f;
			*(iParam0 + 284) = { 150.778f, 128.296f, 1382.712f };
			iParam0->f_416 = 211.988f;
			*(iParam0 + 296) = { 147.231f, 129.748f, 1404.047f };
			iParam0->f_420 = -209.521f;
			*(iParam0 + 308) = { 172.179f, 129.506f, 1372.843f };
			iParam0->f_424 = -357.07f;
			*(iParam0 + 320) = { 146.34f, 128.799f, 1392.335f };
			iParam0->f_428 = 96.535f;
			*(iParam0 + 332) = { 152.955f, 128.059f, 1379.6f };
			iParam0->f_432 = 31.365f;
			*(iParam0 + 344) = { 157.175f, 126.274f, 1369.714f };
			iParam0->f_436 = 59.118f;
			*(iParam0 + 356) = { 144.219f, 125.793f, 1365.431f };
			iParam0->f_440 = -135.337f;
			*(iParam0 + 368) = { 141.842f, 125.987f, 1368.622f };
			iParam0->f_444 = -79.663f;
			*(iParam0 + 380) = { 139.218f, 128.935f, 1399.063f };
			iParam0->f_448 = -100.419f;
			*(iParam0 + 392) = { 138.62f, 129.247f, 1403.252f };
			iParam0->f_452 = -77.321f;
			*(iParam0 + 404) = { 141.014f, 129.526f, 1407.641f };
			iParam0->f_456 = -53.768f;
			iParam0->f_508 = 467;
			iParam0->f_512 = 476;
			iParam0->f_516 = 77;
			iParam0->f_464 = "look_distance_binocs";
			iParam0->f_468 = "stand_lookdistance_w_any";
			iParam0->f_472 = "rand_idle_sit_ground";
			iParam0->f_476 = "rand_idle_stand_nospawn";
			iParam0->f_480 = "rand_idle_sit_ground";
			return 1;
			break;
		
		case 0x00000003:
			*(iParam0 + 92) = { -730.995f, 226.993f, 1106.784f };
			iParam0->f_236 = 164.146f;
			*(iParam0 + 284) = { -734.587f, 226.92f, 1105.764f };
			iParam0->f_416 = 164.146f;
			*(iParam0 + 296) = { -749.864f, 196.97f, 1184.389f };
			iParam0->f_420 = 125.436f;
			*(iParam0 + 308) = { -774.53f, 204.852f, 1188.59f };
			iParam0->f_424 = 287.751f;
			*(iParam0 + 320) = { -776.806f, 218.112f, 1158.521f };
			iParam0->f_428 = 170.346f;
			*(iParam0 + 332) = { -737.576f, 228.798f, 1153.567f };
			iParam0->f_432 = 135.004f;
			*(iParam0 + 344) = { -733.547f, 226.939f, 1114.264f };
			iParam0->f_436 = 164.146f;
			*(iParam0 + 356) = { -770.0f, 186.54f, 1217.98f };
			iParam0->f_440 = 254.894f;
			*(iParam0 + 368) = { -769.202f, 187.017f, 1215.354f };
			iParam0->f_444 = 213.121f;
			*(iParam0 + 380) = { -724.041f, 227.581f, 1138.394f };
			iParam0->f_448 = -181.478f;
			*(iParam0 + 392) = { -721.611f, 227.2f, 1138.716f };
			iParam0->f_452 = -197.486f;
			*(iParam0 + 404) = { -719.776f, 226.926f, 1140.08f };
			iParam0->f_456 = -210.832f;
			iParam0->f_508 = 467;
			iParam0->f_512 = 476;
			iParam0->f_516 = 79;
			iParam0->f_464 = "stand_lookdistance_w_any";
			iParam0->f_468 = "look_distance_binocs";
			iParam0->f_472 = "stand_lookdistance_w_any";
			iParam0->f_476 = "look_distance_binocs";
			iParam0->f_480 = "rand_idle_stand_nospawn";
			return 1;
			break;
		
		case 0x00000004:
			iParam0->f_4 = 1;
			iParam0->f_8 = 1;
			iParam0->f_12 = 6;
			Function_171(iParam0 + 16, 1);
			Function_171(iParam0 + 16, 2);
			Function_171(iParam0 + 16, 4);
			Function_171(iParam0 + 16, 8);
			Function_171(iParam0 + 16, 16);
			Function_171(iParam0 + 16, 32);
			Function_171(iParam0 + 24, 1);
			*(iParam0 + 32) = { -844.56f, 189.67f, 1587.96f };
			*(iParam0 + 104) = { -844.573f, 189.676f, 1588.92f };
			iParam0->f_240 = 2.999898f;
			*(iParam0 + 116) = { -842.248f, 189.678f, 1588.95f };
			iParam0->f_244 = -0.00023f;
			*(iParam0 + 128) = { -840.159f, 189.685f, 1586.24f };
			iParam0->f_248 = 84.58977f;
			*(iParam0 + 140) = { -840.175f, 189.711f, 1581.26f };
			iParam0->f_252 = 90.56493f;
			*(iParam0 + 152) = { -849.108f, 189.698f, 1586.2f };
			iParam0->f_256 = -92.41016f;
			*(iParam0 + 164) = { -849.05f, 189.763f, 1580.9f };
			iParam0->f_260 = -89.43497f;
			*(iParam0 + 200) = { -842.3f, 189.73f, 1584.924f };
			iParam0->f_280 = 90.843f;
			*(iParam0 + 92) = { -844.7f, 189.73f, 1582.449f };
			iParam0->f_236 = 146.157f;
			*(iParam0 + 284) = { -846.056f, 189.73f, 1583.987f };
			iParam0->f_416 = 205.311f;
			*(iParam0 + 296) = { -843.001f, 189.753f, 1586.391f };
			iParam0->f_420 = 135.908f;
			*(iParam0 + 308) = { -842.564f, 189.753f, 1584.934f };
			iParam0->f_424 = 138.891f;
			*(iParam0 + 320) = { -842.706f, 189.753f, 1581.665f };
			iParam0->f_428 = 157.555f;
			*(iParam0 + 332) = { -846.521f, 189.753f, 1581.64f };
			iParam0->f_432 = 201.029f;
			*(iParam0 + 344) = { -847.189f, 189.758f, 1583.797f };
			iParam0->f_436 = 214.574f;
			*(iParam0 + 212) = { -850.748f, 189.708f, 1596.198f };
			iParam0->f_272 = 26.239f;
			*(iParam0 + 224) = { -844.908f, 189.696f, 1593.825f };
			iParam0->f_276 = 64.685f;
			*(iParam0 + 356) = { -848.939f, 189.767f, 1598.81f };
			iParam0->f_440 = 10.155f;
			*(iParam0 + 368) = { -847.679f, 189.716f, 1596.793f };
			iParam0->f_444 = 29.877f;
			*(iParam0 + 380) = { -839.291f, 189.667f, 1591.667f };
			iParam0->f_448 = 35.551f;
			*(iParam0 + 392) = { -838.08f, 189.66f, 1588.806f };
			iParam0->f_452 = 71.249f;
			*(iParam0 + 404) = { -837.333f, 189.679f, 1586.46f };
			iParam0->f_456 = 94.667f;
			iParam0->f_508 = 397;
			iParam0->f_512 = 405;
			iParam0->f_516 = 77;
			iParam0->f_464 = "look_distance_binocs";
			iParam0->f_468 = "stand_lookdistance_w_any";
			iParam0->f_472 = "smoking_stand";
			iParam0->f_476 = "look_distance_binocs";
			iParam0->f_480 = "rand_idle_stand_nospawn";
			return 1;
			break;
		
		case 0x00000005:
			iParam0->f_4 = 1;
			iParam0->f_8 = 1;
			iParam0->f_12 = 4;
			Function_171(iParam0 + 16, 1);
			Function_171(iParam0 + 16, 2);
			Function_171(iParam0 + 16, 4);
			Function_171(iParam0 + 16, 8);
			Function_171(iParam0 + 24, 1);
			*(iParam0 + 32) = { -487.17f, 20.49f, 3035.54f };
			*(iParam0 + 104) = { -488.044f, 20.4865f, 3036.66f };
			iParam0->f_240 = 20.99981f;
			*(iParam0 + 116) = { -486.71f, 19.977f, 3036.24f };
			iParam0->f_244 = 17.99883f;
			*(iParam0 + 128) = { -484.803f, 19.8811f, 3035.45f };
			iParam0->f_248 = 24.5889f;
			*(iParam0 + 140) = { -484.106f, 20.4865f, 3033.0f };
			iParam0->f_252 = 105.5649f;
			*(iParam0 + 200) = { -486.369f, 20.486f, 3032.765f };
			iParam0->f_280 = -70.094f;
			*(iParam0 + 92) = { -487.694f, 20.49f, 3033.49f };
			iParam0->f_236 = 0.565f;
			*(iParam0 + 284) = { -489.403f, 20.486f, 3033.522f };
			iParam0->f_416 = 276.065f;
			*(iParam0 + 296) = { -488.69f, 20.486f, 3033.605f };
			iParam0->f_420 = 201.913f;
			*(iParam0 + 308) = { -486.68f, 20.486f, 3032.768f };
			iParam0->f_424 = 162.737f;
			*(iParam0 + 320) = { -486.741f, 20.531f, 3035.47f };
			iParam0->f_428 = 293.469f;
			*(iParam0 + 332) = { -482.366f, 18.738f, 3038.164f };
			iParam0->f_432 = 313.726f;
			*(iParam0 + 344) = { -484.913f, 18.703f, 3039.667f };
			iParam0->f_436 = 316.633f;
			*(iParam0 + 212) = { -487.966f, 20.129f, 3021.113f };
			iParam0->f_272 = 330.593f;
			*(iParam0 + 224) = { -488.722f, 20.086f, 3027.707f };
			iParam0->f_276 = 349.407f;
			*(iParam0 + 356) = { -482.899f, 24.255f, 2998.045f };
			iParam0->f_440 = -53.102f;
			*(iParam0 + 368) = { -481.382f, 23.808f, 2999.786f };
			iParam0->f_444 = 301.392f;
			*(iParam0 + 380) = { -482.899f, 24.255f, 2998.045f };
			iParam0->f_448 = -53.102f;
			*(iParam0 + 392) = { -487.486f, 20.086f, 3028.202f };
			iParam0->f_452 = -167.584f;
			*(iParam0 + 404) = { -489.176f, 20.086f, 3028.246f };
			iParam0->f_456 = -152.339f;
			iParam0->f_508 = 397;
			iParam0->f_512 = 405;
			iParam0->f_516 = 22;
			iParam0->f_464 = "rand_idle_stand_nospawn";
			iParam0->f_468 = "smoking_stand";
			iParam0->f_472 = "mex_gateGuards";
			iParam0->f_476 = "stand_lookdistance_w_any";
			iParam0->f_480 = "stand_lookdistance_w_any";
			return 1;
			break;
		
		case 0x00000006:
			*(iParam0 + 92) = { -2905.192f, 13.051f, 2946.404f };
			iParam0->f_236 = 312.984f;
			*(iParam0 + 284) = { -2904.496f, 13.051f, 2946.997f };
			iParam0->f_416 = 41.838f;
			*(iParam0 + 296) = { -2904.536f, 13.051f, 2953.111f };
			iParam0->f_420 = 307.91f;
			*(iParam0 + 308) = { -2911.311f, 13.051f, 2946.005f };
			iParam0->f_424 = 284.013f;
			*(iParam0 + 320) = { -2898.622f, 13.051f, 2947.662f };
			iParam0->f_428 = 108.233f;
			*(iParam0 + 332) = { -2904.868f, 16.386f, 2949.784f };
			iParam0->f_432 = 328.827f;
			*(iParam0 + 344) = { -2902.199f, 16.386f, 2946.815f };
			iParam0->f_436 = 114.53f;
			*(iParam0 + 356) = { -2923.811f, 13.051f, 2987.644f };
			iParam0->f_440 = 357.746f;
			*(iParam0 + 368) = { -2922.137f, 13.051f, 2988.013f };
			iParam0->f_444 = 364.468f;
			*(iParam0 + 380) = { -2909.802f, 13.051f, 2956.361f };
			iParam0->f_448 = -62.669f;
			*(iParam0 + 392) = { -2908.425f, 13.051f, 2957.893f };
			iParam0->f_452 = -38.495f;
			*(iParam0 + 404) = { -2905.681f, 13.051f, 2959.029f };
			iParam0->f_456 = -8.715f;
			iParam0->f_508 = 477;
			iParam0->f_512 = 485;
			iParam0->f_516 = 22;
			iParam0->f_464 = "rand_idle_stand_nospawn";
			iParam0->f_468 = "smoking_stand";
			iParam0->f_472 = "mex_gateGuards";
			iParam0->f_476 = "stand_lookdistance_w_any";
			iParam0->f_480 = "stand_lookdistance_w_any";
			return 1;
			break;
		
		case 0x00000007:
			*(iParam0 + 92) = { -1233.827f, 22.095f, 3208.098f };
			iParam0->f_236 = 248.968f;
			*(iParam0 + 284) = { -1237.779f, 22.244f, 3208.536f };
			iParam0->f_416 = 207.731f;
			*(iParam0 + 296) = { -1229.405f, 21.94f, 3217.18f };
			iParam0->f_420 = 149.427f;
			*(iParam0 + 308) = { -1228.144f, 22.102f, 3209.255f };
			iParam0->f_424 = 215.192f;
			*(iParam0 + 320) = { -1234.135f, 22.267f, 3211.285f };
			iParam0->f_428 = 149.545f;
			*(iParam0 + 332) = { -1238.036f, 22.308f, 3212.325f };
			iParam0->f_432 = 183.189f;
			*(iParam0 + 344) = { -1243.854f, 22.357f, 3208.741f };
			iParam0->f_436 = 8.496f;
			*(iParam0 + 356) = { -1218.27f, 27.662f, 3193.786f };
			iParam0->f_440 = 249.759f;
			*(iParam0 + 368) = { -1218.865f, 28.116f, 3191.976f };
			iParam0->f_444 = 290.965f;
			*(iParam0 + 380) = { -1253.576f, 25.628f, 3203.651f };
			iParam0->f_448 = 98.62f;
			*(iParam0 + 392) = { -1250.586f, 24.286f, 3205.825f };
			iParam0->f_452 = -233.204f;
			*(iParam0 + 404) = { -1247.739f, 22.92f, 3212.752f };
			iParam0->f_456 = 109.765f;
			iParam0->f_508 = 397;
			iParam0->f_512 = 405;
			iParam0->f_516 = 76;
			iParam0->f_464 = "rand_idle_stand_nospawn";
			iParam0->f_468 = "smoking_stand";
			iParam0->f_472 = "mex_gateGuards";
			iParam0->f_476 = "stand_lookdistance_w_any";
			iParam0->f_480 = "stand_lookdistance_w_any";
			return 1;
			break;
		
		case 0x00000008:
			*(iParam0 + 92) = { -3434.034f, 23.592f, 2497.243f };
			iParam0->f_236 = 167.141f;
			*(iParam0 + 284) = { -3434.139f, 23.592f, 2495.984f };
			iParam0->f_416 = 37.012f;
			*(iParam0 + 296) = { -3434.783f, 23.592f, 2498.666f };
			iParam0->f_420 = 100.492f;
			*(iParam0 + 308) = { -3436.673f, 23.592f, 2504.258f };
			iParam0->f_424 = 81.012f;
			*(iParam0 + 320) = { -3447.594f, 23.11f, 2499.735f };
			iParam0->f_428 = -248.865f;
			*(iParam0 + 332) = { -3439.235f, 23.568f, 2497.12f };
			iParam0->f_432 = -133.729f;
			*(iParam0 + 344) = { -3439.446f, 23.589f, 2500.905f };
			iParam0->f_436 = -51.482f;
			*(iParam0 + 356) = { -3469.012f, 21.584f, 2492.979f };
			iParam0->f_440 = 333.678f;
			*(iParam0 + 368) = { -3464.167f, 21.781f, 2495.026f };
			iParam0->f_444 = 361.907f;
			*(iParam0 + 380) = { -3428.34f, 24.077f, 2495.796f };
			iParam0->f_448 = 97.657f;
			*(iParam0 + 392) = { -3428.279f, 24.059f, 2499.195f };
			iParam0->f_452 = -294.858f;
			*(iParam0 + 404) = { -3428.886f, 23.983f, 2502.291f };
			iParam0->f_456 = 109.765f;
			iParam0->f_508 = 397;
			iParam0->f_512 = 405;
			iParam0->f_516 = 76;
			iParam0->f_464 = "rand_idle_stand";
			iParam0->f_468 = "rand_idle_nearwall";
			iParam0->f_472 = "look_distance_binocs";
			iParam0->f_476 = "sit_ground_smoke";
			iParam0->f_480 = "sit_ground_drink";
			return 1;
			break;
		
		case 0x00000009:
			iParam0->f_4 = 1;
			iParam0->f_8 = 1;
			iParam0->f_12 = 5;
			Function_171(iParam0 + 16, 1);
			Function_171(iParam0 + 16, 2);
			Function_171(iParam0 + 16, 4);
			Function_171(iParam0 + 16, 8);
			Function_171(iParam0 + 16, 16);
			Function_171(iParam0 + 24, 1);
			*(iParam0 + 32) = { -1864.28f, 25.66f, 3302.02f };
			*(iParam0 + 104) = { -1868.72f, 24.9242f, 3306.34f };
			iParam0->f_240 = -89.99975f;
			*(iParam0 + 116) = { -1868.69f, 24.9242f, 3304.97f };
			iParam0->f_244 = -86.99978f;
			*(iParam0 + 128) = { -1868.72f, 24.924f, 3302.9f };
			iParam0->f_248 = -98.40996f;
			*(iParam0 + 140) = { -1865.04f, 25.6375f, 3300.95f };
			iParam0->f_252 = 176.9998f;
			*(iParam0 + 152) = { -1863.99f, 25.6389f, 3300.97f };
			iParam0->f_256 = -179.9999f;
			*(iParam0 + 200) = { -1862.495f, 25.664f, 3304.42f };
			iParam0->f_280 = -89.2f;
			*(iParam0 + 92) = { -1864.42f, 25.674f, 3306.345f };
			iParam0->f_236 = -56.932f;
			*(iParam0 + 284) = { -1864.862f, 25.674f, 3304.466f };
			iParam0->f_416 = 0.0f;
			*(iParam0 + 296) = { -2902.199f, 16.386f, 2946.815f };
			iParam0->f_420 = 114.53f;
			*(iParam0 + 308) = { -1873.356f, 24.896f, 3310.485f };
			iParam0->f_424 = 0.623f;
			*(iParam0 + 320) = { -1872.139f, 24.92f, 3300.956f };
			iParam0->f_428 = 77.585f;
			*(iParam0 + 332) = { -1858.381f, 24.984f, 3304.77f };
			iParam0->f_432 = 26.821f;
			*(iParam0 + 344) = { -1860.552f, 24.924f, 3307.563f };
			iParam0->f_436 = 164.044f;
			*(iParam0 + 212) = { -1871.698f, 24.924f, 3305.057f };
			iParam0->f_272 = 79.722f;
			*(iParam0 + 224) = { -1875.491f, 24.835f, 3300.441f };
			iParam0->f_276 = 91.447f;
			*(iParam0 + 356) = { -1872.12f, 24.921f, 3303.856f };
			iParam0->f_440 = 261.993f;
			*(iParam0 + 368) = { -1872.723f, 24.921f, 3306.976f };
			iParam0->f_444 = 289.613f;
			*(iParam0 + 380) = { -1850.137f, 24.398f, 3309.046f };
			iParam0->f_448 = 109.765f;
			*(iParam0 + 392) = { -1851.146f, 24.532f, 3312.827f };
			iParam0->f_452 = 67.212f;
			*(iParam0 + 404) = { -1851.819f, 24.731f, 3315.765f };
			iParam0->f_456 = -306.112f;
			iParam0->f_508 = 486;
			iParam0->f_512 = 494;
			iParam0->f_516 = 78;
			iParam0->f_464 = "smoking_stand";
			iParam0->f_468 = "stand_lookdistance_w_any";
			iParam0->f_472 = "sit_ground_campfire_tend";
			iParam0->f_476 = "rand_idle_stand";
			iParam0->f_480 = "stand_lookdistance_w_any";
			return 1;
			break;
		
		case 0x0000000A:
			*(iParam0 + 92) = { -2832.227f, 20.209f, 3075.762f };
			iParam0->f_236 = -3.07f;
			*(iParam0 + 284) = { -2830.373f, 20.075f, 3077.06f };
			iParam0->f_416 = -49.594f;
			*(iParam0 + 296) = { -2826.955f, 20.214f, 3077.9f };
			iParam0->f_420 = 319.696f;
			*(iParam0 + 308) = { -2832.744f, 20.214f, 3074.063f };
			iParam0->f_424 = 267.808f;
			*(iParam0 + 320) = { -2832.834f, 20.214f, 3078.073f };
			iParam0->f_428 = 322.501f;
			*(iParam0 + 332) = { -2829.047f, 20.214f, 3074.01f };
			iParam0->f_432 = 106.676f;
			*(iParam0 + 344) = { -2828.971f, 20.214f, 3078.144f };
			iParam0->f_436 = 32.525f;
			*(iParam0 + 356) = { -2811.083f, 20.081f, 3077.154f };
			iParam0->f_440 = 111.684f;
			*(iParam0 + 368) = { -2810.745f, 20.068f, 3080.057f };
			iParam0->f_444 = 87.989f;
			*(iParam0 + 380) = { -2846.263f, 19.079f, 3081.674f };
			iParam0->f_448 = -65.932f;
			*(iParam0 + 392) = { -2844.673f, 19.075f, 3084.467f };
			iParam0->f_452 = -62.778f;
			*(iParam0 + 404) = { -2843.999f, 19.117f, 3088.225f };
			iParam0->f_456 = -110.34f;
			iParam0->f_508 = 486;
			iParam0->f_512 = 494;
			iParam0->f_516 = 79;
			iParam0->f_464 = "look_out_window_L";
			iParam0->f_468 = "stand_guntricks_e_any";
			iParam0->f_472 = "look_distance_binocs";
			iParam0->f_476 = "sit_ground_smoke";
			iParam0->f_480 = "look_distance_binocs";
			return 1;
			break;
		
		case 0x0000000B:
			*(iParam0 + 92) = { -1272.701f, 109.427f, 2763.055f };
			iParam0->f_236 = 29.99f;
			*(iParam0 + 284) = { -1274.066f, 109.427f, 2764.018f };
			iParam0->f_416 = -55.118f;
			*(iParam0 + 296) = { -1278.487f, 109.427f, 2761.758f };
			iParam0->f_420 = 63.9346f;
			*(iParam0 + 308) = { -1262.722f, 109.427f, 2760.963f };
			iParam0->f_424 = -80.99f;
			*(iParam0 + 320) = { -1304.522f, 111.436f, 2730.135f };
			iParam0->f_428 = 122.76f;
			*(iParam0 + 332) = { -1292.069f, 109.67f, 2775.973f };
			iParam0->f_432 = 44.4f;
			*(iParam0 + 344) = { -1265.553f, 109.427f, 2745.011f };
			iParam0->f_436 = -98.76f;
			*(iParam0 + 356) = { -1246.312f, 109.427f, 2747.819f };
			iParam0->f_440 = 182.339f;
			*(iParam0 + 368) = { -1243.976f, 109.427f, 2747.764f };
			iParam0->f_444 = 167.543f;
			*(iParam0 + 380) = { -1300.97f, 108.586f, 2749.941f };
			iParam0->f_448 = -26.038f;
			*(iParam0 + 392) = { -1297.268f, 108.688f, 2751.153f };
			iParam0->f_452 = 5.012f;
			*(iParam0 + 404) = { -1292.78f, 108.424f, 2750.432f };
			iParam0->f_456 = 4.55f;
			iParam0->f_508 = 477;
			iParam0->f_512 = 485;
			iParam0->f_516 = 78;
			iParam0->f_464 = "rand_idle_stand_nospawn";
			iParam0->f_468 = "smoking_stand";
			iParam0->f_472 = "mex_gateGuards";
			iParam0->f_476 = "stand_lookdistance_w_any";
			iParam0->f_480 = "stand_lookdistance_w_any";
			return 1;
			break;
		
		case 0x0000000C:
			iParam0->f_4 = 1;
			iParam0->f_8 = 1;
			iParam0->f_12 = 4;
			Function_171(iParam0 + 16, 1);
			Function_171(iParam0 + 16, 2);
			Function_171(iParam0 + 16, 4);
			Function_171(iParam0 + 16, 8);
			Function_171(iParam0 + 24, 1);
			*(iParam0 + 32) = { -2830.17f, 50.33f, 2415.78f };
			*(iParam0 + 104) = { -2832.45f, 50.0466f, 2420.44f };
			iParam0->f_240 = 12.00024f;
			*(iParam0 + 116) = { -2829.74f, 50.1411f, 2419.64f };
			iParam0->f_244 = 15.00032f;
			*(iParam0 + 128) = { -2828.89f, 50.3678f, 2416.18f };
			iParam0->f_248 = 104.9996f;
			*(iParam0 + 140) = { -2829.24f, 50.3678f, 2415.13f };
			iParam0->f_252 = 104.9996f;
			*(iParam0 + 200) = { -2833.559f, 50.331f, 2416.961f };
			iParam0->f_280 = -89.2f;
			*(iParam0 + 92) = { -2833.559f, 50.331f, 2416.961f };
			iParam0->f_236 = -168.258f;
			*(iParam0 + 284) = { -2821.639f, 49.173f, 2427.109f };
			iParam0->f_416 = -119.337f;
			*(iParam0 + 296) = { -2835.485f, 50.331f, 2416.255f };
			iParam0->f_420 = 231.268f;
			*(iParam0 + 308) = { -2833.374f, 50.331f, 2418.789f };
			iParam0->f_424 = 338.044f;
			*(iParam0 + 320) = { -2833.52f, 50.332f, 2414.594f };
			iParam0->f_428 = 254.386f;
			*(iParam0 + 332) = { -2831.958f, 50.332f, 2414.271f };
			iParam0->f_432 = 200.957f;
			*(iParam0 + 344) = { -2830.995f, 50.331f, 2418.192f };
			iParam0->f_436 = 350.198f;
			*(iParam0 + 212) = { -2825.655f, 50.111f, 2414.417f };
			iParam0->f_272 = 213.931f;
			*(iParam0 + 224) = { -2829.398f, 50.356f, 2412.87f };
			iParam0->f_276 = 224.086f;
			*(iParam0 + 356) = { -2815.583f, 49.017f, 2430.97f };
			iParam0->f_440 = 342.394f;
			*(iParam0 + 368) = { -2812.155f, 48.658f, 2430.972f };
			iParam0->f_444 = 6.16f;
			*(iParam0 + 380) = { -2827.84f, 49.976f, 2410.743f };
			iParam0->f_448 = -80.811f;
			*(iParam0 + 392) = { -2830.188f, 49.89f, 2408.717f };
			iParam0->f_452 = 317.22f;
			*(iParam0 + 404) = { -2832.734f, 49.902f, 2407.827f };
			iParam0->f_456 = 321.988f;
			iParam0->f_508 = 397;
			iParam0->f_512 = 405;
			iParam0->f_516 = 79;
			iParam0->f_464 = "rand_idle_nearwall";
			iParam0->f_468 = "stand_lookdistance_w_any";
			iParam0->f_472 = "look_distance_binocs";
			iParam0->f_476 = "rand_idle_stand";
			iParam0->f_480 = "smoking_stand";
			return 1;
			break;
		
		case 0x0000000D:
			*(iParam0 + 92) = { -2867.112f, 82.255f, 2162.143f };
			iParam0->f_236 = 110.078f;
			*(iParam0 + 284) = { -2866.419f, 82.234f, 2164.325f };
			iParam0->f_416 = 31.229f;
			*(iParam0 + 296) = { -2850.979f, 80.521f, 2154.977f };
			iParam0->f_420 = 164.031f;
			*(iParam0 + 308) = { -2884.095f, 78.701f, 2174.188f };
			iParam0->f_424 = 156.755f;
			*(iParam0 + 320) = { -2852.32f, 74.649f, 2158.667f };
			iParam0->f_428 = 197.574f;
			*(iParam0 + 332) = { -2858.007f, 73.678f, 2162.392f };
			iParam0->f_432 = 236.86f;
			*(iParam0 + 344) = { -2882.746f, 72.493f, 2184.76f };
			iParam0->f_436 = 218.101f;
			*(iParam0 + 356) = { -2883.305f, 61.315f, 2226.45f };
			iParam0->f_440 = -27.584f;
			*(iParam0 + 368) = { -2883.679f, 61.567f, 2223.738f };
			iParam0->f_444 = -42.562f;
			*(iParam0 + 380) = { -2874.792f, 63.259f, 2214.952f };
			iParam0->f_448 = -255.969f;
			*(iParam0 + 392) = { -2876.241f, 63.709f, 2212.9f };
			iParam0->f_452 = 90.764f;
			*(iParam0 + 404) = { -2878.6f, 63.473f, 2211.664f };
			iParam0->f_456 = 161.002f;
			iParam0->f_508 = 486;
			iParam0->f_512 = 494;
			iParam0->f_516 = 77;
			iParam0->f_464 = "rand_idle_stand_nospawn";
			iParam0->f_468 = "smoking_stand";
			iParam0->f_472 = "mex_gateGuards";
			iParam0->f_476 = "stand_lookdistance_w_any";
			iParam0->f_480 = "stand_lookdistance_w_any";
			return 1;
			break;
		
		case 0x0000000E:
			*(iParam0 + 92) = { -3133.579f, 56.069f, 3318.745f };
			iParam0->f_236 = 23.401f;
			*(iParam0 + 284) = { -3140.0f, 57.274f, 3321.29f };
			iParam0->f_416 = 123.934f;
			*(iParam0 + 296) = { -3126.042f, 55.027f, 3326.012f };
			iParam0->f_420 = 196.906f;
			*(iParam0 + 308) = { -3133.949f, 56.603f, 3310.508f };
			iParam0->f_424 = 34.806f;
			*(iParam0 + 320) = { -3122.084f, 70.286f, 3310.626f };
			iParam0->f_428 = -60.894f;
			*(iParam0 + 332) = { -3126.811f, 71.742f, 3317.18f };
			iParam0->f_432 = -229.938f;
			*(iParam0 + 344) = { -3213.753f, 51.393f, 3308.028f };
			iParam0->f_436 = 69.139f;
			*(iParam0 + 356) = { -3164.914f, 40.289f, 3361.648f };
			iParam0->f_440 = 168.955f;
			*(iParam0 + 368) = { -3161.107f, 40.583f, 3362.443f };
			iParam0->f_444 = 206.087f;
			*(iParam0 + 380) = { -3171.199f, 39.153f, 3269.472f };
			iParam0->f_448 = -11.678f;
			*(iParam0 + 392) = { -3167.472f, 39.153f, 3268.428f };
			iParam0->f_452 = -3.977f;
			*(iParam0 + 404) = { -3163.745f, 39.153f, 3269.671f };
			iParam0->f_456 = -42.562f;
			iParam0->f_508 = 397;
			iParam0->f_512 = 405;
			iParam0->f_516 = 77;
			iParam0->f_464 = "stand_lookdistance_w_any";
			iParam0->f_468 = "look_distance_binocs";
			iParam0->f_472 = "rand_idle_stand";
			iParam0->f_476 = "rand_idle_stand";
			iParam0->f_480 = "smoking_stand";
			return 1;
			break;
		
		case 0x0000000F:
			*(iParam0 + 92) = { -2336.926f, 17.067f, 3170.493f };
			iParam0->f_236 = -2.14f;
			*(iParam0 + 284) = { -2336.072f, 17.067f, 3169.268f };
			iParam0->f_416 = -86.214f;
			*(iParam0 + 296) = { -2336.887f, 17.067f, 3166.954f };
			iParam0->f_420 = -2.14f;
			*(iParam0 + 308) = { -2330.964f, 17.067f, 3163.609f };
			iParam0->f_424 = -23.4f;
			*(iParam0 + 320) = { -2327.604f, 17.067f, 3172.758f };
			iParam0->f_428 = -118.706f;
			*(iParam0 + 332) = { -2335.599f, 17.067f, 3174.808f };
			iParam0->f_432 = 197.731f;
			*(iParam0 + 344) = { -2340.001f, 17.067f, 3172.798f };
			iParam0->f_436 = -13.714f;
			*(iParam0 + 356) = { -2322.803f, 17.067f, 3145.059f };
			iParam0->f_440 = 311.211f;
			*(iParam0 + 368) = { -2320.44f, 17.067f, 3146.652f };
			iParam0->f_444 = -25.28f;
			*(iParam0 + 380) = { -2316.756f, 17.07f, 3148.32f };
			iParam0->f_448 = 5.107f;
			*(iParam0 + 392) = { -2328.458f, 17.067f, 3180.156f };
			iParam0->f_452 = 58.412f;
			*(iParam0 + 404) = { -2325.201f, 17.067f, 3177.577f };
			iParam0->f_456 = 58.218f;
			iParam0->f_508 = 486;
			iParam0->f_512 = 494;
			iParam0->f_516 = 22;
			iParam0->f_464 = "rand_idle_stand_nospaw";
			iParam0->f_468 = "look_distance_binocs";
			iParam0->f_472 = "look_distance_binocs";
			iParam0->f_476 = "rand_idle_nearwall";
			iParam0->f_480 = "pee";
			return 1;
			break;
		
		case 0x00000010:
			*(iParam0 + 92) = { -2337.728f, 17.067f, 3170.294f };
			iParam0->f_236 = 9.971f;
			*(iParam0 + 284) = { -1946.763f, 30.337f, 3468.948f };
			iParam0->f_416 = -88.999f;
			*(iParam0 + 296) = { -1950.671f, 30.338f, 3467.57f };
			iParam0->f_420 = 237.607f;
			*(iParam0 + 308) = { -1950.803f, 30.338f, 3470.875f };
			iParam0->f_424 = 283.753f;
			*(iParam0 + 320) = { -1948.542f, 30.338f, 3470.916f };
			iParam0->f_428 = 342.294f;
			*(iParam0 + 332) = { -1946.635f, 30.338f, 3470.909f };
			iParam0->f_432 = 314.856f;
			*(iParam0 + 344) = { -1946.089f, 30.338f, 3466.877f };
			iParam0->f_436 = 171.423f;
			*(iParam0 + 356) = { -1931.435f, 31.592f, 3460.451f };
			iParam0->f_440 = 5.107f;
			*(iParam0 + 368) = { -1929.337f, 31.849f, 3461.238f };
			iParam0->f_444 = 58.412f;
			*(iParam0 + 380) = { -1927.96f, 31.946f, 3462.877f };
			iParam0->f_448 = 58.218f;
			*(iParam0 + 392) = { -1949.424f, 30.218f, 3461.784f };
			iParam0->f_452 = -206.774f;
			*(iParam0 + 404) = { -1946.031f, 30.195f, 3462.501f };
			iParam0->f_456 = 172.571f;
			iParam0->f_508 = 397;
			iParam0->f_512 = 405;
			iParam0->f_516 = 76;
			iParam0->f_464 = "look_distance_binocs";
			iParam0->f_468 = "stand_lookdistance_w_any";
			iParam0->f_472 = "sit_ground_only";
			iParam0->f_476 = "sit_ground_smoke";
			iParam0->f_480 = "sit_ground_only";
			return 1;
			break;
		
		case 0x00000011:
			*(iParam0 + 92) = { -4314.102f, 5.097f, 3744.501f };
			iParam0->f_236 = 43.016f;
			*(iParam0 + 284) = { -4317.295f, 5.097f, 3743.768f };
			iParam0->f_416 = -91.905f;
			*(iParam0 + 296) = { -4310.602f, 5.097f, 3745.569f };
			iParam0->f_420 = 37.237f;
			*(iParam0 + 308) = { -4313.688f, 5.097f, 3745.833f };
			iParam0->f_424 = 345.341f;
			*(iParam0 + 320) = { -4314.063f, 5.097f, 3742.018f };
			iParam0->f_428 = 175.597f;
			*(iParam0 + 332) = { -4317.56f, 5.097f, 3741.946f };
			iParam0->f_432 = 225.245f;
			*(iParam0 + 344) = { -4317.576f, 5.097f, 3745.841f };
			iParam0->f_436 = 315.983f;
			*(iParam0 + 356) = { -4290.656f, 3.974f, 3728.148f };
			iParam0->f_440 = -91.776f;
			*(iParam0 + 368) = { -4290.388f, 3.801f, 3730.024f };
			iParam0->f_444 = -42.776f;
			*(iParam0 + 380) = { -4315.129f, 4.818f, 3751.202f };
			iParam0->f_448 = -11.666f;
			*(iParam0 + 392) = { -4313.023f, 4.706f, 3751.904f };
			iParam0->f_452 = 0.707f;
			*(iParam0 + 404) = { -4308.537f, 4.79f, 3750.439f };
			iParam0->f_456 = -24.694f;
			iParam0->f_508 = 397;
			iParam0->f_512 = 405;
			iParam0->f_516 = 77;
			iParam0->f_464 = "look_distance_binocs";
			iParam0->f_468 = "smoking_stand";
			iParam0->f_472 = "rand_idle_nearwall";
			iParam0->f_476 = "sit_barrel";
			iParam0->f_480 = "look_distance_binocs";
			return 1;
			break;
		
		case 0x00000012:
			iParam0->f_4 = 2;
			iParam0->f_8 = 2;
			iParam0->f_12 = 7;
			Function_171(iParam0 + 16, 1);
			Function_171(iParam0 + 16, 2);
			Function_171(iParam0 + 16, 4);
			Function_171(iParam0 + 16, 8);
			Function_171(iParam0 + 16, 16);
			Function_171(iParam0 + 16, 32);
			Function_171(iParam0 + 16, 64);
			Function_171(iParam0 + 24, 1);
			Function_171(iParam0 + 28, 2);
			*(iParam0 + 32) = { -4015.39f, 21.47f, 2401.58f };
			*(iParam0 + 44) = { -4019.6f, 21.47f, 2397.61f };
			*(iParam0 + 104) = { -4017.411f, 21.0644f, 2403.306f };
			iParam0->f_240 = 18.0f;
			*(iParam0 + 116) = { -4016.05f, 21.47f, 2402.87f };
			iParam0->f_244 = 21.0f;
			*(iParam0 + 128) = { -4014.66f, 21.47f, 2402.34f };
			iParam0->f_248 = 26.99f;
			*(iParam0 + 140) = { -4012.81f, 21.0831f, 2401.69f };
			iParam0->f_252 = 20.99f;
			*(iParam0 + 152) = { -4021.25f, 21.0831f, 2396.7f };
			iParam0->f_256 = -158.9996f;
			*(iParam0 + 164) = { -4019.22f, 21.0901f, 2395.92f };
			iParam0->f_260 = -155.9994f;
			*(iParam0 + 176) = { -4018.17f, 21.0922f, 2395.57f };
			iParam0->f_264 = -158.9997f;
			*(iParam0 + 200) = { -4013.456f, 21.468f, 2397.704f };
			iParam0->f_280 = -70.274f;
			*(iParam0 + 92) = { -4017.441f, 21.468f, 2397.854f };
			iParam0->f_236 = 108.646f;
			*(iParam0 + 284) = { -4015.457f, 21.468f, 2398.76f };
			iParam0->f_416 = 172.429f;
			*(iParam0 + 296) = { -4013.634f, 21.468f, 2397.108f };
			iParam0->f_420 = 158.005f;
			*(iParam0 + 308) = { -4013.326f, 21.468f, 2399.415f };
			iParam0->f_424 = 73.958f;
			*(iParam0 + 320) = { -4016.929f, 21.468f, 2397.175f };
			iParam0->f_428 = 198.278f;
			*(iParam0 + 332) = { -4018.968f, 21.468f, 2399.702f };
			iParam0->f_432 = 248.481f;
			*(iParam0 + 344) = { -4018.745f, 21.469f, 2400.946f };
			iParam0->f_436 = 16.41f;
			*(iParam0 + 212) = { -4007.415f, 21.083f, 2402.38f };
			iParam0->f_272 = 234.336f;
			*(iParam0 + 224) = { -4008.202f, 20.972f, 2395.384f };
			iParam0->f_276 = 193.987f;
			*(iParam0 + 356) = { -4019.287f, 20.967f, 2406.868f };
			iParam0->f_440 = 8.376f;
			*(iParam0 + 368) = { -4017.313f, 20.995f, 2406.151f };
			iParam0->f_444 = 33.251f;
			*(iParam0 + 380) = { -4020.812f, 21.39f, 2389.644f };
			iParam0->f_448 = -136.243f;
			*(iParam0 + 392) = { -4017.785f, 21.265f, 2386.962f };
			iParam0->f_452 = 177.627f;
			*(iParam0 + 404) = { -4012.265f, 21.024f, 2388.6f };
			iParam0->f_456 = 120.35f;
			iParam0->f_508 = 467;
			iParam0->f_512 = 476;
			iParam0->f_516 = 22;
			iParam0->f_464 = "rand_idle_nearwall";
			iParam0->f_468 = "rand_idle_stand";
			iParam0->f_472 = "sit_barrel";
			iParam0->f_476 = "look_distance_binocs";
			iParam0->f_480 = "look_distance_binocs";
			return 1;
			break;
		
		case 0x00000013:
			*(iParam0 + 92) = { -276.02f, 73.201f, 2393.458f };
			iParam0->f_236 = 179.686f;
			*(iParam0 + 284) = { -274.324f, 73.201f, 2393.741f };
			iParam0->f_416 = 51.013f;
			*(iParam0 + 296) = { -289.984f, 72.456f, 2419.312f };
			iParam0->f_420 = -183.278f;
			*(iParam0 + 308) = { -273.119f, 73.18f, 2396.791f };
			iParam0->f_424 = 270.616f;
			*(iParam0 + 320) = { -273.986f, 73.155f, 2398.214f };
			iParam0->f_428 = 270.616f;
			*(iParam0 + 332) = { -277.702f, 73.155f, 2397.789f };
			iParam0->f_432 = 121.425f;
			*(iParam0 + 344) = { -278.525f, 73.138f, 2390.977f };
			iParam0->f_436 = 44.233f;
			*(iParam0 + 356) = { -292.719f, 75.262f, 2378.368f };
			iParam0->f_440 = 137.598f;
			*(iParam0 + 368) = { -297.222f, 75.295f, 2379.061f };
			iParam0->f_444 = 207.699f;
			*(iParam0 + 380) = { -286.079f, 75.299f, 2369.13f };
			iParam0->f_448 = 248.664f;
			*(iParam0 + 392) = { -284.174f, 75.289f, 2372.132f };
			iParam0->f_452 = -79.602f;
			*(iParam0 + 404) = { -282.211f, 74.962f, 2375.943f };
			iParam0->f_456 = -18.74f;
			iParam0->f_508 = 397;
			iParam0->f_512 = 405;
			iParam0->f_516 = 76;
			iParam0->f_464 = "stand_lookdistance_w_any";
			iParam0->f_468 = "nsit_docks";
			iParam0->f_472 = "look_out_window_R";
			iParam0->f_476 = "look_distance_binocs";
			iParam0->f_480 = "look_distance_binocs";
			return 1;
			break;
		
		case 0x00000014:
			*(iParam0 + 92) = { -1910.925f, 29.066f, 2263.904f };
			iParam0->f_236 = 0.0f;
			*(iParam0 + 284) = { -1911.897f, 29.17f, 2259.949f };
			iParam0->f_416 = 0.0f;
			*(iParam0 + 284) = { -1920.034f, 31.008f, 2265.405f };
			iParam0->f_416 = 221.236f;
			*(iParam0 + 296) = { -1892.769f, 30.055f, 2254.382f };
			iParam0->f_420 = 221.236f;
			*(iParam0 + 308) = { -1877.283f, 26.099f, 2289.581f };
			iParam0->f_424 = 152.442f;
			*(iParam0 + 320) = { -1895.984f, 26.887f, 2247.959f };
			iParam0->f_428 = 333.899f;
			*(iParam0 + 344) = { -1909.376f, 29.083f, 2265.966f };
			iParam0->f_436 = 221.236f;
			*(iParam0 + 356) = { -1897.51f, 26.15f, 2271.694f };
			iParam0->f_440 = 19.763f;
			*(iParam0 + 368) = { -1894.347f, 26.128f, 2268.736f };
			iParam0->f_444 = 48.841f;
			*(iParam0 + 380) = { -1917.895f, 28.101f, 2245.381f };
			iParam0->f_448 = -178.708f;
			*(iParam0 + 392) = { -1921.323f, 28.113f, 2244.031f };
			iParam0->f_452 = 199.115f;
			*(iParam0 + 404) = { -1926.575f, 28.202f, 2244.469f };
			iParam0->f_456 = -174.429f;
			iParam0->f_508 = 486;
			iParam0->f_512 = 494;
			iParam0->f_516 = 78;
			iParam0->f_464 = "look_distance_binocs";
			iParam0->f_468 = "stand_lookdistance_w_any";
			iParam0->f_472 = "look_distance_binocs";
			iParam0->f_476 = "stand_lookdistance_w_any";
			iParam0->f_480 = "look_distance_binocs";
			return 1;
			break;
		
		case 0x00000015:
			iParam0->f_4 = 1;
			iParam0->f_8 = 1;
			iParam0->f_12 = 4;
			Function_171(iParam0 + 16, 1);
			Function_171(iParam0 + 16, 2);
			Function_171(iParam0 + 16, 4);
			Function_171(iParam0 + 16, 8);
			Function_171(iParam0 + 24, 1);
			*(iParam0 + 32) = { 124.8f, 72.42f, 2674.02f };
			*(iParam0 + 104) = { 125.233f, 72.4417f, 2675.04f };
			iParam0->f_240 = 27.58978f;
			*(iParam0 + 116) = { 119.64f, 72.3106f, 2670.55f };
			iParam0->f_244 = -68.4101f;
			*(iParam0 + 128) = { 120.486f, 72.2827f, 2672.62f };
			iParam0->f_248 = -65.41f;
			*(iParam0 + 140) = { 121.484f, 72.2827f, 2674.54f };
			iParam0->f_252 = -62.41014f;
			*(iParam0 + 200) = { 121.695f, 72.413f, 2670.63f };
			iParam0->f_280 = 115.156f;
			*(iParam0 + 92) = { 123.42f, 72.41f, 2670.18f };
			iParam0->f_236 = -63.854f;
			*(iParam0 + 284) = { 124.188f, 72.409f, 2671.846f };
			iParam0->f_416 = 180.71f;
			*(iParam0 + 296) = { 129.244f, 72.501f, 2674.226f };
			iParam0->f_420 = 222.542f;
			*(iParam0 + 308) = { 121.386f, 72.413f, 2669.545f };
			iParam0->f_424 = 222.542f;
			*(iParam0 + 320) = { 125.005f, 72.412f, 2671.428f };
			iParam0->f_428 = 163.679f;
			*(iParam0 + 332) = { 122.952f, 72.413f, 2673.766f };
			iParam0->f_432 = 305.582f;
			*(iParam0 + 344) = { 121.713f, 72.413f, 2670.76f };
			iParam0->f_436 = 210.612f;
			*(iParam0 + 356) = { 92.981f, 71.278f, 2684.761f };
			iParam0->f_440 = 195.17f;
			*(iParam0 + 368) = { 96.374f, 71.278f, 2684.102f };
			iParam0->f_444 = 211.049f;
			*(iParam0 + 380) = { 99.038f, 71.278f, 2683.421f };
			iParam0->f_448 = -178.708f;
			*(iParam0 + 392) = { 104.447f, 71.802f, 2673.734f };
			iParam0->f_452 = 108.966f;
			*(iParam0 + 404) = { 107.48f, 72.023f, 2671.56f };
			iParam0->f_456 = 105.112f;
			iParam0->f_508 = 397;
			iParam0->f_512 = 405;
			iParam0->f_516 = 78;
			iParam0->f_464 = "look_distance_binocs";
			iParam0->f_468 = "look_distance_binocs";
			iParam0->f_472 = "rand_idle_nearwall";
			iParam0->f_476 = "stand_lookdistance_w_any";
			iParam0->f_480 = "smoking_stand";
			return 1;
			break;
		
		case 0x00000016:
			*(iParam0 + 92) = { -2302.359f, 24.248f, 3007.561f };
			iParam0->f_236 = 69.576f;
			*(iParam0 + 284) = { -2302.725f, 24.279f, 3009.553f };
			iParam0->f_416 = -136.418f;
			*(iParam0 + 296) = { -2301.099f, 24.287f, 3008.008f };
			iParam0->f_420 = 104.512f;
			*(iParam0 + 308) = { -2310.734f, 24.094f, 3005.089f };
			iParam0->f_424 = 285.688f;
			*(iParam0 + 320) = { -2307.478f, 24.094f, 3008.271f };
			iParam0->f_428 = 357.122f;
			*(iParam0 + 332) = { -2311.779f, 24.094f, 3006.169f };
			iParam0->f_432 = 163.369f;
			*(iParam0 + 344) = { -2308.875f, 24.094f, 3012.738f };
			iParam0->f_436 = 60.202f;
			*(iParam0 + 356) = { -2285.946f, 23.773f, 3003.648f };
			iParam0->f_440 = 276.733f;
			*(iParam0 + 368) = { -2287.244f, 23.374f, 3005.345f };
			iParam0->f_444 = 266.906f;
			*(iParam0 + 380) = { -2318.237f, 23.09f, 3000.99f };
			iParam0->f_448 = -112.242f;
			*(iParam0 + 392) = { -2320.324f, 23.09f, 3003.359f };
			iParam0->f_452 = -108.476f;
			*(iParam0 + 404) = { -2318.79f, 23.09f, 3006.107f };
			iParam0->f_456 = -66.319f;
			iParam0->f_508 = 486;
			iParam0->f_512 = 494;
			iParam0->f_516 = 76;
			iParam0->f_464 = "rand_idle_nearwall";
			iParam0->f_468 = "look_out_window_L";
			iParam0->f_472 = "rand_idle_nearwall_shoulder_L";
			iParam0->f_476 = "look_distance_binocs";
			iParam0->f_480 = "look_distance_binocs";
			return 1;
			break;
		
		case 0x00000017:
			*(iParam0 + 92) = { -2006.736f, 42.176f, 3043.272f };
			iParam0->f_236 = 88.686f;
			*(iParam0 + 284) = { -2006.836f, 42.042f, 3045.16f };
			iParam0->f_416 = 31.174f;
			*(iParam0 + 296) = { -2007.755f, 42.041f, 3041.964f };
			iParam0->f_420 = 228.602f;
			*(iParam0 + 308) = { -2012.868f, 42.041f, 3048.789f };
			iParam0->f_424 = 282.164f;
			*(iParam0 + 320) = { -2009.239f, 42.129f, 3051.271f };
			iParam0->f_428 = 331.148f;
			*(iParam0 + 332) = { -2006.306f, 42.041f, 3052.617f };
			iParam0->f_432 = 0.34f;
			*(iParam0 + 344) = { -2001.105f, 42.041f, 3046.785f };
			iParam0->f_436 = 77.931f;
			*(iParam0 + 356) = { -2027.215f, 42.041f, 3014.213f };
			iParam0->f_440 = 300.121f;
			*(iParam0 + 368) = { -2023.29f, 42.041f, 3020.031f };
			iParam0->f_444 = 342.792f;
			*(iParam0 + 380) = { -2000.098f, 42.041f, 3036.175f };
			iParam0->f_448 = -108.44f;
			*(iParam0 + 392) = { -1999.392f, 42.041f, 3033.619f };
			iParam0->f_452 = -90.929f;
			*(iParam0 + 404) = { -2000.346f, 42.041f, 3030.437f };
			iParam0->f_456 = -92.428f;
			iParam0->f_508 = 486;
			iParam0->f_512 = 494;
			iParam0->f_516 = 22;
			iParam0->f_464 = "rand_idle_stand";
			iParam0->f_468 = "smoking_stand";
			iParam0->f_472 = "mex_gateGuards";
			iParam0->f_476 = "stand_lookdistance_w_any";
			iParam0->f_480 = "stand_lookdistance_w_any";
			return 1;
			break;
		
		case 0x00000018:
			iParam0->f_4 = 2;
			iParam0->f_8 = 5;
			iParam0->f_12 = 7;
			Function_171(iParam0 + 16, 1);
			Function_171(iParam0 + 16, 2);
			Function_171(iParam0 + 16, 4);
			Function_171(iParam0 + 16, 8);
			Function_171(iParam0 + 20, 16);
			Function_171(iParam0 + 20, 32);
			Function_171(iParam0 + 20, 64);
			Function_171(iParam0 + 24, 1);
			Function_171(iParam0 + 24, 2);
			Function_171(iParam0 + 24, 4);
			Function_171(iParam0 + 28, 8);
			Function_171(iParam0 + 28, 16);
			*(iParam0 + 32) = { -933.046f, 102.412f, 2754.824f };
			*(iParam0 + 44) = { -934.29f, 102.412f, 2753.085f };
			*(iParam0 + 56) = { -936.489f, 102.412f, 2749.95f };
			*(iParam0 + 68) = { -924.889f, 102.412f, 2749.364f };
			*(iParam0 + 80) = { -926.622f, 102.412f, 2746.998f };
			*(iParam0 + 104) = { -934.086f, 102.412f, 2754.75f };
			iParam0->f_240 = -51.43177f;
			*(iParam0 + 116) = { -934.93f, 102.412f, 2753.63f };
			iParam0->f_244 = -57.54f;
			*(iParam0 + 128) = { -936.926f, 102.403f, 2750.86f };
			iParam0->f_248 = -56.40995f;
			*(iParam0 + 140) = { -931.301f, 102.412f, 2758.66f };
			iParam0->f_252 = -56.43486f;
			*(iParam0 + 152) = { -924.354f, 102.412f, 2748.71f };
			iParam0->f_256 = 134.459f;
			*(iParam0 + 164) = { -925.075f, 102.412f, 2747.82f };
			iParam0->f_260 = 122.492f;
			*(iParam0 + 176) = { -925.893f, 102.412f, 2746.57f };
			iParam0->f_264 = 115.843f;
			*(iParam0 + 200) = { -932.868f, 102.415f, 2746.785f };
			iParam0->f_280 = 212.28f;
			*(iParam0 + 92) = { -929.793f, 102.412f, 2750.46f };
			iParam0->f_236 = -50.84f;
			*(iParam0 + 212) = { -940.871f, 102.342f, 2749.936f };
			iParam0->f_272 = 178.269f;
			*(iParam0 + 224) = { -939.418f, 102.266f, 2752.68f };
			iParam0->f_276 = 120.908f;
			*(iParam0 + 284) = { -930.626f, 102.4122f, 2752.0f };
			iParam0->f_416 = -28.78f;
			*(iParam0 + 296) = { -924.765f, 102.412f, 2753.702f };
			iParam0->f_420 = 72.373f;
			*(iParam0 + 308) = { -927.281f, 102.412f, 2754.368f };
			iParam0->f_424 = 69.79f;
			*(iParam0 + 320) = { -929.789f, 102.504f, 2756.111f };
			iParam0->f_428 = 341.777f;
			*(iParam0 + 332) = { -934.494f, 102.42f, 2747.736f };
			iParam0->f_432 = 269.014f;
			*(iParam0 + 344) = { -932.133f, 102.413f, 2746.273f };
			iParam0->f_436 = 145.15f;
			*(iParam0 + 356) = { -976.159f, 103.637f, 2719.504f };
			iParam0->f_440 = -191.58f;
			*(iParam0 + 368) = { -974.168f, 103.637f, 2720.047f };
			iParam0->f_444 = 486.238f;
			*(iParam0 + 380) = { -933.686f, 102.412f, 2758.172f };
			iParam0->f_448 = 297.957f;
			*(iParam0 + 392) = { -930.962f, 102.387f, 2762.141f };
			iParam0->f_452 = -89.501f;
			*(iParam0 + 404) = { -932.674f, 102.412f, 2759.572f };
			iParam0->f_456 = -38.718f;
			iParam0->f_508 = 477;
			iParam0->f_512 = 485;
			iParam0->f_516 = 79;
			iParam0->f_464 = "rand_idle_stand_nospawn";
			iParam0->f_468 = "smoking_stand";
			iParam0->f_472 = "mex_gateGuards";
			iParam0->f_476 = "stand_lookdistance_w_any";
			iParam0->f_480 = "stand_lookdistance_w_any";
			return 1;
			break;
		
		case 0x00000019:
			*(iParam0 + 92) = { -594.268f, 30.877f, 4008.359f };
			iParam0->f_236 = 170.652f;
			*(iParam0 + 284) = { -597.294f, 30.877f, 4005.67f };
			iParam0->f_416 = -138.782f;
			*(iParam0 + 296) = { -639.225f, 13.58f, 3993.509f };
			iParam0->f_420 = -292.51f;
			*(iParam0 + 308) = { -628.453f, 20.346f, 4004.586f };
			iParam0->f_424 = -336.107f;
			*(iParam0 + 320) = { -619.798f, 20.664f, 3987.649f };
			iParam0->f_428 = -308.869f;
			*(iParam0 + 332) = { -596.0f, 30.877f, 4002.884f };
			iParam0->f_432 = 43.992f;
			*(iParam0 + 344) = { -598.929f, 30.877f, 4007.492f };
			iParam0->f_436 = 115.375f;
			*(iParam0 + 356) = { -656.717f, 13.171f, 3987.879f };
			iParam0->f_440 = 206.407f;
			*(iParam0 + 368) = { -654.461f, 13.465f, 3985.152f };
			iParam0->f_444 = 227.436f;
			*(iParam0 + 380) = { -651.5f, 13.744f, 3982.614f };
			iParam0->f_448 = -118.83f;
			*(iParam0 + 392) = { -633.228f, 21.456f, 4015.153f };
			iParam0->f_452 = -24.598f;
			*(iParam0 + 404) = { -629.02f, 22.181f, 4014.968f };
			iParam0->f_456 = 0.56f;
			iParam0->f_508 = 516;
			iParam0->f_512 = 531;
			iParam0->f_516 = 241;
			iParam0->f_464 = "stand_lookdistance_w_any";
			iParam0->f_468 = "look_distance_binocs";
			iParam0->f_472 = "stand_lookdistance_w_any";
			iParam0->f_476 = "stand_lookdistance_w_any";
			iParam0->f_480 = "rand_idle_nearwall";
			return 1;
			break;
		
		case 0x0000001A:
			*(iParam0 + 92) = { -2229.454f, 23.263f, 4452.343f };
			iParam0->f_236 = 15.678f;
			*(iParam0 + 284) = { -2228.686f, 23.263f, 4453.672f };
			iParam0->f_416 = 269.799f;
			*(iParam0 + 296) = { -2227.613f, 23.264f, 4451.309f };
			iParam0->f_420 = 172.945f;
			*(iParam0 + 308) = { -2232.662f, 23.09f, 4453.425f };
			iParam0->f_424 = 301.728f;
			*(iParam0 + 320) = { -2235.676f, 23.09f, 4450.952f };
			iParam0->f_428 = 318.266f;
			*(iParam0 + 332) = { -2237.908f, 23.09f, 4450.775f };
			iParam0->f_432 = 167.035f;
			*(iParam0 + 344) = { -2234.18f, 23.084f, 4457.452f };
			iParam0->f_436 = 64.468f;
			*(iParam0 + 356) = { -2261.394f, 23.09f, 4470.363f };
			iParam0->f_440 = 16.854f;
			*(iParam0 + 368) = { -2258.274f, 23.09f, 4467.679f };
			iParam0->f_444 = 26.089f;
			*(iParam0 + 380) = { -2256.098f, 23.09f, 4464.197f };
			iParam0->f_448 = 42.078f;
			*(iParam0 + 392) = { -2235.659f, 22.666f, 4469.637f };
			iParam0->f_452 = -24.598f;
			*(iParam0 + 404) = { -2232.33f, 22.295f, 4469.952f };
			iParam0->f_456 = 0.56f;
			iParam0->f_508 = 496;
			iParam0->f_512 = 504;
			iParam0->f_516 = 241;
			iParam0->f_464 = "rand_idle_nearwall";
			iParam0->f_468 = "rand_idle_nearwall";
			iParam0->f_472 = "stand_lookdistance_w_any";
			iParam0->f_476 = "look_out_window_R";
			iParam0->f_480 = "look_distance_binocs";
			return 1;
			break;
		
		case 0x0000001B:
			iParam0->f_4 = 2;
			iParam0->f_8 = 2;
			iParam0->f_12 = 5;
			Function_171(iParam0 + 16, 1);
			Function_171(iParam0 + 16, 2);
			Function_171(iParam0 + 16, 4);
			Function_171(iParam0 + 20, 8);
			Function_171(iParam0 + 20, 16);
			Function_171(iParam0 + 24, 1);
			Function_171(iParam0 + 28, 2);
			*(iParam0 + 32) = { -2146.41f, 18.68f, 4968.09f };
			*(iParam0 + 44) = { -2148.09f, 18.6f, 4975.03f };
			*(iParam0 + 104) = { -2146.39f, 18.6664f, 4967.08f };
			iParam0->f_240 = -179.9999f;
			*(iParam0 + 116) = { -2149.77f, 18.6475f, 4967.08f };
			iParam0->f_244 = 173.9998f;
			*(iParam0 + 128) = { -2151.57f, 18.6481f, 4967.2f };
			iParam0->f_248 = -167.4099f;
			*(iParam0 + 140) = { -2149.26f, 18.5743f, 4974.89f };
			iParam0->f_252 = -83.4349f;
			*(iParam0 + 152) = { -2150.66f, 18.567f, 4974.58f };
			iParam0->f_256 = 0.565044f;
			*(iParam0 + 200) = { -2150.144f, 18.767f, 4969.001f };
			iParam0->f_280 = -10.0f;
			*(iParam0 + 92) = { -2150.144f, 18.769f, 4970.876f };
			iParam0->f_236 = -91.877f;
			*(iParam0 + 284) = { -2151.557f, 18.769f, 4968.783f };
			iParam0->f_416 = -2.067f;
			*(iParam0 + 296) = { -2151.326f, 18.923f, 4972.898f };
			iParam0->f_420 = 310.943f;
			*(iParam0 + 308) = { -2151.132f, 18.779f, 4969.101f };
			iParam0->f_424 = 258.013f;
			*(iParam0 + 320) = { -2144.955f, 18.687f, 4969.136f };
			iParam0->f_428 = 175.623f;
			*(iParam0 + 332) = { -2144.075f, 18.72f, 4976.095f };
			iParam0->f_432 = 60.675f;
			*(iParam0 + 344) = { -2143.88f, 18.554f, 4973.849f };
			iParam0->f_436 = 107.552f;
			*(iParam0 + 212) = { -2145.371f, 16.058f, 4946.544f };
			iParam0->f_272 = 35.385f;
			*(iParam0 + 224) = { -2142.939f, 17.556f, 4955.767f };
			iParam0->f_276 = 40.164f;
			*(iParam0 + 356) = { -2153.897f, 18.18f, 4961.988f };
			iParam0->f_440 = -180.427f;
			*(iParam0 + 368) = { -2151.259f, 18.206f, 4961.947f };
			iParam0->f_444 = 161.988f;
			*(iParam0 + 380) = { -2160.059f, 18.784f, 4975.642f };
			iParam0->f_448 = -66.278f;
			*(iParam0 + 392) = { -2160.758f, 18.991f, 4972.499f };
			iParam0->f_452 = -91.17f;
			*(iParam0 + 404) = { -2162.294f, 18.654f, 4970.544f };
			iParam0->f_456 = -94.479f;
			iParam0->f_508 = 406;
			iParam0->f_512 = 414;
			iParam0->f_516 = 240;
			iParam0->f_464 = "rand_idle_stand";
			iParam0->f_468 = "rand_idle_nearwall";
			iParam0->f_472 = "look_out_window_L";
			iParam0->f_476 = "rand_idle_nearwall";
			iParam0->f_480 = "rand_idle_stand";
			return 1;
			break;
		
		case 0x0000001C:
			*(iParam0 + 92) = { -3860.593f, 7.026f, 4319.981f };
			iParam0->f_236 = -90.815f;
			*(iParam0 + 284) = { -3859.166f, 7.134f, 4320.9f };
			iParam0->f_416 = 136.441f;
			*(iParam0 + 296) = { -3844.011f, 9.254f, 4311.946f };
			iParam0->f_420 = -21.903f;
			*(iParam0 + 308) = { -3863.951f, 7.777f, 4303.869f };
			iParam0->f_424 = -21.903f;
			*(iParam0 + 320) = { -3852.0f, 8.637f, 4312.0f };
			iParam0->f_428 = -64.114f;
			*(iParam0 + 332) = { -3832.0f, 12.518f, 4336.0f };
			iParam0->f_432 = -129.939f;
			*(iParam0 + 344) = { -3899.941f, 8.031f, 4340.052f };
			iParam0->f_436 = -228.003f;
			*(iParam0 + 356) = { -3888.227f, 7.087f, 4312.428f };
			iParam0->f_440 = -180.427f;
			*(iParam0 + 368) = { -3886.172f, 7.144f, 4312.964f };
			iParam0->f_444 = 153.52f;
			*(iParam0 + 380) = { -3883.771f, 7.16f, 4314.396f };
			iParam0->f_448 = 81.666f;
			*(iParam0 + 392) = { -3904.027f, 8.026f, 4346.417f };
			iParam0->f_452 = 2.248f;
			*(iParam0 + 404) = { -3907.203f, 8.013f, 4347.759f };
			iParam0->f_456 = -21.903f;
			iParam0->f_508 = 516;
			iParam0->f_512 = 531;
			iParam0->f_516 = 241;
			iParam0->f_464 = "look_distance_binocs";
			iParam0->f_468 = "look_distance_binocs";
			iParam0->f_472 = "rand_idle_stand";
			iParam0->f_476 = "rand_idle_stand";
			iParam0->f_480 = "look_distance_binocs";
			return 1;
			break;
		
		case 0x0000001D:
			*(iParam0 + 92) = { -2718.606f, 56.177f, 4626.842f };
			iParam0->f_236 = 82.944f;
			*(iParam0 + 284) = { -2720.237f, 56.14f, 4631.692f };
			iParam0->f_416 = 158.989f;
			*(iParam0 + 296) = { -2729.397f, 48.497f, 4677.15f };
			iParam0->f_420 = -110.579f;
			*(iParam0 + 308) = { -2741.735f, 54.206f, 4660.338f };
			iParam0->f_424 = -119.906f;
			*(iParam0 + 320) = { -2751.354f, 54.564f, 4652.214f };
			iParam0->f_428 = 18.414f;
			*(iParam0 + 332) = { -2719.352f, 56.14f, 4623.413f };
			iParam0->f_432 = 150.864f;
			*(iParam0 + 344) = { -2724.634f, 56.107f, 4623.532f };
			iParam0->f_436 = 81.922f;
			*(iParam0 + 356) = { -2745.797f, 47.988f, 4625.989f };
			iParam0->f_440 = -26.293f;
			*(iParam0 + 368) = { -2747.859f, 47.693f, 4624.839f };
			iParam0->f_444 = 357.726f;
			*(iParam0 + 380) = { -2713.109f, 45.646f, 4660.732f };
			iParam0->f_448 = -61.194f;
			*(iParam0 + 392) = { -2711.452f, 45.176f, 4662.766f };
			iParam0->f_452 = -86.959f;
			*(iParam0 + 404) = { -2709.494f, 44.534f, 4665.703f };
			iParam0->f_456 = 322.758f;
			iParam0->f_508 = 406;
			iParam0->f_512 = 414;
			iParam0->f_516 = 240;
			iParam0->f_464 = "look_distance_binocs";
			iParam0->f_468 = "stand_lookdistance_w_any";
			iParam0->f_472 = "rand_idle_stand";
			iParam0->f_476 = "sit_ground_smoke";
			iParam0->f_480 = "look_distance_binocs";
			return 1;
			break;
		
		case 0x0000001E:
			*(iParam0 + 92) = { -1467.45f, 20.603f, 4901.757f };
			iParam0->f_236 = -162.78f;
			*(iParam0 + 284) = { -1466.004f, 20.603f, 4902.112f };
			iParam0->f_416 = -93.268f;
			*(iParam0 + 296) = { -1451.772f, 19.108f, 4898.179f };
			iParam0->f_420 = -160.576f;
			*(iParam0 + 308) = { -1454.196f, 19.055f, 4894.595f };
			iParam0->f_424 = -38.336f;
			*(iParam0 + 320) = { -1450.552f, 19.693f, 4912.277f };
			iParam0->f_428 = -90.774f;
			*(iParam0 + 332) = { -1450.581f, 19.693f, 4914.392f };
			iParam0->f_432 = -90.774f;
			*(iParam0 + 344) = { -1465.731f, 20.603f, 4897.664f };
			iParam0->f_436 = 301.206f;
			*(iParam0 + 356) = { -1430.556f, 17.862f, 4892.925f };
			iParam0->f_440 = 108.339f;
			*(iParam0 + 368) = { -1431.704f, 17.763f, 4891.236f };
			iParam0->f_444 = 133.614f;
			*(iParam0 + 380) = { -1473.657f, 20.603f, 4911.594f };
			iParam0->f_448 = -119.795f;
			*(iParam0 + 392) = { -1473.616f, 20.603f, 4915.059f };
			iParam0->f_452 = -86.959f;
			*(iParam0 + 404) = { -1471.429f, 20.603f, 4917.822f };
			iParam0->f_456 = -35.592f;
			iParam0->f_508 = 516;
			iParam0->f_512 = 531;
			iParam0->f_516 = 239;
			iParam0->f_464 = "rand_idle_nearwall_shoulder_R";
			iParam0->f_468 = "stand_lookdistance_w_any";
			iParam0->f_472 = "rand_idle_stand";
			iParam0->f_476 = "rand_idle_sit_ground";
			iParam0->f_480 = "smoking_stand";
			return 1;
			break;
		
		case 0x0000001F:
			*(iParam0 + 92) = { -3372.019f, 56.259f, 4774.489f };
			iParam0->f_236 = -19.982f;
			*(iParam0 + 284) = { -3371.442f, 56.214f, 4771.472f };
			iParam0->f_416 = -76.399f;
			*(iParam0 + 296) = { -3393.076f, 54.674f, 4743.264f };
			iParam0->f_420 = 286.167f;
			*(iParam0 + 308) = { -3393.214f, 55.216f, 4756.916f };
			iParam0->f_424 = 107.552f;
			*(iParam0 + 320) = { -3383.994f, 55.505f, 4741.233f };
			iParam0->f_428 = 74.847f;
			*(iParam0 + 332) = { -3382.398f, 55.677f, 4740.638f };
			iParam0->f_432 = 331.954f;
			*(iParam0 + 344) = { -3376.667f, 55.897f, 4740.309f };
			iParam0->f_436 = 338.64f;
			*(iParam0 + 356) = { -3391.581f, 46.292f, 4692.715f };
			iParam0->f_440 = -74.949f;
			*(iParam0 + 368) = { -3392.009f, 45.853f, 4690.46f };
			iParam0->f_444 = 293.54f;
			*(iParam0 + 380) = { -3391.6f, 54.824f, 4744.0f };
			iParam0->f_448 = -8.776f;
			*(iParam0 + 392) = { -3389.719f, 55.082f, 4743.2f };
			iParam0->f_452 = -2.587f;
			*(iParam0 + 404) = { -3387.438f, 55.154f, 4743.16f };
			iParam0->f_456 = 18.612f;
			iParam0->f_508 = 516;
			iParam0->f_512 = 531;
			iParam0->f_516 = 239;
			iParam0->f_464 = "rand_idle_nearwall";
			iParam0->f_468 = "stand_lookdistance_w_any";
			iParam0->f_472 = "rand_idle_stand";
			iParam0->f_476 = "rand_idle_stand";
			iParam0->f_480 = "rand_idle_stand";
			return 1;
			break;
		
		case 0x00000020:
			*(iParam0 + 92) = { -1200.815f, 19.177f, 4963.429f };
			iParam0->f_236 = -227.436f;
			*(iParam0 + 284) = { -1200.294f, 19.035f, 4966.604f };
			iParam0->f_416 = 224.446f;
			*(iParam0 + 296) = { -1201.298f, 19.075f, 4967.346f };
			iParam0->f_420 = 21.338f;
			*(iParam0 + 308) = { -1204.447f, 19.075f, 4963.138f };
			iParam0->f_424 = 236.595f;
			*(iParam0 + 320) = { -1200.658f, 19.075f, 4960.558f };
			iParam0->f_428 = 203.712f;
			*(iParam0 + 332) = { -1205.747f, 19.075f, 4961.868f };
			iParam0->f_432 = 183.278f;
			*(iParam0 + 344) = { -1202.148f, 19.075f, 4958.978f };
			iParam0->f_436 = 288.224f;
			*(iParam0 + 356) = { -1179.418f, 17.055f, 4982.803f };
			iParam0->f_440 = -40.128f;
			*(iParam0 + 368) = { -1181.623f, 17.064f, 4980.798f };
			iParam0->f_444 = 293.54f;
			*(iParam0 + 380) = { -1188.151f, 18.071f, 4968.483f };
			iParam0->f_448 = -8.776f;
			*(iParam0 + 392) = { -1185.913f, 18.071f, 4968.297f };
			iParam0->f_452 = -25.341f;
			*(iParam0 + 404) = { -1184.545f, 18.071f, 4969.665f };
			iParam0->f_456 = -40.868f;
			iParam0->f_508 = 496;
			iParam0->f_512 = 504;
			iParam0->f_516 = 253;
			iParam0->f_464 = "rand_idle_stand";
			iParam0->f_468 = "rand_idle_nearwall";
			iParam0->f_472 = "look_distance_binocs";
			iParam0->f_476 = "look_distance_binocs";
			iParam0->f_480 = "rand_idle_nearwall";
			return 1;
			break;
		
		case 0x00000021:
			*(iParam0 + 92) = { -2426.763f, 9.035f, 3938.964f };
			iParam0->f_236 = 233.065f;
			*(iParam0 + 284) = { -2422.158f, 8.849f, 3944.0f };
			iParam0->f_416 = 269.799f;
			*(iParam0 + 296) = { -2424.0f, 8.849f, 3944.0f };
			iParam0->f_420 = 395.053f;
			*(iParam0 + 308) = { -2425.238f, 8.849f, 3942.791f };
			iParam0->f_424 = 326.055f;
			*(iParam0 + 320) = { -2414.324f, 11.967f, 3926.785f };
			iParam0->f_428 = 305.944f;
			*(iParam0 + 332) = { -2420.0f, 8.32f, 3948.0f };
			iParam0->f_432 = 254.555f;
			*(iParam0 + 344) = { -2420.0f, 9.035f, 3936.0f };
			iParam0->f_436 = 269.799f;
			*(iParam0 + 356) = { -2386.303f, 13.951f, 3929.351f };
			iParam0->f_440 = 106.469f;
			*(iParam0 + 368) = { -2386.661f, 13.959f, 3927.133f };
			iParam0->f_444 = 135.426f;
			*(iParam0 + 380) = { -2426.256f, 9.03f, 3940.356f };
			iParam0->f_448 = 40.635f;
			*(iParam0 + 392) = { -2422.997f, 9.026f, 3940.204f };
			iParam0->f_452 = -25.341f;
			*(iParam0 + 404) = { -2421.01f, 8.873f, 3942.721f };
			iParam0->f_456 = -71.706f;
			iParam0->f_508 = 496;
			iParam0->f_512 = 504;
			iParam0->f_516 = 317;
			iParam0->f_464 = "rand_idle_sit_ground";
			iParam0->f_468 = "rand_idle_sit_ground";
			iParam0->f_472 = "stand_lookdistance_w_any";
			iParam0->f_476 = "look_distance_binocs";
			iParam0->f_480 = "stand_lookdistance_w_any";
			return 1;
			break;
		
		case 0x00000022:
			*(iParam0 + 92) = { -2804.866f, 16.508f, 3992.555f };
			iParam0->f_236 = -74.028f;
			*(iParam0 + 284) = { -2807.604f, 16.364f, 3994.217f };
			iParam0->f_416 = -233.627f;
			*(iParam0 + 296) = { -2802.868f, 16.447f, 3993.188f };
			iParam0->f_420 = -221.419f;
			*(iParam0 + 308) = { -2791.689f, 14.463f, 4004.19f };
			iParam0->f_424 = 233.065f;
			*(iParam0 + 320) = { -2801.971f, 14.191f, 3979.248f };
			iParam0->f_428 = -382.11f;
			*(iParam0 + 332) = { -2821.742f, 15.093f, 4018.304f };
			iParam0->f_432 = 203.293f;
			*(iParam0 + 344) = { -2801.382f, 16.272f, 3993.622f };
			iParam0->f_436 = -116.089f;
			*(iParam0 + 356) = { -2807.759f, 14.284f, 3978.753f };
			iParam0->f_440 = 254.933f;
			*(iParam0 + 368) = { -2804.269f, 13.895f, 3976.22f };
			iParam0->f_444 = 172.987f;
			*(iParam0 + 380) = { -2799.801f, 16.116f, 3995.266f };
			iParam0->f_448 = -3.069f;
			*(iParam0 + 392) = { -2796.837f, 15.872f, 3995.54f };
			iParam0->f_452 = 7.12f;
			*(iParam0 + 404) = { -2793.27f, 15.448f, 3995.925f };
			iParam0->f_456 = 73.417f;
			iParam0->f_508 = 406;
			iParam0->f_512 = 414;
			iParam0->f_516 = 241;
			iParam0->f_464 = "rand_idle_sit_ground";
			iParam0->f_468 = "rand_idle_sit_ground";
			iParam0->f_472 = "rand_idle_stand";
			iParam0->f_476 = "sit_ground_smoke";
			iParam0->f_480 = "stand_lookdistance_w_any";
			return 1;
			break;
		
		case 0x00000023:
			*(iParam0 + 92) = { -1356.416f, 13.051f, 4308.14f };
			iParam0->f_236 = -57.053f;
			*(iParam0 + 284) = { -1354.682f, 13.042f, 4311.322f };
			iParam0->f_416 = -148.611f;
			*(iParam0 + 296) = { -1388.408f, 13.01f, 4308.178f };
			iParam0->f_420 = 110.556f;
			*(iParam0 + 308) = { -1346.633f, 13.031f, 4275.531f };
			iParam0->f_424 = -18.343f;
			*(iParam0 + 320) = { -1348.937f, 13.04f, 4295.117f };
			iParam0->f_428 = -378.398f;
			*(iParam0 + 332) = { -1372.707f, 13.051f, 4300.24f };
			iParam0->f_432 = 147.232f;
			*(iParam0 + 344) = { -1358.335f, 13.074f, 4307.753f };
			iParam0->f_436 = 29.057f;
			*(iParam0 + 356) = { -1397.48f, 13.051f, 4300.768f };
			iParam0->f_440 = 254.933f;
			*(iParam0 + 368) = { -1398.932f, 13.051f, 4303.633f };
			iParam0->f_444 = -84.533f;
			*(iParam0 + 380) = { -1329.279f, 13.051f, 4284.976f };
			iParam0->f_448 = 173.771f;
			*(iParam0 + 392) = { -1327.024f, 13.051f, 4284.387f };
			iParam0->f_452 = -168.443f;
			*(iParam0 + 404) = { -1323.689f, 13.051f, 4284.289f };
			iParam0->f_456 = 193.516f;
			iParam0->f_508 = 406;
			iParam0->f_512 = 414;
			iParam0->f_516 = 240;
			iParam0->f_464 = "rand_idle_sit_ground";
			iParam0->f_468 = "stand_lookdistance_w_any";
			iParam0->f_472 = "look_distance_binocs";
			iParam0->f_476 = "stand_lookdistance_w_any";
			iParam0->f_480 = "rand_idle_nearwall";
			return 1;
			break;
		
		case 0x00000024:
			*(iParam0 + 92) = { -3724.915f, 11.88f, 4784.509f };
			iParam0->f_236 = -38.444f;
			*(iParam0 + 284) = { -3727.532f, 12.046f, 4789.082f };
			iParam0->f_416 = -235.401f;
			*(iParam0 + 296) = { -3750.316f, 12.608f, 4780.991f };
			iParam0->f_420 = 144.385f;
			*(iParam0 + 308) = { -3728.437f, 8.915f, 4752.855f };
			iParam0->f_424 = 107.823f;
			*(iParam0 + 320) = { -3730.176f, 9.026f, 4800.344f };
			iParam0->f_428 = -329.341f;
			*(iParam0 + 332) = { -3706.888f, 9.246f, 4771.759f };
			iParam0->f_432 = -306.654f;
			*(iParam0 + 344) = { -3719.76f, 12.307f, 4781.099f };
			iParam0->f_436 = -59.906f;
			*(iParam0 + 356) = { -3584.686f, 10.095f, 4686.505f };
			iParam0->f_440 = 100.477f;
			*(iParam0 + 368) = { -3585.128f, 10.045f, 4683.631f };
			iParam0->f_444 = -278.036f;
			*(iParam0 + 380) = { -3570.844f, 9.989f, 4674.944f };
			iParam0->f_448 = 350.008f;
			*(iParam0 + 392) = { -3568.908f, 10.055f, 4675.852f };
			iParam0->f_452 = -49.8f;
			*(iParam0 + 404) = { -3567.841f, 10.039f, 4678.223f };
			iParam0->f_456 = 265.068f;
			iParam0->f_508 = 406;
			iParam0->f_512 = 414;
			iParam0->f_516 = 239;
			iParam0->f_464 = "look_distance_binocs";
			iParam0->f_468 = "stand_lookdistance_w_any";
			iParam0->f_472 = "look_distance_binocs";
			iParam0->f_476 = "stand_lookdistance_w_any";
			iParam0->f_480 = "rand_idle_stand";
			return 1;
			break;
		
		case 0x00000025:
			*(iParam0 + 92) = { -526.81f, 28.612f, 3584.959f };
			iParam0->f_236 = -308.869f;
			*(iParam0 + 284) = { -527.271f, 28.612f, 3588.612f };
			iParam0->f_416 = 60.574f;
			*(iParam0 + 296) = { -529.658f, 28.612f, 3586.341f };
			iParam0->f_420 = -103.683f;
			*(iParam0 + 308) = { -528.0f, 25.507f, 3608.0f };
			iParam0->f_424 = 160.145f;
			*(iParam0 + 320) = { -538.364f, 23.361f, 3619.907f };
			iParam0->f_428 = 160.145f;
			*(iParam0 + 332) = { -532.38f, 28.612f, 3587.525f };
			iParam0->f_432 = -232.137f;
			*(iParam0 + 344) = { -527.66f, 28.613f, 3590.663f };
			iParam0->f_436 = -140.986f;
			*(iParam0 + 356) = { -564.538f, 15.055f, 3636.173f };
			iParam0->f_440 = -22.224f;
			*(iParam0 + 368) = { -567.414f, 15.094f, 3634.904f };
			iParam0->f_444 = 321.605f;
			*(iParam0 + 380) = { -569.655f, 15.05f, 3634.228f };
			iParam0->f_448 = -53.107f;
			*(iParam0 + 392) = { -527.458f, 23.583f, 3615.537f };
			iParam0->f_452 = -60.895f;
			*(iParam0 + 404) = { -525.772f, 23.583f, 3617.813f };
			iParam0->f_456 = -32.665f;
			iParam0->f_508 = 406;
			iParam0->f_512 = 414;
			iParam0->f_516 = 253;
			iParam0->f_464 = "rand_idle_sit_ground";
			iParam0->f_468 = "look_distance_binocs";
			iParam0->f_472 = "stand_lookdistance_w_any";
			iParam0->f_476 = "look_distance_binocs";
			iParam0->f_480 = "stand_lookdistance_w_any";
			return 1;
			break;
	}
	return 0;
}

bool Function_186(vector3 vParam0, var uParam3, float fParam4) //Position: 0xF3BC / 62396
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	vLocal_21[03] = { -1045.249f, 184.066f, 1373.642f };
	uLocal_136[0] = Global_30723[5];
	vLocal_21[13] = { -521.368f, 146.586f, 1891.315f };
	uLocal_136[1] = Global_30723[6];
	vLocal_21[23] = { 151.25f, 128.174f, 1380.784f };
	uLocal_136[2] = Global_30717[2];
	vLocal_21[33] = { -730.995f, 226.993f, 1106.784f };
	uLocal_136[3] = Global_30723[3];
	vLocal_21[43] = { -844.7f, 189.73f, 1582.449f };
	uLocal_136[4] = Global_30723[4];
	vLocal_21[53] = { -487.694f, 20.486f, 3033.49f };
	uLocal_136[5] = Global_30668[3];
	vLocal_21[63] = { -2905.192f, 13.051f, 2946.404f };
	uLocal_136[6] = Global_30640[15];
	vLocal_21[73] = { -1233.827f, 22.095f, 3208.098f };
	uLocal_136[7] = Global_30668[5];
	vLocal_21[83] = { -3434.034f, 23.592f, 2497.243f };
	uLocal_136[8] = Global_30640[9];
	vLocal_21[93] = { -1864.42f, 25.674f, 3306.345f };
	uLocal_136[9] = Global_30640[5];
	vLocal_21[103] = { -2832.227f, 20.209f, 3075.762f };
	uLocal_136[10] = Global_30679[1];
	vLocal_21[113] = { -1272.701f, 109.427f, 2763.055f };
	uLocal_136[11] = Global_30668[6];
	vLocal_21[123] = { -2833.559f, 50.331f, 2416.961f };
	uLocal_136[12] = Global_30640[10];
	vLocal_21[133] = { -2867.112f, 82.255f, 2162.143f };
	uLocal_136[13] = Global_30640[7];
	vLocal_21[143] = { -3133.579f, 56.069f, 3318.745f };
	uLocal_136[14] = Global_30679[3];
	vLocal_21[153] = { -2336.926f, 17.067f, 3170.493f };
	uLocal_136[15] = Global_30640[3];
	vLocal_21[163] = { -1948.69f, 30.068f, 3468.263f };
	uLocal_136[16] = Global_30640[13];
	vLocal_21[173] = { -4314.102f, 5.097f, 3744.501f };
	uLocal_136[17] = Global_30658[6];
	vLocal_21[183] = { -4017.441f, 21.468f, 2397.854f };
	uLocal_136[18] = Global_30658[7];
	vLocal_21[193] = { -276.02f, 73.201f, 2393.458f };
	uLocal_136[19] = Global_30668[7];
	vLocal_21[203] = { -1910.925f, 29.066f, 2263.904f };
	uLocal_136[20] = Global_30640[6];
	vLocal_21[213] = { 122.293f, 72.409f, 2669.889f };
	uLocal_136[21] = Global_30668[8];
	vLocal_21[223] = { -2302.359f, 24.248f, 3007.561f };
	uLocal_136[22] = Global_30640[14];
	vLocal_21[233] = { -2006.736f, 42.176f, 3043.272f };
	uLocal_136[23] = Global_30640[16];
	vLocal_21[243] = { -929.793f, 102.412f, 2750.46f };
	uLocal_136[24] = Global_30668[9];
	vLocal_21[253] = { -594.268f, 30.877f, 4008.359f };
	uLocal_136[25] = Global_30707[5];
	vLocal_21[263] = { -2229.454f, 23.263f, 4452.343f };
	uLocal_136[26] = Global_30693[3];
	vLocal_21[273] = { -2150.144f, 18.769f, 4970.876f };
	uLocal_136[27] = Global_30693[12];
	vLocal_21[283] = { -3859.27f, 6.942f, 4318.333f };
	uLocal_136[28] = Global_30685[4];
	vLocal_21[293] = { -2718.606f, 56.177f, 4626.842f };
	uLocal_136[29] = Global_30693[7];
	vLocal_21[303] = { -2150.144f, 18.769f, 4970.876f };
	uLocal_136[30] = Global_30693[8];
	vLocal_21[313] = { -3372.019f, 56.259f, 4774.489f };
	uLocal_136[31] = Global_30685[5];
	vLocal_21[323] = { -1200.815f, 19.177f, 4963.429f };
	uLocal_136[32] = Global_30693[9];
	vLocal_21[333] = { -2804.866f, 16.508f, 3992.555f };
	uLocal_136[33] = Global_30693[6];
	vLocal_21[343] = { -2804.866f, 16.508f, 3992.555f };
	uLocal_136[34] = Global_30693[5];
	vLocal_21[353] = { -1356.416f, 13.051f, 4308.14f };
	uLocal_136[35] = Global_30693[4];
	vLocal_21[363] = { -3724.915f, 11.88f, 4784.509f };
	uLocal_136[36] = Global_30685[3];
	vLocal_21[373] = { -526.81f, 28.612f, 3584.959f };
	uLocal_136[37] = Global_30707[6];
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= 38)
	{
		if (!iLocal_175[iVar1])
		{
			if (VDIST(vParam0, vLocal_21[iVar13]) > 225.0f && VDIST(vParam0, vLocal_21[iVar13]) < 50.0f)
			{
				if (Function_193(&(vLocal_21[iVar13]), fParam4, 0, 0))
				{
					uVar2 = Function_192(StackVal, StackVal, vLocal_21[iVar13], 1);
					if (Global_30621[Global_29004] == Function_189(uVar2))
					{
						if (Function_187(iVar1, uParam3))
						{
							iVar0 = 1;
							iLocal_175[iVar1] = 1;
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

bool Function_187(int iParam0, int iParam1) //Position: 0xF989 / 63881
{
	switch (iParam1)
	{
		case 0x0000003D:
		case 0x0000003E:
		case 0x00000049:
			return Function_188(iParam0);
			break;
	}
	return 0;
}

int Function_188(int iParam0) //Position: 0xF9B2 / 63922
{
	switch (iParam0)
	{
		case 0x00000004:
			if (Function_90(37))
			{
				return 1;
			}
			break;
		
		case 0x00000015:
			if (Function_90(7))
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

int Function_189(int iParam0) //Position: 0xFA14 / 64020
{
	return Function_190(iParam0);
}

int Function_190(int iParam0) //Position: 0xFA1F / 64031
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_191(iParam0))
	{
		if (StackVal == 1)
		{
			iVar0 = iParam0;
		}
		else if (StackVal == 2)
		{
			iVar0 = Global_29155[iParam010];
		}
		else
		{
			iVar0 = Global_29155[iParam010];
			iVar0 = Global_29155[iVar010];
		}
	}
	return iVar0;
}

bool Function_191(int iParam0) //Position: 0xFA77 / 64119
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_192(vector3 vParam0, bool bParam3) //Position: 0xFA8D / 64141
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
			if (IS_VOLUME_VALID(StackVal))
			{
				if (IS_POINT_IN_VOLUME(StackVal, vParam0))
				{
					iVar2 = iVar1;
					bVar0 = true;
				}
			}
		}
		iVar1++;
	}
	if (bParam3)
	{
		if (bVar0)
		{
		}
	}
	return iVar2;
}

bool Function_193(var uParam0, float fParam1, int iParam2, bool bParam3) //Position: 0xFAF8 / 64248
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
	Function_195(4294967295);
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
			else if (Function_194(uParam0, &uVar0) > fVar5)
			{
				return 0;
			}
		}
		iVar3++;
	}
	return 1;
}

float Function_194(var uParam0, int iParam1) //Position: 0xFBC8 / 64456
{
	vector3 vVar0;
	int iVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*iParam1, *uParam0, StackVal) };
	iVar3 = VMAG(vVar0);
	return iVar3;
}

int Function_195(bool bParam0) //Position: 0xFBE6 / 64486
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
						Function_196(iVar0);
					}
					else if (Global_3386)
					{
						if (Function_180(StackVal, StackVal, Global_34573, vVar1) < 25.0f)
						{
							Function_196(iVar0);
						}
					}
					else if (Function_180(StackVal, StackVal, Global_34573, vVar1) < 55.0f)
					{
						Function_196(iVar0);
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
			Function_196(iVar0);
		}
		iVar0++;
	}
	return 0;
}

void Function_196(int iParam0) //Position: 0xFD47 / 64839
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

bool Function_197(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0xFDA8 / 64936
{
	struct<8> Var0;
	bool bVar8;
	bool bVar9;
	
	if (Global_3371 && iParam0->f_32)
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_230(GET_SCRIPT_NAME()) };
		bVar8 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Global_26150, &Var0, 4.203895E-45f, Function_228(*(iParam0 + 8), 0.0f, Global_34573, *(iParam0 + 8)), 0.0f, iParam0->f_52, 20.0f, iParam0->f_52);
		DECOR_SET_INT(bVar8, "script", GET_THIS_SCRIPT_ID());
		if (iParam0->f_56 != 4294967295)
		{
			DECOR_SET_INT(StackVal, bVar8, "category");
			Function_226(&bVar8, iParam0->f_32);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
		*(iParam0 + 8) = { StackVal, StackVal, Global_34574 };
		return 1;
	}
	*uParam3 = 0;
	if (!Function_198(iParam0))
	{
		if (iParam0->f_32 == 1)
		{
			if (*uParam2 == 0)
			{
				Function_11("Still scanning for the proper terrain to run this event.  Move the player around to find a good spawn location.", -1.0f, 1, 2, 1, 0);
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
		Function_11("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 5.0f, 1, 2, 1, 0);
	}
	if (bParam4)
	{
		if (!Function_9(iParam0->f_56, 0, 1, 0, 0))
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
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_230("restrictVol") };
		bVar9 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Global_26150, &Var0, 4.203895E-45f, Function_228(*(iParam0 + 8), 0.0f, Global_34573, *(iParam0 + 8)), 0.0f, iParam0->f_52, 20.0f, iParam0->f_52);
		DECOR_SET_INT(bVar9, "script", GET_THIS_SCRIPT_ID());
		if (iParam0->f_56 != 4294967295)
		{
			DECOR_SET_INT(StackVal, bVar9, "category");
			Function_226(&bVar9, iParam0->f_32);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
	}
	return 1;
}

bool Function_198(int iParam0) //Position: 0x10165 / 65893
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
			Function_225(iParam0 + 4);
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
				vVar3 = { 0.0f, 0.0f, Function_146(1) };
				ROTATE_VECTOR_XZ(&vVar3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar3, StackVal) };
				ITERATE_IN_SPHERE(StackVal, vVar3, Function_146(1));
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
						bVar0 = Function_224(StackVal, StackVal, StackVal, vVar9, 0.01f);
					}
					else
					{
						bVar0 = Function_223(StackVal, StackVal, StackVal, vVar9, 0.1f, "locflag", (iParam0 + 64 + 24)->f_16);
					}
				}
				else if ((iParam0 + 64 + 24)->f_16 == 0)
				{
					bVar0 = Function_222(StackVal, StackVal, StackVal, vVar9, Function_182());
				}
				else
				{
					bVar0 = Function_221(StackVal, StackVal, StackVal, vVar9, Function_182(), "locflag", (iParam0 + 64 + 24)->f_16);
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
			Function_225(iParam0 + 4);
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
					if (Function_191(bVar14))
					{
						if (StackVal == (iParam0 + 64)->f_48)
						{
							if ((StackVal && Global_29008[bVar14]) >= 0)
							{
								GET_OBJECT_POSITION(bVar1, &vVar3);
								if (VDIST(vVar9, vVar3) < fVar13 && VDIST(vVar9, vVar3) > Function_146(1))
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
				Function_220(iParam0 + 8, 99.0f, iParam0 + 8, 10);
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
				Function_219(&vVar9, &vVar6);
				vVar3 = { StackVal, StackVal, Function_219(&vVar9, &vVar6) };
				if (!Function_49(StackVal, StackVal, vVar3))
				{
					PRINTSTRING("Player Pos: ");
					PRINTVECTOR(vVar9);
					PRINTNL();
					Function_147(&fVar13, &bVar12);
					if (VDIST(vVar3, vVar9) < ((fVar13 + ((bVar12 - fVar13) / 2.0f)) * 0.8f))
					{
						iVar2 = Function_216(StackVal, StackVal, iParam0, vVar3);
					}
				}
			}
			else
			{
				iVar2 = Function_212(iParam0);
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
					if (!Function_211(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (iParam0->f_60 == 1)
				{
					if (!Function_210(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (Function_14(StackVal, 131072))
				{
					if (StackVal || Function_209(StackVal, Function_209(StackVal, StackVal, *(iParam0 + 8)), Global_34574))
					{
						return 0;
					}
				}
				if (StackVal & 1024 == 1024)
				{
					if (Function_208(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (!Function_193(iParam0 + 8, iParam0 + 52, 0, iParam0->f_32))
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
				vVar3 = { 0.0f, 0.0f, ((fVar13 + bVar12) * -0.5f) };
				ROTATE_VECTOR_XZ(&vVar3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar3, StackVal) };
				uVar23 = START_CURVE_QUERY(Global_28841, vVar3, Function_207((iParam0 + 64)->f_120, 0), 0.0f, 20.0f, 5.0f, 0);
			}
			else
			{
				uVar23 = START_CURVE_QUERY(Global_28841, vVar9, Function_207((iParam0 + 64)->f_120, 0), 120.0f, 150.0f, 5.0f, 0);
			}
			if (GET_NUM_POINTS_IN_CURVE_QUERY(uVar23) >= 0)
			{
				iVar21 = RAND_INT_RANGE(0, (GET_NUM_POINTS_IN_CURVE_QUERY(uVar23) - 1));
				GET_POINT_FROM_CURVE_QUERY(uVar23, iVar21, &Var15);
				Function_206(&Var15);
				*(iParam0 + 8) = { StackVal, StackVal, Function_206(&Var15) };
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
				if (!Function_211(StackVal, StackVal, *(iParam0 + 8)))
				{
					return 0;
				}
			}
			if (iParam0->f_60 == 1)
			{
				if (!Function_210(StackVal, StackVal, *(iParam0 + 8)))
				{
					return 0;
				}
			}
			if (iParam0->f_60 == 0)
			{
				if (!(StackVal || Function_211(StackVal, Function_210(StackVal, StackVal, *(iParam0 + 8)), *(iParam0 + 8))))
				{
					return 0;
				}
			}
			if (Function_14(StackVal, 131072))
			{
				if (StackVal || Function_209(StackVal, Function_209(StackVal, StackVal, *(iParam0 + 8)), Global_34574))
				{
					return 0;
				}
			}
			if (StackVal && !Function_193(iParam0 + 8, iParam0 + 52, 0, iParam0->f_32) == 262144)
			{
				return 0;
			}
			break;
		
		case 0x00000004:
			if (!Function_203((iParam0 + 64)->f_120) < 0)
			{
				return 0;
			}
			break;
		
		case 0x00000007:
			switch ((iParam0 + 64)->f_128)
			{
				case 0x00000001:
					bVar24 = Function_200(StackVal, Global_29004, Global_29005, Global_29006, 1);
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
						bVar24 = Function_200(StackVal, Global_29004, Global_29005, (Global_29006 + iVar22), 1);
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
	if (Function_199(StackVal, StackVal, *(iParam0 + 8)))
	{
		return 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(*(iParam0 + 8), 10.0f))
	{
		return 0;
	}
	return 1;
}

bool Function_199(vector3 vParam0) //Position: 0x1098F / 67983
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

bool Function_200(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x109C4 / 68036
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
								return Function_201(&Global_6298, &Global_7189, bParam3);
								break;
							
							case 0x00000001:
								return Function_201(&Global_6364, &Global_7287, bParam3);
								break;
							
							case 0x00000002:
								return Function_201(&Global_6351, &Global_7268, bParam3);
								break;
							
							default:
								return Function_201(&Global_6391, &Global_7327, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_201(&Global_6501, &Global_7490, bParam3);
								break;
							
							case 0x00000001:
								return Function_201(&Global_6402, &Global_7343, bParam3);
								break;
							
							case 0x00000003:
								return Function_201(&Global_6433, &Global_7389, bParam3);
								break;
							
							case 0x00000002:
								return Function_201(&Global_6490, &Global_7474, bParam3);
								break;
							
							case 0x00000004:
								return Function_201(&Global_6537, &Global_7543, bParam3);
								break;
							
							default:
								return Function_201(&Global_6532, &Global_7536, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_201(&Global_6563, &Global_7581, bParam3);
								break;
							
							case 0x00000001:
								return Function_201(&Global_6614, &Global_7657, bParam3);
								break;
							
							case 0x00000002:
								return Function_201(&Global_6643, &Global_7700, bParam3);
								break;
							
							default:
								return Function_201(&Global_6550, &Global_7562, bParam3);
								break;
						}
						break;
					
					case 0x00000003:
						switch (bVar1)
						{
							case 0x00000001:
								return Function_201(&Global_6667, &Global_7735, bParam3);
								break;
							
							default:
								return Function_201(&Global_6704, &Global_7790, bParam3);
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
								return Function_201(&Global_6709, &Global_7797, bParam3);
								break;
							
							case 0x00000001:
								return Function_201(&Global_6764, &Global_7879, bParam3);
								break;
							
							case 0x00000002:
								return Function_201(&Global_6785, &Global_7910, bParam3);
								break;
							
							default:
								return Function_201(&Global_6810, &Global_7947, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_201(&Global_6815, &Global_7954, bParam3);
								break;
							
							default:
								return Function_201(&Global_6928, &Global_8122, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000002:
								return Function_201(&Global_6933, &Global_8129, bParam3);
								break;
							
							case 0x00000001:
								return Function_201(&Global_6962, &Global_8172, bParam3);
								break;
							
							case 0x00000003:
								return Function_201(&Global_6987, &Global_8209, bParam3);
								break;
							
							default:
								return Function_201(&Global_7027, &Global_8268, bParam3);
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
		return Function_201(&Global_6298, &Global_7189, bParam3);
	}
	if (bVar1 == Global_30640[1])
	{
		return Function_201(&Global_6364, &Global_7287, bParam3);
	}
	if (bVar1 == Global_30640[2])
	{
		return Function_201(&Global_6351, &Global_7268, bParam3);
	}
	if (bVar1 == Global_30658[0])
	{
		return Function_201(&Global_6501, &Global_7490, bParam3);
	}
	if (bVar1 == Global_30658[1])
	{
		return Function_201(&Global_6402, &Global_7343, bParam3);
	}
	if (bVar1 == Global_30658[3])
	{
		return Function_201(&Global_6433, &Global_7389, bParam3);
	}
	if (bVar1 == Global_30658[2])
	{
		return Function_201(&Global_6490, &Global_7474, bParam3);
	}
	if (bVar1 == Global_30658[4])
	{
		return Function_201(&Global_6537, &Global_7543, bParam3);
	}
	if (bVar1 == Global_30668[0])
	{
		return Function_201(&Global_6563, &Global_7581, bParam3);
	}
	if (bVar1 == Global_30668[1])
	{
		return Function_201(&Global_6614, &Global_7657, bParam3);
	}
	if (bVar1 == Global_30668[2])
	{
		return Function_201(&Global_6643, &Global_7700, bParam3);
	}
	if (bVar1 == Global_30679[1])
	{
		return Function_201(&Global_6667, &Global_7735, bParam3);
	}
	if (bVar1 == Global_30685[0])
	{
		return Function_201(&Global_6709, &Global_7797, bParam3);
	}
	if (bVar1 == Global_30685[1])
	{
		return Function_201(&Global_6764, &Global_7879, bParam3);
	}
	if (bVar1 == Global_30685[2])
	{
		return Function_201(&Global_6785, &Global_7910, bParam3);
	}
	if (bVar1 == Global_30693[0])
	{
		return Function_201(&Global_6815, &Global_7954, bParam3);
	}
	if (bVar1 == Global_30707[2])
	{
		return Function_201(&Global_6933, &Global_8129, bParam3);
	}
	if (bVar1 == Global_30707[1])
	{
		return Function_201(&Global_6962, &Global_8172, bParam3);
	}
	if (bVar1 == Global_30707[3])
	{
		return Function_201(&Global_6987, &Global_8209, bParam3);
	}
	if (bVar1 == Global_30628[0])
	{
		return Function_201(&Global_6391, &Global_7327, bParam3);
	}
	if (bVar1 == Global_30628[1])
	{
		return Function_201(&Global_6532, &Global_7536, bParam3);
	}
	if (bVar1 == Global_30628[2])
	{
		return Function_201(&Global_6550, &Global_7562, bParam3);
	}
	if (bVar1 == Global_30628[3])
	{
		return Function_201(&Global_6704, &Global_7790, bParam3);
	}
	if (bVar1 == Global_30633[0])
	{
		return Function_201(&Global_6810, &Global_7947, bParam3);
	}
	if (bVar1 == Global_30633[2])
	{
		return Function_201(&Global_6928, &Global_8122, bParam3);
	}
	if (bVar1 == Global_30633[1])
	{
		return Function_201(&Global_7027, &Global_8268, bParam3);
	}
	return "";
}

var Function_201(var uParam0, var uParam1, bool bParam2) //Position: 0x10FD9 / 69593
{
	int iVar0;
	
	iVar0 = bParam2;
	if (iVar0 <= *uParam0 || iVar0 > 0)
	{
		return "";
	}
	if (!Function_202(uParam0[iVar02], 2))
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

bool Function_202(var uParam0, int iParam1) //Position: 0x1102B / 69675
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_203(int iParam0) //Position: 0x11047 / 69703
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
			if (Function_204(GET_SQUAD_FROM_OBJECT(bVar2)) == iParam0)
			{
				iVar0++;
			}
			bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
		}
	}
	DESTROY_ITERATOR(bVar1);
	return iVar0;
}

int Function_204(bool bParam0) //Position: 0x110A2 / 69794
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 4294967295;
	}
	bVar0 = Function_205(bParam0);
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

var Function_205(bool bParam0) //Position: 0x110DA / 69850
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

vector3 Function_206(int iParam0) //Position: 0x11120 / 69920
{
	vector3 vVar0;
	
	vVar0.x = *iParam0;
	vVar0.f_4 = StackVal;
	vVar0.f_8 = StackVal;
	return StackVal, StackVal, vVar0;
}

int Function_207(int iParam0, int iParam1) //Position: 0x1113F / 69951
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

bool Function_208(vector3 vParam0) //Position: 0x1116F / 69999
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

int Function_209(vector3 vParam0) //Position: 0x11210 / 70160
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

bool Function_210(vector3 vParam0) //Position: 0x1125C / 70236
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

bool Function_211(vector3 vParam0) //Position: 0x112B5 / 70325
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

int Function_212(int iParam0) //Position: 0x11332 / 70450
{
	float fVar0;
	bool bVar1;
	
	Function_147(&fVar0, &bVar1);
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER_PLAYER();
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	Function_215(0);
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
		Function_214(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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
	Function_213(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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

void Function_213(struct<33> Param0) //Position: 0x114CD / 70861
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

void Function_214(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14) //Position: 0x115F9 / 71161
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

void Function_215(float fParam0) //Position: 0x1164A / 71242
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

int Function_216(int iParam0, vector3 vParam1) //Position: 0x1168E / 71310
{
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER(vParam1);
	if (Global_30842[34])
	{
		PRINTVECTOR(vParam1);
		PRINTNL();
	}
	Function_218();
	Function_215(0);
	Function_217(0);
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
		Function_214(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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
	Function_213(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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

void Function_217(bool bParam0) //Position: 0x11830 / 71728
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

void Function_218() //Position: 0x118E3 / 71907
{
	AMBIENT_SET_DISTANCE_FILTER(0.0f, 24.0f);
	return;
}

vector3 Function_219(var uParam0, int iParam1) //Position: 0x118F2 / 71922
{
	var uVar0;
	bool bVar6;
	float fVar7;
	bool bVar8;
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
		Function_206(&iVar25);
		vVar19 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*uParam0, Function_206(&iVar25), StackVal) };
		Function_206(&iVar31);
		vVar22 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*uParam0, Function_206(&iVar31), StackVal) };
		fVar15 = VDOT(&vVar16, &vVar19);
		fVar14 = VDOT(&vVar16, &vVar22);
		Function_147(&fVar7, &bVar8);
		fVar9 = ((fVar7 + bVar8) / 2.0f);
		if (fVar15 > 0.0f && fVar14 > 0.0f)
		{
			UNK_0xDF93BD7C(uVar10);
			vVar11 = { 0.0f, 0.0f, 0.0f };
			return StackVal, StackVal, vVar11;
		}
		if (fVar15 > fVar14)
		{
			UNK_0x19D652F9(bVar6, (fVar9 * -1.0f), &uVar0, &iVar31);
			Function_206(&iVar31);
			vVar11 = { StackVal, StackVal, Function_206(&iVar31) };
		}
		else
		{
			UNK_0x19D652F9(bVar6, fVar9, &uVar0, &iVar25);
			Function_206(&iVar25);
			vVar11 = { StackVal, StackVal, Function_206(&iVar25) };
		}
	}
	UNK_0xDF93BD7C(uVar10);
	return StackVal, StackVal, vVar11;
}

int Function_220(var uParam0, float fParam1, int iParam2, int iParam3) //Position: 0x119FF / 72191
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
		if (!Function_49(StackVal, StackVal, *iParam2))
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
			if (!Function_49(StackVal, StackVal, *iParam2))
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

var Function_221(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, var uParam6) //Position: 0x11B31 / 72497
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
						if (Function_193(&vVar5, &fVar4, 0, 0))
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

var Function_222(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x11BD9 / 72665
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
				if (Function_193(&vVar5, &uVar4, 0, 0))
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

var Function_223(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, var uParam6) //Position: 0x11C62 / 72802
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

var Function_224(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x11CF7 / 72951
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

int Function_225(int iParam0) //Position: 0x11D74 / 73076
{
	if (IS_ITERATOR_VALID(*iParam0))
	{
		ITERATE_EVERYWHERE(*iParam0);
		ITERATE_ON_PARTIAL_NAME(*iParam0, Function_261());
		ITERATE_ON_PARTIAL_MODEL_NAME(*iParam0, Function_261());
		ITERATE_ON_OBJECT_TYPE(*iParam0, 4294967295);
		return 1;
	}
	return 0;
}

int Function_226(bool bParam0, int iParam1) //Position: 0x11DA5 / 73125
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
	Function_195(DECOR_GET_INT(*bParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
		}
		else
		{
			Function_227(iVar0, bParam0, &uVar1, iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(*bParam0);
	return 0;
}

void Function_227(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x11F06 / 73478
{
	struct<8> Var0;
	
	Global_26155[iParam05].f_8 = *uParam1;
	Global_26155[iParam05].f_16 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_230("stayout") };
	Global_26155[iParam05].f_12 = CREATE_VOLUME_IN_LAYOUT(Global_26150, &Var0, 3, *iParam2, 0.0f, 0.0f, 0.0f, 12.0f, 5.0f, 12.0f);
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	if (bParam3)
	{
		Global_26155[iParam05].f_4 = ADD_BLIP_FOR_COORD(iParam2, 403, 0f, 2, 0);
		SET_BLIP_BLINK(StackVal, 1, 1, 20.0f);
	}
}

var Function_228(bool bParam0, vector3 vParam1) //Position: 0x11FA1 / 73633
{
	vector3 vVar0;
	var uVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		GET_POSITION(bParam0, &vVar0);
		Function_229(StackVal, StackVal, StackVal, StackVal, vVar0, vParam1, &uVar3);
		return UNK_0x9C40E671(&uVar3);
	}
	return 0.0f;
}

void Function_229(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x11FD1 / 73681
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

struct<32> Function_230(bool bParam0) //Position: 0x11FF4 / 73716
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_231("0", &cVar8, ""), 4);
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

struct<32> Function_231(char* cParam0, char* cParam1, char* cParam2) //Position: 0x1205E / 73822
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_232(int iParam0) //Position: 0x1207D / 73853
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_237();
	iVar1 = 0;
	if (!Function_4(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_236(iParam0[iVar03], 8);
		}
		else if (Function_235())
		{
			iVar1 = 1;
			Function_236(iParam0[iVar03], 8);
		}
		Function_236(iParam0[iVar03], 16);
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
				Function_236(iParam0[iVar03], 1);
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
							Function_236(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_236(iParam0[iVar03], 2);
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
							Function_236(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_236(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_236(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_236(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_236(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_236(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_236(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_236(iParam0[iVar03], 2);
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
	Function_233();
	return 1;
}

void Function_233() //Position: 0x123F8 / 74744
{
	if (!Function_234(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_234(int iParam0) //Position: 0x12438 / 74808
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_235() //Position: 0x12454 / 74836
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

void Function_236(var uParam0, int iParam1) //Position: 0x1247F / 74879
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_237() //Position: 0x12490 / 74896
{
	if (!Function_234(128))
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

void Function_238(bool bParam0, int iParam1) //Position: 0x124D2 / 74962
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *bParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_239(bParam0[iVar0]);
		iVar0++;
	}
	return;
}

void Function_239(int iParam0) //Position: 0x124FF / 75007
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

void Function_240(var uParam0, int iParam1) //Position: 0x12541 / 75073
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_241(uParam0[iVar0]);
		iVar0++;
	}
	return;
}

void Function_241(int iParam0) //Position: 0x1256E / 75118
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

bool Function_242(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x125B1 / 75185
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

void Function_243(var uParam0, var uParam1, var uParam2) //Position: 0x12619 / 75289
{
	return;
}

void Function_244() //Position: 0x1261F / 75295
{
	return;
}

void Function_245(var uParam0, int iParam1) //Position: 0x12625 / 75301
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

var Function_246(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x12647 / 75335
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
			Function_236(bParam0[iVar03], 4);
			if (bParam3)
			{
				Function_236(bParam0[iVar03], 8);
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

var Function_247(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x12717 / 75543
{
	return Function_248(uParam0, uParam1, uParam2, 4294967295, uParam3);
}

var Function_248(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x1272B / 75563
{
	return Function_249(uParam0, uParam1, uParam2, uParam3, uParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_249(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, vector3 vParam6) //Position: 0x12744 / 75588
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
		Function_254();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, bParam4, iParam5, vParam6);
	if (!Function_179(bVar1))
	{
		if (!Global_30837 && !Global_30838)
		{
			Function_253(bParam0, bParam1, bParam2, bParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_253(bParam0, bParam1, bParam2, bParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && bParam3 != 4294967295)
		{
			while (Function_252(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_179(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_252(bVar0))
				{
					Function_251();
				}
				Function_250(bVar0);
			}
		}
		else if (!bParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != bParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_179(bVar1))
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

void Function_250(int iParam0) //Position: 0x12A37 / 76343
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

void Function_251() //Position: 0x12AEB / 76523
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

bool Function_252(bool bParam0) //Position: 0x12B25 / 76581
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

void Function_253(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x12B52 / 76626
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

void Function_254() //Position: 0x12CA3 / 76963
{
	int iVar0;
	
	if (Global_3402)
	{
		if (StackVal || !Global_30742 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_251();
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
	Function_251();
	return;
}

void Function_255(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x12CEE / 77038
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		(*iParam0)[iVar0 + 1] = Function_256(iParam1, iParam2, iParam3, (*iParam0)[1], (*iParam0)[2]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iVar0++;
	}
}

var Function_256(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x12D35 / 77109
{
	int iVar0;
	int iVar1[40];
	int iVar42;
	int iVar43;
	int iVar44;
	var uVar45;
	int iVar46;
	
	if (iParam0 < 4294967295)
	{
		return 4294967295;
	}
	if (iParam1 > 1311)
	{
		return 4294967295;
	}
	if (iParam2 > 4294967295 || iParam2 <= 1311)
	{
		return 4294967295;
	}
	iVar0 = (iParam1 - iParam0) + 1;
	if (iVar0 < 40 || iVar0 > 1)
	{
		LOG_ERROR("GET_RANDOM_ACTORENUM_FILTERED passed a range with more than 40 enums or less than 1");
		return 4294967295;
	}
	iVar44 = 0;
	iVar42 = 0;
	while (iVar42 <= iVar0)
	{
		iVar43 = (iParam0 + iVar42);
		if (((iVar43 == iParam2 && iVar43 == iParam3) && iVar43 == iParam4) && !STRING_CONTAINS_STRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(iVar43), "_cs"))
		{
			iVar1[iVar44] = iVar43;
			iVar44++;
		}
		iVar42++;
	}
	if (iVar44 == 0)
	{
		return 4294967295;
	}
	iVar46 = RAND_INT_RANGE(0, (iVar44 - 1));
	uVar45 = iVar1[iVar46];
	return uVar45;
}

int Function_257(int iParam0, int iParam1) //Position: 0x12E4B / 77387
{
	int iVar0;
	
	iVar0 = (Global_16876[iParam06].f_12 % iParam1);
	return iVar0;
}

var Function_258(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x12E61 / 77409
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_259(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_236(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_259(var uParam0, int iParam1, int iParam2) //Position: 0x12E99 / 77465
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_4(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_236(uParam0[iVar03], 4);
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

void Function_260(var uParam0, float fParam1) //Position: 0x12F5D / 77661
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_171(uParam0, 1);
	Function_72(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

var Function_261() //Position: 0x12F7E / 77694
{
	var uVar0;
	
	return uVar0;
}

