//Decompiled with MagicRDR v1.0
//Function Count : 137
//Statics Count : 480
//Natives Count : 166
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	struct<73> Local_6 = { 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	struct<1081> Local_200 = { 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	struct<16> Var0;
	
	strcpy(&Var0, "Initializing ", 64);
	stradd(&Var0, &Global_29155[iScriptParam_010] + 20, 64);
	Function_136(&Var0, 3);
	Function_134();
	iLocal_0 = 0;
	while (!IS_EXITFLAG_SET())
	{
		iLocal_1 = 1000;
		switch (iLocal_0)
		{
			case 0x00000000:
				if (Global_3389)
				{
					iLocal_0 = 1;
				}
				iLocal_1 = 0;
				break;
			
			case 0x00000001:
				if (Function_131())
				{
					iLocal_0 = 2;
					iLocal_1 = 0;
				}
				break;
			
			case 0x00000002:
				if (Function_122())
				{
					Function_121();
					Function_120(&(Global_29008[iScriptParam_0]), 32);
					iLocal_0 = 3;
					iLocal_1 = 0;
				}
				break;
			
			case 0x00000003:
				iLocal_1 = 500;
				if (Function_117())
				{
					Function_120(&(Global_29008[iScriptParam_0]), 16);
					iLocal_0 = 4;
					iLocal_1 = 0;
				}
				break;
			
			case 0x00000004:
				Function_116(&uLocal_3);
				Function_114(iScriptParam_0);
				iLocal_0 = 5;
				iLocal_1 = 0;
				break;
			
			case 0x00000005:
				if (Function_113())
				{
					Function_106();
					iLocal_0 = 6;
					iLocal_1 = 0;
				}
				else
				{
					iLocal_1 = 100;
				}
				break;
			
			case 0x00000006:
				Function_105(iScriptParam_0);
				Function_104();
				Function_120(&(Global_29008[iScriptParam_0]), 8);
				if (Function_103(&(Global_29008[iScriptParam_0]), 131072))
				{
					Function_102(&(Global_29008[iScriptParam_0]), 131072);
					iLocal_0 = 10;
				}
				else
				{
					iLocal_0 = 7;
				}
				iLocal_1 = 0;
				break;
			
			case 0x00000007:
				Function_101(iScriptParam_0);
				iLocal_0 = 8;
				iLocal_1 = 0;
				break;
			
			case 0x00000008:
				if (!Function_100(iScriptParam_0))
				{
					Function_94(iScriptParam_0);
					Function_93(64);
				}
				Function_120(&(Global_29008[iScriptParam_0]), 512);
				iLocal_0 = 9;
				iLocal_1 = 0;
				break;
			
			case 0x00000009:
				if (!Function_100(iScriptParam_0))
				{
					Function_91(Function_92(), iScriptParam_0);
				}
				Function_90(iScriptParam_0);
				strcpy(&Var0, "Finished Initializing ", 64);
				stradd(&Var0, &Global_29155[iScriptParam_010] + 20, 64);
				Function_89(&Var0, 5.0f);
				Function_120(&(Global_29008[iScriptParam_0]), 4);
				iLocal_0 = 10;
				iLocal_1 = 0;
				break;
			
			case 0x0000000A:
				Function_65(iScriptParam_0);
				if (!Function_100(iScriptParam_0))
				{
					if (iLocal_2)
					{
						iLocal_2 = 0;
						iLocal_0 = 8;
						iLocal_1 = 0;
					}
					Function_26(&uLocal_3, &uLocal_471, Function_64(), iScriptParam_0);
				}
				else
				{
					iLocal_2 = 1;
				}
				if (Function_103(&(Global_29008[iScriptParam_0]), 131072))
				{
					iLocal_0 = 6;
					iLocal_1 = 0;
				}
				break;
			
			case 0x0000000B:
				break;
		}
		WAIT(iLocal_1);
	}
	Function_24();
	Function_18();
	Function_10(&uLocal_3, &uLocal_471);
	Function_8();
	Function_4(iScriptParam_0);
	SET_AMBIENT_TUNING_MAX_VISIBLE_RANGE(70.0f);
	Function_93(64);
	Function_102(&(Global_29008[iScriptParam_0]), 32);
	Function_102(&(Global_29008[iScriptParam_0]), 64);
	Function_102(&(Global_29008[iScriptParam_0]), 512);
	Function_102(&(Global_29008[iScriptParam_0]), 16);
	Function_102(&(Global_29008[iScriptParam_0]), 4);
	Function_1();
	strcpy(&Var0, "nUnloaded ", 64);
	stradd(&Var0, &Global_29155[iScriptParam_010] + 20, 64);
	Function_89(&Var0, 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x2E6 / 742
{
	REMOVE_STRING_TABLE("graveyards");
	Function_2(&(Global_26282[24]));
	return;
}

void Function_2(int iParam0) //Position: 0x305 / 773
{
	if (IS_OBJECTSET_VALID(iParam0->f_12))
	{
		Function_3(iParam0->f_12);
		DESTROY_OBJECTSET(iParam0->f_12);
	}
	iParam0->f_8 = 0;
	*iParam0 = 0;
	iParam0->f_4 = 0;
	return;
}

void Function_3(bool bParam0) //Position: 0x331 / 817
{
	bool bVar0;
	
	if (!IS_OBJECTSET_VALID(bParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(bParam0) >= 0)
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(0, bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(bVar0, bParam0);
		}
		CLEAN_OBJECTSET(bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			RELEASE_OBJECT_REF(bVar0);
		}
	}
	return;
}

void Function_4(int iParam0) //Position: 0x376 / 886
{
	int iVar0;
	
	if (!Function_7(iParam0))
	{
	}
	iVar0 = 0;
	while (iVar0 <= Global_17483)
	{
		if (Global_17483[iVar075].f_92 == iParam0)
		{
			Function_5(iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_5(int iParam0) //Position: 0x3AC / 940
{
	if (!Function_6(iParam0))
	{
		return;
	}
	Global_17483[iParam075].f_120 = 0;
	Global_25263 = (Global_25263 - 1);
	return;
}

bool Function_6(int iParam0) //Position: 0x3CE / 974
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_7(int iParam0) //Position: 0x3E4 / 996
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_8() //Position: 0x3FA / 1018
{
	Function_9();
	return;
}

void Function_9() //Position: 0x403 / 1027
{
	RELEASE_LAYOUT_REF(Local_200);
	return;
}

void Function_10(var uParam0, int iParam1) //Position: 0x40E / 1038
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (Function_17(iParam1[iVar03], 4))
		{
			SET_CURRENT_MAP(0);
			Function_16(iParam1[iVar03], 4);
		}
		if (Function_17(iParam1[iVar03], 8))
		{
			Function_11(0, 0, 30);
			Function_16(iParam1[iVar03], 8);
		}
		iVar0++;
	}
	return;
}

void Function_11(int iParam0, int iParam1, int iParam2) //Position: 0x466 / 1126
{
	bool bVar0;
	
	if (StackVal == 4294967295)
	{
		LOG_ERROR("Calling WEATHER_CLEAR_OVERRIDE when you never set the override in the first place!");
		return;
	}
	if (StackVal || (StackVal || StackVal != 3 != 4) != 5)
	{
		Global_16524 = 2;
	}
	else if (StackVal || (StackVal || StackVal != 12 != 20) != 16)
	{
		Global_16524 = Global_16524.f_40;
	}
	else
	{
		Global_16524 = StackVal;
	}
	Global_16524.f_4 = 4294967295;
	Global_16524.f_16 = 0;
	if (!StackVal != Global_16524)
	{
		bVar0 = MAKE_TIME_OF_DAY(iParam0, iParam1, iParam2);
		Function_12(Global_16524, bVar0, 1);
	}
	return;
}

void Function_12(int iParam0, bool bParam1, bool bParam2) //Position: 0x54C / 1356
{
	int iVar0;
	
	Function_15(iParam0);
	Function_14(bParam1);
	PRINTNL();
	if (StackVal == iParam0)
	{
		LOG_ERROR("New weather type is the same as the old weather type!");
		return;
	}
	if (!bParam2)
	{
		iVar0 = GET_HOUR(false);
		if (!((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19))
		{
			return;
		}
	}
	SET_WEATHER(iParam0, bParam1);
	Function_13();
	Global_16524.f_40 = StackVal;
	Global_16524.f_44 = GET_TIME_OF_DAY();
	Global_16524.f_48 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_16524 + 48, 0, 0, GET_MINUTES_FROM_TIME_OF_DAY(bParam1), 0);
	Global_16524.f_8 = iParam0;
	if (Global_16524.f_24 > 0.0f && Global_16524.f_28 > 0.0f)
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
		if (Global_16524.f_24 <= 0.0f)
		{
			SET_RAIN_AMOUNT(Global_16524.f_24);
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		else if (iParam0 != 3 || iParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		if (Global_16524.f_28 <= 0.0f)
		{
			SET_LIGHTNING_AMOUNT(Global_16524.f_28);
		}
		else if (iParam0 != 3 || iParam0 != 4)
		{
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
		}
	}
	return;
}

void Function_13() //Position: 0x6C5 / 1733
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_14(bool bParam0) //Position: 0x6D1 / 1745
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

void Function_15(int iParam0) //Position: 0x717 / 1815
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

void Function_16(int iParam0, int iParam1) //Position: 0x75D / 1885
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	iParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_17(int iParam0, int iParam1) //Position: 0x777 / 1911
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_18() //Position: 0x794 / 1940
{
	Function_19();
	return;
}

void Function_19() //Position: 0x79D / 1949
{
	Function_20(&Local_25 + 4);
	RELEASE_LAYOUT_REF(Local_25);
	return;
}

void Function_20(int iParam0) //Position: 0x7AF / 1967
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_21(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_21(var uParam0, int iParam1) //Position: 0x7D5 / 2005
{
	if (Function_23(uParam0[iParam13], 4))
	{
		if (Function_23(uParam0[iParam13], 1))
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
			Function_22(uParam0[iParam13], 1);
			Function_22(uParam0[iParam13], 2);
			Function_22(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_22(var uParam0, int iParam1) //Position: 0x903 / 2307
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_23(int iParam0, int iParam1) //Position: 0x91D / 2333
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_24() //Position: 0x93A / 2362
{
	Function_25();
	return;
}

void Function_25() //Position: 0x943 / 2371
{
	Function_20(&Local_6 + 4);
	RELEASE_LAYOUT_REF(Local_6);
	return;
}

void Function_26(var uParam0, var uParam1, bool bParam2, var uParam3) //Position: 0x955 / 2389
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar1 = 0;
	uParam0->f_4 = 0;
	uVar2 = Global_3386;
	Global_3386 = 0;
	if (!Function_63(32) || !IS_ACTOR_VALID(bParam2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (Function_27(uParam1[iVar03], bParam2, uParam3, iVar1, uVar2))
		{
			iVar1 = 1;
		}
		iVar0++;
	}
	if (Global_3387)
	{
		uParam0->f_8 = 1;
	}
	else if (Global_3386)
	{
		uParam0->f_8 = 1;
	}
	else if (StackVal)
	{
		uParam0->f_8 = 0;
	}
}

bool Function_27(int iParam0, bool bParam1, int iParam2, var uParam3, bool bParam4) //Position: 0x9D6 / 2518
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_62(iParam0))
	{
		return 0;
	}
	Function_102(&(Global_29008[iParam2]), 4194304);
	iVar0 = DECOR_GET_INT(StackVal, "locflag");
	if (iVar0 != 0 && *iParam0 != 5)
	{
		return 0;
	}
	bVar1 = uParam3;
	switch (*iParam0)
	{
		case 0x00000005:
			if (iVar0 & 240 == 0)
			{
				return 0;
			}
			if (IS_ACTOR_IN_VOLUME(StackVal, bParam1))
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = false;
			}
			if (iVar0 & 32 >= 0)
			{
				if (bVar1)
				{
					if (!Function_17(iParam0, 2))
					{
						if (!Function_17(iParam0, 8))
						{
							if (DECOR_CHECK_EXIST(StackVal, "customweather"))
							{
								Function_60(DECOR_GET_INT(StackVal, "customweather"), 0, 0, 30, 1);
								Function_59(iParam0, 8);
							}
						}
					}
				}
				else if (Function_17(iParam0, 2))
				{
					if (Function_17(iParam0, 8))
					{
						if (HUD_IS_FADED())
						{
							Function_11(0, 0, 0);
						}
						else
						{
							Function_11(0, 0, 30);
						}
						Function_16(iParam0, 8);
					}
				}
			}
			if (iVar0 & 16 >= 0)
			{
				if (bVar1)
				{
					if (!Function_17(iParam0, 2))
					{
						if (!Function_17(iParam0, 4))
						{
							if (DECOR_CHECK_EXIST(StackVal, "ncustommap"))
							{
								SET_CURRENT_MAP(DECOR_GET_INT(StackVal, "ncustommap"));
								Function_59(iParam0, 4);
							}
						}
					}
				}
				else if (Function_17(iParam0, 2))
				{
					if (Function_17(iParam0, 4))
					{
						SET_CURRENT_MAP(0);
						Function_16(iParam0, 4);
					}
				}
			}
			if (iVar0 & 128 >= 0)
			{
				if ((((((bVar1 && Function_7(iParam2)) && !Function_58(0, 0, 1, 1)) && !Global_3403) && !Global_3404) && !Function_57(2048)) && !IS_SCRIPT_VALID(Global_26316.f_60))
				{
					if (!Function_17(iParam0, 2))
					{
						if (!Function_17(iParam0, 16))
						{
							bVar2 = true;
							if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_VOLUME(StackVal), "lawAllowTrespassTime"))
							{
								if (StackVal > DECOR_GET_FLOAT(GET_OBJECT_FROM_VOLUME(GET_CURRENT_GAME_TIME()), "lawAllowTrespassTime"))
								{
									bVar2 = false;
								}
								else
								{
									DECOR_REMOVE(GET_OBJECT_FROM_VOLUME(StackVal), "lawAllowTrespassTime");
								}
							}
							if (Function_56())
							{
								bVar2 = false;
							}
							if (bVar2)
							{
								Function_59(iParam0, 16);
								Function_48(StackVal, 3, 28, GET_OBJECT_FROM_VOLUME(bParam1), 0);
							}
						}
					}
				}
				else if (Function_17(iParam0, 2))
				{
					if (Function_17(iParam0, 16))
					{
						Function_16(iParam0, 16);
					}
				}
			}
			if (iVar0 & 64 >= 0)
			{
				if (bVar1 && !Global_3380)
				{
					if (!Function_17(iParam0, 2))
					{
						if (StackVal && DECOR_CHECK_EXIST(DECOR_CHECK_EXIST(StackVal, "factionswap"), "relationship"))
						{
							SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(StackVal, DECOR_GET_INT(StackVal, "factionswap"), DECOR_GET_INT(2, "relationship"));
						}
					}
				}
				else if (Function_17(iParam0, 2))
				{
					if (StackVal && DECOR_CHECK_EXIST(DECOR_CHECK_EXIST(StackVal, "factionswap"), "relationship"))
					{
						RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(DECOR_GET_INT(StackVal, "factionswap"), 2);
					}
				}
			}
			if (bVar1)
			{
				Function_59(iParam0, 2);
			}
			else
			{
				Function_16(iParam0, 2);
			}
			break;
		
		case 0x00000002:
		case 0x00000004:
			if (!Function_7(iParam2))
			{
				return 0;
			}
			if (IS_ACTOR_IN_VOLUME(StackVal, bParam1))
			{
				if (!Function_103(&(Global_29008[iParam2]), 262144))
				{
					if (!Function_17(iParam0, 1))
					{
						if (!Global_3377)
						{
							Function_47(StackVal, StackVal, *iParam0);
						}
						else
						{
							Global_3377 = 0;
						}
						Function_59(iParam0, 1);
					}
				}
				if (*iParam0 == 4)
				{
					if (!bParam4 && Function_7(iParam2))
					{
						Function_46(Global_29155[Global_29155[iParam210]10].f_20, Global_29155[iParam210].f_20);
					}
					Global_3386 = 1;
				}
				Function_28(iParam2);
			}
			else if (*iParam0 == 4)
			{
				Global_3386 = 0;
			}
			break;
	}
	return bVar1;
}

void Function_28(int iParam0) //Position: 0xDEF / 3567
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_103(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_120(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_33(473, 1, 0, 0);
		iVar0 = Function_32(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_33(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_33(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_33(476, 1, 0, 0);
		}
	}
	iVar1 = (Global_29155[iParam010].f_36 - 5);
	iVar2 = 8;
	while (iVar1 >= 30)
	{
		iVar1 = (iVar1 - 31);
		iVar2++;
	}
	if (iVar2 < 10)
	{
		Function_31(iVar2, iVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_31(7, 30);
	}
	if (Function_30(473) <= Function_29(473))
	{
		if (!Function_56())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

float Function_29(int iParam0) //Position: 0xEEE / 3822
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

float Function_30(int iParam0) //Position: 0xF2B / 3883
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_31(int iParam0, int iParam1) //Position: 0xF64 / 3940
{
	int iVar0;
	
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	iVar0 = SHIFT_LEFT(1, iParam1);
	(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || iVar0);
	return;
	return;
}

var Function_32(int iParam0) //Position: 0xFCB / 4043
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_7(iParam0))
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

int Function_33(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x1023 / 4131
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
	Function_45(iParam0, TO_FLOAT(bParam1), 1);
	Function_44(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_34(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_34(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7) //Position: 0x1243 / 4675
{
	char* cVar0;
	char* cVar1[32];
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
			if (fParam2 > 2000.0f)
			{
				stradd(&Global_35278[iParam020] + 16, " lbs", 32);
			}
			else
			{
				fParam2 = (fParam2 / 2000.0f);
				memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
				stradd(&Global_35278[iParam020] + 16, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
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
					bVar6 = FLOOR((fParam2 - TO_FLOAT(bVar5 * 60)));
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
			fParam2 = (fParam2 * 3.28084f);
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
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(fParam2)), 32);
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
			if ((fParam2 - IntToFloat(FLOOR(fParam2))) < 0.0f)
			{
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(fParam2)), 32);
			}
			if (fParam2 < 1.0f)
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_29(390))), 32);
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
					fVar19 = fParam2;
					fVar20 = 0.0f;
				}
				else if (bParam1)
				{
					fVar19 = (Function_30(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_30(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_42(iParam0, fVar19, fVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_39(fVar19, fParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_37(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_36(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_35(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, iParam5, "", 2, 4294967295, 0, iVar2, 0, 1, 0, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, iParam5, "", 2, 4294967295, 0, iVar2, 0, 0, 0, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_35() //Position: 0x1870 / 6256
{
	int iVar0;
	
	return iVar0;
}

var Function_36(int iParam0) //Position: 0x1878 / 6264
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_37(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1889 / 6281
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_38(char* cParam0, char* cParam1) //Position: 0x197E / 6526
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_39(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1997 / 6551
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_41(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_40(Function_41(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_40(int iParam0, int iParam1) //Position: 0x19FC / 6652
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_41(int iParam0, int iParam1) //Position: 0x1A0E / 6670
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_42(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1A20 / 6688
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
	if (((Function_43(iParam0) != 19 || Function_43(iParam0) != 17) || Function_43(iParam0) != 10) || Function_43(iParam0) != 9)
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

int Function_43(int iParam0) //Position: 0x1B50 / 6992
{
	return Global_35278[iParam020].f_48;
}

void Function_44(int iParam0) //Position: 0x1B5F / 7007
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

int Function_45(int iParam0, float fParam1, bool bParam2) //Position: 0x1CF9 / 7417
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
			Global_34581[iVar1] = (Global_34581[iVar1] + fParam1);
		}
	}
	else
	{
		Global_34581[iVar1] = fParam1;
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

void Function_46(var uParam0, int iParam1) //Position: 0x1F3D / 7997
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_47(struct<5> Param0) //Position: 0x1F4A / 8010
{
	if (!StackVal != Global_13053)
	{
		Global_13053 = StackVal;
		Global_13053.f_8 = Param0;
		Global_13053.f_4 = 0;
	}
	return;
}

var Function_48(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x1F70 / 8048
{
	vector3 vVar0;
	var uVar3;
	bool bVar4;
	bool bVar5;
	
	if (!Function_55(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_54(iParam1))
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
	if (!Function_51(1))
	{
		LOG_ERROR("Crime is disabled: CREATE_CRIME_EVENT failure");
		return "";
	}
	uVar3 = CREATE_CRIME_IN_LAYOUT(Global_26314);
	bVar4 = FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes");
	if ((IS_CRIME_VALID(uVar3) && IS_OBJECT_VALID(bVar4)) && GET_OBJECT_TYPE(bVar4) != 2)
	{
		SET_CRIME_TYPE(uVar3, iParam1);
		SET_CRIME_VICTIM(uVar3, bParam3);
		SET_CRIME_CRIMINAL(uVar3, bParam2);
		SET_CRIME_BEGIN_TIMESTAMP(uVar3, GET_CURRENT_GAME_TIME());
		SET_CRIME_END_TIMESTAMP(uVar3, GET_CURRENT_GAME_TIME());
		GET_OBJECT_POSITION(bParam3, &vVar0);
		SET_CRIME_POSITION(uVar3, vVar0);
		bVar5 = CREATE_OBJECTSET_IN_LAYOUT(Function_35(), Global_26314, 3, 0);
		SET_CRIME_OBJECTSET(uVar3, bVar5);
		if (!bParam4)
		{
			SET_CRIME_WITNESSED(uVar3, 1);
		}
		else
		{
			SET_CRIME_WITNESSED(uVar3, 3);
			Function_49();
		}
		SET_CRIME_FACTION(StackVal, uVar3);
		SET_CRIME_TALLIED(uVar3, 0);
		SET_CRIME_COUNTER(uVar3, 1);
		SET_CRIME_WORLD_REGION(uVar3, Global_26361.f_12);
		if ((Global_26998[iParam118].f_20 != 2 || Global_26998[iParam118].f_20 != 3) || Global_26998[iParam118].f_20 != 4)
		{
			SET_CRIME_IN_PROGRESS(uVar3, 1);
		}
		else
		{
			SET_CRIME_IN_PROGRESS(uVar3, 0);
		}
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_CRIME(uVar3), GET_OBJECTSET_FROM_OBJECT(bVar4));
		SET_ACTOR_TIME_OF_LAST_CRIME(bParam2, GET_CURRENT_GAME_TIME());
	}
	return uVar3;
}

void Function_49() //Position: 0x2200 / 8704
{
	bool bVar0;
	var uVar1;
	bool bVar2;
	var uVar3;
	
	bVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	uVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_50(bVar0, uVar1);
	bVar2 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar2))
	{
		uVar3 = GET_CRIME_FROM_OBJECT(bVar2);
		if (IS_CRIME_VALID(uVar3))
		{
			SET_CRIME_WITNESSED(uVar3, 3);
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

void Function_50(bool bParam0, bool bParam1) //Position: 0x2263 / 8803
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

bool Function_51(bool bParam0) //Position: 0x2292 / 8850
{
	if (Function_57(256))
	{
		return 0;
	}
	if (Function_57(262144))
	{
		return 0;
	}
	if (Function_53())
	{
		return 0;
	}
	if (!Function_57(1))
	{
		return 0;
	}
	if (!Function_57(4096))
	{
		return 0;
	}
	if (bParam0 && Function_52(12))
	{
		return 0;
	}
	if (Global_3378)
	{
		return 0;
	}
	if (Function_57(2048))
	{
		return 0;
	}
	if (Function_56() || !bParam0)
	{
		if (Global_29007 != 2 || Global_29007 != 5)
		{
			return 0;
		}
	}
	return 1;
}

int Function_52(int iParam0) //Position: 0x2308 / 8968
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_53() //Position: 0x2319 / 8985
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

bool Function_54(int iParam0) //Position: 0x2332 / 9010
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_55(int iParam0) //Position: 0x2348 / 9032
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_56() //Position: 0x235D / 9053
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_57(int iParam0) //Position: 0x2366 / 9062
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_58(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x2384 / 9092
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

void Function_59(int iParam0, int iParam1) //Position: 0x2428 / 9256
{
	iParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_60(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x2439 / 9273
{
	int iVar0;
	bool bVar1;
	
	Function_15(uParam0);
	Global_16524.f_4 = uParam0;
	Global_16524.f_16 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_61(StackVal, bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(iParam1, iParam2, iParam3);
			Function_12(StackVal, bVar1, bParam4);
		}
	}
}

void Function_61(int iParam0, int iParam1) //Position: 0x24AB / 9387
{
	var uVar0;
	
	uVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_15(iParam0);
	Function_14(uVar0);
	PRINTNL();
	Function_12(iParam0, uVar0, iParam1);
	return;
}

bool Function_62(int iParam0) //Position: 0x24D0 / 9424
{
	if (*iParam0 == 0)
	{
		return 0;
	}
	if (!IS_VOLUME_VALID(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_63(int iParam0) //Position: 0x24ED / 9453
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_64() //Position: 0x2509 / 9481
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_65(int iParam0) //Position: 0x251E / 9502
{
	float fVar0;
	
	iParam0 = iParam0;
	Function_80(&(Global_26282[24]), "BWG", 34, Local_6, 2);
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (!Function_79(2))
		{
			if (!Function_63(0x8000000))
			{
				Function_77(0x8000000);
			}
			if (Function_73(1, 0))
			{
				if (IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("Blackwater_layout")))
				{
					if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("Blackwater_layout"), "blkv_dismount")))
					{
						if (IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("Blackwater_layout"), "blkv_dismount")))
						{
							if (!Function_72(Global_76846, 32768))
							{
								if (!IS_SCRIPT_VALID(bLocal_475))
								{
									bLocal_475 = LAUNCH_NEW_SCRIPT("content/DLC/ZombiePack/North/Great_Plains/GreatPlains_Dismount_z", 0);
									DECOR_SET_INT(Global_34573, "GP_Dismount", bLocal_475);
								}
								Function_66(Global_34573, 32768, 1, 0);
							}
						}
					}
				}
				if (Global_3365)
				{
					if (!iLocal_476 && !Function_72(Global_76846, 32768))
					{
						if (IS_ACTOR_VALID(GET_MOUNT(Global_34573)))
						{
							AUDIO_MUSIC_FORCE_TRACK("NRT_ZMB_SONG_01", "PASTORAL", 0f, 4294967295, 4294967295, 3212836864, 0);
							iLocal_476 = 1;
						}
						else if (!HUD_IS_FADED())
						{
							fVar0 = GET_CURRENT_GAME_TIME();
							if (DECOR_CHECK_EXIST(Global_34573, "fZombie01Completion"))
							{
								fVar0 = (DECOR_GET_FLOAT(Global_34573, "fZombie01Completion") + 10.0f);
							}
							if ((fVar0 - GET_CURRENT_GAME_TIME()) >= 0.0f)
							{
								AUDIO_MUSIC_FORCE_TRACK("NRT_ZMB_SONG_01", "PASTORAL", 0f, 4294967295, 4294967295, 3212836864, 0);
								iLocal_476 = 1;
							}
						}
					}
					else if (DECOR_CHECK_EXIST(Global_34573, "nbStopSong"))
					{
						AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
						DECOR_REMOVE(Global_34573, "nbStopSong");
					}
				}
			}
		}
		if (!Function_72(Global_76846, 65536) && !Global_3380)
		{
			if (!iLocal_477)
			{
				AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(true);
				iLocal_477 = 1;
			}
		}
	}
	return;
}

void Function_66(bool bParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x27A0 / 10144
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_68(bParam0, uParam1, uParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = uParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_67(&cVar1, uParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_67(char* cParam0, int iParam1) //Position: 0x280C / 10252
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

bool Function_68(bool bParam0, var uParam1, int iParam2) //Position: 0x2843 / 10307
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
		if (Function_70(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_69(uVar0))
		{
			case 0x00000002:
				if (!Function_72(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_69(char* cParam0) //Position: 0x28BB / 10427
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

int Function_70(int iParam0) //Position: 0x295C / 10588
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_71(&iVar1, 2147483648);
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

void Function_71(var uParam0, int iParam1) //Position: 0x2999 / 10649
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

bool Function_72(var uParam0, int iParam1) //Position: 0x29AC / 10668
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_73(var uParam0, bool bParam1) //Position: 0x29BF / 10687
{
	int iVar0;
	
	iVar0 = Function_75(uParam0);
	if (!Function_74(iVar0))
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

bool Function_74(int iParam0) //Position: 0x29FC / 10748
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_75(int iParam0) //Position: 0x2A13 / 10771
{
	if (!Function_76(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_76(int iParam0) //Position: 0x2A2D / 10797
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_77(bool bParam0) //Position: 0x2A43 / 10819
{
	if (Function_78(bParam0, 1) && !Function_78(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || bParam0);
	Global_26119 |= 1073741824;
	return;
}

bool Function_78(bool bParam0, int iParam1) //Position: 0x2A70 / 10864
{
	return (bParam0 && iParam1) == 0;
}

bool Function_79(int iParam0) //Position: 0x2A7D / 10877
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

void Function_80(int iParam0, char* cParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x2A92 / 10898
{
	bool bVar0;
	
	if (!IS_LAYOUTREF_VALID(bParam3))
	{
		LOG_ERROR("invalid layout ref in UPDATE_GRAVEYARD()");
		return;
	}
	if (StackVal)
	{
		if (iParam4 == 1)
		{
			if (VDIST(Global_34574, -1804.95f, 23.088f, 2810.314f) < 250.0f)
			{
				Function_2(iParam0);
			}
		}
		else if (iParam4 == 3)
		{
			if (VDIST(Global_34574, -2912.0f, 19.075f, 2693.999f) < 250.0f)
			{
				Function_2(iParam0);
			}
		}
		else if (iParam4 == 2)
		{
			if (!Function_88(iParam0, 63))
			{
				if (Function_87(76) || Function_79(76))
				{
					if (IS_GRAVESTONE_SECTOR_READY())
					{
						Function_86(cParam1, iParam0, 3, bParam3);
						Function_83(iParam0, 63);
					}
					else
					{
						return;
					}
				}
			}
		}
		return;
	}
	if (iParam4 == 1)
	{
		if (VDIST(Global_34574, -1804.95f, 23.088f, 2810.314f) < 200.0f)
		{
			return;
		}
		if (Global_26282[14] == 0)
		{
			Function_82();
		}
	}
	else if (iParam4 == 3)
	{
		if (VDIST(Global_34574, -2912.0f, 19.075f, 2693.999f) < 200.0f)
		{
			return;
		}
		if (Global_26282[34] == 0)
		{
			Function_81();
		}
	}
	if (!IS_GRAVESTONE_SECTOR_READY())
	{
		return;
	}
	if (iParam4 == 2)
	{
		if (!Function_88(iParam0, 63))
		{
			if (Function_87(76) || Function_79(76))
			{
				Function_86(cParam1, iParam0, 3, bParam3);
				Function_83(iParam0, 63);
			}
		}
	}
	iParam0->f_8 = 1;
	bVar0 = false;
	while (bVar0 <= iParam2)
	{
		if (iParam4 == 2 || bVar0 == 3)
		{
			if (!Function_86(cParam1, iParam0, bVar0, bParam3))
			{
				LOG_ERROR("Failed to create gravestone text!");
				return;
			}
		}
		bVar0++;
	}
	return;
}

void Function_81() //Position: 0x2C8D / 11405
{
	int iVar0;
	
	SET_CURRENT_GRAVESTONE_SECTOR("ofr_Props_01x");
	Global_26282[34] = 0;
	Global_26282[34].f_4 = 0;
	iVar0 = 0;
	while (iVar0 <= 20)
	{
		Function_83(&(Global_26282[34]), iVar0);
		iVar0++;
	}
	return;
}

void Function_82() //Position: 0x2CD4 / 11476
{
	int iVar0;
	
	SET_CURRENT_GRAVESTONE_SECTOR("coo_cemetary01Props01x");
	Global_26282[14] = 0;
	Global_26282[14].f_4 = 0;
	iVar0 = 0;
	while (iVar0 <= 22)
	{
		Function_83(&(Global_26282[14]), iVar0 + 5);
		iVar0++;
	}
	return;
}

void Function_83(int iParam0, int iParam1) //Position: 0x2D26 / 11558
{
	if (iParam1 <= 32)
	{
		Function_84(iParam0, Function_85(iParam1));
	}
	else
	{
		Function_84(iParam0 + 4, Function_85((iParam1 - 32)));
	}
	return;
}

void Function_84(var uParam0, int iParam1) //Position: 0x2D4F / 11599
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

int Function_85(int iParam0) //Position: 0x2D5E / 11614
{
	return SHIFT_LEFT(1, iParam0);
}

bool Function_86(char* cParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2D6A / 11626
{
	bool bVar0;
	char* cVar1[16];
	bool bVar5;
	
	if (!IS_OBJECTSET_VALID(iParam1->f_12))
	{
		iParam1->f_12 = CREATE_OBJECTSET_IN_LAYOUT("graveTextSet", bParam3, 4294967295, 0);
	}
	bVar5 = false;
	bVar5 = false;
	while (bVar5 <= 3)
	{
		strcpy(&cVar1, cParam0, 16);
		stradd(&cVar1, I2STR(bParam2), 16);
		stradd(&cVar1, "_", 16);
		stradd(&cVar1, I2STR(bVar5), 16);
		if (bVar5 != 0 || Function_88(iParam1, bParam2))
		{
			bVar0 = CREATE_GRAVESTONE_TEXT_IN_LAYOUT(bParam3, Function_35(), &cVar1, bParam2, bVar5, 4278716679);
			if (IS_OBJECT_VALID(bVar0))
			{
				ADD_OBJECT_TO_OBJECTSET(bVar0, iParam1->f_12);
			}
			else
			{
				return 0;
			}
		}
		bVar5++;
	}
	return 1;
}

int Function_87(int iParam0) //Position: 0x2E0A / 11786
{
	if (Global_74542[iParam010] == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_88(int iParam0, bool bParam1) //Position: 0x2E1F / 11807
{
	if (bParam1 <= 32)
	{
		return Function_78(*iParam0, Function_85(bParam1));
	}
	return Function_78(StackVal, Function_85((bParam1 - 32)));
}

void Function_89(bool bParam0, float fParam1) //Position: 0x2E4A / 11850
{
	if (!Function_63(128))
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

void Function_90(int iParam0) //Position: 0x2E88 / 11912
{
	if (!Function_7(iParam0))
	{
		return;
	}
	if (!StackVal != 2)
	{
		return;
	}
	if (((iParam0 != Global_30628[0] || iParam0 != Global_30628[1]) || iParam0 != Global_30628[2]) || iParam0 != Global_30628[3])
	{
		Global_29004 = 0;
	}
	else if ((iParam0 != Global_30633[0] || iParam0 != Global_30633[2]) || iParam0 != Global_30633[1])
	{
		Global_29004 = 1;
	}
	else if (iParam0 != Global_30637[1] || iParam0 != Global_30637[0])
	{
		Global_29004 = 2;
	}
	return;
}

void Function_91(bool bParam0, bool bParam1) //Position: 0x2F1A / 12058
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
		Function_46(Global_29155[bParam110].f_20, cVar0);
	}
	if (!Global_3380 && !Function_56())
	{
		SET_RICH_PRESENCE(2, Global_29155[bParam110].f_36, 0, 0, 0);
	}
	DECOR_SET_INT(bParam0, "regid", bParam1);
	Global_30620 = 0;
	return;
}

var Function_92() //Position: 0x3014 / 12308
{
	return Local_6;
}

void Function_93(int iParam0) //Position: 0x301C / 12316
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_94(bool bParam0) //Position: 0x302F / 12335
{
	if (!Function_79(5) && Global_3365)
	{
		Function_95(StackVal, 0, 0.25f, 0, Local_6, !Function_99(&Global_30717));
	}
	else
	{
		Function_95(StackVal, 1, 0.25f, 0, Local_6, !Function_99(&Global_30717));
	}
	return;
}

void Function_95(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x307C / 12412
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
	Global_28842.f_32 = iParam1;
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
		Function_98();
	}
	if (bParam5)
	{
		Function_96(1048576);
	}
}

void Function_96(int iParam0) //Position: 0x318F / 12687
{
	Function_97(&Global_28842, iParam0);
	return;
}

void Function_97(var uParam0, var uParam1) //Position: 0x319D / 12701
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_98() //Position: 0x31B8 / 12728
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_96(16384);
	}
	return;
}

bool Function_99(int iParam0) //Position: 0x31D4 / 12756
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		if (Function_7((*iParam0)[iVar0]))
		{
			if (!StackVal != 6)
			{
				if (Global_29008[(*iParam0)[iVar0]] & 5 >= 0)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_100(int iParam0) //Position: 0x3221 / 12833
{
	if (!Function_7(iParam0))
	{
		return 0;
	}
	if (!StackVal != 2)
	{
		return 0;
	}
	if (iParam0 == Global_30628[0])
	{
		return Function_99(&Global_30640);
	}
	if (iParam0 == Global_30628[1])
	{
		return Function_99(&Global_30658);
	}
	if (iParam0 == Global_30628[2])
	{
		return Function_99(&Global_30668);
	}
	if (iParam0 == Global_30628[3])
	{
		return Function_99(&Global_30679);
	}
	if (iParam0 == Global_30633[0])
	{
		return Function_99(&Global_30685);
	}
	if (iParam0 == Global_30633[2])
	{
		return Function_99(&Global_30693);
	}
	if (iParam0 == Global_30633[1])
	{
		return Function_99(&Global_30707);
	}
	if (iParam0 == Global_30637[1])
	{
		return Function_99(&Global_30723);
	}
	if (iParam0 == Global_30637[0])
	{
		return Function_99(&Global_30717);
	}
	return 0;
}

void Function_101(int iParam0) //Position: 0x32FE / 13054
{
	iParam0 = iParam0;
	return;
}

void Function_102(var uParam0, int iParam1) //Position: 0x3308 / 13064
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_103(int iParam0, int iParam1) //Position: 0x331F / 13087
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_104() //Position: 0x333B / 13115
{
	return;
}

void Function_105(var uParam0) //Position: 0x3341 / 13121
{
	uParam0 = uParam0;
	return;
}

void Function_106() //Position: 0x334B / 13131
{
	Function_107(Global_30637[0]);
	Global_29004 = 2;
	return;
}

void Function_107(int iParam0) //Position: 0x335E / 13150
{
	int iVar0;
	
	iVar0 = Function_108(111, 111, 5);
	if (iParam0 != Global_30628[0] && !Function_78(Global_13172[iVar011].f_20, 8388608))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30628[0]);
	}
	else if (iParam0 != Global_30628[2] && !Function_78(Global_13172[iVar011].f_20, 4194304))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30628[2]);
	}
	else if (iParam0 != Global_30628[1] && !Function_78(Global_13172[iVar011].f_20, 0x1000000))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30628[1]);
	}
	else if (iParam0 != Global_30628[3] && !Function_78(Global_13172[iVar011].f_20, 0x2000000))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30628[3]);
	}
	else if (iParam0 != Global_30633[2] && !Function_78(Global_13172[iVar011].f_20, 0x40000000))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30633[2]);
	}
	else if (iParam0 != Global_30633[0] && !Function_78(Global_13172[iVar011].f_20, 0x10000000))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30633[0]);
	}
	else if (iParam0 != Global_30633[1] && !Function_78(Global_13172[iVar011].f_20, 0x20000000))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30633[1]);
	}
	else if (iParam0 != Global_30637[1] && !Function_78(Global_13172[iVar011].f_20, 0x4000000))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30637[1]);
	}
	else if (iParam0 != Global_30637[0] && !Function_78(Global_13172[iVar011].f_20, 0x8000000))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30637[0]);
	}
	return;
}

int Function_108(bool bParam0, bool bParam1, bool bParam2) //Position: 0x3596 / 13718
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_112(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_109(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_109(bParam0, bParam1, bParam2, 4294967295);
}

int Function_109(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x35F4 / 13812
{
	var uVar0;
	
	if (!Function_111(bParam2))
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
	uVar0 = Function_112(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_110(uVar0);
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

int Function_110(int iParam0) //Position: 0x3749 / 14153
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

bool Function_111(int iParam0) //Position: 0x3787 / 14215
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_112(int iParam0, int iParam1, var uParam2) //Position: 0x379C / 14236
{
	return ((uParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

bool Function_113() //Position: 0x37BC / 14268
{
	return HAS_STRING_TABLE_LOADED("graveyards");
}

void Function_114(bool bParam0) //Position: 0x37D2 / 14290
{
	Function_115(StackVal, &uLocal_3, &uLocal_471, 2, 4294967295, 0);
	return;
}

void Function_115(var uParam0, var uParam1, int iParam2, bool bParam3, var uParam4, bool bParam5) //Position: 0x37EC / 14316
{
	if (*uParam0 >= (*uParam1 - 1))
	{
		LOG_ERROR("Too many locations defined - increase array size in vol file!");
		return;
	}
	if (!IS_VOLUME_VALID(bParam3))
	{
		LOG_ERROR("NL_INIT_LOCATION got invalid VOLUME!");
		return;
	}
	uParam4 = uParam4;
	uParam1[*uParam03]->f_4 = bParam3;
	(*uParam1)[*uParam03] = iParam2;
	DECOR_SET_INT(StackVal, "locflag", bParam5);
	if (iParam2 == 4)
	{
		ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(StackVal, 0);
	}
	*uParam0++;
}

void Function_116(var uParam0) //Position: 0x38C7 / 14535
{
	*uParam0 = 0;
	uParam0->f_4 = 0;
	return;
}

bool Function_117() //Position: 0x38D6 / 14550
{
	return Function_118();
}

int Function_118() //Position: 0x38DF / 14559
{
	var uVar0;
	
	Function_119(3, 3);
	uVar0 = uVar0;
	Local_200 = FIND_NAMED_LAYOUT("GreatPlains_layout");
	if (!IS_LAYOUTREF_VALID(Local_200))
	{
		Local_200 = CREATE_LAYOUT("GreatPlains_layout");
	}
	Local_200.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_200, "blk_v_robbery_bank", 2, 1346.366f, 81.34664f, 751.1907f, 0.0f, 0.0f, 0.0f, 17.39107f, 17.50947f, 14.99229f);
	Local_200.f_52 = CREATE_VOLUME_SET_IN_LAYOUT(Local_200, "grtv_flk_NW_set");
	(*&Local_200 + 8)[0] = CREATE_VOLUME_IN_LAYOUT(Local_200, "wolfs12", 3, -54.2902f, 114.6276f, 1292.46f, 0.0f, -6.764513f, 0.0f, 57.62737f, 29.91328f, 74.97815f);
	ADD_TO_VOLUME_SET(Local_200.f_52, (*&Local_200 + 8)[0]);
	(*&Local_200 + 8)[1] = CREATE_VOLUME_IN_LAYOUT(Local_200, "wolfs11", 3, -116.1067f, 139.3254f, 1461.238f, 0.0f, 36.96094f, 0.0f, 40.70086f, 26.70453f, 81.41494f);
	ADD_TO_VOLUME_SET(Local_200.f_52, (*&Local_200 + 8)[1]);
	(*&Local_200 + 8)[2] = CREATE_VOLUME_IN_LAYOUT(Local_200, "wolfs10", 3, -194.7322f, 121.6231f, 1308.54f, 0.0f, 42.25089f, 0.0f, 59.11852f, 32.7988f, 83.63084f);
	ADD_TO_VOLUME_SET(Local_200.f_52, (*&Local_200 + 8)[2]);
	(*&Local_200 + 8)[3] = CREATE_VOLUME_IN_LAYOUT(Local_200, "wolfs9", 3, 285.138f, 94.36859f, 993.8371f, 0.0f, 20.0f, 0.0f, 51.4483f, 32.08016f, 49.86724f);
	ADD_TO_VOLUME_SET(Local_200.f_52, (*&Local_200 + 8)[3]);
	(*&Local_200 + 8)[4] = CREATE_VOLUME_IN_LAYOUT(Local_200, "wolfs8", 3, 143.9431f, 94.36859f, 1051.083f, 0.0f, 20.0f, 0.0f, 99.15746f, 39.93661f, 33.04917f);
	ADD_TO_VOLUME_SET(Local_200.f_52, (*&Local_200 + 8)[4]);
	(*&Local_200 + 8)[5] = CREATE_VOLUME_IN_LAYOUT(Local_200, "wolfs7", 3, -8.506625f, 111.1147f, 1141.139f, 0.0f, 20.0f, 0.0f, 82.18313f, 33.48681f, 18.8488f);
	ADD_TO_VOLUME_SET(Local_200.f_52, (*&Local_200 + 8)[5]);
	(*&Local_200 + 8)[6] = CREATE_VOLUME_IN_LAYOUT(Local_200, "wolfs6", 3, -145.0075f, 117.3168f, 1194.091f, 0.0f, 20.0f, 0.0f, 63.47575f, 40.97692f, 72.47535f);
	ADD_TO_VOLUME_SET(Local_200.f_52, (*&Local_200 + 8)[6]);
	(*&Local_200 + 8)[7] = CREATE_VOLUME_IN_LAYOUT(Local_200, "wolfs5", 3, -24.17779f, 127.498f, 1591.916f, 0.0f, 1.280679f, 0.0f, 40.62563f, 33.48681f, 139.8717f);
	ADD_TO_VOLUME_SET(Local_200.f_52, (*&Local_200 + 8)[7]);
	(*&Local_200 + 8)[8] = CREATE_VOLUME_IN_LAYOUT(Local_200, "wolfs4", 3, -35.64503f, 136.5509f, 1762.332f, 0.0f, 20.0f, 0.0f, 33.48681f, 33.48681f, 33.48681f);
	ADD_TO_VOLUME_SET(Local_200.f_52, (*&Local_200 + 8)[8]);
	(*&Local_200 + 8)[9] = CREATE_VOLUME_IN_LAYOUT(Local_200, "wolfs3", 3, -100.1049f, 140.3734f, 1625.072f, 0.0f, 20.0f, 0.0f, 30.39426f, 33.48681f, 122.0314f);
	ADD_TO_VOLUME_SET(Local_200.f_52, (*&Local_200 + 8)[9]);
	Local_200.f_76 = CREATE_VOLUME_SET_IN_LAYOUT(Local_200, "grtv_flk_CENTER_set");
	(*&Local_200 + 56)[0] = CREATE_VOLUME_IN_LAYOUT(Local_200, "nbuffalos3", 3, 49.5673f, 118.6022f, 1792.977f, 0.0f, 20.0f, 0.0f, 60.3822f, 28.85181f, 82.89291f);
	ADD_TO_VOLUME_SET(Local_200.f_76, (*&Local_200 + 56)[0]);
	(*&Local_200 + 56)[1] = CREATE_VOLUME_IN_LAYOUT(Local_200, "buffalos", 3, 210.5763f, 145.9005f, 1488.596f, 0.0f, 5.336369f, 0.0f, 201.5079f, 50.13197f, 370.2873f);
	ADD_TO_VOLUME_SET(Local_200.f_76, (*&Local_200 + 56)[1]);
	(*&Local_200 + 56)[2] = CREATE_VOLUME_IN_LAYOUT(Local_200, "nbuffalos1", 3, 428.3508f, 145.9005f, 1091.086f, 0.0f, -40.39722f, 0.0f, 148.988f, 50.13197f, 155.6049f);
	ADD_TO_VOLUME_SET(Local_200.f_76, (*&Local_200 + 56)[2]);
	(*&Local_200 + 56)[3] = CREATE_VOLUME_IN_LAYOUT(Local_200, "nbuffalos2", 3, 465.1242f, 119.7648f, 1373.33f, 0.0f, 96.65638f, 0.0f, 127.3155f, 25.66472f, 70.63678f);
	ADD_TO_VOLUME_SET(Local_200.f_76, (*&Local_200 + 56)[3]);
	Local_200.f_104 = CREATE_VOLUME_SET_IN_LAYOUT(Local_200, "grtv_flk_SOUTH_set");
	(*&Local_200 + 80)[0] = CREATE_VOLUME_IN_LAYOUT(Local_200, "ncougars11", 3, 648.2339f, 134.1398f, 1845.425f, 0.0f, 32.75464f, 0.0f, 121.6643f, 68.45309f, 132.5476f);
	ADD_TO_VOLUME_SET(Local_200.f_104, (*&Local_200 + 80)[0]);
	(*&Local_200 + 80)[1] = CREATE_VOLUME_IN_LAYOUT(Local_200, "ncougars10", 3, 443.3477f, 94.73312f, 1771.535f, 0.0f, 20.0f, 0.0f, 89.86477f, 89.86477f, 89.86477f);
	ADD_TO_VOLUME_SET(Local_200.f_104, (*&Local_200 + 80)[1]);
	(*&Local_200 + 80)[2] = CREATE_VOLUME_IN_LAYOUT(Local_200, "cougars9", 3, 209.7166f, 91.35681f, 1934.343f, 0.0f, 20.0f, 0.0f, 189.1637f, 89.86477f, 75.75009f);
	ADD_TO_VOLUME_SET(Local_200.f_104, (*&Local_200 + 80)[2]);
	(*&Local_200 + 80)[3] = CREATE_VOLUME_IN_LAYOUT(Local_200, "cougars8", 3, 545.233f, 104.4078f, 1635.16f, 0.0f, -11.80128f, 0.0f, 139.2927f, 89.86477f, 73.26148f);
	ADD_TO_VOLUME_SET(Local_200.f_104, (*&Local_200 + 80)[3]);
	(*&Local_200 + 80)[4] = CREATE_VOLUME_IN_LAYOUT(Local_200, "cougars7", 3, 763.0635f, 95.29845f, 1653.671f, 0.0f, -16.63512f, 0.0f, 68.9f, 89.86477f, 108.8123f);
	ADD_TO_VOLUME_SET(Local_200.f_104, (*&Local_200 + 80)[4]);
	Local_200.f_152 = CREATE_VOLUME_SET_IN_LAYOUT(Local_200, "grtv_gullcoast_set");
	(*&Local_200 + 108)[0] = CREATE_VOLUME_IN_LAYOUT(Local_200, "grtv_aquaticWildlife27", 3, 542.2242f, 68.26665f, 2042.296f, 0.0f, -29.3247f, 0.0f, 130.4115f, 19.64153f, 74.55981f);
	ADD_TO_VOLUME_SET(Local_200.f_152, (*&Local_200 + 108)[0]);
	(*&Local_200 + 108)[1] = CREATE_VOLUME_IN_LAYOUT(Local_200, "grtv_aquaticWildlife11", 3, 719.006f, 68.2666f, 2043.745f, 0.0f, 1.951811f, 0.0f, 130.4115f, 23.56285f, 74.55981f);
	ADD_TO_VOLUME_SET(Local_200.f_152, (*&Local_200 + 108)[1]);
	(*&Local_200 + 108)[2] = CREATE_VOLUME_IN_LAYOUT(Local_200, "grtv_aquaticWildlife25", 3, 862.4601f, 68.26663f, 1790.165f, 0.0f, 73.88887f, 0.0f, 92.73218f, 25.94783f, 75.14059f);
	ADD_TO_VOLUME_SET(Local_200.f_152, (*&Local_200 + 108)[2]);
	(*&Local_200 + 108)[3] = CREATE_VOLUME_IN_LAYOUT(Local_200, "grtv_aquaticWildlife26", 3, 871.1542f, 68.26662f, 1956.079f, 0.0f, 73.88887f, 0.0f, 92.73218f, 18.71796f, 75.14059f);
	ADD_TO_VOLUME_SET(Local_200.f_152, (*&Local_200 + 108)[3]);
	(*&Local_200 + 108)[4] = CREATE_VOLUME_IN_LAYOUT(Local_200, "grtv_aquaticWildlife12", 3, 924.7684f, 68.26663f, 1706.121f, 0.0f, 73.88887f, 0.0f, 92.73218f, 27.40582f, 75.14059f);
	ADD_TO_VOLUME_SET(Local_200.f_152, (*&Local_200 + 108)[4]);
	(*&Local_200 + 108)[5] = CREATE_VOLUME_IN_LAYOUT(Local_200, "grtv_aquaticWildlife13", 3, 864.7108f, 68.26666f, 1212.507f, 0.0f, 91.04541f, 0.0f, 76.14072f, 26.22717f, 64.7296f);
	ADD_TO_VOLUME_SET(Local_200.f_152, (*&Local_200 + 108)[5]);
	(*&Local_200 + 108)[6] = CREATE_VOLUME_IN_LAYOUT(Local_200, "grtv_aquaticWildlife14", 3, 829.8139f, 68.26666f, 1087.609f, 0.0f, -30.65034f, 0.0f, 94.80785f, 20.92016f, 82.87566f);
	ADD_TO_VOLUME_SET(Local_200.f_152, (*&Local_200 + 108)[6]);
	(*&Local_200 + 108)[7] = CREATE_VOLUME_IN_LAYOUT(Local_200, "grtv_aquaticWildlife22", 3, 867.8832f, 68.26666f, 1300.542f, 0.0f, 130.2414f, 0.0f, 76.14072f, 28.67517f, 64.7296f);
	ADD_TO_VOLUME_SET(Local_200.f_152, (*&Local_200 + 108)[7]);
	(*&Local_200 + 108)[8] = CREATE_VOLUME_IN_LAYOUT(Local_200, "grtv_aquaticWildlife23", 3, 873.435f, 68.26666f, 1412.371f, 0.0f, 130.2414f, 0.0f, 76.14072f, 20.79433f, 64.7296f);
	ADD_TO_VOLUME_SET(Local_200.f_152, (*&Local_200 + 108)[8]);
	(*&Local_200 + 108)[9] = CREATE_VOLUME_IN_LAYOUT(Local_200, "grtv_aquaticWildlife24", 3, 958.8206f, 68.26663f, 1568.463f, 0.0f, 86.45786f, 0.0f, 133.3231f, 21.32483f, 64.7296f);
	ADD_TO_VOLUME_SET(Local_200.f_152, (*&Local_200 + 108)[9]);
	Local_200.f_188 = CREATE_VOLUME_SET_IN_LAYOUT(Local_200, "grtv_aquaticWildlife_set");
	(*&Local_200 + 156)[0] = CREATE_VOLUME_IN_LAYOUT(Local_200, "grtv_aquaticWildlife10", 3, 463.473f, 68.26824f, 1882.711f, 0.0f, -14.30964f, 0.0f, 173.5558f, 32.81913f, 61.38209f);
	ADD_TO_VOLUME_SET(Local_200.f_188, (*&Local_200 + 156)[0]);
	(*&Local_200 + 156)[1] = CREATE_VOLUME_IN_LAYOUT(Local_200, "grtv_aquaticWildlife15", 3, 668.8126f, 71.2487f, 1001.604f, 0.0f, -36.56364f, 0.0f, 204.8105f, 21.72543f, 59.11795f);
	ADD_TO_VOLUME_SET(Local_200.f_188, (*&Local_200 + 156)[1]);
	(*&Local_200 + 156)[2] = CREATE_VOLUME_IN_LAYOUT(Local_200, "grtv_aquaticWildlife16", 3, 410.3493f, 74.29018f, 943.0745f, 0.0f, 7.388419f, 0.0f, 138.6952f, 26.14467f, 51.82736f);
	ADD_TO_VOLUME_SET(Local_200.f_188, (*&Local_200 + 156)[2]);
	(*&Local_200 + 156)[3] = CREATE_VOLUME_IN_LAYOUT(Local_200, "grtv_aquaticWildlife17", 3, 175.2287f, 89.25648f, 983.217f, 0.0f, 25.225f, 0.0f, 139.4472f, 25.57897f, 51.54788f);
	ADD_TO_VOLUME_SET(Local_200.f_188, (*&Local_200 + 156)[3]);
	(*&Local_200 + 156)[4] = CREATE_VOLUME_IN_LAYOUT(Local_200, "grtv_aquaticWildlife18", 3, -22.47146f, 88.03369f, 1109.185f, 0.0f, 25.225f, 0.0f, 139.4472f, 37.6038f, 51.54788f);
	ADD_TO_VOLUME_SET(Local_200.f_188, (*&Local_200 + 156)[4]);
	(*&Local_200 + 156)[5] = CREATE_VOLUME_IN_LAYOUT(Local_200, "grtv_aquaticWildlife19", 3, -221.0464f, 116.4549f, 1186.166f, 0.0f, 42.80977f, 0.0f, 140.1022f, 17.40649f, 34.5661f);
	ADD_TO_VOLUME_SET(Local_200.f_188, (*&Local_200 + 156)[5]);
	(*&Local_200 + 156)[6] = CREATE_VOLUME_IN_LAYOUT(Local_200, "grtv_aquaticWildlife20", 3, -404.7502f, 105.5874f, 1166.046f, 0.0f, -49.27761f, 0.0f, 138.3392f, 17.54135f, 35.00663f);
	ADD_TO_VOLUME_SET(Local_200.f_188, (*&Local_200 + 156)[6]);
	Local_200.f_192 = CREATE_VOLUME_IN_LAYOUT(Local_200, "grtv_birds", 2, 184.0f, 118.4628f, 1524.0f, 0.0f, 0.0f, 0.0f, 1548.724f, 136.7648f, 1274.193f);
	Local_200.f_196 = CREATE_VOLUME_IN_LAYOUT(Local_200, "grtv_dixons", 3, 172.723f, 81.27254f, 2063.629f, 0.0f, -8.247506f, 0.0f, 27.80257f, 13.1623f, 10.755f);
	Local_200.f_200 = CREATE_VOLUME_IN_LAYOUT(Local_200, "grtv_bhstop", 2, 757.0193f, 78.525f, 1234.986f, 0.0f, 0.0f, 0.0f, 7.127447f, 8.294168f, 15.94082f);
	Local_200.f_204 = CREATE_VOLUME_IN_LAYOUT(Local_200, "nEllipsoid", 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_200.f_208 = CREATE_VOLUME_IN_LAYOUT(Local_200, "Ellipsoid1", 0, 756.2045f, 0.0f, 1035.028f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_200.f_212 = CREATE_VOLUME_IN_LAYOUT(Local_200, "Cylinder", 3, 2203.662f, 0.0f, 1595.216f, 0.0f, 20.0f, 0.0f, 1.0f, 1.0f, 1.0f);
	*(&Local_200 + 216) = { 1378.725f, 78.7847f, 826.4789f };
	*(&Local_200 + 216 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_200.f_240 = CREATE_POINT_IN_LAYOUT(Local_200, "blk_f_robbery_bad", 1378.725f, 78.7847f, 826.4789f, 0.0f, 0.0f, 0.0f);
	*(&Local_200 + 244) = { 1321.037f, 78.63029f, 801.6255f };
	*(&Local_200 + 244 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_200.f_268 = CREATE_POINT_IN_LAYOUT(Local_200, "blk_f_robbery_bad1", 1321.037f, 78.63029f, 801.6255f, 0.0f, 0.0f, 0.0f);
	*(&Local_200 + 272) = { 1276.778f, 79.33315f, 813.4847f };
	*(&Local_200 + 272 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_200.f_296 = CREATE_POINT_IN_LAYOUT(Local_200, "blk_f_robbery_bad2", 1276.778f, 79.33315f, 813.4847f, 0.0f, 0.0f, 0.0f);
	*(&Local_200 + 300) = { 1338.44f, 78.9436f, 763.5467f };
	*(&Local_200 + 300 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_200.f_324 = CREATE_POINT_IN_LAYOUT(Local_200, "blk_f_robbery_good", 1338.44f, 78.9436f, 763.5467f, 0.0f, 0.0f, 0.0f);
	*(&Local_200 + 328) = { 1356.502f, 78.56875f, 762.9736f };
	*(&Local_200 + 328 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_200.f_352 = CREATE_POINT_IN_LAYOUT(Local_200, "blk_f_robbery_good1", 1356.502f, 78.56875f, 762.9736f, 0.0f, 0.0f, 0.0f);
	*(&Local_200 + 356) = { 1346.351f, 79.93112f, 754.5385f };
	*(&Local_200 + 356 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_200.f_380 = CREATE_POINT_IN_LAYOUT(Local_200, "blk_f_robbery_good2", 1346.351f, 79.93112f, 754.5385f, 0.0f, 0.0f, 0.0f);
	*(&Local_200 + 384) = { 1350.543f, 79.83478f, 745.4222f };
	*(&Local_200 + 384 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_200.f_408 = CREATE_POINT_IN_LAYOUT(Local_200, "blk_f_robbery_loot", 1350.543f, 79.83478f, 745.4222f, 0.0f, 0.0f, 0.0f);
	*(&Local_200 + 412) = { 1352.766f, 79.83478f, 758.0829f };
	*(&Local_200 + 412 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_200.f_436 = CREATE_POINT_IN_LAYOUT(Local_200, "blk_f_robbery_bank", 1352.766f, 79.83478f, 758.0829f, 0.0f, 0.0f, 0.0f);
	*(&Local_200 + 440) = { 1340.136f, 79.62601f, 758.6826f };
	*(&Local_200 + 440 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_200.f_464 = CREATE_POINT_IN_LAYOUT(Local_200, "blk_f_robbery_bank1", 1340.136f, 79.62601f, 758.6826f, 0.0f, 0.0f, 0.0f);
	*(&Local_200 + 468) = { 1341.458f, 79.52139f, 755.6003f };
	*(&Local_200 + 468 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_200.f_492 = CREATE_POINT_IN_LAYOUT(Local_200, "blk_f_robbery_bank2", 1341.458f, 79.52139f, 755.6003f, 0.0f, 0.0f, 0.0f);
	*(&Local_200 + 496) = { 1345.523f, 79.42148f, 751.3326f };
	*(&Local_200 + 496 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_200.f_520 = CREATE_POINT_IN_LAYOUT(Local_200, "blk_f_robbery_bank3", 1345.523f, 79.42148f, 751.3326f, 0.0f, 0.0f, 0.0f);
	*(&Local_200 + 524) = { 1352.454f, 79.69425f, 752.5648f };
	*(&Local_200 + 524 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_200.f_548 = CREATE_POINT_IN_LAYOUT(Local_200, "blk_f_robbery_bank4", 1352.454f, 79.69425f, 752.5648f, 0.0f, 0.0f, 0.0f);
	*(&Local_200 + 552) = { 1338.687f, 80.87756f, 747.8107f };
	*(&Local_200 + 552 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_200.f_576 = CREATE_POINT_IN_LAYOUT(Local_200, "blk_f_robbery_bank5", 1338.687f, 80.87756f, 747.8107f, 0.0f, 0.0f, 0.0f);
	*(&Local_200 + 580) = { 278.2518f, 91.27737f, 923.1232f };
	*(&Local_200 + 580 + 12) = { 0.0f, -180.298f, 0.0f };
	Local_200.f_604 = CREATE_POINT_IN_LAYOUT(Local_200, "hangingTree_grt1", 278.2518f, 91.27737f, 923.1232f, 0.0f, -180.298f, 0.0f);
	*(&Local_200 + 608) = { 292.7893f, 90.91013f, 925.5304f };
	*(&Local_200 + 608 + 12) = { 0.0f, 84.85152f, 0.0f };
	Local_200.f_632 = CREATE_POINT_IN_LAYOUT(Local_200, "hangingHorses_grt1", 292.7893f, 90.91013f, 925.5304f, 0.0f, 84.85152f, 0.0f);
	*(&Local_200 + 636) = { 274.748f, 91.40363f, 926.775f };
	*(&Local_200 + 636 + 12) = { 0.0f, -90.22207f, 0.0f };
	Local_200.f_660 = CREATE_POINT_IN_LAYOUT(Local_200, "hangingGuard1_grt1", 274.748f, 91.40363f, 926.775f, 0.0f, -90.22207f, 0.0f);
	*(&Local_200 + 664) = { 287.4493f, 90.91797f, 925.2139f };
	*(&Local_200 + 664 + 12) = { 0.0f, 88.48517f, 0.0f };
	Local_200.f_688 = CREATE_POINT_IN_LAYOUT(Local_200, "hangingGuard2_grt1", 287.4493f, 90.91797f, 925.2139f, 0.0f, 88.48517f, 0.0f);
	*(&Local_200 + 692) = { 285.3504f, 90.55353f, 921.7806f };
	*(&Local_200 + 692 + 12) = { 0.0f, 101.5619f, 0.0f };
	Local_200.f_716 = CREATE_POINT_IN_LAYOUT(Local_200, "hangingGuard3_grt1", 285.3504f, 90.55353f, 921.7806f, 0.0f, 101.5619f, 0.0f);
	*(&Local_200 + 720) = { 278.021f, 91.31001f, 926.775f };
	*(&Local_200 + 720 + 12) = { 0.0f, 88.67081f, 0.0f };
	Local_200.f_744 = CREATE_POINT_IN_LAYOUT(Local_200, "hangingguy_grt1", 278.021f, 91.31001f, 926.775f, 0.0f, 88.67081f, 0.0f);
	*(&Local_200 + 748) = { 480.021f, 98.41798f, 1787.462f };
	*(&Local_200 + 748 + 12) = { 0.0f, 187.0551f, 0.0f };
	Local_200.f_772 = CREATE_POINT_IN_LAYOUT(Local_200, "hangingTree_grt2", 480.021f, 98.41798f, 1787.462f, 0.0f, 187.0551f, 0.0f);
	*(&Local_200 + 776) = { 480.0001f, 98.51614f, 1800.0f };
	*(&Local_200 + 776 + 12) = { 0.0f, 62.35506f, 0.0f };
	Local_200.f_800 = CREATE_POINT_IN_LAYOUT(Local_200, "hangingHorses_grt2", 480.0001f, 98.51614f, 1800.0f, 0.0f, 62.35506f, 0.0f);
	*(&Local_200 + 804) = { 478.0531f, 98.54673f, 1793.31f };
	*(&Local_200 + 804 + 12) = { 0.0f, -52.34931f, 0.0f };
	Local_200.f_828 = CREATE_POINT_IN_LAYOUT(Local_200, "hangingGuard1_grt2", 478.0531f, 98.54673f, 1793.31f, 0.0f, -52.34931f, 0.0f);
	*(&Local_200 + 832) = { 481.8415f, 98.38428f, 1796.0f };
	*(&Local_200 + 832 + 12) = { 0.0f, 45.57205f, 0.0f };
	Local_200.f_856 = CREATE_POINT_IN_LAYOUT(Local_200, "hangingGuard2_grt2", 481.8415f, 98.38428f, 1796.0f, 0.0f, 45.57205f, 0.0f);
	*(&Local_200 + 860) = { 475.5848f, 98.48624f, 1790.141f };
	*(&Local_200 + 860 + 12) = { 0.0f, -122.6327f, 0.0f };
	Local_200.f_884 = CREATE_POINT_IN_LAYOUT(Local_200, "hangingGuard3_grt2", 475.5848f, 98.48624f, 1790.141f, 0.0f, -122.6327f, 0.0f);
	*(&Local_200 + 888) = { 480.021f, 98.54673f, 1791.775f };
	*(&Local_200 + 888 + 12) = { 0.0f, 130.0659f, 0.0f };
	Local_200.f_912 = CREATE_POINT_IN_LAYOUT(Local_200, "hangingguy_grt2", 480.021f, 98.54673f, 1791.775f, 0.0f, 130.0659f, 0.0f);
	*(&Local_200 + 916) = { 798.021f, 77.34565f, 1709.07f };
	*(&Local_200 + 916 + 12) = { 0.0f, 167.0936f, 0.0f };
	Local_200.f_940 = CREATE_POINT_IN_LAYOUT(Local_200, "hangingTree_grt3", 798.021f, 77.34565f, 1709.07f, 0.0f, 167.0936f, 0.0f);
	*(&Local_200 + 944) = { 800.8351f, 77.49451f, 1708.022f };
	*(&Local_200 + 944 + 12) = { 0.0f, -83.21953f, 0.0f };
	Local_200.f_968 = CREATE_POINT_IN_LAYOUT(Local_200, "hangingHorses_grt3", 800.8351f, 77.49451f, 1708.022f, 0.0f, -83.21953f, 0.0f);
	*(&Local_200 + 972) = { 798.5142f, 77.3733f, 1715.225f };
	*(&Local_200 + 972 + 12) = { 0.0f, 10.99088f, 0.0f };
	Local_200.f_996 = CREATE_POINT_IN_LAYOUT(Local_200, "hangingGuard1_grt3", 798.5142f, 77.3733f, 1715.225f, 0.0f, 10.99088f, 0.0f);
	*(&Local_200 + 1000) = { 796.9107f, 77.41772f, 1717.648f };
	*(&Local_200 + 1000 + 12) = { 0.0f, -13.54039f, 0.0f };
	Local_200.f_1024 = CREATE_POINT_IN_LAYOUT(Local_200, "hangingGuard2_grt3", 796.9107f, 77.41772f, 1717.648f, 0.0f, -13.54039f, 0.0f);
	*(&Local_200 + 1028) = { 794.2851f, 77.34481f, 1717.344f };
	*(&Local_200 + 1028 + 12) = { 0.0f, -40.22768f, 0.0f };
	Local_200.f_1052 = CREATE_POINT_IN_LAYOUT(Local_200, "hangingGuard3_grt3", 794.2851f, 77.34481f, 1717.344f, 0.0f, -40.22768f, 0.0f);
	*(&Local_200 + 1056) = { 798.021f, 77.31161f, 1712.775f };
	*(&Local_200 + 1056 + 12) = { 0.0f, 191.6665f, 0.0f };
	Local_200.f_1080 = CREATE_POINT_IN_LAYOUT(Local_200, "hangingguy_grt3", 798.021f, 77.31161f, 1712.775f, 0.0f, 191.6665f, 0.0f);
	return 1;
}

void Function_119(int iParam0, int iParam1) //Position: 0x512C / 20780
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

void Function_120(var uParam0, int iParam1) //Position: 0x5175 / 20853
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_121() //Position: 0x5184 / 20868
{
	return;
}

bool Function_122() //Position: 0x518A / 20874
{
	return Function_123();
}

int Function_123() //Position: 0x5193 / 20883
{
	bool bVar0;
	
	Function_119(3, 3);
	bVar0 = bVar0;
	Function_129(&Local_25 + 4, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_129(&Local_25 + 4, "$/content/scripting/gringo/simplegringo/sleeping_wall_scripted", 1, 0);
	Function_129(&Local_25 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_129(&Local_25 + 4, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_129(&Local_25 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_129(&Local_25 + 4, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_129(&Local_25 + 4, "$/content/scripting/gringo/simplegringo/horse_tend", 1, 0);
	Function_129(&Local_25 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_129(&Local_25 + 4, "$/content/scripting/gringo/simplegringo/horse_stay", 1, 0);
	Function_129(&Local_25 + 4, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_129(&Local_25 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_129(&Local_25 + 4, "$/content/scripting/gringo/simplegringo/player_herb_goldencurrant", 1, 0);
	Function_129(&Local_25 + 4, "$/content/scripting/gringo/simplegringo/player_herb_prairiepoppy", 1, 0);
	Function_129(&Local_25 + 4, "$/content/scripting/gringo/simplegringo/sit_docks", 1, 0);
	Function_129(&Local_25 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_drink", 1, 0);
	Function_129(&Local_25 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_smoke", 1, 0);
	Function_129(&Local_25 + 4, "$/content/scripting/gringo/simplegringo/stand_yelling_down", 1, 0);
	Function_129(&Local_25 + 4, "$/content/scripting/gringo/simplegringo/dealer_and_customer", 1, 0);
	Function_129(&Local_25 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_129(&Local_25 + 4, "$/content/scripting/gringo/simplegringo/lean_fence_l_talking", 1, 0);
	Function_129(&Local_25 + 4, "$/content/scripting/gringo/simplegringo/lean_fence_back", 1, 0);
	if (!Function_124(&Local_25 + 4))
	{
		return 0;
	}
	Local_25 = FIND_NAMED_LAYOUT("GreatPlains_layout");
	if (!IS_LAYOUTREF_VALID(Local_25))
	{
		Local_25 = CREATE_LAYOUT("GreatPlains_layout");
	}
	Local_25.f_260 = CREATE_POINT_IN_LAYOUT(Local_25, "f_bhint", 150.9443f, 128.8552f, 1388.0f, 0.0f, 0.0f, 0.0f);
	Local_25.f_264 = CREATE_POINT_IN_LAYOUT(Local_25, "f_bhint1", 357.1578f, 79.43221f, 1985.98f, 0.0f, 0.0f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_25, "BkTR_stand_lookdistance_w_any1", "stand_lookdistance_w_any", 157.088f, 128.6531f, 1412.838f, 0.0f, -119.0785f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_25, "BkTR_sleeping_wall_scripted", "sleeping_wall_scripted", 145.9573f, 129.7917f, 1403.865f, 0.0f, 114.7033f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_25, "BkTR_Rand_Idle_Sit_Ground2", "Rand_Idle_Sit_Ground", 149.7698f, 129.4657f, 1400.383f, 0.0f, -57.51074f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_25, "BkTR_Pee", "Pee", 149.4602f, 128.2654f, 1383.105f, 0.0f, -301.9947f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_25, "BkTR_rand_idle_stand2", "rand_idle_stand", 152.4598f, 129.316f, 1399.699f, 0.0f, 105.5583f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_25, "BkTR_stand_guntricks_e_any1", "stand_guntricks_e_any", 149.0702f, 129.0827f, 1396.536f, 0.0f, -138.0183f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_25, "BkTR_horse_tend6", "horse_tend", 151.546f, 129.495f, 1404.585f, 0.0f, -139.3574f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_25, "BkTR_horse_tend7", "horse_tend", 149.989f, 128.875f, 1392.185f, 0.0f, -117.0606f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_25, "BkTR_horse_tend8w", "horse_tend", 151.0038f, 128.875f, 1390.909f, 0.0f, -118.8501f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_25, "BkTR_smoking_stand2", "smoking_stand", 158.876f, 129.474f, 1395.151f, 0.0f, 77.17844f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_25, "BkTR_Rand_Idle_Sit_Ground3", "Rand_Idle_Sit_Ground", 148.7914f, 127.7514f, 1379.212f, 0.0f, -299.6739f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_25, "BkTR_horse_stay", "horse_stay", 155.281f, 129.15f, 1403.048f, 0.0f, 60.28025f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_25, "BkTR_look_distance_binocs", "look_distance_binocs", 138.424f, 127.959f, 1391.745f, 0.0f, 5.710794f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_25.f_268 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Rand_Idle_NearWall", "Rand_Idle_NearWall", 146.8251f, 128.8514f, 1392.798f, 0.0f, 88.73585f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_25.f_268), 0);
	Local_25.f_272 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_goldenCurrant", "Player_Herb_goldenCurrant", 695.1923f, 90.55561f, 1076f, 0.0f, 0.0f, 0.0f);
	Local_25.f_276 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_goldenCurrant1", "Player_Herb_goldenCurrant", 560.0f, 94.36865f, 1012f, 0.0f, 0.0f, 0.0f);
	Local_25.f_280 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_goldenCurrant10", "Player_Herb_goldenCurrant", -204.0f, 129.5059f, 1304.0f, 0.0f, 0.0f, 0.0f);
	Local_25.f_284 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_goldenCurrant11", "Player_Herb_goldenCurrant", -36.0f, 112.0246f, 1284.0f, 0.0f, 0.0f, 0.0f);
	Local_25.f_288 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_goldenCurrant12", "Player_Herb_goldenCurrant", 31.99994f, 118.4627f, 1324.0f, 0.0f, 0.0f, 0.0f);
	Local_25.f_292 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_goldenCurrant14", "Player_Herb_goldenCurrant", -10.17844f, 126.9068f, 1437.727f, 0.0f, 0.0f, 0.0f);
	Local_25.f_296 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_goldenCurrant15", "Player_Herb_goldenCurrant", -92.0f, 119.2099f, 1474.262f, 0.0f, 0.0f, 0.0f);
	Local_25.f_300 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_goldenCurrant16", "Player_Herb_goldenCurrant", 20.94169f, 130.5098f, 1452.534f, 0.0f, 0.0f, 0.0f);
	Local_25.f_304 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_goldenCurrant17", "Player_Herb_goldenCurrant", 95.99994f, 127.498f, 1416f, 0.0f, 0.0f, 0.0f);
	Local_25.f_308 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_goldenCurrant18", "Player_Herb_goldenCurrant", 136.0f, 129.5059f, 1440f, 0.0f, 0.0f, 0.0f);
	Local_25.f_312 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_goldenCurrant19", "Player_Herb_goldenCurrant", -20.00006f, 123.4811f, 1520.009f, 0.0f, 0.0f, 0.0f);
	Local_25.f_316 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_goldenCurrant2", "Player_Herb_goldenCurrant", 467.9999f, 98.56538f, 1058.898f, 0.0f, 0.0f, 0.0f);
	Local_25.f_320 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_goldenCurrant20", "Player_Herb_goldenCurrant", 99.99988f, 122.6617f, 1501.576f, 0.0f, 0.0f, 0.0f);
	Local_25.f_324 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_goldenCurrant21", "Player_Herb_goldenCurrant", 28.0f, 124.3337f, 1572.0f, 0.0f, 0.0f, 0.0f);
	Local_25.f_328 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_goldenCurrant22", "Player_Herb_goldenCurrant", 80.00003f, 124.834f, 1596.0f, 0.0f, 0.0f, 0.0f);
	Local_25.f_332 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_goldenCurrant23", "Player_Herb_goldenCurrant", 8.0f, 116.4548f, 1636f, 0.0f, 0.0f, 0.0f);
	Local_25.f_336 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_goldenCurrant24", "Player_Herb_goldenCurrant", 120f, 123.8186f, 1664.0f, 0.0f, 0.0f, 0.0f);
	Local_25.f_340 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_goldenCurrant25", "Player_Herb_goldenCurrant", 8.0f, 115.2069f, 1704f, 0.0f, 0.0f, 0.0f);
	Local_25.f_344 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_goldenCurrant26", "Player_Herb_goldenCurrant", 80.0f, 117.9192f, 1748.0f, 0.0f, 0.0f, 0.0f);
	Local_25.f_348 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_goldenCurrant27", "Player_Herb_goldenCurrant", 49.58045f, 99.23539f, 1856.0f, 0.0f, 0.0f, 0.0f);
	Local_25.f_352 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_goldenCurrant28", "Player_Herb_goldenCurrant", 112f, 84.60585f, 1929.137f, 0.0f, 0.0f, 0.0f);
	Local_25.f_356 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_goldenCurrant29", "Player_Herb_goldenCurrant", 178.3197f, 88.87658f, 1971.804f, 0.0f, 0.0f, 0.0f);
	Local_25.f_360 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_goldenCurrant3", "Player_Herb_goldenCurrant", 256f, 101.3961f, 1012f, 0.0f, 0.0f, 0.0f);
	Local_25.f_364 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_goldenCurrant30", "Player_Herb_goldenCurrant", 204f, 91.35681f, 1936.0f, 0.0f, 0.0f, 0.0f);
	Local_25.f_368 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_goldenCurrant31", "Player_Herb_goldenCurrant", 228f, 105.4117f, 1852.0f, 0.0f, 0.0f, 0.0f);
	Local_25.f_372 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_goldenCurrant32", "Player_Herb_goldenCurrant", 380f, 97.38037f, 1820.0f, 0.0f, 0.0f, 0.0f);
	Local_25.f_376 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_goldenCurrant33", "Player_Herb_goldenCurrant", 411.801f, 94.91784f, 1867.155f, 0.0f, 0.0f, 0.0f);
	Local_25.f_380 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_goldenCurrant34", "Player_Herb_goldenCurrant", 528.3188f, 97.83836f, 1845.436f, 0.0f, 0.0f, 0.0f);
	Local_25.f_384 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_goldenCurrant35", "Player_Herb_goldenCurrant", 616.0f, 86.33722f, 1956f, 0.0f, 0.0f, 0.0f);
	Local_25.f_388 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_goldenCurrant36", "Player_Herb_goldenCurrant", 733.7625f, 85.77563f, 1913.762f, 0.0f, 0.0f, 0.0f);
	Local_25.f_392 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_goldenCurrant37", "Player_Herb_goldenCurrant", 656.0001f, 99.38818f, 1832.0f, 0.0f, 0.0f, 0.0f);
	Local_25.f_396 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_goldenCurrant38", "Player_Herb_goldenCurrant", 624.0f, 107.4196f, 1744.0f, 0.0f, 0.0f, 0.0f);
	Local_25.f_400 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_goldenCurrant4", "Player_Herb_goldenCurrant", 123.8889f, 110.9025f, 1011.628f, 0.0f, 0.0f, 0.0f);
	Local_25.f_404 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_goldenCurrant40", "Player_Herb_goldenCurrant", 574.8133f, 101.0377f, 1796.16f, 0.0f, 0.0f, 0.0f);
	Local_25.f_408 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_goldenCurrant41", "Player_Herb_goldenCurrant", 747.9999f, 89.349f, 1884.0f, 0.0f, 0.0f, 0.0f);
	Local_25.f_412 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_goldenCurrant42", "Player_Herb_goldenCurrant", 535.9999f, 108.4235f, 1725.181f, 0.0f, 0.0f, 0.0f);
	Local_25.f_416 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_goldenCurrant43", "Player_Herb_goldenCurrant", 736.0001f, 95.3725f, 1636.0f, 0.0f, 0.0f, 0.0f);
	Local_25.f_420 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_goldenCurrant44", "Player_Herb_goldenCurrant", 660.0f, 102.949f, 1776.0f, 0.0f, 0.0f, 0.0f);
	Local_25.f_424 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_goldenCurrant45", "Player_Herb_goldenCurrant", 432f, 110.4313f, 1652.316f, 0.0f, 0.0f, 0.0f);
	Local_25.f_428 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_goldenCurrant46", "Player_Herb_goldenCurrant", 616.0f, 102.883f, 1632.0f, 0.0f, 0.0f, 0.0f);
	Local_25.f_432 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_goldenCurrant47", "Player_Herb_goldenCurrant", 839.9999f, 86.18433f, 1608.0f, 0.0f, 0.0f, 0.0f);
	Local_25.f_436 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_goldenCurrant48", "Player_Herb_goldenCurrant", 799.9999f, 77.30188f, 1720.0f, 0.0f, 0.0f, 0.0f);
	Local_25.f_440 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_goldenCurrant49", "Player_Herb_goldenCurrant", 599.9999f, 107.4196f, 1736.0f, 0.0f, 0.0f, 0.0f);
	Local_25.f_444 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_goldenCurrant5", "Player_Herb_goldenCurrant", 128.0f, 111.4353f, 1088.0f, 0.0f, 0.0f, 0.0f);
	Local_25.f_448 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_goldenCurrant50", "Player_Herb_goldenCurrant", 588.0f, 102.4792f, 1651.33f, 0.0f, 0.0f, 0.0f);
	Local_25.f_452 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_goldenCurrant6", "Player_Herb_goldenCurrant", 240.0001f, 108.4235f, 1080.0f, 0.0f, 0.0f, 0.0f);
	Local_25.f_456 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_goldenCurrant7", "Player_Herb_goldenCurrant", -41.29242f, 111.261f, 1197.522f, 0.0f, 0.0f, 0.0f);
	Local_25.f_460 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_goldenCurrant8", "Player_Herb_goldenCurrant", 50.69914f, 111.0679f, 1212.378f, 0.0f, 0.0f, 0.0f);
	Local_25.f_464 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_goldenCurrant9", "Player_Herb_goldenCurrant", -104f, 113.2009f, 1240.0f, 0.0f, 0.0f, 0.0f);
	Local_25.f_468 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_prairiePoppy", "Player_Herb_prairiePoppy", 152.8835f, 108.4235f, 1171.232f, 0.0f, 0.0f, 0.0f);
	Local_25.f_472 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_prairiePoppy1", "Player_Herb_prairiePoppy", 288.0f, 107.363f, 1176f, 0.0f, 0.0f, 0.0f);
	Local_25.f_476 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_prairiePoppy10", "Player_Herb_prairiePoppy", 100.0052f, 121.8024f, 1347.977f, 0.0f, 0.0f, 0.0f);
	Local_25.f_480 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_prairiePoppy11", "Player_Herb_prairiePoppy", 99.65958f, 124.3904f, 1376.273f, 0.0f, 0.0f, 0.0f);
	Local_25.f_484 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_prairiePoppy12", "Player_Herb_prairiePoppy", 166.9878f, 129.4901f, 1388.083f, 0.0f, 0.0f, 0.0f);
	Local_25.f_488 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_prairiePoppy13", "Player_Herb_prairiePoppy", 235.9999f, 124.7943f, 1332f, 0.0f, 0.0f, 0.0f);
	Local_25.f_492 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_prairiePoppy14", "Player_Herb_prairiePoppy", 281.4927f, 119.3126f, 1350.6f, 0.0f, 0.0f, 0.0f);
	Local_25.f_496 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_prairiePoppy15", "Player_Herb_prairiePoppy", 227.9546f, 125.0979f, 1361.898f, 0.0f, 0.0f, 0.0f);
	Local_25.f_500 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_prairiePoppy16", "Player_Herb_prairiePoppy", 153.7697f, 128.0826f, 1438.607f, 0.0f, 0.0f, 0.0f);
	Local_25.f_504 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_prairiePoppy17", "Player_Herb_prairiePoppy", 217.1763f, 124.4003f, 1413.258f, 0.0f, 0.0f, 0.0f);
	Local_25.f_508 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_prairiePoppy18", "Player_Herb_prairiePoppy", 117.3568f, 125.5178f, 1474.203f, 0.0f, 0.0f, 0.0f);
	Local_25.f_512 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_prairiePoppy19", "Player_Herb_prairiePoppy", 240.9872f, 118.4365f, 1471.016f, 0.0f, 0.0f, 0.0f);
	Local_25.f_516 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_prairiePoppy2", "Player_Herb_prairiePoppy", 360.0f, 103.381f, 1160f, 0.0f, 0.0f, 0.0f);
	Local_25.f_520 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_prairiePoppy20", "Player_Herb_prairiePoppy", 337.9934f, 116.4312f, 1469.902f, 0.0f, 0.0f, 0.0f);
	Local_25.f_524 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_prairiePoppy21", "Player_Herb_prairiePoppy", 309.7348f, 115.2243f, 1474.274f, 0.0f, 0.0f, 0.0f);
	Local_25.f_528 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_prairiePoppy22", "Player_Herb_prairiePoppy", 415.5941f, 106.8482f, 1523.904f, 0.0f, 0.0f, 0.0f);
	Local_25.f_532 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_prairiePoppy23", "Player_Herb_prairiePoppy", 376.0001f, 110.4313f, 1528f, 0.0f, 0.0f, 0.0f);
	Local_25.f_536 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_prairiePoppy24", "Player_Herb_prairiePoppy", 343.8192f, 111.4151f, 1524.0f, 0.0f, 0.0f, 0.0f);
	Local_25.f_540 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_prairiePoppy25", "Player_Herb_prairiePoppy", 287.9999f, 113.4431f, 1520.0f, 0.0f, 0.0f, 0.0f);
	Local_25.f_544 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_prairiePoppy26", "Player_Herb_prairiePoppy", 247.9999f, 114.447f, 1524.0f, 0.0f, 0.0f, 0.0f);
	Local_25.f_548 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_prairiePoppy27", "Player_Herb_prairiePoppy", 248f, 114.42f, 1544.0f, 0.0f, 0.0f, 0.0f);
	Local_25.f_552 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_prairiePoppy28", "Player_Herb_prairiePoppy", 132.0f, 121.4745f, 1536f, 0.0f, 0.0f, 0.0f);
	Local_25.f_556 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_prairiePoppy29", "Player_Herb_prairiePoppy", 144.0f, 123.4824f, 1592.555f, 0.0f, 0.0f, 0.0f);
	Local_25.f_560 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_prairiePoppy3", "Player_Herb_prairiePoppy", 427.9999f, 107.4196f, 1288f, 0.0f, 0.0f, 0.0f);
	Local_25.f_564 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_prairiePoppy30", "Player_Herb_prairiePoppy", 128.8151f, 124.4632f, 1636f, 0.0f, 0.0f, 0.0f);
	Local_25.f_568 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_prairiePoppy31", "Player_Herb_prairiePoppy", 240f, 115.4509f, 1585.015f, 0.0f, 0.0f, 0.0f);
	Local_25.f_572 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_prairiePoppy32", "Player_Herb_prairiePoppy", 271.9999f, 115.4509f, 1616.957f, 0.0f, 0.0f, 0.0f);
	Local_25.f_576 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_prairiePoppy33", "Player_Herb_prairiePoppy", 348.0647f, 110.468f, 1682.394f, 0.0f, 0.0f, 0.0f);
	Local_25.f_580 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_prairiePoppy34", "Player_Herb_prairiePoppy", 416f, 108.4235f, 1624.415f, 0.0f, 0.0f, 0.0f);
	Local_25.f_584 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_prairiePoppy35", "Player_Herb_prairiePoppy", 419.9999f, 108.3964f, 1593.715f, 0.0f, 0.0f, 0.0f);
	Local_25.f_588 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_prairiePoppy36", "Player_Herb_prairiePoppy", 256.9475f, 117.0458f, 1464.641f, 0.0f, 0.0f, 0.0f);
	Local_25.f_592 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_prairiePoppy37", "Player_Herb_prairiePoppy", 227.9999f, 124.4671f, 1412f, 0.0f, 0.0f, 0.0f);
	Local_25.f_596 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_prairiePoppy38", "Player_Herb_prairiePoppy", 343.9999f, 118.4272f, 1304.0f, 0.0f, 0.0f, 0.0f);
	Local_25.f_600 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_prairiePoppy39", "Player_Herb_prairiePoppy", 423.9999f, 108.4087f, 1276.0f, 0.0f, 0.0f, 0.0f);
	Local_25.f_604 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_prairiePoppy4", "Player_Herb_prairiePoppy", 359.3031f, 116.448f, 1304.0f, 0.0f, 0.0f, 0.0f);
	Local_25.f_608 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_prairiePoppy40", "Player_Herb_prairiePoppy", 344.8217f, 113.2369f, 1395.043f, 0.0f, 0.0f, 0.0f);
	Local_25.f_612 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_prairiePoppy41", "Player_Herb_prairiePoppy", 223.2836f, 120.2737f, 1452.303f, 0.0f, 0.0f, 0.0f);
	Local_25.f_616 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_prairiePoppy42", "Player_Herb_prairiePoppy", 315.9999f, 113.4431f, 1504.0f, 0.0f, 0.0f, 0.0f);
	Local_25.f_620 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_prairiePoppy43", "Player_Herb_prairiePoppy", 443.0988f, 107.2659f, 1570.524f, 0.0f, 0.0f, 0.0f);
	Local_25.f_624 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_prairiePoppy44", "Player_Herb_prairiePoppy", 426.5165f, 109.3572f, 1618.344f, 0.0f, 0.0f, 0.0f);
	Local_25.f_628 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_prairiePoppy45", "Player_Herb_prairiePoppy", 300f, 118.4304f, 1620.0f, 0.0f, 0.0f, 0.0f);
	Local_25.f_632 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_prairiePoppy46", "Player_Herb_prairiePoppy", 279.6821f, 116.2279f, 1695.576f, 0.0f, 0.0f, 0.0f);
	Local_25.f_636 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_prairiePoppy47", "Player_Herb_prairiePoppy", 175.9876f, 118.7702f, 1556.077f, 0.0f, 0.0f, 0.0f);
	Local_25.f_640 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_prairiePoppy48", "Player_Herb_prairiePoppy", 370.0059f, 108.4235f, 1710.173f, 0.0f, 0.0f, 0.0f);
	Local_25.f_644 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_prairiePoppy49", "Player_Herb_prairiePoppy", 333.5171f, 98.36597f, 1796.0f, 0.0f, 0.0f, 0.0f);
	Local_25.f_648 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_prairiePoppy5", "Player_Herb_prairiePoppy", 454.1075f, 104.3669f, 1374.861f, 0.0f, 0.0f, 0.0f);
	Local_25.f_652 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_prairiePoppy50", "Player_Herb_prairiePoppy", 225.4733f, 109.4706f, 1801.168f, 0.0f, 0.0f, 0.0f);
	Local_25.f_656 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_prairiePoppy6", "Player_Herb_prairiePoppy", 431.9182f, 111.4168f, 1424.007f, 0.0f, 0.0f, 0.0f);
	Local_25.f_660 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_prairiePoppy7", "Player_Herb_prairiePoppy", 204.0399f, 125.4902f, 1309.547f, 0.0f, 0.0f, 0.0f);
	Local_25.f_664 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_prairiePoppy8", "Player_Herb_prairiePoppy", 203.9303f, 117.4588f, 1235.954f, 0.0f, 0.0f, 0.0f);
	Local_25.f_668 = CREATE_GRINGO_IN_LAYOUT(Local_25, "Player_Herb_prairiePoppy9", "Player_Herb_prairiePoppy", 141.0508f, 121.4022f, 1317.086f, 0.0f, 0.0f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_25, "wrk_Pee3", "Pee", 362.1963f, 78.70888f, 1984.005f, 0.0f, -43.27293f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_25, "wrk_Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", 356.695f, 73.3355f, 1980.807f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_25, "wrk_rand_idle_stand", "rand_idle_stand", 338.2788f, 74.5917f, 1942.472f, 0.0f, -164.8241f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_25, "wrk_rand_idle_stand2", "rand_idle_stand", 359.0939f, 78.39108f, 1991.795f, 0.0f, -161.0478f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_25, "wrk_rand_idle_stand3", "rand_idle_stand", 351.7272f, 76.34866f, 1986.588f, 0.0f, 68.45935f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_25, "wrk_sit_docks3", "nsit_docks", 361.7251f, 73.50711f, 1973.968f, 0.0f, -118.1669f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_25, "wrk_Sit_Ground_Drink", "Sit_Ground_Drink", 353.6501f, 73.88201f, 1976.827f, 0.0f, -126.9591f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_25, "wrk_Sit_Ground_Drink1", "Sit_Ground_Drink", 352.9845f, 76.39187f, 1984.406f, 0.0f, 52.31681f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_25, "wrk_sit_ground_smoke", "sit_ground_smoke", 357.5717f, 76.19849f, 1981.747f, 0.0f, -29.00372f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_25, "wrk_sit_ground_smoke2", "sit_ground_smoke", 335.3785f, 74.60016f, 1940.426f, 0.0f, -21.86767f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_25, "wrk_sit_ground_smoke3", "sit_ground_smoke", 369.985f, 73.58916f, 1944.503f, 0.0f, -25.18101f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_25, "wrk_stand_lookdistance_w_any", "stand_lookdistance_w_any", 354.8198f, 79.43221f, 1982.737f, 0.0f, 62.95712f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_25, "wrk_stand_lookdistance_w_any1", "stand_lookdistance_w_any", 346.8859f, 74.00498f, 1984.04f, 0.0f, 129.3219f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_25, "wrk_stand_yelling_down", "stand_yelling_down", 355.6973f, 79.401f, 1982.143f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_25, "wrk_dealer_and_customer2", "dealer_and_customer", 355.8004f, 76.38882f, 1980.956f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_25.f_672 = CREATE_GRINGO_IN_LAYOUT(Local_25, "wrk_look_out_window_L", "look_out_window_L", 330.4944f, 74.60293f, 1937.513f, 0.0f, 107.1152f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_25.f_672), 0);
	Local_25.f_676 = CREATE_GRINGO_IN_LAYOUT(Local_25, "wrk_Rand_Idle_NearWall2", "Rand_Idle_NearWall", 331.1541f, 74.39916f, 1933.66f, 0.0f, 66.63307f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_25.f_676), 0);
	Local_25.f_680 = CREATE_GRINGO_IN_LAYOUT(Local_25, "wrk_lean_fence_L_talking", "lean_fence_L_talking", 334.3096f, 74.59482f, 1942.392f, 0.0f, 153.1973f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_25.f_680), 0);
	Local_25.f_684 = CREATE_GRINGO_IN_LAYOUT(Local_25, "wrk_Rand_Idle_NearWall1", "Rand_Idle_NearWall", 371.9703f, 73.48869f, 1937.603f, 0.0f, -27.3343f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_25.f_684), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_25, "wrk_sit_docks4", "nsit_docks", 375.2437f, 73.48671f, 1938.945f, 0.0f, -116.2048f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_25, "wrk_Sit_Ground_Drink2", "Sit_Ground_Drink", 367.3382f, 73.4931f, 1936.028f, 0.0f, -113.1597f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_25.f_688 = CREATE_GRINGO_IN_LAYOUT(Local_25, "wrk_horse_stay", "horse_stay", 383.6137f, 73.36394f, 1917.677f, 0.0f, -128.7536f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_25.f_688), 0);
	Local_25.f_692 = CREATE_GRINGO_IN_LAYOUT(Local_25, "wrk_horse_stay1", "horse_stay", 382.3799f, 73.32485f, 1919.193f, 0.0f, -113.8612f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_25.f_692), 0);
	Local_25.f_696 = CREATE_GRINGO_IN_LAYOUT(Local_25, "wrk_lean_fence_back", "lean_fence_back", 377.7558f, 73.47366f, 1924.431f, 0.0f, -117.9854f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_25.f_696), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_25, "wrk_rand_idle_stand4", "rand_idle_stand", 371.8394f, 73.46868f, 1936.036f, 0.0f, -23.76552f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	return 1;
}

bool Function_124(int iParam0) //Position: 0x859F / 34207
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_128();
	iVar1 = 0;
	if (!Function_23(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_127(iParam0[iVar03], 8);
		}
		else if (Function_126())
		{
			iVar1 = 1;
			Function_127(iParam0[iVar03], 8);
		}
		Function_127(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_23(iParam0[iVar03], 4))
		{
			if (!Function_23(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_23(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_23(iParam0[03], 8) || iVar1));
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
				Function_127(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_23(iParam0[iVar03], 4))
		{
			if (!Function_23(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_127(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_127(iParam0[iVar03], 2);
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
							Function_127(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_127(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_127(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_127(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_127(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_127(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_127(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_127(iParam0[iVar03], 2);
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
	Function_125();
	return 1;
}

void Function_125() //Position: 0x891A / 35098
{
	if (!Function_63(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_126() //Position: 0x895A / 35162
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

void Function_127(var uParam0, int iParam1) //Position: 0x8985 / 35205
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_128() //Position: 0x8996 / 35222
{
	if (!Function_63(128))
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

var Function_129(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x89D8 / 35288
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_130(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_127(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_130(var uParam0, int iParam1, int iParam2) //Position: 0x8A10 / 35344
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_23(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_127(uParam0[iVar03], 4);
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

bool Function_131() //Position: 0x8AD4 / 35540
{
	return Function_132();
}

int Function_132() //Position: 0x8ADD / 35549
{
	var uVar0;
	
	Function_119(3, 3);
	uVar0 = uVar0;
	Function_129(&Local_6 + 4, "p_uti_cover2x1x", 0, 0);
	Function_129(&Local_6 + 4, "p_uti_cover1x2x", 0, 0);
	Function_129(&Local_6 + 4, "p_uti_cover1x1x", 0, 0);
	if (!Function_124(&Local_6 + 4))
	{
		return 0;
	}
	Local_6 = FIND_NAMED_LAYOUT("GreatPlains_layout");
	if (!IS_LAYOUTREF_VALID(Local_6))
	{
		Local_6 = CREATE_LAYOUT("GreatPlains_layout");
	}
	*(&Local_6 + 44) = { 630.629f, 98.168f, 1815.987f };
	*(&Local_6 + 44 + 12) = { 0.0f, -107.0722f, 0.0f };
	Local_6.f_68 = CREATE_POINT_IN_LAYOUT(Local_6, "Temp_CarPos", 630.629f, 98.168f, 1815.987f, 0.0f, -107.0722f, 0.0f);
	Function_133(Local_6, "cover2x1x0", "p_uti_cover2x1x", 204.0001f, 123.4465f, 1639.79f, -177.334f, -108.671f, 177.5641f, 1);
	Function_133(Local_6, "cover2x1x1", "p_uti_cover2x1x", 238.4106f, 117.4588f, 1638.411f, -179.1112f, -163.7204f, 179.8408f, 1);
	Function_133(Local_6, "cover2x1x2", "p_uti_cover2x1x", 183.1441f, 124.4862f, 1647.144f, -175.7983f, -101.7259f, 175.9756f, 1);
	Function_133(Local_6, "cover2x1x3", "p_uti_cover2x1x", 140.4274f, 121.4745f, 1671.573f, -181.8654f, -62.77824f, 181.7489f, 1);
	Function_133(Local_6, "cover2x1x4", "p_uti_cover2x1x", 214.0656f, 123.2074f, 1651.26f, -178.8936f, -140.4584f, 179.3855f, 1);
	Function_133(Local_6, "cover2x1x5", "p_uti_cover2x1x", 127.9999f, 121.1553f, 1681.523f, -183.723f, -76.74288f, 183.714f, 1);
	Function_133(Local_6, "cover2x1x6", "p_uti_cover2x1x", 122.7811f, 123.4847f, 1671.714f, -183.723f, -76.74288f, 183.714f, 1);
	Function_133(Local_6, "cover2x1x7", "p_uti_cover2x1x", 110.9311f, 117.4152f, 1710.931f, -358.6223f, -51.73307f, 359.0082f, 1);
	Function_133(Local_6, "cover2x1x8", "p_uti_cover2x1x", 102.1142f, 117.0503f, 1708.001f, -357.9777f, -65.04119f, 358.2564f, 1);
	Function_133(Local_6, "cover2x1x9", "p_uti_cover2x1x", 27.02832f, 115.3725f, 1706.619f, -357.9777f, -65.04119f, 358.2564f, 1);
	Function_133(Local_6, "cover2x1x10", "p_uti_cover2x1x", 17.18051f, 115.5175f, 1716.66f, -357.9777f, -65.04119f, 358.2564f, 1);
	Function_133(Local_6, "cover2x1x11", "p_uti_cover2x1x", -5.595703f, 113.9409f, 1690.402f, -184.2235f, -78.33517f, 184.2265f, 1);
	Function_133(Local_6, "cover2x1x12", "p_uti_cover2x1x", -0.61668f, 116.3239f, 1720.784f, -355.7089f, -78.52127f, 355.8843f, 1);
	Function_133(Local_6, "cover2x1x13", "p_uti_cover2x1x", 4.000046f, 114.5231f, 1682.438f, -182.2104f, -67.28971f, 182.1291f, 1);
	Function_133(Local_6, "cover2x1x14", "p_uti_cover2x1x", 174.6896f, 125.4902f, 1638.69f, -159.3823f, -92.42357f, 159.4892f, 1);
	Function_133(Local_6, "cover2x1x15", "p_uti_cover2x1x", 196.7614f, 124.4862f, 1664.0f, -178.8384f, -137.2664f, 179.3017f, 1);
	Function_133(Local_6, "cover2x1x16", "p_uti_cover2x1x", 219.1994f, 120.7291f, 1630.848f, -178.8945f, -140.5174f, 179.387f, 1);
	Function_133(Local_6, "cover2x1x17", "p_uti_cover2x1x", 210.1214f, 121.4745f, 1624.0f, -178.159f, -117.6124f, 178.4585f, 1);
	Function_133(Local_6, "cover2x1x18", "p_uti_cover2x1x", 611.8726f, 99.22272f, 1804.307f, 66.32018f, 76.14228f, 66.93644f, 1);
	Function_133(Local_6, "cover2x1x19", "p_uti_cover2x1x", 611.6384f, 97.28822f, 1821.858f, -44.67248f, -110.6125f, 44.03279f, 1);
	Function_133(Local_6, "cover2x1x20", "p_uti_cover2x1x", 623.4265f, 99.05706f, 1808.646f, -24.61025f, -116.6806f, 23.7426f, 1);
	Function_133(Local_6, "cover2x1x21", "p_uti_cover2x1x", 634.2639f, 99.41155f, 1806.225f, -60.33696f, 98.28915f, -62.91229f, 1);
	Local_6.f_72 = Function_133(Local_6, "cover1x2x0", "p_uti_cover1x2x", 621.9322f, 97.37455f, 1823.587f, 8.674876f, -9.379588f, -0.5916787f, 1);
	Function_133(Local_6, "cover2x1x22", "p_uti_cover2x1x", 634.5735f, 97.88709f, 1824.994f, -23.33749f, -108.0665f, 26.44703f, 1);
	Function_133(Local_6, "cover1x1x0", "p_uti_cover1x1x", 617.8123f, 99.60641f, 1803.961f, 18.33718f, 51.66286f, 16.92836f, 1);
	return 1;
}

var Function_133(var uParam0, var uParam1, var uParam2, vector3 vParam3, vector3 vParam6, int iParam9) //Position: 0x9290 / 37520
{
	uParam0 = uParam0;
	uParam1 = uParam1;
	uParam2 = uParam2;
	vParam3 = { StackVal, StackVal, vParam3 };
	vParam6 = { StackVal, StackVal, vParam6 };
	iParam9 = iParam9;
	return "";
}

void Function_134() //Position: 0x92BA / 37562
{
	Function_135();
	REQUEST_STRING_TABLE("graveyards");
	return;
}

void Function_135() //Position: 0x92D3 / 37587
{
	int iVar0;
	
	SET_CURRENT_GRAVESTONE_SECTOR("blk_cemetary01Props01x");
	Global_26282[24] = 0;
	Global_26282[24].f_4 = 0;
	iVar0 = 0;
	while (iVar0 <= 34)
	{
		Function_83(&(Global_26282[24]), iVar0);
		iVar0++;
	}
	return;
}

void Function_136(bool bParam0, int iParam1) //Position: 0x9323 / 37667
{
	if (!Function_63(128))
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

