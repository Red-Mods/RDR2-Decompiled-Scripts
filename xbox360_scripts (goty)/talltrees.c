//Decompiled with MagicRDR v1.0
//Function Count : 87
//Statics Count : 633
//Natives Count : 120
//Parameters Count : 2

#region Local Var
	struct<21> Local_0 = { 0, 1, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	struct<1489> Local_157 = { 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	var uVar0;
	
	iLocal_530 = 0;
	Function_86(iScriptParam_0);
	ALLOW_TUMBLEWEEDS(0);
	Function_85("Initializing TallTrees", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_531 = 1000;
		switch (iLocal_530)
		{
			case 0x00000000:
				if (Global_3389)
				{
					iLocal_530 = 1;
				}
				bLocal_531 = false;
				break;
			
			case 0x00000001:
				if (Function_83())
				{
					iLocal_530 = 2;
				}
				bLocal_531 = false;
				break;
			
			case 0x00000002:
				if (Function_74())
				{
					Function_73(&(Global_29008[iScriptParam_0]), 32);
					iLocal_530 = 3;
					Function_71(Local_0);
				}
				bLocal_531 = false;
				break;
			
			case 0x00000003:
				bLocal_532 = LAUNCH_NEW_SCRIPT_WITH_ARGS("TallTreesVol", &iScriptParam_0, 2, 0);
				Function_70(&Global_7174, &Global_8485, iScriptParam_0);
				iLocal_530 = 5;
				bLocal_531 = false;
				break;
			
			case 0x00000005:
				if (Function_69(&Global_7174, &Global_8485, iScriptParam_0))
				{
					iLocal_530 = 4;
					bLocal_531 = false;
				}
				else
				{
					bLocal_531 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_68(&(Global_29008[iScriptParam_0]), 16))
				{
					iLocal_530 = 6;
				}
				bLocal_531 = false;
				break;
			
			case 0x00000006:
				Function_66(0, &uLocal_538, Local_0, -3679.491f, 42.8246f, 2107.083f, -3680.329f, 42.74f, 2115.949f, -3661.467f, 42.165f, 2152.03f, -3661.467f, 42.165f, 2152.03f, -3640.249f, 42.74f, 2104.202f, -3677.26f, 42.74f, 2107.369f);
				Function_66(1, &uLocal_538, Local_0, -3679.491f, 42.8246f, 2107.083f, -3680.329f, 42.74f, 2115.949f, -3661.467f, 42.165f, 2152.03f, -3661.467f, 42.165f, 2152.03f, -3640.249f, 42.74f, 2104.202f, -3677.26f, 42.74f, 2107.369f);
				Function_60(&Global_7174, &Global_8485, &uLocal_538, Global_6289, iScriptParam_0);
				Function_73(&(Global_29008[iScriptParam_0]), 8);
				if (Function_68(&(Global_29008[iScriptParam_0]), 131072))
				{
					Function_59(&(Global_29008[iScriptParam_0]), 131072);
					iLocal_530 = 10;
				}
				else
				{
					iLocal_530 = 7;
				}
				bLocal_531 = false;
				break;
			
			case 0x00000007:
				Function_50(iScriptParam_0);
				if (Function_49(1) != 9 && Function_48(299) != 0.0f)
				{
					bLocal_533 = LAUNCH_NEW_SCRIPT("$/content/Ambient/Roaming/mh_named_bear", 0);
				}
				if (Function_49(1) != 9 && Function_48(298) != 0.0f)
				{
					bLocal_534 = LAUNCH_NEW_SCRIPT("$/content/Ambient/Roaming/mh_named_wolf", 0);
				}
				uVar0 = uVar0;
				iLocal_530 = 8;
				bLocal_531 = false;
				break;
			
			case 0x00000008:
				Function_47(0, Global_30717[0], 772.1412f, 79.45659f, 1241.604f);
				if (!Function_46(&Global_30723))
				{
					Function_42(StackVal, 3, 0.5f, 0, Local_0, !Function_46(&Global_30723));
					Function_41(64);
					Function_37(0, 8, 4, 0, 3);
				}
				Function_73(&(Global_29008[iScriptParam_0]), 512);
				iLocal_530 = 9;
				bLocal_531 = false;
				break;
			
			case 0x00000009:
				if (!Function_46(&Global_30723))
				{
					Function_35(Local_0, iScriptParam_0);
				}
				Global_29004 = 2;
				Function_73(&(Global_29008[iScriptParam_0]), 4);
				Function_34("Finished Initializing TallTrees", 5.0f);
				iLocal_530 = 10;
				bLocal_531 = false;
				break;
			
			case 0x0000000A:
				if (!Function_46(&Global_30723))
				{
					if (iLocal_579)
					{
						iLocal_579 = 0;
						iLocal_530 = 8;
						bLocal_531 = false;
					}
				}
				else
				{
					iLocal_579 = 1;
				}
				if (Function_33() && Function_31())
				{
					if (IS_VOLUME_VALID(StackVal))
					{
						if (IS_ACTOR_IN_VOLUME(StackVal, Function_30()))
						{
							if (!IS_SCRIPT_VALID(bLocal_535))
							{
								bLocal_535 = LAUNCH_NEW_SCRIPT("$/content/Multiplayer/Action_Areas/Wilderness/bearWildernessAA", 0);
							}
						}
						else if (IS_SCRIPT_VALID(bLocal_535))
						{
							TERMINATE_SCRIPT(bLocal_535);
						}
					}
					if (IS_VOLUME_VALID(StackVal))
					{
						if (IS_ACTOR_IN_VOLUME(StackVal, Function_30()))
						{
							if (!IS_SCRIPT_VALID(bLocal_536))
							{
								bLocal_536 = LAUNCH_NEW_SCRIPT("$/content/Multiplayer/Action_Areas/Wilderness/cougarWildernessAA", 0);
							}
						}
						else if (IS_SCRIPT_VALID(bLocal_536))
						{
							TERMINATE_SCRIPT(bLocal_536);
						}
					}
				}
				if (Function_23(0))
				{
					if (!IS_SCRIPT_VALID(iLocal_537))
					{
						bLocal_537 = LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/Ambient/PointOfInterest/event_wanted_poster", &uLocal_580, 51, 0);
					}
				}
				if (Function_68(&(Global_29008[iScriptParam_0]), 131072))
				{
					iLocal_530 = 6;
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				bLocal_531 = false;
				break;
		}
		WAIT(bLocal_531);
	}
	Function_22(iScriptParam_0);
	Function_11(&Global_7174, &Global_8485, iScriptParam_0, 1);
	Function_10();
	Function_5();
	Function_1(iScriptParam_0);
	Function_59(&(Global_29008[iScriptParam_0]), 32);
	Function_59(&(Global_29008[iScriptParam_0]), 64);
	Function_59(&(Global_29008[iScriptParam_0]), 8);
	Function_59(&(Global_29008[iScriptParam_0]), 512);
	Function_59(&(Global_29008[iScriptParam_0]), 4);
	if (IS_SCRIPT_VALID(bLocal_532))
	{
		TERMINATE_SCRIPT(bLocal_532);
	}
	if (IS_SCRIPT_VALID(bLocal_533))
	{
		TERMINATE_SCRIPT(bLocal_533);
	}
	if (IS_SCRIPT_VALID(bLocal_534))
	{
		TERMINATE_SCRIPT(bLocal_534);
	}
	if (IS_SCRIPT_VALID(bLocal_535))
	{
		TERMINATE_SCRIPT(bLocal_535);
	}
	if (IS_SCRIPT_VALID(bLocal_536))
	{
		TERMINATE_SCRIPT(bLocal_536);
	}
	Function_34("Unloaded TallTrees", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x64A / 1610
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

void Function_2(int iParam0) //Position: 0x680 / 1664
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Global_17483[iParam075].f_120 = 0;
	Global_25263 = (Global_25263 - 1);
	return;
}

bool Function_3(int iParam0) //Position: 0x6A2 / 1698
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_4(int iParam0) //Position: 0x6B8 / 1720
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_5() //Position: 0x6CE / 1742
{
	Function_6(&Local_157 + 4);
	RELEASE_LAYOUT_REF(Local_157);
	return;
}

void Function_6(int iParam0) //Position: 0x6E0 / 1760
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

void Function_7(var uParam0, int iParam1) //Position: 0x706 / 1798
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

void Function_8(var uParam0, int iParam1) //Position: 0x834 / 2100
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_9(int iParam0, int iParam1) //Position: 0x84E / 2126
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10() //Position: 0x86B / 2155
{
	Function_6(&Local_0 + 4);
	RELEASE_LAYOUT_REF(Local_0);
	return;
}

void Function_11(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x87D / 2173
{
	char* cVar0[64];
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	bool bVar21;
	
	if (StackVal != 5 && Function_33())
	{
		return;
	}
	strcpy(&cVar0, Function_21(iParam2), 64);
	if (Function_19())
	{
		stradd(&cVar0, "_z", 64);
	}
	if (Function_68(&(Global_29008[iParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar0, 12));
		Function_59(&(Global_29008[iParam2]), 0x40000000);
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 <= *uParam0)
	{
		if (!Function_18(uParam0[iVar162], 1))
		{
			if ((!(*uParam1)[iVar163] != 4294967295 && !(*uParam1)[iVar163] != 0) && Function_18(uParam0[iVar162], 8))
			{
				STREAMING_EVICT_ACTOR((*uParam1)[iVar163], 4294967295);
				Function_17(uParam0[iVar162], 8);
			}
		}
		if (UNK_0x214AFB8C(StackVal) && Function_18(uParam0[iVar162], 16))
		{
			STREAMING_EVICT_GRINGO(StackVal);
			Function_17(uParam0[iVar162], 16);
		}
		iVar16++;
	}
	if (!Function_68(&(Global_29008[iParam2]), 8))
	{
		bParam3 = true;
	}
	bVar17 = true;
	if (!Function_16(2) || Function_68(&(Global_29008[iParam2]), 256))
	{
		bVar17 = false;
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 <= *uParam0)
	{
		if (Function_18(uParam0[iVar162], 2) && !Function_18(uParam0[iVar162], 4))
		{
			Function_12(uParam0, uParam1, iVar16, bParam3);
		}
		if (bVar17)
		{
			if (Function_18(uParam0[iVar162], 2) && !Function_18(uParam0[iVar162], 4))
			{
				iVar18++;
			}
			else
			{
				iVar19++;
			}
		}
		iVar16++;
	}
	if (bVar17)
	{
		bVar20 = FIND_OBJECT_IN_LAYOUT(Global_6289, "ncorpseSet");
		bVar21 = GET_OBJECTSET_FROM_OBJECT(bVar20);
		if (IS_OBJECTSET_VALID(bVar21))
		{
			iVar16 = 0;
			while (GET_OBJECTSET_SIZE(bVar21) >= 0)
			{
				DESTROY_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, bVar21));
				CLEAN_OBJECTSET(bVar21);
			}
			DESTROY_OBJECTSET(bVar21);
		}
		if (StackVal && !(((iVar18 != 0 && iVar19 < 0) && !iParam2 != 4294967295) && !bParam3) != 3)
		{
			Function_73(&(Global_29008[iParam2]), 2048);
		}
	}
}

void Function_12(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0xA7D / 2685
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
		if (!Function_18(uParam0[iParam22], 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(StackVal, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(StackVal);
			uParam1[iParam23]->f_8 = "";
		}
	}
	else if (!Function_18(uParam0[iParam22], 1) && !bParam3)
	{
		Function_15(uParam0[iParam22], 4);
		uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
		ADD_TIME(uParam0[iParam22] + 4, Function_14(Global_29007), Function_13(Global_29007), false, 0);
	}
}

int Function_13(int iParam0) //Position: 0xBCC / 3020
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

int Function_14(int iParam0) //Position: 0xBF7 / 3063
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

void Function_15(var uParam0, int iParam1) //Position: 0xC2B / 3115
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_16(int iParam0) //Position: 0xC3A / 3130
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_17(var uParam0, int iParam1) //Position: 0xC56 / 3158
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_18(int iParam0, int iParam1) //Position: 0xC6D / 3181
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_19() //Position: 0xC89 / 3209
{
	if (Function_20(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_20(var uParam0, int iParam1) //Position: 0xCA4 / 3236
{
	return (uParam0 && iParam1) == 0;
}

var Function_21(int iParam0) //Position: 0xCB1 / 3249
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

void Function_22(int iParam0) //Position: 0x115F / 4447
{
	if (!Function_4(iParam0))
	{
		return;
	}
	if (!StackVal != 2)
	{
		return;
	}
	if (Global_29155[iParam010] == Global_30621[0])
	{
		STREAMING_EVICT_ACTOR(1177, 4294967295);
	}
	else if (Global_29155[iParam010] == Global_30621[1])
	{
		STREAMING_EVICT_ACTOR(1179, 4294967295);
	}
	else if (Global_29155[iParam010] == Global_30621[2])
	{
		STREAMING_EVICT_ACTOR(1178, 4294967295);
	}
	return;
}

bool Function_23(int iParam0) //Position: 0x11CA / 4554
{
	if (!IS_LATER_THAN(GET_TIME_OF_DAY(), Function_29()))
	{
		return 0;
	}
	if (Global_63399 != 32 || Global_63399 != 1)
	{
		return 0;
	}
	if (Global_3403)
	{
		return 0;
	}
	if (Global_3404)
	{
		return 0;
	}
	if (Function_28())
	{
		return 0;
	}
	if (iParam0 == 0)
	{
		if (Function_26(0) == 0)
		{
			return 0;
		}
	}
	if (!Function_25(0))
	{
		return 0;
	}
	if (Function_33())
	{
		return 0;
	}
	if (Global_3391)
	{
		return 0;
	}
	if (Function_24(1, 2, 1, 1))
	{
		return 0;
	}
	if (Global_26361.f_56 <= GET_CURRENT_GAME_TIME())
	{
		return 0;
	}
	return 1;
}

bool Function_24(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x124D / 4685
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

bool Function_25(int iParam0) //Position: 0x12F1 / 4849
{
	if (iParam0 >= 4294967295 && iParam0 <= 4)
	{
		return 0;
	}
	return Global_25965[iParam0];
}

int Function_26(int iParam0) //Position: 0x130C / 4876
{
	if (iParam0 == 1)
	{
		if (Global_3386 == 1)
		{
			return 0;
		}
	}
	if (Global_3386 == 0)
	{
		return 0;
	}
	if (Global_29006 == Global_30640[0])
	{
		return 1;
	}
	if (Global_29006 == Global_30717[0])
	{
		return 1;
	}
	if (Global_29006 == Global_30668[0])
	{
		return 1;
	}
	if (Global_29006 == Global_30658[1])
	{
		return 1;
	}
	if (Global_29006 == Global_30685[0])
	{
		return 1;
	}
	if (Global_29006 == Global_30723[1])
	{
		return 1;
	}
	if (Global_29006 == Global_30693[0])
	{
		return 1;
	}
	if (Global_29006 == Global_30707[1])
	{
		if (!Function_27(Global_30707[1]))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_27(bool bParam0) //Position: 0x13C0 / 5056
{
	if (!Function_4(bParam0))
	{
		return 0;
	}
	return Function_68(&(Global_29008[bParam0]), 2048);
}

bool Function_28() //Position: 0x13DE / 5086
{
	return Function_20(StackVal, 1);
}

var Function_29() //Position: 0x13ED / 5101
{
	return StackVal;
}

var Function_30() //Position: 0x13F8 / 5112
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

int Function_31() //Position: 0x140D / 5133
{
	if (Function_33())
	{
		return (Function_32() != 1 || Function_32() != 0);
	}
	return 0;
}

int Function_32() //Position: 0x1426 / 5158
{
	return Global_79349.f_16;
}

bool Function_33() //Position: 0x1432 / 5170
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_34(bool bParam0, float fParam1) //Position: 0x143B / 5179
{
	if (!Function_16(128))
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

void Function_35(bool bParam0, bool bParam1) //Position: 0x1479 / 5241
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
	if (!Global_3380 && !Function_33())
	{
		SET_RICH_PRESENCE(2, Global_29155[bParam110].f_36, 0, 0, 0);
	}
	DECOR_SET_INT(bParam0, "regid", bParam1);
	Global_30620 = 0;
	return;
}

void Function_36(var uParam0, int iParam1) //Position: 0x1573 / 5491
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_37(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4) //Position: 0x1580 / 5504
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
	Global_26361.f_8 = uParam0;
	Global_26361 = iParam1;
	Global_26361.f_4 = iParam2;
	Global_26361.f_40 = 99;
	Global_26361.f_44 = uParam3;
	Global_26361.f_48 = 0;
	Global_26361.f_52 = iParam4;
	Global_26361.f_56 = 0.0f;
	if (StackVal != StackVal)
	{
		Function_38();
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

void Function_38() //Position: 0x1664 / 5732
{
	int iVar0;
	
	Global_26960 = Function_39(StackVal);
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

int Function_39(int iParam0) //Position: 0x16B2 / 5810
{
	if (!Function_40(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_40(int iParam0) //Position: 0x16CA / 5834
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_41(bool bParam0) //Position: 0x16DF / 5855
{
	Global_26316.f_56 = (Global_26316.f_56 || bParam0);
	return;
}

void Function_42(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x16F2 / 5874
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
		Function_45();
	}
	if (bParam5)
	{
		Function_43(1048576);
	}
}

void Function_43(int iParam0) //Position: 0x1805 / 6149
{
	Function_44(&Global_28842, iParam0);
	return;
}

void Function_44(var uParam0, var uParam1) //Position: 0x1813 / 6163
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_45() //Position: 0x182E / 6190
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_43(16384);
	}
	return;
}

bool Function_46(int iParam0) //Position: 0x184A / 6218
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		if (Function_4((*iParam0)[iVar0]))
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

void Function_47(int iParam0, var uParam1, vector3 vParam2) //Position: 0x1897 / 6295
{
	if (!Function_40(iParam0))
	{
		LOG_ERROR("Invalid Territory for Setting up Law Enforcement");
		return;
	}
	Global_26316[iParam0] = uParam1;
	*(&Global_26316 + 16[iParam03]) = { StackVal, StackVal, vParam2 };
}

float Function_48(int iParam0) //Position: 0x18F9 / 6393
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

int Function_49(int iParam0) //Position: 0x1932 / 6450
{
	if (Function_33() || Global_34165.f_44)
	{
		return StackVal;
	}
	return StackVal;
}

void Function_50(int iParam0) //Position: 0x195A / 6490
{
	Function_55(18, 2, 100, 50, 50, 1, 32832, 1, 4, iParam0, "$/content/Ambient/Roaming/event_hangingb", 63, 2, 55.0f, 8, 65, 0);
	Function_54(&Global_17483[1875] + 120, 1, 5.0f, 1, 640);
	Function_53(&Global_17483[1875] + 120, 5.0f);
	Function_52(&Global_17483[575] + 120, 19.9f, 0.7f);
	Function_51(&Global_17483[575] + 120, -4.0f, 2);
	return;
}

void Function_51(int iParam0, var uParam1, int iParam2) //Position: 0x19EF / 6639
{
	(iParam0 + 60)->f_24 = uParam1;
	(iParam0 + 60)->f_12 = iParam2;
	return;
}

void Function_52(int iParam0, var uParam1, int iParam2) //Position: 0x1A05 / 6661
{
	(iParam0 + 60)->f_44 = uParam1;
	(iParam0 + 60)->f_52 = iParam2;
	return;
}

void Function_53(int iParam0, int iParam1) //Position: 0x1A1B / 6683
{
	(iParam0 + 60)->f_32 = iParam1;
	return;
}

void Function_54(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x1A29 / 6697
{
	iParam0->f_60 = uParam1;
	(iParam0 + 60)->f_4 = uParam2;
	(iParam0 + 60)->f_8 = uParam3;
	(iParam0 + 60)->f_16 = uParam4;
}

void Function_55(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16) //Position: 0x1A4F / 6735
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Function_56(iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8, uParam10, uParam11, uParam12, uParam13, uParam14, uParam15, uParam16);
	Global_17483[iParam075].f_92 = uParam9;
}

void Function_56(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, var uParam7, var uParam8, bool bParam9, var uParam10, var uParam11, var uParam12, var uParam13, bool bParam14, var uParam15) //Position: 0x1A91 / 6801
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
	(*&Global_17483[iParam075] + 16)[0] = ROUND((IntToFloat(iParam2) * 0.5f));
	(*&Global_17483[iParam075] + 16)[1] = ROUND((IntToFloat(iParam3) * 0.5f));
	(*&Global_17483[iParam075] + 16)[2] = ROUND((IntToFloat(iParam4) * 0.5f));
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
	if (!Function_19())
	{
		Global_63398 = 30.0f;
	}
	else
	{
		Global_63398 = (30.0f * 0.8f);
	}
	if (!UNK_0x214AFB8C(Global_16876[iParam06].f_20))
	{
		iVar1 = MAKE_TIME_OF_DAY_EX(true, false, false, false);
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
					bVar2 = Function_58(1200);
					bVar2 = RAND_INT_RANGE(30, bVar2);
				}
				ADD_TIME(&iVar1, 0, 7, bVar2, 0);
			}
		}
		Function_57(iParam0, Global_17483[iParam075].f_96);
		Global_17483[iParam075].f_264 = iVar1;
		Global_16876[iParam06] = iVar1;
	}
	else
	{
		Global_17483[iParam075].f_264 = Global_16876[iParam06];
	}
	bParam14 = Function_58(bParam14 * 60);
	ADD_TIME(&uVar0, 0, false, bParam14, 0);
	Global_17483[iParam075].f_260 = uVar0;
	Global_17483[iParam075].f_268 = -1.0f;
	Global_17483[iParam075].f_276 = 4294967295;
	Global_17483[iParam075].f_272 = 4294967295;
	strcpy(&cVar3, "RUN ", 64);
	stradd(&cVar3, bParam9, 64);
	Global_25263++;
}

int Function_57(int iParam0, int iParam1) //Position: 0x1E39 / 7737
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	Global_16876[iParam06].f_20 = iParam1;
	return 1;
}

bool Function_58(int iParam0) //Position: 0x1E5A / 7770
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_59(var uParam0, int iParam1) //Position: 0x1E70 / 7792
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_60(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4) //Position: 0x1E87 / 7815
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_16(2))
	{
		return;
	}
	if (Function_68(&(Global_29008[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (Function_18(uParam0[iVar02], 2))
		{
			if (Function_61(uParam0[iVar02], uParam1[iVar03], iVar0, uParam2, uParam3, iParam4))
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
		Function_73(&(Global_29008[iParam4]), 2048);
	}
}

bool Function_61(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5) //Position: 0x1F39 / 7993
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_68(&(Global_29008[iParam5]), 256))
	{
		return 1;
	}
	if (!Function_18(iParam0, 2))
	{
		return 1;
	}
	if (Function_18(iParam0, 4))
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
		if (Function_63(StackVal, StackVal, *uParam3[iVar020]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_17(iParam0, 4);
	}
	Function_62(StackVal, uParam3[iVar020]);
	return 1;
}

int Function_62(bool bParam0, int iParam1) //Position: 0x20A4 / 8356
{
	vector3 vVar0;
	bool bVar20;
	
	bVar20 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20))
	{
		if (!Function_63(StackVal, StackVal, *iParam1))
		{
			vVar0 = { StackVal, StackVal, *iParam1 };
		}
		if (!Function_63(StackVal, StackVal, *(iParam1 + 12)))
		{
			*(&vVar0 + 12) = { StackVal, StackVal, *(iParam1 + 12) };
		}
		if (!Function_63(StackVal, StackVal, *(iParam1 + 24)))
		{
			*(&vVar0 + 24) = { StackVal, StackVal, *(iParam1 + 24) };
		}
		if (!Function_63(StackVal, StackVal, *(iParam1 + 36)))
		{
			*(&vVar0 + 36) = { StackVal, StackVal, *(iParam1 + 36) };
		}
		if (!Function_63(StackVal, StackVal, *(iParam1 + 48)))
		{
			*(&vVar0 + 48) = { StackVal, StackVal, *(iParam1 + 48) };
		}
		if (!Function_63(StackVal, StackVal, *(iParam1 + 60)))
		{
			*(&vVar0 + 60) = { StackVal, StackVal, *(iParam1 + 60) };
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20);
	}
	return 0;
	return 0;
}

bool Function_63(vector3 vParam0) //Position: 0x21E0 / 8672
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

var Function_64(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, float fParam7) //Position: 0x21F8 / 8696
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	struct<73> Var5;
	
	if (fParam7 > 1.0f)
	{
		fParam7 = 60.0f;
	}
	bVar3 = CREATE_PERS_CHAR_IN_LAYOUT(uParam0, uParam1, uParam2, vParam4, fParam7);
	if (!IS_PERS_CHAR_VALID(bVar3))
	{
		return "";
	}
	bVar4 = CREATE_GRINGO_ON_OBJECT_BY_ID(GET_OBJECT_FROM_PERS_CHAR(bVar3), "Persistent_Char_Brain", uParam3, vVar0, vVar0);
	if (IS_OBJECT_VALID(bVar4))
	{
		ATTACH_OBJECTS(bVar4, GET_OBJECT_FROM_PERS_CHAR(bVar3), Function_65(), 0.0f, 1.5f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
	}
	else
	{
		DESTROY_PERS_CHAR(bVar3);
		return "";
	}
	*(&Var5 + 36) = { StackVal, StackVal, vParam4 };
	Var5 = { StackVal, StackVal, *(&Var5 + 36) };
	*(&Var5 + 12) = { StackVal, StackVal, *(&Var5 + 36) };
	*(&Var5 + 24) = { StackVal, StackVal, *(&Var5 + 36) };
	*(&Var5 + 48) = { StackVal, StackVal, *(&Var5 + 36) };
	*(&Var5 + 60) = { StackVal, StackVal, *(&Var5 + 36) };
	Var5.f_72 = uParam0;
	GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(bVar4), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &Var5, 20);
	return bVar3;
}

var Function_65() //Position: 0x2311 / 8977
{
	float fVar0;
	
	return fVar0;
}

void Function_66(int iParam0, var uParam1, bool bParam2, vector3 vParam3, vector3 vParam6, vector3 vParam9, vector3 vParam12, vector3 vParam15, vector3 vParam18) //Position: 0x2319 / 8985
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_67(StackVal, StackVal, vParam3, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Dawn Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTVECTOR(vParam3);
		PRINTNL();
	}
	if (Function_67(StackVal, StackVal, vParam6, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Morning Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTVECTOR(vParam6);
		PRINTNL();
	}
	if (Function_67(StackVal, StackVal, vParam9, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Noon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTVECTOR(vParam9);
		PRINTNL();
	}
	if (Function_67(StackVal, StackVal, vParam12, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Afternoon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTVECTOR(vParam12);
		PRINTNL();
	}
	if (Function_67(StackVal, StackVal, vParam15, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Evening Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTVECTOR(vParam15);
		PRINTNL();
	}
	if (Function_67(StackVal, StackVal, vParam18, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Night Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTVECTOR(vParam18);
		PRINTNL();
	}
	if (!IS_LAYOUTREF_VALID(bParam2))
	{
		LOG_ERROR("Layout ref not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*uParam1[bVar020] = { StackVal, StackVal, vParam3 };
	*(uParam1[bVar020] + 12) = { StackVal, StackVal, vParam6 };
	*(uParam1[bVar020] + 24) = { StackVal, StackVal, vParam9 };
	*(uParam1[bVar020] + 36) = { StackVal, StackVal, vParam12 };
	*(uParam1[bVar020] + 48) = { StackVal, StackVal, vParam15 };
	*(uParam1[bVar020] + 60) = { StackVal, StackVal, vParam18 };
	uParam1[bVar020]->f_72 = bParam2;
}

bool Function_67(vector3 vParam0, vector3 vParam3) //Position: 0x25C0 / 9664
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

bool Function_68(var uParam0, int iParam1) //Position: 0x25ED / 9709
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_69(var uParam0, var uParam1, int iParam2) //Position: 0x2609 / 9737
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = 0;
	if (!Function_4(iParam2))
	{
		return 1;
	}
	if (StackVal != 5 && Function_33())
	{
		return 1;
	}
	strcpy(&cVar1, Function_21(iParam2), 64);
	if (Function_19())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (Function_68(&(Global_29008[iParam2]), 0x40000000))
	{
		if (!STREAMING_IS_GRINGO_DICTIONARY_LOADED(GET_ASSET_ID(&cVar1, 12)))
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (UNK_0x214AFB8C(StackVal) && Function_18(uParam0[iVar02], 16))
		{
			if (!STREAMING_IS_GRINGO_LOADED(StackVal))
			{
				return 0;
			}
		}
		if (StackVal == 5)
		{
			if ((!(*uParam1)[iVar03] != 4294967295 && !(*uParam1)[iVar03] != 0) && Function_18(uParam0[iVar02], 8))
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

void Function_70(var uParam0, var uParam1, int iParam2) //Position: 0x26EA / 9962
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = 0;
	if (!Function_4(iParam2))
	{
		return;
	}
	if (StackVal != 5 && Function_33())
	{
		return;
	}
	strcpy(&cVar1, Function_21(iParam2), 64);
	if (Function_19())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (!Function_68(&(Global_29008[iParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(&cVar1, 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar1, 12));
			Function_73(&(Global_29008[iParam2]), 0x40000000);
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

int Function_71(bool bParam0) //Position: 0x27D2 / 10194
{
	bool bVar0;
	vector3 vVar1;
	var uVar4;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	char* cVar13[32];
	
	if (IS_LAYOUTREF_VALID(bParam0))
	{
		bVar7 = CREATE_OBJECT_ITERATOR(bParam0);
		ITERATE_ON_OBJECT_TYPE(bVar7, 12);
		ITERATE_ON_PARTIAL_NAME(bVar7, "nCampfire0");
		bVar0 = START_OBJECT_ITERATOR(bVar7);
		while (IS_OBJECT_VALID(bVar0))
		{
			bVar8 = RAND_INT_RANGE(true, 10000) > 2750;
			bVar9 = (((bVar8 || DECOR_CHECK_EXIST(bVar0, "guero")) || DECOR_CHECK_EXIST(bVar0, "always")) || Global_3370);
			bVar10 = Function_33();
			bVar11 = (Function_31() && !Function_72(1, 1));
			if (bVar9 && !bVar10)
			{
			}
			else if ((bVar10 && Function_31()) && DECOR_CHECK_EXIST(bVar0, "MP_ONLY"))
			{
			}
			else if (bVar10 && !bVar11)
			{
				bVar12 = GET_GRINGO_FROM_OBJECT(bVar0);
				if (IS_GRINGO_VALID(bVar12))
				{
					GRINGO_ALLOW_ACTIVATION(bVar12, false);
				}
			}
			else
			{
				GET_OBJECT_POSITION(bVar0, &vVar1);
				GET_OBJECT_ORIENTATION(bVar0, &uVar4);
				strcpy(&cVar13, "p", 32);
				stradd(&cVar13, GET_OBJECT_NAME(bVar0), 32);
				CREATE_POINT_IN_LAYOUT(bParam0, &cVar13, vVar1, 0.0f, 0.0f, 0.0f);
				DESTROY_OBJECT(bVar0);
			}
			bVar0 = OBJECT_ITERATOR_NEXT(bVar7);
		}
		DESTROY_ITERATOR(bVar7);
		return 1;
	}
	LOG_ERROR("District layout isn't valid can't setup campfires");
	return 0;
}

bool Function_72(int iParam0, bool bParam1) //Position: 0x291B / 10523
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

void Function_73(var uParam0, int iParam1) //Position: 0x293B / 10555
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_74() //Position: 0x294A / 10570
{
	bool bVar0;
	
	Function_82(3, 3);
	bVar0 = bVar0;
	Function_80(&Local_157 + 4, "$/content/scripting/gringo/simplegringo/campfireriverside", 1, 0);
	Function_80(&Local_157 + 4, "$/content/scripting/gringo/simplegringo/horse_stay", 1, 0);
	Function_80(&Local_157 + 4, "$/content/scripting/gringo/simplegringo/campfire04", 1, 0);
	Function_80(&Local_157 + 4, "$/content/scripting/gringo/simplegringo/campfirecold", 1, 0);
	Function_80(&Local_157 + 4, "$/content/scripting/gringo/simplegringo/campfire03", 1, 0);
	Function_80(&Local_157 + 4, "$/content/scripting/gringo/simplegringo/campfire02", 1, 0);
	Function_80(&Local_157 + 4, "$/content/scripting/gringo/simplegringo/campfire01", 1, 0);
	Function_80(&Local_157 + 4, "$/content/scripting/gringo/simplegringo/campfire05", 1, 0);
	Function_80(&Local_157 + 4, "$/content/scripting/gringo/simplegringo/campfire06", 1, 0);
	Function_80(&Local_157 + 4, "$/content/scripting/gringo/simplegringo/campfire03_bad", 1, 0);
	Function_80(&Local_157 + 4, "$/content/scripting/gringo/simplegringo/campfirecold_bad", 1, 0);
	Function_80(&Local_157 + 4, "$/content/scripting/gringo/simplegringo/campfireriverside_bad", 1, 0);
	Function_80(&Local_157 + 4, "$/content/scripting/gringo/simplegringo/campfire01_bad", 1, 0);
	Function_80(&Local_157 + 4, "$/content/scripting/gringo/simplegringo/campfire07", 1, 0);
	Function_80(&Local_157 + 4, "$/content/scripting/gringo/simplegringo/locked_footlocker", 1, 0);
	Function_80(&Local_157 + 4, "$/content/scripting/gringo/simplegringo/treasure_hunting_final", 1, 0);
	Function_80(&Local_157 + 4, "$/content/scripting/gringo/simplegringo/player_herb_violetsnowdrop", 1, 0);
	Function_80(&Local_157 + 4, "$/content/scripting/gringo/simplegringo/player_herb_hummingbirdsage", 1, 0);
	Function_80(&Local_157 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_80(&Local_157 + 4, "$/content/scripting/gringo/simplegringo/sit_cleanpistol", 1, 0);
	Function_80(&Local_157 + 4, "$/content/scripting/gringo/simplegringo/whittle_wood", 1, 0);
	Function_80(&Local_157 + 4, "$/content/scripting/gringo/simplegringo/stand_spit", 1, 0);
	Function_80(&Local_157 + 4, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_80(&Local_157 + 4, "$/content/scripting/gringo/simplegringo/sit_no_table", 1, 0);
	Function_80(&Local_157 + 4, "$/content/scripting/gringo/simplegringo/horse_tend", 1, 0);
	Function_80(&Local_157 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_smoke", 1, 0);
	Function_80(&Local_157 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_play_harmonica", 1, 0);
	Function_80(&Local_157 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_drink", 1, 0);
	Function_80(&Local_157 + 4, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_80(&Local_157 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_80(&Local_157 + 4, "$/content/scripting/gringo/simplegringo/stand_yawning_n_any", 1, 0);
	Function_80(&Local_157 + 4, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_80(&Local_157 + 4, "$/content/scripting/gringo/simplegringo/skin_scraper", 1, 0);
	Function_80(&Local_157 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_r", 1, 0);
	Function_80(&Local_157 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_80(&Local_157 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_80(&Local_157 + 4, "$/content/scripting/gringo/simplegringo/sit_camp_coffee_drink", 1, 0);
	Function_80(&Local_157 + 4, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_80(&Local_157 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_campfire_tend", 1, 0);
	Function_80(&Local_157 + 4, "$/content/scripting/gringo/simplegringo/sit_docks", 1, 0);
	Function_80(&Local_157 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_80(&Local_157 + 4, "$/content/scripting/gringo/simplegringo/lean_rail", 1, 0);
	Function_80(&Local_157 + 4, "$/content/scripting/gringo/simplegringo/lean_fence_l_talking", 1, 0);
	Function_80(&Local_157 + 4, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_80(&Local_157 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_smoke_pipe", 1, 0);
	Function_80(&Local_157 + 4, "$/content/scripting/gringo/simplegringo/sit_cleanrifle", 1, 0);
	Function_80(&Local_157 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_shoulder_l", 1, 0);
	Function_80(&Local_157 + 4, "$/content/scripting/gringo/simplegringo/stand_announce", 1, 0);
	if (!Function_75(&Local_157 + 4))
	{
		return 0;
	}
	Local_157 = FIND_NAMED_LAYOUT("TallTrees_layout");
	if (!IS_LAYOUTREF_VALID(Local_157))
	{
		Local_157 = CREATE_LAYOUT("TallTrees_layout");
	}
	Local_157.f_584 = CREATE_POINT_IN_LAYOUT(Local_157, "tallf_bhint", -1040.393f, 184.047f, 1377.772f, 0.0f, 169.34f, 0.0f);
	Local_157.f_588 = CREATE_POINT_IN_LAYOUT(Local_157, "tallf_bhint1", -495.255f, 144.499f, 1927.976f, 0.0f, 100.686f, 0.0f);
	Local_157.f_592 = CREATE_POINT_IN_LAYOUT(Local_157, "tallf_bhint2", -461.26f, 140.187f, 1929.024f, 0.0f, 175.373f, 0.0f);
	*(&Local_157 + 596) = { -844.585f, 189.753f, 1583.111f };
	*(&Local_157 + 596 + 12) = { 0.0f, 174.998f, 0.0f };
	Local_157.f_620 = CREATE_POINT_IN_LAYOUT(Local_157, "tallf_bhint3", -844.585f, 189.753f, 1583.111f, 0.0f, 174.998f, 0.0f);
	*(&Local_157 + 624) = { -733.6751f, 229.0498f, 1132.0f };
	*(&Local_157 + 624 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_157.f_648 = CREATE_POINT_IN_LAYOUT(Local_157, "tallf_bhint4", -733.6751f, 229.0498f, 1132.0f, 0.0f, 0.0f, 0.0f);
	*(&Local_157 + 652) = { -482.9754f, 71.90712f, 2203.033f };
	*(&Local_157 + 652 + 12) = { -0.05455317f, -0.02802815f, 0.08660866f };
	Local_157.f_676 = CREATE_POINT_IN_LAYOUT(Local_157, "tallf_bhint7", -482.9754f, 71.90712f, 2203.033f, -0.05455317f, -0.02802815f, 0.08660866f);
	*(&Local_157 + 680) = { -499.047f, 75.045f, 2209.638f };
	*(&Local_157 + 680 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_157.f_704 = CREATE_POINT_IN_LAYOUT(Local_157, "talf_bhint8", -499.047f, 75.045f, 2209.638f, 0.0f, 0.0f, 0.0f);
	*(&Local_157 + 708) = { -479.216f, 74.86f, 2216.221f };
	*(&Local_157 + 708 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_157.f_732 = CREATE_POINT_IN_LAYOUT(Local_157, "talf_bhint9", -479.216f, 74.86f, 2216.221f, 0.0f, 0.0f, 0.0f);
	*(&Local_157 + 736) = { -492.624f, 73.197f, 2215.717f };
	*(&Local_157 + 736 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_157.f_760 = CREATE_POINT_IN_LAYOUT(Local_157, "talf_bhint10", -492.624f, 73.197f, 2215.717f, 0.0f, 0.0f, 0.0f);
	*(&Local_157 + 764) = { -734.578f, 226.755f, 1107.767f };
	*(&Local_157 + 764 + 12) = { 0.0f, 164.027f, 0.0f };
	Local_157.f_788 = CREATE_POINT_IN_LAYOUT(Local_157, "talf_bhint11", -734.578f, 226.755f, 1107.767f, 0.0f, 164.027f, 0.0f);
	Local_157.f_792 = CREATE_POINT_IN_LAYOUT(Local_157, "tallf_bhint8", -1044.787f, 184.066f, 1375.618f, 0.0f, 314.542f, 0.0f);
	*(&Local_157 + 796) = { -465.413f, 142.624f, 1895.747f };
	*(&Local_157 + 796 + 12) = { 0.0f, 48.377f, 0.0f };
	Local_157.f_820 = CREATE_POINT_IN_LAYOUT(Local_157, "tallf_bhint9", -465.413f, 142.624f, 1895.747f, 0.0f, 48.377f, 0.0f);
	Local_157.f_824 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Campfire026", "CampfireRiverside", -1178.529f, 187.3804f, 1427.134f, 0.0f, 114.3875f, 0.0f);
	DECOR_SET_BOOL(Local_157.f_824, "MP_ONLY", true);
	Local_157.f_828 = CREATE_GRINGO_IN_LAYOUT(Local_157, "nek_horse_stay3", "horse_stay", -723.721f, 226.011f, 1122.191f, 0.0f, -87.53077f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_157.f_828), 0);
	Local_157.f_832 = CREATE_GRINGO_IN_LAYOUT(Local_157, "nek_horse_stay2", "horse_stay", -727.61f, 226.223f, 1120.39f, 0.0f, -253.3726f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_157.f_832), 0);
	Local_157.f_836 = CREATE_GRINGO_IN_LAYOUT(Local_157, "nek_horse_stay1", "horse_stay", -754.41f, 228.791f, 1131.354f, 0.0f, -78.61452f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_157.f_836), 0);
	Local_157.f_840 = CREATE_GRINGO_IN_LAYOUT(Local_157, "nek_horse_stay", "horse_stay", -749.865f, 227.201f, 1121.549f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_157.f_840), 0);
	Local_157.f_844 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Campfire02", "Campfire04", -826.3951f, 188.6447f, 1592.663f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(Local_157.f_844, "MP_ONLY", true);
	Local_157.f_848 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Campfire03", "CampfireCold", -953.7663f, 184.7204f, 1384.012f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(Local_157.f_848, "MP_ONLY", true);
	Local_157.f_852 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Campfire04", "CampfireRiverside", -1121.701f, 183.6618f, 1423.662f, 0.0f, 185.3342f, 0.0f);
	Local_157.f_856 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Campfire05", "CampfireRiverside", -865.7731f, 186.6494f, 1434.022f, 0.0f, 0.0f, 0.0f);
	Local_157.f_860 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Campfire06", "CampfireCold", -667.6184f, 167.5303f, 1272.634f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(Local_157.f_860, "MP_ONLY", true);
	Local_157.f_864 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Campfire07", "Campfire03", -688.0001f, 177.6941f, 1697.287f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(Local_157.f_864, "MP_ONLY", true);
	Local_157.f_868 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Campfire010", "Campfire02", -684.042f, 151.589f, 1867.911f, 0.0f, 0.0f, 0.0f);
	Local_157.f_872 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Campfire011", "Campfire01", -783.4873f, 183.5395f, 1609.595f, 0.0f, 0.0f, 0.0f);
	Local_157.f_876 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Campfire012", "Campfire02", -393.5763f, 142.8359f, 1442.498f, 0.0f, 109.7906f, 0.0f);
	DECOR_SET_BOOL(Local_157.f_876, "MP_ONLY", true);
	Local_157.f_880 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Campfire013", "Campfire02", -532.9274f, 148.5803f, 1914.19f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(Local_157.f_880, "MP_ONLY", true);
	Local_157.f_884 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Campfire014", "Campfire05", -284.9606f, 141.8196f, 1834.855f, 0.0f, 119.2059f, 0.0f);
	DECOR_SET_BOOL(Local_157.f_884, "MP_ONLY", true);
	Local_157.f_888 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Campfire017", "CampfireRiverside", -939.5017f, 183.7175f, 1482.246f, 0.0f, 0.0f, 0.0f);
	Local_157.f_892 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Campfire018", "Campfire06", -712.1743f, 178.3837f, 1651.831f, 0.0f, 0.0f, 0.0f);
	Local_157.f_896 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Campfire019", "Campfire03_bad", -336.4126f, 149.9332f, 1803.945f, 0.0f, 0.0f, 0.0f);
	Local_157.f_900 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Campfire020", "CampfireRiverside", -808.9734f, 186.5144f, 1572.36f, 0.0f, 0.0f, 0.0f);
	Local_157.f_904 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Campfire021", "CampfireRiverside", -282.8439f, 130.5098f, 1420.0f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(Local_157.f_904, "MP_ONLY", true);
	Local_157.f_908 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Campfire023", "CampfireCold_bad", -216.5455f, 123.4823f, 1456f, 0.0f, 0.0f, 0.0f);
	Local_157.f_912 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Campfire024", "CampfireRiverside_bad", -200.829f, 119.4666f, 1192.215f, 0.0f, 0.0f, 0.0f);
	Local_157.f_916 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Campfire025", "Campfire03_bad", -406.2614f, 135.0844f, 1883.666f, 0.0f, 0.0f, 0.0f);
	Local_157.f_920 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Campfire01_bad", "Campfire01_bad", -465.1943f, 131.7177f, 1189.942f, 0.0f, -101.9659f, 0.0f);
	Local_157.f_924 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Campfire01_bad1", "CampfireRiverside_bad", -724.3436f, 175.6862f, 1414.882f, 0.0f, 0.0f, 0.0f);
	Local_157.f_928 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Campfire01_bad3", "CampfireRiverside_bad", -564.0f, 159.6234f, 1332.496f, 0.0f, 0.0f, 0.0f);
	Local_157.f_932 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Campfire01_bad4", "Campfire01_bad", -380f, 141.5529f, 1316f, 0.0f, -18.4812f, 0.0f);
	Local_157.f_936 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Campfire01_bad5", "CampfireRiverside_bad", -626.4926f, 167.6548f, 1332.368f, 0.0f, 0.0f, 0.0f);
	Local_157.f_940 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Campfire01_bad6", "CampfireCold_bad", -584.0f, 128.502f, 565.1566f, 0.0f, 0.0f, 0.0f);
	Local_157.f_944 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Campfire01_bad7", "Campfire05", -694.0187f, 185.6706f, 1552.725f, 0.0f, -132.2762f, 0.0f);
	Local_157.f_948 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Campfire01_bad9", "Campfire01_bad", -645.9846f, 184.0639f, 1583.066f, 0.0f, 95.84392f, 0.0f);
	Local_157.f_952 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Campfire01_bad10", "Campfire01", -477.348f, 142.595f, 1936.187f, 0.0f, 0.0f, 0.0f);
	Local_157.f_956 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Campfire01_bad11", "Campfire03", -561.7342f, 150.5881f, 1920f, 0.0f, -206.0948f, 0.0f);
	Local_157.f_960 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Campfire01_bad13", "Campfire03", -383.6781f, 112.4391f, 1987.174f, 0.0f, -18.25743f, 0.0f);
	Local_157.f_964 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Campfire01_bad16", "Campfire01", -303.3736f, 123.4823f, 1918.975f, 0.0f, 128.3977f, 0.0f);
	Local_157.f_968 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Campfire01_bad17", "Campfire03", -465.4048f, 148.5803f, 1833.911f, 0.0f, 0.0f, 0.0f);
	Local_157.f_972 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Campfire01_bad18", "Campfire03", -568.0001f, 167.6548f, 1699.499f, 0.0f, 0.0f, 0.0f);
	Local_157.f_976 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Campfire01_bad19", "Campfire05", -604.6556f, 174.6786f, 1675.709f, 0.0f, 0.0f, 0.0f);
	Local_157.f_980 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Campfire01_bad20", "CampfireCold", -664.0001f, 185.7253f, 1562.867f, 0.0f, 0.0f, 0.0f);
	Local_157.f_984 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Campfire01_bad21", "Campfire01_bad", -856.3843f, 190.986f, 1240.21f, 0.0f, 0.0f, 0.0f);
	Local_157.f_988 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Campfire01_bad22", "CampfireCold_bad", -885.8465f, 189.7411f, 1334.035f, 0.0f, 0.0f, 0.0f);
	Local_157.f_992 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Campfire01_bad23", "Campfire03_bad", -1108.955f, 182.1756f, 1493.125f, 0.0f, -165.2193f, 0.0f);
	Local_157.f_996 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Campfire01_bad24", "CampfireCold_bad", -760.5605f, 174.6452f, 1290.605f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1000 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Campfire01_bad25", "CampfireCold", -591.5842f, 160.7838f, 1289.88f, 0.0f, -27.09079f, 0.0f);
	Local_157.f_1004 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Campfire03_bad", "Campfire01", -347.0103f, 136.5333f, 1515.952f, 0.0f, 188.5285f, 0.0f);
	Local_157.f_1008 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Campfire03_bad1", "Campfire03", -183.539f, 120.8117f, 1494.249f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1012 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Campfire03_bad2", "Campfire05", -104.0f, 117.5716f, 1627.999f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1016 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Campfire03_bad3", "Campfire05", -144.1865f, 122.4783f, 1784.669f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1020 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Campfire03_bad4", "Campfire03", -6.00997f, 115.2517f, 1708f, 0.0f, 85.13908f, 0.0f);
	Local_157.f_1024 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Campfire03_bad5", "Campfire05", -90.811f, 119.3543f, 1773.976f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1028 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Campfire03_bad6", "Campfire07", -4.000009f, 115.3599f, 1653.929f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1032 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Campfire03_bad7", "Campfire01", -52.0f, 117.1019f, 1610.341f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1036 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Campfire03_bad8", "CampfireCold", -107.0271f, 117.4587f, 1544.972f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1040 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Campfire03_bad9", "Campfire03", -266.1858f, 130.5098f, 1316.865f, 0.0f, -145.1019f, 0.0f);
	Local_157.f_1044 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Campfire03_bad11", "Campfire05", 46.2207f, 100.4691f, 1842.221f, 0.0f, 91.96018f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Locked_Footlocker", "Locked_Footlocker", -355.125f, 82.322f, 2203.95f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Locked_Footlocker1", "Locked_Footlocker", -552.7213f, 151.5033f, 1944.947f, 0.0f, 140.6843f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Locked_Footlocker2", "Locked_Footlocker", -737.6036f, 226.3215f, 1106.811f, 0.0f, -127.9761f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_157.f_1048 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Locked_Footlocker3", "Locked_Footlocker", -1046.258f, 184.066f, 1374.558f, 0.0f, -88.97791f, 0.0f);
	DECOR_SET_BOOL(Local_157.f_1048, "scrap", true);
	Local_157.f_1052 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Locked_Footlocker4", "Locked_Footlocker", -495.7857f, 169.1581f, 1668.153f, 0.0f, -28.25195f, 0.0f);
	Local_157.f_1056 = CREATE_GRINGO_IN_LAYOUT(Local_157, "treasure_hunting_final", "treasure_hunting_final", -730.9482f, 226.3736f, 1105.583f, 0.0f, 289.8541f, 0.0f);
	Local_157.f_1060 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_VioletSnowdrop9", "Player_Herb_VioletSnowdrop", -894.1646f, 201.9576f, 1528f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1064 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_VioletSnowdrop8", "Player_Herb_VioletSnowdrop", -812.3889f, 186.0371f, 1232.813f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1068 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_VioletSnowdrop7", "Player_Herb_VioletSnowdrop", -811.6999f, 179.2376f, 1384f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1072 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_VioletSnowdrop6", "Player_Herb_VioletSnowdrop", -961.0168f, 182.3751f, 1459.109f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1076 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_VioletSnowdrop5", "Player_Herb_VioletSnowdrop", -1011.03f, 185.2311f, 1374.426f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1080 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_VioletSnowdrop40", "Player_Herb_VioletSnowdrop", -680.0544f, 169.5147f, 1260.078f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1084 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_VioletSnowdrop4", "Player_Herb_VioletSnowdrop", -876.0f, 193.718f, 1235.349f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1088 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_VioletSnowdrop39", "Player_Herb_VioletSnowdrop", -608.3892f, 169.8096f, 1178.253f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1092 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_VioletSnowdrop38", "Player_Herb_VioletSnowdrop", -425.9355f, 142.9052f, 1249.295f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1096 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_VioletSnowdrop37", "Player_Herb_VioletSnowdrop", -304.0f, 133.4919f, 1336f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1100 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_VioletSnowdrop36", "Player_Herb_VioletSnowdrop", -446.1278f, 131.3868f, 1201.03f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1104 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_VioletSnowdrop35", "Player_Herb_VioletSnowdrop", -421.5536f, 142.423f, 1254.451f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1108 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_VioletSnowdrop34", "Player_Herb_VioletSnowdrop", -594.7793f, 160.395f, 1281.692f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1112 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_VioletSnowdrop33", "Player_Herb_VioletSnowdrop", -720.0f, 169.6626f, 1344f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1116 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_VioletSnowdrop32", "Player_Herb_VioletSnowdrop", -688.0f, 169.5147f, 1272.0f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1120 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_VioletSnowdrop31", "Player_Herb_VioletSnowdrop", -932.0116f, 194.7607f, 1315.988f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1124 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_VioletSnowdrop30", "Player_Herb_VioletSnowdrop", -840.0f, 184.7214f, 1302.519f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1128 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_VioletSnowdrop3", "Player_Herb_VioletSnowdrop", -905.4869f, 196.5365f, 1267.151f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1132 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_VioletSnowdrop29", "Player_Herb_VioletSnowdrop", 302.0675f, 114.1615f, 1725.442f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1136 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_VioletSnowdrop28", "Player_Herb_VioletSnowdrop", -820.2811f, 185.863f, 1248.281f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1140 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_VioletSnowdrop27", "Player_Herb_VioletSnowdrop", -809.2433f, 183.7228f, 1175.171f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1144 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_VioletSnowdrop26", "Player_Herb_VioletSnowdrop", -419.5688f, 116.6903f, 1152.93f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1148 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_VioletSnowdrop25", "Player_Herb_VioletSnowdrop", -262.4087f, 116.0961f, 1224.747f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1152 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_VioletSnowdrop24", "Player_Herb_VioletSnowdrop", -363.0544f, 117.723f, 1220.947f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1156 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_VioletSnowdrop23", "Player_Herb_VioletSnowdrop", -701.5494f, 174.4512f, 1202.581f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1160 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_VioletSnowdrop22", "Player_Herb_VioletSnowdrop", -615.6915f, 168.5812f, 1100.308f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1164 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_VioletSnowdrop21", "Player_Herb_VioletSnowdrop", -490.3961f, 126.1658f, 1040.729f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1168 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_VioletSnowdrop20", "Player_Herb_VioletSnowdrop", -619.6085f, 169.5643f, 1048f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1172 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_VioletSnowdrop2", "Player_Herb_VioletSnowdrop", -1080.0f, 188.8414f, 1354.991f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1176 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_VioletSnowdrop19", "Player_Herb_VioletSnowdrop", -617.6307f, 142.4992f, 904.0003f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1180 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_VioletSnowdrop18", "Player_Herb_VioletSnowdrop", -548.0001f, 127.1276f, 916.0f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1184 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_VioletSnowdrop17", "Player_Herb_VioletSnowdrop", -642.6788f, 140.233f, 844.8235f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1188 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_VioletSnowdrop16", "Player_Herb_VioletSnowdrop", -777.1317f, 184.4256f, 812.6071f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1192 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_VioletSnowdrop15", "Player_Herb_VioletSnowdrop", -902.608f, 206.3865f, 1094.384f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1196 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_VioletSnowdrop14", "Player_Herb_VioletSnowdrop", -718.998f, 225.2521f, 1120.439f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1200 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_VioletSnowdrop13", "Player_Herb_VioletSnowdrop", -846.9979f, 211.9342f, 1084.518f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1204 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_VioletSnowdrop12", "Player_Herb_VioletSnowdrop", -872.0032f, 197.4375f, 1128.003f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1208 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_VioletSnowdrop11", "Player_Herb_VioletSnowdrop", -791.0549f, 199.3337f, 1202.918f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1212 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_VioletSnowdrop10", "Player_Herb_VioletSnowdrop", -1084.32f, 182.37f, 1497.451f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1216 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_VioletSnowdrop", "Player_Herb_VioletSnowdrop", -1202.184f, 187.051f, 1428.522f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1220 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_HummingbirdSage9", "Player_Herb_HummingbirdSage", -650.5471f, 96.37646f, 2073.051f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1224 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_HummingbirdSage8", "Player_Herb_HummingbirdSage", -573.9288f, 150.5809f, 1908f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1228 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_HummingbirdSage7", "Player_Herb_HummingbirdSage", -424.0f, 125.4901f, 2010.173f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1232 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_HummingbirdSage60", "Player_Herb_HummingbirdSage", 12.0f, 115.419f, 1664.0f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1236 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_HummingbirdSage6", "Player_Herb_HummingbirdSage", -353.9566f, 82.26611f, 2188.0f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1240 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_HummingbirdSage59", "Player_Herb_HummingbirdSage", -163.3843f, 128.289f, 1739.229f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1244 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_HummingbirdSage58", "Player_Herb_HummingbirdSage", -579.093f, 167.1844f, 1389.167f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1248 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_HummingbirdSage57", "Player_Herb_HummingbirdSage", -687.5864f, 181.1271f, 1608.589f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1252 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_HummingbirdSage56", "Player_Herb_HummingbirdSage", -403.8828f, 147.4588f, 1476.553f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1256 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_HummingbirdSage55", "Player_Herb_HummingbirdSage", -559.6156f, 168.6587f, 1462.071f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1260 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_HummingbirdSage54", "Player_Herb_HummingbirdSage", -725.5195f, 175.5069f, 1673.499f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1264 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_HummingbirdSage53", "Player_Herb_HummingbirdSage", -574.4073f, 175.7316f, 1655.52f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1268 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_HummingbirdSage52", "Player_Herb_HummingbirdSage", -348.0f, 147.4612f, 1679.097f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1272 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_HummingbirdSage51", "Player_Herb_HummingbirdSage", -306.1377f, 144.2182f, 1825.862f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1276 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_HummingbirdSage50", "Player_Herb_HummingbirdSage", -673.0797f, 152.1978f, 1871.119f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1280 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_HummingbirdSage49", "Player_Herb_HummingbirdSage", -317.0758f, 84.27249f, 2137.3f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1284 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_HummingbirdSage48", "Player_Herb_HummingbirdSage", 206.5806f, 90.17886f, 1944.086f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1288 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_HummingbirdSage47", "Player_Herb_HummingbirdSage", 138.0592f, 82.85904f, 2006.355f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1292 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_HummingbirdSage46", "Player_Herb_HummingbirdSage", 168.0f, 107.4897f, 1856f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1296 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_HummingbirdSage45", "Player_Herb_HummingbirdSage", -619.5699f, 175.5661f, 1659.533f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1300 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_HummingbirdSage44", "Player_Herb_HummingbirdSage", -448.0f, 162.0204f, 1731.15f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1304 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_HummingbirdSage43", "Player_Herb_HummingbirdSage", -498.1167f, 151.3338f, 1826.184f, 0.0f, 0.0f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_HummingbirdSage42", "Player_Herb_HummingbirdSage", -300.2108f, 131.726f, 1391.249f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_157.f_1308 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_HummingbirdSage41", "Player_Herb_HummingbirdSage", -158.0741f, 123.4823f, 1425.278f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1312 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_HummingbirdSage40", "Player_Herb_HummingbirdSage", -44.00006f, 122.5702f, 1500.0f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1316 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_HummingbirdSage4", "Player_Herb_HummingbirdSage", 45.43288f, 79.5917f, 1964.184f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1320 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_HummingbirdSage39", "Player_Herb_HummingbirdSage", -452.7934f, 152.526f, 1446.807f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1324 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_HummingbirdSage38", "Player_Herb_HummingbirdSage", -596.0001f, 177.6941f, 1516f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1328 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_HummingbirdSage37", "Player_Herb_HummingbirdSage", -661.3279f, 173.4927f, 1435.57f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1332 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_HummingbirdSage36", "Player_Herb_HummingbirdSage", -725.7597f, 176.6901f, 1397.993f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1336 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_HummingbirdSage35", "Player_Herb_HummingbirdSage", -908.0408f, 184.1334f, 1576.069f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1340 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_HummingbirdSage34", "Player_Herb_HummingbirdSage", -838.2128f, 189.6234f, 1596.025f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1344 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_HummingbirdSage33", "Player_Herb_HummingbirdSage", -809.653f, 157.0472f, 1697.251f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1348 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_HummingbirdSage32", "Player_Herb_HummingbirdSage", -757.8369f, 176.4141f, 1655.508f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1352 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_HummingbirdSage31", "Player_Herb_HummingbirdSage", -668.0446f, 175.4476f, 1657.019f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1356 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_HummingbirdSage30", "Player_Herb_HummingbirdSage", -283.9931f, 130.5098f, 1488.106f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1360 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_HummingbirdSage3", "Player_Herb_HummingbirdSage", -95.99991f, 81.28975f, 2144.053f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1364 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_HummingbirdSage29", "Player_Herb_HummingbirdSage", -436f, 147.7323f, 1473.89f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1368 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_HummingbirdSage28", "Player_Herb_HummingbirdSage", -320.8492f, 142.4725f, 1596.957f, 0.0f, 0.0f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "bcc_rand_idle_stand9", "rand_idle_stand", -467.906f, 142.681f, 1896.019f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "bcc_sit_cleanpistol1", "sit_cleanpistol", -464.486f, 140.173f, 1931.761f, 0.0f, -92.88916f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "bcc_rand_idle_stand8", "rand_idle_stand", -456.888f, 140.187f, 1926.388f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "bcc_rand_idle_stand7", "rand_idle_stand", -459.856f, 140.187f, 1926.487f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "bcc_whittle_wood1", "whittle_wood", -468.799f, 140.454f, 1920.274f, 0.0f, -56.59673f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "bcc_stand_spit1", "stand_spit", -475.174f, 141.513f, 1926.68f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "bcc_stand_guntricks_e_any4", "stand_guntricks_e_any", -465.096f, 140.295f, 1921.414f, 0.0f, -243.9603f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "bcc_rand_idle_stand6", "rand_idle_stand", -459.367f, 140.156f, 1923.3f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "bcc_stand_guntricks_e_any3", "stand_guntricks_e_any", -494.201f, 144.499f, 1927.552f, 0.0f, -243.9603f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "bcc_rand_idle_stand5", "rand_idle_stand", -490.425f, 144.473f, 1931.007f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "bcc_rand_idle_stand4", "rand_idle_stand", -495.447f, 144.499f, 1930.373f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "bcc_rand_idle_stand3", "rand_idle_stand", -498.908f, 144.942f, 1920.393f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "bcc_sit_no_table1", "sit_no_table", -536.7271f, 146.6513f, 1880.275f, 0.0f, -79.20766f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "bcc_rand_idle_stand2", "rand_idle_stand", -465.725f, 142.647f, 1898.082f, 0.0f, -19.29583f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "bcc_rand_idle_stand1", "rand_idle_stand", -522.4897f, 146.646f, 1888.277f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "bcc_stand_guntricks_e_any", "stand_guntricks_e_any", -531.7095f, 146.6513f, 1878.072f, 0.0f, -243.9603f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Tnr_stand_guntricks1", "stand_guntricks_e_any", -848.164f, 189.677f, 1589.346f, 0.0f, -152.5991f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Tnr_rand_idle_stand2", "rand_idle_stand", -843.486f, 189.681f, 1590.27f, 0.0f, 139.7007f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Tnr_rand_idle_stand1", "rand_idle_stand", -843.403f, 189.753f, 1585.25f, 0.0f, 139.7007f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Tnr_rand_idle_stand", "rand_idle_stand", -844.634f, 189.753f, 1582.716f, 0.0f, 139.7007f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "mtf_horse_stay7", "horse_stay", -491.1115f, 72.58714f, 2207.955f, 0.0f, 85.92881f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "mtf_horse_tend7", "horse_tend", -491.2f, 72.336f, 2199.114f, 0.0f, -170.8492f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "mtf_horse_stay6", "horse_stay", -481.9098f, 72.66555f, 2210.361f, 0.0f, -48.69083f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "mtf_horse_tend6", "horse_tend", -501.957f, 75.46127f, 2230.747f, 0.0f, 217.4179f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "mtf_sit_ground_smoke2", "sit_ground_smoke", -484.3089f, 71.97777f, 2204.32f, 0.0f, -51.32996f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "mtf_sit_ground_smoke", "sit_ground_smoke", -481.8283f, 71.87337f, 2201.816f, 0.0f, 129.3626f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "mtf_sit_ground_play_harmonica", "sit_ground_play_harmonica", -485.3011f, 72.0527f, 2202.761f, 0.0f, -94.26432f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "mtf_Sit_Ground_Drink", "Sit_Ground_Drink", -482.041f, 71.90236f, 2205.006f, 0.0f, 18.83562f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "mtf_stand_lookdistance_w_any3", "stand_lookdistance_w_any", -477.8579f, 71.79588f, 2203.276f, 0.0f, -71.12064f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "mtf_stand_lookdistance_w_any2", "stand_lookdistance_w_any", -481.474f, 71.80349f, 2199.808f, 0.0f, -18.62923f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_157.f_1372 = CREATE_GRINGO_IN_LAYOUT(Local_157, "mtf_stand_lookdistance_w_any1", "stand_lookdistance_w_any", -486.1086f, 72.11655f, 2200.902f, 0.0f, -18.62923f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_157.f_1372), 0);
	Local_157.f_1376 = CREATE_GRINGO_IN_LAYOUT(Local_157, "mtf_stand_lookdistance_w_any", "stand_lookdistance_w_any", -485.8302f, 72.53257f, 2211.344f, 0.0f, 162.0719f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_157.f_1376), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "mtf_stand_lookdistance3", "stand_lookdistance_w_any", -483.8687f, 75.67455f, 2243.048f, 0.0f, 176.216f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "mtf_Rand_Idle_Sit_Ground2", "Rand_Idle_Sit_Ground", -483.075f, 71.961f, 2201.818f, 0.0f, -156.7047f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "mtf_rand_idle_stand2", "rand_idle_stand", -513.642f, 78.714f, 2228.851f, 0.0f, 139.7007f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "mtf_rand_idle_stand1", "rand_idle_stand", -494.992f, 74.165f, 2222.989f, 0.0f, 139.7007f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "mtf_stand_yawning_n_any1", "stand_yawning_n_any", -476.394f, 72.594f, 2208.338f, 0.0f, 103.7064f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "mtf_Rand_Idle_Sit_Ground1", "Rand_Idle_Sit_Ground", -489.555f, 72.364f, 2204.134f, 0.0f, -156.7047f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "mtf_horse_tend5", "horse_tend", -491.3683f, 72.87353f, 2213.774f, 0.0f, -122.2253f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "mtf_horse_stay5", "horse_stay", -483.0219f, 72.43819f, 2207.555f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "mtf_horse_tend4", "horse_tend", -490.959f, 72.65787f, 2211.081f, 0.0f, -457.3993f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "mtf_horse_stay4", "horse_stay", -494.391f, 73.535f, 2216.439f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "mtf_Pee2", "Pee", -500.917f, 75.958f, 2222.902f, 0.0f, 49.93821f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "mtf_stand_guntricks_e_any1", "stand_guntricks_e_any", -502.51f, 75.94456f, 2226.066f, 0.0f, -138.6134f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "mtf_stand_lookdistance2", "stand_lookdistance_w_any", -506.2025f, 76.37253f, 2229.087f, 0.0f, 206.1628f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Tnr_stand_lookdistance5", "stand_lookdistance_w_any", -869.239f, 184.363f, 1622.015f, 0.0f, -115.6206f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Tnr_stand_lookdistance4", "stand_lookdistance_w_any", -892.603f, 184.307f, 1598.662f, 0.0f, -115.6206f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Tnr_stand_lookdistance3", "stand_lookdistance_w_any", -898.47f, 196.766f, 1553.119f, 0.0f, -115.6206f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Tnr_stand_lookdistance2", "stand_lookdistance_w_any", -842.423f, 195.287f, 1517.248f, 0.0f, -115.6206f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Tnr_stand_lookdistance1", "stand_lookdistance_w_any", -850.515f, 199.951f, 1524.559f, 0.0f, -115.6206f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_157.f_1380 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Tnr_horse_stay3", "horse_stay", -860.0479f, 189.6933f, 1586.576f, 0.0f, -87.53077f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_157.f_1380), 0);
	Local_157.f_1384 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Tnr_horse_stay2", "horse_stay", -838.1571f, 189.673f, 1582.628f, 0.0f, -253.3726f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_157.f_1384), 0);
	Local_157.f_1388 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Tnr_horse_stay1", "horse_stay", -858.0981f, 189.7076f, 1589.251f, 0.0f, -78.61452f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_157.f_1388), 0);
	Local_157.f_1392 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Tnr_horse_stay", "horse_stay", -847.9999f, 189.794f, 1600f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_157.f_1392), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Tnr_whittle_wood", "whittle_wood", -854.9286f, 189.7101f, 1587.258f, 0.0f, -56.59673f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Tnr_stand_spit", "stand_spit", -844.5616f, 189.8666f, 1578.33f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Tnr_RandIdleSitGround", "Rand_Idle_Sit_Ground", -861.1256f, 189.7522f, 1577.534f, 0.0f, 72.17829f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Tnr_stand_guntricks", "stand_guntricks_e_any", -843.9632f, 189.7141f, 1594.357f, 0.0f, -152.5991f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Tnr_Pee", "Pee", -834.5575f, 189.5914f, 1578.504f, 0.0f, -120.5125f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Tnr_skin_scraper", "skin_scraper", -851.8649f, 189.7936f, 1581.97f, 0.0f, 16.42579f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Tnr_stand_lookdistance", "stand_lookdistance_w_any", -860.617f, 197.949f, 1547.594f, 0.0f, -115.6206f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Tnr_sit_cleanpistol", "sit_cleanpistol", -846.0652f, 189.779f, 1585.647f, 0.0f, -92.88916f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Tnr_lookout_windowR", "look_out_window_R", -843.0142f, 189.6684f, 1586.801f, 0.0f, -180.6212f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Tnr_lookout_windowL", "look_out_window_L", -846.9889f, 189.7407f, 1583.474f, 0.0f, 91.37856f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Tnr_smoking_stand1", "smoking_stand", -847.0233f, 189.7358f, 1583.315f, 0.0f, 88.9194f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Tnr_smoking_stand", "smoking_stand", -839.2578f, 189.6638f, 1589.468f, 0.0f, -126.8859f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Tnr_sit_ground_smoke1", "sit_ground_smoke", -840.5498f, 189.6831f, 1590.884f, 0.0f, -132.4568f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Tnr_sit_coffee_drink", "sit_camp_coffee_drink", -853.5219f, 189.7364f, 1586.908f, 0.0f, 123.5809f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Tnr_sit_ground_smoke", "sit_ground_smoke", -853.1792f, 189.7862f, 1582.249f, 0.0f, 111.9939f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Tnr_Sit_Ground_Drink", "Sit_Ground_Drink", -852.1535f, 189.6882f, 1585.669f, 0.0f, 90.9255f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Tnr_LookDistanceBinocs", "look_distance_binocs", -860.8885f, 189.5468f, 1589.467f, 0.0f, 93.03499f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Aur_stand_guntricks2", "stand_guntricks_e_any", -1046.667f, 184.257f, 1363.73f, 0.0f, 11.44363f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Aur_stand_guntricks1", "stand_guntricks_e_any", -1040.191f, 184.076f, 1360.591f, 0.0f, 11.44363f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Aur_stand_yawning_n_any", "stand_yawning_n_any", -1044.274f, 184.066f, 1374.797f, 0.0f, 103.7064f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_157.f_1396 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Aur_rand_idle_stand1", "rand_idle_stand", -1042.525f, 183.986f, 1371.567f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_157.f_1396), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Aur_stand_lookdistance5", "stand_lookdistance_w_any", -1060.616f, 186.347f, 1369.309f, 0.0f, 275.9078f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Aur_stand_lookdistance4", "stand_lookdistance_w_any", -1066.706f, 188.877f, 1351.358f, 0.0f, 275.9078f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Aur_stand_lookdistance3", "stand_lookdistance_w_any", -1048.898f, 189.629f, 1344.847f, 0.0f, 275.9078f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Aur_stand_lookdistance2", "stand_lookdistance_w_any", -1030.036f, 189.812f, 1343.675f, 0.0f, 275.9078f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Aur_stand_lookdistance1", "stand_lookdistance_w_any", -1021.314f, 185.173f, 1367.07f, 0.0f, 275.9078f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Aur_Pee2", "Pee", -1044.787f, 184.066f, 1375.618f, 0.0f, -104.4397f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_157.f_1400 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Sit_Ground_Campfire_Tend", "Sit_Ground_Campfire_Tend", -1037.289f, 184.007f, 1360.879f, 0.0f, -148.2222f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_157.f_1400), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "nek_rand_idle_stand1", "rand_idle_stand", -728.483f, 226.88f, 1124.825f, 0.0f, 139.7007f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "nek_rand_idle_stand", "rand_idle_stand", -732.926f, 226.2996f, 1106.792f, 0.0f, 139.7007f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "nek_stand_yawning_n_any", "stand_yawning_n_any", -741.615f, 227.712f, 1121.556f, 0.0f, 103.7064f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "nek_Pee1", "Pee", -726.613f, 226.972f, 1128.937f, 0.0f, -104.4397f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "nek_whittle_wood", "whittle_wood", -731.111f, 226.912f, 1119.21f, 0.0f, -56.59673f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "nek_RandIdleSitGround1", "Rand_Idle_Sit_Ground", -735.3475f, 226.3739f, 1104.99f, 0.0f, 236.5938f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "nek_RandIdleSitGround", "Rand_Idle_Sit_Ground", -733.03f, 227.017f, 1113.366f, 0.0f, 72.17829f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "nek_stand_spit", "stand_spit", -745.383f, 227.523f, 1120.269f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "nek_stand_guntricks", "stand_guntricks_e_any", -738.237f, 230.987f, 1138.923f, 0.0f, 11.44363f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "nek_smoking_stand1", "smoking_stand", -736.827f, 227.061f, 1113.505f, 0.0f, 233.1141f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "nek_stand_lookdistance6", "stand_lookdistance_w_any", -776.693f, 208.288f, 1174.507f, 0.0f, 176.216f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "nek_stand_lookdistance5", "stand_lookdistance_w_any", -764.583f, 217.809f, 1163.076f, 0.0f, 176.216f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "nek_stand_lookdistance4", "stand_lookdistance_w_any", -732.609f, 231.183f, 1161.514f, 0.0f, 176.216f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "nek_stand_lookdistance3", "stand_lookdistance_w_any", -728.293f, 228.278f, 1153.609f, 0.0f, 176.216f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "nek_smoking_stand", "smoking_stand", -839.2578f, 189.6638f, 1589.468f, 0.0f, -126.8859f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "nek_Pee", "Pee", -1027.649f, 184.4096f, 1377.63f, 0.0f, -104.4397f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "nek_stand_lookdistance2", "stand_lookdistance_w_any", -777.777f, 213.244f, 1163.218f, 0.0f, 176.216f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "nek_stand_lookdistance1", "stand_lookdistance_w_any", -718.439f, 226.382f, 1147.617f, 0.0f, 176.216f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "nek_stand_lookdistance", "stand_lookdistance_w_any", -747.145f, 227.698f, 1152.161f, 0.0f, 176.216f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_157.f_1404 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Aur_rand_idle_stand", "rand_idle_stand", -1045.471f, 184.066f, 1373.464f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_157.f_1404), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Aur_sit_docks1", "nsit_docks", -1046.972f, 184.0596f, 1378.077f, 0.0f, 90.22343f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Aur_Pee1", "Pee", -1033.513f, 181.428f, 1405.885f, 0.0f, -182.9437f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Aur_horse_stay4", "horse_stay", -1035.998f, 184.1881f, 1368.416f, 0.0f, -201.4612f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Aur_horse_stay3", "horse_stay", -1035.918f, 184.0916f, 1366.649f, 0.0f, 149.0538f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Aur_horse_stay2", "horse_stay", -1060.616f, 186.347f, 1369.309f, 0.0f, 149.0538f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Aur_horse_stay1", "horse_stay", -1057.52f, 187.0946f, 1360.963f, 0.0f, -201.4612f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Aur_Pee", "Pee", -1027.649f, 184.4096f, 1377.63f, 0.0f, -104.4397f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Aur_NearWall", "Rand_Idle_NearWall", -1046.11f, 183.7955f, 1371.995f, 0.0f, 711.347f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Aur_stand_lookdistance", "stand_lookdistance_w_any", -1038.049f, 184.0207f, 1362.066f, 0.0f, 275.9078f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Aur_stand_guntricks", "stand_guntricks_e_any", -1039.681f, 184.047f, 1376.458f, 0.0f, 11.44363f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "nAur_stand", "rand_idle_stand", -1040.12f, 184.047f, 1374.909f, 0.0f, -145.1313f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Aur_lean_rail", "nlean_rail", -1041.311f, 184.046f, 1388.666f, 0.0f, 91.23931f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Aur_look_window", "look_out_window_L", -1044.392f, 184.065f, 1375.834f, 0.0f, -179.9143f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Aur_lean_fence", "lean_fence_L_talking", -1046.237f, 184.0319f, 1378.434f, 0.0f, -179.6869f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Aur_sit_docks", "nsit_docks", -1038.795f, 184.0846f, 1380.922f, 0.0f, -92.40741f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Aur_look_binocs", "look_distance_binocs", -1039.277f, 181.423f, 1405.247f, 0.0f, -183.3307f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "bcc_smoking_stand12", "smoking_stand", -534.7827f, 146.6513f, 1877.814f, 0.0f, 181.8827f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "bcc_Sit_Ground_Campfire_Tend", "Sit_Ground_Campfire_Tend", -534.1003f, 146.652f, 1881.399f, 0.0f, -358.6365f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "bcc_smoking_stand11", "smoking_stand", -491.075f, 144.272f, 1937.443f, 0.0f, -28.95748f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "bcc_Pee", "Pee", -461.327f, 142.833f, 1890.427f, 0.0f, -138.032f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "bcc_rand_idle_stand", "rand_idle_stand", -454.65f, 139.572f, 1919.325f, 0.0f, -113.4712f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "bcc_smoking_stand", "smoking_stand", -495.012f, 144.473f, 1923.981f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "bcc_horse_stay3", "horse_stay", -467.863f, 140.948f, 1918.547f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "bcc_horse_stay2", "horse_stay", -487.01f, 144.068f, 1904.935f, 0.0f, -221.2936f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "bcc_horse_stay", "horse_stay", -500.318f, 145.434f, 1917.507f, 0.0f, -139.2258f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "bcc_stand_drunk_rowdydrink", "stand_drunk_rowdydrink", -490.864f, 144.376f, 1923.154f, 0.0f, -36.64879f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "bcc_Rand_Idle_NearWall1", "Rand_Idle_NearWall", -458.21f, 140.186f, 1931.342f, 0.0f, -3.663632f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "bcc_lookdistance_binocs3", "look_distance_binocs", -459.359f, 142.84f, 1890.269f, 0.0f, -68.80422f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "bcc_stand_guntricks_e_any2", "stand_guntricks_e_any", -494.257f, 144.499f, 1930.558f, 0.0f, -33.78901f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "bcc_Sit_Ground_Smoke_Pipe", "Sit_Ground_Smoke_Pipe", -497.401f, 144.499f, 1929.53f, 0.0f, 37.61281f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "bcc_look_out_window_R", "look_out_window_R", -464.6117f, 142.647f, 1898.452f, 0.0f, 179.3634f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "bcc_smoking_stand13", "smoking_stand", -457.4906f, 142.6668f, 1895.166f, 0.0f, -120.3361f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "bcc_sit_cleanrifle", "sit_cleanrifle", -455.6522f, 139.545f, 1919.091f, 0.0f, -48.19163f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "bcc_sit_no_table", "sit_no_table", -502.756f, 144.5078f, 1927.236f, 0.0f, -142.8304f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "bcc_Pee1", "Pee", -500.237f, 144.473f, 1933.786f, 0.0f, -4.101937f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "bcc_stand_guntricks_e_any1", "stand_guntricks_e_any", -451.2635f, 140.1866f, 1934.491f, 0.0f, 10.2007f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "bcc_Rand_Idle_Sit_Ground1", "Rand_Idle_Sit_Ground", -454.9582f, 140.186f, 1931.184f, 0.0f, 99.03301f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "bcc_Rand_Idle_Near", "Rand_Idle_NearWall_Shoulder_L", -498.472f, 144.472f, 1933.444f, 0.0f, 181.4896f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "bcc_stand_announce1", "stand_announce", -491.863f, 144.506f, 1921.508f, 0.0f, -138.9142f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "bcc_stand_announce", "stand_announce", -464.679f, 140.254f, 1920.628f, 0.0f, 48.78769f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "bcc_lookdistance_binocs", "look_distance_binocs", -430.077f, 134.9f, 1907.864f, 0.0f, -88.09788f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "bcc_lookdistance_binocs2", "look_distance_binocs", -477.696f, 145.356f, 1950.641f, 0.0f, 189.7475f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "bcc_stand_lookdistance_w_any1", "stand_lookdistance_w_any", -528.882f, 151.674f, 1944.555f, 0.0f, -66.41837f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "bcc_stand_lookdistance_w_any", "stand_lookdistance_w_any", -537.156f, 147.628f, 1903.934f, 0.0f, 306.722f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "bcc_lookdistance_binocs1", "look_distance_binocs", -475.628f, 145.189f, 1876.517f, 0.0f, -93.37556f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_157.f_1408 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_HummingbirdSage27", "Player_Herb_HummingbirdSage", -234.8312f, 126.4941f, 1413.074f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1412 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_HummingbirdSage26", "Player_Herb_HummingbirdSage", -328.9761f, 134.5593f, 1347.657f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1416 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_HummingbirdSage25", "Player_Herb_HummingbirdSage", -184.0001f, 128.9335f, 1312f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1420 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_HummingbirdSage24", "Player_Herb_HummingbirdSage", -88.0f, 117.4406f, 1404f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1424 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_HummingbirdSage23", "Player_Herb_HummingbirdSage", -296.0f, 141.2629f, 1624f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1428 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_HummingbirdSage22", "Player_Herb_HummingbirdSage", -261.9808f, 140.8409f, 1687.524f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1432 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_HummingbirdSage21", "Player_Herb_HummingbirdSage", -114.3974f, 121.4745f, 1809.136f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1436 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_HummingbirdSage20", "Player_Herb_HummingbirdSage", -48.0f, 113.286f, 1688f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1440 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_HummingbirdSage2", "Player_Herb_HummingbirdSage", -200.0116f, 87.21113f, 1980.004f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1444 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_HummingbirdSage19", "Player_Herb_HummingbirdSage", -43.99976f, 117.4587f, 1600f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1448 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_HummingbirdSage18", "Player_Herb_HummingbirdSage", 24.0f, 115.4509f, 1672.0f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1452 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_HummingbirdSage17", "Player_Herb_HummingbirdSage", 73.58875f, 118.3772f, 1760.344f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1456 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_HummingbirdSage16", "Player_Herb_HummingbirdSage", -171.3039f, 120.5057f, 1860.722f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1460 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_HummingbirdSage15", "Player_Herb_HummingbirdSage", -316.0f, 144.1793f, 1832f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1464 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_HummingbirdSage14", "Player_Herb_HummingbirdSage", -412.0512f, 155.5096f, 1807.954f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1468 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_HummingbirdSage13", "Player_Herb_HummingbirdSage", -616.2814f, 171.8325f, 1825.91f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1472 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_HummingbirdSage12", "Player_Herb_HummingbirdSage", -780.3611f, 143.7323f, 1824.27f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1476 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_HummingbirdSage10", "Player_Herb_HummingbirdSage", -616.0f, 116.1135f, 1984f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1480 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_HummingbirdSage1", "Player_Herb_HummingbirdSage", -72.0f, 107.4196f, 1864f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1484 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_HummingbirdSage", "Player_Herb_HummingbirdSage", 103.5838f, 83.15372f, 1989.076f, 0.0f, 0.0f, 0.0f);
	Local_157.f_1488 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Player_Herb_HummingbirdSage61", "Player_Herb_HummingbirdSage", -457.2195f, 140.1816f, 1936.16f, 0.0f, 0.0f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Locked_Footlocker5", "Locked_Footlocker", -521.2206f, 146.5908f, 1891.092f, 0.0f, 136.4989f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "CO_LockedFootlocker", "Locked_Footlocker", -814.35f, 196.8283f, 1113.775f, 0.0f, -153.1052f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	DECOR_SET_FLOAT(bVar0, "GringoDollarAmt", 1.0f);
	DECOR_SET_INT(bVar0, "GringoDollarAmt", true);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_157, "Locked_Footlocker6", "Locked_Footlocker", -1517.7f, 218.91f, 1730.75f, 0.0f, 180.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	return 1;
}

bool Function_75(int iParam0) //Position: 0x9C6C / 40044
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_79();
	iVar1 = 0;
	if (!Function_9(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_78(iParam0[iVar03], 8);
		}
		else if (Function_77())
		{
			iVar1 = 1;
			Function_78(iParam0[iVar03], 8);
		}
		Function_78(iParam0[iVar03], 16);
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
				Function_78(iParam0[iVar03], 1);
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
							Function_78(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_78(iParam0[iVar03], 2);
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
							Function_78(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_78(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_78(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_78(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_78(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_78(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_78(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_78(iParam0[iVar03], 2);
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
	Function_76();
	return 1;
}

void Function_76() //Position: 0x9FE7 / 40935
{
	if (!Function_16(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_77() //Position: 0xA027 / 40999
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

void Function_78(var uParam0, int iParam1) //Position: 0xA052 / 41042
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_79() //Position: 0xA063 / 41059
{
	if (!Function_16(128))
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

var Function_80(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xA0A5 / 41125
{
	int iVar0;
	int iVar1;
	
	if (Global_30842[32])
	{
	}
	iVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_81(uParam0, iVar1, iParam2);
	if (bParam3)
	{
		Function_78(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_81(var uParam0, int iParam1, int iParam2) //Position: 0xA0DD / 41181
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_9(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_78(uParam0[iVar03], 4);
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

void Function_82(int iParam0, int iParam1) //Position: 0xA1A1 / 41377
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

bool Function_83() //Position: 0xA1EA / 41450
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
	
	Function_82(3, 3);
	uVar0 = uVar0;
	Function_80(&Local_0 + 4, "p_uti_cover2x1x", 0, 0);
	if (!Function_75(&Local_0 + 4))
	{
		return 0;
	}
	Local_0 = FIND_NAMED_LAYOUT("TallTrees_layout");
	if (!IS_LAYOUTREF_VALID(Local_0))
	{
		Local_0 = CREATE_LAYOUT("TallTrees_layout");
	}
	Local_0.f_20 = CREATE_OBJECTSET_IN_LAYOUT("TAL_vantagePointsSet", Local_0, 8, 0);
	*(&Local_0 + 24[06]) = { -1004.93f, 107.54f, 1215.466f };
	*(&Local_0 + 24[06] + 12) = { 0.0f, 176.0835f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_0, "TAL_vantage01", -1004.93f, 107.54f, 1215.466f, 0.0f, 176.0835f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_0.f_20);
	*(&Local_0 + 24[16]) = { -1011.234f, 107.5559f, 1212.117f };
	*(&Local_0 + 24[16] + 12) = { 0.0f, 153.6292f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_0, "TAL_vantage02", -1011.234f, 107.5559f, 1212.117f, 0.0f, 153.6292f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_0.f_20);
	*(&Local_0 + 24[26]) = { -1049.0f, 120.0f, 1194.0f };
	*(&Local_0 + 24[26] + 12) = { 0.0f, -178.1565f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_0, "TAL_vantage03", -1049.0f, 120.0f, 1194.0f, 0.0f, -178.1565f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_0.f_20);
	*(&Local_0 + 24[36]) = { -1105.0f, 131.0f, 1186.0f };
	*(&Local_0 + 24[36] + 12) = { 0.0f, 183.0f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_0, "TAL_vantage04", -1105.0f, 131.0f, 1186.0f, 0.0f, 183.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_0.f_20);
	*(&Local_0 + 24[46]) = { -1166.0f, 136.0f, 1184.0f };
	*(&Local_0 + 24[46] + 12) = { 0.0f, 175.0f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_0, "TAL_vantage05", -1166.0f, 136.0f, 1184.0f, 0.0f, 175.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_0.f_20);
	*(&Local_0 + 24[56]) = { -1191.0f, 135.7389f, 1170.0f };
	*(&Local_0 + 24[56] + 12) = { 0.0f, 122.0f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_0, "TAL_vantage06", -1191.0f, 135.7389f, 1170.0f, 0.0f, 122.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_0.f_20);
	*(&Local_0 + 24[66]) = { -1524.0f, 166.0f, 1083.0f };
	*(&Local_0 + 24[66] + 12) = { 0.0f, 204.0f, 0.0f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_0, "TAL_vantage07", -1524.0f, 166.0f, 1083.0f, 0.0f, 204.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_0.f_20);
	*(&Local_0 + 24[76]) = { -1629.0f, 162.0f, 1079.0f };
	*(&Local_0 + 24[76] + 12) = { 0.0f, 209.0f, 0.0f };
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_0, "TAL_vantage08", -1629.0f, 162.0f, 1079.0f, 0.0f, 209.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_0.f_20);
	*(&Local_0 + 24[86]) = { -1484.8f, 89.0f, 1445.0f };
	*(&Local_0 + 24[86] + 12) = { 0.0f, 356.0f, 0.0f };
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_0, "TAL_vantage09", -1484.8f, 89.0f, 1445.0f, 0.0f, 356.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_0.f_20);
	*(&Local_0 + 24[96]) = { -1419.0f, 80.0f, 1426.0f };
	*(&Local_0 + 24[96] + 12) = { 0.0f, 314.0f, 0.0f };
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_0, "TAL_vantage10", -1419.0f, 80.0f, 1426.0f, 0.0f, 314.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_0.f_20);
	*(&Local_0 + 24[106]) = { -1363.0f, 91.0f, 1450.0f };
	*(&Local_0 + 24[106] + 12) = { 0.0f, 76.0f, 0.0f };
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_0, "TAL_vantage11", -1363.0f, 91.0f, 1450.0f, 0.0f, 76.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_0.f_20);
	*(&Local_0 + 24[116]) = { -886.0f, 115.0f, 1280.0f };
	*(&Local_0 + 24[116] + 12) = { 0.0f, 190.0f, 0.0f };
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_0, "TAL_vantage12", -886.0f, 115.0f, 1280.0f, 0.0f, 190.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_0.f_20);
	*(&Local_0 + 24[126]) = { -828.0f, 110.0f, 1318.0f };
	*(&Local_0 + 24[126] + 12) = { 0.0f, 76.0f, 0.0f };
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_0, "TAL_vantage13", -828.0f, 110.0f, 1318.0f, 0.0f, 76.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_0.f_20);
	*(&Local_0 + 24[136]) = { -817.0f, 110.0f, 1326.0f };
	*(&Local_0 + 24[136] + 12) = { 0.0f, 200.0f, 0.0f };
	bVar14 = CREATE_POINT_IN_LAYOUT(Local_0, "TAL_vantage14", -817.0f, 110.0f, 1326.0f, 0.0f, 200.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar14, Local_0.f_20);
	*(&Local_0 + 24[146]) = { -755.0f, 113.0f, 1345.0f };
	*(&Local_0 + 24[146] + 12) = { 0.0f, 110.0f, 0.0f };
	bVar15 = CREATE_POINT_IN_LAYOUT(Local_0, "TAL_vantage15", -755.0f, 113.0f, 1345.0f, 0.0f, 110.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar15, Local_0.f_20);
	*(&Local_0 + 24[156]) = { -551.0f, 114.0f, 1584.0f };
	*(&Local_0 + 24[156] + 12) = { 0.0f, 137.0f, 0.0f };
	bVar16 = CREATE_POINT_IN_LAYOUT(Local_0, "TAL_vantage16", -551.0f, 114.0f, 1584.0f, 0.0f, 137.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar16, Local_0.f_20);
	*(&Local_0 + 24[166]) = { 0.0f, 0.0f, 0.0f };
	*(&Local_0 + 24[166] + 12) = { -488.0f, 123.0f, 1699.0f };
	bVar17 = CREATE_POINT_IN_LAYOUT(Local_0, "TAL_vantage17", 0.0f, 0.0f, 0.0f, -488.0f, 123.0f, 1699.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar17, Local_0.f_20);
	*(&Local_0 + 24[176]) = { -488.0f, 108.0f, 1728.0f };
	*(&Local_0 + 24[176] + 12) = { 0.0f, 178.0f, 0.0f };
	bVar18 = CREATE_POINT_IN_LAYOUT(Local_0, "TAL_vantage18", -488.0f, 108.0f, 1728.0f, 0.0f, 178.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar18, Local_0.f_20);
	*(&Local_0 + 24[186]) = { -433.0f, 116.0f, 1841.0f };
	*(&Local_0 + 24[186] + 12) = { 0.0f, 42.0f, 0.0f };
	bVar19 = CREATE_POINT_IN_LAYOUT(Local_0, "TAL_vantage19", -433.0f, 116.0f, 1841.0f, 0.0f, 42.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar19, Local_0.f_20);
	*(&Local_0 + 24[196]) = { -425.0f, 112.0f, 1902.0f };
	*(&Local_0 + 24[196] + 12) = { 0.0f, 161.0f, 0.0f };
	bVar20 = CREATE_POINT_IN_LAYOUT(Local_0, "TAL_vantage20", -425.0f, 112.0f, 1902.0f, 0.0f, 161.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar20, Local_0.f_20);
	*(&Local_0 + 24[206]) = { -474.0f, 104.0f, 1948.0f };
	*(&Local_0 + 24[206] + 12) = { 0.0f, 8.0f, 0.0f };
	bVar21 = CREATE_POINT_IN_LAYOUT(Local_0, "TAL_vantage21", -474.0f, 104.0f, 1948.0f, 0.0f, 8.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar21, Local_0.f_20);
	*(&Local_0 + 24[216]) = { -423.0f, 113.0f, 1901.0f };
	*(&Local_0 + 24[216] + 12) = { 0.0f, 200.0f, 0.0f };
	bVar22 = CREATE_POINT_IN_LAYOUT(Local_0, "TAL_vantage22", -423.0f, 113.0f, 1901.0f, 0.0f, 200.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar22, Local_0.f_20);
	*(&Local_0 + 24[226]) = { -113.0f, 89.0f, 1978.0f };
	*(&Local_0 + 24[226] + 12) = { 0.0f, 89.0f, 0.0f };
	bVar23 = CREATE_POINT_IN_LAYOUT(Local_0, "TAL_vantage23", -113.0f, 89.0f, 1978.0f, 0.0f, 89.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar23, Local_0.f_20);
	*(&Local_0 + 24[236]) = { -39.0f, 123.0f, 1694.0f };
	*(&Local_0 + 24[236] + 12) = { 0.0f, 174.0f, 0.0f };
	bVar24 = CREATE_POINT_IN_LAYOUT(Local_0, "TAL_vantage24", -39.0f, 123.0f, 1694.0f, 0.0f, 174.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar24, Local_0.f_20);
	*(&Local_0 + 24[246]) = { -74.0f, 114.0f, 1753.0f };
	*(&Local_0 + 24[246] + 12) = { 0.0f, 176.0f, 0.0f };
	bVar25 = CREATE_POINT_IN_LAYOUT(Local_0, "TAL_vantage25", -74.0f, 114.0f, 1753.0f, 0.0f, 176.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar25, Local_0.f_20);
	Function_84(Local_0, "cover2x1x0", "p_uti_cover2x1x", -448.6531f, 138.4329f, 1914.886f, 0.0f, -75.67802f, 0.0f, 1);
	Function_84(Local_0, "cover2x1x1", "p_uti_cover2x1x", -449.3369f, 138.8412f, 1918.809f, 0.0f, -75.67802f, 0.0f, 1);
	Function_84(Local_0, "cover2x1x2", "p_uti_cover2x1x", -448.9167f, 139.7174f, 1896.942f, 0.0f, -55.30396f, 0.0f, 1);
	Function_84(Local_0, "cover2x1x3", "p_uti_cover2x1x", -456.8095f, 142.5521f, 1898.919f, 0.0f, -89.31826f, 0.0f, 1);
	Function_84(Local_0, "cover2x1x4", "p_uti_cover2x1x", -450.2817f, 139.0974f, 1922.986f, 0.0f, -89.31826f, 0.0f, 1);
	Function_84(Local_0, "cover2x1x5", "p_uti_cover2x1x", -443.0971f, 138.5973f, 1896.387f, 0.0f, -13.45933f, 0.0f, 1);
	Function_84(Local_0, "cover2x1x6", "p_uti_cover2x1x", -462.6826f, 140.1866f, 1921.317f, 0.0f, -27.98695f, 0.0f, 1);
	Function_84(Local_0, "cover2x1x7", "p_uti_cover2x1x", -458.4989f, 140.116f, 1920.404f, 0.0f, -22.18075f, 0.0f, 1);
	Function_84(Local_0, "cover2x1x8", "p_uti_cover2x1x", -468.9054f, 142.5568f, 1904.905f, 0.0f, -89.31826f, 0.0f, 1);
	Function_84(Local_0, "cover2x1x9", "p_uti_cover2x1x", -481.9193f, 143.0384f, 1920f, 0.0f, -89.31826f, 0.0f, 1);
	Function_84(Local_0, "cover2x1x10", "p_uti_cover2x1x", -484.5124f, 143.5607f, 1908.006f, 0.0f, -89.31826f, 0.0f, 1);
	Function_84(Local_0, "cover2x1x11", "p_uti_cover2x1x", -486.4197f, 143.5607f, 1919.21f, 0.0f, -61.57892f, 0.0f, 1);
	Function_84(Local_0, "cover2x1x12", "p_uti_cover2x1x", -480.3436f, 143.5607f, 1913.63f, 0.0f, -89.31826f, 0.0f, 1);
	Function_84(Local_0, "cover2x1x13", "p_uti_cover2x1x", -499.7885f, 144.8462f, 1921.702f, 0.0f, -52.36341f, 0.0f, 1);
	Function_84(Local_0, "cover2x1x14", "p_uti_cover2x1x", -514.1085f, 146.5724f, 1900f, 0.0f, -103.41f, 0.0f, 1);
	Function_84(Local_0, "cover2x1x15", "p_uti_cover2x1x", -518.9744f, 146.5725f, 1903.999f, 0.0f, -111.6471f, 0.0f, 1);
	Function_84(Local_0, "cover2x1x16", "p_uti_cover2x1x", -501.5815f, 145.5685f, 1910.418f, 0.0f, -102.8337f, 0.0f, 1);
	Function_84(Local_0, "cover2x1x17", "p_uti_cover2x1x", -490.0768f, 144.4524f, 1904f, 0.0f, -115.3954f, 0.0f, 1);
	Function_84(Local_0, "cover2x1x18", "p_uti_cover2x1x", -498.8087f, 145.4986f, 1902.808f, 0.0f, -115.3954f, 0.0f, 1);
	Function_84(Local_0, "cover2x1x19", "p_uti_cover2x1x", -508f, 146.5725f, 1911.293f, 0.0f, -115.3954f, 0.0f, 1);
	Function_84(Local_0, "cover2x1x20", "p_uti_cover2x1x", -481.9105f, 143.5607f, 1890.433f, 0.0f, -191.4418f, 0.0f, 1);
	Function_84(Local_0, "cover2x1x21", "p_uti_cover2x1x", -490.1463f, 144.5646f, 1888f, 0.0f, -207.9976f, 0.0f, 1);
	Function_84(Local_0, "cover2x1x22", "p_uti_cover2x1x", -482.9111f, 144.5646f, 1881.089f, 0.0f, -199.7674f, 0.0f, 1);
	Function_84(Local_0, "cover2x1x23", "p_uti_cover2x1x", -500.0f, 145.5685f, 1890.708f, 0.0f, -165.2202f, 0.0f, 1);
	Function_84(Local_0, "cover2x1x24", "p_uti_cover2x1x", -468.9321f, 140.0699f, 1930.365f, 0.0f, -143.4477f, 0.0f, 1);
	return 1;
}

var Function_84(var uParam0, var uParam1, var uParam2, vector3 vParam3, vector3 vParam6, int iParam9) //Position: 0xB1FD / 45565
{
	uParam0 = uParam0;
	uParam1 = uParam1;
	uParam2 = uParam2;
	vParam3 = { StackVal, StackVal, vParam3 };
	vParam6 = { StackVal, StackVal, vParam6 };
	iParam9 = iParam9;
	return "";
}

void Function_85(bool bParam0, int iParam1) //Position: 0xB227 / 45607
{
	if (!Function_16(128))
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

void Function_86(int iParam0) //Position: 0xB262 / 45666
{
	if (!Function_4(iParam0))
	{
		return;
	}
	if (!StackVal != 2)
	{
		return;
	}
	if (Global_29155[iParam010] == Global_30621[0])
	{
		STREAMING_REQUEST_ACTOR(1177, true, false);
	}
	else if (Global_29155[iParam010] == Global_30621[1])
	{
		STREAMING_REQUEST_ACTOR(1179, true, false);
	}
	else if (Global_29155[iParam010] == Global_30621[2])
	{
		STREAMING_REQUEST_ACTOR(1178, true, false);
	}
	return;
}

