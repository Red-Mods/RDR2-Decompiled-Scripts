//Decompiled with MagicRDR v1.0
//Function Count : 66
//Statics Count : 258
//Natives Count : 125
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
	var uLocal_10 = 2;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 2;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 7;
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
	var uLocal_44 = 3;
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
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	var uLocal_154 = 0;
	bool bLocal_155 = false;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 4;
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
	char[] cLocal_188[4] = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 8;
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
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_152 = 0;
	iLocal_153 = &iScriptParam_0;
	Function_65("Initializing Nosalida Volumes", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_155 = 500;
		uLocal_156 = Function_64();
		switch (iLocal_152)
		{
			case 0x00000000:
				if (Function_62())
				{
					cLocal_188 = Function_61(&iLocal_0, "nosalida", iScriptParam_0);
					iLocal_152 = 1;
				}
				bLocal_155 = false;
				break;
			
			case 0x00000001:
				if (IS_WORLD_SECTOR_LOADED(&cLocal_188))
				{
					iLocal_152 = 2;
				}
				bLocal_155 = false;
				break;
			
			case 0x00000002:
				Function_60(&uLocal_158);
				Function_59(&uLocal_158, &uLocal_162, 4, &iLocal_0 + 8, 4294967295, 4);
				Function_59(&uLocal_158, &uLocal_162, 5, &iLocal_0 + 16, 4294967295, 65794);
				Function_59(&uLocal_158, &uLocal_162, 5, &iLocal_0 + 24, 4294967295, 65794);
				Function_59(&uLocal_158, &uLocal_162, 5, &iLocal_0 + 32, 4294967295, 65794);
				Function_57(&uLocal_190, &cLocal_188, "waterFrontHouse01", 1, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_57(&uLocal_190, &cLocal_188, "waterFrontHouse01", 2, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_57(&uLocal_190, &cLocal_188, "mainStructure01", 1, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_57(&uLocal_190, &cLocal_188, "mainStructure01", 2, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_57(&uLocal_190, &cLocal_188, "mainStructure01", 3, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_57(&uLocal_190, &cLocal_188, "mainStructure01", 4, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_57(&uLocal_190, &cLocal_188, "centerHouse01", 1, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_57(&uLocal_190, &cLocal_188, "centerHouse01", 2, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				iLocal_152 = 3;
				bLocal_155 = false;
				break;
			
			case 0x00000003:
				Function_56(&(Global_43791[iLocal_153]), 16);
				Function_55("Finished Initializing Nosalida Volumes", 5.0f);
				iLocal_152 = 4;
				bLocal_155 = false;
				break;
			
			case 0x00000004:
				Function_16(&uLocal_158, &uLocal_162, &uLocal_156, iScriptParam_0);
				Function_12(&uLocal_190, 0);
				break;
			
			case 0x00000005:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				bLocal_155 = false;
				break;
		}
		WAIT(bLocal_155);
	}
	Function_4(&uLocal_158, &uLocal_162);
	Function_3(&uLocal_190);
	Function_2();
	Function_1(&(Global_43791[iLocal_153]), 16);
	Function_55("Unloaded Nosalida Volumes", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0x2F6 / 758
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_2() //Position: 0x310 / 784
{
	RELEASE_LAYOUT_REF(&iLocal_0);
	return;
}

void Function_3(struct<4>[] Param0) //Position: 0x31C / 796
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (IS_VOLUME_VALID(&Param0[iVar04] + 16))
		{
			if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&Param0[iVar04] + 16))
			{
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0[iVar04] + 16);
			}
			if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&Param0[iVar04] + 16))
			{
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0[iVar04] + 16);
			}
		}
		iVar0++;
	}
	return;
}

void Function_4(var uParam0, vector3[] vParam1) //Position: 0x381 / 897
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (uParam0 - 1))
	{
		if (Function_11(&(vParam1[iVar03]), 4))
		{
			SET_CURRENT_MAP(false);
			Function_10(&(vParam1[iVar03]), 4);
		}
		if (Function_11(&(vParam1[iVar03]), 8))
		{
			Function_5(0, 0, 30);
			Function_10(&(vParam1[iVar03]), 8);
		}
		iVar0++;
	}
	return;
}

void Function_5(bool bParam0, int iParam1, int iParam2) //Position: 0x3DE / 990
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
		Function_6(Global_26182, &bVar0, 1);
	}
	return;
}

void Function_6(bool bParam0, bool bParam1, bool bParam2) //Position: 0x4C8 / 1224
{
	int iVar0;
	
	Function_9(bParam0);
	Function_8(&bParam1);
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
	Function_7();
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

void Function_7() //Position: 0x647 / 1607
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_8(int iParam0) //Position: 0x653 / 1619
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

void Function_9(int iParam0) //Position: 0x69D / 1693
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

void Function_10(struct<17> Param0) //Position: 0x6E3 / 1763
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	Param0.f_16 = (Param0.f_16 - iVar0);
	return;
}

bool Function_11(struct<17> Param0) //Position: 0x700 / 1792
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_12(struct<4>[] Param0, bool bParam1) //Position: 0x71E / 1822
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	var uVar7;
	var uVar8;
	bool bVar9;
	var uVar10;
	
	bVar6 = false;
	if (Global_46721 > Param0)
	{
		Global_46721 = 0;
	}
	iVar0 = Global_46721;
	while (iVar0 < Function_15((Param0 - 1), Global_46721 + 4))
	{
		uVar7 = &Param0[iVar04];
		if (IS_DOOR_VALID(&uVar7))
		{
			uVar8 = Param0[iVar04].f_12;
			if (uVar8 & 16384 >= 0)
			{
				*(&Param0[iVar04] + 24) = GET_PERS_CHAR_FROM_OBJECT(DECOR_GET_OBJECT(&uVar7, "owner"));
				Function_14(&(Param0[iVar04]), 16384);
				uVar8 = Param0[iVar04].f_12;
			}
			bVar1 = DECOR_GET_BOOL_VERBOSE(&uVar7, "lockMe", &bVar2);
			bVar4 = DECOR_GET_BOOL_VERBOSE(&uVar7, "unlockMe", &bVar5);
			if (uVar8 & 2 >= 0)
			{
				if (!(bVar1 || bVar4))
				{
					if (bVar6)
					{
						if (&bParam1)
						{
							if (uVar8 & 1 == 0)
							{
								Function_13(&(Param0[iVar04]), 1);
								uVar8 = Param0[iVar04].f_12;
							}
						}
						else if (uVar8 & 1 >= 0)
						{
							Function_14(&(Param0[iVar04]), 1);
							uVar8 = Param0[iVar04].f_12;
						}
					}
					else if ((StackVal && Global_99472) < 0 && uVar8 & 1 != 0)
					{
						if (IS_VOLUME_VALID(&Param0[iVar04] + 16))
						{
							bVar9 = false;
							if (IS_ACTOR_IN_VOLUME(Function_64(), &Param0[iVar04] + 16))
							{
								bVar9 = true;
							}
							if (IS_PERS_CHAR_VALID(&Param0[iVar04] + 24))
							{
								if (IS_PERS_CHAR_ALIVE(&Param0[iVar04] + 24))
								{
									uVar10 = GET_ACTOR_FROM_PERS_CHAR(&Param0[iVar04] + 24);
									if (IS_ACTOR_VALID(&uVar10))
									{
										if (IS_ACTOR_IN_VOLUME(&uVar10, &Param0[iVar04] + 16))
										{
											bVar9 = true;
										}
									}
								}
							}
							if (!bVar9)
							{
								Function_13(&(Param0[iVar04]), 1);
								uVar8 = Param0[iVar04].f_12;
							}
							if (!DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&Param0[iVar04] + 16))
							{
								ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0[iVar04] + 16);
							}
							if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&Param0[iVar04] + 16))
							{
								ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0[iVar04] + 16);
							}
						}
						else
						{
							Function_13(&(Param0[iVar04]), 1);
							uVar8 = Param0[iVar04].f_12;
						}
					}
					else if ((StackVal && Global_99472) != 0 && uVar8 & 1 < 0)
					{
						Function_14(&(Param0[iVar04]), 1);
						uVar8 = Param0[iVar04].f_12;
						if (IS_VOLUME_VALID(&Param0[iVar04] + 16))
						{
							if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&Param0[iVar04] + 16))
							{
								REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0[iVar04] + 16);
							}
							if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&Param0[iVar04] + 16))
							{
								REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0[iVar04] + 16);
							}
						}
					}
				}
			}
			if (bVar1)
			{
				if (!bVar2)
				{
					DECOR_REMOVE(&uVar7, "lockMe");
				}
				if (uVar8 & 8192 == 0)
				{
					Function_13(&(Param0[iVar04]), 8192);
					uVar8 = Param0[iVar04].f_12;
				}
				if (uVar8 & 1 == 0)
				{
					Function_13(&(Param0[iVar04]), 1);
					uVar8 = Param0[iVar04].f_12;
				}
			}
			else if (bVar4)
			{
				if (!bVar5)
				{
					DECOR_REMOVE(&uVar7, "unlockMe");
				}
				if (uVar8 & 8192 >= 0)
				{
					Function_14(&(Param0[iVar04]), 8192);
					uVar8 = Param0[iVar04].f_12;
				}
				if (uVar8 & 1 >= 0)
				{
					Function_14(&(Param0[iVar04]), 1);
					uVar8 = Param0[iVar04].f_12;
				}
			}
			bVar3 = IS_DOOR_LOCKED(&uVar7);
			if (uVar8 & 1 >= 0)
			{
				if (Global_6630)
				{
					if (IS_VOLUME_VALID(&Param0[iVar04] + 16) && uVar8 & 8192 != 0)
					{
						if (bVar3)
						{
							if (IS_ACTOR_IN_VOLUME(Function_64(), &Param0[iVar04] + 16))
							{
								SET_DOOR_LOCK(&uVar7, 0);
							}
						}
					}
				}
				else if (!bVar3)
				{
					SET_DOOR_LOCK(&uVar7, 1);
				}
			}
			else if (Global_6630)
			{
				if (IS_VOLUME_VALID(&Param0[iVar04] + 16) && uVar8 & 32768 < 0)
				{
					if (IS_ACTOR_IN_VOLUME(Function_64(), &Param0[iVar04] + 16))
					{
						if (IS_DOOR_OPENED(&uVar7))
						{
							CLOSE_DOOR(&uVar7, 1.0f);
							Function_14(&(Param0[iVar04]), 32768);
						}
					}
				}
			}
			else if (bVar3)
			{
				SET_DOOR_LOCK(&uVar7, 0);
			}
		}
		iVar0++;
	}
	Global_46721 = iVar0;
	return;
}

void Function_13(struct<13> Param0) //Position: 0xB3F / 2879
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_14(struct<13> Param0) //Position: 0xB52 / 2898
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

int Function_15(int iParam0, bool bParam1) //Position: 0xB6F / 2927
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_16(vector3 vParam0) //Position: 0xB81 / 2945
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar1 = 0;
	vParam0.f_4 = 0;
	uVar2 = Global_6629;
	Global_6629 = 0;
	if (!Function_54(32) || !IS_ACTOR_VALID(&uParam2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < (vParam0 - 1))
	{
		if (Function_17(&(vParam1[iVar03]), &uParam2, uParam3, iVar1, uVar2))
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

bool Function_17(vector3 vParam0, var uParam3, bool bParam4) //Position: 0xC0B / 3083
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_53(&vParam0))
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
					if (!Function_11(&vParam0, 2))
					{
						if (!Function_11(&vParam0, 8))
						{
							if (DECOR_CHECK_EXIST(&vParam0 + 8, "customweather"))
							{
								Function_51(DECOR_GET_INT(&vParam0 + 8, "customweather"), 0, 0, 30, 1);
								Function_50(&vParam0, 8);
							}
						}
					}
				}
				else if (Function_11(&vParam0, 2))
				{
					if (Function_11(&vParam0, 8))
					{
						if (HUD_IS_FADED())
						{
							Function_5(0, 0, 0);
						}
						else
						{
							Function_5(0, 0, 30);
						}
						Function_10(&vParam0, 8);
					}
				}
			}
			if ((bVar0 && 16) >= 0)
			{
				if (bVar1)
				{
					if (!Function_11(&vParam0, 2))
					{
						if (!Function_11(&vParam0, 4))
						{
							if (DECOR_CHECK_EXIST(&vParam0 + 8, "ncustommap"))
							{
								SET_CURRENT_MAP(DECOR_GET_INT(&vParam0 + 8, "ncustommap"));
								Function_50(&vParam0, 4);
							}
						}
					}
				}
				else if (Function_11(&vParam0, 2))
				{
					if (Function_11(&vParam0, 4))
					{
						SET_CURRENT_MAP(false);
						Function_10(&vParam0, 4);
					}
				}
			}
			if ((bVar0 && 128) >= 0)
			{
				if ((((((bVar1 && Function_49(iParam2)) && !Function_48(0, 0, 1, 1)) && !Global_6646) && !Global_6647) && !Function_47(2048)) && !IS_SCRIPT_VALID(&Global_39922 + 96))
				{
					if (!Function_11(&vParam0, 2))
					{
						if (!Function_11(&vParam0, 16))
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
								Function_50(&vParam0, 16);
								Function_39(3, 28, &uParam1, GET_OBJECT_FROM_VOLUME(&vParam0 + 8), 0);
							}
						}
					}
				}
				else if (Function_11(&vParam0, 2))
				{
					if (Function_11(&vParam0, 16))
					{
						Function_10(&vParam0, 16);
					}
				}
			}
			if ((bVar0 && 64) >= 0)
			{
				if (bVar1 && !Global_6623)
				{
					if (!Function_11(&vParam0, 2))
					{
						if (DECOR_CHECK_EXIST(&vParam0 + 8, "factionswap") && DECOR_CHECK_EXIST(&vParam0 + 8, "relationship"))
						{
							SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(DECOR_GET_INT(&vParam0 + 8, "factionswap"), 2, DECOR_GET_INT(&vParam0 + 8, "relationship"));
						}
					}
				}
				else if (Function_11(&vParam0, 2))
				{
					if (DECOR_CHECK_EXIST(&vParam0 + 8, "factionswap") && DECOR_CHECK_EXIST(&vParam0 + 8, "relationship"))
					{
						RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(DECOR_GET_INT(&vParam0 + 8, "factionswap"), 2);
					}
				}
			}
			if (bVar1)
			{
				Function_50(&vParam0, 2);
			}
			else
			{
				Function_10(&vParam0, 2);
			}
			break;
		
		case 0x00000002:
		case 0x00000004:
			if (!Function_49(iParam2))
			{
				return 0;
			}
			if (IS_ACTOR_IN_VOLUME(&uParam1, &vParam0 + 8))
			{
				if (!Function_38(&(Global_43791[iParam2]), 262144))
				{
					if (!Function_11(&vParam0, 1))
					{
						if (!Global_6620)
						{
							Function_37(StackVal, StackVal, vParam0);
						}
						else
						{
							Global_6620 = 0;
						}
						Function_50(&vParam0, 1);
					}
				}
				if (vParam0 == 4)
				{
					if (!bParam4 && Function_49(iParam2))
					{
						Function_36(&Global_44085[Global_44085[iParam29]9] + 32, &Global_44085[iParam29] + 32);
					}
					Global_6629 = 1;
				}
				Function_18(iParam2);
			}
			else if (vParam0 == 4)
			{
				Global_6629 = 0;
			}
			break;
	}
	return bVar1;
}

void Function_18(int iParam0) //Position: 0x1063 / 4195
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_38(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_56(&(Global_43791[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_23(473, 1, 0, 0);
		iVar0 = Function_22(iParam0);
		if (iVar0 == Global_46722[0])
		{
			Function_23(474, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[1])
		{
			Function_23(475, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[2])
		{
			Function_23(476, 1, 0, 0);
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
		Function_21(iVar2, iVar1);
	}
	else if (iParam0 == Global_46926[9])
	{
		Function_21(7, 30);
	}
	if (Function_20(473) <= Function_19(473))
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
		{
			AWARD_ACHIEVEMENT(30);
		}
	}
	return;
}

float Function_19(int iParam0) //Position: 0x1154 / 4436
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

float Function_20(int iParam0) //Position: 0x1191 / 4497
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_21(int iParam0, int iParam1) //Position: 0x11CA / 4554
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

var Function_22(int iParam0) //Position: 0x1234 / 4660
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_49(iParam0))
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

int Function_23(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x128C / 4748
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
	Function_35(iParam0, TO_FLOAT(bParam1), 1);
	Function_34(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_25(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_24(iParam0);
	return 1;
}

void Function_24(bool bParam0) //Position: 0x14B4 / 5300
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

void Function_25(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x1552 / 5458
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_19(390))), 32);
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
					bVar19 = (Function_20(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_20(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_32(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_30(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&uParam7))
							{
								uParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_28(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&uParam7), &Global_55480[iParam016] + 32, Function_27(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_26(), &Var9);
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

var Function_26() //Position: 0x1B90 / 7056
{
	int iVar0;
	
	return &iVar0;
}

var Function_27(int iParam0) //Position: 0x1B99 / 7065
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_28(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1BAA / 7082
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
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_29(char* cParam0) //Position: 0x1CA1 / 7329
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_30(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1CBC / 7356
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_15(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_31(Function_15(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_31(int iParam0, int iParam1) //Position: 0x1D23 / 7459
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_32(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1D35 / 7477
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
	if (((Function_33(iParam0) != 19 || Function_33(iParam0) != 17) || Function_33(iParam0) != 10) || Function_33(iParam0) != 9)
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

int Function_33(int iParam0) //Position: 0x1E69 / 7785
{
	return Global_55480[iParam016].f_96;
}

void Function_34(int iParam0) //Position: 0x1E78 / 7800
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

int Function_35(int iParam0, float fParam1, bool bParam2) //Position: 0x2012 / 8210
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

void Function_36(var uParam0, int iParam1) //Position: 0x2256 / 8790
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_37(int iParam0, var uParam1, var uParam2) //Position: 0x2263 / 8803
{
	if (!&iParam0 + 8 != &Global_21498)
	{
		Global_21498 = &iParam0 + 8;
		Global_21498.f_12 = iParam0;
		Global_21498.f_8 = 0;
	}
	return;
}

bool Function_38(var uParam0, int iParam1) //Position: 0x228D / 8845
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_39(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x22AA / 8874
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	var uVar4;
	
	if (!Function_46(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_45(iParam1))
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
	if (!Function_42(1))
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
		uVar4 = CREATE_OBJECTSET_IN_LAYOUT(Function_26(), &Global_39918, 3, 0);
		SET_CRIME_OBJECTSET(&uVar2, &uVar4);
		if (!&bParam4)
		{
			SET_CRIME_WITNESSED(&uVar2, true);
		}
		else
		{
			SET_CRIME_WITNESSED(&uVar2, 3);
			Function_40();
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

void Function_40() //Position: 0x255D / 9565
{
	var uVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_39918);
	uVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes"));
	Function_41(&uVar0, &uVar1);
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

void Function_41(var uParam0, int iParam1) //Position: 0x25D0 / 9680
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

bool Function_42(bool bParam0) //Position: 0x2606 / 9734
{
	if (Function_47(256))
	{
		return 0;
	}
	if (Function_47(262144))
	{
		return 0;
	}
	if (Function_44())
	{
		return 0;
	}
	if (!Function_47(1))
	{
		return 0;
	}
	if (!Function_47(4096))
	{
		return 0;
	}
	if (bParam0 && Function_43(12))
	{
		return 0;
	}
	if (Global_6621)
	{
		return 0;
	}
	if (Function_47(2048))
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

int Function_43(int iParam0) //Position: 0x267C / 9852
{
	if (Global_42825 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_44() //Position: 0x268D / 9869
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

bool Function_45(int iParam0) //Position: 0x26A6 / 9894
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_46(int iParam0) //Position: 0x26BC / 9916
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_47(int iParam0) //Position: 0x26D1 / 9937
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_48(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x26EF / 9967
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

bool Function_49(int iParam0) //Position: 0x279E / 10142
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_50(struct<17> Param0) //Position: 0x27B4 / 10164
{
	Param0.f_16 = (Param0.f_16 || iParam1);
	return;
}

void Function_51(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x27C7 / 10183
{
	int iVar0;
	bool bVar1;
	
	Function_9(uParam0);
	Global_26182.f_4 = uParam0;
	Global_26182.f_24 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_52(StackVal, &bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(&uParam1, &uParam2, &uParam3);
			Function_6(StackVal, &bVar1, &bParam4);
		}
	}
}

void Function_52(int iParam0, int iParam1) //Position: 0x2841 / 10305
{
	var uVar0;
	
	uVar0 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	Function_9(iParam0);
	Function_8(&uVar0);
	PRINTNL();
	Function_6(iParam0, &uVar0, &iParam1);
	return;
}

bool Function_53(int iParam0) //Position: 0x286A / 10346
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

bool Function_54(int iParam0) //Position: 0x288A / 10378
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_55(char* cParam0) //Position: 0x28A6 / 10406
{
	if (!Function_54(128))
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

void Function_56(var uParam0, bool bParam1) //Position: 0x28E6 / 10470
{
	uParam0 = (uParam0 || bParam1);
	return;
}

var Function_57(struct<4>[] Param0, var uParam1, char* cParam2) //Position: 0x28F7 / 10487
{
	int iVar0;
	char* cVar1[32];
	char* cVar9[8];
	var uVar11;
	
	iVar0 = Function_58(&Param0);
	if (iVar0 <= 0)
	{
		return 4294967295;
	}
	strcpy(&cVar1, &cParam4, 32);
	stradd(&cVar1, "_", 32);
	stradd(&cVar1, &cParam2, 32);
	stradd(&cVar1, "*", 32);
	strcpy(&cVar9, "door", 8);
	if (iParam3 <= 10)
	{
		stradd(&cVar9, "0", 8);
	}
	straddi(&cVar9, iParam3, 8);
	uVar11 = GET_WORLD_SECTOR_CHILD_OBJECT(&uParam1, &cVar1, &cVar9);
	if (!IS_DOOR_VALID(GET_DOOR_FROM_OBJECT(&uVar11)))
	{
		return 4294967295;
	}
	Param0[iVar04] = GET_DOOR_FROM_OBJECT(&uVar11);
	if (bParam5)
	{
		Function_13(&(Param0[iVar04]), 1);
	}
	Function_13(&(Param0[iVar04]), 4096);
	(&Param0[iVar04] + 16) = &bParam6;
	if (&bParam7)
	{
		Function_13(&(Param0[iVar04]), 16384);
	}
	if (&bParam8)
	{
		Function_13(&(Param0[iVar04]), 32768);
	}
	if (IS_OBJECT_VALID(&bParam6))
	{
		DECOR_SET_OBJECT(&uVar11, "roomvol", &bParam6);
	}
	return iVar0;
}

var Function_58(struct<4>[] Param0) //Position: 0x29EB / 10731
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (!IS_DOOR_VALID(&(Param0[iVar04])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void Function_59(var uParam0, vector3[] vParam1, int iParam2, var uParam3, int iParam4, int iParam5) //Position: 0x2A1C / 10780
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
	*(&vParam1[uParam03] + 8) = &uParam3;
	vParam1[uParam03] = iParam2;
	DECOR_SET_INT(&vParam1[uParam03] + 8, "locflag", &iParam5);
	if (iParam2 == 4)
	{
		ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&vParam1[uParam03] + 8, 0);
	}
	uParam0++;
}

void Function_60(struct<5> Param0) //Position: 0x2B09 / 11017
{
	Param0 = 0;
	Param0.f_4 = 0;
	return;
}

var Function_61(int iParam0, var uParam1, int iParam2) //Position: 0x2B1A / 11034
{
	*(&Global_44085[iParam29] + 56) = CREATE_WORLD_SECTOR(&iParam0, &uParam1);
	return &Global_44085[iParam29] + 56;
}

bool Function_62() //Position: 0x2B3D / 11069
{
	var uVar0;
	
	Function_63(3, 3);
	uVar0 = &uVar0;
	iLocal_0 = FIND_NAMED_LAYOUT("Nosalida_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_0))
	{
		iLocal_0 = CREATE_LAYOUT("Nosalida_layout");
	}
	*(&iLocal_0 + 8) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nosv_region", 4,203895E-45f, Vector(-4735,336f, 2,00787f, 3989,682f), Vector(0.0f, 20.0f, 0.0f), Vector(61,49357f, 11,71307f, 75,2207f));
	*(&iLocal_0 + 16) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nosv_house01", 2,802597E-45f, Vector(-4710,054f, 4,059649f, 3964,694f), Vector(0.0f, -4,679701f, 0.0f), Vector(7,749181f, 4,736944f, 9,648175f));
	*(&iLocal_0 + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nosv_house02", 2,802597E-45f, Vector(-4731,854f, 3,75279f, 3959,197f), Vector(0.0f, -10,19262f, 0.0f), Vector(11,53499f, 3,732412f, 13,04875f));
	*(&iLocal_0 + 32) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nosv_house03", 2,802597E-45f, Vector(-4757,934f, 4,248062f, 4026,789f), Vector(-0,5938766f, 14,65898f, 0,4160779f), Vector(29,11474f, 6,599332f, 15,91506f));
	*(&iLocal_0 + 64) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "nosv_dogs_set");
	*(&iLocal_0 + 40[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nosv_dogs01", 4,203895E-45f, Vector(-4737,044f, 2,007869f, 4036,396f), Vector(0.0f, 30,49317f, 0.0f), Vector(27,90201f, 3,969246f, 11,90349f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 64, &iLocal_0 + 40[0]);
	*(&iLocal_0 + 40[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nosv_dogs02", 4,203895E-45f, Vector(-4709,754f, 2,007869f, 3965,22f), Vector(0.0f, -85,48962f, 0.0f), Vector(26,41172f, 3,822314f, 19,55445f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 64, &iLocal_0 + 40[1]);
	*(&iLocal_0 + 96) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "nosv_docks_set");
	*(&iLocal_0 + 72[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nosv_docks02", 2,802597E-45f, Vector(-4733,883f, 1,820969f, 3938,285f), Vector(1,847206f, 54,63364f, 0,3211141f), Vector(21,59676f, 1,712891f, 3,04375f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 96, &iLocal_0 + 72[0]);
	*(&iLocal_0 + 72[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nosv_docks01", 2,802597E-45f, Vector(-4741,52f, 1,327494f, 3955,527f), Vector(0.0f, -9,450789f, 0.0f), Vector(2,70771f, 1,523745f, 16,61516f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 96, &iLocal_0 + 72[1]);
	*(&iLocal_0 + 168) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "nosv_chickens_set");
	*(&iLocal_0 + 104[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nosv_chickens01", 4,203895E-45f, Vector(-4698,853f, 3,330612f, 3952,004f), Vector(0.0f, 20.0f, 0.0f), Vector(5,537433f, 5,537433f, 5,537433f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 168, &iLocal_0 + 104[0]);
	*(&iLocal_0 + 104[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nosv_chickens02", 4,203895E-45f, Vector(-4712,516f, 3,957368f, 3951,656f), Vector(0.0f, 20.0f, 0.0f), Vector(8,079192f, 2,992907f, 5,031132f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 168, &iLocal_0 + 104[1]);
	*(&iLocal_0 + 104[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nosv_chickens03", 4,203895E-45f, Vector(-4686,73f, 4,542793f, 3968,686f), Vector(0.0f, -8,74915f, 0.0f), Vector(8,001294f, 3,152647f, 4,709808f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 168, &iLocal_0 + 104[2]);
	*(&iLocal_0 + 104[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nosv_chickens04", 4,203895E-45f, Vector(-4703,657f, 4,122806f, 3976,856f), Vector(0.0f, -18,00772f, 0.0f), Vector(6,084473f, 4,477352f, 8,020122f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 168, &iLocal_0 + 104[3]);
	*(&iLocal_0 + 104[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nosv_chickens05", 4,203895E-45f, Vector(-4717,485f, 3,769896f, 3977,028f), Vector(0.0f, 20.0f, 0.0f), Vector(6,086939f, 4,173774f, 8,597703f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 168, &iLocal_0 + 104[4]);
	*(&iLocal_0 + 104[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nosv_chickens06", 4,203895E-45f, Vector(-4752.0f, 4,87489f, 4038,013f), Vector(0.0f, 5,352821f, 0.0f), Vector(19,12297f, 4,34854f, 7,981565f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 168, &iLocal_0 + 104[5]);
	*(&iLocal_0 + 104[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nosv_chickens07", 4,203895E-45f, Vector(-4717,006f, 3,864486f, 4023,634f), Vector(0.0f, 20.0f, 0.0f), Vector(9,988485f, 4,623668f, 5,266285f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 168, &iLocal_0 + 104[6]);
	*(&iLocal_0 + 208) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "nosv_goats_set");
	*(&iLocal_0 + 176[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nosv_goats01", 4,203895E-45f, Vector(-4698,604f, 3,036527f, 3966,532f), Vector(0.0f, 0,4843248f, 0.0f), Vector(6,555081f, 3,16973f, 10,55234f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 208, &iLocal_0 + 176[0]);
	*(&iLocal_0 + 176[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nosv_goats02", 4,203895E-45f, Vector(-4718,224f, 3,957368f, 3954,931f), Vector(0.0f, 58,54212f, 0.0f), Vector(11,62974f, 1,964657f, 6,306052f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 208, &iLocal_0 + 176[1]);
	*(&iLocal_0 + 176[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nosv_goats03", 4,203895E-45f, Vector(-4753,052f, 101,2714f, 4035,282f), Vector(0.0f, 20.0f, 0.0f), Vector(14,22141f, 4,525812f, 5,875824f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 208, &iLocal_0 + 176[2]);
	*(&iLocal_0 + 216) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nv_BirdPop", 2,802597E-45f, Vector(-4716.0f, 3,036528f, 3968,239f), Vector(0.0f, 0.0f, 0.0f), Vector(118,4502f, 36,13533f, 149,2472f));
	*(&iLocal_0 + 224) = Vector(-4735,691f, 3,142759f, 3959,758f);
	*(&iLocal_0 + 224 + 12) = Vector(0.0f, -105,5876f, 0.0f);
	*(&iLocal_0 + 248) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "nosf_AreaTreasure1", Vector(-4735,691f, 3,142759f, 3959,758f), Vector(0.0f, -105,5876f, 0.0f));
	*(&iLocal_0 + 256) = Vector(-4728,77f, 3,018617f, 4004,514f);
	*(&iLocal_0 + 256 + 12) = Vector(0.0f, -276,6156f, 0.0f);
	*(&iLocal_0 + 280) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "nosf_AreaTreasure2", Vector(-4728,77f, 3,018617f, 4004,514f), Vector(0.0f, -276,6156f, 0.0f));
	*(&iLocal_0 + 288) = Vector(-4766,274f, 2,138235f, 4023,075f);
	*(&iLocal_0 + 288 + 12) = Vector(0.0f, -69,91085f, 0.0f);
	*(&iLocal_0 + 312) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "nosf_AreaTreasure3", Vector(-4766,274f, 2,138235f, 4023,075f), Vector(0.0f, -69,91085f, 0.0f));
	*(&iLocal_0 + 320) = Vector(-4754,748f, 3,157908f, 4025,919f);
	*(&iLocal_0 + 320 + 12) = Vector(0.0f, -164,6989f, 0.0f);
	*(&iLocal_0 + 344) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "nosf_interiorPoint_house1", Vector(-4754,748f, 3,157908f, 4025,919f), Vector(0.0f, -164,6989f, 0.0f));
	*(&iLocal_0 + 352) = Vector(-4709,098f, 3,159959f, 3964,871f);
	*(&iLocal_0 + 352 + 12) = Vector(0.0f, -275,3008f, 0.0f);
	*(&iLocal_0 + 376) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "nosf_interiorPoint_house", Vector(-4709,098f, 3,159959f, 3964,871f), Vector(0.0f, -275,3008f, 0.0f));
	*(&iLocal_0 + 384) = Vector(-4734,144f, 3,157851f, 3959,429f);
	*(&iLocal_0 + 384 + 12) = Vector(0.0f, -98,3689f, 0.0f);
	*(&iLocal_0 + 408) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "nosf_interiorPoint_house2", Vector(-4734,144f, 3,157851f, 3959,429f), Vector(0.0f, -98,3689f, 0.0f));
	*(&iLocal_0 + 416) = Vector(-4732,877f, 3,157851f, 3955,011f);
	*(&iLocal_0 + 416 + 12) = Vector(0.0f, -98,3689f, 0.0f);
	*(&iLocal_0 + 440) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "nosf_interiorPoint_house3", Vector(-4732,877f, 3,157851f, 3955,011f), Vector(0.0f, -98,3689f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "nos_vista_cam_pos1", Vector(-4770,091f, 4,061f, 3927,483f), Vector(-1,333f, -133,603f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "nos_vista_cam_pos2", Vector(-4668,753f, 7,878f, 3928,565f), Vector(-9,534f, 115,531f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "nos_vista_cam_pos3", Vector(-4685,64f, 9,17f, 4014,176f), Vector(-10,84f, 29,185f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "nos_vista_cam_pos4", Vector(-4769,903f, 8,668f, 4057,877f), Vector(-6,76f, -23,323f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "nos_vista_cam_pos5", Vector(-4776,173f, 6,841f, 4038,427f), Vector(-9,487f, -28,015f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "nos_vista_cam_pos6", Vector(-4730,625f, 6,807f, 3988,08f), Vector(-12,19f, 37,337f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "nos_vista_cam_pos7", Vector(-4785,929f, 5,109f, 3973,673f), Vector(-2,123f, -58,106f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "nos_vista_cam_pos8", Vector(-4715,063f, 5,982f, 3968,258f), Vector(-4,68f, 65,168f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "nos_vista_cam_pos9", Vector(-4732,547f, 7,267f, 3939,39f), Vector(-16,839f, 132,82f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "nos_vista_cam_pos10", Vector(-4697,269f, 7,092f, 3944,439f), Vector(-7,934f, 122,43f, 0.0f));
	*(&iLocal_0 + 448) = Vector(-4757,202f, 2,532873f, 3943,118f);
	*(&iLocal_0 + 448 + 12) = Vector(0.0f, 79,7265f, 0.0f);
	*(&iLocal_0 + 472) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "nosf_respawn_water_01", Vector(-4757,202f, 2,532873f, 3943,118f), Vector(0.0f, 79,7265f, 0.0f));
	*(&iLocal_0 + 480) = Vector(-4756,526f, 2,573081f, 3960,351f);
	*(&iLocal_0 + 480 + 12) = Vector(0.0f, 79,7265f, 0.0f);
	*(&iLocal_0 + 504) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "nosf_respawn_water_02", Vector(-4756,526f, 2,573081f, 3960,351f), Vector(0.0f, 79,7265f, 0.0f));
	*(&iLocal_0 + 512) = Vector(-4741,297f, 2,492837f, 3953,254f);
	*(&iLocal_0 + 512 + 12) = Vector(0.0f, 79,7265f, 0.0f);
	*(&iLocal_0 + 536) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "nosf_respawn_water_03", Vector(-4741,297f, 2,492837f, 3953,254f), Vector(0.0f, 79,7265f, 0.0f));
	*(&iLocal_0 + 544) = Vector(-4743,793f, 2,277456f, 3971,102f);
	*(&iLocal_0 + 544 + 12) = Vector(0,5604507f, 79,65567f, 0,3089817f);
	*(&iLocal_0 + 568) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "nosf_respawn_water_04", Vector(-4743,793f, 2,277456f, 3971,102f), Vector(0,5604507f, 79,65567f, 0,3089817f));
	*(&iLocal_0 + 576) = Vector(-4736.0f, 0,91145f, 3940.0f);
	*(&iLocal_0 + 576 + 12) = Vector(0.0f, 43,57052f, 0.0f);
	*(&iLocal_0 + 600) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "nosf_respawn_water_05", Vector(-4736.0f, 0,91145f, 3940.0f), Vector(0.0f, 43,57052f, 0.0f));
	return 1;
}

void Function_63(int iParam0, int iParam1) //Position: 0x38F5 / 14581
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

var Function_64() //Position: 0x393F / 14655
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_65(char* cParam0) //Position: 0x3954 / 14676
{
	if (!Function_54(128))
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

