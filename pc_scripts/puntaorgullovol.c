//Decompiled with MagicRDR v1.0
//Function Count : 61
//Statics Count : 284
//Natives Count : 103
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 9;
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
	var uLocal_32 = 5;
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
	var uLocal_46 = 5;
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
	var uLocal_60 = 10;
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
	var uLocal_92 = 9;
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
	var uLocal_118 = 2;
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
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	var uLocal_248 = 0;
	bool bLocal_249 = false;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 4;
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
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_246 = 0;
	iLocal_247 = &uScriptParam_0;
	Function_60("Initializing PuntaOrgullo Volumes", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_249 = 500;
		uLocal_250 = Function_59();
		switch (iLocal_246)
		{
			case 0x00000000:
				if (Function_57())
				{
					iLocal_246 = 1;
				}
				bLocal_249 = false;
				break;
			
			case 0x00000001:
				Function_56(&uLocal_252);
				Function_55(&uLocal_252, &uLocal_256, 2, &Global_44085[iLocal_2479] + 8, 4294967295, 0);
				Function_55(&uLocal_252, &uLocal_256, 5, &iLocal_0 + 344, 4294967295, 0);
				Function_55(&uLocal_252, &uLocal_256, 5, &iLocal_0 + 352, 4294967295, 0);
				Function_55(&uLocal_252, &uLocal_256, 5, &iLocal_0 + 496, 4294967295, 0);
				Function_54(&iLocal_0 + 496, 12);
				iLocal_246 = 2;
				bLocal_249 = false;
				break;
			
			case 0x00000002:
				Function_53(&(Global_43791[iLocal_247]), 16);
				Function_52("Finished Initializing PuntaOrgullo Volumes", 5.0f);
				iLocal_246 = 3;
				bLocal_249 = false;
				break;
			
			case 0x00000003:
				if (!Function_51(&Global_46850))
				{
					Function_11(&uLocal_252, &uLocal_256, &uLocal_250, uScriptParam_0);
				}
				break;
			
			case 0x00000004:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				bLocal_249 = false;
				break;
		}
		WAIT(bLocal_249);
	}
	Function_3(&uLocal_252, &uLocal_256);
	Function_2();
	Function_1(&(Global_43791[iLocal_247]), 16);
	Function_52("Unloaded PuntaOrgullo Volumes", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0x192 / 402
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_2() //Position: 0x1AC / 428
{
	RELEASE_LAYOUT_REF(&iLocal_0);
	return;
}

void Function_3(var uParam0, vector3[] vParam1) //Position: 0x1B8 / 440
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (uParam0 - 1))
	{
		if (Function_10(&(vParam1[iVar03]), 4))
		{
			SET_CURRENT_MAP(false);
			Function_9(&(vParam1[iVar03]), 4);
		}
		if (Function_10(&(vParam1[iVar03]), 8))
		{
			Function_4(0, 0, 30);
			Function_9(&(vParam1[iVar03]), 8);
		}
		iVar0++;
	}
	return;
}

void Function_4(bool bParam0, int iParam1, int iParam2) //Position: 0x215 / 533
{
	bool bVar0;
	
	if (StackVal == 4294967295)
	{
		LOG_ERROR("Calling WEATHER_CLEAR_OVERRIDE when you never set the override in the first place!");
		return;
	}
	if (StackVal || (StackVal || StackVal != 3 != 4) != 5)
	{
		Global_26182 = 2;
	}
	else if (StackVal || (StackVal || StackVal != 12 != 20) != 16)
	{
		Global_26182 = Global_26182.f_48;
	}
	else
	{
		Global_26182 = StackVal;
	}
	Global_26182.f_4 = 4294967295;
	Global_26182.f_24 = 0;
	if (!StackVal != Global_26182)
	{
		bVar0 = MAKE_TIME_OF_DAY(bParam0, &iParam1, &iParam2);
		Function_5(Global_26182, &bVar0, 1);
	}
	return;
}

void Function_5(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2FF / 767
{
	int iVar0;
	
	Function_8(bParam0);
	Function_7(&bParam1);
	PRINTNL();
	if (StackVal == bParam0)
	{
		LOG_ERROR("New weather type is the same as the old weather type!");
		return;
	}
	if (!&bParam2)
	{
		iVar0 = GET_HOUR(false);
		if (!((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19))
		{
			return;
		}
	}
	SET_WEATHER(bParam0, &bParam1);
	Function_6();
	Global_26182.f_48 = StackVal;
	(&Global_26182 + 56) = GET_TIME_OF_DAY();
	*(&Global_26182 + 64) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_26182 + 64, 0, 0, GET_MINUTES_FROM_TIME_OF_DAY(&bParam1), 0);
	Global_26182.f_8 = bParam0;
	if (Global_26182.f_32 > 0.0f && Global_26182.f_36 > 0.0f)
	{
		if (bParam0 != 3 || bParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		else
		{
			SET_RAIN_AMOUNT(0.0f);
			SET_LIGHTNING_AMOUNT(0.0f);
		}
	}
	else
	{
		if (Global_26182.f_32 <= 0.0f)
		{
			SET_RAIN_AMOUNT(Global_26182.f_32);
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		else if (bParam0 != 3 || bParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		if (Global_26182.f_36 <= 0.0f)
		{
			SET_LIGHTNING_AMOUNT(Global_26182.f_36);
		}
		else if (bParam0 != 3 || bParam0 != 4)
		{
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
		}
	}
	return;
}

void Function_6() //Position: 0x47E / 1150
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_7(int iParam0) //Position: 0x48A / 1162
{
	PRINTSTRING("Day ");
	PRINTINT(GET_DAY(&iParam0));
	PRINTSTRING(": ");
	PRINTINT(GET_HOUR(&iParam0));
	PRINTSTRING(":");
	PRINTINT(GET_MINUTE(&iParam0));
	PRINTSTRING(":");
	PRINTINT(GET_SECOND(&iParam0));
	return;
}

void Function_8(int iParam0) //Position: 0x4D4 / 1236
{
	switch (iParam0)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			break;
		
		case 0x00000003:
			break;
		
		case 0x00000002:
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000005:
			break;
		
		default:
			break;
	}
	return;
}

void Function_9(struct<17> Param0) //Position: 0x51A / 1306
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	Param0.f_16 = (Param0.f_16 - iVar0);
	return;
}

bool Function_10(struct<17> Param0) //Position: 0x537 / 1335
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_11(vector3 vParam0) //Position: 0x555 / 1365
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar1 = 0;
	vParam0.f_4 = 0;
	uVar2 = Global_6629;
	Global_6629 = 0;
	if (!Function_50(32) || !IS_ACTOR_VALID(&uParam2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < (vParam0 - 1))
	{
		if (Function_12(&(vParam1[iVar03]), &uParam2, uParam3, iVar1, uVar2))
		{
			iVar1 = 1;
		}
		iVar0++;
	}
	if (Global_6630)
	{
		vParam0.f_8 = 1;
	}
	else if (Global_6629)
	{
		vParam0.f_8 = 1;
	}
	else if (vParam0.z)
	{
		vParam0.f_8 = 0;
	}
}

bool Function_12(vector3 vParam0, var uParam3, bool bParam4) //Position: 0x5DF / 1503
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_49(&vParam0))
	{
		return 0;
	}
	Function_1(&(Global_43791[iParam2]), 4194304);
	bVar0 = DECOR_GET_INT(&vParam0 + 8, "locflag");
	if (bVar0 != 0 && vParam0 != 5)
	{
		return 0;
	}
	bVar1 = uParam3;
	switch (vParam0)
	{
		case 0x00000005:
			if ((bVar0 && 240) == 0)
			{
				return 0;
			}
			if (IS_ACTOR_IN_VOLUME(&uParam1, &vParam0 + 8))
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = false;
			}
			if ((bVar0 && 32) >= 0)
			{
				if (bVar1)
				{
					if (!Function_10(&vParam0, 2))
					{
						if (!Function_10(&vParam0, 8))
						{
							if (DECOR_CHECK_EXIST(&vParam0 + 8, "customweather"))
							{
								Function_47(DECOR_GET_INT(&vParam0 + 8, "customweather"), 0, 0, 30, 1);
								Function_46(&vParam0, 8);
							}
						}
					}
				}
				else if (Function_10(&vParam0, 2))
				{
					if (Function_10(&vParam0, 8))
					{
						if (HUD_IS_FADED())
						{
							Function_4(0, 0, 0);
						}
						else
						{
							Function_4(0, 0, 30);
						}
						Function_9(&vParam0, 8);
					}
				}
			}
			if ((bVar0 && 16) >= 0)
			{
				if (bVar1)
				{
					if (!Function_10(&vParam0, 2))
					{
						if (!Function_10(&vParam0, 4))
						{
							if (DECOR_CHECK_EXIST(&vParam0 + 8, "ncustommap"))
							{
								SET_CURRENT_MAP(DECOR_GET_INT(&vParam0 + 8, "ncustommap"));
								Function_46(&vParam0, 4);
							}
						}
					}
				}
				else if (Function_10(&vParam0, 2))
				{
					if (Function_10(&vParam0, 4))
					{
						SET_CURRENT_MAP(false);
						Function_9(&vParam0, 4);
					}
				}
			}
			if ((bVar0 && 128) >= 0)
			{
				if ((((((bVar1 && Function_45(iParam2)) && !Function_44(0, 0, 1, 1)) && !Global_6646) && !Global_6647) && !Function_43(2048)) && !IS_SCRIPT_VALID(&Global_39922 + 96))
				{
					if (!Function_10(&vParam0, 2))
					{
						if (!Function_10(&vParam0, 16))
						{
							bVar2 = true;
							if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_VOLUME(&vParam0 + 8), "lawAllowTrespassTime"))
							{
								if (GET_CURRENT_GAME_TIME() > DECOR_GET_FLOAT(GET_OBJECT_FROM_VOLUME(&vParam0 + 8), "lawAllowTrespassTime"))
								{
									bVar2 = false;
								}
								else
								{
									DECOR_REMOVE(GET_OBJECT_FROM_VOLUME(&vParam0 + 8), "lawAllowTrespassTime");
								}
							}
							if (bVar2)
							{
								Function_46(&vParam0, 16);
								Function_35(3, 28, &uParam1, GET_OBJECT_FROM_VOLUME(&vParam0 + 8), 0);
							}
						}
					}
				}
				else if (Function_10(&vParam0, 2))
				{
					if (Function_10(&vParam0, 16))
					{
						Function_9(&vParam0, 16);
					}
				}
			}
			if ((bVar0 && 64) >= 0)
			{
				if (bVar1 && !Global_6623)
				{
					if (!Function_10(&vParam0, 2))
					{
						if (DECOR_CHECK_EXIST(&vParam0 + 8, "factionswap") && DECOR_CHECK_EXIST(&vParam0 + 8, "relationship"))
						{
							SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(DECOR_GET_INT(&vParam0 + 8, "factionswap"), 2, DECOR_GET_INT(&vParam0 + 8, "relationship"));
						}
					}
				}
				else if (Function_10(&vParam0, 2))
				{
					if (DECOR_CHECK_EXIST(&vParam0 + 8, "factionswap") && DECOR_CHECK_EXIST(&vParam0 + 8, "relationship"))
					{
						RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(DECOR_GET_INT(&vParam0 + 8, "factionswap"), 2);
					}
				}
			}
			if (bVar1)
			{
				Function_46(&vParam0, 2);
			}
			else
			{
				Function_9(&vParam0, 2);
			}
			break;
		
		case 0x00000002:
		case 0x00000004:
			if (!Function_45(iParam2))
			{
				return 0;
			}
			if (IS_ACTOR_IN_VOLUME(&uParam1, &vParam0 + 8))
			{
				if (!Function_34(&(Global_43791[iParam2]), 262144))
				{
					if (!Function_10(&vParam0, 1))
					{
						if (!Global_6620)
						{
							Function_33(StackVal, StackVal, vParam0);
						}
						else
						{
							Global_6620 = 0;
						}
						Function_46(&vParam0, 1);
					}
				}
				if (vParam0 == 4)
				{
					if (!bParam4 && Function_45(iParam2))
					{
						Function_32(&Global_44085[Global_44085[iParam29]9] + 32, &Global_44085[iParam29] + 32);
					}
					Global_6629 = 1;
				}
				Function_13(iParam2);
			}
			else if (vParam0 == 4)
			{
				Global_6629 = 0;
			}
			break;
	}
	return bVar1;
}

void Function_13(int iParam0) //Position: 0xA37 / 2615
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_34(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_53(&(Global_43791[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_18(473, 1, 0, 0);
		iVar0 = Function_17(iParam0);
		if (iVar0 == Global_46722[0])
		{
			Function_18(474, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[1])
		{
			Function_18(475, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[2])
		{
			Function_18(476, 1, 0, 0);
		}
	}
	iVar1 = (Global_44085[iParam09].f_64 - 5);
	iVar2 = 8;
	while (iVar1 >= 30)
	{
		iVar1 = (iVar1 - 31);
		iVar2++;
	}
	if (iVar2 < 10)
	{
		Function_16(iVar2, iVar1);
	}
	else if (iParam0 == Global_46926[9])
	{
		Function_16(7, 30);
	}
	if (Function_15(473) <= Function_14(473))
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
		{
			AWARD_ACHIEVEMENT(30);
		}
	}
	return;
}

float Function_14(int iParam0) //Position: 0xB28 / 2856
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

float Function_15(int iParam0) //Position: 0xB65 / 2917
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_16(int iParam0, int iParam1) //Position: 0xB9E / 2974
{
	bool bVar0;
	
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	bVar0 = SHIFT_LEFT(true, &iParam1);
	(*&Global_21369 + 260)[iParam0] = ((*&Global_21369 + 260)[iParam0] || bVar0);
	return;
	return;
}

var Function_17(int iParam0) //Position: 0xC08 / 3080
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_45(iParam0))
	{
		if (StackVal == 1)
		{
			iVar0 = iParam0;
		}
		else if (StackVal == 2)
		{
			iVar0 = Global_44085[iParam09];
		}
		else
		{
			iVar0 = Global_44085[iParam09];
			iVar0 = Global_44085[iVar09];
		}
	}
	return iVar0;
}

int Function_18(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0xC60 / 3168
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
	Function_31(iParam0, TO_FLOAT(bParam1), 1);
	Function_30(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_20(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_19(iParam0);
	return 1;
}

void Function_19(bool bParam0) //Position: 0xE88 / 3720
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

void Function_20(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0xF26 / 3878
{
	char* cVar0[32];
	bool bVar8;
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
			if (bParam2 > 2000.0f)
			{
				stradd(&Global_55480[iParam016] + 32, " lbs", 32);
			}
			else
			{
				bParam2 = (bParam2 / 2000.0f);
				memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
				stradd(&Global_55480[iParam016] + 32, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
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
					bVar6 = FLOOR((bParam2 - TO_FLOAT(bVar5 * 60)));
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
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(bParam2)), 32);
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
			if ((bParam2 - IntToFloat(FLOOR(bParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(bParam2)), 32);
			}
			if (bParam2 < 1.0f)
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_14(390))), 32);
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
					bVar19 = bParam2;
					bVar20 = 0.0f;
				}
				else if (bParam1)
				{
					bVar19 = (Function_15(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_15(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_28(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_25(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&uParam7))
							{
								uParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_23(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&uParam7), &Global_55480[iParam016] + 32, Function_22(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_21(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_21() //Position: 0x1564 / 5476
{
	int iVar0;
	
	return &iVar0;
}

var Function_22(int iParam0) //Position: 0x156D / 5485
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_23(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x157E / 5502
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_24(char* cParam0) //Position: 0x1675 / 5749
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_25(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1690 / 5776
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_27(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_26(Function_27(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_26(int iParam0, int iParam1) //Position: 0x16F7 / 5879
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_27(int iParam0, bool bParam1) //Position: 0x1709 / 5897
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_28(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x171B / 5915
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
	if (((Function_29(iParam0) != 19 || Function_29(iParam0) != 17) || Function_29(iParam0) != 10) || Function_29(iParam0) != 9)
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

int Function_29(int iParam0) //Position: 0x184F / 6223
{
	return Global_55480[iParam016].f_96;
}

void Function_30(int iParam0) //Position: 0x185E / 6238
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

int Function_31(int iParam0, float fParam1, bool bParam2) //Position: 0x19F8 / 6648
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

void Function_32(var uParam0, int iParam1) //Position: 0x1C3C / 7228
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_33(int iParam0, var uParam1, var uParam2) //Position: 0x1C49 / 7241
{
	if (!&iParam0 + 8 != &Global_21498)
	{
		Global_21498 = &iParam0 + 8;
		Global_21498.f_12 = iParam0;
		Global_21498.f_8 = 0;
	}
	return;
}

bool Function_34(var uParam0, int iParam1) //Position: 0x1C73 / 7283
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_35(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x1C90 / 7312
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	var uVar4;
	
	if (!Function_42(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_41(iParam1))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeType");
		return "";
	}
	if (!IS_ACTOR_VALID(&uParam2))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid criminal");
		return "";
	}
	if (!IS_OBJECT_VALID(&iParam3) && !iParam0 != 4)
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid victim");
		return "";
	}
	if (!Function_38(1))
	{
		LOG_ERROR("Crime is disabled: CREATE_CRIME_EVENT failure");
		return "";
	}
	uVar2 = CREATE_CRIME_IN_LAYOUT(&Global_39918);
	uVar3 = FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes");
	if ((IS_CRIME_VALID(&uVar2) && IS_OBJECT_VALID(&uVar3)) && GET_OBJECT_TYPE(&uVar3) != 2)
	{
		SET_CRIME_TYPE(&uVar2, iParam1);
		SET_CRIME_VICTIM(&uVar2, &iParam3);
		SET_CRIME_CRIMINAL(&uVar2, &uParam2);
		SET_CRIME_BEGIN_TIMESTAMP(&uVar2, GET_CURRENT_GAME_TIME());
		SET_CRIME_END_TIMESTAMP(&uVar2, GET_CURRENT_GAME_TIME());
		GET_OBJECT_POSITION(&iParam3, &Var0);
		SET_CRIME_POSITION(&uVar2, Var0);
		uVar4 = CREATE_OBJECTSET_IN_LAYOUT(Function_21(), &Global_39918, 3, 0);
		SET_CRIME_OBJECTSET(&uVar2, &uVar4);
		if (!&bParam4)
		{
			SET_CRIME_WITNESSED(&uVar2, true);
		}
		else
		{
			SET_CRIME_WITNESSED(&uVar2, 3);
			Function_36();
		}
		SET_CRIME_FACTION(StackVal, &uVar2);
		SET_CRIME_TALLIED(&uVar2, 0);
		SET_CRIME_COUNTER(&uVar2, 1);
		SET_CRIME_WORLD_REGION(&uVar2, Global_40000.f_12);
		if ((Global_41252[iParam111].f_36 != 2 || Global_41252[iParam111].f_36 != 3) || Global_41252[iParam111].f_36 != 4)
		{
			SET_CRIME_IN_PROGRESS(&uVar2, 1);
		}
		else
		{
			SET_CRIME_IN_PROGRESS(&uVar2, 0);
		}
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_CRIME(&uVar2), GET_OBJECTSET_FROM_OBJECT(&uVar3));
		SET_ACTOR_TIME_OF_LAST_CRIME(&uParam2, GET_CURRENT_GAME_TIME());
	}
	return &uVar2;
}

void Function_36() //Position: 0x1F43 / 8003
{
	var uVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_39918);
	uVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes"));
	Function_37(&uVar0, &uVar1);
	iVar2 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar2))
	{
		bVar3 = GET_CRIME_FROM_OBJECT(&iVar2);
		if (IS_CRIME_VALID(&bVar3))
		{
			SET_CRIME_WITNESSED(&bVar3, 3);
		}
		iVar2 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return;
}

void Function_37(var uParam0, int iParam1) //Position: 0x1FB6 / 8118
{
	ITERATE_EVERYWHERE(&uParam0);
	ITERATE_ON_OBJECT_TYPE(&uParam0, 31);
	if (!&iParam1 != "")
	{
		ITERATE_IN_SET(&uParam0, &iParam1);
	}
	else
	{
		ITERATE_IN_LAYOUT(&uParam0, GET_ITERATOR_PARENT(&uParam0));
	}
	return;
}

bool Function_38(bool bParam0) //Position: 0x1FEC / 8172
{
	if (Function_43(256))
	{
		return 0;
	}
	if (Function_43(262144))
	{
		return 0;
	}
	if (Function_40())
	{
		return 0;
	}
	if (!Function_43(1))
	{
		return 0;
	}
	if (!Function_43(4096))
	{
		return 0;
	}
	if (bParam0 && Function_39(12))
	{
		return 0;
	}
	if (Global_6621)
	{
		return 0;
	}
	if (Function_43(2048))
	{
		return 0;
	}
	if (0 || !&bParam0)
	{
		if (Global_43790 != 2 || Global_43790 != 5)
		{
			return 0;
		}
	}
	return 1;
}

int Function_39(int iParam0) //Position: 0x2062 / 8290
{
	if (Global_42825 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_40() //Position: 0x2073 / 8307
{
	if (Global_46720 == 2)
	{
		if (StackVal == 1)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_41(int iParam0) //Position: 0x208C / 8332
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_42(int iParam0) //Position: 0x20A2 / 8354
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_43(int iParam0) //Position: 0x20B7 / 8375
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_44(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x20D5 / 8405
{
	uParam0 = &uParam0;
	if (Global_6623 && !&iParam1 != 1)
	{
		return 1;
	}
	if (Global_6625 && !&iParam1 != 2)
	{
		return 1;
	}
	if (Global_6635 && !&iParam1 != 6)
	{
		return 1;
	}
	if (Global_6627 && !&iParam1 != 4)
	{
		return 1;
	}
	if (Global_6636 && uParam2)
	{
		return 1;
	}
	if (Global_6638 || Global_6639)
	{
		return 1;
	}
	if (Global_6628 && !&iParam1 != 3)
	{
		return 1;
	}
	if (Global_93258 && uParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

bool Function_45(int iParam0) //Position: 0x2184 / 8580
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_46(struct<17> Param0) //Position: 0x219A / 8602
{
	Param0.f_16 = (Param0.f_16 || iParam1);
	return;
}

void Function_47(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x21AD / 8621
{
	int iVar0;
	bool bVar1;
	
	Function_8(uParam0);
	Global_26182.f_4 = uParam0;
	Global_26182.f_24 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_48(StackVal, &bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(&uParam1, &uParam2, &uParam3);
			Function_5(StackVal, &bVar1, &bParam4);
		}
	}
}

void Function_48(int iParam0, int iParam1) //Position: 0x2227 / 8743
{
	var uVar0;
	
	uVar0 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	Function_8(iParam0);
	Function_7(&uVar0);
	PRINTNL();
	Function_5(iParam0, &uVar0, &iParam1);
	return;
}

bool Function_49(int iParam0) //Position: 0x2250 / 8784
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!IS_VOLUME_VALID(&iParam0 + 8))
	{
		return 0;
	}
	return 1;
}

bool Function_50(int iParam0) //Position: 0x2270 / 8816
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_51(int[] iParam0) //Position: 0x228C / 8844
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam0)
	{
		if (Function_45(iParam0[iVar0]))
		{
			if (!StackVal != 6)
			{
				if (Global_43791[iParam0[iVar0]] & 5 >= 0)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_52(char* cParam0) //Position: 0x22DD / 8925
{
	if (!Function_50(128))
	{
		return;
	}
	if (!STRING_CONTAINS_STRING(&Global_21610, &cParam0))
	{
		strcpy(&Global_21610, &cParam0, 64);
		Global_21610.f_132 = 2;
		Global_21610.f_128 = GET_CURRENT_GAME_TIME();
		Global_21610.f_136 = (Global_21610.f_128 + fParam1);
	}
	return;
}

void Function_53(var uParam0, int iParam1) //Position: 0x231D / 8989
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_54(var uParam0, bool bParam1) //Position: 0x232E / 9006
{
	if (DECOR_CHECK_EXIST(&uParam0, "locflag"))
	{
		DECOR_SET_INT(&uParam0, "locflag", (32 || DECOR_GET_INT(&uParam0, "locflag")));
	}
	else
	{
		DECOR_SET_INT(&uParam0, "locflag", 32);
	}
	DECOR_SET_INT(&uParam0, "customweather", bParam1);
	return;
}

void Function_55(var uParam0, vector3[] vParam1, int iParam2, var uParam3, int iParam4, int iParam5) //Position: 0x239A / 9114
{
	if (uParam0 >= (vParam1 - 1))
	{
		LOG_ERROR("Too many locations defined - increase array size in vol file!");
		return;
	}
	if (!IS_VOLUME_VALID(&uParam3))
	{
		LOG_ERROR("NL_INIT_LOCATION got invalid VOLUME!");
		return;
	}
	iParam4 = iParam4;
	(&vParam1[uParam03] + 8) = &uParam3;
	vParam1[uParam03] = iParam2;
	DECOR_SET_INT(&vParam1[uParam03] + 8, "locflag", &iParam5);
	if (iParam2 == 4)
	{
		ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&vParam1[uParam03] + 8, 0);
	}
	uParam0++;
}

void Function_56(struct<5> Param0) //Position: 0x2487 / 9351
{
	Param0 = 0;
	Param0.f_4 = 0;
	return;
}

bool Function_57() //Position: 0x2498 / 9368
{
	var uVar0;
	
	Function_58(3, 3);
	uVar0 = &uVar0;
	iLocal_0 = FIND_NAMED_LAYOUT("PuntaOrgullo_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_0))
	{
		iLocal_0 = CREATE_LAYOUT("PuntaOrgullo_layout");
	}
	*(&iLocal_0 + 8) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "npunv_tran", 2,802597E-45f, Vector(-4842,567f, 33,78479f, 4970,404f), Vector(0.0f, 87,97502f, 0.0f), Vector(68,0244f, 21,45282f, 44,2508f));
	*(&iLocal_0 + 16) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "punv_esc_nos_battle", 4,203895E-45f, Vector(-4609,521f, 13,98175f, 4137,299f), Vector(0.0f, 60.0f, 0.0f), Vector(200.0f, 50.0f, 300.0f));
	*(&iLocal_0 + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "punv_tran1", 4,203895E-45f, Vector(-4327,271f, 13,98175f, 4397,527f), Vector(0.0f, -3,631602f, 0.0f), Vector(92,06374f, 58,7631f, 90,68874f));
	*(&iLocal_0 + 32) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "punv_tran2", 2,802597E-45f, Vector(-3266,412f, 33,78479f, 4546,414f), Vector(0.0f, 87,97502f, 0.0f), Vector(75,51233f, 37,61528f, 88,3866f));
	*(&iLocal_0 + 120) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "punv_flk_WEST_set");
	*(&iLocal_0 + 40[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "coyotes6", 4,203895E-45f, Vector(-4053,511f, 31,61791f, 4256,35f), Vector(0.0f, 20.0f, 0.0f), Vector(192,6178f, 44,6306f, 126,3124f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 120, &iLocal_0 + 40[0]);
	*(&iLocal_0 + 40[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "coyotes1", 4,203895E-45f, Vector(-4283,042f, 19,36054f, 4115,044f), Vector(0.0f, 20.0f, 0.0f), Vector(119,3484f, 82,62196f, 120,0395f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 120, &iLocal_0 + 40[1]);
	*(&iLocal_0 + 40[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "coyotes3", 4,203895E-45f, Vector(-4567,866f, 19,961f, 4109,342f), Vector(0.0f, 20.0f, 0.0f), Vector(154,9664f, 82,62196f, 178,2139f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 120, &iLocal_0 + 40[2]);
	*(&iLocal_0 + 40[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "coyotes4", 4,203895E-45f, Vector(-4325,205f, 20,17509f, 4623,838f), Vector(0.0f, 20.0f, 0.0f), Vector(98,60401f, 82,62196f, 129,3296f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 120, &iLocal_0 + 40[3]);
	*(&iLocal_0 + 40[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "coyotes5", 4,203895E-45f, Vector(-4754,885f, 71,98521f, 4885,782f), Vector(0.0f, 20.0f, 0.0f), Vector(92,62215f, 82,62196f, 129,3296f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 120, &iLocal_0 + 40[4]);
	*(&iLocal_0 + 40[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "ncoyotes10", 4,203895E-45f, Vector(-4875,985f, 46,44733f, 4963,133f), Vector(0.0f, 20.0f, 0.0f), Vector(58,77868f, 74,20964f, 70,03761f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 120, &iLocal_0 + 40[5]);
	*(&iLocal_0 + 40[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "coyotes9", 4,203895E-45f, Vector(-4512,592f, 38,78421f, 4442,362f), Vector(0.0f, 20.0f, 0.0f), Vector(86,0778f, 74,20964f, 165,4384f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 120, &iLocal_0 + 40[6]);
	*(&iLocal_0 + 40[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "goats14", 4,203895E-45f, Vector(-4372,829f, 27,13992f, 4815,416f), Vector(0.0f, 20.0f, 0.0f), Vector(79,04242f, 55,95125f, 75,64068f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 120, &iLocal_0 + 40[7]);
	*(&iLocal_0 + 40[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "goats24", 4,203895E-45f, Vector(-4580,596f, 46,69889f, 4750,83f), Vector(0.0f, 20.0f, 0.0f), Vector(125,3083f, 43,02709f, 157,6022f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 120, &iLocal_0 + 40[8]);
	*(&iLocal_0 + 176) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "punv_flk_EAST_set");
	*(&iLocal_0 + 128[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "wolfs", 4,203895E-45f, Vector(-3398,574f, 97,65329f, 4419,211f), Vector(0.0f, 20.0f, 0.0f), Vector(58,66848f, 19,16315f, 137,4961f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 176, &iLocal_0 + 128[0]);
	*(&iLocal_0 + 128[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "wolfs1", 4,203895E-45f, Vector(-3184,232f, 54,10172f, 4300,294f), Vector(0.0f, 2,679045f, 0.0f), Vector(151,1155f, 17,93411f, 194,6789f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 176, &iLocal_0 + 128[1]);
	*(&iLocal_0 + 128[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "wolfs2", 4,203895E-45f, Vector(-3206,257f, 66,46912f, 4636,435f), Vector(0.0f, -11,54876f, 0.0f), Vector(265,7644f, 19,28539f, 93,74146f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 176, &iLocal_0 + 128[2]);
	*(&iLocal_0 + 128[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "wolfs3", 4,203895E-45f, Vector(-3613,859f, 128,8785f, 4535,32f), Vector(0.0f, 20.0f, 0.0f), Vector(132,8462f, 18,94953f, 155,3031f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 176, &iLocal_0 + 128[3]);
	*(&iLocal_0 + 128[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "goats", 4,203895E-45f, Vector(-3549,181f, 76,45248f, 4796,4f), Vector(0.0f, 20.0f, 0.0f), Vector(183,6342f, 33,18642f, 79,31761f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 176, &iLocal_0 + 128[4]);
	*(&iLocal_0 + 232) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "punv_flk_CENTER_set");
	*(&iLocal_0 + 184[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "wildHorses", 4,203895E-45f, Vector(-4140,523f, 64,02142f, 4521,697f), Vector(0.0f, 20.0f, 0.0f), Vector(112,8827f, 56,05088f, 137,2034f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 232, &iLocal_0 + 184[0]);
	*(&iLocal_0 + 184[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "wildHorses1", 4,203895E-45f, Vector(-3866,674f, 36,41291f, 4403,495f), Vector(0.0f, 20.0f, 0.0f), Vector(137,2034f, 42,62727f, 97,33247f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 232, &iLocal_0 + 184[1]);
	*(&iLocal_0 + 184[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "wildHorses2", 4,203895E-45f, Vector(-3939,405f, 39,44256f, 4631,492f), Vector(0.0f, 20.0f, 0.0f), Vector(78,74556f, 42,62727f, 124,5381f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 232, &iLocal_0 + 184[2]);
	*(&iLocal_0 + 184[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "wildHorses3", 4,203895E-45f, Vector(-4129,055f, 40,76117f, 4787,472f), Vector(0.0f, 41,75226f, 0.0f), Vector(158,0032f, 54,5681f, 137,2034f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 232, &iLocal_0 + 184[3]);
	*(&iLocal_0 + 184[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "wildHorses4", 4,203895E-45f, Vector(-3923,579f, 31,12158f, 4847,364f), Vector(0.0f, 50,48258f, 0.0f), Vector(108,1141f, 40,94079f, 76,08596f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 232, &iLocal_0 + 184[4]);
	*(&iLocal_0 + 328) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "punv_flk_BIRD_set");
	*(&iLocal_0 + 240[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "birds1", 4,203895E-45f, Vector(-4752.0f, 33,53765f, 4056.0f), Vector(0.0f, 20.0f, 0.0f), Vector(345,6112f, 47,12199f, 340,4008f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 328, &iLocal_0 + 240[0]);
	*(&iLocal_0 + 240[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "birds2", 4,203895E-45f, Vector(-4576.0f, 26,98331f, 4372f), Vector(0.0f, 20.0f, 0.0f), Vector(345,6112f, 47,12199f, 340,4008f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 328, &iLocal_0 + 240[1]);
	*(&iLocal_0 + 240[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "birds3", 4,203895E-45f, Vector(-4510,71f, 31,26405f, 3952f), Vector(0.0f, 20.0f, 0.0f), Vector(345,6112f, 47,12199f, 340,4008f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 328, &iLocal_0 + 240[2]);
	*(&iLocal_0 + 240[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "birds4", 4,203895E-45f, Vector(-4064f, 30,32837f, 4304.0f), Vector(0.0f, 20.0f, 0.0f), Vector(345,6112f, 47,12199f, 340,4008f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 328, &iLocal_0 + 240[3]);
	*(&iLocal_0 + 240[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "birds5", 4,203895E-45f, Vector(-3871,368f, 42,61471f, 4306,821f), Vector(0.0f, 20.0f, 0.0f), Vector(345,6112f, 47,12199f, 340,4008f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 328, &iLocal_0 + 240[4]);
	*(&iLocal_0 + 240[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "birds6", 4,203895E-45f, Vector(-3472f, 39,96742f, 4260.0f), Vector(0.0f, 20.0f, 0.0f), Vector(345,6112f, 47,12199f, 340,4008f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 328, &iLocal_0 + 240[5]);
	*(&iLocal_0 + 240[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "birds7", 4,203895E-45f, Vector(-4208.0f, 59,79043f, 4704f), Vector(0.0f, 20.0f, 0.0f), Vector(345,6112f, 47,12199f, 340,4008f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 328, &iLocal_0 + 240[6]);
	*(&iLocal_0 + 240[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "birds8", 4,203895E-45f, Vector(-4756.0f, 66,91064f, 4908f), Vector(0.0f, 20.0f, 0.0f), Vector(345,6112f, 47,12199f, 340,4008f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 328, &iLocal_0 + 240[7]);
	*(&iLocal_0 + 240[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "birds9", 4,203895E-45f, Vector(-3736f, 45,54935f, 4714.0f), Vector(0.0f, 20.0f, 0.0f), Vector(345,6112f, 47,12199f, 340,4008f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 328, &iLocal_0 + 240[8]);
	*(&iLocal_0 + 240[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "birds10", 4,203895E-45f, Vector(-3308.0f, 72,19768f, 4540f), Vector(0.0f, 20.0f, 0.0f), Vector(345,6112f, 47,12199f, 340,4008f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 328, &iLocal_0 + 240[9]);
	*(&iLocal_0 + 336) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "punv_corr_g", 4,203895E-45f, Vector(-4394,522f, 42,22266f, 4329,721f), Vector(0.0f, 20.0f, 0.0f), Vector(19,06864f, 21,58452f, 13,16881f));
	*(&iLocal_0 + 344) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "punv_vista_1", 4,203895E-45f, Vector(-4723,343f, 61,142f, 4708,676f), Vector(0.0f, 0.0f, 0.0f), Vector(5.0f, 20.0f, 5.0f));
	*(&iLocal_0 + 352) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "punv_vista_2", 4,203895E-45f, Vector(-4502,206f, 48,573f, 4278,378f), Vector(0.0f, 0.0f, 0.0f), Vector(10.0f, 20.0f, 10.0f));
	*(&iLocal_0 + 360) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "PLT_bats", 4,203895E-45f, Vector(-3370,941f, 60,25747f, 4768,961f), Vector(0.0f, 282,2999f, 0.0f), Vector(16,35729f, 5,60464f, 25,5488f));
	*(&iLocal_0 + 448) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "punv_aquaticWildlife_set");
	*(&iLocal_0 + 368[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "punv_aquaticWilderness9", 2,802597E-45f, Vector(-3256,872f, 1,768422f, 3988,495f), Vector(0.0f, 12,37247f, 0.0f), Vector(368,4553f, 28,50097f, 129,9468f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 448, &iLocal_0 + 368[0]);
	*(&iLocal_0 + 368[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "punv_aquaticWilderness8", 2,802597E-45f, Vector(-3553,333f, 1,170906f, 4135,474f), Vector(0.0f, 9,2336f, 0.0f), Vector(408,202f, 28,50097f, 101,0467f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 448, &iLocal_0 + 368[1]);
	*(&iLocal_0 + 368[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "punv_aquaticWilderness7", 2,802597E-45f, Vector(-3890,82f, -9,707797f, 4075,958f), Vector(0.0f, 52,61807f, 0.0f), Vector(132,6222f, 28,50097f, 418,6697f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 448, &iLocal_0 + 368[2]);
	*(&iLocal_0 + 368[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "punv_aquaticWilderness6", 2,802597E-45f, Vector(-4164.0f, -10,36915f, 3928.0f), Vector(0.0f, -28,16471f, 0.0f), Vector(219,4432f, 28,50097f, 202,146f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 448, &iLocal_0 + 368[3]);
	*(&iLocal_0 + 368[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "punv_aquaticWilderness5", 2,802597E-45f, Vector(-4444.0f, -8,29268f, 3888,521f), Vector(0.0f, 0.0f, 0.0f), Vector(440,7853f, 28,50097f, 151,8147f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 448, &iLocal_0 + 368[4]);
	*(&iLocal_0 + 368[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "punv_aquaticWilderness4", 2,802597E-45f, Vector(-4718,319f, -8,481395f, 4088,914f), Vector(0.0f, 36,44233f, 0.0f), Vector(438,6112f, 38,5436f, 166,0771f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 448, &iLocal_0 + 368[5]);
	*(&iLocal_0 + 368[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "punv_aquaticWilderness3", 2,802597E-45f, Vector(-4727,755f, 0,09645043f, 4250,598f), Vector(0.0f, 61,69999f, 0.0f), Vector(172,8494f, 28,50097f, 381,0598f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 448, &iLocal_0 + 368[6]);
	*(&iLocal_0 + 368[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "punv_aquaticWilderness2", 2,802597E-45f, Vector(-4743,079f, -3,361446f, 4528f), Vector(0.0f, -28,1262f, 0.0f), Vector(144,2621f, 32,11439f, 340,5732f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 448, &iLocal_0 + 368[7]);
	*(&iLocal_0 + 368[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "punv_aquaticWilderness1", 2,802597E-45f, Vector(-4999,959f, -3,257817f, 4588,019f), Vector(0.0f, -39,11819f, 0.0f), Vector(193,3242f, 0,2104689f, 123,0471f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 448, &iLocal_0 + 368[8]);
	*(&iLocal_0 + 456) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "punv_bhstop", 2,802597E-45f, Vector(-4343,281f, 31,61466f, 4385,777f), Vector(0.0f, 4,245905f, 0.0f), Vector(21,1225f, 7,161017f, 10,41845f));
	*(&iLocal_0 + 464) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "punv_player_house", 2,802597E-45f, Vector(-3837,362f, 4,180588f, 4225,974f), Vector(0.0f, 4,245905f, 0.0f), Vector(6,321364f, 5,02245f, 4,020336f));
	*(&iLocal_0 + 496) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "punv_plata_caves_set");
	*(&iLocal_0 + 472[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "punv_plata_02", 2,802597E-45f, Vector(-3371,545f, 59,80634f, 4773,75f), Vector(0,3701224f, 21,03401f, -0,2902972f), Vector(19,94097f, 7,980592f, 21,51182f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 496, &iLocal_0 + 472[0]);
	*(&iLocal_0 + 472[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "punv_plata_01", 2,802597E-45f, Vector(-3349,833f, 60,82028f, 4766,098f), Vector(-8,770242f, 28,54804f, 2,587362f), Vector(28,46577f, 6,975687f, 18,88288f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 496, &iLocal_0 + 472[1]);
	*(&iLocal_0 + 504) = Vector(-4115,892f, 22,086f, 4708,979f);
	*(&iLocal_0 + 504 + 12) = Vector(0.0f, 290.0f, 0.0f);
	*(&iLocal_0 + 528) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "npunf_tran", Vector(-4115,892f, 22,086f, 4708,979f), Vector(0.0f, 290.0f, 0.0f));
	*(&iLocal_0 + 536) = Vector(-3994,026f, 16,895f, 4693,762f);
	*(&iLocal_0 + 536 + 12) = Vector(0.0f, 146,779f, 0.0f);
	*(&iLocal_0 + 560) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "punf_tran1", Vector(-3994,026f, 16,895f, 4693,762f), Vector(0.0f, 146,779f, 0.0f));
	*(&iLocal_0 + 568) = Vector(-4145,799f, 21,082f, 4710,389f);
	*(&iLocal_0 + 568 + 12) = Vector(0.0f, 69,084f, 0.0f);
	*(&iLocal_0 + 592) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "punf_tran2", Vector(-4145,799f, 21,082f, 4710,389f), Vector(0.0f, 69,084f, 0.0f));
	*(&iLocal_0 + 600) = Vector(-3561,648f, 6,032f, 4513,19f);
	*(&iLocal_0 + 600 + 12) = Vector(0.0f, 221,152f, 0.0f);
	*(&iLocal_0 + 624) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "punf_tran3", Vector(-3561,648f, 6,032f, 4513,19f), Vector(0.0f, 221,152f, 0.0f));
	*(&iLocal_0 + 632) = Vector(-3296,803f, 38,178f, 4501,235f);
	*(&iLocal_0 + 632 + 12) = Vector(0.0f, 149,359f, 0.0f);
	*(&iLocal_0 + 656) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "punf_tran4", Vector(-3296,803f, 38,178f, 4501,235f), Vector(0.0f, 149,359f, 0.0f));
	*(&iLocal_0 + 664) = Vector(-3106,449f, 34,244f, 4601,692f);
	*(&iLocal_0 + 664 + 12) = Vector(0.0f, 14,633f, 0.0f);
	*(&iLocal_0 + 688) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "punf_tran5", Vector(-3106,449f, 34,244f, 4601,692f), Vector(0.0f, 14,633f, 0.0f));
	*(&iLocal_0 + 696) = Vector(-3514,543f, 8,554f, 4243,936f);
	*(&iLocal_0 + 696 + 12) = Vector(0.0f, 100,655f, 0.0f);
	*(&iLocal_0 + 720) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "punf_tran6", Vector(-3514,543f, 8,554f, 4243,936f), Vector(0.0f, 100,655f, 0.0f));
	*(&iLocal_0 + 728) = Vector(-3884,977f, 8,031f, 4412,518f);
	*(&iLocal_0 + 728 + 12) = Vector(0.0f, 358,598f, 0.0f);
	*(&iLocal_0 + 752) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "punf_tran7", Vector(-3884,977f, 8,031f, 4412,518f), Vector(0.0f, 358,598f, 0.0f));
	*(&iLocal_0 + 760) = Vector(-4384,167f, 3,163f, 3897,498f);
	*(&iLocal_0 + 760 + 12) = Vector(0.0f, 100,135f, 0.0f);
	*(&iLocal_0 + 784) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "punf_tran8", Vector(-4384,167f, 3,163f, 3897,498f), Vector(0.0f, 100,135f, 0.0f));
	*(&iLocal_0 + 792) = Vector(-4465,502f, 3,012f, 3996,664f);
	*(&iLocal_0 + 792 + 12) = Vector(0.0f, 213,845f, 0.0f);
	*(&iLocal_0 + 816) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "punf_tran9", Vector(-4465,502f, 3,012f, 3996,664f), Vector(0.0f, 213,845f, 0.0f));
	*(&iLocal_0 + 824) = Vector(-4691,783f, 25,123f, 4898,886f);
	*(&iLocal_0 + 824 + 12) = Vector(0.0f, 358,836f, 0.0f);
	*(&iLocal_0 + 848) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "punf_tran10", Vector(-4691,783f, 25,123f, 4898,886f), Vector(0.0f, 358,836f, 0.0f));
	*(&iLocal_0 + 856) = Vector(-4279,235f, 21,352f, 4823,072f);
	*(&iLocal_0 + 856 + 12) = Vector(0.0f, 331,647f, 0.0f);
	*(&iLocal_0 + 880) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "punf_tran11", Vector(-4279,235f, 21,352f, 4823,072f), Vector(0.0f, 331,647f, 0.0f));
	*(&iLocal_0 + 888) = Vector(-3802,477f, 6,023f, 4552,769f);
	*(&iLocal_0 + 888 + 12) = Vector(0.0f, 284,321f, 0.0f);
	*(&iLocal_0 + 912) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "punf_tran12", Vector(-3802,477f, 6,023f, 4552,769f), Vector(0.0f, 284,321f, 0.0f));
	*(&iLocal_0 + 920) = Vector(-3169,164f, 38,25f, 4477,19f);
	*(&iLocal_0 + 920 + 12) = Vector(0.0f, 70,547f, 0.0f);
	*(&iLocal_0 + 944) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "punf_tran13", Vector(-3169,164f, 38,25f, 4477,19f), Vector(0.0f, 70,547f, 0.0f));
	*(&iLocal_0 + 952) = Vector(-3832,19f, 2,16f, 4212,83f);
	*(&iLocal_0 + 952 + 12) = Vector(0.0f, -23,08565f, 0.0f);
	*(&iLocal_0 + 976) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "punf_respawn_water_01", Vector(-3832,19f, 2,16f, 4212,83f), Vector(0.0f, -23,08565f, 0.0f));
	return 1;
}

void Function_58(int iParam0, int iParam1) //Position: 0x3AFD / 15101
{
	switch (&iParam1)
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

var Function_59() //Position: 0x3B47 / 15175
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_60(char* cParam0) //Position: 0x3B5C / 15196
{
	if (!Function_50(128))
	{
		return;
	}
	if (!STRING_CONTAINS_STRING(&Global_21610, &cParam0))
	{
		strcpy(&Global_21610, &cParam0, 64);
		Global_21610.f_132 = 1;
		Global_21610.f_128 = GET_CURRENT_GAME_TIME();
		Global_21610.f_136 = Global_21610.f_128;
	}
	return;
}

