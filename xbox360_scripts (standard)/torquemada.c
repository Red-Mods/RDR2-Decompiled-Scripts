//Decompiled with MagicRDR v1.0
//Function Count : 97
//Statics Count : 292
//Natives Count : 139
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	struct<185> Local_4 = { 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	int iLocal_289 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_145 = 0;
	ALLOW_TUMBLEWEEDS(0);
	Function_96("Initializing Torquemada", 3);
	SET_DUST_LEVEL(3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_146 = 1000;
		switch (iLocal_145)
		{
			case 0x00000000:
				if (Global_3389)
				{
					iLocal_145 = 1;
				}
				bLocal_146 = false;
				break;
			
			case 0x00000001:
				if (Function_94())
				{
					Global_62981 = 0;
					if (Function_93(28, 0) || Function_87(28))
					{
						Function_86(&Global_6987, &Global_8209, 0, 393, "tor/officer_Br_TOR");
						Function_86(&Global_6987, &Global_8209, 1, 379, "tor/sentry_early_Br_TOR");
						Function_86(&Global_6987, &Global_8209, 2, 380, "tor/sentry_late_Br_TOR");
						Function_86(&Global_6987, &Global_8209, 3, 391, "tor/tor_grunt");
						Function_86(&Global_6987, &Global_8209, 4, 393, "tor/tor_grunt1");
						Function_86(&Global_6987, &Global_8209, 5, 379, "tor/tor_grunt2");
						Function_86(&Global_6987, &Global_8209, 6, 379, "tor/tor_grunt3");
					}
					else
					{
						Function_86(&Global_6987, &Global_8209, 0, 521, "tor/officer_Br_TOR");
						Function_86(&Global_6987, &Global_8209, 1, 516, "tor/sentry_early_Br_TOR");
						Function_86(&Global_6987, &Global_8209, 2, 517, "tor/sentry_late_Br_TOR");
						Function_86(&Global_6987, &Global_8209, 3, 522, "tor/tor_grunt");
						Function_86(&Global_6987, &Global_8209, 4, 523, "tor/tor_grunt1");
						Function_86(&Global_6987, &Global_8209, 5, 518, "tor/tor_grunt2");
						Function_86(&Global_6987, &Global_8209, 6, 519, "tor/tor_grunt3");
					}
					iLocal_145 = 2;
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(16, 10, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(16, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(16, 4, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(16, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(16, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 4, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 4, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 27, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 27, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 27, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 27, 2);
				}
				bLocal_146 = false;
				break;
			
			case 0x00000002:
				if (Function_77())
				{
					Function_76(&(Global_29008[iScriptParam_0]), 32);
					iLocal_145 = 3;
				}
				bLocal_146 = false;
				break;
			
			case 0x00000003:
				bLocal_147 = LAUNCH_NEW_SCRIPT_WITH_ARGS("TorquemadaVol", &iScriptParam_0, 2, 0);
				Function_75(&Global_6987, &Global_8209, iScriptParam_0);
				iLocal_145 = 5;
				bLocal_146 = false;
				break;
			
			case 0x00000005:
				if (Function_74(&Global_6987, &Global_8209, iScriptParam_0))
				{
					iLocal_145 = 4;
					bLocal_146 = false;
				}
				else
				{
					bLocal_146 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_73(&(Global_29008[iScriptParam_0]), 16) && Function_72(Global_29155[iScriptParam_010]))
				{
					iLocal_145 = 6;
				}
				bLocal_146 = false;
				break;
			
			case 0x00000006:
				Function_71(0, &uLocal_148, 366,573f, 79,448f, 3448,399f);
				Function_70(0, &uLocal_148, 348,565f, 79,448f, 3448,445f);
				Function_69(0, &uLocal_148, 361,697f, 76,298f, 3442,627f);
				Function_68(0, &uLocal_148, 366,573f, 79,448f, 3448,399f);
				Function_67(0, &uLocal_148, 361,697f, 76,298f, 3442,627f);
				Function_66(0, &uLocal_148, 365,03f, 73,201f, 3447,946f);
				Function_65(0, &uLocal_148, Local_70);
				Function_71(1, &uLocal_148, 380,25f, 76,226f, 3465,269f);
				Function_70(1, &uLocal_148, 371,202f, 76,298f, 3454,809f);
				Function_69(1, &uLocal_148, 349,76f, 76,298f, 3436,495f);
				Function_68(1, &uLocal_148, 336,815f, 76,298f, 3441,679f);
				Function_67(1, &uLocal_148, 358,921f, 76,298f, 3443,924f);
				Function_66(1, &uLocal_148, 343,969f, 76,365f, 3443,132f);
				Function_65(1, &uLocal_148, Local_70);
				Function_71(2, &uLocal_148, 357,814f, 77,448f, 3460,764f);
				Function_70(2, &uLocal_148, 350,345f, 77,267f, 3463,675f);
				Function_69(2, &uLocal_148, 336,815f, 76,298f, 3441,679f);
				Function_68(2, &uLocal_148, 349,76f, 76,298f, 3436,495f);
				Function_67(2, &uLocal_148, 355,532f, 76,298f, 3444,031f);
				Function_66(2, &uLocal_148, 380,25f, 76,226f, 3465,269f);
				Function_65(2, &uLocal_148, Local_70);
				Function_71(3, &uLocal_148, 357,777f, 80,609f, 3463,729f);
				Function_70(3, &uLocal_148, 364,604f, 76,298f, 3456,388f);
				Function_69(3, &uLocal_148, 358,453f, 76,298f, 3438,8f);
				Function_68(3, &uLocal_148, 357,777f, 80,609f, 3463,729f);
				Function_67(3, &uLocal_148, 358,453f, 76,298f, 3438,8f);
				Function_66(3, &uLocal_148, 357,814f, 77,448f, 3460,764f);
				Function_65(3, &uLocal_148, Local_70);
				Function_71(4, &uLocal_148, 341,64f, 82,3f, 3451,988f);
				Function_70(4, &uLocal_148, 341,464f, 86,3f, 3452,961f);
				Function_69(4, &uLocal_148, 340,683f, 79,605f, 3448,368f);
				Function_68(4, &uLocal_148, 345,595f, 79,448f, 3441,132f);
				Function_67(4, &uLocal_148, 342,737f, 82,3f, 3456,587f);
				Function_66(4, &uLocal_148, 341,464f, 86,3f, 3452,961f);
				Function_65(4, &uLocal_148, Local_70);
				Function_71(5, &uLocal_148, 341,464f, 86,3f, 3452,961f);
				Function_70(5, &uLocal_148, 342,737f, 82,3f, 3456,587f);
				Function_69(5, &uLocal_148, 339,105f, 82,637f, 3448,275f);
				Function_68(5, &uLocal_148, 337,729f, 79,474f, 3451,363f);
				Function_67(5, &uLocal_148, 356,315f, 76,3f, 3439,85f);
				Function_66(5, &uLocal_148, 342,964f, 78,988f, 3452,149f);
				Function_65(5, &uLocal_148, Local_70);
				Function_71(6, &uLocal_148, 343,969f, 76,365f, 3443,132f);
				Function_70(6, &uLocal_148, 345,595f, 79,448f, 3441,132f);
				Function_69(6, &uLocal_148, 348,565f, 79,448f, 3448,445f);
				Function_68(6, &uLocal_148, 343,952f, 82,649f, 3446,1f);
				Function_67(6, &uLocal_148, 341,64f, 82,3f, 3451,988f);
				Function_66(6, &uLocal_148, 348,565f, 79,448f, 3448,445f);
				Function_65(6, &uLocal_148, Local_70);
				Function_61(&Global_6987, &Global_8209, &uLocal_148, Global_6289, iScriptParam_0);
				if (Function_73(&(Global_29008[iScriptParam_0]), 256) || !Function_60(2))
				{
					iLocal_289 = 1;
				}
				Function_76(&(Global_29008[iScriptParam_0]), 8);
				if (Function_73(&(Global_29008[iScriptParam_0]), 131072))
				{
					Function_59(&(Global_29008[iScriptParam_0]), 131072);
					iLocal_145 = 10;
				}
				else
				{
					iLocal_145 = 7;
				}
				bLocal_146 = false;
				break;
			
			case 0x00000007:
				Function_45(&Global_62527, 8, Global_30707[3], "$/content/Mexico/Mini_Games/FiveFingerFillet_TOR/FiveFingerFillet_TOR", 4294967295, 0, "TorFiveFinger", 353, 354,429f, 76,298f, 3447,638f, 2,5f, 0, FIND_VOLUME_IN_LAYOUT(Local_4, "torv_fff"));
				Function_44(&Global_62527, 8, 1);
				Function_43(&Global_62527, 8);
				iLocal_145 = 8;
				bLocal_146 = false;
				break;
			
			case 0x00000008:
				Function_39(StackVal, 0, 0,5f, 4, Local_4, 1);
				Function_38(64);
				if (Function_37(iScriptParam_0, &Global_6987, iLocal_289))
				{
					Function_33(2, 4294967295, 4294967295, 0, 3);
					Function_30(Local_4);
				}
				else
				{
					Function_33(1, 10, 6, 10, 0);
					Function_30(Local_4);
					Function_29(StackVal, 0);
					Function_29(StackVal, 0);
					Function_29(StackVal, 0);
					Function_29(StackVal, 0);
					Function_29(StackVal, 0);
					Function_29(StackVal, 0);
					Function_29(StackVal, 0);
				}
				Function_76(&(Global_29008[iScriptParam_0]), 512);
				iLocal_145 = 9;
				bLocal_146 = false;
				break;
			
			case 0x00000009:
				Function_27(Local_4, iScriptParam_0);
				Function_76(&(Global_29008[iScriptParam_0]), 4);
				Function_26("Finished Initializing Torquemada", 5.0f);
				iLocal_145 = 10;
				bLocal_146 = false;
				break;
			
			case 0x0000000A:
				if (!Function_25(Global_62981, 8))
				{
					if (Function_21(&(Global_30707[3])))
					{
						Function_20(&Global_62981, 8);
					}
				}
				if (Function_73(&(Global_29008[iScriptParam_0]), 131072))
				{
					iLocal_145 = 6;
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_146);
	}
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(16, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(16, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(16, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(16, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(16, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 27);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 27);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 27);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 27);
	Function_11(&Global_6987, &Global_8209, iScriptParam_0, (iLocal_289 || Global_3380));
	Function_10();
	Function_5();
	Function_1(iScriptParam_0);
	SET_DUST_LEVEL(2);
	Function_59(&(Global_29008[iScriptParam_0]), 32);
	Function_59(&(Global_29008[iScriptParam_0]), 64);
	Function_59(&(Global_29008[iScriptParam_0]), 8);
	Function_59(&(Global_29008[iScriptParam_0]), 512);
	Function_59(&(Global_29008[iScriptParam_0]), 4);
	if (IS_SCRIPT_VALID(bLocal_147))
	{
		TERMINATE_SCRIPT(bLocal_147);
	}
	ALLOW_TUMBLEWEEDS(1);
	Function_26("Unloaded Torquemada", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0xAB6 / 2742
{
	int iVar0;
	
	if (!Function_4(iParam0))
	{
	}
	iVar0 = 0;
	while (iVar0 <= Global_17483)
	{
		if (Global_17483[iVar075].f_92 == iParam0)
		{
			Function_2(iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_2(int iParam0) //Position: 0xAEC / 2796
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Global_17483[iParam075].f_120 = 0;
	Global_25263 = (Global_25263 - 1);
	return;
}

bool Function_3(int iParam0) //Position: 0xB0E / 2830
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_4(int iParam0) //Position: 0xB24 / 2852
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_5() //Position: 0xB3A / 2874
{
	Function_6(&Local_70 + 4);
	RELEASE_LAYOUT_REF(Local_70);
	return;
}

void Function_6(int iParam0) //Position: 0xB4C / 2892
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_7(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_7(var uParam0, int iParam1) //Position: 0xB72 / 2930
{
	if (Function_9(uParam0[iParam13], 4))
	{
		if (Function_9(uParam0[iParam13], 1))
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
			Function_8(uParam0[iParam13], 1);
			Function_8(uParam0[iParam13], 2);
			Function_8(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_8(var uParam0, int iParam1) //Position: 0xCA0 / 3232
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_9(int iParam0, int iParam1) //Position: 0xCBA / 3258
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10() //Position: 0xCD7 / 3287
{
	Function_6(&Local_4 + 4);
	RELEASE_LAYOUT_REF(Local_4);
	return;
}

void Function_11(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0xCE9 / 3305
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	
	if (StackVal != 5 && Function_19())
	{
		return;
	}
	if (Function_73(&(Global_29008[iParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(Function_18(iParam2), 12));
		Function_59(&(Global_29008[iParam2]), 0x40000000);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (!Function_17(uParam0[iVar02], 1))
		{
			if ((!(*uParam1)[iVar03] != 4294967295 && !(*uParam1)[iVar03] != 0) && Function_17(uParam0[iVar02], 8))
			{
				STREAMING_EVICT_ACTOR((*uParam1)[iVar03], 4294967295);
				Function_16(uParam0[iVar02], 8);
			}
		}
		if (UNK_0x214AFB8C(StackVal) && Function_17(uParam0[iVar02], 16))
		{
			STREAMING_EVICT_GRINGO(StackVal);
			Function_16(uParam0[iVar02], 16);
		}
		iVar0++;
	}
	if (!Function_73(&(Global_29008[iParam2]), 8))
	{
		bParam3 = true;
	}
	bVar1 = true;
	if (!Function_60(2) || Function_73(&(Global_29008[iParam2]), 256))
	{
		bVar1 = false;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (Function_17(uParam0[iVar02], 2) && !Function_17(uParam0[iVar02], 4))
		{
			Function_12(uParam0, uParam1, iVar0, bParam3);
		}
		if (bVar1)
		{
			if (Function_17(uParam0[iVar02], 2) && !Function_17(uParam0[iVar02], 4))
			{
				iVar2++;
			}
			else
			{
				iVar3++;
			}
		}
		iVar0++;
	}
	if (bVar1)
	{
		bVar4 = FIND_OBJECT_IN_LAYOUT(Global_6289, "ncorpseSet");
		bVar5 = GET_OBJECTSET_FROM_OBJECT(bVar4);
		if (IS_OBJECTSET_VALID(bVar5))
		{
			iVar0 = 0;
			while (GET_OBJECTSET_SIZE(bVar5) >= 0)
			{
				DESTROY_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, bVar5));
				CLEAN_OBJECTSET(bVar5);
			}
			DESTROY_OBJECTSET(bVar5);
		}
		if (StackVal && !(((iVar2 != 0 && iVar3 < 0) && !iParam2 != 4294967295) && !bParam3) != 3)
		{
			Function_76(&(Global_29008[iParam2]), 2048);
		}
	}
}

void Function_12(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0xED4 / 3796
{
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (!IS_PERS_CHAR_ALIVE(StackVal))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(StackVal) > GET_CURRENT_GAME_TIME())
			{
				Function_15(uParam0[iParam22], 4);
				uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
				ADD_TIME(uParam0[iParam22] + 4, Function_14(Global_29007), Function_13(Global_29007), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_17(uParam0[iParam22], 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(StackVal, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(StackVal);
			uParam1[iParam23]->f_8 = "";
		}
	}
	else if (!Function_17(uParam0[iParam22], 1) && !bParam3)
	{
		Function_15(uParam0[iParam22], 4);
		uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
		ADD_TIME(uParam0[iParam22] + 4, Function_14(Global_29007), Function_13(Global_29007), false, 0);
	}
}

int Function_13(int iParam0) //Position: 0x1023 / 4131
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

int Function_14(int iParam0) //Position: 0x104E / 4174
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

void Function_15(var uParam0, int iParam1) //Position: 0x1082 / 4226
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_16(var uParam0, int iParam1) //Position: 0x1091 / 4241
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_17(var uParam0, int iParam1) //Position: 0x10A8 / 4264
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_18(int iParam0) //Position: 0x10C4 / 4292
{
	if (!Function_4(iParam0))
	{
		return "";
	}
	if (iParam0 == Global_30640[0])
	{
		return "nArmadillo";
	}
	if (iParam0 == Global_30640[1])
	{
		return "RidgewoodFarm";
	}
	if (iParam0 == Global_30640[2])
	{
		return "nTwinRocks";
	}
	if (iParam0 == Global_30658[0])
	{
		return "Tumbleweed";
	}
	if (iParam0 == Global_30640[4])
	{
		return "CootsChapel";
	}
	if (iParam0 == Global_30693[4])
	{
		return "Sepulcro";
	}
	if (iParam0 == Global_30658[1])
	{
		return "RathskellerFork";
	}
	if (iParam0 == Global_30658[3])
	{
		return "GaptoothBreach";
	}
	if (iParam0 == Global_30658[2])
	{
		return "SolomonsFolly";
	}
	if (iParam0 == Global_30658[4])
	{
		return "BenedictPoint";
	}
	if (iParam0 == Global_30668[0])
	{
		return "HennigansRanch";
	}
	if (iParam0 == Global_30668[1])
	{
		return "ThievesLanding";
	}
	if (iParam0 == Global_30668[2])
	{
		return "PikesBasin";
	}
	if (iParam0 == Global_30679[1])
	{
		return "FortMercer";
	}
	if (iParam0 == Global_30679[0])
	{
		return "nPlainview";
	}
	if (iParam0 == Global_30685[0])
	{
		return "Escalera";
	}
	if (iParam0 == Global_30685[1])
	{
		return "Nosalida";
	}
	if (iParam0 == Global_30685[2])
	{
		return "TesoroAzul";
	}
	if (iParam0 == Global_30693[0])
	{
		return "nChuparosa";
	}
	if (iParam0 == Global_30693[1])
	{
		return "LasHermanas";
	}
	if (iParam0 == Global_30693[2])
	{
		return "AgaveViejo";
	}
	if (iParam0 == Global_30707[2])
	{
		return "CasaMadrugada";
	}
	if (iParam0 == Global_30707[1])
	{
		return "ElPresidio";
	}
	if (iParam0 == Global_30707[0])
	{
		return "ElMataderoTown";
	}
	if (iParam0 == Global_30707[3])
	{
		return "Torquemada";
	}
	if (iParam0 == Global_30723[1])
	{
		return "ManzanitaPost";
	}
	if (iParam0 == Global_30723[2])
	{
		return "PacificUnionRailroadCamp";
	}
	if (iParam0 == Global_30723[0])
	{
		return "Cochinay";
	}
	if (iParam0 == Global_30717[1])
	{
		return "BeechersHope";
	}
	if (iParam0 == Global_30717[0])
	{
		return "Blackwater";
	}
	if (iParam0 == Global_30717[3])
	{
		return "WreckSerendipity";
	}
	if (iParam0 == Global_30628[0])
	{
		return "ChollaSprings";
	}
	if (iParam0 == Global_30628[1])
	{
		return "GaptoothRidge";
	}
	if (iParam0 == Global_30628[2])
	{
		return "HennigansStead";
	}
	if (iParam0 == Global_30628[3])
	{
		return "RioBravo";
	}
	if (iParam0 == Global_30633[0])
	{
		return "PuntaOrgullo";
	}
	if (iParam0 == Global_30633[2])
	{
		return "Perdido";
	}
	if (iParam0 == Global_30633[1])
	{
		return "DiezCoronas";
	}
	if (iParam0 == Global_30637[1])
	{
		return "nTallTrees";
	}
	if (iParam0 == Global_30637[0])
	{
		return "GreatPlains";
	}
	return "";
}

bool Function_19() //Position: 0x1572 / 5490
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_20(var uParam0, int iParam1) //Position: 0x157B / 5499
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_21(int iParam0) //Position: 0x158A / 5514
{
	bool bVar0;
	
	Function_24(*iParam0);
	bVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_24(*iParam0), 1.0f, "p_gen_chair01x", 1);
	if (IS_PHYSINST_VALID(bVar0))
	{
		SET_PROP_FIXED(bVar0, 1);
	}
	else
	{
		return 0;
		LOG_ERROR("Trying to make fivefingerfillet chair fixed but the physinst is invalid");
	}
	Function_23(*iParam0);
	bVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_23(*iParam0), 1.0f, "p_gen_chair01x", 1);
	if (IS_PHYSINST_VALID(bVar0))
	{
		SET_PROP_FIXED(bVar0, 1);
	}
	else
	{
		return 0;
		LOG_ERROR("Trying to make fivefingerfillet chair fixed but the physinst is invalid");
	}
	Function_22(iParam0);
	return 1;
}

void Function_22(int iParam0) //Position: 0x1692 / 5778
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	
	Function_24(*iParam0);
	vVar0 = { StackVal, StackVal, Function_24(*iParam0) };
	bVar3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_FiveFingerFillet", &vVar0, 1.0f, 0);
	if (IS_GRINGO_VALID(bVar3))
	{
		bVar4 = GRINGO_GET_USE_COMPONENT_EXT(bVar3, "UseCase1");
		if (IS_GRINGO_COMPONENT_VALID(bVar4))
		{
			bVar5 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bVar4, 0);
			while (bVar5 >= 4294967295)
			{
				bVar6 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar5, bVar4);
				bVar7 = GRINGO_GET_PROP_FROM_COMPONENT_EXT(bVar6, bVar3);
				if (IS_PHYSINST_VALID(bVar7))
				{
					SET_OBJECT_COLLIDE_WITH_MOVABLES(GET_OBJECT_FROM_PHYSINST(bVar7), 0);
					SET_OBJECT_COLLIDE_WITH_WORLD(GET_OBJECT_FROM_PHYSINST(bVar7), 0);
				}
				bVar5 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bVar4, bVar5 + 1);
			}
		}
	}
	return;
}

vector3 Function_23(int iParam0) //Position: 0x1771 / 6001
{
	if (iParam0 == Global_30640[0])
	{
		return -2194,299f, 16,57026f, 2593,136f;
	}
	if (iParam0 == Global_30668[1])
	{
		return 161,0631f, 73,82803f, 2294,619f;
	}
	if (iParam0 == Global_30685[0])
	{
		return -4274,766f, 18,07059f, 4453,27f;
	}
	if (iParam0 == Global_30707[3])
	{
		return 354,6982f, 76,28821f, 3447,546f;
	}
	if (iParam0 == Global_30723[1])
	{
		return -465,0943f, 152,3517f, 1596,716f;
	}
	LOG_ERROR("Returning invalid five finger fillet player seat");
	return 0.0f, 0.0f, 0.0f;
}

vector3 Function_24(int iParam0) //Position: 0x1843 / 6211
{
	if (iParam0 == Global_30640[0])
	{
		return -2194,388f, 16,57687f, 2592,54f;
	}
	if (iParam0 == Global_30668[1])
	{
		return 161,1002f, 73,83751f, 2294,133f;
	}
	if (iParam0 == Global_30685[0])
	{
		return -4274,772f, 18,07059f, 4453,844f;
	}
	if (iParam0 == Global_30707[3])
	{
		return 354,5946f, 76,28807f, 3448,024f;
	}
	if (iParam0 == Global_30723[1])
	{
		return -464,3469f, 152,3559f, 1596,59f;
	}
	LOG_ERROR("Returning invalid five finger fillet AI seat");
	return 0.0f, 0.0f, 0.0f;
}

bool Function_25(var uParam0, int iParam1) //Position: 0x1911 / 6417
{
	return (uParam0 && iParam1) == 0;
}

void Function_26(bool bParam0, float fParam1) //Position: 0x191E / 6430
{
	if (!Function_60(128))
	{
		return;
	}
	if (!STRING_CONTAINS_STRING(&Global_13133, cParam0))
	{
		strcpy(&Global_13133, bParam0, 64);
		Global_13133.f_68 = 2;
		Global_13133.f_64 = GET_CURRENT_GAME_TIME();
		Global_13133.f_72 = (Global_13133.f_64 + fParam1);
	}
	return;
}

void Function_27(bool bParam0, bool bParam1) //Position: 0x195C / 6492
{
	char[] cVar0[4];
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		LOG_ERROR("New region layout is not valid.");
		return;
	}
	Global_30616 = bParam0;
	Global_26361.f_12 = bParam1;
	Global_29006 = bParam1;
	if (IS_OBJECT_VALID(Global_29155[bParam110].f_32))
	{
		if (!IS_WORLD_SECTOR_LOADED(Global_29155[bParam110].f_32))
		{
			LOG_ERROR("We expect gRegionSector to be loaded if its valid");
		}
		MARK_REGION_READY(Global_29155[bParam110].f_32);
	}
	if (StackVal == 2)
	{
		strcpy(&cVar0, "", 4);
		Function_28(Global_29155[bParam110].f_20, cVar0);
	}
	if (!Global_3380 && !Function_19())
	{
		SET_RICH_PRESENCE(2, Global_29155[bParam110].f_36, 0, 0, 0);
	}
	DECOR_SET_INT(bParam0, "regid", bParam1);
	Global_30620 = 0;
	return;
}

void Function_28(var uParam0, int iParam1) //Position: 0x1A56 / 6742
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

int Function_29(bool bParam0, bool bParam1) //Position: 0x1A63 / 6755
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

void Function_30(bool bParam0) //Position: 0x1ADC / 6876
{
	vector3 vVar0;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		LOG_ERROR("Attempting to configure local law with an invalid layout");
		return;
	}
	Global_26361.f_16 = bParam0;
	Global_26361.f_20 = CREATE_OBJECT_ITERATOR(Global_26361.f_16);
	ITERATE_EVERYWHERE(Global_26361.f_20);
	ITERATE_ON_OBJECT_TYPE(Global_26361.f_20, 8);
	ITERATE_ON_PARTIAL_NAME(Global_26361.f_20, "clear_bounty");
	if (GET_NUM_ITERATOR_MATCHES(Global_26361.f_20) >= 0)
	{
		Global_26361.f_24 = START_OBJECT_ITERATOR(Global_26361.f_20);
		GET_OBJECT_POSITION(Global_26361.f_24, &vVar0);
		Global_26361.f_24 = GET_OBJECT_FROM_VOLUME(CREATE_VOLUME_IN_LAYOUT(Global_26361.f_16, Function_32(), 3, vVar0, 0.0f, 0.0f, 0.0f, 2.0f, 5.0f, 2.0f));
		Function_31(2097152);
	}
	ITERATE_ON_PARTIAL_NAME(Global_26361.f_20, "report_crime");
	return;
}

void Function_31(var uParam0) //Position: 0x1BC7 / 7111
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && uParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

var Function_32() //Position: 0x1BE4 / 7140
{
	int iVar0;
	
	return iVar0;
}

void Function_33(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x1BEC / 7148
{
	if (Global_26361 != 4294967295)
	{
		SET_FACTION_IS_LAWFUL_TO_ATTACK(Global_26361, 0);
	}
	if (StackVal != 4294967295)
	{
		SET_FACTION_IS_LAWFUL_TO_ATTACK(StackVal, 0);
	}
	Global_26376 = Global_26361;
	Global_26376.f_4 = StackVal;
	Global_26376.f_8 = StackVal;
	Global_26376.f_12 = Global_26361.f_12;
	Global_26376.f_16 = Global_26361.f_16;
	Global_26376.f_20 = Global_26361.f_20;
	Global_26376.f_24 = Global_26361.f_24;
	Global_26376.f_32 = Global_26361.f_32;
	Global_26376.f_40 = Global_26361.f_40;
	Global_26376.f_44 = Global_26361.f_44;
	Global_26361.f_8 = iParam0;
	Global_26361 = iParam1;
	Global_26361.f_4 = iParam2;
	Global_26361.f_40 = 99;
	Global_26361.f_44 = iParam3;
	Global_26361.f_48 = 0;
	Global_26361.f_52 = iParam4;
	Global_26361.f_56 = 0.0f;
	if (StackVal != StackVal)
	{
		Function_34();
	}
	if (iParam1 != 4294967295)
	{
		SET_FACTION_IS_LAWFUL_TO_ATTACK(iParam1, 0);
	}
	if (iParam2 != 4294967295)
	{
		SET_FACTION_IS_LAWFUL_TO_ATTACK(iParam2, 0);
	}
}

void Function_34() //Position: 0x1CD0 / 7376
{
	int iVar0;
	
	Global_26960 = Function_35(StackVal);
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (Global_26998[iVar018] != 0)
		{
			(*&Global_26960 + 4)[iVar0] = (*&Global_26401 + 36[iVar0181][35])[StackVal];
		}
		iVar0++;
	}
	return;
}

int Function_35(int iParam0) //Position: 0x1D1E / 7454
{
	if (!Function_36(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_36(int iParam0) //Position: 0x1D36 / 7478
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

bool Function_37(int iParam0, int iParam1, bool bParam2) //Position: 0x1D4B / 7499
{
	char* cVar0[64];
	struct<5> Var16;
	
	*iParam1[02] = { StackVal, *iParam1[02] };
	if (StackVal == 3)
	{
		return 0;
	}
	if (!Function_73(&(Global_29008[iParam0]), 2048))
	{
		return 0;
	}
	if (iParam0 != Global_30717[1] && Function_93(49, 0))
	{
		return 0;
	}
	if (bParam2)
	{
		return 0;
	}
	if (Function_19())
	{
		return 0;
	}
	strcpy(&cVar0, "$/content/init/pop/", 64);
	Var16 = iParam0;
	Var16.f_4 = *iParam1;
	stradd(&cVar0, &Global_29155[Global_30621[Global_29004]10] + 20, 64);
	stradd(&cVar0, "_ghost_town", 64);
	if (IS_SCRIPT_VALID(Global_30617))
	{
		TERMINATE_SCRIPT(Global_30617);
	}
	Global_30617 = LAUNCH_NEW_SCRIPT_WITH_ARGS(&cVar0, &Var16, 2, 0);
	return 1;
}

void Function_38(bool bParam0) //Position: 0x1E0B / 7691
{
	Global_26316.f_56 = (Global_26316.f_56 || bParam0);
	return;
}

void Function_39(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x1E1E / 7710
{
	bool bVar0;
	
	if (!IS_LAYOUTREF_VALID(bParam3))
	{
		LOG_ERROR("Invalid Layout passed to traffic system");
		return;
	}
	if (!IS_VOLUME_VALID(bParam4))
	{
		LOG_ERROR("Invalid Region Vol passed to traffic system");
		return;
	}
	if (NET_IS_IN_SESSION())
	{
		if (iParam2 != 1 || iParam2 != 2)
		{
			iParam2 = 4;
		}
	}
	Global_28842.f_4 = iParam2;
	Global_28842.f_12 = uParam0;
	Global_28842.f_20 = bParam3;
	Global_28842.f_24 = bParam4;
	Global_28842.f_32 = uParam1;
	bVar0 = CREATE_OBJECT_ITERATOR(Global_28842.f_20);
	if (IS_ITERATOR_VALID(bVar0))
	{
		ITERATE_ON_OBJECT_TYPE(bVar0, 9);
		ITERATE_ON_PARTIAL_NAME(bVar0, "region");
		if (GET_NUM_ITERATOR_MATCHES(bVar0) >= 0)
		{
			Global_28842.f_28 = GET_VOLUME_FROM_OBJECT(START_OBJECT_ITERATOR(bVar0));
		}
		DESTROY_ITERATOR(bVar0);
	}
	if (iParam2 != 2 || iParam2 != 1)
	{
		Function_42();
	}
	if (bParam5)
	{
		Function_40(1048576);
	}
}

void Function_40(int iParam0) //Position: 0x1F31 / 7985
{
	Function_41(&Global_28842, iParam0);
	return;
}

void Function_41(var uParam0, var uParam1) //Position: 0x1F3F / 7999
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_42() //Position: 0x1F5A / 8026
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_40(16384);
	}
	return;
}

void Function_43(var uParam0, int iParam1) //Position: 0x1F76 / 8054
{
	uParam0[iParam140]->f_128 |= 2097152;
	return;
}

void Function_44(var uParam0, int iParam1, float fParam2) //Position: 0x1F91 / 8081
{
	uParam0[iParam140]->f_140 = fParam2;
	uParam0[iParam140]->f_128 |= 8192;
	return;
}

void Function_45(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, char* cParam6, int iParam7, vector3 vParam8, int iParam11, bool bParam12, int iParam13) //Position: 0x1FB5 / 8117
{
	if (Function_19() && !bParam12)
	{
		return;
	}
	if (!Function_19() && bParam12)
	{
		return;
	}
	if (IS_OBJECTSET_VALID(Global_62968[iParam1]))
	{
		DESTROY_OBJECTSET(Global_62968[iParam1]);
	}
	uParam0[iParam140]->f_4 = Function_54(iParam2, iParam1, 4);
	if (STRING_LENGTH(bParam3) >= 0)
	{
		uParam0[iParam140]->f_8 = GET_ASSET_ID(bParam3, 4);
	}
	else
	{
		uParam0[iParam140]->f_8 = 4294967295;
	}
	uParam0[iParam140]->f_40 = "";
	uParam0[iParam140]->f_44 = "";
	uParam0[iParam140]->f_48 = iParam13;
	uParam0[iParam140]->f_96 = iParam7;
	uParam0[iParam140]->f_104 = 5;
	uParam0[iParam140]->f_128 = iParam5 | 64 | 128 | 256 | 512 | 1024 | 32;
	uParam0[iParam140]->f_132 = iParam4;
	uParam0[iParam140]->f_136 = 4294967295;
	uParam0[iParam140]->f_140 = 4294967295;
	uParam0[iParam140]->f_144 = 4294967295;
	strcpy(uParam0[iParam140] + 12, cParam6, 16);
	*(uParam0[iParam140] + 52) = { StackVal, StackVal, vParam8 };
	uParam0[iParam140]->f_64 = iParam11;
	uParam0[iParam140]->f_72 = iParam2;
	if (Global_25974[iParam1] && Function_53(iParam1))
	{
		Function_46(StackVal, StackVal, iParam2, (1 + iParam1), vParam8, 63);
	}
	uParam0[iParam140]->f_140 = 1;
	uParam0[iParam140]->f_128 |= 8192;
}

int Function_46(int iParam0, int iParam1, vector3 vParam2, int iParam5) //Position: 0x2101 / 8449
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	vector3 vVar4;
	vector3 vVar7;
	
	if (!Function_4(iParam0))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (Function_52(StackVal, StackVal, vParam2))
	{
		return 0;
	}
	iVar2 = Function_51(iParam1);
	iVar1 = 4294967295;
	uVar3 = Function_50(StackVal, StackVal, vParam2);
	if (iParam1 == 23 && iParam1 == 24)
	{
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal != iParam1 && Global_8723[iVar04] != iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	else
	{
		Function_49(uVar3);
		vVar7 = { StackVal, StackVal, Function_49(uVar3) };
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal == iParam1)
			{
				Function_49(StackVal);
				vVar4 = { StackVal, StackVal, Function_49(StackVal) };
				if (Function_48(StackVal, StackVal, StackVal, StackVal, vVar4, vVar7))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	if (iVar1 != 4294967295)
	{
		Global_8723[iVar14] = iParam0;
		Global_8723[iVar14].f_4 = iParam1;
		Global_8723[iVar14].f_8 = uVar3;
		Global_8723[iVar14].f_12 = iParam5;
		Global_9724[iVar1] = ADD_BLIP_FOR_COORD(&vParam2, Function_47(iParam1), 0.0f, 2, iVar2);
		if (iParam1 == 23)
		{
			SET_BLIP_COLOR(Global_9724[iVar1], 1.0f, 1.0f, 1.0f, 0,5f);
			SET_BLIP_NAME(Global_9724[iVar1], "BLIP_CHANCE");
		}
		else if (iParam1 == 11)
		{
			SET_BLIP_NAME(Global_9724[iVar1], "BLIP_HORSEBREAKING");
		}
		else if (iParam1 == 24)
		{
			SET_BLIP_NAME(Global_9724[iVar1], "BLIP_CHANCE");
		}
		UNK_0xFF3DB575(Global_9724[iVar1], 1);
		SET_BLIP_PRIORITY(Global_9724[iVar1], true);
		return iVar1;
	}
	return 0;
}

int Function_47(bool bParam0) //Position: 0x22E4 / 8932
{
	switch (bParam0)
	{
		case 0x00000001:
		case 0x00000002:
			return 433;
			break;
		
		case 0x00000003:
			return 349;
			break;
		
		case 0x00000004:
			return 327;
			break;
		
		case 0x00000005:
			return 351;
			break;
		
		case 0x00000006:
			return 350;
			break;
		
		case 0x00000008:
			return 426;
			break;
		
		case 0x00000009:
			return 353;
			break;
		
		case 0x0000000A:
			return 341;
			break;
		
		case 0x0000000B:
			return 327;
			break;
		
		case 0x0000000C:
			return 397;
			break;
		
		case 0x0000000D:
			return 399;
			break;
		
		case 0x0000000E:
			return 398;
			break;
		
		case 0x0000000F:
			return 520;
			break;
		
		case 0x00000010:
			return 326;
			break;
		
		case 0x00000011:
			return 420;
			break;
		
		case 0x00000012:
			return 421;
			break;
		
		case 0x00000013:
			return 346;
			break;
		
		case 0x00000014:
			return 354;
			break;
		
		case 0x00000015:
			return 525;
			break;
		
		case 0x00000016:
			return 383;
			break;
		
		case 0x00000017:
			return 411;
			break;
		
		case 0x00000018:
			return 411;
			break;
		
		default:
			break;
	}
	return 327;
}

bool Function_48(vector3 vParam0, vector3 vParam3) //Position: 0x241B / 9243
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_49(bool bParam0) //Position: 0x2448 / 9288
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	
	bVar3 = (bParam0 && 32767);
	bVar4 = SHIFT_RIGHT(bParam0, 15) & 32767;
	vVar0.x = TO_FLOAT(bVar3);
	vVar0.f_8 = TO_FLOAT(bVar4);
	if ((bParam0 && 1073741824) == 0)
	{
		vVar0.x = (vVar0.x * -1.0f);
	}
	if ((bParam0 && 2147483648) == 0)
	{
		vVar0.f_8 = (vVar0.z * -1.0f);
	}
	return StackVal, StackVal, vVar0;
}

var Function_50(vector3 vParam0) //Position: 0x249F / 9375
{
	bool bVar0;
	
	bVar0 = ((ROUND(FABS(vParam0.x)) && 32767) || SHIFT_LEFT((ROUND(FABS(vParam0.z)) && 32767), 15));
	if (vParam0.x < 0.0f)
	{
		bVar0 = (bVar0 || 1073741824);
	}
	if (vParam0.z < 0.0f)
	{
		bVar0 = (bVar0 || 2147483648);
	}
	return bVar0;
}

int Function_51(int iParam0) //Position: 0x24ED / 9453
{
	switch (iParam0)
	{
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000008:
		case 0x00000009:
			return 1;
			break;
		
		case 0x0000000A:
		case 0x0000000B:
		case 0x00000017:
			return 2;
			break;
		
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x00000015:
			return 3;
			break;
		
		case 0x00000010:
		case 0x00000011:
		case 0x00000012:
			return 6;
			break;
		
		case 0x00000016:
			return 0;
			break;
		
		case 0x00000013:
			return 5;
			break;
		
		case 0x00000014:
			return 4;
			break;
		
		default:
			break;
	}
	return 0;
}

bool Function_52(vector3 vParam0) //Position: 0x25A5 / 9637
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

int Function_53(int iParam0) //Position: 0x25BD / 9661
{
	int iVar0;
	
	iVar0 = (1 + iParam0);
	if (iVar0 > 0 || iVar0 <= Global_26031)
	{
		return 1;
	}
	return Global_26031[iVar0];
}

int Function_54(bool bParam0, bool bParam1, bool bParam2) //Position: 0x25E0 / 9696
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_58(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_55(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_55(bParam0, bParam1, bParam2, 4294967295);
}

int Function_55(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x263E / 9790
{
	var uVar0;
	
	if (!Function_57(bParam2))
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
	uVar0 = Function_58(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_56(uVar0);
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

int Function_56(int iParam0) //Position: 0x2793 / 10131
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

bool Function_57(int iParam0) //Position: 0x27D1 / 10193
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_58(int iParam0, int iParam1, int iParam2) //Position: 0x27E6 / 10214
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

void Function_59(var uParam0, int iParam1) //Position: 0x2806 / 10246
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_60(int iParam0) //Position: 0x281D / 10269
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_61(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4) //Position: 0x2839 / 10297
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_60(2))
	{
		return;
	}
	if (Function_73(&(Global_29008[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (Function_17(uParam0[iVar02], 2))
		{
			if (Function_62(uParam0[iVar02], uParam1[iVar03], iVar0, uParam2, uParam3, iParam4))
			{
				iVar1++;
			}
			else
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	if (StackVal == 3)
	{
		return;
	}
	if (iVar1 >= 0)
	{
		Function_59(&(Global_29008[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_76(&(Global_29008[iParam4]), 2048);
	}
}

bool Function_62(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5) //Position: 0x28EB / 10475
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_73(&(Global_29008[iParam5]), 256))
	{
		return 1;
	}
	if (!Function_17(uParam0, 2))
	{
		return 1;
	}
	if (Function_17(uParam0, 4))
	{
		if (IS_LATER_THAN(StackVal, false))
		{
			return 0;
		}
	}
	if (StackVal == "")
	{
		return 0;
	}
	strcpy(&cVar1, "__", 16);
	stradd(&cVar1, &Global_29155[iParam510] + 20, 16);
	stradd(&cVar1, "_char_", 16);
	straddi(&cVar1, iVar0, 16);
	if (!IS_PERS_CHAR_VALID(StackVal))
	{
		uParam1->f_8 = Function_64(StackVal, StackVal, StackVal, uParam4, &cVar1, *uParam1, *uParam3[iVar020], uParam3[iVar020]->f_76);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(*uParam3[iVar020]);
		PRINTNL();
		if (Function_52(StackVal, StackVal, *uParam3[iVar020]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_16(uParam0, 4);
	}
	Function_63(StackVal, uParam3[iVar020]);
	return 1;
}

int Function_63(bool bParam0, bool bParam1) //Position: 0x2A56 / 10838
{
	vector3 vVar0;
	bool bVar20;
	
	bVar20 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20))
	{
		if (!Function_52(StackVal, StackVal, *bParam1))
		{
			vVar0 = { StackVal, StackVal, *bParam1 };
		}
		if (!Function_52(StackVal, StackVal, *(bParam1 + 12)))
		{
			*(&vVar0 + 12) = { StackVal, StackVal, *(bParam1 + 12) };
		}
		if (!Function_52(StackVal, StackVal, *(bParam1 + 24)))
		{
			*(&vVar0 + 24) = { StackVal, StackVal, *(bParam1 + 24) };
		}
		if (!Function_52(StackVal, StackVal, *(bParam1 + 36)))
		{
			*(&vVar0 + 36) = { StackVal, StackVal, *(bParam1 + 36) };
		}
		if (!Function_52(StackVal, StackVal, *(bParam1 + 48)))
		{
			*(&vVar0 + 48) = { StackVal, StackVal, *(bParam1 + 48) };
		}
		if (!Function_52(StackVal, StackVal, *(bParam1 + 60)))
		{
			*(&vVar0 + 60) = { StackVal, StackVal, *(bParam1 + 60) };
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20);
	}
	return 0;
	return 0;
}

var Function_64(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, float fParam7) //Position: 0x2B92 / 11154
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	struct<73> Var5;
	
	if (fParam7 > 1.0f)
	{
		fParam7 = 60.0f;
	}
}

void Function_65(int iParam0, var uParam1, bool bParam2) //Position: 0x2CAB / 11435
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (!IS_LAYOUTREF_VALID(bParam2))
	{
		LOG_ERROR("Layout ref not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	uParam1[bVar020]->f_72 = bParam2;
	return;
}

void Function_66(int iParam0, var uParam1, vector3 vParam2) //Position: 0x2D06 / 11526
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_48(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Night Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 60) = { StackVal, StackVal, vParam2 };
}

void Function_67(int iParam0, var uParam1, vector3 vParam2) //Position: 0x2D6C / 11628
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_48(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Evening Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 48) = { StackVal, StackVal, vParam2 };
}

void Function_68(int iParam0, var uParam1, vector3 vParam2) //Position: 0x2DD4 / 11732
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_48(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Afternoon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 36) = { StackVal, StackVal, vParam2 };
}

void Function_69(int iParam0, var uParam1, vector3 vParam2) //Position: 0x2E3E / 11838
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_48(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Noon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 24) = { StackVal, StackVal, vParam2 };
}

void Function_70(int iParam0, var uParam1, vector3 vParam2) //Position: 0x2EA3 / 11939
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_48(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Morning Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 12) = { StackVal, StackVal, vParam2 };
}

void Function_71(int iParam0, var uParam1, vector3 vParam2) //Position: 0x2F0B / 12043
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_48(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Dawn Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*uParam1[bVar020] = { StackVal, StackVal, vParam2 };
}

int Function_72(int iParam0) //Position: 0x2F6E / 12142
{
	if (!Function_4(iParam0))
	{
		return 1;
	}
	return Function_73(&(Global_29008[iParam0]), 4);
}

bool Function_73(var uParam0, int iParam1) //Position: 0x2F8A / 12170
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_74(var uParam0, var uParam1, int iParam2) //Position: 0x2FA6 / 12198
{
	int iVar0;
	
	iVar0 = 0;
	if (!Function_4(iParam2))
	{
		return 1;
	}
	if (StackVal != 5 && Function_19())
	{
		return 1;
	}
	if (Function_73(&(Global_29008[iParam2]), 0x40000000))
	{
		if (!STREAMING_IS_GRINGO_DICTIONARY_LOADED(GET_ASSET_ID(Function_18(iParam2), 12)))
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (UNK_0x214AFB8C(StackVal) && Function_17(uParam0[iVar02], 16))
		{
			if (!STREAMING_IS_GRINGO_LOADED(StackVal))
			{
				return 0;
			}
		}
		if (StackVal == 5)
		{
			if ((!(*uParam1)[iVar03] != 4294967295 && !(*uParam1)[iVar03] != 0) && Function_17(uParam0[iVar02], 8))
			{
				if (!STREAMING_IS_ACTOR_LOADED((*uParam1)[iVar03], 4294967295))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void Function_75(var uParam0, var uParam1, int iParam2) //Position: 0x3072 / 12402
{
	int iVar0;
	
	iVar0 = 0;
	if (!Function_4(iParam2))
	{
		return;
	}
	if (StackVal != 5 && Function_19())
	{
		return;
	}
	if (!Function_73(&(Global_29008[iParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(Function_18(iParam2), 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(Function_18(iParam2), 12));
			Function_76(&(Global_29008[iParam2]), 0x40000000);
		}
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (UNK_0x214AFB8C(StackVal))
		{
			STREAMING_REQUEST_GRINGO(StackVal);
			Function_15(uParam0[iVar02], 16);
		}
		if (StackVal == 5)
		{
			if (!(*uParam1)[iVar03] != 4294967295 && !(*uParam1)[iVar03] != 0)
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], 4294967295, true);
				Function_15(uParam0[iVar02], 8);
			}
		}
		iVar0++;
	}
	return;
}

void Function_76(var uParam0, int iParam1) //Position: 0x3148 / 12616
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_77() //Position: 0x3157 / 12631
{
	bool bVar0;
	
	Function_85(3, 3);
	bVar0 = bVar0;
	Function_83(&Local_70 + 4, "$/content/scripting/gringo/simplegringo/mex_gateguards", 1, 0);
	Function_83(&Local_70 + 4, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_83(&Local_70 + 4, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_83(&Local_70 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_83(&Local_70 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_83(&Local_70 + 4, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_83(&Local_70 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_83(&Local_70 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_83(&Local_70 + 4, "$/content/scripting/gringo/simplegringo/sleeping_wall_scripted", 1, 0);
	Function_83(&Local_70 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_83(&Local_70 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_r", 1, 0);
	Function_83(&Local_70 + 4, "$/content/scripting/gringo/simplegringo/lean_fence_l", 1, 0);
	Function_83(&Local_70 + 4, "$/content/scripting/gringo/simplegringo/sleeping_scripted", 1, 0);
	Function_83(&Local_70 + 4, "$/content/scripting/gringo/simplegringo/mex_talking_soldiers_link", 1, 0);
	Function_83(&Local_70 + 4, "$/content/scripting/gringo/simplegringo/sit_cleanrifle", 1, 0);
	Function_83(&Local_70 + 4, "$/content/scripting/gringo/simplegringo/sit_cleanpistol", 1, 0);
	Function_83(&Local_70 + 4, "$/content/scripting/gringo/simplegringo/fivefingerfillet_spectate", 1, 0);
	Function_83(&Local_70 + 4, "$/content/scripting/gringo/simplegringo/mex_stool_sit", 1, 0);
	Function_83(&Local_70 + 4, "$/content/scripting/gringo/simplegringo/repair_kneel", 1, 0);
	Function_83(&Local_70 + 4, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_83(&Local_70 + 4, "$/content/scripting/gringo/simplegringo/fivefingerfillet_spectate_b", 1, 0);
	Function_83(&Local_70 + 4, "$/content/scripting/gringo/simplegringo/fivefingerfillet_spectate_c", 1, 0);
	Function_83(&Local_70 + 4, "$/content/scripting/gringo/simplegringo/locked_footlocker", 1, 0);
	if (!Function_78(&Local_70 + 4))
	{
		return 0;
	}
	Local_70 = FIND_NAMED_LAYOUT("Torquemada_layout");
	if (!IS_LAYOUTREF_VALID(Local_70))
	{
		Local_70 = CREATE_LAYOUT("Torquemada_layout");
	}
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_70, "mex_gateGuards", "mex_gateGuards", 344,1936f, 86,30775f, 3453,583f, 0.0f, -99,88123f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_70, "stand_lookdistance_w_any", "stand_lookdistance_w_any", 370,8496f, 76,29803f, 3453,738f, 0.0f, -103,2249f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_70, "look_distance_binocs", "look_distance_binocs", 336,815f, 76,298f, 3441,679f, 0.0f, 68,39206f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_70, "look_distance_binocs1", "look_distance_binocs", 374,2824f, 76,17789f, 3447,836f, 0.0f, -16,23489f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_70, "stand_lookdistance_w_any1", "stand_lookdistance_w_any", 345,595f, 79,448f, 3441,132f, 0.0f, -118,3615f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_70, "Rand_Idle_NearWall", "Rand_Idle_NearWall", 347,8919f, 79,448f, 3450,637f, 0.0f, -374,1032f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_70, "rand_idle_stand", "rand_idle_stand", 348,5652f, 79,44801f, 3448,445f, 0.0f, -95,97935f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_70, "look_distance_binocs2", "look_distance_binocs", 339,1049f, 82,63695f, 3448,275f, 0.0f, 75,84146f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_70, "look_distance_binocs3", "look_distance_binocs", 357,7766f, 80,60876f, 3463,729f, 0.0f, -94,60477f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_70, "stand_guntricks_e_any", "stand_guntricks_e_any", 341,464f, 86,3f, 3452,961f, 0.0f, -110,6105f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_70, "look_out_window_L", "look_out_window_L", 345,8349f, 76,31133f, 3440,769f, 0.0f, -102,4529f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_70, "Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", 371,674f, 73,148f, 3445,447f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_70, "sleeping_wall_scripted", "sleeping_wall_scripted", 358,4531f, 76,298f, 3438,8f, 0.0f, 158,3716f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_70, "smoking_stand", "smoking_stand", 361,6974f, 76,29804f, 3442,627f, 0.0f, 120,4494f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_70, "mex_gateGuards1", "mex_gateGuards", 367,059f, 79,44796f, 3442,328f, 0.0f, -21,17013f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_70, "rand_idle_stand1", "rand_idle_stand", 347,404f, 82,3f, 3452,502f, 0.0f, -106,977f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_70, "look_out_window_R", "look_out_window_R", 341,6405f, 82,3f, 3451,988f, 0.0f, 74,06854f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_70, "lean_fence_L", "lean_fence_L", 343,9521f, 82,649f, 3446,1f, 0.0f, -12,76428f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_70, "sleeping_scripted", "sleeping_scripted", 365,0297f, 73,20147f, 3447,946f, 0.0f, 66,03874f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_70, "mex_talking_soldiers_link", "mex_talking_soldiers_link", 367,193f, 73,14801f, 3446,274f, 0.0f, 74,02099f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_70, "sit_cleanrifle", "sit_cleanrifle", 364,9547f, 76,29881f, 3447,938f, 0.0f, -25,45916f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_70, "sit_cleanpistol", "sit_cleanpistol", 363,987f, 76,298f, 3447,426f, 0.0f, -26,07295f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_70, "mex_talking_soldiers_link1", "mex_talking_soldiers_link", 367,0298f, 76,30627f, 3446,386f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_70, "Rand_Idle_NearWall1", "Rand_Idle_NearWall", 340,7906f, 76,29723f, 3441,133f, 0.0f, 76,21307f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_70, "stand_lookdistance_w_any2", "stand_lookdistance_w_any", 350,3449f, 77,26659f, 3463,675f, 0.0f, -182,2557f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_70, "sleeping_wall_scripted1", "sleeping_wall_scripted", 357,8142f, 77,44831f, 3460,763f, 0.0f, 150,8202f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_70, "look_out_window_R1", "look_out_window_R", 355,4588f, 77,49743f, 3463,728f, 0.0f, 148,7434f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_70, "smoking_stand1", "smoking_stand", 355,1902f, 77,44971f, 3461,991f, 0.0f, -85,48868f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_70, "look_out_window_R2", "look_out_window_R", 340,043f, 78,95312f, 3456,053f, 0.0f, -192,4409f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_70, "sleeping_scripted1", "sleeping_scripted", 343,9695f, 76,36466f, 3443,132f, 0.0f, 72,74812f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_70, "mex_talking_soldiers_link2", "mex_talking_soldiers_link", 345,2915f, 76,29997f, 3441,914f, 0.0f, 93,51579f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_70, "sleeping_scripted2", "sleeping_scripted", 340,8023f, 79,6469f, 3448,12f, 0.0f, -91,80407f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_70, "smoking_stand2", "smoking_stand", 346,8443f, 79,44427f, 3448,066f, 0.0f, -110,7563f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_70, "Rand_Idle_Sit_Ground1", "Rand_Idle_Sit_Ground", 363,696f, 79,448f, 3447,04f, 0.0f, -79,36417f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_70.f_284 = CREATE_GRINGO_IN_LAYOUT(Local_70, "fivefingerfillet_spectate1", "fivefingerfillet_spectate", 356,5144f, 76,29012f, 3448,271f, 0.0f, 445,4167f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_70.f_284), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_70, "sleeping_scripted3", "sleeping_scripted", 336,2184f, 75,7496f, 3452,404f, 0.0f, 346,6501f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_70, "sleeping_wall_scripted2", "sleeping_wall_scripted", 339,667f, 75,79791f, 3451,814f, 0.0f, 76,51438f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_70, "mex_stool_sit", "mex_stool_sit", 341,0199f, 76,298f, 3448,688f, 0.0f, -14,60954f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_70, "lean_fence_L1", "lean_fence_L", 342,7368f, 82,3f, 3456,587f, 0.0f, 163,5319f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_70, "Rand_Idle_NearWall3", "Rand_Idle_NearWall", 338,9065f, 78,30585f, 3457,445f, 0.0f, -191,8235f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_70, "look_distance_binocs4", "look_distance_binocs", 342,2734f, 79,448f, 3441,831f, 0.0f, 68,39206f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_70, "repair_kneel", "repair_kneel", 363,198f, 76,29803f, 3454,416f, 0.0f, 182,3701f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_70, "sit_cleanrifle2", "sit_cleanrifle", 359,642f, 76,29803f, 3452,106f, 0.0f, -41,1807f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_70, "sit_cleanpistol1", "sit_cleanpistol", 364,6039f, 76,29803f, 3456,388f, 0.0f, -87,5335f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_70, "mex_talking_soldiers_link3", "mex_talking_soldiers_link", 337,7291f, 79,47359f, 3451,363f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_70, "mex_gateGuards2", "mex_gateGuards", 366,5725f, 79,44796f, 3448,399f, 0.0f, -137,3543f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_70, "mex_gateGuards3", "mex_gateGuards", 380,2504f, 76,22568f, 3465,269f, 0.0f, -93,72478f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_70, "stand_lookdistance_w_any3", "stand_lookdistance_w_any", 349,7604f, 76,29803f, 3436,495f, 0.0f, -366,433f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_70, "Rand_Idle_Sit_Ground2", "Rand_Idle_Sit_Ground", 342,9922f, 82,3f, 3451,988f, 0.0f, -73,92495f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_70, "Rand_Idle_Sit_Ground3", "Rand_Idle_Sit_Ground", 347,2877f, 76,29997f, 3446,599f, 0.0f, 18,40236f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_70, "sleeping_scripted4", "sleeping_scripted", 342,2989f, 78,95201f, 3454,812f, 0.0f, 172,4846f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_70, "stand_drunk_rowdydrink", "stand_drunk_rowdydrink", 354,9772f, 76,29803f, 3442,667f, 0.0f, -91,44349f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_70, "stand_drunk_rowdydrink1", "stand_drunk_rowdydrink", 358,9212f, 76,29803f, 3443,924f, 0.0f, 56,41193f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_70, "stand_drunk_rowdydrink2", "stand_drunk_rowdydrink", 361,6713f, 76,29804f, 3441,345f, 0.0f, 108,9294f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_70, "smoking_stand3", "smoking_stand", 356,3155f, 76,29964f, 3439,85f, 0.0f, 215,6479f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_70.f_288 = CREATE_GRINGO_IN_LAYOUT(Local_70, "fivefingerfillet_spectate_B", "fivefingerfillet_spectate_B", 357,207f, 76,29012f, 3448,271f, 0.0f, 80,01993f, 0.0f);
	Local_70.f_292 = CREATE_GRINGO_IN_LAYOUT(Local_70, "fivefingerfillet_spectate_C", "fivefingerfillet_spectate_C", 356,5144f, 76,29012f, 3446,935f, 0.0f, 114,4131f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_70, "stand_drunk_rowdydrink3", "stand_drunk_rowdydrink", 357,1731f, 76,29803f, 3444,734f, 0.0f, 0,6724875f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_70, "stand_drunk_rowdydrink4", "stand_drunk_rowdydrink", 355,5315f, 76,29803f, 3444,031f, 0.0f, -63,78448f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_70, "look_distance_binocs5", "look_distance_binocs", 372,9789f, 73,14801f, 3442,961f, 0.0f, -23,72541f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_70.f_296 = CREATE_GRINGO_IN_LAYOUT(Local_70, "Locked_Footlocker", "Locked_Footlocker", 339,1402f, 75,79791f, 3450,61f, 0.0f, 161,8286f, 0.0f);
	return 1;
}

bool Function_78(int iParam0) //Position: 0x4BD0 / 19408
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_82();
	iVar1 = 0;
	if (!Function_9(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_81(iParam0[iVar03], 8);
		}
		else if (Function_80())
		{
			iVar1 = 1;
			Function_81(iParam0[iVar03], 8);
		}
		Function_81(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_9(iParam0[iVar03], 4))
		{
			if (!Function_9(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_9(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_9(iParam0[03], 8) || iVar1));
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
				Function_81(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_9(iParam0[iVar03], 4))
		{
			if (!Function_9(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_81(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_81(iParam0[iVar03], 2);
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
							Function_81(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_81(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_81(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_81(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_81(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_81(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_81(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_81(iParam0[iVar03], 2);
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
	Function_79();
	return 1;
}

void Function_79() //Position: 0x4F4B / 20299
{
	if (!Function_60(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_80() //Position: 0x4F8B / 20363
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

void Function_81(var uParam0, int iParam1) //Position: 0x4FB6 / 20406
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_82() //Position: 0x4FC7 / 20423
{
	if (!Function_60(128))
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

var Function_83(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x5009 / 20489
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_84(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_81(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_84(var uParam0, int iParam1, int iParam2) //Position: 0x5041 / 20545
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_9(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_81(uParam0[iVar03], 4);
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

void Function_85(int iParam0, int iParam1) //Position: 0x5105 / 20741
{
	switch (iParam1)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			if (!iParam0 != 4)
			{
			}
			break;
		
		case 0x00000002:
			if (!iParam0 != 3)
			{
			}
			break;
		
		case 0x00000003:
			if (!iParam0 != 3)
			{
			}
			break;
	}
	return;
}

void Function_86(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x514E / 20814
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = uParam2;
	(*uParam1)[iVar03] = iParam3;
	if (!STRINGS_ARE_EQUAL(cParam4, ""))
	{
		strcpy(&cVar1, "$/content/scripting/gringo/gringobrains/", 64);
		stradd(&cVar1, bParam4, 64);
		uParam1[iVar03]->f_4 = GET_ASSET_ID(&cVar1, 1);
	}
	else
	{
		uParam1[iVar03]->f_4 = "";
	}
	Function_16(uParam0[iVar02], 1);
	Function_15(uParam0[iVar02], 2);
	Function_16(uParam0[iVar02], 8);
	Function_16(uParam0[iVar02], 16);
}

int Function_87(int iParam0) //Position: 0x51E8 / 20968
{
	int iVar0;
	
	if (!Function_92(iParam0))
	{
		return 0;
	}
	iVar0 = Function_91(iParam0);
	if (!Function_88(Function_91(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_88(int iParam0) //Position: 0x521E / 21022
{
	if (!Function_90(iParam0))
	{
		return 0;
	}
	if (!Function_89(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_89(int iParam0) //Position: 0x5242 / 21058
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_90(int iParam0) //Position: 0x5257 / 21079
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_91(int iParam0) //Position: 0x526E / 21102
{
	if (!Function_92(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_92(int iParam0) //Position: 0x5288 / 21128
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

int Function_93(int iParam0, bool bParam1) //Position: 0x529E / 21150
{
	int iVar0;
	
	iVar0 = Function_91(iParam0);
	if (!Function_90(iVar0))
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

bool Function_94() //Position: 0x52DB / 21211
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	
	Function_85(3, 3);
	uVar0 = uVar0;
	Function_83(&Local_4 + 4, "p_uti_cover2x1x", 0, 0);
	Function_83(&Local_4 + 4, "p_uti_cover1x1x", 0, 0);
	Function_83(&Local_4 + 4, "p_uti_cover1x2x", 0, 0);
	if (!Function_78(&Local_4 + 4))
	{
		return 0;
	}
	Local_4 = FIND_NAMED_LAYOUT("Torquemada_layout");
	if (!IS_LAYOUTREF_VALID(Local_4))
	{
		Local_4 = CREATE_LAYOUT("Torquemada_layout");
	}
	Local_4.f_52 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "fallVolumes_set");
	(*&Local_4 + 44)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "deathVolume01", 2, 392,0308f, 58,99847f, 3450,71f, -5,008644f, 0.0f, 0.0f, 153,4154f, 26,92656f, 97,87216f);
	ADD_TO_VOLUME_SET(Local_4.f_52, (*&Local_4 + 44)[0]);
	Local_4.f_64 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "stayVolumes_set");
	(*&Local_4 + 56)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "stayHere", 2, 357,1899f, 81,22784f, 3452,214f, 0.0f, -13,91785f, 0.0f, 28,01151f, 25,13843f, 25,08939f);
	ADD_TO_VOLUME_SET(Local_4.f_64, (*&Local_4 + 56)[0]);
	Local_4.f_76 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "warningZones_set");
	(*&Local_4 + 68)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "warningZone01", 2, 435,058f, 78,22583f, 3478,816f, 0.0f, 0.0f, 0.0f, 27,59585f, 31,56297f, 46,29986f);
	ADD_TO_VOLUME_SET(Local_4.f_76, (*&Local_4 + 68)[0]);
	Local_4.f_80 = CREATE_OBJECTSET_IN_LAYOUT("MainParkingFlagsSet", Local_4, 8, 0);
	*(&Local_4 + 84[06]) = { 420,465f, 78,305f, 3467,614f };
	*(&Local_4 + 84[06] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_4, "mainSpot01", 420,465f, 78,305f, 3467,614f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_4.f_80);
	*(&Local_4 + 84[16]) = { 409,4321f, 78,305f, 3478,012f };
	*(&Local_4 + 84[16] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_4, "mainSpot02", 409,4321f, 78,305f, 3478,012f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_4.f_80);
	*(&Local_4 + 84[26]) = { 437,619f, 78,305f, 3482,48f };
	*(&Local_4 + 84[26] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_4, "mainSpot03", 437,619f, 78,305f, 3482,48f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_4.f_80);
	*(&Local_4 + 84[36]) = { 443,292f, 78,306f, 3469,68f };
	*(&Local_4 + 84[36] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_4, "mainSpot04", 443,292f, 78,306f, 3469,68f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_4.f_80);
	Local_4.f_184 = CREATE_OBJECTSET_IN_LAYOUT("shootSpotSet", Local_4, 8, 0);
	*(&Local_4 + 188[06]) = { 357,7985f, 80,60876f, 3461,145f };
	*(&Local_4 + 188[06] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_4, "shootSpot01", 357,7985f, 80,60876f, 3461,145f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_4.f_184);
	*(&Local_4 + 188[16]) = { 366,8087f, 79,448f, 3448,187f };
	*(&Local_4 + 188[16] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_4, "shootSpot02", 366,8087f, 79,448f, 3448,187f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_4.f_184);
	*(&Local_4 + 188[26]) = { 344,8915f, 86,39453f, 3452,974f };
	*(&Local_4 + 188[26] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_4, "shootSpot03", 344,8915f, 86,39453f, 3452,974f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_4.f_184);
	Function_95(Local_4, "cover2x1x0", "p_uti_cover2x1x", 460,8912f, 57,32452f, 3270,573f, -5,200643f, -47,10938f, 1,784466f, 1);
	Function_95(Local_4, "cover2x1x1", "p_uti_cover2x1x", 489,3655f, 61,86654f, 3306,392f, 0.0f, 9,762145f, 0.0f, 1);
	Function_95(Local_4, "cover2x1x2", "p_uti_cover2x1x", 493,8774f, 61,66787f, 3302,123f, 0.0f, 9,762145f, 0.0f, 1);
	Function_95(Local_4, "cover2x1x3", "p_uti_cover2x1x", 498,86f, 61,80355f, 3303,899f, 0.0f, 9,762145f, 0.0f, 1);
	Function_95(Local_4, "cover1x1x0", "p_uti_cover1x1x", 505,992f, 61,927f, 3302,008f, 0.0f, 10,7046f, 0.0f, 1);
	Function_95(Local_4, "cover1x1x1", "p_uti_cover1x1x", 503,6855f, 62,22914f, 3305,215f, 0.0f, -5,693443f, 0.0f, 1);
	Function_95(Local_4, "cover2x1x4", "p_uti_cover2x1x", 493,9998f, 62,16194f, 3315,654f, 3,167407f, -15,6766f, -1,284288f, 1);
	Function_95(Local_4, "cover2x1x5", "p_uti_cover2x1x", 500,485f, 62,23291f, 3313,942f, 3,07622f, 7,557522f, -0,02265134f, 1);
	Function_95(Local_4, "cover2x1x6", "p_uti_cover2x1x", 498,3646f, 62,25168f, 3320,296f, 0.0f, -0,2778574f, 0.0f, 1);
	Function_95(Local_4, "cover2x1x7", "p_uti_cover2x1x", 485,3372f, 72,13361f, 3411,931f, 0.0f, -21,01811f, 0.0f, 1);
	Function_95(Local_4, "cover2x1x8", "p_uti_cover2x1x", 480,7056f, 71,55541f, 3409,766f, 0.0f, -21,26124f, 0.0f, 1);
	Function_95(Local_4, "cover2x1x9", "p_uti_cover2x1x", 477,3242f, 72,25035f, 3414,447f, 0.0f, -30,90436f, 0.0f, 1);
	Function_95(Local_4, "cover2x1x10", "p_uti_cover2x1x", 486,7031f, 71,33834f, 3400,996f, 0.0f, -18,62462f, 0.0f, 1);
	Function_95(Local_4, "cover2x1x11", "p_uti_cover2x1x", 479,5664f, 71,33834f, 3403,436f, 0.0f, -34,9731f, 0.0f, 1);
	Function_95(Local_4, "cover2x1x12", "p_uti_cover2x1x", 500,6425f, 71,27844f, 3404,259f, 0.0f, -45,78064f, 0.0f, 1);
	Function_95(Local_4, "cover2x1x13", "p_uti_cover2x1x", 497,2451f, 71,2976f, 3394,372f, 0.0f, -24,84036f, 0.0f, 1);
	Function_95(Local_4, "cover2x1x14", "p_uti_cover2x1x", 499,5828f, 71,30385f, 3389,528f, 0.0f, -5,06839f, 0.0f, 1);
	Function_95(Local_4, "cover1x1x2", "p_uti_cover1x1x", 500,044f, 71,30167f, 3389,883f, 0.0f, -29,53775f, 0.0f, 1);
	Function_95(Local_4, "cover2x1x15", "p_uti_cover2x1x", 498,9543f, 71,33834f, 3398,814f, 0.0f, -22,76542f, 0.0f, 1);
	Function_95(Local_4, "cover2x1x16", "p_uti_cover2x1x", 483,0232f, 78,30591f, 3461,749f, 0.0f, -26,56838f, 0.0f, 1);
	Function_95(Local_4, "cover1x1x3", "p_uti_cover1x1x", 481,2436f, 78,2822f, 3460,883f, 0.0f, -8,001889f, 0.0f, 1);
	Function_95(Local_4, "cover1x1x4", "p_uti_cover1x1x", 477,5339f, 78,30591f, 3460,62f, 0.0f, -1,084305f, 0.0f, 1);
	Function_95(Local_4, "cover1x2x0", "p_uti_cover1x2x", 474,2782f, 78,28907f, 3457,417f, 0.0f, -5,054489f, 0.0f, 1);
	Function_95(Local_4, "cover2x1x17", "p_uti_cover2x1x", 482,7878f, 77,59759f, 3447,238f, 0.0f, -6,860012f, 0.0f, 1);
	Function_95(Local_4, "cover2x1x18", "p_uti_cover2x1x", 475,9375f, 77,34521f, 3446,88f, 0.0f, 4,233506f, 0.0f, 1);
	Function_95(Local_4, "cover2x1x19", "p_uti_cover2x1x", 478,2231f, 78,20513f, 3454,611f, 0.0f, 0,687202f, 0.0f, 1);
	Function_95(Local_4, "cover2x1x20", "p_uti_cover2x1x", 492,4513f, 78,30591f, 3457,526f, 0.0f, -60,69448f, 0.0f, 1);
	Function_95(Local_4, "cover1x1x5", "p_uti_cover1x1x", 491,8693f, 78,30591f, 3458,391f, 0.0f, -28,95497f, 0.0f, 1);
	Function_95(Local_4, "cover2x1x21", "p_uti_cover2x1x", 434,5673f, 78,30591f, 3479,774f, 0.0f, -106,3993f, 0.0f, 1);
	Function_95(Local_4, "cover2x1x22", "p_uti_cover2x1x", 431,0085f, 78,30591f, 3469,074f, 0.0f, -91,46287f, 0.0f, 1);
	Function_95(Local_4, "cover2x1x23", "p_uti_cover2x1x", 426,4472f, 78,3059f, 3470,144f, 0.0f, -92,05626f, 0.0f, 1);
	Function_95(Local_4, "cover2x1x24", "p_uti_cover2x1x", 424,4719f, 78,30591f, 3478,935f, 0.0f, -103,5007f, 0.0f, 1);
	Function_95(Local_4, "cover2x1x25", "p_uti_cover2x1x", 429,6481f, 78,30591f, 3480,222f, 0.0f, -91,09704f, 0.0f, 1);
	Function_95(Local_4, "cover2x1x26", "p_uti_cover2x1x", 418,7616f, 78,30133f, 3477,69f, 0.0f, -102,7439f, 0.0f, 1);
	Function_95(Local_4, "cover2x1x27", "p_uti_cover2x1x", 417,4663f, 78,23176f, 3470,201f, 0.0f, -102,7439f, 0.0f, 1);
	Function_95(Local_4, "cover2x1x28", "p_uti_cover2x1x", 406,4864f, 77,34406f, 3466,41f, 0.0f, -102,7439f, 0.0f, 1);
	Function_95(Local_4, "cover1x1x6", "p_uti_cover1x1x", 402,2701f, 77,17135f, 3471,344f, -0,4310525f, -2,26991f, 10,7553f, 1);
	Function_95(Local_4, "cover2x1x29", "p_uti_cover2x1x", 399,4782f, 76,6347f, 3462,877f, 0.0f, -102,7439f, 0.0f, 1);
	Function_95(Local_4, "cover2x1x30", "p_uti_cover2x1x", 395,3109f, 76,44323f, 3471,184f, 0.0f, -102,7439f, 0.0f, 1);
	Function_95(Local_4, "cover1x2x1", "p_uti_cover1x2x", 388,8254f, 76,41941f, 3468,668f, 0.0f, -13,07408f, 0.0f, 1);
	Function_95(Local_4, "cover2x1x31", "p_uti_cover2x1x", 387,4845f, 76,3222f, 3463,398f, 0.0f, -102,7439f, 0.0f, 1);
	Function_95(Local_4, "cover1x1x7", "p_uti_cover1x1x", 394,8787f, 76,54609f, 3464,008f, 0.0f, -12,54738f, 0.0f, 1);
	Function_95(Local_4, "cover1x2x2", "p_uti_cover1x2x", 395,116f, 76,4548f, 3463,025f, 0.0f, -13,07408f, 0.0f, 1);
	Function_95(Local_4, "cover2x1x32", "p_uti_cover2x1x", 380,7327f, 76,17314f, 3467,21f, 0.0f, -89,61947f, 0.0f, 1);
	Function_95(Local_4, "cover2x1x33", "p_uti_cover2x1x", 411,9058f, 78,03545f, 3474,575f, 0.0f, -103,2384f, 0.0f, 1);
	Function_95(Local_4, "cover2x1x34", "p_uti_cover2x1x", 423,6162f, 78,13556f, 3467,854f, 0.0f, -78,18822f, 0.0f, 1);
	Function_95(Local_4, "cover2x1x35", "p_uti_cover2x1x", 489,5932f, 62,30149f, 3321,884f, 0.0f, -15,61351f, 0.0f, 1);
	Function_95(Local_4, "cover2x1x36", "p_uti_cover2x1x", 490,8462f, 71,32119f, 3403,202f, 0.0f, -30,90436f, 0.0f, 1);
	Function_95(Local_4, "cover1x2x3", "p_uti_cover1x2x", 497,2502f, 71,33834f, 3398,088f, 0.0f, -20,66923f, 0.0f, 1);
	Function_95(Local_4, "cover2x1x37", "p_uti_cover2x1x", 492,9f, 71,30385f, 3388,69f, 0.0f, -24,84036f, 0.0f, 1);
	Function_95(Local_4, "cover2x1x38", "p_uti_cover2x1x", 491,9999f, 56,13607f, 3256.0f, 0.0f, -17,30655f, 0.0f, 1);
	Function_95(Local_4, "cover2x1x39", "p_uti_cover2x1x", 482,4544f, 57,75303f, 3272.0f, -0,08162783f, -12,70706f, 0,6496098f, 1);
	Function_95(Local_4, "cover2x1x40", "p_uti_cover2x1x", 480,2616f, 55,41661f, 3250,493f, 0.0f, -32,17095f, 0.0f, 1);
	Function_95(Local_4, "cover2x1x41", "p_uti_cover2x1x", 483,9052f, 56,41098f, 3259,169f, 0.0f, -29,14402f, 0.0f, 1);
	Function_95(Local_4, "cover2x1x42", "p_uti_cover2x1x", 475,8712f, 56,27581f, 3262,026f, 0.0f, -36,66984f, 0.0f, 1);
	return 1;
}

var Function_95(var uParam0, var uParam1, var uParam2, vector3 vParam3, vector3 vParam6, int iParam9) //Position: 0x6487 / 25735
{
	uParam0 = uParam0;
	uParam1 = uParam1;
	uParam2 = uParam2;
	vParam3 = { StackVal, StackVal, vParam3 };
	vParam6 = { StackVal, StackVal, vParam6 };
	iParam9 = iParam9;
	return "";
}

void Function_96(bool bParam0, var uParam1) //Position: 0x64B1 / 25777
{
	if (!Function_60(128))
	{
		return;
	}
	if (!STRING_CONTAINS_STRING(&Global_13133, cParam0))
	{
		strcpy(&Global_13133, bParam0, 64);
		Global_13133.f_68 = 1;
		Global_13133.f_64 = GET_CURRENT_GAME_TIME();
		Global_13133.f_72 = Global_13133.f_64;
	}
	return;
}

