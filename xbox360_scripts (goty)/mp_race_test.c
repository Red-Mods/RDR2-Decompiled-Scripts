//Decompiled with MagicRDR v1.0
//Function Count : 65
//Statics Count : 754
//Natives Count : 82
//Parameters Count : 0

#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	int iLocal_11 = 0;
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
	var uLocal_27 = 11;
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
	var uLocal_49 = 11;
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
	int iLocal_67 = 0;
	float fLocal_68 = 0.0f;
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
	var uLocal_113 = 4;
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
	var uLocal_153 = 4;
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
	var uLocal_175 = -1;
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
	var uLocal_196 = 27;
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
	struct<1825> Local_264 = { 0, 1, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_11 = 0;
	iLocal_67 = 0;
	fLocal_68 = 1.0f;
	Unknown_Function();
	if (StackVal)
	{
		Unknown_Function();
	}
	else
	{
		Function_64();
		ENABLE_CHILD_SECTOR("arm_flags01x");
		Function_63(0, 1);
		Function_63(1, 1);
		Function_62(0, TO_FLOAT(2));
		Function_61(1, 1);
		Function_60(Local_264);
		Function_58(1);
		Function_57(8);
		Function_55(0, 0);
		while (!IS_EXITFLAG_SET())
		{
			Function_11();
			WAIT(false);
		}
		if (Function_64() != 4294967295)
		{
			Function_6(1, 0, 0);
		}
	}
	DISABLE_CHILD_SECTOR("arm_flags01x");
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x93 / 147
{
	Function_2(&Local_264 + 4);
	RELEASE_LAYOUT_REF(Local_264);
	return;
}

void Function_2(int iParam0) //Position: 0xA7 / 167
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_3(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_3(var uParam0, int iParam1) //Position: 0xCD / 205
{
	if (Function_5(uParam0[iParam13], 4))
	{
		if (Function_5(uParam0[iParam13], 1))
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
			Function_4(uParam0[iParam13], 1);
			Function_4(uParam0[iParam13], 2);
			Function_4(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_4(var uParam0, int iParam1) //Position: 0x1FB / 507
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_5(var uParam0, int iParam1) //Position: 0x215 / 533
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_6(int iParam0, int iParam1, int iParam2) //Position: 0x232 / 562
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
		Function_7(Global_16524, bVar0, 1);
	}
	return;
}

void Function_7(int iParam0, bool bParam1, bool bParam2) //Position: 0x318 / 792
{
	int iVar0;
	
	Function_10(iParam0);
	Function_9(bParam1);
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
	Function_8();
	Global_16524.f_40 = StackVal;
	Global_16524.f_44 = GET_TIME_OF_DAY();
	Global_16524.f_48 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_16524 + 48, 0, false, GET_MINUTES_FROM_TIME_OF_DAY(bParam1), 0);
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

void Function_8() //Position: 0x491 / 1169
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_9(bool bParam0) //Position: 0x49D / 1181
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

void Function_10(int iParam0) //Position: 0x4E3 / 1251
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

void Function_11() //Position: 0x529 / 1321
{
	if (!Function_54(1, 1))
	{
		if (Function_52())
		{
			Function_40(6642, 6030);
		}
		else
		{
			Function_40(4152, 1367);
		}
	}
	return;
}

int Function_12(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x557 / 1367
{
	int iVar0;
	bool bVar1;
	char* cVar2[24];
	bool bVar8;
	
	Function_28(bParam1, uParam2, uParam3);
	iVar0 = Function_27(bParam0);
	if (!bParam1)
	{
		if (Function_25(4) && !Function_23(bParam0, 16, 1))
		{
			Function_21(bParam0, (iVar0 - 500), 0);
		}
		else
		{
			Function_21(bParam0, iVar0, 0);
		}
	}
	bVar8 = false;
	if (!Function_25(4) || Function_23(bParam0, 16, 1))
	{
		switch (-iVar0)
		{
			case 0x00000001:
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar8, UI_GET_STRING("mp_race_pos_v2_1"));
				bVar1 = 10;
				break;
			
			case 0x00000002:
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar8, UI_GET_STRING("mp_race_pos_v2_2"));
				bVar1 = 8;
				break;
			
			case 0x00000003:
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar8, UI_GET_STRING("mp_race_pos_v2_3"));
				bVar1 = 6;
				break;
			
			case 0x00000004:
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar8, UI_GET_STRING("mp_race_pos_v2_4"));
				bVar1 = 4;
				break;
			
			case 0x00000005:
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar8, UI_GET_STRING("mp_race_pos_v2_5"));
				bVar1 = 3;
				break;
			
			case 0x00000006:
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar8, UI_GET_STRING("mp_race_pos_v2_6"));
				bVar1 = 2;
				break;
			
			case 0x00000007:
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar8, UI_GET_STRING("mp_race_pos_v2_7"));
				bVar1 = 2;
				break;
			
			case 0x00000008:
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar8, UI_GET_STRING("mp_race_pos_v2_8"));
				bVar1 = true;
				break;
		}
	}
	else if (Function_25(4))
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar8, UI_GET_STRING("MP_Race_DNF"));
		bVar1 = false;
	}
	if (Function_25(4))
	{
		bVar8++;
		strcpy(&cVar2, "<green>+", 24);
		stradd(&cVar2, I2STR(bVar1), 24);
		stradd(&cVar2, "</green>", 24);
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar8, &cVar2);
		bVar8++;
		strcpy(&cVar2, "", 24);
		strcpy(&cVar2, I2STR(Function_19(5, bParam0)), 24);
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar8, &cVar2);
		bVar8++;
		Function_13(bVar8, Function_15(bParam0));
	}
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(3);
	return 0;
}

void Function_13(bool bParam0, int iParam1) //Position: 0x795 / 1941
{
	struct<13> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_14(iParam1) };
	bVar4 = FLOOR((Var0.f_12 * 100.0f));
	UI_SET_STRING_FORMAT("GENERIC_DBUFFER10_0", UI_GET_STRING("MP_Time_Fmt1"), I2STR((bVar4 / 10)), I2STR((bVar4 % 10)), false);
	UI_SET_STRING_FORMAT(StackVal, StackVal, "GENERIC_DBUFFER10_1", I2STR((I2STR((UI_GET_STRING("MP_Time_Fmt1") / 10)) % 10)), false);
	UI_SET_STRING_FORMAT(StackVal, "GENERIC_DBUFFER10_2", I2STR(UI_GET_STRING("MP_Time_Fmt")), UI_GET_STRING("GENERIC_DBUFFER10_1"), UI_GET_STRING("GENERIC_DBUFFER10_0"));
	if (Var0 >= 0)
	{
		if (StackVal <= 10)
		{
			UI_SET_STRING_FORMAT("GENERIC_DBUFFER10_3", UI_GET_STRING("MP_time_Fmt1"), I2STR(false), UI_GET_STRING("GENERIC_DBUFFER10_2"), false);
			UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", UI_GET_STRING("MP_Time_Fmt2"), I2STR(Var0), UI_GET_STRING("GENERIC_DBUFFER10_3"), false);
		}
		else
		{
			UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", UI_GET_STRING("MP_Time_Fmt2"), I2STR(Var0), UI_GET_STRING("GENERIC_DBUFFER10_2"), false);
		}
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bParam0, UI_GET_STRING("GENERIC_DBUFFER32_0"));
	}
	else
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bParam0, UI_GET_STRING("GENERIC_DBUFFER10_2"));
	}
	return;
}

struct<16> Function_14(var uParam0) //Position: 0x9C2 / 2498
{
	struct<4> Var0;
	bool bVar4;
	
	bVar4 = uParam0;
	Var0 = FLOOR((bVar4 / 3600.0f));
	while (bVar4 <= 3600.0f)
	{
		bVar4 = (bVar4 - 3600.0f);
	}
	Var0.f_4 = FLOOR((bVar4 / 60.0f));
	while (bVar4 <= 60.0f)
	{
		bVar4 = (bVar4 - 60.0f);
	}
	Var0.f_8 = FLOOR(bVar4);
	Var0.f_12 = (StackVal - IntToFloat(bVar4));
	return StackVal, StackVal, StackVal, Var0;
}

int Function_15(int iParam0) //Position: 0xA33 / 2611
{
	return Function_16(0, iParam0);
}

int Function_16(int iParam0, bool bParam1) //Position: 0xA3F / 2623
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_18(iParam0);
	}
	if (!Function_17(bParam1))
	{
		strcpy(&cVar0, "Tried to get genfloat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 176)[iParam0];
}

bool Function_17(bool bParam0) //Position: 0xAA8 / 2728
{
	char* cVar0[64];
	
	if (bParam0 > 0 || bParam0 <= 16)
	{
		strcpy(&cVar0, "TRIED TO USE IS_SLOT_DATA_VALID WITH BAD INDEX ", 64);
		stradd(&cVar0, I2STR(bParam0), 64);
		stradd(&cVar0, "!", 64);
		return 0;
	}
	if ((*&Global_78617 + 64)[bParam02] > Global_78617.f_60)
	{
		(*&Global_78617 + 64)[bParam02] = Global_78617.f_60;
		(&Global_78617 + 64[bParam02])->f_4 = _IS_CLIENT_DATA_VALID_FOR_SLOT(&Global_76943, bParam0);
	}
	return StackVal;
}

var Function_18(int iParam0) //Position: 0xB49 / 2889
{
	return (*&Global_78480 + 176)[iParam0];
}

int Function_19(int iParam0, bool bParam1) //Position: 0xB59 / 2905
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_20(iParam0);
	}
	if (!Function_17(bParam1))
	{
		strcpy(&cVar0, "Tried to get genint from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 132)[iParam0];
}

var Function_20(int iParam0) //Position: 0xBC0 / 3008
{
	return (*&Global_78480 + 132)[iParam0];
}

bool Function_21(bool bParam0, int iParam1, int iParam2) //Position: 0xBD0 / 3024
{
	var uVar0;
	
	return Function_22(bParam0, iParam1, &uVar0, iParam2);
}

int Function_22(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0xBE1 / 3041
{
	char* cVar0[32];
	
	if (NET_PLAYER_LIST_SET_CURRENT_ITEM_BY_SLOT(bParam0) != 4294967295)
	{
		*uParam2 = 0;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_PRIORITY(iParam1);
		return 1;
	}
	*uParam2 = 1;
	if (bParam3)
	{
		strcpy(&cVar0, "WWWWWWWWWWWWWW", 32);
		if (bParam0 <= 10)
		{
			stradd(&cVar0, "0", 32);
		}
		stradd(&cVar0, I2STR(bParam0), 32);
		return NET_PLAYER_LIST_ADD_ITEM(&cVar0, iParam1);
	}
	return NET_PLAYER_LIST_ADD_GAMER_SLOT(bParam0, iParam1);
}

bool Function_23(bool bParam0, int iParam1, bool bParam2) //Position: 0xC46 / 3142
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_54(iParam1, bParam2);
	}
	if (!Function_17(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_24(iParam1), 64);
		stradd(&cVar0, " bit from bad slot ", 64);
		stradd(&cVar0, I2STR(bParam0), 64);
	}
	iVar16 = (Global_76943[bParam096].f_124 && iParam1);
	if (bParam2)
	{
		return iVar16 != iParam1;
	}
	return iVar16 == 0;
}

var Function_24(int iParam0) //Position: 0xCC7 / 3271
{
	switch (iParam0)
	{
		case 0x00000002:
			return "DEAD";
			break;
		
		case 0x00000004:
			return "READY";
			break;
		
		case 0x00000008:
			return "POKER_FOLDED";
			break;
		
		case 0x00000010:
			return "RACE_FINISHED";
			break;
		
		case 0x00000020:
			return "REGION_HOST";
			break;
		
		case 0x00000080:
			return "ACTOR_HIDDEN";
			break;
		
		case 0x00000100:
			return "VOTE_TO_START";
			break;
		
		case 0x00000200:
			return "VOTE_TO_SKIP";
			break;
		
		case 0x00000400:
			return "VOTE_TO_REPLAY";
			break;
		
		case 0x00000001:
			return "IS_IN_LOBBY";
			break;
		
		case 0x00000040:
			return "GAME_ARBITRATOR";
			break;
		
		case 0x00000800:
			return "JOINED_GAME";
			break;
		
		case 0x00001000:
			return "SKIP_CUTSCENE";
			break;
		
		case 0x00002000:
			return "START_CUTSCENE";
			break;
		
		case 0x00004000:
			return "IS_SPECTATOR";
			break;
		
		case 0x00008000:
			return "DISTRICT_HOST";
			break;
		
		case 0x00010000:
			return "NEEDS_REVIVAL";
			break;
		
		case 0x00020000:
			return "MP_BIT_MPLAW_MOSTWANTED";
			break;
		
		case 0x00040000:
			return "HAS_VIRAL_ACHIEVEMENT";
			break;
		
		case 0x00080000:
			return "COMBATMODE_CASUAL";
			break;
		
		case 0x00100000:
			return "COMBATMODE_EXPERT";
			break;
		
		case 0x00200000:
			return "IN_ACTOR_PICKER";
			break;
		
		case 0x00400000:
			return "MELEE_BLOCKED";
			break;
		
		case 0x00800000:
			return "BLIND_FIRE";
			break;
		
		case 0x01000000:
			return "FREE_MODE_DEFENSE_ACTIVE";
			break;
		
		case 0x02000000:
			return "PLAYER_IS_GRIEFER";
			break;
		
		case 0x04000000:
			return "CANNOT_AFFORD_MINIGAME";
			break;
		
		case 0x08000000:
			return "FREE_MODE_DEFENSE_SPOONHOLDER";
			break;
	}
	return "UNKNOWN";
}

bool Function_25(int iParam0) //Position: 0xFE0 / 4064
{
	return Function_26(Global_76905.f_132, iParam0);
}

int Function_26(var uParam0, int iParam1) //Position: 0xFF1 / 4081
{
	return (uParam0 && iParam1) == 0;
}

int Function_27(int iParam0) //Position: 0xFFE / 4094
{
	return Function_19(0, iParam0);
}

void Function_28(bool bParam0, int iParam1, char* cParam2) //Position: 0x100A / 4106
{
	if (bParam0)
	{
		if (Function_29())
		{
			NET_PLAYER_LIST_ADD_ITEM(cParam2, iParam1);
		}
		else
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM(iParam1);
		}
	}
	return;
}

bool Function_29() //Position: 0x102B / 4139
{
	return Function_25(32768);
}

int Function_30() //Position: 0x1038 / 4152
{
	if (!Function_35(1))
	{
		return 0;
	}
	NET_PLAYER_LIST_SET_HEADER(1, "mp_plist_name");
	NET_PLAYER_LIST_SET_HEADER(2, "mp_plist_rank");
	if (Function_25(4))
	{
		NET_PLAYER_LIST_SET_HEADER(3, "mp_race_sb_ptGained");
		NET_PLAYER_LIST_SET_HEADER(4, "mp_race_sb_ptTotal");
		NET_PLAYER_LIST_SET_HEADER(5, "mp_plist_time");
	}
	else
	{
		NET_PLAYER_LIST_SET_HEADER(3, "mp_race_sb_ptGained");
		NET_PLAYER_LIST_SET_HEADER(4, "Common_Null");
		NET_PLAYER_LIST_SET_HEADER(5, "Common_Null");
	}
	NET_PLAYER_LIST_SET_HEADER(6, "Common_Null");
	Function_31();
	return 1;
}

void Function_31() //Position: 0x1115 / 4373
{
	if (Function_25(4096))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(25);
		Function_32(8192, 1, 1);
	}
	else if (Function_25(4))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(7);
		Function_32(8192, 1, 1);
	}
	else
	{
		Function_32(8192, 0, 1);
	}
	return;
}

void Function_32(int iParam0, bool bParam1, int iParam2) //Position: 0x1152 / 4434
{
	iParam2 = iParam2;
	if (bParam1)
	{
		Function_34(&Global_76905 + 132, iParam0);
	}
	else
	{
		Function_33(&Global_76905 + 132, iParam0);
	}
	return;
}

void Function_33(var uParam0, int iParam1) //Position: 0x117A / 4474
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_34(var uParam0, int iParam1) //Position: 0x118D / 4493
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_35(bool bParam0) //Position: 0x119C / 4508
{
	char* cVar0[64];
	
	if (bParam0)
	{
		if (Function_29() || Function_39(&Global_76905 + 64, &Global_79349))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_37(1) };
			stradd(&cVar0, "_title", 64);
			NET_PLAYER_LIST_SET_TITLE(&cVar0);
			memcpy(&Global_76905 + 64, StackVal, StackVal, StackVal, Global_79349, 16);
		}
	}
	if (!NET_IS_IN_SESSION())
	{
		if (Function_29())
		{
			NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("net_pl_unsession"), 25);
			NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
		}
		return 0;
	}
	Function_36(Function_29());
	return 1;
}

void Function_36(bool bParam0) //Position: 0x121D / 4637
{
	if (bParam0 || Function_25(0x4000000))
	{
		NET_PLAYER_LIST_SET_DESCRIPTION(&Global_76905);
	}
	if (bParam0 || Function_25(0x20000000))
	{
		NET_PLAYER_LIST_TIMER_SET(Global_76905.f_128);
		NET_PLAYER_LIST_TIMER_ENABLE_FLASHING(Function_25(65536));
		if ((Global_76905.f_128 <= 0 && !bParam0) && ((Function_25(1048576) || Function_25(4)) || Function_54(1, 1)))
		{
			PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
		}
		Function_32(0x20000000, 0, 1);
	}
	return;
}

struct<64> Function_37(var uParam0) //Position: 0x12A6 / 4774
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, uParam0);
}

struct<64> Function_38(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0x12BA / 4794
{
	char* cVar0[64];
	
	if (bParam29)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iParam0 + 48) };
	}
	else
	{
		strcpy(&cVar0, UI_GET_STRING(&iParam0 + 48), 64);
		if (!IS_STRING_VALID(&cVar0))
		{
			strcpy(&cVar0, "nINVALID!?", 64);
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_39(bool bParam0, bool bParam1) //Position: 0x12FF / 4863
{
	if (IS_STRING_VALID(bParam0) != IS_STRING_VALID(bParam1))
	{
		return 1;
	}
	if (!IS_STRING_VALID(bParam0))
	{
		return 0;
	}
	if (!STRINGS_ARE_EQUAL(bParam0, bParam1))
	{
		return 1;
	}
	return 0;
}

void Function_40(int iParam0, int iParam1) //Position: 0x1333 / 4915
{
	Function_41(iParam0, iParam1, 6023);
	return;
}

void Function_41(var uParam0, var uParam1, int iParam2) //Position: 0x1344 / 4932
{
	if (Function_25(0x4000000))
	{
		Function_45();
		Function_32(0x4000000, 0, 1);
	}
	if (Function_25(0x10000000))
	{
		Function_45();
		Function_32(0x10000000, 0, 1);
	}
	if (Function_25(2) != Function_25(0x2000000))
	{
		Function_45();
		Function_32(0x2000000, Function_25(2), 1);
	}
	if (Function_29())
	{
		Function_44(!Function_25(16));
	}
	if (Function_25(16))
	{
		Function_43(&uParam0, &uParam1, &iParam2);
		if (Function_25(8192))
		{
			if (!Function_25(4194304))
			{
				Function_32(4194304, 1, 1);
				UI_SUPPRESS("nMP_Ticker");
				UI_SUPPRESS("Reticle");
				UI_SUPPRESS("WeaponAmmo");
				UI_EXCLUDE("Reticle");
				UI_EXCLUDE("WeaponAmmo");
			}
			if (!Function_25(8388608))
			{
				Function_32(8388608, 1, 1);
				UI_HIDE("Splash_Message");
				UI_HIDE("Splash_Objective");
				UI_HIDE("Subtitle_Enabler");
				UI_EXCLUDE("Splash_Message");
				UI_EXCLUDE("Splash_Objective");
				UI_EXCLUDE("Subtitle_Enabler");
				SET_HUD_MAP_DRAW_ENABLED(0);
			}
		}
		else
		{
			Function_42();
		}
		Function_32(16384, 1, 1);
	}
	else if (!Function_25(32))
	{
		Function_42();
	}
	Function_32(32768, 0, 1);
	return;
}

void Function_42() //Position: 0x14DD / 5341
{
	if (Function_25(4194304))
	{
		Function_32(4194304, 0, 1);
		UI_SHOW("nMP_Ticker");
		UI_INCLUDE("Reticle");
		UI_INCLUDE("WeaponAmmo");
		UI_ENTER("Reticle");
		UI_RESTORE("WeaponAmmo");
	}
	if (Function_25(8388608))
	{
		Function_32(8388608, 0, 1);
		UI_INCLUDE("Splash_Message");
		UI_INCLUDE("Splash_Objective");
		UI_INCLUDE("Subtitle_Enabler");
		if (!UI_IS_MESSAGE_QUEUE_EMPTY(0))
		{
			UI_SHOW("Splash_Message");
		}
		if (!UI_IS_MESSAGE_QUEUE_EMPTY(2))
		{
			UI_SHOW("Splash_Objective");
		}
		UI_SHOW("Subtitle_Enabler");
		SET_HUD_MAP_DRAW_ENABLED(1);
	}
	return;
}

void Function_43(var uParam0, var uParam1, int iParam2) //Position: 0x15E6 / 5606
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	Function_32(131072, 0, 0);
	Call_Loc(*uParam0);
	if (!StackVal)
	{
		return;
	}
	bVar2 = Function_25(0x40000000);
	bVar3 = !Function_25(131072);
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (IS_SLOT_VALID(bVar1))
		{
			iVar0 = 0;
			if (!Function_17(bVar1))
			{
				iVar0 = 4294967295;
			}
			else if (!Function_23(bVar1, 2048, 1))
			{
				iVar0 = 4294967294;
			}
			else
			{
				Stack.Push(bVar1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push("");
				Call_Loc(*uParam1);
				iVar0 = StackVal;
			}
			if (iVar0 == 0 && bVar3)
			{
				if (Function_21(bVar1, (4294966296 - bVar1), 0))
				{
					NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(4);
					if (iVar0 != 4294967294 && Function_25(4))
					{
						NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, UI_GET_STRING("mp_list_joined_late"));
						NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(true, UI_GET_STRING("Common_Null"));
						NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(2, UI_GET_STRING("Common_Null"));
						NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(3, UI_GET_STRING("Common_Null"));
						NET_PLAYER_LIST_SET_CURRENT_ITEM_DEAD(0);
					}
					else
					{
						NET_PLAYER_LIST_SET_CURRENT_ITEM_DEAD(1);
					}
				}
			}
			else
			{
				NET_PLAYER_LIST_SET_CURRENT_ITEM_DEAD(0);
			}
		}
		else if (bVar2)
		{
			if (Function_21(bVar1, (4294966296 - bVar1), 1))
			{
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, "DEBUG");
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(true, "DEBUG");
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(2, "DEBUG");
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(3, "DEBUG");
				NET_PLAYER_LIST_SET_CURRENT_ITEM_DEAD(0);
			}
		}
		bVar1++;
	}
	Call_Loc(*iParam2);
	if (!StackVal)
	{
		return;
	}
	return;
}

void Function_44(bool bParam0) //Position: 0x175E / 5982
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_32(16384, 0, 1);
	return;
}

void Function_45() //Position: 0x1778 / 6008
{
	Function_32(32768, 1, 0);
	return;
}

int Function_46() //Position: 0x1787 / 6023
{
	return 1;
}

int Function_47(bool bParam0, bool bParam1, int iParam2, char* cParam3) //Position: 0x178E / 6030
{
	int iVar0;
	char* cVar1[24];
	bool bVar7;
	
	Function_28(bParam1, iParam2, cParam3);
	bParam1 = bParam1;
	iVar0 = Function_49(bParam0);
	Function_21(bParam0, iVar0, 0);
	bVar7 = false;
	switch (-iVar0)
	{
		case 0x00000001:
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar7, UI_GET_STRING("mp_race_pos_v2_1"));
			break;
		
		case 0x00000002:
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar7, UI_GET_STRING("mp_race_pos_v2_2"));
			break;
		
		case 0x00000003:
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar7, UI_GET_STRING("mp_race_pos_v2_3"));
			break;
		
		case 0x00000004:
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar7, UI_GET_STRING("mp_race_pos_v2_4"));
			break;
		
		case 0x00000005:
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar7, UI_GET_STRING("mp_race_pos_v2_5"));
			break;
		
		case 0x00000006:
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar7, UI_GET_STRING("mp_race_pos_v2_6"));
			break;
		
		case 0x00000007:
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar7, UI_GET_STRING("mp_race_pos_v2_7"));
			break;
		
		case 0x00000008:
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar7, UI_GET_STRING("mp_race_pos_v2_8"));
			break;
	}
	bVar7++;
	strcpy(&cVar1, "", 24);
	strcpy(&cVar1, I2STR(Function_19(5, bParam0)), 24);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar7, &cVar1);
	bVar7++;
	Function_13(bVar7, Function_16(5, bParam0));
	bVar7++;
	Function_48(bVar7, bParam0);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(3);
	return 0;
}

void Function_48(bool bParam0, bool bParam1) //Position: 0x192C / 6444
{
	if (Function_25(4))
	{
		if (Function_23(bParam1, 1024, 1))
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bParam0, "<VRE>");
		}
		else
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bParam0, "");
		}
	}
	return;
}

var Function_49(bool bParam0) //Position: 0x195F / 6495
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	
	iVar0 = Function_19(5, bParam0);
	iVar2 = 4294967295;
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (Function_50(bVar1))
		{
			if (bParam0 != bVar1)
			{
				iVar3 = Function_19(5, bVar1);
				if (iVar0 <= iVar3)
				{
					iVar2 = (iVar2 - 1);
				}
				else if (iVar0 == iVar3)
				{
					fVar4 = Function_16(5, bParam0);
					fVar5 = Function_16(5, bVar1);
					if (fVar4 < fVar5)
					{
						iVar2 = (iVar2 - 1);
					}
					else if (fVar4 != fVar5)
					{
					}
				}
			}
		}
		bVar1++;
	}
	return iVar2;
}

bool Function_50(bool bParam0) //Position: 0x19DC / 6620
{
	if (!IS_SLOT_VALID(bParam0))
	{
		return 0;
	}
	return Function_17(bParam0);
}

int Function_51() //Position: 0x19F2 / 6642
{
	if (!Function_35(1))
	{
		return 0;
	}
	NET_PLAYER_LIST_SET_HEADER(1, "mp_plist_name");
	NET_PLAYER_LIST_SET_HEADER(2, "mp_plist_rank");
	NET_PLAYER_LIST_SET_HEADER(3, "mp_race_sb_ptTotal");
	NET_PLAYER_LIST_SET_HEADER(4, "MP_race_totalTime");
	NET_PLAYER_LIST_SET_HEADER(5, "Common_Null");
	NET_PLAYER_LIST_SET_HEADER(6, "Common_Null");
	Function_31();
	return 1;
}

bool Function_52() //Position: 0x1A83 / 6787
{
	return Function_53(4);
}

int Function_53(int iParam0) //Position: 0x1A8D / 6797
{
	return Function_26((&Global_83591 + 140)->f_56, iParam0);
}

bool Function_54(int iParam0, bool bParam1) //Position: 0x1AA0 / 6816
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

void Function_55(var uParam0, int iParam1) //Position: 0x1AC0 / 6848
{
	Function_10(uParam0);
	Global_16524.f_4 = uParam0;
	Global_16524.f_16 = 1;
	if (!StackVal != StackVal)
	{
		Function_56(StackVal, iParam1);
	}
	return;
}

void Function_56(int iParam0, int iParam1) //Position: 0x1AF1 / 6897
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(false, false, false, false);
	Function_10(iParam0);
	Function_9(iVar0);
	PRINTNL();
	Function_7(iParam0, iVar0, iParam1);
	return;
}

void Function_57(int iParam0) //Position: 0x1B16 / 6934
{
	bool bVar0;
	
	if (Global_63399 == iParam0)
	{
		return;
	}
	if (!iParam0 & 1 != 0)
	{
		bVar0 = Global_63400;
	}
	else if (!iParam0 & 2 != 0)
	{
		bVar0 = Global_63401;
	}
	else if (!iParam0 & 4 != 0)
	{
		bVar0 = Global_63402;
	}
	else if (!iParam0 & 8 != 0)
	{
		bVar0 = Global_63403;
	}
	else if (!iParam0 & 16 != 0)
	{
		bVar0 = Global_63404;
	}
	else if (!iParam0 & 32 != 0)
	{
		bVar0 = Global_63405;
	}
	else
	{
		LOG_ERROR("SET_TIME_OF_DAY_REGION got an invalid TOD_REGION");
	}
	ADD_TIME(&bVar0, 0, false, false, 1);
	SET_TIME_OF_DAY(bVar0);
	return;
}

void Function_58(int iParam0) //Position: 0x1BD8 / 7128
{
	Function_59(8, iParam0);
	return;
}

void Function_59(int iParam0, bool bParam1) //Position: 0x1BE5 / 7141
{
	if (bParam1)
	{
		Function_34(&Global_83591 + 140 + 4, iParam0);
	}
	else
	{
		Function_33(&Global_83591 + 140 + 4, iParam0);
	}
	return;
}

void Function_60(int iParam0) //Position: 0x1C0D / 7181
{
	Global_83591.f_140 = iParam0;
	return;
}

void Function_61(var uParam0, bool bParam1) //Position: 0x1C1B / 7195
{
	if (bParam1)
	{
		Function_34(&Global_83591 + 140 + 56, uParam0);
	}
	else
	{
		Function_33(&Global_83591 + 140 + 56, uParam0);
	}
	return;
}

void Function_62(int iParam0, int iParam1) //Position: 0x1C43 / 7235
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return;
	}
	(*&Global_83591 + 140 + 32)[iParam0] = iParam1;
	return;
}

void Function_63(int iParam0, int iParam1) //Position: 0x1C64 / 7268
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return;
	}
	(*&Global_83591 + 140 + 8)[iParam0] = iParam1;
	return;
}

vector3 Function_64() //Position: 0x1C85 / 7301
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	bool bVar27;
	bool bVar28;
	bool bVar29;
	bool bVar30;
	bool bVar31;
	bool bVar32;
	bool bVar33;
	bool bVar34;
	bool bVar35;
	bool bVar36;
	bool bVar37;
	bool bVar38;
	bool bVar39;
	bool bVar40;
	bool bVar41;
	bool bVar42;
	bool bVar43;
	bool bVar44;
	bool bVar45;
	bool bVar46;
	bool bVar47;
	bool bVar48;
	bool bVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	bool bVar53;
	bool bVar54;
	bool bVar55;
	bool bVar56;
	bool bVar57;
	bool bVar58;
	bool bVar59;
	bool bVar60;
	bool bVar61;
	bool bVar62;
	bool bVar63;
	bool bVar64;
	bool bVar65;
	bool bVar66;
	bool bVar67;
	bool bVar68;
	bool bVar69;
	bool bVar70;
	bool bVar71;
	bool bVar72;
	bool bVar73;
	bool bVar74;
	bool bVar75;
	bool bVar76;
	bool bVar77;
	bool bVar78;
	bool bVar79;
	bool bVar80;
	bool bVar81;
	
	Unknown_Function();
	uVar0 = uVar0;
	Local_264 = CREATE_LAYOUT("MP_Race_Test_layout");
	Local_264.f_36 = CREATE_VOLUME_SET_IN_LAYOUT(Local_264, "Checkpoints_set");
	(*&Local_264 + 20)[0] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpointstart", 2, -2140.365f, 17.56f, 2611.401f, 0.0f, -269.1648f, 0.0f, 38.5121f, 11.76946f, 11.11779f);
	DECOR_SET_INT((*&Local_264 + 20)[0], "pointNum", false);
	ADD_TO_VOLUME_SET(Local_264.f_36, (*&Local_264 + 20)[0]);
	(*&Local_264 + 20)[1] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint2", 2, -2182.332f, 17.68f, 2601.821f, -0.5295877f, 18.00386f, 0.01459097f, 21.40451f, 8.75667f, 12.9848f);
	DECOR_SET_INT((*&Local_264 + 20)[1], "pointNum", true);
	ADD_TO_VOLUME_SET(Local_264.f_36, (*&Local_264 + 20)[1]);
	(*&Local_264 + 20)[2] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpointfinish", 2, -2183.54f, 17.95f, 2552.76f, 0.0f, 0.0f, 0.0f, 51.24722f, 8.943779f, 16.90384f);
	DECOR_SET_INT((*&Local_264 + 20)[2], "pointNum", 2);
	DECOR_SET_BOOL((*&Local_264 + 20)[2], "finishline", true);
	ADD_TO_VOLUME_SET(Local_264.f_36, (*&Local_264 + 20)[2]);
	Local_264.f_40 = CREATE_POINT_IN_LAYOUT(Local_264, "f_RaceStarter", -2181.994f, 16.19941f, 2623.976f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(Local_264.f_40, "checkpoint", 24);
	Local_264.f_44 = CREATE_OBJECTSET_IN_LAYOUT("FireFlagGroupSet", Local_264, 8, 0);
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_264, "nFireStart", -2140.351f, 16.11347f, 2611.401f, 0.0f, -269.1648f, 0.0f);
	DECOR_SET_INT(bVar1, "checkpoint", false);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_264.f_44);
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire1", -2181.527f, 16.30049f, 2604.299f, -0.5295877f, 18.00386f, 0.01459097f);
	DECOR_SET_INT(bVar2, "checkpoint", true);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_264.f_44);
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_264, "FireFinish", -2183.2f, 16.44419f, 2553.288f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar3, "checkpoint", 19);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_264.f_44);
	Local_264.f_48 = CREATE_OBJECTSET_IN_LAYOUT("StartPositionFlagsSet", Local_264, 8, 0);
	*(&Local_264 + 52[06]) = { -2103.974f, 16.44941f, 2613.158f };
	*(&Local_264 + 52[06] + 12) = { 0.0f, -267.9319f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos1", -2103.974f, 16.44941f, 2613.158f, 0.0f, -267.9319f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_264.f_48);
	*(&Local_264 + 52[16]) = { -2104.018f, 16.44941f, 2614.864f };
	*(&Local_264 + 52[16] + 12) = { 0.0f, 90.0f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos2", -2104.018f, 16.44941f, 2614.864f, 0.0f, 90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_264.f_48);
	*(&Local_264 + 52[26]) = { -2103.992f, 16.44941f, 2616.646f };
	*(&Local_264 + 52[26] + 12) = { 0.0f, 90.0f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos3", -2103.992f, 16.44941f, 2616.646f, 0.0f, 90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_264.f_48);
	*(&Local_264 + 52[36]) = { -2104.077f, 16.44941f, 2611.655f };
	*(&Local_264 + 52[36] + 12) = { 0.0f, 90.0f, 0.0f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos4", -2104.077f, 16.44941f, 2611.655f, 0.0f, 90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_264.f_48);
	*(&Local_264 + 52[46]) = { -2103.997f, 16.44941f, 2610.001f };
	*(&Local_264 + 52[46] + 12) = { 0.0f, 90.0f, 0.0f };
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos5", -2103.997f, 16.44941f, 2610.001f, 0.0f, 90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_264.f_48);
	*(&Local_264 + 52[56]) = { -2104f, 16.44941f, 2608.316f };
	*(&Local_264 + 52[56] + 12) = { 0.0f, 90.0f, 0.0f };
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos6", -2104f, 16.44941f, 2608.316f, 0.0f, 90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_264.f_48);
	*(&Local_264 + 52[66]) = { -2103.97f, 16.44941f, 2606.504f };
	*(&Local_264 + 52[66] + 12) = { 0.0f, 84.89618f, 0.0f };
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos7", -2103.97f, 16.44941f, 2606.504f, 0.0f, 84.89618f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_264.f_48);
	*(&Local_264 + 52[76]) = { -2103.99f, 16.44941f, 2604.824f };
	*(&Local_264 + 52[76] + 12) = { 0.0f, -272.4188f, 0.0f };
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos8", -2103.99f, 16.44941f, 2604.824f, 0.0f, -272.4188f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_264.f_48);
	*(&Local_264 + 52[86]) = { -2098.589f, 16.44941f, 2612.646f };
	*(&Local_264 + 52[86] + 12) = { 0.0f, -267.9319f, 0.0f };
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos9", -2098.589f, 16.44941f, 2612.646f, 0.0f, -267.9319f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_264.f_48);
	*(&Local_264 + 52[96]) = { -2098.618f, 16.44941f, 2614.546f };
	*(&Local_264 + 52[96] + 12) = { 0.0f, 90.0f, 0.0f };
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_264, "StartPos10", -2098.618f, 16.44941f, 2614.546f, 0.0f, 90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_264.f_48);
	*(&Local_264 + 52[106]) = { -2098.593f, 16.44941f, 2616.328f };
	*(&Local_264 + 52[106] + 12) = { 0.0f, 90.0f, 0.0f };
	bVar14 = CREATE_POINT_IN_LAYOUT(Local_264, "StartPos11", -2098.593f, 16.44941f, 2616.328f, 0.0f, 90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar14, Local_264.f_48);
	*(&Local_264 + 52[116]) = { -2098.678f, 16.44941f, 2611.337f };
	*(&Local_264 + 52[116] + 12) = { 0.0f, 90.0f, 0.0f };
	bVar15 = CREATE_POINT_IN_LAYOUT(Local_264, "StartPos12", -2098.678f, 16.44941f, 2611.337f, 0.0f, 90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar15, Local_264.f_48);
	*(&Local_264 + 52[126]) = { -2098.597f, 16.44941f, 2609.684f };
	*(&Local_264 + 52[126] + 12) = { 0.0f, 90.0f, 0.0f };
	bVar16 = CREATE_POINT_IN_LAYOUT(Local_264, "StartPos13", -2098.597f, 16.44941f, 2609.684f, 0.0f, 90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar16, Local_264.f_48);
	*(&Local_264 + 52[136]) = { -2098.601f, 16.44941f, 2607.998f };
	*(&Local_264 + 52[136] + 12) = { 0.0f, 90.0f, 0.0f };
	bVar17 = CREATE_POINT_IN_LAYOUT(Local_264, "StartPos14", -2098.601f, 16.44941f, 2607.998f, 0.0f, 90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar17, Local_264.f_48);
	*(&Local_264 + 52[146]) = { -2098.563f, 16.44941f, 2606.668f };
	*(&Local_264 + 52[146] + 12) = { 0.0f, 84.89618f, 0.0f };
	bVar18 = CREATE_POINT_IN_LAYOUT(Local_264, "StartPos15", -2098.563f, 16.44941f, 2606.668f, 0.0f, 84.89618f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar18, Local_264.f_48);
	*(&Local_264 + 52[156]) = { -2098.582f, 16.44941f, 2604.734f };
	*(&Local_264 + 52[156] + 12) = { 0.0f, -272.4188f, 0.0f };
	bVar19 = CREATE_POINT_IN_LAYOUT(Local_264, "StartPos16", -2098.582f, 16.44941f, 2604.734f, 0.0f, -272.4188f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar19, Local_264.f_48);
	Local_264.f_440 = CREATE_OBJECTSET_IN_LAYOUT("mp_respawn_flagsSet", Local_264, 8, 0);
	*(&Local_264 + 444[06]) = { -2116f, 16.09741f, 2611.209f };
	*(&Local_264 + 444[06] + 12) = { 0.0f, 90.0f, 0.0f };
	bVar20 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_00", -2116f, 16.09741f, 2611.209f, 0.0f, 90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar20, Local_264.f_440);
	*(&Local_264 + 444[16]) = { -2128f, 16.09741f, 2611.014f };
	*(&Local_264 + 444[16] + 12) = { 0.0f, 90.0f, 0.0f };
	bVar21 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_00a", -2128f, 16.09741f, 2611.014f, 0.0f, 90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar21, Local_264.f_440);
	*(&Local_264 + 444[26]) = { -2146.31f, 16.09741f, 2611.06f };
	*(&Local_264 + 444[26] + 12) = { 0.0f, 91.64747f, 0.0f };
	bVar22 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_01", -2146.31f, 16.09741f, 2611.06f, 0.0f, 91.64747f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar22, Local_264.f_440);
	*(&Local_264 + 444[36]) = { -2160f, 16.22081f, 2611.963f };
	*(&Local_264 + 444[36] + 12) = { 0.0f, 90.12157f, 0.0f };
	bVar23 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_01a", -2160f, 16.22081f, 2611.963f, 0.0f, 90.12157f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar23, Local_264.f_440);
	*(&Local_264 + 444[46]) = { -2168.0f, 16.21359f, 2611.743f };
	*(&Local_264 + 444[46] + 12) = { 0.0f, 88.16273f, 0.0f };
	bVar24 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_01b", -2168.0f, 16.21359f, 2611.743f, 0.0f, 88.16273f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar24, Local_264.f_440);
	*(&Local_264 + 444[56]) = { -2182.418f, 16.28197f, 2591.999f };
	*(&Local_264 + 444[56] + 12) = { 0.0f, 4.868393f, 0.0f };
	bVar25 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_02", -2182.418f, 16.28197f, 2591.999f, 0.0f, 4.868393f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar25, Local_264.f_440);
	*(&Local_264 + 444[66]) = { -2182.954f, 16.26433f, 2570.754f };
	*(&Local_264 + 444[66] + 12) = { 0.0f, 4.153043f, 0.0f };
	bVar26 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_02a", -2182.954f, 16.26433f, 2570.754f, 0.0f, 4.153043f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar26, Local_264.f_440);
	*(&Local_264 + 444[76]) = { -2187.112f, 16.39969f, 2536.381f };
	*(&Local_264 + 444[76] + 12) = { 0.0f, 25.70149f, 0.0f };
	bVar27 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_02_5a", -2187.112f, 16.39969f, 2536.381f, 0.0f, 25.70149f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar27, Local_264.f_440);
	*(&Local_264 + 444[86]) = { -2200.822f, 16.42429f, 2518.592f };
	*(&Local_264 + 444[86] + 12) = { 0.0f, 43.76204f, 0.0f };
	bVar28 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_02_5b", -2200.822f, 16.42429f, 2518.592f, 0.0f, 43.76204f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar28, Local_264.f_440);
	*(&Local_264 + 444[96]) = { -2234.166f, 17.86226f, 2485.88f };
	*(&Local_264 + 444[96] + 12) = { 0.0f, 56.5036f, 0.0f };
	bVar29 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_03", -2234.166f, 17.86226f, 2485.88f, 0.0f, 56.5036f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar29, Local_264.f_440);
	*(&Local_264 + 444[106]) = { -2256.673f, 17.92591f, 2464.87f };
	*(&Local_264 + 444[106] + 12) = { 0.0f, 55.78374f, 0.0f };
	bVar30 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_03a", -2256.673f, 17.92591f, 2464.87f, 0.0f, 55.78374f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar30, Local_264.f_440);
	*(&Local_264 + 444[116]) = { -2292.022f, 19.0551f, 2439.418f };
	*(&Local_264 + 444[116] + 12) = { -183.5855f, 111.2474f, -180.4278f };
	bVar31 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_04", -2292.022f, 19.0551f, 2439.418f, -183.5855f, 111.2474f, -180.4278f);
	ADD_OBJECT_TO_OBJECTSET(bVar31, Local_264.f_440);
	*(&Local_264 + 444[126]) = { -2316.247f, 18.66164f, 2431.438f };
	*(&Local_264 + 444[126] + 12) = { -169.5008f, 82.85538f, -166.6659f };
	bVar32 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_04a", -2316.247f, 18.66164f, 2431.438f, -169.5008f, 82.85538f, -166.6659f);
	ADD_OBJECT_TO_OBJECTSET(bVar32, Local_264.f_440);
	*(&Local_264 + 444[136]) = { -2407.154f, 20.23791f, 2399.749f };
	*(&Local_264 + 444[136] + 12) = { -182.717f, 118.5622f, -179.4721f };
	bVar33 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_05", -2407.154f, 20.23791f, 2399.749f, -182.717f, 118.5622f, -179.4721f);
	ADD_OBJECT_TO_OBJECTSET(bVar33, Local_264.f_440);
	*(&Local_264 + 444[146]) = { -2433.015f, 21.42144f, 2380.843f };
	*(&Local_264 + 444[146] + 12) = { -2.960505f, 63.97171f, 0.2539047f };
	bVar34 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_05a", -2433.015f, 21.42144f, 2380.843f, -2.960505f, 63.97171f, 0.2539047f);
	ADD_OBJECT_TO_OBJECTSET(bVar34, Local_264.f_440);
	*(&Local_264 + 444[156]) = { -2469.008f, 21.93514f, 2363.381f };
	*(&Local_264 + 444[156] + 12) = { -4.235101f, 72.12797f, -1.11682f };
	bVar35 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_06", -2469.008f, 21.93514f, 2363.381f, -4.235101f, 72.12797f, -1.11682f);
	ADD_OBJECT_TO_OBJECTSET(bVar35, Local_264.f_440);
	*(&Local_264 + 444[166]) = { -2511.214f, 22.4282f, 2354.573f };
	*(&Local_264 + 444[166] + 12) = { 0.0f, 66.2033f, 0.0f };
	bVar36 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_06a", -2511.214f, 22.4282f, 2354.573f, 0.0f, 66.2033f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar36, Local_264.f_440);
	*(&Local_264 + 444[176]) = { -2547.941f, 25.89842f, 2330.268f };
	*(&Local_264 + 444[176] + 12) = { 0.0f, 56.27835f, 0.0f };
	bVar37 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_07", -2547.941f, 25.89842f, 2330.268f, 0.0f, 56.27835f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar37, Local_264.f_440);
	*(&Local_264 + 444[186]) = { -2575.26f, 26.87035f, 2307.142f };
	*(&Local_264 + 444[186] + 12) = { 0.0f, 69.33318f, 0.0f };
	bVar38 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_07a", -2575.26f, 26.87035f, 2307.142f, 0.0f, 69.33318f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar38, Local_264.f_440);
	*(&Local_264 + 444[196]) = { -2622.873f, 29.19831f, 2305.511f };
	*(&Local_264 + 444[196] + 12) = { 0.0f, 97.66944f, 0.0f };
	bVar39 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_08", -2622.873f, 29.19831f, 2305.511f, 0.0f, 97.66944f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar39, Local_264.f_440);
	*(&Local_264 + 444[206]) = { -2646.713f, 31.21148f, 2308.218f };
	*(&Local_264 + 444[206] + 12) = { 0.0f, 109.8357f, 0.0f };
	bVar40 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_08a", -2646.713f, 31.21148f, 2308.218f, 0.0f, 109.8357f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar40, Local_264.f_440);
	*(&Local_264 + 444[216]) = { -2672.36f, 32.76785f, 2317.008f };
	*(&Local_264 + 444[216] + 12) = { 0.0f, 138.3974f, 0.0f };
	bVar41 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_08b", -2672.36f, 32.76785f, 2317.008f, 0.0f, 138.3974f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar41, Local_264.f_440);
	*(&Local_264 + 444[226]) = { -2697.392f, 37.65586f, 2342.449f };
	*(&Local_264 + 444[226] + 12) = { 0.0f, -223.5411f, 0.0f };
	bVar42 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_09", -2697.392f, 37.65586f, 2342.449f, 0.0f, -223.5411f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar42, Local_264.f_440);
	*(&Local_264 + 444[236]) = { -2713.303f, 39.92878f, 2354.145f };
	*(&Local_264 + 444[236] + 12) = { 0.0f, 109.7121f, 0.0f };
	bVar43 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_09a", -2713.303f, 39.92878f, 2354.145f, 0.0f, 109.7121f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar43, Local_264.f_440);
	*(&Local_264 + 444[246]) = { -2735.885f, 41.04236f, 2362.478f };
	*(&Local_264 + 444[246] + 12) = { 0.0f, 110.9143f, 0.0f };
	bVar44 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_09b", -2735.885f, 41.04236f, 2362.478f, 0.0f, 110.9143f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar44, Local_264.f_440);
	*(&Local_264 + 444[256]) = { -2766.147f, 40.71851f, 2412.388f };
	*(&Local_264 + 444[256] + 12) = { 0.0f, 176.9682f, 0.0f };
	bVar45 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_10", -2766.147f, 40.71851f, 2412.388f, 0.0f, 176.9682f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar45, Local_264.f_440);
	*(&Local_264 + 444[266]) = { -2756.46f, 39.00296f, 2460.373f };
	*(&Local_264 + 444[266] + 12) = { 0.0f, -155.2878f, 0.0f };
	bVar46 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_11", -2756.46f, 39.00296f, 2460.373f, 0.0f, -155.2878f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar46, Local_264.f_440);
	*(&Local_264 + 444[276]) = { -2741.517f, 39.00295f, 2488.797f };
	*(&Local_264 + 444[276] + 12) = { 0.0f, -157.6392f, 0.0f };
	bVar47 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_11a", -2741.517f, 39.00295f, 2488.797f, 0.0f, -157.6392f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar47, Local_264.f_440);
	*(&Local_264 + 444[286]) = { -2729.666f, 40.02527f, 2526.923f };
	*(&Local_264 + 444[286] + 12) = { 0.0f, -161.2576f, 0.0f };
	bVar48 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_11b", -2729.666f, 40.02527f, 2526.923f, 0.0f, -161.2576f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar48, Local_264.f_440);
	*(&Local_264 + 444[296]) = { -2717.199f, 43.52058f, 2588.001f };
	*(&Local_264 + 444[296] + 12) = { 0.0f, -179.6636f, 0.0f };
	bVar49 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_12", -2717.199f, 43.52058f, 2588.001f, 0.0f, -179.6636f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar49, Local_264.f_440);
	*(&Local_264 + 444[306]) = { -2719.759f, 43.02584f, 2620.028f };
	*(&Local_264 + 444[306] + 12) = { 0.0f, -179.6809f, 0.0f };
	bVar50 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_12a", -2719.759f, 43.02584f, 2620.028f, 0.0f, -179.6809f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar50, Local_264.f_440);
	*(&Local_264 + 444[316]) = { -2708.136f, 39.00295f, 2651.086f };
	*(&Local_264 + 444[316] + 12) = { 0.0f, -126.501f, 0.0f };
	bVar51 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_13", -2708.136f, 39.00295f, 2651.086f, 0.0f, -126.501f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar51, Local_264.f_440);
	*(&Local_264 + 444[326]) = { -2695.228f, 36.71864f, 2662.869f };
	*(&Local_264 + 444[326] + 12) = { 0.0f, -138.2244f, 0.0f };
	bVar52 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_13a", -2695.228f, 36.71864f, 2662.869f, 0.0f, -138.2244f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar52, Local_264.f_440);
	*(&Local_264 + 444[336]) = { -2651.01f, 36.55166f, 2693.11f };
	*(&Local_264 + 444[336] + 12) = { 0.0f, -91.07243f, 0.0f };
	bVar53 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_14", -2651.01f, 36.55166f, 2693.11f, 0.0f, -91.07243f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar53, Local_264.f_440);
	*(&Local_264 + 444[346]) = { -2624.013f, 32.00166f, 2689.512f };
	*(&Local_264 + 444[346] + 12) = { 0.0f, -65.26357f, 0.0f };
	bVar54 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_14a", -2624.013f, 32.00166f, 2689.512f, 0.0f, -65.26357f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar54, Local_264.f_440);
	*(&Local_264 + 444[356]) = { -2580.664f, 31.97549f, 2660.018f };
	*(&Local_264 + 444[356] + 12) = { 0.0f, -60.66163f, 0.0f };
	bVar55 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_15", -2580.664f, 31.97549f, 2660.018f, 0.0f, -60.66163f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar55, Local_264.f_440);
	*(&Local_264 + 444[366]) = { -2554.87f, 28.57093f, 2647.74f };
	*(&Local_264 + 444[366] + 12) = { 0.0f, -95.46964f, 0.0f };
	bVar56 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_15a", -2554.87f, 28.57093f, 2647.74f, 0.0f, -95.46964f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar56, Local_264.f_440);
	*(&Local_264 + 444[376]) = { -2531.998f, 27.33077f, 2652.27f };
	*(&Local_264 + 444[376] + 12) = { 0.0f, -94.01257f, 0.0f };
	bVar57 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_15b", -2531.998f, 27.33077f, 2652.27f, 0.0f, -94.01257f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar57, Local_264.f_440);
	*(&Local_264 + 444[386]) = { -2495.976f, 22.17641f, 2653.451f };
	*(&Local_264 + 444[386] + 12) = { 0.0f, -120.0057f, 0.0f };
	bVar58 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_16", -2495.976f, 22.17641f, 2653.451f, 0.0f, -120.0057f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar58, Local_264.f_440);
	*(&Local_264 + 444[396]) = { -2456.099f, 16.91669f, 2675.849f };
	*(&Local_264 + 444[396] + 12) = { 0.0f, -134.9117f, 0.0f };
	bVar59 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_16b", -2456.099f, 16.91669f, 2675.849f, 0.0f, -134.9117f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar59, Local_264.f_440);
	*(&Local_264 + 444[406]) = { -2376.078f, 14.90886f, 2720.861f };
	*(&Local_264 + 444[406] + 12) = { 0.0f, -90.00814f, 0.0f };
	bVar60 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_17", -2376.078f, 14.90886f, 2720.861f, 0.0f, -90.00814f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar60, Local_264.f_440);
	*(&Local_264 + 444[416]) = { -2351.99f, 14.90886f, 2720.062f };
	*(&Local_264 + 444[416] + 12) = { 0.0f, -84.36685f, 0.0f };
	bVar61 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_17a", -2351.99f, 14.90886f, 2720.062f, 0.0f, -84.36685f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar61, Local_264.f_440);
	*(&Local_264 + 444[426]) = { -2226.201f, 15.22486f, 2690.68f };
	*(&Local_264 + 444[426] + 12) = { 0.0f, -50.07603f, 0.0f };
	bVar62 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_18", -2226.201f, 15.22486f, 2690.68f, 0.0f, -50.07603f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar62, Local_264.f_440);
	*(&Local_264 + 444[436]) = { -2211.299f, 16.04965f, 2676.268f };
	*(&Local_264 + 444[436] + 12) = { 0.0f, -37.41644f, 0.0f };
	bVar63 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_18a", -2211.299f, 16.04965f, 2676.268f, 0.0f, -37.41644f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar63, Local_264.f_440);
	*(&Local_264 + 444[446]) = { -2340.412f, 18.56441f, 2427.351f };
	*(&Local_264 + 444[446] + 12) = { -7.372526f, 79.82713f, -4.343266f };
	bVar64 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_04a1", -2340.412f, 18.56441f, 2427.351f, -7.372526f, 79.82713f, -4.343266f);
	ADD_OBJECT_TO_OBJECTSET(bVar64, Local_264.f_440);
	*(&Local_264 + 444[456]) = { -2374.116f, 18.94433f, 2414.195f };
	*(&Local_264 + 444[456] + 12) = { -4.598558f, 73.57964f, -1.497151f };
	bVar65 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_04a2", -2374.116f, 18.94433f, 2414.195f, -4.598558f, 73.57964f, -1.497151f);
	ADD_OBJECT_TO_OBJECTSET(bVar65, Local_264.f_440);
	*(&Local_264 + 444[466]) = { -2754.691f, 42.14584f, 2369.369f };
	*(&Local_264 + 444[466] + 12) = { 0.0f, 129.5314f, 0.0f };
	bVar66 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_09b1", -2754.691f, 42.14584f, 2369.369f, 0.0f, 129.5314f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar66, Local_264.f_440);
	*(&Local_264 + 444[476]) = { -2770.795f, 39.43213f, 2431.726f };
	*(&Local_264 + 444[476] + 12) = { 0.0f, 200.2495f, 0.0f };
	bVar67 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_25", -2770.795f, 39.43213f, 2431.726f, 0.0f, 200.2495f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar67, Local_264.f_440);
	*(&Local_264 + 444[486]) = { -2678.021f, 32.56365f, 2691.359f };
	*(&Local_264 + 444[486] + 12) = { 0.0f, -96.88266f, 0.0f };
	bVar68 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_13a1", -2678.021f, 32.56365f, 2691.359f, 0.0f, -96.88266f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar68, Local_264.f_440);
	*(&Local_264 + 444[496]) = { -2601.503f, 30.25658f, 2678.484f };
	*(&Local_264 + 444[496] + 12) = { 0.0f, -56.26292f, 0.0f };
	bVar69 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_14b", -2601.503f, 30.25658f, 2678.484f, 0.0f, -56.26292f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar69, Local_264.f_440);
	*(&Local_264 + 444[506]) = { -2433.76f, 16.20636f, 2697.767f };
	*(&Local_264 + 444[506] + 12) = { 0.0f, -134.9117f, 0.0f };
	bVar70 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_16b1", -2433.76f, 16.20636f, 2697.767f, 0.0f, -134.9117f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar70, Local_264.f_440);
	*(&Local_264 + 444[516]) = { -2411.994f, 15.4108f, 2716.052f };
	*(&Local_264 + 444[516] + 12) = { 0.0f, -134.9117f, 0.0f };
	bVar71 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_16b2", -2411.994f, 15.4108f, 2716.052f, 0.0f, -134.9117f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar71, Local_264.f_440);
	*(&Local_264 + 444[526]) = { -2324.024f, 14.90886f, 2718.381f };
	*(&Local_264 + 444[526] + 12) = { 0.0f, -91.03978f, 0.0f };
	bVar72 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_17a1", -2324.024f, 14.90886f, 2718.381f, 0.0f, -91.03978f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar72, Local_264.f_440);
	*(&Local_264 + 444[536]) = { -2292.01f, 14.90883f, 2715.195f };
	*(&Local_264 + 444[536] + 12) = { 0.0f, -91.03978f, 0.0f };
	bVar73 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_17a2", -2292.01f, 14.90883f, 2715.195f, 0.0f, -91.03978f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar73, Local_264.f_440);
	*(&Local_264 + 444[546]) = { -2259.974f, 14.90882f, 2709.995f };
	*(&Local_264 + 444[546] + 12) = { 0.0f, -77.41396f, 0.0f };
	bVar74 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_17a3", -2259.974f, 14.90882f, 2709.995f, 0.0f, -77.41396f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar74, Local_264.f_440);
	*(&Local_264 + 444[556]) = { -2202.0f, 15.69191f, 2663.0f };
	*(&Local_264 + 444[556] + 12) = { 0.0f, -32.55951f, 0.0f };
	bVar75 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_18a1", -2202.0f, 15.69191f, 2663.0f, 0.0f, -32.55951f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar75, Local_264.f_440);
	Local_264.f_1792 = CREATE_OBJECTSET_IN_LAYOUT("FinishFlagSet", Local_264, 8, 0);
	*(&Local_264 + 1796[06]) = { -2196.554f, 16.39805f, 2523.18f };
	*(&Local_264 + 1796[06] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar76 = CREATE_POINT_IN_LAYOUT(Local_264, "finish", -2196.554f, 16.39805f, 2523.18f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar76, Local_264.f_1792);
	Local_264.f_1824 = CREATE_OBJECTSET_IN_LAYOUT("mp_Dir_MarkersSet", Local_264, 8, 0);
	*(&Local_264 + 1828[06]) = { -2185.296f, 16.08067f, 2607.51f };
	*(&Local_264 + 1828[06] + 12) = { 0.0f, -86.80497f, 0.0f };
	bVar77 = CREATE_POINT_IN_LAYOUT(Local_264, "dirMarker_1", -2185.296f, 16.08067f, 2607.51f, 0.0f, -86.80497f, 0.0f);
	DECOR_SET_BOOL(bVar77, "dirRight", true);
	DECOR_SET_INT(bVar77, "nmarkerOri", false);
	ADD_OBJECT_TO_OBJECTSET(bVar77, Local_264.f_1824);
	*(&Local_264 + 1828[16]) = { -2188.108f, 16.51304f, 2526.547f };
	*(&Local_264 + 1828[16] + 12) = { 0.0f, 169.6969f, 0.0f };
	bVar78 = CREATE_POINT_IN_LAYOUT(Local_264, "dirMarker_2", -2188.108f, 16.51304f, 2526.547f, 0.0f, 169.6969f, 0.0f);
	DECOR_SET_BOOL(bVar78, "dirRight", false);
	DECOR_SET_INT(bVar78, "nmarkerOri", false);
	ADD_OBJECT_TO_OBJECTSET(bVar78, Local_264.f_1824);
	*(&Local_264 + 1828[26]) = { -2768.27f, 42.46168f, 2375.459f };
	*(&Local_264 + 1828[26] + 12) = { 0.0f, 289.2791f, 0.0f };
	bVar79 = CREATE_POINT_IN_LAYOUT(Local_264, "dirMarker_5", -2768.27f, 42.46168f, 2375.459f, 0.0f, 289.2791f, 0.0f);
	DECOR_SET_BOOL(bVar79, "dirRight", false);
	DECOR_SET_INT(bVar79, "nmarkerOri", false);
	ADD_OBJECT_TO_OBJECTSET(bVar79, Local_264.f_1824);
	*(&Local_264 + 1828[36]) = { -2681.721f, 31.51102f, 2692.657f };
	*(&Local_264 + 1828[36] + 12) = { 0.0f, 19.72564f, 0.0f };
	bVar80 = CREATE_POINT_IN_LAYOUT(Local_264, "dirMarker_3", -2681.721f, 31.51102f, 2692.657f, 0.0f, 19.72564f, 0.0f);
	DECOR_SET_BOOL(bVar80, "dirRight", false);
	DECOR_SET_INT(bVar80, "nmarkerOri", 4294967295);
	ADD_OBJECT_TO_OBJECTSET(bVar80, Local_264.f_1824);
	*(&Local_264 + 1828[46]) = { -2238.0f, 15.72526f, 2706.0f };
	*(&Local_264 + 1828[46] + 12) = { 0.0f, 50.94147f, 0.0f };
	bVar81 = CREATE_POINT_IN_LAYOUT(Local_264, "dirMarker_4", -2238.0f, 15.72526f, 2706.0f, 0.0f, 50.94147f, 0.0f);
	DECOR_SET_BOOL(bVar81, "dirRight", false);
	DECOR_SET_INT(bVar81, "nmarkerOri", false);
	ADD_OBJECT_TO_OBJECTSET(bVar81, Local_264.f_1824);
}

