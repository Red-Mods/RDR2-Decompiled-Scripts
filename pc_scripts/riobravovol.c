//Decompiled with MagicRDR v1.0
//Function Count : 60
//Statics Count : 272
//Natives Count : 103
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 1;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 7;
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
	var uLocal_26 = 6;
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
	var uLocal_42 = 13;
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
	var uLocal_74 = 15;
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
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	var uLocal_254 = 0;
	bool bLocal_255 = false;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 1;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_252 = 0;
	iLocal_253 = &uScriptParam_0;
	Function_59("Initializing RioBravo Volumes", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_255 = 500;
		uLocal_256 = Function_58();
		switch (iLocal_252)
		{
			case 0x00000000:
				if (Function_56())
				{
					iLocal_252 = 1;
				}
				bLocal_255 = false;
				break;
			
			case 0x00000001:
				Function_55(&uLocal_258);
				Function_54(&uLocal_258, &uLocal_262, 2, &Global_44085[iLocal_2539] + 8, 4294967295, 0);
				iLocal_252 = 2;
				bLocal_255 = false;
				break;
			
			case 0x00000002:
				Function_53(&(Global_43791[iLocal_253]), 16);
				Function_52("Finished Initializing RioBravo Volumes", 5.0f);
				iLocal_252 = 3;
				bLocal_255 = false;
				break;
			
			case 0x00000003:
				if (!Function_51(&Global_46838))
				{
					Function_11(&uLocal_258, &uLocal_262, &uLocal_256, uScriptParam_0);
				}
				break;
			
			case 0x00000004:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				bLocal_255 = false;
				break;
		}
		WAIT(bLocal_255);
	}
	Function_3(&uLocal_258, &uLocal_262);
	Function_2();
	Function_1(&(Global_43791[iLocal_253]), 16);
	Function_52("Unloaded RioBravo Volumes", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0x14E / 334
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_2() //Position: 0x168 / 360
{
	RELEASE_LAYOUT_REF(&iLocal_0);
	return;
}

void Function_3(var uParam0, vector3[] vParam1) //Position: 0x174 / 372
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

void Function_4(bool bParam0, int iParam1, int iParam2) //Position: 0x1D1 / 465
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

void Function_5(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2BB / 699
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
	*(&Global_26182 + 56) = GET_TIME_OF_DAY();
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

void Function_6() //Position: 0x43A / 1082
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_7(int iParam0) //Position: 0x446 / 1094
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

void Function_8(int iParam0) //Position: 0x490 / 1168
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

void Function_9(struct<17> Param0) //Position: 0x4D6 / 1238
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	Param0.f_16 = (Param0.f_16 - iVar0);
	return;
}

bool Function_10(struct<17> Param0) //Position: 0x4F3 / 1267
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_11(vector3 vParam0) //Position: 0x511 / 1297
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

bool Function_12(vector3 vParam0, var uParam3, bool bParam4) //Position: 0x59B / 1435
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

void Function_13(int iParam0) //Position: 0x9F3 / 2547
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

float Function_14(int iParam0) //Position: 0xAE4 / 2788
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

float Function_15(int iParam0) //Position: 0xB21 / 2849
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_16(int iParam0, int iParam1) //Position: 0xB5A / 2906
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

var Function_17(int iParam0) //Position: 0xBC4 / 3012
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

int Function_18(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0xC1C / 3100
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

void Function_19(bool bParam0) //Position: 0xE44 / 3652
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

void Function_20(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0xEE2 / 3810
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

var Function_21() //Position: 0x1520 / 5408
{
	int iVar0;
	
	return &iVar0;
}

var Function_22(int iParam0) //Position: 0x1529 / 5417
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_23(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x153A / 5434
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

struct<32> Function_24(char* cParam0) //Position: 0x1631 / 5681
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_25(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x164C / 5708
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_27(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_26(Function_27(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_26(int iParam0, int iParam1) //Position: 0x16B3 / 5811
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_27(int iParam0, bool bParam1) //Position: 0x16C5 / 5829
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_28(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x16D7 / 5847
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

int Function_29(int iParam0) //Position: 0x180B / 6155
{
	return Global_55480[iParam016].f_96;
}

void Function_30(int iParam0) //Position: 0x181A / 6170
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

int Function_31(int iParam0, float fParam1, bool bParam2) //Position: 0x19B4 / 6580
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

void Function_32(var uParam0, int iParam1) //Position: 0x1BF8 / 7160
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_33(int iParam0, var uParam1, var uParam2) //Position: 0x1C05 / 7173
{
	if (!&iParam0 + 8 != &Global_21498)
	{
		Global_21498 = &iParam0 + 8;
		Global_21498.f_12 = iParam0;
		Global_21498.f_8 = 0;
	}
	return;
}

bool Function_34(var uParam0, int iParam1) //Position: 0x1C2F / 7215
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_35(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x1C4C / 7244
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

void Function_36() //Position: 0x1EFF / 7935
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

void Function_37(var uParam0, int iParam1) //Position: 0x1F72 / 8050
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

bool Function_38(bool bParam0) //Position: 0x1FA8 / 8104
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

int Function_39(int iParam0) //Position: 0x201E / 8222
{
	if (Global_42825 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_40() //Position: 0x202F / 8239
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

bool Function_41(int iParam0) //Position: 0x2048 / 8264
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_42(int iParam0) //Position: 0x205E / 8286
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_43(int iParam0) //Position: 0x2073 / 8307
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_44(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x2091 / 8337
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

bool Function_45(int iParam0) //Position: 0x2140 / 8512
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_46(struct<17> Param0) //Position: 0x2156 / 8534
{
	Param0.f_16 = (Param0.f_16 || iParam1);
	return;
}

void Function_47(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x2169 / 8553
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

void Function_48(int iParam0, int iParam1) //Position: 0x21E3 / 8675
{
	var uVar0;
	
	uVar0 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	Function_8(iParam0);
	Function_7(&uVar0);
	PRINTNL();
	Function_5(iParam0, &uVar0, &iParam1);
	return;
}

bool Function_49(int iParam0) //Position: 0x220C / 8716
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

bool Function_50(int iParam0) //Position: 0x222C / 8748
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_51(int[] iParam0) //Position: 0x2248 / 8776
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

void Function_52(char* cParam0) //Position: 0x2299 / 8857
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

void Function_53(var uParam0, bool bParam1) //Position: 0x22D9 / 8921
{
	uParam0 = (uParam0 || bParam1);
	return;
}

void Function_54(var uParam0, vector3[] vParam1, int iParam2, var uParam3, var uParam4, var uParam5) //Position: 0x22EA / 8938
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
	uParam4 = uParam4;
	(&vParam1[uParam03] + 8) = &uParam3;
	vParam1[uParam03] = iParam2;
	DECOR_SET_INT(&vParam1[uParam03] + 8, "locflag", &uParam5);
	if (iParam2 == 4)
	{
		ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&vParam1[uParam03] + 8, 0);
	}
	uParam0++;
}

void Function_55(struct<5> Param0) //Position: 0x23D7 / 9175
{
	Param0 = 0;
	Param0.f_4 = 0;
	return;
}

bool Function_56() //Position: 0x23E8 / 9192
{
	var uVar0;
	
	Function_57(3, 3);
	uVar0 = &uVar0;
	iLocal_0 = FIND_NAMED_LAYOUT("RioBravo_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_0))
	{
		iLocal_0 = CREATE_LAYOUT("RioBravo_layout");
	}
	*(&iLocal_0 + 24) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "riov_flk_BIRD_set");
	*(&iLocal_0 + 8[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "birds", 2,802597E-45f, Vector(-2936,324f, 50,52718f, 3478,539f), Vector(0.0f, 0.0f, 0.0f), Vector(2009,946f, 220,2406f, 1271,405f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 24, &iLocal_0 + 8[0]);
	*(&iLocal_0 + 96) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "riov_flk_SOUTH_set");
	*(&iLocal_0 + 32[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "riov_wolfs1", 4,203895E-45f, Vector(-3743,686f, 16,8916f, 3916,521f), Vector(0.0f, 20.0f, 0.0f), Vector(105,5447f, 154,5452f, 127,4068f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 96, &iLocal_0 + 32[0]);
	*(&iLocal_0 + 32[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "riov_wolfs2", 4,203895E-45f, Vector(-3506,154f, 30,11765f, 3982,611f), Vector(0.0f, 20.0f, 0.0f), Vector(142,0115f, 121,3969f, 90,83942f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 96, &iLocal_0 + 32[1]);
	*(&iLocal_0 + 32[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "riov_wolfs3", 4,203895E-45f, Vector(-3362,548f, 57,9931f, 3815,707f), Vector(0.0f, 20.0f, 0.0f), Vector(101,16f, 155,6165f, 93,06902f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 96, &iLocal_0 + 32[2]);
	*(&iLocal_0 + 32[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "riov_wolfs4", 4,203895E-45f, Vector(-3133,079f, 44,66625f, 3831,112f), Vector(0.0f, 10,86343f, 0.0f), Vector(139,1676f, 133,4854f, 41,1269f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 96, &iLocal_0 + 32[3]);
	*(&iLocal_0 + 32[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "riov_wolfs5", 4,203895E-45f, Vector(-2952,329f, 37,14508f, 3688,871f), Vector(0.0f, 20.0f, 0.0f), Vector(118,3164f, 118,3164f, 118,3164f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 96, &iLocal_0 + 32[4]);
	*(&iLocal_0 + 32[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "riov_wolfs6", 4,203895E-45f, Vector(-2762,144f, 29,45689f, 3700,321f), Vector(0.0f, 2,40104f, 0.0f), Vector(69,76539f, 141,8443f, 55,03979f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 96, &iLocal_0 + 32[5]);
	*(&iLocal_0 + 32[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "riov_wolfs7", 4,203895E-45f, Vector(-2506,896f, 15,99935f, 3744,206f), Vector(0.0f, -11,53117f, 0.0f), Vector(185,0573f, 90,62341f, 67,17472f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 96, &iLocal_0 + 32[6]);
	*(&iLocal_0 + 160) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "riov_flk_NORTH_set");
	*(&iLocal_0 + 104[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "riov_coyote1", 4,203895E-45f, Vector(-2543,914f, 28,1098f, 3241,62f), Vector(0.0f, 20.0f, 0.0f), Vector(167,0734f, 167,0734f, 119,6312f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 160, &iLocal_0 + 104[0]);
	*(&iLocal_0 + 104[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "riov_coyote2", 4,203895E-45f, Vector(-2835,932f, 43,16861f, 3294,67f), Vector(0.0f, 20.0f, 0.0f), Vector(141,1532f, 167,0734f, 75,033f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 160, &iLocal_0 + 104[1]);
	*(&iLocal_0 + 104[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "riov_coyote3", 4,203895E-45f, Vector(-3068,626f, 38,24369f, 3231,372f), Vector(0.0f, 4,810986f, 0.0f), Vector(125,0495f, 167,0734f, 94,41615f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 160, &iLocal_0 + 104[2]);
	*(&iLocal_0 + 104[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "riov_coyote4", 4,203895E-45f, Vector(-3350,161f, 36,14117f, 3274,167f), Vector(0.0f, 20.0f, 0.0f), Vector(150,0992f, 167,0734f, 136,9624f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 160, &iLocal_0 + 104[3]);
	*(&iLocal_0 + 104[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "riov_coyote5", 4,203895E-45f, Vector(-3649,194f, 26,09475f, 3335,014f), Vector(0.0f, 20.0f, 0.0f), Vector(143,9794f, 167,0734f, 141,4556f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 160, &iLocal_0 + 104[4]);
	*(&iLocal_0 + 104[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "riov_coyote7", 4,203895E-45f, Vector(-3762,593f, 9,663376f, 3614,673f), Vector(0.0f, 20.0f, 0.0f), Vector(116,0434f, 167,0734f, 142,3679f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 160, &iLocal_0 + 104[5]);
	*(&iLocal_0 + 280) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "riov_flk_CENTER_set");
	*(&iLocal_0 + 168[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "riov_cougar14", 4,203895E-45f, Vector(-2187,696f, 64,25098f, 3575,605f), Vector(0.0f, 20.0f, 0.0f), Vector(27,86323f, 157,1503f, 42,22984f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 280, &iLocal_0 + 168[0]);
	*(&iLocal_0 + 168[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "riov_cougar13", 4,203895E-45f, Vector(-2320,311f, 70,27448f, 3561,265f), Vector(0.0f, 20.0f, 0.0f), Vector(95,70407f, 144,6171f, 97,58847f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 280, &iLocal_0 + 168[1]);
	*(&iLocal_0 + 168[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "riov_cougar12", 4,203895E-45f, Vector(-2480,455f, 82,55096f, 3444,212f), Vector(0.0f, 20.0f, 0.0f), Vector(122,6014f, 122,6014f, 91,0615f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 280, &iLocal_0 + 168[2]);
	*(&iLocal_0 + 168[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "riov_cougar11", 4,203895E-45f, Vector(-2485,426f, 64,84901f, 3595,959f), Vector(0.0f, 20.0f, 0.0f), Vector(73,32108f, 113,1796f, 56,82574f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 280, &iLocal_0 + 168[3]);
	*(&iLocal_0 + 168[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "riov_cougar10", 4,203895E-45f, Vector(-2701,399f, 49,12183f, 3584,517f), Vector(0.0f, 8,018439f, 0.0f), Vector(155,7843f, 116,0861f, 55,75488f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 280, &iLocal_0 + 168[4]);
	*(&iLocal_0 + 168[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "riov_cougar9", 4,203895E-45f, Vector(-2851,949f, 60,09787f, 3466,981f), Vector(0.0f, 20.0f, 0.0f), Vector(93,83244f, 99,31574f, 91,00473f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 280, &iLocal_0 + 168[5]);
	*(&iLocal_0 + 168[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "riov_cougar8", 4,203895E-45f, Vector(-3028,939f, 50,63153f, 3528,086f), Vector(0.0f, 20.0f, 0.0f), Vector(91,15942f, 100,0843f, 57,18759f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 280, &iLocal_0 + 168[6]);
	*(&iLocal_0 + 168[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "riov_cougar7", 4,203895E-45f, Vector(-3175,788f, 40,15686f, 3598,743f), Vector(1,624279f, 44,85572f, 0,887722f), Vector(76,40627f, 125,5066f, 97,42728f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 280, &iLocal_0 + 168[7]);
	*(&iLocal_0 + 168[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "riov_cougar6", 4,203895E-45f, Vector(-3370,746f, 26,10194f, 3588,201f), Vector(0.0f, 20.0f, 0.0f), Vector(97,32235f, 97,32235f, 97,32235f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 280, &iLocal_0 + 168[8]);
	*(&iLocal_0 + 168[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "riov_cougar5", 4,203895E-45f, Vector(-3542,015f, 29,66954f, 3709,699f), Vector(0.0f, 20.0f, 0.0f), Vector(104,6366f, 184,9402f, 129,9607f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 280, &iLocal_0 + 168[9]);
	*(&iLocal_0 + 168[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "riov_cougar4", 4,203895E-45f, Vector(-3531,635f, 38,14902f, 3508,3f), Vector(0.0f, 20.0f, 0.0f), Vector(96,00407f, 101,9702f, 67,79285f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 280, &iLocal_0 + 168[10]);
	*(&iLocal_0 + 168[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "riov_cougar3", 4,203895E-45f, Vector(-3246,255f, 44,17255f, 3452,389f), Vector(0.0f, 20.0f, 0.0f), Vector(81,35522f, 104,0305f, 68,30022f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 280, &iLocal_0 + 168[11]);
	*(&iLocal_0 + 168[12]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "riov_cougar2", 4,203895E-45f, Vector(-3068,657f, 60,23529f, 3405,431f), Vector(0.0f, 20.0f, 0.0f), Vector(98,48691f, 98,48691f, 71,01986f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 280, &iLocal_0 + 168[12]);
	*(&iLocal_0 + 288) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "riov_fomFTEStart", 4,203895E-45f, Vector(-2677,207f, 71,65489f, 3442,786f), Vector(0.0f, 3,664182f, 0.0f), Vector(350,7747f, 219,6455f, 257,9375f));
	*(&iLocal_0 + 424) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "riov_aquaticWildlife_set");
	*(&iLocal_0 + 296[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder", 4,203895E-45f, Vector(-3218,068f, 11,0468f, 3847,991f), Vector(0.0f, 20.0f, 0.0f), Vector(213,1174f, 120,1759f, 120,1759f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 424, &iLocal_0 + 296[0]);
	*(&iLocal_0 + 296[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nCylinder1", 4,203895E-45f, Vector(-2941,48f, 11,0468f, 3792,045f), Vector(0.0f, 20.0f, 0.0f), Vector(171,9794f, 120,1759f, 99,91642f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 424, &iLocal_0 + 296[1]);
	*(&iLocal_0 + 296[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nCylinder2", 4,203895E-45f, Vector(-2686,061f, 11,0468f, 3747,897f), Vector(0.0f, -28,28134f, 0.0f), Vector(171,9794f, 120,1759f, 94,77378f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 424, &iLocal_0 + 296[2]);
	*(&iLocal_0 + 296[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nCylinder3", 4,203895E-45f, Vector(-2384,365f, 11,0468f, 3823,475f), Vector(0.0f, 21,16579f, 0.0f), Vector(132,1029f, 120,1759f, 109,5332f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 424, &iLocal_0 + 296[3]);
	*(&iLocal_0 + 296[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nCylinder4", 4,203895E-45f, Vector(-2514,742f, 11,0468f, 3798,418f), Vector(0.0f, 21,16579f, 0.0f), Vector(79,56471f, 88,09631f, 80,29457f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 424, &iLocal_0 + 296[4]);
	*(&iLocal_0 + 296[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nCylinder5", 4,203895E-45f, Vector(-2257,712f, 11,0468f, 3725,557f), Vector(0.0f, 21,16579f, 0.0f), Vector(70,058f, 77,5702f, 70,70065f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 424, &iLocal_0 + 296[5]);
	*(&iLocal_0 + 296[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nCylinder6", 4,203895E-45f, Vector(-2098,511f, 11,0468f, 3594,111f), Vector(0.0f, 21,16579f, 0.0f), Vector(187,9939f, 77,5702f, 55,92756f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 424, &iLocal_0 + 296[6]);
	*(&iLocal_0 + 296[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nCylinder7", 4,203895E-45f, Vector(-1629,272f, 11,0468f, 3561,406f), Vector(0.0f, 21,16579f, 0.0f), Vector(104,9413f, 77,5702f, 51,65447f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 424, &iLocal_0 + 296[7]);
	*(&iLocal_0 + 296[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nCylinder8", 4,203895E-45f, Vector(-1794,395f, 11,0468f, 3580,832f), Vector(0.0f, -18,15128f, 0.0f), Vector(104,9413f, 77,5702f, 51,65447f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 424, &iLocal_0 + 296[8]);
	*(&iLocal_0 + 296[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nCylinder9", 4,203895E-45f, Vector(-1908,039f, 11,0468f, 3551,692f), Vector(0.0f, 0,5567674f, 0.0f), Vector(104,9413f, 77,5702f, 63,30935f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 424, &iLocal_0 + 296[9]);
	*(&iLocal_0 + 296[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder10", 4,203895E-45f, Vector(-3993,832f, 11,0468f, 3886,646f), Vector(0.0f, 52,62321f, 0.0f), Vector(83,51431f, 120,1759f, 168,2393f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 424, &iLocal_0 + 296[10]);
	*(&iLocal_0 + 296[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder11", 4,203895E-45f, Vector(-3755,156f, 11,0468f, 4020,613f), Vector(0.0f, 78,40577f, 0.0f), Vector(65,93489f, 120,1759f, 168,2393f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 424, &iLocal_0 + 296[11]);
	*(&iLocal_0 + 296[12]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder12", 4,203895E-45f, Vector(-3461,047f, 11,0468f, 3982,886f), Vector(0.0f, 114,7503f, 0.0f), Vector(54,94436f, 120,1759f, 101,3502f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 424, &iLocal_0 + 296[12]);
	*(&iLocal_0 + 296[13]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder13", 4,203895E-45f, Vector(-3602,673f, 11,0468f, 4017,808f), Vector(0.0f, 94,9091f, 0.0f), Vector(54,94436f, 120,1759f, 101,3502f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 424, &iLocal_0 + 296[13]);
	*(&iLocal_0 + 296[14]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder14", 4,203895E-45f, Vector(-3234,876f, 0.0f, 3981,952f), Vector(165,0756f, 61,89607f, 173,9577f), Vector(59,65659f, 82,87489f, 163,6885f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 424, &iLocal_0 + 296[14]);
	*(&iLocal_0 + 432) = Vector(-3491,979f, 29,20257f, 3781,121f);
	*(&iLocal_0 + 432 + 12) = Vector(0.0f, 176,8638f, 0.0f);
	*(&iLocal_0 + 456) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingTree_rio1", Vector(-3491,979f, 29,20257f, 3781,121f), Vector(0.0f, 176,8638f, 0.0f));
	*(&iLocal_0 + 464) = Vector(-3496.0f, 29,15734f, 3782,336f);
	*(&iLocal_0 + 464 + 12) = Vector(0.0f, -93,25693f, 0.0f);
	*(&iLocal_0 + 488) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingHorses_rio1", Vector(-3496.0f, 29,15734f, 3782,336f), Vector(0.0f, -93,25693f, 0.0f));
	*(&iLocal_0 + 496) = Vector(-3488,353f, 29,22202f, 3784,775f);
	*(&iLocal_0 + 496 + 12) = Vector(0.0f, 91,63598f, 0.0f);
	*(&iLocal_0 + 520) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingGuard1_rio1", Vector(-3488,353f, 29,22202f, 3784,775f), Vector(0.0f, 91,63598f, 0.0f));
	*(&iLocal_0 + 528) = Vector(-3485,45f, 29,29042f, 3782,769f);
	*(&iLocal_0 + 528 + 12) = Vector(0.0f, 106,103f, 0.0f);
	*(&iLocal_0 + 552) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingGuard2_rio1", Vector(-3485,45f, 29,29042f, 3782,769f), Vector(0.0f, 106,103f, 0.0f));
	*(&iLocal_0 + 560) = Vector(-3486,898f, 29,29042f, 3781,429f);
	*(&iLocal_0 + 560 + 12) = Vector(0.0f, 137,6902f, 0.0f);
	*(&iLocal_0 + 584) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingGuard3_rio1", Vector(-3486,898f, 29,29042f, 3781,429f), Vector(0.0f, 137,6902f, 0.0f));
	*(&iLocal_0 + 592) = Vector(-3491,979f, 29,22202f, 3784,775f);
	*(&iLocal_0 + 592 + 12) = Vector(0.0f, -85,94526f, 0.0f);
	*(&iLocal_0 + 616) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingguy_rio1", Vector(-3491,979f, 29,22202f, 3784,775f), Vector(0.0f, -85,94526f, 0.0f));
	*(&iLocal_0 + 624) = Vector(-3329,551f, 42,9619f, 3262,086f);
	*(&iLocal_0 + 624 + 12) = Vector(0.0f, 160,6098f, 0.0f);
	*(&iLocal_0 + 648) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingTree_rio2", Vector(-3329,551f, 42,9619f, 3262,086f), Vector(0.0f, 160,6098f, 0.0f));
	*(&iLocal_0 + 656) = Vector(-3348f, 39,27028f, 3260f);
	*(&iLocal_0 + 656 + 12) = Vector(0.0f, -50,21075f, 0.0f);
	*(&iLocal_0 + 680) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingHorses_rio2", Vector(-3348f, 39,27028f, 3260f), Vector(0.0f, -50,21075f, 0.0f));
	*(&iLocal_0 + 688) = Vector(-3333,033f, 43,0371f, 3262,948f);
	*(&iLocal_0 + 688 + 12) = Vector(0.0f, -129,0054f, 0.0f);
	*(&iLocal_0 + 712) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingGuard1_rio2", Vector(-3333,033f, 43,0371f, 3262,948f), Vector(0.0f, -129,0054f, 0.0f));
	*(&iLocal_0 + 720) = Vector(-3336f, 42,26438f, 3269,568f);
	*(&iLocal_0 + 720 + 12) = Vector(0.0f, -36,00678f, 0.0f);
	*(&iLocal_0 + 744) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingGuard2_rio2", Vector(-3336f, 42,26438f, 3269,568f), Vector(0.0f, -36,00678f, 0.0f));
	*(&iLocal_0 + 752) = Vector(-3344f, 39,2618f, 3260f);
	*(&iLocal_0 + 752 + 12) = Vector(0.0f, -118,137f, 0.0f);
	*(&iLocal_0 + 776) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingGuard3_rio2", Vector(-3344f, 39,2618f, 3260f), Vector(0.0f, -118,137f, 0.0f));
	*(&iLocal_0 + 784) = Vector(-3329,979f, 42,79713f, 3265,775f);
	*(&iLocal_0 + 784 + 12) = Vector(0.0f, 48,33434f, 0.0f);
	*(&iLocal_0 + 808) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingguy_rio2", Vector(-3329,979f, 42,79713f, 3265,775f), Vector(0.0f, 48,33434f, 0.0f));
	*(&iLocal_0 + 816) = Vector(-2375,709f, 80,88108f, 3428,962f);
	*(&iLocal_0 + 816 + 12) = Vector(0.0f, 161,6762f, 0.0f);
	*(&iLocal_0 + 840) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingTree_rio3", Vector(-2375,709f, 80,88108f, 3428,962f), Vector(0.0f, 161,6762f, 0.0f));
	*(&iLocal_0 + 848) = Vector(-2370,019f, 81,33321f, 3430,07f);
	*(&iLocal_0 + 848 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 872) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingHorses_rio3", Vector(-2370,019f, 81,33321f, 3430,07f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 880) = Vector(-2373,481f, 81,02461f, 3430,985f);
	*(&iLocal_0 + 880 + 12) = Vector(0.0f, 123,5192f, 0.0f);
	*(&iLocal_0 + 904) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingGuard1_rio3", Vector(-2373,481f, 81,02461f, 3430,985f), Vector(0.0f, 123,5192f, 0.0f));
	*(&iLocal_0 + 912) = Vector(-2380.0f, 81,39855f, 3436.0f);
	*(&iLocal_0 + 912 + 12) = Vector(0.0f, -47,29213f, 0.0f);
	*(&iLocal_0 + 936) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingGuard2_rio3", Vector(-2380.0f, 81,39855f, 3436.0f), Vector(0.0f, -47,29213f, 0.0f));
	*(&iLocal_0 + 944) = Vector(-2378,847f, 81,56503f, 3438,408f);
	*(&iLocal_0 + 944 + 12) = Vector(0.0f, -23,36502f, 0.0f);
	*(&iLocal_0 + 968) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingGuard3_rio3", Vector(-2378,847f, 81,56503f, 3438,408f), Vector(0.0f, -23,36502f, 0.0f));
	*(&iLocal_0 + 976) = Vector(-2376,083f, 80,94261f, 3432,821f);
	*(&iLocal_0 + 976 + 12) = Vector(0.0f, -59,15118f, 0.0f);
	*(&iLocal_0 + 1000) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "hangingguy_rio3", Vector(-2376,083f, 80,94261f, 3432,821f), Vector(0.0f, -59,15118f, 0.0f));
	return 1;
}

void Function_57(int iParam0, int iParam1) //Position: 0x39FF / 14847
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

var Function_58() //Position: 0x3A49 / 14921
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_59(char* cParam0) //Position: 0x3A5E / 14942
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

