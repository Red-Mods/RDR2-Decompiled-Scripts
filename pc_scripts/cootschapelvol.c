//Decompiled with MagicRDR v1.0
//Function Count : 68
//Statics Count : 234
//Natives Count : 135
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 4;
	var uLocal_5 = 0;
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
	var uLocal_16 = 7;
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
	var uLocal_42 = 14;
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
	var uLocal_74 = 5;
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
	var uLocal_88 = 8;
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
	var uLocal_108 = 4;
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
	var uLocal_120 = 4;
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
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	var uLocal_150 = 0;
	int iLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 6;
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
	char[] cLocal_196[4] = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 4;
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
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_148 = 0;
	iLocal_149 = &iScriptParam_0;
	Function_67("Initializing CootsChapel Volumes", 3);
	while (!IS_EXITFLAG_SET())
	{
		iLocal_151 = 500;
		uLocal_152 = Function_66();
		switch (iLocal_148)
		{
			case 0x00000000:
				if (Function_64())
				{
					REQUEST_STRING_TABLE("graveyards");
					cLocal_196 = Function_63(&iLocal_0, "coots", iScriptParam_0);
					iLocal_148 = 1;
				}
				iLocal_151 = 0;
				break;
			
			case 0x00000001:
				if (IS_WORLD_SECTOR_LOADED(&cLocal_196) && HAS_STRING_TABLE_LOADED("graveyards"))
				{
					iLocal_148 = 2;
				}
				iLocal_151 = 0;
				break;
			
			case 0x00000002:
				Function_62(&uLocal_154);
				Function_61(&uLocal_154, &uLocal_158, 4, &iLocal_0 + 8, 4294967295, 4);
				Function_61(&uLocal_154, &uLocal_158, 5, &iLocal_0 + 56, 4294967295, 266);
				Function_61(&uLocal_154, &uLocal_158, 5, &iLocal_0 + 136, 4294967295, 258);
				Function_61(&uLocal_154, &uLocal_158, 5, &iLocal_0 + 144, 4294967295, 258);
				Function_61(&uLocal_154, &uLocal_158, 5, &iLocal_0 + 152, 4294967295, 258);
				Function_61(&uLocal_154, &uLocal_158, 5, &iLocal_0 + 160, 4294967295, 258);
				Function_59(&uLocal_198, &cLocal_196, "chapel01", 1, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_59(&uLocal_198, &cLocal_196, "chapel01", 2, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_59(&uLocal_198, &cLocal_196, "chapel01", 3, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_59(&uLocal_198, &cLocal_196, "chapel01", 4, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				iLocal_148 = 3;
				iLocal_151 = 0;
				break;
			
			case 0x00000003:
				Function_58(&(Global_43791[iLocal_149]), 16);
				Function_57("Finished Initializing CootsChapel Volumes", 5.0f);
				iLocal_148 = 4;
				iLocal_151 = 0;
				break;
			
			case 0x00000004:
				Function_18(&uLocal_154, &uLocal_158, &uLocal_152, iScriptParam_0);
				Function_14(&uLocal_198, 0);
				break;
			
			case 0x00000005:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				iLocal_151 = 0;
				break;
		}
		WAIT(iLocal_151);
	}
	REMOVE_STRING_TABLE("graveyards");
	Function_12(&(Global_39874[13]));
	Function_4(&uLocal_154, &uLocal_158);
	Function_3(&uLocal_198);
	Function_2();
	Function_1(&(Global_43791[iLocal_149]), 16);
	Function_57("Unloaded CootsChapel Volumes", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0x28A / 650
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_2() //Position: 0x2A4 / 676
{
	RELEASE_LAYOUT_REF(&iLocal_0);
	return;
}

void Function_3(struct<4>[] Param0) //Position: 0x2B0 / 688
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

void Function_4(var uParam0, vector3[] vParam1) //Position: 0x315 / 789
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

void Function_5(int iParam0, int iParam1, int iParam2) //Position: 0x372 / 882
{
	int iVar0;
	
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
		iVar0 = MAKE_TIME_OF_DAY(iParam0, &iParam1, &iParam2);
		Function_6(Global_26182, &iVar0, 1);
	}
	return;
}

void Function_6(int iParam0, int iParam1, bool bParam2) //Position: 0x45C / 1116
{
	int iVar0;
	
	Function_9(iParam0);
	Function_8(&iParam1);
	PRINTNL();
	if (StackVal == iParam0)
	{
		LOG_ERROR("New weather type is the same as the old weather type!");
		return;
	}
	if (!&bParam2)
	{
		iVar0 = GET_HOUR(0);
		if (!((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19))
		{
			return;
		}
	}
	SET_WEATHER(iParam0, &iParam1);
	Function_7();
	Global_26182.f_48 = StackVal;
	*(&Global_26182 + 56) = GET_TIME_OF_DAY();
	*(&Global_26182 + 64) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_26182 + 64, 0, 0, GET_MINUTES_FROM_TIME_OF_DAY(&iParam1), 0);
	Global_26182.f_8 = iParam0;
	if (Global_26182.f_32 > 0.0f && Global_26182.f_36 > 0.0f)
	{
		if (iParam0 != 3 || iParam0 != 4)
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
		else if (iParam0 != 3 || iParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		if (Global_26182.f_36 <= 0.0f)
		{
			SET_LIGHTNING_AMOUNT(Global_26182.f_36);
		}
		else if (iParam0 != 3 || iParam0 != 4)
		{
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
		}
	}
	return;
}

void Function_7() //Position: 0x5DB / 1499
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_8(int iParam0) //Position: 0x5E7 / 1511
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

void Function_9(int iParam0) //Position: 0x631 / 1585
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

void Function_10(struct<17> Param0) //Position: 0x677 / 1655
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	Param0.f_16 = (Param0.f_16 - iVar0);
	return;
}

bool Function_11(struct<17> Param0) //Position: 0x694 / 1684
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_12(vector3 vParam0) //Position: 0x6B2 / 1714
{
	if (IS_OBJECTSET_VALID(&vParam0 + 16))
	{
		Function_13(&vParam0 + 16);
		DESTROY_OBJECTSET(&vParam0 + 16);
	}
	vParam0.f_8 = 0;
	vParam0 = 0;
	vParam0.f_4 = 0;
	return;
}

void Function_13(var uParam0) //Position: 0x6E7 / 1767
{
	int iVar0;
	
	if (!IS_OBJECTSET_VALID(&uParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(&uParam0) >= 0)
	{
		iVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(0, &uParam0);
		if (IS_OBJECT_VALID(&iVar0))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(&iVar0, &uParam0);
		}
		CLEAN_OBJECTSET(&uParam0);
		if (IS_OBJECT_VALID(&iVar0))
		{
			RELEASE_OBJECT_REF(&iVar0);
		}
	}
	return;
}

void Function_14(struct<4>[] Param0, bool bParam1) //Position: 0x736 / 1846
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
	while (iVar0 < Function_17((Param0 - 1), Global_46721 + 4))
	{
		uVar7 = &Param0[iVar04];
		if (IS_DOOR_VALID(&uVar7))
		{
			uVar8 = Param0[iVar04].f_12;
			if (uVar8 & 16384 >= 0)
			{
				*(&Param0[iVar04] + 24) = GET_PERS_CHAR_FROM_OBJECT(DECOR_GET_OBJECT(&uVar7, "owner"));
				Function_16(&(Param0[iVar04]), 16384);
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
								Function_15(&(Param0[iVar04]), 1);
								uVar8 = Param0[iVar04].f_12;
							}
						}
						else if (uVar8 & 1 >= 0)
						{
							Function_16(&(Param0[iVar04]), 1);
							uVar8 = Param0[iVar04].f_12;
						}
					}
					else if ((StackVal && Global_99472) < 0 && uVar8 & 1 != 0)
					{
						if (IS_VOLUME_VALID(&Param0[iVar04] + 16))
						{
							bVar9 = false;
							if (IS_ACTOR_IN_VOLUME(Function_66(), &Param0[iVar04] + 16))
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
								Function_15(&(Param0[iVar04]), 1);
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
							Function_15(&(Param0[iVar04]), 1);
							uVar8 = Param0[iVar04].f_12;
						}
					}
					else if ((StackVal && Global_99472) != 0 && uVar8 & 1 < 0)
					{
						Function_16(&(Param0[iVar04]), 1);
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
					Function_15(&(Param0[iVar04]), 8192);
					uVar8 = Param0[iVar04].f_12;
				}
				if (uVar8 & 1 == 0)
				{
					Function_15(&(Param0[iVar04]), 1);
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
					Function_16(&(Param0[iVar04]), 8192);
					uVar8 = Param0[iVar04].f_12;
				}
				if (uVar8 & 1 >= 0)
				{
					Function_16(&(Param0[iVar04]), 1);
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
							if (IS_ACTOR_IN_VOLUME(Function_66(), &Param0[iVar04] + 16))
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
					if (IS_ACTOR_IN_VOLUME(Function_66(), &Param0[iVar04] + 16))
					{
						if (IS_DOOR_OPENED(&uVar7))
						{
							CLOSE_DOOR(&uVar7, 1.0f);
							Function_16(&(Param0[iVar04]), 32768);
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

void Function_15(struct<13> Param0) //Position: 0xB57 / 2903
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_16(struct<13> Param0) //Position: 0xB6A / 2922
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

int Function_17(int iParam0, bool bParam1) //Position: 0xB87 / 2951
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_18(vector3 vParam0) //Position: 0xB99 / 2969
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar1 = 0;
	vParam0.f_4 = 0;
	uVar2 = Global_6629;
	Global_6629 = 0;
	if (!Function_56(32) || !IS_ACTOR_VALID(&uParam2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < (vParam0 - 1))
	{
		if (Function_19(&(vParam1[iVar03]), &uParam2, uParam3, iVar1, uVar2))
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

bool Function_19(vector3 vParam0, var uParam3, bool bParam4) //Position: 0xC23 / 3107
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_55(&vParam0))
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
								Function_53(DECOR_GET_INT(&vParam0 + 8, "customweather"), 0, 0, 30, 1);
								Function_52(&vParam0, 8);
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
								Function_52(&vParam0, 4);
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
				if ((((((bVar1 && Function_51(iParam2)) && !Function_50(0, 0, 1, 1)) && !Global_6646) && !Global_6647) && !Function_49(2048)) && !IS_SCRIPT_VALID(&Global_39922 + 96))
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
								Function_52(&vParam0, 16);
								Function_41(3, 28, &uParam1, GET_OBJECT_FROM_VOLUME(&vParam0 + 8), 0);
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
				Function_52(&vParam0, 2);
			}
			else
			{
				Function_10(&vParam0, 2);
			}
			break;
		
		case 0x00000002:
		case 0x00000004:
			if (!Function_51(iParam2))
			{
				return 0;
			}
			if (IS_ACTOR_IN_VOLUME(&uParam1, &vParam0 + 8))
			{
				if (!Function_40(&(Global_43791[iParam2]), 262144))
				{
					if (!Function_11(&vParam0, 1))
					{
						if (!Global_6620)
						{
							Function_39(StackVal, StackVal, vParam0);
						}
						else
						{
							Global_6620 = 0;
						}
						Function_52(&vParam0, 1);
					}
				}
				if (vParam0 == 4)
				{
					if (!bParam4 && Function_51(iParam2))
					{
						Function_38(&Global_44085[Global_44085[iParam29]9] + 32, &Global_44085[iParam29] + 32);
					}
					Global_6629 = 1;
				}
				Function_20(iParam2);
			}
			else if (vParam0 == 4)
			{
				Global_6629 = 0;
			}
			break;
	}
	return bVar1;
}

void Function_20(int iParam0) //Position: 0x107B / 4219
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_40(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_58(&(Global_43791[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_25(473, 1, 0, 0);
		iVar0 = Function_24(iParam0);
		if (iVar0 == Global_46722[0])
		{
			Function_25(474, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[1])
		{
			Function_25(475, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[2])
		{
			Function_25(476, 1, 0, 0);
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
		Function_23(iVar2, iVar1);
	}
	else if (iParam0 == Global_46926[9])
	{
		Function_23(7, 30);
	}
	if (Function_22(473) <= Function_21(473))
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
		{
			AWARD_ACHIEVEMENT(30);
		}
	}
	return;
}

float Function_21(int iParam0) //Position: 0x116C / 4460
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

float Function_22(int iParam0) //Position: 0x11A9 / 4521
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_23(int iParam0, int iParam1) //Position: 0x11E2 / 4578
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

var Function_24(int iParam0) //Position: 0x124C / 4684
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_51(iParam0))
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

int Function_25(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x12A4 / 4772
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
	Function_37(iParam0, TO_FLOAT(bParam1), 1);
	Function_36(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_27(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_26(iParam0);
	return 1;
}

void Function_26(bool bParam0) //Position: 0x14CC / 5324
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

void Function_27(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x156A / 5482
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_21(390))), 32);
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
					fVar19 = (Function_22(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_22(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_34(iParam0, fVar19, fVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_32(fVar19, fParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&uParam7))
							{
								uParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_30(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&uParam7), &Global_55480[iParam016] + 32, Function_29(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_28(), &Var9);
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

var Function_28() //Position: 0x1BA8 / 7080
{
	int iVar0;
	
	return &iVar0;
}

var Function_29(int iParam0) //Position: 0x1BB1 / 7089
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_30(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1BC2 / 7106
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_31("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_31("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_31("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_31(char* cParam0) //Position: 0x1CB9 / 7353
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_32(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1CD4 / 7380
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_17(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_33(Function_17(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_33(int iParam0, int iParam1) //Position: 0x1D3B / 7483
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_34(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1D4D / 7501
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
	if (((Function_35(iParam0) != 19 || Function_35(iParam0) != 17) || Function_35(iParam0) != 10) || Function_35(iParam0) != 9)
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

int Function_35(int iParam0) //Position: 0x1E81 / 7809
{
	return Global_55480[iParam016].f_96;
}

void Function_36(int iParam0) //Position: 0x1E90 / 7824
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

int Function_37(int iParam0, float fParam1, bool bParam2) //Position: 0x202A / 8234
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

void Function_38(var uParam0, int iParam1) //Position: 0x226E / 8814
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_39(int iParam0, var uParam1, var uParam2) //Position: 0x227B / 8827
{
	if (!&iParam0 + 8 != &Global_21498)
	{
		Global_21498 = &iParam0 + 8;
		Global_21498.f_12 = iParam0;
		Global_21498.f_8 = 0;
	}
	return;
}

bool Function_40(var uParam0, int iParam1) //Position: 0x22A5 / 8869
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_41(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x22C2 / 8898
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	var uVar4;
	
	if (!Function_48(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_47(iParam1))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeType");
		return "";
	}
	if (!IS_ACTOR_VALID(&uParam2))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid criminal");
		return "";
	}
	if (!IS_OBJECT_VALID(&uParam3) && !iParam0 != 4)
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid victim");
		return "";
	}
	if (!Function_44(1))
	{
		LOG_ERROR("Crime is disabled: CREATE_CRIME_EVENT failure");
		return "";
	}
	uVar2 = CREATE_CRIME_IN_LAYOUT(&Global_39918);
	uVar3 = FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes");
	if ((IS_CRIME_VALID(&uVar2) && IS_OBJECT_VALID(&uVar3)) && GET_OBJECT_TYPE(&uVar3) != 2)
	{
		SET_CRIME_TYPE(&uVar2, iParam1);
		SET_CRIME_VICTIM(&uVar2, &uParam3);
		SET_CRIME_CRIMINAL(&uVar2, &uParam2);
		SET_CRIME_BEGIN_TIMESTAMP(&uVar2, GET_CURRENT_GAME_TIME());
		SET_CRIME_END_TIMESTAMP(&uVar2, GET_CURRENT_GAME_TIME());
		GET_OBJECT_POSITION(&uParam3, &Var0);
		SET_CRIME_POSITION(&uVar2, Var0);
		uVar4 = CREATE_OBJECTSET_IN_LAYOUT(Function_28(), &Global_39918, 3, 0);
		SET_CRIME_OBJECTSET(&uVar2, &uVar4);
		if (!&bParam4)
		{
			SET_CRIME_WITNESSED(&uVar2, 1);
		}
		else
		{
			SET_CRIME_WITNESSED(&uVar2, 3);
			Function_42();
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

void Function_42() //Position: 0x2575 / 9589
{
	var uVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_39918);
	uVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes"));
	Function_43(&uVar0, &uVar1);
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

void Function_43(var uParam0, int iParam1) //Position: 0x25E8 / 9704
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

bool Function_44(bool bParam0) //Position: 0x261E / 9758
{
	if (Function_49(256))
	{
		return 0;
	}
	if (Function_49(262144))
	{
		return 0;
	}
	if (Function_46())
	{
		return 0;
	}
	if (!Function_49(1))
	{
		return 0;
	}
	if (!Function_49(4096))
	{
		return 0;
	}
	if (bParam0 && Function_45(12))
	{
		return 0;
	}
	if (Global_6621)
	{
		return 0;
	}
	if (Function_49(2048))
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

int Function_45(int iParam0) //Position: 0x2694 / 9876
{
	if (Global_42825 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_46() //Position: 0x26A5 / 9893
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

bool Function_47(int iParam0) //Position: 0x26BE / 9918
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_48(int iParam0) //Position: 0x26D4 / 9940
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_49(int iParam0) //Position: 0x26E9 / 9961
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_50(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x2707 / 9991
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

bool Function_51(int iParam0) //Position: 0x27B6 / 10166
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_52(struct<17> Param0) //Position: 0x27CC / 10188
{
	Param0.f_16 = (Param0.f_16 || iParam1);
	return;
}

void Function_53(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x27DF / 10207
{
	int iVar0;
	int iVar1;
	
	Function_9(uParam0);
	Global_26182.f_4 = uParam0;
	Global_26182.f_24 = 1;
	iVar0 = GET_HOUR(0);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_54(StackVal, &bParam4);
		}
		else
		{
			iVar1 = MAKE_TIME_OF_DAY(&uParam1, &uParam2, &uParam3);
			Function_6(StackVal, &iVar1, &bParam4);
		}
	}
}

void Function_54(int iParam0, int iParam1) //Position: 0x2859 / 10329
{
	var uVar0;
	
	uVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_9(iParam0);
	Function_8(&uVar0);
	PRINTNL();
	Function_6(iParam0, &uVar0, &iParam1);
	return;
}

bool Function_55(int iParam0) //Position: 0x2882 / 10370
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

bool Function_56(int iParam0) //Position: 0x28A2 / 10402
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_57(char* cParam0) //Position: 0x28BE / 10430
{
	if (!Function_56(128))
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

void Function_58(var uParam0, bool bParam1) //Position: 0x28FE / 10494
{
	uParam0 = (uParam0 || bParam1);
	return;
}

var Function_59(struct<4>[] Param0, var uParam1, char* cParam2) //Position: 0x290F / 10511
{
	int iVar0;
	char* cVar1[32];
	char* cVar9[8];
	var uVar11;
	
	iVar0 = Function_60(&Param0);
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
		Function_15(&(Param0[iVar04]), 1);
	}
	Function_15(&(Param0[iVar04]), 4096);
	(&Param0[iVar04] + 16) = &bParam6;
	if (&bParam7)
	{
		Function_15(&(Param0[iVar04]), 16384);
	}
	if (&bParam8)
	{
		Function_15(&(Param0[iVar04]), 32768);
	}
	if (IS_OBJECT_VALID(&bParam6))
	{
		DECOR_SET_OBJECT(&uVar11, "roomvol", &bParam6);
	}
	return iVar0;
}

var Function_60(struct<4>[] Param0) //Position: 0x2A03 / 10755
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

void Function_61(var uParam0, vector3[] vParam1, int iParam2, var uParam3, int iParam4, int iParam5) //Position: 0x2A34 / 10804
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

void Function_62(struct<5> Param0) //Position: 0x2B21 / 11041
{
	Param0 = 0;
	Param0.f_4 = 0;
	return;
}

var Function_63(int iParam0, var uParam1, int iParam2) //Position: 0x2B32 / 11058
{
	*(&Global_44085[iParam29] + 56) = CREATE_WORLD_SECTOR(&iParam0, &uParam1);
	return &Global_44085[iParam29] + 56;
}

bool Function_64() //Position: 0x2B55 / 11093
{
	var uVar0;
	
	Function_65(3, 3);
	uVar0 = &uVar0;
	iLocal_0 = FIND_NAMED_LAYOUT("CootsChapel_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_0))
	{
		iLocal_0 = CREATE_LAYOUT("CootsChapel_layout");
	}
	*(&iLocal_0 + 8) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "coov_region", 4,203895E-45f, Vector(-1785,518f, 24,0941f, 2855,945f), Vector(0.0f, 20.0f, 0.0f), Vector(50.0f, 25.0f, 50,0001f));
	*(&iLocal_0 + 56) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "coov_church_set");
	*(&iLocal_0 + 16[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "coov_church_main_chapel", 2,802597E-45f, Vector(-1789,893f, 25,8545f, 2852,787f), Vector(0.0f, 20,3847f, 0.0f), Vector(6,533716f, 7,185509f, 17,1488f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 56, &iLocal_0 + 16[0]);
	*(&iLocal_0 + 16[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "coov_church_rooms2", 2,802597E-45f, Vector(-1793,754f, 25,79757f, 2857,363f), Vector(0.0f, 19,37619f, 0.0f), Vector(4,932437f, 5,594979f, 6,661956f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 56, &iLocal_0 + 16[1]);
	*(&iLocal_0 + 16[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "coov_church_bck_room", 2,802597E-45f, Vector(-1788,075f, 26,8661f, 2857,867f), Vector(0.0f, 20,23496f, 0.0f), Vector(7,067983f, 4,820869f, 3,81275f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 56, &iLocal_0 + 16[2]);
	*(&iLocal_0 + 16[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "coov_church_front_porch", 2,802597E-45f, Vector(-1793,703f, 25,72257f, 2843,684f), Vector(1,770297f, 22,35086f, 0,9407392f), Vector(5,656374f, 5,426769f, 2,722607f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 56, &iLocal_0 + 16[3]);
	*(&iLocal_0 + 128) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "coov_vultures_set");
	*(&iLocal_0 + 64[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "coov_pop_vultures2", 4,203895E-45f, Vector(-1780,068f, 34,45401f, 2864,857f), Vector(0.0f, 20.0f, 0.0f), Vector(4,164067f, 28,79622f, 4,291873f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 128, &iLocal_0 + 64[0]);
	*(&iLocal_0 + 64[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "coov_pop_vultures", 4,203895E-45f, Vector(-1768,1f, 32,80341f, 2839,247f), Vector(0.0f, 20.0f, 0.0f), Vector(6,014821f, 24,53327f, 6,199431f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 128, &iLocal_0 + 64[1]);
	*(&iLocal_0 + 64[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "coov_pop_vultuers3", 4,203895E-45f, Vector(-1802,182f, 26,63374f, 2842,637f), Vector(0.0f, 20.0f, 0.0f), Vector(4,036973f, 7,376061f, 3,307151f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 128, &iLocal_0 + 64[2]);
	*(&iLocal_0 + 64[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nCylinder4", 4,203895E-45f, Vector(-1805,36f, 24,09713f, 2872,041f), Vector(0.0f, 20.0f, 0.0f), Vector(6,860088f, 32,06005f, 4,968766f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 128, &iLocal_0 + 64[3]);
	*(&iLocal_0 + 64[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nCylinder1", 4,203895E-45f, Vector(-1813,237f, 24,09713f, 2858,151f), Vector(0.0f, 20.0f, 0.0f), Vector(6,860088f, 32,06005f, 4,968766f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 128, &iLocal_0 + 64[4]);
	*(&iLocal_0 + 64[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nCylinder2", 4,203895E-45f, Vector(-1761,424f, 24,09713f, 2848,518f), Vector(0.0f, 20.0f, 0.0f), Vector(6,860088f, 32,06005f, 4,968766f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 128, &iLocal_0 + 64[5]);
	*(&iLocal_0 + 64[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nCylinder3", 4,203895E-45f, Vector(-1767,435f, 24,09713f, 2874,551f), Vector(0.0f, 20.0f, 0.0f), Vector(6,860088f, 32,06005f, 4,968766f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 128, &iLocal_0 + 64[6]);
	*(&iLocal_0 + 136) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "coov_abd_house1", 2,802597E-45f, Vector(-1804,489f, 27,10587f, 2750,655f), Vector(0.0f, 0.0f, 0.0f), Vector(10,92896f, 7,066658f, 10,80309f));
	*(&iLocal_0 + 144) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "coov_abd_house2", 2,802597E-45f, Vector(-1757,247f, 27,28255f, 2801,044f), Vector(0.0f, 0.0f, 0.0f), Vector(7,434853f, 7,991008f, 5,037548f));
	*(&iLocal_0 + 152) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "coov_abd_house3", 2,802597E-45f, Vector(-1876f, 26,93258f, 2728,318f), Vector(0.0f, 0.0f, 0.0f), Vector(7,562485f, 5,027176f, 8,347751f));
	*(&iLocal_0 + 160) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "coov_abd_house4", 2,802597E-45f, Vector(-1890,149f, 25,36248f, 2704,97f), Vector(0.0f, -35,02938f, 0.0f), Vector(6,897596f, 4,889504f, 5,126114f));
	*(&iLocal_0 + 288) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "coov_crows_set");
	*(&iLocal_0 + 168[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder12", 4,203895E-45f, Vector(-1764f, 29,14208f, 2868,377f), Vector(0.0f, 20.0f, 0.0f), Vector(3,980274f, 12,27519f, 5,739097f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 288, &iLocal_0 + 168[0]);
	*(&iLocal_0 + 168[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nCylinder5", 4,203895E-45f, Vector(-1809,529f, 29,14208f, 2871,397f), Vector(0.0f, 20.0f, 0.0f), Vector(3,980274f, 12,27519f, 5,739097f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 288, &iLocal_0 + 168[1]);
	*(&iLocal_0 + 168[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nCylinder6", 4,203895E-45f, Vector(-1796,498f, 29,14208f, 2875,382f), Vector(0.0f, 20.0f, 0.0f), Vector(3,980274f, 12,27519f, 5,739097f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 288, &iLocal_0 + 168[2]);
	*(&iLocal_0 + 168[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nCylinder7", 4,203895E-45f, Vector(-1759,427f, 29,14208f, 2848,11f), Vector(0.0f, 20.0f, 0.0f), Vector(3,980274f, 12,27519f, 5,739097f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 288, &iLocal_0 + 168[3]);
	*(&iLocal_0 + 168[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nCylinder8", 4,203895E-45f, Vector(-1814,701f, 29,14208f, 2847,058f), Vector(0.0f, 20.0f, 0.0f), Vector(3,980274f, 12,27519f, 5,739097f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 288, &iLocal_0 + 168[4]);
	*(&iLocal_0 + 168[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nCylinder9", 4,203895E-45f, Vector(-1778,111f, 29,14208f, 2868,861f), Vector(0.0f, 20.0f, 0.0f), Vector(3,980274f, 12,27519f, 5,739097f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 288, &iLocal_0 + 168[5]);
	*(&iLocal_0 + 168[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder10", 4,203895E-45f, Vector(-1802,34f, 29,14208f, 2862,686f), Vector(0.0f, 20.0f, 0.0f), Vector(3,980274f, 12,27519f, 5,739097f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 288, &iLocal_0 + 168[6]);
	*(&iLocal_0 + 168[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder11", 4,203895E-45f, Vector(-1772,332f, 29,14208f, 2840,827f), Vector(0.0f, 20.0f, 0.0f), Vector(3,980274f, 12,27519f, 5,739097f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 288, &iLocal_0 + 168[7]);
	*(&iLocal_0 + 168[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder39", 4,203895E-45f, Vector(-1790,557f, 24,8034f, 2853,52f), Vector(0.0f, 20.0f, 0.0f), Vector(10,53282f, 14,56414f, 14,63171f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 288, &iLocal_0 + 168[8]);
	*(&iLocal_0 + 168[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder34", 4,203895E-45f, Vector(-1842,569f, 25,18892f, 2789,768f), Vector(0.0f, 20.0f, 0.0f), Vector(8,642062f, 7,830865f, 8,470125f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 288, &iLocal_0 + 168[9]);
	*(&iLocal_0 + 168[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder35", 4,203895E-45f, Vector(-1877,087f, 26,2377f, 2729,079f), Vector(0.0f, 20.0f, 0.0f), Vector(8,642062f, 7,830865f, 8,470125f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 288, &iLocal_0 + 168[10]);
	*(&iLocal_0 + 168[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder36", 4,203895E-45f, Vector(-1900,127f, 26,19918f, 2711,338f), Vector(0.0f, 20.0f, 0.0f), Vector(8,642062f, 7,830865f, 8,470125f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 288, &iLocal_0 + 168[11]);
	*(&iLocal_0 + 168[12]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder37", 4,203895E-45f, Vector(-1805,213f, 26,18672f, 2749,628f), Vector(0.0f, 20.0f, 0.0f), Vector(10,48037f, 7,830865f, 10,78617f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 288, &iLocal_0 + 168[12]);
	*(&iLocal_0 + 168[13]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder38", 4,203895E-45f, Vector(-1756,097f, 27,12459f, 2799,404f), Vector(0.0f, 20.0f, 0.0f), Vector(14,56298f, 7,830865f, 10,09194f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 288, &iLocal_0 + 168[13]);
	*(&iLocal_0 + 344) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "coov_snakes_set");
	*(&iLocal_0 + 296[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder17", 4,203895E-45f, Vector(-1818,7f, 24,0941f, 2862,11f), Vector(0.0f, 20.0f, 0.0f), Vector(2,373678f, 2,345387f, 4,521883f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 344, &iLocal_0 + 296[0]);
	*(&iLocal_0 + 296[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder13", 4,203895E-45f, Vector(-1808,88f, 24,0941f, 2841,824f), Vector(0.0f, 20.0f, 0.0f), Vector(2,373678f, 2,345387f, 4,521883f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 344, &iLocal_0 + 296[1]);
	*(&iLocal_0 + 296[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder14", 4,203895E-45f, Vector(-1818,7f, 24,0941f, 2862,11f), Vector(0.0f, 20.0f, 0.0f), Vector(2,373678f, 2,345387f, 4,521883f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 344, &iLocal_0 + 296[2]);
	*(&iLocal_0 + 296[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder15", 4,203895E-45f, Vector(-1753,891f, 24,0941f, 2862,11f), Vector(0.0f, 20.0f, 0.0f), Vector(2,373678f, 2,345387f, 4,521883f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 344, &iLocal_0 + 296[3]);
	*(&iLocal_0 + 296[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder16", 4,203895E-45f, Vector(-1797,701f, 24,0941f, 2878,21f), Vector(0.0f, 20.0f, 0.0f), Vector(2,373678f, 2,345387f, 4,521883f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 344, &iLocal_0 + 296[4]);
	*(&iLocal_0 + 424) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "coov_rabbits_set");
	*(&iLocal_0 + 352[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder24", 4,203895E-45f, Vector(-1757,547f, 24,11529f, 2874,453f), Vector(0.0f, 20.0f, 0.0f), Vector(5,776541f, 1,88908f, 3,142002f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 424, &iLocal_0 + 352[0]);
	*(&iLocal_0 + 352[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder23", 4,203895E-45f, Vector(-1763,895f, 24,11529f, 2864,358f), Vector(0.0f, 20.0f, 0.0f), Vector(5,776541f, 1,88908f, 3,142002f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 424, &iLocal_0 + 352[1]);
	*(&iLocal_0 + 352[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder22", 4,203895E-45f, Vector(-1811,275f, 24,11529f, 2856,734f), Vector(0.0f, 20.0f, 0.0f), Vector(5,776541f, 1,88908f, 3,142002f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 424, &iLocal_0 + 352[2]);
	*(&iLocal_0 + 352[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder21", 4,203895E-45f, Vector(-1770,172f, 24,11529f, 2836f), Vector(0.0f, 20.0f, 0.0f), Vector(5,776541f, 1,88908f, 3,142002f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 424, &iLocal_0 + 352[3]);
	*(&iLocal_0 + 352[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder20", 4,203895E-45f, Vector(-1805,128f, 24,11529f, 2874,453f), Vector(0.0f, 20.0f, 0.0f), Vector(5,776541f, 1,88908f, 3,142002f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 424, &iLocal_0 + 352[4]);
	*(&iLocal_0 + 352[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder19", 4,203895E-45f, Vector(-1757,547f, 24,11529f, 2843,368f), Vector(0.0f, 20.0f, 0.0f), Vector(5,776541f, 1,88908f, 3,142002f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 424, &iLocal_0 + 352[5]);
	*(&iLocal_0 + 352[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder18", 4,203895E-45f, Vector(-1783,435f, 24,11529f, 2874,453f), Vector(0.0f, 20.0f, 0.0f), Vector(5,776541f, 1,88908f, 3,142002f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 424, &iLocal_0 + 352[6]);
	*(&iLocal_0 + 352[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder25", 4,203895E-45f, Vector(-1757,547f, 24,11529f, 2874,453f), Vector(0.0f, 20.0f, 0.0f), Vector(5,776541f, 1,88908f, 3,142002f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 424, &iLocal_0 + 352[7]);
	*(&iLocal_0 + 472) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "coov_owls_set");
	*(&iLocal_0 + 432[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder29", 4,203895E-45f, Vector(-1802,821f, 23,90474f, 2842,227f), Vector(0.0f, 20.0f, 0.0f), Vector(2,876812f, 5,645661f, 2,80788f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 472, &iLocal_0 + 432[0]);
	*(&iLocal_0 + 432[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder26", 4,203895E-45f, Vector(-1801,651f, 23,90474f, 2866,974f), Vector(0.0f, 20.0f, 0.0f), Vector(2,876812f, 5,645661f, 2,80788f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 472, &iLocal_0 + 432[1]);
	*(&iLocal_0 + 432[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder27", 4,203895E-45f, Vector(-1766,998f, 23,90474f, 2837,912f), Vector(0.0f, 20.0f, 0.0f), Vector(2,876812f, 5,645661f, 2,80788f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 472, &iLocal_0 + 432[2]);
	*(&iLocal_0 + 432[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder28", 4,203895E-45f, Vector(-1780,78f, 23,90474f, 2864,049f), Vector(0.0f, 20.0f, 0.0f), Vector(2,876812f, 5,645661f, 2,80788f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 472, &iLocal_0 + 432[3]);
	*(&iLocal_0 + 520) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "coov_racoons_set");
	*(&iLocal_0 + 480[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder33", 4,203895E-45f, Vector(-1793,024f, 24,0941f, 2867,051f), Vector(0.0f, 20.0f, 0.0f), Vector(3,464828f, 7,636977f, 3,326022f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 520, &iLocal_0 + 480[0]);
	*(&iLocal_0 + 480[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder30", 4,203895E-45f, Vector(-1772,763f, 24,0941f, 2849,425f), Vector(0.0f, 20.0f, 0.0f), Vector(3,464828f, 7,636977f, 3,326022f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 520, &iLocal_0 + 480[1]);
	*(&iLocal_0 + 480[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder31", 4,203895E-45f, Vector(-1762,158f, 24,0941f, 2866,07f), Vector(0.0f, 20.0f, 0.0f), Vector(3,464828f, 7,636977f, 3,326022f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 520, &iLocal_0 + 480[2]);
	*(&iLocal_0 + 480[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder32", 4,203895E-45f, Vector(-1807,124f, 24,0941f, 2848,914f), Vector(0.0f, 20.0f, 0.0f), Vector(3,464828f, 7,636977f, 3,326022f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 520, &iLocal_0 + 480[3]);
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "coof_report_crime_road", Vector(-1832,186f, 21,52767f, 2761,121f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 528) = Vector(-1790,84f, 24,63191f, 2850,71f);
	*(&iLocal_0 + 528 + 12) = Vector(0.0f, 19,8483f, 0.0f);
	*(&iLocal_0 + 552) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "coof_interiorPoint_church", Vector(-1790,84f, 24,63191f, 2850,71f), Vector(0.0f, 19,8483f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "coo_vista_cam_pos1", Vector(-1835,793f, 35,72f, 2832,312f), Vector(-4,914f, -106,184f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "coo_vista_cam_pos2", Vector(-1837,374f, 27,155f, 2887,6f), Vector(-1,381f, -41,101f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "coo_vista_cam_pos3", Vector(-1813,378f, 40,519f, 2899,532f), Vector(-7,912f, -38,781f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "coo_vista_cam_pos4", Vector(-1728,119f, 28,017f, 2895,264f), Vector(-3,2f, 78,61f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "coo_vista_cam_pos5", Vector(-1753,918f, 31,581f, 2784,02f), Vector(-6,478f, 147,332f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "coo_vista_cam_pos6", Vector(-1807,283f, 25,045f, 2834,438f), Vector(20,106f, -114,66f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "coo_vista_cam_pos7", Vector(-1789,035f, 25,84f, 2839,085f), Vector(47,024f, 124,252f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "coo_vista_cam_pos8", Vector(-1805,974f, 36,017f, 2873,514f), Vector(-8,181f, -16,462f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "coo_vista_cam_pos9", Vector(-1683,052f, 36,15f, 2906,98f), Vector(-6,383f, 56,004f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "coo_vista_cam_pos10", Vector(-1761,432f, 26,45f, 2876,792f), Vector(6,053f, 52,013f, 0.0f));
	*(&iLocal_0 + 560) = Vector(-1793,186f, 24,63191f, 2848,563f);
	*(&iLocal_0 + 560 + 12) = Vector(0.0f, -0,3551953f, 0.0f);
	*(&iLocal_0 + 584) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "coof_interiorSettlement01", Vector(-1793,186f, 24,63191f, 2848,563f), Vector(0.0f, -0,3551953f, 0.0f));
	return 1;
}

void Function_65(int iParam0, int iParam1) //Position: 0x40AC / 16556
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

var Function_66() //Position: 0x40F6 / 16630
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_67(char* cParam0) //Position: 0x410B / 16651
{
	if (!Function_56(128))
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

