//Decompiled with MagicRDR v1.0
//Function Count : 91
//Statics Count : 568
//Natives Count : 122
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	struct<5> Local_4 = { 0, 0, 27, 0, 0 } ;
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
	struct<1317> Local_171 = { 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_501 = 0;
	SET_DUST_LEVEL(3);
	Function_90("Initializing CootsChapel", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_502 = 1000;
		switch (iLocal_501)
		{
			case 0x00000000:
				if (Global_3389)
				{
					iLocal_501 = 1;
				}
				bLocal_502 = false;
				break;
			
			case 0x00000001:
				if (Function_89())
				{
					iLocal_501 = 2;
				}
				bLocal_502 = false;
				break;
			
			case 0x00000002:
				if (Function_80())
				{
					Function_79(&(Global_29008[iScriptParam_0]), 32);
					iLocal_501 = 3;
				}
				bLocal_502 = false;
				break;
			
			case 0x00000003:
				bLocal_503 = LAUNCH_NEW_SCRIPT_WITH_ARGS("CootsChapelVol", &iScriptParam_0, 2, 0);
				Function_78(&Global_6291, &Global_7179, iScriptParam_0);
				iLocal_501 = 5;
				bLocal_502 = false;
				break;
			
			case 0x00000005:
				if (Function_77(&Global_6291, &Global_7179, iScriptParam_0))
				{
					iLocal_501 = 4;
					bLocal_502 = false;
				}
				else
				{
					bLocal_502 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_76(&(Global_29008[iScriptParam_0]), 16) && Function_75(Global_29155[iScriptParam_010]))
				{
					iLocal_501 = 6;
				}
				bLocal_502 = false;
				break;
			
			case 0x00000006:
				if (Function_71(14, 0))
				{
					Function_70(0, &uLocal_504, -1786,403f, 24,586f, 2857,457f);
					Function_69(0, &uLocal_504, -1787,993f, 24,803f, 2853,985f);
					Function_68(0, &uLocal_504, -1807,625f, 24,0941f, 2847,801f);
					Function_67(0, &uLocal_504, -1762,569f, 24,291f, 2869,928f);
					Function_66(0, &uLocal_504, -1806,814f, 23,968f, 2843,845f);
					Function_64(0, &uLocal_504, -1806,814f, 23,968f, 2843,845f);
					Function_63(0, &uLocal_504, Local_171);
					Function_70(1, &uLocal_504, -1794,463f, 24,674f, 2855,888f);
					Function_69(1, &uLocal_504, -1802,623f, 24,094f, 2855,205f);
					Function_68(1, &uLocal_504, -1794,358f, 24,094f, 2841,138f);
					Function_67(1, &uLocal_504, -1770,069f, 24,034f, 2842,155f);
					Function_66(1, &uLocal_504, -1804,739f, 24,094f, 2845,423f);
					Function_64(1, &uLocal_504, -1800,208f, 23,839f, 2840,495f);
					Function_63(1, &uLocal_504, Local_171);
					Function_70(2, &uLocal_504, -1800,208f, 23,839f, 2840,495f);
					Function_69(2, &uLocal_504, -1768,876f, 24,09f, 2867,963f);
					Function_68(2, &uLocal_504, -1776f, 24,0941f, 2832.0f);
					Function_67(2, &uLocal_504, -1805,743f, 24,062f, 2858,751f);
					Function_66(2, &uLocal_504, -1806,033f, 24,004f, 2846,005f);
					Function_64(2, &uLocal_504, -1794,545f, 24,63f, 2858,731f);
					Function_63(2, &uLocal_504, Local_171);
					Function_58(&Global_6291, &Global_7179, &uLocal_504, Global_6289, iScriptParam_0);
				}
				else
				{
					iLocal_565 = 1;
				}
				if (Function_76(&(Global_29008[iScriptParam_0]), 256) || !Function_57(2))
				{
					iLocal_565 = 1;
				}
				Function_56(StackVal, GET_OBJECT_FROM_PERS_CHAR(&Local_171 + 1256));
				Function_56(StackVal, GET_OBJECT_FROM_PERS_CHAR(&Local_171 + 1260));
				Function_79(&(Global_29008[iScriptParam_0]), 8);
				if (Function_76(&(Global_29008[iScriptParam_0]), 131072))
				{
					Function_55(&(Global_29008[iScriptParam_0]), 131072);
					iLocal_501 = 10;
				}
				else
				{
					iLocal_501 = 7;
				}
				bLocal_502 = false;
				break;
			
			case 0x00000007:
				Function_49(iScriptParam_0);
				iLocal_501 = 8;
				bLocal_502 = false;
				break;
			
			case 0x00000008:
				Function_45(StackVal, 0, 0,5f, 4, Local_4, 1);
				if (Function_44(iScriptParam_0, &Global_6291, iLocal_565))
				{
					Function_40(2, 4294967295, 4294967295, 0, 3);
					Function_38(Local_4);
				}
				else
				{
					Function_37(64);
					Function_40(0, 8, 4, 4, 2);
					Function_38(Local_4);
				}
				Function_79(&(Global_29008[iScriptParam_0]), 512);
				iLocal_501 = 9;
				bLocal_502 = false;
				break;
			
			case 0x00000009:
				Function_35(Local_4, iScriptParam_0);
				Function_79(&(Global_29008[iScriptParam_0]), 4);
				Function_34("Finished Initializing CootsChapel", 5.0f);
				iLocal_501 = 10;
				bLocal_502 = false;
				break;
			
			case 0x0000000A:
				Function_20(&(Global_26282[14]), "CCG", 27, Local_4, 1);
				if (Function_76(&(Global_29008[iScriptParam_0]), 131072))
				{
					iLocal_501 = 6;
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_502);
	}
	Function_11(&Global_6291, &Global_7179, iScriptParam_0, (iLocal_565 || Global_3380));
	SET_DUST_LEVEL(2);
	Function_10();
	Function_5();
	Function_1(iScriptParam_0);
	Function_55(&(Global_29008[iScriptParam_0]), 32);
	Function_55(&(Global_29008[iScriptParam_0]), 64);
	Function_55(&(Global_29008[iScriptParam_0]), 8);
	Function_55(&(Global_29008[iScriptParam_0]), 512);
	Function_55(&(Global_29008[iScriptParam_0]), 4);
	if (IS_SCRIPT_VALID(bLocal_503))
	{
		TERMINATE_SCRIPT(bLocal_503);
	}
	Function_34("Unloaded CootsChapel", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x52E / 1326
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

void Function_2(int iParam0) //Position: 0x564 / 1380
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Global_17483[iParam075].f_120 = 0;
	Global_25263 = (Global_25263 - 1);
	return;
}

bool Function_3(int iParam0) //Position: 0x586 / 1414
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_4(int iParam0) //Position: 0x59C / 1436
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_5() //Position: 0x5B2 / 1458
{
	Function_6(&Local_171 + 4);
	RELEASE_LAYOUT_REF(Local_171);
	return;
}

void Function_6(int iParam0) //Position: 0x5C4 / 1476
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

void Function_7(var uParam0, int iParam1) //Position: 0x5EA / 1514
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

void Function_8(var uParam0, int iParam1) //Position: 0x718 / 1816
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_9(int iParam0, int iParam1) //Position: 0x732 / 1842
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10() //Position: 0x74F / 1871
{
	RELEASE_LAYOUT_REF(Local_4);
	return;
}

void Function_11(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x75A / 1882
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
	if (Function_76(&(Global_29008[iParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(Function_18(iParam2), 12));
		Function_55(&(Global_29008[iParam2]), 0x40000000);
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
	if (!Function_76(&(Global_29008[iParam2]), 8))
	{
		bParam3 = true;
	}
	bVar1 = true;
	if (!Function_57(2) || Function_76(&(Global_29008[iParam2]), 256))
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
			Function_79(&(Global_29008[iParam2]), 2048);
		}
	}
}

void Function_12(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x945 / 2373
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

int Function_13(int iParam0) //Position: 0xA94 / 2708
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

int Function_14(int iParam0) //Position: 0xABF / 2751
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

void Function_15(var uParam0, int iParam1) //Position: 0xAF3 / 2803
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_16(var uParam0, int iParam1) //Position: 0xB02 / 2818
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_17(var uParam0, int iParam1) //Position: 0xB19 / 2841
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_18(int iParam0) //Position: 0xB35 / 2869
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

bool Function_19() //Position: 0xFE3 / 4067
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_20(int iParam0, char* cParam1, int iParam2, bool bParam3, int iParam4) //Position: 0xFEC / 4076
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
			if (VDIST(Global_34574, -1804,95f, 23,088f, 2810,314f) < 250.0f)
			{
				Function_32(iParam0);
			}
		}
		else if (iParam4 == 3)
		{
			if (VDIST(Global_34574, -2912.0f, 19,075f, 2693,999f) < 250.0f)
			{
				Function_32(iParam0);
			}
		}
		else if (iParam4 == 2)
		{
			if (!Function_30(iParam0, 63))
			{
				if (Function_29(76) || Function_28(76))
				{
					if (IS_GRAVESTONE_SECTOR_READY())
					{
						Function_26(cParam1, iParam0, 3, bParam3);
						Function_23(iParam0, 63);
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
		if (VDIST(Global_34574, -1804,95f, 23,088f, 2810,314f) < 200.0f)
		{
			return;
		}
		if (Global_26282[14] == 0)
		{
			Function_22();
		}
	}
	else if (iParam4 == 3)
	{
		if (VDIST(Global_34574, -2912.0f, 19,075f, 2693,999f) < 200.0f)
		{
			return;
		}
		if (Global_26282[34] == 0)
		{
			Function_21();
		}
	}
	if (!IS_GRAVESTONE_SECTOR_READY())
	{
		return;
	}
	if (iParam4 == 2)
	{
		if (!Function_30(iParam0, 63))
		{
			if (Function_29(76) || Function_28(76))
			{
				Function_26(cParam1, iParam0, 3, bParam3);
				Function_23(iParam0, 63);
			}
		}
	}
	iParam0->f_8 = 1;
	bVar0 = false;
	while (bVar0 <= iParam2)
	{
		if (iParam4 == 2 || bVar0 == 3)
		{
			if (!Function_26(cParam1, iParam0, bVar0, bParam3))
			{
				LOG_ERROR("Failed to create gravestone text!");
				return;
			}
		}
		bVar0++;
	}
	return;
}

void Function_21() //Position: 0x11E7 / 4583
{
	bool bVar0;
	
	SET_CURRENT_GRAVESTONE_SECTOR("ofr_Props_01x");
	Global_26282[34] = 0;
	Global_26282[34].f_4 = 0;
	bVar0 = false;
	while (bVar0 <= 20)
	{
		Function_23(&(Global_26282[34]), bVar0);
		bVar0++;
	}
	return;
}

void Function_22() //Position: 0x122E / 4654
{
	int iVar0;
	
	SET_CURRENT_GRAVESTONE_SECTOR("coo_cemetary01Props01x");
	Global_26282[14] = 0;
	Global_26282[14].f_4 = 0;
	iVar0 = 0;
	while (iVar0 <= 22)
	{
		Function_23(&(Global_26282[14]), iVar0 + 5);
		iVar0++;
	}
	return;
}

void Function_23(int iParam0, bool bParam1) //Position: 0x1280 / 4736
{
	if (bParam1 <= 32)
	{
		Function_24(iParam0, Function_25(bParam1));
	}
	else
	{
		Function_24(iParam0 + 4, Function_25((bParam1 - 32)));
	}
	return;
}

void Function_24(var uParam0, int iParam1) //Position: 0x12A9 / 4777
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

int Function_25(bool bParam0) //Position: 0x12B8 / 4792
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_26(char* cParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x12C4 / 4804
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
		if (bVar5 != 0 || Function_30(iParam1, bParam2))
		{
			bVar0 = CREATE_GRAVESTONE_TEXT_IN_LAYOUT(bParam3, Function_27(), &cVar1, bParam2, bVar5, 4278716679);
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

var Function_27() //Position: 0x1364 / 4964
{
	int iVar0;
	
	return iVar0;
}

int Function_28(int iParam0) //Position: 0x136C / 4972
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_29(int iParam0) //Position: 0x1381 / 4993
{
	if (Global_74542[iParam010] == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_30(int iParam0, bool bParam1) //Position: 0x1396 / 5014
{
	if (bParam1 <= 32)
	{
		return Function_31(*iParam0, Function_25(bParam1));
	}
	return Function_31(StackVal, Function_25((bParam1 - 32)));
}

int Function_31(var uParam0, int iParam1) //Position: 0x13C1 / 5057
{
	return (uParam0 && iParam1) == 0;
}

void Function_32(int iParam0) //Position: 0x13CE / 5070
{
	if (IS_OBJECTSET_VALID(iParam0->f_12))
	{
		Function_33(iParam0->f_12);
		DESTROY_OBJECTSET(iParam0->f_12);
	}
	iParam0->f_8 = 0;
	*iParam0 = 0;
	iParam0->f_4 = 0;
	return;
}

void Function_33(bool bParam0) //Position: 0x13FA / 5114
{
	bool bVar0;
	
	if (!IS_OBJECTSET_VALID(bParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(bParam0) >= 0)
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, bParam0);
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

void Function_34(bool bParam0, float fParam1) //Position: 0x143F / 5183
{
	if (!Function_57(128))
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

void Function_35(bool bParam0, bool bParam1) //Position: 0x147D / 5245
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
		Function_36(Global_29155[bParam110].f_20, cVar0);
	}
	if (!Global_3380 && !Function_19())
	{
		SET_RICH_PRESENCE(2, Global_29155[bParam110].f_36, 0, 0, 0);
	}
	DECOR_SET_INT(bParam0, "regid", bParam1);
	Global_30620 = 0;
	return;
}

void Function_36(var uParam0, int iParam1) //Position: 0x1577 / 5495
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_37(int iParam0) //Position: 0x1584 / 5508
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_38(bool bParam0) //Position: 0x1597 / 5527
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
		Global_26361.f_24 = GET_OBJECT_FROM_VOLUME(CREATE_VOLUME_IN_LAYOUT(Global_26361.f_16, Function_27(), 3, vVar0, 0.0f, 0.0f, 0.0f, 2.0f, 5.0f, 2.0f));
		Function_39(2097152);
	}
	ITERATE_ON_PARTIAL_NAME(Global_26361.f_20, "report_crime");
	return;
}

void Function_39(int iParam0) //Position: 0x1682 / 5762
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_40(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x169F / 5791
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
		Function_41();
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

void Function_41() //Position: 0x1783 / 6019
{
	int iVar0;
	
	Global_26960 = Function_42(StackVal);
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

int Function_42(int iParam0) //Position: 0x17D1 / 6097
{
	if (!Function_43(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_43(int iParam0) //Position: 0x17E9 / 6121
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

bool Function_44(int iParam0, int iParam1, bool bParam2) //Position: 0x17FE / 6142
{
	char* cVar0[64];
	struct<5> Var16;
	
	*iParam1[02] = { StackVal, *iParam1[02] };
	if (StackVal == 3)
	{
		return 0;
	}
	if (!Function_76(&(Global_29008[iParam0]), 2048))
	{
		return 0;
	}
	if (iParam0 != Global_30717[1] && Function_71(49, 0))
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

void Function_45(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x18BE / 6334
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
		Function_48();
	}
	if (bParam5)
	{
		Function_46(1048576);
	}
}

void Function_46(int iParam0) //Position: 0x19D1 / 6609
{
	Function_47(&Global_28842, iParam0);
	return;
}

void Function_47(var uParam0, var uParam1) //Position: 0x19DF / 6623
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_48() //Position: 0x19FA / 6650
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_46(16384);
	}
	return;
}

void Function_49(int iParam0) //Position: 0x1A16 / 6678
{
	Function_51(36, 1, 0, 0, 15, 3, 0, 0, 8, iParam0, "$/content/Ambient/Traffic/tevent_town_buildingEnter", 63, 2, 25.0f, 2, 30, 0);
	Function_50(&Global_17483[3675] + 120, 1, 0);
	return;
}

void Function_50(int iParam0, var uParam1, float fParam2) //Position: 0x1A7D / 6781
{
	iParam0->f_120 = uParam1;
	(iParam0 + 120)->f_4 = fParam2;
	return;
}

void Function_51(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16) //Position: 0x1A91 / 6801
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Function_52(iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8, uParam10, uParam11, uParam12, uParam13, uParam14, uParam15, uParam16);
	Global_17483[iParam075].f_92 = uParam9;
}

void Function_52(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, var uParam7, var uParam8, bool bParam9, var uParam10, var uParam11, var uParam12, var uParam13, bool bParam14, var uParam15) //Position: 0x1AD3 / 6867
{
	var uVar0;
	int iVar1;
	bool bVar2;
	char* cVar3[64];
	
	if (!Function_3(iParam0))
	{
		return;
	}
	Global_17483[iParam075][0] = iParam2;
	Global_17483[iParam075][1] = iParam3;
	Global_17483[iParam075][2] = iParam4;
	(*&Global_17483[iParam075] + 16)[0] = ROUND((IntToFloat(iParam2) * 0,5f));
	(*&Global_17483[iParam075] + 16)[1] = ROUND((IntToFloat(iParam3) * 0,5f));
	(*&Global_17483[iParam075] + 16)[2] = ROUND((IntToFloat(iParam4) * 0,5f));
	(*&Global_17483[iParam075] + 32)[0] = (Global_17483[iParam075][0] - (*&Global_17483[iParam075] + 16)[0]);
	(*&Global_17483[iParam075] + 32)[1] = (Global_17483[iParam075][1] - (*&Global_17483[iParam075] + 16)[1]);
	(*&Global_17483[iParam075] + 32)[2] = (Global_17483[iParam075][2] - (*&Global_17483[iParam075] + 16)[2]);
	Global_17483[iParam075].f_76 = uParam1;
	Global_17483[iParam075].f_120 = uParam5;
	(&Global_17483[iParam075] + 120)->f_4 = iParam6;
	(&Global_17483[iParam075] + 120)->f_8 = uParam13;
	Global_17483[iParam075].f_80 = uParam7;
	Global_17483[iParam075].f_84 = uParam8;
	Global_17483[iParam075].f_92 = 4294967295;
	Global_17483[iParam075].f_88 = uParam15;
	Global_17483[iParam075].f_96 = GET_ASSET_ID(cParam9, 4);
	Global_17483[iParam075].f_100 = uParam10;
	Global_17483[iParam075].f_104 = uParam11;
	Global_17483[iParam075].f_72 = uParam12;
	(&Global_17483[iParam075] + 120)->f_128 = 0;
	strcpy(&Global_17483[iParam075] + 120 + 24, "", 8);
	(&Global_17483[iParam075] + 120 + 24)->f_8 = 50.0f;
	(&Global_17483[iParam075] + 120 + 24)->f_12 = 4294967295;
	(&Global_17483[iParam075] + 120)->f_60 = 1;
	(&Global_17483[iParam075] + 120 + 60)->f_4 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_8 = 4294967295;
	(&Global_17483[iParam075] + 120 + 60)->f_12 = 4294967295;
	(&Global_17483[iParam075] + 120 + 60)->f_16 = 4294967295;
	(&Global_17483[iParam075] + 120 + 60)->f_20 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_24 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_32 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_20 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_28 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_36 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_40 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_44 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_52 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_48 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_56 = 0.0f;
	(&Global_17483[iParam075] + 120)->f_120 = 0;
	Global_63398 = 30.0f;
	if (!UNK_0x214AFB8C(Global_16876[iParam06].f_20))
	{
		iVar1 = MAKE_TIME_OF_DAY_EX(true, false, 0, 0);
		if (!Global_3365)
		{
			if (Global_3420)
			{
				bVar2 = false;
				ADD_TIME(&iVar1, 0, 7, bVar2, 0);
			}
			else
			{
				if (iParam6 == 2)
				{
					bVar2 = false;
				}
				else
				{
					bVar2 = Function_54(1200);
					bVar2 = RAND_INT_RANGE(30, bVar2);
				}
				ADD_TIME(&iVar1, 0, 7, bVar2, 0);
			}
		}
		Function_53(iParam0, Global_17483[iParam075].f_96);
		Global_17483[iParam075].f_264 = iVar1;
		Global_16876[iParam06] = iVar1;
	}
	else
	{
		Global_17483[iParam075].f_264 = Global_16876[iParam06];
	}
	bParam14 = Function_54(bParam14 * 60);
	ADD_TIME(&uVar0, 0, 0, bParam14, 0);
	Global_17483[iParam075].f_260 = uVar0;
	Global_17483[iParam075].f_268 = -1.0f;
	Global_17483[iParam075].f_276 = 4294967295;
	Global_17483[iParam075].f_272 = 4294967295;
	strcpy(&cVar3, "RUN ", 64);
	stradd(&cVar3, bParam9, 64);
	Global_25263++;
}

int Function_53(int iParam0, int iParam1) //Position: 0x1E63 / 7779
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	Global_16876[iParam06].f_20 = iParam1;
	return 1;
}

bool Function_54(int iParam0) //Position: 0x1E84 / 7812
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_55(var uParam0, int iParam1) //Position: 0x1E9A / 7834
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_56(var uParam0, bool bParam1) //Position: 0x1EB1 / 7857
{
	bool bVar0;
	
	if (!IS_OBJECT_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(*uParam0))
	{
		if (IS_OBJECT_VALID(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, *uParam0)))
		{
			GRINGO_SET_ALL_USES_OWNERSHIP(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, *uParam0)), bParam1);
		}
		bVar0++;
	}
	return;
}

bool Function_57(int iParam0) //Position: 0x1EF9 / 7929
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_58(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4) //Position: 0x1F15 / 7957
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_57(2))
	{
		return;
	}
	if (Function_76(&(Global_29008[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (Function_17(uParam0[iVar02], 2))
		{
			if (Function_59(uParam0[iVar02], uParam1[iVar03], iVar0, uParam2, uParam3, iParam4))
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
		Function_55(&(Global_29008[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_79(&(Global_29008[iParam4]), 2048);
	}
}

bool Function_59(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5) //Position: 0x1FC7 / 8135
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_76(&(Global_29008[iParam5]), 256))
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
		uParam1->f_8 = Function_62(StackVal, StackVal, StackVal, uParam4, &cVar1, *uParam1, *uParam3[iVar020], uParam3[iVar020]->f_76);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(*uParam3[iVar020]);
		PRINTNL();
		if (Function_61(StackVal, StackVal, *uParam3[iVar020]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_16(uParam0, 4);
	}
	Function_60(StackVal, uParam3[iVar020]);
	return 1;
}

int Function_60(bool bParam0, int iParam1) //Position: 0x2132 / 8498
{
	vector3 vVar0;
	bool bVar20;
	
	bVar20 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20))
	{
		if (!Function_61(StackVal, StackVal, *iParam1))
		{
			vVar0 = { StackVal, StackVal, *iParam1 };
		}
		if (!Function_61(StackVal, StackVal, *(iParam1 + 12)))
		{
			*(&vVar0 + 12) = { StackVal, StackVal, *(iParam1 + 12) };
		}
		if (!Function_61(StackVal, StackVal, *(iParam1 + 24)))
		{
			*(&vVar0 + 24) = { StackVal, StackVal, *(iParam1 + 24) };
		}
		if (!Function_61(StackVal, StackVal, *(iParam1 + 36)))
		{
			*(&vVar0 + 36) = { StackVal, StackVal, *(iParam1 + 36) };
		}
		if (!Function_61(StackVal, StackVal, *(iParam1 + 48)))
		{
			*(&vVar0 + 48) = { StackVal, StackVal, *(iParam1 + 48) };
		}
		if (!Function_61(StackVal, StackVal, *(iParam1 + 60)))
		{
			*(&vVar0 + 60) = { StackVal, StackVal, *(iParam1 + 60) };
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20);
	}
	return 0;
	return 0;
}

bool Function_61(vector3 vParam0) //Position: 0x226E / 8814
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

var Function_62(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, float fParam7) //Position: 0x2286 / 8838
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

void Function_63(int iParam0, var uParam1, bool bParam2) //Position: 0x239F / 9119
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

void Function_64(int iParam0, var uParam1, vector3 vParam2) //Position: 0x23FA / 9210
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_65(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Night Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 60) = { StackVal, StackVal, vParam2 };
}

bool Function_65(vector3 vParam0, vector3 vParam3) //Position: 0x2460 / 9312
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

void Function_66(int iParam0, var uParam1, vector3 vParam2) //Position: 0x248D / 9357
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_65(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Evening Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 48) = { StackVal, StackVal, vParam2 };
}

void Function_67(int iParam0, var uParam1, vector3 vParam2) //Position: 0x24F5 / 9461
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_65(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Afternoon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 36) = { StackVal, StackVal, vParam2 };
}

void Function_68(int iParam0, var uParam1, vector3 vParam2) //Position: 0x255F / 9567
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_65(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Noon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 24) = { StackVal, StackVal, vParam2 };
}

void Function_69(int iParam0, var uParam1, vector3 vParam2) //Position: 0x25C4 / 9668
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_65(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Morning Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 12) = { StackVal, StackVal, vParam2 };
}

void Function_70(int iParam0, var uParam1, vector3 vParam2) //Position: 0x262C / 9772
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_65(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Dawn Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*uParam1[bVar020] = { StackVal, StackVal, vParam2 };
}

bool Function_71(int iParam0, bool bParam1) //Position: 0x268F / 9871
{
	int iVar0;
	
	iVar0 = Function_73(iParam0);
	if (!Function_72(iVar0))
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

bool Function_72(int iParam0) //Position: 0x26CC / 9932
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_73(int iParam0) //Position: 0x26E3 / 9955
{
	if (!Function_74(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_74(int iParam0) //Position: 0x26FD / 9981
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

int Function_75(int iParam0) //Position: 0x2713 / 10003
{
	if (!Function_4(iParam0))
	{
		return 1;
	}
	return Function_76(&(Global_29008[iParam0]), 4);
}

bool Function_76(var uParam0, int iParam1) //Position: 0x272F / 10031
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_77(var uParam0, var uParam1, int iParam2) //Position: 0x274B / 10059
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
	if (Function_76(&(Global_29008[iParam2]), 0x40000000))
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

void Function_78(var uParam0, var uParam1, int iParam2) //Position: 0x2817 / 10263
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
	if (!Function_76(&(Global_29008[iParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(Function_18(iParam2), 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(Function_18(iParam2), 12));
			Function_79(&(Global_29008[iParam2]), 0x40000000);
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

void Function_79(var uParam0, int iParam1) //Position: 0x28ED / 10477
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_80() //Position: 0x28FC / 10492
{
	bool bVar0;
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
	
	Function_88(3, 3);
	bVar0 = bVar0;
	Function_86(&Local_171 + 4, "$/content/scripting/gringo/simplegringo/locked_footlocker", 1, 0);
	Function_86(&Local_171 + 4, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_86(&Local_171 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_86(&Local_171 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_campfire_tend", 1, 0);
	Function_86(&Local_171 + 4, "$/content/scripting/gringo/simplegringo/campfire_talk", 1, 0);
	Function_86(&Local_171 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_86(&Local_171 + 4, "$/content/scripting/gringo/simplegringo/lean_rail_back", 1, 0);
	Function_86(&Local_171 + 4, "$/content/scripting/gringo/simplegringo/multistage_sweeping", 1, 0);
	Function_86(&Local_171 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_86(&Local_171 + 4, "$/content/scripting/gringo/simplegringo/stand_yawning_n_any", 1, 0);
	Function_86(&Local_171 + 4, "$/content/scripting/gringo/simplegringo/sit_cleanrifle", 1, 0);
	Function_86(&Local_171 + 4, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_86(&Local_171 + 4, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_86(&Local_171 + 4, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_86(&Local_171 + 4, "$/content/scripting/gringo/simplegringo/stand_drunk_throwbottle", 1, 0);
	Function_86(&Local_171 + 4, "$/content/scripting/gringo/simplegringo/sit_headinhands_n_any", 1, 0);
	Function_86(&Local_171 + 4, "$/content/scripting/gringo/simplegringo/sleeping_wall_scripted", 1, 0);
	Function_86(&Local_171 + 4, "$/content/scripting/gringo/simplegringo/stand_yelling_up", 1, 0);
	Function_86(&Local_171 + 4, "$/content/scripting/gringo/simplegringo/stand_kneelvomit_n_any", 1, 0);
	Function_86(&Local_171 + 4, "$/content/scripting/gringo/simplegringo/stand_yelling_mid", 1, 0);
	Function_86(&Local_171 + 4, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_86(&Local_171 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_play_harmonica", 1, 0);
	Function_86(&Local_171 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_drink", 1, 0);
	Function_86(&Local_171 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_86(&Local_171 + 4, "$/content/scripting/gringo/simplegringo/lie_sleep_on_bed_l", 1, 0);
	Function_86(&Local_171 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_r", 1, 0);
	Function_86(&Local_171 + 4, "$/content/scripting/gringo/simplegringo/sit_cleanpistol", 1, 0);
	Function_86(&Local_171 + 4, "$/content/scripting/gringo/simplegringo/sleeping_scripted", 1, 0);
	Function_86(&Local_171 + 4, "$/content/scripting/gringo/simplegringo/digging", 1, 0);
	Function_86(&Local_171 + 4, "$/content/scripting/gringo/simplegringo/smoking_lean", 1, 0);
	if (!Function_81(&Local_171 + 4))
	{
		return 0;
	}
	Local_171 = FIND_NAMED_LAYOUT("CootsChapel_layout");
	if (!IS_LAYOUTREF_VALID(Local_171))
	{
		Local_171 = CREATE_LAYOUT("CootsChapel_layout");
	}
	Local_171.f_368 = CREATE_OBJECTSET_IN_LAYOUT("DigGraveGRPSet", Local_171, 8, 0);
	*(&Local_171 + 372[06]) = { -1791,138f, 24,0941f, 2873,333f };
	*(&Local_171 + 372[06] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_171, "Flag1", -1791,138f, 24,0941f, 2873,333f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar1, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_171.f_368);
	*(&Local_171 + 372[16]) = { -1793,437f, 24,0941f, 2869,1f };
	*(&Local_171 + 372[16] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_171, "Flag2", -1793,437f, 24,0941f, 2869,1f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar2, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_171.f_368);
	*(&Local_171 + 372[26]) = { -1790,703f, 24,0941f, 2867,708f };
	*(&Local_171 + 372[26] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_171, "Flag3", -1790,703f, 24,0941f, 2867,708f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar3, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_171.f_368);
	*(&Local_171 + 372[36]) = { -1809,796f, 24,0941f, 2865,744f };
	*(&Local_171 + 372[36] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_171, "Flag4", -1809,796f, 24,0941f, 2865,744f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar4, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_171.f_368);
	*(&Local_171 + 372[46]) = { -1810,897f, 24,0941f, 2862,831f };
	*(&Local_171 + 372[46] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_171, "Flag5", -1810,897f, 24,0941f, 2862,831f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar5, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_171.f_368);
	*(&Local_171 + 372[56]) = { -1811,677f, 24,0941f, 2860,433f };
	*(&Local_171 + 372[56] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_171, "Flag6", -1811,677f, 24,0941f, 2860,433f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar6, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_171.f_368);
	*(&Local_171 + 372[66]) = { -1806,693f, 24,0941f, 2860,279f };
	*(&Local_171 + 372[66] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_171, "Flag7", -1806,693f, 24,0941f, 2860,279f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar7, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_171.f_368);
	*(&Local_171 + 372[76]) = { -1805,937f, 24,0941f, 2863,213f };
	*(&Local_171 + 372[76] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_171, "Flag8", -1805,937f, 24,0941f, 2863,213f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar8, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_171.f_368);
	*(&Local_171 + 372[86]) = { -1804,429f, 24,0941f, 2866,233f };
	*(&Local_171 + 372[86] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_171, "Flag9", -1804,429f, 24,0941f, 2866,233f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar9, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_171.f_368);
	*(&Local_171 + 372[96]) = { -1806,886f, 24,0941f, 2870,948f };
	*(&Local_171 + 372[96] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_171, "Flag10", -1806,886f, 24,0941f, 2870,948f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar10, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_171.f_368);
	*(&Local_171 + 372[106]) = { -1808,502f, 24,0941f, 2868f };
	*(&Local_171 + 372[106] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_171, "Flag11", -1808,502f, 24,0941f, 2868f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar11, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_171.f_368);
	*(&Local_171 + 372[116]) = { -1779,962f, 24,0941f, 2873,802f };
	*(&Local_171 + 372[116] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_171, "Flag12", -1779,962f, 24,0941f, 2873,802f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar12, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_171.f_368);
	*(&Local_171 + 372[126]) = { -1782,256f, 24,0941f, 2869,23f };
	*(&Local_171 + 372[126] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_171, "Flag13", -1782,256f, 24,0941f, 2869,23f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar13, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_171.f_368);
	*(&Local_171 + 372[136]) = { -1777,077f, 24,0941f, 2872,876f };
	*(&Local_171 + 372[136] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar14 = CREATE_POINT_IN_LAYOUT(Local_171, "Flag14", -1777,077f, 24,0941f, 2872,876f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar14, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(bVar14, Local_171.f_368);
	*(&Local_171 + 372[146]) = { -1779,385f, 24,0941f, 2868,211f };
	*(&Local_171 + 372[146] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar15 = CREATE_POINT_IN_LAYOUT(Local_171, "Flag15", -1779,385f, 24,0941f, 2868,211f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar15, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(bVar15, Local_171.f_368);
	*(&Local_171 + 372[156]) = { -1776,385f, 24,0941f, 2866,919f };
	*(&Local_171 + 372[156] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar16 = CREATE_POINT_IN_LAYOUT(Local_171, "Flag16", -1776,385f, 24,0941f, 2866,919f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar16, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(bVar16, Local_171.f_368);
	*(&Local_171 + 372[166]) = { -1773,78f, 24,0941f, 2871,616f };
	*(&Local_171 + 372[166] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar17 = CREATE_POINT_IN_LAYOUT(Local_171, "Flag17", -1773,78f, 24,0941f, 2871,616f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar17, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(bVar17, Local_171.f_368);
	*(&Local_171 + 372[176]) = { -1771f, 24,0941f, 2867,056f };
	*(&Local_171 + 372[176] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar18 = CREATE_POINT_IN_LAYOUT(Local_171, "Flag18", -1771f, 24,0941f, 2867,056f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar18, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(bVar18, Local_171.f_368);
	*(&Local_171 + 372[186]) = { -1769,349f, 24,0941f, 2871,104f };
	*(&Local_171 + 372[186] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar19 = CREATE_POINT_IN_LAYOUT(Local_171, "Flag19", -1769,349f, 24,0941f, 2871,104f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar19, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(bVar19, Local_171.f_368);
	*(&Local_171 + 372[196]) = { -1762,363f, 24,0941f, 2847,219f };
	*(&Local_171 + 372[196] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar20 = CREATE_POINT_IN_LAYOUT(Local_171, "Flag20", -1762,363f, 24,0941f, 2847,219f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar20, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(bVar20, Local_171.f_368);
	*(&Local_171 + 372[206]) = { -1765,216f, 24,0941f, 2848,028f };
	*(&Local_171 + 372[206] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar21 = CREATE_POINT_IN_LAYOUT(Local_171, "Flag21", -1765,216f, 24,0941f, 2848,028f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar21, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(bVar21, Local_171.f_368);
	*(&Local_171 + 372[216]) = { -1767,254f, 24,0941f, 2848,983f };
	*(&Local_171 + 372[216] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar22 = CREATE_POINT_IN_LAYOUT(Local_171, "Flag22", -1767,254f, 24,0941f, 2848,983f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar22, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(bVar22, Local_171.f_368);
	*(&Local_171 + 372[226]) = { -1770,077f, 24,0941f, 2850,264f };
	*(&Local_171 + 372[226] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar23 = CREATE_POINT_IN_LAYOUT(Local_171, "Flag23", -1770,077f, 24,0941f, 2850,264f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar23, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(bVar23, Local_171.f_368);
	*(&Local_171 + 372[236]) = { -1776,822f, 24,0941f, 2845,937f };
	*(&Local_171 + 372[236] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar24 = CREATE_POINT_IN_LAYOUT(Local_171, "Flag24", -1776,822f, 24,0941f, 2845,937f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar24, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(bVar24, Local_171.f_368);
	*(&Local_171 + 372[246]) = { -1775,388f, 24,0941f, 2848,332f };
	*(&Local_171 + 372[246] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar25 = CREATE_POINT_IN_LAYOUT(Local_171, "Flag25", -1775,388f, 24,0941f, 2848,332f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar25, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(bVar25, Local_171.f_368);
	*(&Local_171 + 372[256]) = { -1773,707f, 24,0941f, 2844,948f };
	*(&Local_171 + 372[256] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar26 = CREATE_POINT_IN_LAYOUT(Local_171, "Flag26", -1773,707f, 24,0941f, 2844,948f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar26, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(bVar26, Local_171.f_368);
	*(&Local_171 + 372[266]) = { -1771,293f, 24,0941f, 2843,839f };
	*(&Local_171 + 372[266] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar27 = CREATE_POINT_IN_LAYOUT(Local_171, "Flag27", -1771,293f, 24,0941f, 2843,839f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar27, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(bVar27, Local_171.f_368);
	*(&Local_171 + 372[276]) = { -1768,839f, 24,0941f, 2843,179f };
	*(&Local_171 + 372[276] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar28 = CREATE_POINT_IN_LAYOUT(Local_171, "Flag28", -1768,839f, 24,0941f, 2843,179f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar28, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(bVar28, Local_171.f_368);
	*(&Local_171 + 372[286]) = { -1764,975f, 24,0941f, 2841,869f };
	*(&Local_171 + 372[286] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar29 = CREATE_POINT_IN_LAYOUT(Local_171, "Flag29", -1764,975f, 24,0941f, 2841,869f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar29, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(bVar29, Local_171.f_368);
	*(&Local_171 + 372[296]) = { -1788,265f, 24,0941f, 2872,502f };
	*(&Local_171 + 372[296] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar30 = CREATE_POINT_IN_LAYOUT(Local_171, "Flag30", -1788,265f, 24,0941f, 2872,502f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar30, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(bVar30, Local_171.f_368);
	Local_171.f_1096 = CREATE_OBJECTSET_IN_LAYOUT("sweepgrpSet", Local_171, 8, 0);
	*(&Local_171 + 1100[06]) = { -1792,613f, 24,0941f, 2849,66f };
	*(&Local_171 + 1100[06] + 12) = { 0.0f, 108,6343f, 0.0f };
	bVar31 = CREATE_POINT_IN_LAYOUT(Local_171, "Flag36", -1792,613f, 24,0941f, 2849,66f, 0.0f, 108,6343f, 0.0f);
	DECOR_SET_STRING(bVar31, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar31, Local_171.f_1096);
	*(&Local_171 + 1100[16]) = { -1793,772f, 24,0941f, 2848,106f };
	*(&Local_171 + 1100[16] + 12) = { 0.0f, 103,8098f, 0.0f };
	bVar32 = CREATE_POINT_IN_LAYOUT(Local_171, "Flag32", -1793,772f, 24,0941f, 2848,106f, 0.0f, 103,8098f, 0.0f);
	DECOR_SET_STRING(bVar32, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar32, Local_171.f_1096);
	*(&Local_171 + 1100[26]) = { -1792,741f, 24,0941f, 2845,751f };
	*(&Local_171 + 1100[26] + 12) = { 0.0f, 105,7128f, 0.0f };
	bVar33 = CREATE_POINT_IN_LAYOUT(Local_171, "Flag33", -1792,741f, 24,0941f, 2845,751f, 0.0f, 105,7128f, 0.0f);
	DECOR_SET_STRING(bVar33, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar33, Local_171.f_1096);
	*(&Local_171 + 1100[36]) = { -1789,922f, 24,53676f, 2858,598f };
	*(&Local_171 + 1100[36] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar34 = CREATE_POINT_IN_LAYOUT(Local_171, "Flag34", -1789,922f, 24,53676f, 2858,598f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar34, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar34, Local_171.f_1096);
	*(&Local_171 + 1100[46]) = { -1786,3f, 24,53676f, 2858,814f };
	*(&Local_171 + 1100[46] + 12) = { 0.0f, 286,8687f, 0.0f };
	bVar35 = CREATE_POINT_IN_LAYOUT(Local_171, "Flag35", -1786,3f, 24,53676f, 2858,814f, 0.0f, 286,8687f, 0.0f);
	DECOR_SET_STRING(bVar35, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar35, Local_171.f_1096);
	*(&Local_171 + 1100[56]) = { -1787,305f, 24,537f, 2859,212f };
	*(&Local_171 + 1100[56] + 12) = { 0.0f, 202,223f, 0.0f };
	bVar36 = CREATE_POINT_IN_LAYOUT(Local_171, "Flag37", -1787,305f, 24,537f, 2859,212f, 0.0f, 202,223f, 0.0f);
	DECOR_SET_STRING(bVar36, "UseAnim", "nbroom_pst");
	ADD_OBJECT_TO_OBJECTSET(bVar36, Local_171.f_1096);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_171, "Locked_Footlocker", "Locked_Footlocker", -1752,691f, 27,10587f, 2799,222f, 0.0f, -105,5641f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	DECOR_SET_BOOL(bVar0, "scrap", true);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_171, "look_distance_binocs", "look_distance_binocs", -1804f, 22,98828f, 2824.0f, 0.0f, 27,23829f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_171.f_1248 = CREATE_GRINGO_IN_LAYOUT(Local_171, "sit_ground_smoke", "Rand_Idle_Sit_Ground", -1766,84f, 24,0941f, 2858,496f, 0.0f, -273,9927f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_171.f_1248), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_171, "Sit_Ground_Campfire_Tend", "Sit_Ground_Campfire_Tend", -1806,033f, 24,00386f, 2846,005f, 0.0f, -222,3631f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_171.f_1252 = CREATE_GRINGO_IN_LAYOUT(Local_171, "sit_ground_smoke1", "Rand_Idle_Sit_Ground", -1808f, 24,0941f, 2848,924f, 0.0f, -21,12764f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_171.f_1252), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_171, "Rand_Idle_Sit_Ground1", "Rand_Idle_Sit_Ground", -1805,363f, 24,07307f, 2847,461f, 0.0f, 90,97639f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_171, "campfire_talk", "campfire_talk", -1809,055f, 24,04941f, 2846,854f, 0.0f, -624,5691f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_171, "smoking_stand1", "smoking_stand", -1781,455f, 24,08785f, 2847,205f, 0.0f, 0,1567854f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_171, "Rand_Idle_Sit_Ground2", "Rand_Idle_Sit_Ground", -1780,945f, 24,0941f, 2863,735f, 0.0f, 46,34106f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_171, "smoking_stand2", "smoking_stand", -1808,041f, 23,95104f, 2844,33f, 0.0f, -161,536f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_171, "smoking_stand3", "smoking_stand", -1763,892f, 24,09411f, 2857,125f, 0.0f, 105,1414f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_171, "lean_rail_back1", "lean_rail_back", -1783,1f, 24,0941f, 2855,66f, 0.0f, 107,7302f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_171, "Multistage_sweeping", "Multistage_sweeping", -1787,305f, 24,61875f, 2859,212f, 0.0f, 22,85354f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_171, "Rand_Idle_NearWall1", "Rand_Idle_NearWall", -1795,42f, 24,61427f, 2850,602f, 0.0f, -70,25011f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_171, "stand_yawning_n_any", "stand_yawning_n_any", -1793,98f, 24,62459f, 2849,298f, 0.0f, -113,9741f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_171, "sit_cleanrifle", "sit_cleanrifle", -1790,931f, 24,6884f, 2847,948f, 0.0f, 201,7716f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_171, "stand_lookdistance_w_any", "stand_lookdistance_w_any", -1777,726f, 24,09516f, 2829,261f, 0.0f, 47,37621f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_171, "stand_lookdistance_w_any1", "stand_lookdistance_w_any", -1800,208f, 23,83851f, 2840,495f, 0.0f, 10,57467f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_171, "Pee", "Pee", -1762,569f, 24,29103f, 2869,927f, 0.0f, -259,5125f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_171, "Pee1", "Pee", -1807,733f, 24,09411f, 2874,99f, 0.0f, -179,9612f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_171.f_1256 = CREATE_OBJECTSET_IN_LAYOUT(Function_27(), Local_171, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_171, "stand_drunk_rowdydrink8", "stand_drunk_rowdydrink", -1809,055f, 23,97929f, 2845,055f, 0.0f, 230,0579f, 0.0f), Local_171.f_1256);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, Local_171.f_1256)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_171, "stand_drunk_throwbottle8", "stand_drunk_throwbottle", -1812f, 24,0941f, 2848.0f, 0.0f, -73,29539f, 0.0f), Local_171.f_1256);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(true, Local_171.f_1256)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_171, "sit_headinhands_n_any8", "sit_headinhands_n_any", -1790,076f, 24,67377f, 2852,947f, 0.0f, -159,4069f, 0.0f), Local_171.f_1256);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(2, Local_171.f_1256)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_171, "sleeping_wall_scripted8", "sleeping_wall_scripted", -1795,705f, 24,67363f, 2848,735f, 0.0f, -70,28345f, 0.0f), Local_171.f_1256);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(3, Local_171.f_1256)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_171, "stand_yelling_up8", "stand_yelling_up", -1787,993f, 24,80334f, 2853,985f, 0.0f, 169,9047f, 0.0f), Local_171.f_1256);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(4, Local_171.f_1256)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_171, "stand_drunk_throwbottle9", "stand_drunk_throwbottle", -1791,626f, 24,67727f, 2852.0f, 0.0f, -150,6394f, 0.0f), Local_171.f_1256);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(5, Local_171.f_1256)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_171, "stand_kneelvomit_n_an8", "stand_kneelvomit_n_any", -1808,081f, 24,08655f, 2863,843f, 0.0f, 69,88171f, 0.0f), Local_171.f_1256);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(6, Local_171.f_1256)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_171, "stand_yelling_mid10", "stand_yelling_mid", -1793,464f, 24,63731f, 2843,78f, 0.0f, -337,6558f, 0.0f), Local_171.f_1256);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(7, Local_171.f_1256)), 0);
	Local_171.f_1260 = CREATE_OBJECTSET_IN_LAYOUT(Function_27(), Local_171, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_171, "stand_guntricks_e_any9", "stand_guntricks_e_any", -1805,362f, 24,041f, 2844,178f, 0.0f, -228,2945f, 0.0f), Local_171.f_1260);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, Local_171.f_1260)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_171, "sit_ground_play_harmonica9", "sit_ground_play_harmonica", -1804,739f, 24,09411f, 2845,423f, 0.0f, 123,0379f, 0.0f), Local_171.f_1260);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(true, Local_171.f_1260)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_171, "Sit_Ground_Drink9", "Sit_Ground_Drink", -1770,913f, 24,03705f, 2843,87f, 0.0f, -169,3158f, 0.0f), Local_171.f_1260);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(2, Local_171.f_1260)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_171, "stand_yelling_mid9", "stand_yelling_mid", -1794,358f, 24,0941f, 2841,138f, 0.0f, -162,6631f, 0.0f), Local_171.f_1260);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(3, Local_171.f_1260)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_171, "rand_idle_stand2", "rand_idle_stand", -1794,664f, 24,0941f, 2841,285f, 0.0f, -154,3885f, 0.0f), Local_171.f_1260);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(4, Local_171.f_1260)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_171, "rand_idle_stand9", "rand_idle_stand", -1794,069f, 24,0941f, 2841,13f, 0.0f, -174,8596f, 0.0f), Local_171.f_1260);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(5, Local_171.f_1260)), 0);
	Local_171.f_1264 = CREATE_GRINGO_IN_LAYOUT(Local_171, "stand_drunk_rowdydrink1", "stand_drunk_rowdydrink", -1807,101f, 24,0941f, 2849,154f, 0.0f, -7,650817f, 0.0f);
	Local_171.f_1268 = CREATE_GRINGO_IN_LAYOUT(Local_171, "sleeping_scripted1", "sleeping_wall_scripted", -1794,545f, 24,63028f, 2858,731f, 0.0f, -432,26f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_171, "lie_sleep_on_bed_l", "lie_sleep_on_bed_l", -1786,403f, 24,58643f, 2857,457f, 0.0f, 21,1392f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_171.f_1272 = CREATE_GRINGO_IN_LAYOUT(Local_171, "look_out_window_R", "look_out_window_R", -1795,738f, 24,67363f, 2849,529f, 0.0f, 111,478f, 0.0f);
	Local_171.f_1276 = CREATE_GRINGO_IN_LAYOUT(Local_171, "look_out_window_R1", "look_out_window_R", -1788,951f, 24,67363f, 2848,356f, 0.0f, -68,9173f, 0.0f);
	Local_171.f_1280 = CREATE_GRINGO_IN_LAYOUT(Local_171, "sit_cleanpistol", "sit_cleanpistol", -1791,978f, 24,6884f, 2848,318f, 0.0f, -160,5457f, 0.0f);
	Local_171.f_1284 = CREATE_GRINGO_IN_LAYOUT(Local_171, "look_out_window_R2", "look_out_window_R", -1795,165f, 24,67363f, 2857,764f, 0.0f, 111,478f, 0.0f);
	Local_171.f_1288 = CREATE_GRINGO_IN_LAYOUT(Local_171, "sleeping_scripted", "sleeping_scripted", -1794,463f, 24,67363f, 2855,887f, 0.0f, 18,59632f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_171, "digging2", "digging", -1769,577f, 24,06987f, 2866,87f, 0.0f, -262,2327f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_171.f_1292 = CREATE_GRINGO_IN_LAYOUT(Local_171, "smoking_stand4", "smoking_stand", -1768,876f, 24,08986f, 2867,963f, 0.0f, 53,61832f, 0.0f);
	Local_171.f_1296 = CREATE_GRINGO_IN_LAYOUT(Local_171, "smoking_lean", "smoking_lean", -1770,01f, 24,08986f, 2868,238f, 0.0f, -150,0039f, 0.0f);
	Local_171.f_1300 = CREATE_GRINGO_IN_LAYOUT(Local_171, "smoking_stand5", "smoking_stand", -1808,464f, 24,09015f, 2862,06f, 0.0f, -14,23038f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_171, "digging3", "digging", -1805,743f, 24,062f, 2858,751f, 0.0f, -203,7751f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_171.f_1304 = CREATE_GRINGO_IN_LAYOUT(Local_171, "smoking_lean1", "smoking_lean", -1808,66f, 24,11813f, 2860,709f, 0.0f, -251,4647f, 0.0f);
	Local_171.f_1308 = CREATE_GRINGO_IN_LAYOUT(Local_171, "smoking_stand6", "smoking_stand", -1769,645f, 24,03448f, 2844,461f, 0.0f, 24,34268f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_171, "digging6", "digging", -1770,069f, 24,03446f, 2842,155f, 0.0f, -455,4968f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_171.f_1312 = CREATE_GRINGO_IN_LAYOUT(Local_171, "sleeping_wall_scripted", "sleeping_wall_scripted", -1767,977f, 24,00438f, 2845,455f, 0.0f, -165,4893f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_171, "Locked_Footlocker1", "Locked_Footlocker", -1793,944f, 24,69088f, 2854,814f, 0.0f, -160,6455f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	DECOR_SET_BOOL(bVar0, "scrap", true);
	Local_171.f_1316 = CREATE_GRINGO_IN_LAYOUT(Local_171, "stand_drunk_rowdydrink2", "stand_drunk_rowdydrink", -1806,814f, 23,96786f, 2843,845f, 0.0f, -175,9393f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_171, "smoking_stand7", "smoking_stand", -1799,63f, 23,82908f, 2840,366f, 0.0f, 0,1567854f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	return 1;
}

bool Function_81(int iParam0) //Position: 0x52E4 / 21220
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_85();
	iVar1 = 0;
	if (!Function_9(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_84(iParam0[iVar03], 8);
		}
		else if (Function_83())
		{
			iVar1 = 1;
			Function_84(iParam0[iVar03], 8);
		}
		Function_84(iParam0[iVar03], 16);
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
				Function_84(iParam0[iVar03], 1);
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
							Function_84(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_84(iParam0[iVar03], 2);
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
							Function_84(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_84(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_84(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_84(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_84(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_84(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_84(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_84(iParam0[iVar03], 2);
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
	Function_82();
	return 1;
}

void Function_82() //Position: 0x565F / 22111
{
	if (!Function_57(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_83() //Position: 0x569F / 22175
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

void Function_84(var uParam0, int iParam1) //Position: 0x56CA / 22218
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_85() //Position: 0x56DB / 22235
{
	if (!Function_57(128))
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

var Function_86(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x571D / 22301
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_87(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_84(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_87(var uParam0, int iParam1, int iParam2) //Position: 0x5755 / 22357
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_9(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_84(uParam0[iVar03], 4);
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

void Function_88(int iParam0, int iParam1) //Position: 0x5819 / 22553
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

bool Function_89() //Position: 0x5862 / 22626
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
	
	Function_88(3, 3);
	uVar0 = uVar0;
	Local_4 = FIND_NAMED_LAYOUT("CootsChapel_layout");
	if (!IS_LAYOUTREF_VALID(Local_4))
	{
		Local_4 = CREATE_LAYOUT("CootsChapel_layout");
	}
	Local_4.f_4 = CREATE_OBJECTSET_IN_LAYOUT("GraveGroupSet", Local_4, 8, 0);
	*(&Local_4 + 8[06]) = { -1764,691f, 24,15298f, 2841,853f };
	*(&Local_4 + 8[06] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_4, "nf_grave_0", -1764,691f, 24,15298f, 2841,853f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, bVar1);
	*(&Local_4 + 8[16]) = { -1762,43f, 24,03798f, 2846,971f };
	*(&Local_4 + 8[16] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_4, "nf_grave_1", -1762,43f, 24,03798f, 2846,971f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, bVar2);
	*(&Local_4 + 8[26]) = { -1765,129f, 24,03647f, 2847,887f };
	*(&Local_4 + 8[26] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_4, "nf_grave_2", -1765,129f, 24,03647f, 2847,887f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, bVar3);
	*(&Local_4 + 8[36]) = { -1767,327f, 24,01973f, 2848,823f };
	*(&Local_4 + 8[36] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_4, "nf_grave_3", -1767,327f, 24,01973f, 2848,823f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, bVar4);
	*(&Local_4 + 8[46]) = { -1769,982f, 24,03169f, 2849,716f };
	*(&Local_4 + 8[46] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_4, "nf_grave_4", -1769,982f, 24,03169f, 2849,716f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, bVar5);
	*(&Local_4 + 8[56]) = { -1768,691f, 24,02576f, 2842,78f };
	*(&Local_4 + 8[56] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_4, "nf_grave_5", -1768,691f, 24,02576f, 2842,78f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, bVar6);
	*(&Local_4 + 8[66]) = { -1771,062f, 24,03306f, 2843,944f };
	*(&Local_4 + 8[66] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_4, "nf_grave_6", -1771,062f, 24,03306f, 2843,944f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, bVar7);
	*(&Local_4 + 8[76]) = { -1773,361f, 24,03058f, 2844,944f };
	*(&Local_4 + 8[76] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_4, "nf_grave_7", -1773,361f, 24,03058f, 2844,944f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, bVar8);
	*(&Local_4 + 8[86]) = { -1769,282f, 24,09351f, 2871,042f };
	*(&Local_4 + 8[86] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_4, "nf_grave_8", -1769,282f, 24,09351f, 2871,042f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, bVar9);
	*(&Local_4 + 8[96]) = { -1770,971f, 24,0778f, 2866,689f };
	*(&Local_4 + 8[96] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_4, "nf_grave_9", -1770,971f, 24,0778f, 2866,689f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, bVar10);
	*(&Local_4 + 8[106]) = { -1773,7f, 24,09412f, 2871,649f };
	*(&Local_4 + 8[106] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_4, "f_grave_10", -1773,7f, 24,09412f, 2871,649f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, bVar11);
	*(&Local_4 + 8[116]) = { -1775,979f, 24,09498f, 2866,82f };
	*(&Local_4 + 8[116] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_4, "f_grave_11", -1775,979f, 24,09498f, 2866,82f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, bVar12);
	*(&Local_4 + 8[126]) = { -1776,94f, 24,09413f, 2872,561f };
	*(&Local_4 + 8[126] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_4, "f_grave_12", -1776,94f, 24,09413f, 2872,561f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, bVar13);
	*(&Local_4 + 8[136]) = { -1779,098f, 24,09423f, 2867,937f };
	*(&Local_4 + 8[136] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar14 = CREATE_POINT_IN_LAYOUT(Local_4, "f_grave_13", -1779,098f, 24,09423f, 2867,937f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, bVar14);
	*(&Local_4 + 8[146]) = { -1779,851f, 24,09412f, 2873,638f };
	*(&Local_4 + 8[146] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar15 = CREATE_POINT_IN_LAYOUT(Local_4, "f_grave_14", -1779,851f, 24,09412f, 2873,638f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, bVar15);
	*(&Local_4 + 8[156]) = { -1782,129f, 23,75929f, 2869,125f };
	*(&Local_4 + 8[156] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar16 = CREATE_POINT_IN_LAYOUT(Local_4, "f_grave_15", -1782,129f, 23,75929f, 2869,125f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, bVar16);
	*(&Local_4 + 8[166]) = { -1787,777f, 24,10192f, 2872,284f };
	*(&Local_4 + 8[166] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar17 = CREATE_POINT_IN_LAYOUT(Local_4, "f_grave_16", -1787,777f, 24,10192f, 2872,284f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, bVar17);
	*(&Local_4 + 8[176]) = { -1790,59f, 24,09413f, 2873,007f };
	*(&Local_4 + 8[176] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar18 = CREATE_POINT_IN_LAYOUT(Local_4, "f_grave_17", -1790,59f, 24,09413f, 2873,007f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, bVar18);
	*(&Local_4 + 8[186]) = { -1793,108f, 24,09412f, 2868,807f };
	*(&Local_4 + 8[186] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar19 = CREATE_POINT_IN_LAYOUT(Local_4, "f_grave_18", -1793,108f, 24,09412f, 2868,807f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, bVar19);
	*(&Local_4 + 8[196]) = { -1806,166f, 24,10192f, 2870,718f };
	*(&Local_4 + 8[196] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar20 = CREATE_POINT_IN_LAYOUT(Local_4, "f_grave_19", -1806,166f, 24,10192f, 2870,718f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, bVar20);
	*(&Local_4 + 8[206]) = { -1808,095f, 24,09413f, 2867,849f };
	*(&Local_4 + 8[206] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar21 = CREATE_POINT_IN_LAYOUT(Local_4, "f_grave_20", -1808,095f, 24,09413f, 2867,849f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, bVar21);
	*(&Local_4 + 8[216]) = { -1809,297f, 24,08252f, 2865,529f };
	*(&Local_4 + 8[216] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar22 = CREATE_POINT_IN_LAYOUT(Local_4, "f_grave_21", -1809,297f, 24,08252f, 2865,529f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, bVar22);
	*(&Local_4 + 8[226]) = { -1805,552f, 24,09612f, 2863,149f };
	*(&Local_4 + 8[226] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar23 = CREATE_POINT_IN_LAYOUT(Local_4, "f_grave_22", -1805,552f, 24,09612f, 2863,149f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, bVar23);
	*(&Local_4 + 8[236]) = { -1810,452f, 24,10351f, 2862,704f };
	*(&Local_4 + 8[236] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar24 = CREATE_POINT_IN_LAYOUT(Local_4, "f_grave_23", -1810,452f, 24,10351f, 2862,704f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, bVar24);
	*(&Local_4 + 8[246]) = { -1811,524f, 24,10192f, 2860,5f };
	*(&Local_4 + 8[246] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar25 = CREATE_POINT_IN_LAYOUT(Local_4, "f_grave_24", -1811,524f, 24,10192f, 2860,5f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, bVar25);
	*(&Local_4 + 8[256]) = { -1806,85f, 24,1006f, 2860,42f };
	*(&Local_4 + 8[256] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar26 = CREATE_POINT_IN_LAYOUT(Local_4, "f_grave_25", -1806,85f, 24,1006f, 2860,42f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, bVar26);
	*(&Local_4 + 8[266]) = { -1803,853f, 23,31106f, 2866,121f };
	*(&Local_4 + 8[266] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar27 = CREATE_POINT_IN_LAYOUT(Local_4, "f_grave_26", -1803,853f, 23,31106f, 2866,121f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, bVar27);
}

void Function_90(bool bParam0, var uParam1) //Position: 0x63E2 / 25570
{
	if (!Function_57(128))
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

