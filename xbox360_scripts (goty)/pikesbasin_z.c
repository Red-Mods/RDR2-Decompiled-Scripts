//Decompiled with MagicRDR v1.0
//Function Count : 272
//Statics Count : 732
//Natives Count : 456
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	var uLocal_4 = 0;
	int iLocal_5 = 0;
	bool bLocal_6 = false;
	bool bLocal_7 = false;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 8;
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
	var uLocal_58 = 1;
	var uLocal_59 = 13;
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
	var uLocal_101 = -1;
	var uLocal_102 = -1;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	bool bLocal_107 = false;
	struct<921> Local_108 = { 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	struct<16> Var0;
	
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	vLocal_697 = { 0.992f, 0.166f, 1.992f };
	vLocal_700 = { -1.178f, 0.167f, 1.987f };
	vLocal_703 = { 1.177f, 0.122f, -1.801f };
	vLocal_706 = { -1.144f, 0.126f, -1.827f };
	vLocal_709 = { -1451.619f, 77.59732f, 2285.729f };
	vLocal_712 = { -1266.49f, 84.303f, 2402.563f };
	vLocal_715 = { -1280.695f, 85.915f, 2367.501f };
	vLocal_718 = { -1445.339f, 79.31211f, 2302.879f };
	vLocal_721 = { -1447.415f, 79.31261f, 2303.509f };
	vLocal_724 = { -1455.739f, 79.34842f, 2268.228f };
	vLocal_727 = { -1457.966f, 79.35226f, 2268.882f };
	strcpy(&Var0, "Initializing ", 64);
	stradd(&Var0, &Global_29155[iScriptParam_010] + 20, 64);
	Function_271(&Var0, 3);
	Function_270();
	if (StackVal && (((((!Global_3421 && iScriptParam_0 == Global_30679[1]) && iScriptParam_0 == Global_30707[1]) && iScriptParam_0 == Global_30707[2]) && iScriptParam_0 == Global_30717[1]) && iScriptParam_0 == Global_30658[0]) == 5)
	{
		bLocal_107 = true;
	}
	iLocal_5 = 0;
	while (!IS_EXITFLAG_SET())
	{
		bLocal_6 = 1000;
		switch (iLocal_5)
		{
			case 0x00000000:
				if (Global_3389)
				{
					if (bLocal_107)
					{
						Unknown_Function();
					}
					else
					{
						Unknown_Function();
					}
					iLocal_5 = 1;
				}
				bLocal_6 = false;
				break;
			
			case 0x00000001:
				if (Function_262())
				{
					Function_261();
					iLocal_5 = 2;
					bLocal_6 = false;
				}
				break;
			
			case 0x00000002:
				if (Function_260())
				{
					Function_259();
					Function_258(&(Global_29008[iScriptParam_0]), 32);
					iLocal_5 = 3;
					bLocal_6 = false;
				}
				break;
			
			case 0x00000003:
				bLocal_6 = 500;
				if (Function_255())
				{
					Function_253(iScriptParam_0);
					if (bLocal_107)
					{
						Function_251(&iLocal_11, Function_252(), iScriptParam_0);
						Function_250(&iLocal_11, Function_252());
					}
					Function_258(&(Global_29008[iScriptParam_0]), 16);
					iLocal_5 = 4;
					bLocal_6 = false;
				}
				break;
			
			case 0x00000004:
				if (IS_WORLD_SECTOR_LOADED(bLocal_7))
				{
					iLocal_5 = 5;
					bLocal_6 = false;
				}
				break;
			
			case 0x00000005:
				Function_249(&uLocal_8);
				Function_247();
				Function_244(iScriptParam_0);
				iLocal_5 = 6;
				bLocal_6 = false;
				break;
			
			case 0x00000006:
				if ((Function_243() && Function_242(Global_29155[iScriptParam_010])) && Function_241(&iLocal_11))
				{
					Function_238();
					iLocal_5 = 7;
					bLocal_6 = false;
				}
				else
				{
					bLocal_6 = 100;
				}
				break;
			
			case 0x00000007:
				if (bLocal_107)
				{
					Function_226(&iLocal_11, iScriptParam_0, Function_252());
				}
				Function_225(iScriptParam_0);
				Function_224();
				Function_223();
				Function_258(&(Global_29008[iScriptParam_0]), 8);
				if (Function_222(&(Global_29008[iScriptParam_0]), 131072))
				{
					Function_221(&(Global_29008[iScriptParam_0]), 131072);
					iLocal_5 = 11;
				}
				else
				{
					iLocal_5 = 8;
				}
				bLocal_6 = false;
				break;
			
			case 0x00000008:
				Function_220(iScriptParam_0);
				Function_219();
				Function_218(iScriptParam_0);
				iLocal_5 = 9;
				bLocal_6 = false;
				break;
			
			case 0x00000009:
				Function_213(iScriptParam_0);
				Function_212(64);
				Function_258(&(Global_29008[iScriptParam_0]), 512);
				iLocal_5 = 10;
				bLocal_6 = false;
				break;
			
			case 0x0000000A:
				Function_211(Function_252(), iScriptParam_0);
				strcpy(&Var0, "Finished Initializing ", 64);
				stradd(&Var0, &Global_29155[iScriptParam_010] + 20, 64);
				Function_210(&Var0, 5.0f);
				Function_258(&(Global_29008[iScriptParam_0]), 4);
				iLocal_5 = 11;
				bLocal_6 = false;
				break;
			
			case 0x0000000B:
				Function_205(iScriptParam_0);
				if (Function_222(&(Global_29008[iScriptParam_0]), 131072))
				{
					iLocal_5 = 7;
					bLocal_6 = false;
				}
				if (bLocal_107)
				{
					Function_88(&iLocal_11, iScriptParam_0);
				}
				Function_52(&uLocal_8, &uLocal_639, Function_87(), iScriptParam_0);
				Function_47(&bLocal_643, 0);
				break;
			
			case 0x0000000C:
				break;
		}
		WAIT(bLocal_6);
	}
	if (bLocal_107)
	{
		Function_30(&iLocal_11, iScriptParam_0);
	}
	Function_25(iScriptParam_0);
	Function_23();
	Function_22();
	Function_21();
	Function_13(&uLocal_8, &uLocal_639);
	Function_12(&bLocal_643);
	Function_10();
	Function_6(iScriptParam_0);
	SET_AMBIENT_TUNING_MAX_VISIBLE_RANGE(70.0f);
	Function_212(64);
	Function_221(&(Global_29008[iScriptParam_0]), 32);
	Function_221(&(Global_29008[iScriptParam_0]), 64);
	Function_221(&(Global_29008[iScriptParam_0]), 8);
	Function_221(&(Global_29008[iScriptParam_0]), 512);
	Function_221(&(Global_29008[iScriptParam_0]), 16);
	Function_221(&(Global_29008[iScriptParam_0]), 4);
	Function_1();
	strcpy(&Var0, "nUnloaded ", 64);
	stradd(&Var0, &Global_29155[iScriptParam_010] + 20, 64);
	Function_210(&Var0, 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x4A4 / 1188
{
	int iVar0;
	
	Function_2(&iLocal_654);
	if (IS_LAYOUTREF_VALID(bLocal_659))
	{
		DESTROY_LAYOUT(bLocal_659);
	}
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (uLocal_678[iVar0] != "")
		{
			RELEASE_CONSTRAINT(uLocal_678[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (IS_OBJECT_VALID(uLocal_671[iVar0]))
		{
			DESTROY_OBJECT(uLocal_671[iVar0]);
		}
		iVar0++;
	}
	return;
}

void Function_2(int iParam0) //Position: 0x511 / 1297
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

void Function_3(var uParam0, int iParam1) //Position: 0x537 / 1335
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

void Function_4(var uParam0, int iParam1) //Position: 0x665 / 1637
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_5(var uParam0, int iParam1) //Position: 0x67F / 1663
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_6(int iParam0) //Position: 0x69C / 1692
{
	int iVar0;
	
	if (!Function_9(iParam0))
	{
	}
	iVar0 = 0;
	while (iVar0 <= Global_17483)
	{
		if (Global_17483[iVar075].f_92 == iParam0)
		{
			Function_7(iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_7(int iParam0) //Position: 0x6D2 / 1746
{
	if (!Function_8(iParam0))
	{
		return;
	}
	Global_17483[iParam075].f_120 = 0;
	Global_25263 = (Global_25263 - 1);
	return;
}

bool Function_8(int iParam0) //Position: 0x6F4 / 1780
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_9(int iParam0) //Position: 0x70A / 1802
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_10() //Position: 0x720 / 1824
{
	Function_11();
	return;
}

void Function_11() //Position: 0x729 / 1833
{
	RELEASE_LAYOUT_REF(Local_341);
	return;
}

void Function_12(int iParam0) //Position: 0x735 / 1845
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		if (IS_VOLUME_VALID(iParam0[iVar05]->f_12))
		{
			if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(iParam0[iVar05]->f_12))
			{
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0[iVar05]->f_12);
			}
			if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(iParam0[iVar05]->f_12))
			{
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0[iVar05]->f_12);
			}
		}
		iVar0++;
	}
	return;
}

void Function_13(var uParam0, int iParam1) //Position: 0x78F / 1935
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (Function_20(iParam1[iVar03], 4))
		{
			SET_CURRENT_MAP(false);
			Function_19(iParam1[iVar03], 4);
		}
		if (Function_20(iParam1[iVar03], 8))
		{
			Function_14(0, 0, 30);
			Function_19(iParam1[iVar03], 8);
		}
		iVar0++;
	}
	return;
}

void Function_14(int iParam0, int iParam1, int iParam2) //Position: 0x7E7 / 2023
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
		Function_15(Global_16524, bVar0, 1);
	}
	return;
}

void Function_15(int iParam0, bool bParam1, bool bParam2) //Position: 0x8CD / 2253
{
	int iVar0;
	
	Function_18(iParam0);
	Function_17(bParam1);
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
	Function_16();
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

void Function_16() //Position: 0xA46 / 2630
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_17(bool bParam0) //Position: 0xA52 / 2642
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

void Function_18(int iParam0) //Position: 0xA98 / 2712
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

void Function_19(int iParam0, int iParam1) //Position: 0xADE / 2782
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	iParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_20(int iParam0, int iParam1) //Position: 0xAF8 / 2808
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_21() //Position: 0xB15 / 2837
{
	return;
}

void Function_22() //Position: 0xB1B / 2843
{
	return;
}

void Function_23() //Position: 0xB21 / 2849
{
	Function_24();
	return;
}

void Function_24() //Position: 0xB2A / 2858
{
	RELEASE_LAYOUT_REF(Local_108);
	return;
}

void Function_25(int iParam0) //Position: 0xB35 / 2869
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (Function_222(&(Global_29008[iParam0]), 0x20000000))
	{
		Function_221(&(Global_29008[iParam0]), 0x20000000);
		if (IS_LAYOUTREF_VALID(Global_28841))
		{
			bVar0 = CREATE_OBJECT_ITERATOR(Global_28841);
			ITERATE_IN_LAYOUT(bVar0, GET_AMBIENT_LAYOUT());
			ITERATE_ON_OBJECT_TYPE(bVar0, 15);
			START_OBJECT_ITERATOR(bVar0);
			bVar1 = START_OBJECT_ITERATOR(bVar0);
			while (IS_OBJECT_VALID(bVar1))
			{
				bVar2 = GET_ACTOR_FROM_OBJECT(bVar1);
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar2)))
				{
					DEREFERENCE_ACTOR(bVar2);
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(bVar2));
					CLEAR_ACTOR_STAY_WITHIN_VOLUME(bVar2);
					TASK_CLEAR(bVar2);
				}
				bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
			}
			DESTROY_ITERATOR(bVar0);
		}
		SET_POP_DENSITY_MULTIPLIER(1.0f);
		if (Function_27(iParam0))
		{
			ENABLE_AMBIENT_SPAWNING(Function_26(1));
		}
	}
	return;
}

bool Function_26(int iParam0) //Position: 0xBDC / 3036
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_27(int iParam0) //Position: 0xBF8 / 3064
{
	var uVar0;
	
	if (StackVal || StackVal != 2 != 1)
	{
		return 0;
	}
	if ((iParam0 != Global_30707[2] || iParam0 != Global_30707[1]) || iParam0 != Global_30679[1])
	{
		return 0;
	}
	uVar0 = Global_29008[iParam0];
	return (((Function_29(uVar0, 0x1000000) || Function_29(uVar0, 0x2000000)) || Function_29(uVar0, 0x4000000)) || Function_28(iParam0));
}

bool Function_28(int iParam0) //Position: 0xC6B / 3179
{
	var uVar0;
	bool bVar1;
	
	uVar0 = Global_29008[iParam0];
	bVar1 = uVar0 & 268435456 != false;
	return bVar1;
}

bool Function_29(var uParam0, bool bParam1) //Position: 0xC88 / 3208
{
	return (uParam0 && bParam1) == 0;
}

void Function_30(int iParam0, int iParam1) //Position: 0xC95 / 3221
{
	HUD_CLEAR_HELP_QUEUE();
	if (!Function_9(iParam1) || Function_29(iParam0->f_356, 16))
	{
		return;
	}
	if (iParam1 == Global_30640[0])
	{
		Function_33(iParam0, &Global_6298, iParam1);
	}
	else if (iParam1 == Global_30640[1])
	{
		Function_33(iParam0, &Global_6364, iParam1);
	}
	else if (iParam1 == Global_30640[2])
	{
		Function_33(iParam0, &Global_6351, iParam1);
	}
	else if (iParam1 == Global_30658[1])
	{
		Function_33(iParam0, &Global_6402, iParam1);
	}
	else if (iParam1 == Global_30658[3])
	{
		Function_33(iParam0, &Global_6433, iParam1);
	}
	else if (iParam1 == Global_30658[4])
	{
		Function_33(iParam0, &Global_6537, iParam1);
	}
	else if (iParam1 == Global_30668[0])
	{
		Function_33(iParam0, &Global_6563, iParam1);
	}
	else if (iParam1 == Global_30668[1])
	{
		Function_33(iParam0, &Global_6614, iParam1);
	}
	else if (iParam1 == Global_30668[2])
	{
		Function_33(iParam0, &Global_6643, iParam1);
	}
	else if (iParam1 == Global_30679[1])
	{
		Function_33(iParam0, &Global_6667, iParam1);
	}
	else if (iParam1 == Global_30679[0])
	{
		Function_33(iParam0, &Global_6654, iParam1);
	}
	else if (iParam1 == Global_30685[0])
	{
		Function_33(iParam0, &Global_6709, iParam1);
	}
	else if (iParam1 == Global_30685[1])
	{
		Function_33(iParam0, &Global_6764, iParam1);
	}
	else if (iParam1 == Global_30685[2])
	{
		Function_33(iParam0, &Global_6785, iParam1);
	}
	else if (iParam1 == Global_30693[0])
	{
		Function_33(iParam0, &Global_6815, iParam1);
	}
	else if (iParam1 == Global_30693[1])
	{
		Function_33(iParam0, &Global_6866, iParam1);
	}
	else if (iParam1 == Global_30693[2])
	{
		Function_33(iParam0, &Global_6490, iParam1);
	}
	else if (iParam1 == Global_30707[2])
	{
		Function_33(iParam0, &Global_6933, iParam1);
	}
	else if (iParam1 == Global_30707[1])
	{
		Function_33(iParam0, &Global_6962, iParam1);
	}
	else if (iParam1 == Global_30707[0])
	{
		Function_33(iParam0, &Global_7002, iParam1);
	}
	else if (iParam1 == Global_30707[3])
	{
		Function_33(iParam0, &Global_6987, iParam1);
	}
	else if (iParam1 == Global_30723[0])
	{
		Function_33(iParam0, &Global_7171, iParam1);
	}
	else if (iParam1 == Global_30723[1])
	{
		Function_33(iParam0, &Global_7148, iParam1);
	}
	else if (iParam1 == Global_30723[2])
	{
		Function_33(iParam0, &Global_7113, iParam1);
	}
	else if (iParam1 == Global_30717[0])
	{
		Function_33(iParam0, &Global_7035, iParam1);
	}
	else if (iParam1 == Global_30717[1])
	{
		Function_33(iParam0, &Global_7032, iParam1);
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bTalkedToLeader"))
	{
		DECOR_REMOVE(Global_34573, "bTalkedToLeader");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bNoSurvivorHelp"))
	{
		DECOR_REMOVE(Global_34573, "bNoSurvivorHelp");
	}
	UI_SET_ICON("ZMeter", 0);
	UI_SET_PROGRESS_BAR_CHANGE("ZMeter", false);
	UI_SET_PROGRESS_BAR_VAL("ZMeter", 1.0f);
	UI_EXIT("ZMeter");
	AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
	Function_25(iParam1);
	RESET_FACTIONS_STATUS_TWO_WAY(23, 32);
	if (!Global_3380)
	{
		Function_31(iParam1);
	}
	return;
}

void Function_31(int iParam0) //Position: 0xFDB / 4059
{
	char* cVar0;
	
	if (Global_3380 || Function_26(0x8000000))
	{
		return;
	}
	cVar0 = Function_32(iParam0);
	if (Function_27(iParam0))
	{
		AUDIO_MUSIC_FORCE_TRACK(cVar0, "nIDLE_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	else
	{
		AUDIO_MUSIC_FORCE_TRACK(cVar0, "IDLE_LIGHT", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	AUDIO_MUSIC_RELEASE_CONTROL(20000, 0);
	return;
}

var Function_32(int iParam0) //Position: 0x103F / 4159
{
	int iVar0;
	
	iVar0 = "";
	if (iParam0 == Global_30679[1])
	{
		iVar0 = "FTR_ZMB_SONG_01";
	}
	else if (iParam0 == Global_30707[1])
	{
		iVar0 = "MEX_ZMB_SONG_01";
	}
	else if (iParam0 == Global_30717[1])
	{
		iVar0 = "NRT_ZMB_SONG_01";
	}
	else if (iParam0 == Global_30717[0])
	{
		iVar0 = "TC_NRT_SONG_01";
	}
	else if (iParam0 == Global_30723[0])
	{
		iVar0 = "TC_NRT_SONG_01";
	}
	else if (iParam0 == Global_30723[1])
	{
		iVar0 = "TC_NRT_SONG_02";
	}
	else if (iParam0 == Global_30723[2])
	{
		iVar0 = "TC_NRT_SONG_02";
	}
	else if (iParam0 == Global_30685[0])
	{
		iVar0 = "TC_MEX_SONG_01";
	}
	else if (iParam0 == Global_30685[1])
	{
		iVar0 = "TC_MEX_SONG_02";
	}
	else if (iParam0 == Global_30685[2])
	{
		iVar0 = "TC_MEX_SONG_01";
	}
	else if (iParam0 == Global_30693[0])
	{
		iVar0 = "TC_MEX_SONG_02";
	}
	else if (iParam0 == Global_30693[1])
	{
		iVar0 = "TC_MEX_SONG_01";
	}
	else if (iParam0 == Global_30693[2])
	{
		iVar0 = "TC_MEX_SONG_02";
	}
	else if (iParam0 == Global_30707[2])
	{
		iVar0 = "TC_MEX_SONG_01";
	}
	else if (iParam0 == Global_30707[3])
	{
		iVar0 = "TC_MEX_SONG_01";
	}
	else if (iParam0 == Global_30707[0])
	{
		iVar0 = "TC_MEX_SONG_02";
	}
	else if (iParam0 == Global_30640[0])
	{
		iVar0 = "TC_FTR_SONG_01";
	}
	else if (iParam0 == Global_30640[2])
	{
		iVar0 = "TC_FTR_SONG_03";
	}
	else if (iParam0 == Global_30640[1])
	{
		iVar0 = "TC_FTR_SONG_04";
	}
	else if (iParam0 == Global_30658[3])
	{
		iVar0 = "TC_FTR_SONG_01";
	}
	else if (iParam0 == Global_30658[1])
	{
		iVar0 = "TC_FTR_SONG_02";
	}
	else if (iParam0 == Global_30668[0])
	{
		iVar0 = "TC_FTR_SONG_02";
	}
	else if (iParam0 == Global_30668[1])
	{
		iVar0 = "TC_FTR_SONG_03";
	}
	else if (iParam0 == Global_30679[0])
	{
		iVar0 = "TC_FTR_SONG_04";
	}
	else
	{
		iVar0 = "";
	}
	return iVar0;
}

void Function_33(int iParam0, var uParam1, int iParam2) //Position: 0x136C / 4972
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (StackVal < (iVar0 - 1))
	{
		bVar1 = (*iParam0 + 4)[iVar05];
		if (!IS_ACTOR_VALID(bVar1))
		{
		}
		else if (!IS_ACTOR_ALIVE(bVar1))
		{
		}
		else
		{
			Function_46(uParam1[iVar02], 4);
		}
		if (IS_VOLUME_VALID((iParam0 + 4[iVar05])->f_12))
		{
			DESTROY_VOLUME((iParam0 + 4[iVar05])->f_12);
		}
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar1)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(bVar1));
		}
		iVar0++;
	}
	if (!Function_27(iParam2))
	{
		Global_13172[iParam0->f_36411].f_32 = 0.0f;
		if (!Function_45(Global_76846, 0x4000000))
		{
			Function_39(Global_34573, 0x4000000, 1, 0);
		}
	}
	else if (Function_29(iParam0->f_356, 32))
	{
		if (!Function_45(Global_76846, 8388608))
		{
			Function_39(Global_34573, 8388608, 1, 0);
		}
	}
	else if (!Function_45(Global_76846, 4194304))
	{
		Function_39(Global_34573, 4194304, 1, 0);
	}
	Function_37(iParam0, 0, 0);
	DESTROY_OBJECT(*iParam0);
	if (DECOR_CHECK_EXIST(StackVal, "ZP_NumRevolvers"))
	{
		DECOR_REMOVE(StackVal, "ZP_NumRevolvers");
	}
	if (DECOR_CHECK_EXIST(StackVal, "ZP_NumRifles"))
	{
		DECOR_REMOVE(StackVal, "ZP_NumRifles");
	}
	if (DECOR_CHECK_EXIST(StackVal, "ZP_NumRepeaters"))
	{
		DECOR_REMOVE(StackVal, "ZP_NumRepeaters");
	}
	if (DECOR_CHECK_EXIST(StackVal, "ZP_NumPistols"))
	{
		DECOR_REMOVE(StackVal, "ZP_NumPistols");
	}
	if (DECOR_CHECK_EXIST(StackVal, "ZP_NumShotguns"))
	{
		DECOR_REMOVE(StackVal, "ZP_NumShotguns");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bTalkedToLeader"))
	{
		DECOR_REMOVE(Global_34573, "bTalkedToLeader");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bNoSurvivorHelp"))
	{
		DECOR_REMOVE(Global_34573, "bNoSurvivorHelp");
	}
	Function_2(iParam0 + 192);
	AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(true);
	Function_34(iParam2, Function_27(iParam2));
	ENABLE_AMBIENT_SPAWNING(Function_26(1));
	return;
}

void Function_34(int iParam0, bool bParam1) //Position: 0x1626 / 5670
{
	if (!Function_9(iParam0))
	{
		return;
	}
	if (bParam1 && Function_36("noZombieFireArt"))
	{
		return;
	}
	if (iParam0 == Global_30640[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_arm_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_arm_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30640[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_rwf_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_rwf_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30640[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_twr_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_twr_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30658[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_rat_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_rat_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30658[3])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_gap_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_gap_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30658[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_sol_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_sol_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30658[4])
	{
	}
	else if (iParam0 == Global_30668[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_hen_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_hen_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30668[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_thi_zombieFire01x");
			if (!Function_35(5))
			{
				ENABLE_CHILD_SECTOR("dlc_dix_zombieFire01x");
			}
			else
			{
				DISABLE_CHILD_SECTOR("dlc_dix_zombieFire01x");
			}
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_thi_zombieFire01x");
			DISABLE_CHILD_SECTOR("dlc_dix_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30668[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_pik_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_pik_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30679[1])
	{
	}
	else if (iParam0 == Global_30679[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_pln_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_pln_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30685[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_esc_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_esc_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30685[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_nos_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_nos_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30685[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_tes_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_tes_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30693[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_chu_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_chu_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30693[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_lsh_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_lsh_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30693[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_agv_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_agv_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30707[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_cas_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_cas_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30707[1])
	{
	}
	else if (iParam0 == Global_30707[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_elm_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_elm_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30707[3])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_tor_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_tor_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30723[0])
	{
	}
	else if (iParam0 == Global_30723[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_mtp_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_mtp_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30723[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_upr_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_upr_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30717[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_blk_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_blk_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30717[1])
	{
	}
	return;
}

bool Function_35(int iParam0) //Position: 0x1D7C / 7548
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_36(bool bParam0) //Position: 0x1D91 / 7569
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

void Function_37(var uParam0, bool bParam1, bool bParam2) //Position: 0x1DB0 / 7600
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(*uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(*uParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*uParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			SQUAD_LEAVE(bVar1);
			if (bParam2)
			{
				if (!Function_38(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
				{
					DESTROY_ACTOR(bVar1);
				}
			}
			if (IS_ACTOR_VALID(bVar1))
			{
				if (bParam1)
				{
					RELEASE_ACTOR_AS_AMBIENT(bVar1);
				}
				else
				{
					RELEASE_ACTOR(bVar1);
				}
			}
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

bool Function_38(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1E2C / 7724
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void Function_39(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1E46 / 7750
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_41(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_40(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_40(char* cParam0, int iParam1) //Position: 0x1EB2 / 7858
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

bool Function_41(bool bParam0, var uParam1, int iParam2) //Position: 0x1EE9 / 7913
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
		if (Function_43(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_42(uVar0))
		{
			case 0x00000002:
				if (!Function_45(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_42(char* cParam0) //Position: 0x1F61 / 8033
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

int Function_43(int iParam0) //Position: 0x2002 / 8194
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_44(&iVar1, 2147483648);
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

void Function_44(int iParam0, int iParam1) //Position: 0x203F / 8255
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

bool Function_45(var uParam0, int iParam1) //Position: 0x2052 / 8274
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

void Function_46(var uParam0, int iParam1) //Position: 0x2065 / 8293
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_47(var uParam0, bool bParam1) //Position: 0x207C / 8316
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	var uVar8;
	bool bVar9;
	bool bVar10;
	
	bVar6 = Function_51();
	if (Global_30620 > *uParam0)
	{
		Global_30620 = 0;
	}
	iVar0 = Global_30620;
	while (iVar0 < Function_50((*uParam0 - 1), Global_30620 + 4))
	{
		bVar7 = (*uParam0)[iVar05];
		if (IS_DOOR_VALID(bVar7))
		{
			uVar8 = StackVal;
			if (uVar8 & 16384 >= 0)
			{
				uParam0[iVar05]->f_16 = GET_PERS_CHAR_FROM_OBJECT(DECOR_GET_OBJECT(bVar7, "owner"));
				Function_49(uParam0[iVar05], 16384);
				uVar8 = StackVal;
			}
			bVar1 = DECOR_GET_BOOL_VERBOSE(bVar7, "lockMe", &bVar2);
			bVar4 = DECOR_GET_BOOL_VERBOSE(bVar7, "unlockMe", &bVar5);
			if (uVar8 & 2 >= 0)
			{
				if (!(bVar1 || bVar4))
				{
					if (bVar6)
					{
						if (bParam1)
						{
							if (uVar8 & 1 == 0)
							{
								Function_48(uParam0[iVar05], 1);
								uVar8 = StackVal;
							}
						}
						else if (uVar8 & 1 >= 0)
						{
							Function_49(uParam0[iVar05], 1);
							uVar8 = StackVal;
						}
					}
					else if ((StackVal && Global_63399) < 0 && uVar8 & 1 != 0)
					{
						if (IS_VOLUME_VALID(uParam0[iVar05]->f_12))
						{
							bVar9 = false;
							if (IS_ACTOR_IN_VOLUME(Function_87(), uParam0[iVar05]->f_12))
							{
								bVar9 = true;
							}
							if (IS_PERS_CHAR_VALID(uParam0[iVar05]->f_16))
							{
								if (IS_PERS_CHAR_ALIVE(uParam0[iVar05]->f_16))
								{
									bVar10 = GET_ACTOR_FROM_PERS_CHAR(uParam0[iVar05]->f_16);
									if (IS_ACTOR_VALID(bVar10))
									{
										if (IS_ACTOR_IN_VOLUME(bVar10, uParam0[iVar05]->f_12))
										{
											bVar9 = true;
										}
									}
								}
							}
							if (!bVar9)
							{
								Function_48(uParam0[iVar05], 1);
								uVar8 = StackVal;
							}
							if (!DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(uParam0[iVar05]->f_12))
							{
								ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(uParam0[iVar05]->f_12);
							}
							if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(uParam0[iVar05]->f_12))
							{
								ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(uParam0[iVar05]->f_12);
							}
						}
						else
						{
							Function_48(uParam0[iVar05], 1);
							uVar8 = StackVal;
						}
					}
					else if ((StackVal && Global_63399) != 0 && uVar8 & 1 < 0)
					{
						Function_49(uParam0[iVar05], 1);
						uVar8 = StackVal;
						if (IS_VOLUME_VALID(uParam0[iVar05]->f_12))
						{
							if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(uParam0[iVar05]->f_12))
							{
								REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(uParam0[iVar05]->f_12);
							}
							if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(uParam0[iVar05]->f_12))
							{
								REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(uParam0[iVar05]->f_12);
							}
						}
					}
				}
			}
			if (bVar1)
			{
				if (!bVar2)
				{
					DECOR_REMOVE(bVar7, "lockMe");
				}
				if (uVar8 & 8192 == 0)
				{
					Function_48(uParam0[iVar05], 8192);
					uVar8 = StackVal;
				}
				if (uVar8 & 1 == 0)
				{
					Function_48(uParam0[iVar05], 1);
					uVar8 = StackVal;
				}
			}
			else if (bVar4)
			{
				if (!bVar5)
				{
					DECOR_REMOVE(bVar7, "unlockMe");
				}
				if (uVar8 & 8192 >= 0)
				{
					Function_49(uParam0[iVar05], 8192);
					uVar8 = StackVal;
				}
				if (uVar8 & 1 >= 0)
				{
					Function_49(uParam0[iVar05], 1);
					uVar8 = StackVal;
				}
			}
			bVar3 = IS_DOOR_LOCKED(bVar7);
			if (uVar8 & 1 >= 0)
			{
				if (Global_3387)
				{
					if (IS_VOLUME_VALID(uParam0[iVar05]->f_12) && uVar8 & 8192 != 0)
					{
						if (bVar3)
						{
							if (IS_ACTOR_IN_VOLUME(Function_87(), uParam0[iVar05]->f_12))
							{
								SET_DOOR_LOCK(bVar7, 0);
							}
						}
					}
				}
				else if (!bVar3)
				{
					SET_DOOR_LOCK(bVar7, 1);
				}
			}
			else if (Global_3387)
			{
				if (IS_VOLUME_VALID(uParam0[iVar05]->f_12) && uVar8 & 32768 < 0)
				{
					if (IS_ACTOR_IN_VOLUME(Function_87(), uParam0[iVar05]->f_12))
					{
						if (IS_DOOR_OPENED(bVar7))
						{
							CLOSE_DOOR(bVar7, 1.0f);
							Function_49(uParam0[iVar05], 32768);
						}
					}
				}
			}
			else if (bVar3)
			{
				SET_DOOR_LOCK(bVar7, 0);
			}
		}
		iVar0++;
	}
	Global_30620 = iVar0;
	return;
}

void Function_48(var uParam0, int iParam1) //Position: 0x2448 / 9288
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_49(var uParam0, int iParam1) //Position: 0x2459 / 9305
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

int Function_50(int iParam0, bool bParam1) //Position: 0x2473 / 9331
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

bool Function_51() //Position: 0x2485 / 9349
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_52(var uParam0, var uParam1, bool bParam2, var uParam3) //Position: 0x248E / 9358
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar1 = 0;
	uParam0->f_4 = 0;
	uVar2 = Global_3386;
	Global_3386 = 0;
	if (!Function_26(32) || !IS_ACTOR_VALID(bParam2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (Function_53(uParam1[iVar03], bParam2, uParam3, iVar1, uVar2))
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

bool Function_53(int iParam0, bool bParam1, int iParam2, var uParam3, bool bParam4) //Position: 0x250F / 9487
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_86(iParam0))
	{
		return 0;
	}
	Function_221(&(Global_29008[iParam2]), 4194304);
	bVar0 = DECOR_GET_INT(StackVal, "locflag");
	if (bVar0 != 0 && *iParam0 != 5)
	{
		return 0;
	}
	bVar1 = uParam3;
	switch (*iParam0)
	{
		case 0x00000005:
			if ((bVar0 && 240) == 0)
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
			if ((bVar0 && 32) >= 0)
			{
				if (bVar1)
				{
					if (!Function_20(iParam0, 2))
					{
						if (!Function_20(iParam0, 8))
						{
							if (DECOR_CHECK_EXIST(StackVal, "customweather"))
							{
								Function_84(DECOR_GET_INT(StackVal, "customweather"), 0, 0, 30, 1);
								Function_83(iParam0, 8);
							}
						}
					}
				}
				else if (Function_20(iParam0, 2))
				{
					if (Function_20(iParam0, 8))
					{
						if (HUD_IS_FADED())
						{
							Function_14(0, 0, 0);
						}
						else
						{
							Function_14(0, 0, 30);
						}
						Function_19(iParam0, 8);
					}
				}
			}
			if ((bVar0 && 16) >= 0)
			{
				if (bVar1)
				{
					if (!Function_20(iParam0, 2))
					{
						if (!Function_20(iParam0, 4))
						{
							if (DECOR_CHECK_EXIST(StackVal, "ncustommap"))
							{
								SET_CURRENT_MAP(DECOR_GET_INT(StackVal, "ncustommap"));
								Function_83(iParam0, 4);
							}
						}
					}
				}
				else if (Function_20(iParam0, 2))
				{
					if (Function_20(iParam0, 4))
					{
						SET_CURRENT_MAP(false);
						Function_19(iParam0, 4);
					}
				}
			}
			if ((bVar0 && 128) >= 0)
			{
				if ((((((bVar1 && Function_9(iParam2)) && !Function_82(0, 0, 1, 1)) && !Global_3403) && !Global_3404) && !Function_81(2048)) && !IS_SCRIPT_VALID(Global_26316.f_60))
				{
					if (!Function_20(iParam0, 2))
					{
						if (!Function_20(iParam0, 16))
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
							if (Function_51())
							{
								bVar2 = false;
							}
							if (bVar2)
							{
								Function_83(iParam0, 16);
								Function_73(StackVal, 3, 28, GET_OBJECT_FROM_VOLUME(bParam1), 0);
							}
						}
					}
				}
				else if (Function_20(iParam0, 2))
				{
					if (Function_20(iParam0, 16))
					{
						Function_19(iParam0, 16);
					}
				}
			}
			if ((bVar0 && 64) >= 0)
			{
				if (bVar1 && !Global_3380)
				{
					if (!Function_20(iParam0, 2))
					{
						if (StackVal && DECOR_CHECK_EXIST(DECOR_CHECK_EXIST(StackVal, "factionswap"), "relationship"))
						{
							SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(StackVal, DECOR_GET_INT(StackVal, "factionswap"), DECOR_GET_INT(2, "relationship"));
						}
					}
				}
				else if (Function_20(iParam0, 2))
				{
					if (StackVal && DECOR_CHECK_EXIST(DECOR_CHECK_EXIST(StackVal, "factionswap"), "relationship"))
					{
						RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(DECOR_GET_INT(StackVal, "factionswap"), 2);
					}
				}
			}
			if (bVar1)
			{
				Function_83(iParam0, 2);
			}
			else
			{
				Function_19(iParam0, 2);
			}
			break;
		
		case 0x00000002:
		case 0x00000004:
			if (!Function_9(iParam2))
			{
				return 0;
			}
			if (IS_ACTOR_IN_VOLUME(StackVal, bParam1))
			{
				if (!Function_222(&(Global_29008[iParam2]), 262144))
				{
					if (!Function_20(iParam0, 1))
					{
						if (!Global_3377)
						{
							Function_72(StackVal, StackVal, *iParam0);
						}
						else
						{
							Global_3377 = 0;
						}
						Function_83(iParam0, 1);
					}
				}
				if (*iParam0 == 4)
				{
					if (!bParam4 && Function_9(iParam2))
					{
						Function_71(Global_29155[Global_29155[iParam210]10].f_20, Global_29155[iParam210].f_20);
					}
					Global_3386 = 1;
				}
				Function_54(iParam2);
			}
			else if (*iParam0 == 4)
			{
				Global_3386 = 0;
			}
			break;
	}
	return bVar1;
}

void Function_54(int iParam0) //Position: 0x2928 / 10536
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_222(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_258(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_59(473, 1, 0, 0);
		iVar0 = Function_58(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_59(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_59(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_59(476, 1, 0, 0);
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
		Function_57(iVar2, iVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_57(7, 30);
	}
	if (Function_56(473) <= Function_55(473))
	{
		if (!Function_51())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

float Function_55(int iParam0) //Position: 0x2A27 / 10791
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

float Function_56(int iParam0) //Position: 0x2A64 / 10852
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_57(int iParam0, bool bParam1) //Position: 0x2A9D / 10909
{
	bool bVar0;
	
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	bVar0 = SHIFT_LEFT(true, bParam1);
	(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || bVar0);
	return;
	return;
}

var Function_58(int iParam0) //Position: 0x2B04 / 11012
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_9(iParam0))
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

int Function_59(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x2B5C / 11100
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
	Function_70(iParam0, TO_FLOAT(bParam1), 1);
	Function_69(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_60(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, bParam3);
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

void Function_60(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x2D7C / 11644
{
	char* cVar0;
	char* cVar1[32];
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
			if (bParam2 > 2000.0f)
			{
				stradd(&Global_35278[iParam020] + 16, " lbs", 32);
			}
			else
			{
				bParam2 = (bParam2 / 2000.0f);
				memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
				stradd(&Global_35278[iParam020] + 16, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
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
					bVar6 = FLOOR((bParam2 - TO_FLOAT(bVar5 * 60)));
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
			bParam2 = (bParam2 * 3.28084f);
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
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(bParam2)), 32);
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
			if ((bParam2 - IntToFloat(FLOOR(bParam2))) < 0.0f)
			{
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(bParam2)), 32);
			}
			if (bParam2 < 1.0f)
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_55(390))), 32);
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
					bVar19 = bParam2;
					bVar20 = 0.0f;
				}
				else if (bParam1)
				{
					bVar19 = (Function_56(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_56(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_67(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_65(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_63(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_62(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_61(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, bParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, false, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, bParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, false, 0);
						}
						break;
					}
			}
	}
}

var Function_61() //Position: 0x33A9 / 13225
{
	int iVar0;
	
	return iVar0;
}

var Function_62(int iParam0) //Position: 0x33B1 / 13233
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_63(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x33C2 / 13250
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_64("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_64("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_64("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_64(char* cParam0, bool bParam1) //Position: 0x34B7 / 13495
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_65(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x34D0 / 13520
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_50(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_66(Function_50(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_66(int iParam0, int iParam1) //Position: 0x3535 / 13621
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_67(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x3547 / 13639
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
	if (((Function_68(iParam0) != 19 || Function_68(iParam0) != 17) || Function_68(iParam0) != 10) || Function_68(iParam0) != 9)
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

int Function_68(int iParam0) //Position: 0x3677 / 13943
{
	return Global_35278[iParam020].f_48;
}

void Function_69(int iParam0) //Position: 0x3686 / 13958
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

int Function_70(int iParam0, bool bParam1, bool bParam2) //Position: 0x3820 / 14368
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
			Global_34581[iVar1] = (Global_34581[iVar1] + bParam1);
		}
	}
	else
	{
		Global_34581[iVar1] = bParam1;
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

void Function_71(var uParam0, int iParam1) //Position: 0x3A64 / 14948
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_72(struct<5> Param0) //Position: 0x3A71 / 14961
{
	if (!StackVal != Global_13053)
	{
		Global_13053 = StackVal;
		Global_13053.f_8 = Param0;
		Global_13053.f_4 = 0;
	}
	return;
}

var Function_73(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x3A97 / 14999
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!Function_80(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_79(iParam1))
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
	if (!Function_76(1))
	{
		LOG_ERROR("Crime is disabled: CREATE_CRIME_EVENT failure");
		return "";
	}
	bVar3 = CREATE_CRIME_IN_LAYOUT(Global_26314);
	bVar4 = FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes");
	if ((IS_CRIME_VALID(bVar3) && IS_OBJECT_VALID(bVar4)) && GET_OBJECT_TYPE(bVar4) != 2)
	{
		SET_CRIME_TYPE(bVar3, iParam1);
		SET_CRIME_VICTIM(bVar3, bParam3);
		SET_CRIME_CRIMINAL(bVar3, bParam2);
		SET_CRIME_BEGIN_TIMESTAMP(bVar3, GET_CURRENT_GAME_TIME());
		SET_CRIME_END_TIMESTAMP(bVar3, GET_CURRENT_GAME_TIME());
		GET_OBJECT_POSITION(bParam3, &vVar0);
		SET_CRIME_POSITION(bVar3, vVar0);
		bVar5 = CREATE_OBJECTSET_IN_LAYOUT(Function_61(), Global_26314, 3, 0);
		SET_CRIME_OBJECTSET(bVar3, bVar5);
		if (!bParam4)
		{
			SET_CRIME_WITNESSED(bVar3, true);
		}
		else
		{
			SET_CRIME_WITNESSED(bVar3, 3);
			Function_74();
		}
		SET_CRIME_FACTION(StackVal, bVar3);
		SET_CRIME_TALLIED(bVar3, 0);
		SET_CRIME_COUNTER(bVar3, 1);
		SET_CRIME_WORLD_REGION(bVar3, Global_26361.f_12);
		if ((Global_26998[iParam118].f_20 != 2 || Global_26998[iParam118].f_20 != 3) || Global_26998[iParam118].f_20 != 4)
		{
			SET_CRIME_IN_PROGRESS(bVar3, 1);
		}
		else
		{
			SET_CRIME_IN_PROGRESS(bVar3, 0);
		}
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_CRIME(bVar3), GET_OBJECTSET_FROM_OBJECT(bVar4));
		SET_ACTOR_TIME_OF_LAST_CRIME(bParam2, GET_CURRENT_GAME_TIME());
	}
	return bVar3;
}

void Function_74() //Position: 0x3D27 / 15655
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	iVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_75(bVar0, iVar1);
	bVar2 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar2))
	{
		bVar3 = GET_CRIME_FROM_OBJECT(bVar2);
		if (IS_CRIME_VALID(bVar3))
		{
			SET_CRIME_WITNESSED(bVar3, 3);
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

void Function_75(bool bParam0, bool bParam1) //Position: 0x3D8A / 15754
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

bool Function_76(bool bParam0) //Position: 0x3DB9 / 15801
{
	if (Function_81(256))
	{
		return 0;
	}
	if (Function_81(262144))
	{
		return 0;
	}
	if (Function_78())
	{
		return 0;
	}
	if (!Function_81(1))
	{
		return 0;
	}
	if (!Function_81(4096))
	{
		return 0;
	}
	if (bParam0 && Function_77(12))
	{
		return 0;
	}
	if (Global_3378)
	{
		return 0;
	}
	if (Function_81(2048))
	{
		return 0;
	}
	if (Function_51() || !bParam0)
	{
		if (Global_29007 != 2 || Global_29007 != 5)
		{
			return 0;
		}
	}
	return 1;
}

int Function_77(int iParam0) //Position: 0x3E2F / 15919
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_78() //Position: 0x3E40 / 15936
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

bool Function_79(int iParam0) //Position: 0x3E59 / 15961
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_80(int iParam0) //Position: 0x3E6F / 15983
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_81(int iParam0) //Position: 0x3E84 / 16004
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_82(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x3EA2 / 16034
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

void Function_83(int iParam0, int iParam1) //Position: 0x3F46 / 16198
{
	iParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_84(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x3F57 / 16215
{
	int iVar0;
	bool bVar1;
	
	Function_18(uParam0);
	Global_16524.f_4 = uParam0;
	Global_16524.f_16 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_85(StackVal, bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(iParam1, iParam2, iParam3);
			Function_15(StackVal, bVar1, bParam4);
		}
	}
}

void Function_85(int iParam0, int iParam1) //Position: 0x3FC9 / 16329
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(false, false, false, false);
	Function_18(iParam0);
	Function_17(iVar0);
	PRINTNL();
	Function_15(iParam0, iVar0, iParam1);
	return;
}

bool Function_86(int iParam0) //Position: 0x3FEE / 16366
{
	if (*iParam0 == 0)
	{
		return 0;
	}
	if (!IS_VOLUME_VALID(*((iParam0 + 4))))
	{
		return 0;
	}
	return 1;
}

var Function_87() //Position: 0x400D / 16397
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_88(bool bParam0, bool bParam1) //Position: 0x4022 / 16418
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	bool bVar12;
	int iVar13;
	vector3 vVar14;
	struct<5> Var17;
	bool bVar36;
	bool bVar37;
	bool bVar38;
	int iVar39;
	int iVar40;
	bool bVar41;
	
	if (DECOR_CHECK_EXIST(Global_34573, "QM_TriggerAttack"))
	{
		DECOR_REMOVE(Global_34573, "QM_TriggerAttack");
		Function_44(bParam0 + 356, 16);
		if (DECOR_CHECK_EXIST(Global_34573, "CurrentTown_Safe"))
		{
			DECOR_REMOVE(Global_34573, "CurrentTown_Safe");
		}
		if (bParam0->f_364 == 4294967295)
		{
			bParam0->f_364 = Function_200(0, bParam1, 3);
		}
		if (!Function_29(bParam0->f_356, 64))
		{
			bParam0->f_188 = 8;
		}
	}
	else if (bParam1 != Global_30717[1] || HUD_IS_FADED())
	{
		if (!Function_29(bParam0->f_356, 0x20000000))
		{
			AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(!Function_198(1, 0));
			Function_197(bParam0 + 356, 0x20000000);
		}
		return;
	}
	if (Function_29(bParam0->f_356, 16))
	{
		Function_196(bParam1, 0.0f);
		if (DECOR_CHECK_EXIST(Global_34573, "CurrentTown_Safe"))
		{
			DECOR_REMOVE(Global_34573, "CurrentTown_Safe");
		}
		return;
	}
	if (Function_29(bParam0->f_356, 4))
	{
		return;
	}
	if (Global_3380 && !Function_29(bParam0->f_356, 4))
	{
		Function_197(bParam0 + 356, 4);
		Function_30(bParam0, bParam1);
		DECOR_SET_FLOAT(StackVal, "ZombieScore", 0.0f);
		Function_195(0, 4294967295);
		Function_194();
		Function_25(bParam1);
		return;
	}
	fVar0 = Function_192(Function_193(bParam1));
	fVar1 = Function_191(bParam1);
	fVar2 = ((fVar1 / fVar0) * 100.0f);
	if (bParam0->f_360 == 4294967295)
	{
		bParam0->f_360 = Function_200(111, 111, 5);
	}
	if (DECOR_CHECK_EXIST(Global_34573, "CurrentTown_Safe"))
	{
		DECOR_REMOVE(Global_34573, "CurrentTown_Safe");
		iVar3 = 0;
		while (StackVal < (iVar3 - 1))
		{
			bVar4 = (*bParam0 + 4)[iVar35];
			if (IS_ACTOR_ALIVE(bVar4))
			{
				Function_190(bParam0 + 4[iVar35]);
			}
			iVar3++;
		}
		Function_189(bParam0);
		bParam0->f_188 = 7;
		return;
	}
	if (Function_188(Function_193(bParam1)))
	{
		if (((bParam0->f_188 > 7 && !Function_29(bParam0->f_356, 2048)) && !IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "DLC_give_ammo")) && !ACTOR_HAS_ANIM_SET(Global_34573, "DLC_give_ammo"))
		{
			if (Function_29(bParam0->f_356, 4096) || fVar0 >= (fVar1 + 10.0f))
			{
				Function_185(bParam0, 0);
				Function_190(bParam0 + 168);
				iVar5 = 0;
				while (StackVal < (iVar5 - 1))
				{
					Function_190(bParam0 + 4[iVar55]);
					iVar5++;
				}
				Function_197(bParam0 + 356, 2048);
				UI_SET_PROGRESS_BAR_VAL("ZMeter", 100.0f);
				UI_SET_PROGRESS_BAR_CHANGE("ZMeter", (FLOOR((fVar0 / 10.0f)) - 1));
				UI_REFRESH("ZMeter");
				Function_196(bParam1, 0.0f);
				ENABLE_AMBIENT_SPAWNING(true);
				SET_POP_DENSITY_MULTIPLIER(0.5f);
				Function_184(1);
				SET_AMBIENT_DEAD_COUNT_DECAY_RATE(3.0f);
				DECOR_SET_INT(Global_34573, "nDecayRate", 3);
				bParam0->f_188 = 5;
			}
			else
			{
				Function_182();
			}
		}
		if (DECOR_CHECK_EXIST(Global_34573, "TimeToDestroyUI"))
		{
			if (DECOR_GET_FLOAT(Global_34573, "TimeToDestroyUI") + 2.0f) > GET_CURRENT_GAME_TIME()
			{
				DECOR_REMOVE(Global_34573, "TimeToDestroyUI");
				UI_EXIT("ZMeter");
			}
		}
		if (bParam0->f_188 <= 1 && bParam0->f_188 >= 6)
		{
			if (bParam0->f_188 >= 1)
			{
				Function_177(bParam0, bParam1, fVar2);
			}
			if (!Function_29(bParam0->f_356, 131072))
			{
				if (bParam0->f_188 == 6 && bParam0->f_188 < 1)
				{
					if ((Global_3386 && !Function_29(bParam0->f_356, 32768)) && !UI_ISACTIVE("LocationText"))
					{
						Function_197(bParam0 + 356, 32768);
						UI_ENTER("ZMeter");
						UI_SET_TEXT("ZMeter", "Undead_Density");
						UI_SET_ICON("ZMeter", (FLOOR((fVar0 / 10.0f)) - 1));
						fVar6 = Function_191(bParam1);
						fVar7 = (fVar6 % 10.0f);
						bVar8 = (fVar6 / 10.0f);
						UI_SET_PROGRESS_BAR_VAL("ZMeter", (FABS((fVar7 * 10.0f)) + 1.0f));
						UI_SET_PROGRESS_BAR_CHANGE("ZMeter", FLOOR(bVar8));
						UI_REFRESH("ZMeter");
					}
					if (((Function_29(bParam0->f_356, 32768) && !DECOR_CHECK_EXIST(Global_34573, "TimeToDestroyUI")) && UI_ISACTIVE("ZMeter")) && bParam0->f_188 > 5)
					{
						Function_189(bParam0);
					}
				}
			}
		}
	}
	Function_175(bParam0, bParam1);
	if (Function_29(bParam0->f_356, 1024))
	{
		Function_174(bParam0);
	}
	if (CUTSCENE_MANAGER_IS_CUTSCENE_PLAYING() || Global_63096)
	{
		if (!Function_29(bParam0->f_356, 16384))
		{
			Function_197(bParam0 + 356, 16384);
			iVar9 = 0;
			while (StackVal < (iVar9 - 1))
			{
				MEMORY_ALLOW_SHOOTING((*bParam0 + 4)[iVar95], 0);
				iVar9++;
			}
		}
	}
	else if (Function_29(bParam0->f_356, 16384))
	{
		Function_44(bParam0 + 356, 16384);
		iVar9 = 0;
		while (StackVal < (iVar9 - 1))
		{
			MEMORY_ALLOW_SHOOTING((*bParam0 + 4)[iVar95], 1);
			iVar9++;
		}
	}
	if (Function_29(bParam0->f_356, 262144))
	{
		if (Function_241(bParam0))
		{
			Function_44(bParam0 + 356, 262144);
			Function_172(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_30616, bParam1, *bParam0);
			if (!Function_27(bParam1))
			{
				if (!Function_29(bParam0->f_356, 8))
				{
					Function_197(bParam0 + 356, 8);
					Function_171();
				}
			}
		}
	}
	if (Function_29(bParam0->f_356, 524288))
	{
		if (Function_171())
		{
			Function_197(bParam0 + 356, 8);
			Function_44(bParam0 + 356, 524288);
		}
	}
	switch (bParam0->f_188)
	{
		case 0x00000001:
			if (((!HUD_IS_FADED() && (Function_45(Global_76846, 65536) || !Global_3365)) && Global_3386) && !Global_3385)
			{
				if (DECOR_CHECK_EXIST(Global_34573, "bTalkedToLeader"))
				{
					DECOR_REMOVE(Global_34573, "bTalkedToLeader");
				}
				if (DECOR_CHECK_EXIST(Global_34573, "bNoSurvivorHelp"))
				{
					DECOR_REMOVE(Global_34573, "bNoSurvivorHelp");
				}
				Function_163(bParam0);
				Function_197(bParam0 + 356, 262144);
				if (Function_27(bParam1))
				{
					if ((RAND_INT_RANGE(false, 100000) % 100) <= 75)
					{
						SAY_SINGLE_LINE_STRING(Global_34573, "PLAYER_SHOCKED_BY_CARNAGE", true, true, 0, 0, true, false);
					}
					Unknown_Function();
					Function_157(bParam1);
					Function_195(0, 4294967295);
					Function_196(bParam1, 0.0f);
					REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(true);
					AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(true);
					SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
					if (Function_29(bParam0->f_356, 1))
					{
						Function_156(bParam0, bParam1);
						Function_155("Survivor_Obj_TalkToLeader", 0x40f00000, 1, 2, 0, 0, 0, 0);
						bParam0->f_188 = 2;
					}
					else
					{
						bParam0->f_188 = 4;
					}
					Function_152("Survivor_Help_TownAttack", 0x41200000, 1, 0, 2, 1, 0);
				}
				else
				{
					Unknown_Function();
					Function_157(bParam1);
					Function_197(bParam0 + 356, 2);
					Function_195(1, 4294967295);
					AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(false);
					bParam0->f_368 = 1000.0f;
					bParam0->f_188 = 11;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_146(bParam0 + 168, 1, bParam0 + 356))
			{
				SET_ANIM_SET_FOR_ACTOR(bParam0->f_168, "DLC_give_ammo", 0);
				iVar10 = UNK_0xDB679ED9(GET_WEAPON_IN_HAND(bParam0->f_168));
				if (((iVar10 != 41 || iVar10 != 42) || iVar10 != 43) || iVar10 != 44)
				{
					SET_ACTION_NODE_FOR_ACTOR(bParam0->f_168, "DLC_give_ammo/Survivor/Leader/Rfl");
				}
				else
				{
					SET_ACTION_NODE_FOR_ACTOR(bParam0->f_168, "DLC_give_ammo/Survivor/Leader/Ptl");
				}
				Function_114(bParam0, bParam1);
				SAY_SINGLE_LINE_STRING_WITH_REPLY(bParam0->f_168, "GET_US_AMMO_P", Global_34573, "PLAYER_AGREE_TO_GET_AMMO", 1, 1, 0, 0);
				bParam0->f_188 = 3;
			}
			break;
		
		case 0x00000003:
			bVar11 = false;
			iVar9 = 0;
			while (0 < (iVar9 - 1))
			{
				bVar12 = (*bParam0 + 4)[iVar95];
				if (IS_ACTOR_ALIVE(bVar12))
				{
					if (Function_29((bParam0 + 4[iVar95])->f_16, 2))
					{
						if (DECOR_CHECK_EXIST(bVar12, "nUC_NoAmmo"))
						{
							if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(DECOR_GET_INT(bVar12, "nUC_NoAmmo")))
							{
								RELEASE_SCRIPT_USE_CONTEXT(DECOR_GET_INT(bVar12, "nUC_NoAmmo"));
								DECOR_REMOVE(bVar12, "nUC_NoAmmo");
								SAY_SINGLE_LINE_STRING(bVar12, "PLAYER_NO_AMMO_P", true, true, 2, 0, true, false);
								return;
							}
						}
						if (Function_146(bParam0 + 4[iVar95], 0, bParam0 + 4[iVar95] + 16))
						{
							RELEASE_SCRIPT_USE_CONTEXT(bParam1);
							iVar13 = GET_AMMO_ENUM(GET_WEAPON_IN_HAND(bVar12));
							Global_13172[bParam0->f_36411].f_32 = (Global_13172[bParam0->f_36411].f_32 + 1.0f);
							AI_DONT_HARM_ACTOR(Global_34573);
							AI_DONT_HARM_ACTOR((*bParam0 + 4)[iVar95]);
							Function_103(bParam0 + 4[iVar95], iVar13);
							Function_44(bParam0 + 4[iVar95] + 16, 2);
							Function_197(bParam0 + 4[iVar95] + 16, 16);
						}
						bVar11++;
					}
					else if ((!IS_ACTION_NODE_PLAYING_PARTIAL(bVar12, "DLC_give_ammo") && Function_29((bParam0 + 4[iVar95])->f_16, 16)) && (GET_TASK_STATUS(bVar12, 6) != 0 || GET_TASK_STATUS(bVar12, 6) != 2))
					{
						Function_44(bParam0 + 4[iVar95] + 16, 16);
						AI_CLEAR_DONT_HARM_ACTOR(bVar12);
						AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
						SET_MOVER_FROZEN(bVar12, 0);
						RESET_ANIM_SET_FOR_ACTOR(bVar12, 1);
						vVar14 = { 0.0f, 0.0f, 0.0f };
						Var17 = { 0.0f, 0.0f, 0.0f };
						GET_OBJECT_POSITION(bParam1, &vVar14);
						GET_OBJECT_ORIENTATION(StackVal, &Var17);
						TASK_PRIORITY_SET(bVar12, 1);
						TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, bVar12, &vVar14, -1f);
						strcpy(&cVar20, "PLAYER_RESPOND_TO_THANKS_Z_", 64);
						if (IS_ACTOR_MALE(bVar12))
						{
							stradd(&cVar20, "M", 64);
						}
						else
						{
							stradd(&cVar20, "F", 64);
						}
						if (Function_102(bVar12))
						{
							SAY_SINGLE_LINE_STRING_WITH_REPLY(bVar12, "THANKS_FOR_AMMO_P", Global_34573, &cVar20, 1, 1, 2, 0);
						}
						else
						{
							SAY_SINGLE_LINE_STRING_WITH_REPLY(bVar12, "nTHANK_YOU", Global_34573, &cVar20, 1, 1, 2, 0);
						}
						bParam0->f_372 = GET_CURRENT_GAME_TIME();
					}
				}
				else if (!IS_ACTOR_ALIVE(bVar12))
				{
					if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
					{
						RELEASE_SCRIPT_USE_CONTEXT(StackVal);
					}
					if (IS_VOLUME_VALID((bParam0 + 4[iVar95])->f_12))
					{
						DESTROY_VOLUME((bParam0 + 4[iVar95])->f_12);
					}
				}
				iVar9++;
			}
			if (Global_30842[31])
			{
				PRINTSTRING("Survivors left to save: ");
				PRINTINT(bVar11);
				PRINTNL();
			}
			if (bVar11 == 0)
			{
				bParam0->f_188 = 4;
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000005:
			if (!DECOR_CHECK_EXIST(Global_34573, "bNoSurvivorHelp"))
			{
				DECOR_SET_BOOL(Global_34573, "bNoSurvivorHelp", true);
			}
			if (DECOR_CHECK_EXIST(Global_34573, "nDecayRate"))
			{
				bVar36 = DECOR_GET_INT(Global_34573, "nDecayRate");
				if (bVar36 == 3)
				{
					DECOR_SET_INT(Global_34573, "nDecayRate", 2);
					SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
					SET_POP_DENSITY_MULTIPLIER(0.5f);
				}
				else if (bVar36 == 2)
				{
					DECOR_SET_INT(Global_34573, "nDecayRate", true);
					SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
					SET_POP_DENSITY_MULTIPLIER(0.75f);
				}
				else if (bVar36 == 1)
				{
					DECOR_REMOVE(Global_34573, "nDecayRate");
					SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
					SET_POP_DENSITY_MULTIPLIER(1.0f);
				}
			}
			else
			{
				SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
				SET_POP_DENSITY_MULTIPLIER(1.0f);
			}
			ENABLE_AMBIENT_SPAWNING(true);
			Function_184(1);
			if (Function_97(bParam0))
			{
				DECOR_SET_FLOAT(Global_34573, "TimeToDestroyUI", GET_CURRENT_GAME_TIME());
				SET_POP_DENSITY_MULTIPLIER(0.0f);
				ENABLE_AMBIENT_SPAWNING(false);
				Function_96(1);
				SET_AMBIENT_DEAD_COUNT_DECAY_RATE(3.0f);
				bParam0->f_188 = 6;
			}
			break;
		
		case 0x00000006:
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bParam0->f_352) == 0)
			{
				AUDIO_MUSIC_RELEASE_CONTROL(3000, 0);
				Function_196(bParam1, 300.0f);
			}
			else
			{
				Function_196(bParam1, 0.0f);
			}
			break;
		
		case 0x00000007:
			if (!Function_29(bParam0->f_356, 8))
			{
				Function_197(bParam0 + 356, 8);
				Function_171();
			}
			if (DECOR_CHECK_EXIST(Global_34573, "bTalkedToLeader"))
			{
				DECOR_REMOVE(Global_34573, "bTalkedToLeader");
			}
			if (DECOR_CHECK_EXIST(Global_34573, "bNoSurvivorHelp"))
			{
				DECOR_REMOVE(Global_34573, "bNoSurvivorHelp");
			}
			Function_95(bParam1);
			Function_94(bParam0);
			Function_185(bParam0, 1);
			Function_25(Global_29006);
			bParam0->f_364 = Function_200(0, bParam1, 3);
			Function_197(&Global_13172[bParam0->f_36411] + 24, 0x40000000);
			Function_197(bParam0 + 356, 512);
			if (!Function_29(Global_13172[bParam0->f_36411].f_24, 1))
			{
				bVar37 = Function_91(Function_193(bParam1));
				Function_59(660, bVar37, 0, 0);
				Function_197(&Global_13172[bParam0->f_36411] + 24, 1);
			}
			bParam0->f_188 = 11;
			break;
		
		case 0x00000008:
			Unknown_Function();
			Function_251(bParam0, Global_30616, bParam1);
			Function_250(bParam0, Global_30616);
			bParam0->f_188 = 9;
			break;
		
		case 0x00000009:
			if (Function_241(bParam0))
			{
				if (!bParam1 != Global_30717[0])
				{
					Function_226(bParam0, bParam1, Global_30616);
					bParam0->f_188 = 1;
				}
				else if (!DECOR_CHECK_EXIST(Global_34573, "BLACKWATER_WAIT"))
				{
					Function_226(bParam0, bParam1, Global_30616);
					DECOR_SET_FLOAT(Global_34573, "BLACKWATER_WAIT", GET_CURRENT_GAME_TIME());
				}
				else if (DECOR_GET_FLOAT(Global_34573, "BLACKWATER_WAIT") + 3.0f) > GET_CURRENT_GAME_TIME()
				{
					SET_ANIM_SET_FOR_ACTOR((*bParam0 + 4)[15], "tense_with_guns", 0);
					SET_ACTION_NODE_FOR_ACTOR((*bParam0 + 4)[15], "tense_with_guns");
					SET_ANIM_SET_FOR_ACTOR((*bParam0 + 4)[25], "tense_with_guns", 0);
					SET_ACTION_NODE_FOR_ACTOR((*bParam0 + 4)[25], "tense_with_guns");
					bParam0->f_188 = 10;
				}
			}
			break;
		
		case 0x0000000A:
			if (DECOR_CHECK_EXIST(Global_34573, "Special_BLK_Ready"))
			{
				DECOR_REMOVE(Global_34573, "Special_BLK_Ready");
				Function_114(bParam0, bParam1);
				Function_163(bParam0);
				Function_197(bParam0 + 356, 262144);
				Unknown_Function();
				Function_197(&Global_13172[Function_200(111, 111, 5)11] + 20, 4);
				Function_157(bParam1);
				Function_195(0, 4294967295);
				Function_196(bParam1, 0.0f);
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(true);
				AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(true);
				RESET_ANIM_SET_FOR_ACTOR((*bParam0 + 4)[15], 0);
				RESET_ANIM_SET_FOR_ACTOR((*bParam0 + 4)[25], 0);
				bParam0->f_188 = 3;
			}
			break;
	}
	iVar9 = 0;
	while (bParam1 < (iVar9 - 1))
	{
		bVar38 = (*bParam0 + 4)[iVar95];
		if (IS_ACTOR_VALID(bVar38))
		{
			if (!IS_ACTOR_ALIVE(bVar38))
			{
				if (!DECOR_CHECK_EXIST(bVar38, "DeathTallied"))
				{
					DECOR_SET_BOOL(bVar38, "DeathTallied", true);
					Global_13172[bParam0->f_36411].f_28 = (Global_13172[bParam0->f_36411].f_28 + 1.0f);
					if (Function_29(Global_13172[bParam0->f_36411].f_24, 1))
					{
						Function_90(660, 1, 0);
					}
				}
				if (IS_SCRIPT_USE_CONTEXT_VALID(true))
				{
					RELEASE_SCRIPT_USE_CONTEXT(bParam1);
				}
				if (DECOR_CHECK_EXIST((*bParam0 + 4)[iVar95], "nUC_NoAmmo"))
				{
					RELEASE_SCRIPT_USE_CONTEXT(DECOR_GET_INT((*bParam0 + 4)[iVar95], "nUC_NoAmmo"));
				}
				if (bVar38 == bParam0->f_168)
				{
					if (IS_SCRIPT_USE_CONTEXT_VALID(bParam0))
					{
						RELEASE_SCRIPT_USE_CONTEXT(StackVal);
					}
					if (bParam0->f_188 <= 7)
					{
						if ((!GET_LAST_ATTACKER(bVar38) != Global_34573 && bParam0->f_188 != 2) && !Function_29(bParam0->f_356, 8192))
						{
							Function_197(bParam0 + 356, 8192);
							Function_152("TerrCont_LeaderDead", 0x41200000, 1, 0, 2, 1, 0);
							iVar39 = 0;
							while (StackVal < (iVar39 - 1))
							{
								Function_190(bParam0 + 4[iVar395]);
								SET_ACTOR_CAN_BE_TARGETED((*bParam0 + 4)[iVar395], true);
								iVar39++;
							}
							if (bParam0->f_188 <= 4)
							{
								bParam0->f_188 = 4;
							}
						}
					}
				}
				if (IS_VOLUME_VALID((bParam0 + 4[iVar95])->f_12))
				{
					DESTROY_VOLUME((bParam0 + 4[iVar95])->f_12);
				}
			}
			if (GET_LAST_ATTACKER(bVar38) != Global_34573 && !Function_29(bParam0->f_356, 0x4000000))
			{
				if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
				{
					RELEASE_SCRIPT_USE_CONTEXT(StackVal);
				}
				if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
				{
					RELEASE_SCRIPT_USE_CONTEXT(StackVal);
				}
				iVar40 = 0;
				while (StackVal < (iVar40 - 1))
				{
					Function_190(bParam0 + 4[iVar405]);
					SET_ACTOR_CAN_BE_TARGETED((*bParam0 + 4)[iVar405], true);
					MEMORY_CONSIDER_AS_ENEMY((*bParam0 + 4)[iVar405], Global_34573);
					iVar40++;
				}
				if (bParam0->f_188 <= 7)
				{
					if (bParam0->f_188 <= 5)
					{
						bParam0->f_188 = 4;
					}
					Function_152("Survivor_HitOne_Help", 0x41200000, 1, 0, 2, 1, 0);
				}
				Function_197(bParam0 + 356, 0x4000000);
				bParam0->f_364 = Function_200(0, bParam1, 3);
				Function_197(&Global_13172[bParam0->f_36411] + 24, 0x40000000);
			}
		}
		iVar9++;
	}
	if (!IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "DLC_give_ammo") && ACTOR_HAS_ANIM_SET(Global_34573, "DLC_give_ammo"))
	{
		RESET_ANIM_SET_FOR_ACTOR(Global_34573, 1);
	}
	bVar41 = GET_CURRENT_GRINGO(Global_34573);
	if (IS_GRINGO_VALID(bVar41))
	{
		if (STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(GET_OBJECT_FROM_GRINGO(bVar41)), "footlock"))
		{
			Function_89(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, bVar41, *bParam0);
		}
	}
	return;
}

void Function_89(bool bParam0, struct<365> Param1) //Position: 0x533C / 21308
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	
	bVar0 = GET_OBJECT_FROM_GRINGO(bParam0);
	bVar1 = GET_OBJECT_NAME(bVar0);
	STRING_CLEAR_TOKENIZER();
	iVar2 = SET_OWNERSHIP_STRAGGLER(bVar1, "_");
	bVar3 = STRING_GET_TOKEN((iVar2 - 2));
	bVar4 = TO_FLOAT(STRING_TO_INT(bVar3));
	Function_197(&Global_13172[Param1.f_36411] + 20, FLOOR(POW(2.0f, bVar4)));
}

int Function_90(int iParam0, bool bParam1, int iParam2) //Position: 0x538B / 21387
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_DECREASE_INT_NOW: You cannot decrease this STAT_TYPE_LIFETIME: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_DECREASE_INT_NOW: You cannot decrease a STAT_TYPE_LIFETIME!");
		return 0;
	}
	if (Global_35278[iParam020].f_48 != 2 && Global_34581[iParam0] >= 0.0f)
	{
		Global_34581[iParam0] = 0.0f;
		return 1;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: iDecreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] - TO_FLOAT(bParam1));
	Function_69(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_60(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			REMOVE_COLLECTABLE(&(Global_35278[iParam020]), Global_34573);
			iVar1++;
		}
	}
	return 1;
}

var Function_91(int iParam0) //Position: 0x5586 / 21894
{
	int iVar0;
	int iVar1[8];
	int iVar10;
	int iVar11;
	int iVar12;
	var uVar13;
	
	iVar0 = Function_93(iParam0);
	iVar10 = 0;
	while (iVar10 < 7)
	{
		iVar1[iVar10] = 4294967295;
		iVar10++;
	}
	iVar11 = Function_92(&iVar1, iVar0);
	iVar12 = 0;
	iVar10 = 0;
	while (iVar10 < (iVar11 - 1))
	{
		if (iVar1[iVar10] != 4294967295)
		{
			switch (iParam0)
			{
				case 0x00000001:
					uVar13 = Global_6298[iVar102];
					break;
				
				case 0x00000002:
					uVar13 = Global_6351[iVar102];
					break;
				
				case 0x00000003:
					uVar13 = Global_6364[iVar102];
					break;
				
				case 0x00000004:
					uVar13 = Global_6402[iVar102];
					break;
				
				case 0x00000005:
					uVar13 = Global_6433[iVar102];
					break;
				
				case 0x00000008:
					uVar13 = Global_6563[iVar102];
					break;
				
				case 0x00000009:
					uVar13 = Global_6614[iVar102];
					break;
				
				case 0x0000000B:
					uVar13 = Global_6654[iVar102];
					break;
				
				case 0x0000000C:
					uVar13 = Global_6709[iVar102];
					break;
				
				case 0x0000000D:
					uVar13 = Global_6764[iVar102];
					break;
				
				case 0x0000000E:
					uVar13 = Global_6785[iVar102];
					break;
				
				case 0x0000000F:
					uVar13 = Global_6815[iVar102];
					break;
				
				case 0x00000010:
					uVar13 = Global_6866[iVar102];
					break;
				
				case 0x00000011:
					uVar13 = Global_6490[iVar102];
					break;
				
				case 0x00000019:
					uVar13 = Global_6933[iVar102];
					break;
				
				case 0x00000012:
					uVar13 = Global_6987[iVar102];
					break;
				
				case 0x00000013:
					uVar13 = Global_7002[iVar102];
					break;
				
				case 0x00000015:
					uVar13 = Global_7035[iVar102];
					break;
				
				case 0x00000016:
					uVar13 = Global_7113[iVar102];
					break;
				
				case 0x00000017:
					uVar13 = Global_7148[iVar102];
					break;
				
				case 0x00000018:
					uVar13 = Global_7171[iVar102];
					break;
			}
			if (!Function_29(uVar13, 4))
			{
				iVar12++;
			}
		}
		iVar10++;
	}
	return iVar12;
}

int Function_92(int iParam0, int iParam1) //Position: 0x5770 / 22384
{
	iParam1 = iParam1;
	if (iParam1 == Global_30640[0])
	{
		(*iParam0)[0] = 65;
		(*iParam0)[1] = 68;
		(*iParam0)[2] = 435;
		(*iParam0)[3] = 428;
		(*iParam0)[4] = 107;
		(*iParam0)[5] = 140;
		return 6;
	}
	if (iParam1 == Global_30717[0])
	{
		(*iParam0)[0] = 89;
		(*iParam0)[1] = 95;
		(*iParam0)[2] = 146;
		return 3;
	}
	if (iParam1 == Global_30668[1])
	{
		(*iParam0)[0] = 56;
		(*iParam0)[1] = 24;
		(*iParam0)[2] = 138;
		(*iParam0)[3] = 139;
		return 4;
	}
	if (iParam1 == Global_30668[0])
	{
		(*iParam0)[0] = 54;
		(*iParam0)[1] = 420;
		(*iParam0)[2] = 38;
		(*iParam0)[3] = 213;
		(*iParam0)[4] = 55;
		return 5;
	}
	if (iParam1 == Global_30693[0])
	{
		(*iParam0)[0] = 276;
		(*iParam0)[1] = 237;
		(*iParam0)[2] = 290;
		(*iParam0)[3] = 460;
		(*iParam0)[4] = 269;
		(*iParam0)[5] = 283;
		return 6;
	}
	if (iParam1 == Global_30685[0])
	{
		(*iParam0)[0] = 289;
		(*iParam0)[1] = 392;
		(*iParam0)[2] = 268;
		(*iParam0)[3] = 266;
		(*iParam0)[4] = 382;
		(*iParam0)[5] = 245;
		(*iParam0)[6] = 304;
		return 7;
	}
	if (iParam1 == Global_30640[2])
	{
		(*iParam0)[0] = 487;
		(*iParam0)[1] = 491;
		(*iParam0)[2] = 493;
		return 3;
	}
	if (iParam1 == Global_30707[3])
	{
		(*iParam0)[0] = 379;
		(*iParam0)[1] = 380;
		(*iParam0)[2] = 391;
		(*iParam0)[3] = 455;
		return 4;
	}
	if (iParam1 == Global_30685[2])
	{
		(*iParam0)[0] = 410;
		(*iParam0)[1] = 411;
		(*iParam0)[2] = 465;
		return 3;
	}
	if (iParam1 == Global_30640[1])
	{
		(*iParam0)[0] = 152;
		(*iParam0)[1] = 176;
		return 2;
	}
	if (iParam1 == Global_30658[1])
	{
		(*iParam0)[0] = 133;
		(*iParam0)[1] = 144;
		return 2;
	}
	if (iParam1 == Global_30723[2])
	{
		(*iParam0)[0] = 29;
		(*iParam0)[1] = 30;
		(*iParam0)[2] = 28;
		return 3;
	}
	if (iParam1 == Global_30685[1])
	{
		(*iParam0)[0] = 516;
		(*iParam0)[1] = 529;
		return 2;
	}
	if (iParam1 == Global_30723[1])
	{
		(*iParam0)[0] = 169;
		(*iParam0)[1] = 39;
		(*iParam0)[2] = 149;
		return 3;
	}
	if (iParam1 == Global_30693[1])
	{
		(*iParam0)[0] = 62;
		(*iParam0)[1] = 242;
		(*iParam0)[2] = 244;
		(*iParam0)[3] = 296;
		(*iParam0)[4] = 297;
		(*iParam0)[5] = 260;
		(*iParam0)[6] = 295;
		(*iParam0)[7] = 141;
		return 8;
	}
	if (iParam1 == Global_30658[3])
	{
		(*iParam0)[0] = 505;
		(*iParam0)[1] = 506;
		(*iParam0)[2] = 507;
		(*iParam0)[3] = 508;
		(*iParam0)[4] = 510;
		(*iParam0)[5] = 509;
		return 6;
	}
	if (iParam1 == Global_30658[4])
	{
		(*iParam0)[0] = 400;
		return 1;
	}
	if (iParam1 == Global_30707[2])
	{
		(*iParam0)[0] = 281;
		(*iParam0)[1] = 282;
		(*iParam0)[2] = 456;
		return 3;
	}
	if (iParam1 == Global_30707[0])
	{
		(*iParam0)[0] = 396;
		(*iParam0)[1] = 462;
		(*iParam0)[2] = 15;
		(*iParam0)[3] = 11;
		(*iParam0)[4] = 461;
		return 5;
	}
	if (iParam1 == Global_30693[2])
	{
		(*iParam0)[0] = 238;
		(*iParam0)[1] = 530;
		(*iParam0)[2] = 294;
		return 3;
	}
	if (iParam1 == Global_30723[0])
	{
		(*iParam0)[0] = 404;
		return 1;
	}
	if (iParam1 == Global_30679[0])
	{
		(*iParam0)[0] = 168;
		(*iParam0)[1] = 176;
		(*iParam0)[2] = 177;
		return 3;
	}
	return 0;
}

var Function_93(int iParam0) //Position: 0x5B4C / 23372
{
	if (iParam0 == 1)
	{
		return Global_30640[0];
	}
	if (iParam0 == 2)
	{
		return Global_30640[2];
	}
	if (iParam0 == 3)
	{
		return Global_30640[1];
	}
	if (iParam0 == 4)
	{
		return Global_30658[1];
	}
	if (iParam0 == 5)
	{
		return Global_30658[3];
	}
	if (iParam0 == 8)
	{
		return Global_30668[0];
	}
	if (iParam0 == 9)
	{
		return Global_30668[1];
	}
	if (iParam0 == 11)
	{
		return Global_30679[0];
	}
	if (iParam0 == 12)
	{
		return Global_30685[0];
	}
	if (iParam0 == 13)
	{
		return Global_30685[1];
	}
	if (iParam0 == 14)
	{
		return Global_30685[2];
	}
	if (iParam0 == 15)
	{
		return Global_30693[0];
	}
	if (iParam0 == 16)
	{
		return Global_30693[1];
	}
	if (iParam0 == 17)
	{
		return Global_30693[2];
	}
	if (iParam0 == 25)
	{
		return Global_30707[2];
	}
	if (iParam0 == 18)
	{
		return Global_30707[3];
	}
	if (iParam0 == 19)
	{
		return Global_30707[0];
	}
	if (iParam0 == 21)
	{
		return Global_30717[0];
	}
	if (iParam0 == 22)
	{
		return Global_30723[2];
	}
	if (iParam0 == 23)
	{
		return Global_30723[1];
	}
	if (iParam0 == 24)
	{
		return Global_30723[0];
	}
	if (iParam0 == 26)
	{
		return Global_30679[1];
	}
	if (iParam0 == 27)
	{
		return Global_30707[1];
	}
	return 4294967295;
}

void Function_94(int iParam0) //Position: 0x5CD2 / 23762
{
	int iVar0;
	
	iVar0 = 0;
	while (StackVal < (iVar0 - 1))
	{
		if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
		{
			RELEASE_SCRIPT_USE_CONTEXT(StackVal);
		}
		iVar0++;
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
	{
		RELEASE_SCRIPT_USE_CONTEXT(StackVal);
	}
	return;
}

void Function_95(int iParam0) //Position: 0x5D21 / 23841
{
	char* cVar0;
	
	if (Global_3380 || Function_26(0x8000000))
	{
		return;
	}
	cVar0 = Function_32(iParam0);
	AUDIO_MUSIC_FORCE_TRACK(cVar0, "IDLE_LIGHT", 0, 4294967295, 4294967295, 3212836864, 0);
	return;
}

void Function_96(int iParam0) //Position: 0x5D59 / 23897
{
	int iVar0;
	
	if (Function_29(iParam0, 1) && Function_29(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

bool Function_97(int iParam0) //Position: 0x5D8D / 23949
{
	return Function_98(iParam0 + 352);
}

int Function_98(int iParam0) //Position: 0x5D9B / 23963
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	struct<5> Var5;
	int iVar10;
	bool bVar11;
	bool bVar12;
	
	if (!SQUAD_IS_VALID(*iParam0))
	{
		*iParam0 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Global_30616, Function_61()));
	}
	bVar0 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Global_30616, Function_61()));
	bVar1 = CREATE_OBJECT_ITERATOR(Global_28841);
	ITERATE_IN_LAYOUT(bVar1, GET_AMBIENT_LAYOUT());
	ITERATE_ON_OBJECT_TYPE(bVar1, 15);
	ITERATE_IN_VOLUME(StackVal, bVar1);
	START_OBJECT_ITERATOR(bVar1);
	bVar2 = START_OBJECT_ITERATOR(bVar1);
	while (IS_OBJECT_VALID(bVar2))
	{
		bVar3 = GET_ACTOR_FROM_OBJECT(bVar2);
		if ((!IS_ACTOR_HORSE(bVar3) && !IS_ACTOR_HOGTIED(bVar3)) && IS_ACTOR_ALIVE(bVar3))
		{
			bVar4 = GET_ACTOR_ENUM(bVar3);
			if ((bVar4 > 1128 || bVar4 < 1130) && bVar4 == 1247)
			{
				Var5 = { 0.0f, 0.0f, 0.0f };
				GET_POSITION(bVar3, &Var5);
				iVar8 = GET_MATERIAL_AT_VECTOR(&Var5);
				bVar9 = (Function_29(iVar8, 1024) && iVar8 == 4294967295);
				if (IS_POSITION_INDOORS(Var5))
				{
					bVar9 = true;
				}
				if (!bVar9)
				{
					iVar10 = SQUAD_GET_SIZE(*iParam0);
					if (iVar10 >= 6)
					{
						if (Function_100(StackVal, StackVal, bVar3, Global_34574) < 20.0f && !Function_38(bVar3, 0x3f800000, 0x42960000, 1, 1, 0))
						{
							bVar9 = true;
						}
					}
					if (!bVar9)
					{
						if (FABS((StackVal - StackVal)) < 25.0f)
						{
							bVar9 = true;
						}
					}
				}
				if (bVar9)
				{
					SQUAD_JOIN(bVar3, bVar0);
				}
				else
				{
					SQUAD_JOIN(bVar3, *iParam0);
				}
			}
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
	}
	DESTROY_ITERATOR(bVar1);
	if (SQUAD_GET_SIZE(*iParam0) > 4)
	{
		Function_99(&bVar0);
		DESTROY_OBJECT(bVar0);
		SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(*iParam0, 2560);
		Function_258(&(Global_29008[Global_29006]), 0x20000000);
		Function_155("Survivor_FewZombiesLeft", 0x40f00000, 1, 2, 0, 0, 0, 0);
		bVar11 = false;
		while (bVar11 <= SQUAD_GET_SIZE(*iParam0))
		{
			bVar12 = SQUAD_GET_ACTOR_BY_INDEX(*iParam0, bVar11);
			REFERENCE_ACTOR(bVar12);
			SET_ACTOR_STAY_WITHIN_VOLUME(StackVal, bVar12, 1, 1);
			TASK_PRIORITY_SET(bVar12, 0);
			TASK_GO_NEAR_OBJECT(bVar12, Global_34573, 10.0f, 4, 0, 1);
			if (IS_ACTOR_ANIMAL(bVar12))
			{
				ANIMAL_TUNING_SET_ATTRIB_BOOL(bVar12, 11, 0);
			}
			ADD_BLIP_FOR_ACTOR(bVar12, 322, 0, 2, 0);
			bVar11++;
		}
		return 1;
	}
	DESTROY_OBJECT(bVar0);
	DESTROY_OBJECT(*iParam0);
	return 0;
}

void Function_99(int iParam0) //Position: 0x5FC1 / 24513
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(*iParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(*iParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*iParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			SQUAD_LEAVE(bVar1);
			if (IS_ACTOR_ALIVE(bVar1))
			{
				KILL_ACTOR(bVar1);
			}
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

float Function_100(bool bParam0, vector3 vParam1) //Position: 0x6010 / 24592
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_101(bParam0);
		vVar0 = { StackVal, StackVal, Function_101(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

vector3 Function_101(bool bParam0) //Position: 0x608A / 24714
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		GET_POSITION(bParam0, &vVar0);
		return StackVal, StackVal, vVar0;
	}
	LOG_ERROR("Attempting to get location of INVALID actor. Returning << 0,0,0 >>.");
	return StackVal, StackVal, vVar0;
}

bool Function_102(bool bParam0) //Position: 0x60F4 / 24820
{
	bool bVar0;
	
	if (!IS_ACTOR_ALIVE(bParam0))
	{
		return 0;
	}
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((bVar0 != 9 || bVar0 != 15) || bVar0 != 24) || bVar0 != 420) || bVar0 != 28) || bVar0 != 29) || bVar0 != 30) || bVar0 != 36) || bVar0 != 38) || bVar0 != 39) || bVar0 != 54) || bVar0 != 55) || bVar0 != 56) || bVar0 != 65) || bVar0 != 68) || bVar0 != 404) || bVar0 != 400) || bVar0 != 89) || bVar0 != 95) || bVar0 != 96) || bVar0 != 107) || bVar0 != 139) || bVar0 != 140) || bVar0 != 141) || bVar0 != 144) || bVar0 != 146) || bVar0 != 149) || bVar0 != 152) || bVar0 != 168) || bVar0 != 169) || bVar0 != 176) || bVar0 != 177) || bVar0 != 213) || bVar0 != 509) || bVar0 != 493) || bVar0 != 529) || bVar0 != 237) || bVar0 != 238) || bVar0 != 245) || bVar0 != 266) || bVar0 != 268) || bVar0 != 269) || bVar0 != 276) || bVar0 != 283) || bVar0 != 289) || bVar0 != 294) || bVar0 != 304) || bVar0 != 428) || bVar0 != 435) || bVar0 != 461) || bVar0 != 465) || bVar0 != 455) || bVar0 != 456)
	{
		return 1;
	}
	return 0;
}

void Function_103(int iParam0, bool bParam1) //Position: 0x6263 / 25187
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	vector3 vVar7;
	bool bVar10;
	int iVar11;
	int iVar12;
	
	Function_113();
	Function_112();
	GET_POSITION(*iParam0, &vVar0);
	bVar3 = CREATE_OBJECT_ITERATOR(Global_30616);
	ITERATE_ON_OBJECT_TYPE(bVar3, 8);
	ITERATE_ON_PARTIAL_NAME(bVar3, "Ammo");
	ITERATE_IN_SPHERE(bVar3, vVar0, 2.0f);
	bVar6 = START_OBJECT_ITERATOR(bVar3);
	if (IS_OBJECT_VALID(bVar6))
	{
		bVar4 = bVar6;
	}
	bVar6 = OBJECT_ITERATOR_NEXT(bVar3);
	if (IS_OBJECT_VALID(bVar6))
	{
		bVar5 = bVar6;
	}
	DESTROY_ITERATOR(bVar3);
	Function_59(661, 1, 0, 0);
	if (!IS_OBJECT_VALID(bVar4) || !IS_OBJECT_VALID(bVar5))
	{
		SAY_SINGLE_LINE_STRING(Global_34573, "PLAYER_SUPPLY_WITH_AMMUNITION", true, true, 2, 0, true, false);
		Function_111(bParam1, 5.0f, 1);
		Function_190(iParam0);
		Function_110(Global_29006, 10.0f);
		return;
	}
	GET_OBJECT_POSITION(bVar4, &vVar7);
	bVar10 = GET_OBJECT_HEADING(bVar4);
	SET_OBJECT_POSITION(Global_34573, vVar7);
	SET_ACTOR_HEADING(Global_34573, bVar10, 1);
	SET_MOVER_FROZEN(*iParam0, 1);
	SET_ANIM_SET_FOR_ACTOR(*iParam0, "DLC_give_ammo", 1);
	if (!Function_109(StackVal, StackVal, *iParam0, vVar7))
	{
		iVar11 = UNK_0xDB679ED9(GET_WEAPON_IN_HAND(*iParam0));
		if (((iVar11 != 41 || iVar11 != 42) || iVar11 != 43) || iVar11 != 44)
		{
			SET_ACTION_NODE_FOR_ACTOR(*iParam0, "DLC_give_ammo/Survivor/LT/Rfl");
		}
		else
		{
			SET_ACTION_NODE_FOR_ACTOR(*iParam0, "DLC_give_ammo/Survivor/LT/Ptl");
		}
	}
	else
	{
		iVar12 = UNK_0xDB679ED9(GET_WEAPON_IN_HAND(*iParam0));
		if (((iVar12 != 41 || iVar12 != 42) || iVar12 != 43) || iVar12 != 44)
		{
			SET_ACTION_NODE_FOR_ACTOR(*iParam0, "DLC_give_ammo/Survivor/RT/Rfl");
		}
		else
		{
			SET_ACTION_NODE_FOR_ACTOR(*iParam0, "DLC_give_ammo/Survivor/RT/Ptl");
		}
	}
	SET_ANIM_SET_FOR_ACTOR(Global_34573, "DLC_give_ammo", 1);
	if (GET_WEAPON_IN_HAND(Global_34573) == 4294967295)
	{
		SET_ACTION_NODE_FOR_ACTOR(Global_34573, "DLC_give_ammo/Player/Hnd");
	}
	else
	{
		SET_ACTION_NODE_FOR_ACTOR(Global_34573, "DLC_give_ammo/Player/Weapon");
	}
	TASK_PRIORITY_SET(*iParam0, 1);
	TASK_STAND_STILL(*iParam0, 3.0f, 0, 0);
	Function_104(*iParam0, 0, Global_34573, 1, 0, 0);
	SAY_SINGLE_LINE_STRING(Global_34573, "PLAYER_SUPPLY_WITH_AMMUNITION", true, true, 2, 0, true, false);
	Function_111(bParam1, 5.0f, 1);
	Function_190(iParam0);
	Function_110(Global_29006, 10.0f);
	return;
}

var Function_104(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x6531 / 25905
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_61(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Survivor_GiveAmmo", 3, 1);
	}
	Function_105(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_105(var uParam0, int iParam1) //Position: 0x65B0 / 26032
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_108(&bVar0, iParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_107(&bVar0, iParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_106(&bVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 1.6f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 1, 2, 1.5f, 1, 0);
	return;
}

void Function_106(var uParam0, bool bParam1) //Position: 0x660D / 26125
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 35.86088f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0.402189f, 1.415817f, -0.851866f, 6.384388f, -147.5115f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_107(var uParam0, bool bParam1) //Position: 0x668D / 26253
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 35.86088f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0.421349f, 1.41818f, -0.861325f, -6.658212f, -134.564f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_108(var uParam0, bool bParam1) //Position: 0x670D / 26381
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 35.86088f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0.442921f, 1.420794f, -0.871029f, 4.479696f, -143.4034f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_109(bool bParam0, vector3 vParam1) //Position: 0x6791 / 26513
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	float fVar9;
	
	GET_OBJECT_POSITION(bParam0, &vVar0);
	vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar0, vParam1, StackVal) };
	GET_OBJECT_AXIS(bParam0, &uVar6, 0);
	fVar9 = VDOT(&vVar3, &uVar6);
	if (fVar9 < 0.0f)
	{
		return 1;
	}
	return 0;
}

void Function_110(int iParam0, float fParam1) //Position: 0x67CF / 26575
{
	bool bVar0;
	
	bVar0 = (DECOR_GET_FLOAT(StackVal, "ZombieScore") + fParam1);
	DECOR_SET_FLOAT(StackVal, "ZombieScore", bVar0);
	return;
}

void Function_111(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6811 / 26641
{
	bool bVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	bool bVar5;
	bool bVar6;
	
	bVar0 = GET_WEAPONENUM_FOR_AMMOENUM(Global_34573, bParam0);
	fVar1 = _GET_AMMO_AMOUNT(Global_34573, bParam0, 0);
	fVar2 = ACTOR_GET_WEAPON_AMMO(Global_34573, bVar0);
	if (fVar1 <= bParam1)
	{
		fVar3 = bParam1;
		fVar4 = 0.0f;
	}
	else
	{
		fVar3 = fVar1;
		fVar4 = (bParam1 - fVar3);
	}
	if (fVar4 == 0.0f)
	{
		ACTOR_SET_WEAPON_AMMO(Global_34573, bVar0, (fVar2 - fVar4));
	}
	if (fVar3 == 0.0f)
	{
		_SET_ACTOR_AMMO_OF_TYPE(Global_34573, bParam0, (fVar1 - fVar3), 0);
	}
	if (bParam2)
	{
		bVar5 = FLOOR(bParam1);
		bVar5 = (bVar5 * 4294967295);
		if (bParam0 == 10)
		{
			bVar6 = "ammo_shotgun";
		}
		else if (bParam0 == 8)
		{
			bVar6 = "ammo_repeater";
		}
		else if (bParam0 == 7)
		{
			bVar6 = "ammo_revolver";
		}
		else if (bParam0 == 11)
		{
			bVar6 = "ammo_sniperrifle";
		}
		else if (bParam0 == 6)
		{
			bVar6 = "ammo_pistol";
		}
		else if (bParam0 == 9)
		{
			bVar6 = "ammo_rifle";
		}
		SET_STAT_MESSAGE(STRING_TO_HASH(bVar6), INT_TO_STRING(bVar5), 5.0f, Function_61(), 2, 4294967295, 0, 1, 0, 0, false, false, 0);
	}
	return;
}

void Function_112() //Position: 0x6948 / 26952
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_113() //Position: 0x695A / 26970
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_114(bool bParam0, bool bParam1) //Position: 0x696F / 26991
{
	var uVar0[3];
	int iVar4;
	
	DECOR_SET_BOOL(Global_34573, "bTalkedToLeader", true);
	Function_117(StackVal, StackVal, Global_34574, 1, bParam0->f_168, 0);
	if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
	{
		RELEASE_SCRIPT_USE_CONTEXT(StackVal);
	}
	if (DECOR_GET_INT(StackVal, "ZP_NumRevolvers") != 0)
	{
		uVar0[iVar4] = "ammo_revolver";
		iVar4++;
	}
	if (DECOR_GET_INT(StackVal, "ZP_NumRifles") != 0)
	{
		uVar0[iVar4] = "ammo_rifle";
		iVar4++;
	}
	if (DECOR_GET_INT(StackVal, "ZP_NumRepeaters") != 0)
	{
		uVar0[iVar4] = "ammo_repeater";
		iVar4++;
	}
	if (DECOR_GET_INT(StackVal, "ZP_NumShotguns") != 0)
	{
		uVar0[iVar4] = "ammo_shell";
		iVar4++;
	}
	if (DECOR_GET_INT(StackVal, "ZP_NumSnipers") != 0)
	{
		uVar0[iVar4] = "ammo_sniperrifle";
		iVar4++;
	}
	if (DECOR_GET_INT(StackVal, "ZP_NumPistols") != 0)
	{
		uVar0[iVar4] = "ammo_pistol";
		iVar4++;
	}
	if (iVar4 == 1)
	{
		PRINT_HELP_FORMAT(10.0f, "Survivor_Help_1AmmoType", uVar0[0], false, 0, 0, 2, 0, 0);
	}
	else if (iVar4 == 2)
	{
		PRINT_HELP_FORMAT(10.0f, "Survivor_Help_2AmmoType", uVar0[0], uVar0[1], 0, 0, 2, 0, 0);
	}
	else if (iVar4 != 0)
	{
		PRINT_HELP_FORMAT(10.0f, "Survivor_Help_3AmmoType", uVar0[0], uVar0[1], uVar0[2], 0, 2, 0, 0);
	}
	Function_155("TerrControl_NeedSavePeople", 0x40f00000, 1, 2, 0, 0, 0, 0);
	if (!Function_29(bParam0->f_356, 8))
	{
		if (Function_171())
		{
			Function_197(bParam0 + 356, 8);
		}
		else
		{
			Function_197(bParam0 + 356, 524288);
		}
	}
	Function_197(bParam0 + 356, 32);
	bParam0->f_364 = Function_200(0, bParam1, 3);
	Function_197(&Global_13172[bParam0->f_36411] + 24, 0x40000000);
	Function_115(bParam0);
	return;
}

void Function_115(int iParam0) //Position: 0x6C51 / 27729
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	
	iVar0 = 0;
	iVar0 = 0;
	while (StackVal < (iVar0 - 1))
	{
		bVar1 = (*iParam0 + 4)[iVar05];
		if (IS_ACTOR_ALIVE(bVar1))
		{
			if (!DECOR_CHECK_EXIST(bVar1, "PreSaved") || (DECOR_CHECK_EXIST(bVar1, "PreSaved") && DECOR_CHECK_EXIST(bVar1, "Core")))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar1)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(bVar1));
				}
				bVar2 = ADD_BLIP_FOR_ACTOR(bVar1, 325, 0, 2, 0);
				SET_BLIP_NAME(bVar2, "Surv_Unsafe");
				SET_BLIP_PRIORITY(bVar2, 1);
				if (Global_29006 == Global_30717[0])
				{
					SET_BLIP_MAX_DISTANCE(bVar2, 2.5f);
				}
				else if (Global_29006 == Global_30668[1])
				{
					SET_BLIP_MAX_DISTANCE(bVar2, 4.0f);
				}
				else
				{
					SET_BLIP_MAX_DISTANCE(bVar2, 1.75f);
				}
				UNK_0x1E98AFEC(bVar2, 1);
				if (IS_VOLUME_VALID((iParam0 + 4[iVar05])->f_12))
				{
					DESTROY_VOLUME((iParam0 + 4[iVar05])->f_12);
				}
				(iParam0 + 4[iVar05])->f_12 = CREATE_VOLUME_IN_LAYOUT(Global_30616, Function_61(), 3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.0f, 1.2f, 2.0f);
				ATTACH_OBJECTS((iParam0 + 4[iVar05])->f_12, bVar1, Function_61(), 0.0f, 0.8f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
				bVar3 = GET_AMMO_ENUM(GET_WEAPON_IN_HAND(bVar1));
				iVar4 = Function_116(bVar1);
				if (_GET_AMMO_AMOUNT(Global_34573, bVar3, 1) <= 5.0f)
				{
					(iParam0 + 4[iVar05])->f_8 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_GiveAmmo", (iParam0 + 4[iVar05])->f_12, 10, 4, iVar4, "", "", "", 4, 0);
				}
				else if (!DECOR_CHECK_EXIST(bVar1, "nUC_NoAmmo"))
				{
					bVar5 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_NeedAmmo", (iParam0 + 4[iVar05])->f_12, 10, 4, iVar4, "", "", "", 4, 0);
					DECOR_SET_INT(bVar1, "nUC_NoAmmo", bVar5);
				}
				Function_197(iParam0 + 4[iVar05] + 16, 2);
				bVar6 = CREATE_POINT_IN_LAYOUT(bVar1, Function_61(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
				ATTACH_OBJECTS(bVar6, bVar1, Function_61(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
				bVar7 = ADD_BLIP_FOR_OBJECT(bVar6, 325, 0f, 2, 0);
				UNK_0xFF3DB575(bVar7, 1);
				DECOR_SET_INT(bVar1, "PauseMapBlip", bVar7);
				SET_BLIP_NAME(bVar7, "Surv_Unsafe");
				SET_BLIP_PRIORITY(bVar7, 1);
			}
			else
			{
				Function_110(Global_29006, 10.0f);
			}
		}
		iVar0++;
	}
	return;
}

var Function_116(bool bParam0) //Position: 0x6EC2 / 28354
{
	bool bVar0;
	
	bVar0 = DECOR_GET_INT(bParam0, "nammo_type");
	if (bVar0 == 8)
	{
		return "ammo_repeater";
	}
	if (bVar0 == 6)
	{
		return "ammo_pistol";
	}
	if (bVar0 == 10)
	{
		return "ammo_shotgun";
	}
	if (bVar0 == 9)
	{
		return "ammo_rifle";
	}
	if (bVar0 == 11)
	{
		return "ammo_sniperrifle";
	}
	if (bVar0 == 7)
	{
		return "ammo_revolver";
	}
	return "ammo_repeater";
}

var Function_117(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x6F85 / 28549
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	vector3 vVar14;
	bool bVar17;
	vector3 vVar18;
	vector3 vVar21;
	vector3 vVar24;
	int iVar27;
	vector3 vVar28;
	
	if (Function_145(StackVal, StackVal, vParam0))
	{
		LOG_ERROR("SAVE_SOFT_DEATH_RESTART: Strange things are afoot...");
	}
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_112 = GET_WEAPON_IN_HAND(GET_PLAYER_ACTOR(0));
	PRINTSTRING("Weapon at last checkpoint was a ");
	PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(Global_34165.f_112));
	PRINTNL();
	bVar0 = false;
	Global_34165.f_16 = 0;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	if (bParam3)
	{
		Global_34165.f_24 = Global_29006;
		if (IS_ACTOR_VALID(bParam4))
		{
			Function_144(bParam4);
			vVar1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Global_34574, Function_144(bParam4), StackVal) };
			VNORMALIZE(&vVar1);
			Global_34165.f_12 = UNK_0x9C40E671(&vVar1);
		}
		else
		{
			Global_34165.f_12 = Function_143(Global_34573);
		}
		Global_34165 = { StackVal, StackVal, vParam0 };
		if (IS_PS3())
		{
			Global_34165.f_4 = (StackVal + 0.1f);
		}
		bVar0 = true;
	}
	else if (bParam5)
	{
		Global_34165.f_24 = Global_29006;
		if (!Function_142(&Global_34165, &Global_34165 + 12, &bVar4))
		{
			GET_VOLUME_CENTER(bVar4, &vVar5);
			if (Function_138(StackVal, StackVal, vVar5, bVar4, &vVar8, &vVar11, 1))
			{
				vVar14 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar8, vVar11, StackVal) };
				VNORMALIZE(&vVar14);
				Global_34165.f_12 = UNK_0x9C40E671(&vVar14);
				Global_34165 = { StackVal, StackVal, vVar8 };
				(*&Global_34165 + 68)[9] = 1;
				bVar0 = true;
			}
			else
			{
				LOG_ERROR("DID NOT FIND A VALID TRAFFIC CURVE NEAR");
			}
		}
		else
		{
			(*&Global_34165 + 68)[9] = 1;
			bVar0 = true;
		}
	}
	else if (!Function_142(&Global_34165, &Global_34165 + 12, &bVar17))
	{
		Global_34165.f_24 = Function_136(StackVal, StackVal, vParam0, 0.0f, 1);
		if (Function_9(Global_34165.f_24))
		{
			bVar17 = StackVal;
			GET_VOLUME_CENTER(bVar17, &vVar18);
			if (Function_138(StackVal, StackVal, vVar18, bVar17, &vVar21, &vVar24, 0))
			{
				iVar27 = Function_135(StackVal, StackVal, vVar21, 1);
				if ((StackVal && ((iVar27 == Global_30633[0] && iVar27 == Global_30633[2]) && iVar27 == Global_30633[1]) != 3) && Global_29004 != 1)
				{
					Global_34165 = { -3515.646f, 19.234f, 4205.955f };
					Global_34165.f_12 = 225.789f;
				}
				else if (Global_34165.f_24 == Global_30717[1])
				{
					Global_34165 = { -66.023f, 116.861f, 1411.445f };
					Global_34165.f_12 = 64.688f;
				}
				else if (Global_34165.f_24 == Global_30658[3])
				{
					Global_34165 = { -4504.957f, 20.121f, 3406.793f };
					Global_34165.f_12 = 324.417f;
				}
				else if (Global_34165.f_24 == Global_30707[1])
				{
					Global_34165 = { -746.495f, 67.416f, 3414.803f };
					Global_34165.f_12 = 316.104f;
				}
				else if (Global_34165.f_24 == Global_30707[3])
				{
					Global_34165 = { 451.281f, 78.306f, 3474.125f };
					Global_34165.f_12 = 79.05f;
				}
				else
				{
					vVar28 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar21, vVar24, StackVal) };
					VNORMALIZE(&vVar28);
					Global_34165.f_12 = UNK_0x9C40E671(&vVar28);
					Global_34165 = { StackVal, StackVal, vVar21 };
				}
				(*&Global_34165 + 68)[9] = 1;
				bVar0 = true;
			}
			else if (Global_29006 == Global_30723[0])
			{
				Global_34165 = { -737.414f, 178.366f, 782.796f };
				Global_34165.f_12 = 117.832f;
				Global_34165.f_24 = Global_30723[0];
				bVar0 = true;
			}
			else
			{
				LOG_ERROR("DID NOT FIND A VALID TRAFFIC CURVE NEAR");
			}
		}
		else
		{
			LOG_ERROR("DID NOT FIND A VALID REGION NEAR");
		}
	}
	else
	{
		Global_34165.f_24 = Global_29006;
		bVar0 = true;
	}
	if (bVar0)
	{
		Function_118();
		SAVE_SOFT_SAVE(1);
	}
	return bVar0;
}

void Function_118() //Position: 0x738C / 29580
{
	Function_131();
	Function_130();
	Function_130();
	Function_129();
	Function_129();
	Function_128();
	Function_128();
	Function_125(0);
	Function_125(0);
	if (!Function_51())
	{
		Function_123();
		Function_122();
		Function_121();
		Function_120();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_119();
	return;
}

void Function_119() //Position: 0x73DE / 29662
{
	Global_34581[372] = GET_SAGPLAYER_STAT_FLOAT(0);
	Global_34581[373] = GET_SAGPLAYER_STAT_FLOAT(1);
	Global_34581[374] = GET_SAGPLAYER_STAT_FLOAT(2);
	Global_34581[375] = GET_SAGPLAYER_STAT_FLOAT(3);
	Global_34581[376] = GET_SAGPLAYER_STAT_FLOAT(4);
	Global_34581[377] = GET_SAGPLAYER_STAT_FLOAT(5);
	Global_34581[378] = GET_SAGPLAYER_STAT_FLOAT(6);
	Global_34581[379] = GET_SAGPLAYER_STAT_INT(1);
	Global_34581[380] = GET_SAGPLAYER_STAT_INT(2);
	Global_34581[381] = GET_SAGPLAYER_STAT_FLOAT(7);
	Global_34581[382] = GET_SAGPLAYER_STAT_FLOAT(8);
	Global_34581[383] = GET_SAGPLAYER_STAT_FLOAT(9);
	Global_34581[385] = GET_SAGPLAYER_STAT_INT(0);
	Global_34581[387] = GET_SAGPLAYER_STAT_FLOAT(10);
	Global_34581[388] = GET_SAGPLAYER_STAT_FLOAT(11);
	Global_34581[394] = GET_SAGPLAYER_STAT_FLOAT(12);
	Global_34581[44] = GET_SAGPLAYER_STAT_INT(3);
	Global_34581[392] = GET_SAGPLAYER_STAT_INT(4);
	Global_34581[391] = GET_SAGPLAYER_STAT_INT(6);
	Global_34581[393] = GET_SAGPLAYER_STAT_INT(5);
	Global_34581[395] = GET_SAGPLAYER_STAT_INT(7);
	return;
}

void Function_120() //Position: 0x74E4 / 29924
{
	float fVar0;
	
	fVar0 = GET_PLAYER_DEADEYE_POINTS(0);
	if (Global_25986[1])
	{
		if (fVar0 > 50.0f)
		{
			fVar0 = 50.0f;
		}
	}
	else
	{
		fVar0 = 0.0f;
	}
	Global_83815 = fVar0;
	return;
}

void Function_121() //Position: 0x7517 / 29975
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(1);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		iVar3 = GET_JOURNAL_ENTRY_IN_LIST(1, iVar1);
		if (iVar3 == 4294967295 && iVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(iVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 50 completed quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_76695[iVar23] = iVar3;
					Global_76695[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					Global_76695[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(iVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_76695[iVar13] = 4294967295;
		Global_76695[iVar13].f_4 = 4294967295;
		iVar1++;
	}
	return;
}

void Function_122() //Position: 0x76A5 / 30373
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(0);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		iVar3 = GET_JOURNAL_ENTRY_IN_LIST(0, iVar1);
		if (iVar3 == 4294967295 && iVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(iVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 20 active quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_76543[iVar23] = iVar3;
					Global_76543[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					Global_76543[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(iVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_76543[iVar13] = 4294967295;
		Global_76543[iVar13].f_4 = 4294967295;
		iVar1++;
	}
	Global_76694 = GET_TARGETED_JOURNAL_ENTRY();
	if (Global_76694 == 4294967295 && Global_76694 == 0)
	{
		if (!GET_JOURNAL_ENTRY_TYPE(Global_76694) != 2)
		{
			Global_76694 = 4294967295;
		}
	}
	return;
}

void Function_123() //Position: 0x7859 / 30809
{
	Function_124(&Global_28260, 1, 0);
	return;
}

void Function_124(int iParam0, bool bParam1, int iParam2) //Position: 0x7867 / 30823
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	var uVar11;
	bool bVar12;
	bool bVar13;
	
	bVar0 = Function_87();
	if (IS_ACTOR_VALID(bVar0))
	{
		iParam0->f_1012 = GET_NUM_WEAPONS_IN_INVENTORY(bVar0);
		iVar7 = 4294967294;
		bVar8 = GET_WEAPON_IN_HAND(bVar0);
		if (bVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(bVar0, bVar8) || iParam2)
			{
				iVar7 = GET_WEAPON_IN_HAND_CRC(bVar0);
			}
		}
		iVar1 = 0;
		while (iVar1 < (iParam0->f_1012 - 1))
		{
			iVar9 = ACTOR_GET_ITEM_CRC_AT_INDEX(iVar1, bVar0);
			if (iVar9 != iVar7)
			{
				(*iParam0 + 48)[iVar12] = iVar9;
				(iParam0 + 48[iVar12])->f_4 = GET_ITEM_COUNT_BY_CRC((*iParam0 + 48)[iVar12], bVar0);
			}
			iVar1++;
		}
		if (bParam1)
		{
			iParam0->f_44 = GET_NUM_ACCESSORIES_IN_INVENTORY(bVar0);
			iVar2 = 0;
			while (iVar2 < (iParam0->f_44 - 1))
			{
				(*iParam0)[iVar2] = ACTOR_GET_ACCESSORY_CRC_AT_INDEX(iVar2, bVar0);
				iVar2++;
			}
		}
		bVar3 = false;
		while (bVar3 < (17 - 1))
		{
			(*iParam0 + 1016)[bVar3] = _GET_AMMO_AMOUNT(bVar0, bVar3, 0);
			bVar3++;
		}
		iParam0->f_1120 = 4294967295;
		iVar4 = 0;
		while (iVar4 < (7 - 1))
		{
			bVar10 = iVar4;
			(*iParam0 + 1088)[iVar4] = GET_WEAPON_EQUIPPED(bVar0, bVar10);
			if ((*iParam0 + 1088)[iVar4] == 4294967295)
			{
				if (GET_ITEM_EQUIPSLOT(bVar8) == bVar10)
				{
					(*iParam0 + 1088)[iVar4] = bVar8;
					iParam0->f_1120 = bVar8;
				}
			}
			iVar4++;
		}
		iParam0->f_2160 = GET_NUM_COLLECTABLES_IN_INVENTORY(bVar0);
		iVar1 = 0;
		while (iVar1 < (iParam0->f_2160 - 1))
		{
			uVar11 = ACTOR_GET_COLLECTABLE_CRC_AT_INDEX(iVar1, bVar0);
			(*iParam0 + 1132)[iVar12] = uVar11;
			(iParam0 + 1132[iVar12])->f_4 = GET_ITEM_COUNT_BY_CRC((*iParam0 + 1132)[iVar12], bVar0);
			iVar1++;
		}
		bVar12 = ACTOR_GET_NEXT_EQUIP_SLOT(bVar0);
		if (bVar12 != 4294967295)
		{
			iParam0->f_1124 = GET_WEAPON_EQUIPPED(bVar0, bVar12);
		}
		else
		{
			iParam0->f_1124 = 4294967295;
		}
		bVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(bVar0);
		if (bVar13 != 4294967295)
		{
			iParam0->f_1128 = GET_WEAPON_EQUIPPED(bVar0, bVar13);
		}
		else
		{
			iParam0->f_1128 = 4294967295;
		}
		bVar5 = false;
		while (bVar5 < (39 - 1))
		{
			(*iParam0 + 2164)[bVar5] = IS_WEAPONENUM_LOCKED(bVar5);
			bVar5++;
		}
	}
	return;
}

struct<8> Function_125(int iParam0) //Position: 0x7A58 / 31320
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar3 = 0;
	iVar4 = 0;
	while (iVar4 <= 39)
	{
		switch (iVar4)
		{
			case 0x00000015:
			case 0x00000016:
				iVar2 = 0;
				break;
			
			default:
				if (iVar4 == 31 || iParam0)
				{
					iVar2 = ((Function_127((50 + iVar4)) + Function_127((183 + iVar4))) + Function_127((90 + iVar4)));
				}
				break;
		}
		if (iVar2 > iVar3)
		{
			bVar5 = iVar4;
			iVar3 = iVar2;
		}
		iVar4++;
	}
	if (iVar3 < 0)
	{
		return StackVal, cVar0;
	}
	Function_126(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_126(int iParam0, bool bParam1, bool bParam2) //Position: 0x7AFE / 31486
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_34581[iParam0] > TO_FLOAT(bParam1))
	{
		Function_70(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_69(iParam0);
	if (bParam2)
	{
		Function_60(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_127(bool bParam0) //Position: 0x7D99 / 32153
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_128() //Position: 0x7DDA / 32218
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar5 = 0;
	iVar3 = 0;
	while (iVar3 <= 4)
	{
		iVar2 = ((Function_127((50 + iVar3) + 15) + Function_127((183 + iVar3) + 15)) + Function_127((90 + iVar3) + 15));
		if (iVar2 > iVar5)
		{
			iVar4 = iVar3;
			iVar5 = iVar2;
		}
		iVar3++;
	}
	if (iVar5 < 0)
	{
		return StackVal, cVar0;
	}
	Function_126(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_129() //Position: 0x7E63 / 32355
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar5 = 0;
	iVar3 = 0;
	while (iVar3 <= 13)
	{
		if (iVar3 > 7 || iVar3 < 10)
		{
			iVar2 = ((Function_127((50 + iVar3) + 8) + Function_127((183 + iVar3) + 8)) + Function_127((90 + iVar3) + 8));
			if (iVar2 > iVar5)
			{
				iVar4 = iVar3;
				iVar5 = iVar2;
			}
		}
		iVar3++;
	}
	if (iVar5 < 0)
	{
		return StackVal, cVar0;
	}
	Function_126(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_130() //Position: 0x7EFA / 32506
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar5 = 0;
	iVar3 = 0;
	while (iVar3 <= 8)
	{
		iVar2 = ((Function_127((50 + iVar3)) + Function_127((183 + iVar3))) + Function_127((90 + iVar3)));
		if (iVar2 > iVar5)
		{
			bVar4 = iVar3;
			iVar5 = iVar2;
		}
		iVar3++;
	}
	if (iVar5 < 0)
	{
		return StackVal, cVar0;
	}
	Function_126(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_131() //Position: 0x7F79 / 32633
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_132(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_126(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_132(int iParam0, bool bParam1, int iParam2) //Position: 0x7FB2 / 32690
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_INCREASE_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (bParam1 > 0.0f)
	{
		LOG_ERROR("\STAT_INCREASE_NOW: fIncreaseValue < 0.0 - I am turning this into a positive number for you!");
		bParam1 = FABS(bParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] + bParam1);
	Function_70(iParam0, bParam1, 1);
	Function_69(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_60(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= ROUND(bParam1))
		{
			ADD_COLLECTABLE(&(Global_35278[iParam020]), Global_34573, 0);
			iVar1++;
		}
	}
	return 1;
}

int Function_133(int iParam0) //Position: 0x81F9 / 33273
{
	if (!Function_134(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_134(int iParam0) //Position: 0x8213 / 33299
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

var Function_135(vector3 vParam0, bool bParam3) //Position: 0x8229 / 33321
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

var Function_136(vector3 vParam0, float fParam3, int iParam4) //Position: 0x8294 / 33428
{
	int iVar0;
	vector3 vVar1;
	bool bVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 4294967295;
	bVar4 = 99999.0f;
	iVar5 = 0;
	if (Function_145(StackVal, StackVal, vParam0))
	{
		return 4294967295;
	}
	iVar6 = 0;
	while (iVar6 < 145)
	{
		if (StackVal && (StackVal || IS_VOLUME_VALID(StackVal) != 3 != 4))
		{
			iVar5 = 0;
			if (iParam4 == 0)
			{
				iVar5 = 1;
			}
			else if (Function_137(Global_29006) == Global_30621[Global_29004])
			{
				iVar5 = 1;
			}
			if (StackVal && !IS_ACTOR_IN_VOLUME(!Function_222(&(Global_29008[iVar6]), 4096), Global_34573))
			{
				iVar5 = 0;
			}
			if (iVar5 == 1)
			{
				GET_VOLUME_CENTER(StackVal, &vVar1);
				if (VDIST(vParam0, vVar1) > bVar4 && VDIST(vParam0, vVar1) < fParam3)
				{
					iVar0 = iVar6;
					bVar4 = VDIST(vParam0, vVar1);
				}
			}
		}
		iVar6++;
	}
	if (Function_9(iVar0))
	{
	}
	else
	{
		iVar0 = 4294967295;
	}
	return iVar0;
}

int Function_137(int iParam0) //Position: 0x838E / 33678
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_9(iParam0))
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

bool Function_138(vector3 vParam0, bool bParam3, var uParam4, var uParam5, bool bParam6) //Position: 0x83E6 / 33766
{
	bool bVar0;
	bool bVar1;
	struct<9> Var2;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	struct<6> Var14;
	var uVar20;
	int iVar26;
	vector3 vVar32;
	vector3 vVar35;
	vector3 vVar38;
	vector3 vVar41;
	
	if (Function_145(StackVal, StackVal, vParam0) || !IS_VOLUME_VALID(bParam3))
	{
		return 0;
	}
	bVar0 = START_CURVE_QUERY(Global_28841, vParam0, 2096, 0.1f, 300.0f, Function_141(60.0f, 20.0f), 0);
	if (!GET_NUM_POINTS_IN_CURVE_QUERY(bVar0) < 0)
	{
		UNK_0xDF93BD7C(bVar0);
		return 0;
	}
	bVar11 = -1.0f;
	bVar13 = false;
	bVar1 = false;
	while (bVar1 < (GET_NUM_POINTS_IN_CURVE_QUERY(bVar0) - 1))
	{
		GET_POINT_FROM_CURVE_QUERY(bVar0, bVar1, &vVar2);
		vVar8.x = vVar2.x;
		vVar8.f_4 = vVar2.y;
		vVar8.f_8 = vVar2.z;
		if ((bVar11 > 0.0f || bVar11 < VDIST(vParam0, vVar8)) && !IS_POINT_IN_VOLUME(vVar8, bParam3))
		{
			bVar11 = VDIST(vParam0, vVar8);
			*uParam4 = { StackVal, StackVal, vVar8 };
			bVar12 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(bVar0, bVar1);
			bVar13 = true;
		}
		bVar1++;
	}
	UNK_0xDF93BD7C(bVar0);
	if (bVar13)
	{
		Var14 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_140(StackVal, StackVal, *uParam4) };
		if (!bParam6)
		{
			UNK_0x19D652F9(bVar12, 100.0f, &Var14, &uVar20);
			UNK_0x19D652F9(bVar12, -100.0f, &Var14, &iVar26);
		}
		else
		{
			UNK_0x19D652F9(bVar12, 10.0f, &Var14, &uVar20);
			UNK_0x19D652F9(bVar12, -10.0f, &Var14, &iVar26);
		}
		Function_139(&uVar20);
		vVar32 = { StackVal, StackVal, Function_139(&uVar20) };
		Function_139(&iVar26);
		vVar35 = { StackVal, StackVal, Function_139(&iVar26) };
		GET_VOLUME_CENTER(bParam3, &vVar38);
		if (!bParam6)
		{
			if (VDIST(vVar32, vVar38) >= VDIST(vVar35, vVar38))
			{
				*uParam5 = { StackVal, StackVal, vVar32 };
			}
			else
			{
				*uParam5 = { StackVal, StackVal, vVar35 };
			}
		}
		else
		{
			vVar41 = { StackVal, StackVal, *uParam4 };
			*uParam4 = { StackVal, StackVal, vVar35 };
			if (!IS_POINT_IN_VOLUME(vVar32, bParam3))
			{
				*uParam4 = { StackVal, StackVal, vVar32 };
			}
			*uParam5 = { StackVal, StackVal, vVar38 };
		}
	}
	return bVar13;
}

vector3 Function_139(int iParam0) //Position: 0x8590 / 34192
{
	vector3 vVar0;
	
	vVar0.x = *iParam0;
	vVar0.f_4 = StackVal;
	vVar0.f_8 = StackVal;
	return StackVal, StackVal, vVar0;
}

struct<24> Function_140(vector3 vParam0) //Position: 0x85AF / 34223
{
	struct<6> Var0;
	
	Var0 = vParam0.x;
	Var0.f_4 = vParam0.y;
	Var0.f_8 = vParam0.z;
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

var Function_141(int iParam0, int iParam1) //Position: 0x85CF / 34255
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool Function_142(var uParam0, var uParam1, int iParam2) //Position: 0x85E2 / 34274
{
	if (!IS_ACTOR_VALID(Global_34573))
	{
		return 0;
	}
	if (Function_222(&(Global_29008[Global_30717[0]]), 4))
	{
		*iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("Blackwater_layout"), "blkv_graveyard_set");
		if (IS_ACTOR_IN_VOLUME(Global_34573, *iParam2))
		{
			*uParam1 = 298.377f;
			*uParam0 = { 422.321f, 101.465f, 1199.226f };
			return 1;
		}
	}
	if (Function_222(&(Global_29008[Global_30640[4]]), 4))
	{
		*iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("CootsChapel_layout"), "coov_graveyard_vol");
		if (IS_ACTOR_IN_VOLUME(Global_34573, *iParam2))
		{
			*uParam1 = 214.92f;
			*uParam0 = { -1812.829f, 22.935f, 2813.963f };
			return 1;
		}
	}
	if (Function_222(&(Global_29008[Global_30640[12]]), 4))
	{
		*iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("OddFellowsRest_layout"), "oddv_graveyard_vol");
		if (IS_ACTOR_IN_VOLUME(Global_34573, *iParam2))
		{
			*uParam1 = 24.686f;
			*uParam0 = { -2897.155f, 17.974f, 2715.677f };
			return 1;
		}
	}
	if (Function_222(&(Global_29008[Global_30658[0]]), 4))
	{
		*iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("Tumbleweed_layout"), "tumv_Graveyard");
		if (IS_ACTOR_IN_VOLUME(Global_34573, *iParam2))
		{
			*uParam1 = 332.057f;
			*uParam0 = { -3911.452f, 31.16f, 2975.941f };
			return 1;
		}
	}
	if (Function_222(&(Global_29008[Global_30693[4]]), 4))
	{
		*iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("Sepulcro_layout"), "sepv_graveyard_vol");
		if (IS_ACTOR_IN_VOLUME(Global_34573, *iParam2))
		{
			*uParam1 = 285.436f;
			*uParam0 = { -1402.147f, 10.939f, 4317.528f };
			return 1;
		}
	}
	return 0;
}

var Function_143(bool bParam0) //Position: 0x8816 / 34838
{
	return GET_HEADING(bParam0);
}

vector3 Function_144(bool bParam0) //Position: 0x8821 / 34849
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

bool Function_145(vector3 vParam0) //Position: 0x8832 / 34866
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

bool Function_146(var uParam0, bool bParam1, int iParam2) //Position: 0x884A / 34890
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	
	if (bParam1 && DECOR_CHECK_EXIST(*uParam0, "FirstTimeBLKTrigger"))
	{
		if (((((IS_ACTOR_IN_VOLUME(Global_34573, uParam0->f_12) && !IS_ACTOR_PERFORMING_LINKED_ANIMATION(Global_34573)) && !IS_ACTOR_VALID(GET_LASSO_TARGET(Global_34573))) && !FIRE_IS_ACTOR_ON_FIRE(*uParam0)) && IS_ACTOR_ALIVE(*uParam0)) && !Function_148(Global_34573, 0, 0))
		{
			DECOR_REMOVE(*uParam0, "FirstTimeBLKTrigger");
			return 1;
		}
	}
	bVar0 = false;
	if (bParam1)
	{
		bVar0 = true;
	}
	else
	{
		bVar1 = GET_AMMO_ENUM(GET_WEAPON_IN_HAND(*uParam0));
		bVar0 = _GET_AMMO_AMOUNT(Global_34573, bVar1, 1) <= 5.0f;
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
	{
		if (Function_148(Global_34573, 0, 0) || !IS_ACTOR_ALIVE(*uParam0))
		{
			RELEASE_SCRIPT_USE_CONTEXT(StackVal);
			return 0;
		}
		if (FIRE_IS_ACTOR_ON_FIRE(*uParam0))
		{
			RELEASE_SCRIPT_USE_CONTEXT(StackVal);
			return 0;
		}
		if (IS_ACTOR_VALID(GET_LASSO_TARGET(Global_34573)))
		{
			RELEASE_SCRIPT_USE_CONTEXT(StackVal);
			return 0;
		}
		if (IS_ACTOR_PERFORMING_LINKED_ANIMATION(Global_34573))
		{
			RELEASE_SCRIPT_USE_CONTEXT(StackVal);
			return 0;
		}
		if (!bVar0 && !bParam1)
		{
			if (!Function_29(*iParam2, 65536) && !HUD_IS_SHOWING_HELP_TEXT())
			{
				if (Function_147(Global_34573, *uParam0) > 3.0f)
				{
					Function_197(iParam2, 65536);
					Function_152("TerrControl_NoAmmoToHelp", 0x41200000, 1, 0, 2, 1, 0);
				}
			}
			if (!DECOR_CHECK_EXIST(*uParam0, "nUC_NoAmmo"))
			{
				iVar2 = Function_116(*uParam0);
				bVar3 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_NeedAmmo", uParam0->f_12, 10, 4, iVar2, "", "", "", 4, 0);
				DECOR_SET_INT(*uParam0, "nUC_NoAmmo", bVar3);
			}
			RELEASE_SCRIPT_USE_CONTEXT(StackVal);
			return 0;
		}
	}
	if (!IS_ACTOR_ALIVE(*uParam0))
	{
		return 0;
	}
	if (FIRE_IS_ACTOR_ON_FIRE(*uParam0))
	{
		return 0;
	}
	if (IS_ACTOR_VALID(GET_LASSO_TARGET(Global_34573)))
	{
		return 0;
	}
	if (IS_ACTOR_PERFORMING_LINKED_ANIMATION(Global_34573))
	{
		return 0;
	}
	if (!bVar0 && !bParam1)
	{
		if (!Function_29(*iParam2, 65536) && !HUD_IS_SHOWING_HELP_TEXT())
		{
			if (Function_147(Global_34573, *uParam0) > 3.0f)
			{
				Function_197(iParam2, 65536);
				Function_152("TerrControl_NoAmmoToHelp", 0x41200000, 1, 0, 2, 1, 0);
			}
		}
		if (!DECOR_CHECK_EXIST(*uParam0, "nUC_NoAmmo"))
		{
			iVar4 = Function_116(*uParam0);
			bVar5 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_NeedAmmo", uParam0->f_12, 10, 4, iVar4, "", "", "", 4, 0);
			DECOR_SET_INT(*uParam0, "nUC_NoAmmo", bVar5);
		}
		return 0;
	}
	if (!Function_148(Global_34573, 0, 0))
	{
		if (bParam1)
		{
			uParam0->f_8 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_TalkToCore", uParam0->f_12, 10, 4, "", "", "", "", 4, 0);
		}
		else
		{
			if (DECOR_CHECK_EXIST(*uParam0, "nUC_NoAmmo"))
			{
				RELEASE_SCRIPT_USE_CONTEXT(DECOR_GET_INT(*uParam0, "nUC_NoAmmo"));
				DECOR_REMOVE(*uParam0, "nUC_NoAmmo");
			}
			iVar6 = Function_116(*uParam0);
			uParam0->f_8 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_GiveAmmo", uParam0->f_12, 10, 4, iVar6, "", "", "", 4, 0);
		}
	}
	else
	{
		return 0;
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
	{
		return WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(StackVal);
	}
	return 0;
}

float Function_147(bool bParam0, bool bParam1) //Position: 0x8BDA / 35802
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(bParam0, &vVar0);
	GET_POSITION(bParam1, &vVar3);
	return VDIST(vVar0, vVar3);
}

bool Function_148(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8CCB / 36043
{
	if (!IS_PLAYER_CONTROLLABLE(0) && !bParam1)
	{
		return 1;
	}
	if (IS_PLAYER_DEADEYE(false))
	{
		return 1;
	}
	if (IS_PLAYER_USING_COVER(0))
	{
		return 1;
	}
	if (IS_ACTOR_BEING_DRAGGED(bParam0, 0.3f))
	{
		return 1;
	}
	if (Function_151(bParam0))
	{
		return 1;
	}
	if (Function_150(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_CROUCHING(bParam0) && !bParam2)
	{
		return 1;
	}
	if (IS_ACTOR_DRUNK(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_HOGTIED(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_IN_WATER(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_ON_LADDER(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_USING_LEDGE(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(bParam0)))
	{
		return 1;
	}
	if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
	{
		return 1;
	}
	if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(bParam0)))
	{
		return 1;
	}
	if (Function_149())
	{
		return 1;
	}
	return 0;
}

bool Function_149() //Position: 0x8D81 / 36225
{
	return ((Global_34578 != 0 || Global_34578 != 2) || Global_34578 != 3);
}

bool Function_150(bool bParam0) //Position: 0x8D98 / 36248
{
	return IS_ACTOR_IN_HOGTIE(bParam0);
}

bool Function_151(bool bParam0) //Position: 0x8DA3 / 36259
{
	return IS_ACTOR_VALID(GET_LASSO_USER(bParam0));
}

void Function_152(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x8DB1 / 36273
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_153(Global_6269) };
		}
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

struct<16> Function_153(int iParam0) //Position: 0x8E2C / 36396
{
	char* cVar0[16];
	
	if (!Function_154())
	{
		strcpy(&cVar0, "miss", 16);
	}
	else
	{
		strcpy(&cVar0, "ziss", 16);
	}
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

bool Function_154() //Position: 0x8E6B / 36459
{
	if (Function_29(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_155(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x8E86 / 36486
{
	struct<4> Var0;
	int iVar4;
	
	if (bParam4)
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_153(Global_6269) };
		}
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, &Var0, 0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, iVar4, iParam5, iParam6);
	}
}

void Function_156(int iParam0, bool bParam1) //Position: 0x8F0B / 36619
{
	bool bVar0;
	
	bVar0 = ADD_BLIP_FOR_ACTOR(iParam0->f_168, 325, 0, 2, 0);
	SET_BLIP_NAME(bVar0, "nSurv_Core");
	SET_BLIP_PRIORITY(bVar0, 1);
	(iParam0 + 168)->f_12 = CREATE_VOLUME_IN_LAYOUT(Global_30616, Function_61(), 3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.0f, 1.2f, 2.0f);
	ATTACH_OBJECTS((iParam0 + 168)->f_12, iParam0->f_168, Function_61(), 0.0f, 0.8f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
	if (iParam0->f_364 == 4294967295)
	{
		iParam0->f_364 = Function_200(0, bParam1, 3);
	}
	(iParam0 + 168)->f_8 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_TalkToCore", (iParam0 + 168)->f_12, 10, 4, 0, false, 0, 0, 4294967295, 0);
	DECOR_SET_BOOL(iParam0->f_168, "Core", true);
	return;
}

void Function_157(bool bParam0) //Position: 0x8FC3 / 36803
{
	bool bVar0;
	var uVar1;
	var uVar7;
	bool bVar8;
	var uVar12;
	var uVar15;
	var uVar16;
	var uVar17;
	
	PRINTSTRING("Discovering: ");
	PRINTSTRING(&Global_29155[bParam010] + 20);
	PRINTNL();
	if (Function_28(bParam0))
	{
		if ((bParam0 != Global_30679[1] || bParam0 != Global_30707[1]) || bParam0 != Global_30707[2])
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(StackVal))))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(StackVal)));
			}
			GET_OBJECT_POSITION(StackVal, &uVar1);
			bVar0 = ADD_BLIP_FOR_COORD(&uVar1, 564, 0f, 2, 0);
			SET_BLIP_NAME(bVar0, "Status_SafeZone");
			UNK_0xFF3DB575(bVar0, 1);
			SET_BLIP_PRIORITY(bVar0, 3);
			uVar7 = Global_29008[bParam0];
			Function_197(&uVar7, 0x8000000);
			Function_197(&uVar7, 0x10000000);
			Global_29008[bParam0] = uVar7;
		}
		else
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(StackVal))))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(StackVal)));
			}
			GET_VOLUME_SCALE(StackVal, &uVar12);
			bVar8 = Function_162(StackVal, 563, 0.0f);
			SET_BLIP_NAME(bVar8, "Status_UnderAttack");
			UNK_0xFF3DB575(bVar8, 1);
			uVar15 = Function_193(bParam0);
			uVar16 = Function_200(111, 111, 5);
			Function_161(uVar15, GET_DAY(false), GET_HOUR(false), GET_MINUTE(false), GET_SECOND(false));
			Function_160(uVar15, 1, (RAND_INT_RANGE(false, 100000) % 12), (RAND_INT_RANGE(false, 100000) % 60), 0);
			Function_158(uVar16);
			uVar17 = Global_29008[bParam0];
			Function_197(&uVar17, 0x1000000);
			Function_197(&uVar17, 0x10000000);
			Global_29008[bParam0] = uVar17;
		}
	}
	return;
}

void Function_158(int iParam0) //Position: 0x9176 / 37238
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 4294967295)
	{
		iParam0 = Function_200(111, 111, 5);
	}
	iVar0 = 4294967295;
	bVar1 = MAKE_TIME_OF_DAY_EX(9900, 23, 59, 59);
	if (IS_EARLIER_THAN(StackVal, bVar1) && !Function_159(1))
	{
		iVar0 = 1;
		bVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, bVar1) && !Function_159(2))
	{
		iVar0 = 2;
		bVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, bVar1) && !Function_159(3))
	{
		iVar0 = 3;
		bVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, bVar1) && !Function_159(4))
	{
		iVar0 = 4;
		bVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, bVar1) && !Function_159(5))
	{
		iVar0 = 5;
		bVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, bVar1) && !Function_159(8))
	{
		iVar0 = 8;
		bVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, bVar1) && !Function_159(9))
	{
		iVar0 = 9;
		bVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, bVar1) && !Function_159(11))
	{
		iVar0 = 11;
		bVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, bVar1) && !Function_159(12))
	{
		iVar0 = 12;
		bVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, bVar1) && !Function_159(13))
	{
		iVar0 = 13;
		bVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, bVar1) && !Function_159(14))
	{
		iVar0 = 14;
		bVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, bVar1) && !Function_159(15))
	{
		iVar0 = 15;
		bVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, bVar1) && !Function_159(16))
	{
		iVar0 = 16;
		bVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, bVar1) && !Function_159(17))
	{
		iVar0 = 17;
		bVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, bVar1) && !Function_159(18))
	{
		iVar0 = 18;
		bVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, bVar1) && !Function_159(19))
	{
		iVar0 = 19;
		bVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, bVar1) && !Function_159(21))
	{
		iVar0 = 21;
		bVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, bVar1) && !Function_159(22))
	{
		iVar0 = 22;
		bVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, bVar1) && !Function_159(23))
	{
		iVar0 = 23;
		bVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, bVar1) && !Function_159(24))
	{
		iVar0 = 24;
		bVar1 = StackVal;
	}
	Global_13172[iParam011].f_16 = iVar0;
	Global_13172[iParam011].f_24 = bVar1;
	return;
}

bool Function_159(int iParam0) //Position: 0x948A / 38026
{
	int iVar0;
	var uVar1;
	bool bVar2;
	
	iVar0 = Function_93(iParam0);
	uVar1 = Global_29008[iVar0];
	bVar2 = uVar1 & 268435456 != false;
	return bVar2;
}

void Function_160(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x94AE / 38062
{
	while (bParam4 > 60)
	{
		bParam4 = (bParam4 - 60);
		bParam3++;
	}
	while (bParam3 > 60)
	{
		bParam3 = (bParam3 - 60);
		bParam2++;
	}
	while (bParam2 > 24)
	{
		bParam2 = (bParam2 - 24);
		bParam1++;
	}
	switch (bParam0)
	{
		case 0x00000001:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6298[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x00000002:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6351[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x00000003:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6364[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x00000004:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6402[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x00000005:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6433[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x00000008:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6563[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x00000009:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6614[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x0000000B:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6654[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x0000000C:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6709[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x0000000D:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6764[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x0000000E:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6785[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x0000000F:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6815[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x00000010:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6866[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x00000011:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6490[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x00000012:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6987[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x00000013:
			ADD_TIME_USING_TIME_OF_DAY(&Global_7002[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x00000015:
			ADD_TIME_USING_TIME_OF_DAY(&Global_7035[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x00000016:
			ADD_TIME_USING_TIME_OF_DAY(&Global_7113[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x00000017:
			ADD_TIME_USING_TIME_OF_DAY(&Global_7148[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x00000018:
			ADD_TIME_USING_TIME_OF_DAY(&Global_7171[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
	}
}

void Function_161(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x976E / 38766
{
	switch (bParam0)
	{
		case 0x00000001:
			Global_6298[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x00000002:
			Global_6351[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x00000003:
			Global_6364[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x00000004:
			Global_6402[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x00000005:
			Global_6433[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x00000008:
			Global_6563[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x00000009:
			Global_6614[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x0000000B:
			Global_6654[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x0000000C:
			Global_6709[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x0000000D:
			Global_6764[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x0000000E:
			Global_6785[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x0000000F:
			Global_6815[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x00000010:
			Global_6866[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x00000011:
			Global_6490[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x00000012:
			Global_6987[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x00000013:
			Global_7002[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x00000015:
			Global_7035[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x00000016:
			Global_7113[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x00000017:
			Global_7148[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x00000018:
			Global_7171[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
	}
}

var Function_162(bool bParam0, bool bParam1, float fParam2) //Position: 0x99AD / 39341
{
	bool bVar0;
	
	if (!IS_VOLUME_VALID(bParam0))
	{
		return "";
	}
	bVar0 = GET_BLIP_ON_OBJECT(bParam0);
	if (IS_BLIP_VALID(bVar0))
	{
		if (GET_BLIP_ICON(bVar0) == bParam1)
		{
			return bVar0;
		}
		REMOVE_BLIP(bVar0);
	}
	bVar0 = ADD_BLIP_FOR_OBJECT(bParam0, bParam1, fParam2, 2, 0);
	if (IS_BLIP_VALID(bVar0))
	{
		return bVar0;
	}
	return "";
}

void Function_163(bool bParam0) //Position: 0x99FA / 39418
{
	Function_169(bParam0 + 192, "DLC_give_ammo", 5, 1);
	Function_169(bParam0 + 192, "custom/DLC_give_ammo", 8, 1);
	Function_169(bParam0 + 192, "ZombiePack_Footlocker", 1, 1);
	Function_164(bParam0 + 192);
	return;
}

int Function_164(int iParam0) //Position: 0x9A66 / 39526
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_168();
	iVar1 = 0;
	if (!Function_5(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_167(iParam0[iVar03], 8);
		}
		else if (Function_166())
		{
			iVar1 = 1;
			Function_167(iParam0[iVar03], 8);
		}
		Function_167(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_5(iParam0[iVar03], 4))
		{
			if (!Function_5(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_5(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_5(iParam0[03], 8) || iVar1));
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
				Function_167(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_5(iParam0[iVar03], 4))
		{
			if (!Function_5(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_167(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_167(iParam0[iVar03], 2);
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
							Function_167(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_167(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_167(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_167(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_167(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_167(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_167(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_167(iParam0[iVar03], 2);
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
	Function_165();
	return 1;
}

void Function_165() //Position: 0x9DE1 / 40417
{
	if (!Function_26(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_166() //Position: 0x9E21 / 40481
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

void Function_167(var uParam0, int iParam1) //Position: 0x9E4C / 40524
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_168() //Position: 0x9E5D / 40541
{
	if (!Function_26(128))
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

var Function_169(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x9E9F / 40607
{
	int iVar0;
	int iVar1;
	
	if (Global_30842[32])
	{
	}
	iVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_170(uParam0, iVar1, iParam2);
	if (bParam3)
	{
		Function_167(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_170(var uParam0, int iParam1, int iParam2) //Position: 0x9ED7 / 40663
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_5(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_167(uParam0[iVar03], 4);
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

bool Function_171() //Position: 0x9F9B / 40859
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = false;
	bVar1 = CREATE_OBJECT_ITERATOR(Global_30616);
	ITERATE_ON_OBJECT_TYPE(bVar1, 12);
	ITERATE_ON_PARTIAL_MODEL_NAME(bVar1, "ZombiePack_foot");
	bVar2 = START_OBJECT_ITERATOR(bVar1);
	while (IS_OBJECT_VALID(bVar2))
	{
		if (!DECOR_CHECK_EXIST(bVar2, "GringoIsDone"))
		{
			bVar3 = ADD_BLIP_FOR_OBJECT(bVar2, 335, 0f, 2, 0);
			SET_BLIP_NAME(bVar3, "Chest_BlipName");
			DECOR_SET_INT(bVar2, "ChestBlip_AsInt", bVar3);
			SET_BLIP_PRIORITY(bVar3, 1);
			if (Global_29006 == Global_30717[0])
			{
				SET_BLIP_MAX_DISTANCE(bVar3, 2.3f);
			}
			else if (Global_29006 == Global_30723[0])
			{
				SET_BLIP_MAX_DISTANCE(bVar3, 4.0f);
			}
			else
			{
				SET_BLIP_MAX_DISTANCE(bVar3, 1.5f);
			}
		}
		bVar0 = true;
		bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
	}
	DESTROY_ITERATOR(bVar1);
	return bVar0;
}

void Function_172(bool bParam0, var uParam1, struct<365> Param2) //Position: 0xA080 / 41088
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	char* cVar5[32];
	bool bVar13;
	bool bVar14;
	bool bVar15;
	int iVar16;
	bool bVar17;
	bool bVar18;
	vector3 vVar19;
	vector3 vVar22;
	bool bVar25;
	
	bVar0 = CREATE_OBJECT_ITERATOR(bParam0);
	ITERATE_ON_OBJECT_TYPE(bVar0, 2);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	iVar2 = Function_173(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param2);
	if (iVar2 <= 0)
	{
		iVar2 = 0;
	}
	uParam1 = uParam1;
	bVar3 = CREATE_OBJECTSET_IN_LAYOUT(Function_61(), bParam0, 4294967295, 0);
	bVar4 = false;
	while (IS_OBJECT_VALID(bVar1) && !bVar4)
	{
		strcpy(&cVar5, GET_OBJECT_NAME(bVar1), 32);
		if (STRING_CONTAINS_STRING(&cVar5, "chests"))
		{
			bVar14 = GET_OBJECTSET_FROM_OBJECT(bVar1);
			bVar13 = false;
			while (bVar13 < (GET_OBJECTSET_SIZE(bVar14) - 1))
			{
				bVar15 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar13, bVar14);
				strcpy(&cVar5, GET_OBJECT_NAME(bVar15), 32);
				STRING_CLEAR_TOKENIZER();
				iVar16 = SET_OWNERSHIP_STRAGGLER(&cVar5, "_");
				bVar17 = STRING_GET_TOKEN((iVar16 - 1));
				bVar18 = TO_FLOAT(STRING_TO_INT(bVar17));
				if (!Function_29(Global_13172[Param2.f_36411].f_20, FLOOR(POW(2.0f, bVar18))))
				{
					vVar19 = { 0.0f, 0.0f, 0.0f };
					vVar22 = { 0.0f, 0.0f, 0.0f };
					stradd(&cVar5, "_gringo", 32);
					GET_OBJECT_POSITION(bVar15, &vVar19);
					GET_OBJECT_ORIENTATION(bVar15, &vVar22);
					bVar25 = CREATE_GRINGO_IN_LAYOUT(bParam0, &cVar5, "$/content/DLC/ZombiePack/Gringos/ZombiePack_footlocker", vVar19, vVar22);
					ADD_OBJECT_TO_OBJECTSET(bVar25, bVar3);
				}
				bVar13++;
			}
			bVar4 = true;
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	STRING_CLEAR_TOKENIZER();
	DESTROY_OBJECTSET(bVar3);
}

var Function_173(struct<365> Param0) //Position: 0xA1EE / 41454
{
	return Global_13172[Param0.f_36411].f_20;
}

void Function_174(int iParam0) //Position: 0xA202 / 41474
{
	bool bVar0;
	int iVar1;
	vector3 vVar2;
	
	bVar0 = true;
	iVar1 = 0;
	while (StackVal < (iVar1 - 1))
	{
		if (Function_29((iParam0 + 4[iVar15])->f_16, 1))
		{
			if (IS_ACTOR_ALIVE((*iParam0 + 4)[iVar15]))
			{
				vVar2 = { 0.0f, 0.0f, 0.0f };
				GET_OBJECT_POSITION(StackVal, &vVar2);
				if (STREAMING_ARE_BOUNDS_LOADED(vVar2, 3.0f))
				{
					if (!Function_38((*iParam0 + 4)[iVar15], 0x3f800000, 0x42960000, 1, 1, 0))
					{
						Function_44(iParam0 + 4[iVar15] + 16, 1);
						SET_OBJECT_POSITION((*iParam0 + 4)[iVar15], vVar2);
					}
					else
					{
						bVar0 = false;
					}
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		iVar1++;
	}
	if (bVar0)
	{
		Function_44(iParam0 + 356, 1024);
	}
	return;
}

void Function_175(int iParam0, int iParam1) //Position: 0xA2B9 / 41657
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	float fVar4;
	bool bVar5;
	float fVar6;
	float fVar7;
	
	if (Function_176(&bVar0, 20.0f, 0))
	{
		if (ACTOR_HAS_ANIM_SET(bVar0, "DLC_give_ammo"))
		{
			return;
		}
		iVar1 = 0;
		while (StackVal < (iVar1 - 1))
		{
			if (bVar0 == (*iParam0 + 4)[iVar15])
			{
				bVar3 = bVar0;
				iVar2 = iVar1;
				iVar1 = 9999;
			}
			iVar1++;
		}
		if (StackVal || (!IS_ACTOR_ALIVE(bVar3) || iVar2 > 0) < (iVar2 - 1))
		{
			return;
		}
		fVar4 = GET_CURRENT_GAME_TIME();
		if (iParam1 == Global_30668[0])
		{
			if (!Function_29(iParam0->f_356, 0x40000000))
			{
				bVar5 = GET_ACTOR_ENUM(bVar3);
				if (bVar5 != 550 && !IS_ANY_SPEECH_PLAYING(bVar3))
				{
					if (Function_147(bVar3, Global_34573) > 3.5f)
					{
						Function_197(iParam0 + 356, 0x40000000);
						SAY_SINGLE_LINE_CONTEXT(bVar3, 118, Global_34573, 1, 1, 2, 4294967295, 4294967295, 0, 1);
						iParam0->f_380 = fVar4;
						return;
					}
				}
			}
		}
		if (Function_29(iParam0->f_356, 2))
		{
			fVar6 = Function_147(bVar3, Global_34573);
			if ((fVar6 < 10.0f && fVar6 > 18.0f) && !Function_29((iParam0 + 4[iVar25])->f_16, 4))
			{
				Function_197(iParam0 + 4[iVar25] + 16, 4);
				SAY_SINGLE_LINE_STRING_WITH_BACKUPS(bVar3, "GREET_PLAYER_RETURN_P", "GREET", "", 1, 1, 2, 0);
				AI_GOAL_LOOK_AT_ACTOR_NEW(bVar3, Global_34573, 2.21749f, 0);
				iParam0->f_372 = fVar4;
			}
			else if (fVar4 - iParam0->f_372) < RAND_FLOAT_RANGE(45.0f, 60.0f)
			{
				if ((RAND_INT_RANGE(false, 100000) % 100) <= 50)
				{
					SAY_SINGLE_LINE_STRING(bVar3, "POST_SAVE_ANECDOTE_P", true, true, 2, 0, true, false);
				}
				else
				{
					SAY_SINGLE_LINE_STRING_WITH_BACKUPS(bVar3, "POST_SAVE_THANKS", "nTHANK_YOU", "", 1, 1, 2, 0);
				}
				AI_GOAL_LOOK_AT_ACTOR_NEW(bVar3, Global_34573, 2.21749f, 0);
				iParam0->f_372 = fVar4;
			}
		}
		else if (Function_29(iParam0->f_356, 512))
		{
			if (fVar4 - iParam0->f_372) < RAND_FLOAT_RANGE(45.0f, 60.0f)
			{
				if ((RAND_INT_RANGE(false, 100000) % 100) <= 50)
				{
					SAY_SINGLE_LINE_STRING(bVar3, "POST_SAVE_ANECDOTE_P", true, true, 2, 0, true, false);
				}
				else
				{
					SAY_SINGLE_LINE_STRING_WITH_BACKUPS(bVar3, "POST_SAVE_THANKS", "nTHANK_YOU", "", 1, 1, 2, 0);
				}
				AI_GOAL_LOOK_AT_ACTOR_NEW(bVar3, Global_34573, 2.21749f, 0);
				iParam0->f_372 = fVar4;
			}
		}
		else
		{
			fVar7 = Function_147(bVar3, Global_34573);
			if (fVar7 < 16.0f && !Function_29((iParam0 + 4[iVar25])->f_16, 4))
			{
				Function_197(iParam0 + 4[iVar25] + 16, 4);
				SAY_SINGLE_LINE_STRING_WITH_BACKUPS(bVar3, "CRY_FOR_HELP_P", "MAJOR_SHOCK", "", 1, 1, 2, 0);
				iParam0->f_380 = fVar4;
			}
			else if (fVar7 > 10.0f && !Function_29((iParam0 + 4[iVar25])->f_16, 8))
			{
				Function_197(iParam0 + 4[iVar25] + 16, 8);
				SAY_SINGLE_LINE_STRING_WITH_BACKUPS(bVar3, "GREET_UNDER_ATTACK_P", "SERIOUSLY_WOUNDED", "", 1, 1, 2, 0);
				AI_GOAL_LOOK_AT_ACTOR_NEW(bVar3, Global_34573, 2.21749f, 0);
				iParam0->f_380 = fVar4;
			}
			else if (!Function_29((iParam0 + 4[iVar25])->f_16, 2))
			{
				if (fVar4 - iParam0->f_372) < RAND_FLOAT_RANGE(45.0f, 60.0f)
				{
					SAY_SINGLE_LINE_STRING(bVar3, "POST_SAVE_ANECDOTE_P", true, true, 2, 0, true, false);
					AI_GOAL_LOOK_AT_ACTOR_NEW(bVar3, Global_34573, 2.21749f, 0);
					iParam0->f_372 = fVar4;
					iParam0->f_380 = fVar4;
				}
			}
			else if (fVar4 - iParam0->f_380) < RAND_FLOAT_RANGE(30.0f, 45.0f)
			{
				SAY_SINGLE_LINE_STRING_WITH_BACKUPS(bVar3, "CRIES_OUT_IN_TEROR", "MINOR_SHOCK", "", 1, 1, 2, 0);
				iParam0->f_380 = fVar4;
			}
		}
	}
	return;
}

bool Function_176(var uParam0, float fParam1, bool bParam2) //Position: 0xA6F8 / 42744
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = CREATE_OBJECT_ITERATOR(Global_30616);
	ITERATE_ON_OBJECT_TYPE(bVar0, 15);
	ITERATE_IN_SPHERE(bVar0, Global_34574, fParam1);
	bVar1 = false;
	bVar2 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar2) && !bVar1)
	{
		bVar3 = GET_ACTOR_FROM_OBJECT(bVar2);
		if (IS_ACTOR_RIDING(bVar3))
		{
			if (bParam2)
			{
				*uParam0 = bVar3;
			}
		}
		else
		{
			*uParam0 = bVar3;
		}
		if (IS_ACTOR_ALIVE(*uParam0))
		{
			bVar1 = true;
		}
		else
		{
			*uParam0 = "";
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return bVar1;
}

void Function_177(int iParam0, int iParam1, float fParam2) //Position: 0xA775 / 42869
{
	char* cVar0;
	bool bVar1;
	int iVar2;
	
	if (Global_3380 || Function_26(0x8000000))
	{
		return;
	}
	cVar0 = Function_32(iParam1);
	if (iParam1 == Global_30640[0])
	{
		bVar1 = FIND_VOLUME_IN_LAYOUT(Global_30616, "spawnresrict_2");
		if (IS_VOLUME_VALID(bVar1))
		{
			if (IS_ACTOR_IN_VOLUME(Global_34573, bVar1))
			{
				if (!Function_29(iParam0->f_356, 0x2000000))
				{
					Function_44(iParam0 + 356, 4194304);
					Function_44(iParam0 + 356, 8388608);
					Function_44(iParam0 + 356, 0x1000000);
					Function_44(iParam0 + 356, 1048576);
					Function_44(iParam0 + 356, 2097152);
					Function_197(iParam0 + 356, 0x2000000);
					AUDIO_MUSIC_FORCE_TRACK(cVar0, "HIGH_FIGHT_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
					return;
				}
				return;
			}
			Function_44(iParam0 + 356, 0x2000000);
		}
	}
	if (!Function_29(iParam0->f_356, 2097152))
	{
		if (fParam2 <= 70.0f)
		{
			AUDIO_MUSIC_FORCE_TRACK(cVar0, "HIGH_FIGHT_LIGHT", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_197(iParam0 + 356, 1048576);
			Function_197(iParam0 + 356, 2097152);
			Function_197(iParam0 + 356, 4194304);
			Function_197(iParam0 + 356, 8388608);
			Function_197(iParam0 + 356, 0x1000000);
			return;
		}
	}
	if (!Function_29(iParam0->f_356, 1048576))
	{
		if (fParam2 <= 40.0f && fParam2 > 70.0f)
		{
			AUDIO_MUSIC_FORCE_TRACK(cVar0, "HIGH_FIGHT_MEDIUM", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_197(iParam0 + 356, 1048576);
			Function_197(iParam0 + 356, 4194304);
			Function_197(iParam0 + 356, 8388608);
			Function_197(iParam0 + 356, 0x1000000);
			return;
		}
	}
	iVar2 = Function_178(StackVal, StackVal, Global_34574, 16.0f, 0x40400000, 1, 0);
	if (iVar2 <= 3 && !Function_29(iParam0->f_356, 4194304))
	{
		AUDIO_MUSIC_FORCE_TRACK(cVar0, "HIGH_FIGHT_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
		Function_197(iParam0 + 356, 4194304);
		Function_197(iParam0 + 356, 8388608);
		Function_197(iParam0 + 356, 0x1000000);
	}
	else if ((iVar2 > 3 && iVar2 == 0) && !Function_29(iParam0->f_356, 8388608))
	{
		AUDIO_MUSIC_FORCE_TRACK(cVar0, "LOW_FIGHT_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
		Function_197(iParam0 + 356, 8388608);
		Function_197(iParam0 + 356, 0x1000000);
	}
	else if (iVar2 != 0 && !Function_29(iParam0->f_356, 0x1000000))
	{
		Function_197(iParam0 + 356, 0x1000000);
		AUDIO_MUSIC_FORCE_TRACK(cVar0, "SUSPENSE_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	return;
}

var Function_178(vector3 vParam0, float fParam3, float fParam4, var uParam5, var uParam6) //Position: 0xAA51 / 43601
{
	bool bVar0;
	var uVar1;
	
	bVar0 = CREATE_VOLUME_IN_LAYOUT(Global_30616, Function_61(), 3, vParam0, 0.0f, 0.0f, 0.0f, fParam3, fParam4, fParam3);
	uVar1 = Function_179(bVar0, uParam5, uParam6);
	DESTROY_VOLUME(bVar0);
	return uVar1;
}

int Function_179(bool bParam0, var uParam1, bool bParam2) //Position: 0xAA84 / 43652
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!IS_VOLUME_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_LAYOUTREF_VALID(Global_30616))
	{
		return 0;
	}
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_61(), Global_30616, 15, 1);
	iVar1 = 0;
	if (IS_OBJECTSET_VALID(bVar0))
	{
		LOCATE_ACTORS_IN_VOLUME(bParam0, bVar0, 0, 1);
		bVar2 = GET_OBJECTSET_SIZE(bVar0);
		if (bVar2 < 0)
		{
			return iVar1;
		}
		bVar3 = false;
		while (bVar3 <= bVar2)
		{
			bVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar3, bVar0);
			if (IS_OBJECT_VALID(bVar4))
			{
				bVar5 = GET_ACTOR_FROM_OBJECT(bVar4);
				if (IS_ACTOR_VALID(bVar5))
				{
					if (Function_180(bVar5))
					{
						if (uParam1 || !IS_ACTOR_HOGTIED(bVar5))
						{
							if (bParam2)
							{
								if (Function_38(bVar5, 0x3f800000, 0x42960000, 1, 1, 0))
								{
									iVar1++;
								}
							}
							else
							{
								iVar1++;
							}
						}
					}
				}
			}
			bVar3++;
		}
	}
	DESTROY_OBJECTSET(bVar0);
	return iVar1;
}

bool Function_180(bool bParam0) //Position: 0xAB4E / 43854
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if (bVar0 <= 1204 && bVar0 >= 1254)
	{
		return 1;
	}
	if (Function_181(bParam0, 1))
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(bParam0, "Zombie"))
	{
		return DECOR_GET_BOOL(bParam0, "Zombie");
	}
	return 0;
}

bool Function_181(bool bParam0, int iParam1) //Position: 0xAB99 / 43929
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if ((((((bVar0 != 1252 && iParam1) || (bVar0 != 1253 && iParam1)) || bVar0 != 541) || bVar0 != 542) || bVar0 != 543) || bVar0 != 544)
	{
		return 1;
	}
	return 0;
}

void Function_182() //Position: 0xABDB / 43995
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	iVar0 = Function_193(Global_29006);
	fVar1 = Function_191(Global_29006);
	fVar2 = Function_192(iVar0);
	fVar3 = (((fVar2 - fVar1) / fVar2) * 1.5f);
	fVar3 = Function_183(0.33f, Function_141(fVar3, 1.0f));
	SET_POP_DENSITY_MULTIPLIER(fVar3);
	SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
	ENABLE_AMBIENT_SPAWNING(true);
	Function_184(1);
	return;
}

float Function_183(int iParam0, int iParam1) //Position: 0xAC29 / 44073
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_184(int iParam0) //Position: 0xAC3C / 44092
{
	if (Function_29(iParam0, 1) && !Function_29(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || iParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_185(int iParam0, bool bParam1) //Position: 0xAC69 / 44137
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	struct<5> Var5;
	
	SET_PLAYER_CAUSE_WEAPON_REACTION_COMBAT(Global_34573, 1);
	AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
	iVar0 = 0;
	while (StackVal < (iVar0 - 1))
	{
		bVar1 = (*iParam0 + 4)[iVar05];
		if (IS_ACTOR_ALIVE(bVar1))
		{
			SET_MOVER_FROZEN(bVar1, 0);
			SET_ACTOR_WEAPON_REACTION_ACTOR_TYPE(bVar1, 4);
			if (!Function_29(iParam0->f_356, 0x4000000))
			{
				MEMORY_CLEAR_ALL(bVar1);
				MEMORY_CONSIDER_AS(bVar1, Global_34573, 2);
			}
			AI_CLEAR_DONT_HARM_ACTOR(bVar1);
			vVar2 = { 0.0f, 0.0f, 0.0f };
			Var5 = { 0.0f, 0.0f, 0.0f };
			GET_OBJECT_POSITION(StackVal, &vVar2);
			GET_OBJECT_ORIENTATION(StackVal, &Var5);
			if (!bParam1)
			{
				TASK_PRIORITY_SET(bVar1, 1);
				TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, bVar1, &vVar2, -1.0f);
			}
			else
			{
				SET_ACTOR_CAN_BE_TARGETED(bVar1, true);
				if (!Function_29(iParam0->f_356, 0x4000000))
				{
					TASK_PRIORITY_SET(bVar1, 0);
					TASK_STAND_STILL(bVar1, -1.0f, 0, 0);
				}
			}
		}
		iVar0++;
	}
	Function_186(*iParam0, *iParam0, 0);
	return;
}

void Function_186(bool bParam0, bool bParam1, int iParam2) //Position: 0xAD4D / 44365
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!SQUAD_IS_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			Function_187(bVar1, bParam1, iParam2);
		}
		bVar0++;
	}
	return;
}

void Function_187(bool bParam0, bool bParam1, bool bParam2) //Position: 0xAD9C / 44444
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam1) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				MEMORY_CONSIDER_AS(bParam0, bVar1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

bool Function_188(int iParam0) //Position: 0xADE6 / 44518
{
	int iVar0;
	
	iVar0 = Function_93(iParam0);
	if (iVar0 == 4294967295)
	{
		return 0;
	}
	if (StackVal || StackVal != 2 != 1)
	{
		return 0;
	}
	return (Function_27(iVar0) || Function_159(iParam0));
}

void Function_189(int iParam0) //Position: 0xAE25 / 44581
{
	float fVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	bool bVar5;
	
	if (!Function_29(iParam0->f_356, 512))
	{
		fVar0 = Function_191(Global_29006);
		iVar1 = Function_193(Global_29006);
		if (iVar1 == 0 && iParam0->f_368 >= 120.0f)
		{
			fVar2 = Function_192(iVar1);
			fVar3 = ((fVar0 / fVar2) * 100.0f);
			if (fVar3 <= 120.0f)
			{
				iParam0->f_368 = 1000.0f;
				return;
			}
			if (fVar3 == iParam0->f_368)
			{
				fVar4 = (fVar0 % 10.0f);
				bVar5 = (fVar0 / 10.0f);
				UI_SET_PROGRESS_BAR_VAL("ZMeter", (FABS((fVar4 * 10.0f)) + 1.0f));
				UI_SET_PROGRESS_BAR_CHANGE("ZMeter", FLOOR(bVar5));
				UI_REFRESH("ZMeter");
				iParam0->f_368 = fVar3;
			}
		}
	}
	return;
}

void Function_190(int iParam0) //Position: 0xAEE6 / 44774
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = GET_BLIP_ON_ACTOR(*iParam0);
	if (GET_BLIP_ICON(bVar0) == 325)
	{
		REMOVE_BLIP(bVar0);
	}
	bVar1 = DECOR_GET_INT(*iParam0, "PauseMapBlip");
	if (IS_BLIP_VALID(bVar1))
	{
		REMOVE_BLIP(bVar1);
	}
	DECOR_REMOVE(*iParam0, "PauseMapBlip");
	if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
	{
		RELEASE_SCRIPT_USE_CONTEXT(StackVal);
	}
	if (DECOR_CHECK_EXIST(*iParam0, "nUC_NoAmmo"))
	{
		bVar2 = DECOR_GET_INT(*iParam0, "nUC_NoAmmo");
		if (IS_SCRIPT_USE_CONTEXT_VALID(bVar2))
		{
			RELEASE_SCRIPT_USE_CONTEXT(bVar2);
		}
		DECOR_REMOVE(*iParam0, "nUC_NoAmmo");
	}
	if (IS_VOLUME_VALID(iParam0->f_12))
	{
		DESTROY_VOLUME(iParam0->f_12);
	}
	return;
}

var Function_191(int iParam0) //Position: 0xAFA9 / 44969
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	bVar0 = false;
	iVar1 = -1.0f;
	bVar2 = StackVal;
	if (IS_VOLUME_VALID(bVar2))
	{
		bVar0 = DECOR_GET_FLOAT_VERBOSE(bVar2, "ZombieScore", &iVar1);
		if (!bVar0)
		{
			DECOR_SET_FLOAT(bVar2, "ZombieScore", 0.0f);
			return 0.0f;
		}
		return iVar1;
	}
	return 0.0f;
}

var Function_192(int iParam0) //Position: 0xB003 / 45059
{
	if (iParam0 == 1)
	{
		return 70.0f;
	}
	if (iParam0 == 2)
	{
		return 40.0f;
	}
	if (iParam0 == 3)
	{
		return 30.0f;
	}
	if (iParam0 == 4)
	{
		return 50.0f;
	}
	if (iParam0 == 5)
	{
		return 70.0f;
	}
	if (iParam0 == 8)
	{
		return 60.0f;
	}
	if (iParam0 == 9)
	{
		return 50.0f;
	}
	if (iParam0 == 11)
	{
		return 40.0f;
	}
	if (iParam0 == 12)
	{
		return 90.0f;
	}
	if (iParam0 == 13)
	{
		return 30.0f;
	}
	if (iParam0 == 14)
	{
		return 40.0f;
	}
	if (iParam0 == 15)
	{
		return 80.0f;
	}
	if (iParam0 == 16)
	{
		return 100.0f;
	}
	if (iParam0 == 17)
	{
		return 40.0f;
	}
	if (iParam0 == 18)
	{
		return 50.0f;
	}
	if (iParam0 == 19)
	{
		return 50.0f;
	}
	if (iParam0 == 21)
	{
		return 30.0f;
	}
	if (iParam0 == 22)
	{
		return 30.0f;
	}
	if (iParam0 == 23)
	{
		return 30.0f;
	}
	if (iParam0 == 24)
	{
		return 20.0f;
	}
	return 100.0f;
}

int Function_193(bool bParam0) //Position: 0xB146 / 45382
{
	if (bParam0 == Global_30640[0])
	{
		return 1;
	}
	if (bParam0 == Global_30640[2])
	{
		return 2;
	}
	if (bParam0 == Global_30640[1])
	{
		return 3;
	}
	if (bParam0 == Global_30658[1])
	{
		return 4;
	}
	if (bParam0 == Global_30658[3])
	{
		return 5;
	}
	if (bParam0 == Global_30668[0])
	{
		return 8;
	}
	if (bParam0 == Global_30668[1])
	{
		return 9;
	}
	if (bParam0 == Global_30679[0])
	{
		return 11;
	}
	if (bParam0 == Global_30685[0])
	{
		return 12;
	}
	if (bParam0 == Global_30685[1])
	{
		return 13;
	}
	if (bParam0 == Global_30685[2])
	{
		return 14;
	}
	if (bParam0 == Global_30693[0])
	{
		return 15;
	}
	if (bParam0 == Global_30693[1])
	{
		return 16;
	}
	if (bParam0 == Global_30693[2])
	{
		return 17;
	}
	if (bParam0 == Global_30707[2])
	{
		return 25;
	}
	if (bParam0 == Global_30707[3])
	{
		return 18;
	}
	if (bParam0 == Global_30707[0])
	{
		return 19;
	}
	if (bParam0 == Global_30717[0])
	{
		return 21;
	}
	if (bParam0 == Global_30723[2])
	{
		return 22;
	}
	if (bParam0 == Global_30723[1])
	{
		return 23;
	}
	if (bParam0 == Global_30723[0])
	{
		return 24;
	}
	if (bParam0 == Global_30679[1])
	{
		return 26;
	}
	if (bParam0 == Global_30707[1])
	{
		return 27;
	}
	return 0;
}

void Function_194() //Position: 0xB2CC / 45772
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = CREATE_OBJECT_ITERATOR(Global_30616);
	ITERATE_ON_OBJECT_TYPE(bVar0, 12);
	ITERATE_ON_PARTIAL_MODEL_NAME(bVar0, "ZombiePack_foot");
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		bVar2 = GET_BLIP_ON_OBJECT(bVar1);
		if (IS_BLIP_VALID(bVar2))
		{
			REMOVE_BLIP(bVar2);
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

var Function_195(bool bParam0, int iParam1) //Position: 0xB32A / 45866
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	iVar0 = 0;
	if (IS_LAYOUTREF_VALID(Global_30616))
	{
		bVar1 = CREATE_OBJECT_ITERATOR(Global_30616);
		ITERATE_ON_OBJECT_TYPE(bVar1, 12);
		ITERATE_ON_PARTIAL_NAME(bVar1, "player_sleep");
		if (iParam1 == Global_30628[2])
		{
			ITERATE_IN_SPHERE(bVar1, 123.033f, 72.791f, 2669.954f, 10.0f);
		}
		bVar2 = START_OBJECT_ITERATOR(bVar1);
		if (IS_OBJECT_VALID(bVar2))
		{
			bVar3 = GET_GRINGO_FROM_OBJECT(bVar2);
			if (IS_GRINGO_VALID(bVar3))
			{
				GRINGO_ALLOW_ACTIVATION(bVar3, bParam0);
				bVar4 = GET_OBJECT_FROM_GRINGO(bVar3);
				bVar5 = GET_BLIP_ON_OBJECT(bVar4);
				if (IS_BLIP_VALID(bVar5))
				{
					REMOVE_BLIP(bVar5);
				}
				if (bParam0)
				{
					DECOR_SET_BOOL(bVar4, "SavingAtBedAllowed", true);
					bVar5 = ADD_BLIP_FOR_OBJECT(bVar4, 326, 0f, 2, 0);
					SET_BLIP_PRIORITY(bVar5, 1);
					if (iParam1 != 4294967295)
					{
						SET_BLIP_MAX_DISTANCE(bVar5, 3.0f);
					}
					iVar0 = 1;
				}
				else
				{
					if (DECOR_CHECK_EXIST(bVar4, "SavingAtBedAllowed"))
					{
						DECOR_REMOVE(bVar4, "SavingAtBedAllowed");
					}
					iVar0 = 1;
				}
			}
		}
		DESTROY_ITERATOR(bVar1);
	}
	return iVar0;
}

void Function_196(bool bParam0, bool bParam1) //Position: 0xB44B / 46155
{
	DECOR_SET_FLOAT(StackVal, "ZombieScore", bParam1);
	return;
}

void Function_197(var uParam0, bool bParam1) //Position: 0xB46E / 46190
{
	*uParam0 = (*uParam0 || bParam1);
	return;
}

bool Function_198(int iParam0, bool bParam1) //Position: 0xB47D / 46205
{
	int iVar0;
	
	iVar0 = Function_133(iParam0);
	if (!Function_199(iVar0))
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

bool Function_199(int iParam0) //Position: 0xB4BA / 46266
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_200(bool bParam0, bool bParam1, bool bParam2) //Position: 0xB4D1 / 46289
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_204(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_201(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_201(bParam0, bParam1, bParam2, 4294967295);
}

int Function_201(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xB52F / 46383
{
	var uVar0;
	
	if (!Function_203(bParam2))
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
	uVar0 = Function_204(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_202(uVar0);
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

int Function_202(int iParam0) //Position: 0xB684 / 46724
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

bool Function_203(int iParam0) //Position: 0xB6C2 / 46786
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_204(int iParam0, int iParam1, int iParam2) //Position: 0xB6D7 / 46807
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

void Function_205(int iParam0) //Position: 0xB6F7 / 46839
{
	iParam0 = iParam0;
	if (!iLocal_658 && !IS_PS3())
	{
		if (Function_206(&uLocal_660, 1.0f))
		{
			SET_BRIDGE_STIFFNESS(iLocal_667[0], 0.2f);
			SET_BRIDGE_STIFFNESS(iLocal_667[1], 0.2f);
			SET_BRIDGE_STIFFNESS(iLocal_667[2], 0.2f);
			iLocal_658 = 1;
		}
	}
	return;
}

bool Function_206(var uParam0, float fParam1) //Position: 0xB745 / 46917
{
	if (Function_209(uParam0))
	{
		if (Function_207(uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_207(int iParam0) //Position: 0xB761 / 46945
{
	if (Function_209(iParam0))
	{
		if (Function_208(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_208(int iParam0) //Position: 0xB829 / 47145
{
	return Function_29(*iParam0, 2);
}

bool Function_209(int iParam0) //Position: 0xB836 / 47158
{
	return Function_29(*iParam0, 1);
}

void Function_210(bool bParam0, float fParam1) //Position: 0xB843 / 47171
{
	if (!Function_26(128))
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

void Function_211(bool bParam0, bool bParam1) //Position: 0xB881 / 47233
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
		Function_71(Global_29155[bParam110].f_20, cVar0);
	}
	if (!Global_3380 && !Function_51())
	{
		SET_RICH_PRESENCE(2, Global_29155[bParam110].f_36, 0, 0, 0);
	}
	DECOR_SET_INT(bParam0, "regid", bParam1);
	Global_30620 = 0;
	return;
}

void Function_212(int iParam0) //Position: 0xB97B / 47483
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_213(bool bParam0) //Position: 0xB98E / 47502
{
	Function_214(StackVal, 0, 0.0f, 4, Local_108, 1);
	return;
}

void Function_214(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0xB9A6 / 47526
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
		Function_217();
	}
	if (bParam5)
	{
		Function_215(1048576);
	}
}

void Function_215(int iParam0) //Position: 0xBAB9 / 47801
{
	Function_216(&Global_28842, iParam0);
	return;
}

void Function_216(var uParam0, var uParam1) //Position: 0xBAC7 / 47815
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_217() //Position: 0xBAE2 / 47842
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_215(16384);
	}
	return;
}

void Function_218(var uParam0) //Position: 0xBAFE / 47870
{
	uParam0 = uParam0;
	return;
}

void Function_219() //Position: 0xBB08 / 47880
{
	return;
}

void Function_220(int iParam0) //Position: 0xBB0E / 47886
{
	iParam0 = iParam0;
	return;
}

void Function_221(var uParam0, int iParam1) //Position: 0xBB18 / 47896
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_222(int iParam0, int iParam1) //Position: 0xBB2F / 47919
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_223() //Position: 0xBB4B / 47947
{
	return;
}

void Function_224() //Position: 0xBB51 / 47953
{
	return;
}

void Function_225(int iParam0) //Position: 0xBB57 / 47959
{
	iParam0 = iParam0;
	return;
}

void Function_226(int iParam0, bool bParam1, bool bParam2) //Position: 0xBB61 / 47969
{
	if ((!Function_9(bParam1) || Global_3380) || Function_29(iParam0->f_356, 16))
	{
		return;
	}
	if (bParam1 == Global_30640[0])
	{
		Function_227(iParam0, bParam1, &Global_6298, bParam2);
	}
	else if (bParam1 == Global_30640[1])
	{
		Function_227(iParam0, bParam1, &Global_6364, bParam2);
	}
	else if (bParam1 == Global_30640[2])
	{
		Function_227(iParam0, bParam1, &Global_6351, bParam2);
	}
	else if (bParam1 == Global_30658[1])
	{
		Function_227(iParam0, bParam1, &Global_6402, bParam2);
	}
	else if (bParam1 == Global_30658[3])
	{
		Function_227(iParam0, bParam1, &Global_6433, bParam2);
	}
	else if (bParam1 == Global_30658[4])
	{
		Function_227(iParam0, bParam1, &Global_6537, bParam2);
	}
	else if (bParam1 == Global_30668[0])
	{
		Function_227(iParam0, bParam1, &Global_6563, bParam2);
	}
	else if (bParam1 == Global_30668[1])
	{
		Function_227(iParam0, bParam1, &Global_6614, bParam2);
	}
	else if (bParam1 == Global_30668[2])
	{
		Function_227(iParam0, bParam1, &Global_6643, bParam2);
	}
	else if (bParam1 == Global_30679[1])
	{
		Function_227(iParam0, bParam1, &Global_6667, bParam2);
	}
	else if (bParam1 == Global_30679[0])
	{
		Function_227(iParam0, bParam1, &Global_6654, bParam2);
	}
	else if (bParam1 == Global_30685[0])
	{
		Function_227(iParam0, bParam1, &Global_6709, bParam2);
	}
	else if (bParam1 == Global_30685[1])
	{
		Function_227(iParam0, bParam1, &Global_6764, bParam2);
	}
	else if (bParam1 == Global_30685[2])
	{
		Function_227(iParam0, bParam1, &Global_6785, bParam2);
	}
	else if (bParam1 == Global_30693[0])
	{
		Function_227(iParam0, bParam1, &Global_6815, bParam2);
	}
	else if (bParam1 == Global_30693[1])
	{
		Function_227(iParam0, bParam1, &Global_6866, bParam2);
	}
	else if (bParam1 == Global_30693[2])
	{
		Function_227(iParam0, bParam1, &Global_6490, bParam2);
	}
	else if (bParam1 == Global_30707[2])
	{
		Function_227(iParam0, bParam1, &Global_6933, bParam2);
	}
	else if (bParam1 == Global_30707[1])
	{
		Function_227(iParam0, bParam1, &Global_6962, bParam2);
	}
	else if (bParam1 == Global_30707[0])
	{
		Function_227(iParam0, bParam1, &Global_7002, bParam2);
	}
	else if (bParam1 == Global_30707[3])
	{
		Function_227(iParam0, bParam1, &Global_6987, bParam2);
	}
	else if (bParam1 == Global_30723[0])
	{
		Function_227(iParam0, bParam1, &Global_7171, bParam2);
	}
	else if (bParam1 == Global_30723[1])
	{
		Function_227(iParam0, bParam1, &Global_7148, bParam2);
	}
	else if (bParam1 == Global_30723[2])
	{
		Function_227(iParam0, bParam1, &Global_7113, bParam2);
	}
	else if (bParam1 == Global_30717[0])
	{
		Function_227(iParam0, bParam1, &Global_7035, bParam2);
	}
	else if (bParam1 == Global_30717[1])
	{
		Function_227(iParam0, bParam1, &Global_7032, bParam2);
	}
	Function_197(iParam0 + 356, 64);
	return;
}

void Function_227(int iParam0, int iParam1, var uParam2, bool bParam3) //Position: 0xBE2E / 48686
{
	struct<8> Var0;
	bool bVar8;
	var uVar9[8];
	int iVar18;
	int iVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	vector3 vVar24;
	vector3 vVar27;
	struct<8> Var30;
	
	Function_44(iParam0 + 356, 1);
	if (!SQUAD_IS_VALID(*iParam0))
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_236("localSurvSquad") };
		*iParam0 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bParam3, &Var0));
	}
	bVar8 = Function_235(bParam3, iParam1);
	iVar18 = Function_92(&uVar9, iParam1);
	iVar19 = 0;
	bVar20 = FLOOR(Global_13172[iParam0->f_36411].f_28);
	if (iVar18 < bVar20)
	{
		iVar19 = 1;
	}
	bVar21 = Function_27(iParam1);
	bVar22 = false;
	while (bVar22 < (iVar18 - 1))
	{
		if (bVar22 <= *uParam2)
		{
			if (!Function_234(uParam2[bVar222], 4))
			{
				(iParam0 + 4[bVar225])->f_4 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar22, bVar8);
				bVar23 = true;
				if (bVar20 >= 0)
				{
					if (DECOR_CHECK_EXIST(StackVal, "Core") && iVar19)
					{
						bVar23 = false;
					}
					else if (!DECOR_CHECK_EXIST(StackVal, "Core"))
					{
						bVar23 = false;
					}
				}
				if (bVar23)
				{
					vVar24 = { 0.0f, 0.0f, 0.0f };
					vVar27 = { 0.0f, 0.0f, 0.0f };
					GET_OBJECT_POSITION(StackVal, &vVar24);
					GET_OBJECT_ORIENTATION(StackVal, &vVar27);
					Var30 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_236("nSurvivor_") };
					(*iParam0 + 4)[bVar225] = CREATE_ACTOR_IN_LAYOUT(bParam3, &Var30, uVar9[bVar22], vVar24, vVar27);
					Function_229(bVar22, iParam0, bParam3, bVar21, iParam1);
					if (!STREAMING_ARE_BOUNDS_LOADED(vVar24, 3.0f))
					{
						Function_197(iParam0 + 4[bVar225] + 16, 1);
						Function_197(iParam0 + 356, 1024);
					}
					Function_197(iParam0 + 356, 1);
				}
				else
				{
					bVar20 = (bVar20 - 1);
					Function_228(uParam2[bVar222], 4);
				}
			}
		}
		bVar22++;
	}
	SET_FACTIONS_STATUS_TWO_WAY(4, 4, 0);
	SET_FACTIONS_STATUS_TWO_WAY(6, 6, 0);
	SET_FACTIONS_STATUS_TWO_WAY(4, 6, 0);
	SET_FACTIONS_STATUS_TWO_WAY(13, 10, 0);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 4, false);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 6, false);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 6, false);
	Function_186(*iParam0, *iParam0, 0);
	SET_FACTIONS_STATUS_TWO_WAY(23, 32, 4);
}

void Function_228(var uParam0, int iParam1) //Position: 0xC01D / 49181
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_229(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0xC02C / 49196
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	struct<5> Var7;
	int iVar12;
	bool bVar13;
	bool bVar14;
	char* cVar15[32];
	bool bVar23;
	bool bVar24;
	
	bVar0 = (*iParam1 + 4)[iParam05];
	bVar1 = StackVal;
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SQUAD_JOIN(bVar0, *iParam1);
	SET_ACTOR_VISION_FIELD_OF_VIEW(bVar0, 170.0f);
	fVar2 = (GET_ACTOR_VISION_MAX_RANGE(bVar0) + 10.0f);
	SET_ACTOR_VISION_MAX_RANGE(bVar0, fVar2, 1);
	fVar3 = GET_ACTOR_MAX_HEALTH(bVar0);
	SET_ACTOR_MAX_HEALTH(bVar0, (fVar3 + 30.0f));
	SET_ALLOW_EXECUTE(bVar0, 0);
	vVar4 = { 0.0f, 0.0f, 0.0f };
	Var7 = { 0.0f, 0.0f, 0.0f };
	GET_OBJECT_POSITION(StackVal, &vVar4);
	GET_OBJECT_ORIENTATION(StackVal, &Var7);
	bVar10 = true;
	if (DECOR_CHECK_EXIST(bVar1, "GiveWeapon"))
	{
		bVar11 = DECOR_GET_INT(bVar1, "GiveWeapon");
		GIVE_WEAPON_TO_ACTOR(bVar0, bVar11, 0, 1, 1);
		iVar12 = UNK_0xDB679ED9(bVar11);
		if (iVar12 == 40)
		{
			bVar10 = (StackVal + DECOR_GET_INT(bVar10, "ZP_NumRevolvers"));
			DECOR_SET_INT(StackVal, "ZP_NumRevolvers", bVar10);
			DECOR_SET_INT(bVar0, "nammo_type", 7);
		}
		else if (iVar12 == 39)
		{
			bVar10 = (StackVal + DECOR_GET_INT(bVar10, "ZP_NumPistols"));
			DECOR_SET_INT(StackVal, "ZP_NumPistols", bVar10);
			DECOR_SET_INT(bVar0, "nammo_type", 6);
		}
		else if (iVar12 == 41)
		{
			bVar10 = (StackVal + DECOR_GET_INT(bVar10, "ZP_NumRepeaters"));
			DECOR_SET_INT(StackVal, "ZP_NumRepeaters", bVar10);
			DECOR_SET_INT(bVar0, "nammo_type", 8);
		}
		else if (iVar12 == 42)
		{
			bVar10 = (StackVal + DECOR_GET_INT(bVar10, "ZP_NumRifles"));
			DECOR_SET_INT(StackVal, "ZP_NumRifles", bVar10);
			DECOR_SET_INT(bVar0, "nammo_type", 9);
		}
		else if (iVar12 == 43)
		{
			bVar10 = (StackVal + DECOR_GET_INT(bVar10, "ZP_NumShotguns"));
			DECOR_SET_INT(StackVal, "ZP_NumShotguns", bVar10);
			DECOR_SET_INT(bVar0, "nammo_type", 10);
		}
		else if (iVar12 == 44)
		{
			bVar10 = (StackVal + DECOR_GET_INT(bVar10, "ZP_NumSnipers"));
			DECOR_SET_INT(StackVal, "ZP_NumSnipers", bVar10);
			DECOR_SET_INT(bVar0, "nammo_type", 11);
		}
	}
	else
	{
		GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0, 1, 1);
		bVar10 = (StackVal + DECOR_GET_INT(bVar10, "ZP_NumRepeaters"));
		DECOR_SET_INT(StackVal, "ZP_NumRepeaters", bVar10);
		DECOR_SET_INT(bVar0, "nammo_type", 8);
	}
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	SET_ACTOR_WEAPON_REACTION_ACTOR_TYPE(bVar0, 3);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar0, 1);
	SET_ACTOR_ALLOW_WEAPON_REACTION_FLEE(bVar0, 0);
	AI_SET_ENABLE_DEAD_BODY_REACTIONS(bVar0, 0);
	SET_ACTOR_CAN_BE_TARGETED(bVar0, false);
	AI_BEHAVIOR_SET_ALLOW(bVar0, 0, 0);
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bVar0, false);
	SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(bVar0, 1);
	Function_233(bVar0, 0);
	Function_232(bVar0, 0);
	SET_CRIPPLE_ENABLE(bVar0, 0);
	SET_ACTOR_ALLOW_DISARM(bVar0, 0);
	if (DECOR_CHECK_EXIST(bVar1, "Accuracy"))
	{
		bVar13 = DECOR_GET_INT(bVar1, "Accuracy");
		Function_231(bVar0, TO_FLOAT(bVar13), 1.0f, 1.0f);
	}
	else
	{
		Function_231(bVar0, 75.0f, 1.0f, 1.0f);
	}
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 61, RAND_FLOAT_RANGE(0.1f, 1.0f));
	AI_SET_SHOTS_PER_BURST(bVar0, (RAND_INT_RANGE(false, 10000) % 5) + 1);
	AI_SET_FIRE_DELAY(bVar0, RAND_FLOAT_RANGE(1.0f, 3.0f));
	AI_SET_FIRE_DELAY_RANDOMNESS(bVar0, RAND_FLOAT_RANGE(0.0f, 2.0f));
	if (DECOR_CHECK_EXIST(bVar1, "nShoot_Vol"))
	{
		bVar14 = DECOR_GET_INT(bVar1, "nShoot_Vol");
		strcpy(&cVar15, "survVol_", 32);
		stradd(&cVar15, INT_TO_STRING(bVar14), 32);
		bVar23 = FIND_VOLUME_IN_LAYOUT(bParam2, &cVar15);
		if (IS_VOLUME_VALID(bVar23))
		{
			SET_ACTOR_STAY_WITHIN_VOLUME(bVar0, bVar23, 4, 1);
			TASK_SHOOT_ENEMIES_FROM_ANY_COVER(bVar0, -1.0f);
		}
		else
		{
			TASK_PRIORITY_SET(bVar0, 1);
			TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, bVar0, &vVar4, -1.0f);
		}
	}
	else if (DECOR_CHECK_EXIST(bVar1, "CrouchShoot"))
	{
		MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
		TASK_PRIORITY_SET(bVar0, 1);
		TASK_OVERRIDE_SET_POSTURE(bVar0, 1);
		TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, bVar0, &vVar4, -1.0f);
	}
	else if (DECOR_CHECK_EXIST(bVar1, "Gringo") || !bParam3)
	{
		bVar24 = LOCATE_GRINGO_OF_TYPE("", &vVar4, 1.0f, 1);
		if (IS_GRINGO_VALID(bVar24))
		{
			if (!DECOR_CHECK_EXIST(GET_OBJECT_FROM_GRINGO(bVar24), "CantUse"))
			{
				if (!IS_OBJECT_VALID(Function_230(bVar24, "UseCase1")))
				{
					DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(bVar24), "ForceAllowSun", true);
					DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(bVar24), "ForceAllowRain", true);
					SNAP_ACTOR_TO_GRINGO(bVar0, GET_OBJECT_FROM_GRINGO(bVar24), "UseCase1", 1, 0, 0);
					TASK_PRIORITY_SET(bVar0, 2);
					TASK_USE_GRINGO(bVar0, bVar24, "UseCase1", 4294967295, 1);
					DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(bVar24), "CantUse", true);
				}
			}
		}
		else
		{
			TASK_PRIORITY_SET(bVar0, 2);
			TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
		}
	}
	else if (bParam3)
	{
		MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
		TASK_PRIORITY_SET(bVar0, 1);
		TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, bVar0, &vVar4, -1.0f);
	}
	Function_231(bVar0, 20.0f, 1.0f, 1.0f);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bVar0, 0.75f);
	MEMORY_CONSIDER_AS(bVar0, Global_34573, 5);
	SET_FACTION_STATUS_TO_INDIVIDUAL_ACTOR(32, bVar0, 4);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(bVar0, 2);
	if (bParam3)
	{
		if (DECOR_CHECK_EXIST(bVar1, "Core"))
		{
			iParam1->f_168 = bVar0;
		}
		else if (Global_13172[iParam1->f_36411].f_32 < 0.0f)
		{
			Global_13172[iParam1->f_36411].f_32 = (Global_13172[iParam1->f_36411].f_32 - 1.0f);
			DECOR_SET_BOOL(bVar0, "PreSaved", true);
		}
	}
	else
	{
		SET_PLAYER_CAUSE_WEAPON_REACTION_COMBAT(Global_34573, 1);
	}
}

var Function_230(bool bParam0, bool bParam1) //Position: 0xC69E / 50846
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(bParam0, bParam1);
}

void Function_231(bool bParam0, float fParam1, float fParam2, float fParam3) //Position: 0xC6AB / 50859
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (fParam2 == -1.0f || fParam3 == -1.0f)
			{
				COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, fParam2, fParam3);
			}
			COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, fParam1);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0.0f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, 0.0f);
		}
	}
}

void Function_232(bool bParam0, bool bParam1) //Position: 0xC6F2 / 50930
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_PREDICATE_OVERRIDE_CLEAR(bParam0, Global_26137[7]);
		AI_PREDICATE_OVERRIDE_CLEAR(bParam0, Global_26137[5]);
	}
	else
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(bParam0, Global_26137[7], 0);
		AI_PREDICATE_OVERRIDE_SET_BOOL(bParam0, Global_26137[5], 0);
	}
	return;
}

void Function_233(bool bParam0, bool bParam1) //Position: 0xC738 / 51000
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_PREDICATE_OVERRIDE_CLEAR(bParam0, Global_26137[0]);
	}
	else
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(bParam0, Global_26137[0], 0);
	}
	return;
}

bool Function_234(var uParam0, int iParam1) //Position: 0xC767 / 51047
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_235(bool bParam0, int iParam1) //Position: 0xC783 / 51075
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3[4];
	bool bVar8;
	
	bVar0 = CREATE_OBJECT_ITERATOR(bParam0);
	ITERATE_ON_OBJECT_TYPE(bVar0, 2);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	iVar2 = 0;
	while (IS_OBJECT_VALID(bVar1))
	{
		bVar8 = GET_OBJECT_NAME(bVar1);
		if (Function_27(iParam1))
		{
			if (STRING_CONTAINS_STRING(bVar8, "_def"))
			{
				iVar3[iVar2] = GET_OBJECTSET_FROM_OBJECT(bVar1);
				iVar2++;
			}
		}
		else if (STRING_CONTAINS_STRING(bVar8, "_safe"))
		{
			iVar3[iVar2] = GET_OBJECTSET_FROM_OBJECT(bVar1);
			iVar2++;
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
	return iVar3[(RAND_INT_RANGE(false, 100000) % iVar2)];
}

struct<32> Function_236(bool bParam0) //Position: 0xC827 / 51239
{
	char* cVar0[32];
	char* cVar8[16];
	
	if (!IS_STRING_VALID(cParam0))
	{
	}
	else
	{
		Global_6280 = (Global_6280 % 10000);
		strcpy(&cVar8, I2STR(Global_6280), 16);
		while (STRING_LENGTH(&cVar8) <= 4)
		{
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_237("0", &cVar8, ""), 4);
		}
		if (IS_STRING_VALID(&cVar8))
		{
			strcpy(&cVar0, bParam0, 32);
			stradd(&cVar0, &cVar8, 32);
			Global_6280++;
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_237(char* cParam0, char* cParam1, char* cParam2) //Position: 0xC891 / 51345
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_238() //Position: 0xC8B0 / 51376
{
	bLocal_659 = CREATE_LAYOUT("Pik_bridge_layout");
	if (IS_LAYOUTREF_VALID(bLocal_659))
	{
		bLocal_663[0] = CREATE_PROP_IN_LAYOUT(bLocal_659, "Pikes_RopeBridge1", "$/fragments/p_gen_testBridge01x", vLocal_709, 0.0f, 17.0f, 0.0f, 1);
		if (IS_OBJECT_VALID(bLocal_663[0]))
		{
			iLocal_667[0] = GET_PHYSINST_FROM_OBJECT(bLocal_663[0]);
			if (IS_PS3())
			{
				SET_PHYSINST_FROZEN(iLocal_667[0], 1);
				SET_OBJECT_COLLIDE_WITH_WORLD(bLocal_663[0], 0);
			}
			else
			{
				SET_PHYSINST_FROZEN(iLocal_667[0], 0);
				SET_OBJECT_COLLIDE_WITH_WORLD(bLocal_663[0], 0);
			}
			uLocal_678[0] = ATTACH_PHYSINST_TO_WORLD2_HIGH_QUALITY(iLocal_667[0], "boardJoint09", &vLocal_697, &vLocal_718, 0.0f);
			uLocal_678[1] = ATTACH_PHYSINST_TO_WORLD2_HIGH_QUALITY(iLocal_667[0], "boardJoint09", &vLocal_700, &vLocal_721, 0.0f);
			uLocal_678[2] = ATTACH_PHYSINST_TO_WORLD2_HIGH_QUALITY(iLocal_667[0], "boardJoint18", &vLocal_703, &vLocal_724, 0.0f);
			uLocal_678[3] = ATTACH_PHYSINST_TO_WORLD2_HIGH_QUALITY(iLocal_667[0], "boardJoint18", &vLocal_706, &vLocal_727, 0.0f);
			SET_PROP_AI_OBSTACLE_ENABLED(bLocal_663[0], 0);
			if (!IS_PS3())
			{
				SET_BRIDGE_STIFFNESS(iLocal_667[0], 0.9f);
				SET_SLEEP_TOLERANCE(iLocal_667[0], 0.0f);
			}
			uLocal_671[0] = CREATE_ROPE_FOR_BRIDGE_LEFT(bLocal_659, "nRopeName1", iLocal_667[0]);
			uLocal_671[1] = CREATE_ROPE_FOR_BRIDGE_RIGHT(bLocal_659, "nRopeName2", iLocal_667[0]);
		}
		bLocal_663[1] = CREATE_PROP_IN_LAYOUT(bLocal_659, "Pikes_RopeBridge2", "$/fragments/p_gen_testBridge01x", vLocal_712, -3.683f, -115.073f, 0.0f, 1);
		if (IS_OBJECT_VALID(bLocal_663[1]))
		{
			iLocal_667[1] = GET_PHYSINST_FROM_OBJECT(bLocal_663[1]);
			if (IS_PS3())
			{
				SET_PHYSINST_FROZEN(iLocal_667[1], 1);
				SET_OBJECT_COLLIDE_WITH_WORLD(bLocal_663[1], 0);
			}
			else
			{
				SET_PHYSINST_FROZEN(iLocal_667[1], 0);
				SET_OBJECT_COLLIDE_WITH_WORLD(bLocal_663[1], 0);
			}
			GET_OBJECT_RELATIVE_OFFSET(bLocal_663[0], vLocal_718, &vLocal_691);
			GET_OBJECT_RELATIVE_POSITION(bLocal_663[1], vLocal_691, &uLocal_694);
			uLocal_678[4] = ATTACH_PHYSINST_TO_WORLD2_HIGH_QUALITY(iLocal_667[1], "boardJoint09", &vLocal_697, &uLocal_694, 0.0f);
			GET_OBJECT_RELATIVE_OFFSET(bLocal_663[0], vLocal_721, &vLocal_691);
			GET_OBJECT_RELATIVE_POSITION(bLocal_663[1], vLocal_691, &uLocal_694);
			uLocal_678[5] = ATTACH_PHYSINST_TO_WORLD2_HIGH_QUALITY(iLocal_667[1], "boardJoint09", &vLocal_700, &uLocal_694, 0.0f);
			GET_OBJECT_RELATIVE_OFFSET(bLocal_663[0], vLocal_724, &vLocal_691);
			GET_OBJECT_RELATIVE_POSITION(bLocal_663[1], vLocal_691, &uLocal_694);
			uLocal_678[6] = ATTACH_PHYSINST_TO_WORLD2_HIGH_QUALITY(iLocal_667[1], "boardJoint18", &vLocal_703, &uLocal_694, 0.0f);
			GET_OBJECT_RELATIVE_OFFSET(bLocal_663[0], vLocal_727, &vLocal_691);
			GET_OBJECT_RELATIVE_POSITION(bLocal_663[1], vLocal_691, &uLocal_694);
			uLocal_678[7] = ATTACH_PHYSINST_TO_WORLD2_HIGH_QUALITY(iLocal_667[1], "boardJoint18", &vLocal_706, &uLocal_694, 0.0f);
			SET_PROP_AI_OBSTACLE_ENABLED(bLocal_663[1], 0);
			if (!IS_PS3())
			{
				SET_BRIDGE_STIFFNESS(iLocal_667[1], 0.9f);
				SET_SLEEP_TOLERANCE(iLocal_667[1], 0.0f);
			}
			uLocal_671[2] = CREATE_ROPE_FOR_BRIDGE_LEFT(bLocal_659, "nRopeName3", iLocal_667[1]);
			uLocal_671[3] = CREATE_ROPE_FOR_BRIDGE_RIGHT(bLocal_659, "nRopeName4", iLocal_667[1]);
		}
		bLocal_663[2] = CREATE_PROP_IN_LAYOUT(bLocal_659, "Pikes_RopeBridge3", "$/fragments/p_gen_testBridge01x", vLocal_715, -0.043f, -13.408f, 0.0f, 1);
		if (IS_OBJECT_VALID(bLocal_663[2]))
		{
			iLocal_667[2] = GET_PHYSINST_FROM_OBJECT(bLocal_663[2]);
			if (IS_PS3())
			{
				SET_PHYSINST_FROZEN(iLocal_667[2], 1);
				SET_OBJECT_COLLIDE_WITH_WORLD(bLocal_663[2], 0);
			}
			else
			{
				SET_PHYSINST_FROZEN(iLocal_667[2], 0);
				SET_OBJECT_COLLIDE_WITH_WORLD(bLocal_663[2], 0);
			}
			GET_OBJECT_RELATIVE_OFFSET(bLocal_663[0], vLocal_718, &vLocal_691);
			GET_OBJECT_RELATIVE_POSITION(bLocal_663[2], vLocal_691, &uLocal_694);
			uLocal_678[8] = ATTACH_PHYSINST_TO_WORLD2_HIGH_QUALITY(iLocal_667[2], "boardJoint09", &vLocal_697, &uLocal_694, 0.0f);
			GET_OBJECT_RELATIVE_OFFSET(bLocal_663[0], vLocal_721, &vLocal_691);
			GET_OBJECT_RELATIVE_POSITION(bLocal_663[2], vLocal_691, &uLocal_694);
			uLocal_678[9] = ATTACH_PHYSINST_TO_WORLD2_HIGH_QUALITY(iLocal_667[2], "boardJoint09", &vLocal_700, &uLocal_694, 0.0f);
			GET_OBJECT_RELATIVE_OFFSET(bLocal_663[0], vLocal_724, &vLocal_691);
			GET_OBJECT_RELATIVE_POSITION(bLocal_663[2], vLocal_691, &uLocal_694);
			uLocal_678[10] = ATTACH_PHYSINST_TO_WORLD2_HIGH_QUALITY(iLocal_667[2], "boardJoint18", &vLocal_703, &uLocal_694, 0.0f);
			GET_OBJECT_RELATIVE_OFFSET(bLocal_663[0], vLocal_727, &vLocal_691);
			GET_OBJECT_RELATIVE_POSITION(bLocal_663[2], vLocal_691, &uLocal_694);
			uLocal_678[11] = ATTACH_PHYSINST_TO_WORLD2_HIGH_QUALITY(iLocal_667[2], "boardJoint18", &vLocal_706, &uLocal_694, 0.0f);
			SET_PROP_AI_OBSTACLE_ENABLED(bLocal_663[2], 0);
			if (!IS_PS3())
			{
				SET_BRIDGE_STIFFNESS(iLocal_667[2], 0.9f);
				SET_SLEEP_TOLERANCE(iLocal_667[2], 0.0f);
			}
			uLocal_671[4] = CREATE_ROPE_FOR_BRIDGE_LEFT(bLocal_659, "nRopeName5", iLocal_667[2]);
			uLocal_671[5] = CREATE_ROPE_FOR_BRIDGE_RIGHT(bLocal_659, "nRopeName6", iLocal_667[2]);
		}
		Function_239(&uLocal_660);
	}
	return;
}

void Function_239(int iParam0) //Position: 0xCED6 / 52950
{
	Function_240(iParam0, 0.0f);
	return;
}

void Function_240(var uParam0, float fParam1) //Position: 0xCEE2 / 52962
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_197(uParam0, 1);
	Function_44(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

bool Function_241(int iParam0) //Position: 0xCF03 / 52995
{
	if (Function_29(iParam0->f_356, 16))
	{
		return 1;
	}
	return Function_164(iParam0 + 192);
}

int Function_242(int iParam0) //Position: 0xCF22 / 53026
{
	if (!Function_9(iParam0))
	{
		return 1;
	}
	return Function_222(&(Global_29008[iParam0]), 4);
}

int Function_243() //Position: 0xCF3E / 53054
{
	return Function_164(&iLocal_654);
}

void Function_244(bool bParam0) //Position: 0xCF4A / 53066
{
	Function_245(&bLocal_643, bLocal_7, "placement03", 1, &Global_29155[bParam010] + 20, 1, 0, 0, 0);
	Function_245(&bLocal_643, bLocal_7, "placement03", 2, &Global_29155[bParam010] + 20, 1, 0, 0, 0);
	return;
}

var Function_245(var uParam0, bool bParam1, bool bParam2, int iParam3, char* cParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0xCF9A / 53146
{
	int iVar0;
	char* cVar1[32];
	char* cVar9[8];
	bool bVar11;
	
	iVar0 = Function_246(uParam0);
	if (iVar0 <= 0)
	{
		return 4294967295;
	}
	strcpy(&cVar1, cParam4, 32);
	stradd(&cVar1, "_", 32);
	stradd(&cVar1, bParam2, 32);
	stradd(&cVar1, "*", 32);
	strcpy(&cVar9, "door", 8);
	if (iParam3 <= 10)
	{
		stradd(&cVar9, "0", 8);
	}
	straddi(&cVar9, iParam3, 8);
	bVar11 = GET_WORLD_SECTOR_CHILD_OBJECT(bParam1, &cVar1, &cVar9);
	if (!IS_DOOR_VALID(GET_DOOR_FROM_OBJECT(bVar11)))
	{
		return 4294967295;
	}
	(*uParam0)[iVar05] = GET_DOOR_FROM_OBJECT(bVar11);
	if (bParam5)
	{
		Function_48(uParam0[iVar05], 1);
	}
	else
	{
		OPEN_DOOR_DIRECTION_FAST((*uParam0)[iVar05], 1);
	}
	Function_48(uParam0[iVar05], 4096);
	uParam0[iVar05]->f_12 = bParam6;
	if (bParam7)
	{
		Function_48(uParam0[iVar05], 16384);
	}
	if (bParam8)
	{
		Function_48(uParam0[iVar05], 32768);
	}
	if (IS_OBJECT_VALID(bParam6))
	{
		DECOR_SET_OBJECT(bVar11, "roomvol", bParam6);
	}
	return iVar0;
}

var Function_246(int iParam0) //Position: 0xD086 / 53382
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		if (!IS_DOOR_VALID((*iParam0)[iVar05]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void Function_247() //Position: 0xD0B4 / 53428
{
	Function_248(&uLocal_8, &uLocal_639, 4, Local_341.f_92, 4294967295, 4);
	return;
}

void Function_248(var uParam0, var uParam1, int iParam2, bool bParam3, var uParam4, bool bParam5) //Position: 0xD0CA / 53450
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

void Function_249(int iParam0) //Position: 0xD1A5 / 53669
{
	*iParam0 = 0;
	iParam0->f_4 = 0;
	return;
}

void Function_250(int iParam0, bool bParam1) //Position: 0xD1B4 / 53684
{
	bool bVar0;
	bool bVar1;
	
	if (Function_29(iParam0->f_356, 16))
	{
		return;
	}
	bVar0 = CREATE_OBJECT_ITERATOR(bParam1);
	ITERATE_ON_OBJECT_TYPE(bVar0, 9);
	ITERATE_ON_PARTIAL_NAME(bVar0, "MoveRestrict");
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		if (!DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(GET_VOLUME_FROM_OBJECT(bVar1)))
		{
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(GET_VOLUME_FROM_OBJECT(bVar1));
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

void Function_251(int iParam0, bool bParam1, bool bParam2) //Position: 0xD21C / 53788
{
	bool bVar0;
	bool bVar1;
	
	if (Function_29(iParam0->f_356, 16))
	{
		return;
	}
	bVar0 = CREATE_OBJECT_ITERATOR(bParam1);
	ITERATE_ON_OBJECT_TYPE(bVar0, 9);
	ITERATE_ON_PARTIAL_NAME(bVar0, "SpawnRestrict");
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(GET_VOLUME_FROM_OBJECT(bVar1)))
		{
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(GET_VOLUME_FROM_OBJECT(bVar1));
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	if (!Function_27(bParam2))
	{
		if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(StackVal))
		{
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(StackVal);
		}
	}
	return;
}

var Function_252() //Position: 0xD2AA / 53930
{
	return Local_108;
}

void Function_253(int iParam0) //Position: 0xD2B2 / 53938
{
	bLocal_7 = Function_254(Local_108, "pikesbasin", iParam0);
	return;
}

var Function_254(bool bParam0, bool bParam1, int iParam2) //Position: 0xD2CE / 53966
{
	Global_29155[iParam210].f_32 = CREATE_WORLD_SECTOR(bParam0, bParam1);
	return Global_29155[iParam210].f_32;
}

bool Function_255() //Position: 0xD2ED / 53997
{
	return Function_256();
}

int Function_256() //Position: 0xD2F6 / 54006
{
	var uVar0;
	
	Function_257(3, 3);
	uVar0 = uVar0;
	Local_341 = FIND_NAMED_LAYOUT("PikesBasin_layout");
	if (!IS_LAYOUTREF_VALID(Local_341))
	{
		Local_341 = CREATE_LAYOUT("PikesBasin_layout");
	}
	Local_341.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_341, "pikv_mainCamp", 3, -1184.0f, 71.15549f, 2368.0f, 0.0f, 20.0f, 0.0f, 61.2633f, 7.055838f, 61.2633f);
	Local_341.f_8 = CREATE_VOLUME_IN_LAYOUT(Local_341, "pikv_frontCamp", 2, -1492f, 77.30194f, 2284.0f, 0.0f, -37.00174f, 0.0f, 27.16722f, 9.528339f, 49.98577f);
	Local_341.f_12 = CREATE_VOLUME_IN_LAYOUT(Local_341, "pikv_rearCamp", 2, -1241.257f, 75.29413f, 2524.0f, 0.0f, -52.11494f, 0.0f, 21.11902f, 10.19565f, 24.55204f);
	Local_341.f_16 = CREATE_VOLUME_IN_LAYOUT(Local_341, "pikv_frontEntrance", 2, -1570.658f, 54.21176f, 2445.341f, 0.0f, -24.31298f, 0.0f, 126.147f, 50.54607f, 32.83506f);
	Local_341.f_20 = CREATE_VOLUME_IN_LAYOUT(Local_341, "pikv_sideEntrance", 2, -1417.649f, 75.29407f, 2216.0f, 0.0f, -25.64609f, 0.0f, 92.22437f, 22.64749f, 59.08257f);
	Local_341.f_24 = CREATE_VOLUME_IN_LAYOUT(Local_341, "pikv_rearEntrance", 2, -1248f, 76.17362f, 2200.42f, 0.0f, 0.0f, 0.0f, 147.181f, 40.22329f, 74.5377f);
	Local_341.f_28 = CREATE_VOLUME_IN_LAYOUT(Local_341, "npikv_cows", 3, -1160.0f, 76.90833f, 2364.0f, 0.0f, 25.87671f, 0.0f, 10.6484f, 9.548534f, 22.79478f);
	Local_341.f_32 = CREATE_VOLUME_IN_LAYOUT(Local_341, "pikv_herd1", 3, -1265.924f, 73.36777f, 2374.241f, 0.0f, 20.0f, 0.0f, 11.28927f, 2.855856f, 13.91433f);
	Local_341.f_36 = CREATE_VOLUME_IN_LAYOUT(Local_341, "pikv_herd2S", 3, -1268f, 70.62715f, 2511.641f, 0.0f, 20.0f, 0.0f, 12.27347f, 5.03131f, 9.814897f);
	Local_341.f_40 = CREATE_VOLUME_IN_LAYOUT(Local_341, "pikv_herd3S", 3, -1318.041f, 73.24526f, 2464.0f, 0.0f, 20.0f, 0.0f, 8.607511f, 4.165802f, 8.607511f);
	Local_341.f_44 = CREATE_VOLUME_IN_LAYOUT(Local_341, "pikv_herd4S", 3, -1410.058f, 69.50085f, 2465.489f, 0.0f, 20.0f, 0.0f, 12.0182f, 4.372542f, 12.0182f);
	Local_341.f_48 = CREATE_VOLUME_IN_LAYOUT(Local_341, "pikv_herd5S", 3, -1636.0f, 54.85595f, 2404.0f, 0.0f, 20.0f, 0.0f, 10.92976f, 5.245457f, 10.92976f);
	Local_341.f_52 = CREATE_VOLUME_IN_LAYOUT(Local_341, "pikv_herd2W", 3, -1304.484f, 75.64933f, 2296.606f, 0.0f, 20.0f, 0.0f, 11.79411f, 2.40899f, 11.79411f);
	Local_341.f_56 = CREATE_VOLUME_IN_LAYOUT(Local_341, "pikv_herd3W", 3, -1275.885f, 81.60573f, 2210.959f, 0.0f, 20.0f, 0.0f, 12.31625f, 4.221325f, 12.31625f);
	Local_341.f_60 = CREATE_VOLUME_IN_LAYOUT(Local_341, "pikv_herd4W", 3, -1263.512f, 81.56133f, 2130.4f, 0.0f, 20.0f, 0.0f, 13.93741f, 3.112746f, 13.93741f);
	Local_341.f_64 = CREATE_VOLUME_IN_LAYOUT(Local_341, "pikv_herd5W", 3, -1188.0f, 100.8656f, 2108.0f, 0.0f, 20.0f, 0.0f, 12.09849f, 3.426718f, 12.82152f);
	Local_341.f_92 = CREATE_VOLUME_SET_IN_LAYOUT(Local_341, "pikv_region_set");
	(*&Local_341 + 68)[0] = CREATE_VOLUME_IN_LAYOUT(Local_341, "pikv_regionPt1", 3, -1182.797f, 105.4117f, 2383.503f, 0.0f, 4.525908f, 0.0f, 181.1545f, 42.2145f, 155.4394f);
	ADD_TO_VOLUME_SET(Local_341.f_92, (*&Local_341 + 68)[0]);
	(*&Local_341 + 68)[1] = CREATE_VOLUME_IN_LAYOUT(Local_341, "pikv_regionPt2", 3, -1336f, 99.38818f, 2388f, 0.0f, 28.38053f, 0.0f, 136.5411f, 45.0608f, 242.5775f);
	ADD_TO_VOLUME_SET(Local_341.f_92, (*&Local_341 + 68)[1]);
	(*&Local_341 + 68)[2] = CREATE_VOLUME_IN_LAYOUT(Local_341, "pikv_regionPt3", 3, -1467.26f, 107.4196f, 2289.159f, 0.0f, 2.208116f, 0.0f, 89.98856f, 43.74128f, 130.7533f);
	ADD_TO_VOLUME_SET(Local_341.f_92, (*&Local_341 + 68)[2]);
	(*&Local_341 + 68)[3] = CREATE_VOLUME_IN_LAYOUT(Local_341, "pikv_regionPt4", 3, -1446.288f, 98.41412f, 2432.0f, 0.0f, -0.662532f, 0.0f, 176.8189f, 50.68403f, 135.3661f);
	ADD_TO_VOLUME_SET(Local_341.f_92, (*&Local_341 + 68)[3]);
	(*&Local_341 + 68)[4] = CREATE_VOLUME_IN_LAYOUT(Local_341, "pikv_regionPt5", 3, -1255.571f, 96.37646f, 2195.486f, 0.0f, -19.92404f, 0.0f, 112.7595f, 38.20158f, 127.4607f);
	ADD_TO_VOLUME_SET(Local_341.f_92, (*&Local_341 + 68)[4]);
	Local_341.f_96 = CREATE_VOLUME_IN_LAYOUT(Local_341, "pikv_sniperVol1", 2, -1431.687f, 68.26666f, 2337.229f, 0.0f, 0.0f, 0.0f, 32.56687f, 32.56687f, 32.56687f);
	Local_341.f_100 = CREATE_VOLUME_IN_LAYOUT(Local_341, "pikv_sniperVol2", 2, -1334.333f, 72.19832f, 2438.873f, 0.0f, 0.0f, 0.0f, 24.7137f, 24.7137f, 24.7137f);
	Local_341.f_104 = CREATE_VOLUME_IN_LAYOUT(Local_341, "pikv_sniperVol4", 2, -1266.286f, 71.27841f, 2370.665f, 0.0f, 0.0f, 0.0f, 29.27202f, 29.27202f, 29.27202f);
	Local_341.f_108 = CREATE_VOLUME_IN_LAYOUT(Local_341, "pikv_sniperVol6", 2, -1272.0f, 80.31372f, 2232.0f, 0.0f, 0.0f, 0.0f, 21.62363f, 21.62363f, 21.62363f);
	Local_341.f_112 = CREATE_VOLUME_IN_LAYOUT(Local_341, "pikv_birdVol", 2, -1366.694f, 98.38428f, 2321.545f, 0.0f, 0.0f, 0.0f, 554.1157f, 129.9182f, 506.1577f);
	Local_341.f_116 = CREATE_VOLUME_IN_LAYOUT(Local_341, "pik_null", 2, -1377.36f, 80.7264f, 2325.321f, 0.0f, 0.0f, 0.0f, 490.557f, 25.34851f, 466.9521f);
	Local_341.f_120 = CREATE_VOLUME_IN_LAYOUT(Local_341, "v_HerdStayInVolume", 2, -1165.223f, 76.64006f, 2358.879f, 0.0f, 28.2909f, 0.0f, 12.31165f, 12.31165f, 12.31165f);
	Local_341.f_124 = CREATE_VOLUME_IN_LAYOUT(Local_341, "pikv_zombies", 3, -1303.629f, -19.74027f, 2323.035f, 0.0f, 20.0f, 0.0f, 224.897f, 85.54479f, 224.897f);
	*(&Local_341 + 128) = { -1164.0f, 76.39863f, 2362.823f };
	*(&Local_341 + 128 + 12) = { 0.0f, 178.5656f, 0.0f };
	Local_341.f_152 = CREATE_POINT_IN_LAYOUT(Local_341, "pikf_cattle01", -1164.0f, 76.39863f, 2362.823f, 0.0f, 178.5656f, 0.0f);
	*(&Local_341 + 156) = { -1164.0f, 77.30194f, 2356.0f };
	*(&Local_341 + 156 + 12) = { 0.0f, -44.54999f, 0.0f };
	Local_341.f_180 = CREATE_POINT_IN_LAYOUT(Local_341, "pikf_cattle02", -1164.0f, 77.30194f, 2356.0f, 0.0f, -44.54999f, 0.0f);
	*(&Local_341 + 184) = { -1169.238f, 76.29799f, 2360f };
	*(&Local_341 + 184 + 12) = { 0.0f, 175.6531f, 0.0f };
	Local_341.f_208 = CREATE_POINT_IN_LAYOUT(Local_341, "pikf_cattle03", -1169.238f, 76.29799f, 2360f, 0.0f, 175.6531f, 0.0f);
	*(&Local_341 + 212) = { -1168.0f, 76.29803f, 2356.0f };
	*(&Local_341 + 212 + 12) = { 0.0f, 102.0492f, 0.0f };
	Local_341.f_236 = CREATE_POINT_IN_LAYOUT(Local_341, "pikf_cattle04", -1168.0f, 76.29803f, 2356.0f, 0.0f, 102.0492f, 0.0f);
	*(&Local_341 + 240) = { -1160.564f, 77.20857f, 2360f };
	*(&Local_341 + 240 + 12) = { 0.0f, -75.61409f, 0.0f };
	Local_341.f_264 = CREATE_POINT_IN_LAYOUT(Local_341, "pikf_cattle05", -1160.564f, 77.20857f, 2360f, 0.0f, -75.61409f, 0.0f);
	*(&Local_341 + 268) = { -1470.589f, 72.28235f, 2449.371f };
	*(&Local_341 + 268 + 12) = { 0.0f, 117.6616f, 0.0f };
	Local_341.f_292 = CREATE_POINT_IN_LAYOUT(Local_341, "pikf_frontSniperspawn1", -1470.589f, 72.28235f, 2449.371f, 0.0f, 117.6616f, 0.0f);
	*(&Local_341 + 296) = { -1440.0f, 73.28625f, 2432f };
	*(&Local_341 + 296 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_341.f_320 = CREATE_POINT_IN_LAYOUT(Local_341, "pikf_frontSniperspawn2", -1440.0f, 73.28625f, 2432f, 0.0f, 0.0f, 0.0f);
	*(&Local_341 + 324) = { -1244.0f, 75.29413f, 2524.0f };
	*(&Local_341 + 324 + 12) = { 0.0f, 102.8329f, 0.0f };
	Local_341.f_348 = CREATE_POINT_IN_LAYOUT(Local_341, "pikf_rearCamp", -1244.0f, 75.29413f, 2524.0f, 0.0f, 102.8329f, 0.0f);
	*(&Local_341 + 352) = { -1204.0f, 75.29407f, 2360f };
	*(&Local_341 + 352 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_341.f_376 = CREATE_POINT_IN_LAYOUT(Local_341, "pikf_mainCamp1", -1204.0f, 75.29407f, 2360f, 0.0f, 0.0f, 0.0f);
	*(&Local_341 + 380) = { -1196f, 75.29413f, 2380.0f };
	*(&Local_341 + 380 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_341.f_404 = CREATE_POINT_IN_LAYOUT(Local_341, "pikf_mainCamp2", -1196f, 75.29413f, 2380.0f, 0.0f, 0.0f, 0.0f);
	*(&Local_341 + 408) = { -1492f, 77.30194f, 2280.0f };
	*(&Local_341 + 408 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_341.f_432 = CREATE_POINT_IN_LAYOUT(Local_341, "pikf_frontCamp", -1492f, 77.30194f, 2280.0f, 0.0f, 0.0f, 0.0f);
	*(&Local_341 + 436) = { -1380f, 96.64539f, 2344.0f };
	*(&Local_341 + 436 + 12) = { 0.0f, 101.6435f, 0.0f };
	Local_341.f_460 = CREATE_POINT_IN_LAYOUT(Local_341, "pikf_Sniperspawn1", -1380f, 96.64539f, 2344.0f, 0.0f, 101.6435f, 0.0f);
	*(&Local_341 + 464) = { -1324.0f, 85.06384f, 2428.0f };
	*(&Local_341 + 464 + 12) = { 0.0f, 118.3112f, 0.0f };
	Local_341.f_488 = CREATE_POINT_IN_LAYOUT(Local_341, "pikf_Sniperspawn2", -1324.0f, 85.06384f, 2428.0f, 0.0f, 118.3112f, 0.0f);
	*(&Local_341 + 492) = { -1302.267f, 81.31763f, 2474.01f };
	*(&Local_341 + 492 + 12) = { 0.0f, 99.85857f, 0.0f };
	Local_341.f_516 = CREATE_POINT_IN_LAYOUT(Local_341, "pikf_Sniperspawn3", -1302.267f, 81.31763f, 2474.01f, 0.0f, 99.85857f, 0.0f);
	*(&Local_341 + 520) = { -1282.357f, 88.5537f, 2347.931f };
	*(&Local_341 + 520 + 12) = { 0.0f, 91.82206f, 0.0f };
	Local_341.f_544 = CREATE_POINT_IN_LAYOUT(Local_341, "pikf_Sniperspawn4", -1282.357f, 88.5537f, 2347.931f, 0.0f, 91.82206f, 0.0f);
	*(&Local_341 + 548) = { -1252.428f, 83.77627f, 2412.293f };
	*(&Local_341 + 548 + 12) = { 0.0f, 119.4369f, 0.0f };
	Local_341.f_572 = CREATE_POINT_IN_LAYOUT(Local_341, "pikf_Sniperspawn5", -1252.428f, 83.77627f, 2412.293f, 0.0f, 119.4369f, 0.0f);
	*(&Local_341 + 576) = { -1282.4f, 86.33722f, 2240.858f };
	*(&Local_341 + 576 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_341.f_600 = CREATE_POINT_IN_LAYOUT(Local_341, "pikf_Sniperspawn6", -1282.4f, 86.33722f, 2240.858f, 0.0f, 0.0f, 0.0f);
	*(&Local_341 + 604) = { -1320.199f, 81.8972f, 2284.0f };
	*(&Local_341 + 604 + 12) = { 5.203292f, -82.78986f, -5.940474f };
	Local_341.f_628 = CREATE_POINT_IN_LAYOUT(Local_341, "pikf_Sniperspawn7", -1320.199f, 81.8972f, 2284.0f, 5.203292f, -82.78986f, -5.940474f);
	*(&Local_341 + 632) = { -1382.168f, 94.86456f, 2380.0f };
	*(&Local_341 + 632 + 12) = { 0.0f, 74.884f, 0.0f };
	Local_341.f_656 = CREATE_POINT_IN_LAYOUT(Local_341, "pikf_Sniperspawn8", -1382.168f, 94.86456f, 2380.0f, 0.0f, 74.884f, 0.0f);
	*(&Local_341 + 660) = { -1288.0f, 86.81006f, 2412.0f };
	*(&Local_341 + 660 + 12) = { 0.0f, 257.211f, 0.0f };
	Local_341.f_684 = CREATE_POINT_IN_LAYOUT(Local_341, "pikf_Sniperspawn9", -1288.0f, 86.81006f, 2412.0f, 0.0f, 257.211f, 0.0f);
	*(&Local_341 + 688) = { -1287.631f, 87.14002f, 2379.814f };
	*(&Local_341 + 688 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_341.f_712 = CREATE_POINT_IN_LAYOUT(Local_341, "pikf_Sniperspawn10", -1287.631f, 87.14002f, 2379.814f, 0.0f, 0.0f, 0.0f);
	*(&Local_341 + 716) = { -1408f, 79.30975f, 2362.761f };
	*(&Local_341 + 716 + 12) = { 0.0f, -170.8678f, 0.0f };
	Local_341.f_740 = CREATE_POINT_IN_LAYOUT(Local_341, "pikf_Sniperspawn11", -1408f, 79.30975f, 2362.761f, 0.0f, -170.8678f, 0.0f);
	*(&Local_341 + 744) = { -1424f, 74.29016f, 2448f };
	*(&Local_341 + 744 + 12) = { 0.0f, 236.357f, 0.0f };
	Local_341.f_768 = CREATE_POINT_IN_LAYOUT(Local_341, "pikf_Sniperspawn12", -1424f, 74.29016f, 2448f, 0.0f, 236.357f, 0.0f);
	*(&Local_341 + 772) = { -1444f, 78.30585f, 2320f };
	*(&Local_341 + 772 + 12) = { 0.0f, -190.7021f, 0.0f };
	Local_341.f_796 = CREATE_POINT_IN_LAYOUT(Local_341, "pikf_Sniperspawn13", -1444f, 78.30585f, 2320f, 0.0f, -190.7021f, 0.0f);
	*(&Local_341 + 800) = { -1420f, 81.31763f, 2232.0f };
	*(&Local_341 + 800 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_341.f_824 = CREATE_POINT_IN_LAYOUT(Local_341, "pikf_Sniperspawn14", -1420f, 81.31763f, 2232.0f, 0.0f, 0.0f, 0.0f);
	*(&Local_341 + 828) = { -1399.862f, 88.07746f, 2328.686f };
	*(&Local_341 + 828 + 12) = { 0.0f, -227.2424f, 0.0f };
	Local_341.f_852 = CREATE_POINT_IN_LAYOUT(Local_341, "pikf_Sniperspawn15", -1399.862f, 88.07746f, 2328.686f, 0.0f, -227.2424f, 0.0f);
	*(&Local_341 + 856) = { -1376.0f, 70.27451f, 2432.0f };
	*(&Local_341 + 856 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_341.f_880 = CREATE_POINT_IN_LAYOUT(Local_341, "pikf_Scout1", -1376.0f, 70.27451f, 2432.0f, 0.0f, 0.0f, 0.0f);
	*(&Local_341 + 884) = { -1472.0f, 69.27057f, 2312.0f };
	*(&Local_341 + 884 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_341.f_908 = CREATE_POINT_IN_LAYOUT(Local_341, "pikf_Scout2", -1472.0f, 69.27057f, 2312.0f, 0.0f, 0.0f, 0.0f);
	*(&Local_341 + 912) = { -1272.0f, 72.28235f, 2372.0f };
	*(&Local_341 + 912 + 12) = { 3.714217f, 109.2532f, 4.755613f };
	Local_341.f_936 = CREATE_POINT_IN_LAYOUT(Local_341, "pikf_Scout3", -1272.0f, 72.28235f, 2372.0f, 3.714217f, 109.2532f, 4.755613f);
	*(&Local_341 + 940) = { -1280f, 80.31372f, 2204.0f };
	*(&Local_341 + 940 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_341.f_964 = CREATE_POINT_IN_LAYOUT(Local_341, "pikf_Scout4", -1280f, 80.31372f, 2204.0f, 0.0f, 0.0f, 0.0f);
	*(&Local_341 + 968) = { -1170.314f, 76.28771f, 2393.455f };
	*(&Local_341 + 968 + 12) = { 0.0f, 136.1637f, 0.0f };
	Local_341.f_992 = CREATE_POINT_IN_LAYOUT(Local_341, "pikf_AreaTreasure1", -1170.314f, 76.28771f, 2393.455f, 0.0f, 136.1637f, 0.0f);
	*(&Local_341 + 996) = { -1214.233f, 75.21385f, 2358.934f };
	*(&Local_341 + 996 + 12) = { 0.0f, 134.4392f, 0.0f };
	Local_341.f_1020 = CREATE_POINT_IN_LAYOUT(Local_341, "pikf_AreaTreasure2", -1214.233f, 75.21385f, 2358.934f, 0.0f, 134.4392f, 0.0f);
	*(&Local_341 + 1024) = { -1204.583f, 74.27067f, 2381.635f };
	*(&Local_341 + 1024 + 12) = { 0.0f, -124.3174f, 0.0f };
	Local_341.f_1048 = CREATE_POINT_IN_LAYOUT(Local_341, "pikf_AreaTreasure3", -1204.583f, 74.27067f, 2381.635f, 0.0f, -124.3174f, 0.0f);
	*(&Local_341 + 1052) = { -1247.636f, 75.40601f, 2532.538f };
	*(&Local_341 + 1052 + 12) = { 0.0f, 1.96077f, 0.0f };
	Local_341.f_1076 = CREATE_POINT_IN_LAYOUT(Local_341, "pikf_AreaTreasure4", -1247.636f, 75.40601f, 2532.538f, 0.0f, 1.96077f, 0.0f);
	*(&Local_341 + 1080) = { -1480f, 77.41215f, 2278.523f };
	*(&Local_341 + 1080 + 12) = { 0.0f, 86.90672f, 0.0f };
	Local_341.f_1104 = CREATE_POINT_IN_LAYOUT(Local_341, "pikf_AreaTreasure5", -1480f, 77.41215f, 2278.523f, 0.0f, 86.90672f, 0.0f);
	*(&Local_341 + 1108) = { -1497.76f, 77.30194f, 2273.28f };
	*(&Local_341 + 1108 + 12) = { 0.0f, -143.879f, 0.0f };
	Local_341.f_1132 = CREATE_POINT_IN_LAYOUT(Local_341, "pikf_AreaTreasure6", -1497.76f, 77.30194f, 2273.28f, 0.0f, -143.879f, 0.0f);
	*(&Local_341 + 1136) = { -1288.94f, 87.34119f, 2400.798f };
	*(&Local_341 + 1136 + 12) = { 0.0f, -98.86528f, 0.0f };
	Local_341.f_1160 = CREATE_POINT_IN_LAYOUT(Local_341, "pikf_AreaTreasure7", -1288.94f, 87.34119f, 2400.798f, 0.0f, -98.86528f, 0.0f);
	*(&Local_341 + 1164) = { -1276.287f, 79.4239f, 2252.277f };
	*(&Local_341 + 1164 + 12) = { 0.0f, -126.1555f, 0.0f };
	Local_341.f_1188 = CREATE_POINT_IN_LAYOUT(Local_341, "pikf_AreaTreasure8", -1276.287f, 79.4239f, 2252.277f, 0.0f, -126.1555f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_341, "pik_vista_cam_pos1", -1223.061f, 105.588f, 2311.86f, -14.74f, 169.15f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_341, "pik_vista_cam_pos2", -1096.285f, 126.602f, 2357.243f, -19.674f, 98.291f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_341, "pik_vista_cam_pos3", -1308.379f, 101.674f, 2264.431f, -11.431f, -175.675f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_341, "pik_vista_cam_pos4", -1326.642f, 88.242f, 2422.063f, -0.569f, 96.323f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_341, "pik_vista_cam_pos5", -1525.44f, 125.757f, 2440.716f, -20.792f, -88.074f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_341, "pik_vista_cam_pos6", -1328.178f, 74.674f, 2446.138f, 10.051f, -159.429f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_341, "pik_vista_cam_pos7", -1321.232f, 72.181f, 2333.797f, 14.204f, -132.402f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_341, "pik_vista_cam_pos8", -1263.093f, 72.458f, 2421.118f, 30.009f, 12.233f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_341, "pik_vista_cam_pos9", -1348.254f, 81.929f, 2449.316f, 4.305f, 64.484f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_341, "pik_vista_cam_pos10", -1350.382f, 72.444f, 2431.035f, 16.02f, 98.856f, 0.0f);
	return 1;
}

void Function_257(int iParam0, int iParam1) //Position: 0xEAB5 / 60085
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

void Function_258(var uParam0, int iParam1) //Position: 0xEAFE / 60158
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_259() //Position: 0xEB0D / 60173
{
	return;
}

bool Function_260() //Position: 0xEB13 / 60179
{
	return 1;
}

void Function_261() //Position: 0xEB1A / 60186
{
	return;
}

bool Function_262() //Position: 0xEB20 / 60192
{
	Function_263();
	return Function_263();
}

struct<8> Function_263() //Position: 0xEB29 / 60201
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	
	Function_257(3, 3);
	uVar0 = uVar0;
	Local_108 = FIND_NAMED_LAYOUT("PikesBasin_layout");
	if (!IS_LAYOUTREF_VALID(Local_108))
	{
		Local_108 = CREATE_LAYOUT("PikesBasin_layout");
	}
	Local_108.f_24 = CREATE_VOLUME_SET_IN_LAYOUT(Local_108, "AlreadyInsideSet_set");
	(*&Local_108 + 4)[0] = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_AreadyIn1", 2, -1139.669f, 85.50198f, 2397.994f, 0.0f, -98.43246f, 0.0f, 72.28513f, 38.93865f, 29.30383f);
	ADD_TO_VOLUME_SET(Local_108.f_24, (*&Local_108 + 4)[0]);
	(*&Local_108 + 4)[1] = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_AlreadyIn2", 2, -1244.81f, 85.29498f, 2113.82f, 0.0f, 0.0f, 0.0f, 55.32957f, 28.01724f, 28.01724f);
	ADD_TO_VOLUME_SET(Local_108.f_24, (*&Local_108 + 4)[1]);
	(*&Local_108 + 4)[2] = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_AlreadyIn3", 2, -1401.132f, 74.07532f, 2244.32f, 0.0f, 46.80381f, 0.0f, 33.13998f, 33.13998f, 59.95037f);
	ADD_TO_VOLUME_SET(Local_108.f_24, (*&Local_108 + 4)[2]);
	(*&Local_108 + 4)[3] = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_alreadyIn4", 2, -1595.619f, 53.96125f, 2437.53f, 0.0f, -37.01864f, 0.0f, 71.20465f, 23.2709f, 23.2709f);
	ADD_TO_VOLUME_SET(Local_108.f_24, (*&Local_108 + 4)[3]);
	Local_108.f_28 = CREATE_VOLUME_IN_LAYOUT(Local_108, "pikv_helperStop", 2, -1178.028f, 76.29803f, 2368.719f, 0.0f, 0.0f, 0.0f, 8.237045f, 8.237045f, 9.253483f);
	Local_108.f_32 = CREATE_VOLUME_IN_LAYOUT(Local_108, "pikv_guardVol", 2, -1175.562f, 76.18143f, 2362.396f, 0.0f, 35.91524f, 0.0f, 11.11741f, 4.474076f, 15.52327f);
	Local_108.f_36 = CREATE_VOLUME_IN_LAYOUT(Local_108, "pikv_bridgesniCyl1", 2, -1280.723f, 87.13815f, 2369.308f, 0.0f, -11.37486f, 0.0f, 6.065359f, 6.065359f, 13.57058f);
	Local_108.f_40 = CREATE_VOLUME_IN_LAYOUT(Local_108, "pikv_bridgesniCyl2", 2, -1266.951f, 85.35784f, 2402.505f, 0.0f, -113.9405f, 0.0f, 4.693594f, 4.693594f, 13.95571f);
	Local_108.f_44 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_slowDown", 2, -1164.005f, 90.71706f, 2327.153f, 0.0f, -23.07202f, 0.0f, 17.27579f, 17.27579f, 24.33576f);
	Local_108.f_48 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_groupIn1", 2, -1253.801f, 80.314f, 2182.282f, 0.0f, -42.79086f, 0.0f, 27.61767f, 18.75238f, 20.04885f);
	Local_108.f_52 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_groupIn2", 2, -1272.0f, 80.31372f, 2236.0f, 0.0f, 0.0f, 0.0f, 21.51628f, 21.51628f, 21.51628f);
	Local_108.f_56 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_groupIn3", 2, -1296.0f, 76.29803f, 2288.0f, 0.0f, 0.0f, 0.0f, 34.95654f, 23.60032f, 23.60032f);
	Local_108.f_60 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_groupIn4", 2, -1311.946f, 70.275f, 2350.613f, 0.0f, 0.0f, 0.0f, 22.63349f, 21.44477f, 21.44477f);
	Local_108.f_64 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_groupIn5", 2, -1278.395f, 72.65167f, 2434.16f, 0.0f, -14.70481f, 0.0f, 31.97156f, 29.29355f, 19.24492f);
	Local_108.f_68 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_groupIn6", 2, -1265.314f, 70.43589f, 2505.984f, 0.0f, 66.77618f, 0.0f, 25.02906f, 14.28399f, 27.45445f);
	Local_108.f_72 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_groupIn7", 2, -1359.338f, 72.322f, 2436.749f, 0.0f, 15.98228f, 0.0f, 160.8902f, 27.50153f, 47.53299f);
	Local_108.f_76 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_groupIn8", 2, -1478.667f, 59.52267f, 2468.32f, 0.0f, 0.0f, 0.0f, 21.0649f, 37.31767f, 30.44314f);
	Local_108.f_80 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_groupIn9", 2, -1425.953f, 62.244f, 2408.26f, 0.0f, 33.54885f, 0.0f, 30.26427f, 23.14559f, 23.14559f);
	Local_108.f_84 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_groupIn10", 2, -1425.721f, 70.275f, 2337.188f, 0.0f, 0.0f, 0.0f, 28.39706f, 28.39706f, 28.39706f);
	Local_108.f_88 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_groupIn11", 2, -1467.874f, 70.374f, 2299.959f, 0.0f, 0.0f, 0.0f, 28.68723f, 28.68723f, 28.68723f);
	Local_108.f_92 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_groupIn12", 2, -1419.859f, 70.52f, 2263.771f, 0.0f, -51.09812f, 0.0f, 38.50616f, 11.87008f, 16.37532f);
	Local_108.f_96 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_ArmGateway", 2, -1625.022f, 53.95382f, 2413.722f, 0.0f, -42.72219f, 0.0f, 9.400867f, 15.05778f, 8.67498f);
	Local_108.f_100 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_introGateway", 2, -1503.814f, 59.72019f, 2460.026f, 0.0f, 0.0f, 0.0f, 2.134621f, 2.697062f, 3.491583f);
	Local_108.f_104 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_helperIntro", 2, -1503.47f, 59.35239f, 2461.05f, 0.0f, 0.0f, 0.0f, 2.652559f, 5.064361f, 2.652559f);
	Local_108.f_108 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_blipMainCampSquad", 2, -1216.7f, 75.29413f, 2370.382f, 0.0f, 0.0f, 0.0f, 168.1334f, 128.6735f, 113.9047f);
	Local_108.f_112 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_BlipSquad8", 2, -1496.443f, 69.0963f, 2452.288f, 0.0f, -4.721901f, 0.0f, 186.1838f, 48.31003f, 75.76049f);
	Local_108.f_116 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_BlipSquad7", 2, -1353.833f, 69.0963f, 2451.325f, 0.0f, -15.48637f, 0.0f, 100.3228f, 48.31003f, 68.34258f);
	Local_108.f_120 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_BlipSquad6", 2, -1281.962f, 69.0963f, 2493.322f, 0.0f, 30.4951f, 0.0f, 113.3849f, 48.31003f, 87.72249f);
	Local_108.f_124 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_BlipSquad5", 2, -1267.796f, 69.0963f, 2439.839f, 0.0f, 87.60785f, 0.0f, 113.3849f, 48.31003f, 48.50608f);
	Local_108.f_128 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_BlipSquad4", 2, -1312.318f, 83.79956f, 2333.569f, 0.0f, 84.99364f, 0.0f, 109.5603f, 48.31003f, 48.86852f);
	Local_108.f_132 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_BlipSquad3", 2, -1288.323f, 83.79956f, 2276.337f, 0.0f, 49.85001f, 0.0f, 112.6867f, 48.31003f, 44.00807f);
	Local_108.f_136 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_BlipSquad2", 2, -1274.505f, 83.79956f, 2235.281f, 0.0f, 74.46017f, 0.0f, 93.29057f, 48.31003f, 70.20873f);
	Local_108.f_140 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_BlipSquad1", 2, -1255.359f, 83.79956f, 2168.172f, 0.0f, 74.46017f, 0.0f, 111.5295f, 48.31003f, 70.20873f);
	Local_108.f_144 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_MainCampStayIn", 2, -1200.78f, 75.54284f, 2368.463f, 0.0f, 0.0f, 0.0f, 37.88311f, 20.66769f, 32.60902f);
	Local_108.f_148 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_VolumeSet01", 3, -1177.527f, 72.63332f, 2369.007f, 0.0f, 2.914154f, 0.0f, 56.80202f, 56.80202f, 56.80202f);
	Local_108.f_152 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_VolumeSet02", 3, -1250.711f, 84.03722f, 2139.524f, 0.0f, 2.914154f, 0.0f, 32.67224f, 32.67224f, 32.67224f);
	Local_108.f_156 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_VolumeSet03", 3, -1408.88f, 80.74612f, 2229.907f, 0.0f, 2.914154f, 0.0f, 23.84316f, 23.84316f, 23.84316f);
	Local_108.f_160 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_VolumeSet04", 3, -1585.562f, 50.80611f, 2438.274f, 0.0f, 2.914154f, 0.0f, 41.29047f, 38.31564f, 41.29047f);
	Local_108.f_164 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_BridgeGuyStayIn", 2, -1267.027f, 85.61971f, 2402.348f, 0.0f, -24.63436f, 0.0f, 8.233026f, 4.08976f, 3.708815f);
	Local_108.f_168 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_excitedReturn", 2, -1490.9f, 59.52267f, 2468.32f, 0.0f, 0.0f, 0.0f, 50.54816f, 60.89615f, 49.67807f);
	Local_108.f_172 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_CheckPlayerHorse", 2, -1504.312f, 59.35239f, 2461.05f, 0.0f, 0.0f, 0.0f, 14.22822f, 15.17736f, 14.60995f);
	*(&Local_108 + 176) = { -1503.966f, 59.05378f, 2461.444f };
	*(&Local_108 + 176 + 12) = { 0.0f, 274.7909f, 0.0f };
	Local_108.f_200 = CREATE_POINT_IN_LAYOUT(Local_108, "pikf_help_front", -1503.966f, 59.05378f, 2461.444f, 0.0f, 274.7909f, 0.0f);
	*(&Local_108 + 204) = { -1608.838f, 53.96173f, 2422.991f };
	*(&Local_108 + 204 + 12) = { 0.0f, -113.2362f, 0.0f };
	Local_108.f_228 = CREATE_POINT_IN_LAYOUT(Local_108, "pikf_teleport", -1608.838f, 53.96173f, 2422.991f, 0.0f, -113.2362f, 0.0f);
	*(&Local_108 + 232) = { -1239.878f, 75.66244f, 2520.361f };
	*(&Local_108 + 232 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_108.f_256 = CREATE_POINT_IN_LAYOUT(Local_108, "nf_camp1_1", -1239.878f, 75.66244f, 2520.361f, 0.0f, 0.0f, 0.0f);
	*(&Local_108 + 260) = { -1240.0f, 75.29407f, 2528f };
	*(&Local_108 + 260 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_108.f_284 = CREATE_POINT_IN_LAYOUT(Local_108, "nf_camp1_2", -1240.0f, 75.29407f, 2528f, 0.0f, 0.0f, 0.0f);
	*(&Local_108 + 288) = { -1496f, 77.30194f, 2284.0f };
	*(&Local_108 + 288 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_108.f_312 = CREATE_POINT_IN_LAYOUT(Local_108, "nf_camp2_1", -1496f, 77.30194f, 2284.0f, 0.0f, 0.0f, 0.0f);
	*(&Local_108 + 316) = { -1492f, 77.30194f, 2284.0f };
	*(&Local_108 + 316 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_108.f_340 = CREATE_POINT_IN_LAYOUT(Local_108, "nf_camp2_2", -1492f, 77.30194f, 2284.0f, 0.0f, 0.0f, 0.0f);
	Local_108.f_344 = CREATE_POINT_IN_LAYOUT(Local_108, "f_group1_1", -1250.268f, 80.21631f, 2185.513f, 0.0f, 60.74244f, 0.0f);
	DECOR_SET_BOOL(Local_108.f_344, "PIK_Canyon", true);
	DECOR_SET_BOOL(Local_108.f_344, "FTE", true);
	Local_108.f_348 = CREATE_POINT_IN_LAYOUT(Local_108, "f_group1_2", -1251.885f, 80.12868f, 2183.575f, 0.0f, 258.1044f, 0.0f);
	DECOR_SET_BOOL(Local_108.f_348, "PIK_Canyon", true);
	DECOR_SET_BOOL(Local_108.f_348, "FTE", true);
	Local_108.f_352 = CREATE_POINT_IN_LAYOUT(Local_108, "f_group1_3", -1253.715f, 80.31372f, 2188.117f, 0.0f, -33.97869f, 0.0f);
	DECOR_SET_BOOL(Local_108.f_352, "PIK_Canyon", true);
	Local_108.f_356 = CREATE_POINT_IN_LAYOUT(Local_108, "f_group2_1", -1268f, 80.31372f, 2240.0f, 0.0f, 7.574362f, 0.0f);
	DECOR_SET_BOOL(Local_108.f_356, "PIK_Canyon", true);
	DECOR_SET_BOOL(Local_108.f_356, "FTE", true);
	Local_108.f_360 = CREATE_POINT_IN_LAYOUT(Local_108, "f_group2_2", -1272.061f, 80.31372f, 2232.837f, 0.0f, -4.182311f, 0.0f);
	DECOR_SET_BOOL(Local_108.f_360, "PIK_Canyon", true);
	DECOR_SET_BOOL(Local_108.f_360, "FTE", true);
	Local_108.f_364 = CREATE_POINT_IN_LAYOUT(Local_108, "f_group2_3", -1274.929f, 79.30981f, 2240.0f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(Local_108.f_364, "PIK_Canyon", true);
	Local_108.f_368 = CREATE_POINT_IN_LAYOUT(Local_108, "f_group3_1", -1290.873f, 76.29803f, 2289.005f, 0.0f, -31.94887f, 0.0f);
	DECOR_SET_BOOL(Local_108.f_368, "PIK_Canyon", true);
	DECOR_SET_BOOL(Local_108.f_368, "FTE", true);
	Local_108.f_372 = CREATE_POINT_IN_LAYOUT(Local_108, "f_group3_2", -1297.173f, 76.29803f, 2285.627f, 0.0f, -39.85867f, 0.0f);
	DECOR_SET_BOOL(Local_108.f_372, "PIK_Canyon", true);
	DECOR_SET_BOOL(Local_108.f_372, "FTE", true);
	Local_108.f_376 = CREATE_POINT_IN_LAYOUT(Local_108, "f_group3_3", -1301.273f, 76.29803f, 2285.453f, 0.0f, 327.0281f, 0.0f);
	DECOR_SET_BOOL(Local_108.f_376, "PIK_Canyon", true);
	Local_108.f_380 = CREATE_POINT_IN_LAYOUT(Local_108, "f_group4_1", -1306.897f, 71.27841f, 2353.559f, 0.0f, 27.44552f, 0.0f);
	DECOR_SET_BOOL(Local_108.f_380, "PIK_Canyon", true);
	DECOR_SET_BOOL(Local_108.f_380, "FTE", true);
	Local_108.f_384 = CREATE_POINT_IN_LAYOUT(Local_108, "f_group4_2", -1323.141f, 71.27841f, 2348.429f, 0.0f, 5.391821f, 0.0f);
	DECOR_SET_BOOL(Local_108.f_384, "PIK_Canyon", true);
	DECOR_SET_BOOL(Local_108.f_384, "FTE", true);
	Local_108.f_388 = CREATE_POINT_IN_LAYOUT(Local_108, "f_group4_3", -1309.483f, 71.27841f, 2354.814f, 0.0f, 41.27657f, 0.0f);
	DECOR_SET_BOOL(Local_108.f_388, "PIK_Canyon", true);
	Local_108.f_392 = CREATE_POINT_IN_LAYOUT(Local_108, "f_group5_1", -1282.078f, 70.32738f, 2433.271f, 0.0f, -198.1902f, 0.0f);
	DECOR_SET_BOOL(Local_108.f_392, "PIK_Canyon", true);
	DECOR_SET_BOOL(Local_108.f_392, "FTE", true);
	Local_108.f_396 = CREATE_POINT_IN_LAYOUT(Local_108, "f_group5_2", -1274.775f, 70.28547f, 2433.839f, -176.5139f, 29.47797f, 182.9077f);
	DECOR_SET_BOOL(Local_108.f_396, "PIK_Canyon", true);
	DECOR_SET_BOOL(Local_108.f_396, "FTE", true);
	Local_108.f_400 = CREATE_POINT_IN_LAYOUT(Local_108, "f_group5_3", -1267.109f, 84.18763f, 2402.51f, 0.0f, -203.9592f, 0.0f);
	DECOR_SET_BOOL(Local_108.f_400, "PIK_Canyon", true);
	DECOR_SET_BOOL(Local_108.f_400, "FTE", true);
	Local_108.f_404 = CREATE_POINT_IN_LAYOUT(Local_108, "f_group6_1", -1267.538f, 69.32523f, 2501.696f, 0.0f, -215.1035f, 0.0f);
	DECOR_SET_BOOL(Local_108.f_404, "PIK_Canyon", true);
	DECOR_SET_BOOL(Local_108.f_404, "FTE", true);
	Local_108.f_408 = CREATE_POINT_IN_LAYOUT(Local_108, "f_group6_2", -1257.553f, 70.05267f, 2500.39f, 0.0f, -198.1204f, 0.0f);
	DECOR_SET_BOOL(Local_108.f_408, "PIK_Canyon", true);
	DECOR_SET_BOOL(Local_108.f_408, "FTE", true);
	Local_108.f_412 = CREATE_POINT_IN_LAYOUT(Local_108, "f_group6_3", -1260.314f, 69.43683f, 2511.771f, 0.0f, 69.9072f, 0.0f);
	DECOR_SET_BOOL(Local_108.f_412, "PIK_Canyon", true);
	Local_108.f_416 = CREATE_POINT_IN_LAYOUT(Local_108, "f_group7_1", -1349.316f, 72.34944f, 2438.939f, 0.0f, -291.7401f, 0.0f);
	DECOR_SET_BOOL(Local_108.f_416, "PIK_Canyon", true);
	DECOR_SET_BOOL(Local_108.f_416, "FTE", true);
	Local_108.f_420 = CREATE_POINT_IN_LAYOUT(Local_108, "f_group7_2", -1333.182f, 73.15293f, 2434.341f, 0.0f, -285.5722f, 0.0f);
	DECOR_SET_BOOL(Local_108.f_420, "PIK_Canyon", true);
	DECOR_SET_BOOL(Local_108.f_420, "FTE", true);
	Local_108.f_424 = CREATE_POINT_IN_LAYOUT(Local_108, "f_group7_3", -1355.373f, 73.04667f, 2426.764f, 0.0f, -272.9511f, 0.0f);
	DECOR_SET_BOOL(Local_108.f_424, "PIK_Canyon", true);
	DECOR_SET_BOOL(Local_108.f_424, "FTE", true);
	Local_108.f_428 = CREATE_POINT_IN_LAYOUT(Local_108, "f_group7_4", -1390.267f, 76.69369f, 2462.469f, 0.0f, -265.598f, 0.0f);
	DECOR_SET_BOOL(Local_108.f_428, "PIK_Canyon", true);
	DECOR_SET_BOOL(Local_108.f_428, "FTE", true);
	Local_108.f_432 = CREATE_POINT_IN_LAYOUT(Local_108, "f_group7_5", -1410.233f, 68.90279f, 2446.952f, 0.0f, -237.4765f, 0.0f);
	DECOR_SET_BOOL(Local_108.f_432, "PIK_Canyon", true);
	DECOR_SET_BOOL(Local_108.f_432, "FTE", true);
	Local_108.f_436 = CREATE_POINT_IN_LAYOUT(Local_108, "f_group8_1", -1471.338f, 60.93575f, 2469.271f, 0.0f, -245.6488f, 0.0f);
	DECOR_SET_BOOL(Local_108.f_436, "PIK_Canyon", true);
	DECOR_SET_BOOL(Local_108.f_436, "FTE", true);
	Local_108.f_440 = CREATE_POINT_IN_LAYOUT(Local_108, "f_group8_2", -1478.161f, 60.18522f, 2476.429f, 0.0f, -268.5379f, 0.0f);
	DECOR_SET_BOOL(Local_108.f_440, "PIK_Canyon", true);
	DECOR_SET_BOOL(Local_108.f_440, "FTE", true);
	Local_108.f_444 = CREATE_POINT_IN_LAYOUT(Local_108, "f_group8_3", -1477.018f, 60.35752f, 2469.042f, 0.0f, -282.0281f, 0.0f);
	DECOR_SET_BOOL(Local_108.f_444, "PIK_Canyon", true);
	DECOR_SET_BOOL(Local_108.f_444, "FTE", true);
	Local_108.f_448 = CREATE_POINT_IN_LAYOUT(Local_108, "f_group9_1", -1432.0f, 64.25095f, 2408.0f, 0.0f, 138.7788f, 0.0f);
	DECOR_SET_BOOL(Local_108.f_448, "PIK_Canyon", true);
	DECOR_SET_BOOL(Local_108.f_448, "FTE", true);
	Local_108.f_452 = CREATE_POINT_IN_LAYOUT(Local_108, "f_group9_2", -1424.0f, 64.25099f, 2412.0f, 0.0f, 126.2359f, 0.0f);
	DECOR_SET_BOOL(Local_108.f_452, "PIK_Canyon", true);
	DECOR_SET_BOOL(Local_108.f_452, "FTE", true);
	Local_108.f_456 = CREATE_POINT_IN_LAYOUT(Local_108, "f_group9_3", -1424.0f, 64.79581f, 2400.0f, 0.0f, -262.6426f, 0.0f);
	DECOR_SET_BOOL(Local_108.f_456, "PIK_Canyon", true);
	Local_108.f_460 = CREATE_POINT_IN_LAYOUT(Local_108, "f_group10_1", -1416f, 70.27448f, 2336f, 0.0f, -219.3174f, 0.0f);
	DECOR_SET_BOOL(Local_108.f_460, "PIK_Canyon", true);
	DECOR_SET_BOOL(Local_108.f_460, "FTE", true);
	Local_108.f_464 = CREATE_POINT_IN_LAYOUT(Local_108, "f_group10_2", -1432f, 70.27446f, 2340.0f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(Local_108.f_464, "PIK_Canyon", true);
	DECOR_SET_BOOL(Local_108.f_464, "FTE", true);
	Local_108.f_468 = CREATE_POINT_IN_LAYOUT(Local_108, "f_group10_3", -1432f, 70.27448f, 2332f, 0.0f, -241.2943f, 0.0f);
	DECOR_SET_BOOL(Local_108.f_468, "PIK_Canyon", true);
	Local_108.f_472 = CREATE_POINT_IN_LAYOUT(Local_108, "f_group11_1", -1464.0f, 70.27451f, 2296.0f, 0.0f, -189.857f, 0.0f);
	DECOR_SET_BOOL(Local_108.f_472, "PIK_Canyon", true);
	DECOR_SET_BOOL(Local_108.f_472, "FTE", true);
	Local_108.f_476 = CREATE_POINT_IN_LAYOUT(Local_108, "f_group11_2", -1480f, 69.27057f, 2308.0f, 0.0f, -34.79613f, 0.0f);
	DECOR_SET_BOOL(Local_108.f_476, "PIK_Canyon", true);
	DECOR_SET_BOOL(Local_108.f_476, "FTE", true);
	Local_108.f_480 = CREATE_POINT_IN_LAYOUT(Local_108, "f_group11_3", -1471.832f, 69.27057f, 2312.0f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(Local_108.f_480, "PIK_Canyon", true);
	Local_108.f_484 = CREATE_POINT_IN_LAYOUT(Local_108, "f_group12_1", -1420.0f, 71.27841f, 2273.024f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(Local_108.f_484, "PIK_Canyon", true);
	DECOR_SET_BOOL(Local_108.f_484, "FTE", true);
	Local_108.f_488 = CREATE_POINT_IN_LAYOUT(Local_108, "f_group12_2", -1424.0f, 71.27841f, 2264f, 0.0f, -83.38127f, 0.0f);
	DECOR_SET_BOOL(Local_108.f_488, "PIK_Canyon", true);
	DECOR_SET_BOOL(Local_108.f_488, "FTE", true);
	Local_108.f_492 = CREATE_POINT_IN_LAYOUT(Local_108, "f_group12_3", -1412.0f, 71.13173f, 2268.177f, 0.0f, 67.39184f, 0.0f);
	DECOR_SET_BOOL(Local_108.f_492, "PIK_Canyon", true);
	*(&Local_108 + 496) = { -1457.178f, 86.87448f, 2310.231f };
	*(&Local_108 + 496 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_108.f_520 = CREATE_POINT_IN_LAYOUT(Local_108, "bridgePin1_2", -1457.178f, 86.87448f, 2310.231f, 0.0f, 0.0f, 0.0f);
	*(&Local_108 + 524) = { -1455.008f, 86.87398f, 2310.237f };
	*(&Local_108 + 524 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_108.f_548 = CREATE_POINT_IN_LAYOUT(Local_108, "bridgePin1_1", -1455.008f, 86.87398f, 2310.237f, 0.0f, 0.0f, 0.0f);
	*(&Local_108 + 552) = { -1454.823f, 86.91029f, 2274.059f };
	*(&Local_108 + 552 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_108.f_576 = CREATE_POINT_IN_LAYOUT(Local_108, "bridgePin1_3", -1454.823f, 86.91029f, 2274.059f, 0.0f, 0.0f, 0.0f);
	*(&Local_108 + 580) = { -1457.144f, 86.91412f, 2274.033f };
	*(&Local_108 + 580 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_108.f_604 = CREATE_POINT_IN_LAYOUT(Local_108, "bridgePin1_4", -1457.144f, 86.91412f, 2274.033f, 0.0f, 0.0f, 0.0f);
	*(&Local_108 + 608) = { -1634.091f, 54.21176f, 2402.574f };
	*(&Local_108 + 608 + 12) = { 0.0f, 52.20312f, 0.0f };
	Local_108.f_632 = CREATE_POINT_IN_LAYOUT(Local_108, "f_playerGoToFlag", -1634.091f, 54.21176f, 2402.574f, 0.0f, 52.20312f, 0.0f);
	*(&Local_108 + 636) = { -1161.776f, 76.63732f, 2364.0f };
	*(&Local_108 + 636 + 12) = { 0.0f, 109.5129f, 0.0f };
	Local_108.f_660 = CREATE_POINT_IN_LAYOUT(Local_108, "f_HerdCreation", -1161.776f, 76.63732f, 2364.0f, 0.0f, 109.5129f, 0.0f);
	*(&Local_108 + 664) = { -1660.24f, 51.9105f, 2392.137f };
	*(&Local_108 + 664 + 12) = { 0.0f, 64.63776f, 0.0f };
	Local_108.f_688 = CREATE_POINT_IN_LAYOUT(Local_108, "f_CowGoToFlag", -1660.24f, 51.9105f, 2392.137f, 0.0f, 64.63776f, 0.0f);
	Local_108.f_692 = CREATE_OBJECTSET_IN_LAYOUT("PIK_AreaChestsSet", Local_108, 8, 0);
	*(&Local_108 + 696[06]) = { -1190.333f, 75.295f, 2379.068f };
	*(&Local_108 + 696[06] + 12) = { 0.0f, 90.0f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_108, "f_PIK_AreaChests01", -1190.333f, 75.295f, 2379.068f, 0.0f, 90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_108.f_692);
	*(&Local_108 + 696[16]) = { -1194.71f, 75.295f, 2361.093f };
	*(&Local_108 + 696[16] + 12) = { 0.0f, 140.6601f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_108, "f_PIK_AreaChests02", -1194.71f, 75.295f, 2361.093f, 0.0f, 140.6601f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_108.f_692);
	*(&Local_108 + 748) = { -1503.75f, 59.10756f, 2460.121f };
	*(&Local_108 + 748 + 12) = { 0.0f, -180.0f, 0.0f };
	Local_108.f_772 = CREATE_POINT_IN_LAYOUT(Local_108, "f_teleportJohnCrouch", -1503.75f, 59.10756f, 2460.121f, 0.0f, -180.0f, 0.0f);
	*(&Local_108 + 776) = { -1503.809f, 59.05842f, 2461.374f };
	*(&Local_108 + 776 + 12) = { 0.0f, -51.92019f, 0.0f };
	Local_108.f_800 = CREATE_POINT_IN_LAYOUT(Local_108, "f_teleportRancherCrouch", -1503.809f, 59.05842f, 2461.374f, 0.0f, -51.92019f, 0.0f);
	*(&Local_108 + 804) = { -1178.068f, 76.29803f, 2369.931f };
	*(&Local_108 + 804 + 12) = { 0.0f, -134.7105f, 0.0f };
	Local_108.f_828 = CREATE_POINT_IN_LAYOUT(Local_108, "f_teleportRancher", -1178.068f, 76.29803f, 2369.931f, 0.0f, -134.7105f, 0.0f);
	*(&Local_108 + 832) = { -1176.856f, 76.29803f, 2371.131f };
	*(&Local_108 + 832 + 12) = { 0.0f, -318.3134f, 0.0f };
	Local_108.f_856 = CREATE_POINT_IN_LAYOUT(Local_108, "f_teleportMarston", -1176.856f, 76.29803f, 2371.131f, 0.0f, -318.3134f, 0.0f);
	Local_108.f_860 = CREATE_POINT_IN_LAYOUT(Local_108, "f_PIK_MAINCAMP1", -1204.0f, 75.29412f, 2363.419f, 0.0f, 97.0135f, 0.0f);
	Local_108.f_864 = CREATE_POINT_IN_LAYOUT(Local_108, "f_PIK_MAINCAMP2", -1192.0f, 75.29413f, 2380.0f, 0.0f, 65.82169f, 0.0f);
	Local_108.f_868 = CREATE_POINT_IN_LAYOUT(Local_108, "f_PIK_MAINCAMP3", -1212.993f, 74.29016f, 2371.007f, 0.0f, 85.32869f, 0.0f);
	Local_108.f_872 = CREATE_POINT_IN_LAYOUT(Local_108, "f_PIK_MAINCAMP4", -1192f, 75.29413f, 2368.0f, 0.0f, 96.14014f, 0.0f);
	Local_108.f_876 = CREATE_POINT_IN_LAYOUT(Local_108, "f_PIK_MAINCAMP5", -1204f, 74.61318f, 2378.142f, 0.0f, 101.9614f, 0.0f);
	Local_108.f_880 = CREATE_POINT_IN_LAYOUT(Local_108, "f_TeleportHorse", -1512.136f, 58.64619f, 2461.237f, 0.0f, -65.3695f, 0.0f);
	Local_108.f_884 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_108, "introCover", -1504.215f, 59.13425f, 2461f, 0.0f, -90.29622f, 0.0f, 4);
	Local_108.f_888 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_108, "cover_low1", -1430.396f, 64.9642f, 2465.819f, 0.0f, -66.76308f, 0.0f, 4);
	Local_108.f_892 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_108, "cover_low1a", -1375.024f, 70.46259f, 2438.6f, 0.0f, -73.59174f, 0.0f, 4);
	Local_108.f_896 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_108, "cover_low2", -1281.78f, 68.36338f, 2523.242f, 0.0f, -74.8913f, 0.0f, 4);
	Local_108.f_900 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_108, "cover_low3", -1287.685f, 70.39079f, 2458.864f, 0.0f, -24.91617f, 0.0f, 4);
	Local_108.f_904 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_108, "cover_low4", -1241.877f, 73.56133f, 2375.054f, 0.0f, -89.48199f, 0.0f, 4);
	Local_108.f_908 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_108, "cover_low5", -1216.463f, 74.29016f, 2369.405f, 0.0f, -449.8068f, 0.0f, 4);
	Local_108.f_912 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_108, "cover_low6", -1306.166f, 73.15712f, 2323.85f, 0.0f, -363.3798f, 0.0f, 4);
	Local_108.f_916 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_108, "cover_low7", -1276.516f, 77.5472f, 2281.081f, 0.0f, -373.7749f, 0.0f, 4);
	Local_108.f_920 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_108, "cover_low8", -1262.99f, 80.40509f, 2211.63f, 0.0f, -381.7527f, 0.0f, 4);
}

var Function_264(var uParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x11247 / 70215
{
	int iVar0;
	
	uParam2 = uParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_5(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_167(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_167(uParam0[iVar03], 8);
			}
			return iVar0;
		}
		if (iParam1 == (*uParam0)[iVar03])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

int Function_265(int iParam0) //Position: 0x11317 / 70423
{
	if ((iParam0 != Global_30668[2] || iParam0 != Global_30658[4]) || iParam0 != Global_30658[2])
	{
		return 0;
	}
	if ((iParam0 != Global_30685[0] && (!Function_269(&Global_3422[340] + 128, 2) || Global_3380)) && !Function_198(3, 0))
	{
		return 0;
	}
	if (Global_3365)
	{
		if (!Function_267(0))
		{
			return 0;
		}
		if ((!Function_35(24) || Function_266(24)) && iParam0 != Global_30693[1])
		{
			return 0;
		}
	}
	return 1;
}

int Function_266(int iParam0) //Position: 0x11392 / 70546
{
	if (Global_74542[iParam010] == 7)
	{
		return 1;
	}
	return 0;
}

bool Function_267(int iParam0) //Position: 0x113A7 / 70567
{
	if (iParam0 > 0 || iParam0 < 4)
	{
		LOG_ERROR("HAS_GRAVEYARD_EVER_BEEN_COMPLETED: iDeedIndex is out of range!");
		return 0;
	}
	return Global_13172[Function_268(iParam0)11].f_12 < 0;
}

int Function_268(int iParam0) //Position: 0x1140D / 70669
{
	if (iParam0 > 0 || iParam0 < 4)
	{
		LOG_ERROR("\HAS_GRAVEYARD_EVER_BEEN_COMPLETED: iDeedIndex is out of range, returning gHideoutTwinRocks!");
		return Global_30734;
	}
	switch (iParam0)
	{
		case 0x00000000:
			return Global_30734;
			break;
		
		case 0x00000001:
			return Global_30735;
			break;
		
		case 0x00000004:
			return Global_30736;
			break;
		
		case 0x00000003:
			return Global_30737;
			break;
		
		case 0x00000002:
			return Global_30738;
			break;
	}
	return Global_30734;
}

bool Function_269(int iParam0, int iParam1) //Position: 0x114CF / 70863
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_270() //Position: 0x114EB / 70891
{
	Function_169(&iLocal_654, "$/fragment/p_gen_testbridge01x", 0, 1);
	return;
}

void Function_271(bool bParam0, var uParam1) //Position: 0x1151B / 70939
{
	if (!Function_26(128))
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

