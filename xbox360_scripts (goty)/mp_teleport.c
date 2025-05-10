//Decompiled with MagicRDR v1.0
//Function Count : 68
//Statics Count : 341
//Natives Count : 114
//Parameters Count : 51

#region Local Var
	struct<153> Local_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
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
	float fLocal_255 = 0.0f;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	bool bLocal_260 = false;
	vector3 vLocal_261 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_264 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_267 = { 0.0f, 0.0f, 0.0f };
	bool bLocal_270 = false;
	vector3 vLocal_271 = { 0.0f, 0.0f, 0.0f };
	float fLocal_274 = 0.0f;
	bool bLocal_275 = false;
	bool bLocal_276 = false;
	var uLocal_277 = 0;
	int iLocal_278 = 0;
	bool bLocal_279 = false;
	bool bLocal_280 = false;
	bool bLocal_281 = false;
	bool bLocal_282 = false;
	var uLocal_283 = 0;
	int iLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	bool bLocal_288 = false;
	bool bLocal_289 = false;
	struct<49> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uScriptParam_49 = 0;
	var uScriptParam_50 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	var uVar0;
	bool bVar3;
	
	Local_0.f_8 = ScriptParam_0.f_48;
	iLocal_48 = 0;
	if (!Function_67(ScriptParam_0.f_44))
	{
		iLocal_48 = 11;
	}
	Global_63096 = 1;
	UI_ENTER("HudMPTransporter");
	SET_PLAYER_CONTROL(false, 0, 0, 0);
	if (IS_ACTOR_VALID(Function_66()))
	{
		ACTOR_START_FORCE_HOLSTER(Function_66(), 0, 0);
		SET_ACTOR_PROOF(Function_66(), 24);
	}
	if (StackVal || StackVal != 2 != 1)
	{
		iLocal_51 = 1;
		vLocal_271 = { StackVal, StackVal, *(&Global_28210 + 24) };
	}
	else if (StackVal || StackVal != 2 != 1)
	{
		iLocal_51 = 1;
		bLocal_52 = true;
	}
	if (!Function_64(Function_66(), 0))
	{
		iLocal_51 = 0;
		bLocal_52 = false;
	}
	Function_62(131072);
	bVar3 = false;
	while ((!IS_EXITFLAG_SET() && !bVar3) && NET_IS_IN_SESSION())
	{
		bLocal_53 = 250;
		if (IS_ACTOR_VALID(Function_66()))
		{
			if (IS_PLAYER_DEADEYE(GET_LOCAL_SLOT()))
			{
				bVar3 = true;
			}
			Function_61(&uVar0);
		}
		else
		{
			Function_59(&uVar0);
		}
		switch (iLocal_48)
		{
			case 0x00000000:
				if (Function_50(&Local_54, &uLocal_50, &uLocal_257, iLocal_51, 0))
				{
					iLocal_259 = Function_49(&Local_54, iLocal_51);
					if (iLocal_259 >= 0)
					{
						iLocal_48 = 1;
					}
					else
					{
						iLocal_48 = 2;
						break;
					}
				}
				else
				{
					bLocal_53 = false;
				}
				break;
			
			case 0x00000001:
				if (!HUD_IS_SHOWING_SMALL_TEXT())
				{
					iLocal_48 = 2;
					bLocal_53 = false;
				}
				break;
			
			case 0x00000002:
				iLocal_278 = Function_48(&Local_54, Local_54 + 1, uLocal_256);
				Function_46(&Local_54, iLocal_278);
				iLocal_48 = 3;
			
			case 0x00000003:
				if (Global_3391)
				{
					bVar3 = true;
				}
				else if (Function_45())
				{
					bVar3 = true;
				}
				else if (Function_40(&uVar0, 30.0f))
				{
					bVar3 = true;
				}
				else
				{
					Function_26();
				}
				bLocal_53 = false;
				break;
			
			case 0x00000004:
				bLocal_260 = Function_25(Local_54[iLocal_2584]);
				if (!IS_OBJECT_VALID(bLocal_260))
				{
					if (Function_67(Local_54[iLocal_2584]))
					{
						bLocal_260 = GET_OBJECT_FROM_VOLUME(StackVal);
					}
				}
				Function_24();
				GET_OBJECT_POSITION(bLocal_260, &vLocal_261);
				Function_23();
				iLocal_48 = 6;
			
			case 0x00000006:
				iLocal_48 = 10;
				break;
			
			case 0x00000008:
				if (!iLocal_284)
				{
				}
				break;
			
			case 0x0000000A:
				if (Function_9())
				{
					SET_PLAYER_CONTROL(false, 1, 0, 0);
					SET_DEADEYE_INVULNERABILITY(0, 0);
					iLocal_284 = 1;
					iLocal_48 = 9;
					bLocal_53 = 250;
					if (bLocal_289)
					{
						iLocal_48 = 11;
					}
				}
				break;
			
			case 0x00000009:
				iLocal_48 = 11;
				bLocal_53 = false;
				break;
			
			case 0x0000000B:
				if (!IS_ACTOR_RIDING_VEHICLE(Global_34573))
				{
					TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				}
				break;
		}
		WAIT(bLocal_53);
	}
	if ((HUD_IS_FADED() && !bVar3) && !bLocal_289)
	{
		HUD_FADE_IN(0.5f, 1065353216);
	}
	if (IS_LAYOUTREF_VALID(bLocal_288))
	{
		DESTROY_LAYOUT(bLocal_288);
	}
	Global_3410 = 0;
	if (IS_ACTOR_VALID(Function_66()))
	{
		ACTOR_END_FORCE_HOLSTER(Function_66());
		CLEAR_ACTOR_PROOF(Function_66(), 24);
	}
	SET_PLAYER_CONTROL(GET_LOCAL_SLOT(), 1, 0, 0);
	Function_7(131072);
	Function_62(128);
	if (!bLocal_289)
	{
		Function_1(Function_66(), 1);
	}
	Function_23();
	if (iLocal_51 && iLocal_258 != 0)
	{
		STREAMING_RELEASE_MAIN_POI();
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	UI_EXIT("HudMPTransporter");
	Global_63096 = 0;
	SET_DEADEYE_INVULNERABILITY(0, 0);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(bool bParam0, int iParam1) //Position: 0x30D / 781
{
	struct<5> Var0;
	
	Function_4(128, 0);
	SET_ACTOR_INVULNERABILITY(bParam0, 0);
	if (Function_2(256))
	{
		NET_OBJECT_SET_REPLICATION_MODE(GET_OBJECT_FROM_ACTOR(bParam0), 3);
	}
	else
	{
		NET_OBJECT_SET_REPLICATION_MODE(GET_OBJECT_FROM_ACTOR(bParam0), 2);
	}
	AI_STOP_IGNORING_ACTOR(bParam0);
	if (NET_IS_IN_SESSION() && iParam1)
	{
		Var0 = GET_LOCAL_SLOT();
		Var0.f_4 = NET_GET_NET_TIME();
		NET_SCRIPTMSG_SEND(1, 9, &Var0, 2, 1);
	}
	return;
}

bool Function_2(int iParam0) //Position: 0x363 / 867
{
	return Function_3(Global_78617.f_52, iParam0);
}

int Function_3(var uParam0, int iParam1) //Position: 0x374 / 884
{
	return (uParam0 && iParam1) == 0;
}

void Function_4(int iParam0, bool bParam1) //Position: 0x381 / 897
{
	if (bParam1)
	{
		Function_6(&Global_78480 + 124, iParam0);
	}
	else
	{
		Function_5(&Global_78480 + 124, iParam0);
	}
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_124 = Global_78480.f_124;
	}
	return;
}

void Function_5(var uParam0, int iParam1) //Position: 0x3BC / 956
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_6(var uParam0, int iParam1) //Position: 0x3CF / 975
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_7(int iParam0) //Position: 0x3DE / 990
{
	Function_8(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		if (DECOR_CHECK_EXIST(Global_34573, "DISABLE_HORSE_WHISTLE"))
		{
			DECOR_REMOVE(Global_34573, "DISABLE_HORSE_WHISTLE");
		}
	}
	return;
}

void Function_8(var uParam0, int iParam1) //Position: 0x437 / 1079
{
	Function_6(uParam0, iParam1);
	return;
}

bool Function_9() //Position: 0x444 / 1092
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	struct<6> Var15;
	struct<6> Var21;
	struct<6> Var27;
	struct<6> Var33;
	struct<6> Var39;
	float fVar45;
	float fVar46;
	float fVar47;
	float fVar48;
	bool bVar49;
	int iVar50;
	
	switch (iLocal_49)
	{
		case 0x00000000:
			HUD_FADE_TO_LOADING_SCREEN();
			AI_IGNORE_ACTOR(Global_34573);
			iLocal_49 = 1;
			break;
		
		case 0x00000001:
			if (HUD_IS_FADED())
			{
				iLocal_49 = 2;
			}
			else if (!HUD_IS_FADING())
			{
				HUD_FADE_TO_LOADING_SCREEN();
			}
			break;
		
		case 0x00000002:
			STREAMING_EVICT_ALL();
			fLocal_255 = GET_CURRENT_GAME_TIME();
			if (iLocal_51 && iLocal_258 != 0)
			{
				Local_0.f_152 = GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, bLocal_276));
				Var15 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_19(StackVal, StackVal, Local_0.f_152, vLocal_261, 2.1f, 0.0f, 1.0f, 2) };
				Function_18(&Var15);
				vLocal_267 = { StackVal, StackVal, Function_18(&Var15) };
				bVar49 = GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(true, bLocal_276));
				GET_CURVE_POINT(Local_0.f_152, 1.0f, &Var21, 0);
				GET_CURVE_POINT(Local_0.f_152, 0.0f, &Var27, 0);
				GET_CURVE_POINT(bVar49, 1.0f, &Var33, 0);
				GET_CURVE_POINT(bVar49, 1.0f, &Var39, 0);
				fVar45 = Function_17(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var21, Var33);
				fVar46 = Function_17(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var21, Var39);
				fVar47 = Function_17(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var27, Var33);
				fVar48 = Function_17(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var27, Var39);
				if ((fVar45 > fVar47 && fVar45 > fVar48) || (fVar46 > fVar47 && fVar46 > fVar48))
				{
					Local_0.f_148 = 4294967295;
					UNK_0x19D652F9(Local_0.f_152, 20.0f, &Var15, &bVar9);
				}
				else
				{
					Local_0.f_148 = 1;
					UNK_0x19D652F9(Local_0.f_152, -20.0f, &Var15, &bVar9);
				}
				Function_18(&bVar9);
				vVar0 = { StackVal, StackVal, Function_18(&bVar9) };
				Function_16(StackVal, StackVal, StackVal, StackVal, vVar0, vLocal_261);
				vLocal_267 = { StackVal, StackVal, Function_16(StackVal, StackVal, StackVal, StackVal, vVar0, vLocal_261) };
				bLocal_270 = UNK_0x9C40E671(&vLocal_267);
			}
			else
			{
				vVar0 = { StackVal, StackVal, vLocal_261 };
				bLocal_270 = GET_OBJECT_HEADING(bLocal_260);
			}
			iVar50 = Function_15(StackVal, StackVal, vVar0, 0, 1, 1);
			if (iVar50 != Local_54[iLocal_2584])
			{
				Local_54[iLocal_2584] = iVar50;
			}
			if (iLocal_51 && iLocal_258 != 0)
			{
				Function_14(StackVal, StackVal, &vVar3, &vVar6, vVar0, bLocal_270, 0);
				STREAMING_OVERRIDE_MAIN_POI(vVar3, vVar6);
				STREAMING_SET_CUTSCENE_MODE(1);
				Function_13(StackVal, StackVal, vVar0, "", "", 1, 0);
			}
			else
			{
				Global_76888[03] = { StackVal, StackVal, vVar0 };
				Global_76888[13] = { StackVal, StackVal, vVar0 };
				Function_12(20);
				bLocal_289 = true;
				return 1;
			}
			iLocal_49 = 3;
		
		case 0x00000003:
			if (fLocal_255 + 1.0f) > GET_CURRENT_GAME_TIME()
			{
				iLocal_49 = 4;
			}
			break;
		
		case 0x00000004:
			if (STREAMING_IS_WORLD_LOADED() && ((Function_10(Local_54[iLocal_2584]) || Local_54[iLocal_2584] != 4294967295) || (iLocal_51 && iLocal_258 != 0)))
			{
				iLocal_49 = 6;
			}
			break;
		
		case 0x00000006:
			if (STREAMING_IS_WORLD_LOADED() && Function_10(Local_54[iLocal_2584]))
			{
				if (!Global_3391)
				{
					iLocal_49 = 7;
					return 1;
				}
			}
			break;
	}
	return 0;
}

int Function_10(int iParam0) //Position: 0x6B2 / 1714
{
	if (!Function_67(iParam0))
	{
		return 1;
	}
	return Function_11(&(Global_29008[iParam0]), 4);
}

int Function_11(var uParam0, int iParam1) //Position: 0x6CE / 1742
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_12(int iParam0) //Position: 0x6EA / 1770
{
	Function_8(&Global_78617 + 52, iParam0);
	return;
}

void Function_13(vector3 vParam0, char* cParam3, char* cParam4, var uParam5, var uParam6) //Position: 0x6FB / 1787
{
	Global_13112.f_72 = 4294967295;
	Global_13112 = { StackVal, StackVal, vParam0 };
	strcpy(&Global_13112 + 24, cParam3, 24);
	strcpy(&Global_13112 + 48, cParam4, 24);
	Global_13112.f_76 = uParam5;
	Global_13112.f_80 = uParam6;
}

var Function_14(bool bParam0, var uParam1, vector3 vParam2, bool bParam5, int iParam6) //Position: 0x732 / 1842
{
	bool bVar0;
	
	bVar0 = "";
	switch (iParam6)
	{
		case 0x00000000:
			bVar0 = "roam";
			break;
		
		case 0x00000001:
			bVar0 = "interior";
			break;
		
		case 0x00000002:
			bVar0 = "horse";
			break;
		
		case 0x00000003:
			bVar0 = "wagonDefault";
			break;
		
		case 0x00000004:
			bVar0 = "wagonShotgun";
			break;
		
		case 0x00000005:
			bVar0 = "wagonShotgun";
			break;
	}
	PRINTSTRING("GET_GAME_CAMERA_RESET_POSITION_HELPER called with position ");
	PRINTVECTOR(vParam2);
	PRINTSTRING(" and heading ");
	PRINTFLOAT(bParam5);
	PRINTSTRING(" and with arc ");
	PRINTSTRING(bVar0);
	PRINTNL();
	return GET_GAME_CAMERA_RESET_POSITION(bParam0, uParam1, vParam2, bParam5, bVar0);
}

var Function_15(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x859 / 2137
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

vector3 Function_16(vector3 vParam0, vector3 vParam3) //Position: 0x8F4 / 2292
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	VNORMALIZE(&vVar0);
	return StackVal, StackVal, vVar0;
}

var Function_17(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11) //Position: 0x912 / 2322
{
	vector3 vVar0;
	vector3 vVar3;
	
	Function_18(&uParam0);
	vVar0 = { StackVal, StackVal, Function_18(&uParam0) };
	Function_18(&bParam6);
	vVar3 = { StackVal, StackVal, Function_18(&bParam6) };
	return VDIST(vVar0, vVar3);
}

vector3 Function_18(bool bParam0) //Position: 0x937 / 2359
{
	vector3 vVar0;
	
	vVar0.x = *bParam0;
	vVar0.f_4 = StackVal;
	vVar0.f_8 = StackVal;
	return StackVal, StackVal, vVar0;
}

struct<24> Function_19(bool bParam0, vector3 vParam1, bool bParam4, float fParam5, float fParam6, int iParam7) //Position: 0x956 / 2390
{
	bool bVar0;
	struct<13> Var1;
	float fVar19;
	bool bVar20;
	bool bVar21;
	
	if (!fParam6 <= fParam5)
	{
		fVar19 = fParam6;
		fParam6 = fParam5;
		fParam5 = fVar19;
	}
	GET_CURVE_POINT(bParam0, fParam5, &Var1, 0);
	Function_18(&Var1);
	bVar20 = VDIST(Function_18(&Var1), vParam1);
	Var13 = { StackVal, StackVal, StackVal, StackVal, StackVal, Var1 };
	while (Var1.f_12 >= fParam6 && !bVar0)
	{
		Var7 = { StackVal, StackVal, StackVal, StackVal, StackVal, Var1 };
		UNK_0x19D652F9(bParam0, FABS(bParam4), &Var7, &Var1);
		Function_18(&Var1);
		bVar21 = VDIST(Function_18(&Var1), vParam1);
		if (bVar21 > bVar20)
		{
			bVar20 = bVar21;
			Var13 = { StackVal, StackVal, StackVal, StackVal, StackVal, Var1 };
		}
		if (Function_22(&Var1))
		{
			bVar0 = true;
		}
	}
	if (iParam7 < 1 && bParam4 < 1.0f)
	{
		UNK_0x19D652F9(bParam0, (bParam4 / 2.0f), &Var13, &Var1);
		UNK_0x19D652F9(bParam0, (-1.0f * (bParam4 / 2.0f)), &Var13, &Var7);
		return StackVal, StackVal, StackVal, StackVal, StackVal, Function_19(StackVal, StackVal, bParam0, vParam1, (bParam4 / 10.0f), Function_21(Var7.f_12, Var1.f_12), Function_20(Var7.f_12, Var1.f_12), (iParam7 - 1));
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var13;
}

var Function_20(int iParam0, int iParam1) //Position: 0xA44 / 2628
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

float Function_21(int iParam0, int iParam1) //Position: 0xA57 / 2647
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool Function_22(int iParam0) //Position: 0xA6A / 2666
{
	if (iParam0->f_12 > 0.001f || iParam0->f_12 < 0.999f)
	{
		return 1;
	}
	return 0;
}

void Function_23() //Position: 0xA8B / 2699
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_281))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_281);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_280))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_280);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_279))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_279);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_282))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_282);
	}
	return;
}

void Function_24() //Position: 0xACD / 2765
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	struct<6> Var7;
	struct<6> Var13;
	struct<6> Var19;
	struct<6> Var25;
	float fVar31;
	float fVar32;
	float fVar33;
	float fVar34;
	int iVar35;
	
	bVar0 = Function_66();
	vVar1 = { 0.0f, 0.0f, -2.5f };
	ROTATE_VECTOR_XZ(&vVar1, GET_HEADING(bVar0), 0);
	GET_OBJECT_POSITION(bVar0, &vVar4);
	vLocal_264 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar1, vVar4, StackVal) };
	if (iLocal_258 != 0 && iLocal_51)
	{
		if (StackVal || StackVal != 2 != 1)
		{
			bLocal_52 = false;
		}
		if (bLocal_52)
		{
			bLocal_276 = Global_28235.f_12;
			vLocal_261 = { StackVal, StackVal, *(&Global_28235 + 48) };
		}
		else
		{
			bLocal_276 = Global_28210.f_12;
			vLocal_261 = { StackVal, StackVal, *(&Global_28210 + 48) };
		}
		Local_0.f_152 = GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET((GET_OBJECTSET_SIZE(bLocal_276) - 1), bLocal_276));
		GET_CURVE_POINT(Local_0.f_152, 1.0f, &Var7, 0);
		GET_CURVE_POINT(Local_0.f_152, 0.0f, &Var13, 0);
		GET_CURVE_POINT(GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET((GET_OBJECTSET_SIZE(bLocal_276) - 2), bLocal_276)), 1.0f, &Var19, 0);
		GET_CURVE_POINT(GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET((GET_OBJECTSET_SIZE(bLocal_276) - 2), bLocal_276)), 0.0f, &Var25, 0);
		fVar31 = Function_17(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var7, Var19);
		fVar32 = Function_17(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var7, Var25);
		fVar33 = Function_17(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var13, Var19);
		fVar34 = Function_17(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var13, Var25);
		if ((fVar31 > fVar33 && fVar31 > fVar34) || (fVar32 > fVar33 && fVar32 > fVar34))
		{
			Local_0.f_148 = 1;
			*(&Local_0 + 24) = { StackVal, StackVal, StackVal, StackVal, StackVal, Var7 };
		}
		else
		{
			Local_0.f_148 = 4294967295;
			*(&Local_0 + 24) = { StackVal, StackVal, StackVal, StackVal, StackVal, Var13 };
		}
		if (Global_30842[52])
		{
			iVar35 = 0;
			while (iVar35 <= GET_OBJECTSET_SIZE(bLocal_276))
			{
				iVar35++;
			}
		}
	}
	return;
}

var Function_25(bool bParam0) //Position: 0xC3F / 3135
{
	bool bVar0;
	bool bVar1;
	char* cVar2[24];
	
	if (!IS_LAYOUTREF_VALID(Global_28841))
	{
		return "";
	}
	if (!Function_67(bParam0))
	{
		return "";
	}
	bVar1 = CREATE_OBJECT_ITERATOR(Global_28841);
	ITERATE_ON_OBJECT_TYPE(bVar1, 9);
	memcpy(&cVar2, Global_29155[bParam010].f_20, 6);
	ITERATE_ON_PARTIAL_NAME(bVar1, &cVar2);
	stradd(&cVar2, "v_coach_park", 24);
	bVar0 = START_OBJECT_ITERATOR(bVar1);
	while (IS_OBJECT_VALID(bVar0))
	{
		if (STRINGS_ARE_EQUAL(&cVar2, GET_OBJECT_NAME(bVar0)))
		{
			DESTROY_ITERATOR(bVar1);
			return bVar0;
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bVar1);
	}
	bVar0 = "";
	DESTROY_ITERATOR(bVar1);
	return bVar0;
}

void Function_26() //Position: 0xCCE / 3278
{
	float fVar0;
	
	if (IS_ACTOR_VALID(Function_66()))
	{
		fVar0 = GET_STICK_Y(GET_PLAYER_PADINDEX(Global_34573), 0, 1);
	}
	else
	{
		fVar0 = GET_STICK_Y(GET_PLAYER_PADINDEX_NO_ACTOR(0), 0, 1);
	}
	if (iLocal_51)
	{
		if (StackVal || (StackVal && (StackVal && StackVal == 2 == 1) != 2) != 1)
		{
			bLocal_52 = true;
		}
		if (bLocal_52)
		{
			if (!Function_39(StackVal, StackVal, StackVal, StackVal, vLocal_271, *(&Global_28235 + 24)))
			{
				Function_33(&Local_54);
				vLocal_271 = { StackVal, StackVal, *(&Global_28235 + 24) };
				iLocal_278 = 0;
				Function_32(Function_66());
				Local_54[iLocal_2784].f_8 = CEIL(VDIST(Function_32(Function_66()), vLocal_271));
				Function_30(&Local_54, iLocal_278);
			}
		}
		else if (!Function_39(StackVal, StackVal, StackVal, StackVal, vLocal_271, *(&Global_28210 + 24)))
		{
			Function_33(&Local_54);
			vLocal_271 = { StackVal, StackVal, *(&Global_28210 + 24) };
			iLocal_278 = 0;
			Function_32(Function_66());
			Local_54[iLocal_2784].f_8 = CEIL(VDIST(Function_32(Function_66()), vLocal_271));
			Function_30(&Local_54, iLocal_278);
		}
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 2) == 1)
		{
			iLocal_51 = 0;
			bLocal_52 = false;
			iLocal_278 = 2;
			Function_30(&Local_54, iLocal_278);
			Function_29(&Local_54);
		}
	}
	else if (IS_ACTOR_VALID(Function_66()))
	{
		if (IS_ACTOR_ALIVE(Function_66()))
		{
			if (StackVal || StackVal != 2 != 1)
			{
				iLocal_51 = 1;
				Function_33(&Local_54);
				vLocal_271 = { StackVal, StackVal, *(&Global_28210 + 24) };
				iLocal_278 = 0;
				Function_32(Function_66());
				Local_54[iLocal_2784].f_8 = CEIL(VDIST(Function_32(Function_66()), vLocal_271));
				Function_30(&Local_54, iLocal_278);
			}
			else if (StackVal || StackVal != 2 != 1)
			{
				iLocal_51 = 1;
				bLocal_52 = true;
				Function_33(&Local_54);
				vLocal_271 = { StackVal, StackVal, *(&Global_28235 + 24) };
				iLocal_278 = 0;
				Function_32(Function_66());
				Local_54[iLocal_2784].f_8 = CEIL(VDIST(Function_32(Function_66()), vLocal_271));
				Function_30(&Local_54, iLocal_278);
			}
		}
	}
	if ((fLocal_274 + 0.3f) - Function_21(0.15f, ((0.15f * TO_FLOAT(iLocal_275)) / 5.0f))) > GET_CURRENT_GAME_TIME()
	{
		if (fVar0 > -0.5f || Function_28(12, 1, 0))
		{
			iLocal_278 = Function_27(&Local_54, iLocal_278);
			Function_30(&Local_54, iLocal_278);
			fLocal_274 = GET_CURRENT_GAME_TIME();
			bLocal_275++;
		}
		else if (fVar0 < 0.5f || Function_28(14, 1, 0))
		{
			iLocal_278 = Function_48(&Local_54, iLocal_278, 0);
			Function_30(&Local_54, iLocal_278);
			fLocal_274 = GET_CURRENT_GAME_TIME();
			bLocal_275++;
		}
		else
		{
			fLocal_274 = 0.0f;
			bLocal_275 = true;
		}
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_281))
	{
		if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(bLocal_281) || (IS_BUTTON_PRESSED(GET_PLAYER_PADINDEX_NO_ACTOR(0), 6, 1, true) && UI_ISFOCUSED("HudSceneOnline")))
		{
			iLocal_258 = iLocal_278;
			iLocal_48 = 4;
			return;
		}
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_282))
	{
		if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(bLocal_282) || (IS_BUTTON_PRESSED(GET_PLAYER_PADINDEX_NO_ACTOR(0), 4, 1, true) && UI_ISFOCUSED("HudSceneOnline")))
		{
			iLocal_258 = 1;
			iLocal_48 = 4;
			Function_23();
			bLocal_53 = false;
		}
	}
	return;
}

int Function_27(var uParam0, int iParam1) //Position: 0xFC3 / 4035
{
	int iVar0;
	bool bVar1;
	
	iVar0 = (iParam1 - 1);
	if (iVar0 <= 0)
	{
		iVar0 = (*uParam0 - 1);
	}
	while (!StackVal)
	{
		iVar0 = (iVar0 - 1);
		if (iVar0 > 0 && !bVar1)
		{
			iVar0 = (*uParam0 - 1);
			bVar1 = true;
		}
		else if (iVar0 > 0 && bVar1)
		{
			if (Function_67((*uParam0)[04]))
			{
			}
			return 0;
		}
	}
	if (Function_67((*uParam0)[iVar04]))
	{
	}
	return iVar0;
}

int Function_28(int iParam0, int iParam1, bool bParam2) //Position: 0x1034 / 4148
{
	int iVar0;
	bool bVar1;
	
	iVar0 = GET_PLAYER_PADINDEX_NO_ACTOR(0);
	bVar1 = IS_BUTTON_DOWN(iVar0, iParam0, iParam1, bParam2);
	if (bVar1)
	{
		switch (iParam0)
		{
			case 0x0000000E:
			case 0x0000000C:
				if (IS_BUTTON_DOWN(iVar0, 15, iParam1, bParam2) || IS_BUTTON_DOWN(iVar0, 13, iParam1, bParam2))
				{
					return 0;
				}
				break;
			
			case 0x0000000F:
			case 0x0000000D:
				if (IS_BUTTON_DOWN(iVar0, 14, iParam1, bParam2) || IS_BUTTON_DOWN(iVar0, 12, iParam1, bParam2))
				{
					return 0;
				}
				break;
			}
	}
	return bVar1;
}

void Function_29(int iParam0) //Position: 0x10B1 / 4273
{
	(*iParam0)[04] = 4294967295;
	iParam0[04]->f_4 = 0;
	iParam0[04]->f_8 = 99999999;
	return;
}

void Function_30(int iParam0, int iParam1) //Position: 0x10D1 / 4305
{
	char* cVar0[32];
	
	if (iLocal_51 && iParam1 != 0)
	{
		strcpy(&cVar0, "PASS_COACH_Waypoint", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_31((*iParam0)[iParam14]) };
	}
	SET_USE_CONTEXT_TEXT(bLocal_281, "MP_PASS_COACH_CurrentDest", &cVar0, 0, 0, 0);
	return;
}

struct<32> Function_31(int iParam0) //Position: 0x1133 / 4403
{
	char* cVar0[32];
	
	strcpy(&cVar0, "INVALID REGION", 32);
	if (!Function_67(iParam0))
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	if (IS_VOLUME_VALID(StackVal))
	{
		strcpy(&cVar0, GET_OBJECT_NAME(StackVal), 32);
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	switch (StackVal)
	{
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
			memcpy(&cVar0, Global_29155[iParam010].f_20, 8);
			stradd(&cVar0, "v_region", 32);
			break;
		
		default:
			if (IS_VOLUME_VALID(StackVal))
			{
				strcpy(&cVar0, GET_OBJECT_NAME(StackVal), 32);
			}
			break;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

vector3 Function_32(bool bParam0) //Position: 0x11F0 / 4592
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_33(int iParam0) //Position: 0x1201 / 4609
{
	iParam0[04]->f_4 = 1;
	iParam0[04]->f_8 = ROUND(Function_38(Global_28210.f_12));
	(*iParam0)[04] = Function_37(StackVal, StackVal, *(&Global_28210 + 24), 1);
	iParam0[04]->f_12 = Function_34(StackVal, (*iParam0)[04]);
	return;
}

int Function_34(int iParam0, int iParam1) //Position: 0x1247 / 4679
{
	int iVar0;
	
	if (Function_35(3) > 5)
	{
		return 0;
	}
	iVar0 = 1;
	if (Function_67(iParam0))
	{
		if (StackVal == 5)
		{
			iVar0 = 5;
		}
	}
	return (iVar0 * ROUND((0.67f * POW((IntToFloat(iParam1) * 0.01f), 0.9f))));
}

int Function_35(int iParam0) //Position: 0x128F / 4751
{
	if (Function_36() || Global_34165.f_44)
	{
		return StackVal;
	}
	return StackVal;
}

var Function_36() //Position: 0x12B7 / 4791
{
	return NET_IS_MANAGER_INITIALIZED();
}

var Function_37(vector3 vParam0, bool bParam3) //Position: 0x12C0 / 4800
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

var Function_38(bool bParam0) //Position: 0x132B / 4907
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(bParam0))
	{
		bVar1 = (bVar1 + CURVE_CALCULATE_DISTANCE_BY_STEP_SIZE(GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bParam0)), 0.0f, 1.0f, 50.0f));
		bVar0++;
	}
	return bVar1;
}

bool Function_39(vector3 vParam0, vector3 vParam3) //Position: 0x1362 / 4962
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

bool Function_40(var uParam0, float fParam1) //Position: 0x138F / 5007
{
	if (Function_44(uParam0))
	{
		if (Function_41(uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_41(int iParam0) //Position: 0x13AB / 5035
{
	if (Function_44(iParam0))
	{
		if (Function_42(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_42(int iParam0) //Position: 0x1473 / 5235
{
	return Function_43(*iParam0, 2);
}

int Function_43(var uParam0, int iParam1) //Position: 0x1480 / 5248
{
	return (uParam0 && iParam1) == 0;
}

bool Function_44(var uParam0) //Position: 0x148D / 5261
{
	return Function_43(*uParam0, 1);
}

bool Function_45() //Position: 0x149A / 5274
{
	return Global_78480.f_24 == 4294967294;
}

void Function_46(var uParam0, int iParam1) //Position: 0x14AA / 5290
{
	struct<8> Var0;
	
	Function_23();
	bLocal_282 = ADD_SCRIPT_USE_CONTEXT("mp_Exit_Teleport", 10, 4, false, 0, 0, 0, 4294967295, 0);
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_31((*uParam0)[iParam14]) };
	if (IS_PS3() && Function_47())
	{
		bLocal_281 = ADD_SCRIPT_USE_CONTEXT(&Var0, 10, 5, false, 0, 0, 0, 4294967295, 0);
	}
	else
	{
		bLocal_281 = ADD_SCRIPT_USE_CONTEXT(&Var0, 10, 6, false, 0, 0, 0, 4294967295, 0);
	}
	Function_30(uParam0, iParam1);
	if (iLocal_259 >= 1)
	{
		bLocal_279 = ADD_SCRIPT_USE_CONTEXT_STICK("PASS_COACH_PreviousDest", 10, 2, 0, 0, 0, 0, 4294967295, 0);
		bLocal_280 = ADD_SCRIPT_USE_CONTEXT_STICK("PASS_COACH_NextDest", 10, 3, 0, 0, 0, 0, 4294967295, 0);
	}
	return;
}

var Function_47() //Position: 0x156E / 5486
{
	return HAS_STRING_TABLE_LOADED("jp");
}

int Function_48(int iParam0, int iParam1, bool bParam2) //Position: 0x157C / 5500
{
	int iVar0;
	bool bVar1;
	
	if (bParam2)
	{
		return 0;
	}
	iVar0 = iParam1 + 1;
	if (iVar0 >= (*iParam0 - 1))
	{
		iVar0 = 0;
	}
	while (!StackVal)
	{
		iVar0++;
		if (iVar0 < (*iParam0 - 1) && !bVar1)
		{
			iVar0 = 0;
			bVar1 = true;
		}
		else if (iVar0 < (*iParam0 - 1) && bVar1)
		{
			if (Function_67((*iParam0)[04]))
			{
			}
			return 0;
		}
	}
	if (Function_67((*iParam0)[iVar04]))
	{
	}
	return iVar0;
}

var Function_49(var uParam0, int iParam1) //Position: 0x15F8 / 5624
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if ((StackVal && Function_67((*uParam0)[iVar04])) || (iParam1 && iVar0 != 0))
		{
			if (StackVal >= 500)
			{
				iVar1++;
			}
			else
			{
				uParam0[iVar04]->f_4 = 0;
			}
		}
		else
		{
			uParam0[iVar04]->f_4 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

bool Function_50(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0x165D / 5725
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	if (Global_30842[52])
	{
		fVar2 = 10000.0f;
	}
	else
	{
		fVar2 = 1500.0f;
	}
	fVar3 = GET_PROFILE_TIME();
	switch (*uParam1)
	{
		case 0x00000000:
			iVar1 = 0;
			while (iVar1 <= *uParam0)
			{
				(*uParam0)[iVar14] = 4294967295;
				uParam0[iVar14]->f_4 = 0;
				uParam0[iVar14]->f_8 = 99999999;
				iVar1++;
			}
			if (bParam3)
			{
				if (bParam4)
				{
					uParam0[04]->f_4 = 1;
					uParam0[04]->f_8 = ROUND(Function_38(Global_28235.f_12));
					(*uParam0)[04] = Function_37(StackVal, StackVal, *(&Global_28235 + 24), 1);
				}
				else
				{
					uParam0[04]->f_4 = 1;
					uParam0[04]->f_8 = ROUND(Function_38(Global_28210.f_12));
					(*uParam0)[04] = Function_37(StackVal, StackVal, *(&Global_28210 + 24), 1);
				}
			}
			*uParam1 = 1;
			break;
		
		case 0x00000001:
			if (((Global_29004 != 0 || Global_29004 != 2) || Function_55(48, 0)) || !Global_3365)
			{
				iVar0 = *uParam2;
				while (iVar0 < (Global_30640 - 1))
				{
					if (StackVal && !(StackVal && !(Function_11(&(Global_29008[Global_30640[iVar0]]), 32768) && (Function_11(&(Global_29008[Global_30640[iVar0]]), 4096) || !Global_3365)) != 5) != 6)
					{
						Function_51(uParam0, Global_30640[iVar0]);
						if ((GET_PROFILE_TIME() - fVar3) < fVar2 && iVar0 > (Global_30640 - 1))
						{
							*uParam2 = iVar0 + 1;
							return 0;
						}
					}
					iVar0++;
				}
			}
			*uParam2 = 0;
			*uParam1 = 2;
			break;
		
		case 0x00000002:
			if (((Global_29004 != 0 || Global_29004 != 2) || Function_55(48, 0)) || !Global_3365)
			{
				iVar0 = *uParam2;
				while (iVar0 < (Global_30668 - 1))
				{
					if (StackVal && !(StackVal && !(Function_11(&(Global_29008[Global_30668[iVar0]]), 32768) && (Function_11(&(Global_29008[Global_30668[iVar0]]), 4096) || !Global_3365)) != 5) != 6)
					{
						Function_51(uParam0, Global_30668[iVar0]);
						if ((GET_PROFILE_TIME() - fVar3) < fVar2 && iVar0 > (Global_30668 - 1))
						{
							*uParam2 = iVar0 + 1;
							return 0;
						}
					}
					iVar0++;
				}
			}
			*uParam2 = 0;
			*uParam1 = 3;
			break;
		
		case 0x00000003:
			if (((Global_29004 != 0 || Global_29004 != 2) || Function_55(48, 0)) || !Global_3365)
			{
				iVar0 = *uParam2;
				while (iVar0 < (Global_30658 - 1))
				{
					if (StackVal && !(StackVal && !(Function_11(&(Global_29008[Global_30658[iVar0]]), 32768) && (Function_11(&(Global_29008[Global_30658[iVar0]]), 4096) || !Global_3365)) != 5) != 6)
					{
						Function_51(uParam0, Global_30658[iVar0]);
						if ((GET_PROFILE_TIME() - fVar3) < fVar2 && iVar0 > (Global_30658 - 1))
						{
							*uParam2 = iVar0 + 1;
							return 0;
						}
					}
					iVar0++;
				}
			}
			*uParam2 = 0;
			*uParam1 = 4;
			break;
		
		case 0x00000004:
			if (((Global_29004 != 0 || Global_29004 != 2) || Function_55(48, 0)) || !Global_3365)
			{
				iVar0 = *uParam2;
				while (iVar0 < (Global_30679 - 1))
				{
					if (StackVal && !(StackVal && !(Function_11(&(Global_29008[Global_30679[iVar0]]), 32768) && (Function_11(&(Global_29008[Global_30679[iVar0]]), 4096) || !Global_3365)) != 5) != 6)
					{
						Function_51(uParam0, Global_30679[iVar0]);
						if ((GET_PROFILE_TIME() - fVar3) < fVar2 && iVar0 > (Global_30679 - 1))
						{
							*uParam2 = iVar0 + 1;
							return 0;
						}
					}
					iVar0++;
				}
			}
			*uParam2 = 0;
			*uParam1 = 5;
			break;
		
		case 0x00000005:
			if (((Global_29004 != 0 || Global_29004 != 2) || Function_55(48, 0)) || !Global_3365)
			{
				iVar0 = *uParam2;
				while (iVar0 < (Global_30723 - 1))
				{
					if (StackVal && !(StackVal && !(Function_11(&(Global_29008[Global_30723[iVar0]]), 32768) && (Function_11(&(Global_29008[Global_30723[iVar0]]), 4096) || !Global_3365)) != 5) != 6)
					{
						Function_51(uParam0, Global_30723[iVar0]);
						if ((GET_PROFILE_TIME() - fVar3) < fVar2 && iVar0 > (Global_30723 - 1))
						{
							*uParam2 = iVar0 + 1;
							return 0;
						}
					}
					iVar0++;
				}
			}
			*uParam2 = 0;
			*uParam1 = 6;
			break;
		
		case 0x00000006:
			if (((Global_29004 != 0 || Global_29004 != 2) || Function_55(48, 0)) || !Global_3365)
			{
				iVar0 = *uParam2;
				while (iVar0 < (Global_30717 - 1))
				{
					if (StackVal && !(StackVal && !(Function_11(&(Global_29008[Global_30717[iVar0]]), 32768) && (Function_11(&(Global_29008[Global_30717[iVar0]]), 4096) || !Global_3365)) != 5) != 6)
					{
						Function_51(uParam0, Global_30717[iVar0]);
						if ((GET_PROFILE_TIME() - fVar3) < fVar2 && iVar0 > (Global_30717 - 1))
						{
							*uParam2 = iVar0 + 1;
							return 0;
						}
					}
					iVar0++;
				}
			}
			*uParam2 = 0;
			*uParam1 = 7;
			break;
		
		case 0x00000007:
			if ((Global_29004 != 1 || Function_55(48, 0)) || !Global_3365)
			{
				iVar0 = *uParam2;
				while (iVar0 < (Global_30685 - 1))
				{
					if (StackVal && !(StackVal && !(Function_11(&(Global_29008[Global_30685[iVar0]]), 32768) && (Function_11(&(Global_29008[Global_30685[iVar0]]), 4096) || !Global_3365)) != 5) != 6)
					{
						Function_51(uParam0, Global_30685[iVar0]);
						if ((GET_PROFILE_TIME() - fVar3) < fVar2 && iVar0 > (Global_30685 - 1))
						{
							*uParam2 = iVar0 + 1;
							return 0;
						}
					}
					iVar0++;
				}
			}
			*uParam2 = 0;
			*uParam1 = 8;
			break;
		
		case 0x00000008:
			if ((Global_29004 != 1 || Function_55(48, 0)) || !Global_3365)
			{
				iVar0 = *uParam2;
				while (iVar0 < (Global_30693 - 1))
				{
					if (StackVal && !(StackVal && !(Function_11(&(Global_29008[Global_30693[iVar0]]), 32768) && (Function_11(&(Global_29008[Global_30693[iVar0]]), 4096) || !Global_3365)) != 5) != 6)
					{
						Function_51(uParam0, Global_30693[iVar0]);
						if ((GET_PROFILE_TIME() - fVar3) < fVar2 && iVar0 > (Global_30693 - 1))
						{
							*uParam2 = iVar0 + 1;
							return 0;
						}
					}
					iVar0++;
				}
			}
			*uParam2 = 0;
			*uParam1 = 9;
			break;
		
		case 0x00000009:
			if ((Global_29004 != 1 || Function_55(48, 0)) || !Global_3365)
			{
				iVar0 = *uParam2;
				while (iVar0 < (Global_30707 - 1))
				{
					if (StackVal && !(StackVal && !(Function_11(&(Global_29008[Global_30707[iVar0]]), 32768) && (Function_11(&(Global_29008[Global_30707[iVar0]]), 4096) || !Global_3365)) != 5) != 6)
					{
						Function_51(uParam0, Global_30707[iVar0]);
						if ((GET_PROFILE_TIME() - fVar3) < fVar2 && iVar0 > (Global_30707 - 1))
						{
							*uParam2 = iVar0 + 1;
							return 0;
						}
					}
					iVar0++;
				}
			}
			*uParam2 = 0;
			*uParam1 = 10;
			break;
		
		case 0x0000000A:
			if (Global_30842[52])
			{
				iVar0 = 0;
				while (iVar0 <= *uParam0)
				{
					if (StackVal)
					{
						if (Function_67((*uParam0)[iVar04]) && !iVar0 != 0)
						{
						}
						else if (iVar0 == 0)
						{
						}
					}
					iVar0++;
				}
			}
			*uParam2 = 0;
			return 1;
			break;
	}
	return 0;
}

void Function_51(var uParam0, int iParam1) //Position: 0x1E3C / 7740
{
	var uVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	GET_OBJECT_POSITION(StackVal, &uVar0);
	iVar3 = Function_52(iParam1);
	iVar4 = 1;
	while (StackVal && (StackVal > iVar3 && iVar4 > (*uParam0 - 1)))
	{
		iVar4++;
	}
	iVar5 = iVar4;
	iVar6 = iParam1;
	iVar8 = iVar3;
	while (StackVal && iVar5 > (*uParam0 - 1))
	{
		iVar9 = StackVal;
		iVar7 = (*uParam0)[iVar54];
		uParam0[iVar54]->f_8 = iVar8;
		(*uParam0)[iVar54] = iVar6;
		uParam0[iVar54]->f_4 = 1;
		iVar8 = iVar9;
		iVar6 = iVar7;
		iVar5++;
	}
	if (!StackVal)
	{
		uParam0[iVar54]->f_8 = iVar8;
		(*uParam0)[iVar54] = iVar6;
		uParam0[iVar54]->f_4 = 1;
	}
	return;
}

int Function_52(int iParam0) //Position: 0x1F09 / 7945
{
	vector3 vVar0;
	
	GET_OBJECT_POSITION(StackVal, &vVar0);
	return Function_53(StackVal, StackVal, vVar0, 0);
}

int Function_53(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x1F26 / 7974
{
	vector3 vVar0;
	var uVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	
	iVar4 = 16;
	if (bParam3)
	{
		iVar4 = 393264;
	}
	bVar5 = CREATE_OBJECTSET_IN_LAYOUT("tempPathSet", Global_28841, 36, 1);
	if (FIND_TRAFFIC_PATH(Global_28841, bVar5, &Global_34574, &uParam0, iVar4, &uVar3))
	{
		bVar6 = ROUND(Function_38(bVar5));
		Function_54(bVar5);
		DESTROY_OBJECTSET(bVar5);
		return bVar6;
	}
	Function_54(bVar5);
	DESTROY_OBJECTSET(bVar5);
	return ROUND(VDIST(Global_34574, vVar0));
}

void Function_54(bool bParam0) //Position: 0x1F9C / 8092
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

int Function_55(int iParam0, bool bParam1) //Position: 0x1FDC / 8156
{
	int iVar0;
	
	iVar0 = Function_57(iParam0);
	if (!Function_56(iVar0))
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

bool Function_56(int iParam0) //Position: 0x2019 / 8217
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_57(int iParam0) //Position: 0x2030 / 8240
{
	if (!Function_58(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_58(int iParam0) //Position: 0x204A / 8266
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_59(int iParam0) //Position: 0x2060 / 8288
{
	if (!Function_44(iParam0))
	{
		Function_60(iParam0, 0.0f);
	}
	return;
}

void Function_60(var uParam0, float fParam1) //Position: 0x2075 / 8309
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_6(uParam0, 1);
	Function_5(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_61(int iParam0) //Position: 0x2096 / 8342
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

void Function_62(int iParam0) //Position: 0x20AA / 8362
{
	Function_63(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_63(var uParam0, int iParam1) //Position: 0x20E3 / 8419
{
	Function_5(uParam0, iParam1);
	return;
}

bool Function_64(bool bParam0, int iParam1) //Position: 0x20F0 / 8432
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (Function_65(iParam1, 1))
			{
				if (IS_ACTOR_CRIPPLED(bParam0, 3) || IS_ACTOR_CRIPPLED(bParam0, 4))
				{
					return 0;
				}
			}
			if (Function_65(iParam1, 2))
			{
				if (IS_ACTOR_HOGTIED(bParam0))
				{
					return 0;
				}
			}
			if (Function_65(iParam1, 4))
			{
				if (IS_ACTOR_BEING_DRAGGED(bParam0, 1.0f))
				{
					return 0;
				}
			}
			if (Function_65(iParam1, 8))
			{
				if (UNK_0x7A207FFE(bParam0))
				{
					return 0;
				}
			}
			if (Function_65(iParam1, 1024))
			{
				if (!IS_ACTOR_RIDING(bParam0) && !IS_ACTOR_RIDING_VEHICLE(bParam0))
				{
					return 0;
				}
			}
			if (Function_65(iParam1, 16))
			{
				if (IS_ACTOR_RAGDOLL(bParam0))
				{
					return 0;
				}
			}
			if (Function_65(iParam1, 32))
			{
				if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
				{
					return 0;
				}
			}
			if (Function_65(iParam1, 64))
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

bool Function_65(var uParam0, bool bParam1) //Position: 0x21C9 / 8649
{
	return (uParam0 && bParam1) == 0;
}

bool Function_66() //Position: 0x21D6 / 8662
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

bool Function_67(int iParam0) //Position: 0x21EB / 8683
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

